// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldFurnace

//======================================================================
// WorldFurnace::getObjType(void)
// address: 0x002F8EEC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WorldFurnace::getObjType(WorldFurnace *this)
{
  return 7;
}


//======================================================================
// WorldFurnace::~WorldFurnace()
// address: 0x002F8EFC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12WorldFurnaceD1Ev'
void __fastcall WorldFurnace::~WorldFurnace(WorldFurnace *this)
{
  *(_DWORD *)this = &off_45C248;
}


//======================================================================
// WorldFurnace::index2Grid(int)
// address: 0x002F8F0C   size: 0xE (14 bytes)
//======================================================================
char *__fastcall WorldFurnace::index2Grid(WorldFurnace *this, int a2)
{
  return (char *)this + 52 * (a2 - *((_DWORD *)this + 1)) + 44;
}


//======================================================================
// WorldFurnace::onDetachUI(void)
// address: 0x002F8F1A   size: 0x6 (6 bytes)
//======================================================================
int __fastcall WorldFurnace::onDetachUI(int this)
{
  *(_BYTE *)(this + 8) = 0;
  return this;
}


//======================================================================
// WorldFurnace::canPutItem(int)
// address: 0x002F8F20   size: 0xA (10 bytes)
//======================================================================
bool __fastcall WorldFurnace::canPutItem(WorldFurnace *this, int a2)
{
  return a2 != 9002;
}


//======================================================================
// WorldFurnace::~WorldFurnace()
// address: 0x002F8FAC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WorldFurnace::~WorldFurnace(WorldFurnace *this)
{
  WorldFurnace::~WorldFurnace(this);
  operator delete(this);
}


//======================================================================
// WorldFurnace::onAttachUI(void)
// address: 0x002F9054   size: 0x2C (44 bytes)
//======================================================================
int __fastcall WorldFurnace::onAttachUI(WorldFurnace *this)
{
  *((_BYTE *)this + 8) = 1;
  GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 9000);
  GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 9001);
  GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 9002);
  return GameEventQue::postFurnaceProgress((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
}


//======================================================================
// WorldFurnace::WorldFurnace(void)
// address: 0x002F91B0   size: 0x64 (100 bytes)
//======================================================================
// Alternative name is '_ZN12WorldFurnaceC2Ev'
void __fastcall WorldFurnace::WorldFurnace(WorldFurnace *this)
{
  int v1; // r5
  BackPackGrid *v3; // r6

  *((_DWORD *)this + 1) = 9000;
  v1 = 0;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_BYTE *)this + 40) = 0;
  *(_DWORD *)this = &off_462870;
  v3 = (WorldFurnace *)((char *)this + 44);
  do
  {
    *(_DWORD *)v3 = *((_DWORD *)this + 1) + v1;
    SetBackPackGrid(v3, 0, 0, -1, nullptr, 1, 0);
    ++v1;
    v3 = (BackPackGrid *)((char *)v3 + 52);
  }
  while ( v1 != 3 );
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 1;
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 212) = 0;
}


//======================================================================
// WorldFurnace::WorldFurnace(WCoord const&)
// address: 0x002F9228   size: 0x78 (120 bytes)
//======================================================================
// Alternative name is '_ZN12WorldFurnaceC2ERK6WCoord'
void __fastcall WorldFurnace::WorldFurnace(WorldFurnace *this, const WCoord *a2)
{
  int v2; // r5
  BackPackGrid *v4; // r6

  *((_DWORD *)this + 1) = 9000;
  v2 = 0;
  *((_BYTE *)this + 8) = 0;
  *(_DWORD *)this = &off_45C270;
  *((_DWORD *)this + 4) = *(_DWORD *)a2;
  *((_DWORD *)this + 5) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 2);
  *((_BYTE *)this + 40) = 0;
  v4 = (WorldFurnace *)((char *)this + 44);
  *(_DWORD *)this = &off_462870;
  do
  {
    *(_DWORD *)v4 = *((_DWORD *)this + 1) + v2;
    SetBackPackGrid(v4, 0, 0, -1, nullptr, 1, 0);
    ++v2;
    v4 = (BackPackGrid *)((char *)v4 + 52);
  }
  while ( v2 != 3 );
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 1;
  *((_DWORD *)this + 52) = 0;
  *((_BYTE *)this + 212) = 0;
}


//======================================================================
// WorldFurnace::onHeatOnOff(void)
// address: 0x002F92B8   size: 0x4E (78 bytes)
//======================================================================
unsigned int *__fastcall WorldFurnace::onHeatOnOff(WorldFurnace *this, int a2, int a3)
{
  const WCoord *v3; // r5
  unsigned int **v4; // r6
  int BlockData; // r0
  char v6; // r1
  int v7; // r3
  unsigned int *result; // r0
  int v9; // r1
  World *v10; // r0
  int v11; // r2

  v3 = (WorldFurnace *)((char *)this + 16);
  v4 = (unsigned int **)((char *)this + 200);
  BlockData = World::getBlockData(*(World **)g_WorldCTMgr, (WorldFurnace *)((char *)this + 16), a3, g_WorldCTMgr);
  v6 = BlockData;
  v7 = BlockData;
  result = *v4;
  v9 = v6 & 4;
  if ( *v4 == nullptr )
  {
    if ( v9 == 0 )
      return result;
    v10 = *(World **)g_WorldCTMgr;
    v11 = v7 & 3;
    return World::setBlockData(v10, v3, v11, 2);
  }
  if ( (int)result > 0 && v9 == 0 )
  {
    v11 = v7 | 4;
    v10 = *(World **)g_WorldCTMgr;
    return World::setBlockData(v10, v3, v11, 2);
  }
  return result;
}


//======================================================================
// WorldFurnace::dropItems(void)
// address: 0x002F93BC   size: 0x22 (34 bytes)
//======================================================================
float __fastcall WorldFurnace::dropItems(WorldFurnace *this)
{
  WorldContainer::dropOneItem(*(float *)&this, (WorldFurnace *)((char *)this + 44));
  WorldContainer::dropOneItem(*(float *)&this, (WorldFurnace *)((char *)this + 96));
  return WorldContainer::dropOneItem(*(float *)&this, (WorldFurnace *)((char *)this + 148));
}


//======================================================================
// WorldFurnace::getHeatPercent(void)
// address: 0x002F93FC   size: 0x22 (34 bytes)
//======================================================================
float __fastcall WorldFurnace::getHeatPercent(WorldFurnace *this)
{
  return (float)*((int *)this + 50) / (float)*((int *)this + 51);
}


//======================================================================
// WorldFurnace::getMeltTicksPercent(void)
// address: 0x002F9420   size: 0x12 (18 bytes)
//======================================================================
float __fastcall WorldFurnace::getMeltTicksPercent(WorldFurnace *this)
{
  return (float)*((int *)this + 52) / 200.0;
}


//======================================================================
// WorldFurnace::meltOnce(void)
// address: 0x002F998C   size: 0xB0 (176 bytes)
//======================================================================
int *__fastcall WorldFurnace::meltOnce(WorldFurnace *this)
{
  int *result; // r0
  int *v3; // r6
  int v4; // r1
  BackPackGrid *v5; // r0

  result = DefDataTable<FurnaceDef>::GetRecord(
             Ogre::Singleton<DefManager>::ms_Singleton + 592,
             **((_DWORD **)this + 12));
  v3 = result;
  if ( result != nullptr )
  {
    (*(void (__fastcall **)(int, int, int, int, int))(*(_DWORD *)g_pPlayerCtrl + 208))(
      g_pPlayerCtrl,
      1,
      3,
      result[10],
      1);
    v4 = v3[10];
    v5 = (WorldFurnace *)((char *)this + 148);
    if ( *((_DWORD *)this + 42) != 0 )
      SetBackPackGrid(v5, v4, *((_DWORD *)this + 39) + 1, -1, nullptr, 1, 0);
    else
      SetBackPackGrid(v5, v4, 1, -1, nullptr, 1, 0);
    SetBackPackGridWithClear((WorldFurnace *)((char *)this + 44), *v3, *((_DWORD *)this + 13) - 1, -1, nullptr, 1, 0);
    if ( *((_DWORD *)this + 13) == 0 )
      *((_BYTE *)this + 212) = 0;
    *((_DWORD *)this + 52) = 0;
    (*(void (__fastcall **)(WorldFurnace *, int))(*(_DWORD *)this + 12))(this, 9002);
    return (int *)(*(int (__fastcall **)(WorldFurnace *, int))(*(_DWORD *)this + 12))(this, 9000);
  }
  return result;
}


//======================================================================
// WorldFurnace::addHeatOnce(void)
// address: 0x002F9A4C   size: 0x9C (156 bytes)
//======================================================================
_DWORD *__fastcall WorldFurnace::addHeatOnce(_DWORD *this)
{
  _DWORD *v1; // r4
  int *v2; // r6
  _DWORD *v3; // r7
  _DWORD *v4; // r5
  int v5; // r3
  int v6; // [sp+10h] [bp-Ch]
  int v7; // [sp+14h] [bp-8h]

  v1 = this;
  if ( (int)*(this + 13) > 0 )
  {
    v6 = *(this + 26);
    if ( v6 <= 0
      || (v2 = (int *)*(this + 25),
          v7 = Ogre::Singleton<DefManager>::ms_Singleton + 592,
          this = DefDataTable<FurnaceDef>::GetRecord(Ogre::Singleton<DefManager>::ms_Singleton + 592, *v2),
          v3 = (_DWORD *)v1[38],
          v4 = this,
          v3 != nullptr)
      && v1[42] != 0
      && (this = DefDataTable<FurnaceDef>::GetRecord(v7, *(_DWORD *)v1[12]), *v3 != *(this + 10)) )
    {
      *((_BYTE *)v1 + 212) = 0;
    }
    else if ( v4 != nullptr )
    {
      v5 = v4[9];
      if ( v5 != 0 )
      {
        v1[50] = v5;
        v1[51] = v4[9];
        SetBackPackGridWithClear((BackPackGrid *)(v1 + 24), *v2, v6 - 1, -1, nullptr, 1, 0);
        return (_DWORD *)(*(int (__fastcall **)(_DWORD *, int))(*v1 + 12))(v1, 9001);
      }
    }
  }
  return this;
}


//======================================================================
// WorldFurnace::updateTick(void)
// address: 0x002F9AF0   size: 0xA0 (160 bytes)
//======================================================================
int *__fastcall WorldFurnace::updateTick(int *this, int a2)
{
  _DWORD *v2; // r6
  int v3; // r2
  int v4; // r7
  int *v5; // r4
  int *v6; // r5
  int v7; // r3
  int v8; // r3
  int v9; // [sp+4h] [bp-18h]
  int v10; // [sp+8h] [bp-14h]
  unsigned __int8 *v11; // [sp+Ch] [bp-10h]
  int v12; // [sp+10h] [bp-Ch]
  int v13; // [sp+14h] [bp-8h]

  v9 = *((unsigned __int8 *)this + 212);
  v2 = this + 52;
  v11 = (unsigned __int8 *)(this + 53);
  v12 = *(this + 50);
  v3 = *(this + 52);
  v4 = 0;
  v13 = *(this + 51);
  v5 = this;
  v10 = v3;
  if ( *((_BYTE *)this + 212) != 0 )
  {
    *v2 = v3 + 1;
    v4 = 1;
    if ( v3 + 1 > 199 )
      this = WorldFurnace::meltOnce((WorldFurnace *)this);
  }
  v6 = v5 + 50;
  v7 = v5[50];
  if ( v7 > 0 )
  {
    v8 = v7 - 1;
    *v6 = v8;
    if ( v8 == 0 )
      WorldFurnace::addHeatOnce(v5);
    WorldFurnace::onHeatOnOff((WorldFurnace *)v5, a2, v3);
  }
  else if ( v4 == 0 )
  {
LABEL_10:
    if ( *v11 != v9 || v10 != *v2 || v12 != *v6 || v13 != v5[51] )
      *((_BYTE *)v5 + 40) = 1;
    return this;
  }
  this = (int *)GameEventQue::postFurnaceProgress((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
  goto LABEL_10;
}


//======================================================================
// WorldFurnace::afterChangeGrid(int)
// address: 0x002F9B94   size: 0xD2 (210 bytes)
//======================================================================
WorldFurnace *__fastcall WorldFurnace::afterChangeGrid(int **this, int a2)
{
  _DWORD *Record; // r0
  _DWORD *v4; // r3
  int v5; // r1
  int *v6; // r6
  WorldFurnace *v8; // [sp+0h] [bp-10h]

  v8 = (WorldFurnace *)this;
  if ( *((_BYTE *)this + 8) != 0 )
    GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, a2);
  if ( (int)*(this + 13) <= 0 )
    goto LABEL_19;
  Record = DefDataTable<FurnaceDef>::GetRecord(Ogre::Singleton<DefManager>::ms_Singleton + 592, **(this + 12));
  v4 = *(this + 38);
  if ( v4 != nullptr && *(this + 42) != nullptr )
  {
    if ( *v4 != Record[10] )
    {
LABEL_19:
      *((_BYTE *)this + 212) = 0;
      *(this + 52) = nullptr;
      GameEventQue::postFurnaceProgress((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
      goto LABEL_20;
    }
  }
  else if ( Record == nullptr )
  {
    goto LABEL_20;
  }
  v5 = Record[10];
  if ( v5 > 0 )
  {
    v6 = (int *)(this + 50);
    if ( (int)*(this + 50) > 0 || (int)*(this + 26) > 0 )
    {
      if ( v4 == nullptr || *(this + 42) == nullptr )
      {
        SetBackPackGrid((BackPackGrid *)(this + 37), v5, 1, -1, nullptr, 0, 0);
        GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 9002);
      }
      if ( *v6 == 0 )
        WorldFurnace::addHeatOnce(this);
      if ( *v6 > 0 )
        *((_BYTE *)this + 212) = 1;
    }
  }
LABEL_20:
  *((_BYTE *)this + 40) = 1;
  return v8;
}


//======================================================================
// WorldFurnace::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002FA1CA   size: 0x78 (120 bytes)
//======================================================================
int __fastcall WorldFurnace::save(WorldFurnace *this, const void **a2)
{
  char *v4; // r6
  int i; // r7
  int v6; // r0
  int v7; // r1
  unsigned int v8; // r0
  int ContainerFurnace; // r0
  unsigned int v11; // [sp+18h] [bp-1Ch]
  _DWORD v12[4]; // [sp+24h] [bp-10h] BYREF

  v11 = WorldContainer::saveContainerCommon(this, a2);
  memset(v12, 0, 12);
  v4 = (char *)this + 44;
  for ( i = 0; i != 3; ++i )
  {
    v6 = sub_2F9FC0((unsigned int)a2, (int)v4);
    v7 = i;
    v12[v7] = v6;
    v4 += 52;
  }
  v8 = flatbuffers::FlatBufferBuilder::CreateVector<flatbuffers::Offset<FBSave::ItemGrid>>(
         (flatbuffers::FlatBufferBuilder *)a2,
         (int)v12,
         3u);
  ContainerFurnace = FBSave::CreateContainerFurnace(
                       a2,
                       v11,
                       v8,
                       *((_DWORD *)this + 50),
                       *((_DWORD *)this + 51),
                       *((_DWORD *)this + 52),
                       *((_BYTE *)this + 212));
  return FBSave::CreateChunkContainer(a2, 3u, ContainerFurnace);
}


//======================================================================
// WorldFurnace::load(void const*)
// address: 0x002FA3C8   size: 0x98 (152 bytes)
//======================================================================
int __fastcall WorldFurnace::load(WorldFurnace *this, flatbuffers::Table *a2)
{
  flatbuffers::Table *v4; // r0
  int OptionalFieldOffset; // r0
  int v6; // r3
  _DWORD *v7; // r7
  int i; // r6
  int v9; // r0
  _DWORD *v10; // r1
  int v11; // r1
  int v12; // r2

  v4 = (flatbuffers::Table *)flatbuffers::Table::GetPointer<FBSave::ContainerCommon const*>(a2, 4u);
  WorldContainer::loadContainerCommon(this, v4);
  *((_DWORD *)this + 50) = flatbuffers::Table::GetField<int>(a2, 8u, 0);
  *((_DWORD *)this + 51) = flatbuffers::Table::GetField<int>(a2, 0xAu, 0);
  *((_DWORD *)this + 52) = flatbuffers::Table::GetField<int>(a2, 0xCu, 0);
  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xEu);
  v6 = 0;
  if ( OptionalFieldOffset != 0 )
    v6 = *((unsigned __int8 *)a2 + OptionalFieldOffset);
  *((_BYTE *)this + 212) = v6 != 0;
  v7 = (_DWORD *)((char *)this + 44);
  for ( i = 0; i != 12; i += 4 )
  {
    v9 = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
    if ( v9 != 0 )
      v9 += (int)a2 + *(_DWORD *)((char *)a2 + v9);
    v10 = (_DWORD *)(v9 + 4 + i);
    sub_2F98C4(v7, (flatbuffers::Table *)((char *)v10 + *v10));
    v7 += 13;
  }
  WorldFurnace::onHeatOnOff(this, v11, v12);
  return 1;
}

