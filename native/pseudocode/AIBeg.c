// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIBeg

//======================================================================
// AIBeg::resetTask(void)
// address: 0x00302490   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIBeg::resetTask(AIBeg *this)
{
  ;
}


//======================================================================
// AIBeg::~AIBeg()
// address: 0x00302494   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN5AIBegD1Ev'
void __fastcall AIBeg::~AIBeg(AIBeg *this)
{
  *(_DWORD *)this = &off_463000;
  AIBase::~AIBase(this);
}


//======================================================================
// AIBeg::~AIBeg()
// address: 0x003024B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIBeg::~AIBeg(AIBeg *this)
{
  AIBeg::~AIBeg(this);
  operator delete(this);
}


//======================================================================
// AIBeg::startExecuting(void)
// address: 0x003024C2   size: 0x10 (16 bytes)
//======================================================================
int __fastcall AIBeg::startExecuting(AIBeg *this)
{
  int result; // r0

  result = GenRandomInt(40, 79);
  *((_DWORD *)this + 6) = result;
  return result;
}


//======================================================================
// AIBeg::updateTask(void)
// address: 0x003024D4   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall AIBeg::updateTask(_DWORD *this)
{
  ClientActor *v1; // r5
  ClientActor *v2; // r4
  int v3; // r0

  v1 = (ClientActor *)*(this + 1);
  --*(this + 6);
  if ( v1 != nullptr )
  {
    v2 = (ClientActor *)*(this + 3);
    v3 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)v2 + 120))(v2);
    return (_DWORD *)ClientActor::setLookPositionWithEntity(v2, v1, 1092616192, COERCE_INT((float)v3));
  }
  return this;
}


//======================================================================
// AIBeg::AIBeg(ClientActor *,int,int)
// address: 0x00302504   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN5AIBegC2EP11ClientActorii'
void __fastcall AIBeg::AIBeg(AIBeg *this, ClientActor *lpsrc, int a3, int a4)
{
  ClientActor *v5; // r0

  *((_DWORD *)this + 7) = a3;
  v5 = lpsrc;
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &off_463000;
  *((_DWORD *)this + 3) = lpsrc;
  *((_DWORD *)this + 5) = a4;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 2;
  if ( lpsrc != nullptr )
    v5 = (ClientActor *)_dynamic_cast(
                          lpsrc,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ClientMob,
                          0);
  *((_DWORD *)this + 4) = v5;
}


//======================================================================
// AIBeg::hasPlayerGotBoneInHand(ClientPlayer *)
// address: 0x0030254C   size: 0x2A (42 bytes)
//======================================================================
ClientMob *__fastcall AIBeg::hasPlayerGotBoneInHand(AIBeg *this, ClientPlayer *a2)
{
  int CurToolID; // r0
  int v4; // r1
  ClientMob *result; // r0

  CurToolID = ClientPlayer::getCurToolID(a2);
  v4 = CurToolID;
  if ( *(_DWORD *)(*((_DWORD *)this + 3) + 124) == 0 && CurToolID == *((_DWORD *)this + 7) )
    return (ClientMob *)(&dword_0 + 1);
  result = *((ClientMob **)this + 4);
  if ( result != nullptr )
    return (ClientMob *)ClientMob::isBreedItem(result, v4);
  return result;
}


//======================================================================
// AIBeg::shouldExecute(void)
// address: 0x00302576   size: 0x44 (68 bytes)
//======================================================================
ClientMob *__fastcall AIBeg::shouldExecute(ClientActor **this, int a2, int a3, int a4)
{
  ClientActorMgr *ActorMgr; // r0
  _DWORD *v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r2
  ClientActor *v10; // r6
  ClientMob *v11; // r5
  _DWORD v13[3]; // [sp+4h] [bp-Ch] BYREF

  v13[0] = a2;
  v13[1] = a3;
  v13[2] = a4;
  ActorMgr = (ClientActorMgr *)ClientActor::getActorMgr(*(this + 3));
  v6 = *((_DWORD **)*(this + 3) + 17);
  v13[0] = v6[8];
  v7 = v6[9];
  v8 = v6[10];
  v13[1] = v7;
  v9 = (int)*(this + 5);
  v13[2] = v8;
  v10 = ClientActorMgr::selectNearPlayer(ActorMgr, (const WCoord *)v13, v9);
  if ( v10 == nullptr )
    return nullptr;
  v11 = AIBeg::hasPlayerGotBoneInHand((AIBeg *)this, v10);
  if ( v11 == nullptr )
    return nullptr;
  AIBase::setTarget((AIBase *)this, v10);
  return v11;
}


//======================================================================
// AIBeg::continueExecuting(void)
// address: 0x003025BC   size: 0xD8 (216 bytes)
//======================================================================
ClientMob *__fastcall AIBeg::continueExecuting(AIBeg *this)
{
  const void *v2; // r0
  ClientActor *v3; // r0
  ClientActor *v4; // r7
  _DWORD *v5; // r4
  _DWORD *v6; // r5
  float v7; // r0
  double v9; // [sp+0h] [bp-24h]
  double v10; // [sp+8h] [bp-1Ch]
  int isDead; // [sp+14h] [bp-10h]
  double v12; // [sp+18h] [bp-Ch]

  v2 = *((const void **)this + 1);
  if ( v2 == nullptr )
    return nullptr;
  v3 = (ClientActor *)_dynamic_cast(
                        v2,
                        (const struct __class_type_info *)&`typeinfo for'ClientActor,
                        (const struct __class_type_info *)&`typeinfo for'ClientPlayer,
                        0);
  v4 = v3;
  if ( v3 == nullptr )
    return nullptr;
  isDead = ClientActor::isDead(v3);
  if ( isDead != 0 )
    return nullptr;
  v5 = *((_DWORD **)v4 + 17);
  v6 = *(_DWORD **)(*((_DWORD *)this + 3) + 68);
  v9 = (double)(v6[8] - v5[8]);
  v10 = (double)(v6[9] - v5[9]);
  v12 = (double)(v6[10] - v5[10]);
  v7 = j_sqrt(v9 * v9 + v10 * v10 + v12 * v12);
  if ( v7 <= (float)*((int *)this + 5) && *((int *)this + 6) > 0 )
    return AIBeg::hasPlayerGotBoneInHand(this, v4);
  return (ClientMob *)isDead;
}

