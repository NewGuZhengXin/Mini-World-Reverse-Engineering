// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_330000

//======================================================================
// sub_333940
// address: 0x00333940   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_333940(
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
        int a21)
{
  int v21; // r6

  *(_DWORD *)(a21 + 4) = v21;
  *(_DWORD *)(a20 + 4) = v21;
  return sub_3339D6(-2113862649);
}


//======================================================================
// sub_3339D6
// address: 0x003339D6   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3339D6(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_333B52
// address: 0x00333B52   size: 0x86C (2156 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00333B52  LDR     R6, [R4,#0xC]
//   00333B54  STR     R6, [SP,#arg_20]; int
//   00333B56  CMP     R6, #0
//   00333B58  BGT     loc_333B8E
//   00333B5A  LDR     R6, [SP,#arg_34]
//   00333B5C  SUBS    R4, #0x5C ; '\'
//   00333B5E  SUBS    R6, #1
//   00333B60  STR     R6, [SP,#arg_34]; int
//   00333B62  CMP     R6, #0
//   00333B64  BNE     loc_333B6A
//   00333B66  BL      sub_334488
//   00333B6A  LDR     R5, [R4]
//   00333B6C  LDR     R0, [R5,#0x10]; int
//   00333B6E  CMP     R0, #0
//   00333B70  BNE     loc_333B76
//   00333B72  LDR     R3, [R4,#0xC]
//   00333B74  B       loc_333BD2
//   00333B76  LDR     R2, [R4,#0x10]
//   00333B78  LDR     R6, [R5,#0x2C]
//   00333B7A  MOVS    R3, #0; int
//   00333B7C  ADDS    R2, #1; int
//   00333B7E  STR     R2, [R4,#0x10]
//   00333B80  CMP     R2, R6
//   00333B82  BGE     loc_333B88
//   00333B84  BL      sub_3343BE
//   00333B88  STR     R3, [R4,#0x10]
//   00333B8A  LDR     R3, [R4,#0xC]
//   00333B8C  B       loc_333C50
//   00333B8E  LDR     R6, [R4,#0x10]
//   00333B90  MOVS    R3, #0xD0
//   00333B92  MULS    R3, R6
//   00333B94  ADDS    R3, #0xC8
//   00333B96  ADDS    R7, R5, R3
//   00333B98  LDR     R0, [R7,#0x78]
//   00333B9A  MOVS    R3, #3
//   00333B9C  STR     R6, [SP,#arg_28]; int
//   00333B9E  ANDS    R3, R0
//   00333BA0  BEQ     loc_333BC2
//   00333BA2  LDR     R1, [R5,#0x10]; int
//   00333BA4  CMP     R1, #0
//   00333BA6  BNE     loc_333BAC
//   00333BA8  LDR     R3, [SP,#arg_20]
//   00333BAA  B       loc_33414E
//   00333BAC  LDR     R2, [SP,#arg_28]
//   00333BAE  LDR     R0, [R5,#0x2C]; int
//   00333BB0  MOVS    R3, #0; int
//   00333BB2  ADDS    R2, #1; int
//   00333BB4  STR     R2, [R4,#0x10]
//   00333BB6  CMP     R2, R0
//   00333BB8  BGE     loc_333BBE
//   00333BBA  BL      sub_3343BE
//   00333BBE  STR     R3, [R4,#0x10]
//   00333BC0  B       loc_333BD0
//   00333BC2  ADDS    R2, R7, #2
//   00333BC4  LDRH    R1, [R2,#0x3E]
//   00333BC6  LSLS    R6, R1, #0x1E
//   00333BC8  BPL     loc_333BE6
//   00333BCA  LDR     R0, [R5,#0x10]
//   00333BCC  CMP     R0, #0
//   00333BCE  BNE     loc_333BDE
//   00333BD0  LDR     R3, [SP,#arg_20]
//   00333BD2  SUBS    R3, #1
//   00333BD4  STR     R3, [R4,#0xC]
//   00333BD6  LDR     R1, [R4,#0x28]
//   00333BD8  LDR     R2, [R5,#0x1C]
//   00333BDA  ADDS    R3, R1, R2
//   00333BDC  B       loc_334264
//   00333BDE  LDR     R2, [SP,#arg_28]
//   00333BE0  ADDS    R2, #1
//   00333BE2  STR     R2, [R4,#0x10]
//   00333BE4  B       loc_333C44
//   00333BE6  LDR     R2, [R7,#0x58]
//   00333BE8  CMP     R2, #0
//   00333BEA  BLE     loc_333C0C
//   00333BEC  LDR     R6, [R4,#0x28]
//   00333BEE  LDR     R0, [R7,#0x5C]
//   00333BF0  ADDS    R3, R6, R0
//   00333BF2  CMP     R2, #4
//   00333BF4  BEQ     loc_333C02
//   00333BF6  CMP     R2, #8
//   00333BF8  BEQ     loc_333C02
//   00333BFA  CMP     R2, #2
//   00333BFC  BNE     loc_333C06
//   00333BFE  LDRH    R3, [R3]
//   00333C00  B       loc_333C08
//   00333C02  LDR     R3, [R3]
//   00333C04  B       loc_333C08
//   00333C06  LDRB    R3, [R3]
//   00333C08  STR     R3, [SP,#arg_1C]
//   00333C0A  B       loc_333C10
//   00333C0C  LDR     R6, [R7,#0x20]
//   00333C0E  STR     R6, [SP,#arg_1C]; int
//   00333C10  LDR     R6, [SP,#arg_1C]
//   00333C12  CMP     R6, #0
//   00333C14  BGE     loc_333C24
//   00333C16  LDR     R0, [R4,#0x24]
//   00333C18  LDR     R3, [R7,#0x28]
//   00333C1A  ADDS    R3, R0, R3
//   00333C1C  STR     R3, [R4,#0x24]
//   00333C1E  LDR     R0, =0x82010403
//   00333C20  BL      sub_334492
//   00333C24  LDR     R3, [R7,#0x20]
//   00333C26  LDR     R6, [SP,#arg_1C]
//   00333C28  CMP     R3, R6
//   00333C2A  BGE     loc_333C30
//   00333C2C  CMP     R3, #0
//   00333C2E  BGT     loc_333C16
//   00333C30  LDR     R6, [SP,#arg_1C]
//   00333C32  CMP     R6, #0
//   00333C34  BNE     loc_333C5C
//   00333C36  LDR     R0, [R5,#0x10]; int
//   00333C38  CMP     R0, #0
//   00333C3A  BEQ     loc_333BD0
//   00333C3C  LDR     R2, [SP,#arg_28]
//   00333C3E  LDR     R3, [SP,#arg_1C]; int
//   00333C40  ADDS    R2, #1; int
//   00333C42  STR     R2, [R4,#0x10]
//   00333C44  LDR     R6, [R5,#0x2C]
//   00333C46  CMP     R2, R6
//   00333C48  BGE     loc_333C4C
//   00333C4A  B       sub_3343BE
//   00333C4C  STR     R3, [R4,#0x10]
//   00333C4E  LDR     R3, [SP,#arg_20]
//   00333C50  SUBS    R3, #1
//   00333C52  STR     R3, [R4,#0xC]
//   00333C54  LDR     R0, [R4,#0x28]
//   00333C56  LDR     R1, [R5,#0x1C]
//   00333C58  ADDS    R3, R0, R1
//   00333C5A  B       loc_334264
//   00333C5C  LDR     R0, [R7,#0x28]
//   00333C5E  LDR     R6, [R4,#0x28]
//   00333C60  MOV     R12, R0
//   00333C62  STR     R6, [SP,#arg_2C]
//   00333C64  ADD     R6, R12
//   00333C66  STR     R6, [SP,#arg_14]
//   00333C68  LDR     R6, [R4,#0x2C]
//   00333C6A  STR     R6, [SP,#arg_3C]
//   00333C6C  LSLS    R0, R1, #0x1D
//   00333C6E  BPL     loc_333C7C
//   00333C70  LDR     R6, [SP,#arg_14]
//   00333C72  LDR     R0, [R7,#0x10]
//   00333C74  LDR     R6, [R6]
//   00333C76  STR     R6, [SP,#arg_14]
//   00333C78  ADDS    R6, R6, R0
//   00333C7A  STR     R6, [SP,#arg_3C]; int
//   00333C7C  LDR     R6, [R4,#0x20]
//   00333C7E  LDR     R0, [R7,#4]
//   00333C80  STR     R6, [SP,#arg_30]; int
//   00333C82  CMP     R0, R6
//   00333C84  BLE     loc_333D14
//   00333C86  MOVS    R3, R7
//   00333C88  ADDS    R3, #0xC4
//   00333C8A  LDR     R1, [R3]
//   00333C8C  LDR     R6, [SP,#arg_3C]
//   00333C8E  LDR     R0, [SP,#arg_14]
//   00333C90  SUBS    R3, R6, R0
//   00333C92  ADDS    R2, R1, #1
//   00333C94  BNE     loc_333CB6
//   00333C96  LDR     R2, [R7,#0x1C]
//   00333C98  CMP     R2, #0
//   00333C9A  BGT     loc_333C9E
//   00333C9C  LDR     R2, [R7,#0x14]
//   00333C9E  LDR     R6, [SP,#arg_1C]
//   00333CA0  MULS    R2, R6
//   00333CA2  CMP     R3, R2
//   00333CA4  BGE     loc_333CAA
//   00333CA6  BL      sub_3344BC
//   00333CAA  LDR     R0, [SP,#arg_14]; void *
//   00333CAC  MOVS    R1, #0; int
//   00333CAE  BL      j_memset
//   00333CB2  BL      sub_3344C6
//   00333CB6  LDR     R2, [R7,#8]
//   00333CB8  SUBS    R2, #0x15
//   00333CBA  CMP     R2, #1
//   00333CBC  BHI     loc_333CC8
//   00333CBE  LDR     R0, [R7,#0x1C]
//   00333CC0  CMP     R0, #0
//   00333CC2  BGT     loc_333CCA
//   00333CC4  MOVS    R0, R3
//   00333CC6  B       loc_333CCA
//   00333CC8  LDR     R0, [R7,#0x14]
//   00333CCA  MOVS    R2, R7
//   00333CCC  ADDS    R2, #0xB8
//   00333CCE  LDR     R2, [R2]
//   00333CD0  CMP     R0, R3
//   00333CD2  BLE     loc_333CD6
//   00333CD4  MOVS    R0, R3
//   00333CD6  CMP     R0, R2
//   00333CD8  BGE     loc_333CDE
//   00333CDA  BL      sub_3344BC
//   00333CDE  LDR     R6, [SP,#arg_4C]
//   00333CE0  ADDS    R1, #0xA8
//   00333CE2  ADDS    R1, R6, R1; void *
//   00333CE4  CMP     R2, #0x40 ; '@'
//   00333CE6  BGT     loc_333D00
//   00333CE8  MOVS    R2, R7
//   00333CEA  MOVS    R3, #0
//   00333CEC  ADDS    R2, #0xB8
//   00333CEE  LDR     R0, [R2]
//   00333CF0  CMP     R3, R0

//======================================================================
// sub_3343BE
// address: 0x003343BE   size: 0xCA (202 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003343BE  LDR     R6, [SP,#arg_34]
//   003343C0  CMP     R6, #0
//   003343C2  BEQ     sub_334488
//   003343C4  CMP     R3, #0
//   003343C6  BNE     loc_3343CC
//   003343C8  BL      sub_333B52
//   003343CC  LDR     R0, [R4,#0x24]
//   003343CE  LDR     R1, [R5,#0x1C]
//   003343D0  LDR     R6, [R4,#0x14]
//   003343D2  ADDS    R3, R0, R1
//   003343D4  STR     R3, [R4,#0x24]
//   003343D6  CMP     R6, #0
//   003343D8  BLE     loc_334458
//   003343DA  LDR     R1, [R4,#0x34]; void *
//   003343DC  CMP     R6, #4
//   003343DE  BEQ     loc_334400
//   003343E0  CMP     R6, #8
//   003343E2  BEQ     loc_334424
//   003343E4  CMP     R6, #2
//   003343E6  BNE     loc_33444A
//   003343E8  LDRB    R2, [R1]
//   003343EA  ADD     R3, SP, #arg_50
//   003343EC  STRB    R2, [R3]
//   003343EE  LDRB    R2, [R1,#1]
//   003343F0  STRB    R2, [R3,#1]
//   003343F2  LDRH    R2, [R3]
//   003343F4  LSLS    R3, R2, #8
//   003343F6  LSRS    R2, R2, #8
//   003343F8  ORRS    R3, R2
//   003343FA  LSLS    R3, R3, #0x10
//   003343FC  LSRS    R3, R3, #0x10
//   003343FE  B       loc_33444C
//   00334400  MOVS    R2, R6; size_t
//   00334402  ADD     R0, SP, #arg_50; void *
//   00334404  BL      j_memcpy
//   00334408  LDR     R2, [SP,#arg_50]
//   0033440A  LSRS    R1, R2, #0x18
//   0033440C  LSLS    R3, R2, #0x18
//   0033440E  ORRS    R3, R1
//   00334410  MOVS    R1, #0xFF00
//   00334414  ANDS    R1, R2
//   00334416  LSLS    R1, R1, #8
//   00334418  ORRS    R3, R1
//   0033441A  MOVS    R1, #0xFF0000
//   0033441E  ANDS    R2, R1
//   00334420  LSRS    R2, R2, #8
//   00334422  B       loc_334446
//   00334424  MOVS    R2, R6; size_t
//   00334426  ADD     R0, SP, #arg_50; void *
//   00334428  BL      j_memcpy
//   0033442C  LDR     R2, [SP,#arg_54]
//   0033442E  MOVS    R3, #0xFF0000
//   00334432  ANDS    R3, R2
//   00334434  LSRS    R1, R2, #0x18
//   00334436  LSRS    R3, R3, #8
//   00334438  ORRS    R3, R1
//   0033443A  MOVS    R1, #0xFF00
//   0033443E  ANDS    R1, R2
//   00334440  LSLS    R1, R1, #8
//   00334442  ORRS    R3, R1
//   00334444  LSLS    R2, R2, #0x18
//   00334446  ORRS    R3, R2
//   00334448  B       loc_33444C
//   0033444A  LDRB    R3, [R1]
//   0033444C  LDR     R2, [R4,#0x30]; int
//   0033444E  LDR     R0, [SP,#arg_38]; int
//   00334450  ADDS    R3, R2, R3; int
//   00334452  STR     R3, [SP,#arg_18]; void *
//   00334454  CMP     R3, R0
//   00334456  BHI     loc_33451C
//   00334458  LDR     R1, [R4,#0xC]; int
//   0033445A  CMP     R1, #0
//   0033445C  BGT     loc_334462
//   0033445E  BL      sub_333B52
//   00334462  CMP     R6, #0
//   00334464  BGT     loc_33446A
//   00334466  BL      sub_333B52
//   0033446A  LDR     R3, [R4,#0x18]; int
//   0033446C  LDR     R6, [SP,#arg_18]
//   0033446E  CMP     R3, #0
//   00334470  BGE     loc_33447E
//   00334472  STR     R6, [R4,#0x34]
//   00334474  SUBS    R6, R6, R3
//   00334476  STR     R6, [SP,#arg_18]; void *
//   00334478  STR     R6, [R4,#0x30]
//   0033447A  BL      sub_333B52
//   0033447E  ADDS    R3, R6, R3; int
//   00334480  STR     R6, [R4,#0x30]
//   00334482  STR     R3, [R4,#0x34]
//   00334484  BL      sub_333B52

//======================================================================
// sub_334488
// address: 0x00334488   size: 0x4 (4 bytes)
//======================================================================
void sub_334488()
{
  JUMPOUT(0x3344AA);
}


//======================================================================
// sub_334492
// address: 0x00334492   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall sub_334492(
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
        _DWORD *a21,
        int a22)
{
  *(_DWORD *)(a22 + 4) = *(&STACK[0xBD8] + 23 * a18 - 750);
  a21[1] = a11 - *a21;
  return sub_334520(a1);
}


//======================================================================
// sub_3344B8
// address: 0x003344B8   size: 0x4 (4 bytes)
//======================================================================
__int64 sub_3344B8()
{
  return sub_334520(-2113862556);
}


//======================================================================
// sub_3344BC
// address: 0x003344BC   size: 0xA (10 bytes)
//======================================================================
__int64 __fastcall sub_3344BC(
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
        _DWORD *a21,
        int a22)
{
  int v22; // r4
  int v23; // r12
  int v24; // r3

  v24 = *(_DWORD *)(v22 + 36) + v23;
  *(_DWORD *)(v22 + 36) = v24;
  return sub_334492(
           -2113862649,
           a2,
           a3,
           v24,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22);
}


//======================================================================
// sub_3344C6
// address: 0x003344C6   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_3344C6(
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
        void *a11,
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
        int a26)
{
  int v26; // r4
  int v27; // r5
  int v28; // r0
  int v29; // r1

  v28 = *(_DWORD *)(v27 + 16);
  if ( v28 == 0 )
  {
LABEL_5:
    *(_DWORD *)(v26 + 12) = a13 - 1;
    JUMPOUT(0x334260);
  }
  *(_DWORD *)(v26 + 16) = a15 + 1;
  v29 = *(_DWORD *)(v27 + 44);
  if ( a15 + 1 >= v29 )
  {
    *(_DWORD *)(v26 + 16) = 0;
    goto LABEL_5;
  }
  return sub_3343BE(
           v28,
           v29,
           a15 + 1,
           0,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26);
}


//======================================================================
// sub_334520
// address: 0x00334520   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_334520(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_3359E0
// address: 0x003359E0   size: 0x54 (84 bytes)
//======================================================================
_BYTE *__fastcall sub_3359E0(int a1, int a2, int a3)
{
  _DWORD *v3; // r5
  _BYTE *result; // r0
  int bindmacro_by_value; // r0
  int v7; // r1
  _BYTE *v8; // r2
  _BYTE *i; // r3

  v3 = (_DWORD *)(a2 + 200);
  if ( *(_DWORD *)(a2 + 200) == -1 )
    return nullptr;
  bindmacro_by_value = tdr_get_bindmacro_by_value(a1, a2, a3);
  v7 = bindmacro_by_value;
  if ( bindmacro_by_value == 0 )
    return nullptr;
  v8 = (_BYTE *)(a1 + *v3 + 188);
  for ( i = (_BYTE *)bindmacro_by_value;
        *i != 0
     && *v8 != 0
     && *(unsigned __int8 *)(toupper_tab_ + 2 * ((unsigned __int8)*v8 + 1)) == (unsigned __int8)*i;
        ++i )
  {
    ++v8;
  }
  result = i + 1;
  if ( *v8 != 0 )
    return (_BYTE *)v7;
  return result;
}


//======================================================================
// sub_336344
// address: 0x00336344   size: 0x56C (1388 bytes)
//======================================================================
int __fastcall sub_336344(int a1, int a2, int a3, int a4)
{
  _DWORD *v4; // r5
  const char *v5; // r6
  int v6; // r7
  int v7; // r1
  int v8; // r4
  const char *v9; // r3
  int v11; // r2
  _DWORD *v12; // r4
  int v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r1
  int v17; // r7
  _DWORD *v18; // r6
  int v19; // r7
  int v20; // r1
  __int16 v21; // r2
  int v22; // r2
  int v23; // r7
  int v24; // r3
  int v25; // r0
  int v26; // r1
  int v27; // r2
  const char *v28; // r3
  int v29; // r2
  unsigned __int16 *v30; // r3
  int v31; // r3
  int v32; // r3
  int v33; // r1
  int v34; // r3
  int v35; // r2
  unsigned __int16 *v36; // r3
  int v37; // r3
  int v38; // r1
  unsigned int v39; // r2
  int i; // r2
  int v41; // r0
  _DWORD *v42; // r1
  int v43; // r1
  int v44; // r2
  int v45; // r0
  int v46; // r7
  const char *v47; // r6
  const char *v48; // r3
  int v49; // r2
  const char *v50; // r3
  int v51; // r3
  int v52; // r0
  int v53; // r0
  int v54; // r7
  const char *v55; // r3
  int v56; // r0
  int v57; // r7
  int v58; // r1
  int v59; // r7
  int v60; // r7
  int v61; // [sp+8h] [bp-C54h]
  int v62; // [sp+10h] [bp-C4Ch]
  int v63; // [sp+14h] [bp-C48h]
  _DWORD *v64; // [sp+18h] [bp-C44h]
  int v65; // [sp+1Ch] [bp-C40h]
  int v66; // [sp+20h] [bp-C3Ch]
  int v67; // [sp+24h] [bp-C38h]
  int v68; // [sp+28h] [bp-C34h]
  const char *v69; // [sp+2Ch] [bp-C30h]
  int v70; // [sp+30h] [bp-C2Ch]
  int v71; // [sp+34h] [bp-C28h]
  int v72; // [sp+38h] [bp-C24h]
  int v73; // [sp+3Ch] [bp-C20h]
  int v74; // [sp+40h] [bp-C1Ch]
  const char *v75; // [sp+4Ch] [bp-C10h] BYREF
  _DWORD v76[736]; // [sp+50h] [bp-C0Ch] BYREF
  char v77[140]; // [sp+BD0h] [bp-8Ch] BYREF

  v4 = (_DWORD *)a1;
  v72 = a4;
  v66 = a2;
  v5 = *(const char **)a3;
  v6 = *(_DWORD *)(a3 + 4);
  v75 = v5;
  v7 = *(_DWORD *)(a1 + 104);
  v76[3] = 1;
  v69 = &v5[v6];
  v8 = *(_DWORD *)(a1 + 48);
  v76[0] = a1;
  v76[10] = v5;
  v76[4] = 0;
  if ( v7 > 0 )
  {
    v9 = &v5[*(_DWORD *)(a1 + 100)];
    if ( v69 - v9 < v7 )
    {
      *(_DWORD *)(a3 + 4) = 0;
      return -2113862649;
    }
    if ( v7 == 4 || v7 == 8 )
    {
      a4 = *(_DWORD *)v9;
    }
    else if ( v7 == 2 )
    {
      a4 = *(unsigned __int16 *)v9;
    }
    else
    {
      a4 = *(unsigned __int8 *)v9;
    }
    if ( a4 > v72 )
      a4 = v72;
  }
  v76[7] = 1;
  v11 = 0;
  v76[8] = a4;
  v76[14] = 0;
  v76[12] = 0;
  do
    v77[v11++] = 32;
  while ( v11 != 129 );
  v77[128] = 0;
  v63 = tdr_iostream_write(v66, "[%s version=\"%d\"]:", (const char *)(a1 + 128), a4);
  if ( v63 >= 0 )
  {
    v73 = (int)v4 - v8 - 168;
    v70 = 1;
    v12 = v76;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v65 = v12[3];
            if ( v65 <= 0 )
            {
              if ( --v70 == 0 )
                goto LABEL_127;
              v4 = (_DWORD *)*(v12 - 23);
              if ( v4[4] != 0 )
              {
                v13 = v4[11];
                v14 = 0;
                v15 = *(v12 - 19) + 1;
                *(v12 - 19) = v15;
                if ( v15 < v13 )
                {
LABEL_130:
                  v12 -= 23;
                  goto LABEL_121;
                }
                *(v12 - 19) = 0;
              }
              v16 = *(v12 - 13);
              v17 = v4[7];
              --*(v12 - 20);
              *(v12 - 13) = v16 + v17;
              v14 = *(v12 - 9);
              goto LABEL_130;
            }
            v18 = &v4[52 * v12[4] + 50];
            v71 = v12[4];
            v74 = v12[8];
            if ( v18[1] <= v74 )
              break;
            if ( v4[4] == 0 )
            {
              v19 = v12[10];
              v12[3] = v65 - 1;
              goto LABEL_119;
            }
            v20 = v4[11];
            v12[4] = v71 + 1;
            if ( v71 + 1 >= v20 )
            {
              v12[4] = 0;
LABEL_29:
              v22 = v12[10];
              v23 = v4[7];
              v12[3] = v65 - 1;
              v24 = v22 + v23;
LABEL_120:
              v12[10] = v24;
              v14 = v12[14];
LABEL_121:
              if ( v14 != 0 && (int)v12[3] > 0 )
              {
                v59 = 4 * (v12[7] - 1);
                v77[v59] = 0;
                v63 = tdr_iostream_write(v66, "\n%s[%s]", v77, (const char *)v12[12]);
                v77[v59] = 32;
              }
            }
          }
          v21 = *((_WORD *)v18 + 32);
          if ( (v21 & 2) == 0 )
            break;
          if ( v4[4] == 0 )
            goto LABEL_29;
          v25 = v4[11];
          v12[4] = v71 + 1;
          if ( v71 + 1 >= v25 )
          {
            v12[4] = 0;
            v26 = v12[10];
            v27 = v4[7];
            v12[3] = v65 - 1;
            v24 = v26 + v27;
            goto LABEL_120;
          }
        }
        v68 = v12[10];
        v28 = (const char *)(v68 + v18[10]);
        v75 = v28;
        if ( (v21 & 4) != 0 )
          v75 = *(const char **)v28;
        v29 = v18[22];
        if ( v29 <= 0 )
        {
          v62 = v18[8];
        }
        else
        {
          v30 = (unsigned __int16 *)(v68 + v18[23]);
          if ( v29 == 4 || v29 == 8 )
          {
            v31 = *(_DWORD *)v30;
          }
          else if ( v29 == 2 )
          {
            v31 = *v30;
          }
          else
          {
            v31 = *(unsigned __int8 *)v30;
          }
          v62 = v31;
        }
        if ( v62 < 0 || (v32 = v18[8]) > 0 && v32 < v62 )
        {
          v60 = -2113862653;
          goto LABEL_126;
        }
        if ( v62 != 0 )
          break;
        if ( v4[4] == 0 )
          goto LABEL_118;
        v33 = v4[11];
        v12[4] = v71 + 1;
        if ( v71 + 1 >= v33 )
        {
          v12[4] = 0;
          goto LABEL_118;
        }
      }
      v34 = v18[2];
      if ( v34 > 1 )
        break;
      if ( v70 > 31 )
      {
        v60 = -2113862652;
        goto LABEL_126;
      }
      if ( v34 != 0 )
      {
        v64 = (_DWORD *)(v73 + v18[32] + 168);
        v67 = 0;
        goto LABEL_82;
      }
      v35 = v18[26];
      v36 = (unsigned __int16 *)(v68 + v18[27]);
      if ( v35 == 4 || v35 == 8 )
      {
        v37 = *(_DWORD *)v36;
      }
      else if ( v35 == 2 )
      {
        v37 = *v36;
      }
      else
      {
        v37 = *(unsigned __int8 *)v36;
      }
      v38 = v73 + v18[32] + 168 + 252;
      v64 = (_DWORD *)(v73 + v18[32] + 168);
      v39 = *(_DWORD *)(v73 + v18[32] + 168 + 336);
      v67 = -((v39 >> 31) + (*(_DWORD *)(v38 + 80) >= v39) + (*(int *)(v38 + 80) >> 31));
      i = v37 - v39;
      v41 = v64[11];
      if ( i < 0 || i >= v41 || v64[52 * i + 84] != v37 || v37 > v64[52 * i + 83] )
      {
        if ( v41 <= 15 )
        {
          v42 = v64;
          for ( i = 0; i < v41; ++i )
          {
            if ( v42[84] <= v37 && v37 <= v42[83] )
              goto LABEL_129;
            v42 += 52;
          }
LABEL_80:
          if ( v67 == -1 )
            goto LABEL_115;
          goto LABEL_81;
        }
        v61 = v41 - 1;
        v43 = 0;
        while ( 2 )
        {
          v44 = (v43 + v61) >> 1;
          v45 = v64[52 * v44 + 84];
          v46 = v64[52 * v44 + 83];
          if ( v45 <= v46 )
          {
            if ( v37 < v45 )
            {
              v61 = v44 - 1;
              goto LABEL_77;
            }
            if ( v37 <= v46 )
            {
              v67 = (v43 + v61) >> 1;
              goto LABEL_80;
            }
          }
          v43 = v44 + 1;
LABEL_77:
          if ( v43 > v61 )
            goto LABEL_80;
          continue;
        }
      }
LABEL_129:
      v67 = i;
LABEL_81:
      if ( v64[52 * v67 + 51] > v74 )
      {
LABEL_115:
        if ( v4[4] == 0 )
          goto LABEL_118;
        v58 = v4[11];
        v12[4] = v71 + 1;
        if ( v71 + 1 >= v58 )
        {
          v12[4] = 0;
LABEL_118:
          v19 = v68;
          v12[3] = v65 - 1;
LABEL_119:
          v24 = v19 + v4[7];
          goto LABEL_120;
        }
      }
      else
      {
LABEL_82:
        v65 = v12[7];
        v77[4 * v65] = 0;
        v47 = (const char *)(v18 + 38);
        v63 = tdr_iostream_write(v66, "\n%s[%s]", v77, v47);
        v77[4 * v65] = 32;
        v48 = v75;
        v12[23] = v64;
        v12[26] = v62;
        v12[27] = v67;
        v12[33] = v48;
        v49 = v64[26];
        if ( v49 <= 0 )
        {
          v51 = v72;
        }
        else
        {
          v50 = &v48[v64[25]];
          if ( v69 - v50 < v49 )
            goto LABEL_125;
          if ( v49 == 4 || v49 == 8 )
          {
            v51 = *(_DWORD *)v50;
          }
          else if ( v49 == 2 )
          {
            v51 = *(unsigned __int16 *)v50;
          }
          else
          {
            v51 = *(unsigned __int8 *)v50;
          }
          if ( v51 > v72 )
            v51 = v72;
        }
        if ( v63 < 0 )
          goto LABEL_127;
        v12[31] = v51;
        v12[30] = v65 + 1;
        ++v70;
        v12[35] = v47;
        v12[37] = 1;
        v12 += 23;
        v4 = v64;
      }
    }
    if ( v34 == 15 )
    {
      if ( v69 >= &v75[v18[5] * v62] )
      {
        v64 = nullptr;
        while ( 1 )
        {
          v67 = 4 * v12[7];
          v77[v67] = 0;
          tdr_iostream_write(v66, "\n%s%s=", v77, (const char *)v18 + 152);
          v53 = tdr_ioprintf_basedtype_i(v66, v73, v18, &v75, (int)v69);
          v63 = v53;
          v77[v67] = 32;
          if ( v53 < 0 )
            goto LABEL_127;
          v64 = (_DWORD *)((char *)v64 + 1);
          if ( (int)v64 >= v62 )
            goto LABEL_115;
        }
      }
    }
    else
    {
      if ( v34 >= 15 && (unsigned int)(v34 - 21) <= 1 )
      {
        v64 = nullptr;
        while ( 1 )
        {
          v67 = 4 * v12[7];
          v77[v67] = 0;
          tdr_iostream_write(v66, "\n%s%s=", v77, (const char *)v18 + 152);
          v52 = tdr_ioprintf_basedtype_i(v66, v73, v18, &v75, (int)v69);
          v63 = v52;
          v77[v67] = 32;
          if ( v52 < 0 )
            break;
          v64 = (_DWORD *)((char *)v64 + 1);
          if ( (int)v64 >= v62 )
            goto LABEL_115;
        }
LABEL_127:
        tdr_iostream_write(v66, "\n");
        return v63;
      }
      if ( v69 >= &v75[v18[5] * v62] )
      {
        v54 = 4 * v12[7];
        v77[v54] = 0;
        v55 = (const char *)(v18 + 38);
        if ( v62 == 1 )
          v56 = tdr_iostream_write(v66, "\n%s%s=", v77, v55);
        else
          v56 = tdr_iostream_write(v66, "\n%s%s[%d]=", v77, v55, v62);
        v63 = v56;
        v77[v54] = 32;
        if ( v56 >= 0 )
        {
          v57 = 0;
          while ( 1 )
          {
            tdr_ioprintf_basedtype_i(v66, v73, v18, &v75, (int)v69);
            v63 = tdr_iostream_write(v66, " ");
            if ( v63 < 0 )
              break;
            if ( ++v57 >= v62 )
              goto LABEL_115;
          }
        }
        goto LABEL_127;
      }
    }
LABEL_125:
    v60 = -2113862649;
LABEL_126:
    v63 = v60;
    goto LABEL_127;
  }
  return v63;
}


//======================================================================
// sub_3371F0
// address: 0x003371F0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3371F0(int result, int a2, int a3)
{
  int v3; // r3
  char v4; // r4

  v3 = 0;
  if ( result != a2 )
  {
    while ( v3 != a3 )
    {
      v4 = *(_BYTE *)(result + v3);
      *(_BYTE *)(result + v3) = *(_BYTE *)(a2 + v3);
      *(_BYTE *)(a2 + v3++) = v4;
    }
  }
  return result;
}


//======================================================================
// sub_3374E0
// address: 0x003374E0   size: 0x2C (44 bytes)
//======================================================================
bool __fastcall sub_3374E0(unsigned __int8 *a1)
{
  int v1; // r3

  v1 = 0;
  if ( (unsigned __int16)(((a1[1] << 8) | *a1) + 9999) <= 0x4E1Eu && a1[2] <= 0xCu )
    return a1[3] <= 0x1Fu;
  return v1;
}


//======================================================================
// sub_337514
// address: 0x00337514   size: 0x30 (48 bytes)
//======================================================================
bool __fastcall sub_337514(unsigned __int8 *a1)
{
  _BOOL4 v2; // r0
  int v3; // r3

  v2 = sub_3374E0(a1);
  v3 = 0;
  if ( v2 && (__int16)((a1[5] << 8) | a1[4]) <= 23 && a1[6] <= 0x3Bu )
    return a1[7] <= 0x3Bu;
  return v3;
}


//======================================================================
// sub_3379A8
// address: 0x003379A8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3379A8(int result, char *a2, unsigned int a3)
{
  char *i; // r3
  int v4; // r4

  for ( i = a2; i - a2 < a3; i += 4 )
  {
    *(_WORD *)result = *(_DWORD *)i;
    *(_BYTE *)(result + 2) = *((_WORD *)i + 1);
    v4 = *(_DWORD *)i;
    *(_BYTE *)(result + 3) = HIBYTE(v4);
    result += 4;
  }
  return result;
}


//======================================================================
// sub_3379CC
// address: 0x003379CC   size: 0x768 (1896 bytes)
//======================================================================
int __fastcall sub_3379CC(int *a1, unsigned __int8 *a2)
{
  int i; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r5
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r5
  int v15; // r0
  int v16; // r4
  int v17; // r2
  int v18; // r3
  int v19; // r0
  int v20; // r7
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  int v28; // r0
  int v29; // r1
  int v30; // r2
  int v31; // r3
  int v32; // r0
  int v33; // r1
  int v34; // r2
  int v35; // r3
  int v36; // r0
  int v37; // r1
  int v38; // r12
  int v39; // r1
  int v40; // r2
  int v41; // r0
  int v42; // r3
  int v43; // r1
  int v44; // r2
  int v45; // r12
  int v46; // r2
  int v47; // r3
  int v48; // r0
  int v49; // r1
  int v50; // r2
  int v51; // r3
  int v52; // r6
  int v53; // r3
  int v54; // r0
  int v55; // r2
  int v56; // r1
  int v57; // r3
  int v58; // r0
  int v59; // r2
  int v60; // r1
  int v61; // r3
  int v62; // r0
  int v63; // r2
  int v64; // r1
  int v65; // r3
  int v66; // r12
  int v67; // r3
  int v68; // r2
  int v69; // r1
  int v70; // r0
  int v71; // r3
  int v72; // r4
  int v75; // [sp+8h] [bp-94h]
  int v76; // [sp+Ch] [bp-90h]
  int v77; // [sp+50h] [bp-4Ch]
  int v78; // [sp+54h] [bp-48h]
  int v79; // [sp+58h] [bp-44h] BYREF
  int v80; // [sp+5Ch] [bp-40h]
  int v81; // [sp+60h] [bp-3Ch]
  int v82; // [sp+64h] [bp-38h]
  int v83; // [sp+68h] [bp-34h]
  int v84; // [sp+6Ch] [bp-30h]
  int v85; // [sp+70h] [bp-2Ch]
  int v86; // [sp+74h] [bp-28h]
  int v87; // [sp+78h] [bp-24h]
  int v88; // [sp+7Ch] [bp-20h]
  int v89; // [sp+80h] [bp-1Ch]
  int v90; // [sp+84h] [bp-18h]
  int v91; // [sp+88h] [bp-14h]
  int v92; // [sp+8Ch] [bp-10h]
  int v93; // [sp+90h] [bp-Ch]
  int v94; // [sp+94h] [bp-8h]

  v75 = a1[1];
  v78 = *a1;
  v76 = a1[2];
  v77 = a1[3];
  for ( i = 0; i != 64; i += 4 )
  {
    *(int *)((char *)&v79 + i) = (a2[3] << 24) | (a2[1] << 8) | (a2[2] << 16) | *a2;
    a2 += 4;
  }
  v3 = __ROR4__(v79 - 680876936 + v78 + (v77 & ~v75 | v75 & v76), 25) + v75;
  v4 = __ROR4__(v80 - 389564586 + v77 + (v75 & v3 | v76 & ~v3), 20) + v3;
  v5 = __ROR4__(v81 + 606105819 + v76 + (v3 & v4 | v75 & ~v4), 15) + v4;
  v6 = __ROR4__(v82 - 1044525330 + v75 + (v4 & v5 | v3 & ~v5), 10) + v5;
  v7 = __ROR4__(v3 + v83 - 176418897 + (v5 & v6 | v4 & ~v6), 25) + v6;
  v8 = __ROR4__(v4 + v84 + 1200080426 + (v6 & v7 | v5 & ~v7), 20) + v7;
  v9 = __ROR4__(v5 + v85 - 1473231341 + (v7 & v8 | v6 & ~v8), 15) + v8;
  v10 = __ROR4__(v6 + v86 - 45705983 + (v8 & v9 | v7 & ~v9), 10) + v9;
  v11 = __ROR4__(v7 + v87 + 1770035416 + (v9 & v10 | v8 & ~v10), 25) + v10;
  v12 = __ROR4__(v8 + v88 - 1958414417 + (v10 & v11 | v9 & ~v11), 20) + v11;
  v13 = __ROR4__(v9 + v89 - 42063 + (v11 & v12 | v10 & ~v12), 15) + v12;
  v14 = __ROR4__(v10 + v90 - 1990404162 + (v12 & v13 | v11 & ~v13), 10) + v13;
  v15 = __ROR4__(v11 + v91 + 1804603682 + (v13 & v14 | v12 & ~v14), 25) + v14;
  v16 = __ROR4__(v92 - 40341101 + v12 + (v14 & v15 | v13 & ~v15), 20) + v15;
  v17 = __ROR4__(v13 + v93 - 1502002290 + (v15 & v16 | v14 & ~v16), 15) + v16;
  v18 = __ROR4__(v14 + v94 + 1236535329 + (v16 & v17 | v15 & ~v17), 10) + v17;
  v19 = __ROR4__(v15 + v80 - 165796510 + (~v16 & v17 | v16 & v18), 27);
  v20 = v19 + v18;
  v21 = __ROR4__(v85 - 1069501632 + v16 + (~v17 & v18 | v17 & (v19 + v18)), 23) + v19 + v18;
  v22 = __ROR4__(v90 + 643717713 + v17 + ((v19 + v18) & ~v18 | v18 & v21), 18) + v21;
  v23 = __ROR4__(v79 - 373897302 + v18 + (v21 & ~(v19 + v18) | (v19 + v18) & v22), 12) + v22;
  v24 = __ROR4__(v20 + v84 - 701558691 + (v22 & ~v21 | v21 & v23), 27) + v23;
  v25 = __ROR4__(v21 + v89 + 38016083 + (v23 & ~v22 | v22 & v24), 23) + v24;
  v26 = __ROR4__(v22 + v94 - 660478335 + (v24 & ~v23 | v23 & v25), 18) + v25;
  v27 = __ROR4__(v23 + v83 - 405537848 + (v25 & ~v24 | v24 & v26), 12) + v26;
  v28 = __ROR4__(v24 + v88 + 568446438 + (v26 & ~v25 | v25 & v27), 27) + v27;
  v29 = __ROR4__(v25 + v93 - 1019803690 + (v27 & ~v26 | v26 & v28), 23) + v28;
  v30 = __ROR4__(v26 + v82 - 187363961 + (v28 & ~v27 | v27 & v29), 18) + v29;
  v31 = __ROR4__(v27 + v87 + 1163531501 + (v29 & ~v28 | v28 & v30), 12) + v30;
  v32 = __ROR4__(v28 + v92 - 1444681467 + (v30 & ~v29 | v29 & v31), 27) + v31;
  v33 = __ROR4__(v29 + v81 - 51403784 + (v31 & ~v30 | v30 & v32), 23) + v32;
  v34 = __ROR4__(v30 + v86 + 1735328473 + (v32 & ~v31 | v31 & v33), 18) + v33;
  v35 = __ROR4__(v91 - 1926607734 + v31 + (v33 & ~v32 | v32 & v34), 12) + v34;
  v36 = __ROR4__(v84 - 378558 + v32 + (v34 ^ v33 ^ v35), 28) + v35;
  v37 = __ROR4__(v87 - 2022574463 + v33 + (v35 ^ v34 ^ v36), 21);
  v38 = v37 + v36;
  v39 = __ROR4__(v90 + 1839030562 + v34 + (v36 ^ v35 ^ (v37 + v36)), 16) + v37 + v36;
  v40 = __ROR4__(v93 - 35309556 + v35 + (v38 ^ v36 ^ v39), 9) + v39;
  v41 = __ROR4__(v80 - 1530992060 + v36 + (v38 ^ v39 ^ v40), 28) + v40;
  v42 = __ROR4__((v40 ^ v39 ^ v41) + v38 + v83 + 1272893353, 21) + v41;
  v43 = __ROR4__((v41 ^ v40 ^ v42) + v86 - 155497632 + v39, 16) + v42;
  v44 = __ROR4__((v42 ^ v41 ^ v43) + v89 - 1094730640 + v40, 9);
  v45 = v44 + v43;
  v46 = __ROR4__(v92 + 681279174 + v41 + (v43 ^ v42 ^ (v44 + v43)), 28) + v44 + v43;
  v47 = __ROR4__(v79 - 358537222 + v42 + (v45 ^ v43 ^ v46), 21) + v46;
  v48 = __ROR4__(v82 - 722521979 + v43 + (v45 ^ v46 ^ v47), 16) + v47;
  v49 = __ROR4__((v47 ^ v46 ^ v48) + v45 + v85 + 76029189, 9) + v48;
  v50 = __ROR4__((v48 ^ v47 ^ v49) + v88 - 640364487 + v46, 28) + v49;
  v51 = __ROR4__(v47 + v91 - 421815835 + (v49 ^ v48 ^ v50), 21);
  v52 = v51 + v50;
  v53 = __ROR4__(v48 + v94 + 530742520 + (v50 ^ v49 ^ (v51 + v50)), 16) + v51 + v50;
  v54 = __ROR4__(v81 - 995338651 + v49 + (v52 ^ v50 ^ v53), 9) + v53;
  v55 = __ROR4__(v79 - 198630844 + v50 + ((~v52 | v54) ^ v53), 26) + v54;
  v56 = __ROR4__(v86 + 1126891415 + v52 + ((~v53 | v55) ^ v54), 22) + v55;
  v57 = __ROR4__(v93 - 1416354905 + v53 + ((~v54 | v56) ^ v55), 17) + v56;
  v58 = __ROR4__(v84 - 57434055 + v54 + ((~v55 | v57) ^ v56), 11) + v57;
  v59 = __ROR4__(((~v56 | v58) ^ v57) + v91 + 1700485571 + v55, 26) + v58;
  v60 = __ROR4__(((~v57 | v59) ^ v58) + v82 - 1894986606 + v56, 22) + v59;
  v61 = __ROR4__(((~v58 | v60) ^ v59) + v89 - 1051523 + v57, 17) + v60;
  v62 = __ROR4__(((~v59 | v61) ^ v60) + v80 - 2054922799 + v58, 11) + v61;
  v63 = __ROR4__(((~v60 | v62) ^ v61) + v87 + 1873313359 + v59, 26) + v62;
  v64 = __ROR4__(((~v61 | v63) ^ v62) + v94 - 30611744 + v60, 22) + v63;
  v65 = __ROR4__(((~v62 | v64) ^ v63) + v85 - 1560198380 + v61, 17);
  v66 = v65 + v64;
  v67 = __ROR4__(v92 + 1309151649 + v62 + ((~v63 | (v65 + v64)) ^ v64), 11) + v65 + v64;
  v68 = __ROR4__(v83 - 145523070 + v63 + ((~v64 | v67) ^ v66), 26) + v67;
  v69 = __ROR4__(v90 - 1120210379 + v64 + ((~v66 | v68) ^ v67), 22) + v68;
  v70 = __ROR4__(v81 + 718787259 + v66 + ((~v67 | v69) ^ v68), 17) + v69;
  v71 = v88 - 343485551 + v67 + ((~v68 | v70) ^ v69);
  *a1 = v68 + v78;
  v72 = v70 + v75;
  a1[2] = v70 + v76;
  a1[1] = v72 + __ROR4__(v71, 11);
  a1[3] = v69 + v77;
  return v77;
}


//======================================================================
// sub_3381A0
// address: 0x003381A0   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_3381A0(int result, int a2, unsigned int a3)
{
  int v4; // r2
  unsigned int v6; // r3
  unsigned int v7; // r2
  int *v8; // r4
  unsigned int v9; // r3
  unsigned int v10; // r5
  int v11; // r2
  unsigned int v12; // r3
  char *v13; // r4
  int v14; // r7
  int v15; // r3
  unsigned int v16; // r5

  v4 = *(_DWORD *)(result + 16);
  v6 = v4 << 23;
  v7 = 8 * a3 + v4;
  v8 = (int *)result;
  v9 = v6 >> 26;
  *(_DWORD *)(result + 16) = v7;
  if ( v7 < 8 * a3 )
    ++*(_DWORD *)(result + 20);
  *(_DWORD *)(result + 20) += a3 >> 29;
  v10 = 64 - v9;
  if ( a3 < 64 - v9 )
  {
    v10 = 0;
  }
  else
  {
    v11 = result + v9 + 24;
    v12 = 0;
    do
    {
      *(_BYTE *)(v11 + v12) = *(_BYTE *)(a2 + v12);
      ++v12;
    }
    while ( v12 < v10 );
    result = sub_3379CC((int *)result, (unsigned __int8 *)(result + 24));
    while ( v10 + 63 < a3 )
    {
      result = sub_3379CC(v8, (unsigned __int8 *)(a2 + v10));
      v10 += 64;
    }
    v9 = 0;
  }
  v13 = (char *)v8 + v9 + 24;
  v14 = a2 + v10;
  v15 = 0;
  v16 = a3 - v10;
  while ( v15 != v16 )
  {
    v13[v15] = *(_BYTE *)(v14 + v15);
    ++v15;
  }
  return result;
}


//======================================================================
// sub_338EE0
// address: 0x00338EE0   size: 0xA (10 bytes)
//======================================================================
int sub_338EE0()
{
  return j_bsd_signal();
}


//======================================================================
// sub_339352
// address: 0x00339352   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_339352(int a1, int a2)
{
  int v2; // r4
  int v3; // r2
  _DWORD *v4; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 136);
  v3 = a2 + 8;
  v4 = (_DWORD *)(a2 + 136);
  if ( v2 > *(_DWORD *)(a1 + 132) )
    return -((*(int *)(v3 + 124) >> 31) + (*(_DWORD *)(v3 + 124) >= *v4) + (*v4 >> 31));
  result = 1;
  if ( *v4 <= *(_DWORD *)(v3 + 124) )
    return v2 - *v4;
  return result;
}


//======================================================================
// sub_339386
// address: 0x00339386   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_339386(_DWORD *a1, _DWORD *a2)
{
  return *a1 - *a2;
}


//======================================================================
// sub_33938E
// address: 0x0033938E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_33938E(const char *a1, const char *a2)
{
  return j_strcmp(a1, a2);
}


//======================================================================
// sub_339398
// address: 0x00339398   size: 0x3B0 (944 bytes)
//======================================================================
int __fastcall sub_339398(_DWORD *a1, int a2, FILE *a3)
{
  int meta_specail_attribute_i; // r4
  int v5; // r0
  int v6; // r1
  int v7; // r6
  int v8; // r0
  int v9; // r5
  const char *v10; // r0
  const char *v11; // r0
  int v12; // r0
  const char *v13; // r0
  int v14; // r0
  int v15; // r1
  int v16; // r6
  int v17; // r0
  int v18; // r5
  const char *v19; // r0
  int v20; // r0
  const char *v21; // r0
  int v22; // r0
  char *v23; // r1
  int v24; // r2
  int i; // r4
  char *v26; // r0
  char *v27; // r5
  int v28; // r12
  int v29; // r6
  int v30; // r3
  char *v31; // r3
  signed int j; // r4
  signed int v33; // r1
  char *v36; // [sp+Ch] [bp-38h]
  char *v37; // [sp+Ch] [bp-38h]
  char *v38; // [sp+Ch] [bp-38h]
  char *v39; // [sp+Ch] [bp-38h]
  int meta_by_name_i; // [sp+10h] [bp-34h]
  int v41; // [sp+18h] [bp-2Ch] BYREF
  char v42[32]; // [sp+1Ch] [bp-28h] BYREF

  meta_specail_attribute_i = a1[2];
  if ( meta_specail_attribute_i == 0 )
  {
    v5 = scew_tree_root(a2);
    v6 = 0;
    v7 = v5;
    while ( 1 )
    {
      v8 = scew_element_next(v5, v6);
      v9 = v8;
      if ( v8 == 0 )
        break;
      v10 = (const char *)scew_element_name(v8);
      if ( j_strcasecmp(v10, "macros") == 0 )
      {
        meta_specail_attribute_i = tdr_add_macros_i(a1, v9, a3);
        if ( meta_specail_attribute_i < 0 )
          return meta_specail_attribute_i;
      }
      v5 = v7;
      v6 = v9;
    }
    while ( 1 )
    {
      v12 = scew_element_next(v7, v9);
      v9 = v12;
      if ( v12 == 0 )
        break;
      v11 = (const char *)scew_element_name(v12);
      if ( j_strcasecmp(v11, "type") == 0 )
      {
        meta_specail_attribute_i = tdr_add_meta_base_i(a1, v9, v7, a3);
        if ( meta_specail_attribute_i < 0 )
          return meta_specail_attribute_i;
      }
    }
    while ( 1 )
    {
      do
      {
        v9 = scew_element_next(v7, v9);
        if ( v9 == 0 )
          goto LABEL_48;
        j_memset(v42, 0, sizeof(v42));
        v13 = (const char *)scew_element_name(v9);
      }
      while ( j_strcasecmp(v13, "type") != 0 );
      j_strncpy(v42, (const char *)&unk_3FB8EA, 0x20u);
      if ( tdr_get_name_attribute_i(v42, 32, v9) != 0 )
        break;
      meta_by_name_i = tdr_get_meta_by_name_i((int)a1, v42);
      if ( meta_by_name_i == 0 )
      {
        j_fprintf(a3, aError_3, v42);
        return -2113862631;
      }
      meta_specail_attribute_i = tdr_add_meta_entries_i(meta_by_name_i, v9, a3);
      if ( meta_specail_attribute_i >= 0 )
      {
        meta_specail_attribute_i = tdr_get_meta_specail_attribute_i(meta_by_name_i, v9, a3);
        if ( meta_specail_attribute_i >= 0 )
        {
          meta_specail_attribute_i = tdr_check_meta_i(meta_by_name_i, a3);
          if ( meta_specail_attribute_i >= 0 )
            continue;
        }
      }
      return meta_specail_attribute_i;
    }
LABEL_40:
    j_fputs(aError_4, a3);
    return -2113862631;
  }
  meta_specail_attribute_i = 0;
  v41 = 0;
  v14 = scew_tree_root(a2);
  v15 = 0;
  v16 = v14;
  while ( 1 )
  {
    v17 = scew_element_next(v14, v15);
    v18 = v17;
    if ( v17 == 0 )
      break;
    v19 = (const char *)scew_element_name(v17);
    if ( j_strcasecmp(v19, "macro") == 0 )
    {
      v20 = tdr_add_macro_i(a1, v18, a3, &v41);
    }
    else
    {
      v21 = (const char *)scew_element_name(v18);
      if ( j_strcasecmp(v21, "macrosgroup") != 0 )
        goto LABEL_29;
      v20 = tdr_add_macrosgroup_i(a1, v18, a3);
    }
    meta_specail_attribute_i = v20;
    if ( v20 < 0 )
      return meta_specail_attribute_i;
LABEL_29:
    v14 = v16;
    v15 = v18;
  }
  while ( 1 )
  {
    v22 = scew_element_next(v16, v18);
    v18 = v22;
    if ( v22 == 0 )
      break;
    v36 = (char *)scew_element_name(v22);
    if ( j_strcmp(v36, "struct") == 0 || j_strcmp(v36, "union") == 0 )
    {
      meta_specail_attribute_i = tdr_add_meta_base_i(a1, v18, v16, a3);
      if ( meta_specail_attribute_i < 0 )
        return meta_specail_attribute_i;
    }
  }
  while ( 1 )
  {
    v18 = scew_element_next(v16, v18);
    if ( v18 == 0 )
      break;
    j_memset(v42, 0, sizeof(v42));
    v37 = (char *)scew_element_name(v18);
    if ( j_strcasecmp(v37, "struct") == 0 || j_strcasecmp(v37, "union") == 0 )
    {
      j_strncpy(v42, (const char *)&unk_3FB8EA, 0x20u);
      if ( tdr_get_name_attribute_i(v42, 32, v18) != 0 )
        goto LABEL_40;
      v38 = (char *)tdr_get_meta_by_name_i((int)a1, v42);
      if ( v38 == nullptr )
      {
        j_fprintf(a3, aError_3, v42);
        return -2113862631;
      }
      meta_specail_attribute_i = tdr_add_meta_entries_i(v38, v18, a3);
      if ( meta_specail_attribute_i < 0 )
        return meta_specail_attribute_i;
      meta_specail_attribute_i = tdr_get_meta_specail_attribute_i(v38, v18, a3);
      if ( meta_specail_attribute_i < 0 )
        return meta_specail_attribute_i;
      meta_specail_attribute_i = tdr_check_meta_i(v38, a3);
      if ( meta_specail_attribute_i < 0 )
        return meta_specail_attribute_i;
    }
  }
LABEL_48:
  if ( meta_specail_attribute_i >= 0 )
  {
    v23 = nullptr;
    v24 = 0;
    for ( i = 0; i < a1[10]; ++i )
    {
      v39 = nullptr;
      v26 = (char *)a1 + *(_DWORD *)((char *)&a1[2 * i + 42] + a1[21]) + 168;
      v27 = v26;
      v28 = *((_DWORD *)v26 + 11);
      while ( (int)v39 < v28 )
      {
        v29 = *((_DWORD *)v27 + 82);
        if ( v29 == -1 )
          v30 = *((_DWORD *)v27 + 51);
        else
          v30 = *(_DWORD *)((char *)a1 + v29 + 180);
        if ( *((_DWORD *)v26 + 3) < v30 )
          *((_DWORD *)v26 + 3) = v30;
        if ( v24 < v30 )
          v23 = v26;
        else
          v30 = v24;
        v27 += 208;
        ++v39;
        v24 = v30;
      }
    }
    if ( (int)a1[2] <= 0 )
    {
      a1[17] = v24;
    }
    else if ( a1[17] < v24 )
    {
      j_fprintf(a3, aError_2, v23 + 128, *((_DWORD *)v23 + 3), a1[17]);
      return -2113862568;
    }
    for ( j = 0; ; ++j )
    {
      v33 = a1[10];
      if ( j >= v33 )
        break;
      v31 = (char *)a1 + *(_DWORD *)((char *)&a1[2 * j + 42] + a1[21]) + 168;
      if ( *((_DWORD *)v31 + 4) == 0 )
        tdr_qsort((int)(v31 + 200), *((_DWORD *)v31 + 11), 0xD0u, (int (__fastcall *)(unsigned int, int))sub_339352);
    }
    tdr_qsort((int)a1 + a1[19] + 168, v33, 8u, (int (__fastcall *)(unsigned int, int))sub_339386);
    tdr_qsort((int)a1 + a1[20] + 168, a1[10], 0x28u, (int (__fastcall *)(unsigned int, int))sub_33938E);
    return 0;
  }
  return meta_specail_attribute_i;
}


//======================================================================
// sub_339754
// address: 0x00339754   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_339754(int a1, int a2)
{
  int result; // r0
  int v5; // r3
  int v6; // r3
  int v7; // r2

  result = tdr_iostream_write(a2, "<?xml version=\"1.0\" encoding=\"GBK\" standalone=\"yes\" ?>\n");
  if ( result >= 0 )
  {
    result = tdr_iostream_write(a2, "<%s", "metalib");
    if ( result >= 0 )
    {
      v5 = *(_DWORD *)(a1 + 8);
      if ( v5 == 0 )
        v5 = 1;
      result = tdr_iostream_write(a2, " %s=\"%d\"", "tagsetversion", v5);
      if ( result >= 0
        && (*(_BYTE *)(a1 + 136) == 0
         || (result = tdr_iostream_write(a2, " %s=\"%s\"", "name", (const char *)(a1 + 136))) >= 0) )
      {
        result = tdr_iostream_write(a2, " %s=\"%d\"", "version", *(_DWORD *)(a1 + 68));
        if ( result >= 0 )
        {
          v6 = *(_DWORD *)(a1 + 4);
          v7 = v6 + 1;
          if ( v6 == -1 )
            return tdr_iostream_write(a2, " >\n", v7);
          result = tdr_iostream_write(a2, " %s=\"%d\"", "id", v6);
          if ( result >= 0 )
            return tdr_iostream_write(a2, " >\n", v7);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_33981C
// address: 0x0033981C   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_33981C(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r3

  result = tdr_iostream_write(a3, "\t<%s", "macro");
  if ( result >= 0 )
  {
    result = tdr_iostream_write(a3, " %s=\"%s\"", "name", (const char *)a2);
    if ( result >= 0 )
    {
      result = tdr_iostream_write(a3, " %s=\"%d\"", "value", *(_DWORD *)(a2 + 64));
      if ( result >= 0 )
      {
        v7 = *(_DWORD *)(a2 + 68);
        if ( v7 == -1 )
          return tdr_iostream_write(a3, " />\n", "value");
        result = tdr_iostream_write(a3, " %s=\"%s\"", "desc", (const char *)(a1 + v7 + 168));
        if ( result >= 0 )
          return tdr_iostream_write(a3, " />\n", "value");
      }
    }
  }
  return result;
}


//======================================================================
// sub_3398B0
// address: 0x003398B0   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_3398B0(int a1, int a2)
{
  int v2; // r6
  int v5; // r7
  int v6; // r3
  int v7; // r7
  int result; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r3

  v2 = a1 - *(_DWORD *)(a1 + 48) - 168;
  v5 = *(_DWORD *)(a1 - *(_DWORD *)(a1 + 48) - 96);
  if ( *(_BYTE *)(a1 + 128) == 0
    || (result = tdr_iostream_write(a2, " %s=\"%s\"", "name", (const char *)(a1 + 128))) >= 0 )
  {
    v6 = *(_DWORD *)(a1 + 64);
    v7 = v2 + v5 + 168;
    if ( v6 == -1 || v6 >= *(_DWORD *)(v2 + 48) )
      result = tdr_iostream_write(a2, " %s=\"%d\"", "version", *(_DWORD *)(a1 + 8));
    else
      result = tdr_iostream_write(a2, " %s=\"%s\"", "version", v7 + 72 * v6);
    if ( result >= 0 )
    {
      if ( (*(_DWORD *)a1 & 2) == 0
        || ((v9 = *(_DWORD *)(a1 + 56)) == -1 || v9 >= *(_DWORD *)(v2 + 48)
          ? (result = tdr_iostream_write(a2, " %s=\"%d\"", "id", *(_DWORD *)(a1 + 4)))
          : (result = tdr_iostream_write(a2, " %s=\"%s\"", "id", v7 + 72 * v9)),
            result >= 0) )
      {
        v10 = *(_DWORD *)(a1 + 164);
        if ( v10 == -1 || (result = tdr_iostream_write(a2, " %s=\"%s\"", "cname", (const char *)(v2 + v10 + 168))) >= 0 )
        {
          v11 = *(_DWORD *)(a1 + 160);
          if ( v11 != -1 )
            return tdr_iostream_write(a2, " %s=\"%s\"", "desc", (const char *)(v2 + v11 + 168));
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_3399C0
// address: 0x003399C0   size: 0x152 (338 bytes)
//======================================================================
int __fastcall sub_3399C0(const char *a1, int a2)
{
  int v2; // r5
  size_t v4; // r5
  _DWORD *v5; // r0
  _DWORD *v6; // r6
  _DWORD *v7; // r3
  _DWORD *v8; // r5
  int v9; // r12
  int i; // r3
  const char *v11; // r2
  char *v12; // r5
  int v13; // r0
  int j; // r2
  int v15; // r7
  int v16; // r5
  const char *v17; // r5
  int v18; // r3
  int v19; // r6
  int v20; // r7
  int result; // r0
  int k; // [sp+4h] [bp-18h]
  char *v24; // [sp+Ch] [bp-10h]
  const char *v25; // [sp+10h] [bp-Ch]
  const char *v26; // [sp+14h] [bp-8h]

  v2 = *((_DWORD *)a1 + 12);
  if ( v2 <= 0 )
    return 0;
  v4 = v2;
  v5 = j_malloc(v4 * 4);
  v6 = v5;
  if ( v5 == nullptr )
    return -2113862647;
  v7 = v5;
  v8 = &v5[v4];
  do
    *v7++ = 0;
  while ( v7 != v8 );
  v25 = &a1[*((_DWORD *)a1 + 27) + 168];
  v9 = *((_DWORD *)a1 + 14);
  for ( i = 0; i < v9; ++i )
  {
    v11 = &a1[*(_DWORD *)&v25[8 * i] + 168];
    v12 = (char *)&v11[*((_DWORD *)v11 + 4)];
    v13 = *(_DWORD *)v11;
    for ( j = 0; j < v13; ++j )
    {
      v15 = *(_DWORD *)&v12[4 * j];
      v6[v15] = 1;
    }
  }
  v16 = 0;
  result = 0;
  v26 = &a1[*((_DWORD *)a1 + 18) + 168];
  while ( v16 < *((_DWORD *)a1 + 12) )
  {
    if ( v6[v16] == 0 )
      result = sub_33981C((int)a1, (int)&v26[72 * v16], a2);
    if ( result < 0 )
      break;
    ++v16;
  }
  for ( k = 0; k < *((_DWORD *)a1 + 14); ++k )
  {
    v17 = &a1[*(_DWORD *)&v25[8 * k] + 168];
    if ( tdr_iostream_write(a2, "\t<%s", "macrosgroup") >= 0
      && tdr_iostream_write(a2, " %s=\"%s\"", "name", v17 + 20) >= 0 )
    {
      v18 = *((_DWORD *)v17 + 2);
      if ( v18 == -1 || tdr_iostream_write(a2, " %s=\"%s\"", "desc", &a1[v18 + 168]) >= 0 )
        tdr_iostream_write(a2, " >\n");
    }
    v19 = 0;
    v24 = (char *)&v17[*((_DWORD *)v17 + 4)];
    while ( v19 < *(_DWORD *)v17 )
    {
      v20 = (int)&v26[72 * *(_DWORD *)&v24[4 * v19]];
      tdr_iostream_write(a2, "\t");
      sub_33981C((int)a1, v20, a2);
      ++v19;
    }
    result = tdr_iostream_write(a2, "\t</%s>\n", "macrosgroup");
  }
  return result;
}


//======================================================================
// sub_339B3C
// address: 0x00339B3C   size: 0x852 (2130 bytes)
//======================================================================
int __fastcall sub_339B3C(int a1, int a2, int a3)
{
  int v4; // r6
  int v5; // r5
  int v6; // r4
  int v7; // r3
  int v8; // r3
  int v9; // r0
  char **v10; // r0
  __int16 v11; // r3
  int v12; // r3
  int v13; // r2
  int v14; // r0
  int v15; // r3
  int v16; // r2
  int v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r3
  int v21; // r0
  int v22; // r3
  int v23; // r3
  int v24; // r3
  int v25; // r0
  int v26; // r2
  struct in_addr *v27; // r3
  char *v28; // r3
  char *v29; // r3
  char *v30; // r3
  char *v31; // r3
  int v32; // r3
  int v33; // r0
  const char **v34; // r0
  char *v35; // r4
  int v37; // r3
  int v38; // r3
  int v39; // r3
  int v40; // r0
  int v41; // r4
  int v42; // r6
  int v43; // r6
  int v44; // r3
  int v45; // r3
  int v46; // r0
  int v47; // r3
  int v48; // r3
  int v49; // r2
  const char *v50; // r3
  const char *v51; // [sp+18h] [bp-42Ch]
  int v52; // [sp+18h] [bp-42Ch]
  int v53; // [sp+18h] [bp-42Ch]
  int v54; // [sp+18h] [bp-42Ch]
  int v55; // [sp+1Ch] [bp-428h]
  int v56; // [sp+1Ch] [bp-428h]
  int v57; // [sp+20h] [bp-424h]
  int v58; // [sp+20h] [bp-424h]
  int v61; // [sp+34h] [bp-410h] BYREF
  char s[4]; // [sp+38h] [bp-40Ch] BYREF
  char v63[1032]; // [sp+3Ch] [bp-408h] BYREF

  v55 = *(_DWORD *)(a1 + 48);
  v4 = tdr_iostream_write(a3, "\t\t<%s", "entry");
  if ( v4 < 0 )
    return v4;
  v4 = 0;
  v5 = a1 + 208 * a2 + 200;
  v6 = a1 + -168 - *(_DWORD *)(a1 + 48);
  v57 = *(_DWORD *)(v6 + 72);
  if ( *(_BYTE *)(v5 + 152) != 0 )
  {
    v4 = tdr_iostream_write(a3, " %s=\"%s\"", "name", (const char *)(v5 + 152));
    if ( v4 < 0 )
      return v4;
  }
  *(_DWORD *)s = 0;
  v7 = *(_DWORD *)(v5 + 128);
  if ( v7 != -1 )
  {
    v8 = v6 + v7 + 296;
LABEL_8:
    v51 = (const char *)v8;
    goto LABEL_11;
  }
  v9 = *(_DWORD *)(v5 + 56);
  if ( v9 == -1 || (v10 = tdr_idx_to_typeinfo(v9)) == nullptr )
  {
    v8 = 0;
    goto LABEL_8;
  }
  v51 = *v10;
LABEL_11:
  v11 = *(_WORD *)(v5 + 64);
  if ( (v11 & 2) != 0 )
  {
    j_snprintf(s, 4u, "%c", 42);
  }
  else if ( (v11 & 4) != 0 )
  {
    j_snprintf(s, 4u, "%c", 64);
  }
  if ( v51 != nullptr )
    v4 = tdr_iostream_write(a3, " %s=\"%s%s\"", "type", s, v51);
  if ( v4 >= 0 )
  {
    if ( (v52 = v6 + v57 + 168, (v12 = *(_DWORD *)(v5 + 32)) == 1)
      || v12 < 0
      || ((v13 = *(_DWORD *)(v5 + 52)) == -1 || v13 >= *(_DWORD *)(v6 + 48)
        ? (v14 = tdr_iostream_write(a3, " %s=\"%d\"", "count", v12))
        : (v14 = tdr_iostream_write(a3, " %s=\"%s\"", "count", v52 + 72 * v13)),
          v4 = v14,
          v14 >= 0) )
    {
      v15 = *(_DWORD *)(v5 + 4);
      if ( v15 != *(_DWORD *)(a1 + 8) )
      {
        v16 = *(_DWORD *)(v5 + 48);
        if ( v16 == -1 || v16 >= *(_DWORD *)(v6 + 48) )
        {
          if ( v15 == -1 )
            goto LABEL_32;
          v17 = tdr_iostream_write(a3, " %s=\"%d\"", "version", v15);
        }
        else
        {
          v17 = tdr_iostream_write(a3, " %s=\"%s\"", "version", v52 + 72 * v16);
        }
        v4 = v17;
        if ( v17 < 0 )
          return v4;
      }
LABEL_32:
      if ( (*(_WORD *)(v5 + 64) & 8) != 0 )
      {
        v18 = *(_DWORD *)(v5 + 44);
        if ( v18 == -1 || v18 >= *(_DWORD *)(v6 + 48) )
          v19 = tdr_iostream_write(a3, " %s=\"%d\"", "id", *(_DWORD *)v5);
        else
          v19 = tdr_iostream_write(a3, " %s=\"%s\"", "id", v52 + 72 * v18);
        v4 = v19;
        if ( v19 < 0 )
          return v4;
      }
      v20 = *(_DWORD *)(v5 + 60);
      if ( v20 == -1 || v20 >= *(_DWORD *)(v6 + 48) )
      {
        if ( *(int *)(v5 + 28) <= 0 )
          goto LABEL_44;
        v22 = *(_DWORD *)(v5 + 28) / (int)tdr_idx_to_typeinfo(*(_DWORD *)(v5 + 56))[6];
        v21 = tdr_iostream_write(a3, " %s=\"%d\"", "size", v22);
      }
      else
      {
        v21 = tdr_iostream_write(a3, " %s=\"%s\"", "size", v52 + 72 * v20);
      }
      v4 = v21;
      if ( v21 < 0 )
        return v4;
LABEL_44:
      v23 = *(_DWORD *)(v5 + 192);
      if ( v23 != -1 )
      {
        v4 = tdr_iostream_write(a3, " %s=\"%s\"", "cname", (const char *)(v6 + v23 + 168));
        if ( v4 < 0 )
          return v4;
      }
      v24 = *(_DWORD *)(v5 + 188);
      if ( v24 != -1 )
      {
        v4 = tdr_iostream_write(a3, " %s=\"%s\"", "desc", (const char *)(v6 + v24 + 168));
        if ( v4 < 0 )
          return v4;
      }
      if ( (*(_BYTE *)(v5 + 66) & 1) != 0 )
      {
        v4 = tdr_iostream_write(a3, " %s=\"%s\"", "unique", "true");
        if ( v4 < 0 )
          return v4;
      }
      if ( (*(_BYTE *)(v5 + 66) & 2) != 0 )
      {
        v25 = tdr_iostream_write(a3, " %s=\"%s\"", "notnull", "true");
        v4 = v25;
        if ( v25 < 0 )
          return v4;
      }
      v53 = *(_DWORD *)(v5 + 92);
      if ( v53 != -1 )
      {
        j_memset(v63, 0, 0x400u);
        v4 = tdr_hostoff_to_path_i(a1, a2, v53, v63, 1024);
        if ( v4 < 0 )
          return v4;
        v4 = tdr_iostream_write(a3, " %s=\"%s\"", "refer", v63);
        if ( v4 < 0 )
          return v4;
      }
      v54 = a1 + -168 - v55;
      v26 = *(_DWORD *)(v5 + 196);
      if ( v26 != -1 )
      {
        v27 = (struct in_addr *)(v54 + v26 + 168);
        switch ( *(_DWORD *)(v5 + 8) )
        {
          case 2:
          case 3:
            tdr_iostream_write(a3, " %s=\"%d\"", "defaultvalue", *(unsigned __int8 *)(v54 + v26 + 168));
            break;
          case 5:
            tdr_iostream_write(a3, " %s=\"%d\"", "defaultvalue", SLOWORD(v27->s_addr));
            break;
          case 6:
            tdr_iostream_write(a3, " %s=\"%d\"", "defaultvalue", LOWORD(v27->s_addr));
            break;
          case 7:
          case 9:
            tdr_iostream_write(a3, " %s=\"%d\"", "defaultvalue", v27->s_addr);
            break;
          case 8:
          case 0xA:
            tdr_iostream_write(a3, " %s=\"%u\"", "defaultvalue", v27->s_addr);
            break;
          case 0xB:
            tdr_iostream_write(a3, " %s=\"%lld\"", "defaultvalue", *(_QWORD *)&v27->s_addr);
            break;
          case 0xC:
            tdr_iostream_write(a3, " %s=\"%llu\"", "defaultvalue", *(_QWORD *)&v27->s_addr);
            break;
          case 0xD:
            v29 = tdr_tdrdate_to_str((unsigned __int8 *)(v54 + v26 + 168));
            tdr_iostream_write(a3, " %s=\"%s\"", "defaultvalue", v29);
            break;
          case 0xE:
            v30 = tdr_tdrtime_to_str((unsigned __int8 *)(v54 + v26 + 168));
            tdr_iostream_write(a3, " %s=\"%s\"", "defaultvalue", v30);
            break;
          case 0xF:
            v28 = tdr_tdrdatetime_to_str((unsigned __int8 *)(v54 + v26 + 168));
            tdr_iostream_write(a3, " %s=\"%s\"", "defaultvalue", v28);
            break;
          case 0x11:
            tdr_iostream_write(a3, " %s=\"%f\"", "defaultvalue", *(float *)&v27->s_addr);
            break;
          case 0x12:
            tdr_iostream_write(a3, " %s=\"%f\"", "defaultvalue", *(double *)&v27->s_addr);
            break;
          case 0x13:
            v31 = tdr_tdrip_to_ineta((struct in_addr)v27->s_addr);
            tdr_iostream_write(a3, " %s=\"%s\"", "defaultvalue", v31);
            break;
          case 0x14:
            v61 = 0;
            *(_DWORD *)s = 4;
            tdr_wcstochinesembs();
            tdr_iostream_write(a3, " %s=\"%s\"", "defaultvalue", &v61);
            break;
          case 0x15:
            tdr_iostream_write(a3, " %s=\"%s\"", "defaultvalue", v27);
            break;
          case 0x16:
            v32 = tdr_wcstochinesembs_i();
            if ( v32 != 0 )
              tdr_iostream_write(a3, " %s=\"%s\"", "defaultvalue", v32);
            else
              tdr_iostream_write(a3, " %s=\"%s\"", "defaultvalue", &unk_3FB8EA);
            break;
          default:
            break;
        }
      }
      if ( *(int *)(v5 + 80) > 0 )
      {
        v33 = *(_DWORD *)(v5 + 84);
        if ( v33 == -1 )
        {
          v56 = *(_DWORD *)(v5 + 72);
          if ( v56 == -1 )
            goto LABEL_91;
          v35 = v63;
          j_memset(v63, 0, 0x400u);
          v4 = tdr_netoff_to_path_i(a1, a2, v56, v63, 1024);
          if ( v4 < 0 )
            return v4;
        }
        else
        {
          v34 = (const char **)tdr_idx_to_typeinfo(v33);
          if ( v34 == nullptr )
            goto LABEL_91;
          v35 = (char *)*v34;
          if ( (unsigned int)(*(_DWORD *)(v5 + 8) - 21) <= 1 && j_strcasecmp(*v34, "int") == 0 )
            goto LABEL_91;
        }
        v4 = tdr_iostream_write(a3, " %s=\"%s\"", "sizeinfo", v35);
        if ( v4 < 0 )
          return v4;
      }
LABEL_91:
      v37 = *(_DWORD *)(v5 + 32);
      if ( v37 != 1 && v37 >= 0 )
      {
        v39 = *(unsigned __int8 *)(v5 + 67);
        if ( v39 == 1 )
        {
          v50 = "asc";
        }
        else
        {
          if ( v39 != 2 )
            goto LABEL_92;
          v50 = "desc";
        }
        v4 = tdr_iostream_write(a3, " %s=\"%s\"", "sortmethod", v50);
        if ( v4 < 0 )
          return v4;
      }
LABEL_92:
      v38 = *(_DWORD *)(v5 + 120);
      switch ( v38 )
      {
        case 0:
LABEL_106:
          v41 = a1 + -168 - *(_DWORD *)(a1 + 48);
          v58 = *(_DWORD *)(v41 + 72);
          if ( *(_DWORD *)(v5 + 8) != 0
            || (v42 = *(_DWORD *)(v5 + 108)) == -1
            || (j_memset(v63, 0, 0x400u), (v4 = tdr_hostoff_to_path_i(a1, a2, v42, v63, 1024)) >= 0)
            && (v4 = tdr_iostream_write(a3, " %s=\"%s\"", "select", v63)) >= 0 )
          {
            if ( (*(_WORD *)(v5 + 64) & 0x10) == 0 )
              goto LABEL_135;
            v43 = v41 + v58 + 168;
            v44 = *(_DWORD *)(v5 + 144);
            if ( v44 == -1 || v44 >= *(_DWORD *)(v41 + 48) )
              tdr_iostream_write(a3, " %s=\"%d\"", "minid", *(_DWORD *)(v5 + 136));
            else
              tdr_iostream_write(a3, " %s=\"%s\"", "minid", v43 + 72 * v44);
            v45 = *(_DWORD *)(v5 + 140);
            if ( v45 == -1 || v45 >= *(_DWORD *)(v41 + 48) )
              v46 = tdr_iostream_write(a3, " %s=\"%d\"", "maxid", *(_DWORD *)(v5 + 132));
            else
              v46 = tdr_iostream_write(a3, " %s=\"%s\"", "maxid", v43 + 72 * v45);
            v4 = v46;
            if ( v46 >= 0 )
            {
LABEL_135:
              if ( (*(_BYTE *)(v5 + 66) & 4) == 0
                || (v4 = tdr_iostream_write(a3, " %s=\"%s\"", "extendtotable", "true")) >= 0 )
              {
                v47 = *(_DWORD *)(v5 + 200);
                if ( (v47 == -1
                   || (v4 = tdr_iostream_write(a3, " %s=\"%s\"", "bindmacrosgroup", (const char *)(v54 + v47 + 188))) >= 0)
                  && ((*(_BYTE *)(v5 + 66) & 0x20) == 0
                   || (v4 = tdr_iostream_write(a3, " %s=\"%s\"", "autoincrement", "true")) >= 0) )
                {
                  v48 = *(_DWORD *)(v5 + 204);
                  v49 = v48 + 1;
                  if ( v48 == -1 )
                    return tdr_iostream_write(a3, " />\n", v49);
                  v4 = tdr_iostream_write(a3, " %s=\"%s\"", "customattr", (const char *)(v54 + v48 + 168));
                  if ( v4 >= 0 )
                    return tdr_iostream_write(a3, " />\n", v49);
                }
              }
            }
          }
          return v4;
        case 2:
          v40 = tdr_iostream_write(a3, " %s=\"%s\"", "io", "nooutput");
          break;
        case 3:
          v40 = tdr_iostream_write(a3, " %s=\"%s\"", "io", "noio");
          break;
        case 1:
          v40 = tdr_iostream_write(a3, " %s=\"%s\"", "io", "noinput");
          break;
        default:
          goto LABEL_106;
      }
      v4 = v40;
      if ( v40 < 0 )
        return v4;
      goto LABEL_106;
    }
  }
  return v4;
}


//======================================================================
// sub_33A418
// address: 0x0033A418   size: 0x3E8 (1000 bytes)
//======================================================================
int __fastcall sub_33A418(int a1, int a2)
{
  int v3; // r6
  int v4; // r6
  int v5; // r3
  int v6; // r0
  int v7; // r3
  int v8; // r3
  int v9; // r6
  char **v10; // r0
  int v11; // r0
  int v12; // r3
  int v13; // r3
  int i; // r5
  int v15; // r0
  int v16; // r3
  int v17; // r6
  int v18; // r3
  int result; // r0
  int j; // r5
  int v22; // [sp+18h] [bp-41Ch]
  int *v23; // [sp+18h] [bp-41Ch]
  int v24; // [sp+1Ch] [bp-418h]
  int v25; // [sp+20h] [bp-414h]
  char s[1032]; // [sp+2Ch] [bp-408h] BYREF

  v24 = a1 - *(_DWORD *)(a1 + 48) - 168;
  v3 = *(_DWORD *)(a1 - *(_DWORD *)(a1 + 48) - 96);
  if ( tdr_iostream_write(a2, "\t<%s", "struct") < 0 || sub_3398B0(a1, a2) < 0 )
    goto LABEL_61;
  v4 = v24 + v3 + 168;
  v5 = *(_DWORD *)(a1 + 36);
  v25 = v4;
  if ( v5 == -1 || v5 >= *(_DWORD *)(v24 + 48) )
  {
    v7 = *(_DWORD *)(a1 + 32);
    if ( v7 <= 0 )
      goto LABEL_7;
    v6 = tdr_iostream_write(a2, " %s=\"%d\"", "size", v7);
  }
  else
  {
    v6 = tdr_iostream_write(a2, " %s=\"%s\"", "size", v4 + 72 * v5);
  }
  if ( v6 < 0 )
    goto LABEL_61;
LABEL_7:
  v8 = *(_DWORD *)(a1 + 68);
  if ( v8 != 8 && v8 > 0 && tdr_iostream_write(a2, " %s=\"%d\"", "align", v8) < 0 )
    goto LABEL_61;
  v9 = *(_DWORD *)(a1 + 96);
  if ( v9 != -1 )
  {
    j_memset(s, 0, 0x400u);
    if ( tdr_netoff_to_path_i(a1, -1, v9, s, 1024) < 0
      || tdr_iostream_write(a2, " %s=\"%s\"", "versionindicator", s) < 0 )
    {
      goto LABEL_61;
    }
  }
  if ( *(int *)(a1 + 88) > 0 )
  {
    if ( *(_DWORD *)(a1 + 92) == -1 )
    {
      v22 = *(_DWORD *)(a1 + 80);
      if ( v22 == -1 )
        goto LABEL_27;
      j_memset(s, 0, 0x400u);
      if ( tdr_netoff_to_path_i(a1, -1, v22, s, 1024) < 0 )
        goto LABEL_61;
      v11 = tdr_iostream_write(a2, " %s=\"%s\"", "sizeinfo", s);
    }
    else
    {
      v10 = tdr_idx_to_typeinfo(*(_DWORD *)(a1 + 92));
      if ( v10 == nullptr )
        goto LABEL_27;
      v11 = tdr_iostream_write(a2, " %s=\"%s\"", "sizeinfo", *v10);
    }
    if ( v11 < 0 )
      goto LABEL_61;
  }
LABEL_27:
  if ( *(_DWORD *)(a1 + 116) != -1 )
  {
    j_memset(s, 0, 0x400u);
    if ( tdr_sortkeyinfo_to_path_i(v24, a1 + 112, (int)s, 0x400u) < 0
      || tdr_iostream_write(a2, " %s=\"%s\"", "sortkey", s) < 0 )
    {
      goto LABEL_61;
    }
  }
  if ( *(__int16 *)(a1 + 174) > 0 )
  {
    v12 = *(_DWORD *)(a1 + 192);
    if ( v12 != -1 && *(_DWORD *)(a1 + 196) == -1 )
    {
      v23 = (int *)(a1 + v12);
      j_memset(s, 0, 0x400u);
      tdr_hostoff_to_path_i(a1, -1, *v23, s, 1024);
      tdr_iostream_write(a2, " %s=\"%s", "primarykey", s);
      for ( i = 1; i < *(__int16 *)(a1 + 174); ++i )
      {
        tdr_hostoff_to_path_i(a1, -1, v23[2 * i], s, 1024);
        tdr_iostream_write(a2, ",%s", s);
      }
      if ( tdr_iostream_write(a2, "\"") < 0 )
        goto LABEL_61;
    }
  }
  v13 = *(_DWORD *)(a1 + 176);
  if ( v13 != -1 && v13 < *(_DWORD *)(v24 + 48) )
  {
    v15 = tdr_iostream_write(a2, " %s=\"%s\"", "splittablefactor", v25 + 72 * v13);
    goto LABEL_48;
  }
  v16 = *(_DWORD *)(a1 + 168);
  if ( v16 > 0 )
  {
    v15 = tdr_iostream_write(a2, " %s=\"%d\"", "splittablefactor", v16);
LABEL_48:
    if ( v15 < 0 )
      goto LABEL_61;
  }
  v17 = *(_DWORD *)(a1 + 184);
  if ( v17 == -1
    || *(int *)(a1 + 168) <= 0
    || (j_memset(s, 0, 0x400u), tdr_hostoff_to_path_i(a1, -1, v17, s, 1024) >= 0)
    && tdr_iostream_write(a2, " %s=\"%s\"", "splittablekey", s) >= 0 )
  {
    if ( *(_WORD *)(a1 + 172) != 1 || tdr_iostream_write(a2, " %s=\"%s\"", "splittablerule", "modulebyfactor") >= 0 )
    {
      v18 = *(_DWORD *)(a1 + 196);
      if ( (v18 == -1 || tdr_iostream_write(a2, " %s=\"%s\"", "dependonstruct", (const char *)(v24 + v18 + 296)) >= 0)
        && (*(_DWORD *)a1 & 0x40) != 0 )
      {
        tdr_iostream_write(a2, " %s=\"%s\"", "uniqueentryname", "false");
      }
    }
  }
LABEL_61:
  result = tdr_iostream_write(a2, " >\n");
  if ( result >= 0 )
  {
    for ( j = 0; j < *(_DWORD *)(a1 + 44); ++j )
    {
      result = sub_339B3C(a1, j, a2);
      if ( result < 0 )
        return result;
    }
    return tdr_iostream_write(a2, "\t</%s>\n\n", "struct");
  }
  return result;
}


//======================================================================
// sub_33A830
// address: 0x0033A830   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_33A830(int a1, int a2)
{
  int result; // r0
  int i; // r5

  result = tdr_iostream_write(a2, "\t<%s", "union");
  if ( result >= 0 )
  {
    result = sub_3398B0(a1, a2);
    if ( result >= 0 )
    {
      result = tdr_iostream_write(a2, " >\n");
      if ( result >= 0 )
      {
        for ( i = 0; i < *(_DWORD *)(a1 + 44); ++i )
        {
          result = sub_339B3C(a1, i, a2);
          if ( result < 0 )
            return result;
        }
        return tdr_iostream_write(a2, "\t</%s>\n\n", "union");
      }
    }
  }
  return result;
}


//======================================================================
// sub_33B40C
// address: 0x0033B40C   size: 0x24 (36 bytes)
//======================================================================
signed int __fastcall sub_33B40C(int a1)
{
  signed int result; // r0
  const char *v2; // r0

  result = scew_attribute_by_name(a1, "desc");
  if ( result != 0 )
  {
    v2 = (const char *)scew_attribute_value();
    result = j_strlen(v2) + 1;
    if ( result > 1024 )
      return 1024;
  }
  return result;
}


//======================================================================
// sub_33B434
// address: 0x0033B434   size: 0x24 (36 bytes)
//======================================================================
signed int __fastcall sub_33B434(int a1)
{
  signed int result; // r0
  const char *v2; // r0

  result = scew_attribute_by_name(a1, "cname");
  if ( result != 0 )
  {
    v2 = (const char *)scew_attribute_value();
    result = j_strlen(v2) + 1;
    if ( result > 512 )
      return 512;
  }
  return result;
}


//======================================================================
// sub_33BC24
// address: 0x0033BC24   size: 0x18C (396 bytes)
//======================================================================
int __fastcall sub_33BC24(int a1, int a2, int a3, FILE *a4)
{
  int v7; // r0
  char *v8; // r0
  int result; // r0
  char *v10; // r6
  int v11; // r0
  char **v12; // r0
  _DWORD *meta_by_name_i; // r0
  __int16 v14; // r2
  int v15; // [sp+10h] [bp-41Ch]
  int v16; // [sp+14h] [bp-418h]
  char v18[1032]; // [sp+24h] [bp-408h] BYREF

  j_memset(v18, 0, 0x400u);
  v16 = a2 - *(_DWORD *)(a2 + 48) - 168;
  v7 = scew_attribute_by_name(a3, "type");
  if ( v7 == 0 )
  {
    j_fprintf(a4, aError_30, a2 + 128, a1 + 152);
    return -2113862627;
  }
  v8 = (char *)scew_attribute_value(v7);
  tdr_normalize_string(v18, 1024, v8);
  if ( v18[0] == 0 )
  {
    j_fprintf(a4, aError_31, a2 + 128, a1 + 152);
    return -2113862627;
  }
  if ( *(int *)(v16 + 8) <= 0 )
  {
    v10 = v18;
  }
  else if ( v18[0] == 42 )
  {
    *(_WORD *)(a1 + 64) |= 2u;
    v10 = &v18[1];
  }
  else
  {
    v10 = v18;
    if ( v18[0] == 64 )
    {
      v10 = &v18[1];
      *(_WORD *)(a1 + 64) |= 4u;
    }
  }
  v11 = tdr_typename_to_idx(v10);
  v15 = v11;
  if ( v11 != -1 )
  {
    v12 = tdr_idx_to_typeinfo(v11);
    if ( (int)v12[5] > 1 )
    {
      *(_DWORD *)(a1 + 56) = v15;
      *(_DWORD *)(a1 + 8) = v12[5];
      *(_DWORD *)(a1 + 20) = v12[6];
      *(_DWORD *)(a1 + 24) = v12[6];
      goto LABEL_21;
    }
    j_fprintf(a4, aError_32, a2 + 128, a1 + 152, v10);
    return -2113862626;
  }
  meta_by_name_i = (_DWORD *)tdr_get_meta_by_name_i(v16, v10);
  if ( meta_by_name_i == nullptr || (int)meta_by_name_i[6] <= 0 && (*(_WORD *)(a1 + 64) & 6) == 0 )
  {
    j_fprintf(a4, aError_33, a2 + 128, a1 + 152, v18);
    return -2113862626;
  }
  *(_DWORD *)(a1 + 128) = meta_by_name_i[12];
  *(_DWORD *)(a1 + 56) = meta_by_name_i[15];
  *(_DWORD *)(a1 + 8) = meta_by_name_i[4];
  *(_DWORD *)(a1 + 24) = meta_by_name_i[6];
  *(_DWORD *)(a1 + 20) = meta_by_name_i[7];
LABEL_21:
  v14 = *(_WORD *)(a1 + 64);
  if ( (v14 & 2) != 0 )
  {
    *(_DWORD *)(a1 + 20) = 4;
    *(_DWORD *)(a1 + 24) = 0;
  }
  if ( (v14 & 4) != 0 )
    *(_DWORD *)(a1 + 20) = 4;
  result = 0;
  if ( *(_DWORD *)(a1 + 8) == 23 && (v14 & 2) == 0 )
  {
    j_fprintf(a4, aError_34, a2 + 128, a1 + 152, v18);
    return -2113862626;
  }
  return result;
}


//======================================================================
// sub_33BDDC
// address: 0x0033BDDC   size: 0x13C (316 bytes)
//======================================================================
int __fastcall sub_33BDDC(int a1, int a2, int a3, FILE *a4)
{
  int v7; // r0
  int v8; // r7
  int v9; // r2
  int v10; // r3
  int result; // r0
  char *v12; // r0
  char *v13; // r0
  int v15; // [sp+10h] [bp-124h]
  int v16; // [sp+14h] [bp-120h]
  int v17; // [sp+1Ch] [bp-118h] BYREF
  int v18; // [sp+20h] [bp-114h] BYREF
  int v19; // [sp+24h] [bp-110h] BYREF
  int v20; // [sp+28h] [bp-10Ch] BYREF
  char v21[256]; // [sp+2Ch] [bp-108h] BYREF

  v17 = 0;
  v18 = 0;
  v19 = -1;
  v20 = -1;
  j_memset(v21, 0, sizeof(v21));
  v15 = a2 - *(_DWORD *)(a2 + 48) - 168;
  v16 = scew_attribute_by_name(a3, "maxid");
  v7 = scew_attribute_by_name(a3, "minid");
  v8 = v7;
  if ( v16 == 0 )
  {
    if ( v7 == 0 )
      return v8;
  }
  else if ( v7 != 0 )
  {
    v12 = (char *)scew_attribute_value(v16);
    tdr_normalize_string(v21, 256, v12);
    if ( tdr_get_macro_int_i(&v17, &v19, v15, v21) < 0 )
    {
      j_fprintf(a4, aError_36, a2 + 128, a1 + 152, v21);
      return -2113862619;
    }
    v13 = (char *)scew_attribute_value(v8);
    tdr_normalize_string(v21, 256, v13);
    result = tdr_get_macro_int_i(&v18, &v20, v15, v21);
    if ( result != 0 )
    {
      j_fprintf(a4, aError_35, a2 + 128, a1 + 152, v21);
      return -2113862618;
    }
    v9 = v17;
    v10 = v18;
    if ( v17 < v18 )
    {
      j_fprintf(a4, aError_37, a2 + 128, a1 + 152);
      return -2113862617;
    }
    *(_WORD *)(a1 + 64) |= 0x10u;
    *(_DWORD *)(a1 + 132) = v9;
    *(_DWORD *)(a1 + 140) = v19;
    *(_DWORD *)(a1 + 136) = v10;
    *(_DWORD *)(a1 + 144) = v20;
    return result;
  }
  j_fprintf(a4, aError_37, a2 + 128, a1 + 152);
  return -2113862617;
}


//======================================================================
// sub_33BF40
// address: 0x0033BF40   size: 0x248 (584 bytes)
//======================================================================
int __fastcall sub_33BF40(int a1, int a2, int a3, FILE *a4)
{
  int result; // r0
  char *v7; // r0
  char **v8; // r0
  int v9; // r6
  char **v10; // r7
  _BYTE *v11; // r2
  int v12; // r0
  int v13; // r6
  int v14; // r2
  int v15; // r3
  int v16; // r1
  char *v17; // [sp+0h] [bp-24h]
  signed int v19; // [sp+Ch] [bp-18h]
  int v21; // [sp+18h] [bp-Ch]
  int v22; // [sp+20h] [bp-4h] BYREF
  char v23[1032]; // [sp+24h] [bp+0h] BYREF

  j_memset(v23, 0, 0x400u);
  v21 = *(_DWORD *)(a2 + 48);
  result = scew_attribute_by_name(a3, "defaultvalue");
  if ( result != 0 )
  {
    if ( *(int *)(a1 + 8) > 1 )
    {
      if ( (*(_WORD *)(a1 + 64) & 6) != 0 )
      {
        j_fprintf(a4, aWarning_3, a2 + 128, a1 + 152);
      }
      else
      {
        v7 = (char *)scew_attribute_value(result);
        tdr_normalize_string(v23, 1024, v7);
        v8 = tdr_idx_to_typeinfo(*(_DWORD *)(a1 + 56));
        v9 = *(_DWORD *)(a1 + 8);
        v10 = v8;
        if ( v9 > 20 )
        {
          if ( v9 == 21 )
          {
            v19 = j_strlen(v23) + 1;
          }
          else
          {
            v19 = 0;
            if ( v9 == 22 )
              v19 = 2 * (j_strlen(v23) + 1);
          }
        }
        else
        {
          v19 = (signed int)v8[6];
        }
        if ( v19 > *(_DWORD *)(a2 - v21 - 72) )
        {
          j_fprintf(a4, aWarning_1);
          return -2113862632;
        }
        v11 = (_BYTE *)(a2 - v21 + *(_DWORD *)(a2 - v21 - 64));
        v22 = v19;
        switch ( v9 )
        {
          case 2:
          case 3:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 11:
          case 12:
            v12 = tdr_ioscanf_basedtype_i(a2 - v21 - 168, (_DWORD *)a1, v11, &v22, v23);
            v13 = v12;
            if ( v12 >= 0 )
              goto LABEL_28;
            v14 = a2 + 128;
            v15 = a1 + 152;
            v17 = *v10;
            if ( (unsigned __int16)v12 == 1116 )
              j_fprintf(a4, aError_38, v14, v15, v17, v23);
            else
              j_fprintf(a4, aError_39, v14, v15, v17, v23);
            return v13;
          case 13:
            v13 = tdr_ioscanf_basedtype_i(a2 - v21 - 168, (_DWORD *)a1, v11, &v22, v23);
            if ( v13 >= 0 )
              goto LABEL_28;
            j_fprintf(a4, aWarning_5, a2 + 128, a1 + 152);
            return v13;
          case 14:
            v13 = tdr_ioscanf_basedtype_i(a2 - v21 - 168, (_DWORD *)a1, v11, &v22, v23);
            if ( v13 >= 0 )
              goto LABEL_28;
            j_fprintf(a4, aError_40, a2 + 128, a1 + 152);
            return v13;
          case 15:
            v13 = tdr_ioscanf_basedtype_i(a2 - v21 - 168, (_DWORD *)a1, v11, &v22, v23);
            if ( v13 >= 0 )
              goto LABEL_28;
            j_fprintf(a4, aWarning_4, a2 + 128, a1 + 152);
            return v13;
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
            v13 = tdr_ioscanf_basedtype_i(a2 - v21 - 168, (_DWORD *)a1, v11, &v22, v23);
            if ( v13 < 0 )
            {
              j_fprintf(a4, aError_39, a2 + 128, a1 + 152, *v10, v23);
              return v13;
            }
LABEL_28:
            result = v13;
            if ( v13 != 0 )
              return result;
LABEL_29:
            *(_DWORD *)(a1 + 196) = *(_DWORD *)(a2 - v21 - 64);
            *(_DWORD *)(a1 + 184) = v19;
            v16 = *(_DWORD *)(a2 - v21 - 72);
            *(_DWORD *)(a2 - v21 - 64) += v19;
            *(_DWORD *)(a2 - v21 - 72) = v16 - v19;
            break;
          default:
            j_fprintf(a4, aWarning_0, a2 + 128, a1 + 152, *v10);
            v19 = 0;
            goto LABEL_29;
        }
      }
    }
    else
    {
      j_fprintf(a4, aWarning_2, a2 + 128, a1 + 152);
    }
    return 0;
  }
  return result;
}


//======================================================================
// sub_33C1C8
// address: 0x0033C1C8   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall sub_33C1C8(int a1, int a2, char *a3, FILE *a4)
{
  _DWORD *v4; // r4
  int result; // r0
  int v8; // r7
  int v9; // r3
  int v10; // r1
  int v11; // r3
  int v13; // [sp+Ch] [bp-8h]

  v4 = (_DWORD *)(a1 + 208 * a2 + 200);
  v13 = *(_DWORD *)(a1 + 48);
  result = tdr_sizeinfo_to_off_i(v4 + 18, a1, a2, a3);
  v8 = result;
  if ( result < 0 )
  {
    j_fprintf(a4, aError_42, a1 + 128, v4 + 38, a3);
    return v8;
  }
  v9 = v4[2];
  if ( (unsigned int)(v9 - 2) <= 0x12 || v9 == 23 )
  {
    v4[21] = -1;
    v4[19] = -1;
    v4[18] = -1;
    v8 = 0;
    v4[20] = 0;
    j_fprintf(a4, aWarning_6, a1 + 128, v4 + 38);
    return v8;
  }
  if ( (unsigned int)(v9 - 21) <= 1 )
  {
    if ( v4[21] != -1 )
      return result;
    j_fprintf(a4, aError_43, a1 + 128, v4 + 38);
    return -2113862592;
  }
  if ( v9 > 1 )
    return result;
  v10 = a1 - v13 + v4[32];
  if ( *(int *)(v10 + 88) > 0 )
  {
    j_fprintf(a4, aError_41, a1 + 128, v4 + 38, v10 + 128);
    return -2113862592;
  }
  if ( v4[18] < v4[9] )
  {
    v11 = v4[8];
    if ( v11 > 1 || v11 == 0 )
    {
      j_fprintf(a4, aError_44, a1 + 128, v4 + 38);
      return -2113862592;
    }
  }
  return result;
}


//======================================================================
// sub_33C476
// address: 0x0033C476   size: 0x5E (94 bytes)
//======================================================================
void __noreturn sub_33C476()
{
  int v0; // r4

  sub_33D148(v0);
}


//======================================================================
// sub_33D094
// address: 0x0033D094   size: 0x4 (4 bytes)
//======================================================================
void sub_33D094()
{
  JUMPOUT(0x33CC2C);
}


//======================================================================
// sub_33D148
// address: 0x0033D148   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_33D148(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_33D2A8
// address: 0x0033D2A8   size: 0x2E (46 bytes)
//======================================================================
_BYTE *__fastcall sub_33D2A8(_BYTE *result)
{
  _BYTE *i; // r3
  char v2; // r2
  char v3; // r4
  char v4; // r2

  if ( result != nullptr )
  {
    for ( i = result; ; ++i )
    {
      v2 = *result;
      if ( *result == 0 )
        break;
      if ( (*result & 0x80) != 0 )
      {
        v3 = v2 << 6;
        v4 = result[1];
        result += 2;
        *i = v4 & 0x3F | v3;
      }
      else
      {
        *i = v2;
        ++result;
      }
    }
    *i = 0;
  }
  return result;
}


//======================================================================
// sub_33D2D6
// address: 0x0033D2D6   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_33D2D6(int a1)
{
  _BYTE *v2; // r0
  _BYTE *v3; // r0
  int v4; // r0
  int i; // r1
  int v6; // r0
  int v7; // r5
  _BYTE *v8; // r0
  _BYTE *v9; // r0
  int result; // r0

  v2 = (_BYTE *)scew_element_name(a1);
  sub_33D2A8(v2);
  v3 = (_BYTE *)scew_element_contents(a1);
  sub_33D2A8(v3);
  v4 = a1;
  for ( i = 0; ; i = v7 )
  {
    v6 = scew_attribute_next(v4, i);
    v7 = v6;
    if ( v6 == 0 )
      break;
    v8 = (_BYTE *)scew_attribute_name(v6);
    sub_33D2A8(v8);
    v9 = (_BYTE *)scew_attribute_value(v7);
    sub_33D2A8(v9);
    v4 = a1;
  }
  while ( 1 )
  {
    result = scew_element_next(a1, v7);
    v7 = result;
    if ( result == 0 )
      break;
    sub_33D2D6(result);
  }
  return result;
}


//======================================================================
// sub_33D328
// address: 0x0033D328   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_33D328(int a1, char *a2, _DWORD *a3)
{
  int v5; // r0
  int v6; // r3
  int i; // r3

  if ( j_strcasecmp(a2, "GBK") == 0 || (v5 = j_strcasecmp(a2, "GB2312"), v6 = 0, v5 == 0) )
  {
    for ( i = 0; i != 256; ++i )
      a3[i] = i;
    a3[256] = 0;
    a3[257] = 0;
    a3[258] = 0;
    return 1;
  }
  return v6;
}


//======================================================================
// sub_33DBC0
// address: 0x0033DBC0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_33DBC0(int a1)
{
  return *(_DWORD *)(a1 + 268);
}


//======================================================================
// sub_33DBC6
// address: 0x0033DBC6   size: 0x3E (62 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_33DBC6(unsigned __int8 *result)
{
  unsigned __int8 *v1; // r3
  int v2; // r4
  unsigned __int8 *v3; // r1
  unsigned __int8 *v4; // r2

  while ( *result != 0 )
  {
    v1 = result + 1;
    if ( *result == 13 )
    {
      do
      {
        v2 = *result;
        v3 = v1 - 1;
        v4 = v1;
        if ( v2 == 13 )
        {
          *v3 = 10;
          if ( result[1] == 10 )
            result += 2;
          else
            ++result;
        }
        else
        {
          ++result;
          *v3 = v2;
        }
        ++v1;
      }
      while ( *result != 0 );
      *v4 = 0;
      return result;
    }
    ++result;
  }
  return result;
}


//======================================================================
// sub_33DC04
// address: 0x0033DC04   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_33DC04(int a1, int a2, int a3, int a4)
{
  int v4; // r3
  _DWORD *v7; // r7
  _DWORD *v8; // r6
  int v9; // r3
  int result; // r0
  int v12; // [sp+14h] [bp-10h] BYREF
  int v13; // [sp+1Ch] [bp-8h] BYREF

  v4 = *(unsigned __int8 *)(a2 + 68);
  v12 = a3;
  if ( v4 != 0 )
    return (*(int (__fastcall **)(_DWORD, int, int))(a1 + 80))(*(_DWORD *)(a1 + 4), v12, a4 - v12);
  if ( a2 == *(_DWORD *)(a1 + 144) )
  {
    v7 = (_DWORD *)(a1 + 272);
    v8 = (_DWORD *)(a1 + 276);
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 284);
    v8 = v7 + 1;
  }
  do
  {
    v9 = *(_DWORD *)(a1 + 48);
    v13 = *(_DWORD *)(a1 + 44);
    (*(void (__fastcall **)(int, int *, int, int *, int))(a2 + 56))(a2, &v12, a4, &v13, v9);
    *v8 = v12;
    result = (*(int (__fastcall **)(_DWORD, _DWORD, int))(a1 + 80))(
               *(_DWORD *)(a1 + 4),
               *(_DWORD *)(a1 + 44),
               v13 - *(_DWORD *)(a1 + 44));
    *v7 = v12;
  }
  while ( v12 != a4 );
  return result;
}


//======================================================================
// sub_33DC80
// address: 0x0033DC80   size: 0x176 (374 bytes)
//======================================================================
int __fastcall sub_33DC80(_DWORD *a1, int a2, int *a3, int a4, int *a5, char a6)
{
  int v8; // r3
  int v9; // r1
  int *v10; // r6
  _DWORD *v11; // r7
  int v12; // r0
  void (__fastcall *v13)(_DWORD); // r3
  int v14; // r3
  int result; // r0
  void (__fastcall *v16)(int); // r3
  int v17; // r0
  int v18; // r2
  int v19; // r3
  int v22; // [sp+1Ch] [bp-10h] BYREF
  int v23; // [sp+20h] [bp-Ch] BYREF
  int v24; // [sp+24h] [bp-8h] BYREF

  v8 = *a3;
  v9 = a1[36];
  v22 = *a3;
  if ( a2 == v9 )
  {
    v10 = a1 + 68;
    a1[68] = v8;
    v11 = a1 + 69;
  }
  else
  {
    v10 = (int *)a1[71];
    v11 = v10 + 1;
  }
  *v10 = v8;
  *a3 = 0;
  while ( 1 )
  {
    v12 = (*(int (__fastcall **)(int, int, int, int *))(a2 + 8))(a2, v22, a4, &v23);
    *v11 = v23;
    if ( v12 == 0 )
    {
      *v10 = v23;
      return 4;
    }
    if ( v12 <= 0 )
    {
      if ( v12 == -2 )
      {
        result = 6;
        if ( a6 == 0 )
          return result;
      }
      else
      {
        if ( v12 <= -2 && v12 != -4 )
        {
LABEL_35:
          *v10 = v23;
          return 23;
        }
        if ( a6 == 0 )
          return 20;
      }
      *a5 = v22;
      return 0;
    }
    if ( v12 == 7 )
    {
      v16 = (void (__fastcall *)(int))a1[15];
      if ( v16 != nullptr )
      {
        LOBYTE(v24) = 10;
        v17 = a1[1];
LABEL_29:
        v16(v17);
        goto LABEL_36;
      }
LABEL_23:
      if ( a1[20] != 0 )
        sub_33DC04((int)a1, a2, v22, v23);
      goto LABEL_36;
    }
    if ( v12 == 40 )
      break;
    if ( v12 != 6 )
      goto LABEL_35;
    v16 = (void (__fastcall *)(int))a1[15];
    if ( v16 == nullptr )
      goto LABEL_23;
    if ( *(_BYTE *)(a2 + 68) != 0 )
    {
      v17 = a1[1];
      goto LABEL_29;
    }
    while ( 1 )
    {
      v18 = a1[12];
      v24 = a1[11];
      (*(void (__fastcall **)(int, int *, int, int *, int))(a2 + 56))(a2, &v22, v23, &v24, v18);
      *v11 = v23;
      ((void (__fastcall *)(_DWORD, _DWORD, int))a1[15])(a1[1], a1[11], v24 - a1[11]);
      if ( v22 == v23 )
        break;
      *v10 = v22;
    }
LABEL_36:
    v22 = v23;
    *v10 = v23;
    v19 = a1[116];
    if ( v19 == 2 )
      return 35;
    if ( v19 == 3 )
    {
      *a5 = v23;
      return 0;
    }
  }
  v13 = (void (__fastcall *)(_DWORD))a1[19];
  if ( v13 != nullptr )
  {
    v13(a1[1]);
  }
  else if ( a1[20] != 0 )
  {
    sub_33DC04((int)a1, a2, v22, v23);
  }
  v14 = v23;
  *a3 = v23;
  *a5 = v14;
  return a1[116] == 2 ? 0x23 : 0;
}


//======================================================================
// sub_33DDF8
// address: 0x0033DDF8   size: 0x50 (80 bytes)
//======================================================================
char *__fastcall sub_33DDF8(char *result)
{
  char *v1; // r4
  char *v2; // r3
  char v3; // r1
  unsigned int v4; // r2

  v1 = result;
  v2 = result;
  while ( 1 )
  {
    v3 = *v1;
    if ( *v1 == 0 )
      break;
    v4 = (unsigned __int8)(v3 - 10);
    if ( v4 > 0x16 || ((1 << v4) & (unsigned int)"f' in function 'OnMouseDown'") == 0 )
    {
      *v2 = v3;
      goto LABEL_9;
    }
    if ( v2 != result && *(v2 - 1) != 32 )
    {
      *v2 = 32;
LABEL_9:
      ++v2;
    }
    ++v1;
  }
  if ( v2 != result && *(v2 - 1) == 32 )
    --v2;
  *v2 = 0;
  return result;
}


//======================================================================
// sub_33DE4C
// address: 0x0033DE4C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_33DE4C(int result)
{
  _DWORD *v1; // r4
  unsigned int i; // r5
  int v3; // r6

  v1 = (_DWORD *)result;
  for ( i = 0; i < v1[2]; ++i )
  {
    v3 = 4 * i;
    result = (*(int (__fastcall **)(_DWORD))(v1[4] + 8))(*(_DWORD *)(*v1 + 4 * i));
    *(_DWORD *)(*v1 + v3) = 0;
  }
  v1[3] = 0;
  return result;
}


//======================================================================
// sub_33DE74
// address: 0x0033DE74   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_33DE74(int *a1)
{
  unsigned int i; // r4
  int v3; // r3
  int v4; // r0

  for ( i = 0; ; ++i )
  {
    v3 = a1[4];
    v4 = *a1;
    if ( i >= a1[2] )
      break;
    (*(void (__fastcall **)(_DWORD))(v3 + 8))(*(_DWORD *)(v4 + 4 * i));
  }
  return (*(int (__fastcall **)(int))(v3 + 8))(v4);
}


//======================================================================
// sub_33DE96
// address: 0x0033DE96   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_33DE96(int a1)
{
  int v1; // r2
  int *v2; // r3
  int v3; // r3

  v1 = *(_DWORD *)(a1 + 4);
  while ( 1 )
  {
    v2 = *(int **)a1;
    if ( *(_DWORD *)a1 == v1 )
      break;
    *(_DWORD *)a1 = v2 + 1;
    v3 = *v2;
    if ( v3 != 0 )
      return v3;
  }
  return 0;
}


//======================================================================
// sub_33DEB2
// address: 0x0033DEB2   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_33DEB2(int result)
{
  _DWORD *v1; // r3
  _DWORD *v2; // r2

  v1 = *(_DWORD **)result;
  if ( *(_DWORD *)(result + 4) != 0 )
  {
    while ( v1 != nullptr )
    {
      v2 = (_DWORD *)*v1;
      *v1 = *(_DWORD *)(result + 4);
      *(_DWORD *)(result + 4) = v1;
      v1 = v2;
    }
  }
  else
  {
    *(_DWORD *)(result + 4) = *(_DWORD *)result;
  }
  *(_DWORD *)result = 0;
  *(_DWORD *)(result + 16) = 0;
  *(_DWORD *)(result + 12) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}


//======================================================================
// sub_33DEDE
// address: 0x0033DEDE   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall sub_33DEDE(int a1)
{
  _DWORD *i; // r0
  _DWORD *v3; // r5
  _DWORD *result; // r0
  _DWORD *v5; // r5

  for ( i = *(_DWORD **)a1; i != nullptr; i = v3 )
  {
    v3 = (_DWORD *)*i;
    (*(void (**)(void))(*(_DWORD *)(a1 + 20) + 8))();
  }
  for ( result = *(_DWORD **)(a1 + 4); result != nullptr; result = v5 )
  {
    v5 = (_DWORD *)*result;
    (*(void (**)(void))(*(_DWORD *)(a1 + 20) + 8))();
  }
  return result;
}


//======================================================================
// sub_33DF08
// address: 0x0033DF08   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall sub_33DF08(int a1)
{
  _DWORD *v2; // r0
  int result; // r0
  int *v4; // r5
  _DWORD *v5; // r7
  unsigned int v6; // r3
  int *v7; // r6
  int v8; // r0
  int v9; // r3
  int v10; // r1
  int v11; // r3
  _DWORD *v12; // r2
  _DWORD *v13; // r3
  int v14; // r5
  int v15; // r1
  int *v16; // [sp+0h] [bp-Ch]
  _DWORD *v17; // [sp+4h] [bp-8h]

  v16 = *(int **)(a1 + 340);
  v17 = v16 + 41;
  if ( v16[41] == 0 )
  {
    v2 = (_DWORD *)(*(int (__fastcall **)(int))(a1 + 12))(4 * *(_DWORD *)(a1 + 452));
    *v17 = v2;
    if ( v2 == nullptr )
      return -1;
    *v2 = 0;
  }
  v4 = v16 + 38;
  v5 = v16 + 39;
  v6 = v16[38];
  v7 = v16 + 36;
  if ( v16[39] >= v6 )
  {
    if ( *v7 != 0 )
    {
      v8 = (*(int (__fastcall **)(int, unsigned int))(a1 + 16))(*v7, 56 * v6);
      if ( v8 == 0 )
        return -1;
      v9 = 2 * *v4;
    }
    else
    {
      v8 = (*(int (__fastcall **)(int))(a1 + 12))(896);
      if ( v8 == 0 )
        return -1;
      v9 = 32;
    }
    *v4 = v9;
    *v7 = v8;
  }
  result = (*v5)++;
  v10 = *v7;
  v11 = v16[40];
  v12 = (_DWORD *)(*v7 + 28 * result);
  if ( v11 != 0 )
  {
    v13 = (_DWORD *)(v10 + 28 * *(_DWORD *)(4 * (v11 + 0x3FFFFFFF) + *v17));
    v14 = v13[4];
    if ( v14 != 0 )
      *(_DWORD *)(v10 + 28 * v14 + 24) = result;
    v15 = v13[5];
    if ( v15 == 0 )
      v13[3] = result;
    v13[4] = result;
    v13[5] = v15 + 1;
  }
  v12[6] = 0;
  v12[5] = 0;
  v12[4] = 0;
  v12[3] = 0;
  return result;
}


//======================================================================
// sub_33DFCC
// address: 0x0033DFCC   size: 0xAA (170 bytes)
//======================================================================
int __fastcall sub_33DFCC(int a1, int a2, _DWORD *a3, _DWORD *a4, int *a5)
{
  int v6; // r1
  _DWORD *v8; // r3
  int v9; // r2
  int result; // r0
  _BYTE *i; // r3
  _BYTE *v12; // r2
  int v13; // r2
  int v14; // r2
  unsigned int v15; // r5
  int v16; // [sp+Ch] [bp-10h]
  int v17; // [sp+10h] [bp-Ch]

  v17 = *(_DWORD *)(a1 + 340);
  v6 = 28 * a2;
  v8 = (_DWORD *)(v17 + 144);
  v9 = *(_DWORD *)(*(_DWORD *)(v17 + 144) + v6);
  *a3 = v9;
  a3[1] = *(_DWORD *)(*(_DWORD *)(v17 + 144) + v6 + 4);
  if ( v9 == 4 )
  {
    result = *a5;
    a3[2] = *a5;
    for ( i = *(_BYTE **)(*v8 + v6 + 8); ; ++i )
    {
      v12 = (_BYTE *)(*a5)++;
      *v12 = *i;
      v13 = (unsigned __int8)*i;
      if ( *i == 0 )
        break;
    }
    a3[3] = v13;
    a3[4] = v13;
  }
  else
  {
    v14 = *(_DWORD *)(*v8 + v6 + 20);
    a3[3] = v14;
    a3[4] = *a4;
    result = 20;
    *a4 += 20 * v14;
    v15 = 0;
    v16 = *(_DWORD *)(*v8 + v6 + 12);
    while ( v15 < a3[3] )
    {
      result = sub_33DFCC(a1, v16, a3[4] + 20 * v15++, a4, a5);
      v16 = *(_DWORD *)(*(_DWORD *)(v17 + 144) + 28 * v16 + 24);
    }
    a3[2] = 0;
  }
  return result;
}


//======================================================================
// sub_33E078
// address: 0x0033E078   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall sub_33E078(_DWORD *a1, int a2)
{
  int (__fastcall *v2)(_DWORD, int, _BYTE *); // r3
  int i; // r5
  int v5; // r0
  int v6; // r0
  int inited; // r0
  void (__fastcall *v8)(int); // r4
  int (__fastcall *v10)(int); // [sp+4h] [bp-418h]
  _BYTE v11[1024]; // [sp+Ch] [bp-410h] BYREF
  int v12; // [sp+40Ch] [bp-10h]
  int v13; // [sp+410h] [bp-Ch]
  void (__fastcall *v14)(int); // [sp+414h] [bp-8h]

  v2 = (int (__fastcall *)(_DWORD, int, _BYTE *))a1[31];
  if ( v2 == nullptr )
    return 18;
  for ( i = 0; i != 1024; i += 4 )
    *(_DWORD *)&v11[i] = -1;
  v12 = 0;
  v13 = 0;
  v14 = nullptr;
  if ( v2(a1[61], a2, v11) == 0 )
  {
LABEL_10:
    if ( v14 != nullptr )
      v14(v12);
    return 18;
  }
  v10 = (int (__fastcall *)(int))a1[3];
  v5 = XmlSizeOfUnknownEncoding();
  v6 = v10(v5);
  a1[59] = v6;
  if ( v6 != 0 )
  {
    inited = XmlInitUnknownEncoding(v6, v11, v13, v12);
    if ( inited != 0 )
    {
      v8 = v14;
      a1[60] = v12;
      a1[62] = v8;
      a1[36] = inited;
      return 0;
    }
    goto LABEL_10;
  }
  if ( v14 != nullptr )
    v14(v12);
  return 1;
}


//======================================================================
// sub_33E12C
// address: 0x0033E12C   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_33E12C(int a1)
{
  int **i; // r4
  int *v3; // r0
  int v4; // r2
  char *v5; // r5
  int v6; // r6
  int result; // r0
  int *v8; // r3
  int *v9; // r2
  int v10; // [sp+4h] [bp-8h]

  for ( i = *(int ***)(a1 + 348); i != nullptr; i = (int **)*i )
  {
    v3 = i[9];
    v4 = (int)i[6] + 1;
    v5 = (char *)v3 + v4;
    v10 = v4;
    if ( i[1] == (int *)((char *)v3 + v4) )
      break;
    v6 = (int)i[2] + v4;
    if ( v6 > (char *)i[10] - (char *)v3 )
    {
      result = (*(int (**)(void))(a1 + 16))();
      if ( result == 0 )
        return result;
      v8 = i[9];
      if ( i[3] == v8 )
        i[3] = (int *)result;
      v9 = i[4];
      if ( v9 != nullptr )
        i[4] = (int *)(result + (char *)v9 - (char *)v8);
      i[9] = (int *)result;
      i[10] = (int *)(result + v6);
      v5 = (char *)(result + v10);
    }
    j_memcpy(v5, i[1], (size_t)i[2]);
    i[1] = (int *)v5;
  }
  return 1;
}


//======================================================================
// sub_33E194
// address: 0x0033E194   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall sub_33E194(int *a1)
{
  int *v1; // r3
  int v3; // r2
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r2
  int v8; // r0
  const void *v9; // r1
  int v10; // r3
  int v11; // r3
  int v12; // r0
  int v13; // r6
  int v14; // r3
  int v15; // r6
  int v16; // r0
  int v18; // r2
  int v19; // r3
  int v20; // r2
  int v21; // r6
  int v22; // r7
  int *v23; // r0
  int *v24; // r5
  _DWORD *v25; // r6
  _BYTE *v26; // r2
  _BYTE *v27; // r1
  int v28; // r0
  int v29; // r1

  v1 = (int *)a1[1];
  v3 = a1[4];
  if ( v1 == nullptr )
    goto LABEL_6;
  if ( v3 != 0 )
  {
    if ( a1[2] - v3 < v1[1] )
    {
      v7 = *v1;
      *v1 = *a1;
      v8 = a1[1];
      v9 = (const void *)a1[4];
      v10 = a1[2];
      *a1 = v8;
      a1[1] = v7;
      j_memcpy((void *)(v8 + 8), v9, v10 - (_DWORD)v9);
      v11 = *a1;
      a1[3] = *a1 + a1[3] - a1[4] + 8;
      a1[4] = v11 + 8;
      a1[2] = v11 + 8 + *(_DWORD *)(v11 + 4);
      return 1;
    }
LABEL_6:
    v12 = *a1;
    v13 = a1[2];
    v14 = a1[5];
    if ( *a1 != 0 && v3 == v12 + 8 )
    {
      v15 = 2 * (v13 - v3);
      v16 = (*(int (**)(void))(v14 + 4))();
      *a1 = v16;
      if ( v16 != 0 )
      {
        *(_DWORD *)(v16 + 4) = v15;
        v18 = *a1 + a1[3] - a1[4] + 8;
        v19 = *a1 + 8;
        a1[4] = v19;
        a1[3] = v18;
        a1[2] = v19 + v15;
        return 1;
      }
    }
    else
    {
      v20 = v13 - v3;
      v21 = 2 * v20;
      if ( v20 <= 1023 )
        v21 = 1024;
      v22 = v21 + 8;
      v23 = (int *)(*(int (__fastcall **)(int))v14)(v21 + 8);
      v24 = v23;
      if ( v23 != nullptr )
      {
        v23[1] = v21;
        v25 = v23 + 2;
        *v23 = *a1;
        v26 = (_BYTE *)a1[3];
        v27 = (_BYTE *)a1[4];
        *a1 = (int)v23;
        if ( v26 != v27 )
          j_memcpy(v23 + 2, v27, v26 - v27);
        v28 = a1[3];
        v29 = a1[4];
        a1[4] = (int)v25;
        a1[3] = (int)v24 + v28 - v29 + 8;
        a1[2] = (int)v24 + v22;
        return 1;
      }
    }
    return 0;
  }
  *a1 = (int)v1;
  a1[1] = *v1;
  *v1 = 0;
  v4 = *a1;
  v5 = *a1 + 8;
  a1[4] = v5;
  v6 = *(_DWORD *)(v4 + 4);
  a1[3] = v5;
  a1[2] = v5 + v6;
  return 1;
}


//======================================================================
// sub_33E290
// address: 0x0033E290   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_33E290(int *a1, int a2, int a3, int a4)
{
  int v5; // r3
  int v9; // [sp+Ch] [bp-8h] BYREF

  v5 = a1[3];
  v9 = a3;
  if ( v5 != 0 )
    goto LABEL_4;
  do
  {
    if ( sub_33E194(a1) == 0 )
      return 0;
LABEL_4:
    (*(void (__fastcall **)(int, int *, int, int *, int))(a2 + 56))(a2, &v9, a4, a1 + 3, a1[2]);
  }
  while ( v9 != a4 );
  return a1[4];
}


//======================================================================
// sub_33E2CE
// address: 0x0033E2CE   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_33E2CE(int *a1, int a2, int a3, int a4)
{
  _BYTE *v6; // r3

  if ( sub_33E290(a1, a2, a3, a4) == 0 || a1[3] == a1[2] && sub_33E194(a1) == 0 )
    return 0;
  v6 = (_BYTE *)a1[3];
  a1[3] = (int)(v6 + 1);
  *v6 = 0;
  return a1[4];
}


//======================================================================
// sub_33E302
// address: 0x0033E302   size: 0x180 (384 bytes)
//======================================================================
int __fastcall sub_33E302(_DWORD *a1, int a2, int a3, int a4)
{
  int *v5; // r5
  int result; // r0
  int v9; // r6
  int v10; // r7
  int v11; // r6
  int v12; // r0
  int v13; // r5
  int v14; // r0
  int v15; // r5
  int v17; // [sp+18h] [bp-24h]
  int v18; // [sp+24h] [bp-18h] BYREF
  int v19; // [sp+28h] [bp-14h] BYREF
  int v20; // [sp+2Ch] [bp-10h] BYREF
  int v21; // [sp+30h] [bp-Ch] BYREF
  int v22; // [sp+34h] [bp-8h] BYREF

  v18 = 0;
  v19 = 0;
  v20 = 0;
  v22 = -1;
  v5 = a1 + 36;
  if ( XmlParseXmlDecl(a2, a1[36], a3, a4, a1 + 68, &v20, &v21, &v18, &v19, &v22) == 0 )
    return 31 - (a2 == 0);
  if ( a2 == 0 && v22 == 1 )
    *(_BYTE *)(a1[85] + 130) = 1;
  v9 = a1[35];
  if ( v9 != 0 )
  {
    v10 = v18;
    if ( v18 != 0 )
    {
      v11 = *v5;
      v12 = (*(int (__fastcall **)(int, int))(*v5 + 28))(*v5, v18);
      v10 = sub_33E2CE(a1 + 106, v11, v10, v10 + v12);
      if ( v10 == 0 )
        return 1;
      a1[110] = a1[109];
    }
    if ( v20 != 0 )
    {
      v9 = sub_33E2CE(a1 + 106, *v5, v20, v21 - *(_DWORD *)(*v5 + 64));
      if ( v9 == 0 )
        return 1;
    }
    else
    {
      v9 = 0;
    }
    ((void (__fastcall *)(_DWORD, int, int, int))a1[35])(a1[1], v9, v10, v22);
  }
  else
  {
    if ( a1[20] != 0 )
      sub_33DC04((int)a1, *v5, a3, a4);
    else
      v9 = 0;
    v10 = 0;
  }
  if ( a1[57] != 0 )
    goto LABEL_30;
  if ( v19 != 0 )
  {
    if ( *(_DWORD *)(v19 + 64) != *(_DWORD *)(*v5 + 64) )
    {
      a1[68] = v18;
      return 19;
    }
    *v5 = v19;
    goto LABEL_30;
  }
  v17 = v18;
  if ( v18 == 0 )
  {
LABEL_30:
    if ( v10 == 0 && v9 == 0 )
      return 0;
    sub_33DEB2((int)(a1 + 106));
    return 0;
  }
  if ( v10 == 0 )
  {
    v13 = *v5;
    v14 = (*(int (__fastcall **)(int, int))(v13 + 28))(v13, v18);
    v10 = sub_33E2CE(a1 + 106, v13, v17, v17 + v14);
    if ( v10 == 0 )
      return 1;
  }
  v15 = sub_33E078(a1, v10);
  sub_33DEB2((int)(a1 + 106));
  result = v15;
  if ( v15 == 18 )
    a1[68] = v18;
  return result;
}


//======================================================================
// sub_33E482
// address: 0x0033E482   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_33E482(int *a1, char *a2)
{
  _BYTE *v4; // r3
  char v5; // r2
  int result; // r0

  while ( 1 )
  {
    if ( a1[3] == a1[2] )
    {
      result = sub_33E194(a1);
      if ( result == 0 )
        break;
    }
    v4 = (_BYTE *)a1[3];
    a1[3] = (int)(v4 + 1);
    v5 = *a2++;
    *v4 = v5;
    if ( *(a2 - 1) == 0 )
    {
      result = a1[4];
      a1[4] = a1[3];
      return result;
    }
  }
  return result;
}


//======================================================================
// sub_33E4B8
// address: 0x0033E4B8   size: 0xE2 (226 bytes)
//======================================================================
void *__fastcall sub_33E4B8(int a1, char *a2)
{
  _DWORD *v2; // r6
  int v5; // r0
  int v6; // r3
  void *result; // r0

  v2 = (_DWORD *)(a1 + 252);
  *(_DWORD *)(a1 + 264) = sub_3413EC;
  XmlPrologStateInit(a1 + 252);
  if ( a2 != nullptr )
    v5 = sub_33E482((int *)(a1 + 400), a2);
  else
    v5 = 0;
  *(_DWORD *)(a1 + 228) = v5;
  v2[23] = 0;
  XmlInitEncoding(a1 + 148, a1 + 144, 0);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_DWORD *)(a1 + 64) = 0;
  *(_DWORD *)(a1 + 68) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = 0;
  *(_DWORD *)(a1 + 116) = a1;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 24) = v6;
  *(_DWORD *)(a1 + 28) = v6;
  v2[19] = 0;
  v2[20] = 0;
  v2[12] = 0;
  v2[13] = 0;
  v2[14] = 0;
  v2[15] = 0;
  v2[16] = 0;
  v2[17] = 0;
  v2[18] = 0;
  *(_BYTE *)(a1 + 336) = 0;
  *(_BYTE *)(a1 + 337) = 0;
  result = j_memset((void *)(a1 + 392), 0, 8u);
  v2[4] = 0;
  v2[5] = 0;
  v2[6] = 0;
  v2[7] = 0;
  v2[8] = 0;
  *(_BYTE *)(a1 + 292) = 1;
  v2[11] = 0;
  v2[24] = 0;
  v2[26] = 0;
  v2[29] = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 460) = 0;
  *(_DWORD *)(a1 + 464) = 0;
  return result;
}


//======================================================================
// sub_33E5A0
// address: 0x0033E5A0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_33E5A0(int result, int (__fastcall **a2)(int))
{
  int i; // r4
  int v4; // r6

  for ( i = result; i != 0; i = v4 )
  {
    v4 = *(_DWORD *)(i + 4);
    (*a2)(*(_DWORD *)(i + 16));
    result = (*a2)(i);
  }
  return result;
}


//======================================================================
// sub_33E5BE
// address: 0x0033E5BE   size: 0x9C (156 bytes)
//======================================================================
int __fastcall sub_33E5BE(_DWORD *a1, int a2, int a3, int a4, int a5, int a6)
{
  int v9; // r7
  int i; // r2
  int v11; // r0
  int v13; // r7
  int v14; // r0
  int v15; // r3

  v9 = a1[3];
  if ( a5 != 0 || a4 != 0 )
  {
    for ( i = 0; i < v9; ++i )
    {
      if ( a2 == *(_DWORD *)(12 * i + a1[5]) )
        return 1;
    }
    if ( a4 != 0 && a1[2] == 0 && *(_BYTE *)(a2 + 9) == 0 )
      a1[2] = a2;
  }
  if ( v9 == a1[4] )
  {
    if ( v9 != 0 )
    {
      v13 = 2 * v9;
      v14 = (*(int (__fastcall **)(_DWORD, int))(a6 + 16))(a1[5], 12 * v13);
      if ( v14 == 0 )
        return 0;
      a1[4] = v13;
      a1[5] = v14;
    }
    else
    {
      a1[4] = 8;
      v11 = (*(int (__fastcall **)(int))(a6 + 12))(96);
      a1[5] = v11;
      if ( v11 == 0 )
        return 0;
    }
  }
  v15 = a1[5] + 12 * a1[3];
  *(_DWORD *)v15 = a2;
  *(_DWORD *)(v15 + 8) = a5;
  *(_BYTE *)(v15 + 4) = a3;
  if ( a3 == 0 )
    *(_BYTE *)(a2 + 8) = 1;
  ++a1[3];
  return 1;
}


//======================================================================
// sub_33E65A
// address: 0x0033E65A   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_33E65A(_DWORD *a1)
{
  int *v2; // r5
  int inited; // r3
  int result; // r0

  v2 = a1 + 57;
  inited = XmlInitEncoding(a1 + 37, a1 + 36, a1[57]);
  result = 0;
  if ( inited == 0 )
    return sub_33E078(a1, *v2);
  return result;
}


//======================================================================
// sub_33E680
// address: 0x0033E680   size: 0x19C (412 bytes)
//======================================================================
int __fastcall sub_33E680(int a1, _DWORD *a2, int a3, _BYTE *a4, int *a5)
{
  _BYTE *v5; // r2
  int v8; // r3
  int v9; // r1
  int result; // r0
  _BOOL4 v11; // r2
  int v12; // r7
  _BOOL4 v13; // r1
  int v14; // r0
  _BOOL4 v15; // r1
  signed int v16; // r7
  int v17; // r4
  int v18; // r0
  int v19; // r0
  void (__fastcall *v20)(_DWORD, _DWORD, _BYTE *); // r3

  v5 = (_BYTE *)*a2;
  if ( *a2 != 0 )
  {
    v8 = 0;
    if ( *v5 == 120 && v5[1] == 109 && v5[2] == 108 )
    {
      v9 = (unsigned __int8)v5[3];
      if ( v9 == 110 )
      {
        if ( v5[4] == 115 )
        {
          result = 39;
          if ( v5[5] == 0 )
            return result;
        }
      }
      else
      {
        v8 = v9 == 0;
      }
    }
  }
  else
  {
    v8 = 0;
  }
  v11 = true;
  v12 = 0;
  v13 = true;
  while ( 1 )
  {
    v14 = (unsigned __int8)a4[v12];
    if ( a4[v12] == 0 )
      break;
    if ( v13 )
    {
      v13 = false;
      if ( v12 <= 36 )
        v13 = (unsigned __int8)aHttpWwwW3OrgXm[v12] == v14;
    }
    if ( v8 == 0 && v11 )
    {
      v11 = false;
      if ( v12 <= 29 )
        v11 = (unsigned __int8)aHttpWwwW3Org20[v12] == v14;
    }
    ++v12;
  }
  if ( v13 )
    v14 = v12 == 36;
  v15 = false;
  if ( v11 )
    v15 = v12 == 29;
  if ( v8 == v14 )
  {
    result = 40;
    if ( v15 )
      return result;
    v16 = v12 + (*(_BYTE *)(a1 + 456) != 0);
    v17 = *(_DWORD *)(a1 + 360);
    if ( v17 != 0 )
    {
      if ( v16 <= *(_DWORD *)(v17 + 24) )
      {
LABEL_33:
        *(_DWORD *)(a1 + 360) = *(_DWORD *)(v17 + 4);
        goto LABEL_39;
      }
      v18 = (*(int (__fastcall **)(_DWORD))(a1 + 16))(*(_DWORD *)(v17 + 16));
      if ( v18 != 0 )
      {
        *(_DWORD *)(v17 + 16) = v18;
        *(_DWORD *)(v17 + 24) = v16 + 24;
        goto LABEL_33;
      }
    }
    else
    {
      v17 = (*(int (__fastcall **)(int))(a1 + 12))(28);
      if ( v17 != 0 )
      {
        v19 = (*(int (__fastcall **)(int))(a1 + 12))(v16 + 24);
        *(_DWORD *)(v17 + 16) = v19;
        if ( v19 != 0 )
        {
          *(_DWORD *)(v17 + 24) = v16 + 24;
LABEL_39:
          *(_DWORD *)(v17 + 20) = v16;
          j_memcpy(*(void **)(v17 + 16), a4, v16);
          if ( *(_BYTE *)(a1 + 456) != 0 )
            *(_BYTE *)(*(_DWORD *)(v17 + 16) + v16 - 1) = *(_BYTE *)(a1 + 456);
          *(_DWORD *)v17 = a2;
          *(_DWORD *)(v17 + 12) = a3;
          *(_DWORD *)(v17 + 8) = a2[1];
          if ( *a4 != 0 || a2 != (_DWORD *)(*(_DWORD *)(a1 + 340) + 132) )
            a2[1] = v17;
          else
            a2[1] = (unsigned __int8)*a4;
          *(_DWORD *)(v17 + 4) = *a5;
          *a5 = v17;
          if ( a3 != 0 )
          {
            v20 = *(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(a1 + 100);
            if ( v20 == nullptr )
              return 0;
            v20(*(_DWORD *)(a1 + 4), *a2, a2[1] != 0 ? a4 : nullptr);
          }
          return 0;
        }
        (*(void (__fastcall **)(int))(a1 + 20))(v17);
      }
    }
    return 1;
  }
  result = 40;
  if ( v8 != 0 )
    return 38;
  return result;
}


//======================================================================
// sub_33E824
// address: 0x0033E824   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_33E824(int a1, int a2, int a3, int a4)
{
  int v6; // r7
  int v7; // r0
  int v9; // r0
  unsigned __int8 *v10; // r0
  unsigned __int8 *v11; // r4
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch]

  if ( *(_DWORD *)(a1 + 64) != 0 )
  {
    v6 = a3 + 2 * *(_DWORD *)(a2 + 64);
    v7 = (*(int (__fastcall **)(int, int))(a2 + 28))(a2, v6);
    v12 = v6 + v7;
    v13 = sub_33E2CE((int *)(a1 + 400), a2, v6, v6 + v7);
    if ( v13 == 0 )
      return 0;
    *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 412);
    v9 = (*(int (__fastcall **)(int, int))(a2 + 32))(a2, v12);
    v10 = (unsigned __int8 *)sub_33E2CE((int *)(a1 + 400), a2, v9, a4 - 2 * *(_DWORD *)(a2 + 64));
    v11 = v10;
    if ( v10 == nullptr )
      return 0;
    sub_33DBC6(v10);
    (*(void (__fastcall **)(_DWORD, int, unsigned __int8 *))(a1 + 64))(*(_DWORD *)(a1 + 4), v13, v11);
    sub_33DEB2(a1 + 400);
  }
  else if ( *(_DWORD *)(a1 + 80) != 0 )
  {
    sub_33DC04(a1, a2, a3, a4);
  }
  return 1;
}


//======================================================================
// sub_33E8B6
// address: 0x0033E8B6   size: 0x4C (76 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_33E8B6(int a1, int a2, int a3, int a4)
{
  unsigned __int8 *result; // r0
  unsigned __int8 *v6; // r5

  if ( *(_DWORD *)(a1 + 68) != 0 )
  {
    result = (unsigned __int8 *)sub_33E2CE(
                                  (int *)(a1 + 400),
                                  a2,
                                  a3 + 4 * *(_DWORD *)(a2 + 64),
                                  a4 - 3 * *(_DWORD *)(a2 + 64));
    v6 = result;
    if ( result == nullptr )
      return result;
    sub_33DBC6(result);
    (*(void (__fastcall **)(_DWORD, unsigned __int8 *))(a1 + 68))(*(_DWORD *)(a1 + 4), v6);
    sub_33DEB2(a1 + 400);
  }
  else if ( *(_DWORD *)(a1 + 80) != 0 )
  {
    sub_33DC04(a1, a2, a3, a4);
  }
  return (_BYTE *)(&dword_0 + 1);
}


//======================================================================
// sub_33E904
// address: 0x0033E904   size: 0xFA (250 bytes)
//======================================================================
int __fastcall sub_33E904(int a1, int a2, int a3, int *a4)
{
  int v6; // r5
  int *v7; // r6
  int (__fastcall **v8)(_DWORD, int, int, int *); // r0
  int v9; // r0
  int v10; // r3
  int result; // r0
  unsigned __int8 *v12; // r0
  int v13; // r3
  int v14; // r3
  int v16; // [sp+Ch] [bp-8h] BYREF

  v6 = a2;
  *(_DWORD *)(a1 + 264) = sub_33E904;
  *(_DWORD *)(a1 + 272) = a2;
  while ( 1 )
  {
    v7 = (int *)(a1 + 144);
    v8 = *(int (__fastcall ***)(_DWORD, int, int, int *))(a1 + 144);
    v16 = 0;
    v9 = (*v8)(v8, v6, a3, &v16);
    v10 = v16;
    *(_DWORD *)(a1 + 276) = v16;
    if ( v9 == -1 )
    {
      v13 = *(unsigned __int8 *)(a1 + 468);
      result = 5;
      goto LABEL_27;
    }
    if ( v9 < 0 )
      break;
    if ( v9 == 11 )
    {
      v12 = (unsigned __int8 *)sub_33E824(a1, *v7, v6, v10);
      goto LABEL_22;
    }
    if ( v9 <= 11 )
    {
      if ( v9 == 0 )
      {
        *(_DWORD *)(a1 + 272) = v10;
        return 4;
      }
      return 9;
    }
    if ( v9 == 13 )
    {
      v12 = sub_33E8B6(a1, *v7, v6, v10);
LABEL_22:
      if ( v12 == nullptr )
        return 1;
      goto LABEL_29;
    }
    if ( v9 != 15 )
      return 9;
    if ( *(_DWORD *)(a1 + 80) != 0 )
      sub_33DC04(a1, *v7, v6, v10);
LABEL_29:
    v6 = v16;
    *(_DWORD *)(a1 + 272) = v16;
    v14 = *(_DWORD *)(a1 + 464);
    if ( v14 == 2 )
      return 35;
    if ( v14 == 3 )
      goto LABEL_31;
  }
  if ( v9 == -4 )
  {
LABEL_31:
    *a4 = v6;
    return 0;
  }
  if ( v9 == -2 )
  {
    v13 = *(unsigned __int8 *)(a1 + 468);
    result = 6;
LABEL_27:
    if ( v13 != 0 )
      return result;
    goto LABEL_31;
  }
  if ( v9 != -15 )
    return 9;
  if ( *(_DWORD *)(a1 + 80) == 0 || (sub_33DC04(a1, *v7, v6, v10), result = 35, *(_DWORD *)(a1 + 464) != 2) )
  {
    *a4 = v16;
    return 0;
  }
  return result;
}


//======================================================================
// sub_33EA04
// address: 0x0033EA04   size: 0x208 (520 bytes)
//======================================================================
unsigned int __fastcall sub_33EA04(int *a1, _BYTE *a2, size_t a3)
{
  int v3; // r6
  _BYTE *v5; // r3
  unsigned int v6; // r5
  void *v7; // r0
  _BYTE *n; // r2
  int v9; // r1
  unsigned int v10; // r3
  unsigned int v11; // r2
  _BYTE *v12; // r1
  unsigned __int8 *j; // r0
  char v14; // r2
  char v15; // r6
  _DWORD *v16; // r0
  int v17; // r0
  _BYTE **v18; // r1
  _BYTE *v19; // r3
  int k; // r0
  unsigned int v21; // r2
  unsigned int m; // r3
  _DWORD *v23; // r7
  unsigned int v24; // r2
  int v25; // r5
  int v26; // r7
  void *v27; // r0
  int i; // [sp+8h] [bp-24h]
  int v30; // [sp+Ch] [bp-20h]
  int v31; // [sp+Ch] [bp-20h]
  unsigned int v32; // [sp+10h] [bp-1Ch]
  _DWORD *v33; // [sp+14h] [bp-18h]
  int v34; // [sp+18h] [bp-14h]

  v3 = a1[2];
  if ( v3 != 0 )
  {
    v5 = a2;
    for ( i = 0; ; i = v11 ^ (1000003 * i) )
    {
      v11 = (unsigned __int8)*v5;
      if ( *v5 == 0 )
        break;
      ++v5;
    }
    v10 = i & (v3 - 1);
    v30 = *a1;
    while ( 1 )
    {
      v6 = *(_DWORD *)(4 * v10 + v30);
      if ( v6 == 0 )
        break;
      v12 = *(_BYTE **)v6;
      for ( j = a2; (unsigned __int8)*v12 == *j; ++j )
      {
        if ( *v12 == 0 )
          return v6;
        ++v12;
      }
      if ( v11 == 0 )
        v11 = ((i & (unsigned int)~(v3 - 1)) >> (*((_BYTE *)a1 + 4) - 1))
            & (unsigned __int8)((unsigned int)(v3 - 1) >> 2)
            | 1;
      if ( v10 < v11 )
        v10 += v3;
      v10 -= v11;
    }
    if ( a3 == 0 )
      return 0;
    v14 = *((_BYTE *)a1 + 4);
    if ( (unsigned int)a1[3] >> (v14 - 1) != 0 )
    {
      v15 = v14 + 1;
      v31 = 1 << (v14 + 1);
      v32 = v31 - 1;
      v16 = (_DWORD *)(*(int (__fastcall **)(int))a1[4])(4 * v31);
      v33 = v16;
      if ( v16 == nullptr )
        return 0;
      j_memset(v16, 0, 4 * v31);
      v34 = (unsigned __int8)(v32 >> 2);
      while ( 1 )
      {
        v17 = *a1;
        if ( v6 >= a1[2] )
          break;
        v18 = *(_BYTE ***)(v17 + 4 * v6);
        if ( v18 != nullptr )
        {
          v19 = *v18;
          for ( k = 0; ; k = (1000003 * k) ^ v21 )
          {
            v21 = (unsigned __int8)*v19;
            if ( *v19 == 0 )
              break;
            ++v19;
          }
          for ( m = v32 & k; ; m -= v21 )
          {
            v23 = &v33[m];
            if ( *v23 == 0 )
              break;
            if ( v21 == 0 )
              v21 = ((k & ~v32) >> (v15 - 1)) & v34 | 1;
            if ( m < v21 )
              m += v31;
          }
          *v23 = v18;
        }
        ++v6;
      }
      (*(void (__fastcall **)(int))(a1[4] + 8))(v17);
      *a1 = (int)v33;
      a1[2] = v31;
      v10 = v32 & i;
      *((_BYTE *)a1 + 4) = v15;
      v24 = 0;
      while ( v33[v10] != 0 )
      {
        if ( v24 == 0 )
          v24 = ((i & ~v32) >> (v15 - 1)) & v34 | 1;
        if ( v10 < v24 )
          v10 += v31;
        v10 -= v24;
      }
    }
  }
  else
  {
    if ( a3 == 0 )
      return 0;
    *((_BYTE *)a1 + 4) = 6;
    a1[2] = 64;
    v7 = (void *)(*(int (__fastcall **)(int))a1[4])(256);
    *a1 = (int)v7;
    if ( v7 == nullptr )
    {
      a1[2] = 0;
      return 0;
    }
    j_memset(v7, 0, 0x100u);
    for ( n = a2; ; ++n )
    {
      v9 = (unsigned __int8)*n;
      if ( *n == 0 )
        break;
      v3 = (1000003 * v3) ^ v9;
    }
    v10 = (a1[2] - 1) & v3;
  }
  v25 = 4 * v10;
  v26 = *a1;
  *(_DWORD *)(v26 + v25) = (*(int (__fastcall **)(size_t))a1[4])(a3);
  v27 = *(void **)(*a1 + v25);
  if ( v27 != nullptr )
  {
    j_memset(v27, 0, a3);
    **(_DWORD **)(*a1 + v25) = a2;
    ++a1[3];
    return *(_DWORD *)(*a1 + v25);
  }
  return 0;
}


//======================================================================
// sub_33EC10
// address: 0x0033EC10   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_33EC10(int a1, int a2)
{
  char *i; // r5
  char *j; // r6
  int v6; // r2
  int v7; // r3
  _BYTE *v9; // r3
  char v10; // r2
  _BYTE *v11; // r3
  _DWORD *v12; // r0
  int v13; // r3

  for ( i = *(char **)a2; *i != 0; ++i )
  {
    if ( *i == 58 )
    {
      for ( j = *(char **)a2; ; ++j )
      {
        v6 = *(_DWORD *)(a1 + 92);
        v7 = *(_DWORD *)(a1 + 88);
        if ( j == i )
          break;
        if ( v6 == v7 && sub_33E194((int *)(a1 + 80)) == 0 )
          return 0;
        v9 = *(_BYTE **)(a1 + 92);
        *(_DWORD *)(a1 + 92) = v9 + 1;
        v10 = *j;
        *v9 = v10;
      }
      if ( v6 == v7 && sub_33E194((int *)(a1 + 80)) == 0 )
        return 0;
      v11 = *(_BYTE **)(a1 + 92);
      *(_DWORD *)(a1 + 92) = v11 + 1;
      *v11 = 0;
      v12 = (_DWORD *)sub_33EA04((int *)(a1 + 60), *(_BYTE **)(a1 + 96), 8u);
      if ( v12 == nullptr )
        return 0;
      v13 = *(_DWORD *)(a1 + 96);
      if ( *v12 == v13 )
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 92);
      else
        *(_DWORD *)(a1 + 92) = v13;
      *(_DWORD *)(a2 + 4) = v12;
    }
  }
  return 1;
}


//======================================================================
// sub_33EC96
// address: 0x0033EC96   size: 0x13A (314 bytes)
//======================================================================
_DWORD *__fastcall sub_33EC96(int a1, int a2, int a3, int a4)
{
  int *v5; // r4
  _BYTE *v8; // r3
  int v9; // r0
  _BYTE *v10; // r6
  _DWORD *result; // r0
  _DWORD *v12; // r5
  _BYTE *v13; // r7
  int v14; // r3
  _BYTE *v15; // r3
  int v16; // r2
  char *i; // r6
  int v18; // r2
  int v19; // r3
  _BYTE *v20; // r3
  char v21; // r2
  _BYTE *v22; // r3
  _DWORD *v23; // r0
  int *v24; // [sp+4h] [bp-10h]
  int v25; // [sp+8h] [bp-Ch]
  _BYTE *v26; // [sp+8h] [bp-Ch]

  v5 = *(int **)(a1 + 340);
  v24 = v5 + 20;
  if ( v5[23] == v5[22] && sub_33E194(v24) == 0 )
    return nullptr;
  v8 = (_BYTE *)v5[23];
  v5[23] = (int)(v8 + 1);
  *v8 = 0;
  v9 = sub_33E2CE(v24, a2, a3, a4);
  v10 = (_BYTE *)v9;
  if ( v9 == 0 )
    return nullptr;
  v25 = v9 + 1;
  result = (_DWORD *)sub_33EA04(v5 + 10, (_BYTE *)(v9 + 1), 0xCu);
  v12 = result;
  if ( result == nullptr )
    return nullptr;
  v13 = (_BYTE *)*result;
  if ( *result != v25 )
  {
    v14 = v5[24];
LABEL_21:
    v5[23] = v14;
    return v12;
  }
  v5[24] = v5[23];
  if ( *(_BYTE *)(a1 + 232) == 0 )
    return result;
  if ( v10[1] == 120 && v10[2] == 109 && v10[3] == 108 && v10[4] == 110 && v10[5] == 115 )
  {
    if ( v10[6] == 0 )
    {
      result[1] = v5 + 33;
      goto LABEL_20;
    }
    if ( v10[6] == 58 )
    {
      result[1] = sub_33EA04(v5 + 15, v10 + 7, 8u);
LABEL_20:
      *((_BYTE *)v12 + 9) = 1;
      return v12;
    }
  }
  v15 = v13;
  while ( 1 )
  {
    v16 = (unsigned __int8)*v15;
    v26 = (_BYTE *)(v15 - v13);
    if ( *v15 == 0 )
      return v12;
    ++v15;
    if ( v16 == 58 )
    {
      for ( i = v13; ; ++i )
      {
        v18 = v5[23];
        v19 = v5[22];
        if ( i - v13 >= (int)v26 )
          break;
        if ( v18 == v19 && sub_33E194(v24) == 0 )
          return nullptr;
        v20 = (_BYTE *)v5[23];
        v5[23] = (int)(v20 + 1);
        v21 = *i;
        *v20 = v21;
      }
      if ( v18 == v19 && sub_33E194(v24) == 0 )
        return nullptr;
      v22 = (_BYTE *)v5[23];
      v5[23] = (int)(v22 + 1);
      *v22 = 0;
      v23 = (_DWORD *)sub_33EA04(v5 + 15, (_BYTE *)v5[24], 8u);
      v12[1] = v23;
      v14 = v5[24];
      if ( *v23 != v14 )
        goto LABEL_21;
      v5[24] = v5[23];
      return v12;
    }
  }
}


//======================================================================
// sub_33EDD0
// address: 0x0033EDD0   size: 0x280 (640 bytes)
//======================================================================
int __fastcall sub_33EDD0(_DWORD *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int i; // r0
  int v9; // r3
  int result; // r0
  int *v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r3
  int j; // r6
  _BYTE *v16; // r3
  char v17; // r2
  int v18; // r3
  _BYTE *v19; // r3
  int v20; // r6
  _BYTE *v21; // r3
  _BYTE *v22; // r1
  unsigned int v23; // r0
  int v24; // r3
  _BOOL4 v25; // r3
  unsigned int v26; // r6
  int v27; // r3
  int v28; // r2
  int v29; // [sp+Ch] [bp-20h]
  int v30; // [sp+10h] [bp-1Ch]
  int v31; // [sp+14h] [bp-18h]
  int v33[3]; // [sp+20h] [bp-Ch] BYREF

  v29 = a4;
  v31 = a1[85];
  for ( i = (*(int (__fastcall **)(int, int, int, int *))(a2 + 12))(a2, a4, a5, v33);
        ;
        i = (*(int (__fastcall **)(int, int, int, int *))(a2 + 12))(a2, v33[0], a5, v33) )
  {
    v9 = i;
    if ( i == 6 )
    {
      if ( sub_33E290(a6, a2, v29, v33[0]) == 0 )
        return 1;
      goto LABEL_76;
    }
    if ( i <= 6 )
    {
      if ( i != -3 )
      {
        if ( i > -3 )
        {
          v11 = a1 + 36;
          if ( i == -1 )
          {
            v12 = *v11;
            result = 4;
            goto LABEL_74;
          }
          if ( i == 0 )
          {
            result = 4;
            if ( a2 == *v11 )
              a1[68] = v33[0];
            return result;
          }
        }
        else
        {
          result = 0;
          if ( v9 == -4 )
            return result;
        }
LABEL_73:
        v12 = a1[36];
        result = 23;
LABEL_74:
        if ( a2 == v12 )
          a1[68] = v29;
        return result;
      }
      v33[0] = v29 + *(_DWORD *)(a2 + 64);
      goto LABEL_40;
    }
    if ( i != 9 )
      break;
    v20 = (*(unsigned __int8 (__fastcall **)(int, int, int))(a2 + 44))(
            a2,
            v29 + *(_DWORD *)(a2 + 64),
            v33[0] - *(_DWORD *)(a2 + 64));
    if ( v20 != 0 )
    {
      if ( a6[3] == a6[2] && sub_33E194(a6) == 0 )
        return 1;
      v21 = (_BYTE *)a6[3];
      a6[3] = (int)(v21 + 1);
      *v21 = v20;
    }
    else
    {
      v22 = (_BYTE *)sub_33E2CE(a1 + 106, a2, v29 + *(_DWORD *)(a2 + 64), v33[0] - *(_DWORD *)(a2 + 64));
      if ( v22 == nullptr )
        return 1;
      v23 = sub_33EA04((int *)v31, v22, 0);
      a1[109] = a1[110];
      if ( a6 == (int *)(v31 + 80) )
      {
        if ( *(_BYTE *)(v31 + 130) != 0 )
          v24 = a1[71];
        else
          v24 = *(unsigned __int8 *)(v31 + 129);
        v25 = v24 == 0;
      }
      else
      {
        v25 = true;
        if ( *(_BYTE *)(v31 + 129) != 0 )
          v25 = *(unsigned __int8 *)(v31 + 130) != 0;
      }
      if ( v25 )
      {
        if ( v23 == 0 )
          return 11;
        if ( *(_BYTE *)(v23 + 34) == 0 )
          return 24;
      }
      else if ( v23 == 0 )
      {
        goto LABEL_76;
      }
      v26 = v23 + 1;
      if ( *(_BYTE *)(v23 + 32) != 0 )
      {
        v12 = a1[36];
        result = 12;
        goto LABEL_74;
      }
      if ( *(_DWORD *)(v23 + 28) != 0 )
      {
        v12 = a1[36];
        result = 15;
        goto LABEL_74;
      }
      v27 = *(_DWORD *)(v23 + 4);
      if ( v27 == 0 )
      {
        v12 = a1[36];
        result = 16;
        goto LABEL_74;
      }
      v28 = *(_DWORD *)(v23 + 8);
      *(_BYTE *)(v23 + 32) = 1;
      result = sub_33EDD0(a1, a1[56], a3, v27, v27 + v28, a6);
      *(_BYTE *)(v26 + 31) = 0;
      if ( result != 0 )
        return result;
    }
LABEL_76:
    v29 = v33[0];
  }
  if ( i <= 9 )
  {
    if ( i != 7 )
      goto LABEL_73;
    goto LABEL_40;
  }
  if ( i != 10 )
  {
    if ( i != 39 )
      goto LABEL_73;
LABEL_40:
    v18 = a6[3];
    if ( a3 != 0 || v18 != a6[4] && *(_BYTE *)(v18 - 1) != 32 )
    {
      if ( v18 == a6[2] && sub_33E194(a6) == 0 )
        return 1;
      v19 = (_BYTE *)a6[3];
      a6[3] = (int)(v19 + 1);
      *v19 = 32;
    }
    goto LABEL_76;
  }
  v13 = (*(int (__fastcall **)(int, int))(a2 + 40))(a2, v29);
  if ( v13 < 0 )
    goto LABEL_28;
  if ( a3 == 0 && v13 == 32 )
  {
    v14 = a6[3];
    if ( v14 == a6[4] || *(_BYTE *)(v14 - 1) == 32 )
      goto LABEL_76;
  }
  v30 = XmlUtf8Encode();
  if ( v30 != 0 )
  {
    for ( j = 0; j < v30; ++j )
    {
      if ( a6[3] == a6[2] && sub_33E194(a6) == 0 )
        return 1;
      v16 = (_BYTE *)a6[3];
      a6[3] = (int)(v16 + 1);
      v17 = *((_BYTE *)&v33[1] + j);
      *v16 = v17;
    }
    goto LABEL_76;
  }
LABEL_28:
  if ( a2 == a1[36] )
    a1[68] = v29;
  return 14;
}


//======================================================================
// sub_33F050
// address: 0x0033F050   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_33F050(_DWORD *a1, int a2, int a3, int a4, int a5, int *a6)
{
  int result; // r0
  int v8; // r3
  _BYTE *v9; // r3
  _BYTE *v10; // r3

  result = sub_33EDD0(a1, a2, a3, a4, a5, a6);
  if ( result == 0 )
  {
    if ( a3 == 0 )
    {
      v8 = a6[3];
      if ( v8 != a6[4] )
      {
        v9 = (_BYTE *)(v8 - 1);
        if ( *v9 == 32 )
          a6[3] = (int)v9;
      }
    }
    if ( a6[3] != a6[2] || sub_33E194(a6) != 0 )
    {
      v10 = (_BYTE *)a6[3];
      a6[3] = (int)(v10 + 1);
      *v10 = 0;
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}


//======================================================================
// sub_33F09E
// address: 0x0033F09E   size: 0x48 (72 bytes)
//======================================================================
_DWORD *__fastcall sub_33F09E(int a1, int a2, int a3, int a4)
{
  int v4; // r7
  int *v5; // r4
  _BYTE *v6; // r6
  _DWORD *v8; // r0
  _DWORD *v9; // r5

  v4 = a1 + 252;
  v5 = *(int **)(a1 + 340);
  v6 = (_BYTE *)sub_33E2CE(v5 + 20, a2, a3, a4);
  if ( v6 == nullptr )
    return nullptr;
  v8 = (_DWORD *)sub_33EA04(v5 + 5, v6, 0x18u);
  v9 = v8;
  if ( v8 == nullptr )
    return nullptr;
  if ( (_BYTE *)*v8 == v6 )
  {
    v5[24] = v5[23];
    if ( sub_33EC10(*(_DWORD *)(v4 + 88), (int)v8) != 0 )
      return v9;
    return nullptr;
  }
  v5[23] = v5[24];
  return v9;
}


//======================================================================
// sub_33F0E8
// address: 0x0033F0E8   size: 0x6AC (1708 bytes)
//======================================================================
int __fastcall sub_33F0E8(int a1, int a2, int a3, char **a4, int *a5)
{
  int v5; // r4
  _BYTE *v8; // r1
  int result; // r0
  int v10; // r5
  int v11; // r1
  int v12; // r0
  int v13; // r4
  int v14; // r0
  char **v15; // r0
  int v16; // r4
  char *v17; // r3
  int v18; // r2
  int v19; // r0
  int v20; // r3
  int v21; // r2
  int v22; // r2
  int v23; // r0
  _DWORD *v24; // r1
  char *v25; // r3
  char **v26; // r3
  char *v27; // r2
  int i; // r3
  int j; // r4
  int v30; // r0
  char **v31; // r2
  _BYTE *v32; // r5
  _BYTE *v33; // r3
  char *v34; // r1
  int v35; // r3
  char v36; // r2
  int v37; // r3
  unsigned int v38; // r3
  int v39; // r0
  int v40; // r2
  int k; // r3
  int v42; // r3
  char *v43; // r7
  int v44; // r4
  char *v45; // r3
  int v46; // r2
  _BYTE *v47; // r3
  _BYTE *v48; // r3
  char v49; // r2
  signed int v50; // r2
  int v51; // r3
  _BYTE *v52; // r1
  _BYTE *n; // r0
  _DWORD *v54; // r0
  char *v55; // r3
  char *v56; // r4
  _BYTE *v57; // r3
  char v58; // r2
  char *v59; // r2
  int ii; // r3
  int v61; // r2
  int v62; // r4
  int v63; // r3
  size_t v64; // r5
  int v65; // r3
  char *v66; // r3
  size_t v67; // r0
  int v68; // r3
  signed int v69; // r7
  void *v70; // r0
  void *v71; // r7
  const void *v72; // r1
  _DWORD *jj; // r3
  int v74; // r0
  char *v75; // r7
  char *v76; // r7
  int v77; // [sp+8h] [bp-74h]
  int v78; // [sp+38h] [bp-44h]
  char *v79; // [sp+38h] [bp-44h]
  int v81; // [sp+3Ch] [bp-40h]
  int m; // [sp+3Ch] [bp-40h]
  char **v83; // [sp+40h] [bp-3Ch]
  int v84; // [sp+40h] [bp-3Ch]
  signed int v85; // [sp+44h] [bp-38h]
  size_t v86; // [sp+44h] [bp-38h]
  char **v87; // [sp+48h] [bp-34h]
  int v88; // [sp+4Ch] [bp-30h]
  int v89; // [sp+4Ch] [bp-30h]
  int v90; // [sp+50h] [bp-2Ch]
  int v91; // [sp+50h] [bp-2Ch]
  int v92; // [sp+54h] [bp-28h]
  int v93; // [sp+54h] [bp-28h]
  int v94; // [sp+58h] [bp-24h]
  int v95; // [sp+58h] [bp-24h]
  _DWORD *v96; // [sp+5Ch] [bp-20h]
  int v98; // [sp+64h] [bp-18h]
  int *v99; // [sp+68h] [bp-14h]
  int v100; // [sp+6Ch] [bp-10h]

  v5 = a1 + 252;
  v99 = *(int **)(a1 + 340);
  v96 = (_DWORD *)sub_33EA04(v99 + 5, *a4, 0);
  if ( v96 == nullptr )
  {
    v8 = (_BYTE *)sub_33E482(v99 + 20, *a4);
    if ( v8 == nullptr )
      return 1;
    v96 = (_DWORD *)sub_33EA04(v99 + 5, v8, 0x18u);
    if ( v96 == nullptr || *(_BYTE *)(a1 + 232) != 0 && sub_33EC10(*(_DWORD *)(v5 + 88), (int)v96) == 0 )
      return 1;
  }
  v90 = v96[3];
  v92 = (*(int (__fastcall **)(int, int, _DWORD, _DWORD))(a2 + 36))(
          a2,
          a3,
          *(_DWORD *)(a1 + 364),
          *(_DWORD *)(a1 + 376));
  v10 = *(_DWORD *)(a1 + 364);
  if ( v92 + v90 > v10 )
  {
    v11 = v92 + v90 + 16;
    *(_DWORD *)(a1 + 364) = v11;
    v12 = (*(int (__fastcall **)(_DWORD, int))(a1 + 16))(*(_DWORD *)(a1 + 376), 16 * v11);
    if ( v12 == 0 )
      return 1;
    *(_DWORD *)(a1 + 376) = v12;
    if ( v92 > v10 )
      (*(void (__fastcall **)(int, int, int, int))(a2 + 36))(a2, a3, v92, v12);
  }
  v85 = 0;
  v83 = *(char ***)(a1 + 376);
  v81 = 0;
  v78 = 0;
  while ( 1 )
  {
    if ( v81 >= v92 )
    {
      *(_DWORD *)(a1 + 368) = v78;
      v26 = (char **)v96[2];
      if ( v26 != nullptr && (v27 = *v26, *(*v26 - 1) != 0) )
      {
        for ( i = 0; ; i += 2 )
        {
          if ( i >= v78 )
            goto LABEL_46;
          if ( v83[i] == v27 )
            break;
        }
        *(_DWORD *)(a1 + 372) = i;
      }
      else
      {
        *(_DWORD *)(a1 + 372) = -1;
      }
LABEL_46:
      for ( j = 0; ; ++j )
      {
        if ( j >= v90 )
        {
          v83[v78] = nullptr;
          if ( v85 == 0 )
          {
            m = 0;
            goto LABEL_116;
          }
          v36 = *(_BYTE *)(a1 + 388);
          v37 = *(_DWORD *)(a1 + 384);
          if ( (2 * v85) >> v36 == 0 )
          {
            v89 = 1 << v36;
            if ( v37 == 0 )
              goto LABEL_69;
            goto LABEL_73;
          }
          while ( 1 )
          {
            v38 = (unsigned __int8)(v36 + 1);
            if ( v85 >> v36 == 0 )
              break;
            ++v36;
          }
          *(_BYTE *)(a1 + 388) = v38;
          if ( v38 <= 2 )
            *(_BYTE *)(a1 + 388) = 3;
          v89 = 1 << *(_BYTE *)(a1 + 388);
          v39 = (*(int (__fastcall **)(_DWORD, int))(a1 + 16))(*(_DWORD *)(a1 + 380), 12 * v89);
          if ( v39 == 0 )
            return 1;
          *(_DWORD *)(a1 + 380) = v39;
LABEL_69:
          v40 = 12 * v89;
          for ( k = v89; ; --k )
          {
            v40 -= 12;
            if ( k == 0 )
              break;
            *(_DWORD *)(*(_DWORD *)(a1 + 380) + v40) = -1;
          }
          v37 = -1;
LABEL_73:
          v42 = v37 - 1;
          *(_DWORD *)(a1 + 384) = v42;
          v100 = v42;
          v98 = v89 - 1;
          v87 = v83;
          for ( m = 0; m < v78; m += 2 )
          {
            v43 = *v87;
            v44 = 0;
            v45 = *v87 - 1;
            v46 = (unsigned __int8)*v45;
            *v45 = 0;
            if ( v46 == 2 )
            {
              v91 = *(_DWORD *)(*(_DWORD *)(sub_33EA04(v99 + 10, v43, 0) + 4) + 4);
              if ( v91 == 0 )
                return 27;
              v93 = 0;
              while ( v44 < *(_DWORD *)(v91 + 20) )
              {
                v94 = *(unsigned __int8 *)(*(_DWORD *)(v91 + 16) + v44);
                if ( *(_DWORD *)(a1 + 412) == *(_DWORD *)(a1 + 408) && sub_33E194((int *)(a1 + 400)) == 0 )
                  return 1;
                v47 = *(_BYTE **)(a1 + 412);
                ++v44;
                *(_DWORD *)(a1 + 412) = v47 + 1;
                *v47 = v94;
                v93 = v94 ^ (1000003 * v93);
              }
              do
                ++v43;
              while ( *(v43 - 1) != 58 );
              while ( 1 )
              {
                v95 = (unsigned __int8)*v43;
                if ( *(_DWORD *)(a1 + 412) == *(_DWORD *)(a1 + 408) && sub_33E194((int *)(a1 + 400)) == 0 )
                  return 1;
                v48 = *(_BYTE **)(a1 + 412);
                *(_DWORD *)(a1 + 412) = v48 + 1;
                v49 = *v43++;
                *v48 = v49;
                v50 = (unsigned __int8)*(v43 - 1);
                v93 = v95 ^ (1000003 * v93);
                if ( *(v43 - 1) == 0 )
                {
                  v51 = v98 & v93;
                  while ( 1 )
                  {
                    v77 = 12 * v51;
                    v54 = (_DWORD *)(*(_DWORD *)(a1 + 380) + 12 * v51);
                    if ( *v54 != v100 )
                      break;
                    if ( v93 == v54[1] )
                    {
                      v52 = *(_BYTE **)(a1 + 416);
                      for ( n = (_BYTE *)v54[2]; *n == *v52; ++n )
                      {
                        if ( *n == 0 )
                          return 8;
                        ++v52;
                      }
                      if ( *v52 != 0 )
                        goto LABEL_98;
                      return 8;
                    }
LABEL_98:
                    if ( v50 == 0 )
                      v50 = ((v93 & (unsigned int)~v98) >> (*(_BYTE *)(a1 + 388) - 1))
                          & (unsigned __int8)((unsigned int)(v89 - 1) >> 2)
                          | 1;
                    if ( v51 >= v50 )
                      v51 -= v50;
                    else
                      v51 += v89 - v50;
                  }
                  if ( *(_BYTE *)(a1 + 233) != 0 )
                  {
                    *(_BYTE *)(*(_DWORD *)(a1 + 412) - 1) = *(_BYTE *)(a1 + 456);
                    v56 = **(char ***)v91;
                    while ( *(_DWORD *)(a1 + 412) != *(_DWORD *)(a1 + 408) || sub_33E194((int *)(a1 + 400)) != 0 )
                    {
                      v57 = *(_BYTE **)(a1 + 412);
                      *(_DWORD *)(a1 + 412) = v57 + 1;
                      v58 = *v56++;
                      *v57 = v58;
                      if ( *(v56 - 1) == 0 )
                        goto LABEL_108;
                    }
                    return 1;
                  }
LABEL_108:
                  v55 = *(char **)(a1 + 416);
                  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 412);
                  *v87 = v55;
                  *(_DWORD *)(*(_DWORD *)(a1 + 380) + v77) = v100;
                  *(_DWORD *)(*(_DWORD *)(a1 + 380) + v77 + 4) = v93;
                  *(_DWORD *)(*(_DWORD *)(a1 + 380) + v77 + 8) = v55;
                  if ( --v85 != 0 )
                    break;
                  m += 2;
                  goto LABEL_116;
                }
              }
            }
            v87 += 2;
          }
LABEL_116:
          while ( m < v78 )
          {
            v59 = v83[m];
            m += 2;
            *(v59 - 1) = 0;
          }
          for ( ii = *a5; ii != 0; ii = *(_DWORD *)(ii + 4) )
            *(_BYTE *)(**(_DWORD **)(ii + 12) - 1) = 0;
          result = 0;
          if ( *(_BYTE *)(a1 + 232) != 0 )
          {
            v61 = v96[1];
            if ( v61 != 0 )
            {
              v62 = *(_DWORD *)(v61 + 4);
              if ( v62 != 0 )
              {
                v79 = *a4;
                do
                  v63 = (unsigned __int8)*v79++;
                while ( v63 != 58 );
LABEL_129:
                v64 = 0;
                if ( *(_BYTE *)(a1 + 233) != 0 )
                {
                  v65 = **(_DWORD **)v62;
                  if ( v65 != 0 )
                  {
                    do
                      ++v64;
                    while ( *(_BYTE *)(v65 + v64 - 1) != 0 );
                  }
                }
                a4[1] = v79;
                a4[4] = *(char **)(v62 + 20);
                v66 = **(char ***)v62;
                a4[5] = (char *)v64;
                a4[2] = v66;
                v86 = 0;
                do
                {
                  v67 = v86 + 1;
                  v68 = (unsigned __int8)v79[v86++];
                }
                while ( v68 != 0 );
                v69 = v67 + *(_DWORD *)(v62 + 20) + v64;
                if ( v69 <= *(_DWORD *)(v62 + 24) )
                {
LABEL_142:
                  v75 = (char *)(*(_DWORD *)(v62 + 16) + *(_DWORD *)(v62 + 20));
                  j_memcpy(v75, v79, v86);
                  if ( v64 != 0 )
                  {
                    v76 = &v75[v86 - 1];
                    *v76 = *(_BYTE *)(a1 + 456);
                    j_memcpy(v76 + 1, **(const void ***)v62, v64);
                  }
                  *a4 = *(char **)(v62 + 16);
                  return 0;
                }
                else
                {
                  v84 = v69 + 24;
                  v70 = (void *)(*(int (__fastcall **)(int))(a1 + 12))(v69 + 24);
                  v71 = v70;
                  if ( v70 != nullptr )
                  {
                    v72 = *(const void **)(v62 + 16);
                    *(_DWORD *)(v62 + 24) = v84;
                    j_memcpy(v70, v72, *(_DWORD *)(v62 + 20));
                    for ( jj = *(_DWORD **)(a1 + 348); ; jj = (_DWORD *)*jj )
                    {
                      v74 = *(_DWORD *)(v62 + 16);
                      if ( jj == nullptr )
                        break;
                      if ( jj[3] == v74 )
                        jj[3] = v71;
                    }
                    (*(void (__fastcall **)(int))(a1 + 20))(v74);
                    *(_DWORD *)(v62 + 16) = v71;
                    goto LABEL_142;
                  }
                  return 1;
                }
              }
              else
              {
                return 27;
              }
            }
            else
            {
              v62 = v99[34];
              if ( v62 != 0 )
              {
                v79 = *a4;
                goto LABEL_129;
              }
              return 0;
            }
          }
          return result;
        }
        v30 = v96[5] + 12 * j;
        v31 = *(char ***)v30;
        v32 = (_BYTE *)(**(_DWORD **)v30 - 1);
        if ( *v32 == 0 )
        {
          v33 = *(_BYTE **)(v30 + 8);
          if ( v33 != nullptr )
          {
            v34 = v31[1];
            if ( v34 == nullptr )
            {
              *v32 = 1;
              goto LABEL_58;
            }
            if ( *((_BYTE *)v31 + 9) == 0 )
            {
              *v32 = 2;
              ++v85;
LABEL_58:
              v35 = v78;
              v83[v35] = **(char ***)v30;
              v78 += 2;
              v83[v35 + 1] = *(char **)(v30 + 8);
              continue;
            }
            if ( *v33 == 0 && *(_DWORD *)v34 != 0 )
              return 28;
            result = sub_33E680(a1, v34, (int)v31, v33, a5);
            if ( result != 0 )
              return result;
          }
        }
      }
    }
    v13 = *(_DWORD *)(*(_DWORD *)(a1 + 376) + 16 * v81);
    v14 = (*(int (__fastcall **)(int, int))(a2 + 28))(a2, v13);
    v15 = (char **)sub_33EC96(a1, a2, v13, v13 + v14);
    v16 = (int)v15;
    if ( v15 == nullptr )
      return 1;
    v17 = *v15 - 1;
    if ( *v17 != 0 )
    {
      result = 8;
      if ( a2 == *(_DWORD *)(a1 + 144) )
        *(_DWORD *)(a1 + 272) = *(_DWORD *)(*(_DWORD *)(a1 + 376) + 16 * v81);
      return result;
    }
    v18 = 1;
    *v17 = 1;
    v88 = v78;
    v83[v78] = *v15;
    v19 = *(_DWORD *)(a1 + 376) + 16 * v81;
    v20 = *(unsigned __int8 *)(v19 + 12);
    if ( *(_BYTE *)(v19 + 12) != 0 )
    {
      v23 = sub_33E2CE((int *)(a1 + 400), a2, *(_DWORD *)(v19 + 4), *(_DWORD *)(v19 + 8));
      v83[v88 + 1] = (char *)v23;
      if ( v23 == 0 )
        return 1;
      v22 = *(_DWORD *)(a1 + 412);
    }
    else
    {
      if ( *(_BYTE *)(v16 + 8) != 0 )
      {
        while ( v20 < v90 )
        {
          v21 = v96[5] + 12 * v20;
          if ( v16 == *(_DWORD *)v21 )
          {
            v18 = *(unsigned __int8 *)(v21 + 4);
            goto LABEL_24;
          }
          ++v20;
        }
        v18 = 1;
      }
LABEL_24:
      result = sub_33F050((_DWORD *)a1, a2, v18, *(_DWORD *)(v19 + 4), *(_DWORD *)(v19 + 8), (int *)(a1 + 400));
      if ( result != 0 )
        return result;
      v83[v88 + 1] = *(char **)(a1 + 416);
      v22 = *(_DWORD *)(a1 + 412);
    }
    *(_DWORD *)(a1 + 416) = v22;
    v24 = *(_DWORD **)(v16 + 4);
    if ( v24 == nullptr )
    {
      v78 += 2;
      goto LABEL_37;
    }
    if ( *(_BYTE *)(v16 + 9) == 0 )
    {
      v78 += 2;
      *(_BYTE *)(*(_DWORD *)v16 - 1) = 2;
      ++v85;
      goto LABEL_37;
    }
    v25 = v83[v88 + 1];
    if ( *v25 == 0 && *v24 != 0 )
      return 28;
    result = sub_33E680(a1, v24, v16, v25, a5);
    if ( result != 0 )
      return result;
LABEL_37:
    ++v81;
  }
}


//======================================================================
// sub_33F798
// address: 0x0033F798   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_33F798(
        int *a1,
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
        void *a20,
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
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46)
{
  int v47; // r3
  int v48; // r2
  int *v50; // [sp+50h] [bp-3Ch]

  v47 = (int)(a1 + 63);
  v48 = a1[36];
  if ( a3 == v48 )
  {
    v50 = a1 + 68;
  }
  else
  {
    v50 = (int *)a1[71];
    v47 = (int)(v50 + 1);
  }
  *v50 = a4;
  return sub_33F7DC(
           a4,
           a2,
           v48,
           v47,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           a16,
           a17,
           a18,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39,
           a40,
           a41,
           a42,
           a43,
           a44,
           a45,
           a46);
}


//======================================================================
// sub_33F7DC
// address: 0x0033F7DC   size: 0x4E (78 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0033F7DC  LDR     R1, [SP,#arg_64]
//   0033F7DE  LDR     R5, [R7,#4]
//   0033F7E0  MOVS    R0, R7
//   0033F7E2  STR     R1, [SP,#arg_68]
//   0033F7E4  LDR     R2, [SP,#arg_A0]
//   0033F7E6  ADD     R3, SP, #arg_68
//   0033F7E8  BLX     R5
//   0033F7EA  LDR     R1, [SP,#arg_68]
//   0033F7EC  LDR     R5, [SP,#arg_60]
//   0033F7EE  ADDS    R0, #5
//   0033F7F0  STR     R1, [R5]
//   0033F7F2  CMP     R0, #0x12
//   0033F7F4  BLS     loc_33F7FA
//   0033F7F6  BL      sub_340174
//   0033F7FA  BL      __gnu_thumb1_case_uhi; switch 19 cases
//   0033F7FE  DCW 0x444; jump table for switch statement
//   0033F800  DCW 0x41
//   0033F802  DCW 0x13
//   0033F804  DCW 0x5C
//   0033F806  DCW 0x56
//   0033F808  DCW 0x50
//   0033F80A  DCW 0x27A
//   0033F80C  DCW 0x27A
//   0033F80E  DCW 0x2FC
//   0033F810  DCW 0x2FC
//   0033F812  DCW 0x36A
//   0033F814  DCW 0x411
//   0033F816  DCW 0x408
//   0033F818  DCW 0x41F
//   0033F81A  DCW 0x62
//   0033F81C  DCW 0x3EF
//   0033F81E  DCW 0x4AA
//   0033F820  DCW 0x4D1
//   0033F822  DCW 0x4B4
//   0033F824  LDR     R5, [SP,#arg_5C]; jumptable 0033F7FA case 2
//   0033F826  CMP     R5, #0
//   0033F828  BEQ     loc_33F830

//======================================================================
// sub_33F82A
// address: 0x0033F82A   size: 0x4A (74 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0033F82A  LDR     R0, [SP,#arg_64]
//   0033F82C  BL      sub_340198
//   0033F830  LDR     R5, [SP,#arg_A0]
//   0033F832  LDR     R0, [SP,#arg_60]
//   0033F834  STR     R5, [R0]
//   0033F836  LDR     R3, [R4,#0x3C]
//   0033F838  CMP     R3, #0
//   0033F83A  BEQ     loc_33F84A
//   0033F83C  MOVS    R2, #0xA
//   0033F83E  ADD     R1, SP, #arg_70
//   0033F840  STRB    R2, [R1]
//   0033F842  LDR     R0, [R4,#4]
//   0033F844  MOVS    R2, #1
//   0033F846  BLX     R3
//   0033F848  B       loc_33F85C
//   0033F84A  LDR     R1, [R4,#0x50]
//   0033F84C  CMP     R1, #0
//   0033F84E  BEQ     loc_33F85C
//   0033F850  MOVS    R0, R4
//   0033F852  MOVS    R1, R7
//   0033F854  LDR     R2, [SP,#arg_64]
//   0033F856  LDR     R3, [SP,#arg_A0]
//   0033F858  BL      sub_33DC04
//   0033F85C  LDR     R5, [SP,#arg_54]
//   0033F85E  CMP     R5, #0
//   0033F860  BNE     loc_33F866
//   0033F862  BL      sub_3400EC
//   0033F866  ADDS    R4, #0xFC
//   0033F868  LDR     R3, [R4,#0x2C]
//   0033F86A  LDR     R5, [SP,#arg_54]
//   0033F86C  CMP     R3, R5
//   0033F86E  BEQ     sub_33F874
//   0033F870  BL      sub_340104

//======================================================================
// sub_33F874
// address: 0x0033F874   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_33F874(
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
        int a31,
        int a32,
        int a33,
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int a44,
        int a45,
        _DWORD *a46)
{
  *a46 = a45;
  return sub_33F87A();
}


//======================================================================
// sub_33F87A
// address: 0x0033F87A   size: 0x24 (36 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0033F87A  MOVS    R0, #0
//   0033F87C  BL      sub_3401AA
//   0033F880  LDR     R5, [SP,#arg_5C]; jumptable 0033F7FA case 1
//   0033F882  CMP     R5, #0
//   0033F884  BNE     sub_33F82A
//   0033F886  LDR     R5, [SP,#arg_54]
//   0033F888  CMP     R5, #0
//   0033F88A  BGT     loc_33F890
//   0033F88C  BL      sub_3400EC
//   0033F890  ADDS    R4, #0xFC
//   0033F892  LDR     R3, [R4,#0x2C]
//   0033F894  CMP     R3, R5
//   0033F896  BEQ     loc_33F89C
//   0033F898  BL      sub_340104
//   0033F89C  B       sub_33F82A
