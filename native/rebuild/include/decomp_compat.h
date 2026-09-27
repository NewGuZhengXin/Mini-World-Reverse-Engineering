/*
 * decomp_compat.h - compatibility layer that lets Hex-Rays / IDA pseudocode be
 * compiled by a normal C compiler.
 *
 * The decompiler emits a dialect of C that is close to, but not quite, valid C:
 *
 *   - IDA's own scalar typedefs (_BYTE, _WORD, _DWORD, _QWORD)
 *   - MSVC-style keywords (__int64, __fastcall, __cdecl, __noreturn)
 *   - byte/word access macros (LOBYTE, HIBYTE, BYTEn, ...)
 *   - C++ scope resolution in both definitions and call sites
 *   - template-qualified names (handled by the source transform, not here)
 *
 * Including this header first makes the rest of the translation unit parse.
 */

#ifndef DECOMP_COMPAT_H
#define DECOMP_COMPAT_H

#include <stdarg.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Pull in the real system headers first, so that the generated opaque type
 * list does not have to invent stand-ins for timeval, jmp_buf, wctype_t and
 * friends, and so that their real layouts are available.
 * <ctype.h> is deliberately absent: IDA names two of the binary's own wrappers
 * tolower/toupper, and the header's declarations of them clash with the
 * generated prototypes. */
#include <elf.h>
#include <errno.h>
#include <fcntl.h>
#include <limits.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <time.h>
#include <unistd.h>
#include <wchar.h>
#include <sys/stat.h>
#include <sys/time.h>
#include <sys/types.h>

/* ------------------------------------------------------------------ */
/* IDA scalar types                                                    */
/* ------------------------------------------------------------------ */

/* _BYTE is char and not unsigned char on purpose: Hex-Rays freely mixes
 * "(_BYTE *)" and "(char *)" casts, and subtracting two pointers whose targets
 * are not compatible types is a hard error in C with no way to switch it off. */
typedef char     _BYTE;
typedef uint16_t _WORD;
typedef uint32_t _DWORD;
typedef uint64_t _QWORD;
typedef int8_t   _BOOL1;
typedef int16_t  _BOOL2;
typedef int32_t  _BOOL4;
typedef char     _UNKNOWN;

/* Hex-Rays writes "stru_XXX.field" when the IDB had a named struct type at that
 * address. In this binary the only fields ever touched are the six members of
 * Elf32_Sym, so that is the layout used. */
typedef struct {
  _DWORD st_name;
  _DWORD st_value;
  _DWORD st_size;
  _BYTE  st_info;
  _BYTE  st_other;
  _WORD  st_shndx;
} _decomp_ida_stru;

/* ------------------------------------------------------------------ */
/* MSVC-style scalar keywords                                          */
/* ------------------------------------------------------------------ */

/* clang and the MSVC family already know __int8/16/32/64 as builtin types, and
 * ARM32 clang has no __int128 at all, so the decompiler's spelling is renamed
 * to a private one by tools/transform.py and defined here instead. */
typedef long long          decomp_int64;
typedef unsigned long long decomp_uint64;
typedef int                decomp_int32;
typedef unsigned int       decomp_uint32;
typedef short              decomp_int16;
typedef unsigned short     decomp_uint16;
typedef signed char        decomp_int8;
typedef unsigned char      decomp_uint8;
/* the target is 32-bit ARM: there is no 128-bit integer, so the few places that
 * want one get 64 bits instead. Precision is lost, compilation is not. */
typedef long long          decomp_int128;
typedef unsigned long long decomp_uint128;

/* ------------------------------------------------------------------ */
/* calling conventions and attributes - all no-ops for our purposes    */
/* ------------------------------------------------------------------ */

#define __fastcall
#define __cdecl
#define __stdcall
#define __thiscall
#define __pascal
#define __usercall
#define __userpurge
#define __spoils(...)
#define __unk
#define __pure
#define __hidden
#define __high
#define __low
#define __based(...)
#define __declspec(...)
#define __unaligned

#if defined(__GNUC__)
#  define __noreturn  __attribute__((noreturn))
#  define __NORETURN  __attribute__((noreturn))
#else
#  define __noreturn
#  define __NORETURN
#endif

/* ------------------------------------------------------------------ */
/* sub-register access macros (Hex-Rays emits these constantly)        */
/* ------------------------------------------------------------------ */

/* These must work on both lvalues and rvalues, because Hex-Rays writes things
 * like HIDWORD(COERCE_UNSIGNED_INT64(x)) - and it also *assigns* to them
 * ("LODWORD(v2) = v2 + 1;"), so they have to stay lvalues. A compound literal
 * is the one C construct that satisfies both: it is an lvalue with automatic
 * storage, and it can be built from an arbitrary expression. The cost is that
 * an assignment through one of these macros writes to a temporary instead of
 * the original object. Compilation is preserved; that write is not. */
#define DECOMP_U8(x)  ((uint8_t  *)&(uint32_t){ (uint32_t)(x) })
#define DECOMP_U16(x) ((uint16_t *)&(uint32_t){ (uint32_t)(x) })
#define DECOMP_U32(x) ((uint32_t *)&(uint64_t){ (uint64_t)(x) })

#define LOBYTE(x)   (DECOMP_U8(x)[0])
#define HIBYTE(x)   (DECOMP_U8(x)[3])
#define BYTE1(x)    (DECOMP_U8(x)[1])
#define BYTE2(x)    (DECOMP_U8(x)[2])
#define BYTE3(x)    (DECOMP_U8(x)[3])
#define BYTE4(x)    (DECOMP_U8(x)[4])
#define BYTE5(x)    (DECOMP_U8(x)[5])
#define BYTE6(x)    (DECOMP_U8(x)[6])
#define BYTE7(x)    (DECOMP_U8(x)[7])
#define BYTEn(x, n) (DECOMP_U8(x)[(n)])

#define LOWORD(x)   (DECOMP_U16(x)[0])
#define HIWORD(x)   (DECOMP_U16(x)[1])
#define WORD1(x)    (DECOMP_U16(x)[1])
#define WORD2(x)    (DECOMP_U16(x)[2])
#define WORD3(x)    (DECOMP_U16(x)[3])
#define WORDn(x, n) (DECOMP_U16(x)[(n)])

#define LODWORD(x)  (DECOMP_U32(x)[0])
#define HIDWORD(x)  (DECOMP_U32(x)[1])

#define SLOBYTE(x)  ((int8_t)  DECOMP_U8(x)[0])
#define SHIBYTE(x)  ((int8_t)  DECOMP_U8(x)[3])
#define SLOWORD(x)  ((int16_t) DECOMP_U16(x)[0])
#define SHIWORD(x)  ((int16_t) DECOMP_U16(x)[1])
#define SLODWORD(x) ((int32_t) DECOMP_U32(x)[0])
#define SHIDWORD(x) ((int32_t) DECOMP_U32(x)[1])

#define __PAIR__(hi, lo) (((uint64_t)(uint32_t)(hi) << 32) | (uint32_t)(lo))
#define __PAIR64__(hi, lo) __PAIR__(hi, lo)

/* ------------------------------------------------------------------ */
/* arithmetic helpers the decompiler sometimes emits                   */
/* ------------------------------------------------------------------ */

#if defined(__GNUC__)
#  define __CFADD__(a, b)  __builtin_add_overflow_p((a), (b), (unsigned)0)
#  define __OFADD__(a, b)  __builtin_add_overflow_p((a), (b), (int)0)
#  define __CFSUB__(a, b)  __builtin_sub_overflow_p((a), (b), (unsigned)0)
#  define __OFSUB__(a, b)  __builtin_sub_overflow_p((a), (b), (int)0)
#  define __CFSHL__(a, b)  0
#  define __OFMUL__(a, b)  0
#else
#  define __CFADD__(a, b)  0
#  define __OFADD__(a, b)  0
#  define __CFSUB__(a, b)  0
#  define __OFSUB__(a, b)  0
#  define __CFSHL__(a, b)  0
#  define __OFMUL__(a, b)  0
#endif

/* ------------------------------------------------------------------ */
/* JNI types (the real jni.h is only available with the NDK)           */
/* ------------------------------------------------------------------ */

typedef const struct JNINativeInterface_ *JNIEnv;
typedef const struct JNIInvokeInterface_ *JavaVM;
typedef struct _JavaVM  _JavaVM;
typedef struct _JNIEnv  _JNIEnv;
typedef void           *jobject;
typedef void           *jclass;
typedef void           *jstring;
typedef void           *jarray;
typedef int             jint;
typedef long long       jlong;
typedef float           jfloat;
typedef double          jdouble;
typedef unsigned char   jboolean;
typedef signed char     jbyte;
typedef unsigned short  jchar;
typedef short           jshort;

#define JNI_VERSION_1_6 0x00010006
#define JNI_OK          0
#define JNI_ERR        (-1)
#define JNI_FALSE       0
#define JNI_TRUE        1

/* ------------------------------------------------------------------ */
/* misc                                                                */
/* ------------------------------------------------------------------ */

/* Hex-Rays emits bool/true/false; in C89 none of them exist. */
#ifndef DECOMP_BOOL_DEFINED
#define DECOMP_BOOL_DEFINED 1
typedef int bool;
#ifndef true
#  define true 1
#endif
#ifndef false
#  define false 0
#endif
#endif

#define __STRING(x) #x
#define __XSTRING(x) __STRING(x)

#endif /* DECOMP_COMPAT_H */
