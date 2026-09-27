// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AITargetOwnerHurter

//======================================================================
// AITargetOwnerHurter::~AITargetOwnerHurter()
// address: 0x00302BF0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN19AITargetOwnerHurterD1Ev'
void __fastcall AITargetOwnerHurter::~AITargetOwnerHurter(AITargetOwnerHurter *this)
{
  *(_DWORD *)this = &off_4630E0;
  AITarget::~AITarget(this);
}


//======================================================================
// AITargetOwnerHurter::~AITargetOwnerHurter()
// address: 0x00302C0C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AITargetOwnerHurter::~AITargetOwnerHurter(AITargetOwnerHurter *this)
{
  AITargetOwnerHurter::~AITargetOwnerHurter(this);
  operator delete(this);
}


//======================================================================
// AITargetOwnerHurter::startExecuting(void)
// address: 0x00302C20   size: 0x42 (66 bytes)
//======================================================================
int __fastcall AITargetOwnerHurter::startExecuting(ClientActor **this)
{
  ClientPlayer *TamedOwner; // r0
  ClientActor *v3; // r5
  void *v4; // r0

  TamedOwner = ClientActor::getTamedOwner(*(this + 3));
  if ( TamedOwner != nullptr )
  {
    v3 = *(this + 3);
    *(this + 6) = *((ClientActor **)TamedOwner + 44);
    v4 = *((void **)TamedOwner + 43);
    if ( v4 != nullptr )
      v4 = _dynamic_cast(
             v4,
             (const struct __class_type_info *)&`typeinfo for'ClientActor,
             (const struct __class_type_info *)&`typeinfo for'ActorLiving,
             0);
    ClientActor::setToAttackTarget(v3, (ClientActor *)v4);
  }
  return AITarget::startExecuting((int)this);
}


//======================================================================
// AITargetOwnerHurter::shouldExecute(void)
// address: 0x00302C6C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall AITargetOwnerHurter::shouldExecute(AITargetOwnerHurter *this)
{
  ClientActor *v2; // r0
  ClientPlayer *TamedOwner; // r0
  ClientActor *v4; // r4
  void *v5; // r0
  ClientActor *v6; // r6
  int result; // r0

  v2 = *((ClientActor **)this + 3);
  if ( *((_DWORD *)v2 + 31) == 0 )
    return 0;
  TamedOwner = ClientActor::getTamedOwner(v2);
  v4 = TamedOwner;
  if ( TamedOwner == nullptr )
    return 0;
  v5 = *((void **)TamedOwner + 43);
  if ( v5 != nullptr )
    v5 = _dynamic_cast(
           v5,
           (const struct __class_type_info *)&`typeinfo for'ClientActor,
           (const struct __class_type_info *)&`typeinfo for'ActorLiving,
           0);
  v6 = (ClientActor *)v5;
  if ( *((_DWORD *)this + 6) == *((_DWORD *)v4 + 44) )
    return 0;
  if ( !AITarget::isSuitableTarget((ClientActor **)this, (ClientActor *)v5) )
    return 0;
  result = ClientActor::followOwnerAttack(*((ClientActor **)this + 3), v6, v4);
  if ( result == 0 )
    return 0;
  return result;
}


//======================================================================
// AITargetOwnerHurter::AITargetOwnerHurter(ClientActor *)
// address: 0x00302CD0   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN19AITargetOwnerHurterC2EP11ClientActor'
void __fastcall AITargetOwnerHurter::AITargetOwnerHurter(AITargetOwnerHurter *this, ClientActor *a2)
{
  AITarget::AITarget(this, a2, false);
  *(_DWORD *)this = &off_4630E0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 1;
}

