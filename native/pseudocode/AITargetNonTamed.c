// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AITargetNonTamed

//======================================================================
// AITargetNonTamed::~AITargetNonTamed()
// address: 0x003023E0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16AITargetNonTamedD1Ev'
void __fastcall AITargetNonTamed::~AITargetNonTamed(AITargetNonTamed *this)
{
  *(_DWORD *)this = &off_462FC8;
  AITarget::~AITarget(this);
}


//======================================================================
// AITargetNonTamed::~AITargetNonTamed()
// address: 0x003023FC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AITargetNonTamed::~AITargetNonTamed(AITargetNonTamed *this)
{
  AITargetNonTamed::~AITargetNonTamed(this);
  operator delete(this);
}


//======================================================================
// AITargetNonTamed::startExecuting(void)
// address: 0x0030240E   size: 0x14 (20 bytes)
//======================================================================
int __fastcall AITargetNonTamed::startExecuting(ClientActor **this)
{
  ClientActor::setToAttackTarget(*(this + 3), *(this + 1));
  return AITarget::startExecuting((int)this);
}


//======================================================================
// AITargetNonTamed::shouldExecute(void)
// address: 0x00302422   size: 0x46 (70 bytes)
//======================================================================
ClientActor *__fastcall AITargetNonTamed::shouldExecute(AITargetNonTamed *this)
{
  ClientActor *result; // r0
  int v3; // r1
  ActorLocoMotion **v4; // r5
  int v5; // r6
  int v6; // r0

  if ( *(_DWORD *)(*((_DWORD *)this + 3) + 124) != 0 )
    return nullptr;
  v3 = *((_DWORD *)this + 7);
  if ( v3 > 0 && GenRandomInt(0, v3) != 0 )
    return nullptr;
  v4 = *((ActorLocoMotion ***)this + 3);
  v5 = *((_DWORD *)this + 6);
  v6 = (*((int (__fastcall **)(ActorLocoMotion **))*v4 + 28))(v4);
  result = (ClientActor *)ClientMob::selectNearMob(v4, v5, 1, v6);
  if ( result != nullptr )
  {
    AIBase::setTarget(this, result);
    return (ClientActor *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// AITargetNonTamed::AITargetNonTamed(ClientActor *,int,int)
// address: 0x00302468   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN16AITargetNonTamedC2EP11ClientActorii'
void __fastcall AITargetNonTamed::AITargetNonTamed(AITargetNonTamed *this, ClientActor *a2, int a3, int a4)
{
  AITarget::AITarget(this, a2, false);
  *((_DWORD *)this + 6) = a3;
  *((_DWORD *)this + 7) = a4;
  *(_DWORD *)this = &off_462FC8;
  *((_DWORD *)this + 2) = 1;
}

