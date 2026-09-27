// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_350000

//======================================================================
// sub_350028
// address: 0x00350028   size: 0x140 (320 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00350028  PUSH    {R4-R7,LR}
//   0035002A  MOVS    R4, R0
//   0035002C  LDR     R0, [R0,#0x28]
//   0035002E  SUB     SP, SP, #0x14
//   00350030  MOVS    R7, R1
//   00350032  STR     R3, [SP,#0x14+var_8]
//   00350034  CMP     R0, #0
//   00350036  BNE     loc_35008A
//   00350038  CMP     R2, #0
//   0035003A  BNE     loc_350042
//   0035003C  STR     R2, [R3]
//   0035003E  MOVS    R0, R2
//   00350040  B       loc_350164
//   00350042  LDR     R6, =(dword_471638 - 0x35004C)
//   00350044  LDR     R1, [R4,#0x18]
//   00350046  LDRB    R2, [R4,#0x1C]
//   00350048  ADD     R6, PC; dword_471638
//   0035004A  ADDS    R1, #0x28 ; '('
//   0035004C  LDR     R0, [R4,#0x14]
//   0035004E  LDR     R3, [R6,#(off_4716B0 - 0x471638)]
//   00350050  BLX     R3
//   00350052  SUBS    R5, R0, #0
//   00350054  BNE     loc_35005A
//   00350056  MOVS    R0, #7
//   00350058  B       loc_350164
//   0035005A  LDR     R6, [R6,#(off_4716B4 - 0x471638)]
//   0035005C  LDR     R3, [R4,#0x10]
//   0035005E  STR     R6, [SP,#0x14+var_10]
//   00350060  CMP     R3, #0
//   00350062  BGE     loc_35007E
//   00350064  ASRS    R1, R3, #0x1F
//   00350066  MOVS    R0, R3
//   00350068  LDR     R3, =0xFFFFFFFF
//   0035006A  LDR     R2, =0xFFFFFC00
//   0035006C  BL      __aeabi_lmul
//   00350070  LDR     R3, [R4,#0x18]
//   00350072  LDR     R6, [R4,#0x14]
//   00350074  ADDS    R2, R6, R3
//   00350076  ASRS    R3, R2, #0x1F
//   00350078  BL      j___aeabi_ldivmod
//   0035007C  MOVS    R3, R0
//   0035007E  MOVS    R0, R5
//   00350080  MOVS    R1, R3
//   00350082  LDR     R6, [SP,#0x14+var_10]
//   00350084  BLX     R6
//   00350086  STR     R5, [R4,#0x28]
//   00350088  B       loc_350092
//   0035008A  MOVS    R6, #0
//   0035008C  STR     R6, [SP,#0x14+var_C]
//   0035008E  CMP     R2, R6
//   00350090  BEQ     loc_350096
//   00350092  LDRB    R6, [R4,#0x1D]
//   00350094  STR     R6, [SP,#0x14+var_C]
//   00350096  LDR     R3, =(dword_471638 - 0x3500A0)
//   00350098  LDR     R0, [R4,#0x28]
//   0035009A  MOVS    R1, R7
//   0035009C  ADD     R3, PC; dword_471638
//   0035009E  ADDS    R3, #(dword_471640 - 0x471638)
//   003500A0  LDR     R3, [R3,#(off_4716BC - 0x471640)]
//   003500A2  LDR     R2, [SP,#0x14+var_C]
//   003500A4  BLX     R3
//   003500A6  SUBS    R6, R0, #0
//   003500A8  BNE     loc_3500FC
//   003500AA  LDR     R6, [SP,#0x14+var_C]
//   003500AC  CMP     R6, #1
//   003500AE  BEQ     loc_3500B4
//   003500B0  MOVS    R5, #0
//   003500B2  B       loc_350142
//   003500B4  LDR     R1, [R4,#8]
//   003500B6  MOVS    R3, #4
//   003500B8  CMP     R1, #0
//   003500BA  BEQ     loc_3500CE
//   003500BC  MOVS    R0, #0x1A
//   003500BE  LDRSH   R2, [R1,R0]
//   003500C0  CMP     R2, #0
//   003500C2  BEQ     loc_3500C8
//   003500C4  LDR     R1, [R1,#0x24]
//   003500C6  B       loc_3500B8
//   003500C8  LDRH    R2, [R1,#0x18]
//   003500CA  TST     R2, R3
//   003500CC  BNE     loc_3500C4
//   003500CE  STR     R1, [R4,#8]
//   003500D0  CMP     R1, #0
//   003500D2  BNE     loc_350156
//   003500D4  LDR     R1, [R4,#4]
//   003500D6  CMP     R1, #0
//   003500D8  BNE     loc_3500F0
//   003500DA  LDR     R3, =(dword_471638 - 0x3500E4)
//   003500DC  LDR     R0, [R4,#0x28]
//   003500DE  MOVS    R1, R7
//   003500E0  ADD     R3, PC; dword_471638
//   003500E2  ADDS    R3, #(dword_471640 - 0x471638)
//   003500E4  LDR     R3, [R3,#(off_4716BC - 0x471640)]
//   003500E6  MOVS    R2, #2
//   003500E8  BLX     R3
//   003500EA  SUBS    R6, R0, #0
//   003500EC  BEQ     loc_3500B0
//   003500EE  B       loc_3500FC
//   003500F0  MOVS    R2, #0x1A
//   003500F2  LDRSH   R3, [R1,R2]
//   003500F4  CMP     R3, #0
//   003500F6  BEQ     loc_350156
//   003500F8  LDR     R1, [R1,#0x24]
//   003500FA  B       loc_3500D6
//   003500FC  LDR     R5, [R6,#4]
//   003500FE  LDR     R3, [R5]
//   00350100  STR     R3, [SP,#0x14+var_10]
//   00350102  CMP     R3, #0
//   00350104  BNE     loc_350128
//   00350106  MOVS    R1, R3; int
//   00350108  MOVS    R2, #0x28 ; '('; size_t
//   0035010A  MOVS    R0, R5; void *
//   0035010C  BL      j_memset
//   00350110  STR     R6, [R5]
//   00350112  LDR     R6, [R6]
//   00350114  MOVS    R0, R5
//   00350116  ADDS    R0, #0x28 ; '('; void *
//   00350118  STR     R6, [R5,#4]
//   0035011A  STR     R0, [R5,#8]
//   0035011C  LDR     R1, [SP,#0x14+var_10]; int
//   0035011E  LDR     R2, [R4,#0x18]; size_t
//   00350120  BL      j_memset
//   00350124  STR     R4, [R5,#0x1C]
//   00350126  STR     R7, [R5,#0x14]
//   00350128  MOVS    R6, #0x1A
//   0035012A  LDRSH   R3, [R5,R6]
//   0035012C  CMP     R3, #0
//   0035012E  BNE     loc_350136
//   00350130  LDR     R3, [R4,#0xC]
//   00350132  ADDS    R3, #1
//   00350134  STR     R3, [R4,#0xC]
//   00350136  LDRH    R3, [R5,#0x1A]
//   00350138  ADDS    R3, #1
//   0035013A  STRH    R3, [R5,#0x1A]
//   0035013C  CMP     R7, #1
//   0035013E  BNE     loc_350142
//   00350140  STR     R5, [R4,#0x2C]
//   00350142  LDR     R6, [SP,#0x14+var_8]
//   00350144  MOVS    R0, #0
//   00350146  STR     R5, [R6]
//   00350148  CMP     R5, R0
//   0035014A  BNE     loc_350164
//   0035014C  LDR     R6, [SP,#0x14+var_C]
//   0035014E  CMP     R6, R0
//   00350150  BEQ     loc_350154
//   00350152  B       loc_350056
//   00350154  B       loc_350164
//   00350156  LDR     R0, [R4,#0x24]
//   00350158  LDR     R2, [R4,#0x20]
//   0035015A  BLX     R2
//   0035015C  CMP     R0, #0
//   0035015E  BEQ     loc_3500DA
//   00350160  CMP     R0, #5
//   00350162  BEQ     loc_3500DA
//   00350164  ADD     SP, SP, #0x14
//   00350166  POP     {R4-R7,PC}

//======================================================================
// sub_350180
// address: 0x00350180   size: 0x16 (22 bytes)
//======================================================================
void *__fastcall sub_350180(_DWORD *a1)
{
  void *result; // r0

  result = j_memset(a1, 0, 0x28u);
  *a1 = &unk_45465C;
  return result;
}


//======================================================================
// sub_35019C
// address: 0x0035019C   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_35019C(int a1, unsigned int a2)
{
  int *v3; // r0
  int v4; // r5
  signed __int64 v5; // r0
  int v6; // r0
  signed int v8; // [sp+14h] [bp-18h]
  signed __int64 v10; // [sp+20h] [bp-Ch]

  v3 = *(int **)(a1 + 60);
  v4 = *v3;
  if ( *v3 != 0 )
  {
    v4 = 0;
    if ( (unsigned int)*(unsigned __int8 *)(a1 + 15) - 1 > 2 )
    {
      v8 = *(_DWORD *)(a1 + 152);
      v4 = sub_34CA72((int)v3);
      if ( v4 == 0 )
      {
        v5 = v8 * (unsigned __int64)a2;
        if ( v10 != v5 )
        {
          if ( v10 <= v5 )
          {
            if ( v10 + v8 > v5 )
            {
LABEL_8:
              *(_DWORD *)(a1 + 32) = a2;
              return v4;
            }
            j_memset(*(void **)(a1 + 200), 0, v8);
            v6 = sub_34CA4C(*(_DWORD *)(a1 + 60));
          }
          else
          {
            v6 = sub_34CA5E(*(_DWORD *)(a1 + 60));
          }
          if ( v6 != 0 )
            return v6;
          goto LABEL_8;
        }
      }
    }
  }
  return v4;
}


//======================================================================
// sub_350252
// address: 0x00350252   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_350252(_DWORD *a1)
{
  int v2; // r7
  _DWORD *v3; // r3
  _DWORD *v4; // r0
  int i; // r6
  int result; // r0
  _DWORD *v7; // [sp+4h] [bp-A8h]
  _DWORD v8[41]; // [sp+8h] [bp-A4h] BYREF

  j_memset(v8, 0, 0xA0u);
  while ( 1 )
  {
    v2 = 0;
    if ( a1 == nullptr )
      break;
    v3 = (_DWORD *)a1[2];
    a1[2] = 0;
    v7 = v3;
    while ( 1 )
    {
      v4 = (_DWORD *)v8[v2];
      if ( v4 == nullptr )
        break;
      a1 = (_DWORD *)sub_34DE46(v4, a1);
      v8[v2++] = 0;
    }
    v8[v2] = a1;
    a1 = v7;
  }
  for ( i = 0; i != 40; ++i )
  {
    result = sub_34DE46(a1, (_DWORD *)v8[i]);
    a1 = (_DWORD *)result;
  }
  return result;
}


//======================================================================
// sub_3502A4
// address: 0x003502A4   size: 0x12 (18 bytes)
//======================================================================
void *sub_3502A4()
{
  return j_memset(&dword_55929C, 0, 0x44u);
}


//======================================================================
// sub_3502BC
// address: 0x003502BC   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall sub_3502BC(_DWORD *a1, int a2, int a3, int a4, __int64 a5)
{
  int v5; // r6
  _BOOL4 v8; // r7
  int result; // r0
  int *v10; // [sp+Ch] [bp-30h]
  char *v11; // [sp+14h] [bp-28h]
  char v12[4]; // [sp+1Ch] [bp-20h] BYREF
  _DWORD v13[3]; // [sp+20h] [bp-1Ch] BYREF
  _BYTE v14[4]; // [sp+2Ch] [bp-10h] BYREF
  _BYTE v15[4]; // [sp+30h] [bp-Ch] BYREF

  v5 = *a1;
  v11 = *(char **)(a2 + 4);
  v10 = (int *)(*a1 + 76);
  sub_34D8F0(v12, *(_DWORD *)(a2 + 20));
  sub_34D8F0(v13, a3);
  *(_QWORD *)&v13[1] = *(_QWORD *)(v5 + 84);
  v8 = *(unsigned __int8 *)(v5 + 65) == 0;
  sub_34E08C(v8, v12, 8, v10, v10);
  sub_34E08C(v8, v11, *(_DWORD *)(v5 + 36), v10, v10);
  sub_34D8F0(v14, *(_DWORD *)(v5 + 76));
  sub_34D8F0(v15, *(_DWORD *)(v5 + 80));
  result = sub_34E182((int)a1, (int)v12, 24, SHIDWORD(a5), a5);
  if ( result == 0 )
    return sub_34E182((int)a1, (int)v11, a1[5], SHIDWORD(a5), a5 + 24);
  return result;
}


//======================================================================
// sub_35038C
// address: 0x0035038C   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_35038C(int a1)
{
  int v2; // r7
  const void *v3; // r5
  int v5; // [sp+0h] [bp-Ch]

  v2 = **(_DWORD **)(a1 + 32);
  *(_BYTE *)(a1 + 64) = 1;
  v3 = (const void *)(a1 + 52);
  *(_DWORD *)(a1 + 52) = 3007000;
  sub_34E08C(1, (char *)(a1 + 52), 40, nullptr, (_DWORD *)(a1 + 92));
  j_memcpy((void *)(v2 + 48), v3, 0x30u);
  sub_34E104(a1);
  j_memcpy((void *)v2, v3, 0x30u);
  return v5;
}


//======================================================================
// sub_3503D8
// address: 0x003503D8   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall sub_3503D8(_DWORD *a1, int a2)
{
  int *v2; // r7
  int v4; // r5
  int v6; // [sp+Ch] [bp-10h]

  v2 = (int *)a1[4];
  v6 = a1[5];
  if ( a2 != 0 )
  {
    v4 = sub_34CA3A(*(_DWORD *)(v2[52] + 8));
  }
  else
  {
    v4 = sub_34CA3A(v2[15]);
    if ( v4 == 522 )
    {
      if ( v6 != 1 )
        return 0;
      goto LABEL_7;
    }
  }
  if ( v6 == 1 )
  {
    if ( v4 != 0 )
    {
      j_memset(v2 + 25, 255, 0x10u);
      return v4;
    }
LABEL_7:
    *(_OWORD *)(v2 + 25) = *(_OWORD *)(a1[1] + 24);
    return 0;
  }
  return v4;
}


//======================================================================
// sub_3504A0
// address: 0x003504A0   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_3504A0(int a1, char *a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // r2
  _DWORD *v7; // r5
  __int64 i; // r2
  __int64 v9; // r2
  int v10; // r6
  size_t v11; // r7
  int v13; // [sp+4h] [bp-10h]

  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 == a5 && v6 != 0 )
  {
    v7 = *(_DWORD **)(a1 + 32);
  }
  else
  {
    v7 = *(_DWORD **)(a1 + 4);
    for ( i = 1019; v7 != nullptr && a5 > i; i += 1020 )
      v7 = (_DWORD *)*v7;
  }
  v9 = a5 % 1020;
  v10 = a3;
  while ( 1 )
  {
    v13 = 1020 - v9;
    v11 = 1020 - v9;
    if ( 1020 - (int)v9 > v10 )
      v11 = v10;
    j_memcpy(a2, (char *)v7 + v9 + 4, v11);
    a2 += v11;
    v10 -= v13;
    if ( v10 < 0 )
      break;
    v7 = (_DWORD *)*v7;
    if ( v7 == nullptr || v10 == 0 )
      break;
    LODWORD(v9) = 0;
  }
  *(_DWORD *)(a1 + 32) = v7;
  *(_QWORD *)(a1 + 24) = a3 + a5;
  return 0;
}


//======================================================================
// sub_350558
// address: 0x00350558   size: 0x9C (156 bytes)
//======================================================================
void *__fastcall sub_350558(int a1, unsigned __int16 *a2, int a3, int *a4, int *a5, _WORD *a6)
{
  int v6; // r12
  int v7; // r2
  int v8; // r4
  int v9; // r5
  int v10; // r5
  int v12; // [sp+0h] [bp-1Ch]
  int v13; // [sp+4h] [bp-18h]
  int v14; // [sp+8h] [bp-14h]
  int v16; // [sp+10h] [bp-Ch]

  v6 = *a4;
  v16 = *a5;
  v7 = 0;
  v12 = 0;
  v8 = 0;
  while ( v12 < v16 )
  {
    if ( v8 < a3 && *(_DWORD *)(4 * a2[v8] + a1) < *(_DWORD *)(4 * *(unsigned __int16 *)(2 * v12 + v6) + a1) )
      goto LABEL_5;
    v10 = *(unsigned __int16 *)(2 * v12++ + v6);
    v14 = v10;
LABEL_7:
    v13 = *(_DWORD *)(4 * v14 + a1);
    a6[v7] = v14;
    if ( v8 < a3 )
      v8 += *(_DWORD *)(4 * a2[v8] + a1) == v13;
    ++v7;
  }
  if ( v8 < a3 )
  {
LABEL_5:
    v9 = a2[v8++];
    v14 = v9;
    goto LABEL_7;
  }
  *a4 = (int)a2;
  *a5 = v7;
  return j_memcpy(a2, a6, 2 * v7);
}


//======================================================================
// sub_3505F4
// address: 0x003505F4   size: 0xBC (188 bytes)
//======================================================================
unsigned __int64 __fastcall sub_3505F4(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  unsigned int v4; // r5
  unsigned int v5; // r6
  int v6; // r7
  unsigned int v7; // r5
  int v8; // r0
  unsigned int v9; // r1
  unsigned __int64 v11; // [sp+0h] [bp-Ch]

  v11 = __PAIR64__((unsigned int)a3, (unsigned int)a1);
  v3 = a1;
  v4 = a2 - 1;
  while ( v3 != nullptr )
  {
    v5 = v3[2];
    if ( v5 == 0 )
    {
      if ( *v3 > 0xFA0u )
      {
        j_memcpy(a3, v3 + 3, 0x1F4u);
        j_memset(v3 + 3, 0, 0x1F4u);
        v7 = v4 + 1;
        v3[1] = 0;
        do
        {
          v8 = *(_DWORD *)(HIDWORD(v11) + v5);
          if ( v8 != 0 && v8 != v7 )
          {
            v9 = (v8 - 1) % 0x7Du;
            ++v3[1];
            while ( v3[v9 + 3] != 0 )
              v9 = v9 + 1 <= 0x7C ? v9 + 1 : 0;
            v3[v9 + 3] = *(_DWORD *)(HIDWORD(v11) + v5);
          }
          v5 += 4;
        }
        while ( v5 != 500 );
      }
      else
      {
        *((_BYTE *)v3 + (v4 >> 3) + 12) &= ~(1 << (v4 & 7));
      }
      return v11;
    }
    v6 = v4 / v5 + 2;
    v4 %= v5;
    v3 = (_DWORD *)v3[v6 + 1];
  }
  return v11;
}


//======================================================================
// sub_3506B0
// address: 0x003506B0   size: 0x152 (338 bytes)
//======================================================================
unsigned int __fastcall sub_3506B0(char *a1, int a2, int a3)
{
  unsigned int result; // r0
  int v5; // r2
  int v6; // r3
  __int64 v7; // r2
  unsigned int v8; // r2
  unsigned int v9; // r3
  __int16 v10; // r3
  int v11; // r0
  __int16 v12; // r3

  switch ( a2 )
  {
    case 0:
    case 10:
    case 11:
      *(_WORD *)(a3 + 28) = 1;
      result = 0;
      break;
    case 1:
      *(_QWORD *)(a3 + 16) = __PAIR64__(*a1 >> 7, *a1);
      *(_WORD *)(a3 + 28) = 4;
      result = 1;
      break;
    case 2:
      *(_QWORD *)(a3 + 16) = (*a1 << 8) | (unsigned __int8)a1[1];
      *(_WORD *)(a3 + 28) = 4;
      result = 2;
      break;
    case 3:
      *(_QWORD *)(a3 + 16) = ((unsigned __int8)a1[1] << 8) | (unsigned __int8)a1[2] | (*a1 << 16);
      *(_WORD *)(a3 + 28) = 4;
      result = 3;
      break;
    case 4:
      v5 = (unsigned __int8)a1[2];
      v6 = ((unsigned __int8)*a1 << 24) | (unsigned __int8)a1[3] | ((unsigned __int8)a1[1] << 16);
      *(_WORD *)(a3 + 28) = 4;
      *(_QWORD *)(a3 + 16) = v6 | (v5 << 8);
      result = 4;
      break;
    case 5:
      HIDWORD(v7) = (*a1 << 8) | (unsigned __int8)a1[1];
      LODWORD(v7) = 0;
      *(_QWORD *)(a3 + 16) = _byteswap_ulong(*(_DWORD *)(a1 + 2)) + v7;
      *(_WORD *)(a3 + 28) = 4;
      result = 6;
      break;
    case 6:
    case 7:
      v8 = _byteswap_ulong(*(_DWORD *)a1);
      v9 = _byteswap_ulong(*((_DWORD *)a1 + 1));
      if ( a2 == 6 )
      {
        *(_DWORD *)(a3 + 16) = v9;
        *(_DWORD *)(a3 + 20) = v8;
        v10 = 4;
      }
      else
      {
        *(_QWORD *)(a3 + 8) = __PAIR64__(v8, v9);
        v11 = sub_34CF26();
        v10 = 8;
        if ( v11 != 0 )
          v10 = 1;
      }
      *(_WORD *)(a3 + 28) = v10;
      result = 8;
      break;
    case 8:
    case 9:
      result = 0;
      *(_DWORD *)(a3 + 16) = a2 - 8;
      *(_DWORD *)(a3 + 20) = 0;
      v12 = 4;
      goto LABEL_15;
    default:
      *(_DWORD *)(a3 + 4) = a1;
      *(_DWORD *)(a3 + 32) = 0;
      result = (unsigned int)(a2 - 12) >> 1;
      v12 = word_44AC18[a2 & 1];
      *(_DWORD *)(a3 + 24) = result;
LABEL_15:
      *(_WORD *)(a3 + 28) = v12;
      break;
  }
  return result;
}


//======================================================================
// sub_350808
// address: 0x00350808   size: 0x94 (148 bytes)
//======================================================================
int __fastcall sub_350808(int result, int a2, int a3)
{
  int v3; // r4
  int i; // r5
  int v6; // r0
  size_t v7; // r6
  int v8; // r1
  int v9; // r0
  int v10; // r3

  v3 = result;
  for ( i = a3; i > 0 && *(_DWORD *)v3 == 0; i -= v7 )
  {
    v6 = *(_DWORD *)(v3 + 16);
    v7 = i;
    if ( i > *(_DWORD *)(v3 + 8) - v6 )
      v7 = *(_DWORD *)(v3 + 8) - v6;
    j_memcpy((void *)(*(_DWORD *)(v3 + 4) + v6), (const void *)(a2 + a3 - i), v7);
    result = *(_DWORD *)(v3 + 16);
    v8 = *(_DWORD *)(v3 + 8);
    *(_DWORD *)(v3 + 16) = v7 + result;
    if ( v7 + result == v8 )
    {
      v9 = sub_34CA4C(*(_DWORD *)(v3 + 32));
      *(_DWORD *)(v3 + 16) = 0;
      *(_DWORD *)(v3 + 12) = 0;
      v10 = *(_DWORD *)(v3 + 8);
      *(_DWORD *)v3 = v9;
      result = v10;
      *(_QWORD *)(v3 + 24) += v10;
    }
  }
  return result;
}


//======================================================================
// sub_35089C
// address: 0x0035089C   size: 0x7C (124 bytes)
//======================================================================
_DWORD *__fastcall sub_35089C(_DWORD *result, int a2, int a3, int a4)
{
  __int16 v4; // r6
  int v5; // r4
  _BYTE *v6; // r7
  _DWORD *v7; // r5
  int i; // r3
  size_t v9; // r2
  _BYTE *v10; // r3
  int v11; // [sp+0h] [bp-1Ch]
  int v12; // [sp+4h] [bp-18h]
  int v13; // [sp+8h] [bp-14h]
  int v14; // [sp+Ch] [bp-10h]

  v4 = a2;
  v12 = result[14];
  v13 = *(_DWORD *)(result[13] + 36);
  v5 = v13;
  v6 = (_BYTE *)(result[16] + 2 * a2);
  v7 = result;
  v14 = *((unsigned __int8 *)result + 5);
  for ( i = a2 - 1; ; i = v11 )
  {
    v11 = i - 1;
    if ( i < 0 )
      break;
    v6 -= 2;
    v9 = *(unsigned __int16 *)(a4 + 2 * v11 + 2);
    v5 -= v9;
    *v6 = BYTE1(v5);
    v6[1] = v5;
    result = j_memcpy((void *)(v12 + v5), *(const void **)(a3 + 4 * v11 + 4), v9);
  }
  v10 = (_BYTE *)(v12 + v14);
  v10[3] = HIBYTE(v4);
  v10[5] = BYTE1(v5);
  v10[6] = v5;
  v10[4] = v4;
  LOWORD(v10) = *((_WORD *)v7 + 7);
  *((_WORD *)v7 + 8) = v4;
  *((_WORD *)v7 + 7) = (_WORD)v10 - v13 - 2 * v4 + v5;
  return result;
}


//======================================================================
// sub_350918
// address: 0x00350918   size: 0x180 (384 bytes)
//======================================================================
int __fastcall sub_350918(double a1, int a2, int a3, int a4, void *a5)
{
  double v5; // kr00_8
  size_t v7; // r5
  int v8; // r4
  int v9; // r6
  int v10; // r5
  int v11; // r7
  double v12; // r4
  int v13; // r7
  int v14; // r2
  int v15; // r3
  int v17; // [sp+8h] [bp-3Ch]
  int v18; // [sp+Ch] [bp-38h]
  int v19; // [sp+14h] [bp-30h]
  int v20; // [sp+18h] [bp-2Ch]
  int v21; // [sp+1Ch] [bp-28h]
  double v22; // [sp+20h] [bp-24h]
  int v23; // [sp+28h] [bp-1Ch]
  double v24; // [sp+30h] [bp-14h]
  double v25; // [sp+38h] [bp-Ch]

  v5 = a1;
  if ( a2 > 1 )
  {
    v23 = a2 - (a2 >> 1);
    v18 = a2 >> 1;
    v7 = 4 * (a2 >> 1);
    v19 = HIDWORD(a1) + v7;
    sub_350918(SLODWORD(a1), SHIDWORD(a1), a2 >> 1, a3, a4, a5);
    sub_350918(SLODWORD(v5), HIDWORD(v5) + v7, v23, a3, a4, a5);
    v8 = 2 * a3;
    LODWORD(a1) = j_memcpy(a5, (const void *)HIDWORD(v5), v7);
    v9 = 0;
    v17 = 0;
    v20 = 4 * (v8 + 2);
    v21 = 4 * (v8 + 3);
    while ( v17 < v18 || v9 < v23 )
    {
      v10 = a4 + 48 * *((_DWORD *)a5 + v17);
      if ( *(_DWORD *)(LODWORD(v5) + 612) != 0 )
      {
        v22 = (double)*(int *)(v20 + v10);
        v25 = (double)*(int *)(v21 + v10);
        v13 = a4 + 48 * *(_DWORD *)(4 * v9 + v19);
        v12 = (double)*(int *)(v20 + v13);
        a1 = (double)*(int *)(v21 + v13);
      }
      else
      {
        v22 = *(float *)(v20 + v10);
        v25 = *(float *)(v21 + v10);
        v11 = a4 + 48 * *(_DWORD *)(4 * v9 + v19);
        v12 = *(float *)(v20 + v11);
        a1 = *(float *)(v21 + v11);
      }
      v24 = a1;
      if ( v17 != v18
        && (v9 == v23
         || (LODWORD(a1) = v22 < v12) != 0
         || (LODWORD(a1) = v22 == v12) != 0 && (LODWORD(a1) = v25 < v24) != 0) )
      {
        *(_DWORD *)(4 * (v17 + v9) + HIDWORD(v5)) = *((_DWORD *)a5 + v17);
        ++v17;
      }
      else
      {
        v14 = *(_DWORD *)(4 * v9 + v19);
        v15 = 4 * (v17 + v9++);
        *(_DWORD *)(v15 + HIDWORD(v5)) = v14;
      }
    }
  }
  return LODWORD(a1);
}


//======================================================================
// sub_350A98
// address: 0x00350A98   size: 0xB4 (180 bytes)
//======================================================================
char *__fastcall sub_350A98(char *result, int a2, int a3, void *a4)
{
  char *v4; // r6
  size_t v6; // r4
  int v7; // r4
  int i; // r5
  int v9; // r2
  int v10; // r3
  int v11; // [sp+0h] [bp-1Ch]
  int v13; // [sp+8h] [bp-14h]
  char *v14; // [sp+Ch] [bp-10h]
  int v15; // [sp+10h] [bp-Ch]
  int v16; // [sp+14h] [bp-8h]

  v4 = result;
  if ( a2 > 1 )
  {
    v6 = 4 * (a2 >> 1);
    v11 = a2 >> 1;
    v13 = a2 - (a2 >> 1);
    v14 = &result[v6];
    sub_350A98(result, a2 >> 1, a3, a4);
    sub_350A98(v14, v13, a3, a4);
    result = (char *)j_memcpy(a4, v4, v6);
    v7 = 0;
    for ( i = 0; ; ++i )
    {
      while ( i >= v11 )
      {
        if ( v7 >= v13 )
          return result;
        if ( i != v11 )
          break;
        *(_DWORD *)&v4[4 * i + 4 * v7] = *(_DWORD *)&v14[4 * v7];
LABEL_10:
        ++v7;
      }
      if ( v7 == v13 )
      {
        v9 = *((_DWORD *)a4 + i);
        v10 = 4 * (i + v7);
      }
      else
      {
        v15 = *((_DWORD *)a4 + i);
        v16 = *(_DWORD *)&v14[4 * v7];
        result = (char *)(*(double *)(a3 + 8 * v15) < *(double *)(a3 + 8 * v16));
        v10 = 4 * (i + v7);
        if ( *(double *)(a3 + 8 * v15) >= *(double *)(a3 + 8 * v16) )
        {
          *(_DWORD *)&v4[v10] = v16;
          goto LABEL_10;
        }
        v9 = *((_DWORD *)a4 + i);
      }
      *(_DWORD *)&v4[v10] = v9;
    }
  }
  return result;
}


//======================================================================
// sub_350B4C
// address: 0x00350B4C   size: 0x4E (78 bytes)
//======================================================================
char *__fastcall sub_350B4C(int a1, const char *a2)
{
  int i; // r4
  int j; // r4

  if ( a2 != nullptr )
  {
    for ( i = 0; i != 23; ++i )
    {
      if ( j_strcmp(a2, (&off_472324)[3 * i]) == 0 )
        break;
    }
  }
  else
  {
    i = -1;
  }
  for ( j = i + 1; j != 24; ++j )
  {
    if ( (&off_472324)[3 * j + 1] != nullptr )
      return (&off_472324)[3 * j];
  }
  return nullptr;
}


//======================================================================
// sub_350BA4
// address: 0x00350BA4   size: 0x2C (44 bytes)
//======================================================================
char *__fastcall sub_350BA4(int a1, char *a2)
{
  int i; // r4

  for ( i = 0; i != 24; ++i )
  {
    if ( j_strcmp(a2, (&off_472324)[3 * i]) == 0 )
      return (&off_472324)[3 * i + 1];
  }
  return nullptr;
}


//======================================================================
// sub_350C38
// address: 0x00350C38   size: 0x78 (120 bytes)
//======================================================================
int sub_350C38(unsigned __int8 *a1, ...)
{
  char *v1; // r2
  int result; // r0
  int v4; // r4
  int v5; // r1
  int v6; // r5
  unsigned __int8 *v7; // [sp+4h] [bp-20h]
  va_list varg_r1; // [sp+3Ch] [bp+18h] BYREF

  va_start(varg_r1, a1);
  va_copy(v1, varg_r1);
  result = 0;
  do
  {
    v4 = *((_DWORD *)v1 + 3);
    v7 = &a1[*(_DWORD *)v1];
    v5 = 0;
    while ( a1 != v7 )
    {
      v6 = *a1;
      if ( (byte_44AA64[v6] & 4) == 0 )
        return result;
      v5 = 10 * v5 + v6 - 48;
      ++a1;
    }
    if ( v5 < *((_DWORD *)v1 + 1) || v5 > *((_DWORD *)v1 + 2) || v4 != 0 && v4 != *a1 )
      break;
    ++a1;
    ++result;
    **((_DWORD **)v1 + 4) = v5;
    v1 += 20;
  }
  while ( v4 != 0 );
  return result;
}


//======================================================================
// sub_350CB4
// address: 0x00350CB4   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_350CB4(int a1, __uid_t a2, __gid_t a3)
{
  __uid_t v6; // r0
  int v7; // r3

  v6 = j_geteuid();
  v7 = 0;
  if ( v6 == 0 )
    return j_fchown(a1, a2, a3);
  return v7;
}


//======================================================================
// sub_350CD8
// address: 0x00350CD8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_350CD8(int fd, int a2, __off_t length)
{
  int v5; // r4

  do
    v5 = off_472370(fd, length);
  while ( v5 < 0 && *(_DWORD *)j___errno() == 4 );
  return v5;
}


//======================================================================
// sub_350D00
// address: 0x00350D00   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_350D00(int a1, int a2)
{
  const char *v3; // r5
  _DWORD *v5; // r0

  v3 = *(const char **)(a1 + 24);
  if ( *(unsigned __int8 *)(a1 + 16) == a2 )
    return 0;
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 16) = 1;
    return 0;
  }
  if ( off_47240C(*(const char **)(a1 + 24)) >= 0
    || *(_DWORD *)j___errno() == 20 && ((int (__fastcall *)(const char *))off_4723E8)(v3) >= 0 )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return 0;
  }
  else
  {
    v5 = (_DWORD *)j___errno();
    if ( *v5 == 2 )
      return 0;
    *(_DWORD *)(a1 + 20) = *v5;
    return 2058;
  }
}


//======================================================================
// sub_350D5C
// address: 0x00350D5C   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_350D5C(_DWORD *a1, _BOOL4 *a2)
{
  int v4; // r3
  _BOOL4 v5; // r4
  int v6; // r5
  int v7; // r7
  int v8; // r0
  _WORD v10[2]; // [sp+0h] [bp-14h] BYREF
  int v11; // [sp+4h] [bp-10h]
  int v12; // [sp+8h] [bp-Ch]

  sub_34DAAE();
  v4 = a1[2];
  v5 = true;
  if ( *(unsigned __int8 *)(v4 + 12) <= 1u )
  {
    v7 = *(unsigned __int8 *)(v4 + 13);
    if ( *(_BYTE *)(v4 + 13) != 0 )
    {
      v5 = false;
      v6 = 0;
      goto LABEL_9;
    }
    v10[1] = *(unsigned __int8 *)(v4 + 13);
    v8 = a1[3];
    v11 = dword_471740 + 1;
    v12 = 1;
    v10[0] = 1;
    if ( off_47237C(v8, 5, v10) != 0 )
    {
      v5 = v7;
      a1[5] = *(_DWORD *)j___errno();
      v6 = 3594;
      goto LABEL_9;
    }
    v5 = v10[0] != 2;
  }
  v6 = 0;
LABEL_9:
  sub_34DABC();
  *a2 = v5;
  return v6;
}


//======================================================================
// sub_350DD8
// address: 0x00350DD8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_350DD8(const char *a1, int a2)
{
  return j_open(a1, a2);
}


//======================================================================
// sub_350DE0
// address: 0x00350DE0   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_350DE0(int fd, int a2, __off_t offset, int a4, void *buf, int a6, _DWORD *a7)
{
  __off_t v9; // r0
  int v10; // r3
  int v11; // r3
  int v12; // r4

  while ( 1 )
  {
    v9 = j_lseek(fd, offset, 0);
    v10 = v9 >> 31;
    if ( v9 != offset || v10 != a4 )
      break;
    v12 = off_4723AC(fd, buf, a6 & 0x1FFFF);
    if ( v12 >= 0 )
      return v12;
    if ( *(_DWORD *)j___errno() != 4 )
    {
      if ( a7 != nullptr )
        *a7 = *(_DWORD *)j___errno();
      return v12;
    }
  }
  if ( a7 != nullptr )
  {
    if ( v9 == -1 && v10 == -1 )
      v11 = *(_DWORD *)j___errno();
    else
      v11 = 0;
    *a7 = v11;
  }
  return -1;
}


//======================================================================
// sub_350E5C
// address: 0x00350E5C   size: 0x146 (326 bytes)
//======================================================================
int __fastcall sub_350E5C(int *a1, char *a2, signed int a3, int a4, __int64 offset)
{
  char *v6; // r7
  int v7; // r5
  int v9; // r12
  int v10; // r2
  signed int v11; // r5
  int v12; // r5
  int v13; // r5
  __int64 v15; // [sp+0h] [bp-24h]
  size_t nbytes; // [sp+Ch] [bp-18h]
  int v17; // [sp+10h] [bp-14h]
  char *buf; // [sp+14h] [bp-10h]

  v6 = a2;
  v7 = a1[12];
  v9 = a1[13];
  if ( __SPAIR64__(v9, v7) > offset )
  {
    v10 = a1[18];
    if ( a3 + offset <= __SPAIR64__(v9, v7) )
    {
      j_memcpy(a2, (const void *)(v10 + offset), a3);
      return 0;
    }
    v11 = v7 - offset;
    j_memcpy(a2, (const void *)(v10 + offset), v11);
    offset += v11;
    v6 += v11;
    a3 -= v11;
  }
  nbytes = a3 & 0x1FFFF;
  buf = v6;
  v17 = 0;
  while ( 1 )
  {
    v15 = j_lseek(a1[3], offset, 0);
    if ( (int)v15 != offset )
      break;
    v13 = off_472388(a1[3], buf, nbytes);
    if ( v13 == nbytes )
      goto LABEL_16;
    if ( v13 >= 0 )
    {
      if ( v13 == 0 )
        goto LABEL_16;
      nbytes -= v13;
      v15 = (int)v15 + (__int64)v13;
      v17 += v13;
      buf += v13;
    }
    else if ( *(_DWORD *)j___errno() != 4 )
    {
      v17 = 0;
      a1[5] = *(_DWORD *)j___errno();
LABEL_16:
      v12 = v13 + v17;
      goto LABEL_17;
    }
    offset = v15;
  }
  if ( (_DWORD)v15 == -1 )
  {
    v12 = -1;
    a1[5] = *(_DWORD *)j___errno();
  }
  else
  {
    a1[5] = 0;
    v12 = -1;
  }
LABEL_17:
  if ( v12 == a3 )
    return 0;
  if ( v12 < 0 )
    return 266;
  a1[5] = 0;
  j_memset(&v6[v12], 0, a3 - v12);
  return 522;
}


//======================================================================
// sub_350FB0
// address: 0x00350FB0   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_350FB0(int a1, _QWORD *a2)
{
  int v2; // r7
  int result; // r0
  struct timeval tv; // [sp+8h] [bp-Ch] BYREF

  v2 = j_gettimeofday(&tv, nullptr);
  result = 1;
  if ( v2 == 0 )
  {
    *a2 = 1000LL * tv.tv_sec + 210866760000000LL + tv.tv_usec / 1000;
    return 0;
  }
  return result;
}


//======================================================================
// sub_351010
// address: 0x00351010   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_351010(int a1, double *a2, int a3)
{
  int v4; // r4
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v7 = a3;
  v6 = 0;
  v4 = sub_350FB0(0, &v6);
  *a2 = (double)v6 / 86400000.0;
  return v4;
}


//======================================================================
// sub_351048
// address: 0x00351048   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_351048(int a1, int a2)
{
  unsigned int v2; // r4

  v2 = (a2 + 999999) / 1000000;
  j_sleep(v2);
  return 1000000 * v2;
}


//======================================================================
// sub_351068
// address: 0x00351068   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_351068(int a1, void *handle)
{
  return j_dlclose(handle);
}


//======================================================================
// sub_351072
// address: 0x00351072   size: 0xC (12 bytes)
//======================================================================
void *__fastcall sub_351072(int a1, void *handle, char *name)
{
  return j_dlsym(handle, name);
}


//======================================================================
// sub_35107E
// address: 0x0035107E   size: 0xC (12 bytes)
//======================================================================
void *__fastcall sub_35107E(int a1, char *file)
{
  return j_dlopen(file, 2);
}


//======================================================================
// sub_35108A
// address: 0x0035108A   size: 0x9E (158 bytes)
//======================================================================
int __fastcall sub_35108A(int a1, _DWORD *a2)
{
  int v2; // r6
  int result; // r0
  _DWORD v6[2]; // [sp+10h] [bp-6Ch] BYREF
  _DWORD v7[12]; // [sp+18h] [bp-64h] BYREF
  _BYTE v8[52]; // [sp+48h] [bp-34h] BYREF

  v2 = **(_DWORD **)(a1 + 32);
  j_memcpy(v7, (const void *)v2, sizeof(v7));
  sub_34E104(a1);
  j_memcpy(v8, (const void *)(v2 + 48), 0x30u);
  if ( j_memcmp(v7, v8, 0x30u) != 0 )
    return 1;
  if ( LOBYTE(v7[3]) == 0 )
    return 1;
  sub_34E08C(1, (char *)v7, 40, nullptr, v6);
  if ( v6[0] != v7[10] || v6[1] != v7[11] )
    return 1;
  result = j_memcmp((const void *)(a1 + 52), v7, 0x30u);
  if ( result != 0 )
  {
    *a2 = 1;
    j_memcpy((void *)(a1 + 52), v7, 0x30u);
    *(_DWORD *)(a1 + 36) = (*(unsigned __int16 *)(a1 + 66) >> 9 << 9) + ((*(_WORD *)(a1 + 66) & 1) << 16);
    return 0;
  }
  return result;
}


//======================================================================
// sub_351128
// address: 0x00351128   size: 0x10A (266 bytes)
//======================================================================
int __fastcall sub_351128(int a1, unsigned __int8 *a2, unsigned int a3)
{
  int v6; // r4
  int v7; // r0
  unsigned int v8; // r3
  unsigned __int8 *i; // r2
  int v10; // r0
  unsigned int v12; // [sp+10h] [bp-24h] BYREF
  unsigned int v13; // [sp+14h] [bp-20h] BYREF
  __int64 v14; // [sp+18h] [bp-1Ch]
  _BYTE v15[8]; // [sp+24h] [bp-10h] BYREF

  *a2 = 0;
  v6 = sub_34CA72(a1);
  if ( v6 == 0 )
  {
    if ( v14 <= 15 )
      return 0;
    v6 = sub_34DF32(a1, (int)&v12, v14 - 16, (unsigned __int64)(v14 - 16) >> 32, &v12);
    if ( v6 != 0 )
      return v6;
    if ( v12 >= a3 || v12 == 0 )
      return 0;
    v6 = sub_34DF32(a1, (int)&v13, v14 - 12, (unsigned __int64)(v14 - 12) >> 32, &v13);
    if ( v6 != 0 )
      return v6;
    v6 = sub_34CA3A(a1);
    if ( v6 != 0 )
      return v6;
    v6 = j_memcmp(v15, &unk_44AC1C, 8u);
    if ( v6 != 0 )
      return 0;
    v7 = sub_34CA3A(a1);
    if ( v7 != 0 )
    {
      return v7;
    }
    else
    {
      v8 = v13;
      for ( i = a2; i != &a2[v12]; ++i )
      {
        v10 = *i;
        v8 -= v10;
      }
      v13 = v8;
      if ( v8 != 0 )
        v12 = 0;
      a2[v12] = 0;
    }
  }
  return v6;
}


//======================================================================
// sub_35123C
// address: 0x0035123C   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_35123C(int result, char *a2, size_t a3)
{
  int v3; // r5
  int v5; // r4
  int v6; // r7
  int v8; // [sp+4h] [bp-8h]

  v3 = result;
  if ( result != 0 )
  {
    if ( a2 != nullptr )
    {
      v5 = 0;
      v8 = *(__int16 *)(result + 70);
      while ( v5 < v8 )
      {
        v6 = *(_DWORD *)(4 * v5 + *(_DWORD *)(v3 + 64));
        if ( v6 != 0
          && j_strncmp(*(const char **)(4 * v5 + *(_DWORD *)(v3 + 64)), a2, a3) == 0
          && *(_BYTE *)(v6 + a3) == 0 )
        {
          return v5 + 1;
        }
        ++v5;
      }
      return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


//======================================================================
// sub_3512A8
// address: 0x003512A8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3512A8(pthread_mutex_t *a1)
{
  return j_pthread_mutex_unlock(a1);
}


//======================================================================
// sub_3512B0
// address: 0x003512B0   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_3512B0(pthread_mutex_t *a1)
{
  return j_pthread_mutex_trylock(a1) != 0 ? 5 : 0;
}


//======================================================================
// sub_3512C4
// address: 0x003512C4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3512C4(pthread_mutex_t *a1)
{
  return j_pthread_mutex_lock(a1);
}


//======================================================================
// sub_3512CC
// address: 0x003512CC   size: 0xA (10 bytes)
//======================================================================
void __fastcall sub_3512CC(int a1)
{
  j_free((void *)(a1 - 8));
}


//======================================================================
// sub_3512D8
// address: 0x003512D8   size: 0xFC (252 bytes)
//======================================================================
int __fastcall sub_3512D8(int a1)
{
  int v2; // r5
  int v3; // r6
  __int64 v4; // r0
  int v6; // [sp+0h] [bp-14h]

  if ( *(_BYTE *)(a1 + 40) == 0 )
  {
    v6 = 1;
    v3 = 2000;
    v2 = 1;
LABEL_5:
    --v3;
    v2 += 12;
    goto LABEL_6;
  }
  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 16);
  if ( v2 <= 2 )
    goto LABEL_5;
LABEL_6:
  v4 = (__int64)(((double)(36525 * (v3 + 4716) / 100 + 306001 * (v2 + 1) / 10000 + v6 + 2 - v3 / 100 + v3 / 100 / 4)
                - 1524.5)
               * 86400000.0);
  *(_QWORD *)a1 = v4;
  *(_BYTE *)(a1 + 42) = 1;
  if ( *(_BYTE *)(a1 + 41) != 0 )
  {
    v4 += (__int64)(*(double *)(a1 + 32) * 1000.0) + 3600000 * *(_DWORD *)(a1 + 20) + 60000 * *(_DWORD *)(a1 + 24);
    *(_QWORD *)a1 = v4;
    if ( *(_BYTE *)(a1 + 43) != 0 )
    {
      v4 -= 60000 * *(_DWORD *)(a1 + 28);
      *(_QWORD *)a1 = v4;
      *(_BYTE *)(a1 + 40) = 0;
      *(_BYTE *)(a1 + 41) = 0;
      *(_BYTE *)(a1 + 43) = 0;
    }
  }
  return v4;
}


//======================================================================
// sub_351408
// address: 0x00351408   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_351408(int result)
{
  if ( *(_BYTE *)(result + 42) == 0 )
    return sub_3512D8(result);
  return result;
}


//======================================================================
// sub_351420
// address: 0x00351420   size: 0xDA (218 bytes)
//======================================================================
__int64 __fastcall sub_351420(int a1)
{
  int v2; // r7
  int v3; // r6
  int v4; // r7
  int v5; // r0
  int v6; // r3
  int v7; // r2
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = a1;
  HIDWORD(v9) = a1 + 40;
  if ( *(_BYTE *)(a1 + 40) == 0 )
  {
    if ( *(_BYTE *)(a1 + 42) != 0 )
    {
      v2 = (*(_QWORD *)a1 + 43200000LL) / 86400000
         + 1
         + (int)(((double)(int)((*(_QWORD *)a1 + 43200000LL) / 86400000) - 1867216.25) / 36524.25)
         - (int)(((double)(int)((*(_QWORD *)a1 + 43200000LL) / 86400000) - 1867216.25) / 36524.25) / 4
         + 1524;
      v3 = (int)(((double)v2 - 122.1) / 365.25);
      v4 = v2 - 36525 * v3 / 100;
      v5 = (int)((double)v4 / 30.6001);
      *(_DWORD *)(a1 + 16) = v4 - (int)((double)v5 * 30.6001);
      v6 = v5 - 13;
      if ( v5 <= 13 )
        v6 = v5 - 1;
      *(_DWORD *)(a1 + 12) = v6;
      v7 = v3 - 4715;
      if ( v6 > 2 )
        v7 = v3 - 4716;
      *(_DWORD *)(a1 + 8) = v7;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = 2000;
      *(_DWORD *)(a1 + 12) = 1;
      *(_DWORD *)(a1 + 16) = 1;
    }
    *(_BYTE *)HIDWORD(v9) = 1;
  }
  return v9;
}


//======================================================================
// sub_351548
// address: 0x00351548   size: 0x8E (142 bytes)
//======================================================================
__int64 __fastcall sub_351548(int a1)
{
  double v2; // r4
  __int64 v4; // [sp+0h] [bp-Ch]

  sub_351408(a1);
  v2 = (double)((*(_QWORD *)a1 + 43200000LL) % 86400000) / 1000.0;
  *(_DWORD *)(a1 + 20) = (int)v2 / 3600;
  LODWORD(v4) = (int)v2 % 3600;
  HIDWORD(v4) = (int)v4 / 60;
  *(_DWORD *)(a1 + 24) = (int)v4 / 60;
  *(double *)(a1 + 32) = v2 - (double)(int)v2 + (double)((int)v4 % 60);
  *(_BYTE *)(a1 + 41) = 1;
  return v4;
}


//======================================================================
// sub_3515F8
// address: 0x003515F8   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_3515F8(double a1, int a2)
{
  _QWORD *v2; // r5
  int (*v3)(void); // r3
  int v4; // r4
  double v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v6 = a1;
  v7 = a2;
  v2 = (_QWORD *)HIDWORD(a1);
  if ( (int)*(_DWORD *)LODWORD(a1) > 1 )
  {
    v3 = *(int (**)(void))(LODWORD(a1) + 72);
    if ( v3 != nullptr )
      return v3();
  }
  v4 = (*(int (__fastcall **)(_DWORD, double *))(LODWORD(a1) + 64))(LODWORD(a1), &v6);
  *v2 = (__int64)(v6 * 86400000.0);
  return v4;
}


//======================================================================
// sub_351638
// address: 0x00351638   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall sub_351638(int a1)
{
  _DWORD *v1; // r4
  int v2; // r2
  double v3; // r0

  v1 = (_DWORD *)(*(_DWORD *)(a1 + 56) + 136);
  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 56) + 140);
  if ( *(_QWORD *)v1 == 0 )
  {
    HIDWORD(v3) = *(_DWORD *)(a1 + 56) + 136;
    LODWORD(v3) = **(_DWORD **)(a1 + 8);
    if ( sub_3515F8(v3, v2) != 0 )
    {
      *v1 = 0;
      v1[1] = 0;
    }
  }
  return *(_QWORD *)v1;
}


//======================================================================
// sub_351664
// address: 0x00351664   size: 0x3C (60 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00351664  LDR     R3, =0x7FFFFEFE
//   00351666  PUSH    {R0-R2,R4,R5,LR}
//   00351668  SUBS    R2, R0, #1
//   0035166A  MOVS    R4, R0
//   0035166C  MOVS    R0, #0
//   0035166E  CMP     R2, R3
//   00351670  BHI     locret_35169E
//   00351672  LDR     R3, =(dword_471638 - 0x351678)
//   00351674  ADD     R3, PC; dword_471638
//   00351676  LDR     R2, [R3]
//   00351678  CMP     R2, R0
//   0035167A  BEQ     loc_351698
//   0035167C  LDR     R5, =(dword_559200 - 0x351682)
//   0035167E  ADD     R5, PC; dword_559200
//   00351680  LDR     R0, [R5,#(dword_559260 - 0x559200)]
//   00351682  BL      sqlite3_mutex_enter
//   00351686  ADD     R1, SP, #0xC+var_8
//   00351688  MOVS    R0, R4
//   0035168A  BL      sub_34CCC0
//   0035168E  LDR     R0, [R5,#(dword_559260 - 0x559200)]
//   00351690  BL      sqlite3_mutex_leave
//   00351694  LDR     R0, [SP,#0xC+var_8]
//   00351696  B       locret_35169E
//   00351698  LDR     R3, [R3,#(off_47165C - 0x471638)]
//   0035169A  MOVS    R0, R4
//   0035169C  BLX     R3
//   0035169E  POP     {R1-R5,PC}

//======================================================================
// sub_3516AC
// address: 0x003516AC   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_3516AC(int a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r3
  _DWORD *v5; // r5
  _DWORD *v6; // r4
  _DWORD *v7; // r1
  int v8; // r2
  int v9; // r2

  if ( a1 != 0 )
  {
    if ( *(_BYTE *)(a1 + 64) != 0 )
      return 0;
    if ( *(_BYTE *)(a1 + 242) != 0 )
    {
      v4 = (_DWORD *)(a1 + 252);
      if ( a2 <= *(unsigned __int16 *)(a1 + 240) )
      {
        v5 = *(_DWORD **)(a1 + 264);
        if ( v5 != nullptr )
        {
          v6 = (_DWORD *)(a1 + 248);
          *(_DWORD *)(a1 + 264) = *v5;
          v7 = (_DWORD *)(a1 + 244);
          v8 = *(_DWORD *)(a1 + 244);
          result = (int)v5;
          v9 = v8 + 1;
          *v7 = v9;
          ++*v4;
          if ( v9 > *v6 )
            *v6 = v9;
          return result;
        }
        ++*(_DWORD *)(a1 + 260);
      }
      else
      {
        ++*(_DWORD *)(a1 + 256);
      }
    }
  }
  result = sub_351664(a2);
  if ( result == 0 )
  {
    if ( a1 == 0 )
      return 0;
    *(_BYTE *)(a1 + 64) = 1;
  }
  return result;
}


//======================================================================
// sub_351724
// address: 0x00351724   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall sub_351724(int a1)
{
  _DWORD *result; // r0

  if ( *(_WORD *)(a1 + 24) == 0 )
  {
    result = (_DWORD *)sub_3516AC(*(_DWORD *)(a1 + 4), 1016);
    if ( result == nullptr )
      return result;
    *result = *(_DWORD *)a1;
    *(_DWORD *)a1 = result;
    *(_DWORD *)(a1 + 16) = result + 2;
    *(_WORD *)(a1 + 24) = 63;
  }
  result = *(_DWORD **)(a1 + 16);
  --*(_WORD *)(a1 + 24);
  *(_DWORD *)(a1 + 16) = result + 4;
  return result;
}


//======================================================================
// sub_35175A
// address: 0x0035175A   size: 0x42 (66 bytes)
//======================================================================
_DWORD *__fastcall sub_35175A(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  _DWORD *result; // r0
  _DWORD *v8; // r1
  int v9; // r3
  int v10; // r2

  result = sub_351724(a1);
  v8 = result;
  if ( result != nullptr )
  {
    *result = a3;
    result[1] = a4;
    result[2] = 0;
    v9 = *(_DWORD *)(a1 + 12);
    if ( v9 != 0 )
    {
      v10 = *(unsigned __int8 *)(a1 + 26);
      result = (_DWORD *)(v10 << 31);
      if ( (v10 & 1) != 0 )
      {
        result = *(_DWORD **)(v9 + 4);
        if ( (int)result >= (int)a4 )
        {
          if ( result != a4 || (result = *(_DWORD **)v9, *(_DWORD *)v9 >= a3) )
          {
            result = &dword_0 + 1;
            *(_BYTE *)(a1 + 26) = v10 & 0xFE;
          }
        }
      }
      *(_DWORD *)(v9 + 8) = v8;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = result;
    }
    *(_DWORD *)(a1 + 12) = v8;
  }
  return result;
}


//======================================================================
// sub_35179C
// address: 0x0035179C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_35179C(int a1, int a2, int a3, int *a4)
{
  int v7; // r0
  int v8; // r1
  int result; // r0

  v7 = -a2 & 7;
  v8 = 40 * (*(unsigned __int16 *)(a1 + 6) + 1) + 24;
  if ( v8 <= a3 + v7 )
  {
    result = a2 + v7;
    *a4 = 0;
    goto LABEL_5;
  }
  result = sub_3516AC(*(_DWORD *)(a1 + 12), v8);
  *a4 = result;
  if ( result != 0 )
  {
LABEL_5:
    *(_DWORD *)(result + 8) = result + 24;
    *(_DWORD *)result = a1;
    *(_WORD *)(result + 4) = *(_WORD *)(a1 + 6) + 1;
  }
  return result;
}


//======================================================================
// sub_3517DE
// address: 0x003517DE   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_3517DE(int *a1, int a2)
{
  int v3; // r6
  int v4; // r7
  int result; // r0
  int i; // r0
  char *v7; // r3
  int v8; // r2
  char v9; // r2
  int v10; // r3

  if ( *(_DWORD *)(a2 + 16) == 0 )
  {
    v3 = *(_DWORD *)(a2 + 12);
    v4 = *a1;
    result = sub_3516AC(0, *(unsigned __int16 *)(a2 + 52) + 1);
    *(_DWORD *)(a2 + 16) = result;
    if ( result == 0 )
    {
      *(_BYTE *)(v4 + 64) = 1;
      return result;
    }
    for ( i = 0; ; ++i )
    {
      v10 = *(_DWORD *)(a2 + 16);
      if ( i >= *(unsigned __int16 *)(a2 + 52) )
        break;
      v7 = (char *)(v10 + i);
      v8 = *(__int16 *)(*(_DWORD *)(a2 + 4) + 2 * i);
      if ( v8 < 0 )
        v9 = 100;
      else
        v9 = *(_BYTE *)(*(_DWORD *)(v3 + 4) + 24 * v8 + 21);
      *v7 = v9;
    }
    *(_BYTE *)(v10 + i) = 0;
  }
  return *(_DWORD *)(a2 + 16);
}


//======================================================================
// sub_351838
// address: 0x00351838   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_351838(int *a1, int a2, int a3)
{
  int *v6; // r4
  _DWORD *i; // r3
  _DWORD *v8; // r0
  int v9; // r2

  if ( (*(_BYTE *)(a3 + 44) & 8) == 0 )
    return 0;
  v6 = (int *)a1[103];
  if ( v6 == nullptr )
    v6 = a1;
  for ( i = (_DWORD *)v6[102]; i != nullptr; i = (_DWORD *)*i )
  {
    if ( i[1] == a3 )
      return i[3];
  }
  v8 = (_DWORD *)sub_3516AC(*a1, 16);
  i = v8;
  if ( v8 == nullptr )
    return 0;
  *v8 = v6[102];
  v6[102] = (int)v8;
  v8[1] = a3;
  v8[2] = a2;
  v9 = v6[19] + 2;
  v6[19] = v9;
  v8[3] = v9;
  ++v6[19];
  return i[3];
}


//======================================================================
// sub_351894
// address: 0x00351894   size: 0x18 (24 bytes)
//======================================================================
void *__fastcall sub_351894(int a1, size_t a2)
{
  void *v3; // r0
  void *v4; // r4

  v3 = (void *)sub_3516AC(a1, a2);
  v4 = v3;
  if ( v3 != nullptr )
    j_memset(v3, 0, a2);
  return v4;
}


//======================================================================
// sub_3518AC
// address: 0x003518AC   size: 0x16 (22 bytes)
//======================================================================
_WORD *__fastcall sub_3518AC(int a1)
{
  _WORD *result; // r0

  result = sub_351894(a1, 0x28u);
  if ( result != nullptr )
  {
    result[14] = 1;
    *(_DWORD *)result = a1;
  }
  return result;
}


//======================================================================
// sub_3518C4
// address: 0x003518C4   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3518C4(int *a1)
{
  int v1; // r4
  _DWORD *result; // r0
  int v4; // r3

  v1 = *a1;
  result = sub_351894(*a1, 0xD0u);
  if ( result != nullptr )
  {
    *result = v1;
    v4 = *(_DWORD *)(v1 + 4);
    if ( v4 != 0 )
      *(_DWORD *)(v4 + 48) = result;
    result[13] = *(_DWORD *)(v1 + 4);
    result[12] = 0;
    *(_DWORD *)(v1 + 4) = result;
    result[6] = a1;
    result[10] = 649915045;
  }
  return result;
}


//======================================================================
// sub_3518F8
// address: 0x003518F8   size: 0x42 (66 bytes)
//======================================================================
_DWORD *__fastcall sub_3518F8(int a1, int a2, int a3)
{
  int v3; // r7
  __int16 v4; // r6
  __int16 v6; // r5
  _DWORD *result; // r0
  char v8; // r3

  v3 = a2 + a3;
  v4 = a2;
  v6 = a3;
  result = sub_351894(0, 5 * (a2 + a3) + 24);
  if ( result != nullptr )
  {
    result[4] = &result[v3 + 5];
    *((_WORD *)result + 3) = v4;
    *((_WORD *)result + 4) = v6;
    v8 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 12) + 77);
    result[3] = a1;
    *((_BYTE *)result + 4) = v8;
    *result = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 64) = 1;
  }
  return result;
}


//======================================================================
// sub_35193A
// address: 0x0035193A   size: 0x64 (100 bytes)
//======================================================================
_DWORD *__fastcall sub_35193A(int a1, int a2, int a3, _DWORD *a4)
{
  __int16 v4; // r4
  int v5; // r6
  unsigned int v6; // r7
  unsigned int v7; // r5
  _DWORD *result; // r0
  char *v9; // r7
  char *v10; // r6
  int v11; // [sp+8h] [bp-Ch]

  v4 = a2;
  v5 = 4 * a2;
  v11 = 2 * (a2 + 1);
  v6 = (4 * a2 + 7) & 0xFFFFFFF8;
  v7 = ((a2 + 7 + 2 * (v11 + a2)) & 0xFFFFFFF8) + v6 + 56;
  result = sub_351894(a1, v7 + a3);
  if ( result != nullptr )
  {
    v9 = (char *)result + v6 + 56;
    v10 = &v9[v5 + 4];
    result[2] = v9;
    result[8] = result + 14;
    result[1] = v10;
    *((_WORD *)result + 26) = v4;
    result[7] = &v10[v11 - 2];
    *((_WORD *)result + 25) = v4 - 1;
    *a4 = (char *)result + v7;
  }
  return result;
}


//======================================================================
// sub_351A12
// address: 0x00351A12   size: 0xB4 (180 bytes)
//======================================================================
_WORD *__fastcall sub_351A12(int a1, int a2, unsigned __int8 **a3, int a4)
{
  char v5; // r7
  int v7; // r6
  _WORD *v8; // r0
  _WORD *v9; // r4
  int v10; // r2
  void *v11; // r0
  size_t v12; // r2
  int v13; // r5
  int v16; // [sp+Ch] [bp-8h] BYREF

  v5 = a2;
  v16 = 0;
  if ( a3 == nullptr || a2 == 132 && *a3 != nullptr && sub_34D6F8(*a3, &v16) != 0 )
    v7 = 0;
  else
    v7 = (int)(a3[1] + 1);
  v8 = sub_351894(a1, v7 + 48);
  v9 = v8;
  if ( v8 != nullptr )
  {
    *(_BYTE *)v8 = v5;
    v8[17] = -1;
    if ( a3 != nullptr )
    {
      if ( v7 != 0 )
      {
        v11 = v8 + 24;
        *((_DWORD *)v9 + 2) = v11;
        v12 = (size_t)a3[1];
        if ( v12 != 0 )
          j_memcpy(v11, *a3, v12);
        a3[1][*((_DWORD *)v9 + 2)] = 0;
        if ( a4 != 0 && v7 > 2 )
        {
          v13 = **a3;
          if ( v13 == 39 || v13 == 34 || v13 == 91 || v13 == 96 )
          {
            sub_34CF6A(*((unsigned __int8 **)v9 + 2));
            if ( v13 == 34 )
              *((_DWORD *)v9 + 1) |= 0x40u;
          }
        }
      }
      else
      {
        v10 = v16;
        *((_DWORD *)v8 + 1) |= 0x400u;
        *((_DWORD *)v8 + 2) = v10;
      }
    }
    *((_DWORD *)v9 + 6) = 1;
  }
  return v9;
}


//======================================================================
// sub_351AC6
// address: 0x00351AC6   size: 0x60 (96 bytes)
//======================================================================
_WORD *__fastcall sub_351AC6(int a1, int a2, int a3, int a4)
{
  _WORD *result; // r0
  _DWORD *v8; // r5
  int v9; // r3
  char v10; // r2
  int v11; // r1

  result = sub_351A12(a1, 154, nullptr, 0);
  if ( result != nullptr )
  {
    v8 = (_DWORD *)(a2 + 72 * a3 + 8);
    v9 = v8[4];
    *((_DWORD *)result + 11) = v9;
    *((_DWORD *)result + 7) = v8[10];
    if ( *(__int16 *)(v9 + 36) == a4 )
    {
      result[16] = -1;
    }
    else
    {
      result[16] = a4;
      v10 = a4;
      if ( a4 > 63 )
        v10 = 63;
      v11 = ((unsigned __int64)(1LL << v10) >> 32) | v8[15];
      v8[14] |= 1LL << v10;
      v8[15] = v11;
    }
    *((_DWORD *)result + 1) |= 4u;
  }
  return result;
}


//======================================================================
// sub_351B26
// address: 0x00351B26   size: 0x20 (32 bytes)
//======================================================================
_WORD *__fastcall sub_351B26(int a1, int a2, unsigned __int8 *a3)
{
  unsigned int v5; // r0
  unsigned __int8 *v7; // [sp+0h] [bp-Ch] BYREF
  unsigned int v8; // [sp+4h] [bp-8h]
  unsigned __int8 *v9; // [sp+8h] [bp-4h]

  v8 = a2;
  v9 = a3;
  v7 = a3;
  v5 = (unsigned int)a3;
  if ( a3 != nullptr )
    v5 = sub_34CF50((unsigned int)a3);
  v8 = v5;
  return sub_351A12(a1, a2, &v7, 0);
}


//======================================================================
// sub_351B46
// address: 0x00351B46   size: 0x2C (44 bytes)
//======================================================================
char *__fastcall sub_351B46(int a1, char a2, int a3)
{
  char *v5; // r0
  char *v6; // r4
  char *v7; // r6
  int v8; // r5

  v5 = (char *)sub_351894(a1, *(_DWORD *)(a3 + 4) + 40);
  v6 = v5;
  if ( v5 != nullptr )
  {
    v7 = v5 + 40;
    j_memcpy(v5 + 40, *(const void **)a3, *(_DWORD *)(a3 + 4));
    *((_DWORD *)v6 + 3) = v7;
    v8 = *(_DWORD *)(a3 + 4);
    *v6 = a2;
    *((_DWORD *)v6 + 4) = v8;
  }
  return v6;
}


//======================================================================
// sub_351B72
// address: 0x00351B72   size: 0x56 (86 bytes)
//======================================================================
__int64 __fastcall sub_351B72(__int64 a1, _DWORD *a2, int a3, __int64 a4)
{
  int v4; // r7
  int v6; // r4
  int v7; // r0
  __int64 v8; // r2

  v4 = a1;
  v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4) + 4) + 32);
  j_memset(a2, 0, 0x28u);
  v7 = sub_3516AC(v4, v6);
  a2[1] = v7;
  if ( v7 != 0 )
  {
    v8 = a4 % v6;
    a2[3] = v8;
    a2[4] = v8;
    a2[2] = v6;
    *((_QWORD *)a2 + 3) = a4 - (int)v8;
    a2[8] = HIDWORD(a1);
  }
  else
  {
    *a2 = 7;
  }
  return a1;
}


//======================================================================
// sub_351BC8
// address: 0x00351BC8   size: 0x2A (42 bytes)
//======================================================================
void *__fastcall sub_351BC8(int a1, void *a2)
{
  void *result; // r0
  unsigned int v5; // r6
  void *v6; // r4

  result = a2;
  if ( a2 != nullptr )
  {
    v5 = sub_34CF50((unsigned int)a2) + 1;
    result = (void *)sub_3516AC(a1, v5);
    v6 = result;
    if ( result != nullptr )
    {
      j_memcpy(result, a2, v5);
      return v6;
    }
  }
  return result;
}


//======================================================================
// sub_351BF2
// address: 0x00351BF2   size: 0x2A (42 bytes)
//======================================================================
_BYTE *__fastcall sub_351BF2(int a1, const void *a2, size_t a3)
{
  _BYTE *result; // r0
  _BYTE *v6; // r4

  if ( a2 == nullptr )
    return nullptr;
  result = (_BYTE *)sub_3516AC(a1, a3 + 1);
  v6 = result;
  if ( result != nullptr )
  {
    j_memcpy(result, a2, a3);
    v6[a3] = 0;
    return v6;
  }
  return result;
}


//======================================================================
// sub_351C1C
// address: 0x00351C1C   size: 0x1E (30 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_351C1C(int a1, int a2)
{
  unsigned __int8 *v2; // r4

  if ( a2 == 0 )
    return nullptr;
  v2 = sub_351BF2(a1, *(const void **)a2, *(_DWORD *)(a2 + 4));
  sub_34CF6A(v2);
  return v2;
}


//======================================================================
// sub_351C3C
// address: 0x00351C3C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_351C3C(int a1)
{
  int v2; // r5
  int v3; // r6

  sub_34CA08(7, a1);
  if ( a1 > dword_5592BC )
    goto LABEL_2;
  sqlite3_mutex_enter(dword_5592D0);
  v2 = dword_5592D4;
  if ( dword_5592D4 != 0 )
  {
    dword_5592D4 = *(_DWORD *)dword_5592D4;
    dword_5592DC = --dword_5592D8 < dword_5592C4;
    sub_34C9E8(1, 1);
  }
  sqlite3_mutex_leave(dword_5592D0);
  if ( v2 == 0 )
  {
LABEL_2:
    v2 = sub_351664(a1);
    if ( v2 != 0 )
    {
      v3 = sub_34CCB0();
      sqlite3_mutex_enter(dword_5592D0);
      sub_34C9E8(2, v3);
      sqlite3_mutex_leave(dword_5592D0);
    }
  }
  return v2;
}


//======================================================================
// sub_351CC4
// address: 0x00351CC4   size: 0x18 (24 bytes)
//======================================================================
void *__fastcall sub_351CC4(size_t a1)
{
  void *v2; // r0
  void *v3; // r4

  v2 = (void *)sub_351664(a1);
  v3 = v2;
  if ( v2 != nullptr )
    j_memset(v2, 0, a1);
  return v3;
}


//======================================================================
// sub_351CDC
// address: 0x00351CDC   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_351CDC(int a1)
{
  _DWORD *result; // r0

  result = sub_351CC4(0x200u);
  if ( result != nullptr )
    *result = a1;
  return result;
}


//======================================================================
// sub_351CF0
// address: 0x00351CF0   size: 0x6C (108 bytes)
//======================================================================
_DWORD *__fastcall sub_351CF0(int a1, int a2, int a3)
{
  unsigned int v5; // r5
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  int *v8; // r5
  int v9; // r0
  int v10; // r3
  int v11; // r2

  v5 = (unsigned int)((dword_47163C >> 31) - dword_47163C) >> 31;
  v6 = sub_351CC4(28 * v5 + 48);
  v7 = v6;
  if ( v6 != nullptr )
  {
    if ( v5 != 0 )
    {
      v8 = v6 + 12;
      v6[15] = 10;
    }
    else
    {
      v8 = &dword_55929C;
    }
    *v6 = v8;
    v6[1] = a1;
    v6[2] = a2;
    v6[3] = a3 != 0;
    if ( a3 != 0 )
    {
      v6[4] = 10;
      sqlite3_mutex_enter(*v8);
      v9 = *v8;
      v10 = v7[4] + v8[2];
      v11 = v8[1];
      v8[2] = v10;
      v8[3] = v11 + 10 - v10;
      sqlite3_mutex_leave(v9);
    }
  }
  return v7;
}


//======================================================================
// sub_351DB4
// address: 0x00351DB4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_351DB4(int *a1)
{
  int v2; // r5

  v2 = sub_34CA24(a1);
  sqlite3_free(a1);
  return v2;
}


//======================================================================
// sub_351DC8
// address: 0x00351DC8   size: 0xD8 (216 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00351DC8  PUSH    {R0-R2,R4-R7,LR}
//   00351DCA  MOVS    R4, R0
//   00351DCC  MOVS    R5, R1
//   00351DCE  CMP     R0, #0
//   00351DD0  BNE     loc_351DDA
//   00351DD2  MOVS    R0, R1
//   00351DD4  BL      sub_351664
//   00351DD8  B       locret_351E9E
//   00351DDA  CMP     R1, #0
//   00351DDC  BGT     loc_351DE4
//   00351DDE  BL      sqlite3_free
//   00351DE2  B       loc_351E98
//   00351DE4  LDR     R3, =0x7FFFFEFF
//   00351DE6  CMP     R1, R3
//   00351DE8  BGT     loc_351E98
//   00351DEA  BL      sub_34CCB0
//   00351DEE  LDR     R7, =(dword_471638 - 0x351DF8)
//   00351DF0  STR     R0, [SP,#0xC+var_8]
//   00351DF2  MOVS    R0, R5
//   00351DF4  ADD     R7, PC; dword_471638
//   00351DF6  LDR     R1, [R7,#(off_47166C - 0x471638)]
//   00351DF8  BLX     R1
//   00351DFA  LDR     R2, [SP,#0xC+var_8]
//   00351DFC  STR     R0, [SP,#0xC+var_C]
//   00351DFE  CMP     R2, R0
//   00351E00  BEQ     loc_351E9C
//   00351E02  LDR     R3, [R7]
//   00351E04  CMP     R3, #0
//   00351E06  BEQ     loc_351E8E
//   00351E08  LDR     R7, =(dword_559200 - 0x351E0E)
//   00351E0A  ADD     R7, PC; dword_559200
//   00351E0C  LDR     R0, [R7,#(dword_559260 - 0x559200)]
//   00351E0E  BL      sqlite3_mutex_enter
//   00351E12  MOVS    R0, #5
//   00351E14  MOVS    R1, R5
//   00351E16  BL      sub_34CA08
//   00351E1A  LDR     R0, [SP,#0xC+var_C]
//   00351E1C  LDR     R1, [SP,#0xC+var_8]
//   00351E1E  SUBS    R6, R0, R1
//   00351E20  MOVS    R2, R6
//   00351E22  ASRS    R3, R6, #0x1F
//   00351E24  LDR     R0, [R7,#(qword_559268 - 0x559200)]
//   00351E26  LDR     R1, [R7,#(qword_559268+4 - 0x559200)]
//   00351E28  SUBS    R0, R0, R2
//   00351E2A  SBCS    R1, R3
//   00351E2C  MOVS    R3, R1
//   00351E2E  LDR     R1, [R7]
//   00351E30  MOVS    R2, R0
//   00351E32  ASRS    R7, R1, #0x1F
//   00351E34  CMP     R3, R7
//   00351E36  BGT     loc_351E44
//   00351E38  BNE     loc_351E3E
//   00351E3A  CMP     R2, R1
//   00351E3C  BHI     loc_351E44
//   00351E3E  MOVS    R0, R6
//   00351E40  BL      sub_34CC70
//   00351E44  LDR     R6, =(dword_471638 - 0x351E4E)
//   00351E46  MOVS    R0, R4
//   00351E48  LDR     R1, [SP,#0xC+var_C]
//   00351E4A  ADD     R6, PC; dword_471638
//   00351E4C  LDR     R2, [R6,#(off_471664 - 0x471638)]
//   00351E4E  BLX     R2
//   00351E50  SUBS    R7, R0, #0
//   00351E52  BNE     loc_351E70
//   00351E54  LDR     R3, =(dword_559200 - 0x351E5A)
//   00351E56  ADD     R3, PC; dword_559200
//   00351E58  LDR     R3, [R3,#(off_559270 - 0x559200)]
//   00351E5A  CMP     R3, #0
//   00351E5C  BEQ     loc_351E80
//   00351E5E  MOVS    R0, R5
//   00351E60  BL      sub_34CC70
//   00351E64  LDR     R3, [R6,#(off_471664 - 0x471638)]
//   00351E66  MOVS    R0, R4
//   00351E68  LDR     R1, [SP,#0xC+var_C]
//   00351E6A  BLX     R3
//   00351E6C  SUBS    R7, R0, #0
//   00351E6E  BEQ     loc_351E80
//   00351E70  MOVS    R0, R7
//   00351E72  BL      sub_34CCB0
//   00351E76  LDR     R3, [SP,#0xC+var_8]
//   00351E78  SUBS    R1, R0, R3
//   00351E7A  MOVS    R0, #0
//   00351E7C  BL      sub_34C9E8
//   00351E80  LDR     R3, =(dword_559200 - 0x351E86)
//   00351E82  ADD     R3, PC; dword_559200
//   00351E84  LDR     R0, [R3,#(dword_559260 - 0x559200)]
//   00351E86  BL      sqlite3_mutex_leave
//   00351E8A  MOVS    R0, R7
//   00351E8C  B       locret_351E9E
//   00351E8E  LDR     R3, [R7,#(off_471664 - 0x471638)]
//   00351E90  MOVS    R0, R4
//   00351E92  LDR     R1, [SP,#0xC+var_C]
//   00351E94  BLX     R3
//   00351E96  B       locret_351E9E
//   00351E98  MOVS    R0, #0
//   00351E9A  B       locret_351E9E
//   00351E9C  MOVS    R0, R4
//   00351E9E  POP     {R1-R7,PC}

//======================================================================
// sub_351EB8
// address: 0x00351EB8   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall sub_351EB8(int a1, int a2)
{
  int v2; // r5
  int v6; // r0
  int v7; // r7
  _DWORD *i; // r7
  __int64 v9; // r2
  _DWORD *v10; // r0
  _DWORD *v11; // r3
  void *v12; // [sp+4h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 96);
  if ( a2 <= v2 || *(_BYTE *)(a1 + 6) == 0 )
    return 0;
  v6 = sub_351DC8(*(_DWORD *)(a1 + 92), 48 * a2);
  v7 = v6;
  if ( v6 != 0 )
  {
    v12 = (void *)(v6 + 48 * v2);
    j_memset(v12, 0, 48 * (a2 - v2));
    *(_DWORD *)(a1 + 92) = v7;
    for ( i = v12; ; i += 12 )
    {
      i[5] = *(_DWORD *)(a1 + 24);
      if ( **(_DWORD **)(a1 + 64) != 0 && (v9 = *(_QWORD *)(a1 + 72)) > 0 )
      {
        *i = v9;
      }
      else
      {
        *i = *(_DWORD *)(a1 + 148);
        HIDWORD(v9) = 0;
      }
      i[1] = HIDWORD(v9);
      i[6] = *(_DWORD *)(a1 + 52);
      v10 = sub_351CDC(*(_DWORD *)(a1 + 24));
      i[4] = v10;
      if ( v10 == nullptr )
        break;
      v11 = *(_DWORD **)(a1 + 208);
      if ( v11 != nullptr )
      {
        i[7] = v11[17];
        i[8] = v11[19];
        i[9] = v11[20];
        i[10] = v11[26];
      }
      *(_DWORD *)(a1 + 96) = ++v2;
      if ( v2 == a2 )
        return 0;
    }
  }
  return 7;
}


//======================================================================
// sub_351F60
// address: 0x00351F60   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_351F60(_DWORD *a1)
{
  _DWORD *v2; // r5
  int result; // r0
  _DWORD *v4; // r6

  v2 = (_DWORD *)a1[2];
  a1[2] = 0;
  result = sqlite3_free(a1[3]);
  a1[3] = 0;
  *a1 = 0;
  while ( v2 != nullptr )
  {
    v4 = (_DWORD *)*v2;
    result = sqlite3_free(v2);
    v2 = v4;
  }
  a1[1] = 0;
  return result;
}


//======================================================================
// sub_351F88
// address: 0x00351F88   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_351F88(int result)
{
  int v1; // r4
  int i; // r5

  v1 = result;
  if ( result != 0 )
  {
    if ( *(_DWORD *)(result + 8) != 0 )
    {
      for ( i = 0; i != 500; i += 4 )
        sub_351F88(*(_DWORD *)(v1 + i + 12));
    }
    return sqlite3_free(v1);
  }
  return result;
}


//======================================================================
// sub_351FB4
// address: 0x00351FB4   size: 0x76 (118 bytes)
//======================================================================
unsigned int __fastcall sub_351FB4(unsigned int result)
{
  _DWORD *v1; // r5
  int v2; // r4

  v1 = (_DWORD *)result;
  if ( result != 0 )
  {
    if ( result < dword_5592C8 || result >= dword_5592CC )
    {
      v2 = sub_34CCB0(result);
      sqlite3_mutex_enter(dword_5592D0);
      sub_34C9E8(2, -v2);
      sqlite3_mutex_leave(dword_5592D0);
      sqlite3_free(v1);
      return v2;
    }
    else
    {
      sqlite3_mutex_enter(dword_5592D0);
      sub_34C9E8(1, -1);
      *v1 = dword_5592D4;
      dword_5592D4 = (int)v1;
      dword_5592DC = ++dword_5592D8 < dword_5592C4;
      sqlite3_mutex_leave(dword_5592D0);
      return 0;
    }
  }
  return result;
}


//======================================================================
// sub_352038
// address: 0x00352038   size: 0x1E (30 bytes)
//======================================================================
unsigned int *__fastcall sub_352038(unsigned int *result)
{
  _DWORD *v1; // r4

  if ( result != nullptr )
  {
    v1 = (_DWORD *)result[5];
    result = (unsigned int *)sub_351FB4(*result);
    if ( v1[3] != 0 )
      --*(_DWORD *)(*v1 + 16);
  }
  return result;
}


//======================================================================
// sub_352056
// address: 0x00352056   size: 0x28 (40 bytes)
//======================================================================
unsigned int *__fastcall sub_352056(unsigned int *result)
{
  unsigned int *v1; // r5
  unsigned int *v2; // r4

  v1 = result;
  while ( v1[4] > v1[1] )
  {
    v2 = (unsigned int *)v1[6];
    if ( v2 == nullptr )
      break;
    sub_34DD74(v1[6]);
    sub_34DDA8(v2);
    result = sub_352038(v2);
  }
  return result;
}


//======================================================================
// sub_35207E
// address: 0x0035207E   size: 0x4C (76 bytes)
//======================================================================
__int64 __fastcall sub_35207E(__int64 a1)
{
  _DWORD *v1; // r6
  unsigned int i; // r5
  int *v3; // r7
  int v4; // r4

  v1 = (_DWORD *)a1;
  for ( i = 0; i < v1[10]; ++i )
  {
    v3 = (int *)(v1[11] + 4 * i);
    while ( 1 )
    {
      v4 = *v3;
      if ( *v3 == 0 )
        break;
      if ( *(_DWORD *)(v4 + 8) < HIDWORD(a1) )
      {
        v3 = (int *)(v4 + 16);
      }
      else
      {
        --v1[9];
        *v3 = *(_DWORD *)(v4 + 16);
        if ( *(_BYTE *)(v4 + 12) == 0 )
          sub_34DD74(v4);
        sub_352038((unsigned int *)v4);
      }
    }
  }
  return a1;
}


//======================================================================
// sub_3520CA
// address: 0x003520CA   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_3520CA(__int64 a1)
{
  sqlite3_mutex_enter(**(_DWORD **)a1);
  if ( HIDWORD(a1) <= *(_DWORD *)(a1 + 28) )
  {
    sub_35207E(a1);
    *(_DWORD *)(a1 + 28) = HIDWORD(a1) - 1;
  }
  return sqlite3_mutex_leave(**(_DWORD **)a1);
}


//======================================================================
// sub_3520F4
// address: 0x003520F4   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_3520F4(_DWORD **a1, int a2, int a3)
{
  _DWORD *v3; // r5
  int v7; // r3

  v3 = *a1;
  sqlite3_mutex_enter(**a1);
  if ( a3 != 0 || v3[4] > v3[1] )
  {
    sub_34DDA8((_DWORD *)a2);
    sub_352038((unsigned int *)a2);
  }
  else
  {
    v7 = v3[5];
    if ( v7 != 0 )
    {
      *(_DWORD *)(v7 + 28) = a2;
      *(_DWORD *)(a2 + 24) = v3[5];
    }
    else
    {
      v3[6] = a2;
    }
    v3[5] = a2;
    a1[8] = (_DWORD *)((char *)a1[8] + 1);
    *(_BYTE *)(a2 + 12) = 0;
  }
  return sqlite3_mutex_leave(**a1);
}


//======================================================================
// sub_352144
// address: 0x00352144   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_352144(unsigned int **a1)
{
  unsigned int *v1; // r4
  int v3; // r2
  int v4; // r3

  v1 = *a1;
  sqlite3_mutex_enter(**a1);
  sub_35207E((unsigned int)a1);
  v3 = v1[1] - (_DWORD)a1[5];
  v1[1] = v3;
  v4 = v1[2] - (_DWORD)a1[4];
  v1[2] = v4;
  v1[3] = v3 + 10 - v4;
  sub_352056(v1);
  sqlite3_mutex_leave(*v1);
  sqlite3_free(a1[11]);
  return sqlite3_free(a1);
}


//======================================================================
// sub_352188
// address: 0x00352188   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_352188(int a1)
{
  int i; // r5
  int v3; // r3
  int *v4; // r0
  int result; // r0

  for ( i = 0; i < *(_DWORD *)(a1 + 96); ++i )
  {
    v3 = 48 * i;
    sub_351F88(*(_DWORD *)(*(_DWORD *)(a1 + 92) + v3 + 16));
  }
  v4 = *(int **)(a1 + 68);
  if ( *(_BYTE *)(a1 + 4) == 0 || (_UNKNOWN *)*v4 == &unk_45465C )
    sub_34CA24(v4);
  result = sqlite3_free(*(_DWORD *)(a1 + 92));
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  return result;
}


//======================================================================
// sub_352200
// address: 0x00352200   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_352200(int result)
{
  int v1; // r4
  int i; // r5
  int v3; // r0
  int v4; // r6
  void (__fastcall *v5)(_DWORD); // r3

  v1 = result;
  if ( *(_DWORD *)(result + 20) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v3 = *(_DWORD *)(v1 + 20);
      if ( i >= *(_DWORD *)(v1 + 16) )
        break;
      v4 = *(_DWORD *)(v3 + 24 * i + 20);
      if ( v4 != 0 )
      {
        v5 = *(void (__fastcall **)(_DWORD))(v4 + 16);
        if ( v5 != nullptr )
          v5(*(_DWORD *)(v4 + 12));
        sqlite3_free(v4);
      }
    }
    result = sqlite3_free(v3);
    *(_DWORD *)(v1 + 20) = 0;
  }
  return result;
}


//======================================================================
// sub_35223E
// address: 0x0035223E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_35223E(int a1)
{
  return sqlite3_free(a1);
}


//======================================================================
// sub_352246
// address: 0x00352246   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_352246(_DWORD *a1)
{
  _DWORD *i; // r4
  _DWORD *v3; // r6

  for ( i = (_DWORD *)a1[1]; i != nullptr; i = v3 )
  {
    v3 = (_DWORD *)*i;
    sqlite3_free(i);
  }
  sub_350180(a1);
  return 0;
}


//======================================================================
// sub_352266
// address: 0x00352266   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_352266(_DWORD *a1)
{
  sub_352246(a1);
  return 0;
}


//======================================================================
// sub_352274
// address: 0x00352274   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_352274(pthread_mutex_t *a1)
{
  j_pthread_mutex_destroy(a1);
  return sqlite3_free(a1);
}


//======================================================================
// sub_352284
// address: 0x00352284   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_352284(_BYTE *a1, unsigned __int64 a2)
{
  int v3; // r1
  unsigned __int64 v4; // r2
  int v5; // r1
  bool v6; // cf
  int v7; // r7
  _BYTE v9[12]; // [sp+8h] [bp-14h]

  v3 = HIBYTE(HIDWORD(a2)) << 24;
  if ( v3 != 0 )
  {
    a1[8] = a2;
    v4 = a2 >> 8;
    v5 = 7;
    do
    {
      a1[v5] = v4 | 0x80;
      v4 >>= 7;
      v6 = v5-- != 0;
    }
    while ( v6 );
    return 9;
  }
  else
  {
    while ( 1 )
    {
      v9[v3] = a2 | 0x80;
      a2 >>= 7;
      v7 = v3 + 1;
      if ( a2 == 0 )
        break;
      ++v3;
    }
    v9[0] &= ~0x80u;
    do
    {
      *a1++ = v9[v3];
      v6 = v3-- != 0;
    }
    while ( v6 );
    return v7;
  }
}


//======================================================================
// sub_352308
// address: 0x00352308   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_352308(int a1, unsigned __int64 a2)
{
  int v4; // r0
  _DWORD v6[2]; // [sp+0h] [bp-10h] BYREF
  unsigned __int64 v7; // [sp+8h] [bp-8h]

  v6[0] = a1;
  v7 = a2;
  v4 = sub_352284(v6, a2);
  sub_350808(a1, (int)v6, v4);
  return v6[0];
}


//======================================================================
// sub_352338
// address: 0x00352338   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_352338(_BYTE *a1, unsigned int a2)
{
  if ( a2 >> 14 != 0 )
    return sub_352284(a1, a2);
  *a1 = (a2 >> 7) | 0x80;
  a1[1] = a2 & 0x7F;
  return 2;
}


//======================================================================
// sub_35235C
// address: 0x0035235C   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_35235C(unsigned __int8 *a1, int *a2, int a3)
{
  int v3; // r2
  int v5; // r1
  int result; // r0
  int v7; // r1
  int v8; // r3
  unsigned __int8 *v9; // [sp+0h] [bp-Ch] BYREF
  int *v10; // [sp+4h] [bp-8h]
  int v11; // [sp+8h] [bp-4h]

  v9 = a1;
  v10 = a2;
  v11 = a3;
  v3 = a1[1];
  v5 = *a1;
  if ( (v3 & 0x80) != 0 )
  {
    v7 = (v5 << 14) | a1[2];
    if ( (v7 & 0x80) != 0 )
    {
      result = sub_34D798(a1, &v9);
      v8 = (int)v9;
      if ( v10 != nullptr )
        v8 = -1;
      *a2 = v8;
    }
    else
    {
      *a2 = v7 & 0x1FC07F | ((v3 & 0x7F) << 7);
      return 3;
    }
  }
  else
  {
    *a2 = v3 | ((v5 & 0x7F) << 7);
    return 2;
  }
  return result;
}


//======================================================================
// sub_3523AC
// address: 0x003523AC   size: 0xC6 (198 bytes)
//======================================================================
unsigned int __fastcall sub_3523AC(int a1, unsigned __int8 *a2, int a3)
{
  int v6; // r5
  int v7; // r3
  __int16 v8; // r5
  int v9; // r3
  __int16 v10; // r0
  unsigned int result; // r0
  unsigned int v12; // r5
  int v13; // r7
  unsigned int v14; // r0
  unsigned int v15; // r1
  int v16; // r1
  int v17; // t0
  signed int v18; // r1
  __int16 v19; // r5
  unsigned int v20; // [sp+4h] [bp-10h]
  int v21[2]; // [sp+Ch] [bp-8h] BYREF

  *(_DWORD *)(a3 + 8) = a2;
  v6 = *(unsigned __int8 *)(a1 + 6);
  if ( *(_BYTE *)(a1 + 2) != 0 )
  {
    if ( *(_BYTE *)(a1 + 4) != 0 )
    {
      v7 = *a2;
      if ( (v7 & 0x80) != 0 )
      {
        v6 = sub_35235C(a2, v21, v7 << 24);
      }
      else
      {
        v21[0] = *a2;
        v6 = 1;
      }
    }
    else
    {
      v21[0] = *(unsigned __int8 *)(a1 + 4);
    }
    v8 = sub_34D798(&a2[v6], (_DWORD *)a3) + v6;
    *(_DWORD *)(a3 + 12) = v21[0];
  }
  else
  {
    *(_DWORD *)(a3 + 12) = *(unsigned __int8 *)(a1 + 2);
    v9 = a2[v6];
    if ( (v9 & 0x80) != 0 )
    {
      v10 = sub_35235C(&a2[v6], v21, v9 << 24);
    }
    else
    {
      v21[0] = a2[v6];
      v10 = 1;
    }
    *(_DWORD *)a3 = v21[0];
    v8 = v10 + v6;
    *(_DWORD *)(a3 + 4) = 0;
  }
  result = v21[0];
  *(_WORD *)(a3 + 20) = v8;
  *(_DWORD *)(a3 + 16) = result;
  v20 = *(unsigned __int16 *)(a1 + 8);
  if ( result > v20 )
  {
    v13 = *(unsigned __int16 *)(a1 + 10);
    v14 = result - v13;
    v15 = *(_DWORD *)(*(_DWORD *)(a1 + 52) + 36) - 4;
    v17 = v14 / v15;
    v16 = v14 % v15;
    result = v17;
    v18 = v16 + v13;
    if ( v18 > (int)v20 )
      *(_WORD *)(a3 + 22) = v13;
    else
      *(_WORD *)(a3 + 22) = v18;
    v19 = v8 + *(_WORD *)(a3 + 22);
    *(_WORD *)(a3 + 24) = v19;
    *(_WORD *)(a3 + 26) = v19 + 4;
  }
  else
  {
    result = (unsigned __int16)result;
    v12 = (unsigned __int16)(v8 + result);
    if ( v12 <= 3 )
      *(_WORD *)(a3 + 26) = 4;
    else
      *(_WORD *)(a3 + 26) = v12;
    *(_WORD *)(a3 + 22) = result;
    *(_WORD *)(a3 + 24) = 0;
  }
  return result;
}


//======================================================================
// sub_352472
// address: 0x00352472   size: 0x1E (30 bytes)
//======================================================================
unsigned int __fastcall sub_352472(int a1, int a2, int a3)
{
  return sub_3523AC(
           a1,
           (unsigned __int8 *)(*(_DWORD *)(a1 + 56)
                             + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(a1 + 64) + 2 * a2))
                                                & *(_WORD *)(a1 + 18))),
           a3);
}


//======================================================================
// sub_352490
// address: 0x00352490   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_352490(int a1, _DWORD *a2)
{
  if ( *(_WORD *)(a1 + 58) == 0 )
    sub_352472(
      *(_DWORD *)(4 * (*(__int16 *)(a1 + 86) + 32) + a1),
      *(unsigned __int16 *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1),
      a1 + 32);
  *a2 = *(unsigned __int16 *)(a1 + 54);
  return *(_DWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 52);
}


//======================================================================
// sub_3524C6
// address: 0x003524C6   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_3524C6(int a1, int a2)
{
  unsigned __int8 *v4; // r4
  int v5; // r3
  int v6; // r0
  unsigned __int8 *v7; // r3
  int v8; // r3
  int v9; // r0
  unsigned int v10; // r4
  unsigned int v12; // [sp+4h] [bp-10h]
  int v13[2]; // [sp+Ch] [bp-8h] BYREF

  v4 = (unsigned __int8 *)(a2 + *(unsigned __int8 *)(a1 + 6));
  if ( *(_BYTE *)(a1 + 2) != 0 )
  {
    if ( *(_BYTE *)(a1 + 4) != 0 )
    {
      v5 = *v4;
      if ( (v5 & 0x80) != 0 )
      {
        v6 = sub_35235C((unsigned __int8 *)(a2 + *(unsigned __int8 *)(a1 + 6)), v13, v5 << 24);
      }
      else
      {
        v13[0] = *v4;
        v6 = 1;
      }
      v4 += v6;
    }
    else
    {
      v13[0] = *(unsigned __int8 *)(a1 + 4);
    }
    v7 = v4 + 9;
    do
      ++v4;
    while ( *(v4 - 1) > 0x7Fu && v4 != v7 );
  }
  else
  {
    v8 = *v4;
    if ( (v8 & 0x80) != 0 )
    {
      v9 = sub_35235C((unsigned __int8 *)(a2 + *(unsigned __int8 *)(a1 + 6)), v13, v8 << 24);
    }
    else
    {
      v13[0] = *v4;
      v9 = 1;
    }
    v4 += v9;
  }
  v12 = *(unsigned __int16 *)(a1 + 8);
  if ( v13[0] > v12 )
  {
    if ( (v13[0] - (unsigned int)*(unsigned __int16 *)(a1 + 10)) % (*(_DWORD *)(*(_DWORD *)(a1 + 52) + 36) - 4)
       + *(unsigned __int16 *)(a1 + 10) > v12 )
      v13[0] = *(unsigned __int16 *)(a1 + 10);
    else
      v13[0] = (v13[0] - (unsigned int)*(unsigned __int16 *)(a1 + 10)) % (*(_DWORD *)(*(_DWORD *)(a1 + 52) + 36) - 4)
             + *(unsigned __int16 *)(a1 + 10);
    v13[0] += 4;
  }
  v10 = (unsigned int)&v4[v13[0] - a2];
  if ( v10 <= 3 )
    v13[0] = 4;
  else
    v13[0] = v10;
  return LOWORD(v13[0]);
}


//======================================================================
// sub_35256A
// address: 0x0035256A   size: 0x92 (146 bytes)
//======================================================================
unsigned int __fastcall sub_35256A(unsigned int result, signed int a2, unsigned __int8 *a3, int a4)
{
  int v4; // r5
  unsigned int v5; // r7
  int v6; // r3
  unsigned int v7; // r6
  unsigned int v8; // r4
  int v9; // r3
  int v10; // r0
  signed int i; // [sp+0h] [bp-1Ch]
  unsigned int v15; // [sp+10h] [bp-Ch] BYREF
  int v16; // [sp+14h] [bp-8h] BYREF

  v4 = *(_DWORD *)(a4 + 8);
  *(_BYTE *)(a4 + 6) = 0;
  v5 = result;
  v6 = *a3;
  if ( (v6 & 0x80) != 0 )
  {
    result = sub_35235C(a3, (int *)&v15, v6 << 24);
    v7 = result;
  }
  else
  {
    v15 = *a3;
    v7 = 1;
  }
  v8 = 0;
  for ( i = v15; v7 < v15 && *(unsigned __int16 *)(a4 + 4) > v8 && i <= a2; i += result )
  {
    v9 = a3[v7];
    if ( (v9 & 0x80) != 0 )
    {
      v10 = sub_35235C(&a3[v7], &v16, v9 << 24);
    }
    else
    {
      v16 = a3[v7];
      v10 = 1;
    }
    v7 += v10;
    *(_BYTE *)(v4 + 30) = *(_BYTE *)(v5 + 4);
    *(_DWORD *)v4 = *(_DWORD *)(v5 + 12);
    *(_DWORD *)(v4 + 36) = 0;
    v8 = (unsigned __int16)(v8 + 1);
    result = sub_3506B0((char *)&a3[i], v16, v4);
    v4 += 40;
  }
  *(_WORD *)(a4 + 4) = v8;
  return result;
}


//======================================================================
// sub_3525FC
// address: 0x003525FC   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_3525FC(int a1, int a2)
{
  __int16 v2; // r3
  __int16 v3; // r2

  if ( a1 < a2 )
  {
    v2 = a2;
    if ( a2 <= a1 + 49 )
    {
      if ( a2 <= a1 + 31 )
      {
        v3 = byte_44AC24[a2 - a1];
        goto LABEL_9;
      }
      goto LABEL_7;
    }
  }
  else
  {
    v2 = a1;
    if ( a1 <= a2 + 49 )
    {
      if ( a1 <= a2 + 31 )
      {
        v3 = byte_44AC24[a1 - a2];
LABEL_9:
        v2 += v3;
        return v2;
      }
LABEL_7:
      ++v2;
    }
  }
  return v2;
}


//======================================================================
// sub_352650
// address: 0x00352650   size: 0x80 (128 bytes)
//======================================================================
unsigned __int64 __fastcall sub_352650(int a1)
{
  __int64 v1; // r6
  unsigned __int64 v2; // r4
  __int16 v3; // r2

  v1 = 1;
  if ( a1 > 9 )
  {
    v2 = a1 % 10;
    v3 = a1 / 10;
    if ( v2 <= 4 )
    {
      if ( (unsigned __int16)(a1 % 10) != 0 )
        --v2;
    }
    else
    {
      v2 -= 2LL;
    }
    if ( v3 <= 2 )
      return (v2 + 8) >> (3 - (unsigned __int8)v3);
    if ( v3 > 60 )
      return 0x7FFFFFFFFFFFFFFFLL;
    return (v2 + 8) << ((unsigned __int8)v3 - 3);
  }
  return v1;
}


//======================================================================
// sub_3526D8
// address: 0x003526D8   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_3526D8(int result, _DWORD *a2, _DWORD *a3)
{
  int v3; // r3
  _DWORD *v4; // r1

  if ( a2 == nullptr )
    goto LABEL_9;
  v3 = 0;
  if ( *a2 != 0 )
    v3 = a2[1];
  ++*a2;
  a2[1] = a3;
  if ( v3 != 0 )
  {
    *a3 = v3;
    a3[1] = *(_DWORD *)(v3 + 4);
    v4 = *(_DWORD **)(v3 + 4);
    if ( v4 != nullptr )
      *v4 = a3;
    else
      *(_DWORD *)result = a3;
    *(_DWORD *)(v3 + 4) = a3;
  }
  else
  {
LABEL_9:
    *a3 = *(_DWORD *)result;
    if ( *(_DWORD *)result != 0 )
      *(_DWORD *)(*(_DWORD *)result + 4) = a3;
    a3[1] = 0;
    *(_DWORD *)result = a3;
  }
  return result;
}


//======================================================================
// sub_35271C
// address: 0x0035271C   size: 0x160 (352 bytes)
//======================================================================
int *__fastcall sub_35271C(unsigned int *a1, unsigned __int8 *a2, int a3, int *a4)
{
  unsigned int v4; // r5
  unsigned int v5; // r7
  int **v8; // r0
  int *v9; // r5
  int *v10; // r2
  int *v11; // r3
  unsigned int v12; // r3
  _DWORD *v13; // r7
  int v14; // r3
  _DWORD *v15; // r0
  _DWORD *v16; // r5
  unsigned int v17; // r3
  int v18; // r6
  void *v19; // r6
  unsigned int v20; // r7
  unsigned int v21; // r0
  int v22; // r0
  unsigned int v25; // [sp+4h] [bp-10h]
  unsigned int v27; // [sp+Ch] [bp-8h]

  v5 = 0;
  if ( *a1 != 0 )
  {
    v4 = *a1;
    v5 = sub_34DA10(a2, a3) % v4;
  }
  v8 = sub_34DA38(a1, a2, a3, v5);
  if ( v8 != nullptr )
  {
    v9 = v8[2];
    if ( a4 != nullptr )
    {
      v8[2] = a4;
      a4 = v9;
      v8[3] = (int *)a2;
    }
    else
    {
      v10 = v8[1];
      v11 = *v8;
      if ( v10 != nullptr )
        *v10 = (int)v11;
      else
        a1[2] = (unsigned int)v11;
      if ( *v8 != nullptr )
        (*v8)[1] = (int)v8[1];
      v12 = a1[3];
      if ( v12 != 0 )
      {
        v13 = (_DWORD *)(v12 + 8 * v5);
        if ( (int **)v13[1] == v8 )
          v13[1] = *v8;
        --*v13;
      }
      sqlite3_free(v8);
      a4 = v9;
      v14 = a1[1] - 1;
      a1[1] = v14;
      if ( v14 == 0 )
        sub_351F60(a1);
    }
  }
  else if ( a4 != nullptr )
  {
    v15 = (_DWORD *)sub_351664(20);
    v16 = v15;
    if ( v15 != nullptr )
    {
      v15[2] = a4;
      v15[4] = a3;
      v15[3] = a2;
      v17 = a1[1] + 1;
      a1[1] = v17;
      if ( v17 > 9 && v17 > 2 * *a1 )
      {
        v18 = 2 * v17;
        if ( 16 * v17 > 0x400 )
          v18 = 128;
        if ( v18 != *a1 )
        {
          sub_34CB1C();
          v19 = (void *)sub_351664(8 * v18);
          sub_34CB30();
          if ( v19 != nullptr )
          {
            sqlite3_free(a1[3]);
            a1[3] = (unsigned int)v19;
            v25 = (unsigned int)sub_34CCB0(v19) >> 3;
            *a1 = v25;
            j_memset(v19, 0, 8 * v25);
            v20 = a1[2];
            a1[2] = 0;
            while ( v20 != 0 )
            {
              v21 = sub_34DA10(*(unsigned __int8 **)(v20 + 12), *(_DWORD *)(v20 + 16));
              v27 = *(_DWORD *)v20;
              sub_3526D8((int)(a1 + 2), (_DWORD *)v19 + 2 * (v21 % v25), (_DWORD *)v20);
              v20 = v27;
            }
            v5 = sub_34DA10(a2, a3) % *a1;
          }
        }
      }
      a4 = (int *)a1[3];
      v22 = (int)(a1 + 2);
      if ( a4 != nullptr )
      {
        sub_3526D8(v22, &a4[2 * v5], v16);
        return nullptr;
      }
      else
      {
        sub_3526D8(v22, nullptr, v16);
      }
    }
  }
  return a4;
}


//======================================================================
// sub_35287C
// address: 0x0035287C   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_35287C(int a1, const char *a2, int a3, _DWORD *a4)
{
  int v6; // r1
  int v7; // r0
  struct stat buf; // [sp+8h] [bp-6Ch] BYREF

  if ( a3 == 1 )
    v6 = 6;
  else
    v6 = 4 * (a3 == 2);
  v7 = off_472340(a2, v6);
  *a4 = v7 == 0;
  if ( a3 == 0 && v7 == 0 && off_472358(a2, &buf) == 0 && *(_QWORD *)&buf.st_blksize == 0 )
    *a4 = 0;
  return 0;
}


//======================================================================
// sub_3528D0
// address: 0x003528D0   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_3528D0(_DWORD *a1, int a2)
{
  unsigned int v3; // r5
  unsigned int v4; // r6
  int result; // r0
  unsigned int i; // r0
  unsigned int v7; // r1

  v3 = a2 - 1;
  while ( 1 )
  {
    v4 = a1[2];
    if ( v4 == 0 )
      break;
    a1 = (_DWORD *)a1[v3 / v4 + 3];
    v3 %= v4;
    if ( a1 == nullptr )
      return 0;
  }
  if ( *a1 <= 0xFA0u )
    return ((int)*((unsigned __int8 *)a1 + (v3 >> 3) + 12) >> (v3 & 7)) & 1;
  for ( i = v3; ; i = v7 + 1 )
  {
    v7 = i % 0x7D;
    result = a1[i % 0x7D + 3];
    if ( result == 0 )
      break;
    if ( result == v3 + 1 )
      return 1;
  }
  return result;
}


//======================================================================
// sub_352940
// address: 0x00352940   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_352940(int result, unsigned int a2)
{
  unsigned int *v2; // r3

  v2 = (unsigned int *)result;
  if ( result != 0 )
  {
    result = 0;
    if ( a2 <= *v2 && a2 != 0 )
      return sub_3528D0(v2, a2);
  }
  return result;
}


//======================================================================
// sub_35295C
// address: 0x0035295C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_35295C(int a1)
{
  int v1; // r5
  unsigned int v2; // r6
  int v3; // r4
  int v4; // r7
  int v5; // r3

  v1 = *(_DWORD *)(a1 + 16);
  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  v4 = *(_DWORD *)(v1 + 96);
  while ( 1 )
  {
    if ( v3 >= v4 )
      return 0;
    v5 = *(_DWORD *)(v1 + 92) + 48 * v3;
    if ( *(_DWORD *)(v5 + 20) >= v2 && sub_352940(*(_DWORD *)(v5 + 16), v2) == 0 )
      break;
    ++v3;
  }
  return 1;
}


//======================================================================
// sub_352990
// address: 0x00352990   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_352990(int result)
{
  int v1; // r4

  v1 = result;
  if ( --*(_WORD *)(result + 26) == 0 )
  {
    --*(_DWORD *)(*(_DWORD *)(result + 28) + 12);
    if ( (*(_WORD *)(result + 24) & 2) != 0 )
    {
      sub_34DC34((_DWORD *)result);
      return sub_34DC84(v1);
    }
    else
    {
      return sub_34DCB8();
    }
  }
  return result;
}


//======================================================================
// sub_3529C0
// address: 0x003529C0   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3529C0(_DWORD *result)
{
  _DWORD *v1; // r4

  v1 = result;
  if ( (result[6] & 2) != 0 )
  {
    result = sub_34DC34(result);
    *((_WORD *)v1 + 12) &= 0xFFF9u;
    if ( *((_WORD *)v1 + 13) == 0 )
      return (_DWORD *)sub_34DCB8(v1);
  }
  return result;
}


//======================================================================
// sub_3529E8
// address: 0x003529E8   size: 0x48 (72 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003529E8  PUSH    {R4-R6,LR}
//   003529EA  LDR     R3, [R0,#0x28]
//   003529EC  MOVS    R5, R0
//   003529EE  MOVS    R4, R1
//   003529F0  CMP     R3, #0
//   003529F2  BEQ     locret_352A2E
//   003529F4  LDR     R0, [R0]
//   003529F6  CMP     R0, #0
//   003529F8  BEQ     loc_352A0A
//   003529FA  LDR     R3, [R0,#0x14]
//   003529FC  LDR     R6, [R0,#0x20]
//   003529FE  CMP     R3, R4
//   00352A00  BLS     loc_352A06
//   00352A02  BL      sub_3529C0
//   00352A06  MOVS    R0, R6
//   00352A08  B       loc_3529F6
//   00352A0A  CMP     R4, #0
//   00352A0C  BNE     loc_352A20
//   00352A0E  LDR     R3, [R5,#0x2C]
//   00352A10  CMP     R3, #0
//   00352A12  BEQ     loc_352A20
//   00352A14  MOVS    R1, R4; int
//   00352A16  LDR     R0, [R3,#4]; void *
//   00352A18  LDR     R2, [R5,#0x14]; size_t
//   00352A1A  BL      j_memset
//   00352A1E  MOVS    R4, #1
//   00352A20  LDR     R3, =(dword_471638 - 0x352A2A)
//   00352A22  LDR     R0, [R5,#0x28]
//   00352A24  ADDS    R1, R4, #1
//   00352A26  ADD     R3, PC; dword_471638
//   00352A28  ADDS    R3, #(off_4716C8 - 0x471638)
//   00352A2A  LDR     R3, [R3]
//   00352A2C  BLX     R3
//   00352A2E  POP     {R4-R6,PC}

//======================================================================
// sub_352A34
// address: 0x00352A34   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_352A34(_DWORD **a1)
{
  _DWORD *result; // r0

  while ( 1 )
  {
    result = *a1;
    if ( *a1 == nullptr )
      break;
    sub_3529C0(result);
  }
  return result;
}


//======================================================================
// sub_352A48
// address: 0x00352A48   size: 0x34 (52 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00352A48  PUSH    {R4-R6,LR}
//   00352A4A  LDR     R3, [R0,#0x1C]
//   00352A4C  MOVS    R4, R0
//   00352A4E  MOVS    R5, R1
//   00352A50  LDR     R0, [R3,#0x28]
//   00352A52  LDR     R3, =(dword_471638 - 0x352A5C)
//   00352A54  LDR     R2, [R4,#0x14]
//   00352A56  LDR     R1, [R4]
//   00352A58  ADD     R3, PC; dword_471638
//   00352A5A  ADDS    R3, #(off_4716C4 - 0x471638)
//   00352A5C  LDR     R6, [R3]
//   00352A5E  MOVS    R3, R5
//   00352A60  BLX     R6
//   00352A62  LDRH    R2, [R4,#0x18]
//   00352A64  MOVS    R3, #6
//   00352A66  STR     R5, [R4,#0x14]
//   00352A68  ANDS    R3, R2
//   00352A6A  CMP     R3, #6
//   00352A6C  BNE     locret_352A7A
//   00352A6E  MOVS    R0, R4
//   00352A70  BL      sub_34DC34
//   00352A74  MOVS    R0, R4
//   00352A76  BL      sub_34DC84
//   00352A7A  POP     {R4-R6,PC}

//======================================================================
// sub_352A80
// address: 0x00352A80   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_352A80(unsigned int **a1, unsigned int *a2)
{
  int result; // r0
  unsigned int *v5; // r4
  int v6; // r2
  unsigned int v7; // r3

  result = (int)a1[3];
  if ( result != 0 )
  {
    v5 = *a1;
    sqlite3_mutex_enter(**a1);
    v6 = 10 - v5[2];
    v7 = (unsigned int)a2 + v5[1] - (_DWORD)a1[5];
    v5[1] = v7;
    v5[3] = v6 + v7;
    a1[5] = a2;
    a1[6] = (unsigned int *)(9 * (int)a2 / 0xAu);
    sub_352056(v5);
    return sqlite3_mutex_leave(*v5);
  }
  return result;
}


//======================================================================
// sub_352AC2
// address: 0x00352AC2   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_352AC2(int result)
{
  unsigned int *v1; // r4
  unsigned int v2; // r5

  if ( *(_DWORD *)(result + 12) != 0 )
  {
    v1 = *(unsigned int **)result;
    sqlite3_mutex_enter(**(_DWORD **)result);
    v2 = v1[1];
    v1[1] = 0;
    sub_352056(v1);
    v1[1] = v2;
    return sqlite3_mutex_leave(*v1);
  }
  return result;
}


//======================================================================
// sub_352AE8
// address: 0x00352AE8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_352AE8(int a1)
{
  int result; // r0

  if ( *(_BYTE *)(a1 + 7) != 0 )
    return sub_34CA72(*(_DWORD *)(a1 + 64));
  result = sub_34CA68(*(_DWORD *)(a1 + 64));
  if ( result == 0 )
    return sub_34CA72(*(_DWORD *)(a1 + 64));
  return result;
}


//======================================================================
// sub_352B0C
// address: 0x00352B0C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_352B0C(int a1)
{
  _DWORD *v2; // r0
  int result; // r0

  v2 = *(_DWORD **)(a1 + 60);
  if ( *v2 == 0 || (result = sub_34CA7C((int)v2)) == 12 || result == 0 )
  {
    result = 0;
    if ( *(_BYTE *)(a1 + 7) == 0 )
      return sub_34CA68(*(_DWORD *)(a1 + 60));
  }
  return result;
}


//======================================================================
// sub_352B3A
// address: 0x00352B3A   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_352B3A(int result)
{
  if ( *(_BYTE *)(result + 43) == 0 )
    return sub_34CA9A(*(_DWORD *)(result + 4));
  return result;
}


//======================================================================
// sub_352B52
// address: 0x00352B52   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_352B52(int a1)
{
  int v2; // r4
  int result; // r0

  v2 = *(unsigned __int8 *)(a1 + 43);
  result = 0;
  if ( v2 == 0 )
    return sub_34CA9A(*(_DWORD *)(a1 + 4));
  return result;
}


//======================================================================
// sub_352B6A
// address: 0x00352B6A   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_352B6A(int a1, int (__fastcall *a2)(int), int a3)
{
  int v6; // r0
  int v7; // r4

  do
  {
    v6 = sub_352B52(a1);
    v7 = v6;
  }
  while ( a2 != nullptr && v6 == 5 && a2(a3) != 0 );
  return v7;
}


//======================================================================
// sub_352B94
// address: 0x00352B94   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_352B94(int result)
{
  if ( *(_BYTE *)(result + 43) == 0 )
    return sub_34CA9A(*(_DWORD *)(result + 4));
  return result;
}


//======================================================================
// sub_352BAA
// address: 0x00352BAA   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_352BAA(int result)
{
  int v1; // r4
  int v2; // r5
  int v3; // r6

  v1 = result;
  v2 = 0;
  if ( *(_BYTE *)(result + 43) != 2 )
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(result + 4) + 64))(*(_DWORD *)(result + 4));
  while ( v2 < *(_DWORD *)(v1 + 24) )
  {
    v3 = 4 * v2++;
    result = sqlite3_free(*(_DWORD *)(*(_DWORD *)(v1 + 32) + v3));
    *(_DWORD *)(*(_DWORD *)(v1 + 32) + v3) = 0;
  }
  return result;
}


//======================================================================
// sub_352BDE
// address: 0x00352BDE   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_352BDE(int a1)
{
  _BYTE *v1; // r5

  v1 = (_BYTE *)(a1 + 44);
  if ( *(_BYTE *)(a1 + 44) != 0 )
  {
    sub_352B94(a1);
    *v1 = 0;
    *(_BYTE *)(a1 + 47) = 0;
  }
  return 0;
}


//======================================================================
// sub_352C00
// address: 0x00352C00   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_352C00(int a1)
{
  int result; // r0

  result = sub_352BDE(a1);
  if ( *(__int16 *)(a1 + 40) >= 0 )
  {
    result = sub_352B3A(a1);
    *(_WORD *)(a1 + 40) = -1;
  }
  return result;
}


//======================================================================
// sub_352C20
// address: 0x00352C20   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_352C20(int a1, _DWORD *a2)
{
  int v4; // r2
  int v5; // r3

  v4 = 0;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 83) == 1 )
  {
    if ( *(_WORD *)(a1 + 58) == 0 )
    {
      sub_352472(
        *(_DWORD *)(4 * (*(__int16 *)(a1 + 86) + 32) + a1),
        *(unsigned __int16 *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1),
        a1 + 32);
      *(_BYTE *)(a1 + 82) = 1;
    }
    v4 = *(_DWORD *)(a1 + 32);
    v5 = *(_DWORD *)(a1 + 36);
  }
  *a2 = v4;
  a2[1] = v5;
  return 0;
}


//======================================================================
// sub_352C70
// address: 0x00352C70   size: 0x78 (120 bytes)
//======================================================================
__int64 __fastcall sub_352C70(__int64 a1, int a2)
{
  __int64 v2; // r2
  double v3; // r4
  __int64 v5; // [sp+0h] [bp-Ch] BYREF
  int v6; // [sp+8h] [bp-4h]

  v5 = a1;
  v6 = a2;
  HIDWORD(a1) = a1;
  LOWORD(a1) = *(_WORD *)(a1 + 28);
  if ( (a1 & 4) != 0 )
    return *(_QWORD *)(HIDWORD(a1) + 16);
  if ( (a1 & 8) != 0 )
  {
    v3 = *(double *)(HIDWORD(a1) + 8);
    if ( v3 <= -9.22337204e18 )
    {
      return 0x8000000000000000LL;
    }
    else if ( v3 >= 9.22337204e18 )
    {
      return 0x7FFFFFFFFFFFFFFFLL;
    }
    else
    {
      return (__int64)v3;
    }
  }
  else
  {
    v2 = 0;
    if ( (a1 & 0x12) != 0 )
    {
      v5 = 0;
      sub_34D568(
        *(unsigned __int8 **)(HIDWORD(a1) + 4),
        &v5,
        *(_DWORD *)(HIDWORD(a1) + 24),
        *(unsigned __int8 *)(HIDWORD(a1) + 30));
      return v5;
    }
  }
  return v2;
}


//======================================================================
// sub_352D08
// address: 0x00352D08   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_352D08(__int64 a1, int a2)
{
  int v2; // r4
  __int64 v3; // r0
  __int16 v4; // r2

  v2 = a1;
  v3 = sub_352C70(a1, a2);
  v4 = *(_WORD *)(v2 + 28);
  *(_QWORD *)(v2 + 16) = v3;
  *(_WORD *)(v2 + 28) = v4 & 0xBE00 | 4;
  return 0;
}


//======================================================================
// sub_352D38
// address: 0x00352D38   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall sub_352D38(_DWORD *a1)
{
  int v1; // r1
  __int64 v2; // r2
  int v3; // r3
  int v4; // r2
  __int64 v5; // r0

  v1 = a1[1];
  v2 = 0;
  if ( *a1 > v1 )
  {
    v3 = a1[2];
    v4 = v1 + 1;
    a1[1] = v1 + 1;
    HIDWORD(v5) = 4 * v1;
    LODWORD(v5) = *(_DWORD *)(HIDWORD(v5) + v3);
    return sqlite3_value_int64(v5, v4);
  }
  return v2;
}


//======================================================================
// sub_352D60
// address: 0x00352D60   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall sub_352D60(double a1)
{
  double v1; // r2
  int v2; // r2
  int v3; // r3
  _BYTE *v4; // r0
  double v6; // [sp+0h] [bp-8h] BYREF

  v6 = a1;
  HIDWORD(a1) = LODWORD(a1);
  LOWORD(a1) = *(_WORD *)(LODWORD(a1) + 28);
  if ( (LOBYTE(a1) & 8) != 0 )
  {
    v1 = *(double *)(HIDWORD(a1) + 8);
  }
  else if ( (LOBYTE(a1) & 4) != 0 )
  {
    v1 = (double)*(__int64 *)(HIDWORD(a1) + 16);
  }
  else
  {
    v1 = 0.0;
    if ( (LOBYTE(a1) & 0x12) != 0 )
    {
      v2 = *(_DWORD *)(HIDWORD(a1) + 24);
      v3 = *(unsigned __int8 *)(HIDWORD(a1) + 30);
      v4 = *(_BYTE **)(HIDWORD(a1) + 4);
      v6 = 0.0;
      sub_34D098(v4, &v6, v2, v3);
      v1 = v6;
    }
  }
  return *(_QWORD *)&v1;
}


//======================================================================
// sub_352DB8
// address: 0x00352DB8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_352DB8(int a1)
{
  double v2; // r0
  __int64 v3; // r0
  __int16 v4; // r3

  if ( (*(_WORD *)(a1 + 28) & 0xD) == 0 )
  {
    if ( sub_34D568(
           *(unsigned __int8 **)(a1 + 4),
           (__int64 *)(a1 + 16),
           *(_DWORD *)(a1 + 24),
           *(unsigned __int8 *)(a1 + 30)) != 0 )
    {
      LODWORD(v2) = a1;
      v3 = sub_352D60(v2);
      v4 = *(_WORD *)(a1 + 28);
      *(_QWORD *)(a1 + 8) = v3;
      *(_WORD *)(a1 + 28) = v4 & 0xBE00 | 8;
      sub_34E330(a1);
    }
    else
    {
      *(_WORD *)(a1 + 28) = *(_WORD *)(a1 + 28) & 0xBE00 | 4;
    }
  }
  *(_WORD *)(a1 + 28) &= 0xFFEDu;
  return 0;
}


//======================================================================
// sub_352E18
// address: 0x00352E18   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_352E18(int result, int a2, int *a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // r1
  int v6; // r5
  unsigned int v7; // r6

  if ( result == 0 )
  {
    v5 = (a2 + 7) & 0xFFFFFFF8;
    v6 = *a3;
    v7 = *a3 + v5;
    if ( v7 > a4 )
    {
      *a5 += v5;
    }
    else
    {
      *a3 = v7;
      return v6;
    }
  }
  return result;
}


//======================================================================
// sub_352E3C
// address: 0x00352E3C   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_352E3C(int a1, int a2)
{
  int v2; // r3
  int result; // r0
  __int64 v5; // r4
  __int64 v6; // r2
  int v7; // r0

  v2 = *(unsigned __int16 *)(a1 + 28);
  result = 0;
  if ( (v2 & 1) == 0 )
  {
    if ( (v2 & 4) != 0 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      if ( v5 >= 0 )
      {
        v6 = *(_QWORD *)(a1 + 16);
      }
      else
      {
        if ( v5 <= (__int64)0xFFFF800000000000LL )
          return 6;
        v6 = -v5;
      }
      if ( HIDWORD(v6) != 0 )
        return (HIDWORD(v6) > 0x7FFF) + 5;
      if ( (unsigned int)v6 <= 0x7F )
      {
        result = 1;
        if ( v5 != (v5 & 1) )
          return 1;
        if ( a2 > 3 )
          return v6 + 8;
        return result;
      }
      result = 2;
      if ( (unsigned int)v6 > 0x7FFF )
      {
        result = 3;
        if ( (unsigned int)v6 > 0x7FFFFF )
        {
          result = 4;
          if ( (int)v6 < 0 )
            return (HIDWORD(v6) > 0x7FFF) + 5;
        }
      }
    }
    else
    {
      result = 7;
      if ( (v2 & 8) == 0 )
      {
        v7 = *(_DWORD *)(a1 + 24);
        if ( (v2 & 0x4000) != 0 )
          v7 += *(_DWORD *)(a1 + 16);
        return 2 * (v7 + 6) + ((unsigned int)(v2 << 30) >> 31);
      }
    }
  }
  return result;
}


//======================================================================
// sub_352EFA
// address: 0x00352EFA   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall sub_352EFA(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v3; // r5
  int result; // r0
  int (__fastcall *v5)(_DWORD *, _DWORD *); // r3
  int v6; // r0
  int *v7; // r7
  int v8; // r6
  _DWORD *v9; // r7
  void (__fastcall *v10)(_DWORD *, _DWORD *); // r3

  v3 = a2;
  if ( a2 == nullptr )
    return 0;
  if ( a1[1] != 0 || (result = a1[2]) != 0 )
  {
    ++a1[4];
    while ( 1 )
    {
      v5 = (int (__fastcall *)(_DWORD *, _DWORD *))a1[1];
      if ( v5 != nullptr )
      {
        v6 = v5(a1, v3);
        if ( v6 != 0 )
          break;
      }
      if ( sub_353022(a1, *v3) != 0
        || sub_352FCC(a1, v3[11]) != 0
        || sub_353022(a1, v3[12]) != 0
        || sub_352FCC(a1, v3[13]) != 0
        || sub_353022(a1, v3[14]) != 0
        || sub_352FCC(a1, v3[17]) != 0
        || sub_352FCC(a1, v3[18]) != 0 )
      {
LABEL_16:
        --a1[4];
        return 2;
      }
      v7 = (int *)v3[10];
      if ( v7 != nullptr )
      {
        v8 = *v7;
        v9 = v7 + 2;
        while ( v8 > 0 )
        {
          if ( sub_352EFA(a1, v9[5]) != 0 )
            goto LABEL_16;
          --v8;
          v9 += 18;
        }
      }
      v10 = (void (__fastcall *)(_DWORD *, _DWORD *))a1[2];
      if ( v10 != nullptr )
        v10(a1, v3);
      v3 = (_DWORD *)v3[15];
      if ( v3 == nullptr )
      {
        LOBYTE(v6) = 0;
        break;
      }
    }
    --a1[4];
    return v6 & 2;
  }
  return result;
}


//======================================================================
// sub_352FCC
// address: 0x00352FCC   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_352FCC(int (**a1)(void), _DWORD *a2)
{
  int v4; // r0
  char v5; // r6
  _DWORD *v7; // r1
  int v8; // r0

  if ( a2 == nullptr )
    return 0;
  v4 = (*a1)();
  v5 = v4;
  if ( v4 == 0
    && (a2[1] & 0x4000) == 0
    && (sub_352FCC(a1, a2[3]) != 0
     || sub_352FCC(a1, a2[4]) != 0
     || ((v7 = (_DWORD *)a2[5], (a2[1] & 0x800) == 0) ? (v8 = sub_353022(a1, v7)) : (v8 = sub_352EFA(a1, v7)), v8 != 0)) )
  {
    return 2;
  }
  else
  {
    return v5 & 2;
  }
}


//======================================================================
// sub_353022
// address: 0x00353022   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_353022(int (**a1)(void), int *a2)
{
  int v4; // r4
  _DWORD **v5; // r5

  if ( a2 != nullptr )
  {
    v4 = *a2;
    v5 = (_DWORD **)a2[2];
    while ( v4 > 0 )
    {
      if ( sub_352FCC(a1, *v5) != 0 )
        return 2;
      --v4;
      v5 += 5;
    }
  }
  return 0;
}


//======================================================================
// sub_35304C
// address: 0x0035304C   size: 0x2E (46 bytes)
//======================================================================
int (*__fastcall sub_35304C(_DWORD *a1, int (*a2)(void)))(void)
{
  int (*v5[6])(void); // [sp+0h] [bp-18h] BYREF

  j_memset(v5, 0, sizeof(v5));
  v5[0] = (int (*)(void))sub_34E978;
  v5[5] = a2;
  v5[1] = (int (*)(void))sub_34E9B4;
  sub_352FCC(v5, a1);
  return v5[5];
}


//======================================================================
// sub_353084
// address: 0x00353084   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_353084(int (*a1)(void), _DWORD *a2)
{
  int (*v5[6])(void); // [sp+0h] [bp-18h] BYREF

  j_memset(v5, 0, sizeof(v5));
  v5[0] = sub_35B44E;
  v5[5] = a1;
  v5[1] = sub_34EA6A;
  return sub_352FCC(v5, a2);
}


//======================================================================
// sub_3530B8
// address: 0x003530B8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3530B8(int result, _DWORD *a2)
{
  int (*v2)(void); // r7
  int v4; // r6
  int i; // r4

  v2 = (int (*)(void))result;
  if ( a2 != nullptr )
  {
    v4 = a2[2];
    for ( i = 0; i < *a2; ++i )
      result = sub_353084(v2, *(_DWORD **)(v4 + 20 * i));
  }
  return result;
}


//======================================================================
// sub_3530DC
// address: 0x003530DC   size: 0xB4 (180 bytes)
//======================================================================
_DWORD *__fastcall sub_3530DC(_DWORD *result, int a2, int a3)
{
  _DWORD *v3; // r5
  _BYTE *v5; // r7
  _DWORD v7[7]; // [sp+8h] [bp-1Ch] BYREF

  v3 = result;
  if ( a2 != 0 )
  {
    v5 = (_BYTE *)(*result + 64);
    if ( *v5 == 0 && (*(_WORD *)(a2 + 6) & 0x20) == 0 )
    {
      j_memset(v7, 0, 0x18u);
      v7[3] = v3;
      v7[0] = sub_34F4D2;
      if ( *((_BYTE *)v3 + 24) != 0 )
      {
        v7[1] = sub_363B40;
        sub_352EFA(v7, (_DWORD *)a2);
      }
      v7[1] = sub_383BBC;
      v7[2] = sub_34F4B4;
      result = (_DWORD *)sub_352EFA(v7, (_DWORD *)a2);
      if ( v3[17] == 0 && *v5 == 0 )
      {
        j_memset(v7, (unsigned __int8)*v5, 0x18u);
        v7[0] = sub_364FD8;
        v7[3] = v3;
        v7[1] = sub_364B80;
        v7[5] = a3;
        result = (_DWORD *)sub_352EFA(v7, (_DWORD *)a2);
        if ( v3[17] == 0 && *v5 == 0 )
        {
          j_memset(v7, (unsigned __int8)*v5, 0x18u);
          v7[2] = sub_363116;
          v7[3] = v3;
          v7[0] = sub_34F4D2;
          return (_DWORD *)sub_352EFA(v7, (_DWORD *)a2);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_3531B0
// address: 0x003531B0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3531B0(_DWORD *a1, int a2)
{
  unsigned __int8 *v2; // r6
  int i; // r3
  int v5; // r5
  _BYTE *v6; // r0

  v2 = *(unsigned __int8 **)(a2 + 8);
  for ( i = 0; i < *a1; i = v5 )
  {
    v5 = i + 1;
    v6 = *(_BYTE **)(a1[2] + 20 * i + 4);
    if ( v6 != nullptr && sqlite3_stricmp(v6, v2) == 0 )
      return v5;
  }
  return 0;
}


//======================================================================
// sub_3531E4
// address: 0x003531E4   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_3531E4(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // r3
  int v5; // r2
  int result; // r0
  int v7; // r3
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  if ( (a1[1] & 0x400) != 0 )
  {
    *a2 = a1[2];
    return 1;
  }
  v4 = *(unsigned __int8 *)a1;
  v5 = v4 << 24;
  if ( v4 == 157 )
  {
    v7 = sub_3531E4(a1[3], v8, v5);
    result = 0;
    if ( v7 == 0 )
      return result;
    *a2 = -v8[0];
    return 1;
  }
  if ( *(unsigned __int8 *)a1 == 158 )
    return sub_3531E4(a1[3], a2, v5);
  else
    return a1[1] & 0x400;
}


//======================================================================
// sub_35322C
// address: 0x0035322C   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall sub_35322C(_DWORD *a1, int a2, int a3)
{
  int v3; // r2
  int v4; // r2
  _DWORD v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  v3 = a1[1];
  v6[0] = 0;
  v4 = v3 << 31;
  return v4 >= 0 && sub_3531E4(a1, v6, v4) != 0 && v6[0] == 0;
}


//======================================================================
// sub_35324E
// address: 0x0035324E   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall sub_35324E(_DWORD *a1, int a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  v4[0] = 0;
  return (a1[1] & 1) == 0 && sub_3531E4(a1, v4, a3) != 0 && v4[0] != 0;
}


//======================================================================
// sub_353270
// address: 0x00353270   size: 0x32 (50 bytes)
//======================================================================
bool __fastcall sub_353270(_BYTE *a1)
{
  return sqlite3_stricmp(a1, "_ROWID_") == 0 || sqlite3_stricmp(a1, "ROWID") == 0 || sqlite3_stricmp(a1, "OID") == 0;
}


//======================================================================
// sub_3532B0
// address: 0x003532B0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_3532B0(int result, int a2)
{
  unsigned int v2; // r3

  if ( *(_BYTE *)(a2 + 6) != 0 )
  {
    v2 = *(unsigned __int8 *)(result + 19);
    if ( v2 <= 7 )
    {
      *(_BYTE *)(result + 19) = v2 + 1;
      result += 4 * (v2 + 6);
      *(_DWORD *)(result + 4) = *(_DWORD *)(a2 + 12);
    }
    *(_BYTE *)(a2 + 6) = 0;
  }
  return result;
}


//======================================================================
// sub_3532D2
// address: 0x003532D2   size: 0x34 (52 bytes)
//======================================================================
__int64 __fastcall sub_3532D2(int a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r4
  int v7; // r3
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = a1;
  v5 = a2 + a3;
  v6 = a1 + 120;
  HIDWORD(v9) = a1 + 320;
  do
  {
    v7 = *(_DWORD *)(v6 + 12);
    if ( v7 >= a2 && v5 > v7 )
    {
      sub_3532B0(a1, v6);
      *(_DWORD *)(v6 + 12) = 0;
    }
    v6 += 20;
  }
  while ( v6 != HIDWORD(v9) );
  return v9;
}


//======================================================================
// sub_353306
// address: 0x00353306   size: 0x18 (24 bytes)
//======================================================================
__int64 __fastcall sub_353306(int a1, int a2, int a3)
{
  __int64 result; // r0

  result = sub_3532D2(a1, a2, a3);
  if ( a3 > *(_DWORD *)(a1 + 60) )
  {
    *(_DWORD *)(a1 + 60) = a3;
    *(_DWORD *)(a1 + 64) = a2;
  }
  return result;
}


//======================================================================
// sub_35331E
// address: 0x0035331E   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_35331E(int result)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6

  v1 = result;
  v2 = result + 120;
  v3 = result + 320;
  do
  {
    if ( *(_DWORD *)(v2 + 12) != 0 )
    {
      result = sub_3532B0(v1, v2);
      *(_DWORD *)(v2 + 12) = 0;
    }
    v2 += 20;
  }
  while ( v2 != v3 );
  return result;
}


//======================================================================
// sub_353348
// address: 0x00353348   size: 0x8C (140 bytes)
//======================================================================
unsigned __int64 __fastcall sub_353348(unsigned int *a1, unsigned int a2, __int16 a3, unsigned int a4)
{
  unsigned int *v4; // r4
  unsigned int v5; // r3
  unsigned int v6; // r3
  int v7; // r6
  int v8; // r5
  int v9; // r4
  int v10; // r7
  unsigned int v11; // r6
  unsigned int *v12; // r5
  unsigned int v13; // r3
  unsigned __int64 v15; // [sp+0h] [bp-Ch]

  v15 = __PAIR64__(a2, a4);
  if ( (*(_WORD *)(*a1 + 60) & 2) == 0 )
  {
    v4 = a1 + 30;
    do
    {
      if ( v4[3] == 0 )
      {
        v5 = a1[26];
        *((_WORD *)v4 + 2) = a3;
        v4[2] = v5;
        *v4 = a2;
        v4[3] = v15;
        *((_BYTE *)v4 + 6) = 0;
        v6 = a1[27];
        a1[27] = v6 + 1;
        v4[4] = v6;
        return v15;
      }
      v4 += 5;
    }
    while ( v4 != a1 + 80 );
    v7 = 0x7FFFFFFF;
    v8 = -1;
    v9 = 0;
    while ( 1 )
    {
      HIDWORD(v15) = 20 * v9;
      v10 = a1[5 * v9 + 34];
      if ( v10 < v7 )
        v8 = v9;
      else
        v10 = v7;
      if ( ++v9 == 10 )
        break;
      v7 = v10;
    }
    if ( v8 != -1 )
    {
      v11 = a1[26];
      v12 = &a1[5 * v8 + 30];
      *((_WORD *)v12 + 2) = a3;
      v12[2] = v11;
      *v12 = a2;
      v12[3] = a4;
      *((_BYTE *)v12 + 6) = 0;
      v13 = a1[27];
      a1[27] = v13 + 1;
      v12[4] = v13;
    }
  }
  return v15;
}


//======================================================================
// sub_3533D8
// address: 0x003533D8   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_3533D8(int a1, unsigned __int8 *a2)
{
  int v2; // r3
  _DWORD *v3; // r3
  int i; // r2

  v2 = *a2;
  if ( v2 == 154 || v2 == 156 )
  {
    v3 = *(_DWORD **)(a1 + 20);
    for ( i = 0; i < *(_DWORD *)*v3; ++i )
    {
      if ( *((_DWORD *)a2 + 7) == *(_DWORD *)(*v3 + 72 * i + 48) )
      {
        ++v3[1];
        return 0;
      }
    }
    ++v3[2];
  }
  return 0;
}


//======================================================================
// sub_353416
// address: 0x00353416   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_353416(int result, int a2)
{
  unsigned int v2; // r2
  int v3; // r3

  if ( a2 != 0 )
  {
    v2 = *(unsigned __int8 *)(result + 19);
    if ( v2 <= 7 )
    {
      v3 = result + 120;
      do
      {
        if ( *(_DWORD *)(v3 + 12) == a2 )
        {
          *(_BYTE *)(v3 + 6) = 1;
          return result;
        }
        v3 += 20;
      }
      while ( v3 != result + 320 );
      *(_BYTE *)(result + 19) = v2 + 1;
      result += 4 * (v2 + 6);
      *(_DWORD *)(result + 4) = a2;
    }
  }
  return result;
}


//======================================================================
// sub_35344C
// address: 0x0035344C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_35344C(int result)
{
  while ( result != 0 && (*(_BYTE *)(result + 55) & 3) != 2 )
    result = *(_DWORD *)(result + 20);
  return result;
}


//======================================================================
// sub_353466
// address: 0x00353466   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_353466(__int16 *a1, int a2, int a3)
{
  int result; // r0
  int v5; // r4
  int v6; // r1
  __int16 v7; // r3

  if ( a2 == -2 )
  {
    result = 6;
    if ( *((_DWORD *)a1 + 3) == 0 && *((_DWORD *)a1 + 4) == 0 )
      return 0;
  }
  else
  {
    v5 = *a1;
    if ( v5 == a2 )
    {
      v6 = 4;
    }
    else
    {
      result = 0;
      v6 = 1;
      if ( v5 >= 0 )
        return result;
    }
    v7 = a1[1];
    if ( a3 == (v7 & 3) )
      return v6 + 2;
    else
      return v6 + (((unsigned __int8)a3 & v7 & 2) != 0);
  }
  return result;
}


//======================================================================
// sub_3534B0
// address: 0x003534B0   size: 0xF8 (248 bytes)
//======================================================================
char *__fastcall sub_3534B0(int a1, unsigned __int8 *a2, size_t a3, int a4, unsigned __int8 a5, char a6)
{
  int v7; // r7
  char *v8; // r4
  int v9; // r5
  int v10; // r0
  int v11; // r0
  int v12; // r6
  int v13; // r5
  int v14; // r0
  char *result; // r0
  char *v16; // r0
  void *v17; // r0
  int v19; // [sp+8h] [bp-1Ch]
  int v22; // [sp+18h] [bp-Ch]

  v7 = 0;
  v19 = (int)(byte_44A964[*a2] + a3) % 23;
  v22 = a1 + 328;
  v8 = nullptr;
  v9 = sub_34EF06(a1 + 328, v19, a2, a3);
  while ( v9 != 0 )
  {
    v10 = sub_353466((__int16 *)v9, a4, a5);
    if ( v10 > v7 )
      v8 = (char *)v9;
    else
      v10 = v7;
    v9 = *(_DWORD *)(v9 + 8);
    v7 = v10;
  }
  if ( a6 != 0 )
  {
    if ( v7 <= 5 )
    {
      v16 = (char *)sub_351894(a1, a3 + 37);
      v8 = v16;
      if ( v16 == nullptr )
        return nullptr;
      v17 = v16 + 36;
      *(_WORD *)v8 = a4;
      *((_WORD *)v8 + 1) = a5;
      *((_DWORD *)v8 + 6) = v17;
      j_memcpy(v17, a2, a3);
      *(_BYTE *)(*((_DWORD *)v8 + 6) + a3) = 0;
      sub_34EF34(v22, v8);
      goto LABEL_21;
    }
  }
  else if ( v8 == nullptr || (*(_DWORD *)(a1 + 24) & 0x200000) != 0 )
  {
    v11 = sub_34EF06((int)&unk_5592E0, v19, a2, a3);
    v12 = 0;
    v13 = v11;
    while ( v13 != 0 )
    {
      v14 = sub_353466((__int16 *)v13, a4, a5);
      if ( v14 > v12 )
        v8 = (char *)v13;
      else
        v14 = v12;
      v13 = *(_DWORD *)(v13 + 8);
      v12 = v14;
    }
  }
  if ( v8 == nullptr )
    return nullptr;
LABEL_21:
  result = v8;
  if ( *((_DWORD *)v8 + 4) == 0 && *((_DWORD *)v8 + 3) == 0 && a6 == 0 )
    return nullptr;
  return result;
}


//======================================================================
// sub_3535B0
// address: 0x003535B0   size: 0x6A (106 bytes)
//======================================================================
unsigned int __fastcall sub_3535B0(unsigned __int8 *a1, int a2, int a3)
{
  int v5; // r4
  unsigned int v6; // r0
  unsigned int v7; // r7

  v5 = byte_44AA64[*a1] & 4;
  if ( v5 != 0 )
  {
    v6 = sub_34D782(a1, a2, (int)byte_44AA64) << 24;
  }
  else
  {
    v7 = sub_34CF50((unsigned int)a1);
    while ( v5 < 7 - a2 )
    {
      if ( byte_44AC44[v5] == v7 && sqlite3_strnicmp(&aOnoffalseyestr[byte_44AC60[v5]], a1, v7) == 0 )
        return byte_44AC67[v5];
      ++v5;
    }
    v6 = a3 << 24;
  }
  return HIBYTE(v6);
}


//======================================================================
// sub_353624
// address: 0x00353624   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_353624(int a1, _DWORD *a2)
{
  while ( a2 != nullptr && *a2 != a1 )
    a2 = (_DWORD *)a2[6];
  return a2;
}


//======================================================================
// sub_353638
// address: 0x00353638   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_353638(int a1, _DWORD **a2)
{
  _DWORD *v2; // r3
  _DWORD *result; // r0
  _DWORD *v5; // r6
  int v6; // r2

  v2 = *a2;
  *a2 = nullptr;
  result = nullptr;
  while ( v2 != nullptr )
  {
    v5 = (_DWORD *)v2[6];
    if ( *v2 == a1 )
    {
      *a2 = v2;
      v2[6] = 0;
    }
    else
    {
      v6 = *v2 + 252;
      v2[6] = *(_DWORD *)(*v2 + 324);
      *(_DWORD *)(v6 + 72) = v2;
      v2 = result;
    }
    result = v2;
    v2 = v5;
  }
  return result;
}


//======================================================================
// sub_35366A
// address: 0x0035366A   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_35366A(_DWORD *a1, _DWORD *a2)
{
  int v5; // kr00_4
  int v6; // r7
  int v7; // r1
  int v8; // r0

  if ( a2 == nullptr )
    return 0;
  if ( *(unsigned __int8 *)a2 == 154 )
    return sub_34F6FC(a1, a2[7]);
  v5 = sub_35366A(a1, a2[4]);
  v6 = v5 | sub_35366A(a1, a2[3]);
  v7 = a2[5];
  if ( (a2[1] & 0x800) != 0 )
    v8 = sub_3536F2(a1, v7);
  else
    v8 = sub_3536B8(a1, v7);
  return v6 | v8;
}


//======================================================================
// sub_3536B8
// address: 0x003536B8   size: 0x3A (58 bytes)
//======================================================================
__int64 __fastcall sub_3536B8(_DWORD *a1, int *a2)
{
  __int64 v3; // r4
  int i; // r7
  int v5; // r3
  int v6; // r1
  int v8; // [sp+0h] [bp-Ch]

  if ( a2 == nullptr )
    return 0;
  v3 = 0;
  v8 = *a2;
  for ( i = 0; i < v8; ++i )
  {
    v5 = 20 * i;
    LODWORD(v3) = v3 | sub_35366A(a1, *(_DWORD **)(v5 + a2[2]));
    HIDWORD(v3) |= v6;
  }
  return v3;
}


//======================================================================
// sub_3536F2
// address: 0x003536F2   size: 0xAC (172 bytes)
//======================================================================
int __fastcall sub_3536F2(_DWORD *a1, int a2)
{
  __int64 v3; // kr00_8
  __int64 v4; // r0
  int v5; // r7
  int v6; // r6
  __int64 v7; // r0
  int v8; // r6
  int v9; // r7
  int v10; // r1
  int v11; // r6
  int v12; // r0
  int *v13; // r5
  int v14; // r1
  int v15; // r6
  __int64 v16; // r0
  int v17; // r1
  int v19; // [sp+4h] [bp-18h]
  int v21; // [sp+Ch] [bp-10h]
  int v22; // [sp+10h] [bp-Ch]
  int v23; // [sp+14h] [bp-8h]

  v19 = 0;
  v21 = 0;
  while ( a2 != 0 )
  {
    v3 = sub_3536B8(a1, (int *)*(_DWORD *)a2);
    v4 = sub_3536B8(a1, (int *)*(_DWORD *)(a2 + 48));
    v5 = v3 | v4 | v19;
    v6 = HIDWORD(v3) | HIDWORD(v4) | v21;
    v7 = sub_3536B8(a1, (int *)*(_DWORD *)(a2 + 56));
    v8 = v6 | HIDWORD(v7);
    v9 = v5 | v7 | sub_35366A(a1, *(_DWORD **)(a2 + 44));
    v11 = v8 | v10;
    v12 = sub_35366A(a1, *(_DWORD **)(a2 + 52));
    v13 = *(int **)(a2 + 40);
    v19 = v9 | v12;
    v21 = v11 | v14;
    if ( v13 != nullptr )
    {
      v15 = 0;
      v22 = *v13;
      while ( 1 )
      {
        v13 += 18;
        if ( v15 >= v22 )
          break;
        v16 = sub_3536F2(a1, *(v13 - 11));
        v23 = HIDWORD(v16);
        ++v15;
        v19 |= v16 | sub_35366A(a1, (_DWORD *)*(v13 - 5));
        v21 |= v17 | v23;
      }
    }
    a2 = *(_DWORD *)(a2 + 60);
  }
  return v19;
}


//======================================================================
// sub_35379E
// address: 0x0035379E   size: 0x40 (64 bytes)
//======================================================================
bool __fastcall sub_35379E(int a1, int a2, __int64 a3)
{
  int v4; // r5
  _BOOL4 result; // r0
  int v6; // r3

  v4 = *(_DWORD *)(a1 + 8);
  result = false;
  if ( v4 == *(_DWORD *)(a2 + 40) && (*(_WORD *)(a1 + 18) & 2) != 0 && (a3 & *(_QWORD *)(a1 + 32)) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 12);
    if ( v6 >= 0 )
      return sub_34EDE8(*(_DWORD *)a1, *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(a2 + 16) + 4) + 24 * v6 + 21));
  }
  return result;
}


//======================================================================
// sub_3537E0
// address: 0x003537E0   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_3537E0(unsigned __int8 *a1, int a2)
{
  int i; // r4
  int v5; // r4

  for ( i = (unsigned __int8)aLiuj[((4 * byte_44A964[*a1]) ^ a2 ^ (3 * byte_44A964[a1[a2 - 1]])) % 127];
        ;
        i = byte_44B106[v5] )
  {
    v5 = i - 1;
    if ( v5 == -1 )
      break;
    if ( byte_44ACED[v5] == a2
      && sqlite3_strnicmp(&aReindexedescap[*(unsigned __int16 *)&aReindexedescap[2 * v5 + 553]], a1, a2) == 0 )
    {
      return byte_44B08A[v5];
    }
  }
  return 27;
}


//======================================================================
// sub_353874
// address: 0x00353874   size: 0x3E2 (994 bytes)
//======================================================================
int __fastcall sub_353874(unsigned __int8 *a1, int *a2)
{
  unsigned int v2; // r3
  int result; // r0
  unsigned __int8 *v6; // r3
  char v7; // r5
  _BYTE *v8; // r3
  int v9; // r1
  int v10; // r1
  _BYTE *v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // r1
  unsigned __int8 *v18; // r3
  int v19; // r5
  int v20; // r3
  int v21; // r3
  unsigned __int8 *v22; // r3
  char v23; // r4
  int v24; // r3
  int v25; // r1
  int v26; // r3
  int v27; // r1
  int i; // r3
  int v29; // r1
  unsigned __int8 *v30; // r3
  char v31; // r6
  int v32; // r5
  int v33; // r0

  v2 = *a1;
  if ( v2 == 45 )
  {
    if ( a1[1] != 45 )
    {
      v16 = 90;
      goto LABEL_162;
    }
    v8 = a1 + 2;
    do
    {
      v9 = (unsigned __int8)*v8;
      result = v8 - a1;
      if ( *v8 == 0 )
        break;
      ++v8;
    }
    while ( v9 != 10 );
    goto LABEL_71;
  }
  if ( v2 <= 0x2D )
  {
    if ( v2 <= 0x24 )
    {
      if ( v2 < 0x23 )
      {
        if ( v2 <= 0xD )
        {
          if ( v2 < 0xC && v2 - 9 > 1 )
            goto LABEL_155;
          goto LABEL_50;
        }
        if ( v2 != 33 )
        {
          if ( v2 <= 0x21 )
          {
            if ( v2 == 32 )
            {
LABEL_50:
              v6 = a1 + 1;
              do
              {
                v7 = byte_44AA64[*v6];
                result = v6 - a1;
                ++v6;
              }
              while ( (v7 & 1) != 0 );
LABEL_71:
              v12 = 151;
              goto LABEL_128;
            }
LABEL_155:
            if ( (byte_44AA64[v2] & 0x46) != 0 )
            {
              v30 = a1 + 1;
              do
              {
                v31 = byte_44AA64[*v30];
                v32 = v30 - a1;
                ++v30;
              }
              while ( (v31 & 0x46) != 0 );
              v33 = 27;
              if ( v32 != 1 )
                v33 = sub_3537E0(a1, v32);
              *a2 = v33;
              return v32;
            }
            v16 = 150;
LABEL_162:
            *a2 = v16;
            return 1;
          }
          goto LABEL_90;
        }
        if ( a1[1] != 61 )
        {
          v14 = 150;
          goto LABEL_89;
        }
        goto LABEL_75;
      }
      goto LABEL_123;
    }
    if ( v2 == 40 )
    {
      v16 = 22;
      goto LABEL_162;
    }
    if ( v2 > 0x28 )
    {
      if ( v2 == 42 )
      {
        v16 = 91;
      }
      else if ( v2 >= 0x2A )
      {
        if ( v2 == 43 )
          v16 = 89;
        else
          v16 = 26;
      }
      else
      {
        v16 = 23;
      }
      goto LABEL_162;
    }
    if ( v2 == 38 )
    {
      v16 = 85;
      goto LABEL_162;
    }
    if ( v2 <= 0x26 )
    {
      v16 = 93;
      goto LABEL_162;
    }
LABEL_90:
    for ( result = 1; a1[result] != 0; ++result )
    {
      if ( a1[result] == v2 )
      {
        v17 = a1[++result];
        if ( v17 != v2 )
        {
          if ( v2 != 39 )
            goto LABEL_120;
          v12 = 97;
          goto LABEL_128;
        }
      }
    }
LABEL_127:
    v12 = 150;
    goto LABEL_128;
  }
  if ( v2 == 62 )
  {
    v15 = a1[1];
    if ( v15 == 61 )
    {
      v14 = 83;
    }
    else
    {
      if ( v15 != 62 )
      {
        v16 = 80;
        goto LABEL_162;
      }
      v14 = 88;
    }
    goto LABEL_89;
  }
  if ( v2 > 0x3E )
  {
    if ( v2 == 91 )
    {
      result = 1;
      do
      {
        v21 = a1[result];
        if ( a1[result] == 0 )
          goto LABEL_127;
        ++result;
      }
      while ( v21 != 93 );
LABEL_120:
      v12 = 27;
LABEL_128:
      *a2 = v12;
      return result;
    }
    if ( v2 > 0x5B )
    {
      if ( v2 != 120 )
      {
        if ( v2 <= 0x78 )
        {
          if ( v2 != 96 )
            goto LABEL_155;
          goto LABEL_90;
        }
        if ( v2 != 124 )
        {
          if ( v2 == 126 )
          {
            v16 = 96;
            goto LABEL_162;
          }
          goto LABEL_155;
        }
        if ( a1[1] != 124 )
        {
          v16 = 86;
          goto LABEL_162;
        }
        v14 = 94;
LABEL_89:
        *a2 = v14;
        return 2;
      }
    }
    else
    {
      if ( v2 == 64 )
        goto LABEL_123;
      if ( v2 < 0x40 )
      {
        *a2 = 135;
        v22 = a1 + 1;
        do
        {
          v23 = byte_44AA64[*v22];
          result = v22 - a1;
          ++v22;
        }
        while ( (v23 & 4) != 0 );
        return result;
      }
      if ( v2 != 88 )
        goto LABEL_155;
    }
    if ( a1[1] == 39 )
    {
      *a2 = 134;
      for ( i = 2; ; ++i )
      {
        v29 = a1[i];
        if ( (byte_44AA64[v29] & 8) == 0 )
          break;
      }
      if ( v29 != 39 || (i & 1) != 0 )
      {
        *a2 = 150;
        while ( a1[i] != 0 && a1[i] != 39 )
          ++i;
      }
      return i + (a1[i] != 0);
    }
    goto LABEL_155;
  }
  if ( v2 <= 0x39 )
  {
    if ( v2 < 0x30 )
    {
      if ( v2 != 46 )
      {
        if ( a1[1] != 42 || (v10 = a1[2], v11 = a1 + 3, a1[2] == 0) )
        {
          v16 = 92;
          goto LABEL_162;
        }
        while ( 1 )
        {
          result = v11 - a1;
          if ( v10 == 42 && *v11 == 47 )
            break;
          v10 = (unsigned __int8)*v11++;
          if ( v10 == 0 )
            goto LABEL_71;
        }
        ++result;
        goto LABEL_71;
      }
      if ( (byte_44AA64[a1[1]] & 4) == 0 )
      {
        v16 = 122;
        goto LABEL_162;
      }
    }
    *a2 = 132;
    v18 = a1;
    do
    {
      v19 = *v18;
      result = v18 - a1;
      ++v18;
    }
    while ( (byte_44AA64[v19] & 4) != 0 );
    if ( v19 == 46 )
    {
      ++result;
      while ( (byte_44AA64[a1[result]] & 4) != 0 )
        ++result;
      *a2 = 133;
    }
    if ( (a1[result] & 0xDF) == 0x45 )
    {
      v20 = a1[result + 1];
      if ( (byte_44AA64[v20] & 4) != 0 || (v20 == 43 || v20 == 45) && (byte_44AA64[a1[result + 2]] & 4) != 0 )
      {
        for ( result += 2; (byte_44AA64[a1[result]] & 4) != 0; ++result )
          ;
        *a2 = 133;
      }
    }
    while ( (byte_44AA64[a1[result]] & 0x46) != 0 )
    {
      *a2 = 150;
      ++result;
    }
    return result;
  }
  if ( v2 == 59 )
  {
    *a2 = 1;
    return 1;
  }
  if ( v2 >= 0x3B )
  {
    if ( v2 != 60 )
    {
      *a2 = 79;
      return 2 - (a1[1] != 61);
    }
    v13 = a1[1];
    switch ( v13 )
    {
      case '=':
        v14 = 81;
        break;
      case '>':
LABEL_75:
        v14 = 78;
        goto LABEL_89;
      case '<':
        v14 = 87;
        break;
      default:
        v16 = 82;
        goto LABEL_162;
    }
    goto LABEL_89;
  }
LABEL_123:
  *a2 = 135;
  result = 1;
  v24 = 0;
  while ( 1 )
  {
    v25 = a1[result];
    if ( a1[result] == 0 )
    {
LABEL_126:
      if ( v24 != 0 )
        return result;
      goto LABEL_127;
    }
    if ( (byte_44AA64[v25] & 0x46) != 0 )
    {
      ++v24;
      goto LABEL_131;
    }
    if ( v25 == 40 )
      break;
    if ( v25 != 58 || a1[result + 1] != 58 )
      goto LABEL_126;
    ++result;
LABEL_131:
    ++result;
  }
  if ( v24 == 0 )
    goto LABEL_127;
  while ( 1 )
  {
    v26 = result + 1;
    v27 = a1[result + 1];
    if ( a1[result + 1] == 0 )
      break;
    if ( (byte_44AA64[v27] & 1) != 0 )
    {
      if ( v27 == 41 )
        return result + 2;
      break;
    }
    if ( v27 == 41 )
      return result + 2;
    ++result;
  }
  *a2 = 150;
  return v26;
}


//======================================================================
// sub_353C5C
// address: 0x00353C5C   size: 0xBA (186 bytes)
//======================================================================
int __fastcall sub_353C5C(int a1, _DWORD *a2, int a3, int a4)
{
  _DWORD *v7; // r5
  signed int v8; // r6
  _DWORD *v9; // r4
  int v10; // r3
  int v12; // [sp+4h] [bp-10h]
  bool *v14; // [sp+Ch] [bp-8h]

  v14 = (bool *)(a1 + 243);
  v7 = (_DWORD *)(a1 + 252);
  if ( *(_BYTE *)(a1 + 243) != 0 )
    sqlite3_free(*(_DWORD *)(a1 + 268));
  v8 = a3 & 0xFFFFFFF8;
  if ( v8 <= 4 )
    v8 = 0;
  v12 = a4 & (~a4 >> 31);
  v9 = nullptr;
  if ( v8 != 0 )
  {
    if ( v12 != 0 )
    {
      v9 = a2;
      if ( a2 == nullptr )
      {
        sub_34CB1C();
        v9 = (_DWORD *)sub_351664(v12 * v8);
        sub_34CB30();
        if ( v9 != nullptr )
          v12 = sub_34CCB0(v9) / v8;
      }
    }
    else
    {
      v9 = nullptr;
      v8 = 0;
    }
  }
  v7[3] = 0;
  v7[4] = v9;
  *(_WORD *)(a1 + 240) = v8;
  if ( v9 != nullptr )
  {
    v10 = v12;
    while ( --v10 >= 0 )
    {
      *v9 = v7[3];
      v7[3] = v9;
      v9 = (_DWORD *)((char *)v9 + v8);
    }
    v7[5] = v9;
    *(_BYTE *)(a1 + 242) = 1;
    *v14 = a2 == nullptr;
  }
  else
  {
    v7[4] = a1;
    v7[5] = a1;
    *(_BYTE *)(a1 + 242) = 0;
    *v14 = false;
  }
  return 0;
}


//======================================================================
// sub_353D16
// address: 0x00353D16   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_353D16(int a1)
{
  int i; // r3
  int v2; // r2

  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(a1 + 20) )
      return 0;
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * i + 4);
    if ( v2 != 0 && *(_DWORD *)(v2 + 16) != 0 )
      break;
  }
  return 1;
}


//======================================================================
// sub_353D40
// address: 0x00353D40   size: 0x32 (50 bytes)
//======================================================================
const char *__fastcall sub_353D40(int a1)
{
  const char *result; // r0

  if ( a1 == 516 )
    return "abort due to ROLLBACK";
  if ( (unsigned __int8)a1 > 0x1Au )
    return "unknown error";
  result = (const char *)*(&off_454668 + (unsigned __int8)a1 + 16);
  if ( result == nullptr )
    return "unknown error";
  return result;
}


//======================================================================
// sub_353D8C
// address: 0x00353D8C   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_353D8C(int *a1, int a2)
{
  int v2; // r2
  int result; // r0

  v2 = a1[121];
  result = 0;
  if ( 1000 * (a2 + 1) <= v2 )
  {
    sub_34CAE0(*a1);
    return 1;
  }
  return result;
}


//======================================================================
// sub_353DFC
// address: 0x00353DFC   size: 0x84 (132 bytes)
//======================================================================
__int64 __fastcall sub_353DFC(__int64 a1, int *a2)
{
  int v2; // r7
  int *v3; // r5
  int *v4; // r4
  int i; // r3
  int v6; // r4
  float *v7; // r5
  float v8; // r3
  int v9; // r3
  int v10; // r2
  int v11; // r2
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v2 = *(_DWORD *)(a1 + 612);
  if ( v2 != 0 )
  {
    v3 = a2;
    v4 = (int *)HIDWORD(a1);
    for ( i = 0; ; i += 2 )
    {
      v3 += 2;
      v4 += 2;
      if ( i >= 2 * *(_DWORD *)(a1 + 20) )
        break;
      v10 = *v4;
      if ( *v4 > *v3 )
        v10 = *v3;
      *v4 = v10;
      v11 = v4[1];
      if ( v11 < v3[1] )
        v11 = v3[1];
      v4[1] = v11;
    }
  }
  else
  {
    v6 = HIDWORD(a1);
    v7 = (float *)a2;
    while ( v2 < 2 * *(_DWORD *)(a1 + 20) )
    {
      v8 = *(float *)(v6 + 8);
      if ( v8 >= v7[2] )
        v8 = v7[2];
      *(float *)(v6 + 8) = v8;
      LODWORD(v13) = *(_DWORD *)(v6 + 12);
      *((float *)&v13 + 1) = v7[3];
      v9 = v13;
      if ( *(float *)&v13 <= *((float *)&v13 + 1) )
        v9 = *((_DWORD *)v7 + 3);
      *(_DWORD *)(v6 + 12) = v9;
      v2 += 2;
      v6 += 8;
      v7 += 2;
    }
  }
  return v13;
}


//======================================================================
// sub_353E80
// address: 0x00353E80   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_353E80(int a1, __int16 a2, int a3, int a4)
{
  _DWORD v9[5]; // [sp+8h] [bp-14h] BYREF

  if ( a1 >= 0 && (j_memset(v9, 0, 0x10u), LOWORD(v9[0]) = a2, v9[1] = a3, v9[2] = a4, off_47237C(a1, 6, v9) == -1) )
    return 5;
  else
    return 0;
}


//======================================================================
// sub_353EC4
// address: 0x00353EC4   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_353EC4(int a1, int a2, int a3, char a4)
{
  _WORD *v4; // r4
  _DWORD *v5; // r6
  int v6; // r5
  unsigned __int16 v8; // r3
  int v9; // r1
  unsigned __int16 v10; // r3
  __int16 v11; // r5
  __int16 v12; // r5
  int v13; // r7
  __int16 v14; // r2
  int v15; // r0

  v4 = *(_WORD **)(a1 + 36);
  v5 = *(_DWORD **)v4;
  v6 = (1 << (a2 + a3)) - (1 << a2);
  sqlite3_mutex_enter(*(_DWORD *)(*(_DWORD *)v4 + 4));
  v8 = a4 & 1;
  v9 = v5[8];
  if ( (a4 & 1) != 0 )
  {
    v10 = 0;
    while ( v9 != 0 )
    {
      if ( (_WORD *)v9 != v4 )
        v10 |= *(_WORD *)(v9 + 10);
      v9 = *(_DWORD *)(v9 + 4);
    }
    if ( ((unsigned __int16)v6 & v10) != 0 || (v13 = sub_353E80(v5[3], 2, a2 + 120, a3)) == 0 )
    {
      v11 = ~(_WORD)v6;
      v4[6] &= v11;
      v12 = v11 & v4[5];
LABEL_18:
      v4[5] = v12;
      v13 = 0;
    }
  }
  else if ( (a4 & 4) != 0 )
  {
    while ( v9 != 0 )
    {
      if ( (*(_WORD *)(v9 + 12) & (unsigned __int16)v6) != 0 )
        goto LABEL_24;
      v14 = *(_WORD *)(v9 + 10);
      v9 = *(_DWORD *)(v9 + 4);
      v8 |= v14;
    }
    if ( ((unsigned __int16)v6 & v8) != 0 || (v13 = sub_353E80(v5[3], 0, a2 + 120, a3)) == 0 )
    {
      v12 = v6 | v4[5];
      goto LABEL_18;
    }
  }
  else
  {
    while ( v9 != 0 )
    {
      if ( (*(_WORD *)(v9 + 12) & (unsigned __int16)v6) != 0 || (*(_WORD *)(v9 + 10) & (unsigned __int16)v6) != 0 )
      {
LABEL_24:
        v13 = 5;
        goto LABEL_27;
      }
      v9 = *(_DWORD *)(v9 + 4);
    }
    v15 = sub_353E80(v5[3], 1, a2 + 120, a3);
    v13 = v15;
    if ( v15 == 0 )
      v4[6] |= v6;
  }
LABEL_27:
  sqlite3_mutex_leave(v5[1]);
  return v13;
}


//======================================================================
// sub_353F9C
// address: 0x00353F9C   size: 0x10 (16 bytes)
//======================================================================
int sub_353F9C()
{
  sub_350028();
  return 0;
}


//======================================================================
// sub_353FAC
// address: 0x00353FAC   size: 0x6C (108 bytes)
//======================================================================
_DWORD *__fastcall sub_353FAC(_DWORD *a1)
{
  _DWORD *i; // r1
  _DWORD *v2; // r3
  _DWORD *v3; // r4
  _DWORD *v4; // r3
  int v5; // r6
  int v6; // r7
  _DWORD *v7; // r0
  _DWORD *result; // r0
  int j; // r4
  _DWORD *v10; // r1
  _DWORD *v11; // [sp+4h] [bp-88h]
  _DWORD *v12[33]; // [sp+8h] [bp-84h] BYREF

  for ( i = (_DWORD *)*a1; i != nullptr; i = v2 )
  {
    v2 = (_DWORD *)i[8];
    i[3] = v2;
  }
  v3 = (_DWORD *)*a1;
  j_memset(v12, 0, 0x80u);
  while ( v3 != nullptr )
  {
    v4 = (_DWORD *)v3[3];
    v5 = 0;
    v3[3] = 0;
    v11 = v4;
    do
    {
      v6 = v5;
      v7 = v12[v5];
      if ( v7 == nullptr )
      {
        v12[v5] = v3;
        goto LABEL_11;
      }
      ++v5;
      v3 = (_DWORD *)sub_34DD3C(v7, v3);
      v12[v6] = nullptr;
    }
    while ( v5 != 31 );
    v12[31] = (_DWORD *)sub_34DD3C(v12[31], v3);
LABEL_11:
    v3 = v11;
  }
  result = v12[0];
  for ( j = 1; j != 32; ++j )
  {
    v10 = v12[j];
    result = (_DWORD *)sub_34DD3C(result, v10);
  }
  return result;
}


//======================================================================
// sub_354018
// address: 0x00354018   size: 0x20 (32 bytes)
//======================================================================
int *__fastcall sub_354018(int *result)
{
  int *v1; // r4

  v1 = result;
  if ( result[20] == 0 )
  {
    result = (int *)sub_351C3C(result[8]);
    v1[20] = (int)result;
    if ( result != nullptr )
      return (int *)j_memset(result, 0, sizeof(int));
  }
  return result;
}


//======================================================================
// sub_354038
// address: 0x00354038   size: 0x38 (56 bytes)
//======================================================================
int *__fastcall sub_354038(int *result, int *a2, _DWORD *a3)
{
  int *v3; // r4

  if ( a2 != nullptr && *a2 > 0 )
  {
    v3 = &a2[18 * *a2 - 16];
    if ( a3[1] != 1 || *a3 != 0 )
    {
      result = (int *)sub_351C1C(*result, (int)a3);
      v3[16] = (int)result;
    }
    else
    {
      *((_BYTE *)v3 + 37) |= 1u;
    }
  }
  return result;
}


//======================================================================
// sub_354070
// address: 0x00354070   size: 0x2E (46 bytes)
//======================================================================
int *__fastcall sub_354070(int *result, _DWORD *a2, int a3, int a4)
{
  int v5; // r5

  if ( a2 != nullptr )
  {
    v5 = a2[2] + 20 * *a2 - 20;
    result = (int *)sub_351BF2(*result, *(const void **)a3, *(_DWORD *)(a3 + 4));
    *(_DWORD *)(v5 + 4) = result;
    if ( a4 != 0 && result != nullptr )
      return (int *)sub_34CF6A((unsigned __int8 *)result);
  }
  return result;
}


//======================================================================
// sub_35409E
// address: 0x0035409E   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_35409E(int a1, int a2, int a3)
{
  int v5; // r3
  char *v6; // r0
  char *v7; // r6
  int v8; // r2
  char *v9; // r6
  char *v10; // r6

  v5 = 0;
  if ( *(unsigned __int16 *)(a2 + 52) < a3 )
  {
    v6 = (char *)sub_351894(a1, 7 * a3);
    v5 = 7;
    v7 = v6;
    if ( v6 != nullptr )
    {
      j_memcpy(v6, *(const void **)(a2 + 32), 4 * *(unsigned __int16 *)(a2 + 52));
      v8 = *(unsigned __int16 *)(a2 + 52);
      *(_DWORD *)(a2 + 32) = v7;
      v9 = &v7[4 * a3];
      j_memcpy(v9, *(const void **)(a2 + 4), 2 * v8);
      *(_DWORD *)(a2 + 4) = v9;
      v10 = &v9[2 * a3];
      j_memcpy(v10, *(const void **)(a2 + 28), *(unsigned __int16 *)(a2 + 52));
      *(_DWORD *)(a2 + 28) = v10;
      *(_WORD *)(a2 + 52) = a3;
      *(_BYTE *)(a2 + 55) |= 0x10u;
      return 0;
    }
  }
  return v5;
}


//======================================================================
// sub_3540FC
// address: 0x003540FC   size: 0x2A (42 bytes)
//======================================================================
_WORD *__fastcall sub_3540FC(int *a1, int a2, int a3)
{
  _WORD *v4; // r0
  int v5; // r2

  if ( *(_DWORD *)(a3 + 4) != 0 )
  {
    v4 = sub_351A12(*a1, 95, (unsigned __int8 **)a3, 1);
    if ( v4 != nullptr )
    {
      v5 = *((_DWORD *)v4 + 1) | 0x1100;
      *((_DWORD *)v4 + 3) = a2;
      *((_DWORD *)v4 + 1) = v5;
      return v4;
    }
  }
  return (_WORD *)a2;
}


//======================================================================
// sub_354126
// address: 0x00354126   size: 0x1C (28 bytes)
//======================================================================
_WORD *__fastcall sub_354126(int *a1, int a2, unsigned int a3)
{
  _DWORD v6[2]; // [sp+0h] [bp-8h] BYREF

  v6[0] = a3;
  v6[1] = sub_34CF50(a3);
  return sub_3540FC(a1, a2, (int)v6);
}


//======================================================================
// sub_354142
// address: 0x00354142   size: 0x5A (90 bytes)
//======================================================================
_WORD *__fastcall sub_354142(int *a1, int a2, int a3, int a4)
{
  int v4; // r6
  _WORD *v8; // r0
  _WORD *v9; // r1
  int v10; // r3
  unsigned int v11; // r2

  v4 = *a1;
  v8 = sub_351B26(*a1, 159, nullptr);
  v9 = v8;
  if ( v8 != nullptr )
  {
    if ( a4 < 0 || *(__int16 *)(a2 + 36) == a4 )
    {
      *((_DWORD *)v8 + 7) = a3;
      *((_BYTE *)v8 + 1) = 100;
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 4) + 24 * a4;
      *((_DWORD *)v8 + 7) = a3 + a4 + 1;
      *((_BYTE *)v8 + 1) = *(_BYTE *)(v10 + 21);
      v11 = *(_DWORD *)(v10 + 16);
      if ( v11 == 0 )
        v11 = **(_DWORD **)(v4 + 8);
      return sub_354126(a1, (int)v8, v11);
    }
  }
  return v9;
}


//======================================================================
// sub_35419C
// address: 0x0035419C   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_35419C(int a1, char *a2, char *a3)
{
  int v3; // r4
  const char *v4; // r5
  char *v5; // r2
  char **v6; // r6

  v3 = 0;
  v4 = a2;
  if ( a2 != nullptr )
  {
    while ( j_strcmp(v4, (&off_472324)[3 * v3]) != 0 )
    {
      if ( ++v3 == 24 )
        return 12;
    }
    v6 = &(&off_472324)[3 * v3];
    if ( v6[2] == nullptr )
      v6[2] = v6[1];
    if ( a3 == nullptr )
      a3 = (&off_472324)[3 * v3 + 2];
    (&off_472324)[3 * v3 + 1] = a3;
  }
  else
  {
    do
    {
      v5 = *(char **)((char *)&off_472324 + (_DWORD)v4 + 8);
      if ( v5 != nullptr )
        *(char **)((char *)&off_472324 + (_DWORD)v4 + 4) = v5;
      v4 += 12;
    }
    while ( v4 != (const char *)&dword_120 );
  }
  return 0;
}


//======================================================================
// sub_354228
// address: 0x00354228   size: 0x11E (286 bytes)
//======================================================================
int __fastcall sub_354228(unsigned __int8 *a1, unsigned __int8 *a2, int a3)
{
  int v6; // r4
  int v7; // r1
  int v8; // r4
  unsigned int v9; // r0
  int v10; // r3
  const char *v11; // r0
  int v12; // r2
  int v13; // r3
  int v15; // [sp+0h] [bp-14h]
  int v16; // [sp+4h] [bp-10h]
  __int16 v17; // [sp+8h] [bp-Ch]
  int v18; // [sp+Ch] [bp-8h]

  if ( a1 == nullptr )
    return 2 * (a2 != nullptr);
  if ( a2 == nullptr )
    return 2;
  v7 = *((_DWORD *)a1 + 1);
  v16 = *((_DWORD *)a2 + 1);
  v15 = v7;
  v17 = v16 | v7;
  if ( ((v16 | v7) & 0x400) != 0 )
  {
    v6 = 2;
    if ( (v16 & v7 & 0x400) != 0 )
      return 2 * (*((_DWORD *)a1 + 2) != *((_DWORD *)a2 + 2));
    return v6;
  }
  v8 = *a1;
  v18 = *a2;
  if ( v8 == v18 )
  {
    if ( v8 != 154 && v8 != 156 )
    {
      v11 = *((const char **)a1 + 2);
      if ( v11 != nullptr && j_strcmp(v11, *((const char **)a2 + 2)) != 0 )
      {
        v10 = v8 == 95;
        return 2 - v10;
      }
    }
    v6 = 2;
    if ( ((v16 ^ v15) & 0x10) == 0 )
    {
      v6 = 0;
      if ( (v17 & 0x4000) == 0 )
      {
        v6 = 2;
        if ( (v17 & 0x800) == 0
          && sub_354228(*((_DWORD *)a1 + 3), *((_DWORD *)a2 + 3), a3) == 0
          && sub_354228(*((_DWORD *)a1 + 4), *((_DWORD *)a2 + 4), a3) == 0 )
        {
          v6 = sub_13A7DE(*((int **)a1 + 5), *((_DWORD **)a2 + 5), a3);
          if ( v6 != 0 )
            return 2;
          if ( (v17 & 0x2000) == 0 )
          {
            if ( *((__int16 *)a1 + 16) != *((__int16 *)a2 + 16) )
              return 2;
            v12 = *((_DWORD *)a1 + 7);
            v13 = *((_DWORD *)a2 + 7);
            if ( v12 != v13 && (v12 != a3 || v13 >= 0) )
              return 2;
          }
        }
      }
    }
  }
  else
  {
    if ( v8 == 95 && sub_354228(*((_DWORD *)a1 + 3), a2, a3) <= 1 )
      return 1;
    v6 = 2;
    if ( v18 == 95 )
    {
      v9 = sub_354228(a1, *((_DWORD *)a2 + 3), a3);
      v10 = (v9 >> 31) + (v9 <= 1);
      return 2 - v10;
    }
  }
  return v6;
}


//======================================================================
// sub_354346
// address: 0x00354346   size: 0x62 (98 bytes)
//======================================================================
bool __fastcall sub_354346(unsigned __int8 **a1, unsigned __int8 *a2, int a3)
{
  int v6; // r4
  int v7; // r3
  int v8; // r3

  v6 = 1;
  if ( sub_354228((unsigned __int8 *)a1, a2, a3) != 0 )
  {
    v7 = *a2;
    if ( v7 == 71 )
    {
      if ( sub_354346(a1, *((_DWORD *)a2 + 3), a3) == 0 )
        return sub_354346(a1, *((_DWORD *)a2 + 4), a3) != 0;
    }
    else
    {
      v6 = 0;
      if ( v7 == 77 )
      {
        v6 = sub_354228(a1[3], *((unsigned __int8 **)a2 + 3), a3);
        if ( v6 != 0 )
        {
          return false;
        }
        else
        {
          v8 = *(unsigned __int8 *)a1;
          if ( v8 != 76 )
            return v8 != 73;
        }
      }
    }
  }
  return v6;
}


//======================================================================
// sub_3543A8
// address: 0x003543A8   size: 0x1BE (446 bytes)
//======================================================================
bool __fastcall sub_3543A8(unsigned __int8 *a1, int a2)
{
  _BOOL4 result; // r0
  int v5; // r4
  double v6; // r4
  int v7; // r3
  int v8; // r0
  int v9; // r0
  unsigned __int8 *v10; // r3
  int v11; // r4
  unsigned __int8 *i; // [sp+24h] [bp-30h]
  double v13; // [sp+28h] [bp-2Ch]
  double v14; // [sp+30h] [bp-24h]
  int v15; // [sp+3Ch] [bp-18h] BYREF
  int v16; // [sp+40h] [bp-14h] BYREF
  _DWORD v17[4]; // [sp+44h] [bp-10h] BYREF

  if ( sub_350C38(a1, 2, 0, 24, 58, &v15, 2, 0, 59, 0, &v16) != 2 )
    return true;
  i = a1 + 5;
  if ( a1[5] != 58 )
  {
    v17[0] = 0;
LABEL_12:
    v6 = 0.0;
    goto LABEL_13;
  }
  if ( sub_350C38(a1 + 6, 2, 0, 59, 0, v17) != 1 )
    return true;
  i = a1 + 8;
  if ( a1[8] != 46 || (byte_44AA64[a1[9]] & 4) == 0 )
    goto LABEL_12;
  v14 = 1.0;
  v13 = 0.0;
  for ( i = a1 + 9; ; ++i )
  {
    v5 = *i;
    if ( (byte_44AA64[v5] & 4) == 0 )
      break;
    v13 = v13 * 10.0 + (double)v5 - 48.0;
    v14 = v14 * 10.0;
  }
  v6 = v13 / v14;
LABEL_13:
  *(_BYTE *)(a2 + 42) = 0;
  *(_BYTE *)(a2 + 41) = 1;
  v7 = v16;
  v8 = v17[0];
  *(_DWORD *)(a2 + 20) = v15;
  *(_DWORD *)(a2 + 24) = v7;
  *(double *)(a2 + 32) = (double)v8 + v6;
  while ( (byte_44AA64[*i] & 1) != 0 )
    ++i;
  *(_DWORD *)(a2 + 28) = 0;
  v9 = *i;
  if ( v9 == 45 )
  {
    v11 = -1;
    goto LABEL_22;
  }
  if ( v9 == 43 )
  {
    v11 = 1;
LABEL_22:
    if ( sub_350C38(i + 1) == 2 )
    {
      v10 = i + 6;
      *(_DWORD *)(a2 + 28) = v11 * (60 * v17[1] + v17[2]);
      goto LABEL_24;
    }
    return true;
  }
  if ( (v9 & 0xFFFFFFDF) != 0x5A )
    goto LABEL_26;
  v10 = i + 1;
LABEL_24:
  while ( 1 )
  {
    v9 = *v10;
    if ( (byte_44AA64[v9] & 1) == 0 )
      break;
    ++v10;
  }
LABEL_26:
  result = v9 != 0;
  if ( result )
    return true;
  *(_BYTE *)(a2 + 43) = *(_DWORD *)(a2 + 28) != 0;
  return result;
}


//======================================================================
// sub_354598
// address: 0x00354598   size: 0x44 (68 bytes)
//======================================================================
__blkcnt_t __fastcall sub_354598(int a1, __blksize_t *a2)
{
  __blkcnt_t result; // r0
  __blksize_t st_blksize; // r3
  struct stat v6; // [sp+0h] [bp-68h] BYREF

  if ( off_472364(*(_DWORD *)(a1 + 12), &v6) != 0 )
  {
    *(_DWORD *)(a1 + 20) = *(_DWORD *)j___errno();
    return 1802;
  }
  else
  {
    st_blksize = v6.st_blksize;
    result = v6.st_blocks;
    if ( v6.st_blksize == 1 && v6.st_blocks == 0 )
    {
      *a2 = 0;
      a2[1] = 0;
    }
    else
    {
      a2[1] = v6.st_blocks;
      *a2 = st_blksize;
      return 0;
    }
  }
  return result;
}


//======================================================================
// sub_3545E4
// address: 0x003545E4   size: 0x56 (86 bytes)
//======================================================================
pthread_mutex_t *__fastcall sub_3545E4(int a1, pthread_mutexattr_t a2)
{
  pthread_mutex_t *v2; // r4
  pthread_mutex_t *v3; // r0
  pthread_mutexattr_t attr; // [sp+4h] [bp-4h] BYREF

  attr = a2;
  if ( a1 != 0 )
  {
    if ( a1 == 1 )
    {
      v2 = (pthread_mutex_t *)sub_351CC4(4u);
      if ( v2 != nullptr )
      {
        j_pthread_mutexattr_init(&attr);
        j_pthread_mutexattr_settype();
        j_pthread_mutex_init(v2, &attr);
        j_pthread_mutexattr_destroy(&attr);
      }
    }
    else
    {
      return (pthread_mutex_t *)((char *)&unk_55933C + 4 * a1 - 8);
    }
  }
  else
  {
    v3 = (pthread_mutex_t *)sub_351CC4(4u);
    v2 = v3;
    if ( v3 != nullptr )
      j_pthread_mutex_init(v3, nullptr);
  }
  return v2;
}


//======================================================================
// sub_354640
// address: 0x00354640   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_354640(int result)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6

  v1 = result;
  --*(_DWORD *)(result + 104);
  v2 = result + 120;
  v3 = result + 320;
  do
  {
    if ( *(_DWORD *)(v2 + 12) != 0 && *(_DWORD *)(v2 + 8) > *(_DWORD *)(v1 + 104) )
    {
      result = sub_3532B0(v1, v2);
      *(_DWORD *)(v2 + 12) = 0;
    }
    v2 += 20;
  }
  while ( v2 != v3 );
  return result;
}


//======================================================================
// sub_354678
// address: 0x00354678   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_354678(int a1)
{
  int result; // r0

  if ( a1 == 13 )
    return 5;
  if ( a1 <= 13 )
  {
    if ( a1 != 4 && a1 != 11 )
    {
      result = 3;
      if ( a1 == 1 )
        return result;
      return 3850;
    }
    return 5;
  }
  if ( a1 == 37 || a1 == 110 || a1 == 16 )
    return 5;
  return 3850;
}


//======================================================================
// sub_3546AC
// address: 0x003546AC   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_3546AC(int a1, char a2)
{
  int v3; // r3
  const char *v5; // r0
  int result; // r0
  int *v7; // r0
  int v8; // r5

  v3 = *(unsigned __int8 *)(a1 + 16);
  v5 = *(const char **)(a1 + 24);
  if ( v3 != 0 )
  {
    *(_BYTE *)(a1 + 16) = a2;
    j_utimes(v5, nullptr);
    return 0;
  }
  else
  {
    result = off_472400(v5, 0x1FFu);
    if ( result >= 0 )
    {
      *(_BYTE *)(a1 + 16) = a2;
    }
    else
    {
      v7 = (int *)j___errno();
      v8 = *v7;
      if ( *v7 == 17 )
      {
        return 5;
      }
      else
      {
        result = sub_354678(*v7);
        if ( result != 0 && result != 5 )
          *(_DWORD *)(a1 + 20) = v8;
      }
    }
  }
  return result;
}


//======================================================================
// sub_354704
// address: 0x00354704   size: 0x196 (406 bytes)
//======================================================================
int __fastcall sub_354704(int a1, int a2)
{
  int v2; // r3
  int result; // r0
  int v5; // r7
  unsigned int v6; // r2
  unsigned int v7; // r3
  int v8; // r5
  int v9; // r3
  int v10; // r4
  int v11; // r0
  int v12; // r3
  int v13; // r4
  int v14; // r0
  int v16; // [sp+4h] [bp-18h]
  _DWORD v17[5]; // [sp+8h] [bp-14h] BYREF

  v2 = *(unsigned __int8 *)(a1 + 16);
  result = 0;
  if ( v2 < a2 )
  {
    sub_34DAAE();
    v5 = *(_DWORD *)(a1 + 8);
    v6 = *(unsigned __int8 *)(a1 + 16);
    v7 = *(unsigned __int8 *)(v5 + 12);
    if ( v6 == v7 )
    {
      if ( a2 != 1 )
        goto LABEL_9;
    }
    else
    {
      v8 = 5;
      if ( v7 > 2 || a2 != 1 )
        goto LABEL_40;
    }
    if ( v7 - 1 <= 1 )
    {
      *(_BYTE *)(a1 + 16) = 1;
      ++*(_DWORD *)(v5 + 8);
      ++*(_DWORD *)(v5 + 24);
LABEL_36:
      v8 = 0;
      goto LABEL_40;
    }
LABEL_9:
    v17[2] = 1;
    HIWORD(v17[0]) = 0;
    if ( a2 == 1 )
      goto LABEL_19;
    if ( a2 != 4 )
    {
LABEL_11:
      v9 = 1;
      LOWORD(v17[0]) = 1;
      if ( a2 == 2 )
      {
        v17[1] = dword_471740 + 1;
      }
      else
      {
        v17[1] = dword_471740 + 2;
        v9 = 510;
      }
      v17[2] = v9;
      if ( sub_34DB04(a1, (int)v17) == 0 )
        goto LABEL_35;
      v13 = *(_DWORD *)j___errno();
      v14 = sub_354678(v13);
      v8 = v14;
      if ( v14 != 5 )
      {
        *(_DWORD *)(a1 + 20) = v13;
        if ( v14 == 0 )
          goto LABEL_35;
LABEL_38:
        if ( a2 == 4 )
        {
          *(_BYTE *)(a1 + 16) = 3;
          *(_BYTE *)(v5 + 12) = 3;
        }
        goto LABEL_40;
      }
LABEL_37:
      v8 = 5;
      goto LABEL_38;
    }
    if ( v6 <= 2 )
    {
LABEL_19:
      LOWORD(v17[0]) = a2 != 1;
      v17[1] = dword_471740;
      if ( sub_34DB04(a1, (int)v17) != 0 )
      {
        v10 = *(_DWORD *)j___errno();
        v8 = sub_354678(v10);
        if ( v8 != 5 )
          *(_DWORD *)(a1 + 20) = v10;
        goto LABEL_40;
      }
      if ( a2 == 1 )
      {
        v17[1] = dword_471740 + 2;
        v17[2] = 510;
        v11 = sub_34DB04(a1, (int)v17);
        if ( v11 != 0 )
        {
          v16 = *(_DWORD *)j___errno();
          v11 = sub_354678(v16);
        }
        else
        {
          v16 = 0;
        }
        v8 = v11;
        v17[1] = dword_471740;
        v17[2] = 1;
        LOWORD(v17[0]) = 2;
        if ( sub_34DB04(a1, (int)v17) != 0 )
        {
          if ( v8 == 0 )
          {
            v8 = 2058;
            v16 = *(_DWORD *)j___errno();
            goto LABEL_28;
          }
        }
        else if ( v8 == 0 )
        {
          *(_BYTE *)(a1 + 16) = 1;
          v12 = *(_DWORD *)(v5 + 24);
          *(_DWORD *)(v5 + 8) = 1;
          *(_DWORD *)(v5 + 24) = v12 + 1;
LABEL_35:
          *(_BYTE *)(a1 + 16) = a2;
          *(_BYTE *)(v5 + 12) = a2;
          goto LABEL_36;
        }
        if ( v8 == 5 )
        {
LABEL_40:
          sub_34DABC();
          return v8;
        }
LABEL_28:
        *(_DWORD *)(a1 + 20) = v16;
        goto LABEL_40;
      }
    }
    if ( *(int *)(v5 + 8) > 1 )
      goto LABEL_37;
    goto LABEL_11;
  }
  return result;
}


//======================================================================
// sub_3548B0
// address: 0x003548B0   size: 0x3C (60 bytes)
//======================================================================
_BYTE *__fastcall sub_3548B0(int a1)
{
  int v2; // r5
  _BYTE *result; // r0
  _BYTE *v4; // r3

  v2 = sub_34D8D8((unsigned int *)(*(_DWORD *)(a1 + 16) + 100)) + 1;
  sub_34D8F0((_BYTE *)(*(_DWORD *)(a1 + 4) + 24), v2);
  result = sub_34D8F0((_BYTE *)(*(_DWORD *)(a1 + 4) + 92), v2);
  v4 = *(_BYTE **)(a1 + 4);
  v4[96] = 0;
  v4[97] = 45;
  v4[98] = -26;
  v4[99] = 4;
  return result;
}


//======================================================================
// sub_3548EC
// address: 0x003548EC   size: 0x2C (44 bytes)
//======================================================================
bool __fastcall sub_3548EC(int a1)
{
  _BYTE *v1; // r4

  v1 = (_BYTE *)(a1 + 43);
  *(_BYTE *)(a1 + 43) = 0;
  if ( sub_34CA9A(*(_DWORD *)(a1 + 4)) != 0 )
    *v1 = 1;
  return *v1 == 0;
}


//======================================================================
// sub_354918
// address: 0x00354918   size: 0x24 (36 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00354918  PUSH    {R3,LR}
//   0035491A  MOVS    R3, R0
//   0035491C  ADDS    R3, #0xFC
//   0035491E  LDR     R2, [R3,#0x10]
//   00354920  CMP     R1, R2
//   00354922  BCC     loc_35492A
//   00354924  LDR     R3, [R3,#0x14]
//   00354926  CMP     R1, R3
//   00354928  BCC     loc_354936
//   0035492A  LDR     R3, =(dword_471638 - 0x354932)
//   0035492C  MOVS    R0, R1
//   0035492E  ADD     R3, PC; dword_471638
//   00354930  LDR     R3, [R3,#(off_471668 - 0x471638)]
//   00354932  BLX     R3
//   00354934  B       locret_35493A
//   00354936  ADDS    R0, #0xF0
//   00354938  LDRH    R0, [R0]
//   0035493A  POP     {R3,PC}

//======================================================================
// sub_354940
// address: 0x00354940   size: 0x48 (72 bytes)
//======================================================================
_DWORD *__fastcall sub_354940(_DWORD *result, _DWORD *a2)
{
  int *v2; // r4
  int v3; // r5
  _DWORD *v4; // r3
  int v5; // r2

  if ( a2 != nullptr )
  {
    if ( result == nullptr )
      return (_DWORD *)sqlite3_free(a2);
    v2 = (int *)result[128];
    if ( v2 != nullptr )
    {
      v3 = *v2;
      result = (_DWORD *)sub_354918();
      *v2 = (int)result + v3;
      return result;
    }
    v4 = result + 63;
    if ( (unsigned int)a2 >= result[67] && (unsigned int)a2 < result[68] )
    {
      v5 = result[66];
      result += 61;
      *a2 = v5;
      v4[3] = a2;
      --*result;
    }
    else
    {
      return (_DWORD *)sqlite3_free(a2);
    }
  }
  return result;
}


//======================================================================
// sub_354988
// address: 0x00354988   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_354988(_DWORD *result)
{
  _DWORD *v1; // r1
  _DWORD *v2; // r4

  v1 = (_DWORD *)result[2];
  v2 = result;
  if ( v1 != (_DWORD *)result[1] )
  {
    if ( *((_BYTE *)result + 24) == 1 )
      result = sub_354940((_DWORD *)*result, v1);
    else
      result = (_DWORD *)sqlite3_free(result[2]);
  }
  v2[2] = 0;
  return result;
}


//======================================================================
// sub_3549AE
// address: 0x003549AE   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3549AE(_DWORD *result)
{
  _DWORD *v1; // r1
  _DWORD *v2; // r4
  _DWORD *v3; // r5

  v1 = (_DWORD *)*result;
  v2 = result;
  while ( v1 != nullptr )
  {
    v3 = (_DWORD *)*v1;
    result = sub_354940((_DWORD *)v2[1], v1);
    v1 = v3;
  }
  *v2 = 0;
  *((_WORD *)v2 + 12) = 0;
  v2[2] = 0;
  v2[3] = 0;
  v2[5] = 0;
  *((_BYTE *)v2 + 26) = 1;
  return result;
}


//======================================================================
// sub_3549D4
// address: 0x003549D4   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3549D4(_DWORD *result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r3
  _DWORD *v3; // r2

  v1 = result;
  if ( (result[7] & 0x40) != 0 )
  {
    v2 = (_DWORD *)result[4];
    v3 = (_DWORD *)(*v2 + 180);
    v2[1] = *v3;
    *v3 = v2;
  }
  if ( (result[7] & 0x20) != 0 )
    result = sub_3549AE((_DWORD *)result[4]);
  *((_WORD *)v1 + 14) = v1[7] & 0xBE00 | 1;
  return result;
}


//======================================================================
// sub_354A30
// address: 0x00354A30   size: 0xFA (250 bytes)
//======================================================================
_DWORD *__fastcall sub_354A30(int a1, int *a2)
{
  int v2; // r5
  int v3; // r4
  unsigned __int8 *v6; // r3
  int i; // r1
  int v8; // r0
  char v9; // r7
  unsigned __int8 v10; // r7
  int v11; // r0
  _DWORD *result; // r0
  int v13; // [sp+0h] [bp-1Ch]
  int v14; // [sp+8h] [bp-14h]
  int v15; // [sp+Ch] [bp-10h]

  v2 = *(_DWORD *)(a1 + 24);
  v3 = *a2;
  v15 = *(_DWORD *)(v2 + 116);
  *(_BYTE *)(a1 + 89) = *(_BYTE *)(a1 + 89) & 0xFC | 1;
  v6 = *(unsigned __int8 **)(a1 + 4);
  for ( i = *(_DWORD *)(a1 + 32) - 1; i >= 0; --i )
  {
    v14 = *v6;
    switch ( *v6 )
    {
      case 1u:
      case 0xAu:
        v8 = v6[3];
        goto LABEL_12;
      case 2u:
      case 3u:
        goto LABEL_7;
      case 4u:
        if ( *((_DWORD *)v6 + 2) != 0 )
          *(_BYTE *)(a1 + 89) &= ~1u;
LABEL_7:
        v13 = a1 + 88;
        v9 = *(_BYTE *)(a1 + 89);
        goto LABEL_9;
      case 5u:
      case 7u:
      case 9u:
        *((_DWORD *)v6 + 4) = sub_36AB10;
        v6[1] = -19;
        break;
      case 6u:
      case 8u:
        *((_DWORD *)v6 + 4) = sub_36AC18;
        v6[1] = -19;
        break;
      case 0xBu:
      case 0xCu:
      case 0xDu:
        v13 = a1 + 88;
        v9 = *(_BYTE *)(a1 + 89) & 0xFE;
LABEL_9:
        *(_BYTE *)(v13 + 1) = v9 | 2;
        break;
      case 0xEu:
        v8 = *((_DWORD *)v6 - 4);
        goto LABEL_12;
      case 0xFu:
        v8 = *((_DWORD *)v6 + 2);
LABEL_12:
        if ( v3 < v8 )
          v3 = v8;
        break;
      default:
        break;
    }
    v10 = byte_44B182[v14];
    v6[2] = v10;
    if ( (v10 & 1) != 0 )
    {
      v11 = *((_DWORD *)v6 + 2);
      if ( v11 < 0 )
        *((_DWORD *)v6 + 2) = *(_DWORD *)(4 * ~v11 + v15);
    }
    v6 += 20;
  }
  result = sub_354940(*(_DWORD **)a1, *(_DWORD **)(v2 + 116));
  *(_DWORD *)(v2 + 116) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  *a2 = v3;
  return result;
}


//======================================================================
// sub_354B38
// address: 0x00354B38   size: 0x246 (582 bytes)
//======================================================================
int __fastcall sub_354B38(int a1, int a2)
{
  int v2; // r6
  int v5; // r3
  int v6; // r3
  int v7; // r2
  char *v8; // r6
  char v9; // r3
  int v10; // r0
  int v11; // r2
  int v12; // r0
  size_t v13; // r1
  void *v14; // r0
  __int16 v15; // r2
  int i; // r3
  int v17; // r2
  int v18; // r3
  _DWORD *v20; // r4
  int j; // r3
  int v22; // r2
  int v23; // [sp+14h] [bp-38h]
  int v24; // [sp+18h] [bp-34h]
  int v25; // [sp+1Ch] [bp-30h]
  int v26; // [sp+20h] [bp-2Ch]
  int v27; // [sp+24h] [bp-28h]
  int v28; // [sp+3Ch] [bp-10h] BYREF
  void *v29; // [sp+40h] [bp-Ch] BYREF
  _DWORD v30[2]; // [sp+44h] [bp-8h] BYREF

  v25 = *(_DWORD *)a1;
  v2 = *(_DWORD *)(a2 + 84);
  v26 = *(_DWORD *)(a2 + 444);
  v5 = *(_DWORD *)(a2 + 76);
  v27 = *(_DWORD *)(a2 + 72);
  v28 = *(_DWORD *)(a2 + 396);
  v24 = v2;
  if ( v2 == 0 )
    v24 = 1;
  v23 = v5 + v27;
  v6 = *(_DWORD *)(a1 + 4);
  v7 = 20 * *(_DWORD *)(a2 + 88);
  v29 = (void *)(v6 + 20 * *(_DWORD *)(a1 + 32));
  v8 = (char *)(v6 + v7);
  sub_354A30(a1, &v28);
  v9 = 0;
  if ( *(_BYTE *)(a2 + 22) != 0 )
    v9 = *(_BYTE *)(a2 + 23) != 0;
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a1 + 88) & 0x7F | (v9 << 7);
  if ( *(_BYTE *)(a2 + 454) != 0 && v23 <= 9 )
    v23 = 10;
  j_memset(v29, 0, v8 - (_BYTE *)v29);
  v29 = (char *)v29 + ((unsigned __int8)v29 & 7);
  *(_BYTE *)(a1 + 88) &= ~0x20u;
  do
  {
    v30[0] = 0;
    *(_DWORD *)(a1 + 8) = sub_352E18(*(_DWORD *)(a1 + 8), 40 * v23, (int *)&v29, (unsigned int)v8, v30);
    v10 = sub_352E18(*(_DWORD *)(a1 + 60), 40 * v26, (int *)&v29, (unsigned int)v8, v30);
    v11 = v28;
    *(_DWORD *)(a1 + 60) = v10;
    *(_DWORD *)(a1 + 12) = sub_352E18(*(_DWORD *)(a1 + 12), 4 * v11, (int *)&v29, (unsigned int)v8, v30);
    *(_DWORD *)(a1 + 64) = sub_352E18(*(_DWORD *)(a1 + 64), 4 * v26, (int *)&v29, (unsigned int)v8, v30);
    *(_DWORD *)(a1 + 56) = sub_352E18(*(_DWORD *)(a1 + 56), 4 * v27, (int *)&v29, (unsigned int)v8, v30);
    v12 = sub_352E18(*(_DWORD *)(a1 + 200), v24, (int *)&v29, (unsigned int)v8, v30);
    v13 = v30[0];
    *(_DWORD *)(a1 + 200) = v12;
    if ( v13 != 0 )
      *(_DWORD *)(a1 + 172) = sub_351894(v25, v13);
    v29 = *(void **)(a1 + 172);
    v8 = (char *)v29 + v30[0];
  }
  while ( v30[0] != 0 && *(_BYTE *)(v25 + 64) == 0 );
  *(_DWORD *)(a1 + 36) = v27;
  *(_DWORD *)(a1 + 196) = v24;
  if ( *(_DWORD *)(a1 + 60) != 0 )
  {
    *(_WORD *)(a1 + 68) = v26;
    for ( i = 0; i < v26; ++i )
    {
      v17 = 40 * i;
      *(_WORD *)(*(_DWORD *)(a1 + 60) + v17 + 28) = 1;
      *(_DWORD *)(*(_DWORD *)(a1 + 60) + v17) = v25;
    }
  }
  v14 = *(void **)(a1 + 64);
  if ( v14 != nullptr )
  {
    v15 = *(_WORD *)(a2 + 448);
    *(_WORD *)(a1 + 70) = v15;
    j_memcpy(v14, *(const void **)(a2 + 476), 4 * v15);
    j_memset(*(void **)(a2 + 476), 0, 4 * *(_DWORD *)(a2 + 448));
  }
  v18 = *(_DWORD *)(a1 + 8);
  if ( v18 != 0 )
  {
    *(_DWORD *)(a1 + 8) = v18 - 40;
    *(_DWORD *)(a1 + 28) = v23;
    for ( j = 1; j <= v23; ++j )
    {
      v22 = 40 * j;
      *(_WORD *)(*(_DWORD *)(a1 + 8) + v22 + 28) = 128;
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + v22) = v25;
    }
  }
  *(_BYTE *)(a1 + 88) = *(_BYTE *)(a1 + 88) & 0xFC | *(_BYTE *)(a2 + 454) & 3;
  *(_DWORD *)(a1 + 40) = -1108210269;
  *(_DWORD *)(a1 + 76) = -1;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 86) = 2;
  *(_DWORD *)(a1 + 72) = 1;
  *(_DWORD *)(a1 + 92) = 0;
  *(_BYTE *)(a1 + 87) = -1;
  *(_DWORD *)(a1 + 104) = 0;
  v20 = (_DWORD *)(a1 + 144);
  *v20 = 0;
  v20[1] = 0;
  return 2;
}


//======================================================================
// sub_354D84
// address: 0x00354D84   size: 0x4C (76 bytes)
//======================================================================
unsigned __int64 __fastcall sub_354D84(_DWORD **a1, int a2, unsigned int a3)
{
  _DWORD **v5; // r5
  _DWORD *v6; // r4
  int v7; // r3
  void (__fastcall *v8)(_DWORD); // r3
  unsigned __int64 v10; // [sp+0h] [bp-Ch]

  v10 = __PAIR64__(a3, (unsigned int)a1);
  v5 = a1 + 51;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == nullptr )
      break;
    if ( a2 >= 0 && (*v6 != a2 || (v7 = v6[1]) <= 31 && ((HIDWORD(v10) >> v7) & 1) != 0) )
    {
      v5 = (_DWORD **)(v6 + 4);
    }
    else
    {
      v8 = (void (__fastcall *)(_DWORD))v6[3];
      if ( v8 != nullptr )
        v8(v6[2]);
      *v5 = (_DWORD *)v6[4];
      sub_354940(*a1, v6);
    }
  }
  return v10;
}


//======================================================================
// sub_354DD0
// address: 0x00354DD0   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_354DD0(int a1)
{
  return sub_354940(*(_DWORD **)(a1 + 48), (_DWORD *)a1);
}


//======================================================================
// sub_354DDC
// address: 0x00354DDC   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_354DDC(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r6
  int i; // r5
  _DWORD *v5; // r1

  v2 = result;
  if ( a2 != nullptr )
  {
    for ( i = 0; ; ++i )
    {
      v5 = (_DWORD *)*a2;
      if ( i >= a2[1] )
        break;
      sub_354940(v2, (_DWORD *)v5[2 * i]);
    }
    sub_354940(v2, v5);
    return sub_354940(v2, a2);
  }
  return result;
}


//======================================================================
// sub_354E0C
// address: 0x00354E0C   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_354E0C(_DWORD *result)
{
  _DWORD *v1; // r1

  v1 = result;
  if ( result != nullptr )
  {
    result = (_DWORD *)(*result - 1);
    *v1 = result;
    if ( result == nullptr )
      return sub_354940(nullptr, v1);
  }
  return result;
}


//======================================================================
// sub_354E22
// address: 0x00354E22   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_354E22(_DWORD *result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5
  int v3; // r3
  int v4; // r0

  v1 = result;
  v2 = (_DWORD *)*result;
  v3 = result[3] - 1;
  result[3] = v3;
  if ( v3 == 0 )
  {
    v4 = result[2];
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 16))(v4);
    return sub_354940(v2, v1);
  }
  return result;
}


//======================================================================
// sub_354E48
// address: 0x00354E48   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_354E48(_DWORD *result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5

  v1 = (_DWORD *)result[81];
  result[81] = 0;
  if ( v1 != nullptr )
  {
    sub_34E530((int)result);
    while ( 1 )
    {
      v2 = (_DWORD *)v1[6];
      result = sub_354E22(v1);
      if ( v2 == nullptr )
        break;
      v1 = v2;
    }
  }
  return result;
}


//======================================================================
// sub_354E6E
// address: 0x00354E6E   size: 0x4C (76 bytes)
//======================================================================
__int64 __fastcall sub_354E6E(__int64 a1)
{
  int v1; // r4
  _DWORD *v2; // r7
  int i; // r5
  _DWORD *v4; // r1
  _DWORD *v5; // r6
  _DWORD *v6; // r0
  void (*v7)(void); // r3

  v1 = a1 + 252;
  v2 = (_DWORD *)a1;
  if ( *(_DWORD *)(a1 + 320) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v4 = *(_DWORD **)(v1 + 68);
      if ( i >= *(_DWORD *)(v1 + 44) )
        break;
      v5 = (_DWORD *)v4[i];
      v6 = (_DWORD *)v5[2];
      if ( v6 != nullptr )
      {
        v7 = *(void (**)(void))(*v6 + HIDWORD(a1));
        if ( v7 != nullptr )
          v7();
      }
      v5[5] = 0;
      sub_354E22(v5);
    }
    sub_354940(v2, v4);
    *(_DWORD *)(v1 + 44) = 0;
    *(_DWORD *)(v1 + 68) = 0;
  }
  return a1;
}


//======================================================================
// sub_354EBA
// address: 0x00354EBA   size: 0x50 (80 bytes)
//======================================================================
_DWORD *__fastcall sub_354EBA(_DWORD *result, int a2)
{
  int v2; // r3
  _DWORD *v3; // r5
  int v5; // r3

  v2 = *(_DWORD *)(a2 + 36);
  v3 = result;
  if ( (v2 & 0x4400) != 0 )
  {
    if ( (v2 & 0x400) != 0 && *(_BYTE *)(a2 + 28) != 0 )
    {
      result = (_DWORD *)sqlite3_free(*(_DWORD *)(a2 + 32));
      *(_BYTE *)(a2 + 28) = 0;
      *(_DWORD *)(a2 + 32) = 0;
    }
    else if ( (v2 & 0x4000) != 0 )
    {
      v5 = *(_DWORD *)(a2 + 28);
      if ( v5 != 0 )
      {
        sub_354940(result, *(_DWORD **)(v5 + 16));
        sub_354E0C(*(_DWORD **)(*(_DWORD *)(a2 + 28) + 40));
        result = sub_354940(v3, *(_DWORD **)(a2 + 28));
        *(_DWORD *)(a2 + 28) = 0;
      }
    }
  }
  return result;
}


//======================================================================
// sub_354F0A
// address: 0x00354F0A   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall sub_354F0A(_DWORD *result)
{
  _DWORD *i; // r4
  _DWORD *v2; // r1

  for ( i = result; ; result = sub_354940(i, v2) )
  {
    v2 = (_DWORD *)i[120];
    if ( v2 == nullptr )
      break;
    i[120] = v2[6];
  }
  i[122] = 0;
  i[123] = 0;
  *((_BYTE *)i + 69) = 0;
  return result;
}


//======================================================================
// sub_354F36
// address: 0x00354F36   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_354F36(_DWORD *result, int a2)
{
  _DWORD *v2; // r5
  int v4; // r3

  v2 = result;
  if ( a2 != 0 )
  {
    v4 = *(_DWORD *)a2 - 1;
    *(_DWORD *)a2 = v4;
    if ( v4 == 0 )
    {
      (*(void (__fastcall **)(_DWORD))(a2 + 4))(*(_DWORD *)(a2 + 8));
      return sub_354940(v2, (_DWORD *)a2);
    }
  }
  return result;
}


//======================================================================
// sub_354F58
// address: 0x00354F58   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_354F58(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r4
  _DWORD *v4; // r6

  v2 = result;
  if ( a2 != nullptr )
  {
    v4 = (_DWORD *)a2[7];
    sub_35519A(result, v4[5]);
    sub_3551E8(v2, v4[6]);
    sub_355184(v2, v4[2]);
    sub_35519A(v2, a2[3]);
    return sub_354940(v2, a2);
  }
  return result;
}


//======================================================================
// sub_354F8A
// address: 0x00354F8A   size: 0x142 (322 bytes)
//======================================================================
__int64 __fastcall sub_354F8A(__int64 a1)
{
  unsigned int *i; // r6
  bool v3; // zf
  unsigned __int8 *v4; // r7
  unsigned int v5; // r0
  int j; // r6
  int v7; // r3
  int *v8; // r7
  unsigned int v9; // r0
  int v10; // r3
  int v11; // r7
  int k; // r6
  __int64 v14; // [sp+0h] [bp-Ch]

  v14 = a1;
  if ( HIDWORD(a1) != 0 )
  {
    if ( (_DWORD)a1 != 0 && *(_DWORD *)(a1 + 512) != 0
      || (v3 = (unsigned __int16)(*(_WORD *)(HIDWORD(a1) + 40) - 1) == 0, --*(_WORD *)(HIDWORD(a1) + 40), v3) )
    {
      for ( i = *(unsigned int **)(HIDWORD(a1) + 8); i != nullptr; i = (unsigned int *)HIDWORD(v14) )
      {
        HIDWORD(v14) = i[5];
        if ( (_DWORD)a1 == 0 || *(_DWORD *)(a1 + 512) == 0 )
        {
          v4 = (unsigned __int8 *)*i;
          v5 = sub_34CF50(*i);
          sub_35271C((unsigned int *)(i[6] + 24), v4, v5, nullptr);
        }
        sub_355244(a1, i);
      }
      for ( j = *(_DWORD *)(HIDWORD(a1) + 16); j != 0; j = v11 )
      {
        if ( (_DWORD)a1 == 0 || *(_DWORD *)(a1 + 512) == 0 )
        {
          v7 = *(_DWORD *)(j + 16);
          v8 = *(int **)(j + 12);
          if ( v7 != 0 )
          {
            *(_DWORD *)(v7 + 12) = v8;
          }
          else
          {
            if ( v8 != nullptr )
              HIDWORD(v14) = v8[2];
            else
              HIDWORD(v14) = *(_DWORD *)(j + 8);
            v9 = sub_34CF50(HIDWORD(v14));
            sub_35271C((unsigned int *)(*(_DWORD *)(HIDWORD(a1) + 68) + 56), (unsigned __int8 *)HIDWORD(v14), v9, v8);
          }
          v10 = *(_DWORD *)(j + 12);
          if ( v10 != 0 )
            *(_DWORD *)(v10 + 16) = *(_DWORD *)(j + 16);
        }
        sub_354F58((_DWORD *)a1, *(_DWORD **)(j + 28));
        sub_354F58((_DWORD *)a1, *(_DWORD **)(j + 32));
        v11 = *(_DWORD *)(j + 4);
        sub_354940((_DWORD *)a1, (_DWORD *)j);
      }
      sub_35528A(a1, HIDWORD(a1));
      sub_354940((_DWORD *)a1, *(_DWORD **)HIDWORD(a1));
      sub_354940((_DWORD *)a1, *(_DWORD **)(HIDWORD(a1) + 20));
      sub_355184(a1, *(_DWORD *)(HIDWORD(a1) + 12));
      sub_3551E8(a1, *(_DWORD *)(HIDWORD(a1) + 24));
      if ( (_DWORD)a1 == 0 || *(_DWORD *)(a1 + 512) == 0 )
        sub_353638(0, (_DWORD **)(HIDWORD(a1) + 60));
      if ( *(_DWORD *)(HIDWORD(a1) + 56) != 0 )
      {
        for ( k = 0; k < *(_DWORD *)(HIDWORD(a1) + 52); ++k )
        {
          if ( k != 1 )
            sub_354940((_DWORD *)a1, *(_DWORD **)(4 * k + *(_DWORD *)(HIDWORD(a1) + 56)));
        }
        sub_354940((_DWORD *)a1, *(_DWORD **)(HIDWORD(a1) + 56));
      }
      sub_354940((_DWORD *)a1, (_DWORD *)HIDWORD(a1));
    }
  }
  return v14;
}


//======================================================================
// sub_3550CC
// address: 0x003550CC   size: 0x62 (98 bytes)
//======================================================================
_DWORD *__fastcall sub_3550CC(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r5
  _DWORD *v4; // r4
  int i; // r7
  __int64 v6; // r0

  v2 = result;
  if ( a2 != nullptr )
  {
    v4 = a2 + 2;
    for ( i = 0; i < *a2; ++i )
    {
      sub_354940(v2, (_DWORD *)v4[1]);
      sub_354940(v2, (_DWORD *)v4[2]);
      sub_354940(v2, (_DWORD *)v4[3]);
      sub_354940(v2, (_DWORD *)v4[16]);
      HIDWORD(v6) = v4[4];
      LODWORD(v6) = v2;
      sub_354F8A(v6);
      sub_355184(v2, v4[5]);
      sub_35519A(v2, v4[11]);
      sub_354DDC(v2, (_DWORD *)v4[12]);
      v4 += 18;
    }
    return sub_354940(v2, a2);
  }
  return result;
}


//======================================================================
// sub_35512E
// address: 0x0035512E   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_35512E(_DWORD *a1, int a2)
{
  sub_3551E8(a1, *(_DWORD *)a2);
  sub_3550CC(a1, *(_DWORD **)(a2 + 40));
  sub_35519A(a1, *(_DWORD *)(a2 + 44));
  sub_3551E8(a1, *(_DWORD *)(a2 + 48));
  sub_35519A(a1, *(_DWORD *)(a2 + 52));
  sub_3551E8(a1, *(_DWORD *)(a2 + 56));
  sub_355184(a1, *(_DWORD *)(a2 + 60));
  sub_35519A(a1, *(_DWORD *)(a2 + 68));
  sub_35519A(a1, *(_DWORD *)(a2 + 72));
  return sub_355456(a1, *(_DWORD *)(a2 + 76));
}


//======================================================================
// sub_355184
// address: 0x00355184   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_355184(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r5

  v2 = result;
  if ( a2 != nullptr )
  {
    sub_35512E(result, (int)a2);
    return sub_354940(v2, a2);
  }
  return result;
}


//======================================================================
// sub_35519A
// address: 0x0035519A   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall sub_35519A(_DWORD *result, int a2)
{
  _DWORD *v2; // r5
  _DWORD *v4; // r1

  v2 = result;
  if ( a2 != 0 )
  {
    if ( (*(_DWORD *)(a2 + 4) & 0x4000) == 0 )
    {
      sub_35519A(result, *(_DWORD *)(a2 + 12));
      sub_35519A(v2, *(_DWORD *)(a2 + 16));
      if ( (*(_DWORD *)(a2 + 4) & 0x10000) != 0 )
        sub_354940(v2, *(_DWORD **)(a2 + 8));
      v4 = *(_DWORD **)(a2 + 20);
      if ( (*(_DWORD *)(a2 + 4) & 0x800) != 0 )
        result = sub_355184(v2, v4);
      else
        result = (_DWORD *)sub_3551E8(v2, v4);
    }
    if ( (*(_DWORD *)(a2 + 4) & 0x8000) == 0 )
      return sub_354940(v2, (_DWORD *)a2);
  }
  return result;
}


//======================================================================
// sub_3551E8
// address: 0x003551E8   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall sub_3551E8(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r5
  int v4; // r6
  int i; // r7

  v2 = result;
  if ( a2 != nullptr )
  {
    v4 = a2[2];
    for ( i = 0; i < *a2; ++i )
    {
      sub_35519A(v2, *(_DWORD *)v4);
      sub_354940(v2, *(_DWORD **)(v4 + 4));
      sub_354940(v2, *(_DWORD **)(v4 + 8));
      v4 += 20;
    }
    sub_354940(v2, (_DWORD *)a2[2]);
    return sub_354940(v2, a2);
  }
  return result;
}


//======================================================================
// sub_355228
// address: 0x00355228   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_355228(_DWORD *result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5

  v1 = result;
  if ( result != nullptr )
  {
    v2 = (_DWORD *)*result;
    sub_354940((_DWORD *)*result, (_DWORD *)result[29]);
    return sub_3551E8(v2, (_DWORD *)v1[80]);
  }
  return result;
}


//======================================================================
// sub_355244
// address: 0x00355244   size: 0x46 (70 bytes)
//======================================================================
_DWORD *__fastcall sub_355244(_DWORD *a1, int a2)
{
  if ( a1 == nullptr || a1[128] == 0 )
    sub_354E0C(*(_DWORD **)(a2 + 40));
  sub_35519A(a1, *(_DWORD *)(a2 + 36));
  sub_354940(a1, *(_DWORD **)(a2 + 16));
  if ( (*(_BYTE *)(a2 + 55) & 0x10) != 0 )
    sub_354940(a1, *(_DWORD **)(a2 + 32));
  return sub_354940(a1, (_DWORD *)a2);
}


//======================================================================
// sub_35528A
// address: 0x0035528A   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall sub_35528A(_DWORD *result, int a2)
{
  int v2; // r4
  _DWORD *v3; // r5
  int i; // r7

  v2 = *(_DWORD *)(a2 + 4);
  v3 = result;
  if ( v2 != 0 )
  {
    for ( i = 0; i < *(__int16 *)(a2 + 38); ++i )
    {
      sub_354940(v3, *(_DWORD **)v2);
      sub_35519A(v3, *(_DWORD *)(v2 + 4));
      sub_354940(v3, *(_DWORD **)(v2 + 8));
      sub_354940(v3, *(_DWORD **)(v2 + 12));
      sub_354940(v3, *(_DWORD **)(v2 + 16));
      v2 += 24;
    }
    return sub_354940(v3, *(_DWORD **)(a2 + 4));
  }
  return result;
}


//======================================================================
// sub_3552D8
// address: 0x003552D8   size: 0x4A (74 bytes)
//======================================================================
_DWORD *__fastcall sub_3552D8(__int64 a1, int a2, int a3)
{
  _DWORD *v3; // r6
  int v6; // r3

  v3 = (_DWORD *)a1;
  LODWORD(a1) = HIDWORD(a1);
  if ( HIDWORD(a1) != 0 )
  {
    if ( a3 != 0 )
    {
      *(_DWORD *)(HIDWORD(a1) + 16) = a3;
      HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 4);
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a3 + 4) & 0x100 | HIDWORD(a1);
    }
    if ( a2 != 0 )
    {
      *(_DWORD *)(a1 + 12) = a2;
      v6 = *(_DWORD *)(a2 + 4) & 0x100;
      a2 = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(a1 + 4) = v6 | a2;
    }
    return (_DWORD *)sub_34E942(a1, a2);
  }
  else
  {
    sub_35519A(v3, a2);
    return sub_35519A(v3, a3);
  }
}


//======================================================================
// sub_355322
// address: 0x00355322   size: 0x54 (84 bytes)
//======================================================================
__int64 __fastcall sub_355322(__int64 a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r7
  _DWORD *v4; // r6
  _DWORD *v5; // r1
  __int64 v7; // [sp+0h] [bp-Ch]

  v7 = a1;
  v1 = *(_DWORD *)(a1 + 20);
  v2 = a1;
  v3 = *(_DWORD *)(a1 + 12) - 1;
  v4 = ***(_DWORD ****)a1;
  while ( v3 >= 0 )
  {
    if ( (*(_BYTE *)(v1 + 20) & 1) != 0 )
      sub_35519A(v4, *(_DWORD *)v1);
    if ( (*(_BYTE *)(v1 + 20) & 0x10) != 0 || (*(_BYTE *)(v1 + 20) & 0x20) != 0 )
    {
      HIDWORD(v7) = *(_DWORD *)(v1 + 12);
      sub_355322(HIDWORD(v7));
      sub_354940(v4, (_DWORD *)HIDWORD(v7));
    }
    --v3;
    v1 += 48;
  }
  v5 = *(_DWORD **)(v2 + 20);
  if ( v5 != (_DWORD *)(v2 + 24) )
    sub_354940(v4, v5);
  return v7;
}


//======================================================================
// sub_355378
// address: 0x00355378   size: 0x66 (102 bytes)
//======================================================================
_WORD *__fastcall sub_355378(int a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r6
  _WORD *result; // r0
  int v7; // r1
  int v8; // r2

  LODWORD(v3) = a1;
  if ( a2 == nullptr )
    return a3;
  result = a2;
  if ( a3 != nullptr )
  {
    if ( sub_35322C(a2, (int)a2, (int)a3) || sub_35322C(a3, v7, v8) )
    {
      sub_35519A((_DWORD *)v3, (int)a2);
      sub_35519A((_DWORD *)v3, (int)a3);
      return sub_351A12(v3, 132, (unsigned __int8 **)&off_454714, 0);
    }
    else
    {
      HIDWORD(v3) = sub_351A12(v3, 72, nullptr, 0);
      sub_3552D8(v3, (int)a2, (int)a3);
      return (_WORD *)HIDWORD(v3);
    }
  }
  return result;
}


//======================================================================
// sub_3553E4
// address: 0x003553E4   size: 0x3A (58 bytes)
//======================================================================
_DWORD *__fastcall sub_3553E4(_DWORD *result, int a2)
{
  _DWORD *v2; // r5
  int v4; // r6

  v2 = result;
  while ( a2 != 0 )
  {
    v4 = *(_DWORD *)(a2 + 32);
    sub_35519A(v2, *(_DWORD *)(a2 + 20));
    sub_3551E8(v2, *(_DWORD **)(a2 + 24));
    sub_355184(v2, *(_DWORD **)(a2 + 8));
    sub_354DDC(v2, *(_DWORD **)(a2 + 28));
    result = sub_354940(v2, (_DWORD *)a2);
    a2 = v4;
  }
  return result;
}


//======================================================================
// sub_35541E
// address: 0x0035541E   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_35541E(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r5

  v2 = result;
  if ( a2 != nullptr )
  {
    sub_3553E4(result, a2[7]);
    sub_354940(v2, (_DWORD *)*a2);
    sub_354940(v2, (_DWORD *)a2[1]);
    sub_35519A(v2, a2[3]);
    sub_354DDC(v2, (_DWORD *)a2[4]);
    return sub_354940(v2, a2);
  }
  return result;
}


//======================================================================
// sub_355456
// address: 0x00355456   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall sub_355456(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r6
  _DWORD **v4; // r4
  int i; // r7

  v2 = result;
  if ( a2 != nullptr )
  {
    v4 = (_DWORD **)a2;
    for ( i = 0; ; ++i )
    {
      v4 += 4;
      if ( i >= *a2 )
        break;
      sub_3551E8(v2, *(v4 - 1));
      sub_355184(v2, *v4);
      sub_354940(v2, *(v4 - 2));
    }
    return sub_354940(v2, a2);
  }
  return result;
}


//======================================================================
// sub_355496
// address: 0x00355496   size: 0xB6 (182 bytes)
//======================================================================
_DWORD *__fastcall sub_355496(_DWORD **a1, int a2, int *a3)
{
  _DWORD *result; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r1

  result = (_DWORD *)(a2 - 163);
  switch ( a2 )
  {
    case 163:
    case 195:
    case 196:
    case 207:
      result = sub_355184(*a1, (_DWORD *)*a3);
      break;
    case 174:
    case 175:
    case 202:
    case 204:
    case 216:
    case 227:
    case 229:
    case 238:
    case 243:
      result = sub_35519A(*a1, *a3);
      break;
    case 179:
    case 188:
    case 200:
    case 203:
    case 205:
    case 208:
    case 209:
    case 210:
    case 220:
    case 221:
    case 228:
      result = sub_3551E8(*a1, (_DWORD *)*a3);
      break;
    case 194:
    case 201:
    case 212:
    case 213:
      result = sub_3550CC(*a1, (_DWORD *)*a3);
      break;
    case 197:
    case 252:
      result = sub_355456(*a1, (_DWORD *)*a3);
      break;
    case 217:
    case 219:
    case 223:
      v5 = *a1;
      v6 = (_DWORD *)*a3;
      goto LABEL_10;
    case 234:
    case 239:
      result = sub_3553E4(*a1, *a3);
      break;
    case 236:
      v5 = *a1;
      v6 = (_DWORD *)a3[1];
LABEL_10:
      result = sub_354DDC(v5, v6);
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_35554C
// address: 0x0035554C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_35554C(int a1)
{
  int v2; // r2
  int v3; // r5

  if ( *(int *)a1 < 0 )
    return 0;
  v2 = a1 + 16 * *(_DWORD *)a1;
  v3 = *(unsigned __int8 *)(v2 + 14);
  sub_355496(*(_DWORD ***)(a1 + 8), v3, (int *)(v2 + 16));
  --*(_DWORD *)a1;
  return v3;
}


//======================================================================
// sub_355574
// address: 0x00355574   size: 0x94 (148 bytes)
//======================================================================
int __fastcall sub_355574(int a1)
{
  int v2; // r1
  _DWORD *v3; // r5
  int v4; // r1
  int *v5; // r5
  int **i; // r5
  _DWORD *j; // r5
  __int64 v8; // r0
  int result; // r0
  __int16 v10; // r2
  _DWORD v11[2]; // [sp+0h] [bp-10h] BYREF
  _DWORD *v12; // [sp+8h] [bp-8h]
  int v13; // [sp+Ch] [bp-4h]
  _DWORD v14[2]; // [sp+10h] [bp+0h] BYREF
  int *v15; // [sp+18h] [bp+8h]
  int v16; // [sp+1Ch] [bp+Ch]

  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD **)(a1 + 16);
  v11[0] = *(_DWORD *)(a1 + 8);
  v11[1] = v2;
  v12 = v3;
  v13 = *(_DWORD *)(a1 + 20);
  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(int **)(a1 + 48);
  v14[0] = *(_DWORD *)(a1 + 40);
  v14[1] = v4;
  v15 = v5;
  v16 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  sub_351F60((_DWORD *)(a1 + 24));
  for ( i = (int **)v15; i != nullptr; i = (int **)*i )
    sub_35541E(nullptr, i[2]);
  sub_351F60(v14);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  for ( j = v12; j != nullptr; j = (_DWORD *)*j )
  {
    HIDWORD(v8) = j[2];
    LODWORD(v8) = 0;
    sub_354F8A(v8);
  }
  sub_351F60(v11);
  result = sub_351F60((_DWORD *)(a1 + 56));
  *(_DWORD *)(a1 + 72) = 0;
  v10 = *(_WORD *)(a1 + 78);
  if ( (v10 & 1) != 0 )
  {
    result = *(_DWORD *)(a1 + 4) + 1;
    *(_DWORD *)(a1 + 4) = result;
    *(_WORD *)(a1 + 78) = v10 & 0xFFFE;
  }
  return result;
}


//======================================================================
// sub_355608
// address: 0x00355608   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_355608(int a1, int a2)
{
  int result; // r0

  result = sub_355574(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * a2 + 12));
  if ( a2 != 1 )
    return sub_355574(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 28));
  return result;
}


//======================================================================
// sub_355628
// address: 0x00355628   size: 0x20 (32 bytes)
//======================================================================
void *__fastcall sub_355628(_DWORD *a1, _DWORD **a2)
{
  sub_354940(a1, a2[7]);
  sub_354940(a1, a2[9]);
  return j_memset(a2, 0, 0x30u);
}


//======================================================================
// sub_355648
// address: 0x00355648   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_355648(_DWORD *a1, int *a2, _QWORD *a3)
{
  int v5; // r4

  if ( *a2 == 0 && a2[1] != 0 && a2[4] > a2[3] )
    *a2 = sub_34CA4C(a2[8]);
  *a3 = a2[4] + *((_QWORD *)a2 + 3);
  sub_354940(a1, (_DWORD *)a2[1]);
  v5 = *a2;
  j_memset(a2, 0, 0x28u);
  return v5;
}


//======================================================================
// sub_3556B4
// address: 0x003556B4   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_3556B4(_DWORD **a1, int a2)
{
  void (__fastcall *v4)(_DWORD *); // r7
  int v5; // r3
  _DWORD v7[19]; // [sp+0h] [bp-4Ch] BYREF

  if ( a2 == 0 )
    return 0;
  v4 = *(void (__fastcall **)(_DWORD *))(a2 + 20);
  if ( v4 == nullptr )
    return 0;
  j_memset(v7, 0, 0x48u);
  LOWORD(v7[9]) = 1;
  v5 = (int)*a1;
  v7[12] = a1;
  v7[2] = v5;
  v7[0] = a2;
  v4(v7);
  sub_354940(*a1, a1[9]);
  j_memcpy(a1, &v7[2], 0x28u);
  return v7[16];
}


//======================================================================
// sub_355700
// address: 0x00355700   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_355700(_DWORD *result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r1

  v1 = result;
  if ( (result[7] & 0x2460) != 0 )
    result = (_DWORD *)sub_35572C();
  v2 = (_DWORD *)v1[9];
  if ( v2 != nullptr )
  {
    result = sub_354940((_DWORD *)*v1, v2);
    v1[9] = 0;
  }
  v1[1] = 0;
  return result;
}


//======================================================================
// sub_35572C
// address: 0x0035572C   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall sub_35572C(_DWORD *result, int a2)
{
  int v2; // r3
  _DWORD *v3; // r4

  v2 = *((unsigned __int16 *)result + 14);
  v3 = result;
  if ( (v2 & 0x2000) != 0 )
  {
    sub_3556B4((_DWORD **)result, result[4]);
    return sub_355700(v3);
  }
  else if ( (v2 & 0x400) != 0 )
  {
    result = (_DWORD *)((int (__fastcall *)(_DWORD, int, int))result[8])(result[1], a2, v2 << 21);
    v3[8] = 0;
  }
  else if ( (v2 & 0x20) != 0 )
  {
    return sub_3549AE((_DWORD *)result[4]);
  }
  else if ( (v2 & 0x40) != 0 )
  {
    return sub_3549D4(result);
  }
  return result;
}


//======================================================================
// sub_35576C
// address: 0x0035576C   size: 0x34 (52 bytes)
//======================================================================
void *__fastcall sub_35576C(_WORD *a1, void *a2, __int16 a3)
{
  void *result; // r0

  if ( (a1[14] & 0x2460) != 0 )
    sub_35572C(a1, (int)a2);
  result = j_memcpy(a1, a2, 0x24u);
  *((_DWORD *)a1 + 8) = 0;
  if ( (*((_WORD *)a2 + 14) & 0x800) == 0 )
    a1[14] = a3 | a1[14] & 0xE3FF;
  return result;
}


//======================================================================
// sub_35581A
// address: 0x0035581A   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_35581A(int a1)
{
  int v2; // r0
  int v3; // r0

  v2 = sqlite3_context_db_handle(a1);
  v3 = sqlite3_total_changes(v2);
  return sqlite3_result_int(a1, v3);
}


//======================================================================
// sub_355830
// address: 0x00355830   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_355830(int a1)
{
  int v2; // r0
  int v3; // r0

  v2 = sqlite3_context_db_handle(a1);
  v3 = sqlite3_changes(v2);
  return sqlite3_result_int(a1, v3);
}


//======================================================================
// sub_35585E
// address: 0x0035585E   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall sub_35585E(int a1)
{
  int v2; // r0
  __int64 insert_rowid; // r0

  v2 = sqlite3_context_db_handle(a1);
  insert_rowid = sqlite3_last_insert_rowid(v2);
  return sqlite3_result_int64(a1, SHIDWORD(insert_rowid), insert_rowid, SHIDWORD(insert_rowid));
}


//======================================================================
// sub_355876
// address: 0x00355876   size: 0x20 (32 bytes)
//======================================================================
void *__fastcall sub_355876(_DWORD *a1, int a2)
{
  void *result; // r0

  sub_355700(a1);
  result = j_memcpy(a1, (const void *)a2, 0x28u);
  *(_WORD *)(a2 + 28) = 1;
  *(_DWORD *)(a2 + 32) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  return result;
}


//======================================================================
// sub_355896
// address: 0x00355896   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_355896(int a1, _DWORD *a2)
{
  int i; // r4
  int v5; // r1

  sqlite3_mutex_enter(*(_DWORD *)(*a2 + 12));
  for ( i = 0; i < *(__int16 *)(a1 + 68); ++i )
  {
    v5 = 40 * i;
    sub_355876((_DWORD *)(a2[15] + v5), *(_DWORD *)(a1 + 60) + v5);
  }
  sqlite3_mutex_leave(*(_DWORD *)(*a2 + 12));
  return 0;
}


//======================================================================
// sub_355930
// address: 0x00355930   size: 0x6A (106 bytes)
//======================================================================
__int64 __fastcall sub_355930(__int64 a1)
{
  unsigned int v1; // r4
  _DWORD *v2; // r5
  _BYTE *v3; // r6
  unsigned int v4; // r6
  _DWORD *v5; // r1
  __int64 v7; // [sp+0h] [bp-Ch]

  v7 = a1;
  v1 = a1;
  if ( (_DWORD)a1 != 0 && HIDWORD(a1) != 0 )
  {
    v2 = *(_DWORD **)a1;
    v3 = (_BYTE *)(*(_DWORD *)a1 + 64);
    LODWORD(v7) = (unsigned __int8)*v3;
    HIDWORD(a1) *= 40;
    if ( *(_DWORD *)(*(_DWORD *)a1 + 512) != 0 )
    {
      v4 = a1 + HIDWORD(a1);
      while ( v1 < v4 )
      {
        sub_354940(v2, *(_DWORD **)(v1 + 36));
        v1 += 40;
      }
    }
    else
    {
      HIDWORD(v7) = a1 + HIDWORD(a1);
      while ( v1 < HIDWORD(v7) )
      {
        if ( (*(_WORD *)(v1 + 28) & 0x2460) != 0 )
        {
          sub_355700((_DWORD *)v1);
        }
        else
        {
          v5 = *(_DWORD **)(v1 + 36);
          if ( v5 != nullptr )
          {
            sub_354940(v2, v5);
            *(_DWORD *)(v1 + 36) = 0;
          }
        }
        *(_WORD *)(v1 + 28) = 128;
        v1 += 40;
      }
      *v3 = v7;
    }
  }
  return v7;
}


//======================================================================
// sub_3559A0
// address: 0x003559A0   size: 0x4A (74 bytes)
//======================================================================
_WORD *__fastcall sub_3559A0(int a1, int a2)
{
  _WORD *v2; // r7
  _DWORD *v4; // r5
  __int64 v5; // r0
  int v7; // r6
  _WORD *result; // r0

  v2 = (_WORD *)(a1 + 84);
  v4 = *(_DWORD **)a1;
  HIDWORD(v5) = 5 * *(unsigned __int16 *)(a1 + 84);
  LODWORD(v5) = *(_DWORD *)(a1 + 16);
  sub_355930(v5);
  sub_354940(v4, *(_DWORD **)(a1 + 16));
  *v2 = a2;
  v7 = 5 * a2;
  result = sub_351894((int)v4, 40 * v7);
  *(_DWORD *)(a1 + 16) = result;
  if ( result != nullptr )
  {
    while ( v7 > 0 )
    {
      result[14] = 1;
      --v7;
      *(_DWORD *)result = *(_DWORD *)a1;
      result += 20;
    }
  }
  return result;
}


//======================================================================
// sub_3559EA
// address: 0x003559EA   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3559EA(_DWORD *result)
{
  _DWORD *v1; // r4

  v1 = result;
  if ( result != nullptr )
  {
    sub_355700(result);
    return sub_354940((_DWORD *)*v1, v1);
  }
  return result;
}


//======================================================================
// sub_3559FE
// address: 0x003559FE   size: 0x86 (134 bytes)
//======================================================================
_DWORD *__fastcall sub_3559FE(_DWORD *result, int a2, int a3)
{
  _DWORD *v3; // r5

  v3 = result;
  if ( a3 != 0 )
  {
    result = (_DWORD *)(a2 + 15);
    switch ( a2 )
    {
      case -15:
      case -13:
      case -12:
      case -1:
        goto LABEL_12;
      case -11:
        if ( v3[128] == 0 )
          return (_DWORD *)sqlite3_free(a3);
        return result;
      case -10:
        if ( v3[128] == 0 )
          return sub_354E22((_DWORD *)a3);
        return result;
      case -8:
        if ( v3[128] != 0 )
        {
          sub_354940(v3, *(_DWORD **)(a3 + 36));
LABEL_12:
          result = sub_354940(v3, (_DWORD *)a3);
        }
        else
        {
          result = sub_3559EA((_DWORD *)a3);
        }
        break;
      case -6:
        if ( v3[128] == 0 )
          return sub_354E0C((_DWORD *)a3);
        return result;
      case -5:
        if ( (*(_WORD *)(a3 + 2) & 0x10) != 0 )
          goto LABEL_12;
        return result;
      default:
        return result;
    }
  }
  return result;
}


//======================================================================
// sub_355A84
// address: 0x00355A84   size: 0x3A (58 bytes)
//======================================================================
_DWORD *__fastcall sub_355A84(_DWORD *result, int a2)
{
  int v2; // r3
  _DWORD *v3; // r4
  _BYTE *v5; // r5

  v2 = result[1];
  v3 = result;
  if ( v2 != 0 )
  {
    v5 = (_BYTE *)(v2 + 20 * a2);
    sub_3559FE((_DWORD *)*result, (char)v5[1], *((_DWORD *)v5 + 4));
    result = j_memset(v5, 0, 0x14u);
    *v5 = -101;
    if ( a2 == v3[8] - 1 )
      v3[8] = a2;
  }
  return result;
}


//======================================================================
// sub_355ABE
// address: 0x00355ABE   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_355ABE(_DWORD *a1, int a2)
{
  int v2; // r4
  int v3; // r2

  v2 = a1[8];
  v3 = 0;
  if ( v2 - 1 > *(_DWORD *)(a1[6] + 92) && *(unsigned __int8 *)(a1[1] + 20 * v2 - 20) == a2 )
  {
    sub_355A84(a1, v2 - 1);
    return 1;
  }
  return v3;
}


//======================================================================
// sub_355AEA
// address: 0x00355AEA   size: 0x92 (146 bytes)
//======================================================================
_DWORD *__fastcall sub_355AEA(int *a1, int a2, _DWORD *a3, signed int a4)
{
  int v6; // r3
  _DWORD *result; // r0
  int v9; // r4

  v6 = a1[1];
  result = (_DWORD *)*a1;
  if ( v6 != 0 && *((_BYTE *)result + 64) == 0 )
  {
    if ( a2 < 0 )
      a2 = a1[8] - 1;
    v9 = v6 + 20 * a2;
    result = sub_3559FE(result, *(char *)(v9 + 1), *(_DWORD *)(v9 + 16));
    *(_DWORD *)(v9 + 16) = 0;
    if ( a4 == -14 )
      goto LABEL_14;
    if ( a3 == nullptr )
    {
      *(_BYTE *)(v9 + 1) = 0;
      return result;
    }
    if ( a4 == -6 )
      goto LABEL_14;
    if ( a4 == -10 )
    {
      *(_DWORD *)(v9 + 16) = a3;
      *(_BYTE *)(v9 + 1) = -10;
      ++a3[3];
      return result;
    }
    if ( a4 < 0 )
    {
LABEL_14:
      *(_DWORD *)(v9 + 16) = a3;
      *(_BYTE *)(v9 + 1) = a4;
    }
    else
    {
      if ( a4 == 0 )
        a4 = sub_34CF50((unsigned int)a3);
      result = sub_351BF2(*a1, a3, a4);
      *(_DWORD *)(v9 + 16) = result;
      *(_BYTE *)(v9 + 1) = -1;
    }
  }
  else if ( a4 != -10 )
  {
    return sub_3559FE(result, a4, (int)a3);
  }
  return result;
}


//======================================================================
// sub_355B7C
// address: 0x00355B7C   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_355B7C(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v6; // r4
  _DWORD *v7; // r7

  if ( a2 != nullptr )
  {
    v6 = a2;
    v7 = &a2[5 * a3];
    while ( v6 < v7 )
    {
      sub_3559FE(a1, *((char *)v6 + 1), v6[4]);
      v6 += 5;
    }
  }
  return sub_354940(a1, a2);
}


//======================================================================
// sub_355BAA
// address: 0x00355BAA   size: 0x8E (142 bytes)
//======================================================================
_DWORD *__fastcall sub_355BAA(unsigned int a1, unsigned int a2)
{
  unsigned __int64 v2; // r4
  __int64 v3; // r0
  __int64 v4; // r0
  _DWORD *i; // r6
  _DWORD *v6; // r7
  int v7; // r6
  int v8; // r7

  v2 = __PAIR64__(a1, a2);
  HIDWORD(v3) = *(__int16 *)(a2 + 68);
  LODWORD(v3) = *(_DWORD *)(v2 + 60);
  sub_355930(v3);
  LODWORD(v4) = *(_DWORD *)(v2 + 16);
  HIDWORD(v4) = 5 * *(unsigned __int16 *)(v2 + 84);
  sub_355930(v4);
  for ( i = *(_DWORD **)(v2 + 192); i != nullptr; i = v6 )
  {
    v6 = (_DWORD *)i[6];
    sub_355B7C((_DWORD *)HIDWORD(v2), (_DWORD *)*i, i[1]);
    sub_354940((_DWORD *)HIDWORD(v2), i);
  }
  v7 = *(__int16 *)(v2 + 70) - 1;
  v8 = 4 * v7;
  while ( v7 >= 0 )
  {
    --v7;
    sub_354940((_DWORD *)HIDWORD(v2), *(_DWORD **)(*(_DWORD *)(v2 + 64) + v8));
    v8 -= 4;
  }
  sub_355B7C((_DWORD *)HIDWORD(v2), *(_DWORD **)(v2 + 4), *(_DWORD *)(v2 + 32));
  sub_354940((_DWORD *)HIDWORD(v2), *(_DWORD **)(v2 + 16));
  sub_354940((_DWORD *)HIDWORD(v2), *(_DWORD **)(v2 + 168));
  return sub_354940((_DWORD *)HIDWORD(v2), *(_DWORD **)(v2 + 172));
}


//======================================================================
// sub_355C38
// address: 0x00355C38   size: 0x3A (58 bytes)
//======================================================================
unsigned int *__fastcall sub_355C38(unsigned int *result)
{
  unsigned int *v1; // r4
  _DWORD *v2; // r5
  unsigned int v3; // r2
  unsigned int v4; // r3
  unsigned int v5; // r3

  v1 = result;
  if ( result != nullptr )
  {
    v2 = (_DWORD *)*result;
    sub_355BAA(*result, (unsigned int)result);
    v3 = v1[12];
    v4 = v1[13];
    if ( v3 != 0 )
      *(_DWORD *)(v3 + 52) = v4;
    else
      v2[1] = v4;
    v5 = v1[13];
    if ( v5 != 0 )
      *(_DWORD *)(v5 + 48) = v1[12];
    v1[10] = -1241070648;
    *v1 = 0;
    return sub_354940(v2, v1);
  }
  return result;
}


//======================================================================
// sub_355C78
// address: 0x00355C78   size: 0x126 (294 bytes)
//======================================================================
int __fastcall sub_355C78(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  unsigned int v3; // r5
  unsigned int v4; // r6
  _DWORD *v5; // r4
  _DWORD *v6; // r0
  unsigned int v8; // r1
  unsigned int v9; // r6
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  int v12; // r0
  int v13; // r6
  int v14; // r7
  int v15; // r1

  v2 = a1;
  v3 = a2 - 1;
  if ( a1 == nullptr )
    return 0;
  while ( 1 )
  {
    if ( *v2 <= 0xFA0u )
    {
      *((_BYTE *)v2 + (v3 >> 3) + 12) |= 1 << (v3 & 7);
      return 0;
    }
    v4 = v2[2];
    if ( v4 == 0 )
      break;
    v5 = &v2[v3 / v4];
    v3 %= v4;
    if ( v5[3] == 0 )
    {
      v6 = sub_351CDC(v4);
      v5[3] = v6;
      if ( v6 == nullptr )
        return 7;
    }
    v2 = (_DWORD *)v5[3];
  }
  v8 = v3 % 0x7D;
  v9 = v3 + 1;
  if ( v2[v3 % 0x7D + 3] != 0 )
  {
    while ( v2[v8 + 3] != v9 )
    {
      v8 = v8 != 124 ? v8 + 1 : 0;
      if ( v2[v8 + 3] == 0 )
        goto LABEL_16;
    }
    return 0;
  }
  if ( v2[1] <= 0x7Bu )
  {
LABEL_23:
    ++v2[1];
    v2[v8 + 3] = v9;
    return 0;
  }
LABEL_16:
  if ( v2[1] <= 0x3Du )
    goto LABEL_23;
  v10 = (_DWORD *)sub_3516AC(0, 500);
  v11 = v10;
  if ( v10 == nullptr )
    return 7;
  j_memcpy(v10, v2 + 3, 0x1F4u);
  j_memset(v2 + 3, 0, 0x1F4u);
  v2[2] = (*v2 + 124) / 0x7Du;
  v12 = sub_355C78(v2, v9);
  v13 = 0;
  v14 = v12;
  do
  {
    v15 = v11[v13];
    if ( v15 != 0 )
      v14 |= sub_355C78(v2, v15);
    ++v13;
  }
  while ( v13 != 125 );
  sub_354940(nullptr, v11);
  return v14;
}


//======================================================================
// sub_355D9E
// address: 0x00355D9E   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_355D9E(int a1, unsigned int a2)
{
  int v2; // r4
  int i; // r5
  int v6; // r3

  v2 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 96); ++i )
  {
    v6 = *(_DWORD *)(a1 + 92) + 48 * i;
    if ( a2 <= *(_DWORD *)(v6 + 20) )
      v2 |= sub_355C78(*(_DWORD **)(v6 + 16), a2);
  }
  return v2;
}


//======================================================================
// sub_355DCE
// address: 0x00355DCE   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_355DCE(int *a1, void **a2)
{
  int v2; // r6
  int result; // r0

  v2 = *a1;
  sub_354940((_DWORD *)*a1, (_DWORD *)a1[11]);
  a1[11] = (int)sub_351BC8(v2, *a2);
  result = sqlite3_free(*a2);
  *a2 = nullptr;
  return result;
}


//======================================================================
// sub_355DF4
// address: 0x00355DF4   size: 0x72 (114 bytes)
//======================================================================
int *__fastcall sub_355DF4(_DWORD *a1, _DWORD *a2)
{
  int v5; // r0
  int *v6; // r4
  int v7; // r0
  int v8; // r7
  int i; // [sp+8h] [bp-Ch]
  void **v10; // [sp+Ch] [bp-8h]

  if ( a2 == nullptr )
    return nullptr;
  v5 = sub_3516AC((int)a1, 8);
  v6 = (int *)v5;
  if ( v5 == 0 )
    return nullptr;
  *(_DWORD *)(v5 + 4) = a2[1];
  v7 = sub_3516AC((int)a1, 8 * a2[1]);
  *v6 = v7;
  if ( v7 == 0 )
  {
    sub_354940(a1, v6);
    return nullptr;
  }
  for ( i = 0; i < a2[1]; ++i )
  {
    v10 = (void **)(*v6 + 8 * i);
    v8 = *a2 + 8 * i;
    *v10 = sub_351BC8((int)a1, *(void **)v8);
    v10[1] = *(void **)(v8 + 4);
  }
  return v6;
}


//======================================================================
// sub_355E66
// address: 0x00355E66   size: 0x74 (116 bytes)
//======================================================================
__int64 __fastcall sub_355E66(__int64 a1)
{
  int v1; // r5
  _DWORD *v2; // r4
  int i; // r7
  int v4; // r2
  int v5; // r3
  int v6; // r6
  _DWORD *v7; // r0
  int v8; // r2
  int v9; // r3
  _DWORD *v10; // r1
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  v1 = 2;
  v2 = (_DWORD *)a1;
  for ( i = 2; ; ++i )
  {
    v4 = v2[5];
    v5 = v2[4];
    if ( i >= v4 )
      break;
    v6 = v5 + 16 * i;
    HIDWORD(v12) = *(_DWORD *)(v6 + 4);
    if ( HIDWORD(v12) != 0 )
    {
      if ( v1 < i )
      {
        v7 = (_DWORD *)(v5 + 16 * v1);
        v8 = *(_DWORD *)(v6 + 4);
        v9 = *(_DWORD *)(v6 + 8);
        *v7 = *(_DWORD *)v6;
        v7[1] = v8;
        v7[2] = v9;
        v7[3] = *(_DWORD *)(v6 + 12);
      }
      ++v1;
    }
    else
    {
      sub_354940(v2, *(_DWORD **)v6);
      *(_DWORD *)v6 = 0;
    }
  }
  j_memset((void *)(v5 + 16 * v1), 0, 16 * (v4 - v1));
  v2[5] = v1;
  if ( v1 == 2 )
  {
    v10 = (_DWORD *)v2[4];
    if ( v10 != v2 + 112 )
    {
      j_memcpy(v2 + 112, v10, 0x20u);
      sub_354940(v2, (_DWORD *)v2[4]);
      v2[4] = v2 + 112;
    }
  }
  return v12;
}


//======================================================================
// sub_355EDA
// address: 0x00355EDA   size: 0x9E (158 bytes)
//======================================================================
int **__fastcall sub_355EDA(int a1, int a2, unsigned __int8 *a3, int a4)
{
  unsigned int v6; // r7
  int **v7; // r5
  char *v8; // r0
  char *v9; // r4
  void *v10; // r0
  int *v11; // r1

  if ( a3 == nullptr )
  {
    v7 = *(int ***)(a1 + 8);
LABEL_9:
    if ( v7 == nullptr )
      return v7;
LABEL_10:
    v7 += 5 * a2 - 5;
    return v7;
  }
  v6 = sub_34CF50((unsigned int)a3);
  v7 = sub_34DA7E((_DWORD *)(a1 + 420), a3, v6);
  if ( v7 != nullptr )
    goto LABEL_10;
  if ( a4 != 0 )
  {
    v8 = (char *)sub_351894(a1, v6 + 61);
    v9 = v8;
    if ( v8 != nullptr )
    {
      v8[4] = 1;
      v8[24] = 2;
      v10 = v8 + 60;
      *(_DWORD *)v9 = v10;
      *((_DWORD *)v9 + 5) = v10;
      *((_DWORD *)v9 + 10) = v10;
      v9[44] = 3;
      j_memcpy(v10, a3, v6);
      *(_BYTE *)(*(_DWORD *)v9 + v6) = 0;
      v11 = sub_35271C((unsigned int *)(a1 + 420), *(unsigned __int8 **)v9, v6, (int *)v9);
      if ( v11 != nullptr )
      {
        *(_BYTE *)(a1 + 64) = 1;
        sub_354940((_DWORD *)a1, v11);
        return v7;
      }
      v7 = (int **)v9;
      goto LABEL_9;
    }
  }
  return v7;
}


//======================================================================
// sub_355F78
// address: 0x00355F78   size: 0xD6 (214 bytes)
//======================================================================
_DWORD *__fastcall sub_355F78(_DWORD *a1, int a2, int a3, unsigned __int8 *a4)
{
  int v7; // r3
  int *v8; // r0
  int v9; // r7
  _DWORD *v10; // r0
  _DWORD *v11; // r6
  _BYTE *i; // r3
  int v13; // r7
  unsigned int v14; // r0
  _DWORD *v15; // r0
  _DWORD *v16; // r5
  int v17; // r1
  int v18; // r6
  int v19; // r1
  int v20; // r6
  int v21; // r1
  int v22; // r6
  const void *v23; // r4
  unsigned int v24; // r0
  int v25; // r6
  __int16 v26; // r3
  int *v27; // [sp+8h] [bp-14h]
  int v29; // [sp+10h] [bp-Ch] BYREF
  int v30; // [sp+14h] [bp-8h] BYREF

  v29 = 0;
  v30 = 0;
  if ( a4 == nullptr )
    return (_DWORD *)a2;
  if ( *a4 != 154 )
    return (_DWORD *)a2;
  v7 = *((_DWORD *)a4 + 11);
  if ( v7 == 0 )
    return (_DWORD *)a2;
  if ( (*(_BYTE *)(v7 + 44) & 0x10) == 0 )
    return (_DWORD *)a2;
  v8 = (int *)sub_353624((int)a1, *(_DWORD **)(v7 + 60))[2];
  v9 = *v8;
  v27 = v8;
  if ( *(_DWORD *)(*v8 + 72) == 0 )
    return (_DWORD *)a2;
  v10 = sub_351BC8((int)a1, *(void **)(a2 + 24));
  v11 = v10;
  if ( v10 == nullptr )
    return (_DWORD *)a2;
  for ( i = v10; *i != 0; ++i )
    *i = byte_44A964[(unsigned __int8)*i];
  v13 = (*(int (__fastcall **)(int *, int, _DWORD *, int *, int *))(v9 + 72))(v27, a3, v10, &v29, &v30);
  sub_354940(a1, v11);
  if ( v13 == 0 )
    return (_DWORD *)a2;
  v14 = sub_34CF50(*(_DWORD *)(a2 + 24));
  v15 = sub_351894((int)a1, v14 + 37);
  v16 = v15;
  if ( v15 == nullptr )
    return (_DWORD *)a2;
  v17 = *(_DWORD *)(a2 + 4);
  v18 = *(_DWORD *)(a2 + 8);
  *v15 = *(_DWORD *)a2;
  v15[1] = v17;
  v15[2] = v18;
  v19 = *(_DWORD *)(a2 + 16);
  v20 = *(_DWORD *)(a2 + 20);
  v15[3] = *(_DWORD *)(a2 + 12);
  v15[4] = v19;
  v15[5] = v20;
  v21 = *(_DWORD *)(a2 + 28);
  v22 = *(_DWORD *)(a2 + 32);
  v15[6] = *(_DWORD *)(a2 + 24);
  v15[7] = v21;
  v15[8] = v22;
  v15[6] = v15 + 9;
  v23 = *(const void **)(a2 + 24);
  v24 = sub_34CF50((unsigned int)v23);
  j_memcpy(v16 + 9, v23, v24 + 1);
  v25 = v30;
  v16[3] = v29;
  v26 = *((_WORD *)v16 + 1);
  v16[1] = v25;
  *((_WORD *)v16 + 1) = v26 | 0x10;
  return v16;
}


//======================================================================
// sub_356054
// address: 0x00356054   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_356054(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  void *v6; // r5
  _DWORD *v7; // r1
  unsigned int v8; // [sp+4h] [bp-8h]

  result = 0;
  if ( *(unsigned __int16 *)(a2 + 42) < a3 )
  {
    v8 = (a3 + 7) & 0xFFFFFFF8;
    v6 = (void *)sub_3516AC((int)a1, 4 * v8);
    result = 7;
    if ( v6 != nullptr )
    {
      j_memcpy(v6, *(const void **)(a2 + 44), 4 * *(unsigned __int16 *)(a2 + 42));
      v7 = *(_DWORD **)(a2 + 44);
      if ( v7 != (_DWORD *)(a2 + 52) )
        sub_354940(a1, v7);
      *(_DWORD *)(a2 + 44) = v6;
      *(_WORD *)(a2 + 42) = v8;
      return 0;
    }
  }
  return result;
}


//======================================================================
// sub_3560A0
// address: 0x003560A0   size: 0x17A (378 bytes)
//======================================================================
int __fastcall sub_3560A0(int *a1, int a2)
{
  int v2; // r3
  _WORD *v3; // r0
  int v5; // r4
  int v6; // r5
  int v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r12
  int result; // r0
  unsigned int v13; // r2
  unsigned int v14; // r3
  int v15; // r5
  int v16; // r0
  int v17; // r2
  int v18; // r3
  int v19; // [sp+10h] [bp-14h]
  _DWORD *v20; // [sp+14h] [bp-10h]
  int *v21; // [sp+1Ch] [bp-8h]

  v2 = *a1;
  v3 = (_WORD *)a1[4];
  v20 = **(_DWORD ***)v2;
  if ( v3 != nullptr )
  {
    sub_34F624(v3, *(__int16 *)(a2 + 22), *(_DWORD *)a2, *(_DWORD *)(a2 + 4), *(_WORD *)(a2 + 20), *(_WORD *)(a2 + 22));
  }
  else
  {
    v21 = (int *)(v2 + 16);
    v5 = *(_DWORD *)(v2 + 16);
    while ( v5 != 0 )
    {
      if ( *(unsigned __int16 *)(v5 + 16) == *(unsigned __int16 *)(a2 + 16) )
      {
        v7 = *(_DWORD *)a2;
        v8 = *(_DWORD *)(a2 + 4);
        v9 = *(_DWORD *)v5 & *(_DWORD *)a2;
        v10 = *(_DWORD *)(v5 + 4) & v8;
        if ( v9 == *(_DWORD *)v5 && v10 == *(_DWORD *)(v5 + 4) && *(__int16 *)(v5 + 18) <= *(__int16 *)(a2 + 18) )
        {
          v19 = *(__int16 *)(v5 + 20);
          v11 = *(__int16 *)(a2 + 20);
          if ( v19 <= v11 && *(__int16 *)(v5 + 22) <= *(__int16 *)(a2 + 22) )
          {
            if ( v9 != v7 )
              return 0;
            if ( v10 != v8 )
              return 0;
            v13 = *(unsigned __int16 *)(v5 + 40);
            v14 = *(unsigned __int16 *)(a2 + 40);
            if ( v13 >= v14
              || (*(_DWORD *)(a2 + 36) & *(_DWORD *)(v5 + 36) & 0x200) == 0
              || *(_DWORD *)(v5 + 28) != *(_DWORD *)(a2 + 28) && (int)(v13 + v11) > (int)(v19 + v14) )
            {
              return 0;
            }
LABEL_24:
            v15 = *(_DWORD *)(v5 + 48);
            goto LABEL_27;
          }
        }
        if ( v9 == v7
          && v10 == v8
          && *(__int16 *)(v5 + 20) >= *(__int16 *)(a2 + 20)
          && *(__int16 *)(v5 + 22) >= *(__int16 *)(a2 + 22) )
        {
          goto LABEL_24;
        }
      }
      v6 = v5;
      v5 = *(_DWORD *)(v5 + 48);
      v21 = (int *)(v6 + 48);
    }
    v16 = sub_3516AC((int)v20, 72);
    v5 = v16;
    if ( v16 == 0 )
      return 7;
    v15 = 0;
    *(_DWORD *)(v16 + 44) = v16 + 52;
    *(_WORD *)(v16 + 40) = 0;
    *(_WORD *)(v16 + 42) = 4;
    *(_DWORD *)(v16 + 36) = 0;
LABEL_27:
    sub_354EBA(v20, v5);
    if ( sub_356054(v20, v5, *(unsigned __int16 *)(a2 + 40)) != 0 )
    {
      j_memset((void *)(v5 + 24), 0, 0xCu);
    }
    else
    {
      j_memcpy((void *)v5, (const void *)a2, 0x2Au);
      j_memcpy(*(void **)(v5 + 44), *(const void **)(a2 + 44), 4 * *(unsigned __int16 *)(v5 + 40));
      v17 = *(_DWORD *)(a2 + 36);
      if ( (v17 & 0x400) != 0 )
      {
        *(_BYTE *)(a2 + 28) = 0;
      }
      else if ( (v17 & 0x4000) != 0 )
      {
        *(_DWORD *)(a2 + 28) = *(_DWORD *)(a2 + 36) & 0x400;
      }
    }
    *(_DWORD *)(v5 + 48) = v15;
    *v21 = v5;
    if ( (*(_DWORD *)(v5 + 36) & 0x400) == 0 )
    {
      v18 = *(_DWORD *)(v5 + 28);
      if ( v18 != 0 )
      {
        result = *(_DWORD *)(v18 + 44);
        if ( result == 0 )
        {
          *(_DWORD *)(v5 + 28) = 0;
          return result;
        }
      }
    }
  }
  return 0;
}


//======================================================================
// sub_35621A
// address: 0x0035621A   size: 0x4E (78 bytes)
//======================================================================
unsigned int __fastcall sub_35621A(int a1)
{
  int v1; // r7
  unsigned int result; // r0
  int v4; // r6
  unsigned int v5; // r4
  __int16 v6; // r3
  int v7; // r0

  v1 = *(_DWORD *)a1;
  sub_355700((_DWORD *)a1);
  result = sub_3516AC(v1, 64);
  *(_DWORD *)(a1 + 36) = result;
  v4 = *(unsigned __int8 *)(v1 + 64);
  v5 = result;
  v6 = 1;
  if ( *(_BYTE *)(v1 + 64) == 0 )
  {
    v7 = sub_354918(v1, result);
    *(_DWORD *)(v5 + 16) = v5 + 32;
    result = (unsigned int)(v7 - 32) >> 4;
    *(_BYTE *)(v5 + 26) = 1;
    *(_DWORD *)v5 = v4;
    *(_DWORD *)(v5 + 4) = v1;
    *(_DWORD *)(v5 + 8) = v4;
    *(_DWORD *)(v5 + 12) = v4;
    *(_DWORD *)(v5 + 20) = v4;
    *(_WORD *)(v5 + 24) = result;
    *(_BYTE *)(v5 + 27) = v4;
    v6 = 32;
    *(_DWORD *)(a1 + 16) = v5;
  }
  *(_WORD *)(a1 + 28) = v6;
  return result;
}


//======================================================================
// sub_356268
// address: 0x00356268   size: 0xAC (172 bytes)
//======================================================================
int __fastcall sub_356268(int a1, _DWORD *a2, char a3)
{
  int v3; // r3
  _DWORD *v6; // r7
  _DWORD *v7; // r5
  void *v8; // r0
  int v9; // r7
  int v10; // r2
  int v11; // r5

  v3 = *(_DWORD *)(a1 + 16);
  if ( *(_DWORD *)(a1 + 12) >= v3 )
  {
    v6 = *(_DWORD **)(a1 + 20);
    v7 = ***(_DWORD ****)a1;
    v8 = (void *)sub_3516AC((int)v7, 96 * v3);
    *(_DWORD *)(a1 + 20) = v8;
    if ( v8 == nullptr )
    {
      if ( (a3 & 1) != 0 )
        sub_35519A(v7, (int)a2);
      *(_DWORD *)(a1 + 20) = v6;
      return 0;
    }
    j_memcpy(v8, v6, 48 * *(_DWORD *)(a1 + 12));
    if ( v6 != (_DWORD *)(a1 + 24) )
      sub_354940(v7, v6);
    *(_DWORD *)(a1 + 16) = sub_354918(v7, *(_DWORD *)(a1 + 20)) / 0x30u;
  }
  v9 = *(_DWORD *)(a1 + 12);
  v10 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 12) = v9 + 1;
  v11 = v10 + 48 * v9;
  if ( a2 != nullptr && (a2[1] & 0x40000) != 0 )
    *(_WORD *)(v11 + 16) = sub_34D98C((int)a2[7]) - 99;
  else
    *(_WORD *)(v11 + 16) = -1;
  *(_DWORD *)v11 = sub_34E89C(a2);
  *(_BYTE *)(v11 + 20) = a3;
  *(_DWORD *)(v11 + 24) = a1;
  *(_DWORD *)(v11 + 4) = -1;
  return v9;
}


//======================================================================
// sub_356314
// address: 0x00356314   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_356314(int result, _DWORD *a2, int a3)
{
  int v3; // r6

  v3 = result;
  while ( 1 )
  {
    *(_BYTE *)(v3 + 8) = a3;
    if ( a2 == nullptr )
      break;
    if ( *(unsigned __int8 *)a2 != a3 )
      return sub_356268(v3, a2, 0);
    result = sub_356314(v3, a2[3], a3);
    a2 = (_DWORD *)a2[4];
  }
  return result;
}


//======================================================================
// sub_356342
// address: 0x00356342   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_356342(int result)
{
  int i; // r4

  for ( i = result; i != 0; i = *(_DWORD *)(i + 8) )
  {
    result = sqlite3_free(*(_DWORD *)(i + 20));
    *(_DWORD *)(i + 20) = 0;
  }
  return result;
}


//======================================================================
// sub_35635A
// address: 0x0035635A   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_35635A(int a1, int a2, unsigned int a3, unsigned int a4, int *a5)
{
  int i; // r4
  int v10; // [sp+0h] [bp-Ch]

  v10 = (*(unsigned __int8 *)(a2 + 2) << 8) + *(unsigned __int8 *)(a2 + 3);
  for ( i = 0; i < v10; ++i )
  {
    if ( sub_34FD18((unsigned __int8 *)(a2 + *(_DWORD *)(a1 + 24) * i + 4)) == __PAIR64__(a4, a3) )
    {
      *a5 = i;
      return 0;
    }
  }
  return 267;
}


//======================================================================
// sub_3563A0
// address: 0x003563A0   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3563A0(int a1, unsigned int *a2, int *a3)
{
  if ( *a2 != 0 )
    return sub_35635A(a1, *(_DWORD *)(*a2 + 24), a2[2], a2[3], a3);
  *a3 = -1;
  return 0;
}


//======================================================================
// sub_3563C6
// address: 0x003563C6   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3563C6(_DWORD *a1, __int64 *a2)
{
  *a2 = sub_34FD18((unsigned __int8 *)(*(_DWORD *)(a1[1] + 24) + a1[2] * *(_DWORD *)(*a1 + 24) + 4));
  return 0;
}


//======================================================================
// sub_35640C
// address: 0x0035640C   size: 0xBA (186 bytes)
//======================================================================
int __fastcall sub_35640C(int *a1, char *buf, size_t a3, int a4, __int64 offset)
{
  int v7; // r7
  __int64 v8; // r0
  int v9; // r4
  int v10; // r12
  int v11; // r0
  signed int v12; // r7
  __int64 v13; // r0

  v7 = a1[12];
  HIDWORD(v8) = HIDWORD(offset);
  v9 = a3;
  v10 = a1[13];
  if ( __SPAIR64__(v10, v7) <= offset )
  {
LABEL_7:
    while ( v9 > 0 )
    {
      LODWORD(v13) = sub_350DE0(a1[3], SHIDWORD(v8), offset, SHIDWORD(offset), buf, v9, a1 + 5);
      if ( (int)v13 <= 0 )
      {
        if ( (_DWORD)v13 != 0 && a1[5] != 28 )
          return 778;
        a1[5] = 0;
        return 13;
      }
      v8 = (int)v13;
      offset += (int)v13;
      v9 -= v13;
      buf += v13;
    }
  }
  else
  {
    v11 = a1[18];
    if ( (int)a3 + offset > __SPAIR64__(v10, v7) )
    {
      v12 = v7 - offset;
      j_memcpy((void *)(v11 + offset), buf, v12);
      v8 = offset + v12;
      buf += v12;
      v9 -= v12;
      offset = v8;
      goto LABEL_7;
    }
    j_memcpy((void *)(v11 + offset), buf, a3);
  }
  return 0;
}


//======================================================================
// sub_3564F4
// address: 0x003564F4   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_3564F4(int a1, unsigned __int8 *a2, int a3)
{
  int result; // r0
  unsigned __int8 *i; // r3
  unsigned __int8 *v7; // r2
  unsigned int v8; // r1

  result = sub_3516AC(a1, a3 / 2 + 1);
  if ( result != 0 )
  {
    for ( i = a2; ; i += 2 )
    {
      v7 = (unsigned __int8 *)(i - a2);
      v8 = (unsigned int)(i - a2) >> 31;
      if ( i - a2 >= a3 - 1 )
        break;
      *(_BYTE *)(result + ((int)&v7[v8] >> 1)) = (i[1] + 9 * (((int)i[1] >> 6) & 1)) & 0xF
                                               | (16 * ((9 * (((int)*i >> 6) & 1) + *i) & 0xF));
    }
    *(_BYTE *)(result + ((int)&v7[v8] >> 1)) = 0;
  }
  return result;
}


//======================================================================
// sub_35655E
// address: 0x0035655E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_35655E(int result)
{
  int v1; // r4
  int v2; // r5

  v1 = result;
  if ( *(_BYTE *)(result + 9) != 0 )
  {
    v2 = *(_DWORD *)(result + 12) - 1;
    *(_DWORD *)(result + 12) = v2;
    if ( v2 == 0 )
    {
      result = sqlite3_mutex_leave(*(_DWORD *)(*(_DWORD *)(result + 4) + 56));
      *(_BYTE *)(v1 + 10) = 0;
    }
  }
  return result;
}


//======================================================================
// sub_35657E
// address: 0x0035657E   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_35657E(int result)
{
  int v1; // r5
  int i; // r4

  v1 = result;
  for ( i = 0; i < *(_DWORD *)(v1 + 20); ++i )
  {
    result = *(_DWORD *)(*(_DWORD *)(v1 + 16) + 16 * i + 4);
    if ( result != 0 )
      result = sub_35655E(result);
  }
  return result;
}


//======================================================================
// sub_3565A0
// address: 0x003565A0   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall sub_3565A0(__int64 a1)
{
  int v1; // r6
  int v2; // r5
  int v3; // r4
  int v4; // r7
  int v5; // r0
  __int64 v7; // [sp+0h] [bp-Ch]

  v7 = a1;
  v1 = a1;
  if ( *(_DWORD *)(a1 + 100) != 0 )
  {
    v2 = 1;
    v3 = 0;
    v4 = *(_DWORD *)(*(_DWORD *)a1 + 16);
    HIDWORD(v7) = *(_DWORD *)(*(_DWORD *)a1 + 20);
    while ( v3 < SHIDWORD(v7) )
    {
      if ( v3 != 1 && (*(_DWORD *)(v1 + 100) & v2) != 0 )
      {
        v5 = *(_DWORD *)(v4 + 16 * v3 + 4);
        if ( v5 != 0 )
          sub_35655E(v5);
      }
      ++v3;
      v2 *= 2;
    }
  }
  return v7;
}


//======================================================================
// sub_3565FE
// address: 0x003565FE   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall sub_3565FE(int a1)
{
  __int64 result; // r0

  result = sub_351420(a1);
  if ( *(_BYTE *)(a1 + 41) == 0 )
    return sub_351548(a1);
  return result;
}


//======================================================================
// sub_356618
// address: 0x00356618   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_356618(int a1)
{
  int v1; // r2
  int result; // r0

  v1 = *(unsigned __int8 *)(a1 + 43);
  result = 0;
  if ( v1 == 0 )
    return sub_34CA9A(*(_DWORD *)(a1 + 4));
  return result;
}


//======================================================================
// sub_356634
// address: 0x00356634   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_356634(int a1, int a2)
{
  char v2; // r5
  int v4; // r0
  int result; // r0
  int v7; // r3
  int v8; // r2
  int v9; // [sp+4h] [bp-4h] BYREF

  v9 = a2;
  v2 = 0;
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 204);
  v9 = 0;
  sub_350028(v4, a2, 0, &v9);
  result = v9;
  if ( v9 != 0 )
  {
    v7 = *(_DWORD *)&byte_8[v9];
    v8 = *(_DWORD *)&byte_4[v9];
    *(_DWORD *)(v7 + 68) = v9;
    *(_DWORD *)(v7 + 56) = v8;
    *(_DWORD *)(v7 + 52) = a1;
    *(_DWORD *)(v7 + 72) = a2;
    if ( a2 == 1 )
      v2 = 100;
    *(_BYTE *)(v7 + 5) = v2;
    return v7;
  }
  return result;
}


//======================================================================
// sub_35666A
// address: 0x0035666A   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_35666A(int result)
{
  int v1; // r4
  int *v2; // r5
  int v3; // r3
  int (*v4)(void); // r3

  v1 = result;
  v2 = (int *)(result + 148);
  if ( *(_BYTE *)(result + 12) != 0 || ((result = sub_34CA90(*(_DWORD *)(result + 60))) & 0x1000) != 0 )
  {
    v3 = 512;
  }
  else
  {
    v4 = *(int (**)(void))(**(_DWORD **)(v1 + 60) + 44);
    if ( v4 != nullptr )
    {
      result = v4();
      v3 = 512;
      if ( result <= 31 )
        goto LABEL_10;
    }
    else
    {
      result = 4096;
    }
    v3 = result;
    if ( result > 0x10000 )
      v3 = 0x10000;
  }
LABEL_10:
  *v2 = v3;
  return result;
}


//======================================================================
// sub_3566B4
// address: 0x003566B4   size: 0x3A (58 bytes)
//======================================================================
unsigned int __fastcall sub_3566B4(_DWORD *a1, char a2)
{
  __int16 v2; // r3
  int v3; // r4
  unsigned int v4; // r0

  v2 = 48;
  if ( (a2 & 1) != 0 )
  {
    if ( a1[3] != 0 || a1[5] != 0 )
      v2 = 8220;
    else
      v2 = 16396;
  }
  v3 = v2 & 0xFFF;
  if ( (a1[1] & 0x400) == 0 )
  {
    v4 = a1[2];
    if ( v4 != 0 )
      v3 += sub_34CF50(v4) + 1;
  }
  return (v3 + 7) & 0xFFFFFFF8;
}


//======================================================================
// sub_3566F8
// address: 0x003566F8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_3566F8(_DWORD *a1, int a2)
{
  int v4; // r6
  unsigned int v5; // r5
  int v6; // r0

  v4 = 0;
  while ( a1 != nullptr )
  {
    v5 = sub_3566B4(a1, a2);
    if ( (a2 & 1) == 0 )
      return v4 + v5;
    v6 = sub_3566F8(a1[3], a2);
    a1 = (_DWORD *)a1[4];
    v4 += v6 + v5;
  }
  v5 = 0;
  return v4 + v5;
}


//======================================================================
// sub_356728
// address: 0x00356728   size: 0x186 (390 bytes)
//======================================================================
_DWORD *__fastcall sub_356728(int a1, _DWORD *a2, char a3, void **a4)
{
  int v5; // r3
  int v6; // r0
  void *v7; // r0
  int v8; // r7
  unsigned int v9; // r0
  size_t v10; // r6
  char *v11; // r0
  int v12; // r3
  int v13; // r1
  int v14; // r0
  int v15; // r6
  _DWORD *v16; // r5
  __int16 v18; // [sp+8h] [bp-2Ch]
  int v20; // [sp+10h] [bp-24h]
  unsigned int v22; // [sp+18h] [bp-1Ch]
  int v24; // [sp+20h] [bp-14h]
  int v25; // [sp+24h] [bp-10h]
  void *v26[2]; // [sp+2Ch] [bp-8h] BYREF

  if ( a2 == nullptr )
    return nullptr;
  v20 = a3 & 1;
  if ( a4 != nullptr )
  {
    v5 = 0x8000;
    v26[0] = *a4;
  }
  else
  {
    v6 = sub_3566F8(a2, a3);
    v7 = (void *)sub_3516AC(a1, v6);
    v5 = 0;
    v26[0] = v7;
  }
  v16 = v26[0];
  v24 = v5;
  if ( v26[0] != nullptr )
  {
    v18 = 48;
    if ( v20 != 0 )
    {
      if ( a2[3] != 0 )
      {
        v18 = 8220;
      }
      else if ( a2[5] != 0 )
      {
        v18 = 8220;
      }
      else
      {
        v18 = 16396;
      }
    }
    v8 = a2[1];
    v25 = v18 & 0xFFF;
    v22 = 0;
    if ( (v8 & 0x400) == 0 )
    {
      v9 = a2[2];
      if ( v9 != 0 )
        v22 = sub_34CF50(v9) + 1;
    }
    if ( v20 != 0 )
    {
      j_memcpy(v26[0], a2, v25);
    }
    else
    {
      v10 = 12;
      if ( (v8 & 0x4000) == 0 )
      {
        v10 = 48;
        if ( (v8 & 0x2000) != 0 )
          v10 = 28;
      }
      j_memcpy(v26[0], a2, v10);
      j_memset((char *)v26[0] + v10, 0, 48 - v10);
    }
    *((_DWORD *)v26[0] + 1) = *((_DWORD *)v26[0] + 1) & 0xFFFE1FFF | v24 | v18 & 0x6000;
    if ( v22 != 0 )
    {
      v11 = (char *)v26[0] + v25;
      v16[2] = (char *)v26[0] + v25;
      j_memcpy(v11, (const void *)a2[2], v22);
    }
    v12 = a2[1];
    if ( ((v16[1] | v12) & 0x4000) == 0 )
    {
      v13 = a2[5];
      if ( (v12 & 0x800) != 0 )
        v14 = sub_356ABC(a1, v13, v20);
      else
        v14 = sub_3568C6(a1, v13, v20);
      v16[5] = v14;
    }
    v15 = v16[1];
    if ( (v15 & 0x6000) != 0 )
    {
      v26[0] = (char *)v26[0] + sub_3566B4(a2, a3);
      if ( (v15 & 0x2000) != 0 )
      {
        v16[3] = sub_356728(a1, a2[3], 1, v26);
        v16[4] = sub_356728(a1, a2[4], 1, v26);
      }
      if ( a4 != nullptr )
        *a4 = v26[0];
    }
    else if ( (a2[1] & 0x4000) == 0 )
    {
      v16[3] = sub_3568BC(a1, a2[3], 0);
      v16[4] = sub_3568BC(a1, a2[4], 0);
    }
  }
  return v16;
}


//======================================================================
// sub_3568BC
// address: 0x003568BC   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3568BC(int a1, _DWORD *a2, char a3)
{
  return sub_356728(a1, a2, a3, nullptr);
}


//======================================================================
// sub_3568C6
// address: 0x003568C6   size: 0xB4 (180 bytes)
//======================================================================
int *__fastcall sub_3568C6(_DWORD *a1, int *a2, char a3)
{
  int *v5; // r0
  int *v6; // r6
  int i; // r3
  int v8; // r4
  int v9; // r5
  char v10; // r2
  int v11; // r3
  int j; // [sp+8h] [bp-Ch]

  if ( a2 == nullptr )
    return nullptr;
  v5 = (int *)sub_3516AC((int)a1, 12);
  v6 = v5;
  if ( v5 == nullptr )
    return nullptr;
  v5[1] = 0;
  i = *a2;
  *v5 = *a2;
  if ( (a3 & 1) == 0 )
  {
    for ( i = 1; i < *a2; i *= 2 )
      ;
  }
  v8 = sub_3516AC((int)a1, 20 * i);
  v6[2] = v8;
  if ( v8 == 0 )
  {
    sub_354940(a1, v6);
    return nullptr;
  }
  v9 = a2[2];
  for ( j = 0; j < *a2; ++j )
  {
    *(_DWORD *)v8 = sub_3568BC((int)a1, *(_DWORD **)v9, a3);
    *(_DWORD *)(v8 + 4) = sub_351BC8((int)a1, *(void **)(v9 + 4));
    *(_DWORD *)(v8 + 8) = sub_351BC8((int)a1, *(void **)(v9 + 8));
    v10 = *(_BYTE *)(v8 + 13);
    *(_BYTE *)(v8 + 12) = *(_BYTE *)(v9 + 12);
    *(_BYTE *)(v8 + 13) = v10 & 0xFE;
    *(_BYTE *)(v8 + 13) = *(_BYTE *)(v8 + 13) & 0xFD | (2 * ((*(_BYTE *)(v9 + 13) & 2) != 0));
    v11 = *(_DWORD *)(v9 + 16);
    v9 += 20;
    *(_DWORD *)(v8 + 16) = v11;
    v8 += 20;
  }
  return v6;
}


//======================================================================
// sub_35697A
// address: 0x0035697A   size: 0x142 (322 bytes)
//======================================================================
int *__fastcall sub_35697A(_DWORD *a1, int *a2, int a3)
{
  int v6; // r1
  int v7; // r1
  int *v8; // r0
  int v9; // r3
  int *v10; // r5
  int *v11; // r4
  int v12; // r3
  int v13; // r2
  int *v14; // [sp+8h] [bp-14h]
  int i; // [sp+10h] [bp-Ch]

  if ( a2 == nullptr )
    return nullptr;
  v6 = *a2;
  v7 = v6 <= 0 ? 80 : 72 * (v6 - 1) + 80;
  v8 = (int *)sub_3516AC((int)a1, v7);
  v14 = v8;
  if ( v8 == nullptr )
    return nullptr;
  v9 = *a2;
  v10 = a2;
  v8[1] = *a2;
  *v8 = v9;
  v11 = v8;
  for ( i = 0; i < *a2; ++i )
  {
    v11[2] = v10[2];
    v11[3] = (int)sub_351BC8((int)a1, (void *)v10[3]);
    v11[4] = (int)sub_351BC8((int)a1, (void *)v10[4]);
    v11[5] = (int)sub_351BC8((int)a1, (void *)v10[5]);
    *((_BYTE *)v11 + 44) = *((_BYTE *)v10 + 44);
    v11[12] = v10[12];
    v11[8] = v10[8];
    v11[9] = v10[9];
    *((_BYTE *)v11 + 45) = *((_BYTE *)v11 + 45) & 0xFD | (2 * ((*((_BYTE *)v10 + 45) & 2) != 0));
    *((_BYTE *)v11 + 45) = *((_BYTE *)v11 + 45) & 0xFB | (4 * ((*((_BYTE *)v10 + 45) & 4) != 0));
    *((_BYTE *)v11 + 45) = *((_BYTE *)v11 + 45) & 0xF7 | (8 * ((*((_BYTE *)v10 + 45) & 8) != 0));
    v11[18] = (int)sub_351BC8((int)a1, (void *)v10[18]);
    *((_BYTE *)v11 + 45) = *((_BYTE *)v11 + 45) & 0xFE | *((_BYTE *)v10 + 45) & 1;
    v11[19] = v10[19];
    v12 = v10[6];
    v11[6] = v12;
    if ( v12 != 0 )
      ++*(_WORD *)(v12 + 40);
    v11[7] = sub_356ABC(a1, v10[7], a3);
    v11[13] = (int)sub_3568BC((int)a1, (_DWORD *)v10[13], a3);
    v11[14] = (int)sub_355DF4(a1, (_DWORD *)v10[14]);
    v13 = v10[17];
    v11[16] = v10[16];
    v11[17] = v13;
    v10 += 18;
    v11 += 18;
  }
  return v14;
}


//======================================================================
// sub_356ABC
// address: 0x00356ABC   size: 0x132 (306 bytes)
//======================================================================
int __fastcall sub_356ABC(_DWORD *a1, int a2, int a3)
{
  int v7; // r4
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r5
  _DWORD *v11; // r0
  _DWORD *v12; // r6
  int i; // r3
  _DWORD *v14; // [sp+4h] [bp-10h]
  _DWORD *v15; // [sp+8h] [bp-Ch]
  int v16; // [sp+Ch] [bp-8h]

  if ( a2 == 0 )
    return 0;
  v7 = sub_3516AC((int)a1, 80);
  if ( v7 == 0 )
    return 0;
  *(_DWORD *)v7 = sub_3568C6(a1, *(int **)a2, a3);
  *(_DWORD *)(v7 + 40) = sub_35697A(a1, *(int **)(a2 + 40), a3);
  *(_DWORD *)(v7 + 44) = sub_3568BC((int)a1, *(_DWORD **)(a2 + 44), a3);
  *(_DWORD *)(v7 + 48) = sub_3568C6(a1, *(int **)(a2 + 48), a3);
  *(_DWORD *)(v7 + 52) = sub_3568BC((int)a1, *(_DWORD **)(a2 + 52), a3);
  *(_DWORD *)(v7 + 56) = sub_3568C6(a1, *(int **)(a2 + 56), a3);
  *(_BYTE *)(v7 + 4) = *(_BYTE *)(a2 + 4);
  v8 = sub_356ABC(a1, *(_DWORD *)(a2 + 60), a3);
  *(_DWORD *)(v7 + 60) = v8;
  if ( v8 != 0 )
    *(_DWORD *)(v8 + 64) = v7;
  *(_DWORD *)(v7 + 64) = 0;
  *(_DWORD *)(v7 + 68) = sub_3568BC((int)a1, *(_DWORD **)(a2 + 68), a3);
  *(_DWORD *)(v7 + 72) = sub_3568BC((int)a1, *(_DWORD **)(a2 + 72), a3);
  *(_DWORD *)(v7 + 8) = 0;
  *(_DWORD *)(v7 + 12) = 0;
  *(_WORD *)(v7 + 6) = *(_WORD *)(a2 + 6) & 0xFFF7;
  *(_DWORD *)(v7 + 16) = -1;
  *(_DWORD *)(v7 + 20) = -1;
  *(_DWORD *)(v7 + 24) = -1;
  v9 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(v7 + 32) = *(_DWORD *)(a2 + 32);
  *(_DWORD *)(v7 + 36) = v9;
  v10 = *(_DWORD **)(a2 + 76);
  if ( v10 != nullptr && (v11 = sub_351894((int)a1, 16 * *v10 + 8), v15 = v11, v11 != nullptr) )
  {
    v12 = v10;
    v14 = v11;
    *v11 = *v10;
    for ( i = 0; ; i = v16 + 1 )
    {
      v16 = i;
      v14 += 4;
      v12 += 4;
      if ( i >= *v10 )
        break;
      *v14 = sub_356ABC(a1, *v12, 0);
      *(v14 - 1) = sub_3568C6(a1, (int *)*(v12 - 1), 0);
      *(v14 - 2) = sub_351BC8((int)a1, (void *)*(v12 - 2));
    }
  }
  else
  {
    v15 = nullptr;
  }
  *(_DWORD *)(v7 + 76) = v15;
  return v7;
}


//======================================================================
// sub_356BEE
// address: 0x00356BEE   size: 0x7E (126 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_356BEE(_DWORD *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v8; // r3
  _DWORD *v9; // r6
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r3
  int v15; // r1

  if ( a2 != nullptr )
  {
    if ( *a2 == 154 && *((_DWORD *)a2 + 7) == a3 )
    {
      v8 = *((__int16 *)a2 + 16);
      if ( v8 >= 0 )
      {
        v9 = sub_3568BC((int)a1, *(_DWORD **)(20 * v8 + *(_DWORD *)(a4 + 8)), 0);
        sub_35519A(a1, (int)a2);
        return (unsigned __int8 *)v9;
      }
      *a2 = 101;
    }
    else
    {
      v11 = sub_356BEE(a1, *((_DWORD *)a2 + 3), a3, a4);
      v12 = *((_DWORD *)a2 + 4);
      *((_DWORD *)a2 + 3) = v11;
      v13 = sub_356BEE(a1, v12, a3, a4);
      v14 = *((_DWORD *)a2 + 1);
      *((_DWORD *)a2 + 4) = v13;
      v15 = *((_DWORD *)a2 + 5);
      if ( (v14 & 0x800) != 0 )
        sub_356C9E(a1, v15, a3, a4);
      else
        sub_356C6C(a1, v15, a3, a4);
    }
  }
  return a2;
}


//======================================================================
// sub_356C6C
// address: 0x00356C6C   size: 0x32 (50 bytes)
//======================================================================
unsigned __int64 __fastcall sub_356C6C(unsigned int a1, _DWORD *a2, unsigned int a3, int a4)
{
  int i; // r4
  unsigned __int8 **v7; // r6
  unsigned __int64 v9; // [sp+0h] [bp-Ch]

  v9 = __PAIR64__(a3, a1);
  if ( a2 != nullptr )
  {
    for ( i = 0; i < *a2; ++i )
    {
      v7 = (unsigned __int8 **)(a2[2] + 20 * i);
      *v7 = sub_356BEE((_DWORD *)v9, *v7, SHIDWORD(v9), a4);
    }
  }
  return v9;
}


//======================================================================
// sub_356C9E
// address: 0x00356C9E   size: 0x7E (126 bytes)
//======================================================================
__int64 __fastcall sub_356C9E(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int8 *v6; // r0
  unsigned __int8 *v7; // r1
  unsigned __int8 *v8; // r0
  int v9; // r1
  _DWORD *v10; // r7
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = a1;
  if ( HIDWORD(a1) != 0 )
  {
    sub_356C6C(a1, *(_DWORD **)HIDWORD(a1), a2, a3);
    sub_356C6C(a1, *(_DWORD **)(HIDWORD(a1) + 48), a2, a3);
    sub_356C6C(a1, *(_DWORD **)(HIDWORD(a1) + 56), a2, a3);
    v6 = sub_356BEE((_DWORD *)a1, *(unsigned __int8 **)(HIDWORD(a1) + 52), a2, a3);
    v7 = *(unsigned __int8 **)(HIDWORD(a1) + 44);
    *(_DWORD *)(HIDWORD(a1) + 52) = v6;
    v8 = sub_356BEE((_DWORD *)a1, v7, a2, a3);
    v9 = *(_DWORD *)(HIDWORD(a1) + 60);
    *(_DWORD *)(HIDWORD(a1) + 44) = v8;
    sub_356C9E(a1, v9, a2, a3);
    v10 = *(_DWORD **)(HIDWORD(a1) + 40);
    if ( v10 != nullptr )
    {
      HIDWORD(v12) = *v10;
      while ( v12 > 0 )
      {
        sub_356C9E(a1, *(_DWORD *)(HIDWORD(a1) + 20), a2, a3);
        --HIDWORD(v12);
      }
    }
  }
  return v12;
}


//======================================================================
// sub_356D1C
// address: 0x00356D1C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_356D1C(int a1)
{
  int i; // r1

  for ( i = *(_DWORD *)(a1 + 88); i != 0; i = *(_DWORD *)(i + 44) )
    *(_DWORD *)(i + 16) = 1;
  return sub_3529E8(*(_DWORD *)(a1 + 204), 0);
}


//======================================================================
// sub_356D36
// address: 0x00356D36   size: 0xAA (170 bytes)
//======================================================================
int __fastcall sub_356D36(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  __int16 v4; // r0
  int v6; // [sp+0h] [bp-Ch]

  v6 = a1;
  sub_351F88(*(_DWORD *)(a1 + 56));
  *(_DWORD *)(a1 + 56) = 0;
  sub_352188(a1);
  v2 = *(_DWORD *)(a1 + 208);
  if ( v2 != 0 )
  {
    sub_352C00(v2);
    *(_BYTE *)(a1 + 15) = 0;
  }
  else if ( *(_BYTE *)(a1 + 4) == 0 )
  {
    v3 = *(_DWORD **)(a1 + 60);
    if ( *v3 != 0 )
      v4 = sub_34CA90((int)v3);
    else
      v4 = 0;
    if ( (v4 & 0x800) == 0 || (*(_BYTE *)(a1 + 5) & 5) != 1 )
      sub_34CA24(*(int **)(a1 + 64));
    if ( sub_34DF7E(a1, 0) != 0 && *(_BYTE *)(a1 + 15) == 6 )
      *(_BYTE *)(a1 + 16) = 5;
    *(_BYTE *)(a1 + 17) = 0;
    *(_BYTE *)(a1 + 15) = 0;
  }
  if ( *(_DWORD *)(a1 + 40) != 0 )
  {
    sub_356D1C(a1);
    *(_BYTE *)(a1 + 17) = *(_BYTE *)(a1 + 12);
    *(_BYTE *)(a1 + 15) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    if ( *(_BYTE *)(a1 + 116) != 0 )
    {
      v6 = 0;
      sub_34CAA4(*(_DWORD *)(a1 + 60));
    }
  }
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_BYTE *)(a1 + 18) = 0;
  return v6;
}


//======================================================================
// sub_356DE0
// address: 0x00356DE0   size: 0xF4 (244 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00356DE0  PUSH    {R4-R7,LR}
//   00356DE2  LDRB    R3, [R0,#0xE]
//   00356DE4  SUB     SP, SP, #0x24
//   00356DE6  MOVS    R4, R0
//   00356DE8  STR     R1, [SP,#0x24+var_20]
//   00356DEA  STR     R2, [SP,#0x24+var_10]
//   00356DEC  LDR     R5, [R1]
//   00356DEE  CMP     R3, #0
//   00356DF0  BEQ     loc_356DFA
//   00356DF2  LDR     R0, [R0,#0x18]
//   00356DF4  MOVS    R7, #0
//   00356DF6  CMP     R0, R7
//   00356DF8  BNE     loc_356EA0
//   00356DFA  MOVS    R3, R4
//   00356DFC  ADDS    R3, #0xCC
//   00356DFE  LDR     R3, [R3]
//   00356E00  MOVS    R7, #0
//   00356E02  LDR     R3, [R3,#0xC]
//   00356E04  CMP     R3, R7
//   00356E06  BNE     loc_356EA0
//   00356E08  CMP     R5, R7
//   00356E0A  BEQ     loc_356EA0
//   00356E0C  MOVS    R3, R4
//   00356E0E  ADDS    R3, #0x98
//   00356E10  LDR     R3, [R3]
//   00356E12  CMP     R5, R3
//   00356E14  BEQ     loc_356EA0
//   00356E16  MOVS    R2, #0
//   00356E18  MOVS    R3, #0
//   00356E1A  STR     R2, [SP,#0x24+var_C]
//   00356E1C  STR     R3, [SP,#0x24+var_C+4]
//   00356E1E  LDRB    R3, [R4,#0xF]
//   00356E20  CMP     R3, R7
//   00356E22  BNE     loc_356E32
//   00356E24  MOVS    R0, R5
//   00356E26  BL      sub_351C3C
//   00356E2A  STR     R0, [SP,#0x24+var_14]
//   00356E2C  CMP     R0, #0
//   00356E2E  BNE     loc_356E46
//   00356E30  B       loc_356ECA
//   00356E32  LDR     R0, [R4,#0x3C]
//   00356E34  LDR     R1, [R0]
//   00356E36  CMP     R1, #0
//   00356E38  BEQ     loc_356E24
//   00356E3A  ADD     R1, SP, #0x24+var_C
//   00356E3C  BL      sub_34CA72
//   00356E40  SUBS    R7, R0, #0
//   00356E42  BNE     loc_356EA0
//   00356E44  B       loc_356E24
//   00356E46  MOVS    R0, R4
//   00356E48  BL      sub_356D1C
//   00356E4C  LDR     R0, [SP,#0x24+var_C]
//   00356E4E  LDR     R1, [SP,#0x24+var_C+4]
//   00356E50  MOVS    R2, R5
//   00356E52  MOVS    R3, #0
//   00356E54  ADDS    R0, R0, R2
//   00356E56  ADCS    R1, R3
//   00356E58  MOVS    R6, #1
//   00356E5A  NEGS    R6, R6
//   00356E5C  ASRS    R7, R6, #0x1F
//   00356E5E  ADDS    R0, R0, R6
//   00356E60  ADCS    R1, R7
//   00356E62  STR     R0, [SP,#0x24+var_1C]
//   00356E64  STR     R1, [SP,#0x24+var_1C+4]
//   00356E66  BL      j___aeabi_ldivmod
//   00356E6A  MOVS    R3, R4
//   00356E6C  ADDS    R3, #0x98
//   00356E6E  MOVS    R7, R4
//   00356E70  STR     R0, [R4,#0x18]
//   00356E72  ADDS    R7, #0xC8
//   00356E74  STR     R5, [R3]
//   00356E76  LDR     R0, [R7]
//   00356E78  BL      sub_351FB4
//   00356E7C  LDR     R6, [SP,#0x24+var_14]
//   00356E7E  MOVS    R3, R4
//   00356E80  ADDS    R3, #0xCC
//   00356E82  STR     R6, [R7]
//   00356E84  LDR     R7, [R3]
//   00356E86  LDR     R0, [R7,#0x28]
//   00356E88  CMP     R0, #0
//   00356E8A  BEQ     loc_356E9C
//   00356E8C  LDR     R3, =(dword_471638 - 0x356E92)
//   00356E8E  ADD     R3, PC; dword_471638
//   00356E90  ADDS    R3, #(off_4716CC - 0x471638)
//   00356E92  LDR     R3, [R3]
//   00356E94  BLX     R3
//   00356E96  MOVS    R2, #0
//   00356E98  STR     R2, [R7,#0x28]
//   00356E9A  STR     R2, [R7,#0x2C]
//   00356E9C  STR     R5, [R7,#0x14]
//   00356E9E  MOVS    R7, #0
//   00356EA0  MOVS    R3, R4
//   00356EA2  ADDS    R3, #0x98
//   00356EA4  LDR     R3, [R3]
//   00356EA6  LDR     R6, [SP,#0x24+var_20]
//   00356EA8  STR     R3, [R6]
//   00356EAA  CMP     R7, #0
//   00356EAC  BNE     loc_356ECE
//   00356EAE  LDR     R6, [SP,#0x24+var_10]
//   00356EB0  MOVS    R3, R4
//   00356EB2  ADDS    R3, #0x8E
//   00356EB4  CMP     R6, #0
//   00356EB6  BGE     loc_356EBE
//   00356EB8  MOVS    R0, #0
//   00356EBA  LDRSH   R6, [R3,R0]
//   00356EBC  STR     R6, [SP,#0x24+var_10]
//   00356EBE  LDR     R6, [SP,#0x24+var_10]
//   00356EC0  MOVS    R0, R4
//   00356EC2  STRH    R6, [R3]
//   00356EC4  BL      sub_34DFF8
//   00356EC8  B       loc_356ECE
//   00356ECA  MOVS    R7, #7
//   00356ECC  B       loc_356EA0
//   00356ECE  MOVS    R0, R7
//   00356ED0  ADD     SP, SP, #0x24 ; '$'
//   00356ED2  POP     {R4-R7,PC}

//======================================================================
// sub_356ED8
// address: 0x00356ED8   size: 0x174 (372 bytes)
//======================================================================
int __fastcall sub_356ED8(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5, unsigned int *a6)
{
  __int64 v7; // r6
  int v8; // r3
  int v9; // r1
  int v10; // r0
  int v11; // r1
  int v12; // r0
  int v13; // r1
  unsigned int v18; // [sp+24h] [bp-18h] BYREF
  unsigned int v19; // [sp+28h] [bp-14h] BYREF
  _BYTE v20[8]; // [sp+2Ch] [bp-10h] BYREF

  v7 = sub_34DF9E(a1);
  *(_QWORD *)(a1 + 72) = v7;
  if ( *(unsigned int *)(a1 + 148) + v7 > __SPAIR64__(a4, a3) )
    return 101;
  if ( a2 == 0 )
  {
    v9 = *(_DWORD *)(a1 + 80);
    if ( *(_QWORD *)(a1 + 80) == v7 )
      goto LABEL_5;
  }
  v8 = sub_34CA3A(*(_DWORD *)(a1 + 64));
  if ( v8 != 0 )
    return v8;
  if ( j_memcmp(v20, &unk_44AC1C, 8u) != 0 )
    return 101;
LABEL_5:
  v8 = sub_34DF32(*(_DWORD *)(a1 + 64), v9, v7 + 8, (unsigned __int64)(v7 + 8) >> 32, a5);
  if ( v8 == 0 )
  {
    v10 = sub_34DF32(
            *(_DWORD *)(a1 + 64),
            a1 + 48,
            v7 + 12,
            (unsigned __int64)(v7 + 12) >> 32,
            (unsigned int *)(a1 + 48));
    v8 = v10;
    if ( v10 == 0 )
    {
      v12 = sub_34DF32(*(_DWORD *)(a1 + 64), v11, v7 + 16, (unsigned __int64)(v7 + 16) >> 32, a6);
      v8 = v12;
      if ( v12 == 0 )
      {
        if ( *(_QWORD *)(a1 + 72) != 0 )
        {
LABEL_23:
          *(_QWORD *)(a1 + 72) += *(unsigned int *)(a1 + 148);
          return v12;
        }
        v8 = sub_34DF32(*(_DWORD *)(a1 + 64), (int)&v19, v7 + 20, (unsigned __int64)(v7 + 20) >> 32, &v19);
        if ( v8 == 0 )
        {
          v8 = sub_34DF32(*(_DWORD *)(a1 + 64), v13, v7 + 24, (unsigned __int64)(v7 + 24) >> 32, &v18);
          if ( v8 == 0 )
          {
            if ( v18 == 0 )
              v18 = *(_DWORD *)(a1 + 152);
            v8 = 101;
            if ( v18 > 0x1FF && v19 - 32 <= 0xFFE0 && v18 <= 0x10000 && (v18 & (v18 - 1)) == 0 && (v19 & (v19 - 1)) == 0 )
            {
              v12 = sub_356DE0(a1, &v18, -1, 101);
              *(_DWORD *)(a1 + 148) = v19;
              goto LABEL_23;
            }
          }
        }
      }
    }
  }
  return v8;
}


//======================================================================
// sub_35705C
// address: 0x0035705C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_35705C(int a1, int a2)
{
  int v2; // r3
  int result; // r0

  v2 = *(unsigned __int8 *)(a1 + 16);
  if ( v2 < a2 || (result = 0, v2 == 5) )
  {
    result = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 60) + 28))(*(_DWORD *)(a1 + 60), a2);
    if ( result == 0 && (*(_BYTE *)(a1 + 16) != 5 || a2 == 4) )
      *(_BYTE *)(a1 + 16) = a2;
  }
  return result;
}


//======================================================================
// sub_35708A
// address: 0x0035708A   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_35708A(int a1, int a2)
{
  int v4; // r5

  do
    v4 = sub_35705C(a1, a2);
  while ( v4 == 5 && (*(int (__fastcall **)(_DWORD))(a1 + 176))(*(_DWORD *)(a1 + 180)) != 0 );
  return v4;
}


//======================================================================
// sub_3570B4
// address: 0x003570B4   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall sub_3570B4(int a1)
{
  int v2; // r6
  __int64 v3; // r0
  int v4; // r6
  int v5; // r4
  int v7; // [sp+Ch] [bp-20h]
  int v8; // [sp+10h] [bp-1Ch]
  _BYTE *v9; // [sp+10h] [bp-1Ch]
  int v10; // [sp+14h] [bp-18h]
  int v11; // [sp+18h] [bp-14h]
  int v12; // [sp+1Ch] [bp-10h]

  if ( *(_BYTE *)(a1 + 4) != 0 && (v2 = sub_35705C(a1, 4)) != 0 )
  {
    sub_34DF7E(a1, 1);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 212);
    v4 = *(_DWORD *)a1;
    v7 = *(_DWORD *)(a1 + 60);
    v12 = *(unsigned __int8 *)(a1 + 4);
    v8 = *(_DWORD *)(a1 + 160);
    v10 = *(_DWORD *)(a1 + 164);
    *(_DWORD *)(a1 + 208) = 0;
    LODWORD(v3) = sub_351CC4(*(_DWORD *)(v4 + 4) + 112);
    v5 = v3;
    if ( (_DWORD)v3 != 0 )
    {
      *(_DWORD *)(v3 + 4) = v7;
      *(_DWORD *)v3 = v4;
      *(_WORD *)(v3 + 40) = -1;
      *(_DWORD *)(v3 + 8) = v3 + 112;
      *(_DWORD *)(v3 + 16) = v8;
      *(_DWORD *)(v3 + 20) = v10;
      *(_DWORD *)(v3 + 100) = v11;
      *(_BYTE *)(v3 + 48) = 1;
      *(_BYTE *)(v3 + 49) = 1;
      v9 = (_BYTE *)(v3 + 48);
      *(_BYTE *)(v3 + 43) = 2 * (v12 != 0);
      v2 = sub_34CAB4(v4, v11, v3 + 112, 524294);
      if ( v2 != 0 )
      {
        sub_352BAA(v5);
        sub_34CA24(*(int **)(v5 + 8));
        sqlite3_free(v5);
      }
      else
      {
        LOWORD(v3) = sub_34CA90(v7);
        if ( (v3 & 0x400) != 0 )
        {
          HIDWORD(v3) = v9;
          *v9 = 0;
        }
        if ( (v3 & 0x1000) != 0 )
          *(_BYTE *)(v5 + 49) = 0;
        *(_DWORD *)(a1 + 208) = v5;
      }
    }
    else
    {
      v2 = 7;
    }
  }
  LODWORD(v3) = a1;
  sub_34DFF8(v3);
  return v2;
}


//======================================================================
// sub_3571A8
// address: 0x003571A8   size: 0x38 (56 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003571A8  PUSH    {R4-R6,LR}
//   003571AA  LDR     R5, [R0,#0x28]
//   003571AC  MOVS    R4, R0
//   003571AE  STR     R1, [R0,#0x10]
//   003571B0  CMP     R5, #0
//   003571B2  BEQ     locret_3571DE
//   003571B4  LDR     R3, =(dword_471638 - 0x3571BA)
//   003571B6  ADD     R3, PC; dword_471638
//   003571B8  LDR     R6, [R3,#(off_4716B4 - 0x471638)]
//   003571BA  CMP     R1, #0
//   003571BC  BGE     loc_3571DA
//   003571BE  ASRS    R3, R1, #0x1F
//   003571C0  MOVS    R0, R1
//   003571C2  MOVS    R1, R3
//   003571C4  LDR     R3, =0xFFFFFFFF
//   003571C6  LDR     R2, =0xFFFFFC00
//   003571C8  BL      __aeabi_lmul
//   003571CC  LDR     R3, [R4,#0x18]
//   003571CE  LDR     R2, [R4,#0x14]
//   003571D0  ADDS    R2, R2, R3
//   003571D2  ASRS    R3, R2, #0x1F
//   003571D4  BL      j___aeabi_ldivmod
//   003571D8  MOVS    R1, R0
//   003571DA  MOVS    R0, R5
//   003571DC  BLX     R6
//   003571DE  POP     {R4-R6,PC}

//======================================================================
// sub_3571F0
// address: 0x003571F0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_3571F0(int a1, int a2, int a3, __int64 *a4)
{
  __int64 v8; // r0
  _DWORD *v9; // r7
  int v10; // r3
  int v11; // r2
  unsigned __int8 *v12; // r2

  v8 = sub_34FD18((unsigned __int8 *)(*(_DWORD *)(a2 + 24) + *(_DWORD *)(a1 + 24) * a3 + 4));
  *a4 = v8;
  v9 = a4 + 1;
  v10 = 0;
  while ( v10 < 2 * *(_DWORD *)(a1 + 20) )
  {
    v11 = *(_DWORD *)(a1 + 24) * a3 + 12 + 4 * v10++;
    v12 = (unsigned __int8 *)(*(_DWORD *)(a2 + 24) + v11);
    LODWORD(v8) = (*v12 << 24) + (v12[1] << 16) + v12[3];
    *v9++ = v8 + (v12[2] << 8);
  }
  return v8;
}


//======================================================================
// sub_357242
// address: 0x00357242   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall sub_357242(int a1, unsigned int *a2, int *a3)
{
  int v4; // r7
  float *v6; // r6
  char *v7; // r4
  int v8; // [sp+8h] [bp-54h]
  int v10; // [sp+24h] [bp-38h] BYREF
  __int64 v11; // [sp+28h] [bp-34h] BYREF
  _BYTE v12[40]; // [sp+34h] [bp-28h] BYREF

  while ( 1 )
  {
    v8 = *a2;
    if ( *a2 == 0 )
      return 0;
    v4 = sub_3563A0(a1, a2, &v10);
    if ( v4 != 0 )
      return 267;
    sub_3571F0(a1, v8, v10, &v11);
    v6 = (float *)(a3 + 3);
    v7 = v12;
    while ( v4 < 2 * *(_DWORD *)(a1 + 20) )
    {
      if ( *(_DWORD *)(a1 + 612) == 1 )
      {
        if ( *((_DWORD *)v6 - 1) < *(_DWORD *)&v12[v7 - v12 + 4] || *(_DWORD *)v6 > *(_DWORD *)v7 )
        {
LABEL_13:
          sub_353DFC(__SPAIR64__(&v11, a1), a3);
          sub_34FE30(a1, v8, (int *)&v11, v10);
          break;
        }
      }
      else if ( *(v6 - 1) < *(float *)&v12[v7 - v12 + 4] || *v6 > *(float *)v7 )
      {
        goto LABEL_13;
      }
      v4 += 2;
      v6 += 2;
      v7 += 8;
    }
    a2 = (unsigned int *)v8;
  }
}


//======================================================================
// sub_35730A
// address: 0x0035730A   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_35730A(int a1, unsigned int *a2)
{
  int v2; // r6
  int i; // r3
  unsigned int v6; // r3
  int result; // r0
  int v8; // [sp+4h] [bp-70h]
  int v9; // [sp+Ch] [bp-68h] BYREF
  __int64 v10[6]; // [sp+10h] [bp-64h] BYREF
  __int64 v11[6]; // [sp+40h] [bp-34h] BYREF

  v2 = *a2;
  if ( *a2 == 0 )
    return 0;
  v8 = (*(unsigned __int8 *)(a2[6] + 2) << 8) + *(unsigned __int8 *)(a2[6] + 3);
  sub_3571F0(a1, (int)a2, 0, v10);
  for ( i = 1; ; i = v9 + 1 )
  {
    v9 = i;
    if ( i >= v8 )
      break;
    sub_3571F0(a1, (int)a2, i, v11);
    sub_353DFC(__SPAIR64__(v10, a1), (int *)v11);
  }
  v6 = a2[3];
  LODWORD(v10[0]) = a2[2];
  HIDWORD(v10[0]) = v6;
  result = sub_3563A0(a1, a2, &v9);
  if ( result == 0 )
  {
    sub_34FE30(a1, v2, (int *)v10, v9);
    return sub_35730A(a1, v2);
  }
  return result;
}


//======================================================================
// sub_357388
// address: 0x00357388   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_357388(int a1)
{
  int v1; // r4
  int v3; // r3
  int result; // r0
  _DWORD *v5; // r2
  __int64 v6; // r0

  v1 = *(_DWORD *)(a1 + 16);
  v3 = *(unsigned __int8 *)(v1 + 5);
  if ( v3 == 2 )
    goto LABEL_2;
  v5 = *(_DWORD **)(v1 + 68);
  if ( *v5 == 0 )
  {
    if ( v3 == 4 || *(_BYTE *)(v1 + 20) != 0 )
    {
      sub_350180(*(_DWORD **)(v1 + 68));
    }
    else
    {
      result = sub_34CAB4(*(_DWORD *)v1, *(unsigned __int8 *)(v1 + 20), (int)v5, 8222);
      if ( result != 0 )
        return result;
    }
  }
  v6 = *(unsigned int *)(v1 + 52) * (__int64)(*(_DWORD *)(v1 + 152) + 4);
  result = sub_34DF58(*(_DWORD *)(v1 + 68), *(_DWORD *)(a1 + 20), v6, SHIDWORD(v6), *(_DWORD *)(a1 + 20));
  if ( result == 0 )
  {
    result = sub_34CA4C(*(_DWORD *)(v1 + 68));
    if ( result == 0 )
    {
LABEL_2:
      ++*(_DWORD *)(v1 + 52);
      return sub_355D9E(v1, *(_DWORD *)(a1 + 20));
    }
  }
  return result;
}


//======================================================================
// sub_357454
// address: 0x00357454   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_357454(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  int v5; // r1
  int v6; // r0
  __int64 v7; // r0
  unsigned __int8 *v8; // r2
  int v9; // r1

  v3 = *a1;
  v5 = a1[1];
  v6 = a1[2] * *(_DWORD *)(*a1 + 24);
  if ( a3 != 0 )
  {
    v8 = (unsigned __int8 *)(*(_DWORD *)(v5 + 24) + v6 + 12 + 4 * (a3 - 1));
    v9 = (*v8 << 24) + (v8[1] << 16) + v8[3] + (v8[2] << 8);
    if ( *(_DWORD *)(v3 + 612) != 0 )
      sqlite3_result_int(a2, v9);
    else
      sqlite3_result_double(
        a2,
        HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v9)),
        COERCE_UNSIGNED_INT64(*(float *)&v9),
        HIDWORD(COERCE_UNSIGNED_INT64(*(float *)&v9)));
  }
  else
  {
    v7 = sub_34FD18((unsigned __int8 *)(*(_DWORD *)(v5 + 24) + v6 + 4));
    sqlite3_result_int64(a2, SHIDWORD(v7), v7, SHIDWORD(v7));
  }
  return 0;
}


//======================================================================
// sub_3574C2
// address: 0x003574C2   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_3574C2(int result)
{
  int v1; // r4
  int i; // r5

  v1 = result;
  if ( *(_BYTE *)(result + 9) != 0 )
  {
    ++*(_DWORD *)(result + 12);
    if ( *(_BYTE *)(result + 10) == 0 )
    {
      result = sqlite3_mutex_try(*(_DWORD *)(*(_DWORD *)(result + 4) + 56));
      if ( result != 0 )
      {
        for ( i = *(_DWORD *)(v1 + 20); i != 0; i = *(_DWORD *)(i + 20) )
        {
          if ( *(_BYTE *)(i + 10) != 0 )
          {
            sqlite3_mutex_leave(*(_DWORD *)(*(_DWORD *)(i + 4) + 56));
            *(_BYTE *)(i + 10) = 0;
          }
        }
LABEL_12:
        result = sqlite3_mutex_enter(*(_DWORD *)(*(_DWORD *)(v1 + 4) + 56));
        *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4) = *(_DWORD *)v1;
        *(_BYTE *)(v1 + 10) = 1;
        while ( 1 )
        {
          v1 = *(_DWORD *)(v1 + 20);
          if ( v1 == 0 )
            break;
          if ( *(_DWORD *)(v1 + 12) != 0 )
            goto LABEL_12;
        }
      }
      else
      {
        *(_DWORD *)(*(_DWORD *)(v1 + 4) + 4) = *(_DWORD *)v1;
        *(_BYTE *)(v1 + 10) = 1;
      }
    }
  }
  return result;
}


//======================================================================
// sub_35752E
// address: 0x0035752E   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_35752E(int result)
{
  int v1; // r5
  int i; // r4

  v1 = result;
  for ( i = 0; i < *(_DWORD *)(v1 + 20); ++i )
  {
    result = *(_DWORD *)(*(_DWORD *)(v1 + 16) + 16 * i + 4);
    if ( result != 0 )
      result = sub_3574C2(result);
  }
  return result;
}


//======================================================================
// sub_3577F4
// address: 0x003577F4   size: 0x40 (64 bytes)
//======================================================================
__int64 __fastcall sub_3577F4(_DWORD *a1)
{
  int i; // r5
  int v3; // r0
  __int64 v4; // r0

  sub_35752E((int)a1);
  for ( i = 0; i < a1[5]; ++i )
  {
    v3 = *(_DWORD *)(a1[4] + 16 * i + 12);
    if ( v3 != 0 )
      sub_355574(v3);
  }
  a1[6] &= ~2u;
  sub_354E48(a1);
  sub_35657E((int)a1);
  LODWORD(v4) = a1;
  return sub_355E66(v4);
}


//======================================================================
// sub_357834
// address: 0x00357834   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_357834(int a1, int a2)
{
  int v2; // r6

  v2 = *(_DWORD *)(a1 + 4);
  sub_3574C2(a1);
  sub_3571A8(*(_DWORD *)(*(_DWORD *)v2 + 204), a2);
  sub_35655E(a1);
  return 0;
}


//======================================================================
// sub_357856
// address: 0x00357856   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_357856(int result, int a2)
{
  int v2; // r4
  int v4; // r5

  v2 = result;
  if ( result != 0 )
  {
    sub_3574C2(result);
    if ( a2 >= 0 )
    {
      *(_WORD *)(*(_DWORD *)(v2 + 4) + 22) &= ~4u;
      if ( a2 != 0 )
        *(_WORD *)(*(_DWORD *)(v2 + 4) + 22) |= 4u;
    }
    v4 = *(unsigned __int16 *)(*(_DWORD *)(v2 + 4) + 22);
    sub_35655E(v2);
    return (unsigned int)(v4 << 29) >> 31;
  }
  return result;
}


//======================================================================
// sub_357890
// address: 0x00357890   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_357890(int a1, int a2)
{
  int v2; // r5
  unsigned int v3; // r4
  unsigned int v5; // r4
  int v6; // r7

  v2 = *(_DWORD *)(a1 + 4);
  v3 = a2 << 24;
  sub_3574C2(a1);
  v5 = HIBYTE(v3);
  if ( (*(_WORD *)(v2 + 22) & 2) == 0 || (v6 = 8, (v5 != 0) == *(_BYTE *)(v2 + 17)) )
  {
    *(_BYTE *)(v2 + 17) = v5 != 0;
    *(_BYTE *)(v2 + 18) = v5 == 2;
    v6 = 0;
  }
  sub_35655E(a1);
  return v6;
}


//======================================================================
// sub_3578CE
// address: 0x003578CE   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_3578CE(int a1, _BOOL4 a2, int a3, int a4, int a5)
{
  int v7; // r3
  int v8; // r7
  int v9; // r2

  sub_3574C2(a1);
  v7 = *(_DWORD *)(a1 + 4);
  if ( a3 == 0 || (v8 = 8, (*(_WORD *)(v7 + 22) & 1) == 0) )
  {
    if ( a2 )
      a2 = *(_DWORD *)(v7 + 44) != 0;
    *(_DWORD *)(a5 + 24) = a2;
    *(_WORD *)(a5 + 86) = -1;
    *(_DWORD *)a5 = a1;
    *(_DWORD *)(a5 + 16) = a4;
    *(_DWORD *)(a5 + 4) = v7;
    *(_BYTE *)(a5 + 80) = a3;
    v9 = *(_DWORD *)(v7 + 8);
    *(_DWORD *)(a5 + 8) = v9;
    if ( v9 != 0 )
      *(_DWORD *)(v9 + 12) = a5;
    *(_DWORD *)(v7 + 8) = a5;
    v8 = 0;
    *(_BYTE *)(a5 + 83) = 0;
  }
  sub_35655E(a1);
  return v8;
}


//======================================================================
// sub_357930
// address: 0x00357930   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_357930(int a1, int a2, unsigned int *a3)
{
  int v3; // r7

  v3 = *(_DWORD *)(a1 + 4);
  sub_3574C2(a1);
  *a3 = sub_34D8D8((unsigned int *)(*(_DWORD *)(*(_DWORD *)(v3 + 12) + 56) + 4 * (a2 + 9)));
  return sub_35655E(a1);
}


//======================================================================
// sub_357956
// address: 0x00357956   size: 0x36 (54 bytes)
//======================================================================
__int64 __fastcall sub_357956(_DWORD *a1)
{
  int v2; // r5
  int v3; // r7
  int v4; // r4
  int v5; // r0
  __int64 v7; // [sp+0h] [bp-Ch]

  LODWORD(v7) = a1;
  v2 = 1;
  v3 = *(_DWORD *)(*a1 + 16);
  v4 = 0;
  HIDWORD(v7) = *(_DWORD *)(*a1 + 20);
  while ( v4 < SHIDWORD(v7) )
  {
    if ( v4 != 1 && (a1[25] & v2) != 0 )
    {
      v5 = *(_DWORD *)(v3 + 16 * v4 + 4);
      if ( v5 != 0 )
        sub_3574C2(v5);
    }
    ++v4;
    v2 *= 2;
  }
  return v7;
}


//======================================================================
// sub_3579E4
// address: 0x003579E4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_3579E4(int *a1, _DWORD *a2)
{
  int v2; // r6
  int v4; // r5
  void *v5; // r4

  v2 = *a1;
  v4 = 7;
  v5 = sub_351CC4(*(_DWORD *)(*a1 + 4));
  if ( v5 != nullptr )
  {
    v4 = sub_34CAB4(v2, 0, (int)v5, 4126);
    if ( v4 != 0 )
      sqlite3_free(v5);
    else
      *a2 = v5;
  }
  return v4;
}


//======================================================================
// sub_357A20
// address: 0x00357A20   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_357A20(__int64 a1)
{
  __int64 v1; // kr00_8
  int v2; // r4
  _DWORD *v3; // r1

  v1 = a1;
  if ( HIDWORD(a1) != 0 )
  {
    LODWORD(a1) = HIDWORD(a1) + 328;
    sub_355322(a1);
    while ( 1 )
    {
      v2 = *(_DWORD *)(HIDWORD(v1) + 16);
      if ( v2 == 0 )
        break;
      *(_DWORD *)(HIDWORD(v1) + 16) = *(_DWORD *)(v2 + 48);
      v3 = *(_DWORD **)(v2 + 44);
      if ( v3 != (_DWORD *)(v2 + 52) )
        sub_354940((_DWORD *)v1, v3);
      sub_354EBA((_DWORD *)v1, v2);
      *(_DWORD *)(v2 + 44) = v2 + 52;
      *(_WORD *)(v2 + 40) = 0;
      *(_WORD *)(v2 + 42) = 4;
      *(_DWORD *)(v2 + 36) = 0;
      sub_354940((_DWORD *)v1, (_DWORD *)v2);
    }
    LODWORD(a1) = sub_354940((_DWORD *)v1, (_DWORD *)HIDWORD(v1));
  }
  return a1;
}


//======================================================================
// sub_357A74
// address: 0x00357A74   size: 0x1D0 (464 bytes)
//======================================================================
int __fastcall sub_357A74(int a1, int a2, int a3)
{
  int *v5; // r0
  int v6; // r5
  int v7; // r3
  __int64 v8; // r6
  int v9; // r0
  int v10; // r5
  int v11; // r7
  int v12; // r6
  unsigned int v13; // r1
  int *v14; // r0
  int v15; // r0
  int v16; // r0
  int result; // r0
  int *v18; // [sp+8h] [bp-14h]
  __int64 v20; // [sp+10h] [bp-Ch]

  if ( *(unsigned __int8 *)(a1 + 15) <= 1u && *(unsigned __int8 *)(a1 + 16) <= 1u )
    return 0;
  sub_352188(a1);
  v5 = *(int **)(a1 + 64);
  if ( *v5 == 0 )
    goto LABEL_7;
  if ( (_UNKNOWN *)*v5 == &unk_45465C )
  {
    sub_34CA24(v5);
LABEL_7:
    v6 = 0;
    goto LABEL_35;
  }
  v7 = *(unsigned __int8 *)(a1 + 5);
  if ( v7 == 3 )
  {
    v6 = 0;
    if ( *(_QWORD *)(a1 + 72) != 0 )
    {
LABEL_31:
      v6 = sub_34CA5E((int)v5);
      goto LABEL_32;
    }
    goto LABEL_32;
  }
  if ( v7 == 1 || *(_BYTE *)(a1 + 4) != 0 && v7 != 5 )
  {
    if ( *(_QWORD *)(a1 + 72) != 0 )
    {
      HIDWORD(v8) = *(_DWORD *)(a1 + 160);
      LODWORD(v8) = *(_DWORD *)(a1 + 164);
      if ( a2 == 0 && v8 != 0 )
        v9 = sub_34CA4C((int)v5);
      else
        v9 = sub_34CA5E((int)v5);
      v6 = v9;
      if ( v9 != 0 )
        goto LABEL_32;
      if ( *(_BYTE *)(a1 + 7) == 0 )
      {
        v6 = sub_34CA68(*(_DWORD *)(a1 + 64));
        if ( v6 != 0 )
          goto LABEL_32;
      }
      if ( (int)v8 > 0 || (_DWORD)v8 == 0 && HIDWORD(v8) != 0 )
      {
        v6 = sub_34CA72(*(_DWORD *)(a1 + 64));
        if ( v6 != 0 || v20 <= __SPAIR64__(v8, HIDWORD(v8)) )
          goto LABEL_32;
        v5 = *(int **)(a1 + 64);
        goto LABEL_31;
      }
    }
    v6 = 0;
LABEL_32:
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 76) = 0;
    goto LABEL_35;
  }
  v10 = *(unsigned __int8 *)(a1 + 12);
  sub_34CA24(v5);
  if ( v10 != 0 )
    goto LABEL_7;
  v6 = sub_34CAC8(*(_DWORD *)a1);
LABEL_35:
  sub_351F88(*(_DWORD *)(a1 + 56));
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  sub_352A34(*(_DWORD ***)(a1 + 204));
  sub_3529E8(*(_DWORD *)(a1 + 204), *(_DWORD *)(a1 + 24));
  v11 = *(_DWORD *)(a1 + 208);
  v18 = (int *)(a1 + 208);
  if ( v11 != 0 )
  {
    v12 = sub_352BDE(v11);
  }
  else
  {
    v12 = 0;
    if ( v6 != 0 )
      goto LABEL_45;
    v12 = 0;
    if ( a3 == 0 )
      goto LABEL_45;
    v13 = *(_DWORD *)(a1 + 24);
    if ( *(_DWORD *)(a1 + 32) <= v13 )
      goto LABEL_43;
    v12 = 0;
    v6 = sub_35019C(a1, v13);
  }
  if ( v6 == 0 && a3 != 0 )
  {
LABEL_43:
    v14 = *(int **)(a1 + 60);
    v6 = *v14;
    if ( *v14 != 0 )
    {
      v15 = sub_34CA7C((int)v14);
      v6 = v15 != 12 ? v15 : 0;
    }
  }
LABEL_45:
  if ( *(_BYTE *)(a1 + 4) == 0 )
  {
    v16 = *v18;
    if ( *v18 == 0 || *(_BYTE *)(v16 + 43) != 0 && sub_3548EC(v16) )
    {
      v12 = sub_34DF7E(a1, 1);
      *(_BYTE *)(a1 + 17) = 0;
    }
  }
  *(_BYTE *)(a1 + 15) = 1;
  *(_BYTE *)(a1 + 18) = 0;
  result = v6;
  if ( v6 == 0 )
    return v12;
  return result;
}


//======================================================================
// sub_357D14
// address: 0x00357D14   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_357D14(int a1, int a2, int a3, int a4)
{
  int result; // r0
  int **v8; // r3
  int i; // r3
  int j; // r2
  int v11; // r1
  int **k; // r7

  result = *(_DWORD *)(a1 + 24) & 0x80000;
  if ( result != 0 )
  {
    if ( a3 != 0 )
    {
      for ( i = *(_DWORD *)(a2 + 16); i != 0; i = *(_DWORD *)(i + 4) )
      {
        for ( j = 0; j < *(_DWORD *)(i + 20); ++j )
        {
          v11 = *(_DWORD *)(i + 8 * j + 36);
          if ( *(int *)(4 * v11 + a3) >= 0 || v11 == *(__int16 *)(a2 + 36) && a4 != 0 )
            return 1;
        }
      }
      for ( k = sub_34F1D0((unsigned int *)a2); k != nullptr; k = (int **)k[3] )
      {
        if ( sub_34F1EA(a2, (int)k, a3, a4) != 0 )
          return 1;
      }
      return 0;
    }
    else
    {
      v8 = sub_34F1D0((unsigned int *)a2);
      result = 1;
      if ( v8 == nullptr )
        return *(_DWORD *)(a2 + 16) != 0;
    }
  }
  return result;
}


//======================================================================
// sub_357D9C
// address: 0x00357D9C   size: 0x76 (118 bytes)
//======================================================================
_DWORD *__fastcall sub_357D9C(int a1, int a2)
{
  int v4; // r5
  _DWORD *result; // r0
  int v6; // r3

  if ( a2 != 0 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    sub_3574C2(a2);
    if ( *(_DWORD *)(v4 + 48) == 0 )
    {
      *(_DWORD *)(v4 + 48) = sub_351894(0, 0x54u);
      *(_DWORD *)(v4 + 52) = sub_355574;
    }
    sub_35655E(a2);
    result = *(_DWORD **)(v4 + 48);
  }
  else
  {
    result = sub_351894(0, 0x54u);
  }
  if ( result != nullptr )
  {
    v6 = *((unsigned __int8 *)result + 76);
    if ( *((_BYTE *)result + 76) == 0 )
    {
      result[4] = v6;
      result[3] = v6;
      result[2] = v6;
      result[5] = v6;
      result[8] = v6;
      result[7] = v6;
      result[6] = v6;
      result[9] = v6;
      result[12] = v6;
      result[11] = v6;
      result[10] = v6;
      result[13] = v6;
      result[16] = v6;
      result[15] = v6;
      result[14] = v6;
      result[17] = v6;
      *((_BYTE *)result + 77) = 1;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 64) = 1;
  }
  return result;
}


//======================================================================
// sub_357E18
// address: 0x00357E18   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_357E18(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v8; // r3
  int v9; // r7

  v4 = *(_DWORD *)(a1 + 4);
  sub_3574C2(a1);
  if ( (*(_WORD *)(v4 + 22) & 2) != 0 )
  {
    sub_35655E(a1);
    return 8;
  }
  else
  {
    if ( a3 < 0 )
      a3 = *(_DWORD *)(v4 + 32) - *(_DWORD *)(v4 + 36);
    v8 = 65024;
    if ( (unsigned int)(a2 - 512) <= 0xFE00 && ((a2 - 1) & a2) == 0 )
    {
      *(_DWORD *)(v4 + 32) = a2;
      sub_351FB4(*(_DWORD *)(v4 + 80));
      *(_DWORD *)(v4 + 80) = 0;
    }
    v9 = sub_356DE0(*(_DWORD *)v4, v4 + 32, a3, v8);
    *(_DWORD *)(v4 + 36) = *(_DWORD *)(v4 + 32) - (unsigned __int16)a3;
    if ( a4 != 0 )
      *(_WORD *)(v4 + 22) |= 2u;
    sub_35655E(a1);
    return v9;
  }
}


//======================================================================
// sub_357E98
// address: 0x00357E98   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_357E98(int a1, int a2, char *a3, int a4, char *a5)
{
  size_t v8; // r4
  int result; // r0
  int i; // r3
  char *v11; // r7
  int j; // r4

  v8 = a4;
  if ( a4 > a2 )
    v8 = a2;
  result = j_memcmp(a3, a5, v8);
  if ( result == 0 )
  {
    if ( a1 == 0 )
      return a2 - a4;
    for ( i = a2 - v8; i > 0; --i )
    {
      if ( a3[v8 - 1 + i] != 32 )
        return a2 - a4;
    }
    if ( i != 0 )
      return a2 - a4;
    v11 = &a5[v8];
    for ( j = a4 - v8; j > 0; --j )
    {
      if ( v11[j - 1] != 32 )
        return a2 - a4;
    }
    if ( j != 0 )
      return a2 - a4;
  }
  return result;
}


//======================================================================
// sub_357EF8
// address: 0x00357EF8   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_357EF8(int a1, _DWORD *a2)
{
  int *v3; // r3
  int result; // r0

  if ( *(_BYTE *)(a1 + 12) != 0 || *(_DWORD *)(a1 + 208) != 0 )
  {
    *a2 = 1;
    return 0;
  }
  else
  {
    v3 = **(int ***)(a1 + 60);
    if ( *(_BYTE *)(a1 + 4) != 0 || *v3 > 1 && v3[13] != 0 )
    {
      sub_34CA24(*(int **)(a1 + 64));
      result = sub_3570B4(a1);
      if ( result == 0 )
      {
        *(_BYTE *)(a1 + 5) = 5;
        *(_BYTE *)(a1 + 15) = 0;
      }
    }
    else
    {
      return 14;
    }
  }
  return result;
}


//======================================================================
// sub_357F48
// address: 0x00357F48   size: 0x9A (154 bytes)
//======================================================================
__int64 __fastcall sub_357F48(int a1, int *a2, unsigned __int8 *a3)
{
  unsigned __int8 *v3; // r6
  unsigned __int8 *v4; // r7
  int v5; // r4
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r3
  __int64 v12; // [sp+0h] [bp-Ch]

  v3 = a3;
  v4 = a3;
  HIDWORD(v12) = a2;
  v5 = *a2;
  while ( 1 )
  {
    LODWORD(v12) = v4 - a3;
    v7 = *v4;
    if ( *v4 == 0 || (byte_44AA64[v7] & 6) == 0 && v7 != 95 )
      break;
    ++v4;
  }
  if ( (byte_44AA64[*a3] & 4) != 0
    || (int)v12 > 1 && sub_3537E0(a3, v12) != 27
    || (v8 = *v4, *v4 != 0)
    || (_DWORD)v12 == 0 )
  {
    *(_BYTE *)(a1 + v5) = 34;
    v8 = 1;
    ++v5;
  }
  while ( *v3 != 0 )
  {
    *(_BYTE *)(a1 + v5) = *v3;
    v9 = v5 + 1;
    if ( *v3 == 34 )
    {
      *(_BYTE *)(a1 + v9) = 34;
      v9 = v5 + 2;
    }
    ++v3;
    v5 = v9;
  }
  v10 = v5;
  if ( v8 != 0 )
  {
    ++v5;
    *(_BYTE *)(a1 + v10) = 34;
  }
  *(_BYTE *)(a1 + v5) = 0;
  *(_DWORD *)HIDWORD(v12) = v5;
  return v12;
}


//======================================================================
// sub_357FEC
// address: 0x00357FEC   size: 0x23C (572 bytes)
//======================================================================
int __fastcall sub_357FEC(_DWORD **a1, unsigned int a2, int a3)
{
  _DWORD *v3; // r6
  unsigned int v5; // r7
  int i; // r5
  char *v7; // r2
  unsigned int v8; // r3
  int v9; // r3
  unsigned int v10; // r7
  unsigned int j; // r5
  _DWORD *v12; // r0
  int k; // r5
  _DWORD *v14; // r1
  int v15; // r3
  _DWORD *v16; // r3
  int v17; // r7
  int v18; // r1
  int v19; // r3
  _DWORD *v20; // r2
  unsigned int v22; // [sp+4h] [bp-18h]
  _DWORD *v23; // [sp+8h] [bp-14h]
  int v26; // [sp+14h] [bp-8h]

  v3 = *a1;
  sqlite3_mutex_enter(**a1);
  v5 = (unsigned int)a1[10];
  if ( v5 != 0 )
  {
    for ( i = a1[11][a2 % v5]; i != 0; i = *(_DWORD *)(i + 16) )
    {
      if ( *(_DWORD *)(i + 8) == a2 )
      {
        if ( *(_BYTE *)(i + 12) == 0 )
          sub_34DD74(i);
        goto LABEL_58;
      }
    }
  }
  if ( a3 == 0 )
    goto LABEL_57;
  v7 = (char *)a1[9];
  if ( a3 == 1 )
  {
    v8 = v7 - (char *)a1[8];
    if ( v8 >= v3[3] || v8 >= (unsigned int)a1[6] )
      goto LABEL_57;
    v9 = dword_5592C0 != 0 && (int)a1[2] + (int)a1[1] <= dword_5592BC ? dword_5592DC : dword_559284;
    if ( v9 != 0 )
      goto LABEL_57;
  }
  if ( (unsigned int)v7 >= v5 )
  {
    v10 = 2 * v5;
    if ( v10 <= 0xFF )
      v10 = 256;
    sqlite3_mutex_leave(**a1);
    if ( a1[10] != nullptr )
      sub_34CB1C();
    v23 = sub_351CC4(4 * v10);
    if ( a1[10] != nullptr )
      sub_34CB30();
    sqlite3_mutex_enter(**a1);
    if ( v23 != nullptr )
    {
      for ( j = 0; ; j = v22 + 1 )
      {
        v22 = j;
        v12 = a1[11];
        if ( j >= (unsigned int)a1[10] )
          break;
        for ( k = v12[j]; k != 0; k = v26 )
        {
          v26 = *(_DWORD *)(k + 16);
          v14 = &v23[*(_DWORD *)(k + 8) % v10];
          *(_DWORD *)(k + 16) = *v14;
          *v14 = k;
        }
      }
      sqlite3_free(v12);
      a1[10] = (_DWORD *)v10;
      a1[11] = v23;
    }
    if ( a1[11] == nullptr )
      goto LABEL_57;
  }
  if ( a1[3] != nullptr )
  {
    i = v3[6];
    if ( i != 0 )
    {
      if ( (_DWORD *)((char *)a1[9] + 1) >= a1[5]
        || v3[4] >= v3[1]
        || (dword_5592C0 == 0 || (int)a1[2] + (int)a1[1] > dword_5592BC ? (v15 = dword_559284) : (v15 = dword_5592DC),
            v15 != 0) )
      {
        sub_34DDA8((_DWORD *)v3[6]);
        sub_34DD74(i);
        v16 = *(_DWORD **)(i + 20);
        if ( (_DWORD *)(v16[1] + v16[2]) == (_DWORD *)((char *)a1[2] + (_DWORD)a1[1]) )
        {
          v3[4] += (char *)a1[3] - v16[3];
          goto LABEL_55;
        }
        sub_352038((unsigned int *)i);
      }
    }
  }
  if ( a3 == 1 )
    sub_34CB1C();
  sqlite3_mutex_leave(**a1);
  v17 = sub_351C3C((int)a1[2] + (_DWORD)a1[1] + 32);
  i = (int)a1[1] + v17;
  sqlite3_mutex_enter(**a1);
  if ( v17 != 0 )
  {
    *(_DWORD *)i = v17;
    *(_DWORD *)(i + 4) = i + 32;
    if ( a1[3] != nullptr )
      ++(*a1)[4];
  }
  else
  {
    i = 0;
  }
  if ( a3 == 1 )
    sub_34CB30();
  if ( i == 0 )
  {
LABEL_57:
    i = 0;
    goto LABEL_60;
  }
LABEL_55:
  v18 = a2 % (unsigned int)a1[10];
  a1[9] = (_DWORD *)((char *)a1[9] + 1);
  *(_DWORD *)(i + 8) = a2;
  v19 = a1[11][v18];
  *(_BYTE *)(i + 12) = 1;
  v20 = *(_DWORD **)(i + 4);
  *(_DWORD *)(i + 16) = v19;
  *(_DWORD *)(i + 20) = a1;
  *(_DWORD *)(i + 28) = 0;
  *(_DWORD *)(i + 24) = 0;
  *v20 = 0;
  a1[11][v18] = i;
LABEL_58:
  if ( a2 > (unsigned int)a1[7] )
    a1[7] = (_DWORD *)a2;
LABEL_60:
  sqlite3_mutex_leave(*v3);
  return i;
}


//======================================================================
// sub_35825C
// address: 0x0035825C   size: 0x84 (132 bytes)
//======================================================================
__int64 __fastcall sub_35825C(__int64 a1, int a2, int a3)
{
  unsigned __int8 *v3; // r4
  int v5; // r5
  int v6; // r3
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v3 = (unsigned __int8 *)a1;
  if ( (_DWORD)a1 == 0 )
    v3 = (unsigned __int8 *)&unk_3FB8EA;
  LODWORD(a1) = 0;
  while ( *v3 != 0 && (int)a1 < SHIDWORD(a1) )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = *v3;
      if ( (unsigned int)(v6 - 48) > 9 )
        break;
      v5 = 10 * v5 - 48 + v6;
      ++v3;
    }
    *(_DWORD *)(a2 + 4 * a1) = v5;
    LODWORD(a1) = a1 + 1;
    v3 += *v3 == 32;
  }
  if ( j_strcmp((const char *)v3, "unordered") == 0 )
  {
    *(_BYTE *)(a3 + 55) |= 4u;
  }
  else if ( !sqlite3_strglob((int)"sz=[0-9]*", v3) )
  {
    HIDWORD(v8) = 0;
    sub_34D6F8(v3 + 3, (_DWORD *)&v8 + 1);
    *(_WORD *)(a3 + 48) = sub_34D98C(SHIDWORD(v8));
  }
  return v8;
}


//======================================================================
// sub_3582EC
// address: 0x003582EC   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_3582EC(int a1, int a2, unsigned __int8 **a3)
{
  int **v5; // r6
  unsigned __int8 *v6; // r1
  int **v7; // r0
  int v8; // r4
  __int64 v9; // r0
  int v11; // [sp+0h] [bp-3Ch] BYREF
  __int16 v12; // [sp+30h] [bp-Ch]

  if ( a3 != nullptr && *a3 != nullptr && a3[2] != nullptr )
  {
    v5 = sub_34EAFE(*(_DWORD *)a1, *a3, *(_BYTE **)(a1 + 4));
    if ( v5 != nullptr )
    {
      v6 = a3[1];
      if ( v6 != nullptr )
      {
        if ( sqlite3_stricmp(*a3, v6) != 0 )
          v7 = sub_34EB58(*(_DWORD *)a1, a3[1], *(_BYTE **)(a1 + 4));
        else
          v7 = (int **)sub_35344C((int)v5[2]);
        v8 = (int)v7;
      }
      else
      {
        v8 = 0;
      }
      LODWORD(v9) = a3[2];
      if ( v8 != 0 )
      {
        HIDWORD(v9) = *(unsigned __int16 *)(v8 + 50) + 1;
        sub_35825C(v9, *(_DWORD *)(v8 + 8), v8);
        if ( *(_DWORD *)(v8 + 36) == 0 )
          v5[7] = **(int ***)(v8 + 8);
      }
      else
      {
        v12 = *((_WORD *)v5 + 21);
        HIDWORD(v9) = 1;
        sub_35825C(v9, (int)(v5 + 7), (int)&v11);
        *((_WORD *)v5 + 21) = v12;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_358B94
// address: 0x00358B94   size: 0x11C (284 bytes)
//======================================================================
int __fastcall sub_358B94(int a1)
{
  _BYTE **v3; // r3
  int *v4; // r0
  int *v5; // r7
  _BYTE *v6; // r5
  int v7; // r6
  int i; // r3
  int v9; // r2
  int v10; // r1
  __int64 v11; // r0
  int v12; // r3
  unsigned int v13; // r7
  int v14; // r12
  int *v16; // [sp+Ch] [bp-10h]

  v3 = (_BYTE **)(a1 + 200);
  v4 = (int *)(a1 + 152);
  v5 = (int *)(a1 + 148);
  v6 = *v3;
  v7 = *v4;
  v16 = v4;
  if ( *v4 > (unsigned int)*v5 )
    v7 = *v5;
  for ( i = 0; i < *(_DWORD *)(a1 + 96); ++i )
  {
    v9 = *(_DWORD *)(a1 + 92) + 48 * i;
    if ( *(_QWORD *)(v9 + 8) == 0 )
    {
      v10 = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(v9 + 12) = v10;
    }
  }
  v11 = sub_34DF9E(a1);
  v12 = *(unsigned __int8 *)(a1 + 7);
  *(_QWORD *)(a1 + 72) = v11;
  *(_QWORD *)(a1 + 80) = v11;
  if ( v12 != 0 || *(_BYTE *)(a1 + 5) == 4 || (sub_34CA90(*(_DWORD *)(a1 + 60)) & 0x200) != 0 )
  {
    *(_QWORD *)v6 = unk_44AC1C;
    v6[8] = -1;
    v6[9] = -1;
    v6[10] = -1;
    v6[11] = -1;
  }
  else
  {
    j_memset(v6, 0, 0xCu);
  }
  sqlite3_randomness(4, (_BYTE *)(a1 + 48));
  sub_34D8F0(v6 + 12, *(_DWORD *)(a1 + 48));
  sub_34D8F0(v6 + 16, *(_DWORD *)(a1 + 28));
  sub_34D8F0(v6 + 20, *v5);
  sub_34D8F0(v6 + 24, *v16);
  j_memset(v6 + 28, 0, v7 - 28);
  v13 = 0;
  while ( v13 < *(_DWORD *)(a1 + 148) )
  {
    v14 = sub_34CA4C(*(_DWORD *)(a1 + 64));
    *(_QWORD *)(a1 + 72) += (unsigned int)v7;
    v13 += v7;
    if ( v14 != 0 )
      return v14;
  }
  return 0;
}


//======================================================================
// sub_358CB4
// address: 0x00358CB4   size: 0x20A (522 bytes)
//======================================================================
int __fastcall sub_358CB4(int a1)
{
  int v1; // r4
  int result; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  int v6; // r6
  int v7; // r5
  int v8; // r0
  unsigned int v9; // r5
  int v10; // r1
  int v11; // r3
  _DWORD *v12; // r0
  int v13; // r5
  unsigned int v14; // r3
  int *v15; // [sp+Ch] [bp-20h]
  int v16; // [sp+10h] [bp-1Ch]
  __int64 v17; // [sp+10h] [bp-1Ch]
  int i; // [sp+18h] [bp-14h]

  v1 = *(_DWORD *)(a1 + 16);
  if ( *(_BYTE *)(v1 + 15) == 2 )
  {
    result = *(_DWORD *)(v1 + 40);
    v16 = *(_DWORD *)v1;
    if ( result != 0 )
      return result;
    if ( *(_DWORD *)(v1 + 208) == 0 && *(_BYTE *)(v1 + 5) != 2 )
    {
      v4 = sub_351CDC(*(_DWORD *)(v1 + 24));
      *(_DWORD *)(v1 + 56) = v4;
      if ( v4 == nullptr )
        return 7;
      v5 = *(_DWORD **)(v1 + 64);
      if ( *v5 == 0 )
      {
        if ( *(_BYTE *)(v1 + 5) == 4 )
        {
          sub_350180(v5);
        }
        else
        {
          if ( *(_BYTE *)(v1 + 12) != 0 )
            v6 = 4110;
          else
            v6 = 2054;
          if ( *(_BYTE *)(v1 + 12) == 0 && *(_DWORD *)(v1 + 24) != 0 )
          {
            v8 = sub_34CA7C(*(_DWORD *)(v1 + 60));
            v7 = v8;
            if ( v8 != 12 && v8 != 0 )
              goto LABEL_21;
          }
          v7 = sub_34CAB4(v16, *(_DWORD *)(v1 + 172), *(_DWORD *)(v1 + 64), v6);
          if ( v7 != 0 )
            goto LABEL_21;
        }
      }
      *(_DWORD *)(v1 + 44) = 0;
      *(_DWORD *)(v1 + 72) = 0;
      *(_DWORD *)(v1 + 76) = 0;
      *(_BYTE *)(v1 + 18) = 0;
      *(_DWORD *)(v1 + 80) = 0;
      *(_DWORD *)(v1 + 84) = 0;
      v7 = sub_358B94(v1);
      if ( v7 != 0 )
      {
LABEL_21:
        sub_351F88(*(_DWORD *)(v1 + 56));
        *(_DWORD *)(v1 + 56) = 0;
        return v7;
      }
    }
    *(_BYTE *)(v1 + 15) = 3;
  }
  sub_34DD1C(a1);
  v9 = *(_DWORD *)(a1 + 20);
  if ( sub_352940(*(_DWORD *)(v1 + 56), v9) != 0 )
  {
    if ( *(_DWORD *)(v1 + 96) == 0 || sub_35295C(a1) == 0 )
      goto LABEL_25;
    goto LABEL_41;
  }
  if ( *(_DWORD *)(v1 + 208) != 0 )
  {
LABEL_41:
    if ( *(int *)(v1 + 96) > 0 && sub_35295C(a1) != 0 )
    {
      result = sub_357388(a1);
LABEL_44:
      v14 = *(_DWORD *)(a1 + 20);
      if ( *(_DWORD *)(v1 + 24) < v14 )
        *(_DWORD *)(v1 + 24) = v14;
      return result;
    }
LABEL_25:
    result = 0;
    goto LABEL_44;
  }
  if ( v9 > *(_DWORD *)(v1 + 28) || **(_DWORD **)(v1 + 64) == 0 )
  {
    if ( *(_BYTE *)(v1 + 15) != 4 )
      *(_WORD *)(a1 + 24) |= 4u;
    goto LABEL_41;
  }
  v10 = *(_DWORD *)(v1 + 76);
  v11 = *(_DWORD *)(v1 + 152);
  LODWORD(v17) = *(_DWORD *)(v1 + 72);
  HIDWORD(v17) = v10;
  for ( i = *(_DWORD *)(v1 + 48); ; i += *(unsigned __int8 *)(*(_DWORD *)(a1 + 4) + v11) )
  {
    v11 -= 200;
    if ( v11 <= 0 )
      break;
  }
  *(_WORD *)(a1 + 24) |= 4u;
  result = sub_34DF58(*(_DWORD *)(v1 + 64), v10, v17, v10, v9);
  if ( result == 0 )
  {
    v15 = (int *)(v1 + 152);
    result = sub_34CA4C(*(_DWORD *)(v1 + 64));
    if ( result == 0 )
    {
      result = sub_34DF58(*(_DWORD *)(v1 + 64), *v15, *v15 + v17 + 4, (unsigned __int64)(*v15 + v17 + 4) >> 32, i);
      if ( result == 0 )
      {
        *(_QWORD *)(v1 + 72) += *v15 + 8;
        v12 = *(_DWORD **)(v1 + 56);
        ++*(_DWORD *)(v1 + 44);
        v13 = sub_355C78(v12, *(_DWORD *)(a1 + 20));
        result = sub_355D9E(v1, *(_DWORD *)(a1 + 20)) | v13;
        if ( result == 0 )
          goto LABEL_41;
      }
    }
  }
  return result;
}


//======================================================================
// sub_358EC8
// address: 0x00358EC8   size: 0x168 (360 bytes)
//======================================================================
int __fastcall sub_358EC8(int a1, int a2)
{
  int result; // r0
  __int16 v4; // r5
  int v5; // r3
  int v6; // r2
  int *v7; // r3
  _QWORD v9[2]; // [sp+20h] [bp-1Ch] BYREF
  _BYTE v10[4]; // [sp+30h] [bp-Ch] BYREF

  if ( *(_DWORD *)(a1 + 208) != 0 || (result = sub_35708A(a1, 4)) == 0 )
  {
    if ( *(_BYTE *)(a1 + 7) != 0 )
    {
LABEL_30:
      v7 = *(int **)(a1 + 204);
      for ( result = *v7; result != 0; result = *(_DWORD *)(result + 32) )
        *(_WORD *)(result + 24) &= ~4u;
      v7[2] = v7[1];
      *(_BYTE *)(a1 + 15) = 4;
      return result;
    }
    if ( **(_DWORD **)(a1 + 64) == 0 || *(_BYTE *)(a1 + 5) == 4 )
    {
      v6 = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 72);
      *(_DWORD *)(a1 + 84) = v6;
      goto LABEL_30;
    }
    v4 = sub_34CA90(*(_DWORD *)(a1 + 60));
    if ( (v4 & 0x200) != 0
      || ((v9[1] = qword_44AC1C,
           sub_34D8F0(v10, *(_DWORD *)(a1 + 44)),
           sub_34DF9E(a1),
           (result = sub_34CA3A(*(_DWORD *)(a1 + 64))) == 0)
       && (j_memcmp(v9, &qword_44AC1C, 8u) != 0 || (result = sub_34CA4C(*(_DWORD *)(a1 + 64))) == 0)
       || result == 522)
      && (*(_BYTE *)(a1 + 8) == 0 || (v4 & 0x400) != 0 || (result = sub_34CA68(*(_DWORD *)(a1 + 64))) == 0)
      && (result = sub_34CA4C(*(_DWORD *)(a1 + 64))) == 0 )
    {
      if ( (v4 & 0x400) != 0 || (result = sub_34CA68(*(_DWORD *)(a1 + 64))) == 0 )
      {
        v5 = *(_DWORD *)(a1 + 76);
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 72);
        *(_DWORD *)(a1 + 84) = v5;
        if ( a2 == 0 )
          goto LABEL_30;
        if ( (v4 & 0x200) != 0 )
          goto LABEL_30;
        *(_DWORD *)(a1 + 44) = 0;
        result = sub_358B94(a1);
        if ( result == 0 )
          goto LABEL_30;
      }
    }
  }
  return result;
}


//======================================================================
// sub_359040
// address: 0x00359040   size: 0x30 (48 bytes)
//======================================================================
__int64 __fastcall sub_359040(__int64 a1)
{
  int v1; // r4
  __int64 v2; // r0
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  v4 = a1;
  v1 = a1;
  sqlite3_randomness(8, &v4);
  HIDWORD(v2) = HIDWORD(v4);
  if ( v4 < 0 )
  {
    v2 = -__SPAIR64__((unsigned int)(2 * HIDWORD(v4)) >> 1, v4);
    v4 = -__SPAIR64__((unsigned int)(2 * HIDWORD(v4)) >> 1, v4);
  }
  sqlite3_result_int64(v1, SHIDWORD(v2), v4, SHIDWORD(v4));
  return v4;
}


//======================================================================
// sub_359140
// address: 0x00359140   size: 0x3C (60 bytes)
//======================================================================
int sub_359140()
{
  j_memset(&dword_55929C, 0, 0x44u);
  if ( dword_47163C != 0 )
  {
    dword_55929C = sqlite3_mutex_alloc(6);
    dword_5592D0 = sqlite3_mutex_alloc(7);
  }
  dword_5592A8 = 10;
  dword_5592B8 = 1;
  return 0;
}


//======================================================================
// sub_3591A0
// address: 0x003591A0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_3591A0(int a1)
{
  int v1; // r3
  int v3; // r1
  int v4; // r0
  void *v5; // r0

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 != 0 )
  {
    *(_BYTE *)(v1 + *(_DWORD *)(a1 + 12)) = 0;
    if ( *(_BYTE *)(a1 + 24) != 0 && *(_DWORD *)(a1 + 8) == *(_DWORD *)(a1 + 4) )
    {
      v3 = *(_DWORD *)(a1 + 12);
      if ( *(_BYTE *)(a1 + 24) == 1 )
        v4 = sub_3516AC(*(_DWORD *)a1, v3 + 1);
      else
        v4 = sqlite3_malloc(v3 + 1);
      *(_DWORD *)(a1 + 8) = v4;
      v5 = *(void **)(a1 + 8);
      if ( v5 != nullptr )
      {
        j_memcpy(v5, *(const void **)(a1 + 4), *(_DWORD *)(a1 + 12) + 1);
      }
      else
      {
        *(_BYTE *)(a1 + 25) = 1;
        *(_DWORD *)(a1 + 16) = 0;
      }
    }
  }
  return *(_DWORD *)(a1 + 8);
}


//======================================================================
// sub_3591F8
// address: 0x003591F8   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_3591F8(int a1, char *a2, int a3)
{
  signed int v5; // r5
  __int64 v6; // r2
  int v7; // r7
  _DWORD *v8; // r0
  _DWORD *v10; // [sp+0h] [bp-14h]

  while ( 1 )
  {
    if ( a3 <= 0 )
      return 0;
    v5 = a3;
    v10 = *(_DWORD **)(a1 + 16);
    v6 = *(_QWORD *)(a1 + 8) % 1020LL;
    v7 = v6;
    if ( a3 > 1020 - (int)v6 )
      v5 = 1020 - v6;
    if ( (_DWORD)v6 == 0 )
      break;
LABEL_10:
    a3 -= v5;
    j_memcpy((void *)(*(_DWORD *)(a1 + 16) + v7 + 4), a2, v5);
    a2 += v5;
    *(_QWORD *)(a1 + 8) += v5;
  }
  v8 = (_DWORD *)sqlite3_malloc(1024);
  if ( v8 != nullptr )
  {
    *v8 = 0;
    if ( v10 != nullptr )
      *v10 = v8;
    else
      *(_DWORD *)(a1 + 4) = v8;
    *(_DWORD *)(a1 + 16) = v8;
    goto LABEL_10;
  }
  return 3082;
}


//======================================================================
// sub_359290
// address: 0x00359290   size: 0x34 (52 bytes)
//======================================================================
int *__fastcall sub_359290(_DWORD *a1, int a2)
{
  int *v4; // r0
  int *v5; // r4

  v4 = (int *)sqlite3_malloc(*a1 + 32);
  v5 = v4;
  if ( v4 != nullptr )
  {
    j_memset(v4, 0, *a1 + 32);
    v5[6] = (int)(v5 + 8);
    v5[4] = 1;
    *v5 = a2;
    v5[5] = 1;
    sub_34FD6A(a2);
  }
  return v5;
}


//======================================================================
// sub_3592C4
// address: 0x003592C4   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3592C4(int a1, _DWORD *a2)
{
  _DWORD *v4; // r4
  int result; // r0

  v4 = (_DWORD *)sqlite3_malloc(24);
  result = 7;
  if ( v4 != nullptr )
  {
    j_memset(v4, 0, 0x18u);
    *v4 = a1;
    result = 0;
  }
  *a2 = v4;
  return result;
}


//======================================================================
// sub_3595BC
// address: 0x003595BC   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_3595BC(int a1, unsigned int a2, int a3)
{
  _BYTE *v4; // r6
  _DWORD *v5; // r4
  int v6; // r0
  void *v7; // r0
  void *v8; // r7

  v4 = (_BYTE *)(a1 + 64);
  v5 = nullptr;
  if ( *(_BYTE *)(a1 + 64) == 0 )
  {
    if ( a2 == 0 )
      return sub_3516AC(a1, a3);
    if ( a2 < *(_DWORD *)(a1 + 268) || a2 >= *(_DWORD *)(a1 + 272) )
    {
      v6 = sqlite3_realloc(a2, a3);
      if ( v6 == 0 )
        *v4 = 1;
      return v6;
    }
    v5 = (_DWORD *)a2;
    if ( a3 > *(unsigned __int16 *)(a1 + 240) )
    {
      v7 = (void *)sub_3516AC(a1, a3);
      v8 = v7;
      if ( v7 != nullptr )
      {
        j_memcpy(v7, v5, *(unsigned __int16 *)(a1 + 240));
        sub_354940((_DWORD *)a1, v5);
      }
      return (int)v8;
    }
  }
  return (int)v5;
}


//======================================================================
// sub_359628
// address: 0x00359628   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_359628(_DWORD *a1, _DWORD *a2, int a3)
{
  int v5; // r4

  v5 = sub_3595BC((int)a1, (unsigned int)a2, a3);
  if ( v5 == 0 )
    sub_354940(a1, a2);
  return v5;
}


//======================================================================
// sub_359644
// address: 0x00359644   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall sub_359644(int *a1, int a2, int a3)
{
  int v4; // r1
  _DWORD *v7; // r0
  _DWORD *v8; // r1
  int v9; // r0
  int v10; // r1
  const void *v12; // r1
  void *v13; // r0
  __int16 v14; // r2

  v4 = a1[9];
  if ( v4 != 0 && sub_354918(*a1, v4) >= a2 )
    goto LABEL_14;
  if ( a2 <= 31 )
    a2 = 32;
  v7 = (_DWORD *)*a1;
  if ( a3 != 0 && (v8 = (_DWORD *)a1[1]) == (_DWORD *)a1[9] )
  {
    v9 = sub_359628(v7, v8, a2);
    a3 = 0;
    a1[9] = v9;
    a1[1] = v9;
  }
  else
  {
    sub_354940(v7, (_DWORD *)a1[9]);
    a1[9] = sub_3516AC(*a1, a2);
  }
  if ( a1[9] != 0 )
  {
LABEL_14:
    v12 = (const void *)a1[1];
    if ( v12 != nullptr && a3 != 0 )
    {
      v13 = (void *)a1[9];
      if ( v12 != v13 )
        j_memcpy(v13, v12, a1[6]);
    }
    if ( (a1[7] & 0x400) != 0 )
      ((void (__fastcall *)(int))a1[8])(a1[1]);
    a1[1] = a1[9];
    v14 = *((_WORD *)a1 + 14);
    a1[8] = 0;
    *((_WORD *)a1 + 14) = v14 & 0xE3FF;
    return 0;
  }
  else
  {
    if ( (a1[7] & 0x2460) != 0 )
      sub_35572C(a1, v10);
    a1[1] = 0;
    *((_WORD *)a1 + 14) = 1;
    return 7;
  }
}


//======================================================================
// sub_3596F0
// address: 0x003596F0   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_3596F0(int a1)
{
  int v2; // r5
  int v3; // r1

  v2 = 0;
  if ( (*(_WORD *)(a1 + 28) & 0x4000) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 16);
    if ( v3 <= 0 )
      v3 = 1;
    v2 = sub_359644((int *)a1, v3, 1);
    if ( v2 != 0 )
    {
      return 7;
    }
    else
    {
      j_memset((void *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(a1 + 24)), 0, *(_DWORD *)(a1 + 16));
      *(_DWORD *)(a1 + 24) += *(_DWORD *)(a1 + 16);
      *(_WORD *)(a1 + 28) &= 0xBDFFu;
    }
  }
  return v2;
}


//======================================================================
// sub_359740
// address: 0x00359740   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_359740(int a1)
{
  int result; // r0

  if ( (*(_WORD *)(a1 + 28) & 0x4000) != 0 )
    sub_3596F0(a1);
  result = 0;
  if ( (*(_WORD *)(a1 + 28) & 0x12) != 0 && *(_DWORD *)(a1 + 4) != *(_DWORD *)(a1 + 36) )
  {
    result = sub_359644((int *)a1, *(_DWORD *)(a1 + 24) + 2, 1);
    if ( result != 0 )
    {
      return 7;
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(a1 + 24)) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(a1 + 24) + 1) = 0;
      *(_WORD *)(a1 + 28) |= 0x200u;
    }
  }
  return result;
}


//======================================================================
// sub_359790
// address: 0x00359790   size: 0x378 (888 bytes)
//======================================================================
int __fastcall sub_359790(int a1, int a2)
{
  __int16 v2; // r3
  int result; // r0
  int v5; // r3
  _BYTE *v6; // r3
  _BYTE *v7; // r2
  char v8; // r0
  unsigned int v9; // r1
  int v10; // r1
  unsigned __int8 *v11; // r4
  int v12; // r7
  int v13; // r0
  int v14; // r6
  int v15; // r3
  _BYTE *v16; // r2
  unsigned int v17; // r3
  unsigned __int8 *v18; // r1
  int v19; // r4
  unsigned int v20; // r3
  unsigned __int8 *v21; // r1
  int v22; // r4
  unsigned __int8 *v23; // r3
  unsigned __int8 *v24; // r0
  unsigned int v25; // r2
  unsigned int v26; // r4
  unsigned __int8 *v27; // r0
  unsigned int v28; // r2
  unsigned int v29; // r4
  __int16 v30; // r2
  unsigned __int8 *v31; // [sp+4h] [bp-10h]
  int v32; // [sp+8h] [bp-Ch]

  v2 = *(_WORD *)(a1 + 28);
  result = 0;
  if ( (v2 & 2) == 0 )
    return result;
  v5 = *(unsigned __int8 *)(a1 + 30);
  if ( v5 == a2 )
    return result;
  v32 = (unsigned __int8)a2;
  if ( v5 == 1 )
  {
    if ( (unsigned __int8)a2 != 1 )
    {
      v10 = 2 * (*(_DWORD *)(a1 + 24) + 1);
      goto LABEL_15;
    }
  }
  else if ( (unsigned __int8)a2 != 1 )
  {
    if ( sub_359740(a1) == 0 )
    {
      v6 = *(_BYTE **)(a1 + 4);
      v7 = &v6[*(_DWORD *)(a1 + 24) & 0xFFFFFFFE];
      while ( v6 < v7 )
      {
        v8 = v6[1];
        v6[1] = *v6;
        *v6 = v8;
        v6 += 2;
      }
      *(_BYTE *)(a1 + 30) = v32;
      return 0;
    }
    return 7;
  }
  v9 = *(_DWORD *)(a1 + 24) & 0xFFFFFFFE;
  *(_DWORD *)(a1 + 24) = v9;
  v10 = 2 * v9 + 1;
LABEL_15:
  v11 = *(unsigned __int8 **)(a1 + 4);
  v12 = *(_DWORD *)(a1 + 24);
  v13 = sub_3516AC(*(_DWORD *)a1, v10);
  v14 = v13;
  if ( v13 == 0 )
    return 7;
  v15 = *(unsigned __int8 *)(a1 + 30);
  v31 = &v11[v12];
  if ( v15 == 1 )
  {
    v16 = (_BYTE *)v13;
    if ( v32 == 2 )
    {
      while ( 1 )
      {
        if ( v11 >= v31 )
          goto LABEL_46;
        v17 = *v11;
        v18 = v11 + 1;
        if ( v17 <= 0xBF )
          goto LABEL_29;
        v17 = byte_44A924[v17 - 192];
        while ( v18 != v31 && (*v18 & 0xC0) == 0x80 )
        {
          v19 = *v18++ & 0x3F;
          v17 = v19 + (v17 << 6);
        }
        if ( v17 <= 0x7F || v17 >> 11 << 11 == 55296 || (v17 & 0xFFFFFFFE) == 0xFFFE )
          break;
        if ( v17 <= 0xFFFF )
          goto LABEL_29;
        v16[2] = v17;
        *v16 = ((v17 >> 10) & 0x3F) + (((v17 - 0x10000) >> 10) & 0xC0);
        v16[1] = (((v17 - 0x10000) >> 18) & 3) - 40;
        v16[3] = (BYTE1(v17) & 3) - 36;
        v16 += 4;
LABEL_31:
        v11 = v18;
      }
      LOWORD(v17) = -3;
LABEL_29:
      *(_WORD *)v16 = v17;
      v16 += 2;
      goto LABEL_31;
    }
    while ( 1 )
    {
      if ( v11 >= v31 )
      {
LABEL_46:
        *(_DWORD *)(a1 + 24) = &v16[-v13];
        v23 = v16 + 1;
        *v16 = 0;
        goto LABEL_76;
      }
      v20 = *v11;
      v21 = v11 + 1;
      if ( v20 <= 0xBF )
        goto LABEL_39;
      v20 = byte_44A924[v20 - 192];
      while ( v21 != v31 && (*v21 & 0xC0) == 0x80 )
      {
        v22 = *v21++ & 0x3F;
        v20 = v22 + (v20 << 6);
      }
      if ( v20 <= 0x7F || v20 >> 11 << 11 == 55296 || (v20 & 0xFFFFFFFE) == 0xFFFE )
        break;
      if ( v20 <= 0xFFFF )
        goto LABEL_39;
      v16[3] = v20;
      *v16 = (((v20 - 0x10000) >> 18) & 3) - 40;
      v16[1] = ((v20 >> 10) & 0x3F) + (((v20 - 0x10000) >> 10) & 0xC0);
      v16[2] = (BYTE1(v20) & 3) - 36;
      v16 += 4;
LABEL_40:
      v11 = v21;
    }
    LOWORD(v20) = -3;
LABEL_39:
    *v16 = BYTE1(v20);
    v16[1] = v20;
    v16 += 2;
    goto LABEL_40;
  }
  if ( v15 != 2 )
  {
    v23 = (unsigned __int8 *)v13;
    while ( 1 )
    {
      if ( v11 >= v31 )
        goto LABEL_75;
      v27 = v11 + 2;
      v28 = (*v11 << 8) + v11[1];
      if ( v28 - 55296 <= 0x7FF )
      {
        if ( v27 < v31 )
        {
          v27 = v11 + 4;
          v28 = (unsigned __int16)((_WORD)v28 << 10) + (((v11[2] << 8) + v11[3]) & 0x3FF) + (((v28 & 0x3C0) + 64) << 10);
        }
      }
      else
      {
        if ( v28 <= 0x7F )
        {
          *v23++ = v11[1];
          goto LABEL_65;
        }
        if ( v28 <= 0x7FF )
        {
          *v23 = (v28 >> 6) - 64;
          v23[1] = (v28 & 0x3F) + 0x80;
          v23 += 2;
          goto LABEL_65;
        }
      }
      v29 = v28 >> 12;
      if ( v28 > 0xFFFF )
      {
        v23[1] = (v29 & 0x3F) + 0x80;
        *v23 = (v28 >> 18) - 16;
        v23[2] = ((v28 >> 6) & 0x3F) + 0x80;
        v23[3] = (v28 & 0x3F) + 0x80;
        v23 += 4;
      }
      else
      {
        *v23 = v29 - 32;
        v23[1] = ((v28 >> 6) & 0x3F) + 0x80;
        v23[2] = (v28 & 0x3F) + 0x80;
        v23 += 3;
      }
LABEL_65:
      v11 = v27;
    }
  }
  v23 = (unsigned __int8 *)v13;
  while ( v11 < v31 )
  {
    v24 = v11 + 2;
    v25 = (v11[1] << 8) + *v11;
    if ( v25 - 55296 > 0x7FF )
    {
      if ( v25 <= 0x7F )
      {
        *v23++ = *v11;
        goto LABEL_61;
      }
      if ( v25 <= 0x7FF )
      {
        *v23 = (v25 >> 6) - 64;
        v23[1] = (v25 & 0x3F) + 0x80;
        v23 += 2;
        goto LABEL_61;
      }
    }
    else if ( v24 < v31 )
    {
      v24 = v11 + 4;
      v25 = (unsigned __int16)((_WORD)v25 << 10) + ((v11[2] + (v11[3] << 8)) & 0x3FF) + (((v25 & 0x3C0) + 64) << 10);
    }
    v26 = v25 >> 12;
    if ( v25 > 0xFFFF )
    {
      v23[1] = (v26 & 0x3F) + 0x80;
      *v23 = (v25 >> 18) - 16;
      v23[2] = ((v25 >> 6) & 0x3F) + 0x80;
      v23[3] = (v25 & 0x3F) + 0x80;
      v23 += 4;
    }
    else
    {
      *v23 = v26 - 32;
      v23[1] = ((v25 >> 6) & 0x3F) + 0x80;
      v23[2] = (v25 & 0x3F) + 0x80;
      v23 += 3;
    }
LABEL_61:
    v11 = v24;
  }
LABEL_75:
  *(_DWORD *)(a1 + 24) = &v23[-v14];
LABEL_76:
  *v23 = 0;
  sub_355700((_DWORD *)a1);
  v30 = *(_WORD *)(a1 + 28);
  *(_DWORD *)(a1 + 4) = v14;
  *(_BYTE *)(a1 + 30) = v32;
  *(_WORD *)(a1 + 28) = v30 & 0xE1FF | 0x200;
  *(_DWORD *)(a1 + 36) = v14;
  return 0;
}


//======================================================================
// sub_359B2C
// address: 0x00359B2C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_359B2C(_WORD *a1, void *a2)
{
  __int16 v4; // r2
  int result; // r0

  if ( (a1[14] & 0x2460) != 0 )
    sub_35572C(a1, (int)a2);
  j_memcpy(a1, a2, 0x24u);
  v4 = a1[14];
  result = 0;
  a1[14] = v4 & 0xFBFF;
  *((_DWORD *)a1 + 8) = 0;
  if ( (v4 & 0x12) != 0 && (*((_WORD *)a2 + 14) & 0x800) == 0 )
  {
    a1[14] = v4 & 0xEBFF | 0x1000;
    return sub_359740((int)a1);
  }
  return result;
}


//======================================================================
// sub_359B84
// address: 0x00359B84   size: 0x15C (348 bytes)
//======================================================================
int __fastcall sub_359B84(int a1, _BYTE *a2, int a3, int a4, int (__fastcall *a5)(_DWORD))
{
  int v6; // r5
  __int16 v7; // r6
  unsigned __int8 *v8; // r3
  int v9; // r1
  int v10; // r2
  size_t v11; // r7
  __int16 v13; // r3
  int v14; // r3
  unsigned __int8 *v15; // r3
  int v16; // r2
  int v17; // r3
  char v18; // r7
  int v19; // r0
  size_t v20; // r2
  int v23; // [sp+Ch] [bp-8h]

  v6 = a3;
  if ( a2 != nullptr )
  {
    if ( *(_DWORD *)a1 != 0 )
      v23 = *(_DWORD *)(*(_DWORD *)a1 + 88);
    else
      v23 = 1000000000;
    if ( a4 != 0 )
    {
      v7 = 2;
      if ( a3 >= 0 )
        goto LABEL_19;
      v6 = 0;
      if ( a4 == 1 )
      {
        while ( v6 <= v23 && a2[v6] != 0 )
          ++v6;
        v7 = 2;
        goto LABEL_18;
      }
    }
    else
    {
      v7 = 16;
      if ( a3 >= 0 )
      {
LABEL_19:
        if ( a5 == (int (__fastcall *)(_DWORD))-1 )
        {
          v11 = v6;
          if ( (v7 & 0x200) != 0 )
            v11 = v6 + (a4 != 1) + 1;
          if ( v6 > v23 )
            return 18;
          if ( sub_359644((int *)a1, v11, 0) != 0 )
            return 7;
          j_memcpy(*(void **)(a1 + 4), a2, v11);
        }
        else if ( a5 == sub_34CCB0 )
        {
          sub_355700((_DWORD *)a1);
          *(_DWORD *)(a1 + 32) = 0;
          *(_DWORD *)(a1 + 4) = a2;
          *(_DWORD *)(a1 + 36) = a2;
        }
        else
        {
          sub_355700((_DWORD *)a1);
          *(_DWORD *)(a1 + 32) = a5;
          *(_DWORD *)(a1 + 4) = a2;
          if ( a5 != nullptr )
            v13 = 1024;
          else
            v13 = 2048;
          v7 |= v13;
        }
        v14 = a4;
        *(_DWORD *)(a1 + 24) = v6;
        *(_WORD *)(a1 + 28) = v7;
        if ( a4 == 0 )
          v14 = 1;
        *(_BYTE *)(a1 + 30) = v14;
        if ( v14 != 1 && v6 > 1 )
        {
          v15 = *(unsigned __int8 **)(a1 + 4);
          v16 = *v15;
          v17 = v15[1];
          if ( v16 == 254 )
          {
            if ( v17 != 255 )
              goto LABEL_44;
            v18 = 3;
          }
          else
          {
            if ( v16 != 255 )
              goto LABEL_44;
            v18 = 2;
            if ( v17 != 254 )
              goto LABEL_44;
          }
          if ( sub_359740(a1) != 0 )
            return 7;
          v19 = *(_DWORD *)(a1 + 4);
          v20 = *(_DWORD *)(a1 + 24) - 2;
          *(_DWORD *)(a1 + 24) = v20;
          j_memmove((void *)v19, (const void *)(v19 + 2), v20);
          *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(a1 + 24)) = 0;
          *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(a1 + 24) + 1) = 0;
          *(_WORD *)(a1 + 28) |= 0x200u;
          *(_BYTE *)(a1 + 30) = v18;
        }
LABEL_44:
        if ( v6 <= v23 )
          return 0;
        return 18;
      }
    }
    v8 = a2;
    do
    {
      v6 = v8 - a2;
      if ( v8 - a2 > v23 )
        break;
      v9 = v8[1];
      v10 = *v8;
      v8 += 2;
    }
    while ( (v10 | v9) != 0 );
LABEL_18:
    v7 |= 0x200u;
    goto LABEL_19;
  }
  sub_3549D4((_DWORD *)a1);
  return 0;
}


//======================================================================
// sub_359D00
// address: 0x00359D00   size: 0x136 (310 bytes)
//======================================================================
__int64 __fastcall sub_359D00(const void *a1, int a2, _DWORD *a3)
{
  struct tm *v5; // r0
  struct tm *v6; // r5
  int tm_min; // r1
  int tm_hour; // r7
  int tm_mon; // r1
  int tm_year; // r7
  int tm_yday; // r1
  int tm_isdst; // r7
  const char *tm_zone; // r7
  __int64 v15; // r0
  double v16; // r2
  int v17; // [sp+0h] [bp-9Ch]
  time_t timer; // [sp+8h] [bp-94h] BYREF
  _DWORD v20[11]; // [sp+Ch] [bp-90h] BYREF
  double v21[6]; // [sp+38h] [bp-64h] BYREF
  __int64 v22; // [sp+68h] [bp-34h] BYREF
  int v23; // [sp+70h] [bp-2Ch]
  int v24; // [sp+74h] [bp-28h]
  int v25; // [sp+78h] [bp-24h]
  int v26; // [sp+7Ch] [bp-20h]
  int v27; // [sp+80h] [bp-1Ch]
  double v28; // [sp+88h] [bp-14h]
  char v29; // [sp+90h] [bp-Ch]
  char v30; // [sp+91h] [bp-Bh]
  char v31; // [sp+92h] [bp-Ah]
  char v32; // [sp+93h] [bp-9h]

  j_memset(v20, 0, sizeof(v20));
  j_memcpy(v21, a1, sizeof(v21));
  sub_3565FE((int)v21);
  if ( (unsigned int)(LODWORD(v21[1]) - 1971) <= 0x42 )
  {
    v21[4] = (double)(int)(v21[4] + 0.5);
  }
  else
  {
    *(_QWORD *)&v21[1] = 0x1000007D0LL;
    *(_QWORD *)&v21[2] = 1;
    LODWORD(v21[3]) = 0;
    v21[4] = 0.0;
  }
  HIDWORD(v21[3]) = 0;
  BYTE2(v21[5]) = 0;
  sub_3512D8((int)v21);
  timer = *(_QWORD *)&v21[0] / 1000LL - 413362496;
  v17 = sub_34CB60(2);
  sqlite3_mutex_enter(v17);
  v5 = j_localtime(&timer);
  v6 = v5;
  if ( dword_47173C != 0 )
  {
    v6 = nullptr;
  }
  else if ( v5 != nullptr )
  {
    tm_min = v5->tm_min;
    tm_hour = v5->tm_hour;
    v20[0] = v5->tm_sec;
    v20[1] = tm_min;
    v20[2] = tm_hour;
    tm_mon = v5->tm_mon;
    tm_year = v5->tm_year;
    v20[3] = v5->tm_mday;
    v20[4] = tm_mon;
    v20[5] = tm_year;
    tm_yday = v5->tm_yday;
    tm_isdst = v5->tm_isdst;
    v20[6] = v5->tm_wday;
    v20[7] = tm_yday;
    v20[8] = tm_isdst;
    tm_zone = v5->tm_zone;
    v20[9] = v5->tm_gmtoff;
    v20[10] = tm_zone;
  }
  sqlite3_mutex_leave(v17);
  if ( v6 != nullptr )
  {
    v23 = v20[5] + 1900;
    v26 = v20[2];
    v24 = v20[4] + 1;
    v25 = v20[3];
    v27 = v20[1];
    v29 = 1;
    v30 = 1;
    v28 = (double)v20[0];
    v31 = 0;
    v32 = 0;
    sub_3512D8((int)&v22);
    v15 = v22;
    v16 = v21[0];
    *a3 = 0;
    return v15 - *(_QWORD *)&v16;
  }
  else
  {
    sqlite3_result_error(a2, "local time unavailable", -1);
    *a3 = 1;
    return 0;
  }
}


//======================================================================
// sub_359E68
// address: 0x00359E68   size: 0x7E (126 bytes)
//======================================================================
_DWORD *__fastcall sub_359E68(int a1, int a2, int *a3)
{
  __int64 v5; // r0
  int v6; // r2
  __int64 v8; // r0
  __int64 v9; // r2
  int v10; // r4
  double v11; // kr00_8
  int v12; // r1

  LODWORD(v5) = sqlite3_value_type(*a3);
  if ( (_DWORD)v5 == 1 )
  {
    LODWORD(v5) = *a3;
    v8 = sqlite3_value_int64(v5, v6);
    v9 = v8;
    if ( v8 < 0 )
    {
      if ( v8 == 0x8000000000000000LL )
        return (_DWORD *)sqlite3_result_error(a1, "integer overflow", -1);
      v9 = -v8;
    }
    return sqlite3_result_int64(a1, SHIDWORD(v8), v9, SHIDWORD(v9));
  }
  else if ( (_DWORD)v5 == 5 )
  {
    return sqlite3_result_null(a1);
  }
  else
  {
    LODWORD(v5) = *a3;
    v11 = COERCE_DOUBLE(sqlite3_value_double(*(double *)&v5));
    v10 = HIDWORD(v11);
    if ( v11 < 0.0 )
    {
      v12 = 0x80000000;
      v10 = HIDWORD(v11) + 0x80000000;
    }
    return sqlite3_result_double(a1, v12, SLODWORD(v11), v10);
  }
}


//======================================================================
// sub_359F7C
// address: 0x00359F7C   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_359F7C(int a1, int a2, _DWORD *a3)
{
  int v5; // r5
  __int64 v6; // r0
  int v7; // r2
  __int64 v8; // r0

  v5 = sqlite3_context_db_handle(a1);
  LODWORD(v6) = *a3;
  v8 = sqlite3_value_int64(v6, v7);
  if ( v8 <= *(int *)(v5 + 88) )
    return sqlite3_result_zeroblob(a1, v8);
  else
    return (_DWORD *)sqlite3_result_error_toobig(a1);
}


//======================================================================
// sub_359FB0
// address: 0x00359FB0   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_359FB0(int a1, __int64 a2)
{
  int v3; // r4
  int v5; // r4

  v3 = a2;
  if ( a2 <= *(int *)(sqlite3_context_db_handle(a1) + 88) )
  {
    v5 = sub_351664(v3);
    if ( v5 == 0 )
      sqlite3_result_error_nomem(a1);
  }
  else
  {
    sqlite3_result_error_toobig(a1);
    return 0;
  }
  return v5;
}


//======================================================================
// sub_359FE8
// address: 0x00359FE8   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_359FE8(int a1, _BYTE *a2, int a3, int a4, int (__fastcall *a5)(_DWORD))
{
  int v7; // [sp+0h] [bp-Ch]

  if ( sub_359B84(a1 + 8, a2, a3, a4, a5) == 18 )
    sqlite3_result_error_toobig(a1);
  return v7;
}


//======================================================================
// sub_35A010
// address: 0x0035A010   size: 0x50 (80 bytes)
//======================================================================
_DWORD *__fastcall sub_35A010(__int64 a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r6
  unsigned int v4; // r5
  int v5; // r7
  char *v6; // r0

  v2 = a1;
  LODWORD(a1) = *a2;
  v3 = sqlite3_value_int(a1, (int)a2);
  v4 = (v3 + 1) & 0xFFFFFFFE;
  v5 = sqlite3_context_db_handle(v2);
  v6 = (char *)sub_351894(v5, 8 * v4 + 52);
  if ( v6 == nullptr )
    return sqlite3_result_error_nomem(v2);
  *(_DWORD *)v6 = 0;
  *((_DWORD *)v6 + 5) = v6 + 52;
  *((_DWORD *)v6 + 4) = &v6[4 * v4 + 52];
  *((_DWORD *)v6 + 12) = v5;
  *((_DWORD *)v6 + 2) = v3;
  return (_DWORD *)sqlite3_result_blob(v2, v6, 4, (int (__fastcall *)(_DWORD))sub_354DD0);
}


//======================================================================
// sub_35A064
// address: 0x0035A064   size: 0x60 (96 bytes)
//======================================================================
__int64 __fastcall sub_35A064(int a1, int a2, int a3)
{
  _DWORD *v5; // r5
  __int64 v6; // r0
  _BYTE *v7; // r4
  int v8; // r5
  int i; // r5
  __int64 v11; // [sp+0h] [bp-Ch]

  HIDWORD(v11) = a3;
  v5 = (_DWORD *)sqlite3_user_data(a1);
  LODWORD(v11) = 8 * (a2 + 2);
  LODWORD(v6) = sqlite3_malloc(v11);
  v7 = (_BYTE *)v6;
  if ( (_DWORD)v6 != 0 )
  {
    *(_DWORD *)v6 = -1995291221;
    *(_DWORD *)(v6 + 4) = *v5;
    v8 = v5[1];
    *(_DWORD *)(v6 + 12) = a2;
    *(_DWORD *)(v6 + 8) = v8;
    for ( i = 0; i < a2; ++i )
    {
      LODWORD(v6) = *(_DWORD *)(HIDWORD(v11) + 4 * i);
      v6 = sqlite3_value_double(*(double *)&v6);
      *(_QWORD *)&v7[8 * i + 16] = v6;
    }
    sqlite3_result_blob(a1, v7, v11, sub_35223E);
  }
  else
  {
    sqlite3_result_error_nomem(a1);
  }
  return v11;
}


//======================================================================
// sub_35A0CC
// address: 0x0035A0CC   size: 0x38 (56 bytes)
//======================================================================
_BYTE *__fastcall sub_35A0CC(__int64 a1, _DWORD *a2)
{
  int v2; // r6
  int v3; // r4
  _BYTE *result; // r0
  _BYTE *v5; // r5

  v2 = a1;
  LODWORD(a1) = *a2;
  v3 = sqlite3_value_int(a1, (int)a2);
  if ( v3 <= 0 )
    v3 = 1;
  result = (_BYTE *)sub_359FB0(v2, v3);
  v5 = result;
  if ( result != nullptr )
  {
    sqlite3_randomness(v3, result);
    return (_BYTE *)sqlite3_result_blob(v2, v5, v3, sqlite3_free);
  }
  return result;
}


//======================================================================
// sub_35A114
// address: 0x0035A114   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_35A114(__int64 a1, _DWORD *a2)
{
  int v2; // r4
  unsigned int v3; // r0
  char *v4; // r0

  v2 = a1;
  LODWORD(a1) = *a2;
  v3 = sqlite3_value_int(a1, (int)a2);
  v4 = sqlite3_compileoption_get(v3);
  return sqlite3_result_text(v2, v4, -1, nullptr);
}


//======================================================================
// sub_35A132
// address: 0x0035A132   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_35A132(int a1)
{
  char *v2; // r0

  v2 = (char *)sqlite3_sourceid();
  return sqlite3_result_text(a1, v2, -1, nullptr);
}


//======================================================================
// sub_35A14A
// address: 0x0035A14A   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_35A14A(int a1)
{
  char *v2; // r0

  v2 = (char *)sqlite3_libversion();
  return sqlite3_result_text(a1, v2, -1, nullptr);
}


//======================================================================
// sub_35A164
// address: 0x0035A164   size: 0xB4 (180 bytes)
//======================================================================
unsigned __int64 __fastcall sub_35A164(int a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v4; // r0
  _BYTE *v5; // r5
  _BYTE *v6; // r4
  int i; // r6
  unsigned int v8; // r2
  unsigned __int64 v10; // [sp+0h] [bp-Ch]

  v10 = __PAIR64__(a3, a2);
  LODWORD(v4) = sqlite3_malloc(4 * a2 + 1);
  v5 = (_BYTE *)v4;
  if ( (_DWORD)v4 != 0 )
  {
    v6 = (_BYTE *)v4;
    for ( i = 0; ; ++i )
    {
      if ( i >= (int)v10 )
      {
        sqlite3_result_text(a1, v5, v6 - v5, sqlite3_free);
        return v10;
      }
      LODWORD(v4) = *(_DWORD *)(HIDWORD(v10) + 4 * i);
      v4 = sqlite3_value_int64(v4, SHIDWORD(v10));
      if ( v4 > 0x10FFFF )
      {
        LODWORD(v4) = 65533;
      }
      else if ( (unsigned int)v4 <= 0x7F )
      {
        *v6++ = v4;
        continue;
      }
      if ( (unsigned int)v4 > 0x7FF )
      {
        v8 = (unsigned int)v4 >> 12;
        if ( (unsigned int)v4 > 0xFFFF )
        {
          *v6 = ((unsigned int)v4 >> 18) - 16;
          v6[1] = (v8 & 0x3F) + 0x80;
          v6[2] = (((unsigned int)v4 >> 6) & 0x3F) + 0x80;
          v6[3] = (v4 & 0x3F) + 0x80;
          v6 += 4;
        }
        else
        {
          *v6 = v8 - 32;
          v6[1] = (((unsigned int)v4 >> 6) & 0x3F) + 0x80;
          v6[2] = (v4 & 0x3F) + 0x80;
          v6 += 3;
        }
      }
      else
      {
        *v6 = ((unsigned int)v4 >> 6) - 64;
        v6[1] = (v4 & 0x3F) + 0x80;
        v6 += 2;
      }
    }
  }
  sqlite3_result_error_nomem(a1);
  return v10;
}


//======================================================================
// sub_35A22C
// address: 0x0035A22C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_35A22C(int a1, int a2, int *a3)
{
  char *v4; // r1

  switch ( sqlite3_value_type(*a3) )
  {
    case 1:
      v4 = "integer";
      break;
    case 2:
      v4 = "real";
      break;
    case 3:
      v4 = "text";
      break;
    case 4:
      v4 = "blob";
      break;
    default:
      v4 = "null";
      break;
  }
  return sqlite3_result_text(a1, v4, -1, nullptr);
}


//======================================================================
// sub_35A2BC
// address: 0x0035A2BC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_35A2BC(int a1, int a2, int a3, _BYTE *a4, int (__fastcall *a5)(_DWORD))
{
  int v6; // r5
  int result; // r0

  v6 = *(unsigned __int8 *)(*(_DWORD *)a1 + 64);
  result = 7;
  if ( v6 == 0 )
    return sub_359B84(*(_DWORD *)(a1 + 16) + 40 * (a2 + a3 * *(unsigned __int16 *)(a1 + 84)), a4, -1, 1, a5);
  return result;
}


//======================================================================
// sub_35A2F0
// address: 0x0035A2F0   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_35A2F0(int a1, _BYTE *a2, int a3, int a4)
{
  _DWORD v9[11]; // [sp+10h] [bp-2Ch] BYREF

  j_memset(v9, 0, 0x28u);
  v9[0] = a1;
  sub_359B84((int)v9, a2, a3, a4, nullptr);
  sub_359790((int)v9, 1);
  if ( *(_BYTE *)(a1 + 64) != 0 )
  {
    sub_355700(v9);
    v9[1] = 0;
  }
  return v9[1];
}


//======================================================================
// sub_35A338
// address: 0x0035A338   size: 0x16 (22 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> sub_35A338(int a1, _BYTE *a2, int a3, int (__fastcall *a4)(_DWORD))
{
  if ( a1 != 0 )
    sub_359B84(a1, a2, -1, a3, a4);
}


//======================================================================
// sub_35A350
// address: 0x0035A350   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_35A350(int a1)
{
  __int16 v1; // r2
  int result; // r0

  v1 = *(_WORD *)(a1 + 28);
  result = 0;
  if ( (v1 & 0x202) == 2 )
  {
    result = sub_359644((int *)a1, *(_DWORD *)(a1 + 24) + 2, 1);
    if ( result != 0 )
    {
      return 7;
    }
    else
    {
      *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(a1 + 24)) = 0;
      *(_BYTE *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(a1 + 24) + 1) = 0;
      *(_WORD *)(a1 + 28) |= 0x200u;
    }
  }
  return result;
}


//======================================================================
// sub_35A3DC
// address: 0x0035A3DC   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall sub_35A3DC(_DWORD *a1)
{
  _DWORD *result; // r0
  int v3; // r3
  _BYTE *v4; // r0

  result = (_DWORD *)sqlite3_aggregate_context(a1, 0);
  if ( result != nullptr )
  {
    v3 = *((unsigned __int8 *)result + 25);
    if ( v3 == 2 )
    {
      return (_DWORD *)sqlite3_result_error_toobig((int)a1);
    }
    else if ( v3 == 1 )
    {
      return sqlite3_result_error_nomem((int)a1);
    }
    else
    {
      v4 = (_BYTE *)sub_3591A0((int)result);
      return (_DWORD *)sqlite3_result_text((int)a1, v4, -1, sqlite3_free);
    }
  }
  return result;
}


//======================================================================
// sub_35A420
// address: 0x0035A420   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_35A420(_DWORD *a1)
{
  int *v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3

  v2 = (int *)sqlite3_aggregate_context(a1, 0);
  if ( v2 != nullptr )
  {
    v4 = *v2;
    v5 = v2[1];
  }
  else
  {
    v4 = 0;
    v5 = 0;
  }
  return sqlite3_result_int64((int)a1, v3, v4, v5);
}


//======================================================================
// sub_35A440
// address: 0x0035A440   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_35A440(_DWORD *a1, int a2, int *a3)
{
  __int64 v5; // r0
  _QWORD *v6; // r4

  LODWORD(v5) = sqlite3_aggregate_context(a1, 8);
  v6 = (_QWORD *)v5;
  if ( a2 == 0 || (LODWORD(v5) = sqlite3_value_type(*a3), (_DWORD)v5 != 5) )
  {
    if ( v6 != nullptr )
      return (*v6)++;
  }
  return v5;
}


//======================================================================
// sub_35A474
// address: 0x0035A474   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_35A474(_DWORD *a1)
{
  __int64 v2; // r0
  double *v3; // r5

  LODWORD(v2) = sqlite3_aggregate_context(a1, 0);
  v3 = (double *)v2;
  if ( (_DWORD)v2 != 0 )
  {
    v2 = *(_QWORD *)(v2 + 16);
    if ( v2 > 0 )
      LODWORD(v2) = sqlite3_result_double(
                      (int)a1,
                      HIDWORD(COERCE_UNSIGNED_INT64(*v3 / (double)v2)),
                      COERCE_UNSIGNED_INT64(*v3 / (double)v2),
                      HIDWORD(COERCE_UNSIGNED_INT64(*v3 / (double)v2)));
  }
  return v2;
}


//======================================================================
// sub_35A4B0
// address: 0x0035A4B0   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_35A4B0(_DWORD *a1)
{
  int *v2; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r3

  v2 = (int *)sqlite3_aggregate_context(a1, 0);
  if ( v2 != nullptr )
  {
    v4 = *v2;
    v5 = v2[1];
  }
  else
  {
    v5 = 0;
    v4 = 0;
  }
  return sqlite3_result_double((int)a1, v3, v4, v5);
}


//======================================================================
// sub_35A4D8
// address: 0x0035A4D8   size: 0x50 (80 bytes)
//======================================================================
int *__fastcall sub_35A4D8(_DWORD *a1)
{
  int *result; // r0
  int v3; // r1

  result = (int *)sqlite3_aggregate_context(a1, 0);
  if ( result != nullptr && *((__int64 *)result + 2) > 0 )
  {
    if ( *((_BYTE *)result + 24) != 0 )
    {
      return (int *)sqlite3_result_error((int)a1, "integer overflow", -1);
    }
    else if ( *((_BYTE *)result + 25) != 0 )
    {
      return sqlite3_result_double((int)a1, v3, *result, result[1]);
    }
    else
    {
      return sqlite3_result_int64((int)a1, v3, result[2], result[3]);
    }
  }
  return result;
}


//======================================================================
// sub_35A52C
// address: 0x0035A52C   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_35A52C(_DWORD *a1, int a2, int *a3)
{
  int v4; // r6
  double v5; // r0
  int v6; // r7
  int v7; // r2
  __int64 v8; // r0
  __int64 v9; // r4
  __int64 v10; // r2
  double v11; // r4

  v4 = sqlite3_aggregate_context(a1, 32);
  LODWORD(v5) = sqlite3_value_numeric_type(*a3);
  v6 = LODWORD(v5);
  if ( v4 != 0 && LODWORD(v5) != 5 )
  {
    v8 = *(_QWORD *)(v4 + 16);
    v7 = v8 + 1;
    *(_QWORD *)(v4 + 16) = v8 + 1;
    LODWORD(v8) = *a3;
    if ( v6 == 1 )
    {
      v9 = sqlite3_value_int64(v8, v7);
      v5 = *(double *)v4 + (double)v9;
      LODWORD(v10) = *(unsigned __int8 *)(v4 + 24);
      HIDWORD(v10) = *(unsigned __int8 *)(v4 + 25);
      *(double *)v4 = v5;
      if ( v10 == 0 )
      {
        LODWORD(v5) = sub_34D900((__int64 *)(v4 + 8), v9);
        if ( LODWORD(v5) != 0 )
          *(_BYTE *)(v4 + 24) = 1;
      }
    }
    else
    {
      v11 = *(double *)v4;
      v5 = v11 + COERCE_DOUBLE(sqlite3_value_double(*(double *)&v8));
      *(double *)v4 = v5;
      *(_BYTE *)(v4 + 25) = 1;
    }
  }
  return LODWORD(v5);
}


//======================================================================
// sub_35A5B4
// address: 0x0035A5B4   size: 0x24 (36 bytes)
//======================================================================
_WORD *__fastcall sub_35A5B4(_DWORD *a1)
{
  _WORD *result; // r0
  _DWORD *v3; // r4

  result = (_WORD *)sqlite3_aggregate_context(a1, 0);
  v3 = result;
  if ( result != nullptr )
  {
    if ( result[14] != 0 )
      sqlite3_result_value((int)a1, result);
    return sub_355700(v3);
  }
  return result;
}


//======================================================================
// sub_35A5D8
// address: 0x0035A5D8   size: 0x108 (264 bytes)
//======================================================================
int __fastcall sub_35A5D8(_DWORD *a1, __int64 *a2, int a3, _DWORD *a4)
{
  signed int v6; // r4
  int result; // r0
  int v8; // r5
  int v9; // r0
  int i; // r4
  size_t v11; // r5
  __int64 v12; // [sp+0h] [bp-34h]
  int v13; // [sp+1Ch] [bp-18h]
  void *v16; // [sp+2Ch] [bp-8h] BYREF

  v13 = *a2 % *((int *)a2 + 10);
  if ( v13 != 0 || (v12 = *a2, (result = sub_34CA3A(*((_DWORD *)a2 + 6))) == 0) )
  {
    v6 = *((_DWORD *)a2 + 10) - v13;
    if ( a3 > v6 )
    {
      v8 = *((_DWORD *)a2 + 4);
      if ( v8 < a3 )
      {
        do
          v8 *= 2;
        while ( a3 > v8 );
        v9 = sub_359628(a1, *((_DWORD **)a2 + 7), v8);
        *((_DWORD *)a2 + 7) = v9;
        if ( v9 == 0 )
          return 7;
        *((_DWORD *)a2 + 4) = v8;
      }
      j_memcpy(*((void **)a2 + 7), (const void *)(*((_DWORD *)a2 + 9) + v13), v6);
      *a2 += v6;
      for ( i = a3 - v6; i > 0; i -= v11 )
      {
        v11 = i;
        if ( i > *((_DWORD *)a2 + 10) )
          v11 = *((_DWORD *)a2 + 10);
        result = sub_35A5D8(a1, a2, v11, &v16, v12, HIDWORD(v12));
        if ( result != 0 )
          return result;
        j_memcpy((void *)(*((_DWORD *)a2 + 7) + a3 - i), v16, v11);
      }
      *a4 = *((_DWORD *)a2 + 7);
    }
    else
    {
      *a4 = *((_DWORD *)a2 + 9) + v13;
      *a2 += a3;
    }
    return 0;
  }
  return result;
}


//======================================================================
// sub_35A6E0
// address: 0x0035A6E0   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_35A6E0(_DWORD *a1, __int64 *a2, _DWORD *a3)
{
  int v3; // r5
  __int64 v5; // r2
  char i; // r6
  unsigned __int8 *v8; // r3
  int v9; // r5
  __int64 v10; // [sp+0h] [bp-2Ch]
  unsigned __int8 *v13; // [sp+10h] [bp-1Ch] BYREF
  unsigned __int8 v14[16]; // [sp+14h] [bp-18h] BYREF

  v3 = *((_DWORD *)a2 + 10);
  v5 = *a2 % v3;
  if ( (_DWORD)v5 != 0 && v3 - (int)v5 > 8 )
  {
    v10 = *a2;
    *a2 = v10 + (unsigned int)sub_34D798((unsigned __int8 *)(*((_DWORD *)a2 + 9) + v5), a3);
    return 0;
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      v9 = sub_35A5D8(a1, a2, 1, &v13);
      if ( v9 != 0 )
        break;
      v8 = v13;
      v14[i & 0xF] = *v13;
      if ( *v8 <= 0x7Fu )
      {
        sub_34D798(v14, a3);
        return v9;
      }
    }
    return v9;
  }
}


//======================================================================
// sub_35A77C
// address: 0x0035A77C   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_35A77C(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  int v6; // r2
  _DWORD v7[3]; // [sp+0h] [bp-Ch] BYREF

  v7[2] = a3;
  v7[0] = 0;
  v7[1] = 0;
  if ( *(_QWORD *)(a2 + 8) > *(_QWORD *)a2 )
  {
    result = sub_35A6E0(a1, (__int64 *)a2, v7);
    if ( result == 0 )
    {
      v6 = v7[0];
      *(_DWORD *)(a2 + 20) = v7[0];
      return sub_35A5D8(a1, (__int64 *)a2, v6, (_DWORD *)(a2 + 32));
    }
  }
  else
  {
    sub_355628(a1, (_DWORD **)a2);
    return 0;
  }
  return result;
}


//======================================================================
// sub_35A7C8
// address: 0x0035A7C8   size: 0x8E (142 bytes)
//======================================================================
__int64 __fastcall sub_35A7C8(int a1, int a2, __int64 a3, int a4)
{
  int v4; // r4
  int v6; // r3
  int v7; // r12
  int v8; // r1
  int v9; // r0
  int v10; // r3
  int v11; // r0

  v4 = a1;
  if ( *(_DWORD *)(a1 + 412) != 0 )
    v4 = *(_DWORD *)(a1 + 412);
  v6 = 0;
  v7 = *(_DWORD *)(v4 + 400);
  while ( v6 < v7 )
  {
    v8 = *(_DWORD *)(v4 + 404) + 16 * v6;
    if ( *(_DWORD *)v8 == a2 && *(_DWORD *)(v8 + 4) == (_DWORD)a3 )
    {
      *(_BYTE *)(v8 + 8) = (*(unsigned __int8 *)(v8 + 8) | HIDWORD(a3)) != 0;
      return a3;
    }
    ++v6;
  }
  v9 = sub_359628(*(_DWORD **)v4, *(_DWORD **)(v4 + 404), 16 * (v7 + 1));
  *(_DWORD *)(v4 + 404) = v9;
  if ( v9 != 0 )
  {
    v10 = *(_DWORD *)(v4 + 400);
    v11 = v9 + 16 * v10;
    *(_DWORD *)(v4 + 400) = v10 + 1;
    *(_DWORD *)(v11 + 4) = a3;
    *(_DWORD *)v11 = a2;
    *(_DWORD *)(v11 + 12) = a4;
    *(_BYTE *)(v11 + 8) = BYTE4(a3);
  }
  else
  {
    *(_DWORD *)(v4 + 400) = 0;
    *(_BYTE *)(*(_DWORD *)v4 + 64) = 1;
  }
  return a3;
}


//======================================================================
// sub_35A856
// address: 0x0035A856   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_35A856(int a1)
{
  int v1; // r4
  int v3; // r3

  v1 = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = v1 + 1;
  if ( (v1 & (v1 - 1)) == 0 )
    *(_DWORD *)(a1 + 116) = sub_359628(*(_DWORD **)a1, *(_DWORD **)(a1 + 116), 8 * v1 + 4);
  v3 = *(_DWORD *)(a1 + 116);
  if ( v3 != 0 )
    *(_DWORD *)(4 * v1 + v3) = -1;
  return ~v1;
}


//======================================================================
// sub_35A886
// address: 0x0035A886   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_35A886(int a1)
{
  int v1; // r5
  int v2; // r4
  int v3; // r0
  int v4; // r6

  v1 = a1 + 252;
  v2 = *(_DWORD *)(a1 + 296) % 5;
  if ( v2 != 0 )
    return 0;
  v3 = sub_3595BC(a1, *(_DWORD *)(a1 + 320), 4 * (*(_DWORD *)(a1 + 296) + 5));
  v4 = v3;
  if ( v3 == 0 )
    return 7;
  j_memset((void *)(v3 + 4 * *(_DWORD *)(v1 + 44)), 0, 0x14u);
  *(_DWORD *)(v1 + 68) = v4;
  return v2;
}


//======================================================================
// sub_35A8C8
// address: 0x0035A8C8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_35A8C8(int a1)
{
  int *v1; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r0
  int v6; // r6

  v1 = *(int **)(a1 + 24);
  v3 = 51;
  v4 = v1[22];
  if ( v4 != 0 )
    v3 = 2 * v4;
  v5 = sub_3595BC(*v1, *(_DWORD *)(a1 + 4), 20 * v3);
  v6 = v5;
  if ( v5 == 0 )
    return 7;
  v1[22] = sub_354918(*v1, v5) / 0x14u;
  *(_DWORD *)(a1 + 4) = v6;
  return 0;
}


//======================================================================
// sub_35A902
// address: 0x0035A902   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_35A902(_DWORD *a1, char a2, int a3, int a4, int a5)
{
  int v6; // r5
  int v9; // r2
  int v10; // r3

  v6 = a1[8];
  if ( *(_DWORD *)(a1[6] + 88) <= v6 && sub_35A8C8((int)a1) != 0 )
    return 1;
  v9 = a1[1];
  ++a1[8];
  v10 = v9 + 20 * v6;
  *(_BYTE *)v10 = a2;
  *(_BYTE *)(v10 + 3) = 0;
  *(_DWORD *)(v10 + 4) = a3;
  *(_DWORD *)(v10 + 8) = a4;
  *(_DWORD *)(v10 + 12) = a5;
  *(_DWORD *)(v10 + 16) = 0;
  *(_BYTE *)(v10 + 1) = 0;
  return v6;
}


//======================================================================
// sub_35A948
// address: 0x0035A948   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_35A948(_DWORD *a1, char a2)
{
  return sub_35A902(a1, a2, 0, 0, 0);
}


//======================================================================
// sub_35A956
// address: 0x0035A956   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_35A956(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v3; // r0

  v1 = *(_DWORD **)(a1 + 8);
  if ( v1 == nullptr )
  {
    v3 = sub_3518C4((int *)a1);
    v1 = v3;
    *(_DWORD *)(a1 + 8) = v3;
    if ( v3 != nullptr )
      sub_35A948(v3, 154);
    if ( *(_DWORD *)(a1 + 412) == 0 && (*(_WORD *)(*(_DWORD *)a1 + 60) & 8) == 0 )
      *(_BYTE *)(a1 + 25) = 1;
  }
  return v1;
}


//======================================================================
// sub_35A98A
// address: 0x0035A98A   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_35A98A(int *a1, char a2, int a3, int a4, int a5, _DWORD *a6)
{
  int v7; // r4

  v7 = sub_35A902(a1, a2, a3, a4, a5);
  sub_355AEA(a1, v7, a6, -14);
  return v7;
}


//======================================================================
// sub_35A9AC
// address: 0x0035A9AC   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_35A9AC(int a1, int a2)
{
  int *v4; // r6
  const char *v5; // r3
  int v7; // [sp+0h] [bp-8h]

  v4 = sub_35A956(a1);
  if ( a2 == 1 )
    v5 = "sqlite_temp_master";
  else
    v5 = "sqlite_master";
  sub_35A7C8(a1, a2, 0x100000001LL, (int)v5);
  sub_35A98A(v4, 53, 0, 1, a2, &byte_5);
  if ( *(_DWORD *)(a1 + 72) == 0 )
    *(_DWORD *)(a1 + 72) = 1;
  return v7;
}


//======================================================================
// sub_35A9FC
// address: 0x0035A9FC   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_35A9FC(int *a1, char a2, int a3, int a4, int a5, _DWORD *a6, signed int a7)
{
  int v8; // r4

  v8 = sub_35A902(a1, a2, a3, a4, a5);
  sub_355AEA(a1, v8, a6, a7);
  return v8;
}


//======================================================================
// sub_35AA1C
// address: 0x0035AA1C   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_35AA1C(int result, _BYTE *a2, int a3, int a4)
{
  int *v4; // r5
  unsigned int v7; // r0
  double *v8; // r0
  double v10; // [sp+18h] [bp-Ch] BYREF

  v4 = (int *)result;
  if ( a2 != nullptr )
  {
    v7 = sub_34CF50((unsigned int)a2);
    sub_34D098(a2, &v10, v7, 1);
    if ( a3 != 0 )
      HIDWORD(v10) += 0x80000000;
    v8 = (double *)sub_3516AC(*v4, 8);
    if ( v8 != nullptr )
      *v8 = v10;
    return sub_35A9FC(v4, 133, 0, a4, 0, v8, -12);
  }
  return result;
}


//======================================================================
// sub_35AA7C
// address: 0x0035AA7C   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_35AA7C(int a1, int a2, int a3, _DWORD *a4, char a5, char a6)
{
  int *v8; // r5
  int result; // r0

  v8 = sub_35A956(a1);
  if ( a3 == 2 )
    sub_34EEF2(a1);
  result = sub_35A9FC(v8, 24, a2, a3, 0, a4, a5);
  if ( a6 != 0 )
    return sub_34E458((int)v8, a6);
  return result;
}


//======================================================================
// sub_35AACE
// address: 0x0035AACE   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_35AACE(_DWORD *a1, char a2, int a3)
{
  return sub_35A902(a1, a2, a3, 0, 0);
}


//======================================================================
// sub_35AADA
// address: 0x0035AADA   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_35AADA(int a1)
{
  _DWORD *v2; // r0
  int v3; // r2

  v2 = sub_35A956(a1);
  v3 = *(_DWORD *)(a1 + 84);
  *(_DWORD *)(a1 + 84) = v3 + 1;
  return sub_35AACE(v2, 43, v3);
}


//======================================================================
// sub_35AAF0
// address: 0x0035AAF0   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_35AAF0(_DWORD *a1, char a2, int a3, int a4)
{
  return sub_35A902(a1, a2, a3, a4, 0);
}


//======================================================================
// sub_35AB00
// address: 0x0035AB00   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_35AB00(int *a1, int a2, int a3, int a4)
{
  int v7; // r2
  unsigned __int8 *v9; // r7
  unsigned int v10; // r0
  int v11; // r0
  __int64 v12; // r2
  _DWORD *v13; // r0
  __int64 v14; // [sp+18h] [bp-Ch] BYREF

  if ( (*(_DWORD *)(a2 + 4) & 0x400) != 0 )
  {
    v7 = *(_DWORD *)(a2 + 8);
    if ( a3 != 0 )
      v7 = -v7;
    return sub_35AAF0(a1, 25, v7, a4);
  }
  v9 = *(unsigned __int8 **)(a2 + 8);
  v10 = sub_34CF50((unsigned int)v9);
  v11 = sub_34D568(v9, &v14, v10, 1);
  if ( v11 != 0 )
  {
    if ( v11 != 2 || a3 == 0 )
      return sub_35AA1C((int)a1, v9, a3, a4);
    v12 = 0x8000000000000000LL;
    goto LABEL_11;
  }
  if ( a3 != 0 )
  {
    v12 = -v14;
LABEL_11:
    v14 = v12;
  }
  v13 = (_DWORD *)sub_3516AC(*a1, 8);
  if ( v13 != nullptr )
    *(_QWORD *)v13 = v14;
  return sub_35A9FC(a1, 26, 0, a4, 0, v13, -13);
}


//======================================================================
// sub_35ABA8
// address: 0x0035ABA8   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall sub_35ABA8(_DWORD *result, int a2, int a3)
{
  _DWORD *v3; // r4
  unsigned int v6; // r5

  v3 = result;
  if ( a2 > 0 && a3 != 0 )
  {
    sub_35AAF0(result, 37, a2, -1);
    v6 = sub_35AACE(v3, 134, a2);
    sub_35AAF0(v3, 16, 0, a3);
    return (_DWORD *)sub_34E46E((int)v3, v6);
  }
  return result;
}


//======================================================================
// sub_35ABE6
// address: 0x0035ABE6   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall sub_35ABE6(__int64 a1, int a2, _DWORD *a3)
{
  int v3; // r7
  int *v5; // r6
  _DWORD *v6; // r5
  int v7; // r1
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v3 = a1;
  v5 = *(int **)(a1 + 8);
  if ( a3 != nullptr )
  {
    v6 = a3;
    v7 = HIDWORD(a1) - (_DWORD)a3;
    while ( 1 )
    {
      HIDWORD(v9) = (char *)v6 + v7;
      if ( a2 <= 0 || *(_BYTE *)v6 != 98 )
        break;
      --a2;
      v6 = (_DWORD *)((char *)v6 + 1);
    }
    while ( a2 > 1 )
    {
      if ( *((_BYTE *)v6 + a2 - 1) != 98 )
        goto LABEL_10;
      --a2;
    }
    if ( a2 != 1 )
      return v9;
LABEL_10:
    sub_35AAF0(v5, 47, SHIDWORD(v9), a2);
    sub_355AEA(v5, -1, v6, a2);
    sub_3532D2(v3, SHIDWORD(v9), a2);
  }
  return v9;
}


//======================================================================
// sub_35AC42
// address: 0x0035AC42   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_35AC42(_DWORD *a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r7
  int v6; // r5
  int v8; // [sp+0h] [bp-Ch]

  v4 = sub_34EA6E((int)a1);
  v5 = (_DWORD *)a1[2];
  v6 = v4;
  sub_35AAF0(v5, 25, **(_DWORD **)(*(_DWORD *)(*a1 + 16) + 16 * a2 + 12) + 1, v4);
  sub_35A902(v5, 51, a2, 1, v6);
  sub_353416((int)a1, v6);
  return v8;
}


//======================================================================
// sub_35AC80
// address: 0x0035AC80   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_35AC80(int *a1, int a2, _DWORD *a3)
{
  int v3; // r4
  int v6; // r0
  int v8; // [sp+0h] [bp-8h]

  v3 = 0;
  v6 = sub_35A902(a1, 118, a2, 0, 0);
  sub_355AEA(a1, v6, a3, -1);
  while ( v3 < *(_DWORD *)(*a1 + 20) )
    sub_34E4B0(a1, v3++);
  return v8;
}


//======================================================================
// sub_35ACBA
// address: 0x0035ACBA   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_35ACBA(int a1, int a2, int a3, int a4)
{
  int v8; // r3
  int v9; // r5
  int v10; // r7
  int v11; // r6
  int v12; // r2
  int v14; // [sp+0h] [bp-Ch]

  sub_35A902(*(_DWORD **)(a1 + 8), 32, a2, a3, a4 - 1);
  v8 = a1 + 120;
  v9 = a1 + 320;
  v10 = a2 + a4;
  v11 = a3 - a2;
  do
  {
    v12 = *(_DWORD *)(v8 + 12);
    if ( v12 >= a2 && v12 < v10 )
      *(_DWORD *)(v8 + 12) = v12 + v11;
    v8 += 20;
  }
  while ( v8 != v9 );
  return v14;
}


//======================================================================
// sub_35ACF6
// address: 0x0035ACF6   size: 0x1DE (478 bytes)
//======================================================================
int __fastcall sub_35ACF6(_DWORD *a1, _DWORD *a2, int a3, int a4, int a5, int a6, _DWORD *a7, int a8)
{
  int *v8; // r6
  int v12; // r2
  int v13; // r3
  int v14; // r0
  int v15; // r2
  int v17; // [sp+1Ch] [bp-20h]
  int v18; // [sp+20h] [bp-1Ch]
  int v19; // [sp+24h] [bp-18h]
  int v20; // [sp+28h] [bp-14h]
  unsigned int v22; // [sp+30h] [bp-Ch]
  int v23; // [sp+34h] [bp-8h]

  v8 = (int *)a1[2];
  v23 = v8[8];
  v19 = sub_35A856(v8[6]);
  if ( a6 != 0 )
  {
    v22 = sub_35AACE(v8, 45, a6);
    v20 = a6 + 1;
    v12 = *(_DWORD *)(a3 + 8);
    v13 = *(_DWORD *)(a3 + 12);
    if ( a7 != nullptr )
      ++*a7;
    v14 = sub_35A9FC(v8, 41, v12, v20, v13, a7, -6);
    sub_35A902(v8, 42, v14 + 2, v19, v14 + 2);
    sub_34E46E((int)v8, v22);
    sub_35A902(v8, 33, *(_DWORD *)(a3 + 8), v20, *(_DWORD *)(a3 + 12) - 1);
    sub_35AAF0(v8, 25, 1, a6);
  }
  if ( *(_BYTE *)(*a1 + 64) != 0 )
    return 0;
  sub_35ABA8(v8, a2[3], v19);
  switch ( *(_BYTE *)a4 )
  {
    case 6:
      sub_35ACBA((int)a1, *(_DWORD *)(a3 + 8), *(_DWORD *)(a4 + 4), 1);
      break;
    case 7:
      *(_BYTE *)(a4 + 1) = sub_34ED7C(**(_DWORD ***)(*a2 + 8), *(unsigned __int8 *)(a4 + 1));
      v17 = sub_34EA6E((int)a1);
      sub_35A9FC(v8, 48, *(_DWORD *)(a3 + 8), 1, v17, (_DWORD *)(a4 + 1), 1);
      sub_3532D2((int)a1, *(_DWORD *)(a3 + 8), 1);
      sub_35AAF0(v8, 107, *(_DWORD *)(a4 + 4), v17);
      goto LABEL_10;
    case 8:
    case 0xA:
      v17 = sub_34EA6E((int)a1);
      v18 = sub_34EA6E((int)a1);
      sub_35A902(v8, 48, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12), v17);
      sub_35AAF0(v8, 69, *(_DWORD *)(a4 + 4), v18);
      sub_35A902(v8, 70, *(_DWORD *)(a4 + 4), v17, v18);
      sub_34E458((int)v8, 8);
      sub_353416((int)a1, v18);
LABEL_10:
      sub_353416((int)a1, v17);
      break;
    case 9:
      if ( *(_DWORD *)(a4 + 8) == 0 )
      {
        *(_DWORD *)(a4 + 8) = sub_34EA92(a1, *(_DWORD *)(a3 + 12));
        *(_DWORD *)(a4 + 12) = *(_DWORD *)(a3 + 12);
      }
      sub_35ACBA((int)a1, *(_DWORD *)(a3 + 8), *(_DWORD *)(a4 + 8), *(_DWORD *)(a4 + 12));
      sub_35AACE(v8, 22, *(_DWORD *)(a4 + 4));
      break;
    default:
      sub_35AAF0(v8, 35, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12));
      sub_3532D2((int)a1, *(_DWORD *)(a3 + 8), *(_DWORD *)(a3 + 12));
      break;
  }
  v15 = a2[2];
  if ( v15 != 0 )
    sub_35A902(v8, 135, v15, a8, -1);
  sub_34E412((int)v8, v19);
  sub_35AACE(v8, 18, a5);
  return v23;
}


//======================================================================
// sub_35AED4
// address: 0x0035AED4   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_35AED4(int a1, int a2, int a3, _DWORD *a4, int a5)
{
  int *v6; // r6
  int v8; // r4

  v6 = *(int **)(a1 + 8);
  v8 = sub_34EA6E(a1);
  sub_35A98A(v6, 66, a2, a3, a5, a4);
  sub_35A902(v6, 48, a5, (int)a4, v8);
  sub_35AAF0(v6, 107, a2, v8);
  return sub_353416(a1, v8);
}


//======================================================================
// sub_35AF20
// address: 0x0035AF20   size: 0x30E (782 bytes)
//======================================================================
int __fastcall sub_35AF20(unsigned int **a1)
{
  _DWORD *v1; // r6
  int v2; // r4
  int v3; // r7
  int v4; // r1
  int v5; // r5
  int v6; // r1
  int v7; // r2
  unsigned int v8; // r5
  char v9; // r1
  int v10; // r2
  _DWORD **v11; // r4
  unsigned int *v12; // r5
  int v13; // r7
  unsigned __int8 *j; // r0
  int v15; // r3
  int v16; // r7
  int v17; // r2
  int v18; // r3
  int v19; // r7
  unsigned __int8 *v20; // r5
  int v21; // r3
  int v22; // r0
  _DWORD *v23; // r0
  int v25; // [sp+1Ch] [bp-28h]
  int i; // [sp+1Ch] [bp-28h]
  int v27; // [sp+20h] [bp-24h]
  int v28; // [sp+24h] [bp-20h]
  unsigned int v29; // [sp+24h] [bp-20h]
  int v30; // [sp+24h] [bp-20h]
  _DWORD *v31; // [sp+28h] [bp-1Ch]
  int v32; // [sp+28h] [bp-1Ch]
  int v33; // [sp+28h] [bp-1Ch]
  int v35; // [sp+30h] [bp-14h]
  unsigned int *v36; // [sp+34h] [bp-10h]
  unsigned int v37; // [sp+38h] [bp-Ch]
  unsigned int *v38; // [sp+3Ch] [bp-8h]

  v36 = *a1;
  v1 = (_DWORD *)(*a1)[2];
  v38 = a1[1];
  v37 = **a1;
  sub_35331E((int)*a1);
  v28 = *((unsigned __int8 *)a1 + 40) - 1;
  v2 = (int)&a1[18 * v28 + 189];
  while ( v28 != -1 )
  {
    v3 = *(_DWORD *)(v2 + 36);
    sub_34E412((int)v1, *(_DWORD *)(v2 + 4));
    v4 = *(unsigned __int8 *)(v2 + 17);
    if ( v4 != 155 )
    {
      sub_35A902(v1, v4, *(_DWORD *)(v2 + 20), *(_DWORD *)(v2 + 24), *(unsigned __int8 *)(v2 + 18));
      sub_34E458((int)v1, *(_BYTE *)(v2 + 19));
    }
    if ( (*(_DWORD *)(v3 + 36) & 0x800) != 0 && *(int *)(v2 + 28) > 0 )
    {
      sub_34E412((int)v1, *(_DWORD *)(v2 - 4));
      v25 = *(_DWORD *)(v2 + 28);
      v5 = *(_DWORD *)(v2 + 32) + 12 * v25 - 12;
      while ( v25 > 0 )
      {
        v6 = *(_DWORD *)(v5 + 4);
        v5 -= 12;
        sub_34E46E((int)v1, v6 + 1);
        sub_35AAF0(v1, *(_BYTE *)(v5 + 20), *(_DWORD *)(v5 + 12), *(_DWORD *)(v5 + 16));
        sub_34E46E((int)v1, *(_DWORD *)(v5 + 16) - 1);
        --v25;
      }
      sub_354940((_DWORD *)v37, *(_DWORD **)(v2 + 32));
    }
    sub_34E412((int)v1, *(_DWORD *)(v2 - 8));
    if ( *(_DWORD *)v2 != 0 )
    {
      sub_35AAF0(v1, 16, 0, *(_DWORD *)v2);
      sub_34E46E((int)v1, *(_DWORD *)v2);
      sub_34E46E((int)v1, *(_DWORD *)v2 - 2);
    }
    v7 = *(_DWORD *)(v2 - 20);
    if ( v7 != 0 )
    {
      v8 = sub_35AACE(v1, 132, v7);
      if ( (*(_DWORD *)(v3 + 36) & 0x40) == 0 )
        sub_35AACE(v1, 101, v38[18 * v28 + 12]);
      if ( (*(_DWORD *)(v3 + 36) & 0x200) != 0 )
        sub_35AACE(v1, 101, *(_DWORD *)(v2 - 12));
      if ( *(_BYTE *)(v2 + 17) == 18 )
      {
        v9 = 17;
        v10 = *(_DWORD *)(v2 + 20);
      }
      else
      {
        v9 = 16;
        v10 = 0;
      }
      sub_35AAF0(v1, v9, v10, *(_DWORD *)(v2 + 8));
      sub_34E46E((int)v1, v8);
    }
    v2 -= 72;
    --v28;
  }
  sub_34E412((int)v1, (int)a1[13]);
  v11 = a1 + 184;
  for ( i = 0; i < *((unsigned __int8 *)a1 + 40); ++i )
  {
    v12 = &v38[18 * *((unsigned __int8 *)v11 + 36) + 2];
    v31 = v11[14];
    v29 = v12[4];
    if ( (*((_BYTE *)v12 + 37) & 4) != 0 )
    {
      v13 = *(unsigned __int8 *)(v37 + 64);
      if ( *(_BYTE *)(v37 + 64) == 0 )
      {
        v30 = (int)v11[8];
        v32 = v1[8];
        for ( j = (unsigned __int8 *)sub_34E484(v1, v30); ; j += 20 )
        {
          if ( v30 >= v32 )
            goto LABEL_63;
          if ( *((_DWORD **)j + 1) == v11[1] )
          {
            v15 = *j;
            if ( v15 == 46 )
            {
              *j = 33;
              *((_DWORD *)j + 1) = *((_DWORD *)j + 2) + v12[8];
              *((_DWORD *)j + 2) = *((_DWORD *)j + 3);
            }
            else
            {
              if ( v15 != 100 )
                goto LABEL_36;
              *j = 28;
              *((_DWORD *)j + 1) = v13;
            }
            *((_DWORD *)j + 3) = v13;
          }
LABEL_36:
          ++v30;
        }
      }
    }
    if ( (*(_BYTE *)(v29 + 44) & 2) == 0 && *(_DWORD *)(v29 + 12) == 0 && (*((_WORD *)a1 + 17) & 0x10) == 0 )
    {
      v16 = v31[9];
      if ( *((_BYTE *)a1 + 37) == 0 && (v16 & 0x40) == 0 )
        sub_35AACE(v1, 58, v12[10]);
      if ( (v16 & 0x4300) == 0x200 )
      {
        v17 = (int)v11[2];
        if ( (unsigned int *)v17 != a1[16] )
          sub_35AACE(v1, 58, v17);
      }
    }
    v18 = v31[9];
    if ( (v18 & 0x240) != 0 )
    {
      v33 = v31[7];
    }
    else
    {
      if ( (v18 & 0x2000) == 0 )
        goto LABEL_63;
      v33 = (int)v11[12];
    }
    if ( v33 != 0 && *(_BYTE *)(v37 + 64) == 0 )
    {
      v19 = (int)v11[8];
      v35 = v1[8];
      v20 = (unsigned __int8 *)sub_34E484(v1, v19);
      while ( v19 < v35 )
      {
        if ( *((_DWORD **)v20 + 1) == v11[1] )
        {
          v21 = *v20;
          if ( v21 == 46 )
          {
            v27 = *((_DWORD *)v20 + 2);
            if ( (*(_BYTE *)(v29 + 44) & 0x20) != 0 )
              LOWORD(v27) = *(_WORD *)(*(_DWORD *)(sub_35344C(*(_DWORD *)(v29 + 8)) + 4) + 2 * v27);
            v22 = sub_34EBF4(v33, (__int16)v27);
            if ( v22 >= 0 )
            {
              *((_DWORD *)v20 + 2) = v22;
              *((_DWORD *)v20 + 1) = v11[2];
            }
          }
          else if ( v21 == 100 )
          {
            v23 = v11[2];
            *v20 = 109;
            *((_DWORD *)v20 + 1) = v23;
          }
        }
        ++v19;
        v20 += 20;
      }
    }
LABEL_63:
    v11 += 18;
  }
  v36[107] = (unsigned int)a1[14];
  return sub_357A20(__SPAIR64__((unsigned int)a1, v37));
}


//======================================================================
// sub_35B22E
// address: 0x0035B22E   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_35B22E(_DWORD *a1, int a2, _BYTE *a3)
{
  int v6; // r2
  int result; // r0
  int v8; // r3
  int v9; // r3
  int v10; // r7
  int v11; // r7

  if ( a2 + a1[8] <= *(_DWORD *)(a1[6] + 88) || (v8 = sub_35A8C8((int)a1), result = 0, v8 == 0) )
  {
    v6 = 0;
    result = a1[8];
    if ( a2 > 0 )
    {
      do
      {
        v9 = a1[1] + 20 * (v6 + result);
        v10 = (char)a3[2];
        *(_BYTE *)v9 = *a3;
        *(_DWORD *)(v9 + 4) = (char)a3[1];
        if ( v10 < 0 )
          v10 = result + ~v10;
        *(_DWORD *)(v9 + 8) = v10;
        v11 = (char)a3[3];
        *(_BYTE *)(v9 + 1) = 0;
        ++v6;
        *(_DWORD *)(v9 + 12) = v11;
        *(_DWORD *)(v9 + 16) = 0;
        *(_BYTE *)(v9 + 3) = 0;
        a3 += 4;
      }
      while ( v6 != a2 );
      a1[8] += v6;
    }
  }
  return result;
}


//======================================================================
// sub_35B2A2
// address: 0x0035B2A2   size: 0xA6 (166 bytes)
//======================================================================
int *__fastcall sub_35B2A2(int a1, int *a2, int a3, int a4)
{
  int *v4; // r4
  unsigned int v5; // r2
  int v7; // r0
  int *v8; // r5
  int v9; // r5
  size_t v10; // r7
  char *v11; // r6
  int i; // r3
  int v14; // [sp+4h] [bp-10h]

  v4 = a2;
  v5 = a3 + *a2;
  if ( v5 > a2[1] )
  {
    v7 = sub_3595BC(a1, (unsigned int)a2, 72 * (v5 - 1) + 80);
    v8 = (int *)v7;
    if ( v7 == 0 )
      return v4;
    *(_DWORD *)(v7 + 4) = (sub_354918(a1, v7) - 80) / 0x48u + 1;
    v4 = v8;
  }
  v9 = *v4 - 1;
  v10 = 72 * a3;
  v14 = *v4;
  v11 = (char *)&v4[18 * v9 + 2];
  while ( v9 >= a4 )
  {
    j_memcpy(&v11[v10], v11, 0x48u);
    --v9;
    v11 -= 72;
  }
  *v4 = v14 + a3;
  j_memset(&v4[18 * a4 + 2], 0, v10);
  for ( i = a4; i < a4 + a3; ++i )
    v4[18 * i + 12] = -1;
  return v4;
}


//======================================================================
// sub_35B348
// address: 0x0035B348   size: 0x72 (114 bytes)
//======================================================================
int *__fastcall sub_35B348(int a1, int *a2, int a3, _DWORD *a4)
{
  int *result; // r0
  int *v7; // r0
  int *v8; // r6
  int *v9; // r7
  _DWORD *v10; // r3

  if ( a2 == nullptr )
  {
    result = (int *)sub_351894(a1, 0x50u);
    a2 = result;
    if ( result == nullptr )
      return result;
    result[1] = 1;
  }
  v7 = sub_35B2A2(a1, a2, 1, *a2);
  v8 = v7;
  if ( *(_BYTE *)(a1 + 64) != 0 )
  {
    sub_3550CC((_DWORD *)a1, v7);
    return nullptr;
  }
  else
  {
    v9 = &v7[18 * *v7 - 16];
    if ( a4 != nullptr )
    {
      v10 = (_DWORD *)*a4;
      if ( *a4 != 0 )
      {
        v10 = (_DWORD *)a3;
        a3 = (int)a4;
      }
      a4 = v10;
    }
    v9[2] = (int)sub_351C1C(a1, a3);
    v9[1] = (int)sub_351C1C(a1, (int)a4);
    return v8;
  }
}


//======================================================================
// sub_35B3BA
// address: 0x0035B3BA   size: 0x48 (72 bytes)
//======================================================================
int *__fastcall sub_35B3BA(int *a1, int a2)
{
  int *v4; // r4
  int v5; // r5
  int v6; // r0
  int v7; // r6

  v4 = sub_35B348(*a1, nullptr, a2 + 12, nullptr);
  if ( v4 != nullptr )
  {
    v5 = *a1;
    v6 = sub_34F2A0(v5, *(_DWORD *)(*(_DWORD *)(a2 + 4) + 20));
    if ( v6 == 0 || v6 > 1 )
    {
      v7 = *v4;
      v4[18 * v7 - 15] = (int)sub_351BC8(v5, *(void **)(16 * v6 + *(_DWORD *)(v5 + 16)));
    }
  }
  return v4;
}


//======================================================================
// sub_35B402
// address: 0x0035B402   size: 0x4C (76 bytes)
//======================================================================
unsigned int __fastcall sub_35B402(int a1, unsigned int a2, size_t a3, int *a4, _DWORD *a5)
{
  int v5; // r4
  unsigned int v7; // r5
  int v9; // r2
  int v10; // r0

  v5 = *a4;
  v7 = a2;
  if ( (*a4 & (*a4 - 1)) != 0 )
    goto LABEL_7;
  v9 = 1;
  if ( v5 != 0 )
    v9 = 2 * v5;
  v10 = sub_3595BC(a1, a2, v9 * a3);
  if ( v10 != 0 )
  {
    v7 = v10;
LABEL_7:
    j_memset((void *)(v7 + a3 * v5), 0, a3);
    *a5 = v5;
    ++*a4;
    return v7;
  }
  *a5 = -1;
  return v7;
}


//======================================================================
// sub_35B44E
// address: 0x0035B44E   size: 0x1E6 (486 bytes)
//======================================================================
int __fastcall sub_35B44E(int a1, unsigned __int8 *a2)
{
  int v3; // r3
  unsigned int v4; // r6
  int *v5; // r5
  _DWORD *v6; // r1
  _DWORD *v7; // r7
  unsigned int v8; // r2
  int i; // r3
  int v10; // r2
  int j; // r3
  unsigned int v12; // r0
  _DWORD *v13; // r0
  int v14; // r2
  int *v15; // r2
  int v16; // r12
  int k; // r2
  unsigned __int8 *v18; // r1
  int v19; // r2
  int v20; // r2
  unsigned int v21; // r6
  unsigned int v22; // r0
  _DWORD *v23; // r6
  int v24; // r3
  size_t v25; // r0
  int *v26; // r3
  int v27; // r3
  int v28; // r3
  int v29; // r3
  int v31; // [sp+8h] [bp-1Ch]
  int v32; // [sp+8h] [bp-1Ch]
  int v33; // [sp+Ch] [bp-18h]
  int v34; // [sp+Ch] [bp-18h]
  unsigned __int8 *v35; // [sp+Ch] [bp-18h]
  unsigned __int8 v36; // [sp+10h] [bp-14h]
  int v37; // [sp+14h] [bp-10h]
  _DWORD v38[2]; // [sp+1Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 20);
  v4 = *a2 << 24;
  v5 = *(int **)v3;
  v6 = *(_DWORD **)(v3 + 4);
  v7 = *(_DWORD **)(v3 + 12);
  v8 = HIBYTE(v4);
  if ( HIBYTE(v4) != 155 )
  {
    if ( v8 != 156 && v8 != 154 )
      return 0;
    if ( v6 != nullptr )
    {
      for ( i = 0; i < *v6; ++i )
      {
        v31 = *((_DWORD *)a2 + 7);
        if ( v31 == v6[18 * i + 12] )
        {
          v10 = v7[7];
          for ( j = 0; j < v7[8]; ++j )
          {
            if ( *(_DWORD *)(v10 + 4) == v31 && *(_DWORD *)(v10 + 8) == *((__int16 *)a2 + 16) )
              goto LABEL_24;
            v10 += 24;
          }
          v12 = sub_35B402(*v5, v7[7], 0x18u, v7 + 8, v38);
          v7[7] = v12;
          LOWORD(j) = v38[0];
          if ( v38[0] >= 0 )
          {
            v13 = (_DWORD *)(v12 + 24 * v38[0]);
            *v13 = *((_DWORD *)a2 + 11);
            v13[1] = *((_DWORD *)a2 + 7);
            v13[2] = *((__int16 *)a2 + 16);
            v14 = v5[19] + 1;
            v5[19] = v14;
            v13[4] = v14;
            v13[3] = -1;
            v13[5] = a2;
            v15 = (int *)v7[6];
            if ( v15 != nullptr )
            {
              v33 = v15[2];
              v16 = *v15;
              for ( k = 0; k < v16; ++k )
              {
                v18 = *(unsigned __int8 **)(v33 + 20 * k);
                if ( *v18 == 154
                  && *((_DWORD *)v18 + 7) == *((_DWORD *)a2 + 7)
                  && *((__int16 *)v18 + 16) == *((__int16 *)a2 + 16) )
                {
                  v13[3] = k;
                  break;
                }
              }
            }
            if ( (int)v13[3] < 0 )
            {
              v19 = v7[3];
              v7[3] = v19 + 1;
              v13[3] = v19;
            }
          }
LABEL_24:
          *((_DWORD *)a2 + 10) = v7;
          *a2 = -100;
          *((_WORD *)a2 + 17) = j;
          return 1;
        }
      }
    }
    return 1;
  }
  v20 = *(_BYTE *)(v3 + 28) & 8;
  v29 = 0;
  if ( v20 == 0 )
  {
    v29 = 0;
    if ( *(_DWORD *)(a1 + 16) == a2[38] )
    {
      v21 = v7[10];
      v32 = 0;
      v34 = v7[11];
      while ( v32 < v34 )
      {
        if ( sub_354228(*(unsigned __int8 **)(v21 + 16 * v32), a2, -1) == 0 )
          goto LABEL_38;
        ++v32;
      }
      v36 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*v5 + 16) + 12) + 77);
      v22 = sub_35B402(*v5, v21, 0x10u, v7 + 11, v38);
      v7[10] = v22;
      LOWORD(v32) = v38[0];
      if ( v38[0] >= 0 )
      {
        v23 = (_DWORD *)(v22 + 16 * v38[0]);
        *v23 = a2;
        v24 = v5[19] + 1;
        v5[19] = v24;
        v23[2] = v24;
        v37 = *v5;
        v35 = *((unsigned __int8 **)a2 + 2);
        v25 = sub_34CF50((unsigned int)v35);
        v26 = *((int **)a2 + 5);
        if ( v26 != nullptr )
          v27 = *v26;
        else
          v27 = 0;
        v23[1] = sub_3534B0(v37, v35, v25, v27, v36, 0);
        if ( (*((_DWORD *)a2 + 1) & 0x10) != 0 )
        {
          v28 = v5[18];
          v5[18] = v28 + 1;
        }
        else
        {
          v28 = -1;
        }
        v23[3] = v28;
      }
LABEL_38:
      *((_DWORD *)a2 + 10) = v7;
      *((_WORD *)a2 + 17) = v32;
      return 1;
    }
  }
  return v29;
}


//======================================================================
// sub_35B634
// address: 0x0035B634   size: 0x50 (80 bytes)
//======================================================================
_DWORD *__fastcall sub_35B634(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // r4
  unsigned int v6; // r0
  unsigned __int8 **v8; // r7
  int v9; // [sp+Ch] [bp-8h] BYREF

  v4 = a2;
  if ( a2 != nullptr || (v4 = sub_351894((int)a1, 8u)) != nullptr )
  {
    v6 = sub_35B402((int)a1, *v4, 8u, v4 + 1, &v9);
    *v4 = v6;
    if ( v9 < 0 )
    {
      sub_354DDC(a1, v4);
      return nullptr;
    }
    v8 = (unsigned __int8 **)(v6 + 8 * v9);
    *v8 = sub_351C1C((int)a1, a3);
  }
  return v4;
}


//======================================================================
// sub_35B684
// address: 0x0035B684   size: 0x6E (110 bytes)
//======================================================================
_DWORD *__fastcall sub_35B684(_DWORD *a1, _DWORD *a2, int a3)
{
  _DWORD *v4; // r4
  int v6; // r0
  int v7; // r0
  int v8; // r5
  int *v9; // r5

  v4 = a2;
  if ( a2 == nullptr )
  {
    v4 = sub_351894((int)a1, 0xCu);
    if ( v4 == nullptr )
      goto LABEL_9;
    v6 = sub_3516AC((int)a1, 20);
    v4[2] = v6;
    if ( v6 == 0 )
      goto LABEL_9;
LABEL_8:
    v8 = 20 * (*v4)++;
    v9 = (int *)(v4[2] + v8);
    j_memset(v9, 0, 0x14u);
    *v9 = a3;
    return v4;
  }
  if ( (*a2 & (*a2 - 1)) != 0 )
    goto LABEL_8;
  v7 = sub_3595BC((int)a1, a2[2], 40 * *a2);
  if ( v7 != 0 )
  {
    v4[2] = v7;
    goto LABEL_8;
  }
LABEL_9:
  sub_35519A(a1, a3);
  sub_3551E8(a1, v4);
  return nullptr;
}


//======================================================================
// sub_35B6F2
// address: 0x0035B6F2   size: 0x48 (72 bytes)
//======================================================================
unsigned __int64 __fastcall sub_35B6F2(int *a1, _DWORD *a2, int a3, unsigned int a4)
{
  int *v6; // r5
  _DWORD *v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r0
  int v10; // r3
  unsigned __int64 v12; // [sp+0h] [bp-Ch]

  v12 = __PAIR64__(a4, (unsigned int)a1);
  v6 = a1 + 63;
  v7 = (_DWORD *)a1[80];
  v8 = sub_3568BC(*a1, a2, 0);
  v9 = sub_35B684((_DWORD *)*a1, v7, (int)v8);
  if ( v9 != nullptr )
  {
    v10 = v9[2] + 20 * *v9 - 20;
    *(_DWORD *)(v10 + 16) = a3;
    *(_BYTE *)(v10 + 13) = *(_BYTE *)(v10 + 13) & 0xFB | (4 * (BYTE4(v12) & 1));
  }
  v6[17] = (int)v9;
  return v12;
}


//======================================================================
// sub_35B73A
// address: 0x0035B73A   size: 0x4A (74 bytes)
//======================================================================
int *__fastcall sub_35B73A(int *a1, int a2)
{
  int v2; // r5
  int *result; // r0

  v2 = a1[122];
  if ( v2 == 0 || *((_BYTE *)a1 + 455) != 0 )
    return sub_35519A((_DWORD *)*a1, a2);
  result = sub_35B684((_DWORD *)*a1, *(_DWORD **)(v2 + 24), a2);
  *(_DWORD *)(v2 + 24) = result;
  if ( a1[82] != 0 )
    return sub_354070(a1, result, (int)(a1 + 81), 1);
  return result;
}


//======================================================================
// sub_35B784
// address: 0x0035B784   size: 0xB2 (178 bytes)
//======================================================================
_BYTE *__fastcall sub_35B784(
        int *a1,
        _DWORD *a2,
        void *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int16 a8,
        int a9,
        int a10)
{
  int v10; // r5
  _BYTE *v13; // r4
  _WORD *v14; // r0
  _BYTE v18[84]; // [sp+10h] [bp-54h] BYREF

  v10 = *a1;
  v13 = sub_351894(*a1, 0x50u);
  if ( v13 == nullptr )
  {
    j_memset(v18, 0, 0x50u);
    v13 = v18;
  }
  if ( a2 == nullptr )
  {
    v14 = sub_351B26(v10, 116, nullptr);
    a2 = sub_35B684((_DWORD *)*a1, nullptr, (int)v14);
  }
  *(_DWORD *)v13 = a2;
  if ( a3 == nullptr )
    a3 = sub_351894(v10, 0x50u);
  *((_DWORD *)v13 + 10) = a3;
  *((_DWORD *)v13 + 11) = a4;
  *((_DWORD *)v13 + 12) = a5;
  *((_DWORD *)v13 + 13) = a6;
  *((_DWORD *)v13 + 14) = a7;
  *((_WORD *)v13 + 3) = a8;
  v13[4] = 119;
  *((_DWORD *)v13 + 17) = a9;
  *((_DWORD *)v13 + 18) = a10;
  *((_DWORD *)v13 + 4) = -1;
  *((_DWORD *)v13 + 5) = -1;
  *((_DWORD *)v13 + 6) = -1;
  if ( *(_BYTE *)(v10 + 64) != 0 )
  {
    sub_35512E((_DWORD *)v10, (int)v13);
    if ( v13 != v18 )
      sub_354940((_DWORD *)v10, v13);
    return nullptr;
  }
  return v13;
}


//======================================================================
// sub_35B836
// address: 0x0035B836   size: 0x62 (98 bytes)
//======================================================================
__int64 __fastcall sub_35B836(_DWORD *a1, int a2, int a3)
{
  int v5; // r7
  int v6; // r0
  int v7; // r5
  int i; // r7
  int v9; // r7
  __int64 v11; // [sp+0h] [bp-Ch]

  HIDWORD(v11) = a3;
  v5 = 4 * (*(_DWORD *)(a2 + 52) + 2);
  LODWORD(v11) = *(_DWORD *)(a2 + 52);
  *(_DWORD *)(a2 + 52) = v11 + 1;
  v6 = sub_3595BC((int)a1, *(_DWORD *)(a2 + 56), v5);
  v7 = v6;
  if ( v6 != 0 )
  {
    v9 = v5 - 8;
    *(_DWORD *)(v6 + v9) = HIDWORD(v11);
    *(_DWORD *)(v6 + v9 + 4) = 0;
  }
  else
  {
    for ( i = 0; i < (int)v11; ++i )
      sub_354940(a1, *(_DWORD **)(4 * i + *(_DWORD *)(a2 + 56)));
    sub_354940(a1, (_DWORD *)HIDWORD(v11));
    sub_354940(a1, *(_DWORD **)(a2 + 56));
    *(_DWORD *)(a2 + 52) = 0;
  }
  *(_DWORD *)(a2 + 56) = v7;
  return v11;
}


//======================================================================
// sub_35B898
// address: 0x0035B898   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_35B898(int *result)
{
  const void *v1; // r1
  int v2; // r4
  _DWORD *v3; // r5
  _BYTE *v4; // r0

  v1 = (const void *)result[129];
  if ( v1 != nullptr )
  {
    v2 = result[122];
    if ( v2 != 0 )
    {
      v3 = (_DWORD *)*result;
      v4 = sub_351BF2(*result, v1, result[130]);
      return (int *)sub_35B836(v3, v2, (int)v4);
    }
  }
  return result;
}


//======================================================================
// sub_35B8C8
// address: 0x0035B8C8   size: 0xCA (202 bytes)
//======================================================================
_DWORD *__fastcall sub_35B8C8(int a1, const void *a2, signed int a3)
{
  _DWORD *result; // r0
  signed int v5; // r3
  signed int v6; // r5
  int v7; // r1
  unsigned int v8; // r6
  __int64 v9; // r2
  void *v10; // r0
  void *v11; // r7
  signed int v12; // r2

  result = *(_DWORD **)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 16);
  v6 = a3;
  if ( (int)result + a3 < v5 )
    goto LABEL_17;
  if ( *(_BYTE *)(a1 + 25) != 0 )
    return result;
  v7 = *(unsigned __int8 *)(a1 + 24);
  if ( *(_BYTE *)(a1 + 24) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 4) ? *(_DWORD *)(a1 + 8) : 0;
    v9 = (__int64)result + a3 + 1;
    if ( v9 > *(int *)(a1 + 20) )
    {
      result = sub_354988((_DWORD *)a1);
      *(_BYTE *)(a1 + 25) = 2;
      *(_DWORD *)(a1 + 16) = 0;
      return result;
    }
    *(_DWORD *)(a1 + 16) = v9;
    if ( v7 == 1 )
      v10 = (void *)sub_3595BC(*(_DWORD *)a1, v8, v9);
    else
      v10 = (void *)sqlite3_realloc(v8, v9);
    v11 = v10;
    if ( v10 == nullptr )
    {
      result = sub_354988((_DWORD *)a1);
      *(_BYTE *)(a1 + 25) = 1;
      *(_DWORD *)(a1 + 16) = 0;
      return result;
    }
    if ( v8 == 0 )
    {
      v12 = *(_DWORD *)(a1 + 12);
      if ( v12 > 0 )
        j_memcpy(v10, *(const void **)(a1 + 8), v12);
    }
    *(_DWORD *)(a1 + 8) = v11;
    goto LABEL_17;
  }
  v6 = v5 - (_DWORD)result - 1;
  *(_BYTE *)(a1 + 25) = 2;
  *(_DWORD *)(a1 + 16) = v7;
  if ( v6 > 0 )
  {
LABEL_17:
    j_memcpy((void *)(*(_DWORD *)(a1 + 8) + *(_DWORD *)(a1 + 12)), a2, v6);
    result = *(_DWORD **)(a1 + 12);
    *(_DWORD *)(a1 + 12) = (char *)result + v6;
  }
  return result;
}


//======================================================================
// sub_35B992
// address: 0x0035B992   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall sub_35B992(int a1, const void *a2)
{
  unsigned int v4; // r0

  v4 = sub_34CF50((unsigned int)a2);
  return sub_35B8C8(a1, a2, v4);
}


//======================================================================
// sub_35B9AC
// address: 0x0035B9AC   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_35B9AC(_DWORD *result, signed int a2)
{
  int v2; // r5

  v2 = (int)result;
  while ( a2 > 28 )
  {
    result = sub_35B8C8(v2, "                             ", 29);
    a2 -= 29;
  }
  if ( a2 > 0 )
    return sub_35B8C8(v2, "                             ", a2);
  return result;
}


//======================================================================
// sub_35B9E4
// address: 0x0035B9E4   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall sub_35B9E4(int a1, int a2, const void *a3, const void *a4)
{
  if ( a2 != 0 )
    sub_35B8C8(a1, " AND ", 5);
  sub_35B992(a1, a3);
  sub_35B8C8(a1, a4, 1);
  return sub_35B8C8(a1, "?", 1);
}


//======================================================================
// sub_35BA28
// address: 0x0035BA28   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_35BA28(
        int a1,
        int a2,
        int a3,
        void **a4,
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
        int a36)
{
  void *v36; // r2
  int v37; // r0

  v36 = &_stack_chk_guard;
  v37 = _stack_chk_guard;
  if ( a2 != 0 )
  {
    v37 = 0;
    if ( (a2 & 2) != 0 )
      v36 = *a4;
    a4 = (void **)(&dword_0 + 1);
    a2 &= 1u;
  }
  return sub_35BA6A(
           v37,
           a2,
           (int)v36,
           (int)a4,
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
           a36);
}


//======================================================================
// sub_35BA6A
// address: 0x0035BA6A   size: 0x2C6 (710 bytes)
//======================================================================
int __fastcall sub_35BA6A(
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
        __int64 a19,
        int a20,
        _DWORD *a21,
        int a22,
        int a23,
        __int64 a24,
        int a25,
        int a26,
        int a27,
        int a28,
        char *a29,
        int a30,
        int a31,
        int a32,
        int a33,
        int a34)
{
  _DWORD *v34; // r4
  unsigned __int8 *v35; // r5
  int v36; // r3
  unsigned __int8 *v37; // r3
  int v38; // r7
  signed int v39; // r2
  unsigned __int8 *v40; // r6
  _DWORD *v41; // r0
  int v42; // r1
  int v43; // r2
  int v44; // r3
  _DWORD *v45; // r0
  int v46; // r1
  int v47; // r2
  __int64 v48; // r0
  __int64 v49; // r0
  int v50; // r2
  int i; // r0
  char *v52; // r6
  int v53; // r3
  int v54; // r5
  __int64 v55; // r0
  _DWORD *v56; // r3
  int v58; // [sp+10h] [bp+10h]
  int v59; // [sp+18h] [bp+18h]
  int v60; // [sp+20h] [bp+20h]
  int v61; // [sp+24h] [bp+24h]
  int v62; // [sp+28h] [bp+28h]
  int v63; // [sp+30h] [bp+30h]
  __int64 v64; // [sp+38h] [bp+38h]
  int v65; // [sp+58h] [bp+58h]
  int v66; // [sp+5Ch] [bp+5Ch]
  int v67; // [sp+60h] [bp+60h]

  v36 = *v35;
  if ( *v35 == 0 )
    sub_35C61C(a1, a2, a3);
  if ( v36 != 37 )
  {
    v37 = v35 + 1;
    do
    {
      v38 = *v37;
      v39 = v37 - v35;
      v40 = v37;
      if ( v38 == 37 )
        break;
      ++v37;
    }
    while ( v38 != 0 );
    v41 = sub_35B8C8(a20, v35, v39);
    if ( v38 == 0 )
      sub_35C61C(v41, v42, v43);
    v35 = v40;
  }
  v61 = (int)(v35 + 1);
  v44 = v35[1];
  if ( v35[1] == 0 )
  {
    v45 = sub_35B8C8(a20, "%", 1);
    sub_35C61C(v45, v46, v47);
  }
  v66 = 0;
  v67 = 0;
  v65 = 0;
  v63 = 0;
  v58 = 0;
  while ( 2 )
  {
    switch ( v44 )
    {
      case ' ':
        v63 = 1;
        goto LABEL_19;
      case '!':
        v67 = 1;
        goto LABEL_19;
      case '#':
        v65 = 1;
        goto LABEL_19;
      case '+':
        v58 = 1;
        goto LABEL_19;
      case '-':
        goto LABEL_19;
      case '0':
        v66 = 1;
LABEL_19:
        v44 = *(unsigned __int8 *)++v61;
        if ( v44 == 0 )
          goto LABEL_22;
        continue;
      default:
        if ( v44 == 42 )
        {
          if ( a16 != 0 )
          {
            v48 = sub_352D38(a21);
            v62 = v48;
          }
          else
          {
            HIDWORD(v48) = *v34++;
            v62 = HIDWORD(v48);
          }
          if ( v62 < 0 )
            v62 = -v62;
          v44 = *(unsigned __int8 *)++v61;
        }
        else
        {
LABEL_22:
          v62 = 0;
          HIDWORD(v48) = 10;
          while ( (unsigned int)(v44 - 48) <= 9 )
          {
            v62 = 10 * v62 + v44 - 48;
            v44 = *(unsigned __int8 *)++v61;
          }
        }
        if ( v44 == 46 )
        {
          v44 = *(unsigned __int8 *)(v61 + 1);
          if ( v44 == 42 )
          {
            if ( a16 != 0 )
              LODWORD(v49) = sub_352D38(a21);
            else
              LODWORD(v49) = *v34++;
            v48 = (int)v49;
            v60 = (v49 + ((int)v49 >> 31)) ^ ((int)v49 >> 31);
            v44 = *(unsigned __int8 *)(v61 + 2);
            v61 += 2;
          }
          else
          {
            ++v61;
            v60 = 0;
            HIDWORD(v48) = 10;
            while ( (unsigned int)(v44 - 48) <= 9 )
            {
              v60 = 10 * v60 + v44 - 48;
              v44 = *(unsigned __int8 *)++v61;
            }
          }
        }
        else
        {
          v60 = -1;
        }
        if ( v44 != 108 )
          goto LABEL_45;
        v44 = *(unsigned __int8 *)(v61 + 1);
        if ( v44 == 108 )
        {
          v50 = 1;
          v44 = *(unsigned __int8 *)(v61 + 2);
          v61 += 2;
        }
        else
        {
          ++v61;
LABEL_45:
          v50 = 0;
        }
        for ( i = 0; i != 23; ++i )
        {
          if ( v44 == byte_44B26F[6 * i] )
          {
            v52 = (char *)&byte_44B26F[6 * i];
            a29 = v52;
            if ( a34 == 0 )
            {
              v53 = (unsigned __int8)v52[2];
              if ( (v53 & 2) != 0 )
                sub_35C61C(v53 << 30, HIDWORD(v48), v50);
            }
            LODWORD(v48) = (unsigned __int8)v52[3] - 1;
            a23 = (unsigned __int8)v52[3];
            if ( (unsigned int)v48 > 0xF )
              LODWORD(v48) = sub_35C61C(v48, HIDWORD(v48), v50);
            switch ( (int)v48 )
            {
              case 0:
              case 15:
                goto LABEL_57;
              case 1:
              case 2:
              case 3:
                JUMPOUT(0x35BE60);
              case 4:
                JUMPOUT(0x35C380);
              case 5:
              case 6:
                JUMPOUT(0x35C3E6);
              case 7:
                JUMPOUT(0x35C398);
              case 8:
                JUMPOUT(0x35C3A2);
              case 9:
              case 10:
              case 14:
                JUMPOUT(0x35C462);
              case 11:
                JUMPOUT(0x35C544);
              case 12:
                JUMPOUT(0x35C55E);
              case 13:
                goto LABEL_56;
            }
          }
        }
        sub_35C61C(23, HIDWORD(v48), v50);
LABEL_56:
        v50 = 0;
LABEL_57:
        v54 = a29[2] & 1;
        if ( v54 == 0 )
        {
          if ( a16 != 0 )
          {
            v48 = sub_352D38(a21);
            v64 = v48;
          }
          else if ( v50 != 0 )
          {
            v56 = (_DWORD *)(((unsigned int)v34 + 7) & 0xFFFFFFF8);
            HIDWORD(v48) = *v56;
            v64 = *(_QWORD *)v56;
            v54 = 0;
          }
          else
          {
            v54 = 0;
            v64 = (unsigned int)*v34;
          }
          goto LABEL_75;
        }
        if ( a16 != 0 )
        {
          v55 = sub_352D38(a21);
LABEL_62:
          a24 = v55;
          goto LABEL_64;
        }
        if ( v50 != 0 )
        {
          v55 = *(_QWORD *)(((unsigned int)v34 + 7) & 0xFFFFFFF8);
          goto LABEL_62;
        }
        a24 = (int)*v34;
LABEL_64:
        if ( a24 < 0 )
        {
          if ( a24 == 0x8000000000000000LL )
            sub_35C60C();
          sub_35C610(-(int)a24, (unsigned __int64)-a24 >> 32);
        }
        v59 = 43;
        HIDWORD(v48) = HIDWORD(a24);
        v64 = a24;
        if ( v58 == 0 )
        {
          v54 = 32 * v63;
LABEL_75:
          v59 = v54;
        }
        return sub_35BD30(
                 HIDWORD(v64),
                 HIDWORD(v48),
                 (v64 | HIDWORD(v64)) - 1,
                 -(v64 != 0),
                 a5,
                 a6,
                 a7,
                 a8,
                 v58,
                 a10,
                 v59,
                 a12,
                 v60,
                 v61,
                 v62,
                 a16,
                 v63,
                 a18,
                 v64,
                 HIDWORD(v64),
                 a20,
                 a21,
                 a22,
                 a23,
                 a24,
                 HIDWORD(a24),
                 v64 != 0 ? v65 : 0,
                 v66,
                 v67,
                 a28);
    }
  }
}


//======================================================================
// sub_35BD30
// address: 0x0035BD30   size: 0x8DC (2268 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0035BD30  LDR     R5, [SP,#arg_5C]
//   0035BD32  CMP     R5, #0
//   0035BD34  BEQ     loc_35BD48
//   0035BD36  LDR     R3, [SP,#arg_18]
//   0035BD38  LDR     R5, [SP,#arg_28]
//   0035BD3A  SUBS    R2, R3, #1
//   0035BD3C  SBCS    R3, R2
//   0035BD3E  SUBS    R3, R5, R3
//   0035BD40  LDR     R5, [SP,#arg_20]
//   0035BD42  CMP     R5, R3
//   0035BD44  BGE     loc_35BD48
//   0035BD46  STR     R3, [SP,#arg_20]
//   0035BD48  LDR     R5, [SP,#arg_20]
//   0035BD4A  CMP     R5, #0x3B ; ';'
//   0035BD4C  BLE     loc_35BD68
//   0035BD4E  MOVS    R6, R5
//   0035BD50  ADDS    R6, #0xA
//   0035BD52  MOVS    R0, R6
//   0035BD54  BL      sub_351664
//   0035BD58  CMP     R0, #0
//   0035BD5A  BNE     loc_35BD72
//   0035BD5C  LDR     R5, [SP,#arg_40]
//   0035BD5E  MOVS    R3, #1
//   0035BD60  STRB    R3, [R5,#0x19]
//   0035BD62  STR     R0, [R5,#0x10]
//   0035BD64  BL      sub_35C61C
//   0035BD68  MOVS    R5, #0
//   0035BD6A  STR     R5, [SP,#arg_10]
//   0035BD6C  MOVS    R6, #0x46 ; 'F'
//   0035BD6E  ADD     R0, SP, #arg_8C
//   0035BD70  B       loc_35BD74
//   0035BD72  STR     R0, [SP,#arg_10]
//   0035BD74  LDR     R5, [SP,#arg_4C]
//   0035BD76  SUBS    R6, #1
//   0035BD78  ADDS    R6, R0, R6
//   0035BD7A  STR     R6, [SP,#arg_1C]
//   0035BD7C  MOVS    R7, R6
//   0035BD7E  CMP     R5, #0x10
//   0035BD80  BNE     loc_35BDD2
//   0035BD82  LDR     R0, [SP,#arg_38]
//   0035BD84  LDR     R1, [SP,#arg_38+4]
//   0035BD86  MOVS    R2, #0xA
//   0035BD88  MOVS    R3, #0
//   0035BD8A  BL      j___aeabi_uldivmod
//   0035BD8E  SUBS    R5, R2, #0
//   0035BD90  CMP     R5, #3
//   0035BD92  BGT     loc_35BDB6
//   0035BD94  MOVS    R2, #0xA
//   0035BD96  MOVS    R3, #0
//   0035BD98  LDR     R0, [SP,#arg_38]
//   0035BD9A  LDR     R1, [SP,#arg_38+4]
//   0035BD9C  BL      j___aeabi_uldivmod
//   0035BDA0  MOVS    R2, #0xA
//   0035BDA2  MOVS    R3, #0
//   0035BDA4  BL      j___aeabi_uldivmod
//   0035BDA8  CMP     R2, #1
//   0035BDAA  BNE     loc_35BDB8
//   0035BDAC  SUBS    R2, R3, #1
//   0035BDAE  SBCS    R3, R2
//   0035BDB0  NEGS    R3, R3
//   0035BDB2  ANDS    R5, R3
//   0035BDB4  B       loc_35BDB8
//   0035BDB6  MOVS    R5, #0
//   0035BDB8  LDR     R3, =(unk_44B2A4 - 0x35BDC2)
//   0035BDBA  LSLS    R5, R5, #1
//   0035BDBC  LDR     R2, [SP,#arg_1C]
//   0035BDBE  ADD     R3, PC; unk_44B2A4
//   0035BDC0  ADDS    R3, #(aThstndrd - 0x44B2A4); "thstndrd"
//   0035BDC2  ADDS    R1, R3, R5
//   0035BDC4  LDR     R7, [SP,#arg_1C]
//   0035BDC6  LDRB    R1, [R1,#1]
//   0035BDC8  LDRB    R3, [R3,R5]
//   0035BDCA  SUBS    R2, #1
//   0035BDCC  SUBS    R7, #2
//   0035BDCE  STRB    R1, [R2]
//   0035BDD0  STRB    R3, [R7]
//   0035BDD2  LDR     R5, [SP,#arg_68]
//   0035BDD4  LDR     R6, =(unk_44B2A4 - 0x35BDDC)
//   0035BDD6  LDRB    R3, [R5,#4]
//   0035BDD8  ADD     R6, PC; unk_44B2A4
//   0035BDDA  LDRB    R5, [R5,#1]
//   0035BDDC  ADDS    R6, #(a0123456789abcd_2 - 0x44B2A4); "0123456789ABCDEF0123456789abcdef"
//   0035BDDE  ADDS    R6, R6, R3
//   0035BDE0  LDR     R0, [SP,#arg_38]
//   0035BDE2  LDR     R1, [SP,#arg_38+4]
//   0035BDE4  MOVS    R2, R5
//   0035BDE6  MOVS    R3, #0
//   0035BDE8  BL      j___aeabi_uldivmod
//   0035BDEC  LDR     R0, [SP,#arg_38]
//   0035BDEE  LDR     R1, [SP,#arg_38+4]
//   0035BDF0  LDRB    R3, [R6,R2]
//   0035BDF2  SUBS    R7, #1
//   0035BDF4  MOVS    R2, R5
//   0035BDF6  STRB    R3, [R7]
//   0035BDF8  MOVS    R3, #0
//   0035BDFA  BL      j___aeabi_uldivmod
//   0035BDFE  MOVS    R3, R0
//   0035BE00  STR     R0, [SP,#arg_38]
//   0035BE02  STR     R1, [SP,#arg_38+4]
//   0035BE04  ORRS    R3, R1
//   0035BE06  BNE     loc_35BDE0
//   0035BE08  LDR     R5, [SP,#arg_1C]
//   0035BE0A  MOVS    R2, R7
//   0035BE0C  MOVS    R0, #0x30 ; '0'
//   0035BE0E  SUBS    R6, R5, R7
//   0035BE10  LDR     R5, [SP,#arg_20]
//   0035BE12  SUBS    R6, R5, R6
//   0035BE14  SUBS    R1, R6, R7
//   0035BE16  ADDS    R3, R7, R1
//   0035BE18  CMP     R3, #0
//   0035BE1A  BLE     loc_35BE22
//   0035BE1C  SUBS    R7, #1
//   0035BE1E  STRB    R0, [R7]
//   0035BE20  B       loc_35BE16
//   0035BE22  MVNS    R3, R6
//   0035BE24  LDR     R5, [SP,#arg_18]
//   0035BE26  ASRS    R3, R3, #0x1F
//   0035BE28  ANDS    R6, R3
//   0035BE2A  SUBS    R7, R2, R6
//   0035BE2C  CMP     R5, #0
//   0035BE2E  BEQ     loc_35BE36
//   0035BE30  SUBS    R6, R7, #1
//   0035BE32  STRB    R5, [R6]
//   0035BE34  MOVS    R7, R6
//   0035BE36  LDR     R5, [SP,#arg_58]
//   0035BE38  CMP     R5, #0
//   0035BE3A  BEQ     loc_35BE5A
//   0035BE3C  LDR     R5, [SP,#arg_68]
//   0035BE3E  LDRB    R2, [R5,#5]
//   0035BE40  CMP     R2, #0
//   0035BE42  BEQ     loc_35BE5A
//   0035BE44  LDR     R3, =(unk_44B2A4 - 0x35BE4A)
//   0035BE46  ADD     R3, PC; unk_44B2A4
//   0035BE48  ADDS    R3, #(aX0 - 0x44B2A4); "-x0"
//   0035BE4A  ADDS    R3, R3, R2
//   0035BE4C  LDRB    R2, [R3]
//   0035BE4E  CMP     R2, #0
//   0035BE50  BEQ     loc_35BE5A
//   0035BE52  SUBS    R7, #1
//   0035BE54  STRB    R2, [R7]
//   0035BE56  ADDS    R3, #1
//   0035BE58  B       loc_35BE4C
//   0035BE5A  LDR     R0, [SP,#arg_1C]
//   0035BE5C  SUBS    R5, R0, R7
//   0035BE5E  B       loc_35C540
//   0035BE60  LDR     R5, [SP,#arg_2C]; jumptable 0035BC2E cases 1-3
//   0035BE62  CMP     R5, #0
//   0035BE64  BEQ     loc_35BE8E
//   0035BE66  LDR     R5, [SP,#arg_44]
//   0035BE68  LDR     R3, [R5,#4]
//   0035BE6A  LDR     R0, [R5]
//   0035BE6C  CMP     R0, R3
//   0035BE6E  BLE     loc_35BE84
//   0035BE70  LDR     R1, [R5,#8]
//   0035BE72  ADDS    R2, R3, #1
//   0035BE74  STR     R2, [R5,#4]
//   0035BE76  LSLS    R3, R3, #2
//   0035BE78  LDR     R0, [R3,R1]
//   0035BE7A  BL      sqlite3_value_double
//   0035BE7E  STR     R0, [SP,#arg_1C]
//   0035BE80  STR     R1, [SP,#arg_18]
//   0035BE82  B       loc_35BE8A
//   0035BE84  MOVS    R5, #0
//   0035BE86  STR     R5, [SP,#arg_1C]
//   0035BE88  STR     R5, [SP,#arg_18]
//   0035BE8A  STR     R4, [SP,#arg_48]
//   0035BE8C  B       loc_35BEA2
//   0035BE8E  ADDS    R4, #7
//   0035BE90  MOVS    R3, #7
//   0035BE92  BICS    R4, R3
//   0035BE94  MOVS    R5, R4
//   0035BE96  ADDS    R5, #8
//   0035BE98  STR     R5, [SP,#arg_48]
//   0035BE9A  LDR     R5, [R4]
//   0035BE9C  LDR     R4, [R4,#4]
//   0035BE9E  STR     R5, [SP,#arg_1C]
//   0035BEA0  STR     R4, [SP,#arg_18]
//   0035BEA2  LDR     R5, [SP,#arg_20]
//   0035BEA4  ADDS    R5, #1
//   0035BEA6  BNE     loc_35BEAC
//   0035BEA8  MOVS    R5, #6
//   0035BEAA  STR     R5, [SP,#arg_20]
//   0035BEAC  LDR     R0, [SP,#arg_1C]
//   0035BEAE  LDR     R1, [SP,#arg_18]
//   0035BEB0  LDR     R3, =0
//   0035BEB2  LDR     R2, =0
//   0035BEB4  BL      j___aeabi_dcmplt
//   0035BEB8  CMP     R0, #0
//   0035BEBA  BEQ     loc_35BECA
//   0035BEBC  LDR     R5, [SP,#arg_18]
//   0035BEBE  MOVS    R0, #0x80000000
//   0035BEC2  ADDS    R5, R5, R0
//   0035BEC4  STR     R5, [SP,#arg_18]
//   0035BEC6  MOVS    R5, #0x2D ; '-'
//   0035BEC8  B       loc_35BED8
//   0035BECA  MOVS    R5, #0x2B ; '+'
//   0035BECC  STR     R5, [SP,#arg_64]
//   0035BECE  LDR     R5, [SP,#arg_10]
//   0035BED0  CMP     R5, #0
//   0035BED2  BNE     loc_35BEDA

//======================================================================
// sub_35C60C
// address: 0x0035C60C   size: 0x4 (4 bytes)
//======================================================================
int sub_35C60C()
{
  return sub_35C610(0, 0x80000000);
}


//======================================================================
// sub_35C610
// address: 0x0035C610   size: 0xC (12 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0035C610  MOVS    R5, #0x2D ; '-'
//   0035C612  STR     R0, [SP,#arg_38]
//   0035C614  STR     R1, [SP,#arg_3C]
//   0035C616  STR     R5, [SP,#arg_18]
//   0035C618  BL      sub_35BD30

//======================================================================
// sub_35C61C
// address: 0x0035C61C   size: 0x12 (18 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_35C61C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_35C690
// address: 0x0035C690   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_35C690(int a1, int a2)
{
  __int16 v4; // r7
  int v5; // r5
  int v6; // r1
  unsigned int v7; // r0
  __int16 v8; // r3

  v4 = *(_WORD *)(a1 + 28);
  v5 = sub_359644((int *)a1, 32, 0);
  if ( v5 != 0 )
    return 7;
  v6 = *(_DWORD *)(a1 + 4);
  if ( (v4 & 4) != 0 )
    sqlite3_snprintf(32, v6, (int)"%lld", *(_DWORD *)(a1 + 20));
  else
    sqlite3_snprintf(32, v6, (int)"%!.15g", *(_DWORD *)(a1 + 12));
  v7 = sub_34CF50(*(_DWORD *)(a1 + 4));
  *(_BYTE *)(a1 + 30) = 1;
  v8 = *(_WORD *)(a1 + 28);
  *(_DWORD *)(a1 + 24) = v7;
  *(_WORD *)(a1 + 28) = v8 | 0x202;
  sub_359790(a1, a2);
  return v5;
}


//======================================================================
// sub_35C700
// address: 0x0035C700   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_35C700(int a1, int a2)
{
  int v5; // r3
  int v6; // r3

  if ( a1 == 0 )
    return 0;
  v5 = *(unsigned __int16 *)(a1 + 28);
  if ( (v5 & 1) != 0 )
    return 0;
  v6 = v5 | ((v5 & 0x10) >> 3);
  *(_WORD *)(a1 + 28) = v6;
  if ( (v6 & 0x4000) != 0 )
    sub_3596F0(a1);
  if ( (*(_WORD *)(a1 + 28) & 2) != 0 )
  {
    sub_359790(a1, a2 & 0xFFFFFFF7);
    if ( (a2 & 8) != 0 && (*(_DWORD *)(a1 + 4) & 1) != 0 && sub_359740(a1) != 0 )
      return 0;
    sub_35A350(a1);
  }
  else
  {
    sub_35C690(a1, a2);
  }
  if ( *(unsigned __int8 *)(a1 + 30) != (a2 & 0xFFFFFFF7) )
    return 0;
  return *(_DWORD *)(a1 + 4);
}


//======================================================================
// sub_35C76C
// address: 0x0035C76C   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_35C76C(int a1, int a2)
{
  int result; // r0

  if ( (*(_WORD *)(a1 + 28) & 0x10) != 0 || (result = sub_35C700(a1, a2)) != 0 )
  {
    result = *(_DWORD *)(a1 + 24);
    if ( (*(_WORD *)(a1 + 28) & 0x4000) != 0 )
      result += *(_DWORD *)(a1 + 16);
  }
  return result;
}


//======================================================================
// sub_35C7BE
// address: 0x0035C7BE   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_35C7BE(_DWORD *a1)
{
  int v1; // r3
  int v2; // r2

  v1 = a1[1];
  if ( *a1 <= v1 )
    return 0;
  v2 = a1[2];
  a1[1] = v1 + 1;
  return sqlite3_value_text(*(_DWORD *)(4 * v1 + v2));
}


//======================================================================
// sub_35C806
// address: 0x0035C806   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_35C806(int a1, int a2, int *a3)
{
  int *v4; // r4
  __int64 v5; // r0
  int v6; // r2
  int result; // r0
  int v8; // r3
  int i; // r3
  int v10; // r1
  int v11; // r2
  int v12; // r3

  v4 = (int *)sqlite3_value_blob(*a3);
  LODWORD(v5) = a3[1];
  result = sqlite3_value_int(v5, v6);
  v8 = *v4;
  if ( *v4 != 0 )
  {
    for ( i = 0; i < result; ++i )
    {
      v11 = 4 * i;
      ++*(_DWORD *)(v4[4] + v11);
    }
    v12 = 4 * result;
    while ( result < v4[2] )
    {
      ++result;
      ++*(_DWORD *)(v4[5] + v12);
      *(_DWORD *)(v4[4] + v12) = 1;
      v12 += 4;
    }
  }
  else
  {
    while ( v8 < v4[2] )
    {
      result = v4[4];
      v10 = 4 * v8++;
      *(_DWORD *)(v10 + result) = 1;
    }
  }
  ++*v4;
  return result;
}


//======================================================================
// sub_35C870
// address: 0x0035C870   size: 0x78 (120 bytes)
//======================================================================
__int64 __fastcall sub_35C870(int a1, int a2, int *a3)
{
  int v5; // r0
  __int64 v6; // r2
  int v7; // r6
  _BYTE *v8; // r0
  _BYTE *v9; // r2
  unsigned __int8 *v10; // r3
  unsigned int v11; // r4
  __int64 v13; // [sp+0h] [bp-Ch]

  LODWORD(v13) = a1;
  HIDWORD(v13) = sqlite3_value_blob(*a3);
  v5 = sqlite3_value_bytes(*a3);
  LODWORD(v6) = 2 * v5;
  HIDWORD(v6) = (v5 >> 31) + ((v5 + (unsigned __int64)(unsigned int)v5) >> 32);
  v7 = v5;
  v8 = (_BYTE *)sub_359FB0(a1, v6 + 1);
  if ( v8 != nullptr )
  {
    v9 = v8;
    v10 = (unsigned __int8 *)HIDWORD(v13);
    while ( (int)&v10[-HIDWORD(v13)] < v7 )
    {
      v11 = *v10++;
      *v9 = byte_44B32A[v11 >> 4];
      v9[1] = byte_44B32A[v11 & 0xF];
      v9 += 2;
    }
    v8[2 * ((~v7 >> 31) & v7)] = 0;
    sqlite3_result_text(a1, v8, 2 * v7, sqlite3_free);
  }
  return v13;
}


//======================================================================
// sub_35C8F0
// address: 0x0035C8F0   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall sub_35C8F0(int a1, int a2, int *a3)
{
  unsigned __int8 *v6; // r0

  if ( sqlite3_value_type(*a3) != 4 || sqlite3_value_bytes(*a3) <= 1 )
    return (_DWORD *)sqlite3_result_error(a1, "Invalid argument to rtreedepth()", -1);
  v6 = (unsigned __int8 *)sqlite3_value_blob(*a3);
  return sqlite3_result_int(a1, (*v6 << 8) + v6[1]);
}


//======================================================================
// sub_35C934
// address: 0x0035C934   size: 0x94 (148 bytes)
//======================================================================
_BYTE *__fastcall sub_35C934(int a1, int a2, int *a3)
{
  int v5; // r7
  int v6; // r6
  _BYTE *result; // r0
  int v8; // r0
  char *v9; // r1
  int v10; // r7
  unsigned __int8 *v11; // r0
  _BOOL4 v12; // r0
  unsigned __int8 *v13; // [sp+0h] [bp-14h]
  _BYTE *v15; // [sp+Ch] [bp-8h] BYREF

  v5 = sqlite3_context_db_handle(a1);
  v6 = sqlite3_value_text(*a3);
  v13 = (unsigned __int8 *)sqlite3_value_text(a3[1]);
  result = (_BYTE *)sqlite3_value_bytes(*a3);
  if ( (int)result > *(_DWORD *)(v5 + 120) )
  {
    v8 = a1;
    v9 = "LIKE or GLOB pattern too complex";
    return (_BYTE *)sqlite3_result_error(v8, v9, -1);
  }
  v10 = 0;
  if ( a2 == 3 )
  {
    result = (_BYTE *)sqlite3_value_text(a3[2]);
    v15 = result;
    if ( result == nullptr )
      return result;
    if ( sub_34CEF0(result, -1) != 1 )
    {
      v8 = a1;
      v9 = "ESCAPE expression must be a single character";
      return (_BYTE *)sqlite3_result_error(v8, v9, -1);
    }
    result = (_BYTE *)sub_34CE94(&v15);
    v10 = (int)result;
  }
  if ( v13 != nullptr && v6 != 0 )
  {
    v11 = (unsigned __int8 *)sqlite3_user_data(a1);
    v12 = sub_34EF84(v6, v13, v11, v10);
    return sqlite3_result_int(a1, v12);
  }
  return result;
}


//======================================================================
// sub_35C9D0
// address: 0x0035C9D0   size: 0x7D2 (2002 bytes)
//======================================================================
int __fastcall sub_35C9D0(int a1, int a2, int *a3, char *a4)
{
  char *v4; // r5
  __int64 v5; // r0
  unsigned int v6; // r3
  double v7; // r0
  double v8; // r0
  int j; // r4
  unsigned __int8 *v10; // r0
  unsigned __int8 *v11; // r4
  unsigned __int8 *v12; // r6
  int v13; // r7
  unsigned __int8 *i; // r6
  int v15; // r3
  int v16; // r3
  int v17; // r6
  int v18; // r7
  __int64 v19; // r0
  unsigned int v20; // r0
  int v21; // r0
  int k; // r3
  const char *v24; // r3
  __int64 v25; // r6
  __int64 v26; // r0
  __int64 v27; // r6
  unsigned int v28; // r0
  int v29; // r4
  __int64 v30; // r2
  __int64 v31; // r0
  int v32; // r3
  int v33; // r1
  int v34; // r2
  const char *v35; // r4
  unsigned __int8 *v36; // r7
  __int64 v37; // r0
  double v38; // r6
  unsigned int v39; // r0
  double v40; // r6
  double v41; // r0
  double v42; // r2
  double v43; // r0
  double v44; // r2
  __int64 v45; // r0
  int v46; // r4
  int v47; // r0
  int v48; // r0
  double v49; // r0
  double v50; // r2
  int v51; // r6
  unsigned int v52; // [sp+30h] [bp-9Ch]
  double v53; // [sp+38h] [bp-94h]
  int v55; // [sp+50h] [bp-7Ch]
  int v58; // [sp+64h] [bp-68h] BYREF
  double v59; // [sp+68h] [bp-64h] BYREF
  double v60[6]; // [sp+70h] [bp-5Ch] BYREF
  char v61; // [sp+A4h] [bp-28h] BYREF
  _BYTE v62[7]; // [sp+A5h] [bp-27h] BYREF
  char v63; // [sp+ACh] [bp-20h] BYREF
  char v64[23]; // [sp+ADh] [bp-1Fh] BYREF

  v4 = a4;
  j_memset(a4, 0, 0x30u);
  if ( a2 == 0 )
  {
    v5 = sub_351638(a1);
    *(_QWORD *)v4 = v5;
    if ( v5 <= 0 )
      goto LABEL_123;
    v4 += 42;
    *v4 = 1;
    sub_35D1A2();
  }
  v6 = sqlite3_value_type(*a3) - 1;
  LODWORD(v7) = *a3;
  if ( v6 > 1 )
  {
    v10 = (unsigned __int8 *)sqlite3_value_text(SLODWORD(v7));
    v11 = v10;
    if ( v10 == nullptr )
      goto LABEL_123;
    if ( *v10 == 45 )
    {
      v12 = v10 + 1;
      v13 = 1;
    }
    else
    {
      v12 = v10;
      v13 = 0;
    }
    if ( sub_350C38(v12, 4) == 3 )
    {
      for ( i = v12 + 10; ; ++i )
      {
        v15 = *i;
        if ( (byte_44AA64[v15] & 1) == 0 && v15 != 84 )
          break;
      }
      if ( !sub_3543A8(i, (int)v4) )
        goto LABEL_22;
      if ( *i == 0 )
      {
        v4[41] = 0;
LABEL_22:
        v4[42] = 0;
        v4[40] = 1;
        v16 = v58;
        if ( v13 != 0 )
          v16 = -v58;
        v17 = LODWORD(v59);
        v18 = LODWORD(v60[0]);
        *((_DWORD *)v4 + 2) = v16;
        *((_DWORD *)v4 + 3) = v17;
        *((_DWORD *)v4 + 4) = v18;
        if ( v4[43] != 0 )
          sub_351408((int)v4);
        goto LABEL_8;
      }
    }
    if ( !sub_3543A8(v11, (int)v4) )
      goto LABEL_8;
    if ( sqlite3_stricmp(v11, "now") != 0 )
    {
      v20 = sub_34CF50((unsigned int)v11);
      if ( sub_34D098(v11, v60, v20, 1) )
      {
        v8 = v60[0];
        goto LABEL_6;
      }
    }
    else
    {
      v19 = sub_351638(a1);
      *(_QWORD *)v4 = v19;
      if ( v19 > 0 )
        goto LABEL_7;
    }
LABEL_123:
    JUMPOUT(0x35D1A4);
  }
  v8 = COERCE_DOUBLE(sqlite3_value_double(v7));
LABEL_6:
  *(_QWORD *)v4 = (__int64)(v8 * 86400000.0 + 0.5);
LABEL_7:
  v4[42] = 1;
LABEL_8:
  for ( j = 1; ; j = v55 + 1 )
  {
    v55 = j;
    if ( j >= a2 )
      break;
    v21 = sqlite3_value_text(a3[j]);
    if ( v21 == 0 )
      goto LABEL_123;
    v58 = 1;
    for ( k = 0; k != 29; ++k )
    {
      if ( *(_BYTE *)(v21 + k) == 0 )
        break;
      v62[k - 1] = byte_44A964[*(unsigned __int8 *)(v21 + k)];
    }
    v62[k - 1] = 0;
    if ( (unsigned __int8)v61 > 0x39u )
    {
      if ( v61 == 115 )
      {
        if ( j_strncmp(&v61, "start of ", 9u) != 0 )
          goto LABEL_40;
        sub_351420((int)v4);
        v4[41] = 1;
        *((_DWORD *)v4 + 8) = 0;
        *((_DWORD *)v4 + 9) = 0;
        *((_DWORD *)v4 + 6) = 0;
        *((_DWORD *)v4 + 5) = 0;
        v4[43] = 0;
        v4[42] = 0;
        if ( j_strcmp(v64, "month") == 0 )
        {
          *((_DWORD *)v4 + 4) = 1;
LABEL_74:
          v58 = 0;
          goto LABEL_40;
        }
        if ( j_strcmp(v64, "year") == 0 )
        {
          sub_351420((int)v4);
          *((_DWORD *)v4 + 3) = 1;
          *((_DWORD *)v4 + 4) = 1;
          v58 = 0;
          goto LABEL_40;
        }
        if ( j_strcmp(v64, "day") == 0 )
          goto LABEL_74;
      }
      else if ( (unsigned __int8)v61 > 0x73u )
      {
        if ( v61 == 117 )
        {
          if ( j_strcmp(&v61, "unixepoch") == 0 && v4[42] != 0 )
          {
            *(_QWORD *)v4 = (*(_QWORD *)v4 + 43200LL) / 86400 + 210866760000000LL;
            v4[40] = 0;
            v4[41] = 0;
            v4[43] = 0;
            v58 = 0;
          }
          else if ( j_strcmp(&v61, "utc") == 0 )
          {
            sub_351408((int)v4);
            v26 = sub_359D00(v4, a1, &v58);
            if ( v58 == 0 )
            {
              v27 = *(_QWORD *)v4 - v26;
              *(_QWORD *)v4 = v27;
              v4[40] = 0;
              v4[41] = 0;
              v4[43] = 0;
              *(_QWORD *)v4 = v27 + v26 - sub_359D00(v4, a1, &v58);
            }
          }
        }
        else if ( v61 == 119 && j_strncmp(&v61, "weekday ", 8u) == 0 )
        {
          v28 = sub_34CF50((unsigned int)&v63);
          if ( sub_34D098(&v63, &v59, v28, 1) )
          {
            v29 = (int)v59;
            if ( (double)(int)v59 == v59 && v29 >= 0 && v59 < 7.0 )
            {
              sub_3565FE((int)v4);
              v4[43] = 0;
              v4[42] = 0;
              sub_3512D8((int)v4);
              v30 = (*(_QWORD *)v4 + 129600000LL) / 86400000 % 7;
              if ( v30 > __SPAIR64__(v29, v29) )
                v30 -= 7;
              v31 = 86400000 * (v29 - v30);
              v32 = 0;
              *(_QWORD *)v4 += v31;
              v4[40] = 0;
              v4[41] = 0;
              v4[43] = 0;
              goto LABEL_80;
            }
          }
        }
      }
      else if ( v61 == 108 && j_strcmp(&v61, "localtime") == 0 )
      {
        sub_351408((int)v4);
        v25 = *(_QWORD *)v4;
        *(_QWORD *)v4 = v25 + sub_359D00(v4, a1, &v58);
        v4[40] = 0;
        v4[41] = 0;
        v4[43] = 0;
      }
    }
    else if ( (unsigned __int8)v61 >= 0x30u || v61 == 43 || v61 == 45 )
    {
      v24 = v62;
      do
      {
        v33 = *(unsigned __int8 *)v24;
        v34 = v24 - &v61;
        v35 = v24;
        if ( *v24 == 0 )
          break;
        if ( v33 == 58 )
          break;
        ++v24;
      }
      while ( (byte_44AA64[v33] & 1) == 0 );
      if ( !sub_34D098(&v61, &v59, v34, 1) )
      {
        v32 = 1;
LABEL_80:
        v58 = v32;
        goto LABEL_40;
      }
      if ( *v35 == 58 )
      {
        v36 = v62;
        if ( (byte_44AA64[(unsigned __int8)v61] & 4) != 0 )
          v36 = (unsigned __int8 *)&v61;
        j_memset(v60, 0, sizeof(v60));
        if ( !sub_3543A8(v36, (int)v60) )
        {
          sub_351408((int)v60);
          v37 = (*(_QWORD *)&v60[0] - 43200000LL) % 86400000;
          *(_QWORD *)&v60[0] = v37;
          if ( v61 == 45 )
            *(_QWORD *)&v60[0] = -v37;
          sub_351408((int)v4);
          v38 = v60[0];
          v4[40] = 0;
          v4[41] = 0;
          v4[43] = 0;
          *(_QWORD *)v4 += *(_QWORD *)&v38;
          v58 = 0;
        }
      }
      else
      {
        while ( (byte_44AA64[*(unsigned __int8 *)v35] & 1) != 0 )
          ++v35;
        v39 = sub_34CF50((unsigned int)v35);
        v52 = v39;
        if ( v39 - 3 <= 7 )
        {
          if ( v35[v39 - 1] == 115 )
          {
            v35[v39 - 1] = 0;
            v52 = v39 - 1;
          }
          sub_351408((int)v4);
          v40 = v59;
          v58 = 0;
          if ( v59 >= 0.0 )
            v53 = 0.5;
          else
            v53 = -0.5;
          switch ( v52 )
          {
            case 3u:
              if ( j_strcmp(v35, "day") == 0 )
              {
                v41 = v40;
                v42 = 86400000.0;
                goto LABEL_107;
              }
LABEL_121:
              v58 = 1;
              goto LABEL_122;
            case 4u:
              if ( j_strcmp(v35, "hour") == 0 )
              {
                v43 = v40;
                v44 = 3600000.0;
                goto LABEL_102;
              }
              if ( j_strcmp(v35, "year") != 0 )
                goto LABEL_121;
              v51 = (int)v40;
              sub_3565FE((int)v4);
              *((_DWORD *)v4 + 2) += v51;
              v4[42] = 0;
              sub_3512D8((int)v4);
              if ( (double)v51 == v59 )
                goto LABEL_122;
              v49 = v59 - (double)v51;
              v50 = 365.0;
LABEL_120:
              v43 = v49 * v50;
              v44 = 86400000.0;
LABEL_102:
              v45 = (__int64)(v43 * v44 + v53) + *(_QWORD *)v4;
              break;
            case 6u:
              if ( j_strcmp(v35, "minute") != 0 )
              {
                if ( j_strcmp(v35, "second") != 0 )
                  goto LABEL_121;
                v43 = v40;
                v44 = 1000.0;
                goto LABEL_102;
              }
              v41 = v40;
              v42 = 60000.0;
LABEL_107:
              v45 = (__int64)(v41 * v42 + v53) + *(_QWORD *)v4;
              break;
            default:
              if ( v52 != 5 || j_strcmp(v35, "month") != 0 )
                goto LABEL_121;
              sub_3565FE((int)v4);
              v46 = (int)v59 + *((_DWORD *)v4 + 3);
              if ( v46 <= 0 )
                v47 = v46 - 12;
              else
                v47 = v46 - 1;
              v48 = v47 / 12;
              *((_DWORD *)v4 + 2) += v48;
              *((_DWORD *)v4 + 3) = v46 - 12 * v48;
              v4[42] = 0;
              sub_3512D8((int)v4);
              if ( (double)(int)v59 == v59 )
              {
LABEL_122:
                v4[40] = 0;
                v4[41] = 0;
                v4[43] = 0;
                goto LABEL_40;
              }
              v49 = v59 - (double)(int)v59;
              v50 = 30.0;
              goto LABEL_120;
          }
          *(_QWORD *)v4 = v45;
          goto LABEL_122;
        }
      }
    }
LABEL_40:
    if ( v58 != 0 )
      goto LABEL_123;
  }
  return sub_35D1A2();
}


//======================================================================
// sub_35D1A2
// address: 0x0035D1A2   size: 0x14 (20 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_35D1A2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_35D208
// address: 0x0035D208   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_35D208(int a1, int a2, int *a3)
{
  _DWORD *result; // r0
  char v5[52]; // [sp+0h] [bp-34h] BYREF

  result = (_DWORD *)sub_35C9D0(a1, a2, a3, v5);
  if ( result == nullptr )
  {
    sub_351408((int)v5);
    return sqlite3_result_double(
             a1,
             HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int64 *)v5 / 86400000.0)),
             COERCE_UNSIGNED_INT64((double)*(__int64 *)v5 / 86400000.0),
             HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int64 *)v5 / 86400000.0)));
  }
  return result;
}


//======================================================================
// sub_35D248
// address: 0x0035D248   size: 0x1C (28 bytes)
//======================================================================
_BYTE *__fastcall sub_35D248(int a1, int a2, int *a3)
{
  _BYTE *result; // r0
  int v5; // r0

  result = (_BYTE *)sqlite3_value_text(*a3);
  if ( result != nullptr )
  {
    v5 = sqlite3_compileoption_used(result);
    return sqlite3_result_int(a1, v5);
  }
  return result;
}


//======================================================================
// sub_35D264
// address: 0x0035D264   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall sub_35D264(int a1, int a2, int *a3)
{
  int v5; // r0
  int v6; // r6
  _BYTE *v7; // r1
  int i; // r3
  __int64 v10; // [sp+0h] [bp-Ch]

  LODWORD(v10) = a1;
  HIDWORD(v10) = sqlite3_value_text(*a3);
  v5 = sqlite3_value_bytes(*a3);
  v6 = v5;
  if ( HIDWORD(v10) != 0 )
  {
    v7 = (_BYTE *)sub_359FB0(a1, v5 + 1LL);
    if ( v7 != nullptr )
    {
      for ( i = 0; i < v6; ++i )
        v7[i] = byte_44A964[*(unsigned __int8 *)(HIDWORD(v10) + i)];
      sqlite3_result_text(a1, v7, v6, sqlite3_free);
    }
  }
  return v10;
}


//======================================================================
// sub_35D2C8
// address: 0x0035D2C8   size: 0x62 (98 bytes)
//======================================================================
__int64 __fastcall sub_35D2C8(int a1, int a2, int *a3)
{
  int v5; // r0
  int v6; // r6
  _BYTE *v7; // r1
  int i; // r3
  __int64 v10; // [sp+0h] [bp-Ch]

  LODWORD(v10) = a1;
  HIDWORD(v10) = sqlite3_value_text(*a3);
  v5 = sqlite3_value_bytes(*a3);
  v6 = v5;
  if ( HIDWORD(v10) != 0 )
  {
    v7 = (_BYTE *)sub_359FB0(a1, v5 + 1LL);
    if ( v7 != nullptr )
    {
      for ( i = 0; i < v6; ++i )
        v7[i] = *(_BYTE *)(HIDWORD(v10) + i) & ~(byte_44AA64[*(unsigned __int8 *)(HIDWORD(v10) + i)] & 0x20);
      sqlite3_result_text(a1, v7, v6, sqlite3_free);
    }
  }
  return v10;
}


//======================================================================
// sub_35D334
// address: 0x0035D334   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall sub_35D334(__int64 a1, int *a2)
{
  int v2; // r4
  _BYTE *v3; // r0
  unsigned int v4; // r0
  __int64 v6; // [sp+0h] [bp-8h] BYREF

  v6 = a1;
  v2 = a1;
  v3 = (_BYTE *)sqlite3_value_text(*a2);
  HIDWORD(v6) = v3;
  if ( v3 != nullptr && *v3 != 0 )
  {
    v4 = sub_34CE94((_DWORD *)&v6 + 1);
    sqlite3_result_int(v2, v4);
  }
  return v6;
}


//======================================================================
// sub_35D35A
// address: 0x0035D35A   size: 0x1FC (508 bytes)
//======================================================================
int __fastcall sub_35D35A(int a1, int a2, int *a3)
{
  __int64 v5; // r0
  __int64 v6; // r0
  int v7; // r2
  __int64 v8; // r6
  int v9; // r0
  unsigned int v10; // r2
  _BYTE *v11; // r3
  int v12; // r0
  __int64 v13; // r4
  int v14; // r1
  __int64 v15; // r4
  int v16; // r2
  unsigned int v17; // r3
  _BYTE *v18; // r1
  unsigned int v19; // r0
  _BYTE *v21; // [sp+0h] [bp-14h]
  int v22; // [sp+4h] [bp-10h]
  int v24; // [sp+Ch] [bp-8h]

  LODWORD(v5) = sqlite3_value_type(a3[1]);
  if ( (_DWORD)v5 == 5 )
    return v5;
  if ( a2 == 3 )
  {
    LODWORD(v5) = sqlite3_value_type(a3[2]);
    if ( (_DWORD)v5 == 5 )
      return v5;
  }
  v24 = sqlite3_value_type(*a3);
  LODWORD(v6) = a3[1];
  v8 = (int)sqlite3_value_int(v6, v7);
  v9 = *a3;
  if ( v24 == 4 )
  {
    v22 = sqlite3_value_bytes(v9);
    LODWORD(v5) = sqlite3_value_blob(*a3);
    v21 = (_BYTE *)v5;
    if ( (_DWORD)v5 == 0 )
      return v5;
  }
  else
  {
    LODWORD(v5) = sqlite3_value_text(v9);
    v21 = (_BYTE *)v5;
    if ( (_DWORD)v5 == 0 )
      return v5;
    if ( v8 >= 0 )
    {
      v22 = 0;
    }
    else
    {
      v11 = (_BYTE *)v5;
      v22 = 0;
      HIDWORD(v5) = 63;
      while ( 1 )
      {
        v10 = (unsigned __int8)*v11;
        if ( *v11 == 0 )
          break;
        ++v11;
        if ( v10 > 0xBF )
        {
          while ( (*v11 & 0xC0) == 0x80 )
            ++v11;
        }
        ++v22;
      }
    }
  }
  if ( a2 == 3 )
  {
    LODWORD(v5) = a3[2];
    v12 = sqlite3_value_int(v5, v10);
    v13 = v12;
    if ( v12 < 0 )
    {
      v13 = -(__int64)v12;
      v14 = 1;
      goto LABEL_23;
    }
  }
  else
  {
    v13 = *(int *)(sqlite3_context_db_handle(a1) + 88);
  }
  v14 = 0;
LABEL_23:
  if ( v8 >= 0 )
  {
    if ( v8 != 0 )
    {
      --v8;
    }
    else if ( v13 > 0 )
    {
      --v13;
    }
  }
  else
  {
    v8 += v22;
    if ( v8 < 0 )
    {
      v15 = v13 + v8;
      v16 = ~(SHIDWORD(v15) >> 31);
      LODWORD(v13) = (v16 >> 31) & v15;
      HIDWORD(v13) = (v16 >> 31) & HIDWORD(v15);
      v8 = 0;
    }
  }
  if ( v14 != 0 )
  {
    if ( (((unsigned __int64)(v8 - v13) >> 32) & 0x80000000) != 0LL )
    {
      v13 = v8;
      v8 = 0;
    }
    else
    {
      v8 -= v13;
    }
  }
  if ( v24 == 4 )
  {
    if ( v8 + v13 > v22 )
      LODWORD(v13) = (~((int)((unsigned __int64)(v22 - v8) >> 32) >> 31) >> 31) & (v22 - v8);
    LODWORD(v5) = sqlite3_result_blob(a1, &v21[v8], v13, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
  }
  else
  {
    while ( 1 )
    {
      v17 = (unsigned __int8)*v21;
      if ( *v21 == 0 )
      {
        v18 = v21;
        goto LABEL_46;
      }
      if ( v8 == 0 )
        break;
      ++v21;
      if ( v17 > 0xBF )
      {
        while ( (*v21 & 0xC0) == 0x80 )
          ++v21;
      }
      --v8;
    }
    v18 = v21;
LABEL_46:
    while ( 1 )
    {
      v19 = (unsigned __int8)*v21;
      if ( *v21 == 0 || v13 == 0 )
        break;
      ++v21;
      if ( v19 > 0xBF )
      {
        while ( (*v21 & 0xC0) == 0x80 )
          ++v21;
      }
      --v13;
    }
    LODWORD(v5) = sqlite3_result_text(a1, v18, v21 - v18, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
  }
  return v5;
}


//======================================================================
// sub_35D556
// address: 0x0035D556   size: 0xA0 (160 bytes)
//======================================================================
char *__fastcall sub_35D556(int a1, int a2, int *a3)
{
  int v4; // r7
  char *result; // r0
  char *v6; // r5
  int v7; // r6
  int v8; // r0
  _BYTE *v9; // r5
  const void *v10; // r7
  int v11; // r4
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch]

  v4 = sqlite3_value_type(*a3);
  result = (char *)sqlite3_value_type(a3[1]);
  v6 = result;
  if ( v4 != 5 && result != &byte_5 )
  {
    v7 = sqlite3_value_bytes(*a3);
    v12 = sqlite3_value_bytes(a3[1]);
    v8 = *a3;
    if ( v4 == 4 && v6 == byte_4 )
    {
      v9 = (_BYTE *)sqlite3_value_blob(v8);
      v10 = (const void *)sqlite3_value_blob(a3[1]);
      v13 = 0;
    }
    else
    {
      v9 = (_BYTE *)sqlite3_value_text(v8);
      v10 = (const void *)sqlite3_value_text(a3[1]);
      v13 = 1;
    }
    v11 = 1;
    while ( v12 <= v7 )
    {
      if ( j_memcmp(v9, v10, v12) == 0 )
        return (char *)sqlite3_result_int(a1, v11);
      ++v11;
      do
      {
        --v7;
        ++v9;
      }
      while ( v13 != 0 && (*v9 & 0xC0) == 0x80 );
    }
    v11 = 0;
    return (char *)sqlite3_result_int(a1, v11);
  }
  return result;
}


//======================================================================
// sub_35D5F6
// address: 0x0035D5F6   size: 0x5E (94 bytes)
//======================================================================
_DWORD *__fastcall sub_35D5F6(int a1, int a2, int *a3)
{
  int i; // r1
  _DWORD *result; // r0
  _BYTE *v7; // r3
  unsigned int v8; // r2

  switch ( sqlite3_value_type(*a3) )
  {
    case 1:
    case 2:
    case 4:
      i = sqlite3_value_bytes(*a3);
      goto LABEL_9;
    case 3:
      result = (_DWORD *)sqlite3_value_text(*a3);
      v7 = result;
      if ( result != nullptr )
      {
        for ( i = 0; ; ++i )
        {
          v8 = (unsigned __int8)*v7;
          if ( *v7 == 0 )
            break;
          ++v7;
          if ( v8 > 0xBF )
          {
            while ( (*v7 & 0xC0) == 0x80 )
              ++v7;
          }
        }
LABEL_9:
        result = sqlite3_result_int(a1, i);
      }
      break;
    default:
      result = sqlite3_result_null(a1);
      break;
  }
  return result;
}


//======================================================================
// sub_35D654
// address: 0x0035D654   size: 0x168 (360 bytes)
//======================================================================
int __fastcall sub_35D654(int a1, signed int a2, int *a3)
{
  int result; // r0
  int v6; // r7
  _BYTE *v7; // r3
  int i; // r5
  _BYTE *v9; // r3
  _BYTE *v10; // r2
  signed int v11; // r5
  int v12; // r6
  signed int v13; // r5
  signed int v14; // r2
  int v15; // r6
  char **v16; // [sp+0h] [bp-1Ch]
  _BYTE *v17; // [sp+4h] [bp-18h]
  _BYTE *v18; // [sp+8h] [bp-14h]
  _BYTE *v19; // [sp+Ch] [bp-10h]
  char v21; // [sp+14h] [bp-8h]

  result = sqlite3_value_type(*a3);
  if ( result != 5 )
  {
    result = sqlite3_value_text(*a3);
    v17 = (_BYTE *)result;
    if ( result != 0 )
    {
      v6 = sqlite3_value_bytes(*a3);
      if ( a2 == 1 )
      {
        v18 = nullptr;
        v16 = &off_4547C0;
        v19 = &unk_44B33A;
      }
      else
      {
        result = sqlite3_value_text(a3[1]);
        v18 = (_BYTE *)result;
        if ( result == 0 )
          return result;
        v7 = (_BYTE *)result;
        for ( i = 0; ; ++i )
        {
          a2 = (unsigned __int8)*v7;
          if ( *v7 == 0 )
            break;
          ++v7;
          if ( (unsigned int)a2 > 0xBF )
          {
            while ( (*v7 & 0xC0) == 0x80 )
              ++v7;
          }
        }
        if ( i == 0 )
          return sqlite3_result_text(a1, v17, v6, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
        result = sub_359FB0(a1, 5LL * i);
        v16 = (char **)result;
        if ( result == 0 )
          return result;
        v9 = v18;
        v19 = (_BYTE *)(result + 4 * i);
        while ( *v9 != 0 )
        {
          *(_DWORD *)(result + 4 * a2) = v9;
          v10 = v9 + 1;
          if ( (unsigned __int8)*v9 > 0xBFu )
          {
            while ( (*v10 & 0xC0) == 0x80 )
              ++v10;
          }
          v19[a2++] = (_BYTE)v10 - (_BYTE)v9;
          v9 = v10;
        }
        if ( a2 == 0 )
          return sqlite3_result_text(a1, v17, v6, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
      }
      v21 = sqlite3_user_data(a1);
      if ( (v21 & 1) != 0 )
      {
        while ( v6 > 0 )
        {
          v11 = 0;
          while ( 1 )
          {
            v12 = (unsigned __int8)v19[v11];
            if ( v12 <= v6 && j_memcmp(v17, v16[v11], (unsigned __int8)v19[v11]) == 0 )
              break;
            if ( ++v11 >= a2 )
              goto LABEL_31;
          }
          if ( v11 >= a2 )
            break;
          v6 -= v12;
          v17 += v12;
        }
      }
LABEL_31:
      if ( (v21 & 2) != 0 )
      {
        while ( v6 > 0 )
        {
          v13 = 0;
          while ( 1 )
          {
            v14 = (unsigned __int8)v19[v13];
            if ( v14 <= v6 )
            {
              v15 = v6 - v14;
              if ( j_memcmp(&v17[v6 - v14], v16[v13], v14) == 0 )
                break;
            }
            if ( ++v13 >= a2 )
              goto LABEL_40;
          }
          if ( v13 >= a2 )
            break;
          v6 = v15;
        }
      }
LABEL_40:
      if ( v18 != nullptr )
        sqlite3_free(v16);
      return sqlite3_result_text(a1, v17, v6, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
    }
  }
  return result;
}


//======================================================================
// sub_35D7F4
// address: 0x0035D7F4   size: 0x9C (156 bytes)
//======================================================================
int __fastcall sub_35D7F4(int a1, _DWORD *a2, int a3)
{
  int v6; // r7
  int v7; // r2
  int v8; // r3
  int v9; // r4
  void *v11; // [sp+Ch] [bp-58h]
  _DWORD v12[10]; // [sp+10h] [bp-54h] BYREF
  _DWORD v13[11]; // [sp+38h] [bp-2Ch] BYREF

  if ( *(unsigned __int8 *)(a1 + 30) == *(unsigned __int8 *)(a3 + 4) )
    return (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(a3 + 12))(
             *(_DWORD *)(a3 + 8),
             *(_DWORD *)(a1 + 24),
             *(_DWORD *)(a1 + 4),
             a2[6],
             a2[1]);
  j_memset(v12, 0, sizeof(v12));
  j_memset(v13, 0, 0x28u);
  sub_35576C(v12, (void *)a1, 4096);
  sub_35576C(v13, a2, 4096);
  v6 = sub_35C700((int)v12, *(unsigned __int8 *)(a3 + 4));
  if ( v6 != 0 )
    v11 = (void *)v12[6];
  else
    v11 = nullptr;
  v7 = sub_35C700((int)v13, *(unsigned __int8 *)(a3 + 4));
  if ( v7 != 0 )
    v8 = v13[6];
  else
    v8 = 0;
  v9 = (*(int (__fastcall **)(_DWORD, void *, int, int, int))(a3 + 12))(*(_DWORD *)(a3 + 8), v11, v6, v8, v7);
  sub_355700(v12);
  sub_355700(v13);
  return v9;
}


//======================================================================
// sub_35D890
// address: 0x0035D890   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_35D890(int a1, int a2, int a3)
{
  int v4; // r7
  int v5; // r1
  int result; // r0
  unsigned int v8; // r4
  unsigned int v9; // r2
  unsigned int v10; // r3
  unsigned int v11; // r1
  double v12; // r4
  double v13; // r6
  signed int v14; // r4
  signed int v15; // r5
  size_t v16; // r2

  v4 = *(unsigned __int16 *)(a2 + 28);
  v5 = *(unsigned __int16 *)(a1 + 28);
  result = 1;
  if ( ((v4 | v5) & 1) != 0 )
    return (v4 & 1) - (v5 & 1);
  if ( (((unsigned __int8)v4 | (unsigned __int8)v5) & 0xC) != 0 )
  {
    if ( (v4 & v5 & 4) != 0 )
    {
      v8 = *(_DWORD *)(a1 + 16);
      v9 = *(_DWORD *)(a1 + 20);
      v10 = *(_DWORD *)(a2 + 20);
      v11 = *(_DWORD *)(a2 + 16);
      if ( __SPAIR64__(v10, v11) <= __SPAIR64__(v9, v8) )
        return __SPAIR64__(v9, v8) > __SPAIR64__(v10, v11);
      return -1;
    }
    if ( (v5 & 8) != 0 )
    {
      v12 = *(double *)(a1 + 8);
    }
    else
    {
      if ( (v5 & 4) == 0 )
        return result;
      v12 = (double)*(__int64 *)(a1 + 16);
    }
    if ( (v4 & 8) != 0 )
    {
      v13 = *(double *)(a2 + 8);
    }
    else
    {
      if ( (v4 & 4) == 0 )
        return -1;
      v13 = (double)*(__int64 *)(a2 + 16);
    }
    if ( v12 >= v13 )
      return v12 > v13;
    return -1;
  }
  if ( (((unsigned __int8)v4 | (unsigned __int8)v5) & 2) != 0 )
  {
    if ( (v5 & 2) == 0 )
      return result;
    if ( (v4 & 2) == 0 )
      return -1;
    if ( a3 != 0 )
      return sub_35D7F4(a1, (_DWORD *)a2, a3);
  }
  v14 = *(_DWORD *)(a2 + 24);
  v15 = *(_DWORD *)(a1 + 24);
  v16 = v14;
  if ( v14 > v15 )
    v16 = *(_DWORD *)(a1 + 24);
  result = j_memcmp(*(const void **)(a1 + 4), *(const void **)(a2 + 4), v16);
  if ( result == 0 )
    return v15 - v14;
  return result;
}


//======================================================================
// sub_35D978
// address: 0x0035D978   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_35D978(int a1, int a2, int *a3)
{
  int result; // r0

  result = sub_35D890(*a3, a3[1], *(_DWORD *)(a1 + 52));
  if ( result != 0 )
    return sqlite3_result_value(a1, (void *)*a3);
  return result;
}


//======================================================================
// sub_35D996
// address: 0x0035D996   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_35D996(int a1, int a2, int *a3)
{
  int result; // r0
  int i; // r5
  int v7; // [sp+0h] [bp-14h]
  int v8; // [sp+4h] [bp-10h]
  int v9; // [sp+8h] [bp-Ch]

  v9 = -(sqlite3_user_data(a1) != 0);
  v8 = *(_DWORD *)(a1 + 52);
  result = sqlite3_value_type(*a3);
  if ( result != 5 )
  {
    v7 = 0;
    for ( i = 1; i < a2; ++i )
    {
      result = sqlite3_value_type(a3[i]);
      if ( result == 5 )
        return result;
      if ( (sub_35D890(a3[v7], a3[i], v8) ^ v9) >= 0 )
        v7 = i;
    }
    return sqlite3_result_value(a1, (void *)a3[v7]);
  }
  return result;
}


//======================================================================
// sub_35D9FC
// address: 0x0035D9FC   size: 0x5E (94 bytes)
//======================================================================
__int64 __fastcall sub_35D9FC(__int64 a1, int *a2)
{
  int v2; // r5
  void *v4; // r6
  _WORD *v5; // r4
  int v6; // r7
  int v7; // r0
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v2 = a1;
  v4 = (void *)*a2;
  v5 = (_WORD *)sqlite3_aggregate_context((_DWORD *)a1, 40);
  if ( v5 == nullptr )
    return v9;
  if ( sqlite3_value_type(*a2) != 5 )
  {
    if ( v5[14] != 0 )
    {
      HIDWORD(v9) = *(_DWORD *)(v2 + 52);
      v6 = sqlite3_user_data(v2);
      v7 = sub_35D890((int)v5, (int)v4, SHIDWORD(v9));
      if ( v6 != 0 )
      {
        if ( v7 < 0 )
          goto LABEL_11;
LABEL_10:
        *(_BYTE *)(v2 + 68) = 1;
        return v9;
      }
      if ( v7 <= 0 )
        goto LABEL_10;
    }
LABEL_11:
    sub_359B2C(v5, v4);
    return v9;
  }
  if ( v5[14] != 0 )
    goto LABEL_10;
  return v9;
}


//======================================================================
// sub_35DA5A
// address: 0x0035DA5A   size: 0x33C (828 bytes)
//======================================================================
int __fastcall sub_35DA5A(unsigned int a1, unsigned __int8 *a2, int *a3, int a4)
{
  int v5; // r7
  int v6; // r3
  unsigned int v7; // r4
  int v8; // r4
  int v9; // r3
  int result; // r0
  __int16 v11; // r3
  unsigned int v12; // r5
  unsigned __int8 *v13; // r4
  int v14; // r3
  int v15; // r2
  int v16; // r3
  signed __int64 v17; // r2
  unsigned int v18; // r1
  double v19; // r4
  int v20; // r3
  signed int v21; // r4
  signed int v22; // r5
  unsigned int v23; // r2
  int v24; // r3
  unsigned __int8 *v25; // r0
  size_t v26; // r2
  unsigned int v27; // r4
  signed __int64 v28; // [sp+8h] [bp-74h]
  double v29; // [sp+10h] [bp-6Ch]
  unsigned int v30; // [sp+1Ch] [bp-60h]
  unsigned int v31; // [sp+20h] [bp-5Ch]
  int v32; // [sp+24h] [bp-58h]
  int v33; // [sp+28h] [bp-54h]
  int *v34; // [sp+2Ch] [bp-50h]
  unsigned int v37; // [sp+48h] [bp-34h] BYREF
  unsigned int v38; // [sp+4Ch] [bp-30h] BYREF
  int v39[2]; // [sp+50h] [bp-2Ch] BYREF
  double v40; // [sp+58h] [bp-24h]
  __int64 v41; // [sp+60h] [bp-1Ch]
  signed int v42; // [sp+68h] [bp-14h]
  __int16 v43; // [sp+6Ch] [bp-10h]
  char v44; // [sp+6Eh] [bp-Eh]

  v5 = a3[2];
  v33 = *a3;
  if ( a4 != 0 )
  {
    v6 = a2[1];
    if ( (v6 & 0x80) != 0 )
    {
      v31 = sub_35235C(a2 + 1, v39, v6 << 24) + 1;
    }
    else
    {
      v39[0] = a2[1];
      v31 = 2;
    }
    v7 = *a2;
    v5 += 40;
    v37 = v7;
    v30 = sub_34E514(v39[0]) + v7;
    v8 = 1;
  }
  else
  {
    v9 = *a2;
    if ( (v9 & 0x80) != 0 )
    {
      v31 = sub_35235C(a2, (int *)&v37, v9 << 24);
    }
    else
    {
      v37 = *a2;
      v31 = 1;
    }
    result = 1;
    v30 = v37;
    if ( v37 > a1 )
      return result;
    v8 = 0;
  }
  v32 = v8;
  v34 = (int *)(v33 + 4 * (v8 + 4) + 4);
  while ( 1 )
  {
    v11 = *(_WORD *)(v5 + 28);
    if ( (v11 & 4) == 0 )
      break;
    v12 = a2[v31];
    v38 = v12;
    if ( v12 > 0xB )
      goto LABEL_70;
    if ( v12 == 0 )
      goto LABEL_15;
    v13 = &a2[v30];
    if ( v12 == 7 )
    {
      v29 = (double)*(__int64 *)(v5 + 16);
      sub_3506B0((char *)&a2[v30], 7, (int)v39);
      goto LABEL_35;
    }
    switch ( v12 )
    {
      case 1u:
        v14 = *v13 << 24;
        LODWORD(v28) = (char)*v13;
        goto LABEL_22;
      case 2u:
        v15 = v13[1];
        v16 = (char)*v13 << 8;
        goto LABEL_21;
      case 3u:
        v16 = (v13[1] << 8) | v13[2];
        v15 = (char)*v13 << 16;
        goto LABEL_21;
      case 4u:
        v16 = (*v13 << 24) | v13[3] | (v13[1] << 16);
        v15 = v13[2] << 8;
LABEL_21:
        v14 = v16 | v15;
        LODWORD(v28) = v14;
LABEL_22:
        HIDWORD(v28) = v14 >> 31;
        break;
      case 5u:
        v28 = _byteswap_ulong(*(_DWORD *)(v13 + 2)) + __PAIR64__(((char)*v13 << 8) | (unsigned int)v13[1], 0);
        break;
      case 6u:
        v28 = _byteswap_uint64(*(_QWORD *)v13);
        break;
      default:
        v28 = v12 - 8;
        break;
    }
    v17 = *(_QWORD *)(v5 + 16);
    if ( v17 > v28 )
      goto LABEL_15;
    if ( v28 > v17 )
      goto LABEL_70;
LABEL_66:
    v5 += 40;
    ++v32;
    v27 = v38;
    v30 += sub_34E514(v38);
    v31 += sub_34D8BC(v27);
    if ( v31 < v37 && v32 < *((unsigned __int16 *)a3 + 2) )
    {
      ++v34;
      if ( v30 <= a1 )
        continue;
    }
    return *((char *)a3 + 6);
  }
  if ( (v11 & 8) == 0 )
  {
    if ( (v11 & 2) != 0 )
    {
      v20 = a2[v31];
      if ( (v20 & 0x80) != 0 )
        sub_35235C(&a2[v31], (int *)&v38, v20 << 24);
      else
        v38 = a2[v31];
      if ( v38 <= 0xB )
        goto LABEL_15;
      if ( (v38 & 1) == 0 )
        goto LABEL_70;
      v21 = (v38 - 12) >> 1;
      v42 = v21;
      if ( v30 + v21 > a1 )
        goto LABEL_70;
      if ( *v34 != 0 )
      {
        v44 = *(_BYTE *)(v33 + 4);
        v39[0] = *(_DWORD *)(v33 + 12);
        v43 = 2;
        v39[1] = (int)&a2[v30];
        result = sub_35D7F4((int)v39, (_DWORD *)v5, *v34);
        goto LABEL_63;
      }
      v22 = *(_DWORD *)(v5 + 24);
      v23 = v30;
    }
    else
    {
      if ( (v11 & 0x10) == 0 )
      {
        v38 = a2[v31];
        result = v38 != 0;
LABEL_63:
        if ( result != 0 )
          goto LABEL_64;
        goto LABEL_66;
      }
      v24 = a2[v31];
      if ( (v24 & 0x80) != 0 )
        sub_35235C(&a2[v31], (int *)&v38, v24 << 24);
      else
        v38 = a2[v31];
      if ( v38 <= 0xB || (v38 & 1) != 0 )
        goto LABEL_15;
      v23 = v30;
      v21 = (v38 - 12) >> 1;
      if ( v30 + v21 > a1 )
        goto LABEL_70;
      v22 = *(_DWORD *)(v5 + 24);
    }
    v25 = &a2[v23];
    v26 = v22;
    if ( v22 > v21 )
      v26 = v21;
    result = j_memcmp(v25, *(const void **)(v5 + 4), v26);
    if ( result != 0 )
      goto LABEL_64;
    result = v21 - v22;
    goto LABEL_63;
  }
  v18 = a2[v31];
  v38 = v18;
  if ( v18 > 0xB )
    goto LABEL_70;
  if ( v18 == 0 )
  {
LABEL_15:
    result = -1;
    goto LABEL_64;
  }
  v29 = *(double *)(v5 + 8);
  sub_3506B0((char *)&a2[v30], v18, (int)v39);
  if ( v38 == 7 )
LABEL_35:
    v19 = v40;
  else
    v19 = (double)v41;
  if ( v19 < v29 )
    goto LABEL_15;
  if ( v19 <= v29 )
    goto LABEL_66;
LABEL_70:
  result = 1;
LABEL_64:
  if ( *(_BYTE *)(*(_DWORD *)(v33 + 16) + v32) != 0 )
    return -result;
  return result;
}


//======================================================================
// sub_35DD96
// address: 0x0035DD96   size: 0x66 (102 bytes)
//======================================================================
unsigned __int64 __fastcall sub_35DD96(
        unsigned int a1,
        int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int8 *a5,
        signed int a6,
        int *a7)
{
  int v9; // r6
  int v10; // r4
  int v11; // r5
  int i; // r3
  unsigned __int64 v14; // [sp+0h] [bp-Ch]

  v14 = __PAIR64__(a3, a1);
  v9 = *(_DWORD *)(a1 + 8);
  v10 = *(_DWORD *)(*(_DWORD *)(a1 + 64) + 52);
  if ( a5 != nullptr )
    sub_35256A(*(_DWORD *)(a1 + 8), a6, a5, v10);
  if ( a2 != 0 )
  {
    v11 = (unsigned __int16)(*(_WORD *)(v9 + 6) - a2);
    *(_WORD *)(v10 + 4) = v11;
    for ( i = 0; i < v11; ++i )
    {
      if ( (*(_WORD *)(*(_DWORD *)(v10 + 8) + 40 * i + 28) & 1) != 0 )
      {
        *a7 = -1;
        return v14;
      }
    }
  }
  *a7 = sub_35DA5A(a4, (unsigned __int8 *)HIDWORD(v14), (int *)v10, 0);
  return v14;
}


//======================================================================
// sub_35DDFC
// address: 0x0035DDFC   size: 0x68 (104 bytes)
//======================================================================
unsigned int __fastcall sub_35DDFC(unsigned int result, unsigned int *a2, unsigned __int8 **a3, _DWORD *a4)
{
  unsigned int *v6; // r4
  unsigned __int8 *v7; // r1
  unsigned int **v8; // r6
  unsigned int *v9; // r6
  unsigned int v10; // [sp+14h] [bp-10h]
  int v11; // [sp+18h] [bp-Ch] BYREF
  int v12; // [sp+1Ch] [bp-8h] BYREF

  v10 = result;
  v6 = (unsigned int *)a3;
  v11 = 0;
  if ( a3 != nullptr )
    v7 = *a3;
  else
    v7 = nullptr;
  v8 = (unsigned int **)&v11;
  while ( a2 != nullptr )
  {
    if ( v6 == nullptr )
      goto LABEL_11;
    result = sub_35DD96(v10, 0, *a2, a2[1], v7, v6[1], &v12);
    if ( v12 > 0 )
    {
      *v8 = v6;
      v9 = v6;
      v6 = (unsigned int *)v6[2];
      v8 = (unsigned int **)(v9 + 2);
      if ( v6 == nullptr )
      {
LABEL_11:
        v6 = a2;
        break;
      }
      v7 = (unsigned __int8 *)*v6;
    }
    else
    {
      *v8 = a2;
      v8 = (unsigned int **)(a2 + 2);
      a2 = (unsigned int *)a2[2];
      v7 = nullptr;
    }
  }
  *v8 = v6;
  *a4 = v11;
  return result;
}


//======================================================================
// sub_35DE64
// address: 0x0035DE64   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_35DE64(unsigned int a1)
{
  int v2; // r7
  unsigned __int8 ***v3; // r4
  unsigned int *i; // r3
  unsigned int *v5; // r5
  unsigned __int8 ***j; // r5
  unsigned int *v8; // [sp+4h] [bp-10h]
  unsigned int *v9[2]; // [sp+Ch] [bp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 64);
  v3 = (unsigned __int8 ***)sub_351CC4(0x100u);
  if ( v3 == nullptr )
    return 7;
  for ( i = *(unsigned int **)(v2 + 48); ; i = v8 )
  {
    v9[0] = i;
    v5 = i;
    if ( i == nullptr )
      break;
    v8 = (unsigned int *)i[2];
    i[2] = 0;
    for ( j = v3; *j != nullptr; ++j )
    {
      sub_35DDFC(a1, v9[0], *j, v9);
      *j = nullptr;
    }
    *j = (unsigned __int8 **)v9[0];
  }
  do
    sub_35DDFC(a1, v9[0], *(unsigned __int8 ***)((char *)v5++ + (_DWORD)v3), v9);
  while ( v5 != (unsigned int *)&dword_100 );
  *(unsigned int **)(v2 + 48) = v9[0];
  sqlite3_free(v3);
  return 0;
}


//======================================================================
// sub_35DED2
// address: 0x0035DED2   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_35DED2(int *a1, unsigned int a2)
{
  int v2; // r4
  int result; // r0
  __int64 v6; // r0
  int v7; // r2
  int *i; // r5
  int *v9; // [sp+Ch] [bp-30h]
  int v10[11]; // [sp+10h] [bp-2Ch] BYREF

  v2 = *(_DWORD *)(a2 + 64);
  j_memset(v10, 0, 0x28u);
  result = *(_DWORD *)(v2 + 16);
  if ( result != 0 )
  {
    result = sub_35DE64(a2);
    if ( result == 0 && (*(_DWORD *)(v2 + 44) != 0 || (result = sub_3579E4(a1, (_DWORD *)(v2 + 44))) == 0) )
    {
      HIDWORD(v6) = *(_DWORD *)(v2 + 44);
      LODWORD(v6) = a1;
      sub_351B72(v6, v10, *(_DWORD *)(v2 + 4), *(_QWORD *)v2);
      v7 = *(_DWORD *)(v2 + 16);
      ++*(_DWORD *)(v2 + 24);
      sub_352308((int)v10, v7);
      for ( i = *(int **)(v2 + 48); i != nullptr; i = v9 )
      {
        v9 = (int *)i[2];
        sub_352308((int)v10, i[1]);
        sub_350808((int)v10, *i, i[1]);
        sub_354940(a1, i);
      }
      *(_DWORD *)(v2 + 48) = 0;
      return sub_355648(a1, v10, (_QWORD *)v2);
    }
  }
  return result;
}


//======================================================================
// sub_35DF6C
// address: 0x0035DF6C   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_35DF6C(unsigned int a1, int a2)
{
  _DWORD *v2; // r7
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // r3
  int v8; // r2
  unsigned int *v9; // r3
  int v10; // r1
  int v12; // [sp+14h] [bp-8h] BYREF

  v2 = *(_DWORD **)(a1 + 64);
  v4 = v2[5] / 2;
  if ( a2 < v4 )
  {
    v7 = v2[10];
    v5 = *(_DWORD *)(v7 + 8 * a2);
    v6 = *(_DWORD *)(v7 + 8 * a2 + 4);
  }
  else
  {
    v5 = 2 * (a2 - v4);
    v6 = v5 + 1;
  }
  v8 = v2[9];
  v9 = (unsigned int *)(v8 + 48 * v5);
  v10 = v8 + 48 * v6;
  if ( v9[6] == 0 )
  {
LABEL_8:
    v5 = v6;
    goto LABEL_9;
  }
  if ( *(_DWORD *)(v10 + 24) != 0 )
  {
    sub_35DD96(a1, 0, v9[8], v9[5], *(unsigned __int8 **)(v10 + 32), *(_DWORD *)(v10 + 20), &v12);
    if ( v12 <= 0 )
      v6 = v5;
    goto LABEL_8;
  }
LABEL_9:
  *(_DWORD *)(4 * a2 + v2[10]) = v5;
  return 0;
}


//======================================================================
// sub_35DFDC
// address: 0x0035DFDC   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_35DFDC(_DWORD *a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *v3; // r4
  int v6; // r3
  int result; // r0
  signed int i; // r6
  _DWORD *v10; // r1
  _DWORD *v11; // r7
  int v12; // [sp+4h] [bp-8h]

  v3 = *(_DWORD **)(a2 + 64);
  v6 = v3[10];
  if ( v6 != 0 )
  {
    v12 = *(_DWORD *)(v6 + 4);
    result = sub_35A77C(a1, v3[9] + 48 * v12, v3[9]);
    for ( i = ((unsigned int)(v12 + v3[5]) >> 31) + v12 + v3[5]; ; result = sub_35DF6C(a2, i) )
    {
      i >>= 1;
      if ( result != 0 || i <= 0 )
        break;
    }
    *a3 = *(_DWORD *)(v3[9] + 48 * *(_DWORD *)(v3[10] + 4) + 24) == 0;
  }
  else
  {
    v10 = (_DWORD *)v3[12];
    v3[12] = v10[2];
    v10[2] = 0;
    while ( 1 )
    {
      v11 = (_DWORD *)v10[2];
      sub_354940(a1, v10);
      if ( v11 == nullptr )
        break;
      v10 = v11;
    }
    *a3 = v3[12] == 0;
    return 0;
  }
  return result;
}


//======================================================================
// sub_35E054
// address: 0x0035E054   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_35E054(signed int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  int result; // r0
  int v7; // r2
  int v8; // r6
  int v9; // r3
  unsigned __int8 *v10; // r0
  size_t v11; // r2
  int v12; // r7
  int v13; // r0
  int v14; // r6
  int v16; // [sp+Ch] [bp-8h] BYREF

  v3 = a2[1];
  if ( (v3 & 0x80) != 0 )
    sub_35235C(a2 + 1, &v16, v3 << 24);
  else
    v16 = a2[1];
  if ( v16 <= 11 )
    return *(_DWORD *)(a3 + 12);
  if ( (v16 & 1) == 0 )
    return *(_DWORD *)(a3 + 16);
  v7 = *a2;
  v8 = (v16 - 12) >> 1;
  result = 0;
  if ( v7 + v8 <= a1 )
  {
    v9 = *(_DWORD *)(a3 + 8);
    v10 = &a2[v7];
    v11 = (v16 - 12) >> 1;
    v12 = *(_DWORD *)(v9 + 24);
    if ( v8 > v12 )
      v11 = *(_DWORD *)(v9 + 24);
    v13 = j_memcmp(v10, *(const void **)(v9 + 4), v11);
    if ( v13 != 0 )
    {
      if ( v13 <= 0 )
        return *(_DWORD *)(a3 + 12);
    }
    else
    {
      v14 = v8 - v12;
      if ( v14 == 0 )
      {
        if ( *(unsigned __int16 *)(a3 + 4) <= 1u )
          return *(char *)(a3 + 6);
        else
          return sub_35DA5A(a1, a2, (int *)a3, 1);
      }
      if ( v14 <= 0 )
        return *(_DWORD *)(a3 + 12);
    }
    return *(_DWORD *)(a3 + 16);
  }
  return result;
}


//======================================================================
// sub_35E0D8
// address: 0x0035E0D8   size: 0x108 (264 bytes)
//======================================================================
int __fastcall sub_35E0D8(unsigned int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r0
  unsigned __int8 *v4; // r4
  unsigned int v5; // r3
  int v6; // r0
  __int64 v7; // r4
  int v8; // r0
  int v9; // r4
  int v10; // r0
  __int64 v11; // r6
  __int64 v12; // r4
  int v13; // r7
  int v14; // r12
  unsigned int v15; // r0
  int v16; // r3
  unsigned int v19; // [sp+4h] [bp-8h]

  v3 = *(_DWORD *)(a3 + 8);
  v4 = &a2[*a2 & 0x3F];
  v19 = *(_DWORD *)(v3 + 16);
  v5 = *(_DWORD *)(v3 + 20);
  switch ( a2[1] )
  {
    case 1u:
      v6 = *v4 << 24;
      LODWORD(v7) = (char)*v4;
      goto LABEL_5;
    case 2u:
      v8 = (char)*v4;
      v9 = v4[1];
      v10 = v8 << 8;
      goto LABEL_4;
    case 3u:
      v10 = (v4[1] << 8) | v4[2];
      v9 = (char)*v4 << 16;
      goto LABEL_4;
    case 4u:
      v10 = (*v4 << 24) | v4[3] | (v4[1] << 16);
      v9 = v4[2] << 8;
LABEL_4:
      v6 = v10 | v9;
      LODWORD(v7) = v6;
LABEL_5:
      HIDWORD(v7) = v6 >> 31;
      goto LABEL_13;
    case 5u:
      v11 = _byteswap_ulong(*(_DWORD *)(v4 + 2));
      HIDWORD(v12) = v4[1] | ((char)*v4 << 8);
      LODWORD(v12) = 0;
      v7 = v12 + v11;
      goto LABEL_13;
    case 6u:
      v13 = (*v4 << 24) | v4[3] | (v4[1] << 16);
      v14 = v4[2] << 8;
      LODWORD(v7) = _byteswap_ulong(*((_DWORD *)v4 + 1));
      HIDWORD(v7) = v14 | v13;
      goto LABEL_13;
    case 8u:
      v7 = 0;
      goto LABEL_13;
    case 9u:
      v7 = 1;
LABEL_13:
      if ( __SPAIR64__(v5, v19) > v7 )
        return *(_DWORD *)(a3 + 12);
      if ( v7 > __SPAIR64__(v5, v19) )
        return *(_DWORD *)(a3 + 16);
      if ( *(unsigned __int16 *)(a3 + 4) <= 1u )
        return *(char *)(a3 + 6);
      v15 = a1;
      v16 = 1;
      return sub_35DA5A(v15, a2, (int *)a3, v16);
    default:
      v15 = a1;
      v16 = 0;
      return sub_35DA5A(v15, a2, (int *)a3, v16);
  }
}


//======================================================================
// sub_35E1E0
// address: 0x0035E1E0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_35E1E0(int result, int a2)
{
  __int16 v2; // r3
  int v3; // r4

  v2 = *(_WORD *)(result + 28);
  v3 = result;
  if ( (v2 & 2) == 0 && (v2 & 0xC) != 0 )
    result = sub_35C690(result, a2);
  *(_WORD *)(v3 + 28) &= 0xFFF3u;
  return result;
}


//======================================================================
// sub_35E1FE
// address: 0x0035E1FE   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_35E1FE(int result, int a2, int a3)
{
  int v3; // r4

  v3 = result;
  if ( a2 == 97 )
    return sub_35E1E0(result, a3);
  if ( a2 != 98 )
  {
    result = sub_34E78E(result);
    if ( (*(_WORD *)(v3 + 28) & 8) != 0 )
      return sub_34E330(v3);
  }
  return result;
}


//======================================================================
// sub_35E224
// address: 0x0035E224   size: 0xFA (250 bytes)
//======================================================================
int __fastcall sub_35E224(size_t a1, const char *a2)
{
  int i; // r6
  const char *v4; // r4
  size_t v5; // r3
  int result; // r0
  char *v7; // r6
  int j; // r7
  struct stat buf; // [sp+8h] [bp-6Ch] BYREF

  dword_47226C[0] = sqlite3_temp_directory;
  if ( dword_472270 == 0 )
    dword_472270 = (int)j_getenv("SQLITE_TMPDIR");
  if ( dword_472274 == 0 )
    dword_472274 = (int)j_getenv("TMPDIR");
  for ( i = 0; ; ++i )
  {
    v4 = (const char *)dword_47226C[i];
    if ( i == 6
      || v4 != nullptr && off_472358(v4, &buf) == 0 && (buf.st_mode & 0xF000) == 0x4000 && off_472340(v4, 7) == 0 )
    {
      break;
    }
  }
  if ( v4 == nullptr )
    v4 = ".";
  v5 = j_strlen(v4) + 25;
  result = 1;
  if ( v5 < a1 )
  {
    do
    {
      sqlite3_snprintf(a1 - 18, (int)a2, (int)"%s/etilqs_", (int)v4);
      v7 = (char *)&a2[j_strlen(a2)];
      sqlite3_randomness(15, v7);
      for ( j = 0; j != 15; ++j )
        v7[j] = aAbcdefghijklmn_0[(unsigned __int8)v7[j] % 0x3Eu];
      v7[15] = 0;
      v7[16] = 0;
    }
    while ( off_472340(a2, 0) == 0 );
    return 0;
  }
  return result;
}


//======================================================================
// sub_35E34C
// address: 0x0035E34C   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_35E34C(int a1, int a2, int a3)
{
  char *v5; // r3

  sub_34DAAE();
  v5 = j_dlerror();
  if ( v5 != nullptr )
    sqlite3_snprintf(a2, a3, (int)"%s", (int)v5);
  return sub_34DABC();
}


//======================================================================
// sub_35E374
// address: 0x0035E374   size: 0xA8 (168 bytes)
//======================================================================
_DWORD *__fastcall sub_35E374(int a1, int a2, int *a3)
{
  int *v3; // r5
  _BYTE *v4; // r0
  _BYTE *v5; // r4
  int v7; // r6
  unsigned int v8; // r7

  v3 = (int *)sqlite3_value_blob(*a3);
  v4 = sub_351CC4(25 * v3[2]);
  v5 = v4;
  if ( v4 == nullptr )
    return sqlite3_result_error_nomem(a1);
  v7 = 0;
  sqlite3_snprintf(24, (int)v4, (int)"%llu", *v3);
  v8 = (unsigned int)&v5[sub_34CF50((unsigned int)v5)];
  while ( v7 < v3[2] - 1 )
  {
    ++v7;
    sqlite3_snprintf(24, v8, (int)" %llu", 0);
    v8 += sub_34CF50(v8);
  }
  return (_DWORD *)sqlite3_result_text(a1, v5, -1, sqlite3_free);
}


//======================================================================
// sub_35E428
// address: 0x0035E428   size: 0x39C (924 bytes)
//======================================================================
int __fastcall sub_35E428(int a1, int a2, int *a3)
{
  __int64 v5; // r0
  int v6; // r4
  unsigned __int64 v7; // r2
  int v8; // r12
  unsigned int v9; // r1
  _BYTE *v10; // r7
  int v11; // r5
  int v12; // r6
  int v13; // r3
  unsigned int v14; // r3
  int v15; // r3
  const char *v16; // r2
  int v17; // r0
  int v18; // r1
  __int64 v19; // r0
  int v20; // r1
  int v21; // r3
  unsigned int v22; // r4
  int v23; // r3
  int v25; // [sp+Ch] [bp-E8h]
  int v26; // [sp+14h] [bp-E0h]
  double v28[6]; // [sp+28h] [bp-CCh] BYREF
  _QWORD v29[6]; // [sp+58h] [bp-9Ch] BYREF
  _BYTE v30[100]; // [sp+88h] [bp-6Ch] BYREF

  LODWORD(v5) = sqlite3_value_text(*a3);
  v26 = v5;
  if ( (_DWORD)v5 == 0 )
    return v5;
  LODWORD(v5) = sub_35C9D0(a1, a2 - 1, a3 + 1, (char *)v28);
  v6 = v5;
  if ( (_DWORD)v5 != 0 )
    return v5;
  LODWORD(v5) = sqlite3_context_db_handle(a1);
  v7 = 1;
  v8 = v5;
  while ( *(_BYTE *)(v26 + v6) != 0 )
  {
    if ( *(_BYTE *)(v26 + v6) != 37 )
      goto LABEL_30;
    ++v6;
    v9 = *(unsigned __int8 *)(v26 + v6);
    if ( v9 == 89 )
      goto LABEL_27;
    if ( v9 <= 0x59 )
    {
      if ( v9 != 74 )
      {
        if ( v9 > 0x4A )
        {
          if ( v9 != 83 && v9 != 87 && *(_BYTE *)(v26 + v6) != 77 )
            return v5;
        }
        else
        {
          if ( v9 == 37 )
            goto LABEL_30;
          if ( v9 != 72 )
            return v5;
        }
LABEL_25:
        ++v7;
        goto LABEL_30;
      }
LABEL_28:
      v5 = 50;
      goto LABEL_29;
    }
    if ( v9 != 106 )
    {
      if ( v9 > 0x6A )
      {
        if ( v9 != 115 )
        {
          if ( v9 == 119 )
            goto LABEL_30;
          if ( *(_BYTE *)(v26 + v6) != 109 )
            return v5;
          goto LABEL_25;
        }
        goto LABEL_28;
      }
      if ( v9 == 100 )
        goto LABEL_25;
      if ( *(_BYTE *)(v26 + v6) != 102 )
        return v5;
LABEL_27:
      v5 = 8;
      goto LABEL_29;
    }
    v5 = 3;
LABEL_29:
    v7 += v5;
LABEL_30:
    ++v6;
    ++v7;
  }
  if ( v7 <= 0x63 )
  {
    v10 = v30;
  }
  else
  {
    if ( v7 > *(int *)(v8 + 88) )
    {
      LODWORD(v5) = sqlite3_result_error_toobig(a1);
      return v5;
    }
    v10 = (_BYTE *)sub_3516AC(v8, v7);
    if ( v10 == nullptr )
    {
      LODWORD(v5) = sqlite3_result_error_nomem(a1);
      return v5;
    }
  }
  sub_351408((int)v28);
  sub_3565FE((int)v28);
  v11 = 0;
  v12 = 0;
  while ( 2 )
  {
    v13 = *(unsigned __int8 *)(v26 + v12);
    if ( *(_BYTE *)(v26 + v12) != 0 )
    {
      if ( v13 != 37 )
        goto LABEL_76;
      ++v12;
      v14 = *(unsigned __int8 *)(v26 + v12);
      if ( v14 == 89 )
      {
        v22 = (unsigned int)&v10[v11];
        sqlite3_snprintf(5, (int)&v10[v11], (int)"%04d", SLODWORD(v28[1]));
        goto LABEL_74;
      }
      if ( v14 > 0x59 )
      {
        if ( v14 != 106 )
        {
          if ( v14 > 0x6A )
          {
            if ( v14 != 115 )
            {
              if ( v14 == 119 )
              {
                v10[v11++] = (*(_QWORD *)&v28[0] + 129600000LL) / 86400000 % 7 + 48;
                goto LABEL_77;
              }
              if ( *(_BYTE *)(v26 + v12) != 109 )
                goto LABEL_75;
              v20 = (int)&v10[v11];
              v21 = HIDWORD(v28[1]);
LABEL_71:
              sqlite3_snprintf(3, v20, (int)"%02d", v21);
              v11 += 2;
              goto LABEL_77;
            }
            v22 = (unsigned int)&v10[v11];
            sqlite3_snprintf(
              30,
              (int)&v10[v11],
              (int)"%lld",
              (unsigned __int64)(*(_QWORD *)&v28[0] / 1000LL - 210866760000LL) >> 32);
          }
          else
          {
            if ( v14 == 100 )
            {
              v20 = (int)&v10[v11];
              v21 = LODWORD(v28[2]);
              goto LABEL_71;
            }
            if ( *(_BYTE *)(v26 + v12) != 102 )
              goto LABEL_75;
            v25 = HIDWORD(v28[4]);
            if ( v28[4] > 59.999 )
              v25 = 1078853599;
            v15 = v25;
            v22 = (unsigned int)&v10[v11];
            v17 = 7;
            v18 = (int)&v10[v11];
            v16 = "%06.3f";
LABEL_73:
            sqlite3_snprintf(v17, v18, (int)v16, v15);
          }
LABEL_74:
          v11 += sub_34CF50(v22);
          goto LABEL_77;
        }
      }
      else
      {
        if ( v14 == 77 )
        {
          v20 = (int)&v10[v11];
          v21 = LODWORD(v28[3]);
          goto LABEL_71;
        }
        if ( v14 <= 0x4D )
        {
          if ( v14 != 72 )
          {
            if ( v14 == 74 )
            {
              v22 = (unsigned int)&v10[v11];
              v16 = "%.16g";
              v17 = 20;
              v18 = (int)&v10[v11];
              goto LABEL_73;
            }
LABEL_75:
            LOBYTE(v13) = 37;
LABEL_76:
            v10[v11++] = v13;
LABEL_77:
            ++v12;
            continue;
          }
          v20 = (int)&v10[v11];
          v21 = HIDWORD(v28[2]);
          goto LABEL_71;
        }
        if ( v14 == 83 )
        {
          v21 = (int)v28[4];
          v20 = (int)&v10[v11];
          goto LABEL_71;
        }
        if ( *(_BYTE *)(v26 + v12) != 87 )
          goto LABEL_75;
      }
      j_memcpy(v29, v28, sizeof(v29));
      BYTE2(v29[5]) = 0;
      HIDWORD(v29[1]) = 1;
      LODWORD(v29[2]) = 1;
      sub_3512D8((int)v29);
      v19 = (*(_QWORD *)&v28[0] - v29[0] + 43200000LL) / 86400000;
      if ( *(_BYTE *)(v26 + v12) != 87 )
      {
        sqlite3_snprintf(4, (int)&v10[v11], (int)"%03d", v19 + 1);
        v11 += 3;
        goto LABEL_77;
      }
      v21 = (int)(v19 + 7 - (*(_QWORD *)&v28[0] + 43200000LL) / 86400000 % 7) / 7;
      v20 = (int)&v10[v11];
      goto LABEL_71;
    }
    break;
  }
  v10[v11] = v13;
  if ( v10 == v30 )
    v23 = -1;
  else
    v23 = (int)sub_34CCB0;
  LODWORD(v5) = sqlite3_result_text(a1, v10, -1, (int (__fastcall *)(_DWORD))v23);
  return v5;
}


//======================================================================
// sub_35E7F8
// address: 0x0035E7F8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_35E7F8(int a1, int a2, int *a3)
{
  int result; // r0
  int v5[12]; // [sp+18h] [bp-9Ch] BYREF
  _BYTE v6[100]; // [sp+48h] [bp-6Ch] BYREF

  result = sub_35C9D0(a1, a2, a3, (char *)v5);
  if ( result == 0 )
  {
    sub_3565FE((int)v5);
    sqlite3_snprintf(100, (int)v6, (int)"%04d-%02d-%02d %02d:%02d:%02d", v5[2]);
    return sqlite3_result_text(a1, v6, -1, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
  }
  return result;
}


//======================================================================
// sub_35E86C
// address: 0x0035E86C   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_35E86C(int a1)
{
  return sub_35E7F8(a1, 0, nullptr);
}


//======================================================================
// sub_35E878
// address: 0x0035E878   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_35E878(int a1, int a2, int *a3)
{
  int result; // r0
  int v5[12]; // [sp+8h] [bp-9Ch] BYREF
  _BYTE v6[100]; // [sp+38h] [bp-6Ch] BYREF

  result = sub_35C9D0(a1, a2, a3, (char *)v5);
  if ( result == 0 )
  {
    if ( BYTE1(v5[10]) == 0 )
      sub_351548((int)v5);
    sqlite3_snprintf(100, (int)v6, (int)"%02d:%02d:%02d", v5[5]);
    return sqlite3_result_text(a1, v6, -1, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
  }
  return result;
}


//======================================================================
// sub_35E8EC
// address: 0x0035E8EC   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_35E8EC(int a1)
{
  return sub_35E878(a1, 0, nullptr);
}


//======================================================================
// sub_35E8F8
// address: 0x0035E8F8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_35E8F8(int a1, int a2, int *a3)
{
  int result; // r0
  int v5[12]; // [sp+8h] [bp-98h] BYREF
  _BYTE v6[100]; // [sp+38h] [bp-68h] BYREF

  result = sub_35C9D0(a1, a2, a3, (char *)v5);
  if ( result == 0 )
  {
    sub_351420((int)v5);
    sqlite3_snprintf(100, (int)v6, (int)"%04d-%02d-%02d", v5[2]);
    return sqlite3_result_text(a1, v6, -1, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
  }
  return result;
}


//======================================================================
// sub_35E958
// address: 0x0035E958   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_35E958(int a1)
{
  return sub_35E8F8(a1, 0, nullptr);
}


//======================================================================
// sub_35E964
// address: 0x0035E964   size: 0x1A4 (420 bytes)
//======================================================================
void *__fastcall sub_35E964(int a1, int a2, int *a3)
{
  double v5; // r0
  double v6; // r6
  int v7; // r3
  int v8; // r3
  int v9; // r2
  int v10; // r0
  char *v11; // r1
  int v12; // r3
  int v13; // r6
  int v14; // r4
  __int64 v15; // r2
  int v16; // off
  int v17; // r0
  char *v18; // r3
  _BYTE *v19; // r7
  _BYTE *v20; // r2
  char v21; // r0
  _BYTE *v22; // r4
  int v23; // r0
  char *v24; // r4
  _BYTE *v25; // r1
  __int64 v26; // r6
  char *v27; // r0
  int i; // r3
  int v29; // r6
  double v31; // [sp+18h] [bp-44h] BYREF
  _BYTE v32[52]; // [sp+20h] [bp-3Ch] BYREF

  LODWORD(v5) = sqlite3_value_type(*a3) - 1;
  HIDWORD(v5) = *a3;
  switch ( LODWORD(v5) )
  {
    case 0:
      sqlite3_result_value(a1, (void *)HIDWORD(v5));
      return &_stack_chk_guard;
    case 1:
      LODWORD(v5) = *a3;
      v6 = COERCE_DOUBLE(sqlite3_value_double(v5));
      sqlite3_snprintf(50, (int)v32, (int)"%!.15g", v7);
      sub_34D098(v32, &v31, 20, 1);
      if ( v6 != v31 )
        sqlite3_snprintf(50, (int)v32, (int)"%!.20e", v8);
      v9 = -1;
      v10 = a1;
      v11 = v32;
      v12 = -1;
      goto LABEL_24;
    case 2:
      v23 = sqlite3_value_text(*a3);
      v24 = (char *)v23;
      if ( v23 == 0 )
        return &_stack_chk_guard;
      v25 = (_BYTE *)v23;
      v26 = 0;
      while ( *v25 != 0 )
      {
        if ( *v25 == 39 )
          ++v26;
        ++v25;
      }
      v27 = (char *)sub_359FB0(a1, (__int64)&v25[v26 - v23 + 3]);
      v11 = v27;
      if ( v27 == nullptr )
        return &_stack_chk_guard;
      *v27 = 39;
      for ( i = 1; ; i = v29 )
      {
        v9 = i + 1;
        if ( *v24 == 0 )
          break;
        v27[i] = *v24;
        v29 = i + 1;
        if ( *v24 == 39 )
        {
          v27[v9] = 39;
          v29 = i + 2;
        }
        ++v24;
      }
      v27[i] = 39;
      v27[v9] = 0;
      v10 = a1;
      v12 = (int)sqlite3_free;
LABEL_24:
      sqlite3_result_text(v10, v11, v9, (int (__fastcall *)(_DWORD))v12);
      return &_stack_chk_guard;
    case 3:
      v13 = sqlite3_value_blob(*a3);
      v14 = sqlite3_value_bytes(*a3);
      v15 = v14 + 2LL;
      v16 = (v15 + (unsigned __int64)(unsigned int)v15) >> 32;
      LODWORD(v15) = 2 * v15;
      HIDWORD(v15) += v16;
      v17 = sub_359FB0(a1, v15);
      v18 = (char *)v13;
      v19 = (_BYTE *)v17;
      v20 = (_BYTE *)(v17 + 2);
      if ( v17 != 0 )
      {
        while ( (int)&v18[-v13] < v14 )
        {
          *v20 = byte_44B32A[(unsigned __int8)*v18 >> 4];
          v21 = *v18++;
          v20[1] = byte_44B32A[v21 & 0xF];
          v20 += 2;
        }
        v22 = &v19[2 * v14];
        v22[3] = 0;
        v22[2] = 39;
        *v19 = 88;
        v19[1] = 39;
        sqlite3_result_text(a1, v19, -1, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
        sqlite3_free(v19);
      }
      return &_stack_chk_guard;
    default:
      v10 = a1;
      v9 = 4;
      v11 = "NULL";
      v12 = 0;
      goto LABEL_24;
  }
}


//======================================================================
// sub_35EB98
// address: 0x0035EB98   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_35EB98(int a1)
{
  const char *v2; // r0

  v2 = sqlite3_sourceid();
  sqlite3_log(21, (int)"misuse at line %d of [%.10s]", a1, v2 + 20);
  return 21;
}


//======================================================================
// sub_35EC18
// address: 0x0035EC18   size: 0x9C (156 bytes)
//======================================================================
int __fastcall sub_35EC18(const char *a1, int a2, __mode_t a3)
{
  int v5; // r0
  int v6; // r4
  int v8; // [sp+4h] [bp-78h]
  int v10; // [sp+Ch] [bp-70h]
  struct stat buf; // [sp+10h] [bp-6Ch] BYREF

  v8 = a3;
  if ( a3 == 0 )
    v8 = 420;
  v10 = a2 | 0x80000;
  while ( 1 )
  {
    while ( 1 )
    {
      v5 = off_472328(a1, v10, v8);
      v6 = v5;
      if ( v5 >= 0 )
        break;
      if ( *(_DWORD *)j___errno() != 4 )
        return v6;
    }
    if ( v5 > 2 )
      break;
    ((void (__fastcall *)(int))off_472334)(v5);
    sqlite3_log(28, (int)"attempt to open \"%s\" as file descriptor %d", a1, v6);
    if ( ((int (__fastcall *)(const char *, int))off_472328)("/dev/null", a2) < 0 )
      return -1;
  }
  if ( a3 != 0 && off_472364(v5, &buf) == 0 && *(_QWORD *)&buf.st_blksize == 0 && (buf.st_mode & 0x1FF) != a3 )
    ((void (__fastcall *)(int, __mode_t))off_4723D0)(v6, a3);
  return v6;
}


//======================================================================
// sub_35ECC0
// address: 0x0035ECC0   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_35ECC0(int a1)
{
  const char *v2; // r0

  v2 = sqlite3_sourceid();
  sqlite3_log(14, (int)"cannot open file at line %d of [%.10s]", a1, v2 + 20);
  return 14;
}


//======================================================================
// sub_35ECE0
// address: 0x0035ECE0   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_35ECE0(int a1, const char *a2, const char *a3, int a4)
{
  int v8; // r3

  v8 = *(_DWORD *)j___errno();
  if ( a3 == nullptr )
    a3 = (const char *)&unk_3FB8EA;
  sqlite3_log(a1, (int)"os_unix.c:%d: (%d) %s(%s) - %s", a4, v8, a2, a3, (const char *)&unk_3FB8EA);
  return a1;
}


//======================================================================
// sub_35ED24
// address: 0x0035ED24   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_35ED24(int a1, int *a2, int a3)
{
  signed int i; // r0
  int v5; // r3
  int result; // r0
  int v7; // r0
  _DWORD v8[130]; // [sp+0h] [bp-208h] BYREF

  v8[127] = a1;
  v8[128] = a2;
  v8[129] = a3;
  sqlite3_snprintf(512, (int)v8, (int)"%s", a1);
  for ( i = j_strlen((const char *)v8); i > 1; --i )
  {
    if ( *((_BYTE *)v8 + i) == 47 )
      goto LABEL_5;
  }
  if ( i == 1 )
  {
LABEL_5:
    *((_BYTE *)v8 + i) = 0;
    v5 = sub_35EC18((const char *)v8, 0, 0);
    goto LABEL_8;
  }
  v5 = -1;
LABEL_8:
  result = 0;
  *a2 = v5;
  if ( v5 < 0 )
  {
    v7 = sub_35ECC0(27201);
    return sub_35ECE0(v7, "open", (const char *)v8, 27201);
  }
  return result;
}


//======================================================================
// sub_35EDAC
// address: 0x0035EDAC   size: 0x120 (288 bytes)
//======================================================================
int __fastcall sub_35EDAC(int a1, __int64 a2)
{
  __int64 v5; // kr00_8
  unsigned int v6; // r6
  unsigned int v7; // r3
  int v8; // r1
  char *v9; // r5
  const char *v10; // r6
  size_t len; // [sp+10h] [bp-7Ch]
  char *addr; // [sp+14h] [bp-78h]
  int prot; // [sp+18h] [bp-74h]
  int fd; // [sp+1Ch] [bp-70h]
  struct stat buf; // [sp+20h] [bp-6Ch] BYREF

  if ( a2 < 0 )
  {
    if ( off_472364(*(_DWORD *)(a1 + 12), &buf) != 0 )
      return 1802;
    a2 = *(_QWORD *)&buf.st_blksize;
  }
  v5 = a2;
  if ( a2 > *(_QWORD *)(a1 + 64) )
    v5 = *(_QWORD *)(a1 + 64);
  v6 = *(_DWORD *)(a1 + 48);
  v7 = *(_DWORD *)(a1 + 52);
  if ( v5 != __PAIR64__(v7, v6) )
  {
    if ( v5 > 0 )
    {
      v8 = *(_DWORD *)(a1 + 56);
      fd = *(_DWORD *)(a1 + 12);
      addr = *(char **)(a1 + 72);
      prot = 3;
      if ( (*(_WORD *)(a1 + 18) & 2) != 0 )
        prot = 1;
      if ( addr != nullptr )
      {
        len = v6 >> 9 << 9;
        if ( len != v8 || v7 != *(_DWORD *)(a1 + 60) )
          off_472430(&addr[len], v8 - len);
        v9 = (char *)off_47243C();
        if ( (unsigned int)(v9 - 1) > 0xFFFFFFFD )
          off_472430(addr, len);
        if ( v9 != nullptr )
        {
          v10 = "mremap";
          goto LABEL_22;
        }
        v10 = "mremap";
      }
      else
      {
        v10 = "mmap";
      }
      v9 = (char *)off_472424(nullptr, v5, prot, 1, fd, 0);
LABEL_22:
      if ( v9 == (char *)-1 )
      {
        sub_35ECE0(0, v10, *(const char **)(a1 + 32), 28414);
        *(_DWORD *)(a1 + 64) = 0;
        *(_DWORD *)(a1 + 68) = 0;
        v9 = nullptr;
        v5 = 0;
      }
      *(_DWORD *)(a1 + 72) = v9;
      *(_DWORD *)(a1 + 60) = HIDWORD(v5);
      *(_DWORD *)(a1 + 52) = HIDWORD(v5);
      *(_DWORD *)(a1 + 56) = v5;
      *(_DWORD *)(a1 + 48) = v5;
      return 0;
    }
    sub_34DBC8((_DWORD *)a1);
  }
  return 0;
}


//======================================================================
// sub_35EEF0
// address: 0x0035EEF0   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_35EEF0(int a1, __int64 a2, int a3, _DWORD *a4)
{
  int result; // r0

  *a4 = 0;
  if ( *(__int64 *)(a1 + 64) <= 0 )
    return 0;
  if ( *(_DWORD *)(a1 + 72) != 0 || *(int *)(a1 + 44) > 0 || (result = sub_35EDAC(a1, -1)) == 0 )
  {
    if ( *(_QWORD *)(a1 + 48) >= a3 + a2 )
    {
      *a4 = *(_DWORD *)(a1 + 72) + a2;
      ++*(_DWORD *)(a1 + 44);
    }
    return 0;
  }
  return result;
}


//======================================================================
// sub_35EF54
// address: 0x0035EF54   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_35EF54(int a1, int fd, int a3)
{
  int result; // r0
  const char *v6; // r2

  result = off_472334(fd);
  if ( result != 0 )
  {
    if ( a1 != 0 )
      v6 = *(const char **)(a1 + 32);
    else
      v6 = nullptr;
    return sub_35ECE0(4106, "close", v6, a3);
  }
  return result;
}


//======================================================================
// sub_35EF8C
// address: 0x0035EF8C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_35EF8C(int result)
{
  int v1; // r6
  int v2; // r4
  int v3; // r5
  int v4; // r0
  void *v5; // r0
  int v6; // r1

  v1 = result;
  v2 = *(_DWORD *)(*(_DWORD *)(result + 8) + 20);
  if ( v2 != 0 )
  {
    v3 = *(_DWORD *)(v2 + 28);
    if ( v3 == 0 )
    {
      sqlite3_mutex_free(*(_DWORD *)(v2 + 4));
      while ( 1 )
      {
        v4 = *(_DWORD *)(v2 + 24);
        if ( v3 >= *(unsigned __int16 *)(v2 + 20) )
          break;
        v5 = *(void **)(v4 + 4 * v3);
        if ( *(int *)(v2 + 12) < 0 )
          sqlite3_free(v5);
        else
          off_472430(v5, *(_DWORD *)(v2 + 16));
        ++v3;
      }
      sqlite3_free(v4);
      v6 = *(_DWORD *)(v2 + 12);
      if ( v6 >= 0 )
      {
        sub_35EF54(v1, v6, 27822);
        *(_DWORD *)(v2 + 12) = -1;
      }
      *(_DWORD *)(*(_DWORD *)v2 + 20) = 0;
      return sqlite3_free(v2);
    }
  }
  return result;
}


//======================================================================
// sub_35EFFC
// address: 0x0035EFFC   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_35EFFC(int a1, int a2)
{
  _DWORD *v2; // r5
  int v5; // r4
  _DWORD *i; // r3
  int v7; // r3

  v2 = *(_DWORD **)(a1 + 36);
  if ( v2 != nullptr )
  {
    v5 = *v2;
    sqlite3_mutex_enter(*(_DWORD *)(*v2 + 4));
    for ( i = (_DWORD *)(v5 + 32); (_DWORD *)*i != v2; i = (_DWORD *)(*i + 4) )
      ;
    *i = v2[1];
    sqlite3_free(v2);
    *(_DWORD *)(a1 + 36) = 0;
    sqlite3_mutex_leave(*(_DWORD *)(v5 + 4));
    sub_34DAAE();
    v7 = *(_DWORD *)(v5 + 28) - 1;
    *(_DWORD *)(v5 + 28) = v7;
    if ( v7 == 0 )
    {
      if ( a2 != 0 && *(int *)(v5 + 12) >= 0 )
        off_4723E8(*(const char **)(v5 + 8));
      sub_35EF8C(a1);
    }
    sub_34DABC();
  }
  return 0;
}


//======================================================================
// sub_35F068
// address: 0x0035F068   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_35F068(_DWORD *a1)
{
  int v2; // r1

  sub_34DBC8(a1);
  v2 = a1[3];
  if ( v2 >= 0 )
  {
    sub_35EF54((int)a1, v2, 25597);
    a1[3] = -1;
  }
  sqlite3_free(a1[7]);
  j_memset(a1, 0, 0x50u);
  return 0;
}


//======================================================================
// sub_35F09C
// address: 0x0035F09C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_35F09C(int result)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)result;
  if ( result != 0 )
  {
    sub_350D00(result, 0);
    sqlite3_free(v1[6]);
    return sub_35F068(v1);
  }
  return result;
}


//======================================================================
// sub_35F0B8
// address: 0x0035F0B8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_35F0B8(_DWORD *a1)
{
  return sub_35F068(a1);
}


//======================================================================
// sub_35F0C0
// address: 0x0035F0C0   size: 0x76 (118 bytes)
//======================================================================
size_t __fastcall sub_35F0C0(int a1, size_t a2, time_t *a3)
{
  size_t v3; // r4
  int v5; // r6
  time_t timer; // [sp+4h] [bp-8h] BYREF
  time_t *v8; // [sp+8h] [bp-4h]

  timer = a2;
  v8 = a3;
  v3 = a2;
  j_memset(a3, 0, a2);
  dword_559564 = j_getpid();
  v5 = sub_35EC18("/dev/urandom", 0, 0);
  if ( v5 >= 0 )
  {
    while ( off_472388(v5, a3, v3) < 0 && *(_DWORD *)j___errno() == 4 )
      ;
    sub_35EF54(0, v5, 29740);
  }
  else
  {
    j_time(&timer);
    *a3 = timer;
    a3[1] = dword_559564;
    return 8;
  }
  return v3;
}


//======================================================================
// sub_35F148
// address: 0x0035F148   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_35F148(int result)
{
  int v1; // r5
  int v2; // r6
  int *i; // r4
  int *v4; // r7

  v1 = *(_DWORD *)(result + 8);
  v2 = result;
  for ( i = *(int **)(v1 + 28); i != nullptr; i = v4 )
  {
    v4 = (int *)i[2];
    sub_35EF54(v2, *i, 24863);
    result = sqlite3_free(i);
  }
  *(_DWORD *)(v1 + 28) = 0;
  return result;
}


//======================================================================
// sub_35F174
// address: 0x0035F174   size: 0xDE (222 bytes)
//======================================================================
int __fastcall sub_35F174(int a1, int a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r3
  int v7; // r3
  int v9; // [sp+4h] [bp-18h]
  _DWORD v10[5]; // [sp+8h] [bp-14h] BYREF

  v9 = 0;
  if ( *(unsigned __int8 *)(a1 + 16) <= a2 )
    return v9;
  sub_34DAAE();
  v4 = *(_DWORD *)(a1 + 8);
  if ( *(unsigned __int8 *)(a1 + 16) <= 1u )
    goto LABEL_9;
  if ( a2 == 1 )
  {
    v10[0] = 0;
    v10[1] = dword_471740 + 2;
    v10[2] = 510;
    if ( sub_34DB04(a1, (int)v10) != 0 )
    {
      v5 = 2314;
      *(_DWORD *)(a1 + 20) = *(_DWORD *)j___errno();
      goto LABEL_16;
    }
  }
  v10[0] = 2;
  v10[1] = dword_471740;
  v10[2] = 2;
  if ( sub_34DB04(a1, (int)v10) == 0 )
  {
    *(_BYTE *)(v4 + 12) = 1;
LABEL_9:
    v5 = 0;
    if ( a2 == 0 )
    {
      v5 = 0;
      v6 = *(_DWORD *)(v4 + 8) - 1;
      *(_DWORD *)(v4 + 8) = v6;
      if ( v6 == 0 )
      {
        v10[0] = 2;
        v10[2] = 0;
        v10[1] = 0;
        if ( sub_34DB04(a1, (int)v10) != 0 )
        {
          v5 = 2058;
          *(_DWORD *)(a1 + 20) = *(_DWORD *)j___errno();
          *(_BYTE *)(v4 + 12) = 0;
          *(_BYTE *)(a1 + 16) = 0;
        }
        else
        {
          *(_BYTE *)(v4 + 12) = 0;
        }
      }
      v7 = *(_DWORD *)(v4 + 24) - 1;
      *(_DWORD *)(v4 + 24) = v7;
      if ( v7 == 0 )
        sub_35F148(a1);
    }
    goto LABEL_16;
  }
  v5 = 2058;
  *(_DWORD *)(a1 + 20) = *(_DWORD *)j___errno();
LABEL_16:
  sub_34DABC();
  v9 = v5;
  if ( v5 == 0 )
    *(_BYTE *)(a1 + 16) = a2;
  return v9;
}


//======================================================================
// sub_35F264
// address: 0x0035F264   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_35F264(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD *v5; // r0
  const char *v6; // r2
  int v7; // r3
  int v8; // r0
  int v9; // r5
  int fd[2]; // [sp+4h] [bp-8h] BYREF

  fd[0] = a2;
  fd[1] = a3;
  result = j_fsync(*(_DWORD *)(a1 + 12));
  if ( result != 0 )
  {
    v5 = (_DWORD *)j___errno();
    v6 = *(const char **)(a1 + 32);
    *(_DWORD *)(a1 + 20) = *v5;
    return sub_35ECE0(1034, "full_fsync", v6, 27242);
  }
  else
  {
    v7 = *(unsigned __int16 *)(a1 + 18);
    if ( (v7 & 8) != 0 )
    {
      v8 = off_4723F4(*(_DWORD *)(a1 + 32), fd, v7 << 28);
      v9 = v8;
      if ( v8 != 0 )
      {
        v9 = v8 != 14 ? v8 : 0;
      }
      else if ( fd[0] >= 0 )
      {
        j_fsync(fd[0]);
        sub_35EF54(a1, fd[0], 27256);
      }
      *(_WORD *)(a1 + 18) &= ~8u;
      return v9;
    }
  }
  return result;
}


//======================================================================
// sub_35F2E4
// address: 0x0035F2E4   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_35F2E4(__int64 a1, __off_t length, int a3)
{
  int v3; // r3
  int v4; // r6
  __int64 v5; // r4
  _DWORD *v6; // r0
  const char *v7; // r2

  HIDWORD(v5) = a3;
  v3 = *(_DWORD *)(a1 + 40);
  v4 = a1;
  LODWORD(v5) = length;
  if ( v3 > 0 )
  {
    a1 = (v5 + v3 - 1) / v3 * v3;
    v5 = a1;
  }
  if ( sub_350CD8(*(_DWORD *)(v4 + 12), SHIDWORD(a1), v5) != 0 )
  {
    v6 = (_DWORD *)j___errno();
    v7 = *(const char **)(v4 + 32);
    *(_DWORD *)(v4 + 20) = *v6;
    return sub_35ECE0(1546, "ftruncate", v7, 27286);
  }
  else
  {
    if ( *(_QWORD *)(v4 + 48) > v5 )
      *(_QWORD *)(v4 + 48) = v5;
    return 0;
  }
}


//======================================================================
// sub_35F36C
// address: 0x0035F36C   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_35F36C(int a1, const char *a2, int a3, char *buf)
{
  int v7; // r0
  char *v8; // r1
  const char *v9; // r2
  int v10; // r0
  size_t v12; // r0

  buf[a3 - 1] = 0;
  if ( *a2 == 47 )
  {
    v7 = a3;
    v8 = buf;
    v9 = "%s";
  }
  else
  {
    if ( off_47234C(buf, a3 - 1) == nullptr )
    {
      v10 = sub_35ECC0(29635);
      return sub_35ECE0(v10, "getcwd", a2, 29635);
    }
    v12 = j_strlen(buf);
    v8 = &buf[v12];
    v7 = a3 - v12;
    v9 = "/%s";
  }
  sqlite3_snprintf(v7, (int)v8, (int)v9, (int)a2);
  return 0;
}


//======================================================================
// sub_35F3E0
// address: 0x0035F3E0   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_35F3E0(int a1, char *name, char a3)
{
  int v5; // r2
  int result; // r0
  int v7; // r0
  int v8; // r4
  int fd; // [sp+4h] [bp-4h] BYREF

  fd = (int)name;
  if ( off_4723E8(name) == -1 )
  {
    if ( *(_DWORD *)j___errno() == 2 )
      return 5898;
    else
      return sub_35ECE0(2570, "unlink", name, 29533);
  }
  else
  {
    result = a3 & 1;
    if ( (a3 & 1) != 0 )
    {
      v7 = off_4723F4(name, &fd, v5);
      v8 = v7;
      if ( v7 != 0 )
        return v7 != 14 ? v7 : 0;
      if ( j_fsync(fd) != 0 )
        v8 = sub_35ECE0(1290, "fsync", name, 29548);
      sub_35EF54(0, fd, 29550);
      return v8;
    }
  }
  return result;
}


//======================================================================
// sub_35F484
// address: 0x0035F484   size: 0x76 (118 bytes)
//======================================================================
int __fastcall sub_35F484(int result)
{
  int v1; // r4
  struct stat v2; // [sp+0h] [bp-6Ch] BYREF

  v1 = result;
  if ( (*(_WORD *)(result + 18) & 0x100) == 0 )
  {
    if ( off_472364(*(_DWORD *)(result + 12), &v2) != 0 )
    {
      result = sqlite3_log(28, (int)"cannot fstat db file %s", *(_DWORD *)(v1 + 32));
LABEL_7:
      *(_WORD *)(v1 + 18) |= 0x100u;
      return result;
    }
    if ( v2.st_nlink != 0 )
    {
      if ( v2.st_nlink > 1 )
      {
        result = sqlite3_log(28, (int)"multiple links to file: %s", *(_DWORD *)(v1 + 32));
        goto LABEL_7;
      }
    }
    else if ( (*(_WORD *)(v1 + 18) & 0x20) == 0 )
    {
      result = sqlite3_log(28, (int)"file unlinked while open: %s", *(_DWORD *)(v1 + 32));
      goto LABEL_7;
    }
    result = sub_34DACC(v1);
    if ( result != 0 )
    {
      result = sqlite3_log(28, (int)"file renamed while open: %s", *(const char **)(v1 + 32));
      *(_WORD *)(v1 + 18) |= 0x100u;
    }
  }
  return result;
}


//======================================================================
// sub_35F510
// address: 0x0035F510   size: 0x488 (1160 bytes)
//======================================================================
int __fastcall sub_35F510(int a1, int a2, char **a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v5; // r6
  int v7; // r5
  _DWORD *i; // r4
  _DWORD **j; // r3
  int v10; // r5
  size_t k; // r5
  __mode_t v12; // r4
  int v13; // r0
  int v14; // r4
  int *v15; // r3
  int v16; // r4
  char **v17; // r0
  char *v18; // r3
  char *v19; // r4
  char *v20; // r0
  int v21; // r3
  int v22; // r6
  int result; // r0
  char *name; // [sp+8h] [bp-4BCh]
  char *namea; // [sp+8h] [bp-4BCh]
  int v27; // [sp+10h] [bp-4B4h]
  int v28; // [sp+10h] [bp-4B4h]
  int v29; // [sp+14h] [bp-4B0h]
  __uid_t st_uid; // [sp+14h] [bp-4B0h]
  unsigned int v31; // [sp+18h] [bp-4ACh]
  _BOOL4 v32; // [sp+1Ch] [bp-4A8h]
  int v33; // [sp+20h] [bp-4A4h]
  int v35; // [sp+28h] [bp-49Ch]
  int v36; // [sp+2Ch] [bp-498h]
  int v37; // [sp+30h] [bp-494h]
  __gid_t st_gid; // [sp+34h] [bp-490h]
  unsigned __int64 v39; // [sp+40h] [bp-484h] BYREF
  struct stat buf; // [sp+48h] [bp-47Ch] BYREF
  unsigned int v41; // [sp+A8h] [bp-41Ch]
  int v42; // [sp+ACh] [bp-418h]
  char v43[516]; // [sp+B4h] [bp-410h] BYREF
  char v44[324]; // [sp+2B8h] [bp-20Ch] BYREF

  v5 = a4;
  v36 = a4 & 0x10;
  v33 = a4 & 8;
  v29 = a4 & 4;
  v31 = a4 & 0xFFFFFF00;
  v35 = a4 & 1;
  v37 = a4 & 2;
  v32 = false;
  if ( (a4 & 4) != 0 )
    v32 = v31 == 0x4000 || v31 == 2048 || v31 == 0x80000;
  v7 = dword_559564;
  if ( v7 != j_getpid() )
  {
    dword_559564 = j_getpid();
    sqlite3_randomness(0, nullptr);
  }
  j_memset(a3, 0, 0x50u);
  if ( v31 == 256 )
  {
    if ( off_472358((const char *)a2, &buf) != 0 )
      goto LABEL_23;
    sub_34DAAE();
    for ( i = (_DWORD *)dword_559568; i != nullptr; i = (_DWORD *)i[8] )
    {
      if ( buf.st_dev == *i && i[1] == v41 && v42 == 0 )
      {
        for ( j = (_DWORD **)(i + 7); ; j = (_DWORD **)(i + 2) )
        {
          i = *j;
          if ( *j == nullptr )
            break;
          if ( i[1] == v5 )
          {
            *j = (_DWORD *)i[2];
            goto LABEL_21;
          }
        }
        break;
      }
    }
LABEL_21:
    sub_34DABC();
    if ( i == nullptr )
    {
LABEL_23:
      i = (_DWORD *)sqlite3_malloc(12);
      if ( i == nullptr )
        return 7;
      v10 = -1;
    }
    else
    {
      v10 = *i;
    }
    a3[7] = (char *)i;
    name = (char *)a2;
  }
  else
  {
    if ( a2 != 0 )
    {
      name = (char *)a2;
    }
    else
    {
      result = sub_35E224(0x202u, v44);
      if ( result != 0 )
        return result;
      name = v44;
    }
    v10 = -1;
  }
  v27 = v37;
  if ( v29 != 0 )
    v27 = v37 | 0x40;
  if ( v36 != 0 )
    v27 |= 0x8080u;
  if ( v10 < 0 )
  {
    if ( (v5 & 0x80800) != 0 )
    {
      for ( k = sub_34CF50((unsigned int)name) - 1; name[k] != 45; --k )
        ;
      j_memcpy(v43, name, k);
      v43[k] = 0;
      if ( off_472358(v43, &buf) != 0 )
        return 1802;
      v12 = buf.st_mode & 0x1FF;
      st_uid = buf.st_uid;
      st_gid = buf.st_gid;
    }
    else
    {
      v12 = v33;
      if ( v33 != 0 )
        v12 = 384;
      st_uid = 0;
      st_gid = 0;
    }
    v10 = sub_35EC18(name, v27 | 0x20000, v12);
    if ( v10 < 0 )
    {
      if ( *(_DWORD *)j___errno() == 21
        || v37 == 0
        || v36 != 0
        || (v10 = sub_35EC18(name, v27 & 0xFFFDFFBD | 0x20000, v12)) < 0 )
      {
        v13 = sub_35ECC0(29405);
        v14 = sub_35ECE0(v13, "open", name, 29405);
        goto LABEL_102;
      }
      v5 = v5 & 0xFFFFFFF8 | 1;
      v35 = 1;
    }
    if ( (v5 & 0x80800) != 0 )
      off_472418(v10, st_uid, st_gid);
  }
  if ( a5 != nullptr )
    *a5 = v5;
  v15 = (int *)a3[7];
  if ( v15 != nullptr )
  {
    *v15 = v10;
    *((_DWORD *)a3[7] + 1) = v5;
  }
  v16 = 0;
  if ( v33 != 0 )
  {
    v16 = 32;
    off_4723E8(name);
  }
  if ( v35 != 0 )
    v16 |= 2u;
  if ( v31 != 256 )
    v16 |= 0x80u;
  if ( v32 )
    v16 |= 8u;
  if ( (v5 & 0x40) != 0 )
    v16 |= 0x40u;
  a3[3] = (char *)v10;
  a3[1] = (char *)a1;
  a3[8] = (char *)a2;
  *((_WORD *)a3 + 9) = v16;
  *((_QWORD *)a3 + 8) = qword_4716E8;
  if ( sqlite3_uri_boolean((v16 << 25 >> 31) & a2, "psow", 1) )
    *((_WORD *)a3 + 9) |= 0x10u;
  if ( j_strcmp(*(const char **)(a1 + 16), "unix-excl") == 0 )
    *((_WORD *)a3 + 9) |= 1u;
  v14 = v16 & 0x80;
  if ( v14 != 0 )
  {
    v14 = 0;
    namea = (char *)&unk_4545C4;
  }
  else
  {
    namea = (char *)(**(int (__fastcall ***)(int, char **))(a1 + 20))(a2, a3);
    if ( namea == (char *)&unk_454578 )
    {
      sub_34DAAE();
      if ( off_472364((int)a3[3], &buf) != 0 )
      {
        v17 = (char **)j___errno();
        v18 = *v17;
        v14 = 10;
        a3[5] = *v17;
        if ( v18 == (_BYTE *)&dword_48 + 3 )
          v14 = 22;
      }
      else
      {
        v19 = (char *)dword_559568;
        v39 = __PAIR64__(v41, buf.st_dev);
        while ( v19 != nullptr )
        {
          if ( j_memcmp(&v39, v19, 8u) == 0 )
          {
            ++*((_DWORD *)v19 + 4);
LABEL_89:
            a3[2] = v19;
            v14 = 0;
            goto LABEL_92;
          }
          v19 = *((char **)v19 + 8);
        }
        v20 = (char *)sqlite3_malloc(40);
        v19 = v20;
        if ( v20 != nullptr )
        {
          j_memset(v20, 0, 0x28u);
          *(_QWORD *)v19 = v39;
          *((_DWORD *)v19 + 4) = 1;
          *((_DWORD *)v19 + 9) = 0;
          v21 = dword_559568;
          *((_DWORD *)v19 + 8) = dword_559568;
          if ( v21 != 0 )
            *(_DWORD *)(v21 + 36) = v19;
          dword_559568 = (int)v19;
          goto LABEL_89;
        }
        v14 = 7;
      }
      sub_35EF54((int)a3, v10, 28928);
      v10 = -1;
LABEL_92:
      sub_34DABC();
    }
    else if ( namea == (char *)&unk_454610 )
    {
      v28 = j_strlen((const char *)a2) + 6;
      v22 = sqlite3_malloc(v28);
      if ( v22 != 0 )
        sqlite3_snprintf(v28, v22, (int)"%s.lock", a2);
      else
        v14 = 7;
      a3[6] = (char *)v22;
    }
  }
  a3[5] = nullptr;
  if ( v14 == 0 )
  {
    *a3 = namea;
    sub_35F484((int)a3);
    return 0;
  }
  if ( v10 != -1 )
    sub_35EF54((int)a3, v10, 29013);
LABEL_102:
  if ( v14 != 0 )
  {
    sqlite3_free(a3[7]);
    return v14;
  }
  return 0;
}


//======================================================================
// sub_35F9D8
// address: 0x0035F9D8   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_35F9D8(_DWORD *a1)
{
  int v2; // r3
  int v3; // r2
  _DWORD *v4; // r5
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r4

  sub_35F484((int)a1);
  sub_35F174((int)a1, 0);
  sub_34DAAE();
  v2 = a1[2];
  if ( v2 != 0 && *(_DWORD *)(v2 + 24) != 0 )
  {
    v3 = a1[7];
    *(_DWORD *)(v3 + 8) = *(_DWORD *)(v2 + 28);
    *(_DWORD *)(v2 + 28) = v3;
    a1[3] = -1;
    a1[7] = 0;
  }
  v4 = (_DWORD *)a1[2];
  if ( v4 != nullptr )
  {
    v5 = v4[4] - 1;
    v4[4] = v5;
    if ( v5 == 0 )
    {
      sub_35F148((int)a1);
      v6 = v4[9];
      if ( v6 != 0 )
        *(_DWORD *)(v6 + 32) = v4[8];
      else
        dword_559568 = v4[8];
      v7 = v4[8];
      if ( v7 != 0 )
        *(_DWORD *)(v7 + 36) = v4[9];
      sqlite3_free(v4);
    }
  }
  v8 = sub_35F068(a1);
  sub_34DABC();
  return v8;
}


//======================================================================
// sub_35FA58
// address: 0x0035FA58   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_35FA58(int a1)
{
  const char *v2; // r0

  v2 = sqlite3_sourceid();
  sqlite3_log(11, (int)"database corruption at line %d of [%.10s]", a1, v2 + 20);
  return 11;
}


//======================================================================
// sub_35FA78
// address: 0x0035FA78   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_35FA78(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r1
  unsigned int v4; // r2
  int v5; // r3
  __int16 v6; // r2

  v2 = a2 >> 3 << 24;
  v3 = a2 & 0xFFFFFFF7;
  v4 = HIBYTE(v2);
  *(_BYTE *)(a1 + 6) = -4 * v4 + 4;
  *(_BYTE *)(a1 + 3) = v4;
  v5 = *(_DWORD *)(a1 + 52);
  if ( v3 == 5 )
  {
    *(_BYTE *)(a1 + 2) = 1;
    *(_BYTE *)(a1 + 4) = v4;
    *(_WORD *)(a1 + 8) = *(_WORD *)(v5 + 28);
    v6 = *(_WORD *)(v5 + 30);
LABEL_5:
    *(_WORD *)(a1 + 10) = v6;
    *(_BYTE *)(a1 + 7) = *(_BYTE *)(v5 + 21);
    return 0;
  }
  if ( v3 == 2 )
  {
    *(_BYTE *)(a1 + 2) = 0;
    *(_BYTE *)(a1 + 4) = 0;
    *(_WORD *)(a1 + 8) = *(_WORD *)(v5 + 24);
    v6 = *(_WORD *)(v5 + 26);
    goto LABEL_5;
  }
  return sub_35FA58(52223);
}


//======================================================================
// sub_35FACC
// address: 0x0035FACC   size: 0x7A (122 bytes)
//======================================================================
__int64 __fastcall sub_35FACC(int a1, int a2)
{
  int v2; // r5
  int v4; // r6
  int v5; // r7
  int v6; // r3
  _BYTE *v7; // r3
  int v8; // r1
  int v9; // r3
  __int64 v11; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a1 + 52);
  HIDWORD(v11) = a2;
  v4 = *(_DWORD *)(a1 + 56);
  v5 = *(unsigned __int8 *)(a1 + 5);
  if ( (*(_WORD *)(v2 + 22) & 4) != 0 )
    j_memset((void *)(v4 + v5), 0, *(_DWORD *)(v2 + 36) - v5);
  v6 = 8;
  *(_BYTE *)(v4 + v5) = BYTE4(v11);
  if ( (v11 & 0x800000000LL) == 0 )
    v6 = 12;
  LODWORD(v11) = v6 + v5;
  j_memset((void *)(v4 + v5 + 1), 0, 4u);
  v7 = (_BYTE *)(v4 + v5);
  v7[7] = 0;
  v7[5] = BYTE1(*(_DWORD *)(v2 + 36));
  v7[6] = *(_DWORD *)(v2 + 36);
  *(_WORD *)(a1 + 14) = *(_DWORD *)(v2 + 36) - v11;
  sub_35FA78(a1, SHIDWORD(v11));
  *(_WORD *)(a1 + 12) = v11;
  v8 = *(_DWORD *)(v2 + 36);
  *(_BYTE *)(a1 + 1) = 0;
  *(_DWORD *)(a1 + 64) = v4 + v11;
  *(_DWORD *)(a1 + 60) = v4 + v8;
  v9 = *(_DWORD *)(v2 + 32);
  *(_WORD *)(a1 + 16) = 0;
  *(_WORD *)(a1 + 18) = v9 - 1;
  *(_BYTE *)a1 = 1;
  return v11;
}


//======================================================================
// sub_35FB48
// address: 0x0035FB48   size: 0xF6 (246 bytes)
//======================================================================
int __fastcall sub_35FB48(int a1)
{
  int v2; // r4
  int v3; // r6
  int v4; // r0
  __int16 v5; // r5
  int v6; // r2
  int v7; // r5
  int v8; // r4
  unsigned int v9; // r3
  int v10; // r6
  int v11; // r12
  int v12; // r3
  int v13; // r5
  int v14; // r1
  int v15; // r2
  int v16; // r1
  int v18; // [sp+4h] [bp-18h]
  int v19; // [sp+8h] [bp-14h]
  int v20; // [sp+Ch] [bp-10h]
  int v21; // [sp+14h] [bp-8h]

  v2 = *(unsigned __int8 *)(a1 + 5);
  v3 = *(_DWORD *)(a1 + 52);
  v19 = *(_DWORD *)(a1 + 56);
  v18 = sub_35FA78(a1, *(unsigned __int8 *)(v19 + v2));
  if ( v18 != 0 )
  {
    v4 = 52262;
  }
  else
  {
    v5 = *(unsigned __int8 *)(a1 + 3);
    *(_WORD *)(a1 + 18) = *(_DWORD *)(v3 + 32) - 1;
    *(_BYTE *)(a1 + 1) = 0;
    v6 = *(_DWORD *)(v3 + 36);
    v7 = (unsigned __int16)(v2 + 12 - 4 * v5);
    *(_DWORD *)(a1 + 60) = v19 + v6;
    *(_WORD *)(a1 + 12) = v7;
    *(_DWORD *)(a1 + 64) = v19 + v7;
    v8 = v19 + v2;
    v20 = v6;
    v21 = (unsigned __int16)(_byteswap_ushort(*(_WORD *)(v8 + 5)) - 1) + 1;
    v9 = *(unsigned __int8 *)(v8 + 4) | (*(unsigned __int8 *)(v8 + 3) << 8);
    *(_WORD *)(a1 + 16) = _byteswap_ushort(*(_WORD *)(v8 + 3));
    if ( v9 <= (*(_DWORD *)(v3 + 32) - 8) / 6u )
    {
      v10 = v7 + 2 * v9;
      v11 = v6 - 4;
      v12 = (*(unsigned __int8 *)(v8 + 1) << 8) | *(unsigned __int8 *)(v8 + 2);
      v13 = *(unsigned __int8 *)(v8 + 7) + v21;
      while ( v12 != 0 )
      {
        v14 = v12;
        if ( v12 < v10 || v12 > v11 )
        {
          v4 = 52317;
          return sub_35FA58(v4);
        }
        v12 = *(unsigned __int8 *)(v19 + v12 + 1) | (*(unsigned __int8 *)(v19 + v12) << 8);
        v15 = (*(unsigned __int8 *)(v19 + v14 + 2) << 8) | *(unsigned __int8 *)(v19 + v14 + 3);
        v16 = v14 + v15;
        if ( v12 != 0 && v12 <= v16 + 3 || v16 > v20 )
        {
          v4 = 52324;
          return sub_35FA58(v4);
        }
        v13 += v15;
      }
      if ( v13 <= v20 )
      {
        *(_WORD *)(a1 + 14) = v13 - v10;
        *(_BYTE *)a1 = 1;
        return v18;
      }
      v4 = 52338;
    }
    else
    {
      v4 = 52274;
    }
  }
  return sub_35FA58(v4);
}


//======================================================================
// sub_35FC54
// address: 0x0035FC54   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_35FC54(_BYTE *a1)
{
  int v1; // r3

  v1 = 0;
  if ( *a1 == 0 )
    return sub_35FB48((int)a1);
  return v1;
}


//======================================================================
// sub_35FC68
// address: 0x0035FC68   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_35FC68(int result)
{
  _BYTE *v1; // r3

  v1 = *(_BYTE **)(result + 8);
  if ( *v1 != 0 )
  {
    *v1 = 0;
    if ( *(__int16 *)(result + 26) > 1 )
      return sub_35FC54(v1);
  }
  return result;
}


//======================================================================
// sub_35FC88
// address: 0x0035FC88   size: 0x1E6 (486 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_35FC88(unsigned __int8 *result, int a2, size_t a3, _DWORD *a4)
{
  _WORD *v4; // r5
  __int16 v5; // r7
  int v6; // r4
  unsigned int v7; // r6
  int v8; // r3
  int i; // r3
  _BYTE *v10; // r2
  int v11; // r0
  __int16 v12; // r12
  int v13; // r0
  _BYTE *v14; // r6
  int v15; // r0
  unsigned __int16 v16; // r6
  __int16 v17; // r3
  int v18; // r3
  int v19; // r2
  int v20; // r1
  int v21; // r1
  unsigned __int8 *v22; // r1
  _BYTE *v23; // r2
  int v24; // r0
  _BYTE *v25; // r3
  int v26; // r7
  unsigned __int8 *v27; // r7
  __int16 v28; // r1
  int v29; // r2
  int v30; // r4
  int v31; // [sp+Ch] [bp-28h]
  int v32; // [sp+10h] [bp-24h]
  unsigned __int8 *v33; // [sp+14h] [bp-20h]
  _BYTE *v34; // [sp+18h] [bp-1Ch]
  int v36; // [sp+20h] [bp-14h]
  _BYTE *v37; // [sp+24h] [bp-10h]
  int v39; // [sp+2Ch] [bp-8h]

  v4 = result;
  v5 = a3;
  if ( *a4 == 0 )
  {
    v6 = *((_DWORD *)result + 14);
    v33 = (unsigned __int8 *)(*((_DWORD *)result + 16) + 2 * a2);
    v36 = result[5];
    v7 = (*v33 << 8) | v33[1];
    if ( v7 >= ((*(unsigned __int8 *)(v6 + v36 + 5) << 8) | (unsigned int)*(unsigned __int8 *)(v6 + v36 + 6))
      && (v8 = *((_DWORD *)result + 13), v7 + a3 <= *(_DWORD *)(v8 + 36)) )
    {
      if ( (*(_WORD *)(v8 + 22) & 4) != 0 )
        j_memset((void *)(v6 + v7), 0, a3);
      v31 = *((unsigned __int8 *)v4 + 5);
      v32 = v31 + 1;
      for ( i = v31 + 1; ; i = (*(unsigned __int8 *)(v6 + i) << 8) | (unsigned __int8)*v10 )
      {
        v10 = (_BYTE *)(v6 + i + 1);
        v11 = (*(unsigned __int8 *)(v6 + i) << 8) | (unsigned __int8)*v10;
        v12 = (*(unsigned __int8 *)(v6 + i) << 8) | (unsigned __int8)*v10;
        if ( v11 >= (int)v7 || v11 == 0 )
          break;
        if ( i + 3 >= v11 )
        {
          v13 = 52143;
          goto LABEL_24;
        }
      }
      if ( v11 <= *(_DWORD *)(*((_DWORD *)v4 + 13) + 36) - 4 )
      {
        *(_BYTE *)(v6 + i) = BYTE1(v7);
        *v10 = v7;
        *(_BYTE *)(v6 + v7) = HIBYTE(v12);
        v14 = (_BYTE *)(v6 + v7);
        v14[3] = v5;
        v14[1] = v12;
        v14[2] = HIBYTE(v5);
        v4[7] += v5;
        v39 = v31 + 7;
        while ( 1 )
        {
          v18 = (*(unsigned __int8 *)(v6 + v32) << 8) | *(unsigned __int8 *)(v6 + v32 + 1);
          if ( v18 == 0 )
            break;
          v19 = (*(unsigned __int8 *)(v6 + v18) << 8) | *(unsigned __int8 *)(v6 + v18 + 1);
          v34 = (_BYTE *)(v6 + v18 + 2);
          v37 = (_BYTE *)(v6 + v18 + 3);
          v20 = v18 + (((unsigned __int8)*v34 << 8) | (unsigned __int8)*v37);
          if ( v20 + 3 >= v19 && v19 != 0 )
          {
            v21 = v19 - v20;
            if ( v21 < 0 || (v15 = *(unsigned __int8 *)(v6 + v39), v21 > v15) )
            {
              v13 = 52167;
              goto LABEL_24;
            }
            *(_BYTE *)(v6 + v39) = v15 - v21;
            v16 = _byteswap_ushort(*(_WORD *)(v6 + v19));
            *(_BYTE *)(v6 + v18) = HIBYTE(v16);
            *(_BYTE *)(v6 + v18 + 1) = v16;
            v17 = v19 + _byteswap_ushort(*(_WORD *)(v6 + v19 + 2)) - v18;
            *v34 = HIBYTE(v17);
            *v37 = v17;
            v18 = v32;
          }
          v32 = v18;
        }
        v22 = (unsigned __int8 *)(v6 + v31 + 1);
        v23 = (_BYTE *)(v6 + v31 + 5);
        v24 = (unsigned __int8)*v23;
        if ( v24 == *v22 )
        {
          v25 = (_BYTE *)(v6 + v31 + 6);
          v26 = (unsigned __int8)*v25;
          if ( v26 == *(unsigned __int8 *)(v6 + v31 + 2) )
          {
            v27 = (unsigned __int8 *)(v6 + (v26 | (v24 << 8)));
            *v22 = *v27;
            v22[1] = v27[1];
            v28 = (((unsigned __int8)*v23 << 8) | (unsigned __int8)*v25) + _byteswap_ushort(*((_WORD *)v27 + 1));
            *v23 = HIBYTE(v28);
            *v25 = v28;
          }
        }
        goto LABEL_30;
      }
      v13 = 52148;
LABEL_24:
      result = (unsigned __int8 *)sub_35FA58(v13);
      if ( result != nullptr )
        goto LABEL_29;
LABEL_30:
      v29 = (unsigned __int16)(v4[8] - 1);
      v4[8] = v29;
      result = (unsigned __int8 *)j_memmove(v33, v33 + 2, 2 * (v29 - a2));
      v30 = v6 + v36;
      *(_BYTE *)(v30 + 3) = HIBYTE(v4[8]);
      *(_BYTE *)(v30 + 4) = v4[8];
      v4[7] += 2;
    }
    else
    {
      result = (unsigned __int8 *)sub_35FA58(56477);
LABEL_29:
      *a4 = result;
    }
  }
  return result;
}


//======================================================================
// sub_35FE80
// address: 0x0035FE80   size: 0xFA (250 bytes)
//======================================================================
int __fastcall sub_35FE80(int a1)
{
  _DWORD *v1; // r3
  int v2; // r7
  int v3; // r4
  int v5; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r4
  int v9; // r6
  signed int v10; // r4
  int v11; // r6
  int v12; // r0
  size_t v13; // r0
  _BYTE *v14; // r3
  size_t v15; // r4
  int result; // r0
  _BYTE *v17; // [sp+4h] [bp-30h]
  signed int v18; // [sp+8h] [bp-2Ch]
  int v19; // [sp+Ch] [bp-28h]
  int v20; // [sp+10h] [bp-24h]
  int v21; // [sp+14h] [bp-20h]
  _BYTE *v22; // [sp+18h] [bp-1Ch]
  _BYTE *v23; // [sp+1Ch] [bp-18h]
  _BYTE *v24; // [sp+2Ch] [bp-8h]

  v1 = *(_DWORD **)(a1 + 52);
  v2 = *(_DWORD *)(a1 + 56);
  v3 = *(unsigned __int16 *)(a1 + 12);
  v18 = v1[9];
  v21 = *(_DWORD *)(*v1 + 200);
  v5 = 2 * *(unsigned __int16 *)(a1 + 16);
  v22 = (_BYTE *)(v2 + *(unsigned __int8 *)(a1 + 5) + 5);
  v23 = (_BYTE *)(v2 + *(unsigned __int8 *)(a1 + 5) + 6);
  v20 = *(unsigned __int8 *)(a1 + 5);
  v6 = ((unsigned __int8)*v22 << 8) | (unsigned __int8)*v23;
  j_memcpy((void *)(v21 + v6), (const void *)(v2 + v6), v18 - v6);
  v7 = v3 + v5;
  v8 = v2 + v3 + 1;
  v9 = v8 + v5;
  v17 = (_BYTE *)v8;
  v10 = v18;
  v19 = v7;
  v24 = (_BYTE *)v9;
  while ( v17 != v24 )
  {
    v11 = ((unsigned __int8)*(v17 - 1) << 8) | (unsigned __int8)*v17;
    if ( v11 < v19 || v11 > v18 - 4 )
    {
      v12 = 51964;
      return sub_35FA58(v12);
    }
    v13 = sub_3524C6(a1, v21 + v11);
    v10 -= v13;
    if ( v10 < v19 || (int)(v11 + v13) > v18 )
    {
      v12 = 51976;
      return sub_35FA58(v12);
    }
    j_memcpy((void *)(v2 + v10), (const void *)(v21 + v11), v13);
    *(v17 - 1) = BYTE1(v10);
    *v17 = v10;
    v17 += 2;
  }
  *v22 = BYTE1(v10);
  *v23 = v10;
  v14 = (_BYTE *)(v2 + v20);
  v14[1] = 0;
  v14[2] = 0;
  v14[7] = 0;
  v15 = v10 - v19;
  j_memset((void *)(v2 + v19), 0, v15);
  result = 0;
  if ( v15 == *(unsigned __int16 *)(a1 + 14) )
    return result;
  v12 = 51993;
  return sub_35FA58(v12);
}


//======================================================================
// sub_35FF88
// address: 0x0035FF88   size: 0x48 (72 bytes)
//======================================================================
__int64 __fastcall sub_35FF88(__int64 a1, unsigned int a2, unsigned int a3)
{
  int v3; // r5
  int v6; // r4

  v3 = a1;
  sub_34CB1C();
  v6 = sub_34CA72(*(_DWORD *)(v3 + 8));
  if ( v6 == 0 && a1 > __SPAIR64__(a3, a2) )
    v6 = sub_34CA5E(*(_DWORD *)(v3 + 8));
  sub_34CB30();
  if ( v6 != 0 )
    sqlite3_log(v6, (int)"cannot limit WAL size: %s", *(const char **)(v3 + 100));
  return a1;
}


//======================================================================
// sub_35FFD4
// address: 0x0035FFD4   size: 0x3A (58 bytes)
//======================================================================
_QWORD *__fastcall sub_35FFD4(int a1, int a2)
{
  int *v2; // r6
  _QWORD *v5; // r0
  _QWORD *v6; // r4
  int v7; // r2

  v2 = (int *)(a1 - 8);
  v5 = j_realloc((void *)(a1 - 8), a2 + 8);
  v6 = v5;
  if ( v5 != nullptr )
  {
    *v5 = a2;
    return v5 + 1;
  }
  else
  {
    if ( a1 != 0 )
      v7 = *v2;
    else
      v7 = 0;
    sqlite3_log(7, (int)"failed memory resize %u to %u bytes", v7, a2);
  }
  return v6;
}

