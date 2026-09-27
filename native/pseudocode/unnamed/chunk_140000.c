// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_140000

//======================================================================
// sub_143370
// address: 0x00143370   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_143370(int a1, Ogre::MovableObject *a2, Ogre::Matrix4 *a3)
{
  char *WorldMatrix; // r0
  float v7[16]; // [sp+8h] [bp-C4h] BYREF
  float v8[16]; // [sp+48h] [bp-84h] BYREF
  _BYTE v9[68]; // [sp+88h] [bp-44h] BYREF

  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v7, a3);
  memset(&v7[12], 0, 12);
  v7[15] = 1.0;
  Ogre::Matrix4::quickInverse((Ogre::Matrix4 *)v7);
  WorldMatrix = Ogre::MovableObject::getWorldMatrix(a2);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v8, (const Ogre::Matrix4 *)WorldMatrix);
  memset(&v8[12], 0, 12);
  v8[15] = 1.0;
  Ogre::operator*((Ogre::Matrix4 *)v9, v8, v7);
  return Ogre::Matrix4::operator=(a1, v9);
}


//======================================================================
// sub_145BC0
// address: 0x00145BC0   size: 0xACA (2762 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00145BC0  LDR     R2, =0x1A0D
//   00145BC2  CMP     R3, R2
//   00145BC4  BNE     loc_145C5C
//   00145BC6  MOVS    R0, R4; this
//   00145BC8  STR     R5, [SP,#arg_C]
//   00145BCA  BL      _ZNK4Ogre8PixelBox12getSliceSkipEv; Ogre::PixelBox::getSliceSkip(void)
//   00145BCE  MOVS    R5, R0
//   00145BD0  MOVS    R0, R7; this
//   00145BD2  BL      _ZNK4Ogre8PixelBox12getSliceSkipEv; Ogre::PixelBox::getSliceSkip(void)
//   00145BD6  LDR     R3, [R4,#0xC]
//   00145BD8  LDR     R1, [R4]
//   00145BDA  LDR     R2, [R4,#8]
//   00145BDC  LSLS    R5, R5, #2
//   00145BDE  SUBS    R3, R3, R1
//   00145BE0  LSLS    R0, R0, #2
//   00145BE2  STR     R3, [SP,#arg_14]
//   00145BE4  STR     R2, [SP,#arg_10]
//   00145BE6  STR     R5, [SP,#arg_1C]
//   00145BE8  STR     R0, [SP,#arg_18]
//   00145BEA  LDR     R2, [SP,#arg_10]
//   00145BEC  LDR     R3, [R4,#0x14]
//   00145BEE  CMP     R2, R3
//   00145BF0  BLT     loc_145BF6
//   00145BF2  BL      sub_146750
//   00145BF6  LDR     R3, [R4,#4]
//   00145BF8  MOV     R12, R3
//   00145BFA  LDR     R1, [R4,#0x10]
//   00145BFC  CMP     R12, R1
//   00145BFE  BGE     loc_145C48
//   00145C00  MOVS    R3, #0
//   00145C02  LDR     R0, [SP,#arg_14]
//   00145C04  CMP     R3, R0
//   00145C06  BGE     loc_145C32
//   00145C08  LSLS    R1, R3, #2
//   00145C0A  LDR     R2, [R6,R1]
//   00145C0C  MOVS    R5, #0xFF00
//   00145C10  MOVS    R0, #0xFF
//   00145C12  ANDS    R5, R2
//   00145C14  LSLS    R0, R0, #0x18
//   00145C16  ORRS    R5, R0
//   00145C18  MOVS    R0, #0xFF
//   00145C1A  ANDS    R0, R2
//   00145C1C  LSLS    R0, R0, #0x10
//   00145C1E  ORRS    R0, R5
//   00145C20  MOVS    R5, #0xFF0000
//   00145C24  ANDS    R2, R5
//   00145C26  LSRS    R5, R2, #0x10
//   00145C28  ORRS    R0, R5
//   00145C2A  LDR     R5, [SP,#arg_C]
//   00145C2C  ADDS    R3, #1
//   00145C2E  STR     R0, [R5,R1]
//   00145C30  B       loc_145C02
//   00145C32  LDR     R1, [R4,#0x20]
//   00145C34  LDR     R2, [R7,#0x20]
//   00145C36  LDR     R5, [SP,#arg_C]
//   00145C38  LSLS    R3, R1, #2
//   00145C3A  ADDS    R6, R6, R3
//   00145C3C  LSLS    R3, R2, #2
//   00145C3E  ADDS    R5, R5, R3
//   00145C40  MOVS    R0, #1
//   00145C42  STR     R5, [SP,#arg_C]
//   00145C44  ADD     R12, R0
//   00145C46  B       loc_145BFA
//   00145C48  LDR     R5, [SP,#arg_C]
//   00145C4A  LDR     R1, [SP,#arg_10]
//   00145C4C  LDR     R0, [SP,#arg_18]
//   00145C4E  LDR     R2, [SP,#arg_1C]
//   00145C50  ADDS    R1, #1
//   00145C52  ADDS    R5, R5, R0
//   00145C54  ADDS    R6, R6, R2
//   00145C56  STR     R5, [SP,#arg_C]
//   00145C58  STR     R1, [SP,#arg_10]
//   00145C5A  B       loc_145BEA
//   00145C5C  CMP     R3, R2
//   00145C5E  BLE     loc_145C62
//   00145C60  B       loc_14614C
//   00145C62  LDR     R2, =0xE01
//   00145C64  CMP     R3, R2
//   00145C66  BNE     loc_145CDA
//   00145C68  MOVS    R0, R4; this
//   00145C6A  BL      _ZNK4Ogre8PixelBox12getSliceSkipEv; Ogre::PixelBox::getSliceSkip(void)
//   00145C6E  STR     R0, [SP,#arg_C]
//   00145C70  MOVS    R0, R7; this
//   00145C72  BL      _ZNK4Ogre8PixelBox12getSliceSkipEv; Ogre::PixelBox::getSliceSkip(void)
//   00145C76  LDR     R3, [R4]
//   00145C78  LDR     R2, [R4,#0xC]
//   00145C7A  LDR     R1, [SP,#arg_C]
//   00145C7C  STR     R0, [SP,#arg_18]
//   00145C7E  LDR     R0, [R4,#8]
//   00145C80  SUBS    R2, R2, R3
//   00145C82  MOVS    R3, #0xFF
//   00145C84  LSLS    R1, R1, #2
//   00145C86  LSLS    R3, R3, #8
//   00145C88  STR     R2, [SP,#arg_10]
//   00145C8A  STR     R0, [SP,#arg_1C]
//   00145C8C  STR     R1, [SP,#arg_14]
//   00145C8E  MOV     R12, R3
//   00145C90  LDR     R3, [SP,#arg_1C]
//   00145C92  LDR     R0, [R4,#0x14]
//   00145C94  CMP     R3, R0
//   00145C96  BLT     loc_145C9C
//   00145C98  BL      sub_146750
//   00145C9C  LDR     R1, [R4,#4]
//   00145C9E  LDR     R3, [R4,#0x10]
//   00145CA0  CMP     R1, R3
//   00145CA2  BGE     loc_145CCA
//   00145CA4  MOVS    R3, #0
//   00145CA6  LDR     R2, [SP,#arg_10]
//   00145CA8  CMP     R3, R2
//   00145CAA  BGE     loc_145CBC
//   00145CAC  LSLS    R2, R3, #2
//   00145CAE  LDR     R2, [R6,R2]
//   00145CB0  MOV     R0, R12
//   00145CB2  ANDS    R2, R0
//   00145CB4  LSRS    R0, R2, #8
//   00145CB6  STRB    R0, [R5,R3]
//   00145CB8  ADDS    R3, #1
//   00145CBA  B       loc_145CA6
//   00145CBC  LDR     R0, [R4,#0x20]
//   00145CBE  LDR     R2, [R7,#0x20]
//   00145CC0  ADDS    R1, #1
//   00145CC2  LSLS    R3, R0, #2
//   00145CC4  ADDS    R6, R6, R3
//   00145CC6  ADDS    R5, R5, R2
//   00145CC8  B       loc_145C9E
//   00145CCA  LDR     R2, [SP,#arg_1C]
//   00145CCC  LDR     R0, [SP,#arg_14]
//   00145CCE  LDR     R1, [SP,#arg_18]
//   00145CD0  ADDS    R2, #1
//   00145CD2  ADDS    R6, R6, R0
//   00145CD4  ADDS    R5, R5, R1
//   00145CD6  STR     R2, [SP,#arg_1C]
//   00145CD8  B       loc_145C90
//   00145CDA  CMP     R3, R2
//   00145CDC  BLE     loc_145CE0
//   00145CDE  B       loc_145F1C
//   00145CE0  LDR     R2, =0xD0C
//   00145CE2  CMP     R3, R2
//   00145CE4  BNE     loc_145D78
//   00145CE6  MOVS    R0, R4; this
//   00145CE8  STR     R5, [SP,#arg_C]
//   00145CEA  BL      _ZNK4Ogre8PixelBox12getSliceSkipEv; Ogre::PixelBox::getSliceSkip(void)
//   00145CEE  MOVS    R5, R0
//   00145CF0  MOVS    R0, R7; this
//   00145CF2  BL      _ZNK4Ogre8PixelBox12getSliceSkipEv; Ogre::PixelBox::getSliceSkip(void)
//   00145CF6  LDR     R3, [R4,#0xC]
//   00145CF8  LDR     R1, [R4]
//   00145CFA  LDR     R2, [R4,#8]
//   00145CFC  LSLS    R5, R5, #2
//   00145CFE  SUBS    R3, R3, R1
//   00145D00  LSLS    R0, R0, #2
//   00145D02  STR     R3, [SP,#arg_14]
//   00145D04  STR     R5, [SP,#arg_1C]
//   00145D06  STR     R0, [SP,#arg_18]
//   00145D08  LDR     R1, [R4,#0x14]
//   00145D0A  CMP     R2, R1
//   00145D0C  BLT     loc_145D12
//   00145D0E  BL      sub_146750
//   00145D12  LDR     R3, [R4,#4]
//   00145D14  MOV     R12, R3
//   00145D16  LDR     R1, [R4,#0x10]
//   00145D18  CMP     R12, R1
//   00145D1A  BGE     loc_145D68
//   00145D1C  MOVS    R3, #0
//   00145D1E  LDR     R0, [SP,#arg_14]
//   00145D20  CMP     R3, R0
//   00145D22  BGE     loc_145D52
//   00145D24  LSLS    R1, R3, #2
//   00145D26  LDR     R5, [R6,R1]
//   00145D28  MOVS    R0, #0xFF
//   00145D2A  ADDS    R3, #1
//   00145D2C  ANDS    R5, R0
//   00145D2E  LSLS    R5, R5, #0x10
//   00145D30  LDR     R0, [R6,R1]
//   00145D32  STR     R5, [SP,#arg_10]
//   00145D34  MOVS    R5, #0xFF0000
//   00145D38  ANDS    R0, R5
//   00145D3A  LDR     R5, [SP,#arg_10]
//   00145D3C  LSRS    R0, R0, #0x10
//   00145D3E  ORRS    R5, R0
//   00145D40  STR     R5, [SP,#arg_10]
//   00145D42  LDR     R0, =0xFF00FF00
//   00145D44  LDR     R5, [R6,R1]
//   00145D46  ANDS    R5, R0
//   00145D48  LDR     R0, [SP,#arg_10]
//   00145D4A  ORRS    R0, R5
//   00145D4C  LDR     R5, [SP,#arg_C]
//   00145D4E  STR     R0, [R5,R1]
//   00145D50  B       loc_145D1E
//   00145D52  LDR     R1, [R4,#0x20]; int
//   00145D54  LDR     R5, [R7,#0x20]
//   00145D56  MOVS    R0, #1
//   00145D58  LSLS    R3, R1, #2
//   00145D5A  ADDS    R6, R6, R3
//   00145D5C  LSLS    R3, R5, #2
//   00145D5E  LDR     R5, [SP,#arg_C]
//   00145D60  ADD     R12, R0
//   00145D62  ADDS    R5, R5, R3
//   00145D64  STR     R5, [SP,#arg_C]
//   00145D66  B       loc_145D16

//======================================================================
// sub_14668A
// address: 0x0014668A   size: 0xC6 (198 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0014668A  BL      _ZN4Ogre9PixelUtil15getNumElemBytesENS_11PixelFormatE; Ogre::PixelUtil::getNumElemBytes(Ogre::PixelFormat)
//   0014668E  STR     R0, [SP,#arg_1C]
//   00146690  LDR     R0, [R7,#0x1C]
//   00146692  BL      _ZN4Ogre9PixelUtil15getNumElemBytesENS_11PixelFormatE; Ogre::PixelUtil::getNumElemBytes(Ogre::PixelFormat)
//   00146696  LDR     R1, [R4]
//   00146698  STR     R0, [SP,#arg_18]
//   0014669A  LDR     R0, [R4,#0xC]
//   0014669C  LDR     R2, [R4,#0x20]
//   0014669E  SUBS    R3, R0, R1
//   001466A0  LDR     R1, [SP,#arg_1C]
//   001466A2  SUBS    R3, R2, R3
//   001466A4  MOVS    R0, R3
//   001466A6  MULS    R0, R1
//   001466A8  STR     R0, [SP,#arg_20]
//   001466AA  MOVS    R0, R4; this
//   001466AC  BL      _ZNK4Ogre8PixelBox12getSliceSkipEv; Ogre::PixelBox::getSliceSkip(void)
//   001466B0  LDR     R3, [SP,#arg_1C]
//   001466B2  LDR     R1, [R7]
//   001466B4  MOVS    R2, R3
//   001466B6  MULS    R2, R0
//   001466B8  LDR     R0, [R7,#0xC]
//   001466BA  STR     R2, [SP,#arg_24]
//   001466BC  LDR     R2, [R7,#0x20]
//   001466BE  SUBS    R3, R0, R1
//   001466C0  LDR     R1, [SP,#arg_18]
//   001466C2  SUBS    R3, R2, R3
//   001466C4  MOVS    R0, R3
//   001466C6  MULS    R0, R1
//   001466C8  STR     R0, [SP,#arg_28]
//   001466CA  MOVS    R0, R7; this
//   001466CC  BL      _ZNK4Ogre8PixelBox12getSliceSkipEv; Ogre::PixelBox::getSliceSkip(void)
//   001466D0  LDR     R3, [SP,#arg_18]
//   001466D2  MOVS    R2, R3
//   001466D4  MULS    R2, R0
//   001466D6  LDR     R0, [R4,#8]
//   001466D8  STR     R2, [SP,#arg_2C]
//   001466DA  STR     R0, [SP,#arg_C]
//   001466DC  LDR     R3, [SP,#arg_C]
//   001466DE  LDR     R0, [R4,#0x14]
//   001466E0  CMP     R3, R0
//   001466E2  BGE     sub_146750
//   001466E4  LDR     R2, [R4,#4]
//   001466E6  STR     R2, [SP,#arg_10]
//   001466E8  LDR     R2, [SP,#arg_10]
//   001466EA  LDR     R3, [R4,#0x10]
//   001466EC  CMP     R2, R3
//   001466EE  BGE     loc_146740
//   001466F0  LDR     R3, [R4]
//   001466F2  STR     R3, [SP,#arg_14]
//   001466F4  LDR     R1, [SP,#arg_14]
//   001466F6  LDR     R2, [R4,#0xC]
//   001466F8  CMP     R1, R2
//   001466FA  BGE     loc_146730
//   001466FC  LDR     R0, [R4,#0x1C]
//   001466FE  STR     R6, [SP,#arg_4]; Ogre::Bitwise *
//   00146700  ADD     R1, SP, #arg_38; int
//   00146702  STR     R0, [SP,#arg_0]; int
//   00146704  ADD     R2, SP, #arg_3C; int
//   00146706  ADD     R0, SP, #arg_34; int
//   00146708  ADD     R3, SP, #arg_40; int
//   0014670A  BL      _ZN4Ogre9PixelUtil12unpackColourEPfS1_S1_S1_NS_11PixelFormatEPKv; Ogre::PixelUtil::unpackColour(float *,float *,float *,float *,Ogre::PixelFormat,void const*)
//   0014670E  LDR     R1, [R7,#0x1C]
//   00146710  LDR     R0, [SP,#arg_34]; this
//   00146712  STR     R5, [SP,#arg_4]; int
//   00146714  STR     R1, [SP,#arg_0]; int
//   00146716  LDR     R2, [SP,#arg_3C]; int
//   00146718  LDR     R3, [SP,#arg_40]; int
//   0014671A  LDR     R1, [SP,#arg_38]; Ogre::Bitwise *
//   0014671C  BL      _ZN4Ogre9PixelUtil10packColourEffffNS_11PixelFormatEPv; Ogre::PixelUtil::packColour(float,float,float,float,Ogre::PixelFormat,void *)
//   00146720  LDR     R0, [SP,#arg_14]
//   00146722  LDR     R2, [SP,#arg_1C]
//   00146724  LDR     R3, [SP,#arg_18]
//   00146726  ADDS    R0, #1
//   00146728  ADDS    R6, R6, R2
//   0014672A  ADDS    R5, R5, R3
//   0014672C  STR     R0, [SP,#arg_14]
//   0014672E  B       loc_1466F4
//   00146730  LDR     R1, [SP,#arg_10]
//   00146732  LDR     R3, [SP,#arg_20]
//   00146734  LDR     R0, [SP,#arg_28]
//   00146736  ADDS    R1, #1
//   00146738  ADDS    R6, R6, R3
//   0014673A  ADDS    R5, R5, R0
//   0014673C  STR     R1, [SP,#arg_10]
//   0014673E  B       loc_1466E8
//   00146740  LDR     R2, [SP,#arg_C]
//   00146742  LDR     R0, [SP,#arg_24]
//   00146744  LDR     R1, [SP,#arg_2C]
//   00146746  ADDS    R2, #1
//   00146748  ADDS    R6, R6, R0
//   0014674A  ADDS    R5, R5, R1
//   0014674C  STR     R2, [SP,#arg_C]
//   0014674E  B       loc_1466DC

//======================================================================
// sub_146750
// address: 0x00146750   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_146750(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_146982
// address: 0x00146982   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_146982(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_14698C
// address: 0x0014698C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_14698C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_14AA7C
// address: 0x0014AA7C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_14AA7C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_14AA86
// address: 0x0014AA86   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_14AA86(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_14E51E
// address: 0x0014E51E   size: 0x5E (94 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_14E51E(unsigned __int8 *result, int a2, int a3, int a4)
{
  int *v4; // r3
  int v5; // r1
  int v6; // r4
  int v7; // r5
  int v8; // r2

  v4 = *(int **)(a4 + 0x14E524);
  *v4 = a2 + 7492931;
  if ( a2 > 61439 )
    a2 = 61440;
  v5 = a2 / 4;
  v6 = 0;
  while ( v6 < v5 )
  {
    ++v6;
    v7 = 171589117 * *v4 + 892332411;
    v8 = ((result[2] << 16) | (result[1] << 8) | *result | (result[3] << 24)) ^ v7;
    *v4 = v7;
    *(_DWORD *)result = v8;
    result += 4;
  }
  return result;
}

