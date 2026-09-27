// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenVines

//======================================================================
// WorldGenVines::~WorldGenVines()
// address: 0x002987D4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN13WorldGenVinesD1Ev'
void __fastcall WorldGenVines::~WorldGenVines(WorldGenVines *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenVines::~WorldGenVines()
// address: 0x002987E4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenVines::~WorldGenVines(WorldGenVines *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenVines::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x00298800   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall WorldGenVines::generate(WorldGenVines *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v5; // r5
  int v6; // r7
  int v7; // r7
  int v8; // r7
  int v9; // r7
  int Material; // [sp+Ch] [bp-20h]
  int v14; // [sp+1Ch] [bp-10h] BYREF
  int v15; // [sp+20h] [bp-Ch]
  int v16; // [sp+24h] [bp-8h]

  v14 = *(_DWORD *)a4;
  v15 = *((_DWORD *)a4 + 1);
  v16 = *((_DWORD *)a4 + 2);
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, 232);
  while ( v15 <= 127 )
  {
    if ( World::getBlockID(a2, (const WCoord *)&v14) != 0 )
    {
      v6 = *(_DWORD *)a4;
      v7 = v6 + (ChunkRandGen::get(a3) & 3);
      v14 = v7 - (ChunkRandGen::get(a3) & 3);
      v8 = *((_DWORD *)a4 + 2);
      v9 = v8 + (ChunkRandGen::get(a3) & 3);
      v16 = v9 - (ChunkRandGen::get(a3) & 3);
    }
    else
    {
      v5 = 0;
      while ( (*(int (__fastcall **)(int, World *, int *, int))(*(_DWORD *)Material + 156))(Material, a2, &v14, v5) == 0 )
      {
        if ( ++v5 == 4 )
          goto LABEL_10;
      }
      World::setBlockAll(a2, (const WCoord *)&v14, 232, v5, 2);
    }
LABEL_10:
    ++v15;
  }
  return 1;
}

