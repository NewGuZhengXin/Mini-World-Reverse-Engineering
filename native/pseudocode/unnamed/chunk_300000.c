// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_300000

//======================================================================
// sub_303EE0
// address: 0x00303EE0   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_303EE0(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_304354
// address: 0x00304354   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_304354(int result, int a2, int a3)
{
  int i; // r3

  for ( i = 0; i < a3; ++i )
    *(_BYTE *)(result + i) ^= *(_BYTE *)(a2 + i);
  return result;
}


//======================================================================
// sub_30436A
// address: 0x0030436A   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_30436A(int result, int a2, int a3)
{
  int i; // r3

  for ( i = 0; i < a3; ++i )
    *(_BYTE *)(result + i) = ((int)*(unsigned __int8 *)(a2 + (i >> 3)) >> (i & 7)) & 1;
  return result;
}


//======================================================================
// sub_30438C
// address: 0x0030438C   size: 0x26 (38 bytes)
//======================================================================
void *__fastcall sub_30438C(void *a1, int a2, int a3, signed int a4)
{
  signed int i; // r4

  for ( i = 0; i < a4; ++i )
    byte_5176B1[i] = *(_BYTE *)(a2 + *(unsigned __int8 *)(a3 + i) - 1);
  return j_memcpy(a1, byte_5176B1, a4);
}


//======================================================================
// sub_3043BC
// address: 0x003043BC   size: 0x2E (46 bytes)
//======================================================================
void *__fastcall sub_3043BC(char *a1, size_t a2)
{
  size_t v4; // r7

  v4 = 28 - a2;
  j_memcpy(byte_5176B1, a1, a2);
  j_memcpy(a1, &a1[a2], 28 - a2);
  return j_memcpy(&a1[v4], byte_5176B1, a2);
}


//======================================================================
// sub_3043F0
// address: 0x003043F0   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall sub_3043F0(int a1, int a2)
{
  int i; // r4
  size_t v3; // r6
  int v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch]

  LODWORD(v6) = a1;
  HIDWORD(v6) = a1;
  sub_30436A((int)byte_5177B1, a2, 64);
  sub_30438C(byte_5177B1, (int)byte_5177B1, (int)&unk_447229, 56);
  for ( i = 0; i != 16; ++i )
  {
    v3 = byte_447261[i];
    sub_3043BC(byte_5177B1, v3);
    sub_3043BC(byte_5177CD, v3);
    v4 = 48 * i;
    sub_30438C((void *)(HIDWORD(v6) + v4), (int)byte_5177B1, (int)&unk_447271, 48);
  }
  return v6;
}


//======================================================================
// sub_30445C
// address: 0x0030445C   size: 0x80 (128 bytes)
//======================================================================
void *__fastcall sub_30445C(void *a1, int a2)
{
  _BYTE *v3; // r4
  int v5; // r6
  int v6; // r1
  int v7; // r0
  int v8; // r3
  char v9; // r12
  char v10; // r2

  v3 = &unk_5177F1;
  sub_30438C(&unk_5177F1, (int)a1, (int)&unk_4472A1, 48);
  sub_304354((int)&unk_5177F1, a2, 48);
  v5 = 0;
  do
  {
    v6 = 4 * v5;
    v7 = (int)a1 + 4 * v5++;
    v8 = (unsigned __int8)(8 * v3[1] + 4 * v3[2] + v3[4] + 2 * v3[3]);
    v9 = 2 * *v3;
    v10 = v3[5];
    v3 += 6;
    sub_30436A(v7, (int)&unk_4472D1 + 16 * v6 + 16 * (unsigned __int8)(v10 + v9) + v8, 4);
  }
  while ( v5 != 8 );
  return sub_30438C(a1, (int)a1, (int)&unk_4474D1, 32);
}


//======================================================================
// sub_3044EC
// address: 0x003044EC   size: 0xFA (250 bytes)
//======================================================================
__int64 __fastcall sub_3044EC(char *a1, int a2, int a3, int a4)
{
  int i; // r3
  int v7; // r7
  char *v9; // r2
  int v10; // r1
  __int64 v12; // [sp+0h] [bp-Ch]

  HIDWORD(v12) = a3;
  sub_30436A((int)byte_517821, a2, 64);
  sub_30438C(byte_517821, (int)byte_517821, (int)&unk_4474F1, 64);
  if ( a4 != 0 )
  {
    v7 = 15;
    LODWORD(v12) = &unk_517861;
    do
    {
      j_memcpy(&unk_517861, byte_517821, 0x20u);
      sub_30445C(byte_517821, HIDWORD(v12) + 48 * v7);
      sub_304354((int)byte_517821, (int)&unk_517841, 32);
      j_memcpy(&unk_517841, &unk_517861, 0x20u);
    }
    while ( v7-- != 0 );
  }
  else
  {
    LODWORD(v12) = &unk_517861;
    do
    {
      j_memcpy(&unk_517861, &unk_517841, 0x20u);
      sub_30445C(&unk_517841, HIDWORD(v12) + a4);
      sub_304354((int)&unk_517841, (int)byte_517821, 32);
      j_memcpy(byte_517821, &unk_517861, 0x20u);
      a4 += 48;
    }
    while ( a4 != 768 );
  }
  sub_30438C(byte_517821, (int)byte_517821, (int)&unk_447531, 64);
  j_memset(a1, 0, 8u);
  for ( i = 0; i != 64; ++i )
  {
    v9 = &a1[i >> 3];
    v10 = byte_517821[i] << (i & 7);
    *v9 |= v10;
  }
  return v12;
}


//======================================================================
// sub_304AA4
// address: 0x00304AA4   size: 0x2A (42 bytes)
//======================================================================
void __fastcall sub_304AA4(_DWORD *p)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  v2 = (void *)p[2];
  if ( v2 != nullptr )
    j_free(v2);
  v3 = (void *)p[3];
  if ( v3 != nullptr )
    j_free(v3);
  v4 = (void *)p[4];
  if ( v4 != nullptr )
    j_free(v4);
  j_free(p);
}


//======================================================================
// sub_304AD0
// address: 0x00304AD0   size: 0x14 (20 bytes)
//======================================================================
int sub_304AD0()
{
  return Ogre::FileManager::isStdioFileExist(
           (Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton,
           "data/uin.db");
}


//======================================================================
// sub_304AEC
// address: 0x00304AEC   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_304AEC(int a1)
{
  char s[32]; // [sp+4h] [bp-28h] BYREF

  j_snprintf(s, 0x20u, "data/ow_%d.db", a1);
  return Ogre::FileManager::isStdioFileExist((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, s);
}


//======================================================================
// sub_304B34
// address: 0x00304B34   size: 0x6A (106 bytes)
//======================================================================
char *__fastcall sub_304B34(int a1)
{
  char s[32]; // [sp+4h] [bp-28h] BYREF

  j_snprintf(s, 0x20u, "data/ow_%d.db", a1);
  Ogre::FileManager::deleteStdioFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, s);
  j_snprintf(s, 0x20u, "data/ow_%d.db-shm", a1);
  Ogre::FileManager::deleteStdioFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, s);
  j_snprintf(s, 0x20u, "data/ow_%d.db-wal", a1);
  return Ogre::FileManager::deleteStdioFile((Ogre::FileManager *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton, s);
}


//======================================================================
// sub_304BB4
// address: 0x00304BB4   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_304BB4(int a1)
{
  unsigned int v1; // r3
  const char *v2; // r1
  char s[4104]; // [sp+4h] [bp-1008h] BYREF

  j_snprintf(s, 0x1000u, "cs_msg_send err:%d", *(_DWORD *)(*(_DWORD *)(a1 + 580) + 8));
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/cs/CSMgr.cpp", (const char *)&stru_298.st_value, 2, v1);
  return Ogre::LogMessage((Ogre *)s, v2);
}


//======================================================================
// sub_304C24
// address: 0x00304C24   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_304C24(int a1, int a2)
{
  char s[32]; // [sp+4h] [bp-24h] BYREF

  if ( *(_BYTE *)(g_CSMgr + 652) != 0 )
    j_snprintf(s, 0x20u, "%s", g_CSMgr + 652);
  else
    j_snprintf(s, 0x20u, "data/ow_%d.db", a2);
  return Ogre::FileManager::gamePath2StdioPath((int *)Ogre::Singleton<Ogre::FileManager>::ms_Singleton);
}


//======================================================================
// sub_30E532
// address: 0x0030E532   size: 0x26E (622 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0030E532  LDR     R3, [R6,#0xC]
//   0030E534  CMP     R3, #0
//   0030E536  BGT     loc_30E58C
//   0030E538  LDR     R4, [SP,#arg_88]
//   0030E53A  SUBS    R4, #1
//   0030E53C  STR     R4, [SP,#arg_88]; int
//   0030E53E  CMP     R4, #0
//   0030E540  BNE     loc_30E546
//   0030E542  BL      sub_30F19C
//   0030E546  MOVS    R3, R6
//   0030E548  SUBS    R3, #0x5C ; '\'
//   0030E54A  LDR     R5, [R3]
//   0030E54C  LDR     R0, [R5,#0x10]
//   0030E54E  STR     R5, [SP,#arg_78]; int
//   0030E550  CMP     R0, #0
//   0030E552  BNE     loc_30E562
//   0030E554  LDR     R2, [R3,#0xC]
//   0030E556  LDR     R4, [R3,#0x28]
//   0030E558  SUBS    R2, #1
//   0030E55A  STR     R2, [R3,#0xC]
//   0030E55C  LDR     R1, [R5,#0x1C]
//   0030E55E  ADDS    R2, R4, R1
//   0030E560  B       loc_30E586
//   0030E562  LDR     R2, [R3,#0x10]
//   0030E564  LDR     R5, [SP,#arg_78]
//   0030E566  ADDS    R2, #1
//   0030E568  STR     R2, [R3,#0x10]
//   0030E56A  LDR     R5, [R5,#0x2C]
//   0030E56C  CMP     R2, R5
//   0030E56E  BGE     loc_30E574
//   0030E570  BL      sub_30F228
//   0030E574  MOVS    R2, #0
//   0030E576  STR     R2, [R3,#0x10]
//   0030E578  LDR     R2, [R3,#0xC]
//   0030E57A  LDR     R0, [SP,#arg_78]
//   0030E57C  LDR     R1, [R3,#0x28]
//   0030E57E  SUBS    R2, #1
//   0030E580  STR     R2, [R3,#0xC]
//   0030E582  LDR     R0, [R0,#0x1C]
//   0030E584  ADDS    R2, R1, R0
//   0030E586  STR     R2, [R3,#0x28]
//   0030E588  BL      sub_30F228
//   0030E58C  LDR     R2, [R6,#0x10]
//   0030E58E  MOVS    R7, #0xD0
//   0030E590  MOVS    R4, R7
//   0030E592  MOV     R12, R2
//   0030E594  MOV     R7, R12
//   0030E596  MULS    R7, R4
//   0030E598  LDR     R5, [SP,#arg_78]
//   0030E59A  ADDS    R7, #0xC8
//   0030E59C  ADDS    R7, R5, R7
//   0030E59E  ADDS    R2, R7, #2
//   0030E5A0  LDRH    R0, [R2,#0x3E]
//   0030E5A2  MOVS    R2, #6
//   0030E5A4  TST     R0, R2
//   0030E5A6  BEQ     loc_30E5CA
//   0030E5A8  LDR     R0, [R5,#0x10]
//   0030E5AA  CMP     R0, #0
//   0030E5AC  BNE     loc_30E5B8
//   0030E5AE  SUBS    R3, #1
//   0030E5B0  STR     R3, [R6,#0xC]
//   0030E5B2  LDR     R1, [R5,#0x1C]
//   0030E5B4  BL      sub_30F15A
//   0030E5B8  MOV     R1, R12
//   0030E5BA  LDR     R4, [SP,#arg_78]
//   0030E5BC  ADDS    R1, #1; int
//   0030E5BE  STR     R1, [R6,#0x10]
//   0030E5C0  LDR     R4, [R4,#0x2C]
//   0030E5C2  CMP     R1, R4
//   0030E5C4  BLT     sub_30E532
//   0030E5C6  BL      sub_30F172
//   0030E5CA  LDR     R4, [R7,#0x58]
//   0030E5CC  LDR     R0, [R7,#0x20]
//   0030E5CE  CMP     R4, #0
//   0030E5D0  BLE     loc_30E5F2
//   0030E5D2  LDR     R1, [R6,#0x28]
//   0030E5D4  LDR     R5, [R7,#0x5C]
//   0030E5D6  ADDS    R2, R1, R5
//   0030E5D8  CMP     R4, #4
//   0030E5DA  BEQ     loc_30E5E8
//   0030E5DC  CMP     R4, #8
//   0030E5DE  BEQ     loc_30E5E8
//   0030E5E0  CMP     R4, #2
//   0030E5E2  BNE     loc_30E5EC
//   0030E5E4  LDRH    R2, [R2]
//   0030E5E6  B       loc_30E5EE
//   0030E5E8  LDR     R2, [R2]
//   0030E5EA  B       loc_30E5EE
//   0030E5EC  LDRB    R2, [R2]
//   0030E5EE  STR     R2, [SP,#arg_6C]
//   0030E5F0  B       loc_30E5F4
//   0030E5F2  STR     R0, [SP,#arg_6C]; int
//   0030E5F4  CMP     R0, #0
//   0030E5F6  BLE     loc_30E602
//   0030E5F8  LDR     R4, [SP,#arg_6C]
//   0030E5FA  CMP     R0, R4
//   0030E5FC  BGE     loc_30E602
//   0030E5FE  BL      sub_30F188
//   0030E602  LDR     R5, [SP,#arg_6C]
//   0030E604  CMP     R5, #0
//   0030E606  BGE     loc_30E60C
//   0030E608  BL      sub_30F18C
//   0030E60C  BNE     loc_30E63C
//   0030E60E  LDR     R0, [SP,#arg_78]
//   0030E610  LDR     R0, [R0,#0x10]
//   0030E612  CMP     R0, #0
//   0030E614  BNE     loc_30E61A
//   0030E616  BL      sub_30F152
//   0030E61A  MOV     R1, R12
//   0030E61C  LDR     R4, [SP,#arg_78]
//   0030E61E  ADDS    R1, #1; int
//   0030E620  STR     R1, [R6,#0x10]
//   0030E622  LDR     R4, [R4,#0x2C]
//   0030E624  CMP     R1, R4
//   0030E626  BLT     sub_30E532
//   0030E628  LDR     R5, [SP,#arg_6C]
//   0030E62A  LDR     R0, [SP,#arg_78]
//   0030E62C  SUBS    R3, #1
//   0030E62E  STR     R3, [R6,#0xC]
//   0030E630  STR     R5, [R6,#0x10]
//   0030E632  LDR     R0, [R0,#0x1C]
//   0030E634  LDR     R1, [R6,#0x28]
//   0030E636  ADDS    R3, R1, R0
//   0030E638  BL      sub_30F182
//   0030E63C  LDR     R3, [R6,#0x28]
//   0030E63E  LDR     R4, [R7,#0x28]
//   0030E640  LDR     R5, [R7,#4]
//   0030E642  ADDS    R4, R3, R4
//   0030E644  STR     R4, [SP,#arg_68]; int
//   0030E646  LDR     R4, [SP,#arg_8C]
//   0030E648  CMP     R5, R4
//   0030E64A  BLE     loc_30E6D2
//   0030E64C  MOVS    R3, R7
//   0030E64E  ADDS    R3, #0xC4
//   0030E650  LDR     R1, [R3]
//   0030E652  ADDS    R5, R1, #1
//   0030E654  BNE     loc_30E674
//   0030E656  LDR     R2, [R7,#0x1C]
//   0030E658  CMP     R2, #0
//   0030E65A  BGT     loc_30E65E
//   0030E65C  LDR     R2, [R7,#0x14]; size_t
//   0030E65E  LDR     R4, [SP,#arg_7C]
//   0030E660  LDR     R5, [SP,#arg_68]
//   0030E662  SUBS    R3, R4, R5
//   0030E664  CMP     R3, R2
//   0030E666  BLT     loc_30E6CA
//   0030E668  MOVS    R0, R5; void *
//   0030E66A  MOVS    R1, #0; int
//   0030E66C  BL      j_memset
//   0030E670  BL      sub_30F148
//   0030E674  LDR     R3, [R7,#8]
//   0030E676  SUBS    R3, #0x15
//   0030E678  CMP     R3, #1
//   0030E67A  BHI     loc_30E68A
//   0030E67C  LDR     R3, [R7,#0x1C]
//   0030E67E  CMP     R3, #0
//   0030E680  BGT     loc_30E68C
//   0030E682  LDR     R4, [SP,#arg_7C]
//   0030E684  LDR     R5, [SP,#arg_68]
//   0030E686  SUBS    R3, R4, R5
//   0030E688  B       loc_30E68C
//   0030E68A  LDR     R3, [R7,#0x14]
//   0030E68C  LDR     R4, [SP,#arg_7C]
//   0030E68E  LDR     R5, [SP,#arg_68]
//   0030E690  MOVS    R2, R7
//   0030E692  ADDS    R2, #0xB8
//   0030E694  LDR     R2, [R2]
//   0030E696  SUBS    R0, R4, R5
//   0030E698  CMP     R3, R0
//   0030E69A  BLE     loc_30E69E
//   0030E69C  MOVS    R3, R0
//   0030E69E  CMP     R3, R2
//   0030E6A0  BGE     loc_30E6A4
//   0030E6A2  B       loc_30E996
//   0030E6A4  LDR     R4, [SP,#arg_84]
//   0030E6A6  ADDS    R1, #0xA8
//   0030E6A8  ADDS    R1, R4, R1
//   0030E6AA  CMP     R2, #0x40 ; '@'
//   0030E6AC  BGT     loc_30E6C6
//   0030E6AE  MOVS    R3, #0
//   0030E6B0  ADDS    R7, #0xB8
//   0030E6B2  LDR     R0, [R7]
//   0030E6B4  CMP     R3, R0
//   0030E6B6  BLT     loc_30E6BC
//   0030E6B8  BL      sub_30F148
//   0030E6BC  LDRB    R2, [R1,R3]
//   0030E6BE  LDR     R5, [SP,#arg_68]
//   0030E6C0  STRB    R2, [R5,R3]
//   0030E6C2  ADDS    R3, #1
//   0030E6C4  B       loc_30E6B2
//   0030E6C6  LDR     R0, [SP,#arg_68]
//   0030E6C8  B       loc_30EA6A
//   0030E6CA  LDR     R4, =0x82010407
//   0030E6CC  STR     R4, [SP,#arg_74]
//   0030E6CE  BL      sub_30F148
//   0030E6D2  LDR     R2, [R7,#8]
//   0030E6D4  CMP     R2, #0
//   0030E6D6  BNE     loc_30E7BE
//   0030E6D8  LDR     R1, [R7,#0x6C]
//   0030E6DA  LDR     R2, [R7,#0x68]

//======================================================================
// sub_30E7A0
// address: 0x0030E7A0   size: 0x9A8 (2472 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0030E7A0  LDR     R5, [SP,#arg_80]
//   0030E7A2  MOVS    R3, #0xD0
//   0030E7A4  LDR     R4, [SP,#arg_8C]
//   0030E7A6  MULS    R3, R5
//   0030E7A8  ADDS    R2, R2, R3
//   0030E7AA  ADDS    R2, #0xCC; int
//   0030E7AC  LDR     R3, [R2]; int
//   0030E7AE  CMP     R3, R4
//   0030E7B0  BLE     loc_30E7C8
//   0030E7B2  ADDS    R5, #1
//   0030E7B4  BEQ     loc_30E7B8
//   0030E7B6  B       sub_30E532
//   0030E7B8  LDR     R5, =0x82010401
//   0030E7BA  BL      sub_30F194
//   0030E7BE  MOVS    R4, #1
//   0030E7C0  NEGS    R4, R4
//   0030E7C2  STR     R4, [SP,#arg_80]; int
//   0030E7C4  CMP     R2, #1
//   0030E7C6  BGT     loc_30E81C
//   0030E7C8  MOVS    R3, R7
//   0030E7CA  ADDS    R3, #0x42 ; 'B'
//   0030E7CC  LDRB    R3, [R3]
//   0030E7CE  LSLS    R5, R3, #0x1D
//   0030E7D0  BPL     loc_30E81C
//   0030E7D2  LDR     R4, [SP,#arg_88]
//   0030E7D4  CMP     R4, #0x1F
//   0030E7D6  BLE     loc_30E7DC
//   0030E7D8  BL      sub_30F198
//   0030E7DC  ADDS    R3, R7, #4
//   0030E7DE  LDR     R3, [R3,#0x7C]
//   0030E7E0  LDR     R5, [SP,#arg_84]
//   0030E7E2  ADDS    R4, #1
//   0030E7E4  ADDS    R3, #0xA8
//   0030E7E6  ADDS    R3, R5, R3
//   0030E7E8  STR     R3, [R6,#0x5C]
//   0030E7EA  STR     R4, [SP,#arg_88]; int
//   0030E7EC  STR     R3, [SP,#arg_78]; int
//   0030E7EE  LDR     R4, [SP,#arg_6C]
//   0030E7F0  MOVS    R3, #0
//   0030E7F2  LDR     R5, [SP,#arg_68]
//   0030E7F4  STR     R3, [R6,#0x6C]
//   0030E7F6  MOVS    R3, R6
//   0030E7F8  ADDS    R3, #8; int
//   0030E7FA  STR     R4, [R6,#0x68]
//   0030E7FC  STR     R4, [R6,#0x64]
//   0030E7FE  STR     R7, [R6,#0x60]
//   0030E800  STR     R5, [R3,#0x7C]
//   0030E802  ADDS    R6, #0x5C ; '\'
//   0030E804  B       sub_30E532
//   0030E806  ALIGN 4
//   0030E808  DCD 0xFFFFF384
//   0030E80C  DCD 0xC74
//   0030E810  DCD __stack_chk_guard_ptr - 0x30E4F8
//   0030E814  DCD 0x82010407
//   0030E818  DCD 0x82010401
//   0030E81C  ADD     R0, SP, #arg_B4
//   0030E81E  LDR     R1, [SP,#arg_88]
//   0030E820  BL      _Z31tdr_gen_entry_columnname_prefixP15tagTDRStackItemi; tdr_gen_entry_columnname_prefix(tagTDRStackItem *,int)
//   0030E824  STR     R0, [SP,#arg_94]
//   0030E826  LDR     R0, [R7,#0x20]
//   0030E828  CMP     R0, #1
//   0030E82A  BEQ     loc_30E836
//   0030E82C  LDR     R3, [R7,#8]
//   0030E82E  SUBS    R2, R3, #2
//   0030E830  CMP     R2, #2
//   0030E832  BLS     loc_30E836
//   0030E834  B       loc_30ED08
//   0030E836  LDR     R4, =0xC34
//   0030E838  LDR     R2, =(aSS_5 - 0x30E84A); "%s%s"
//   0030E83A  MOVS    R3, R7
//   0030E83C  ADDS    R3, #0x98
//   0030E83E  ADD     R4, SP
//   0030E840  STR     R3, [SP,#arg_0]
//   0030E842  MOVS    R0, R4; s
//   0030E844  MOVS    R1, #0x40 ; '@'; maxlen
//   0030E846  ADD     R2, PC; "%s%s"
//   0030E848  LDR     R3, [SP,#arg_94]
//   0030E84A  BL      j_snprintf
//   0030E84E  LDR     R0, [R7,#8]
//   0030E850  CMP     R0, #0x16; switch 23 cases
//   0030E852  BLS     loc_30E858
//   0030E854  BL      sub_30F148; jumptable 0030E858 default case
//   0030E858  BL      __gnu_thumb1_case_uhi; switch jump
//   0030E85C  DCW 0x17; jump table for switch statement
//   0030E85E  DCW 0x48
//   0030E860  DCW 0x77
//   0030E862  DCW 0xBC
//   0030E864  DCW 0xBC
//   0030E866  DCW 0x10A
//   0030E868  DCW 0x115
//   0030E86A  DCW 0x126
//   0030E86C  DCW 0x131
//   0030E86E  DCW 0x126
//   0030E870  DCW 0x131
//   0030E872  DCW 0x142
//   0030E874  DCW 0x155
//   0030E876  DCW 0x1AE
//   0030E878  DCW 0x1C2
//   0030E87A  DCW 0x191
//   0030E87C  DCW 0x476
//   0030E87E  DCW 0x168
//   0030E880  DCW 0x17E
//   0030E882  DCW 0x131
//   0030E884  DCW 0x115
//   0030E886  DCW 0x1D8
//   0030E888  DCW 0x20C
//   0030E88A  ADDS    R7, #4; jumptable 0030E858 case 0
//   0030E88C  LDR     R3, [R7,#0x7C]
//   0030E88E  LDR     R4, [SP,#arg_84]
//   0030E890  LDR     R1, =0xC34
//   0030E892  ADDS    R3, #0xA8
//   0030E894  ADDS    R7, R4, R3
//   0030E896  ADD     R4, SP, #arg_AC
//   0030E898  ADD     R1, SP; char *
//   0030E89A  MOVS    R0, R4; int
//   0030E89C  ADD     R2, SP, #arg_A0
//   0030E89E  BL      sub_3BF0BC
//   0030E8A2  LDR     R0, [SP,#arg_70]
//   0030E8A4  MOVS    R1, R4
//   0030E8A6  BL      _ZNK6Kompex15SQLiteStatement14GetColumnBytesERKSs; Kompex::SQLiteStatement::GetColumnBytes(std::string const&)
//   0030E8AA  STR     R0, [SP,#arg_A8]
//   0030E8AC  MOVS    R0, R4
//   0030E8AE  BL      sub_3BDF80
//   0030E8B2  LDR     R1, =0xC34
//   0030E8B4  MOVS    R0, R4; int
//   0030E8B6  ADD     R2, SP, #arg_A0
//   0030E8B8  ADD     R1, SP; char *
//   0030E8BA  BL      sub_3BF0BC
//   0030E8BE  LDR     R0, [SP,#arg_70]
//   0030E8C0  MOVS    R1, R4
//   0030E8C2  ADD     R5, SP, #arg_AC
//   0030E8C4  BL      _ZNK6Kompex15SQLiteStatement13GetColumnBlobERKSs; Kompex::SQLiteStatement::GetColumnBlob(std::string const&)
//   0030E8C8  STR     R0, [SP,#arg_A4]
//   0030E8CA  MOVS    R0, R5
//   0030E8CC  BL      sub_3BDF80
//   0030E8D0  LDR     R0, [SP,#arg_68]
//   0030E8D2  LDR     R4, [SP,#arg_7C]
//   0030E8D4  LDR     R1, [SP,#arg_80]
//   0030E8D6  STR     R0, [SP,#arg_AC]
//   0030E8D8  SUBS    R3, R4, R0
//   0030E8DA  LDR     R4, [SP,#arg_8C]
//   0030E8DC  STR     R3, [SP,#arg_B0]
//   0030E8DE  MOVS    R0, R7
//   0030E8E0  STR     R4, [SP,#arg_0]
//   0030E8E2  MOVS    R2, R5
//   0030E8E4  ADD     R3, SP, #arg_A4
//   0030E8E6  BL      _Z18tdr_dbms_sql2unionP10tagTDRMetaiP10tagTDRDataS2_i; tdr_dbms_sql2union(tagTDRMeta *,int,tagTDRData *,tagTDRData *,int)
//   0030E8EA  B       loc_30E944
//   0030E8EC  ADD     R5, SP, #arg_AC; jumptable 0030E858 case 1
//   0030E8EE  MOVS    R1, R4; char *
//   0030E8F0  MOVS    R0, R5; int
//   0030E8F2  ADD     R2, SP, #arg_A0
//   0030E8F4  BL      sub_3BF0BC
//   0030E8F8  LDR     R0, [SP,#arg_70]
//   0030E8FA  MOVS    R1, R5
//   0030E8FC  BL      _ZNK6Kompex15SQLiteStatement14GetColumnBytesERKSs; Kompex::SQLiteStatement::GetColumnBytes(std::string const&)
//   0030E900  STR     R0, [SP,#arg_A8]
//   0030E902  MOVS    R0, R5
//   0030E904  BL      sub_3BDF80
//   0030E908  LDR     R1, =0xC34
//   0030E90A  MOVS    R0, R5; int
//   0030E90C  ADD     R2, SP, #arg_A0
//   0030E90E  ADD     R1, SP; char *
//   0030E910  BL      sub_3BF0BC
//   0030E914  LDR     R0, [SP,#arg_70]
//   0030E916  MOVS    R1, R5
//   0030E918  ADD     R4, SP, #arg_AC
//   0030E91A  BL      _ZNK6Kompex15SQLiteStatement13GetColumnBlobERKSs; Kompex::SQLiteStatement::GetColumnBlob(std::string const&)
//   0030E91E  STR     R0, [SP,#arg_A4]
//   0030E920  MOVS    R0, R4
//   0030E922  BL      sub_3BDF80
//   0030E926  LDR     R0, [SP,#arg_68]
//   0030E928  LDR     R5, [SP,#arg_7C]
//   0030E92A  ADDS    R7, #4
//   0030E92C  STR     R0, [SP,#arg_AC]
//   0030E92E  SUBS    R3, R5, R0
//   0030E930  STR     R3, [SP,#arg_B0]
//   0030E932  LDR     R0, [R7,#0x7C]
//   0030E934  LDR     R5, [SP,#arg_84]
//   0030E936  MOVS    R1, R4
//   0030E938  ADDS    R0, #0xA8
//   0030E93A  ADDS    R0, R5, R0
//   0030E93C  ADD     R2, SP, #arg_A4
//   0030E93E  LDR     R3, [SP,#arg_8C]
//   0030E940  BL      _Z17tdr_dbms_sql2metaP10tagTDRMetaP10tagTDRDataS2_i; tdr_dbms_sql2meta(tagTDRMeta *,tagTDRData *,tagTDRData *,int)
//   0030E944  STR     R0, [SP,#arg_74]
//   0030E946  BL      sub_30F148
//   0030E94A  LDR     R1, =0xC34; jumptable 0030E858 case 2
//   0030E94C  LDR     R5, [SP,#arg_6C]
//   0030E94E  ADD     R4, SP, #arg_AC
//   0030E950  ADD     R1, SP; char *
//   0030E952  ADD     R2, SP, #arg_A4
//   0030E954  MOVS    R0, R4; int
//   0030E956  CMP     R5, #1
//   0030E958  BNE     loc_30E968
//   0030E95A  BL      sub_3BF0BC
//   0030E95E  LDR     R0, [SP,#arg_70]
//   0030E960  MOVS    R1, R4
//   0030E962  BL      _ZNK6Kompex15SQLiteStatement12GetColumnIntERKSs; Kompex::SQLiteStatement::GetColumnInt(std::string const&)
//   0030E966  B       loc_30E9F0

//======================================================================
// sub_30F148
// address: 0x0030F148   size: 0xA (10 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0030F148  LDR     R0, [SP,#arg_78]; jumptable 0030E858 case 16
//   0030F14A  LDR     R3, [R6,#0xC]; int
//   0030F14C  LDR     R0, [R0,#0x10]; int
//   0030F14E  CMP     R0, #0
//   0030F150  BNE     loc_30F160

//======================================================================
// sub_30F152
// address: 0x0030F152   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_30F152(
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
        int a35)
{
  int v35; // r6

  *(_DWORD *)(v35 + 12) = a4 - 1;
  return sub_30F15A(a1, *(_DWORD *)(a35 + 28));
}


//======================================================================
// sub_30F15A
// address: 0x0030F15A   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_30F15A(int a1, int a2)
{
  int v2; // r6

  return sub_30F182(a1, a2, *(_DWORD *)(v2 + 40), *(_DWORD *)(v2 + 40) + a2);
}


//======================================================================
// sub_30F172
// address: 0x0030F172   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_30F172(
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
        int a35)
{
  _DWORD *v35; // r6

  v35[3] = a4 - 1;
  v35[4] = 0;
  return sub_30F182(v35[10], a2, 0, v35[10] + *(_DWORD *)(a35 + 28));
}


//======================================================================
// sub_30F182
// address: 0x0030F182   size: 0x6 (6 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0030F182  STR     R3, [R6,#0x28]
//   0030F184  BL      sub_30E532

//======================================================================
// sub_30F188
// address: 0x0030F188   size: 0x4 (4 bytes)
//======================================================================
void sub_30F188()
{
  JUMPOUT(0x30F19A);
}


//======================================================================
// sub_30F18C
// address: 0x0030F18C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_30F18C(int a1, int a2)
{
  return sub_30F194(a1, a2);
}


//======================================================================
// sub_30F190
// address: 0x0030F190   size: 0x4 (4 bytes)
//======================================================================
void sub_30F190()
{
  JUMPOUT(0x30F19A);
}


//======================================================================
// sub_30F194
// address: 0x0030F194   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_30F194(int a1, int a2, int a3)
{
  return sub_30F19C(a1, a2, a3);
}


//======================================================================
// sub_30F198
// address: 0x0030F198   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_30F198(int a1, int a2, int a3)
{
  return sub_30F19C(a1, a2, a3);
}


//======================================================================
// sub_30F19C
// address: 0x0030F19C   size: 0x14 (20 bytes)
//======================================================================
void sub_30F19C()
{
  JUMPOUT(0x30F22E);
}


//======================================================================
// sub_30F222
// address: 0x0030F222   size: 0x6 (6 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0030F222  STR     R1, [SP,#arg_80]; int
//   0030F224  BL      sub_30E7A0

//======================================================================
// sub_30F228
// address: 0x0030F228   size: 0xC (12 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_30F228(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // [sp-C7Ch] [bp-C7Ch]
  int v10; // [sp-C78h] [bp-C78h]
  int v11; // [sp-C74h] [bp-C74h]
  int v12; // [sp-C70h] [bp-C70h]
  int v13; // [sp-C6Ch] [bp-C6Ch]
  int v14; // [sp-C68h] [bp-C68h]
  int v15; // [sp-C64h] [bp-C64h]
  int v16; // [sp-C60h] [bp-C60h]
  int v17; // [sp-C5Ch] [bp-C5Ch]
  int v18; // [sp-C58h] [bp-C58h]
  int v19; // [sp-C54h] [bp-C54h]
  int v20; // [sp-C50h] [bp-C50h]
  int v21; // [sp-C4Ch] [bp-C4Ch]
  int v22; // [sp-C48h] [bp-C48h]
  int v23; // [sp-C44h] [bp-C44h]
  int v24; // [sp-C40h] [bp-C40h]
  int v25; // [sp-C3Ch] [bp-C3Ch]
  int v26; // [sp-C38h] [bp-C38h]
  int v27; // [sp-C34h] [bp-C34h]
  int v28; // [sp-C30h] [bp-C30h]
  int v29; // [sp-C2Ch] [bp-C2Ch]
  int v30; // [sp-C28h] [bp-C28h]
  int v31; // [sp-C24h] [bp-C24h]
  int v32; // [sp-C20h] [bp-C20h]
  int v33; // [sp-C1Ch] [bp-C1Ch]
  int v34; // [sp-C18h] [bp-C18h]
  void *v35; // [sp-C14h] [bp-C14h]
  int v36; // [sp-C10h] [bp-C10h]
  int v37; // [sp-C0Ch] [bp-C0Ch]
  int v38; // [sp-C08h] [bp-C08h]
  int v39; // [sp-C04h] [bp-C04h]
  int v40; // [sp-C00h] [bp-C00h]
  int v41; // [sp-BFCh] [bp-BFCh]
  int v42; // [sp-BF8h] [bp-BF8h]
  int v43; // [sp-BF4h] [bp-BF4h]
  int v44; // [sp-BF0h] [bp-BF0h]

  sub_30E532(
    a1,
    a2,
    a3,
    a4,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34,
    v35,
    v36,
    v37,
    v38,
    v39,
    v40,
    v41,
    v42,
    v43,
    v44);
  __asm { POP     {R4-R7,PC} }
}

