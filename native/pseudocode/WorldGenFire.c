// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenFire

//======================================================================
// WorldGenFire::~WorldGenFire()
// address: 0x0029C094   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12WorldGenFireD1Ev'
void __fastcall WorldGenFire::~WorldGenFire(WorldGenFire *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenFire::~WorldGenFire()
// address: 0x0029C0A4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenFire::~WorldGenFire(WorldGenFire *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenFire::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x0029C0C0   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall WorldGenFire::generate(WorldGenFire *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  char v6; // r7
  char v7; // r7
  int v8; // r7
  char v9; // r0
  int v10; // r7
  int v11; // r3
  char v13; // [sp+8h] [bp-2Ch]
  int v14; // [sp+Ch] [bp-28h]
  int i; // [sp+10h] [bp-24h]
  int v17; // [sp+18h] [bp-1Ch] BYREF
  int v18; // [sp+1Ch] [bp-18h]
  int v19; // [sp+20h] [bp-14h]
  _DWORD v20[4]; // [sp+24h] [bp-10h] BYREF

  for ( i = 64; i != 0; --i )
  {
    v6 = ChunkRandGen::get(a3);
    v14 = (v6 & 7) - (ChunkRandGen::get(a3) & 7);
    v7 = ChunkRandGen::get(a3);
    v8 = (v7 & 3) - (ChunkRandGen::get(a3) & 3);
    v13 = ChunkRandGen::get(a3);
    v9 = ChunkRandGen::get(a3);
    v10 = v8 + *((_DWORD *)a4 + 1);
    v11 = *(_DWORD *)a4 + v14;
    v19 = (v13 & 7) - (v9 & 7) + *((_DWORD *)a4 + 2);
    v17 = v11;
    v18 = v10;
    if ( World::getBlockID(a2, (const WCoord *)&v17) == 0 )
    {
      v20[1] = v18 + dword_51665C;
      v20[0] = v17 + dword_516658;
      v20[2] = v19 + dword_516660;
      if ( World::getBlockID(a2, (const WCoord *)v20) == 124 )
        World::setBlockAll(a2, (const WCoord *)&v17, 500, 0, 2);
    }
  }
  return 1;
}

