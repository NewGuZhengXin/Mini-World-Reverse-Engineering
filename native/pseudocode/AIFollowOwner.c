// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIFollowOwner

//======================================================================
// AIFollowOwner::startExecuting(void)
// address: 0x003033E4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall AIFollowOwner::startExecuting(int this)
{
  _BYTE *v1; // r3

  v1 = *(_BYTE **)(this + 12);
  *(_DWORD *)(this + 36) = 0;
  v1 += 116;
  *(_BYTE *)(this + 28) = *v1;
  *v1 = 0;
  return this;
}


//======================================================================
// AIFollowOwner::~AIFollowOwner()
// address: 0x003033F4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13AIFollowOwnerD1Ev'
void __fastcall AIFollowOwner::~AIFollowOwner(AIFollowOwner *this)
{
  *(_DWORD *)this = &off_463260;
  AIBase::~AIBase(this);
}


//======================================================================
// AIFollowOwner::~AIFollowOwner()
// address: 0x00303410   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIFollowOwner::~AIFollowOwner(AIFollowOwner *this)
{
  AIFollowOwner::~AIFollowOwner(this);
  operator delete(this);
}


//======================================================================
// AIFollowOwner::shouldExecute(void)
// address: 0x00303422   size: 0x46 (70 bytes)
//======================================================================
bool __fastcall AIFollowOwner::shouldExecute(AIFollowOwner *this)
{
  ClientActor *v2; // r0
  ClientActor *TamedOwner; // r1

  v2 = *((ClientActor **)this + 3);
  if ( *((_BYTE *)v2 + 121) != 0 )
    return false;
  TamedOwner = ClientActor::getTamedOwner(v2);
  return TamedOwner != nullptr
      && ClientActor::getDistanceSqToEntity((ClientActor *)*((_DWORD *)this + 3), TamedOwner) >= (double)(*((_DWORD *)this + 5) * *((_DWORD *)this + 5));
}


//======================================================================
// AIFollowOwner::continueExecuting(void)
// address: 0x00303468   size: 0x52 (82 bytes)
//======================================================================
int __fastcall AIFollowOwner::continueExecuting(ClientActor **this)
{
  ClientActor *TamedOwner; // r4

  TamedOwner = ClientActor::getTamedOwner(*(this + 3));
  if ( TamedOwner == nullptr
    || NavigationPath::noPath(*((NavigationPath **)*(this + 3) + 34)) != 0
    || ClientActor::getDistanceSqToEntity(*(this + 3), TamedOwner) <= (double)((int)*(this + 6) * (int)*(this + 6)) )
  {
    return 0;
  }
  else
  {
    return *((unsigned __int8 *)*(this + 3) + 121) ^ 1;
  }
}


//======================================================================
// AIFollowOwner::resetTask(void)
// address: 0x003034BA   size: 0x18 (24 bytes)
//======================================================================
int __fastcall AIFollowOwner::resetTask(AIFollowOwner *this)
{
  int result; // r0

  result = NavigationPath::clearPathEntity(*(_DWORD *)(*((_DWORD *)this + 3) + 136));
  *(_BYTE *)(*((_DWORD *)this + 3) + 116) = *((_BYTE *)this + 28);
  return result;
}


//======================================================================
// AIFollowOwner::updateTask(void)
// address: 0x003034D8   size: 0xAE (174 bytes)
//======================================================================
ClientPlayer *__fastcall AIFollowOwner::updateTask(AIFollowOwner *this)
{
  ClientPlayer *result; // r0
  ClientActor *v3; // r5
  ClientActor *v4; // r6
  int v5; // r0
  int v6; // r3
  _DWORD *v7; // r3
  int v8; // r2
  int v9; // r3
  World **ActorMgr; // r0
  _DWORD v11[4]; // [sp+Ch] [bp-10h] BYREF

  result = ClientActor::getTamedOwner(*((ClientActor **)this + 3));
  v3 = result;
  if ( result != nullptr )
  {
    v4 = *((ClientActor **)this + 3);
    v5 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)v4 + 120))(v4);
    result = (ClientPlayer *)ClientActor::setLookPositionWithEntity(v4, v3, 1092616192, COERCE_INT((float)v5));
    v6 = *((_DWORD *)this + 3);
    if ( *(_BYTE *)(v6 + 121) == 0 )
    {
      if ( *((_DWORD *)this + 9) - 1 <= 0 )
      {
        *((_DWORD *)this + 9) = 10;
        result = (ClientPlayer *)NavigationPath::tryMoveToEntityLiving(
                                   *(ClientActor ***)(v6 + 136),
                                   v3,
                                   *((float *)this + 8));
        if ( result == nullptr )
        {
          result = *((ClientPlayer **)this + 3);
          if ( *((_BYTE *)result + 140) == 0 )
          {
            result = (ClientPlayer *)(ClientActor::getDistanceSqToEntity(result, v3) > 1440000.0);
            if ( result != nullptr )
            {
              v7 = *((_DWORD **)v3 + 17);
              v11[0] = v7[8];
              v8 = v7[9];
              v9 = v7[10];
              v11[1] = v8;
              v11[2] = v9;
              if ( *((_DWORD *)this + 4) != 0 )
              {
                ActorMgr = (World **)ClientActor::getActorMgr(*((ClientActor **)this + 3));
                result = (ClientPlayer *)ClientActorMgr::transportMonster(
                                           ActorMgr,
                                           *((ClientMob **)this + 4),
                                           (const WCoord *)v11,
                                           1,
                                           10);
                if ( result != nullptr )
                  return (ClientPlayer *)NavigationPath::clearPathEntity(*(_DWORD *)(*((_DWORD *)this + 3) + 136));
              }
            }
          }
        }
      }
      else
      {
        --*((_DWORD *)this + 9);
      }
    }
  }
  return result;
}


//======================================================================
// AIFollowOwner::AIFollowOwner(ClientActor *,float,int,int)
// address: 0x00303598   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN13AIFollowOwnerC2EP11ClientActorfii'
void __fastcall AIFollowOwner::AIFollowOwner(AIFollowOwner *this, ClientActor *lpsrc, float a3, int a4, int a5)
{
  ClientActor *v6; // r0

  v6 = lpsrc;
  *((_DWORD *)this + 5) = a4;
  *((float *)this + 8) = a3;
  *((_DWORD *)this + 2) = 3;
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &off_463260;
  *((_DWORD *)this + 3) = lpsrc;
  *((_DWORD *)this + 6) = a5;
  *((_BYTE *)this + 28) = 1;
  *((_DWORD *)this + 9) = 0;
  if ( lpsrc != nullptr )
    v6 = (ClientActor *)_dynamic_cast(
                          lpsrc,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ClientMob,
                          0);
  *((_DWORD *)this + 4) = v6;
}

