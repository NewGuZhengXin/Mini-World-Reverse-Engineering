// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FlyingLocoMotion

//======================================================================
// FlyingLocoMotion::~FlyingLocoMotion()
// address: 0x002D3028   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16FlyingLocoMotionD1Ev'
void __fastcall FlyingLocoMotion::~FlyingLocoMotion(FlyingLocoMotion *this)
{
  *(_DWORD *)this = &off_4605C8;
  ActorLocoMotion::~ActorLocoMotion(this);
}


//======================================================================
// FlyingLocoMotion::~FlyingLocoMotion()
// address: 0x002D3044   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FlyingLocoMotion::~FlyingLocoMotion(FlyingLocoMotion *this)
{
  FlyingLocoMotion::~FlyingLocoMotion(this);
  operator delete(this);
}


//======================================================================
// FlyingLocoMotion::FlyingLocoMotion(ClientActor *)
// address: 0x002D31EC   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN16FlyingLocoMotionC1EP11ClientActor'
void __fastcall FlyingLocoMotion::FlyingLocoMotion(FlyingLocoMotion *this, ClientActor *a2)
{
  ActorLocoMotion::ActorLocoMotion(this, a2);
  *(_DWORD *)this = &off_4605C8;
  *((_DWORD *)this + 6) = 98;
  *((_DWORD *)this + 5) = 98;
  *((_DWORD *)this + 7) = 49;
}


//======================================================================
// FlyingLocoMotion::tick(void)
// address: 0x002D3444   size: 0x13C (316 bytes)
//======================================================================
int __fastcall FlyingLocoMotion::tick(FlyingLocoMotion *this)
{
  float v2; // r0
  float v3; // r7
  float v4; // r0
  float v5; // r0
  unsigned int v6; // r0
  int v7; // r2
  int v8; // r3
  ClientActor *v9; // r5
  World *v10; // r6
  int v11; // r2
  int result; // r0
  int BlockID; // r1
  int Material; // r7
  int v15; // r2
  int BlockData; // r3
  unsigned int v17; // [sp+Ch] [bp-28h]
  void (__fastcall *v18)(int, World *, _DWORD *, int, int, int); // [sp+Ch] [bp-28h]
  float v19; // [sp+10h] [bp-24h]
  float v20; // [sp+14h] [bp-20h]
  unsigned int v21; // [sp+18h] [bp-1Ch]
  unsigned int v22; // [sp+1Ch] [bp-18h]
  _DWORD v23[4]; // [sp+24h] [bp-10h] BYREF

  ActorLocoMotion::tick(this);
  ActorLocoMotion::doMoveStep(this, (FlyingLocoMotion *)((char *)this + 72));
  v2 = *((float *)this + 18) * 0.98;
  *((float *)this + 18) = v2;
  v3 = v2;
  v4 = *((float *)this + 19) * 0.98;
  *((float *)this + 19) = v4;
  v19 = v4;
  v5 = *((float *)this + 20) * 0.98;
  *((float *)this + 20) = v5;
  v20 = v5;
  v21 = CoordDivBlock(*((_DWORD *)this + 8));
  v17 = CoordDivBlock(*((_DWORD *)this + 9));
  v6 = CoordDivBlock(*((_DWORD *)this + 10));
  v9 = *((ClientActor **)this + 28);
  v22 = v6;
  v10 = *((World **)v9 + 13);
  v23[0] = v21;
  v23[2] = v6;
  v23[1] = v17;
  if ( v17 > 0xFF )
  {
    ActorFlyingBlock::dropItems((int)v9);
    return ClientActor::setNeedClear(v9, 0);
  }
  if ( (float)((float)((float)(v3 * v3) + (float)(v19 * v19)) + (float)(v20 * v20)) < 1.0
    || (v11 = v17 - *((_DWORD *)v9 + 48),
        result = v11 >> 31,
        v7 = ((v21 - *((_DWORD *)v9 + 47) + ((int)(v21 - *((_DWORD *)v9 + 47)) >> 31))
            ^ ((int)(v21 - *((_DWORD *)v9 + 47)) >> 31))
           + ((v11 + (v11 >> 31)) ^ (v11 >> 31))
           + ((v22 - *((_DWORD *)v9 + 49) + ((int)(v22 - *((_DWORD *)v9 + 49)) >> 31))
            ^ ((int)(v22 - *((_DWORD *)v9 + 49)) >> 31)),
        v8 = *((_DWORD *)v9 + 46),
        v7 >= v8) )
  {
    BlockID = World::getBlockID(v10, (const WCoord *)v23, v7, v8);
    if ( BlockID > 0 )
    {
      Material = BlockMaterialMgr::getMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   BlockID);
      v18 = *(void (__fastcall **)(int, World *, _DWORD *, int, int, int))(*(_DWORD *)Material + 180);
      BlockData = World::getBlockData(v10, (const WCoord *)v23, v15, (int)v18);
      v18(Material, v10, v23, BlockData, 1, 1065353216);
    }
    World::setBlockAll(v10, (const WCoord *)v23, *((_DWORD *)v9 + 44), *((_DWORD *)v9 + 45), 3);
    return ClientActor::setNeedClear(v9, 0);
  }
  return result;
}

