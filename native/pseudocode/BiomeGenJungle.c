// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeGenJungle

//======================================================================
// BiomeGenJungle::~BiomeGenJungle()
// address: 0x002B8618   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN14BiomeGenJungleD1Ev'
void __fastcall BiomeGenJungle::~BiomeGenJungle(BiomeGenJungle *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0

  *(_DWORD *)this = &off_45E598;
  v2 = *((_DWORD *)this + 23);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 24);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 25);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  BiomeGenBase::~BiomeGenBase(this);
}


//======================================================================
// BiomeGenJungle::~BiomeGenJungle()
// address: 0x002B8658   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeGenJungle::~BiomeGenJungle(BiomeGenJungle *this)
{
  BiomeGenJungle::~BiomeGenJungle(this);
  operator delete(this);
}


//======================================================================
// BiomeGenJungle::getRandomWorldGenForTrees(ChunkRandGen *)
// address: 0x002B866A   size: 0x64 (100 bytes)
//======================================================================
int __fastcall BiomeGenJungle::getRandomWorldGenForTrees(BiomeGenJungle *this, ChunkRandGen *a2)
{
  int v5; // r6
  int v6; // r6

  if ( ChunkRandGen::get(a2) % 0xAu == 0 )
    return *((_DWORD *)this + 19);
  if ( (ChunkRandGen::get(a2) & 1) == 0 )
    return *((_DWORD *)this + 23);
  if ( ChunkRandGen::get(a2) % 3u != 0 )
  {
    v6 = *((_DWORD *)this + 18);
    *(_DWORD *)(v6 + 8) = ChunkRandGen::get(a2) % 7u + 4;
    return *((_DWORD *)this + 18);
  }
  else
  {
    v5 = *((_DWORD *)this + 25);
    *(_DWORD *)(v5 + 8) = ChunkRandGen::get(a2) % 0x14u + 10;
    return *((_DWORD *)this + 25);
  }
}


//======================================================================
// BiomeGenJungle::BiomeGenJungle(void)
// address: 0x002B86D0   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN14BiomeGenJungleC1Ev'
void __fastcall BiomeGenJungle::BiomeGenJungle(BiomeGenJungle *this)
{
  BiomeGenBase::BiomeGenBase(this);
  *(_DWORD *)this = &off_45E598;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
}


//======================================================================
// BiomeGenJungle::init(BiomeDef const*)
// address: 0x002B86F4   size: 0x60 (96 bytes)
//======================================================================
int __fastcall BiomeGenJungle::init(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  WorldGenHugeTree *v4; // r7
  int v5; // r3
  int v7; // [sp+0h] [bp-Ch]

  BiomeGenBase::init(a1);
  v2 = operator new(0x10u);
  *(_BYTE *)(v2 + 4) = 0;
  *(_DWORD *)(v2 + 12) = 203;
  *(_DWORD *)v2 = &off_45F328;
  *(_DWORD *)(v2 + 8) = 218;
  a1[23] = v2;
  v3 = operator new(8u);
  *(_BYTE *)(v3 + 4) = 0;
  *(_DWORD *)v3 = &off_45C1F8;
  a1[24] = v3;
  v4 = (WorldGenHugeTree *)operator new(0x14u);
  WorldGenHugeTree::WorldGenHugeTree(v4, false, 10, 203, 221);
  v5 = a1[18];
  a1[25] = v4;
  *(_DWORD *)(v5 + 20) = 221;
  *(_DWORD *)(v5 + 16) = 203;
  *(_BYTE *)(v5 + 12) = 1;
  return v7;
}


//======================================================================
// BiomeGenJungle::decorate(World *,ChunkRandGen *,int,int)
// address: 0x002B8768   size: 0x5E (94 bytes)
//======================================================================
int __fastcall BiomeGenJungle::decorate(BiomeGenJungle *this, World *a2, ChunkRandGen *a3, int a4, int a5)
{
  int v7; // r7
  int v8; // r0
  int result; // r0
  int i; // [sp+Ch] [bp-20h]
  _DWORD v13[4]; // [sp+1Ch] [bp-10h] BYREF

  BiomeGenBase::decorate(this, a2, a3, a4, a5);
  for ( i = 50; i != 0; --i )
  {
    v13[0] = a4 + (ChunkRandGen::get(a3) & 0xF) + 8;
    v13[1] = 64;
    v7 = ChunkRandGen::get(a3) & 0xF;
    v8 = *((_DWORD *)this + 24);
    v13[2] = a5 + v7 + 8;
    result = (*(int (__fastcall **)(int, World *, ChunkRandGen *, _DWORD *))(*(_DWORD *)v8 + 8))(v8, a2, a3, v13);
  }
  return result;
}

