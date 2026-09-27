// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldContainerMgr

//======================================================================
// WorldContainerMgr::WorldContainerMgr(World *)
// address: 0x002F97FC   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN17WorldContainerMgrC2EP5World'
void __fastcall WorldContainerMgr::WorldContainerMgr(WorldContainerMgr *this, World *a2)
{
  void *v3; // r0
  int v4; // r3

  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = a2;
  *((_DWORD *)this + 3) = 257;
  v3 = (void *)operator new[](0x404u);
  v4 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 2) = v3;
  j_memset(v3, 0, 4 * v4);
  g_WorldCTMgr = (int)this;
}


//======================================================================
// WorldContainerMgr::~WorldContainerMgr()
// address: 0x002F9834   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN17WorldContainerMgrD2Ev'
void __fastcall WorldContainerMgr::~WorldContainerMgr(WorldContainerMgr *this)
{
  unsigned int i; // r5
  _DWORD *v3; // r0
  int v4; // r6
  _DWORD *j; // r0
  _DWORD *v6; // r7

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD **)this + 2);
    if ( i >= *((_DWORD *)this + 3) )
      break;
    v4 = 4 * i;
    for ( j = (_DWORD *)v3[i]; j != nullptr; j = v6 )
    {
      v6 = (_DWORD *)j[5];
      operator delete(j);
    }
    *(_DWORD *)(*((_DWORD *)this + 2) + v4) = 0;
  }
  *((_DWORD *)this + 4) = 0;
  if ( v3 != nullptr )
    operator delete[](v3);
}


//======================================================================
// WorldContainerMgr::getContainer(WCoord const&)
// address: 0x002F9CF4   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall WorldContainerMgr::getContainer(WorldContainerMgr *this, const WCoord *a2)
{
  _DWORD *result; // r0

  result = Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::find((int)this + 4, a2);
  if ( result != nullptr )
    return (_DWORD *)result[4];
  return result;
}


//======================================================================
// WorldContainerMgr::getFurnace(int,int,int)
// address: 0x002F9D04   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall WorldContainerMgr::getFurnace(WorldContainerMgr *this, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  return WorldContainerMgr::getContainer(this, (const WCoord *)v5);
}


//======================================================================
// WorldContainerMgr::getStorageBox(int,int,int)
// address: 0x002F9D16   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall WorldContainerMgr::getStorageBox(WorldContainerMgr *this, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  return WorldContainerMgr::getContainer(this, (const WCoord *)v5);
}


//======================================================================
// WorldContainerMgr::getComparator(WCoord const&)
// address: 0x002F9D28   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall WorldContainerMgr::getComparator(WorldContainerMgr *this, const WCoord *a2)
{
  _DWORD *result; // r0

  result = Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::find((int)this + 4, a2);
  if ( result != nullptr )
  {
    result = (_DWORD *)result[4];
    if ( result != nullptr )
      return _dynamic_cast(
               result,
               (const struct __class_type_info *)&`typeinfo for'WorldContainer,
               (const struct __class_type_info *)&`typeinfo for'WorldValueContainer,
               0);
  }
  return result;
}


//======================================================================
// WorldContainerMgr::destroyContainer(WCoord const&)
// address: 0x002F9DAE   size: 0x3A (58 bytes)
//======================================================================
__int64 __fastcall WorldContainerMgr::destroyContainer(World **this, const WCoord *a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  WorldContainer *v6; // r5
  Chunk *Chunk; // r0
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  HIDWORD(v9) = this + 1;
  v4 = Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::find((int)(this + 1), a2);
  v5 = v4;
  if ( v4 != nullptr )
  {
    v6 = (WorldContainer *)v4[4];
    (*(void (__fastcall **)(WorldContainer *))(*(_DWORD *)v6 + 44))(v6);
    Chunk = (Chunk *)World::getChunk(*this, a2);
    if ( Chunk != nullptr )
      Chunk::removeContainer(Chunk, v6);
    Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::erase((_DWORD *)HIDWORD(v9), v5);
  }
  return v9;
}


//======================================================================
// WorldContainerMgr::removeFurnace(int,int,int)
// address: 0x002F9DE8   size: 0x12 (18 bytes)
//======================================================================
__int64 __fastcall WorldContainerMgr::removeFurnace(World **this, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  return WorldContainerMgr::destroyContainer(this, (const WCoord *)v5);
}


//======================================================================
// WorldContainerMgr::removeStorageBox(int,int,int)
// address: 0x002F9DFA   size: 0x12 (18 bytes)
//======================================================================
__int64 __fastcall WorldContainerMgr::removeStorageBox(World **this, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  return WorldContainerMgr::destroyContainer(this, (const WCoord *)v5);
}


//======================================================================
// WorldContainerMgr::removeContainerByChunk(WorldContainer *)
// address: 0x002F9E0C   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall WorldContainerMgr::removeContainerByChunk(WorldContainerMgr *this, WorldContainer *a2)
{
  _DWORD *v2; // r6
  _DWORD *result; // r0
  _DWORD *v4; // r4
  _DWORD *v5; // r5

  v2 = (_DWORD *)((char *)this + 4);
  result = Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::find((int)this + 4, (_DWORD *)a2 + 4);
  v4 = result;
  if ( result != nullptr )
  {
    v5 = (_DWORD *)result[4];
    (*(void (__fastcall **)(_DWORD *))(*v5 + 44))(v5);
    v5[3] = 0;
    return (_DWORD *)Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::erase(v2, v4);
  }
  return result;
}


//======================================================================
// WorldContainerMgr::updateTick(void)
// address: 0x002F9E64   size: 0x2E (46 bytes)
//======================================================================
int __fastcall WorldContainerMgr::updateTick(WorldContainerMgr *this)
{
  char *v1; // r6
  char *v2; // r0
  int i; // r1
  int result; // r0
  int v5; // r4
  _DWORD *v6; // r5
  int v7; // r3
  _BYTE *v8; // r5

  v1 = (char *)this + 4;
  v2 = (char *)this + 4;
  for ( i = 0; ; i = v5 )
  {
    result = Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::iterate((int)v2, i);
    v5 = result;
    if ( result == 0 )
      break;
    v6 = *(_DWORD **)(result + 16);
    v7 = *v6;
    v8 = v6 + 10;
    (*(void (__fastcall **)(_DWORD))(v7 + 40))(*(_DWORD *)(result + 16));
    if ( *v8 != 0 )
      *v8 = 0;
    v2 = v1;
  }
  return result;
}


//======================================================================
// WorldContainerMgr::spawnContainer(WorldContainer *,bool)
// address: 0x002FA57C   size: 0x2E (46 bytes)
//======================================================================
unsigned int __fastcall WorldContainerMgr::spawnContainer(World **this, WorldContainer *a2, bool a3)
{
  int *v3; // r7
  unsigned int result; // r0
  unsigned int v7; // r6

  v3 = (int *)((char *)a2 + 16);
  result = World::getChunk(*this, (WorldContainer *)((char *)a2 + 16));
  v7 = result;
  if ( result != 0 )
  {
    Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::insert(this + 1, v3)[4] = a2;
    result = Chunk::addContainer(__SPAIR64__((unsigned int)a2, v7));
    *((_DWORD *)a2 + 3) = *this;
  }
  return result;
}


//======================================================================
// WorldContainerMgr::spawnStorageBox(WCoord const&,long long,int,bool)
// address: 0x002FA5AA   size: 0x38 (56 bytes)
//======================================================================
int __fastcall WorldContainerMgr::spawnStorageBox(World **this, const WCoord *a2, __int64 a3, int a4, bool a5)
{
  int v7; // r6

  v7 = operator new(0x650u);
  WorldStorageBox::WorldStorageBox((WorldStorageBox *)v7, a2);
  *(_QWORD *)(v7 + 32) = a3;
  *(_DWORD *)(v7 + 28) = a4;
  WorldContainerMgr::spawnContainer(this, (WorldContainer *)v7, a5);
  return v7;
}


//======================================================================
// WorldContainerMgr::addStorageBox(int,int,int)
// address: 0x002FA5EC   size: 0x3C (60 bytes)
//======================================================================
int __fastcall WorldContainerMgr::addStorageBox(World **this, int a2, int a3, int a4)
{
  World *v5; // r0
  __int64 wid; // r4
  int Uin; // r0
  _DWORD v9[4]; // [sp+Ch] [bp-10h] BYREF

  v5 = *this;
  v9[1] = a3;
  v9[2] = a4;
  v9[0] = a2;
  wid = World::get_wid(v5, a2, a3, a4);
  Uin = ClientAccountMgr::getUin(*(ClientAccountMgr **)(Ogre::Singleton<ClientManager>::ms_Singleton + 56));
  return WorldContainerMgr::spawnStorageBox(this, (const WCoord *)v9, wid, Uin, true);
}


//======================================================================
// WorldContainerMgr::spawnFurnace(WCoord const&,long long,int,bool)
// address: 0x002FA62C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall WorldContainerMgr::spawnFurnace(World **this, const WCoord *a2, __int64 a3, int a4, bool a5)
{
  int v6; // r6

  v6 = operator new(0xD8u);
  WorldFurnace::WorldFurnace((WorldFurnace *)v6, a2);
  *(_QWORD *)(v6 + 32) = a3;
  *(_DWORD *)(v6 + 28) = a4;
  WorldContainerMgr::spawnContainer(this, (WorldContainer *)v6, a5);
  return v6;
}


//======================================================================
// WorldContainerMgr::addFurnace(int,int,int)
// address: 0x002FA66C   size: 0x3C (60 bytes)
//======================================================================
int __fastcall WorldContainerMgr::addFurnace(World **this, int a2, int a3, int a4)
{
  World *v5; // r0
  __int64 wid; // r4
  int Uin; // r0
  _DWORD v9[4]; // [sp+Ch] [bp-10h] BYREF

  v5 = *this;
  v9[1] = a3;
  v9[2] = a4;
  v9[0] = a2;
  wid = World::get_wid(v5, a2, a3, a4);
  Uin = ClientAccountMgr::getUin(*(ClientAccountMgr **)(Ogre::Singleton<ClientManager>::ms_Singleton + 56));
  return WorldContainerMgr::spawnFurnace(this, (const WCoord *)v9, wid, Uin, true);
}


//======================================================================
// WorldContainerMgr::spawnComparator(WCoord const&,long long,int,bool)
// address: 0x002FA6AC   size: 0x60 (96 bytes)
//======================================================================
int __fastcall WorldContainerMgr::spawnComparator(World **this, const WCoord *a2, __int64 a3, int a4, bool a5)
{
  int v7; // r0
  int v8; // r6

  v7 = operator new(0x38u);
  *(_DWORD *)(v7 + 4) = 0;
  *(_BYTE *)(v7 + 8) = 0;
  v8 = v7;
  *(_DWORD *)v7 = &off_45C270;
  *(_DWORD *)(v7 + 16) = *(_DWORD *)a2;
  *(_DWORD *)(v7 + 20) = *((_DWORD *)a2 + 1);
  *(_DWORD *)(v7 + 24) = *((_DWORD *)a2 + 2);
  *(_BYTE *)(v7 + 40) = 0;
  *(_DWORD *)(v7 + 44) = 0;
  *(_DWORD *)(v7 + 48) = 0;
  *(_QWORD *)(v7 + 32) = a3;
  *(_DWORD *)v7 = &off_462800;
  *(_DWORD *)(v7 + 28) = a4;
  WorldContainerMgr::spawnContainer(this, (WorldContainer *)v7, a5);
  return v8;
}


//======================================================================
// WorldContainerMgr::addContainerByChunk(WorldContainer *)
// address: 0x002FA714   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall WorldContainerMgr::addContainerByChunk(WorldContainerMgr *this, WorldContainer *a2)
{
  _DWORD *result; // r0

  *((_DWORD *)a2 + 3) = *(_DWORD *)this;
  result = Ogre::HashTable<WCoord,WorldContainer *,WCoordHashCoder>::insert((_DWORD *)this + 1, (int *)a2 + 4);
  result[4] = a2;
  return result;
}


//======================================================================
// WorldContainerMgr::generateChestItems(std::vector<GenerateItemDesc,std::allocator<GenerateItemDesc>> &,int,ChunkRandGen *,int)
// address: 0x002FA908   size: 0x17E (382 bytes)
//======================================================================
void __fastcall WorldContainerMgr::generateChestItems(int a1, int a2, unsigned __int16 *a3, int a4)
{
  unsigned __int16 *DefaultRandGen; // r4
  int v7; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  _DWORD *v10; // r5
  int v11; // r1
  int v12; // r5
  int v13; // r6
  _DWORD *v14; // r0
  int v15; // r3
  int v16; // r0
  int i; // r6
  int v18; // r5
  int j; // r7
  int v20; // r0
  int v21; // r5
  int v22; // [sp+8h] [bp-33Ch]
  int v23; // [sp+Ch] [bp-338h]
  int v24; // [sp+Ch] [bp-338h]
  int v26; // [sp+14h] [bp-330h]
  int v27; // [sp+18h] [bp-32Ch] BYREF
  int v28; // [sp+1Ch] [bp-328h] BYREF
  _DWORD v29[100]; // [sp+20h] [bp-324h] BYREF
  int v30[101]; // [sp+1B0h] [bp-194h] BYREF

  DefaultRandGen = a3;
  if ( (*(_DWORD *)(a1 + 4) - *(_DWORD *)a1) >> 3 != 0 )
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1;
  if ( a3 == nullptr )
    DefaultRandGen = (unsigned __int16 *)GetDefaultRandGen();
  if ( a4 != 0 )
  {
    v11 = 100 * a2;
    v12 = 0;
    v24 = v11;
    do
    {
      v13 = Ogre::Singleton<DefManager>::ms_Singleton;
      v28 = v24 + 1 + v12;
      v14 = std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::find(
              Ogre::Singleton<DefManager>::ms_Singleton + 772,
              &v28);
      if ( v14 == (_DWORD *)(v13 + 776) )
        break;
      if ( v14 == (_DWORD *)-20 )
        break;
      v15 = v12;
      v29[v15] = v14 + 5;
      ++v12;
      v30[v15] = v14[7];
    }
    while ( v12 != 100 );
    v16 = SelectFromOddsArray(v30, v12, (ChunkRandGen *)DefaultRandGen, -1);
    if ( v16 < 0 )
      return;
    v23 = 1;
    v29[0] = v29[v16];
  }
  else
  {
    v26 = 100 * a2;
    v22 = 1;
    v23 = 0;
    do
    {
      v7 = Ogre::Singleton<DefManager>::ms_Singleton;
      v27 = v22 + v26;
      v8 = std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::find(
             Ogre::Singleton<DefManager>::ms_Singleton + 772,
             &v27);
      v9 = v8;
      if ( v8 == (_DWORD *)(v7 + 776) )
        break;
      v10 = v8 + 5;
      if ( v8 == (_DWORD *)-20 )
        break;
      ChunkRandGen::_dorand48(DefaultRandGen);
      if ( (signed int)(((DefaultRandGen[2] << 16) | (unsigned int)DefaultRandGen[1]) % 0x2710) < v9[7] )
        v29[v23++] = v10;
      ++v22;
    }
    while ( v22 != 101 );
  }
  for ( i = 0; i < v23; ++i )
  {
    v18 = v29[i];
    if ( *(_DWORD *)(v18 + 12) != 0 )
    {
      v20 = SelectFromOddsArray((const int *)(v18 + 96), 10, (ChunkRandGen *)DefaultRandGen, -1);
      if ( v20 >= 0 )
      {
        v21 = v18 + 4 * v20;
        v30[0] = *(_DWORD *)(v21 + 16);
        v30[1] = *(_DWORD *)(v21 + 56);
        std::vector<GenerateItemDesc>::push_back((void **)a1, v30);
      }
    }
    else
    {
      for ( j = 10; j != 0; --j )
      {
        if ( *(_DWORD *)(v18 + 16) == 0 )
          break;
        ChunkRandGen::_dorand48(DefaultRandGen);
        if ( (signed int)(((DefaultRandGen[2] << 16) | (unsigned int)DefaultRandGen[1]) % 0x2710) < *(_DWORD *)(v18 + 96) )
        {
          v30[0] = *(_DWORD *)(v18 + 16);
          v30[1] = *(_DWORD *)(v18 + 56);
          std::vector<GenerateItemDesc>::push_back((void **)a1, v30);
        }
        v18 += 4;
      }
    }
  }
}


//======================================================================
// WorldContainerMgr::addDungeonChest(WCoord const&,int,ChunkRandGen *)
// address: 0x002FAA94   size: 0x98 (152 bytes)
//======================================================================
WorldStorageBox *__fastcall WorldContainerMgr::addDungeonChest(
        WorldContainerMgr *this,
        const WCoord *a2,
        int a3,
        ChunkRandGen *a4)
{
  unsigned __int16 *DefaultRandGen; // r6
  int v8; // r2
  unsigned int i; // r7
  int v10; // r1
  WorldStorageBox *StorageBox; // [sp+4h] [bp-20h]
  void *v13; // [sp+8h] [bp-1Ch] BYREF
  int v14; // [sp+Ch] [bp-18h]
  int v15; // [sp+10h] [bp-14h]
  void *v16[4]; // [sp+14h] [bp-10h] BYREF

  DefaultRandGen = (unsigned __int16 *)a4;
  if ( a4 == nullptr )
    DefaultRandGen = (unsigned __int16 *)GetDefaultRandGen();
  StorageBox = (WorldStorageBox *)WorldContainerMgr::getStorageBox(
                                    this,
                                    *(_DWORD *)a2,
                                    *((_DWORD *)a2 + 1),
                                    *((_DWORD *)a2 + 2));
  v14 = 0;
  v15 = 0;
  v13 = nullptr;
  WorldContainerMgr::generateChestItems((int)&v13, a3, DefaultRandGen, 0);
  RandomPermutation::RandomPermutation((RandomPermutation *)v16, 20, v8);
  for ( i = 0; i < (v14 - (int)v13) >> 3; ++i )
  {
    v10 = RandomPermutation::popNumber((RandomPermutation *)v16, (ChunkRandGen *)DefaultRandGen);
    if ( v10 < 0 )
      break;
    WorldStorageBox::setItem(StorageBox, v10, *((_DWORD *)v13 + 2 * i), *((_DWORD *)v13 + 2 * i + 1));
  }
  std::_Vector_base<int>::~_Vector_base(v16);
  if ( v13 != nullptr )
    operator delete(v13);
  return StorageBox;
}

