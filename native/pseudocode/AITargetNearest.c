// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AITargetNearest

//======================================================================
// AITargetNearest::~AITargetNearest()
// address: 0x003032D0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15AITargetNearestD1Ev'
void __fastcall AITargetNearest::~AITargetNearest(AITargetNearest *this)
{
  *(_DWORD *)this = &off_463228;
  AITarget::~AITarget(this);
}


//======================================================================
// AITargetNearest::~AITargetNearest()
// address: 0x003032EC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AITargetNearest::~AITargetNearest(AITargetNearest *this)
{
  AITargetNearest::~AITargetNearest(this);
  operator delete(this);
}


//======================================================================
// AITargetNearest::startExecuting(void)
// address: 0x003032FE   size: 0x14 (20 bytes)
//======================================================================
int __fastcall AITargetNearest::startExecuting(ClientActor **this)
{
  ClientActor::setToAttackTarget(*(this + 3), *(this + 1));
  return AITarget::startExecuting((int)this);
}


//======================================================================
// AITargetNearest::shouldExecute(void)
// address: 0x00303312   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall AITargetNearest::shouldExecute(AITargetNearest *this)
{
  int isCreativeMode; // r5
  float v3; // r0
  int v4; // r1
  ClientActorMgr *ActorMgr; // r7
  _DWORD *v6; // r0
  _DWORD *v7; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r0
  ClientActor *v11; // r1
  _DWORD v13[4]; // [sp+4h] [bp-10h] BYREF

  isCreativeMode = World::isCreativeMode(*(World **)(*((_DWORD *)this + 3) + 52));
  if ( isCreativeMode != 0 )
    return 0;
  if ( *((float *)this + 7) <= 0.0
    || (v3 = COERCE_FLOAT(ActorLocoMotion::getBrightness(*(ActorLocoMotion **)(*((_DWORD *)this + 3) + 68)))) < *((float *)this + 7) )
  {
    v4 = *((_DWORD *)this + 6);
    if ( v4 <= 0 || GenRandomInt(0, v4) == 0 )
    {
      ActorMgr = (ClientActorMgr *)ClientActor::getActorMgr(*((ClientActor **)this + 3));
      v6 = *((_DWORD **)this + 3);
      v7 = (_DWORD *)v6[17];
      v13[0] = v7[8];
      v8 = v7[9];
      v9 = v7[10];
      v13[1] = v8;
      v13[2] = v9;
      v10 = (*(int (__fastcall **)(_DWORD *))(*v6 + 112))(v6);
      v11 = ClientActorMgr::selectNearPlayer(ActorMgr, (const WCoord *)v13, v10);
      if ( v11 != nullptr )
      {
        AIBase::setTarget(this, v11);
        return 1;
      }
    }
  }
  else if ( v3 > *((float *)this + 7) && GenRandomInt(0, 99) == 0 )
  {
    ClientActor::setToAttackTarget(*((ClientActor **)this + 3), nullptr);
  }
  return isCreativeMode;
}


//======================================================================
// AITargetNearest::AITargetNearest(ClientActor *,int,bool,float)
// address: 0x003033BC   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN15AITargetNearestC2EP11ClientActoribf'
void __fastcall AITargetNearest::AITargetNearest(AITargetNearest *this, ClientActor *a2, int a3, bool a4, float a5)
{
  AITarget::AITarget(this, a2, a4);
  *((_DWORD *)this + 6) = a3;
  *(_DWORD *)this = &off_463228;
  *((float *)this + 7) = a5;
  *((_DWORD *)this + 2) = 1;
}

