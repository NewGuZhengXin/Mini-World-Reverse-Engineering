// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BiomeGenHills

//======================================================================
// BiomeGenHills::~BiomeGenHills()
// address: 0x002E73A4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13BiomeGenHillsD1Ev'
void __fastcall BiomeGenHills::~BiomeGenHills(BiomeGenHills *this)
{
  *(_DWORD *)this = &off_461BC8;
  BiomeGenBase::~BiomeGenBase(this);
}


//======================================================================
// BiomeGenHills::~BiomeGenHills()
// address: 0x002E73C0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BiomeGenHills::~BiomeGenHills(BiomeGenHills *this)
{
  BiomeGenHills::~BiomeGenHills(this);
  operator delete(this);
}


//======================================================================
// BiomeGenHills::decorate(World *,ChunkRandGen *,int,int)
// address: 0x002E73D2   size: 0x82 (130 bytes)
//======================================================================
int __fastcall BiomeGenHills::decorate(__int64 this, ChunkRandGen *a2, int a3, int a4)
{
  World *v5; // r6
  signed int v6; // r7
  int v7; // r2
  int result; // r0
  signed int v10; // [sp+Ch] [bp-18h]
  _DWORD v11[4]; // [sp+14h] [bp-10h] BYREF

  v5 = (World *)HIDWORD(this);
  BiomeGenBase::decorate(this, a2, a3, a4);
  v10 = ChunkRandGen::get(a2) % 6u + 3;
  v6 = 0;
  do
  {
    v11[0] = a3 + (ChunkRandGen::get(a2) & 0xF);
    v11[1] = ChunkRandGen::get(a2) % 0x1Cu + 4;
    v11[2] = a4 + (ChunkRandGen::get(a2) & 0xF);
    result = World::getBlockID(v5, (const WCoord *)v11, v7, a4);
    if ( result == 104 )
      result = World::setBlockAll(v5, (const WCoord *)v11, 406, 0, 2);
    ++v6;
  }
  while ( v6 < v10 );
  return result;
}

