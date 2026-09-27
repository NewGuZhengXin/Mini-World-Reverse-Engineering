// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TerrainGen

//======================================================================
// TerrainGen::TerrainGen(void)
// address: 0x002FAE88   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN10TerrainGenC1Ev'
void __fastcall TerrainGen::TerrainGen(TerrainGen *this)
{
  NoiseManager *v2; // r5

  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  v2 = (NoiseManager *)operator new(0x28u);
  NoiseManager::NoiseManager(v2);
  *((_DWORD *)this + 1) = v2;
}


//======================================================================
// TerrainGen::~TerrainGen()
// address: 0x002FAEBC   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN10TerrainGenD1Ev'
void __fastcall TerrainGen::~TerrainGen(TerrainGen *this)
{
  void *v1; // r5
  void *v3; // r0

  v1 = *((void **)this + 1);
  if ( v1 != nullptr )
  {
    NoiseManager::~NoiseManager(*((NoiseManager **)this + 1));
    operator delete(v1);
  }
  v3 = *((void **)this + 8);
  if ( v3 != nullptr )
    operator delete(v3);
}


//======================================================================
// TerrainGen::init(int,unsigned int,unsigned int)
// address: 0x002FAEE0   size: 0x1C6 (454 bytes)
//======================================================================
anl::CImplicitCombiner *__fastcall TerrainGen::init(
        NoiseManager **this,
        NoiseManager *a2,
        unsigned int a3,
        unsigned int a4)
{
  const char *v8; // r1
  anl::CImplicitModuleBase *Frac; // r0
  anl::CImplicitModuleBase *v10; // r2
  anl::CImplicitModuleBase *LandSel2; // r0
  anl::CImplicitModuleBase *v12; // r0
  anl::CImplicitModuleBase *TranslateDomain; // r0
  anl::CImplicitModuleBase *v14; // r0
  anl::CImplicitCombiner *result; // r0
  anl::CImplicitCache *Cache; // [sp+28h] [bp-14h]
  anl::CImplicitBias *Bias; // [sp+2Ch] [bp-10h]
  anl::CImplicitCombiner *Combiner; // [sp+2Ch] [bp-10h]
  anl::CImplicitModuleBase *v19; // [sp+30h] [bp-Ch]
  anl::CImplicitModuleBase *Select; // [sp+34h] [bp-8h]

  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/terrain_gen.cpp", (const char *)&dword_1C + 1, 2, a4);
  Ogre::LogMessage((Ogre *)"TerrainGen::init", v8);
  *this = a2;
  NoiseManager::setRandSeed(*(this + 1), a3, a4);
  *(this + 6) = NoiseManager::createFrac(*(this + 1), 0, 3, 0, 1.0, 0.0, 1.0, 1.0, 1.0);
  *(this + 7) = NoiseManager::createFrac(*(this + 1), 0, 3, 0, 1.0, 0.0, 1.0, 1.0, 1.0);
  *(this + 4) = NoiseManager::createFrac(*(this + 1), 0, 3, 0, 1.0, 0.0, 1.0, 1.0, 1.0);
  Frac = NoiseManager::createFrac(*(this + 1), 0, 3, 0, 1.0, 0.0, 1.0, 1.0, 1.0);
  v10 = *(this + 4);
  *(this + 5) = Frac;
  LandSel2 = NoiseManager::createLandSel2(*(this + 1), Frac, v10);
  *(this + 3) = LandSel2;
  Cache = NoiseManager::createCache(*(this + 1), LandSel2);
  Select = NoiseManager::createSelect(*(this + 1), Cache, 0.5, 0.0, 1.0);
  Bias = NoiseManager::createBias(*(this + 1), Cache, 0.9);
  v19 = NoiseManager::createFrac(*(this + 1), 1u, 1, 0, 4.0, 0.0, 0.0, 1.0, 1.0);
  NoiseManager::createFrac(*(this + 1), 1u, 1, 0, 4.0, 0.0, 0.0, 1.0, 1.0);
  Combiner = NoiseManager::createCombiner((unsigned int)*(this + 1), 1u, v19, Bias, nullptr, nullptr);
  v12 = NoiseManager::createFrac(*(this + 1), 0, 6, 1070805811, 3.0, -0.3, 0.3, 1.0, 1.0);
  TranslateDomain = NoiseManager::createTranslateDomain(*(this + 1), Combiner, v12, nullptr);
  v14 = NoiseManager::createSelect(*(this + 1), TranslateDomain, 0.96, 1.0, 0.0);
  result = NoiseManager::createCombiner((unsigned int)*(this + 1), 1u, v14, Select, nullptr, nullptr);
  *(this + 2) = Cache;
  return result;
}


//======================================================================
// TerrainGen::setSingleBiome(int,int,float,int,int,float)
// address: 0x002FB0F8   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall TerrainGen::setSingleBiome(
        anl::CImplicitModuleBase ***this,
        unsigned int a2,
        int a3,
        float a4,
        int a5,
        int a6,
        float a7)
{
  __int64 v8; // [sp+0h] [bp-10h]

  LandSelectNoise2::initSingleBiome(*(this + 3), a2, a3, a4, a5, a6, a7);
  return v8;
}


//======================================================================
// TerrainGen::dumpBisectImage(unsigned char *,int,int,float)
// address: 0x002FB110   size: 0x34 (52 bytes)
//======================================================================
void __fastcall TerrainGen::dumpBisectImage(NoiseManager **this, unsigned __int8 *a2, int a3, int a4, float a5)
{
  NoiseManager::dumpModule(*(this + 1), *(this + 2), a2, a3, a4, a5, 0.0, 0.0);
}


//======================================================================
// TerrainGen::genTopHeight(unsigned char *,Chunk *)
// address: 0x002FB150   size: 0x3E (62 bytes)
//======================================================================
__int64 __fastcall TerrainGen::genTopHeight(TerrainGen *this, unsigned __int8 *a2, Chunk *a3)
{
  int i; // r4
  int j; // r3
  int v5; // r0
  __int64 v7; // [sp+0h] [bp-Ch]

  LODWORD(v7) = this;
  for ( i = 0; i != 16; ++i )
  {
    HIDWORD(v7) = &a2[16 * i];
    for ( j = 0; j != 16; ++j )
    {
      v5 = 127;
      while ( *(_BYTE *)(j + HIDWORD(v7) + (v5 << 8)) == 0 )
      {
        if ( --v5 == 0 )
          goto LABEL_7;
      }
      *((_BYTE *)a3 + (j | (16 * i)) + 292) = v5 + 1;
LABEL_7:
      ;
    }
  }
  return v7;
}


//======================================================================
// TerrainGen::createChunkData_Flat(Chunk *)
// address: 0x002FB18E   size: 0xC8 (200 bytes)
//======================================================================
__int16 *__fastcall TerrainGen::createChunkData_Flat(TerrainGen *this, Chunk *a2)
{
  int i; // r4
  int j; // r5
  __int16 *Block; // r0
  __int16 *v6; // r0
  __int16 *v7; // r0
  __int16 *v8; // r0
  __int16 *v9; // r0
  __int16 *v10; // r0
  __int16 *v11; // r0
  char *v12; // r3

  for ( i = 0; i != 16; ++i )
  {
    for ( j = 0; j != 16; ++j )
    {
      Block = Chunk::getBlock(a2, j, 0, i);
      Block::setAll(Block, 1, 0);
      v6 = Chunk::getBlock(a2, j, 1u, i);
      Block::setAll(v6, 104, 0);
      v7 = Chunk::getBlock(a2, j, 2u, i);
      Block::setAll(v7, 104, 0);
      v8 = Chunk::getBlock(a2, j, 3u, i);
      Block::setAll(v8, 104, 0);
      v9 = Chunk::getBlock(a2, j, 4u, i);
      Block::setAll(v9, 101, 0);
      v10 = Chunk::getBlock(a2, j, 5u, i);
      Block::setAll(v10, 101, 0);
      v11 = Chunk::getBlock(a2, j, 6u, i);
      Block::setAll(v11, 100, 0);
      v12 = (char *)a2 + (j | (16 * i));
      v12[1060] = 1;
      v12[292] = 7;
    }
  }
  return Chunk::getBlock(a2, 0, 0x10u, 0);
}


//======================================================================
// TerrainGen::placeOneGrass(Chunk *,WCoord const&,int)
// address: 0x002FB258   size: 0x4A (74 bytes)
//======================================================================
_WORD *__fastcall TerrainGen::placeOneGrass(int a1, Chunk *a2, int a3, int a4)
{
  __int16 v6; // r5
  int BlockDef; // r7
  __int16 *Block; // r0
  _WORD *result; // r0
  __int16 *v10; // r0

  v6 = a4;
  BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a4);
  Block = Chunk::getBlock(a2, *(_DWORD *)a3, *(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 8));
  result = Block::setAll(Block, v6, 0);
  if ( *(int *)(BlockDef + 76) > 1 )
  {
    v10 = Chunk::getBlock(a2, *(_DWORD *)a3, *(_DWORD *)(a3 + 4) + 1, *(_DWORD *)(a3 + 8));
    return Block::setAll(v10, v6, 1);
  }
  return result;
}


//======================================================================
// TerrainGen::placeGrass(Chunk *)
// address: 0x002FB2A8   size: 0x20 (32 bytes)
//======================================================================
int __fastcall TerrainGen::placeGrass(TerrainGen *this, Chunk *a2)
{
  int i; // r5
  int j; // r4
  int v5; // r1
  int result; // r0

  for ( i = 0; i != 16; ++i )
  {
    for ( j = 0; j != 16; ++j )
    {
      v5 = j;
      result = Chunk::getBiome(a2, v5, i);
    }
  }
  return result;
}


//======================================================================
// TerrainGen::placeTrees(Chunk *)
// address: 0x002FB2C8   size: 0x20 (32 bytes)
//======================================================================
int __fastcall TerrainGen::placeTrees(TerrainGen *this, Chunk *a2)
{
  int i; // r5
  int j; // r4
  int v5; // r1
  int result; // r0

  for ( i = 1; i != 16; i += 3 )
  {
    for ( j = 1; j != 16; j += 3 )
    {
      v5 = j;
      result = Chunk::getBiome(a2, v5, i);
    }
  }
  return result;
}


//======================================================================
// TerrainGen::placeOneOre(Chunk *,OreDef const*,int,int,int)
// address: 0x002FB2E8   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall TerrainGen::placeOneOre(int a1, Chunk *this, _DWORD *a3, int a4, unsigned int a5, int a6)
{
  unsigned int v6; // r5
  int v7; // r6
  int v9; // r4
  __int16 *Block; // r0
  unsigned int v11; // r1
  __int16 *v12; // r0
  __int64 v14; // [sp+0h] [bp-Ch]

  v6 = a5;
  v7 = a6;
  HIDWORD(v14) = this;
  v9 = a4;
  Block = Chunk::getBlock(this, a4, a5, a6);
  Block::setAll(Block, *a3, 0);
  LODWORD(v14) = 1;
  do
  {
    v11 = ChunkRandGen::get((ChunkRandGen *)(HIDWORD(v14) + 262)) % 6u;
    if ( v11 != 0 )
    {
      switch ( v11 )
      {
        case 1u:
          if ( --v9 < 0 )
            return v14;
          break;
        case 4u:
          if ( (int)++v6 > 255 )
            return v14;
          break;
        case 5u:
          if ( (--v6 & 0x80000000) != 0 )
            return v14;
          break;
        case 2u:
          if ( ++v7 > 15 )
            return v14;
          break;
        default:
          if ( --v7 < 0 )
            return v14;
          break;
      }
    }
    else if ( ++v9 > 15 )
    {
      return v14;
    }
    v12 = Chunk::getBlock((Chunk *)HIDWORD(v14), v9, v6, v7);
    if ( (*v12 & 0xFFF) != 0x68 )
      break;
    Block::setAll(v12, *a3, 0);
    LODWORD(v14) = v14 + 1;
  }
  while ( (int)v14 < a3[8] );
  return v14;
}


//======================================================================
// TerrainGen::placeOres(Chunk *)
// address: 0x002FB384   size: 0xEE (238 bytes)
//======================================================================
int __fastcall TerrainGen::placeOres(TerrainGen *this, Chunk *a2)
{
  _DWORD *i; // r4
  int result; // r0
  int j; // r3
  signed int v5; // r5
  int v6; // r6
  int v7; // r6
  int v8; // r6
  int v9; // r7
  ChunkRandGen *v10; // [sp+8h] [bp-1Ch]
  int v12; // [sp+10h] [bp-14h]

  for ( i = *(_DWORD **)(Ogre::Singleton<DefManager>::ms_Singleton + 408); ; i = (_DWORD *)sub_391DDC(i) )
  {
    result = Ogre::Singleton<DefManager>::ms_Singleton;
    if ( i == (_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 400) )
      break;
    if ( DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, i[5]) != 0 )
    {
      for ( j = 0; ; j = v12 + 1 )
      {
        v12 = j;
        if ( j >= i[12] )
          break;
        v10 = (Chunk *)((char *)a2 + 262);
        v5 = (unsigned __int8)ChunkRandGen::get((Chunk *)((char *)a2 + 262));
        if ( v5 >= i[6] && v5 <= i[7] )
        {
          v6 = i[8];
          if ( v6 <= 0 || (int)(ChunkRandGen::get(v10) % (unsigned int)(v6 + 1)) <= v5 - i[6] )
          {
            v7 = i[9];
            if ( v7 <= 0 || (int)(ChunkRandGen::get(v10) % (unsigned int)(v7 + 1)) <= i[7] - v5 )
            {
              v8 = ChunkRandGen::get(v10) & 0xF;
              v9 = ChunkRandGen::get(v10) & 0xF;
              if ( (*Chunk::getBlock(a2, v8, v5, v9) & 0xFFF) == 0x68 )
              {
                Chunk::getBiome(a2, v8, v9);
                TerrainGen::placeOneOre((int)this, a2, i + 5, v8, v5, v9);
              }
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// TerrainGen::genBlock(Block *,Chunk *,int,int,BiomeDef const*)
// address: 0x002FB7C8   size: 0x44 (68 bytes)
//======================================================================
_WORD *__fastcall TerrainGen::genBlock(int a1, _WORD *a2, int a3, signed int a4, int a5, int a6)
{
  int v8; // r1
  unsigned int v9; // r1
  _WORD *v10; // r0

  v8 = *(_DWORD *)(a6 + 56);
  if ( v8 <= 0 || a4 != a5 - 1 )
  {
    v9 = ChunkRandGen::get((ChunkRandGen *)(a3 + 262)) % 5u;
    if ( a4 < (int)(a5 - ((v9 - 2) & ((int)~(v9 - 2) >> 31))) )
    {
      v10 = a2;
      LOWORD(v8) = 104;
      return Block::setAll(v10, v8, 0);
    }
    v8 = *(_DWORD *)(a6 + 52);
  }
  v10 = a2;
  return Block::setAll(v10, v8, 0);
}


//======================================================================
// TerrainGen::createChunkSource(unsigned char *,int,int)
// address: 0x002FB810   size: 0x1D2 (466 bytes)
//======================================================================
int __fastcall TerrainGen::createChunkSource(TerrainGen *this, unsigned int a2, int a3, int a4)
{
  int v5; // r5
  int v6; // r0
  int j; // r4
  int i; // r1
  _DWORD *v9; // r0
  int k; // r1
  int v11; // r5
  int v12; // r2
  int v13; // r3
  int v14; // r12
  double *v15; // r7
  Ogre::Timer *v16; // r0
  __suseconds_t v17; // r1
  int v18; // r6
  Ogre::Timer *v19; // r0
  __suseconds_t v20; // r1
  int v21; // r4
  unsigned int v22; // r3
  int v24; // [sp+8h] [bp-DF4h]
  int v25; // [sp+Ch] [bp-DF0h]
  int v26; // [sp+14h] [bp-DE8h]
  int v27; // [sp+14h] [bp-DE8h]
  int v28; // [sp+18h] [bp-DE4h]
  int SystemTick; // [sp+1Ch] [bp-DE0h]
  int v30; // [sp+20h] [bp-DDCh]
  int v31; // [sp+24h] [bp-DD8h]
  int v32; // [sp+2Ch] [bp-DD0h]
  int v33; // [sp+30h] [bp-DCCh]
  int v34; // [sp+38h] [bp-DC4h]
  int v36; // [sp+44h] [bp-DB8h] BYREF
  int v37; // [sp+48h] [bp-DB4h]
  int v38; // [sp+4Ch] [bp-DB0h]
  double v39[2]; // [sp+50h] [bp-DACh] BYREF
  int v40; // [sp+60h] [bp-D9Ch]
  int v41; // [sp+64h] [bp-D98h]
  double v42; // [sp+68h] [bp-D94h]
  int v43; // [sp+70h] [bp-D8Ch]
  int v44; // [sp+74h] [bp-D88h]
  int v45; // [sp+78h] [bp-D84h]
  int v46; // [sp+7Ch] [bp-D80h]
  int v47; // [sp+80h] [bp-D7Ch]
  int v48; // [sp+84h] [bp-D78h]
  int v49; // [sp+88h] [bp-D74h]
  int v50; // [sp+8Ch] [bp-D70h]
  int v51; // [sp+90h] [bp-D6Ch]
  int v52; // [sp+94h] [bp-D68h]
  int v53; // [sp+98h] [bp-D64h]
  int v54; // [sp+9Ch] [bp-D60h]
  int v55; // [sp+A0h] [bp-D5Ch]
  int v56; // [sp+A4h] [bp-D58h]
  int v57; // [sp+A8h] [bp-D54h]
  int v58; // [sp+ACh] [bp-D50h]
  double v59[425]; // [sp+B0h] [bp-D4Ch] BYREF

  v26 = a3 / 4;
  v28 = a4 / 4;
  SystemTick = Ogre::Timer::getSystemTick(this, (unsigned int)(a3 >> 31) >> 30);
  v5 = 0;
  v30 = *((_DWORD *)this + 2);
  v36 = 0;
  v37 = 5;
  v38 = 17;
  anl::TArray2D<double>::destroy((int)&v36);
  v6 = operator new[](0x2A8u);
  v37 = 5;
  v36 = v6;
  v38 = 17;
  if ( v6 != 0 )
  {
    while ( v5 < v37 )
    {
      for ( i = 0; i < v38; ++i )
      {
        v9 = (_DWORD *)(v36 + 8 * (v37 * i + v5));
        *v9 = 0;
        v9[1] = 0;
      }
      ++v5;
    }
  }
  v51 = 0;
  v52 = -1074790400;
  v49 = 0;
  v50 = -1074790400;
  v47 = 0;
  v48 = -1074790400;
  v40 = 0;
  v41 = -1074790400;
  v57 = 0;
  v58 = 1072693248;
  v55 = 0;
  v56 = 1072693248;
  v53 = 0;
  v54 = 1072693248;
  v45 = 0;
  v46 = 1072693248;
  v43 = 0;
  v44 = 1072693248;
  v39[0] = (double)v26 * 0.0625;
  v42 = (double)(v26 + 4) * 0.0625;
  v39[1] = 0.0;
  for ( j = 0; j != 5; ++j )
  {
    anl::map2D(
      0,
      &v36,
      v30,
      v39,
      COERCE_UNSIGNED_INT64((double)(j + v28) * 0.0625),
      HIDWORD(COERCE_UNSIGNED_INT64((double)(j + v28) * 0.0625)));
    v32 = -8 * v37;
    v31 = 16 * v37;
    v33 = v38;
    v25 = v37;
    v27 = v36;
    for ( k = 0; k != 5; ++k )
    {
      v34 = v27 + 8 * (k + v31);
      v24 = 0;
      v11 = 0;
      do
      {
        if ( k < v25 && 16 - v11 < v33 && v27 != 0 )
        {
          v12 = *(_DWORD *)(v34 + v24);
          v13 = *(_DWORD *)(v34 + v24 + 4);
        }
        else
        {
          v13 = 0;
          v12 = 0;
        }
        v14 = 25 * v11++;
        v15 = &v59[5 * j + k + v14];
        *(_DWORD *)v15 = v12;
        *((_DWORD *)v15 + 1) = v13;
        v24 += v32;
      }
      while ( v11 != 17 );
    }
  }
  anl::TArray2D<double>::destroy((int)&v36);
  v18 = Ogre::Timer::getSystemTick(v16, v17);
  v19 = (Ogre::Timer *)Noise2ChunkData(COERCE_DOUBLE(a2 | 0x500000000LL), 17, 5, v59);
  v21 = Ogre::Timer::getSystemTick(v19, v20);
  Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/terrain_gen.cpp", (_BYTE *)&stru_258.st_name + 2, 2, v22);
  return Ogre::LogMessage((Ogre *)"createchunksource: t1=%d, t2=%d", (const char *)(v18 - SystemTick), v21 - v18);
}


//======================================================================
// TerrainGen::createChunkData_Normal(Chunk *)
// address: 0x002FBA28   size: 0x62 (98 bytes)
//======================================================================
__int64 __fastcall TerrainGen::createChunkData_Normal(TerrainGen *this, Chunk *a2)
{
  int v5; // [sp+0h] [bp-8014h]
  int v6; // [sp+4h] [bp-8010h]
  unsigned __int8 v7[32776]; // [sp+Ch] [bp-8008h] BYREF

  v5 = *((_DWORD *)a2 + 69);
  v6 = *((_DWORD *)a2 + 71);
  j_memset((char *)a2 + 292, 0, 0x100u);
  TerrainGen::createChunkSource(this, (unsigned int)v7, v5, v6);
  return TerrainGen::genTopHeight(this, v7, a2);
}


//======================================================================
// TerrainGen::createChunkData(Chunk *)
// address: 0x002FBA9C   size: 0x14 (20 bytes)
//======================================================================
__int16 *__fastcall TerrainGen::createChunkData(TerrainGen *this, Chunk *a2)
{
  if ( *(_DWORD *)this != 0 )
    return (__int16 *)TerrainGen::createChunkData_Normal(this, a2);
  else
    return TerrainGen::createChunkData_Flat(this, a2);
}

