// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldPiston

//======================================================================
// WorldPiston::getObjType(void)
// address: 0x002D87FC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall WorldPiston::getObjType(WorldPiston *this)
{
  return 15;
}


//======================================================================
// WorldPiston::~WorldPiston()
// address: 0x002D880C   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN11WorldPistonD1Ev'
void __fastcall WorldPiston::~WorldPiston(void **this)
{
  *this = &off_460D68;
  sub_2D8800(*(this + 17));
  *this = &off_45C248;
}


//======================================================================
// WorldPiston::~WorldPiston()
// address: 0x002D8838   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WorldPiston::~WorldPiston(void **this)
{
  WorldPiston::~WorldPiston(this);
  operator delete(this);
}


//======================================================================
// WorldPiston::load(void const*)
// address: 0x002D884A   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall WorldPiston::load(WorldPiston *this, flatbuffers::Table *a2)
{
  int OptionalFieldOffset; // r0
  flatbuffers::Table *v5; // r1
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int v10; // r0
  char v11; // r3
  int v12; // r0
  int v13; // r3
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 4u);
  if ( OptionalFieldOffset != 0 )
    v5 = (flatbuffers::Table *)((char *)a2 + OptionalFieldOffset + *(_DWORD *)((char *)a2 + OptionalFieldOffset));
  else
    v5 = nullptr;
  WorldContainer::loadContainerCommon((int)this, v5);
  v6 = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
  v7 = 0;
  if ( v6 != 0 )
    v7 = *(unsigned __int16 *)((char *)a2 + v6);
  *((_DWORD *)this + 11) = v7;
  v8 = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
  v9 = 0;
  if ( v8 != 0 )
    v9 = *(unsigned __int16 *)((char *)a2 + v8);
  *((_DWORD *)this + 12) = v9;
  v10 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xAu);
  v11 = 0;
  if ( v10 != 0 )
    v11 = *((_BYTE *)a2 + v10);
  *((_DWORD *)this + 13) = v11;
  v12 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xCu);
  v13 = 0;
  if ( v12 != 0 )
    v13 = *((unsigned __int8 *)a2 + v12);
  *((_BYTE *)this + 56) = v13 != 0;
  v14 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xEu);
  v15 = 0;
  if ( v14 != 0 )
    v15 = *((unsigned __int8 *)a2 + v14);
  *((_BYTE *)this + 57) = v15 != 0;
  v16 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0x10u);
  v17 = 0;
  if ( v16 != 0 )
    v17 = *(_DWORD *)((char *)a2 + v16);
  *((_DWORD *)this + 16) = v17;
  return 1;
}


//======================================================================
// WorldPiston::WorldPiston(void)
// address: 0x002D88F0   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN11WorldPistonC2Ev'
void __fastcall WorldPiston::WorldPiston(WorldPiston *this)
{
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 40) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *(_DWORD *)this = &off_460D68;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
}


//======================================================================
// WorldPiston::WorldPiston(WCoord const&,int,int,int,bool,bool)
// address: 0x002D8920   size: 0x56 (86 bytes)
//======================================================================
// Alternative name is '_ZN11WorldPistonC2ERK6WCoordiiibb'
int __fastcall WorldPiston::WorldPiston(int result, _DWORD *a2, int a3, int a4, int a5, char a6, char a7)
{
  *(_DWORD *)result = &off_45C270;
  *(_DWORD *)(result + 4) = 0;
  *(_BYTE *)(result + 8) = 0;
  *(_DWORD *)(result + 16) = *a2;
  *(_DWORD *)(result + 20) = a2[1];
  *(_DWORD *)(result + 24) = a2[2];
  *(_BYTE *)(result + 40) = 0;
  *(_DWORD *)(result + 48) = a4;
  *(_DWORD *)(result + 44) = a3;
  *(_DWORD *)result = &off_460D68;
  *(_DWORD *)(result + 52) = a5;
  *(_BYTE *)(result + 56) = a6;
  *(_BYTE *)(result + 57) = a7;
  *(_DWORD *)(result + 60) = 0;
  *(_DWORD *)(result + 64) = 0;
  *(_DWORD *)(result + 68) = 0;
  *(_DWORD *)(result + 72) = 0;
  *(_DWORD *)(result + 76) = 0;
  return result;
}


//======================================================================
// WorldPiston::getOffset(float)
// address: 0x002D8980   size: 0xA0 (160 bytes)
//======================================================================
WorldPiston *__fastcall WorldPiston::getOffset(WorldPiston *this, float a2, float a3)
{
  float v4; // r7
  float v6; // r4
  float v7; // r0
  float v8; // r1
  int *v9; // r4
  int v10; // r0
  int v11; // r1
  int v12; // r3
  int v13; // r1

  v4 = *(float *)(LODWORD(a2) + 60);
  v6 = a3;
  if ( *(_BYTE *)(LODWORD(a2) + 56) != 0 )
  {
    if ( a3 > 1.0 )
      v6 = 1.0;
    v7 = v4 + (float)((float)(*(float *)(LODWORD(a2) + 64) - v4) * v6);
    v8 = 1.0;
  }
  else
  {
    if ( a3 > 1.0 )
      v6 = 1.0;
    v8 = v4 + (float)((float)(*(float *)(LODWORD(a2) + 64) - v4) * v6);
    v7 = 1.0;
  }
  v9 = &g_DirectionCoord[3 * *(_DWORD *)(LODWORD(a2) + 52)];
  v10 = (int)(float)((float)(v7 - v8) * 100.0);
  v11 = v9[2];
  *((_DWORD *)this + 1) = v9[1] * v10;
  v12 = v11 * v10;
  v13 = *v9;
  *((_DWORD *)this + 2) = v12;
  *(_DWORD *)this = v10 * v13;
  return this;
}


//======================================================================
// WorldPiston::clearPistonTileEntity(void)
// address: 0x002D8A28   size: 0x52 (82 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> WorldPiston::clearPistonTileEntity(WorldPiston *this)
{
  int v2; // r3
  int v3; // r2
  int v4; // r3

  if ( *((float *)this + 15) < 1.0 )
  {
    v2 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 16) = 1065353216;
    *((_DWORD *)this + 15) = 1065353216;
    WorldContainerMgr::destroyContainer(*(WorldContainerMgr **)(v2 + 128), (WorldPiston *)((char *)this + 16));
    if ( World::getBlockID(*((World **)this + 3), (WorldPiston *)((char *)this + 16), v3, v4) == 841 )
    {
      World::setBlockAll(
        *((World **)this + 3),
        (WorldPiston *)((char *)this + 16),
        *((_DWORD *)this + 11),
        *((_DWORD *)this + 12),
        3);
      World::notifyOneBlockOfNeighborChange(
        *((World **)this + 3),
        (WorldPiston *)((char *)this + 16),
        *((_DWORD *)this + 11));
    }
  }
}


//======================================================================
// WorldPiston::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002D8BD4   size: 0x48 (72 bytes)
//======================================================================
int __fastcall WorldPiston::save(WorldPiston *this, flatbuffers::FlatBufferBuilder *a2)
{
  int v4; // r0
  int ContainerPiston; // r0

  v4 = WorldContainer::saveContainerCommon(this, a2);
  ContainerPiston = FBSave::CreateContainerPiston(
                      (const void **)a2,
                      v4,
                      *((unsigned __int16 *)this + 22),
                      *((unsigned __int16 *)this + 24),
                      *((_DWORD *)this + 13),
                      *((_BYTE *)this + 56),
                      *((_BYTE *)this + 57),
                      *((float *)this + 16));
  return FBSave::CreateChunkContainer(a2, 5u, ContainerPiston);
}


//======================================================================
// WorldPiston::updatePushedObjects(float,float)
// address: 0x002D8D30   size: 0xFE (254 bytes)
//======================================================================
void __fastcall WorldPiston::updatePushedObjects(WorldPiston *this, float a2, float a3)
{
  float v5; // r0
  float v6; // r6
  BlockPistonMoving *Material; // r0
  World *v8; // r0
  int *v9; // r7
  float v10; // r1
  unsigned int i; // r6
  int v12; // r3
  unsigned int v13; // r2
  float v14; // [sp+14h] [bp-38h]
  char *v15; // [sp+18h] [bp-34h] BYREF
  char *v16; // [sp+1Ch] [bp-30h]
  int v17; // [sp+20h] [bp-2Ch]
  float v18[3]; // [sp+24h] [bp-28h] BYREF
  int v19[7]; // [sp+30h] [bp-1Ch] BYREF

  if ( *((_BYTE *)this + 56) != 0 )
  {
    v5 = 1.0;
  }
  else
  {
    v5 = a2;
    a2 = 1.0;
  }
  v6 = v5 - a2;
  Material = (BlockPistonMoving *)BlockMaterialMgr::getMaterial(
                                    (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                    841);
  if ( BlockPistonMoving::getAABB(
         Material,
         (CollideAABB *)v19,
         *((World **)this + 3),
         (WorldPiston *)((char *)this + 16),
         *((_DWORD *)this + 11),
         v6,
         *((_DWORD *)this + 13)) != 0 )
  {
    v16 = nullptr;
    v17 = 0;
    v8 = *((World **)this + 3);
    v15 = nullptr;
    World::getActorsInBox(v8, (void **)&v15, v19);
    if ( v15 != v16 )
    {
      std::vector<ClientActor *>::_M_range_insert<__gnu_cxx::__normal_iterator<ClientActor **,std::vector<ClientActor *>>>(
        (void **)this + 17,
        *((void **)this + 18),
        v15,
        (int)v16);
      v9 = &g_DirectionCoord[3 * *((_DWORD *)this + 13)];
      v14 = (float)v9[2] * (float)(a3 * 100.0);
      v10 = (float)v9[1] * (float)(a3 * 100.0);
      v18[0] = (float)*v9 * (float)(a3 * 100.0);
      v18[1] = v10;
      v18[2] = v14;
      for ( i = 0; ; ++i )
      {
        v12 = *((_DWORD *)this + 17);
        v13 = (*((_DWORD *)this + 18) - v12) >> 2;
        if ( i >= v13 )
          break;
        ActorLocoMotion::doMoveStep(*(ActorLocoMotion **)(*(_DWORD *)(4 * i + v12) + 68), (const Ogre::Vector3 *)v18);
      }
      if ( v13 != 0 )
        *((_DWORD *)this + 18) = v12;
    }
    sub_2D8800(v15);
  }
}


//======================================================================
// WorldPiston::updateTick(void)
// address: 0x002D8E40   size: 0xA2 (162 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> WorldPiston::updateTick(WorldPiston *this)
{
  float v1; // r5
  int v3; // r2
  int v4; // r3

  v1 = *((float *)this + 16);
  *((float *)this + 15) = v1;
  if ( v1 < 1.0 )
  {
    if ( (float)(v1 + 0.5) >= 1.0 )
      *((_DWORD *)this + 16) = 1065353216;
    else
      *((float *)this + 16) = v1 + 0.5;
    if ( *((_BYTE *)this + 56) != 0 )
      WorldPiston::updatePushedObjects(this, *((float *)this + 16), (float)(*((float *)this + 16) - v1) + 0.0625);
  }
  else
  {
    WorldPiston::updatePushedObjects(this, 1.0, 0.25);
    WorldContainerMgr::destroyContainer(
      *(WorldContainerMgr **)(*((_DWORD *)this + 3) + 128),
      (WorldPiston *)((char *)this + 16));
    if ( World::getBlockID(*((World **)this + 3), (WorldPiston *)((char *)this + 16), v3, v4) == 841 )
    {
      World::setBlockAll(
        *((World **)this + 3),
        (WorldPiston *)((char *)this + 16),
        *((_DWORD *)this + 11),
        *((_DWORD *)this + 12),
        3);
      World::notifyOneBlockOfNeighborChange(
        *((World **)this + 3),
        (WorldPiston *)((char *)this + 16),
        *((_DWORD *)this + 11));
    }
  }
}

