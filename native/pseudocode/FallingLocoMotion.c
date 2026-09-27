// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FallingLocoMotion

//======================================================================
// FallingLocoMotion::~FallingLocoMotion()
// address: 0x002EC204   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17FallingLocoMotionD1Ev'
void __fastcall FallingLocoMotion::~FallingLocoMotion(FallingLocoMotion *this)
{
  *(_DWORD *)this = &off_462108;
  ActorLocoMotion::~ActorLocoMotion(this);
}


//======================================================================
// FallingLocoMotion::~FallingLocoMotion()
// address: 0x002EC220   size: 0x12 (18 bytes)
//======================================================================
void __fastcall FallingLocoMotion::~FallingLocoMotion(FallingLocoMotion *this)
{
  FallingLocoMotion::~FallingLocoMotion(this);
  operator delete(this);
}


//======================================================================
// FallingLocoMotion::FallingLocoMotion(ClientActor *)
// address: 0x002EC394   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN17FallingLocoMotionC1EP11ClientActor'
void __fastcall FallingLocoMotion::FallingLocoMotion(FallingLocoMotion *this, ClientActor *a2)
{
  ActorLocoMotion::ActorLocoMotion(this, a2);
  *(_DWORD *)this = &off_462108;
  *((_DWORD *)this + 6) = 98;
  *((_DWORD *)this + 5) = 98;
  *((_DWORD *)this + 7) = 49;
  *((_DWORD *)this + 37) = 0;
}


//======================================================================
// FallingLocoMotion::tick(void)
// address: 0x002EC584   size: 0x184 (388 bytes)
//======================================================================
int __fastcall FallingLocoMotion::tick(FallingLocoMotion *this)
{
  int *v2; // r7
  int *v3; // r6
  int result; // r0
  int v5; // r2
  int v6; // r1
  int v7; // r3
  int *v8; // r4
  int *v9; // r6
  int Material; // r0
  unsigned int v11; // [sp+Ch] [bp-28h]
  World *v12; // [sp+10h] [bp-24h]
  unsigned int v13; // [sp+14h] [bp-20h]
  unsigned int v14; // [sp+18h] [bp-1Ch] BYREF
  unsigned int v15; // [sp+1Ch] [bp-18h]
  int v16; // [sp+20h] [bp-14h]
  _DWORD v17[4]; // [sp+24h] [bp-10h] BYREF

  v2 = (int *)((char *)this + 148);
  ActorLocoMotion::tick(*(float *)&this);
  ++*v2;
  *((float *)this + 19) = *((float *)this + 19) - 4.0;
  ActorLocoMotion::doMoveStep(this, (FallingLocoMotion *)((char *)this + 72));
  *((float *)this + 18) = *((float *)this + 18) * 0.98;
  *((float *)this + 19) = *((float *)this + 19) * 0.98;
  v3 = *((int **)this + 28);
  *((float *)this + 20) = *((float *)this + 20) * 0.98;
  v12 = (World *)v3[13];
  v11 = CoordDivBlock(*((_DWORD *)this + 8));
  v13 = CoordDivBlock(*((_DWORD *)this + 9));
  result = CoordDivBlock(*((_DWORD *)this + 10));
  v5 = v11;
  v6 = *v2;
  v14 = v11;
  v15 = v13;
  v16 = result;
  if ( v6 == 1 )
  {
    if ( World::getBlockID(v12, (const WCoord *)&v14, v11, v13) != v3[44] )
      return ClientActor::setNeedClear((ClientActor *)v3, 0);
    result = World::setBlockAll(v12, (const WCoord *)&v14, 0, 0, 3);
  }
  v7 = *((unsigned __int8 *)this + 124);
  if ( *((_BYTE *)this + 124) == 0 )
  {
    if ( *v2 <= 100 || v15 - 1 <= 0xFF && *v2 <= 600 )
      return result;
    ActorFallingSand::dropItems((int)v3);
    return ClientActor::setNeedClear((ClientActor *)v3, 0);
  }
  *((float *)this + 18) = *((float *)this + 18) * 0.7;
  *((float *)this + 20) = *((float *)this + 20) * 0.7;
  *((float *)this + 19) = *((float *)this + 19) * -0.5;
  result = World::getBlockID(v12, (const WCoord *)&v14, v5, v7);
  if ( result != 841 )
  {
    ClientActor::setNeedClear((ClientActor *)v3, 0);
    v8 = v3 + 44;
    if ( World::canPlaceActorOnSide(v12, v3[44], (const WCoord *)&v14, 1, 5, nullptr) == 0 )
      return ActorFallingSand::dropItems((int)v3);
    v17[1] = v15 + dword_51665C;
    v17[0] = v14 + dword_516658;
    v17[2] = v16 + dword_516660;
    if ( BlockSand::canFallBelow(v12, (World *)v17, (const WCoord *)(v16 + dword_516660)) )
    {
      return ActorFallingSand::dropItems((int)v3);
    }
    else
    {
      v9 = v3 + 45;
      World::setBlockAll(v12, (const WCoord *)&v14, *v8, *v9, 3);
      Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, *v8);
      return (*(int (__fastcall **)(int, World *, unsigned int *, int))(*(_DWORD *)Material + 224))(
               Material,
               v12,
               &v14,
               *v9);
    }
  }
  return result;
}

