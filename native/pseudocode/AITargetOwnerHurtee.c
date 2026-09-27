// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AITargetOwnerHurtee

//======================================================================
// AITargetOwnerHurtee::~AITargetOwnerHurtee()
// address: 0x00301E58   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN19AITargetOwnerHurteeD1Ev'
void __fastcall AITargetOwnerHurtee::~AITargetOwnerHurtee(AITargetOwnerHurtee *this)
{
  *(_DWORD *)this = &off_462EE8;
  AITarget::~AITarget(this);
}


//======================================================================
// AITargetOwnerHurtee::~AITargetOwnerHurtee()
// address: 0x00301E74   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AITargetOwnerHurtee::~AITargetOwnerHurtee(AITargetOwnerHurtee *this)
{
  AITargetOwnerHurtee::~AITargetOwnerHurtee(this);
  operator delete(this);
}


//======================================================================
// AITargetOwnerHurtee::shouldExecute(void)
// address: 0x00301E86   size: 0x40 (64 bytes)
//======================================================================
int __fastcall AITargetOwnerHurtee::shouldExecute(AITargetOwnerHurtee *this)
{
  ClientActor *v2; // r0
  ClientActor *TamedOwner; // r0
  ClientActor *v4; // r4
  ClientActor *BeHurtTarget; // r6
  int result; // r0

  v2 = *((ClientActor **)this + 3);
  if ( *((_DWORD *)v2 + 31) == 0 )
    return 0;
  TamedOwner = ClientActor::getTamedOwner(v2);
  v4 = TamedOwner;
  if ( TamedOwner == nullptr )
    return 0;
  BeHurtTarget = (ClientActor *)ClientActor::getBeHurtTarget(TamedOwner);
  if ( *((_DWORD *)this + 6) == *((_DWORD *)v4 + 26) )
    return 0;
  if ( !AITarget::isSuitableTarget((ClientActor **)this, BeHurtTarget) )
    return 0;
  result = ClientActor::followOwnerAttack(*((ClientActor **)this + 3), BeHurtTarget, v4);
  if ( result == 0 )
    return 0;
  return result;
}


//======================================================================
// AITargetOwnerHurtee::startExecuting(void)
// address: 0x00301EC6   size: 0x28 (40 bytes)
//======================================================================
int __fastcall AITargetOwnerHurtee::startExecuting(ClientActor **this)
{
  ClientPlayer *TamedOwner; // r0
  ClientActor *v3; // r5
  ClientActor *BeHurtTarget; // r0

  TamedOwner = ClientActor::getTamedOwner(*(this + 3));
  if ( TamedOwner != nullptr )
  {
    v3 = *(this + 3);
    *(this + 6) = *((ClientActor **)TamedOwner + 26);
    BeHurtTarget = (ClientActor *)ClientActor::getBeHurtTarget(TamedOwner);
    ClientActor::setToAttackTarget(v3, BeHurtTarget);
  }
  return AITarget::startExecuting((int)this);
}


//======================================================================
// AITargetOwnerHurtee::AITargetOwnerHurtee(ClientActor *)
// address: 0x00301EF0   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN19AITargetOwnerHurteeC2EP11ClientActor'
void __fastcall AITargetOwnerHurtee::AITargetOwnerHurtee(AITargetOwnerHurtee *this, ClientActor *a2)
{
  AITarget::AITarget(this, a2, false);
  *(_DWORD *)this = &off_462EE8;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 1;
}

