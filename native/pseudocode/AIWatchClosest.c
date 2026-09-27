// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIWatchClosest

//======================================================================
// AIWatchClosest::resetTask(void)
// address: 0x003018A2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIWatchClosest::resetTask(AIWatchClosest *this)
{
  ;
}


//======================================================================
// AIWatchClosest::~AIWatchClosest()
// address: 0x003018A4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14AIWatchClosestD1Ev'
void __fastcall AIWatchClosest::~AIWatchClosest(AIWatchClosest *this)
{
  *(_DWORD *)this = &off_462E40;
  AIBase::~AIBase(this);
}


//======================================================================
// AIWatchClosest::~AIWatchClosest()
// address: 0x003018C0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIWatchClosest::~AIWatchClosest(AIWatchClosest *this)
{
  AIWatchClosest::~AIWatchClosest(this);
  operator delete(this);
}


//======================================================================
// AIWatchClosest::continueExecuting(void)
// address: 0x003018D2   size: 0xB8 (184 bytes)
//======================================================================
unsigned int __fastcall AIWatchClosest::continueExecuting(AIWatchClosest *this)
{
  int v1; // r4
  int isDead; // r6
  _DWORD *v4; // r4
  _DWORD *v5; // r5
  float v6; // r0
  double v8; // [sp+0h] [bp-1Ch]
  double v9; // [sp+8h] [bp-14h]
  double v10; // [sp+10h] [bp-Ch]

  v1 = *((_DWORD *)this + 1);
  if ( v1 == 0 )
    return 0;
  isDead = ClientActor::isDead(*((ClientActor **)this + 1));
  if ( isDead != 0 )
    return 0;
  v4 = *(_DWORD **)(v1 + 68);
  v5 = *(_DWORD **)(*((_DWORD *)this + 3) + 68);
  v9 = (double)(v5[8] - v4[8]);
  v8 = (double)(v5[9] - v4[9]);
  v10 = (double)(v5[10] - v4[10]);
  v6 = j_sqrt(v9 * v9 + v8 * v8 + v10 * v10);
  if ( v6 <= (float)*((int *)this + 4) )
    return (unsigned int)((*((int *)this + 5) >> 31) - *((_DWORD *)this + 5)) >> 31;
  return isDead;
}


//======================================================================
// AIWatchClosest::startExecuting(void)
// address: 0x0030198A   size: 0x10 (16 bytes)
//======================================================================
int __fastcall AIWatchClosest::startExecuting(AIWatchClosest *this)
{
  int result; // r0

  result = GenRandomInt(40, 79);
  *((_DWORD *)this + 5) = result;
  return result;
}


//======================================================================
// AIWatchClosest::updateTask(void)
// address: 0x0030199C   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall AIWatchClosest::updateTask(_DWORD *this)
{
  ClientActor *v1; // r5
  ClientActor *v2; // r4
  int v3; // r0

  v1 = (ClientActor *)*(this + 1);
  --*(this + 5);
  if ( v1 != nullptr )
  {
    v2 = (ClientActor *)*(this + 3);
    v3 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)v2 + 120))(v2);
    return (_DWORD *)ClientActor::setLookPositionWithEntity(v2, v1, 1092616192, COERCE_INT((float)v3));
  }
  return this;
}


//======================================================================
// AIWatchClosest::shouldExecute(void)
// address: 0x003019D0   size: 0x4E (78 bytes)
//======================================================================
int __fastcall AIWatchClosest::shouldExecute(ClientActor **this)
{
  int v2; // r5
  ClientActorMgr *ActorMgr; // r0
  _DWORD *v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r2
  ClientActor *v8; // r1
  _DWORD v10[4]; // [sp+4h] [bp-10h] BYREF

  v2 = 0;
  if ( GenRandomFloat() <= 0.02 )
  {
    ActorMgr = (ClientActorMgr *)ClientActor::getActorMgr(*(this + 3));
    v4 = *((_DWORD **)*(this + 3) + 17);
    v10[0] = v4[8];
    v5 = v4[9];
    v6 = v4[10];
    v10[1] = v5;
    v7 = (int)*(this + 4);
    v10[2] = v6;
    v8 = ClientActorMgr::selectNearPlayer(ActorMgr, (const WCoord *)v10, v7);
    if ( v8 != nullptr )
    {
      AIBase::setTarget((AIBase *)this, v8);
      return 1;
    }
  }
  return v2;
}


//======================================================================
// AIWatchClosest::AIWatchClosest(ClientActor *,int)
// address: 0x00301A28   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN14AIWatchClosestC2EP11ClientActori'
void __fastcall AIWatchClosest::AIWatchClosest(AIWatchClosest *this, ClientActor *a2, int a3)
{
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &off_462E40;
  *((_DWORD *)this + 3) = a2;
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = 2;
}

