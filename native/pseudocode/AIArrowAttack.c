// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIArrowAttack

//======================================================================
// AIArrowAttack::startExecuting(void)
// address: 0x0030305C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIArrowAttack::startExecuting(AIArrowAttack *this)
{
  ;
}


//======================================================================
// AIArrowAttack::~AIArrowAttack()
// address: 0x00303060   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13AIArrowAttackD1Ev'
void __fastcall AIArrowAttack::~AIArrowAttack(AIArrowAttack *this)
{
  *(_DWORD *)this = &off_4631C0;
  AIBase::~AIBase(this);
}


//======================================================================
// AIArrowAttack::~AIArrowAttack()
// address: 0x0030307C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIArrowAttack::~AIArrowAttack(AIArrowAttack *this)
{
  AIArrowAttack::~AIArrowAttack(this);
  operator delete(this);
}


//======================================================================
// AIArrowAttack::continueExecuting(void)
// address: 0x0030308E   size: 0x24 (36 bytes)
//======================================================================
int __fastcall AIArrowAttack::continueExecuting(AIArrowAttack *this)
{
  int v2; // r4

  v2 = 1;
  if ( (*(int (__fastcall **)(AIArrowAttack *))(*(_DWORD *)this + 8))(this) == 0 )
    return (unsigned __int8)NavigationPath::noPath(*(NavigationPath **)(*((_DWORD *)this + 3) + 136)) ^ 1;
  return v2;
}


//======================================================================
// AIArrowAttack::updateTask(void)
// address: 0x003030B4   size: 0x104 (260 bytes)
//======================================================================
int __fastcall AIArrowAttack::updateTask(AIArrowAttack *this)
{
  double DistanceSqToEntity; // r4
  int canSeeInAICache; // r7
  int v4; // r3
  int result; // r0
  int v6; // r3
  float v7; // r0
  float v8; // r0
  float v9; // r5
  int v10; // r4
  int v11; // r0
  float v12; // r0
  float v13; // r0

  DistanceSqToEntity = ClientActor::getDistanceSqToEntity(
                         (ClientActor *)*((_DWORD *)this + 3),
                         (ClientActor *)*((_DWORD *)this + 4));
  canSeeInAICache = ActorVision::canSeeInAICache(
                      *(ActorVision **)(*((_DWORD *)this + 3) + 72),
                      *((ClientActor **)this + 4));
  if ( canSeeInAICache != 0 )
    ++*((_DWORD *)this + 8);
  else
    *((_DWORD *)this + 8) = 0;
  v4 = *((_DWORD *)this + 3);
  if ( DistanceSqToEntity > *((float *)this + 11) || *((int *)this + 8) <= 19 )
    NavigationPath::tryMoveToEntityLiving(
      *(ClientActor ***)(v4 + 136),
      *((ClientActor **)this + 4),
      *((float *)this + 7));
  else
    NavigationPath::clearPathEntity(*(_DWORD *)(v4 + 136));
  result = ClientActor::setLookPositionWithEntity(
             *((ClientActor **)this + 3),
             *((ClientActor **)this + 4),
             1106247680,
             1106247680);
  v6 = *((_DWORD *)this + 5) - 1;
  *((_DWORD *)this + 5) = v6;
  if ( v6 != 0 )
  {
    if ( v6 >= 0 )
      return result;
    v12 = DistanceSqToEntity;
    v13 = j_sqrt(v12);
    v10 = *((_DWORD *)this + 9);
    v9 = v13 / *((float *)this + 10);
    v11 = *((_DWORD *)this + 6) - v10;
    goto LABEL_14;
  }
  result = DistanceSqToEntity > *((float *)this + 11);
  if ( DistanceSqToEntity <= *((float *)this + 11) && canSeeInAICache != 0 )
  {
    v7 = DistanceSqToEntity;
    v8 = j_sqrt(v7);
    v9 = v8 / *((float *)this + 10);
    ActorLiving::attackActorRanged(*((ActorBody ***)this + 3), *((ClientActor **)this + 4), (ActorBody *)&byte_9[1]);
    v10 = *((_DWORD *)this + 9);
    v11 = *((_DWORD *)this + 6) - v10;
LABEL_14:
    result = (int)(float)((float)(v9 * (float)v11) + (float)v10);
    *((_DWORD *)this + 5) = result;
  }
  return result;
}


//======================================================================
// AIArrowAttack::AIArrowAttack(ClientActor *,float,int,int,float)
// address: 0x003031BC   size: 0x58 (88 bytes)
//======================================================================
// Alternative name is '_ZN13AIArrowAttackC2EP11ClientActorfiif'
void __fastcall AIArrowAttack::AIArrowAttack(
        AIArrowAttack *this,
        ClientActor *lpsrc,
        float a3,
        int a4,
        int a5,
        float a6)
{
  ClientActor *v9; // r0

  v9 = lpsrc;
  *(_DWORD *)this = &off_4631C0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = -1;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 8) = 0;
  if ( lpsrc != nullptr )
    v9 = (ClientActor *)_dynamic_cast(
                          lpsrc,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ActorLiving,
                          0);
  *((_DWORD *)this + 3) = v9;
  *((float *)this + 7) = a3;
  *((_DWORD *)this + 9) = a4;
  *((_DWORD *)this + 6) = a5;
  *((float *)this + 10) = a6;
  *((float *)this + 11) = a6 * a6;
  *((_DWORD *)this + 2) = 3;
}


//======================================================================
// AIArrowAttack::setTarget(ClientActor *)
// address: 0x00303220   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall AIArrowAttack::setTarget(AIArrowAttack *this, ClientActor *a2)
{
  _DWORD *result; // r0

  result = *((_DWORD **)this + 4);
  if ( result != nullptr )
    result = ClientActor::release(result);
  if ( a2 != nullptr )
    result = (_DWORD *)ClientActor::addRef((int)a2);
  *((_DWORD *)this + 4) = a2;
  return result;
}


//======================================================================
// AIArrowAttack::shouldExecute(void)
// address: 0x0030323E   size: 0x26 (38 bytes)
//======================================================================
int __fastcall AIArrowAttack::shouldExecute(ClientActor **this)
{
  ClientActor *v2; // r0
  ClientActor *v3; // r4

  v2 = (ClientActor *)ClientActor::getToAttackTarget(*(this + 3));
  v3 = v2;
  if ( v2 == nullptr || ClientActor::isDead(v2) != 0 )
    return 0;
  AIArrowAttack::setTarget((AIArrowAttack *)this, v3);
  return 1;
}


//======================================================================
// AIArrowAttack::resetTask(void)
// address: 0x00303264   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall AIArrowAttack::resetTask(AIArrowAttack *this)
{
  _DWORD *result; // r0

  result = AIArrowAttack::setTarget(this, nullptr);
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 5) = -1;
  return result;
}

