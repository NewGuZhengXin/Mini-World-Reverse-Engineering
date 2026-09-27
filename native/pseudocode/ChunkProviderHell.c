// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChunkProviderHell

//======================================================================
// ChunkProviderHell::canProvideChunk(int,int)
// address: 0x002C53E8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall ChunkProviderHell::canProvideChunk(ChunkProviderHell *this, int a2, int a3)
{
  int v3; // r4
  int result; // r0
  int v6; // r3

  v3 = *((_DWORD *)this + 10);
  result = 0;
  if ( a2 >= -v3 && a2 <= v3 )
  {
    v6 = *((_DWORD *)this + 11);
    if ( a3 >= -v6 )
      return (unsigned __int8)((v6 >> 31) + (v6 >= (unsigned int)a3) + (a3 < 0));
  }
  return result;
}


//======================================================================
// ChunkProviderHell::hasSky(void)
// address: 0x002C5410   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProviderHell::hasSky(ChunkProviderHell *this)
{
  return 0;
}


//======================================================================
// ChunkProviderHell::canRespawnHere(void)
// address: 0x002C5414   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProviderHell::canRespawnHere(ChunkProviderHell *this)
{
  return 0;
}


//======================================================================
// ChunkProviderHell::getBossInfo(WCoord &)
// address: 0x002C5418   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ChunkProviderHell::getBossInfo(_DWORD *a1, _DWORD *a2)
{
  *a2 = a1[12];
  a2[1] = a1[13];
  a2[2] = a1[14];
  return 1;
}


//======================================================================
// ChunkProviderHell::getActualHeight(void)
// address: 0x002C5428   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProviderHell::getActualHeight(ChunkProviderHell *this)
{
  return 128;
}


//======================================================================
// ChunkProviderHell::getSpawnMinY(void)
// address: 0x002C542C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProviderHell::getSpawnMinY(ChunkProviderHell *this)
{
  return 32;
}


//======================================================================
// ChunkProviderHell::getMinmapMaxY(void)
// address: 0x002C5430   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ChunkProviderHell::getMinmapMaxY(ChunkProviderHell *this)
{
  return 47;
}


//======================================================================
// ChunkProviderHell::canCoordBeSpawn(int,int)
// address: 0x002C5434   size: 0x28 (40 bytes)
//======================================================================
bool __fastcall ChunkProviderHell::canCoordBeSpawn(World **this, int a2, int a3)
{
  int FirstUncoveredBlock; // r1

  FirstUncoveredBlock = World::getFirstUncoveredBlock(*(this + 2), a2, a3);
  return FirstUncoveredBlock > 0
      && *(_DWORD *)(*(_DWORD *)(BlockMaterialMgr::getMaterial(
                                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                   FirstUncoveredBlock)
                               + 36)
                   + 12) == 1;
}


//======================================================================
// ChunkProviderHell::createBoss(void)
// address: 0x002C5460   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall ChunkProviderHell::createBoss(ChunkProviderHell *this)
{
  int MapData; // r0
  int v3; // r6
  int v4; // r3
  int result; // r0
  ActorDragon *v6; // r4
  _DWORD v7[4]; // [sp+Ch] [bp-10h] BYREF

  MapData = WorldManager::getMapData(
              (WorldManager *)g_WorldMgr,
              *(unsigned __int16 *)(*((_DWORD *)this + 2) + 60),
              false);
  v3 = MapData;
  if ( MapData == 0
    || (v4 = *(_DWORD *)(MapData + 36)) == *(_DWORD *)(MapData + 40)
    || (result = *(float *)(v4 + 4) <= 0.0, *(float *)(v4 + 4) > 0.0) )
  {
    v6 = (ActorDragon *)operator new(0x118u);
    ActorDragon::ActorDragon(v6);
    ActorDragon::setSpawnPoint(v6, (ChunkProviderHell *)((char *)this + 48));
    if ( v3 != 0 && *(_DWORD *)(v3 + 36) != *(_DWORD *)(v3 + 40) )
      (*(void (__fastcall **)(ActorDragon *))(*(_DWORD *)v6 + 200))(v6);
    ClientActor::getPosition((ClientActor *)v7);
    World::syncLoadChunk(
      *((World **)this + 2),
      v7[0] / 1600 - ((unsigned int)(v7[0] % 1600) >> 31),
      v7[2] / 1600 - ((unsigned int)(v7[2] % 1600) >> 31));
    return ClientActorMgr::spawnBoss(*(ClientActorMgr **)(*((_DWORD *)this + 2) + 132), v6);
  }
  return result;
}


//======================================================================
// ChunkProviderHell::populate(int,int)
// address: 0x002C552C   size: 0x182 (386 bytes)
//======================================================================
int __fastcall ChunkProviderHell::populate(ChunkProviderHell *this, int a2, int a3)
{
  int v4; // r6
  int v5; // r0
  ChunkRandGen *v6; // r5
  __int64 v7; // r2
  int v8; // r7
  char v9; // r0
  int v10; // r3
  ChunkRandGen *v11; // r0
  char v12; // r0
  int v13; // r3
  int v14; // r2
  char v15; // r0
  int v16; // r3
  ChunkRandGen *v17; // r0
  char v18; // r0
  int v19; // r3
  int v20; // r1
  int v21; // r0
  int ModelGen; // r0
  int v24; // r2
  void (__fastcall *v25)(int, int, _DWORD); // r5
  int v26; // r1
  int v27; // [sp+8h] [bp-24h]
  int v28; // [sp+Ch] [bp-20h]
  int v31; // [sp+1Ch] [bp-10h] BYREF
  int v32; // [sp+20h] [bp-Ch]
  int v33; // [sp+24h] [bp-8h]

  ChunkRandGen::setSeed64(*((_DWORD *)this + 3), *((_QWORD *)this + 2));
  v4 = *((_DWORD *)this + 4);
  v27 = *((_DWORD *)this + 5);
  v5 = ChunkRandGen::get(*((ChunkRandGen **)this + 3));
  v6 = *((ChunkRandGen **)this + 3);
  LODWORD(v7) = (a3 * ChunkRandGen::get(v6) + a2 * v5) ^ v4;
  HIDWORD(v7) = v27;
  ChunkRandGen::setSeed64((int)v6, v7);
  v8 = 16 * a2;
  v28 = 16 * a3;
  if ( ChunkRandGen::get(*((ChunkRandGen **)this + 3)) % 5u == 0 )
  {
    v9 = ChunkRandGen::get(*((ChunkRandGen **)this + 3));
    v10 = *((_DWORD *)this + 15) + 2;
    v31 = v8 + (v9 & 0xF) + 8;
    v11 = *((ChunkRandGen **)this + 3);
    v32 = v10;
    v12 = ChunkRandGen::get(v11);
    v13 = v31 - *((_DWORD *)this + 12);
    v14 = *((_DWORD *)this + 14);
    v33 = v28 + (v12 & 0xF) + 8;
    if ( v13 * v13 + (v33 - v14) * (v33 - v14) > 100 )
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, int *))(**((_DWORD **)this + 48) + 8))(
        *((_DWORD *)this + 48),
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        &v31);
  }
  if ( ChunkRandGen::get(*((ChunkRandGen **)this + 3)) % 5u == 0 )
  {
    v15 = ChunkRandGen::get(*((ChunkRandGen **)this + 3));
    v16 = *((_DWORD *)this + 15) + 2;
    v31 = v8 + (v15 & 0xF) + 8;
    v17 = *((ChunkRandGen **)this + 3);
    v32 = v16;
    v18 = ChunkRandGen::get(v17);
    v19 = v31 - *((_DWORD *)this + 12);
    v20 = *((_DWORD *)this + 14);
    v33 = v28 + (v18 & 0xF) + 8;
    if ( v19 * v19 + (v33 - v20) * (v33 - v20) > 100 )
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, int *))(**((_DWORD **)this + 49) + 8))(
        *((_DWORD *)this + 49),
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        &v31);
  }
  if ( a2 == *((_DWORD *)this + 12) / 16 - ((unsigned int)(*((_DWORD *)this + 12) % 16) >> 31)
    && a3 == *((_DWORD *)this + 14) / 16 - ((unsigned int)(*((_DWORD *)this + 14) % 16) >> 31) )
  {
    ModelGen = ChunkProvider::getModelGen(this, "longdan");
    v24 = *((_DWORD *)this + 13) + 4;
    v25 = *(void (__fastcall **)(int, int, _DWORD))(*(_DWORD *)ModelGen + 8);
    v31 = *((_DWORD *)this + 12);
    v32 = v24;
    v26 = *((_DWORD *)this + 2);
    v33 = *((_DWORD *)this + 14);
    v25(ModelGen, v26, *((_DWORD *)this + 3));
  }
  v21 = (*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 6) + 16))(*((_DWORD *)this + 6), 21);
  return (*(int (__fastcall **)(int, _DWORD, _DWORD, int, int))(*(_DWORD *)v21 + 12))(
           v21,
           *((_DWORD *)this + 2),
           *((_DWORD *)this + 3),
           v8,
           v28);
}


//======================================================================
// ChunkProviderHell::replaceBlocksForBiome(int,int,unsigned short *)
// address: 0x002C56B8   size: 0x1CE (462 bytes)
//======================================================================
unsigned __int16 *__fastcall ChunkProviderHell::replaceBlocksForBiome(
        ChunkProviderHell *this,
        int a2,
        int a3,
        unsigned __int16 *a4)
{
  __int16 v5; // r7
  double v6; // r4
  int v7; // r4
  int v8; // r5
  int v9; // r2
  unsigned __int16 *result; // r0
  unsigned __int16 *v11; // r3
  int i; // [sp+28h] [bp-3Ch]
  int v14; // [sp+2Ch] [bp-38h]
  int v15; // [sp+30h] [bp-34h]
  int v16; // [sp+34h] [bp-30h]
  int v17; // [sp+38h] [bp-2Ch]
  int v18; // [sp+3Ch] [bp-28h]
  int v20; // [sp+44h] [bp-20h]
  int v21; // [sp+48h] [bp-1Ch]
  int v22; // [sp+4Ch] [bp-18h]
  int v23; // [sp+5Ch] [bp-8h]

  v16 = 16 * a2;
  v17 = 16 * a3;
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *((_DWORD **)this + 19),
    (void **)this + 38,
    16 * a2,
    109,
    16 * a3,
    16,
    1,
    16,
    0.03125,
    1.0,
    0.03125);
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *((_DWORD **)this + 22),
    (void **)this + 41,
    v16,
    v17,
    0,
    16,
    16,
    1,
    0.0625,
    0.0625,
    0.0625);
  v15 = 0;
  v21 = *((_DWORD *)this + 12);
  v22 = *((_DWORD *)this + 14);
  do
  {
    for ( i = 0; i != 16; ++i )
    {
      v5 = 124;
      v6 = *(double *)(*((_DWORD *)this + 41) + 8 * (16 * i + v15)) / 3.0 + 3.0;
      v18 = (int)(v6 + ChunkRandGen::getDouble((ChunkRandGen *)*((_DWORD *)this + 3)) * 0.25);
      v23 = i | (16 * v15);
      v7 = 127;
      v14 = 124;
      v8 = -1;
      do
      {
        v20 = v23 | (v7 << 8);
        if ( v7 >= (int)(127 - ChunkRandGen::get(*((ChunkRandGen **)this + 3)) % 5u)
          || v7 <= (int)(ChunkRandGen::get(*((ChunkRandGen **)this + 3)) % 5u)
          || (v9 = v7 - *((_DWORD *)this + 15),
              (int)(result = (unsigned __int16 *)((v16 - v21 + i) * (v16 - v21 + i)
                                                + v9 * v9
                                                + (v17 - v22 + v15) * (v17 - v22 + v15))) <= 6399)
          && (result = a4, a4[v20] == 124)
          && v9 <= 1 )
        {
          result = (unsigned __int16 *)(v23 | (v7 << 8));
          a4[v20] = 1;
        }
        else
        {
          v11 = &a4[v20];
          if ( *v11 != 0 )
          {
            if ( *v11 != 124 )
              continue;
            if ( v8 == -1 )
            {
              result = (unsigned __int16 *)v18;
              if ( v18 > 0 )
              {
                if ( v7 > 59 )
                {
                  if ( v7 <= 65 )
                  {
                    v5 = *v11;
                    v14 = *v11;
                  }
LABEL_17:
                  if ( v7 > 63 )
                    goto LABEL_21;
                }
                if ( v14 == 0 )
                {
                  result = (_WORD *)&byte_5;
                  v14 = 5;
                }
                if ( v7 <= 62 )
                  *v11 = v5;
                else
LABEL_21:
                  *v11 = v14;
                v8 = v18;
                continue;
              }
              v5 = 104;
              v14 = 0;
              goto LABEL_17;
            }
            if ( v8 > 0 )
            {
              --v8;
              *v11 = v5;
            }
          }
          else
          {
            v8 = -1;
          }
        }
      }
      while ( v7-- != 0 );
    }
    ++v15;
  }
  while ( v15 != 16 );
  return result;
}


//======================================================================
// ChunkProviderHell::noise2ChunkData(unsigned short *,int,int,int,std::vector<double,std::allocator<double>> &)
// address: 0x002C58B8   size: 0x2EE (750 bytes)
//======================================================================
int __fastcall ChunkProviderHell::noise2ChunkData(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int result; // r0
  int v8; // r3
  double *v9; // r3
  double *v10; // r4
  double v11; // r0
  int k; // r4
  double v13; // r4
  _WORD *v14; // r6
  double v15; // [sp+0h] [bp-E4h]
  double v16; // [sp+8h] [bp-DCh]
  int v17; // [sp+10h] [bp-D4h]
  int v18; // [sp+14h] [bp-D0h]
  int v19; // [sp+18h] [bp-CCh]
  int v20; // [sp+1Ch] [bp-C8h]
  double v21; // [sp+20h] [bp-C4h]
  double v22; // [sp+28h] [bp-BCh]
  int v23; // [sp+30h] [bp-B4h]
  int v24; // [sp+34h] [bp-B0h]
  int i; // [sp+38h] [bp-ACh]
  int j; // [sp+3Ch] [bp-A8h]
  double v27; // [sp+40h] [bp-A4h]
  double v28; // [sp+48h] [bp-9Ch]
  int v29; // [sp+50h] [bp-94h]
  int m; // [sp+54h] [bp-90h]
  int v31; // [sp+58h] [bp-8Ch]
  int v32; // [sp+5Ch] [bp-88h]
  int v33; // [sp+60h] [bp-84h]
  int v34; // [sp+64h] [bp-80h]
  int v35; // [sp+6Ch] [bp-78h]
  int v36; // [sp+74h] [bp-70h]
  int v37; // [sp+78h] [bp-6Ch]
  int v38; // [sp+88h] [bp-5Ch]
  int v39; // [sp+8Ch] [bp-58h]
  double v40; // [sp+90h] [bp-54h]
  double v41; // [sp+98h] [bp-4Ch]
  double v42; // [sp+A0h] [bp-44h]
  int v43; // [sp+CCh] [bp-18h]
  int v44; // [sp+D0h] [bp-14h]

  v35 = a4 - 1;
  v36 = 16 / (a3 - 1);
  v37 = 16 / (a5 - 1);
  v31 = 128 / (a4 - 1);
  v43 = a5 * a4;
  v19 = 0;
  v33 = 0;
  for ( i = 0; ; ++i )
  {
    result = a3 - 1;
    if ( i >= a3 - 1 )
      break;
    v44 = a4 * a5;
    v8 = v33;
    v39 = a4 * (a5 + 1);
    v18 = 0;
    for ( j = 0; j < a5 - 1; ++j )
    {
      v38 = v8 + a4;
      v32 = 8 * (v8 + 1);
      v34 = 8 * v8;
      v20 = 0;
      v23 = 0;
      v29 = 0;
      while ( v29 < v35 )
      {
        v9 = (double *)(*a6 + v34);
        v15 = *v9;
        v21 = v9[a4];
        v16 = v9[v44];
        v22 = v9[v39];
        v10 = (double *)(*a6 + v32);
        ++v29;
        v40 = (*v10 - *v9) * 0.125;
        v41 = (v10[a4] - v21) * 0.125;
        v42 = (v10[v44] - v16) * 0.125;
        v11 = (v10[v39] - v22) * 0.125;
        for ( k = v23; ; k = v17 + 1 )
        {
          v17 = k;
          if ( k - v23 >= v31 )
            break;
          v27 = v16;
          v24 = v18;
          v13 = v15;
          while ( v24 - v18 < v37 )
          {
            v28 = v13;
            v14 = (_WORD *)(a2 + 2 * ((16 * v24) | v19 | (v17 << 8)));
            for ( m = 0; m < v36; ++m )
            {
              if ( v28 <= 0.0 )
              {
                if ( v17 + v20 > 31 )
                  *v14 = 0;
                else
                  *v14 = 5;
              }
              else
              {
                *v14 = 124;
              }
              v28 = v28 + (v27 - v13) * 0.25;
              ++v14;
            }
            v13 = v13 + (v21 - v15) * 0.25;
            v27 = v27 + (v22 - v16) * 0.25;
            ++v24;
          }
          v15 = v15 + v40;
          v21 = v21 + v41;
          v16 = v16 + v42;
          v22 = v22 + v11;
        }
        v23 += v31;
        v34 += 8;
        v32 += 8;
        v20 += 8 - v31;
      }
      v8 = v38;
      v18 += v37;
    }
    v33 += v43;
    v19 += v36;
  }
  return result;
}


//======================================================================
// ChunkProviderHell::~ChunkProviderHell()
// address: 0x002C5BD4   size: 0xF6 (246 bytes)
//======================================================================
// Alternative name is '_ZN17ChunkProviderHellD1Ev'
void __fastcall ChunkProviderHell::~ChunkProviderHell(ChunkProviderHell *this)
{
  int v2; // r0
  int v3; // r0
  void *v4; // r5
  void *v5; // r5
  void *v6; // r5
  void *v7; // r5
  void *v8; // r5
  void *v9; // r5
  void *v10; // r5

  *(_DWORD *)this = &off_45F7B8;
  v2 = *((_DWORD *)this + 49);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 48);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((void **)this + 16);
  if ( v4 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 16));
    operator delete(v4);
  }
  v5 = *((void **)this + 17);
  if ( v5 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 17));
    operator delete(v5);
  }
  v6 = *((void **)this + 18);
  if ( v6 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 18));
    operator delete(v6);
  }
  v7 = *((void **)this + 19);
  if ( v7 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 19));
    operator delete(v7);
  }
  v8 = *((void **)this + 20);
  if ( v8 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 20));
    operator delete(v8);
  }
  v9 = *((void **)this + 21);
  if ( v9 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 21));
    operator delete(v9);
  }
  v10 = *((void **)this + 22);
  if ( v10 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 22));
    operator delete(v10);
  }
  std::_Vector_base<double>::~_Vector_base((void **)this + 44);
  std::_Vector_base<double>::~_Vector_base((void **)this + 41);
  std::_Vector_base<double>::~_Vector_base((void **)this + 38);
  std::_Vector_base<double>::~_Vector_base((void **)this + 35);
  std::_Vector_base<double>::~_Vector_base((void **)this + 32);
  std::_Vector_base<double>::~_Vector_base((void **)this + 29);
  std::_Vector_base<double>::~_Vector_base((void **)this + 26);
  std::_Vector_base<double>::~_Vector_base((void **)this + 23);
  ChunkProvider::~ChunkProvider(this);
}


//======================================================================
// ChunkProviderHell::~ChunkProviderHell()
// address: 0x002C5CD0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ChunkProviderHell::~ChunkProviderHell(ChunkProviderHell *this)
{
  ChunkProviderHell::~ChunkProviderHell(this);
  operator delete(this);
}


//======================================================================
// ChunkProviderHell::ChunkProviderHell(World *,unsigned int,unsigned int,int,int)
// address: 0x002C5CE4   size: 0x18A (394 bytes)
//======================================================================
// Alternative name is '_ZN17ChunkProviderHellC1EP5Worldjjii'
void __fastcall ChunkProviderHell::ChunkProviderHell(
        ChunkProviderHell *this,
        World *a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        int a6)
{
  ChunkRandGen *v7; // r0
  float v8; // r0
  float v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r0
  BiomeManagerSimple *x; // [sp+0h] [bp-Ch]
  NoiseGeneratorOctaves *xa; // [sp+0h] [bp-Ch]
  NoiseGeneratorOctaves *xb; // [sp+0h] [bp-Ch]
  NoiseGeneratorOctaves *xc; // [sp+0h] [bp-Ch]
  NoiseGeneratorOctaves *xd; // [sp+0h] [bp-Ch]
  NoiseGeneratorOctaves *xe; // [sp+0h] [bp-Ch]
  NoiseGeneratorOctaves *xf; // [sp+0h] [bp-Ch]
  NoiseGeneratorOctaves *xg; // [sp+0h] [bp-Ch]
  double xh; // [sp+0h] [bp-Ch]

  ChunkProvider::ChunkProvider(this, a2, a3, a4);
  *(_DWORD *)this = &off_45F7B8;
  *((_DWORD *)this + 10) = a5;
  *((_DWORD *)this + 11) = a6;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  x = (BiomeManagerSimple *)operator new(8u);
  BiomeManagerSimple::BiomeManagerSimple(x, 21);
  *((_DWORD *)this + 6) = x;
  xa = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(xa, *((ChunkRandGen **)this + 3), 16);
  *((_DWORD *)this + 16) = xa;
  xb = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(xb, *((ChunkRandGen **)this + 3), 16);
  *((_DWORD *)this + 17) = xb;
  xc = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(xc, *((ChunkRandGen **)this + 3), 8);
  *((_DWORD *)this + 18) = xc;
  xd = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(xd, *((ChunkRandGen **)this + 3), 4);
  *((_DWORD *)this + 19) = xd;
  xe = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(xe, *((ChunkRandGen **)this + 3), 4);
  *((_DWORD *)this + 22) = xe;
  xf = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(xf, *((ChunkRandGen **)this + 3), 10);
  *((_DWORD *)this + 20) = xf;
  xg = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(xg, *((ChunkRandGen **)this + 3), 16);
  v7 = *((ChunkRandGen **)this + 3);
  *((_DWORD *)this + 21) = xg;
  *((_DWORD *)this + 15) = 32;
  xh = (float)((float)(ChunkRandGen::getFloat(v7) * 360.0) * 0.017453);
  v8 = j_cos(xh);
  *((_DWORD *)this + 12) = (int)(float)(v8 * 640.0);
  v9 = j_sin(xh);
  v10 = *((_DWORD *)this + 15);
  *((_DWORD *)this + 14) = (int)(float)(v9 * 640.0);
  *((_DWORD *)this + 13) = v10;
  v11 = operator new(8u);
  *(_BYTE *)(v11 + 4) = 0;
  *(_DWORD *)v11 = &off_45EC78;
  *((_DWORD *)this + 48) = v11;
  v12 = operator new(0x10u);
  *(_BYTE *)(v12 + 4) = 0;
  *(_DWORD *)v12 = &off_4618E8;
  *(_DWORD *)(v12 + 8) = 5;
  *(_DWORD *)(v12 + 12) = 124;
  *((_DWORD *)this + 49) = v12;
}


//======================================================================
// ChunkProviderHell::initializeNoiseField(std::vector<double,std::allocator<double>> &,int,int,int,int,int,int)
// address: 0x002C5EE0   size: 0x5B0 (1456 bytes)
//======================================================================
int __fastcall ChunkProviderHell::initializeNoiseField(int a1, int *a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  unsigned int v10; // r3
  int v11; // r2
  unsigned int v12; // r1
  __int64 v13; // r0
  int v14; // r7
  float v15; // r0
  int v16; // r0
  int result; // r0
  int i; // r2
  double v19; // r6
  double *v20; // r3
  double v21; // r0
  double v22; // r6
  int v23; // r3
  int v24; // r2
  double v25; // [sp+28h] [bp-854h]
  double v26; // [sp+28h] [bp-854h]
  double v27; // [sp+28h] [bp-854h]
  int v29; // [sp+30h] [bp-84Ch]
  int v30; // [sp+38h] [bp-844h]
  int v32; // [sp+48h] [bp-834h]
  int v33; // [sp+4Ch] [bp-830h]
  int v34; // [sp+50h] [bp-82Ch]
  int v35; // [sp+54h] [bp-828h]
  int v36; // [sp+58h] [bp-824h]
  int v37; // [sp+5Ch] [bp-820h]
  double v38[256]; // [sp+78h] [bp-804h]

  v10 = a7 * a6 * a8;
  v11 = *a2;
  v12 = (a2[1] - *a2) >> 3;
  if ( v10 <= v12 )
  {
    if ( v10 < v12 )
      a2[1] = v11 + 8 * v10;
  }
  else
  {
    HIDWORD(v13) = v10 - v12;
    LODWORD(v13) = a2;
    std::vector<double>::_M_default_append(v13);
  }
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *(_DWORD **)(a1 + 80),
    (void **)(a1 + 128),
    a3,
    a4,
    a5,
    a6,
    1,
    a8,
    1.0,
    0.0,
    1.0);
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *(_DWORD **)(a1 + 84),
    (void **)(a1 + 140),
    a3,
    a4,
    a5,
    a6,
    1,
    a8,
    100.0,
    0.0,
    100.0);
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *(_DWORD **)(a1 + 64),
    (void **)(a1 + 104),
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    684.412,
    2053.236,
    684.412);
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *(_DWORD **)(a1 + 68),
    (void **)(a1 + 116),
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    684.412,
    2053.236,
    684.412);
  v14 = 0;
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *(_DWORD **)(a1 + 72),
    (void **)(a1 + 92),
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    8.55515,
    34.2206,
    8.55515);
  v36 = *(_DWORD *)(a1 + 48) / 4;
  v37 = *(_DWORD *)(a1 + 56) / 4;
  while ( v14 < a7 )
  {
    v15 = j_cos((float)((float)((float)((float)((float)v14 * 180.0) * 6.0) / (float)a7) * 0.017453));
    v25 = v15 + v15;
    v16 = v14;
    if ( v14 > a7 / 2 )
      v16 = a7 - 1 - v14;
    if ( (double)v16 < 4.0 )
      v38[v14] = v25 - (4.0 - (double)v16) * (4.0 - (double)v16) * (4.0 - (double)v16) * 10.0;
    else
      v38[v14] = v25;
    ++v14;
  }
  v32 = a3 - v36;
  v35 = 0;
  while ( 1 )
  {
    result = a3;
    if ( v36 - a3 + v32 >= a6 )
      break;
    v30 = a5 - v37;
    v34 = v35;
    while ( v37 - a5 + v30 < a8 )
    {
      for ( i = 0; ; i = v29 + 1 )
      {
        v29 = i;
        if ( i >= a7 )
          break;
        v33 = 8 * (i + v34);
        v19 = *(double *)(*(_DWORD *)(a1 + 104) + v33) * 0.001953125;
        v26 = (*(double *)(*(_DWORD *)(a1 + 92) + v33) / 10.0 + 1.0) * 0.5;
        if ( v26 >= 0.0 )
        {
          v20 = (double *)(*(_DWORD *)(a1 + 116) + v33);
          if ( v26 > 1.0 )
            v19 = *v20 * 0.001953125;
          else
            v19 = v19 + (*v20 * 0.001953125 - v19) * v26;
        }
        v27 = v19 - v38[i];
        if ( a7 - 3 <= i )
        {
          v21 = (float)(i - a7 + 4) / 3.0;
          v27 = v27 * (1.0 - v21) + v21 * -10.0;
        }
        if ( (double)i < 0.0 )
        {
          v22 = (0.0 - (double)i) * 0.25;
          if ( v22 < 0.0 )
          {
            v22 = 0.0;
          }
          else if ( v22 > 1.0 )
          {
            v22 = 1.0;
          }
          v27 = v27 * (1.0 - v22) + v22 * -10.0;
        }
        v23 = 2 * i - *(_DWORD *)(a1 + 60) / 4;
        v24 = v32 * v32 + v23 * v23 + v30 * v30;
        if ( v24 > 399 )
        {
          if ( v24 <= 624 && (unsigned int)(v23 + 4) <= 8 )
            v27 = -1.0;
        }
        else if ( v23 <= 0 )
        {
          v27 = 1.0;
        }
        else
        {
          v27 = -1.0;
        }
        *(double *)(*a2 + v33) = v27;
      }
      v34 += a7 & (~a7 >> 31);
      ++v30;
    }
    v35 += ((~a8 >> 31) & a8) * (a7 & (~a7 >> 31));
    ++v32;
  }
  return result;
}


//======================================================================
// ChunkProviderHell::generateTerrain(unsigned short *,int,int)
// address: 0x002C64E8   size: 0x38 (56 bytes)
//======================================================================
int __fastcall ChunkProviderHell::generateTerrain(ChunkProviderHell *this, unsigned __int16 *a2, int a3, int a4)
{
  _DWORD *v4; // r7

  v4 = (_DWORD *)((char *)this + 176);
  ChunkProviderHell::initializeNoiseField((int)this, (int *)this + 44, 4 * a3, 0, 4 * a4, 5, 17, 5);
  return ChunkProviderHell::noise2ChunkData((int)this, (int)a2, 5, 17, 5, v4);
}


//======================================================================
// ChunkProviderHell::createChunkData(unsigned short *&,unsigned char *&,int,int)
// address: 0x002C6520   size: 0x48 (72 bytes)
//======================================================================
unsigned __int64 __fastcall ChunkProviderHell::createChunkData(
        ChunkProviderHell *this,
        unsigned __int16 **a2,
        unsigned __int8 **a3,
        int a4,
        int a5)
{
  unsigned __int16 *v8; // r4
  void *v9; // r5
  unsigned __int64 v11; // [sp+0h] [bp-Ch]

  v11 = __PAIR64__((unsigned int)a3, (unsigned int)this);
  v8 = (unsigned __int16 *)operator new[](0x10000u);
  ChunkProviderHell::generateTerrain(this, v8, a4, a5);
  ChunkProviderHell::replaceBlocksForBiome(this, a4, a5, v8);
  v9 = (void *)operator new[](0x100u);
  j_memset(v9, 21, 0x100u);
  *a2 = v8;
  *(_DWORD *)HIDWORD(v11) = v9;
  return v11;
}

