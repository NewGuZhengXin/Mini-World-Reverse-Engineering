// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ChunkProviderGenerate

//======================================================================
// ChunkProviderGenerate::populate(int,int)
// address: 0x002EA580   size: 0x252 (594 bytes)
//======================================================================
int __fastcall ChunkProviderGenerate::populate(ChunkProviderGenerate *this, int a2, int a3)
{
  int v6; // r2
  ChunkRandGen *v7; // r6
  __int64 v8; // r2
  int v9; // r3
  char v10; // r0
  ChunkRandGen *v11; // r6
  unsigned int v12; // r1
  ChunkRandGen *v13; // r0
  int i; // r5
  int v15; // r7
  int v16; // r0
  int v17; // r6
  int v18; // r5
  World *v19; // r0
  int v20; // r3
  World *v21; // r0
  World *v22; // r0
  int result; // r0
  World *v24; // r0
  int v25; // r6
  int v26; // r0
  unsigned int v27; // [sp+10h] [bp-3Ch]
  int v28; // [sp+14h] [bp-38h]
  int v29; // [sp+14h] [bp-38h]
  int v30; // [sp+18h] [bp-34h]
  Chunk *PrecipitationHeight; // [sp+18h] [bp-34h]
  BiomeGenBase *BiomeGen; // [sp+1Ch] [bp-30h]
  int v33; // [sp+20h] [bp-2Ch]
  int v34; // [sp+24h] [bp-28h]
  int v35; // [sp+30h] [bp-1Ch] BYREF
  int v36; // [sp+34h] [bp-18h]
  int v37; // [sp+38h] [bp-14h]
  int v38; // [sp+3Ch] [bp-10h] BYREF
  Chunk *v39; // [sp+40h] [bp-Ch]
  int v40; // [sp+44h] [bp-8h]

  BlockSand::m_FallInstantly = 1;
  v30 = 16 * a2;
  v33 = 16 * a3;
  BiomeGen = (BiomeGenBase *)World::getBiomeGen(*((World **)this + 2), 16 * a2 + 16, 16 * a3 + 16);
  ChunkRandGen::setSeed64(*((_DWORD *)this + 3), *((_QWORD *)this + 2));
  v34 = *((_DWORD *)this + 5);
  v28 = *((_DWORD *)this + 4);
  v6 = a2 * ChunkRandGen::get(*((ChunkRandGen **)this + 3));
  v7 = *((ChunkRandGen **)this + 3);
  LODWORD(v8) = (a3 * ChunkRandGen::get(v7) + v6) ^ v28;
  HIDWORD(v8) = v34;
  ChunkRandGen::setSeed64((int)v7, v8);
  v9 = **((_DWORD **)BiomeGen + 1);
  if ( v9 != 2 && v9 != 13 && ChunkRandGen::get(*((ChunkRandGen **)this + 3)) << 30 == 0 )
  {
    v35 = v30 + (ChunkRandGen::get(*((ChunkRandGen **)this + 3)) & 0xF) + 8;
    v36 = ChunkRandGen::get(*((ChunkRandGen **)this + 3)) & 0x7F;
    v25 = ChunkRandGen::get(*((ChunkRandGen **)this + 3)) & 0xF;
    v26 = *((_DWORD *)this + 14);
    v37 = v33 + v25 + 8;
    (*(void (__fastcall **)(int, _DWORD, _DWORD, int *))(*(_DWORD *)v26 + 8))(
      v26,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      &v35);
  }
  if ( ChunkRandGen::get(*((ChunkRandGen **)this + 3)) << 29 == 0 )
  {
    v10 = ChunkRandGen::get(*((ChunkRandGen **)this + 3));
    v11 = *((ChunkRandGen **)this + 3);
    v35 = v30 + (v10 & 0xF) + 8;
    v27 = ChunkRandGen::get(v11);
    v12 = ChunkRandGen::get(v11) % (v27 % 0x78 + 8);
    v13 = *((ChunkRandGen **)this + 3);
    v36 = v12;
    v37 = v33 + (ChunkRandGen::get(v13) & 0xF) + 8;
    if ( v36 <= 62 || ChunkRandGen::get(*((ChunkRandGen **)this + 3)) % 0xAu == 0 )
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, int *))(**((_DWORD **)this + 15) + 8))(
        *((_DWORD *)this + 15),
        *((_DWORD *)this + 2),
        *((_DWORD *)this + 3),
        &v35);
  }
  for ( i = 8; i != 0; --i )
  {
    v35 = v30 + (ChunkRandGen::get(*((ChunkRandGen **)this + 3)) & 0xF) + 8;
    v36 = ChunkRandGen::get(*((ChunkRandGen **)this + 3)) & 0x7F;
    v15 = ChunkRandGen::get(*((ChunkRandGen **)this + 3)) & 0xF;
    v16 = *((_DWORD *)this + 16);
    v37 = v33 + v15 + 8;
    (*(void (__fastcall **)(int, _DWORD, _DWORD, int *))(*(_DWORD *)v16 + 8))(
      v16,
      *((_DWORD *)this + 2),
      *((_DWORD *)this + 3),
      &v35);
  }
  (*(void (__fastcall **)(BiomeGenBase *, _DWORD, _DWORD, int, int))(*(_DWORD *)BiomeGen + 12))(
    BiomeGen,
    *((_DWORD *)this + 2),
    *((_DWORD *)this + 3),
    v30,
    v33);
  v17 = v30 + 8;
  ClientActorMgr::performWorldGenSpawning(
    *(_DWORD *)(*((_DWORD *)this + 2) + 132),
    BiomeGen,
    v30 + 8,
    v33 + 8,
    0x10u,
    0x10u,
    *((ChunkRandGen **)this + 3));
  v29 = v30 + 24;
  do
  {
    v18 = v33 + 8;
    do
    {
      PrecipitationHeight = World::getPrecipitationHeight(*((World **)this + 2), v17, v18);
      v39 = (Chunk *)((char *)PrecipitationHeight - 1);
      v19 = *((World **)this + 2);
      v38 = v17;
      v40 = v18;
      if ( World::canBlockFreeze(v19, (const WCoord *)&v38, 0) != 0 )
      {
        v40 = v18;
        v21 = *((World **)this + 2);
        v39 = (Chunk *)((char *)PrecipitationHeight - 1);
        v38 = v17;
        World::setBlockAll(v21, (const WCoord *)&v38, 123, 0, 2);
      }
      v22 = *((World **)this + 2);
      v38 = v17;
      v39 = PrecipitationHeight;
      v40 = v18;
      result = World::canSnowAt(v22, (const WCoord *)&v38, (int)PrecipitationHeight, v20);
      if ( result != 0 )
      {
        v40 = v18;
        v24 = *((World **)this + 2);
        v39 = PrecipitationHeight;
        v38 = v17;
        result = World::setBlockAll(v24, (const WCoord *)&v38, 115, 0, 2);
      }
      ++v18;
    }
    while ( v18 != v33 + 24 );
    ++v17;
  }
  while ( v17 != v29 );
  BlockSand::m_FallInstantly = 0;
  return result;
}


//======================================================================
// ChunkProviderGenerate::replaceBlocksForBiome(int,int,unsigned short *,std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>> &)
// address: 0x002EA8E8   size: 0x19A (410 bytes)
//======================================================================
unsigned int __fastcall ChunkProviderGenerate::replaceBlocksForBiome(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // r7
  double v7; // r4
  int v8; // r0
  int v9; // r3
  int v10; // r4
  unsigned int v11; // r0
  unsigned int result; // r0
  signed int v13; // r1
  int v14; // r5
  _WORD *v15; // r5
  int v16; // r3
  int v18; // [sp+30h] [bp-2Ch]
  int v19; // [sp+34h] [bp-28h]
  int v20; // [sp+38h] [bp-24h]
  int v21; // [sp+3Ch] [bp-20h]
  int i; // [sp+40h] [bp-1Ch]
  int v23; // [sp+44h] [bp-18h]
  int v24; // [sp+48h] [bp-14h]
  float v26; // [sp+50h] [bp-Ch]

  NoiseGeneratorOctaves::generateNoiseOctaves(
    *(_DWORD **)(a1 + 184),
    (void **)(a1 + 256),
    16 * a2,
    16 * a3,
    0,
    16,
    16,
    1,
    0.0625,
    0.0625,
    0.0625);
  for ( i = 0; i != 16; ++i )
  {
    v21 = 0;
    v24 = 16 * i;
    do
    {
      v6 = *(_DWORD *)(4 * (v21 + v24) + *a5);
      v26 = *(float *)(*(_DWORD *)(v6 + 4) + 44);
      v7 = *(double *)(*(_DWORD *)(a1 + 256) + 8 * (16 * v21 + i)) / 3.0 + 3.0;
      v8 = (int)(v7 + ChunkRandGen::getDouble((ChunkRandGen *)*(_DWORD *)(a1 + 12)) * 0.25);
      v9 = *(_DWORD *)(v6 + 4);
      v23 = v8;
      v20 = *(_DWORD *)(v9 + 56);
      v19 = *(_DWORD *)(v9 + 52);
      v18 = 127;
      v10 = -1;
      do
      {
        v11 = ChunkRandGen::get(*(ChunkRandGen **)(a1 + 12));
        v13 = v11 % 5;
        result = v11 / 5;
        v14 = 2 * ((v18 << 8) | v21 | v24);
        if ( v18 <= v13 )
        {
          *(_WORD *)(a4 + v14) = 1;
          continue;
        }
        v15 = (_WORD *)(a4 + v14);
        if ( *v15 != 0 )
        {
          if ( *v15 != 104 )
            continue;
          if ( v10 == -1 )
          {
            if ( v23 > 0 )
            {
              if ( v18 > 58 )
              {
                if ( v18 <= 64 )
                {
                  v16 = *(_DWORD *)(v6 + 4);
                  v20 = *(_DWORD *)(v16 + 56);
                  v19 = *(_DWORD *)(v16 + 52);
                }
LABEL_14:
                if ( v18 > 62 )
                  goto LABEL_19;
              }
              if ( v20 == 0 )
              {
                result = v26 < 0.15;
                v20 = 123;
                if ( v26 >= 0.15 )
                  v20 = 3;
              }
              if ( v18 <= 61 )
                *v15 = v19;
              else
LABEL_19:
                *v15 = v20;
              v10 = v23;
              continue;
            }
            v19 = (unsigned __int16)*v15;
            v20 = 0;
            goto LABEL_14;
          }
          if ( v10 > 0 )
          {
            --v10;
            *v15 = v19;
            if ( v10 == 0 && v19 == 106 )
            {
              result = ChunkRandGen::get(*(ChunkRandGen **)(a1 + 12));
              v10 = result & 3;
              v19 = 108;
            }
          }
        }
        else
        {
          v10 = -1;
        }
      }
      while ( v18-- != 0 );
      ++v21;
    }
    while ( v21 != 16 );
  }
  return result;
}


//======================================================================
// ChunkProviderGenerate::noise2ChunkData(unsigned short *,int,int,int,std::vector<double,std::allocator<double>> &)
// address: 0x002EAAA8   size: 0x2EE (750 bytes)
//======================================================================
int __fastcall ChunkProviderGenerate::noise2ChunkData(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
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
                if ( v17 + v20 > 62 )
                  *v14 = 0;
                else
                  *v14 = 3;
              }
              else
              {
                *v14 = 104;
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
// ChunkProviderGenerate::~ChunkProviderGenerate()
// address: 0x002EB0E8   size: 0x106 (262 bytes)
//======================================================================
// Alternative name is '_ZN21ChunkProviderGenerateD1Ev'
void __fastcall ChunkProviderGenerate::~ChunkProviderGenerate(ChunkProviderGenerate *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  void *v6; // r5
  void *v7; // r5
  void *v8; // r5
  void *v9; // r5
  void *v10; // r5
  void *v11; // r5
  void *v12; // r0

  *(_DWORD *)this = &off_461ED0;
  v2 = *((_DWORD *)this + 14);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 15);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 16);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((_DWORD *)this + 17);
  if ( v5 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  v6 = *((void **)this + 43);
  if ( v6 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 43));
    operator delete(v6);
  }
  v7 = *((void **)this + 44);
  if ( v7 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 44));
    operator delete(v7);
  }
  v8 = *((void **)this + 45);
  if ( v8 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 45));
    operator delete(v8);
  }
  v9 = *((void **)this + 46);
  if ( v9 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 46));
    operator delete(v9);
  }
  v10 = *((void **)this + 47);
  if ( v10 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 47));
    operator delete(v10);
  }
  v11 = *((void **)this + 48);
  if ( v11 != nullptr )
  {
    NoiseGeneratorOctaves::~NoiseGeneratorOctaves(*((NoiseGeneratorOctaves **)this + 48));
    operator delete(v11);
  }
  std::_Vector_base<double>::~_Vector_base((void **)this + 64);
  std::_Vector_base<double>::~_Vector_base((void **)this + 61);
  std::_Vector_base<double>::~_Vector_base((void **)this + 58);
  std::_Vector_base<double>::~_Vector_base((void **)this + 55);
  std::_Vector_base<double>::~_Vector_base((void **)this + 52);
  std::_Vector_base<double>::~_Vector_base((void **)this + 49);
  v12 = *((void **)this + 11);
  if ( v12 != nullptr )
    operator delete(v12);
  ChunkProvider::~ChunkProvider((void **)this);
}


//======================================================================
// ChunkProviderGenerate::~ChunkProviderGenerate()
// address: 0x002EB1F4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ChunkProviderGenerate::~ChunkProviderGenerate(ChunkProviderGenerate *this)
{
  ChunkProviderGenerate::~ChunkProviderGenerate(this);
  operator delete(this);
}


//======================================================================
// ChunkProviderGenerate::ChunkProviderGenerate(World *,bool,unsigned int,unsigned int)
// address: 0x002EB208   size: 0x1CA (458 bytes)
//======================================================================
// Alternative name is '_ZN21ChunkProviderGenerateC1EP5Worldbjj'
void __fastcall ChunkProviderGenerate::ChunkProviderGenerate(
        ChunkProviderGenerate *this,
        World *a2,
        bool a3,
        unsigned int a4,
        unsigned int a5)
{
  BiomeManager *v7; // r6
  int v8; // r1
  int i; // r7
  int j; // r6
  double v11; // r0
  int v12; // r3
  int v13; // r0
  int v14; // r0
  int v15; // r0
  _DWORD *v16; // r6
  NoiseGeneratorOctaves *v17; // r5
  NoiseGeneratorOctaves *v18; // r5
  NoiseGeneratorOctaves *v19; // r5
  NoiseGeneratorOctaves *v20; // r5
  NoiseGeneratorOctaves *v21; // r5
  NoiseGeneratorOctaves *v22; // r5

  ChunkProvider::ChunkProvider(this, a2, a4, a5);
  *(_DWORD *)this = &off_461ED0;
  *((_BYTE *)this + 40) = a3;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 50) = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 0;
  *((_DWORD *)this + 58) = 0;
  *((_DWORD *)this + 59) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  v7 = (BiomeManager *)operator new(0x28u);
  BiomeManagerGenerate::BiomeManagerGenerate(v7, v8, *((_DWORD *)this + 4), *((_DWORD *)this + 5), 1);
  *((_DWORD *)this + 6) = v7;
  for ( i = -2; i != 3; ++i )
  {
    for ( j = -2; j != 3; ++j )
    {
      v11 = j_sqrt((float)((float)(i * i + j * j) + 0.2));
      v12 = 20 * j;
      *(float *)&v11 = v11;
      *(float *)((char *)this + 4 * i + v12 + 120) = 10.0 / *(float *)&v11;
    }
  }
  v13 = operator new(0x10u);
  *(_BYTE *)(v13 + 4) = 0;
  *(_DWORD *)v13 = &off_4618E8;
  *(_DWORD *)(v13 + 8) = 3;
  *(_DWORD *)(v13 + 12) = 104;
  *((_DWORD *)this + 14) = v13;
  v14 = operator new(0x10u);
  *(_BYTE *)(v14 + 4) = 0;
  *(_DWORD *)(v14 + 8) = 5;
  *(_DWORD *)v14 = &off_4618E8;
  *(_DWORD *)(v14 + 12) = 104;
  *((_DWORD *)this + 15) = v14;
  v15 = operator new(0xCu);
  *(_BYTE *)(v15 + 4) = 0;
  *(_DWORD *)v15 = &off_4607F8;
  *(_DWORD *)(v15 + 8) = 801;
  *((_DWORD *)this + 16) = v15;
  v16 = (_DWORD *)operator new(0x14u);
  *v16 = &off_45EA48;
  v16[1] = 8;
  ChunkRandGen::ChunkRandGen((ChunkRandGen *)(v16 + 2));
  *v16 = &off_460F80;
  *((_DWORD *)this + 17) = v16;
  v17 = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(v17, *((ChunkRandGen **)this + 3), 16);
  *((_DWORD *)this + 43) = v17;
  v18 = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(v18, *((ChunkRandGen **)this + 3), 16);
  *((_DWORD *)this + 44) = v18;
  v19 = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(v19, *((ChunkRandGen **)this + 3), 8);
  *((_DWORD *)this + 45) = v19;
  v20 = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(v20, *((ChunkRandGen **)this + 3), 4);
  *((_DWORD *)this + 46) = v20;
  v21 = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(v21, *((ChunkRandGen **)this + 3), 16);
  *((_DWORD *)this + 47) = v21;
  v22 = (NoiseGeneratorOctaves *)operator new(0x10u);
  NoiseGeneratorOctaves::NoiseGeneratorOctaves(v22, *((ChunkRandGen **)this + 3), 8);
  *((_DWORD *)this + 48) = v22;
}


//======================================================================
// ChunkProviderGenerate::initializeNoiseField(std::vector<double,std::allocator<double>> &,int,int,int,int,int,int)
// address: 0x002EB458   size: 0x59C (1436 bytes)
//======================================================================
int __fastcall ChunkProviderGenerate::initializeNoiseField(
        int a1,
        int *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned int v10; // r3
  int v11; // r2
  __int64 v12; // r0
  int result; // r0
  float v14; // r4
  int v15; // r3
  int v16; // r7
  int v17; // r6
  float v18; // r5
  double v19; // r0
  double v20; // r4
  double v21; // r4
  double v22; // r4
  double v23; // r0
  double v24; // r2
  double v25; // r4
  double *v26; // r3
  double v27; // r6
  double v28; // r0
  double v29; // r4
  float v30; // [sp+30h] [bp-6Ch]
  int k; // [sp+30h] [bp-6Ch]
  int v32; // [sp+34h] [bp-68h]
  int j; // [sp+38h] [bp-64h]
  int v34; // [sp+38h] [bp-64h]
  float v35; // [sp+40h] [bp-5Ch]
  double v36; // [sp+40h] [bp-5Ch]
  float v37; // [sp+48h] [bp-54h]
  double v38; // [sp+48h] [bp-54h]
  int i; // [sp+60h] [bp-3Ch]
  int v42; // [sp+64h] [bp-38h]
  int v43; // [sp+68h] [bp-34h]
  int v44; // [sp+6Ch] [bp-30h]
  int v45; // [sp+70h] [bp-2Ch]
  float v46; // [sp+74h] [bp-28h]
  float v47; // [sp+78h] [bp-24h]
  int v48; // [sp+7Ch] [bp-20h]
  int v49; // [sp+8Ch] [bp-10h]

  LODWORD(v12) = a2;
  v10 = a7 * a6 * a8;
  v11 = *a2;
  HIDWORD(v12) = (a2[1] - *a2) >> 3;
  if ( v10 <= HIDWORD(v12) )
  {
    if ( v10 < HIDWORD(v12) )
      a2[1] = v11 + 8 * v10;
  }
  else
  {
    HIDWORD(v12) = v10 - HIDWORD(v12);
    std::vector<double>::_M_default_append(v12);
  }
  NoiseGeneratorOctaves::generateNoiseOctaves(*(_DWORD **)(a1 + 188), (void **)(a1 + 244), a3, a5, a6, a8, 200.0, 200.0);
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *(_DWORD **)(a1 + 180),
    (void **)(a1 + 232),
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    8.55515,
    4.277575,
    8.55515);
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *(_DWORD **)(a1 + 172),
    (void **)(a1 + 208),
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    684.412,
    684.412,
    684.412);
  NoiseGeneratorOctaves::generateNoiseOctaves(
    *(_DWORD **)(a1 + 176),
    (void **)(a1 + 220),
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    684.412,
    684.412,
    684.412);
  v48 = 4 * (a6 + 4);
  result = a7 & (~a7 >> 31);
  v49 = (a8 & (~a8 >> 31)) * result;
  v32 = 0;
  v45 = 0;
  v44 = 0;
  while ( v32 < a6 )
  {
    v42 = 4 * v32;
    v43 = v44;
    for ( i = 0; i < a8; ++i )
    {
      v14 = 0.0;
      v15 = *(_DWORD *)(a1 + 44);
      v16 = 0;
      v37 = 0.0;
      v30 = 0.0;
      do
      {
        v17 = v15 + v42 + v16;
        for ( j = 0; j != 100; j += 20 )
        {
          v35 = *(float *)(*(_DWORD *)(*(_DWORD *)v17 + 4) + 36);
          v18 = *(float *)(a1 + 64 + v16 + j + 8) / (float)(v35 + 2.0);
          if ( v35 > *(float *)(*(_DWORD *)(*(_DWORD *)(v15 + 8 * a6 + v42 + 40) + 4) + 36) )
            v18 = v18 * 0.5;
          v37 = v37 + (float)(v18 * *(float *)(*(_DWORD *)(*(_DWORD *)v17 + 4) + 40));
          v14 = v14 + (float)(v35 * v18);
          v30 = v30 + v18;
          v17 += v48;
        }
        v16 += 4;
      }
      while ( v16 != 20 );
      v46 = (float)((float)(v37 / v30) * 0.9) + 0.1;
      v47 = (float)((float)((float)(COERCE_FLOAT(100) / v30) * 4.0) - 1.0) * 0.125;
      v19 = *(double *)(*(_DWORD *)(a1 + 244) + 8 * (i + v45)) / 8000.0;
      v20 = v19;
      if ( v19 < 0.0 )
        v20 = COERCE_DOUBLE(__PAIR64__(HIDWORD(v19), LODWORD(v20)) + 0x8000000000000000LL) * 0.3;
      v21 = v20 * 3.0 - 2.0;
      if ( v21 >= 0.0 )
      {
        if ( v21 > 1.0 )
          v21 = 1.0;
        v23 = v21;
        v24 = 0.125;
      }
      else
      {
        v22 = v21 * 0.5;
        if ( v22 < -1.0 )
          v22 = -1.0;
        v23 = v22 / 1.4;
        v24 = 0.5;
      }
      v38 = v23 * v24;
      for ( k = 0; k < a7; ++k )
      {
        v25 = ((double)k - ((double)a7 * 0.5 + (v47 + v38 * 0.2) * (double)a7 * 0.0625 * 4.0))
            * 12.0
            * 128.0
            * 0.0078125
            / v46;
        if ( v25 < 0.0 )
          v25 = v25 * 4.0;
        v34 = 8 * (k + v43);
        v26 = (double *)(*(_DWORD *)(a1 + 220) + v34);
        v27 = (*(double *)(*(_DWORD *)(a1 + 232) + v34) / 10.0 + 1.0) * 0.5;
        if ( v27 < 0.0 )
        {
          v28 = *(double *)(*(_DWORD *)(a1 + 208) + 8 * (k + v43)) * 0.001953125;
        }
        else
        {
          v28 = *v26 * 0.001953125;
          if ( v27 <= 1.0 )
          {
            v36 = *(double *)(*(_DWORD *)(a1 + 208) + 8 * (k + v43)) * 0.001953125;
            v28 = v36 + (*v26 * 0.001953125 - v36) * v27;
          }
        }
        v29 = v28 - v25;
        if ( a7 - 3 <= k )
          v29 = v29 * (1.0 - (double)(k - a7 + 4) / 3.0) + (double)(k - a7 + 4) / 3.0 * -10.0;
        *(double *)(*a2 + v34) = v29;
      }
      v43 += a7 & (~a7 >> 31);
      v42 += v48;
    }
    v44 += v49;
    v45 += a8 & (~a8 >> 31);
    result = ++v32;
  }
  return result;
}


//======================================================================
// ChunkProviderGenerate::generateTerrain(unsigned short *,int,int)
// address: 0x002EBA68   size: 0x58 (88 bytes)
//======================================================================
int __fastcall ChunkProviderGenerate::generateTerrain(
        ChunkProviderGenerate *this,
        unsigned __int16 *a2,
        int a3,
        int a4)
{
  int v6; // [sp+14h] [bp-10h]
  int v7; // [sp+18h] [bp-Ch]

  v6 = 4 * a3;
  v7 = 4 * a4;
  (*(void (__fastcall **)(_DWORD, char *, int, int, int, int))(**((_DWORD **)this + 6) + 8))(
    *((_DWORD *)this + 6),
    (char *)this + 44,
    4 * a3 - 2,
    4 * a4 - 2,
    9,
    9);
  ChunkProviderGenerate::initializeNoiseField((int)this, (int *)this + 49, v6, 0, v7, 5, 17, 5);
  return ChunkProviderGenerate::noise2ChunkData((int)this, (int)a2, 5, 17, 5, (_DWORD *)this + 49);
}


//======================================================================
// ChunkProviderGenerate::createChunkData(unsigned short *&,unsigned char *&,int,int)
// address: 0x002EBAC0   size: 0xA2 (162 bytes)
//======================================================================
unsigned __int8 *__fastcall ChunkProviderGenerate::createChunkData(
        ChunkProviderGenerate *this,
        unsigned __int16 **a2,
        unsigned __int8 **a3,
        int a4,
        int a5)
{
  unsigned __int8 *result; // r0
  int i; // r2
  int j; // r3
  unsigned __int16 *v12; // [sp+14h] [bp-8h] BYREF

  v12 = (unsigned __int16 *)operator new[](0x10000u);
  ChunkProviderGenerate::generateTerrain(this, v12, a4, a5);
  (*(void (__fastcall **)(_DWORD, char *, int, int, int, int))(**((_DWORD **)this + 6) + 12))(
    *((_DWORD *)this + 6),
    (char *)this + 44,
    16 * a4,
    16 * a5,
    16,
    16);
  ChunkProviderGenerate::replaceBlocksForBiome((int)this, a4, a5, (int)v12, (_DWORD *)this + 11);
  MapGenBase::generate(*((_DWORD *)this + 17), (int)this, *((_DWORD *)this + 2), a4, a5, (int)&v12);
  result = (unsigned __int8 *)operator new[](0x100u);
  for ( i = 0; i != 256; i += 16 )
  {
    for ( j = 0; j != 16; ++j )
      result[i + j] = **(_DWORD **)(*(_DWORD *)(4 * (j + i) + *((_DWORD *)this + 11)) + 4);
  }
  *a2 = v12;
  *a3 = result;
  return result;
}

