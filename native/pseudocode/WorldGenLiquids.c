// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenLiquids

//======================================================================
// WorldGenLiquids::~WorldGenLiquids()
// address: 0x0029FC8C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15WorldGenLiquidsD1Ev'
void __fastcall WorldGenLiquids::~WorldGenLiquids(WorldGenLiquids *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenLiquids::~WorldGenLiquids()
// address: 0x0029FC9C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenLiquids::~WorldGenLiquids(WorldGenLiquids *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenLiquids::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x0029FCB8   size: 0x16C (364 bytes)
//======================================================================
int __fastcall WorldGenLiquids::generate(WorldGenLiquids *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v4; // r6
  _BOOL4 v6; // r7
  int v7; // r7
  int v8; // r7
  int v9; // r7
  _BOOL4 v10; // r5
  int v11; // r5
  int v12; // r5
  int v13; // r5
  int v14; // r2
  char *v15; // r7
  int Material; // r0
  void (__fastcall *v17)(int, World *, int *); // r3
  int v19; // [sp+10h] [bp-2Ch]
  int v20; // [sp+14h] [bp-28h]
  int v21; // [sp+18h] [bp-24h]
  int v23; // [sp+2Ch] [bp-10h] BYREF
  int v24; // [sp+30h] [bp-Ch]
  int v25; // [sp+34h] [bp-8h]

  v4 = *((_DWORD *)a4 + 1);
  v19 = *(_DWORD *)a4;
  v20 = *((_DWORD *)a4 + 2);
  if ( World::getBlockID(a2, *(_DWORD *)a4, v4 + 1, v20) != 104
    || World::getBlockID(a2, v19, v4 - 1, v20) != 104
    || World::getBlockID(a2, v19, v4, v20) != 0 && World::getBlockID(a2, v19, v4, v20) != 104 )
  {
    return 0;
  }
  v6 = World::getBlockID(a2, v19 - 1, v4, v20) == 104;
  v7 = v6 + (World::getBlockID(a2, v19 + 1, v4, v20) == 104);
  v8 = v7 + (World::getBlockID(a2, v19, v4, v20 - 1) == 104);
  v9 = v8 + (World::getBlockID(a2, v19, v4, v20 + 1) == 104);
  v10 = World::getBlockID(a2, v19 - 1, v4, v20) == 0;
  v11 = v10 + (World::getBlockID(a2, v19 + 1, v4, v20) == 0);
  v12 = v11 + (World::getBlockID(a2, v19, v4, v20 - 1) == 0);
  v13 = v12 + (World::getBlockID(a2, v19, v4, v20 + 1) == 0);
  v21 = 1;
  if ( v9 == 3 && v13 == 1 )
  {
    v14 = *((_DWORD *)this + 2);
    v23 = v19;
    v25 = v20;
    v15 = (char *)a2 + 136;
    v24 = v4;
    World::setBlockAll(a2, (const WCoord *)&v23, v14, 0, 2);
    *(_BYTE *)(*(_DWORD *)v15 + 4) = 1;
    Material = BlockMaterialMgr::getMaterial(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 *((_DWORD *)this + 2));
    v17 = *(void (__fastcall **)(int, World *, int *))(*(_DWORD *)Material + 92);
    v23 = v19;
    v24 = v4;
    v25 = v20;
    v17(Material, a2, &v23);
    *(_BYTE *)(*(_DWORD *)v15 + 4) = 0;
  }
  return v21;
}

