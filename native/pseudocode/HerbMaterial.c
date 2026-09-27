// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: HerbMaterial

//======================================================================
// HerbMaterial::isSolid(void)
// address: 0x002657F2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall HerbMaterial::isSolid(HerbMaterial *this)
{
  return 0;
}


//======================================================================
// HerbMaterial::dropBlockAsItem(World *,WCoord const&,int,BLOCK_MINE_TYPE,float)
// address: 0x00265804   size: 0x1C (28 bytes)
//======================================================================
__int64 __fastcall HerbMaterial::dropBlockAsItem(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v5; // [sp+0h] [bp-8h]

  v5 = a1;
  if ( *(int *)(*(_DWORD *)(a1 + 36) + 76) <= 1 || (a3 & 8) == 0 )
  {
    v5 = a4;
    BlockMaterial::dropBlockAsItem();
  }
  return v5;
}


//======================================================================
// HerbMaterial::~HerbMaterial()
// address: 0x00265820   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12HerbMaterialD1Ev'
void __fastcall HerbMaterial::~HerbMaterial(HerbMaterial *this)
{
  *(_DWORD *)this = &off_45B470;
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// HerbMaterial::~HerbMaterial()
// address: 0x0026583C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall HerbMaterial::~HerbMaterial(HerbMaterial *this)
{
  HerbMaterial::~HerbMaterial(this);
  operator delete(this);
}


//======================================================================
// HerbMaterial::canThisPlantGrowOnThisBlockID(int)
// address: 0x0026586A   size: 0x1A (26 bytes)
//======================================================================
bool __fastcall HerbMaterial::canThisPlantGrowOnThisBlockID(HerbMaterial *this, int a2)
{
  _BOOL4 result; // r0

  result = true;
  if ( (unsigned int)(a2 - 100) > 2 && a2 != 110 )
    return a2 == 124;
  return result;
}


//======================================================================
// HerbMaterial::canPlaceBlockAt(World *,WCoord const&)
// address: 0x002659D0   size: 0x84 (132 bytes)
//======================================================================
int __fastcall HerbMaterial::canPlaceBlockAt(HerbMaterial *this, World *a2, const WCoord *a3)
{
  int (__fastcall *v6)(HerbMaterial *, int); // r6
  int v7; // r12
  int v8; // r2
  int BlockID; // r0
  int v10; // r0
  int v11; // r6
  int v12; // r1
  int v14; // [sp+4h] [bp-18h]
  _DWORD v15[4]; // [sp+Ch] [bp-10h] BYREF

  if ( BlockMaterial::canPlaceBlockAt(this, a2, a3) == 0 )
    return 0;
  v6 = *(int (__fastcall **)(HerbMaterial *, int))(*(_DWORD *)this + 188);
  v7 = *((_DWORD *)a3 + 2) + dword_516660;
  v8 = *(_DWORD *)a3;
  v15[1] = *((_DWORD *)a3 + 1) + dword_51665C;
  v15[0] = v8 + dword_516658;
  v15[2] = v7;
  BlockID = World::getBlockID(a2, (const WCoord *)v15);
  v10 = v6(this, BlockID);
  v11 = 1;
  v14 = v10;
  if ( v10 == 0 )
    return 0;
  while ( v11 < *(_DWORD *)(*((_DWORD *)this + 9) + 76) )
  {
    v12 = *((_DWORD *)a3 + 1);
    v15[0] = *(_DWORD *)a3;
    v15[1] = v11 + v12;
    v15[2] = *((_DWORD *)a3 + 2);
    if ( BlockMaterial::canPlaceBlockAt(this, a2, (const WCoord *)v15) == 0 )
      return 0;
    ++v11;
  }
  return v14;
}


//======================================================================
// HerbMaterial::canBlockStay(World *,WCoord const&)
// address: 0x00265A58   size: 0xCC (204 bytes)
//======================================================================
int __fastcall HerbMaterial::canBlockStay(HerbMaterial *this, World *a2, const WCoord *a3)
{
  int v5; // r12
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v10; // r5
  int (__fastcall *v11)(HerbMaterial *, int); // r5
  int v12; // r2
  int v13; // r3
  int BlockID; // r0
  int v16; // [sp+Ch] [bp-10h] BYREF
  int v17; // [sp+10h] [bp-Ch]
  int v18; // [sp+14h] [bp-8h]

  if ( *(int *)(*((_DWORD *)this + 9) + 76) <= 1 )
  {
LABEL_2:
    if ( (int)World::getFullBlockLightValue(a2, a3) > 7
      || (v10 = *((_DWORD *)a3 + 1)) >= World::getTopHeight(a2, *(_DWORD *)a3, *((_DWORD *)a3 + 2)) )
    {
      v11 = *(int (__fastcall **)(HerbMaterial *, int))(*(_DWORD *)this + 188);
      v12 = *((_DWORD *)a3 + 2) + dword_516660;
      v13 = *(_DWORD *)a3 + dword_516658;
      v17 = *((_DWORD *)a3 + 1) + dword_51665C;
      v16 = v13;
      v18 = v12;
      BlockID = World::getBlockID(a2, (const WCoord *)&v16);
      return v11(this, BlockID);
    }
    return 0;
  }
  v5 = *((_DWORD *)a3 + 2) + dword_516660;
  v6 = *(_DWORD *)a3;
  v17 = *((_DWORD *)a3 + 1) + dword_51665C;
  v16 = v6 + dword_516658;
  v18 = v5;
  if ( World::getBlockID(a2, (const WCoord *)&v16) != *((_DWORD *)this + 8) )
  {
    v7 = *((_DWORD *)a3 + 2);
    v17 = *((_DWORD *)a3 + 1) + dword_516668;
    v8 = *(_DWORD *)a3;
    v18 = v7 + dword_51666C;
    v16 = v8 + dword_516664;
    if ( World::getBlockID(a2, (const WCoord *)&v16) != *((_DWORD *)this + 8) )
      return 0;
    goto LABEL_2;
  }
  return 1;
}


//======================================================================
// HerbMaterial::checkHerbChange(World *,WCoord const&)
// address: 0x00265E06   size: 0x50 (80 bytes)
//======================================================================
int __fastcall HerbMaterial::checkHerbChange(HerbMaterial *this, World *a2, const WCoord *a3)
{
  int result; // r0
  int BlockData; // r3
  void (__fastcall *v8)(HerbMaterial *, World *, const WCoord *, int, int, int); // [sp+Ch] [bp-8h]

  result = (*(int (__fastcall **)(HerbMaterial *))(*(_DWORD *)this + 160))(this);
  if ( result == 0 )
  {
    v8 = *(void (__fastcall **)(HerbMaterial *, World *, const WCoord *, int, int, int))(*(_DWORD *)this + 180);
    BlockData = World::getBlockData(a2, a3);
    v8(this, a2, a3, BlockData, 1, 1065353216);
    return World::setBlockAll(a2, a3, 0, 0, 3);
  }
  return result;
}


//======================================================================
// HerbMaterial::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x00265E56   size: 0x18 (24 bytes)
//======================================================================
int __fastcall HerbMaterial::onNeighborBlockChange(HerbMaterial *this, World *a2, const WCoord *a3, int a4)
{
  BlockMaterial::onNeighborBlockChange(this, a2, a3, a4);
  return HerbMaterial::checkHerbChange(this, a2, a3);
}


//======================================================================
// HerbMaterial::blockTick(World *,WCoord const&)
// address: 0x00265E6E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall HerbMaterial::blockTick(HerbMaterial *this, World *a2, const WCoord *a3)
{
  return HerbMaterial::checkHerbChange(this, a2, a3);
}


//======================================================================
// HerbMaterial::getGrowRate(World *,WCoord const&)
// address: 0x00265E78   size: 0x178 (376 bytes)
//======================================================================
int __fastcall HerbMaterial::getGrowRate(HerbMaterial *this, World *a2, const WCoord *a3)
{
  int v4; // r5
  int v6; // r6
  int v7; // r0
  int v8; // r3
  _BOOL4 v9; // r7
  int v10; // r0
  float v11; // r1
  int BlockID; // [sp+0h] [bp-44h]
  int i; // [sp+0h] [bp-44h]
  int v15; // [sp+4h] [bp-40h]
  float v16; // [sp+4h] [bp-40h]
  int v17; // [sp+8h] [bp-3Ch]
  int v18; // [sp+Ch] [bp-38h]
  int v19; // [sp+1Ch] [bp-28h]
  _BOOL4 v20; // [sp+1Ch] [bp-28h]
  int v21; // [sp+20h] [bp-24h]
  _BOOL4 v22; // [sp+20h] [bp-24h]
  int v23; // [sp+24h] [bp-20h]
  int v24; // [sp+28h] [bp-1Ch]
  int v25; // [sp+2Ch] [bp-18h]
  _DWORD v26[4]; // [sp+34h] [bp-10h] BYREF

  v4 = *((_DWORD *)a3 + 1);
  v18 = *((_DWORD *)a3 + 2);
  v17 = *(_DWORD *)a3;
  BlockID = World::getBlockID(a2, *(_DWORD *)a3, v4, v18 - 1);
  v15 = World::getBlockID(a2, v17, v4, v18 + 1);
  v6 = v17 - 1;
  v19 = World::getBlockID(a2, v17 - 1, v4, v18);
  v21 = World::getBlockID(a2, v17 + 1, v4, v18);
  v23 = World::getBlockID(a2, v17 - 1, v4, v18 - 1);
  v24 = World::getBlockID(a2, v17 + 1, v4, v18 - 1);
  v25 = World::getBlockID(a2, v17 + 1, v4, v18 + 1);
  v7 = World::getBlockID(a2, v17 - 1, v4, v18 + 1);
  v8 = *((_DWORD *)this + 8);
  v20 = v19 == v8 || v21 == v8;
  v22 = BlockID == v8 || v15 == v8;
  v9 = v23 == v8 || v24 == v8 || v25 == v8 || v7 == v8;
  v16 = 1.0;
  while ( v6 <= v17 + 1 )
  {
    for ( i = v18 - 1; i <= v18 + 1; ++i )
    {
      v10 = World::getBlockID(a2, v6, v4 - 1, i);
      v11 = 0.0;
      if ( v10 == 102 )
      {
        v26[0] = v6;
        v26[1] = v4 - 1;
        v26[2] = i;
        if ( (int)World::getBlockData(a2, (const WCoord *)v26) > 0 )
          v11 = 3.0;
        else
          v11 = 1.0;
      }
      if ( v6 != v17 || i != v18 )
        v11 = v11 * 0.25;
      v16 = v16 + v11;
    }
    ++v6;
  }
  if ( v9 || v20 && v22 )
    v16 = v16 * 0.5;
  return LODWORD(v16);
}

