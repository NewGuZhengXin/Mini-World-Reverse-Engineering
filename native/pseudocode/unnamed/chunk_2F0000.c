// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_2F0000

//======================================================================
// sub_2F09EE
// address: 0x002F09EE   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_2F09EE(_DWORD *a1)
{
  int v1; // r4

  v1 = *a1;
  *a1 = sub_391DDC(*a1);
  return v1;
}


//======================================================================
// sub_2F0A00
// address: 0x002F0A00   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2F0A00(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_2F0A0C
// address: 0x002F0A0C   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2F0A0C(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_2F0A18
// address: 0x002F0A18   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2F0A18(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_2F20DA
// address: 0x002F20DA   size: 0x60 (96 bytes)
//======================================================================
void *__fastcall sub_2F20DA(_DWORD *a1, int a2)
{
  size_t v4; // r2

  *a1 = *(_DWORD *)a2;
  a1[1] = *(unsigned __int16 *)(a2 + 76);
  sub_3BE508((int)(a1 + 2), (char *)(a2 + 4));
  a1[3] = *(_DWORD *)(a2 + 36);
  sub_3BE508((int)(a1 + 5), (char *)(a2 + 40));
  v4 = 80;
  a1[8] = *(_DWORD *)(a2 + 72);
  a1[13] = *(unsigned __int16 *)(a2 + 80);
  a1[14] = *(unsigned __int16 *)(a2 + 78);
  a1[7] = 0;
  a1[6] = 0;
  if ( *(unsigned __int16 *)(a2 + 88) <= 0x50u )
    v4 = *(unsigned __int16 *)(a2 + 88);
  return j_memcpy(a1 + 26, (const void *)(a2 + 90), v4);
}


//======================================================================
// sub_2F213C
// address: 0x002F213C   size: 0x14E (334 bytes)
//======================================================================
int __fastcall sub_2F213C(int a1, int a2)
{
  const char *v5; // r7
  int v6; // r1
  int v7; // r2
  int result; // r0
  char v9; // r3
  int v10; // r3
  int v11; // r0
  int v12; // r3
  _BYTE *v13; // [sp+0h] [bp-24h]
  size_t v14; // [sp+0h] [bp-24h]
  _DWORD v15[6]; // [sp+Ch] [bp-18h] BYREF

  *(_DWORD *)a1 = *(_DWORD *)a2;
  *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(a2 + 168);
  sub_3BE508(a1 + 8, (char *)(a2 + 4));
  *(_DWORD *)(a1 + 12) = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a2 + 124);
  sub_3BE508(a1 + 20, (char *)(a2 + 40));
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(a2 + 112);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(a2 + 116);
  *(_DWORD *)(a1 + 32) = *(_DWORD *)(a2 + 120);
  v5 = nullptr;
  *(_DWORD *)(a1 + 36) = *(unsigned __int8 *)(a2 + 170);
  sub_3BE508(a1 + 60, (char *)(a2 + 448));
  *(_DWORD *)(a1 + 64) = *(unsigned __int8 *)(a2 + 705);
  *(_DWORD *)(a1 + 68) = *(unsigned __int8 *)(a2 + 706);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 712);
  *(_DWORD *)(a1 + 76) = *(_DWORD *)(a2 + 768);
  *(_DWORD *)(a1 + 80) = *(_DWORD *)(a2 + 776);
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a2 + 760);
  sub_3BE508(a1 + 88, (char *)(a2 + 72));
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 108);
  sub_3BE508(a1 + 96, (char *)(a2 + 128));
  *(_BYTE *)(a1 + 100) = *(_BYTE *)(a2 + 160);
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  v13 = (_BYTE *)(a1 + 116);
  if ( *(_DWORD *)(a2 + 178) > 1u )
  {
    *(_DWORD *)(a1 + 104) = *(unsigned __int8 *)(a2 + 179);
    *v13 = *(_BYTE *)(a2 + 180);
    v14 = *(unsigned __int8 *)(a2 + 181);
    j_memcpy((void *)(a1 + 117), (const void *)(a2 + 182), v14);
    v10 = a1 + v14 + 112;
    *(_BYTE *)(a1 + v14 + 117) = 0;
    do
    {
      v11 = Ogre::StringUtil::hash((Ogre::StringUtil *)(a1 + 117), v5, -1, v10);
      v10 = 4 * (_DWORD)v5++;
      *(_DWORD *)((char *)v15 + v10) = v11;
    }
    while ( v5 != &byte_5 );
    result = v15[1];
    v12 = v15[4];
    *(_DWORD *)(a1 + 108) = (v15[0] * v15[1]) ^ v15[4];
    *(_DWORD *)(a1 + 112) = v12 ^ (v15[3] * v15[2]);
  }
  else
  {
    j_memcpy(v15, (const void *)(a2 + 178), *(unsigned __int16 *)(a2 + 176));
    v6 = v15[0];
    v7 = v15[1];
    *(_DWORD *)(a1 + 112) = v15[2];
    v9 = v15[3];
    *(_DWORD *)(a1 + 104) = v6;
    *(_DWORD *)(a1 + 108) = v7;
    *v13 = v9;
    *(_BYTE *)(a1 + 117) = 0;
    return a1 + 116;
  }
  return result;
}


//======================================================================
// sub_2F2764
// address: 0x002F2764   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2F2764(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_2F3EC8
// address: 0x002F3EC8   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_2F3EC8(const char **a1)
{
  return j_atoi(*a1);
}


//======================================================================
// sub_2F3F24
// address: 0x002F3F24   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_2F3F24(int a1)
{
  float v1; // r4

  v1 = (float)((float)((float)a1 * 24.0) / 24000.0) + 6.0;
  if ( v1 >= 24.0 )
    v1 = v1 - 24.0;
  return LODWORD(v1);
}


//======================================================================
// sub_2F3FB4
// address: 0x002F3FB4   size: 0x46 (70 bytes)
//======================================================================
bool __fastcall sub_2F3FB4(World *a1, const WCoord *a2, int a3, int a4)
{
  int BlockID; // r0
  _DWORD *v5; // r3
  int v6; // r2
  _DWORD *v7; // r4

  BlockID = World::getBlockID(a1, a2, a3, a4);
  v5 = *(_DWORD **)(Ogre::Singleton<DefManager>::ms_Singleton + 404);
  v6 = Ogre::Singleton<DefManager>::ms_Singleton + 400;
  while ( v5 != nullptr )
  {
    if ( v5[4] < BlockID )
    {
      v7 = (_DWORD *)v5[3];
      v5 = (_DWORD *)v6;
    }
    else
    {
      v7 = (_DWORD *)v5[2];
    }
    v6 = (int)v5;
    v5 = v7;
  }
  if ( v6 != Ogre::Singleton<DefManager>::ms_Singleton + 400 && BlockID >= *(_DWORD *)(v6 + 16) )
    v5 = (_DWORD *)(v6 + 20);
  return v5 == nullptr;
}


//======================================================================
// sub_2F4000
// address: 0x002F4000   size: 0x7C (124 bytes)
//======================================================================
WCoord *__fastcall sub_2F4000(WCoord *a1, int a2, int a3, int a4)
{
  int v6; // r3
  int v7; // r2
  int v8; // r1
  int v9; // r0
  int v10; // r6
  int v11; // r3
  int v12; // r1
  World *v13; // r0
  WCoord *v15; // [sp+0h] [bp-10h] BYREF
  int v16; // [sp+4h] [bp-Ch]
  int v17; // [sp+8h] [bp-8h]
  int v18; // [sp+Ch] [bp-4h]

  v15 = a1;
  v16 = a2;
  v17 = a3;
  v18 = a4;
  v6 = **(_DWORD **)(a2 + 264);
  if ( *(_BYTE *)v6 != 0 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    *(_DWORD *)a1 = v7;
    v8 = *(_DWORD *)(v6 + 8);
    *((_DWORD *)a1 + 1) = v8;
    v9 = 100 * *(_DWORD *)(v6 + 12) + 50;
    *(_DWORD *)a1 = 100 * v7 + 50;
    *((_DWORD *)a1 + 1) = 100 * v8 + 100;
    *((_DWORD *)a1 + 2) = v9;
  }
  else
  {
    PlayerControl::getPosition(&v15, a2);
    v10 = v17;
    *(_DWORD *)a1 = v15;
    v11 = v16;
    *((_DWORD *)a1 + 2) = v10;
    *((_DWORD *)a1 + 1) = v11;
    *(_DWORD *)a1 += j_lrand48() % 400 - 200;
    v12 = j_lrand48() % 400;
    v13 = *(World **)(a2 + 52);
    *((_DWORD *)a1 + 2) += v12 - 200;
    World::getHeight(v13, a1);
  }
  return a1;
}


//======================================================================
// sub_2F407C
// address: 0x002F407C   size: 0x32 (50 bytes)
//======================================================================
bool __fastcall sub_2F407C(int a1, int a2)
{
  _DWORD v4[3]; // [sp+0h] [bp-18h] BYREF
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  PlayerControl::getPosition(v5, g_pPlayerCtrl);
  CoordDivBlock((const WCoord *)v4, v5);
  return *(_DWORD *)(a2 + 4) < v4[1];
}


//======================================================================
// sub_2F55DE
// address: 0x002F55DE   size: 0x6E (110 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2F55DE(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // [sp-17Ch] [bp-17Ch] BYREF
  int v10; // [sp-174h] [bp-174h] BYREF
  void *v11; // [sp-150h] [bp-150h] BYREF

  sub_3BDF80(&v10);
  std::vector<std::string>::~vector(&v11);
  sub_3BDF80(&v9);
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_2F70B8
// address: 0x002F70B8   size: 0x12A (298 bytes)
//======================================================================
Ogre::IndexData *__fastcall sub_2F70B8(int a1, int a2)
{
  unsigned int v2; // r0
  unsigned int v4; // r0
  _WORD *v5; // r0
  int v6; // r3
  _WORD *v7; // r4
  int v8; // r0
  int v9; // r12
  int v10; // r6
  __int16 v11; // r2
  int v12; // r1
  int v13; // r5
  char *v14; // r6
  int v15; // r1
  __int16 v16; // r2
  _WORD *v17; // r0
  int v18; // r5
  int v19; // r0
  int v20; // r5
  int v21; // r6
  __int16 v22; // r3
  Ogre::IndexData *v23; // r6
  void *v24; // r0
  int v26; // [sp+0h] [bp-24h]
  __int16 v27; // [sp+Ch] [bp-18h]
  int v29; // [sp+14h] [bp-10h]

  v2 = 3 * a2 * a1;
  if ( v2 > 0x3F800000 )
    v4 = -1;
  else
    v4 = 2 * v2;
  v5 = (_WORD *)operator new[](v4);
  v29 = a2 - 1;
  v6 = 0;
  v7 = v5;
  *v5 = 0;
  v8 = 1;
  v9 = 0;
  while ( 1 )
  {
    v27 = (v9 + 1) * a1;
    v10 = v8;
    v11 = v27 + v6;
    v12 = v6 + 1;
    v13 = v8 + 1;
    v7[v8] = v27 + v6;
    if ( v6 + 1 < a1 )
    {
      v8 += 2;
      v7[v10 + 1] = v12 + v9 * a1;
      goto LABEL_7;
    }
    if ( v9 + 1 >= v29 )
      break;
    v14 = (char *)&v7[v10];
    v15 = v8 + 2;
    *((_WORD *)v14 + 1) = v11;
    if ( (a1 & 1) == 0 )
    {
      v15 = v8 + 3;
      *((_WORD *)v14 + 2) = v11;
    }
    v9 += 2;
    v26 = v6 - 1;
    v16 = v9 * a1;
    v17 = &v7[v15];
    v18 = v6;
    while ( 1 )
    {
      *v17 = v16 + v18;
      v17 += 2;
      if ( --v18 < 0 )
        break;
      *(v17 - 1) = v27 + v26--;
    }
    v19 = (~v6 >> 31) & v6;
    v20 = v15 + 1;
    v21 = v15 + 2 * v19;
    v12 = v6 - v19;
    v13 = v20 + 2 * v19;
    v22 = v16 - v19 + v6;
    if ( v9 >= v29 )
      break;
    v8 = v21 + 2;
    v7[v13] = v22;
    if ( (a1 & 1) == 0 )
    {
      v7[v8] = v22;
      v8 = v21 + 3;
    }
LABEL_7:
    v6 = v12;
  }
  v23 = (Ogre::IndexData *)operator new(0x28u);
  Ogre::IndexData::IndexData(v23, v13);
  v24 = (void *)Ogre::IndexData::lock(v23);
  j_memcpy(v24, v7, 2 * v13);
  Ogre::IndexData::unlock((int)v23);
  operator delete[](v7);
  return v23;
}


//======================================================================
// sub_2F9090
// address: 0x002F9090   size: 0x4E (78 bytes)
//======================================================================
__int64 __fastcall sub_2F9090(__int64 a1, int a2, int a3)
{
  int *v3; // r5
  World *v4; // r6
  int BlockData; // r0
  int v6; // r3
  int v7; // r5
  __int64 v9; // [sp+0h] [bp-10h] BYREF
  int v10; // [sp+8h] [bp-8h]
  int v11; // [sp+Ch] [bp-4h]

  v9 = a1;
  v10 = a2;
  v11 = a3;
  v3 = (int *)a1;
  v4 = *(World **)g_WorldCTMgr;
  HIDWORD(v9) = *(_DWORD *)a1;
  v10 = *(_DWORD *)(a1 + 4);
  v11 = *(_DWORD *)(a1 + 8);
  BlockData = World::getBlockData(v4, (const WCoord *)((char *)&v9 + 4), a2, v11);
  v10 = v3[1];
  v6 = v3[2];
  v7 = *v3;
  v11 = v6;
  HIDWORD(v9) = v7;
  World::setBlockData(v4, (const WCoord *)((char *)&v9 + 4), BlockData % 4, 3);
  return v9;
}


//======================================================================
// sub_2F98C4
// address: 0x002F98C4   size: 0x8C (140 bytes)
//======================================================================
int *__fastcall sub_2F98C4(_DWORD *a1, flatbuffers::Table *a2)
{
  DefManager *v4; // r6
  int v5; // r0
  int OptionalFieldOffset; // r0
  __int16 v7; // r3
  int v8; // r0
  __int16 v9; // r3
  int *result; // r0
  int v11; // r7
  int v12; // r6
  int v13; // r0
  _DWORD *v14; // r3

  v4 = (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton;
  v5 = flatbuffers::Table::GetField<int>(a2, 4u, 0);
  a1[1] = DefManager::getItemDef(v4, v5);
  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
  v7 = 0;
  if ( OptionalFieldOffset != 0 )
    v7 = *(_WORD *)((char *)a2 + OptionalFieldOffset);
  a1[2] = v7;
  v8 = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
  v9 = 0;
  if ( v8 != 0 )
    v9 = *(_WORD *)((char *)a2 + v8);
  a1[3] = v9;
  result = (int *)flatbuffers::Table::GetOptionalFieldOffset(a2, 0xAu);
  if ( result != nullptr )
    result = (int *)((char *)result + (_DWORD)a2 + *(int *)((char *)result + (_DWORD)a2));
  v11 = *result;
  v12 = 0;
  a1[7] = *result;
  while ( v12 < v11 )
  {
    v13 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xAu);
    if ( v13 != 0 )
      v13 += (int)a2 + *(_DWORD *)((char *)a2 + v13);
    result = (int *)(v13 + 4 * v12);
    v14 = &a1[v12++];
    v14[8] = result[1];
  }
  return result;
}


//======================================================================
// sub_2F9FC0
// address: 0x002F9FC0   size: 0x9E (158 bytes)
//======================================================================
int __fastcall sub_2F9FC0(unsigned int a1, int a2)
{
  unsigned int v2; // r7
  int i; // r6
  int v6; // r0
  int *v7; // r3
  unsigned int v8; // r7
  __int16 v9; // r5
  unsigned int v10; // r0
  int v12; // [sp+0h] [bp-Ch]
  __int16 v13; // [sp+0h] [bp-Ch]
  __int16 v14; // [sp+4h] [bp-8h]

  v2 = *(_DWORD *)(a2 + 28);
  v12 = a2 + 32;
  flatbuffers::FlatBufferBuilder::StartVector((flatbuffers::FlatBufferBuilder *)a1, v2, 4u);
  for ( i = v2;
        i != 0;
        flatbuffers::FlatBufferBuilder::PushElement<int>((flatbuffers::FlatBufferBuilder *)a1, *(_DWORD *)(v12 + 4 * i)) )
  {
    --i;
  }
  v6 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, v2);
  v7 = *(int **)(a2 + 4);
  v8 = v6;
  if ( v7 != nullptr )
    i = *v7;
  v13 = *(_WORD *)(a2 + 8);
  v14 = *(_WORD *)(a2 + 12);
  v9 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a1 + 4));
  if ( v8 != 0 )
  {
    v10 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a1, v8);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a1, 0xAu, v10, 0);
  }
  flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)a1, 4u, i, 0);
  flatbuffers::FlatBufferBuilder::AddElement<short>(a1 | 0x800000000LL, v14, 0);
  flatbuffers::FlatBufferBuilder::AddElement<short>(a1 | 0x600000000LL, v13, 0);
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a1, v9, 4);
}


//======================================================================
// sub_2FE6D2
// address: 0x002FE6D2   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2FE6D2(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}

