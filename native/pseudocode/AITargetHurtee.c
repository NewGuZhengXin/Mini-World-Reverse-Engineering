// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AITargetHurtee

//======================================================================
// AITargetHurtee::~AITargetHurtee()
// address: 0x00302CF4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14AITargetHurteeD1Ev'
void __fastcall AITargetHurtee::~AITargetHurtee(AITargetHurtee *this)
{
  *(_DWORD *)this = &off_463118;
  AITarget::~AITarget(this);
}


//======================================================================
// AITargetHurtee::~AITargetHurtee()
// address: 0x00302D10   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AITargetHurtee::~AITargetHurtee(AITargetHurtee *this)
{
  AITargetHurtee::~AITargetHurtee(this);
  operator delete(this);
}


//======================================================================
// AITargetHurtee::shouldExecute(void)
// address: 0x00302D22   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall AITargetHurtee::shouldExecute(AITargetHurtee *this)
{
  ClientActor *v2; // r0
  ClientActor *BeHurtTarget; // r0
  _BOOL4 result; // r0

  v2 = *((ClientActor **)this + 3);
  if ( *((_DWORD *)this + 6) == *((_DWORD *)v2 + 26) )
    return false;
  BeHurtTarget = (ClientActor *)ClientActor::getBeHurtTarget(v2);
  result = AITarget::isSuitableTarget((ClientActor **)this, BeHurtTarget);
  if ( !result )
    return false;
  return result;
}


//======================================================================
// AITargetHurtee::startExecuting(void)
// address: 0x00302D44   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall AITargetHurtee::startExecuting(AITargetHurtee *this)
{
  ClientActor *v1; // r4
  ClientActor *BeHurtTarget; // r0
  int v4; // r3
  int v5; // r2
  int v6; // r2
  World *v7; // r0
  unsigned int i; // r7
  ClientActor *v9; // r4
  ClientActor *v11; // r0
  _DWORD *v12; // [sp+4h] [bp-28h] BYREF
  int v13; // [sp+8h] [bp-24h]
  int v14; // [sp+Ch] [bp-20h]
  int v15; // [sp+10h] [bp-1Ch] BYREF
  int v16; // [sp+14h] [bp-18h]
  int v17; // [sp+18h] [bp-14h]
  int v18; // [sp+1Ch] [bp-10h]
  int v19; // [sp+20h] [bp-Ch]
  int v20; // [sp+24h] [bp-8h]

  v1 = *((ClientActor **)this + 3);
  BeHurtTarget = (ClientActor *)ClientActor::getBeHurtTarget(v1);
  ClientActor::setToAttackTarget(v1, BeHurtTarget);
  v4 = *((_DWORD *)this + 3);
  v5 = *((unsigned __int8 *)this + 28);
  *((_DWORD *)this + 6) = *(_DWORD *)(v4 + 104);
  if ( v5 != 0 )
  {
    ActorLocoMotion::getCollideBox(*(ActorLocoMotion **)(v4 + 68), (CollideAABB *)&v15);
    v15 -= 1000;
    v16 -= 1000;
    v17 -= 1000;
    v18 += 2000;
    v19 += 2000;
    v6 = *((_DWORD *)this + 3);
    v20 += 2000;
    v7 = *(World **)(v6 + 52);
    v12 = nullptr;
    v13 = 0;
    v14 = 0;
    World::getActorsOfTypeInBox(v7, (int)&v12, &v15, 0);
    for ( i = 0; i < (v13 - (int)v12) >> 2; ++i )
    {
      v9 = (ClientActor *)v12[i];
      if ( v9 != nullptr
        && v9 != *((ClientActor **)this + 3)
        && ClientActor::isDead((ClientActor *)v12[i]) == 0
        && ClientActor::getToAttackTarget(v9) == 0 )
      {
        v11 = (ClientActor *)ClientActor::getBeHurtTarget(*((ClientActor **)this + 3));
        ClientActor::setToAttackTarget(v9, v11);
      }
    }
    if ( v12 != nullptr )
      operator delete(v12);
  }
  return AITarget::startExecuting((int)this);
}


//======================================================================
// AITargetHurtee::AITargetHurtee(ClientActor *,bool)
// address: 0x00302E18   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN14AITargetHurteeC2EP11ClientActorb'
void __fastcall AITargetHurtee::AITargetHurtee(AITargetHurtee *this, ClientActor *a2, bool a3)
{
  AITarget::AITarget(this, a2, false);
  *((_BYTE *)this + 28) = a3;
  *(_DWORD *)this = &off_463118;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 2) = 1;
}

