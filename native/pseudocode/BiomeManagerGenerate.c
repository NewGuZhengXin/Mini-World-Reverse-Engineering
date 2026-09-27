// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeManagerGenerate

//======================================================================
// BiomeManagerGenerate::getBiomeGen(int)
// address: 0x002A1B10   size: 0x8 (8 bytes)
//======================================================================
int __fastcall BiomeManagerGenerate::getBiomeGen(BiomeManagerGenerate *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 6));
}


//======================================================================
// BiomeManagerGenerate::~BiomeManagerGenerate()
// address: 0x002A1BE0   size: 0x52 (82 bytes)
//======================================================================
// Alternative name is '_ZN20BiomeManagerGenerateD1Ev'
void __fastcall BiomeManagerGenerate::~BiomeManagerGenerate(BiomeManagerGenerate *this)
{
  BiomeManagerGenerate *v1; // r4
  unsigned int v2; // r5
  int v3; // r3
  void *v4; // r0

  v1 = this;
  v2 = 0;
  *(_DWORD *)this = &off_45CB08;
  while ( 1 )
  {
    v3 = *((_DWORD *)v1 + 6);
    if ( v2 >= (*((_DWORD *)v1 + 7) - v3) >> 2 )
      break;
    this = *(BiomeManagerGenerate **)(4 * v2 + v3);
    if ( this != nullptr )
      this = (BiomeManagerGenerate *)(*(int (__fastcall **)(BiomeManagerGenerate *))(*(_DWORD *)this + 4))(this);
    ++v2;
  }
  GenLayer::releaseAllBiomeGenerators(this);
  v4 = *((void **)v1 + 6);
  if ( v4 != nullptr )
    operator delete(v4);
  std::_Vector_base<int>::~_Vector_base((void **)v1 + 3);
  *(_DWORD *)v1 = &off_45CAD0;
}


//======================================================================
// BiomeManagerGenerate::~BiomeManagerGenerate()
// address: 0x002A1C3C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeManagerGenerate::~BiomeManagerGenerate(BiomeManagerGenerate *this)
{
  BiomeManagerGenerate::~BiomeManagerGenerate(this);
  operator delete(this);
}


//======================================================================
// BiomeManagerGenerate::findBiomePosition(WCoord &,int,int,int,ChunkRandGen &)
// address: 0x002A1C4E   size: 0x14E (334 bytes)
//======================================================================
unsigned int __fastcall BiomeManagerGenerate::findBiomePosition(
        BiomeManagerGenerate *this,
        WCoord *a2,
        int a3,
        int a4,
        int a5,
        ChunkRandGen *a6)
{
  int v8; // r0
  int i; // r4
  char *v10; // r2
  int *v11; // r1
  char *v12; // r3
  int v13; // r0
  int v14; // r0
  int j; // [sp+8h] [bp-3Ch]
  int v17; // [sp+Ch] [bp-38h]
  int v18; // [sp+10h] [bp-34h]
  int v19; // [sp+14h] [bp-30h]
  int v20; // [sp+18h] [bp-2Ch]
  int v21; // [sp+1Ch] [bp-28h]
  int v22; // [sp+20h] [bp-24h]
  char *v23; // [sp+24h] [bp-20h]
  int v24; // [sp+28h] [bp-1Ch]
  void *v25[4]; // [sp+34h] [bp-10h] BYREF

  v21 = (a3 - a5) >> 2;
  v18 = (a4 - a5) >> 2;
  v8 = *((_DWORD *)this + 1);
  v24 = ((a4 + a5) >> 2) - v18 + 1;
  memset(v25, 0, 12);
  v22 = ((a3 + a5) >> 2) - v21 + 1;
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v8 + 8))(v8, v25, v21, v18, v22, v24);
  v19 = v18;
  v20 = 0;
  v17 = 0;
LABEL_2:
  if ( v19 - v18 < v24 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= v22 )
      {
        ++v19;
        v20 += v22;
        goto LABEL_2;
      }
      v10 = *((char **)this + 3);
      v23 = *((char **)this + 4);
      v11 = (int *)((char *)v25[0] + 4 * i + 4 * v20);
      for ( j = (v23 - v10) >> 4; ; --j )
      {
        v12 = v10;
        if ( j <= 0 )
          break;
        v13 = *v11;
        if ( *(_DWORD *)v10 == *v11 )
          goto LABEL_25;
        if ( *((_DWORD *)v10 + 1) == v13 )
        {
          v12 = v10 + 4;
          goto LABEL_26;
        }
        if ( *((_DWORD *)v10 + 2) == v13 )
        {
          v12 = v10 + 8;
          goto LABEL_26;
        }
        v10 += 16;
        if ( *((_DWORD *)v10 - 1) == v13 )
        {
          v12 += 12;
          goto LABEL_26;
        }
      }
      v14 = (v23 - v10) >> 2;
      if ( v14 == 2 )
        goto LABEL_21;
      if ( v14 == 3 )
        break;
      if ( v14 != 1 )
        continue;
LABEL_23:
      if ( *(_DWORD *)v12 != *v11 )
        continue;
LABEL_26:
      if ( v12 != v23 )
      {
        ChunkRandGen::_dorand48((unsigned __int16 *)a6);
        if ( ((*((unsigned __int16 *)a6 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a6 + 1)) % (v17 + 1) == 0 )
        {
          *((_DWORD *)a2 + 1) = 0;
          ++v17;
          *(_DWORD *)a2 = 4 * (i + v21);
          *((_DWORD *)a2 + 2) = 4 * v19;
        }
      }
    }
    if ( *(_DWORD *)v10 == *v11 )
    {
LABEL_25:
      v12 = v10;
      goto LABEL_26;
    }
    v12 = v10 + 4;
LABEL_21:
    if ( *(_DWORD *)v12 == *v11 )
      goto LABEL_26;
    v12 += 4;
    goto LABEL_23;
  }
  std::_Vector_base<int>::~_Vector_base(v25);
  return (unsigned int)((v17 >> 31) - v17) >> 31;
}


//======================================================================
// BiomeManagerGenerate::getBiomesForGeneration(std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>> &,int,int,int,int)
// address: 0x002A1EC2   size: 0x6C (108 bytes)
//======================================================================
void **__fastcall BiomeManagerGenerate::getBiomesForGeneration(_DWORD *a1, int *a2)
{
  int v3; // r0
  unsigned int i; // r3
  int v6; // r1
  int v7; // r7
  int v8; // r0
  _DWORD *v10; // [sp+Ch] [bp-10h] BYREF
  int v11; // [sp+10h] [bp-Ch]
  int v12; // [sp+14h] [bp-8h]

  v3 = a1[1];
  v12 = 0;
  v11 = 0;
  v10 = nullptr;
  (*(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v3 + 8))(v3, &v10);
  std::vector<BiomeGenBase *>::resize((int)a2, (v11 - (int)v10) >> 2);
  for ( i = 0; i < (v11 - (int)v10) >> 2; ++i )
  {
    v6 = a1[9];
    v7 = a1[6];
    v8 = *a2;
    if ( v6 < 0 )
      *(_DWORD *)(v8 + 4 * i) = *(_DWORD *)(v7 + 4 * v10[i]);
    else
      *(_DWORD *)(v8 + 4 * i) = *(_DWORD *)(v7 + 4 * v6);
  }
  return std::_Vector_base<int>::~_Vector_base((void **)&v10);
}


//======================================================================
// BiomeManagerGenerate::getBiomeGenAt(std::vector<BiomeGenBase *,std::allocator<BiomeGenBase *>> &,int,int,int,int)
// address: 0x002A1F38   size: 0x6C (108 bytes)
//======================================================================
void **__fastcall BiomeManagerGenerate::getBiomeGenAt(_DWORD *a1, int *a2)
{
  int v3; // r0
  unsigned int i; // r3
  int v6; // r1
  int v7; // r7
  int v8; // r0
  _DWORD *v10; // [sp+Ch] [bp-10h] BYREF
  int v11; // [sp+10h] [bp-Ch]
  int v12; // [sp+14h] [bp-8h]

  v3 = a1[2];
  v12 = 0;
  v11 = 0;
  v10 = nullptr;
  (*(void (__fastcall **)(int, _DWORD **))(*(_DWORD *)v3 + 8))(v3, &v10);
  std::vector<BiomeGenBase *>::resize((int)a2, (v11 - (int)v10) >> 2);
  for ( i = 0; i < (v11 - (int)v10) >> 2; ++i )
  {
    v6 = a1[9];
    v7 = a1[6];
    v8 = *a2;
    if ( v6 < 0 )
      *(_DWORD *)(v8 + 4 * i) = *(_DWORD *)(v7 + 4 * v10[i]);
    else
      *(_DWORD *)(v8 + 4 * i) = *(_DWORD *)(v7 + 4 * v6);
  }
  return std::_Vector_base<int>::~_Vector_base((void **)&v10);
}


//======================================================================
// BiomeManagerGenerate::BiomeManagerGenerate(unsigned long long,TERRAIN_TYPE)
// address: 0x002A2118   size: 0xE4 (228 bytes)
//======================================================================
// Alternative name is '_ZN20BiomeManagerGenerateC1Ey12TERRAIN_TYPE'
BiomeManager *__fastcall BiomeManagerGenerate::BiomeManagerGenerate(BiomeManager *a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // r2
  unsigned int v7; // r1
  unsigned int i; // r6
  int v9; // r0
  _DWORD *v11; // [sp+Ch] [bp-18h]
  void *v14[2]; // [sp+1Ch] [bp-8h] BYREF

  BiomeManager::BiomeManager(a1);
  *(_DWORD *)a1 = &off_45CB08;
  *((_DWORD *)a1 + 9) = -1;
  v6 = (_DWORD *)Ogre::Singleton<DefManager>::ms_Singleton;
  *((_DWORD *)a1 + 3) = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  *((_DWORD *)a1 + 6) = 0;
  *((_DWORD *)a1 + 7) = 0;
  *((_DWORD *)a1 + 8) = 0;
  v7 = (v6[1] - *v6) >> 2;
  v14[0] = nullptr;
  std::vector<BiomeGenBase *>::resize((int)a1 + 24, v7, v14);
  for ( i = 0;
        i < (*(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 4)
           - *(_DWORD *)Ogre::Singleton<DefManager>::ms_Singleton) >> 2;
        ++i )
  {
    v9 = *(_DWORD *)(*(_DWORD *)Ogre::Singleton<DefManager>::ms_Singleton + 4 * i);
    if ( v9 != 0 )
    {
      v11 = (_DWORD *)(*((_DWORD *)a1 + 6) + 4 * i);
      *v11 = BiomeGenBase::createBiomeGen(v9);
    }
  }
  v14[0] = &dword_0 + 1;
  std::vector<int>::emplace_back<int>((int)a1 + 12, v14);
  v14[0] = &dword_0 + 3;
  std::vector<int>::emplace_back<int>((int)a1 + 12, v14);
  v14[0] = &byte_6;
  std::vector<int>::emplace_back<int>((int)a1 + 12, v14);
  v14[0] = byte_9 + 6;
  std::vector<int>::emplace_back<int>((int)a1 + 12, v14);
  v14[0] = byte_9 + 5;
  std::vector<int>::emplace_back<int>((int)a1 + 12, v14);
  v14[0] = &byte_7;
  std::vector<int>::emplace_back<int>((int)a1 + 12, v14);
  v14[0] = &word_10 + 1;
  std::vector<int>::emplace_back<int>((int)a1 + 12, v14);
  GenLayer::initializeAllBiomeGenerators(a3, a4, a5, (char *)a1 + 4, (char *)a1 + 8);
  return a1;
}

