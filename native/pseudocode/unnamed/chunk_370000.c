// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_370000

//======================================================================
// sub_3700DE
// address: 0x003700DE   size: 0x8 (8 bytes)
//======================================================================
int sub_3700DE()
{
  *(_BYTE *)(STACK[0x10C] + 25) = -101;
  return sub_37011A();
}


//======================================================================
// sub_37011A
// address: 0x0037011A   size: 0x1A0 (416 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037011A  MOVS    R5, #0x148
//   0037011E  ADDS    R3, R7, R5
//   00370120  LDR     R4, [R3,#0x14]
//   00370122  LDR     R5, [R3,#0xC]
//   00370124  CMP     R5, #0
//   00370126  BLE     loc_370178
//   00370128  LDRB    R2, [R4,#0x14]
//   0037012A  MOVS    R3, #6
//   0037012C  TST     R2, R3
//   0037012E  BNE     loc_370172
//   00370130  LDR     R0, [SP,#arg_EC]
//   00370132  LDR     R3, [SP,#arg_EC]
//   00370134  LDR     R1, [R4,#0x28]
//   00370136  LDR     R0, [R0,#0x40]
//   00370138  LDR     R3, [R3,#0x44]
//   0037013A  MOVS    R2, R0
//   0037013C  LDR     R0, [R4,#0x2C]
//   0037013E  ANDS    R2, R1
//   00370140  STR     R3, [SP,#arg_24]
//   00370142  ANDS    R3, R0
//   00370144  ORRS    R3, R2
//   00370146  BEQ     loc_370150
//   00370148  ADDS    R3, R7, #7
//   0037014A  MOVS    R2, #1
//   0037014C  STRB    R2, [R3,#0x1F]
//   0037014E  B       loc_370172
//   00370150  LDR     R2, [SP,#arg_EC]
//   00370152  LDR     R1, [R4]
//   00370154  LDR     R2, [R2]
//   00370156  CMP     R2, #0
//   00370158  BEQ     loc_370160
//   0037015A  LDR     R3, [R1,#4]
//   0037015C  LSLS    R3, R3, #0x1F
//   0037015E  BPL     loc_370172
//   00370160  LDR     R2, [SP,#arg_168]
//   00370162  MOVS    R3, #8
//   00370164  MOVS    R0, R6
//   00370166  BL      sub_37384A
//   0037016A  LDRB    R3, [R4,#0x14]
//   0037016C  MOVS    R2, #4
//   0037016E  ORRS    R3, R2
//   00370170  STRB    R3, [R4,#0x14]
//   00370172  SUBS    R5, #1
//   00370174  ADDS    R4, #0x30 ; '0'
//   00370176  B       loc_370124
//   00370178  MOVS    R4, #0x148
//   0037017C  ADDS    R3, R7, R4
//   0037017E  LDR     R5, [R3,#0x14]
//   00370180  LDR     R3, [R3,#0xC]
//   00370182  STR     R3, [SP,#arg_F8]
//   00370184  LDR     R4, [SP,#arg_F8]
//   00370186  CMP     R4, #0
//   00370188  BLE     loc_37021A
//   0037018A  LDRB    R2, [R5,#0x14]
//   0037018C  MOVS    R3, #6
//   0037018E  TST     R2, R3
//   00370190  BNE     loc_370210
//   00370192  LDRH    R2, [R5,#0x12]
//   00370194  LDR     R3, =0x402
//   00370196  CMP     R2, R3
//   00370198  BNE     loc_370210
//   0037019A  LDR     R0, [R5,#8]
//   0037019C  LDR     R4, [SP,#arg_110]
//   0037019E  CMP     R0, R4
//   003701A0  BNE     loc_370210
//   003701A2  LDR     R4, [SP,#arg_EC]
//   003701A4  LDR     R3, [R4]
//   003701A6  CMP     R3, #0
//   003701A8  BNE     loc_370210
//   003701AA  LDR     R4, [R5]
//   003701AC  LDR     R2, [R5,#0xC]
//   003701AE  MOVS    R1, #3
//   003701B0  STR     R4, [SP,#arg_100]
//   003701B2  LDR     R4, [SP,#arg_164]
//   003701B4  STR     R1, [SP,#arg_8]
//   003701B6  STR     R3, [SP,#arg_C]
//   003701B8  STR     R4, [SP,#arg_0]
//   003701BA  LDR     R4, [SP,#arg_16C]
//   003701BC  LDR     R0, [SP,#arg_150]
//   003701BE  LDR     R1, [SP,#arg_110]
//   003701C0  STR     R4, [SP,#arg_4]
//   003701C2  BL      sub_36286E
//   003701C6  SUBS    R4, R0, #0
//   003701C8  BEQ     loc_370210
//   003701CA  LDRB    R3, [R0,#0x14]
//   003701CC  LSLS    R0, R3, #0x1D
//   003701CE  BMI     loc_370210
//   003701D0  LDR     R0, [SP,#arg_128]
//   003701D2  MOVS    R1, #0x30 ; '0'
//   003701D4  BL      sub_3516AC
//   003701D8  STR     R0, [SP,#arg_FC]
//   003701DA  CMP     R0, #0
//   003701DC  BEQ     loc_370210
//   003701DE  LDR     R4, [R4]
//   003701E0  MOVS    R3, R0
//   003701E2  MOVS    R1, R4
//   003701E4  LDM     R1!, {R0,R2,R4}
//   003701E6  STM     R3!, {R0,R2,R4}
//   003701E8  LDM     R1!, {R0,R2,R4}
//   003701EA  STM     R3!, {R0,R2,R4}
//   003701EC  LDM     R1!, {R0,R2,R4}
//   003701EE  STM     R3!, {R0,R2,R4}
//   003701F0  LDM     R1!, {R0,R2,R4}
//   003701F2  STM     R3!, {R0,R2,R4}
//   003701F4  LDR     R1, [SP,#arg_100]
//   003701F6  LDR     R4, [SP,#arg_FC]
//   003701F8  MOVS    R0, R6
//   003701FA  LDR     R1, [R1,#0xC]
//   003701FC  LDR     R2, [SP,#arg_168]
//   003701FE  MOVS    R3, #8
//   00370200  STR     R1, [R4,#0xC]
//   00370202  MOVS    R1, R4
//   00370204  BL      sub_37384A
//   00370208  LDR     R0, [SP,#arg_128]
//   0037020A  LDR     R1, [SP,#arg_FC]
//   0037020C  BL      sub_354940
//   00370210  LDR     R4, [SP,#arg_F8]
//   00370212  ADDS    R5, #0x30 ; '0'
//   00370214  SUBS    R4, #1
//   00370216  STR     R4, [SP,#arg_F8]
//   00370218  B       loc_370184
//   0037021A  LDR     R5, [SP,#arg_EC]
//   0037021C  LDR     R3, [R5]
//   0037021E  CMP     R3, #0
//   00370220  BNE     loc_370230
//   00370222  LDR     R6, [SP,#arg_EC]
//   00370224  LDR     R4, [SP,#arg_EC]
//   00370226  LDR     R6, [R6,#0x40]
//   00370228  LDR     R4, [R4,#0x44]
//   0037022A  STR     R6, [SP,#arg_164]
//   0037022C  STR     R4, [SP,#arg_16C]
//   0037022E  B       loc_370298
//   00370230  LDR     R5, [SP,#arg_F4]
//   00370232  LDR     R4, [SP,#arg_EC]
//   00370234  MOVS    R1, #0x19
//   00370236  LDR     R5, [R5,#0x20]
//   00370238  MOVS    R2, #1
//   0037023A  LDR     R0, [SP,#arg_F4]
//   0037023C  STR     R5, [R4,#0x1C]
//   0037023E  MOVS    R5, #0xA4
//   00370240  BL      sub_35AAF0
//   00370244  LSLS    R5, R5, #1
//   00370246  MOVS    R0, R6
//   00370248  BL      sub_35331E
//   0037024C  ADDS    R3, R7, R5
//   0037024E  LDR     R4, [R3,#0x14]
//   00370250  MOVS    R5, #0
//   00370252  MOVS    R1, #0x148
//   00370256  ADDS    R3, R7, R1
//   00370258  LDR     R3, [R3,#0xC]
//   0037025A  CMP     R5, R3
//   0037025C  BGE     loc_370222
//   0037025E  LDRB    R2, [R4,#0x14]
//   00370260  MOVS    R3, #6
//   00370262  TST     R2, R3
//   00370264  BNE     loc_370292
//   00370266  LDR     R0, [SP,#arg_EC]
//   00370268  LDR     R3, [SP,#arg_EC]
//   0037026A  LDR     R1, [R4,#0x28]
//   0037026C  LDR     R0, [R0,#0x40]
//   0037026E  LDR     R3, [R3,#0x44]
//   00370270  MOVS    R2, R0
//   00370272  LDR     R0, [R4,#0x2C]
//   00370274  ANDS    R2, R1
//   00370276  STR     R3, [SP,#arg_18]
//   00370278  ANDS    R3, R0
//   0037027A  ORRS    R3, R2
//   0037027C  BNE     loc_370292
//   0037027E  LDR     R2, [SP,#arg_168]
//   00370280  MOVS    R3, #8
//   00370282  MOVS    R0, R6
//   00370284  LDR     R1, [R4]
//   00370286  BL      sub_37384A
//   0037028A  LDRB    R3, [R4,#0x14]
//   0037028C  MOVS    R2, #4
//   0037028E  ORRS    R3, R2
//   00370290  STRB    R3, [R4,#0x14]
//   00370292  ADDS    R5, #1
//   00370294  ADDS    R4, #0x30 ; '0'
//   00370296  B       loc_370252
//   00370298  LDR     R4, [SP,#arg_158]
//   0037029A  LDR     R2, [SP,#arg_EC]
//   0037029C  LDR     R5, [SP,#arg_130]
//   0037029E  ADDS    R4, #1
//   003702A0  LDR     R6, [SP,#arg_EC]
//   003702A2  STR     R4, [SP,#arg_158]
//   003702A4  LDR     R4, [SP,#arg_10C]
//   003702A6  LDR     R2, [R2,#0x18]
//   003702A8  ADDS    R5, #0x48 ; 'H'
//   003702AA  ADDS    R6, #0x48 ; 'H'
//   003702AC  ADDS    R4, #0x48 ; 'H'
//   003702AE  STR     R2, [R7,#0x30]
//   003702B0  STR     R5, [SP,#arg_130]
//   003702B2  STR     R6, [SP,#arg_EC]
//   003702B4  STR     R4, [SP,#arg_10C]
//   003702B6  BL      loc_36F31A

//======================================================================
// sub_3702BA
// address: 0x003702BA   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3702BA(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_3702BE
// address: 0x003702BE   size: 0x68 (104 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003702BE  MOVS    R3, R7
//   003702C0  MOVS    R2, #1
//   003702C2  ADDS    R3, #8
//   003702C4  STRB    R2, [R3,#0x1F]
//   003702C6  BL      sub_36EDA4
//   003702CA  LDR     R5, [SP,#arg_114]
//   003702CC  LDR     R0, [SP,#arg_124]
//   003702CE  LDR     R1, [SP,#arg_F8]
//   003702D0  LDR     R3, [R5]
//   003702D2  ADDS    R5, R0, R1
//   003702D4  LDR     R4, [R3,#0x10]
//   003702D6  MOVS    R0, R6
//   003702D8  MOVS    R2, R5
//   003702DA  MOVS    R1, R4
//   003702DC  BL      sub_372DE4
//   003702E0  MOVS    R0, R4
//   003702E2  BL      sub_34E9BC
//   003702E6  CMP     R0, #0
//   003702E8  BEQ     loc_3702F6
//   003702EA  LDR     R0, [SP,#arg_F4]
//   003702EC  MOVS    R1, #0x4C ; 'L'
//   003702EE  MOVS    R2, R5
//   003702F0  LDR     R3, [SP,#arg_12C]
//   003702F2  BL      sub_35AAF0
//   003702F6  LDR     R5, [SP,#arg_11C]
//   003702F8  CMP     R5, #0
//   003702FA  BEQ     loc_37031E
//   003702FC  LDR     R0, [SP,#arg_F8]
//   003702FE  ADDS    R5, R5, R0
//   00370300  LDRB    R1, [R5]
//   00370302  MOVS    R0, R4
//   00370304  BL      sub_34ED7C
//   00370308  CMP     R0, #0x62 ; 'b'
//   0037030A  BNE     loc_37030E
//   0037030C  STRB    R0, [R5]
//   0037030E  LDRB    R1, [R5]
//   00370310  MOVS    R0, R4
//   00370312  BL      sub_34E9F0
//   00370316  CMP     R0, #0
//   00370318  BEQ     loc_37031E
//   0037031A  MOVS    R3, #0x62 ; 'b'
//   0037031C  STRB    R3, [R5]
//   0037031E  LDR     R4, [SP,#arg_F8]
//   00370320  MOVS    R5, #1
//   00370322  ADDS    R4, #1
//   00370324  B       loc_36FC2E

//======================================================================
// sub_370326
// address: 0x00370326   size: 0x12 (18 bytes)
//======================================================================
int sub_370326()
{
  int v0; // r7
  __int64 v1; // r0
  int v2; // r0
  int v3; // r1

  *(_DWORD *)(STACK[0x118] + 428) = *(_DWORD *)(v0 + 56);
  LODWORD(v1) = STACK[0x13C];
  HIDWORD(v1) = v0;
  v2 = sub_357A20(v1);
  return sub_370338(v2, v3);
}


//======================================================================
// sub_370338
// address: 0x00370338   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_370338(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_37033C
// address: 0x0037033C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_37033C(int a1, int a2, char a3)
{
  int v3; // r7
  unsigned int v4; // r5
  int v5; // r0

  v4 = STACK[0x140] - 1;
  *(_BYTE *)(v3 + 40) = a3 - 1;
  STACK[0x140] = v4;
  v5 = sub_36F0A2();
  return sub_37034E(v5);
}


//======================================================================
// sub_37034E
// address: 0x0037034E   size: 0x60 (96 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037034E  CMP     R4, #0
//   00370350  BEQ     loc_3703B4
//   00370352  ADD     R1, SP, #arg_190
//   00370354  STR     R1, [SP,#arg_108]
//   00370356  MOVS    R0, R1; void *
//   00370358  LDR     R1, =(aSqliteFormat3_0+6 - 0x370360); " format 3"
//   0037035A  MOVS    R2, #4; size_t
//   0037035C  ADD     R1, PC; " format 3"
//   0037035E  ADDS    R1, #(asc_44B462 - 0x44B424); "><;="
//   00370360  BL      j_memcpy
//   00370364  LDR     R2, [R4]
//   00370366  MOVS    R0, R6
//   00370368  LDR     R3, [R2,#0x10]
//   0037036A  STR     R2, [SP,#arg_F0]
//   0037036C  ADD     R2, SP, #arg_18C
//   0037036E  MOVS    R1, R3
//   00370370  STR     R3, [SP,#arg_64]
//   00370372  BL      sub_3737AE
//   00370376  STR     R0, [SP,#arg_F8]
//   00370378  LDR     R0, [SP,#arg_F0]
//   0037037A  LDR     R2, [SP,#arg_F8]
//   0037037C  ADD     R1, SP, #arg_190
//   0037037E  LDRB    R3, [R0]
//   00370380  LDR     R0, [SP,#arg_F4]
//   00370382  ADDS    R3, R1, R3
//   00370384  SUBS    R3, #0x50 ; 'P'
//   00370386  LDRB    R1, [R3]
//   00370388  LDR     R3, [SP,#arg_FC]
//   0037038A  STR     R2, [SP,#arg_0]
//   0037038C  LDR     R2, [SP,#arg_110]
//   0037038E  BL      sub_35A902
//   00370392  MOVS    R0, R6
//   00370394  LDR     R1, [SP,#arg_F8]
//   00370396  MOVS    R2, #1
//   00370398  BL      sub_3532D2
//   0037039C  MOVS    R0, R6
//   0037039E  LDR     R1, [SP,#arg_18C]
//   003703A0  BL      sub_353416
//   003703A4  LDR     R0, [SP,#arg_EC]
//   003703A6  MOVS    R1, R4
//   003703A8  BL      sub_34F758
//   003703AC  B       loc_3703C0

//======================================================================
// sub_3703AE
// address: 0x003703AE   size: 0xC0 (192 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003703AE  LDR     R4, [SP,#arg_100]
//   003703B0  CMP     R4, #0
//   003703B2  BEQ     sub_37046E
//   003703B4  MOVS    R1, #0x66 ; 'f'
//   003703B6  LDR     R0, [SP,#arg_F4]
//   003703B8  LDR     R2, [SP,#arg_110]
//   003703BA  LDR     R3, [SP,#arg_FC]
//   003703BC  BL      sub_35AAF0
//   003703C0  CMP     R5, #0
//   003703C2  BEQ     loc_370410
//   003703C4  LDR     R3, [R6,#0x4C]
//   003703C6  LDR     R4, [R5]
//   003703C8  MOVS    R0, R6
//   003703CA  ADDS    R3, #1
//   003703CC  STR     R3, [R6,#0x4C]
//   003703CE  MOVS    R2, R3
//   003703D0  LDR     R1, [R4,#0x10]
//   003703D2  STR     R3, [SP,#arg_F0]
//   003703D4  BL      sub_372DE4
//   003703D8  LDRB    R3, [R4]
//   003703DA  MOVS    R2, #2
//   003703DC  BICS    R3, R2
//   003703DE  CMP     R3, #0x50 ; 'P'
//   003703E0  BNE     loc_3703EE
//   003703E2  LDR     R0, [SP,#arg_100]
//   003703E4  MOVS    R4, #0x53 ; 'S'
//   003703E6  CMP     R0, #0
//   003703E8  BEQ     loc_3703F8
//   003703EA  MOVS    R4, #0x51 ; 'Q'
//   003703EC  B       loc_3703F8
//   003703EE  LDR     R1, [SP,#arg_100]
//   003703F0  MOVS    R4, #0x50 ; 'P'
//   003703F2  CMP     R1, #0
//   003703F4  BEQ     loc_3703F8
//   003703F6  MOVS    R4, #0x52 ; 'R'
//   003703F8  LDR     R0, [SP,#arg_EC]
//   003703FA  MOVS    R1, R5
//   003703FC  BL      sub_34F758
//   00370400  B       loc_370414
//   00370402  ALIGN 4
//   00370404  DCD aSqliteFormat3_0+6 - 0x3700F0
//   00370408  DCD 0x402
//   0037040C  DCD aSqliteFormat3_0+6 - 0x370360
//   00370410  STR     R5, [SP,#arg_F0]
//   00370412  MOVS    R4, #0x9B
//   00370414  LDR     R5, [SP,#arg_F4]
//   00370416  LDR     R3, [R5,#0x20]
//   00370418  LDR     R5, [SP,#arg_100]
//   0037041A  NEGS    R2, R5
//   0037041C  ADCS    R2, R5
//   0037041E  LDR     R5, [SP,#arg_10C]
//   00370420  ADDS    R2, #8
//   00370422  STRB    R2, [R5,#0x19]
//   00370424  LDR     R2, [SP,#arg_130]
//   00370426  LDR     R5, [SP,#arg_110]
//   00370428  SUBS    R2, #4
//   0037042A  STR     R5, [R2]
//   0037042C  LDR     R5, [SP,#arg_130]
//   0037042E  STR     R3, [R5]
//   00370430  CMP     R4, #0x9B
//   00370432  BNE     loc_370436
//   00370434  B       sub_37011A
//   00370436  LDR     R5, [R6,#0x4C]
//   00370438  LDR     R2, [SP,#arg_110]
//   0037043A  LDR     R0, [SP,#arg_F4]
//   0037043C  ADDS    R5, #1
//   0037043E  MOVS    R3, R5
//   00370440  STR     R5, [R6,#0x4C]
//   00370442  MOVS    R1, #0x64 ; 'd'
//   00370444  BL      sub_35AAF0
//   00370448  MOVS    R2, #1
//   0037044A  MOVS    R0, R6
//   0037044C  LDR     R1, [SP,#arg_110]
//   0037044E  MOVS    R3, R5
//   00370450  NEGS    R2, R2
//   00370452  BL      sub_353348
//   00370456  MOVS    R1, R4
//   00370458  STR     R5, [SP,#arg_0]
//   0037045A  LDR     R0, [SP,#arg_F4]
//   0037045C  LDR     R2, [SP,#arg_F0]
//   0037045E  LDR     R3, [SP,#arg_FC]
//   00370460  BL      sub_35A902
//   00370464  LDR     R0, [SP,#arg_F4]
//   00370466  MOVS    R1, #0x6B ; 'k'
//   00370468  BL      sub_34E458
//   0037046C  B       sub_37011A

//======================================================================
// sub_37046E
// address: 0x0037046E   size: 0x12 (18 bytes)
//======================================================================
void sub_37046E()
{
  int v0; // r5

  if ( v0 != 0 )
    JUMPOUT(0x370352);
  JUMPOUT(0x3703B6);
}


//======================================================================
// sub_370488
// address: 0x00370488   size: 0x102 (258 bytes)
//======================================================================
int __fastcall sub_370488(int *a1, int a2, unsigned __int8 *a3)
{
  int v4; // r1
  int v6; // r0
  __int16 v7; // r3
  _DWORD *v8; // r0
  int v9; // r0
  int *v11; // [sp+D8h] [bp-DCh]
  int v12; // [sp+E0h] [bp-D4h]
  int v13; // [sp+E8h] [bp-CCh]
  _DWORD *v14; // [sp+ECh] [bp-C8h]
  _BYTE v16[48]; // [sp+180h] [bp-34h] BYREF

  v4 = a1[118];
  v6 = v4 + 1;
  a1[118] = v4 + 1;
  a1[117] = v4;
  v12 = *a1;
  if ( a2 != 0 )
    goto LABEL_3;
  while ( 1 )
  {
    v6 = sub_372262(v6);
LABEL_3:
    if ( *(_BYTE *)(v12 + 64) == 0 && a1[17] == 0 )
    {
      v6 = sub_360F08((int)a1);
      if ( v6 == 0 )
        break;
    }
  }
  j_memset(v16, 0, sizeof(v16));
  if ( *a3 <= 4u )
  {
    sub_3551E8((_DWORD *)v12, *(_DWORD **)(a2 + 56));
    v7 = *(_WORD *)(a2 + 6);
    *(_DWORD *)(a2 + 56) = 0;
    *(_WORD *)(a2 + 6) = v7 & 0xFFFE;
  }
  v8 = sub_3530DC(a1, a2, 0);
  v14 = *(_DWORD **)(a2 + 40);
  v11 = *(int **)a2;
  if ( a1[17] != 0 )
    v8 = (_DWORD *)sub_37215A(v8);
  if ( *(_BYTE *)(v12 + 64) != 0 )
    sub_37215C(v8);
  if ( sub_35A956((int)a1) == nullptr )
    sub_37215C(0);
  if ( *v11 <= 1 || (unsigned int)*a3 - 6 > 1 )
    JUMPOUT(0x37058E);
  v9 = sub_360E94(a1, (int)"only a single result allowed for a SELECT that is part of an expression");
  sub_37215C(v9);
  if ( v13 >= *v14 )
    JUMPOUT(0x370A6C);
  if ( v14[18 * v13 + 7] != 0 )
    JUMPOUT(0x370598);
  return sub_37058A();
}


//======================================================================
// sub_37058A
// address: 0x0037058A   size: 0x10B8 (4280 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037058A  LDR     R5, [SP,#arg_E8]
//   0037058C  ADDS    R5, #1
//   0037058E  LDR     R4, [R6,#0x3C]
//   00370590  STR     R5, [SP,#arg_E8]
//   00370592  CMP     R4, #0
//   00370594  BEQ     loc_370568
//   00370596  B       loc_370A6C
//   00370598  LDR     R3, [R4,#0x18]; int
//   0037059A  CMP     R3, #0
//   0037059C  BEQ     loc_3705B2
//   0037059E  ADDS    R2, R4, #6
//   003705A0  LDRB    R2, [R2,#0x1F]; int
//   003705A2  LSLS    R0, R2, #0x1D; int
//   003705A4  BMI     sub_37058A
//   003705A6  LDR     R2, [R4,#0x1C]
//   003705A8  LDR     R0, [SP,#arg_C8]
//   003705AA  MOVS    R1, #0x11
//   003705AC  BL      sub_35AAF0
//   003705B0  B       sub_37058A
//   003705B2  MOVS    R1, #0x1D0
//   003705B6  LDR     R5, [R7,R1]
//   003705B8  MOVS    R0, R6
//   003705BA  ADD     R1, SP, #arg_160
//   003705BC  STR     R3, [SP,#arg_160]
//   003705BE  BL      sub_34E8FA
//   003705C2  LDR     R2, [SP,#arg_160]
//   003705C4  MOVS    R3, #0x1D0
//   003705C8  ADDS    R5, R5, R2
//   003705CA  STR     R5, [R7,R3]
//   003705CC  LDR     R5, [SP,#arg_CC]
//   003705CE  MOVS    R0, #0x1F0
//   003705D2  LDRH    R2, [R5,#6]
//   003705D4  LDR     R5, [R7]
//   003705D6  LDR     R0, [R7,R0]
//   003705D8  MOVS    R3, #1
//   003705DA  LDRH    R1, [R5,#0x3C]
//   003705DC  STR     R0, [SP,#arg_FC]
//   003705DE  STR     R5, [SP,#arg_C0]
//   003705E0  TST     R1, R3
//   003705E2  BEQ     loc_3705E8
//   003705E4  BL      sub_3720C6
//   003705E8  LDR     R0, [SP,#arg_D4]
//   003705EA  LDR     R5, [R6,#0x28]
//   003705EC  LDR     R1, [SP,#arg_F0]
//   003705EE  LSRS    R2, R2, #2
//   003705F0  STR     R5, [SP,#arg_E4]
//   003705F2  ADDS    R5, R5, R0
//   003705F4  STR     R5, [SP,#arg_D4]
//   003705F6  LDR     R0, [SP,#arg_D4]
//   003705F8  LDR     R5, [R5,#0x28]
//   003705FA  ANDS    R2, R3
//   003705FC  STR     R2, [SP,#arg_F8]
//   003705FE  STR     R5, [SP,#arg_F4]
//   00370600  LDR     R5, [R0,#0x14]
//   00370602  CMP     R1, #0
//   00370604  BEQ     loc_37060E
//   00370606  CMP     R2, #0
//   00370608  BEQ     loc_370620
//   0037060A  BL      sub_3720C6
//   0037060E  LDR     R2, [SP,#arg_F8]
//   00370610  CMP     R2, #0
//   00370612  BEQ     loc_370620
//   00370614  LDR     R3, [SP,#arg_E4]
//   00370616  LDR     R3, [R3]
//   00370618  CMP     R3, #1
//   0037061A  BLE     loc_370620
//   0037061C  BL      sub_3720C6
//   00370620  LDR     R3, [R5,#0x44]
//   00370622  LDR     R2, [R5,#0x28]
//   00370624  CMP     R3, #0
//   00370626  BEQ     loc_370632
//   00370628  LDR     R0, [R6,#0x44]
//   0037062A  CMP     R0, #0
//   0037062C  BEQ     loc_370632
//   0037062E  BL      sub_3720C6
//   00370632  LDR     R1, [R5,#0x48]
//   00370634  CMP     R1, #0
//   00370636  BEQ     loc_37063C
//   00370638  BL      sub_3720C6
//   0037063C  LDRH    R0, [R6,#6]
//   0037063E  STR     R0, [SP,#arg_DC]
//   00370640  LSLS    R0, R0, #0x13
//   00370642  BPL     loc_37064C
//   00370644  CMP     R3, #0
//   00370646  BEQ     loc_37064C
//   00370648  BL      sub_3720C6
//   0037064C  LDR     R2, [R2]
//   0037064E  CMP     R2, #0
//   00370650  BNE     loc_370656
//   00370652  BL      sub_3720C6
//   00370656  LDRH    R1, [R5,#6]
//   00370658  MOV     R12, R1
//   0037065A  LSLS    R1, R1, #0x1F
//   0037065C  BPL     loc_370662
//   0037065E  BL      sub_3720C6
//   00370662  CMP     R3, #0
//   00370664  BEQ     loc_37067C
//   00370666  LDR     R2, [SP,#arg_E4]
//   00370668  LDR     R2, [R2]
//   0037066A  CMP     R2, #1
//   0037066C  BLE     loc_370672
//   0037066E  BL      sub_3720C6
//   00370672  LDR     R0, [SP,#arg_F0]
//   00370674  CMP     R0, #0
//   00370676  BEQ     loc_37067C
//   00370678  BL      sub_3720C6
//   0037067C  LDR     R2, [SP,#arg_DC]
//   0037067E  MOVS    R1, #1
//   00370680  ANDS    R1, R2
//   00370682  BEQ     loc_37068E
//   00370684  LDR     R0, [SP,#arg_F8]
//   00370686  CMP     R0, #0
//   00370688  BEQ     loc_37068E
//   0037068A  BL      sub_3720C6
//   0037068E  LDR     R2, [R6,#0x38]
//   00370690  CMP     R2, #0
//   00370692  BEQ     loc_37069E
//   00370694  LDR     R0, [R5,#0x38]
//   00370696  CMP     R0, #0
//   00370698  BEQ     loc_37069E
//   0037069A  BL      sub_3720C6
//   0037069E  LDR     R0, [SP,#arg_F0]
//   003706A0  CMP     R0, #0
//   003706A2  BEQ     loc_3706AE
//   003706A4  LDR     R0, [R5,#0x38]
//   003706A6  CMP     R0, #0
//   003706A8  BEQ     loc_3706AE
//   003706AA  BL      sub_3720C6
//   003706AE  CMP     R3, #0
//   003706B0  BEQ     loc_3706C4
//   003706B2  LDR     R3, [R6,#0x2C]
//   003706B4  CMP     R3, #0
//   003706B6  BEQ     loc_3706BC
//   003706B8  BL      sub_3720C6
//   003706BC  CMP     R1, #0
//   003706BE  BEQ     loc_3706C4
//   003706C0  BL      sub_3720C6
//   003706C4  MOVS    R3, #0x800
//   003706C8  MOV     R0, R12
//   003706CA  TST     R0, R3
//   003706CC  BEQ     loc_3706D2
//   003706CE  BL      sub_3720C6
//   003706D2  LDR     R0, [SP,#arg_DC]
//   003706D4  TST     R0, R3
//   003706D6  BEQ     loc_3706E2
//   003706D8  LDR     R3, [R5,#0x3C]
//   003706DA  CMP     R3, #0
//   003706DC  BEQ     loc_3706E2
//   003706DE  BL      sub_3720C6
//   003706E2  LDR     R3, [SP,#arg_D4]
//   003706E4  ADDS    R3, #5
//   003706E6  LDRB    R3, [R3,#0x1F]
//   003706E8  LSLS    R0, R3, #0x1A
//   003706EA  BPL     loc_3706F0
//   003706EC  BL      sub_3720C6
//   003706F0  LDR     R3, [R5,#0x3C]
//   003706F2  CMP     R3, #0
//   003706F4  BEQ     loc_37078E
//   003706F6  LDR     R0, [R5,#0x38]
//   003706F8  CMP     R0, #0
//   003706FA  BEQ     loc_370700
//   003706FC  BL      sub_3720C6
//   00370700  LDR     R3, [SP,#arg_F0]
//   00370702  CMP     R3, #0
//   00370704  BEQ     loc_37070A
//   00370706  BL      sub_3720C6
//   0037070A  CMP     R1, #0
//   0037070C  BEQ     loc_370712
//   0037070E  BL      sub_3720C6
//   00370712  LDR     R0, [SP,#arg_E4]
//   00370714  LDR     R0, [R0]
//   00370716  CMP     R0, #1
//   00370718  BEQ     loc_37071E
//   0037071A  BL      sub_3720C6
//   0037071E  MOVS    R1, #5
//   00370720  MOVS    R3, R5
//   00370722  MOV     R12, R1
//   00370724  LDRH    R1, [R3,#6]
//   00370726  MOV     R0, R12
//   00370728  TST     R1, R0
//   0037072A  BEQ     loc_370730
//   0037072C  BL      sub_3720C6
//   00370730  LDR     R1, [R3,#0x3C]
//   00370732  CMP     R1, #0
//   00370734  BEQ     loc_370740
//   00370736  LDRB    R0, [R3,#4]
//   00370738  CMP     R0, #0x74 ; 't'
//   0037073A  BEQ     loc_370740
//   0037073C  BL      sub_3720C6
//   00370740  LDR     R0, [R3,#0x28]
//   00370742  LDR     R0, [R0]
//   00370744  CMP     R0, #0
//   00370746  BGT     loc_37074C
//   00370748  BL      sub_3720C6
//   0037074C  LDR     R0, [R5]
//   0037074E  LDR     R3, [R3]
//   00370750  LDR     R0, [R0]
//   00370752  LDR     R3, [R3]
//   00370754  CMP     R0, R3
//   00370756  BEQ     loc_37075C

//======================================================================
// sub_371642
// address: 0x00371642   size: 0xAC (172 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00371642  LDRB    R1, [R6,#4]
//   00371644  MOVS    R0, R7
//   00371646  MOVS    R3, R1
//   00371648  SUBS    R3, #0x74 ; 't'
//   0037164A  SUBS    R2, R3, #1
//   0037164C  SBCS    R3, R2
//   0037164E  STR     R3, [SP,#arg_0]
//   00371650  LDR     R2, [SP,#arg_E8]
//   00371652  LDR     R3, [SP,#arg_D4]
//   00371654  BL      sub_36617C
//   00371658  LDRH    R3, [R6,#6]
//   0037165A  LSLS    R5, R3, #0x1C
//   0037165C  BPL     loc_3716F0
//   0037165E  LDR     R3, [R6]
//   00371660  LDR     R0, [SP,#arg_E0]
//   00371662  MOVS    R2, #1
//   00371664  LDR     R3, [R3]
//   00371666  MOVS    R1, R3
//   00371668  STR     R3, [SP,#arg_D4]
//   0037166A  BL      sub_3518F8
//   0037166E  SUBS    R4, R0, #0
//   00371670  BEQ     loc_3716EC
//   00371672  MOVS    R5, R0
//   00371674  MOVS    R0, #0
//   00371676  ADDS    R5, #0x14
//   00371678  STR     R0, [SP,#arg_D0]
//   0037167A  LDR     R3, [SP,#arg_D0]
//   0037167C  LDR     R0, [SP,#arg_D4]
//   0037167E  CMP     R3, R0
//   00371680  BGE     loc_3716A2
//   00371682  MOVS    R0, R7
//   00371684  MOVS    R1, R6
//   00371686  LDR     R2, [SP,#arg_D0]
//   00371688  BL      sub_363162
//   0037168C  STR     R0, [R5]
//   0037168E  CMP     R0, #0
//   00371690  BNE     loc_371698
//   00371692  LDR     R1, [SP,#arg_E0]
//   00371694  LDR     R1, [R1,#8]
//   00371696  STR     R1, [R5]
//   00371698  LDR     R2, [SP,#arg_D0]
//   0037169A  ADDS    R5, #4
//   0037169C  ADDS    R2, #1
//   0037169E  STR     R2, [SP,#arg_D0]
//   003716A0  B       loc_37167A
//   003716A2  MOVS    R5, #0
//   003716A4  ADDS    R1, R6, R5
//   003716A6  LDR     R2, [R1,#0x10]
//   003716A8  STR     R1, [SP,#arg_CC]
//   003716AA  STR     R2, [SP,#arg_D0]
//   003716AC  CMP     R2, #0
//   003716AE  BGE     loc_3716BE
//   003716B0  LDR     R6, [R6,#0x3C]
//   003716B2  CMP     R6, #0
//   003716B4  BNE     loc_3716A2
//   003716B6  MOVS    R0, R4
//   003716B8  BL      sub_354E0C
//   003716BC  B       loc_3716F0
//   003716BE  LDR     R0, [SP,#arg_C8]
//   003716C0  LDR     R1, [SP,#arg_D0]
//   003716C2  LDR     R2, [SP,#arg_D4]
//   003716C4  BL      sub_34E444
//   003716C8  LDR     R3, [R4]
//   003716CA  LDR     R0, [SP,#arg_C8]
//   003716CC  LDR     R1, [SP,#arg_D0]
//   003716CE  ADDS    R3, #1
//   003716D0  STR     R3, [R4]
//   003716D2  MOVS    R3, #6
//   003716D4  NEGS    R3, R3
//   003716D6  MOVS    R2, R4
//   003716D8  BL      sub_355AEA
//   003716DC  LDR     R0, [SP,#arg_CC]
//   003716DE  MOVS    R3, #1
//   003716E0  NEGS    R3, R3
//   003716E2  ADDS    R5, #4
//   003716E4  STR     R3, [R0,#0x10]
//   003716E6  CMP     R5, #8
//   003716E8  BNE     loc_3716A4
//   003716EA  B       loc_3716B0
//   003716EC  MOVS    R5, #7

//======================================================================
// sub_3716EE
// address: 0x003716EE   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3716EE(
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
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        _DWORD *a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        _DWORD *a61)
{
  int v61; // r7
  unsigned int v62; // r5
  unsigned int v63; // r3
  int v64; // r0

  v62 = STACK[0x100];
  v63 = STACK[0x144];
  *(_DWORD *)(v62 + 8) = STACK[0x140];
  *(_DWORD *)(v62 + 12) = v63;
  sub_355184(a61, a53);
  *(_DWORD *)(v61 + 468) = STACK[0x124];
  v64 = sub_372262(468);
  return sub_37170E(v64);
}


//======================================================================
// sub_37170E
// address: 0x0037170E   size: 0x9B8 (2488 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037170E  MOVS    R2, #1
//   00371710  LDR     R0, [SP,#arg_C0]
//   00371712  LDR     R1, [SP,#arg_D0]
//   00371714  NEGS    R2, R2
//   00371716  BL      sub_13A7DE
//   0037171A  CMP     R0, #0
//   0037171C  BNE     loc_37172C
//   0037171E  LDR     R0, [SP,#arg_E0]
//   00371720  LDR     R1, [SP,#arg_D0]
//   00371722  LDRH    R3, [R0,#0x3C]
//   00371724  LSLS    R3, R3, #0x1D
//   00371726  ASRS    R3, R3, #0x1F
//   00371728  ANDS    R1, R3
//   0037172A  STR     R1, [SP,#arg_D0]
//   0037172C  MOVS    R3, #5
//   0037172E  ANDS    R3, R5
//   00371730  STR     R3, [SP,#arg_C4]
//   00371732  CMP     R3, #1
//   00371734  BNE     loc_37175E
//   00371736  MOVS    R2, #1
//   00371738  LDR     R0, [SP,#arg_D0]
//   0037173A  LDR     R1, [SP,#arg_D8]
//   0037173C  NEGS    R2, R2
//   0037173E  BL      sub_13A7DE
//   00371742  SUBS    R4, R0, #0
//   00371744  BNE     loc_37175E
//   00371746  LDR     R2, [SP,#arg_C4]
//   00371748  LDR     R0, [SP,#arg_E0]
//   0037174A  LDR     R1, [SP,#arg_D8]
//   0037174C  BICS    R5, R2
//   0037174E  STRH    R5, [R6,#6]
//   00371750  MOVS    R2, R4
//   00371752  BL      sub_3568C6
//   00371756  STR     R4, [SP,#arg_D0]
//   00371758  STR     R0, [SP,#arg_C0]
//   0037175A  STR     R0, [R6,#0x30]
//   0037175C  B       loc_371794
//   0037175E  LDR     R5, [SP,#arg_D0]
//   00371760  CMP     R5, #0
//   00371762  BEQ     loc_371794
//   00371764  MOVS    R1, R5
//   00371766  MOVS    R0, R7
//   00371768  BL      sub_13AE3A
//   0037176C  LDR     R2, [R7,#0x48]
//   0037176E  ADDS    R3, R2, #1
//   00371770  STR     R3, [R7,#0x48]
//   00371772  LDR     R1, [R5]
//   00371774  STR     R2, [R5,#4]
//   00371776  STR     R0, [SP,#arg_4]
//   00371778  MOVS    R3, R1
//   0037177A  MOVS    R1, #0
//   0037177C  STR     R1, [SP,#arg_0]
//   0037177E  MOVS    R1, #6
//   00371780  NEGS    R1, R1
//   00371782  STR     R1, [SP,#arg_8]
//   00371784  ADDS    R3, #2
//   00371786  LDR     R0, [SP,#arg_C8]
//   00371788  MOVS    R1, #0x37 ; '7'
//   0037178A  BL      sub_35A9FC
//   0037178E  MOVS    R5, R0
//   00371790  STR     R0, [R6,#0x18]
//   00371792  B       loc_371798
//   00371794  MOVS    R3, #1
//   00371796  NEGS    R5, R3
//   00371798  LDR     R2, [SP,#arg_100]
//   0037179A  LDRB    R3, [R2]
//   0037179C  CMP     R3, #8
//   0037179E  BNE     loc_3717B6
//   003717A0  LDR     R0, [SP,#arg_D8]
//   003717A2  LDR     R3, [R2,#4]
//   003717A4  MOVS    R1, #0x37 ; '7'
//   003717A6  LDR     R0, [R0]
//   003717A8  STR     R3, [SP,#arg_48]
//   003717AA  MOVS    R2, R3
//   003717AC  STR     R0, [SP,#arg_44]
//   003717AE  LDR     R3, [SP,#arg_44]
//   003717B0  LDR     R0, [SP,#arg_C8]
//   003717B2  BL      sub_35AAF0
//   003717B6  LDR     R1, [SP,#arg_C8]
//   003717B8  LDR     R1, [R1,#0x18]
//   003717BA  MOVS    R0, R1
//   003717BC  STR     R1, [SP,#arg_40]
//   003717BE  BL      sub_35A856
//   003717C2  LDR     R3, =0x7FFFFFFF
//   003717C4  LDR     R2, =0xFFFFFFFF
//   003717C6  STR     R0, [SP,#arg_11C]
//   003717C8  STR     R2, [R6,#0x20]
//   003717CA  STR     R3, [R6,#0x24]
//   003717CC  MOVS    R0, R7
//   003717CE  LDR     R2, [SP,#arg_11C]
//   003717D0  MOVS    R1, R6
//   003717D2  BL      sub_372F90
//   003717D6  LDR     R2, [R6,#8]
//   003717D8  CMP     R2, #0
//   003717DA  BNE     loc_3717F4
//   003717DC  CMP     R5, #0
//   003717DE  BLT     loc_3717F4
//   003717E0  LDR     R0, [SP,#arg_C8]
//   003717E2  MOVS    R1, R5
//   003717E4  BL      sub_34E484
//   003717E8  MOVS    R3, #0x38 ; '8'
//   003717EA  STRB    R3, [R0]
//   003717EC  LDRH    R3, [R6,#6]
//   003717EE  MOVS    R2, #0x40 ; '@'
//   003717F0  ORRS    R3, R2
//   003717F2  STRH    R3, [R6,#6]
//   003717F4  LDRH    R2, [R6,#6]
//   003717F6  MOVS    R3, #1
//   003717F8  ADD     R4, SP, #arg_12C
//   003717FA  ANDS    R3, R2
//   003717FC  BEQ     loc_371834
//   003717FE  LDR     R3, [R7,#0x48]
//   00371800  STR     R3, [SP,#arg_C4]
//   00371802  LDR     R0, [SP,#arg_C4]
//   00371804  ADDS    R3, #1
//   00371806  STR     R3, [R7,#0x48]
//   00371808  STR     R0, [R4,#4]
//   0037180A  LDR     R1, [R6]
//   0037180C  MOVS    R0, R7
//   0037180E  BL      sub_13AE3A
//   00371812  MOVS    R2, #6
//   00371814  MOVS    R3, #0
//   00371816  NEGS    R2, R2
//   00371818  STR     R3, [SP,#arg_0]
//   0037181A  STR     R0, [SP,#arg_4]
//   0037181C  STR     R2, [SP,#arg_8]
//   0037181E  MOVS    R1, #0x37 ; '7'
//   00371820  LDR     R2, [SP,#arg_C4]
//   00371822  LDR     R0, [SP,#arg_C8]
//   00371824  BL      sub_35A9FC
//   00371828  MOVS    R1, #8
//   0037182A  STR     R0, [R4,#8]
//   0037182C  LDR     R0, [SP,#arg_C8]
//   0037182E  BL      sub_34E458
//   00371832  MOVS    R3, #3
//   00371834  LDR     R1, [SP,#arg_F0]
//   00371836  STRB    R3, [R4,#1]
//   00371838  CMP     R1, #0
//   0037183A  BNE     loc_3718E6
//   0037183C  LDR     R2, [SP,#arg_C0]
//   0037183E  CMP     R2, #0
//   00371840  BNE     loc_3718EC
//   00371842  ADD     R3, SP, #arg_12C
//   00371844  LDRB    R3, [R3]
//   00371846  LDR     R0, [R6]
//   00371848  LDR     R1, [SP,#arg_C0]
//   0037184A  SUBS    R2, R3, #1
//   0037184C  SBCS    R3, R2
//   0037184E  LSLS    R3, R3, #0xA
//   00371850  STR     R0, [SP,#arg_0]
//   00371852  STR     R3, [SP,#arg_4]
//   00371854  STR     R1, [SP,#arg_8]
//   00371856  MOVS    R0, R7
//   00371858  LDR     R1, [SP,#arg_EC]
//   0037185A  LDR     R2, [SP,#arg_F4]
//   0037185C  LDR     R3, [SP,#arg_D0]
//   0037185E  BL      sub_36EAB8
//   00371862  SUBS    R4, R0, #0
//   00371864  BNE     loc_37186A
//   00371866  BL      sub_37215A
//   0037186A  MOVS    R2, #0x20 ; ' '
//   0037186C  LDRSH   R0, [R0,R2]
//   0037186E  BL      sub_352650
//   00371872  LDR     R3, [R6,#0x24]
//   00371874  CMP     R3, R1
//   00371876  BHI     loc_371880
//   00371878  BNE     loc_371884
//   0037187A  LDR     R3, [R6,#0x20]
//   0037187C  CMP     R3, R0
//   0037187E  BLS     loc_371884
//   00371880  STR     R0, [R6,#0x20]
//   00371882  STR     R1, [R6,#0x24]
//   00371884  ADD     R3, SP, #arg_12C
//   00371886  LDRB    R2, [R3]
//   00371888  CMP     R2, #0
//   0037188A  BEQ     loc_371898
//   0037188C  MOVS    R2, R4
//   0037188E  ADDS    R2, #8
//   00371890  LDRB    R2, [R2,#0x1F]
//   00371892  CMP     R2, #0
//   00371894  BEQ     loc_371898
//   00371896  STRB    R2, [R3,#1]
//   00371898  LDR     R0, [SP,#arg_D0]
//   0037189A  CMP     R0, #0
//   0037189C  BEQ     loc_3718A6
//   0037189E  ADDS    R3, R4, #5
//   003718A0  LDRB    R3, [R3,#0x1F]
//   003718A2  CMP     R3, #0
//   003718A4  BEQ     loc_3718BC
//   003718A6  CMP     R5, #0
//   003718A8  BLT     loc_3718B8
//   003718AA  LDR     R0, [SP,#arg_C8]
//   003718AC  MOVS    R1, R5
//   003718AE  BL      sub_355A84
//   003718B2  MOVS    R3, #1
//   003718B4  NEGS    R3, R3
//   003718B6  STR     R3, [R6,#0x18]
//   003718B8  MOVS    R5, #0
//   003718BA  STR     R5, [SP,#arg_D0]
//   003718BC  LDR     R5, [SP,#arg_D0]

//======================================================================
// sub_3720C6
// address: 0x003720C6   size: 0x94 (148 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003720C6  LDR     R0, [SP,#arg_EC]
//   003720C8  LDR     R3, [R7,#0x4C]
//   003720CA  LDR     R0, [R0]
//   003720CC  CMP     R0, #1
//   003720CE  BEQ     loc_3720D2
//   003720D0  B       loc_3721DC
//   003720D2  LDR     R5, [SP,#arg_E0]
//   003720D4  LDRH    R2, [R5,#0x3C]
//   003720D6  MOVS    R5, #0x100
//   003720DA  ANDS    R2, R5
//   003720DC  STR     R2, [SP,#arg_C0]; int
//   003720DE  BNE     loc_3721DC
//   003720E0  LDR     R5, [SP,#arg_C8]
//   003720E2  ADDS    R2, R3, #1
//   003720E4  MOVS    R1, #0x14
//   003720E6  LDR     R5, [R5,#0x20]
//   003720E8  LDR     R3, [SP,#arg_C0]
//   003720EA  STR     R2, [R7,#0x4C]
//   003720EC  STR     R5, [SP,#arg_D4]; int
//   003720EE  ADDS    R5, #1
//   003720F0  STR     R2, [R4,#0x1C]
//   003720F2  LDR     R0, [SP,#arg_C8]
//   003720F4  STR     R5, [SP,#arg_0]; int
//   003720F6  BL      sub_35A902
//   003720FA  MOVS    R1, #0xEC
//   003720FC  STR     R5, [R4,#0x18]
//   003720FE  LDR     R3, [R4,#0x1C]
//   00372100  LSLS    R1, R1, #1
//   00372102  LDR     R0, [SP,#arg_C0]
//   00372104  LDR     R1, [R7,R1]
//   00372106  ADD     R5, SP, #arg_160
//   00372108  STR     R3, [SP,#arg_164]; int
//   0037210A  MOVS    R2, #9
//   0037210C  ADDS    R3, R4, #7
//   0037210E  STRB    R2, [R5]
//   00372110  STRB    R0, [R5,#1]
//   00372112  STR     R0, [SP,#arg_168]; int
//   00372114  STR     R0, [SP,#arg_16C]; int
//   00372116  MOVS    R2, R5
//   00372118  STRB    R1, [R3,#0x1F]
//   0037211A  MOVS    R0, R7
//   0037211C  LDR     R1, [SP,#arg_CC]
//   0037211E  BL      sub_370488
//   00372122  LDR     R0, [SP,#arg_CC]
//   00372124  LDR     R3, [R4,#0x10]
//   00372126  MOVS    R1, #4
//   00372128  LDR     R2, [R0,#0x20]
//   0037212A  LDR     R0, [SP,#arg_C8]
//   0037212C  STR     R2, [R3,#0x1C]
//   0037212E  ADDS    R3, R4, #6
//   00372130  LDRB    R2, [R3,#0x1F]
//   00372132  ORRS    R2, R1
//   00372134  STRB    R2, [R3,#0x1F]
//   00372136  LDR     R5, [R5,#8]
//   00372138  LDR     R2, [R4,#0x1C]
//   0037213A  MOVS    R1, #0x15
//   0037213C  STR     R5, [R4,#0x20]
//   0037213E  BL      sub_35AACE
//   00372142  LDR     R0, [SP,#arg_C8]
//   00372144  LDR     R1, [SP,#arg_D4]
//   00372146  BL      sub_34E46E
//   0037214A  LDR     R5, [SP,#arg_C0]
//   0037214C  STRB    R5, [R7,#0x13]
//   0037214E  STR     R5, [R7,#0x3C]
//   00372150  LDR     R3, [SP,#arg_E0]
//   00372152  ADDS    R3, #0x40 ; '@'
//   00372154  LDRB    R3, [R3]
//   00372156  CMP     R3, #0
//   00372158  BEQ     loc_3721AA

//======================================================================
// sub_37215A
// address: 0x0037215A   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_37215A(int a1)
{
  return sub_37215C(a1);
}


//======================================================================
// sub_37215C
// address: 0x0037215C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_37215C(
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
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int *a59,
        int a60,
        _DWORD *a61,
        int a62,
        int a63,
        int *a64)
{
  int v64; // r4
  int v65; // r7
  _DWORD *v66; // r0

  *(_DWORD *)(v65 + 468) = STACK[0x124];
  if ( v64 == 0 && *(_BYTE *)STACK[0x100] == 5 )
    sub_36598C(v65, a64, a59);
  sub_354940(a61, (_DWORD *)STACK[0x19C]);
  v66 = sub_354940(a61, (_DWORD *)STACK[0x1A8]);
  return sub_372262(v66);
}


//======================================================================
// sub_372190
// address: 0x00372190   size: 0x1A (26 bytes)
//======================================================================
void __fastcall sub_372190(
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
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64)
{
  int a67; // [sp+F8h] [bp+F8h]
  int v67; // r6

  if ( a67 != 0 )
    *(_WORD *)(v67 + 6) |= 4u;
  JUMPOUT(0x372150);
}


//======================================================================
// sub_372262
// address: 0x00372262   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_372262(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_372288
// address: 0x00372288   size: 0x2D8 (728 bytes)
//======================================================================
int *__fastcall sub_372288(_DWORD **a1, unsigned __int8 *a2, int a3, int a4)
{
  int *result; // r0
  int *v8; // r7
  const char *v9; // r2
  const char *v10; // r3
  _DWORD *v11; // r0
  char v12; // r0
  int v13; // r2
  int v14; // r3
  int *v15; // r6
  int v16; // r2
  _DWORD *v17; // r6
  int v18; // r0
  int v19; // r6
  int v20; // r5
  _DWORD *v21; // r3
  int v22; // r3
  int v23; // r1
  int *v24; // r0
  char v25; // r1
  _DWORD *v26; // [sp+18h] [bp-3Ch]
  _DWORD *v27; // [sp+18h] [bp-3Ch]
  int v28; // [sp+18h] [bp-3Ch]
  int v29; // [sp+1Ch] [bp-38h]
  int v30; // [sp+20h] [bp-34h]
  int v31; // [sp+24h] [bp-30h]
  _DWORD **v32; // [sp+28h] [bp-2Ch]
  int v34; // [sp+30h] [bp-24h]
  int v35; // [sp+34h] [bp-20h]
  char v36; // [sp+3Bh] [bp-19h] BYREF
  int v37; // [sp+3Ch] [bp-18h] BYREF
  int v38; // [sp+40h] [bp-14h]
  int v39; // [sp+44h] [bp-10h]
  int v40; // [sp+48h] [bp-Ch]

  result = sub_35A956((int)a1);
  v8 = result;
  if ( result != nullptr )
  {
    a1[26] = (_DWORD *)((char *)a1[26] + 1);
    if ( (*((_DWORD *)a2 + 1) & 0x20) != 0 )
      v30 = -1;
    else
      v30 = sub_35AADA((int)a1);
    if ( *((_BYTE *)a1 + 454) == 2 )
    {
      if ( v30 < 0 )
        v9 = "CORRELATED ";
      else
        v9 = (const char *)&unk_3FB8EA;
      if ( *a2 == 75 )
        v10 = "LIST";
      else
        v10 = "SCALAR";
      v11 = (_DWORD *)sub_36541C((int)*a1, "EXECUTE %s%s SUBQUERY %d", v9, v10, a1[118]);
      sub_35A9FC(v8, 156, (int)a1[117], 0, 0, v11, -1);
    }
    if ( *a2 != 75 )
    {
      v28 = *((_DWORD *)a2 + 5);
      v21 = a1[19];
      BYTE1(v37) = 0;
      v39 = 0;
      v22 = (int)v21 + 1;
      a1[19] = (_DWORD *)v22;
      v23 = *a2;
      v38 = v22;
      v40 = 0;
      if ( v23 == 119 )
      {
        LOBYTE(v37) = 6;
        v24 = v8;
        v25 = 28;
      }
      else
      {
        LOBYTE(v37) = 3;
        v24 = v8;
        v25 = 25;
      }
      sub_35AAF0(v24, v25, 0, v22);
      v20 = 0;
      sub_35519A(*a1, *(_DWORD *)(v28 + 68));
      *(_DWORD *)(v28 + 68) = sub_361286((int *)a1, 132, nullptr, nullptr, (unsigned __int8 **)&off_45471C);
      *(_DWORD *)(v28 + 8) = 0;
      if ( sub_370488((int *)a1, v28, (unsigned __int8 *)&v37) != 0 )
        return (int *)v20;
      v20 = v38;
LABEL_48:
      if ( v30 >= 0 )
        sub_34E46E((int)v8, v30);
      sub_354640((int)a1);
      return (int *)v20;
    }
    v26 = *((_DWORD **)a2 + 3);
    if ( a3 != 0 )
      sub_35AAF0(v8, 28, 0, a3);
    v12 = sub_34ED2C(v26);
    v13 = (int)a1[18];
    v36 = v12;
    a1[18] = (_DWORD *)(v13 + 1);
    *((_DWORD *)a2 + 7) = v13;
    v35 = sub_35AAF0(v8, 55, v13, a4 == 0);
    v27 = nullptr;
    if ( a4 == 0 )
      v27 = sub_3518F8((int)*a1, 1, 1);
    if ( (*((_DWORD *)a2 + 1) & 0x800) != 0 )
    {
      LOBYTE(v37) = 7;
      v14 = *((_DWORD *)a2 + 7);
      v39 = 0;
      v38 = v14;
      v40 = 0;
      BYTE1(v37) = v36;
      *(_DWORD *)(*((_DWORD *)a2 + 5) + 8) = 0;
      if ( sub_370488((int *)a1, *((_DWORD *)a2 + 5), (unsigned __int8 *)&v37) != 0 )
      {
        sub_354E0C(v27);
        return nullptr;
      }
      v27[5] = sub_362692((int *)a1, *((_DWORD *)a2 + 3), **(_DWORD **)(**((_DWORD **)a2 + 5) + 8));
    }
    else
    {
      v15 = *((int **)a2 + 5);
      if ( v15 != nullptr )
      {
        if ( v36 == 0 )
          v36 = 98;
        if ( v27 != nullptr )
          v27[5] = sub_3625D4((int *)a1, *((unsigned __int8 **)a2 + 3));
        v34 = sub_34EA6E((int)a1);
        v29 = sub_34EA6E((int)a1);
        sub_35AAF0(v8, 28, 0, v29);
        v31 = *v15;
        v32 = (_DWORD **)v15[2];
        while ( v31 > 0 )
        {
          v17 = *v32;
          if ( v30 >= 0 && sub_35304C(*v32, (int (*)(void))((char *)&dword_0 + 1)) == nullptr )
          {
            sub_355A84(v8, v30);
            v30 = -1;
          }
          if ( a4 != 0 && sub_3531E4(v17, &v37, v16) != 0 )
          {
            sub_35A902(v8, 73, *((_DWORD *)a2 + 7), v29, v37);
          }
          else
          {
            v18 = sub_372578(a1, v17, v34);
            v19 = v18;
            if ( a4 != 0 )
            {
              sub_35AAF0(v8, 38, v18, v8[8] + 2);
              sub_35A902(v8, 70, *((_DWORD *)a2 + 7), v29, v19);
            }
            else
            {
              sub_35A9FC(v8, 48, v18, 1, v29, &v36, 1);
              sub_3532D2((int)a1, v19, 1);
              sub_35AAF0(v8, 107, *((_DWORD *)a2 + 7), v29);
            }
          }
          --v31;
          v32 += 5;
        }
        sub_353416((int)a1, v34);
        sub_353416((int)a1, v29);
      }
      if ( v27 == nullptr )
        goto LABEL_42;
    }
    sub_355AEA(v8, v35, v27, -6);
LABEL_42:
    v20 = 0;
    goto LABEL_48;
  }
  return result;
}


//======================================================================
// sub_372578
// address: 0x00372578   size: 0x85A (2138 bytes)
//======================================================================
void __fastcall sub_372578(__int64 a1, unsigned int a2)
{
  int *v2; // r5
  int *v3; // r7
  int v4; // r6
  int v5; // r4
  unsigned int v6; // r6
  int v7; // r7
  int v8; // r0
  int v9; // r2
  int *v10; // r0
  char v11; // r1
  unsigned __int8 *v12; // r6
  int v13; // r4
  int v14; // r3
  int v15; // r1
  signed int v16; // r3
  int v17; // r2
  _BYTE *v18; // r1
  int v19; // r0
  int v20; // r2
  int *v21; // r0
  char v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r6
  char v26; // r0
  char v27; // r4
  int v28; // r7
  int v29; // r0
  int v30; // r2
  int v31; // r3
  int v32; // r6
  int v33; // r2
  int v34; // r0
  int v35; // r0
  unsigned int v36; // r4
  int v37; // r6
  int j; // r4
  int v39; // r3
  int v40; // r3
  unsigned __int8 *v41; // r3
  int v42; // r1
  int v43; // r2
  _DWORD *v44; // r0
  int v45; // r1
  unsigned __int8 *v46; // r3
  int v47; // r6
  int v48; // r0
  int v49; // r1
  int v50; // r4
  int v51; // r6
  _DWORD *v52; // r4
  int v53; // r0
  int v54; // r6
  int v55; // r3
  int v56; // r1
  int v57; // r6
  int v58; // r1
  int v59; // r6
  int v60; // r1
  int v61; // r6
  int v62; // r1
  int v63; // r6
  int v64; // r0
  char **v65; // r4
  int i; // r6
  _DWORD *v67; // r4
  _DWORD *v68; // [sp+4h] [bp-98h]
  signed int v69; // [sp+8h] [bp-94h]
  int *v70; // [sp+10h] [bp-8Ch]
  int v71; // [sp+14h] [bp-88h]
  int v72; // [sp+14h] [bp-88h]
  int v73; // [sp+14h] [bp-88h]
  int *v74; // [sp+14h] [bp-88h]
  unsigned __int8 *v76; // [sp+1Ch] [bp-80h]
  int v77; // [sp+1Ch] [bp-80h]
  int v78; // [sp+1Ch] [bp-80h]
  int v79; // [sp+1Ch] [bp-80h]
  char *v80; // [sp+1Ch] [bp-80h]
  unsigned __int8 v81; // [sp+20h] [bp-7Ch]
  _WORD *v82; // [sp+20h] [bp-7Ch]
  int v83; // [sp+20h] [bp-7Ch]
  _DWORD *v84; // [sp+20h] [bp-7Ch]
  char **v85; // [sp+20h] [bp-7Ch]
  size_t v86; // [sp+24h] [bp-78h]
  int **v87; // [sp+24h] [bp-78h]
  _DWORD *v88; // [sp+24h] [bp-78h]
  int v89; // [sp+24h] [bp-78h]
  int v90; // [sp+28h] [bp-74h]
  int v91; // [sp+28h] [bp-74h]
  int v92; // [sp+28h] [bp-74h]
  int v93; // [sp+2Ch] [bp-70h]
  int v94; // [sp+2Ch] [bp-70h]
  int v95; // [sp+2Ch] [bp-70h]
  int v96; // [sp+30h] [bp-6Ch] BYREF
  int v97; // [sp+34h] [bp-68h] BYREF
  int v98; // [sp+38h] [bp-64h] BYREF
  int v99; // [sp+3Ch] [bp-60h]
  int v100; // [sp+40h] [bp-5Ch]
  int v101; // [sp+44h] [bp-58h]
  int v102; // [sp+48h] [bp-54h]
  int v103; // [sp+4Ch] [bp-50h]
  int v104; // [sp+50h] [bp-4Ch]
  int v105; // [sp+54h] [bp-48h]
  int v106; // [sp+58h] [bp-44h]
  int v107; // [sp+5Ch] [bp-40h]
  int v108; // [sp+60h] [bp-3Ch]
  int v109; // [sp+64h] [bp-38h]
  char v110; // [sp+68h] [bp-34h] BYREF
  int *v111; // [sp+74h] [bp-28h]
  char *v112; // [sp+78h] [bp-24h]

  v2 = (int *)a1;
  v3 = *(int **)(a1 + 8);
  v4 = *(_DWORD *)a1;
  LODWORD(a1) = 0;
  v5 = HIDWORD(a1);
  v96 = 0;
  v97 = 0;
  v90 = v4;
  if ( v3 == nullptr )
    a1 = sub_372DD2();
  if ( HIDWORD(a1) == (_DWORD)a1 )
    goto LABEL_62;
  v6 = (unsigned __int8)*(_BYTE *)HIDWORD(a1);
  if ( v6 <= 0x5E )
  {
    if ( v6 >= 0x55 )
      goto LABEL_71;
    if ( v6 <= 0x48 )
    {
      if ( v6 < 0x47 )
      {
        if ( v6 != 24 )
        {
          if ( v6 <= 0x18 )
          {
            if ( v6 != 19 )
            {
              if ( v6 != 20 )
                goto LABEL_134;
              goto LABEL_130;
            }
            goto LABEL_79;
          }
          if ( v6 != 57 )
          {
            if ( v6 == 62 )
            {
              v54 = *(_DWORD *)(HIDWORD(a1) + 44);
              sub_35AAF0(
                v3,
                128,
                (*(__int16 *)(v54 + 38) + 1) * *(_DWORD *)(HIDWORD(a1) + 28) + 1 + *(__int16 *)(v5 + 32),
                a2);
              v55 = *(__int16 *)(v5 + 32);
              if ( v55 >= 0 && *(_BYTE *)(*(_DWORD *)(v54 + 4) + 24 * v55 + 21) == 101 )
                sub_35AACE(v3, 39, a2);
              goto LABEL_156;
            }
            if ( v6 == 38 )
            {
              v25 = sub_372578(v2, *(_DWORD *)(HIDWORD(a1) + 12), a2);
              v26 = sub_34EC20(*(unsigned __int8 **)(v5 + 8), nullptr);
              v27 = v26 + 46;
              if ( v25 != a2 )
                sub_35AAF0(v3, 34, v25, a2);
              sub_35AACE(v3, v27, a2);
              sub_3532D2((int)v2, a2, 1);
              goto LABEL_156;
            }
            goto LABEL_134;
          }
          if ( v2[104] == 0 )
          {
            sub_360E94(v2, (int)"RAISE() may only be used within a trigger-program");
            goto LABEL_157;
          }
          if ( *(_BYTE *)(HIDWORD(a1) + 1) == 2 )
            sub_34EEF2((int)v2);
          v24 = *(unsigned __int8 *)(v5 + 1);
          v9 = 0;
          v67 = *(_DWORD **)(v5 + 8);
          if ( v24 != 4 )
          {
            sub_35AA7C((int)v2, 1811, v24, v67, 0, 0);
            goto LABEL_156;
          }
          v68 = v67;
          v69 = 0;
          v10 = v3;
          v11 = 24;
LABEL_154:
          sub_35A9FC(v10, v11, v9, v24, 0, v68, v69);
          goto LABEL_156;
        }
        goto LABEL_66;
      }
LABEL_71:
      v71 = sub_3737AE(v2, *(_DWORD *)(v5 + 12), &v96);
      v30 = sub_3737AE(v2, *(_DWORD *)(v5 + 16), &v97);
      sub_35A902(v3, v6, v30, v71, a2);
      goto LABEL_156;
    }
    if ( v6 <= 0x4D )
    {
      if ( v6 >= 0x4C )
      {
        sub_35AAF0(v3, 25, 1, a2);
        v35 = sub_3737AE(v2, *(_DWORD *)(v5 + 12), &v96);
        v36 = sub_35AACE(v3, v6, v35);
        sub_35AAF0(v3, 37, a2, -1);
        sub_34E46E((int)v3, v36);
LABEL_156:
        sub_353416((int)v2, v96);
        sub_353416((int)v2, v97);
LABEL_157:
        JUMPOUT(0x372DD4);
      }
      if ( v6 == 74 )
      {
        v50 = *(_DWORD *)(*(_DWORD *)(HIDWORD(a1) + 20) + 8);
        v84 = *(_DWORD **)(HIDWORD(a1) + 12);
        v88 = *(_DWORD **)v50;
        v94 = sub_3737AE(v2, v84, &v96);
        v91 = sub_3737AE(v2, v88, &v97);
        v79 = sub_34EA6E((int)v2);
        v51 = sub_34EA6E((int)v2);
        sub_363000((int)v2, v84, v88, 83, v94, v91, v79, 16);
        v52 = *(_DWORD **)(v50 + 20);
        sub_353416((int)v2, v97);
        v53 = sub_3737AE(v2, v52, &v97);
        sub_363000((int)v2, v84, v52, 81, v94, v53, v51, 16);
        sub_35A902(v3, 72, v79, v51, a2);
        sub_353416((int)v2, v79);
        sub_353416((int)v2, v51);
        goto LABEL_156;
      }
      if ( v6 > 0x4A )
      {
        v73 = sub_35A856(v3[6]);
        v47 = sub_35A856(v3[6]);
        sub_35AAF0(v3, 28, 0, a2);
        sub_372E1A(v2, v5, v73, v47);
        sub_35AAF0(v3, 25, 1, a2);
        sub_34E412((int)v3, v73);
        sub_35AAF0(v3, 37, a2, 0);
        v48 = (int)v3;
        v49 = v47;
LABEL_147:
        sub_34E412(v48, v49);
        goto LABEL_156;
      }
LABEL_70:
      v28 = sub_3737AE(v2, *(_DWORD *)(v5 + 12), &v96);
      v29 = sub_3737AE(v2, *(_DWORD *)(v5 + 16), &v97);
      sub_363000((int)v2, *(_DWORD **)(v5 + 12), *(_DWORD **)(v5 + 16), 79 - (v6 != 73), v28, v29, a2, 144);
      goto LABEL_156;
    }
    if ( v6 <= 0x53 )
    {
      v7 = sub_3737AE(v2, *(_DWORD *)(HIDWORD(a1) + 12), &v96);
      v8 = sub_3737AE(v2, *(_DWORD *)(v5 + 16), &v97);
      sub_363000((int)v2, *(_DWORD **)(v5 + 12), *(_DWORD **)(v5 + 16), v6, v7, v8, a2, 16);
      goto LABEL_156;
    }
LABEL_134:
    v70 = *(int **)(v5 + 20);
    v85 = (char **)v70[2];
    v89 = *v70;
    v95 = sub_35A856(v3[6]);
    v74 = *(int **)(v5 + 12);
    if ( v74 != nullptr )
    {
      v56 = v74[1];
      v57 = v74[2];
      v98 = *v74;
      v99 = v56;
      v100 = v57;
      v58 = v74[4];
      v59 = v74[5];
      v101 = v74[3];
      v102 = v58;
      v103 = v59;
      v60 = v74[7];
      v61 = v74[8];
      v104 = v74[6];
      v105 = v60;
      v106 = v61;
      v62 = v74[10];
      v63 = v74[11];
      v107 = v74[9];
      v108 = v62;
      v109 = v63;
      v64 = sub_3737AE(v2, v74, &v96);
      BYTE2(v107) = v98;
      LOBYTE(v98) = -97;
      v105 = v64;
      v111 = &v98;
      v99 &= ~0x1000u;
      v110 = 79;
      v96 = 0;
      v80 = &v110;
    }
    else
    {
      v80 = nullptr;
    }
    v65 = v85;
    for ( i = 0; i < v89 - 1; i += 2 )
    {
      ++v2[26];
      if ( v74 != nullptr )
        v112 = *v65;
      else
        v80 = *v65;
      v92 = sub_35A856(v3[6]);
      sub_37384A(v2, v80, v92, 8);
      sub_372DE4(v2, v65[5], a2);
      sub_35AAF0(v3, 16, 0, v95);
      sub_354640((int)v2);
      sub_34E412((int)v3, v92);
      v65 += 10;
    }
    if ( (v89 & 1) != 0 )
    {
      ++v2[26];
      sub_372DE4(v2, *(_DWORD *)(v70[2] + 20 * v89 - 20), a2);
      sub_354640((int)v2);
    }
    else
    {
      sub_35AAF0(v3, 28, 0, a2);
    }
    v49 = v95;
    v48 = (int)v3;
    goto LABEL_147;
  }
  if ( v6 == 135 )
  {
    sub_35AAF0(v3, 31, *(__int16 *)(HIDWORD(a1) + 32), a2);
    if ( *(_BYTE *)(*(_DWORD *)(v5 + 8) + 1) != 0 )
      sub_355AEA(v3, -1, *(_DWORD **)(4 * (*(__int16 *)(v5 + 32) + 0x3FFFFFFF) + v2[119]), -2);
    goto LABEL_156;
  }
  if ( v6 <= 0x87 )
  {
    if ( v6 != 101 )
    {
      if ( v6 <= 0x65 )
      {
        if ( v6 == 96 )
        {
LABEL_79:
          v34 = sub_3737AE(v2, *(_DWORD *)(v5 + 12), &v96);
          v22 = v6;
          v23 = v34;
          v21 = v3;
          goto LABEL_80;
        }
        if ( v6 >= 0x60 )
        {
          if ( v6 != 97 )
            goto LABEL_134;
          v9 = 0;
          LODWORD(a1) = v3;
          v69 = 0;
          v68 = *(_DWORD **)(HIDWORD(a1) + 8);
          v11 = 97;
LABEL_63:
          v24 = a2;
          goto LABEL_154;
        }
LABEL_66:
        sub_372578(v2, *(_DWORD *)(v5 + 12), a2);
        goto LABEL_156;
      }
      if ( v6 != 132 )
      {
        if ( v6 <= 0x84 )
        {
          if ( v6 != 119 )
            goto LABEL_134;
LABEL_130:
          sub_372288((_DWORD **)v2, (unsigned __int8 *)v5, 0, 0);
          goto LABEL_156;
        }
        if ( v6 != 133 )
        {
          v12 = (unsigned __int8 *)(*(_DWORD *)(HIDWORD(a1) + 8) + 2);
          v13 = sub_34CF50((unsigned int)v12) - 1;
          v68 = (_DWORD *)sub_3564F4(*v3, v12, v13);
          v9 = v13 / 2;
          v69 = -1;
          v10 = v3;
          v11 = 30;
          goto LABEL_63;
        }
        v18 = *(_BYTE **)(HIDWORD(a1) + 8);
        v19 = (int)v3;
        v20 = 0;
LABEL_77:
        sub_35AA1C(v19, v18, v20, a2);
        goto LABEL_156;
      }
      LODWORD(a1) = v3;
      v17 = 0;
      goto LABEL_74;
    }
LABEL_62:
    v21 = v3;
    v22 = 28;
    v23 = 0;
LABEL_80:
    sub_35AAF0(v21, v22, v23, a2);
    goto LABEL_156;
  }
  if ( v6 == 155 )
  {
    if ( *(_DWORD *)(HIDWORD(a1) + 40) == 0 )
      sub_360E94(v2, (int)"misuse of aggregate: %s()", *(const char **)(HIDWORD(a1) + 8));
    goto LABEL_156;
  }
  if ( v6 > 0x9B )
  {
    if ( v6 == 157 )
    {
      HIDWORD(a1) = *(_DWORD *)(HIDWORD(a1) + 12);
      v31 = (unsigned __int8)*(_BYTE *)HIDWORD(a1);
      if ( v31 != 132 )
      {
        if ( v31 != 133 )
        {
          LOBYTE(v98) = -124;
          v99 = 17408;
          v100 = 0;
          v32 = sub_3737AE(v2, &v98, &v96);
          v33 = sub_3737AE(v2, *(_DWORD *)(v5 + 12), &v97);
          sub_35A902(v3, 90, v33, v32, a2);
          goto LABEL_156;
        }
        v18 = *(_BYTE **)(HIDWORD(a1) + 8);
        v19 = (int)v3;
        v20 = 1;
        goto LABEL_77;
      }
      LODWORD(a1) = v3;
      v17 = 1;
LABEL_74:
      sub_35AB00((int *)a1, SHIDWORD(a1), v17, a2);
      goto LABEL_156;
    }
    if ( v6 >= 0x9D )
    {
      if ( v6 != 158 )
      {
        if ( v6 == 159 )
          goto LABEL_156;
        goto LABEL_134;
      }
      goto LABEL_66;
    }
    v14 = *(_DWORD *)(HIDWORD(a1) + 40);
    v15 = *(_DWORD *)(v14 + 28) + 24 * *(__int16 *)(HIDWORD(a1) + 34);
    if ( *(_BYTE *)v14 == 0 )
      goto LABEL_156;
    if ( *(_BYTE *)(v14 + 1) != 0 )
    {
      sub_35A902(v3, 46, *(_DWORD *)(v14 + 8), *(_DWORD *)(v15 + 12), a2);
      goto LABEL_156;
    }
LABEL_56:
    v16 = *(_DWORD *)(v5 + 28);
    if ( v16 < 0 )
    {
      if ( v2[24] > 0 )
        goto LABEL_156;
      v16 = v2[25];
    }
    sub_3660EC((unsigned int *)v2, *(_DWORD *)(v5 + 44), *(__int16 *)(v5 + 32), v16, a2, *(_BYTE *)(v5 + 38));
    goto LABEL_156;
  }
  if ( v6 != 153 )
  {
    if ( v6 <= 0x99 )
    {
      if ( v6 != 148 )
        goto LABEL_134;
      goto LABEL_70;
    }
    goto LABEL_56;
  }
  v81 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v90 + 16) + 12) + 77);
  if ( (*(_DWORD *)(HIDWORD(a1) + 4) & 0x4000) != 0 )
  {
    v37 = 0;
    v72 = 0;
  }
  else
  {
    v37 = *(_DWORD *)(HIDWORD(a1) + 20);
    v72 = 0;
    if ( v37 != 0 )
      v72 = *(_DWORD *)v37;
  }
  v76 = *(unsigned __int8 **)(v5 + 8);
  v86 = sub_34CF50((unsigned int)v76);
  v82 = sub_3534B0(v90, v76, v86, v72, v81, 0);
  if ( v82 == nullptr )
  {
    sub_360E94(v2, (int)"unknown function: %.*s()", v86, (const char *)v76);
    goto LABEL_156;
  }
  if ( (v82[1] & 0x200) != 0 )
  {
    v83 = sub_35A856(v3[6]);
    sub_372DE4(v2, **(_DWORD **)(v37 + 8), a2);
    for ( j = 1; ; ++j )
    {
      v48 = (int)v3;
      if ( j >= v72 )
        break;
      sub_35AAF0(v3, 77, a2, v83);
      sub_3532D2((int)v2, a2, 1);
      ++v2[26];
      v39 = 20 * j;
      sub_372DE4(v2, *(_DWORD *)(v39 + *(_DWORD *)(v37 + 8)), a2);
      sub_354640((int)v2);
    }
    v49 = v83;
    goto LABEL_147;
  }
  if ( (v82[1] & 0x400) != 0 )
  {
    sub_372DE4(v2, **(_DWORD **)(v37 + 8), a2);
    goto LABEL_156;
  }
  v87 = nullptr;
  v77 = 0;
  v93 = 0;
  while ( v77 < v72 )
  {
    if ( v77 <= 31
      && sub_35304C(*(_DWORD **)(20 * v77 + *(_DWORD *)(v37 + 8)), (int (*)(void))((char *)&dword_0 + 1)) != nullptr )
    {
      v93 |= 1 << v77;
    }
    if ( (v82[1] & 0x20) != 0 && v87 == nullptr )
      v87 = sub_3625D4(v2, *(unsigned __int8 **)(20 * v77 + *(_DWORD *)(v37 + 8)));
    ++v77;
  }
  if ( v37 != 0 )
  {
    if ( v93 != 0 )
    {
      v40 = v2[19];
      v78 = v40 + 1;
      v2[19] = v40 + v72;
    }
    else
    {
      v78 = sub_34EA92(v2, v72);
    }
    if ( (v82[1] & 0xC0) != 0 )
    {
      v41 = **(unsigned __int8 ***)(v37 + 8);
      v42 = *v41;
      if ( v42 == 154 || v42 == 156 )
        v41[38] = v82[1] & 0xC0;
    }
    ++v2[26];
    sub_373192(v2, v37, v78, 3);
    sub_354640((int)v2);
  }
  else
  {
    v78 = 0;
  }
  v43 = v72;
  if ( v72 <= 1 )
  {
    if ( v72 != 1 )
    {
LABEL_123:
      if ( (v82[1] & 0x20) != 0 )
      {
        if ( v87 == nullptr )
          v87 = *(int ***)(v90 + 8);
        sub_35A9FC(v3, 36, 0, 0, 0, v87, -4);
      }
      sub_35A9FC(v3, 1, v93, v78, a2, v82, -5);
      sub_34E458((int)v3, v72);
      if ( v72 != 0 && v93 == 0 )
        sub_353306((int)v2, v78, v72);
      goto LABEL_156;
    }
  }
  else if ( (*(_DWORD *)(v5 + 4) & 0x80) != 0 )
  {
    v44 = (_DWORD *)v90;
    v45 = (int)v82;
    v46 = *(unsigned __int8 **)(*(_DWORD *)(v37 + 8) + 20);
LABEL_122:
    v82 = sub_355F78(v44, v45, v43, v46);
    goto LABEL_123;
  }
  v44 = (_DWORD *)v90;
  v45 = (int)v82;
  v46 = **(unsigned __int8 ***)(v37 + 8);
  v43 = v72;
  goto LABEL_122;
}


//======================================================================
// sub_372DD2
// address: 0x00372DD2   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_372DD2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_372DE4
// address: 0x00372DE4   size: 0x36 (54 bytes)
//======================================================================
void __fastcall sub_372DE4(__int64 a1, unsigned int a2)
{
  int v2; // r5
  int v4; // r2
  _DWORD *v5; // r0
  char v6; // r1
  int v7; // r0

  v2 = a1;
  if ( HIDWORD(a1) != 0 && (unsigned __int8)*(_BYTE *)HIDWORD(a1) == 159 )
  {
    v4 = *(_DWORD *)(HIDWORD(a1) + 28);
    v5 = *(_DWORD **)(a1 + 8);
    v6 = 33;
LABEL_7:
    sub_35AAF0(v5, v6, v4, a2);
    return;
  }
  sub_372578(a1, a2);
  v4 = v7;
  if ( v7 != a2 )
  {
    v5 = *(_DWORD **)(v2 + 8);
    if ( v5 != nullptr )
    {
      v6 = 34;
      goto LABEL_7;
    }
  }
}


//======================================================================
// sub_372E1A
// address: 0x00372E1A   size: 0x176 (374 bytes)
//======================================================================
int __fastcall sub_372E1A(int *a1, _DWORD *a2, int a3, int a4)
{
  int *v6; // r4
  __int64 v7; // r0
  int v8; // r2
  unsigned int v9; // r6
  int v11; // [sp+14h] [bp-20h]
  int v14; // [sp+20h] [bp-14h]
  unsigned int v15; // [sp+20h] [bp-14h]
  unsigned int v16; // [sp+24h] [bp-10h]
  char v17; // [sp+2Bh] [bp-9h] BYREF
  int v18; // [sp+2Ch] [bp-8h] BYREF

  v18 = 0;
  v6 = (int *)a1[2];
  v14 = sub_36E780(a1, a2, &v18);
  v17 = sub_34EDB6((int)a2);
  ++a1[26];
  v11 = sub_34EA6E((int)a1);
  HIDWORD(v7) = a2[3];
  LODWORD(v7) = a1;
  sub_372DE4(v7, v11);
  if ( a4 == a3 )
  {
    sub_35AAF0(v6, 76, v11, a4);
  }
  else
  {
    v16 = sub_35AACE(v6, 77, v11);
    sub_35AAF0(v6, 105, a2[7], a3);
    sub_35AAF0(v6, 16, 0, a4);
    sub_34E46E((int)v6, v16);
  }
  if ( v14 == 1 )
  {
    sub_35AAF0(v6, 38, v11, a3);
    sub_35A902(v6, 67, a2[7], a3, v11);
  }
  else
  {
    sub_35A9FC(v6, 47, v11, 1, 0, &v17, 1);
    v8 = a2[7];
    if ( v18 != 0 && a3 != a4 )
    {
      v15 = sub_35A98A(v6, 66, v8, 0, v11, (int *)((char *)&dword_0 + 1));
      sub_35AAF0(v6, 44, v18, a4);
      sub_35AAF0(v6, 45, v18, a3);
      v9 = sub_35A98A(v6, 66, a2[7], 0, v18, (int *)((char *)&dword_0 + 1));
      sub_35AAF0(v6, 25, 0, v18);
      sub_35AAF0(v6, 16, 0, a3);
      sub_34E46E((int)v6, v9);
      sub_35AAF0(v6, 25, 1, v18);
      sub_35AAF0(v6, 16, 0, a4);
      sub_34E46E((int)v6, v15);
    }
    else
    {
      sub_35A98A(v6, 65, v8, a3, v11, (int *)((char *)&dword_0 + 1));
    }
  }
  sub_353416((int)a1, v11);
  return sub_354640((int)a1);
}


//======================================================================
// sub_372F90
// address: 0x00372F90   size: 0x10C (268 bytes)
//======================================================================
int __fastcall sub_372F90(int result, _DWORD *a2, int a3)
{
  int v4; // r6
  int v5; // r7
  _DWORD *v6; // r4
  int v7; // r2
  int v8; // r2
  _DWORD *v9; // r0
  char v10; // r1
  __int64 v11; // r0
  __int64 v12; // r0
  unsigned int v13; // r5
  unsigned int v14; // r6
  int v16; // [sp+Ch] [bp-10h]
  int v17; // [sp+14h] [bp-8h] BYREF

  v4 = result;
  if ( a2[2] == 0 )
  {
    result = sub_35331E(result);
    if ( a2[17] != 0 )
    {
      v5 = *(_DWORD *)(v4 + 76) + 1;
      *(_DWORD *)(v4 + 76) = v5;
      a2[2] = v5;
      v6 = sub_35A956(v4);
      if ( sub_3531E4((_DWORD *)a2[17], &v17, v7) != 0 )
      {
        result = sub_35AAF0(v6, 25, v17, v5);
        v8 = v17;
        if ( v17 != 0 )
        {
          if ( v17 >= 0 && *((_QWORD *)a2 + 4) > (unsigned __int64)v17 )
          {
            a2[8] = v17;
            a2[9] = v8 >> 31;
          }
          goto LABEL_11;
        }
        v9 = v6;
        v10 = 16;
      }
      else
      {
        LODWORD(v11) = v4;
        HIDWORD(v11) = a2[17];
        sub_372DE4(v11, v5);
        sub_35AACE(v6, 38, v5);
        v9 = v6;
        v10 = -121;
        v8 = v5;
      }
      result = sub_35AAF0(v9, v10, v8, a3);
LABEL_11:
      if ( a2[18] != 0 )
      {
        LODWORD(v12) = v4;
        v16 = *(_DWORD *)(v4 + 76);
        *(_DWORD *)(v4 + 76) = v16 + 1;
        a2[3] = v16 + 1;
        ++*(_DWORD *)(v4 + 76);
        HIDWORD(v12) = a2[18];
        sub_372DE4(v12, v16 + 1);
        sub_35AACE(v6, 38, v16 + 1);
        v13 = sub_35AACE(v6, 132, v16 + 1);
        sub_35AAF0(v6, 25, 0, v16 + 1);
        sub_34E46E((int)v6, v13);
        sub_35A902(v6, 89, v5, v16 + 1, v16 + 2);
        v14 = sub_35AACE(v6, 132, v5);
        sub_35AAF0(v6, 25, -1, v16 + 2);
        return sub_34E46E((int)v6, v14);
      }
    }
  }
  return result;
}


//======================================================================
// sub_37309C
// address: 0x0037309C   size: 0xF6 (246 bytes)
//======================================================================
_DWORD *__fastcall sub_37309C(_DWORD *a1, int a2, char *a3, int a4, _DWORD *a5, _DWORD *a6, _DWORD *a7)
{
  int *v10; // r5
  unsigned int v11; // r6
  _DWORD *v14; // [sp+Ch] [bp-28h]
  _DWORD v15[9]; // [sp+10h] [bp-24h] BYREF

  v14 = (_DWORD *)*a1;
  j_memset(v15, 0, 0x20u);
  v15[0] = a1;
  if ( sub_361224((int)v15, a5) != 0 || sub_361224((int)v15, a6) != 0 || sub_361224((int)v15, a7) != 0 )
  {
    ++a1[17];
  }
  else if ( a4 == 0 || sub_360F08((int)a1) == 0 )
  {
    v10 = sub_35A956((int)a1);
    v11 = sub_34EA92(a1, 4);
    sub_372DE4(__SPAIR64__((unsigned int)a5, (unsigned int)a1), v11);
    sub_372DE4(__SPAIR64__((unsigned int)a6, (unsigned int)a1), v11 + 1);
    sub_372DE4(__SPAIR64__((unsigned int)a7, (unsigned int)a1), v11 + 2);
    if ( v10 != nullptr )
    {
      sub_35A902(v10, 1, 0, v11 + 3 - *(__int16 *)a3, v11 + 3);
      sub_34E458((int)v10, *a3);
      sub_355AEA(v10, -1, a3, -5);
      sub_35AACE(v10, 138, a2 == 24);
    }
  }
  sub_35519A(v14, (int)a5);
  sub_35519A(v14, (int)a6);
  return sub_35519A(v14, (int)a7);
}


//======================================================================
// sub_373192
// address: 0x00373192   size: 0xB8 (184 bytes)
//======================================================================
signed int __fastcall sub_373192(unsigned int a1, signed int *a2, unsigned int a3, char a4)
{
  _DWORD **v5; // r7
  unsigned int i; // r4
  _DWORD *v7; // r6
  int v8; // r0
  int v9; // r6
  _DWORD *v10; // r0
  int v11; // r3
  char v13; // [sp+4h] [bp-18h]
  int v14; // [sp+8h] [bp-14h]
  signed int v15; // [sp+Ch] [bp-10h]
  _DWORD *v16; // [sp+10h] [bp-Ch]

  v13 = a4;
  v14 = ((a4 & 1) == 0) + 33;
  v15 = *a2;
  if ( *(_BYTE *)(a1 + 25) == 0 )
    v13 = a4 & 0xFD;
  v5 = (_DWORD **)a2[2];
  for ( i = a3; (int)(i - a3) < v15; ++i )
  {
    v7 = *v5;
    if ( (v13 & 2) != 0 && sub_35304C(*v5, (int (*)(void))((char *)&dword_0 + 1)) != nullptr )
    {
      sub_35B6F2((int *)a1, v7, i, 0);
    }
    else
    {
      sub_372578(__SPAIR64__((unsigned int)v7, a1), i);
      v9 = v8;
      if ( v8 != i )
      {
        v16 = *(_DWORD **)(a1 + 8);
        if ( v14 == 33
          && *(_BYTE *)(v10 = sub_34E484(*(_DWORD **)(a1 + 8), -1)) == 33
          && (v11 = v10[3]) + v10[1] + 1 == v9
          && v11 + v10[2] + 1 == i )
        {
          v10[3] = v11 + 1;
        }
        else
        {
          sub_35AAF0(v16, v14, v9, i);
        }
      }
    }
    v5 += 5;
  }
  return v15;
}


//======================================================================
// sub_37324A
// address: 0x0037324A   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_37324A(_DWORD *a1, signed int *a2, int a3, int a4)
{
  signed int v4; // r7
  _DWORD *v7; // r4
  int v8; // r7
  int result; // r0
  int v10; // r5
  int v11; // r3
  unsigned int v12; // r7
  unsigned int v13; // r5
  int v14; // [sp+Ch] [bp-18h]
  int v15; // [sp+10h] [bp-14h]
  int v16; // [sp+14h] [bp-10h]

  v4 = *a2;
  v7 = (_DWORD *)a1[2];
  v15 = *a2 + 2;
  v14 = sub_34EA92(a1, v15);
  v16 = sub_34EA6E((int)a1);
  sub_35331E((int)a1);
  sub_373192((unsigned int)a1, a2, v14, 0);
  v8 = v14 + v4;
  sub_35AAF0(v7, 68, a2[1], v8);
  sub_35ACBA((int)a1, a4, v8 + 1, 1);
  sub_35A902(v7, 48, v14, v15, v16);
  sub_35AAF0(v7, ((*(_WORD *)(a3 + 6) & 0x40) == 0) + 106, a2[1], v16);
  sub_353416((int)a1, v16);
  result = sub_353306((int)a1, v14, v15);
  v10 = *(_DWORD *)(a3 + 8);
  if ( v10 != 0 )
  {
    v11 = *(_DWORD *)(a3 + 12);
    if ( v11 != 0 )
      v10 = v11 + 1;
    v12 = sub_35AACE(v7, 135, v10);
    sub_35AAF0(v7, 37, v10, -1);
    v13 = sub_35A948(v7, 16);
    sub_34E46E((int)v7, v12);
    sub_35AACE(v7, 102, a2[1]);
    sub_35AACE(v7, 74, a2[1]);
    return sub_34E46E((int)v7, v13);
  }
  return result;
}


//======================================================================
// sub_373332
// address: 0x00373332   size: 0x47C (1148 bytes)
//======================================================================
int __fastcall sub_373332(int *a1, int a2, signed int *a3, int a4, signed int *a5, int a6, int *a7, int a8, int a9)
{
  int *v10; // r4
  int v11; // r2
  int v12; // r3
  signed int v13; // r1
  char *v14; // r3
  unsigned int v15; // r3
  char v16; // r3
  int v17; // r3
  _DWORD *v18; // r0
  int v19; // r6
  int v20; // r2
  int result; // r0
  int v22; // r6
  int v23; // r7
  int *v24; // r0
  signed int *v25; // r1
  int v26; // r6
  int v27; // r6
  int *v28; // r7
  int v29; // r6
  int j; // r6
  int v31; // r2
  _DWORD *v32; // [sp+1Ch] [bp-30h]
  unsigned int v33; // [sp+20h] [bp-2Ch]
  int i; // [sp+24h] [bp-28h]
  int v35; // [sp+24h] [bp-28h]
  unsigned int v36; // [sp+24h] [bp-28h]
  int v37; // [sp+28h] [bp-24h]
  int v38; // [sp+28h] [bp-24h]
  int v39; // [sp+28h] [bp-24h]
  int v40; // [sp+2Ch] [bp-20h]
  int v41; // [sp+30h] [bp-1Ch]
  int v43; // [sp+34h] [bp-18h]
  int v44; // [sp+38h] [bp-14h]
  int v46; // [sp+3Ch] [bp-10h]
  int v47; // [sp+3Ch] [bp-10h]
  int **v49; // [sp+44h] [bp-8h]

  v10 = (int *)a1[2];
  v41 = *(unsigned __int8 *)a7;
  v40 = a7[1];
  if ( a6 != 0 )
  {
    v37 = *(unsigned __int8 *)(a6 + 1);
    if ( a5 == nullptr && *(_BYTE *)(a6 + 1) == 0 )
      goto LABEL_4;
  }
  else
  {
    if ( a5 == nullptr )
    {
LABEL_4:
      sub_35ABA8(v10, *(_DWORD *)(a2 + 12), a8);
      v37 = 0;
      goto LABEL_5;
    }
    v37 = 0;
  }
LABEL_5:
  v11 = a7[2];
  v12 = a1[19];
  v13 = *a3;
  v32 = (_DWORD *)*a3;
  if ( v11 != 0 )
  {
    if ( (int)v32 + v11 <= v12 )
      goto LABEL_10;
    v14 = (char *)v32 + v12;
  }
  else
  {
    a7[2] = v12 + 1;
    v14 = (char *)(a1[19] + v13);
  }
  a1[19] = (int)v14;
LABEL_10:
  v15 = a7[2];
  a7[3] = (int)v32;
  v33 = v15;
  if ( a4 < 0 )
  {
    if ( v41 != 3 )
    {
      v16 = v41 == 5 || v41 == 9;
      sub_373192((unsigned int)a1, a3, v33, v16);
    }
  }
  else
  {
    for ( i = 0; i < (int)v32; ++i )
      sub_35A902(v10, 46, a4, i, i + v33);
  }
  if ( v37 != 0 )
  {
    if ( *(_BYTE *)(a6 + 1) == 1 )
    {
      sub_355A84(v10, *(_DWORD *)(a6 + 8));
    }
    else if ( *(_BYTE *)(a6 + 1) == 2 )
    {
      v17 = a1[19];
      a1[19] = (int)v32 + v17;
      v38 = v17 + 1;
      sub_355A84(v10, *(_DWORD *)(a6 + 8));
      v18 = sub_34E484(v10, *(_DWORD *)(a6 + 8));
      *(_BYTE *)v18 = 28;
      v18[1] = 1;
      v18[2] = v38;
      v35 = v38;
      v19 = 0;
      v46 = (int)v32 + v10[8];
      while ( v19 < (int)v32 )
      {
        v49 = sub_3625D4(a1, *(unsigned __int8 **)(20 * v19 + a3[2]));
        v20 = v19 + v33;
        if ( v19 >= (int)v32 - 1 )
          sub_35A902(v10, 79, v20, a8, v35);
        else
          sub_35A902(v10, 78, v20, v46, v35);
        sub_355AEA(v10, -1, v49, -4);
        sub_34E458((int)v10, 128);
        ++v19;
        ++v35;
      }
      sub_35A902(v10, 33, v33, v38, (int)v32 - 1);
    }
    else
    {
      sub_35AED4((int)a1, *(_DWORD *)(a6 + 4), a8, v32, v33);
    }
    if ( a5 == nullptr )
      sub_35ABA8(v10, *(_DWORD *)(a2 + 12), a8);
  }
  result = v41 - 1;
  switch ( v41 )
  {
    case 1:
      v22 = sub_34EA6E((int)a1);
      sub_35A902(v10, 48, v33, (int)v32, v22);
      sub_35AAF0(v10, 107, v40, v22);
      goto LABEL_41;
    case 2:
      result = sub_35A902(v10, 108, v40, v33, (int)v32);
      goto LABEL_64;
    case 3:
      result = sub_35AAF0(v10, 25, 1, v40);
      goto LABEL_64;
    case 5:
    case 9:
      if ( a5 != nullptr )
      {
        v27 = sub_34EA6E((int)a1);
        sub_35A902(v10, 48, v33, (int)v32, v27);
        sub_37324A(a1, a5, a2, v27);
        return sub_353416((int)a1, v27);
      }
      if ( v41 == 9 )
      {
        result = sub_35AACE(v10, 22, a7[1]);
      }
      else
      {
        sub_35AAF0(v10, 35, v33, (int)v32);
        result = sub_3532D2((int)a1, v33, (int)v32);
      }
      goto LABEL_65;
    case 6:
      v25 = a5;
      v24 = a1;
      if ( a5 != nullptr )
        return sub_37324A(v24, v25, a2, v33);
      result = sub_35ACBA((int)a1, v33, v40, 1);
      goto LABEL_65;
    case 7:
      *((_BYTE *)a7 + 1) = sub_34ED7C(*(_DWORD **)a3[2], *((unsigned __int8 *)a7 + 1));
      v24 = a1;
      if ( a5 != nullptr )
      {
        v25 = a5;
        return sub_37324A(v24, v25, a2, v33);
      }
      else
      {
        v26 = sub_34EA6E((int)a1);
        sub_35A9FC(v10, 48, v33, 1, v26, (int *)((char *)a7 + 1), 1);
        sub_3532D2((int)a1, v33, 1);
        sub_35AAF0(v10, 107, v40, v26);
        result = sub_353416((int)a1, v26);
LABEL_65:
        v31 = *(_DWORD *)(a2 + 8);
        if ( v31 != 0 )
          return sub_35A902(v10, 135, v31, a9, -1);
      }
      return result;
    case 8:
    case 10:
    case 11:
      v22 = sub_34EA6E((int)a1);
      sub_35A902(v10, 48, v33, (int)v32, v22);
      if ( v41 == 11 )
      {
        sub_35A98A(v10, 66, v40 + 1, v10[8] + 4, v22, nullptr);
        sub_35AAF0(v10, 107, v40 + 1, v22);
      }
      if ( a5 != nullptr )
      {
        sub_37324A(a1, a5, a2, v22);
      }
      else
      {
        v23 = sub_34EA6E((int)a1);
        sub_35AAF0(v10, 69, v40, v23);
        sub_35A902(v10, 70, v40, v22, v23);
        sub_34E458((int)v10, 8);
        sub_353416((int)a1, v23);
      }
LABEL_41:
      result = sub_353416((int)a1, v22);
      goto LABEL_64;
    case 12:
    case 13:
      v28 = (int *)a7[4];
      v43 = *v28;
      v44 = sub_34EA6E((int)a1);
      v47 = v43 + 2;
      v39 = sub_34EA92(a1, v43 + 2);
      v29 = v39 + v43 + 1;
      v36 = 0;
      if ( v41 == 13 )
        v36 = sub_35A98A(v10, 66, v40 + 1, 0, v33, v32);
      sub_35A902(v10, 48, v33, (int)v32, v29);
      if ( v41 == 13 )
      {
        sub_35AAF0(v10, 107, v40 + 1, v29);
        sub_34E458((int)v10, 16);
      }
      for ( j = 0; j < v43; ++j )
        sub_35AAF0(v10, 34, v33 + *(unsigned __int16 *)(v28[2] + 20 * j + 16) - 1, j + v39);
      sub_35AAF0(v10, 68, v40, v39 + v43);
      sub_35A902(v10, 48, v39, v47, v44);
      sub_35AAF0(v10, 107, v40, v44);
      if ( v36 != 0 )
        sub_34E46E((int)v10, v36);
      sub_353416((int)a1, v44);
      result = sub_353306((int)a1, v39, v47);
      goto LABEL_64;
    default:
LABEL_64:
      if ( a5 == nullptr )
        goto LABEL_65;
      return result;
  }
}


//======================================================================
// sub_3737AE
// address: 0x003737AE   size: 0x9C (156 bytes)
//======================================================================
int __fastcall sub_3737AE(int a1, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v4; // r0
  __int64 v5; // r4
  int *v6; // r3
  int v7; // r6
  int i; // r7
  int v10; // r6
  int v11; // r7
  int v12; // r0
  int v13; // r5

  LODWORD(v5) = a1;
  v4 = sub_34E89C(a2);
  HIDWORD(v5) = v4;
  if ( *(_BYTE *)(v5 + 25) != 0
    && *(unsigned __int8 *)v4 != 159
    && sub_35304C(v4, (int (*)(void))((char *)&dword_0 + 3)) != nullptr )
  {
    v6 = *(int **)(v5 + 320);
    *a3 = 0;
    if ( v6 != nullptr )
    {
      v7 = v6[2];
      for ( i = *v6; i > 0; --i )
      {
        if ( (*(_BYTE *)(v7 + 13) & 4) != 0
          && sub_354228(*(unsigned __int8 **)v7, (unsigned __int8 *)HIDWORD(v5), -1) == 0 )
        {
          return *(_DWORD *)(v7 + 16);
        }
        v7 += 20;
      }
    }
    v10 = *(_DWORD *)(v5 + 76) + 1;
    *(_DWORD *)(v5 + 76) = v10;
    sub_35B6F2((int *)v5, (_DWORD *)HIDWORD(v5), v10, 1u);
    return v10;
  }
  else
  {
    v11 = sub_34EA6E(v5);
    sub_372578(v5, v11);
    v13 = v12;
    if ( v12 == v11 )
    {
      *a3 = v12;
    }
    else
    {
      sub_353416(v5, v11);
      *a3 = 0;
    }
    return v13;
  }
}


//======================================================================
// sub_37384A
// address: 0x0037384A   size: 0x1BE (446 bytes)
//======================================================================
int __fastcall sub_37384A(int result, unsigned __int8 *a2, int a3, int a4)
{
  _DWORD *v4; // r7
  int *v5; // r4
  unsigned int v8; // r0
  _DWORD *v9; // r1
  int v10; // r7
  int v11; // r7
  int v12; // r0
  int v13; // r0
  char v14; // r1
  int v15; // r2
  _DWORD *v16; // r0
  int v17; // r1
  int v18; // r2
  int v19; // r0
  int v20; // [sp+4h] [bp-20h]
  int v22; // [sp+10h] [bp-14h]
  char v23; // [sp+14h] [bp-10h]
  int v24; // [sp+14h] [bp-10h]
  int v25; // [sp+18h] [bp-Ch] BYREF
  int v26[2]; // [sp+1Ch] [bp-8h] BYREF

  v4 = *(_DWORD **)(result + 8);
  v5 = (int *)result;
  v25 = 0;
  v26[0] = 0;
  if ( v4 != nullptr && a2 != nullptr )
  {
    v8 = *a2;
    v23 = v8 ^ 1;
    if ( v8 == 75 )
    {
      if ( a4 != 0 )
      {
        sub_372E1A(v5, a2, a3, a3);
      }
      else
      {
        v22 = sub_35A856(v4[6]);
        sub_372E1A(v5, a2, a3, v22);
        sub_34E412((int)v4, v22);
      }
      goto LABEL_30;
    }
    if ( v8 > 0x4B )
    {
      if ( v8 <= 0x53 )
      {
        v9 = *((_DWORD **)a2 + 3);
        if ( v8 < 0x4E )
        {
          v13 = sub_3737AE((int)v5, v9, &v25);
          v14 = v23;
          v15 = v13;
          v16 = v4;
LABEL_27:
          sub_35AAF0(v16, v14, v15, a3);
          goto LABEL_30;
        }
        v10 = sub_3737AE((int)v5, v9, &v25);
        v20 = sub_3737AE((int)v5, *((_DWORD **)a2 + 4), v26);
        sub_363000((int)v5, *((_DWORD **)a2 + 3), *((_DWORD **)a2 + 4), v23, v10, v20, a3, a4);
LABEL_30:
        sub_353416((int)v5, v25);
        return sub_353416((int)v5, v26[0]);
      }
      if ( v8 != 148 )
      {
LABEL_25:
        if ( !sub_35322C(a2, (int)a2, v8 ^ 1) )
        {
          if ( !sub_35324E(a2, v17, v18) )
          {
            v19 = sub_3737AE((int)v5, a2, &v25);
            sub_35A902(v4, 45, v19, a3, a4 != 0);
          }
          goto LABEL_30;
        }
        v16 = v4;
        v14 = 16;
        v15 = 0;
        goto LABEL_27;
      }
    }
    else
    {
      if ( v8 == 72 )
      {
        sub_37384A(v5, *((_DWORD *)a2 + 3), a3, a4);
        ++v5[26];
        sub_37384A(v5, *((_DWORD *)a2 + 4), a3, a4);
        goto LABEL_18;
      }
      if ( v8 <= 0x48 )
      {
        if ( v8 == 19 )
        {
          sub_373A9C(v5, *((_DWORD *)a2 + 3), a3, a4);
          goto LABEL_30;
        }
        if ( v8 == 71 )
        {
          v24 = sub_35A856(v4[6]);
          sub_373A9C(v5, *((_DWORD *)a2 + 3), v24, a4 ^ 8);
          ++v5[26];
          sub_37384A(v5, *((_DWORD *)a2 + 4), a3, a4);
          sub_34E412((int)v4, v24);
LABEL_18:
          sub_354640((int)v5);
          goto LABEL_30;
        }
        goto LABEL_25;
      }
      if ( v8 != 73 )
      {
        sub_373A08(v5);
        goto LABEL_30;
      }
    }
    v11 = sub_3737AE((int)v5, *((_DWORD **)a2 + 3), &v25);
    v12 = sub_3737AE((int)v5, *((_DWORD **)a2 + 4), v26);
    sub_363000((int)v5, *((_DWORD **)a2 + 3), *((_DWORD **)a2 + 4), (*a2 != 73) + 78, v11, v12, a3, 128);
    goto LABEL_30;
  }
  return result;
}


//======================================================================
// sub_373A08
// address: 0x00373A08   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_373A08(int a1, int a2, int a3, int a4, int a5)
{
  int *v5; // r2
  int v7; // r0
  int v8; // r5
  int v9; // r7
  int v10; // r0
  int v11; // r5
  int v12; // r7
  int v13; // r0
  int v14; // r5
  int v15; // r7
  int v16; // r5
  int v17; // r7
  int v18; // r1
  int v19; // r0
  int v20; // r0
  int v24; // [sp+Ch] [bp-C8h] BYREF
  _DWORD v25[12]; // [sp+10h] [bp-C4h] BYREF
  char v26; // [sp+40h] [bp-94h] BYREF
  int *v27; // [sp+4Ch] [bp-88h]
  int v28; // [sp+50h] [bp-84h]
  char v29; // [sp+70h] [bp-64h] BYREF
  int *v30; // [sp+7Ch] [bp-58h]
  int v31; // [sp+80h] [bp-54h]
  int v32; // [sp+A0h] [bp-34h] BYREF
  int v33; // [sp+A4h] [bp-30h]
  int v34; // [sp+A8h] [bp-2Ch]
  int v35; // [sp+ACh] [bp-28h]
  int v36; // [sp+B0h] [bp-24h]
  int v37; // [sp+B4h] [bp-20h]
  int v38; // [sp+B8h] [bp-1Ch]
  int v39; // [sp+BCh] [bp-18h]
  int v40; // [sp+C0h] [bp-14h]
  int v41; // [sp+C4h] [bp-10h]
  int v42; // [sp+C8h] [bp-Ch]
  int v43; // [sp+CCh] [bp-8h]

  v5 = *(int **)(a2 + 12);
  v24 = 0;
  v7 = *v5;
  v8 = v5[1];
  v9 = v5[2];
  v5 += 3;
  v32 = v7;
  v33 = v8;
  v34 = v9;
  v10 = *v5;
  v11 = v5[1];
  v12 = v5[2];
  v5 += 3;
  v35 = v10;
  v36 = v11;
  v37 = v12;
  v13 = *v5;
  v14 = v5[1];
  v15 = v5[2];
  v5 += 3;
  v38 = v13;
  v39 = v14;
  v40 = v15;
  v16 = v5[1];
  v17 = v5[2];
  v41 = *v5;
  v42 = v16;
  v43 = v17;
  LOBYTE(v25[0]) = 72;
  v25[4] = &v29;
  v26 = 83;
  v25[3] = &v26;
  v27 = &v32;
  v18 = *(_DWORD *)(a2 + 20);
  v19 = **(_DWORD **)(v18 + 8);
  v30 = &v32;
  v29 = 81;
  v28 = v19;
  v31 = *(_DWORD *)(*(_DWORD *)(v18 + 8) + 20);
  v20 = sub_3737AE(a1, &v32, &v24);
  BYTE2(v41) = v32;
  LOBYTE(v32) = -97;
  v39 = v20;
  v33 &= ~0x1000u;
  if ( a4 != 0 )
    sub_373A9C(a1, v25, a3, a5);
  else
    sub_37384A(a1, (unsigned __int8 *)v25, a3, a5);
  return sub_353416(a1, v24);
}


//======================================================================
// sub_373A9C
// address: 0x00373A9C   size: 0x1B8 (440 bytes)
//======================================================================
int *__fastcall sub_373A9C(int *result, unsigned __int8 *a2, int a3, int a4)
{
  _DWORD *v4; // r7
  int *v5; // r4
  unsigned int v7; // r6
  _DWORD *v8; // r1
  int v9; // r7
  int v10; // r6
  int v11; // r7
  int v12; // r0
  char v13; // r1
  int v14; // r2
  _DWORD *v15; // r0
  int v16; // r0
  int v17; // r6
  int v18; // r3
  int v19; // r1
  int v20; // r2
  int v21; // r0
  int v22; // [sp+4h] [bp-20h]
  int v23; // [sp+4h] [bp-20h]
  int v26; // [sp+18h] [bp-Ch] BYREF
  int v27[2]; // [sp+1Ch] [bp-8h] BYREF

  v4 = (_DWORD *)result[2];
  v5 = result;
  v26 = 0;
  v27[0] = 0;
  if ( v4 != nullptr && a2 != nullptr )
  {
    v7 = *a2;
    if ( v7 == 75 )
    {
      v16 = sub_35A856(v4[6]);
      v17 = v16;
      v18 = v16;
      if ( a4 != 0 )
        v18 = a3;
      sub_372E1A(v5, a2, v16, v18);
      sub_35AAF0(v4, 16, 0, a3);
      sub_34E412((int)v4, v17);
      goto LABEL_31;
    }
    if ( v7 > 0x4B )
    {
      if ( v7 <= 0x53 )
      {
        v8 = *((_DWORD **)a2 + 3);
        if ( v7 < 0x4E )
        {
          v12 = sub_3737AE((int)result, v8, &v26);
          v13 = v7;
          v14 = v12;
          v15 = v4;
LABEL_28:
          sub_35AAF0(v15, v13, v14, a3);
          goto LABEL_31;
        }
        v9 = sub_3737AE((int)result, v8, &v26);
        v22 = sub_3737AE((int)v5, *((_DWORD **)a2 + 4), v27);
        sub_363000((int)v5, *((_DWORD **)a2 + 3), *((_DWORD **)a2 + 4), v7, v9, v22, a3, a4);
LABEL_31:
        sub_353416((int)v5, v26);
        return (int *)sub_353416((int)v5, v27[0]);
      }
      if ( v7 != 148 )
      {
LABEL_26:
        if ( !sub_35324E(a2, (int)a2, a3) )
        {
          if ( !sub_35322C(a2, v19, v20) )
          {
            v21 = sub_3737AE((int)v5, a2, &v26);
            sub_35A902(v4, 44, v21, a3, a4 != 0);
          }
          goto LABEL_31;
        }
        v15 = v4;
        v13 = 16;
        v14 = 0;
        goto LABEL_28;
      }
    }
    else
    {
      if ( v7 == 72 )
      {
        v10 = sub_35A856(v4[6]);
        sub_37384A((int)v5, *((unsigned __int8 **)a2 + 3), v10, a4 ^ 8);
        ++v5[26];
        sub_373A9C(v5, *((_DWORD *)a2 + 4), a3, a4);
        sub_34E412((int)v4, v10);
        goto LABEL_19;
      }
      if ( v7 <= 0x48 )
      {
        if ( v7 == 19 )
        {
          sub_37384A((int)result, *((unsigned __int8 **)a2 + 3), a3, a4);
          goto LABEL_31;
        }
        if ( v7 == 71 )
        {
          sub_373A9C(result, *((_DWORD *)a2 + 3), a3, a4);
          ++v5[26];
          sub_373A9C(v5, *((_DWORD *)a2 + 4), a3, a4);
LABEL_19:
          sub_354640((int)v5);
          goto LABEL_31;
        }
        goto LABEL_26;
      }
      if ( v7 != 73 )
      {
        sub_373A08((int)result, (int)a2, a3, 1, a4);
        goto LABEL_31;
      }
    }
    v11 = sub_3737AE((int)result, *((_DWORD **)a2 + 3), &v26);
    v23 = sub_3737AE((int)v5, *((_DWORD **)a2 + 4), v27);
    sub_363000((int)v5, *((_DWORD **)a2 + 3), *((_DWORD **)a2 + 4), 79 - (v7 != 73), v11, v23, a3, 128);
    goto LABEL_31;
  }
  return result;
}


//======================================================================
// sub_373C54
// address: 0x00373C54   size: 0xDC (220 bytes)
//======================================================================
int __fastcall sub_373C54(_DWORD *a1, int a2, int a3, int a4, int a5, int *a6, int a7, int a8)
{
  int *v10; // r0
  int v11; // r5
  int v12; // r0
  int i; // r7
  int v14; // r3
  int v16; // [sp+10h] [bp-1Ch]
  int v17; // [sp+14h] [bp-18h]
  int *v18; // [sp+18h] [bp-14h]
  int v21; // [sp+24h] [bp-8h]

  v10 = (int *)a1[2];
  v11 = a7;
  v18 = v10;
  v21 = *(_DWORD *)(a2 + 12);
  if ( a6 != nullptr )
  {
    if ( *(_DWORD *)(a2 + 36) != 0 )
    {
      *a6 = sub_35A856(v10[6]);
      a1[25] = a3;
      sub_37384A((int)a1, *(unsigned __int8 **)(a2 + 36), *a6, 8);
    }
    else
    {
      *a6 = 0;
    }
  }
  if ( a5 != 0 && (*(_BYTE *)(a2 + 55) & 8) != 0 )
  {
    v16 = *(unsigned __int16 *)(a2 + 50);
    v12 = sub_34EA92(a1, v16);
  }
  else
  {
    v16 = *(unsigned __int16 *)(a2 + 52);
    v12 = sub_34EA92(a1, v16);
  }
  v17 = v12;
  if ( a7 != 0 )
  {
    if ( v12 == a8 )
      v11 = *(_DWORD *)(a7 + 36) == 0 ? a7 : 0;
    else
      v11 = 0;
  }
  for ( i = 0; i < v16; ++i )
  {
    v14 = *(_DWORD *)(a2 + 4);
    if ( v11 == 0 || *(__int16 *)(*(_DWORD *)(v11 + 4) + 2 * i) != *(__int16 *)(v14 + 2 * i) )
    {
      sub_36607C(v18, v21, a3, *(__int16 *)(v14 + 2 * i), i + v17);
      sub_355ABE(v18, 39);
    }
  }
  if ( a4 != 0 )
    sub_35A902(v18, 48, v17, v16, a4);
  sub_353306((int)a1, v17, v16);
  return v17;
}


//======================================================================
// sub_373D30
// address: 0x00373D30   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_373D30(int result, int a2, int a3, int a4, _DWORD *a5)
{
  int v7; // r4
  _DWORD *v8; // r6
  int v9; // r7
  int v10; // r3
  int v11; // r5
  int v12; // r0
  int v13; // r3
  int v14; // [sp+10h] [bp-1Ch]
  _DWORD *v15; // [sp+14h] [bp-18h]
  _DWORD *v16; // [sp+18h] [bp-14h]
  int v18; // [sp+24h] [bp-8h] BYREF

  v16 = (_DWORD *)result;
  v15 = *(_DWORD **)(result + 8);
  v14 = 0;
  if ( (*(_BYTE *)(a2 + 44) & 0x20) != 0 )
  {
    result = sub_35344C(*(_DWORD *)(a2 + 8));
    v14 = result;
  }
  v7 = *(_DWORD *)(a2 + 8);
  v8 = a5;
  v9 = a4;
  v10 = 0;
  v11 = -1;
  while ( v7 != 0 )
  {
    if ( (a5 == nullptr || *v8 != 0) && v7 != v14 )
    {
      v12 = sub_373C54(v16, v7, a3, 0, 1, &v18, v10, v11);
      v11 = v12;
      if ( (*(_BYTE *)(v7 + 55) & 8) != 0 )
        v13 = *(unsigned __int16 *)(v7 + 50);
      else
        v13 = *(unsigned __int16 *)(v7 + 52);
      sub_35A902(v15, 108, v9, v12, v13);
      result = sub_34E412((int)v15, v18);
      v10 = v7;
    }
    v7 = *(_DWORD *)(v7 + 20);
    ++v8;
    ++v9;
  }
  return result;
}


//======================================================================
// sub_373DC6
// address: 0x00373DC6   size: 0x202 (514 bytes)
//======================================================================
int *__fastcall sub_373DC6(int *a1, int a2, int a3)
{
  int *v4; // r7
  int v5; // r1
  int v6; // r4
  int *result; // r0
  __int64 v9; // r2
  int *v10; // r4
  _DWORD *v11; // r0
  unsigned int v12; // r7
  int v13; // r7
  char v14; // r1
  int v15; // r2
  int v16; // [sp+14h] [bp-28h]
  _DWORD *v17; // [sp+18h] [bp-24h]
  int v18; // [sp+1Ch] [bp-20h]
  int v19; // [sp+20h] [bp-1Ch]
  int v20; // [sp+20h] [bp-1Ch]
  int v21; // [sp+24h] [bp-18h]
  int v23; // [sp+28h] [bp-14h]
  int v24; // [sp+2Ch] [bp-10h]
  unsigned int v25; // [sp+2Ch] [bp-10h]
  int v26; // [sp+34h] [bp-8h] BYREF

  v4 = *(int **)(a2 + 12);
  v5 = a1[18];
  v6 = *a1;
  a1[18] = v5 + 2;
  v21 = v5;
  v19 = sub_34F2A0(v6, *(_DWORD *)(a2 + 24));
  result = (int *)sub_360F08((int)a1);
  if ( result == nullptr )
  {
    LODWORD(v9) = v4[8];
    HIDWORD(v9) = 1;
    sub_35A7C8((int)a1, v19, v9, *v4);
    result = sub_35A956((int)a1);
    v10 = result;
    if ( result != nullptr )
    {
      v24 = a3;
      if ( a3 < 0 )
        v24 = *(_DWORD *)(a2 + 44);
      v11 = sub_361D58(a1, a2);
      v17 = v11;
      v16 = a1[18];
      a1[18] = v16 + 1;
      if ( v11 != nullptr )
        ++*v11;
      sub_35A9FC(v10, 56, v16, 0, 0, v11, -6);
      sub_361E26(a1, v21, v19, (int)v4, 52);
      v12 = sub_35AAF0(v10, 105, v21, 0);
      v18 = sub_34EA6E((int)a1);
      sub_373C54(a1, a2, v21, v18, 0, &v26, 0, 0);
      sub_35AAF0(v10, 106, v16, v18);
      sub_34E412((int)v10, v26);
      sub_35AAF0(v10, 9, v21, v12 + 1);
      sub_34E46E((int)v10, v12);
      if ( a3 < 0 )
        sub_35AAF0(v10, 115, v24, v19);
      v13 = v21 + 1;
      sub_35A9FC(v10, 53, v21 + 1, v24, v19, v17, -6);
      if ( a3 < 0 )
        v14 = 1;
      else
        v14 = 3;
      sub_34E458((int)v10, v14);
      v25 = sub_35AAF0(v10, 103, v16, 0);
      v15 = v10[8];
      if ( *(_BYTE *)(a2 + 54) != 0 && v17 != nullptr )
      {
        v23 = v15 + 3;
        sub_35AAF0(v10, 16, 0, v15 + 3);
        v20 = v10[8];
        sub_35A98A(v10, 84, v16, v23, v18, (_DWORD *)(*((unsigned __int16 *)v17 + 3) - *(unsigned __int16 *)(a2 + 50)));
        sub_36682C(a1, 2, a2);
      }
      else
      {
        v20 = v10[8];
      }
      sub_35AAF0(v10, 95, v16, v18);
      sub_35A902(v10, 107, v13, v18, 1);
      sub_34E458((int)v10, 16);
      sub_353416((int)a1, v18);
      sub_35AAF0(v10, 5, v16, v20);
      sub_34E46E((int)v10, v25);
      sub_35AACE(v10, 58, v21);
      sub_35AACE(v10, 58, v13);
      return (int *)sub_35AACE(v10, 58, v16);
    }
  }
  return result;
}


//======================================================================
// sub_373FC8
// address: 0x00373FC8   size: 0x5E (94 bytes)
//======================================================================
unsigned __int64 __fastcall sub_373FC8(int *a1, int a2, unsigned int a3)
{
  int i; // r4
  int j; // r5
  char v7; // r0
  unsigned __int64 v9; // [sp+0h] [bp-Ch]

  v9 = __PAIR64__(a3, (unsigned int)a1);
  for ( i = *(_DWORD *)(a2 + 8); i != 0; i = *(_DWORD *)(i + 20) )
  {
    if ( HIDWORD(v9) != 0 )
    {
      for ( j = 0; j < *(unsigned __int16 *)(i + 52); ++j )
      {
        if ( *(__int16 *)(2 * j + *(_DWORD *)(i + 4)) >= 0
          && sqlite3_stricmp(*(_BYTE **)(4 * j + *(_DWORD *)(i + 32)), (unsigned __int8 *)HIDWORD(v9)) == 0 )
        {
          goto LABEL_9;
        }
      }
    }
    else
    {
LABEL_9:
      v7 = sub_34F2A0(*a1, *(_DWORD *)(a2 + 68));
      sub_36E620(a1, 0, v7);
      sub_373DC6(a1, i, -1);
    }
  }
  return v9;
}


//======================================================================
// sub_374026
// address: 0x00374026   size: 0x36 (54 bytes)
//======================================================================
__int64 __fastcall sub_374026(int *a1, int a2)
{
  int v2; // r6
  int v4; // r4
  _DWORD *i; // r5
  __int64 v7; // [sp+0h] [bp-Ch]

  v2 = *a1;
  HIDWORD(v7) = a2;
  v4 = 0;
  LODWORD(v7) = *(_DWORD *)(*a1 + 16);
  while ( v4 < *(_DWORD *)(v2 + 20) )
  {
    for ( i = *(_DWORD **)(*(_DWORD *)(v7 + 16 * v4 + 12) + 16); i != nullptr; i = (_DWORD *)*i )
      sub_373FC8(a1, i[2], HIDWORD(v7));
    ++v4;
  }
  return v7;
}


//======================================================================
// sub_37405C
// address: 0x0037405C   size: 0xA60 (2656 bytes)
//======================================================================
int __fastcall sub_37405C(int a1, int a2, int a3)
{
  int **v3; // r3
  int *v4; // r4
  int v5; // r7
  unsigned __int8 *v6; // r6
  int v7; // r0
  int v8; // r4
  int v9; // r1
  __int64 v10; // r0
  __int64 v11; // r0
  __int64 v12; // kr00_8
  _DWORD *v13; // r5
  unsigned int v14; // r3
  _DWORD *v15; // r4
  __int16 v16; // r6
  _DWORD *v17; // r0
  int v18; // r0
  int v19; // r5
  char v20; // r2
  int v21; // r3
  int v22; // r1
  _DWORD *v23; // r0
  int v24; // r1
  unsigned int v25; // r3
  int v26; // r3
  unsigned int v27; // r6
  int v28; // r4
  int v29; // r6
  int i; // r4
  int v31; // r7
  _DWORD *v32; // r5
  _DWORD *v33; // r0
  _WORD *v34; // r5
  int v35; // r5
  int v36; // r3
  _DWORD *v37; // r3
  unsigned __int8 *v38; // r6
  size_t v39; // r0
  __int16 v40; // r2
  unsigned __int8 *v41; // r3
  int v42; // r5
  unsigned __int8 *v43; // r4
  int v44; // r3
  _DWORD *v45; // r0
  int *v46; // r3
  _WORD *v47; // r6
  unsigned __int8 *v48; // r4
  _WORD *v49; // r0
  _DWORD *v50; // r5
  _DWORD *v51; // r3
  int m; // r6
  int v53; // r3
  unsigned __int8 *v54; // r0
  _DWORD *v55; // r6
  int v56; // r2
  int *v57; // r3
  int v58; // r2
  int v59; // r1
  _DWORD *v60; // r0
  _DWORD *v61; // r7
  unsigned int v62; // r4
  _BYTE *v63; // r4
  int v64; // r3
  const char *v65; // r3
  _DWORD *v66; // r0
  _WORD *v67; // r0
  _WORD *v68; // r6
  int v69; // r6
  _DWORD *v70; // r0
  _WORD *v71; // r0
  _WORD *v72; // r4
  int v73; // r4
  int v74; // r2
  _DWORD *v75; // r3
  int v76; // r3
  unsigned __int8 *v77; // r4
  _DWORD *v78; // r6
  int v79; // r1
  unsigned __int8 **v80; // r5
  _DWORD *v81; // r0
  _WORD *v82; // r0
  int v83; // r2
  _DWORD *v85; // r7
  int v86; // r6
  int v87; // r3
  __int64 v88; // r4
  int ***v89; // r5
  char v90; // r3
  int **v91; // r0
  __int64 v92; // kr08_8
  int v93; // r5
  int v94; // r4
  int k; // r6
  int v96; // r2
  int v97; // r3
  bool v98; // cf
  char v99; // r3
  int v100; // r5
  _BYTE *v101; // r4
  _DWORD *v102; // r1
  int v103; // r5
  _DWORD *v104; // r6
  _DWORD *v105; // r0
  _DWORD *v106; // r0
  _WORD *v107; // r0
  _DWORD *v108; // r4
  int v109; // r4
  int v110; // r3
  int v111; // [sp+6Ch] [bp-68h]
  int v112; // [sp+6Ch] [bp-68h]
  int v113; // [sp+6Ch] [bp-68h]
  int v114; // [sp+6Ch] [bp-68h]
  int v115; // [sp+6Ch] [bp-68h]
  int **v116; // [sp+6Ch] [bp-68h]
  unsigned __int8 *v117; // [sp+70h] [bp-64h]
  int v118; // [sp+70h] [bp-64h]
  __int16 v119; // [sp+74h] [bp-60h]
  _DWORD *v120; // [sp+74h] [bp-60h]
  _DWORD *v121; // [sp+74h] [bp-60h]
  int v122; // [sp+74h] [bp-60h]
  int v124; // [sp+7Ch] [bp-58h]
  unsigned __int8 *v125; // [sp+7Ch] [bp-58h]
  int v126; // [sp+7Ch] [bp-58h]
  int v127; // [sp+80h] [bp-54h]
  int v128; // [sp+80h] [bp-54h]
  int v129; // [sp+80h] [bp-54h]
  __int16 v130; // [sp+84h] [bp-50h]
  int v131; // [sp+84h] [bp-50h]
  int v132; // [sp+84h] [bp-50h]
  int j; // [sp+84h] [bp-50h]
  int v134; // [sp+88h] [bp-4Ch]
  int v135; // [sp+88h] [bp-4Ch]
  int v136; // [sp+88h] [bp-4Ch]
  int v137; // [sp+88h] [bp-4Ch]
  int *v138; // [sp+8Ch] [bp-48h]
  int v139; // [sp+90h] [bp-44h]
  int v140; // [sp+94h] [bp-40h]
  _BOOL4 v141; // [sp+94h] [bp-40h]
  int **v142; // [sp+94h] [bp-40h]
  int v143; // [sp+98h] [bp-3Ch]
  int v144; // [sp+98h] [bp-3Ch]
  int v145; // [sp+98h] [bp-3Ch]
  int v146; // [sp+9Ch] [bp-38h]
  _DWORD *v147; // [sp+A0h] [bp-34h]
  __int16 v148; // [sp+A4h] [bp-30h]
  int **v149; // [sp+A4h] [bp-30h]
  char v150; // [sp+A8h] [bp-2Ch]
  __int64 v152; // [sp+B0h] [bp-24h]
  int v154; // [sp+BCh] [bp-18h]
  int *v155; // [sp+BCh] [bp-18h]
  _DWORD *v156; // [sp+C4h] [bp-10h]
  _DWORD v157[3]; // [sp+C8h] [bp-Ch] BYREF

  v3 = *(int ***)a2;
  v4 = **(int ***)a2;
  v138 = v4;
  v139 = *v4;
  if ( *(_BYTE *)(*v4 + 64) != 0 )
    ((void (*)(void))sub_374ABC)();
  v5 = *(_DWORD *)(a2 + 20) + 48 * a3;
  v146 = 48 * a3;
  v6 = *(unsigned __int8 **)v5;
  v147 = v3 + 17;
  v117 = *(unsigned __int8 **)v5;
  v7 = sub_35366A(v3 + 17, *(_DWORD **)(*(_DWORD *)v5 + 12));
  v8 = *v6;
  v140 = v7;
  v134 = v9;
  if ( v8 == 75 )
  {
    if ( (*((_DWORD *)v6 + 1) & 0x800) != 0 )
      LODWORD(v10) = sub_3536F2(v147, *((_DWORD *)v6 + 5));
    else
      v10 = sub_3536B8(v147, (int *)*((_DWORD *)v117 + 5));
    goto LABEL_10;
  }
  if ( v8 != 76 )
  {
    LODWORD(v10) = sub_35366A(v147, *((_DWORD **)v117 + 4));
LABEL_10:
    *(_QWORD *)(v5 + 32) = v10;
    goto LABEL_11;
  }
  *(_DWORD *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
LABEL_11:
  LODWORD(v11) = sub_35366A(v147, v117);
  v12 = v11;
  v152 = 0;
  if ( (*((_DWORD *)v117 + 1) & 1) != 0 )
  {
    v11 = sub_34F6FC(v147, *((__int16 *)v117 + 18));
    v152 = v11 - 1;
    v12 |= v11;
  }
  *(_DWORD *)(v5 + 8) = -1;
  *(_DWORD *)(v5 + 4) = -1;
  *(_QWORD *)(v5 + 40) = v12;
  *(_WORD *)(v5 + 18) = 0;
  if ( (unsigned int)(v8 - 75) <= 1 || (unsigned int)(v8 - 79) <= 4 )
  {
    v13 = sub_34E89C(*((_DWORD **)v117 + 3));
    LODWORD(v11) = sub_34E89C(*((_DWORD **)v117 + 4));
    if ( (v134 & *(_DWORD *)(v5 + 36) | v140 & *(_DWORD *)(v5 + 32)) != 0 )
      v130 = 1024;
    else
      v130 = 4095;
    if ( *(unsigned __int8 *)v13 == 154 )
    {
      *(_DWORD *)(v5 + 8) = v13[7];
      *(_DWORD *)(v5 + 12) = *((__int16 *)v13 + 16);
      if ( v8 == 75 )
      {
        LOWORD(v14) = 1;
      }
      else
      {
        LOWORD(v14) = 128;
        if ( v8 != 76 )
          v14 = (unsigned int)(0x20000 << (v8 - 79)) >> 16;
      }
      *(_WORD *)(v5 + 18) = v14 & v130;
    }
    if ( (_DWORD)v11 != 0 && *(unsigned __int8 *)v11 == 154 )
    {
      if ( *(int *)(v5 + 8) < 0 )
      {
        v15 = v117;
        v19 = v5;
        v119 = 0;
      }
      else
      {
        v15 = sub_3568BC(v139, v117, 0);
        v16 = *(unsigned __int8 *)(v139 + 64);
        if ( *(_BYTE *)(v139 + 64) != 0 )
        {
          v17 = sub_35519A((_DWORD *)v139, (int)v15);
          sub_374ABC(v17);
        }
        v18 = sub_356268(a2, v15, 3);
        if ( v18 == 0 )
          v18 = sub_374ABC(0);
        v119 = v16;
        v19 = *(_DWORD *)(a2 + 20) + 48 * v18;
        *(_DWORD *)(v19 + 4) = a3;
        v5 = *(_DWORD *)(a2 + 20) + v146;
        v20 = *(_BYTE *)(v5 + 20);
        *(_BYTE *)(v5 + 21) = 1;
        *(_BYTE *)(v5 + 20) = v20 | 8;
        if ( *v117 == 79 && (*((_DWORD *)v117 + 1) & 1) == 0 && (*(_WORD *)(v139 + 60) & 0x200) == 0 )
        {
          *(_WORD *)(v5 + 18) |= 0x400u;
          v119 = 1024;
        }
      }
      v21 = v15[4];
      v22 = v15[3];
      v127 = *(_DWORD *)(v21 + 4);
      if ( (v127 & 0x100) == (*(_DWORD *)(v22 + 4) & 0x100) )
      {
        if ( (v127 & 0x100) != 0 )
        {
          *(_DWORD *)(v21 + 4) = v127 & 0xFFFFFEFF;
        }
        else if ( sub_3625D4(v138, (unsigned __int8 *)v22) != nullptr )
        {
          *(_DWORD *)(v15[3] + 4) |= 0x100u;
        }
      }
      v23 = (_DWORD *)v15[4];
      v24 = v15[3];
      v25 = *(unsigned __int8 *)v15;
      v15[3] = v23;
      v15[4] = v24;
      if ( v25 > 0x4F )
        *(_BYTE *)v15 = ((v25 - 80) ^ 2) + 80;
      LODWORD(v11) = sub_34E89C(v23);
      *(_DWORD *)(v19 + 8) = *(_DWORD *)(v11 + 28);
      *(_DWORD *)(v19 + 12) = *(__int16 *)(v11 + 32);
      *(_DWORD *)(v19 + 32) = v152 | v140;
      *(_DWORD *)(v19 + 36) = HIDWORD(v152) | v134;
      *(_QWORD *)(v19 + 40) = v12;
      v26 = *(unsigned __int8 *)v15;
      if ( v26 == 75 )
      {
        LOWORD(v27) = 1;
      }
      else
      {
        LOWORD(v27) = 128;
        if ( v26 != 76 )
          v27 = (unsigned int)(0x20000 << (v26 - 79)) >> 16;
      }
      *(_WORD *)(v19 + 18) = (v27 + v119) & v130;
    }
    goto LABEL_53;
  }
  v28 = *v117;
  if ( v28 == 74 )
  {
    if ( *(_BYTE *)(a2 + 8) == 72 )
    {
      v29 = *((_DWORD *)v117 + 5);
      for ( i = 0; i != 2; ++i )
      {
        v31 = (unsigned __int8)aIfQonpIfsq[i + 14];
        v32 = sub_3568BC(v139, *((_DWORD **)v117 + 3), 0);
        v33 = sub_3568BC(v139, *(_DWORD **)(20 * i + *(_DWORD *)(v29 + 8)), 0);
        v34 = sub_361286(v138, v31, v32, v33, nullptr);
        sub_34F724((int)v34, (int)v117);
        v35 = sub_356268(a2, v34, 3);
        sub_37405C(a1, a2, v35);
        LODWORD(v11) = a2;
        v36 = *(_DWORD *)(a2 + 20);
        *(_DWORD *)(v36 + 48 * v35 + 4) = a3;
      }
      v5 = v36 + v146;
      *(_BYTE *)(v36 + v146 + 21) = 2;
    }
    goto LABEL_53;
  }
  if ( v28 != 71 )
    goto LABEL_53;
  v142 = *(int ***)a2;
  v155 = **(int ***)a2;
  v122 = *v155;
  v126 = *(_DWORD *)(a2 + 20) + v146;
  v156 = *(_DWORD **)v126;
  LODWORD(v11) = sub_351894(*v155, 0x1A0u);
  v85 = (_DWORD *)v11;
  *(_DWORD *)(v126 + 12) = v11;
  if ( (_DWORD)v11 == 0 )
    goto LABEL_173;
  *(_BYTE *)(v126 + 20) |= 0x10u;
  *(_DWORD *)(v11 + 16) = 8;
  *(_DWORD *)(v11 + 20) = v11 + 24;
  *(_DWORD *)v11 = v142;
  *(_DWORD *)(v11 + 4) = 0;
  *(_DWORD *)(v11 + 12) = 0;
  sub_356314(v11, v156, 71);
  LODWORD(v11) = sub_374AC0(a1, v85);
  if ( *(_BYTE *)(v122 + 64) != 0 )
    goto LABEL_173;
  v86 = v85[5];
  LODWORD(v11) = v85[3] - 1;
  v144 = v11;
  v136 = -1;
  v128 = -1;
  v115 = -1;
  v132 = -1;
  while ( 1 )
  {
    v87 = v136 | v128;
    if ( v144 < 0 || v87 == 0 )
      break;
    v148 = *(_WORD *)(v86 + 18);
    LODWORD(v88) = (unsigned __int8)v148;
    if ( (_BYTE)v148 == 0 )
    {
      LODWORD(v11) = sub_3516AC(v122, 408);
      v89 = (int ***)v11;
      if ( (_DWORD)v11 != 0 )
      {
        v90 = *(_BYTE *)(v86 + 20);
        *(_DWORD *)(v86 + 12) = v11;
        *(_BYTE *)(v86 + 20) = v90 | 0x20;
        *(_WORD *)(v86 + 18) = 512;
        v91 = *(int ***)a2;
        v89[4] = (int **)byte_8;
        v89[5] = (int **)(v89 + 6);
        *v89 = v91;
        v89[1] = nullptr;
        v89[3] = nullptr;
        sub_356314((int)v89, *(_DWORD **)v86, 72);
        LODWORD(v11) = sub_374AC0(a1, v89);
        v89[1] = (int **)a2;
        if ( *(_BYTE *)(v122 + 64) != 0 )
        {
          HIDWORD(v88) = 0;
        }
        else
        {
          v116 = v89[5];
          v149 = v89[3];
          v88 = 0;
          for ( j = 0; ; ++j )
          {
            LODWORD(v11) = j;
            if ( j >= (int)v149 )
              break;
            if ( (unsigned int)*(unsigned __int8 *)*v116 - 75 <= 1 || (unsigned int)*(unsigned __int8 *)*v116 - 79 <= 4 )
              v88 |= sub_34F6FC(v142 + 17, (int)v116[2]);
            v116 += 12;
          }
        }
        v136 &= v88;
        v128 &= HIDWORD(v88);
        v89 = nullptr;
      }
      v115 = (int)v89;
      goto LABEL_137;
    }
    v150 = *(_BYTE *)(v86 + 20);
    if ( (v150 & 8) == 0 )
    {
      v92 = sub_34F6FC(v142 + 17, *(_DWORD *)(v86 + 8));
      if ( (v150 & 2) != 0 )
        v92 |= sub_34F6FC(v142 + 17, *(_DWORD *)(v85[5] + 48 * *(_DWORD *)(v86 + 4) + 8));
      v136 &= v92;
      LODWORD(v11) = v128 & HIDWORD(v92);
      v128 &= HIDWORD(v92);
      if ( (v148 & 2) != 0 )
      {
        v115 &= v92;
        v89 = (int ***)(v132 & HIDWORD(v92));
LABEL_137:
        v132 = (int)v89;
        goto LABEL_140;
      }
      v115 = 0;
      v132 = 0;
    }
LABEL_140:
    v86 += 48;
    --v144;
  }
  v85[102] = v136;
  v85[103] = v128;
  *(_WORD *)(v126 + 18) = (v87 != 0) << 8;
  if ( (v115 | v132) == 0 )
    goto LABEL_173;
  v129 = 2;
  v93 = -1;
  while ( 2 )
  {
    v94 = v85[5];
    LODWORD(v11) = v142 + 17;
    for ( k = v85[3] - 1; ; --k )
    {
      if ( k < 0 )
        goto LABEL_173;
      v96 = *(_DWORD *)(v94 + 8);
      *(_BYTE *)(v94 + 20) &= ~0x40u;
      v137 = v96;
      if ( v96 != v93 )
      {
        v11 = sub_34F6FC(v142 + 17, v96);
        LODWORD(v11) = v11 & v115 | HIDWORD(v11) & v132;
        if ( (_DWORD)v11 != 0 )
          break;
      }
      v94 += 48;
    }
    v145 = *(_DWORD *)(v94 + 12);
    while ( 2 )
    {
      LODWORD(v11) = *(_DWORD *)(v94 + 8);
      if ( (_DWORD)v11 != v137 )
      {
        v99 = *(_BYTE *)(v94 + 20) & 0xBF;
        goto LABEL_159;
      }
      LODWORD(v11) = *(_DWORD *)(v94 + 12);
      if ( (_DWORD)v11 == v145
        && ((v100 = sub_34ED2C(*(_DWORD **)(*(_DWORD *)v94 + 16)),
             LODWORD(v11) = sub_34ED2C(*(_DWORD **)(*(_DWORD *)v94 + 12)),
             v100 == 0)
         || v100 == (_DWORD)v11) )
      {
        v99 = *(_BYTE *)(v94 + 20) | 0x40;
LABEL_159:
        *(_BYTE *)(v94 + 20) = v99;
        v97 = 1;
      }
      else
      {
        v97 = 0;
      }
      v94 += 48;
      v98 = k-- != 0;
      if ( v98 && v97 != 0 )
        continue;
      break;
    }
    if ( --v129 != 0 )
    {
      if ( v97 == 0 )
      {
        v93 = v137;
        continue;
      }
LABEL_164:
      v101 = (_BYTE *)v85[5];
      v102 = nullptr;
      v103 = v85[3] - 1;
      v104 = nullptr;
      while ( v103 >= 0 )
      {
        if ( (v101[20] & 0x40) != 0 )
        {
          v105 = sub_3568BC(v122, *(_DWORD **)(*(_DWORD *)v101 + 16), 0);
          v104 = sub_35B684((_DWORD *)**v142, v104, (int)v105);
          v102 = *(_DWORD **)(*(_DWORD *)v101 + 12);
        }
        --v103;
        v101 += 48;
      }
      v106 = sub_3568BC(v122, v102, 0);
      v107 = sub_361286(v155, 75, v106, nullptr, nullptr);
      v108 = v107;
      if ( v107 != nullptr )
      {
        sub_34F724((int)v107, (int)v156);
        v108[5] = v104;
        v109 = sub_356268(a2, v108, 3);
        LODWORD(v11) = sub_37405C(a1, a2, v109);
        v110 = *(_DWORD *)(a2 + 20);
        v126 = v110 + v146;
        *(_DWORD *)(v110 + 48 * v109 + 4) = a3;
        *(_BYTE *)(v110 + v146 + 21) = 1;
      }
      else
      {
        LODWORD(v11) = sub_3551E8((_DWORD *)v122, v104);
      }
      *(_WORD *)(v126 + 18) = 2048;
    }
    else if ( v97 != 0 )
    {
      goto LABEL_164;
    }
    break;
  }
LABEL_173:
  v5 = *(_DWORD *)(a2 + 20) + v146;
LABEL_53:
  if ( *(_BYTE *)(a2 + 8) == 72 )
  {
    v124 = *v138;
    if ( *v117 == 153 )
    {
      v37 = *((_DWORD **)v117 + 5);
      if ( v37 != nullptr && *v37 == 2 )
      {
        v38 = *((unsigned __int8 **)v117 + 2);
        v39 = sub_34CF50((unsigned int)v38);
        LODWORD(v11) = sub_3534B0(v124, v38, v39, 2, 1u, 0);
        if ( (_DWORD)v11 != 0 )
        {
          v40 = *(_WORD *)(v11 + 2);
          if ( (v40 & 4) != 0 )
          {
            v41 = *(unsigned __int8 **)(v11 + 4);
            v135 = *v41;
            v154 = v41[1];
            v143 = v41[2];
            v42 = *((_DWORD *)v117 + 5);
            v141 = (v40 & 8) == 0;
            v43 = *(unsigned __int8 **)(*(_DWORD *)(v42 + 8) + 20);
            if ( *v43 == 154 )
            {
              LODWORD(v11) = sub_34ED2C(*(_DWORD **)(*(_DWORD *)(v42 + 8) + 20));
              if ( (_DWORD)v11 == 97 )
              {
                v44 = *(unsigned __int8 *)(*((_DWORD *)v43 + 11) + 44);
                LODWORD(v11) = v44 << 27;
                if ( (v44 & 0x10) == 0 )
                {
                  v45 = sub_34E89C(**(_DWORD ***)(v42 + 8));
                  v120 = v45;
                  v131 = *(unsigned __int8 *)v45;
                  if ( v131 == 135 )
                  {
                    v46 = (int *)v138[120];
                    v111 = *((__int16 *)v45 + 16);
                    if ( v46 != nullptr
                      && (v47 = (_WORD *)(v46[15] + 40 * v111 - 40), (v48 = (unsigned __int8 *)(v47[14] & 1)) == nullptr)
                      && (v49 = sub_3518AC(*v46), v50 = v49, v49 != nullptr) )
                    {
                      sub_359B2C(v49, v47);
                      if ( sqlite3_value_type((int)v50) == 3 )
                        v48 = (unsigned __int8 *)sqlite3_value_text((int)v50);
                    }
                    else
                    {
                      v50 = nullptr;
                      v48 = nullptr;
                    }
                    v51 = (_DWORD *)(v138[2] + 188);
                    if ( v111 <= 32 )
                      *v51 |= 1 << (v111 - 1);
                    else
                      *v51 = -1;
LABEL_73:
                    if ( v48 != nullptr )
                    {
                      for ( m = 0; ; ++m )
                      {
                        v53 = v48[m];
                        if ( v48[m] == 0 || v53 == v135 || v53 == v154 || v53 == v143 )
                          break;
                      }
                      if ( m == 0 )
                      {
                        v112 = 0;
                        v125 = nullptr;
                        v48 = nullptr;
                        goto LABEL_99;
                      }
                      if ( v48[m - 1] != 255 )
                      {
                        v112 = 0;
                        if ( v53 == v135 )
                          v112 = v48[m + 1] == 0;
                        v54 = (unsigned __int8 *)sub_351B26(v124, 97, v48);
                        v125 = v54;
                        if ( v54 != nullptr )
                          *(_BYTE *)(*((_DWORD *)v54 + 2) + m) = 0;
                        if ( v131 == 135 )
                        {
                          v55 = (_DWORD *)v138[2];
                          v56 = *((__int16 *)v120 + 16);
                          v57 = v55 + 47;
                          v58 = v56 <= 32 ? (1 << (v56 - 1)) | *v57 : -1;
                          *v57 = v58;
                          if ( v112 != 0 )
                          {
                            v112 = 1;
                            if ( *(_BYTE *)(v120[2] + 1) != 0 )
                            {
                              v113 = sub_34EA6E((int)v138);
                              sub_372578(__SPAIR64__((unsigned int)v120, (unsigned int)v138), v113);
                              v59 = v55[8];
                              if ( v59 != 0 )
                                *(_DWORD *)(v55[1] + 20 * (v59 - 1) + 12) = 0;
                              sub_353416((int)v138, v113);
                              v112 = 1;
                            }
                          }
                        }
                        goto LABEL_99;
                      }
                      v48 = nullptr;
                    }
                    v112 = (int)v48;
                    v125 = v48;
                    goto LABEL_99;
                  }
                  if ( v131 == 97 )
                  {
                    v48 = (unsigned __int8 *)v45[2];
                    v50 = nullptr;
                    goto LABEL_73;
                  }
                  v50 = nullptr;
                  v112 = 0;
                  v125 = nullptr;
                  v48 = nullptr;
LABEL_99:
                  LODWORD(v11) = sub_3559EA(v50);
                  if ( v48 != nullptr )
                  {
                    v121 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)v117 + 5) + 8) + 20);
                    v60 = sub_3568BC(v139, v125, 0);
                    v61 = v60;
                    if ( *(_BYTE *)(v139 + 64) == 0 )
                    {
                      v62 = v60[2];
                      v63 = (_BYTE *)(v62 + sub_34CF50(v62) - 1);
                      v64 = (unsigned __int8)*v63;
                      if ( v141 )
                      {
                        v112 &= -(v64 != 64);
                        LOBYTE(v64) = byte_44A964[v64];
                      }
                      *v63 = v64 + 1;
                    }
                    if ( v141 )
                      v65 = "NOCASE";
                    else
                      v65 = "BINARY";
                    v157[0] = v65;
                    v157[1] = 6;
                    v66 = sub_3568BC(v139, v121, 0);
                    v67 = sub_3540FC(v138, (int)v66, (int)v157);
                    v68 = sub_361286(v138, 83, v67, v125, nullptr);
                    sub_34F724((int)v68, (int)v117);
                    v69 = sub_356268(a2, v68, 3);
                    sub_37405C(a1, a2, v69);
                    v70 = sub_3568BC(v139, v121, 0);
                    v71 = sub_3540FC(v138, (int)v70, (int)v157);
                    v72 = sub_361286(v138, 82, v71, v61, nullptr);
                    sub_34F724((int)v72, (int)v117);
                    v73 = sub_356268(a2, v72, 3);
                    LODWORD(v11) = sub_37405C(a1, a2, v73);
                    v74 = *(_DWORD *)(a2 + 20);
                    v5 = v74 + v146;
                    if ( v112 != 0 )
                    {
                      *(_DWORD *)(v74 + 48 * v69 + 4) = a3;
                      LODWORD(v11) = *(_DWORD *)(a2 + 20);
                      *(_DWORD *)(v11 + 48 * v73 + 4) = a3;
                      *(_BYTE *)(v5 + 21) = 2;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( *v117 == 153 )
  {
    LODWORD(v11) = sqlite3_stricmp(*((_BYTE **)v117 + 2), "match");
    if ( (_DWORD)v11 == 0 )
    {
      v75 = *((_DWORD **)v117 + 5);
      if ( *v75 == 2 )
      {
        v76 = v75[2];
        v77 = *(unsigned __int8 **)(v76 + 20);
        if ( *v77 == 154 )
        {
          v78 = *(_DWORD **)v76;
          v118 = sub_35366A(v147, *(_DWORD **)v76);
          v114 = v79;
          LODWORD(v11) = sub_35366A(v147, v77) & v118;
          HIDWORD(v11) &= v114;
          v80 = (unsigned __int8 **)(v11 | HIDWORD(v11));
          if ( v11 == 0 )
          {
            v81 = sub_3568BC(v139, v78, (char)v80);
            v82 = sub_361286(v138, 51, v80, v81, v80);
            LODWORD(v11) = *(_DWORD *)(a2 + 20) + 48 * sub_356268(a2, v82, 3);
            *(_DWORD *)(v11 + 32) = v118;
            *(_DWORD *)(v11 + 36) = v114;
            *(_DWORD *)(v11 + 8) = *((_DWORD *)v77 + 7);
            *(_DWORD *)(v11 + 12) = *((__int16 *)v77 + 16);
            *(_WORD *)(v11 + 18) = 64;
            *(_DWORD *)(v11 + 4) = a3;
            v5 = *(_DWORD *)(a2 + 20) + v146;
            *(_BYTE *)(v5 + 21) = 1;
            *(_BYTE *)(v5 + 20) |= 8u;
            v83 = *(_DWORD *)(v5 + 44);
            *(_DWORD *)(v11 + 40) = *(_DWORD *)(v5 + 40);
            *(_DWORD *)(v11 + 44) = v83;
          }
        }
      }
    }
  }
  *(_QWORD *)(v5 + 32) |= v152;
  return sub_374ABC(v11);
}


//======================================================================
// sub_374ABC
// address: 0x00374ABC   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_374ABC(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_374AC0
// address: 0x00374AC0   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_374AC0(int result, int a2)
{
  int v2; // r4
  int i; // r6

  v2 = *(_DWORD *)(a2 + 12);
  for ( i = result; --v2 >= 0; result = sub_37405C(i, a2, v2) )
    ;
  return result;
}


//======================================================================
// sub_374ADC
// address: 0x00374ADC   size: 0x8E (142 bytes)
//======================================================================
_DWORD *__fastcall sub_374ADC(int *a1, int a2, _DWORD *a3, int a4)
{
  _DWORD *v4; // r4
  int *v8; // r5
  _BYTE *v9; // r5
  int v11; // [sp+1Ch] [bp-28h]
  _DWORD *v12; // [sp+20h] [bp-24h]
  _DWORD v14[6]; // [sp+2Ch] [bp-18h] BYREF

  v4 = (_DWORD *)*a1;
  v11 = sub_34F2A0(*a1, *(_DWORD *)(a2 + 68));
  v12 = sub_3568BC((int)v4, a3, 0);
  v8 = sub_35B348((int)v4, nullptr, 0, nullptr);
  if ( v8 != nullptr )
  {
    v8[4] = (int)sub_351BC8((int)v4, *(void **)a2);
    v8[3] = (int)sub_351BC8((int)v4, *(void **)(16 * v11 + v4[4]));
  }
  LOWORD(v14[0]) = 8;
  v9 = sub_35B784(a1, nullptr, v8, (int)v12, 0, 0, 0, 0, 0, 0);
  v14[1] = a4;
  v14[2] = 0;
  v14[3] = 0;
  sub_370488(a1, (int)v9, (unsigned __int8 *)v14);
  return sub_355184(v4, v9);
}


//======================================================================
// sub_374B6C
// address: 0x00374B6C   size: 0x1FE (510 bytes)
//======================================================================
_DWORD *__fastcall sub_374B6C(int *a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD *v9; // r0
  int i; // r4
  __int16 v11; // r3
  _WORD *v12; // r5
  __int16 v13; // r3
  _WORD *v14; // r0
  _WORD *v15; // r0
  _WORD *v16; // r0
  _WORD *v17; // r0
  _WORD *v18; // r4
  int v19; // r5
  _WORD *v20; // r0
  _WORD *v21; // r0
  unsigned int **v22; // r4
  int *v23; // r3
  _DWORD *result; // r0
  __int16 v25; // [sp+20h] [bp-54h]
  _WORD *v26; // [sp+24h] [bp-50h]
  _DWORD *v28; // [sp+2Ch] [bp-48h]
  _WORD *v30; // [sp+30h] [bp-44h]
  int v31; // [sp+34h] [bp-40h]
  int v32; // [sp+38h] [bp-3Ch]
  unsigned int v33; // [sp+3Ch] [bp-38h]
  _DWORD *v35; // [sp+44h] [bp-30h]
  _WORD *v36; // [sp+48h] [bp-2Ch]
  int v37; // [sp+4Ch] [bp-28h]
  _DWORD v38[9]; // [sp+50h] [bp-24h] BYREF

  v28 = (_DWORD *)*a1;
  v9 = sub_35A956((int)a1);
  v35 = v9;
  v33 = 0;
  if ( a8 < 0 )
    v33 = sub_35AAF0(v9, 130, *(unsigned __int8 *)(a5 + 24), 0);
  v26 = nullptr;
  for ( i = 0; i < *(_DWORD *)(a5 + 20); ++i )
  {
    if ( a4 != 0 )
      v11 = *(_WORD *)(2 * i + *(_DWORD *)(a4 + 4));
    else
      v11 = -1;
    v12 = sub_354142(a1, a3, a7, v11);
    if ( a6 != 0 )
      v13 = *(_WORD *)(a6 + 4 * i);
    else
      v13 = *(_WORD *)(a5 + 36);
    v14 = sub_351B26((int)v28, 27, *(unsigned __int8 **)(24 * v13 + *(_DWORD *)(*(_DWORD *)a5 + 4)));
    v15 = sub_361286(a1, 79, v12, v14, nullptr);
    v26 = sub_355378((int)v28, v26, v15);
  }
  if ( a3 == *(_DWORD *)a5 && a8 > 0 )
  {
    if ( (*(_BYTE *)(a3 + 44) & 0x20) != 0 )
    {
      v18 = nullptr;
      v19 = 0;
      v32 = sub_35344C(*(_DWORD *)(a3 + 8));
      while ( v19 < *(unsigned __int16 *)(v32 + 50) )
      {
        v25 = *(_WORD *)(2 * v19 + *(_DWORD *)(a4 + 4));
        v36 = sub_354142(a1, a3, a7, v25);
        v37 = a2[12];
        v20 = sub_351B26((int)v28, 154, nullptr);
        if ( v20 != nullptr )
        {
          *((_DWORD *)v20 + 11) = a3;
          *((_DWORD *)v20 + 7) = v37;
          v20[16] = v25;
        }
        v21 = sub_361286(a1, 79, v36, v20, nullptr);
        ++v19;
        v18 = sub_355378((int)v28, v18, v21);
      }
      v17 = sub_361286(a1, 19, v18, nullptr, nullptr);
    }
    else
    {
      v30 = sub_354142(a1, a3, a7, -1);
      v31 = a2[12];
      v16 = sub_351B26((int)v28, 154, nullptr);
      if ( v16 != nullptr )
      {
        v16[16] = -1;
        *((_DWORD *)v16 + 11) = a3;
        *((_DWORD *)v16 + 7) = v31;
      }
      v17 = sub_361286(a1, 78, v30, v16, nullptr);
    }
    v26 = sub_355378((int)v28, v26, v17);
  }
  j_memset(v38, 0, 0x20u);
  v38[1] = a2;
  v38[0] = a1;
  sub_361108((int)v38, v26);
  v22 = (unsigned int **)sub_36EAB8(a1, a2, v26, 0, nullptr, 0);
  if ( a8 > 0 && *(_BYTE *)(a5 + 24) == 0 )
  {
    v23 = (int *)a1[103];
    if ( v23 == nullptr )
      v23 = a1;
    *((_BYTE *)v23 + 23) = 1;
  }
  sub_35AAF0(v35, 129, *(unsigned __int8 *)(a5 + 24), a8);
  if ( v22 != nullptr )
    sub_35AF20(v22);
  result = sub_35519A(v28, (int)v26);
  if ( v33 != 0 )
    return (_DWORD *)sub_34E46E((int)v35, v33);
  return result;
}


//======================================================================
// sub_374D70
// address: 0x00374D70   size: 0xCE (206 bytes)
//======================================================================
int __fastcall sub_374D70(int a1)
{
  _DWORD *v1; // r4
  int v3; // r2
  int *i; // r6
  int *v5; // r7
  int v6; // r1
  void (*v7)(void); // r3
  int v8; // r7
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3

  v1 = *(_DWORD **)(a1 + 4);
  sub_3574C2(a1);
  for ( i = (int *)v1[2]; i != nullptr; i = v5 )
  {
    v3 = *i;
    v5 = (int *)i[2];
    if ( *i == a1 )
      sub_3682B0((int)i);
  }
  sub_36B53A((unsigned int)a1, v3);
  sub_35655E(a1);
  if ( *(_BYTE *)(a1 + 9) == 0 )
    goto LABEL_7;
  v8 = sub_34CB60(2);
  sqlite3_mutex_enter(v8);
  v9 = v1[16] - 1;
  v1[16] = v9;
  if ( v9 <= 0 )
  {
    v10 = dword_55956C;
    if ( (_DWORD *)dword_55956C == v1 )
    {
      dword_55956C = v1[17];
    }
    else
    {
      while ( v10 != 0 )
      {
        if ( *(_DWORD **)(v10 + 68) == v1 )
        {
          *(_DWORD *)(v10 + 68) = v1[17];
          break;
        }
        v10 = *(_DWORD *)(v10 + 68);
      }
    }
    sqlite3_mutex_free(v1[14]);
    i = &dword_0 + 1;
  }
  sqlite3_mutex_leave(v8);
  if ( i != nullptr )
  {
LABEL_7:
    sub_36DC10(*v1, v6);
    v7 = (void (*)(void))v1[13];
    if ( v7 != nullptr && v1[12] != 0 )
      v7();
    sub_354940(nullptr, (_DWORD *)v1[12]);
    sub_351FB4(v1[20]);
    v1[20] = 0;
    sqlite3_free(v1);
  }
  v11 = *(_DWORD *)(a1 + 24);
  if ( v11 != 0 )
    *(_DWORD *)(v11 + 20) = *(_DWORD *)(a1 + 20);
  v12 = *(_DWORD *)(a1 + 20);
  if ( v12 != 0 )
    *(_DWORD *)(v12 + 24) = *(_DWORD *)(a1 + 24);
  sqlite3_free(a1);
  return 0;
}


//======================================================================
// sub_374E44
// address: 0x00374E44   size: 0x178 (376 bytes)
//======================================================================
__int64 __fastcall sub_374E44(__int64 a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r3
  int v4; // r6
  int v5; // r0
  int v6; // r0
  __int64 v7; // r0
  int v8; // r1
  int v9; // r6
  _DWORD *i; // r5
  _DWORD *v11; // r7
  _DWORD *j; // r5
  _DWORD *v13; // r7
  int k; // r6
  void (__fastcall *v15)(_DWORD, int); // r3
  _DWORD *m; // r5
  _DWORD *v17; // r7
  void (__fastcall *v18)(_DWORD); // r3
  int v19; // r0
  __int64 v21; // [sp+0h] [bp-Ch]

  v21 = a1;
  v1 = a1;
  if ( *(_DWORD *)(a1 + 76) != 1691352191 || *(_DWORD *)(a1 + 4) != 0 || (v2 = sub_353D16(a1)) != 0 )
  {
    sqlite3_mutex_leave(*(_DWORD *)(v1 + 12));
  }
  else
  {
    sub_36B5C0(v1, 0);
    sub_354F0A((_DWORD *)v1);
    while ( 1 )
    {
      v3 = *(_DWORD *)(v1 + 16);
      if ( v2 >= *(_DWORD *)(v1 + 20) )
        break;
      v4 = v3 + 16 * v2;
      v5 = *(_DWORD *)(v4 + 4);
      if ( v5 != 0 )
      {
        sub_374D70(v5);
        *(_DWORD *)(v4 + 4) = 0;
        if ( v2 != 1 )
          *(_DWORD *)(v4 + 12) = 0;
      }
      ++v2;
    }
    v6 = *(_DWORD *)(v3 + 28);
    if ( v6 != 0 )
      sub_355574(v6);
    sub_354E48((_DWORD *)v1);
    LODWORD(v7) = v1;
    v8 = (unsigned __int64)sub_355E66(v7) >> 32;
    v9 = v1;
    HIDWORD(v21) = v1 + 92;
    do
    {
      for ( i = *(_DWORD **)(v9 + 328); i != nullptr; i = (_DWORD *)v21 )
      {
        LODWORD(v21) = i[7];
        while ( 1 )
        {
          sub_354F36((_DWORD *)v1, i[8]);
          v11 = (_DWORD *)i[2];
          sub_354940((_DWORD *)v1, i);
          if ( v11 == nullptr )
            break;
          i = v11;
        }
      }
      v9 += 4;
    }
    while ( v9 != HIDWORD(v21) );
    for ( j = *(_DWORD **)(v1 + 428); j != nullptr; j = (_DWORD *)*j )
    {
      v13 = (_DWORD *)j[2];
      for ( k = 0; k != 15; k += 5 )
      {
        v15 = (void (__fastcall *)(_DWORD, int))v13[k + 4];
        if ( v15 != nullptr )
          v15(v13[k + 2], v8);
      }
      sub_354940((_DWORD *)v1, v13);
    }
    sub_351F60((_DWORD *)(v1 + 420));
    for ( m = *(_DWORD **)(v1 + 308); m != nullptr; m = (_DWORD *)*m )
    {
      v17 = (_DWORD *)m[2];
      v18 = (void (__fastcall *)(_DWORD))v17[3];
      if ( v18 != nullptr )
        v18(v17[2]);
      sub_354940((_DWORD *)v1, v17);
    }
    sub_351F60((_DWORD *)(v1 + 300));
    sub_36024C((unsigned int)v1, 0);
    sub_3559EA(*(_DWORD **)(v1 + 224));
    while ( (int)m < *(_DWORD *)(v1 + 156) )
    {
      sub_34CAD8(*(_DWORD *)v1);
      m = (_DWORD *)((char *)m + 1);
    }
    sub_354940((_DWORD *)v1, *(_DWORD **)(v1 + 160));
    *(_DWORD *)(v1 + 76) = -1254786768;
    sub_354940((_DWORD *)v1, *(_DWORD **)(*(_DWORD *)(v1 + 16) + 28));
    sqlite3_mutex_leave(*(_DWORD *)(v1 + 12));
    v19 = *(_DWORD *)(v1 + 12);
    *(_DWORD *)(v1 + 76) = -1623446221;
    sqlite3_mutex_free(v19);
    if ( *(_BYTE *)(v1 + 243) != 0 )
      sqlite3_free(*(_DWORD *)(v1 + 268));
    sqlite3_free(v1);
  }
  return v21;
}


//======================================================================
// sub_37505C
// address: 0x0037505C   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall sub_37505C(int result, int a2)
{
  int v2; // r4
  int i; // r5
  int v5; // r3
  _DWORD *j; // r6
  _DWORD **v7; // r3
  _DWORD *v8; // r0
  __int64 v9; // r0

  v2 = result;
  if ( result != 0 )
  {
    if ( sub_36006C(result) != 0 )
    {
      sqlite3_mutex_enter(*(_DWORD *)(v2 + 12));
      sub_35752E(v2);
      for ( i = 0; i < *(_DWORD *)(v2 + 20); ++i )
      {
        v5 = *(_DWORD *)(*(_DWORD *)(v2 + 16) + 16 * i + 12);
        if ( v5 != 0 )
        {
          for ( j = *(_DWORD **)(v5 + 16); j != nullptr; j = (_DWORD *)*j )
          {
            v7 = (_DWORD **)(j[2] + 60);
            if ( (*(_BYTE *)(j[2] + 44) & 0x10) != 0 )
            {
              while ( 1 )
              {
                v8 = *v7;
                if ( *v7 == nullptr )
                  break;
                if ( *v8 == v2 )
                {
                  *v7 = (_DWORD *)v8[6];
                  sub_354E22(v8);
                  break;
                }
                v7 = (_DWORD **)(v8 + 6);
              }
            }
          }
        }
      }
      sub_35657E(v2);
      HIDWORD(v9) = (unsigned __int64)sub_354E6E((unsigned int)v2 | 0x4400000000LL) >> 32;
      if ( a2 == 0 && (*(_DWORD *)(v2 + 4) != 0 || sub_353D16(v2) != 0) )
      {
        sub_36024C(
          (unsigned int)v2 | 0x500000000LL,
          (int)"unable to close due to unfinalized statements or unfinished backups");
        sqlite3_mutex_leave(*(_DWORD *)(v2 + 12));
        return 5;
      }
      else
      {
        LODWORD(v9) = v2;
        *(_DWORD *)(v2 + 76) = 1691352191;
        sub_374E44(v9);
        return 0;
      }
    }
    else
    {
      return sub_35EB98(120871);
    }
  }
  return result;
}


//======================================================================
// sub_375134
// address: 0x00375134   size: 0xA4 (164 bytes)
//======================================================================
__int64 __fastcall sub_375134(_DWORD **a1, int *a2)
{
  int v3; // r4
  _DWORD *v4; // r7
  int i; // r6
  _DWORD *v6; // r1
  int *v7; // r0
  _DWORD *j; // r6
  int v9; // r0
  int **v10; // r0
  int v11; // r3
  __int64 v13; // [sp+0h] [bp-Ch]

  LODWORD(v13) = a1;
  HIDWORD(v13) = a1;
  if ( a2 != nullptr )
  {
    v3 = a2[16];
    v4 = *a1;
    if ( v3 != 0 )
    {
      if ( *(_DWORD *)(v3 + 36) != 0 )
      {
        for ( i = 0; ; ++i )
        {
          v6 = *(_DWORD **)(v3 + 36);
          if ( i >= *(_DWORD *)(v3 + 20) )
            break;
          sub_355628(v4, (_DWORD **)&v6[12 * i]);
        }
        sub_354940(v4, v6);
      }
      v7 = *(int **)(v3 + 44);
      if ( v7 != nullptr )
        sub_351DB4(v7);
      for ( j = *(_DWORD **)(v3 + 48); j != nullptr; j = (_DWORD *)v13 )
      {
        LODWORD(v13) = j[2];
        sub_354940(v4, j);
      }
      sub_354940(v4, *(_DWORD **)(v3 + 52));
      sub_354940(v4, (_DWORD *)v3);
      a2[16] = 0;
    }
    v9 = a2[1];
    if ( v9 != 0 )
    {
      sub_374D70(v9);
    }
    else if ( *a2 != 0 )
    {
      sub_3682B0(*a2);
    }
    v10 = (int **)a2[8];
    if ( v10 != nullptr )
    {
      v11 = **v10;
      *(_BYTE *)(HIDWORD(v13) + 88) = *(_BYTE *)(HIDWORD(v13) + 88) & 0xF3 | 4;
      (*(void (**)(void))(v11 + 28))();
      *(_BYTE *)(HIDWORD(v13) + 88) &= 0xF3u;
    }
  }
  return v13;
}


//======================================================================
// sub_3751D8
// address: 0x003751D8   size: 0x6C2 (1730 bytes)
//======================================================================
int __fastcall sub_3751D8(_DWORD *a1)
{
  int v1; // r7
  void *v3; // r0
  int v4; // r0
  int v5; // r5
  int v6; // r0
  __int64 v7; // r0
  int *v8; // r1
  __int64 v9; // r0
  _DWORD *v10; // r5
  int v11; // r6
  int result; // r0
  int v13; // r3
  int v14; // r5
  __int64 v15; // r0
  int v16; // r5
  int v17; // r1
  int v18; // r3
  int (__fastcall *v19)(int); // r3
  __int64 v20; // r0
  int v21; // r3
  int v22; // r6
  int (__fastcall *v23)(_DWORD); // r3
  int v24; // r3
  int v25; // r6
  int v26; // r6
  int v27; // r3
  int v28; // r3
  __int64 v29; // r0
  int v30; // r3
  int v31; // r0
  const char *v32; // r6
  int v33; // r0
  int v34; // r6
  int v35; // r6
  int v36; // r5
  int v37; // r0
  int v38; // r6
  int v39; // r0
  int v40; // r5
  int v41; // r5
  int v42; // r0
  _BYTE *v43; // [sp+Ch] [bp-38h]
  int v44; // [sp+Ch] [bp-38h]
  int i; // [sp+Ch] [bp-38h]
  char *v46; // [sp+Ch] [bp-38h]
  int v47; // [sp+10h] [bp-34h]
  int v48; // [sp+10h] [bp-34h]
  int *v49; // [sp+10h] [bp-34h]
  int v50; // [sp+14h] [bp-30h]
  int v51; // [sp+14h] [bp-30h]
  int v52; // [sp+18h] [bp-2Ch]
  int v53; // [sp+18h] [bp-2Ch]
  int v54; // [sp+1Ch] [bp-28h]
  unsigned int v55; // [sp+1Ch] [bp-28h]
  _BOOL4 v56; // [sp+1Ch] [bp-28h]
  unsigned int v57; // [sp+20h] [bp-24h]
  int j; // [sp+24h] [bp-20h]
  __int64 v59; // [sp+28h] [bp-1Ch]
  int v60; // [sp+38h] [bp-Ch]
  unsigned int v61; // [sp+3Ch] [bp-8h] BYREF

  v1 = *a1;
  if ( *(_BYTE *)(*a1 + 64) != 0 )
    a1[20] = 7;
  v3 = (void *)a1[50];
  if ( v3 != nullptr )
    j_memset(v3, 0, a1[49]);
  v4 = a1[44];
  if ( v4 != 0 )
  {
    while ( *(_DWORD *)(v4 + 4) != 0 )
      v4 = *(_DWORD *)(v4 + 4);
    sub_34E4D8((int **)v4);
  }
  v5 = 0;
  a1[44] = 0;
  a1[46] = 0;
  if ( a1[14] != 0 )
  {
    while ( v5 < a1[9] )
    {
      v8 = *(int **)(a1[14] + 4 * v5);
      if ( v8 != nullptr )
      {
        sub_375134((_DWORD **)a1, v8);
        *(_DWORD *)(a1[14] + 4 * v5) = 0;
      }
      ++v5;
    }
  }
  v6 = a1[2];
  if ( v6 != 0 )
  {
    LODWORD(v7) = v6 + 40;
    HIDWORD(v7) = a1[7];
    sub_355930(v7);
  }
  while ( 1 )
  {
    v10 = (_DWORD *)a1[45];
    if ( v10 == nullptr )
      break;
    v11 = 0;
    a1[45] = v10[1];
    v50 = (int)&v10[10 * v10[15] + 18];
    while ( v11 < v10[16] )
      sub_375134((_DWORD **)*v10, *(int **)(v50 + 4 * v11++));
    LODWORD(v9) = v10 + 18;
    HIDWORD(v9) = v10[15];
    sub_355930(v9);
    sub_354940(*(_DWORD **)*v10, v10);
  }
  sub_354D84((_DWORD **)a1, -1, 0);
  result = 0;
  if ( a1[10] == -1108210269 )
  {
    if ( (int)a1[19] < 0 || (v43 = (char *)a1 + 89, (*((_BYTE *)a1 + 89) & 2) == 0) )
    {
LABEL_104:
      if ( (int)a1[19] >= 0 )
      {
        --*(_DWORD *)(v1 + 140);
        if ( (*((_BYTE *)a1 + 89) & 1) == 0 )
          --*(_DWORD *)(v1 + 148);
        if ( (*((_BYTE *)a1 + 89) & 2) != 0 )
          --*(_DWORD *)(v1 + 144);
      }
      a1[10] = 1369188723;
      if ( *(_BYTE *)(*a1 + 64) != 0 )
        a1[20] = 7;
      return a1[20] == 5 ? a1[20] : 0;
    }
    if ( a1[25] != 0 )
      sub_357956(a1);
    v13 = (unsigned __int8)a1[20];
    if ( v13 == 7 || (unsigned int)(v13 - 9) <= 1 || v13 == 13 )
    {
      if ( (*v43 & 1) != 0 && v13 == 9 )
      {
        v14 = 1;
        v51 = 0;
      }
      else if ( (v13 == 7 || v13 == 13) && *((unsigned __int8 *)a1 + 88) >> 7 != 0 )
      {
        v14 = 1;
        v51 = 2;
      }
      else
      {
        sub_36B5C0(v1, 516);
        sub_354F0A((_DWORD *)v1);
        v14 = 1;
        *(_BYTE *)(v1 + 62) = 1;
        v51 = 0;
      }
    }
    else
    {
      v14 = 0;
      v51 = 0;
    }
    if ( a1[20] == 0 )
      sub_3653B4(a1, 0);
    if ( *(int *)(v1 + 296) > 0 && *(_DWORD *)(v1 + 320) == 0
      || *(_BYTE *)(v1 + 62) == 0
      || *(_DWORD *)(v1 + 148) != !(*v43 & 1) )
    {
      if ( v51 == 0 )
      {
        if ( a1[20] != 0 )
        {
          v27 = *((unsigned __int8 *)a1 + 86);
          if ( v27 == 3 )
          {
            v51 = 1;
            v42 = sub_367DAC(a1, 1);
          }
          else
          {
            if ( v27 != 2 )
            {
LABEL_97:
              sub_36B5C0(v1, 516);
              sub_354F0A((_DWORD *)v1);
              *(_BYTE *)(v1 + 62) = 1;
              goto LABEL_98;
            }
            v51 = *((unsigned __int8 *)a1 + 86);
            v42 = sub_367DAC(a1, v51);
          }
          goto LABEL_93;
        }
        v51 = 1;
      }
LABEL_92:
      v42 = sub_367DAC(a1, v51);
LABEL_93:
      if ( v42 != 0 )
      {
        if ( a1[20] == 0 || (unsigned __int8)a1[20] == 19 )
        {
          a1[20] = v42;
          sub_354940((_DWORD *)v1, (_DWORD *)a1[11]);
          a1[11] = 0;
        }
        goto LABEL_97;
      }
LABEL_98:
      v28 = *((unsigned __int8 *)a1 + 88);
      HIDWORD(v29) = v28 << 27;
      if ( (v28 & 0x10) != 0 )
      {
        if ( v51 == 2 )
        {
          *(_DWORD *)(v1 + 80) = 0;
        }
        else
        {
          v30 = a1[23];
          v31 = *(_DWORD *)(v1 + 84);
          *(_DWORD *)(v1 + 80) = v30;
          *(_DWORD *)(v1 + 84) = v31 + v30;
        }
        a1[23] = 0;
      }
      LODWORD(v29) = a1;
      sub_3565A0(v29);
      goto LABEL_104;
    }
    if ( a1[20] != 0 && (*((_BYTE *)a1 + 86) != 3 || v14 != 0) )
      goto LABEL_82;
    v16 = sub_3653B4(a1, 1);
    if ( v16 != 0 )
    {
      if ( (*v43 & 1) != 0 )
      {
        LODWORD(v15) = a1;
        sub_3565A0(v15);
        return 1;
      }
      v16 = 787;
      goto LABEL_81;
    }
    v17 = *(_DWORD *)(v1 + 320);
    v52 = 0;
    *(_DWORD *)(v1 + 320) = 0;
    v54 = v17;
    while ( v52 < *(_DWORD *)(v1 + 296) )
    {
      v18 = *(_DWORD *)(*(_DWORD *)(v54 + 4 * v52) + 8);
      v44 = v18;
      if ( v18 != 0 )
      {
        v19 = *(int (__fastcall **)(int))(*(_DWORD *)v18 + 60);
        if ( v19 != nullptr )
        {
          v47 = v19(v44);
          sub_355DCE(a1, (void **)(v44 + 8));
        }
        else
        {
          v47 = 0;
        }
      }
      else
      {
        v47 = 0;
      }
      ++v52;
      if ( v47 != 0 )
      {
        v16 = v47;
        break;
      }
    }
    HIDWORD(v20) = v54;
    v21 = 0;
    v48 = 0;
    *(_DWORD *)(v1 + 320) = v54;
    for ( i = 0; ; ++i )
    {
      if ( v16 != 0 )
        goto LABEL_78;
      if ( i >= *(_DWORD *)(v1 + 20) )
        break;
      HIDWORD(v20) = *(_DWORD *)(v1 + 16);
      v22 = *(_DWORD *)(HIDWORD(v20) + 16 * i + 4);
      if ( v22 != 0 && *(_BYTE *)(v22 + 8) == 2 )
      {
        v48 += i != 1;
        sub_3574C2(*(_DWORD *)(HIDWORD(v20) + 16 * i + 4));
        if ( *(_DWORD *)(**(_DWORD **)(v22 + 4) + 208) == 0 )
          v16 = sub_35708A(**(_DWORD **)(v22 + 4), 4);
        sub_35655E(v22);
        v21 = 1;
      }
    }
    if ( v21 != 0 )
    {
      v23 = *(int (__fastcall **)(_DWORD))(v1 + 184);
      if ( v23 != nullptr && v23(*(_DWORD *)(v1 + 180)) != 0 )
      {
        v16 = 531;
LABEL_81:
        a1[20] = v16;
LABEL_82:
        sub_36B5C0(v1, 0);
        goto LABEL_83;
      }
    }
    v24 = **(_DWORD **)(*(_DWORD *)(*(_DWORD *)(v1 + 16) + 4) + 4);
    if ( *(_BYTE *)(v24 + 14) != 0 )
      v32 = (const char *)&unk_3FB8EA;
    else
      v32 = *(const char **)(v24 + 168);
    v55 = sub_34CF50((unsigned int)v32);
    if ( v55 == 0 || v48 <= 1 )
    {
      v25 = 0;
      while ( 1 )
      {
        HIDWORD(v20) = *(_DWORD *)(v1 + 20);
        if ( v25 >= SHIDWORD(v20) )
          break;
        LODWORD(v20) = *(_DWORD *)(*(_DWORD *)(v1 + 16) + 16 * v25 + 4);
        if ( (_DWORD)v20 != 0 )
          LODWORD(v20) = sub_36C804(v20, 0);
        ++v25;
        if ( (_DWORD)v20 != 0 )
        {
          v16 = v20;
          break;
        }
      }
      v26 = 0;
      while ( v16 == 0 )
      {
        if ( v26 >= *(_DWORD *)(v1 + 20) )
          goto LABEL_141;
        v33 = *(_DWORD *)(*(_DWORD *)(v1 + 16) + 16 * v26 + 4);
        if ( v33 != 0 )
          v16 = sub_3681E0(v33, 0);
        ++v26;
      }
LABEL_78:
      if ( v16 == 5 && (*((_BYTE *)a1 + 89) & 1) != 0 )
      {
        LODWORD(v20) = a1;
        sub_3565A0(v20);
        return 5;
      }
      goto LABEL_81;
    }
    v53 = *(_DWORD *)v1;
    v46 = (char *)sub_36541C(v1, "%s-mjXXXXXX9XXz", v32);
    if ( v46 == nullptr )
    {
      v16 = 7;
      goto LABEL_81;
    }
    v34 = 0;
    while ( 1 )
    {
      sqlite3_randomness(4, &v61);
      ++v34;
      sqlite3_snprintf(13, (int)&v46[v55], (int)"-mj%06X9%02X", v61 >> 8);
      v16 = sub_34CAD0(v53);
      if ( v16 != 0 )
        goto LABEL_135;
      if ( v60 == 0 )
        goto LABEL_142;
      if ( v34 > 100 )
        break;
      if ( v34 == 1 )
        sqlite3_log(13, (int)"MJ collide: %s", v46);
    }
    sqlite3_log(13, (int)"MJ delete: %s", v46);
    sub_34CAC8(v53);
LABEL_142:
    v16 = 7;
    v49 = (int *)sub_351CC4(*(_DWORD *)(v53 + 4));
    if ( v49 != nullptr )
    {
      v16 = sub_34CAB4(v53, (int)v46, (int)v49, 16406);
      if ( v16 == 0 )
      {
        v59 = 0;
        v56 = false;
        for ( j = 0; j < *(_DWORD *)(v1 + 20); ++j )
        {
          v35 = *(_DWORD *)(*(_DWORD *)(v1 + 16) + 16 * j + 4);
          if ( v35 != 0 && *(_BYTE *)(v35 + 8) == 2 )
          {
            v40 = *(_DWORD *)(v35 + 4);
            v57 = *(_DWORD *)(*(_DWORD *)v40 + 172);
            if ( v57 != 0 )
            {
              if ( v56 )
              {
                v56 = true;
              }
              else
              {
                sub_3574C2(v35);
                v41 = *(unsigned __int8 *)(*(_DWORD *)v40 + 7);
                sub_35655E(v35);
                v56 = v41 == 0;
              }
              sub_34CF50(v57);
              v16 = sub_34CA4C((int)v49);
              v59 += (int)(sub_34CF50(v57) + 1);
              if ( v16 != 0 )
                goto LABEL_155;
            }
          }
        }
        if ( v56 && (sub_34CA90((int)v49) & 0x400) == 0 )
        {
          v16 = sub_34CA68((int)v49);
          if ( v16 != 0 )
          {
LABEL_155:
            sub_351DB4(v49);
            sub_34CAC8(v53);
            goto LABEL_135;
          }
        }
        v36 = 0;
        while ( v36 < *(_DWORD *)(v1 + 20) )
        {
          v37 = *(_DWORD *)(*(_DWORD *)(v1 + 16) + 16 * v36 + 4);
          if ( v37 != 0 )
            v37 = sub_36C804(v37, (int)v46);
          v38 = v37;
          ++v36;
          if ( v37 != 0 )
            goto LABEL_161;
        }
        v38 = 0;
LABEL_161:
        sub_351DB4(v49);
        if ( v38 == 0 )
        {
          v16 = sub_34CAC8(v53);
          sub_354940((_DWORD *)v1, v46);
          if ( v16 != 0 )
            goto LABEL_78;
          sub_34CB1C();
          while ( v38 < *(_DWORD *)(v1 + 20) )
          {
            v39 = *(_DWORD *)(*(_DWORD *)(v1 + 16) + 16 * v38 + 4);
            if ( v39 != 0 )
              sub_3681E0(v39, 1);
            ++v38;
          }
          sub_34CB30();
LABEL_141:
          sub_354E6E((unsigned int)v1 | 0x4000000000LL);
          *(_DWORD *)(v1 + 496) = 0;
          *(_DWORD *)(v1 + 500) = 0;
          *(_DWORD *)(v1 + 504) = 0;
          *(_DWORD *)(v1 + 508) = 0;
          *(_DWORD *)(v1 + 24) &= 0xFEFFFFFD;
LABEL_83:
          *(_DWORD *)(v1 + 492) = 0;
          if ( v51 == 0 )
            goto LABEL_98;
          goto LABEL_92;
        }
        sub_354940((_DWORD *)v1, v46);
        v16 = v38;
        goto LABEL_78;
      }
      sqlite3_free(v49);
    }
LABEL_135:
    sub_354940((_DWORD *)v1, v46);
    goto LABEL_78;
  }
  return result;
}


//======================================================================
// sub_3758B8
// address: 0x003758B8   size: 0x8A (138 bytes)
//======================================================================
int __fastcall sub_3758B8(_DWORD **a1)
{
  _DWORD *v2; // r5
  __int64 v3; // r0
  const char *v4; // r2
  unsigned int v5; // r0

  v2 = *a1;
  sub_3751D8(a1);
  if ( (int)a1[19] < 0 )
  {
    HIDWORD(v3) = a1[20];
    if ( HIDWORD(v3) != 0 && ((_BYTE)a1[22] & 0x20) != 0 )
    {
      if ( a1[11] != nullptr )
        v4 = "%s";
      else
        v4 = nullptr;
      LODWORD(v3) = v2;
      sub_36024C(v3, (int)v4);
      sub_354940(v2, a1[11]);
      a1[11] = nullptr;
    }
  }
  else
  {
    sub_3602A0((int)a1);
    sub_354940(v2, a1[11]);
    a1[11] = nullptr;
    if ( ((_BYTE)a1[22] & 0x40) != 0 )
      *((_BYTE *)a1 + 88) |= 0x20u;
  }
  sub_354940(*a1, a1[11]);
  a1[11] = nullptr;
  a1[5] = nullptr;
  a1[34] = nullptr;
  a1[35] = nullptr;
  v5 = (unsigned int)a1[20];
  a1[10] = (_DWORD *)649915045;
  return v5 & v2[14];
}


//======================================================================
// sub_37594C
// address: 0x0037594C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_37594C(int a1)
{
  int v1; // r3
  int v3; // r5

  v1 = *(_DWORD *)(a1 + 40);
  if ( v1 == -1108210269 || (v3 = 0, v1 == 1369188723) )
    v3 = sub_3758B8((_DWORD **)a1);
  sub_355C38((unsigned int *)a1);
  return v3;
}


//======================================================================
// sub_3759F0
// address: 0x003759F0   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_3759F0(int result)
{
  unsigned int **v1; // r4
  int v2; // r3

  v1 = (unsigned int **)result;
  v2 = *(_DWORD *)(result + 552) - 1;
  *(_DWORD *)(result + 552) = v2;
  if ( v2 == 0 )
  {
    sqlite3_finalize(*(unsigned int **)(result + 576));
    sqlite3_finalize(v1[145]);
    sqlite3_finalize(v1[146]);
    sqlite3_finalize(v1[147]);
    sqlite3_finalize(v1[148]);
    sqlite3_finalize(v1[149]);
    sqlite3_finalize(v1[150]);
    sqlite3_finalize(v1[151]);
    sqlite3_finalize(v1[152]);
    return sqlite3_free(v1);
  }
  return result;
}


//======================================================================
// sub_375A64
// address: 0x00375A64   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_375A64(int a1)
{
  sub_3759F0(a1);
  return 0;
}


//======================================================================
// sub_375A70
// address: 0x00375A70   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_375A70(int a1, int a2, int a3, int a4, int (__fastcall *a5)(_DWORD, int, int, int))
{
  unsigned int v8; // r5
  int v9; // r6
  int v10; // r7
  int v11; // r4

  if ( a1 == 0 )
    return sub_35EB98(73832);
  v8 = *(_DWORD *)(a1 + 24);
  sqlite3_mutex_enter(*(_DWORD *)(v8 + 12));
  v9 = *(_DWORD *)(a1 + 20);
  if ( a3 >= 0 && a4 >= 0 && a4 + a3 <= *(_DWORD *)(a1 + 4) )
  {
    if ( v9 != 0 )
    {
      sub_3574C2(**(_DWORD **)(a1 + 16));
      v10 = a5(*(_DWORD *)(a1 + 16), a4 + *(_DWORD *)(a1 + 8), a3, a2);
      sub_35655E(**(_DWORD **)(a1 + 16));
      if ( v10 == 4 )
      {
        sub_37594C(v9);
        *(_DWORD *)(a1 + 20) = 0;
      }
      else
      {
        *(_DWORD *)(v8 + 52) = v10;
        *(_DWORD *)(v9 + 80) = v10;
      }
    }
    else
    {
      v10 = 4;
    }
  }
  else
  {
    sub_36024C(v8 | 0x100000000LL, 0);
    v10 = 1;
  }
  v11 = sub_3602F4(__SPAIR64__(v10, v8));
  sqlite3_mutex_leave(*(_DWORD *)(v8 + 12));
  return v11;
}


//======================================================================
// sub_375B8C
// address: 0x00375B8C   size: 0x8E (142 bytes)
//======================================================================
_DWORD *__fastcall sub_375B8C(int a1, int a2, int a3, char a4, int a5)
{
  int v5; // r4
  int *v7; // r7
  int *v8; // r1
  int v9; // r4
  _DWORD *v10; // r4
  void *v11; // r0
  int v13; // [sp+0h] [bp-14h]
  int v14; // [sp+4h] [bp-10h]
  __int16 v15; // [sp+8h] [bp-Ch]

  v15 = a3;
  v5 = 0;
  v7 = (int *)(*(_DWORD *)(a1 + 8) + 40 * (*(_DWORD *)(a1 + 28) - a2));
  v14 = 8 * (a3 + 12);
  if ( a5 != 0 )
    v5 = 208;
  v13 = 4 * a2;
  v8 = *(int **)(*(_DWORD *)(a1 + 56) + 4 * a2);
  v9 = v5 + v14;
  if ( v8 != nullptr )
  {
    sub_375134((_DWORD **)a1, v8);
    *(_DWORD *)(*(_DWORD *)(a1 + 56) + v13) = 0;
  }
  if ( sub_359644(v7, v9, 0) != 0 )
    return nullptr;
  v10 = (_DWORD *)v7[1];
  *(_DWORD *)(*(_DWORD *)(a1 + 56) + v13) = v10;
  j_memset(v10, 0, 0x60u);
  *((_BYTE *)v10 + 24) = a4;
  *((_WORD *)v10 + 10) = v15;
  if ( a5 != 0 )
  {
    v11 = (void *)(v7[1] + v14);
    *v10 = v11;
    j_memset(v11, 0, 0x56u);
  }
  return v10;
}


//======================================================================
// sub_375C1C
// address: 0x00375C1C   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall sub_375C1C(int a1, int a2, int *a3)
{
  unsigned __int8 *v3; // r5
  int v4; // r7
  int v5; // r4
  int i; // r6
  const char *v7; // r2
  int v8; // r0
  _BYTE v11[128]; // [sp+Ch] [bp-88h] BYREF

  v3 = (unsigned __int8 *)sqlite3_value_text(*a3);
  v4 = sqlite3_context_db_handle(a1);
  if ( v3 == nullptr )
    v3 = (unsigned __int8 *)&unk_3FB8EA;
  v5 = 0;
  for ( i = 0; i < *(_DWORD *)(v4 + 20); ++i )
  {
    v5 = *(_DWORD *)(v4 + 16) + 16 * i;
    if ( *(_DWORD *)(v5 + 4) != 0 && sqlite3_stricmp(*(_BYTE **)v5, v3) == 0 )
      break;
  }
  if ( i < *(_DWORD *)(v4 + 20) )
  {
    if ( i > 1 )
    {
      if ( *(_BYTE *)(v4 + 62) == 0 )
      {
        sqlite3_snprintf(128, (int)v11, (int)"cannot DETACH database within transaction", *(unsigned __int8 *)(v4 + 62));
        return sqlite3_result_error(a1, v11, -1);
      }
      v8 = *(_DWORD *)(v5 + 4);
      if ( *(_BYTE *)(v8 + 8) == 0 && *(_DWORD *)(v8 + 16) == 0 )
      {
        sub_374D70(v8);
        *(_DWORD *)(v5 + 4) = 0;
        *(_DWORD *)(v5 + 12) = 0;
        return sub_3577F4((_DWORD *)v4);
      }
      v7 = "database %s is locked";
    }
    else
    {
      v7 = "cannot detach database %s";
    }
  }
  else
  {
    v7 = "no such database: %s";
  }
  sqlite3_snprintf(128, (int)v11, (int)v7, (int)v3);
  return sqlite3_result_error(a1, v11, -1);
}


//======================================================================
// sub_375D08
// address: 0x00375D08   size: 0xAE (174 bytes)
//======================================================================
int __fastcall sub_375D08(int a1, int a2, int a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r7
  int v7; // r3
  int v8; // r5
  int v9; // r4
  int v10; // r3
  int v11; // r4
  int v12; // r0
  int result; // r0
  int v14; // [sp+18h] [bp-1Ch]
  int v15; // [sp+1Ch] [bp-18h]
  int v16; // [sp+20h] [bp-14h]

  v16 = 0;
  v6 = 0;
  v15 = 0;
  while ( v6 < *(_DWORD *)(a1 + 20) )
  {
    if ( v15 != 0 )
      return v15;
    if ( v6 == a2 || a2 == 10 )
    {
      v7 = *(_DWORD *)(a1 + 16) + 16 * v6;
      v8 = *(_DWORD *)(v7 + 4);
      if ( v8 != 0 )
      {
        v9 = *(_DWORD *)(v8 + 4);
        v14 = v9;
        sub_3574C2(*(_DWORD *)(v7 + 4));
        v10 = *(unsigned __int8 *)(v9 + 20);
        v11 = 6;
        if ( v10 == 0 )
        {
          v12 = *(_DWORD *)(*(_DWORD *)v14 + 208);
          if ( v12 != 0 )
            v12 = sub_36D608(
                    v12,
                    a3,
                    *(int (__fastcall **)(int))(*(_DWORD *)v14 + 176),
                    *(_DWORD *)(*(_DWORD *)v14 + 180),
                    *(unsigned __int8 *)(*(_DWORD *)v14 + 9),
                    *(_DWORD *)(*(_DWORD *)v14 + 152),
                    *(_DWORD *)(*(_DWORD *)v14 + 200),
                    a4,
                    a5);
          v11 = v12;
        }
        sub_35655E(v8);
        if ( v11 == 5 )
          v16 = 1;
        else
          v15 = v11;
      }
      a5 = nullptr;
      a4 = nullptr;
    }
    ++v6;
  }
  if ( v15 != 0 )
    return v15;
  result = 5;
  if ( v16 == 0 )
    return v15;
  return result;
}


//======================================================================
// sub_375E4E
// address: 0x00375E4E   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_375E4E(int a1, unsigned int a2, unsigned int a3, int a4)
{
  if ( a1 <= a4 )
  {
    sub_34CB1C();
    sqlite3_wal_checkpoint(__SPAIR64__(a3, a2));
    sub_34CB30();
  }
  return 0;
}


//======================================================================
// sub_375E6C
// address: 0x00375E6C   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_375E6C(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  int v4; // r1
  int i; // r3
  int result; // r0
  int v7; // r3

  v2 = a1;
  if ( a1[103] != 0 )
    v2 = (_DWORD *)a1[103];
  v4 = v2[114];
  for ( i = 0; i < v4; ++i )
  {
    result = *(_DWORD *)(4 * i + v2[131]);
    if ( a2 == result )
      return result;
  }
  result = sqlite3_realloc(v2[131], 4 * (v4 + 1));
  if ( result != 0 )
  {
    v2[131] = result;
    v7 = v2[114];
    v2[114] = v7 + 1;
    *(_DWORD *)(4 * v7 + result) = a2;
  }
  else
  {
    *(_BYTE *)(*v2 + 64) = 1;
  }
  return result;
}


//======================================================================
// sub_375EC8
// address: 0x00375EC8   size: 0x144 (324 bytes)
//======================================================================
_BYTE *__fastcall sub_375EC8(int a1, int a2, int *a3)
{
  _BYTE *result; // r0
  _BYTE *v5; // r4
  int v6; // r5
  int i; // r6
  unsigned __int8 *v8; // r1
  int v9; // r7
  int v10; // r0
  _BYTE *v11; // r7
  __int64 v12; // [sp+0h] [bp-34h]
  unsigned __int8 *v14; // [sp+Ch] [bp-28h]
  int v15; // [sp+10h] [bp-24h]
  int v16; // [sp+14h] [bp-20h]
  int v17; // [sp+18h] [bp-1Ch]
  _BYTE *v18; // [sp+1Ch] [bp-18h]
  void *v19; // [sp+28h] [bp-Ch]

  result = (_BYTE *)sqlite3_value_text(*a3);
  v18 = result;
  if ( result != nullptr )
  {
    v16 = sqlite3_value_bytes(*a3);
    result = (_BYTE *)sqlite3_value_text(a3[1]);
    v14 = result;
    if ( result != nullptr )
    {
      if ( *result != 0 )
      {
        v15 = sqlite3_value_bytes(a3[1]);
        result = (_BYTE *)sqlite3_value_text(a3[2]);
        v19 = result;
        if ( result != nullptr )
        {
          v17 = sqlite3_value_bytes(a3[2]);
          v12 = v16 + 1;
          result = (_BYTE *)sub_359FB0(a1, v12);
          v5 = result;
          if ( result != nullptr )
          {
            v6 = 0;
            for ( i = 0; ; ++i )
            {
              v8 = &v18[i];
              if ( i > v16 - v15 )
                break;
              v9 = *v8;
              if ( *v14 == v9 && j_memcmp(&v18[i], v14, v15) == 0 )
              {
                v12 += v17 - v15;
                if ( v12 - 1 > *(int *)(sqlite3_context_db_handle(a1) + 88) )
                {
                  sqlite3_result_error_toobig(a1);
                  return (_BYTE *)sqlite3_free(v5);
                }
                v10 = sqlite3_realloc((int)v5, v12);
                v11 = (_BYTE *)v10;
                if ( v10 == 0 )
                {
                  sqlite3_result_error_nomem(a1);
                  return (_BYTE *)sqlite3_free(v5);
                }
                j_memcpy((void *)(v10 + v6), v19, v17);
                v5 = v11;
                v6 += v17;
                i += v15 - 1;
              }
              else
              {
                v5[v6++] = v9;
              }
            }
            j_memcpy(&v5[v6], v8, v16 - i);
            v5[v6 + v16 - i] = 0;
            return (_BYTE *)sqlite3_result_text(a1, v5, v6 + v16 - i, sqlite3_free);
          }
        }
      }
      else
      {
        return (_BYTE *)sqlite3_result_value(a1, (void *)*a3);
      }
    }
  }
  return result;
}


//======================================================================
// sub_376124
// address: 0x00376124   size: 0x284 (644 bytes)
//======================================================================
int __fastcall sub_376124(__int64 a1, int *a2)
{
  int v2; // r6
  int v4; // r3
  int v5; // r4
  __int64 v6; // r2
  __time_t tv_sec; // r5
  _DWORD *v8; // r0
  const char *v9; // r2
  int v10; // r3
  __int64 v11; // r0
  __int64 v12; // r4
  int v13; // r3
  _DWORD *v14; // r0
  int v16; // r0
  __int64 v17; // r2
  int v18; // r3
  __int16 v19; // r2
  unsigned int v20; // r3
  int v21; // r0
  const char *v22; // r0
  const char *v23; // r4
  __int64 v24; // r2
  __int64 length; // [sp+10h] [bp-84h]
  __int64 v27; // [sp+18h] [bp-7Ch]
  int v28; // [sp+20h] [bp-74h]
  unsigned int v29; // [sp+24h] [bp-70h]
  struct stat buf; // [sp+28h] [bp-6Ch] BYREF

  v2 = a1;
  switch ( HIDWORD(a1) )
  {
    case 1:
      v4 = *(unsigned __int8 *)(a1 + 16);
      goto LABEL_34;
    case 4:
      *a2 = *(_DWORD *)(a1 + 20);
      return 0;
    case 5:
      length = *(_QWORD *)a2;
      HIDWORD(a1) = *(_DWORD *)(a1 + 40);
      if ( a1 <= 0 )
        goto LABEL_21;
      if ( off_472364(*(_DWORD *)(a1 + 12), &buf) != 0 )
        return 1802;
      a1 = (length + *(int *)(v2 + 40) - 1) / *(int *)(v2 + 40) * *(int *)(v2 + 40);
      v28 = HIDWORD(a1);
      HIDWORD(a1) = buf.st_blocks;
      v6 = (length + *(int *)(v2 + 40) - 1) / *(int *)(v2 + 40) * *(int *)(v2 + 40);
      v29 = (length + *(int *)(v2 + 40) - 1) / *(int *)(v2 + 40) * *(_DWORD *)(v2 + 40);
      if ( buf.st_blocks >= SHIDWORD(v6) )
      {
        if ( buf.st_blocks != HIDWORD(v6) )
          goto LABEL_21;
        HIDWORD(a1) = buf.st_blksize;
        if ( buf.st_blksize >= (unsigned int)a1 )
          goto LABEL_21;
      }
      tv_sec = buf.st_atim.tv_sec;
      if ( sub_350CD8(*(_DWORD *)(v2 + 12), SHIDWORD(a1), v6) != 0 )
      {
        v8 = (_DWORD *)j___errno();
        v9 = *(const char **)(v2 + 32);
        *(_DWORD *)(v2 + 20) = *v8;
        v10 = 27387;
        return sub_35ECE0(1546, "ftruncate", v9, v10);
      }
      LODWORD(v27) = tv_sec;
      HIDWORD(v27) = (unsigned __int64)tv_sec >> 31;
      v11 = (*(_QWORD *)&buf.st_blksize + 2 * tv_sec - 1LL) / v27 * v27;
      v12 = -1;
      while ( 1 )
      {
        v12 += v11;
        HIDWORD(a1) = v28;
        if ( __SPAIR64__(v28, v29) <= v12 )
          break;
        if ( sub_350DE0(*(_DWORD *)(v2 + 12), v28, v12, SHIDWORD(v12), &unk_3FB8EA, 1, (_DWORD *)(v2 + 20)) != 1 )
          return 778;
        v11 = v27;
      }
LABEL_21:
      if ( *(__int64 *)(v2 + 64) > 0 )
      {
        v13 = *(_DWORD *)(v2 + 52);
        if ( v13 < SHIDWORD(length)
          || v13 == HIDWORD(length) && (HIDWORD(a1) = length, *(_DWORD *)(v2 + 48) < (unsigned int)length) )
        {
          if ( *(int *)(v2 + 40) > 0 || sub_350CD8(*(_DWORD *)(v2 + 12), SHIDWORD(a1), length) == 0 )
          {
            v5 = 0;
            if ( *(int *)(v2 + 44) > 0 )
              return v5;
            v16 = v2;
            v17 = length;
            return sub_35EDAC(v16, v17);
          }
          v14 = (_DWORD *)j___errno();
          v9 = *(const char **)(v2 + 32);
          *(_DWORD *)(v2 + 20) = *v14;
          v10 = 27405;
          return sub_35ECE0(1546, "ftruncate", v9, v10);
        }
      }
      return 0;
    case 6:
      *(_DWORD *)(a1 + 40) = *a2;
      return 0;
    case 0xA:
      v5 = *a2;
      v18 = *(unsigned __int16 *)(a1 + 18);
      v19 = 4;
      if ( v5 >= 0 )
        goto LABEL_37;
      v20 = v18 << 29;
      goto LABEL_33;
    case 0xC:
      v21 = sqlite3_mprintf((int)"%s", *(const char **)(*(_DWORD *)(a1 + 4) + 16));
      goto LABEL_44;
    case 0xD:
      v5 = *a2;
      v18 = *(unsigned __int16 *)(a1 + 18);
      v19 = 16;
      if ( v5 >= 0 )
      {
LABEL_37:
        if ( v5 == 0 )
        {
          *(_WORD *)(a1 + 18) = v18 & ~v19;
          return v5;
        }
        *(_WORD *)(a1 + 18) = v18 | v19;
      }
      else
      {
        v20 = v18 << 27;
LABEL_33:
        v4 = v20 >> 31;
LABEL_34:
        *a2 = v4;
      }
      return 0;
    case 0x10:
      v22 = (const char *)sqlite3_malloc(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 8));
      v23 = v22;
      if ( v22 != nullptr )
      {
        sub_35E224(*(_DWORD *)(*(_DWORD *)(v2 + 4) + 8), v22);
        *a2 = (int)v23;
      }
      return 0;
    case 0x12:
      LODWORD(v24) = *a2;
      HIDWORD(v24) = a2[1];
      if ( v24 > qword_4716F0 )
        v24 = qword_4716F0;
      HIDWORD(a1) = *(_DWORD *)(a1 + 68);
      *a2 = *(_DWORD *)(a1 + 64);
      a2[1] = HIDWORD(a1);
      if ( v24 < 0 )
        return 0;
      if ( *(_QWORD *)(a1 + 64) == v24 )
        return 0;
      v5 = *(_DWORD *)(a1 + 44);
      if ( v5 != 0 )
        return 0;
      *(_DWORD *)(a1 + 68) = HIDWORD(v24);
      HIDWORD(v24) = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 64) = v24;
      if ( __SPAIR64__(HIDWORD(v24), *(_DWORD *)(a1 + 48)) <= 0 )
        return 0;
      sub_34DBC8((_DWORD *)a1);
      if ( *(int *)(v2 + 44) > 0 )
        return v5;
      v16 = v2;
      v17 = -1;
      return sub_35EDAC(v16, v17);
    case 0x14:
      v21 = sub_34DACC(a1);
LABEL_44:
      *a2 = v21;
      return 0;
    default:
      return 12;
  }
}


//======================================================================
// sub_3768C2
// address: 0x003768C2   size: 0x48 (72 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003768C2  LDR     R1, [SP,#arg_90]
//   003768C4  LDR     R1, [R1,#0x14]
//   003768C6  MOVS    R6, R1
//   003768C8  SUBS    R6, #1
//   003768CA  LSLS    R7, R6, #4
//   003768CC  CMP     R6, #0
//   003768CE  BGE     loc_3768D4
//   003768D0  BL      sub_377CC4
//   003768D4  LDR     R2, [SP,#arg_90]
//   003768D6  LDR     R2, [R2,#0x10]
//   003768D8  ADDS    R3, R2, R7
//   003768DA  LDR     R3, [R3,#4]
//   003768DC  CMP     R3, #0
//   003768DE  BEQ     loc_376904
//   003768E0  LDR     R3, [SP,#arg_88]
//   003768E2  CMP     R6, R3
//   003768E4  BEQ     loc_3768EE
//   003768E6  LDR     R0, [SP,#arg_94]
//   003768E8  LDR     R0, [R0,#4]
//   003768EA  CMP     R0, #0
//   003768EC  BNE     loc_376904
//   003768EE  MOVS    R0, R4
//   003768F0  MOVS    R1, R6
//   003768F2  BL      sub_34E4B0
//   003768F6  STR     R5, [SP,#arg_0]
//   003768F8  MOVS    R0, R4
//   003768FA  MOVS    R1, #0xC
//   003768FC  MOVS    R2, R6
//   003768FE  MOVS    R3, #1
//   00376900  BL      sub_35A902
//   00376904  SUBS    R6, #1
//   00376906  SUBS    R7, #0x10
//   00376908  B       loc_3768CC

//======================================================================
// sub_37761A
// address: 0x0037761A   size: 0xF8 (248 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037761A  LDR     R4, [SP,#arg_A8]
//   0037761C  CMP     R4, #0
//   0037761E  BNE     loc_377624
//   00377620  BL      sub_377FA2
//   00377624  LDR     R4, [SP,#arg_8C]
//   00377626  CMP     R4, #0
//   00377628  BEQ     loc_37763C
//   0037762A  MOVS    R2, R4
//   0037762C  MOVS    R0, R7
//   0037762E  MOVS    R1, #0
//   00377630  LDR     R3, [SP,#arg_98]
//   00377632  BL      sub_383B28
//   00377636  MOVS    R4, #0
//   00377638  MOVS    R5, R0
//   0037763A  B       loc_377642
//   0037763C  LDR     R4, [SP,#arg_A8]
//   0037763E  LDR     R5, [R4,#8]
//   00377640  LDR     R4, [R4]
//   00377642  STR     R4, [SP,#arg_A8]
//   00377644  CMP     R5, #0
//   00377646  BEQ     sub_37761A
//   00377648  LDR     R0, [R5,#0x10]
//   0037764A  CMP     R0, #0
//   0037764C  BEQ     sub_37761A
//   0037764E  LDR     R1, [R5]
//   00377650  LDR     R2, [R5,#0x20]
//   00377652  MOVS    R0, R7
//   00377654  STR     R1, [SP,#arg_0]
//   00377656  MOVS    R3, #0
//   00377658  LDR     R1, [SP,#arg_88]
//   0037765A  BL      sub_35A7C8
//   0037765E  MOVS    R2, #0x26 ; '&'
//   00377660  LDRSH   R3, [R5,R2]
//   00377662  LDR     R4, [SP,#arg_94]
//   00377664  LDR     R0, [R7,#0x4C]
//   00377666  ADDS    R3, R3, R4
//   00377668  CMP     R3, R0
//   0037766A  BLE     loc_37766E
//   0037766C  STR     R3, [R7,#0x4C]
//   0037766E  MOVS    R3, #0x34 ; '4'
//   00377670  STR     R3, [SP,#arg_0]
//   00377672  MOVS    R0, R7
//   00377674  MOVS    R1, #0
//   00377676  LDR     R2, [SP,#arg_88]
//   00377678  MOVS    R3, R5
//   0037767A  BL      sub_361E26
//   0037767E  MOVS    R2, #0
//   00377680  STR     R2, [SP,#arg_0]
//   00377682  LDR     R1, [R5]
//   00377684  LDR     R0, [SP,#arg_80]
//   00377686  STR     R2, [SP,#arg_8]
//   00377688  STR     R1, [SP,#arg_4]
//   0037768A  LDR     R3, [SP,#arg_B8]
//   0037768C  MOVS    R1, #0x61 ; 'a'
//   0037768E  BL      sub_35A9FC
//   00377692  LDR     R4, [R5,#0x10]
//   00377694  MOVS    R2, #1
//   00377696  STR     R2, [SP,#arg_9C]
//   00377698  CMP     R4, #0
//   0037769A  BNE     loc_3776A0
//   0037769C  BL      sub_377FBC
//   003776A0  LDR     R0, [SP,#arg_90]
//   003776A2  LDR     R1, [R4,#8]
//   003776A4  LDR     R2, [SP,#arg_98]
//   003776A6  BL      sub_34EAFE
//   003776AA  SUBS    R6, R0, #0
//   003776AC  BEQ     loc_377708
//   003776AE  MOVS    R3, #0
//   003776B0  STR     R3, [SP,#arg_D4]
//   003776B2  LDR     R2, [R0,#0x20]
//   003776B4  LDR     R0, [R0]
//   003776B6  LDR     R1, [SP,#arg_88]
//   003776B8  STR     R0, [SP,#arg_0]
//   003776BA  MOVS    R0, R7
//   003776BC  BL      sub_35A7C8
//   003776C0  MOVS    R1, #0
//   003776C2  STR     R1, [SP,#arg_0]
//   003776C4  MOVS    R0, R7
//   003776C6  MOVS    R1, R6
//   003776C8  MOVS    R2, R4
//   003776CA  ADD     R3, SP, #arg_D4
//   003776CC  BL      sub_3619B4
//   003776D0  CMP     R0, #0
//   003776D2  BEQ     loc_3776D8
//   003776D4  BL      sub_377FA2
//   003776D8  LDR     R3, [SP,#arg_D4]
//   003776DA  CMP     R3, #0
//   003776DC  BNE     loc_3776F0
//   003776DE  MOVS    R3, #0x34 ; '4'
//   003776E0  STR     R3, [SP,#arg_0]
//   003776E2  MOVS    R0, R7
//   003776E4  LDR     R1, [SP,#arg_9C]
//   003776E6  LDR     R2, [SP,#arg_88]
//   003776E8  MOVS    R3, R6
//   003776EA  BL      sub_361E26
//   003776EE  B       loc_377708
//   003776F0  LDR     R2, [SP,#arg_88]
//   003776F2  LDR     R3, [R3,#0x2C]
//   003776F4  MOVS    R1, #0x34 ; '4'
//   003776F6  STR     R2, [SP,#arg_0]
//   003776F8  LDR     R0, [SP,#arg_80]
//   003776FA  LDR     R2, [SP,#arg_9C]
//   003776FC  BL      sub_35A902
//   00377700  MOVS    R0, R7
//   00377702  LDR     R1, [SP,#arg_D4]
//   00377704  BL      sub_361E0C
//   00377708  LDR     R3, [SP,#arg_9C]
//   0037770A  LDR     R4, [R4,#4]
//   0037770C  ADDS    R3, #1
//   0037770E  STR     R3, [SP,#arg_9C]
//   00377710  B       loc_377698

//======================================================================
// sub_377CC4
// address: 0x00377CC4   size: 0xE (14 bytes)
//======================================================================
int sub_377CC4()
{
  _DWORD *v0; // r4
  int v1; // r0

  v1 = sub_35AAF0(v0, 35, 1, 1);
  return sub_377FA2(v1);
}


//======================================================================
// sub_377E0E
// address: 0x00377E0E   size: 0x1C (28 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00377E0E  MOVS    R0, R4
//   00377E10  MOVS    R1, #1
//   00377E12  BL      sub_3559A0
//   00377E16  MOVS    R3, #1
//   00377E18  NEGS    R3, R3
//   00377E1A  MOVS    R1, #0
//   00377E1C  STR     R3, [SP,#arg_0]
//   00377E1E  MOVS    R0, R4
//   00377E20  MOVS    R2, R1
//   00377E22  LDR     R3, [SP,#arg_B0]
//   00377E24  BL      sub_35A2BC
//   00377E28  B       sub_377FA2

//======================================================================
// sub_377F9E
// address: 0x00377F9E   size: 0x4 (4 bytes)
//======================================================================
// attributes: thunk
int __fastcall sub_377F9E(_DWORD *a1, int a2, __int64 a3)
{
  int v3; // r0

  v3 = sub_13A9DC(a1, a2, a3);
  return sub_377FA2(v3);
}


//======================================================================
// sub_377FA2
// address: 0x00377FA2   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_377FA2(
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
        _DWORD *a40,
        _DWORD *a41,
        int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        _DWORD *a49)
{
  _DWORD *v49; // r0

  sub_354940(a41, a49);
  v49 = sub_354940(a41, a40);
  return sub_3781D2(v49);
}


//======================================================================
// sub_377FB4
// address: 0x00377FB4   size: 0x8 (8 bytes)
//======================================================================
void __noreturn sub_377FB4()
{
  sub_3768C2();
}


//======================================================================
// sub_377FBC
// address: 0x00377FBC   size: 0x216 (534 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00377FBC  LDR     R1, [R7,#0x48]
//   00377FBE  LDR     R4, [SP,#arg_9C]
//   00377FC0  CMP     R1, R4
//   00377FC2  BGE     loc_377FC8
//   00377FC4  LDR     R4, [SP,#arg_9C]
//   00377FC6  STR     R4, [R7,#0x48]
//   00377FC8  LDR     R0, [SP,#arg_80]
//   00377FCA  MOVS    R1, #0x69 ; 'i'
//   00377FCC  MOVS    R2, #0
//   00377FCE  BL      sub_35AACE
//   00377FD2  LDR     R6, [R5,#0x10]
//   00377FD4  MOVS    R4, #1
//   00377FD6  STR     R0, [SP,#arg_C0]
//   00377FD8  STR     R4, [SP,#arg_9C]
//   00377FDA  CMP     R6, #0
//   00377FDC  BNE     loc_377FE0
//   00377FDE  B       loc_3781A8
//   00377FE0  LDR     R0, [SP,#arg_90]
//   00377FE2  LDR     R1, [R6,#8]
//   00377FE4  LDR     R2, [SP,#arg_98]
//   00377FE6  BL      sub_34EAFE
//   00377FEA  MOVS    R3, #0
//   00377FEC  STR     R0, [SP,#arg_AC]
//   00377FEE  STR     R3, [SP,#arg_D4]
//   00377FF0  STR     R3, [SP,#arg_D8]
//   00377FF2  CMP     R0, R3
//   00377FF4  BEQ     loc_378006
//   00377FF6  ADD     R3, SP, #arg_D8
//   00377FF8  STR     R3, [SP,#arg_0]
//   00377FFA  MOVS    R0, R7
//   00377FFC  LDR     R1, [SP,#arg_AC]
//   00377FFE  MOVS    R2, R6
//   00378000  ADD     R3, SP, #arg_D4
//   00378002  BL      sub_3619B4
//   00378006  LDR     R0, [SP,#arg_80]
//   00378008  LDR     R0, [R0,#0x18]
//   0037800A  STR     R0, [SP,#arg_2C]
//   0037800C  BL      sub_35A856
//   00378010  LDR     R4, [SP,#arg_AC]
//   00378012  STR     R0, [SP,#arg_A4]
//   00378014  CMP     R4, #0
//   00378016  BEQ     loc_37801E
//   00378018  LDR     R2, [SP,#arg_D4]
//   0037801A  CMP     R2, #0
//   0037801C  BEQ     loc_378064
//   0037801E  MOVS    R4, #0
//   00378020  B       loc_37810C
//   00378022  ALIGN 4
//   00378024  DCD off_454868 - 0x377D0E
//   00378028  DCD unk_44ABA4 - 0x377D2E
//   0037802C  DCD aUnsupportedEnc - 0x377D54
//   00378030  DCD unk_44B4A4 - 0x377D9E
//   00378034  DCD unk_44B4A4 - 0x377DE2
//   00378038  DCD aCompileOption - 0x377E46
//   0037803C  DCD aFull - 0x377E98
//   00378040  DCD aRestart - 0x377EA6
//   00378044  DCD aBusy - 0x377EC8
//   00378048  DCD aLog_0 - 0x377ED8
//   0037804C  DCD aCheckpointed - 0x377EE8
//   00378050  DCD sub_375E4E+1 - 0x377F26
//   00378054  DCD aWalAutocheckpo - 0x377F3E
//   00378058  DCD aTimeout - 0x377F6C
//   0037805C  DCD 0xF4240
//   00378060  DCD aSoftHeapLimit - 0x377FA0
//   00378064  LDR     R4, [R6,#0x24]
//   00378066  MOVS    R0, #0x24 ; '$'
//   00378068  LDRSH   R3, [R5,R0]
//   0037806A  CMP     R4, R3
//   0037806C  BEQ     loc_3780AA
//   0037806E  LDR     R1, [SP,#arg_94]
//   00378070  LDR     R0, [SP,#arg_80]
//   00378072  MOVS    R3, R4
//   00378074  STR     R1, [SP,#arg_0]
//   00378076  MOVS    R1, #0x2E ; '.'
//   00378078  BL      sub_35A902
//   0037807C  LDR     R2, [R5,#0xC]
//   0037807E  CMP     R2, #0
//   00378080  BNE     loc_37808E
//   00378082  LDR     R0, [SP,#arg_80]
//   00378084  MOVS    R1, R5
//   00378086  MOVS    R2, R4
//   00378088  LDR     R3, [SP,#arg_94]
//   0037808A  BL      sub_366020
//   0037808E  MOVS    R1, #0x4C ; 'L'
//   00378090  LDR     R2, [SP,#arg_94]
//   00378092  LDR     R3, [SP,#arg_A4]
//   00378094  LDR     R0, [SP,#arg_80]
//   00378096  BL      sub_35AAF0
//   0037809A  LDR     R3, [SP,#arg_80]
//   0037809C  LDR     R0, [SP,#arg_80]
//   0037809E  MOVS    R1, #0x26 ; '&'
//   003780A0  LDR     R3, [R3,#0x20]
//   003780A2  LDR     R2, [SP,#arg_94]
//   003780A4  STR     R3, [SP,#arg_28]
//   003780A6  ADDS    R3, #3
//   003780A8  B       loc_3780B0
//   003780AA  LDR     R0, [SP,#arg_80]
//   003780AC  LDR     R3, [SP,#arg_94]
//   003780AE  MOVS    R1, #0x64 ; 'd'
//   003780B0  BL      sub_35AAF0
//   003780B4  LDR     R4, [SP,#arg_94]
//   003780B6  LDR     R2, [SP,#arg_9C]
//   003780B8  LDR     R0, [SP,#arg_80]
//   003780BA  STR     R4, [SP,#arg_0]
//   003780BC  MOVS    R1, #0x43 ; 'C'
//   003780BE  MOVS    R3, #0
//   003780C0  BL      sub_35A902
//   003780C4  LDR     R0, [SP,#arg_80]
//   003780C6  MOVS    R1, #0x10
//   003780C8  MOVS    R2, #0
//   003780CA  LDR     R3, [SP,#arg_A4]
//   003780CC  BL      sub_35AAF0
//   003780D0  LDR     R0, [SP,#arg_80]
//   003780D2  LDR     R0, [R0,#0x20]
//   003780D4  MOVS    R1, R0
//   003780D6  SUBS    R1, #2
//   003780D8  LDR     R0, [SP,#arg_80]
//   003780DA  BL      sub_34E46E
//   003780DE  B       loc_378150
//   003780E0  LDR     R3, [SP,#arg_D8]
//   003780E2  CMP     R3, #0
//   003780E4  BEQ     loc_378114
//   003780E6  LSLS    R2, R4, #2
//   003780E8  LDR     R3, [R2,R3]
//   003780EA  LDR     R2, [SP,#arg_A0]
//   003780EC  LDR     R0, [SP,#arg_80]
//   003780EE  MOVS    R1, R5
//   003780F0  ADDS    R2, #6
//   003780F2  ADDS    R2, R2, R4
//   003780F4  STR     R2, [SP,#arg_B4]
//   003780F6  STR     R2, [SP,#arg_0]
//   003780F8  MOVS    R2, #0
//   003780FA  BL      sub_36607C
//   003780FE  LDR     R0, [SP,#arg_80]
//   00378100  MOVS    R1, #0x4C ; 'L'
//   00378102  LDR     R2, [SP,#arg_B4]
//   00378104  LDR     R3, [SP,#arg_A4]
//   00378106  BL      sub_35AAF0
//   0037810A  ADDS    R4, #1
//   0037810C  LDR     R1, [R6,#0x14]
//   0037810E  CMP     R4, R1
//   00378110  BLT     loc_3780E0
//   00378112  B       loc_37811C
//   00378114  LSLS    R3, R4, #3
//   00378116  ADDS    R3, R6, R3
//   00378118  LDR     R3, [R3,#0x24]
//   0037811A  B       loc_3780EA
//   0037811C  LDR     R4, [SP,#arg_AC]
//   0037811E  CMP     R4, #0
//   00378120  BEQ     loc_378150
//   00378122  LDR     R1, [SP,#arg_D4]
//   00378124  LDR     R0, [SP,#arg_80]
//   00378126  BL      sub_3517DE
//   0037812A  LDR     R3, [R6,#0x14]
//   0037812C  LDR     R4, [SP,#arg_BC]
//   0037812E  STR     R0, [SP,#arg_4]
//   00378130  STR     R3, [SP,#arg_8]
//   00378132  MOVS    R1, #0x30 ; '0'
//   00378134  LDR     R2, [SP,#arg_94]
//   00378136  STR     R4, [SP,#arg_0]
//   00378138  LDR     R0, [SP,#arg_80]
//   0037813A  BL      sub_35A9FC
//   0037813E  MOVS    R3, #0
//   00378140  STR     R3, [SP,#arg_4]
//   00378142  STR     R4, [SP,#arg_0]
//   00378144  LDR     R0, [SP,#arg_80]
//   00378146  MOVS    R1, #0x42 ; 'B'
//   00378148  LDR     R2, [SP,#arg_9C]
//   0037814A  LDR     R3, [SP,#arg_A4]
//   0037814C  BL      sub_35A98A
//   00378150  LDR     R3, [SP,#arg_A0]
//   00378152  MOVS    R1, #0x64 ; 'd'
//   00378154  MOVS    R2, #0
//   00378156  ADDS    R3, #2
//   00378158  LDR     R0, [SP,#arg_80]
//   0037815A  BL      sub_35AAF0
//   0037815E  MOVS    R2, #0
//   00378160  STR     R2, [SP,#arg_0]
//   00378162  LDR     R0, [R6,#8]
//   00378164  LDR     R3, [SP,#arg_A0]
//   00378166  STR     R2, [SP,#arg_8]
//   00378168  STR     R0, [SP,#arg_4]
//   0037816A  ADDS    R3, #3
//   0037816C  MOVS    R1, #0x61 ; 'a'
//   0037816E  LDR     R0, [SP,#arg_80]
//   00378170  BL      sub_35A9FC
//   00378174  LDR     R2, [SP,#arg_9C]
//   00378176  MOVS    R1, #0x19
//   00378178  LDR     R3, [SP,#arg_C4]
//   0037817A  SUBS    R2, #1
//   0037817C  LDR     R0, [SP,#arg_80]
//   0037817E  BL      sub_35AAF0
//   00378182  LDR     R2, [SP,#arg_B8]
//   00378184  MOVS    R3, #4
//   00378186  MOVS    R1, #0x23 ; '#'
//   00378188  LDR     R0, [SP,#arg_80]
//   0037818A  BL      sub_35AAF0
//   0037818E  LDR     R0, [SP,#arg_80]
//   00378190  LDR     R1, [SP,#arg_A4]
//   00378192  BL      sub_34E412

//======================================================================
// sub_3781D2
// address: 0x003781D2   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3781D2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_3781D8
// address: 0x003781D8   size: 0x30 (48 bytes)
//======================================================================
void __fastcall sub_3781D8(int a1, int a2, int a3, int a4, int a5)
{
  if ( *(int *)a1 < 0 )
  {
    *(_DWORD *)a1 = 0;
    *(_DWORD *)(a1 + 4) = -1;
    *(_WORD *)(a1 + 12) = 0;
    *(_BYTE *)(a1 + 14) = 0;
  }
  *(_DWORD *)(a1 + 8) = a5;
  JUMPOUT(0x378208);
}


//======================================================================
// sub_378B22
// address: 0x00378B22   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_378B22(
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
        int *a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62)
{
  int v62; // r6
  _DWORD *v63; // r7
  int v64; // r3
  int v65; // r2
  int v66; // r0
  unsigned int v67; // r4
  int v68; // r0
  int v69; // r1
  int *v70; // r0
  int v71; // r4

  v63[18] = 0;
  v63[19] = 0;
  v63[20] = 0;
  v63[111] = 0;
  v63[84] = 0;
  v64 = byte_44CF16[2 * a49];
  v65 = byte_44CF16[2 * a49 + 1];
  v66 = *a44 - v65;
  *a44 = v66;
  v67 = word_44C326[word_44D1A4[*(unsigned __int16 *)(v62 - 16 * v65)] + 31 + v64];
  if ( v67 > 0x281 )
  {
    v71 = a44[2];
    while ( *a44 >= 0 )
      sub_35554C((int)a44);
    a44[2] = v71;
  }
  else
  {
    v68 = v66 + 1;
    if ( v65 != 0 )
    {
      v69 = v62 + -16 * v65 + 16;
      *a44 = v68;
      *(_WORD *)v69 = v67;
      *(_BYTE *)(v69 + 2) = v64;
      *(_DWORD *)(v69 + 4) = a60;
      *(_DWORD *)(v69 + 8) = a61;
      *(_DWORD *)(v69 + 12) = a62;
    }
    else
    {
      *a44 = v68;
      if ( v68 <= 99 )
      {
        v70 = &a44[4 * v68 + 2];
        *((_WORD *)v70 + 2) = v67;
        *((_BYTE *)v70 + 6) = v64;
        v70[2] = a60;
        v70[3] = a61;
        v70[4] = a62;
      }
      else
      {
        sub_360EDC(a44);
      }
    }
  }
  if ( a48 != 254 && *a44 >= 0 )
    ((void (*)(void))loc_378208)();
  return sub_37B89E();
}


//======================================================================
// sub_37A706
// address: 0x0037A706   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_37A706(
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
        _DWORD *a37,
        int a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int *a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62)
{
  _DWORD *v62; // r5
  int v63; // r6
  int v64; // r3
  int v65; // r2
  int v66; // r0
  unsigned int v67; // r4
  int v68; // r0
  int v69; // r1
  int *v70; // r0
  int v71; // r4

  sub_35541E(a37, v62);
  sub_3553E4(a37, a39);
  v64 = byte_44CF16[2 * a49];
  v65 = byte_44CF16[2 * a49 + 1];
  v66 = *a44 - v65;
  *a44 = v66;
  v67 = word_44C326[word_44D1A4[*(unsigned __int16 *)(v63 - 16 * v65)] + 31 + v64];
  if ( v67 > 0x281 )
  {
    v71 = a44[2];
    while ( *a44 >= 0 )
      sub_35554C((int)a44);
    a44[2] = v71;
  }
  else
  {
    v68 = v66 + 1;
    if ( v65 != 0 )
    {
      v69 = v63 + -16 * v65 + 16;
      *a44 = v68;
      *(_WORD *)v69 = v67;
      *(_BYTE *)(v69 + 2) = v64;
      *(_DWORD *)(v69 + 4) = a60;
      *(_DWORD *)(v69 + 8) = a61;
      *(_DWORD *)(v69 + 12) = a62;
    }
    else
    {
      *a44 = v68;
      if ( v68 <= 99 )
      {
        v70 = &a44[4 * v68 + 2];
        *((_WORD *)v70 + 2) = v67;
        *((_BYTE *)v70 + 6) = v64;
        v70[2] = a60;
        v70[3] = a61;
        v70[4] = a62;
      }
      else
      {
        sub_360EDC(a44);
      }
    }
  }
  if ( a48 != 254 )
    JUMPOUT(0x37B74C);
  return sub_37B89E();
}


//======================================================================
// sub_37A964
// address: 0x0037A964   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_37A964(int a1)
{
  return sub_37A966(a1, 5);
}


//======================================================================
// sub_37A966
// address: 0x0037A966   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall sub_37A966(
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
        void *a19,
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
        _DWORD *a37,
        _DWORD *a38,
        int a39,
        int a40,
        int a41,
        int a42,
        _DWORD *a43,
        int *a44,
        int a45,
        _DWORD *a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62)
{
  _DWORD *v62; // r5
  int v63; // r6
  int v64; // r7
  _DWORD *v65; // r4
  _DWORD *v66; // r0
  int v67; // r1
  int v68; // r3
  _DWORD *v69; // r2
  unsigned __int64 v70; // r0
  unsigned int v71; // r4
  int *v72; // r0
  int v73; // r4
  unsigned int v76; // [sp+DCh] [bp+DCh]
  _DWORD *v77; // [sp+E0h] [bp+E0h]

  v65 = nullptr;
  if ( sub_360F08(v64) == 0 )
  {
    a3 = a42;
    v65 = nullptr;
    if ( sub_360F08(v64) == 0 )
    {
      if ( a41 == 49 )
        a41 = 35;
      v66 = sub_351894((int)v62, 0x24u);
      v65 = v66;
      if ( v66 != nullptr )
      {
        *v66 = a37;
        a19 = (void *)a38[4];
        v66[1] = sub_351BC8((int)v62, a19);
        v65[5] = *(_DWORD *)(v62[4] + a47 + 12);
        v67 = *(_DWORD *)(a39 + 68);
        *((_BYTE *)v65 + 8) = a50;
        *((_BYTE *)v65 + 9) = (a41 != 35) + 1;
        v65[6] = v67;
        v65[3] = sub_3568BC((int)v62, a46, 1);
        v65[4] = sub_355DF4(v62, a43);
        *(_DWORD *)(v64 + 492) = v65;
        a37 = nullptr;
      }
    }
  }
  sub_354940(v62, a37);
  sub_3550CC(v62, a38);
  sub_354DDC(v62, a43);
  sub_35519A(v62, (int)a46);
  if ( *(_DWORD *)(v64 + 492) == 0 )
    sub_35541E(v62, v65);
  if ( *(_DWORD *)(v63 - 88) != 0 )
  {
    v76 = *(_DWORD *)(v63 - 92);
    v77 = *(_DWORD **)(v63 - 88);
  }
  else
  {
    v76 = *(_DWORD *)(v63 - 108);
    v77 = *(_DWORD **)(v63 - 104);
  }
  v68 = byte_44CF16[2 * a49];
  v69 = (_DWORD *)byte_44CF16[2 * a49 + 1];
  LODWORD(v70) = *a44 - (_DWORD)v69;
  *a44 = v70;
  HIDWORD(v70) = -16 * (_DWORD)v69;
  v71 = word_44C326[word_44D1A4[*(unsigned __int16 *)(v63 - 16 * (_DWORD)v69)] + 31 + v68];
  if ( v71 > 0x281 )
  {
    v73 = a44[2];
    while ( *a44 >= 0 )
      LODWORD(v70) = sub_35554C((int)a44);
    a44[2] = v73;
  }
  else
  {
    LODWORD(v70) = v70 + 1;
    if ( v69 != nullptr )
    {
      HIDWORD(v70) += v63 + 16;
      *a44 = v70;
      *(_WORD *)HIDWORD(v70) = v71;
      *(_BYTE *)(HIDWORD(v70) + 2) = v68;
      LODWORD(v70) = v76;
      *(_DWORD *)(HIDWORD(v70) + 4) = v76;
      v69 = v77;
      *(_DWORD *)(HIDWORD(v70) + 8) = v77;
      v68 = a62;
      *(_DWORD *)(HIDWORD(v70) + 12) = a62;
    }
    else
    {
      *a44 = v70;
      if ( (int)v70 <= 99 )
      {
        v72 = &a44[4 * v70 + 2];
        *((_WORD *)v72 + 2) = v71;
        *((_BYTE *)v72 + 6) = v68;
        v69 = v72 + 1;
        v70 = __PAIR64__((unsigned int)v77, v76);
        v69[1] = v76;
        v69[2] = v77;
        v68 = a62;
        v69[3] = a62;
      }
      else
      {
        v70 = sub_360EDC(a44);
      }
    }
  }
  if ( a48 != 254 )
    JUMPOUT(0x37B74C);
  return sub_37B89E(
           v70,
           HIDWORD(v70),
           v69,
           v68,
           a3,
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
           a46,
           a47,
           254,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55,
           a56,
           a57);
}


//======================================================================
// sub_37AD34
// address: 0x0037AD34   size: 0x4 (4 bytes)
//======================================================================
int sub_37AD34()
{
  int v0; // r7

  *(_BYTE *)(v0 + 17) = 1;
  return sub_37AD38();
}


//======================================================================
// sub_37AD38
// address: 0x0037AD38   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_37AD38(
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
        _DWORD *a38,
        int a39,
        int a40,
        int a41,
        int a42,
        int a43,
        int *a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        unsigned int a60,
        _DWORD *a61,
        int a62)
{
  _DWORD *v62; // r4
  int v63; // r6
  int v64; // r3
  _DWORD *v65; // r2
  unsigned __int64 v66; // r0
  unsigned int v67; // r4
  int *v68; // r0
  int v69; // r4

  sub_3550CC(v62, a38);
  v64 = byte_44CF16[2 * a49];
  v65 = (_DWORD *)byte_44CF16[2 * a49 + 1];
  LODWORD(v66) = *a44 - (_DWORD)v65;
  *a44 = v66;
  HIDWORD(v66) = -16 * (_DWORD)v65;
  v67 = word_44C326[word_44D1A4[*(unsigned __int16 *)(v63 - 16 * (_DWORD)v65)] + 31 + v64];
  if ( v67 > 0x281 )
  {
    v69 = a44[2];
    while ( *a44 >= 0 )
      LODWORD(v66) = sub_35554C((int)a44);
    a44[2] = v69;
  }
  else
  {
    LODWORD(v66) = v66 + 1;
    if ( v65 != nullptr )
    {
      HIDWORD(v66) += v63 + 16;
      *a44 = v66;
      *(_WORD *)HIDWORD(v66) = v67;
      *(_BYTE *)(HIDWORD(v66) + 2) = v64;
      LODWORD(v66) = a60;
      *(_DWORD *)(HIDWORD(v66) + 4) = a60;
      v65 = a61;
      *(_DWORD *)(HIDWORD(v66) + 8) = a61;
      v64 = a62;
      *(_DWORD *)(HIDWORD(v66) + 12) = a62;
    }
    else
    {
      *a44 = v66;
      if ( (int)v66 <= 99 )
      {
        v68 = &a44[4 * v66 + 2];
        *((_WORD *)v68 + 2) = v67;
        *((_BYTE *)v68 + 6) = v64;
        v65 = v68 + 1;
        v66 = __PAIR64__((unsigned int)a61, a60);
        v65[1] = a60;
        v65[2] = a61;
        v64 = a62;
        v65[3] = a62;
      }
      else
      {
        v66 = sub_360EDC(a44);
      }
    }
  }
  if ( a48 != 254 )
    JUMPOUT(0x37B74C);
  return sub_37B89E(
           v66,
           HIDWORD(v66),
           v65,
           v64,
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
           a46,
           a47,
           254,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55,
           a56,
           a57);
}


//======================================================================
// sub_37B720
// address: 0x0037B720   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_37B720(
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
        int a46,
        int a47,
        int a48,
        int a49,
        int a50,
        int a51,
        int a52,
        int a53,
        int a54,
        int a55,
        int a56,
        int a57,
        int a58,
        int a59,
        int a60,
        int a61,
        int a62,
        int a63,
        int a64)
{
  int a65; // [sp+F0h] [bp+F0h]
  int v65; // r4
  int *v66; // r6
  _DWORD *v67; // r0
  int v68; // r1
  int v69; // r2
  int v70; // r3

  v66 = *(int **)(a44 + 8);
  a64 = a58;
  a63 = a57;
  a65 = a59;
  sub_360E94(v66, (int)"near \"%T\": syntax error");
  *(_DWORD *)(a44 + 8) = v66;
  v67 = sub_355496((_DWORD **)v66, v65, &a57);
  return sub_37B89E(
           v67,
           v68,
           v69,
           v70,
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
           a46,
           a47,
           a48,
           a49,
           a50,
           a51,
           a52,
           a53,
           a54,
           a55,
           a56,
           a57);
}


//======================================================================
// sub_37B75A
// address: 0x0037B75A   size: 0x28 (40 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037B75A  MOVS    R3, #0x198
//   0037B75E  LDR     R3, [R7,R3]
//   0037B760  CMP     R3, #0
//   0037B762  BEQ     loc_37B76E
//   0037B764  LDR     R4, [R7,#0x48]
//   0037B766  CMP     R4, #0
//   0037B768  BNE     loc_37B76E
//   0037B76A  MOVS    R3, #1
//   0037B76C  STR     R3, [R7,#0x48]
//   0037B76E  LDR     R0, [SP,#arg_80]
//   0037B770  MOVS    R1, R7
//   0037B772  BL      sub_354B38
//   0037B776  MOVS    R3, #0x65 ; 'e'
//   0037B778  STR     R3, [R7,#0xC]
//   0037B77A  MOVS    R3, #0
//   0037B77C  STRB    R3, [R7,#0x10]
//   0037B77E  BL      sub_378B22

//======================================================================
// sub_37B782
// address: 0x0037B782   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_37B782(
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
        _DWORD *a37,
        int a38,
        int a39,
        int a40,
        int *a41,
        const void *a42,
        int a43,
        int a44,
        int a45,
        int a46)
{
  char v46; // r4
  int *v47; // r7
  _BYTE *v48; // r4
  const char *v49; // r3
  _DWORD *v50; // r0
  int v51; // r0

  sub_36E620(v47, v46, a38);
  v48 = sub_351BF2((int)a37, a42, a43 - (_DWORD)a42 + a46);
  if ( a38 == 1 )
    v49 = "sqlite_temp_master";
  else
    v49 = "sqlite_master";
  sub_3879F8(
    v47,
    "INSERT INTO %Q.%s VALUES('trigger',%Q,%Q,0,'CREATE TRIGGER %q')",
    *(_DWORD *)(16 * a38 + a37[4]),
    v49);
  sub_354940(a37, v48);
  sub_35AC42(v47, a38);
  v50 = (_DWORD *)sub_36541C((int)a37, "type='trigger' AND name='%q'", a40);
  v51 = sub_35AC80(a41, a38, v50);
  return sub_37B80E(v51);
}


//======================================================================
// sub_37B80E
// address: 0x0037B80E   size: 0x68 (104 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037B80E  LDR     R3, [SP,#arg_80]
//   0037B810  ADDS    R3, #0x89
//   0037B812  LDRB    R3, [R3]
//   0037B814  CMP     R3, #0
//   0037B816  BNE     loc_37B81C
//   0037B818  BL      sub_37A706
//   0037B81C  LDR     R0, [SP,#arg_8C]
//   0037B81E  BL      sub_34CF50
//   0037B822  LDR     R3, [SP,#arg_80]
//   0037B824  LDR     R4, [SP,#arg_84]
//   0037B826  MOVS    R2, R0
//   0037B828  LDR     R3, [R3,#0x10]
//   0037B82A  LDR     R1, [SP,#arg_8C]
//   0037B82C  STR     R3, [SP,#arg_4C]
//   0037B82E  LDR     R7, [SP,#arg_4C]
//   0037B830  LSLS    R3, R4, #4
//   0037B832  ADDS    R3, R7, R3
//   0037B834  LDR     R0, [R3,#0xC]
//   0037B836  MOVS    R3, R5
//   0037B838  ADDS    R0, #0x28 ; '('
//   0037B83A  BL      sub_35271C
//   0037B83E  SUBS    R4, R0, #0
//   0037B840  BEQ     loc_37B84C
//   0037B842  LDR     R3, [SP,#arg_80]
//   0037B844  MOVS    R2, #1
//   0037B846  ADDS    R3, #0x40 ; '@'
//   0037B848  STRB    R2, [R3]
//   0037B84A  B       loc_37B870
//   0037B84C  LDR     R7, [R5,#0x14]
//   0037B84E  LDR     R0, [R5,#0x18]
//   0037B850  STR     R7, [SP,#arg_84]
//   0037B852  CMP     R7, R0
//   0037B854  BNE     loc_37B870
//   0037B856  LDR     R7, [R5,#4]
//   0037B858  MOVS    R0, R7
//   0037B85A  BL      sub_34CF50
//   0037B85E  MOVS    R2, R0
//   0037B860  LDR     R0, [SP,#arg_84]
//   0037B862  MOVS    R1, R7
//   0037B864  ADDS    R0, #8
//   0037B866  BL      sub_34DA7E
//   0037B86A  LDR     R1, [R0,#0x40]
//   0037B86C  STR     R1, [R5,#0x20]
//   0037B86E  STR     R5, [R0,#0x40]
//   0037B870  MOVS    R5, R4
//   0037B872  BL      sub_37A706

//======================================================================
// sub_37B876
// address: 0x0037B876   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_37B876(
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
        _BYTE *a39)
{
  int *v39; // r7
  int v40; // r0

  sub_36E744(v39, a39);
  v40 = sub_37AD34();
  return sub_37B882(v40);
}


//======================================================================
// sub_37B882
// address: 0x0037B882   size: 0xA (10 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037B882  MOVS    R0, R7
//   0037B884  BL      sub_36E650
//   0037B888  BL      sub_37AD38

//======================================================================
// sub_37B88C
// address: 0x0037B88C   size: 0x12 (18 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037B88C  LDR     R4, [SP,#arg_8C]
//   0037B88E  LDR     R2, [SP,#arg_94]
//   0037B890  CMP     R4, #1
//   0037B892  BNE     loc_37B898
//   0037B894  BL      sub_37A964
//   0037B898  MOVS    R1, #7
//   0037B89A  BL      sub_37A966

//======================================================================
// sub_37B89E
// address: 0x0037B89E   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_37B89E(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_37B8B0
// address: 0x0037B8B0   size: 0x2B6 (694 bytes)
//======================================================================
int __fastcall sub_37B8B0(int *a1, int a2, _DWORD **a3)
{
  int v3; // r6
  int *v5; // r0
  int *v6; // r7
  unsigned __int8 *v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r3
  int v11; // r1
  int v12; // r3
  int v13; // r0
  const char *v14; // r0
  const char *v15; // r2
  unsigned int *v16; // r0
  int v17; // r7
  int v18; // r5
  __int64 v19; // r0
  int v20; // r7
  int v21; // r5
  int i; // r7
  int *j; // r1
  __int64 v24; // r0
  int result; // r0
  int v26; // [sp+Ch] [bp-28h]
  int v27; // [sp+Ch] [bp-28h]
  int v28; // [sp+10h] [bp-24h]
  int v31; // [sp+1Ch] [bp-18h]
  int v32; // [sp+20h] [bp-14h]
  char v33; // [sp+24h] [bp-10h]
  int v34; // [sp+2Ch] [bp-8h] BYREF

  v3 = *a1;
  v32 = *(_DWORD *)(*a1 + 92);
  if ( *(_DWORD *)(*a1 + 140) == 0 )
    *(_DWORD *)(v3 + 232) = 0;
  a1[3] = 0;
  a1[121] = a2;
  v5 = (int *)sub_351664(1612);
  v6 = v5;
  if ( v5 != nullptr )
  {
    *v5 = -1;
    v33 = *(_BYTE *)(v3 + 242);
    if ( *(_DWORD *)(v3 + 268) != 0 )
      *(_BYTE *)(v3 + 242) = 1;
    v31 = -1;
    v26 = 0;
    while ( 1 )
    {
      v28 = *(unsigned __int8 *)(v3 + 64);
      if ( *(_BYTE *)(v3 + 64) != 0 )
        break;
      v7 = (unsigned __int8 *)(a2 + v26);
      v8 = *(unsigned __int8 *)(a2 + v26);
      if ( *(_BYTE *)(a2 + v26) == 0 )
        goto LABEL_22;
      a1[127] = (int)v7;
      v9 = sub_353874(v7, &v34);
      a1[128] = v9;
      v26 += v9;
      if ( v26 > v32 )
      {
        v10 = 18;
LABEL_18:
        a1[3] = v10;
        goto LABEL_23;
      }
      v11 = v34;
      if ( v34 == 150 )
      {
        sub_354940((_DWORD *)v3, *a3);
        *a3 = (_DWORD *)sub_36541C(v3, "unrecognized token: \"%T\"", a1 + 127);
        v8 = 1;
        goto LABEL_22;
      }
      if ( v34 == 151 )
      {
        if ( *(_DWORD *)(v3 + 232) != 0 )
        {
          sub_360E94(a1, (int)"interrupt");
          v10 = 9;
          goto LABEL_18;
        }
      }
      else
      {
        if ( v34 == 1 )
          a1[121] = a2 + v26;
        sub_3781D8((int)v6, v11, a1[127], a1[128], (int)a1);
        v31 = v34;
        if ( a1[3] != 0 )
          break;
      }
    }
    v8 = 0;
LABEL_22:
    v28 = v8;
LABEL_23:
    v12 = *(unsigned __int8 *)(a2 + v26);
    v27 = a2 + v26;
    if ( v12 == 0 && v28 == 0 && a1[3] == 0 )
    {
      if ( v31 != 1 )
      {
        sub_3781D8((int)v6, 1, a1[127], a1[128], (int)a1);
        a1[121] = v27;
      }
      sub_3781D8((int)v6, 0, a1[127], a1[128], (int)a1);
    }
    while ( *v6 >= 0 )
      sub_35554C((int)v6);
    sqlite3_free(v6);
    *(_BYTE *)(v3 + 242) = v33;
    if ( *(_BYTE *)(v3 + 64) != 0 )
      a1[3] = 7;
    v13 = a1[3];
    if ( v13 != 0 && v13 != 101 && a1[1] == 0 )
    {
      v14 = sub_353D40(v13);
      sub_365388(a1 + 1, (_DWORD *)v3, (int)"%s", v14);
    }
    v15 = (const char *)a1[1];
    if ( v15 != nullptr )
    {
      *a3 = v15;
      sqlite3_log(a1[3], (int)"%s", v15);
      a1[1] = 0;
      ++v28;
    }
    v16 = (unsigned int *)a1[2];
    if ( v16 != nullptr && a1[17] > 0 )
    {
      v17 = *((unsigned __int8 *)a1 + 18);
      if ( *((_BYTE *)a1 + 18) == 0 )
      {
        sub_355C38(v16);
        a1[2] = v17;
      }
    }
    v18 = *((unsigned __int8 *)a1 + 18);
    if ( *((_BYTE *)a1 + 18) == 0 )
    {
      sub_354940((_DWORD *)v3, (_DWORD *)a1[101]);
      a1[101] = v18;
      a1[100] = v18;
    }
    sqlite3_free(a1[131]);
    if ( *((_BYTE *)a1 + 455) == 0 )
    {
      HIDWORD(v19) = a1[122];
      LODWORD(v19) = v3;
      sub_354F8A(v19);
    }
    if ( *((_BYTE *)a1 + 453) != 0 )
      sub_355456((_DWORD *)v3, (_DWORD *)a1[134]);
    sub_35541E((_DWORD *)v3, (_DWORD *)a1[123]);
    v20 = a1[112];
    v21 = v20 - 1;
    for ( i = 4 * v20; ; sub_354940((_DWORD *)v3, *(_DWORD **)(a1[119] + i)) )
    {
      i -= 4;
      if ( v21 < 0 )
        break;
      --v21;
    }
    for ( j = (int *)a1[119]; ; a1[102] = *j )
    {
      sub_354940((_DWORD *)v3, j);
      j = (int *)a1[102];
      if ( j == nullptr )
        break;
    }
    while ( 1 )
    {
      HIDWORD(v24) = a1[132];
      if ( HIDWORD(v24) == 0 )
        break;
      a1[132] = *(_DWORD *)(HIDWORD(v24) + 72);
      LODWORD(v24) = v3;
      sub_354F8A(v24);
    }
    if ( v28 != 0 )
    {
      result = v28;
      if ( a1[3] == 0 )
        a1[3] = 1;
    }
    else
    {
      return 0;
    }
  }
  else
  {
    *(_BYTE *)(v3 + 64) = 1;
    return 7;
  }
  return result;
}


//======================================================================
// sub_37BB7C
// address: 0x0037BB7C   size: 0x2C8 (712 bytes)
//======================================================================
int __fastcall sub_37BB7C(int a1, char *a2, signed int a3, char a4, int a5, int *a6, _DWORD *a7)
{
  int *v9; // r0
  int *v10; // r7
  int v11; // r3
  __int64 v12; // r0
  _BYTE *v13; // r0
  _DWORD *v14; // r4
  int v15; // r4
  int v16; // r5
  int v17; // r0
  int v18; // r0
  int k; // r5
  int v20; // r5
  int v21; // r0
  _DWORD *v22; // r0
  char *m; // r1
  int v24; // r4
  int i; // [sp+14h] [bp-20h]
  int j; // [sp+14h] [bp-20h]
  int v28; // [sp+14h] [bp-20h]
  int v29; // [sp+18h] [bp-1Ch]
  int v30; // [sp+18h] [bp-1Ch]
  int v31; // [sp+18h] [bp-1Ch]
  const char *v34; // [sp+28h] [bp-Ch] BYREF
  unsigned int v35; // [sp+2Ch] [bp-8h] BYREF

  v34 = nullptr;
  v9 = (int *)sub_351894(a1, 0x21Cu);
  v10 = v9;
  if ( v9 != nullptr )
  {
    v9[120] = a5;
    for ( i = 0; i < *(_DWORD *)(a1 + 20); ++i )
    {
      v11 = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * i + 4);
      v29 = v11;
      if ( v11 != 0 )
      {
        sub_3574C2(v11);
        v24 = sub_34E238(v29, 1, 1);
        sub_35655E(v29);
        if ( v24 != 0 )
        {
          sub_36024C(
            __SPAIR64__(v24, a1),
            (int)"database schema is locked: %s",
            *(const char **)(*(_DWORD *)(a1 + 16) + 16 * i));
          goto LABEL_66;
        }
      }
    }
    sub_354E48((_DWORD *)a1);
    *v10 = a1;
    v10[107] = 0;
    if ( a3 < 0 || a3 != 0 && a2[a3 - 1] == 0 )
    {
      sub_37B8B0(v10, (int)a2, (_DWORD **)&v34);
    }
    else
    {
      LODWORD(v12) = a1;
      if ( a3 > *(_DWORD *)(a1 + 92) )
      {
        HIDWORD(v12) = 18;
        sub_36024C(v12, (int)"statement too long");
        v24 = sub_3602F4((unsigned int)a1 | 0x1200000000LL);
        goto LABEL_66;
      }
      v13 = sub_351BF2(a1, a2, a3);
      v14 = v13;
      if ( v13 != nullptr )
      {
        sub_37B8B0(v10, (int)v13, (_DWORD **)&v34);
        sub_354940((_DWORD *)a1, v14);
        v10[121] = (int)&a2[v10[121] - (_DWORD)v14];
      }
      else
      {
        v10[121] = (int)&a2[a3];
      }
    }
    if ( *(_BYTE *)(a1 + 64) != 0 )
      v10[3] = 7;
    if ( v10[3] == 101 )
      v10[3] = 0;
    if ( *((_BYTE *)v10 + 17) != 0 )
    {
      v15 = *v10;
      for ( j = 0; j < *(_DWORD *)(v15 + 20); ++j )
      {
        v16 = *(_DWORD *)(*(_DWORD *)(v15 + 16) + 16 * j + 4);
        if ( v16 != 0 )
        {
          if ( *(_BYTE *)(v16 + 8) != 0 )
          {
            v30 = 0;
          }
          else
          {
            v17 = sub_36CDC0(v16, *(unsigned __int8 *)(v16 + 8));
            if ( v17 == 7 || v17 == 3082 )
              *(_BYTE *)(v15 + 64) = 1;
            if ( v17 != 0 )
              break;
            v30 = 1;
          }
          sub_357930(v16, 1, &v35);
          if ( v35 != **(_DWORD **)(*(_DWORD *)(v15 + 16) + 16 * j + 12) )
          {
            sub_355608(v15, j);
            v10[3] = 17;
          }
          if ( v30 != 0 )
            sub_36C950(v16);
        }
      }
    }
    if ( *(_BYTE *)(a1 + 64) != 0 )
      v10[3] = 7;
    if ( a7 != nullptr )
      *a7 = v10[121];
    v24 = v10[3];
    if ( v24 == 0 )
    {
      v18 = v10[2];
      if ( v18 != 0 && *((_BYTE *)v10 + 454) != 0 )
      {
        if ( *((_BYTE *)v10 + 454) == 2 )
        {
          sub_3559A0(v18, 4);
          v31 = 12;
          v28 = 8;
        }
        else
        {
          sub_3559A0(v18, 8);
          v31 = 8;
          v28 = 0;
        }
        for ( k = v28; k < v31; ++k )
          sub_35A2BC(v10[2], k - v28, 0, off_454B98[k], nullptr);
      }
    }
    if ( *(_BYTE *)(a1 + 137) == 0 )
    {
      v20 = v10[2];
      if ( v20 != 0 )
      {
        *(_DWORD *)(v20 + 168) = sub_351BF2(*(_DWORD *)v20, a2, v10[121] - (_DWORD)a2);
        *(_BYTE *)(v20 + 89) = *(_BYTE *)(v20 + 89) & 0xFB | (4 * (a4 & 1));
      }
    }
    v21 = v10[2];
    if ( v21 != 0 && (v24 != 0 || *(_BYTE *)(a1 + 64) != 0) )
      sub_37594C(v21);
    else
      *a6 = v21;
    if ( v34 == nullptr )
    {
      sub_36024C(__SPAIR64__(v24, a1), 0);
      goto LABEL_63;
    }
    sub_36024C(__SPAIR64__(v24, a1), (int)"%s", v34);
    v22 = (_DWORD *)a1;
    for ( m = (char *)v34; ; v10[133] = *((_DWORD *)m + 1) )
    {
      sub_354940(v22, m);
LABEL_63:
      m = (char *)v10[133];
      if ( m == nullptr )
        break;
      v22 = (_DWORD *)a1;
    }
  }
  else
  {
    v24 = 7;
  }
LABEL_66:
  sub_355228(v10);
  sub_354940((_DWORD *)a1, v10);
  return sub_3602F4(__SPAIR64__(v24, a1));
}


//======================================================================
// sub_37BE58
// address: 0x0037BE58   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_37BE58(int a1, char *a2, signed int a3, char a4, int a5, int *a6, _DWORD *a7)
{
  int v10; // r6

  *a6 = 0;
  if ( sub_36019C(a1) == 0 )
    return sub_35EB98(99872);
  sqlite3_mutex_enter(*(_DWORD *)(a1 + 12));
  sub_35752E(a1);
  v10 = sub_37BB7C(a1, a2, a3, a4, a5, a6, a7);
  if ( v10 == 17 )
  {
    sqlite3_finalize((unsigned int *)*a6);
    v10 = sub_37BB7C(a1, a2, a3, a4, a5, a6, a7);
  }
  sub_35657E(a1);
  sqlite3_mutex_leave(*(_DWORD *)(a1 + 12));
  return v10;
}


//======================================================================
// sub_37BEF0
// address: 0x0037BEF0   size: 0x106 (262 bytes)
//======================================================================
int __fastcall sub_37BEF0(int *a1, int a2, int a3)
{
  int v3; // r5
  int v5; // r2
  int v6; // r6
  _WORD *v7; // r1
  int v8; // r7
  unsigned __int8 *v9; // r1
  _BYTE *v10; // r1
  int v11; // r3
  const char *v12; // r4
  const char *v13; // r0
  const char *v14; // r2
  int **v15; // r0
  unsigned int *v17; // [sp+1Ch] [bp-8h] BYREF

  v3 = *a1;
  v5 = a1[2];
  v6 = (int)a1;
  v7 = (_WORD *)(*(_DWORD *)(*(_DWORD *)(*a1 + 16) + 16 * v5 + 12) + 78);
  *v7 &= ~4u;
  if ( *(_BYTE *)(v3 + 64) == 0 )
  {
    if ( a3 != 0 )
    {
      v8 = *(_DWORD *)(a3 + 4);
      if ( v8 == 0 )
      {
        v9 = *(unsigned __int8 **)a3;
LABEL_19:
        v14 = nullptr;
LABEL_23:
        sub_3662A4((int)a1, (const char *)v9, v14);
        return v8;
      }
      v10 = *(_BYTE **)(a3 + 8);
      if ( v10 != nullptr && *v10 != 0 )
      {
        *(_BYTE *)(v3 + 136) = v5;
        *(_DWORD *)(v3 + 132) = sub_34D782(*(unsigned __int8 **)(a3 + 4), v3 + 136, v5);
        *(_BYTE *)(v3 + 138) = 0;
        sqlite3_prepare(v3, *(char **)(a3 + 8), -1, (int *)&v17, nullptr);
        v11 = *(_DWORD *)(v3 + 52);
        *(_BYTE *)(v3 + 136) = 0;
        if ( v11 != 0 && *(_BYTE *)(v3 + 138) == 0 )
        {
          *(_DWORD *)(v6 + 12) = v11;
          if ( v11 == 7 )
          {
            *(_BYTE *)(v3 + 64) = 1;
          }
          else if ( v11 != 9 && (unsigned __int8)v11 != 6 )
          {
            v12 = *(const char **)a3;
            v13 = sqlite3_errmsg(v3);
            sub_3662A4(v6, v12, v13);
          }
        }
        sqlite3_finalize(v17);
      }
      else
      {
        v8 = *(_DWORD *)a3;
        if ( *(_DWORD *)a3 == 0 )
        {
          v9 = nullptr;
          goto LABEL_19;
        }
        v15 = sub_34EB58(v3, *(unsigned __int8 **)a3, *(_BYTE **)(*(_DWORD *)(v3 + 16) + 16 * v5));
        if ( v15 != nullptr )
        {
          v8 = sub_34D6F8(*(unsigned __int8 **)(a3 + 4), v15 + 11);
          if ( v8 == 0 )
          {
            v9 = *(unsigned __int8 **)a3;
            a1 = (int *)v6;
            v14 = "invalid rootpage";
            goto LABEL_23;
          }
        }
      }
    }
    return 0;
  }
  sub_3662A4((int)a1, *(const char **)a3, nullptr);
  return 1;
}


//======================================================================
// sub_37C214
// address: 0x0037C214   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_37C214(int a1, int a2)
{
  int v2; // r6
  _DWORD *i; // r5
  int v5; // r3
  char *v6; // r0
  char *v7; // r6
  int v9; // r5
  int v10; // [sp+8h] [bp-Ch] BYREF
  _BYTE *v11; // [sp+Ch] [bp-8h]

  v2 = 16 * a2;
  for ( i = *(_DWORD **)(*(_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * a2 + 12) + 32); i != nullptr; i = (_DWORD *)*i )
    sub_34EE4A(i[2]);
  v5 = *(_DWORD *)(a1 + 16);
  v10 = a1;
  v11 = *(_BYTE **)(v5 + v2);
  if ( sub_34EAFE(a1, "sqlite_stat1", v11) == nullptr )
    return 1;
  v6 = (char *)sub_36541C(a1, "SELECT tbl,idx,stat FROM %Q.sqlite_stat1", v11);
  v7 = v6;
  if ( v6 != nullptr )
  {
    v9 = sqlite3_exec(a1, v6, (int (__fastcall *)(int, int, _DWORD *, _DWORD *))sub_3582EC, (int)&v10, nullptr);
    sub_354940((_DWORD *)a1, v7);
    if ( v9 != 7 )
      return v9;
  }
  *(_BYTE *)(a1 + 64) = 1;
  return 7;
}


//======================================================================
// sub_37C298
// address: 0x0037C298   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall sub_37C298(int *a1)
{
  int v1; // r5
  int *v2; // r0
  int v3; // r1
  int v6; // [sp+484h] [bp-8h] BYREF

  v1 = *a1;
  v2 = &v6;
  if ( a1[25] != 0 )
    v2 = (int *)sub_357956(a1);
  v3 = 0;
  if ( a1[20] == 7 )
    sub_380FF4(v2, 0);
  a1[20] = v3;
  a1[34] = 0;
  a1[35] = 0;
  a1[5] = v3;
  *(_DWORD *)(v1 + 444) = v3;
  if ( *(_DWORD *)(v1 + 232) != v3 )
    sub_381042();
  return sub_37C34C();
}


//======================================================================
// sub_37C34C
// address: 0x0037C34C   size: 0x2DC (732 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037C34C  LDR     R3, [SP,#arg_244]
//   0037C34E  ADDS    R3, #0x40 ; '@'
//   0037C350  LDRB    R3, [R3]
//   0037C352  CMP     R3, #0
//   0037C354  BEQ     loc_37C35A
//   0037C356  BL      sub_380FFA
//   0037C35A  LDR     R4, [SP,#arg_264]
//   0037C35C  MOVS    R3, #0x14
//   0037C35E  LDR     R5, [SP,#arg_2A8]
//   0037C360  MULS    R3, R4
//   0037C362  LDR     R7, [SP,#arg_280]
//   0037C364  ADDS    R6, R5, R3
//   0037C366  LDRB    R3, [R6,#2]
//   0037C368  ADDS    R7, #1
//   0037C36A  STR     R7, [SP,#arg_280]; int
//   0037C36C  LSLS    R7, R3, #0x1E
//   0037C36E  BPL     loc_37C390
//   0037C370  LDR     R0, [R6,#8]
//   0037C372  MOVS    R3, #0x28 ; '('
//   0037C374  LDR     R4, [SP,#arg_260]
//   0037C376  MULS    R3, R0
//   0037C378  ADDS    R3, R4, R3
//   0037C37A  STR     R3, [SP,#arg_248]; void *
//   0037C37C  LDRH    R2, [R3,#0x1C]
//   0037C37E  LDR     R3, =0x2460
//   0037C380  TST     R2, R3
//   0037C382  BEQ     loc_37C38A
//   0037C384  LDR     R0, [SP,#arg_248]
//   0037C386  BL      sub_35572C
//   0037C38A  LDR     R5, [SP,#arg_248]
//   0037C38C  MOVS    R3, #4
//   0037C38E  STRH    R3, [R5,#0x1C]
//   0037C390  LDRB    R2, [R6]
//   0037C392  SUBS    R0, R2, #1
//   0037C394  CMP     R0, #0x99
//   0037C396  BLS     loc_37C39C
//   0037C398  BL      sub_380F2A
//   0037C39C  BL      __gnu_thumb1_case_si; switch 154 cases
//   0037C3A0  DCD loc_37CFAA - 0x37C3A0; jump table for switch statement
//   0037C3A4  DCD loc_37DD9C - 0x37C3A0; jumptable 0037C39C case 1
//   0037C3A8  DCD loc_37DFDA - 0x37C3A0; jumptable 0037C39C case 2
//   0037C3AC  DCD loc_37E086 - 0x37C3A0; jumptable 0037C39C case 3
//   0037C3B0  DCD loc_37F048 - 0x37C3A0; jumptable 0037C39C case 4
//   0037C3B4  DCD loc_37F05E - 0x37C3A0; jumptable 0037C39C cases 5,6
//   0037C3B8  DCD loc_37F05E - 0x37C3A0; jumptable 0037C39C cases 5,6
//   0037C3BC  DCD loc_37F06C - 0x37C3A0; jumptable 0037C39C cases 7,8
//   0037C3C0  DCD loc_37F06C - 0x37C3A0; jumptable 0037C39C cases 7,8
//   0037C3C4  DCD loc_380016 - 0x37C3A0; jumptable 0037C39C case 9
//   0037C3C8  DCD loc_380114 - 0x37C3A0; jumptable 0037C39C case 10
//   0037C3CC  DCD loc_38016C - 0x37C3A0; jumptable 0037C39C case 11
//   0037C3D0  DCD loc_380336 - 0x37C3A0; jumptable 0037C39C case 12
//   0037C3D4  DCD loc_380A20 - 0x37C3A0; jumptable 0037C39C case 13
//   0037C3D8  DCD loc_380BE4 - 0x37C3A0; jumptable 0037C39C case 14
//   0037C3DC  DCD loc_37C62E - 0x37C3A0; jumptable 0037C39C case 15
//   0037C3E0  DCD loc_37C67C - 0x37C3A0; jumptable 0037C39C case 16
//   0037C3E4  DCD loc_37C69E - 0x37C3A0; jumptable 0037C39C case 17
//   0037C3E8  DCD loc_37D604 - 0x37C3A0; jumptable 0037C39C case 18
//   0037C3EC  DCD loc_37C6B6 - 0x37C3A0; jumptable 0037C39C case 19
//   0037C3F0  DCD loc_37C6E6 - 0x37C3A0; jumptable 0037C39C case 20
//   0037C3F4  DCD loc_37C70A - 0x37C3A0; jumptable 0037C39C case 21
//   0037C3F8  DCD loc_37C72A - 0x37C3A0; jumptable 0037C39C case 22
//   0037C3FC  DCD loc_37C740 - 0x37C3A0; jumptable 0037C39C case 23
//   0037C400  DCD loc_37C836 - 0x37C3A0; jumptable 0037C39C case 24
//   0037C404  DCD loc_37C846 - 0x37C3A0; jumptable 0037C39C case 25
//   0037C408  DCD loc_37C8EE - 0x37C3A0; jumptable 0037C39C case 26
//   0037C40C  DCD loc_37C906 - 0x37C3A0; jumptable 0037C39C case 27
//   0037C410  DCD loc_37C94E - 0x37C3A0; jumptable 0037C39C case 28
//   0037C414  DCD loc_37C96C - 0x37C3A0; jumptable 0037C39C case 29
//   0037C418  DCD loc_37C988 - 0x37C3A0; jumptable 0037C39C case 30
//   0037C41C  DCD loc_37C9B6 - 0x37C3A0; jumptable 0037C39C case 31
//   0037C420  DCD loc_37CA18 - 0x37C3A0; jumptable 0037C39C case 32
//   0037C424  DCD loc_37CA66 - 0x37C3A0; jumptable 0037C39C case 33
//   0037C428  DCD loc_37CA8A - 0x37C3A0; jumptable 0037C39C case 34
//   0037C42C  DCD loc_37CF80 - 0x37C3A0; jumptable 0037C39C case 35
//   0037C430  DCD loc_37D1CC - 0x37C3A0; jumptable 0037C39C case 36
//   0037C434  DCD loc_37D1FA - 0x37C3A0; jumptable 0037C39C case 37
//   0037C438  DCD loc_37D242 - 0x37C3A0; jumptable 0037C39C case 38
//   0037C43C  DCD loc_37D4AE - 0x37C3A0; jumptable 0037C39C case 39
//   0037C440  DCD loc_37D4B8 - 0x37C3A0; jumptable 0037C39C case 40
//   0037C444  DCD loc_37D530 - 0x37C3A0; jumptable 0037C39C case 41
//   0037C448  DCD loc_37D69A - 0x37C3A0; jumptable 0037C39C case 42
//   0037C44C  DCD loc_37D6C0 - 0x37C3A0; jumptable 0037C39C cases 43,44
//   0037C450  DCD loc_37D6C0 - 0x37C3A0; jumptable 0037C39C cases 43,44
//   0037C454  DCD loc_37D746 - 0x37C3A0; jumptable 0037C39C case 45
//   0037C458  DCD loc_37DA8A - 0x37C3A0; jumptable 0037C39C case 46
//   0037C45C  DCD loc_37DAB2 - 0x37C3A0; jumptable 0037C39C case 47
//   0037C460  DCD loc_37DCA0 - 0x37C3A0; jumptable 0037C39C case 48
//   0037C464  DCD loc_37E204 - 0x37C3A0; jumptable 0037C39C case 49
//   0037C468  DCD loc_37E228 - 0x37C3A0; jumptable 0037C39C case 50
//   0037C46C  DCD loc_37E294 - 0x37C3A0; jumptable 0037C39C cases 51,52
//   0037C470  DCD loc_37E294 - 0x37C3A0; jumptable 0037C39C cases 51,52
//   0037C474  DCD loc_37E374 - 0x37C3A0; jumptable 0037C39C cases 53,54
//   0037C478  DCD loc_37E374 - 0x37C3A0; jumptable 0037C39C cases 53,54
//   0037C47C  DCD loc_37E438 - 0x37C3A0; jumptable 0037C39C case 55
//   0037C480  DCD loc_37E4B2 - 0x37C3A0; jumptable 0037C39C case 56
//   0037C484  DCD loc_37E4E2 - 0x37C3A0; jumptable 0037C39C case 57
//   0037C488  DCD loc_37E510 - 0x37C3A0; jumptable 0037C39C cases 58-61
//   0037C48C  DCD loc_37E510 - 0x37C3A0; jumptable 0037C39C cases 58-61
//   0037C490  DCD loc_37E510 - 0x37C3A0; jumptable 0037C39C cases 58-61
//   0037C494  DCD loc_37E510 - 0x37C3A0; jumptable 0037C39C cases 58-61
//   0037C498  DCD loc_37E674 - 0x37C3A0; jumptable 0037C39C case 62
//   0037C49C  DCD loc_37E6A4 - 0x37C3A0; jumptable 0037C39C cases 63-65
//   0037C4A0  DCD loc_37E6A4 - 0x37C3A0; jumptable 0037C39C cases 63-65
//   0037C4A4  DCD loc_37E6A4 - 0x37C3A0; jumptable 0037C39C cases 63-65
//   0037C4A8  DCD loc_37E7A6 - 0x37C3A0; jumptable 0037C39C case 66
//   0037C4AC  DCD loc_37E7FE - 0x37C3A0; jumptable 0037C39C case 67
//   0037C4B0  DCD loc_37E824 - 0x37C3A0; jumptable 0037C39C case 68
//   0037C4B4  DCD loc_37E996 - 0x37C3A0; jumptable 0037C39C cases 69,72
//   0037C4B8  DCD loc_37D560 - 0x37C3A0; jumptable 0037C39C cases 70,71
//   0037C4BC  DCD loc_37D560 - 0x37C3A0; jumptable 0037C39C cases 70,71
//   0037C4C0  DCD loc_37E996 - 0x37C3A0; jumptable 0037C39C cases 69,72
//   0037C4C4  DCD loc_37EA82 - 0x37C3A0; jumptable 0037C39C case 73
//   0037C4C8  DCD loc_37EB02 - 0x37C3A0; jumptable 0037C39C case 74
//   0037C4CC  DCD loc_37D706 - 0x37C3A0; jumptable 0037C39C case 75
//   0037C4D0  DCD loc_37D726 - 0x37C3A0; jumptable 0037C39C case 76
//   0037C4D4  DCD loc_37D360 - 0x37C3A0; jumptable 0037C39C cases 77-82
//   0037C4D8  DCD loc_37D360 - 0x37C3A0; jumptable 0037C39C cases 77-82
//   0037C4DC  DCD loc_37D360 - 0x37C3A0; jumptable 0037C39C cases 77-82
//   0037C4E0  DCD loc_37D360 - 0x37C3A0; jumptable 0037C39C cases 77-82
//   0037C4E4  DCD loc_37D360 - 0x37C3A0; jumptable 0037C39C cases 77-82
//   0037C4E8  DCD loc_37D360 - 0x37C3A0; jumptable 0037C39C cases 77-82
//   0037C4EC  DCD loc_37EB1A - 0x37C3A0; jumptable 0037C39C case 83
//   0037C4F0  DCD loc_37D0B2 - 0x37C3A0; jumptable 0037C39C cases 84-87
//   0037C4F4  DCD loc_37D0B2 - 0x37C3A0; jumptable 0037C39C cases 84-87
//   0037C4F8  DCD loc_37D0B2 - 0x37C3A0; jumptable 0037C39C cases 84-87
//   0037C4FC  DCD loc_37D0B2 - 0x37C3A0; jumptable 0037C39C cases 84-87
//   0037C500  DCD loc_37CC5C - 0x37C3A0; jumptable 0037C39C cases 88-92
//   0037C504  DCD loc_37CC5C - 0x37C3A0; jumptable 0037C39C cases 88-92
//   0037C508  DCD loc_37CC5C - 0x37C3A0; jumptable 0037C39C cases 88-92
//   0037C50C  DCD loc_37CC5C - 0x37C3A0; jumptable 0037C39C cases 88-92
//   0037C510  DCD loc_37CC5C - 0x37C3A0; jumptable 0037C39C cases 88-92
//   0037C514  DCD loc_37CB4C - 0x37C3A0; jumptable 0037C39C case 93
//   0037C518  DCD loc_37EB72 - 0x37C3A0; jumptable 0037C39C case 94
//   0037C51C  DCD loc_37D650 - 0x37C3A0; jumptable 0037C39C case 95
//   0037C520  DCD loc_37C86E - 0x37C3A0; jumptable 0037C39C case 96
//   0037C524  DCD loc_37EBE0 - 0x37C3A0; jumptable 0037C39C cases 97,98
//   0037C528  DCD loc_37EBE0 - 0x37C3A0; jumptable 0037C39C cases 97,98
//   0037C52C  DCD loc_37ECBA - 0x37C3A0; jumptable 0037C39C case 99
//   0037C530  DCD loc_37ED3C - 0x37C3A0; jumptable 0037C39C case 100
//   0037C534  DCD loc_37ED6C - 0x37C3A0; jumptable 0037C39C case 101
//   0037C538  DCD loc_37EDA8 - 0x37C3A0; jumptable 0037C39C cases 102,103
//   0037C53C  DCD loc_37EDA8 - 0x37C3A0; jumptable 0037C39C cases 102,103
//   0037C540  DCD loc_37EDB4 - 0x37C3A0; jumptable 0037C39C case 104
//   0037C544  DCD loc_37F0BC - 0x37C3A0; jumptable 0037C39C cases 105,106
//   0037C548  DCD loc_37F0BC - 0x37C3A0; jumptable 0037C39C cases 105,106
//   0037C54C  DCD loc_37F1B6 - 0x37C3A0; jumptable 0037C39C case 107
//   0037C550  DCD loc_37F208 - 0x37C3A0; jumptable 0037C39C case 108
//   0037C554  DCD loc_37F2FC - 0x37C3A0; jumptable 0037C39C cases 109-112
//   0037C558  DCD loc_37F2FC - 0x37C3A0; jumptable 0037C39C cases 109-112
//   0037C55C  DCD loc_37F2FC - 0x37C3A0; jumptable 0037C39C cases 109-112
//   0037C560  DCD loc_37F2FC - 0x37C3A0; jumptable 0037C39C cases 109-112
//   0037C564  DCD loc_37F3B8 - 0x37C3A0; jumptable 0037C39C case 113
//   0037C568  DCD loc_37F5E6 - 0x37C3A0; jumptable 0037C39C case 114
//   0037C56C  DCD loc_37F648 - 0x37C3A0; jumptable 0037C39C cases 115,116
//   0037C570  DCD loc_37F648 - 0x37C3A0; jumptable 0037C39C cases 115,116
//   0037C574  DCD loc_37F688 - 0x37C3A0; jumptable 0037C39C case 117
//   0037C578  DCD loc_37F70E - 0x37C3A0; jumptable 0037C39C case 118
//   0037C57C  DCD loc_37F71C - 0x37C3A0; jumptable 0037C39C case 119
//   0037C580  DCD loc_37F756 - 0x37C3A0; jumptable 0037C39C case 120
//   0037C584  DCD loc_37F7B2 - 0x37C3A0; jumptable 0037C39C case 121
//   0037C588  DCD loc_37F822 - 0x37C3A0; jumptable 0037C39C case 122
//   0037C58C  DCD loc_37FAC8 - 0x37C3A0; jumptable 0037C39C case 123
//   0037C590  DCD loc_37C614 - 0x37C3A0; jumptable 0037C39C case 124
//   0037C594  DCD loc_37FB42 - 0x37C3A0; jumptable 0037C39C case 125
//   0037C598  DCD loc_37FCB6 - 0x37C3A0; jumptable 0037C39C case 126
//   0037C59C  DCD loc_37FE20 - 0x37C3A0; jumptable 0037C39C case 127
//   0037C5A0  DCD loc_37FE4E - 0x37C3A0; jumptable 0037C39C case 128
//   0037C5A4  DCD loc_37FEC6 - 0x37C3A0; jumptable 0037C39C case 129
//   0037C5A8  DCD loc_37FF2E - 0x37C3A0; jumptable 0037C39C case 130
//   0037C5AC  DCD loc_37FF92 - 0x37C3A0; jumptable 0037C39C case 131
//   0037C5B0  DCD loc_37C858 - 0x37C3A0; jumptable 0037C39C case 132
//   0037C5B4  DCD loc_37FFBE - 0x37C3A0; jumptable 0037C39C case 133
//   0037C5B8  DCD loc_37FFDE - 0x37C3A0; jumptable 0037C39C case 134
//   0037C5BC  DCD loc_3800DA - 0x37C3A0; jumptable 0037C39C case 135
//   0037C5C0  DCD loc_3806AA - 0x37C3A0; jumptable 0037C39C case 136
//   0037C5C4  DCD loc_38078A - 0x37C3A0; jumptable 0037C39C case 137
//   0037C5C8  DCD loc_3807AA - 0x37C3A0; jumptable 0037C39C case 138
//   0037C5CC  DCD loc_380850 - 0x37C3A0; jumptable 0037C39C case 139
//   0037C5D0  DCD loc_3808D2 - 0x37C3A0; jumptable 0037C39C case 140
//   0037C5D4  DCD loc_380968 - 0x37C3A0; jumptable 0037C39C case 141
//   0037C5D8  DCD loc_37D280 - 0x37C3A0; jumptable 0037C39C case 142
//   0037C5DC  DCD loc_37D2C2 - 0x37C3A0; jumptable 0037C39C case 143
//   0037C5E0  DCD loc_37D2FE - 0x37C3A0; jumptable 0037C39C case 144
//   0037C5E4  DCD loc_37D312 - 0x37C3A0; jumptable 0037C39C case 145
//   0037C5E8  DCD loc_37D330 - 0x37C3A0; jumptable 0037C39C case 146
//   0037C5EC  DCD loc_3809CE - 0x37C3A0; jumptable 0037C39C case 147
//   0037C5F0  DCD loc_380AA4 - 0x37C3A0; jumptable 0037C39C case 148
//   0037C5F4  DCD loc_380B30 - 0x37C3A0; jumptable 0037C39C case 149
//   0037C5F8  DCD loc_380BA4 - 0x37C3A0; jumptable 0037C39C case 150
//   0037C5FC  DCD loc_380C98 - 0x37C3A0; jumptable 0037C39C case 151
//   0037C600  DCD loc_380CB4 - 0x37C3A0; jumptable 0037C39C case 152
//   0037C604  DCD loc_380CF8 - 0x37C3A0; jumptable 0037C39C case 153
//   0037C608  DCD 0xFFFFFB74
//   0037C60C  DCD __stack_chk_guard_ptr - 0x37C2A6
//   0037C610  DCD 0x2460
//   0037C614  LDR     R0, [R6,#4]; jumptable 0037C39C case 124
//   0037C616  MOVS    R4, #0x28 ; '('
//   0037C618  LDR     R5, [SP,#arg_260]
//   0037C61A  MULS    R4, R0
//   0037C61C  ADDS    R4, R5, R4

//======================================================================
// sub_37C628
// address: 0x0037C628   size: 0xC (12 bytes)
//======================================================================
int sub_37C628()
{
  _DWORD *v0; // r4
  int v1; // r6
  _DWORD *v2; // r0

  v2 = sub_3549D4(v0);
  STACK[0x264] = *(_DWORD *)(v1 + 8) - 1;
  return sub_37C634(v2);
}


//======================================================================
// sub_37C634
// address: 0x0037C634   size: 0x2 (2 bytes)
//======================================================================
int sub_37C634()
{
  return sub_37C636();
}


//======================================================================
// sub_37C636
// address: 0x0037C636   size: 0x46 (70 bytes)
//======================================================================
void __fastcall sub_37C636(int a1)
{
  unsigned int v1; // r4
  int (__fastcall *v2)(int); // r5
  unsigned int v3; // r6
  int v4; // r0
  int v5; // r0

  if ( *(_DWORD *)(STACK[0x244] + 232) != 0 )
    a1 = sub_381048();
  v1 = STACK[0x244] + 252;
  v2 = *(int (__fastcall **)(int))(STACK[0x244] + 284);
  if ( v2 == nullptr )
    sub_380F5A(a1);
  v3 = STACK[0x280];
  if ( STACK[0x280] < STACK[0x2AC] )
    sub_380F5A(STACK[0x2AC]);
  v4 = *(_DWORD *)(v1 + 36);
  STACK[0x2AC] = v3 + *(_DWORD *)(v1 + 40) - STACK[0x280] % *(_DWORD *)(v1 + 40);
  v5 = v2(v4);
  if ( v5 == 0 )
    v5 = sub_380F5A(0);
  sub_380F6A(v5);
  JUMPOUT(0x37C67C);
}


//======================================================================
// sub_37DF48
// address: 0x0037DF48   size: 0xAC (172 bytes)
//======================================================================
int sub_37DF48()
{
  _DWORD *v0; // r4
  _BYTE *v1; // r5
  char v2; // r7
  unsigned int v3; // r6
  _DWORD *v4; // r1
  _DWORD *v5; // r5
  _DWORD *v6; // r5
  _DWORD *v7; // r0
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r3
  int v11; // r3
  _DWORD *v12; // r1
  int v13; // r0
  int v14; // r0

  *v1 = v2;
  v3 = STACK[0x230];
  while ( 1 )
  {
    v4 = *(_DWORD **)(STACK[0x244] + 480);
    if ( v4 == v0 )
      break;
    v5 = (_DWORD *)STACK[0x244];
    v5[120] = v4[6];
    sub_354940(v5, v4);
    --v5[122];
  }
  if ( STACK[0x230] == 1 )
  {
    v6 = (_DWORD *)STACK[0x244];
    v6[120] = v0[6];
    v7 = sub_354940(v6, v0);
    if ( v3 != 0 )
      sub_380F5A(v7);
    --v6[122];
  }
  else
  {
    v8 = v0[2];
    v9 = v0[3];
    v10 = (_DWORD *)(STACK[0x244] + 496);
    *v10 = v8;
    v10[1] = v9;
    v11 = v0[5];
    v12 = (_DWORD *)(STACK[0x244] + 504);
    *v12 = v0[4];
    v12[1] = v11;
    if ( v3 != 0 )
      sub_380F5A(v8);
  }
  v13 = sub_34F5AA(STACK[0x244], STACK[0x230], STACK[0x238]);
  if ( v13 == 0 )
    v13 = sub_380F5A(0);
  v14 = sub_381016(v13);
  if ( *(_DWORD *)(v3 + 4) != 0 && *(_BYTE *)(STACK[0x244] + 62) == 0 && *(_DWORD *)(v3 + 8) == 0 )
    v14 = sub_3810EC(v14);
  return sub_37DFF4(v14);
}


//======================================================================
// sub_37DFF4
// address: 0x0037DFF4   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_37DFF4(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  _BYTE *v5; // r5
  unsigned int v6; // r7

  v5 = (_BYTE *)(STACK[0x244] + 62);
  if ( v4 == (unsigned __int8)*v5 )
    JUMPOUT(0x37E05E);
  if ( a4 != 0 )
  {
    sub_36B5C0(STACK[0x244], 516);
    *v5 = 1;
    goto LABEL_9;
  }
  if ( sub_3653B4((int *)STACK[0x24C], 1) != 0 )
    sub_380FB0();
  *v5 = v4;
  if ( sub_3751D8((_DWORD *)STACK[0x24C]) != 5 )
LABEL_9:
    JUMPOUT(0x37E046);
  v6 = STACK[0x24C];
  *(_DWORD *)(v6 + 76) = STACK[0x264];
  *v5 = 1 - v4;
  *(_DWORD *)(v6 + 80) = 5;
  return sub_37E040();
}


//======================================================================
// sub_37E040
// address: 0x0037E040   size: 0x7C (124 bytes)
//======================================================================
void sub_37E040()
{
  int v0; // r4
  int v1; // r6
  int v2; // r0
  int v3; // r3
  int *v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r1
  int v8; // r4
  unsigned int v9; // r3
  int v10; // r4
  int v11; // r0
  unsigned int v12; // r7
  int v13; // r3
  int v14; // r5
  int *v15; // r7
  _DWORD *v16; // r1
  int v17; // r3
  _DWORD *v18; // r1
  int v19; // r3
  _DWORD *v20; // r0
  _DWORD *v21; // r1
  void *v22; // r0
  unsigned int v23; // r5
  int v24; // r1

  ((void (*)(void))sub_380FB0)();
  sub_354F0A((_DWORD *)STACK[0x244]);
  v2 = *(_DWORD *)(STACK[0x24C] + 80);
  if ( v2 != 0 )
    v2 = sub_380FAE();
  sub_380FB0(v2);
  v4 = (int *)(STACK[0x24C] + 44);
  if ( v0 != 0 )
  {
    if ( v3 != 0 )
      v5 = sub_365388(v4, (_DWORD *)STACK[0x244], (int)"cannot rollback - no transaction is active");
    else
      v5 = sub_365388(v4, (_DWORD *)STACK[0x244], (int)"cannot commit - no transaction is active");
  }
  else
  {
    v5 = sub_365388(v4, (_DWORD *)STACK[0x244], (int)"cannot start a transaction within a transaction");
  }
  v6 = sub_380F5A(v5);
  v7 = *(_DWORD *)(v1 + 8);
  if ( v7 == 0 || (*(_DWORD *)(STACK[0x244] + 24) & 0x2000000) == 0 )
  {
    v8 = *(_DWORD *)(v1 + 4);
    STACK[0x16C] = *(_DWORD *)(STACK[0x244] + 16);
    v9 = STACK[0x16C] + 16 * v8;
    v10 = *(_DWORD *)(v9 + 4);
    if ( v10 != 0 )
    {
      v11 = sub_36CDC0(*(_DWORD *)(v9 + 4), v7);
      if ( v11 == 5 )
      {
        *(_DWORD *)(STACK[0x24C] + 76) = STACK[0x264];
        JUMPOUT(0x37E0BC);
      }
      if ( v11 != 0 )
        sub_381016(v11);
      if ( *(_DWORD *)(v1 + 8) != 0
        && *(unsigned __int8 *)(STACK[0x24C] + 88) >> 7 != 0
        && (*(_BYTE *)(STACK[0x244] + 62) == 0 || *(int *)(STACK[0x244] + 144) > 1) )
      {
        if ( *(_DWORD *)(STACK[0x24C] + 104) == 0 )
        {
          v12 = STACK[0x244];
          v13 = *(_DWORD *)(STACK[0x244] + 492) + 1;
          *(_DWORD *)(v12 + 492) = v13;
          *(_DWORD *)(STACK[0x24C] + 104) = *(_DWORD *)(v12 + 488) + v13;
        }
        if ( sub_34F5AA(STACK[0x244], 0, *(_DWORD *)(STACK[0x24C] + 104) - 1) == 0 )
        {
          v14 = *(_DWORD *)(STACK[0x24C] + 104);
          v15 = *(int **)(v10 + 4);
          sub_3574C2(v10);
          sub_351EB8(*v15, v14);
          sub_35655E(v10);
        }
        v16 = (_DWORD *)(STACK[0x24C] + 152);
        v17 = *(_DWORD *)(STACK[0x244] + 500);
        *v16 = *(_DWORD *)(STACK[0x244] + 496);
        v16[1] = v17;
        v18 = (_DWORD *)(STACK[0x24C] + 160);
        v19 = *(_DWORD *)(STACK[0x244] + 508);
        *v18 = *(_DWORD *)(STACK[0x244] + 504);
        v18[1] = v19;
      }
      sub_357930(v10, 1, &STACK[0x378]);
      v6 = *(_DWORD *)(STACK[0x244] + 16);
      v10 = *(_DWORD *)(*(_DWORD *)(v6 + 16 * *(_DWORD *)(v1 + 4) + 12) + 4);
    }
    else
    {
      STACK[0x378] = 0;
    }
    if ( *(_BYTE *)(v1 + 3) == 0 )
      v6 = sub_380F5A(v6);
    if ( STACK[0x378] == *(_DWORD *)(v1 + 12) && v10 == *(_DWORD *)(v1 + 16) )
      sub_380F5A(v6);
    v20 = (_DWORD *)STACK[0x244];
    v21 = *(_DWORD **)(STACK[0x24C] + 44);
    STACK[0x158] = (unsigned int)v21;
    sub_354940(v20, v21);
    v22 = sub_351BC8(STACK[0x244], "database schema has changed");
    v23 = STACK[0x244];
    *(_DWORD *)(STACK[0x24C] + 44) = v22;
    v24 = *(_DWORD *)(v1 + 4);
    if ( **(_DWORD **)(*(_DWORD *)(v23 + 16) + 16 * v24 + 12) != STACK[0x378] )
      v22 = (void *)sub_355608(STACK[0x244], v24);
    *(_BYTE *)(STACK[0x24C] + 88) |= 0x20u;
    v6 = sub_380F5A(v22);
  }
  sub_381016(v6);
  JUMPOUT(0x37E204);
}


//======================================================================
// sub_37EE2C
// address: 0x0037EE2C   size: 0xCD6 (3286 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037EE2C  CMP     R7, #0
//   0037EE2E  BEQ     loc_37EE32
//   0037EE30  B       loc_37EFAE
//   0037EE32  LDR     R4, [SP,#arg_250]
//   0037EE34  LDR     R0, [R5,#0x18]
//   0037EE36  LSLS    R3, R4, #4
//   0037EE38  CMP     R3, R0
//   0037EE3A  BLT     loc_37EE3E
//   0037EE3C  B       loc_37EFAE
//   0037EE3E  MOVS    R1, #0; int
//   0037EE40  ADD     R0, SP, #arg_378; void *
//   0037EE42  MOVS    R2, #0x28 ; '('; size_t
//   0037EE44  BL      j_memset
//   0037EE48  LDR     R7, [SP,#arg_238]
//   0037EE4A  MOVS    R0, #0
//   0037EE4C  MOVS    R1, #0
//   0037EE4E  STR     R0, [SP,#arg_268]
//   0037EE50  STR     R1, [SP,#arg_26C]
//   0037EE52  LDR     R4, [R7,#0x40]
//   0037EE54  MOVS    R7, #0
//   0037EE56  STR     R7, [SP,#arg_270]
//   0037EE58  LDR     R7, [R4,#0x24]
//   0037EE5A  LDR     R0, [SP,#arg_270]
//   0037EE5C  LDR     R1, [R4,#8]
//   0037EE5E  LDR     R2, [R4,#0xC]
//   0037EE60  STR     R1, [SP,#arg_258]
//   0037EE62  STR     R2, [SP,#arg_25C]
//   0037EE64  ADDS    R7, R7, R0
//   0037EE66  STR     R7, [SP,#arg_230]
//   0037EE68  LDR     R7, [SP,#arg_244]
//   0037EE6A  LDR     R0, [R4,#0x2C]
//   0037EE6C  LDR     R1, [SP,#arg_230]
//   0037EE6E  LDR     R3, [R7,#0x10]
//   0037EE70  LDR     R3, [R3,#4]
//   0037EE72  LDR     R3, [R3,#4]
//   0037EE74  LDR     R7, [R3,#0x20]
//   0037EE76  STR     R0, [R1,#0x18]
//   0037EE78  LDR     R2, [SP,#arg_258]
//   0037EE7A  LDR     R3, [SP,#arg_25C]
//   0037EE7C  MOVS    R0, R1
//   0037EE7E  STR     R2, [R1]
//   0037EE80  STR     R3, [R1,#4]
//   0037EE82  MOVS    R1, #0x80
//   0037EE84  STR     R1, [R0,#0x10]
//   0037EE86  LDR     R0, [SP,#arg_244]
//   0037EE88  BL      sub_3516AC
//   0037EE8C  LDR     R1, [SP,#arg_230]
//   0037EE8E  STR     R0, [R1,#0x1C]
//   0037EE90  STR     R7, [R1,#0x28]
//   0037EE92  LDR     R0, [SP,#arg_244]
//   0037EE94  MOVS    R1, R7
//   0037EE96  BL      sub_3516AC
//   0037EE9A  LDR     R2, [SP,#arg_230]
//   0037EE9C  STR     R0, [SP,#arg_274]
//   0037EE9E  STR     R0, [R2,#0x24]
//   0037EEA0  CMP     R0, #0
//   0037EEA2  BEQ     loc_37EF5E
//   0037EEA4  ASRS    R3, R7, #0x1F
//   0037EEA6  LDR     R0, [SP,#arg_258]
//   0037EEA8  LDR     R1, [SP,#arg_25C]
//   0037EEAA  MOVS    R2, R7
//   0037EEAC  BL      j___aeabi_ldivmod
//   0037EEB0  STR     R2, [SP,#arg_338]
//   0037EEB2  CMP     R2, #0
//   0037EEB4  BNE     loc_37EF10
//   0037EEB6  LDR     R7, [SP,#arg_230]
//   0037EEB8  LDR     R0, [R4]
//   0037EEBA  LDR     R1, [R4,#4]
//   0037EEBC  ADD     R2, SP, #arg_350
//   0037EEBE  STR     R0, [R7,#8]
//   0037EEC0  STR     R1, [R7,#0xC]
//   0037EEC2  MOVS    R1, R7
//   0037EEC4  LDR     R0, [SP,#arg_244]
//   0037EEC6  BL      sub_35A6E0
//   0037EECA  LDR     R2, [SP,#arg_230]
//   0037EECC  MOVS    R7, R0
//   0037EECE  LDR     R0, [SP,#arg_350]
//   0037EED0  LDR     R1, [SP,#arg_354]
//   0037EED2  STR     R0, [SP,#arg_258]
//   0037EED4  STR     R1, [SP,#arg_25C]
//   0037EED6  LDR     R1, [R2]
//   0037EED8  LDR     R2, [R2,#4]
//   0037EEDA  MOVS    R0, R1
//   0037EEDC  MOVS    R1, R2
//   0037EEDE  LDR     R2, [SP,#arg_258]
//   0037EEE0  LDR     R3, [SP,#arg_25C]
//   0037EEE2  ADDS    R0, R0, R2
//   0037EEE4  ADCS    R1, R3
//   0037EEE6  LDR     R3, [SP,#arg_230]
//   0037EEE8  STR     R0, [R3,#8]
//   0037EEEA  STR     R1, [R3,#0xC]
//   0037EEEC  LDR     R0, [SP,#arg_268]
//   0037EEEE  LDR     R1, [SP,#arg_26C]
//   0037EEF0  LDR     R2, [SP,#arg_258]
//   0037EEF2  LDR     R3, [SP,#arg_25C]
//   0037EEF4  ADDS    R0, R0, R2
//   0037EEF6  ADCS    R1, R3
//   0037EEF8  STR     R0, [SP,#arg_268]
//   0037EEFA  STR     R1, [SP,#arg_26C]
//   0037EEFC  CMP     R7, #0
//   0037EEFE  BNE     loc_37EF60
//   0037EF00  LDR     R0, [SP,#arg_244]
//   0037EF02  LDR     R1, [SP,#arg_230]
//   0037EF04  BL      sub_35A77C
//   0037EF08  MOVS    R7, R0
//   0037EF0A  B       loc_37EF60
//   0037EF0C  DCD 0xFFFFBE00
//   0037EF10  LDR     R3, [SP,#arg_338]
//   0037EF12  LDR     R0, [SP,#arg_258]
//   0037EF14  LDR     R1, [SP,#arg_25C]
//   0037EF16  SUBS    R3, R7, R3
//   0037EF18  LDR     R7, [R4]
//   0037EF1A  STR     R3, [SP,#arg_300]
//   0037EF1C  MOV     R12, R3
//   0037EF1E  STR     R7, [SP,#arg_284]
//   0037EF20  ASRS    R3, R3, #0x1F
//   0037EF22  LDR     R7, [R4,#4]
//   0037EF24  STR     R3, [SP,#arg_304]
//   0037EF26  LDR     R2, [SP,#arg_300]
//   0037EF28  LDR     R3, [SP,#arg_304]
//   0037EF2A  ADDS    R0, R0, R2
//   0037EF2C  ADCS    R1, R3
//   0037EF2E  CMP     R1, R7
//   0037EF30  BGT     loc_37EF3A
//   0037EF32  BNE     loc_37EF42
//   0037EF34  LDR     R3, [SP,#arg_284]
//   0037EF36  CMP     R0, R3
//   0037EF38  BLS     loc_37EF42
//   0037EF3A  LDR     R7, [SP,#arg_284]
//   0037EF3C  LDR     R0, [SP,#arg_258]
//   0037EF3E  SUBS    R7, R7, R0
//   0037EF40  MOV     R12, R7
//   0037EF42  LDR     R7, [SP,#arg_274]
//   0037EF44  LDR     R2, [SP,#arg_338]
//   0037EF46  LDR     R0, [R4,#0x2C]
//   0037EF48  ADDS    R1, R7, R2
//   0037EF4A  LDR     R2, [SP,#arg_258]
//   0037EF4C  LDR     R3, [SP,#arg_25C]
//   0037EF4E  STR     R2, [SP,#arg_0]
//   0037EF50  STR     R3, [SP,#arg_4]
//   0037EF52  MOV     R2, R12
//   0037EF54  BL      sub_34CA3A
//   0037EF58  SUBS    R7, R0, #0
//   0037EF5A  BNE     loc_37EF60
//   0037EF5C  B       loc_37EEB6
//   0037EF5E  MOVS    R7, #7
//   0037EF60  LDR     R3, [SP,#arg_230]
//   0037EF62  LDR     R2, [R3,#8]
//   0037EF64  LDR     R3, [R3,#0xC]
//   0037EF66  STR     R2, [R4,#8]
//   0037EF68  STR     R3, [R4,#0xC]
//   0037EF6A  CMP     R7, #0
//   0037EF6C  BNE     loc_37EF8C
//   0037EF6E  LDR     R1, [R4,#4]
//   0037EF70  CMP     R1, R3
//   0037EF72  BGT     loc_37EF7C
//   0037EF74  BNE     loc_37EF8C
//   0037EF76  LDR     R0, [R4]
//   0037EF78  CMP     R0, R2
//   0037EF7A  BLS     loc_37EF8C
//   0037EF7C  LDR     R1, [SP,#arg_270]
//   0037EF7E  MOVS    R3, #0x300
//   0037EF82  ADDS    R1, #0x30 ; '0'
//   0037EF84  STR     R1, [SP,#arg_270]
//   0037EF86  CMP     R1, R3
//   0037EF88  BEQ     loc_37EF8C
//   0037EF8A  B       loc_37EE58
//   0037EF8C  LDR     R4, [R4,#0x14]
//   0037EF8E  SUBS    R4, #1
//   0037EF90  CMP     R7, #0
//   0037EF92  BNE     loc_37EFAE
//   0037EF94  CMP     R4, #0
//   0037EF96  BLE     loc_37EFA4
//   0037EF98  LDR     R0, [SP,#arg_238]
//   0037EF9A  MOVS    R1, R4
//   0037EF9C  BL      sub_35DF6C
//   0037EFA0  MOVS    R7, R0
//   0037EFA2  B       loc_37EF8E
//   0037EFA4  LDR     R2, [R5,#0x18]
//   0037EFA6  CMP     R2, #0x10
//   0037EFA8  BLE     loc_37EFAE
//   0037EFAA  BL      sub_38113A
//   0037EFAE  LDR     R1, [R5,#0x18]
//   0037EFB0  CMP     R1, #0x10
//   0037EFB2  BGT     loc_37EFC0
//   0037EFB4  LDR     R0, [SP,#arg_344]
//   0037EFB6  CMP     R0, #0
//   0037EFB8  BEQ     loc_37EFE8
//   0037EFBA  BL      sub_351DB4
//   0037EFBE  B       loc_37EFE8
//   0037EFC0  LDR     R4, [SP,#arg_250]
//   0037EFC2  LDR     R3, [R5,#0x2C]
//   0037EFC4  STR     R4, [R5,#0x18]
//   0037EFC6  LDR     R0, [SP,#arg_344]
//   0037EFC8  STR     R0, [R5,#0x2C]
//   0037EFCA  LDR     R1, [SP,#arg_348]
//   0037EFCC  LDR     R2, [SP,#arg_34C]
//   0037EFCE  STR     R3, [SP,#arg_344]
//   0037EFD0  STR     R1, [R5]
//   0037EFD2  STR     R2, [R5,#4]

//======================================================================
// sub_37FB02
// address: 0x0037FB02   size: 0x7EC (2028 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0037FB02  LDR     R7, [R4,#0x10]
//   0037FB04  LDRB    R3, [R7,#0x1A]
//   0037FB06  LSLS    R0, R3, #0x1E
//   0037FB08  BMI     loc_37FB1E
//   0037FB0A  LSLS    R1, R3, #0x1F
//   0037FB0C  BMI     loc_37FB16
//   0037FB0E  LDR     R0, [R7,#8]
//   0037FB10  BL      sub_350252
//   0037FB14  STR     R0, [R7,#8]
//   0037FB16  LDRB    R3, [R7,#0x1A]
//   0037FB18  MOVS    R2, #2
//   0037FB1A  ORRS    R3, R2
//   0037FB1C  STRB    R3, [R7,#0x1A]
//   0037FB1E  LDR     R3, [R7,#8]
//   0037FB20  CMP     R3, #0
//   0037FB22  BNE     loc_37FB28
//   0037FB24  BL      sub_37C628
//   0037FB28  LDR     R4, [R3]
//   0037FB2A  LDR     R5, [R3,#4]
//   0037FB2C  LDR     R3, [R3,#8]
//   0037FB2E  STR     R3, [R7,#8]
//   0037FB30  CMP     R3, #0
//   0037FB32  BEQ     loc_37FB38
//   0037FB34  BL      sub_38110C
//   0037FB38  MOVS    R0, R7
//   0037FB3A  BL      sub_3549AE
//   0037FB3E  BL      sub_38110C
//   0037FB42  LDR     R4, [R6,#4]; jumptable 0037C39C case 125
//   0037FB44  LDR     R7, [R6,#0xC]
//   0037FB46  MOVS    R3, #0x28 ; '('
//   0037FB48  MOVS    R2, R4
//   0037FB4A  MULS    R2, R3
//   0037FB4C  MULS    R3, R7
//   0037FB4E  LDR     R5, [SP,#arg_260]
//   0037FB50  LDR     R4, [R6,#0x10]
//   0037FB52  ADDS    R2, R5, R2
//   0037FB54  ADDS    R3, R5, R3
//   0037FB56  STR     R3, [SP,#arg_274]
//   0037FB58  LDRH    R3, [R2,#0x1C]
//   0037FB5A  STR     R4, [SP,#arg_250]
//   0037FB5C  MOVS    R4, #0x20 ; ' '
//   0037FB5E  STR     R2, [SP,#arg_230]
//   0037FB60  TST     R3, R4
//   0037FB62  BEQ     loc_37FB6C
//   0037FB64  LDR     R5, [SP,#arg_250]
//   0037FB66  CMP     R5, #0
//   0037FB68  BNE     loc_37FB92
//   0037FB6A  B       loc_37FB7E
//   0037FB6C  LDR     R0, [SP,#arg_230]
//   0037FB6E  BL      sub_35621A
//   0037FB72  LDR     R7, [SP,#arg_230]
//   0037FB74  LDRH    R3, [R7,#0x1C]
//   0037FB76  TST     R3, R4
//   0037FB78  BNE     loc_37FB64
//   0037FB7A  BL      sub_380FFA
//   0037FB7E  LDR     R4, [SP,#arg_230]
//   0037FB80  LDR     R5, [SP,#arg_274]
//   0037FB82  MOVS    R7, #0
//   0037FB84  LDR     R0, [R4,#0x10]
//   0037FB86  LDR     R2, [R5,#0x10]
//   0037FB88  LDR     R3, [R5,#0x14]
//   0037FB8A  BL      sub_35175A
//   0037FB8E  BL      sub_380F5A
//   0037FB92  LDR     R4, [SP,#arg_230]
//   0037FB94  LDR     R5, [SP,#arg_250]
//   0037FB96  LDR     R7, [R4,#0x10]
//   0037FB98  CMP     R5, #0
//   0037FB9A  BLT     loc_37FBA4
//   0037FB9C  MOVS    R3, #0xF
//   0037FB9E  ANDS    R5, R3
//   0037FBA0  STR     R5, [SP,#arg_270]
//   0037FBA2  B       loc_37FBA8
//   0037FBA4  MOVS    R4, #0xFF
//   0037FBA6  STR     R4, [SP,#arg_270]
//   0037FBA8  LDR     R5, [SP,#arg_274]
//   0037FBAA  LDR     R4, [SP,#arg_274]
//   0037FBAC  LDRB    R3, [R7,#0x1B]
//   0037FBAE  LDR     R5, [R5,#0x10]
//   0037FBB0  LDR     R4, [R4,#0x14]
//   0037FBB2  STR     R5, [SP,#arg_284]
//   0037FBB4  LDR     R5, [SP,#arg_270]
//   0037FBB6  STR     R4, [SP,#arg_258]
//   0037FBB8  CMP     R3, R5
//   0037FBBA  BEQ     loc_37FC68
//   0037FBBC  LDR     R5, [R7,#8]
//   0037FBBE  CMP     R5, #0
//   0037FBC0  BEQ     loc_37FC64
//   0037FBC2  LDRB    R3, [R7,#0x1A]
//   0037FBC4  MOVS    R4, R7
//   0037FBC6  ADDS    R4, #0x14
//   0037FBC8  STR     R4, [SP,#arg_268]
//   0037FBCA  LSLS    R0, R3, #0x1F
//   0037FBCC  BMI     loc_37FBD6
//   0037FBCE  MOVS    R0, R5
//   0037FBD0  BL      sub_350252
//   0037FBD4  MOVS    R5, R0
//   0037FBD6  LDR     R4, [R7,#0x14]
//   0037FBD8  CMP     R4, #0
//   0037FBDA  BEQ     loc_37FC30
//   0037FBDC  LDR     R0, [R4,#0xC]
//   0037FBDE  MOVS    R1, R4
//   0037FBE0  ADDS    R1, #8
//   0037FBE2  STR     R1, [SP,#arg_268]
//   0037FBE4  CMP     R0, #0
//   0037FBE6  BNE     loc_37FBF0
//   0037FBE8  MOVS    R0, R5
//   0037FBEA  BL      sub_34DF06
//   0037FBEE  B       loc_37FC54
//   0037FBF0  ADD     R1, SP, #arg_350
//   0037FBF2  ADD     R2, SP, #arg_378
//   0037FBF4  BL      sub_34DE98
//   0037FBF8  MOVS    R3, #0
//   0037FBFA  STR     R3, [R4,#0xC]
//   0037FBFC  MOVS    R1, R5
//   0037FBFE  LDR     R0, [SP,#arg_350]
//   0037FC00  BL      sub_34DE46
//   0037FC04  LDR     R4, [R4,#8]
//   0037FC06  MOVS    R5, R0
//   0037FC08  B       loc_37FBD8
//   0037FC0A  ALIGN 4
//   0037FC0C  DCD dword_471738 - 0x37F8F8
//   0037FC10  DCD 0x3B9ACA00
//   0037FC14  DCD 0x3AD
//   0037FC18  DCD aMainFreelist - 0x37F95A
//   0037FC1C  DCD aListOfTreeRoot - 0x37F99E
//   0037FC20  DCD aPageDIsNeverUs - 0x37F9EE
//   0037FC24  DCD aPointerMapPage - 0x37FA10
//   0037FC28  DCD aOutstandingPag - 0x37FA30
//   0037FC2C  DCD sqlite3_free_ptr - 0x37FAAE
//   0037FC30  MOVS    R0, R7
//   0037FC32  BL      sub_351724
//   0037FC36  LDR     R1, [SP,#arg_268]
//   0037FC38  STR     R0, [SP,#arg_238]
//   0037FC3A  STR     R0, [R1]
//   0037FC3C  CMP     R0, #0
//   0037FC3E  BEQ     loc_37FC56
//   0037FC40  LDR     R0, [SP,#arg_238]
//   0037FC42  MOVS    R2, #0
//   0037FC44  MOVS    R3, #0
//   0037FC46  STR     R4, [R0,#8]
//   0037FC48  STR     R2, [R0]
//   0037FC4A  STR     R3, [R0,#4]
//   0037FC4C  MOVS    R0, R5
//   0037FC4E  BL      sub_34DF06
//   0037FC52  LDR     R4, [SP,#arg_238]
//   0037FC54  STR     R0, [R4,#0xC]
//   0037FC56  MOVS    R3, #0
//   0037FC58  STR     R3, [R7,#8]
//   0037FC5A  STR     R3, [R7,#0xC]
//   0037FC5C  LDRB    R3, [R7,#0x1A]
//   0037FC5E  MOVS    R2, #1
//   0037FC60  ORRS    R3, R2
//   0037FC62  STRB    R3, [R7,#0x1A]
//   0037FC64  LDR     R5, [SP,#arg_270]
//   0037FC66  STRB    R5, [R7,#0x1B]
//   0037FC68  LDR     R2, [R7,#0x14]
//   0037FC6A  CMP     R2, #0
//   0037FC6C  BEQ     loc_37FCA8
//   0037FC6E  LDR     R3, [R2,#0xC]
//   0037FC70  CMP     R3, #0
//   0037FC72  BEQ     loc_37FCA4
//   0037FC74  LDR     R1, [R3,#4]
//   0037FC76  LDR     R7, [SP,#arg_258]
//   0037FC78  LDR     R0, [R3]
//   0037FC7A  CMP     R7, R1
//   0037FC7C  BGT     loc_37FC86
//   0037FC7E  BNE     loc_37FC8A
//   0037FC80  LDR     R4, [SP,#arg_284]
//   0037FC82  CMP     R4, R0
//   0037FC84  BLS     loc_37FC8A
//   0037FC86  LDR     R3, [R3,#8]
//   0037FC88  B       loc_37FC70
//   0037FC8A  LDR     R5, [SP,#arg_258]
//   0037FC8C  CMP     R1, R5
//   0037FC8E  BGT     loc_37FCA0
//   0037FC90  BEQ     loc_37FC96
//   0037FC92  BL      sub_381128
//   0037FC96  LDR     R7, [SP,#arg_284]
//   0037FC98  CMP     R0, R7
//   0037FC9A  BHI     loc_37FCA0
//   0037FC9C  BL      sub_381128
//   0037FCA0  LDR     R3, [R3,#0xC]
//   0037FCA2  B       loc_37FC70
//   0037FCA4  LDR     R2, [R2,#8]
//   0037FCA6  B       loc_37FC6A
//   0037FCA8  LDR     R4, [SP,#arg_250]
//   0037FCAA  CMP     R4, #0
//   0037FCAC  BLT     loc_37FCB0
//   0037FCAE  B       loc_37FB7E
//   0037FCB0  MOVS    R7, R2
//   0037FCB2  BL      sub_380F5A
//   0037FCB6  LDRB    R3, [R6,#3]; jumptable 0037C39C case 126
//   0037FCB8  LDR     R5, [R6,#0x10]
//   0037FCBA  LDR     R1, [R6,#0xC]
//   0037FCBC  CMP     R3, #0
//   0037FCBE  BEQ     loc_37FCDC
//   0037FCC0  LDR     R3, [SP,#arg_24C]
//   0037FCC2  LDR     R2, [R5,#0x14]
//   0037FCC4  ADDS    R3, #0xB0
//   0037FCC6  LDR     R3, [R3]
