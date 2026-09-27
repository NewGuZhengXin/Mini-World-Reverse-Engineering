// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AITempt

//======================================================================
// AITempt::startExecuting(void)
// address: 0x00301BEC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall AITempt::startExecuting(int this)
{
  _BYTE *v1; // r2
  int v2; // r3
  _DWORD *v3; // r3
  int v4; // r4
  int v5; // r1
  int v6; // r3

  v1 = (_BYTE *)(*(_DWORD *)(this + 12) + 116);
  *(_BYTE *)(this + 40) = *v1;
  v2 = *(_DWORD *)(this + 4);
  if ( v2 != 0 )
  {
    v3 = *(_DWORD **)(v2 + 68);
    v4 = v3[8];
    v5 = v3[9];
    v6 = v3[10];
    *(_DWORD *)(this + 16) = v4;
    *(_DWORD *)(this + 20) = v5;
    *(_DWORD *)(this + 24) = v6;
    *v1 = 0;
  }
  return this;
}


//======================================================================
// AITempt::~AITempt()
// address: 0x00301C14   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN7AITemptD1Ev'
void __fastcall AITempt::~AITempt(AITempt *this)
{
  *(_DWORD *)this = &off_462EB0;
  AIBase::~AIBase(this);
}


//======================================================================
// AITempt::~AITempt()
// address: 0x00301C30   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AITempt::~AITempt(AITempt *this)
{
  AITempt::~AITempt(this);
  operator delete(this);
}


//======================================================================
// AITempt::continueExecuting(void)
// address: 0x00301C48   size: 0xEA (234 bytes)
//======================================================================
int __fastcall AITempt::continueExecuting(AITempt *this)
{
  const void *v2; // r0
  ClientPlayer *v3; // r0
  ClientActor *v4; // r6
  int v5; // r5
  _BOOL4 v6; // r0
  _DWORD *v7; // r6
  double v8; // r0
  float v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r6
  double v14; // [sp+0h] [bp-14h]
  double v15; // [sp+8h] [bp-Ch]

  v2 = *((const void **)this + 1);
  if ( v2 == nullptr )
    return 0;
  v3 = (ClientPlayer *)_dynamic_cast(
                         v2,
                         (const struct __class_type_info *)&`typeinfo for'ClientActor,
                         (const struct __class_type_info *)&`typeinfo for'ClientPlayer,
                         0);
  v4 = v3;
  if ( v3 == nullptr || ClientPlayer::getCurToolID(v3) != *((_DWORD *)this + 7) )
    return 0;
  v5 = *((unsigned __int8 *)this + 32);
  if ( *((_BYTE *)this + 32) == 0 )
    return 1;
  v6 = ClientActor::getDistanceSqToEntity((ClientActor *)*((_DWORD *)this + 3), v4) < 360000.0;
  v7 = *((_DWORD **)v4 + 17);
  if ( v6 )
  {
    v14 = (double)(*((_DWORD *)this + 4) - v7[8]);
    v15 = (double)(*((_DWORD *)this + 5) - v7[9]);
    v8 = (double)(*((_DWORD *)this + 6) - v7[10]);
    v9 = j_sqrt(v14 * v14 + v15 * v15 + v8 * v8);
    return v9 <= 10.0 ? v5 : 0;
  }
  else
  {
    v10 = v7[8];
    v11 = v7[9];
    v12 = v7[10];
    *((_DWORD *)this + 4) = v10;
    *((_DWORD *)this + 5) = v11;
    *((_DWORD *)this + 6) = v12;
  }
  return v5;
}


//======================================================================
// AITempt::resetTask(void)
// address: 0x00301D50   size: 0x20 (32 bytes)
//======================================================================
int __fastcall AITempt::resetTask(AITempt *this)
{
  int result; // r0

  result = NavigationPath::clearPathEntity(*(_DWORD *)(*((_DWORD *)this + 3) + 136));
  *(_BYTE *)(*((_DWORD *)this + 3) + 116) = *((_BYTE *)this + 40);
  *((_DWORD *)this + 9) = 100;
  return result;
}


//======================================================================
// AITempt::updateTask(void)
// address: 0x00301D70   size: 0x50 (80 bytes)
//======================================================================
int __fastcall AITempt::updateTask(AITempt *this)
{
  ClientActor *v1; // r5
  ClientActor *v3; // r6
  int v4; // r0
  _BOOL4 v5; // r0
  int *v6; // r3

  v1 = *((ClientActor **)this + 1);
  if ( v1 != nullptr )
  {
    v3 = *((ClientActor **)this + 3);
    v4 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)v3 + 120))(v3);
    ClientActor::setLookPositionWithEntity(v3, v1, 1106247680, COERCE_INT((float)v4));
  }
  v5 = ClientActor::getDistanceSqToEntity((ClientActor *)*((_DWORD *)this + 3), v1) < 62500.0;
  v6 = (int *)(*((_DWORD *)this + 3) + 136);
  if ( v5 )
    return NavigationPath::clearPathEntity(*v6);
  else
    return NavigationPath::tryMoveToEntityLiving((ClientActor **)*v6, v1, *((float *)this + 11));
}


//======================================================================
// AITempt::shouldExecute(void)
// address: 0x00301DD0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall AITempt::shouldExecute(AITempt *this)
{
  int v1; // r3
  ClientActorMgr *ActorMgr; // r0
  _DWORD *v4; // r3
  int v5; // r2
  int v6; // r3
  ClientActor *v7; // r0
  ClientActor *v8; // r5
  _DWORD v10[4]; // [sp+4h] [bp-10h] BYREF

  v1 = *((_DWORD *)this + 9);
  if ( v1 <= 0 )
  {
    ActorMgr = (ClientActorMgr *)ClientActor::getActorMgr(*((ClientActor **)this + 3));
    v4 = *(_DWORD **)(*((_DWORD *)this + 3) + 68);
    v10[0] = v4[8];
    v5 = v4[9];
    v6 = v4[10];
    v10[1] = v5;
    v10[2] = v6;
    v7 = ClientActorMgr::selectNearPlayer(ActorMgr, (const WCoord *)v10, 1000);
    v8 = v7;
    if ( v7 != nullptr && ClientPlayer::getCurToolID(v7) == *((_DWORD *)this + 7) )
    {
      AIBase::setTarget(this, v8);
      return 1;
    }
  }
  else
  {
    *((_DWORD *)this + 9) = v1 - 1;
  }
  return 0;
}


//======================================================================
// AITempt::AITempt(ClientActor *,float,int,bool)
// address: 0x00301E24   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN7AITemptC2EP11ClientActorfib'
void __fastcall AITempt::AITempt(AITempt *this, ClientActor *a2, float a3, int a4, bool a5)
{
  *((_DWORD *)this + 7) = a4;
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &off_462EB0;
  *((_DWORD *)this + 3) = a2;
  *((_BYTE *)this + 32) = a5;
  *((_DWORD *)this + 2) = 3;
  *((float *)this + 11) = a3;
  *((_DWORD *)this + 9) = 0;
  *((_BYTE *)this + 40) = 1;
}

