// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChunkProvider

//======================================================================
// ChunkProvider::canProvideChunk(int,int)
// address: 0x00267088   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProvider::canProvideChunk(ChunkProvider *this, int a2, int a3)
{
  return 1;
}


//======================================================================
// ChunkProvider::hasSky(void)
// address: 0x0026708C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProvider::hasSky(ChunkProvider *this)
{
  return 1;
}


//======================================================================
// ChunkProvider::canRespawnHere(void)
// address: 0x00267090   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProvider::canRespawnHere(ChunkProvider *this)
{
  return 1;
}


//======================================================================
// ChunkProvider::getMinmapMaxY(void)
// address: 0x00267094   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProvider::getMinmapMaxY(ChunkProvider *this)
{
  return 255;
}


//======================================================================
// ChunkProvider::getBossInfo(WCoord &)
// address: 0x00267098   size: 0x4 (4 bytes)
//======================================================================
int ChunkProvider::getBossInfo()
{
  return 0;
}


//======================================================================
// ChunkProvider::getActualHeight(void)
// address: 0x0026709C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ChunkProvider::getActualHeight(ChunkProvider *this)
{
  return 256;
}


//======================================================================
// ChunkProvider::createBoss(void)
// address: 0x002670A2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ChunkProvider::createBoss(ChunkProvider *this)
{
  ;
}


//======================================================================
// ChunkProvider::getSpawnMinY(void)
// address: 0x002EA488   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProvider::getSpawnMinY(ChunkProvider *this)
{
  return 63;
}


//======================================================================
// ChunkProvider::provideChunk(int,int)
// address: 0x002EA48C   size: 0x86 (134 bytes)
//======================================================================
int __fastcall ChunkProvider::provideChunk(World **this, int a2, int a3)
{
  int result; // r0
  int v7; // r4
  unsigned __int16 *v8; // [sp+8h] [bp-Ch] BYREF
  void *v9; // [sp+Ch] [bp-8h] BYREF

  result = (*((int (__fastcall **)(World **))*this + 4))(this);
  if ( result != 0 )
  {
    (*((void (__fastcall **)(World **, unsigned __int16 **, void **, int, int))*this + 13))(this, &v8, &v9, a2, a3);
    v7 = operator new(0x59Cu);
    Chunk::Chunk((Chunk *)v7, *(this + 2), a2, a3, v8);
    j_memcpy((void *)(v7 + 1060), v9, 0x100u);
    Chunk::generateSkylightMap((Chunk *)v7);
    if ( (*((int (__fastcall **)(World **))*this + 5))(this) == 0 )
      Chunk::resetRelightChecks(v7);
    if ( v8 != nullptr )
      operator delete[](v8);
    if ( v9 != nullptr )
      operator delete[](v9);
    return v7;
  }
  return result;
}


//======================================================================
// ChunkProvider::canCoordBeSpawn(int,int)
// address: 0x002EA51C   size: 0x10 (16 bytes)
//======================================================================
bool __fastcall ChunkProvider::canCoordBeSpawn(World **this, int a2, int a3)
{
  return World::getFirstUncoveredBlock(*(this + 2), a2, a3) == 100;
}


//======================================================================
// ChunkProvider::~ChunkProvider()
// address: 0x002EA52C   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN13ChunkProviderD1Ev'
void __fastcall ChunkProvider::~ChunkProvider(void **this)
{
  int v2; // r0
  int v3; // r0
  void *v4; // r0

  *this = &off_461E90;
  operator delete(*(this + 3));
  v2 = (int)*(this + 1);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = (int)*(this + 6);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *(this + 7);
  if ( v4 != nullptr )
    operator delete(v4);
}


//======================================================================
// ChunkProvider::~ChunkProvider()
// address: 0x002EA56C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ChunkProvider::~ChunkProvider(void **this)
{
  ChunkProvider::~ChunkProvider(this);
  operator delete(this);
}


//======================================================================
// ChunkProvider::startThread(void)
// address: 0x002EA846   size: 0xA (10 bytes)
//======================================================================
int __fastcall ChunkProvider::startThread(Ogre::OSThread **this)
{
  return Ogre::OSThread::start(*(this + 1));
}


//======================================================================
// ChunkProvider::stopThread(void)
// address: 0x002EA850   size: 0xA (10 bytes)
//======================================================================
Ogre::OSThread *__fastcall ChunkProvider::stopThread(ChunkProvider *this)
{
  Ogre::OSThread *result; // r0

  result = *((Ogre::OSThread **)this + 1);
  Ogre::OSThread::shutdown(result);
  return result;
}


//======================================================================
// ChunkProvider::check(void)
// address: 0x002EA85C   size: 0x80 (128 bytes)
//======================================================================
int __fastcall ChunkProvider::check(ChunkProvider *this)
{
  int result; // r0
  unsigned __int16 *v3; // r6
  int v4; // r4
  void *v5; // [sp+Ch] [bp-4h] BYREF
  int v6[3]; // [sp+10h] [bp+0h] BYREF

  result = GenTerrainThread::popResult(*((_DWORD *)this + 1), v6, &v5);
  v3 = (unsigned __int16 *)result;
  if ( result != 0 )
  {
    v4 = operator new(0x59Cu);
    Chunk::Chunk((Chunk *)v4, *((World **)this + 2), v6[0], v6[1], v3);
    j_memcpy((void *)(v4 + 1060), v5, 0x100u);
    operator delete[](v3);
    if ( v5 != nullptr )
      operator delete[](v5);
    Chunk::generateSkylightMap((Chunk *)v4);
    if ( (*(int (__fastcall **)(ChunkProvider *))(*(_DWORD *)this + 20))(this) == 0 )
      Chunk::resetRelightChecks(v4);
    World::addChunk(*((World **)this + 2), (Chunk *)v4);
    return World::populateChunk(*((World **)this + 2), (Chunk *)v4);
  }
  return result;
}


//======================================================================
// ChunkProvider::ChunkProvider(World *,unsigned int,unsigned int)
// address: 0x002EAEE8   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN13ChunkProviderC1EP5Worldjj'
void __fastcall ChunkProvider::ChunkProvider(ChunkProvider *this, World *a2, unsigned int a3, unsigned int a4)
{
  unsigned __int64 v5; // kr00_8
  ChunkRandGen *v6; // r5
  __int64 v7; // r2
  GenTerrainThread *v8; // r5

  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  v5 = (unsigned __int64)a3 << 16;
  *(_DWORD *)this = &off_461E90;
  *((_DWORD *)this + 4) = v5 ^ a4;
  *((_DWORD *)this + 5) = HIDWORD(v5);
  v6 = (ChunkRandGen *)operator new(6u);
  ChunkRandGen::ChunkRandGen(v6);
  v7 = *((_QWORD *)this + 2);
  *((_DWORD *)this + 3) = v6;
  ChunkRandGen::setSeed64((int)v6, v7);
  v8 = (GenTerrainThread *)operator new(0x74u);
  GenTerrainThread::GenTerrainThread(v8, this);
  *((_DWORD *)this + 1) = v8;
}


//======================================================================
// ChunkProvider::addModelGen(char const*)
// address: 0x002EB064   size: 0x3C (60 bytes)
//======================================================================
char *__fastcall ChunkProvider::addModelGen(ChunkProvider *this, char *a2)
{
  WorldGenVoxelModel *v4; // r5
  WorldGenVoxelModel **v5; // r3
  WorldGenVoxelModel **v6; // r2
  char *v8; // [sp+4h] [bp-4h] BYREF

  v8 = a2;
  v4 = (WorldGenVoxelModel *)operator new(0x14u);
  WorldGenVoxelModel::WorldGenVoxelModel(v4, a2, 0);
  v5 = *((WorldGenVoxelModel ***)this + 8);
  v6 = *((WorldGenVoxelModel ***)this + 9);
  v8 = (char *)v4;
  if ( v5 == v6 )
  {
    std::vector<WorldGenVoxelModel *>::_M_emplace_back_aux<WorldGenVoxelModel * const&>((int)this + 28, &v8);
  }
  else
  {
    if ( v5 != nullptr )
      *v5 = v4;
    *((_DWORD *)this + 8) += 4;
  }
  return v8;
}


//======================================================================
// ChunkProvider::getModelGen(char const*)
// address: 0x002EB0AA   size: 0x3E (62 bytes)
//======================================================================
char *__fastcall ChunkProvider::getModelGen(ChunkProvider *this, char *a2)
{
  int v4; // r4
  int v5; // r6
  int v7; // [sp+0h] [bp-Ch]
  int v8; // [sp+4h] [bp-8h]

  v4 = 0;
  v8 = *((_DWORD *)this + 7);
  v7 = (*((_DWORD *)this + 8) - v8) >> 2;
  while ( 1 )
  {
    if ( v4 == v7 )
      return ChunkProvider::addModelGen(this, a2);
    v5 = *(_DWORD *)(v8 + 4 * v4);
    if ( j_strcmp(*(const char **)(v5 + 8), a2) == 0 )
      break;
    ++v4;
  }
  return (char *)v5;
}


//======================================================================
// ChunkProvider::requesChunk(int,int)
// address: 0x002EBCA0   size: 0x28 (40 bytes)
//======================================================================
int __fastcall ChunkProvider::requesChunk(ChunkProvider *this, int a2, int a3)
{
  if ( (*(int (__fastcall **)(ChunkProvider *))(*(_DWORD *)this + 16))(this) != 0 )
  {
    GenTerrainThread::addRequest(*((_DWORD *)this + 1), a2, a3);
    Ogre::OSEvent::trigger((Ogre::OSEvent *)(*((_DWORD *)this + 1) + 8));
  }
  return 0;
}

