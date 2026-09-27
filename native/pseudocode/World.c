// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: World

//======================================================================
// World::getBlockID(int,int,int)
// address: 0x00265DF4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall World::getBlockID(World *this, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  return World::getBlockID(this, (const WCoord *)v5);
}


//======================================================================
// World::setBlockAir(WCoord const&)
// address: 0x0026BBC0   size: 0x10 (16 bytes)
//======================================================================
int __fastcall World::setBlockAir(World *this, const WCoord *a2)
{
  int v3; // [sp+0h] [bp-Ch]

  World::setBlockAll(this, a2, 0, 0, 3);
  return v3;
}


//======================================================================
// World::isBlockNormalCube(WCoord const&)
// address: 0x002B484C   size: 0xC (12 bytes)
//======================================================================
int __fastcall World::isBlockNormalCube(World *this, const WCoord *a2)
{
  BlockMaterial *BlockID; // r0
  int v3; // r1

  BlockID = (BlockMaterial *)World::getBlockID(this, a2);
  return BlockMaterial::isNormalCube(BlockID, v3);
}


//======================================================================
// World::isBlockNormalCubeDefault(WCoord const&,bool)
// address: 0x002B4858   size: 0x6C (108 bytes)
//======================================================================
int __fastcall World::isBlockNormalCubeDefault(World *this, const WCoord *a2, int a3)
{
  BlockMaterialMgr *v6; // r6
  int BlockID; // r0
  int Material; // r4
  int result; // r0

  if ( World::getChunk(
         this,
         *(_DWORD *)a2 / 16 - ((unsigned int)(*(_DWORD *)a2 % 16) >> 31),
         *((_DWORD *)a2 + 2) / 16 - ((unsigned int)(*((_DWORD *)a2 + 2) % 16) >> 31)) == 0 )
    return a3;
  v6 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  BlockID = World::getBlockID(this, a2);
  Material = BlockMaterialMgr::getMaterial(v6, BlockID);
  result = (*(int (__fastcall **)(int))(*(_DWORD *)Material + 60))(Material);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)Material + 64))(Material);
  return result;
}


//======================================================================
// World::isBlockFullCube(WCoord const&)
// address: 0x002B48C8   size: 0x8 (8 bytes)
//======================================================================
int __fastcall World::isBlockFullCube(World *this, const WCoord *a2)
{
  return World::isBlockNormalCube(this, a2);
}


//======================================================================
// World::doesBlockHaveSolidTopSurface(WCoord const&)
// address: 0x002B48D0   size: 0x26 (38 bytes)
//======================================================================
int __fastcall World::doesBlockHaveSolidTopSurface(World *this, const WCoord *a2)
{
  _WORD *Block; // r4
  int Material; // r0

  Block = (_WORD *)World::getBlock(this, a2);
  Material = BlockMaterialMgr::getMaterial(
               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
               *Block & 0xFFF);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)Material + 72))(Material, (int)(unsigned __int16)*Block >> 12);
}


//======================================================================
// World::isBlockProvidingPowerTo(WCoord const&,DirectionType)
// address: 0x002B48FC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall World::isBlockProvidingPowerTo(World *a1, const WCoord *a2, int a3)
{
  int BlockID; // r0
  int Material; // r0

  BlockID = World::getBlockID(a1, a2);
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, BlockID);
  return (*(int (__fastcall **)(int, World *, const WCoord *, int))(*(_DWORD *)Material + 164))(Material, a1, a2, a3);
}


//======================================================================
// World::getBlockPowerInput(WCoord const&)
// address: 0x002B492C   size: 0x5A (90 bytes)
//======================================================================
int __fastcall World::getBlockPowerInput(World *this, const WCoord *a2)
{
  int v2; // r5
  int *v3; // r4
  int v5; // r6
  int v6; // r12
  int v7; // r2
  int isBlockProvidingPowerTo; // r0
  int v10; // [sp+0h] [bp-1Ch]
  _DWORD v12[4]; // [sp+Ch] [bp-10h] BYREF

  v2 = 0;
  v3 = g_DirectionCoord;
  v5 = 0;
  do
  {
    v10 = *((_DWORD *)a2 + 2) + v3[2];
    v6 = *((_DWORD *)a2 + 1) + v3[1];
    v12[0] = *(_DWORD *)a2 + *v3;
    v12[2] = v10;
    v12[1] = v6;
    v7 = v2 + 1;
    if ( (v2 & 1) != 0 )
      v7 = v2 - 1;
    isBlockProvidingPowerTo = World::isBlockProvidingPowerTo(this, (const WCoord *)v12, v7);
    if ( isBlockProvidingPowerTo > v5 )
    {
      v5 = isBlockProvidingPowerTo;
      if ( isBlockProvidingPowerTo > 14 )
        break;
    }
    ++v2;
    v3 += 3;
  }
  while ( v2 != 6 );
  return v5;
}


//======================================================================
// World::getIndirectPowerLevelTo(WCoord const&,DirectionType)
// address: 0x002B498C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall World::getIndirectPowerLevelTo(World *a1, const WCoord *a2, int a3)
{
  int BlockID; // r0
  int Material; // r0

  if ( World::isBlockNormalCube(a1, a2) != 0 )
    return World::getBlockPowerInput(a1, a2);
  BlockID = World::getBlockID(a1, a2);
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, BlockID);
  return (*(int (__fastcall **)(int, World *, const WCoord *, int))(*(_DWORD *)Material + 168))(Material, a1, a2, a3);
}


//======================================================================
// World::getStrongestIndirectPower(WCoord const&)
// address: 0x002B49D0   size: 0x5E (94 bytes)
//======================================================================
int __fastcall World::getStrongestIndirectPower(World *this, const WCoord *a2)
{
  int v2; // r5
  int *v3; // r4
  int v5; // r6
  int v6; // r12
  int v7; // r2
  int IndirectPowerLevelTo; // r0
  int v10; // [sp+0h] [bp-1Ch]
  _DWORD v12[4]; // [sp+Ch] [bp-10h] BYREF

  v2 = 0;
  v3 = g_DirectionCoord;
  v5 = 0;
  while ( 1 )
  {
    v10 = *((_DWORD *)a2 + 2) + v3[2];
    v6 = *((_DWORD *)a2 + 1) + v3[1];
    v12[0] = *(_DWORD *)a2 + *v3;
    v12[2] = v10;
    v12[1] = v6;
    v7 = v2 + 1;
    if ( (v2 & 1) != 0 )
      v7 = v2 - 1;
    IndirectPowerLevelTo = World::getIndirectPowerLevelTo(this, (const WCoord *)v12, v7);
    if ( IndirectPowerLevelTo > v5 )
    {
      if ( IndirectPowerLevelTo > 14 )
        break;
      v5 = IndirectPowerLevelTo;
    }
    ++v2;
    v3 += 3;
    if ( v2 == 6 )
      return v5;
  }
  return 15;
}


//======================================================================
// World::isBlockIndirectlyGettingPowered(WCoord const&)
// address: 0x002B4A34   size: 0x56 (86 bytes)
//======================================================================
int __fastcall World::isBlockIndirectlyGettingPowered(World *this, const WCoord *a2)
{
  int *v3; // r4
  int v5; // r5
  int v6; // r12
  int v7; // r2
  int v9; // [sp+4h] [bp-18h]
  _DWORD v10[4]; // [sp+Ch] [bp-10h] BYREF

  v3 = g_DirectionCoord;
  v5 = 0;
  while ( 1 )
  {
    v9 = *((_DWORD *)a2 + 2) + v3[2];
    v6 = *((_DWORD *)a2 + 1) + v3[1];
    v10[0] = *(_DWORD *)a2 + *v3;
    v10[2] = v9;
    v10[1] = v6;
    v7 = v5 + 1;
    if ( (v5 & 1) != 0 )
      v7 = v5 - 1;
    if ( World::getIndirectPowerLevelTo(this, (const WCoord *)v10, v7) > 0 )
      break;
    ++v5;
    v3 += 3;
    if ( v5 == 6 )
      return 0;
  }
  return 1;
}


//======================================================================
// World::notifyOneBlockOfNeighborChange(WCoord const&,int)
// address: 0x002B4A90   size: 0x30 (48 bytes)
//======================================================================
int __fastcall World::notifyOneBlockOfNeighborChange(World *this, const WCoord *a2, int a3)
{
  BlockMaterialMgr *v6; // r4
  int BlockID; // r0
  int result; // r0

  v6 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  BlockID = World::getBlockID(this, a2);
  result = BlockMaterialMgr::getMaterial(v6, BlockID);
  if ( result != 0 )
    return (*(int (__fastcall **)(int, World *, const WCoord *, int))(*(_DWORD *)result + 144))(result, this, a2, a3);
  return result;
}


//======================================================================
// World::notifyBlocksOfNeighborChange(WCoord const&,int)
// address: 0x002B4AC4   size: 0x48 (72 bytes)
//======================================================================
void *__fastcall World::notifyBlocksOfNeighborChange(World *this, const WCoord *a2, int a3)
{
  int *v4; // r4
  int v7; // r2
  int v8; // r12
  int v9; // r0
  void *result; // r0
  _DWORD v11[4]; // [sp+Ch] [bp-10h] BYREF

  v4 = g_DirectionCoord;
  do
  {
    v7 = *((_DWORD *)a2 + 1) + v4[1];
    v8 = *((_DWORD *)a2 + 2) + v4[2];
    v9 = *v4;
    v4 += 3;
    v11[0] = *(_DWORD *)a2 + v9;
    v11[1] = v7;
    v11[2] = v8;
    World::notifyOneBlockOfNeighborChange(this, (const WCoord *)v11, a3);
    result = &slotelements;
  }
  while ( v4 != (int *)&slotelements );
  return result;
}


//======================================================================
// World::notifyBlocksOfNeighborChangeExcept(WCoord const&,int,DirectionType)
// address: 0x002B4B10   size: 0x4C (76 bytes)
//======================================================================
int __fastcall World::notifyBlocksOfNeighborChangeExcept(World *a1, _DWORD *a2, int a3, int a4)
{
  int *v4; // r4
  int i; // r5
  int result; // r0
  int v9; // r2
  int v10; // r12
  _DWORD v13[4]; // [sp+Ch] [bp-10h] BYREF

  v4 = g_DirectionCoord;
  for ( i = 0; i != 6; ++i )
  {
    result = a4;
    if ( i != a4 )
    {
      v9 = a2[1] + v4[1];
      v10 = a2[2] + v4[2];
      v13[0] = *a2 + *v4;
      v13[1] = v9;
      v13[2] = v10;
      result = World::notifyOneBlockOfNeighborChange(a1, (const WCoord *)v13, a3);
    }
    v4 += 3;
  }
  return result;
}


//======================================================================
// World::intersect(Ogre::Vector3 const&,Ogre::Vector3 const&,float,IntersectResult *,PICK_METHOD)
// address: 0x002C5188   size: 0x256 (598 bytes)
//======================================================================
int __fastcall World::intersect(World *a1, float *a2, float *a3, float a4, int *a5, int a6)
{
  float v6; // r6
  float v7; // r5
  float v9; // r6
  float v10; // r5
  float v11; // r4
  int BlockID; // r1
  _DWORD *Material; // r0
  int v14; // r6
  int *v15; // r3
  float v17; // [sp+8h] [bp-54h]
  float v18; // [sp+8h] [bp-54h]
  int v19; // [sp+Ch] [bp-50h]
  float v20; // [sp+10h] [bp-4Ch]
  float v21; // [sp+14h] [bp-48h]
  int v22; // [sp+18h] [bp-44h]
  unsigned int v24; // [sp+20h] [bp-3Ch]
  int v25; // [sp+24h] [bp-38h]
  int v26; // [sp+28h] [bp-34h]
  int v28; // [sp+30h] [bp-2Ch]
  float v30; // [sp+3Ch] [bp-20h]
  float v31[3]; // [sp+40h] [bp-1Ch] BYREF
  int v32; // [sp+4Ch] [bp-10h] BYREF
  unsigned int v33; // [sp+50h] [bp-Ch]
  int v34; // [sp+54h] [bp-8h]

  v6 = a2[1];
  v7 = a2[2];
  v17 = *a2;
  v31[0] = *a2 * 100.0;
  v31[1] = v6 * 100.0;
  v31[2] = v7 * 100.0;
  v28 = (int)j_floor(v17);
  v24 = (int)j_floor(v6);
  v19 = (int)j_floor(v7);
  v9 = a3[1];
  v21 = *a3;
  v10 = a3[2];
  v25 = 1;
  if ( *a3 <= 0.0 )
    v25 = -(v21 < 0.0);
  v26 = 1;
  if ( v9 <= 0.0 )
    v26 = -(v9 < 0.0);
  v22 = 1;
  if ( v10 <= 0.0 )
    v22 = -(v10 < 0.0);
  v18 = intbound(v17, v21);
  v20 = intbound(a2[1], v9);
  v11 = intbound(a2[2], v10);
  v30 = (float)v26 / v9;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v24 > 0xFF )
          goto LABEL_24;
        v33 = v24;
        v32 = v28;
        v34 = v19;
        BlockID = World::getBlockID(a1, (const WCoord *)&v32);
        if ( BlockID <= 0 )
          goto LABEL_24;
        Material = (_DWORD *)BlockMaterialMgr::getMaterial(
                               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                               BlockID);
        v14 = (int)Material;
        if ( a6 != 0 )
        {
          if ( a6 != 1 || *(_DWORD *)(Material[9] + 12) != 1 )
            goto LABEL_24;
        }
        else
        {
          if ( (*(int (__fastcall **)(_DWORD *))(*Material + 48))(Material) != 0 )
          {
            if ( a5 != nullptr )
            {
              v15 = (int *)a5[17];
              if ( v15 == (int *)a5[18] )
              {
                std::vector<WCoord>::_M_emplace_back_aux<WCoord const&>(a5 + 16, &v32);
              }
              else
              {
                if ( v15 != nullptr )
                {
                  *v15 = v32;
                  v15[1] = v33;
                  v15[2] = v34;
                }
                a5[17] += 12;
              }
            }
            goto LABEL_24;
          }
          if ( *(_DWORD *)(*(_DWORD *)(v14 + 36) + 8) == 0 )
            goto LABEL_24;
        }
        if ( sub_2C4F68(v14, (int)a1, &v32, v31, (Ogre::Vector3 *)a3, (int)a5) != 0 )
          return 1;
LABEL_24:
        if ( v18 >= v20 )
          break;
        if ( v18 >= v11 )
          goto LABEL_31;
        if ( v18 > a4 )
          return 0;
        v28 += v25;
        v18 = v18 + (float)((float)v25 / v21);
      }
      if ( v20 >= v11 )
        break;
      if ( v20 > a4 )
        return 0;
      v24 += v26;
      v20 = v20 + v30;
    }
LABEL_31:
    if ( v11 > a4 )
      return 0;
    v19 += v22;
    v11 = v11 + (float)((float)v22 / v10);
  }
}


//======================================================================
// World::getChunk(WCoord const&)
// address: 0x002C6FD8   size: 0x2E (46 bytes)
//======================================================================
int __fastcall World::getChunk(World *this, const WCoord *a2)
{
  return World::getChunk(
           this,
           *(_DWORD *)a2 / 16 - ((unsigned int)(*(_DWORD *)a2 % 16) >> 31),
           *((_DWORD *)a2 + 2) / 16 - ((unsigned int)(*((_DWORD *)a2 + 2) % 16) >> 31));
}


//======================================================================
// World::destroyBlockInWorldPartially(long long,WCoord &,int)
// address: 0x002C8562   size: 0x2 (2 bytes)
//======================================================================
void World::destroyBlockInWorldPartially()
{
  ;
}


//======================================================================
// World::setionSvrAfterInit(void)
// address: 0x002C85E4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall World::setionSvrAfterInit(World *this)
{
  int result; // r0

  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 52) = 999999;
  *((_DWORD *)this + 53) = 999999;
  *((_DWORD *)this + 54) = 999999;
  *((_DWORD *)this + 55) = -1;
  *((_DWORD *)this + 56) = -1;
  *((_DWORD *)this + 57) = -1;
  *((_DWORD *)this + 51) = *((_DWORD *)this + 1);
  *((_BYTE *)this + 202) = 0;
  result = *((_DWORD *)this + 38);
  *((_DWORD *)this + 39) = result;
  return result;
}


//======================================================================
// World::isCreativeMode(void)
// address: 0x002C864C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall World::isCreativeMode(World *this)
{
  return WorldManager::isCreativeMode((WorldManager *)g_WorldMgr);
}


//======================================================================
// World::getChunkSeed(int,int)
// address: 0x002C8660   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall World::getChunkSeed(World *this, int a2, int a3)
{
  return 0x5851F42D4C957F2DLL
       * (0x5851F42D4C957F2DLL
        * (0x5851F42D4C957F2DLL * (0x5851F42D4C957F2DLL * *((unsigned int *)this + 11) + 0x14057B7EF767814FLL + a2)
         + 0x14057B7EF767814FLL
         + *((unsigned int *)this + 12))
        + 0x14057B7EF767814FLL
        + a3)
       + 0x14057B7EF767814FLL;
}


//======================================================================
// World::doOWMsgGridUp(tagOWGridUpdate *)
// address: 0x002C86D0   size: 0x2 (2 bytes)
//======================================================================
void World::doOWMsgGridUp()
{
  ;
}


//======================================================================
// World::checkGridUPAfter(void)
// address: 0x002C86D2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall World::checkGridUPAfter(World *this)
{
  ;
}


//======================================================================
// World::gridUpSvr(Chunk *,tagOWGridChg *)
// address: 0x002C86D4   size: 0x2 (2 bytes)
//======================================================================
void World::gridUpSvr()
{
  ;
}


//======================================================================
// World::chunkUpSvrSection(Chunk *,tagOWBlock *)
// address: 0x002C86D6   size: 0x2 (2 bytes)
//======================================================================
void World::chunkUpSvrSection()
{
  ;
}


//======================================================================
// World::doOWMsgBlockUpSvr(tagOWBlockUpdate *)
// address: 0x002C86D8   size: 0x2 (2 bytes)
//======================================================================
void World::doOWMsgBlockUpSvr()
{
  ;
}


//======================================================================
// World::calSectionUP(Chunk *)
// address: 0x002C86DC   size: 0x66 (102 bytes)
//======================================================================
__int64 __fastcall World::calSectionUP(__int64 this)
{
  int v1; // r5
  World *v2; // r4
  int v3; // r2
  int i; // r5
  int j; // r6

  v1 = *(_DWORD *)(this + 152);
  v2 = (World *)this;
  while ( 1 )
  {
    v3 = v1;
    v1 += 32800;
    if ( v3 == *((_DWORD *)v2 + 39) )
      break;
    World::chunkUpSvrSection();
  }
  if ( *((int *)v2 + 55) >= 0 )
  {
    for ( i = *((_DWORD *)v2 + 54); i <= *((_DWORD *)v2 + 57); ++i )
    {
      for ( j = *((_DWORD *)v2 + 52); j <= *((_DWORD *)v2 + 55); ++j )
        Chunk::calTopHeight((Chunk *)HIDWORD(this), j, i);
    }
  }
  World::setionSvrAfterInit(v2);
  return this;
}


//======================================================================
// World::doOWMsgBlockCheckSvr(void)
// address: 0x002C8748   size: 0x2 (2 bytes)
//======================================================================
void __fastcall World::doOWMsgBlockCheckSvr(World *this)
{
  ;
}


//======================================================================
// World::delCheckChunkSet(int,int,int)
// address: 0x002C874A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall World::delCheckChunkSet(World *this, int a2, int a3, int a4)
{
  ;
}


//======================================================================
// World::popSectionSvr(Chunk *)
// address: 0x002C874C   size: 0x2 (2 bytes)
//======================================================================
void World::popSectionSvr()
{
  ;
}


//======================================================================
// World::get_wid(void)
// address: 0x002C8750   size: 0x38 (56 bytes)
//======================================================================
__int64 __fastcall World::get_wid(World *this, int a2, int a3, int a4)
{
  _DWORD *v4; // r4
  __int64 v6; // [sp+0h] [bp-10h]
  _DWORD v7[2]; // [sp+8h] [bp-8h] BYREF

  v7[0] = a3;
  v7[1] = a4;
  v4 = (_DWORD *)((char *)this + 232);
  CSMgr::getSvrTime(g_CSMgr, v7);
  v6 = v7[0];
  HIDWORD(v6) = (*v4)++;
  return v6;
}


//======================================================================
// World::hasSky(void)
// address: 0x002C878C   size: 0xC (12 bytes)
//======================================================================
int __fastcall World::hasSky(World *this)
{
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 31) + 20))(*((_DWORD *)this + 31));
}


//======================================================================
// World::genRandomInt(int,int)
// address: 0x002C8798   size: 0xC (12 bytes)
//======================================================================
int __fastcall World::genRandomInt(World *this, int a2, int a3)
{
  return GenRandomInt(a2, a3);
}


//======================================================================
// World::isRaining(void)
// address: 0x002C87A4   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall World::isRaining(Environment **this)
{
  return COERCE_FLOAT(Environment::getRainStrength(*(this + 7))) > 0.2;
}


//======================================================================
// World::isThundering(void)
// address: 0x002C87BC   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall World::isThundering(Environment **this)
{
  return COERCE_FLOAT(Environment::getThunderStrength(*(this + 7))) > 0.9;
}


//======================================================================
// World::isBlockNormalCube(int,int,int)
// address: 0x002C87D4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall World::isBlockNormalCube(World *this, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  return World::isBlockNormalCube(this, (const WCoord *)v5);
}


//======================================================================
// World::canPlaceBlockAt(int,int,int,int)
// address: 0x002C87E8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall World::canPlaceBlockAt(World *this, int a2, int a3, int a4, int a5)
{
  int *Material; // r0
  int v10; // r3
  int (__fastcall *v11)(int *, World *); // r3
  int v13; // [sp+4h] [bp-10h]
  int v14; // [sp+8h] [bp-Ch]
  int v15; // [sp+Ch] [bp-8h]

  Material = (int *)BlockMaterialMgr::getMaterial(
                      (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                      a5);
  v10 = *Material;
  v13 = a2;
  v11 = *(int (__fastcall **)(int *, World *))(v10 + 152);
  v14 = a3;
  v15 = a4;
  return v11(Material, this);
}


//======================================================================
// World::tryCreatePortal(int,int,int,int)
// address: 0x002C881C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall World::tryCreatePortal(World *this, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v7; // r4
  int v8; // [sp+4h] [bp-18h]
  int v9; // [sp+Ch] [bp-10h] BYREF
  int v10; // [sp+10h] [bp-Ch]
  int v11; // [sp+14h] [bp-8h]

  v11 = a4;
  v9 = a2;
  v10 = a3;
  result = BlockPortal::tryCreatePortal(this, (World *)&v9, (WCoord *)byte_9, 2, 3, v8);
  if ( result != 0 )
  {
    *((_DWORD *)this + 28) = v9;
    v7 = v11;
    *((_DWORD *)this + 29) = v10;
    *((_DWORD *)this + 30) = v7;
  }
  return result;
}


//======================================================================
// World::canPlaceBlockOnSide(WCoord const&,int,int)
// address: 0x002C884C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall World::canPlaceBlockOnSide(World *this, const WCoord *a2, int a3, int a4)
{
  int Material; // r0

  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a4);
  return (*(int (__fastcall **)(int, World *, const WCoord *, int))(*(_DWORD *)Material + 156))(Material, this, a2, a3);
}


//======================================================================
// World::pickGround(Ogre::WorldRay const&,IntersectResult *,PICK_METHOD)
// address: 0x002C8878   size: 0x98 (152 bytes)
//======================================================================
int __fastcall World::pickGround(World *a1, int a2, int *a3, int a4)
{
  float v5; // r0
  float v6; // r0
  float v7; // r7
  float v8; // r0
  float v9; // r0
  float v11; // [sp+Ch] [bp-20h]
  float v12[4]; // [sp+1Ch] [bp-10h] BYREF

  v5 = (double)(*(_DWORD *)(a2 + 4) - dword_4C6B7C) / 10.0;
  v11 = v5 * 0.01;
  v6 = (double)(*(_DWORD *)(a2 + 8) - dword_4C6B80) / 10.0;
  v7 = v6 * 0.01;
  v8 = (double)(*(_DWORD *)a2 - Ogre::WorldPos::m_Origin) / 10.0;
  v12[0] = v8 * 0.01;
  v9 = *(float *)(a2 + 24);
  v12[1] = v11;
  v12[2] = v7;
  return World::intersect(a1, v12, (float *)(a2 + 12), v9 * 0.01, a3, a4);
}


//======================================================================
// World::getChunk(ChunkIndex)
// address: 0x002C89B8   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall World::getChunk(int a1, int a2, int a3)
{
  _DWORD *result; // r0
  _DWORD v4[3]; // [sp+0h] [bp-Ch] BYREF

  v4[2] = a3;
  v4[1] = a3;
  result = Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::find(a1 + 72, v4);
  if ( result != nullptr )
    return (_DWORD *)result[3];
  return result;
}


//======================================================================
// World::getChunkBySCoord(int,int)
// address: 0x002C89CE   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall World::getChunkBySCoord(World *this, int a2, int a3)
{
  return World::getChunk((int)this, a2, a3);
}


//======================================================================
// World::getBlock(WCoord const&)
// address: 0x002C89D8   size: 0x2E (46 bytes)
//======================================================================
__int16 *__fastcall World::getBlock(World *this, const WCoord *a2, int a3, int a4)
{
  int Chunk; // r0
  Chunk *v6; // r4
  _DWORD v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  Chunk = World::getChunk(this, a2);
  v6 = (Chunk *)Chunk;
  if ( Chunk == 0 )
    return &word_51658C;
  operator-(v8, (int *)a2, (int *)(Chunk + 276));
  return (__int16 *)Chunk::getBlock(v6, (const WCoord *)v8);
}


//======================================================================
// World::gridChgSvr(Chunk *,unsigned char,tagGridInfo *,int)
// address: 0x002C8A0C   size: 0x122 (290 bytes)
//======================================================================
__int16 *__fastcall World::gridChgSvr(_DWORD *a1, Chunk *a2, int a3, unsigned __int16 *a4, int a5)
{
  int v7; // r2
  __int16 *result; // r0
  int v10; // r1
  int v11; // r3
  int v12; // r0
  int *v13; // r2
  int v14; // r6
  int v15; // r1
  int v16; // r5
  int v17; // r7
  int *v18; // r2
  int v19; // r5
  int v20; // r1
  int *v21; // r3
  __int16 **v22; // r4
  int *v23; // r2
  int v24; // r6
  int v25; // r1
  int v26; // r5
  int v27; // r7
  int *v28; // r2
  int v29; // r5
  int v30; // r1
  int *v31; // r3
  unsigned __int16 v32; // [sp+8h] [bp-14h] BYREF
  int v33; // [sp+Ch] [bp-10h] BYREF
  int v34; // [sp+10h] [bp-Ch]
  int v35; // [sp+14h] [bp-8h]

  v7 = *a4 + (a3 << 12);
  v33 = v7 & 0xF;
  v35 = (v7 >> 4) & 0xF;
  v34 = BYTE1(v7);
  result = World::getBlock((World *)a1, (const WCoord *)&v33, BYTE1(v7), v35);
  v10 = a4[1];
  if ( result == nullptr || (unsigned __int16)*result != v10 )
  {
    if ( a4[1] != 0 )
    {
      v32 = 0;
      Block::setAllData((Block *)&v32, v10);
      Chunk::setBlockAll(a2, v33, v34, v35, v32 & 0xFFF, (int)v32 >> 12);
    }
    else
    {
      Chunk::setBlockAll(a2, v33, v34, v35, 0, 0);
    }
    v11 = v33;
    v12 = v34;
    if ( a5 != 0 )
    {
      v23 = a1 + 52;
      v24 = v34;
      if ( v34 > a1[53] )
        v24 = a1[53];
      v25 = v35;
      v26 = v35;
      if ( v35 > a1[54] )
        v26 = a1[54];
      v27 = v33;
      if ( v33 > *v23 )
        v27 = *v23;
      *v23 = v27;
      a1[53] = v24;
      a1[54] = v26;
      v28 = a1 + 55;
      v29 = a1[56];
      if ( v29 < v12 )
        v29 = v12;
      result = (__int16 *)a1[57];
      if ( (int)result < v25 )
        result = (__int16 *)v25;
      v30 = *v28;
      if ( *v28 < v11 )
        v30 = v11;
      v31 = a1 + 56;
      *v28 = v30;
      v22 = (__int16 **)(a1 + 57);
      *v31 = v29;
    }
    else
    {
      v13 = a1 + 42;
      v14 = v34;
      if ( v34 > a1[43] )
        v14 = a1[43];
      v15 = v35;
      v16 = v35;
      if ( v35 > a1[44] )
        v16 = a1[44];
      v17 = v33;
      if ( v33 > *v13 )
        v17 = *v13;
      *v13 = v17;
      a1[43] = v14;
      a1[44] = v16;
      v18 = a1 + 45;
      v19 = a1[46];
      if ( v19 < v12 )
        v19 = v12;
      result = (__int16 *)a1[47];
      if ( (int)result < v15 )
        result = (__int16 *)v15;
      v20 = *v18;
      if ( *v18 < v11 )
        v20 = v11;
      v21 = a1 + 46;
      *v18 = v20;
      v22 = (__int16 **)(a1 + 47);
      *v21 = v19;
    }
    *v22 = result;
  }
  return result;
}


//======================================================================
// World::getBlockID(WCoord const&)
// address: 0x002C8B2E   size: 0xE (14 bytes)
//======================================================================
int __fastcall World::getBlockID(World *this, const WCoord *a2, int a3, int a4)
{
  return *World::getBlock(this, a2, a3, a4) & 0xFFF;
}


//======================================================================
// World::hasBlockInRange(int,WCoord const&,int,int,int,int)
// address: 0x002C8B3C   size: 0x70 (112 bytes)
//======================================================================
int __fastcall World::hasBlockInRange(World *this, int a2, const WCoord *a3, int a4, int a5, int a6, int a7)
{
  int i; // r7
  int v9; // r5
  int j; // r6
  int v12; // [sp+4h] [bp-28h]
  int v13; // [sp+8h] [bp-24h]
  int v14; // [sp+Ch] [bp-20h]
  _DWORD v17[4]; // [sp+1Ch] [bp-10h] BYREF

  v12 = *(_DWORD *)a3;
  v13 = *((_DWORD *)a3 + 1);
  v14 = *((_DWORD *)a3 + 2);
  for ( i = v14 - a4; ; ++i )
  {
    if ( i > v14 + a4 )
      return 0;
    v9 = v12 - a4;
LABEL_4:
    if ( v9 <= v12 + a4 )
      break;
  }
  for ( j = v13 + a5; ; ++j )
  {
    if ( j > v13 + a6 )
    {
      ++v9;
      goto LABEL_4;
    }
    v17[1] = j;
    v17[2] = i;
    v17[0] = v9;
    if ( World::getBlockID(this, (const WCoord *)v17, a6, v13 + a6) == a2 && --a7 <= 0 )
      break;
  }
  return 1;
}


//======================================================================
// World::hasBlockInRange(int,int,int,int,int,int,int)
// address: 0x002C8BAC   size: 0x24 (36 bytes)
//======================================================================
int __fastcall World::hasBlockInRange(World *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  _DWORD v9[4]; // [sp+14h] [bp-10h] BYREF

  v9[0] = a3;
  v9[1] = a4;
  v9[2] = a5;
  return World::hasBlockInRange(this, a2, (const WCoord *)v9, a6, a7, a8, 1);
}


//======================================================================
// World::getBlockMaterial(WCoord const&)
// address: 0x002C8BD0   size: 0x18 (24 bytes)
//======================================================================
int __fastcall World::getBlockMaterial(World *this, const WCoord *a2, int a3)
{
  BlockMaterialMgr *v3; // r4
  int BlockID; // r0

  v3 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  BlockID = World::getBlockID(this, a2, a3, (int)&Ogre::Singleton<BlockMaterialMgr>::ms_Singleton);
  return BlockMaterialMgr::getMaterial(v3, BlockID);
}


//======================================================================
// World::isBlockSolid(WCoord const&)
// address: 0x002C8BEC   size: 0xE (14 bytes)
//======================================================================
int __fastcall World::isBlockSolid(World *this, const WCoord *a2, int a3)
{
  int BlockMaterial; // r0

  BlockMaterial = World::getBlockMaterial(this, a2, a3);
  return (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 44))(BlockMaterial);
}


//======================================================================
// World::isBlockSolid(int,int,int)
// address: 0x002C8BFA   size: 0x18 (24 bytes)
//======================================================================
int __fastcall World::isBlockSolid(World *this, int a2, int a3, int a4)
{
  int BlockMaterial; // r0
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[0] = a2;
  v6[2] = a4;
  v6[1] = a3;
  BlockMaterial = World::getBlockMaterial(this, (const WCoord *)v6, a3);
  return (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 44))(BlockMaterial);
}


//======================================================================
// World::isBlockLiquid(WCoord const&)
// address: 0x002C8C12   size: 0xE (14 bytes)
//======================================================================
int __fastcall World::isBlockLiquid(World *this, const WCoord *a2, int a3)
{
  int BlockMaterial; // r0

  BlockMaterial = World::getBlockMaterial(this, a2, a3);
  return (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 48))(BlockMaterial);
}


//======================================================================
// World::isBlockLiquid(int,int,int)
// address: 0x002C8C20   size: 0x18 (24 bytes)
//======================================================================
int __fastcall World::isBlockLiquid(World *this, int a2, int a3, int a4)
{
  int BlockMaterial; // r0
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[0] = a2;
  v6[2] = a4;
  v6[1] = a3;
  BlockMaterial = World::getBlockMaterial(this, (const WCoord *)v6, a3);
  return (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 48))(BlockMaterial);
}


//======================================================================
// World::isBlockOpaqueCube(int,int,int)
// address: 0x002C8C38   size: 0x18 (24 bytes)
//======================================================================
int __fastcall World::isBlockOpaqueCube(World *this, int a2, int a3, int a4)
{
  int BlockMaterial; // r0
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[0] = a2;
  v6[2] = a4;
  v6[1] = a3;
  BlockMaterial = World::getBlockMaterial(this, (const WCoord *)v6, a3);
  return (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 60))(BlockMaterial);
}


//======================================================================
// World::fertilizeBlock(int,int,int,int)
// address: 0x002C8C50   size: 0x3A (58 bytes)
//======================================================================
int __fastcall World::fertilizeBlock(World *this, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int (__fastcall *v9)(int, World *, int *, int); // r3
  int v11; // [sp+Ch] [bp-10h] BYREF
  int v12; // [sp+10h] [bp-Ch]
  int v13; // [sp+14h] [bp-8h]

  v11 = a2;
  v12 = a3;
  v13 = a4;
  result = World::getBlockMaterial(this, (const WCoord *)&v11, a3);
  if ( result != 0 )
  {
    v9 = *(int (__fastcall **)(int, World *, int *, int))(*(_DWORD *)result + 148);
    v11 = a2;
    v12 = a3;
    v13 = a4;
    return v9(result, this, &v11, a5);
  }
  return result;
}


//======================================================================
// World::comparatorInputChange(WCoord const&,int)
// address: 0x002C8C8C   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall World::comparatorInputChange(World *this, const WCoord *a2, int a3)
{
  int *v3; // r4
  int v4; // r2
  int v5; // r3
  int result; // r0
  BlockMaterial *v7; // r6
  int v8; // r7
  int v9; // r1
  int v10; // r2
  int BlockID; // r7
  int v12; // r6
  int v13; // [sp+0h] [bp-3Ch]
  int v14; // [sp+4h] [bp-38h]
  RedstoneLogicMaterial *Material; // [sp+Ch] [bp-30h]
  int v19[3]; // [sp+20h] [bp-1Ch] BYREF
  int v20[4]; // [sp+2Ch] [bp-10h] BYREF

  Material = (RedstoneLogicMaterial *)BlockMaterialMgr::getMaterial(
                                        (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                        704);
  v3 = g_DirectionCoord;
  do
  {
    operator+(v19, (int *)a2, v3);
    result = World::getBlockID(this, (const WCoord *)v19, v4, v5);
    v7 = (BlockMaterial *)result;
    if ( result > 0 )
    {
      v14 = Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
      v8 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, result);
      if ( RedstoneLogicMaterial::isLogicBlock(Material, (int)v7) )
      {
        result = (*(int (__fastcall **)(int, World *, int *, int))(*(_DWORD *)v8 + 144))(v8, this, v19, a3);
      }
      else
      {
        result = BlockMaterial::isNormalCube(v7, v9);
        if ( result != 0 )
        {
          operator+(v20, v19, v3);
          qmemcpy(v19, v20, sizeof(v19));
          BlockID = World::getBlockID(this, (const WCoord *)v19, v10, v20[1]);
          v13 = Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
          v12 = BlockMaterialMgr::getMaterial(
                  (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                  BlockID);
          result = RedstoneLogicMaterial::isLogicBlock(Material, BlockID);
          if ( result != 0 )
            result = (*(int (__fastcall **)(int, World *, int *, int, int, int))(*(_DWORD *)v12 + 144))(
                       v12,
                       this,
                       v19,
                       a3,
                       v13,
                       v14);
        }
      }
    }
    v3 += 3;
  }
  while ( v3 != &dword_516658 );
  return result;
}


//======================================================================
// World::getLightOpacity(WCoord const&)
// address: 0x002C8D68   size: 0x18 (24 bytes)
//======================================================================
int __fastcall World::getLightOpacity(World *this, const WCoord *a2, int a3, int a4)
{
  int BlockID; // r0

  BlockID = World::getBlockID(this, a2, a3, a4);
  return *(_DWORD *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID) + 64);
}


//======================================================================
// World::isAnyLiquid(WCoord const&,WCoord const&)
// address: 0x002C8D84   size: 0x80 (128 bytes)
//======================================================================
int __fastcall World::isAnyLiquid(World *this, const WCoord *a2, const WCoord *a3)
{
  signed int v6; // r5
  int v7; // r2
  signed int v8; // r4
  signed int i; // r6
  unsigned int v11; // [sp+4h] [bp-28h]
  unsigned int v12; // [sp+8h] [bp-24h]
  signed int v13; // [sp+Ch] [bp-20h]
  signed int v14; // [sp+10h] [bp-1Ch]
  signed int v15; // [sp+14h] [bp-18h]
  _DWORD v16[4]; // [sp+1Ch] [bp-10h] BYREF

  v11 = CoordDivBlock(*(_DWORD *)a2);
  v12 = CoordDivBlock(*((_DWORD *)a2 + 1));
  v6 = CoordDivBlock(*((_DWORD *)a2 + 2));
  v13 = CoordDivBlock(*(_DWORD *)a3 + 100);
  v14 = CoordDivBlock(*((_DWORD *)a3 + 1) + 100);
  v15 = CoordDivBlock(*((_DWORD *)a3 + 2) + 100);
  while ( 1 )
  {
    if ( v6 >= v15 )
      return 0;
    v8 = v11;
LABEL_4:
    if ( v8 < v13 )
      break;
    ++v6;
  }
  for ( i = v12; ; ++i )
  {
    if ( i >= v14 )
    {
      ++v8;
      goto LABEL_4;
    }
    v16[0] = v8;
    v16[1] = i;
    v16[2] = v6;
    if ( (unsigned int)(World::getBlockID(this, (const WCoord *)v16, v7, v14) - 3) <= 3 )
      break;
  }
  return 1;
}


//======================================================================
// World::hasBlocksInCoordRange(WCoord const&,WCoord const&,int,int)
// address: 0x002C8E04   size: 0x88 (136 bytes)
//======================================================================
int __fastcall World::hasBlocksInCoordRange(World *this, const WCoord *a2, const WCoord *a3, int a4, int a5)
{
  signed int v8; // r5
  int v9; // r2
  signed int v10; // r4
  signed int i; // r6
  int BlockID; // r0
  unsigned int v14; // [sp+0h] [bp-2Ch]
  unsigned int v15; // [sp+4h] [bp-28h]
  signed int v16; // [sp+8h] [bp-24h]
  signed int v17; // [sp+Ch] [bp-20h]
  signed int v18; // [sp+10h] [bp-1Ch]
  _DWORD v20[4]; // [sp+1Ch] [bp-10h] BYREF

  v14 = CoordDivBlock(*(_DWORD *)a2);
  v15 = CoordDivBlock(*((_DWORD *)a2 + 1));
  v8 = CoordDivBlock(*((_DWORD *)a2 + 2));
  v16 = CoordDivBlock(*(_DWORD *)a3 + 100);
  v17 = CoordDivBlock(*((_DWORD *)a3 + 1) + 100);
  v18 = CoordDivBlock(*((_DWORD *)a3 + 2) + 100);
  while ( 1 )
  {
    if ( v8 >= v18 )
      return 0;
    v10 = v14;
LABEL_4:
    if ( v10 < v16 )
      break;
    ++v8;
  }
  for ( i = v15; ; ++i )
  {
    if ( i >= v17 )
    {
      ++v10;
      goto LABEL_4;
    }
    v20[0] = v10;
    v20[1] = i;
    v20[2] = v8;
    BlockID = World::getBlockID(this, (const WCoord *)v20, v9, v17);
    if ( BlockID == a4 || BlockID == a5 )
      break;
  }
  return 1;
}


//======================================================================
// World::getBlockData(WCoord const&)
// address: 0x002C8E8C   size: 0xC (12 bytes)
//======================================================================
int __fastcall World::getBlockData(World *this, const WCoord *a2, int a3, int a4)
{
  return (int)(unsigned __int16)*World::getBlock(this, a2, a3, a4) >> 12;
}


//======================================================================
// World::getBlockNumInRange(int,int,int,int,int,int,int)
// address: 0x002C8E98   size: 0x6C (108 bytes)
//======================================================================
int __fastcall World::getBlockNumInRange(World *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v8; // r4
  int v9; // r7
  int i; // r5
  int j; // r6
  _DWORD v17[4]; // [sp+14h] [bp-10h] BYREF

  v8 = a4 + a7;
  v9 = 0;
  while ( v8 <= a4 + a8 )
  {
    for ( i = a5 - a6; i <= a5 + a6; ++i )
    {
      for ( j = a3 - a6; j <= a3 + a6; ++j )
      {
        v17[0] = j;
        v17[1] = v8;
        v17[2] = i;
        v9 += (*World::getBlock(this, (const WCoord *)v17, a3, a3 + a6) & 0xFFF) == a2;
      }
    }
    ++v8;
  }
  return v9;
}


//======================================================================
// World::isBoxCollide(CollideAABB const&)
// address: 0x002C8F04   size: 0x18A (394 bytes)
//======================================================================
int __fastcall World::isBoxCollide(World *this, const CollideAABB *a2)
{
  int v3; // r2
  int v4; // r1
  int v5; // r3
  int v6; // r5
  int v7; // r6
  int v8; // r3
  __int16 *Block; // r0
  _DWORD *Material; // r0
  void (__fastcall *v12)(_DWORD *, void *, World *, int *); // r3
  int v13; // [sp+4h] [bp-60h]
  int v14; // [sp+8h] [bp-5Ch]
  int v15; // [sp+Ch] [bp-58h]
  int v16; // [sp+10h] [bp-54h]
  int v18[3]; // [sp+24h] [bp-40h] BYREF
  _DWORD v19[3]; // [sp+30h] [bp-34h] BYREF
  int v20; // [sp+3Ch] [bp-28h] BYREF
  int v21; // [sp+40h] [bp-24h]
  int v22; // [sp+44h] [bp-20h]
  _DWORD v23[3]; // [sp+48h] [bp-1Ch] BYREF
  int v24[4]; // [sp+54h] [bp-10h] BYREF

  v3 = *((_DWORD *)a2 + 1);
  v4 = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 2);
  v18[1] = v3;
  v18[0] = v4;
  v18[2] = v5;
  operator+(v19, (int *)a2, (int *)a2 + 3);
  CoordDivBlock((const WCoord *)&v20, v18);
  v24[0] = v19[0] - 1;
  v24[1] = v19[1] - 1;
  v24[2] = v19[2] - 1;
  CoordDivBlock((const WCoord *)v23, v24);
  if ( (dword_516590 & 1) == 0 && _cxa_guard_acquire(&dword_516590) != 0 )
  {
    CollisionDetect::CollisionDetect((CollisionDetect *)&unk_516594);
    _cxa_guard_release(&dword_516590);
    sub_390BFC(&unk_516594, (void (*)(void *))CollisionDetect::~CollisionDetect);
  }
  CollisionDetect::reset((CollisionDetect *)&unk_516594, (const WCoord *)v18, (const WCoord *)v19);
  v14 = v22;
  v16 = 100 * v22;
  while ( v14 <= v23[2] )
  {
    v6 = v21;
    v15 = 100 * v21;
    while ( v6 <= v23[1] )
    {
      v7 = v20;
      v8 = 100;
      v13 = 100 * v20;
      while ( v7 <= v23[0] )
      {
        v24[2] = v14;
        v24[0] = v7;
        v24[1] = v6;
        Block = World::getBlock(this, (const WCoord *)v24, v14, v8);
        Material = (_DWORD *)BlockMaterialMgr::getMaterial(
                               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                               *Block & 0xFFF);
        if ( *(_DWORD *)(Material[9] + 12) == 1
          && v13 < dword_5165A4
          && v15 < dword_5165A8
          && v16 < dword_5165AC
          && v13 + 100 > dword_516598
          && v15 + 100 > dword_51659C
          && v16 + 100 > dword_5165A0 )
        {
          v12 = *(void (__fastcall **)(_DWORD *, void *, World *, int *))(*Material + 36);
          v24[2] = v14;
          v24[0] = v7;
          v24[1] = v6;
          v12(Material, &unk_516594, this, v24);
        }
        ++v7;
        v8 = v13 + 100;
        v13 += 100;
      }
      ++v6;
      v15 += 100;
    }
    ++v14;
    v16 += 100;
  }
  return CollisionDetect::intersectBox((CollisionDetect *)&unk_516594, a2);
}


//======================================================================
// World::getBlockLight(WCoord const&)
// address: 0x002C90B4   size: 0x9C (156 bytes)
//======================================================================
char *__fastcall World::getBlockLight(World *this, const WCoord *a2)
{
  int Chunk; // r0
  Chunk *v4; // r5
  int v5; // r3
  int v8[4]; // [sp+Ch] [bp-10h] BYREF

  if ( (dword_5165D8 & 1) == 0 && _cxa_guard_acquire(&dword_5165D8) != 0 )
  {
    byte_5165D4 = 15;
    _cxa_guard_release(&dword_5165D8);
  }
  if ( (dword_5165DC & 1) == 0 && _cxa_guard_acquire(&dword_5165DC) != 0 )
  {
    byte_5165D5 = 0;
    _cxa_guard_release(&dword_5165DC);
  }
  Chunk = World::getChunk(this, a2);
  v4 = (Chunk *)Chunk;
  if ( Chunk == 0 )
    return &byte_5165D4;
  v5 = *((_DWORD *)a2 + 1);
  if ( v5 > 255 )
    return &byte_5165D4;
  if ( v5 < 0 )
    return &byte_5165D5;
  operator-(v8, (int *)a2, (int *)(Chunk + 276));
  return (char *)Chunk::getBlockLight(v4, v8[0], v8[1], v8[2]);
}


//======================================================================
// World::getFullBlockLightValue(WCoord const&)
// address: 0x002C9164   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall World::getFullBlockLightValue(World *this, const WCoord *a2)
{
  unsigned int v2; // r0
  unsigned int v3; // r3
  unsigned int result; // r0

  v2 = (unsigned __int8)*World::getBlockLight(this, a2);
  v3 = v2 & 0xF;
  result = v2 >> 4;
  if ( result < v3 )
    return v3;
  return result;
}


//======================================================================
// World::getBlockSunIllum(WCoord const&)
// address: 0x002C917A   size: 0xE (14 bytes)
//======================================================================
int __fastcall World::getBlockSunIllum(World *this, const WCoord *a2)
{
  return *World::getBlockLight(this, a2) & 0xF;
}


//======================================================================
// World::getBlockLightByType(int,WCoord const&)
// address: 0x002C9188   size: 0x16 (22 bytes)
//======================================================================
int __fastcall World::getBlockLightByType(World *this, char a2, const WCoord *a3)
{
  return ((int)(unsigned __int8)*World::getBlockLight(this, a3) >> (4 * a2)) & 0xF;
}


//======================================================================
// World::getBlockSunIllum(int,int,int)
// address: 0x002C919E   size: 0x18 (24 bytes)
//======================================================================
int __fastcall World::getBlockSunIllum(World *this, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[2] = a4;
  v5[1] = a3;
  return *World::getBlockLight(this, (const WCoord *)v5) & 0xF;
}


//======================================================================
// World::getBlockTorchIllum(int,int,int)
// address: 0x002C91B6   size: 0x16 (22 bytes)
//======================================================================
int __fastcall World::getBlockTorchIllum(World *this, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  return (int)(unsigned __int8)*World::getBlockLight(this, (const WCoord *)v5) >> 4;
}


//======================================================================
// World::getBlockLightValue(WCoord const&,bool)
// address: 0x002C91CC   size: 0x94 (148 bytes)
//======================================================================
int __fastcall World::getBlockLightValue(World *this, const WCoord *a2, int a3, int a4)
{
  int BlockID; // r0
  int *v7; // r5
  int BlockLightValue; // r7
  int v9; // r0
  int result; // r0
  int v11; // r3
  int v12; // r0
  int v13; // r3
  _DWORD v14[4]; // [sp+Ch] [bp-10h] BYREF

  if ( a3 != 0
    && (BlockID = World::getBlockID(this, a2, a3, a4),
        *(_DWORD *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID) + 72) != 0) )
  {
    v7 = g_DirectionCoord;
    operator+(v14, (int *)a2, &dword_516664);
    BlockLightValue = World::getBlockLightValue(this, (const WCoord *)v14, false);
    do
    {
      operator+(v14, (int *)a2, v7);
      v9 = World::getBlockLightValue(this, (const WCoord *)v14, false);
      if ( BlockLightValue < v9 )
        BlockLightValue = v9;
      v7 += 3;
    }
    while ( v7 != &dword_516658 );
    return BlockLightValue;
  }
  else
  {
    v11 = (unsigned __int8)*World::getBlockLight(this, a2);
    v12 = v11 & 0xF;
    v13 = v11 >> 4;
    result = v12 - *(_DWORD *)(*((_DWORD *)this + 7) + 72);
    if ( result < v13 )
      return v13;
  }
  return result;
}


//======================================================================
// World::getLightBrightness(WCoord const&)
// address: 0x002C9268   size: 0x14 (20 bytes)
//======================================================================
int __fastcall World::getLightBrightness(World *this, const WCoord *a2, int a3, int a4)
{
  return *(_DWORD *)(4 * (World::getBlockLightValue(this, a2, 1, a4) + 2) + *((_DWORD *)this + 7));
}


//======================================================================
// World::getBlockLightValue2(WCoord const&,bool)
// address: 0x002C927C   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall World::getBlockLightValue2(World *this, const WCoord *a2, int a3, int a4)
{
  int BlockID; // r0
  int *v7; // r4
  char *BlockLight; // r0
  int v9; // r7
  int v10; // r3
  int v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r0
  int v15; // r3
  int v17; // [sp+4h] [bp-20h]
  _DWORD v18[4]; // [sp+14h] [bp-10h] BYREF

  if ( a3 != 0
    && (BlockID = World::getBlockID(this, a2, a3, a4),
        *(_DWORD *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID) + 72) != 0) )
  {
    v7 = g_DirectionCoord;
    operator+(v18, (int *)a2, &dword_516664);
    BlockLight = World::getBlockLight(this, (const WCoord *)v18);
    v9 = *BlockLight & 0xF;
    v17 = (int)(unsigned __int8)*BlockLight >> 4;
    do
    {
      operator+(v18, (int *)a2, v7);
      v10 = (unsigned __int8)*World::getBlockLight(this, (const WCoord *)v18);
      v11 = v10 & 0xF;
      v12 = v10 >> 4;
      if ( v9 < v11 )
        v9 = v11;
      if ( v17 < v12 )
        v17 = v12;
      v7 += 3;
    }
    while ( v7 != &dword_516658 );
    v13 = 16 * v9;
    v14 = v17 << 20;
  }
  else
  {
    v15 = (unsigned __int8)*World::getBlockLight(this, a2);
    v14 = v15 >> 4 << 20;
    v13 = 16 * (v15 & 0xF);
  }
  return v14 | v13;
}


//======================================================================
// World::getBlockLightValue2(float &,float &,WCoord const&,bool)
// address: 0x002C932C   size: 0x36 (54 bytes)
//======================================================================
float __fastcall World::getBlockLightValue2(World *this, float *a2, float *a3, const WCoord *a4, bool a5)
{
  int BlockLightValue2; // r0
  float result; // r0

  BlockLightValue2 = World::getBlockLightValue2(this, a4, a5, (int)a4);
  *a2 = (float)((BlockLightValue2 >> 4) & 0xF) / 15.0;
  result = (float)((BlockLightValue2 >> 20) & 0xF) / 15.0;
  *a3 = result;
  return result;
}


//======================================================================
// World::getSection(WCoord const&)
// address: 0x002C9368   size: 0x26 (38 bytes)
//======================================================================
int __fastcall World::getSection(World *this, const WCoord *a2)
{
  int result; // r0
  int v4; // r4
  unsigned int v5; // r0

  result = World::getChunk(this, a2);
  v4 = result;
  if ( result != 0 )
  {
    v5 = BlockDivSection(*((_DWORD *)a2 + 1));
    if ( v5 > 0xF )
      return 0;
    else
      return *(_DWORD *)(4 * (v5 + 342) + v4);
  }
  return result;
}


//======================================================================
// World::placeTree(int,int,int,int)
// address: 0x002C938E   size: 0x34 (52 bytes)
//======================================================================
int __fastcall World::placeTree(World *this, int a2, int a3, int a4, int a5)
{
  int result; // r0
  Chunk *v6; // r5
  int v7[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v8[3]; // [sp+Ch] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  result = World::getChunk(this, (const WCoord *)v7);
  v6 = (Chunk *)result;
  if ( result != 0 )
  {
    operator-(v8, v7, (int *)(result + 276));
    return Chunk::placeOneTree(v6, (const WCoord *)v8, a5, false);
  }
  return result;
}


//======================================================================
// World::moveBox(CollideAABB const&,WCoord const&,Ogre::Vector3 &)
// address: 0x002C93C4   size: 0x18C (396 bytes)
//======================================================================
int __fastcall World::moveBox(World *this, const CollideAABB *a2, const WCoord *a3, Ogre::Vector3 *a4)
{
  int v5; // r2
  int v6; // r1
  int v7; // r7
  int v8; // r6
  int v9; // r3
  int v10; // r5
  int v11; // r3
  int v12; // r3
  int i; // r1
  int j; // r5
  int k; // r7
  int v16; // r2
  int v17; // r3
  int BlockID; // r1
  _DWORD *Material; // r0
  void (__fastcall *v20)(_DWORD *, void *, World *); // r6
  int v22; // [sp+4h] [bp-70h]
  int v25; // [sp+10h] [bp-64h]
  int v27; // [sp+1Ch] [bp-58h] BYREF
  int v28; // [sp+20h] [bp-54h]
  int v29; // [sp+24h] [bp-50h]
  int v30; // [sp+28h] [bp-4Ch] BYREF
  int v31; // [sp+2Ch] [bp-48h]
  int v32; // [sp+30h] [bp-44h]
  _DWORD v33[3]; // [sp+34h] [bp-40h] BYREF
  _DWORD v34[3]; // [sp+40h] [bp-34h] BYREF
  int v35; // [sp+4Ch] [bp-28h] BYREF
  int v36; // [sp+50h] [bp-24h]
  int v37; // [sp+54h] [bp-20h]
  _DWORD v38[3]; // [sp+58h] [bp-1Ch] BYREF
  int v39[4]; // [sp+64h] [bp-10h] BYREF

  v5 = *((_DWORD *)a2 + 1);
  v27 = *(_DWORD *)a2;
  v6 = *((_DWORD *)a2 + 2);
  v28 = v5;
  v29 = v6;
  operator+(&v30, (int *)a2, (int *)a2 + 3);
  v7 = v30;
  v8 = v31;
  v9 = *(_DWORD *)a3;
  v10 = v32;
  if ( *(int *)a3 <= 0 )
    v27 += v9;
  else
    v7 = v30 + v9;
  v11 = *((_DWORD *)a3 + 1);
  if ( v11 <= 0 )
    v28 += v11;
  else
    v8 = v31 + v11;
  v12 = *((_DWORD *)a3 + 2);
  if ( v12 <= 0 )
    v29 += v12;
  else
    v10 = v32 + v12;
  CoordDivBlock((const WCoord *)v33, &v27);
  v39[2] = v10;
  v25 = v33[1] - 1;
  v39[0] = v7;
  v39[1] = v8;
  CoordDivBlock((const WCoord *)v34, v39);
  if ( (dword_5165E0 & 1) == 0 && _cxa_guard_acquire(&dword_5165E0) != 0 )
  {
    CollisionDetect::CollisionDetect((CollisionDetect *)&unk_5165E4);
    _cxa_guard_release(&dword_5165E0);
    sub_390BFC(&unk_5165E4, (void (*)(void *))CollisionDetect::~CollisionDetect);
  }
  CollisionDetect::reset((CollisionDetect *)&unk_5165E4);
  for ( i = v33[2]; ; i = v22 + 1 )
  {
    v22 = i;
    if ( i > v34[2] )
      break;
    for ( j = v25; j <= v34[1]; ++j )
    {
      for ( k = v33[0]; k <= v34[0]; ++k )
      {
        v35 = k;
        v36 = j;
        v37 = v22;
        if ( World::getChunk(this, (const WCoord *)&v35) != 0 )
        {
          if ( (unsigned int)j <= 0xFF )
          {
            BlockID = World::getBlockID(this, (const WCoord *)&v35, v16, v17);
            if ( BlockID > 0 )
            {
              Material = (_DWORD *)BlockMaterialMgr::getMaterial(
                                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                     BlockID);
              if ( *(_DWORD *)(Material[9] + 12) == 1 )
              {
                v20 = *(void (__fastcall **)(_DWORD *, void *, World *))(*Material + 36);
                v39[0] = k;
                v39[2] = v22;
                v39[1] = j;
                v20(Material, &unk_5165E4, this);
              }
            }
          }
        }
        else
        {
          v38[0] = 100 * v35;
          v38[1] = 100 * v36;
          v39[1] = 100 * v36 + 100;
          v38[2] = 100 * v37;
          v39[0] = 100 * v35 + 100;
          v39[2] = 100 * v37 + 100;
          CollisionDetect::addObstacle((CollisionDetect *)&unk_5165E4, (const WCoord *)v38, (const WCoord *)v39);
        }
      }
    }
  }
  return CollisionDetect::moveBox((CollisionDetect *)&unk_5165E4, a2, a3, a4);
}


//======================================================================
// World::moveBoxWalk(CollideAABB const&,WCoord const&)
// address: 0x002C9588   size: 0xF2 (242 bytes)
//======================================================================
World *__fastcall World::moveBoxWalk(World *this, const CollideAABB *a2, const WCoord *a3, const WCoord *a4)
{
  int v5; // r0
  int *v6; // r2
  int v7; // r5
  int v8; // r6
  int v9; // r1
  int v10; // r5
  float v11; // r5
  int i; // r6
  int v13; // r0
  float v15; // [sp+4h] [bp-30h]
  int v16; // [sp+8h] [bp-2Ch]
  float v20[3]; // [sp+1Ch] [bp-18h] BYREF
  int v21[3]; // [sp+28h] [bp-Ch] BYREF
  _DWORD v22[3]; // [sp+34h] [bp+0h] BYREF
  int v23[7]; // [sp+40h] [bp+Ch] BYREF

  v5 = *(_DWORD *)a3;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *((_DWORD *)a3 + 2);
  v6 = (int *)((char *)a3 + 12);
  v23[0] = v5;
  v23[1] = v7;
  v23[2] = v8;
  v9 = v6[1];
  v10 = v6[2];
  v23[3] = *v6;
  v23[4] = v9;
  v23[5] = v10;
  v11 = -1.0;
  for ( i = 0; i != 5; ++i )
  {
    v23[1] = *((_DWORD *)a3 + 1) + ((100 * i) >> 3);
    v15 = COERCE_FLOAT(World::moveBox(a2, (const CollideAABB *)v23, a4, (Ogre::Vector3 *)v22));
    if ( v15 > v11 )
    {
      v20[0] = *(float *)v22;
      v20[1] = *(float *)&v22[1];
      v20[2] = *(float *)&v22[2];
      v16 = i;
      v11 = v15;
      if ( v15 == 1.0 )
        break;
    }
  }
  v23[1] = *((_DWORD *)a3 + 1) + ((100 * v16) >> 3);
  operator*(v22, (int *)a4, v11);
  WCoord::operator+=(v23, v22);
  if ( v11 < 1.0 )
  {
    operator*(v21, (int *)a4, 1.0 - v11);
    if ( v20[0] == 0.0 )
      v21[2] = 0;
    else
      v21[0] = 0;
    v13 = World::moveBox(a2, (const CollideAABB *)v23, (const WCoord *)v21, (Ogre::Vector3 *)v20);
    operator*(v22, v21, *(float *)&v13);
    WCoord::operator+=(v23, v22);
  }
  operator-(this, v23, (int *)a3);
  return this;
}


//======================================================================
// World::moveBox(CollideAABB const&,WCoord const&)
// address: 0x002C9680   size: 0xD8 (216 bytes)
//======================================================================
World *__fastcall World::moveBox(World *this, const CollideAABB *a2, const WCoord *a3, int *a4)
{
  int v4; // r1
  int v5; // r0
  int v6; // r3
  int v7; // r0
  int *v8; // r2
  int v9; // r4
  int v10; // r5
  int v11; // r4
  int v12; // r5
  int v13; // r7
  float v14; // r6
  _DWORD v19[5]; // [sp+18h] [bp-54h] BYREF
  float v20[3]; // [sp+2Ch] [bp-40h] BYREF
  int v21; // [sp+38h] [bp-34h] BYREF
  int v22; // [sp+3Ch] [bp-30h]
  int v23; // [sp+40h] [bp-2Ch]
  _DWORD v24[3]; // [sp+44h] [bp-28h] BYREF
  int v25[7]; // [sp+50h] [bp-1Ch] BYREF

  v4 = a4[1];
  v5 = *a4;
  v6 = a4[2];
  v22 = v4;
  v23 = v6;
  v21 = v5;
  v7 = *(_DWORD *)a3;
  v9 = *((_DWORD *)a3 + 1);
  v10 = *((_DWORD *)a3 + 2);
  v8 = (int *)((char *)a3 + 12);
  v25[0] = v7;
  v25[1] = v9;
  v25[2] = v10;
  v11 = v8[1];
  v12 = v8[2];
  v25[3] = *v8;
  v25[4] = v11;
  v25[5] = v12;
  v13 = 3;
  while ( 1 )
  {
    v14 = COERCE_FLOAT(World::moveBox(a2, (const CollideAABB *)v25, (const WCoord *)&v21, (Ogre::Vector3 *)v20));
    if ( v14 >= 1.0 )
      break;
    operator*(v24, &v21, v14);
    WCoord::operator+=(v25, v24);
    operator*(v19, &v21, 1.0 - v14);
    v21 = v19[0];
    v22 = v19[1];
    v23 = v19[2];
    if ( v20[0] == 0.0 )
    {
      if ( v20[1] == 0.0 )
        v23 = 0;
      else
        v22 = 0;
    }
    else
    {
      v21 = 0;
    }
    if ( (v21 != 0 || v22 != 0 || v23 != 0) && --v13 != 0 )
      continue;
    goto LABEL_14;
  }
  WCoord::operator+=(v25, &v21);
LABEL_14:
  operator-(this, v25, (int *)a3);
  return this;
}


//======================================================================
// World::chunkExist(int,int)
// address: 0x002C9758   size: 0xC (12 bytes)
//======================================================================
bool __fastcall World::chunkExist(World *this, int a2, int a3)
{
  return World::getChunkBySCoord(this, a2, a3) != nullptr;
}


//======================================================================
// World::blockExists(WCoord const&)
// address: 0x002C9764   size: 0x28 (40 bytes)
//======================================================================
bool __fastcall World::blockExists(World *this, const WCoord *a2)
{
  _BOOL4 result; // r0
  unsigned int v5; // r5
  unsigned int v6; // r0

  result = false;
  if ( *((_DWORD *)a2 + 1) <= 0xFFu )
  {
    v5 = BlockDivSection(*(_DWORD *)a2);
    v6 = BlockDivSection(*((_DWORD *)a2 + 2));
    return World::chunkExist(this, v5, v6);
  }
  return result;
}


//======================================================================
// World::checkChunksExist(WCoord const&,WCoord const&)
// address: 0x002C978C   size: 0x5C (92 bytes)
//======================================================================
bool __fastcall World::checkChunksExist(World *this, const WCoord *a2, const WCoord *a3)
{
  _BOOL4 result; // r0
  signed int v7; // r5
  signed int v8; // r6
  int i; // r4
  unsigned int v10; // [sp+0h] [bp-Ch]
  signed int v11; // [sp+4h] [bp-8h]

  result = false;
  if ( *((int *)a2 + 1) <= 255 && *((int *)a3 + 1) >= 0 )
  {
    v10 = BlockDivSection(*(_DWORD *)a2);
    v7 = BlockDivSection(*((_DWORD *)a2 + 2));
    v11 = BlockDivSection(*(_DWORD *)a3);
    v8 = BlockDivSection(*((_DWORD *)a3 + 2));
    while ( v7 <= v8 )
    {
      for ( i = v10; i <= v11; ++i )
      {
        result = World::chunkExist(this, i, v7);
        if ( !result )
          return result;
      }
      ++v7;
    }
    return true;
  }
  return result;
}


//======================================================================
// World::getFluidFlowMotion(WCoord const&,WCoord const&,Ogre::Vector3 &)
// address: 0x002C97E8   size: 0x160 (352 bytes)
//======================================================================
bool __fastcall World::getFluidFlowMotion(World *this, const WCoord *a2, const WCoord *a3, Ogre::Vector3 *a4)
{
  signed int v7; // r7
  unsigned int v8; // r0
  _BOOL4 result; // r0
  unsigned int i; // r2
  signed int v11; // r3
  int v12; // r2
  signed int j; // r5
  int BlockID; // r1
  int v15; // r3
  int BlockData; // r0
  float v17; // r1
  float v18; // r5
  float v19; // r6
  float v20; // r0
  int v21; // [sp+0h] [bp-44h]
  int v22; // [sp+4h] [bp-40h]
  signed int v24; // [sp+Ch] [bp-38h]
  unsigned int v25; // [sp+10h] [bp-34h]
  unsigned int v26; // [sp+14h] [bp-30h]
  signed int v27; // [sp+18h] [bp-2Ch]
  signed int v28; // [sp+1Ch] [bp-28h]
  FluidBlockMaterial *Material; // [sp+20h] [bp-24h]
  _DWORD v30[3]; // [sp+28h] [bp-1Ch] BYREF
  signed int v31; // [sp+34h] [bp-10h] BYREF
  signed int v32; // [sp+38h] [bp-Ch]
  unsigned int v33; // [sp+3Ch] [bp-8h]

  v25 = CoordDivBlock(*(_DWORD *)a2);
  v26 = CoordDivBlock(*((_DWORD *)a2 + 1));
  v7 = CoordDivBlock(*((_DWORD *)a2 + 2));
  v27 = CoordDivBlock(*(_DWORD *)a3 + 100);
  v24 = CoordDivBlock(*((_DWORD *)a3 + 1) + 100);
  v8 = CoordDivBlock(*((_DWORD *)a3 + 2) + 100);
  v30[0] = v25;
  v30[1] = v26;
  v31 = v27;
  v28 = v8;
  v33 = v8;
  v30[2] = v7;
  v32 = v24;
  result = World::checkChunksExist(this, (const WCoord *)v30, (const WCoord *)&v31);
  if ( result )
  {
    *((_DWORD *)a4 + 2) = 0;
    *((_DWORD *)a4 + 1) = 0;
    *(_DWORD *)a4 = 0;
    v22 = 0;
    while ( v7 < v28 )
    {
      for ( i = v25; ; i = v21 + 1 )
      {
        v21 = i;
        v11 = i;
        v12 = v27;
        if ( v11 >= v27 )
          break;
        for ( j = v26; j < v24; ++j )
        {
          v31 = v21;
          v32 = j;
          v33 = v7;
          BlockID = World::getBlockID(this, (const WCoord *)&v31, v12, v21);
          if ( (unsigned int)(BlockID - 3) <= 1 )
          {
            Material = (FluidBlockMaterial *)BlockMaterialMgr::getMaterial(
                                               (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                               BlockID);
            v31 = v21;
            v32 = j;
            v33 = v7;
            BlockData = World::getBlockData(this, (const WCoord *)&v31, v21, v15);
            v17 = 0.0;
            if ( BlockData <= 7 )
              v17 = (float)(BlockData + 1) / 9.0;
            if ( (float)((float)(j + 1) - v17) <= (float)v24 )
            {
              v31 = v21;
              v32 = j;
              v33 = v7;
              FluidBlockMaterial::velocityToAddToEntity(Material, this, (const WCoord *)&v31, a4);
              v12 = 1;
              v22 = 1;
            }
          }
        }
      }
      ++v7;
    }
    v18 = Ogre::Vector3::length(a4);
    if ( v18 > 0.0 )
    {
      v19 = (float)(1.4 / v18) * *((float *)a4 + 2);
      v20 = *(float *)a4 * (float)(1.4 / v18);
      *((float *)a4 + 1) = (float)(1.4 / v18) * *((float *)a4 + 1);
      *(float *)a4 = v20;
      *((float *)a4 + 2) = v19;
    }
    return v22;
  }
  return result;
}


//======================================================================
// World::getSectionBySCoord(int,int,int)
// address: 0x002C9954   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall World::getSectionBySCoord(World *this, int a2, unsigned int a3, int a4)
{
  _DWORD *result; // r0

  result = World::getChunkBySCoord(this, a2, a4);
  if ( result != nullptr )
  {
    if ( a3 > 0xF )
      return nullptr;
    else
      return (_DWORD *)result[a3 + 342];
  }
  return result;
}


//======================================================================
// World::doOWMsgBlockCtrl(tagOWMsgBlockCtrl *)
// address: 0x002C9974   size: 0x30 (48 bytes)
//======================================================================
World *__fastcall World::doOWMsgBlockCtrl(World *this, int a2)
{
  World *v2; // r7
  int *v4; // r5
  int i; // r6

  v2 = this;
  if ( *(unsigned __int16 *)(a2 + 2) == *((unsigned __int16 *)this + 30) && *(_BYTE *)a2 == 1 )
  {
    v4 = (int *)a2;
    for ( i = 0; ; ++i )
    {
      v4 += 2;
      if ( i >= *(unsigned __int16 *)(a2 + 4) )
        break;
      this = (World *)World::getChunkBySCoord(v2, *v4, v4[1]);
    }
  }
  return this;
}


//======================================================================
// World::doOWMsgBlockCtrSvr(tagOWMsgBlockCtrlRes *)
// address: 0x002C99A4   size: 0x30 (48 bytes)
//======================================================================
World *__fastcall World::doOWMsgBlockCtrSvr(World *this, unsigned __int16 *a2)
{
  World *v2; // r7
  unsigned __int16 *v4; // r4
  int i; // r5

  v2 = this;
  if ( *a2 == *((unsigned __int16 *)this + 30) )
  {
    v4 = a2;
    for ( i = 0; ; ++i )
    {
      v4 += 8;
      if ( i >= a2[1] )
        break;
      this = (World *)World::getChunkBySCoord(v2, *((_DWORD *)v4 - 2), *((_DWORD *)v4 - 1));
    }
  }
  return this;
}


//======================================================================
// World::markBlockForUpdate(WCoord const&,WCoord const&)
// address: 0x002C99D4   size: 0x76 (118 bytes)
//======================================================================
unsigned int *__fastcall World::markBlockForUpdate(World *this, const WCoord *a2, const WCoord *a3)
{
  int v5; // r4
  unsigned int *result; // r0
  int v7; // r6
  int i; // r4
  int j; // r5
  int k; // r3
  unsigned int v11; // r1
  int v12; // [sp+4h] [bp-20h]
  int v13[3]; // [sp+8h] [bp-1Ch] BYREF
  signed int v14; // [sp+14h] [bp-10h] BYREF
  int v15; // [sp+18h] [bp-Ch]
  int v16; // [sp+1Ch] [bp-8h]

  BlockDivSection((unsigned int *)v13, (int *)a2);
  v5 = v13[1];
  result = BlockDivSection((unsigned int *)&v14, (int *)a3);
  v7 = v15;
  v12 = v5 & (~v5 >> 31);
  if ( v15 > 15 )
    v7 = 15;
  for ( i = v13[0]; i <= v14; ++i )
  {
    for ( j = v13[2]; j <= v16; ++j )
    {
      result = World::getChunkBySCoord(this, i, j);
      if ( result != nullptr )
      {
        for ( k = v12; k <= v7; ++k )
        {
          v11 = result[k + 342];
          *(_BYTE *)(v11 + 40) = 1;
          *(_BYTE *)(v11 + 41) = 1;
        }
      }
    }
  }
  return result;
}


//======================================================================
// World::markBlockForUpdate(WCoord const&)
// address: 0x002C9A4A   size: 0x2E (46 bytes)
//======================================================================
unsigned int *__fastcall World::markBlockForUpdate(World *this, const WCoord *a2)
{
  int v2; // r5
  int v3; // r4
  int v4; // r3
  _DWORD v6[3]; // [sp+0h] [bp-1Ch] BYREF
  _DWORD v7[4]; // [sp+Ch] [bp-10h] BYREF

  v2 = *(_DWORD *)a2;
  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v6[0] = *(_DWORD *)a2 - 1;
  v6[1] = v3 - 1;
  v6[2] = v4 - 1;
  v7[0] = v2 + 1;
  v7[1] = v3 + 1;
  v7[2] = v4 + 1;
  return World::markBlockForUpdate(this, (const WCoord *)v6, (const WCoord *)v7);
}


//======================================================================
// World::setBlockData(WCoord const&,int,int)
// address: 0x002C9A78   size: 0x92 (146 bytes)
//======================================================================
unsigned int *__fastcall World::setBlockData(World *this, const WCoord *a2, int a3, char a4)
{
  unsigned int *result; // r0
  Chunk *v7; // r7
  __int16 v8; // r6
  int v9; // r6
  int Material; // r0
  int v13[4]; // [sp+14h] [bp-10h] BYREF

  result = (unsigned int *)World::getChunk(this, a2);
  v7 = (Chunk *)result;
  if ( result != nullptr && *((_DWORD *)a2 + 1) <= 0xFFu )
  {
    operator-(v13, (int *)a2, (int *)result + 69);
    result = (unsigned int *)Chunk::setBlockData(v7, v13[0], v13[1], v13[2], a3);
    if ( result != nullptr )
    {
      result = (unsigned int *)Chunk::getBlock(v7, (const WCoord *)v13);
      v8 = *(_WORD *)result;
      if ( (a4 & 2) != 0 )
        result = World::markBlockForUpdate(this, a2);
      if ( (a4 & 1) != 0 )
      {
        v9 = v8 & 0xFFF;
        World::notifyBlocksOfNeighborChange(this, a2, v9);
        Material = BlockMaterialMgr::getMaterial(
                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                     v9);
        result = (unsigned int *)(*(int (__fastcall **)(int))(*(_DWORD *)Material + 172))(Material);
        if ( result != nullptr )
          return (unsigned int *)World::comparatorInputChange(this, a2, v9);
      }
    }
  }
  return result;
}


//======================================================================
// World::getChunk(int,int)
// address: 0x002C9B10   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall World::getChunk(World *this, int a2, int a3)
{
  unsigned int v5; // r4
  unsigned int v6; // r0

  v5 = BlockDivSection(a2);
  v6 = BlockDivSection(a3);
  return World::getChunkBySCoord(this, v5, v6);
}


//======================================================================
// World::getBiomeGen(int,int)
// address: 0x002C9B30   size: 0x34 (52 bytes)
//======================================================================
int __fastcall World::getBiomeGen(World *this, int a2, int a3)
{
  _DWORD *Chunk; // r0

  Chunk = World::getChunk(this, a2, a3);
  return (*(int (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 31) + 24) + 16))(
           *(_DWORD *)(*((_DWORD *)this + 31) + 24),
           *((unsigned __int8 *)Chunk + ((a2 - Chunk[69]) | (16 * (a3 - Chunk[71]))) + 1060));
}


//======================================================================
// World::getHumidity(int,int)
// address: 0x002C9B64   size: 0x16 (22 bytes)
//======================================================================
int __fastcall World::getHumidity(World *this, int a2, int a3)
{
  return (int)(float)(*(float *)(*(_DWORD *)(World::getBiomeGen(this, a2, a3) + 4) + 48) * 100.0);
}


//======================================================================
// World::getHeat(int,int)
// address: 0x002C9B80   size: 0x16 (22 bytes)
//======================================================================
int __fastcall World::getHeat(World *this, int a2, int a3)
{
  return (int)(float)(*(float *)(*(_DWORD *)(World::getBiomeGen(this, a2, a3) + 4) + 44) * 100.0);
}


//======================================================================
// World::canBlockFreeze(WCoord const&,bool)
// address: 0x002C9B9C   size: 0x84 (132 bytes)
//======================================================================
int __fastcall World::canBlockFreeze(World *this, const WCoord *a2, int a3)
{
  int v6; // r2
  int v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r7
  int v11; // r2
  int v12; // r3
  _DWORD v14[4]; // [sp+Ch] [bp-10h] BYREF

  if ( *(float *)(*(_DWORD *)(World::getBiomeGen(this, *(_DWORD *)a2, *((_DWORD *)a2 + 2)) + 4) + 44) > 0.15
    || *((_DWORD *)a2 + 1) > 0xFFu
    || World::getBlockSunIllum(this, a2) > 9
    || (unsigned int)(World::getBlockID(this, a2, v6, v7) - 3) > 1
    || World::getBlockData(this, a2, v8, v9) != 0 )
  {
    return 0;
  }
  if ( a3 != 0 )
  {
    v10 = 0;
    while ( 1 )
    {
      operator+(v14, (int *)a2, &g_DirectionCoord[v10]);
      if ( (unsigned int)(World::getBlockID(this, (const WCoord *)v14, v11, v12) - 3) > 1 )
        break;
      v10 += 3;
      if ( v10 == 12 )
        return 0;
    }
  }
  return 1;
}


//======================================================================
// World::canSnowAt(WCoord const&)
// address: 0x002C9C28   size: 0x72 (114 bytes)
//======================================================================
int __fastcall World::canSnowAt(World *this, const WCoord *a2, int a3, int a4)
{
  int v7; // r2
  int v8; // r3
  int BlockID; // r6
  int v10; // r2
  int v11; // r3
  int Material; // r0
  const WCoord *v14; // [sp+4h] [bp-Ch] BYREF
  int v15; // [sp+8h] [bp-8h]
  int v16; // [sp+Ch] [bp-4h]

  v14 = a2;
  v15 = a3;
  v16 = a4;
  if ( *(float *)(*(_DWORD *)(World::getBiomeGen(this, *(_DWORD *)a2, *((_DWORD *)a2 + 2)) + 4) + 44) > 0.15 )
    return 0;
  if ( (unsigned int)(*((_DWORD *)a2 + 1) - 1) > 0xFE )
    return 0;
  operator+(&v14, (int *)a2, &dword_516658);
  BlockID = World::getBlockID(this, (const WCoord *)&v14, v7, v8);
  if ( World::getBlockID(this, a2, v10, v11) != 0 || BlockID == 0 )
    return 0;
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, 115);
  return (*(int (__fastcall **)(int, World *, const WCoord *, _DWORD, World *, const WCoord *, int, int))(*(_DWORD *)Material + 152))(
           Material,
           this,
           a2,
           *(_DWORD *)(*(_DWORD *)Material + 152),
           this,
           v14,
           v15,
           v16);
}


//======================================================================
// World::getTopSolidOrLiquidBlock(int,int)
// address: 0x002C9CA8   size: 0x6E (110 bytes)
//======================================================================
int __fastcall World::getTopSolidOrLiquidBlock(World *this, int a2, int a3)
{
  Chunk *Chunk; // r5
  int v6; // r4
  int v7; // r7
  _WORD *Block; // r0
  int v9; // r6
  int v11; // [sp+4h] [bp-18h]
  _DWORD v12[4]; // [sp+Ch] [bp-10h] BYREF

  Chunk = (Chunk *)World::getChunk(this, a2, a3);
  v6 = Chunk::getTopFilledSegment(Chunk) + 15;
  v11 = a2 - *((_DWORD *)Chunk + 69);
  v7 = a3 - *((_DWORD *)Chunk + 71);
  while ( v6 > 0 )
  {
    v12[0] = v11;
    v12[1] = v6;
    v12[2] = v7;
    Block = (_WORD *)Chunk::getBlock(Chunk, (const WCoord *)v12);
    v9 = *Block & 0xFFF;
    if ( v9 != 0
      && *(_DWORD *)(*(_DWORD *)(BlockMaterialMgr::getMaterial(
                                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                   *Block & 0xFFF)
                               + 36)
                   + 12) == 1
      && (unsigned int)(v9 - 218) > 5 )
    {
      return v6 + 1;
    }
    --v6;
  }
  return -1;
}


//======================================================================
// World::getTopHeight(int,int)
// address: 0x002C9D1C   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall World::getTopHeight(World *this, int a2, int a3)
{
  unsigned int v6; // r6
  unsigned int v7; // r0
  _DWORD *result; // r0

  v6 = BlockDivSection(a2);
  v7 = BlockDivSection(a3);
  result = World::getChunkBySCoord(this, v6, v7);
  if ( result != nullptr )
    return (_DWORD *)*((unsigned __int8 *)result + ((a2 - result[69]) | (16 * (a3 - result[71]))) + 292);
  return result;
}


//======================================================================
// World::canLightningStrikeAt(WCoord const&)
// address: 0x002C9D5A   size: 0x28 (40 bytes)
//======================================================================
int __fastcall World::canLightningStrikeAt(Environment **this, const WCoord *a2)
{
  int result; // r0
  int v5; // r5
  _DWORD *TopHeight; // r0

  result = World::isRaining(this);
  if ( result != 0 )
  {
    v5 = *((_DWORD *)a2 + 1);
    TopHeight = World::getTopHeight((World *)this, *(_DWORD *)a2, *((_DWORD *)a2 + 2));
    return (unsigned __int8)((v5 >> 31) + (v5 >= (unsigned int)TopHeight) + ((int)TopHeight < 0));
  }
  return result;
}


//======================================================================
// World::calBlockLightValue(int,WCoord const&)
// address: 0x002C9D84   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall World::calBlockLightValue(World *this, int a2, const WCoord *a3, int a4)
{
  int v6; // r5
  _DWORD *TopHeight; // r0
  int BlockID; // r0
  int v9; // r5
  int BlockDef; // r0
  int v11; // r7
  int *v12; // r4
  char *BlockLight; // r0
  char v16; // [sp+8h] [bp-1Ch]
  _DWORD v17[4]; // [sp+14h] [bp-10h] BYREF

  if ( a2 != 0
    || (v6 = *((_DWORD *)a3 + 1),
        TopHeight = World::getTopHeight(this, *(_DWORD *)a3, *((_DWORD *)a3 + 2)),
        a4 = 15,
        v6 < (int)TopHeight) )
  {
    BlockID = World::getBlockID(this, a3, (int)a3, a4);
    v9 = a2;
    BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID);
    if ( a2 != 0 )
      v9 = *(_DWORD *)(BlockDef + 68);
    v11 = *(_DWORD *)(BlockDef + 64);
    if ( v11 <= 14 )
    {
      if ( v11 <= 0 )
        v11 = 1;
    }
    else
    {
      v11 = 1;
      if ( *(int *)(BlockDef + 68) <= 0 )
        return 0;
    }
    a4 = v9;
    if ( v9 <= 13 )
    {
      v16 = 4 * a2;
      v12 = g_DirectionCoord;
      do
      {
        operator+(v17, (int *)a3, v12);
        BlockLight = World::getBlockLight(this, (const WCoord *)v17);
        if ( v9 < (((int)(unsigned __int8)*BlockLight >> v16) & 0xF) - v11 )
          v9 = (((int)(unsigned __int8)*BlockLight >> v16) & 0xF) - v11;
        if ( v9 == 14 )
          break;
        v12 += 3;
      }
      while ( v12 != (int *)&slotelements );
      return v9;
    }
  }
  return a4;
}


//======================================================================
// World::blockLightingChange(int,WCoord const&)
// address: 0x002CA120   size: 0x4A (74 bytes)
//======================================================================
int __fastcall World::blockLightingChange(World *this, int a2, const WCoord *a3)
{
  int v3; // r7
  int v5; // r0
  int v6; // r3
  int result; // r0
  _DWORD v10[3]; // [sp+0h] [bp-1Ch] BYREF
  _DWORD v11[4]; // [sp+Ch] [bp-10h] BYREF

  v3 = *(_DWORD *)a3;
  v5 = *((_DWORD *)a3 + 1);
  v6 = *((_DWORD *)a3 + 2);
  v10[0] = *(_DWORD *)a3 - 16;
  v10[1] = v5 - 16;
  v10[2] = v6 - 16;
  v11[1] = v5 + 16;
  v11[0] = v3 + 16;
  v11[2] = v6 + 16;
  result = World::checkChunksExist(this, (const WCoord *)v10, (const WCoord *)v11);
  if ( result != 0 )
    return sub_2C9E34(this, a2, a3);
  return result;
}


//======================================================================
// World::markBlocksDirtyVertical(int,int,int,int)
// address: 0x002CA16A   size: 0x60 (96 bytes)
//======================================================================
unsigned int *__fastcall World::markBlocksDirtyVertical(World *this, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v8; // r5
  _DWORD v11[3]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v12[4]; // [sp+14h] [bp-10h] BYREF

  v5 = a4;
  if ( a4 > a5 )
  {
    v5 = a5;
    a5 = a4;
  }
  v8 = v5;
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 31) + 20))(*((_DWORD *)this + 31)) != 0 )
  {
    while ( v8 <= a5 )
    {
      v12[1] = v8;
      v12[0] = a2;
      v12[2] = a3;
      ++v8;
      World::blockLightingChange(this, 0, (const WCoord *)v12);
    }
  }
  v11[0] = a2;
  v12[0] = a2;
  v11[1] = v5;
  v11[2] = a3;
  v12[1] = a5;
  v12[2] = a3;
  return World::markBlockForUpdate(this, (const WCoord *)v11, (const WCoord *)v12);
}


//======================================================================
// World::blockLightingChange(WCoord const&)
// address: 0x002CA1CA   size: 0x28 (40 bytes)
//======================================================================
int __fastcall World::blockLightingChange(World *this, const WCoord *a2)
{
  if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 31) + 20))(*((_DWORD *)this + 31)) != 0 )
    World::blockLightingChange(this, 0, a2);
  return World::blockLightingChange(this, 1, a2);
}


//======================================================================
// World::getPrecipitationHeight(int,int)
// address: 0x002CA1F2   size: 0x36 (54 bytes)
//======================================================================
Chunk *__fastcall World::getPrecipitationHeight(World *this, int a2, int a3)
{
  unsigned int v6; // r6
  unsigned int v7; // r0
  Chunk *result; // r0

  v6 = BlockDivSection(a2);
  v7 = BlockDivSection(a3);
  result = (Chunk *)World::getChunkBySCoord(this, v6, v7);
  if ( result != nullptr )
    return (Chunk *)Chunk::getPrecipitationHeight(result, a2 - *((_DWORD *)result + 69), a3 - *((_DWORD *)result + 71));
  return result;
}


//======================================================================
// World::getBiome(int,int)
// address: 0x002CA228   size: 0x50 (80 bytes)
//======================================================================
int __fastcall World::getBiome(World *this, int a2, int a3)
{
  unsigned int v6; // r6
  unsigned int v7; // r0
  _DWORD *ChunkBySCoord; // r0
  int v9; // r1

  v6 = BlockDivSection(a2);
  v7 = BlockDivSection(a3);
  ChunkBySCoord = World::getChunkBySCoord(this, v6, v7);
  if ( ChunkBySCoord != nullptr )
    v9 = *((unsigned __int8 *)ChunkBySCoord + ((a2 - ChunkBySCoord[69]) | (16 * (a3 - ChunkBySCoord[71]))) + 1060);
  else
    v9 = 0;
  return DefManager::getBiomeDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v9);
}


//======================================================================
// World::setBlockAll(WCoord const&,int,int,int)
// address: 0x002CA27C   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall World::setBlockAll(World *this, const WCoord *a2, int a3, int a4, char a5)
{
  int *ChunkBySCoord; // r0
  Chunk *v9; // r6
  int v10; // r6
  int v11; // r6
  int Material; // r0
  int v14; // [sp+Ch] [bp-30h]
  int v15; // [sp+10h] [bp-2Ch]
  int v16; // [sp+14h] [bp-28h]
  __int16 v17; // [sp+18h] [bp-24h]
  unsigned int v19[3]; // [sp+20h] [bp-1Ch] BYREF
  int v20; // [sp+2Ch] [bp-10h] BYREF
  int v21; // [sp+30h] [bp-Ch]
  int v22; // [sp+34h] [bp-8h]

  BlockDivSection(v19, (int *)a2);
  ChunkBySCoord = World::getChunkBySCoord(this, v19[0], v19[2]);
  v9 = (Chunk *)ChunkBySCoord;
  if ( ChunkBySCoord == nullptr )
    return 0;
  if ( *((_DWORD *)a2 + 1) > 0xFFu )
    return 0;
  operator-(&v20, (int *)a2, ChunkBySCoord + 69);
  v16 = v20;
  v15 = v21;
  v14 = v22;
  v17 = *(_WORD *)Chunk::getBlock(v9, v20, v21, v22);
  v11 = Chunk::setBlockAll(v9, v16, v15, v14, a3, a4);
  World::blockLightingChange(this, a2);
  if ( v11 == 0 )
    return 0;
  if ( (a5 & 2) != 0 )
    World::markBlockForUpdate(this, a2);
  if ( (a5 & 1) == 0 )
    return 1;
  World::notifyBlocksOfNeighborChange(this, a2, v17 & 0xFFF);
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a3);
  v10 = (*(int (__fastcall **)(int))(*(_DWORD *)Material + 172))(Material);
  if ( v10 == 0 )
    return 1;
  World::comparatorInputChange(this, a2, a3);
  return v10;
}


//======================================================================
// World::removeBlock(WCoord const&,WCoord const&,bool (*)(World*,WCoord const&))
// address: 0x002CA344   size: 0x6C (108 bytes)
//======================================================================
int __fastcall World::removeBlock(int this, const WCoord *a2, const WCoord *a3, bool (*a4)(World *, const WCoord *))
{
  int k; // r4
  int j; // [sp+8h] [bp-24h]
  int i; // [sp+Ch] [bp-20h]
  World *v9; // [sp+10h] [bp-1Ch]
  _DWORD v11[4]; // [sp+1Ch] [bp-10h] BYREF

  v9 = (World *)this;
  for ( i = *((_DWORD *)a2 + 1); i <= *((_DWORD *)a3 + 1); ++i )
  {
    for ( j = *(_DWORD *)a2; j <= *(_DWORD *)a3; ++j )
    {
      for ( k = *((_DWORD *)a2 + 2); k <= *((_DWORD *)a3 + 2); ++k )
      {
        v11[0] = j;
        v11[1] = i;
        v11[2] = k;
        this = ((int (__fastcall *)(World *, _DWORD *))a4)(v9, v11);
        if ( this != 0 )
          this = World::setBlockAll(v9, (const WCoord *)v11, 0, 0, 3);
      }
    }
  }
  return this;
}


//======================================================================
// World::destroyBlock(WCoord const&,BLOCK_MINE_TYPE)
// address: 0x002CA3B0   size: 0x5C (92 bytes)
//======================================================================
int __fastcall World::destroyBlock(World *a1, const WCoord *a2, int a3, int a4)
{
  int v7; // r2
  int v8; // r3
  int BlockID; // r7
  int Material; // r0
  int BlockData; // [sp+Ch] [bp-8h]

  BlockID = World::getBlockID(a1, a2, a3, a4);
  if ( BlockID <= 0 )
    return 0;
  if ( a3 != 0 )
  {
    BlockData = World::getBlockData(a1, a2, v7, v8);
    Material = BlockMaterialMgr::getMaterial(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 BlockID);
    (*(void (__fastcall **)(int, World *, const WCoord *, int, int, int))(*(_DWORD *)Material + 180))(
      Material,
      a1,
      a2,
      BlockData,
      a3,
      1065353216);
  }
  return World::setBlockAll(a1, a2, 0, 0, 3);
}


//======================================================================
// World::tick(void)
// address: 0x002CA410   size: 0x132 (306 bytes)
//======================================================================
void __fastcall World::tick(World *this)
{
  __int64 v2; // r0
  int i; // r3
  int v4; // r1
  int v5; // r2
  int v6; // r0
  _DWORD *v7; // r6
  _DWORD *v8; // r0
  void *v9; // r5
  Chunk *v10; // r1
  int v11; // r7
  _DWORD *v12; // r2
  _DWORD *v13; // r3
  void *v14; // r0
  int j; // r3
  int v16; // r5
  void *v17; // r0
  int v18; // [sp+4h] [bp-10h]

  ++*((_DWORD *)this + 1);
  WorldContainerMgr::updateTick(*((WorldContainerMgr **)this + 32));
  LODWORD(v2) = *((_DWORD *)this + 33);
  ClientActorMgr::tick(v2);
  BlockTickMgr::tick(*((BlockTickMgr **)this + 34));
  j_memset(&slotelements, 0, 0x904u);
  for ( i = 0; i != 2308; i += 4 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)this + 19) + i);
    v5 = 0;
    while ( v4 != 0 )
    {
      ++v5;
      v4 = *(_DWORD *)(v4 + 28);
    }
    *(_DWORD *)((char *)&slotelements + i) = v5;
  }
  v6 = *((_DWORD *)this + 7);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
  ChunkProvider::check(*((ChunkProvider **)this + 31));
  World::saveChunks(this, false);
  v7 = *((_DWORD **)this + 25);
  while ( v7 != (_DWORD *)((char *)this + 92) )
  {
    if ( *((_DWORD *)this + 1) <= (unsigned int)(v7[6] + 100) )
    {
      v7 = (_DWORD *)sub_391DDC(v7);
    }
    else
    {
      v8 = Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::find((int)this + 72, v7 + 4);
      v9 = v8;
      if ( v8[4] == v8[5] )
      {
        v10 = (Chunk *)v8[3];
        if ( v10 != nullptr )
        {
          World::removeChunk(this, v10);
        }
        else
        {
          v11 = v8[2] % *((_DWORD *)this + 20);
          v12 = (_DWORD *)(*((_DWORD *)this + 19) + 4 * v11);
          v13 = (_DWORD *)*v12;
          v18 = v8[7];
          if ( (_DWORD *)*v12 == v8 )
          {
            *v12 = v8[7];
          }
          else
          {
            while ( (_DWORD *)v13[7] != v8 )
              v13 = (_DWORD *)v13[7];
            v13[7] = v18;
          }
          v14 = (void *)v8[4];
          if ( v14 != nullptr )
            operator delete(v14);
          operator delete(v9);
          --*((_DWORD *)this + 21);
          for ( j = 4 * v11; v18 == 0; v18 = *(_DWORD *)(*((_DWORD *)this + 19) + j) )
          {
            ++v11;
            j += 4;
            if ( v11 == *((_DWORD *)this + 20) )
              break;
          }
        }
      }
      v16 = sub_391DDC(v7);
      v17 = (void *)sub_391F50(v7, (char *)this + 92);
      operator delete(v17);
      v7 = (_DWORD *)v16;
      --*((_DWORD *)this + 27);
    }
  }
}


//======================================================================
// World::~World()
// address: 0x002CA56C   size: 0xDA (218 bytes)
//======================================================================
// Alternative name is '_ZN5WorldD1Ev'
void __fastcall World::~World(World *this)
{
  ChunkProvider *v2; // r0
  int v3; // r0
  int v4; // r0
  void *v5; // r5
  void *v6; // r5
  void *v7; // r5
  unsigned int i; // r5
  int v9; // r3
  int v10; // r0
  void *v11; // r0
  void *v12; // r0
  void *v13; // r0

  *(_DWORD *)this = &off_45F988;
  v2 = *((ChunkProvider **)this + 31);
  if ( v2 != nullptr )
    ChunkProvider::stopThread(v2);
  v3 = *((_DWORD *)this + 7);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 31);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((void **)this + 32);
  if ( v5 != nullptr )
  {
    WorldContainerMgr::~WorldContainerMgr(*((WorldContainerMgr **)this + 32));
    operator delete(v5);
  }
  v6 = *((void **)this + 33);
  if ( v6 != nullptr )
  {
    ClientActorMgr::~ClientActorMgr(*((ClientActorMgr **)this + 33));
    operator delete(v6);
  }
  v7 = *((void **)this + 34);
  if ( v7 != nullptr )
  {
    BlockTickMgr::~BlockTickMgr(*((BlockTickMgr **)this + 34));
    operator delete(v7);
  }
  for ( i = 0; ; ++i )
  {
    v9 = *((_DWORD *)this + 8);
    if ( i >= (*((_DWORD *)this + 9) - v9) >> 2 )
      break;
    v10 = *(_DWORD *)(4 * i + v9);
    if ( v10 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(v10);
  }
  v11 = *((void **)this + 38);
  if ( v11 != nullptr )
    operator delete(v11);
  v12 = *((void **)this + 35);
  if ( v12 != nullptr )
    operator delete(v12);
  std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_erase(
    (int)this + 88,
    *((_DWORD **)this + 24));
  Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::~HashTable((_DWORD *)this + 18);
  v13 = *((void **)this + 8);
  if ( v13 != nullptr )
    operator delete(v13);
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 12));
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 8));
}


//======================================================================
// World::~World()
// address: 0x002CA64C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall World::~World(World *this)
{
  World::~World(this);
  operator delete(this);
}


//======================================================================
// World::World(void)
// address: 0x002CA660   size: 0xEC (236 bytes)
//======================================================================
// Alternative name is '_ZN5WorldC1Ev'
void __fastcall World::World(World *this)
{
  void *v2; // r0
  size_t v3; // r2
  char *v4; // [sp+8h] [bp-14h]
  struct timeval tv; // [sp+10h] [bp-Ch] BYREF

  *(_DWORD *)this = &off_45F988;
  v4 = (char *)this + 8;
  Ogre::LockSection::LockSection((pthread_mutex_t *)((char *)this + 8));
  Ogre::LockSection::LockSection((pthread_mutex_t *)((char *)this + 12));
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 20) = 577;
  *((_DWORD *)this + 21) = 0;
  v2 = (void *)operator new[](0x904u);
  v3 = 4 * *((_DWORD *)this + 20);
  *((_DWORD *)this + 19) = v2;
  j_memset(v2, 0, v3);
  j_memset((char *)this + 92, 0, 0x10u);
  *((_DWORD *)this + 25) = (char *)this + 92;
  *((_DWORD *)this + 26) = (char *)this + 92;
  *((_DWORD *)this + 29) = -1;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 16) = 1157932847;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)v4 + 31) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 999999;
  *((_DWORD *)this + 43) = 999999;
  *((_DWORD *)this + 44) = 999999;
  *((_DWORD *)this + 45) = -1;
  *((_DWORD *)this + 46) = -1;
  *((_DWORD *)this + 47) = -1;
  World::setionSvrAfterInit(this);
  *((_DWORD *)this + 5) = 0;
  j_gettimeofday(&tv, nullptr);
  j_srand48(tv.tv_usec);
  *((_DWORD *)this + 58) = j_lrand48();
  *((_WORD *)this + 30) = -1;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 68) = 0;
  *((_BYTE *)this + 236) = 0;
}


//======================================================================
// World::pushSectionSvr(tagOWBlock *)
// address: 0x002CA850   size: 0x2A (42 bytes)
//======================================================================
int __fastcall World::pushSectionSvr(__int64 a1)
{
  int v1; // r4

  v1 = a1 + 152;
  LODWORD(a1) = *(_DWORD *)(a1 + 156);
  if ( (_DWORD)a1 == *(_DWORD *)(v1 + 8) )
  {
    LODWORD(a1) = v1;
    LODWORD(a1) = std::vector<tagOWBlock>::_M_emplace_back_aux<tagOWBlock const&>(a1);
  }
  else
  {
    if ( (_DWORD)a1 != 0 )
      LODWORD(a1) = j_memcpy((void *)a1, (const void *)HIDWORD(a1), 0x8020u);
    *(_DWORD *)(v1 + 4) += 32800;
  }
  return a1;
}


//======================================================================
// World::pickActor(Ogre::WorldRay const&,ClientActor **,float *)
// address: 0x002CA880   size: 0x2F4 (756 bytes)
//======================================================================
ActorLocoMotion **__fastcall World::pickActor(World *this, const Ogre::WorldRay *a2, ClientActor **a3, float *a4)
{
  int v4; // r4
  int v5; // r5
  float v6; // r6
  int v7; // r0
  int v8; // r7
  int v9; // r5
  int v10; // r6
  int v11; // r0
  int v12; // r0
  unsigned int v13; // r0
  int i; // r5
  unsigned int v15; // r5
  int v16; // r3
  ActorLocoMotion **v17; // r7
  float v18; // r4
  int v20; // [sp+4h] [bp-F8h]
  int v21; // [sp+8h] [bp-F4h]
  float v22; // [sp+8h] [bp-F4h]
  int v24; // [sp+14h] [bp-E8h]
  signed int v25; // [sp+14h] [bp-E8h]
  int v26; // [sp+18h] [bp-E4h]
  signed int j; // [sp+1Ch] [bp-E0h]
  ActorLocoMotion **v28; // [sp+24h] [bp-D8h]
  signed int v29; // [sp+28h] [bp-D4h]
  _DWORD *ChunkBySCoord; // [sp+2Ch] [bp-D0h]
  int v31; // [sp+30h] [bp-CCh]
  int v32; // [sp+34h] [bp-C8h]
  int v33; // [sp+38h] [bp-C4h]
  unsigned int v35; // [sp+40h] [bp-BCh]
  signed int v36; // [sp+44h] [bp-B8h]
  signed int v37; // [sp+48h] [bp-B4h]
  _DWORD v40[3]; // [sp+64h] [bp-98h] BYREF
  _DWORD v41[3]; // [sp+70h] [bp-8Ch] BYREF
  void *v42[3]; // [sp+7Ch] [bp-80h] BYREF
  int v43[3]; // [sp+88h] [bp-74h] BYREF
  float v44[3]; // [sp+94h] [bp-68h] BYREF
  float v45[3]; // [sp+A0h] [bp-5Ch] BYREF
  int v46; // [sp+ACh] [bp-50h] BYREF
  int v47; // [sp+B0h] [bp-4Ch]
  int v48; // [sp+B4h] [bp-48h]
  float v49; // [sp+B8h] [bp-44h] BYREF
  int v50; // [sp+BCh] [bp-40h]
  int v51; // [sp+C0h] [bp-3Ch]
  int v52[3]; // [sp+C4h] [bp-38h] BYREF
  int v53[3]; // [sp+D0h] [bp-2Ch] BYREF
  _BYTE v54[24]; // [sp+DCh] [bp-20h] BYREF
  int v55; // [sp+F4h] [bp-8h]

  v4 = *(_DWORD *)a2 / 10;
  v5 = *((_DWORD *)a2 + 1);
  v20 = v5 / 10;
  v24 = *((_DWORD *)a2 + 2);
  v21 = v24 / 10;
  v6 = *((float *)a2 + 6);
  v7 = (*(_DWORD *)a2 + (int)(float)((float)(v6 * *((float *)a2 + 3)) * 10.0)) / 10;
  v8 = v7;
  v9 = (v5 + (int)(float)((float)(v6 * *((float *)a2 + 4)) * 10.0)) / 10;
  v10 = (v24 + (int)(float)((float)(v6 * *((float *)a2 + 5)) * 10.0)) / 10;
  if ( v7 > v4 )
    v7 = *(_DWORD *)a2 / 10;
  v35 = CoordDivSection(v7 - 200);
  if ( v8 < v4 )
    v8 = v4;
  v36 = CoordDivSection(v8 + 200);
  v11 = v10;
  if ( v10 > v21 )
    v11 = v24 / 10;
  v25 = CoordDivSection(v11 - 200);
  if ( v10 < v21 )
    v10 = v21;
  v37 = CoordDivSection(v10 + 200);
  v12 = v9;
  if ( v9 > v20 )
    v12 = v20;
  v13 = CoordDivSection(v12 - 200);
  if ( v9 < v20 )
    v9 = v20;
  v32 = v13 & ((int)~v13 >> 31);
  v29 = CoordDivSection(v9 + 200);
  if ( v29 > 15 )
    v29 = 15;
  memset(v40, 0, sizeof(v40));
  v41[0] = 1153957888;
  v41[1] = 1153957888;
  v41[2] = 1153957888;
  v55 = 2139095039;
  memset(v42, 0, sizeof(v42));
  v28 = nullptr;
  v22 = 3.4028e38;
  while ( v25 <= v37 )
  {
    for ( i = v35; ; i = v26 + 1 )
    {
      v26 = i;
      if ( i > v36 )
        break;
      ChunkBySCoord = World::getChunkBySCoord(this, i, v25);
      if ( ChunkBySCoord != nullptr )
      {
        v31 = 16 * v32;
        for ( j = v32; j <= v29; ++j )
        {
          v47 = v31;
          v48 = 0;
          v46 = 0;
          operator+(&v49, ChunkBySCoord + 69, &v46);
          v43[0] = 100 * LODWORD(v49);
          v43[1] = 100 * v50;
          v43[2] = 100 * v51;
          LODWORD(v49) *= 1000;
          v50 *= 1000;
          v51 *= 1000;
          Ogre::WorldRay::getRelativeRay(a2, (Ogre::Ray *)v54, (const Ogre::WorldPos *)&v49);
          if ( Ogre::Ray::intersectBox(
                 (Ogre::Ray *)v54,
                 (const Ogre::Vector3 *)v40,
                 (const Ogre::Vector3 *)v41,
                 nullptr) >= 0 )
          {
            v15 = 0;
            v33 = ChunkBySCoord[j + 342];
            while ( 1 )
            {
              v16 = *(_DWORD *)(v33 + 44);
              if ( v15 >= (*(_DWORD *)(v33 + 48) - v16) >> 2 )
                break;
              v17 = *(ActorLocoMotion ***)(4 * v15 + v16);
              if ( (*((int (__fastcall **)(ActorLocoMotion **))*v17 + 14))(v17) != 0
                && ActorInExcludes((ClientActor *)v17, a3) == 0 )
              {
                ActorLocoMotion::getCollideBox(v17[17], (CollideAABB *)v52);
                v46 = v52[0];
                v47 = v52[1];
                v48 = v52[2];
                operator-(&v49, &v46, v43);
                v44[0] = (float)SLODWORD(v49);
                v44[1] = (float)v50;
                v44[2] = (float)v51;
                operator+(&v46, v52, v53);
                operator-(&v49, &v46, v43);
                v45[0] = (float)SLODWORD(v49);
                v45[1] = (float)v50;
                v45[2] = (float)v51;
                if ( Ogre::Ray::intersectBox(
                       (Ogre::Ray *)v54,
                       (const Ogre::Vector3 *)v44,
                       (const Ogre::Vector3 *)v45,
                       &v49) >= 0 )
                {
                  v18 = v49;
                  if ( v49 >= v22 )
                  {
                    v17 = v28;
                    v18 = v22;
                  }
                  v28 = v17;
                  v22 = v18;
                }
              }
              ++v15;
            }
          }
          v31 += 16;
        }
      }
    }
    ++v25;
  }
  if ( a4 != nullptr )
    *a4 = v22;
  std::_Vector_base<ClientActor *>::~_Vector_base(v42);
  return v28;
}


//======================================================================
// World::pickAll(Ogre::WorldRay const&,IntersectResult *,ClientActor **,PICK_METHOD)
// address: 0x002CAB80   size: 0x56 (86 bytes)
//======================================================================
int __fastcall World::pickAll(World *a1, const Ogre::WorldRay *a2, int *a3, ClientActor **a4, int a5)
{
  ActorLocoMotion **v9; // r0
  int result; // r0
  int v11; // r3
  float v12[2]; // [sp+4h] [bp-8h] BYREF

  LODWORD(v12[0]) = a2;
  LODWORD(v12[1]) = a3;
  *(_BYTE *)a3 = World::pickGround(a1, (int)a2, a3, a5);
  v9 = World::pickActor(a1, a2, a4, v12);
  a3[5] = (int)v9;
  result = v9 != nullptr;
  v11 = *(unsigned __int8 *)a3;
  *((_BYTE *)a3 + 1) = result;
  if ( v11 != 0 )
  {
    if ( result == 0 || v12[0] >= *((float *)a3 + 6) )
    {
      a3[5] = 0;
      return 1;
    }
    a3[6] = LODWORD(v12[0]);
  }
  else
  {
    if ( result == 0 )
      return result;
    a3[6] = LODWORD(v12[0]);
  }
  return 2;
}


//======================================================================
// World::createExplosion(ClientActor *,WCoord const&,int,bool,bool)
// address: 0x002CABE8   size: 0x40 (64 bytes)
//======================================================================
void **__fastcall World::createExplosion(World *this, ClientActor *a2, const WCoord *a3, int a4, bool a5, bool a6)
{
  World *v7[7]; // [sp+10h] [bp-2Ch] BYREF
  void *v8; // [sp+2Ch] [bp-10h] BYREF

  Explosion::Explosion((Explosion *)v7, this, a2, 100 * a4, a3, a5, a6);
  Explosion::doExplosionA((Explosion *)v7);
  Explosion::doExplosionB(v7, 1);
  return std::_Vector_base<WCoord>::~_Vector_base(&v8);
}


//======================================================================
// World::clip(WCoord const&,WCoord const&)
// address: 0x002CAC34   size: 0xFA (250 bytes)
//======================================================================
int __fastcall World::clip(World *this, const WCoord *a2, const WCoord *a3)
{
  float v3; // r6
  int v4; // r0
  float v5; // r7
  float v6; // r5
  int v7; // r4
  float v9; // [sp+Ch] [bp-78h]
  float v11; // [sp+14h] [bp-70h]
  float v12; // [sp+1Ch] [bp-68h] BYREF
  float v13; // [sp+20h] [bp-64h]
  float v14; // [sp+24h] [bp-60h]
  float v15; // [sp+28h] [bp-5Ch] BYREF
  float v16; // [sp+2Ch] [bp-58h]
  float v17; // [sp+30h] [bp-54h]
  int v18[16]; // [sp+34h] [bp-50h] BYREF
  void *v19[4]; // [sp+74h] [bp-10h] BYREF

  v9 = (float)*(int *)a2 * 0.01;
  v3 = (float)*((int *)a2 + 2) * 0.01;
  v13 = (float)*((int *)a2 + 1) * 0.01;
  v14 = v3;
  v4 = *((_DWORD *)a3 + 1);
  v12 = v9;
  v11 = (float)((float)*((int *)a3 + 2) * 0.01) - v3;
  v15 = (float)((float)*(int *)a3 * 0.01) - v9;
  v16 = (float)((float)v4 * 0.01) - v13;
  v17 = v11;
  v5 = Ogre::Vector3::length((Ogre::Vector3 *)&v15);
  v6 = Ogre::Vector3::length((Ogre::Vector3 *)&v15);
  if ( v6 <= 0.00001 )
  {
    v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
  }
  else
  {
    v15 = v15 * (float)(1.0 / v6);
    v16 = v16 * (float)(1.0 / v6);
    v17 = v17 * (float)(1.0 / v6);
  }
  memset(v19, 0, 12);
  v7 = World::intersect(this, &v12, &v15, v5, v18, 0);
  std::_Vector_base<WCoord>::~_Vector_base(v19);
  return v7;
}


//======================================================================
// World::getHeight(WCoord &)
// address: 0x002CAD40   size: 0x58 (88 bytes)
//======================================================================
void **__fastcall World::getHeight(World *this, WCoord *a2)
{
  int v3; // r2
  int v4; // r1
  _DWORD v6[7]; // [sp+0h] [bp-68h] BYREF
  int v7[16]; // [sp+1Ch] [bp-4Ch] BYREF
  void *v8[3]; // [sp+5Ch] [bp-Ch] BYREF

  v3 = 10 * *((_DWORD *)a2 + 2);
  v4 = *(_DWORD *)a2;
  v6[2] = v3;
  v6[0] = 10 * v4;
  v6[1] = 256500;
  v6[3] = 0;
  v6[5] = 0;
  v6[4] = -1082130432;
  v6[6] = 1187512320;
  memset(v8, 0, sizeof(v8));
  if ( World::pickGround(this, (int)v6, v7, 0) != 0 )
    *((_DWORD *)a2 + 1) = 100 * (v7[2] + 1);
  else
    *((_DWORD *)a2 + 1) = 0;
  return std::_Vector_base<WCoord>::~_Vector_base(v8);
}


//======================================================================
// World::popGridChg(Chunk *)
// address: 0x002CADF0   size: 0x9E (158 bytes)
//======================================================================
__int64 __fastcall World::popGridChg(World *this, int a2)
{
  char *v2; // r6
  char *v3; // r4
  __int64 v6; // [sp+0h] [bp-Ch]

  LODWORD(v6) = a2;
  v2 = (char *)this + 140;
  v3 = *((char **)this + 35);
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 42) = 999999;
  *((_DWORD *)this + 43) = 999999;
  *((_DWORD *)this + 44) = 999999;
  HIDWORD(v6) = (char *)this + 164;
  *((_DWORD *)this + 45) = -1;
  *((_DWORD *)this + 46) = -1;
  *((_DWORD *)this + 47) = -1;
  while ( v3 != *((char **)this + 36) )
  {
    if ( *((_DWORD *)v3 + 2) == BlockDivSection(*(_DWORD *)(v6 + 276))
      && *((_DWORD *)v3 + 3) == BlockDivSection(*(_DWORD *)(v6 + 284))
      && *(unsigned __int16 *)v3 == *(unsigned __int16 *)(v6 + 1336) )
    {
      World::gridUpSvr();
      goto LABEL_9;
    }
    if ( (unsigned int)(*((_DWORD *)this + 1) - *((_DWORD *)v3 + 1)) > 0x258 )
LABEL_9:
      v3 = std::vector<tagGridChg>::erase((int)v2, v3);
    else
      v3 += 32;
  }
  if ( *(_DWORD *)HIDWORD(v6) != 0 )
    World::checkGridUPAfter(this);
  return v6;
}


//======================================================================
// World::pushGridChg(tagOWGridChg *)
// address: 0x002CAF14   size: 0x4A (74 bytes)
//======================================================================
int __fastcall World::pushGridChg(int a1, const void *a2)
{
  __int16 v2; // r3
  __int64 v4; // r0
  _DWORD *v5; // r2
  int v6; // r6
  int v7; // r7
  int v8; // r4
  int v9; // r5
  int v10; // r7
  int v12; // [sp+0h] [bp-24h] BYREF
  int v13; // [sp+4h] [bp-20h]
  _DWORD v14[7]; // [sp+8h] [bp-1Ch] BYREF

  v2 = *(_WORD *)(a1 + 60);
  v13 = *(_DWORD *)(a1 + 4);
  LOWORD(v12) = v2;
  j_memcpy(v14, a2, 0x18u);
  LODWORD(v4) = a1 + 140;
  v5 = *(_DWORD **)(a1 + 144);
  if ( v5 == *(_DWORD **)(a1 + 148) )
  {
    HIDWORD(v4) = &v12;
    LODWORD(v4) = std::vector<tagGridChg>::_M_emplace_back_aux<tagGridChg const&>(v4);
  }
  else
  {
    if ( v5 != nullptr )
    {
      v6 = v13;
      v7 = v14[0];
      *v5 = v12;
      v5[1] = v6;
      v5[2] = v7;
      v8 = v14[2];
      v9 = v14[3];
      v5[3] = v14[1];
      v5[4] = v8;
      v5[5] = v9;
      v10 = v14[5];
      v5[6] = v14[4];
      v5[7] = v10;
    }
    *(_DWORD *)(v4 + 4) += 32;
  }
  return v4;
}


//======================================================================
// World::getActorsInBox(std::vector<ClientActor *,std::allocator<ClientActor *>> &,CollideAABB const&)
// address: 0x002CAF80   size: 0x1BE (446 bytes)
//======================================================================
int __fastcall World::getActorsInBox(World *a1, void **a2, int *a3)
{
  int v3; // r6
  unsigned int v6; // r0
  int v7; // r6
  unsigned int v8; // r0
  int v9; // r7
  unsigned int v10; // r6
  int i; // r6
  signed int j; // r6
  unsigned int v13; // r6
  int v14; // r3
  int v15; // r7
  int v16; // r0
  int v17; // r2
  _DWORD *v18; // r3
  unsigned int v20; // r0
  char *v21; // r6
  char *v22; // r3
  int v23; // r7
  unsigned int v24; // [sp+4h] [bp-60h]
  signed int v25; // [sp+8h] [bp-5Ch]
  int v26; // [sp+Ch] [bp-58h]
  signed int v27; // [sp+10h] [bp-54h]
  unsigned int v28; // [sp+14h] [bp-50h]
  signed int v29; // [sp+18h] [bp-4Ch]
  _DWORD *ChunkBySCoord; // [sp+1Ch] [bp-48h]
  int v31; // [sp+20h] [bp-44h]
  unsigned int v32; // [sp+24h] [bp-40h]
  signed int v33; // [sp+28h] [bp-3Ch]
  signed int v34; // [sp+2Ch] [bp-38h]
  int v35; // [sp+30h] [bp-34h]
  int v37[3]; // [sp+3Ch] [bp-28h] BYREF
  _DWORD v38[7]; // [sp+48h] [bp-1Ch] BYREF

  v3 = *a3;
  v32 = CoordDivSection(*a3 - 200);
  v6 = CoordDivSection(v3 + a3[3] + 200);
  v7 = a3[2];
  v33 = v6;
  v25 = CoordDivSection(v7 - 200);
  v8 = CoordDivSection(v7 + a3[5] + 200);
  v9 = a3[1];
  v34 = v8;
  v10 = CoordDivSection(v9 - 200);
  v35 = v10 & ((int)~v10 >> 31);
  v29 = CoordDivSection(v9 + a3[4] + 200);
  if ( v29 > 15 )
    v29 = 15;
  operator+(v37, a3, a3 + 3);
  std::vector<ClientActor *>::resize((int)a2, 0);
  while ( v25 <= v34 )
  {
    for ( i = v32; ; i = v26 + 1 )
    {
      v26 = i;
      if ( i > v33 )
        break;
      ChunkBySCoord = World::getChunkBySCoord(a1, i, v25);
      if ( ChunkBySCoord != nullptr )
      {
        for ( j = v35; ; j = v27 + 1 )
        {
          v27 = j;
          if ( j > v29 )
            break;
          v13 = 0;
          v31 = ChunkBySCoord[v27 + 342];
          while ( 1 )
          {
            v28 = v13;
            v14 = *(_DWORD *)(v31 + 44);
            if ( v13 >= (*(_DWORD *)(v31 + 48) - v14) >> 2 )
              break;
            v15 = *(_DWORD *)(4 * v13 + v14);
            ActorLocoMotion::getCollideBox(*(ActorLocoMotion **)(v15 + 68), (CollideAABB *)v38);
            if ( *a3 < v38[0] + v38[3] )
            {
              v16 = a3[1];
              if ( v16 < v38[1] + v38[4] )
              {
                v17 = a3[2];
                if ( v17 < v38[2] + v38[5] && *a3 + a3[3] > v38[0] && v16 + a3[4] > v38[1] && v17 + a3[5] > v38[2] )
                {
                  v18 = a2[1];
                  if ( v18 == a2[2] )
                  {
                    v20 = std::vector<ClientActor *>::_M_check_len(a2, 1u, (int)"vector::_M_emplace_back_aux");
                    v24 = v20;
                    if ( v20 != 0 )
                    {
                      if ( v20 > 0x3FFFFFFF )
                        sub_3BCEB4(v20);
                      v21 = (char *)operator new(4 * v20);
                    }
                    else
                    {
                      v21 = nullptr;
                    }
                    v22 = &v21[4 * (((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2)];
                    if ( v22 != nullptr )
                      *(_DWORD *)v22 = v15;
                    v23 = std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(
                            *a2,
                            (int)a2[1],
                            v21)
                        + 4;
                    if ( *a2 != nullptr )
                      operator delete(*a2);
                    *a2 = v21;
                    a2[1] = (void *)v23;
                    a2[2] = &v21[4 * v24];
                  }
                  else
                  {
                    if ( v18 != nullptr )
                      *v18 = v15;
                    a2[1] = (char *)a2[1] + 4;
                  }
                }
              }
            }
            v13 = v28 + 1;
          }
        }
      }
    }
    ++v25;
  }
  return ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 2;
}


//======================================================================
// World::getActorsInBoxExclude(std::vector<ClientActor *,std::allocator<ClientActor *>> &,CollideAABB const&,ClientActor *)
// address: 0x002CB148   size: 0x40 (64 bytes)
//======================================================================
unsigned int __fastcall World::getActorsInBoxExclude(World *a1, int a2, int *a3, int a4)
{
  unsigned int v6; // r5
  int v7; // r2
  unsigned int result; // r0
  _DWORD *v9; // r3

  World::getActorsInBox(a1, (void **)a2, a3);
  v6 = 0;
  while ( 1 )
  {
    v7 = *(_DWORD *)(a2 + 4);
    result = (v7 - *(_DWORD *)a2) >> 2;
    if ( v6 >= result )
      break;
    v9 = (_DWORD *)(*(_DWORD *)a2 + 4 * v6);
    if ( *v9 == a4 )
    {
      *v9 = *(_DWORD *)(v7 - 4);
      std::vector<ClientActor *>::resize(a2, ((*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2) - 1);
    }
    else
    {
      ++v6;
    }
  }
  return result;
}


//======================================================================
// World::getActorsOfTypeInBox(std::vector<ClientActor *,std::allocator<ClientActor *>> &,CollideAABB const&,int)
// address: 0x002CB188   size: 0x48 (72 bytes)
//======================================================================
unsigned int __fastcall World::getActorsOfTypeInBox(World *a1, int a2, int *a3, int a4)
{
  unsigned int v6; // r5
  unsigned int result; // r0

  World::getActorsInBox(a1, (void **)a2, a3);
  v6 = 0;
  while ( 1 )
  {
    result = (*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2;
    if ( v6 >= result )
      break;
    if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)a2 + 4 * v6) + 24))(*(_DWORD *)(*(_DWORD *)a2 + 4 * v6)) == a4 )
    {
      ++v6;
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)a2 + 4 * v6) = *(_DWORD *)(*(_DWORD *)(a2 + 4) - 4);
      std::vector<ClientActor *>::resize(a2, ((*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2) - 1);
    }
  }
  return result;
}


//======================================================================
// World::checkNoActorCollision(CollideAABB const&,ClientActor *)
// address: 0x002CB1D0   size: 0x72 (114 bytes)
//======================================================================
int __fastcall World::checkNoActorCollision(World *this, const CollideAABB *a2, ClientActor *a3)
{
  unsigned int i; // r6
  int *v4; // r5
  int isDead; // r7
  void *v8; // [sp+Ch] [bp-10h] BYREF
  int v9; // [sp+10h] [bp-Ch]
  int v10; // [sp+14h] [bp-8h]

  v8 = nullptr;
  v9 = 0;
  v10 = 0;
  World::getActorsInBox(this, &v8, (int *)a2);
  for ( i = 0; i < (v9 - (int)v8) >> 2; ++i )
  {
    v4 = *((int **)v8 + i);
    if ( v4 != (int *)a3 && (*(int (__fastcall **)(_DWORD))(*v4 + 48))(*((_DWORD *)v8 + i)) != 0 )
    {
      isDead = ClientActor::isDead((ClientActor *)v4);
      if ( isDead == 0 && v4[6] < 0 )
        goto LABEL_9;
    }
  }
  isDead = 1;
LABEL_9:
  if ( v8 != nullptr )
    operator delete(v8);
  return isDead;
}


//======================================================================
// World::checkNoCollisionBoundBox(CollideAABB const&,ClientActor *)
// address: 0x002CB244   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall World::checkNoCollisionBoundBox(World *this, const CollideAABB *a2, ClientActor *a3)
{
  int v4; // r3
  int i; // r5
  int j; // r6
  int v7; // r2
  int k; // r7
  int BlockID; // r1
  _DWORD v13[3]; // [sp+8h] [bp-34h] BYREF
  int v14; // [sp+14h] [bp-28h] BYREF
  int v15; // [sp+18h] [bp-24h]
  int v16; // [sp+1Ch] [bp-20h]
  _DWORD v17[3]; // [sp+20h] [bp-1Ch] BYREF
  int v18; // [sp+2Ch] [bp-10h] BYREF
  int v19; // [sp+30h] [bp-Ch]
  int v20; // [sp+34h] [bp-8h]

  v4 = *((_DWORD *)a2 + 1);
  v18 = *(_DWORD *)a2;
  v20 = *((_DWORD *)a2 + 2);
  v19 = v4;
  CoordDivBlock((const WCoord *)v13, &v18);
  operator+(v17, (int *)a2, (int *)a2 + 3);
  v18 = v17[0] + 100;
  v19 = v17[1] + 100;
  v20 = v17[2] + 100;
  CoordDivBlock((const WCoord *)&v14, &v18);
  for ( i = v13[0]; i < v14; ++i )
  {
    for ( j = v13[2]; j < v16; ++j )
    {
      v18 = i;
      v19 = 64;
      v20 = j;
      if ( World::blockExists(this, (const WCoord *)&v18) )
      {
        for ( k = v13[1]; k < v15; ++k )
        {
          v19 = k;
          v20 = j;
          v18 = i;
          BlockID = World::getBlockID(this, (const WCoord *)&v18, v7, v15);
          if ( BlockID > 0
            && *(_DWORD *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID) + 12) == 1 )
          {
            return 0;
          }
        }
      }
    }
  }
  return World::checkNoActorCollision(this, a2, a3);
}


//======================================================================
// World::canPlaceActorOnSide(int,WCoord const&,bool,int,ClientActor *)
// address: 0x002CB300   size: 0x80 (128 bytes)
//======================================================================
int __fastcall World::canPlaceActorOnSide(World *this, int a2, const WCoord *a3, int a4, int a5, ClientActor *a6)
{
  int BlockID; // r0
  int Material; // r7
  int v10; // r4
  int v11; // r0
  _BYTE v15[28]; // [sp+10h] [bp-1Ch] BYREF

  BlockID = World::getBlockID(this, a3, (int)a3, a4);
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, BlockID);
  v10 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a2);
  v11 = (*(int (__fastcall **)(int, _BYTE *, World *, const WCoord *))(*(_DWORD *)v10 + 40))(v10, v15, this, a3);
  if ( (a4 != 0 || v11 == 0 || World::checkNoActorCollision(this, (const CollideAABB *)v15, a6) != 0)
    && (*(int (__fastcall **)(int))(*(_DWORD *)Material + 52))(Material) != 0
    && a2 > 0 )
  {
    return (*(int (__fastcall **)(int, World *, const WCoord *, int))(*(_DWORD *)v10 + 156))(v10, this, a3, a5);
  }
  else
  {
    return 0;
  }
}


//======================================================================
// World::getChunkHeightMapMinimum(int,int)
// address: 0x002DA9E6   size: 0x28 (40 bytes)
//======================================================================
int __fastcall World::getChunkHeightMapMinimum(World *this, int a2, int a3)
{
  unsigned int v5; // r4
  unsigned int v7; // [sp+4h] [bp-4h]

  v5 = BlockDivSection(a2);
  v7 = BlockDivSection(a3);
  return World::getChunk((int)this, v5, v7)[72];
}


//======================================================================
// World::isAirBlock(int,int,int)
// address: 0x002E02C8   size: 0x16 (22 bytes)
//======================================================================
bool __fastcall World::isAirBlock(World *this, int a2, int a3, int a4)
{
  _DWORD v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[2] = a4;
  v5[1] = a3;
  return World::getBlockID(this, (const WCoord *)v5, a3, a4) == 0;
}


//======================================================================
// World::createChunkProvider(int)
// address: 0x002EED4E   size: 0x92 (146 bytes)
//======================================================================
ChunkProviderHell *__fastcall World::createChunkProvider(World *this, int a2)
{
  ChunkProviderHell *v3; // r4
  int v4; // r6

  if ( a2 == 1 )
  {
    v3 = (ChunkProviderHell *)operator new(0xC8u);
    ChunkProviderHell::ChunkProviderHell(v3, this, *((_DWORD *)this + 11), *((_DWORD *)this + 12), 50, 50);
  }
  else
  {
    v4 = *((_DWORD *)this + 13);
    if ( v4 != 0 )
    {
      if ( v4 == 1 )
      {
        v3 = (ChunkProviderHell *)operator new(0x110u);
        ChunkProviderGenerate::ChunkProviderGenerate(v3, this, true, *((_DWORD *)this + 11), *((_DWORD *)this + 12));
      }
      else if ( v4 == 2 )
      {
        v3 = (ChunkProviderHell *)operator new(0xC8u);
        ChunkProviderHell::ChunkProviderHell(v3, this, *((_DWORD *)this + 11), *((_DWORD *)this + 12), 10, 10);
      }
      else
      {
        v3 = nullptr;
      }
    }
    else
    {
      v3 = (ChunkProviderHell *)operator new(0x28u);
      ChunkProviderFlat::ChunkProviderFlat(v3, this);
    }
  }
  ChunkProvider::startThread((Ogre::OSThread **)v3);
  return v3;
}


//======================================================================
// World::create(unsigned int,unsigned int,int,int,int,int,int)
// address: 0x002EEDE0   size: 0x74 (116 bytes)
//======================================================================
void __fastcall World::create(
        World *this,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned __int16 a5,
        int a6,
        int a7,
        int a8)
{
  ChunkProviderHell *ChunkProvider; // r0
  char *v10; // r0
  int v11; // r1
  WorldContainerMgr *v12; // r5
  int v13; // r5
  BlockTickMgr *v14; // r5

  *((_DWORD *)this + 6) = a4;
  *((_DWORD *)this + 11) = a2;
  *((_DWORD *)this + 4) = a6;
  *((_WORD *)this + 30) = a5;
  *((_DWORD *)this + 13) = a7;
  *((_DWORD *)this + 14) = 3;
  *((_DWORD *)this + 12) = a3;
  *((_DWORD *)this + 5) = a8;
  ChunkProvider = World::createChunkProvider(this, a5);
  *((_DWORD *)this + 31) = ChunkProvider;
  v10 = (char *)(*(int (__fastcall **)(ChunkProviderHell *))(*(_DWORD *)ChunkProvider + 20))(ChunkProvider);
  if ( v10 != nullptr )
    v10 = &byte_9[6];
  Chunk::setEmptyBlockLight((char)v10, v11);
  v12 = (WorldContainerMgr *)operator new(0x14u);
  WorldContainerMgr::WorldContainerMgr(v12, this);
  *((_DWORD *)this + 32) = v12;
  v13 = operator new(0x70u);
  ClientActorMgr::ClientActorMgr(v13, (int)this);
  *((_DWORD *)this + 33) = v13;
  v14 = (BlockTickMgr *)operator new(0x94u);
  BlockTickMgr::BlockTickMgr(v14, this);
  *((_DWORD *)this + 34) = v14;
}


//======================================================================
// World::getFirstUncoveredBlock(int,int)
// address: 0x002EEE62   size: 0x46 (70 bytes)
//======================================================================
int __fastcall World::getFirstUncoveredBlock(World *this, int a2, int a3)
{
  int v5; // r2
  int i; // r6
  _DWORD v9[4]; // [sp+Ch] [bp-10h] BYREF

  for ( i = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 31) + 28))(*((_DWORD *)this + 31)); ; ++i )
  {
    v9[1] = i + 1;
    v9[0] = a2;
    v9[2] = a3;
    if ( World::getBlockID(this, (const WCoord *)v9, v5, a3) <= 0 )
      break;
  }
  v9[0] = a2;
  v9[1] = i;
  v9[2] = a3;
  return World::getBlockID(this, (const WCoord *)v9, v5, a3);
}


//======================================================================
// World::getPortalPoint(void)
// address: 0x002EEEA8   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall World::getPortalPoint(_DWORD *this, _DWORD *a2)
{
  int v2; // r3
  int v3; // r1

  *this = a2[28];
  v2 = a2[29];
  v3 = a2[30];
  *(this + 1) = v2;
  *(this + 2) = v3;
  return this;
}


//======================================================================
// World::saveChunk(Chunk *)
// address: 0x002EEF30   size: 0x70 (112 bytes)
//======================================================================
Ogre::Timer *__fastcall World::saveChunk(Ogre::Timer *this, Chunk *a2)
{
  Ogre::Timer *v2; // r5
  int SystemTick; // r7
  unsigned int v5; // r3
  Ogre::Timer *v6; // r0
  int v7; // r4
  Ogre::Timer *v8; // r6
  __suseconds_t v9; // r1
  int v10; // r0
  char *v11; // [sp+Ch] [bp-8h]

  v2 = this;
  if ( *((_DWORD *)this + 4) <= 1u )
  {
    SystemTick = Ogre::Timer::getSystemTick(this, (__suseconds_t)a2);
    CSMgr::saveChunkData(g_CSMgr, *((_DWORD *)v2 + 6), a2, 0);
    *((_BYTE *)a2 + 1339) = 0;
    v5 = *((_DWORD *)v2 + 1);
    *((_DWORD *)a2 + 329) = v5;
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/world_gen.cpp", (const char *)&stru_1C8.st_info, 2, v5);
    v11 = (char *)BlockDivSection(*((_DWORD *)a2 + 69));
    v6 = (Ogre::Timer *)BlockDivSection(*((_DWORD *)a2 + 71));
    v7 = *((_DWORD *)a2 + 329);
    v8 = v6;
    v10 = Ogre::Timer::getSystemTick(v6, v9);
    return (Ogre::Timer *)Ogre::LogMessage(
                            (Ogre *)"chunk saved: x=%d, z=%d, lastsavetick=%d, dt=%d",
                            v11,
                            v8,
                            v7,
                            v10 - SystemTick);
  }
  return this;
}


//======================================================================
// World::saveChunks(bool)
// address: 0x002EEFB4   size: 0x40 (64 bytes)
//======================================================================
__int64 __fastcall World::saveChunks(__int64 this)
{
  unsigned int v1; // r4
  Ogre::Timer *v2; // r5
  int v3; // r6
  int v4; // r3
  Chunk *v5; // r7

  v1 = 0;
  v2 = (Ogre::Timer *)this;
  v3 = 0;
  while ( 1 )
  {
    v4 = *((_DWORD *)v2 + 8);
    if ( v1 >= (*((_DWORD *)v2 + 9) - v4) >> 2 )
      break;
    v5 = *(Chunk **)(4 * v1 + v4);
    if ( Chunk::needSave(v5, SHIDWORD(this)) != 0 )
    {
      World::saveChunk(v2, v5);
      ++v3;
      if ( HIDWORD(this) == 0 && v3 > 2 )
        break;
    }
    ++v1;
  }
  return this;
}


//======================================================================
// World::populateChunk(Chunk *)
// address: 0x002EEFF4   size: 0x27E (638 bytes)
//======================================================================
int __fastcall World::populateChunk(World *this, Chunk *a2)
{
  char *v2; // r6
  unsigned int v5; // r7
  unsigned int v6; // r0
  int v7; // r6
  int v8; // r5
  int result; // r0
  int v10; // r6
  int v11; // r5
  unsigned int v12; // r5
  int v13; // r3
  int v14; // r3
  int v15; // r0
  int v16; // r1
  int v17; // r3
  int v18; // [sp+4h] [bp-30h]
  _DWORD *v19; // [sp+8h] [bp-2Ch]
  int v20; // [sp+Ch] [bp-28h]
  int j; // [sp+10h] [bp-24h]
  int i; // [sp+14h] [bp-20h]
  _DWORD v23[4]; // [sp+24h] [bp-10h] BYREF

  v2 = (char *)a2 + 252;
  v5 = BlockDivSection(*((_DWORD *)a2 + 69));
  v6 = BlockDivSection(*((_DWORD *)v2 + 8));
  v18 = v6;
  g_ChunkSetDirty = 0;
  if ( *((_BYTE *)a2 + 269) == 0 )
  {
    v7 = v6 + 1;
    if ( World::chunkExist(this, v5 + 1, v6 + 1)
      && World::chunkExist(this, v5, v7)
      && World::chunkExist(this, v5 + 1, v18) )
    {
      (*(void (__fastcall **)(_DWORD, unsigned int, int))(**((_DWORD **)this + 31) + 12))(
        *((_DWORD *)this + 31),
        v5,
        v18);
      *((_BYTE *)World::getChunkBySCoord(this, v5, v18) + 269) = 1;
    }
  }
  if ( World::chunkExist(this, v5 - 1, v18)
    && *((_BYTE *)World::getChunkBySCoord(this, v5 - 1, v18) + 269) == 0
    && World::chunkExist(this, v5, v18 + 1)
    && World::chunkExist(this, v5 - 1, v18 + 1) )
  {
    (*(void (__fastcall **)(_DWORD, unsigned int, int))(**((_DWORD **)this + 31) + 12))(
      *((_DWORD *)this + 31),
      v5 - 1,
      v18);
    *((_BYTE *)World::getChunkBySCoord(this, v5 - 1, v18) + 269) = 1;
  }
  v8 = v18 - 1;
  if ( World::chunkExist(this, v5, v18 - 1)
    && *((_BYTE *)World::getChunkBySCoord(this, v5, v8) + 269) == 0
    && World::chunkExist(this, v5 + 1, v18)
    && World::chunkExist(this, v5 + 1, v8) )
  {
    (*(void (__fastcall **)(_DWORD, unsigned int, int))(**((_DWORD **)this + 31) + 12))(*((_DWORD *)this + 31), v5, v8);
    *((_BYTE *)World::getChunkBySCoord(this, v5, v8) + 269) = 1;
  }
  if ( World::chunkExist(this, v5 - 1, v8)
    && *((_BYTE *)World::getChunkBySCoord(this, v5 - 1, v8) + 269) == 0
    && World::chunkExist(this, v5 - 1, v18)
    && World::chunkExist(this, v5, v8) )
  {
    (*(void (__fastcall **)(_DWORD, unsigned int, int))(**((_DWORD **)this + 31) + 12))(
      *((_DWORD *)this + 31),
      v5 - 1,
      v8);
    *((_BYTE *)World::getChunkBySCoord(this, v5 - 1, v8) + 269) = 1;
  }
  g_ChunkSetDirty = 1;
  for ( i = -1; i != 2; ++i )
  {
    for ( j = -1; j != 2; ++j )
    {
      result = (int)World::getChunkBySCoord(this, j + v5, i + v18);
      v19 = (_DWORD *)result;
      if ( result != 0 && *(_DWORD *)(result + 1356) != *(_DWORD *)(result + 1360) )
      {
        v10 = -1;
        v20 = 1;
        do
        {
          v11 = -1;
          while ( 1 )
          {
            result = World::chunkExist(this, v11 + j + v5, v10 + i + v18);
            if ( result == 0 )
              break;
            if ( ++v11 == 2 )
              goto LABEL_31;
          }
          v20 = 0;
LABEL_31:
          ++v10;
        }
        while ( v10 != 2 );
        v12 = 0;
        if ( v20 != 0 )
        {
          while ( 1 )
          {
            result = 1356;
            v13 = v19[339];
            if ( v12 >= (v19[340] - v13) >> 2 )
              break;
            v14 = *(_DWORD *)(4 * v12 + v13);
            v15 = (v14 >> 8) + v19[70];
            v16 = ((v14 >> 4) & 0xF) + v19[71];
            ++v12;
            v17 = v19[69] + (v14 & 0xF);
            v23[1] = v15;
            v23[2] = v16;
            v23[0] = v17;
            World::blockLightingChange(this, 1, (const WCoord *)v23);
          }
          v19[340] = v13;
        }
      }
    }
  }
  return result;
}


//======================================================================
// World::unloadChunk(ChunkIndex,ChunkViewer *)
// address: 0x002EF53E   size: 0x36 (54 bytes)
//======================================================================
unsigned __int64 __fastcall World::unloadChunk(int a1, unsigned int a2, unsigned int a3, ChunkViewer *a4)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  unsigned __int64 v9; // [sp+0h] [bp-Ch] BYREF
  unsigned int v10; // [sp+8h] [bp-4h]

  v10 = a3;
  v9 = __PAIR64__(a3, a2);
  v6 = Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::find(a1 + 72, &v9);
  v7 = v6;
  if ( v6 != nullptr )
  {
    ChunkViewerList::removeViewer((ChunkViewerList *)(v6 + 3), a4);
    if ( v7[4] == v7[5] )
      *std::map<ChunkIndex,int>::operator[]((_DWORD *)(a1 + 88), (int *)&v9) = *(_DWORD *)(a1 + 4);
  }
  return v9;
}


//======================================================================
// World::removeChunk(Chunk *)
// address: 0x002EF63C   size: 0x132 (306 bytes)
//======================================================================
int __fastcall World::removeChunk(World *this, Chunk *a2)
{
  char *v2; // r6
  unsigned int v5; // r7
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  Chunk **v8; // r3
  Chunk **v9; // r1
  int j; // r0
  int v11; // r7
  _DWORD *v12; // r2
  _DWORD *v13; // r3
  int v14; // r0
  int i; // r3
  Chunk **v16; // r2
  int v17; // r0
  Chunk **k; // r2
  int v20; // [sp+0h] [bp-14h]
  _DWORD v21[3]; // [sp+8h] [bp-Ch] BYREF

  v2 = (char *)a2 + 252;
  v5 = BlockDivSection(*((_DWORD *)a2 + 69));
  v21[1] = BlockDivSection(*((_DWORD *)v2 + 8));
  v21[0] = v5;
  v6 = Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::find((int)this + 72, v21);
  v7 = v6;
  if ( v6 != nullptr )
  {
    v11 = v6[2] % *((_DWORD *)this + 20);
    v12 = (_DWORD *)(*((_DWORD *)this + 19) + 4 * v11);
    v13 = (_DWORD *)*v12;
    v14 = v6[7];
    v20 = v7[7];
    if ( (_DWORD *)*v12 == v7 )
    {
      *v12 = v14;
    }
    else
    {
      while ( (_DWORD *)v13[7] != v7 )
        v13 = (_DWORD *)v13[7];
      v13[7] = v20;
    }
    sub_2EECD2((void *)v7[4]);
    operator delete(v7);
    --*((_DWORD *)this + 21);
    for ( i = 4 * v11; v20 == 0; v20 = *(_DWORD *)(*((_DWORD *)this + 19) + i) )
    {
      ++v11;
      i += 4;
      if ( v11 == *((_DWORD *)this + 20) )
        break;
    }
  }
  v8 = *((Chunk ***)this + 8);
  v9 = *((Chunk ***)this + 9);
  for ( j = ((char *)v9 - (char *)v8) >> 4; ; --j )
  {
    v16 = v8;
    if ( j <= 0 )
      break;
    if ( *v8 == a2 )
      goto LABEL_31;
    if ( v8[1] == a2 )
    {
      ++v8;
      goto LABEL_31;
    }
    if ( v8[2] == a2 )
    {
      v8 += 2;
      goto LABEL_31;
    }
    v8 += 4;
    if ( *(v8 - 1) == a2 )
    {
      v8 = v16 + 3;
      goto LABEL_31;
    }
  }
  v17 = v9 - v8;
  if ( v17 != 2 )
  {
    if ( v17 != 3 )
    {
      if ( v17 != 1 )
        goto LABEL_38;
LABEL_29:
      if ( *v16 != a2 )
        goto LABEL_38;
      goto LABEL_30;
    }
    if ( *v8 == a2 )
      goto LABEL_31;
    v16 = v8 + 1;
  }
  if ( *v16 != a2 )
  {
    ++v16;
    goto LABEL_29;
  }
LABEL_30:
  v8 = v16;
LABEL_31:
  if ( v8 != v9 )
  {
    for ( k = v8 + 1; k != v9; ++k )
    {
      if ( *k != a2 )
        *v8++ = *k;
    }
    v9 = v8;
  }
LABEL_38:
  if ( v9 != *((Chunk ***)this + 9) )
    *((_DWORD *)this + 9) = v9;
  if ( Chunk::needSave(a2, 1) != 0 )
    World::saveChunk(this, a2);
  Chunk::onLeaveWorld((int)a2);
  return (*(int (__fastcall **)(Chunk *))(*(_DWORD *)a2 + 4))(a2);
}


//======================================================================
// World::addChunk(Chunk *)
// address: 0x002EF76E   size: 0x6A (106 bytes)
//======================================================================
int __fastcall World::addChunk(World *this, Chunk *a2)
{
  char *v2; // r6
  int v4; // r0
  unsigned int v6; // r7
  _DWORD *v7; // r0
  _DWORD *v9; // r3
  Chunk *v10; // [sp+4h] [bp-10h] BYREF
  _DWORD v11[3]; // [sp+8h] [bp-Ch] BYREF

  v2 = (char *)a2 + 252;
  v4 = *((_DWORD *)a2 + 69);
  v10 = a2;
  v6 = BlockDivSection(v4);
  v11[1] = BlockDivSection(*((_DWORD *)v2 + 8));
  v11[0] = v6;
  v7 = Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::find((int)this + 72, v11);
  if ( v7 != nullptr )
  {
    v7[3] = a2;
    v9 = *((_DWORD **)this + 9);
    if ( v9 == *((_DWORD **)this + 10) )
    {
      std::vector<Chunk *>::_M_emplace_back_aux<Chunk * const&>((int)this + 32, &v10);
    }
    else
    {
      if ( v9 != nullptr )
        *v9 = a2;
      *((_DWORD *)this + 9) += 4;
    }
    Chunk::onEnterWorld((int)v10, this);
    return 1;
  }
  else
  {
    (*(void (__fastcall **)(Chunk *))(*(_DWORD *)a2 + 4))(a2);
    return 0;
  }
}


//======================================================================
// World::tryLoadChunk(ChunkIndex,ChunkViewer *)
// address: 0x002EF88C   size: 0x16E (366 bytes)
//======================================================================
void __fastcall World::tryLoadChunk(int a1, int a2, int a3, ChunkViewer *a4)
{
  _DWORD *v6; // r0
  int v7; // r2
  int v8; // r1
  _DWORD *v9; // r4
  _DWORD *v10; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r4
  int v14; // r6
  int v15; // r5
  int v16; // r3
  int v17; // r1
  int v18; // [sp+0h] [bp-54h]
  _DWORD *v19; // [sp+4h] [bp-50h]
  unsigned __int16 v20; // [sp+4h] [bp-50h]
  int v21; // [sp+8h] [bp-4Ch]
  unsigned int v22; // [sp+Ch] [bp-48h]
  int v23; // [sp+Ch] [bp-48h]
  int v24; // [sp+18h] [bp-3Ch] BYREF
  int v25; // [sp+1Ch] [bp-38h]
  int v26; // [sp+20h] [bp-34h] BYREF
  void *v27; // [sp+24h] [bp-30h] BYREF
  unsigned __int16 v28; // [sp+30h] [bp-24h] BYREF
  int v29; // [sp+34h] [bp-20h]
  int v30; // [sp+38h] [bp-1Ch]
  int v31; // [sp+40h] [bp-14h]
  int v32; // [sp+44h] [bp-10h]
  __int16 v33; // [sp+48h] [bp-Ch]
  unsigned __int16 v34; // [sp+4Ah] [bp-Ah]

  v24 = a2;
  v25 = a3;
  v6 = Ogre::HashTable<ChunkIndex,ChunkViewerList,ChunkIndexHashCoder>::find(a1 + 72, &v24);
  if ( v6 != nullptr )
  {
    if ( a4 != nullptr )
      ChunkViewerList::addViewer((ChunkViewerList *)(v6 + 3), a4, v7);
  }
  else
  {
    ChunkViewerList::ChunkViewerList((ChunkViewerList *)&v26);
    v22 = v25 + 961 + 31 * v24;
    v8 = v22 % *(_DWORD *)(a1 + 80);
    v9 = *(_DWORD **)(*(_DWORD *)(a1 + 76) + 4 * v8);
    v19 = (_DWORD *)(*(_DWORD *)(a1 + 76) + 4 * v8);
    if ( v9 != nullptr )
    {
      while ( *v9 != v24 || v9[1] != v25 )
      {
        if ( v9[7] == 0 )
        {
          v10 = sub_2EED20(v24, v25);
          v9[7] = v10;
          v9 = v10;
          break;
        }
        v9 = (_DWORD *)v9[7];
      }
    }
    else
    {
      v9 = sub_2EED20(v24, v25);
      *v19 = v9;
    }
    ++*(_DWORD *)(a1 + 84);
    v11 = v26;
    v9[2] = v22;
    v9[3] = v11;
    std::vector<ChunkViewer *>::operator=((int)(v9 + 4), (int)&v27);
    if ( a4 != nullptr )
      ChunkViewerList::addViewer((ChunkViewerList *)(v9 + 3), a4, v12);
    else
      *std::map<ChunkIndex,int>::operator[]((_DWORD *)(a1 + 88), &v24) = *(_DWORD *)(a1 + 4);
    v20 = *(_WORD *)(a1 + 60);
    v18 = v24;
    v28 = v20;
    v29 = v24;
    v21 = v25;
    v30 = v25;
    v23 = g_CSMgr;
    v13 = *(_DWORD *)(g_CSMgr + 40520);
    v14 = g_CSMgr + 40516;
    v15 = g_CSMgr + 40516;
    while ( v13 != 0 )
    {
      if ( tagChunkFlagEntry::operator<((unsigned __int16 *)(v13 + 16), &v28) )
      {
        v16 = *(_DWORD *)(v13 + 12);
        v13 = v15;
      }
      else
      {
        v16 = *(_DWORD *)(v13 + 8);
      }
      v15 = v13;
      v13 = v16;
    }
    if ( v15 != v14 && tagChunkFlagEntry::operator<(&v28, (unsigned __int16 *)(v15 + 16)) )
      v15 = v14;
    if ( v15 == v14 )
    {
      ChunkProvider::requesChunk(*(ChunkProvider **)(a1 + 124), v18, v21);
    }
    else
    {
      v34 = v20;
      v31 = v18;
      v32 = v21;
      v17 = *(_DWORD *)(a1 + 24);
      v33 = 0;
      CSMgr::loadChunkData(v23, v17);
    }
    sub_2EECD2(v27);
  }
}


//======================================================================
// World::syncLoadChunk(int,int)
// address: 0x002EFA0C   size: 0x44 (68 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> World::syncLoadChunk(ChunkProvider **this, int a2, int a3)
{
  if ( (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*(this + 31) + 16))(*(this + 31)) != 0 )
  {
    World::tryLoadChunk((int)this, a2, a3, nullptr);
    while ( World::getChunkBySCoord((World *)this, a2, a3) == nullptr )
    {
      CSMgr::checkMsg((CSMgr *)g_CSMgr);
      ChunkProvider::check(*(this + 31));
    }
  }
}


//======================================================================
// World::createSpawnPoint(void)
// address: 0x002EFA54   size: 0xEE (238 bytes)
//======================================================================
World *__fastcall World::createSpawnPoint(World *this, int a2)
{
  unsigned int v4; // r2
  __int64 v5; // r2
  unsigned int v6; // r3
  const char *v7; // r1
  unsigned int v8; // r7
  unsigned int v9; // r0
  char v10; // r7
  char v11; // r7
  int v12; // r7
  unsigned int v13; // r0
  int v15; // [sp+8h] [bp-14h]
  unsigned int v16; // [sp+Ch] [bp-10h]
  _BYTE v17[12]; // [sp+10h] [bp-Ch] BYREF

  ChunkRandGen::ChunkRandGen((ChunkRandGen *)v17);
  v4 = *(_DWORD *)(a2 + 48);
  HIDWORD(v5) = v4 >> 20;
  LODWORD(v5) = (v4 << 12) ^ *(_DWORD *)(a2 + 44);
  ChunkRandGen::setSeed64((int)v17, v5);
  if ( (*(int (__fastcall **)(_DWORD, World *, _DWORD, _DWORD, int, _BYTE *))(**(_DWORD **)(*(_DWORD *)(a2 + 124) + 24)
                                                                            + 20))(
         *(_DWORD *)(*(_DWORD *)(a2 + 124) + 24),
         this,
         0,
         0,
         256,
         v17) == 0 )
  {
    Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/world_gen.cpp", (const char *)off_9C + 3, 2, v6);
    Ogre::LogMessage((Ogre *)"Cannot find spawn point", v7);
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
  }
  v8 = BlockDivSection(*(_DWORD *)this);
  v9 = BlockDivSection(*((_DWORD *)this + 2));
  World::syncLoadChunk((ChunkProvider **)a2, v8, v9);
  v15 = 201;
  while ( (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(a2 + 124) + 36))(
            *(_DWORD *)(a2 + 124),
            *(_DWORD *)this,
            *((_DWORD *)this + 2)) == 0 )
  {
    v10 = ChunkRandGen::get((ChunkRandGen *)v17);
    *(_DWORD *)this += (v10 & 0x3F) - (ChunkRandGen::get((ChunkRandGen *)v17) & 0x3F);
    v11 = ChunkRandGen::get((ChunkRandGen *)v17);
    v12 = (v11 & 0x3F) - (ChunkRandGen::get((ChunkRandGen *)v17) & 0x3F) + *((_DWORD *)this + 2);
    *((_DWORD *)this + 2) = v12;
    if ( --v15 == 0 )
      break;
    v16 = BlockDivSection(*(_DWORD *)this);
    v13 = BlockDivSection(v12);
    World::syncLoadChunk((ChunkProvider **)a2, v16, v13);
  }
  *((_DWORD *)this + 1) = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 124) + 28))(*(_DWORD *)(a2 + 124));
  return this;
}


//======================================================================
// World::syncLoadChunk(WCoord const&,int)
// address: 0x002EFB4C   size: 0x4C (76 bytes)
//======================================================================
__int64 __fastcall World::syncLoadChunk(ChunkProvider **this, const WCoord *a2, int a3)
{
  int v3; // r7
  unsigned int v7; // r0
  int v8; // r7
  signed int v9; // r5
  signed int v10; // r7
  int i; // r4
  __int64 v13; // [sp+0h] [bp-Ch]

  v3 = *(_DWORD *)a2;
  LODWORD(v13) = BlockDivSection(*(_DWORD *)a2 - a3);
  v7 = BlockDivSection(v3 + a3);
  v8 = *((_DWORD *)a2 + 2);
  HIDWORD(v13) = v7;
  v9 = BlockDivSection(v8 - a3);
  v10 = BlockDivSection(v8 + a3);
  while ( v9 <= v10 )
  {
    for ( i = v13; i <= SHIDWORD(v13); ++i )
      World::syncLoadChunk(this, i, v9);
    ++v9;
  }
  return v13;
}


//======================================================================
// World::createPortal(WCoord const&)
// address: 0x002EFB98   size: 0x400 (1024 bytes)
//======================================================================
int __fastcall World::createPortal(World *this, const WCoord *a2)
{
  int v4; // r2
  int v5; // r3
  int j; // r5
  int BlockMaterial; // r0
  int v8; // r4
  int v9; // r4
  int v10; // r3
  int n; // r4
  int v12; // r0
  int v13; // r5
  int v14; // r4
  char *ModelGen; // r0
  int result; // r0
  int v17; // r4
  int v18; // r3
  int v19; // r3
  int v20; // r4
  int v21; // [sp+4h] [bp-70h]
  int v22; // [sp+4h] [bp-70h]
  signed int v23; // [sp+8h] [bp-6Ch]
  int v24; // [sp+8h] [bp-6Ch]
  int i; // [sp+Ch] [bp-68h]
  int k; // [sp+Ch] [bp-68h]
  int v27; // [sp+10h] [bp-64h]
  int v28; // [sp+10h] [bp-64h]
  signed int v29; // [sp+18h] [bp-5Ch]
  int m; // [sp+18h] [bp-5Ch]
  int v31; // [sp+1Ch] [bp-58h]
  int v32; // [sp+1Ch] [bp-58h]
  int v33; // [sp+20h] [bp-54h]
  int v34; // [sp+20h] [bp-54h]
  int v35; // [sp+28h] [bp-4Ch]
  int v36; // [sp+2Ch] [bp-48h]
  int v37; // [sp+30h] [bp-44h]
  int v38; // [sp+34h] [bp-40h]
  int v39; // [sp+38h] [bp-3Ch]
  unsigned int v40; // [sp+3Ch] [bp-38h]
  int v41; // [sp+40h] [bp-34h]
  int v42; // [sp+44h] [bp-30h]
  int v43; // [sp+48h] [bp-2Ch]
  int v44; // [sp+4Ch] [bp-28h]
  int v45; // [sp+50h] [bp-24h]
  _BYTE v46[8]; // [sp+5Ch] [bp-18h] BYREF
  int v47; // [sp+64h] [bp-10h] BYREF
  int v48; // [sp+68h] [bp-Ch]
  int v49; // [sp+6Ch] [bp-8h]

  v39 = *(_DWORD *)a2;
  v37 = *((_DWORD *)a2 + 1);
  v38 = *((_DWORD *)a2 + 2);
  v40 = GenRandomInt(4u);
  v44 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 31) + 28))(*((_DWORD *)this + 31));
  v45 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 31) + 44))(*((_DWORD *)this + 31)) / 2;
  v21 = *(_DWORD *)a2 - 16;
  v35 = -1;
  while ( 1 )
  {
    v4 = *(_DWORD *)a2 + 16;
    if ( v21 > v4 )
      break;
    for ( i = *((_DWORD *)a2 + 2) - 16; ; ++i )
    {
      v5 = *((_DWORD *)a2 + 2) + 16;
      if ( i > v5 )
        break;
      for ( j = v45; j >= v44; --j )
      {
        v47 = v21;
        v48 = j;
        v49 = i;
        if ( World::getBlockID(this, (const WCoord *)&v47, v4, v5) == 0 )
        {
          while ( j > 0 )
          {
            v47 = v21;
            v48 = j - 1;
            v49 = i;
            if ( World::getBlockID(this, (const WCoord *)&v47, i, v5) != 0 )
              break;
            --j;
          }
          v29 = v40;
LABEL_26:
          v5 = v40 + 3;
          if ( (int)(v40 + 3) >= v29 )
          {
            v19 = v29 % 2;
            v24 = 1 - v29 % 2;
            v28 = v29 % 2;
            if ( v29 % 4 > 1 )
            {
              v28 = -v19;
              v24 = v19 - 1;
            }
            v41 = v21 - v28;
            v33 = i - v24;
            v43 = 3;
LABEL_60:
            v36 = v33;
            v31 = v41;
            v42 = 4;
LABEL_61:
            v8 = -1;
            while ( 1 )
            {
              while ( 1 )
              {
                v47 = v31;
                v48 = v8 + j;
                v49 = v36;
                if ( v8 != -1 )
                  break;
                BlockMaterial = World::getBlockMaterial(this, (const WCoord *)&v47, v36);
                if ( (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 44))(BlockMaterial) == 0 )
                  goto LABEL_27;
                v8 = 0;
              }
              if ( World::getBlockID(this, (const WCoord *)&v47, v36, v8 + 1) != 0 )
                break;
              if ( ++v8 == 4 )
              {
                --v42;
                v31 += v28;
                v36 += v24;
                if ( v42 != 0 )
                  goto LABEL_61;
                --v43;
                v41 += v24;
                v33 -= v28;
                if ( v43 == 0 )
                {
                  v9 = (v21 - *(_DWORD *)a2) * (v21 - *(_DWORD *)a2)
                     + (j - *((_DWORD *)a2 + 1)) * (j - *((_DWORD *)a2 + 1))
                     + (i - *((_DWORD *)a2 + 2)) * (i - *((_DWORD *)a2 + 2));
                  if ( v35 >= 0 )
                  {
                    if ( v9 >= v35 )
                    {
                      v9 = v35;
                    }
                    else
                    {
                      v37 = j;
                      v38 = i;
                      v39 = v21;
                    }
                  }
                  else
                  {
                    v4 = v21;
                    v37 = j;
                    v38 = i;
                    v39 = v21;
                  }
                  v35 = v9;
                  ++v29;
                  goto LABEL_26;
                }
                goto LABEL_60;
              }
            }
          }
        }
LABEL_27:
        ;
      }
    }
    ++v21;
  }
  if ( v35 < 0 )
  {
    for ( k = *(_DWORD *)a2 - 16; k <= *(_DWORD *)a2 + 16; ++k )
    {
      for ( m = *((_DWORD *)a2 + 2) - 16; ; ++m )
      {
        v10 = *((_DWORD *)a2 + 2) + 16;
        if ( m > v10 )
          break;
        for ( n = v45; ; n = v22 - 1 )
        {
          v22 = n;
          if ( n < v44 )
            break;
          v47 = k;
          v48 = n;
          v49 = m;
          if ( World::getBlockID(this, (const WCoord *)&v47, v4, v10) == 0 )
          {
            while ( v22 > 0 )
            {
              v47 = k;
              v48 = v22 - 1;
              v49 = m;
              if ( World::getBlockID(this, (const WCoord *)&v47, m, v10) != 0 )
                break;
              --v22;
            }
            v23 = v40;
LABEL_53:
            v10 = v40 + 1;
            if ( (int)(v40 + 1) >= v23 )
            {
              v20 = v23 % 2;
              v27 = k - v23 % 2;
              v34 = m - (1 - v23 % 2);
              v32 = 4;
LABEL_64:
              v13 = -1;
              while ( 1 )
              {
                while ( 1 )
                {
                  v47 = v27;
                  v48 = v13 + v22;
                  v49 = v34;
                  if ( v13 != -1 )
                    break;
                  v12 = World::getBlockMaterial(this, (const WCoord *)&v47, v34);
                  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v12 + 44))(v12) == 0 )
                    goto LABEL_54;
                  v13 = 0;
                }
                if ( World::getBlockID(this, (const WCoord *)&v47, v34, v13 + 1) != 0 )
                  break;
                if ( ++v13 == 4 )
                {
                  --v32;
                  v27 += v20;
                  v34 += 1 - v20;
                  if ( v32 != 0 )
                    goto LABEL_64;
                  v4 = v35;
                  v14 = (k - *(_DWORD *)a2) * (k - *(_DWORD *)a2)
                      + (v22 - *((_DWORD *)a2 + 1)) * (v22 - *((_DWORD *)a2 + 1))
                      + (m - *((_DWORD *)a2 + 2)) * (m - *((_DWORD *)a2 + 2));
                  if ( v35 >= 0 )
                  {
                    if ( v14 >= v35 )
                    {
                      v14 = v35;
                    }
                    else
                    {
                      v4 = m;
                      v38 = m;
                      v37 = v22;
                      v39 = k;
                    }
                  }
                  else
                  {
                    v38 = m;
                    v37 = v22;
                    v39 = k;
                  }
                  v35 = v14;
                  ++v23;
                  goto LABEL_53;
                }
              }
            }
          }
LABEL_54:
          ;
        }
      }
    }
  }
  v47 = v39;
  v48 = v37;
  v49 = v38;
  World::syncLoadChunk((ChunkProvider **)this, (const WCoord *)&v47, 5);
  ChunkRandGen::ChunkRandGen((ChunkRandGen *)v46);
  ModelGen = ChunkProvider::getModelGen(*((ChunkProvider **)this + 31), "portal");
  (*(void (__fastcall **)(char *, World *, _BYTE *, int *))(*(_DWORD *)ModelGen + 8))(ModelGen, this, v46, &v47);
  result = v47;
  v17 = v49;
  v18 = v48 + 1;
  *((_DWORD *)this + 28) = v47;
  *((_DWORD *)this + 30) = v17;
  *((_DWORD *)this + 29) = v18;
  return result;
}

