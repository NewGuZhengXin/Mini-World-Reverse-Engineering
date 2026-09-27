// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenShrub

//======================================================================
// WorldGenShrub::~WorldGenShrub()
// address: 0x002C1214   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN13WorldGenShrubD1Ev'
void __fastcall WorldGenShrub::~WorldGenShrub(WorldGenShrub *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenShrub::~WorldGenShrub()
// address: 0x002C1224   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenShrub::~WorldGenShrub(WorldGenShrub *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenShrub::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002C1240   size: 0x10A (266 bytes)
//======================================================================
int __fastcall WorldGenShrub::generate(WorldGenShrub *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v4; // r5
  int BlockID; // r0
  int v7; // r6
  int v8; // r4
  int i; // r3
  int v11; // [sp+14h] [bp-30h]
  int j; // [sp+18h] [bp-2Ch]
  int v13; // [sp+1Ch] [bp-28h]
  int v14; // [sp+20h] [bp-24h]
  _DWORD v17[4]; // [sp+34h] [bp-10h] BYREF

  v4 = *((_DWORD *)a4 + 1);
  v13 = *(_DWORD *)a4;
  v14 = *((_DWORD *)a4 + 2);
  while ( 1 )
  {
    v17[0] = v13;
    v17[1] = v4;
    v17[2] = v14;
    BlockID = World::getBlockID(a2, (const WCoord *)v17);
    if ( BlockID != 0 && (unsigned int)(BlockID - 218) > 5 )
      break;
    if ( v4 <= 0 )
      break;
    --v4;
  }
  v17[2] = v14;
  v17[0] = v13;
  v17[1] = v4;
  if ( (unsigned int)(World::getBlockID(a2, (const WCoord *)v17) - 100) <= 1 )
  {
    v7 = v4 + 1;
    WorldGenerator::setBlockAndMetadata(this, a2, v13, v4 + 1, v14, *((_DWORD *)this + 3), 0);
    v8 = 2;
    while ( v7 <= v4 + 3 )
    {
      for ( i = v13 - v8; ; i = v11 + 1 )
      {
        v11 = i;
        if ( i > v8 + v13 )
          break;
        for ( j = v14 - v8; j <= v8 + v14; ++j )
        {
          if ( ((v11 - v13 + ((v11 - v13) >> 31)) ^ ((v11 - v13) >> 31)) == v8
            && ((j - v14 + ((j - v14) >> 31)) ^ ((j - v14) >> 31)) == v8 )
          {
            ChunkRandGen::_dorand48((unsigned __int16 *)a3);
            if ( (*((_WORD *)a3 + 1) & 1) == 0 )
              continue;
          }
          if ( World::isBlockOpaqueCube(a2, v11, v7, j) == 0 )
            WorldGenerator::setBlockAndMetadata(this, a2, v11, v7, j, *((_DWORD *)this + 2), 0);
        }
      }
      ++v7;
      --v8;
    }
  }
  return 1;
}

