// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenClay

//======================================================================
// WorldGenClay::~WorldGenClay()
// address: 0x002E4580   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12WorldGenClayD1Ev'
void __fastcall WorldGenClay::~WorldGenClay(WorldGenClay *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenClay::~WorldGenClay()
// address: 0x002E4590   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenClay::~WorldGenClay(WorldGenClay *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenClay::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002E45AC   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall WorldGenClay::generate(WorldGenClay *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  unsigned int v7; // r3
  int result; // r0
  int v9; // r6
  signed int j; // r6
  int v11; // r3
  int v12; // r2
  int BlockID; // r0
  int k; // [sp+Ch] [bp-28h]
  unsigned int v15; // [sp+10h] [bp-24h]
  int i; // [sp+14h] [bp-20h]
  _DWORD v18[4]; // [sp+24h] [bp-10h] BYREF

  v7 = World::getBlockID(a2, a4, (int)a3, (int)a4) - 3;
  result = 0;
  if ( v7 <= 1 )
  {
    v9 = *((_DWORD *)this + 3);
    ChunkRandGen::_dorand48((unsigned __int16 *)a3);
    v15 = ((*((unsigned __int16 *)a3 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a3 + 1)) % (v9 - 2) + 2;
    for ( i = *(_DWORD *)a4 - v15; i <= (int)(v15 + *(_DWORD *)a4); ++i )
    {
      for ( j = *((_DWORD *)a4 + 2) - v15; ; ++j )
      {
        v11 = *((_DWORD *)a4 + 2);
        if ( j > (int)(v11 + v15) )
          break;
        if ( (i - *(_DWORD *)a4) * (i - *(_DWORD *)a4) + (j - v11) * (j - v11) <= (int)(v15 * v15) )
        {
          v12 = *((_DWORD *)a4 + 1) - 1;
          for ( k = v12; k <= *((_DWORD *)a4 + 1) + 1; ++k )
          {
            v18[1] = k;
            v18[0] = i;
            v18[2] = j;
            BlockID = World::getBlockID(a2, (const WCoord *)v18, v12, i);
            if ( BlockID == 101 || BlockID == 114 )
            {
              v18[0] = i;
              v18[1] = k;
              v18[2] = j;
              World::setBlockAll(a2, (const WCoord *)v18, *((_DWORD *)this + 2), 0, 2);
            }
          }
        }
      }
    }
    return 1;
  }
  return result;
}

