// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldManager

//======================================================================
// WorldManager::WorldManager(WorldDesc *)
// address: 0x002F0A24   size: 0x54 (84 bytes)
//======================================================================
// Alternative name is '_ZN12WorldManagerC1EP9WorldDesc'
_DWORD *__fastcall WorldManager::WorldManager(_DWORD *a1, int a2)
{
  _DWORD *v2; // r6

  *a1 = &off_462328;
  v2 = a1 + 8;
  a1[2] = 0;
  a1[4] = 0;
  a1[1] = a2;
  a1[3] = -1;
  j_memset(a1 + 8, 0, 0x10u);
  a1[14] = 1000;
  a1[15] = 1;
  a1[12] = 0;
  a1[10] = v2;
  a1[11] = v2;
  a1[13] = 0;
  a1[16] = 0;
  a1[17] = 0;
  a1[18] = 0;
  a1[19] = 0;
  a1[20] = 0;
  a1[21] = 0;
  g_WorldMgr = (int)a1;
  return a1;
}


//======================================================================
// WorldManager::beginSaveTranction(void)
// address: 0x002F0A80   size: 0x22 (34 bytes)
//======================================================================
int __fastcall WorldManager::beginSaveTranction(int this)
{
  int v1; // r4

  v1 = this;
  if ( *(_DWORD *)(this + 52) == 0 )
    this = CSMgr::doTranctionBegin((CSMgr *)g_CSMgr, **(_DWORD **)(this + 4));
  ++*(_DWORD *)(v1 + 52);
  return this;
}


//======================================================================
// WorldManager::endSaveTranction(void)
// address: 0x002F0AA8   size: 0x20 (32 bytes)
//======================================================================
int __fastcall WorldManager::endSaveTranction(int this)
{
  int v1; // r3

  v1 = *(_DWORD *)(this + 52) - 1;
  *(_DWORD *)(this + 52) = v1;
  if ( v1 == 0 )
    return CSMgr::doTranctionCommit((CSMgr *)g_CSMgr, **(_DWORD **)(this + 4));
  return this;
}


//======================================================================
// WorldManager::getWorld(int)
// address: 0x002F0ACC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall WorldManager::getWorld(WorldManager *this, int a2)
{
  char *v2; // r0
  char *v3; // r3
  char *v4; // r2
  char *v5; // r4
  int result; // r0

  v2 = (char *)this + 32;
  v3 = *((char **)v2 + 1);
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( *((_DWORD *)v3 + 4) < a2 )
    {
      v5 = *((char **)v3 + 3);
      v3 = v4;
    }
    else
    {
      v5 = *((char **)v3 + 2);
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return 0;
  result = 0;
  if ( a2 >= *((_DWORD *)v4 + 4) )
    return *((_DWORD *)v4 + 5);
  return result;
}


//======================================================================
// WorldManager::setSpawnPoint(WCoord const&)
// address: 0x002F0B00   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall WorldManager::setSpawnPoint(_DWORD *result, _DWORD *a2)
{
  int v2; // r2

  result[2] = *a2;
  result[3] = a2[1];
  result[4] = a2[2];
  v2 = a2[2];
  result[5] = *a2 / 16 - ((unsigned int)(*a2 % 16) >> 31);
  result[6] = v2 / 16 - ((unsigned int)(v2 % 16) >> 31);
  return result;
}


//======================================================================
// WorldManager::isCreativeMode(void)
// address: 0x002F0B5E   size: 0xC (12 bytes)
//======================================================================
bool __fastcall WorldManager::isCreativeMode(WorldManager *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 1) + 4) == 1;
}


//======================================================================
// WorldManager::~WorldManager()
// address: 0x002F0B8C   size: 0x6E (110 bytes)
//======================================================================
// Alternative name is '_ZN12WorldManagerD1Ev'
void __fastcall WorldManager::~WorldManager(WorldManager *this, _DWORD *a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r5
  void *v6; // r0
  void *v7; // r0
  _DWORD *i; // [sp+4h] [bp-4h] BYREF

  i = a2;
  *(_DWORD *)this = &off_462328;
  for ( i = *((_DWORD **)this + 10); i != (_DWORD *)((char *)this + 32); sub_2F09EE(&i) )
  {
    v3 = i[5];
    if ( v3 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  }
  v4 = *((_DWORD *)this + 20);
  v5 = *((_DWORD *)this + 19);
  g_WorldMgr = 0;
  while ( v5 != v4 )
  {
    sub_2F0A18(*(void **)(v5 + 36));
    v5 += 48;
  }
  v6 = *((void **)this + 19);
  if ( v6 != nullptr )
    operator delete(v6);
  v7 = *((void **)this + 16);
  if ( v7 != nullptr )
    operator delete(v7);
  std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_erase(
    (int)this + 28,
    *((_DWORD **)this + 9));
}


//======================================================================
// WorldManager::~WorldManager()
// address: 0x002F0C04   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WorldManager::~WorldManager(WorldManager *this, _DWORD *a2)
{
  WorldManager::~WorldManager(this, a2);
  operator delete(this);
}


//======================================================================
// WorldManager::getMapData(int,bool)
// address: 0x002F114C   size: 0x88 (136 bytes)
//======================================================================
int __fastcall WorldManager::getMapData(WorldManager *this, int a2, int a3)
{
  int v4; // r3
  int v6; // r7
  __int64 v7; // r0
  int v8; // r3
  int v9; // r5
  int v11; // [sp+4h] [bp-38h]
  _DWORD v12[9]; // [sp+8h] [bp-34h] BYREF
  void *v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  v4 = *((_DWORD *)this + 19);
  HIDWORD(v7) = *((_DWORD *)this + 20);
  v6 = -1431655765 * ((HIDWORD(v7) - v4) >> 4);
  LODWORD(v7) = 0;
  while ( (_DWORD)v7 != v6 )
  {
    v11 = v4;
    v4 += 48;
    if ( *(_DWORD *)(v4 - 48) == a2 )
      return v11;
    LODWORD(v7) = v7 + 1;
  }
  if ( a3 == 0 )
    return 0;
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  v12[1] = 0;
  v12[3] = 0;
  v8 = *((_DWORD *)this + 21);
  v12[0] = a2;
  v12[2] = -1;
  LODWORD(v7) = (char *)this + 76;
  if ( HIDWORD(v7) == v8 )
  {
    std::vector<WorldMapData>::_M_emplace_back_aux<WorldMapData const&>((int *)v7, (int)v12);
  }
  else
  {
    __gnu_cxx::new_allocator<WorldMapData>::construct<WorldMapData<WorldMapData const&>>(v7, (int)v12);
    *((_DWORD *)this + 20) += 48;
  }
  v9 = *((_DWORD *)this + 20) - 48;
  sub_2F0A18(v13);
  return v9;
}


//======================================================================
// WorldManager::loadGlobal(void *)
// address: 0x002F11D8   size: 0x1B8 (440 bytes)
//======================================================================
unsigned int *__fastcall WorldManager::loadGlobal(WorldManager *this, _DWORD *a2)
{
  int v3; // r3
  unsigned int i; // r2
  unsigned int *result; // r0
  flatbuffers::Table *v7; // r4
  int OptionalFieldOffset; // r0
  int v9; // r1
  int MapData; // r5
  int *v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r0
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r3
  int v19; // r0
  int v20; // r3
  int v21; // r0
  int v22; // r3
  int v23; // r0
  int v24; // r3
  int v25; // r0
  int v26; // r3
  int v27; // r2
  int v28; // r0
  unsigned int *v29; // r0
  flatbuffers::Table *v30; // r6
  int v31; // r0
  int v32; // r3
  int v33; // r0
  int v34; // r3
  int v35; // r0
  int v36; // r3
  int v37; // r0
  int *v38; // r6
  int v39; // r2
  int v40; // r3
  int v41; // r6
  unsigned int j; // [sp+4h] [bp-38h]
  unsigned int v43; // [sp+8h] [bp-34h]
  flatbuffers::Table *v44; // [sp+Ch] [bp-30h]
  _DWORD v45[3]; // [sp+14h] [bp-28h] BYREF
  int v46[7]; // [sp+20h] [bp-1Ch] BYREF

  v45[0] = a2[522];
  v3 = a2[523];
  v45[1] = *((unsigned __int16 *)a2 + 1048);
  v45[2] = v3;
  WorldManager::setSpawnPoint(this, v45);
  *((_DWORD *)this + 14) = a2[3];
  v44 = (flatbuffers::Table *)((char *)a2 + a2[533] + 2132);
  for ( i = 0; ; i = v43 + 1 )
  {
    v43 = i;
    result = (unsigned int *)flatbuffers::Table::GetOptionalFieldOffset(v44, 4u);
    if ( result != nullptr )
      result = (unsigned int *)((char *)result + (_DWORD)v44 + *(unsigned int *)((char *)result + (_DWORD)v44));
    if ( v43 >= *result )
      break;
    v7 = (flatbuffers::Table *)((char *)&result[v43 + 1] + result[v43 + 1]);
    OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(v7, 4u);
    v9 = 0;
    if ( OptionalFieldOffset != 0 )
      v9 = *(_DWORD *)((char *)v7 + OptionalFieldOffset);
    MapData = WorldManager::getMapData(this, v9, 1);
    v11 = (int *)flatbuffers::Table::GetOptionalFieldOffset(v7, 6u);
    if ( v11 != nullptr )
      v11 = (int *)((char *)v11 + (_DWORD)v7);
    v12 = v11[1];
    v13 = *v11;
    v14 = v11[2];
    *(_DWORD *)(MapData + 8) = v12;
    *(_DWORD *)(MapData + 12) = v14;
    *(_DWORD *)(MapData + 4) = v13;
    v15 = flatbuffers::Table::GetOptionalFieldOffset(v7, 8u);
    v16 = 0;
    if ( v15 != 0 )
      v16 = *((unsigned __int8 *)v7 + v15);
    *(_BYTE *)(MapData + 16) = v16 != 0;
    v17 = flatbuffers::Table::GetOptionalFieldOffset(v7, 0xAu);
    v18 = 0;
    if ( v17 != 0 )
      v18 = *((unsigned __int8 *)v7 + v17);
    *(_BYTE *)(MapData + 17) = v18 != 0;
    v19 = flatbuffers::Table::GetOptionalFieldOffset(v7, 0xCu);
    v20 = 0;
    if ( v19 != 0 )
      v20 = *(_DWORD *)((char *)v7 + v19);
    *(_DWORD *)(MapData + 20) = v20;
    v21 = flatbuffers::Table::GetOptionalFieldOffset(v7, 0xEu);
    v22 = 0;
    if ( v21 != 0 )
      v22 = *(_DWORD *)((char *)v7 + v21);
    *(_DWORD *)(MapData + 24) = v22;
    v23 = flatbuffers::Table::GetOptionalFieldOffset(v7, 0x10u);
    v24 = 0;
    if ( v23 != 0 )
      v24 = *(_DWORD *)((char *)v7 + v23);
    *(_DWORD *)(MapData + 28) = v24;
    v25 = flatbuffers::Table::GetOptionalFieldOffset(v7, 0x12u);
    v26 = 0;
    if ( v25 != 0 )
      v26 = *(_DWORD *)((char *)v7 + v25);
    v27 = *(_DWORD *)(MapData + 36);
    *(_DWORD *)(MapData + 32) = v26;
    *(_DWORD *)(MapData + 40) = v27;
    v28 = flatbuffers::Table::GetOptionalFieldOffset(v7, 0x14u);
    if ( v28 != 0 && (flatbuffers::Table *)((char *)v7 + v28 + *(_DWORD *)((char *)v7 + v28)) != nullptr )
    {
      for ( j = 0; ; ++j )
      {
        v29 = (unsigned int *)flatbuffers::Table::GetOptionalFieldOffset(v7, 0x14u);
        if ( v29 != nullptr )
          v29 = (unsigned int *)((char *)v29 + (_DWORD)v7 + *(unsigned int *)((char *)v29 + (_DWORD)v7));
        if ( j >= *v29 )
          break;
        v30 = (flatbuffers::Table *)((char *)&v29[j + 1] + v29[j + 1]);
        v31 = flatbuffers::Table::GetOptionalFieldOffset(v30, 4u);
        v32 = 0;
        if ( v31 != 0 )
          v32 = *(_DWORD *)((char *)v30 + v31);
        v46[0] = v32;
        v33 = flatbuffers::Table::GetOptionalFieldOffset(v30, 6u);
        v34 = 0;
        if ( v33 != 0 )
          v34 = *(_DWORD *)((char *)v30 + v33);
        v46[1] = v34;
        v35 = flatbuffers::Table::GetOptionalFieldOffset(v30, 8u);
        v36 = 0;
        if ( v35 != 0 )
          v36 = *(_DWORD *)((char *)v30 + v35);
        v46[2] = v36;
        v37 = flatbuffers::Table::GetOptionalFieldOffset(v30, 0xAu);
        if ( v37 != 0 )
          v38 = (int *)((char *)v30 + v37);
        else
          v38 = nullptr;
        v39 = v38[1];
        v40 = v38[2];
        v41 = *v38;
        v46[4] = v39;
        v46[5] = v40;
        v46[3] = v41;
        std::vector<WorldBossData>::push_back((int *)(MapData + 36), v46);
      }
    }
  }
  return result;
}


//======================================================================
// WorldManager::collectGlobalData(void)
// address: 0x002F1398   size: 0x7E (126 bytes)
//======================================================================
int __fastcall WorldManager::collectGlobalData(int this)
{
  WorldManager *v1; // r7
  int v2; // r6
  _DWORD *MapData; // r4
  unsigned int j; // r5
  int v5; // r2
  int v6; // r3
  int v7; // r0
  _DWORD v8[5]; // [sp+8h] [bp-34h] BYREF
  _DWORD *i; // [sp+1Ch] [bp-20h] BYREF
  int v10[7]; // [sp+20h] [bp-1Ch] BYREF

  v1 = (WorldManager *)this;
  for ( i = *(_DWORD **)(this + 40); i != (_DWORD *)((char *)v1 + 32); this = sub_2F09EE(&i) )
  {
    v2 = i[5];
    MapData = (_DWORD *)WorldManager::getMapData(v1, *(unsigned __int16 *)(v2 + 60), 1);
    World::getPortalPoint(v8, (_DWORD *)v2);
    MapData[1] = v8[0];
    MapData[2] = v8[1];
    MapData[3] = v8[2];
    Environment::save(*(_DWORD *)(v2 + 28), MapData);
    for ( j = 0; ; ++j )
    {
      v5 = *(_DWORD *)(v2 + 132);
      v6 = *(_DWORD *)(v5 + 28);
      if ( j >= (*(_DWORD *)(v5 + 32) - v6) >> 2 )
        break;
      v7 = *(_DWORD *)(4 * j + v6);
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 196))(v7, v10);
      AddBossToMapData((int)MapData, v10);
    }
  }
  return this;
}


//======================================================================
// WorldManager::createWorld(int)
// address: 0x002F1570   size: 0x84 (132 bytes)
//======================================================================
_DWORD **__fastcall WorldManager::createWorld(WorldManager *this, int a2)
{
  int v2; // r3
  _DWORD **v4; // r5
  _DWORD *v5; // r0
  _DWORD *v6; // r3
  _DWORD *v7; // r1
  _DWORD *v8; // r6
  int v10; // [sp+14h] [bp-10h] BYREF
  int *v11; // [sp+1Ch] [bp-8h] BYREF

  v2 = *(_DWORD *)this;
  v10 = a2;
  v4 = (_DWORD **)(*(int (__fastcall **)(WorldManager *))(v2 + 8))(this);
  v5 = *((_DWORD **)this + 1);
  ((void (__fastcall *)(_DWORD **, _DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))(*v4)[2])(
    v4,
    v5[27],
    v5[28],
    *v5,
    v10,
    v5[1],
    v5[26],
    v5[3]);
  v6 = *((_DWORD **)this + 9);
  v7 = (_DWORD *)((char *)this + 32);
  while ( v6 != nullptr )
  {
    if ( v6[4] < v10 )
    {
      v8 = (_DWORD *)v6[3];
      v6 = v7;
    }
    else
    {
      v8 = (_DWORD *)v6[2];
    }
    v7 = v6;
    v6 = v8;
  }
  if ( v7 == (_DWORD *)((char *)this + 32) || v10 < v7[4] )
  {
    v11 = &v10;
    v7 = std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           (_DWORD *)this + 7,
           (int)v7,
           (int)&unk_446E3D,
           &v11);
  }
  v7[5] = v4;
  (*(void (__fastcall **)(_DWORD *))(*v4[31] + 48))(v4[31]);
  return v4;
}


//======================================================================
// WorldManager::doActualTeleport(ClientPlayer *,int)
// address: 0x002F15F8   size: 0xAC (172 bytes)
//======================================================================
int __fastcall WorldManager::doActualTeleport(WorldManager *this, ClientPlayer *a2, int a3)
{
  ChunkProvider **World; // r4
  _DWORD v8[4]; // [sp+8h] [bp-2Ch] BYREF
  int v9; // [sp+18h] [bp-1Ch] BYREF
  int v10; // [sp+1Ch] [bp-18h]
  int v11; // [sp+20h] [bp-14h]
  _DWORD v12[4]; // [sp+24h] [bp-10h] BYREF

  (*(void (__fastcall **)(ClientPlayer *, _DWORD))(*(_DWORD *)a2 + 12))(a2, 0);
  World = (ChunkProvider **)WorldManager::getWorld(this, a3);
  if ( World == nullptr )
    World = (ChunkProvider **)WorldManager::createWorld(this, a3);
  World::getPortalPoint(&v9, World);
  if ( v10 < 0 && a3 != 0 )
  {
    v12[1] = (*(int (__fastcall **)(ChunkProvider *))(*(_DWORD *)World[31] + 28))(World[31]);
    v12[0] = 0;
    v12[2] = 0;
    World::syncLoadChunk(World, (const WCoord *)v12, 16);
    World::createPortal((World *)World, (const WCoord *)v12);
    World::getPortalPoint(v8, World);
    v9 = v8[0];
    v10 = v8[1];
    v11 = v8[2];
  }
  if ( v10 >= 0 )
  {
    ClientPlayer::gotoBlockPos(a2, (World *)World, (const WCoord *)&v9, false);
  }
  else
  {
    World = (ChunkProvider **)WorldManager::getWorld(this, 0);
    ClientPlayer::gotoSpawnPoint(a2, (World *)World);
  }
  return (*(int (__fastcall **)(ClientPlayer *, ChunkProvider **))(*(_DWORD *)a2 + 8))(a2, World);
}


//======================================================================
// WorldManager::saveGlobal(void)
// address: 0x002F16A4   size: 0x3AA (938 bytes)
//======================================================================
void __fastcall WorldManager::saveGlobal(WorldManager *this)
{
  int v2; // r2
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r4
  int v7; // r1
  int v8; // r5
  int v9; // r0
  int v10; // r2
  unsigned int v11; // r3
  unsigned int v12; // r1
  unsigned int j; // r6
  int v14; // r2
  int *v15; // r3
  int v16; // r2
  int v17; // r0
  __int64 v18; // r0
  int v19; // r4
  int v20; // r5
  unsigned int v21; // r0
  unsigned int v22; // r4
  __int16 v23; // r5
  __int64 v24; // r0
  unsigned int v25; // r0
  __int64 v26; // r0
  __int64 v27; // r0
  __int64 v28; // r0
  int v29; // r0
  int v30; // r6
  int v31; // r5
  unsigned int v32; // r0
  unsigned int v33; // r5
  __int16 v34; // r6
  unsigned int v35; // r5
  unsigned int v36; // r0
  unsigned int v37; // r0
  size_t v38; // r0
  _DWORD *v39; // [sp+0h] [bp-10ECh]
  unsigned int i; // [sp+4h] [bp-10E8h]
  _DWORD *v41; // [sp+4h] [bp-10E8h]
  int v42; // [sp+8h] [bp-10E4h]
  int v43; // [sp+8h] [bp-10E4h]
  float v44; // [sp+Ch] [bp-10E0h]
  char v45; // [sp+Ch] [bp-10E0h]
  int v46; // [sp+10h] [bp-10DCh]
  char v47; // [sp+10h] [bp-10DCh]
  int *v48; // [sp+14h] [bp-10D8h]
  int v49; // [sp+14h] [bp-10D8h]
  __int16 v50; // [sp+18h] [bp-10D4h]
  unsigned int v51; // [sp+18h] [bp-10D4h]
  float v52; // [sp+1Ch] [bp-10D0h]
  float v53; // [sp+20h] [bp-10CCh]
  void *v54; // [sp+28h] [bp-10C4h] BYREF
  int *v55; // [sp+2Ch] [bp-10C0h]
  int *v56; // [sp+30h] [bp-10BCh]
  void *v57; // [sp+34h] [bp-10B8h] BYREF
  char *v58; // [sp+38h] [bp-10B4h]
  int v59; // [sp+3Ch] [bp-10B0h]
  _DWORD v60[3]; // [sp+40h] [bp-10ACh] BYREF
  _DWORD v61[3]; // [sp+4Ch] [bp-10A0h] BYREF
  void *v62; // [sp+58h] [bp-1094h] BYREF
  _BYTE v63[8]; // [sp+5Ch] [bp-1090h] BYREF
  void *v64; // [sp+64h] [bp-1088h]
  unsigned int v65; // [sp+84h] [bp-1068h]
  _DWORD v66[1048]; // [sp+8Ch] [bp-1060h] BYREF

  WorldManager::collectGlobalData((int)this);
  j_memset(v66, 0, 0x1058u);
  v2 = *((_DWORD *)this + 3);
  v3 = *((_DWORD *)this + 4);
  v66[522] = *((_DWORD *)this + 2);
  LOWORD(v66[524]) = v2;
  v4 = *((_DWORD *)this + 14);
  v66[523] = v3;
  v66[3] = v4;
  LOWORD(v66[528]) = -1;
  flatbuffers::FlatBufferBuilder::FlatBufferBuilder((flatbuffers::FlatBufferBuilder *)&v62, 0x400u, nullptr);
  v54 = nullptr;
  v55 = nullptr;
  v56 = nullptr;
  v57 = nullptr;
  v58 = nullptr;
  v59 = 0;
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 19);
    if ( i >= -1431655765 * ((*((_DWORD *)this + 20) - v5) >> 4) )
      break;
    v6 = v5 + 48 * i;
    v7 = *(_DWORD *)(v6 + 8);
    v8 = *(_DWORD *)(v6 + 40);
    v60[0] = *(_DWORD *)(v6 + 4);
    v9 = *(_DWORD *)(v6 + 36);
    v10 = *(_DWORD *)(v6 + 12);
    v60[1] = v7;
    v60[2] = v10;
    v11 = -1431655765 * ((v8 - v9) >> 3);
    v12 = (v58 - (_BYTE *)v57) >> 2;
    if ( v11 <= v12 )
    {
      if ( v11 < v12 )
        v58 = (char *)v57 - 1431655764 * ((v8 - v9) >> 3);
    }
    else
    {
      std::vector<flatbuffers::Offset<FBSave::WorldMapBoss>>::_M_default_append((int *)&v57, v11 - v12);
    }
    for ( j = 0; ; ++j )
    {
      v14 = *(_DWORD *)(v6 + 36);
      if ( j >= -1431655765 * ((*(_DWORD *)(v6 + 40) - v14) >> 3) )
        break;
      v15 = (int *)(v14 + 24 * j);
      v16 = v15[5];
      v17 = v15[3];
      v61[1] = v15[4];
      v61[2] = v16;
      v61[0] = v17;
      v48 = (int *)((char *)v57 + 4 * j);
      v44 = *((float *)v15 + 1);
      v42 = *v15;
      v46 = v15[2];
      v50 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v63);
      flatbuffers::FlatBufferBuilder::AddStruct<FBSave::Coord3>(
        (flatbuffers::FlatBufferBuilder *)&v62,
        0xAu,
        (const unsigned __int8 *)v61);
      flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v62, 8u, v46, 0);
      LODWORD(v18) = &v62;
      HIDWORD(v18) = 6;
      flatbuffers::FlatBufferBuilder::AddElement<float>(v18, v44, 0.0);
      flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)&v62, 4u, v42, 0);
      *v48 = flatbuffers::FlatBufferBuilder::EndTable((char **)&v62, v50, 4);
    }
    v43 = *(_DWORD *)v6;
    v45 = *(_BYTE *)(v6 + 16);
    v47 = *(_BYTE *)(v6 + 17);
    v49 = *(_DWORD *)(v6 + 20);
    v51 = *(_DWORD *)(v6 + 24);
    v52 = *(float *)(v6 + 28);
    v53 = *(float *)(v6 + 32);
    v19 = (v58 - (_BYTE *)v57) >> 2;
    v39 = v57;
    flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)&v62, 4 * v19, 4u);
    flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)&v62, 4 * v19, 4u);
    v20 = v19;
    while ( v20 != 0 )
    {
      v21 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v62, v39[--v20]);
      flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v62, v21);
    }
    v22 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v62, v19);
    v23 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v63);
    if ( v22 != 0 )
    {
      v25 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v62, v22);
      flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v62, 0x14u, v25, 0);
    }
    LODWORD(v24) = &v62;
    HIDWORD(v24) = 18;
    flatbuffers::FlatBufferBuilder::AddElement<float>(v24, v53, 0.0);
    LODWORD(v26) = &v62;
    HIDWORD(v26) = 16;
    flatbuffers::FlatBufferBuilder::AddElement<float>(v26, v52, 0.0);
    flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)&v62, 0xEu, v51, 0);
    flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)&v62, 0xCu, v49, 0);
    flatbuffers::FlatBufferBuilder::AddStruct<FBSave::Coord3>(
      (flatbuffers::FlatBufferBuilder *)&v62,
      6u,
      (const unsigned __int8 *)v60);
    flatbuffers::FlatBufferBuilder::AddElement<int>((flatbuffers::FlatBufferBuilder *)&v62, 4u, v43, 0);
    LODWORD(v27) = &v62;
    HIDWORD(v27) = 10;
    flatbuffers::FlatBufferBuilder::AddElement<signed char>(v27, v47, 0);
    HIDWORD(v28) = 8;
    LODWORD(v28) = &v62;
    flatbuffers::FlatBufferBuilder::AddElement<signed char>(v28, v45, 0);
    v29 = flatbuffers::FlatBufferBuilder::EndTable((char **)&v62, v23, 9);
    v61[0] = v29;
    if ( v55 == v56 )
    {
      std::vector<flatbuffers::Offset<FBSave::WorldMap>>::_M_emplace_back_aux<flatbuffers::Offset<FBSave::WorldMap> const&>(
        (int *)&v54,
        v61);
    }
    else
    {
      if ( v55 != nullptr )
        *v55 = v29;
      ++v55;
    }
  }
  v41 = v54;
  v30 = ((char *)v55 - (_BYTE *)v54) >> 2;
  flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)&v62, 4 * v30, 4u);
  flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)&v62, 4 * v30, 4u);
  v31 = v30;
  while ( v31 != 0 )
  {
    v32 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v62, v41[--v31]);
    flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v62, v32);
  }
  v33 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v62, v30);
  v34 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v63);
  if ( v33 != 0 )
  {
    v36 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v62, v33);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v62, 4u, v36, 0);
  }
  v35 = flatbuffers::FlatBufferBuilder::EndTable((char **)&v62, v34, 1);
  flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)&v62, 4u, v65);
  v37 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)&v62, v35);
  flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)&v62, v37);
  v38 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v63);
  j_memcpy(&v66[533], v64, v38);
  v66[532] = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)v63);
  CSMgr::saveOWGlobal(g_CSMgr, **((_DWORD **)this + 1));
  if ( v57 != nullptr )
    operator delete(v57);
  if ( v54 != nullptr )
    operator delete(v54);
  flatbuffers::FlatBufferBuilder::~FlatBufferBuilder(&v62);
}


//======================================================================
// WorldManager::save(void)
// address: 0x002F1A54   size: 0x28 (40 bytes)
//======================================================================
__int64 __fastcall WorldManager::save(__int64 this)
{
  int v1; // r4
  __int64 v2; // r0
  __int64 v4; // [sp+0h] [bp-8h] BYREF

  v4 = this;
  v1 = this;
  WorldManager::saveGlobal((WorldManager *)this);
  HIDWORD(v4) = *(_DWORD *)(v1 + 40);
  while ( HIDWORD(v4) != v1 + 32 )
  {
    LODWORD(v2) = *(_DWORD *)(HIDWORD(v4) + 20);
    HIDWORD(v2) = 1;
    World::saveChunks(v2);
    sub_2F09EE((_DWORD *)&v4 + 1);
  }
  return v4;
}


//======================================================================
// WorldManager::tick(void)
// address: 0x002F1B2C   size: 0xC0 (192 bytes)
//======================================================================
__int64 __fastcall WorldManager::tick(__int64 this)
{
  WorldManager *v1; // r4
  int v2; // r3
  int v3; // r5
  ClientActorMgr **v4; // r6
  int v5; // r3
  int v6; // r5
  unsigned int i; // r5
  int v8; // r3
  unsigned int v9; // r2
  int v10; // r6
  __int64 v12; // [sp+0h] [bp-8h] BYREF

  v12 = this;
  v1 = (WorldManager *)this;
  v2 = *(_DWORD *)(this + 56) + *(_DWORD *)(this + 60);
  if ( v2 > 23999 )
    v2 = 0;
  *(_DWORD *)(this + 56) = v2;
  if ( *(_DWORD *)(this + 56) % 100 == 0 )
    WorldManager::saveGlobal((WorldManager *)this);
  v3 = 1;
  LODWORD(v12) = *((_DWORD *)v1 + 10);
  while ( (WorldManager *)v12 != (WorldManager *)((char *)v1 + 32) )
  {
    v4 = *(ClientActorMgr ***)(v12 + 20);
    (*((void (__fastcall **)(ClientActorMgr **))*v4 + 3))(v4);
    v3 &= -(ClientActorMgr::areAllPlayersAsleep(v4[33]) != 0);
    sub_2F09EE(&v12);
  }
  if ( v3 != 0 )
  {
    v5 = *((_DWORD *)v1 + 10);
    *((_DWORD *)v1 + 14) = *((_DWORD *)v1 + 14) + 24000 - (*((_DWORD *)v1 + 14) + 24000) % 24000;
    HIDWORD(v12) = v5;
    while ( (WorldManager *)HIDWORD(v12) != (WorldManager *)((char *)v1 + 32) )
    {
      v6 = *(_DWORD *)(HIDWORD(v12) + 20);
      ClientActorMgr::wakeAllPlayers(*(ClientPlayer **)(v6 + 132));
      Environment::resetRainThunder(*(Environment **)(v6 + 28));
      sub_2F09EE((_DWORD *)&v12 + 1);
    }
  }
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)v1 + 16);
    v9 = (*((_DWORD *)v1 + 17) - v8) >> 3;
    if ( i >= v9 )
      break;
    v10 = v8 + 8 * i;
    WorldManager::doActualTeleport(v1, *(ClientPlayer **)v10, *(_DWORD *)(v10 + 4));
    ClientActor::release(*(ClientActor **)v10);
  }
  if ( v9 != 0 )
    *((_DWORD *)v1 + 17) = v8;
  return v12;
}


//======================================================================
// WorldManager::teleportPlayer(ClientPlayer *,int)
// address: 0x002F1BF4   size: 0x82 (130 bytes)
//======================================================================
__int64 __fastcall WorldManager::teleportPlayer(__int64 this, int a2)
{
  _DWORD *v4; // r3
  unsigned int v5; // r0
  unsigned int v6; // r5
  _DWORD *v7; // r3
  void *v8; // r0
  __int64 v10; // [sp+0h] [bp-Ch]

  v10 = this;
  ClientActor::addRef((ClientActor *)HIDWORD(this));
  v4 = *(_DWORD **)(this + 68);
  if ( v4 == *(_DWORD **)(this + 72) )
  {
    v5 = std::vector<WorldManager::TeleportInfo>::_M_check_len(
           (_DWORD *)(this + 64),
           1u,
           (int)"vector::_M_emplace_back_aux");
    HIDWORD(v10) = 8 * v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x1FFFFFFF )
        sub_3BCEB4(v5);
      v5 = operator new(HIDWORD(v10));
    }
    v6 = v5;
    v7 = (_DWORD *)(v5 + 8 * ((*(_DWORD *)(this + 68) - *(_DWORD *)(this + 64)) >> 3));
    if ( v7 != nullptr )
    {
      *v7 = HIDWORD(this);
      v7[1] = a2;
    }
    std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<WorldManager::TeleportInfo>(
      *(void **)(this + 64),
      *(_DWORD *)(this + 68),
      (void *)v5);
    v8 = *(void **)(this + 64);
    if ( v8 != nullptr )
      operator delete(v8);
    *(_DWORD *)(this + 64) = v6;
    *(_DWORD *)(this + 68) = HIDWORD(this);
    *(_DWORD *)(this + 72) = v6 + HIDWORD(v10);
  }
  else
  {
    if ( v4 != nullptr )
    {
      *v4 = HIDWORD(this);
      v4[1] = a2;
    }
    *(_DWORD *)(this + 68) += 8;
  }
  return v10;
}

