// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIFollowParent

//======================================================================
// AIFollowParent::startExecuting(void)
// address: 0x003035E8   size: 0x6 (6 bytes)
//======================================================================
int __fastcall AIFollowParent::startExecuting(int this)
{
  *(_DWORD *)(this + 20) = 0;
  return this;
}


//======================================================================
// AIFollowParent::resetTask(void)
// address: 0x003035EE   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIFollowParent::resetTask(AIFollowParent *this)
{
  ;
}


//======================================================================
// AIFollowParent::~AIFollowParent()
// address: 0x003035F0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14AIFollowParentD1Ev'
void __fastcall AIFollowParent::~AIFollowParent(AIFollowParent *this)
{
  *(_DWORD *)this = &off_463298;
  AIBase::~AIBase(this);
}


//======================================================================
// AIFollowParent::~AIFollowParent()
// address: 0x0030360C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIFollowParent::~AIFollowParent(AIFollowParent *this)
{
  AIFollowParent::~AIFollowParent(this);
  operator delete(this);
}


//======================================================================
// AIFollowParent::continueExecuting(void)
// address: 0x00303620   size: 0x44 (68 bytes)
//======================================================================
int __fastcall AIFollowParent::continueExecuting(AIFollowParent *this)
{
  ClientActor *v1; // r4
  double DistanceSqToEntity; // r4
  int v4; // r3

  v1 = *((ClientActor **)this + 1);
  if ( v1 == nullptr )
    return 0;
  if ( ClientActor::isDead(*((ClientActor **)this + 1)) != 0 )
    return 0;
  DistanceSqToEntity = ClientActor::getDistanceSqToEntity((ClientActor *)*((_DWORD *)this + 3), v1);
  if ( DistanceSqToEntity < 90000.0 )
    return 0;
  v4 = 1;
  if ( DistanceSqToEntity > 2560000.0 )
    return 0;
  return v4;
}


//======================================================================
// AIFollowParent::shouldExecute(void)
// address: 0x00303678   size: 0x48 (72 bytes)
//======================================================================
int __fastcall AIFollowParent::shouldExecute(AIFollowParent *this)
{
  int v2; // r0
  ClientActor *v4; // r4

  v2 = *((_DWORD *)this + 3);
  if ( *(int *)(v2 + 196) >= 0 )
    return 0;
  v4 = (ClientActor *)ClientMob::selectNearMob((ActorLocoMotion **)v2, *(_DWORD *)(v2 + 200), 0, 900);
  if ( v4 == nullptr || ClientActor::getDistanceSqToEntity((ClientActor *)*((_DWORD *)this + 3), v4) < 90000.0 )
    return 0;
  AIBase::setTarget(this, v4);
  return 1;
}


//======================================================================
// AIFollowParent::updateTask(void)
// address: 0x003036C8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall AIFollowParent::updateTask(int this)
{
  ClientActor *v1; // r1

  if ( *(_DWORD *)(this + 20) - 1 <= 0 )
  {
    v1 = *(ClientActor **)(this + 4);
    *(_DWORD *)(this + 20) = 10;
    if ( v1 != nullptr )
      return NavigationPath::tryMoveToEntityLiving(
               *(ClientActor ***)(*(_DWORD *)(this + 12) + 136),
               v1,
               *(float *)(this + 16));
  }
  else
  {
    --*(_DWORD *)(this + 20);
  }
  return this;
}


//======================================================================
// AIFollowParent::AIFollowParent(ClientActor *,float)
// address: 0x003036F0   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN14AIFollowParentC2EP11ClientActorf'
void __fastcall AIFollowParent::AIFollowParent(AIFollowParent *this, ClientActor *lpsrc, float a3)
{
  ClientActor *v4; // r0

  v4 = lpsrc;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_463298;
  *((float *)this + 4) = a3;
  if ( lpsrc != nullptr )
    v4 = (ClientActor *)_dynamic_cast(
                          lpsrc,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ClientMob,
                          0);
  *((_DWORD *)this + 3) = v4;
  *((_DWORD *)this + 5) = 0;
}

