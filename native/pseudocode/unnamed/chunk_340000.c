// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_340000

//======================================================================
// sub_3400EC
// address: 0x003400EC   size: 0x4 (4 bytes)
//======================================================================
int sub_3400EC()
{
  return sub_3401AA(3);
}


//======================================================================
// sub_340104
// address: 0x00340104   size: 0x4 (4 bytes)
//======================================================================
int sub_340104()
{
  return sub_3401AA(13);
}


//======================================================================
// sub_34014E
// address: 0x0034014E   size: 0x4 (4 bytes)
//======================================================================
void __fastcall sub_34014E(int a1, int a2, int a3, void (*a4)(void))
{
  a4();
  JUMPOUT(0x34017C);
}


//======================================================================
// sub_340162
// address: 0x00340162   size: 0x4 (4 bytes)
//======================================================================
int sub_340162()
{
  return sub_3401AA(1);
}


//======================================================================
// sub_340174
// address: 0x00340174   size: 0x24 (36 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00340174  LDR     R1, [R4,#0x50]; int
//   00340176  CMP     R1, #0
//   00340178  BEQ     loc_34017C
//   0034017A  B       loc_34002E
//   0034017C  LDR     R3, [SP,#arg_68]
//   0034017E  LDR     R5, [SP,#arg_50]
//   00340180  STR     R3, [SP,#arg_64]; int
//   00340182  STR     R3, [R5]
//   00340184  MOVS    R3, #0x1D0
//   00340188  LDR     R3, [R4,R3]; int
//   0034018A  CMP     R3, #2
//   0034018C  BEQ     loc_3401A8
//   0034018E  CMP     R3, #3
//   00340190  BEQ     loc_340196
//   00340192  BL      sub_33F7DC
//   00340196  LDR     R0, [SP,#arg_68]

//======================================================================
// sub_340198
// address: 0x00340198   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_340198(
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
  *a46 = a1;
  sub_33F87A();
  return sub_3401AA(17);
}


//======================================================================
// sub_3401AA
// address: 0x003401AA   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3401AA(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_3401B4
// address: 0x003401B4   size: 0x3A (58 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003401B4  PUSH    {R4,R5,LR}
//   003401B6  MOVS    R5, R1
//   003401B8  MOVS    R1, R2
//   003401BA  MOVS    R2, R0
//   003401BC  SUB     SP, SP, #0x14
//   003401BE  ADDS    R2, #0x90
//   003401C0  LDR     R2, [R2]
//   003401C2  STR     R3, [SP,#0x14+var_10]
//   003401C4  MOVS    R3, #0xEA
//   003401C6  STR     R1, [SP,#0x14+var_14]
//   003401C8  LSLS    R3, R3, #1
//   003401CA  LDRB    R3, [R0,R3]
//   003401CC  MOVS    R4, R0
//   003401CE  NEGS    R1, R3
//   003401D0  ADCS    R3, R1
//   003401D2  STR     R3, [SP,#0x14+var_C]
//   003401D4  MOVS    R1, #0
//   003401D6  MOVS    R3, R5
//   003401D8  BL      sub_33F798
//   003401DC  CMP     R0, #0
//   003401DE  BNE     loc_3401EA
//   003401E0  MOVS    R0, R4
//   003401E2  BL      sub_33E12C
//   003401E6  NEGS    R3, R0
//   003401E8  ADCS    R0, R3
//   003401EA  ADD     SP, SP, #0x14
//   003401EC  POP     {R4,R5,PC}

//======================================================================
// sub_3401EE
// address: 0x003401EE   size: 0x3A (58 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003401EE  PUSH    {R4,R5,LR}
//   003401F0  MOVS    R5, R1
//   003401F2  MOVS    R1, R2
//   003401F4  MOVS    R2, R0
//   003401F6  SUB     SP, SP, #0x14
//   003401F8  ADDS    R2, #0x90
//   003401FA  LDR     R2, [R2]
//   003401FC  STR     R3, [SP,#0x14+var_10]
//   003401FE  MOVS    R3, #0xEA
//   00340200  STR     R1, [SP,#0x14+var_14]
//   00340202  LSLS    R3, R3, #1
//   00340204  LDRB    R3, [R0,R3]
//   00340206  MOVS    R4, R0
//   00340208  NEGS    R1, R3
//   0034020A  ADCS    R3, R1
//   0034020C  STR     R3, [SP,#0x14+var_C]
//   0034020E  MOVS    R1, #1
//   00340210  MOVS    R3, R5
//   00340212  BL      sub_33F798
//   00340216  CMP     R0, #0
//   00340218  BNE     loc_340224
//   0034021A  MOVS    R0, R4
//   0034021C  BL      sub_33E12C
//   00340220  NEGS    R3, R0
//   00340222  ADCS    R0, R3
//   00340224  ADD     SP, SP, #0x14
//   00340226  POP     {R4,R5,PC}

//======================================================================
// sub_340228
// address: 0x00340228   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_340228(int a1, int a2, int a3, int *a4)
{
  int result; // r0
  int v8; // r1
  int v9; // [sp+Ch] [bp-4h] BYREF

  v9 = a2;
  result = sub_33DC80((_DWORD *)a1, *(_DWORD *)(a1 + 144), &v9, a3, a4, *(_BYTE *)(a1 + 468) == 0);
  if ( result == 0 )
  {
    v8 = v9;
    if ( v9 != 0 )
    {
      if ( *(_DWORD *)(a1 + 460) != 0 )
      {
        *(_DWORD *)(a1 + 264) = sub_3401EE;
        return sub_3401EE(a1, v8, a3, a4);
      }
      else
      {
        *(_DWORD *)(a1 + 264) = sub_3401B4;
        return sub_3401B4(a1, v8, a3, a4);
      }
    }
  }
  return result;
}


//======================================================================
// sub_340294
// address: 0x00340294   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_340294(int a1, int a2, int a3, int *a4)
{
  _DWORD *v4; // r6
  int v7; // r0
  int (__fastcall *v8)(int, int, int, int *); // r2
  int v9; // r4
  int v10; // r0
  int v11; // r3
  int result; // r0
  int v13; // r3
  int v15; // [sp+Ch] [bp-8h] BYREF

  v4 = (_DWORD *)(a1 + 252);
  *(_DWORD *)(a1 + 272) = a2;
  v7 = *(_DWORD *)(a1 + 144);
  v8 = *(int (__fastcall **)(int, int, int, int *))(v7 + 4);
  v15 = a2;
  v9 = a2;
  v10 = v8(v7, a2, a3, &v15);
  v11 = v15;
  v4[6] = v15;
  if ( v10 == -1 )
  {
    result = 5;
    if ( *(_BYTE *)(a1 + 468) != 0 )
      return result;
    goto LABEL_10;
  }
  if ( v10 != 12 )
  {
    if ( v10 == -2 )
    {
      if ( *(_BYTE *)(a1 + 468) != 0 )
        return 6;
LABEL_10:
      *a4 = v9;
      return 0;
    }
    goto LABEL_13;
  }
  result = sub_33E302((_DWORD *)a1, 1, v9, v11);
  if ( result != 0 )
    return result;
  v13 = *(_DWORD *)(a1 + 464);
  if ( v13 != 2 )
  {
    v9 = v15;
    if ( v13 == 3 )
    {
      *a4 = v15;
      return result;
    }
LABEL_13:
    v4[3] = sub_3401EE;
    v4[11] = 1;
    return sub_3401EE(a1, v9, a3, a4);
  }
  return 35;
}


//======================================================================
// sub_340330
// address: 0x00340330   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_340330(int a1, int a2, int a3, int *a4)
{
  int v6; // r4
  int v8; // r0
  int result; // r0

  v6 = a2;
  v8 = (*(int (**)(void))(*(_DWORD *)(a1 + 144) + 4))();
  switch ( v8 )
  {
    case -1:
      if ( *(_BYTE *)(a1 + 468) != 0 )
      {
        *(_DWORD *)(a1 + 272) = v6;
        return 5;
      }
      goto LABEL_9;
    case 14:
      v6 = a2;
      if ( a2 == a3 )
      {
        result = *(unsigned __int8 *)(a1 + 468);
        if ( *(_BYTE *)(a1 + 468) == 0 )
        {
          *a4 = a2;
          return result;
        }
      }
      break;
    case -2:
      if ( *(_BYTE *)(a1 + 468) != 0 )
      {
        *(_DWORD *)(a1 + 272) = v6;
        return 6;
      }
LABEL_9:
      *a4 = v6;
      return 0;
    default:
      break;
  }
  *(_DWORD *)(a1 + 264) = sub_340294;
  return sub_340294(a1, v6, a3, a4);
}


//======================================================================
// sub_3403B4
// address: 0x003403B4   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_3403B4(_DWORD *a1, int a2, int a3, int *a4)
{
  int result; // r0

  result = sub_33E65A(a1);
  if ( result == 0 )
  {
    a1[66] = sub_340330;
    return sub_340330((int)a1, a2, a3, a4);
  }
  return result;
}


//======================================================================
// sub_3403E4
// address: 0x003403E4   size: 0xA4 (164 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003403E4  PUSH    {R4-R7,LR}
//   003403E6  MOVS    R7, R0
//   003403E8  ADDS    R7, #0xFC
//   003403EA  LDR     R5, [R7,#0x20]
//   003403EC  SUB     SP, SP, #0x2C
//   003403EE  MOVS    R4, R0
//   003403F0  STR     R1, [SP,#0x2C+var_18]
//   003403F2  STR     R2, [SP,#0x2C+var_14]
//   003403F4  STR     R3, [SP,#0x2C+var_10]
//   003403F6  MOVS    R0, #0x17
//   003403F8  CMP     R5, #0
//   003403FA  BEQ     loc_340484
//   003403FC  LDR     R6, [R5,#0xC]
//   003403FE  MOVS    R2, R4
//   00340400  ADDS    R2, #0xE0
//   00340402  LDR     R3, [R6,#4]
//   00340404  LDR     R0, [R6,#8]
//   00340406  LDR     R1, [R5,#0x10]
//   00340408  LDR     R2, [R2]
//   0034040A  ADDS    R0, R3, R0
//   0034040C  STR     R0, [SP,#0x2C+var_1C]
//   0034040E  LDR     R0, [R6,#0xC]
//   00340410  ADDS    R3, R3, R0
//   00340412  LDR     R0, [SP,#0x2C+var_1C]
//   00340414  STR     R0, [SP,#0x2C+var_2C]
//   00340416  ADD     R0, SP, #0x2C+var_8
//   00340418  STR     R0, [SP,#0x2C+var_28]
//   0034041A  MOVS    R0, #0
//   0034041C  STR     R0, [SP,#0x2C+var_24]
//   0034041E  MOVS    R0, R4
//   00340420  BL      sub_33F798
//   00340424  CMP     R0, #0
//   00340426  BNE     loc_340484
//   00340428  LDR     R3, [SP,#0x2C+var_8]
//   0034042A  LDR     R2, [SP,#0x2C+var_1C]
//   0034042C  CMP     R2, R3
//   0034042E  BEQ     loc_340442
//   00340430  MOVS    R2, #0x1D0
//   00340434  LDR     R2, [R4,R2]
//   00340436  CMP     R2, #3
//   00340438  BNE     loc_340442
//   0034043A  LDR     R2, [R6,#4]
//   0034043C  SUBS    R3, R3, R2
//   0034043E  STR     R3, [R6,#0xC]
//   00340440  B       loc_340484
//   00340442  MOVS    R3, #0
//   00340444  ADDS    R6, #1
//   00340446  STRB    R3, [R6,#0x1F]
//   00340448  LDR     R3, [R5,#8]
//   0034044A  LDR     R0, [R7,#0x24]
//   0034044C  STR     R3, [R7,#0x20]
//   0034044E  LDR     R3, =(sub_3401B4+1 - 0x340458)
//   00340450  STR     R0, [R5,#8]
//   00340452  STR     R5, [R7,#0x24]
//   00340454  ADD     R3, PC; sub_3401B4
//   00340456  STR     R3, [R7,#0xC]
//   00340458  MOVS    R3, #0x1CC
//   0034045C  LDR     R1, [R4,R3]
//   0034045E  LDR     R0, [SP,#0x2C+var_10]
//   00340460  SUBS    R3, R1, #1
//   00340462  SBCS    R1, R3
//   00340464  MOVS    R3, R4
//   00340466  ADDS    R3, #0x90
//   00340468  LDR     R2, [R3]
//   0034046A  LDR     R3, [SP,#0x2C+var_14]
//   0034046C  STR     R0, [SP,#0x2C+var_28]
//   0034046E  STR     R3, [SP,#0x2C+var_2C]
//   00340470  MOVS    R3, #0x1D4
//   00340474  LDRB    R3, [R4,R3]
//   00340476  NEGS    R0, R3
//   00340478  ADCS    R3, R0
//   0034047A  STR     R3, [SP,#0x2C+var_24]
//   0034047C  MOVS    R0, R4
//   0034047E  LDR     R3, [SP,#0x2C+var_18]
//   00340480  BL      sub_33F798
//   00340484  ADD     SP, SP, #0x2C ; ','
//   00340486  POP     {R4-R7,PC}

//======================================================================
// sub_34048C
// address: 0x0034048C   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_34048C(int a1)
{
  (**(void (***)(void))(a1 + 144))();
  return sub_3404C6();
}


//======================================================================
// sub_3404C6
// address: 0x003404C6   size: 0x13C (316 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003404C6  LDR     R6, [SP,#arg_4C]
//   003404C8  LDR     R2, [SP,#arg_74]
//   003404CA  LDR     R5, [SP,#arg_50]
//   003404CC  MOVS    R3, R4
//   003404CE  ADDS    R3, #0xFC
//   003404D0  STR     R6, [R3,#0x14]
//   003404D2  STR     R2, [R3,#0x18]
//   003404D4  CMP     R5, #0
//   003404D6  BGT     loc_34051C
//   003404D8  LDR     R6, [SP,#arg_6C]
//   003404DA  CMP     R6, #0
//   003404DC  BNE     loc_3404EE
//   003404DE  CMP     R5, #0
//   003404E0  BEQ     loc_340504; jumptable 003404F6 case 4
//   003404E2  LDR     R5, [SP,#arg_4C]
//   003404E4  LDR     R6, [SP,#arg_68]
//   003404E6  STR     R5, [R6]
//   003404E8  LDR     R5, [SP,#arg_6C]
//   003404EA  BL      sub_3413E2
//   003404EE  LDR     R0, [SP,#arg_50]
//   003404F0  ADDS    R0, #4
//   003404F2  CMP     R0, #4; switch 5 cases
//   003404F4  BHI     def_3404F6; jumptable 003404F6 default case, case 1
//   003404F6  BL      __gnu_thumb1_case_uhi; switch jump
//   003404FA  DCW 9; jump table for switch statement
//   003404FC  DCW 0xC
//   003404FE  DCW 0x765
//   00340500  DCW 0x763
//   00340502  DCW 5
//   00340504  STR     R2, [R3,#0x14]; jumptable 003404F6 case 4
//   00340506  MOVS    R5, #4
//   00340508  BL      sub_3413E2
//   0034050C  MOVS    R5, #3; jumptable 003404F6 case 0
//   0034050E  BL      sub_3413E2
//   00340512  LDR     R5, [SP,#arg_50]; jumptable 003404F6 default case, case 1
//   00340514  LDR     R6, [SP,#arg_60]
//   00340516  NEGS    R5, R5
//   00340518  STR     R5, [SP,#arg_50]
//   0034051A  STR     R6, [SP,#arg_74]
//   0034051C  LDR     R6, [SP,#arg_54]
//   0034051E  MOVS    R5, R4
//   00340520  ADDS    R5, #0xFC
//   00340522  STR     R6, [SP,#arg_0]
//   00340524  MOVS    R0, R5
//   00340526  LDR     R1, [SP,#arg_50]
//   00340528  LDR     R2, [SP,#arg_4C]
//   0034052A  LDR     R3, [SP,#arg_74]
//   0034052C  LDR     R6, [R5]
//   0034052E  BLX     R6
//   00340530  STR     R0, [SP,#arg_48]
//   00340532  ADDS    R0, #1
//   00340534  CMP     R0, #0x3A ; ':'
//   00340536  BLS     loc_34053C
//   00340538  BL      sub_341380
//   0034053C  BL      __gnu_thumb1_case_uhi; switch 59 cases
//   00340540  DCW 0x53E; jump table for switch statement
//   00340542  DCW 0x6FF
//   00340544  DCW 0x41
//   00340546  DCW 0x10B
//   00340548  DCW 0x703
//   0034054A  DCW 0x51
//   0034054C  DCW 0x3B8
//   0034054E  DCW 0x89
//   00340550  DCW 0x75
//   00340552  DCW 0xF0
//   00340554  DCW 0x476
//   00340556  DCW 0x4C1
//   00340558  DCW 0x707
//   0034055A  DCW 0x2D4
//   0034055C  DCW 0x3EA
//   0034055E  DCW 0xB6
//   00340560  DCW 0x40F
//   00340562  DCW 0x432
//   00340564  DCW 0x70D
//   00340566  DCW 0x4C4
//   00340568  DCW 0x502
//   0034056A  DCW 0x527
//   0034056C  DCW 0x4D8
//   0034056E  DCW 0x124
//   00340570  DCW 0x13A
//   00340572  DCW 0x142
//   00340574  DCW 0x14E
//   00340576  DCW 0x152
//   00340578  DCW 0x156
//   0034057A  DCW 0x15A
//   0034057C  DCW 0x15E
//   0034057E  DCW 0x162
//   00340580  DCW 0x168
//   00340582  DCW 0x168
//   00340584  DCW 0x711
//   00340586  DCW 0x116
//   00340588  DCW 0x1BB
//   0034058A  DCW 0x1BB
//   0034058C  DCW 0x233
//   0034058E  DCW 0x233
//   00340590  DCW 0x719
//   00340592  DCW 0x5F0
//   00340594  DCW 0x60D
//   00340596  DCW 0x60D
//   00340598  DCW 0x63B
//   0034059A  DCW 0x548
//   0034059C  DCW 0x3E
//   0034059E  DCW 0x694
//   003405A0  DCW 0x698
//   003405A2  DCW 0x696
//   003405A4  DCW 0x5AF
//   003405A6  DCW 0x59D
//   003405A8  DCW 0x3B
//   003405AA  DCW 0x652
//   003405AC  DCW 0x656
//   003405AE  DCW 0x654
//   003405B0  DCW 0x6EE
//   003405B2  DCW 0x6F5
//   003405B4  DCW 0x5E0
//   003405B6  MOVS    R5, #0; jumptable 0034053C case 52
//   003405B8  BL      sub_3411EE
//   003405BC  MOVS    R3, #0; jumptable 0034053C case 46
//   003405BE  BL      sub_341272
//   003405C2  MOVS    R0, R4; jumptable 0034053C case 2
//   003405C4  MOVS    R1, #0
//   003405C6  LDR     R2, [SP,#arg_4C]
//   003405C8  LDR     R3, [SP,#arg_74]
//   003405CA  BL      sub_33E302
//   003405CE  CMP     R0, #0
//   003405D0  BEQ     loc_3405D6
//   003405D2  BL      sub_3413C8
//   003405D6  MOVS    R3, R4
//   003405D8  ADDS    R3, #0x90
//   003405DA  LDR     R3, [R3]
//   003405DC  STR     R3, [SP,#arg_54]
//   003405DE  BL      sub_341392
//   003405E2  LDR     R0, [R4,#0x54]; jumptable 0034053C case 5
//   003405E4  CMP     R0, #0
//   003405E6  BEQ     loc_34061C
//   003405E8  MOVS    R1, #0x190
//   003405EC  ADDS    R0, R4, R1
//   003405EE  LDR     R2, [SP,#arg_4C]
//   003405F0  LDR     R1, [SP,#arg_54]
//   003405F2  LDR     R3, [SP,#arg_74]
//   003405F4  BL      sub_33E2CE
//   003405F8  MOVS    R2, R4
//   003405FA  ADDS    R2, #0xFC
//   003405FC  STR     R0, [R2,#0x34]
//   003405FE  CMP     R0, #0
//   00340600  BNE     loc_340608

//======================================================================
// sub_340602
// address: 0x00340602   size: 0x4B6 (1206 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00340602  MOVS    R5, #1
//   00340604  BL      sub_3413E2
//   00340608  MOVS    R3, #0x19C
//   0034060C  LDR     R1, [R4,R3]
//   0034060E  MOVS    R3, #0x1A0
//   00340612  STR     R1, [R4,R3]
//   00340614  MOVS    R3, #0
//   00340616  STR     R3, [R2,#0x3C]
//   00340618  MOVS    R6, R3
//   0034061A  B       loc_34061E
//   0034061C  MOVS    R6, #1
//   0034061E  MOVS    R3, R4
//   00340620  MOVS    R2, #0
//   00340622  ADDS    R3, #0xFC
//   00340624  STR     R2, [R3,#0x38]
//   00340626  BL      sub_34137C
//   0034062A  LDR     R6, [R4,#0x54]; jumptable 0034053C case 8
//   0034062C  CMP     R6, #0
//   0034062E  BNE     loc_340634
//   00340630  BL      sub_341380
//   00340634  MOVS    R3, #1
//   00340636  MOVS    R5, R4
//   00340638  ADDS    R5, #0xFC
//   0034063A  STR     R3, [SP,#arg_0]
//   0034063C  LDR     R0, [R4,#4]
//   0034063E  LDR     R2, [R5,#0x38]
//   00340640  LDR     R3, [R5,#0x3C]
//   00340642  LDR     R1, [R5,#0x34]
//   00340644  BLX     R6
//   00340646  MOVS    R2, #0xC8
//   00340648  MOVS    R3, #0
//   0034064A  LSLS    R2, R2, #1
//   0034064C  STR     R3, [R5,#0x34]
//   0034064E  ADDS    R0, R4, R2
//   00340650  B       loc_34099E
//   00340652  MOVS    R3, R7; jumptable 0034053C case 7
//   00340654  ADDS    R3, #0x81
//   00340656  MOVS    R2, #1
//   00340658  STRB    R2, [R3]
//   0034065A  LDR     R3, [R4,#0x54]
//   0034065C  CMP     R3, #0
//   0034065E  BEQ     loc_3406AC; jumptable 0034053C case 15
//   00340660  LDR     R5, [SP,#arg_54]
//   00340662  LDR     R0, [SP,#arg_54]
//   00340664  LDR     R1, [SP,#arg_4C]
//   00340666  LDR     R5, [R5,#0x34]
//   00340668  LDR     R2, [SP,#arg_74]
//   0034066A  LDR     R3, [SP,#arg_64]
//   0034066C  BLX     R5
//   0034066E  CMP     R0, #0
//   00340670  BNE     loc_340676
//   00340672  BL      sub_3413D0
//   00340676  LDR     R6, [SP,#arg_54]
//   00340678  LDR     R5, [SP,#arg_4C]
//   0034067A  MOVS    R1, #0xC8
//   0034067C  LDR     R3, [R6,#0x40]
//   0034067E  LDR     R6, [SP,#arg_74]
//   00340680  LSLS    R1, R1, #1
//   00340682  ADDS    R2, R5, R3
//   00340684  ADDS    R0, R4, R1
//   00340686  SUBS    R3, R6, R3
//   00340688  LDR     R1, [SP,#arg_54]
//   0034068A  BL      sub_33E2CE
//   0034068E  MOVS    R3, R4
//   00340690  ADDS    R3, #0xFC
//   00340692  STR     R0, [R3,#0x3C]
//   00340694  CMP     R0, #0
//   00340696  BEQ     sub_340602
//   00340698  BL      sub_33DDF8
//   0034069C  MOVS    R3, #0x19C
//   003406A0  LDR     R2, [R4,R3]
//   003406A2  MOVS    R3, #0x1A0
//   003406A6  STR     R2, [R4,R3]
//   003406A8  MOVS    R6, #0
//   003406AA  B       loc_3406C8
//   003406AC  LDR     R2, [SP,#arg_54]; jumptable 0034053C case 15
//   003406AE  LDR     R0, [SP,#arg_54]
//   003406B0  LDR     R1, [SP,#arg_4C]
//   003406B2  LDR     R2, [R2,#0x34]
//   003406B4  LDR     R3, [SP,#arg_64]
//   003406B6  STR     R2, [SP,#arg_40]
//   003406B8  LDR     R5, [SP,#arg_40]
//   003406BA  LDR     R2, [SP,#arg_74]
//   003406BC  BLX     R5
//   003406BE  CMP     R0, #0
//   003406C0  BNE     loc_3406C6
//   003406C2  BL      sub_3413D0
//   003406C6  MOVS    R6, #1
//   003406C8  MOVS    R3, R7
//   003406CA  ADDS    R3, #0x80
//   003406CC  LDRB    R3, [R3]
//   003406CE  CMP     R3, #0
//   003406D0  BNE     loc_3406D6
//   003406D2  BL      sub_34137C
//   003406D6  MOVS    R5, R4
//   003406D8  ADDS    R5, #0xFC
//   003406DA  LDR     R0, [R5,#0x30]
//   003406DC  CMP     R0, #0
//   003406DE  BNE     loc_3406E4
//   003406E0  BL      sub_34137C
//   003406E4  LDR     R1, [SP,#arg_54]
//   003406E6  LDR     R0, [SP,#arg_4C]
//   003406E8  LDR     R3, [R1,#0x40]
//   003406EA  LDR     R1, [SP,#arg_74]
//   003406EC  ADDS    R2, R0, R3
//   003406EE  MOVS    R0, R7
//   003406F0  SUBS    R3, R1, R3
//   003406F2  ADDS    R0, #0x50 ; 'P'
//   003406F4  LDR     R1, [SP,#arg_54]
//   003406F6  BL      sub_33E2CE
//   003406FA  STR     R0, [SP,#arg_48]
//   003406FC  CMP     R0, #0
//   003406FE  BEQ     sub_340602
//   00340700  BL      sub_33DDF8
//   00340704  LDR     R3, [R5,#0x30]
//   00340706  LDR     R5, [SP,#arg_48]
//   00340708  STR     R5, [R3,#0x18]
//   0034070A  LDR     R0, [R7,#0x5C]
//   0034070C  MOVS    R3, R4
//   0034070E  ADDS    R3, #0x88
//   00340710  STR     R0, [R7,#0x60]
//   00340712  LDR     R3, [R3]
//   00340714  CMP     R3, #0
//   00340716  BEQ     loc_34071C
//   00340718  BL      sub_341392
//   0034071C  BL      sub_34137C
//   00340720  LDR     R1, [R5,#0x34]; jumptable 0034053C case 9
//   00340722  CMP     R1, #0
//   00340724  BEQ     loc_340742
//   00340726  LDR     R2, [R5,#0x38]
//   00340728  LDR     R3, [R5,#0x3C]
//   0034072A  MOVS    R5, #0
//   0034072C  LDR     R0, [R4,#4]
//   0034072E  LDR     R6, [R4,#0x54]
//   00340730  STR     R5, [SP,#arg_0]
//   00340732  BLX     R6
//   00340734  MOVS    R1, #0x190
//   00340738  ADDS    R0, R4, R1
//   0034073A  BL      sub_33DEB2
//   0034073E  MOVS    R6, R5
//   00340740  B       loc_340744
//   00340742  MOVS    R6, #1
//   00340744  LDR     R3, [R4,#0x58]
//   00340746  CMP     R3, #0
//   00340748  BNE     loc_34074E
//   0034074A  BL      sub_34137C
//   0034074E  LDR     R0, [R4,#4]
//   00340750  BLX     R3
//   00340752  BL      sub_341392
//   00340756  LDR     R3, =(sub_3401B4+1 - 0x340760); jumptable 0034053C case 3
//   00340758  MOVS    R0, R4
//   0034075A  LDR     R1, [SP,#arg_4C]
//   0034075C  ADD     R3, PC; sub_3401B4
//   0034075E  STR     R3, [R5,#0xC]
//   00340760  LDR     R2, [SP,#arg_60]
//   00340762  LDR     R3, [SP,#arg_68]
//   00340764  BL      sub_3401B4
//   00340768  BL      sub_3413C8
//   0034076C  LDR     R3, [SP,#arg_74]; jumptable 0034053C case 35
//   0034076E  MOVS    R0, R4
//   00340770  LDR     R1, [SP,#arg_54]
//   00340772  LDR     R2, [SP,#arg_4C]
//   00340774  BL      sub_33F09E
//   00340778  MOVS    R3, R4
//   0034077A  ADDS    R3, #0xFC
//   0034077C  STR     R0, [R3,#0x4C]
//   0034077E  CMP     R0, #0
//   00340780  BEQ     loc_340786
//   00340782  BL      loc_341362; jumptable 0034053C case 34
//   00340786  B       sub_340602
//   00340788  LDR     R2, [SP,#arg_4C]; jumptable 0034053C case 23
//   0034078A  MOVS    R0, R4
//   0034078C  LDR     R1, [SP,#arg_54]
//   0034078E  LDR     R3, [SP,#arg_74]
//   00340790  BL      sub_33EC96
//   00340794  MOVS    R2, R4
//   00340796  ADDS    R2, #0xFC
//   00340798  STR     R0, [R2,#0x50]
//   0034079A  CMP     R0, #0
//   0034079C  BNE     loc_3407A0
//   0034079E  B       sub_340602
//   003407A0  MOVS    R1, #0xA8
//   003407A2  MOVS    R3, #0
//   003407A4  LSLS    R1, R1, #1
//   003407A6  STRB    R3, [R4,R1]
//   003407A8  STR     R3, [R2,#0x40]
//   003407AA  MOVS    R2, #0x151
//   003407AE  STRB    R3, [R4,R2]
//   003407B0  BL      loc_341362; jumptable 0034053C case 34
//   003407B4  MOVS    R2, #1; jumptable 0034053C case 24
//   003407B6  MOVS    R3, #0xA8
//   003407B8  LSLS    R3, R2
//   003407BA  STRB    R2, [R4,R3]
//   003407BC  LDR     R2, =(aHttpWwwW3OrgXm - 0x3407C2); "http://www.w3.org/XML/1998/namespace"
//   003407BE  ADD     R2, PC; "http://www.w3.org/XML/1998/namespace"
//   003407C0  ADDS    R2, #(aCdata_0 - 0x44A071); "CDATA"
//   003407C2  B       loc_3407D2
//   003407C4  MOVS    R3, #0x52 ; 'R'; jumptable 0034053C case 25
//   003407C6  MOVS    R2, #1
//   003407C8  ADDS    R3, #0xFF

//======================================================================
// sub_3411EE
// address: 0x003411EE   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_3411EE(
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
        int a34)
{
  int v34; // r4
  int v35; // r5
  int v36; // r7
  int v38; // r3
  int v39; // r0
  int *v40; // r0
  int v41; // r2
  int v42; // r3
  int v43; // [sp+48h] [bp+48h]
  int v44; // [sp+50h] [bp+50h]

  if ( *(_BYTE *)(v36 + 140) != 0 )
  {
    v38 = a34;
    if ( v35 != 0 )
      v38 = a34 - *(_DWORD *)(a26 + 64);
    v44 = v38;
    v39 = sub_33DF08(v34);
    if ( v39 < 0 )
      sub_340602();
    v43 = 28 * v39;
    *(_DWORD *)(*(_DWORD *)(v36 + 144) + 28 * v39) = 4;
    *(_DWORD *)(*(_DWORD *)(v36 + 144) + 28 * v39 + 4) = v35;
    v40 = sub_33F09E(v34, a26, a24, v44);
    if ( v40 == nullptr )
      sub_340602();
    v41 = *v40;
    *(_DWORD *)(*(_DWORD *)(v36 + 144) + v43 + 8) = *v40;
    v42 = 0;
    do
      ++v42;
    while ( *(_BYTE *)(v41 + v42 - 1) != 0 );
    *(_DWORD *)(v36 + 148) += v42;
    JUMPOUT(0x341372);
  }
  return sub_341380(
           a1,
           a2,
           a3,
           *(unsigned __int8 *)(v36 + 140),
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
           a30);
}


//======================================================================
// sub_341272
// address: 0x00341272   size: 0xAA (170 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00341272  MOVS    R2, R7
//   00341274  ADDS    R2, #0x8C
//   00341276  LDRB    R2, [R2]
//   00341278  CMP     R2, #0
//   0034127A  BNE     loc_34127E
//   0034127C  B       sub_341380
//   0034127E  ADDS    R5, R4, #4
//   00341280  LDR     R6, [R5,#0x7C]
//   00341282  STR     R5, [SP,#arg_50]
//   00341284  MOVS    R5, #0x1C
//   00341286  MOVS    R0, R6
//   00341288  NEGS    R6, R0
//   0034128A  ADCS    R6, R0
//   0034128C  MOVS    R2, R7
//   0034128E  ADDS    R2, #0xA0
//   00341290  LDR     R1, [R2]
//   00341292  MOVS    R0, R7
//   00341294  ADDS    R0, #0xA4
//   00341296  SUBS    R1, #1
//   00341298  STR     R1, [R2]
//   0034129A  LDR     R0, [R0]
//   0034129C  LSLS    R1, R1, #2
//   0034129E  LDR     R1, [R1,R0]
//   003412A0  MOVS    R0, R7
//   003412A2  ADDS    R0, #0x90
//   003412A4  MULS    R1, R5
//   003412A6  LDR     R0, [R0]
//   003412A8  ADDS    R1, R0, R1
//   003412AA  STR     R3, [R1,#4]
//   003412AC  LDR     R3, [R2]
//   003412AE  CMP     R3, #0
//   003412B0  BNE     sub_34137C
//   003412B2  CMP     R6, #0
//   003412B4  BNE     loc_341310
//   003412B6  MOVS    R5, R4
//   003412B8  ADDS    R5, #0xFC
//   003412BA  LDR     R3, [R5,#0x58]
//   003412BC  MOVS    R1, R3
//   003412BE  ADDS    R1, #0x9C
//   003412C0  LDR     R2, [R1]
//   003412C2  STR     R1, [SP,#arg_58]
//   003412C4  MOVS    R1, #0x14
//   003412C6  MOVS    R0, R2
//   003412C8  MULS    R0, R1
//   003412CA  ADDS    R3, #0x94
//   003412CC  LDR     R3, [R3]
//   003412CE  LDR     R2, [R4,#0xC]
//   003412D0  ADDS    R0, R0, R3
//   003412D2  BLX     R2
//   003412D4  STR     R0, [SP,#arg_48]
//   003412D6  CMP     R0, #0
//   003412D8  BNE     loc_3412DE
//   003412DA  BL      sub_340602
//   003412DE  LDR     R0, [SP,#arg_58]
//   003412E0  MOVS    R1, #0x14
//   003412E2  LDR     R2, [SP,#arg_48]
//   003412E4  LDR     R3, [R0]
//   003412E6  MOVS    R0, R4
//   003412E8  MULS    R3, R1
//   003412EA  ADDS    R3, R2, R3
//   003412EC  STR     R3, [SP,#arg_7C]
//   003412EE  ADDS    R3, R2, R1
//   003412F0  STR     R3, [SP,#arg_78]
//   003412F2  ADD     R3, SP, #arg_7C
//   003412F4  STR     R3, [SP,#arg_0]
//   003412F6  MOVS    R1, R6
//   003412F8  ADD     R3, SP, #arg_78
//   003412FA  BL      sub_33DFCC
//   003412FE  LDR     R3, [SP,#arg_4C]
//   00341300  LDR     R2, [SP,#arg_48]
//   00341302  STR     R3, [R5,#0x18]
//   00341304  LDR     R3, [R5,#0x4C]
//   00341306  LDR     R5, [SP,#arg_50]
//   00341308  LDR     R0, [R4,#4]
//   0034130A  LDR     R1, [R3]
//   0034130C  LDR     R3, [R5,#0x7C]
//   0034130E  BLX     R3
//   00341310  MOVS    R2, R7
//   00341312  MOVS    R3, #0
//   00341314  ADDS    R2, #0x8C
//   00341316  STRB    R3, [R2]
//   00341318  STR     R3, [R2,#8]
//   0034131A  B       sub_34137C

//======================================================================
// sub_34137C
// address: 0x0034137C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_34137C(
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
        int a30)
{
  int v30; // r6

  if ( v30 != 0 )
    return sub_341380(
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
             a24,
             a25,
             a26,
             a27,
             a28,
             a29,
             a30);
  else
    return sub_341392(a1);
}


//======================================================================
// sub_341380
// address: 0x00341380   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_341380(
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
        int a34)
{
  int v34; // r4

  if ( *(_DWORD *)(v34 + 80) != 0 )
    a1 = sub_33DC04(v34, a26, a24, a34);
  return sub_341392(a1);
}


//======================================================================
// sub_341392
// address: 0x00341392   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_341392(
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
        void (__fastcall **a26)(_DWORD, int, int, int *),
        int a27,
        int a28,
        int a29,
        int a30,
        int *a31,
        int a32,
        int a33,
        int a34)
{
  int v34; // r4
  int v35; // r3
  int v36; // r2

  v35 = 464;
  v36 = *(_DWORD *)(v34 + 464);
  if ( v36 != 2 )
  {
    v35 = a34;
    if ( v36 == 3 )
    {
      *a31 = a34;
    }
    else
    {
      (*a26)(a26, a34, a29, &a34);
      a1 = sub_3404C6();
    }
  }
  return sub_3413E2(a1, a2, v36, v35, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}


//======================================================================
// sub_3413C8
// address: 0x003413C8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3413C8(
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
  return sub_3413E2(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}


//======================================================================
// sub_3413CC
// address: 0x003413CC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3413CC(
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
  return sub_3413E2(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}


//======================================================================
// sub_3413D0
// address: 0x003413D0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3413D0(
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
  return sub_3413E2(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a20, a21);
}


//======================================================================
// sub_3413E2
// address: 0x003413E2   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3413E2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_3413EC
// address: 0x003413EC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_3413EC(_DWORD *a1)
{
  int result; // r0

  result = sub_33E65A(a1);
  if ( result == 0 )
  {
    a1[66] = sub_34048C;
    return sub_34048C((int)a1);
  }
  return result;
}


//======================================================================
// sub_34141C
// address: 0x0034141C   size: 0x1CA (458 bytes)
//======================================================================
int __fastcall sub_34141C(int a1, char *i)
{
  int v4; // r3
  _BYTE *v5; // r3
  unsigned int v6; // r0
  int v7; // r3
  int v8; // r3
  _DWORD *v9; // r7
  _BYTE *v10; // r3
  char **v11; // r0
  int v12; // r0
  char *v13; // r3
  _BYTE *v14; // r3
  _BYTE *v15; // r3
  _BYTE *v16; // r3
  char v17; // r2
  char *v19; // [sp+20h] [bp-Ch]
  int *v20; // [sp+24h] [bp-8h]

  v20 = *(int **)(a1 + 340);
LABEL_2:
  v19 = i;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( *i == 0 )
          return 1;
        v4 = (unsigned __int8)*v19;
        if ( v4 != 12 && *v19 != 0 )
          break;
        if ( *(_DWORD *)(a1 + 412) == *(_DWORD *)(a1 + 408) && sub_33E194((int *)(a1 + 400)) == 0 )
          return 0;
        v5 = *(_BYTE **)(a1 + 412);
        *(_DWORD *)(a1 + 412) = v5 + 1;
        *v5 = 0;
        v6 = sub_33EA04(v20, *(_BYTE **)(a1 + 416), 0);
        if ( v6 != 0 )
          *(_BYTE *)(v6 + 32) = 1;
        v7 = (unsigned __int8)*v19;
        *(_DWORD *)(a1 + 412) = *(_DWORD *)(a1 + 416);
        v19 += v7 != 0;
        i = v19;
      }
      if ( v4 == 61 )
        break;
      if ( *(_DWORD *)(a1 + 412) == *(_DWORD *)(a1 + 408) && sub_33E194((int *)(a1 + 400)) == 0 )
        return 0;
      v16 = *(_BYTE **)(a1 + 412);
      *(_DWORD *)(a1 + 412) = v16 + 1;
      v17 = *v19++;
      *v16 = v17;
    }
    v8 = *(_DWORD *)(a1 + 412);
    if ( v8 == *(_DWORD *)(a1 + 416) )
    {
      v9 = v20 + 33;
    }
    else
    {
      if ( v8 == *(_DWORD *)(a1 + 408) && sub_33E194((int *)(a1 + 400)) == 0 )
        return 0;
      v10 = *(_BYTE **)(a1 + 412);
      *(_DWORD *)(a1 + 412) = v10 + 1;
      *v10 = 0;
      v11 = (char **)sub_33EA04(v20 + 15, *(_BYTE **)(a1 + 416), 8u);
      v9 = v11;
      if ( v11 == nullptr )
        return 0;
      if ( *v11 == *(char **)(a1 + 416) )
      {
        v12 = sub_33E482(v20 + 20, *v11);
        *v9 = v12;
        if ( v12 == 0 )
          return 0;
      }
      *(_DWORD *)(a1 + 412) = *(_DWORD *)(a1 + 416);
    }
    for ( i = v19; *++i != 12 && *i != 0; *v13 = *i )
    {
      if ( *(_DWORD *)(a1 + 412) == *(_DWORD *)(a1 + 408) && sub_33E194((int *)(a1 + 400)) == 0 )
        return 0;
      v13 = *(char **)(a1 + 412);
      *(_DWORD *)(a1 + 412) = v13 + 1;
    }
    if ( *(_DWORD *)(a1 + 412) == *(_DWORD *)(a1 + 408) && sub_33E194((int *)(a1 + 400)) == 0 )
      return 0;
    v14 = *(_BYTE **)(a1 + 412);
    *(_DWORD *)(a1 + 412) = v14 + 1;
    *v14 = 0;
    v15 = *(_BYTE **)(a1 + 416);
    if ( *v15 == 0 && *v9 != 0 )
      return 0;
    if ( sub_33E680(a1, v9, 0, v15, (int *)(a1 + 356)) != 0 )
      return 0;
    v19 = i;
    *(_DWORD *)(a1 + 412) = *(_DWORD *)(a1 + 416);
    if ( *i != 0 )
    {
      ++i;
      goto LABEL_2;
    }
  }
}


//======================================================================
// sub_3418B4
// address: 0x003418B4   size: 0x1DE (478 bytes)
//======================================================================
int __fastcall sub_3418B4(char *a1, int a2, _BYTE *a3)
{
  _DWORD *v4; // r0
  int v5; // r4
  _DWORD *v6; // r0
  int v7; // r5
  int v8; // r0
  int v10; // r0
  void *v11; // r0
  _DWORD *v12; // r5
  int v13; // [sp+4h] [bp-10h]

  if ( a2 == 0 )
  {
    v6 = j_malloc(0x1D8u);
    v5 = (int)v6;
    if ( v6 != nullptr )
    {
      v6[3] = &malloc;
      v6[4] = &realloc;
      v6[5] = &free;
      goto LABEL_6;
    }
    return 0;
  }
  v4 = (_DWORD *)(*(int (__fastcall **)(int))a2)(472);
  v5 = (int)v4;
  if ( v4 == nullptr )
    return 0;
  v4[3] = *(_DWORD *)a2;
  v4[4] = *(_DWORD *)(a2 + 4);
  v4[5] = *(_DWORD *)(a2 + 8);
LABEL_6:
  *(_DWORD *)(v5 + 8) = 0;
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 364) = 16;
  v7 = (*(int (__fastcall **)(int))(v5 + 12))(256);
  *(_DWORD *)(v5 + 376) = v7;
  if ( v7 == 0 )
  {
LABEL_9:
    (*(void (__fastcall **)(int))(v5 + 20))(v5);
    return v7;
  }
  v8 = (*(int (__fastcall **)(int))(v5 + 12))(1024);
  v7 = v8;
  *(_DWORD *)(v5 + 44) = v8;
  if ( v8 == 0 )
  {
    (*(void (__fastcall **)(_DWORD))(v5 + 20))(*(_DWORD *)(v5 + 376));
    goto LABEL_9;
  }
  *(_DWORD *)(v5 + 48) = v8 + 1024;
  v13 = v5 + 12;
  v10 = (*(int (__fastcall **)(int))(v5 + 12))(168);
  v7 = v10;
  if ( v10 != 0 )
  {
    *(_DWORD *)(v10 + 80) = 0;
    *(_DWORD *)(v10 + 100) = v13;
    *(_DWORD *)(v10 + 124) = v13;
    *(_DWORD *)(v10 + 16) = v13;
    *(_DWORD *)(v10 + 36) = v13;
    *(_DWORD *)(v10 + 84) = 0;
    *(_DWORD *)(v10 + 96) = 0;
    *(_DWORD *)(v10 + 92) = 0;
    *(_DWORD *)(v10 + 88) = 0;
    *(_DWORD *)(v10 + 104) = 0;
    *(_DWORD *)(v10 + 108) = 0;
    *(_DWORD *)(v10 + 120) = 0;
    *(_DWORD *)(v10 + 116) = 0;
    *(_DWORD *)(v10 + 112) = 0;
    *(_BYTE *)(v10 + 4) = 0;
    *(_DWORD *)(v10 + 8) = 0;
    *(_DWORD *)(v10 + 12) = 0;
    *(_DWORD *)v10 = 0;
    *(_BYTE *)(v10 + 24) = 0;
    *(_DWORD *)(v10 + 28) = 0;
    *(_DWORD *)(v10 + 32) = 0;
    *(_DWORD *)(v10 + 20) = 0;
    *(_BYTE *)(v10 + 44) = 0;
    *(_DWORD *)(v10 + 48) = 0;
    *(_DWORD *)(v10 + 52) = 0;
    *(_DWORD *)(v10 + 40) = 0;
    *(_DWORD *)(v10 + 56) = v13;
    *(_BYTE *)(v10 + 64) = 0;
    *(_DWORD *)(v10 + 68) = 0;
    *(_DWORD *)(v10 + 72) = 0;
    *(_DWORD *)(v10 + 60) = 0;
    *(_DWORD *)(v10 + 76) = v13;
    *(_DWORD *)(v10 + 132) = 0;
    *(_DWORD *)(v10 + 136) = 0;
    *(_BYTE *)(v10 + 140) = 0;
    *(_DWORD *)(v10 + 164) = 0;
    *(_DWORD *)(v10 + 144) = 0;
    *(_DWORD *)(v10 + 160) = 0;
    *(_DWORD *)(v10 + 152) = 0;
    *(_DWORD *)(v10 + 156) = 0;
    *(_DWORD *)(v10 + 148) = 0;
    *(_BYTE *)(v10 + 128) = 1;
    *(_BYTE *)(v10 + 129) = 0;
    *(_BYTE *)(v10 + 130) = 0;
  }
  *(_DWORD *)(v5 + 340) = v10;
  if ( v10 == 0 )
  {
    (*(void (__fastcall **)(_DWORD))(v5 + 20))(*(_DWORD *)(v5 + 44));
    (*(void (__fastcall **)(_DWORD))(v5 + 20))(*(_DWORD *)(v5 + 376));
    goto LABEL_9;
  }
  *(_DWORD *)(v5 + 360) = 0;
  *(_DWORD *)(v5 + 352) = 0;
  *(_DWORD *)(v5 + 288) = 0;
  *(_DWORD *)(v5 + 452) = 0;
  *(_DWORD *)(v5 + 448) = 0;
  *(_DWORD *)(v5 + 124) = 0;
  *(_DWORD *)(v5 + 244) = 0;
  *(_BYTE *)(v5 + 456) = 33;
  *(_BYTE *)(v5 + 232) = 0;
  *(_BYTE *)(v5 + 233) = 0;
  *(_DWORD *)(v5 + 380) = 0;
  *(_DWORD *)(v5 + 384) = 0;
  *(_BYTE *)(v5 + 388) = 0;
  *(_DWORD *)(v5 + 400) = 0;
  *(_DWORD *)(v5 + 420) = v13;
  *(_DWORD *)(v5 + 404) = 0;
  *(_DWORD *)(v5 + 416) = 0;
  *(_DWORD *)(v5 + 412) = 0;
  *(_DWORD *)(v5 + 408) = 0;
  *(_DWORD *)(v5 + 424) = 0;
  *(_DWORD *)(v5 + 444) = v13;
  *(_DWORD *)(v5 + 428) = 0;
  *(_DWORD *)(v5 + 440) = 0;
  *(_DWORD *)(v5 + 436) = 0;
  *(_DWORD *)(v5 + 432) = 0;
  v11 = sub_33E4B8(v5, a1);
  if ( a1 != nullptr )
  {
    v7 = *(_DWORD *)(v5 + 228);
    if ( v7 == 0 )
    {
      XML_ParserFree(v5);
      return v7;
    }
  }
  v12 = (_DWORD *)(v5 + 224);
  if ( a3 != nullptr )
  {
    *(_BYTE *)(v5 + 232) = 1;
    *v12 = XmlGetUtf8InternalEncoding(v11);
    *(_BYTE *)(v5 + 456) = *a3;
  }
  else
  {
    *v12 = XmlGetUtf8InternalEncoding(v11);
  }
  return v5;
}


//======================================================================
// sub_3425A4
// address: 0x003425A4   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_3425A4(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  switch ( a2 )
  {
    case 11:
      *a1 = sub_34264C;
      return 55;
    case 12:
      *a1 = sub_34264C;
      return 1;
    case 13:
      *a1 = sub_34264C;
      return 56;
    case 14:
      return 0;
    case 15:
      *a1 = sub_34264C;
      return 0;
    case 16:
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(
             a5,
             a3 + 2 * *(_DWORD *)(a5 + 64),
             a4,
             "DOCTYPE") == 0 )
        goto LABEL_9;
      *a1 = sub_342704;
      result = 3;
      break;
    case 29:
      *a1 = sub_343404;
      return 2;
    default:
LABEL_9:
      *a1 = sub_343404;
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_34264C
// address: 0x0034264C   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_34264C(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  switch ( a2 )
  {
    case 11:
      result = 55;
      break;
    case 13:
      result = 56;
      break;
    case 14:
    case 15:
      result = 0;
      break;
    case 16:
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(
             a5,
             a3 + 2 * *(_DWORD *)(a5 + 64),
             a4,
             "DOCTYPE") == 0 )
        goto LABEL_7;
      *a1 = sub_342704;
      result = 3;
      break;
    case 29:
      *a1 = sub_343404;
      result = 2;
      break;
    default:
LABEL_7:
      *a1 = sub_343404;
      result = -1;
      break;
  }
  return result;
}


//======================================================================
// sub_3426C4
// address: 0x003426C4   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_3426C4(_DWORD *a1, int a2)
{
  int result; // r0

  if ( a2 == 13 )
    return 56;
  if ( a2 > 13 )
  {
    result = 0;
    if ( a2 == 15 )
      return result;
    if ( a2 == 29 )
    {
      *a1 = sub_343404;
      return 2;
    }
  }
  else
  {
    result = 55;
    if ( a2 == 11 )
      return result;
  }
  *a1 = sub_343404;
  return -1;
}


//======================================================================
// sub_342704
// address: 0x00342704   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_342704(_DWORD *a1, int a2)
{
  int result; // r0

  if ( a2 == 18 || a2 == 41 )
  {
    *a1 = sub_342734;
    return 4;
  }
  else
  {
    result = 3;
    if ( a2 != 15 )
    {
      *a1 = sub_343404;
      return -1;
    }
  }
  return result;
}


//======================================================================
// sub_342734
// address: 0x00342734   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_342734(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int (*v8)(); // r3

  switch ( a2 )
  {
    case 15:
      return 3;
    case 17:
      *a1 = sub_3426C4;
      return 8;
    case 18:
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "SYSTEM") != 0 )
      {
        v8 = sub_3427F8;
      }
      else
      {
        if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "PUBLIC") == 0 )
        {
LABEL_9:
          *a1 = sub_343404;
          return -1;
        }
        v8 = sub_3427CC;
      }
      *a1 = v8;
      return 3;
    case 25:
      *a1 = sub_342890;
      return 7;
    default:
      goto LABEL_9;
  }
}


//======================================================================
// sub_3427CC
// address: 0x003427CC   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3427CC(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 3;
  if ( a2 == 27 )
  {
    *a1 = sub_3427F8;
    return 6;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_3427F8
// address: 0x003427F8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3427F8(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 3;
  if ( a2 == 27 )
  {
    *a1 = sub_342824;
    return 5;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342824
// address: 0x00342824   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_342824(_DWORD *a1, int a2)
{
  switch ( a2 )
  {
    case 17:
      *a1 = sub_3426C4;
      return 8;
    case 25:
      *a1 = sub_342890;
      return 7;
    case 15:
      return 3;
    default:
      *a1 = sub_343404;
      return -1;
  }
}


//======================================================================
// sub_342864
// address: 0x00342864   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_342864(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 3;
  if ( a2 == 17 )
  {
    *a1 = sub_3426C4;
    return 8;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342890
// address: 0x00342890   size: 0xDC (220 bytes)
//======================================================================
int __fastcall sub_342890(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  if ( a2 == 15 )
    return 0;
  if ( a2 > 15 )
  {
    if ( a2 == 26 )
    {
      *a1 = sub_342864;
      return 3;
    }
    result = 57;
    if ( a2 == 28 )
      return result;
    if ( a2 == 16 )
    {
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(
             a5,
             a3 + 2 * *(_DWORD *)(a5 + 64),
             a4,
             "ENTITY") != 0 )
      {
        *a1 = sub_342988;
        return 11;
      }
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(
             a5,
             a3 + 2 * *(_DWORD *)(a5 + 64),
             a4,
             "ATTLIST") != 0 )
      {
        *a1 = sub_342D94;
        return 33;
      }
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(
             a5,
             a3 + 2 * *(_DWORD *)(a5 + 64),
             a4,
             "ELEMENT") != 0 )
      {
        *a1 = sub_343074;
        return 39;
      }
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(
             a5,
             a3 + 2 * *(_DWORD *)(a5 + 64),
             a4,
             "NOTATION") != 0 )
      {
        *a1 = sub_342C5C;
        return 17;
      }
    }
    goto LABEL_21;
  }
  if ( a2 != 11 )
  {
    result = 56;
    if ( a2 == 13 )
      return result;
    if ( a2 == -4 )
      return 0;
LABEL_21:
    *a1 = sub_343404;
    return -1;
  }
  return 55;
}


//======================================================================
// sub_342988
// address: 0x00342988   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_342988(_DWORD *a1, int a2)
{
  if ( a2 == 18 )
  {
    *a1 = sub_3429F0;
    return 9;
  }
  else
  {
    if ( a2 == 22 )
    {
      *a1 = sub_3429C4;
    }
    else if ( a2 != 15 )
    {
      *a1 = sub_343404;
      return -1;
    }
    return 11;
  }
}


//======================================================================
// sub_3429C4
// address: 0x003429C4   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3429C4(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 11;
  if ( a2 == 18 )
  {
    *a1 = sub_342B54;
    return 10;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_3429F0
// address: 0x003429F0   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_3429F0(int (**a1)(), int a2, int a3, int a4, int a5)
{
  int (*v7)(); // r3

  if ( a2 != 18 )
  {
    if ( a2 == 27 )
    {
      *a1 = sub_3433DC;
      a1[2] = (int (*)())(byte_9 + 2);
      return 12;
    }
    if ( a2 == 15 )
      return 11;
LABEL_11:
    *a1 = sub_343404;
    return -1;
  }
  if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "SYSTEM") != 0 )
  {
    v7 = sub_342AA0;
  }
  else
  {
    if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "PUBLIC") == 0 )
      goto LABEL_11;
    v7 = sub_342A74;
  }
  *a1 = v7;
  return 11;
}


//======================================================================
// sub_342A74
// address: 0x00342A74   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_342A74(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 11;
  if ( a2 == 27 )
  {
    *a1 = sub_342AA0;
    return 14;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342AA0
// address: 0x00342AA0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_342AA0(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 11;
  if ( a2 == 27 )
  {
    *a1 = sub_342ACC;
    return 13;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342ACC
// address: 0x00342ACC   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_342ACC(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  if ( a2 == 17 )
  {
    *a1 = sub_342890;
    return 15;
  }
  if ( a2 != 18 )
  {
    if ( a2 == 15 )
      return 11;
LABEL_8:
    *a1 = sub_343404;
    return -1;
  }
  if ( (*(int (**)(void))(a5 + 24))() == 0 )
    goto LABEL_8;
  *a1 = sub_342B24;
  return 11;
}


//======================================================================
// sub_342B24
// address: 0x00342B24   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_342B24(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 11;
  if ( a2 == 18 )
  {
    *a1 = sub_3433DC;
    a1[2] = 11;
    return 16;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342B54
// address: 0x00342B54   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_342B54(int (**a1)(), int a2, int a3, int a4, int a5)
{
  int (*v7)(); // r3

  if ( a2 != 18 )
  {
    if ( a2 == 27 )
    {
      *a1 = sub_3433DC;
      a1[2] = (int (*)())(byte_9 + 2);
      return 12;
    }
    if ( a2 == 15 )
      return 11;
LABEL_11:
    *a1 = sub_343404;
    return -1;
  }
  if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "SYSTEM") != 0 )
  {
    v7 = sub_342C04;
  }
  else
  {
    if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "PUBLIC") == 0 )
      goto LABEL_11;
    v7 = sub_342BD8;
  }
  *a1 = v7;
  return 11;
}


//======================================================================
// sub_342BD8
// address: 0x00342BD8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_342BD8(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 11;
  if ( a2 == 27 )
  {
    *a1 = sub_342C04;
    return 14;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342C04
// address: 0x00342C04   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_342C04(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 11;
  if ( a2 == 27 )
  {
    *a1 = sub_342C30;
    return 13;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342C30
// address: 0x00342C30   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_342C30(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 11;
  if ( a2 == 17 )
  {
    *a1 = sub_342890;
    return 15;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342C5C
// address: 0x00342C5C   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_342C5C(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 17;
  if ( a2 == 18 )
  {
    *a1 = sub_342C88;
    return 18;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342C88
// address: 0x00342C88   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_342C88(int (**a1)(), int a2, int a3, int a4, int a5)
{
  int (*v7)(); // r3

  if ( a2 == 15 )
    return 17;
  if ( a2 != 18 )
    goto LABEL_8;
  if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "SYSTEM") == 0 )
  {
    if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "PUBLIC") != 0 )
    {
      v7 = sub_342CF4;
      goto LABEL_7;
    }
LABEL_8:
    *a1 = sub_343404;
    return -1;
  }
  v7 = sub_342D20;
LABEL_7:
  *a1 = v7;
  return 17;
}


//======================================================================
// sub_342CF4
// address: 0x00342CF4   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_342CF4(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 17;
  if ( a2 == 27 )
  {
    *a1 = sub_342D50;
    return 21;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342D20
// address: 0x00342D20   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_342D20(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 17;
  if ( a2 == 27 )
  {
    *a1 = sub_3433DC;
    a1[2] = 17;
    return 19;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342D50
// address: 0x00342D50   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_342D50(_DWORD *a1, int a2)
{
  switch ( a2 )
  {
    case 17:
      *a1 = sub_342890;
      return 20;
    case 27:
      *a1 = sub_3433DC;
      a1[2] = 17;
      return 19;
    case 15:
      return 17;
    default:
      *a1 = sub_343404;
      return -1;
  }
}


//======================================================================
// sub_342D94
// address: 0x00342D94   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_342D94(_DWORD *a1, int a2)
{
  int result; // r0

  if ( a2 == 18 || a2 == 41 )
  {
    *a1 = sub_342DC4;
    return 34;
  }
  else
  {
    result = 33;
    if ( a2 != 15 )
    {
      *a1 = sub_343404;
      return -1;
    }
  }
  return result;
}


//======================================================================
// sub_342DC4
// address: 0x00342DC4   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_342DC4(_DWORD *a1, int a2)
{
  int result; // r0

  if ( a2 == 17 )
  {
    *a1 = sub_342890;
    return 33;
  }
  if ( a2 > 17 )
  {
    if ( a2 == 18 || a2 == 41 )
    {
      *a1 = sub_342E0C;
      return 22;
    }
  }
  else
  {
    result = 33;
    if ( a2 == 15 )
      return result;
  }
  *a1 = sub_343404;
  return -1;
}


//======================================================================
// sub_342E0C
// address: 0x00342E0C   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_342E0C(int (**a1)(), int a2, int a3, int a4, int a5)
{
  int i; // r4
  int (*v8)(); // r3

  switch ( a2 )
  {
    case 18:
      for ( i = 0; i != 8; ++i )
      {
        if ( (*(int (__fastcall **)(int, int, int, char *))(a5 + 24))(a5, a3, a4, off_453984[i]) != 0 )
        {
          *a1 = (int (*)())sub_342F98;
          return i + 23;
        }
      }
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "NOTATION") == 0 )
        goto LABEL_13;
      v8 = sub_342F08;
      break;
    case 23:
      v8 = sub_342E98;
      break;
    case 15:
      return 33;
    default:
LABEL_13:
      *a1 = sub_343404;
      return -1;
  }
  *a1 = v8;
  return 33;
}


//======================================================================
// sub_342E98
// address: 0x00342E98   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_342E98(_DWORD *a1, int a2)
{
  int result; // r0

  if ( a2 <= 19 )
  {
    if ( a2 < 18 )
    {
      result = 33;
      if ( a2 == 15 )
        return result;
      goto LABEL_7;
    }
LABEL_6:
    *a1 = sub_342ED0;
    return 31;
  }
  if ( a2 == 41 )
    goto LABEL_6;
LABEL_7:
  *a1 = sub_343404;
  return -1;
}


//======================================================================
// sub_342ED0
// address: 0x00342ED0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_342ED0(int (**a1)(int, int, int, int, int), int a2)
{
  int (*v3)(int, int, int, int, int); // r3

  if ( a2 == 21 )
  {
    v3 = (int (*)(int, int, int, int, int))sub_342E98;
    goto LABEL_7;
  }
  if ( a2 == 24 )
  {
    v3 = sub_342F98;
LABEL_7:
    *a1 = v3;
    return 33;
  }
  if ( a2 != 15 )
  {
    *a1 = (int (*)(int, int, int, int, int))sub_343404;
    return -1;
  }
  return 33;
}


//======================================================================
// sub_342F08
// address: 0x00342F08   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_342F08(_DWORD *a1, int a2)
{
  if ( a2 != 15 )
  {
    if ( a2 != 23 )
    {
      *a1 = sub_343404;
      return -1;
    }
    *a1 = sub_342F34;
  }
  return 33;
}


//======================================================================
// sub_342F34
// address: 0x00342F34   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_342F34(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 33;
  if ( a2 == 18 )
  {
    *a1 = sub_342F60;
    return 32;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_342F60
// address: 0x00342F60   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_342F60(int (**a1)(int, int, int, int, int), int a2)
{
  int (*v3)(int, int, int, int, int); // r3

  if ( a2 == 21 )
  {
    v3 = (int (*)(int, int, int, int, int))sub_342F34;
    goto LABEL_7;
  }
  if ( a2 == 24 )
  {
    v3 = sub_342F98;
LABEL_7:
    *a1 = v3;
    return 33;
  }
  if ( a2 != 15 )
  {
    *a1 = (int (*)(int, int, int, int, int))sub_343404;
    return -1;
  }
  return 33;
}


//======================================================================
// sub_342F98
// address: 0x00342F98   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_342F98(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  if ( a2 != 20 )
  {
    if ( a2 == 27 )
    {
      *a1 = sub_342DC4;
      return 37;
    }
    if ( a2 == 15 )
      return 33;
LABEL_12:
    *a1 = sub_343404;
    return -1;
  }
  if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3 + *(_DWORD *)(a5 + 64), a4, "IMPLIED") != 0 )
  {
    *a1 = sub_342DC4;
    return 35;
  }
  if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3 + *(_DWORD *)(a5 + 64), a4, "REQUIRED") != 0 )
  {
    *a1 = sub_342DC4;
    return 36;
  }
  if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3 + *(_DWORD *)(a5 + 64), a4, "FIXED") == 0 )
    goto LABEL_12;
  *a1 = sub_343048;
  return 33;
}


//======================================================================
// sub_343048
// address: 0x00343048   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_343048(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return 33;
  if ( a2 == 27 )
  {
    *a1 = sub_342DC4;
    return 38;
  }
  else
  {
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_343074
// address: 0x00343074   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_343074(_DWORD *a1, int a2)
{
  int result; // r0

  if ( a2 == 18 || a2 == 41 )
  {
    *a1 = sub_3430A4;
    return 40;
  }
  else
  {
    result = 39;
    if ( a2 != 15 )
    {
      *a1 = sub_343404;
      return -1;
    }
  }
  return result;
}


//======================================================================
// sub_3430A4
// address: 0x003430A4   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_3430A4(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  switch ( a2 )
  {
    case 18:
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "EMPTY") != 0 )
      {
        *a1 = sub_3433DC;
        a1[2] = 39;
        return 42;
      }
      if ( (*(int (__fastcall **)(int, int, int, const char *))(a5 + 24))(a5, a3, a4, "ANY") != 0 )
      {
        *a1 = sub_3433DC;
        a1[2] = 39;
        return 41;
      }
      break;
    case 23:
      *a1 = sub_343138;
      a1[1] = 1;
      return 44;
    case 15:
      return 39;
    default:
      break;
  }
  *a1 = sub_343404;
  return -1;
}


//======================================================================
// sub_343138
// address: 0x00343138   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_343138(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // r0

  if ( a2 == 23 )
  {
    a1[1] = 2;
    *a1 = sub_3432B4;
    return 44;
  }
  if ( a2 > 23 )
  {
    if ( a2 == 31 )
    {
      *a1 = sub_34332C;
      return 52;
    }
    if ( a2 <= 31 )
    {
      if ( a2 == 30 )
      {
        *a1 = sub_34332C;
        return 53;
      }
      goto LABEL_20;
    }
    if ( a2 == 32 )
    {
      *a1 = sub_34332C;
      return 54;
    }
    if ( a2 != 41 )
      goto LABEL_20;
LABEL_17:
    *a1 = sub_34332C;
    return 51;
  }
  if ( a2 == 18 )
    goto LABEL_17;
  if ( a2 == 20 )
  {
    if ( (*(int (**)(void))(a5 + 24))() != 0 )
    {
      *a1 = sub_3431E8;
      return 43;
    }
    goto LABEL_20;
  }
  result = 39;
  if ( a2 != 15 )
  {
LABEL_20:
    *a1 = sub_343404;
    return -1;
  }
  return result;
}


//======================================================================
// sub_3431E8
// address: 0x003431E8   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_3431E8(_DWORD *a1, int a2)
{
  int result; // r0

  if ( a2 == 21 )
  {
    *a1 = sub_343244;
    return 39;
  }
  else
  {
    if ( a2 > 21 )
    {
      if ( a2 == 24 )
      {
        *a1 = sub_3433DC;
        a1[2] = 39;
        return 45;
      }
      if ( a2 == 36 )
      {
        *a1 = sub_3433DC;
        a1[2] = 39;
        return 46;
      }
    }
    else
    {
      result = 39;
      if ( a2 == 15 )
        return result;
    }
    *a1 = sub_343404;
    return -1;
  }
}


//======================================================================
// sub_343244
// address: 0x00343244   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_343244(_DWORD *a1, int a2)
{
  int result; // r0

  if ( a2 == 18 || a2 == 41 )
  {
    *a1 = sub_343274;
    return 51;
  }
  else
  {
    result = 39;
    if ( a2 != 15 )
    {
      *a1 = sub_343404;
      return -1;
    }
  }
  return result;
}


//======================================================================
// sub_343274
// address: 0x00343274   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_343274(_DWORD *a1, int a2)
{
  switch ( a2 )
  {
    case 21:
      *a1 = sub_343244;
      break;
    case 36:
      *a1 = sub_3433DC;
      a1[2] = 39;
      return 46;
    case 15:
      break;
    default:
      *a1 = sub_343404;
      return -1;
  }
  return 39;
}


//======================================================================
// sub_3432B4
// address: 0x003432B4   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_3432B4(_DWORD *a1, int a2)
{
  int result; // r0

  if ( a2 == 30 )
  {
    *a1 = sub_34332C;
    return 53;
  }
  if ( a2 > 30 )
  {
    if ( a2 == 32 )
    {
      *a1 = sub_34332C;
      return 54;
    }
    if ( a2 < 32 )
    {
      *a1 = sub_34332C;
      return 52;
    }
    if ( a2 != 41 )
      goto LABEL_16;
LABEL_12:
    *a1 = sub_34332C;
    return 51;
  }
  if ( a2 == 18 )
    goto LABEL_12;
  if ( a2 == 23 )
  {
    ++a1[1];
    return 44;
  }
  result = 39;
  if ( a2 != 15 )
  {
LABEL_16:
    *a1 = sub_343404;
    return -1;
  }
  return result;
}


//======================================================================
// sub_34332C
// address: 0x0034332C   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_34332C(_DWORD *a1, int a2)
{
  int result; // r0
  int v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r2

  if ( a2 == 35 )
  {
    v6 = a1[1] - 1;
    a1[1] = v6;
    result = 47;
    if ( v6 != 0 )
      return result;
    goto LABEL_14;
  }
  if ( a2 > 35 )
  {
    if ( a2 == 37 )
    {
      v7 = a1[1] - 1;
      a1[1] = v7;
      result = 48;
      if ( v7 != 0 )
        return result;
    }
    else
    {
      if ( a2 >= 37 )
      {
        if ( a2 == 38 )
        {
          *a1 = sub_3432B4;
          return 50;
        }
        goto LABEL_20;
      }
      v5 = a1[1] - 1;
      a1[1] = v5;
      result = 46;
      if ( v5 != 0 )
        return result;
    }
LABEL_14:
    *a1 = sub_3433DC;
    a1[2] = 39;
    return result;
  }
  if ( a2 == 21 )
  {
    *a1 = sub_3432B4;
    return 49;
  }
  if ( a2 == 24 )
  {
    v4 = a1[1] - 1;
    a1[1] = v4;
    result = 45;
    if ( v4 != 0 )
      return result;
    goto LABEL_14;
  }
  result = 39;
  if ( a2 != 15 )
  {
LABEL_20:
    *a1 = sub_343404;
    return -1;
  }
  return result;
}


//======================================================================
// sub_3433DC
// address: 0x003433DC   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3433DC(_DWORD *a1, int a2)
{
  if ( a2 == 15 )
    return a1[2];
  if ( a2 == 17 )
  {
    *a1 = sub_342890;
    return a1[2];
  }
  *a1 = sub_343404;
  return -1;
}


//======================================================================
// sub_343404
// address: 0x00343404   size: 0x4 (4 bytes)
//======================================================================
int sub_343404()
{
  return 0;
}


//======================================================================
// sub_343414
// address: 0x00343414   size: 0x4 (4 bytes)
//======================================================================
int sub_343414()
{
  return 0;
}


//======================================================================
// sub_343418
// address: 0x00343418   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_343418(int a1, unsigned __int8 *a2)
{
  return dword_44A1B8[8 * byte_44A6B8[(unsigned int)(*a2 << 27) >> 29] + 2 * (*a2 & 3) + ((a2[1] & 0x20) != 0)]
       & (1 << (a2[1] & 0x1F));
}


//======================================================================
// sub_343454
// address: 0x00343454   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_343454(int a1, _BYTE *a2)
{
  return dword_44A1B8[8
                    * byte_44A6B8[(unsigned __int8)(16 * *a2) + ((unsigned int)((unsigned __int8)a2[1] << 26) >> 28)]
                    + 2 * (a2[1] & 3)
                    + ((a2[2] & 0x20) != 0)]
       & (1 << (a2[2] & 0x1F));
}


//======================================================================
// sub_34349C
// address: 0x0034349C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_34349C(int a1, unsigned __int8 *a2)
{
  return dword_44A1B8[8 * byte_44A7B8[(unsigned int)(*a2 << 27) >> 29] + 2 * (*a2 & 3) + ((a2[1] & 0x20) != 0)]
       & (1 << (a2[1] & 0x1F));
}


//======================================================================
// sub_3434D8
// address: 0x003434D8   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_3434D8(int a1, _BYTE *a2)
{
  return dword_44A1B8[8
                    * byte_44A7B8[(unsigned __int8)(16 * *a2) + ((unsigned int)((unsigned __int8)a2[1] << 26) >> 28)]
                    + 2 * (a2[1] & 3)
                    + ((a2[2] & 0x20) != 0)]
       & (1 << (a2[2] & 0x1F));
}


//======================================================================
// sub_343520
// address: 0x00343520   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_343520(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r3
  int result; // r0
  int v4; // r2
  unsigned int v5; // r3
  int v6; // r3
  unsigned int v7; // r3

  v2 = a2[2];
  result = 1;
  if ( (v2 & 0x80) != 0 )
  {
    v4 = *a2;
    if ( v4 == 239 && a2[1] == 191 )
    {
      if ( v2 > 0xBD )
        return result;
    }
    else
    {
      if ( (a2[2] & 0xC0) == 0xC0 )
        return 1;
      if ( v4 == 224 )
      {
        v5 = a2[1];
        result = 1;
        if ( v5 <= 0x9F )
          return result;
        v6 = v5 & 0xC0;
        return v6 == 192;
      }
    }
    v7 = a2[1];
    result = 1;
    if ( (v7 & 0x80) == 0 )
      return result;
    if ( v4 == 237 )
      return v7 > 0x9F;
    v6 = v7 & 0xC0;
    return v6 == 192;
  }
  return result;
}


//======================================================================
// sub_34357C
// address: 0x0034357C   size: 0x14E (334 bytes)
//======================================================================
int __fastcall sub_34357C(
        int (__fastcall **a1)(_DWORD),
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 **a4)
{
  unsigned __int8 *v7; // r4
  int result; // r0
  unsigned __int8 *v9; // r3
  int v10; // r0
  int v11; // r0

  if ( a2 == a3 )
  {
    v11 = 4;
    return -v11;
  }
  else
  {
    switch ( *((_BYTE *)a1 + *a2 + 72) )
    {
      case 0:
      case 1:
      case 8:
        goto LABEL_22;
      case 4:
        v7 = a2 + 1;
        if ( a2 + 1 == a3 )
          goto LABEL_37;
        if ( a2[1] != 93 )
          goto LABEL_27;
        if ( a3 == a2 + 2 )
        {
LABEL_37:
          v11 = 1;
          return -v11;
        }
        if ( a2[2] != 62 )
          goto LABEL_27;
        *a4 = a2 + 3;
        return 40;
      case 5:
        if ( a3 - a2 <= 1 )
          goto LABEL_38;
        v10 = a1[88](a1);
        v7 = a2 + 2;
        goto LABEL_21;
      case 6:
        if ( a3 - a2 <= 2 )
          goto LABEL_38;
        v10 = a1[89](a1);
        v7 = a2 + 3;
        goto LABEL_21;
      case 7:
        if ( a3 - a2 <= 3 )
        {
LABEL_38:
          v11 = 2;
          return -v11;
        }
        v10 = a1[90](a1);
        v7 = a2 + 4;
LABEL_21:
        if ( v10 != 0 )
        {
LABEL_22:
          *a4 = a2;
          result = 0;
        }
        else
        {
LABEL_27:
          while ( v7 != a3 )
          {
            switch ( *((_BYTE *)a1 + *v7 + 72) )
            {
              case 0:
              case 1:
              case 4:
              case 8:
              case 9:
              case 0xA:
                goto LABEL_36;
              case 5:
                if ( a3 - v7 <= 1
                  || ((int (__fastcall *)(int (__fastcall **)(_DWORD), unsigned __int8 *))a1[88])(a1, v7) != 0 )
                {
                  goto LABEL_36;
                }
                v7 += 2;
                break;
              case 6:
                if ( a3 - v7 <= 2
                  || ((int (__fastcall *)(int (__fastcall **)(_DWORD), unsigned __int8 *))a1[89])(a1, v7) != 0 )
                {
                  goto LABEL_36;
                }
                v7 += 3;
                break;
              case 7:
                if ( a3 - v7 <= 3
                  || ((int (__fastcall *)(int (__fastcall **)(_DWORD), unsigned __int8 *))a1[90])(a1, v7) != 0 )
                {
                  goto LABEL_36;
                }
                v7 += 4;
                break;
              default:
                ++v7;
                continue;
            }
          }
LABEL_36:
          *a4 = v7;
          result = 6;
        }
        break;
      case 9:
        v9 = a2 + 1;
        if ( a2 + 1 == a3 )
          goto LABEL_37;
        if ( *((_BYTE *)a1 + a2[1] + 72) == 10 )
          v9 = a2 + 2;
        *a4 = v9;
        return 7;
      case 0xA:
        *a4 = a2 + 1;
        return 7;
      default:
        v7 = a2 + 1;
        goto LABEL_27;
    }
  }
  return result;
}


//======================================================================
// sub_3436CA
// address: 0x003436CA   size: 0x1AE (430 bytes)
//======================================================================
int __fastcall sub_3436CA(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r5
  unsigned int v7; // r3
  unsigned __int8 *v8; // r4
  int v9; // r0
  int result; // r0
  unsigned __int8 *v11; // r3
  int v12; // r2
  unsigned int v13; // r3

  v5 = a2;
  if ( a2 == a3 )
    goto LABEL_40;
  v7 = *(unsigned __int8 *)(a1 + *a2 + 72);
  if ( v7 == 19 )
  {
    v11 = a2 + 1;
    if ( a2 + 1 != a3 )
    {
      v12 = a2[1];
      if ( v12 != 120 )
      {
        v5 = a2 + 2;
        if ( *(_BYTE *)(a1 + v12 + 72) == 25 )
        {
          while ( v5 != a3 )
          {
            if ( *(_BYTE *)(a1 + *v5 + 72) == 18 )
            {
LABEL_37:
              *a4 = v5 + 1;
              return 10;
            }
            if ( *(_BYTE *)(a1 + *v5 + 72) != 25 )
              goto LABEL_41;
            ++v5;
          }
          goto LABEL_40;
        }
        goto LABEL_32;
      }
      v11 = a2 + 2;
      if ( a2 + 2 != a3 )
      {
        v5 = a2 + 3;
        if ( (unsigned int)*(unsigned __int8 *)(a1 + a2[2] + 72) - 24 <= 1 )
        {
          while ( v5 != a3 )
          {
            v13 = *(unsigned __int8 *)(a1 + *v5 + 72);
            if ( v13 == 18 )
              goto LABEL_37;
            if ( v13 < 0x12 || (unsigned int)*(unsigned __int8 *)(a1 + *v5 + 72) - 24 > 1 )
              goto LABEL_41;
            ++v5;
          }
          goto LABEL_40;
        }
LABEL_32:
        *a4 = v11;
        return 0;
      }
    }
LABEL_40:
    v9 = 1;
    return -v9;
  }
  if ( v7 > 0x13 )
  {
    if ( v7 == 24 || v7 != 29 && *(_BYTE *)(a1 + *a2 + 72) == 22 )
    {
      v8 = a2 + 1;
      goto LABEL_39;
    }
LABEL_41:
    *a4 = v5;
    return 0;
  }
  if ( v7 == 6 )
  {
    if ( a3 - a2 <= 2 )
      goto LABEL_13;
    result = (*(int (**)(void))(a1 + 344))();
    v8 = v5 + 3;
    goto LABEL_20;
  }
  if ( v7 == 7 )
  {
    if ( a3 - a2 <= 3 )
      goto LABEL_13;
    result = (*(int (**)(void))(a1 + 348))();
    v8 = v5 + 4;
    goto LABEL_20;
  }
  if ( v7 != 5 )
    goto LABEL_41;
  if ( a3 - a2 <= 1 )
  {
LABEL_13:
    v9 = 2;
    return -v9;
  }
  result = (*(int (**)(void))(a1 + 340))();
  v8 = v5 + 2;
LABEL_20:
  if ( result == 0 )
  {
    *a4 = v5;
    return result;
  }
LABEL_39:
  while ( 2 )
  {
    if ( v8 == a3 )
      goto LABEL_40;
    switch ( *(_BYTE *)(a1 + *v8 + 72) )
    {
      case 5:
        if ( a3 - v8 <= 1 )
          goto LABEL_13;
        result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 328))(a1, v8);
        if ( result == 0 )
          goto LABEL_54;
        v8 += 2;
        continue;
      case 6:
        if ( a3 - v8 <= 2 )
          goto LABEL_13;
        result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 332))(a1, v8);
        if ( result == 0 )
          goto LABEL_54;
        v8 += 3;
        continue;
      case 7:
        if ( a3 - v8 <= 3 )
          goto LABEL_13;
        result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 336))(a1, v8);
        if ( result != 0 )
        {
          v8 += 4;
          continue;
        }
LABEL_54:
        *a4 = v8;
        return result;
      case 0x12:
        *a4 = v8 + 1;
        return 9;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
        ++v8;
        continue;
      default:
        *a4 = v8;
        return 0;
    }
  }
}


//======================================================================
// sub_343878
// address: 0x00343878   size: 0x13A (314 bytes)
//======================================================================
int __fastcall sub_343878(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v7; // r4
  int result; // r0
  int v9; // r0

  if ( a2 == a3 )
  {
    v9 = 22;
  }
  else
  {
    switch ( *(_BYTE *)(a1 + *a2 + 72) )
    {
      case 5:
        if ( a3 - a2 <= 1 )
          goto LABEL_6;
        result = (*(int (__fastcall **)(int))(a1 + 340))(a1);
        v7 = a2 + 2;
        goto LABEL_12;
      case 6:
        if ( a3 - a2 <= 2 )
          goto LABEL_6;
        result = (*(int (__fastcall **)(int))(a1 + 344))(a1);
        v7 = a2 + 3;
        goto LABEL_12;
      case 7:
        if ( a3 - a2 <= 3 )
        {
LABEL_6:
          v9 = 2;
        }
        else
        {
          result = (*(int (__fastcall **)(int))(a1 + 348))(a1);
          v7 = a2 + 4;
LABEL_12:
          if ( result == 0 )
          {
            *a4 = a2;
            return result;
          }
LABEL_17:
          while ( v7 != a3 )
          {
            switch ( *(_BYTE *)(a1 + *v7 + 72) )
            {
              case 5:
                if ( a3 - v7 <= 1 )
                  goto LABEL_6;
                result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 328))(a1, v7);
                if ( result == 0 )
                  goto LABEL_30;
                v7 += 2;
                continue;
              case 6:
                if ( a3 - v7 <= 2 )
                  goto LABEL_6;
                result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 332))(a1, v7);
                if ( result == 0 )
                  goto LABEL_30;
                v7 += 3;
                continue;
              case 7:
                if ( a3 - v7 <= 3 )
                  goto LABEL_6;
                result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 336))(a1, v7);
                if ( result == 0 )
                {
LABEL_30:
                  *a4 = v7;
                  return result;
                }
                v7 += 4;
                break;
              case 0x12:
                *a4 = v7 + 1;
                return 28;
              case 0x16:
              case 0x18:
              case 0x19:
              case 0x1A:
              case 0x1B:
                ++v7;
                continue;
              default:
                *a4 = v7;
                return 0;
            }
          }
          v9 = 1;
        }
        break;
      case 9:
      case 0xA:
      case 0x15:
      case 0x1E:
        *a4 = a2;
        return 22;
      case 0x16:
      case 0x18:
        v7 = a2 + 1;
        goto LABEL_17;
      default:
        *a4 = a2;
        return 0;
    }
  }
  return -v9;
}


//======================================================================
// sub_3439B4
// address: 0x003439B4   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_3439B4(int a1, _BYTE *a2, unsigned __int8 *a3, unsigned __int8 *a4, unsigned __int8 **a5)
{
  int v8; // kr08_4
  int v9; // kr04_4
  unsigned __int8 *v10; // r3
  int result; // r0
  unsigned int v12; // r3
  int v13; // r0
  int v14; // [sp+4h] [bp-8h]

  v14 = a1;
  while ( a3 != a4 )
  {
    v8 = a1;
    v9 = a1;
    a1 = (unsigned __int8)a2[*a3 + 72];
    switch ( a2[*a3 + 72] )
    {
      case 0:
      case 1:
      case 8:
        goto LABEL_14;
      case 2:
      case 3:
      case 4:
      case 9:
      case 0xA:
      case 0xB:
        a1 = v9;
        goto LABEL_20;
      case 5:
        if ( a4 - a3 <= 1 )
          goto LABEL_23;
        a1 = (*((int (__fastcall **)(_BYTE *, unsigned __int8 *))a2 + 88))(a2, a3);
        if ( a1 != 0 )
          goto LABEL_14;
        v10 = a3 + 2;
        goto LABEL_21;
      case 6:
        if ( a4 - a3 <= 2 )
          goto LABEL_23;
        a1 = (*((int (__fastcall **)(_BYTE *, unsigned __int8 *))a2 + 89))(a2, a3);
        if ( a1 != 0 )
          goto LABEL_14;
        v10 = a3 + 3;
        goto LABEL_21;
      case 7:
        if ( a4 - a3 <= 3 )
        {
LABEL_23:
          v13 = 2;
          return -v13;
        }
        a1 = (*((int (__fastcall **)(_BYTE *, unsigned __int8 *))a2 + 90))(a2, a3);
        if ( a1 != 0 )
        {
LABEL_14:
          *a5 = a3;
          return 0;
        }
        v10 = a3 + 4;
LABEL_21:
        a3 = v10;
        break;
      case 0xC:
      case 0xD:
        v10 = a3 + 1;
        if ( (unsigned __int8)a2[*a3 + 72] != v14 )
          goto LABEL_21;
        if ( v10 == a4 )
        {
          v13 = 27;
          return -v13;
        }
        *a5 = v10;
        result = 0;
        v12 = (unsigned __int8)(a2[a3[1] + 72] - 9);
        if ( v12 <= 0x15 && ((1 << v12) & 0x201807) != 0 )
          return 27;
        return result;
      default:
        a1 = v8;
LABEL_20:
        v10 = a3 + 1;
        goto LABEL_21;
    }
  }
  v13 = 1;
  return -v13;
}


//======================================================================
// sub_343A84
// address: 0x00343A84   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_343A84(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  int result; // r0
  unsigned __int8 *v6; // r1
  int v7; // r0

  if ( a2 == a3 )
  {
    v7 = 4;
    return -v7;
  }
  else
  {
    v4 = a2;
    while ( 2 )
    {
      switch ( *(_BYTE *)(a1 + *v4 + 72) )
      {
        case 2:
          *a4 = v4;
          return 0;
        case 3:
          if ( v4 != a2 )
            goto LABEL_22;
          return sub_3436CA(a1, v4 + 1, a3, a4);
        case 5:
          v4 += 2;
          goto LABEL_21;
        case 6:
          v4 += 3;
          goto LABEL_21;
        case 7:
          v4 += 4;
          goto LABEL_21;
        case 9:
          if ( v4 != a2 )
            goto LABEL_22;
          v6 = v4 + 1;
          if ( v4 + 1 == a3 )
          {
            v7 = 3;
            return -v7;
          }
          if ( *(_BYTE *)(a1 + v4[1] + 72) == 10 )
            v6 = v4 + 2;
          *a4 = v6;
LABEL_17:
          result = 7;
          break;
        case 0xA:
          if ( v4 != a2 )
            goto LABEL_22;
          *a4 = v4 + 1;
          goto LABEL_17;
        case 0x15:
          if ( v4 != a2 )
            goto LABEL_22;
          *a4 = v4 + 1;
          return 39;
        default:
          ++v4;
LABEL_21:
          if ( v4 != a3 )
            continue;
LABEL_22:
          *a4 = v4;
          return 6;
      }
      break;
    }
  }
  return result;
}


//======================================================================
// sub_343B1E
// address: 0x00343B1E   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_343B1E(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  unsigned int v5; // r5
  int v7; // r0
  unsigned __int8 *v8; // r1
  int v9; // r0

  if ( a2 != a3 )
  {
    v4 = a2;
    while ( 1 )
    {
      v5 = *(unsigned __int8 *)(a1 + *v4 + 72);
      if ( v5 == 7 )
      {
        v4 += 4;
      }
      else
      {
        if ( v5 > 7 )
        {
          if ( v5 == 10 )
          {
            if ( v4 == a2 )
            {
              *a4 = v4 + 1;
              return 7;
            }
            goto LABEL_30;
          }
          if ( v5 == 30 )
          {
            if ( v4 == a2 )
            {
              v7 = sub_343878(a1, v4 + 1, a3, a4);
              return v7 != 22 ? v7 : 0;
            }
            goto LABEL_30;
          }
          if ( *(_BYTE *)(a1 + *v4 + 72) == 9 )
          {
            if ( v4 == a2 )
            {
              v8 = v4 + 1;
              if ( v4 + 1 != a3 )
              {
                if ( *(_BYTE *)(a1 + v4[1] + 72) == 10 )
                  v8 = v4 + 2;
                *a4 = v8;
                return 7;
              }
              v9 = 3;
              return -v9;
            }
LABEL_30:
            *a4 = v4;
            return 6;
          }
          goto LABEL_28;
        }
        if ( v5 == 5 )
        {
          v4 += 2;
        }
        else
        {
          if ( v5 <= 5 )
          {
            if ( v5 == 3 )
            {
              if ( v4 == a2 )
                return sub_3436CA(a1, v4 + 1, a3, a4);
              goto LABEL_30;
            }
LABEL_28:
            ++v4;
            goto LABEL_29;
          }
          v4 += 3;
        }
      }
LABEL_29:
      if ( v4 == a3 )
        goto LABEL_30;
    }
  }
  v9 = 4;
  return -v9;
}


//======================================================================
// sub_343BC4
// address: 0x00343BC4   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_343BC4(int a1, int a2, int a3, _DWORD *a4)
{
  _BYTE *i; // r1
  int v5; // r2
  unsigned int v6; // r4
  int v7; // r5
  _BYTE *v9; // [sp+4h] [bp-8h]

  v9 = (_BYTE *)(a3 - 1);
  for ( i = (_BYTE *)(a2 + 1); i != v9; ++i )
  {
    v5 = (unsigned __int8)*i;
    v6 = (unsigned __int8)(*(_BYTE *)(a1 + v5 + 72) - 9);
    if ( v6 <= 0x1A )
    {
      v7 = 1 << v6;
      if ( ((1 << v6) & 0x7E587F3) != 0 )
        continue;
      if ( (v7 & 0x22000) != 0 )
      {
        if ( (*i & 0x80) == 0 )
          continue;
      }
      else if ( (v7 & 0x1000) != 0 )
      {
        if ( v5 == 9 )
          goto LABEL_12;
        continue;
      }
    }
    if ( v5 != 36 && v5 != 64 )
    {
LABEL_12:
      *a4 = i;
      return 0;
    }
  }
  return 1;
}


//======================================================================
// sub_343C28
// address: 0x00343C28   size: 0x13C (316 bytes)
//======================================================================
int __fastcall sub_343C28(int a1, int a2, int a3, int a4)
{
  int v4; // r6
  unsigned __int8 *v5; // r1
  int v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r12
  int v15; // [sp+0h] [bp-Ch]

  v4 = 0;
  v5 = (unsigned __int8 *)(a2 + 1);
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    v15 = *v5;
    switch ( *(_BYTE *)(a1 + v15 + 72) )
    {
      case 3:
        goto LABEL_41;
      case 5:
        if ( v7 == 0 )
        {
          v7 = 1;
          if ( v6 < a3 )
          {
            v8 = a4 + 16 * v6;
            *(_DWORD *)v8 = v5;
            *(_BYTE *)(v8 + 12) = 1;
          }
        }
        ++v5;
        goto LABEL_50;
      case 6:
        if ( v7 == 0 )
        {
          v7 = 1;
          if ( v6 < a3 )
          {
            v9 = a4 + 16 * v6;
            *(_DWORD *)v9 = v5;
            *(_BYTE *)(v9 + 12) = 1;
          }
        }
        v5 += 2;
        goto LABEL_50;
      case 7:
        if ( v7 == 0 )
        {
          v7 = 1;
          if ( v6 < a3 )
          {
            v10 = a4 + 16 * v6;
            *(_DWORD *)v10 = v5;
            *(_BYTE *)(v10 + 12) = 1;
          }
        }
        v5 += 3;
        goto LABEL_50;
      case 9:
      case 0xA:
        if ( v7 == 1 )
          goto LABEL_49;
        if ( v7 != 2 )
          goto LABEL_50;
LABEL_41:
        if ( v6 < a3 )
        {
          v12 = a4 + 16 * v6;
LABEL_43:
          *(_BYTE *)(v12 + 12) = 0;
        }
        goto LABEL_50;
      case 0xB:
      case 0x11:
        if ( v7 == 2 )
          goto LABEL_50;
        return v6;
      case 0xC:
        if ( v7 != 2 )
        {
          if ( v6 < a3 )
            *(_DWORD *)(a4 + 16 * v6 + 4) = v5 + 1;
          v4 = 12;
          goto LABEL_48;
        }
        if ( v4 != 12 )
          goto LABEL_50;
        goto LABEL_27;
      case 0xD:
        if ( v7 == 2 )
        {
          if ( v4 == 13 )
          {
LABEL_27:
            if ( v6 < a3 )
              *(_DWORD *)(a4 + 16 * v6 + 8) = v5;
            ++v6;
LABEL_49:
            v7 = 0;
          }
        }
        else
        {
          if ( v6 < a3 )
            *(_DWORD *)(a4 + 16 * v6 + 4) = v5 + 1;
          v4 = 13;
LABEL_48:
          v7 = 2;
        }
LABEL_50:
        ++v5;
        break;
      case 0x15:
        if ( v7 == 1 )
          goto LABEL_49;
        if ( v7 == 2 && v6 < a3 )
        {
          v12 = a4 + 16 * v6;
          if ( *(_BYTE *)(v12 + 12) != 0 )
          {
            if ( v5 == *(unsigned __int8 **)(v12 + 4) )
              goto LABEL_43;
            if ( v15 != 32 )
              goto LABEL_43;
            v13 = v5[1];
            if ( v13 == 32 || *(unsigned __int8 *)(v13 + a1 + 72) == v4 )
              goto LABEL_43;
          }
        }
        goto LABEL_50;
      case 0x16:
      case 0x18:
      case 0x1D:
        if ( v7 == 0 )
        {
          v7 = 1;
          if ( v6 < a3 )
          {
            v11 = a4 + 16 * v6;
            *(_DWORD *)v11 = v5;
            *(_BYTE *)(v11 + 12) = 1;
          }
        }
        goto LABEL_50;
      default:
        goto LABEL_50;
    }
  }
}


//======================================================================
// sub_343D64
// address: 0x00343D64   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_343D64(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r2
  int result; // r0
  int v5; // r0
  int v6; // r3

  v3 = a3 - (_DWORD)a2;
  if ( v3 != 3 )
  {
    if ( v3 == 4 )
    {
      if ( *a2 == 97 )
      {
        result = 0;
        if ( a2[1] == 112 && a2[2] == 111 )
        {
          v5 = 39;
          v6 = a2[3] - 115;
          return v6 == 0 ? v5 : 0;
        }
        return result;
      }
      if ( *a2 == 113 )
      {
        result = 0;
        if ( a2[1] == 117 && a2[2] == 111 )
        {
          v5 = 34;
          v6 = a2[3] - 116;
          return v6 == 0 ? v5 : 0;
        }
        return result;
      }
    }
    else if ( v3 == 2 )
    {
      result = 0;
      if ( a2[1] != 116 )
        return result;
      if ( *a2 != 103 )
      {
        v5 = 60;
        v6 = *a2 - 108;
        return v6 == 0 ? v5 : 0;
      }
      return 62;
    }
    return 0;
  }
  result = 0;
  if ( *a2 == 97 && a2[1] == 109 )
  {
    v5 = 38;
    v6 = a2[2] - 112;
    return v6 == 0 ? v5 : 0;
  }
  return result;
}


//======================================================================
// sub_343DEC
// address: 0x00343DEC   size: 0xA0 (160 bytes)
//======================================================================
bool __fastcall sub_343DEC(int a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v3; // r4
  unsigned int v4; // r3
  unsigned __int8 *v5; // r3
  unsigned __int8 *v6; // r5
  int v7; // r3
  char v8; // r3
  _BOOL4 result; // r0
  unsigned int v10; // r3

  while ( 1 )
  {
    v3 = *a2;
    v4 = *(unsigned __int8 *)(a1 + v3 + 72);
    if ( v4 == 22 )
      goto LABEL_18;
    if ( v4 > 0x16 )
      break;
    if ( v4 != 6 )
    {
      if ( v4 != 7 )
      {
        if ( v4 != 5 )
          goto LABEL_20;
        goto LABEL_15;
      }
      ++a2;
      if ( *a3 != v3 )
        return false;
      ++a3;
    }
    if ( *a2 != *a3 )
      return false;
    ++a3;
    ++a2;
LABEL_15:
    if ( *a2 != *a3 )
      return false;
    v5 = a2 + 2;
    v6 = a3 + 2;
    if ( a2[1] != a3[1] )
      return false;
LABEL_17:
    a3 = v6;
    a2 = v5;
  }
  if ( v4 >= 0x18 && (v4 <= 0x1B || *(_BYTE *)(a1 + v3 + 72) == 29) )
  {
LABEL_18:
    v6 = a3 + 1;
    v5 = a2 + 1;
    if ( *a3 != v3 )
      return false;
    goto LABEL_17;
  }
LABEL_20:
  v7 = *a3;
  if ( v3 == v7 )
    return true;
  v8 = *(_BYTE *)(a1 + v7 + 72);
  result = true;
  v10 = (unsigned __int8)(v8 - 5);
  if ( v10 <= 0x18 )
    return ((1 << v10) & 0x17A0007) == 0;
  return result;
}


//======================================================================
// sub_343E90
// address: 0x00343E90   size: 0x24 (36 bytes)
//======================================================================
bool __fastcall sub_343E90(int a1, unsigned __int8 *a2, unsigned __int8 *a3, _BYTE *a4)
{
  while ( 1 )
  {
    if ( *a4 == 0 )
      return a2 == a3;
    if ( a2 == a3 || *a2 != (unsigned __int8)*a4 )
      break;
    ++a2;
    ++a4;
  }
  return false;
}


//======================================================================
// sub_343EB4
// address: 0x00343EB4   size: 0x46 (70 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_343EB4(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *i; // r3
  unsigned int v3; // r2

  for ( i = a2; ; ++i )
  {
    while ( 1 )
    {
      v3 = *(unsigned __int8 *)(a1 + *i + 72);
      if ( v3 == 22 )
        goto LABEL_14;
      if ( v3 > 0x16 )
        break;
      switch ( v3 )
      {
        case 6u:
          i += 3;
          break;
        case 7u:
          i += 4;
          break;
        case 5u:
          i += 2;
          break;
        default:
          return (unsigned __int8 *)(i - a2);
      }
    }
    if ( v3 < 0x18 || v3 > 0x1B && *(_BYTE *)(a1 + *i + 72) != 29 )
      break;
LABEL_14:
    ;
  }
  return (unsigned __int8 *)(i - a2);
}


//======================================================================
// sub_343EFC
// address: 0x00343EFC   size: 0x28 (40 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_343EFC(int a1, unsigned __int8 *a2)
{
  unsigned int v2; // r3

  while ( 1 )
  {
    v2 = (unsigned __int8)(*(_BYTE *)(a1 + *a2 + 72) - 9);
    if ( v2 > 0xC || ((1 << v2) & 0x1003) == 0 )
      break;
    ++a2;
  }
  return a2;
}


//======================================================================
// sub_343F28
// address: 0x00343F28   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_343F28(int result, unsigned __int8 *a2, unsigned __int8 *a3, int *a4)
{
  int v4; // r5
  int v5; // r0
  unsigned __int8 *v6; // r4

  v4 = result;
  while ( a2 != a3 )
  {
    switch ( *(_BYTE *)(v4 + *a2 + 72) )
    {
      case 5:
        a2 += 2;
        break;
      case 6:
        a2 += 3;
        break;
      case 7:
        a2 += 4;
        break;
      case 9:
        v6 = a2 + 1;
        ++*a4;
        if ( a2 + 1 != a3 && *(_BYTE *)(v4 + a2[1] + 72) == 10 )
          v6 = a2 + 2;
        a4[1] = -1;
        a2 = v6;
        break;
      case 0xA:
        v5 = *a4;
        a4[1] = -1;
        *a4 = v5 + 1;
        goto LABEL_12;
      default:
LABEL_12:
        ++a2;
        break;
    }
    result = a4[1] + 1;
    a4[1] = result;
  }
  return result;
}


//======================================================================
// sub_343F8E
// address: 0x00343F8E   size: 0x42 (66 bytes)
//======================================================================
char *__fastcall sub_343F8E(int a1, _DWORD *a2, char *i, _DWORD *a4, int a5)
{
  char *v5; // r4
  _BYTE *v6; // r5
  int v7; // r0
  char *result; // r0
  _BYTE *v9; // r6
  char v10; // r7

  v5 = (char *)*a2;
  v6 = (_BYTE *)*a4;
  v7 = a5 - *a4;
  if ( (int)&i[-*a2] > v7 )
  {
    for ( i = &v5[v7]; i > v5 && (*(i - 1) & 0xC0) == 0x80; --i )
      ;
  }
  result = (char *)*a2;
  v9 = (_BYTE *)*a4;
  while ( result != i )
  {
    v10 = *result++;
    *v9++ = v10;
  }
  *a2 = result;
  *a4 = &v6[result - v5];
  return result;
}


//======================================================================
// sub_343FD0
// address: 0x00343FD0   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall sub_343FD0(int a1, unsigned __int8 **a2, unsigned __int8 *a3, _WORD **a4, _WORD *a5)
{
  _WORD *v6; // r1
  unsigned __int8 *v7; // r2
  int result; // r0
  int v9; // r4
  int v10; // r5
  __int16 v11; // r4
  unsigned __int8 v12; // r5
  int v13; // r4
  unsigned __int8 v14; // r6
  unsigned __int64 v15; // r4

  v6 = *a4;
  v7 = *a2;
  result = 63;
  while ( v7 != a3 && v6 != a5 )
  {
    v9 = *v7;
    v10 = *(unsigned __int8 *)(a1 + v9 + 72);
    if ( v10 == 6 )
    {
      v11 = v7[2] & 0x3F | ((_WORD)v9 << 12);
      v12 = v7[1];
      v7 += 3;
      *v6 = v11 | ((v12 & 0x3F) << 6);
      goto LABEL_13;
    }
    if ( v10 == 7 )
    {
      if ( a5 == v6 + 1 )
        break;
      v13 = ((v9 & 7) << 18) | ((v7[1] & 0x3F) << 12) | v7[3] & 0x3F;
      v14 = v7[2];
      v7 += 4;
      v15 = (unsigned __int64)((v13 | ((unsigned __int8)(v14 & 0x3F) << 6)) - 0x10000) << 22;
      *v6 = WORD2(v15) | 0xD800;
      v6[1] = ((unsigned int)v15 >> 22) | 0xDC00;
      v6 += 2;
    }
    else
    {
      if ( v10 == 5 )
      {
        *v6 = ((v9 & 0x1F) << 6) | v7[1] & 0x3F;
        v7 += 2;
      }
      else
      {
        ++v7;
        *v6 = v9;
      }
LABEL_13:
      ++v6;
    }
  }
  *a2 = v7;
  *a4 = v6;
  return result;
}


//======================================================================
// sub_344090
// address: 0x00344090   size: 0x62 (98 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_344090(
        int a1,
        unsigned __int8 **a2,
        unsigned __int8 *a3,
        unsigned __int8 **a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *result; // r0
  unsigned int v6; // r6
  unsigned __int8 v7; // r4
  unsigned __int8 *v8; // r0
  unsigned __int8 *v9; // r4

  while ( 1 )
  {
    result = *a2;
    if ( *a2 == a3 )
      break;
    v6 = *result;
    v7 = *result;
    result = *a4;
    if ( (v7 & 0x80) != 0 )
    {
      if ( a5 - result <= 1 )
        return result;
      *a4 = result + 1;
      *result = (v6 >> 6) | 0xC0;
      v8 = (*a4)++;
      *v8 = v7 & 0x3F | 0x80;
      ++*a2;
    }
    else
    {
      if ( result == a5 )
        return result;
      *a4 = result + 1;
      v9 = (*a2)++;
      *result = *v9;
    }
  }
  return result;
}


//======================================================================
// sub_3440F2
// address: 0x003440F2   size: 0x22 (34 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_3440F2(
        int a1,
        unsigned __int8 **a2,
        unsigned __int8 *a3,
        unsigned __int8 **a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *result; // r0
  unsigned __int8 *v6; // r4

  while ( 1 )
  {
    result = *a2;
    if ( *a2 == a3 )
      break;
    result = *a4;
    if ( *a4 == a5 )
      break;
    *a4 = result + 2;
    v6 = (*a2)++;
    *(_WORD *)result = *v6;
  }
  return result;
}


//======================================================================
// sub_344114
// address: 0x00344114   size: 0x22 (34 bytes)
//======================================================================
_BYTE *__fastcall sub_344114(int a1, _BYTE **a2, _BYTE *a3, _BYTE **a4, _BYTE *a5)
{
  _BYTE *result; // r0
  _BYTE *v6; // r4

  while ( 1 )
  {
    result = *a2;
    if ( *a2 == a3 )
      break;
    result = *a4;
    if ( *a4 == a5 )
      break;
    *a4 = result + 1;
    v6 = (*a2)++;
    *result = *v6;
  }
  return result;
}


//======================================================================
// sub_344136
// address: 0x00344136   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_344136(unsigned int a1, unsigned int a2)
{
  if ( a1 > 0xDF )
  {
    if ( a1 != 255 )
      return 29;
    return a2 < 0xFE ? 0x1D : 0;
  }
  else
  {
    if ( a1 < 0xDC )
    {
      if ( a1 >= 0xD8 )
        return 7;
      return 29;
    }
    return 8;
  }
}


//======================================================================
// sub_344162
// address: 0x00344162   size: 0x136 (310 bytes)
//======================================================================
unsigned __int64 __fastcall sub_344162(unsigned int a1, unsigned __int8 **a2, unsigned int a3, _BYTE **a4, _BYTE *a5)
{
  unsigned __int8 *i; // r2
  unsigned int v6; // r5
  unsigned int v7; // r4
  _BYTE *v8; // r0
  _BYTE *v9; // r0
  int v10; // r5
  _BYTE *v11; // r0
  _BYTE *v12; // r5
  unsigned int v13; // r0
  _BYTE *v14; // r4
  unsigned __int64 v16; // [sp+0h] [bp-Ch]

  v16 = __PAIR64__(a3, a1);
  for ( i = *a2; i != (unsigned __int8 *)HIDWORD(v16); i += 2 )
  {
    v6 = i[1];
    v7 = *i;
    v8 = *a4;
    if ( v6 <= 7 )
    {
      if ( i[1] != 0 || (v7 & 0x80) != 0 )
      {
        if ( a5 - v8 <= 1 )
          break;
        *a4 = v8 + 1;
        LODWORD(v16) = v7 >> 6;
        *v8 = (v7 >> 6) | 0xC0 | (4 * v6);
        v8 = (*a4)++;
        LOBYTE(v7) = v7 & 0x3F | 0x80;
      }
      else
      {
        if ( v8 == a5 )
          break;
        *a4 = v8 + 1;
      }
LABEL_13:
      *v8 = v7;
      continue;
    }
    if ( (unsigned __int8)(v6 + 40) > 3u )
    {
      if ( a5 - v8 <= 2 )
        break;
      *a4 = v8 + 1;
      LODWORD(v16) = v6 >> 4;
      *v8 = (v6 >> 4) | 0xE0;
      v9 = (*a4)++;
      *v9 = (4 * (v6 & 0xF)) | (v7 >> 6) | 0x80;
      v8 = (*a4)++;
      LOBYTE(v7) = v7 & 0x3F | 0x80;
      goto LABEL_13;
    }
    if ( a5 - v8 <= 3 )
      break;
    *a4 = v8 + 1;
    v10 = ((4 * (v6 & 3)) | (v7 >> 6)) + 1;
    *v8 = (v10 >> 2) | 0xF0;
    v11 = *a4;
    i += 2;
    ++*a4;
    *v11 = (16 * (v10 & 3)) | (v7 >> 2) & 0xF | 0x80;
    v12 = *a4;
    v13 = *i;
    ++*a4;
    *v12 = (4 * (i[1] & 3)) | (v13 >> 6) | 0x80 | (16 * (v7 & 3));
    v14 = (*a4)++;
    *v14 = v13 & 0x3F | 0x80;
  }
  *a2 = i;
  return v16;
}


//======================================================================
// sub_344298
// address: 0x00344298   size: 0x48 (72 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_344298(
        int a1,
        unsigned __int8 **a2,
        unsigned __int8 *a3,
        unsigned __int8 **a4,
        unsigned __int8 *a5)
{
  unsigned __int8 *result; // r0

  if ( a3 - *a2 > 2 * ((a5 - *a4) >> 1) && (*(a3 - 1) & 0xF8) == 0xD8 )
    a3 -= 2;
  while ( 1 )
  {
    result = *a2;
    if ( *a2 == a3 )
      break;
    result = *a4;
    if ( *a4 == a5 )
      break;
    *a4 = result + 2;
    *(_WORD *)result = **a2 | ((*a2)[1] << 8);
    *a2 += 2;
  }
  return result;
}


//======================================================================
// sub_3442E0
// address: 0x003442E0   size: 0x136 (310 bytes)
//======================================================================
unsigned __int64 __fastcall sub_3442E0(unsigned int a1, unsigned __int8 **a2, unsigned int a3, _BYTE **a4, _BYTE *a5)
{
  unsigned __int8 *i; // r2
  unsigned int v6; // r5
  unsigned int v7; // r4
  _BYTE *v8; // r0
  _BYTE *v9; // r0
  int v10; // r5
  _BYTE *v11; // r0
  _BYTE *v12; // r5
  unsigned int v13; // r0
  _BYTE *v14; // r4
  unsigned __int64 v16; // [sp+0h] [bp-Ch]

  v16 = __PAIR64__(a3, a1);
  for ( i = *a2; i != (unsigned __int8 *)HIDWORD(v16); i += 2 )
  {
    v6 = *i;
    v7 = i[1];
    v8 = *a4;
    if ( v6 <= 7 )
    {
      if ( *i != 0 || (v7 & 0x80) != 0 )
      {
        if ( a5 - v8 <= 1 )
          break;
        *a4 = v8 + 1;
        LODWORD(v16) = v7 >> 6;
        *v8 = (v7 >> 6) | 0xC0 | (4 * v6);
        v8 = (*a4)++;
        LOBYTE(v7) = v7 & 0x3F | 0x80;
      }
      else
      {
        if ( v8 == a5 )
          break;
        *a4 = v8 + 1;
      }
LABEL_13:
      *v8 = v7;
      continue;
    }
    if ( (unsigned __int8)(v6 + 40) > 3u )
    {
      if ( a5 - v8 <= 2 )
        break;
      *a4 = v8 + 1;
      LODWORD(v16) = v6 >> 4;
      *v8 = (v6 >> 4) | 0xE0;
      v9 = (*a4)++;
      *v9 = (4 * (v6 & 0xF)) | (v7 >> 6) | 0x80;
      v8 = (*a4)++;
      LOBYTE(v7) = v7 & 0x3F | 0x80;
      goto LABEL_13;
    }
    if ( a5 - v8 <= 3 )
      break;
    *a4 = v8 + 1;
    v10 = ((4 * (v6 & 3)) | (v7 >> 6)) + 1;
    *v8 = (v10 >> 2) | 0xF0;
    v11 = *a4;
    i += 2;
    ++*a4;
    *v11 = (16 * (v10 & 3)) | (v7 >> 2) & 0xF | 0x80;
    v12 = *a4;
    v13 = i[1];
    ++*a4;
    *v12 = (4 * (*i & 3)) | (v13 >> 6) | 0x80 | (16 * (v7 & 3));
    v14 = (*a4)++;
    *v14 = v13 & 0x3F | 0x80;
  }
  *a2 = i;
  return v16;
}


//======================================================================
// sub_344416
// address: 0x00344416   size: 0x48 (72 bytes)
//======================================================================
unsigned __int16 *__fastcall sub_344416(
        int a1,
        unsigned __int16 **a2,
        unsigned __int16 *a3,
        unsigned __int16 **a4,
        unsigned __int16 *a5)
{
  unsigned __int16 *result; // r0

  if ( (char *)a3 - (char *)*a2 > 2 * (a5 - *a4) && (*(_BYTE *)(a3 - 1) & 0xF8) == 0xD8 )
    --a3;
  while ( 1 )
  {
    result = *a2;
    if ( *a2 == a3 )
      break;
    result = *a4;
    if ( *a4 == a5 )
      break;
    *a4 = result + 1;
    *result = _byteswap_ushort(*(*a2)++);
  }
  return result;
}


//======================================================================
// sub_34445E
// address: 0x0034445E   size: 0x134 (308 bytes)
//======================================================================
int __fastcall sub_34445E(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r6
  int v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  unsigned __int8 *v11; // r5
  int result; // r0
  unsigned __int8 *v13; // r5
  unsigned int v14; // r1
  int v15; // r3
  unsigned int v16; // r1
  int v17; // r0
  int v18; // r0

  v5 = a3;
  if ( a2 == a3 )
  {
    v18 = 4;
    return -v18;
  }
  v7 = a3 - a2;
  if ( ((a3 - a2) & 1) != 0 )
  {
    if ( (v7 & 0xFFFFFFFE) == 0 )
    {
LABEL_47:
      v18 = 1;
      return -v18;
    }
    v5 = &a2[v7 & 0xFFFFFFFE];
  }
  v8 = a2[1];
  v9 = *a2;
  if ( a2[1] != 0 )
    v10 = sub_344136(v8, v9);
  else
    v10 = *(unsigned __int8 *)(a1 + v9 + 72);
  switch ( v10 )
  {
    case 0:
    case 1:
    case 8:
      *a4 = a2;
      return 0;
    case 4:
      v11 = a2 + 2;
      if ( a2 + 2 == v5 )
        goto LABEL_47;
      if ( a2[3] != 0 || a2[2] != 93 )
        goto LABEL_36;
      if ( v5 == a2 + 4 )
        goto LABEL_47;
      if ( a2[5] != 0 || a2[4] != 62 )
        goto LABEL_36;
      *a4 = a2 + 6;
      return 40;
    case 5:
      if ( v5 - a2 > 1 )
        goto LABEL_33;
      goto LABEL_48;
    case 6:
      if ( v5 - a2 <= 2 )
        goto LABEL_48;
      v11 = a2 + 3;
      goto LABEL_36;
    case 7:
      if ( v5 - a2 <= 3 )
      {
LABEL_48:
        v18 = 2;
        return -v18;
      }
      v11 = a2 + 4;
LABEL_36:
      while ( v11 != v5 )
      {
        v16 = *v11;
        if ( v11[1] != 0 )
          v17 = sub_344136(v11[1], v16);
        else
          v17 = *(unsigned __int8 *)(a1 + v16 + 72);
        switch ( v17 )
        {
          case 0:
          case 1:
          case 4:
          case 8:
          case 9:
          case 10:
            goto LABEL_46;
          case 5:
            if ( v5 - v11 > 1 )
              goto LABEL_45;
            goto LABEL_46;
          case 6:
            if ( v5 - v11 <= 2 )
              goto LABEL_46;
            v11 += 3;
            break;
          case 7:
            if ( v5 - v11 <= 3 )
              goto LABEL_46;
            v11 += 4;
            break;
          default:
LABEL_45:
            v11 += 2;
            continue;
        }
      }
LABEL_46:
      *a4 = v11;
      result = 6;
      break;
    case 9:
      v13 = a2 + 2;
      if ( a2 + 2 == v5 )
        goto LABEL_47;
      v14 = a2[2];
      if ( a2[3] != 0 )
        v15 = sub_344136(a2[3], v14);
      else
        v15 = *(unsigned __int8 *)(a1 + v14 + 72);
      if ( v15 == 10 )
        v13 = a2 + 4;
      *a4 = v13;
      return 7;
    case 10:
      *a4 = a2 + 2;
      return 7;
    default:
LABEL_33:
      v11 = a2 + 2;
      goto LABEL_36;
  }
  return result;
}


//======================================================================
// sub_344594
// address: 0x00344594   size: 0x1D2 (466 bytes)
//======================================================================
int __fastcall sub_344594(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  int v6; // r7
  unsigned int v7; // r6
  int v8; // r0
  unsigned __int8 *v9; // r6
  unsigned int v10; // r1
  unsigned int v11; // r1
  int v12; // r0
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  int result; // r0
  int v19; // r6
  unsigned int v20; // r7
  int v21; // r0
  int v22; // r0

  v4 = a2;
  if ( a2 == a3 )
    goto LABEL_61;
  v6 = a2[1];
  v7 = *a2;
  if ( a2[1] != 0 )
    v8 = sub_344136(a2[1], *a2);
  else
    v8 = *(unsigned __int8 *)(a1 + v7 + 72);
  if ( v8 != 19 )
  {
    if ( v8 <= 19 )
    {
      switch ( v8 )
      {
        case 6:
LABEL_47:
          if ( a3 - v4 <= 2 )
          {
LABEL_62:
            v22 = 2;
            return -v22;
          }
          break;
        case 7:
LABEL_50:
          if ( a3 - v4 <= 3 )
            goto LABEL_62;
          break;
        case 5:
LABEL_45:
          if ( a3 - v4 <= 1 )
            goto LABEL_62;
          break;
        default:
          break;
      }
      goto LABEL_48;
    }
    if ( v8 != 24 )
    {
      if ( v8 != 29 )
      {
        if ( v8 == 22 )
          goto LABEL_16;
LABEL_48:
        *a4 = v4;
        return 0;
      }
      if ( (dword_44A1B8[8 * byte_44A7B8[v6] + (v7 >> 5)] & (1 << (v7 & 0x1F))) == 0 )
        goto LABEL_48;
    }
LABEL_16:
    v4 += 2;
    while ( 1 )
    {
      if ( v4 == a3 )
        goto LABEL_61;
      v19 = v4[1];
      v20 = *v4;
      if ( v4[1] != 0 )
        v21 = sub_344136(v4[1], *v4);
      else
        v21 = *(unsigned __int8 *)(a1 + v20 + 72);
      switch ( v21 )
      {
        case 5:
          goto LABEL_45;
        case 6:
          goto LABEL_47;
        case 7:
          goto LABEL_50;
        case 18:
          *a4 = v4 + 2;
          return 9;
        case 22:
        case 24:
        case 25:
        case 26:
        case 27:
          goto LABEL_52;
        case 29:
          result = dword_44A1B8[8 * byte_44A6B8[v19] + (v20 >> 5)] & (1 << (v20 & 0x1F));
          if ( result == 0 )
          {
            *a4 = v4;
            return result;
          }
LABEL_52:
          v4 += 2;
          break;
        default:
          goto LABEL_48;
      }
    }
  }
  v9 = v4 + 2;
  if ( v4 + 2 == a3 )
    goto LABEL_61;
  v10 = v4[2];
  if ( v4[3] != 0 )
  {
    v15 = sub_344136(v4[3], v10);
LABEL_35:
    v4 += 4;
    if ( v15 == 25 )
    {
      while ( v4 != a3 )
      {
        v16 = *v4;
        if ( v4[1] != 0 )
          v17 = sub_344136(v4[1], v16);
        else
          v17 = *(unsigned __int8 *)(a1 + v16 + 72);
        if ( v17 == 18 )
        {
LABEL_43:
          *a4 = v4 + 2;
          return 10;
        }
        if ( v17 != 25 )
          goto LABEL_48;
        v4 += 2;
      }
      goto LABEL_61;
    }
    goto LABEL_36;
  }
  if ( v10 != 120 )
  {
    v15 = *(unsigned __int8 *)(a1 + v10 + 72);
    goto LABEL_35;
  }
  v9 = v4 + 4;
  if ( v4 + 4 != a3 )
  {
    v11 = v4[4];
    if ( v4[5] != 0 )
      v12 = sub_344136(v4[5], v11);
    else
      v12 = *(unsigned __int8 *)(a1 + v11 + 72);
    v4 += 6;
    if ( (unsigned int)(v12 - 24) <= 1 )
    {
      while ( v4 != a3 )
      {
        v13 = *v4;
        if ( v4[1] != 0 )
          v14 = sub_344136(v4[1], v13);
        else
          v14 = *(unsigned __int8 *)(a1 + v13 + 72);
        if ( v14 == 18 )
          goto LABEL_43;
        if ( v14 < 18 || (unsigned int)(v14 - 24) > 1 )
          goto LABEL_48;
        v4 += 2;
      }
      goto LABEL_61;
    }
LABEL_36:
    *a4 = v9;
    return 0;
  }
LABEL_61:
  v22 = 1;
  return -v22;
}


//======================================================================
// sub_344778
// address: 0x00344778   size: 0x12A (298 bytes)
//======================================================================
int __fastcall sub_344778(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  int v6; // r7
  unsigned int v7; // r6
  int v8; // r0
  int result; // r0
  int v10; // r6
  unsigned int v11; // r7
  int v12; // r0
  int v13; // r0

  v4 = a2;
  if ( a2 == a3 )
  {
    v13 = 22;
  }
  else
  {
    v6 = a2[1];
    v7 = *a2;
    if ( a2[1] != 0 )
      v8 = sub_344136(a2[1], *a2);
    else
      v8 = *(unsigned __int8 *)(a1 + v7 + 72);
    switch ( v8 )
    {
      case 5:
LABEL_10:
        if ( a3 - v4 <= 1 )
          goto LABEL_28;
        goto LABEL_21;
      case 6:
LABEL_12:
        if ( a3 - v4 <= 2 )
          goto LABEL_28;
        goto LABEL_21;
      case 7:
LABEL_14:
        if ( a3 - v4 > 3 )
          goto LABEL_21;
LABEL_28:
        v13 = 2;
        return -v13;
      case 9:
      case 10:
      case 21:
      case 30:
        *a4 = v4;
        return 22;
      case 22:
      case 24:
        goto LABEL_8;
      case 29:
        if ( (dword_44A1B8[8 * byte_44A7B8[v6] + (v7 >> 5)] & (1 << (v7 & 0x1F))) == 0 )
          goto LABEL_21;
LABEL_8:
        v4 += 2;
        break;
      default:
LABEL_21:
        *a4 = v4;
        return 0;
    }
    while ( v4 != a3 )
    {
      v10 = v4[1];
      v11 = *v4;
      if ( v4[1] != 0 )
        v12 = sub_344136(v4[1], *v4);
      else
        v12 = *(unsigned __int8 *)(a1 + v11 + 72);
      switch ( v12 )
      {
        case 5:
          goto LABEL_10;
        case 6:
          goto LABEL_12;
        case 7:
          goto LABEL_14;
        case 18:
          *a4 = v4 + 2;
          return 28;
        case 22:
        case 24:
        case 25:
        case 26:
        case 27:
          goto LABEL_16;
        case 29:
          result = dword_44A1B8[8 * byte_44A6B8[v10] + (v11 >> 5)] & (1 << (v11 & 0x1F));
          if ( result == 0 )
          {
            *a4 = v4;
            return result;
          }
LABEL_16:
          v4 += 2;
          break;
        default:
          goto LABEL_21;
      }
    }
    v13 = 1;
  }
  return -v13;
}


//======================================================================
// sub_3448B4
// address: 0x003448B4   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall sub_3448B4(int a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, unsigned __int8 **a5)
{
  unsigned int v9; // r1
  int v10; // r2
  unsigned __int8 *v11; // r3
  int result; // r0
  unsigned int v13; // r1
  int v14; // r0
  unsigned int v15; // r3
  int v16; // r0

  while ( a3 != a4 )
  {
    v9 = *a3;
    if ( a3[1] != 0 )
      v10 = sub_344136(a3[1], v9);
    else
      v10 = *(unsigned __int8 *)(a2 + v9 + 72);
    switch ( v10 )
    {
      case 0:
      case 1:
      case 8:
        *a5 = a3;
        return 0;
      case 5:
        if ( a4 - a3 > 1 )
          goto LABEL_21;
        goto LABEL_24;
      case 6:
        if ( a4 - a3 <= 2 )
          goto LABEL_24;
        v11 = a3 + 3;
        goto LABEL_22;
      case 7:
        if ( a4 - a3 <= 3 )
        {
LABEL_24:
          v16 = 2;
          return -v16;
        }
        v11 = a3 + 4;
LABEL_22:
        a3 = v11;
        break;
      case 12:
      case 13:
        v11 = a3 + 2;
        if ( v10 != a1 )
          goto LABEL_22;
        if ( v11 == a4 )
        {
          v16 = 27;
          return -v16;
        }
        *a5 = v11;
        v13 = a3[2];
        if ( a3[3] != 0 )
          v14 = sub_344136(a3[3], v13);
        else
          v14 = *(unsigned __int8 *)(a2 + v13 + 72);
        v15 = v14 - 9;
        result = 0;
        if ( v15 <= 0x15 && ((1 << v15) & 0x201807) != 0 )
          return 27;
        return result;
      default:
LABEL_21:
        v11 = a3 + 2;
        goto LABEL_22;
    }
  }
  v16 = 1;
  return -v16;
}


//======================================================================
// sub_344968
// address: 0x00344968   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall sub_344968(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v7; // r4
  unsigned int v8; // r1
  int v9; // r0
  int result; // r0
  unsigned __int8 *v11; // r6
  unsigned int v12; // r1
  int v13; // r3
  int v14; // r0

  if ( a2 == a3 )
  {
    v14 = 4;
    return -v14;
  }
  else
  {
    v7 = a2;
    while ( 2 )
    {
      v8 = *v7;
      if ( v7[1] != 0 )
        v9 = sub_344136(v7[1], v8);
      else
        v9 = *(unsigned __int8 *)(a1 + v8 + 72);
      switch ( v9 )
      {
        case 2:
          *a4 = v7;
          return 0;
        case 3:
          if ( v7 != a2 )
            goto LABEL_27;
          return sub_344594(a1, v7 + 2, a3, a4);
        case 6:
          v7 += 3;
          goto LABEL_26;
        case 7:
          v7 += 4;
          goto LABEL_26;
        case 9:
          if ( v7 != a2 )
            goto LABEL_27;
          v11 = v7 + 2;
          if ( v7 + 2 == a3 )
          {
            v14 = 3;
            return -v14;
          }
          v12 = v7[2];
          if ( v7[3] != 0 )
            v13 = sub_344136(v7[3], v12);
          else
            v13 = *(unsigned __int8 *)(a1 + v12 + 72);
          if ( v13 == 10 )
            v11 = v7 + 4;
          *a4 = v11;
LABEL_22:
          result = 7;
          break;
        case 10:
          if ( v7 != a2 )
            goto LABEL_27;
          *a4 = v7 + 2;
          goto LABEL_22;
        case 21:
          if ( v7 != a2 )
            goto LABEL_27;
          *a4 = v7 + 2;
          return 39;
        default:
          v7 += 2;
LABEL_26:
          if ( v7 != a3 )
            continue;
LABEL_27:
          *a4 = v7;
          return 6;
      }
      break;
    }
  }
  return result;
}


//======================================================================
// sub_344A2C
// address: 0x00344A2C   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall sub_344A2C(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v7; // r4
  unsigned int v8; // r1
  int v9; // r0
  int v11; // r0
  unsigned __int8 *v12; // r6
  unsigned int v13; // r1
  int v14; // r3
  int v15; // r0

  if ( a2 != a3 )
  {
    v7 = a2;
    while ( 1 )
    {
      v8 = *v7;
      if ( v7[1] != 0 )
        v9 = sub_344136(v7[1], v8);
      else
        v9 = *(unsigned __int8 *)(a1 + v8 + 72);
      if ( v9 == 7 )
      {
        v7 += 4;
      }
      else
      {
        if ( v9 > 7 )
        {
          switch ( v9 )
          {
            case 10:
              if ( v7 == a2 )
              {
                *a4 = v7 + 2;
                return 7;
              }
              goto LABEL_35;
            case 30:
              if ( v7 == a2 )
              {
                v11 = sub_344778(a1, v7 + 2, a3, a4);
                return v11 != 22 ? v11 : 0;
              }
              goto LABEL_35;
            case 9:
              if ( v7 == a2 )
              {
                v12 = v7 + 2;
                if ( v7 + 2 != a3 )
                {
                  v13 = v7[2];
                  if ( v7[3] != 0 )
                    v14 = sub_344136(v7[3], v13);
                  else
                    v14 = *(unsigned __int8 *)(a1 + v13 + 72);
                  if ( v14 == 10 )
                    v12 = v7 + 4;
                  *a4 = v12;
                  return 7;
                }
                v15 = 3;
                return -v15;
              }
LABEL_35:
              *a4 = v7;
              return 6;
            default:
              break;
          }
          goto LABEL_33;
        }
        if ( v9 == 5 )
          goto LABEL_33;
        if ( v9 <= 5 )
        {
          if ( v9 == 3 )
          {
            if ( v7 == a2 )
              return sub_344594(a1, v7 + 2, a3, a4);
            goto LABEL_35;
          }
LABEL_33:
          v7 += 2;
          goto LABEL_34;
        }
        v7 += 3;
      }
LABEL_34:
      if ( v7 == a3 )
        goto LABEL_35;
    }
  }
  v15 = 4;
  return -v15;
}


//======================================================================
// sub_344B00
// address: 0x00344B00   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_344B00(int a1, int a2, int a3, unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r4
  int v6; // r6
  int v7; // r5
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  unsigned __int8 *v12; // [sp+0h] [bp-Ch]

  v5 = (unsigned __int8 *)(a2 + 2);
  v12 = (unsigned __int8 *)(a3 - 2);
  while ( v5 != v12 )
  {
    v6 = v5[1];
    v7 = *v5;
    if ( v5[1] != 0 )
      v8 = sub_344136(v5[1], *v5);
    else
      v8 = *(unsigned __int8 *)(a1 + v7 + 72);
    v9 = v8 - 9;
    if ( v9 <= 0x1A )
    {
      v10 = 1 << v9;
      if ( (v10 & 0x7E587F3) != 0 )
        goto LABEL_20;
      if ( (v10 & 0x22000) != 0 )
      {
        if ( v6 != 0 )
          goto LABEL_19;
        if ( (v7 & 0xFFFFFF80) == 0 )
          goto LABEL_20;
        goto LABEL_17;
      }
      if ( (v10 & 0x1000) != 0 )
      {
        if ( v6 == 0 && v7 == 9 )
          goto LABEL_19;
        goto LABEL_20;
      }
    }
    if ( v6 != 0 )
      goto LABEL_19;
LABEL_17:
    if ( v7 != 36 && (unsigned __int8)v7 != 64 )
    {
LABEL_19:
      *a4 = v5;
      return 0;
    }
LABEL_20:
    v5 += 2;
  }
  return 1;
}


//======================================================================
// sub_344B84
// address: 0x00344B84   size: 0x1A8 (424 bytes)
//======================================================================
int __fastcall sub_344B84(int a1, int a2, int a3, int a4)
{
  unsigned __int8 *v4; // r6
  int v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  unsigned int v13; // r1
  int v14; // r0
  int v17; // [sp+Ch] [bp-18h]
  unsigned int v18; // [sp+10h] [bp-14h]
  int v19; // [sp+14h] [bp-10h]
  unsigned int v20; // [sp+18h] [bp-Ch]

  v4 = (unsigned __int8 *)(a2 + 2);
  v17 = 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    v18 = v4[1];
    v20 = *v4;
    if ( v4[1] != 0 )
      v8 = sub_344136(v18, v20);
    else
      v8 = *(unsigned __int8 *)(a1 + *v4 + 72);
    switch ( v8 )
    {
      case 3:
        if ( v6 < a3 )
          *(_BYTE *)(a4 + 16 * v6 + 12) = 0;
        goto LABEL_61;
      case 5:
        if ( v7 != 0 )
          goto LABEL_61;
        v7 = 1;
        if ( v6 >= a3 )
          goto LABEL_61;
        v9 = a4 + 16 * v6;
        goto LABEL_20;
      case 6:
        if ( v7 == 0 )
        {
          v7 = 1;
          if ( v6 < a3 )
          {
            v10 = a4 + 16 * v6;
            *(_DWORD *)v10 = v4;
            *(_BYTE *)(v10 + 12) = 1;
          }
        }
        ++v4;
        goto LABEL_61;
      case 7:
        if ( v7 == 0 )
        {
          v7 = 1;
          if ( v6 < a3 )
          {
            v11 = a4 + 16 * v6;
            *(_DWORD *)v11 = v4;
            *(_BYTE *)(v11 + 12) = 1;
          }
        }
        v4 += 2;
        goto LABEL_61;
      case 9:
      case 10:
        if ( v7 == 1 )
          goto LABEL_60;
        if ( v7 == 2 && v6 < a3 )
          *(_BYTE *)(a4 + 16 * v6 + 12) = 0;
        goto LABEL_61;
      case 11:
      case 17:
        if ( v7 == 2 )
          goto LABEL_61;
        return v6;
      case 12:
        if ( v7 != 2 )
        {
          if ( v6 < a3 )
            *(_DWORD *)(a4 + 16 * v6 + 4) = v4 + 2;
          v17 = 12;
          goto LABEL_59;
        }
        if ( v17 != 12 )
          goto LABEL_61;
        if ( v6 < a3 )
        {
          v12 = a4 + 16 * v6;
          goto LABEL_34;
        }
        goto LABEL_35;
      case 13:
        if ( v7 == 2 )
        {
          if ( v17 == 13 )
          {
            if ( v6 < a3 )
            {
              v12 = a4 + 16 * v6;
LABEL_34:
              *(_DWORD *)(v12 + 8) = v4;
            }
LABEL_35:
            ++v6;
LABEL_60:
            v7 = 0;
          }
        }
        else
        {
          if ( v6 < a3 )
            *(_DWORD *)(a4 + 16 * v6 + 4) = v4 + 2;
          v17 = 13;
LABEL_59:
          v7 = 2;
        }
        goto LABEL_61;
      case 21:
        if ( v7 == 1 )
          goto LABEL_60;
        if ( v7 != 2 )
          goto LABEL_61;
        if ( v6 >= a3 )
          goto LABEL_61;
        v19 = a4 + 16 * v6;
        if ( *(_BYTE *)(v19 + 12) != 0 )
        {
          if ( v4 != *(unsigned __int8 **)(v19 + 4) && v18 == 0 && v20 == 32 )
          {
            v13 = v4[2];
            if ( v4[3] != 0 )
            {
              v14 = sub_344136(v4[3], v13);
            }
            else
            {
              if ( v13 == 32 )
                goto LABEL_50;
              v14 = *(unsigned __int8 *)(a1 + v13 + 72);
            }
            if ( v14 != v17 )
              goto LABEL_61;
          }
LABEL_50:
          *(_BYTE *)(v19 + 12) = 0;
        }
LABEL_61:
        v4 += 2;
        break;
      case 22:
      case 24:
      case 29:
        if ( v7 != 0 )
          goto LABEL_61;
        v7 = 1;
        if ( v6 >= a3 )
          goto LABEL_61;
        v9 = a4 + 16 * v6;
LABEL_20:
        *(_DWORD *)v9 = v4;
        *(_BYTE *)(v9 + 12) = 1;
        goto LABEL_61;
      default:
        goto LABEL_61;
    }
  }
}


//======================================================================
// sub_344D2C
// address: 0x00344D2C   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall sub_344D2C(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r2
  int result; // r0
  int v5; // r0
  int v6; // r3

  v3 = (a3 - (int)a2) / 2;
  if ( v3 == 3 )
  {
    result = 0;
    if ( a2[1] == 0 && *a2 == 97 && a2[3] == 0 && a2[2] == 109 && a2[5] == 0 )
    {
      v5 = 38;
      v6 = a2[4] - 112;
      return v6 == 0 ? v5 : 0;
    }
  }
  else if ( v3 == 4 )
  {
    result = 0;
    if ( a2[1] != 0 )
      return result;
    if ( *a2 == 97 )
    {
      if ( a2[3] == 0 && a2[2] == 112 && a2[5] == 0 && a2[4] == 111 && a2[7] == 0 )
      {
        v5 = 39;
        v6 = a2[6] - 115;
        return v6 == 0 ? v5 : 0;
      }
    }
    else if ( *a2 == 113 && a2[3] == 0 && a2[2] == 117 && a2[5] == 0 && a2[4] == 111 && a2[7] == 0 )
    {
      v5 = 34;
      v6 = a2[6] - 116;
      return v6 == 0 ? v5 : 0;
    }
  }
  else
  {
    result = 0;
    if ( v3 == 2 )
    {
      result = 0;
      if ( a2[3] == 0 && a2[2] == 116 && a2[1] == 0 )
      {
        result = 62;
        if ( *a2 != 103 )
        {
          v5 = 60;
          v6 = *a2 - 108;
          return v6 == 0 ? v5 : 0;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_344E00
// address: 0x00344E00   size: 0xBA (186 bytes)
//======================================================================
bool __fastcall sub_344E00(int a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v5; // r7
  int v6; // r6
  int v7; // r0
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r2
  unsigned int v10; // r1
  int v11; // r0
  unsigned int v12; // r3
  _BOOL4 result; // r0

  while ( 1 )
  {
    v5 = a2[1];
    v6 = *a2;
    v7 = a2[1] != 0 ? sub_344136(a2[1], *a2) : *(unsigned __int8 *)(a1 + v6 + 72);
    if ( v7 != 22 )
    {
      if ( v7 <= 22 )
      {
        if ( v7 != 6 )
        {
          if ( v7 != 7 )
          {
            if ( v7 != 5 )
              break;
            goto LABEL_18;
          }
          ++a2;
          if ( v6 != *a3 )
            return false;
          ++a3;
        }
        if ( *a2 != *a3 )
          return false;
        ++a3;
        ++a2;
LABEL_18:
        if ( *a2 != *a3 )
          return false;
        v8 = a2 + 2;
        v9 = a3 + 2;
        if ( a2[1] != a3[1] )
          return false;
        goto LABEL_20;
      }
      if ( v7 < 24 || v7 > 27 && v7 != 29 )
        break;
    }
    if ( *a3 != v6 )
      return false;
    v9 = a3 + 2;
    v8 = a2 + 2;
    if ( a3[1] != v5 )
      return false;
LABEL_20:
    a3 = v9;
    a2 = v8;
  }
  v10 = *a3;
  if ( a3[1] != 0 )
    v11 = sub_344136(a3[1], v10);
  else
    v11 = *(unsigned __int8 *)(a1 + v10 + 72);
  v12 = v11 - 5;
  result = true;
  if ( v12 <= 0x18 )
    return ((1 << v12) & 0x17A0007) == 0;
  return result;
}


//======================================================================
// sub_344EC0
// address: 0x00344EC0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_344EC0(int a1, unsigned __int8 *a2, unsigned __int8 *a3, _BYTE *a4)
{
  int result; // r0

  while ( 1 )
  {
    if ( *a4 == 0 )
      return a2 == a3;
    if ( a2 == a3 )
      break;
    result = a2[1];
    if ( a2[1] != 0 )
      break;
    if ( *a2 != (unsigned __int8)*a4 )
      return result;
    a2 += 2;
    ++a4;
  }
  return 0;
}


//======================================================================
// sub_344EEA
// address: 0x00344EEA   size: 0x4E (78 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_344EEA(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v4; // r4
  unsigned int v5; // r1
  int v6; // r0

  v4 = a2;
  while ( 1 )
  {
    v5 = *v4;
    if ( v4[1] != 0 )
      v6 = sub_344136(v4[1], v5);
    else
      v6 = *(unsigned __int8 *)(a1 + v5 + 72);
    if ( v6 == 22 )
      goto LABEL_17;
    if ( v6 > 22 )
      break;
    switch ( v6 )
    {
      case 6:
        v4 += 3;
        break;
      case 7:
        v4 += 4;
        break;
      case 5:
LABEL_17:
        v4 += 2;
        break;
      default:
        return (unsigned __int8 *)(v4 - a2);
    }
  }
  if ( v6 >= 24 && (v6 <= 27 || v6 == 29) )
    goto LABEL_17;
  return (unsigned __int8 *)(v4 - a2);
}


//======================================================================
// sub_344F38
// address: 0x00344F38   size: 0x34 (52 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_344F38(int a1, unsigned __int8 *a2)
{
  unsigned int v4; // r1
  int v5; // r0
  unsigned int v6; // r0

  while ( 1 )
  {
    v4 = *a2;
    v5 = a2[1] != 0 ? sub_344136(a2[1], v4) : *(unsigned __int8 *)(a1 + v4 + 72);
    v6 = v5 - 9;
    if ( v6 > 0xC || ((1 << v6) & 0x1003) == 0 )
      break;
    a2 += 2;
  }
  return a2;
}


//======================================================================
// sub_344F70
// address: 0x00344F70   size: 0x90 (144 bytes)
//======================================================================
unsigned __int64 __fastcall sub_344F70(unsigned int a1, unsigned __int8 *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v7; // r1
  int v8; // r0
  unsigned __int8 *v9; // r6
  unsigned int v10; // r1
  int v11; // r3
  unsigned __int64 v13; // [sp+0h] [bp-Ch]

  v13 = __PAIR64__(a3, a1);
  while ( a2 != (unsigned __int8 *)HIDWORD(v13) )
  {
    v7 = *a2;
    if ( a2[1] != 0 )
      v8 = sub_344136(a2[1], v7);
    else
      v8 = *(unsigned __int8 *)(a1 + v7 + 72);
    switch ( v8 )
    {
      case 6:
        a2 += 3;
        break;
      case 7:
        a2 += 4;
        break;
      case 9:
        v9 = a2 + 2;
        ++*a4;
        if ( a2 + 2 != (unsigned __int8 *)HIDWORD(v13) )
        {
          v10 = a2[2];
          if ( a2[3] != 0 )
            v11 = sub_344136(a2[3], v10);
          else
            v11 = *(unsigned __int8 *)(a1 + v10 + 72);
          if ( v11 == 10 )
            v9 = a2 + 4;
        }
        a4[1] = -1;
        a2 = v9;
        break;
      case 10:
        a4[1] = -1;
        ++*a4;
        goto LABEL_17;
      default:
LABEL_17:
        a2 += 2;
        break;
    }
    ++a4[1];
  }
  return v13;
}


//======================================================================
// sub_345000
// address: 0x00345000   size: 0x134 (308 bytes)
//======================================================================
int __fastcall sub_345000(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r6
  int v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  unsigned __int8 *v11; // r5
  int result; // r0
  unsigned __int8 *v13; // r5
  unsigned int v14; // r1
  int v15; // r3
  unsigned int v16; // r1
  int v17; // r0
  int v18; // r0

  v5 = a3;
  if ( a2 == a3 )
  {
    v18 = 4;
    return -v18;
  }
  v7 = a3 - a2;
  if ( ((a3 - a2) & 1) != 0 )
  {
    if ( (v7 & 0xFFFFFFFE) == 0 )
    {
LABEL_47:
      v18 = 1;
      return -v18;
    }
    v5 = &a2[v7 & 0xFFFFFFFE];
  }
  v8 = *a2;
  v9 = a2[1];
  if ( *a2 != 0 )
    v10 = sub_344136(v8, v9);
  else
    v10 = *(unsigned __int8 *)(a1 + v9 + 72);
  switch ( v10 )
  {
    case 0:
    case 1:
    case 8:
      *a4 = a2;
      return 0;
    case 4:
      v11 = a2 + 2;
      if ( a2 + 2 == v5 )
        goto LABEL_47;
      if ( a2[2] != 0 || a2[3] != 93 )
        goto LABEL_36;
      if ( v5 == a2 + 4 )
        goto LABEL_47;
      if ( a2[4] != 0 || a2[5] != 62 )
        goto LABEL_36;
      *a4 = a2 + 6;
      return 40;
    case 5:
      if ( v5 - a2 > 1 )
        goto LABEL_33;
      goto LABEL_48;
    case 6:
      if ( v5 - a2 <= 2 )
        goto LABEL_48;
      v11 = a2 + 3;
      goto LABEL_36;
    case 7:
      if ( v5 - a2 <= 3 )
      {
LABEL_48:
        v18 = 2;
        return -v18;
      }
      v11 = a2 + 4;
LABEL_36:
      while ( v11 != v5 )
      {
        v16 = v11[1];
        if ( *v11 != 0 )
          v17 = sub_344136(*v11, v16);
        else
          v17 = *(unsigned __int8 *)(a1 + v16 + 72);
        switch ( v17 )
        {
          case 0:
          case 1:
          case 4:
          case 8:
          case 9:
          case 10:
            goto LABEL_46;
          case 5:
            if ( v5 - v11 > 1 )
              goto LABEL_45;
            goto LABEL_46;
          case 6:
            if ( v5 - v11 <= 2 )
              goto LABEL_46;
            v11 += 3;
            break;
          case 7:
            if ( v5 - v11 <= 3 )
              goto LABEL_46;
            v11 += 4;
            break;
          default:
LABEL_45:
            v11 += 2;
            continue;
        }
      }
LABEL_46:
      *a4 = v11;
      result = 6;
      break;
    case 9:
      v13 = a2 + 2;
      if ( a2 + 2 == v5 )
        goto LABEL_47;
      v14 = a2[3];
      if ( a2[2] != 0 )
        v15 = sub_344136(a2[2], v14);
      else
        v15 = *(unsigned __int8 *)(a1 + v14 + 72);
      if ( v15 == 10 )
        v13 = a2 + 4;
      *a4 = v13;
      return 7;
    case 10:
      *a4 = a2 + 2;
      return 7;
    default:
LABEL_33:
      v11 = a2 + 2;
      goto LABEL_36;
  }
  return result;
}


//======================================================================
// sub_345134
// address: 0x00345134   size: 0x1D2 (466 bytes)
//======================================================================
int __fastcall sub_345134(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  int v6; // r7
  unsigned int v7; // r6
  int v8; // r0
  unsigned __int8 *v9; // r6
  unsigned int v10; // r1
  unsigned int v11; // r1
  int v12; // r0
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  int result; // r0
  int v19; // r6
  unsigned int v20; // r7
  int v21; // r0
  int v22; // r0

  v4 = a2;
  if ( a2 == a3 )
    goto LABEL_61;
  v6 = *a2;
  v7 = a2[1];
  if ( *a2 != 0 )
    v8 = sub_344136(*a2, a2[1]);
  else
    v8 = *(unsigned __int8 *)(a1 + v7 + 72);
  if ( v8 != 19 )
  {
    if ( v8 <= 19 )
    {
      switch ( v8 )
      {
        case 6:
LABEL_47:
          if ( a3 - v4 <= 2 )
          {
LABEL_62:
            v22 = 2;
            return -v22;
          }
          break;
        case 7:
LABEL_50:
          if ( a3 - v4 <= 3 )
            goto LABEL_62;
          break;
        case 5:
LABEL_45:
          if ( a3 - v4 <= 1 )
            goto LABEL_62;
          break;
        default:
          break;
      }
      goto LABEL_48;
    }
    if ( v8 != 24 )
    {
      if ( v8 != 29 )
      {
        if ( v8 == 22 )
          goto LABEL_16;
LABEL_48:
        *a4 = v4;
        return 0;
      }
      if ( (dword_44A1B8[8 * byte_44A7B8[v6] + (v7 >> 5)] & (1 << (v7 & 0x1F))) == 0 )
        goto LABEL_48;
    }
LABEL_16:
    v4 += 2;
    while ( 1 )
    {
      if ( v4 == a3 )
        goto LABEL_61;
      v19 = *v4;
      v20 = v4[1];
      if ( *v4 != 0 )
        v21 = sub_344136(*v4, v4[1]);
      else
        v21 = *(unsigned __int8 *)(a1 + v20 + 72);
      switch ( v21 )
      {
        case 5:
          goto LABEL_45;
        case 6:
          goto LABEL_47;
        case 7:
          goto LABEL_50;
        case 18:
          *a4 = v4 + 2;
          return 9;
        case 22:
        case 24:
        case 25:
        case 26:
        case 27:
          goto LABEL_52;
        case 29:
          result = dword_44A1B8[8 * byte_44A6B8[v19] + (v20 >> 5)] & (1 << (v20 & 0x1F));
          if ( result == 0 )
          {
            *a4 = v4;
            return result;
          }
LABEL_52:
          v4 += 2;
          break;
        default:
          goto LABEL_48;
      }
    }
  }
  v9 = v4 + 2;
  if ( v4 + 2 == a3 )
    goto LABEL_61;
  v10 = v4[3];
  if ( v4[2] != 0 )
  {
    v15 = sub_344136(v4[2], v10);
LABEL_35:
    v4 += 4;
    if ( v15 == 25 )
    {
      while ( v4 != a3 )
      {
        v16 = v4[1];
        if ( *v4 != 0 )
          v17 = sub_344136(*v4, v16);
        else
          v17 = *(unsigned __int8 *)(a1 + v16 + 72);
        if ( v17 == 18 )
        {
LABEL_43:
          *a4 = v4 + 2;
          return 10;
        }
        if ( v17 != 25 )
          goto LABEL_48;
        v4 += 2;
      }
      goto LABEL_61;
    }
    goto LABEL_36;
  }
  if ( v10 != 120 )
  {
    v15 = *(unsigned __int8 *)(a1 + v10 + 72);
    goto LABEL_35;
  }
  v9 = v4 + 4;
  if ( v4 + 4 != a3 )
  {
    v11 = v4[5];
    if ( v4[4] != 0 )
      v12 = sub_344136(v4[4], v11);
    else
      v12 = *(unsigned __int8 *)(a1 + v11 + 72);
    v4 += 6;
    if ( (unsigned int)(v12 - 24) <= 1 )
    {
      while ( v4 != a3 )
      {
        v13 = v4[1];
        if ( *v4 != 0 )
          v14 = sub_344136(*v4, v13);
        else
          v14 = *(unsigned __int8 *)(a1 + v13 + 72);
        if ( v14 == 18 )
          goto LABEL_43;
        if ( v14 < 18 || (unsigned int)(v14 - 24) > 1 )
          goto LABEL_48;
        v4 += 2;
      }
      goto LABEL_61;
    }
LABEL_36:
    *a4 = v9;
    return 0;
  }
LABEL_61:
  v22 = 1;
  return -v22;
}


//======================================================================
// sub_345318
// address: 0x00345318   size: 0x12A (298 bytes)
//======================================================================
int __fastcall sub_345318(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  int v6; // r7
  unsigned int v7; // r6
  int v8; // r0
  int result; // r0
  int v10; // r6
  unsigned int v11; // r7
  int v12; // r0
  int v13; // r0

  v4 = a2;
  if ( a2 == a3 )
  {
    v13 = 22;
  }
  else
  {
    v6 = *a2;
    v7 = a2[1];
    if ( *a2 != 0 )
      v8 = sub_344136(*a2, a2[1]);
    else
      v8 = *(unsigned __int8 *)(a1 + v7 + 72);
    switch ( v8 )
    {
      case 5:
LABEL_10:
        if ( a3 - v4 <= 1 )
          goto LABEL_28;
        goto LABEL_21;
      case 6:
LABEL_12:
        if ( a3 - v4 <= 2 )
          goto LABEL_28;
        goto LABEL_21;
      case 7:
LABEL_14:
        if ( a3 - v4 > 3 )
          goto LABEL_21;
LABEL_28:
        v13 = 2;
        return -v13;
      case 9:
      case 10:
      case 21:
      case 30:
        *a4 = v4;
        return 22;
      case 22:
      case 24:
        goto LABEL_8;
      case 29:
        if ( (dword_44A1B8[8 * byte_44A7B8[v6] + (v7 >> 5)] & (1 << (v7 & 0x1F))) == 0 )
          goto LABEL_21;
LABEL_8:
        v4 += 2;
        break;
      default:
LABEL_21:
        *a4 = v4;
        return 0;
    }
    while ( v4 != a3 )
    {
      v10 = *v4;
      v11 = v4[1];
      if ( *v4 != 0 )
        v12 = sub_344136(*v4, v4[1]);
      else
        v12 = *(unsigned __int8 *)(a1 + v11 + 72);
      switch ( v12 )
      {
        case 5:
          goto LABEL_10;
        case 6:
          goto LABEL_12;
        case 7:
          goto LABEL_14;
        case 18:
          *a4 = v4 + 2;
          return 28;
        case 22:
        case 24:
        case 25:
        case 26:
        case 27:
          goto LABEL_16;
        case 29:
          result = dword_44A1B8[8 * byte_44A6B8[v10] + (v11 >> 5)] & (1 << (v11 & 0x1F));
          if ( result == 0 )
          {
            *a4 = v4;
            return result;
          }
LABEL_16:
          v4 += 2;
          break;
        default:
          goto LABEL_21;
      }
    }
    v13 = 1;
  }
  return -v13;
}


//======================================================================
// sub_345454
// address: 0x00345454   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall sub_345454(int a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, unsigned __int8 **a5)
{
  unsigned int v9; // r1
  int v10; // r2
  unsigned __int8 *v11; // r3
  int result; // r0
  unsigned int v13; // r1
  int v14; // r0
  unsigned int v15; // r3
  int v16; // r0

  while ( a3 != a4 )
  {
    v9 = a3[1];
    if ( *a3 != 0 )
      v10 = sub_344136(*a3, v9);
    else
      v10 = *(unsigned __int8 *)(a2 + v9 + 72);
    switch ( v10 )
    {
      case 0:
      case 1:
      case 8:
        *a5 = a3;
        return 0;
      case 5:
        if ( a4 - a3 > 1 )
          goto LABEL_21;
        goto LABEL_24;
      case 6:
        if ( a4 - a3 <= 2 )
          goto LABEL_24;
        v11 = a3 + 3;
        goto LABEL_22;
      case 7:
        if ( a4 - a3 <= 3 )
        {
LABEL_24:
          v16 = 2;
          return -v16;
        }
        v11 = a3 + 4;
LABEL_22:
        a3 = v11;
        break;
      case 12:
      case 13:
        v11 = a3 + 2;
        if ( v10 != a1 )
          goto LABEL_22;
        if ( v11 == a4 )
        {
          v16 = 27;
          return -v16;
        }
        *a5 = v11;
        v13 = a3[3];
        if ( a3[2] != 0 )
          v14 = sub_344136(a3[2], v13);
        else
          v14 = *(unsigned __int8 *)(a2 + v13 + 72);
        v15 = v14 - 9;
        result = 0;
        if ( v15 <= 0x15 && ((1 << v15) & 0x201807) != 0 )
          return 27;
        return result;
      default:
LABEL_21:
        v11 = a3 + 2;
        goto LABEL_22;
    }
  }
  v16 = 1;
  return -v16;
}


//======================================================================
// sub_345508
// address: 0x00345508   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall sub_345508(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v7; // r4
  unsigned int v8; // r1
  int v9; // r0
  int result; // r0
  unsigned __int8 *v11; // r6
  unsigned int v12; // r1
  int v13; // r3
  int v14; // r0

  if ( a2 == a3 )
  {
    v14 = 4;
    return -v14;
  }
  else
  {
    v7 = a2;
    while ( 2 )
    {
      v8 = v7[1];
      if ( *v7 != 0 )
        v9 = sub_344136(*v7, v8);
      else
        v9 = *(unsigned __int8 *)(a1 + v8 + 72);
      switch ( v9 )
      {
        case 2:
          *a4 = v7;
          return 0;
        case 3:
          if ( v7 != a2 )
            goto LABEL_27;
          return sub_345134(a1, v7 + 2, a3, a4);
        case 6:
          v7 += 3;
          goto LABEL_26;
        case 7:
          v7 += 4;
          goto LABEL_26;
        case 9:
          if ( v7 != a2 )
            goto LABEL_27;
          v11 = v7 + 2;
          if ( v7 + 2 == a3 )
          {
            v14 = 3;
            return -v14;
          }
          v12 = v7[3];
          if ( v7[2] != 0 )
            v13 = sub_344136(v7[2], v12);
          else
            v13 = *(unsigned __int8 *)(a1 + v12 + 72);
          if ( v13 == 10 )
            v11 = v7 + 4;
          *a4 = v11;
LABEL_22:
          result = 7;
          break;
        case 10:
          if ( v7 != a2 )
            goto LABEL_27;
          *a4 = v7 + 2;
          goto LABEL_22;
        case 21:
          if ( v7 != a2 )
            goto LABEL_27;
          *a4 = v7 + 2;
          return 39;
        default:
          v7 += 2;
LABEL_26:
          if ( v7 != a3 )
            continue;
LABEL_27:
          *a4 = v7;
          return 6;
      }
      break;
    }
  }
  return result;
}


//======================================================================
// sub_3455CC
// address: 0x003455CC   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall sub_3455CC(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v7; // r4
  unsigned int v8; // r1
  int v9; // r0
  int v11; // r0
  unsigned __int8 *v12; // r6
  unsigned int v13; // r1
  int v14; // r3
  int v15; // r0

  if ( a2 != a3 )
  {
    v7 = a2;
    while ( 1 )
    {
      v8 = v7[1];
      if ( *v7 != 0 )
        v9 = sub_344136(*v7, v8);
      else
        v9 = *(unsigned __int8 *)(a1 + v8 + 72);
      if ( v9 == 7 )
      {
        v7 += 4;
      }
      else
      {
        if ( v9 > 7 )
        {
          switch ( v9 )
          {
            case 10:
              if ( v7 == a2 )
              {
                *a4 = v7 + 2;
                return 7;
              }
              goto LABEL_35;
            case 30:
              if ( v7 == a2 )
              {
                v11 = sub_345318(a1, v7 + 2, a3, a4);
                return v11 != 22 ? v11 : 0;
              }
              goto LABEL_35;
            case 9:
              if ( v7 == a2 )
              {
                v12 = v7 + 2;
                if ( v7 + 2 != a3 )
                {
                  v13 = v7[3];
                  if ( v7[2] != 0 )
                    v14 = sub_344136(v7[2], v13);
                  else
                    v14 = *(unsigned __int8 *)(a1 + v13 + 72);
                  if ( v14 == 10 )
                    v12 = v7 + 4;
                  *a4 = v12;
                  return 7;
                }
                v15 = 3;
                return -v15;
              }
LABEL_35:
              *a4 = v7;
              return 6;
            default:
              break;
          }
          goto LABEL_33;
        }
        if ( v9 == 5 )
          goto LABEL_33;
        if ( v9 <= 5 )
        {
          if ( v9 == 3 )
          {
            if ( v7 == a2 )
              return sub_345134(a1, v7 + 2, a3, a4);
            goto LABEL_35;
          }
LABEL_33:
          v7 += 2;
          goto LABEL_34;
        }
        v7 += 3;
      }
LABEL_34:
      if ( v7 == a3 )
        goto LABEL_35;
    }
  }
  v15 = 4;
  return -v15;
}


//======================================================================
// sub_3456A0
// address: 0x003456A0   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_3456A0(int a1, int a2, int a3, unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r4
  int v6; // r6
  int v7; // r5
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r0
  unsigned __int8 *v12; // [sp+0h] [bp-Ch]

  v5 = (unsigned __int8 *)(a2 + 2);
  v12 = (unsigned __int8 *)(a3 - 2);
  while ( v5 != v12 )
  {
    v6 = *v5;
    v7 = v5[1];
    if ( *v5 != 0 )
      v8 = sub_344136(*v5, v5[1]);
    else
      v8 = *(unsigned __int8 *)(a1 + v7 + 72);
    v9 = v8 - 9;
    if ( v9 <= 0x1A )
    {
      v10 = 1 << v9;
      if ( (v10 & 0x7E587F3) != 0 )
        goto LABEL_20;
      if ( (v10 & 0x22000) != 0 )
      {
        if ( v6 != 0 )
          goto LABEL_19;
        if ( (v7 & 0xFFFFFF80) == 0 )
          goto LABEL_20;
        goto LABEL_17;
      }
      if ( (v10 & 0x1000) != 0 )
      {
        if ( v6 == 0 && v7 == 9 )
          goto LABEL_19;
        goto LABEL_20;
      }
    }
    if ( v6 != 0 )
      goto LABEL_19;
LABEL_17:
    if ( v7 != 36 && (unsigned __int8)v7 != 64 )
    {
LABEL_19:
      *a4 = v5;
      return 0;
    }
LABEL_20:
    v5 += 2;
  }
  return 1;
}


//======================================================================
// sub_345724
// address: 0x00345724   size: 0x1A8 (424 bytes)
//======================================================================
int __fastcall sub_345724(int a1, int a2, int a3, int a4)
{
  unsigned __int8 *v4; // r6
  int v6; // r4
  int v7; // r5
  int v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  unsigned int v13; // r1
  int v14; // r0
  int v17; // [sp+Ch] [bp-18h]
  unsigned int v18; // [sp+10h] [bp-14h]
  int v19; // [sp+14h] [bp-10h]
  unsigned int v20; // [sp+18h] [bp-Ch]

  v4 = (unsigned __int8 *)(a2 + 2);
  v17 = 0;
  v6 = 0;
  v7 = 1;
  while ( 1 )
  {
    v18 = *v4;
    v20 = v4[1];
    if ( *v4 != 0 )
      v8 = sub_344136(v18, v20);
    else
      v8 = *(unsigned __int8 *)(a1 + v4[1] + 72);
    switch ( v8 )
    {
      case 3:
        if ( v6 < a3 )
          *(_BYTE *)(a4 + 16 * v6 + 12) = 0;
        goto LABEL_61;
      case 5:
        if ( v7 != 0 )
          goto LABEL_61;
        v7 = 1;
        if ( v6 >= a3 )
          goto LABEL_61;
        v9 = a4 + 16 * v6;
        goto LABEL_20;
      case 6:
        if ( v7 == 0 )
        {
          v7 = 1;
          if ( v6 < a3 )
          {
            v10 = a4 + 16 * v6;
            *(_DWORD *)v10 = v4;
            *(_BYTE *)(v10 + 12) = 1;
          }
        }
        ++v4;
        goto LABEL_61;
      case 7:
        if ( v7 == 0 )
        {
          v7 = 1;
          if ( v6 < a3 )
          {
            v11 = a4 + 16 * v6;
            *(_DWORD *)v11 = v4;
            *(_BYTE *)(v11 + 12) = 1;
          }
        }
        v4 += 2;
        goto LABEL_61;
      case 9:
      case 10:
        if ( v7 == 1 )
          goto LABEL_60;
        if ( v7 == 2 && v6 < a3 )
          *(_BYTE *)(a4 + 16 * v6 + 12) = 0;
        goto LABEL_61;
      case 11:
      case 17:
        if ( v7 == 2 )
          goto LABEL_61;
        return v6;
      case 12:
        if ( v7 != 2 )
        {
          if ( v6 < a3 )
            *(_DWORD *)(a4 + 16 * v6 + 4) = v4 + 2;
          v17 = 12;
          goto LABEL_59;
        }
        if ( v17 != 12 )
          goto LABEL_61;
        if ( v6 < a3 )
        {
          v12 = a4 + 16 * v6;
          goto LABEL_34;
        }
        goto LABEL_35;
      case 13:
        if ( v7 == 2 )
        {
          if ( v17 == 13 )
          {
            if ( v6 < a3 )
            {
              v12 = a4 + 16 * v6;
LABEL_34:
              *(_DWORD *)(v12 + 8) = v4;
            }
LABEL_35:
            ++v6;
LABEL_60:
            v7 = 0;
          }
        }
        else
        {
          if ( v6 < a3 )
            *(_DWORD *)(a4 + 16 * v6 + 4) = v4 + 2;
          v17 = 13;
LABEL_59:
          v7 = 2;
        }
        goto LABEL_61;
      case 21:
        if ( v7 == 1 )
          goto LABEL_60;
        if ( v7 != 2 )
          goto LABEL_61;
        if ( v6 >= a3 )
          goto LABEL_61;
        v19 = a4 + 16 * v6;
        if ( *(_BYTE *)(v19 + 12) != 0 )
        {
          if ( v4 != *(unsigned __int8 **)(v19 + 4) && v18 == 0 && v20 == 32 )
          {
            v13 = v4[3];
            if ( v4[2] != 0 )
            {
              v14 = sub_344136(v4[2], v13);
            }
            else
            {
              if ( v13 == 32 )
                goto LABEL_50;
              v14 = *(unsigned __int8 *)(a1 + v13 + 72);
            }
            if ( v14 != v17 )
              goto LABEL_61;
          }
LABEL_50:
          *(_BYTE *)(v19 + 12) = 0;
        }
LABEL_61:
        v4 += 2;
        break;
      case 22:
      case 24:
      case 29:
        if ( v7 != 0 )
          goto LABEL_61;
        v7 = 1;
        if ( v6 >= a3 )
          goto LABEL_61;
        v9 = a4 + 16 * v6;
LABEL_20:
        *(_DWORD *)v9 = v4;
        *(_BYTE *)(v9 + 12) = 1;
        goto LABEL_61;
      default:
        goto LABEL_61;
    }
  }
}


//======================================================================
// sub_3458CC
// address: 0x003458CC   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall sub_3458CC(int a1, _BYTE *a2, int a3)
{
  int v3; // r2
  int result; // r0
  int v5; // r0
  int v6; // r3

  v3 = (a3 - (int)a2) / 2;
  if ( v3 == 3 )
  {
    result = 0;
    if ( *a2 == 0 && a2[1] == 97 && a2[2] == 0 && a2[3] == 109 && a2[4] == 0 )
    {
      v5 = 38;
      v6 = (unsigned __int8)a2[5] - 112;
      return v6 == 0 ? v5 : 0;
    }
  }
  else if ( v3 == 4 )
  {
    result = 0;
    if ( *a2 != 0 )
      return result;
    if ( a2[1] == 97 )
    {
      if ( a2[2] == 0 && a2[3] == 112 && a2[4] == 0 && a2[5] == 111 && a2[6] == 0 )
      {
        v5 = 39;
        v6 = (unsigned __int8)a2[7] - 115;
        return v6 == 0 ? v5 : 0;
      }
    }
    else if ( a2[1] == 113 && a2[2] == 0 && a2[3] == 117 && a2[4] == 0 && a2[5] == 111 && a2[6] == 0 )
    {
      v5 = 34;
      v6 = (unsigned __int8)a2[7] - 116;
      return v6 == 0 ? v5 : 0;
    }
  }
  else
  {
    result = 0;
    if ( v3 == 2 )
    {
      result = 0;
      if ( a2[2] == 0 && a2[3] == 116 && *a2 == 0 )
      {
        result = 62;
        if ( a2[1] != 103 )
        {
          v5 = 60;
          v6 = (unsigned __int8)a2[1] - 108;
          return v6 == 0 ? v5 : 0;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_3459A0
// address: 0x003459A0   size: 0xBA (186 bytes)
//======================================================================
bool __fastcall sub_3459A0(int a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  int v5; // r6
  int v6; // r7
  int v7; // r0
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r2
  unsigned int v10; // r1
  int v11; // r0
  unsigned int v12; // r3
  _BOOL4 result; // r0

  while ( 1 )
  {
    v5 = *a2;
    v6 = a2[1];
    v7 = *a2 != 0 ? sub_344136(*a2, a2[1]) : *(unsigned __int8 *)(a1 + v6 + 72);
    if ( v7 != 22 )
    {
      if ( v7 <= 22 )
      {
        if ( v7 != 6 )
        {
          if ( v7 != 7 )
          {
            if ( v7 != 5 )
              break;
            goto LABEL_18;
          }
          ++a2;
          if ( *a3 != v5 )
            return false;
          ++a3;
        }
        if ( *a2 != *a3 )
          return false;
        ++a3;
        ++a2;
LABEL_18:
        if ( *a2 != *a3 )
          return false;
        v8 = a2 + 2;
        v9 = a3 + 2;
        if ( a2[1] != a3[1] )
          return false;
        goto LABEL_20;
      }
      if ( v7 < 24 || v7 > 27 && v7 != 29 )
        break;
    }
    if ( *a3 != v5 )
      return false;
    v9 = a3 + 2;
    v8 = a2 + 2;
    if ( a3[1] != v6 )
      return false;
LABEL_20:
    a3 = v9;
    a2 = v8;
  }
  v10 = a3[1];
  if ( *a3 != 0 )
    v11 = sub_344136(*a3, v10);
  else
    v11 = *(unsigned __int8 *)(a1 + v10 + 72);
  v12 = v11 - 5;
  result = true;
  if ( v12 <= 0x18 )
    return ((1 << v12) & 0x17A0007) == 0;
  return result;
}


//======================================================================
// sub_345A60
// address: 0x00345A60   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_345A60(int a1, unsigned __int8 *a2, unsigned __int8 *a3, _BYTE *a4)
{
  int result; // r0

  while ( 1 )
  {
    if ( *a4 == 0 )
      return a2 == a3;
    if ( a2 == a3 )
      break;
    result = *a2;
    if ( *a2 != 0 )
      break;
    if ( a2[1] != (unsigned __int8)*a4 )
      return result;
    a2 += 2;
    ++a4;
  }
  return 0;
}


//======================================================================
// sub_345A8A
// address: 0x00345A8A   size: 0x4E (78 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_345A8A(int a1, unsigned __int8 *a2)
{
  unsigned __int8 *v4; // r4
  unsigned int v5; // r1
  int v6; // r0

  v4 = a2;
  while ( 1 )
  {
    v5 = v4[1];
    if ( *v4 != 0 )
      v6 = sub_344136(*v4, v5);
    else
      v6 = *(unsigned __int8 *)(a1 + v5 + 72);
    if ( v6 == 22 )
      goto LABEL_17;
    if ( v6 > 22 )
      break;
    switch ( v6 )
    {
      case 6:
        v4 += 3;
        break;
      case 7:
        v4 += 4;
        break;
      case 5:
LABEL_17:
        v4 += 2;
        break;
      default:
        return (unsigned __int8 *)(v4 - a2);
    }
  }
  if ( v6 >= 24 && (v6 <= 27 || v6 == 29) )
    goto LABEL_17;
  return (unsigned __int8 *)(v4 - a2);
}


//======================================================================
// sub_345AD8
// address: 0x00345AD8   size: 0x34 (52 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_345AD8(int a1, unsigned __int8 *a2)
{
  unsigned int v4; // r1
  int v5; // r0
  unsigned int v6; // r0

  while ( 1 )
  {
    v4 = a2[1];
    v5 = *a2 != 0 ? sub_344136(*a2, v4) : *(unsigned __int8 *)(a1 + v4 + 72);
    v6 = v5 - 9;
    if ( v6 > 0xC || ((1 << v6) & 0x1003) == 0 )
      break;
    a2 += 2;
  }
  return a2;
}


//======================================================================
// sub_345B10
// address: 0x00345B10   size: 0x90 (144 bytes)
//======================================================================
unsigned __int64 __fastcall sub_345B10(unsigned int a1, unsigned __int8 *a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v7; // r1
  int v8; // r0
  unsigned __int8 *v9; // r6
  unsigned int v10; // r1
  int v11; // r3
  unsigned __int64 v13; // [sp+0h] [bp-Ch]

  v13 = __PAIR64__(a3, a1);
  while ( a2 != (unsigned __int8 *)HIDWORD(v13) )
  {
    v7 = a2[1];
    if ( *a2 != 0 )
      v8 = sub_344136(*a2, v7);
    else
      v8 = *(unsigned __int8 *)(a1 + v7 + 72);
    switch ( v8 )
    {
      case 6:
        a2 += 3;
        break;
      case 7:
        a2 += 4;
        break;
      case 9:
        v9 = a2 + 2;
        ++*a4;
        if ( a2 + 2 != (unsigned __int8 *)HIDWORD(v13) )
        {
          v10 = a2[3];
          if ( a2[2] != 0 )
            v11 = sub_344136(a2[2], v10);
          else
            v11 = *(unsigned __int8 *)(a1 + v10 + 72);
          if ( v11 == 10 )
            v9 = a2 + 4;
        }
        a4[1] = -1;
        a2 = v9;
        break;
      case 10:
        a4[1] = -1;
        ++*a4;
        goto LABEL_17;
      default:
LABEL_17:
        a2 += 2;
        break;
    }
    ++a4[1];
  }
  return v13;
}


//======================================================================
// sub_345BA0
// address: 0x00345BA0   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_345BA0(int a1, int a2)
{
  int i; // r4
  int v3; // r3
  int v4; // r2

  for ( i = 0; ; ++i )
  {
    v3 = *(unsigned __int8 *)(a1 + i);
    v4 = *(unsigned __int8 *)(a2 + i);
    if ( (unsigned int)(v3 - 97) <= 0x19 )
      v3 = (unsigned __int8)(v3 - 32);
    if ( (unsigned int)(v4 - 97) <= 0x19 )
      v4 = (unsigned __int8)(v4 - 32);
    if ( v3 != v4 )
      break;
    if ( v3 == 0 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_345BD8
// address: 0x00345BD8   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_345BD8(int a1, unsigned __int8 *a2, unsigned __int8 *a3, int *a4)
{
  return sub_343F28((int)&off_4539A4, a2, a3, a4);
}


//======================================================================
// sub_345BE8
// address: 0x00345BE8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_345BE8(int a1, int a2, int a3)
{
  int v4; // [sp+Ch] [bp-10h] BYREF
  unsigned __int8 v5; // [sp+10h] [bp-Ch] BYREF
  _BYTE v6[3]; // [sp+11h] [bp-Bh] BYREF
  unsigned __int8 *v7; // [sp+14h] [bp-8h] BYREF

  v4 = a2;
  v7 = &v5;
  (*(void (__fastcall **)(int, int *, int, unsigned __int8 **, _BYTE *))(a1 + 56))(a1, &v4, a3, &v7, v6);
  if ( v7 == &v5 )
    return -1;
  else
    return v5;
}


//======================================================================
// sub_345C14
// address: 0x00345C14   size: 0x1A (26 bytes)
//======================================================================
bool __fastcall sub_345C14(int a1)
{
  unsigned int v1; // r3
  _BOOL4 result; // r0

  v1 = a1 - 9;
  result = false;
  if ( v1 <= 0x17 )
    return ((1 << v1) & 0x800013) != 0;
  return result;
}


//======================================================================
// sub_345C34
// address: 0x00345C34   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_345C34(int result)
{
  int v1; // r3

  v1 = result >> 8;
  if ( result >> 8 > 223 )
  {
    if ( v1 == 255 && (unsigned int)(result - 65534) <= 1 )
      return -1;
  }
  else if ( v1 >= 216 || v1 == 0 && *((_BYTE *)&unk_453AA4 + result + 180) == 0 )
  {
    return -1;
  }
  return result;
}


//======================================================================
// sub_345C74
// address: 0x00345C74   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_345C74(int a1, int a2)
{
  unsigned __int8 *v2; // r1
  int v3; // r0
  unsigned __int8 *v4; // r1
  unsigned int v5; // r3
  unsigned int v6; // r3
  int v7; // r0
  unsigned int v8; // r3
  int v9; // r3

  if ( *(_BYTE *)(a2 + 2) == 120 )
  {
    v4 = (unsigned __int8 *)(a2 + 3);
    v3 = 0;
    while ( 1 )
    {
      v5 = *v4;
      if ( v5 == 59 )
        return sub_345C34(v3);
      if ( v5 > 0x46 )
        break;
      if ( v5 >= 0x41 )
      {
        v7 = 16 * v3;
        v8 = v5 - 55;
LABEL_12:
        v3 = v7 + v8;
        goto LABEL_13;
      }
      v6 = v5 - 48;
      if ( (unsigned __int8)v6 <= 9u )
        v3 = (16 * v3) | v6;
LABEL_13:
      if ( v3 > 1114111 )
        return -1;
      ++v4;
    }
    if ( v5 - 97 > 5 )
      goto LABEL_13;
    v7 = 16 * v3;
    v8 = v5 - 87;
    goto LABEL_12;
  }
  v2 = (unsigned __int8 *)(a2 + 2);
  v3 = 0;
  while ( 1 )
  {
    v9 = *v2;
    if ( v9 == 59 )
      break;
    v3 = 10 * v3 + v9 - 48;
    if ( v3 > 1114111 )
      return -1;
    ++v2;
  }
  return sub_345C34(v3);
}


//======================================================================
// sub_345CE8
// address: 0x00345CE8   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_345CE8(int a1, _BYTE *a2)
{
  int v2; // r0
  _BYTE *v3; // r3
  _BYTE *i; // r1
  unsigned int v5; // r3
  unsigned int v6; // r3
  int v7; // r0
  unsigned int v8; // r3
  int v9; // r2

  v2 = (unsigned __int8)a2[4];
  v3 = a2 + 4;
  if ( a2[4] == 0 && a2[5] == 120 )
  {
    for ( i = a2 + 6; ; i += 2 )
    {
      if ( *i != 0 )
        goto LABEL_6;
      v5 = (unsigned __int8)i[1];
      if ( v5 == 59 )
        return sub_345C34(v2);
      if ( v5 > 0x46 )
        break;
      if ( v5 >= 0x41 )
      {
        v7 = 16 * v2;
        v8 = v5 - 55;
LABEL_16:
        v2 = v7 + v8;
        goto LABEL_6;
      }
      v6 = v5 - 48;
      if ( (unsigned __int8)v6 <= 9u )
        v2 = (16 * v2) | v6;
LABEL_6:
      if ( v2 > 1114111 )
        return -1;
    }
    if ( v5 - 97 > 5 )
      goto LABEL_6;
    v7 = 16 * v2;
    v8 = v5 - 87;
    goto LABEL_16;
  }
  v2 = 0;
  while ( 1 )
  {
    if ( *v3 != 0 )
    {
      v9 = -1;
    }
    else
    {
      v9 = (unsigned __int8)v3[1];
      if ( v9 == 59 )
        return sub_345C34(v2);
    }
    v2 = 10 * v2 + v9 - 48;
    if ( v2 > 1114111 )
      break;
    v3 += 2;
  }
  return -1;
}


//======================================================================
// sub_345D74
// address: 0x00345D74   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_345D74(int a1, unsigned __int8 *a2)
{
  int v2; // r0
  unsigned __int8 *v3; // r3
  unsigned __int8 *i; // r1
  unsigned int v5; // r3
  unsigned int v6; // r3
  int v7; // r0
  unsigned int v8; // r3
  int v9; // r2

  v2 = a2[5];
  v3 = a2 + 4;
  if ( a2[5] == 0 && a2[4] == 120 )
  {
    for ( i = a2 + 6; ; i += 2 )
    {
      if ( i[1] != 0 )
        goto LABEL_6;
      v5 = *i;
      if ( v5 == 59 )
        return sub_345C34(v2);
      if ( v5 > 0x46 )
        break;
      if ( v5 >= 0x41 )
      {
        v7 = 16 * v2;
        v8 = v5 - 55;
LABEL_16:
        v2 = v7 + v8;
        goto LABEL_6;
      }
      v6 = v5 - 48;
      if ( (unsigned __int8)v6 <= 9u )
        v2 = (16 * v2) | v6;
LABEL_6:
      if ( v2 > 1114111 )
        return -1;
    }
    if ( v5 - 97 > 5 )
      goto LABEL_6;
    v7 = 16 * v2;
    v8 = v5 - 87;
    goto LABEL_16;
  }
  v2 = 0;
  while ( 1 )
  {
    if ( v3[1] != 0 )
    {
      v9 = -1;
    }
    else
    {
      v9 = *v3;
      if ( v9 == 59 )
        return sub_345C34(v2);
    }
    v2 = 10 * v2 + v9 - 48;
    if ( v2 > 1114111 )
      break;
    v3 += 2;
  }
  return -1;
}


//======================================================================
// sub_345E00
// address: 0x00345E00   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_345E00(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = (*(int (__fastcall **)(_DWORD))(a1 + 364))(*(_DWORD *)(a1 + 368));
  result = 0;
  if ( HIWORD(v1) == 0 )
    return dword_44A1B8[8 * byte_44A6B8[v1 >> 8] + ((int)(unsigned __int8)v1 >> 5)] & (1 << (v1 & 0x1F));
  return result;
}


//======================================================================
// sub_345E48
// address: 0x00345E48   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_345E48(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = (*(int (__fastcall **)(_DWORD))(a1 + 364))(*(_DWORD *)(a1 + 368));
  result = 0;
  if ( HIWORD(v1) == 0 )
    return dword_44A1B8[8 * byte_44A7B8[v1 >> 8] + ((int)(unsigned __int8)v1 >> 5)] & (1 << (v1 & 0x1F));
  return result;
}


//======================================================================
// sub_345E90
// address: 0x00345E90   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_345E90(int a1)
{
  unsigned int v1; // r0
  int v2; // r3

  v1 = (*(int (__fastcall **)(_DWORD))(a1 + 364))(*(_DWORD *)(a1 + 368));
  v2 = 1;
  if ( HIWORD(v1) == 0 )
    return (unsigned int)sub_345C34(v1) >> 31;
  return v2;
}


//======================================================================
// sub_345EAC
// address: 0x00345EAC   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_345EAC(int result, unsigned __int8 **a2, unsigned __int8 *a3, _DWORD *a4, int a5)
{
  int v5; // r6
  unsigned __int8 *v9; // r1
  int v10; // r3
  _WORD *v11; // r3

  v5 = result;
  while ( 1 )
  {
    v9 = *a2;
    if ( *a2 == a3 || *a4 == a5 )
      break;
    v10 = v5 + 2 * (*v9 + 184);
    result = *(unsigned __int16 *)(v10 + 4);
    if ( *(_WORD *)(v10 + 4) != 0 )
    {
      *a2 = v9 + 1;
    }
    else
    {
      result = (*(unsigned __int16 (__fastcall **)(_DWORD))(v5 + 364))(*(_DWORD *)(v5 + 368));
      *a2 += *(unsigned __int8 *)(v5 + **a2 + 72) - 3;
    }
    v11 = (_WORD *)*a4;
    *a4 += 2;
    *v11 = result;
  }
  return result;
}


//======================================================================
// sub_345F04
// address: 0x00345F04   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_345F04(int a1)
{
  int v2; // r4

  if ( a1 == 0 )
    return 6;
  v2 = 0;
  while ( sub_345BA0(a1, (int)off_453C7C[v2]) == 0 )
  {
    if ( ++v2 == 6 )
      return -1;
  }
  return v2;
}


//======================================================================
// sub_345F38
// address: 0x00345F38   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_345F38(int a1, int a2, int a3)
{
  void (__fastcall *v4)(int, int *, int, _BYTE **, char *); // r7
  int v6; // r0
  int v8; // [sp+Ch] [bp-90h] BYREF
  _BYTE *v9; // [sp+10h] [bp-8Ch] BYREF
  _BYTE v10[127]; // [sp+14h] [bp-88h] BYREF
  char v11; // [sp+93h] [bp-9h] BYREF

  v8 = a2;
  v4 = *(void (__fastcall **)(int, int *, int, _BYTE **, char *))(a1 + 56);
  v9 = v10;
  v4(a1, &v8, a3, &v9, &v11);
  if ( v8 != a3 )
    return 0;
  *v9 = 0;
  if ( sub_345BA0((int)v10, (int)"UTF-16") != 0 && *(_DWORD *)(a1 + 64) == 2 )
    return a1;
  v6 = sub_345F04((int)v10);
  if ( v6 == -1 )
    return 0;
  return *((_DWORD *)&unk_453C24 + v6 + 28);
}


//======================================================================
// sub_345FB8
// address: 0x00345FB8   size: 0x1E (30 bytes)
//======================================================================
bool __fastcall sub_345FB8(int a1, unsigned __int8 *a2)
{
  _BOOL4 result; // r0

  result = true;
  if ( *a2 > 0xC1u && (a2[1] & 0x80) != 0 )
    return (a2[1] & 0xC0) == 192;
  return result;
}


//======================================================================
// sub_345FD6
// address: 0x00345FD6   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_345FD6(int a1, unsigned __int8 *a2)
{
  int result; // r0
  int v3; // r4
  unsigned int v4; // r3

  result = 1;
  if ( (a2[3] & 0x80) != 0 && (a2[3] & 0xC0) != 0xC0 && (a2[2] & 0x80) != 0 && (a2[2] & 0xC0) != 0xC0 )
  {
    v3 = *a2;
    v4 = a2[1];
    if ( v3 == 240 )
    {
      if ( v4 > 0x8F )
        return (a2[1] & 0xC0) == 192;
    }
    else
    {
      if ( (v4 & 0x80) != 0 )
      {
        if ( v3 == 244 )
          LOBYTE(result) = v4 > 0x8F;
        else
          LOBYTE(result) = -64 - (a2[1] & 0xC0) + ((a2[1] & 0xC0) == 192) + (a2[1] & 0xC0) + 64;
      }
      return result & 1;
    }
  }
  return result;
}


//======================================================================
// sub_34602E
// address: 0x0034602E   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall sub_34602E(_BYTE *a1, int a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *i; // r4
  unsigned int v8; // r3
  unsigned __int8 *v9; // r3
  int v11; // r0

  for ( i = (unsigned __int8 *)(a2 + 1); ; i = v9 )
  {
    if ( i == a3 )
      goto LABEL_32;
    v8 = (unsigned __int8)a1[*i + 72];
    if ( v8 == 6 )
    {
      if ( a3 - i <= 2 )
        goto LABEL_31;
      if ( (*((int (__fastcall **)(_BYTE *, unsigned __int8 *))a1 + 89))(a1, i) != 0 )
      {
LABEL_21:
        *a4 = i;
        return 0;
      }
      v9 = i + 3;
      continue;
    }
    if ( v8 > 6 )
      break;
    if ( v8 <= 1 )
      goto LABEL_21;
    if ( v8 != 5 )
    {
LABEL_29:
      v9 = i + 1;
      continue;
    }
    if ( a3 - i <= 1 )
      goto LABEL_31;
    if ( (*((int (__fastcall **)(_BYTE *, unsigned __int8 *))a1 + 88))(a1, i) != 0 )
      goto LABEL_21;
    v9 = i + 2;
LABEL_30:
    ;
  }
  if ( v8 == 8 )
    goto LABEL_21;
  if ( v8 < 8 )
  {
    if ( a3 - i > 3 )
    {
      if ( (*((int (__fastcall **)(_BYTE *, unsigned __int8 *))a1 + 90))(a1, i) != 0 )
        goto LABEL_21;
      v9 = i + 4;
      goto LABEL_30;
    }
LABEL_31:
    v11 = 2;
    return -v11;
  }
  if ( a1[*i + 72] != 27 )
    goto LABEL_29;
  v9 = i + 1;
  if ( i + 1 == a3 )
    goto LABEL_32;
  if ( i[1] != 45 )
    goto LABEL_30;
  if ( i + 2 == a3 )
  {
LABEL_32:
    v11 = 1;
    return -v11;
  }
  if ( i[2] != 62 )
  {
    *a4 = i + 2;
    return 0;
  }
  *a4 = i + 3;
  return 13;
}


//======================================================================
// sub_3460EE
// address: 0x003460EE   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_3460EE(_BYTE *a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r1

  *a3 = 11;
  v3 = 1;
  if ( a2 - (_DWORD)a1 == 3 )
  {
    if ( *a1 == 88 )
    {
      v4 = 1;
    }
    else
    {
      if ( *a1 != 120 )
        return v3;
      v4 = 0;
    }
    if ( a1[1] == 77 )
    {
      v4 = 1;
    }
    else if ( a1[1] != 109 )
    {
      return 1;
    }
    if ( a1[2] == 76 )
      return 0;
    if ( a1[2] != 108 )
      return 1;
    v3 = 0;
    if ( v4 == 0 )
    {
      *a3 = 12;
      return 1;
    }
  }
  return v3;
}


//======================================================================
// sub_346144
// address: 0x00346144   size: 0x216 (534 bytes)
//======================================================================
int __fastcall sub_346144(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r6
  int v7; // r0
  unsigned int v8; // r3
  unsigned __int8 *v9; // r4
  int result; // r0
  unsigned __int8 *v11; // r3
  unsigned __int8 *v12; // r5
  _DWORD v14[2]; // [sp+Ch] [bp-8h] BYREF

  v5 = a2;
  if ( a2 == a3 )
    goto LABEL_2;
  v8 = *(unsigned __int8 *)(a1 + *a2 + 72);
  if ( v8 == 7 )
  {
    if ( a3 - a2 > 3 )
    {
      result = (*(int (**)(void))(a1 + 348))();
      v9 = v5 + 4;
LABEL_20:
      if ( result == 0 )
      {
        *a4 = v5;
        return result;
      }
      goto LABEL_24;
    }
LABEL_13:
    v7 = 2;
    return -v7;
  }
  if ( v8 <= 7 )
  {
    if ( v8 == 5 )
    {
      if ( a3 - a2 > 1 )
      {
        result = (*(int (**)(void))(a1 + 340))();
        v9 = v5 + 2;
        goto LABEL_20;
      }
    }
    else
    {
      if ( v8 != 6 )
        goto LABEL_22;
      if ( a3 - a2 > 2 )
      {
        result = (*(int (**)(void))(a1 + 344))();
        v9 = v5 + 3;
        goto LABEL_20;
      }
    }
    goto LABEL_13;
  }
  if ( v8 != 24 && (v8 == 29 || *(_BYTE *)(a1 + *a2 + 72) != 22) )
  {
LABEL_22:
    *a4 = v5;
    return 0;
  }
  v9 = a2 + 1;
LABEL_24:
  while ( 2 )
  {
    if ( v9 == a3 )
    {
LABEL_2:
      v7 = 1;
      return -v7;
    }
    switch ( *(_BYTE *)(a1 + *v9 + 72) )
    {
      case 5:
        if ( a3 - v9 <= 1 )
          goto LABEL_13;
        result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 328))(a1, v9);
        if ( result == 0 )
          goto LABEL_56;
        v9 += 2;
        continue;
      case 6:
        if ( a3 - v9 <= 2 )
          goto LABEL_13;
        result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 332))(a1, v9);
        if ( result == 0 )
          goto LABEL_56;
        v9 += 3;
        continue;
      case 7:
        if ( a3 - v9 <= 3 )
          goto LABEL_13;
        result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 336))(a1, v9);
        if ( result == 0 )
          goto LABEL_56;
        v9 += 4;
        continue;
      case 9:
      case 0xA:
      case 0x15:
        result = sub_3460EE(v5, (int)v9, v14);
        v5 = v9 + 1;
        if ( result == 0 )
          goto LABEL_56;
        while ( 2 )
        {
          if ( v5 != a3 )
          {
            switch ( *(_BYTE *)(a1 + *v5 + 72) )
            {
              case 0:
              case 1:
              case 8:
                goto LABEL_22;
              case 5:
                if ( a3 - v5 <= 1 )
                  goto LABEL_13;
                if ( (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 352))(a1, v5) != 0 )
                  goto LABEL_22;
                v11 = v5 + 2;
                goto LABEL_54;
              case 6:
                if ( a3 - v5 <= 2 )
                  goto LABEL_13;
                if ( (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 356))(a1, v5) != 0 )
                  goto LABEL_22;
                v11 = v5 + 3;
                goto LABEL_54;
              case 7:
                if ( a3 - v5 <= 3 )
                  goto LABEL_13;
                if ( (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 360))(a1, v5) != 0 )
                  goto LABEL_22;
                v11 = v5 + 4;
LABEL_54:
                v5 = v11;
                continue;
              case 0xF:
                v11 = v5 + 1;
                if ( v5 + 1 == a3 )
                  goto LABEL_2;
                if ( v5[1] != 62 )
                  goto LABEL_54;
                *a4 = v5 + 2;
                goto LABEL_60;
              default:
                v11 = v5 + 1;
                goto LABEL_54;
            }
          }
          goto LABEL_2;
        }
      case 0xF:
        v12 = v9;
        result = sub_3460EE(v5, (int)v9, v14);
        if ( result == 0 )
        {
LABEL_56:
          *a4 = v9;
          return result;
        }
        if ( ++v9 == a3 )
          goto LABEL_2;
        if ( v12[1] != 62 )
        {
LABEL_26:
          *a4 = v9;
          return 0;
        }
        *a4 = v12 + 2;
LABEL_60:
        result = v14[0];
        break;
      case 0x16:
      case 0x18:
      case 0x19:
      case 0x1A:
      case 0x1B:
        ++v9;
        continue;
      default:
        goto LABEL_26;
    }
    return result;
  }
}


//======================================================================
// sub_34635C
// address: 0x0034635C   size: 0x816 (2070 bytes)
//======================================================================
void __fastcall sub_34635C(__int64 a1, unsigned __int8 *a2, unsigned __int8 **a3)
{
  int v3; // r4
  unsigned __int8 *v4; // r7
  int v7; // r0
  unsigned __int8 *v8; // r3
  unsigned __int8 *v9; // r1
  int v10; // r3
  unsigned int v11; // r3
  int v12; // r0
  int v13; // r0
  unsigned __int8 *v14; // r3
  int v15; // r0
  unsigned __int8 *v16; // r3
  int v17; // r0
  int v18; // r0
  unsigned __int8 *v19; // r3
  unsigned __int8 *v20; // r2
  int v21; // r3
  unsigned int v22; // r3
  int v23; // r7
  unsigned int v24; // r7
  int v25; // r0
  unsigned __int8 *v26; // r3
  int v27; // r0
  int v28; // r0
  int v29; // r0
  unsigned __int8 *v30; // r3
  int v31; // r3
  int v32; // r0
  unsigned __int8 *v33; // r3
  unsigned __int8 *v34; // r7
  int v35; // [sp+4h] [bp-10h]
  unsigned __int8 *v36; // [sp+4h] [bp-10h]
  unsigned __int8 *v37; // [sp+Ch] [bp-8h] BYREF

  v4 = (unsigned __int8 *)HIDWORD(a1);
  v3 = a1;
  if ( (unsigned __int8 *)HIDWORD(a1) == a2 )
    a1 = sub_346B72();
  switch ( *(_BYTE *)(a1 + (unsigned __int8)*(_BYTE *)HIDWORD(a1) + 72) )
  {
    case 0:
    case 1:
    case 8:
      goto LABEL_166;
    case 2:
      v35 = HIDWORD(a1) + 1;
      if ( (unsigned __int8 *)(HIDWORD(a1) + 1) == a2 )
        goto LABEL_190;
      break;
    case 3:
      sub_3436CA(v3, (unsigned __int8 *)(HIDWORD(a1) + 1), a2, a3);
      goto LABEL_189;
    case 4:
      v36 = (unsigned __int8 *)(HIDWORD(a1) + 1);
      if ( (unsigned __int8 *)(HIDWORD(a1) + 1) == a2 )
        goto LABEL_192;
      if ( *(_BYTE *)(HIDWORD(a1) + 1) == 93 )
      {
        v8 = (unsigned __int8 *)(HIDWORD(a1) + 2);
        if ( (unsigned __int8 *)(HIDWORD(a1) + 2) == a2 )
LABEL_192:
          JUMPOUT(0x346B7A);
        if ( *(_BYTE *)(HIDWORD(a1) + 2) == 62 )
          goto LABEL_158;
      }
      goto LABEL_177;
    case 5:
      if ( (int)&a2[-HIDWORD(a1)] <= 1 )
        goto LABEL_188;
      v32 = (*(int (__fastcall **)(int))(v3 + 352))(v3);
      v36 = v4 + 2;
      goto LABEL_165;
    case 6:
      if ( (int)&a2[-HIDWORD(a1)] <= 2 )
        goto LABEL_188;
      v32 = (*(int (__fastcall **)(int))(v3 + 356))(v3);
      v36 = v4 + 3;
      goto LABEL_165;
    case 7:
      if ( (int)&a2[-HIDWORD(a1)] <= 3 )
        goto LABEL_188;
      v32 = (*(int (__fastcall **)(int))(v3 + 360))(v3);
      v36 = v4 + 4;
LABEL_165:
      if ( v32 != 0 )
        goto LABEL_166;
      while ( 1 )
      {
LABEL_177:
        v34 = v36;
        if ( v36 == a2 )
          goto LABEL_187;
        switch ( *(_BYTE *)(v3 + *v36 + 72) )
        {
          case 0:
          case 1:
          case 2:
          case 3:
          case 8:
          case 9:
          case 0xA:
            goto LABEL_185;
          case 4:
            v33 = v36 + 1;
            if ( v36 + 1 == a2 )
              goto LABEL_185;
            if ( v36[1] == 93 )
            {
              v20 = v36 + 2;
              if ( v36 + 2 == a2 )
              {
LABEL_185:
                v34 = v36;
LABEL_187:
                *a3 = v34;
LABEL_189:
                JUMPOUT(0x346B82);
              }
              if ( v36[2] == 62 )
              {
LABEL_172:
                *a3 = v20;
                goto LABEL_189;
              }
            }
LABEL_176:
            v36 = v33;
            break;
          case 5:
            if ( a2 - v36 <= 1 || (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 352))(v3, v36) != 0 )
              goto LABEL_185;
            v33 = v36 + 2;
            goto LABEL_176;
          case 6:
            if ( a2 - v36 <= 2 || (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 356))(v3, v36) != 0 )
              goto LABEL_185;
            v33 = v36 + 3;
            goto LABEL_176;
          case 7:
            if ( a2 - v36 <= 3 || (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 360))(v3, v36) != 0 )
              goto LABEL_185;
            v33 = v36 + 4;
            goto LABEL_176;
          default:
            v33 = v36 + 1;
            goto LABEL_176;
        }
      }
    case 9:
      v31 = HIDWORD(a1) + 1;
      if ( (unsigned __int8 *)(HIDWORD(a1) + 1) == a2 )
        JUMPOUT(0x346B76);
      if ( *(_BYTE *)(v3 + *(unsigned __int8 *)(HIDWORD(a1) + 1) + 72) == 10 )
        v31 = HIDWORD(a1) + 2;
      *a3 = (unsigned __int8 *)v31;
      goto LABEL_189;
    case 0xA:
      *a3 = v4 + 1;
      goto LABEL_189;
    default:
      v36 = v4 + 1;
      goto LABEL_177;
  }
  switch ( *(_BYTE *)(v3 + *(unsigned __int8 *)(HIDWORD(a1) + 1) + 72) )
  {
    case 5:
      if ( (int)&a2[-v35] <= 1 )
        goto LABEL_188;
      v7 = (*(int (__fastcall **)(int, int))(v3 + 340))(v3, v35);
      v4 += 3;
      goto LABEL_12;
    case 6:
      if ( (int)&a2[-v35] <= 2 )
        goto LABEL_188;
      v7 = (*(int (__fastcall **)(int, int))(v3 + 344))(v3, v35);
      v4 += 4;
      goto LABEL_12;
    case 7:
      if ( (int)&a2[-v35] <= 3 )
        goto LABEL_188;
      v7 = (*(int (__fastcall **)(int, int))(v3 + 348))(v3, v35);
      v4 += 5;
LABEL_12:
      if ( v7 == 0 )
        goto LABEL_43;
LABEL_74:
      while ( 2 )
      {
        if ( v4 == a2 )
          goto LABEL_190;
        switch ( *(_BYTE *)(v3 + *v4 + 72) )
        {
          case 5:
            if ( a2 - v4 <= 1 )
              goto LABEL_188;
            if ( (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 328))(v3, v4) != 0 )
              goto LABEL_62;
            goto LABEL_66;
          case 6:
            if ( a2 - v4 <= 2 )
              goto LABEL_188;
            if ( (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 332))(v3, v4) == 0 )
              goto LABEL_66;
            v4 += 3;
            continue;
          case 7:
            if ( a2 - v4 <= 3 )
              goto LABEL_188;
            if ( (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 336))(v3, v4) == 0 )
              goto LABEL_66;
            v4 += 4;
            continue;
          case 9:
          case 0xA:
          case 0x15:
            while ( 2 )
            {
              if ( ++v4 == a2 )
                goto LABEL_190;
              switch ( *(_BYTE *)(v3 + *v4 + 72) )
              {
                case 5:
                  if ( a2 - v4 <= 1 )
                    goto LABEL_188;
                  v13 = (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 340))(v3, v4);
                  v14 = v4 + 2;
                  break;
                case 6:
                  if ( a2 - v4 <= 2 )
                    goto LABEL_188;
                  v13 = (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 344))(v3, v4);
                  v14 = v4 + 3;
                  break;
                case 7:
                  if ( a2 - v4 <= 3 )
                    goto LABEL_188;
                  v13 = (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 348))(v3, v4);
                  v14 = v4 + 4;
                  break;
                case 9:
                case 0xA:
                case 0x15:
                  continue;
                case 0xB:
                  goto LABEL_144;
                case 0x11:
                  goto LABEL_145;
                case 0x16:
                case 0x18:
                  v14 = v4 + 1;
                  goto LABEL_92;
                default:
                  goto LABEL_166;
              }
              break;
            }
            if ( v13 == 0 )
              goto LABEL_66;
            break;
          case 0xB:
LABEL_144:
            *a3 = v4 + 1;
            goto LABEL_189;
          case 0x11:
LABEL_145:
            v8 = v4 + 1;
            if ( v4 + 1 == a2 )
              goto LABEL_190;
            if ( v4[1] != 62 )
              goto LABEL_158;
            *a3 = v4 + 2;
            goto LABEL_189;
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
            ++v4;
            continue;
          default:
            goto LABEL_166;
        }
        break;
      }
      while ( 1 )
      {
LABEL_92:
        v37 = v14;
LABEL_70:
        v9 = v37;
        if ( v37 == a2 )
          goto LABEL_190;
        switch ( *(_BYTE *)(v3 + *v37 + 72) )
        {
          case 5:
            if ( a2 - v37 <= 1 )
              goto LABEL_188;
            v15 = (*(int (__fastcall **)(int))(v3 + 328))(v3);
LABEL_90:
            v16 = v37;
            if ( v15 == 0 )
              goto LABEL_138;
LABEL_91:
            v14 = v16 + 2;
            continue;
          case 6:
            if ( a2 - v37 <= 2 )
              goto LABEL_188;
            v17 = (*(int (__fastcall **)(int))(v3 + 332))(v3);
LABEL_133:
            v16 = v37;
            if ( v17 == 0 )
              goto LABEL_138;
            v14 = v37 + 3;
            continue;
          case 7:
            if ( a2 - v37 <= 3 )
              goto LABEL_188;
            v18 = (*(int (__fastcall **)(int))(v3 + 336))(v3);
LABEL_137:
            v16 = v37;
            if ( v18 == 0 )
            {
LABEL_138:
              *a3 = v16;
              goto LABEL_189;
            }
            v14 = v37 + 4;
            break;
          case 9:
          case 0xA:
          case 0x15:
            while ( 1 )
            {
              v19 = v37;
              v20 = v37 + 1;
              v37 = v20;
              if ( v20 == a2 )
                goto LABEL_190;
              v21 = *(unsigned __int8 *)(v3 + v19[1] + 72);
              if ( v21 == 14 )
                break;
              v22 = (unsigned __int8)(v21 - 9);
              if ( v22 > 0xC || ((1 << v22) & 0x1003) == 0 )
                goto LABEL_172;
            }
            while ( 1 )
            {
LABEL_103:
              v8 = v37;
              v20 = v37 + 1;
              v37 = v20;
              if ( v20 == a2 )
                goto LABEL_190;
              v23 = *(unsigned __int8 *)(v3 + v8[1] + 72);
              if ( (unsigned int)(v23 - 12) <= 1 )
                break;
              v24 = (unsigned __int8)(v23 - 9);
              if ( v24 > 0xC || ((1 << v24) & 0x1003) == 0 )
                goto LABEL_172;
            }
LABEL_110:
            v26 = v8 + 2;
            while ( 1 )
            {
              v37 = v26;
LABEL_112:
              v9 = v37;
              if ( v37 == a2 )
                goto LABEL_190;
              if ( *(unsigned __int8 *)(v3 + *v37 + 72) == v23 )
                break;
              switch ( *(_BYTE *)(v3 + *v37 + 72) )
              {
                case 0:
                case 1:
                case 2:
                case 8:
                  goto LABEL_72;
                case 3:
                  v29 = sub_3436CA(v3, v37 + 1, a2, &v37);
                  if ( v29 > 0 )
                    goto LABEL_112;
                  if ( v29 == 0 )
                    *a3 = v37;
                  goto LABEL_189;
                case 5:
                  if ( a2 - v37 <= 1 )
                    goto LABEL_188;
                  v25 = (*(int (__fastcall **)(int))(v3 + 352))(v3);
                  v8 = v37;
                  if ( v25 == 0 )
                    goto LABEL_110;
                  goto LABEL_158;
                case 6:
                  if ( a2 - v37 <= 2 )
                    goto LABEL_188;
                  v27 = (*(int (__fastcall **)(int))(v3 + 356))(v3);
                  v8 = v37;
                  if ( v27 != 0 )
                    goto LABEL_158;
                  v26 = v37 + 3;
                  break;
                case 7:
                  if ( a2 - v37 <= 3 )
                    goto LABEL_188;
                  v28 = (*(int (__fastcall **)(int))(v3 + 360))(v3);
                  v8 = v37;
                  if ( v28 != 0 )
                    goto LABEL_158;
                  v26 = v37 + 4;
                  break;
                default:
                  ++v37;
                  goto LABEL_112;
              }
            }
            v8 = ++v37;
            if ( v9 + 1 == a2 )
              goto LABEL_190;
            switch ( *(_BYTE *)(v3 + v9[1] + 72) )
            {
              case 9:
              case 0xA:
              case 0x15:
                while ( 2 )
                {
                  v16 = v37;
                  v9 = v37 + 1;
                  v37 = v9;
                  if ( v9 != a2 )
                  {
                    switch ( *(_BYTE *)(v3 + v16[1] + 72) )
                    {
                      case 5:
                        if ( a2 - v9 <= 1 )
                          goto LABEL_188;
                        v15 = (*(int (__fastcall **)(int))(v3 + 340))(v3);
                        goto LABEL_90;
                      case 6:
                        if ( a2 - v9 <= 2 )
                          goto LABEL_188;
                        v17 = (*(int (__fastcall **)(int))(v3 + 344))(v3);
                        goto LABEL_133;
                      case 7:
                        if ( a2 - v9 <= 3 )
                          goto LABEL_188;
                        v18 = (*(int (__fastcall **)(int))(v3 + 348))(v3);
                        goto LABEL_137;
                      case 9:
                      case 0xA:
                      case 0x15:
                        continue;
                      case 0xB:
                        goto LABEL_140;
                      case 0x11:
                        goto LABEL_141;
                      case 0x16:
                      case 0x18:
                        goto LABEL_91;
                      default:
                        goto LABEL_72;
                    }
                  }
                  goto LABEL_190;
                }
              case 0xB:
LABEL_140:
                *a3 = v37 + 1;
                goto LABEL_189;
              case 0x11:
LABEL_141:
                v30 = v37;
                v20 = v37 + 1;
                v37 = v20;
                if ( v20 == a2 )
                  goto LABEL_190;
                if ( v30[1] != 62 )
                  goto LABEL_172;
                *a3 = v30 + 2;
                break;
              default:
                goto LABEL_158;
            }
            goto LABEL_189;
          case 0xE:
            goto LABEL_103;
          case 0x16:
          case 0x18:
          case 0x19:
          case 0x1A:
          case 0x1B:
            ++v37;
            goto LABEL_70;
          default:
            goto LABEL_72;
        }
      }
    case 0xF:
      sub_346144(v3, (unsigned __int8 *)(HIDWORD(a1) + 2), a2, a3);
      goto LABEL_189;
    case 0x10:
      v8 = (unsigned __int8 *)(HIDWORD(a1) + 2);
      if ( (unsigned __int8 *)(HIDWORD(a1) + 2) == a2 )
        goto LABEL_190;
      if ( *(_BYTE *)(v3 + *(unsigned __int8 *)(HIDWORD(a1) + 2) + 72) != 20 )
      {
        if ( *(_BYTE *)(v3 + *(unsigned __int8 *)(HIDWORD(a1) + 2) + 72) != 27 )
        {
LABEL_158:
          *a3 = v8;
          goto LABEL_189;
        }
        v9 = v4 + 3;
        if ( v4 + 3 != a2 )
        {
          if ( v4[3] == 45 )
            sub_34602E((_BYTE *)v3, (int)v9, a2, a3);
          else
LABEL_72:
            *a3 = v9;
          goto LABEL_189;
        }
LABEL_190:
        JUMPOUT(0x346B80);
      }
      v4 += 3;
      if ( a2 - v4 <= 5 )
        goto LABEL_190;
      v10 = 0;
      while ( *v4 == (unsigned __int8)aCdataCdataCdat[v10] )
      {
        ++v10;
        ++v4;
        if ( v10 == 6 )
        {
          *a3 = v4;
          goto LABEL_189;
        }
      }
      goto LABEL_166;
    case 0x11:
      v35 = HIDWORD(a1) + 2;
      if ( (unsigned __int8 *)(HIDWORD(a1) + 2) == a2 )
        goto LABEL_190;
      v11 = *(unsigned __int8 *)(v3 + *(unsigned __int8 *)(HIDWORD(a1) + 2) + 72);
      if ( v11 == 7 )
      {
        if ( (int)&a2[-v35] > 3 )
        {
          v12 = (*(int (__fastcall **)(int, int))(v3 + 348))(v3, v35);
          v4 += 6;
LABEL_42:
          if ( v12 == 0 )
          {
LABEL_43:
            v4 = (unsigned __int8 *)v35;
LABEL_66:
            *a3 = v4;
            goto LABEL_189;
          }
          goto LABEL_47;
        }
      }
      else
      {
        if ( v11 > 7 )
        {
          if ( v11 != 24 && (v11 == 29 || *(_BYTE *)(v3 + *(unsigned __int8 *)(HIDWORD(a1) + 2) + 72) != 22) )
            goto LABEL_59;
LABEL_46:
          v4 += 3;
LABEL_47:
          while ( v4 != a2 )
          {
            switch ( *(_BYTE *)(v3 + *v4 + 72) )
            {
              case 5:
                if ( a2 - v4 <= 1 )
                  goto LABEL_188;
                if ( (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 328))(v3, v4) == 0 )
                  goto LABEL_66;
                v4 += 2;
                break;
              case 6:
                if ( a2 - v4 <= 2 )
                  goto LABEL_188;
                if ( (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 332))(v3, v4) != 0 )
                  goto LABEL_46;
                goto LABEL_66;
              case 7:
                if ( a2 - v4 <= 3 )
                  goto LABEL_188;
                if ( (*(int (__fastcall **)(int, unsigned __int8 *))(v3 + 336))(v3, v4) == 0 )
                  goto LABEL_66;
                v4 += 4;
                break;
              case 9:
              case 0xA:
              case 0x15:
                while ( 2 )
                {
                  if ( ++v4 != a2 )
                  {
                    switch ( *(_BYTE *)(v3 + *v4 + 72) )
                    {
                      case 9:
                      case 0xA:
                      case 0x15:
                        continue;
                      case 0xB:
                        goto LABEL_58;
                      default:
                        goto LABEL_166;
                    }
                  }
                  goto LABEL_190;
                }
              case 0xB:
LABEL_58:
                *a3 = v4 + 1;
                goto LABEL_189;
              case 0x16:
              case 0x18:
              case 0x19:
              case 0x1A:
              case 0x1B:
                ++v4;
                continue;
              default:
                goto LABEL_166;
            }
          }
          goto LABEL_190;
        }
        if ( v11 == 5 )
        {
          if ( (int)&a2[-v35] > 1 )
          {
            v12 = (*(int (__fastcall **)(int, int))(v3 + 340))(v3, v35);
            v4 += 4;
            goto LABEL_42;
          }
        }
        else
        {
          if ( v11 != 6 )
          {
LABEL_59:
            v4 = (unsigned __int8 *)v35;
LABEL_166:
            *a3 = v4;
            goto LABEL_189;
          }
          if ( (int)&a2[-v35] > 2 )
          {
            v12 = (*(int (__fastcall **)(int, int))(v3 + 344))(v3, v35);
            v4 += 5;
            goto LABEL_42;
          }
        }
      }
LABEL_188:
      JUMPOUT(0x346B7E);
    case 0x16:
    case 0x18:
LABEL_62:
      v4 += 2;
      goto LABEL_74;
    default:
      goto LABEL_59;
  }
}


//======================================================================
// sub_346B72
// address: 0x00346B72   size: 0x14 (20 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_346B72(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_346B88
// address: 0x00346B88   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_346B88(int a1, int a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *i; // r4
  unsigned int v8; // r1
  int v9; // r0
  unsigned __int8 *v10; // r3
  int v12; // r0

  for ( i = (unsigned __int8 *)(a2 + 2); ; i = v10 )
  {
    if ( i == a3 )
      goto LABEL_35;
    v8 = *i;
    if ( i[1] != 0 )
      v9 = sub_344136(i[1], v8);
    else
      v9 = *(unsigned __int8 *)(a1 + v8 + 72);
    if ( v9 == 6 )
    {
      if ( a3 - i <= 2 )
        goto LABEL_34;
      v10 = i + 3;
      continue;
    }
    if ( v9 <= 6 )
    {
      if ( v9 >= 0 )
      {
        if ( v9 <= 1 )
          goto LABEL_22;
        if ( v9 == 5 && a3 - i <= 1 )
        {
LABEL_34:
          v12 = 2;
          return -v12;
        }
      }
LABEL_32:
      v10 = i + 2;
      continue;
    }
    if ( v9 == 8 )
    {
LABEL_22:
      *a4 = i;
      return 0;
    }
    if ( v9 < 8 )
    {
      if ( a3 - i <= 3 )
        goto LABEL_34;
      v10 = i + 4;
      continue;
    }
    if ( v9 != 27 )
      goto LABEL_32;
    v10 = i + 2;
    if ( i + 2 == a3 )
      goto LABEL_35;
    if ( i[3] == 0 && i[2] == 45 )
      break;
  }
  if ( i + 4 == a3 )
  {
LABEL_35:
    v12 = 1;
    return -v12;
  }
  if ( i[5] != 0 || i[4] != 62 )
  {
    *a4 = i + 4;
    return 0;
  }
  *a4 = i + 6;
  return 13;
}


//======================================================================
// sub_346C2C
// address: 0x00346C2C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_346C2C(_BYTE *a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r1
  int v5; // r4
  int v6; // r0

  *a3 = 11;
  v3 = 1;
  if ( a2 - (_DWORD)a1 == 6 )
  {
    v4 = (unsigned __int8)a1[1];
    if ( a1[1] == 0 )
    {
      if ( *a1 == 88 )
      {
        v4 = 1;
      }
      else if ( *a1 != 120 )
      {
        return v3;
      }
      v3 = 1;
      if ( a1[3] == 0 )
      {
        if ( a1[2] == 77 )
        {
          v4 = 1;
        }
        else if ( a1[2] != 109 )
        {
          return v3;
        }
        v5 = (unsigned __int8)a1[5];
        v3 = 1;
        if ( a1[5] == 0 )
        {
          v6 = (unsigned __int8)a1[4];
          v3 = v5;
          if ( v6 != 76 )
          {
            if ( (unsigned __int8)v6 != 108 )
              return 1;
            if ( v4 == 0 )
            {
              *a3 = 12;
              return 1;
            }
          }
        }
      }
    }
  }
  return v3;
}


//======================================================================
// sub_346C94
// address: 0x00346C94   size: 0x1DE (478 bytes)
//======================================================================
int __fastcall sub_346C94(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  int v6; // r0
  int v7; // r7
  unsigned int v8; // r4
  int v9; // r0
  unsigned __int8 *v10; // r4
  int result; // r0
  unsigned int v12; // r7
  int v13; // r0
  unsigned __int8 *v14; // r7
  unsigned int v15; // r1
  int v16; // r0
  unsigned __int8 *v17; // r3
  unsigned int v19; // [sp+8h] [bp-1Ch]
  _DWORD v21[2]; // [sp+1Ch] [bp-8h] BYREF

  if ( a2 == a3 )
  {
LABEL_2:
    v6 = 1;
    return -v6;
  }
  v7 = a2[1];
  v8 = *a2;
  if ( a2[1] != 0 )
    v9 = sub_344136(a2[1], *a2);
  else
    v9 = *(unsigned __int8 *)(a1 + v8 + 72);
  if ( v9 == 7 )
  {
    if ( a3 - a2 <= 3 )
      goto LABEL_18;
  }
  else
  {
    if ( v9 > 7 )
    {
      if ( v9 != 24 )
      {
        if ( v9 == 29 )
        {
          if ( (dword_44A1B8[8 * byte_44A7B8[v7] + (v8 >> 5)] & (1 << (v8 & 0x1F))) == 0 )
            goto LABEL_23;
        }
        else if ( v9 != 22 )
        {
          goto LABEL_23;
        }
      }
      v10 = a2 + 2;
      while ( 1 )
      {
        if ( v10 == a3 )
          goto LABEL_2;
        v12 = *v10;
        v19 = v10[1];
        if ( v10[1] != 0 )
          v13 = sub_344136(v19, v12);
        else
          v13 = *(unsigned __int8 *)(a1 + v12 + 72);
        switch ( v13 )
        {
          case 5:
            if ( a3 - v10 <= 1 )
              goto LABEL_18;
            goto LABEL_63;
          case 6:
            if ( a3 - v10 <= 2 )
              goto LABEL_18;
            goto LABEL_63;
          case 7:
            if ( a3 - v10 <= 3 )
              goto LABEL_18;
            goto LABEL_63;
          case 9:
          case 10:
          case 21:
            result = sub_346C2C(a2, (int)v10, v21);
            v14 = v10 + 2;
            if ( result == 0 )
              goto LABEL_58;
            while ( v14 != a3 )
            {
              v15 = *v14;
              if ( v14[1] != 0 )
                v16 = sub_344136(v14[1], v15);
              else
                v16 = *(unsigned __int8 *)(a1 + v15 + 72);
              switch ( v16 )
              {
                case 0:
                case 1:
                case 8:
                  *a4 = v14;
                  return 0;
                case 5:
                  if ( a3 - v14 <= 1 )
                    goto LABEL_18;
                  goto LABEL_55;
                case 6:
                  if ( a3 - v14 <= 2 )
                    goto LABEL_18;
                  v17 = v14 + 3;
                  goto LABEL_56;
                case 7:
                  if ( a3 - v14 <= 3 )
                    goto LABEL_18;
                  v17 = v14 + 4;
                  goto LABEL_56;
                case 15:
                  v17 = v14 + 2;
                  if ( v14 + 2 == a3 )
                    goto LABEL_2;
                  if ( v14[3] == 0 && v14[2] == 62 )
                    goto LABEL_62;
                  goto LABEL_56;
                default:
LABEL_55:
                  v17 = v14 + 2;
LABEL_56:
                  v14 = v17;
                  break;
              }
            }
            goto LABEL_2;
          case 15:
            v14 = v10;
            result = sub_346C2C(a2, (int)v10, v21);
            if ( result == 0 )
              goto LABEL_58;
            v10 += 2;
            if ( v10 == a3 )
              goto LABEL_2;
            if ( v14[3] == 0 && v14[2] == 62 )
            {
LABEL_62:
              *a4 = v14 + 4;
              return v21[0];
            }
LABEL_63:
            *a4 = v10;
            return 0;
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
            goto LABEL_27;
          case 29:
            result = dword_44A1B8[8 * byte_44A6B8[v19] + (v12 >> 5)] & (1 << (v12 & 0x1F));
            if ( result == 0 )
            {
LABEL_58:
              *a4 = v10;
              return result;
            }
LABEL_27:
            v10 += 2;
            break;
          default:
            goto LABEL_63;
        }
      }
    }
    if ( v9 != 5 )
    {
      if ( v9 == 6 && a3 - a2 <= 2 )
        goto LABEL_18;
      goto LABEL_23;
    }
    if ( a3 - a2 <= 1 )
    {
LABEL_18:
      v6 = 2;
      return -v6;
    }
  }
LABEL_23:
  *a4 = a2;
  return 0;
}


//======================================================================
// sub_346E84
// address: 0x00346E84   size: 0x84E (2126 bytes)
//======================================================================
int __fastcall sub_346E84(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  unsigned __int8 *v5; // r6
  unsigned int v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r0
  unsigned __int8 *v10; // r5
  int v11; // r0
  unsigned __int8 *v12; // r4
  unsigned __int8 *v13; // r5
  unsigned int v14; // r1
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r3
  char *v19; // r2
  int v20; // r0
  unsigned __int8 *v21; // r5
  int v22; // r0
  int v23; // r0
  unsigned int v25; // r5
  int v26; // r0
  unsigned int v27; // r1
  int v28; // r0
  unsigned int v29; // r5
  int v30; // r0
  int v31; // r5
  unsigned int v32; // r1
  int v33; // r0
  unsigned int v34; // r5
  int v35; // r0
  unsigned __int8 *v36; // r3
  unsigned int v37; // r1
  int v38; // r0
  unsigned int v39; // r0
  unsigned int v40; // r1
  int v41; // r4
  unsigned int v42; // r4
  unsigned __int8 *v43; // r5
  unsigned __int8 *v44; // r5
  unsigned int v45; // r1
  int v46; // r0
  unsigned int v47; // r1
  int v48; // r0
  unsigned __int8 *v49; // r5
  unsigned int v50; // r1
  int v51; // r0
  unsigned __int8 *v52; // r3
  unsigned __int8 *v53; // r2
  unsigned __int8 *v54; // r5
  unsigned int v55; // r1
  int v56; // r3
  unsigned int v57; // [sp+0h] [bp-1Ch]
  unsigned int v58; // [sp+0h] [bp-1Ch]
  unsigned int v59; // [sp+0h] [bp-1Ch]
  unsigned int v60; // [sp+0h] [bp-1Ch]
  unsigned int v61; // [sp+0h] [bp-1Ch]
  unsigned __int8 *v62; // [sp+0h] [bp-1Ch]
  unsigned int v63; // [sp+0h] [bp-1Ch]
  int v64; // [sp+4h] [bp-18h]
  unsigned int v65; // [sp+8h] [bp-14h]
  unsigned int v66; // [sp+8h] [bp-14h]
  unsigned __int8 *v67; // [sp+14h] [bp-8h] BYREF

  v64 = a1;
  v4 = a2;
  v5 = a3;
  if ( a2 == a3 )
    a1 = sub_347842();
  if ( ((a3 - a2) & 1) != 0 )
  {
    v7 = (a3 - a2) & 0xFFFFFFFE;
    if ( v7 == 0 )
      sub_347848(a1);
    v5 = &a2[v7];
  }
  v8 = *v4;
  if ( v4[1] != 0 )
    v9 = sub_344136(v4[1], v8);
  else
    v9 = *(unsigned __int8 *)(v64 + v8 + 72);
  if ( v9 > 0xA )
    v9 = sub_3477AC();
  switch ( v9 )
  {
    case 0u:
    case 1u:
    case 8u:
      *a4 = v4;
      return sub_347870(0);
    case 2u:
      v10 = v4 + 2;
      if ( v4 + 2 == v5 )
        sub_3476D2();
      v65 = v4[3];
      v57 = v4[2];
      if ( v4[3] != 0 )
        v11 = sub_344136(v65, v57);
      else
        v11 = *(unsigned __int8 *)(v64 + v4[2] + 72);
      break;
    case 3u:
      v23 = sub_344594(v64, v4 + 2, v5, a4);
      return sub_347870(v23);
    case 4u:
      if ( v4 + 2 == v5 )
        return sub_347870(-5);
      if ( v4[3] != 0 || v4[2] != 93 )
        goto LABEL_250;
      if ( v4 + 4 == v5 )
        return sub_347870(-5);
      v23 = v4[5];
      if ( v4[5] != 0 || v4[4] != 62 )
LABEL_250:
        JUMPOUT(0x3477B4);
      *a4 = v4 + 4;
      return sub_347870(v23);
    case 5u:
      if ( v5 - v4 <= 1 )
        return sub_347870(-2);
      return sub_3477AC();
    case 6u:
      if ( v5 - v4 > 2 )
        goto LABEL_250;
      return sub_347870(-2);
    case 7u:
      if ( v5 - v4 > 3 )
        goto LABEL_250;
      return sub_347870(-2);
    case 9u:
      v54 = v4 + 2;
      if ( v4 + 2 == v5 )
        return sub_347870(-3);
      v55 = v4[2];
      if ( v4[3] != 0 )
        v56 = sub_344136(v4[3], v55);
      else
        v56 = *(unsigned __int8 *)(v64 + v55 + 72);
      if ( v56 == 10 )
        v54 = v4 + 4;
      *a4 = v54;
      return sub_347870(7);
    case 0xAu:
      *a4 = v4 + 2;
      return sub_347870(7);
  }
  switch ( v11 )
  {
    case 5:
      if ( v5 - v10 <= 1 )
        return sub_347870(-2);
      *a4 = v10;
      sub_347870(0);
LABEL_25:
      if ( v5 - v10 <= 2 )
        return sub_347870(-2);
      *a4 = v10;
      sub_347870(0);
LABEL_27:
      if ( v5 - v10 <= 3 )
        return sub_347870(-2);
      *a4 = v10;
      sub_347870(0);
LABEL_29:
      v13 = v4 + 4;
      if ( v4 + 4 == v5 )
        return sub_347870(-1);
      v14 = v4[4];
      if ( v4[5] != 0 )
        v15 = sub_344136(v4[5], v14);
      else
        v15 = *(unsigned __int8 *)(v64 + v14 + 72);
      if ( v15 != 20 )
      {
        if ( v15 != 27 )
          goto LABEL_50;
        v16 = (int)(v4 + 6);
        if ( v4 + 6 != v5 )
        {
          if ( v4[7] != 0 || v4[6] != 45 )
          {
            *a4 = (unsigned __int8 *)v16;
            sub_347870(0);
          }
          v17 = sub_346B88(v64, v16, v5, a4);
          sub_347870(v17);
        }
        sub_347870(-1);
      }
      v4 += 6;
      if ( v5 - v4 <= 11 )
        goto LABEL_49;
      v18 = 0;
      v19 = "CDATA[CDATA[version";
      break;
    case 6:
      goto LABEL_25;
    case 7:
      goto LABEL_27;
    case 15:
      goto LABEL_51;
    case 16:
      goto LABEL_29;
    case 17:
      goto LABEL_52;
    case 22:
    case 24:
      goto LABEL_21;
    case 29:
      if ( (dword_44A1B8[8 * byte_44A7B8[v65] + (v57 >> 5)] & (1 << (v57 & 0x1F))) == 0 )
      {
        *a4 = v10;
        sub_347870(0);
      }
LABEL_21:
      v12 = v4 + 4;
      while ( 2 )
      {
        if ( v12 == v5 )
          return sub_347870(-1);
        v29 = *v12;
        v60 = v12[1];
        if ( v12[1] != 0 )
          v30 = sub_344136(v60, v29);
        else
          v30 = *(unsigned __int8 *)(v64 + v29 + 72);
        switch ( v30 )
        {
          case 5:
            if ( v5 - v12 > 1 )
              goto LABEL_210;
            return sub_347870(-2);
          case 6:
            if ( v5 - v12 <= 2 )
              return sub_347870(-2);
            goto LABEL_210;
          case 7:
            if ( v5 - v12 <= 3 )
              return sub_347870(-2);
            goto LABEL_210;
          case 9:
          case 10:
          case 21:
LABEL_120:
            v12 += 2;
            if ( v12 == v5 )
              return sub_347870(-1);
            v31 = v12[1];
            v32 = *v12;
            if ( v12[1] != 0 )
              v33 = sub_344136(v12[1], v32);
            else
              v33 = *(unsigned __int8 *)(v64 + v32 + 72);
            break;
          case 11:
LABEL_211:
            *a4 = v12 + 2;
            return sub_347870(2);
          case 17:
LABEL_212:
            if ( v12 + 2 == v5 )
              return sub_347870(-1);
            if ( v12[3] == 0 && v12[2] == 62 )
            {
              *a4 = v12 + 4;
              return sub_347870(4);
            }
            else
            {
              *a4 = v12 + 2;
              return sub_347870(0);
            }
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
            goto LABEL_104;
          case 29:
            v23 = dword_44A1B8[8 * byte_44A6B8[v60] + (v29 >> 5)] & (1 << (v29 & 0x1F));
            if ( v23 != 0 )
            {
LABEL_104:
              v12 += 2;
              continue;
            }
            *a4 = v12;
            return sub_347870(v23);
          default:
LABEL_210:
            *a4 = v12;
            return sub_347870(0);
        }
        break;
      }
      switch ( v33 )
      {
        case 5:
          if ( v5 - v12 > 1 )
            goto LABEL_210;
          return sub_347870(-2);
        case 6:
          if ( v5 - v12 > 2 )
            goto LABEL_210;
          return sub_347870(-2);
        case 7:
          if ( v5 - v12 > 3 )
            goto LABEL_210;
          return sub_347870(-2);
        case 9:
        case 10:
        case 21:
          goto LABEL_120;
        case 11:
          goto LABEL_211;
        case 17:
          goto LABEL_212;
        case 22:
        case 24:
          goto LABEL_128;
        case 29:
          v23 = dword_44A1B8[8 * byte_44A7B8[v31] + (*v12 >> 5)] & (1 << (*v12 & 0x1F));
          if ( v23 == 0 )
          {
            *a4 = v12;
            return sub_347870(v23);
          }
LABEL_128:
          v67 = v12 + 2;
          while ( 1 )
          {
            v12 = v67;
            if ( v67 == v5 )
              return sub_347870(-1);
            v34 = *v67;
            v61 = v67[1];
            v35 = v67[1] != 0 ? sub_344136(v61, v34) : *(unsigned __int8 *)(v64 + v34 + 72);
            switch ( v35 )
            {
              case 5:
                if ( v5 - v12 <= 1 )
                  return sub_347870(-2);
                goto LABEL_198;
              case 6:
                if ( v5 - v12 > 2 )
                  goto LABEL_198;
                return sub_347870(-2);
              case 7:
                if ( v5 - v12 > 3 )
                  goto LABEL_198;
                return sub_347870(-2);
              case 9:
              case 10:
              case 21:
                goto LABEL_143;
              case 14:
                goto LABEL_157;
              case 22:
              case 24:
              case 25:
              case 26:
              case 27:
                goto LABEL_128;
              case 29:
                v23 = dword_44A1B8[8 * byte_44A6B8[v61] + (v34 >> 5)] & (1 << (v34 & 0x1F));
                if ( v23 != 0 )
                  goto LABEL_128;
                *a4 = v12;
                return sub_347870(v23);
              default:
                goto LABEL_198;
            }
            while ( 1 )
            {
LABEL_143:
              v36 = v67;
              v12 = v67 + 2;
              v67 = v12;
              if ( v12 == v5 )
                return sub_347870(-1);
              v37 = v36[2];
              v38 = v36[3] != 0 ? sub_344136(v36[3], v37) : *(unsigned __int8 *)(v64 + v37 + 72);
              if ( v38 == 14 )
                break;
              v39 = v38 - 9;
              if ( v39 > 0xC || ((1 << v39) & 0x1003) == 0 )
              {
LABEL_198:
                *a4 = v12;
                return sub_347870(0);
              }
            }
            while ( 1 )
            {
LABEL_157:
              v43 = v67;
              v67 += 2;
              v62 = v67;
              if ( v67 == v5 )
                return sub_347870(-1);
              v40 = v43[2];
              v41 = v43[3] != 0 ? sub_344136(v43[3], v40) : *(unsigned __int8 *)(v64 + v40 + 72);
              if ( (unsigned int)(v41 - 12) <= 1 )
                break;
              v42 = v41 - 9;
              if ( v42 > 0xC || ((1 << v42) & 0x1003) == 0 )
              {
                *a4 = v62;
                return sub_347870(0);
              }
            }
LABEL_162:
            v44 = v43 + 4;
            while ( 1 )
            {
              v67 = v44;
LABEL_164:
              v43 = v67;
              if ( v67 == v5 )
                return sub_347870(-1);
              v45 = *v67;
              v46 = v67[1] != 0 ? sub_344136(v67[1], v45) : *(unsigned __int8 *)(v64 + v45 + 72);
              if ( v46 == v41 )
                break;
              switch ( v46 )
              {
                case 0:
                case 1:
                case 2:
                case 8:
                  *a4 = v43;
                  return sub_347870(0);
                case 3:
                  v23 = sub_344594(v64, v43 + 2, v5, &v67);
                  if ( v23 > 0 )
                    goto LABEL_164;
                  if ( v23 == 0 )
                    *a4 = v67;
                  return sub_347870(v23);
                case 5:
                  if ( v5 - v43 <= 1 )
                    return sub_347870(-2);
                  goto LABEL_178;
                case 6:
                  if ( v5 - v43 <= 2 )
                    return sub_347870(-2);
                  v44 = v43 + 3;
                  continue;
                case 7:
                  if ( v5 - v43 > 3 )
                    goto LABEL_162;
                  return sub_347870(-2);
                default:
LABEL_178:
                  v44 = v43 + 2;
                  break;
              }
            }
            v67 = v43 + 2;
            if ( v43 + 2 == v5 )
              return sub_347870(-1);
            v47 = v43[2];
            if ( v43[3] != 0 )
              v48 = sub_344136(v43[3], v47);
            else
              v48 = *(unsigned __int8 *)(v64 + v47 + 72);
            switch ( v48 )
            {
              case 9:
              case 10:
              case 21:
LABEL_185:
                v49 = v67;
                v12 = v67 + 2;
                v67 = v12;
                if ( v12 == v5 )
                  return sub_347870(-1);
                v63 = v49[3];
                v50 = v49[2];
                if ( v49[3] != 0 )
                  v51 = sub_344136(v63, v50);
                else
                  v51 = *(unsigned __int8 *)(v64 + v50 + 72);
                break;
              case 11:
LABEL_199:
                *a4 = v67 + 2;
                return sub_347870(1);
              case 17:
LABEL_200:
                v52 = v67;
                v53 = v67 + 2;
                v67 = v53;
                if ( v53 == v5 )
                  return sub_347870(-1);
                if ( v52[3] == 0 && v52[2] == 62 )
                {
                  *a4 = v52 + 4;
                  return sub_347870(3);
                }
                else
                {
                  *a4 = v53;
                  return sub_347870(0);
                }
              default:
                *a4 = v43 + 2;
                return sub_347870(0);
            }
            switch ( v51 )
            {
              case 5:
                if ( v5 - v12 > 1 )
                  goto LABEL_198;
                return sub_347870(-2);
              case 6:
                if ( v5 - v12 > 2 )
                  goto LABEL_198;
                return sub_347870(-2);
              case 7:
                if ( v5 - v12 > 3 )
                  goto LABEL_198;
                return sub_347870(-2);
              case 9:
              case 10:
              case 21:
                goto LABEL_185;
              case 11:
                goto LABEL_199;
              case 17:
                goto LABEL_200;
              case 22:
              case 24:
                goto LABEL_192;
              case 29:
                v23 = dword_44A1B8[8 * byte_44A7B8[v63] + (v49[2] >> 5)] & (1 << (v49[2] & 0x1F));
                if ( v23 == 0 )
                {
                  *a4 = v12;
                  return sub_347870(v23);
                }
LABEL_192:
                v67 = v49 + 4;
                break;
              default:
                goto LABEL_198;
            }
          }
        default:
          goto LABEL_210;
      }
    default:
      *a4 = v10;
      return sub_347870(0);
  }
  do
  {
    if ( v4[1] == 0 )
      goto LABEL_46;
    do
    {
      *a4 = v4;
      sub_347870(0);
LABEL_46:
      ;
    }
    while ( *v4 != (unsigned __int8)v19[v18] );
    ++v18;
    v4 += 2;
  }
  while ( v18 != 6 );
  *a4 = v4;
  sub_347870(8);
LABEL_49:
  sub_347870(-1);
LABEL_50:
  *a4 = v13;
  sub_347870(0);
LABEL_51:
  v20 = sub_346C94(v64, v4 + 4, v5, a4);
  sub_347870(v20);
LABEL_52:
  v21 = v4 + 4;
  if ( v4 + 4 == v5 )
    return sub_347870(-1);
  v66 = v4[5];
  v58 = v4[4];
  if ( v4[5] != 0 )
    v22 = sub_344136(v66, v58);
  else
    v22 = *(unsigned __int8 *)(v64 + v4[4] + 72);
  if ( v22 == 7 )
  {
    if ( v5 - v21 > 3 )
      goto LABEL_77;
  }
  else
  {
    if ( v22 > 7 )
    {
      if ( v22 != 24 )
      {
        if ( v22 == 29 )
        {
          v23 = dword_44A1B8[8 * byte_44A7B8[v66] + (v58 >> 5)] & (1 << (v58 & 0x1F));
          if ( v23 == 0 )
          {
            *a4 = v21;
            return sub_347870(v23);
          }
        }
        else if ( v22 != 22 )
        {
          goto LABEL_77;
        }
      }
      v12 = v4 + 6;
      while ( 1 )
      {
        if ( v12 == v5 )
          return sub_347870(-1);
        v25 = *v12;
        v59 = v12[1];
        if ( v12[1] != 0 )
          v26 = sub_344136(v59, v25);
        else
          v26 = *(unsigned __int8 *)(v64 + v25 + 72);
        switch ( v26 )
        {
          case 5:
            if ( v5 - v12 > 1 )
              goto LABEL_210;
            return sub_347870(-2);
          case 6:
            if ( v5 - v12 > 2 )
              goto LABEL_210;
            return sub_347870(-2);
          case 7:
            if ( v5 - v12 > 3 )
              goto LABEL_210;
            return sub_347870(-2);
          case 9:
          case 10:
          case 21:
            while ( 2 )
            {
              v12 += 2;
              if ( v12 != v5 )
              {
                v27 = *v12;
                if ( v12[1] != 0 )
                  v28 = sub_344136(v12[1], v27);
                else
                  v28 = *(unsigned __int8 *)(v64 + v27 + 72);
                switch ( v28 )
                {
                  case 9:
                  case 10:
                  case 21:
                    continue;
                  case 11:
                    goto LABEL_97;
                  default:
                    goto LABEL_210;
                }
              }
              return sub_347870(-1);
            }
          case 11:
LABEL_97:
            *a4 = v12 + 2;
            return sub_347870(5);
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
            goto LABEL_78;
          case 29:
            v23 = dword_44A1B8[8 * byte_44A6B8[v59] + (v25 >> 5)] & (1 << (v25 & 0x1F));
            if ( v23 == 0 )
            {
              *a4 = v12;
              return sub_347870(v23);
            }
LABEL_78:
            v12 += 2;
            break;
          default:
            goto LABEL_210;
        }
      }
    }
    if ( v22 == 5 )
    {
      if ( v5 - v21 > 1 )
        goto LABEL_77;
    }
    else if ( v22 != 6 || v5 - v21 > 2 )
    {
LABEL_77:
      *a4 = v21;
      return sub_347870(0);
    }
  }
  return sub_347870(-2);
}


//======================================================================
// sub_3476D2
// address: 0x003476D2   size: 0x6 (6 bytes)
//======================================================================
int sub_3476D2()
{
  return sub_347870(-1);
}


//======================================================================
// sub_3477AC
// address: 0x003477AC   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_3477AC(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  unsigned __int8 *v7; // r6
  unsigned __int8 **v8; // r7
  unsigned __int8 *v9; // r5
  unsigned __int8 *v10; // r3
  unsigned int v11; // r1
  int v12; // r0
  int v13; // r0

  v9 = (unsigned __int8 *)(v6 + 2);
  while ( 2 )
  {
    if ( v9 == v7 )
    {
LABEL_25:
      *v8 = v9;
      return sub_347870(6);
    }
    v11 = *v9;
    if ( v9[1] != 0 )
      v12 = sub_344136(v9[1], v11);
    else
      v12 = *(unsigned __int8 *)(a6 + v11 + 72);
    switch ( v12 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
      case 9:
      case 10:
        goto LABEL_25;
      case 4:
        v10 = v9 + 2;
        if ( v9 + 2 == v7 )
          goto LABEL_25;
        if ( v9[3] != 0 || v9[2] != 93 )
          goto LABEL_3;
        if ( v9 + 4 == v7 )
          goto LABEL_25;
        v13 = v9[5];
        if ( v9[5] != 0 || v9[4] != 62 )
        {
LABEL_3:
          v9 = v10;
          continue;
        }
        *v8 = v9 + 4;
        return sub_347870(v13);
      case 5:
        if ( v7 - v9 > 1 )
          goto LABEL_24;
        *v8 = v9;
        v13 = 6;
        return sub_347870(v13);
      case 6:
        if ( v7 - v9 <= 2 )
          goto LABEL_25;
        v10 = v9 + 3;
        goto LABEL_3;
      case 7:
        if ( v7 - v9 <= 3 )
          goto LABEL_25;
        v10 = v9 + 4;
        goto LABEL_3;
      default:
LABEL_24:
        v10 = v9 + 2;
        goto LABEL_3;
    }
  }
}


//======================================================================
// sub_347842
// address: 0x00347842   size: 0x6 (6 bytes)
//======================================================================
int sub_347842()
{
  return sub_347870(-4);
}


//======================================================================
// sub_347848
// address: 0x00347848   size: 0x6 (6 bytes)
//======================================================================
int sub_347848()
{
  return sub_347870(-1);
}


//======================================================================
// sub_347870
// address: 0x00347870   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_347870(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_34787C
// address: 0x0034787C   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_34787C(int a1, int a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *i; // r4
  unsigned int v8; // r1
  int v9; // r0
  unsigned __int8 *v10; // r3
  int v12; // r0

  for ( i = (unsigned __int8 *)(a2 + 2); ; i = v10 )
  {
    if ( i == a3 )
      goto LABEL_35;
    v8 = i[1];
    if ( *i != 0 )
      v9 = sub_344136(*i, v8);
    else
      v9 = *(unsigned __int8 *)(a1 + v8 + 72);
    if ( v9 == 6 )
    {
      if ( a3 - i <= 2 )
        goto LABEL_34;
      v10 = i + 3;
      continue;
    }
    if ( v9 <= 6 )
    {
      if ( v9 >= 0 )
      {
        if ( v9 <= 1 )
          goto LABEL_22;
        if ( v9 == 5 && a3 - i <= 1 )
        {
LABEL_34:
          v12 = 2;
          return -v12;
        }
      }
LABEL_32:
      v10 = i + 2;
      continue;
    }
    if ( v9 == 8 )
    {
LABEL_22:
      *a4 = i;
      return 0;
    }
    if ( v9 < 8 )
    {
      if ( a3 - i <= 3 )
        goto LABEL_34;
      v10 = i + 4;
      continue;
    }
    if ( v9 != 27 )
      goto LABEL_32;
    v10 = i + 2;
    if ( i + 2 == a3 )
      goto LABEL_35;
    if ( i[2] == 0 && i[3] == 45 )
      break;
  }
  if ( i + 4 == a3 )
  {
LABEL_35:
    v12 = 1;
    return -v12;
  }
  if ( i[4] != 0 || i[5] != 62 )
  {
    *a4 = i + 4;
    return 0;
  }
  *a4 = i + 6;
  return 13;
}


//======================================================================
// sub_347920
// address: 0x00347920   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_347920(unsigned __int8 *a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int v4; // r1
  int v5; // r4
  int v6; // r0

  *a3 = 11;
  v3 = 1;
  if ( a2 - (_DWORD)a1 == 6 )
  {
    v4 = *a1;
    if ( *a1 == 0 )
    {
      if ( a1[1] == 88 )
      {
        v4 = 1;
      }
      else if ( a1[1] != 120 )
      {
        return v3;
      }
      v3 = 1;
      if ( a1[2] == 0 )
      {
        if ( a1[3] == 77 )
        {
          v4 = 1;
        }
        else if ( a1[3] != 109 )
        {
          return v3;
        }
        v5 = a1[4];
        v3 = 1;
        if ( a1[4] == 0 )
        {
          v6 = a1[5];
          v3 = v5;
          if ( v6 != 76 )
          {
            if ( (unsigned __int8)v6 != 108 )
              return 1;
            if ( v4 == 0 )
            {
              *a3 = 12;
              return 1;
            }
          }
        }
      }
    }
  }
  return v3;
}


//======================================================================
// sub_347988
// address: 0x00347988   size: 0x1DE (478 bytes)
//======================================================================
int __fastcall sub_347988(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  int v6; // r0
  int v7; // r7
  unsigned int v8; // r4
  int v9; // r0
  unsigned __int8 *v10; // r4
  int result; // r0
  unsigned int v12; // r7
  int v13; // r0
  unsigned __int8 *v14; // r7
  unsigned int v15; // r1
  int v16; // r0
  unsigned __int8 *v17; // r3
  unsigned int v19; // [sp+8h] [bp-1Ch]
  _DWORD v21[2]; // [sp+1Ch] [bp-8h] BYREF

  if ( a2 == a3 )
  {
LABEL_2:
    v6 = 1;
    return -v6;
  }
  v7 = *a2;
  v8 = a2[1];
  if ( *a2 != 0 )
    v9 = sub_344136(*a2, a2[1]);
  else
    v9 = *(unsigned __int8 *)(a1 + v8 + 72);
  if ( v9 == 7 )
  {
    if ( a3 - a2 <= 3 )
      goto LABEL_18;
  }
  else
  {
    if ( v9 > 7 )
    {
      if ( v9 != 24 )
      {
        if ( v9 == 29 )
        {
          if ( (dword_44A1B8[8 * byte_44A7B8[v7] + (v8 >> 5)] & (1 << (v8 & 0x1F))) == 0 )
            goto LABEL_23;
        }
        else if ( v9 != 22 )
        {
          goto LABEL_23;
        }
      }
      v10 = a2 + 2;
      while ( 1 )
      {
        if ( v10 == a3 )
          goto LABEL_2;
        v12 = v10[1];
        v19 = *v10;
        if ( *v10 != 0 )
          v13 = sub_344136(v19, v12);
        else
          v13 = *(unsigned __int8 *)(a1 + v12 + 72);
        switch ( v13 )
        {
          case 5:
            if ( a3 - v10 <= 1 )
              goto LABEL_18;
            goto LABEL_63;
          case 6:
            if ( a3 - v10 <= 2 )
              goto LABEL_18;
            goto LABEL_63;
          case 7:
            if ( a3 - v10 <= 3 )
              goto LABEL_18;
            goto LABEL_63;
          case 9:
          case 10:
          case 21:
            result = sub_347920(a2, (int)v10, v21);
            v14 = v10 + 2;
            if ( result == 0 )
              goto LABEL_58;
            while ( v14 != a3 )
            {
              v15 = v14[1];
              if ( *v14 != 0 )
                v16 = sub_344136(*v14, v15);
              else
                v16 = *(unsigned __int8 *)(a1 + v15 + 72);
              switch ( v16 )
              {
                case 0:
                case 1:
                case 8:
                  *a4 = v14;
                  return 0;
                case 5:
                  if ( a3 - v14 <= 1 )
                    goto LABEL_18;
                  goto LABEL_55;
                case 6:
                  if ( a3 - v14 <= 2 )
                    goto LABEL_18;
                  v17 = v14 + 3;
                  goto LABEL_56;
                case 7:
                  if ( a3 - v14 <= 3 )
                    goto LABEL_18;
                  v17 = v14 + 4;
                  goto LABEL_56;
                case 15:
                  v17 = v14 + 2;
                  if ( v14 + 2 == a3 )
                    goto LABEL_2;
                  if ( v14[2] == 0 && v14[3] == 62 )
                    goto LABEL_62;
                  goto LABEL_56;
                default:
LABEL_55:
                  v17 = v14 + 2;
LABEL_56:
                  v14 = v17;
                  break;
              }
            }
            goto LABEL_2;
          case 15:
            v14 = v10;
            result = sub_347920(a2, (int)v10, v21);
            if ( result == 0 )
              goto LABEL_58;
            v10 += 2;
            if ( v10 == a3 )
              goto LABEL_2;
            if ( v14[2] == 0 && v14[3] == 62 )
            {
LABEL_62:
              *a4 = v14 + 4;
              return v21[0];
            }
LABEL_63:
            *a4 = v10;
            return 0;
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
            goto LABEL_27;
          case 29:
            result = dword_44A1B8[8 * byte_44A6B8[v19] + (v12 >> 5)] & (1 << (v12 & 0x1F));
            if ( result == 0 )
            {
LABEL_58:
              *a4 = v10;
              return result;
            }
LABEL_27:
            v10 += 2;
            break;
          default:
            goto LABEL_63;
        }
      }
    }
    if ( v9 != 5 )
    {
      if ( v9 == 6 && a3 - a2 <= 2 )
        goto LABEL_18;
      goto LABEL_23;
    }
    if ( a3 - a2 <= 1 )
    {
LABEL_18:
      v6 = 2;
      return -v6;
    }
  }
LABEL_23:
  *a4 = a2;
  return 0;
}


//======================================================================
// sub_347B78
// address: 0x00347B78   size: 0x84E (2126 bytes)
//======================================================================
int __fastcall sub_347B78(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  unsigned __int8 *v5; // r6
  unsigned int v7; // r3
  unsigned int v8; // r1
  unsigned int v9; // r0
  unsigned __int8 *v10; // r5
  int v11; // r0
  unsigned __int8 *v12; // r4
  unsigned __int8 *v13; // r5
  unsigned int v14; // r1
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r3
  char *v19; // r2
  int v20; // r0
  unsigned __int8 *v21; // r5
  int v22; // r0
  int v23; // r0
  unsigned int v25; // r5
  int v26; // r0
  unsigned int v27; // r1
  int v28; // r0
  unsigned int v29; // r5
  int v30; // r0
  int v31; // r5
  unsigned int v32; // r1
  int v33; // r0
  unsigned int v34; // r5
  int v35; // r0
  unsigned __int8 *v36; // r3
  unsigned int v37; // r1
  int v38; // r0
  unsigned int v39; // r0
  unsigned int v40; // r1
  int v41; // r4
  unsigned int v42; // r4
  unsigned __int8 *v43; // r5
  unsigned __int8 *v44; // r5
  unsigned int v45; // r1
  int v46; // r0
  unsigned int v47; // r1
  int v48; // r0
  unsigned __int8 *v49; // r5
  unsigned int v50; // r1
  int v51; // r0
  unsigned __int8 *v52; // r3
  unsigned __int8 *v53; // r2
  unsigned __int8 *v54; // r5
  unsigned int v55; // r1
  int v56; // r3
  unsigned int v57; // [sp+0h] [bp-1Ch]
  unsigned int v58; // [sp+0h] [bp-1Ch]
  unsigned int v59; // [sp+0h] [bp-1Ch]
  unsigned int v60; // [sp+0h] [bp-1Ch]
  unsigned int v61; // [sp+0h] [bp-1Ch]
  unsigned __int8 *v62; // [sp+0h] [bp-1Ch]
  unsigned int v63; // [sp+0h] [bp-1Ch]
  int v64; // [sp+4h] [bp-18h]
  unsigned int v65; // [sp+8h] [bp-14h]
  unsigned int v66; // [sp+8h] [bp-14h]
  unsigned __int8 *v67; // [sp+14h] [bp-8h] BYREF

  v64 = a1;
  v4 = a2;
  v5 = a3;
  if ( a2 == a3 )
    a1 = sub_348536();
  if ( ((a3 - a2) & 1) != 0 )
  {
    v7 = (a3 - a2) & 0xFFFFFFFE;
    if ( v7 == 0 )
      sub_34853C(a1);
    v5 = &a2[v7];
  }
  v8 = v4[1];
  if ( *v4 != 0 )
    v9 = sub_344136(*v4, v8);
  else
    v9 = *(unsigned __int8 *)(v64 + v8 + 72);
  if ( v9 > 0xA )
    v9 = sub_3484A0();
  switch ( v9 )
  {
    case 0u:
    case 1u:
    case 8u:
      *a4 = v4;
      return sub_348564(0);
    case 2u:
      v10 = v4 + 2;
      if ( v4 + 2 == v5 )
        sub_3483C6();
      v65 = v4[2];
      v57 = v4[3];
      if ( v4[2] != 0 )
        v11 = sub_344136(v65, v57);
      else
        v11 = *(unsigned __int8 *)(v64 + v4[3] + 72);
      break;
    case 3u:
      v23 = sub_345134(v64, v4 + 2, v5, a4);
      return sub_348564(v23);
    case 4u:
      if ( v4 + 2 == v5 )
        return sub_348564(-5);
      if ( v4[2] != 0 || v4[3] != 93 )
        goto LABEL_250;
      if ( v4 + 4 == v5 )
        return sub_348564(-5);
      v23 = v4[4];
      if ( v4[4] != 0 || v4[5] != 62 )
LABEL_250:
        JUMPOUT(0x3484A8);
      *a4 = v4 + 4;
      return sub_348564(v23);
    case 5u:
      if ( v5 - v4 <= 1 )
        return sub_348564(-2);
      return sub_3484A0();
    case 6u:
      if ( v5 - v4 > 2 )
        goto LABEL_250;
      return sub_348564(-2);
    case 7u:
      if ( v5 - v4 > 3 )
        goto LABEL_250;
      return sub_348564(-2);
    case 9u:
      v54 = v4 + 2;
      if ( v4 + 2 == v5 )
        return sub_348564(-3);
      v55 = v4[3];
      if ( v4[2] != 0 )
        v56 = sub_344136(v4[2], v55);
      else
        v56 = *(unsigned __int8 *)(v64 + v55 + 72);
      if ( v56 == 10 )
        v54 = v4 + 4;
      *a4 = v54;
      return sub_348564(7);
    case 0xAu:
      *a4 = v4 + 2;
      return sub_348564(7);
  }
  switch ( v11 )
  {
    case 5:
      if ( v5 - v10 <= 1 )
        return sub_348564(-2);
      *a4 = v10;
      sub_348564(0);
LABEL_25:
      if ( v5 - v10 <= 2 )
        return sub_348564(-2);
      *a4 = v10;
      sub_348564(0);
LABEL_27:
      if ( v5 - v10 <= 3 )
        return sub_348564(-2);
      *a4 = v10;
      sub_348564(0);
LABEL_29:
      v13 = v4 + 4;
      if ( v4 + 4 == v5 )
        return sub_348564(-1);
      v14 = v4[5];
      if ( v4[4] != 0 )
        v15 = sub_344136(v4[4], v14);
      else
        v15 = *(unsigned __int8 *)(v64 + v14 + 72);
      if ( v15 != 20 )
      {
        if ( v15 != 27 )
          goto LABEL_50;
        v16 = (int)(v4 + 6);
        if ( v4 + 6 != v5 )
        {
          if ( v4[6] != 0 || v4[7] != 45 )
          {
            *a4 = (unsigned __int8 *)v16;
            sub_348564(0);
          }
          v17 = sub_34787C(v64, v16, v5, a4);
          sub_348564(v17);
        }
        sub_348564(-1);
      }
      v4 += 6;
      if ( v5 - v4 <= 11 )
        goto LABEL_49;
      v18 = 0;
      v19 = "CDATA[version";
      break;
    case 6:
      goto LABEL_25;
    case 7:
      goto LABEL_27;
    case 15:
      goto LABEL_51;
    case 16:
      goto LABEL_29;
    case 17:
      goto LABEL_52;
    case 22:
    case 24:
      goto LABEL_21;
    case 29:
      if ( (dword_44A1B8[8 * byte_44A7B8[v65] + (v57 >> 5)] & (1 << (v57 & 0x1F))) == 0 )
      {
        *a4 = v10;
        sub_348564(0);
      }
LABEL_21:
      v12 = v4 + 4;
      while ( 2 )
      {
        if ( v12 == v5 )
          return sub_348564(-1);
        v29 = v12[1];
        v60 = *v12;
        if ( *v12 != 0 )
          v30 = sub_344136(v60, v29);
        else
          v30 = *(unsigned __int8 *)(v64 + v29 + 72);
        switch ( v30 )
        {
          case 5:
            if ( v5 - v12 > 1 )
              goto LABEL_210;
            return sub_348564(-2);
          case 6:
            if ( v5 - v12 <= 2 )
              return sub_348564(-2);
            goto LABEL_210;
          case 7:
            if ( v5 - v12 <= 3 )
              return sub_348564(-2);
            goto LABEL_210;
          case 9:
          case 10:
          case 21:
LABEL_120:
            v12 += 2;
            if ( v12 == v5 )
              return sub_348564(-1);
            v31 = *v12;
            v32 = v12[1];
            if ( *v12 != 0 )
              v33 = sub_344136(*v12, v32);
            else
              v33 = *(unsigned __int8 *)(v64 + v32 + 72);
            break;
          case 11:
LABEL_211:
            *a4 = v12 + 2;
            return sub_348564(2);
          case 17:
LABEL_212:
            if ( v12 + 2 == v5 )
              return sub_348564(-1);
            if ( v12[2] == 0 && v12[3] == 62 )
            {
              *a4 = v12 + 4;
              return sub_348564(4);
            }
            else
            {
              *a4 = v12 + 2;
              return sub_348564(0);
            }
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
            goto LABEL_104;
          case 29:
            v23 = dword_44A1B8[8 * byte_44A6B8[v60] + (v29 >> 5)] & (1 << (v29 & 0x1F));
            if ( v23 != 0 )
            {
LABEL_104:
              v12 += 2;
              continue;
            }
            *a4 = v12;
            return sub_348564(v23);
          default:
LABEL_210:
            *a4 = v12;
            return sub_348564(0);
        }
        break;
      }
      switch ( v33 )
      {
        case 5:
          if ( v5 - v12 > 1 )
            goto LABEL_210;
          return sub_348564(-2);
        case 6:
          if ( v5 - v12 > 2 )
            goto LABEL_210;
          return sub_348564(-2);
        case 7:
          if ( v5 - v12 > 3 )
            goto LABEL_210;
          return sub_348564(-2);
        case 9:
        case 10:
        case 21:
          goto LABEL_120;
        case 11:
          goto LABEL_211;
        case 17:
          goto LABEL_212;
        case 22:
        case 24:
          goto LABEL_128;
        case 29:
          v23 = dword_44A1B8[8 * byte_44A7B8[v31] + (v12[1] >> 5)] & (1 << (v12[1] & 0x1F));
          if ( v23 == 0 )
          {
            *a4 = v12;
            return sub_348564(v23);
          }
LABEL_128:
          v67 = v12 + 2;
          while ( 1 )
          {
            v12 = v67;
            if ( v67 == v5 )
              return sub_348564(-1);
            v34 = v67[1];
            v61 = *v67;
            v35 = *v67 != 0 ? sub_344136(v61, v34) : *(unsigned __int8 *)(v64 + v34 + 72);
            switch ( v35 )
            {
              case 5:
                if ( v5 - v12 <= 1 )
                  return sub_348564(-2);
                goto LABEL_198;
              case 6:
                if ( v5 - v12 > 2 )
                  goto LABEL_198;
                return sub_348564(-2);
              case 7:
                if ( v5 - v12 > 3 )
                  goto LABEL_198;
                return sub_348564(-2);
              case 9:
              case 10:
              case 21:
                goto LABEL_143;
              case 14:
                goto LABEL_157;
              case 22:
              case 24:
              case 25:
              case 26:
              case 27:
                goto LABEL_128;
              case 29:
                v23 = dword_44A1B8[8 * byte_44A6B8[v61] + (v34 >> 5)] & (1 << (v34 & 0x1F));
                if ( v23 != 0 )
                  goto LABEL_128;
                *a4 = v12;
                return sub_348564(v23);
              default:
                goto LABEL_198;
            }
            while ( 1 )
            {
LABEL_143:
              v36 = v67;
              v12 = v67 + 2;
              v67 = v12;
              if ( v12 == v5 )
                return sub_348564(-1);
              v37 = v36[3];
              v38 = v36[2] != 0 ? sub_344136(v36[2], v37) : *(unsigned __int8 *)(v64 + v37 + 72);
              if ( v38 == 14 )
                break;
              v39 = v38 - 9;
              if ( v39 > 0xC || ((1 << v39) & 0x1003) == 0 )
              {
LABEL_198:
                *a4 = v12;
                return sub_348564(0);
              }
            }
            while ( 1 )
            {
LABEL_157:
              v43 = v67;
              v67 += 2;
              v62 = v67;
              if ( v67 == v5 )
                return sub_348564(-1);
              v40 = v43[3];
              v41 = v43[2] != 0 ? sub_344136(v43[2], v40) : *(unsigned __int8 *)(v64 + v40 + 72);
              if ( (unsigned int)(v41 - 12) <= 1 )
                break;
              v42 = v41 - 9;
              if ( v42 > 0xC || ((1 << v42) & 0x1003) == 0 )
              {
                *a4 = v62;
                return sub_348564(0);
              }
            }
LABEL_162:
            v44 = v43 + 4;
            while ( 1 )
            {
              v67 = v44;
LABEL_164:
              v43 = v67;
              if ( v67 == v5 )
                return sub_348564(-1);
              v45 = v67[1];
              v46 = *v67 != 0 ? sub_344136(*v67, v45) : *(unsigned __int8 *)(v64 + v45 + 72);
              if ( v46 == v41 )
                break;
              switch ( v46 )
              {
                case 0:
                case 1:
                case 2:
                case 8:
                  *a4 = v43;
                  return sub_348564(0);
                case 3:
                  v23 = sub_345134(v64, v43 + 2, v5, &v67);
                  if ( v23 > 0 )
                    goto LABEL_164;
                  if ( v23 == 0 )
                    *a4 = v67;
                  return sub_348564(v23);
                case 5:
                  if ( v5 - v43 <= 1 )
                    return sub_348564(-2);
                  goto LABEL_178;
                case 6:
                  if ( v5 - v43 <= 2 )
                    return sub_348564(-2);
                  v44 = v43 + 3;
                  continue;
                case 7:
                  if ( v5 - v43 > 3 )
                    goto LABEL_162;
                  return sub_348564(-2);
                default:
LABEL_178:
                  v44 = v43 + 2;
                  break;
              }
            }
            v67 = v43 + 2;
            if ( v43 + 2 == v5 )
              return sub_348564(-1);
            v47 = v43[3];
            if ( v43[2] != 0 )
              v48 = sub_344136(v43[2], v47);
            else
              v48 = *(unsigned __int8 *)(v64 + v47 + 72);
            switch ( v48 )
            {
              case 9:
              case 10:
              case 21:
LABEL_185:
                v49 = v67;
                v12 = v67 + 2;
                v67 = v12;
                if ( v12 == v5 )
                  return sub_348564(-1);
                v63 = v49[2];
                v50 = v49[3];
                if ( v49[2] != 0 )
                  v51 = sub_344136(v63, v50);
                else
                  v51 = *(unsigned __int8 *)(v64 + v50 + 72);
                break;
              case 11:
LABEL_199:
                *a4 = v67 + 2;
                return sub_348564(1);
              case 17:
LABEL_200:
                v52 = v67;
                v53 = v67 + 2;
                v67 = v53;
                if ( v53 == v5 )
                  return sub_348564(-1);
                if ( v52[2] == 0 && v52[3] == 62 )
                {
                  *a4 = v52 + 4;
                  return sub_348564(3);
                }
                else
                {
                  *a4 = v53;
                  return sub_348564(0);
                }
              default:
                *a4 = v43 + 2;
                return sub_348564(0);
            }
            switch ( v51 )
            {
              case 5:
                if ( v5 - v12 > 1 )
                  goto LABEL_198;
                return sub_348564(-2);
              case 6:
                if ( v5 - v12 > 2 )
                  goto LABEL_198;
                return sub_348564(-2);
              case 7:
                if ( v5 - v12 > 3 )
                  goto LABEL_198;
                return sub_348564(-2);
              case 9:
              case 10:
              case 21:
                goto LABEL_185;
              case 11:
                goto LABEL_199;
              case 17:
                goto LABEL_200;
              case 22:
              case 24:
                goto LABEL_192;
              case 29:
                v23 = dword_44A1B8[8 * byte_44A7B8[v63] + (v49[3] >> 5)] & (1 << (v49[3] & 0x1F));
                if ( v23 == 0 )
                {
                  *a4 = v12;
                  return sub_348564(v23);
                }
LABEL_192:
                v67 = v49 + 4;
                break;
              default:
                goto LABEL_198;
            }
          }
        default:
          goto LABEL_210;
      }
    default:
      *a4 = v10;
      return sub_348564(0);
  }
  do
  {
    if ( *v4 == 0 )
      goto LABEL_46;
    do
    {
      *a4 = v4;
      sub_348564(0);
LABEL_46:
      ;
    }
    while ( v4[1] != (unsigned __int8)v19[v18] );
    ++v18;
    v4 += 2;
  }
  while ( v18 != 6 );
  *a4 = v4;
  sub_348564(8);
LABEL_49:
  sub_348564(-1);
LABEL_50:
  *a4 = v13;
  sub_348564(0);
LABEL_51:
  v20 = sub_347988(v64, v4 + 4, v5, a4);
  sub_348564(v20);
LABEL_52:
  v21 = v4 + 4;
  if ( v4 + 4 == v5 )
    return sub_348564(-1);
  v66 = v4[4];
  v58 = v4[5];
  if ( v4[4] != 0 )
    v22 = sub_344136(v66, v58);
  else
    v22 = *(unsigned __int8 *)(v64 + v4[5] + 72);
  if ( v22 == 7 )
  {
    if ( v5 - v21 > 3 )
      goto LABEL_77;
  }
  else
  {
    if ( v22 > 7 )
    {
      if ( v22 != 24 )
      {
        if ( v22 == 29 )
        {
          v23 = dword_44A1B8[8 * byte_44A7B8[v66] + (v58 >> 5)] & (1 << (v58 & 0x1F));
          if ( v23 == 0 )
          {
            *a4 = v21;
            return sub_348564(v23);
          }
        }
        else if ( v22 != 22 )
        {
          goto LABEL_77;
        }
      }
      v12 = v4 + 6;
      while ( 1 )
      {
        if ( v12 == v5 )
          return sub_348564(-1);
        v25 = v12[1];
        v59 = *v12;
        if ( *v12 != 0 )
          v26 = sub_344136(v59, v25);
        else
          v26 = *(unsigned __int8 *)(v64 + v25 + 72);
        switch ( v26 )
        {
          case 5:
            if ( v5 - v12 > 1 )
              goto LABEL_210;
            return sub_348564(-2);
          case 6:
            if ( v5 - v12 > 2 )
              goto LABEL_210;
            return sub_348564(-2);
          case 7:
            if ( v5 - v12 > 3 )
              goto LABEL_210;
            return sub_348564(-2);
          case 9:
          case 10:
          case 21:
            while ( 2 )
            {
              v12 += 2;
              if ( v12 != v5 )
              {
                v27 = v12[1];
                if ( *v12 != 0 )
                  v28 = sub_344136(*v12, v27);
                else
                  v28 = *(unsigned __int8 *)(v64 + v27 + 72);
                switch ( v28 )
                {
                  case 9:
                  case 10:
                  case 21:
                    continue;
                  case 11:
                    goto LABEL_97;
                  default:
                    goto LABEL_210;
                }
              }
              return sub_348564(-1);
            }
          case 11:
LABEL_97:
            *a4 = v12 + 2;
            return sub_348564(5);
          case 22:
          case 24:
          case 25:
          case 26:
          case 27:
            goto LABEL_78;
          case 29:
            v23 = dword_44A1B8[8 * byte_44A6B8[v59] + (v25 >> 5)] & (1 << (v25 & 0x1F));
            if ( v23 == 0 )
            {
              *a4 = v12;
              return sub_348564(v23);
            }
LABEL_78:
            v12 += 2;
            break;
          default:
            goto LABEL_210;
        }
      }
    }
    if ( v22 == 5 )
    {
      if ( v5 - v21 > 1 )
        goto LABEL_77;
    }
    else if ( v22 != 6 || v5 - v21 > 2 )
    {
LABEL_77:
      *a4 = v21;
      return sub_348564(0);
    }
  }
  return sub_348564(-2);
}


//======================================================================
// sub_3483C6
// address: 0x003483C6   size: 0x6 (6 bytes)
//======================================================================
int sub_3483C6()
{
  return sub_348564(-1);
}


//======================================================================
// sub_3484A0
// address: 0x003484A0   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_3484A0(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  unsigned __int8 *v7; // r6
  unsigned __int8 **v8; // r7
  unsigned __int8 *v9; // r5
  unsigned __int8 *v10; // r3
  unsigned int v11; // r1
  int v12; // r0
  int v13; // r0

  v9 = (unsigned __int8 *)(v6 + 2);
  while ( 2 )
  {
    if ( v9 == v7 )
    {
LABEL_25:
      *v8 = v9;
      return sub_348564(6);
    }
    v11 = v9[1];
    if ( *v9 != 0 )
      v12 = sub_344136(*v9, v11);
    else
      v12 = *(unsigned __int8 *)(a6 + v11 + 72);
    switch ( v12 )
    {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
      case 9:
      case 10:
        goto LABEL_25;
      case 4:
        v10 = v9 + 2;
        if ( v9 + 2 == v7 )
          goto LABEL_25;
        if ( v9[2] != 0 || v9[3] != 93 )
          goto LABEL_3;
        if ( v9 + 4 == v7 )
          goto LABEL_25;
        v13 = v9[4];
        if ( v9[4] != 0 || v9[5] != 62 )
        {
LABEL_3:
          v9 = v10;
          continue;
        }
        *v8 = v9 + 4;
        return sub_348564(v13);
      case 5:
        if ( v7 - v9 > 1 )
          goto LABEL_24;
        *v8 = v9;
        v13 = 6;
        return sub_348564(v13);
      case 6:
        if ( v7 - v9 <= 2 )
          goto LABEL_25;
        v10 = v9 + 3;
        goto LABEL_3;
      case 7:
        if ( v7 - v9 <= 3 )
          goto LABEL_25;
        v10 = v9 + 4;
        goto LABEL_3;
      default:
LABEL_24:
        v10 = v9 + 2;
        goto LABEL_3;
    }
  }
}


//======================================================================
// sub_348536
// address: 0x00348536   size: 0x6 (6 bytes)
//======================================================================
int sub_348536()
{
  return sub_348564(-4);
}


//======================================================================
// sub_34853C
// address: 0x0034853C   size: 0x6 (6 bytes)
//======================================================================
int sub_34853C()
{
  return sub_348564(-1);
}


//======================================================================
// sub_348564
// address: 0x00348564   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_348564(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_348570
// address: 0x00348570   size: 0x11A (282 bytes)
//======================================================================
int __fastcall sub_348570(int a1, int a2, int a3, int *a4, int *a5, int *a6, int *a7)
{
  int v8; // r4
  int v10; // r0
  _BOOL4 v11; // r6
  int v12; // r0
  int v13; // r0
  int v14; // r7
  int v15; // r0
  int v17; // [sp+0h] [bp-Ch]

  v8 = a2;
  if ( a2 == a3 )
  {
    *a4 = 0;
    return 1;
  }
  v10 = sub_345BE8(a1, a2, a3);
  v11 = sub_345C14(v10);
  if ( v11 )
  {
    do
    {
      v8 += *(_DWORD *)(a1 + 64);
      v12 = sub_345BE8(a1, v8, a3);
      v11 = sub_345C14(v12);
    }
    while ( v11 );
    if ( v8 != a3 )
    {
      *a4 = v8;
      while ( 1 )
      {
        v13 = sub_345BE8(a1, v8, a3);
        if ( v13 == -1 )
          goto LABEL_23;
        if ( v13 == 61 )
          break;
        if ( sub_345C14(v13) )
        {
          *a5 = v8;
          do
          {
            v8 += *(_DWORD *)(a1 + 64);
            v17 = sub_345BE8(a1, v8, a3);
          }
          while ( sub_345C14(v17) );
          if ( v17 != 61 )
          {
            v11 = false;
            *a7 = v8;
            return v11;
          }
LABEL_17:
          if ( v8 == *a4 )
          {
LABEL_30:
            *a7 = v8;
            return v11;
          }
          for ( v8 += *(_DWORD *)(a1 + 64); ; v8 += *(_DWORD *)(a1 + 64) )
          {
            v14 = sub_345BE8(a1, v8, a3);
            v11 = sub_345C14(v14);
            if ( !v11 )
              break;
          }
          if ( v14 == 34 || v14 == 39 )
          {
            v8 += *(_DWORD *)(a1 + 64);
            *a6 = v8;
            while ( 1 )
            {
              v15 = sub_345BE8(a1, v8, a3);
              if ( v15 == (unsigned __int8)v14 )
                break;
              if ( (v15 & 0xFFFFFFDF) - 65 > 0x19
                && (unsigned int)(v15 - 48) > 9
                && (unsigned int)(v15 - 45) > 1
                && v15 != 95 )
              {
                goto LABEL_30;
              }
              v8 += *(_DWORD *)(a1 + 64);
            }
            *a7 = v8 + *(_DWORD *)(a1 + 64);
            return 1;
          }
          goto LABEL_23;
        }
        v8 += *(_DWORD *)(a1 + 64);
      }
      *a5 = v8;
      goto LABEL_17;
    }
    *a4 = 0;
    return 1;
  }
LABEL_23:
  *a7 = v8;
  return v11;
}


//======================================================================
// sub_34868C
// address: 0x0034868C   size: 0x16C (364 bytes)
//======================================================================
int __fastcall sub_34868C(int a1, int a2, unsigned __int8 *a3, unsigned __int8 *a4, _DWORD *a5)
{
  _DWORD *v5; // r5
  unsigned int v6; // r6
  _UNKNOWN **v7; // r3
  int v8; // r4
  char *v9; // r6
  int (*v11)(void); // r4
  int v12; // r0
  int v13; // r0

  if ( a3 != a4 )
  {
    v5 = *(_DWORD **)(a1 + 72);
    if ( a4 == a3 + 1 )
    {
      if ( a2 != 1 || (unsigned int)*(unsigned __int8 *)(a1 + 69) - 3 <= 2 )
        goto LABEL_47;
      if ( *a3 == 239 )
        goto LABEL_12;
      if ( *a3 <= 0xEFu )
      {
        if ( *a3 != 0 && *a3 != 60 )
          goto LABEL_45;
LABEL_47:
        v13 = 1;
        return -v13;
      }
      if ( *a3 >= 0xFEu )
      {
LABEL_12:
        if ( *(_BYTE *)(a1 + 69) != 0 )
          goto LABEL_47;
      }
LABEL_45:
      v12 = *((_DWORD *)&unk_453C24 + *(unsigned __int8 *)(a1 + 69) + 28);
      *v5 = v12;
      v11 = *(int (**)(void))(4 * a2 + v12);
      return v11();
    }
    v6 = (*a3 << 8) | a3[1];
    if ( v6 == 61371 )
    {
      if ( a2 == 1 && (*(_BYTE *)(a1 + 69) == 0 || (unsigned int)*(unsigned __int8 *)(a1 + 69) - 3 <= 2) )
        goto LABEL_45;
      if ( a4 == a3 + 2 )
        goto LABEL_47;
      if ( a3[2] != 191 )
        goto LABEL_45;
      *a5 = a3 + 3;
      v7 = &off_4539A4;
    }
    else
    {
      if ( v6 <= 0xEFBB )
      {
        if ( v6 == 15360 )
        {
          if ( (unsigned int)*(unsigned __int8 *)(a1 + 69) - 3 <= 1 && a2 == 1 )
            goto LABEL_45;
          v8 = 4 * a2;
          v9 = (char *)&unk_453DA4;
          *v5 = &off_453E1C;
          goto LABEL_44;
        }
LABEL_37:
        v9 = (char *)(4 * a2);
        if ( *a3 == 0 )
        {
          if ( a2 == 1 && *(_BYTE *)(a1 + 69) == 5 )
            goto LABEL_45;
          *v5 = &off_453CB0;
          v11 = *(int (**)(void))((char *)&off_453CA4[3] + (_DWORD)v9);
          return v11();
        }
        if ( a3[1] != 0 || a2 == 1 )
          goto LABEL_45;
        v8 = (int)&unk_453DA4;
        *v5 = &off_453E1C;
LABEL_44:
        v11 = *(int (**)(void))&v9[v8 + 120];
        return v11();
      }
      if ( v6 == 65279 )
      {
        if ( *(_BYTE *)(a1 + 69) == 0 && a2 == 1 )
          goto LABEL_45;
        *a5 = a3 + 2;
        v7 = &off_453CB0;
      }
      else
      {
        if ( v6 != 65534 )
          goto LABEL_37;
        if ( *(_BYTE *)(a1 + 69) == 0 && a2 == 1 )
          goto LABEL_45;
        *a5 = a3 + 2;
        v7 = &off_453E1C;
      }
    }
    *v5 = v7;
    return 14;
  }
  v13 = 4;
  return -v13;
}


//======================================================================
// sub_348820
// address: 0x00348820   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_348820(int a1, unsigned __int8 *a2, unsigned __int8 *a3, _DWORD *a4)
{
  return sub_34868C(a1, 1, a2, a3, a4);
}


//======================================================================
// sub_348834
// address: 0x00348834   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_348834(int a1, unsigned __int8 *a2, unsigned __int8 *a3, _DWORD *a4)
{
  return sub_34868C(a1, 0, a2, a3, a4);
}


//======================================================================
// sub_348848
// address: 0x00348848   size: 0x552 (1362 bytes)
//======================================================================
int __fastcall sub_348848(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v5; // r4
  int result; // r0
  unsigned __int8 *v9; // r2
  unsigned int v10; // r3
  int v11; // r3
  unsigned __int8 *v12; // r3
  int v13; // r1
  unsigned int v14; // r3
  int v15; // r3
  unsigned int v16; // r3
  int v17; // r3
  unsigned int v18; // r3
  int v19; // r2
  int v20; // r3
  int v21; // r0
  unsigned __int8 *v22; // [sp+14h] [bp-8h]
  int v23; // [sp+14h] [bp-8h]
  int v24; // [sp+14h] [bp-8h]
  int v25; // [sp+14h] [bp-8h]
  int v26; // [sp+14h] [bp-8h]

  v5 = a2;
  if ( a2 != a3 )
  {
    switch ( *(_BYTE *)(a1 + *a2 + 72) )
    {
      case 2:
        v9 = a2 + 1;
        if ( a2 + 1 == a3 )
          goto LABEL_144;
        v10 = (unsigned __int8)(*(_BYTE *)(a1 + a2[1] + 72) - 5);
        if ( v10 > 0x18 )
          goto LABEL_83;
        v11 = 1 << v10;
        if ( (v11 & 0x10A0007) != 0 )
        {
          *a4 = a2;
          return 29;
        }
        else if ( (v11 & 0x400) != 0 )
        {
          return sub_346144(a1, a2 + 2, a3, a4);
        }
        else
        {
          if ( (v11 & 0x800) == 0 )
            goto LABEL_83;
          v12 = a2 + 2;
          if ( a2 + 2 == a3 )
            goto LABEL_144;
          switch ( *(_BYTE *)(a1 + a2[2] + 72) )
          {
            case 0x14:
              *a4 = a2 + 3;
              return 33;
            case 0x16:
            case 0x18:
              v5 = a2 + 3;
              while ( 2 )
              {
                if ( v5 == a3 )
                  goto LABEL_144;
                v14 = (unsigned __int8)(*(_BYTE *)(a1 + *v5 + 72) - 9);
                if ( v14 > 0x15 )
                  goto LABEL_124;
                v15 = 1 << v14;
                if ( (v15 & 0xA000) != 0 )
                {
                  ++v5;
                  continue;
                }
                break;
              }
              result = v15 & 0x1003;
              if ( (v15 & 0x1003) == 0 )
              {
                if ( (v15 & 0x200000) == 0 )
                  goto LABEL_124;
                if ( a3 == v5 + 1 )
                  goto LABEL_144;
                v16 = (unsigned __int8)(*(_BYTE *)(a1 + v5[1] + 72) - 9);
                if ( v16 <= 0x15 && ((1 << v16) & 0x201003) != 0 )
                  goto LABEL_120;
              }
              *a4 = v5;
              return 16;
            case 0x1B:
              v13 = (int)(a2 + 3);
              if ( v5 + 3 == a3 )
                goto LABEL_144;
              if ( v5[3] != 45 )
              {
                *a4 = (unsigned __int8 *)v13;
                return 0;
              }
              result = sub_34602E((_BYTE *)a1, v13, a3, a4);
              break;
            default:
              goto LABEL_72;
          }
        }
        return result;
      case 4:
        if ( a2 + 1 == a3 )
        {
          v21 = 26;
          return -v21;
        }
        if ( a2[1] != 93 )
          goto LABEL_50;
        if ( a3 == a2 + 2 )
          goto LABEL_144;
        if ( a2[2] == 62 )
        {
          *a4 = a2 + 3;
          return 34;
        }
        else
        {
LABEL_50:
          *a4 = a2 + 1;
          return 26;
        }
      case 5:
        if ( a3 - a2 <= 1 )
          goto LABEL_99;
        v23 = a1 + 252;
        if ( (*(int (__fastcall **)(int))(a1 + 340))(a1) != 0 )
        {
          v5 += 2;
          goto LABEL_112;
        }
        result = (*(int (__fastcall **)(int, unsigned __int8 *))(v23 + 76))(a1, v5);
        if ( result == 0 )
          goto LABEL_120;
        v5 += 2;
        goto LABEL_116;
      case 6:
        if ( a3 - a2 <= 2 )
          goto LABEL_99;
        v24 = a1 + 252;
        if ( (*(int (__fastcall **)(int))(a1 + 344))(a1) != 0 )
        {
          v5 += 3;
          v25 = 18;
          goto LABEL_122;
        }
        result = (*(int (__fastcall **)(int, unsigned __int8 *))(v24 + 80))(a1, v5);
        if ( result == 0 )
          goto LABEL_120;
        v5 += 3;
        v19 = 19;
LABEL_118:
        v25 = v19;
        goto LABEL_122;
      case 7:
        if ( a3 - a2 <= 3 )
          goto LABEL_99;
        v26 = a1 + 252;
        if ( (*(int (__fastcall **)(int))(a1 + 348))(a1) != 0 )
        {
          v5 += 4;
LABEL_112:
          v20 = 18;
LABEL_113:
          v25 = v20;
        }
        else
        {
          result = (*(int (__fastcall **)(int, unsigned __int8 *))(v26 + 84))(a1, v5);
          if ( result == 0 )
          {
LABEL_120:
            *a4 = v5;
            return result;
          }
          v5 += 4;
LABEL_116:
          v25 = 19;
        }
LABEL_122:
        while ( v5 != a3 )
        {
          switch ( *(_BYTE *)(a1 + *v5 + 72) )
          {
            case 5:
              if ( a3 - v5 <= 1 )
                goto LABEL_99;
              result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 328))(a1, v5);
              if ( result == 0 )
                goto LABEL_120;
              v5 += 2;
              break;
            case 6:
              if ( a3 - v5 <= 2 )
                goto LABEL_99;
              result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 332))(a1, v5);
              if ( result == 0 )
                goto LABEL_120;
              v5 += 3;
              break;
            case 7:
              if ( a3 - v5 <= 3 )
                goto LABEL_99;
              result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 336))(a1, v5);
              if ( result == 0 )
                goto LABEL_120;
              v5 += 4;
              break;
            case 9:
            case 0xA:
            case 0xB:
            case 0x14:
            case 0x15:
            case 0x1E:
            case 0x20:
            case 0x23:
            case 0x24:
              *a4 = v5;
              return v25;
            case 0xF:
              if ( v25 == 19 )
                goto LABEL_124;
              *a4 = v5 + 1;
              return 30;
            case 0x16:
            case 0x18:
            case 0x19:
            case 0x1A:
            case 0x1B:
              ++v5;
              continue;
            case 0x21:
              if ( v25 == 19 )
                goto LABEL_124;
              *a4 = v5 + 1;
              return 31;
            case 0x22:
              if ( v25 == 19 )
                goto LABEL_124;
              *a4 = v5 + 1;
              return 32;
            default:
              goto LABEL_124;
          }
        }
        return -v25;
      case 9:
        if ( a2 + 1 != a3 )
          goto LABEL_35;
        *a4 = a3;
        v21 = 15;
        return -v21;
      case 0xA:
      case 0x15:
        do
        {
LABEL_35:
          if ( ++v5 == a3 )
            break;
          v17 = *(unsigned __int8 *)(a1 + *v5 + 72);
        }
        while ( v17 == 10 || v17 == 21 || v17 == 9 && a3 != v5 + 1 );
        *a4 = v5;
        return 15;
      case 0xB:
        *a4 = a2 + 1;
        return 17;
      case 0xC:
        return sub_3439B4(12, (_BYTE *)a1, a2 + 1, a3, a4);
      case 0xD:
        return sub_3439B4(13, (_BYTE *)a1, a2 + 1, a3, a4);
      case 0x13:
        v22 = a2 + 1;
        if ( a2 + 1 == a3 )
        {
LABEL_144:
          v21 = 1;
          return -v21;
        }
        v18 = *(unsigned __int8 *)(a1 + a2[1] + 72);
        if ( v18 == 7 )
        {
          if ( a3 - v22 <= 3 )
            goto LABEL_99;
          result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 348))(a1, v22);
          v5 += 5;
        }
        else
        {
          if ( v18 > 7 )
          {
            if ( v18 != 24 )
            {
              if ( v18 == 29 )
              {
                v12 = a2 + 1;
LABEL_72:
                *a4 = v12;
                return 0;
              }
              if ( *(_BYTE *)(a1 + a2[1] + 72) != 22 )
              {
LABEL_82:
                v9 = a2 + 1;
LABEL_83:
                *a4 = v9;
                return 0;
              }
            }
LABEL_86:
            v5 += 2;
LABEL_88:
            while ( v5 != a3 )
            {
              switch ( *(_BYTE *)(a1 + *v5 + 72) )
              {
                case 5:
                  if ( a3 - v5 <= 1 )
                    goto LABEL_99;
                  result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 328))(a1, v5);
                  if ( result != 0 )
                    goto LABEL_86;
                  goto LABEL_120;
                case 6:
                  if ( a3 - v5 <= 2 )
                    goto LABEL_99;
                  result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 332))(a1, v5);
                  if ( result == 0 )
                    goto LABEL_120;
                  v5 += 3;
                  break;
                case 7:
                  if ( a3 - v5 <= 3 )
                    goto LABEL_99;
                  result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 336))(a1, v5);
                  if ( result == 0 )
                    goto LABEL_120;
                  v5 += 4;
                  break;
                case 9:
                case 0xA:
                case 0xB:
                case 0x15:
                case 0x1E:
                case 0x20:
                case 0x24:
                  *a4 = v5;
                  return 20;
                case 0x16:
                case 0x18:
                case 0x19:
                case 0x1A:
                case 0x1B:
                  ++v5;
                  continue;
                default:
                  goto LABEL_124;
              }
            }
            v21 = 20;
            return -v21;
          }
          if ( v18 != 5 )
          {
            if ( v18 != 6 )
              goto LABEL_82;
            if ( a3 - v22 > 2 )
            {
              result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 344))(a1, v22);
              v5 += 4;
              if ( result == 0 )
              {
                *a4 = v22;
                return result;
              }
              goto LABEL_88;
            }
LABEL_99:
            v21 = 2;
            return -v21;
          }
          if ( a3 - v22 <= 1 )
            goto LABEL_99;
          result = (*(int (__fastcall **)(int, unsigned __int8 *))(a1 + 340))(a1, v22);
          v5 += 3;
        }
        if ( result == 0 )
        {
          *a4 = v22;
          return result;
        }
        goto LABEL_88;
      case 0x14:
        *a4 = a2 + 1;
        return 25;
      case 0x16:
      case 0x18:
        v5 = a2 + 1;
        v19 = 18;
        goto LABEL_118;
      case 0x19:
      case 0x1A:
      case 0x1B:
        v5 = a2 + 1;
        v20 = 19;
        goto LABEL_113;
      case 0x1E:
        return sub_343878(a1, a2 + 1, a3, a4);
      case 0x1F:
        *a4 = a2 + 1;
        return 23;
      case 0x20:
        v12 = a2 + 1;
        if ( a2 + 1 == a3 )
        {
          v21 = 24;
          return -v21;
        }
        switch ( *(_BYTE *)(a1 + a2[1] + 72) )
        {
          case 9:
          case 0xA:
          case 0xB:
          case 0x15:
          case 0x20:
          case 0x23:
          case 0x24:
            *a4 = v12;
            result = 24;
            break;
          case 0xF:
            *a4 = a2 + 2;
            result = 35;
            break;
          case 0x21:
            *a4 = a2 + 2;
            result = 36;
            break;
          case 0x22:
            *a4 = a2 + 2;
            result = 37;
            break;
          default:
            goto LABEL_72;
        }
        return result;
      case 0x23:
        *a4 = a2 + 1;
        return 38;
      case 0x24:
        *a4 = a2 + 1;
        return 21;
      default:
LABEL_124:
        *a4 = v5;
        return 0;
    }
  }
  v21 = 4;
  return -v21;
}


//======================================================================
// sub_348D9C
// address: 0x00348D9C   size: 0x56C (1388 bytes)
//======================================================================
int __fastcall sub_348D9C(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  unsigned int v6; // r3
  int v7; // r5
  unsigned int v8; // r6
  int v9; // r0
  int result; // r0
  unsigned __int8 *v11; // r5
  unsigned int v12; // r1
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r1
  int v20; // r0
  unsigned int v21; // r0
  int v22; // r0
  unsigned int v23; // r1
  int v24; // r0
  unsigned int v25; // r0
  unsigned int v26; // r1
  int v27; // r0
  unsigned int v28; // r1
  int v29; // r0
  unsigned int v30; // r6
  int v31; // r0
  int v32; // r5
  unsigned int v33; // r6
  int v34; // r0
  int v35; // r3
  int v36; // r3
  int v37; // r3
  unsigned int v38; // r2
  int v39; // r6
  int v40; // r5
  unsigned int v41; // r6
  int v42; // r0
  int v43; // r0
  unsigned __int8 *v44; // [sp+Ch] [bp-18h]
  unsigned int v46; // [sp+14h] [bp-10h]
  unsigned int v47; // [sp+14h] [bp-10h]

  v4 = a2;
  v44 = a3;
  if ( a2 != a3 )
  {
    if ( ((a3 - a2) & 1) != 0 )
    {
      v6 = (a3 - a2) & 0xFFFFFFFE;
      if ( v6 == 0 )
      {
LABEL_155:
        v43 = 1;
        return -v43;
      }
      v44 = &a2[v6];
    }
    v7 = a2[1];
    v8 = *a2;
    if ( a2[1] != 0 )
      v9 = sub_344136(a2[1], *a2);
    else
      v9 = *(unsigned __int8 *)(a1 + v8 + 72);
    switch ( v9 )
    {
      case 2:
        v11 = v4 + 2;
        if ( v4 + 2 == v44 )
          goto LABEL_155;
        v12 = v4[2];
        if ( v4[3] != 0 )
          v13 = sub_344136(v4[3], v12);
        else
          v13 = *(unsigned __int8 *)(a1 + v12 + 72);
        v14 = v13 - 5;
        if ( v14 > 0x18 )
          goto LABEL_111;
        v15 = 1 << v14;
        if ( (v15 & 0x10A0007) != 0 )
        {
          *a4 = v4;
          return 29;
        }
        if ( (v15 & 0x400) != 0 )
          return sub_346C94(a1, v4 + 4, v44, a4);
        if ( (v15 & 0x800) == 0 )
          goto LABEL_111;
        v11 = v4 + 4;
        if ( v4 + 4 == v44 )
          goto LABEL_155;
        v16 = v4[4];
        if ( v4[5] != 0 )
          v17 = sub_344136(v4[5], v16);
        else
          v17 = *(unsigned __int8 *)(a1 + v16 + 72);
        switch ( v17 )
        {
          case 20:
            *a4 = v4 + 6;
            return 33;
          case 22:
          case 24:
            v4 += 6;
            while ( 2 )
            {
              if ( v4 == v44 )
                goto LABEL_155;
              v19 = *v4;
              if ( v4[1] != 0 )
                v20 = sub_344136(v4[1], v19);
              else
                v20 = *(unsigned __int8 *)(a1 + v19 + 72);
              v21 = v20 - 9;
              if ( v21 > 0x15 )
                goto LABEL_143;
              v22 = 1 << v21;
              if ( (v22 & 0xA000) != 0 )
              {
                v4 += 2;
                continue;
              }
              break;
            }
            if ( (v22 & 0x1003) == 0 )
            {
              if ( (v22 & 0x200000) == 0 )
                goto LABEL_143;
              if ( v44 == v4 + 2 )
                goto LABEL_155;
              v23 = v4[2];
              if ( v4[3] != 0 )
                v24 = sub_344136(v4[3], v23);
              else
                v24 = *(unsigned __int8 *)(a1 + v23 + 72);
              v25 = v24 - 9;
              if ( v25 <= 0x15 && ((1 << v25) & 0x201003) != 0 )
                goto LABEL_143;
            }
            *a4 = v4;
            return 16;
          case 27:
            v18 = (int)(v4 + 6);
            if ( v4 + 6 == v44 )
              goto LABEL_155;
            if ( v4[7] != 0 || v4[6] != 45 )
            {
              *a4 = (unsigned __int8 *)v18;
              return 0;
            }
            result = sub_346B88(a1, v18, v44, a4);
            break;
          default:
            goto LABEL_111;
        }
        return result;
      case 4:
        if ( v4 + 2 == v44 )
        {
          v43 = 26;
          return -v43;
        }
        if ( v4[3] != 0 || v4[2] != 93 )
          goto LABEL_76;
        if ( v44 == v4 + 4 )
          goto LABEL_155;
        if ( v4[5] != 0 || v4[4] != 62 )
        {
LABEL_76:
          *a4 = v4 + 2;
          return 26;
        }
        else
        {
          *a4 = v4 + 6;
          return 34;
        }
      case 5:
LABEL_121:
        v35 = v44 - v4;
LABEL_131:
        if ( v35 <= 1 )
          goto LABEL_156;
        goto LABEL_143;
      case 6:
LABEL_122:
        v36 = v44 - v4;
LABEL_134:
        if ( v36 <= 2 )
          goto LABEL_156;
        goto LABEL_143;
      case 7:
LABEL_123:
        v37 = v44 - v4;
LABEL_137:
        if ( v37 <= 3 )
          goto LABEL_156;
        goto LABEL_143;
      case 9:
        if ( v4 + 2 != v44 )
          goto LABEL_57;
        *a4 = v44;
        v43 = 15;
        return -v43;
      case 10:
      case 21:
LABEL_57:
        while ( 2 )
        {
          if ( v4 + 2 == v44 )
          {
            *a4 = v44;
          }
          else
          {
            v26 = v4[2];
            if ( v4[3] != 0 )
              v27 = sub_344136(v4[3], v26);
            else
              v27 = *(unsigned __int8 *)(a1 + v26 + 72);
            if ( v27 == 10 || v27 == 21 || v27 == 9 && v44 != v4 + 4 )
            {
              v4 += 2;
              continue;
            }
            *a4 = v4 + 2;
          }
          break;
        }
        return 15;
      case 11:
        *a4 = v4 + 2;
        return 17;
      case 12:
        return sub_3448B4(12, a1, v4 + 2, v44, a4);
      case 13:
        return sub_3448B4(13, a1, v4 + 2, v44, a4);
      case 19:
        v11 = v4 + 2;
        if ( v4 + 2 == v44 )
          goto LABEL_155;
        v30 = v4[2];
        v46 = v4[3];
        if ( v4[3] != 0 )
          v31 = sub_344136(v46, v30);
        else
          v31 = *(unsigned __int8 *)(a1 + v30 + 72);
        if ( v31 == 7 )
        {
          if ( v44 - v11 > 3 )
            goto LABEL_111;
        }
        else
        {
          if ( v31 > 7 )
          {
            if ( v31 != 24 )
            {
              if ( v31 == 29 )
              {
                result = dword_44A1B8[8 * byte_44A7B8[v46] + (v30 >> 5)] & (1 << (v30 & 0x1F));
                if ( result == 0 )
                {
                  *a4 = v11;
                  return result;
                }
              }
              else if ( v31 != 22 )
              {
                goto LABEL_111;
              }
            }
            v4 += 4;
            while ( v4 != v44 )
            {
              v32 = v4[1];
              v33 = *v4;
              if ( v4[1] != 0 )
                v34 = sub_344136(v4[1], *v4);
              else
                v34 = *(unsigned __int8 *)(a1 + v33 + 72);
              switch ( v34 )
              {
                case 5:
                  goto LABEL_121;
                case 6:
                  goto LABEL_122;
                case 7:
                  goto LABEL_123;
                case 9:
                case 10:
                case 11:
                case 21:
                case 30:
                case 32:
                case 36:
                  *a4 = v4;
                  return 20;
                case 22:
                case 24:
                case 25:
                case 26:
                case 27:
                  goto LABEL_113;
                case 29:
                  result = dword_44A1B8[8 * byte_44A6B8[v32] + (v33 >> 5)] & (1 << (v33 & 0x1F));
                  if ( result == 0 )
                    goto LABEL_129;
LABEL_113:
                  v4 += 2;
                  break;
                default:
                  goto LABEL_143;
              }
            }
            v43 = 20;
            return -v43;
          }
          if ( v31 != 5 )
          {
            if ( v31 == 6 && v44 - v11 <= 2 )
              goto LABEL_156;
LABEL_111:
            *a4 = v11;
            return 0;
          }
          if ( v44 - v11 > 1 )
            goto LABEL_111;
        }
LABEL_156:
        v43 = 2;
        return -v43;
      case 20:
        *a4 = v4 + 2;
        return 25;
      case 22:
      case 24:
        goto LABEL_125;
      case 25:
      case 26:
      case 27:
        goto LABEL_127;
      case 29:
        v38 = v8 >> 5;
        v39 = 1 << (v8 & 0x1F);
        if ( (dword_44A1B8[8 * byte_44A7B8[v7] + v38] & v39) != 0 )
        {
LABEL_125:
          v4 += 2;
          v40 = 18;
          goto LABEL_140;
        }
        if ( (dword_44A1B8[8 * byte_44A6B8[v7] + v38] & v39) != 0 )
        {
LABEL_127:
          v4 += 2;
          v40 = 19;
LABEL_140:
          while ( v4 != v44 )
          {
            v41 = *v4;
            v47 = v4[1];
            if ( v4[1] != 0 )
              v42 = sub_344136(v47, v41);
            else
              v42 = *(unsigned __int8 *)(a1 + v41 + 72);
            switch ( v42 )
            {
              case 5:
                v35 = v44 - v4;
                goto LABEL_131;
              case 6:
                v36 = v44 - v4;
                goto LABEL_134;
              case 7:
                v37 = v44 - v4;
                goto LABEL_137;
              case 9:
              case 10:
              case 11:
              case 20:
              case 21:
              case 30:
              case 32:
              case 35:
              case 36:
                *a4 = v4;
                return v40;
              case 15:
                if ( v40 == 19 )
                  goto LABEL_143;
                *a4 = v4 + 2;
                return 30;
              case 22:
              case 24:
              case 25:
              case 26:
              case 27:
                goto LABEL_139;
              case 29:
                result = dword_44A1B8[8 * byte_44A6B8[v47] + (v41 >> 5)] & (1 << (v41 & 0x1F));
                if ( result == 0 )
                {
LABEL_129:
                  *a4 = v4;
                  return result;
                }
LABEL_139:
                v4 += 2;
                break;
              case 33:
                if ( v40 == 19 )
                  goto LABEL_143;
                *a4 = v4 + 2;
                return 31;
              case 34:
                if ( v40 == 19 )
                  goto LABEL_143;
                *a4 = v4 + 2;
                return 32;
              default:
                goto LABEL_143;
            }
          }
          return -v40;
        }
        else
        {
LABEL_143:
          *a4 = v4;
          return 0;
        }
      case 30:
        return sub_344778(a1, v4 + 2, v44, a4);
      case 31:
        *a4 = v4 + 2;
        return 23;
      case 32:
        v11 = v4 + 2;
        if ( v4 + 2 == v44 )
        {
          v43 = 24;
          return -v43;
        }
        v28 = v4[2];
        if ( v4[3] != 0 )
          v29 = sub_344136(v4[3], v28);
        else
          v29 = *(unsigned __int8 *)(a1 + v28 + 72);
        switch ( v29 )
        {
          case 9:
          case 10:
          case 11:
          case 21:
          case 32:
          case 35:
          case 36:
            *a4 = v11;
            result = 24;
            break;
          case 15:
            *a4 = v4 + 4;
            result = 35;
            break;
          case 33:
            *a4 = v4 + 4;
            result = 36;
            break;
          case 34:
            *a4 = v4 + 4;
            result = 37;
            break;
          default:
            goto LABEL_111;
        }
        return result;
      case 35:
        *a4 = v4 + 2;
        return 38;
      case 36:
        *a4 = v4 + 2;
        return 21;
      default:
        goto LABEL_143;
    }
  }
  v43 = 4;
  return -v43;
}


//======================================================================
// sub_349324
// address: 0x00349324   size: 0x56C (1388 bytes)
//======================================================================
int __fastcall sub_349324(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 **a4)
{
  unsigned __int8 *v4; // r4
  unsigned int v6; // r3
  int v7; // r5
  unsigned int v8; // r6
  int v9; // r0
  int result; // r0
  unsigned __int8 *v11; // r5
  unsigned int v12; // r1
  int v13; // r0
  unsigned int v14; // r0
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r1
  int v20; // r0
  unsigned int v21; // r0
  int v22; // r0
  unsigned int v23; // r1
  int v24; // r0
  unsigned int v25; // r0
  unsigned int v26; // r1
  int v27; // r0
  unsigned int v28; // r1
  int v29; // r0
  unsigned int v30; // r6
  int v31; // r0
  int v32; // r5
  unsigned int v33; // r6
  int v34; // r0
  int v35; // r3
  int v36; // r3
  int v37; // r3
  unsigned int v38; // r2
  int v39; // r6
  int v40; // r5
  unsigned int v41; // r6
  int v42; // r0
  int v43; // r0
  unsigned __int8 *v44; // [sp+Ch] [bp-18h]
  unsigned int v46; // [sp+14h] [bp-10h]
  unsigned int v47; // [sp+14h] [bp-10h]

  v4 = a2;
  v44 = a3;
  if ( a2 != a3 )
  {
    if ( ((a3 - a2) & 1) != 0 )
    {
      v6 = (a3 - a2) & 0xFFFFFFFE;
      if ( v6 == 0 )
      {
LABEL_155:
        v43 = 1;
        return -v43;
      }
      v44 = &a2[v6];
    }
    v7 = *a2;
    v8 = a2[1];
    if ( *a2 != 0 )
      v9 = sub_344136(*a2, a2[1]);
    else
      v9 = *(unsigned __int8 *)(a1 + v8 + 72);
    switch ( v9 )
    {
      case 2:
        v11 = v4 + 2;
        if ( v4 + 2 == v44 )
          goto LABEL_155;
        v12 = v4[3];
        if ( v4[2] != 0 )
          v13 = sub_344136(v4[2], v12);
        else
          v13 = *(unsigned __int8 *)(a1 + v12 + 72);
        v14 = v13 - 5;
        if ( v14 > 0x18 )
          goto LABEL_111;
        v15 = 1 << v14;
        if ( (v15 & 0x10A0007) != 0 )
        {
          *a4 = v4;
          return 29;
        }
        if ( (v15 & 0x400) != 0 )
          return sub_347988(a1, v4 + 4, v44, a4);
        if ( (v15 & 0x800) == 0 )
          goto LABEL_111;
        v11 = v4 + 4;
        if ( v4 + 4 == v44 )
          goto LABEL_155;
        v16 = v4[5];
        if ( v4[4] != 0 )
          v17 = sub_344136(v4[4], v16);
        else
          v17 = *(unsigned __int8 *)(a1 + v16 + 72);
        switch ( v17 )
        {
          case 20:
            *a4 = v4 + 6;
            return 33;
          case 22:
          case 24:
            v4 += 6;
            while ( 2 )
            {
              if ( v4 == v44 )
                goto LABEL_155;
              v19 = v4[1];
              if ( *v4 != 0 )
                v20 = sub_344136(*v4, v19);
              else
                v20 = *(unsigned __int8 *)(a1 + v19 + 72);
              v21 = v20 - 9;
              if ( v21 > 0x15 )
                goto LABEL_143;
              v22 = 1 << v21;
              if ( (v22 & 0xA000) != 0 )
              {
                v4 += 2;
                continue;
              }
              break;
            }
            if ( (v22 & 0x1003) == 0 )
            {
              if ( (v22 & 0x200000) == 0 )
                goto LABEL_143;
              if ( v44 == v4 + 2 )
                goto LABEL_155;
              v23 = v4[3];
              if ( v4[2] != 0 )
                v24 = sub_344136(v4[2], v23);
              else
                v24 = *(unsigned __int8 *)(a1 + v23 + 72);
              v25 = v24 - 9;
              if ( v25 <= 0x15 && ((1 << v25) & 0x201003) != 0 )
                goto LABEL_143;
            }
            *a4 = v4;
            return 16;
          case 27:
            v18 = (int)(v4 + 6);
            if ( v4 + 6 == v44 )
              goto LABEL_155;
            if ( v4[6] != 0 || v4[7] != 45 )
            {
              *a4 = (unsigned __int8 *)v18;
              return 0;
            }
            result = sub_34787C(a1, v18, v44, a4);
            break;
          default:
            goto LABEL_111;
        }
        return result;
      case 4:
        if ( v4 + 2 == v44 )
        {
          v43 = 26;
          return -v43;
        }
        if ( v4[2] != 0 || v4[3] != 93 )
          goto LABEL_76;
        if ( v44 == v4 + 4 )
          goto LABEL_155;
        if ( v4[4] != 0 || v4[5] != 62 )
        {
LABEL_76:
          *a4 = v4 + 2;
          return 26;
        }
        else
        {
          *a4 = v4 + 6;
          return 34;
        }
      case 5:
LABEL_121:
        v35 = v44 - v4;
LABEL_131:
        if ( v35 <= 1 )
          goto LABEL_156;
        goto LABEL_143;
      case 6:
LABEL_122:
        v36 = v44 - v4;
LABEL_134:
        if ( v36 <= 2 )
          goto LABEL_156;
        goto LABEL_143;
      case 7:
LABEL_123:
        v37 = v44 - v4;
LABEL_137:
        if ( v37 <= 3 )
          goto LABEL_156;
        goto LABEL_143;
      case 9:
        if ( v4 + 2 != v44 )
          goto LABEL_57;
        *a4 = v44;
        v43 = 15;
        return -v43;
      case 10:
      case 21:
LABEL_57:
        while ( 2 )
        {
          if ( v4 + 2 == v44 )
          {
            *a4 = v44;
          }
          else
          {
            v26 = v4[3];
            if ( v4[2] != 0 )
              v27 = sub_344136(v4[2], v26);
            else
              v27 = *(unsigned __int8 *)(a1 + v26 + 72);
            if ( v27 == 10 || v27 == 21 || v27 == 9 && v44 != v4 + 4 )
            {
              v4 += 2;
              continue;
            }
            *a4 = v4 + 2;
          }
          break;
        }
        return 15;
      case 11:
        *a4 = v4 + 2;
        return 17;
      case 12:
        return sub_345454(12, a1, v4 + 2, v44, a4);
      case 13:
        return sub_345454(13, a1, v4 + 2, v44, a4);
      case 19:
        v11 = v4 + 2;
        if ( v4 + 2 == v44 )
          goto LABEL_155;
        v30 = v4[3];
        v46 = v4[2];
        if ( v4[2] != 0 )
          v31 = sub_344136(v46, v30);
        else
          v31 = *(unsigned __int8 *)(a1 + v30 + 72);
        if ( v31 == 7 )
        {
          if ( v44 - v11 > 3 )
            goto LABEL_111;
        }
        else
        {
          if ( v31 > 7 )
          {
            if ( v31 != 24 )
            {
              if ( v31 == 29 )
              {
                result = dword_44A1B8[8 * byte_44A7B8[v46] + (v30 >> 5)] & (1 << (v30 & 0x1F));
                if ( result == 0 )
                {
                  *a4 = v11;
                  return result;
                }
              }
              else if ( v31 != 22 )
              {
                goto LABEL_111;
              }
            }
            v4 += 4;
            while ( v4 != v44 )
            {
              v32 = *v4;
              v33 = v4[1];
              if ( *v4 != 0 )
                v34 = sub_344136(*v4, v4[1]);
              else
                v34 = *(unsigned __int8 *)(a1 + v33 + 72);
              switch ( v34 )
              {
                case 5:
                  goto LABEL_121;
                case 6:
                  goto LABEL_122;
                case 7:
                  goto LABEL_123;
                case 9:
                case 10:
                case 11:
                case 21:
                case 30:
                case 32:
                case 36:
                  *a4 = v4;
                  return 20;
                case 22:
                case 24:
                case 25:
                case 26:
                case 27:
                  goto LABEL_113;
                case 29:
                  result = dword_44A1B8[8 * byte_44A6B8[v32] + (v33 >> 5)] & (1 << (v33 & 0x1F));
                  if ( result == 0 )
                    goto LABEL_129;
LABEL_113:
                  v4 += 2;
                  break;
                default:
                  goto LABEL_143;
              }
            }
            v43 = 20;
            return -v43;
          }
          if ( v31 != 5 )
          {
            if ( v31 == 6 && v44 - v11 <= 2 )
              goto LABEL_156;
LABEL_111:
            *a4 = v11;
            return 0;
          }
          if ( v44 - v11 > 1 )
            goto LABEL_111;
        }
LABEL_156:
        v43 = 2;
        return -v43;
      case 20:
        *a4 = v4 + 2;
        return 25;
      case 22:
      case 24:
        goto LABEL_125;
      case 25:
      case 26:
      case 27:
        goto LABEL_127;
      case 29:
        v38 = v8 >> 5;
        v39 = 1 << (v8 & 0x1F);
        if ( (dword_44A1B8[8 * byte_44A7B8[v7] + v38] & v39) != 0 )
        {
LABEL_125:
          v4 += 2;
          v40 = 18;
          goto LABEL_140;
        }
        if ( (dword_44A1B8[8 * byte_44A6B8[v7] + v38] & v39) != 0 )
        {
LABEL_127:
          v4 += 2;
          v40 = 19;
LABEL_140:
          while ( v4 != v44 )
          {
            v41 = v4[1];
            v47 = *v4;
            if ( *v4 != 0 )
              v42 = sub_344136(v47, v41);
            else
              v42 = *(unsigned __int8 *)(a1 + v41 + 72);
            switch ( v42 )
            {
              case 5:
                v35 = v44 - v4;
                goto LABEL_131;
              case 6:
                v36 = v44 - v4;
                goto LABEL_134;
              case 7:
                v37 = v44 - v4;
                goto LABEL_137;
              case 9:
              case 10:
              case 11:
              case 20:
              case 21:
              case 30:
              case 32:
              case 35:
              case 36:
                *a4 = v4;
                return v40;
              case 15:
                if ( v40 == 19 )
                  goto LABEL_143;
                *a4 = v4 + 2;
                return 30;
              case 22:
              case 24:
              case 25:
              case 26:
              case 27:
                goto LABEL_139;
              case 29:
                result = dword_44A1B8[8 * byte_44A6B8[v47] + (v41 >> 5)] & (1 << (v41 & 0x1F));
                if ( result == 0 )
                {
LABEL_129:
                  *a4 = v4;
                  return result;
                }
LABEL_139:
                v4 += 2;
                break;
              case 33:
                if ( v40 == 19 )
                  goto LABEL_143;
                *a4 = v4 + 2;
                return 31;
              case 34:
                if ( v40 == 19 )
                  goto LABEL_143;
                *a4 = v4 + 2;
                return 32;
              default:
                goto LABEL_143;
            }
          }
          return -v40;
        }
        else
        {
LABEL_143:
          *a4 = v4;
          return 0;
        }
      case 30:
        return sub_345318(a1, v4 + 2, v44, a4);
      case 31:
        *a4 = v4 + 2;
        return 23;
      case 32:
        v11 = v4 + 2;
        if ( v4 + 2 == v44 )
        {
          v43 = 24;
          return -v43;
        }
        v28 = v4[3];
        if ( v4[2] != 0 )
          v29 = sub_344136(v4[2], v28);
        else
          v29 = *(unsigned __int8 *)(a1 + v28 + 72);
        switch ( v29 )
        {
          case 9:
          case 10:
          case 11:
          case 21:
          case 32:
          case 35:
          case 36:
            *a4 = v11;
            result = 24;
            break;
          case 15:
            *a4 = v4 + 4;
            result = 35;
            break;
          case 33:
            *a4 = v4 + 4;
            result = 36;
            break;
          case 34:
            *a4 = v4 + 4;
            result = 37;
            break;
          default:
            goto LABEL_111;
        }
        return result;
      case 35:
        *a4 = v4 + 2;
        return 38;
      case 36:
        *a4 = v4 + 2;
        return 21;
      default:
        goto LABEL_143;
    }
  }
  v43 = 4;
  return -v43;
}


//======================================================================
// sub_349944
// address: 0x00349944   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_349944(int result, unsigned __int8 **a2, unsigned __int8 *a3, _DWORD *a4, int a5)
{
  int v5; // r6
  unsigned __int8 *v8; // r1
  int v9; // r7
  char *v10; // r7
  int v11; // r0
  _BYTE *v12; // r3
  char v13; // r2
  _BYTE v15[8]; // [sp+Ch] [bp-8h] BYREF

  v5 = result;
  while ( 1 )
  {
    v8 = *a2;
    if ( *a2 == a3 )
      break;
    v9 = v5 + 4 * (*v8 + 220);
    result = *(unsigned __int8 *)(v9 + 4);
    if ( *(_BYTE *)(v9 + 4) != 0 )
    {
      if ( result > a5 - *a4 )
        return result;
      v10 = (char *)(v9 + 5);
      *a2 = v8 + 1;
    }
    else
    {
      v10 = v15;
      v11 = (*(int (__fastcall **)(_DWORD))(v5 + 364))(*(_DWORD *)(v5 + 368));
      result = XmlUtf8Encode(v11, v15);
      if ( result > a5 - *a4 )
        return result;
      *a2 += *(unsigned __int8 *)(v5 + **a2 + 72) - 3;
    }
    result += (int)v10;
    do
    {
      v12 = (_BYTE *)(*a4)++;
      v13 = *v10++;
      *v12 = v13;
    }
    while ( v10 != (char *)result );
  }
  return result;
}


//======================================================================
// sub_349E3C
// address: 0x00349E3C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_349E3C(int a1)
{
  int result; // r0

  result = 4;
  while ( a1 > 1970 )
  {
    --a1;
    result = 1;
  }
  return result;
}


//======================================================================
// sub_349E54
// address: 0x00349E54   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_349E54(const char **a1, int a2)
{
  int i; // r4
  const char *v4; // r5
  size_t v5; // r7
  const char *v7; // [sp+0h] [bp-Ch]

  for ( i = 0; ; ++i )
  {
    v4 = *(const char **)(a2 + 4 * i);
    if ( v4 == nullptr )
      break;
    v5 = j_strlen(*(const char **)(a2 + 4 * i));
    v7 = *a1;
    if ( j_strncasecmp(*a1, v4, v5) == 0 )
    {
      *a1 = &v7[v5];
      return i;
    }
  }
  return -1;
}


//======================================================================
// sub_34A57C
// address: 0x0034A57C   size: 0x12A (298 bytes)
//======================================================================
int __fastcall sub_34A57C(int a1, _DWORD *a2, int a3, char *a4, FILE *a5)
{
  int v6; // r6
  int v7; // r5
  int v8; // r4
  int entry_by_name_i; // r0
  int v10; // r6
  char *first_node_name_from_path_i; // [sp+Ch] [bp-50h]
  int v13; // [sp+14h] [bp-48h]
  int v16; // [sp+20h] [bp-3Ch]
  char v18[32]; // [sp+34h] [bp-28h] BYREF

  v16 = a1 - *(_DWORD *)(a1 + 48) - 168;
  first_node_name_from_path_i = tdr_get_first_node_name_from_path_i(v18, 32, a4);
  if ( j_strcasecmp(v18, "this") != 0 )
    first_node_name_from_path_i = a4;
  v6 = a1;
  v13 = 0;
  v7 = 0;
  v8 = 0;
  while ( 1 )
  {
    first_node_name_from_path_i = tdr_get_first_node_name_from_path_i(v18, 32, first_node_name_from_path_i);
    if ( v18[0] == 0 )
      goto LABEL_19;
    tdr_trim_str(v18);
    entry_by_name_i = tdr_get_entry_by_name_i(v6 + 200, *(_DWORD *)(v6 + 44), v18);
    if ( entry_by_name_i == -1 )
      break;
    v8 = v6 + 208 * entry_by_name_i + 200;
    if ( (*(_WORD *)(v8 + 64) & 6) != 0 )
      return -2113862597;
    v13 += *(_DWORD *)(v8 + 40);
    v10 = *(_DWORD *)(v8 + 128);
    if ( v10 == -1 )
    {
      if ( first_node_name_from_path_i != nullptr )
      {
LABEL_16:
        if ( v7 != 0 )
          return v7;
        return -2113862597;
      }
LABEL_24:
      if ( v7 != 0 )
        return v7;
      goto LABEL_22;
    }
    v6 = v16 + v10 + 168;
    if ( (*(_BYTE *)(v8 + 66) & 4) == 0 || *(int *)(v8 + 32) > 1 )
    {
      j_fprintf(a5, aError_59, a1 + 128, a3, a4, v8 + 152);
      v7 = -2113862563;
    }
    if ( first_node_name_from_path_i == nullptr )
      goto LABEL_24;
    if ( v6 == 0 )
      goto LABEL_16;
  }
  v8 = 0;
LABEL_19:
  if ( v7 == 0 )
  {
    if ( first_node_name_from_path_i != nullptr || v8 == 0 )
      return -2113862597;
LABEL_22:
    v7 = 0;
    a2[1] = v13;
    *a2 = *(_DWORD *)(v8 + 24);
    a2[2] = v8 - (v16 + 168);
  }
  return v7;
}


//======================================================================
// sub_34A6BC
// address: 0x0034A6BC   size: 0x144 (324 bytes)
//======================================================================
int __fastcall sub_34A6BC(_DWORD *a1, _DWORD *a2, char *a3)
{
  _DWORD *v3; // r5
  int v4; // r0
  _DWORD *v5; // r4
  int v6; // r7
  int v7; // r2
  int v8; // r3
  _DWORD *v9; // r6
  __int16 v10; // r3
  int v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int v18; // r1
  int v19; // r2
  int v20; // r5
  int v21; // r3
  _DWORD *v22; // r1
  int v23; // r2
  int v24; // r3
  int result; // r0
  int v26; // [sp+4h] [bp-B98h]
  int v27; // [sp+8h] [bp-B94h]
  int v28; // [sp+Ch] [bp-B90h]
  _DWORD *v29; // [sp+10h] [bp-B8Ch]
  char *v30; // [sp+14h] [bp-B88h]
  _DWORD v31[737]; // [sp+18h] [bp-B84h] BYREF

  v3 = a2;
  v29 = a1;
  v4 = a2[12];
  v5 = v31;
  v30 = a3;
  v31[0] = a2;
  v31[4] = 0;
  v31[3] = 1;
  v31[6] = 0;
  v28 = (int)a2 - v4 - 168;
  v27 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v6 = v5[3];
            if ( v6 > 0 )
              break;
            if ( --v27 == 0 )
              return -2113862598;
            v5 -= 23;
            v3 = (_DWORD *)*v5;
            if ( *(_DWORD *)(*v5 + 16) == 0 )
              goto LABEL_8;
            v7 = v3[11];
            v8 = v5[4] + 1;
            v5[4] = v8;
            if ( v8 >= v7 )
            {
              v5[4] = 0;
LABEL_8:
              --v5[3];
LABEL_28:
              v15 = v5[10] + v3[7];
LABEL_29:
              v5[10] = v15;
            }
          }
          v9 = &v3[52 * v5[4] + 50];
          v10 = *((_WORD *)v9 + 32);
          v26 = v5[4];
          if ( (v10 & 2) == 0 )
            break;
          if ( v3[4] == 0 )
            goto LABEL_17;
          v11 = v3[11];
          v12 = v26 + 1;
          v5[4] = v26 + 1;
          if ( v12 >= v11 )
          {
            v13 = v5[10];
            v14 = v3[7];
            v5[4] = 0;
            v5[3] = v6 - 1;
            v15 = v13 + v14;
            goto LABEL_29;
          }
        }
        if ( (v10 & 4) == 0 )
          break;
        if ( v3[4] == 0 )
          goto LABEL_27;
        v16 = v3[11];
        v17 = v26 + 1;
        v5[4] = v26 + 1;
        if ( v17 >= v16 )
        {
          v5[4] = 0;
LABEL_17:
          v18 = v5[10];
          v19 = v3[7];
          v5[3] = v6 - 1;
          v15 = v18 + v19;
          goto LABEL_29;
        }
      }
      if ( v9[2] == 1 && (*((_BYTE *)v9 + 66) & 4) != 0 )
        break;
      result = j_strcmp((const char *)v9 + 152, v30);
      if ( result == 0 )
      {
        v22 = v29;
        *v29 = v5[6] + v9[10];
        v22[1] = (char *)v9 - v28 - 168;
        return result;
      }
      if ( v3[4] == 0 )
        goto LABEL_27;
      v23 = v3[11];
      v24 = v26 + 1;
      v5[4] = v26 + 1;
      if ( v24 >= v23 )
      {
        v5[4] = 0;
LABEL_27:
        v5[3] = v6 - 1;
        goto LABEL_28;
      }
    }
    if ( v27 > 31 )
      return -2113862652;
    ++v27;
    v20 = v9[32];
    v5[27] = 0;
    v3 = (_DWORD *)(v28 + v20 + 168);
    v21 = v5[6] + v9[10];
    v5[23] = v3;
    v5[26] = 1;
    v5[29] = v21;
    v5 += 23;
  }
}


//======================================================================
// sub_34A810
// address: 0x0034A810   size: 0x254 (596 bytes)
//======================================================================
int __fastcall sub_34A810(_DWORD *a1, int a2, FILE *a3)
{
  int result; // r0
  char *v5; // r0
  _DWORD *meta_by_name_i; // r0
  _DWORD *v7; // r7
  _DWORD *v8; // r2
  _DWORD *v9; // r4
  _DWORD *v10; // r5
  int v11; // r3
  int v12; // r1
  int v13; // r3
  int v14; // r3
  _DWORD *v15; // r6
  __int16 v16; // r3
  int v17; // r1
  int v18; // r3
  int v19; // r1
  int v20; // r3
  int v21; // r5
  int v22; // r1
  _DWORD *v23; // r3
  int v24; // r12
  int v25; // r12
  int v26; // r1
  int v27; // r12
  int v28; // r2
  int v29; // r1
  int v30; // r2
  int v31; // r3
  _DWORD *v32; // [sp+0h] [bp-BECh]
  _DWORD *v33; // [sp+4h] [bp-BE8h]
  int v34; // [sp+14h] [bp-BD8h]
  int v35; // [sp+18h] [bp-BD4h]
  _DWORD *v36; // [sp+1Ch] [bp-BD0h]
  int v37; // [sp+20h] [bp-BCCh]
  FILE *stream; // [sp+24h] [bp-BC8h]
  int v39; // [sp+28h] [bp-BC4h]
  int v40; // [sp+2Ch] [bp-BC0h]
  _DWORD *v41; // [sp+30h] [bp-BBCh]
  void *v42; // [sp+34h] [bp-BB8h]
  _DWORD v43[2]; // [sp+3Ch] [bp-BB0h] BYREF
  _DWORD v44[736]; // [sp+44h] [bp-BA8h] BYREF
  char v45[40]; // [sp+BC4h] [bp-28h] BYREF

  v36 = a1;
  stream = a3;
  j_memset(v45, 0, 0x20u);
  result = scew_attribute_by_name(a2);
  v42 = &_stack_chk_guard;
  if ( result == 0 )
    return result;
  v40 = (int)v36 - v36[12] - 168;
  v5 = (char *)scew_attribute_value(result);
  tdr_normalize_string(v45, 32, v5);
  meta_by_name_i = (_DWORD *)tdr_get_meta_by_name_i(v40, v45);
  v7 = meta_by_name_i;
  if ( meta_by_name_i == nullptr || meta_by_name_i[4] == 0 || (int)meta_by_name_i[6] <= 0 )
  {
    j_fprintf(stream, aError_61, v36 + 32, v45);
    return -2113862598;
  }
  v8 = v36;
  v9 = v44;
  v36[49] = meta_by_name_i[12];
  result = 0;
  v44[0] = v8;
  v44[3] = 1;
  v44[4] = 0;
  v10 = v8;
  v37 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v34 = v9[3];
            if ( v34 > 0 )
              break;
            if ( --v37 == 0 )
              return result;
            v9 -= 23;
            v10 = (_DWORD *)*v9;
            if ( *(_DWORD *)(*v9 + 16) != 0 )
            {
              v12 = v10[11];
              v13 = v9[4] + 1;
              v9[4] = v13;
              if ( v13 >= v12 )
              {
                v9[4] = 0;
                v14 = v9[3];
                goto LABEL_39;
              }
            }
            else
            {
              v11 = v9[3];
LABEL_43:
              v9[3] = v11 - 1;
              v29 = v9[10];
              v28 = v10[7];
LABEL_44:
              v9[10] = v29 + v28;
            }
          }
          v15 = &v10[52 * v9[4] + 50];
          v16 = *((_WORD *)v15 + 32);
          v39 = v9[4];
          if ( (v16 & 2) == 0 )
            break;
          if ( v10[4] == 0 )
            goto LABEL_42;
          v17 = v10[11];
          v18 = v39 + 1;
          v9[4] = v39 + 1;
          if ( v18 >= v17 )
          {
            v9[4] = 0;
            goto LABEL_38;
          }
        }
        v35 = v16 & 4;
        if ( (v16 & 4) == 0 )
          break;
        if ( v10[4] == 0 )
          goto LABEL_42;
        v19 = v10[11];
        v20 = v39 + 1;
        v9[4] = v39 + 1;
        if ( v20 >= v19 )
        {
          v9[4] = 0;
LABEL_38:
          v14 = v34;
LABEL_39:
          v9[3] = v14 - 1;
          v28 = v9[10];
          v29 = v10[7];
          goto LABEL_44;
        }
      }
      if ( v15[2] != 1 || (*((_BYTE *)v15 + 66) & 4) == 0 )
        break;
      v21 = v15[32];
      if ( v37 > 31 )
        return -2113862652;
      ++v37;
      v22 = v35;
      v10 = (_DWORD *)(v40 + v21 + 168);
      v9[23] = v10;
      v9[26] = 1;
      v9[27] = v22;
      v9 += 23;
    }
    v35 = (int)(v15 + 38);
    v41 = v43;
    result = sub_34A6BC(v43, v7, (char *)v15 + 152);
    if ( result < 0 )
    {
      v33 = v7 + 32;
      v32 = v36 + 32;
      j_fprintf(stream, aError_60);
      return -2113862598;
    }
    v23 = (_DWORD *)(v40 + v43[1] + 168);
    v24 = v15[8];
    if ( v23[8] != v24 )
    {
      j_fprintf(stream, aError_62, v36 + 32, v35, v24, v7 + 32, v23[8]);
      return -2113862598;
    }
    v25 = v15[3];
    if ( v23[3] != v25 )
    {
      j_fprintf(stream, aError_63, v36 + 32, v35, v25, v7 + 32, v23[3]);
      return -2113862598;
    }
    v26 = v23[2];
    v27 = v15[2];
    if ( v26 != v27 )
      goto LABEL_35;
    if ( v23[32] != v15[32] )
      break;
    if ( v10[4] == 0 )
      goto LABEL_38;
    v30 = v10[11];
    v31 = v39 + 1;
    v9[4] = v39 + 1;
    if ( v31 >= v30 )
    {
      v9[4] = 0;
LABEL_42:
      v11 = v34;
      goto LABEL_43;
    }
  }
  v27 = v23[2];
LABEL_35:
  j_fprintf(stream, aError_64, v36 + 32, v35, v27, v7 + 32, v26);
  return -2113862598;
}


//======================================================================
// sub_34AA98
// address: 0x0034AA98   size: 0x114 (276 bytes)
//======================================================================
int __fastcall sub_34AA98(_DWORD *a1, int a2, const char *a3)
{
  _DWORD *v3; // r5
  int v5; // r0
  _DWORD *v6; // r4
  int v7; // r6
  int v8; // r7
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r0
  __int16 v12; // r3
  int v13; // r3
  int v14; // r7
  int v15; // r1
  int v16; // r2
  int v17; // r7
  int v18; // [sp+4h] [bp-B90h]
  int v19; // [sp+8h] [bp-B8Ch]
  _DWORD v21[737]; // [sp+10h] [bp-B84h] BYREF

  v3 = a1;
  if ( a2 < 0 )
    return 0;
  v21[0] = a1;
  v5 = a1[12];
  v6 = v21;
  v21[5] = a2;
  v21[4] = 0;
  v21[3] = 1;
  v21[14] = 0;
  v19 = (int)v3 - v5 - 168;
  v18 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = v6[3];
          if ( v7 > 0 )
          {
            v8 = v6[4];
            if ( v8 <= v6[5] )
              break;
          }
          if ( --v18 == 0 )
            return 0;
          v6 -= 23;
          v3 = (_DWORD *)*v6;
          if ( *(_DWORD *)(*v6 + 16) == 0 )
            goto LABEL_10;
          v9 = v3[11];
          v10 = v6[4] + 1;
          v6[4] = v10;
          if ( v10 >= v9 )
          {
            v6[4] = 0;
LABEL_10:
            --v6[3];
            goto LABEL_27;
          }
        }
        v11 = &v3[52 * v8 + 50];
        v12 = *((_WORD *)v11 + 32);
        if ( (v12 & 2) != 0 )
        {
          if ( v3[4] == 0 )
            goto LABEL_26;
          goto LABEL_24;
        }
        if ( (v12 & 4) == 0 )
          break;
        if ( v3[4] != 0 )
        {
          v13 = v3[11];
          v14 = v8 + 1;
          v6[4] = v14;
          if ( v14 >= v13 )
          {
            v6[4] = 0;
            goto LABEL_26;
          }
        }
        else
        {
LABEL_26:
          v6[3] = v7 - 1;
LABEL_27:
          v6[10] += v3[7];
        }
      }
      if ( v11[2] != 1 || (*((_BYTE *)v11 + 66) & 4) == 0 )
        break;
      if ( v18 > 31 )
        return -2113862652;
      v3 = (_DWORD *)(v19 + v11[32] + 168);
      ++v18;
      v15 = v3[11];
      v6[23] = v3;
      v6[26] = 1;
      v6[27] = 0;
      v6[28] = v15;
      v6[37] = 0;
      v6 += 23;
    }
    if ( j_strcmp((const char *)v11 + 152, a3) == 0 )
      return -2113862630;
    if ( v3[4] == 0 )
      goto LABEL_26;
LABEL_24:
    v16 = v3[11];
    v17 = v8 + 1;
    v6[4] = v17;
    if ( v17 >= v16 )
    {
      v6[4] = 0;
      goto LABEL_26;
    }
  }
}


//======================================================================
// sub_34ABBC
// address: 0x0034ABBC   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_34ABBC(int a1, int a2, FILE *a3)
{
  int v5; // r0
  char *v6; // r7
  int v7; // r4

  v5 = scew_attribute_by_name(a2);
  if ( v5 == 0 )
    return 0;
  v6 = (char *)scew_attribute_value(v5);
  v7 = tdr_sizeinfo_to_off_i((_DWORD *)(a1 + 80), a1, -1, v6);
  if ( v7 < 0 )
    j_fprintf(a3, aError_65, a1 + 128, v6);
  return v7;
}


//======================================================================
// sub_34AC04
// address: 0x0034AC04   size: 0x186 (390 bytes)
//======================================================================
int __fastcall sub_34AC04(_DWORD *a1, int a2, char *a3, char *a4)
{
  char *v4; // r5
  int v5; // r0
  char **v6; // r4
  int v7; // r6
  int v8; // r7
  int v9; // r2
  int v10; // r3
  char *v11; // r3
  __int16 v12; // r0
  char *v13; // r2
  char *v14; // r3
  const char *v15; // r0
  char *v16; // r2
  char *v17; // r3
  char *v18; // r1
  char *v19; // r7
  char *v20; // r1
  int v21; // r2
  int v22; // r0
  char *v23; // r2
  char *v24; // r3
  int i; // r4
  char *v27; // [sp+4h] [bp-BA8h]
  const char *v28; // [sp+8h] [bp-BA4h]
  int v29; // [sp+Ch] [bp-BA0h]
  char *v30; // [sp+10h] [bp-B9Ch]
  int v31; // [sp+14h] [bp-B98h]
  _DWORD *v32; // [sp+18h] [bp-B94h]
  int v33; // [sp+1Ch] [bp-B90h]
  char *v34; // [sp+20h] [bp-B8Ch]
  char *v35; // [sp+24h] [bp-B88h]
  _DWORD v36[10]; // [sp+28h] [bp-B84h] BYREF
  const char *v37; // [sp+50h] [bp-B5Ch]

  v4 = a3;
  v32 = a1;
  v33 = a2;
  v30 = a4;
  if ( a2 < 0 )
    return 0;
  v5 = a1[12];
  v36[0] = a3;
  v6 = (char **)v36;
  v7 = 0;
  v36[3] = 1;
  v36[4] = 0;
  v35 = (char *)v32 - v5 - 168;
  v37 = nullptr;
  v29 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v8 = (int)v6[3];
            if ( v8 > 0 )
              break;
            if ( --v29 == 0 )
              return v7;
            v6 -= 23;
            v4 = *v6;
            if ( *((_DWORD *)*v6 + 4) == 0 )
              goto LABEL_9;
            v9 = *((_DWORD *)v4 + 11);
            v10 = (int)(v6[4] + 1);
            v6[4] = (char *)v10;
            if ( v10 >= v9 )
            {
              v6[4] = nullptr;
LABEL_9:
              --v6[3];
LABEL_15:
              v15 = v6[10];
              goto LABEL_31;
            }
          }
          v11 = &v4[208 * (_DWORD)v6[4] + 200];
          v27 = v6[4];
          v12 = *((_WORD *)v11 + 32);
          if ( (v12 & 2) == 0 )
            break;
          if ( *((_DWORD *)v4 + 4) == 0 )
            goto LABEL_14;
          v13 = *((char **)v4 + 11);
          v14 = v27 + 1;
          v6[4] = v27 + 1;
          if ( (int)v14 >= (int)v13 )
          {
            v6[4] = nullptr;
LABEL_14:
            v6[3] = (char *)(v8 - 1);
            goto LABEL_15;
          }
        }
        v31 = v12 & 4;
        if ( (v12 & 4) == 0 )
          break;
        if ( *((_DWORD *)v4 + 4) == 0 )
          goto LABEL_14;
        v16 = *((char **)v4 + 11);
        v17 = v27 + 1;
        v6[4] = v27 + 1;
        if ( (int)v17 >= (int)v16 )
        {
          v6[4] = nullptr;
          goto LABEL_14;
        }
      }
      v18 = *((char **)v11 + 2);
      v28 = v11 + 152;
      v6[10] = v11 + 152;
      v34 = v18;
      if ( v18 == (_BYTE *)&dword_0 + 1 && (v11[66] & 4) != 0 )
        break;
      v7 = sub_34AA98(v32, v33, v28);
      if ( v7 < 0 )
        goto LABEL_34;
      if ( *((_DWORD *)v4 + 4) == 0 )
        goto LABEL_30;
      v23 = *((char **)v4 + 11);
      v24 = v27 + 1;
      v6[4] = v27 + 1;
      if ( (int)v24 >= (int)v23 )
      {
        v6[4] = nullptr;
LABEL_30:
        v15 = v28;
        v6[3] = (char *)(v8 - 1);
LABEL_31:
        v6[10] = (char *)&v15[*((_DWORD *)v4 + 7)];
      }
    }
    v19 = &v35[*((_DWORD *)v11 + 32) + 168];
    if ( v29 > 31 )
      break;
    v7 = sub_34AC04(v4, v27 - 1, v19, v30);
    if ( v7 < 0 )
      goto LABEL_34;
    v7 = sub_34AA98(v4, *((_DWORD *)v4 + 11), v28);
    if ( v7 < 0 )
      goto LABEL_34;
    v20 = v34;
    v21 = v31;
    v22 = v29 + 1;
    v6[23] = v19;
    v6[26] = v20;
    v6[27] = (char *)v21;
    v29 = v22;
    v4 = v19;
    v6 += 23;
  }
  v7 = -2113862652;
LABEL_34:
  j_strcat(v30, v37);
  for ( i = 1; i < v29; ++i )
  {
    j_strcat(v30, ".");
    j_strcat(v30, (const char *)v36[23 * i + 10]);
  }
  return v7;
}


//======================================================================
// sub_34AD9C
// address: 0x0034AD9C   size: 0x266 (614 bytes)
//======================================================================
int __fastcall sub_34AD9C(int a1, FILE *stream)
{
  int v4; // r3
  int v5; // r3
  int v6; // r6
  _BYTE *v7; // r1
  int v8; // r1
  _WORD *v9; // r2
  int v10; // r3
  int v11; // r2
  int v13; // r6
  int v14; // r5
  int v15; // r12
  int i; // r2
  int v17; // r3
  int v18; // r6
  int v19; // r1
  int j; // r3
  int v21; // [sp+Ch] [bp-418h]
  int v22; // [sp+10h] [bp-414h]
  char v23[1032]; // [sp+1Ch] [bp-408h] BYREF

  v22 = a1 - *(_DWORD *)(a1 + 48) - 168;
  if ( *(__int16 *)(a1 + 174) >= 0 )
  {
    v5 = 0;
    v6 = a1 + *(_DWORD *)(a1 + 192);
    while ( v5 < *(__int16 *)(a1 + 174) )
    {
      v7 = (_BYTE *)(v22 + *(_DWORD *)(v6 + 4) + 234);
      if ( (*v7 & 2) == 0 )
        *v7 |= 2u;
      ++v5;
    }
  }
  v4 = *(_DWORD *)(a1 + 168);
  if ( v4 <= 0 )
    goto LABEL_21;
  if ( *(_DWORD *)(a1 + 184) == -1 || (v8 = *(_DWORD *)(a1 + 188)) == -1 )
  {
    j_fprintf(stream, aError_70, a1 + 128, v4);
    return -2113862601;
  }
  v9 = (_WORD *)(a1 + 172);
  if ( *(_WORD *)(a1 + 172) == 0 )
    *v9 = 1;
  if ( *v9 == 1 )
  {
    v10 = v22 + v8 + 168;
    v11 = *(_DWORD *)(v10 + 8);
    if ( (unsigned int)(v11 - 2) > 0x14 )
    {
      j_fprintf(stream, aError_72, a1 + 128, v10 + 152);
      return -2113862601;
    }
    if ( (unsigned int)(v11 - 21) <= 1 && *(int *)(v10 + 28) <= 0 )
    {
      j_fprintf(stream, aError_71, a1 + 128, v10 + 152);
      return -2113862601;
    }
  }
LABEL_21:
  if ( *(__int16 *)(a1 + 174) < 0 )
  {
    v15 = 0;
  }
  else
  {
    v13 = *(_DWORD *)a1 & 0x40;
    if ( v13 == 0 )
    {
      j_memset(v23, 0, 0x400u);
      v14 = a1 + 200;
      v15 = 0;
      while ( 1 )
      {
        if ( v13 >= *(_DWORD *)(a1 + 44) )
          goto LABEL_34;
        if ( (*(_BYTE *)(v14 + 66) & 4) != 0 )
        {
          if ( *(_DWORD *)(v14 + 32) == 0 )
          {
            j_fprintf(stream, aError_69, a1 + 128, v14 + 152);
            return -2113862557;
          }
          v15 = sub_34AC04((_DWORD *)a1, v13 - 1, (char *)(v22 + *(_DWORD *)(v14 + 128) + 168), v23);
          if ( v15 < 0 )
          {
            j_fprintf(stream, aError_68, a1 + 128, v14 + 152, v23);
            return -2113862557;
          }
        }
        ++v13;
        v14 += 208;
      }
    }
    v15 = 0;
  }
LABEL_34:
  v21 = *(__int16 *)(a1 + 174);
  if ( v21 > 1 )
  {
    for ( i = 0; i < v21; ++i )
    {
      v17 = v22 + *(_DWORD *)(a1 + *(_DWORD *)(a1 + 192) + 4) + 168;
      if ( (*(_BYTE *)(v17 + 66) & 1) != 0 )
      {
        *(_BYTE *)(v17 + 66) |= 2u;
        j_fprintf(stream, aError_67, a1 + 128, v17 + 152, "unique", *(__int16 *)(a1 + 174));
        return -2113862602;
      }
    }
  }
  v18 = *(_DWORD *)(a1 + 44);
  v19 = a1 + 200;
  for ( j = 0; j < v18; ++j )
  {
    if ( (*(_BYTE *)(v19 + 66) & 4) != 0 && (*(_DWORD *)(v22 + *(_DWORD *)(v19 + 128) + 168) & 0x20) != 0 )
    {
      if ( *(_DWORD *)(v19 + 32) != 1 )
      {
        j_fprintf(stream, aError_48, a1 + 128, v19 + 152, "autoincrement");
        return -2113862560;
      }
      if ( (*(_DWORD *)a1 & 0x20) != 0 )
      {
        j_fprintf(stream, aError_66);
        return -2113862560;
      }
      *(_DWORD *)a1 |= 0x20u;
    }
    v19 += 208;
  }
  return v15;
}


//======================================================================
// sub_34C9E8
// address: 0x0034C9E8   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_34C9E8(int a1, int a2)
{
  int v2; // r2
  int v3; // r4
  int result; // r0
  int v5; // r1

  v2 = a1;
  v3 = dword_559200[a1];
  result = a1 + 10;
  v5 = a2 + v3;
  dword_559200[v2] = v5;
  if ( v5 > dword_559200[result] )
    dword_559200[result] = v5;
  return result * 4;
}


//======================================================================
// sub_34CA08
// address: 0x0034CA08   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_34CA08(int a1, int a2)
{
  int v2; // r2
  int result; // r0

  v2 = a1;
  result = a1 + 10;
  dword_559200[v2] = a2;
  if ( a2 > dword_559200[result] )
    dword_559200[result] = a2;
  return result * 4;
}


//======================================================================
// sub_34CA24
// address: 0x0034CA24   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_34CA24(int *a1)
{
  int result; // r0

  result = *a1;
  if ( result != 0 )
  {
    result = (*(int (__fastcall **)(int *))(result + 4))(a1);
    *a1 = 0;
  }
  return result;
}


//======================================================================
// sub_34CA3A
// address: 0x0034CA3A   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_34CA3A(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_34CA4C
// address: 0x0034CA4C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_34CA4C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_34CA5E
// address: 0x0034CA5E   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_34CA5E(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
}


//======================================================================
// sub_34CA68
// address: 0x0034CA68   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_34CA68(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 20))(a1);
}


//======================================================================
// sub_34CA72
// address: 0x0034CA72   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_34CA72(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 24))(a1);
}


//======================================================================
// sub_34CA7C
// address: 0x0034CA7C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_34CA7C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
}


//======================================================================
// sub_34CA86
// address: 0x0034CA86   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_34CA86(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
}


//======================================================================
// sub_34CA90
// address: 0x0034CA90   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_34CA90(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 48))(a1);
}


//======================================================================
// sub_34CA9A
// address: 0x0034CA9A   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_34CA9A(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
}


//======================================================================
// sub_34CAA4
// address: 0x0034CAA4   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_34CAA4(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}


//======================================================================
// sub_34CAB4
// address: 0x0034CAB4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_34CAB4(int a1, int a2, int a3, int a4)
{
  return (*(int (__fastcall **)(int, int, int, int))(a1 + 24))(a1, a2, a3, a4 & 0x87F7F);
}


//======================================================================
// sub_34CAC8
// address: 0x0034CAC8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_34CAC8(int a1)
{
  return (*(int (**)(void))(a1 + 28))();
}


//======================================================================
// sub_34CAD0
// address: 0x0034CAD0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_34CAD0(int a1)
{
  return (*(int (**)(void))(a1 + 32))();
}


//======================================================================
// sub_34CAD8
// address: 0x0034CAD8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_34CAD8(int a1)
{
  return (*(int (**)(void))(a1 + 52))();
}


//======================================================================
// sub_34CAE0
// address: 0x0034CAE0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_34CAE0(int a1)
{
  return (*(int (**)(void))(a1 + 60))();
}


//======================================================================
// sub_34CAE8
// address: 0x0034CAE8   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_34CAE8(int result)
{
  int v1; // r3
  int v2; // r2

  if ( result != 0 )
  {
    v1 = dword_559250;
    if ( dword_559250 == result )
    {
      dword_559250 = *(_DWORD *)(dword_559250 + 12);
    }
    else if ( dword_559250 != 0 )
    {
      while ( 1 )
      {
        v2 = *(_DWORD *)(v1 + 12);
        if ( v2 == 0 )
          break;
        if ( v2 == result )
        {
          result = *(_DWORD *)(result + 12);
          *(_DWORD *)(v1 + 12) = result;
          return result;
        }
        v1 = *(_DWORD *)(v1 + 12);
      }
    }
  }
  return result;
}


//======================================================================
// sub_34CB1C
// address: 0x0034CB1C   size: 0x10 (16 bytes)
//======================================================================
int sub_34CB1C()
{
  int result; // r0

  if ( off_559254 != nullptr )
    return off_559254();
  return result;
}


//======================================================================
// sub_34CB30
// address: 0x0034CB30   size: 0x10 (16 bytes)
//======================================================================
int sub_34CB30()
{
  int result; // r0

  if ( off_559258 != nullptr )
    return off_559258();
  return result;
}


//======================================================================
// sub_34CB44
// address: 0x0034CB44   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_34CB44(int result)
{
  if ( result != 0 )
    return *(_DWORD *)(result - 8);
  return result;
}


//======================================================================
// sub_34CB50
// address: 0x0034CB50   size: 0x8 (8 bytes)
//======================================================================
unsigned int __fastcall sub_34CB50(int a1)
{
  return (a1 + 7) & 0xFFFFFFF8;
}


//======================================================================
// sub_34CB58
// address: 0x0034CB58   size: 0x4 (4 bytes)
//======================================================================
int sub_34CB58()
{
  return 0;
}


//======================================================================
// sub_34CB60
// address: 0x0034CB60   size: 0x16 (22 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0034CB60  PUSH    {R3,LR}
//   0034CB62  LDR     R2, =(dword_471638 - 0x34CB68)
//   0034CB64  ADD     R2, PC; dword_471638
//   0034CB66  LDR     R3, [R2,#(dword_47163C - 0x471638)]
//   0034CB68  CMP     R3, #0
//   0034CB6A  BEQ     loc_34CB72
//   0034CB6C  LDR     R3, [R2,#(off_471684 - 0x471638)]
//   0034CB6E  BLX     R3
//   0034CB70  B       locret_34CB74
//   0034CB72  MOVS    R0, R3
//   0034CB74  POP     {R3,PC}

//======================================================================
// sub_34CBEC
// address: 0x0034CBEC   size: 0x4 (4 bytes)
//======================================================================
int sub_34CBEC()
{
  return 0;
}


//======================================================================
// sub_34CBF0
// address: 0x0034CBF0   size: 0x4 (4 bytes)
//======================================================================
int sub_34CBF0()
{
  return 0;
}


//======================================================================
// sub_34CBF4
// address: 0x0034CBF4   size: 0x4 (4 bytes)
//======================================================================
int sub_34CBF4()
{
  return 8;
}


//======================================================================
// sub_34CBFC
// address: 0x0034CBFC   size: 0x4 (4 bytes)
//======================================================================
int sub_34CBFC()
{
  return 0;
}


//======================================================================
// sub_34CC02
// address: 0x0034CC02   size: 0x4 (4 bytes)
//======================================================================
int sub_34CC02()
{
  return 0;
}


//======================================================================
// sub_34CC06
// address: 0x0034CC06   size: 0x4 (4 bytes)
//======================================================================
int sub_34CC06()
{
  return 0;
}


//======================================================================
// sub_34CC0E
// address: 0x0034CC0E   size: 0xA (10 bytes)
//======================================================================
int sub_34CC0E()
{
  return sqlite3_release_memory();
}


//======================================================================
// sub_34CC18
// address: 0x0034CC18   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_34CC18(void *a1, int a2, int a3, int a4)
{
  int v7; // r2

  sqlite3_mutex_enter(dword_559260);
  off_559270 = a1;
  dword_559268 = a3;
  dword_559274 = a2;
  dword_55926C = a4;
  if ( a4 <= 0 && (a4 != 0 || a3 == 0) || (v7 = 1, __SPAIR64__(a4, a3) > dword_559200[0]) )
    v7 = 0;
  dword_559284 = v7;
  sqlite3_mutex_leave(dword_559260);
  return 0;
}


//======================================================================
// sub_34CC70
// address: 0x0034CC70   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_34CC70(int result)
{
  void (__fastcall *v1)(int, int, int, int, int); // r5
  int v2; // r6
  int v3; // r7
  int v4; // r1
  int v5; // [sp+8h] [bp-Ch]
  int v6; // [sp+Ch] [bp-8h]

  v5 = result;
  v1 = (void (__fastcall *)(int, int, int, int, int))off_559270;
  if ( off_559270 != nullptr )
  {
    v2 = dword_559200[0];
    v3 = dword_559274;
    v6 = dword_559200[0] >> 31;
    off_559270 = nullptr;
    sqlite3_mutex_leave(dword_559260);
    v1(v3, v4, v2, v6, v5);
    result = sqlite3_mutex_enter(dword_559260);
    off_559270 = v1;
    dword_559274 = v3;
  }
  return result;
}


//======================================================================
// sub_34CCB0
// address: 0x0034CCB0   size: 0xC (12 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0034CCB0  PUSH    {R3,LR}
//   0034CCB2  LDR     R3, =(dword_471638 - 0x34CCB8)
//   0034CCB4  ADD     R3, PC; dword_471638
//   0034CCB6  LDR     R3, [R3,#(off_471668 - 0x471638)]
//   0034CCB8  BLX     R3
//   0034CCBA  POP     {R3,PC}

//======================================================================
// sub_34CCC0
// address: 0x0034CCC0   size: 0x82 (130 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0034CCC0  PUSH    {R3-R7,LR}
//   0034CCC2  LDR     R3, =(dword_471638 - 0x34CCCC)
//   0034CCC4  MOVS    R6, R0
//   0034CCC6  MOVS    R5, R1
//   0034CCC8  ADD     R3, PC; dword_471638
//   0034CCCA  LDR     R3, [R3,#(off_47166C - 0x471638)]
//   0034CCCC  BLX     R3
//   0034CCCE  MOVS    R1, R6
//   0034CCD0  MOVS    R4, R0
//   0034CCD2  MOVS    R0, #5
//   0034CCD4  BL      sub_34CA08
//   0034CCD8  LDR     R1, =(dword_559200 - 0x34CCDE)
//   0034CCDA  ADD     R1, PC; dword_559200
//   0034CCDC  LDR     R3, [R1,#(off_559270 - 0x559200)]
//   0034CCDE  CMP     R3, #0
//   0034CCE0  BEQ     loc_34CD18
//   0034CCE2  LDR     R6, [R1,#(qword_559268 - 0x559200)]
//   0034CCE4  LDR     R7, [R1,#(qword_559268+4 - 0x559200)]
//   0034CCE6  LDR     R1, [R1]
//   0034CCE8  MOVS    R2, R4
//   0034CCEA  ASRS    R3, R4, #0x1F
//   0034CCEC  SUBS    R6, R6, R2
//   0034CCEE  SBCS    R7, R3
//   0034CCF0  ASRS    R0, R1, #0x1F
//   0034CCF2  CMP     R7, R0
//   0034CCF4  BGT     loc_34CD0E
//   0034CCF6  BNE     loc_34CCFC
//   0034CCF8  CMP     R6, R1
//   0034CCFA  BHI     loc_34CD0E
//   0034CCFC  LDR     R3, =(dword_559200 - 0x34CD06)
//   0034CCFE  MOVS    R2, #1
//   0034CD00  MOVS    R0, R4
//   0034CD02  ADD     R3, PC; dword_559200
//   0034CD04  ADDS    R3, #(unk_559208 - 0x559200)
//   0034CD06  STR     R2, [R3,#(dword_559284 - 0x559208)]
//   0034CD08  BL      sub_34CC70
//   0034CD0C  B       loc_34CD18
//   0034CD0E  LDR     R3, =(dword_559200 - 0x34CD16)
//   0034CD10  MOVS    R2, #0
//   0034CD12  ADD     R3, PC; dword_559200
//   0034CD14  ADDS    R3, #(unk_559208 - 0x559200)
//   0034CD16  STR     R2, [R3,#(dword_559284 - 0x559208)]
//   0034CD18  LDR     R3, =(dword_471638 - 0x34CD20)
//   0034CD1A  MOVS    R0, R4
//   0034CD1C  ADD     R3, PC; dword_471638
//   0034CD1E  LDR     R3, [R3,#(off_47165C - 0x471638)]
//   0034CD20  BLX     R3
//   0034CD22  SUBS    R6, R0, #0
//   0034CD24  BEQ     loc_34CD3C
//   0034CD26  BL      sub_34CCB0
//   0034CD2A  MOVS    R4, R0
//   0034CD2C  MOVS    R1, R4
//   0034CD2E  MOVS    R0, #0
//   0034CD30  BL      sub_34C9E8
//   0034CD34  MOVS    R0, #9
//   0034CD36  MOVS    R1, #1
//   0034CD38  BL      sub_34C9E8
//   0034CD3C  STR     R6, [R5]
//   0034CD3E  MOVS    R0, R4
//   0034CD40  POP     {R3-R7,PC}

//======================================================================
// sub_34CD58
// address: 0x0034CD58   size: 0x8C (140 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0034CD58  PUSH    {R0-R2,R4,R5,LR}
//   0034CD5A  LDR     R5, =(dword_559200 - 0x34CD62)
//   0034CD5C  MOVS    R4, R0
//   0034CD5E  ADD     R5, PC; dword_559200
//   0034CD60  LDR     R0, [R5,#(dword_559260 - 0x559200)]
//   0034CD62  BL      sqlite3_mutex_enter
//   0034CD66  ADDS    R3, R5, #(unk_559204 - 0x559200)
//   0034CD68  LDR     R2, [R3,#(dword_559280 - 0x559204)]
//   0034CD6A  CMP     R2, #0
//   0034CD6C  BEQ     loc_34CD9A
//   0034CD6E  LDR     R1, =(dword_471638 - 0x34CD74)
//   0034CD70  ADD     R1, PC; dword_471638
//   0034CD72  ADDS    R1, #(dword_4716FC - 0x471638)
//   0034CD74  LDR     R1, [R1]
//   0034CD76  CMP     R1, R4
//   0034CD78  BLT     loc_34CD9A
//   0034CD7A  LDR     R1, [R5,#(dword_55927C - 0x559200)]
//   0034CD7C  SUBS    R2, #1
//   0034CD7E  MOVS    R0, #3
//   0034CD80  STR     R1, [SP,#0xC+var_8]
//   0034CD82  LDR     R1, [R1]
//   0034CD84  STR     R2, [R3,#(dword_559280 - 0x559204)]
//   0034CD86  STR     R1, [R5,#(dword_55927C - 0x559200)]
//   0034CD88  MOVS    R1, #1
//   0034CD8A  BL      sub_34C9E8
//   0034CD8E  MOVS    R0, #8
//   0034CD90  MOVS    R1, R4
//   0034CD92  BL      sub_34CA08
//   0034CD96  LDR     R0, [R5,#(dword_559260 - 0x559200)]
//   0034CD98  B       loc_34CDC8
//   0034CD9A  LDR     R5, =(dword_471638 - 0x34CDA0)
//   0034CD9C  ADD     R5, PC; dword_471638
//   0034CD9E  LDR     R1, [R5]
//   0034CDA0  CMP     R1, #0
//   0034CDA2  BEQ     loc_34CDCE
//   0034CDA4  MOVS    R0, #8
//   0034CDA6  MOVS    R1, R4
//   0034CDA8  BL      sub_34CA08
//   0034CDAC  ADD     R1, SP, #0xC+var_8
//   0034CDAE  MOVS    R0, R4
//   0034CDB0  BL      sub_34CCC0
//   0034CDB4  LDR     R3, [SP,#0xC+var_8]
//   0034CDB6  MOVS    R1, R0
//   0034CDB8  CMP     R3, #0
//   0034CDBA  BEQ     loc_34CDC2
//   0034CDBC  MOVS    R0, #4
//   0034CDBE  BL      sub_34C9E8
//   0034CDC2  LDR     R3, =(dword_559200 - 0x34CDC8)
//   0034CDC4  ADD     R3, PC; dword_559200
//   0034CDC6  LDR     R0, [R3,#(dword_559260 - 0x559200)]
//   0034CDC8  BL      sqlite3_mutex_leave
//   0034CDCC  B       loc_34CDE0
//   0034CDCE  LDR     R3, =(dword_559200 - 0x34CDD4)
//   0034CDD0  ADD     R3, PC; dword_559200
//   0034CDD2  LDR     R0, [R3,#(dword_559260 - 0x559200)]
//   0034CDD4  BL      sqlite3_mutex_leave
//   0034CDD8  LDR     R3, [R5,#(off_47165C - 0x471638)]
//   0034CDDA  MOVS    R0, R4
//   0034CDDC  BLX     R3
//   0034CDDE  STR     R0, [SP,#0xC+var_8]
//   0034CDE0  LDR     R0, [SP,#0xC+var_8]
//   0034CDE2  POP     {R1-R5,PC}

//======================================================================
// sub_34CDF8
// address: 0x0034CDF8   size: 0x8C (140 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0034CDF8  PUSH    {R3-R7,LR}
//   0034CDFA  SUBS    R4, R0, #0
//   0034CDFC  BEQ     locret_34CE82
//   0034CDFE  LDR     R3, =(dword_471638 - 0x34CE04)
//   0034CE00  ADD     R3, PC; dword_471638
//   0034CE02  ADDS    R3, #(dword_4716F8 - 0x471638)
//   0034CE04  LDR     R3, [R3]
//   0034CE06  CMP     R0, R3
//   0034CE08  BCC     loc_34CE36
//   0034CE0A  LDR     R5, =(dword_559200 - 0x34CE10)
//   0034CE0C  ADD     R5, PC; dword_559200
//   0034CE0E  LDR     R2, [R5,#(dword_559278 - 0x559200)]
//   0034CE10  CMP     R0, R2
//   0034CE12  BCS     loc_34CE36
//   0034CE14  LDR     R0, [R5,#(dword_559260 - 0x559200)]
//   0034CE16  BL      sqlite3_mutex_enter
//   0034CE1A  LDR     R3, [R5,#(dword_55927C - 0x559200)]
//   0034CE1C  MOVS    R1, #1
//   0034CE1E  MOVS    R0, #3
//   0034CE20  STR     R3, [R4]
//   0034CE22  ADDS    R3, R5, #(unk_559204 - 0x559200)
//   0034CE24  LDR     R2, [R3,#(dword_559280 - 0x559204)]
//   0034CE26  NEGS    R1, R1
//   0034CE28  STR     R4, [R5,#(dword_55927C - 0x559200)]
//   0034CE2A  ADDS    R2, #1
//   0034CE2C  STR     R2, [R3,#(dword_559280 - 0x559204)]
//   0034CE2E  BL      sub_34C9E8
//   0034CE32  LDR     R0, [R5,#(dword_559260 - 0x559200)]
//   0034CE34  B       loc_34CE76
//   0034CE36  LDR     R5, =(dword_471638 - 0x34CE3C)
//   0034CE38  ADD     R5, PC; dword_471638
//   0034CE3A  LDR     R2, [R5]
//   0034CE3C  CMP     R2, #0
//   0034CE3E  BEQ     loc_34CE7C
//   0034CE40  MOVS    R0, R4
//   0034CE42  BL      sub_34CCB0
//   0034CE46  LDR     R6, =(dword_559200 - 0x34CE50)
//   0034CE48  MOVS    R7, R0
//   0034CE4A  NEGS    R7, R7
//   0034CE4C  ADD     R6, PC; dword_559200
//   0034CE4E  LDR     R0, [R6,#(dword_559260 - 0x559200)]
//   0034CE50  BL      sqlite3_mutex_enter
//   0034CE54  MOVS    R0, #4
//   0034CE56  MOVS    R1, R7
//   0034CE58  BL      sub_34C9E8
//   0034CE5C  MOVS    R0, #0
//   0034CE5E  MOVS    R1, R7
//   0034CE60  BL      sub_34C9E8
//   0034CE64  MOVS    R1, #1
//   0034CE66  MOVS    R0, #9
//   0034CE68  NEGS    R1, R1
//   0034CE6A  BL      sub_34C9E8
//   0034CE6E  MOVS    R0, R4
//   0034CE70  LDR     R3, [R5,#(off_471660 - 0x471638)]
//   0034CE72  BLX     R3
//   0034CE74  LDR     R0, [R6,#(dword_559260 - 0x559200)]
//   0034CE76  BL      sqlite3_mutex_leave
//   0034CE7A  B       locret_34CE82
//   0034CE7C  LDR     R3, [R5,#(off_471660 - 0x471638)]
//   0034CE7E  MOVS    R0, R4
//   0034CE80  BLX     R3
//   0034CE82  POP     {R3-R7,PC}

//======================================================================
// sub_34CE94
// address: 0x0034CE94   size: 0x4E (78 bytes)
//======================================================================
unsigned int __fastcall sub_34CE94(_DWORD *a1)
{
  unsigned __int8 *v1; // r2
  unsigned int result; // r0
  _BYTE *v4; // r2

  v1 = (unsigned __int8 *)(*a1)++;
  result = *v1;
  if ( result > 0xBF )
  {
    for ( result = byte_44A924[result - 192]; ; result = (result << 6) + (*v4 & 0x3F) )
    {
      v4 = (_BYTE *)*a1;
      if ( (*(_BYTE *)*a1 & 0xC0) != 0x80 )
        break;
      *a1 = v4 + 1;
    }
    if ( result <= 0x7F || result >> 11 == 27 || (result & 0xFFFFFFFE) == 0xFFFE )
      return 65533;
  }
  return result;
}


//======================================================================
// sub_34CEF0
// address: 0x0034CEF0   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_34CEF0(_BYTE *a1, int a2)
{
  _BYTE *v2; // r3
  unsigned int v3; // r1
  int result; // r0
  unsigned int v5; // r2

  v2 = a1;
  if ( a2 < 0 )
    v3 = -1;
  else
    v3 = (unsigned int)&a1[a2];
  for ( result = 0; ; ++result )
  {
    v5 = (unsigned __int8)*v2;
    if ( *v2 == 0 || (unsigned int)v2 >= v3 )
      break;
    ++v2;
    if ( v5 > 0xBF )
    {
      while ( (*v2 & 0xC0) == 0x80 )
        ++v2;
    }
  }
  return result;
}


//======================================================================
// sub_34CF26
// address: 0x0034CF26   size: 0x2A (42 bytes)
//======================================================================
int sub_34CF26()
{
  return 0;
}


//======================================================================
// sub_34CF50
// address: 0x0034CF50   size: 0x1A (26 bytes)
//======================================================================
unsigned int __fastcall sub_34CF50(unsigned int result)
{
  _BYTE *i; // r3

  if ( result != 0 )
  {
    for ( i = (_BYTE *)result; *i != 0; ++i )
      ;
    return (unsigned int)(4 * (_DWORD)&i[-result]) >> 2;
  }
  return result;
}


//======================================================================
// sub_34CF6A
// address: 0x0034CF6A   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_34CF6A(unsigned __int8 *a1)
{
  unsigned int v1; // r3
  int v2; // r2
  int i; // r1
  int v4; // r4

  if ( a1 == nullptr )
    return -1;
  v1 = *a1;
  if ( v1 == 39 )
    goto LABEL_10;
  if ( v1 > 0x27 )
  {
    if ( v1 != 91 )
    {
      if ( v1 == 96 )
        goto LABEL_10;
      return -1;
    }
    v1 = 93;
LABEL_10:
    v2 = 0;
    for ( i = 1; ; ++i )
    {
      v4 = a1[i];
      if ( v4 == v1 )
      {
        if ( a1[i + 1] != v1 )
        {
          a1[v2] = 0;
          return v2;
        }
        a1[v2] = v1;
        ++i;
      }
      else
      {
        a1[v2] = v4;
      }
      ++v2;
    }
  }
  if ( v1 == 34 )
    goto LABEL_10;
  return -1;
}


//======================================================================
// sub_34D098
// address: 0x0034D098   size: 0x490 (1168 bytes)
//======================================================================
bool __fastcall sub_34D098(_BYTE *a1, double *a2, int a3, int a4)
{
  _BYTE *v4; // r6
  int v5; // r5
  int i; // r1
  int v7; // r3
  int j; // r4
  int v9; // r4
  int v10; // r3
  int v11; // r2
  int v12; // r4
  int v13; // r2
  int v14; // r3
  int v15; // r7
  int v16; // r2
  int v17; // r7
  double v18; // r4
  double v19; // r0
  double v20; // r2
  double v21; // r0
  double v22; // r2
  double v23; // r4
  double v24; // r0
  _BOOL4 result; // r0
  __int64 v26; // [sp+0h] [bp-3Ch]
  int v27; // [sp+Ch] [bp-30h]
  int v28; // [sp+10h] [bp-2Ch]
  int v29; // [sp+10h] [bp-2Ch]
  int v30; // [sp+18h] [bp-24h]
  int v31; // [sp+18h] [bp-24h]
  unsigned int v32; // [sp+1Ch] [bp-20h]
  int v33; // [sp+20h] [bp-1Ch]
  _BOOL4 v34; // [sp+24h] [bp-18h]

  v4 = a1;
  *(_DWORD *)a2 = 0;
  *((_DWORD *)a2 + 1) = 0;
  if ( a4 == 1 )
  {
    v32 = (unsigned int)&a1[a3];
    v34 = false;
    v5 = 1;
  }
  else
  {
    for ( i = 3 - a4; i < a3 && a1[i] == 0; i += 2 )
      ;
    v34 = i < a3;
    v32 = (unsigned int)&a1[a4 - 3 + i];
    v4 = &a1[a4 & 1];
    v5 = 2;
  }
  while ( 1 )
  {
    if ( (unsigned int)v4 >= v32 )
      return false;
    v7 = (unsigned __int8)*v4;
    if ( (byte_44AA64[v7] & 1) == 0 )
      break;
    v4 += v5;
  }
  if ( v7 == 45 )
  {
    v4 += v5;
    v33 = -1;
  }
  else
  {
    v33 = 1;
    if ( v7 == 43 )
      v4 += v5;
  }
  for ( j = 0; ; ++j )
  {
    v27 = j;
    if ( (unsigned int)v4 >= v32 || *v4 != 48 )
      break;
    v4 += v5;
  }
  v26 = 0;
  while ( (unsigned int)v4 < v32 )
  {
    v9 = (unsigned __int8)*v4;
    if ( (byte_44AA64[v9] & 4) == 0 || v26 > 0xCCCCCCCCCCCCCCALL )
      break;
    v26 = v9 - 48 + 10 * v26;
    v4 += v5;
    ++v27;
  }
  v10 = v27;
  while ( 1 )
  {
    v30 = v27 - v10;
    if ( (unsigned int)v4 >= v32 )
      goto LABEL_68;
    v11 = (unsigned __int8)*v4;
    if ( (byte_44AA64[v11] & 4) == 0 )
      break;
    v4 += v5;
    ++v27;
  }
  if ( v11 == 46 )
  {
    v4 += v5;
    v28 = v27 + v30;
    while ( 1 )
    {
      v27 = v28 - v30;
      if ( (unsigned int)v4 >= v32 )
        break;
      v12 = (unsigned __int8)*v4;
      if ( (byte_44AA64[v12] & 4) == 0 || v26 > 0xCCCCCCCCCCCCCCALL )
        break;
      v26 = v12 - 48 + 10 * v26;
      v4 += v5;
      --v30;
    }
    while ( (unsigned int)v4 < v32 )
    {
      if ( (byte_44AA64[(unsigned __int8)*v4] & 4) == 0 )
        goto LABEL_45;
      v4 += v5;
      ++v27;
    }
LABEL_68:
    v29 = 1;
    v15 = 0;
LABEL_70:
    v14 = 1;
    goto LABEL_72;
  }
LABEL_45:
  if ( (*v4 & 0xDF) != 0x45 )
  {
    if ( v27 == 0 )
    {
      v29 = 1;
      v15 = 0;
      goto LABEL_70;
    }
    v15 = 0;
    v14 = 1;
    goto LABEL_65;
  }
  v4 += v5;
  if ( (unsigned int)v4 >= v32 )
  {
    v29 = 0;
    v15 = 0;
    goto LABEL_70;
  }
  v13 = (unsigned __int8)*v4;
  if ( v13 == 45 )
  {
    v4 += v5;
    v14 = -1;
  }
  else
  {
    v14 = 1;
    if ( v13 == 43 )
      v4 += v5;
  }
  v29 = 0;
  v15 = 0;
  while ( (unsigned int)v4 < v32 )
  {
    v16 = (unsigned __int8)*v4;
    if ( (byte_44AA64[v16] & 4) == 0 )
      break;
    if ( v15 > 9999 )
      v15 = 10000;
    else
      v15 = 10 * v15 + v16 - 48;
    v4 += v5;
    v29 = 1;
  }
  if ( v27 != 0 && v29 != 0 )
  {
LABEL_65:
    while ( (unsigned int)v4 < v32 && (byte_44AA64[(unsigned __int8)*v4] & 1) != 0 )
      v4 += v5;
    v29 = 1;
  }
LABEL_72:
  v17 = v15 * v14 + v30;
  if ( v17 >= 0 )
  {
    if ( v26 == 0 )
      goto LABEL_74;
    while ( v26 <= 0xCCCCCCCCCCCCCCBLL && v17 != 0 )
    {
      --v17;
      v26 *= 10;
    }
    v31 = 1;
  }
  else
  {
    v17 = -v17;
    if ( v26 == 0 )
    {
LABEL_74:
      if ( v33 == -1 && v27 != 0 )
        v24 = -0.0;
      else
        v24 = 0.0;
      goto LABEL_108;
    }
    while ( v26 % 10 == 0 && v17 != 0 )
    {
      v26 /= 10;
      --v17;
    }
    v31 = -1;
  }
  if ( v33 == -1 )
    v26 = -v26;
  if ( v17 != 0 )
  {
    if ( (unsigned int)(v17 - 308) > 0x21 )
    {
      if ( v17 > 341 )
      {
        if ( v31 == -1 )
        {
          v21 = (double)v26;
          v22 = 0.0;
        }
        else
        {
          v22 = 1.0e308 * 1.0e308;
          v21 = (double)v26;
        }
      }
      else
      {
        v23 = 1.0;
        while ( v17 % 22 != 0 )
        {
          --v17;
          v23 = v23 * 10.0;
        }
        while ( v17 > 0 )
        {
          v17 -= 22;
          v23 = v23 * 1.0e22;
        }
        if ( v31 == -1 )
        {
          v19 = (double)v26;
          v20 = v23;
          goto LABEL_104;
        }
        v21 = (double)v26;
        v22 = v23;
      }
    }
    else
    {
      v18 = 1.0;
      while ( v17 % 308 != 0 )
      {
        --v17;
        v18 = v18 * 10.0;
      }
      if ( v31 == -1 )
      {
        v19 = (double)v26 / v18;
        v20 = 1.0e308;
LABEL_104:
        v24 = v19 / v20;
        goto LABEL_108;
      }
      v21 = (double)v26 * v18;
      v22 = 1.0e308;
    }
    v24 = v21 * v22;
    goto LABEL_108;
  }
  v24 = (double)v26;
LABEL_108:
  *a2 = v24;
  result = false;
  if ( (unsigned int)v4 >= v32 && v27 != 0 && v29 != 0 )
    return !v34;
  return result;
}


//======================================================================
// sub_34D568
// address: 0x0034D568   size: 0x176 (374 bytes)
//======================================================================
int __fastcall sub_34D568(unsigned __int8 *a1, __int64 *a2, int a3, int a4)
{
  unsigned __int8 *v4; // r4
  int v5; // r6
  int i; // r1
  int v7; // r3
  unsigned __int8 *j; // r5
  unsigned __int8 *v9; // r7
  __int64 k; // r0
  unsigned int v11; // r3
  int v12; // r12
  __int64 v13; // r2
  int result; // r0
  int v15; // r3
  unsigned __int8 *v16; // r1
  int v17; // r2
  int v18; // r2
  int v19; // [sp+0h] [bp-24h]
  unsigned int v20; // [sp+4h] [bp-20h]
  unsigned int v21; // [sp+8h] [bp-1Ch]
  _BOOL4 v22; // [sp+Ch] [bp-18h]
  unsigned __int8 *v24; // [sp+1Ch] [bp-8h]

  v4 = a1;
  if ( a4 == 1 )
  {
    v20 = (unsigned int)&a1[a3];
    v22 = false;
    v5 = 1;
  }
  else
  {
    for ( i = 3 - a4; i < a3 && a1[i] == 0; i += 2 )
      ;
    v22 = i < a3;
    v20 = (unsigned int)&a1[a4 - 3 + i];
    v4 = &a1[a4 & 1];
    v5 = 2;
  }
  while ( 1 )
  {
    if ( (unsigned int)v4 >= v20 )
    {
      v19 = 0;
      goto LABEL_16;
    }
    v7 = *v4;
    if ( (byte_44AA64[v7] & 1) == 0 )
      break;
    v4 += v5;
  }
  if ( v7 == 45 )
  {
    v4 += v5;
    v19 = 1;
  }
  else
  {
    v19 = byte_44AA64[v7] & 1;
    if ( v7 == 43 )
      v4 += v5;
  }
LABEL_16:
  for ( j = v4; (unsigned int)j < v20 && *j == 48; j += v5 )
    ;
  v9 = j;
  v21 = 0;
  for ( k = 0; ; k = 10 * k - 48 + v11 )
  {
    v12 = v9 - j;
    v24 = v9;
    if ( (unsigned int)v9 >= v20 )
      break;
    v11 = *v9;
    v9 += v5;
    v21 = v11;
    if ( v11 - 48 > 9 )
      break;
  }
  if ( k >= 0 )
  {
    if ( v19 == 0 )
    {
      *a2 = k;
      goto LABEL_32;
    }
    v13 = -k;
  }
  else if ( v19 != 0 )
  {
    v13 = 0x8000000000000000LL;
  }
  else
  {
    v13 = 0x7FFFFFFFFFFFFFFFLL;
  }
  *a2 = v13;
LABEL_32:
  if ( v21 == 0 || (result = 1, (unsigned int)v24 >= v20) )
  {
    if ( v12 == 0 && v4 == j )
    {
      return 1;
    }
    else
    {
      result = 1;
      if ( v12 <= 19 * v5 && !v22 )
      {
        result = 0;
        if ( v12 >= 19 * v5 )
        {
          v15 = 0;
          v16 = j;
          while ( 1 )
          {
            v17 = (unsigned __int8)a92233720368547[v15++];
            v18 = 10 * (*v16 - v17);
            if ( v18 != 0 )
              break;
            v16 += v5;
            if ( v15 == 18 )
            {
              v18 = j[18 * v5] - 56;
              break;
            }
          }
          if ( v18 < 0 )
          {
            return 0;
          }
          else
          {
            result = 1;
            if ( v18 == 0 )
              return 2 * (v19 == 0);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_34D6F8
// address: 0x0034D6F8   size: 0x8A (138 bytes)
//======================================================================
int __fastcall sub_34D6F8(unsigned __int8 *a1, _DWORD *a2)
{
  int v2; // r3
  unsigned __int8 *v3; // r4
  int v4; // r7
  int v5; // r5
  __int64 v6; // r0
  int v7; // r6
  __int64 v8; // r4

  v2 = *a1;
  if ( v2 == 45 )
  {
    v3 = a1 + 1;
    v4 = 1;
  }
  else
  {
    v4 = 0;
    v3 = &a1[v2 == 43];
  }
  while ( *v3 == 48 )
    ++v3;
  v5 = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = v3[v5] - 48;
    if ( (unsigned __int8)(v3[v5] - 48) > 9u )
      break;
    ++v5;
    v6 = 10 * v6 + v7;
    if ( v5 == 11 )
      return 0;
  }
  v8 = v6 - (unsigned int)v4;
  if ( SHIDWORD(v8) > 0 || HIDWORD(v8) == 0 && (int)v8 < 0 )
    return 0;
  if ( v4 != 0 )
    v6 = -v6;
  *a2 = v6;
  return 1;
}


//======================================================================
// sub_34D782
// address: 0x0034D782   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_34D782(unsigned __int8 *a1, int a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  v4[0] = 0;
  if ( a1 != nullptr )
    sub_34D6F8(a1, v4);
  return v4[0];
}


//======================================================================
// sub_34D798
// address: 0x0034D798   size: 0x11C (284 bytes)
//======================================================================
int __fastcall sub_34D798(unsigned __int8 *a1, _DWORD *a2)
{
  int v2; // r5
  int v4; // r6
  int v5; // r5
  int v6; // r7
  int v7; // r5
  int v8; // r6
  int v9; // r7
  int v10; // r6
  int v11; // r5
  int v12; // r6
  int v13; // r7
  unsigned int v14; // [sp+4h] [bp-10h]
  unsigned int v15; // [sp+4h] [bp-10h]
  int v16; // [sp+8h] [bp-Ch]
  unsigned __int8 v17; // [sp+Ch] [bp-8h]

  v2 = *a1;
  if ( (v2 & 0x80) != 0 )
  {
    v4 = a1[1];
    if ( (v4 & 0x80) != 0 )
    {
      v5 = (v2 << 14) | a1[2];
      v6 = v5 & 0x80;
      v7 = v5 & 0x1FC07F;
      if ( v6 != 0 )
      {
        v14 = v7;
        v8 = (v4 << 14) | a1[3];
        v9 = v8 & 0x80;
        v10 = v8 & 0x1FC07F;
        if ( v9 != 0 )
        {
          v11 = (v7 << 14) | a1[4];
          v17 = a1[4];
          v16 = (v14 << 14) | v17;
          if ( (v17 & 0x80) != 0 )
          {
            v15 = (v14 << 7) | v10;
            v12 = a1[5] | (v10 << 14);
            if ( (v12 & 0x80) != 0 )
            {
              if ( (a1[6] & 0x80) != 0 )
              {
                v13 = a1[6] & 0x7F | (v16 << 14) & 0x1FC07F;
                if ( (a1[7] & 0x80) != 0 )
                {
                  *a2 = (v13 << 15) | ((a1[7] & 0x7F | (v12 << 14) & 0x1FC07F) << 8) | a1[8];
                  a2[1] = (16 * v15) | ((unsigned __int8)(v17 & 0x7F) >> 3);
                  return 9;
                }
                else
                {
                  *a2 = a1[7] & 0x7F | (v12 << 14) & 0xF01FC07F | (v13 << 7);
                  a2[1] = v15 >> 4;
                  return 8;
                }
              }
              else
              {
                *a2 = a1[6] & 0x7F | (v16 << 14) & 0xF01FC07F | ((v12 & 0x1FC07F) << 7);
                a2[1] = v15 >> 11;
                return 7;
              }
            }
            else
            {
              *a2 = v12 | ((v16 & 0x1FC07F) << 7);
              a2[1] = v15 >> 18;
              return 6;
            }
          }
          else
          {
            *a2 = v11 | (v10 << 7);
            a2[1] = v14 >> 18;
            return 5;
          }
        }
        else
        {
          *a2 = v10 | (v7 << 7);
          a2[1] = 0;
          return 4;
        }
      }
      else
      {
        *a2 = v7 | ((v4 & 0x7F) << 7);
        a2[1] = 0;
        return 3;
      }
    }
    else
    {
      *a2 = v4 | ((v2 & 0x7F) << 7);
      a2[1] = 0;
      return 2;
    }
  }
  else
  {
    *a2 = v2;
    a2[1] = 0;
    return 1;
  }
}


//======================================================================
// sub_34D8BC
// address: 0x0034D8BC   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_34D8BC(unsigned __int64 a1)
{
  int v1; // r3

  v1 = 0;
  do
  {
    a1 >>= 7;
    ++v1;
  }
  while ( a1 != 0 && v1 != 9 );
  return v1;
}


//======================================================================
// sub_34D8D8
// address: 0x0034D8D8   size: 0x18 (24 bytes)
//======================================================================
unsigned int __fastcall sub_34D8D8(unsigned int *a1)
{
  return _byteswap_ulong(*a1);
}


//======================================================================
// sub_34D8F0
// address: 0x0034D8F0   size: 0x10 (16 bytes)
//======================================================================
_BYTE *__fastcall sub_34D8F0(_BYTE *result, int a2)
{
  *result = HIBYTE(a2);
  result[1] = BYTE2(a2);
  result[2] = BYTE1(a2);
  result[3] = a2;
  return result;
}


//======================================================================
// sub_34D900
// address: 0x0034D900   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_34D900(__int64 *a1, __int64 a2)
{
  __int64 v3; // r4

  v3 = *a1;
  if ( a2 < 0 )
  {
    if ( v3 < 0 && (__int64)(0x8000000000000001LL - v3) > a2 + 1 )
      return 1;
LABEL_7:
    *a1 = v3 + a2;
    return 0;
  }
  if ( v3 <= 0 || a2 <= __SPAIR64__(0x7FFFFFFF - HIDWORD(v3), -1 - (int)v3) )
    goto LABEL_7;
  return 1;
}


//======================================================================
// sub_34D970
// address: 0x0034D970   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_34D970(int result)
{
  if ( result < 0 )
  {
    if ( result == 0x80000000 )
      return 0x7FFFFFFF;
    else
      return -result;
  }
  return result;
}


//======================================================================
// sub_34D98C
// address: 0x0034D98C   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_34D98C(unsigned __int64 a1)
{
  __int16 v1; // r3
  int v2; // off

  v1 = 40;
  if ( a1 > 7 )
  {
    while ( a1 > 0xFF )
    {
      v1 += 40;
      a1 = ((unsigned __int64)HIDWORD(a1) << 28) | ((unsigned int)a1 >> 4);
    }
    while ( a1 > 0xF )
    {
      v1 += 10;
      a1 >>= 1;
    }
  }
  else
  {
    if ( (unsigned int)a1 <= 1 )
    {
      LOWORD(a1) = WORD2(a1);
      goto LABEL_13;
    }
    do
    {
      v2 = (a1 + (unsigned int)a1) >> 32;
      LODWORD(a1) = 2 * a1;
      HIDWORD(a1) += v2;
      v1 -= 10;
    }
    while ( a1 <= 7 );
  }
  LOWORD(a1) = v1 - 10 + *(_WORD *)&asc_44AB24[2 * (a1 & 7) + 64];
LABEL_13:
  LODWORD(a1) = (__int16)a1;
  return a1;
}


//======================================================================
// sub_34DA10
// address: 0x0034DA10   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_34DA10(unsigned __int8 *a1, int a2)
{
  int result; // r0

  result = 0;
  while ( a2 > 0 )
  {
    --a2;
    result ^= byte_44A964[*a1++] ^ (8 * result);
  }
  return result;
}


//======================================================================
// sub_34DA38
// address: 0x0034DA38   size: 0x46 (70 bytes)
//======================================================================
int **__fastcall sub_34DA38(_DWORD *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v5; // r2
  int *v7; // r3
  int **v8; // r4
  int v9; // r5

  v5 = a1[3];
  if ( v5 != 0 )
  {
    v7 = (int *)(v5 + 8 * a4);
    v8 = (int **)v7[1];
    v9 = *v7;
  }
  else
  {
    v8 = (int **)a1[2];
    v9 = a1[1];
  }
  while ( 1 )
  {
    if ( v9 == 0 )
      return nullptr;
    if ( v8 == nullptr || v8[4] == (int *)a3 && sqlite3_strnicmp(v8[3], a2, a3) == 0 )
      break;
    v8 = (int **)*v8;
    --v9;
  }
  return v8;
}


//======================================================================
// sub_34DA7E
// address: 0x0034DA7E   size: 0x30 (48 bytes)
//======================================================================
int **__fastcall sub_34DA7E(_DWORD *a1, unsigned __int8 *a2, int a3)
{
  unsigned int v3; // r3
  int **result; // r0

  v3 = a1[3];
  if ( v3 != 0 )
    v3 = (unsigned int)sub_34DA10(a2, a3) % *a1;
  result = sub_34DA38(a1, a2, a3, v3);
  if ( result != nullptr )
    return (int **)result[2];
  return result;
}


//======================================================================
// sub_34DAAE
// address: 0x0034DAAE   size: 0xE (14 bytes)
//======================================================================
int sub_34DAAE()
{
  int v0; // r0

  v0 = sub_34CB60(2);
  return sqlite3_mutex_enter(v0);
}


//======================================================================
// sub_34DABC
// address: 0x0034DABC   size: 0xE (14 bytes)
//======================================================================
int sub_34DABC()
{
  int v0; // r0

  v0 = sub_34CB60(2);
  return sqlite3_mutex_leave(v0);
}


//======================================================================
// sub_34DACC
// address: 0x0034DACC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_34DACC(int a1)
{
  int result; // r0
  int v3; // r3
  struct stat v4; // [sp+0h] [bp-6Ch] BYREF
  __int64 v5; // [sp+60h] [bp-Ch]

  result = *(_DWORD *)(a1 + 8);
  if ( result != 0 )
  {
    v3 = off_472358(*(const char **)(a1 + 32), &v4);
    result = 1;
    if ( v3 == 0 )
      return v5 != *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4);
  }
  return result;
}


//======================================================================
// sub_34DB04
// address: 0x0034DB04   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_34DB04(int a1, int a2)
{
  int v3; // r4
  __int16 v4; // r0
  int result; // r0
  int v6; // r0
  int v7; // r3
  _WORD v8[2]; // [sp+0h] [bp-14h] BYREF
  int v9; // [sp+4h] [bp-10h]
  int v10; // [sp+8h] [bp-Ch]

  v3 = *(_DWORD *)(a1 + 8);
  v4 = *(_WORD *)(a1 + 18);
  if ( (v4 & 1) == 0 && *(_BYTE *)(v3 + 13) == 0 )
    return off_47237C(*(_DWORD *)(a1 + 12), 6, a2);
  result = v4 & 2;
  if ( result != 0 )
    return off_47237C(*(_DWORD *)(a1 + 12), 6, a2);
  if ( *(_BYTE *)(v3 + 13) == 0 )
  {
    v8[1] = 0;
    v6 = *(_DWORD *)(a1 + 12);
    v9 = dword_471740 + 2;
    v10 = 510;
    v8[0] = 1;
    result = off_47237C(v6, 6, v8, off_47237C);
    if ( result >= 0 )
    {
      v7 = *(_DWORD *)(v3 + 24);
      *(_BYTE *)(v3 + 13) = 1;
      *(_DWORD *)(v3 + 24) = v7 + 1;
    }
  }
  return result;
}


//======================================================================
// sub_34DB74
// address: 0x0034DB74   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_34DB74(int a1, _DWORD *a2)
{
  *a2 = 0;
  return 0;
}


//======================================================================
// sub_34DB7A
// address: 0x0034DB7A   size: 0x4 (4 bytes)
//======================================================================
int sub_34DB7A()
{
  return 0;
}


//======================================================================
// sub_34DB7E
// address: 0x0034DB7E   size: 0x4 (4 bytes)
//======================================================================
int sub_34DB7E()
{
  return 0;
}


//======================================================================
// sub_34DB84
// address: 0x0034DB84   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_34DB84(int a1, _BOOL4 *a2)
{
  _BOOL4 v2; // r3

  v2 = true;
  if ( *(unsigned __int8 *)(a1 + 16) <= 1u )
    v2 = off_472340(*(const char **)(a1 + 24), 0) == 0;
  *a2 = v2;
  return 0;
}


//======================================================================
// sub_34DBAC
// address: 0x0034DBAC   size: 0x6 (6 bytes)
//======================================================================
int sub_34DBAC()
{
  return 4096;
}


//======================================================================
// sub_34DBB2
// address: 0x0034DBB2   size: 0xA (10 bytes)
//======================================================================
unsigned int __fastcall sub_34DBB2(int a1)
{
  return (unsigned int)(*(unsigned __int16 *)(a1 + 18) << 27) >> 31 << 12;
}


//======================================================================
// sub_34DBBC
// address: 0x0034DBBC   size: 0xC (12 bytes)
//======================================================================
int sub_34DBBC()
{
  sub_34DAAE();
  return sub_34DABC();
}


//======================================================================
// sub_34DBC8
// address: 0x0034DBC8   size: 0x28 (40 bytes)
//======================================================================
void *__fastcall sub_34DBC8(_DWORD *a1)
{
  void *result; // r0

  result = (void *)a1[18];
  if ( result != nullptr )
  {
    result = (void *)off_472430(result, a1[14]);
    a1[18] = 0;
    a1[12] = 0;
    a1[13] = 0;
    a1[14] = 0;
    a1[15] = 0;
  }
  return result;
}


//======================================================================
// sub_34DBF4
// address: 0x0034DBF4   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_34DBF4(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  if ( a5 != 0 )
    --a1[11];
  else
    sub_34DBC8(a1);
  return 0;
}


//======================================================================
// sub_34DC0C
// address: 0x0034DC0C   size: 0x8 (8 bytes)
//======================================================================
void *sub_34DC0C()
{
  return &unk_454578;
}


//======================================================================
// sub_34DC18
// address: 0x0034DC18   size: 0x8 (8 bytes)
//======================================================================
void *sub_34DC18()
{
  return &unk_4545C4;
}


//======================================================================
// sub_34DC24
// address: 0x0034DC24   size: 0x8 (8 bytes)
//======================================================================
void *sub_34DC24()
{
  return &unk_454610;
}


//======================================================================
// sub_34DC30
// address: 0x0034DC30   size: 0x4 (4 bytes)
//======================================================================
int sub_34DC30()
{
  return 0;
}


//======================================================================
// sub_34DC34
// address: 0x0034DC34   size: 0x50 (80 bytes)
//======================================================================
_DWORD *__fastcall sub_34DC34(_DWORD *result)
{
  int v1; // r3
  int i; // r2
  int v3; // r1
  int v4; // r2
  int v5; // r1
  int v6; // r2

  v1 = result[7];
  if ( *(_DWORD **)(v1 + 8) == result )
  {
    for ( i = result[9]; i != 0 && (*(_WORD *)(i + 24) & 4) != 0; i = *(_DWORD *)(i + 36) )
      ;
    *(_DWORD *)(v1 + 8) = i;
  }
  v3 = result[8];
  v4 = result[9];
  if ( v3 != 0 )
    *(_DWORD *)(v3 + 36) = v4;
  else
    *(_DWORD *)(v1 + 4) = v4;
  v5 = result[9];
  v6 = result[8];
  if ( v5 != 0 )
  {
    *(_DWORD *)(v5 + 32) = v6;
  }
  else
  {
    *(_DWORD *)v1 = v6;
    if ( v6 == 0 && *(_BYTE *)(v1 + 28) != 0 )
      *(_BYTE *)(v1 + 29) = 2;
  }
  result[8] = 0;
  result[9] = 0;
  return result;
}


//======================================================================
// sub_34DC84
// address: 0x0034DC84   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_34DC84(int result)
{
  int *v1; // r3
  int v2; // r2
  int v3; // r1

  v1 = *(int **)(result + 28);
  v2 = *v1;
  *(_DWORD *)(result + 32) = *v1;
  if ( v2 != 0 )
  {
    *(_DWORD *)(v2 + 36) = result;
  }
  else if ( *((_BYTE *)v1 + 28) != 0 )
  {
    *((_BYTE *)v1 + 29) = 1;
  }
  v3 = v1[1];
  *v1 = result;
  if ( v3 == 0 )
    v1[1] = result;
  if ( v1[2] == 0 && (*(_WORD *)(result + 24) & 4) == 0 )
    v1[2] = result;
  return result;
}


//======================================================================
// sub_34DCB8
// address: 0x0034DCB8   size: 0x28 (40 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0034DCB8  PUSH    {R3,LR}
//   0034DCBA  LDR     R2, [R0,#0x1C]
//   0034DCBC  MOVS    R3, R0
//   0034DCBE  LDRB    R1, [R2,#0x1C]
//   0034DCC0  CMP     R1, #0
//   0034DCC2  BEQ     locret_34DCDE
//   0034DCC4  LDR     R1, [R0,#0x14]
//   0034DCC6  CMP     R1, #1
//   0034DCC8  BNE     loc_34DCCE
//   0034DCCA  MOVS    R1, #0
//   0034DCCC  STR     R1, [R2,#0x2C]
//   0034DCCE  LDR     R1, [R3]
//   0034DCD0  LDR     R3, =(dword_471638 - 0x34DCDA)
//   0034DCD2  LDR     R0, [R2,#0x28]
//   0034DCD4  MOVS    R2, #0
//   0034DCD6  ADD     R3, PC; dword_471638
//   0034DCD8  ADDS    R3, #(off_4716C0 - 0x471638)
//   0034DCDA  LDR     R3, [R3]
//   0034DCDC  BLX     R3
//   0034DCDE  POP     {R3,PC}

//======================================================================
// sub_34DCE4
// address: 0x0034DCE4   size: 0x32 (50 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0034DCE4  PUSH    {R4,LR}
//   0034DCE6  LDRH    R3, [R0,#0x18]
//   0034DCE8  MOVS    R4, R0
//   0034DCEA  LSLS    R2, R3, #0x1E
//   0034DCEC  BPL     loc_34DCF2
//   0034DCEE  BL      sub_34DC34
//   0034DCF2  LDR     R3, [R4,#0x1C]
//   0034DCF4  LDR     R2, [R3,#0xC]
//   0034DCF6  SUBS    R2, #1
//   0034DCF8  STR     R2, [R3,#0xC]
//   0034DCFA  LDR     R2, [R4,#0x14]
//   0034DCFC  CMP     R2, #1
//   0034DCFE  BNE     loc_34DD04
//   0034DD00  MOVS    R2, #0
//   0034DD02  STR     R2, [R3,#0x2C]
//   0034DD04  LDR     R0, [R3,#0x28]
//   0034DD06  LDR     R3, =(dword_471638 - 0x34DD10)
//   0034DD08  LDR     R1, [R4]
//   0034DD0A  MOVS    R2, #1
//   0034DD0C  ADD     R3, PC; dword_471638
//   0034DD0E  ADDS    R3, #(off_4716C0 - 0x471638)
//   0034DD10  LDR     R3, [R3]
//   0034DD12  BLX     R3
//   0034DD14  POP     {R4,PC}

//======================================================================
// sub_34DD1C
// address: 0x0034DD1C   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_34DD1C(int result)
{
  __int16 v1; // r1

  v1 = *(_WORD *)(result + 24);
  if ( (v1 & 2) != 0 )
  {
    *(_WORD *)(result + 24) = v1 & 0xFFDF;
  }
  else
  {
    *(_WORD *)(result + 24) = v1 & 0xFFDD | 2;
    return sub_34DC84(result);
  }
  return result;
}


//======================================================================
// sub_34DD3C
// address: 0x0034DD3C   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_34DD3C(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r2
  _DWORD v5[11]; // [sp+0h] [bp-2Ch] BYREF

  v2 = v5;
  while ( a1 != nullptr )
  {
    if ( a2 == nullptr )
    {
      v2[3] = a1;
      return v5[3];
    }
    if ( a1[5] >= a2[5] )
    {
      v2[3] = a2;
      v3 = a1;
      a1 = a2;
      a2 = (_DWORD *)a2[3];
    }
    else
    {
      v2[3] = a1;
      v3 = (_DWORD *)a1[3];
    }
    v2 = a1;
    a1 = v3;
  }
  v2[3] = a2;
  return v5[3];
}


//======================================================================
// sub_34DD74
// address: 0x0034DD74   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_34DD74(int result)
{
  int *v1; // r3
  int v2; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r4
  int v6; // r1

  v1 = *(int **)(result + 20);
  v2 = *(_DWORD *)(result + 28);
  v3 = *(_DWORD *)(result + 24);
  v4 = *v1;
  if ( v2 != 0 )
    *(_DWORD *)(v2 + 24) = v3;
  else
    *(_DWORD *)(v4 + 20) = v3;
  v5 = *(_DWORD *)(result + 24);
  v6 = *(_DWORD *)(result + 28);
  if ( v5 != 0 )
    *(_DWORD *)(v5 + 28) = v6;
  else
    *(_DWORD *)(v4 + 24) = v6;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 28) = 0;
  *(_BYTE *)(result + 12) = 1;
  --v1[8];
  return result;
}


//======================================================================
// sub_34DDA8
// address: 0x0034DDA8   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_34DDA8(_DWORD *a1)
{
  _DWORD *v1; // r4
  unsigned int v3; // r0
  unsigned int v4; // r1
  int result; // r0
  int v6; // r1
  int v7; // t0
  _DWORD *i; // r1

  v1 = (_DWORD *)a1[5];
  v3 = a1[2];
  v4 = v1[10];
  v7 = v3 / v4;
  v6 = v3 % v4;
  result = v7;
  for ( i = (_DWORD *)(v1[11] + 4 * v6); (_DWORD *)*i != a1; i = (_DWORD *)(*i + 16) )
    ;
  *i = a1[4];
  --v1[9];
  return result;
}


//======================================================================
// sub_34DDD4
// address: 0x0034DDD4   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_34DDD4(_DWORD **a1)
{
  _DWORD *v2; // r5

  sqlite3_mutex_enter(**a1);
  v2 = a1[9];
  sqlite3_mutex_leave(**a1);
  return v2;
}


//======================================================================
// sub_34DDEE
// address: 0x0034DDEE   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_34DDEE(_DWORD **a1, int a2, unsigned int a3, unsigned int a4)
{
  _DWORD *i; // r1
  unsigned int v9; // r1
  int v10; // r1

  sqlite3_mutex_enter(**a1);
  for ( i = &a1[11][a3 % (unsigned int)a1[10]]; *i != a2; i = (_DWORD *)(*i + 16) )
    ;
  *i = *(_DWORD *)(a2 + 16);
  v9 = (unsigned int)a1[10];
  *(_DWORD *)(a2 + 8) = a4;
  v10 = a4 % v9;
  *(_DWORD *)(a2 + 16) = a1[11][v10];
  a1[11][v10] = a2;
  if ( a4 > (unsigned int)a1[7] )
    a1[7] = (_DWORD *)a4;
  return sqlite3_mutex_leave(**a1);
}


//======================================================================
// sub_34DE46
// address: 0x0034DE46   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_34DE46(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r2
  _DWORD v5[5]; // [sp+0h] [bp+0h] BYREF

  v2 = v5;
  while ( a1 != nullptr )
  {
    if ( a2 == nullptr )
    {
      v2[2] = a1;
      return v5[2];
    }
    if ( *(_QWORD *)a2 <= *(_QWORD *)a1 )
    {
      if ( *(_QWORD *)a1 <= *(_QWORD *)a2 )
      {
        v3 = (_DWORD *)a1[2];
        a1 = v2;
      }
      else
      {
        v2[2] = a2;
        v3 = a1;
        a1 = a2;
        a2 = (_DWORD *)a2[2];
      }
    }
    else
    {
      v2[2] = a1;
      v3 = (_DWORD *)a1[2];
    }
    v2 = a1;
    a1 = v3;
  }
  v2[2] = a2;
  return v5[2];
}


//======================================================================
// sub_34DE98
// address: 0x0034DE98   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_34DE98(int a1, _DWORD *a2, _DWORD *a3)
{
  int v4; // r0
  int v6; // r0
  _DWORD v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[1] = a3;
  v4 = *(_DWORD *)(a1 + 12);
  if ( v4 != 0 )
  {
    sub_34DE98(v4, a2, v9);
    *(_DWORD *)(v9[0] + 8) = a1;
  }
  else
  {
    *a2 = a1;
  }
  v6 = *(_DWORD *)(a1 + 8);
  if ( v6 != 0 )
    sub_34DE98(v6, a1 + 8, a3);
  else
    *a3 = a1;
  return a1;
}


//======================================================================
// sub_34DEC8
// address: 0x0034DEC8   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_34DEC8(int *a1, int a2)
{
  int result; // r0
  int v4; // r6
  int v5; // r5
  int v6; // r3

  result = *a1;
  if ( result != 0 )
  {
    if ( a2 == 1 )
    {
      *a1 = *(_DWORD *)(result + 8);
      *(_DWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 12) = 0;
    }
    else
    {
      v4 = a2 - 1;
      result = sub_34DEC8(a1, a2 - 1);
      v5 = *a1;
      if ( *a1 != 0 )
      {
        v6 = *(_DWORD *)(v5 + 8);
        *(_DWORD *)(v5 + 12) = result;
        *a1 = v6;
        *(_DWORD *)(v5 + 8) = sub_34DEC8(a1, v4);
        return v5;
      }
    }
  }
  return result;
}


//======================================================================
// sub_34DF06
// address: 0x0034DF06   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_34DF06(int result, int a2, int a3)
{
  int v3; // r5
  int v4; // r4
  int v5; // r3
  int v6; // r0
  int v7[2]; // [sp+4h] [bp-8h] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v3 = 1;
  v7[0] = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)(result + 12) = 0;
  while ( 1 )
  {
    v4 = v7[0];
    if ( v7[0] == 0 )
      break;
    v5 = *(_DWORD *)(v7[0] + 8);
    *(_DWORD *)(v7[0] + 12) = result;
    v7[0] = v5;
    v6 = sub_34DEC8(v7, v3++);
    *(_DWORD *)(v4 + 8) = v6;
    result = v4;
  }
  return result;
}


//======================================================================
// sub_34DF32
// address: 0x0034DF32   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_34DF32(int a1, int a2, int a3, int a4, unsigned int *a5)
{
  int v5; // r4
  unsigned int v7; // [sp+Ch] [bp-8h] BYREF

  v5 = sub_34CA3A(a1);
  if ( v5 == 0 )
    *a5 = sub_34D8D8(&v7);
  return v5;
}


//======================================================================
// sub_34DF58
// address: 0x0034DF58   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_34DF58(int a1, int a2, int a3, int a4, int a5)
{
  _BYTE v7[8]; // [sp+Ch] [bp-8h] BYREF

  sub_34D8F0(v7, a5);
  return sub_34CA4C(a1);
}


//======================================================================
// sub_34DF7E
// address: 0x0034DF7E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_34DF7E(int a1, char a2)
{
  int v3; // r0
  int result; // r0

  v3 = *(_DWORD *)(a1 + 60);
  if ( *(_DWORD *)v3 == 0 )
    return 0;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 32))(v3);
  if ( *(_BYTE *)(a1 + 16) != 5 )
    *(_BYTE *)(a1 + 16) = a2;
  return result;
}


//======================================================================
// sub_34DF9E
// address: 0x0034DF9E   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall sub_34DF9E(int a1)
{
  __int64 v1; // r2

  v1 = 0;
  if ( *(_QWORD *)(a1 + 72) != 0 )
    return ((*(_QWORD *)(a1 + 72) - 1LL) / *(unsigned int *)(a1 + 148) + 1) * *(unsigned int *)(a1 + 148);
  return v1;
}


//======================================================================
// sub_34DFE0
// address: 0x0034DFE0   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_34DFE0(int a1, int a2)
{
  if ( (unsigned __int8)a2 == 13 || (unsigned __int8)a2 == 10 )
  {
    *(_DWORD *)(a1 + 40) = a2;
    *(_BYTE *)(a1 + 15) = 6;
  }
  return a2;
}


//======================================================================
// sub_34DFF8
// address: 0x0034DFF8   size: 0x36 (54 bytes)
//======================================================================
__int64 __fastcall sub_34DFF8(__int64 a1)
{
  __int64 v1; // r4
  __int64 v3; // [sp+0h] [bp-Ch]

  v3 = a1;
  HIDWORD(a1) = *(_DWORD *)(a1 + 60);
  if ( *(_DWORD *)HIDWORD(a1) != 0 && **(int **)HIDWORD(a1) > 2 )
  {
    v1 = *(_QWORD *)(a1 + 128);
    *(_BYTE *)(a1 + 116) = (((__PAIR64__(SHIDWORD(v1) >> 31, SHIDWORD(v1) >> 31) - v1) >> 32) & 0x80000000) != 0LL;
    v3 = v1;
    sub_34CA86(SHIDWORD(a1));
  }
  return v3;
}


//======================================================================
// sub_34E02E
// address: 0x0034E02E   size: 0x5E (94 bytes)
//======================================================================
_BYTE *__fastcall sub_34E02E(_BYTE *result, char a2)
{
  _BOOL4 v2; // r4
  _BOOL4 v3; // r2
  char v4; // r3
  char v5; // r3
  char v6; // r3
  char v7; // r3

  v2 = (a2 & 3) == 1 || result[12] != 0;
  result[7] = v2;
  v3 = false;
  if ( (a2 & 3) == 3 )
    v3 = result[12] == 0;
  result[8] = v3;
  v4 = 0;
  if ( v2 )
    goto LABEL_9;
  if ( (a2 & 4) != 0 )
  {
    v4 = 3;
LABEL_9:
    result[11] = v4;
    goto LABEL_12;
  }
  v4 = 2;
  result[11] = 2;
  if ( (a2 & 8) != 0 )
    v4 = 3;
LABEL_12:
  result[9] = v4;
  v5 = result[11];
  if ( v3 )
    v5 |= 0x20u;
  result[10] = v5;
  v6 = result[19];
  if ( (a2 & 0x10) != 0 )
    v7 = v6 & 0xFE;
  else
    v7 = v6 | 1;
  result[19] = v7;
  return result;
}


//======================================================================
// sub_34E08C
// address: 0x0034E08C   size: 0x78 (120 bytes)
//======================================================================
_DWORD *__fastcall sub_34E08C(int a1, char *a2, int a3, int *a4, _DWORD *a5)
{
  char *v5; // r2
  int v6; // r4
  int v7; // r5
  int v8; // r7
  unsigned int v9; // r0

  v5 = &a2[a3];
  if ( a4 != nullptr )
  {
    v6 = *a4;
    a4 = (int *)a4[1];
  }
  else
  {
    v6 = 0;
  }
  if ( a1 != 0 )
  {
    do
    {
      v7 = *(_DWORD *)a2;
      v8 = *((_DWORD *)a2 + 1);
      a2 += 8;
      v6 += (int)a4 + v7;
      a4 = (int *)((char *)a4 + v6 + v8);
    }
    while ( v5 > a2 );
  }
  else
  {
    do
    {
      v9 = *((_DWORD *)a2 + 1);
      v6 += (int)&a4[0x400000 * *(_DWORD *)a2 + 64 * (*(_DWORD *)a2 & 0xFF00)]
          + HIBYTE(*(_DWORD *)a2)
          + ((*(_DWORD *)a2 & 0xFF0000u) >> 8);
      a2 += 8;
      a4 = (int *)((char *)a4 + 0x1000000 * v9 + 256 * (v9 & 0xFF00) + HIBYTE(v9) + ((v9 & 0xFF0000) >> 8) + v6);
    }
    while ( a2 < v5 );
  }
  *a5 = v6;
  a5[1] = a4;
  return a5;
}


//======================================================================
// sub_34E104
// address: 0x0034E104   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_34E104(int result)
{
  if ( *(_BYTE *)(result + 43) != 2 )
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(result + 4) + 60))(*(_DWORD *)(result + 4));
  return result;
}


//======================================================================
// sub_34E11A
// address: 0x0034E11A   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_34E11A(_DWORD *a1, unsigned int *a2)
{
  int v2; // r3
  unsigned int v5; // r0
  _DWORD *v6; // r0
  int result; // r0
  unsigned int *v8; // r6

  v2 = a1[52];
  if ( v2 == 0 || *(__int16 *)(v2 + 40) < 0 || (v5 = *(_DWORD *)(v2 + 72)) == 0 )
  {
    v6 = (_DWORD *)a1[15];
    if ( *v6 != 0 )
    {
      result = sub_34CA72((int)v6);
      if ( result != 0 )
        return result;
    }
    v5 = ((int)a1[38] - 1LL) / (int)a1[38];
  }
  v8 = a1 + 39;
  if ( v5 > *v8 )
    *v8 = v5;
  *a2 = v5;
  return 0;
}


//======================================================================
// sub_34E182
// address: 0x0034E182   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_34E182(int a1, int a2, int a3, int a4, __int64 a5)
{
  __int64 v6; // r0
  int result; // r0
  int v9; // [sp+8h] [bp-Ch]

  v6 = *(_QWORD *)(a1 + 8);
  if ( v6 <= a5 )
    return sub_34CA4C(*(_DWORD *)(a1 + 4));
  if ( v6 > a3 + a5 )
    return sub_34CA4C(*(_DWORD *)(a1 + 4));
  v9 = v6 - a5;
  result = sub_34CA4C(*(_DWORD *)(a1 + 4));
  if ( result == 0 )
  {
    result = sub_34CA68(*(_DWORD *)(a1 + 4));
    if ( a3 != v9 && result == 0 )
      return sub_34CA4C(*(_DWORD *)(a1 + 4));
  }
  return result;
}


//======================================================================
// sub_34E200
// address: 0x0034E200   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_34E200(int a1, int a2)
{
  int v2; // r3

  if ( a2 >= 0 && *(_BYTE *)(a1 + 12) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 208);
    if ( v2 == 0 || *(_BYTE *)(v2 + 43) != 2 )
      *(_BYTE *)(a1 + 4) = a2;
  }
  return *(unsigned __int8 *)(a1 + 4);
}


//======================================================================
// sub_34E238
// address: 0x0034E238   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_34E238(int a1, int a2, int a3)
{
  int i; // r3
  int v4; // r4

  i = 0;
  v4 = *(_DWORD *)(a1 + 4);
  if ( *(_BYTE *)(a1 + 9) != 0 )
  {
    if ( *(_DWORD *)(v4 + 76) != a1 && (*(_WORD *)(v4 + 22) & 0x20) != 0 )
    {
      return 262;
    }
    else
    {
      for ( i = *(_DWORD *)(v4 + 72); i != 0; i = *(_DWORD *)(i + 12) )
      {
        if ( *(_DWORD *)i != a1 && *(_DWORD *)(i + 4) == a2 && *(unsigned __int8 *)(i + 8) != a3 )
        {
          if ( a3 == 2 )
            *(_WORD *)(v4 + 22) |= 0x40u;
          return 262;
        }
      }
    }
  }
  return i;
}


//======================================================================
// sub_34E284
// address: 0x0034E284   size: 0x3C (60 bytes)
//======================================================================
unsigned int __fastcall sub_34E284(int a1, unsigned int a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r3
  unsigned int result; // r0

  if ( a2 <= 1 )
    return 0;
  v2 = (*(_DWORD *)(a1 + 36) / 5u + 1) * ((a2 - 2) / (*(_DWORD *)(a1 + 36) / 5u + 1));
  v3 = (unsigned int)dword_471740 / *(_DWORD *)(a1 + 32) + 1;
  result = v2 + 2;
  if ( v2 + 2 == v3 )
    return v2 + 3;
  return result;
}


//======================================================================
// sub_34E2C4
// address: 0x0034E2C4   size: 0x60 (96 bytes)
//======================================================================
unsigned int __fastcall sub_34E2C4(int a1, unsigned int a2, int a3)
{
  unsigned int v5; // r6
  unsigned int v6; // r6
  unsigned int v7; // r7

  v5 = *(_DWORD *)(a1 + 36) / 5u;
  v6 = a2 - a3 - (a3 - a2 + v5 + sub_34E284(a1, a2)) / v5;
  v7 = (unsigned int)dword_471740 / *(_DWORD *)(a1 + 32) + 1;
  if ( a2 > v7 )
    v6 -= v6 < v7;
  while ( sub_34E284(a1, v6) == v6 || v6 == v7 )
    --v6;
  return v6;
}


//======================================================================
// sub_34E330
// address: 0x0034E330   size: 0x7C (124 bytes)
//======================================================================
__int64 __fastcall sub_34E330(int a1)
{
  double v1; // r6
  __int64 v2; // r4
  __int64 v4; // [sp+0h] [bp-Ch]

  LODWORD(v4) = a1;
  v1 = *(double *)(a1 + 8);
  HIDWORD(v4) = a1;
  if ( v1 <= -9.22337204e18 )
  {
    v2 = 0x8000000000000000LL;
  }
  else if ( v1 >= 9.22337204e18 )
  {
    v2 = 0x7FFFFFFFFFFFFFFFLL;
  }
  else
  {
    v2 = (__int64)v1;
  }
  *(_QWORD *)(a1 + 16) = v2;
  if ( v1 == (double)v2 && (unsigned __int64)(v2 + 0x7FFFFFFFFFFFFFFFLL) <= 0xFFFFFFFFFFFFFFFDLL )
    *(_WORD *)(a1 + 28) |= 4u;
  return v4;
}


//======================================================================
// sub_34E3D0
// address: 0x0034E3D0   size: 0x26 (38 bytes)
//======================================================================
bool __fastcall sub_34E3D0(int a1)
{
  __int16 v1; // r1
  _BOOL4 result; // r0
  int v4; // r2

  v1 = *(_WORD *)(a1 + 28);
  result = false;
  if ( (v1 & 0x12) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 24);
    if ( (v1 & 0x4000) != 0 )
      v4 += *(_DWORD *)(a1 + 16);
    return v4 > *(_DWORD *)(*(_DWORD *)a1 + 88);
  }
  return result;
}


//======================================================================
// sub_34E412
// address: 0x0034E412   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_34E412(int result, int a2)
{
  int v2; // r1
  int v3; // r3
  int v4; // r2

  v2 = ~a2;
  v3 = *(_DWORD *)(result + 24);
  if ( v2 >= 0 )
  {
    v4 = *(_DWORD *)(v3 + 116);
    if ( v4 != 0 )
      *(_DWORD *)(4 * v2 + v4) = *(_DWORD *)(result + 32);
  }
  *(_DWORD *)(v3 + 92) = *(_DWORD *)(result + 32) - 1;
  return result;
}


//======================================================================
// sub_34E430
// address: 0x0034E430   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_34E430(int result, unsigned int a2, int a3)
{
  int v3; // r3

  if ( *(_DWORD *)(result + 32) > a2 )
  {
    v3 = *(_DWORD *)(result + 4);
    *(_DWORD *)(v3 + 20 * a2 + 4) = a3;
    return 20;
  }
  return result;
}


//======================================================================
// sub_34E444
// address: 0x0034E444   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_34E444(int result, unsigned int a2, int a3)
{
  int v3; // r3

  if ( *(_DWORD *)(result + 32) > a2 )
  {
    v3 = *(_DWORD *)(result + 4);
    *(_DWORD *)(v3 + 20 * a2 + 8) = a3;
    return 20;
  }
  return result;
}


//======================================================================
// sub_34E458
// address: 0x0034E458   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_34E458(int result, char a2)
{
  int v2; // r3
  int v3; // r2

  v2 = *(_DWORD *)(result + 4);
  if ( v2 != 0 )
  {
    v3 = *(_DWORD *)(result + 32);
    *(_BYTE *)(v2 + 20 * v3 - 17) = a2;
    return 20;
  }
  return result;
}


//======================================================================
// sub_34E46E
// address: 0x0034E46E   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_34E46E(int a1, unsigned int a2)
{
  int result; // r0

  result = sub_34E444(a1, a2, *(_DWORD *)(a1 + 32));
  *(_DWORD *)(*(_DWORD *)(a1 + 24) + 92) = *(_DWORD *)(a1 + 32) - 1;
  return result;
}


//======================================================================
// sub_34E484
// address: 0x0034E484   size: 0x26 (38 bytes)
//======================================================================
void *__fastcall sub_34E484(_DWORD *a1, int a2)
{
  if ( a2 < 0 )
    a2 = a1[8] - 1;
  if ( *(_BYTE *)(*a1 + 64) != 0 )
    return &unk_559288;
  else
    return (void *)(a1[1] + 20 * a2);
}


//======================================================================
// sub_34E4B0
// address: 0x0034E4B0   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall sub_34E4B0(_DWORD *result, int a2)
{
  result[24] |= 1 << a2;
  if ( a2 != 1 && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*result + 16) + 16 * a2 + 4) + 9) != 0 )
    result[25] |= 1 << a2;
  return result;
}


//======================================================================
// sub_34E4D8
// address: 0x0034E4D8   size: 0x3C (60 bytes)
//======================================================================
int *__fastcall sub_34E4D8(int **a1)
{
  int *v1; // r3
  _DWORD *v2; // r2
  int v3; // r4
  int *v4; // r2

  v1 = *a1;
  v2 = *a1 + 50;
  *v2 = a1[4];
  *(v2 - 1) = a1[14];
  v1[1] = (int)a1[2];
  v1[8] = (int)a1[12];
  v1[2] = (int)a1[3];
  v1[7] = (int)a1[13];
  v1[14] = (int)a1[5];
  v1[9] = (int)a1[10];
  v3 = *v1;
  v4 = a1[9];
  *(_DWORD *)(v3 + 32) = a1[8];
  *(_DWORD *)(v3 + 36) = v4;
  v1[23] = (int)a1[17];
  return a1[11];
}


//======================================================================
// sub_34E514
// address: 0x0034E514   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall sub_34E514(unsigned int a1)
{
  if ( a1 <= 0xB )
    return byte_44AB74[a1];
  else
    return (a1 - 12) >> 1;
}


//======================================================================
// sub_34E530
// address: 0x0034E530   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_34E530(int result)
{
  int i; // r3

  for ( i = *(_DWORD *)(result + 4); i != 0; i = *(_DWORD *)(i + 52) )
  {
    result = *(unsigned __int8 *)(i + 88) | 0x20;
    *(_BYTE *)(i + 88) = result;
  }
  return result;
}


//======================================================================
// sub_34E5CC
// address: 0x0034E5CC   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_34E5CC(int *a1, int a2, int (__fastcall *a3)(int), int a4)
{
  int v7; // r4
  int v8; // r0
  int v9; // r7
  int v10; // r5

  v7 = *a1;
  v8 = sqlite3_column_count((int)a1);
  if ( a2 >= v8 || a2 < 0 )
    return 0;
  v9 = a4 * v8;
  sqlite3_mutex_enter(*(_DWORD *)(v7 + 12));
  v10 = a3(a1[4] + 40 * (a2 + v9));
  if ( *(_BYTE *)(v7 + 64) != 0 )
  {
    v10 = 0;
    *(_BYTE *)(v7 + 64) = 0;
  }
  sqlite3_mutex_leave(*(_DWORD *)(v7 + 12));
  return v10;
}


//======================================================================
// sub_34E78E
// address: 0x0034E78E   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_34E78E(int result)
{
  __int16 v1; // r3
  int v2; // r4
  int v3; // r5
  __int16 v4; // r3
  __int16 v5; // r2
  double v6; // [sp+0h] [bp-14h] BYREF
  __int64 v7; // [sp+8h] [bp-Ch] BYREF

  v1 = *(_WORD *)(result + 28);
  v2 = result;
  if ( (v1 & 0xC) == 0 )
  {
    v3 = *(unsigned __int8 *)(result + 30);
    if ( (v1 & 2) != 0 )
    {
      result = sub_34D098(*(_BYTE **)(result + 4), &v6, *(_DWORD *)(result + 24), v3);
      if ( result != 0 )
      {
        result = sub_34D568(*(unsigned __int8 **)(v2 + 4), &v7, *(_DWORD *)(v2 + 24), v3);
        v4 = *(_WORD *)(v2 + 28);
        if ( result != 0 )
        {
          *(double *)(v2 + 8) = v6;
          v5 = 8;
        }
        else
        {
          *(_QWORD *)(v2 + 16) = v7;
          v5 = 4;
        }
        *(_WORD *)(v2 + 28) = v4 | v5;
      }
    }
  }
  return result;
}


//======================================================================
// sub_34E7F6
// address: 0x0034E7F6   size: 0x4 (4 bytes)
//======================================================================
int sub_34E7F6()
{
  return 0;
}


//======================================================================
// sub_34E7FA
// address: 0x0034E7FA   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_34E7FA(int a1, _DWORD *a2)
{
  int v2; // r3
  int v3; // r4

  v2 = *(_DWORD *)(a1 + 8);
  v3 = *(_DWORD *)(a1 + 12);
  *a2 = v2;
  a2[1] = v3;
  return 0;
}


//======================================================================
// sub_34E808
// address: 0x0034E808   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_34E808(int a1, unsigned __int8 *a2)
{
  if ( *a2 == 155 )
    a2[38] += *(_DWORD *)(a1 + 20);
  return 0;
}


//======================================================================
// sub_34E81E
// address: 0x0034E81E   size: 0x7E (126 bytes)
//======================================================================
bool __fastcall sub_34E81E(_BYTE *a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4)
{
  int i; // r4
  _BYTE *v8; // r6
  int j; // r4

  for ( i = 0; a1[i] != 0 && a1[i] != 46; ++i )
    ;
  if ( a4 != nullptr && (sqlite3_strnicmp(a1, a4, i) != 0 || a4[i] != 0) )
    return false;
  v8 = &a1[i + 1];
  for ( j = 0; v8[j] != 0 && v8[j] != 46; ++j )
    ;
  if ( a3 != nullptr && (sqlite3_strnicmp(v8, a3, j) != 0 || a3[j] != 0) )
    return false;
  if ( a2 != nullptr )
    return sqlite3_stricmp(&v8[j + 1], a2) == 0;
  return true;
}


//======================================================================
// sub_34E89C
// address: 0x0034E89C   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_34E89C(_DWORD *result)
{
  int v1; // r3

  while ( result != nullptr )
  {
    v1 = result[1];
    if ( (v1 & 0x1000) == 0 )
      break;
    if ( (v1 & 0x40000) != 0 )
      result = **(_DWORD ***)(result[5] + 8);
    else
      result = (_DWORD *)result[3];
  }
  return result;
}


//======================================================================
// sub_34E8C2
// address: 0x0034E8C2   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_34E8C2(int result, _DWORD *a2)
{
  int v2; // r3

  if ( result != 0 )
  {
    v2 = *(_DWORD *)(result + 24);
    if ( v2 > *a2 )
      *a2 = v2;
  }
  return result;
}


//======================================================================
// sub_34E8D4
// address: 0x0034E8D4   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_34E8D4(int result, _DWORD *a2)
{
  int v2; // r4
  _DWORD *v3; // r5
  int v5; // r3

  v2 = 0;
  v3 = (_DWORD *)result;
  if ( result != 0 )
  {
    while ( v2 < *v3 )
    {
      v5 = 20 * v2++;
      result = sub_34E8C2(*(_DWORD *)(v5 + v3[2]), a2);
    }
  }
  return result;
}


//======================================================================
// sub_34E8FA
// address: 0x0034E8FA   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_34E8FA(int result, _DWORD *a2)
{
  int *i; // r4

  for ( i = (int *)result; i != nullptr; i = (int *)i[15] )
  {
    sub_34E8C2(i[11], a2);
    sub_34E8C2(i[13], a2);
    sub_34E8C2(i[17], a2);
    sub_34E8C2(i[18], a2);
    sub_34E8D4(*i, a2);
    sub_34E8D4(i[12], a2);
    result = sub_34E8D4(i[14], a2);
  }
  return result;
}


//======================================================================
// sub_34E942
// address: 0x0034E942   size: 0x36 (54 bytes)
//======================================================================
__int64 __fastcall sub_34E942(__int64 a1, int a2)
{
  _DWORD *v2; // r4
  int v3; // r0
  int v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v6 = a1;
  v7 = a2;
  v2 = (_DWORD *)a1;
  v3 = *(_DWORD *)(a1 + 12);
  HIDWORD(v6) = 0;
  sub_34E8C2(v3, (_DWORD *)&v6 + 1);
  sub_34E8C2(v2[4], (_DWORD *)&v6 + 1);
  v4 = v2[5];
  if ( (v2[1] & 0x800) != 0 )
    sub_34E8FA(v4, (_DWORD *)&v6 + 1);
  else
    sub_34E8D4(v4, (_DWORD *)&v6 + 1);
  v2[6] = HIDWORD(v6) + 1;
  return v6;
}


//======================================================================
// sub_34E978
// address: 0x0034E978   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_34E978(int a1, unsigned __int8 *a2)
{
  int v2; // r2
  unsigned int v3; // r3

  v2 = *(_DWORD *)(a1 + 20);
  if ( v2 == 3 && (*((_DWORD *)a2 + 1) & 1) != 0 )
    goto LABEL_11;
  v3 = *a2;
  if ( v3 == 153 )
  {
    if ( v2 == 2 || (*((_DWORD *)a2 + 1) & 0x80000) != 0 )
      return 0;
    goto LABEL_11;
  }
  if ( v3 <= 0x99 )
  {
    if ( v3 != 27 )
      return 0;
LABEL_11:
    *(_DWORD *)(a1 + 20) = 0;
    return 2;
  }
  if ( v3 <= 0x9C )
    goto LABEL_11;
  return 0;
}


//======================================================================
// sub_34E9B4
// address: 0x0034E9B4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_34E9B4(int a1)
{
  *(_DWORD *)(a1 + 20) = 0;
  return 2;
}


//======================================================================
// sub_34E9BC
// address: 0x0034E9BC   size: 0x34 (52 bytes)
//======================================================================
bool __fastcall sub_34E9BC(unsigned __int8 *a1)
{
  unsigned int v1; // r3

  while ( 1 )
  {
    v1 = *a1;
    if ( (unsigned __int8)(*a1 + 99) > 1u )
      break;
    a1 = *((unsigned __int8 **)a1 + 3);
  }
  if ( v1 == 159 )
    v1 = a1[38];
  return v1 != 97 && (v1 < 0x61 || (unsigned __int8)(v1 + 124) > 2u);
}


//======================================================================
// sub_34E9F0
// address: 0x0034E9F0   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_34E9F0(unsigned __int8 *a1, int a2)
{
  unsigned int v3; // r3
  unsigned int v4; // r1
  int result; // r0
  int v6; // r0

  if ( a2 != 98 )
  {
    while ( 1 )
    {
      v3 = *a1;
      if ( (unsigned __int8)(*a1 + 99) > 1u )
        break;
      a1 = *((unsigned __int8 **)a1 + 3);
    }
    if ( v3 == 159 )
      v3 = a1[38];
    if ( v3 != 133 )
    {
      if ( v3 > 0x85 )
      {
        result = 1;
        if ( v3 == 134 )
          return result;
        if ( v3 == 154 )
        {
          result = 0;
          if ( *((__int16 *)a1 + 16) >= 0 )
            return result;
          v4 = (unsigned __int8)(a2 - 99);
          return v4 <= 1;
        }
        return 0;
      }
      if ( v3 != 97 )
      {
        if ( v3 == 132 )
        {
          v4 = (unsigned __int8)(a2 - 99);
          return v4 <= 1;
        }
        return 0;
      }
      v6 = a2 - 97;
      return v6 == 0;
    }
    if ( a2 != 101 )
    {
      v6 = a2 - 99;
      return v6 == 0;
    }
  }
  return 1;
}


//======================================================================
// sub_34EA6A
// address: 0x0034EA6A   size: 0x4 (4 bytes)
//======================================================================
int sub_34EA6A()
{
  return 0;
}


//======================================================================
// sub_34EA6E
// address: 0x0034EA6E   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_34EA6E(int a1)
{
  int result; // r0
  int v3; // r2

  if ( *(_BYTE *)(a1 + 19) != 0 )
  {
    v3 = (unsigned __int8)(*(_BYTE *)(a1 + 19) - 1);
    *(_BYTE *)(a1 + 19) = v3;
    return *(_DWORD *)(a1 + 4 * (v3 + 6) + 4);
  }
  else
  {
    result = *(_DWORD *)(a1 + 76) + 1;
    *(_DWORD *)(a1 + 76) = result;
  }
  return result;
}


//======================================================================
// sub_34EA92
// address: 0x0034EA92   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_34EA92(_DWORD *a1, int a2)
{
  int v3; // r2
  int result; // r0
  int v5; // r2

  v3 = a1[15];
  result = a1[16];
  if ( a2 > v3 )
  {
    v5 = a1[19];
    a1[19] = v5 + a2;
    return v5 + 1;
  }
  else
  {
    a1[16] = result + a2;
    a1[15] = v3 - a2;
  }
  return result;
}


//======================================================================
// sub_34EAB2
// address: 0x0034EAB2   size: 0x26 (38 bytes)
//======================================================================
int **__fastcall sub_34EAB2(int **result, int *a2, int a3, int *a4, int *a5)
{
  int v5; // r4
  int *v6; // r1

  v5 = *a2;
  *result = a2;
  result[3] = *(int **)(*(_DWORD *)(v5 + 16) + 16 * a3);
  v6 = *(int **)(*(_DWORD *)(v5 + 16) + 16 * a3 + 12);
  result[4] = a4;
  result[1] = v6;
  result[2] = (int *)(a3 == 1);
  result[5] = a5;
  return result;
}


//======================================================================
// sub_34EAFE
// address: 0x0034EAFE   size: 0x5A (90 bytes)
//======================================================================
int **__fastcall sub_34EAFE(int a1, unsigned __int8 *a2, _BYTE *a3)
{
  int v6; // r4
  int v7; // r3
  int **result; // r0
  int v9; // [sp+0h] [bp-Ch]
  unsigned int v10; // [sp+4h] [bp-8h]

  v6 = 0;
  v10 = sub_34CF50((unsigned int)a2);
  while ( v6 < *(_DWORD *)(a1 + 20) )
  {
    v7 = v6;
    if ( v6 <= 1 )
      v7 = v6 ^ 1;
    v9 = 16 * v7;
    if ( a3 == nullptr || sqlite3_stricmp(a3, *(unsigned __int8 **)(*(_DWORD *)(a1 + 16) + 16 * v7)) == 0 )
    {
      result = sub_34DA7E((_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 16) + v9 + 12) + 8), a2, v10);
      if ( result != nullptr )
        return result;
    }
    ++v6;
  }
  return nullptr;
}


//======================================================================
// sub_34EB58
// address: 0x0034EB58   size: 0x56 (86 bytes)
//======================================================================
int **__fastcall sub_34EB58(int a1, unsigned __int8 *a2, _BYTE *a3)
{
  int v6; // r4
  int v7; // r3
  int v8; // r3
  int **result; // r0
  int v10; // [sp+0h] [bp-Ch]
  unsigned int v11; // [sp+4h] [bp-8h]

  v6 = 0;
  v11 = sub_34CF50((unsigned int)a2);
  while ( v6 < *(_DWORD *)(a1 + 20) )
  {
    v7 = v6;
    if ( v6 <= 1 )
      v7 = v6 ^ 1;
    v8 = *(_DWORD *)(a1 + 16) + 16 * v7;
    v10 = *(_DWORD *)(v8 + 12);
    if ( a3 == nullptr || sqlite3_stricmp(a3, *(unsigned __int8 **)v8) == 0 )
    {
      result = sub_34DA7E((_DWORD *)(v10 + 24), a2, v11);
      if ( result != nullptr )
        return result;
    }
    ++v6;
  }
  return nullptr;
}


//======================================================================
// sub_34EBAE
// address: 0x0034EBAE   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_34EBAE(int a1, unsigned __int8 *a2)
{
  int v4; // r4
  unsigned int *i; // r5
  _BYTE *v6; // r7
  unsigned int v8; // [sp+4h] [bp-8h]

  if ( a2 == nullptr )
    return -1;
  v8 = sub_34CF50((unsigned int)a2);
  v4 = *(_DWORD *)(a1 + 20) - 1;
  for ( i = (unsigned int *)(*(_DWORD *)(a1 + 16) + 16 * v4); v4 >= 0; i -= 4 )
  {
    v6 = (_BYTE *)*i;
    if ( v8 == sub_34CF50(*i) && sqlite3_stricmp(v6, a2) == 0 )
      break;
    --v4;
  }
  return v4;
}


//======================================================================
// sub_34EBF4
// address: 0x0034EBF4   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_34EBF4(int a1, int a2)
{
  int i; // r3

  for ( i = 0; i < *(unsigned __int16 *)(a1 + 52); ++i )
  {
    if ( *(__int16 *)(2 * i + *(_DWORD *)(a1 + 4)) == a2 )
      return (__int16)i;
  }
  LOWORD(i) = -1;
  return (__int16)i;
}


//======================================================================
// sub_34EC20
// address: 0x0034EC20   size: 0xE2 (226 bytes)
//======================================================================
int __fastcall sub_34EC20(unsigned __int8 *a1, _BYTE *a2)
{
  unsigned __int8 *v3; // r2
  unsigned int v4; // r4
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v9; // [sp+Ch] [bp-8h] BYREF

  if ( a1 == nullptr )
    return 99;
  v3 = nullptr;
  v4 = 99;
  v5 = 0;
  while ( 1 )
  {
    v6 = *a1;
    if ( *a1 == 0 )
      break;
    ++a1;
    v5 = byte_44A964[v6] + (v5 << 8);
    switch ( v5 )
    {
      case 1667785074:
        v3 = a1;
        goto LABEL_19;
      case 1668050786:
      case 1952807028:
LABEL_19:
        v4 = 97;
        break;
      case 1651273570:
        if ( v4 == 99 || v4 == 101 )
        {
          if ( *a1 == 40 )
            v3 = a1;
          v4 = 98;
        }
        else
        {
LABEL_16:
          if ( (v5 & 0xFFFFFF) == 0x696E74 )
          {
            v4 = 100;
            goto LABEL_22;
          }
        }
        break;
      default:
        if ( v5 != 1919246700 && v5 != 1718382433 && v5 != 1685026146 || v4 != 99 )
          goto LABEL_16;
        v4 = 101;
        break;
    }
  }
LABEL_22:
  if ( a2 != nullptr )
  {
    *a2 = 1;
    if ( v4 <= 0x62 )
    {
      if ( v3 != nullptr )
      {
        while ( *v3 != 0 )
        {
          if ( (byte_44AA64[*v3] & 4) != 0 )
          {
            v9 = 0;
            sub_34D6F8(v3, &v9);
            v7 = v9 / 4 + 1;
            if ( v7 > 255 )
              v7 = 255;
            v9 = v7;
            goto LABEL_32;
          }
          ++v3;
        }
      }
      else
      {
        LOBYTE(v7) = 5;
LABEL_32:
        *a2 = v7;
      }
    }
  }
  return v4;
}


//======================================================================
// sub_34ED2C
// address: 0x0034ED2C   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_34ED2C(_DWORD *a1)
{
  _DWORD *v1; // r0
  int v2; // r3
  int result; // r0
  int v4; // r2
  int v5; // r3

  while ( 1 )
  {
    v1 = sub_34E89C(a1);
    v2 = *(unsigned __int8 *)v1;
    if ( v2 != 119 )
      break;
    a1 = **(_DWORD ***)(*(_DWORD *)v1[5] + 8);
  }
  if ( v2 == 38 )
    return sub_34EC20((unsigned __int8 *)v1[2], nullptr);
  if ( v2 != 156 && v2 != 154 && v2 != 159 )
    return *((unsigned __int8 *)v1 + 1);
  v4 = v1[11];
  if ( v4 == 0 )
    return *((unsigned __int8 *)v1 + 1);
  v5 = *((__int16 *)v1 + 16);
  result = 100;
  if ( v5 >= 0 )
    return *(unsigned __int8 *)(*(_DWORD *)(v4 + 4) + 24 * v5 + 21);
  return result;
}


//======================================================================
// sub_34ED7C
// address: 0x0034ED7C   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_34ED7C(_DWORD *a1, unsigned int a2)
{
  unsigned int v3; // r0
  int v4; // r3

  v3 = sub_34ED2C(a1);
  if ( v3 != 0 && a2 != 0 )
  {
    v4 = 99;
    if ( v3 <= 0x62 )
      return 99 - (a2 <= 0x62);
  }
  else
  {
    v4 = 98;
    if ( ((unsigned __int8)v3 | (unsigned __int8)a2) != 0 )
      return (unsigned __int8)(v3 + a2);
  }
  return v4;
}


//======================================================================
// sub_34EDB6
// address: 0x0034EDB6   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_34EDB6(int a1)
{
  unsigned int v2; // r1
  _DWORD *v3; // r0

  v2 = sub_34ED2C(*(_DWORD **)(a1 + 12));
  v3 = *(_DWORD **)(a1 + 16);
  if ( v3 != nullptr )
    return sub_34ED7C(v3, v2);
  if ( (*(_DWORD *)(a1 + 4) & 0x800) != 0 )
  {
    v3 = **(_DWORD ***)(**(_DWORD **)(a1 + 20) + 8);
    return sub_34ED7C(v3, v2);
  }
  if ( v2 == 0 )
    return 98;
  return v2;
}


//======================================================================
// sub_34EDE8
// address: 0x0034EDE8   size: 0x28 (40 bytes)
//======================================================================
bool __fastcall sub_34EDE8(int a1, unsigned int a2)
{
  int v3; // r0
  int v4; // r3

  v3 = sub_34EDB6(a1);
  if ( v3 == 97 )
    return a2 == 97;
  v4 = 1;
  if ( v3 != 98 )
    return a2 > 0x62;
  return v4;
}


//======================================================================
// sub_34EE10
// address: 0x0034EE10   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_34EE10(int a1)
{
  int v2; // r1
  int v3; // r5
  int v4; // r3
  int v5; // r0
  int v6; // r2
  int v7; // r2
  int result; // r0

  v2 = *(unsigned __int16 *)(a1 + 52);
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4);
  v4 = 0;
  v5 = 0;
  while ( v4 < v2 )
  {
    v6 = *(__int16 *)(*(_DWORD *)(a1 + 4) + 2 * v4);
    if ( v6 < 0 )
      v7 = 1;
    else
      v7 = *(unsigned __int8 *)(v3 + 24 * v6 + 22);
    v5 += v7;
    ++v4;
  }
  result = sub_34D98C((unsigned int)(4 * v5));
  *(_WORD *)(a1 + 48) = result;
  return result;
}


//======================================================================
// sub_34EE4A
// address: 0x0034EE4A   size: 0x3E (62 bytes)
//======================================================================
_BYTE *__fastcall sub_34EE4A(int a1)
{
  int *v1; // r1
  int v2; // r3
  int v3; // r2
  int i; // r3
  int v5; // r4
  _BYTE *result; // r0

  v1 = *(int **)(a1 + 8);
  v2 = 10;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 12) + 28) > 9u )
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 12) + 28);
  *v1 = v2;
  v3 = 10;
  for ( i = 1; ; ++i )
  {
    v5 = *(unsigned __int16 *)(a1 + 50);
    if ( i > v5 )
      break;
    v1[i] = v3;
    v3 = (__PAIR64__(v3, 5) - (unsigned int)v3) >> 32;
  }
  result = (_BYTE *)(a1 + 54);
  if ( *result != 0 )
    v1[v5] = 1;
  return result;
}


//======================================================================
// sub_34EE88
// address: 0x0034EE88   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_34EE88(_DWORD *a1, unsigned __int8 *a2)
{
  int i; // r4

  if ( a1 != nullptr )
  {
    for ( i = 0; i < a1[1]; ++i )
    {
      if ( sqlite3_stricmp(*(_BYTE **)(8 * i + *a1), a2) == 0 )
        return i;
    }
  }
  return -1;
}


//======================================================================
// sub_34EEB8
// address: 0x0034EEB8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_34EEB8(int result, _DWORD *a2)
{
  int v2; // r5
  int v3; // r7
  _DWORD *v5; // r4
  int v6; // r3
  int v7; // r3

  v2 = 0;
  v3 = result;
  v5 = a2 + 2;
  if ( a2 != nullptr )
  {
    while ( v2 < *a2 && (int)v5[10] < 0 )
    {
      v6 = *(_DWORD *)(v3 + 72);
      *(_DWORD *)(v3 + 72) = v6 + 1;
      v5[10] = v6;
      v7 = v5[5];
      if ( v7 != 0 )
        result = sub_34EEB8(v3, *(_DWORD *)(v7 + 40));
      ++v2;
      v5 += 18;
    }
  }
  return result;
}


//======================================================================
// sub_34EEF2
// address: 0x0034EEF2   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_34EEF2(int result)
{
  if ( *(_DWORD *)(result + 412) != 0 )
    result = *(_DWORD *)(result + 412);
  *(_BYTE *)(result + 23) = 1;
  return result;
}


//======================================================================
// sub_34EF06
// address: 0x0034EF06   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_34EF06(int a1, int a2, unsigned __int8 *a3, int a4)
{
  int i; // r4

  for ( i = *(_DWORD *)(4 * a2 + a1);
        i != 0 && (sqlite3_strnicmp(*(_BYTE **)(i + 24), a3, a4) != 0 || *(_BYTE *)(*(_DWORD *)(i + 24) + a4) != 0);
        i = *(_DWORD *)(i + 28) )
  {
    ;
  }
  return i;
}


//======================================================================
// sub_34EF34
// address: 0x0034EF34   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall sub_34EF34(int a1, _DWORD *a2)
{
  unsigned __int8 *v2; // r5
  int v5; // r7
  int v6; // r0
  _DWORD *v7; // r6
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = a1;
  v2 = (unsigned __int8 *)a2[6];
  HIDWORD(v9) = sub_34CF50((unsigned int)v2);
  v5 = (byte_44A964[*v2] + HIDWORD(v9)) % 23;
  v6 = sub_34EF06(a1, v5, v2, SHIDWORD(v9));
  if ( v6 != 0 )
  {
    a2[2] = *(_DWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 8) = a2;
  }
  else
  {
    a2[2] = 0;
    v7 = (_DWORD *)(a1 + 4 * v5);
    a2[7] = *v7;
    *v7 = a2;
  }
  return v9;
}


//======================================================================
// sub_34EF84
// address: 0x0034EF84   size: 0x236 (566 bytes)
//======================================================================
bool __fastcall sub_34EF84(int a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  int v5; // r3
  unsigned int v6; // r0
  unsigned int v7; // r5
  unsigned int v8; // r0
  unsigned int v9; // r4
  unsigned __int8 *v10; // r3
  unsigned int v11; // r0
  int v12; // r3
  unsigned int v13; // r5
  unsigned int v14; // r4
  int v15; // r7
  unsigned int v16; // r0
  unsigned int v17; // r0
  int v19; // [sp+0h] [bp-24h]
  unsigned int v21; // [sp+8h] [bp-1Ch]
  int v22; // [sp+Ch] [bp-18h]
  int v23; // [sp+10h] [bp-14h]
  int v24; // [sp+14h] [bp-10h]
  int v25; // [sp+18h] [bp-Ch]
  int v26; // [sp+1Ch] [bp-8h]
  unsigned __int8 *v27; // [sp+20h] [bp-4h] BYREF
  _DWORD v28[2]; // [sp+24h] [bp+0h] BYREF

  v22 = a3[1];
  v26 = *a3;
  v5 = a3[3];
  v24 = a3[2];
  v28[0] = a1;
  v27 = a2;
  v25 = v5;
  v19 = 0;
  while ( 1 )
  {
    v6 = sub_34CE94(v28);
    v7 = v6;
    if ( v6 == 0 )
      return *v27 == 0;
    if ( v6 == v26 && v19 == 0 )
      break;
    if ( v6 == v22 && v19 == 0 )
    {
      if ( sub_34CE94(&v27) == 0 )
        return false;
      goto LABEL_41;
    }
    if ( v6 != v24 )
    {
      if ( a4 == v6 && v19 == 0 )
      {
        v12 = 1;
      }
      else
      {
        v17 = sub_34CE94(&v27);
        if ( v25 != 0 )
        {
          if ( (v7 & 0xFFFFFF80) == 0 )
            v7 = byte_44A964[v7];
          if ( (v17 & 0xFFFFFF80) == 0 )
            v17 = byte_44A964[v17];
        }
        if ( v7 != v17 )
          return false;
LABEL_41:
        v12 = 0;
      }
      v19 = v12;
      continue;
    }
    v13 = sub_34CE94(&v27);
    if ( v13 == 0 )
      return false;
    v14 = sub_34CE94(v28);
    v23 = 0;
    if ( v14 == 94 )
    {
      v14 = sub_34CE94(v28);
      v23 = 1;
    }
    v15 = 0;
    if ( v14 == 93 )
    {
      v15 = v13 == 93;
      v14 = sub_34CE94(v28);
    }
    v21 = 0;
    while ( 1 )
    {
      if ( v14 == 0 )
        return false;
      if ( v14 == 93 )
        break;
      if ( v14 != 45 || *(_BYTE *)v28[0] == 93 || *(_BYTE *)v28[0] == 0 || v21 == 0 )
      {
        if ( v13 != v14 )
          goto LABEL_60;
LABEL_59:
        v15 = 1;
        goto LABEL_60;
      }
      v16 = sub_34CE94(v28);
      v14 = 0;
      if ( v13 >= v21 && v13 <= v16 )
        goto LABEL_59;
LABEL_60:
      v21 = v14;
      v14 = sub_34CE94(v28);
    }
    if ( v15 == v23 )
      return false;
  }
  while ( 1 )
  {
    v8 = sub_34CE94(v28);
    v9 = v8;
    if ( v8 != v7 )
      break;
    if ( v7 == v22 )
    {
LABEL_8:
      if ( sub_34CE94(&v27) == 0 )
        return false;
    }
  }
  if ( v8 == v22 )
    goto LABEL_8;
  if ( v8 == 0 )
    return true;
  if ( v8 == a4 )
  {
    v9 = sub_34CE94(v28);
    if ( v9 != 0 )
      goto LABEL_31;
    return false;
  }
  if ( v8 == v24 )
  {
    while ( *v27 != 0 && sub_34EF84(v28[0] - 1, v27, a3, a4) == 0 )
    {
      v10 = v27++;
      if ( *v10 > 0xBFu )
      {
        while ( (*v27 & 0xC0) == 0x80 )
          ++v27;
      }
    }
    return *v27 != 0;
  }
  else
  {
LABEL_31:
    while ( 1 )
    {
      v11 = sub_34CE94(&v27);
      if ( v11 == 0 )
        return false;
      if ( v25 != 0 )
      {
        if ( (v11 & 0xFFFFFF80) == 0 )
          v11 = byte_44A964[v11];
        if ( (v9 & 0xFFFFFF80) == 0 )
          v9 = byte_44A964[v9];
        while ( v11 != 0 )
        {
          if ( v11 == v9 )
            goto LABEL_30;
          v11 = sub_34CE94(&v27);
          if ( (v11 & 0xFFFFFF80) == 0 )
            v11 = byte_44A964[v11];
        }
        return false;
      }
      while ( v11 != v9 )
      {
        v11 = sub_34CE94(&v27);
        if ( v11 == 0 )
          return false;
      }
LABEL_30:
      if ( sub_34EF84(v28[0], v27, a3, a4) != 0 )
        return true;
    }
  }
}


//======================================================================
// sub_34F1D0
// address: 0x0034F1D0   size: 0x1A (26 bytes)
//======================================================================
int **__fastcall sub_34F1D0(unsigned int *a1)
{
  unsigned __int8 *v1; // r4
  unsigned int v3; // r0

  v1 = (unsigned __int8 *)*a1;
  v3 = sub_34CF50(*a1);
  return sub_34DA7E((_DWORD *)(a1[17] + 56), v1, v3);
}


//======================================================================
// sub_34F1EA
// address: 0x0034F1EA   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_34F1EA(int a1, int a2, int a3, int a4)
{
  int i; // r5
  int v7; // r4
  int v8; // r3
  unsigned __int8 *v10; // [sp+4h] [bp-10h]

  for ( i = 0; i < *(_DWORD *)(a2 + 20); ++i )
  {
    v7 = 0;
    v10 = *(unsigned __int8 **)(a2 + 8 * i + 40);
    while ( v7 < *(__int16 *)(a1 + 38) )
    {
      if ( *(int *)(a3 + 4 * v7) >= 0 || v7 == *(__int16 *)(a1 + 36) && a4 != 0 )
      {
        v8 = *(_DWORD *)(a1 + 4) + 24 * v7;
        if ( v10 != nullptr )
        {
          if ( sqlite3_stricmp(*(_BYTE **)v8, v10) == 0 )
            return 1;
        }
        else if ( (*(_BYTE *)(v8 + 23) & 1) != 0 )
        {
          return 1;
        }
      }
      ++v7;
    }
  }
  return 0;
}


//======================================================================
// sub_34F25C
// address: 0x0034F25C   size: 0x2E (46 bytes)
//======================================================================
const char *__fastcall sub_34F25C(int a1)
{
  const char *result; // r0

  switch ( a1 )
  {
    case 6:
      result = "RESTRICT";
      break;
    case 7:
      result = "SET NULL";
      break;
    case 8:
      result = "SET DEFAULT";
      break;
    case 9:
      result = "CASCADE";
      break;
    default:
      result = "NO ACTION";
      break;
  }
  return result;
}


//======================================================================
// sub_34F2A0
// address: 0x0034F2A0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_34F2A0(int a1, int a2)
{
  int i; // r3

  if ( a2 == 0 )
    return -1000000;
  for ( i = 0; i < *(_DWORD *)(a1 + 20) && *(_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * i + 12) != a2; ++i )
    ;
  return i;
}


//======================================================================
// sub_34F2C8
// address: 0x0034F2C8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_34F2C8(int a1, unsigned __int8 *a2)
{
  int i; // r4

  for ( i = 0; ; ++i )
  {
    if ( i >= *(__int16 *)(a1 + 38) )
      return -1;
    if ( sqlite3_stricmp(*(_BYTE **)(24 * i + *(_DWORD *)(a1 + 4)), a2) == 0 )
      break;
  }
  return i;
}


//======================================================================
// sub_34F2F8
// address: 0x0034F2F8   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_34F2F8(int result, int a2)
{
  int i; // r4
  int v4; // r2

  for ( i = result; i != 0; i = *(_DWORD *)(i + 16) )
  {
    v4 = *(_DWORD *)(i + 4);
    *(_WORD *)(i + 36) = a2;
    *(_DWORD *)(i + 4) = v4 | 1;
    result = sub_34F2F8(*(_DWORD *)(i + 12), a2);
  }
  return result;
}


//======================================================================
// sub_34F31C
// address: 0x0034F31C   size: 0x26 (38 bytes)
//======================================================================
const char *__fastcall sub_34F31C(int a1)
{
  switch ( a1 )
  {
    case 'u':
      return "EXCEPT";
    case 'v':
      return "INTERSECT";
    case 't':
      return "UNION ALL";
    default:
      break;
  }
  return "UNION";
}


//======================================================================
// sub_34F354
// address: 0x0034F354   size: 0x156 (342 bytes)
//======================================================================
const char *__fastcall sub_34F354(int **a1, unsigned __int8 *a2, _DWORD *a3, _DWORD *a4, const char **a5, char *a6)
{
  int **v7; // r4
  int v8; // r2
  int *v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int *v13; // r4
  int v14; // r3
  int i; // r2
  int *v16; // r0
  int *v17; // r2
  _DWORD *v18; // r0
  const char *v19; // r5
  int v20; // r1
  int *v21; // r3
  int v22; // r4
  int v24; // r3
  char v26; // [sp+13h] [bp-31h]
  int v27; // [sp+14h] [bp-30h]
  int v28; // [sp+18h] [bp-2Ch]
  const char *v29; // [sp+1Ch] [bp-28h]
  int *v30; // [sp+20h] [bp-24h] BYREF
  int v31; // [sp+24h] [bp-20h]
  int **v32; // [sp+30h] [bp-14h]

  v7 = a1;
  v27 = 0;
  v28 = 0;
  v29 = nullptr;
  v26 = 1;
  if ( a2 == nullptr )
    return nullptr;
  if ( a1[1] == nullptr )
    return (const char *)a1[1];
  v8 = *a2;
  if ( v8 == 154 || v8 == 156 )
  {
    v14 = *((__int16 *)a2 + 16);
LABEL_9:
    while ( 2 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= *v7[1] )
        {
          v7 = (int **)v7[4];
          if ( v7 != nullptr )
            goto LABEL_9;
          v19 = nullptr;
          goto LABEL_26;
        }
        v16 = &v7[1][18 * i];
        if ( v16[12] == *((_DWORD *)a2 + 7) )
          break;
      }
      v17 = (int *)v16[6];
      v18 = (_DWORD *)v16[7];
      if ( v17 == nullptr )
        continue;
      break;
    }
    if ( v18 == nullptr )
    {
      v20 = v17[17];
      if ( v20 != 0 )
      {
        if ( v14 >= 0 || (v14 = *((__int16 *)v17 + 18)) >= 0 )
        {
          v24 = v17[1] + 24 * v14;
          v19 = *(const char **)(v24 + 12);
          v29 = *(const char **)v24;
          v26 = *(_BYTE *)(v24 + 22);
        }
        else
        {
          v29 = "rowid";
          v19 = "INTEGER";
        }
        v28 = *v17;
        v21 = *v7;
        if ( *v7 != nullptr )
        {
          v22 = *v21;
          v27 = *(_DWORD *)(16 * sub_34F2A0(*v21, v20) + *(_DWORD *)(v22 + 16));
        }
      }
      else
      {
        v19 = nullptr;
      }
      goto LABEL_26;
    }
    if ( v14 < 0 )
    {
      v19 = nullptr;
      goto LABEL_26;
    }
    v19 = nullptr;
    if ( v14 >= *(_DWORD *)*v18 )
      goto LABEL_26;
    v12 = *(_DWORD *)(20 * v14 + *(_DWORD *)(*v18 + 8));
    v31 = v18[10];
    v32 = v7;
    v30 = *v7;
  }
  else
  {
    if ( v8 != 119 )
    {
      v19 = nullptr;
      goto LABEL_26;
    }
    v9 = *((int **)a2 + 5);
    v10 = *v9;
    v11 = v9[10];
    v12 = **(_DWORD **)(v10 + 8);
    v32 = a1;
    v13 = *a1;
    v31 = v11;
    v30 = v13;
  }
  v19 = (const char *)sub_34F354(&v30, v12);
LABEL_26:
  if ( a3 != nullptr )
  {
    *a3 = v27;
    *a4 = v28;
    *a5 = v29;
  }
  if ( a6 != nullptr )
    *a6 = v26;
  return v19;
}


//======================================================================
// sub_34F4B4
// address: 0x0034F4B4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_34F4B4(int result, int a2)
{
  int v2; // r3

  while ( *(_DWORD *)(a2 + 64) != 0 )
    a2 = *(_DWORD *)(a2 + 64);
  v2 = *(_DWORD *)(a2 + 76);
  if ( v2 != 0 )
    *(_DWORD *)(*(_DWORD *)(result + 12) + 536) = *(_DWORD *)(v2 + 4);
  return result;
}


//======================================================================
// sub_34F4D2
// address: 0x0034F4D2   size: 0x4 (4 bytes)
//======================================================================
int sub_34F4D2()
{
  return 0;
}


//======================================================================
// sub_34F4D6
// address: 0x0034F4D6   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_34F4D6(unsigned __int8 *a1, int a2)
{
  int v2; // r5
  int v4; // r3
  _DWORD *i; // r6
  int v7; // r7

  v2 = a1[442];
  v4 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 16) + 28);
  if ( a1[442] != 0 )
    return 0;
  if ( v4 == *(_DWORD *)(a2 + 68) )
    return *(_DWORD *)(a2 + 64);
  for ( i = *(_DWORD **)(v4 + 48); i != nullptr; i = (_DWORD *)*i )
  {
    v7 = i[2];
    if ( *(_DWORD *)(v7 + 24) == *(_DWORD *)(a2 + 68)
      && sqlite3_stricmp(*(_BYTE **)(v7 + 4), *(unsigned __int8 **)a2) == 0 )
    {
      if ( v2 == 0 )
        v2 = *(_DWORD *)(a2 + 64);
      *(_DWORD *)(v7 + 32) = v2;
      v2 = v7;
    }
  }
  if ( v2 == 0 )
    return *(_DWORD *)(a2 + 64);
  return v2;
}


//======================================================================
// sub_34F52A
// address: 0x0034F52A   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_34F52A(_DWORD *a1, _DWORD *a2)
{
  int i; // r4

  if ( a1 == nullptr || a2 == nullptr )
    return 1;
  for ( i = 0; i < *a2; ++i )
  {
    if ( sub_34EE88(a1, *(unsigned __int8 **)(a2[2] + 20 * i + 4)) >= 0 )
      return 1;
  }
  return 0;
}


//======================================================================
// sub_34F560
// address: 0x0034F560   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_34F560(unsigned __int8 *a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r6
  int v7; // r4
  int v8; // r5

  v6 = 0;
  if ( (*(_DWORD *)(*(_DWORD *)a1 + 24) & 0x800000) != 0 )
    v6 = sub_34F4D6(a1, a2);
  v7 = v6;
  v8 = 0;
  while ( v7 != 0 )
  {
    if ( *(unsigned __int8 *)(v7 + 8) == a3 && sub_34F52A(*(_DWORD **)(v7 + 16), a4) != 0 )
      v8 |= *(unsigned __int8 *)(v7 + 9);
    v7 = *(_DWORD *)(v7 + 32);
  }
  if ( a5 != nullptr )
    *a5 = v8;
  return v8 != 0 ? v6 : 0;
}


//======================================================================
// sub_34F5AA
// address: 0x0034F5AA   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_34F5AA(int a1, int a2, int a3)
{
  int v3; // r5
  int v5; // r4
  int result; // r0
  int v8; // r2
  int *v9; // r3
  int (*v10)(void); // r3

  v3 = a1 + 252;
  v5 = 0;
  if ( *(_DWORD *)(a1 + 320) != 0 )
  {
    while ( v5 < *(_DWORD *)(v3 + 44) )
    {
      v8 = *(_DWORD *)(4 * v5 + *(_DWORD *)(v3 + 68));
      v9 = **(int ***)(v8 + 4);
      if ( *(_DWORD *)(v8 + 8) != 0
        && *v9 > 1
        && (a2 == 0
          ? (int (*)(void))(v10 = (int (*)(void))v9[20], *(_DWORD *)(v8 + 20) = a3 + 1)
          : a2 != 2
          ? (v10 = (int (*)(void))v9[21])
          : (v10 = (int (*)(void))v9[22]),
            v10 != nullptr && *(_DWORD *)(v8 + 20) > a3) )
      {
        result = v10();
      }
      else
      {
        result = 0;
      }
      ++v5;
      if ( result != 0 )
        return result;
    }
  }
  return 0;
}


//======================================================================
// sub_34F624
// address: 0x0034F624   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_34F624(_WORD *a1, int a2, int a3, int a4, __int16 a5, __int16 a6)
{
  unsigned int v6; // r4
  _WORD *v7; // r1
  unsigned int v8; // r5
  _WORD *v10; // r0
  _WORD *v11; // r5
  int result; // r0
  int v13; // r3
  int v14; // [sp+8h] [bp-1Ch]
  int v15; // [sp+10h] [bp-14h]
  int v16; // [sp+14h] [bp-10h]

  v6 = (unsigned __int16)*a1;
  v7 = a1 + 4;
  v8 = v6;
  while ( v8 != 0 )
  {
    v14 = (__int16)v7[4];
    v16 = *((_DWORD *)v7 + 1);
    v15 = *(_DWORD *)v7;
    if ( a5 > v14 )
      goto LABEL_8;
    if ( (v15 & a3) == a3 && (v16 & a4) == a4 )
      goto LABEL_17;
    if ( v14 <= a5 )
    {
LABEL_8:
      if ( (v15 & a3) == v15 && (v16 & a4) == v16 )
        return 0;
    }
    v8 = (unsigned __int16)(v8 - 1);
    v7 += 8;
  }
  if ( v6 <= 2 )
  {
    *a1 = v6 + 1;
    v7 = &a1[8 * v6 + 4];
    v7[5] = a6;
LABEL_17:
    *(_DWORD *)v7 = a3;
    *((_DWORD *)v7 + 1) = a4;
    v13 = (__int16)v7[5];
    v7[4] = a5;
    result = 1;
    if ( v13 > a6 )
      v7[5] = a6;
    return result;
  }
  v7 = a1 + 4;
  v10 = &a1[8 * (unsigned __int16)(v6 - 2) + 20];
  v11 = a1 + 12;
  do
  {
    if ( v7[4] > v11[4] )
      v7 = v11;
    v11 += 8;
  }
  while ( v11 != v10 );
  result = 0;
  if ( (__int16)v7[4] > a5 )
    goto LABEL_17;
  return result;
}


//======================================================================
// sub_34F6FC
// address: 0x0034F6FC   size: 0x28 (40 bytes)
//======================================================================
__int64 __fastcall sub_34F6FC(_DWORD *a1, int a2)
{
  int i; // r2

  for ( i = 0; i < *a1; ++i )
  {
    if ( a1[i + 1] == a2 )
      return 1LL << i;
  }
  return 0;
}


//======================================================================
// sub_34F724
// address: 0x0034F724   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_34F724(int result, int a2)
{
  if ( result != 0 )
  {
    *(_DWORD *)(result + 4) |= *(_DWORD *)(a2 + 4) & 1;
    *(_WORD *)(result + 36) = *(_WORD *)(a2 + 36);
  }
  return result;
}


//======================================================================
// sub_34F73C
// address: 0x0034F73C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_34F73C(int a1)
{
  int v1; // r0
  __int16 v2; // r3

  v1 = sub_34D98C(a1);
  v2 = 0;
  if ( v1 > 33 )
    return (__int16)(v1 - 33);
  return v2;
}


//======================================================================
// sub_34F758
// address: 0x0034F758   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_34F758(int result, int a2)
{
  int v2; // r3

  do
  {
    if ( a2 == 0
      || (*(_BYTE *)(a2 + 20) & 4) != 0
      || *(_DWORD *)result != 0 && (*(_DWORD *)(*(_DWORD *)a2 + 4) & 1) == 0 )
    {
      break;
    }
    if ( (*(_QWORD *)(result + 64) & *(_QWORD *)(a2 + 40)) != 0 )
      break;
    *(_BYTE *)(a2 + 20) |= 4u;
    v2 = *(_DWORD *)(a2 + 4);
    if ( v2 < 0 )
      break;
    a2 = *(_DWORD *)(*(_DWORD *)(a2 + 24) + 20) + 48 * v2;
  }
  while ( --*(_BYTE *)(a2 + 21) == 0 );
  return result;
}


//======================================================================
// sub_34F7B0
// address: 0x0034F7B0   size: 0xA4 (164 bytes)
//======================================================================
_DWORD *__fastcall sub_34F7B0(_DWORD *result, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r6
  int v5; // r5
  int v6; // r5
  int v7; // r7
  int v8; // r6
  int v9; // r6
  int v10; // [sp+4h] [bp-18h]
  int v11; // [sp+Ch] [bp-10h]
  int v12; // [sp+10h] [bp-Ch]
  int v13; // [sp+14h] [bp-8h]

  v10 = *(_DWORD *)(a2 + 12);
  v11 = *(_DWORD *)(a2 + 8);
  if ( (*(_WORD *)(**(_DWORD **)*result + 60) & 0x1000) == 0 )
  {
    v2 = result[3];
    v3 = result[5];
    v12 = ~(*(_DWORD *)a2 | v11);
    v13 = ~(*(_DWORD *)(a2 + 4) | v10);
    while ( v2 > 0 && (*(_BYTE *)(v3 + 20) & 2) == 0 )
    {
      v4 = *(_DWORD *)(v3 + 40);
      v5 = *(_DWORD *)(v3 + 44);
      if ( (v10 & v5 | v11 & v4) != 0 )
      {
        v6 = v5 & v13 | v4 & v12;
        if ( v6 == 0 )
        {
          v7 = *(unsigned __int16 *)(a2 + 40);
          while ( v7 - 1 - v6 != -1 )
          {
            v8 = *(_DWORD *)(4 * (v7 + 0x3FFFFFFF - v6) + *(_DWORD *)(a2 + 44));
            if ( v8 != 0 )
            {
              if ( v8 == v3 )
                goto LABEL_15;
              v9 = *(_DWORD *)(v8 + 4);
              if ( v9 >= 0 && v3 == result[5] + 48 * v9 )
                goto LABEL_15;
            }
            ++v6;
          }
          *(_WORD *)(a2 + 22) += *(_WORD *)(v3 + 16);
        }
      }
LABEL_15:
      --v2;
      v3 += 48;
    }
  }
  return result;
}


//======================================================================
// sub_34F858
// address: 0x0034F858   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_34F858(int a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r6
  unsigned int v4; // r2

  v1 = 0;
  v2 = 2 * (*(unsigned __int16 *)(a1 + 52) - 1);
  v3 = 0;
  while ( v2 != -2 )
  {
    v4 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 4) + v2);
    if ( v4 <= 0x3E )
    {
      v1 |= 1LL << v4;
      v3 |= (unsigned __int64)(1LL << v4) >> 32;
    }
    v2 -= 2;
  }
  return v1;
}


//======================================================================
// sub_34FA6C
// address: 0x0034FA6C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_34FA6C(int a1, int a2, _BYTE *a3, int a4, unsigned __int8 *a5)
{
  int v6; // r4
  int result; // r0

  v6 = a4;
  if ( a4 > a2 )
    a4 = a2;
  result = sqlite3_strnicmp(a3, a5, a4);
  if ( result == 0 )
    return a2 - v6;
  return result;
}


//======================================================================
// sub_34FA98
// address: 0x0034FA98   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_34FA98(int a1)
{
  int v1; // r3
  int v2; // r4
  int (__fastcall *v3)(_DWORD); // r3
  int result; // r0
  int v5; // r3

  v1 = *(_DWORD *)(a1 + 4);
  v2 = v1 + 436;
  if ( v1 == -436 )
    return 0;
  v3 = *(int (__fastcall **)(_DWORD))(v1 + 436);
  if ( v3 == nullptr )
    return 0;
  if ( *(int *)(v2 + 8) < 0 )
    return 0;
  result = v3(*(_DWORD *)(v2 + 4));
  if ( result != 0 )
    v5 = *(_DWORD *)(v2 + 8) + 1;
  else
    v5 = -1;
  *(_DWORD *)(v2 + 8) = v5;
  return result;
}


//======================================================================
// sub_34FCC6
// address: 0x0034FCC6   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_34FCC6(int a1, _BYTE *a2)
{
  int i; // r4
  int v5; // r3

  for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
  {
    v5 = *(_DWORD *)(a1 + 16) + 16 * i;
    if ( *(_DWORD *)(v5 + 4) != 0 && (a2 == nullptr || sqlite3_stricmp(a2, *(unsigned __int8 **)v5) == 0) )
      return *(_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * i + 4);
  }
  return 0;
}


//======================================================================
// sub_34FD18
// address: 0x0034FD18   size: 0x52 (82 bytes)
//======================================================================
__int64 __fastcall sub_34FD18(unsigned __int8 *a1)
{
  __int64 v1; // r6
  __int64 v2; // r4
  __int64 v3; // r4
  __int64 v4; // r6

  LODWORD(v1) = 0;
  HIDWORD(v1) = *a1 << 24;
  LODWORD(v2) = 0;
  HIDWORD(v2) = a1[1] << 16;
  v3 = v2 + v1;
  HIDWORD(v1) = a1[2] << 8;
  v4 = v1 + v3;
  HIDWORD(v3) = a1[3];
  LODWORD(v3) = 0;
  return (a1[6] << 8) + (a1[5] << 16) + (a1[4] << 24) + v3 + v4 + a1[7];
}


//======================================================================
// sub_34FD6A
// address: 0x0034FD6A   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_34FD6A(int result)
{
  if ( result != 0 )
    ++*(_DWORD *)(result + 16);
  return result;
}


//======================================================================
// sub_34FD78
// address: 0x0034FD78   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_34FD78(__int64 a1)
{
  LODWORD(a1) = ((a1 >> 16)
               ^ (a1 >> 24)
               ^ (SHIDWORD(a1) >> 24)
               ^ (SHIDWORD(a1) >> 16)
               ^ a1
               ^ (SHIDWORD(a1) >> 8)
               ^ HIDWORD(a1)
               ^ (a1 >> 8))
              & 0x7F;
  if ( ((SHIDWORD(a1) >> 8) ^ (SHIDWORD(a1) >> 16) ^ (SHIDWORD(a1) >> 24) ^ HIDWORD(a1)) < 0 )
    LODWORD(a1) = ((a1 - 1) | 0xFFFFFF80) + 1;
  return a1;
}


//======================================================================
// sub_34FDD4
// address: 0x0034FDD4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_34FDD4(int a1, __int64 a2)
{
  int result; // r0

  for ( result = *(_DWORD *)(4 * (sub_34FD78(a2) + 10) + a1);
        result != 0 && *(_QWORD *)(result + 8) != a2;
        result = *(_DWORD *)(result + 28) )
  {
    ;
  }
  return result;
}


//======================================================================
// sub_34FE00
// address: 0x0034FE00   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_34FE00(int a1, int a2)
{
  __int64 v4; // r0

  v4 = *(_QWORD *)(a2 + 8);
  if ( v4 != 0 )
  {
    LODWORD(v4) = a1 + 4 * (sub_34FD78(v4) + 10);
    while ( *(_DWORD *)v4 != a2 )
      LODWORD(v4) = *(_DWORD *)v4 + 28;
    *(_DWORD *)v4 = *(_DWORD *)(a2 + 28);
    *(_DWORD *)(a2 + 28) = 0;
  }
  return v4;
}


//======================================================================
// sub_34FE30
// address: 0x0034FE30   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_34FE30(int result, int a2, int *a3, int a4)
{
  int v4; // r5
  int v5; // r4
  _BYTE *v6; // r3
  int *v7; // r2
  _BYTE *v8; // r3
  int v9; // r5
  int v10; // r4

  v4 = a3[1];
  v5 = *a3;
  v6 = (_BYTE *)(*(_DWORD *)(a2 + 24) + a4 * *(_DWORD *)(result + 24) + 4);
  *v6 = HIBYTE(v4);
  v6[1] = BYTE2(v4);
  v6[3] = v4;
  v6[4] = HIBYTE(v5);
  v6[5] = BYTE2(v5);
  v6[6] = BYTE1(v5);
  v6[2] = BYTE1(v4);
  v6[7] = v5;
  v7 = a3 + 2;
  v8 = v6 + 8;
  v9 = 0;
  while ( v9 < 2 * *(_DWORD *)(result + 20) )
  {
    v10 = *v7++;
    ++v9;
    *v8 = HIBYTE(v10);
    v8[1] = BYTE2(v10);
    v8[2] = BYTE1(v10);
    v8[3] = v10;
    v8 += 4;
  }
  *(_DWORD *)(a2 + 20) = 1;
  return result;
}


//======================================================================
// sub_34FE86
// address: 0x0034FE86   size: 0x44 (68 bytes)
//======================================================================
bool __fastcall sub_34FE86(int a1, int a2, int *a3)
{
  int v4; // r7
  int v5; // r4
  int v6; // r3

  v4 = (*(_DWORD *)(a1 + 16) - 4) / *(_DWORD *)(a1 + 24);
  v5 = (*(unsigned __int8 *)(*(_DWORD *)(a2 + 24) + 2) << 8) + *(unsigned __int8 *)(*(_DWORD *)(a2 + 24) + 3);
  if ( v5 < v4 )
  {
    sub_34FE30(
      a1,
      a2,
      a3,
      (*(unsigned __int8 *)(*(_DWORD *)(a2 + 24) + 2) << 8) + *(unsigned __int8 *)(*(_DWORD *)(a2 + 24) + 3));
    v6 = *(_DWORD *)(a2 + 24);
    *(_BYTE *)(v6 + 2) = (unsigned __int16)(v5 + 1) >> 8;
    *(_BYTE *)(v6 + 3) = v5 + 1;
    *(_DWORD *)(a2 + 20) = 1;
  }
  return v5 == v4;
}


//======================================================================
// sub_34FECA
// address: 0x0034FECA   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall sub_34FECA(int a1)
{
  return *(_DWORD *)(a1 + 4) == 0;
}


//======================================================================
// sub_34FED2
// address: 0x0034FED2   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_34FED2(int a1, int a2, int a3, int a4)
{
  int i; // r4
  double v8; // r0
  int v10; // [sp+4h] [bp-60h]
  double v11[10]; // [sp+10h] [bp-54h] BYREF

  v10 = 2 * *(_DWORD *)(a1 + 20);
  for ( i = 0; i < v10; ++i )
  {
    if ( *(_DWORD *)(a1 + 612) != 0 )
      v8 = (double)*(int *)(a3 + 8);
    else
      v8 = *(float *)(a3 + 8);
    v11[i] = v8;
    a3 += 4;
  }
  return (*(int (__fastcall **)(_DWORD, int, double *, int))(a2 + 16))(*(_DWORD *)(a2 + 20), v10, v11, a4);
}


//======================================================================
// sub_34FF28
// address: 0x0034FF28   size: 0x74 (116 bytes)
//======================================================================
__int64 __fastcall sub_34FF28(int a1, int a2)
{
  int i; // r5
  double v5; // r0
  double v7; // [sp+0h] [bp-1Ch]
  double v8; // [sp+8h] [bp-14h]
  int v9; // [sp+14h] [bp-8h]

  v9 = 2 * *(_DWORD *)(a1 + 20);
  v7 = 1.0;
  for ( i = 0; i < v9; i += 2 )
  {
    if ( *(_DWORD *)(a1 + 612) != 0 )
    {
      v8 = (double)*(int *)(a2 + 12);
      v5 = (double)*(int *)(a2 + 8);
    }
    else
    {
      v8 = *(float *)(a2 + 12);
      v5 = *(float *)(a2 + 8);
    }
    v7 = v7 * (v8 - v5);
    a2 += 8;
  }
  return *(_QWORD *)&v7;
}


//======================================================================
// sub_34FFA8
// address: 0x0034FFA8   size: 0x74 (116 bytes)
//======================================================================
__int64 __fastcall sub_34FFA8(int a1, int a2)
{
  int i; // r5
  double v5; // r0
  double v7; // [sp+0h] [bp-1Ch]
  double v8; // [sp+8h] [bp-14h]
  int v9; // [sp+14h] [bp-8h]

  v9 = 2 * *(_DWORD *)(a1 + 20);
  v7 = 0.0;
  for ( i = 0; i < v9; i += 2 )
  {
    if ( *(_DWORD *)(a1 + 612) != 0 )
    {
      v8 = (double)*(int *)(a2 + 12);
      v5 = (double)*(int *)(a2 + 8);
    }
    else
    {
      v8 = *(float *)(a2 + 12);
      v5 = *(float *)(a2 + 8);
    }
    v7 = v7 + v8 - v5;
    a2 += 8;
  }
  return *(_QWORD *)&v7;
}

