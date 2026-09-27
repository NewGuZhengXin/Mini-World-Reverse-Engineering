// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_1F0000

//======================================================================
// sub_1F162C
// address: 0x001F162C   size: 0x4C (76 bytes)
//======================================================================
void __fastcall sub_1F162C(int a1)
{
  void *v1; // r1
  void *v3; // r1
  void *v4; // r1

  *(_BYTE *)(a1 + 709) = 0;
  *(_BYTE *)(a1 + 708) = 1;
  v1 = *(void **)(a1 + 712);
  if ( v1 != nullptr )
  {
    *(_DWORD *)(a1 + 712) = 0;
    png_free(a1, v1);
  }
  v3 = *(void **)(a1 + 716);
  if ( v3 != nullptr )
  {
    *(_DWORD *)(a1 + 716) = 0;
    png_free(a1, v3);
  }
  v4 = *(void **)(a1 + 720);
  if ( v4 != nullptr )
  {
    *(_DWORD *)(a1 + 720) = 0;
    png_free(a1, v4);
  }
}


//======================================================================
// sub_1F167C
// address: 0x001F167C   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall sub_1F167C(int result, unsigned int a2, signed int a3)
{
  int v3; // r4
  int v6; // r3
  int v7; // r3
  int v8; // r2
  int v9; // r12
  int i; // r3
  int v11; // r1

  v3 = result;
  if ( result != 0 )
  {
    sub_1F162C(result);
    if ( a2 == 2 )
    {
      if ( a3 > 0 )
      {
        *(_DWORD *)(v3 + 712) = png_malloc((_DWORD *)v3, a3);
        v6 = 0;
        do
          *(_BYTE *)(*(_DWORD *)(v3 + 712) + v6++) = -1;
        while ( v6 != a3 );
        *(_DWORD *)(v3 + 716) = png_malloc((_DWORD *)v3, 2 * a3);
        *(_DWORD *)(v3 + 720) = png_malloc((_DWORD *)v3, 2 * a3);
        v7 = 0;
        do
        {
          v8 = 2 * v7++;
          v9 = *(_DWORD *)(v3 + 720);
          *(_WORD *)(*(_DWORD *)(v3 + 716) + v8) = 256;
          *(_WORD *)(v9 + v8) = 256;
        }
        while ( v7 != a3 );
        *(_BYTE *)(v3 + 709) = v7;
      }
      if ( *(_DWORD *)(v3 + 724) == 0 )
      {
        *(_DWORD *)(v3 + 724) = png_malloc((_DWORD *)v3, 0xAu);
        *(_DWORD *)(v3 + 728) = png_malloc((_DWORD *)v3, 0xAu);
      }
      for ( i = 0; i != 10; i += 2 )
      {
        v11 = *(_DWORD *)(v3 + 728);
        *(_WORD *)(*(_DWORD *)(v3 + 724) + i) = 8;
        *(_WORD *)(v11 + i) = 8;
      }
      *(_BYTE *)(v3 + 708) = 2;
    }
    else if ( a2 > 1 )
    {
      png_warning(v3, "Unknown filter heuristic method");
      return 0;
    }
    return 1;
  }
  return result;
}


//======================================================================
// sub_1F2CB8
// address: 0x001F2CB8   size: 0x14C (332 bytes)
//======================================================================
int __fastcall sub_1F2CB8(int a1, int a2)
{
  int v2; // r6
  int v3; // r2
  _DWORD *v4; // r4
  int v5; // r5
  const char *v6; // r7
  unsigned int v7; // r0
  unsigned int v8; // r2
  const char *v9; // r3
  int result; // r0
  const char *v11; // r1
  _BYTE v13[64]; // [sp+24h] [bp-48h] BYREF

  v2 = a1 + 252;
  v3 = *(_DWORD *)(a1 + 376);
  v4 = (_DWORD *)a1;
  if ( (v3 & 4) != 0 )
  {
    v11 = "zstream already in use (internal error)";
    goto LABEL_22;
  }
  if ( v3 != a2 )
  {
    if ( v3 != 0 )
    {
      v5 = deflateEnd(a1 + 312);
      *(_DWORD *)(v2 + 124) = 0;
      if ( v5 != 0 )
      {
        v6 = "end";
        goto LABEL_14;
      }
    }
    if ( a2 == 1 )
    {
      v5 = deflateInit2_(v4 + 78, v4[95], v4[96], v4[97], v4[98], v4[99], "1.2.3", 56);
      v6 = "IDAT";
    }
    else
    {
      if ( a2 != 2 )
      {
        a1 = (int)v4;
        v11 = "invalid zlib state";
        goto LABEL_22;
      }
      v5 = deflateInit2_(v4 + 78, v4[100], v4[101], v4[102], v4[103], v4[104], "1.2.3", 56);
      v6 = "text";
    }
    if ( v5 != 0 )
    {
LABEL_14:
      v7 = png_safecat((int)v13, 0x40u, 0, (int)"zlib failed to initialize compressor (");
      v8 = png_safecat((int)v13, 0x40u, v7, (int)v6);
      switch ( v5 )
      {
        case -4:
          v9 = ") memory error";
          break;
        case -2:
          v9 = ") stream error";
          break;
        case -6:
          v9 = ") version error";
          break;
        default:
          v9 = ") unknown error";
          break;
      }
      png_safecat((int)v13, 0x40u, v8, (int)v9);
      a1 = (int)v4;
      v11 = v13;
LABEL_22:
      png_error(a1, v11);
    }
    *(_DWORD *)(v2 + 124) = a2;
  }
  result = *(_DWORD *)(v2 + 124);
  *(_DWORD *)(v2 + 124) = result | 4;
  return result;
}


//======================================================================
// sub_1F2E38
// address: 0x001F2E38   size: 0x184 (388 bytes)
//======================================================================
int __fastcall sub_1F2E38(int a1, int a2, int a3, signed int a4, _DWORD *a5)
{
  int v5; // r7
  int v7; // r3
  int v8; // r2
  int v9; // r0
  int v10; // r1
  void *v11; // r7
  int v12; // r1
  size_t v13; // r1
  void *v14; // r0
  void **v15; // r7
  int v16; // r2
  int v17; // r0
  int v18; // r1
  void *v19; // r7
  int v20; // r1
  size_t v21; // r1
  void *v22; // r0
  void **v23; // r7
  int v24; // r2
  const char *v25; // r1
  unsigned int v26; // r3
  unsigned int v27; // r2
  int v29; // [sp+0h] [bp-10Ch]
  int v30; // [sp+0h] [bp-10Ch]
  _BYTE v32[260]; // [sp+8h] [bp-104h] BYREF

  v5 = a3;
  a5[2] = 0;
  a5[3] = 0;
  a5[4] = 0;
  *a5 = 0;
  a5[1] = a3;
  if ( a4 == -1 )
  {
    *a5 = a2;
  }
  else
  {
    if ( a4 > 2 )
    {
      png_warning_parameter_signed((unsigned int)v32, 1, 1, a4);
      png_formatted_warning(a1, (int)v32, "Unknown compression type @1");
    }
    sub_1F2CB8(a1, 2);
    *(_DWORD *)(a1 + 312) = a2;
    v7 = *(_DWORD *)(a1 + 372);
    v8 = *(_DWORD *)(a1 + 368);
    *(_DWORD *)(a1 + 316) = v5;
    *(_DWORD *)(a1 + 328) = v7;
    *(_DWORD *)(a1 + 324) = v8;
    do
    {
      deflate(a1 + 312, 0);
      if ( v9 != 0 )
        goto LABEL_22;
      if ( *(_DWORD *)(a1 + 328) == 0 )
      {
        v10 = a5[2];
        v29 = a5[3];
        if ( v10 >= v29 )
        {
          v11 = (void *)a5[4];
          v12 = v10 + 4;
          a5[3] = v12;
          v13 = 4 * v12;
          if ( v11 != nullptr )
          {
            v14 = png_malloc((_DWORD *)a1, v13);
            a5[4] = v14;
            j_memcpy(v14, v11, 4 * v29);
            png_free(a1, v11);
          }
          else
          {
            a5[4] = png_malloc((_DWORD *)a1, v13);
          }
        }
        v15 = (void **)(a5[4] + 4 * a5[2]);
        *v15 = png_malloc((_DWORD *)a1, *(_DWORD *)(a1 + 372));
        j_memcpy(*(void **)(4 * a5[2]++ + a5[4]), *(const void **)(a1 + 368), *(_DWORD *)(a1 + 372));
        v16 = *(_DWORD *)(a1 + 368);
        *(_DWORD *)(a1 + 328) = *(_DWORD *)(a1 + 372);
        *(_DWORD *)(a1 + 324) = v16;
      }
    }
    while ( *(_DWORD *)(a1 + 316) != 0 );
    while ( 1 )
    {
      deflate(a1 + 312, 4u);
      if ( v17 != 0 )
        break;
      if ( *(_DWORD *)(a1 + 328) == 0 )
      {
        v18 = a5[2];
        v30 = a5[3];
        if ( v18 >= v30 )
        {
          v19 = (void *)a5[4];
          v20 = v18 + 4;
          a5[3] = v20;
          v21 = 4 * v20;
          if ( v19 != nullptr )
          {
            v22 = png_malloc((_DWORD *)a1, v21);
            a5[4] = v22;
            j_memcpy(v22, v19, 4 * v30);
            png_free(a1, v19);
          }
          else
          {
            a5[4] = png_malloc((_DWORD *)a1, v21);
          }
        }
        v23 = (void **)(a5[4] + 4 * a5[2]);
        *v23 = png_malloc((_DWORD *)a1, *(_DWORD *)(a1 + 372));
        j_memcpy(*(void **)(4 * a5[2]++ + a5[4]), *(const void **)(a1 + 368), *(_DWORD *)(a1 + 372));
        v24 = *(_DWORD *)(a1 + 368);
        *(_DWORD *)(a1 + 328) = *(_DWORD *)(a1 + 372);
        *(_DWORD *)(a1 + 324) = v24;
      }
    }
    if ( v17 != 1 )
    {
LABEL_22:
      v25 = *(const char **)(a1 + 336);
      if ( v25 == nullptr )
        v25 = "zlib error";
      png_error(a1, v25);
    }
    v26 = *(_DWORD *)(a1 + 372);
    v27 = *(_DWORD *)(a1 + 328);
    v5 = a5[2] * v26;
    if ( v27 < v26 )
      v5 += v26 - v27;
  }
  return v5;
}


//======================================================================
// sub_1F2FC4
// address: 0x001F2FC4   size: 0x8A (138 bytes)
//======================================================================
signed int __fastcall sub_1F2FC4(int a1)
{
  int v1; // r6
  signed int result; // r0
  const char *v4; // r7
  const char *v5; // r2
  _BYTE v6[260]; // [sp+0h] [bp-104h] BYREF

  v1 = a1 + 252;
  if ( (*(_DWORD *)(a1 + 376) & 4) == 0 )
    return png_warning(a1, "zstream not in use (internal error)");
  result = deflateReset((_DWORD *)(a1 + 312));
  *(_DWORD *)(v1 + 124) &= ~4u;
  if ( result != 0 )
  {
    switch ( result )
    {
      case -4:
        v4 = "memory";
        break;
      case -2:
        v4 = "stream";
        break;
      case -6:
        v4 = "version";
        break;
      default:
        v4 = "unknown";
        break;
    }
    png_warning_parameter_signed((unsigned int)v6, 1, 1, result);
    png_warning_parameter((unsigned int)v6, 2, (int)v4);
    v5 = *(const char **)(v1 + 84);
    if ( v5 == nullptr )
      v5 = "[no zlib message]";
    png_warning_parameter((unsigned int)v6, 3, (int)v5);
    return png_formatted_warning(a1, (int)v6, "zlib failed to reset compressor: @1(@2): @3");
  }
  return result;
}


//======================================================================
// sub_1F307C
// address: 0x001F307C   size: 0x6C (108 bytes)
//======================================================================
_DWORD *__fastcall sub_1F307C(_DWORD *result, int a2, int a3)
{
  _DWORD *v4; // r4
  _BYTE v5[4]; // [sp+Ch] [bp-10h] BYREF
  _BYTE v6[4]; // [sp+10h] [bp-Ch] BYREF

  v4 = result;
  if ( result != nullptr )
  {
    result[219] = 34;
    png_save_uint_32(v5, a3);
    png_save_uint_32(v6, a2);
    png_write_data((int)v4);
    v4[112] = a2;
    png_reset_crc((int)v4);
    result = png_calculate_crc(v4, v6, 4u);
    v4[219] = 66;
  }
  return result;
}


//======================================================================
// sub_1F31B0
// address: 0x001F31B0   size: 0xFA (250 bytes)
//======================================================================
__int64 __fastcall sub_1F31B0(__int64 a1, unsigned int a2)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r3
  unsigned int i; // r2
  int v10; // r3
  _BYTE *v11; // r2
  int v12; // r0
  int j; // r7
  int v14; // r7
  unsigned int v15; // r3
  unsigned int v16; // r2
  __int64 v18; // [sp+0h] [bp-Ch]

  v18 = a1;
  v2 = HIDWORD(a1);
  HIDWORD(a1) = *(_DWORD *)HIDWORD(a1);
  v3 = (_DWORD *)a1;
  if ( HIDWORD(a1) != 0 )
  {
    png_write_chunk_data((_DWORD *)a1, (_BYTE *)HIDWORD(a1), a2);
    return v18;
  }
  v4 = a1 + 252;
  if ( a2 > 1 )
  {
    v5 = *(_DWORD *)(v2 + 4);
    if ( v5 <= 0x3FFF && *(_DWORD *)(v4 + 120) > 1u )
    {
      v6 = *(_DWORD *)(v2 + 8);
      if ( v6 != 0 )
        v7 = ***(unsigned __int8 ***)(v2 + 16);
      else
        v7 = **(unsigned __int8 **)(v4 + 116);
      if ( (v7 & 0xF) != 8 || (v7 & 0xF0) > 0x70 )
        png_error((int)v3, "Invalid zlib compression method or flags in non-IDAT chunk");
      v8 = v7 >> 4;
      for ( i = 1 << (v8 + 7); v5 <= i && i > 0xFF; i >>= 1 )
        --v8;
      v10 = (16 * v8) | 8;
      if ( v6 != 0 )
      {
        v11 = **(_BYTE ***)(v2 + 16);
        if ( (unsigned __int8)*v11 == v10 )
          goto LABEL_20;
        *v11 = v10;
        v14 = **(_DWORD **)(v2 + 16);
      }
      else
      {
        **(_BYTE **)(v4 + 116) = v10;
        v14 = *(_DWORD *)(v4 + 116);
      }
      v12 = *(_BYTE *)(v14 + 1) & 0xE0;
      HIDWORD(v18) = v12 + 31;
      *(_BYTE *)(v14 + 1) = v12 + 31 - ((v10 << 8) + v12) % 0x1Fu;
    }
  }
LABEL_20:
  for ( j = 0; j < *(_DWORD *)(v2 + 8); ++j )
  {
    HIDWORD(v18) = 4 * j;
    png_write_chunk_data(v3, *(_BYTE **)(*(_DWORD *)(v2 + 16) + 4 * j), *(_DWORD *)(v4 + 120));
    png_free((int)v3, *(void **)(*(_DWORD *)(v2 + 16) + HIDWORD(v18)));
  }
  if ( *(_DWORD *)(v2 + 12) != 0 )
    png_free((int)v3, *(void **)(v2 + 16));
  v15 = *(_DWORD *)(v4 + 76);
  v16 = *(_DWORD *)(v4 + 120);
  if ( v15 < v16 )
    png_write_chunk_data(v3, *(_BYTE **)(v4 + 116), v16 - v15);
  sub_1F2FC4((int)v3);
  return v18;
}


//======================================================================
// sub_1F32DC
// address: 0x001F32DC   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_1F32DC(_DWORD *result, int a2, _BYTE *a3, unsigned int a4)
{
  _DWORD *v4; // r4
  int v7; // r1
  int v8; // r2

  v4 = result;
  if ( result != nullptr )
  {
    sub_1F307C(result, a2, a4);
    png_write_chunk_data(v4, a3, a4);
    png_write_chunk_end((int)v4, v7, v8);
    return v4;
  }
  return result;
}


//======================================================================
// sub_1F5078
// address: 0x001F5078   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall sub_1F5078(size_t a1)
{
  return j_malloc(a1);
}


//======================================================================
// sub_1F5080
// address: 0x001F5080   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_1F5080(void *a1)
{
  if ( a1 != nullptr )
    j_free(a1);
}


//======================================================================
// sub_1F61B0
// address: 0x001F61B0   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1F61B0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_1F6B60
// address: 0x001F6B60   size: 0x22 (34 bytes)
//======================================================================
int sub_1F6B60()
{
  int v0; // r4
  int v1; // r6
  size_t v2; // r4
  void *v3; // r0
  void *v4; // r0

  v2 = v0 * v1;
  v3 = (void *)ialloc();
  if ( v3 == nullptr )
    v3 = (void *)sub_1F8E98();
  v4 = j_memset(v3, 0, v2);
  return def_1F88AA(v4);
}


//======================================================================
// sub_1F6B82
// address: 0x001F6B82   size: 0x848 (2120 bytes)
//======================================================================
int __fastcall sub_1F6B82(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  unsigned int v29; // r4
  unsigned int v30; // r5
  int v31; // r7
  double v32; // r0
  _DWORD *v33; // r3
  _DWORD *v34; // r2
  _DWORD *v35; // r3
  _DWORD *v36; // r2
  _DWORD *v37; // r3
  _DWORD *v38; // r2
  _WORD *v39; // r2
  _WORD *v40; // r3
  _BYTE *v41; // r3
  _BYTE *v42; // r2
  char v44; // r1
  int v45; // r6
  int v46; // r6
  int v47; // r6
  int v48; // r6
  int v49; // r5
  int v50; // r6
  int v51; // r0
  _BYTE *v52; // r7
  _DWORD *v53; // r3
  _DWORD *v54; // r2
  unsigned int v55; // r1
  _DWORD *v56; // r2
  _DWORD *v57; // r3
  _DWORD *v58; // r3
  _DWORD *v59; // r2
  _WORD *v60; // r3
  _WORD *v61; // r2
  _BYTE *v62; // r3
  _BYTE *v63; // r2
  char v64; // r1
  int v65; // r5
  int v66; // r5
  int v67; // r6
  int v68; // r6
  int v69; // r5
  int v70; // r6
  int v71; // r0
  _BYTE *v72; // r7
  _DWORD *v73; // r2
  _DWORD *v74; // r3
  _DWORD *v75; // r2
  _DWORD *v76; // r3
  _DWORD *v77; // r2
  _DWORD *v78; // r3
  _WORD *v79; // r2
  _WORD *v80; // r3
  char *v81; // r3
  _BYTE *v82; // r2
  char v83; // r1
  int v84; // r6
  int v85; // r6
  int v86; // r6
  int v87; // r0
  int v88; // r7
  int jj; // r4
  int k; // r6
  int i; // r4
  float v92; // r5
  int j; // r6
  float v94; // r0
  int v95; // r3
  float v96; // r0
  float v97; // r0
  int v98; // r3
  int m; // r5
  float v100; // r0
  float v101; // r4
  int v102; // r4
  double v103; // kr00_8
  int v104; // r4
  double v105; // kr08_8
  int v106; // r6
  int v107; // r0
  int v108; // r7
  int v109; // r4
  int v110; // r6
  int v111; // r5
  _DWORD *v112; // r5
  int v113; // r4
  _WORD *v114; // r6
  int v115; // r5
  int v116; // r5
  _BYTE *kk; // r4
  int mm; // r6
  float v119; // r0
  int v120; // r3
  float v121; // r0
  char v122; // r3
  float v123; // r0
  int v124; // r3
  int v125; // r4
  float v126; // r0
  __int16 v127; // r3
  double v128; // r0
  int v129; // r6
  int v130; // r6
  int v131; // r4
  float v132; // r0
  int v133; // r3
  float v134; // r0
  double *v135; // r5
  int v136; // r6
  double v137; // r0
  double *v138; // [sp+Ch] [bp+Ch]
  int ii; // [sp+28h] [bp+28h]
  int n; // [sp+28h] [bp+28h]
  double v141; // [sp+28h] [bp+28h]
  unsigned int i2; // [sp+28h] [bp+28h]
  unsigned int i1; // [sp+28h] [bp+28h]
  unsigned int v144; // [sp+28h] [bp+28h]
  unsigned int nn; // [sp+28h] [bp+28h]
  float v146; // [sp+28h] [bp+28h]
  float v147; // [sp+30h] [bp+30h]
  double v148; // [sp+30h] [bp+30h]
  double v149; // [sp+30h] [bp+30h]
  double v150; // [sp+30h] [bp+30h]
  unsigned int v151; // [sp+3Ch] [bp+3Ch]
  unsigned int v152; // [sp+3Ch] [bp+3Ch]

  if ( v30 == a4 )
  {
    v87 = ialloc();
    v88 = v87;
    if ( v87 == 0 )
      sub_1F8D76();
    v151 = v29 >> 2;
    LODWORD(v32) = a29 - 5120;
    switch ( a29 )
    {
      case 5120:
      case 5121:
        for ( i = 0; i != v151; ++i )
        {
          v92 = 0.0;
          for ( j = 0; j != 3; ++j )
          {
            v94 = (float)*(unsigned __int8 *)(a19 + 4 * i + j);
            v95 = 4 * j;
            v96 = v92 + (float)(v94 * *(float *)((char *)&unk_433950 + v95));
            v92 = v96;
          }
          LODWORD(v32) = (unsigned int)v96;
          *(_BYTE *)(v88 + i) = LOBYTE(v32);
        }
        return def_1F88AA(LODWORD(v32));
      case 5122:
      case 5123:
      case 5131:
        for ( k = 0; k != v151; ++k )
        {
          v101 = 0.0;
          for ( m = 0; m != 6; m += 2 )
          {
            v97 = (float)*(unsigned __int16 *)(a19 + 8 * k + m);
            v98 = 2 * m;
            v100 = v101 + (float)(v97 * *(float *)((char *)&unk_433950 + v98));
            v101 = v100;
          }
          LODWORD(v32) = (unsigned int)v100;
          *(_WORD *)(v88 + 2 * k) = LOWORD(v32);
        }
        return def_1F88AA(LODWORD(v32));
      case 5124:
      case 5125:
        for ( n = 0; n != v151; ++n )
        {
          v102 = 0;
          v103 = 0.0;
          do
          {
            v32 = v103 + (float)((float)*(unsigned int *)(a19 + 16 * n + v102) * *(float *)((char *)&unk_433950 + v102));
            v102 += 4;
            v103 = v32;
          }
          while ( v102 != 12 );
          LODWORD(v32) = (unsigned int)v32;
          *(_DWORD *)(v88 + 4 * n) = LODWORD(v32);
        }
        return def_1F88AA(LODWORD(v32));
      case 5126:
        for ( ii = 0; ii != v151; ++ii )
        {
          v104 = 0;
          v105 = 0.0;
          do
          {
            v32 = v105 + (float)(*(float *)(a19 + 16 * ii + v104) * *(float *)((char *)&unk_433950 + v104));
            v104 += 4;
            v105 = v32;
          }
          while ( v104 != 12 );
          *(float *)&v32 = v32;
          *(_DWORD *)(v88 + 4 * ii) = LODWORD(v32);
        }
        return def_1F88AA(LODWORD(v32));
      case 5127:
      case 5128:
      case 5129:
        goto LABEL_127;
      case 5130:
        for ( jj = 0; jj != v151; ++jj )
        {
          v106 = 0;
          v141 = 0.0;
          do
          {
            v32 = v141 + *(float *)((char *)&unk_433950 + v106) * *(double *)(a19 + 32 * jj + 2 * v106);
            v106 += 4;
            v141 = v32;
          }
          while ( v106 != 12 );
          *(double *)(v88 + 8 * jj) = v32;
        }
        return def_1F88AA(LODWORD(v32));
      default:
        return def_1F88AA(LODWORD(v32));
    }
  }
  if ( v30 <= a4 )
  {
    if ( v30 == 6406 )
      a1 = sub_1F73CA();
    if ( v30 == a3 )
    {
      v51 = ialloc();
      v52 = (_BYTE *)v51;
      if ( v51 == 0 )
        sub_1F8D76();
      LODWORD(v32) = a29 - 5120;
      switch ( a29 )
      {
        case 5120:
        case 5121:
          v62 = (_BYTE *)a19;
          v63 = v52;
          while ( (unsigned int)&v62[-a19] < v29 )
          {
            *v63 = *v62;
            v63[1] = v62[1];
            v64 = v62[2];
            v62 += 4;
            v63[2] = v64;
            v63 += 3;
          }
          return def_1F88AA(LODWORD(v32));
        case 5122:
        case 5123:
        case 5131:
          v60 = (_WORD *)a19;
          v61 = v52;
          HIDWORD(v32) = 0;
          while ( HIDWORD(v32) < v29 )
          {
            HIDWORD(v32) += 4;
            *v61 = *v60;
            v61[1] = v60[1];
            LODWORD(v32) = (unsigned __int16)v60[2];
            v60 += 4;
            v61[2] = LOWORD(v32);
            v61 += 3;
          }
          return def_1F88AA(LODWORD(v32));
        case 5124:
        case 5125:
          v58 = (_DWORD *)a19;
          v59 = v52;
          HIDWORD(v32) = 0;
          while ( HIDWORD(v32) < v29 )
          {
            HIDWORD(v32) += 4;
            *v59 = *v58;
            LODWORD(v32) = v58[1];
            v59[1] = LODWORD(v32);
            v65 = v58[2];
            v58 += 4;
            v59[2] = v65;
            v59 += 3;
          }
          return def_1F88AA(LODWORD(v32));
        case 5126:
          v56 = (_DWORD *)a19;
          v57 = v52;
          HIDWORD(v32) = 0;
          while ( HIDWORD(v32) < v29 )
          {
            HIDWORD(v32) += 4;
            *v57 = *v56;
            LODWORD(v32) = v56[1];
            v57[1] = LODWORD(v32);
            v66 = v56[2];
            v56 += 4;
            v57[2] = v66;
            v57 += 3;
          }
          return def_1F88AA(LODWORD(v32));
        case 5127:
        case 5128:
        case 5129:
          goto LABEL_127;
        case 5130:
          v53 = (_DWORD *)a19;
          v54 = v52;
          v55 = 0;
          while ( v55 < v29 )
          {
            v67 = v53[1];
            *v54 = *v53;
            v54[1] = v67;
            v68 = v53[3];
            v54[2] = v53[2];
            v54[3] = v68;
            v55 += 4;
            v69 = v53[4];
            v70 = v53[5];
            v53 += 8;
            v54[4] = v69;
            v54[5] = v70;
            v54 += 6;
          }
          return def_1F88AA(LODWORD(v32));
        default:
          return def_1F88AA(LODWORD(v32));
      }
    }
    a1 = sub_1F8F6A(a1);
  }
  if ( v30 == 32992 )
  {
    v71 = ialloc();
    v72 = (_BYTE *)v71;
    if ( v71 == 0 )
      sub_1F8D76();
    LODWORD(v32) = a29 - 5120;
    switch ( a29 )
    {
      case 5120:
      case 5121:
        v81 = (char *)a19;
        v82 = v72;
        while ( (unsigned int)&v81[-a19] < v29 )
        {
          *v82 = v81[2];
          v82[1] = v81[1];
          v83 = *v81;
          v81 += 4;
          v82[2] = v83;
          v82 += 3;
        }
        return def_1F88AA(LODWORD(v32));
      case 5122:
      case 5123:
      case 5131:
        v79 = v72;
        HIDWORD(v32) = 0;
        v80 = (_WORD *)(a19 + 4);
        while ( HIDWORD(v32) < v29 )
        {
          HIDWORD(v32) += 4;
          *v79 = *v80;
          v79[1] = *(v80 - 1);
          LODWORD(v32) = (unsigned __int16)*(v80 - 2);
          v80 += 4;
          v79[2] = LOWORD(v32);
          v79 += 3;
        }
        return def_1F88AA(LODWORD(v32));
      case 5124:
      case 5125:
        v77 = v72;
        HIDWORD(v32) = 0;
        v78 = (_DWORD *)(a19 + 8);
        while ( HIDWORD(v32) < v29 )
        {
          HIDWORD(v32) += 4;
          *v77 = *v78;
          v77[1] = *(v78 - 1);
          LODWORD(v32) = *(v78 - 2);
          v78 += 4;
          v77[2] = LODWORD(v32);
          v77 += 3;
        }
        return def_1F88AA(LODWORD(v32));
      case 5126:
        v75 = v72;
        HIDWORD(v32) = 0;
        v76 = (_DWORD *)(a19 + 8);
        while ( HIDWORD(v32) < v29 )
        {
          HIDWORD(v32) += 4;
          *v75 = *v76;
          v75[1] = *(v76 - 1);
          LODWORD(v32) = *(v76 - 2);
          v76 += 4;
          v75[2] = LODWORD(v32);
          v75 += 3;
        }
        return def_1F88AA(LODWORD(v32));
      case 5127:
      case 5128:
      case 5129:
        goto LABEL_127;
      case 5130:
        v73 = v72;
        HIDWORD(v32) = 0;
        v74 = (_DWORD *)(a19 + 16);
        while ( HIDWORD(v32) < v29 )
        {
          v84 = v74[1];
          *v73 = *v74;
          v73[1] = v84;
          v85 = *(v74 - 1);
          v73[2] = *(v74 - 2);
          v73[3] = v85;
          LODWORD(v32) = v74 - 4;
          v86 = *(v74 - 3);
          HIDWORD(v32) += 4;
          v73[4] = *(v74 - 4);
          v73[5] = v86;
          v74 += 8;
          v73 += 6;
        }
        return def_1F88AA(LODWORD(v32));
      default:
        return def_1F88AA(LODWORD(v32));
    }
  }
  if ( v30 != 32993 )
  {
    if ( v30 != 6410 )
      sub_1F8F6A(a1);
    v107 = ialloc();
    v108 = v107;
    if ( v107 == 0 )
      sub_1F8E98();
    LODWORD(v32) = a29 - 5120;
    v152 = 2 * (v29 >> 2);
    switch ( a29 )
    {
      case 5120:
      case 5121:
        v116 = a19;
        for ( kk = (_BYTE *)v108; (unsigned int)&kk[-v108] < v152; kk += 2 )
        {
          v146 = 0.0;
          for ( mm = 0; mm != 3; ++mm )
          {
            v119 = (float)*(unsigned __int8 *)(v116 + mm);
            v120 = 4 * mm;
            v121 = v146 + (float)(v119 * *(float *)((char *)&unk_433950 + v120));
            v146 = v121;
          }
          LODWORD(v32) = (unsigned int)v121;
          *kk = LOBYTE(v32);
          v122 = *(_BYTE *)(v116 + 3);
          v116 += 4;
          kk[1] = v122;
        }
        return def_1F88AA(LODWORD(v32));
      case 5122:
      case 5123:
      case 5131:
        v114 = (_WORD *)v108;
        v115 = a19;
        for ( nn = 0; ; nn += 2 )
        {
          LODWORD(v32) = nn;
          if ( nn >= v152 )
            break;
          v125 = 0;
          v147 = 0.0;
          do
          {
            v123 = (float)*(unsigned __int16 *)(v115 + v125);
            v124 = 2 * v125;
            v125 += 2;
            v126 = v147 + (float)(v123 * *(float *)((char *)&unk_433950 + v124));
            v147 = v126;
          }
          while ( v125 != 6 );
          *v114 = (unsigned int)v126;
          v127 = *(_WORD *)(v115 + 6);
          v115 += 8;
          v114[1] = v127;
          v114 += 2;
        }
        return def_1F88AA(LODWORD(v32));
      case 5124:
      case 5125:
        v144 = 0;
        v112 = (_DWORD *)v108;
        v113 = a19;
        while ( 1 )
        {
          LODWORD(v32) = v152;
          if ( v144 >= v152 )
            break;
          v129 = 0;
          v148 = 0.0;
          do
          {
            v128 = v148 + (float)((float)*(unsigned int *)(v113 + v129) * *(float *)((char *)&unk_433950 + v129));
            v129 += 4;
            v148 = v128;
          }
          while ( v129 != 12 );
          *v112 = (unsigned int)v128;
          v130 = *(_DWORD *)(v113 + 12);
          v113 += 16;
          v112[1] = v130;
          v112 += 2;
          v144 += 2;
        }
        return def_1F88AA(LODWORD(v32));
      case 5126:
        LODWORD(v32) = 0;
        v110 = v108;
        v111 = a19;
        for ( i1 = 0; i1 < v152; i1 += 2 )
        {
          v131 = 0;
          v149 = 0.0;
          do
          {
            v32 = v149 + (float)(*(float *)(v111 + v131) * *(float *)((char *)&unk_433950 + v131));
            v131 += 4;
            v149 = v32;
          }
          while ( v131 != 12 );
          v132 = v32;
          *(float *)v110 = v132;
          v133 = *(_DWORD *)(v111 + 12);
          v111 += 16;
          LODWORD(v32) = i1 + 2;
          *(_DWORD *)(v110 + 4) = v133;
          v110 += 8;
        }
        return def_1F88AA(LODWORD(v32));
      case 5127:
      case 5128:
      case 5129:
        goto LABEL_127;
      case 5130:
        v138 = (double *)v108;
        v109 = a19;
        for ( i2 = 0; i2 < v152; i2 += 2 )
        {
          v136 = 0;
          v150 = 0.0;
          do
          {
            v134 = *(float *)((char *)&unk_433950 + v136);
            v135 = (double *)(v109 + 2 * v136);
            v136 += 4;
            v137 = v150 + v134 * *v135;
            v150 = v137;
          }
          while ( v136 != 12 );
          *v138 = v137;
          v32 = *(double *)(v109 + 24);
          v138[1] = v32;
          v138 += 2;
          v109 += 32;
        }
        return def_1F88AA(LODWORD(v32));
      default:
        return def_1F88AA(LODWORD(v32));
    }
  }
  v31 = ialloc();
  if ( v31 == 0 )
    sub_1F8E98();
  LODWORD(v32) = a29 - 5120;
  switch ( a29 )
  {
    case 5120:
    case 5121:
      v41 = (_BYTE *)a19;
      v42 = (_BYTE *)v31;
      while ( (unsigned int)&v41[-a19] < v29 )
      {
        *v42 = v41[2];
        v42[1] = v41[1];
        v42[2] = *v41;
        v44 = v41[3];
        v41 += 4;
        v42[3] = v44;
        v42 += 4;
      }
      break;
    case 5122:
    case 5123:
    case 5131:
      v39 = (_WORD *)v31;
      HIDWORD(v32) = 0;
      v40 = (_WORD *)(a19 + 4);
      while ( HIDWORD(v32) < v29 )
      {
        HIDWORD(v32) += 4;
        *v39 = *v40;
        v39[1] = *(v40 - 1);
        v39[2] = *(v40 - 2);
        LODWORD(v32) = (unsigned __int16)v40[1];
        v40 += 4;
        v39[3] = LOWORD(v32);
        v39 += 4;
      }
      break;
    case 5124:
    case 5125:
      v37 = (_DWORD *)v31;
      HIDWORD(v32) = 0;
      v38 = (_DWORD *)(a19 + 8);
      while ( HIDWORD(v32) < v29 )
      {
        HIDWORD(v32) += 4;
        *v37 = *v38;
        v37[1] = *(v38 - 1);
        v37[2] = *(v38 - 2);
        LODWORD(v32) = v38[1];
        v38 += 4;
        v37[3] = LODWORD(v32);
        v37 += 4;
      }
      break;
    case 5126:
      v35 = (_DWORD *)v31;
      HIDWORD(v32) = 0;
      v36 = (_DWORD *)(a19 + 8);
      while ( HIDWORD(v32) < v29 )
      {
        HIDWORD(v32) += 4;
        *v35 = *v36;
        v35[1] = *(v36 - 1);
        LODWORD(v32) = *(v36 - 2);
        v35[2] = LODWORD(v32);
        v45 = v36[1];
        v36 += 4;
        v35[3] = v45;
        v35 += 4;
      }
      break;
    case 5127:
    case 5128:
    case 5129:
LABEL_127:
      JUMPOUT(0x1F8F86);
    case 5130:
      v33 = (_DWORD *)v31;
      HIDWORD(v32) = 0;
      v34 = (_DWORD *)(a19 + 16);
      while ( HIDWORD(v32) < v29 )
      {
        v46 = v34[1];
        *v33 = *v34;
        v33[1] = v46;
        v47 = *(v34 - 1);
        v33[2] = *(v34 - 2);
        v33[3] = v47;
        LODWORD(v32) = v34 - 4;
        v48 = *(v34 - 3);
        v33[4] = *(v34 - 4);
        v33[5] = v48;
        HIDWORD(v32) += 4;
        v49 = v34[2];
        v50 = v34[3];
        v34 += 8;
        v33[6] = v49;
        v33[7] = v50;
        v33 += 8;
      }
      break;
    default:
      return def_1F88AA(LODWORD(v32));
  }
  return def_1F88AA(LODWORD(v32));
}


//======================================================================
// sub_1F73CA
// address: 0x001F73CA   size: 0xEA (234 bytes)
//======================================================================
int __fastcall sub_1F73CA(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  unsigned int v29; // r4
  int v30; // r7
  unsigned int v31; // r4
  int v32; // r0
  _DWORD *v33; // r3
  int *v34; // r2
  _DWORD *v35; // r4
  _DWORD *v36; // r3
  int *v37; // r2
  _DWORD *v38; // r4
  _DWORD *v39; // r3
  int *v40; // r2
  _DWORD *v41; // r4
  _WORD *v42; // r3
  __int16 *v43; // r2
  _WORD *v44; // r4
  int i; // r3
  __int16 v47; // r1
  int v48; // r6
  int v49; // r5
  int v50; // r6

  v30 = ialloc();
  if ( v30 == 0 )
    sub_1F8E98();
  v31 = v29 >> 2;
  v32 = a29 - 5120;
  switch ( a29 )
  {
    case 5120:
    case 5121:
      for ( i = 0; i != v31; ++i )
        *(_BYTE *)(v30 + i) = *(_BYTE *)(a19 + 4 * i + 3);
      break;
    case 5122:
    case 5123:
    case 5131:
      v42 = (_WORD *)v30;
      v43 = (__int16 *)(a19 + 6);
      v44 = (_WORD *)(v30 + 2 * v31);
      while ( v42 != v44 )
      {
        v47 = *v43;
        v43 += 4;
        *v42++ = v47;
      }
      break;
    case 5124:
    case 5125:
      v39 = (_DWORD *)v30;
      v40 = (int *)(a19 + 12);
      v41 = (_DWORD *)(v30 + 4 * v31);
      while ( v39 != v41 )
      {
        v48 = *v40;
        v40 += 4;
        *v39++ = v48;
      }
      break;
    case 5126:
      v36 = (_DWORD *)v30;
      v37 = (int *)(a19 + 12);
      v38 = (_DWORD *)(v30 + 4 * v31);
      while ( v36 != v38 )
      {
        v32 = *v37;
        v37 += 4;
        *v36++ = v32;
      }
      break;
    case 5127:
    case 5128:
    case 5129:
      JUMPOUT(0x1F8F86);
    case 5130:
      v33 = (_DWORD *)v30;
      v34 = (int *)(a19 + 24);
      v35 = (_DWORD *)(v30 + 8 * v31);
      while ( v33 != v35 )
      {
        v49 = *v34;
        v50 = v34[1];
        v34 += 8;
        *v33 = v49;
        v33[1] = v50;
        v33 += 2;
      }
      break;
    default:
      return def_1F88AA(v32);
  }
  return def_1F88AA(v32);
}


//======================================================================
// sub_1F74B4
// address: 0x001F74B4   size: 0x850 (2128 bytes)
//======================================================================
int __fastcall sub_1F74B4(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        unsigned __int8 *a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  unsigned int v29; // r4
  unsigned int v30; // r5
  int v31; // r7
  __int64 v32; // r0
  _DWORD *v33; // r3
  _DWORD *v34; // r2
  _DWORD *v35; // r3
  _DWORD *v36; // r2
  _DWORD *v37; // r3
  _DWORD *v38; // r2
  _WORD *v39; // r2
  _WORD *v40; // r3
  char *v41; // r3
  _BYTE *v42; // r2
  char v44; // r1
  int v45; // r6
  int v46; // r6
  int v47; // r6
  int v48; // r0
  _BYTE *v49; // r7
  unsigned int v50; // r5
  _DWORD *v51; // r2
  _DWORD *v52; // r3
  _DWORD *v53; // r2
  _DWORD *v54; // r3
  _WORD *v55; // r2
  _WORD *v56; // r3
  _BYTE *v57; // r3
  _BYTE *v58; // r2
  char v59; // r1
  __int16 v60; // r5
  int v61; // r6
  int v62; // r5
  int v63; // r3
  int v64; // r3
  __int64 v65; // r2
  int v66; // r0
  _BYTE *v67; // r7
  unsigned int v68; // r5
  _DWORD *v69; // r3
  _DWORD *v70; // r2
  _DWORD *v71; // r3
  _DWORD *v72; // r2
  _WORD *v73; // r3
  _WORD *v74; // r2
  char *v75; // r3
  _BYTE *v76; // r2
  char v77; // r1
  __int16 v78; // r5
  int v79; // r5
  int v80; // r5
  int v81; // r3
  int v82; // r3
  int v83; // r3
  int v84; // r0
  _BYTE *v85; // r7
  int jj; // r6
  _DWORD *v87; // r5
  float *v88; // r4
  int m; // r6
  unsigned __int8 *v90; // r4
  _BYTE *k; // r5
  float v92; // r0
  int v93; // r3
  int n; // r5
  float v95; // r0
  float v96; // r4
  int v97; // r4
  double v98; // kr00_8
  int v99; // r4
  int v100; // r0
  _BYTE *v101; // r7
  unsigned int v102; // r3
  _BYTE *v103; // r4
  _DWORD *j; // r6
  _DWORD *v105; // r4
  _WORD *v106; // r4
  _BYTE *v107; // r4
  float v108; // r5
  int i; // r6
  float v110; // r0
  int v111; // r3
  float v112; // r0
  float v113; // r0
  int v114; // r3
  int v115; // r6
  float v116; // r0
  float v117; // r5
  float v118; // r0
  int v119; // r6
  float v120; // r5
  int v121; // r4
  float v122; // r5
  int v123; // r6
  int ii; // [sp+28h] [bp+28h]
  double v125; // [sp+28h] [bp+28h]
  unsigned __int8 *v126; // [sp+28h] [bp+28h]
  unsigned __int8 *v127; // [sp+28h] [bp+28h]
  unsigned __int8 *v128; // [sp+28h] [bp+28h]
  unsigned __int8 *v129; // [sp+28h] [bp+28h]
  double v130; // [sp+28h] [bp+28h]
  unsigned int v131; // [sp+3Ch] [bp+3Ch]
  unsigned __int8 *v132; // [sp+3Ch] [bp+3Ch]
  _WORD *v133; // [sp+3Ch] [bp+3Ch]
  _BYTE *v134; // [sp+3Ch] [bp+3Ch]

  if ( v30 == 6408 )
  {
    v66 = ialloc();
    v67 = (_BYTE *)v66;
    if ( v66 != 0 )
    {
      LODWORD(v32) = a29 - 5120;
      switch ( a29 )
      {
        case 5120:
        case 5121:
          v75 = (char *)a19;
          v76 = v67;
          LODWORD(v32) = 255;
          while ( v75 - (char *)a19 < v29 )
          {
            *v76 = v75[2];
            v76[1] = v75[1];
            v77 = *v75;
            v76[3] = -1;
            v75 += 3;
            v76[2] = v77;
            v76 += 4;
          }
          return def_1F88AA(v32);
        case 5122:
        case 5123:
        case 5131:
          v73 = v67;
          v74 = a19 + 4;
          v32 = 0xFFFFFFFFLL;
          while ( HIDWORD(v32) < v29 )
          {
            HIDWORD(v32) += 3;
            *v73 = *v74;
            v73[1] = *(v74 - 1);
            v78 = *(v74 - 2);
            v74 += 3;
            v73[3] = -1;
            v73[2] = v78;
            v73 += 4;
          }
          return def_1F88AA(v32);
        case 5124:
        case 5125:
          v71 = v67;
          v72 = a19 + 8;
          v32 = 0xFFFFFFFFLL;
          while ( HIDWORD(v32) < v29 )
          {
            HIDWORD(v32) += 3;
            *v71 = *v72;
            v71[1] = *(v72 - 1);
            v79 = *(v72 - 2);
            v72 += 3;
            v71[3] = -1;
            v71[2] = v79;
            v71 += 4;
          }
          return def_1F88AA(v32);
        case 5126:
          v69 = v67;
          v70 = a19 + 8;
          v32 = 1065353216;
          while ( HIDWORD(v32) < v29 )
          {
            HIDWORD(v32) += 3;
            *v69 = *v70;
            v69[1] = *(v70 - 1);
            v80 = *(v70 - 2);
            v70 += 3;
            v69[3] = 1065353216;
            v69[2] = v80;
            v69 += 4;
          }
          return def_1F88AA(v32);
        case 5127:
        case 5128:
        case 5129:
          goto LABEL_123;
        case 5130:
          HIDWORD(v32) = v67;
          v68 = 0;
          LODWORD(v32) = a19 + 16;
          while ( v68 < v29 )
          {
            v81 = *(_DWORD *)(v32 + 4);
            *(_DWORD *)HIDWORD(v32) = *(_DWORD *)v32;
            *(_DWORD *)(HIDWORD(v32) + 4) = v81;
            v82 = *(_DWORD *)(v32 - 4);
            *(_DWORD *)(HIDWORD(v32) + 8) = *(_DWORD *)(v32 - 8);
            *(_DWORD *)(HIDWORD(v32) + 12) = v82;
            v83 = *(_DWORD *)(v32 - 12);
            v68 += 3;
            *(_DWORD *)(HIDWORD(v32) + 16) = *(_DWORD *)(v32 - 16);
            *(_DWORD *)(HIDWORD(v32) + 20) = v83;
            LODWORD(v32) = v32 + 24;
            *(_DWORD *)(HIDWORD(v32) + 24) = 0;
            *(_DWORD *)(HIDWORD(v32) + 28) = 1072693248;
            HIDWORD(v32) += 32;
          }
          return def_1F88AA(v32);
        default:
          return def_1F88AA(v32);
      }
    }
    return sub_1F7D30();
  }
  if ( v30 <= 0x1908 )
  {
    if ( v30 == 6406 )
      a1 = sub_1F7D04();
    if ( v30 == 6407 )
      goto LABEL_15;
    a1 = sub_1F7D28(a1);
  }
  if ( v30 == 6410 )
  {
    v100 = ialloc();
    v101 = (_BYTE *)v100;
    if ( v100 == 0 )
      sub_1F8E98();
    v102 = v29 / 3;
    LODWORD(v32) = a29 - 5120;
    switch ( a29 )
    {
      case 5120:
      case 5121:
        v107 = v101;
        v129 = a19;
        v134 = &v101[2 * v102];
        while ( v107 != v134 )
        {
          v108 = 0.0;
          for ( i = 0; i != 3; ++i )
          {
            v110 = (float)v129[i];
            v111 = 4 * i;
            v112 = v108 + (float)(v110 * *(float *)((char *)&unk_433950 + v111));
            v108 = v112;
          }
          LODWORD(v32) = (unsigned int)v112;
          *v107 = v32;
          v107[1] = -1;
          v129 += 3;
          v107 += 2;
        }
        return def_1F88AA(v32);
      case 5122:
      case 5123:
      case 5131:
        v106 = v101;
        v128 = a19;
        v133 = &v101[4 * v102];
        while ( v106 != v133 )
        {
          v115 = 0;
          v117 = 0.0;
          do
          {
            v113 = (float)*(unsigned __int16 *)&v128[v115];
            v114 = 2 * v115;
            v115 += 2;
            v116 = v117 + (float)(v113 * *(float *)((char *)&unk_433950 + v114));
            v117 = v116;
          }
          while ( v115 != 6 );
          LODWORD(v32) = (unsigned int)v116;
          *v106 = v32;
          v106[1] = -1;
          v128 += 6;
          v106 += 2;
        }
        return def_1F88AA(v32);
      case 5124:
      case 5125:
        v105 = v101;
        v127 = a19;
        while ( v105 != (_DWORD *)&v101[8 * v102] )
        {
          v119 = 0;
          v120 = 0.0;
          do
          {
            v118 = v120 + (float)((float)*(unsigned int *)&v127[v119] * *(float *)((char *)&unk_433950 + v119));
            v119 += 4;
            v120 = v118;
          }
          while ( v119 != 12 );
          LODWORD(v32) = (unsigned int)v118;
          *v105 = v32;
          v105[1] = -1;
          v127 += 12;
          v105 += 2;
        }
        return def_1F88AA(v32);
      case 5126:
        v126 = a19;
        for ( j = v101; j != (_DWORD *)&v101[8 * v102]; j += 2 )
        {
          v121 = 0;
          v122 = 0.0;
          do
          {
            *(float *)&v32 = v122 + (float)(*(float *)&v126[v121] * *(float *)((char *)&unk_433950 + v121));
            v121 += 4;
            v122 = *(float *)&v32;
          }
          while ( v121 != 12 );
          *j = v32;
          j[1] = 1065353216;
          v126 += 12;
        }
        return def_1F88AA(v32);
      case 5127:
      case 5128:
      case 5129:
        goto LABEL_123;
      case 5130:
        v103 = v101;
        v132 = a19;
        while ( v103 != &v101[16 * v102] )
        {
          v123 = 0;
          v130 = 0.0;
          do
          {
            *(double *)&v32 = v130 + *(float *)((char *)&unk_433950 + v123) * *(double *)&v132[2 * v123];
            v123 += 4;
            v130 = *(double *)&v32;
          }
          while ( v123 != 12 );
          *(double *)v103 = *(double *)&v32;
          *((_DWORD *)v103 + 2) = 0;
          *((_DWORD *)v103 + 3) = 1072693248;
          v132 += 24;
          v103 += 16;
        }
        return def_1F88AA(v32);
      default:
        return def_1F88AA(v32);
    }
  }
  if ( v30 < 0x190A )
  {
    v84 = ialloc();
    v85 = (_BYTE *)v84;
    if ( v84 == 0 )
      sub_1F8E98();
    v131 = v29 / 3;
    LODWORD(v32) = a29 - 5120;
    switch ( a29 )
    {
      case 5120:
      case 5121:
        v90 = a19;
        for ( k = v85; k != &v85[v131]; ++k )
        {
          LODWORD(v32) = (unsigned int)(float)((float)((float)((float)((float)*v90 * 0.072169) + 0.0)
                                                     + (float)((float)v90[1] * 0.71516))
                                             + (float)((float)v90[2] * 0.21267));
          v90 += 3;
          *k = v32;
        }
        return def_1F88AA(v32);
      case 5122:
      case 5123:
      case 5131:
        for ( m = 0; m != v131; ++m )
        {
          v96 = 0.0;
          for ( n = 0; n != 6; n += 2 )
          {
            v92 = (float)*(unsigned __int16 *)&a19[6 * m + n];
            v93 = 2 * n;
            v95 = v96 + (float)(v92 * *(float *)((char *)&unk_433950 - v93 + 8));
            v96 = v95;
          }
          LODWORD(v32) = (unsigned int)v95;
          *(_WORD *)&v85[2 * m] = v32;
        }
        return def_1F88AA(v32);
      case 5124:
      case 5125:
        for ( ii = 0; ii != v131; ++ii )
        {
          v97 = 0;
          v98 = 0.0;
          do
          {
            *(double *)&v32 = v98
                            + (float)((float)*(unsigned int *)&a19[12 * ii + v97]
                                    * *(float *)((char *)&unk_433950 - v97 + 8));
            v97 += 4;
            v98 = *(double *)&v32;
          }
          while ( v97 != 12 );
          LODWORD(v32) = (unsigned int)*(double *)&v32;
          *(_DWORD *)&v85[4 * ii] = v32;
        }
        return def_1F88AA(v32);
      case 5126:
        v87 = v85;
        v88 = (float *)a19;
        while ( v87 != (_DWORD *)&v85[4 * v131] )
        {
          *(float *)&v32 = (float)(*v88 * 0.072169) + 0.0 + (float)(v88[1] * 0.71516) + (float)(v88[2] * 0.21267);
          v88 += 3;
          *v87++ = v32;
        }
        return def_1F88AA(v32);
      case 5127:
      case 5128:
      case 5129:
        goto LABEL_123;
      case 5130:
        for ( jj = 0; jj != v131; ++jj )
        {
          v99 = 0;
          v125 = 0.0;
          do
          {
            *(double *)&v32 = v125 + *(float *)((char *)&unk_433950 + v99 + 8) * *(double *)&a19[24 * jj + -2 * v99];
            v99 -= 4;
            v125 = *(double *)&v32;
          }
          while ( v99 != -12 );
          *(double *)&v85[8 * jj] = *(double *)&v32;
        }
        return def_1F88AA(v32);
      default:
        return def_1F88AA(v32);
    }
  }
  if ( v30 == 32993 )
  {
    v48 = ialloc();
    v49 = (_BYTE *)v48;
    if ( v48 == 0 )
      sub_1F8D76();
    LODWORD(v32) = a29 - 5120;
    switch ( a29 )
    {
      case 5120:
      case 5121:
        v57 = a19;
        v58 = v49;
        LODWORD(v32) = 255;
        while ( v57 - a19 < v29 )
        {
          *v58 = *v57;
          v58[1] = v57[1];
          v59 = v57[2];
          v58[3] = -1;
          v57 += 3;
          v58[2] = v59;
          v58 += 4;
        }
        return def_1F88AA(v32);
      case 5122:
      case 5123:
      case 5131:
        v55 = a19;
        v56 = v49;
        v32 = 0xFFFFFFFFLL;
        while ( HIDWORD(v32) < v29 )
        {
          HIDWORD(v32) += 3;
          *v56 = *v55;
          v56[1] = v55[1];
          v60 = v55[2];
          v56[3] = -1;
          v55 += 3;
          v56[2] = v60;
          v56 += 4;
        }
        return def_1F88AA(v32);
      case 5124:
      case 5125:
        v53 = a19;
        v54 = v49;
        v32 = 0xFFFFFFFFLL;
        while ( HIDWORD(v32) < v29 )
        {
          HIDWORD(v32) += 3;
          *v54 = *v53;
          v54[1] = v53[1];
          v61 = v53[2];
          v54[3] = -1;
          v53 += 3;
          v54[2] = v61;
          v54 += 4;
        }
        return def_1F88AA(v32);
      case 5126:
        v51 = a19;
        v52 = v49;
        v32 = 1065353216;
        while ( HIDWORD(v32) < v29 )
        {
          HIDWORD(v32) += 3;
          *v52 = *v51;
          v52[1] = v51[1];
          v62 = v51[2];
          v52[3] = 1065353216;
          v51 += 3;
          v52[2] = v62;
          v52 += 4;
        }
        return def_1F88AA(v32);
      case 5127:
      case 5128:
      case 5129:
        goto LABEL_123;
      case 5130:
        *(double *)&v32 = COERCE_DOUBLE(__PAIR64__((unsigned int)v49, (unsigned int)a19));
        v50 = 0;
        while ( v50 < v29 )
        {
          v63 = *(_DWORD *)(v32 + 4);
          *(_DWORD *)HIDWORD(v32) = *(_DWORD *)v32;
          *(_DWORD *)(HIDWORD(v32) + 4) = v63;
          v64 = *(_DWORD *)(v32 + 12);
          *(_DWORD *)(HIDWORD(v32) + 8) = *(_DWORD *)(v32 + 8);
          *(_DWORD *)(HIDWORD(v32) + 12) = v64;
          v50 += 3;
          v65 = *(_QWORD *)(v32 + 16);
          LODWORD(v32) = v32 + 24;
          *(_QWORD *)(HIDWORD(v32) + 16) = v65;
          *(_DWORD *)(HIDWORD(v32) + 24) = 0;
          *(_DWORD *)(HIDWORD(v32) + 28) = 1072693248;
          HIDWORD(v32) += 32;
        }
        return def_1F88AA(v32);
      default:
        return def_1F88AA(v32);
    }
  }
  sub_1F7D28(a1);
LABEL_15:
  v31 = ialloc();
  if ( v31 == 0 )
    sub_1F8D76();
  LODWORD(v32) = a29 - 5120;
  switch ( a29 )
  {
    case 5120:
    case 5121:
      v41 = (char *)a19;
      v42 = (_BYTE *)v31;
      while ( v41 - (char *)a19 < v29 )
      {
        *v42 = v41[2];
        v42[1] = v41[1];
        v44 = *v41;
        v41 += 3;
        v42[2] = v44;
        v42 += 3;
      }
      break;
    case 5122:
    case 5123:
    case 5131:
      v39 = (_WORD *)v31;
      HIDWORD(v32) = 0;
      v40 = a19 + 4;
      while ( HIDWORD(v32) < v29 )
      {
        HIDWORD(v32) += 3;
        *v39 = *v40;
        v39[1] = *(v40 - 1);
        LODWORD(v32) = (unsigned __int16)*(v40 - 2);
        v40 += 3;
        v39[2] = v32;
        v39 += 3;
      }
      break;
    case 5124:
    case 5125:
      v37 = (_DWORD *)v31;
      HIDWORD(v32) = 0;
      v38 = a19 + 8;
      while ( HIDWORD(v32) < v29 )
      {
        HIDWORD(v32) += 3;
        *v37 = *v38;
        v37[1] = *(v38 - 1);
        LODWORD(v32) = *(v38 - 2);
        v38 += 3;
        v37[2] = v32;
        v37 += 3;
      }
      break;
    case 5126:
      v35 = (_DWORD *)v31;
      HIDWORD(v32) = 0;
      v36 = a19 + 8;
      while ( HIDWORD(v32) < v29 )
      {
        HIDWORD(v32) += 3;
        *v35 = *v36;
        v35[1] = *(v36 - 1);
        LODWORD(v32) = *(v36 - 2);
        v36 += 3;
        v35[2] = v32;
        v35 += 3;
      }
      break;
    case 5127:
    case 5128:
    case 5129:
LABEL_123:
      JUMPOUT(0x1F8F86);
    case 5130:
      v33 = (_DWORD *)v31;
      HIDWORD(v32) = 0;
      v34 = a19 + 16;
      while ( HIDWORD(v32) < v29 )
      {
        v45 = v34[1];
        *v33 = *v34;
        v33[1] = v45;
        v46 = *(v34 - 1);
        v33[2] = *(v34 - 2);
        v33[3] = v46;
        LODWORD(v32) = v34 - 4;
        v47 = *(v34 - 3);
        HIDWORD(v32) += 3;
        v33[4] = *(v34 - 4);
        v33[5] = v47;
        v34 += 6;
        v33 += 6;
      }
      break;
    default:
      return def_1F88AA(v32);
  }
  return def_1F88AA(v32);
}


//======================================================================
// sub_1F7D04
// address: 0x001F7D04   size: 0x24 (36 bytes)
//======================================================================
int sub_1F7D04()
{
  int v0; // r4
  int v1; // r6
  size_t v2; // r4
  void *v3; // r0
  void *v4; // r0

  v2 = v1 * v0 / 3u;
  v3 = (void *)ialloc();
  if ( v3 == nullptr )
    v3 = (void *)sub_1F8E98();
  v4 = j_memset(v3, 0, v2);
  return def_1F88AA(v4);
}


//======================================================================
// sub_1F7D28
// address: 0x001F7D28   size: 0x8 (8 bytes)
//======================================================================
int sub_1F7D28()
{
  int v0; // r0

  v0 = ilSetError(1296);
  return sub_1F7D30(v0);
}


//======================================================================
// sub_1F7D30
// address: 0x001F7D30   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_1F7D30(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31)
{
  int v31; // r0

  if ( a19 == a31 )
    sub_1F8F80(a1);
  v31 = sub_1F8F7C(a19);
  return sub_1F7D42(v31);
}


//======================================================================
// sub_1F7D42
// address: 0x001F7D42   size: 0x80C (2060 bytes)
//======================================================================
int __fastcall sub_1F7D42(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        unsigned __int8 *a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  unsigned int v29; // r4
  unsigned int v30; // r5
  int v31; // r7
  double v32; // r0
  _DWORD *v33; // r3
  _DWORD *v34; // r2
  _DWORD *v35; // r3
  _DWORD *v36; // r2
  _DWORD *v37; // r3
  _DWORD *v38; // r2
  _WORD *v39; // r2
  _WORD *v40; // r3
  _BYTE *v41; // r3
  _BYTE *v42; // r2
  char v44; // r1
  int v45; // r6
  int v46; // r6
  int v47; // r6
  int v48; // r6
  int v49; // r5
  int v50; // r6
  int v51; // r0
  _BYTE *v52; // r7
  _DWORD *v53; // r3
  _DWORD *v54; // r2
  unsigned int v55; // r1
  _DWORD *v56; // r3
  _DWORD *v57; // r2
  _DWORD *v58; // r3
  _DWORD *v59; // r2
  _WORD *v60; // r3
  _WORD *v61; // r2
  _BYTE *v62; // r3
  _BYTE *v63; // r2
  char v64; // r1
  int v65; // r5
  int v66; // r5
  int v67; // r6
  int v68; // r6
  int v69; // r5
  int v70; // r6
  int v71; // r0
  _BYTE *v72; // r7
  _DWORD *v73; // r2
  _DWORD *v74; // r3
  _DWORD *v75; // r2
  _DWORD *v76; // r3
  _DWORD *v77; // r2
  _DWORD *v78; // r3
  _WORD *v79; // r2
  _WORD *v80; // r3
  char *v81; // r3
  _BYTE *v82; // r2
  char v83; // r1
  int v84; // r6
  int v85; // r6
  int v86; // r6
  int v87; // r0
  _BYTE *v88; // r7
  int nn; // r5
  _DWORD *v90; // r4
  float *v91; // r5
  int jj; // r6
  unsigned __int8 *v93; // r5
  _BYTE *ii; // r6
  float v95; // r0
  int v96; // r3
  int kk; // r5
  float v98; // r0
  float v99; // r4
  int v100; // r4
  double v101; // kr00_8
  int v102; // r4
  int v103; // r0
  int v104; // r7
  double *v105; // r4
  int v106; // r6
  unsigned __int8 *v107; // r5
  _DWORD *v108; // r5
  unsigned __int8 *v109; // r4
  _WORD *v110; // r6
  unsigned __int8 *v111; // r5
  unsigned __int8 *v112; // r5
  _BYTE *i; // r4
  int j; // r6
  float v115; // r0
  int v116; // r3
  float v117; // r0
  unsigned __int8 v118; // r3
  float v119; // r0
  int v120; // r3
  int v121; // r4
  float v122; // r0
  __int16 v123; // r3
  double v124; // r0
  int v125; // r6
  int v126; // r6
  int v127; // r4
  float v128; // r0
  int v129; // r3
  float v130; // r0
  double *v131; // r5
  int v132; // r6
  double v133; // r0
  double *v134; // [sp+Ch] [bp+Ch]
  int mm; // [sp+28h] [bp+28h]
  double v136; // [sp+28h] [bp+28h]
  unsigned int n; // [sp+28h] [bp+28h]
  unsigned int m; // [sp+28h] [bp+28h]
  unsigned int v139; // [sp+28h] [bp+28h]
  unsigned int k; // [sp+28h] [bp+28h]
  float v141; // [sp+28h] [bp+28h]
  float v142; // [sp+30h] [bp+30h]
  double v143; // [sp+30h] [bp+30h]
  double v144; // [sp+30h] [bp+30h]
  double v145; // [sp+30h] [bp+30h]
  unsigned int v146; // [sp+3Ch] [bp+3Ch]
  unsigned int v147; // [sp+3Ch] [bp+3Ch]

  if ( v30 != 6408 )
  {
    if ( v30 <= 0x1908 )
    {
      if ( v30 == 6406 )
        a1 = sub_1F854E();
      if ( v30 == 6407 )
      {
        v71 = ialloc();
        v72 = (_BYTE *)v71;
        if ( v71 == 0 )
          sub_1F8D76();
        LODWORD(v32) = a29 - 5120;
        switch ( a29 )
        {
          case 5120:
          case 5121:
            v81 = (char *)a19;
            v82 = v72;
            while ( v81 - (char *)a19 < v29 )
            {
              *v82 = v81[2];
              v82[1] = v81[1];
              v83 = *v81;
              v81 += 4;
              v82[2] = v83;
              v82 += 3;
            }
            return def_1F88AA(LODWORD(v32));
          case 5122:
          case 5123:
          case 5131:
            v79 = v72;
            HIDWORD(v32) = 0;
            v80 = a19 + 4;
            while ( HIDWORD(v32) < v29 )
            {
              HIDWORD(v32) += 4;
              *v79 = *v80;
              v79[1] = *(v80 - 1);
              LODWORD(v32) = (unsigned __int16)*(v80 - 2);
              v80 += 4;
              v79[2] = LOWORD(v32);
              v79 += 3;
            }
            return def_1F88AA(LODWORD(v32));
          case 5124:
          case 5125:
            v77 = v72;
            HIDWORD(v32) = 0;
            v78 = a19 + 8;
            while ( HIDWORD(v32) < v29 )
            {
              HIDWORD(v32) += 4;
              *v77 = *v78;
              v77[1] = *(v78 - 1);
              LODWORD(v32) = *(v78 - 2);
              v78 += 4;
              v77[2] = LODWORD(v32);
              v77 += 3;
            }
            return def_1F88AA(LODWORD(v32));
          case 5126:
            v75 = v72;
            HIDWORD(v32) = 0;
            v76 = a19 + 8;
            while ( HIDWORD(v32) < v29 )
            {
              HIDWORD(v32) += 4;
              *v75 = *v76;
              v75[1] = *(v76 - 1);
              LODWORD(v32) = *(v76 - 2);
              v76 += 4;
              v75[2] = LODWORD(v32);
              v75 += 3;
            }
            return def_1F88AA(LODWORD(v32));
          case 5127:
          case 5128:
          case 5129:
            goto LABEL_123;
          case 5130:
            v73 = v72;
            HIDWORD(v32) = 0;
            v74 = a19 + 16;
            while ( HIDWORD(v32) < v29 )
            {
              v84 = v74[1];
              *v73 = *v74;
              v73[1] = v84;
              v85 = *(v74 - 1);
              v73[2] = *(v74 - 2);
              v73[3] = v85;
              LODWORD(v32) = v74 - 4;
              v86 = *(v74 - 3);
              HIDWORD(v32) += 4;
              v73[4] = *(v74 - 4);
              v73[5] = v86;
              v74 += 8;
              v73 += 6;
            }
            return def_1F88AA(LODWORD(v32));
          default:
            return def_1F88AA(LODWORD(v32));
        }
      }
      a1 = sub_1F8F6A(a1);
    }
    if ( v30 == 6410 )
    {
      v103 = ialloc();
      v104 = v103;
      if ( v103 == 0 )
        sub_1F8E98();
      LODWORD(v32) = a29 - 5120;
      v147 = 2 * (v29 >> 2);
      switch ( a29 )
      {
        case 5120:
        case 5121:
          v112 = a19;
          for ( i = (_BYTE *)v104; (unsigned int)&i[-v104] < v147; i += 2 )
          {
            v141 = 0.0;
            for ( j = 0; j != 3; ++j )
            {
              v115 = (float)v112[j];
              v116 = 4 * j;
              v117 = v141 + (float)(v115 * *(float *)((char *)&unk_433950 + v116));
              v141 = v117;
            }
            LODWORD(v32) = (unsigned int)v117;
            *i = LOBYTE(v32);
            v118 = v112[3];
            v112 += 4;
            i[1] = v118;
          }
          return def_1F88AA(LODWORD(v32));
        case 5122:
        case 5123:
        case 5131:
          v110 = (_WORD *)v104;
          v111 = a19;
          for ( k = 0; ; k += 2 )
          {
            LODWORD(v32) = k;
            if ( k >= v147 )
              break;
            v121 = 0;
            v142 = 0.0;
            do
            {
              v119 = (float)*(unsigned __int16 *)&v111[v121];
              v120 = 2 * v121;
              v121 += 2;
              v122 = v142 + (float)(v119 * *(float *)((char *)&unk_433950 + v120));
              v142 = v122;
            }
            while ( v121 != 6 );
            *v110 = (unsigned int)v122;
            v123 = *((_WORD *)v111 + 3);
            v111 += 8;
            v110[1] = v123;
            v110 += 2;
          }
          return def_1F88AA(LODWORD(v32));
        case 5124:
        case 5125:
          v139 = 0;
          v108 = (_DWORD *)v104;
          v109 = a19;
          while ( 1 )
          {
            LODWORD(v32) = v147;
            if ( v139 >= v147 )
              break;
            v125 = 0;
            v143 = 0.0;
            do
            {
              v124 = v143 + (float)((float)*(unsigned int *)&v109[v125] * *(float *)((char *)&unk_433950 + v125));
              v125 += 4;
              v143 = v124;
            }
            while ( v125 != 12 );
            *v108 = (unsigned int)v124;
            v126 = *((_DWORD *)v109 + 3);
            v109 += 16;
            v108[1] = v126;
            v108 += 2;
            v139 += 2;
          }
          return def_1F88AA(LODWORD(v32));
        case 5126:
          LODWORD(v32) = 0;
          v106 = v104;
          v107 = a19;
          for ( m = 0; m < v147; m += 2 )
          {
            v127 = 0;
            v144 = 0.0;
            do
            {
              v32 = v144 + (float)(*(float *)&v107[v127] * *(float *)((char *)&unk_433950 + v127));
              v127 += 4;
              v144 = v32;
            }
            while ( v127 != 12 );
            v128 = v32;
            *(float *)v106 = v128;
            v129 = *((_DWORD *)v107 + 3);
            v107 += 16;
            LODWORD(v32) = m + 2;
            *(_DWORD *)(v106 + 4) = v129;
            v106 += 8;
          }
          return def_1F88AA(LODWORD(v32));
        case 5127:
        case 5128:
        case 5129:
          goto LABEL_123;
        case 5130:
          v134 = (double *)v104;
          v105 = (double *)a19;
          for ( n = 0; n < v147; n += 2 )
          {
            v132 = 0;
            v145 = 0.0;
            do
            {
              v130 = *(float *)((char *)&unk_433950 + v132 * 4);
              v131 = &v105[v132++];
              v133 = v145 + v130 * *v131;
              v145 = v133;
            }
            while ( v132 != 3 );
            *v134 = v133;
            v32 = v105[3];
            v134[1] = v32;
            v134 += 2;
            v105 += 4;
          }
          return def_1F88AA(LODWORD(v32));
        default:
          return def_1F88AA(LODWORD(v32));
      }
    }
    if ( v30 < 0x190A )
    {
      v87 = ialloc();
      v88 = (_BYTE *)v87;
      if ( v87 == 0 )
        sub_1F8D76();
      v146 = v29 >> 2;
      LODWORD(v32) = a29 - 5120;
      switch ( a29 )
      {
        case 5120:
        case 5121:
          LODWORD(v32) = v29 >> 2;
          v93 = a19;
          for ( ii = v88; ii != &v88[v146]; ++ii )
          {
            LODWORD(v32) = (unsigned int)(float)((float)((float)((float)((float)*v93 * 0.072169) + 0.0)
                                                       + (float)((float)v93[1] * 0.71516))
                                               + (float)((float)v93[2] * 0.21267));
            v93 += 4;
            *ii = LOBYTE(v32);
          }
          return def_1F88AA(LODWORD(v32));
        case 5122:
        case 5123:
        case 5131:
          for ( jj = 0; jj != v146; ++jj )
          {
            v99 = 0.0;
            for ( kk = 0; kk != 6; kk += 2 )
            {
              v95 = (float)*(unsigned __int16 *)&a19[8 * jj + kk];
              v96 = 2 * kk;
              v98 = v99 + (float)(v95 * *(float *)((char *)&unk_433950 - v96 + 8));
              v99 = v98;
            }
            LODWORD(v32) = (unsigned int)v98;
            *(_WORD *)&v88[2 * jj] = LOWORD(v32);
          }
          return def_1F88AA(LODWORD(v32));
        case 5124:
        case 5125:
          for ( mm = 0; mm != v146; ++mm )
          {
            v100 = 0;
            v101 = 0.0;
            do
            {
              v32 = v101
                  + (float)((float)*(unsigned int *)&a19[16 * mm + v100] * *(float *)((char *)&unk_433950 - v100 + 8));
              v100 += 4;
              v101 = v32;
            }
            while ( v100 != 12 );
            LODWORD(v32) = (unsigned int)v32;
            *(_DWORD *)&v88[4 * mm] = LODWORD(v32);
          }
          return def_1F88AA(LODWORD(v32));
        case 5126:
          v90 = v88;
          v91 = (float *)a19;
          while ( v90 != (_DWORD *)&v88[4 * v146] )
          {
            *(float *)&v32 = (float)(*v91 * 0.072169) + 0.0 + (float)(v91[1] * 0.71516) + (float)(v91[2] * 0.21267);
            v91 += 4;
            *v90++ = LODWORD(v32);
          }
          return def_1F88AA(LODWORD(v32));
        case 5127:
        case 5128:
        case 5129:
          goto LABEL_123;
        case 5130:
          for ( nn = 0; nn != v146; ++nn )
          {
            v102 = 0;
            v136 = 0.0;
            do
            {
              v32 = v136 + *(float *)((char *)&unk_433950 + v102 + 8) * *(double *)&a19[32 * nn + -2 * v102];
              v102 -= 4;
              v136 = v32;
            }
            while ( v102 != -12 );
            *(double *)&v88[8 * nn] = v32;
          }
          return def_1F88AA(LODWORD(v32));
        default:
          return def_1F88AA(LODWORD(v32));
      }
    }
    if ( v30 == a3 )
    {
      v51 = ialloc();
      v52 = (_BYTE *)v51;
      if ( v51 == 0 )
        sub_1F8D76();
      LODWORD(v32) = a29 - 5120;
      switch ( a29 )
      {
        case 5120:
        case 5121:
          v62 = a19;
          v63 = v52;
          while ( v62 - a19 < v29 )
          {
            *v63 = *v62;
            v63[1] = v62[1];
            v64 = v62[2];
            v62 += 4;
            v63[2] = v64;
            v63 += 3;
          }
          return def_1F88AA(LODWORD(v32));
        case 5122:
        case 5123:
        case 5131:
          v60 = a19;
          v61 = v52;
          HIDWORD(v32) = 0;
          while ( HIDWORD(v32) < v29 )
          {
            HIDWORD(v32) += 4;
            *v61 = *v60;
            v61[1] = v60[1];
            LODWORD(v32) = (unsigned __int16)v60[2];
            v60 += 4;
            v61[2] = LOWORD(v32);
            v61 += 3;
          }
          return def_1F88AA(LODWORD(v32));
        case 5124:
        case 5125:
          v58 = a19;
          v59 = v52;
          HIDWORD(v32) = 0;
          while ( HIDWORD(v32) < v29 )
          {
            HIDWORD(v32) += 4;
            *v59 = *v58;
            LODWORD(v32) = v58[1];
            v59[1] = LODWORD(v32);
            v65 = v58[2];
            v58 += 4;
            v59[2] = v65;
            v59 += 3;
          }
          return def_1F88AA(LODWORD(v32));
        case 5126:
          v56 = a19;
          v57 = v52;
          HIDWORD(v32) = 0;
          while ( HIDWORD(v32) < v29 )
          {
            HIDWORD(v32) += 4;
            *v57 = *v56;
            LODWORD(v32) = v56[1];
            v57[1] = LODWORD(v32);
            v66 = v56[2];
            v56 += 4;
            v57[2] = v66;
            v57 += 3;
          }
          return def_1F88AA(LODWORD(v32));
        case 5127:
        case 5128:
        case 5129:
          goto LABEL_123;
        case 5130:
          v53 = a19;
          v54 = v52;
          v55 = 0;
          while ( v55 < v29 )
          {
            v67 = v53[1];
            *v54 = *v53;
            v54[1] = v67;
            v68 = v53[3];
            v54[2] = v53[2];
            v54[3] = v68;
            v55 += 4;
            v69 = v53[4];
            v70 = v53[5];
            v53 += 8;
            v54[4] = v69;
            v54[5] = v70;
            v54 += 6;
          }
          return def_1F88AA(LODWORD(v32));
        default:
          return def_1F88AA(LODWORD(v32));
      }
    }
    sub_1F8F6A(a1);
  }
  v31 = ialloc();
  if ( v31 == 0 )
    sub_1F8E98();
  LODWORD(v32) = a29 - 5120;
  switch ( a29 )
  {
    case 5120:
    case 5121:
      v41 = a19;
      v42 = (_BYTE *)v31;
      while ( v41 - a19 < v29 )
      {
        *v42 = v41[2];
        v42[1] = v41[1];
        v42[2] = *v41;
        v44 = v41[3];
        v41 += 4;
        v42[3] = v44;
        v42 += 4;
      }
      break;
    case 5122:
    case 5123:
    case 5131:
      v39 = (_WORD *)v31;
      HIDWORD(v32) = 0;
      v40 = a19 + 4;
      while ( HIDWORD(v32) < v29 )
      {
        HIDWORD(v32) += 4;
        *v39 = *v40;
        v39[1] = *(v40 - 1);
        v39[2] = *(v40 - 2);
        LODWORD(v32) = (unsigned __int16)v40[1];
        v40 += 4;
        v39[3] = LOWORD(v32);
        v39 += 4;
      }
      break;
    case 5124:
    case 5125:
      v37 = (_DWORD *)v31;
      HIDWORD(v32) = 0;
      v38 = a19 + 8;
      while ( HIDWORD(v32) < v29 )
      {
        HIDWORD(v32) += 4;
        *v37 = *v38;
        v37[1] = *(v38 - 1);
        v37[2] = *(v38 - 2);
        LODWORD(v32) = v38[1];
        v38 += 4;
        v37[3] = LODWORD(v32);
        v37 += 4;
      }
      break;
    case 5126:
      v35 = (_DWORD *)v31;
      HIDWORD(v32) = 0;
      v36 = a19 + 8;
      while ( HIDWORD(v32) < v29 )
      {
        HIDWORD(v32) += 4;
        *v35 = *v36;
        v35[1] = *(v36 - 1);
        LODWORD(v32) = *(v36 - 2);
        v35[2] = LODWORD(v32);
        v45 = v36[1];
        v36 += 4;
        v35[3] = v45;
        v35 += 4;
      }
      break;
    case 5127:
    case 5128:
    case 5129:
LABEL_123:
      JUMPOUT(0x1F8F86);
    case 5130:
      v33 = (_DWORD *)v31;
      HIDWORD(v32) = 0;
      v34 = a19 + 16;
      while ( HIDWORD(v32) < v29 )
      {
        v46 = v34[1];
        *v33 = *v34;
        v33[1] = v46;
        v47 = *(v34 - 1);
        v33[2] = *(v34 - 2);
        v33[3] = v47;
        LODWORD(v32) = v34 - 4;
        v48 = *(v34 - 3);
        v33[4] = *(v34 - 4);
        v33[5] = v48;
        HIDWORD(v32) += 4;
        v49 = v34[2];
        v50 = v34[3];
        v34 += 8;
        v33[6] = v49;
        v33[7] = v50;
        v33 += 8;
      }
      break;
    default:
      return def_1F88AA(LODWORD(v32));
  }
  return def_1F88AA(LODWORD(v32));
}


//======================================================================
// sub_1F854E
// address: 0x001F854E   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall sub_1F854E(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  unsigned int v29; // r4
  int v30; // r7
  unsigned int v31; // r4
  int v32; // r0
  _DWORD *v33; // r3
  int *v34; // r2
  _DWORD *v35; // r4
  _DWORD *v36; // r3
  int *v37; // r2
  _DWORD *v38; // r4
  _DWORD *v39; // r3
  int *v40; // r2
  _DWORD *v41; // r4
  _WORD *v42; // r3
  __int16 *v43; // r2
  _WORD *v44; // r4
  int i; // r3
  __int16 v47; // r1
  int v48; // r6
  int v49; // r5
  int v50; // r6

  v30 = ialloc();
  if ( v30 == 0 )
    sub_1F8E98();
  v31 = v29 >> 2;
  v32 = a29 - 5120;
  switch ( a29 )
  {
    case 5120:
    case 5121:
      for ( i = 0; i != v31; ++i )
        *(_BYTE *)(v30 + i) = *(_BYTE *)(a19 + 4 * i + 3);
      break;
    case 5122:
    case 5123:
    case 5131:
      v42 = (_WORD *)v30;
      v43 = (__int16 *)(a19 + 6);
      v44 = (_WORD *)(v30 + 2 * v31);
      while ( v42 != v44 )
      {
        v47 = *v43;
        v43 += 4;
        *v42++ = v47;
      }
      break;
    case 5124:
    case 5125:
      v39 = (_DWORD *)v30;
      v40 = (int *)(a19 + 12);
      v41 = (_DWORD *)(v30 + 4 * v31);
      while ( v39 != v41 )
      {
        v48 = *v40;
        v40 += 4;
        *v39++ = v48;
      }
      break;
    case 5126:
      v36 = (_DWORD *)v30;
      v37 = (int *)(a19 + 12);
      v38 = (_DWORD *)(v30 + 4 * v31);
      while ( v36 != v38 )
      {
        v32 = *v37;
        v37 += 4;
        *v36++ = v32;
      }
      break;
    case 5127:
    case 5128:
    case 5129:
      JUMPOUT(0x1F8F86);
    case 5130:
      v33 = (_DWORD *)v30;
      v34 = (int *)(a19 + 24);
      v35 = (_DWORD *)(v30 + 8 * v31);
      while ( v33 != v35 )
      {
        v49 = *v34;
        v50 = v34[1];
        v34 += 8;
        *v33 = v49;
        v33[1] = v50;
        v33 += 2;
      }
      break;
    default:
      return def_1F88AA(v32);
  }
  return def_1F88AA(v32);
}


//======================================================================
// sub_1F8616
// address: 0x001F8616   size: 0x360 (864 bytes)
//======================================================================
int __fastcall sub_1F8616(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int *a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  int v29; // r4
  unsigned int v30; // r5
  int v31; // r6
  int v32; // r7
  int v34; // r0
  int v35; // r3
  int v36; // r3
  int v37; // r3
  int v38; // r3
  int v39; // r3
  int n; // r2
  int ii; // r2
  int jj; // r2
  int kk; // r2
  int v44; // r6
  int *v45; // r1
  int mm; // r2
  int *v47; // r12
  int v48; // r7
  int v49; // r5
  int *v50; // r4
  int *v51; // r2
  int v52; // r1
  int *v53; // r4
  int *v54; // r2
  int v55; // r1
  int *v56; // r4
  int *v57; // r2
  int v58; // r1
  int *v59; // r4
  int *v60; // r2
  int v61; // r1
  int *v62; // r4
  int i; // r3
  int j; // r3
  int k; // r3
  int m; // r3
  _DWORD *v67; // r6
  int v68; // r1
  int v69; // r3
  int v70; // r0
  _BYTE *v71; // r7
  _DWORD *v72; // r1
  int *v73; // r4
  int *v74; // r2
  _DWORD *v75; // r3
  int *v76; // r4
  int *v77; // r2
  int *v78; // r3
  int *v79; // r4
  unsigned __int16 *v80; // r3
  _WORD *v81; // r2
  unsigned __int16 *v82; // r4
  unsigned __int8 *v83; // r3
  _BYTE *v84; // r2
  unsigned __int8 *v85; // r4
  int v86; // r5
  int v87; // r5
  int v88; // r6
  size_t v89; // r4
  void *v90; // r0

  if ( v30 == 6408 )
    goto LABEL_42;
  if ( v30 <= 0x1908 )
  {
    if ( v30 == 6406 )
    {
      v89 = v29 * v31;
      v90 = (void *)ialloc();
      if ( v90 == nullptr )
        JUMPOUT(0x1F8F72);
      v34 = (int)j_memset(v90, 0, v89);
      return def_1F88AA(v34);
    }
    if ( v30 == 6407 )
      goto LABEL_12;
    a1 = sub_1F8F6A(a1);
  }
  if ( v30 != 32992 )
  {
    if ( v30 != 32993 )
    {
      if ( v30 == 6410 )
      {
        v70 = ialloc();
        v71 = (_BYTE *)v70;
        if ( v70 != 0 )
        {
          v34 = a29 - 5120;
          switch ( a29 )
          {
            case 5120:
            case 5121:
              v83 = (unsigned __int8 *)a19;
              v84 = v71;
              v85 = (unsigned __int8 *)a19 + v29;
              while ( v83 != v85 )
              {
                v34 = *v83;
                v84[1] = -1;
                ++v83;
                *v84 = v34;
                v84 += 2;
              }
              return def_1F88AA(v34);
            case 5122:
            case 5123:
            case 5131:
              v80 = (unsigned __int16 *)a19;
              v81 = v71;
              v82 = (unsigned __int16 *)a19 + v29;
              while ( v80 != v82 )
              {
                v34 = *v80;
                v81[1] = -1;
                ++v80;
                *v81 = v34;
                v81 += 2;
              }
              return def_1F88AA(v34);
            case 5124:
            case 5125:
              v77 = a19;
              v78 = (int *)v71;
              v79 = &a19[v29];
              while ( v77 != v79 )
              {
                v34 = *v77++;
                v78[1] = -1;
                *v78 = v34;
                v78 += 2;
              }
              return def_1F88AA(v34);
            case 5126:
              v74 = a19;
              v75 = v71;
              v76 = &a19[v29];
              while ( v74 != v76 )
              {
                v86 = *v74++;
                v75[1] = 1065353216;
                *v75 = v86;
                v75 += 2;
              }
              return def_1F88AA(v34);
            case 5127:
            case 5128:
            case 5129:
              goto LABEL_89;
            case 5130:
              v34 = (int)a19;
              v72 = v71;
              v73 = &a19[2 * v29];
              while ( (int *)v34 != v73 )
              {
                v87 = *(_DWORD *)v34;
                v88 = *(_DWORD *)(v34 + 4);
                v34 += 8;
                v72[2] = 0;
                v72[3] = 1072693248;
                *v72 = v87;
                v72[1] = v88;
                v72 += 4;
              }
              return def_1F88AA(v34);
            default:
              return def_1F88AA(v34);
          }
        }
        return sub_1F8E98();
      }
      sub_1F8F6A(a1);
      goto LABEL_12;
    }
LABEL_42:
    v48 = ialloc();
    if ( v48 != 0 )
    {
      v34 = a29 - 5120;
      switch ( a29 )
      {
        case 5120:
        case 5121:
          v60 = a19;
          v61 = v48;
          v34 = 255;
          v62 = (int *)((char *)a19 + v29);
          while ( v60 != v62 )
          {
            for ( i = 0; i != 3; ++i )
              *(_BYTE *)(v61 + i) = *(_BYTE *)v60;
            *(_BYTE *)(v61 + 3) = -1;
            v60 = (int *)((char *)v60 + 1);
            v61 += 4;
          }
          break;
        case 5122:
        case 5123:
        case 5131:
          v57 = a19;
          v58 = v48;
          v59 = (int *)((char *)a19 + 2 * v29);
          v34 = -1;
          while ( v57 != v59 )
          {
            for ( j = 0; j != 6; j += 2 )
              *(_WORD *)(v58 + j) = *(_WORD *)v57;
            *(_WORD *)(v58 + 6) = -1;
            v57 = (int *)((char *)v57 + 2);
            v58 += 8;
          }
          break;
        case 5124:
        case 5125:
          v54 = a19;
          v55 = v48;
          v56 = &a19[v29];
          v34 = -1;
          while ( v54 != v56 )
          {
            for ( k = 0; k != 12; k += 4 )
              *(_DWORD *)(v55 + k) = *v54;
            *(_DWORD *)(v55 + 12) = -1;
            ++v54;
            v55 += 16;
          }
          break;
        case 5126:
          v51 = a19;
          v52 = v48;
          v53 = &a19[v29];
          v34 = 1065353216;
          while ( v51 != v53 )
          {
            for ( m = 0; m != 12; m += 4 )
              *(_DWORD *)(v52 + m) = *v51;
            *(_DWORD *)(v52 + 12) = 1065353216;
            ++v51;
            v52 += 16;
          }
          break;
        case 5127:
        case 5128:
        case 5129:
LABEL_89:
          JUMPOUT(0x1F8F86);
        case 5130:
          v34 = (int)a19;
          v49 = v48;
          v50 = &a19[2 * v29];
          while ( (int *)v34 != v50 )
          {
            v68 = 0;
            do
            {
              v67 = (_DWORD *)(v49 + v68);
              v68 += 8;
              v69 = *(_DWORD *)(v34 + 4);
              *v67 = *(_DWORD *)v34;
              v67[1] = v69;
            }
            while ( v68 != 24 );
            v34 += 8;
            *(_DWORD *)(v49 + 24) = 0;
            *(_DWORD *)(v49 + 28) = 1072693248;
            v49 += 32;
          }
          break;
        default:
          return def_1F88AA(v34);
      }
      return def_1F88AA(v34);
    }
    return sub_1F8E98();
  }
LABEL_12:
  v32 = ialloc();
  if ( v32 != 0 )
  {
    v34 = a29 - 5120;
    switch ( a29 )
    {
      case 5120:
      case 5121:
        v39 = 0;
        v34 = 3;
        while ( v39 != v29 )
        {
          for ( n = 0; n != 3; ++n )
            *(_BYTE *)(v32 + 3 * v39 + n) = *((_BYTE *)a19 + v39);
          ++v39;
        }
        return def_1F88AA(v34);
      case 5122:
      case 5123:
      case 5131:
        v38 = 0;
        v34 = 6;
        while ( v38 != v29 )
        {
          for ( ii = 0; ii != 6; ii += 2 )
            *(_WORD *)(6 * v38 + v32 + ii) = *((_WORD *)a19 + v38);
          ++v38;
        }
        return def_1F88AA(v34);
      case 5124:
      case 5125:
        v37 = 0;
        v34 = 12;
        while ( v37 != v29 )
        {
          for ( jj = 0; jj != 12; jj += 4 )
            *(_DWORD *)(v32 + 12 * v37 + jj) = a19[v37];
          ++v37;
        }
        return def_1F88AA(v34);
      case 5126:
        v36 = 0;
        v34 = 12;
        while ( v36 != v29 )
        {
          for ( kk = 0; kk != 12; kk += 4 )
            *(_DWORD *)(v32 + 12 * v36 + kk) = a19[v36];
          ++v36;
        }
        return def_1F88AA(v34);
      case 5127:
      case 5128:
      case 5129:
        goto LABEL_89;
      case 5130:
        v35 = 0;
        v34 = 24;
        while ( v35 != v29 )
        {
          v47 = &a19[2 * v35];
          for ( mm = 0; mm != 24; mm += 8 )
          {
            v44 = v47[1];
            v45 = (int *)(v32 + 24 * v35 + mm);
            *v45 = *v47;
            v45[1] = v44;
          }
          ++v35;
        }
        return def_1F88AA(v34);
      default:
        return def_1F88AA(v34);
    }
  }
  return sub_1F8D76();
}


//======================================================================
// sub_1F8976
// address: 0x001F8976   size: 0x3D0 (976 bytes)
//======================================================================
int __fastcall sub_1F8976(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        unsigned __int8 *a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  unsigned int v29; // r4
  unsigned int v30; // r5
  int v32; // r7
  unsigned int v33; // r0
  unsigned int v34; // r3
  unsigned int v35; // r3
  unsigned int v36; // r3
  unsigned int v37; // r3
  unsigned __int8 *v38; // r2
  int v39; // r1
  int j; // r3
  int k; // r2
  int m; // r2
  int n; // r2
  int v44; // r6
  _DWORD *v45; // r1
  int ii; // r2
  unsigned __int8 *v47; // r12
  int v48; // r7
  int v49; // r1
  _DWORD *v50; // r3
  int v51; // r1
  int *v52; // r3
  int v53; // r1
  int *v54; // r3
  int v55; // r1
  __int16 *v56; // r3
  unsigned __int8 *v57; // r3
  int v58; // r1
  int i2; // r2
  unsigned __int8 v60; // r2
  int i3; // r2
  __int16 v62; // r2
  int i4; // r2
  int v64; // r2
  int i5; // r2
  int v66; // r2
  _DWORD *v67; // r0
  int v68; // r2
  int v69; // r6
  int v70; // r6
  int v71; // r0
  int v72; // r7
  unsigned int i1; // r1
  unsigned int nn; // r3
  unsigned int mm; // r3
  unsigned int kk; // r3
  int jj; // r3
  int v78; // r1
  int v79; // r2
  int v80; // r1
  int v81; // r2
  unsigned __int8 *v82; // r3
  int v83; // r2
  int v84; // r3
  int v85; // r0
  _WORD *v86; // r7
  unsigned int v87; // r4
  _DWORD *v88; // r3
  int *v89; // r2
  _DWORD *v90; // r4
  unsigned int *v91; // r3
  unsigned int *v92; // r2
  unsigned int *v93; // r4
  _DWORD *v94; // r3
  int *v95; // r2
  _DWORD *v96; // r4
  _WORD *v97; // r3
  __int16 *v98; // r2
  _WORD *v99; // r4
  int i; // r3
  __int16 v101; // r1
  int v102; // r6
  int v103; // r5
  int v104; // r6
  unsigned int i6; // [sp+30h] [bp+30h]

  if ( v30 != 6408 )
  {
    if ( v30 <= 0x1908 )
    {
      if ( v30 == 6406 )
      {
        v85 = ialloc();
        v86 = (_WORD *)v85;
        if ( v85 != 0 )
        {
          v87 = v29 >> 1;
          v33 = a29 - 5120;
          switch ( a29 )
          {
            case 5120:
            case 5121:
              for ( i = 0; i != v87; ++i )
                *((_BYTE *)v86 + i) = a19[2 * i + 3];
              return def_1F88AA(v33);
            case 5122:
            case 5123:
            case 5131:
              v97 = v86;
              v98 = (__int16 *)(a19 + 6);
              v99 = &v86[v87];
              while ( v97 != v99 )
              {
                v101 = *v98;
                v98 += 2;
                *v97++ = v101;
              }
              return def_1F88AA(v33);
            case 5124:
            case 5125:
              v94 = v86;
              v95 = (int *)(a19 + 12);
              v96 = &v86[2 * v87];
              while ( v94 != v96 )
              {
                v102 = *v95;
                v95 += 2;
                *v94++ = v102;
              }
              return def_1F88AA(v33);
            case 5126:
              v91 = (unsigned int *)v86;
              v92 = (unsigned int *)(a19 + 12);
              v93 = (unsigned int *)&v86[2 * v87];
              while ( v91 != v93 )
              {
                v33 = *v92;
                v92 += 2;
                *v91++ = v33;
              }
              return def_1F88AA(v33);
            case 5127:
            case 5128:
            case 5129:
              goto LABEL_104;
            case 5130:
              v88 = v86;
              v89 = (int *)(a19 + 24);
              v90 = &v86[4 * v87];
              while ( v88 != v90 )
              {
                v103 = *v89;
                v104 = v89[1];
                v89 += 4;
                *v88 = v103;
                v88[1] = v104;
                v88 += 2;
              }
              return def_1F88AA(v33);
            default:
              return def_1F88AA(v33);
          }
        }
        return sub_1F8D76();
      }
      if ( v30 != 6407 )
        return sub_1F8F6A(6408);
LABEL_12:
      v32 = ialloc();
      if ( v32 != 0 )
      {
        v33 = a29 - 5120;
        switch ( a29 )
        {
          case 5120:
          case 5121:
            v38 = a19;
            v39 = v32;
            while ( v38 - a19 < v29 )
            {
              for ( j = 0; j != 3; ++j )
              {
                v33 = *v38;
                *(_BYTE *)(v39 + j) = v33;
              }
              v38 += 2;
              v39 += 3;
            }
            return def_1F88AA(v33);
          case 5122:
          case 5123:
          case 5131:
            v37 = 0;
            v33 = 3;
            while ( v37 < v29 )
            {
              for ( k = 0; k != 6; k += 2 )
                *(_WORD *)(3 * v37 + v32 + k) = *(_WORD *)&a19[2 * v37];
              v37 += 2;
            }
            return def_1F88AA(v33);
          case 5124:
          case 5125:
            v36 = 0;
            v33 = 6;
            while ( v36 < v29 )
            {
              for ( m = 0; m != 12; m += 4 )
                *(_DWORD *)(v32 + 6 * v36 + m) = *(_DWORD *)&a19[4 * v36];
              v36 += 2;
            }
            return def_1F88AA(v33);
          case 5126:
            v35 = 0;
            v33 = 6;
            while ( v35 < v29 )
            {
              for ( n = 0; n != 12; n += 4 )
                *(_DWORD *)(v32 + 6 * v35 + n) = *(_DWORD *)&a19[4 * v35];
              v35 += 2;
            }
            return def_1F88AA(v33);
          case 5127:
          case 5128:
          case 5129:
            goto LABEL_104;
          case 5130:
            v34 = 0;
            v33 = 12;
            while ( v34 < v29 )
            {
              v47 = &a19[8 * v34];
              for ( ii = 0; ii != 24; ii += 8 )
              {
                v44 = *((_DWORD *)v47 + 1);
                v45 = (_DWORD *)(v32 + 12 * v34 + ii);
                *v45 = *(_DWORD *)v47;
                v45[1] = v44;
              }
              v34 += 2;
            }
            return def_1F88AA(v33);
          default:
            return def_1F88AA(v33);
        }
      }
      return sub_1F8D76();
    }
    if ( v30 == a3 )
      goto LABEL_12;
    if ( v30 != a2 )
    {
      if ( v30 == a4 )
      {
        v71 = ialloc();
        v72 = v71;
        if ( v71 != 0 )
        {
          v33 = a29 - 5120;
          switch ( a29 )
          {
            case 5120:
            case 5121:
              for ( jj = 0; 2 * jj < v29; ++jj )
                *(_BYTE *)(v72 + jj) = a19[2 * jj];
              return def_1F88AA(v33);
            case 5122:
            case 5123:
            case 5131:
              for ( kk = 0; kk < v29; kk += 2 )
                *(_WORD *)(v72 + kk) = *(_WORD *)&a19[2 * kk];
              return def_1F88AA(v33);
            case 5124:
            case 5125:
              for ( mm = 0; mm < v29; mm += 2 )
              {
                v78 = *(_DWORD *)&a19[4 * mm];
                v79 = 2 * mm;
                *(_DWORD *)(v72 + v79) = v78;
              }
              return def_1F88AA(v33);
            case 5126:
              for ( nn = 0; nn < v29; nn += 2 )
              {
                v80 = *(_DWORD *)&a19[4 * nn];
                v81 = 2 * nn;
                *(_DWORD *)(v72 + v81) = v80;
              }
              return def_1F88AA(v33);
            case 5127:
            case 5128:
            case 5129:
              goto LABEL_104;
            case 5130:
              for ( i1 = 0; i1 < v29; i1 += 2 )
              {
                v82 = &a19[8 * i1];
                v33 = v72 + 4 * i1;
                v83 = *(_DWORD *)v82;
                v84 = *((_DWORD *)v82 + 1);
                *(_DWORD *)v33 = v83;
                *(_DWORD *)(v33 + 4) = v84;
              }
              return def_1F88AA(v33);
            default:
              return def_1F88AA(v33);
          }
        }
        return sub_1F8D76();
      }
      return sub_1F8F6A(6408);
    }
  }
  v48 = ialloc();
  if ( v48 == 0 )
    return sub_1F8E98();
  v33 = a29 - 5120;
  switch ( a29 )
  {
    case 5120:
    case 5121:
      v57 = a19;
      v58 = v48;
      while ( v57 - a19 < v29 )
      {
        for ( i2 = 0; i2 != 3; ++i2 )
        {
          v33 = *v57;
          *(_BYTE *)(v58 + i2) = v33;
        }
        v60 = v57[1];
        v57 += 2;
        *(_BYTE *)(v58 + 3) = v60;
        v58 += 4;
      }
      break;
    case 5122:
    case 5123:
    case 5131:
      v55 = v48;
      v33 = 0;
      v56 = (__int16 *)(a19 + 2);
      while ( v33 < v29 )
      {
        for ( i3 = 0; i3 != 6; i3 += 2 )
          *(_WORD *)(v55 + i3) = *(v56 - 1);
        v62 = *v56;
        v33 += 2;
        v56 += 2;
        *(_WORD *)(v55 + 6) = v62;
        v55 += 8;
      }
      break;
    case 5124:
    case 5125:
      v53 = v48;
      v33 = 0;
      v54 = (int *)(a19 + 4);
      while ( v33 < v29 )
      {
        for ( i4 = 0; i4 != 12; i4 += 4 )
          *(_DWORD *)(v53 + i4) = *(v54 - 1);
        v64 = *v54;
        v33 += 2;
        v54 += 2;
        *(_DWORD *)(v53 + 12) = v64;
        v53 += 16;
      }
      break;
    case 5126:
      v51 = v48;
      v33 = 0;
      v52 = (int *)(a19 + 4);
      while ( v33 < v29 )
      {
        for ( i5 = 0; i5 != 12; i5 += 4 )
          *(_DWORD *)(v51 + i5) = *(v52 - 1);
        v66 = *v52;
        v33 += 2;
        v52 += 2;
        *(_DWORD *)(v51 + 12) = v66;
        v51 += 16;
      }
      break;
    case 5127:
    case 5128:
    case 5129:
LABEL_104:
      JUMPOUT(0x1F8F86);
    case 5130:
      v49 = v48;
      v50 = a19 + 8;
      for ( i6 = 0; ; i6 += 2 )
      {
        v33 = i6;
        if ( i6 >= v29 )
          break;
        v68 = 0;
        do
        {
          v67 = (_DWORD *)(v49 + v68);
          v68 += 8;
          v69 = *(v50 - 1);
          *v67 = *(v50 - 2);
          v67[1] = v69;
        }
        while ( v68 != 24 );
        v70 = v50[1];
        *(_DWORD *)(v49 + 24) = *v50;
        *(_DWORD *)(v49 + 28) = v70;
        v50 += 4;
        v49 += 32;
      }
      break;
    default:
      return def_1F88AA(v33);
  }
  return def_1F88AA(v33);
}


//======================================================================
// sub_1F8D46
// address: 0x001F8D46   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_1F8D46(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int *a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  int v29; // r4
  unsigned int v30; // r5
  int v31; // r6
  int v32; // r3
  size_t v34; // r4
  void *v35; // r7
  int v36; // r0
  int v37; // r7
  int *v38; // r5
  int *v39; // r4
  int *v40; // r1
  int v41; // r2
  int *v42; // r4
  int *v43; // r1
  int v44; // r2
  int *v45; // r4
  int *v46; // r2
  int v47; // r1
  int *v48; // r4
  unsigned __int8 *v49; // r2
  _BYTE *v50; // r3
  unsigned __int8 *v51; // r4
  int i; // r3
  __int16 v53; // r3
  int j; // r3
  int v55; // r3
  int k; // r3
  int v57; // r5
  _DWORD *v58; // r6
  int m; // r1
  int v60; // r1
  int v61; // r2
  int v62; // r0
  _BYTE *v63; // r7
  _DWORD *v64; // r1
  int *v65; // r4
  int *v66; // r2
  _DWORD *v67; // r3
  int *v68; // r4
  int *v69; // r2
  _DWORD *v70; // r3
  int *v71; // r4
  unsigned __int16 *v72; // r3
  _WORD *v73; // r2
  unsigned __int16 *v74; // r4
  unsigned __int8 *v75; // r3
  _BYTE *v76; // r2
  unsigned __int8 *v77; // r4
  int v78; // r5
  int v79; // r5
  int v80; // r6

  if ( v30 == 6410 )
  {
    v62 = ialloc();
    v63 = (_BYTE *)v62;
    if ( v62 != 0 )
    {
      v36 = a29 - 5120;
      switch ( a29 )
      {
        case 5120:
        case 5121:
          v75 = (unsigned __int8 *)a19;
          v76 = v63;
          v77 = (unsigned __int8 *)a19 + v29;
          while ( v75 != v77 )
          {
            *v76 = 0;
            v36 = *v75++;
            v76[1] = v36;
            v76 += 2;
          }
          return def_1F88AA(v36);
        case 5122:
        case 5123:
        case 5131:
          v72 = (unsigned __int16 *)a19;
          v73 = v63;
          v74 = (unsigned __int16 *)a19 + v29;
          while ( v72 != v74 )
          {
            *v73 = 0;
            v36 = *v72++;
            v73[1] = v36;
            v73 += 2;
          }
          return def_1F88AA(v36);
        case 5124:
        case 5125:
          v69 = a19;
          v70 = v63;
          v71 = &a19[v29];
          while ( v69 != v71 )
          {
            *v70 = 0;
            v36 = *v69++;
            v70[1] = v36;
            v70 += 2;
          }
          return def_1F88AA(v36);
        case 5126:
          v66 = a19;
          v67 = v63;
          v68 = &a19[v29];
          while ( v66 != v68 )
          {
            *v67 = 0;
            v78 = *v66++;
            v67[1] = v78;
            v67 += 2;
          }
          return def_1F88AA(v36);
        case 5127:
        case 5128:
        case 5129:
          goto LABEL_58;
        case 5130:
          v36 = (int)a19;
          v64 = v63;
          v65 = &a19[2 * v29];
          while ( (int *)v36 != v65 )
          {
            *v64 = 0;
            v64[1] = 0;
            v79 = *(_DWORD *)v36;
            v80 = *(_DWORD *)(v36 + 4);
            v36 += 8;
            v64[2] = v79;
            v64[3] = v80;
            v64 += 4;
          }
          return def_1F88AA(v36);
        default:
          return def_1F88AA(v36);
      }
    }
    return sub_1F8E98();
  }
  if ( v30 > 0x190A )
  {
    if ( v30 != 32992 )
    {
      v32 = 32993;
      goto LABEL_8;
    }
  }
  else if ( v30 != a3 )
  {
    v32 = 6408;
LABEL_8:
    if ( v30 != v32 )
      return sub_1F8F6A(a1);
    v37 = ialloc();
    if ( v37 == 0 )
      return sub_1F8E98();
    v36 = a29 - 5120;
    switch ( a29 )
    {
      case 5120:
      case 5121:
        v49 = (unsigned __int8 *)a19;
        v50 = (_BYTE *)v37;
        v51 = (unsigned __int8 *)a19 + v29;
        while ( v49 != v51 )
        {
          *v50 = 0;
          v50[1] = 0;
          v50[2] = 0;
          v36 = *v49++;
          v50[3] = v36;
          v50 += 4;
        }
        break;
      case 5122:
      case 5123:
      case 5131:
        v46 = a19;
        v47 = v37;
        v48 = (int *)((char *)a19 + 2 * v29);
        v36 = 0;
        while ( v46 != v48 )
        {
          for ( i = 0; i != 6; i += 2 )
            *(_WORD *)(v47 + i) = 0;
          v53 = *(_WORD *)v46;
          v46 = (int *)((char *)v46 + 2);
          *(_WORD *)(v47 + 6) = v53;
          v47 += 8;
        }
        break;
      case 5124:
      case 5125:
        v43 = a19;
        v44 = v37;
        v45 = &a19[v29];
        v36 = 0;
        while ( v43 != v45 )
        {
          for ( j = 0; j != 12; j += 4 )
            *(_DWORD *)(v44 + j) = 0;
          v55 = *v43++;
          *(_DWORD *)(v44 + 12) = v55;
          v44 += 16;
        }
        break;
      case 5126:
        v40 = a19;
        v41 = v37;
        v42 = &a19[v29];
        v36 = 0;
        while ( v40 != v42 )
        {
          for ( k = 0; k != 12; k += 4 )
            *(_DWORD *)(v41 + k) = 0;
          v57 = *v40++;
          *(_DWORD *)(v41 + 12) = v57;
          v41 += 16;
        }
        break;
      case 5127:
      case 5128:
      case 5129:
LABEL_58:
        JUMPOUT(0x1F8F86);
      case 5130:
        v38 = a19;
        v36 = v37;
        v39 = &a19[2 * v29];
        while ( v38 != v39 )
        {
          for ( m = 0; m != 24; m += 8 )
          {
            v58 = (_DWORD *)(v36 + m);
            *v58 = 0;
            v58[1] = 0;
          }
          v60 = *v38;
          v61 = v38[1];
          v38 += 2;
          *(_DWORD *)(v36 + 24) = v60;
          *(_DWORD *)(v36 + 28) = v61;
          v36 += 32;
        }
        break;
      default:
        return def_1F88AA(v36);
    }
    return def_1F88AA(v36);
  }
  v34 = v29 * 3 * v31;
  v35 = (void *)ialloc();
  if ( v35 != nullptr )
  {
    v36 = -5120;
    if ( (unsigned int)(a29 - 5120) <= 0xB && ((1 << a29) & 0xC7F) != 0 )
      v36 = (int)j_memset(v35, 0, v34);
    return def_1F88AA(v36);
  }
  return sub_1F8D76();
}


//======================================================================
// sub_1F8D76
// address: 0x001F8D76   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_1F8D76(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31)
{
  if ( a19 != a31 )
    JUMPOUT(0x1F8F8E);
  return sub_1F8F80(a1);
}


//======================================================================
// sub_1F8E98
// address: 0x001F8E98   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_1F8E98(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31)
{
  if ( a19 != a31 )
    JUMPOUT(0x1F8F90);
  return sub_1F8F80(a1);
}


//======================================================================
// sub_1F8F6A
// address: 0x001F8F6A   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_1F8F6A(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31)
{
  int v31; // r0

  v31 = ilSetError(1296);
  if ( a19 == a31 )
    return sub_1F8F80(v31);
  else
    return sub_1F8F7C(a19);
}


//======================================================================
// sub_1F8F7C
// address: 0x001F8F7C   size: 0x4 (4 bytes)
//======================================================================
// attributes: thunk
int __fastcall sub_1F8F7C(int a1)
{
  int v1; // r0

  v1 = ifree(a1);
  return sub_1F8F80(v1);
}


//======================================================================
// sub_1F8F80
// address: 0x001F8F80   size: 0x4 (4 bytes)
//======================================================================
void sub_1F8F80()
{
  JUMPOUT(0x1F8F9C);
}


//======================================================================
// sub_1F8F84
// address: 0x001F8F84   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_1F8F84(int a1)
{
  return def_1F88AA(a1);
}


//======================================================================
// sub_1F8F96
// address: 0x001F8F96   size: 0xA (10 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1F8F96(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}

