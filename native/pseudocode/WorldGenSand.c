// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenSand

//======================================================================
// WorldGenSand::~WorldGenSand()
// address: 0x002A80E0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN12WorldGenSandD1Ev'
void __fastcall WorldGenSand::~WorldGenSand(WorldGenSand *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenSand::~WorldGenSand()
// address: 0x002A80F0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenSand::~WorldGenSand(WorldGenSand *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenSand::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002A810C   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall WorldGenSand::generate(WorldGenSand *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  unsigned int v7; // r3
  int result; // r0
  int v9; // r6
  signed int v10; // r6
  signed int i; // r4
  int j; // r3
  int v13; // r2
  unsigned int v14; // [sp+8h] [bp-34h]
  int v15; // [sp+Ch] [bp-30h]
  int v16; // [sp+10h] [bp-2Ch]
  int v17; // [sp+14h] [bp-28h]
  int v19; // [sp+1Ch] [bp-20h]
  signed int v20; // [sp+2Ch] [bp-10h] BYREF
  int v21; // [sp+30h] [bp-Ch]
  signed int v22; // [sp+34h] [bp-8h]

  v7 = World::getBlockID(a2, a4) - 3;
  result = 0;
  if ( v7 <= 1 )
  {
    v9 = *((_DWORD *)this + 3);
    ChunkRandGen::_dorand48((unsigned __int16 *)a3);
    v14 = ((*((unsigned __int16 *)a3 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a3 + 1)) % (v9 - 2) + 2;
    v16 = *(_DWORD *)a4;
    v10 = *(_DWORD *)a4 - v14;
    v19 = *((_DWORD *)a4 + 1);
    v17 = *((_DWORD *)a4 + 2);
    while ( v10 <= (int)(v16 + v14) )
    {
      for ( i = v17 - v14; i <= (int)(v17 + v14); ++i )
      {
        if ( (v10 - v16) * (v10 - v16) + (i - v17) * (i - v17) <= (int)(v14 * v14) )
        {
          for ( j = v19 - 2; ; j = v15 + 1 )
          {
            v15 = j;
            if ( j > v19 + 2 )
              break;
            v21 = j;
            v20 = v10;
            v22 = i;
            if ( (unsigned int)(World::getBlockID(a2, (const WCoord *)&v20) - 100) <= 1 )
            {
              v22 = i;
              v21 = v15;
              v13 = *((_DWORD *)this + 2);
              v20 = v10;
              World::setBlockAll(a2, (const WCoord *)&v20, v13, 0, 2);
            }
          }
        }
      }
      ++v10;
    }
    return 1;
  }
  return result;
}

