// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenReeds

//======================================================================
// WorldGenReeds::~WorldGenReeds()
// address: 0x002A4748   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN13WorldGenReedsD1Ev'
void __fastcall WorldGenReeds::~WorldGenReeds(WorldGenReeds *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenReeds::~WorldGenReeds()
// address: 0x002A4758   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenReeds::~WorldGenReeds(WorldGenReeds *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenReeds::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002A4774   size: 0x136 (310 bytes)
//======================================================================
int __fastcall WorldGenReeds::generate(WorldGenReeds *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int i; // r7
  char v6; // r6
  int v7; // r6
  char v8; // r7
  char v9; // r0
  int v10; // r2
  int v11; // r4
  int *v12; // r4
  int v13; // r2
  int v14; // r3
  int v15; // r3
  unsigned int v16; // r6
  signed int v17; // r7
  int Material; // r4
  signed int v20; // [sp+Ch] [bp-30h]
  int v23; // [sp+18h] [bp-24h]
  int v25; // [sp+20h] [bp-1Ch] BYREF
  int v26; // [sp+24h] [bp-18h]
  int v27; // [sp+28h] [bp-14h]
  _DWORD v28[4]; // [sp+2Ch] [bp-10h] BYREF

  for ( i = 0; ; i = v23 + 1 )
  {
    v23 = i;
    if ( i >= *((_DWORD *)this + 2) )
      break;
    v6 = ChunkRandGen::get(a3);
    v7 = (v6 & 3) - (ChunkRandGen::get(a3) & 3);
    ChunkRandGen::get(a3);
    ChunkRandGen::get(a3);
    v8 = ChunkRandGen::get(a3);
    v9 = ChunkRandGen::get(a3);
    v10 = *((_DWORD *)a4 + 1);
    v11 = (v8 & 3) - (v9 & 3) + *((_DWORD *)a4 + 2);
    v25 = *(_DWORD *)a4 + v7;
    v26 = v10;
    v27 = v11;
    if ( World::getBlockID(a2, (const WCoord *)&v25) == 0 )
    {
      v12 = g_DirectionCoord;
      --v26;
      while ( 1 )
      {
        v13 = v26 + v12[1];
        v14 = v27 + v12[2];
        v28[0] = v25 + *v12;
        v28[1] = v13;
        v28[2] = v14;
        if ( (unsigned int)(World::getBlockID(a2, (const WCoord *)v28) - 3) <= 1 )
          break;
        v12 += 3;
        if ( v12 == &dword_516658 )
        {
          v15 = 0;
          goto LABEL_10;
        }
      }
      v15 = 1;
LABEL_10:
      ++v26;
      if ( v15 != 0 )
      {
        v16 = ChunkRandGen::get(a3);
        v20 = ChunkRandGen::get(a3) % (v16 % 3 + 1) + 2;
        v17 = 0;
        Material = BlockMaterialMgr::getMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     228);
        do
        {
          if ( (*(int (__fastcall **)(int, World *, int *))(*(_DWORD *)Material + 160))(Material, a2, &v25) != 0 )
            World::setBlockAll(a2, (const WCoord *)&v25, 228, 0, 2);
          ++v17;
          ++v26;
        }
        while ( v17 < v20 );
      }
    }
  }
  return 1;
}

