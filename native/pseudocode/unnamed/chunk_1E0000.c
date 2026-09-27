// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_1E0000

//======================================================================
// sub_1E004E
// address: 0x001E004E   size: 0x8 (8 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1E004E(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_1E03B4
// address: 0x001E03B4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_1E03B4(unsigned int *a1, int a2, int a3)
{
  unsigned int v4; // r3
  int result; // r0

  v4 = *a1;
  for ( result = 0; result != a3 && v4 <= 3; ++result )
  {
    if ( *(unsigned __int8 *)(a2 + result) == (unsigned __int8)-(v4 > 1) )
    {
      ++v4;
    }
    else if ( *(_BYTE *)(a2 + result) != 0 )
    {
      v4 = 0;
    }
    else
    {
      v4 = 4 - v4;
    }
  }
  *a1 = v4;
  return result;
}


//======================================================================
// sub_1E03EC
// address: 0x001E03EC   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1E03EC(int a1, int a2)
{
  int v2; // r4
  int v5; // r1
  int v6; // r0
  int result; // r0
  char *v8; // r0
  int v9; // r1
  size_t v10; // r7
  size_t v11; // r2
  int v12; // r3
  int v13; // r3
  size_t v14; // r6
  size_t v15; // r2
  size_t v16; // r7
  int v17; // r1
  size_t v18; // r3
  unsigned int v19; // r2
  unsigned int v20; // r3

  v2 = *(_DWORD *)(a1 + 28);
  if ( *(_DWORD *)(v2 + 52) == 0 )
  {
    v6 = (*(int (__fastcall **)(_DWORD, int, int))(a1 + 32))(*(_DWORD *)(a1 + 40), 1 << *(_DWORD *)(v2 + 36), 1);
    *(_DWORD *)(v2 + 52) = v6;
    if ( v6 == 0 )
      return 1;
  }
  if ( *(_DWORD *)(v2 + 40) == 0 )
  {
    v5 = *(_DWORD *)(v2 + 36);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 40) = 1 << v5;
    *(_DWORD *)(v2 + 44) = 0;
  }
  v8 = *(char **)(v2 + 52);
  v9 = *(_DWORD *)(a1 + 12);
  v10 = a2 - *(_DWORD *)(a1 + 16);
  v11 = *(_DWORD *)(v2 + 40);
  if ( v10 < v11 )
  {
    v13 = *(_DWORD *)(v2 + 48);
    v14 = v10;
    v15 = v11 - v13;
    if ( v10 > v15 )
      v14 = v15;
    j_memcpy(&v8[v13], (const void *)(v9 - v10), v14);
    v16 = v10 - v14;
    if ( v16 != 0 )
    {
      j_memcpy(*(void **)(v2 + 52), (const void *)(*(_DWORD *)(a1 + 12) - v16), v16);
      v17 = *(_DWORD *)(v2 + 40);
      *(_DWORD *)(v2 + 48) = v16;
      *(_DWORD *)(v2 + 44) = v17;
      return 0;
    }
    else
    {
      v18 = v14 + *(_DWORD *)(v2 + 48);
      v19 = *(_DWORD *)(v2 + 40);
      *(_DWORD *)(v2 + 48) = v18;
      if ( v18 == v19 )
        *(_DWORD *)(v2 + 48) = 0;
      v20 = *(_DWORD *)(v2 + 44);
      result = 0;
      if ( v20 < v19 )
        *(_DWORD *)(v2 + 44) = v14 + v20;
    }
  }
  else
  {
    j_memcpy(v8, (const void *)(v9 - v11), v11);
    v12 = *(_DWORD *)(v2 + 40);
    *(_DWORD *)(v2 + 48) = 0;
    *(_DWORD *)(v2 + 44) = v12;
    return 0;
  }
  return result;
}


//======================================================================
// sub_1E069C
// address: 0x001E069C   size: 0xDE (222 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   001E069C  LDR     R0, [R4]
//   001E069E  CMP     R0, #0x1E
//   001E06A0  BLS     loc_1E06A6
//   001E06A2  BL      sub_1E1530
//   001E06A6  BL      __gnu_thumb1_case_uhi; switch 31 cases
//   001E06AA  DCW 0x25; jump table for switch statement
//   001E06AC  DCW 0x23
//   001E06AE  DCW 0xC8
//   001E06B0  DCW 0xF1
//   001E06B2  DCW 0x11B
//   001E06B4  DCW 0x14F
//   001E06B6  DCW 0x18B
//   001E06B8  DCW 0x1DD
//   001E06BA  DCW 0x221
//   001E06BC  DCW 0x21
//   001E06BE  DCW 0x26E
//   001E06C0  DCW 0x287
//   001E06C2  DCW 0x28D
//   001E06C4  DCW 0x2D3
//   001E06C6  DCW 0x2FC
//   001E06C8  DCW 0x2FE
//   001E06CA  DCW 0x1F
//   001E06CC  DCW 0x350
//   001E06CE  DCW 0x3A5
//   001E06D0  DCW 0x4A7
//   001E06D2  DCW 0x4A9
//   001E06D4  DCW 0x551
//   001E06D6  DCW 0x576
//   001E06D8  DCW 0x5F1
//   001E06DA  DCW 0x613
//   001E06DC  DCW 0x657
//   001E06DE  DCW 0x667
//   001E06E0  DCW 0x6B2
//   001E06E2  DCW 0x6D9
//   001E06E4  DCW 0x6D5
//   001E06E6  DCW 0x6FC
//   001E06E8  LDR     R3, [SP,#arg_1C]; jumptable 001E06A6 case 16
//   001E06EA  B       loc_1E0D0A
//   001E06EC  LDR     R3, [SP,#arg_1C]; jumptable 001E06A6 case 9
//   001E06EE  B       loc_1E0B5E
//   001E06F0  LDR     R3, [SP,#arg_1C]; jumptable 001E06A6 case 1
//   001E06F2  B       loc_1E07EA
//   001E06F4  LDR     R2, [R4,#8]; jumptable 001E06A6 case 0
//   001E06F6  CMP     R2, #0
//   001E06F8  BEQ     loc_1E06FE
//   001E06FA  LDR     R3, [SP,#arg_1C]
//   001E06FC  B       loc_1E071A
//   001E06FE  MOVS    R3, #0xC
//   001E0700  B       sub_1E077E
//   001E0702  LDR     R1, [SP,#arg_18]
//   001E0704  CMP     R1, #0
//   001E0706  BNE     loc_1E070C
//   001E0708  BL      sub_1E1460
//   001E070C  SUBS    R1, #1
//   001E070E  STR     R1, [SP,#arg_18]; int
//   001E0710  LDRB    R1, [R3]
//   001E0712  ADDS    R3, #1
//   001E0714  LSLS    R1, R5
//   001E0716  ADDS    R6, R6, R1
//   001E0718  ADDS    R5, #8
//   001E071A  STR     R3, [SP,#arg_1C]; void *
//   001E071C  CMP     R5, #0xF
//   001E071E  BLS     loc_1E0702
//   001E0720  MOVS    R3, #2
//   001E0722  TST     R2, R3
//   001E0724  BEQ     loc_1E074E
//   001E0726  LDR     R3, =0x8B1F
//   001E0728  CMP     R6, R3
//   001E072A  BNE     loc_1E074E
//   001E072C  MOVS    R0, #0
//   001E072E  MOVS    R1, R0
//   001E0730  MOVS    R2, R0
//   001E0732  BL      crc32
//   001E0736  ADD     R1, SP, #arg_4C
//   001E0738  MOVS    R3, #0x1F
//   001E073A  STRB    R3, [R1]
//   001E073C  STR     R0, [R4,#0x18]
//   001E073E  MOVS    R3, #0x8B
//   001E0740  MOVS    R2, #2
//   001E0742  STRB    R3, [R1,#1]
//   001E0744  BL      crc32
//   001E0748  MOVS    R3, #1
//   001E074A  STR     R0, [R4,#0x18]
//   001E074C  B       loc_1E07CA
//   001E074E  MOVS    R3, #0
//   001E0750  STR     R3, [R4,#0x10]
//   001E0752  LDR     R3, [R4,#0x20]
//   001E0754  CMP     R3, #0
//   001E0756  BEQ     loc_1E075E
//   001E0758  MOVS    R2, #1
//   001E075A  NEGS    R2, R2
//   001E075C  STR     R2, [R3,#0x30]
//   001E075E  LDR     R0, [R4,#8]
//   001E0760  LSLS    R0, R0, #0x1F
//   001E0762  BPL     loc_1E0776
//   001E0764  LSLS    R0, R6, #0x18
//   001E0766  LSRS    R0, R0, #0x10
//   001E0768  LSRS    R3, R6, #8
//   001E076A  ADDS    R0, R0, R3
//   001E076C  MOVS    R1, #0x1F
//   001E076E  BL      __aeabi_uidivmod
//   001E0772  CMP     R1, #0
//   001E0774  BEQ     loc_1E0782
//   001E0776  LDR     R3, =(aIncorrectHeade - 0x1E077C); "incorrect header check"
//   001E0778  ADD     R3, PC; "incorrect header check"

//======================================================================
// sub_1E077A
// address: 0x001E077A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_1E077A(
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
        int a19)
{
  int v19; // r7

  *(_DWORD *)(v19 + 24) = a4;
  return sub_1E077E(a1, a2, a3, 29, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
}


//======================================================================
// sub_1E077E
// address: 0x001E077E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_1E077E(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        size_t a10,
        int a11,
        void *a12,
        int a13,
        int a14,
        int a15,
        void *a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        char a24)
{
  int *v24; // r4

  *v24 = a4;
  return sub_1E069C(
           a1,
           a2,
           a3,
           a4,
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
           a24);
}


//======================================================================
// sub_1E1460
// address: 0x001E1460   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall sub_1E1460(
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
  _DWORD *v21; // r4
  int v22; // r5
  int v23; // r6
  _DWORD *v24; // r7
  int v25; // r2
  int v26; // r6
  unsigned int v27; // r5
  int v28; // r0
  int v29; // r2
  unsigned int v30; // r0
  unsigned __int8 *v31; // r1
  unsigned int v32; // r0
  int v33; // r3
  int v34; // r0

  v24[3] = a16;
  v24[4] = a14;
  *v24 = a12;
  v24[1] = a11;
  v25 = v21[10];
  v21[14] = v23;
  v21[15] = v22;
  if ( (v25 != 0 || a18 != v24[4] && *v21 <= 0x1Cu && (*v21 <= 0x19u || a19 != 4)) && sub_1E03EC((int)v24, a18) != 0 )
  {
    *v21 = 30;
    goto LABEL_21;
  }
  v26 = a21 - v24[1];
  v27 = a18 - v24[4];
  v28 = v24[5];
  v24[2] += v26;
  v24[5] = v28 + v27;
  v29 = v21[2];
  v21[7] += v27;
  if ( v29 != 0 && v27 != 0 )
  {
    v30 = v21[6];
    v31 = (unsigned __int8 *)(v24[3] - v27);
    if ( v21[4] != 0 )
      v32 = crc32(v30, v31, v27);
    else
      v32 = adler32(v30, v31, v27);
    v21[6] = v32;
    v24[12] = v32;
  }
  if ( *v21 == 19 )
    v33 = 256;
  else
    v33 = (*v21 == 14) << 8;
  v24[11] = ((v21[1] != 0) << 6) + v21[15] + ((*v21 == 11) << 7) + v33;
  if ( (v27 | v26) == 0 || (v34 = a15, a19 == 4) )
  {
    v34 = a15;
    if ( a15 == 0 )
LABEL_21:
      JUMPOUT(0x1E1532);
  }
  return sub_1E1534(v34);
}


//======================================================================
// sub_1E1530
// address: 0x001E1530   size: 0x4 (4 bytes)
//======================================================================
int sub_1E1530()
{
  return sub_1E1534(-2);
}


//======================================================================
// sub_1E1534
// address: 0x001E1534   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1E1534(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_1E1B38
// address: 0x001E1B38   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_1E1B38(int result)
{
  int i; // r3
  _WORD *v2; // r1
  int j; // r3
  int v4; // r2
  int k; // r3
  int v6; // r1

  for ( i = 0; i != 1144; i += 4 )
  {
    v2 = (_WORD *)(result + i + 148);
    *v2 = 0;
  }
  for ( j = 0; j != 120; j += 4 )
  {
    v4 = result + j;
    *(_WORD *)(v4 + 2440) = 0;
  }
  for ( k = 0; k != 76; k += 4 )
  {
    v6 = result + k;
    *(_WORD *)(v6 + 2684) = 0;
  }
  *(_WORD *)(result + 1172) = 1;
  *(_DWORD *)(result + 5804) = 0;
  *(_DWORD *)(result + 5800) = 0;
  *(_DWORD *)(result + 5808) = 0;
  *(_DWORD *)(result + 5792) = 0;
  return result;
}


//======================================================================
// sub_1E1BA8
// address: 0x001E1BA8   size: 0xBC (188 bytes)
//======================================================================
int __fastcall sub_1E1BA8(int a1, int a2, int a3)
{
  int v3; // r12
  int i; // r3
  int v5; // r6
  int v6; // r5
  unsigned int v7; // r7
  unsigned int v8; // r6
  int v9; // r4
  unsigned int v10; // r5
  int result; // r0
  int v12; // [sp+8h] [bp-14h]
  unsigned int v13; // [sp+Ch] [bp-10h]

  v3 = *(_DWORD *)(a1 + 4 * (a3 + 726) + 4);
  v12 = *(_DWORD *)(a1 + 5200);
  for ( i = 2 * a3; i <= v12; i *= 2 )
  {
    if ( i < v12 )
    {
      v5 = *(_DWORD *)(a1 + 4 * (i + 727) + 4);
      v13 = *(unsigned __int16 *)(4 * v5 + a2);
      v6 = *(_DWORD *)(a1 + 4 * (i + 726) + 4);
      v7 = *(unsigned __int16 *)(4 * v6 + a2);
      if ( v13 < v7
        || v13 == v7 && *(unsigned __int8 *)(a1 + v5 + 5208) <= (unsigned int)*(unsigned __int8 *)(a1 + v6 + 5208) )
      {
        ++i;
      }
    }
    v8 = *(unsigned __int16 *)(a2 + 4 * v3);
    v9 = *(_DWORD *)(a1 + 4 * (i + 726) + 4);
    v10 = *(unsigned __int16 *)(4 * v9 + a2);
    if ( v8 < v10
      || v8 == v10 && *(unsigned __int8 *)(a1 + v3 + 5208) <= (unsigned int)*(unsigned __int8 *)(a1 + v9 + 5208) )
    {
      break;
    }
    *(_DWORD *)(a1 + 4 * (a3 + 726) + 4) = v9;
    a3 = i;
  }
  result = a1 + 4 * (a3 + 726);
  *(_DWORD *)(result + 4) = v3;
  return result;
}


//======================================================================
// sub_1E1C74
// address: 0x001E1C74   size: 0xA8 (168 bytes)
//======================================================================
unsigned __int64 __fastcall sub_1E1C74(unsigned int a1, int a2, unsigned int a3)
{
  int v3; // r3
  int v4; // r5
  int v5; // r4
  int v6; // r2
  int v7; // r12
  int i; // r7
  int v9; // r6
  int v10; // r2
  unsigned __int64 v12; // [sp+0h] [bp-Ch]

  v12 = __PAIR64__(a3, a1);
  v3 = *(unsigned __int16 *)(a2 + 2);
  if ( *(_WORD *)(a2 + 2) != 0 )
  {
    v4 = 4;
    v5 = 7;
  }
  else
  {
    v4 = 3;
    v5 = 138;
  }
  *(_WORD *)(a2 + 4 * (a3 + 1) + 2) = -1;
  v6 = 0;
  v7 = -1;
  for ( i = 0; i <= SHIDWORD(v12); ++i )
  {
    ++v6;
    v9 = *(unsigned __int16 *)(a2 + 4 * i + 6);
    if ( v6 < v5 && v3 == v9 )
    {
      v3 = v7;
    }
    else
    {
      if ( v6 >= v4 )
      {
        if ( v3 != 0 )
        {
          if ( v3 != v7 )
            ++*(_WORD *)(a1 + 4 * v3 + 2684);
          v10 = 2748;
        }
        else if ( v6 > 10 )
        {
          v10 = 2756;
        }
        else
        {
          v10 = 2752;
        }
        ++*(_WORD *)(a1 + v10);
      }
      else
      {
        *(_WORD *)(a1 + 4 * v3 + 2684) += v6;
      }
      if ( v9 != 0 )
      {
        if ( v3 == v9 )
        {
          v4 = 3;
          v5 = 6;
        }
        else
        {
          v4 = 4;
          v5 = 7;
        }
        v6 = 0;
      }
      else
      {
        v4 = 3;
        v5 = 138;
        v6 = 0;
      }
    }
    v7 = v3;
    v3 = v9;
  }
  return v12;
}


//======================================================================
// sub_1E1D28
// address: 0x001E1D28   size: 0x3A6 (934 bytes)
//======================================================================
int __fastcall sub_1E1D28(int result, int a2, int a3)
{
  int v3; // r4
  int v4; // r1
  int v5; // r5
  int v6; // r12
  int v7; // r5
  int v8; // r1
  int v9; // r6
  __int16 v10; // r4
  int v11; // r1
  int v12; // r1
  int v13; // r7
  int v14; // r4
  int v15; // r4
  int v16; // r5
  int v17; // r1
  int v18; // r6
  __int16 v19; // r4
  int v20; // r1
  int v21; // r1
  int v22; // r7
  int v23; // r4
  int v24; // r4
  int v25; // r1
  int v26; // r5
  __int16 v27; // r1
  int v28; // r7
  int v29; // r1
  int v30; // r6
  int v31; // r4
  int v32; // r1
  __int16 v33; // r4
  int v34; // r5
  int v35; // r4
  int v36; // r7
  int v37; // r4
  int v38; // r4
  int v39; // r1
  int v40; // r4
  int v41; // r1
  int v42; // r5
  __int16 v43; // r1
  int v44; // r7
  int v45; // r1
  int v46; // r6
  int v47; // r1
  __int16 v48; // r1
  int v49; // r5
  int v50; // r1
  int v51; // r7
  int v52; // r1
  int v53; // r1
  int v54; // r4
  int v55; // r1
  int v56; // r5
  __int16 v57; // r1
  int v58; // r7
  int v59; // r1
  int v60; // r6
  int v61; // r1
  __int16 v62; // r1
  int v63; // r5
  int v64; // r1
  int v65; // r7
  int v66; // r1
  int v67; // [sp+4h] [bp-20h]
  int v68; // [sp+8h] [bp-1Ch]
  int v69; // [sp+Ch] [bp-18h]
  int v70; // [sp+10h] [bp-14h]
  int v71; // [sp+14h] [bp-10h]

  v69 = *(unsigned __int16 *)(a2 + 2);
  if ( *(_WORD *)(a2 + 2) != 0 )
  {
    v3 = 4;
    v4 = 7;
  }
  else
  {
    v3 = 3;
    v4 = 138;
  }
  v67 = 0;
  v71 = 0;
  v5 = -1;
  while ( v71 <= a3 )
  {
    v70 = *(unsigned __int16 *)(a2 + 4 * v71 + 6);
    v6 = v67 + 1;
    if ( v67 + 1 < v4 && v69 == v70 )
    {
      v69 = v5;
    }
    else
    {
      if ( v6 >= v3 )
      {
        if ( v69 != 0 )
        {
          if ( v69 == v5 )
          {
            LOWORD(v67) = v67 + 1;
          }
          else
          {
            v15 = result + 4 * v69;
            v16 = *(unsigned __int16 *)(v15 + 2686);
            v17 = *(_DWORD *)(result + 5820);
            v18 = *(unsigned __int16 *)(v15 + 2684);
            if ( v17 <= 16 - v16 )
            {
              *(_WORD *)(result + 5816) |= v18 << v17;
              *(_DWORD *)(result + 5820) = v17 + v16;
            }
            else
            {
              v19 = *(_WORD *)(result + 5816) | ((_WORD)v18 << v17);
              *(_WORD *)(result + 5816) = v19;
              v20 = *(_DWORD *)(result + 20);
              *(_DWORD *)(result + 20) = v20 + 1;
              *(_BYTE *)(*(_DWORD *)(result + 8) + v20) = v19;
              v21 = *(_DWORD *)(result + 20);
              v22 = *(_DWORD *)(result + 8);
              *(_DWORD *)(result + 20) = v21 + 1;
              *(_BYTE *)(v22 + v21) = HIBYTE(*(_WORD *)(result + 5816));
              v23 = *(_DWORD *)(result + 5820);
              *(_WORD *)(result + 5816) = v18 >> (16 - v23);
              *(_DWORD *)(result + 5820) = v23 + v16 - 16;
            }
          }
          v24 = *(unsigned __int16 *)(result + 2750);
          v25 = *(_DWORD *)(result + 5820);
          if ( v25 <= 16 - v24 )
          {
            *(_WORD *)(result + 5816) |= *(_WORD *)(result + 2748) << v25;
          }
          else
          {
            v26 = *(unsigned __int16 *)(result + 2748);
            v24 -= 16;
            v27 = ((_WORD)v26 << v25) | *(_WORD *)(result + 5816);
            *(_WORD *)(result + 5816) = v27;
            v28 = *(_DWORD *)(result + 20);
            *(_DWORD *)(result + 20) = v28 + 1;
            *(_BYTE *)(*(_DWORD *)(result + 8) + v28) = v27;
            v29 = *(_DWORD *)(result + 20);
            v30 = *(_DWORD *)(result + 8);
            *(_DWORD *)(result + 20) = v29 + 1;
            *(_BYTE *)(v30 + v29) = HIBYTE(*(_WORD *)(result + 5816));
            v25 = *(_DWORD *)(result + 5820);
            *(_WORD *)(result + 5816) = v26 >> (16 - v25);
          }
          *(_DWORD *)(result + 5820) = v25 + v24;
          v31 = *(_DWORD *)(result + 5820);
          v32 = (unsigned __int16)(v67 - 3);
          if ( v31 <= 14 )
          {
            v39 = v32 << v31;
            v38 = v31 + 2;
            *(_WORD *)(result + 5816) |= v39;
          }
          else
          {
            v33 = ((_WORD)v32 << v31) | *(_WORD *)(result + 5816);
            *(_WORD *)(result + 5816) = v33;
            v34 = *(_DWORD *)(result + 20);
            *(_DWORD *)(result + 20) = v34 + 1;
            *(_BYTE *)(*(_DWORD *)(result + 8) + v34) = v33;
            v35 = *(_DWORD *)(result + 20);
            v36 = *(_DWORD *)(result + 8);
            *(_DWORD *)(result + 20) = v35 + 1;
            *(_BYTE *)(v36 + v35) = HIBYTE(*(_WORD *)(result + 5816));
            v37 = *(_DWORD *)(result + 5820);
            *(_WORD *)(result + 5816) = v32 >> (16 - v37);
            v38 = v37 - 14;
          }
          *(_DWORD *)(result + 5820) = v38;
        }
        else
        {
          if ( v6 > 10 )
          {
            v54 = *(unsigned __int16 *)(result + 2758);
            v55 = *(_DWORD *)(result + 5820);
            if ( v55 <= 16 - v54 )
            {
              *(_WORD *)(result + 5816) |= *(_WORD *)(result + 2756) << v55;
            }
            else
            {
              v56 = *(unsigned __int16 *)(result + 2756);
              v54 -= 16;
              v57 = ((_WORD)v56 << v55) | *(_WORD *)(result + 5816);
              *(_WORD *)(result + 5816) = v57;
              v58 = *(_DWORD *)(result + 20);
              *(_DWORD *)(result + 20) = v58 + 1;
              *(_BYTE *)(*(_DWORD *)(result + 8) + v58) = v57;
              v59 = *(_DWORD *)(result + 20);
              v60 = *(_DWORD *)(result + 8);
              *(_DWORD *)(result + 20) = v59 + 1;
              *(_BYTE *)(v60 + v59) = HIBYTE(*(_WORD *)(result + 5816));
              v55 = *(_DWORD *)(result + 5820);
              *(_WORD *)(result + 5816) = v56 >> (16 - v55);
            }
            *(_DWORD *)(result + 5820) = v55 + v54;
            v61 = *(_DWORD *)(result + 5820);
            if ( v61 <= 9 )
            {
              *(_WORD *)(result + 5816) |= ((_WORD)v67 - 10) << v61;
              v53 = v61 + 7;
            }
            else
            {
              v62 = (((_WORD)v67 - 10) << v61) | *(_WORD *)(result + 5816);
              *(_WORD *)(result + 5816) = v62;
              v63 = *(_DWORD *)(result + 20);
              *(_DWORD *)(result + 20) = v63 + 1;
              *(_BYTE *)(*(_DWORD *)(result + 8) + v63) = v62;
              v64 = *(_DWORD *)(result + 20);
              v65 = *(_DWORD *)(result + 8);
              *(_DWORD *)(result + 20) = v64 + 1;
              *(_BYTE *)(v65 + v64) = HIBYTE(*(_WORD *)(result + 5816));
              v66 = *(_DWORD *)(result + 5820);
              *(_WORD *)(result + 5816) = (int)(unsigned __int16)(v67 - 10) >> (16 - v66);
              v53 = v66 - 9;
            }
          }
          else
          {
            v40 = *(unsigned __int16 *)(result + 2754);
            v41 = *(_DWORD *)(result + 5820);
            if ( v41 <= 16 - v40 )
            {
              *(_WORD *)(result + 5816) |= *(_WORD *)(result + 2752) << v41;
            }
            else
            {
              v42 = *(unsigned __int16 *)(result + 2752);
              v40 -= 16;
              v43 = ((_WORD)v42 << v41) | *(_WORD *)(result + 5816);
              *(_WORD *)(result + 5816) = v43;
              v44 = *(_DWORD *)(result + 20);
              *(_DWORD *)(result + 20) = v44 + 1;
              *(_BYTE *)(*(_DWORD *)(result + 8) + v44) = v43;
              v45 = *(_DWORD *)(result + 20);
              v46 = *(_DWORD *)(result + 8);
              *(_DWORD *)(result + 20) = v45 + 1;
              *(_BYTE *)(v46 + v45) = HIBYTE(*(_WORD *)(result + 5816));
              v41 = *(_DWORD *)(result + 5820);
              *(_WORD *)(result + 5816) = v42 >> (16 - v41);
            }
            *(_DWORD *)(result + 5820) = v41 + v40;
            v47 = *(_DWORD *)(result + 5820);
            if ( v47 <= 13 )
            {
              *(_WORD *)(result + 5816) |= ((_WORD)v67 - 2) << v47;
              v53 = v47 + 3;
            }
            else
            {
              v48 = (((_WORD)v67 - 2) << v47) | *(_WORD *)(result + 5816);
              *(_WORD *)(result + 5816) = v48;
              v49 = *(_DWORD *)(result + 20);
              *(_DWORD *)(result + 20) = v49 + 1;
              *(_BYTE *)(*(_DWORD *)(result + 8) + v49) = v48;
              v50 = *(_DWORD *)(result + 20);
              v51 = *(_DWORD *)(result + 8);
              *(_DWORD *)(result + 20) = v50 + 1;
              *(_BYTE *)(v51 + v50) = HIBYTE(*(_WORD *)(result + 5816));
              v52 = *(_DWORD *)(result + 5820);
              *(_WORD *)(result + 5816) = (int)(unsigned __int16)(v67 - 2) >> (16 - v52);
              v53 = v52 - 13;
            }
          }
          *(_DWORD *)(result + 5820) = v53;
        }
      }
      else
      {
        v68 = 4 * v69;
        do
        {
          v7 = *(unsigned __int16 *)(result + v68 + 2686);
          v8 = *(_DWORD *)(result + 5820);
          v9 = *(unsigned __int16 *)(result + v68 + 2684);
          if ( v8 <= 16 - v7 )
          {
            *(_WORD *)(result + 5816) |= v9 << v8;
            *(_DWORD *)(result + 5820) = v8 + v7;
          }
          else
          {
            v10 = *(_WORD *)(result + 5816) | ((_WORD)v9 << v8);
            *(_WORD *)(result + 5816) = v10;
            v11 = *(_DWORD *)(result + 20);
            *(_DWORD *)(result + 20) = v11 + 1;
            *(_BYTE *)(*(_DWORD *)(result + 8) + v11) = v10;
            v12 = *(_DWORD *)(result + 20);
            v13 = *(_DWORD *)(result + 8);
            *(_DWORD *)(result + 20) = v12 + 1;
            *(_BYTE *)(v13 + v12) = HIBYTE(*(_WORD *)(result + 5816));
            v14 = *(_DWORD *)(result + 5820);
            *(_WORD *)(result + 5816) = v9 >> (16 - v14);
            *(_DWORD *)(result + 5820) = v14 + v7 - 16;
          }
          --v6;
        }
        while ( v6 != 0 );
      }
      if ( v70 != 0 )
      {
        if ( v69 == v70 )
        {
          v3 = 3;
          v4 = 6;
        }
        else
        {
          v3 = 4;
          v4 = 7;
        }
        v6 = 0;
      }
      else
      {
        v3 = 3;
        v4 = 138;
        v6 = 0;
      }
    }
    ++v71;
    v67 = v6;
    v5 = v69;
    v69 = v70;
  }
  return result;
}


//======================================================================
// sub_1E20D0
// address: 0x001E20D0   size: 0x2D4 (724 bytes)
//======================================================================
int __fastcall sub_1E20D0(int result, int a2, int a3)
{
  int v3; // r5
  int v4; // r2
  int v5; // r6
  __int16 v6; // r1
  int v7; // r7
  int v8; // r2
  int v9; // r7
  int v10; // r1
  unsigned int i; // r1
  int v12; // r4
  int v13; // r1
  unsigned __int16 *v14; // r4
  int v15; // r5
  int v16; // r1
  int v17; // r4
  __int16 v18; // r1
  int v19; // r6
  int v20; // r1
  int v21; // r7
  unsigned __int16 *v22; // r6
  int v23; // r5
  int v24; // r1
  int v25; // r6
  __int16 v26; // r1
  int v27; // r7
  int v28; // r1
  int v29; // r4
  int v30; // r4
  int v31; // r5
  int v32; // r1
  int v33; // r5
  int v34; // r4
  __int16 v35; // r5
  int v36; // r6
  int v37; // r5
  int v38; // r7
  int v39; // r4
  unsigned __int16 *v40; // r6
  int v41; // r5
  int v42; // r1
  int v43; // r6
  __int16 v44; // r1
  int v45; // r7
  int v46; // r1
  int v47; // r4
  int v48; // r4
  int v49; // r5
  int v50; // r1
  int v51; // r4
  int v52; // r5
  __int16 v53; // r4
  int v54; // r6
  int v55; // r4
  int v56; // r7
  __int16 v57; // [sp+0h] [bp-2Ch]
  int v58; // [sp+4h] [bp-28h]
  int v59; // [sp+14h] [bp-18h]
  int v60; // [sp+14h] [bp-18h]
  unsigned int v61; // [sp+14h] [bp-18h]
  int v62; // [sp+18h] [bp-14h]
  unsigned int v64; // [sp+20h] [bp-Ch]

  if ( *(_DWORD *)(result + 5792) != 0 )
  {
    for ( i = 0; ; i = v64 )
    {
      v64 = i + 1;
      v12 = 2 * i;
      v13 = *(unsigned __int8 *)(*(_DWORD *)(result + 5784) + i);
      v57 = v13;
      v60 = *(unsigned __int16 *)(v12 + *(_DWORD *)(result + 5796));
      if ( *(_WORD *)(v12 + *(_DWORD *)(result + 5796)) != 0 )
      {
        v22 = (unsigned __int16 *)(a2 + 4 * (length_code[v13] + 257));
        v23 = v22[1];
        v62 = length_code[v13];
        v24 = *(_DWORD *)(result + 5820);
        v25 = *v22;
        if ( v24 <= 16 - v23 )
        {
          v31 = v24 + v23;
          *(_WORD *)(result + 5816) |= (_WORD)v25 << v24;
        }
        else
        {
          v26 = ((_WORD)v25 << v24) | *(_WORD *)(result + 5816);
          *(_WORD *)(result + 5816) = v26;
          v27 = *(_DWORD *)(result + 20);
          *(_DWORD *)(result + 20) = v27 + 1;
          *(_BYTE *)(*(_DWORD *)(result + 8) + v27) = v26;
          v28 = *(_DWORD *)(result + 20);
          v29 = *(_DWORD *)(result + 8);
          *(_DWORD *)(result + 20) = v28 + 1;
          *(_BYTE *)(v29 + v28) = HIBYTE(*(_WORD *)(result + 5816));
          v30 = *(_DWORD *)(result + 5820);
          *(_WORD *)(result + 5816) = v25 >> (16 - v30);
          v31 = v30 + v23 - 16;
        }
        *(_DWORD *)(result + 5820) = v31;
        v32 = *((_DWORD *)&unk_4329E4 + v62);
        if ( v32 != 0 )
        {
          v33 = *(_DWORD *)(result + 5820);
          v34 = (unsigned __int16)(v57 - *((_WORD *)&unk_4329E4 + 2 * v62 + 58));
          if ( v33 <= 16 - v32 )
          {
            *(_WORD *)(result + 5816) |= (_WORD)v34 << v33;
          }
          else
          {
            v32 -= 16;
            v35 = ((_WORD)v34 << v33) | *(_WORD *)(result + 5816);
            *(_WORD *)(result + 5816) = v35;
            v36 = *(_DWORD *)(result + 20);
            *(_DWORD *)(result + 20) = v36 + 1;
            *(_BYTE *)(*(_DWORD *)(result + 8) + v36) = v35;
            v37 = *(_DWORD *)(result + 20);
            v38 = *(_DWORD *)(result + 8);
            *(_DWORD *)(result + 20) = v37 + 1;
            *(_BYTE *)(v38 + v37) = HIBYTE(*(_WORD *)(result + 5816));
            v33 = *(_DWORD *)(result + 5820);
            *(_WORD *)(result + 5816) = v34 >> (16 - v33);
          }
          *(_DWORD *)(result + 5820) = v33 + v32;
        }
        v61 = v60 - 1;
        if ( v61 > 0xFF )
          v39 = (unsigned __int8)dist_code[(v61 >> 7) + 256];
        else
          v39 = (unsigned __int8)dist_code[v61];
        v58 = 4 * v39;
        v40 = (unsigned __int16 *)(a3 + 4 * v39);
        v41 = v40[1];
        v42 = *(_DWORD *)(result + 5820);
        v43 = *v40;
        if ( v42 <= 16 - v41 )
        {
          v49 = v42 + v41;
          *(_WORD *)(result + 5816) |= (_WORD)v43 << v42;
        }
        else
        {
          v44 = ((_WORD)v43 << v42) | *(_WORD *)(result + 5816);
          *(_WORD *)(result + 5816) = v44;
          v45 = *(_DWORD *)(result + 20);
          *(_DWORD *)(result + 20) = v45 + 1;
          *(_BYTE *)(*(_DWORD *)(result + 8) + v45) = v44;
          v46 = *(_DWORD *)(result + 20);
          v47 = *(_DWORD *)(result + 8);
          *(_DWORD *)(result + 20) = v46 + 1;
          *(_BYTE *)(v47 + v46) = HIBYTE(*(_WORD *)(result + 5816));
          v48 = *(_DWORD *)(result + 5820);
          *(_WORD *)(result + 5816) = v43 >> (16 - v48);
          v49 = v48 + v41 - 16;
        }
        *(_DWORD *)(result + 5820) = v49;
        v50 = *(_DWORD *)((char *)&unk_432A64 + v58 + 104);
        if ( v50 != 0 )
        {
          v51 = *(_DWORD *)(result + 5820);
          v52 = (unsigned __int16)(v61 - *(_WORD *)((char *)&unk_432AE4 + v58 + 96));
          if ( v51 <= 16 - v50 )
          {
            *(_WORD *)(result + 5816) |= (_WORD)v52 << v51;
          }
          else
          {
            v50 -= 16;
            v53 = ((_WORD)v52 << v51) | *(_WORD *)(result + 5816);
            *(_WORD *)(result + 5816) = v53;
            v54 = *(_DWORD *)(result + 20);
            *(_DWORD *)(result + 20) = v54 + 1;
            *(_BYTE *)(*(_DWORD *)(result + 8) + v54) = v53;
            v55 = *(_DWORD *)(result + 20);
            v56 = *(_DWORD *)(result + 8);
            *(_DWORD *)(result + 20) = v55 + 1;
            *(_BYTE *)(v56 + v55) = HIBYTE(*(_WORD *)(result + 5816));
            v51 = *(_DWORD *)(result + 5820);
            *(_WORD *)(result + 5816) = v52 >> (16 - v51);
          }
          *(_DWORD *)(result + 5820) = v51 + v50;
        }
      }
      else
      {
        v14 = (unsigned __int16 *)(a2 + 4 * v13);
        v15 = v14[1];
        v16 = *(_DWORD *)(result + 5820);
        v17 = *v14;
        if ( v16 <= 16 - v15 )
        {
          *(_WORD *)(result + 5816) |= (_WORD)v17 << v16;
        }
        else
        {
          v15 -= 16;
          v18 = ((_WORD)v17 << v16) | *(_WORD *)(result + 5816);
          *(_WORD *)(result + 5816) = v18;
          v19 = *(_DWORD *)(result + 20);
          *(_DWORD *)(result + 20) = v19 + 1;
          *(_BYTE *)(*(_DWORD *)(result + 8) + v19) = v18;
          v20 = *(_DWORD *)(result + 20);
          v21 = *(_DWORD *)(result + 8);
          *(_DWORD *)(result + 20) = v20 + 1;
          *(_BYTE *)(v21 + v20) = HIBYTE(*(_WORD *)(result + 5816));
          v16 = *(_DWORD *)(result + 5820);
          *(_WORD *)(result + 5816) = v17 >> (16 - v16);
        }
        *(_DWORD *)(result + 5820) = v16 + v15;
      }
      if ( v64 >= *(_DWORD *)(result + 5792) )
        break;
    }
  }
  v3 = *(unsigned __int16 *)(a2 + 1026);
  v4 = *(_DWORD *)(result + 5820);
  v5 = *(unsigned __int16 *)(a2 + 1024);
  if ( v4 > 16 - v3 )
  {
    v6 = *(_WORD *)(result + 5816) | ((_WORD)v5 << v4);
    *(_WORD *)(result + 5816) = v6;
    v7 = *(_DWORD *)(result + 8);
    v59 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v59 + 1;
    *(_BYTE *)(v7 + v59) = v6;
    v8 = *(_DWORD *)(result + 20);
    v9 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v8 + 1;
    *(_BYTE *)(v9 + v8) = HIBYTE(*(_WORD *)(result + 5816));
    v10 = *(_DWORD *)(result + 5820);
    *(_WORD *)(result + 5816) = v5 >> (16 - v10);
    *(_DWORD *)(result + 5820) = v10 + v3 - 16;
  }
  else
  {
    *(_WORD *)(result + 5816) |= (_WORD)v5 << v4;
    *(_DWORD *)(result + 5820) = v4 + v3;
  }
  return result;
}


//======================================================================
// sub_1E23C8
// address: 0x001E23C8   size: 0x38C (908 bytes)
//======================================================================
unsigned __int16 *__fastcall sub_1E23C8(_DWORD *a1, int *a2)
{
  int *v2; // r3
  int v5; // r12
  int v6; // r7
  int v7; // r3
  _WORD *v8; // r2
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r3
  int i; // r6
  char v14; // r3
  int v15; // r3
  int v16; // r6
  int v17; // r3
  int v18; // r2
  unsigned int v19; // r0
  unsigned int v20; // r3
  int v21; // r3
  int v22; // r0
  int *v23; // r3
  int v24; // r1
  int v25; // r2
  int v26; // r6
  int v27; // r5
  int v28; // r7
  int v29; // r3
  int v30; // r1
  char *v31; // r5
  int v32; // r2
  int j; // r12
  int v34; // r0
  int v35; // r1
  int v36; // r7
  int v37; // r0
  int v38; // r3
  unsigned __int16 v39; // r2
  _DWORD *v40; // r4
  unsigned __int16 *result; // r0
  int k; // r1
  int v43; // r2
  int v44; // r1
  unsigned __int16 *v45; // r1
  int v46; // r5
  unsigned __int16 *v47; // r1
  _WORD *v48; // r2
  int m; // r1
  int v50; // r3
  unsigned int v51; // r5
  unsigned int v52; // r4
  int v53; // r4
  unsigned __int16 *v54; // [sp+0h] [bp-5Ch]
  int v55; // [sp+8h] [bp-54h]
  int v56; // [sp+18h] [bp-44h]
  int v57; // [sp+1Ch] [bp-40h]
  int v58; // [sp+20h] [bp-3Ch]
  int v59; // [sp+28h] [bp-34h]
  _WORD *v60; // [sp+2Ch] [bp-30h]
  int v61; // [sp+2Ch] [bp-30h]
  int v62; // [sp+30h] [bp-2Ch]
  unsigned __int16 v63[18]; // [sp+38h] [bp-24h] BYREF

  v2 = (int *)a2[2];
  v5 = *v2;
  v6 = v2[3];
  v7 = 0;
  v57 = *a2;
  a1[1300] = 0;
  a1[1301] = 573;
  v8 = (_WORD *)v57;
  v58 = -1;
  while ( v7 < v6 )
  {
    if ( *v8 != 0 )
    {
      v58 = v7;
      v9 = a1[1300];
      a1[1300] = v9 + 1;
      a1[v9 + 728] = v7;
      *((_BYTE *)a1 + v7 + 5208) = 0;
    }
    else
    {
      v8[1] = 0;
    }
    ++v7;
    v8 += 2;
  }
  while ( 1 )
  {
    v10 = a1[1300];
    if ( v10 > 1 )
      break;
    v11 = v10 + 1;
    v12 = 0;
    a1[1300] = v11;
    if ( v58 <= 1 )
      v12 = ++v58;
    a1[v11 + 727] = v12;
    *(_WORD *)(v57 + 4 * v12) = 1;
    *((_BYTE *)a1 + v12 + 5208) = 0;
    --a1[1450];
    if ( v5 != 0 )
      a1[1451] -= *(unsigned __int16 *)(4 * v12 + v5 + 2);
  }
  a2[1] = v58;
  for ( i = a1[1300] / 2; i > 0; --i )
    sub_1E1BA8((int)a1, v57, i);
  while ( 1 )
  {
    v15 = a1[1300];
    v16 = a1[728];
    a1[1300] = v15 - 1;
    a1[728] = a1[v15 + 727];
    sub_1E1BA8((int)a1, v57, 1);
    v17 = a1[728];
    v18 = a1[1301];
    a1[v18 + 726] = v16;
    a1[1301] = v18 - 2;
    a1[v18 + 725] = v17;
    v60 = (_WORD *)(v57 + 4 * v17);
    *(_WORD *)(v57 + 4 * v6) = *v60 + *(_WORD *)(v57 + 4 * v16);
    v19 = *((unsigned __int8 *)a1 + v16 + 5208);
    v20 = *((unsigned __int8 *)a1 + v17 + 5208);
    v14 = v19 < v20 ? v20 + 1 : v19 + 1;
    *((_BYTE *)a1 + v6 + 5208) = v14;
    v60[1] = v6;
    *(_WORD *)(v57 + 4 * v16 + 2) = v6;
    a1[728] = v6;
    sub_1E1BA8((int)a1, v57, 1);
    if ( (int)a1[1300] <= 1 )
      break;
    ++v6;
  }
  v21 = a1[1301];
  a1[1301] = v21 - 1;
  v22 = a1[728];
  a1[v21 + 726] = v22;
  v23 = (int *)a2[2];
  v24 = *a2;
  v25 = a2[1];
  v26 = v23[1];
  v27 = *v23;
  v28 = v23[2];
  v29 = v23[4];
  v56 = v24;
  v30 = 0;
  v61 = v25;
  v59 = v27;
  v62 = v28;
  do
  {
    v31 = (char *)a1 + v30;
    v30 += 2;
    *((_WORD *)v31 + 1438) = 0;
    v32 = 0;
  }
  while ( v30 != 32 );
  *(_WORD *)(v56 + 4 * v22 + 2) = 0;
  for ( j = a1[1301] + 1; j <= 572; ++j )
  {
    v34 = a1[j + 727];
    v55 = 4 * v34;
    v54 = (unsigned __int16 *)(v56 + 4 * v34);
    v35 = *(unsigned __int16 *)(v56 + 4 * v54[1] + 2) + 1;
    if ( v35 > v29 )
    {
      ++v32;
      v35 = v29;
    }
    v54[1] = v35;
    if ( v34 <= v61 )
    {
      ++*((_WORD *)a1 + v35 + 1438);
      v36 = 0;
      if ( v34 >= v62 )
        v36 = *(_DWORD *)(4 * (v34 - v62) + v26);
      v37 = *v54;
      a1[1450] += (v35 + v36) * v37;
      if ( v59 != 0 )
        a1[1451] += (*(unsigned __int16 *)(v59 + v55 + 2) + v36) * v37;
    }
  }
  if ( v32 != 0 )
  {
    do
    {
      for ( k = v29 - 1; *((_WORD *)a1 + k + 1438) == 0; --k )
        ;
      v32 -= 2;
      --*((_WORD *)a1 + k + 1438);
      *((_WORD *)a1 + k + 1439) += 2;
      --*((_WORD *)a1 + v29 + 1438);
    }
    while ( v32 > 0 );
    while ( v29 != 0 )
    {
      v43 = *((unsigned __int16 *)a1 + v29 + 1438);
      while ( v43 != 0 )
      {
        v44 = a1[--j + 727];
        if ( v44 <= v61 )
        {
          v45 = (unsigned __int16 *)(v56 + 4 * v44);
          v46 = v45[1];
          if ( v46 != v29 )
          {
            a1[1450] += (v29 - v46) * *v45;
            v45[1] = v29;
          }
          --v43;
        }
      }
      --v29;
    }
  }
  v38 = 0;
  v39 = 0;
  v40 = a1 + 719;
  result = v63;
  do
  {
    v47 = &v63[v38];
    v39 = 2 * (v39 + *(_WORD *)((char *)v40 + v38 * 2));
    ++v38;
    v47[1] = v39;
  }
  while ( v38 != 15 );
  v48 = (_WORD *)v57;
  for ( m = 0; m <= v58; ++m )
  {
    v50 = (unsigned __int16)v48[1];
    if ( v48[1] != 0 )
    {
      v51 = v63[v50];
      v63[v50] = v51 + 1;
      v52 = 0;
      do
      {
        v53 = v52 | v51 & 1;
        --v50;
        v51 >>= 1;
        v52 = 2 * v53;
      }
      while ( v50 != 0 );
      *v48 = v52 >> 1;
    }
    v48 += 2;
  }
  return result;
}


//======================================================================
// sub_1E2754
// address: 0x001E2754   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_1E2754(int result)
{
  int v1; // r2
  int v2; // r2
  int v3; // r5
  int v4; // r2
  int v5; // r4

  v1 = *(_DWORD *)(result + 5820);
  if ( v1 > 8 )
  {
    v2 = *(_DWORD *)(result + 20);
    v3 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v2 + 1;
    *(_BYTE *)(v3 + v2) = *(_WORD *)(result + 5816);
    v4 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v4 + 1;
    v5 = HIBYTE(*(unsigned __int16 *)(result + 5816));
LABEL_5:
    *(_BYTE *)(*(_DWORD *)(result + 8) + v4) = v5;
    goto LABEL_6;
  }
  if ( v1 > 0 )
  {
    v4 = *(_DWORD *)(result + 20);
    *(_DWORD *)(result + 20) = v4 + 1;
    LOWORD(v5) = *(_WORD *)(result + 5816);
    goto LABEL_5;
  }
LABEL_6:
  *(_WORD *)(result + 5816) = 0;
  *(_DWORD *)(result + 5820) = 0;
  return result;
}


//======================================================================
// sub_1E279C
// address: 0x001E279C   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_1E279C(int result)
{
  int v1; // r2
  int v2; // r1
  int v3; // r5
  int v4; // r1
  int v5; // r5
  int v6; // r1
  int v7; // r5

  v1 = *(_DWORD *)(result + 5820);
  if ( v1 == 16 )
  {
    v2 = *(_DWORD *)(result + 20);
    v3 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v2 + 1;
    *(_BYTE *)(v3 + v2) = *(_WORD *)(result + 5816);
    v4 = *(_DWORD *)(result + 20);
    v5 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v4 + 1;
    *(_BYTE *)(v5 + v4) = HIBYTE(*(_WORD *)(result + 5816));
    *(_WORD *)(result + 5816) = 0;
    *(_DWORD *)(result + 5820) = 0;
  }
  else if ( v1 > 7 )
  {
    v6 = *(_DWORD *)(result + 20);
    v7 = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 20) = v6 + 1;
    *(_BYTE *)(v7 + v6) = *(_WORD *)(result + 5816);
    *(_WORD *)(result + 5816) >>= 8;
    *(_DWORD *)(result + 5820) -= 8;
  }
  return result;
}


//======================================================================
// sub_1E2EF6
// address: 0x001E2EF6   size: 0x8 (8 bytes)
//======================================================================
unsigned int __fastcall sub_1E2EF6(int a1, int a2)
{
  return (unsigned int)(*(unsigned __int16 *)(a2 + 12) << 25) >> 31;
}


//======================================================================
// sub_1E2EFE
// address: 0x001E2EFE   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1E2EFE(int a1, FILE *stream)
{
  return j_fclose(stream);
}


//======================================================================
// sub_1E2F08
// address: 0x001E2F08   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_1E2F08(int a1, FILE *stream, int off, int whence)
{
  int v4; // r0

  if ( whence == 1 || whence == 2 || (v4 = 1, whence == 0) )
    v4 = j_fseek(stream, off, whence) != 0;
  return -v4;
}


//======================================================================
// sub_1E2F2A
// address: 0x001E2F2A   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1E2F2A(int a1, FILE *stream)
{
  return j_ftell(stream);
}


//======================================================================
// sub_1E2F34
// address: 0x001E2F34   size: 0x12 (18 bytes)
//======================================================================
size_t __fastcall sub_1E2F34(int a1, FILE *s, void *ptr, size_t n)
{
  return j_fwrite(ptr, 1u, n, s);
}


//======================================================================
// sub_1E2F46
// address: 0x001E2F46   size: 0x12 (18 bytes)
//======================================================================
size_t __fastcall sub_1E2F46(int a1, FILE *stream, void *ptr, size_t n)
{
  return j_fread(ptr, 1u, n, stream);
}


//======================================================================
// sub_1E2F58
// address: 0x001E2F58   size: 0x34 (52 bytes)
//======================================================================
const char *__fastcall sub_1E2F58(int a1, char *filename, char a3)
{
  const char *result; // r0
  const char *v4; // r1

  result = filename;
  if ( (a3 & 3) == 1 )
  {
    v4 = "rb";
  }
  else if ( (a3 & 4) != 0 )
  {
    v4 = "r+b";
  }
  else
  {
    if ( (a3 & 8) == 0 )
      return nullptr;
    v4 = "wb";
  }
  if ( result != nullptr )
    return (const char *)j_fopen(result, v4);
  return result;
}


//======================================================================
// sub_1E2F98
// address: 0x001E2F98   size: 0x34 (52 bytes)
//======================================================================
const char *__fastcall sub_1E2F98(int a1, char *filename, char a3)
{
  const char *result; // r0
  const char *v4; // r1

  result = filename;
  if ( (a3 & 3) == 1 )
  {
    v4 = "rb";
  }
  else if ( (a3 & 4) != 0 )
  {
    v4 = "r+b";
  }
  else
  {
    if ( (a3 & 8) == 0 )
      return nullptr;
    v4 = "wb";
  }
  if ( result != nullptr )
    return (const char *)j_fopen(result, v4);
  return result;
}


//======================================================================
// sub_1E2FD8
// address: 0x001E2FD8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_1E2FD8(int a1, FILE *stream, __off_t off, int a4, int whence)
{
  int v5; // r0

  if ( whence == 1 || whence == 2 || (v5 = 1, whence == 0) )
    v5 = j_fseeko(stream, off, whence) != 0;
  return -v5;
}


//======================================================================
// sub_1E2FFC
// address: 0x001E2FFC   size: 0xC (12 bytes)
//======================================================================
__int64 __fastcall sub_1E2FFC(int a1, FILE *stream)
{
  return j_ftello(stream);
}


//======================================================================
// sub_1E312C
// address: 0x001E312C   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_1E312C(int a1, int a2, _DWORD *a3)
{
  _BYTE v7[5]; // [sp+Fh] [bp-5h] BYREF

  if ( (*(int (__fastcall **)(_DWORD, int, _BYTE *, int))(a1 + 4))(*(_DWORD *)(a1 + 28), a2, v7, 1) != 1 )
    return -((*(int (__fastcall **)(_DWORD, int))(a1 + 24))(*(_DWORD *)(a1 + 28), a2) != 0);
  *a3 = v7[0];
  return 0;
}


//======================================================================
// sub_1E3166
// address: 0x001E3166   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_1E3166(int a1, int a2, int *a3)
{
  int result; // r0
  int v7; // r3
  int v8; // [sp+4h] [bp-10h]
  _DWORD v9[2]; // [sp+Ch] [bp-8h] BYREF

  v9[0] = 0;
  result = sub_1E312C(a1, a2, v9);
  v8 = v9[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v9);
  if ( result != 0 )
    v7 = 0;
  else
    v7 = (v9[0] << 8) | v8;
  *a3 = v7;
  return result;
}


//======================================================================
// sub_1E31A4
// address: 0x001E31A4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_1E31A4(int a1, int a2, int *a3)
{
  int result; // r0
  int v7; // r3
  int v8; // [sp+4h] [bp-18h]
  int v9; // [sp+8h] [bp-14h]
  int v10; // [sp+Ch] [bp-10h]
  _DWORD v11[2]; // [sp+14h] [bp-8h] BYREF

  v11[0] = 0;
  result = sub_1E312C(a1, a2, v11);
  v8 = v11[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v11);
  v9 = v11[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v11);
  v10 = v11[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v11);
  v7 = 0;
  if ( result == 0 )
    v7 = ((v10 << 16) | (v9 << 8) | v8) + (v11[0] << 24);
  *a3 = v7;
  return result;
}


//======================================================================
// sub_1E3210
// address: 0x001E3210   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall sub_1E3210(int a1, int a2, int *a3)
{
  int result; // r0
  int v7; // r6
  int v8; // r5
  int v9; // [sp+0h] [bp-24h]
  int v10; // [sp+4h] [bp-20h]
  int v11; // [sp+8h] [bp-1Ch]
  int v12; // [sp+Ch] [bp-18h]
  int v13; // [sp+10h] [bp-14h]
  int v14; // [sp+14h] [bp-10h]
  _DWORD v15[2]; // [sp+1Ch] [bp-8h] BYREF

  v15[0] = 0;
  result = sub_1E312C(a1, a2, v15);
  v11 = v15[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v15);
  v9 = v15[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v15);
  v10 = v15[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v15);
  v7 = v15[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v15);
  v12 = v15[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v15);
  v13 = v15[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v15);
  v14 = v15[0];
  if ( result == 0 )
    result = sub_1E312C(a1, a2, v15);
  if ( result != 0 )
  {
    *a3 = 0;
    a3[1] = 0;
  }
  else
  {
    v8 = ((unsigned __int64)v7 >> 8)
       | (v11 >> 31)
       | ((unsigned __int64)v9 >> 24)
       | ((unsigned __int64)v10 >> 16)
       | v12
       | (v13 << 8)
       | (v14 << 16)
       | (v15[0] << 24);
    *a3 = (v9 << 8) | (v10 << 16) | v11 | (v7 << 24);
    a3[1] = v8;
  }
  return result;
}


//======================================================================
// sub_1E3308
// address: 0x001E3308   size: 0x3E6 (998 bytes)
//======================================================================
int __fastcall sub_1E3308(
        int a1,
        void *a2,
        _DWORD *a3,
        int a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int a8,
        unsigned int a9)
{
  __int64 v10; // r2
  int v11; // r3
  int v12; // r7
  int v13; // r1
  int v14; // r1
  int v15; // r6
  int v16; // r5
  int v17; // r0
  int v18; // r5
  int v19; // r6
  int v20; // r6
  int v22; // r1
  unsigned int v23; // [sp+8h] [bp-8Ch]
  int v24; // [sp+8h] [bp-8Ch]
  unsigned int i; // [sp+Ch] [bp-88h]
  int v29; // [sp+1Ch] [bp-78h] BYREF
  int v30; // [sp+20h] [bp-74h] BYREF
  int v31; // [sp+24h] [bp-70h] BYREF
  int v32; // [sp+28h] [bp-6Ch] BYREF
  int v33; // [sp+2Ch] [bp-68h] BYREF
  int v34; // [sp+30h] [bp-64h] BYREF
  int v35; // [sp+34h] [bp-60h]
  int v36[23]; // [sp+38h] [bp-5Ch] BYREF

  if ( a1 == 0 )
    return -102;
  v10 = *(_QWORD *)(a1 + 72) + *(_QWORD *)(a1 + 88);
  if ( call_zseek64(a1, *(_DWORD *)(a1 + 48), v10, SHIDWORD(v10), 0) != 0
    || sub_1E31A4(a1, *(_DWORD *)(a1 + 48), &v29) != 0 )
  {
    v11 = 1;
  }
  else
  {
    v12 = 0;
    if ( v29 == 33639248 )
      goto LABEL_9;
    v11 = 103;
  }
  v12 = -v11;
LABEL_9:
  if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), v36) != 0 )
    v12 = -1;
  if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), &v36[1]) != 0 )
    v12 = -1;
  if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), &v36[2]) != 0 )
    v12 = -1;
  if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), &v36[3]) != 0 )
    v12 = -1;
  if ( sub_1E31A4(a1, *(_DWORD *)(a1 + 48), &v36[4]) != 0 )
    v12 = -1;
  v36[19] = HIWORD(v36[4]) & 0x1F;
  v36[20] = ((unsigned int)(HIWORD(v36[4]) << 23) >> 28) - 1;
  v36[21] = ((unsigned int)v36[4] >> 25) + 1980;
  v36[18] = LOWORD(v36[4]) >> 11;
  v36[17] = (unsigned int)(v36[4] << 21) >> 26;
  v36[16] = 2 * (v36[4] & 0x1F);
  if ( sub_1E31A4(a1, *(_DWORD *)(a1 + 48), &v36[5]) != 0 )
    v12 = -1;
  if ( sub_1E31A4(a1, *(_DWORD *)(a1 + 48), &v30) != 0 )
    v12 = -1;
  v13 = *(_DWORD *)(a1 + 48);
  v36[6] = v30;
  v36[7] = 0;
  if ( sub_1E31A4(a1, v13, &v30) != 0 )
    v12 = -1;
  v14 = *(_DWORD *)(a1 + 48);
  v36[8] = v30;
  v36[9] = 0;
  if ( sub_1E3166(a1, v14, &v36[10]) != 0 )
    v12 = -1;
  if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), &v36[11]) != 0 )
    v12 = -1;
  if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), &v36[12]) != 0 )
    v12 = -1;
  if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), &v36[13]) != 0 )
    v12 = -1;
  if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), &v36[14]) != 0 )
    v12 = -1;
  if ( sub_1E31A4(a1, *(_DWORD *)(a1 + 48), &v36[15]) != 0 )
    v12 = -1;
  if ( sub_1E31A4(a1, *(_DWORD *)(a1 + 48), &v30) != 0 )
    v12 = -1;
  v15 = v36[10];
  v34 = v30;
  v35 = 0;
  v16 = v36[10];
  if ( v12 != 0 )
    goto LABEL_60;
  if ( a4 != 0 )
  {
    v23 = a5;
    if ( v36[10] < a5 )
    {
      *(_BYTE *)(a4 + v36[10]) = 0;
      v23 = v15;
    }
    v17 = 0;
    if ( v15 != 0 && a5 != 0 )
      v17 = -((*(int (__fastcall **)(_DWORD, _DWORD, int, unsigned int))(a1 + 4))(
                *(_DWORD *)(a1 + 28),
                *(_DWORD *)(a1 + 48),
                a4,
                v23) != v23);
    v16 = v15 - v23;
    if ( v17 != 0 )
    {
      v12 = -1;
      goto LABEL_60;
    }
  }
  if ( a6 == 0 )
  {
LABEL_60:
    v18 = v16 + v36[11];
    goto LABEL_61;
  }
  v24 = a7;
  if ( v36[11] < a7 )
    v24 = v36[11];
  if ( v16 != 0 && call_zseek64(a1, *(_DWORD *)(a1 + 48), v16, v16 >> 31, 1) != 0 )
    v12 = -1;
  else
    v16 = 0;
  if ( v36[11] != 0
    && a7 != 0
    && (*(int (__fastcall **)(_DWORD, _DWORD, int, int))(a1 + 4))(*(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 48), a6, v24) != v24 )
  {
    v12 = -1;
  }
  v18 = v36[11] - v24 + v16;
LABEL_61:
  if ( v12 != 0 )
    return v12;
  if ( v36[11] == 0 )
    goto LABEL_102;
  v18 -= v36[11];
  if ( v18 != 0 && call_zseek64(a1, *(_DWORD *)(a1 + 48), v18, v18 >> 31, 1) != 0 )
  {
    v19 = -1;
  }
  else
  {
    v19 = 0;
    v18 = 0;
  }
  for ( i = 0; i < v36[11]; i += v32 + 4 )
  {
    if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), &v31) != 0 )
      v19 = -1;
    if ( sub_1E3166(a1, *(_DWORD *)(a1 + 48), &v32) != 0 )
      v19 = -1;
    if ( v31 == 1 )
    {
      if ( v36[8] == -1 && v36[9] == 0 && sub_1E3210(a1, *(_DWORD *)(a1 + 48), &v36[8]) != 0 )
        v19 = -1;
      if ( v36[6] == -1 && v36[7] == 0 && sub_1E3210(a1, *(_DWORD *)(a1 + 48), &v36[6]) != 0 )
        v19 = -1;
      if ( v34 == -1 && v35 == 0 && sub_1E3210(a1, *(_DWORD *)(a1 + 48), &v34) != 0 )
        v19 = -1;
      if ( v36[13] == -1 && sub_1E31A4(a1, *(_DWORD *)(a1 + 48), &v33) != 0 )
        v19 = -1;
    }
    else if ( call_zseek64(a1, *(_DWORD *)(a1 + 48), v32, 0, 1) != 0 )
    {
      v19 = -1;
    }
  }
  if ( v19 == 0 )
  {
LABEL_102:
    if ( a8 == 0 )
      goto LABEL_94;
    v20 = v36[12];
    if ( v36[12] >= a9 )
      v20 = a9;
    else
      *(_BYTE *)(a8 + v36[12]) = 0;
    if ( v18 != 0 )
      v12 = -(call_zseek64(a1, *(_DWORD *)(a1 + 48), v18, v18 >> 31, 1) != 0);
    if ( (v36[12] == 0
       || a9 == 0
       || (*(int (__fastcall **)(_DWORD, _DWORD, int, int))(a1 + 4))(
            *(_DWORD *)(a1 + 28),
            *(_DWORD *)(a1 + 48),
            a8,
            v20) == v20)
      && v12 == 0 )
    {
LABEL_94:
      if ( a2 != nullptr )
        j_memcpy(a2, v36, 0x58u);
      if ( a3 != nullptr )
      {
        v22 = v35;
        *a3 = v34;
        a3[1] = v22;
      }
      return 0;
    }
  }
  return -1;
}


//======================================================================
// sub_1E3860
// address: 0x001E3860   size: 0x58C (1420 bytes)
//======================================================================
_DWORD *__fastcall sub_1E3860(int a1, unsigned int *a2, int a3)
{
  unsigned int v5; // r0
  unsigned int *v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r7
  unsigned int v9; // r0
  unsigned int v10; // r2
  unsigned int v11; // r7
  unsigned int v12; // r0
  unsigned int v13; // r2
  unsigned int v14; // r7
  unsigned int v15; // r2
  int v16; // r7
  unsigned __int64 v17; // r0
  char *v18; // r6
  __int64 v19; // r4
  int v20; // r4
  int v21; // r3
  char *i; // r4
  int v23; // r4
  int v24; // r4
  int v25; // r4
  unsigned __int64 v26; // r0
  unsigned __int64 v27; // r6
  unsigned __int64 v28; // r4
  int v29; // r4
  int v30; // r3
  char *j; // r4
  int v32; // r4
  __int64 v33; // r2
  _DWORD *v35; // r0
  _DWORD *v36; // r7
  unsigned __int64 v37; // [sp+8h] [bp-14Ch]
  unsigned __int64 v38; // [sp+8h] [bp-14Ch]
  unsigned __int64 v39; // [sp+10h] [bp-144h]
  unsigned __int64 v40; // [sp+10h] [bp-144h]
  unsigned __int64 p; // [sp+18h] [bp-13Ch]
  char *pa; // [sp+18h] [bp-13Ch]
  unsigned int v43; // [sp+20h] [bp-134h]
  unsigned __int64 v44; // [sp+28h] [bp-12Ch]
  unsigned int v45; // [sp+38h] [bp-11Ch]
  int v46; // [sp+38h] [bp-11Ch]
  unsigned int v47; // [sp+40h] [bp-114h] BYREF
  int v48; // [sp+44h] [bp-110h] BYREF
  int v49; // [sp+48h] [bp-10Ch] BYREF
  int v50; // [sp+4Ch] [bp-108h] BYREF
  __int64 v51; // [sp+50h] [bp-104h] BYREF
  unsigned __int64 v52; // [sp+58h] [bp-FCh] BYREF
  _QWORD v53[30]; // [sp+60h] [bp-F4h] BYREF

  LODWORD(v53[5]) = 0;
  HIDWORD(v53[4]) = 0;
  if ( a2 != nullptr )
  {
    v5 = *a2;
    v7 = a2[1];
    v8 = a2[2];
    v6 = a2 + 3;
    v53[0] = __PAIR64__(v7, v5);
    LODWORD(v53[1]) = v8;
    v9 = *v6;
    v10 = v6[1];
    v11 = v6[2];
    v6 += 3;
    HIDWORD(v53[1]) = v9;
    v53[2] = __PAIR64__(v11, v10);
    v12 = *v6;
    v13 = v6[1];
    v14 = v6[2];
    v6 += 3;
    v53[3] = __PAIR64__(v13, v12);
    LODWORD(v53[4]) = v14;
    v15 = v6[1];
    HIDWORD(v53[4]) = *v6;
    LODWORD(v53[5]) = v15;
  }
  else
  {
    fill_fopen64_filefunc((const char *(__fastcall **)(int, char *, char))v53);
  }
  HIDWORD(v53[5]) = a3;
  v16 = call_zopen64((int)v53, a1, 5);
  LODWORD(v53[6]) = v16;
  if ( v16 == 0 )
    return nullptr;
  if ( call_zseek64((int)v53, v16, 0, 0, 2) != 0 )
    goto LABEL_6;
  LODWORD(v17) = call_ztell64((int)v53);
  v37 = v17;
  v45 = v17 <= 0xFFFE ? v17 : 0xFFFF;
  v18 = (char *)j_malloc(0x404u);
  if ( v18 == nullptr )
    goto LABEL_6;
  v40 = 4;
LABEL_14:
  while ( v45 > (unsigned int)v40 )
  {
    v40 += 1024LL;
    if ( v45 < v40 )
      v40 = v45;
    p = v37 - v40;
    v20 = (unsigned int)v40 > 0x404 ? 1028 : v40;
    if ( call_zseek64((int)v53, v16, p, SHIDWORD(p), 0) != 0
      || ((int (__fastcall *)(_DWORD, int, char *, int))HIDWORD(v53[0]))(HIDWORD(v53[3]), v16, v18, v20) != v20 )
    {
      break;
    }
    v21 = v20 - 3;
    for ( i = &v18[v20 - 4]; v21-- > 0; --i )
    {
      if ( *i == 80 && i[1] == 75 && i[2] == 6 && i[3] == 7 )
      {
        v19 = v21 + p;
        if ( v19 != 0 )
          goto LABEL_31;
        goto LABEL_14;
      }
    }
  }
  v19 = 0;
LABEL_31:
  j_free(v18);
  if ( v19 == 0
    || call_zseek64((int)v53, v16, v19, SHIDWORD(v19), 0) != 0
    || sub_1E31A4((int)v53, v16, (int *)&v51) != 0
    || sub_1E31A4((int)v53, v16, (int *)&v51) != 0
    || (_DWORD)v51 != 0
    || sub_1E3210((int)v53, v16, (int *)&v52) != 0
    || sub_1E31A4((int)v53, v16, (int *)&v51) != 0
    || (_DWORD)v51 != 1
    || call_zseek64((int)v53, v16, v52, SHIDWORD(v52), 0) != 0
    || sub_1E31A4((int)v53, v16, (int *)&v51) != 0
    || (_DWORD)v51 != 101075792 )
  {
LABEL_6:
    v39 = 0;
  }
  else
  {
    v39 = v52;
    if ( v52 != 0 )
    {
      LODWORD(v53[29]) = 1;
      v23 = call_zseek64((int)v53, v53[6], v52, SHIDWORD(v52), 0);
      v24 = sub_1E31A4((int)v53, v53[6], (int *)&v47) != 0 || v23 != 0;
      v25 = -v24;
      if ( sub_1E3210((int)v53, v53[6], (int *)&v52) != 0 )
        v25 = -1;
      if ( sub_1E3166((int)v53, v53[6], &v50) != 0 )
        v25 = -1;
      if ( sub_1E3166((int)v53, v53[6], &v50) != 0 )
        v25 = -1;
      if ( sub_1E31A4((int)v53, v53[6], &v48) != 0 )
        v25 = -1;
      if ( sub_1E31A4((int)v53, v53[6], &v49) != 0 )
        v25 = -1;
      if ( sub_1E3210((int)v53, v53[6], (int *)&v53[7]) != 0 )
        v25 = -1;
      if ( sub_1E3210((int)v53, v53[6], (int *)&v51) != 0 )
        v25 = -1;
      if ( v51 != v53[7] || v49 != 0 || v48 != 0 )
        v25 = -103;
      if ( sub_1E3210((int)v53, v53[6], (int *)&v53[14]) != 0 )
        v25 = -1;
      if ( sub_1E3210((int)v53, v53[6], (int *)&v53[15]) != 0 )
        v25 = -1;
      LODWORD(v53[8]) = 0;
      goto LABEL_117;
    }
  }
  v46 = v53[6];
  if ( call_zseek64((int)v53, v53[6], 0, 0, 2) == 0 )
  {
    LODWORD(v26) = call_ztell64((int)v53);
    v38 = v26;
    v43 = v26 <= 0xFFFE ? v26 : 0xFFFF;
    pa = (char *)j_malloc(0x404u);
    if ( pa != nullptr )
    {
      v27 = 4;
LABEL_77:
      while ( v43 > (unsigned int)v27 )
      {
        v27 += 1024LL;
        if ( v43 < v27 )
          v27 = v43;
        v44 = v38 - v27;
        v29 = (unsigned int)v27 > 0x404 ? 1028 : v27;
        if ( call_zseek64((int)v53, v46, v44, SHIDWORD(v44), 0) != 0
          || ((int (__fastcall *)(_DWORD, int, char *, int))HIDWORD(v53[0]))(HIDWORD(v53[3]), v46, pa, v29) != v29 )
        {
          break;
        }
        v30 = v29 - 3;
        for ( j = &pa[v29 - 4]; v30-- > 0; --j )
        {
          if ( *j == 80 && j[1] == 75 && j[2] == 5 && j[3] == 6 )
          {
            v28 = v30 + v44;
            if ( v28 != 0 )
              goto LABEL_94;
            goto LABEL_77;
          }
        }
      }
      v28 = v39;
LABEL_94:
      j_free(pa);
      v39 = v28;
    }
  }
  LODWORD(v53[29]) = 0;
  v32 = 1;
  if ( call_zseek64((int)v53, v53[6], v39, SHIDWORD(v39), 0) == 0 )
    v32 = v39 == 0;
  v25 = -v32;
  if ( sub_1E31A4((int)v53, v53[6], (int *)&v47) != 0 )
    v25 = -1;
  if ( sub_1E3166((int)v53, v53[6], &v48) != 0 )
    v25 = -1;
  if ( sub_1E3166((int)v53, v53[6], &v49) != 0 )
    v25 = -1;
  if ( sub_1E3166((int)v53, v53[6], (int *)&v47) != 0 )
    v25 = -1;
  v53[7] = v47;
  if ( sub_1E3166((int)v53, v53[6], (int *)&v47) != 0 )
    v25 = -1;
  v51 = v47;
  if ( v53[7] != v47 || v49 != 0 || v48 != 0 )
    v25 = -103;
  if ( sub_1E31A4((int)v53, v53[6], (int *)&v47) != 0 )
    v25 = -1;
  v53[14] = v47;
  if ( sub_1E31A4((int)v53, v53[6], (int *)&v47) != 0 )
    v25 = -1;
  v53[15] = v47;
  if ( sub_1E3166((int)v53, v53[6], (int *)&v53[8]) != 0 )
    v25 = -1;
LABEL_117:
  v33 = v53[14] + v53[15];
  if ( v53[14] + v53[15] > v39 || v25 != 0 )
  {
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD))HIDWORD(v53[2]))(HIDWORD(v53[3]), v53[6], v33);
    return nullptr;
  }
  v53[9] = v39 - v33;
  v53[28] = 0;
  v53[13] = v39;
  v35 = j_malloc(0xF0u);
  v36 = v35;
  if ( v35 == nullptr )
    return nullptr;
  j_memcpy(v35, v53, 0xF0u);
  unzGoToFirstFile(v36);
  return v36;
}


//======================================================================
// sub_1E48D8
// address: 0x001E48D8   size: 0x78 (120 bytes)
//======================================================================
__int64 __fastcall sub_1E48D8(int a1)
{
  int v1; // r6
  int v2; // r7
  double v3; // r4
  double v4; // r2
  double v6; // [sp+0h] [bp-Ch]

  v1 = a1;
  if ( a1 >= 0 )
  {
    if ( a1 == 0 )
    {
      v4 = 1.0;
      return *(_QWORD *)&v4;
    }
    v2 = 0;
  }
  else
  {
    if ( a1 < -307 )
    {
      v4 = 0.0;
      return *(_QWORD *)&v4;
    }
    v1 = -a1;
    v2 = 1;
  }
  v6 = 1.0;
  v3 = 10.0;
  do
  {
    if ( (v1 & 1) != 0 )
      v6 = v6 * v3;
    v1 >>= 1;
    v3 = v3 * v3;
  }
  while ( v1 != 0 );
  v4 = v6;
  if ( v2 != 0 )
    v4 = 1.0 / v6;
  return *(_QWORD *)&v4;
}


//======================================================================
// sub_1E61E4
// address: 0x001E61E4   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_1E61E4(int a1, int *a2, int a3)
{
  int v5; // r0
  int v6; // r5
  int result; // r0
  unsigned int i; // r4
  int j; // r3

  v5 = png_malloc(a1, 256);
  *a2 = v5;
  v6 = v5;
  result = png_gamma_significant(a3);
  if ( result != 0 )
  {
    for ( i = 0; i != 256; ++i )
    {
      result = png_gamma_8bit_correct(i, a3);
      *(_BYTE *)(v6 + i) = result;
    }
  }
  else
  {
    for ( j = 0; j != 256; ++j )
      *(_BYTE *)(v6 + j) = j;
  }
  return result;
}


//======================================================================
// sub_1E6228
// address: 0x001E6228   size: 0xFE (254 bytes)
//======================================================================
unsigned int __fastcall sub_1E6228(int a1, unsigned int *a2, int a3, int a4)
{
  unsigned int result; // r0
  int v7; // r6
  int i; // r7
  int v9; // r4
  double v10; // r0
  int j; // r4
  int v12; // r3
  char v13; // [sp+0h] [bp-34h]
  int v14; // [sp+4h] [bp-30h]
  int v15; // [sp+8h] [bp-2Ch]
  unsigned int v16; // [sp+Ch] [bp-28h]
  unsigned int v17; // [sp+10h] [bp-24h]
  int v20; // [sp+1Ch] [bp-18h]

  v13 = 8 - a3;
  v15 = 1 << (8 - a3);
  v16 = (1 << (16 - a3)) - 1;
  v20 = 1 << (15 - a3);
  result = png_calloc(a1, 4 * v15);
  v7 = 0;
  v17 = result;
  *a2 = result;
  while ( v7 != v15 )
  {
    v14 = png_malloc(a1, 512);
    *(_DWORD *)(v17 + 4 * v7) = v14;
    if ( png_gamma_significant(a4) )
    {
      for ( i = 0; i != 256; ++i )
      {
        v9 = 2 * i;
        v10 = j_pow((double)(unsigned int)((i << v13) + v7) / (double)v16, (double)a4 * 0.00001) * 65535.0 + 0.5;
        result = (unsigned int)j_floor(v10);
        *(_WORD *)(v14 + v9) = result;
      }
    }
    else
    {
      for ( j = 0; j != 256; ++j )
      {
        result = (j << v13) + v7;
        if ( a3 != 0 )
          result = (0xFFFF * result + v20) / v16;
        v12 = 2 * j;
        *(_WORD *)(v14 + v12) = result;
      }
    }
    ++v7;
  }
  return result;
}


//======================================================================
// sub_1E6728
// address: 0x001E6728   size: 0x8A (138 bytes)
//======================================================================
__int64 __fastcall sub_1E6728(int a1, int a2, int a3)
{
  int v3; // r3
  int i; // r0
  int v5; // r4
  unsigned __int8 v6; // r6
  char v7; // r7
  int v8; // r6
  int v9; // r7
  int v10; // r0
  int v11; // r5
  int v12; // r3
  char v13; // r4
  __int64 v15; // [sp+0h] [bp-Ch]

  LODWORD(v15) = a1;
  HIDWORD(v15) = a1;
  v3 = 0;
  for ( i = 24; i != -8; i -= 8 )
  {
    v5 = HIDWORD(v15) >> i;
    v6 = HIDWORD(v15) >> i;
    if ( (unsigned int)v6 - 65 <= 0x39 && (unsigned int)v6 - 91 > 5 )
    {
      *(_BYTE *)(a2 + v3++) = v6;
    }
    else
    {
      v7 = a0123456789abcd[(v5 & 0xF0) >> 4];
      *(_BYTE *)(a2 + v3) = 91;
      v8 = a2 + v3;
      *(_BYTE *)(v8 + 1) = v7;
      LODWORD(v15) = v3 + 3;
      v9 = v3 + 3;
      v3 += 4;
      *(_BYTE *)(v8 + 2) = a0123456789abcd[v5 & 0xF];
      *(_BYTE *)(a2 + v9) = 93;
    }
  }
  if ( a3 != 0 )
  {
    *(_BYTE *)(a2 + v3) = 58;
    *(_BYTE *)(a2 + v3 + 1) = 32;
    v10 = v3 + 2;
    v11 = v3 + 65;
    v12 = a3 - v3;
    do
    {
      v13 = *(_BYTE *)(v12 + v10 - 2);
      if ( v13 == 0 )
        break;
      ++v10;
      *(_BYTE *)(a2 + v10 - 1) = v13;
    }
    while ( v10 != v11 );
    *(_BYTE *)(a2 + v10) = 0;
  }
  else
  {
    *(_BYTE *)(a2 + v3) = 0;
  }
  return v15;
}


//======================================================================
// sub_1E6C10
// address: 0x001E6C10   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_1E6C10(int a1, int a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[0] = a2;
  v4[1] = a3;
  if ( a1 >= 0 && png_muldiv(v4, a1, 127, 5000) != 0 )
    return v4[0];
  else
    return 0;
}


//======================================================================
// sub_1E9968
// address: 0x001E9968   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_1E9968(int a1, double a2)
{
  double v4; // r4
  double v5; // r4

  v4 = a2;
  if ( a2 > 0.0 && a2 < 128.0 )
    v4 = a2 * 100000.0;
  v5 = j_floor(v4 + 0.5);
  if ( v5 > 2147483650.0 || v5 < -2147483650.0 )
    png_fixed_error(a1, (int)"gamma value");
  return (int)v5;
}


//======================================================================
// sub_1ED1FC
// address: 0x001ED1FC   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_1ED1FC(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  int result; // r0

  v2 = *(_DWORD *)(a1 + 4);
  v3 = (*(unsigned __int8 *)(a1 + 11) + 7) >> 3;
  result = a2 - v3;
  while ( v3 < v2 )
  {
    *(_BYTE *)(a2 + v3) += *(_BYTE *)(result + v3);
    ++v3;
  }
  return result;
}


//======================================================================
// sub_1ED21A
// address: 0x001ED21A   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_1ED21A(int a1, int a2, int a3)
{
  int result; // r0
  int i; // r3

  result = *(_DWORD *)(a1 + 4);
  for ( i = 0; i != result; ++i )
    *(_BYTE *)(a2 + i) += *(_BYTE *)(a3 + i);
  return result;
}


//======================================================================
// sub_1ED232
// address: 0x001ED232   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_1ED232(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r4
  int v5; // r5
  int v6; // r1
  int v7; // r2
  int result; // r0
  int v9; // r3

  v3 = 0;
  v4 = (*(unsigned __int8 *)(a1 + 11) + 7) >> 3;
  v5 = *(_DWORD *)(a1 + 4) - v4;
  while ( v3 != v4 )
  {
    *(_BYTE *)(a2 + v3) += *(_BYTE *)(a3 + v3) >> 1;
    ++v3;
  }
  v6 = a2 + v3;
  v7 = a3 + v3;
  result = 0;
  v9 = v6 - v3;
  while ( result != v5 )
  {
    *(_BYTE *)(v6 + result) += (*(unsigned __int8 *)(v7 + result) + *(unsigned __int8 *)(v9 + result)) >> 1;
    ++result;
  }
  return result;
}


//======================================================================
// sub_1ED272
// address: 0x001ED272   size: 0x5E (94 bytes)
//======================================================================
__int64 __fastcall sub_1ED272(int a1, _BYTE *a2, unsigned __int8 *a3)
{
  int v3; // r3
  _BYTE *v4; // r2
  int v5; // r4
  _BYTE *i; // r1
  int v7; // r0
  int v8; // r5
  int v9; // r7
  __int64 v11; // [sp+0h] [bp-Ch]

  LODWORD(v11) = a1;
  HIDWORD(v11) = &a2[*(_DWORD *)(a1 + 4)];
  v3 = *a3;
  v4 = a3 + 1;
  LOBYTE(v5) = *a2 + v3;
  *a2 = v5;
  for ( i = a2 + 1; (unsigned int)i < HIDWORD(v11); ++i )
  {
    v5 = (unsigned __int8)v5;
    v7 = (unsigned __int8)*v4;
    LODWORD(v11) = (v7 - v3 + ((v7 - v3) >> 31)) ^ ((v7 - v3) >> 31);
    v8 = (v5 - v3 + ((v5 - v3) >> 31)) ^ ((v5 - v3) >> 31);
    v9 = (v5 - v3 + v7 - v3 + ((v5 - v3 + v7 - v3) >> 31)) ^ ((v5 - v3 + v7 - v3) >> 31);
    if ( v8 < (int)v11 )
      LOBYTE(v5) = *v4;
    else
      v8 = (v7 - v3 + ((v7 - v3) >> 31)) ^ ((v7 - v3) >> 31);
    if ( v9 >= v8 )
      LOBYTE(v3) = v5;
    ++v4;
    LOBYTE(v5) = v3 + *i;
    *i = v5;
    v3 = v7;
  }
  return v11;
}


//======================================================================
// sub_1ED2D0
// address: 0x001ED2D0   size: 0x72 (114 bytes)
//======================================================================
unsigned int __fastcall sub_1ED2D0(int a1, _BYTE *a2, char *a3)
{
  int v3; // r3
  _BYTE *v4; // r4
  char v5; // r5
  unsigned int result; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r6
  int v10; // r4
  int v11; // r7
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch]
  unsigned int v14; // [sp+Ch] [bp-8h]

  v3 = (*(unsigned __int8 *)(a1 + 11) + 7) >> 3;
  v4 = &a2[v3];
  while ( a2 < v4 )
  {
    v5 = *a3++;
    *a2++ += v5;
  }
  v14 = (unsigned int)&v4[*(_DWORD *)(a1 + 4) - v3];
  v13 = -v3;
  while ( 1 )
  {
    result = v14;
    if ( (unsigned int)a2 >= v14 )
      break;
    v7 = (unsigned __int8)a3[v13];
    v8 = (unsigned __int8)*a3;
    v12 = (unsigned __int8)a2[v13];
    v9 = (v8 - v7 + ((v8 - v7) >> 31)) ^ ((v8 - v7) >> 31);
    v10 = (v12 - v7 + ((v12 - v7) >> 31)) ^ ((v12 - v7) >> 31);
    v11 = (v12 - v7 + v8 - v7 + ((v12 - v7 + v8 - v7) >> 31)) ^ ((v12 - v7 + v8 - v7) >> 31);
    if ( v10 >= v9 )
    {
      LOBYTE(v8) = a2[v13];
      v10 = v9;
    }
    if ( v11 >= v10 )
      LOBYTE(v7) = v8;
    ++a3;
    *a2++ += v7;
  }
  return result;
}


//======================================================================
// sub_1ED344
// address: 0x001ED344   size: 0xBA (186 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   001ED344  PUSH    {R4-R7,LR}
//   001ED346  SUB     SP, SP, #0x14
//   001ED348  STR     R2, [SP,#0x14+var_C]
//   001ED34A  MOVS    R2, R0
//   001ED34C  ADDS    R2, #0xFC
//   001ED34E  STR     R3, [SP,#0x14+var_8]
//   001ED350  MOVS    R3, #0
//   001ED352  MOVS    R5, R0
//   001ED354  STR     R1, [R2,#0x3C]
//   001ED356  STR     R3, [R2,#0x40]
//   001ED358  MOVS    R7, R3
//   001ED35A  MOVS    R4, R5
//   001ED35C  ADDS    R4, #0xFC
//   001ED35E  LDR     R3, [R4,#0x40]
//   001ED360  CMP     R3, #0
//   001ED362  BNE     loc_1ED36E
//   001ED364  LDR     R2, [SP,#0x14+var_C]
//   001ED366  CMP     R2, #0
//   001ED368  BEQ     loc_1ED36E
//   001ED36A  STR     R2, [R4,#0x40]
//   001ED36C  STR     R3, [SP,#0x14+var_C]
//   001ED36E  LDR     R3, [R4,#0x74]
//   001ED370  LDR     R2, [R4,#0x78]
//   001ED372  MOVS    R1, #0
//   001ED374  STR     R3, [R4,#0x48]
//   001ED376  MOVS    R3, #0x138
//   001ED37A  ADDS    R3, R5, R3
//   001ED37C  STR     R2, [R4,#0x4C]
//   001ED37E  MOVS    R0, R3
//   001ED380  STR     R3, [SP,#0x14+var_10]
//   001ED382  BL      inflate
//   001ED386  LDR     R2, [R4,#0x78]
//   001ED388  MOVS    R6, R0
//   001ED38A  LDR     R3, [R4,#0x4C]
//   001ED38C  CMP     R0, #1
//   001ED38E  BHI     loc_1ED3BE
//   001ED390  SUBS    R4, R2, R3
//   001ED392  CMP     R4, #0
//   001ED394  BLE     loc_1ED3B8
//   001ED396  LDR     R2, [SP,#0x14+var_8]
//   001ED398  CMP     R2, #0
//   001ED39A  BEQ     loc_1ED3B6
//   001ED39C  LDR     R3, [SP,#0x14+arg_0]
//   001ED39E  CMP     R3, R7
//   001ED3A0  BLS     loc_1ED3B6
//   001ED3A2  ADDS    R0, R2, R7; void *
//   001ED3A4  SUBS    R2, R3, R7
//   001ED3A6  CMP     R2, R4
//   001ED3A8  BLS     loc_1ED3AC
//   001ED3AA  MOVS    R2, R4; size_t
//   001ED3AC  MOVS    R3, R5
//   001ED3AE  ADDS    R3, #0xFC
//   001ED3B0  LDR     R1, [R3,#0x74]; void *
//   001ED3B2  BL      j_memcpy
//   001ED3B6  ADDS    R7, R7, R4
//   001ED3B8  CMP     R6, #0
//   001ED3BA  BEQ     loc_1ED35A
//   001ED3BC  MOVS    R6, #1
//   001ED3BE  MOVS    R4, R5
//   001ED3C0  ADDS    R4, #0xFC
//   001ED3C2  MOVS    R3, #0
//   001ED3C4  STR     R3, [R4,#0x40]
//   001ED3C6  LDR     R0, [SP,#0x14+var_10]
//   001ED3C8  BL      inflateReset
//   001ED3CC  CMP     R6, #1
//   001ED3CE  BEQ     loc_1ED3F8
//   001ED3D0  LDR     R1, [R4,#0x54]
//   001ED3D2  CMP     R1, #0
//   001ED3D4  BNE     loc_1ED3EE
//   001ED3D6  ADDS    R2, R6, #5
//   001ED3D8  BEQ     loc_1ED3E4
//   001ED3DA  ADDS    R6, #3
//   001ED3DC  BEQ     loc_1ED3EA
//   001ED3DE  LDR     R1, =(aIncompleteComp - 0x1ED3E4); "Incomplete compressed datastream"
//   001ED3E0  ADD     R1, PC; "Incomplete compressed datastream"
//   001ED3E2  B       loc_1ED3EE
//   001ED3E4  LDR     R1, =(aBufferErrorInC - 0x1ED3EA); "Buffer error in compressed datastream"
//   001ED3E6  ADD     R1, PC; "Buffer error in compressed datastream"
//   001ED3E8  B       loc_1ED3EE
//   001ED3EA  LDR     R1, =(aDataErrorInCom - 0x1ED3F0); "Data error in compressed datastream"
//   001ED3EC  ADD     R1, PC; "Data error in compressed datastream"
//   001ED3EE  MOVS    R0, R5
//   001ED3F0  BL      png_chunk_warning
//   001ED3F4  MOVS    R0, #0
//   001ED3F6  B       loc_1ED3FA
//   001ED3F8  MOVS    R0, R7
//   001ED3FA  ADD     SP, SP, #0x14
//   001ED3FC  POP     {R4-R7,PC}

//======================================================================
// sub_1ED40C
// address: 0x001ED40C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_1ED40C(unsigned __int8 *a1)
{
  int result; // r0

  result = (*a1 << 24) + (a1[1] << 16) + a1[3] + (a1[2] << 8);
  if ( result < 0 )
    return -1;
  return result;
}

