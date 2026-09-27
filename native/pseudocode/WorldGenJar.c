// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenJar

//======================================================================
// WorldGenJar::~WorldGenJar()
// address: 0x00266EF8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN11WorldGenJarD1Ev'
void __fastcall WorldGenJar::~WorldGenJar(WorldGenJar *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenJar::~WorldGenJar()
// address: 0x00266F24   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenJar::~WorldGenJar(WorldGenJar *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenJar::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x00266F54   size: 0x114 (276 bytes)
//======================================================================
int __fastcall WorldGenJar::generate(WorldGenJar *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  char v7; // r6
  char v8; // r6
  char v9; // r6
  char v10; // r0
  int v11; // r12
  int v12; // r3
  int v13; // r0
  int v15; // [sp+10h] [bp-34h]
  int v16; // [sp+14h] [bp-30h]
  int i; // [sp+1Ch] [bp-28h]
  int Material; // [sp+20h] [bp-24h]
  int v20; // [sp+24h] [bp-20h]
  int v21; // [sp+28h] [bp-1Ch] BYREF
  int v22; // [sp+2Ch] [bp-18h]
  int v23; // [sp+30h] [bp-14h]
  _DWORD v24[4]; // [sp+34h] [bp-10h] BYREF

  v20 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)a2 + 31) + 44))(*((_DWORD *)a2 + 31)) - 1;
  Material = BlockMaterialMgr::getMaterial(
               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
               *((_DWORD *)this + 2));
  for ( i = 0; i < *((_DWORD *)this + 3); ++i )
  {
    v7 = ChunkRandGen::get(a3);
    v15 = (v7 & 7) - (ChunkRandGen::get(a3) & 7);
    v8 = ChunkRandGen::get(a3);
    v16 = (v8 & 3) - (ChunkRandGen::get(a3) & 3);
    v9 = ChunkRandGen::get(a3);
    v10 = ChunkRandGen::get(a3);
    v11 = v16 + *((_DWORD *)a4 + 1);
    v12 = (v9 & 7) - (v10 & 7) + *((_DWORD *)a4 + 2);
    v21 = *(_DWORD *)a4 + v15;
    v22 = v11;
    v23 = v12;
    if ( World::getBlockID(a2, (const WCoord *)&v21) == 0 && v22 < v20 )
    {
      v24[0] = v21 + dword_516658;
      v24[2] = v23 + dword_516660;
      v24[1] = dword_51665C + v22;
      if ( World::isBlockNormalCube(a2, (const WCoord *)v24) != 0 )
      {
        v13 = (*(int (__fastcall **)(int, World *, const WCoord *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)Material + 116))(
                Material,
                a2,
                a4,
                2,
                0,
                0,
                0,
                0);
        World::setBlockAll(a2, (const WCoord *)&v21, *((_DWORD *)this + 2), v13, 2);
      }
    }
  }
  return 1;
}


//======================================================================
// WorldGenJar::WorldGenJar(int,int)
// address: 0x00267070   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN11WorldGenJarC1Eii'
void __fastcall WorldGenJar::WorldGenJar(WorldGenJar *this, int a2, int a3)
{
  *((_BYTE *)this + 4) = 0;
  *((_DWORD *)this + 2) = a2;
  *((_DWORD *)this + 3) = a3;
  *(_DWORD *)this = &off_45B708;
}

