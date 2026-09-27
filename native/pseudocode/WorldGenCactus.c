// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenCactus

//======================================================================
// WorldGenCactus::~WorldGenCactus()
// address: 0x002B5140   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN14WorldGenCactusD1Ev'
void __fastcall WorldGenCactus::~WorldGenCactus(WorldGenCactus *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenCactus::~WorldGenCactus()
// address: 0x002B5150   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenCactus::~WorldGenCactus(WorldGenCactus *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenCactus::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002B516C   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall WorldGenCactus::generate(WorldGenCactus *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  char v5; // r6
  char v6; // r6
  int v7; // r7
  char v8; // r6
  int v9; // r4
  int v10; // r7
  int v11; // r6
  unsigned int v12; // r7
  signed int v13; // r7
  int Material; // r6
  int v17; // [sp+10h] [bp-24h]
  signed int v18; // [sp+10h] [bp-24h]
  int i; // [sp+14h] [bp-20h]
  int v22; // [sp+24h] [bp-10h] BYREF
  int v23; // [sp+28h] [bp-Ch]
  int v24; // [sp+2Ch] [bp-8h]

  for ( i = 0; i < *((_DWORD *)this + 2); ++i )
  {
    v5 = ChunkRandGen::get(a3);
    v17 = (v5 & 7) - (ChunkRandGen::get(a3) & 7);
    v6 = ChunkRandGen::get(a3);
    v7 = (v6 & 3) - (ChunkRandGen::get(a3) & 3);
    v8 = ChunkRandGen::get(a3);
    v9 = (v8 & 7) - (ChunkRandGen::get(a3) & 7) + *((_DWORD *)a4 + 2);
    v10 = v7 + *((_DWORD *)a4 + 1);
    v11 = *(_DWORD *)a4 + v17;
    v24 = v9;
    v22 = v11;
    v23 = v10;
    if ( World::getBlockID(a2, (const WCoord *)&v22) == 0 )
    {
      v12 = ChunkRandGen::get(a3);
      v18 = ChunkRandGen::get(a3) % (v12 % 3 + 1);
      v13 = 0;
      Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, 242);
      do
      {
        if ( (*(int (__fastcall **)(int, World *, int *))(*(_DWORD *)Material + 160))(Material, a2, &v22) != 0 )
          World::setBlockAll(a2, (const WCoord *)&v22, 242, 0, 2);
        ++v13;
        ++v23;
      }
      while ( v18 >= v13 );
    }
  }
  return 1;
}

