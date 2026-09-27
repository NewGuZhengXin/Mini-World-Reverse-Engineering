// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIAtk

//======================================================================
// AIAtk::startExecuting(void)
// address: 0x00303900   size: 0x18 (24 bytes)
//======================================================================
int __fastcall AIAtk::startExecuting(AIAtk *this)
{
  int result; // r0

  result = NavigationPath::setPath(
             *(NavigationPath **)(*((_DWORD *)this + 4) + 136),
             *((PathEntity **)this + 6),
             *((float *)this + 8));
  *((_DWORD *)this + 7) = 0;
  return result;
}


//======================================================================
// AIAtk::resetTask(void)
// address: 0x00303918   size: 0xE (14 bytes)
//======================================================================
int __fastcall AIAtk::resetTask(AIAtk *this)
{
  return NavigationPath::clearPathEntity(*(_DWORD *)(*((_DWORD *)this + 4) + 136));
}


//======================================================================
// AIAtk::~AIAtk()
// address: 0x00303928   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN5AIAtkD1Ev'
void __fastcall AIAtk::~AIAtk(AIAtk *this)
{
  PathEntity *v2; // r0

  *(_DWORD *)this = &off_463308;
  v2 = *((PathEntity **)this + 6);
  if ( v2 != nullptr )
    PathEntity::release(v2);
  AIBase::~AIBase(this);
}


//======================================================================
// AIAtk::~AIAtk()
// address: 0x00303950   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIAtk::~AIAtk(AIAtk *this)
{
  AIAtk::~AIAtk(this);
  operator delete(this);
}


//======================================================================
// AIAtk::AIAtk(ClientActor *,int,bool,float)
// address: 0x00303964   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN5AIAtkC2EP11ClientActoribf'
void __fastcall AIAtk::AIAtk(AIAtk *this, ClientActor *a2, char a3, bool a4, float a5)
{
  *((_BYTE *)this + 12) = a4;
  *((float *)this + 8) = a5;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 9) = 0;
  *(_DWORD *)this = &off_463308;
  *((_DWORD *)this + 4) = a2;
  *((_BYTE *)this + 20) = a3;
  *((_DWORD *)this + 2) = 3;
}


//======================================================================
// AIAtk::atkDist(ClientActor *)
// address: 0x00303990   size: 0x60 (96 bytes)
//======================================================================
bool __fastcall AIAtk::atkDist(AIAtk *this, ClientActor *a2)
{
  ClientActor *v2; // r7
  double v4; // r0

  v2 = *((ClientActor **)this + 4);
  v4 = (double)(100 * *(_DWORD *)(*((_DWORD *)v2 + 48) + 180));
  return ClientActor::getDistanceSq(
           v2,
           (double)*(int *)(*((_DWORD *)a2 + 17) + 32),
           (double)*(int *)(*((_DWORD *)a2 + 17) + 36),
           (double)*(int *)(*((_DWORD *)a2 + 17) + 40)) <= v4 * v4;
}


//======================================================================
// AIAtk::continueExecuting(void)
// address: 0x003039F0   size: 0x50 (80 bytes)
//======================================================================
int __fastcall AIAtk::continueExecuting(ClientActor **this)
{
  ClientActor *v2; // r0
  ClientActor *v3; // r5
  int result; // r0

  v2 = (ClientActor *)ClientActor::getToAttackTarget(*(this + 4));
  v3 = v2;
  if ( v2 == nullptr || ClientActor::isDead(v2) != 0 )
    return 0;
  if ( *((_BYTE *)this + 12) != 0 )
    return ClientActor::isInHomeDist(
             *(this + 4),
             *(_DWORD *)(*((_DWORD *)v3 + 17) + 32),
             *(_DWORD *)(*((_DWORD *)v3 + 17) + 36),
             *(_DWORD *)(*((_DWORD *)v3 + 17) + 40));
  result = AIAtk::atkDist((AIAtk *)this, v3);
  if ( result == 0 )
    return (unsigned __int8)NavigationPath::noPath(*((NavigationPath **)*(this + 4) + 34)) ^ 1;
  return result;
}


//======================================================================
// AIAtk::updateTask(void)
// address: 0x00303A40   size: 0x84 (132 bytes)
//======================================================================
int __fastcall AIAtk::updateTask(AIAtk *this)
{
  int result; // r0
  ClientActor *v3; // r5
  int v4; // r3
  int v5; // r3
  int v6; // r0
  int v7; // r3

  result = ClientActor::getToAttackTarget(*((ClientActor **)this + 4));
  v3 = (ClientActor *)result;
  if ( result != 0 )
  {
    result = ClientActor::setLookPositionWithEntity(
               *((ClientActor **)this + 4),
               (ClientActor *)result,
               1106247680,
               1106247680);
    if ( *((_BYTE *)this + 12) != 0
      || (result = ActorVision::canSeeInAICache(*(ActorVision **)(*((_DWORD *)this + 4) + 72), v3)) != 0 )
    {
      v4 = *((_DWORD *)this + 7) - 1;
      *((_DWORD *)this + 7) = v4;
      if ( v4 <= 0 )
      {
        v6 = GenRandomInt(0, 6);
        v7 = *((_DWORD *)this + 4);
        *((_DWORD *)this + 7) = v6 + 4;
        result = NavigationPath::tryMoveToEntityLiving(*(ClientActor ***)(v7 + 136), v3, *((float *)this + 8));
      }
    }
    v5 = *((_DWORD *)this + 9) - 1;
    if ( v5 < 0 )
      v5 = 0;
    *((_DWORD *)this + 9) = v5;
    if ( *((int *)this + 9) <= 0 )
    {
      result = AIAtk::atkDist(this, v3);
      if ( result != 0 )
      {
        *((_DWORD *)this + 9) = 30;
        return ActorLiving::attackActor(*((ActorBody ***)this + 4), v3, (ActorBody *)&byte_9[1]);
      }
    }
  }
  return result;
}


//======================================================================
// AIAtk::shouldExecute(void)
// address: 0x00303AC8   size: 0x4A (74 bytes)
//======================================================================
int __fastcall AIAtk::shouldExecute(ClientActor **this)
{
  ClientActor *v2; // r0
  ClientActor *v3; // r5
  int result; // r0
  PathEntity *v5; // r0
  ClientActor *PathToEntityLiving; // r0

  v2 = (ClientActor *)ClientActor::getToAttackTarget(*(this + 4));
  v3 = v2;
  if ( v2 == nullptr )
    return 0;
  result = ClientActor::isDead(v2);
  if ( result != 0 )
    return 0;
  if ( *((_BYTE *)this + 20) == 0 )
  {
    result = AIAtk::atkDist((AIAtk *)this, v3);
    if ( result == 0 )
    {
      v5 = *(this + 6);
      if ( v5 != nullptr )
        PathEntity::release(v5);
      PathToEntityLiving = (ClientActor *)NavigationPath::getPathToEntityLiving(
                                            *((ClientActor ***)*(this + 4) + 34),
                                            v3);
      *(this + 6) = PathToEntityLiving;
      return PathToEntityLiving != nullptr;
    }
  }
  return result;
}

