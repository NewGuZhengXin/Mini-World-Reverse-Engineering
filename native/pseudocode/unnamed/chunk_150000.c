// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_150000

//======================================================================
// sub_150B22
// address: 0x00150B22   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_150B22(
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
        unsigned int a42,
        int a43,
        int a44,
        int a45,
        int a46,
        int a47,
        int a48,
        int a49,
        int a50)
{
  int v50; // r5
  unsigned int v51; // r0
  int v52; // r6
  int v53; // r7
  int v54; // r3
  int v55; // r1
  int v57; // [sp+B8h] [bp+B8h]

  if ( a49 >= *(_DWORD *)(a18 + 20) )
    sub_1513B0();
  v51 = 0;
  if ( a42 > 0x8000 )
    v51 = a42 - 0x8000;
  v52 = *(_DWORD *)(v50 + 20);
  v53 = *(_DWORD *)(v50 + 8);
  v54 = v52 - v53 - 1;
  v57 = HIWORD(v51) + 1;
  if ( v57 > v54 )
    v57 = v52 - v53 - 1;
  return sub_150B72(
           (float)(unsigned __int16)v51 * 0.000015259,
           v55,
           a42,
           v54,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           (float)(unsigned __int16)v51 * 0.000015259,
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
           v57);
}


//======================================================================
// sub_150B72
// address: 0x00150B72   size: 0x814 (2068 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00150B72  LDR     R1, [SP,#arg_34]
//   00150B74  LDR     R4, [SP,#arg_C0]
//   00150B76  STR     R6, [SP,#arg_98]; int
//   00150B78  STR     R7, [SP,#arg_98+4]; int
//   00150B7A  LDR     R1, [R1,#0x10]; int
//   00150B7C  CMP     R4, R1
//   00150B7E  BLT     loc_150B84
//   00150B80  BL      sub_151386
//   00150B84  LDR     R4, [SP,#arg_98+4]
//   00150B86  MOVS    R7, #0x80
//   00150B88  MOVS    R0, #0
//   00150B8A  LSLS    R7, R7, #8
//   00150B8C  CMP     R4, R7
//   00150B8E  BLS     loc_150B94
//   00150B90  LDR     R1, =0xFFFF8000
//   00150B92  ADDS    R0, R4, R1
//   00150B94  LDR     R7, [R5,#0x10]
//   00150B96  LDR     R1, [R5,#4]
//   00150B98  LSRS    R6, R0, #0x10
//   00150B9A  STR     R6, [SP,#arg_CC]; int
//   00150B9C  SUBS    R3, R7, R1
//   00150B9E  ADDS    R6, #1
//   00150BA0  SUBS    R3, #1
//   00150BA2  STR     R6, [SP,#arg_BC]
//   00150BA4  CMP     R6, R3
//   00150BA6  BLE     loc_150BAA
//   00150BA8  STR     R3, [SP,#arg_BC]; int
//   00150BAA  LSLS    R0, R0, #0x10
//   00150BAC  LSRS    R0, R0, #0x10
//   00150BAE  BL      j___aeabi_ui2f
//   00150BB2  MOVS    R1, #0x37800000
//   00150BB6  BL      j___aeabi_fmul
//   00150BBA  LDR     R6, [SP,#arg_34]
//   00150BBC  LDR     R7, =0xFFFF8000
//   00150BBE  STR     R0, [SP,#arg_74]; int
//   00150BC0  LDR     R6, [R6]
//   00150BC2  MOVS    R0, #0x80
//   00150BC4  ADDS    R2, R4, R7
//   00150BC6  STR     R6, [SP,#arg_C4]; int
//   00150BC8  MOVS    R3, #0
//   00150BCA  LSLS    R0, R0, #8
//   00150BCC  CMP     R4, R0
//   00150BCE  BLS     loc_150BD2
//   00150BD0  MOVS    R3, R2
//   00150BD2  LSRS    R4, R3, #0x10
//   00150BD4  LSLS    R3, R3, #0x10
//   00150BD6  STR     R4, [SP,#arg_24]; int
//   00150BD8  LSRS    R3, R3, #0x10
//   00150BDA  ADDS    R4, #1
//   00150BDC  STR     R4, [SP,#arg_D8]; int
//   00150BDE  STR     R3, [SP,#arg_D0]; int
//   00150BE0  LDR     R6, [SP,#arg_34]
//   00150BE2  LDR     R7, [SP,#arg_C4]
//   00150BE4  LDR     R6, [R6,#0xC]
//   00150BE6  CMP     R7, R6
//   00150BE8  BLT     loc_150BEC
//   00150BEA  B       loc_151360
//   00150BEC  LDR     R6, [R5,#0xC]
//   00150BEE  LDR     R7, [R5]
//   00150BF0  LDR     R4, [SP,#arg_D8]
//   00150BF2  SUBS    R3, R6, R7
//   00150BF4  SUBS    R3, #1
//   00150BF6  STR     R4, [SP,#arg_28]
//   00150BF8  CMP     R4, R3
//   00150BFA  BLE     loc_150BFE
//   00150BFC  STR     R3, [SP,#arg_28]
//   00150BFE  LDR     R0, [SP,#arg_D0]
//   00150C00  BL      j___aeabi_ui2f
//   00150C04  MOVS    R1, #0x37800000
//   00150C08  BL      j___aeabi_fmul
//   00150C0C  ADD     R6, SP, #arg_F0
//   00150C0E  STR     R0, [SP,#arg_30]
//   00150C10  MOVS    R1, #0; int
//   00150C12  MOVS    R0, R6; void *
//   00150C14  MOVS    R2, #0x10; size_t
//   00150C16  STR     R6, [SP,#arg_58]
//   00150C18  BL      j_memset
//   00150C1C  LDR     R7, [R5,#0x24]
//   00150C1E  LDR     R4, [R5,#0x20]
//   00150C20  LDR     R6, [SP,#arg_2C]
//   00150C22  MOVS    R0, #0xFE
//   00150C24  STR     R7, [SP,#arg_3C]
//   00150C26  STR     R4, [SP,#arg_38]
//   00150C28  LSLS    R0, R0, #0x16
//   00150C2A  LDR     R1, [SP,#arg_30]
//   00150C2C  CMP     R6, #3
//   00150C2E  BEQ     loc_150C40
//   00150C30  LDR     R7, [SP,#arg_D4]
//   00150C32  CMP     R7, #3
//   00150C34  BEQ     loc_150C38
//   00150C36  B       loc_150F7C
//   00150C38  B       loc_150C40
//   00150C3A  ALIGN 4
//   00150C3C  DCD 0xFFFF8000
//   00150C40  BL      j___aeabi_fsub
//   00150C44  MOVS    R6, R0
//   00150C46  MOVS    R0, #0xFE
//   00150C48  LDR     R1, [SP,#arg_74]
//   00150C4A  LSLS    R0, R0, #0x16
//   00150C4C  BL      j___aeabi_fsub
//   00150C50  STR     R0, [SP,#arg_48]
//   00150C52  LDR     R1, [SP,#arg_48]
//   00150C54  MOVS    R0, R6
//   00150C56  BL      j___aeabi_fmul
//   00150C5A  STR     R0, [SP,#arg_64]
//   00150C5C  MOVS    R0, #0xFE
//   00150C5E  LDR     R1, [SP,#arg_20]
//   00150C60  LSLS    R0, R0, #0x16
//   00150C62  BL      j___aeabi_fsub
//   00150C66  MOVS    R4, R0
//   00150C68  MOVS    R1, R4
//   00150C6A  LDR     R0, [SP,#arg_64]
//   00150C6C  BL      j___aeabi_fmul
//   00150C70  LDR     R1, [SP,#arg_C8]
//   00150C72  STR     R0, [SP,#arg_58]
//   00150C74  LDR     R0, [SP,#arg_3C]
//   00150C76  MOVS    R7, R0
//   00150C78  MULS    R7, R1
//   00150C7A  LDR     R0, [SP,#arg_38]
//   00150C7C  LDR     R1, [SP,#arg_CC]
//   00150C7E  STR     R7, [SP,#arg_50]
//   00150C80  LDR     R2, [SP,#arg_50]
//   00150C82  MOVS    R7, R0
//   00150C84  MULS    R7, R1
//   00150C86  LDR     R0, [SP,#arg_24]
//   00150C88  LDR     R1, [SP,#arg_2C]
//   00150C8A  STR     R7, [SP,#arg_40]
//   00150C8C  ADDS    R7, R7, R2
//   00150C8E  ADDS    R3, R7, R0
//   00150C90  MULS    R3, R1
//   00150C92  LDR     R0, [SP,#arg_30]
//   00150C94  LSLS    R3, R3, #2
//   00150C96  LDR     R1, [SP,#arg_48]
//   00150C98  STR     R3, [SP,#arg_54]
//   00150C9A  BL      j___aeabi_fmul
//   00150C9E  MOVS    R1, R4
//   00150CA0  STR     R0, [SP,#arg_68]
//   00150CA2  BL      j___aeabi_fmul
//   00150CA6  LDR     R2, [SP,#arg_28]
//   00150CA8  LDR     R3, [SP,#arg_2C]
//   00150CAA  LDR     R1, [SP,#arg_74]
//   00150CAC  ADDS    R7, R7, R2
//   00150CAE  MULS    R7, R3
//   00150CB0  STR     R0, [SP,#arg_48]
//   00150CB2  LSLS    R7, R7, #2
//   00150CB4  MOVS    R0, R6
//   00150CB6  STR     R7, [SP,#arg_5C]
//   00150CB8  BL      j___aeabi_fmul
//   00150CBC  MOVS    R1, R4
//   00150CBE  MOVS    R6, R0
//   00150CC0  BL      j___aeabi_fmul
//   00150CC4  LDR     R1, [SP,#arg_BC]
//   00150CC6  STR     R0, [SP,#arg_4C]
//   00150CC8  LDR     R0, [SP,#arg_38]
//   00150CCA  LDR     R2, [SP,#arg_50]
//   00150CCC  MOVS    R7, R0
//   00150CCE  MULS    R7, R1
//   00150CD0  LDR     R0, [SP,#arg_24]
//   00150CD2  LDR     R1, [SP,#arg_2C]
//   00150CD4  STR     R7, [SP,#arg_44]
//   00150CD6  ADDS    R7, R7, R2
//   00150CD8  ADDS    R3, R7, R0
//   00150CDA  MULS    R3, R1
//   00150CDC  LDR     R0, [SP,#arg_30]
//   00150CDE  LSLS    R3, R3, #2
//   00150CE0  LDR     R1, [SP,#arg_74]
//   00150CE2  STR     R3, [SP,#arg_60]
//   00150CE4  BL      j___aeabi_fmul
//   00150CE8  MOVS    R1, R4
//   00150CEA  STR     R0, [SP,#arg_80]
//   00150CEC  BL      j___aeabi_fmul
//   00150CF0  LDR     R4, [SP,#arg_28]
//   00150CF2  LDR     R1, [SP,#arg_20]
//   00150CF4  STR     R0, [SP,#arg_30]
//   00150CF6  ADDS    R7, R7, R4
//   00150CF8  LDR     R4, [SP,#arg_2C]
//   00150CFA  LDR     R0, [SP,#arg_64]
//   00150CFC  MULS    R7, R4
//   00150CFE  LSLS    R7, R7, #2
//   00150D00  STR     R7, [SP,#arg_78]
//   00150D02  BL      j___aeabi_fmul
//   00150D06  LDR     R7, [SP,#arg_3C]
//   00150D08  STR     R0, [SP,#arg_50]
//   00150D0A  LDR     R0, [SP,#arg_B8]
//   00150D0C  LDR     R1, [SP,#arg_40]
//   00150D0E  LDR     R2, [SP,#arg_24]
//   00150D10  MOVS    R4, R7
//   00150D12  MULS    R4, R0
//   00150D14  LDR     R0, [SP,#arg_2C]
//   00150D16  ADDS    R7, R1, R4
//   00150D18  ADDS    R3, R7, R2
//   00150D1A  MULS    R3, R0
//   00150D1C  LDR     R1, [SP,#arg_20]
//   00150D1E  LSLS    R3, R3, #2
//   00150D20  LDR     R0, [SP,#arg_68]
//   00150D22  STR     R3, [SP,#arg_40]
//   00150D24  BL      j___aeabi_fmul
//   00150D28  LDR     R1, [SP,#arg_28]
//   00150D2A  LDR     R2, [SP,#arg_2C]
//   00150D2C  STR     R0, [SP,#arg_38]

//======================================================================
// sub_151386
// address: 0x00151386   size: 0x2A (42 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00151386  LDR     R0, [SP,#arg_34]; this
//   00151388  BL      _ZNK4Ogre8PixelBox12getSliceSkipEv; Ogre::PixelBox::getSliceSkip(void)
//   0015138C  LDR     R6, [SP,#arg_B4]
//   0015138E  LDR     R7, [SP,#arg_6C]
//   00151390  LDR     R4, [SP,#arg_B0]
//   00151392  MULS    R0, R6
//   00151394  ADDS    R7, R7, R0
//   00151396  STR     R7, [SP,#arg_6C]
//   00151398  ADDS    R4, #1
//   0015139A  LDR     R6, [SP,#arg_90]
//   0015139C  LDR     R7, [SP,#arg_90+4]
//   0015139E  LDR     R0, [SP,#arg_A8]
//   001513A0  LDR     R1, [SP,#arg_A8+4]
//   001513A2  ADDS    R6, R6, R0
//   001513A4  ADCS    R7, R1
//   001513A6  STR     R4, [SP,#arg_B0]
//   001513A8  STR     R6, [SP,#arg_90]
//   001513AA  STR     R7, [SP,#arg_90+4]
//   001513AC  BL      sub_150B22

//======================================================================
// sub_1513B0
// address: 0x001513B0   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1513B0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_152EFC
// address: 0x00152EFC   size: 0xFC (252 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_152EFC(
        Ogre::LinearResampler_Float32 *a1,
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
        int a46)
{
  int *v46; // r4
  int v47; // r7
  int v48; // r2
  const Ogre::PixelBox *v49; // r1
  const Ogre::PixelBox *v50; // r6
  const Ogre::PixelBox *v51; // r1
  const Ogre::PixelBox *v52; // r6
  int v53; // r1
  const Ogre::PixelBox *v54; // r6
  int v55; // r0
  const Ogre::PixelBox *v56; // r2
  int v57; // r6
  const Ogre::PixelBox *v58; // r1
  int v59; // r2
  const Ogre::PixelBox *v60; // r0
  int v61; // r1
  int v62; // r2
  int v63; // r6
  size_t ConsecutiveSize; // r6
  int v65; // r1
  const Ogre::PixelBox *v66; // r2
  Ogre::MemoryDataStream *v67; // [sp-60h] [bp-60h]
  const Ogre::PixelBox *v68[6]; // [sp-2Ch] [bp-2Ch] BYREF
  int v69; // [sp-14h] [bp-14h]
  int v70; // [sp-10h] [bp-10h]
  const Ogre::PixelBox *v71; // [sp-Ch] [bp-Ch]
  int v72; // [sp-8h] [bp-8h]

  v48 = a4 - 1;
  if ( (unsigned int)(a4 - 1) <= 0x1B )
  {
    v48 = ((_DWORD)&dword_0 + 1) << v48;
    if ( (v48 & 0xE003E15) != 0 )
    {
      if ( a4 == *(_DWORD *)(v47 + 28) )
      {
        v49 = *(const Ogre::PixelBox **)(v47 + 4);
        v50 = *(const Ogre::PixelBox **)(v47 + 8);
        v68[0] = *(const Ogre::PixelBox **)v47;
        v68[1] = v49;
        v68[2] = v50;
        v51 = *(const Ogre::PixelBox **)(v47 + 16);
        v52 = *(const Ogre::PixelBox **)(v47 + 20);
        v68[3] = *(const Ogre::PixelBox **)(v47 + 12);
        v68[4] = v51;
        v68[5] = v52;
        v53 = *(_DWORD *)(v47 + 28);
        v54 = *(const Ogre::PixelBox **)(v47 + 32);
        v69 = *(_DWORD *)(v47 + 24);
        v70 = v53;
        v71 = v54;
        v72 = *(_DWORD *)(v47 + 36);
        v67 = nullptr;
      }
      else
      {
        v55 = *(_DWORD *)(v47 + 12);
        v56 = *(const Ogre::PixelBox **)v47;
        v57 = *(_DWORD *)(v47 + 16);
        v70 = a4;
        v58 = (const Ogre::PixelBox *)(v55 - (_DWORD)v56);
        v59 = *(_DWORD *)(v47 + 4);
        v68[3] = v58;
        v71 = v58;
        v60 = (const Ogre::PixelBox *)(v57 - v59);
        v61 = (_DWORD)v58 * (v57 - v59);
        v62 = *(_DWORD *)(v47 + 8);
        v63 = *(_DWORD *)(v47 + 20);
        v68[4] = v60;
        memset(v68, 0, 12);
        v69 = 0;
        v72 = v61;
        v68[5] = (const Ogre::PixelBox *)(v63 - v62);
        ConsecutiveSize = Ogre::PixelBox::getConsecutiveSize((Ogre::PixelBox *)v68);
        v67 = (Ogre::MemoryDataStream *)operator new(0x1Cu);
        Ogre::MemoryDataStream::MemoryDataStream(v67, ConsecutiveSize);
        v69 = *((_DWORD *)v67 + 3);
      }
      switch ( Ogre::PixelUtil::getNumElemBytes(v46[7]) )
      {
        case 1:
          v65 = (unsigned __int64)Ogre::LinearResampler_Byte<1u>::scale((Ogre::LinearResampler *)v46, v68, v66) >> 32;
          break;
        case 2:
          v65 = (unsigned __int64)Ogre::LinearResampler_Byte<2u>::scale((Ogre::LinearResampler *)v46, v68, v66) >> 32;
          break;
        case 3:
          v65 = (unsigned __int64)Ogre::LinearResampler_Byte<3u>::scale((Ogre::LinearResampler *)v46, v68, v66) >> 32;
          break;
        case 4:
          v65 = (unsigned __int64)Ogre::LinearResampler_Byte<4u>::scale((Ogre::LinearResampler *)v46, v68, v66) >> 32;
          break;
        default:
          break;
      }
      if ( v69 != *(_DWORD *)(v47 + 24) )
        Ogre::PixelUtil::bulkPixelConversion((Ogre::PixelUtil *)v68, (const Ogre::PixelBox *)v47, v66);
      if ( v67 != nullptr )
        (*(void (__fastcall **)(Ogre::MemoryDataStream *, int))(*(_DWORD *)v67 + 4))(v67, v65);
LABEL_20:
      __asm { POP     {R4-R7,PC} }
    }
    if ( (v48 & 0x1800000) != 0 && (unsigned int)(*(_DWORD *)(v47 + 28) - 24) <= 1 )
    {
      Ogre::LinearResampler_Float32::scale(a1, (const Ogre::PixelBox *)v47, (const Ogre::PixelBox *)v48);
      goto LABEL_20;
    }
  }
  Ogre::LinearResampler::scale((Ogre::LinearResampler *)v46, (const Ogre::PixelBox *)v47, (const Ogre::PixelBox *)v48);
  goto LABEL_20;
}


//======================================================================
// sub_1533B0
// address: 0x001533B0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1533B0(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_1533BA
// address: 0x001533BA   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_1533BA(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_156446
// address: 0x00156446   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_156446(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_156450
// address: 0x00156450   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_156450(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_15645A
// address: 0x0015645A   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_15645A(int *a1)
{
  int v1; // r5

  v1 = *a1;
  sub_392254(a1);
  operator delete(a1);
  return v1;
}


//======================================================================
// sub_15646E
// address: 0x0015646E   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_15646E(int a1, _DWORD *a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)operator new(0x14u);
  if ( v4 != (_DWORD *)-8 )
  {
    v4[2] = *a2;
    v4[3] = a2[1];
    v4[4] = a2[2];
  }
  return sub_392244(v4, a1);
}


//======================================================================
// sub_158A14
// address: 0x00158A14   size: 0x8C (140 bytes)
//======================================================================
void __fastcall sub_158A14(Ogre::Archive *this, int *a2, int a3)
{
  _DWORD *v5; // r1
  int v6; // r0
  unsigned int v7; // r2
  unsigned int i; // r6
  int v9; // r7
  Ogre::TileModel *v10; // [sp+0h] [bp-14h]
  unsigned int v12; // [sp+8h] [bp-Ch] BYREF
  void *v13; // [sp+Ch] [bp-8h] BYREF

  if ( *((_DWORD *)this + 2) == 1 )
  {
    Ogre::Archive::serialize(this, &v12, 4u);
    v5 = (_DWORD *)a2[1];
    v6 = *a2;
    v13 = nullptr;
    v7 = ((int)v5 - v6) >> 2;
    if ( v12 <= v7 )
    {
      if ( v12 < v7 )
        a2[1] = v6 + 4 * v12;
    }
    else
    {
      std::vector<Ogre::TileModel *>::_M_fill_insert((int)a2, v5, v12 - v7, &v13);
    }
  }
  else
  {
    v12 = (a2[1] - *a2) >> 2;
    Ogre::Archive::serialize(this, &v12, 4u);
  }
  for ( i = 0; i < v12; ++i )
  {
    v9 = 4 * i;
    if ( *((_DWORD *)this + 2) == 1 )
    {
      v10 = (Ogre::TileModel *)operator new(0x60u);
      Ogre::TileModel::TileModel(v10);
      *(_DWORD *)(*a2 + 4 * i) = v10;
    }
    Ogre::TileModel::serialize(*(Ogre::TileModel **)(*a2 + v9), this, a3);
  }
}


//======================================================================
// sub_15BD5E
// address: 0x0015BD5E   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_15BD5E(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_15C01C
// address: 0x0015C01C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_15C01C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_15C026
// address: 0x0015C026   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_15C026(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}

