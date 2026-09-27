// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FlowFluidMaterial

//======================================================================
// FlowFluidMaterial::newObject(void)
// address: 0x002C1CC4   size: 0x1C (28 bytes)
//======================================================================
FluidBlockMaterial *__fastcall FlowFluidMaterial::newObject(FlowFluidMaterial *this)
{
  FluidBlockMaterial *v1; // r4

  v1 = (FluidBlockMaterial *)operator new(0x64u);
  FluidBlockMaterial::FluidBlockMaterial(v1);
  *(_DWORD *)v1 = &off_462170;
  return v1;
}


//======================================================================
// FlowFluidMaterial::~FlowFluidMaterial()
// address: 0x002ED1E0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17FlowFluidMaterialD1Ev'
void __fastcall FlowFluidMaterial::~FlowFluidMaterial(FlowFluidMaterial *this)
{
  *(_DWORD *)this = &off_462170;
  FluidBlockMaterial::~FluidBlockMaterial(this);
}


//======================================================================
// FlowFluidMaterial::~FlowFluidMaterial()
// address: 0x002ED1FC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FlowFluidMaterial::~FlowFluidMaterial(FlowFluidMaterial *this)
{
  FlowFluidMaterial::~FlowFluidMaterial(this);
  operator delete(this);
}


//======================================================================
// FlowFluidMaterial::blockBlocksFlow(World *,WCoord const&)
// address: 0x002ED210   size: 0x22 (34 bytes)
//======================================================================
unsigned int __fastcall FlowFluidMaterial::blockBlocksFlow(
        FlowFluidMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4)
{
  int BlockID; // r0
  int BlockDef; // r0

  BlockID = World::getBlockID(a2, a3, (int)a3, a4);
  BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID);
  return (unsigned int)((*(int *)(BlockDef + 16) >> 31) - *(_DWORD *)(BlockDef + 16)) >> 31;
}


//======================================================================
// FlowFluidMaterial::calculateFlowCost(World *,WCoord const&,int,int)
// address: 0x002ED238   size: 0xDA (218 bytes)
//======================================================================
int __fastcall FlowFluidMaterial::calculateFlowCost(
        FlowFluidMaterial *this,
        World *a2,
        const WCoord *a3,
        int a4,
        int a5)
{
  int *v5; // r4
  int v8; // r3
  int v9; // r1
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r3
  int v14; // r2
  int BlockID; // r0
  int v16; // r2
  int v17; // r3
  int v19; // r0
  int (__fastcall *v20)(FlowFluidMaterial *, int); // [sp+Ch] [bp-30h]
  int v21; // [sp+10h] [bp-2Ch]
  int v23; // [sp+18h] [bp-24h]
  int v25; // [sp+20h] [bp-1Ch] BYREF
  int v26; // [sp+24h] [bp-18h]
  int v27; // [sp+28h] [bp-14h]
  _DWORD v28[4]; // [sp+2Ch] [bp-10h] BYREF

  v5 = g_DirectionCoord;
  v21 = 0;
  v23 = 1000;
  while ( 1 )
  {
    v8 = v21 + 1;
    if ( (v21 & 1) != 0 )
      v8 = v21 - 1;
    if ( v8 != a5 )
    {
      v9 = *((_DWORD *)a3 + 2);
      v10 = v5[2];
      v11 = *(_DWORD *)a3;
      v26 = *((_DWORD *)a3 + 1) + v5[1];
      v12 = v9 + v10;
      v13 = *v5;
      v25 = v11 + *v5;
      v27 = v12;
      if ( FlowFluidMaterial::blockBlocksFlow(this, a2, (const WCoord *)&v25, v13) != 0 )
        goto LABEL_10;
      v20 = *(int (__fastcall **)(FlowFluidMaterial *, int))(*(_DWORD *)this + 76);
      BlockID = World::getBlockID(a2, (const WCoord *)&v25, v14, (int)v20);
      if ( v20(this, BlockID) == 0 && World::getBlockData(a2, (const WCoord *)&v25, v16, v17) == 0 )
        goto LABEL_10;
      v28[0] = v25;
      v28[2] = v27;
      v28[1] = v26 - 1;
      if ( FlowFluidMaterial::blockBlocksFlow(this, a2, (const WCoord *)v28, v26 - 1) == 0 )
        return a4;
      if ( a4 <= 3 )
      {
        v19 = FlowFluidMaterial::calculateFlowCost(this, a2, (const WCoord *)&v25, a4 + 1, v21);
        if ( v23 > v19 )
          v23 = v19;
      }
    }
LABEL_10:
    v5 += 3;
    if ( ++v21 == 4 )
      return v23;
  }
}


//======================================================================
// FlowFluidMaterial::getOptimalFlowDirections(bool *,World *,WCoord const&)
// address: 0x002ED318   size: 0xF6 (246 bytes)
//======================================================================
bool *__fastcall FlowFluidMaterial::getOptimalFlowDirections(
        FlowFluidMaterial *this,
        bool *a2,
        World *a3,
        const WCoord *a4)
{
  int *v5; // r5
  int v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r3
  int v12; // r2
  int BlockID; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r2
  int j; // r3
  bool *result; // r0
  int (__fastcall *v19)(FlowFluidMaterial *, int); // [sp+Ch] [bp-30h]
  int *v20; // [sp+10h] [bp-2Ch]
  int i; // [sp+18h] [bp-24h]
  int v24; // [sp+20h] [bp-1Ch] BYREF
  int v25; // [sp+24h] [bp-18h]
  int v26; // [sp+28h] [bp-14h]
  _DWORD v27[4]; // [sp+2Ch] [bp-10h] BYREF

  v5 = g_DirectionCoord;
  v20 = (int *)((char *)this + 84);
  for ( i = 0; i != 4; ++i )
  {
    *v20 = 1000;
    v7 = *((_DWORD *)a4 + 2);
    v8 = v5[2];
    v9 = *(_DWORD *)a4;
    v25 = *((_DWORD *)a4 + 1) + v5[1];
    v10 = v7 + v8;
    v11 = *v5;
    v24 = v9 + *v5;
    v26 = v10;
    if ( FlowFluidMaterial::blockBlocksFlow(this, a3, (const WCoord *)&v24, v11) == 0 )
    {
      v19 = *(int (__fastcall **)(FlowFluidMaterial *, int))(*(_DWORD *)this + 76);
      BlockID = World::getBlockID(a3, (const WCoord *)&v24, v12, (int)v19);
      if ( v19(this, BlockID) == 0 || World::getBlockData(a3, (const WCoord *)&v24, v14, v15) != 0 )
      {
        v27[1] = v25 - 1;
        v27[0] = v24;
        v27[2] = v26;
        if ( FlowFluidMaterial::blockBlocksFlow(this, a3, (const WCoord *)v27, v26) != 0 )
          *v20 = FlowFluidMaterial::calculateFlowCost(this, a3, (const WCoord *)&v24, 1, i);
        else
          *v20 = 0;
      }
    }
    v5 += 3;
    ++v20;
  }
  v16 = *((_DWORD *)this + 22);
  if ( v16 > *((_DWORD *)this + 21) )
    v16 = *((_DWORD *)this + 21);
  if ( v16 > *((_DWORD *)this + 23) )
    v16 = *((_DWORD *)this + 23);
  if ( v16 > *((_DWORD *)this + 24) )
    v16 = *((_DWORD *)this + 24);
  for ( j = 0; j != 4; ++j )
  {
    result = a2;
    a2[j] = *((_DWORD *)this + j + 21) == v16;
  }
  return result;
}


//======================================================================
// FlowFluidMaterial::liquidCanDisplaceBlock(World *,WCoord const&)
// address: 0x002ED414   size: 0x44 (68 bytes)
//======================================================================
int __fastcall FlowFluidMaterial::liquidCanDisplaceBlock(FlowFluidMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int BlockID; // r7
  int v9; // r3

  BlockID = World::getBlockID(a2, a3, (int)a3, a4);
  if ( (*(int (__fastcall **)(FlowFluidMaterial *, int))(*(_DWORD *)this + 76))(this, BlockID) != 0
    || FluidBlockMaterial::isLava(this, BlockID) )
  {
    return 0;
  }
  else
  {
    return (unsigned __int8)FlowFluidMaterial::blockBlocksFlow(this, a2, a3, v9) ^ 1;
  }
}


//======================================================================
// FlowFluidMaterial::flowIntoBlock(World *,WCoord const&,int)
// address: 0x002ED458   size: 0x82 (130 bytes)
//======================================================================
int __fastcall FlowFluidMaterial::flowIntoBlock(FlowFluidMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0
  int v8; // r2
  int v9; // r3
  int BlockID; // r7
  int Material; // r7
  int v12; // r2
  int BlockData; // r3
  void (__fastcall *v14)(int, World *, const WCoord *, int, int, int); // [sp+8h] [bp-Ch]

  result = FlowFluidMaterial::liquidCanDisplaceBlock(this, a2, a3, a4);
  if ( result != 0 )
  {
    BlockID = World::getBlockID(a2, a3, v8, v9);
    if ( BlockID > 0 )
    {
      if ( FluidBlockMaterial::isLava(this, *((_DWORD *)this + 8)) )
      {
        FluidBlockMaterial::triggerLavaMixEffects(this, a2, a3);
      }
      else
      {
        Material = BlockMaterialMgr::getMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     BlockID);
        v14 = *(void (__fastcall **)(int, World *, const WCoord *, int, int, int))(*(_DWORD *)Material + 180);
        BlockData = World::getBlockData(a2, a3, v12, (int)v14);
        v14(Material, a2, a3, BlockData, 1, 1065353216);
      }
    }
    return World::setBlockAll(a2, a3, *((_DWORD *)this + 8), a4, 3);
  }
  return result;
}


//======================================================================
// FlowFluidMaterial::updateFlow(World *,WCoord const&)
// address: 0x002ED4E0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall FlowFluidMaterial::updateFlow(FlowFluidMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int BlockData; // r0
  int v9; // [sp+0h] [bp-8h]

  BlockData = World::getBlockData(a2, a3, (int)a3, a4);
  World::setBlockAll(a2, a3, *((_DWORD *)this + 8) - 1, BlockData, 2);
  return v9;
}


//======================================================================
// FlowFluidMaterial::getSmallestFlowDecay(World *,WCoord const&,int)
// address: 0x002ED504   size: 0x36 (54 bytes)
//======================================================================
int __fastcall FlowFluidMaterial::getSmallestFlowDecay(FlowFluidMaterial *this, World *a2, const WCoord *a3, int a4)
{
  int FlowDecay; // r0
  int v7; // r2
  int result; // r0

  FlowDecay = FluidBlockMaterial::getFlowDecay(this, a2, a3);
  v7 = FlowDecay;
  if ( FlowDecay < 0 )
    return a4;
  if ( FlowDecay != 0 )
    v7 = FlowDecay & -(((unsigned int)FlowDecay >> 31) + ((unsigned int)FlowDecay <= 7));
  else
    ++*((_DWORD *)this + 20);
  result = v7;
  if ( a4 >= 0 && v7 > a4 )
    return a4;
  return result;
}


//======================================================================
// FlowFluidMaterial::blockTick(World *,WCoord const&)
// address: 0x002ED53C   size: 0x26C (620 bytes)
//======================================================================
bool *__fastcall FlowFluidMaterial::blockTick(FlowFluidMaterial *this, BlockTickMgr **a2, const WCoord *a3)
{
  int v4; // r2
  int v6; // r1
  int v7; // r3
  int *v8; // r5
  int SmallestFlowDecay; // r3
  int v10; // r12
  int v11; // r1
  int v12; // r7
  int v13; // r1
  int v14; // r3
  int v15; // r0
  _DWORD *BlockMaterial; // r5
  int v17; // r2
  int v18; // r3
  int v19; // r3
  int v20; // r3
  int v21; // r7
  bool *result; // r0
  int v23; // r3
  int v24; // r2
  int v25; // r3
  int BlockID; // r0
  FlowFluidMaterial *v27; // r0
  World *v28; // r1
  int v29; // r3
  int v30; // r7
  int *v31; // r5
  int v32; // r1
  int v33; // r12
  int FlowDecay; // [sp+14h] [bp-30h]
  int v36; // [sp+14h] [bp-30h]
  int v37; // [sp+18h] [bp-2Ch]
  int v38; // [sp+1Ch] [bp-28h]
  bool v39[4]; // [sp+24h] [bp-20h] BYREF
  _DWORD v40[3]; // [sp+28h] [bp-1Ch] BYREF
  _DWORD v41[4]; // [sp+34h] [bp-10h] BYREF

  v4 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  v40[0] = *(_DWORD *)a3;
  v40[1] = v4 - 1;
  v40[2] = v6;
  FlowDecay = FluidBlockMaterial::getFlowDecay(this, (World *)a2, a3);
  v38 = FluidBlockMaterial::isLava(this, *((_DWORD *)this + 8)) + 1;
  v37 = (*(int (__fastcall **)(FlowFluidMaterial *))(*(_DWORD *)this + 100))(this);
  if ( FlowDecay > 0 )
  {
    *((_DWORD *)this + 20) = 0;
    v8 = g_DirectionCoord;
    SmallestFlowDecay = -1000;
    do
    {
      v10 = *((_DWORD *)a3 + 1) + v8[1];
      v11 = *((_DWORD *)a3 + 2) + v8[2];
      v12 = *v8;
      v8 += 3;
      v41[0] = *(_DWORD *)a3 + v12;
      v41[1] = v10;
      v41[2] = v11;
      SmallestFlowDecay = FlowFluidMaterial::getSmallestFlowDecay(
                            this,
                            (World *)a2,
                            (const WCoord *)v41,
                            SmallestFlowDecay);
    }
    while ( v8 != &dword_516658 );
    v21 = SmallestFlowDecay + v38;
    if ( SmallestFlowDecay + v38 > 7 || SmallestFlowDecay < 0 )
      v21 = -1;
    v13 = *(_DWORD *)a3;
    v41[1] = *((_DWORD *)a3 + 1) + 1;
    v14 = *((_DWORD *)a3 + 2);
    v41[0] = v13;
    v41[2] = v14;
    v15 = FluidBlockMaterial::getFlowDecay(this, (World *)a2, (const WCoord *)v41);
    if ( v15 >= 0 )
    {
      v21 = v15;
      if ( v15 <= 7 )
        v21 = v15 + 8;
    }
    if ( *((int *)this + 20) > 1 && FluidBlockMaterial::isWater(this, *((_DWORD *)this + 8)) )
    {
      BlockMaterial = (_DWORD *)World::getBlockMaterial((World *)a2, (const WCoord *)v40, (int)v40);
      if ( (*(int (__fastcall **)(_DWORD *))(*BlockMaterial + 44))(BlockMaterial) != 0
        || (*(int (__fastcall **)(FlowFluidMaterial *, _DWORD))(*(_DWORD *)this + 76))(this, BlockMaterial[8]) != 0
        && World::getBlockData((World *)a2, (const WCoord *)v40, v17, v18) == 0 )
      {
        v21 = 0;
      }
    }
    if ( FluidBlockMaterial::isLava(this, *((_DWORD *)this + 8))
      && FlowDecay <= 7
      && v21 <= 7
      && v21 > FlowDecay
      && GenRandomInt(0, 3) != 0 )
    {
      v19 = 4 * v37;
      v37 *= 4;
    }
    if ( v21 == FlowDecay )
    {
      FlowFluidMaterial::updateFlow(this, (World *)a2, a3, v19);
    }
    else if ( v21 >= 0 )
    {
      World::setBlockData((World *)a2, a3, v21, 3);
      BlockTickMgr::scheduleBlockUpdate(a2[34], a3, *((_DWORD *)this + 8), v37, 0);
      World::notifyBlocksOfNeighborChange((World *)a2, a3, *((_DWORD *)this + 8));
    }
    else
    {
      World::setBlockAll((World *)a2, a3, 0, 0, 3);
    }
  }
  else
  {
    FlowFluidMaterial::updateFlow(this, (World *)a2, a3, v7);
    v21 = FlowDecay;
  }
  result = (bool *)FlowFluidMaterial::liquidCanDisplaceBlock(this, (World *)a2, (const WCoord *)v40, v20);
  if ( result != nullptr )
  {
    if ( FluidBlockMaterial::isLava(this, *((_DWORD *)this + 8))
      && (BlockID = World::getBlockID((World *)a2, (const WCoord *)v40, v24, v25),
          FluidBlockMaterial::isWater(this, BlockID)) )
    {
      return (bool *)World::setBlockAll((World *)a2, (const WCoord *)v40, 104, 0, 3);
    }
    else
    {
      if ( v21 <= 7 )
      {
        v28 = (World *)a2;
        v29 = v21 + 8;
        v27 = this;
      }
      else
      {
        v27 = this;
        v28 = (World *)a2;
        v29 = v21;
      }
      return (bool *)FlowFluidMaterial::flowIntoBlock(v27, v28, (const WCoord *)v40, v29);
    }
  }
  else if ( v21 >= 0
         && (v21 == 0
          || (result = (bool *)FlowFluidMaterial::blockBlocksFlow(this, (World *)a2, (const WCoord *)v40, v23)) != nullptr) )
  {
    result = FlowFluidMaterial::getOptimalFlowDirections(this, v39, (World *)a2, a3);
    if ( v21 > 7 )
    {
      v36 = 1;
    }
    else
    {
      v36 = v21 + v38;
      if ( v21 + v38 > 7 )
        return result;
    }
    v30 = 0;
    v31 = g_DirectionCoord;
    do
    {
      if ( v39[v30] )
      {
        v32 = *((_DWORD *)a3 + 1) + v31[1];
        v33 = *((_DWORD *)a3 + 2) + v31[2];
        v41[0] = *(_DWORD *)a3 + *v31;
        v41[1] = v32;
        v41[2] = v33;
        result = (bool *)FlowFluidMaterial::flowIntoBlock(this, (World *)a2, (const WCoord *)v41, v36);
      }
      ++v30;
      v31 += 3;
    }
    while ( v30 != 4 );
  }
  return result;
}


//======================================================================
// FlowFluidMaterial::onBlockAdded(World *,WCoord const&)
// address: 0x002ED7B4   size: 0x3A (58 bytes)
//======================================================================
FlowFluidMaterial *__fastcall FlowFluidMaterial::onBlockAdded(
        FlowFluidMaterial *this,
        BlockTickMgr **a2,
        const WCoord *a3,
        int a4)
{
  int v7; // r2
  int v8; // r3
  int BlockID; // r7
  BlockTickMgr *v10; // r6
  int v11; // r0
  FlowFluidMaterial *v13; // [sp+0h] [bp-Ch]

  v13 = this;
  FluidBlockMaterial::onBlockAdded(this, (World *)a2, a3, a4);
  BlockID = World::getBlockID((World *)a2, a3, v7, v8);
  if ( BlockID == *((_DWORD *)this + 8) )
  {
    v10 = a2[34];
    v11 = (*(int (__fastcall **)(FlowFluidMaterial *))(*(_DWORD *)this + 100))(this);
    BlockTickMgr::scheduleBlockUpdate(v10, a3, BlockID, v11, 0);
  }
  return v13;
}

