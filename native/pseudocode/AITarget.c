// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AITarget

//======================================================================
// AITarget::startExecuting(void)
// address: 0x00301A4A   size: 0x6 (6 bytes)
//======================================================================
int __fastcall AITarget::startExecuting(int this)
{
  *(_DWORD *)(this + 20) = 0;
  return this;
}


//======================================================================
// AITarget::~AITarget()
// address: 0x00301A50   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN8AITargetD1Ev'
void __fastcall AITarget::~AITarget(AITarget *this)
{
  *(_DWORD *)this = &off_462E78;
  AIBase::~AIBase(this);
}


//======================================================================
// AITarget::~AITarget()
// address: 0x00301A6C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AITarget::~AITarget(AITarget *this)
{
  AITarget::~AITarget(this);
  operator delete(this);
}


//======================================================================
// AITarget::continueExecuting(void)
// address: 0x00301A7E   size: 0xE4 (228 bytes)
//======================================================================
int __fastcall AITarget::continueExecuting(ClientActor **this)
{
  ClientActor *v2; // r0
  ClientActor *v3; // r6
  int result; // r0
  _DWORD *v5; // r5
  _DWORD *v6; // r4
  double v7; // r0
  int v8; // r5
  int v9; // r3
  double v10; // [sp+0h] [bp-1Ch]
  double v11; // [sp+8h] [bp-14h]
  double v12; // [sp+10h] [bp-Ch]

  v2 = (ClientActor *)ClientActor::getToAttackTarget(*(this + 3));
  v3 = v2;
  if ( v2 == nullptr )
    return 0;
  if ( ClientActor::isDead(v2) != 0 )
    return 0;
  v5 = *((_DWORD **)v3 + 17);
  v6 = *((_DWORD **)*(this + 3) + 17);
  v10 = (double)(v5[8] - v6[8]);
  v11 = (double)(v5[9] - v6[9]);
  v12 = (double)(v5[10] - v6[10]);
  v7 = j_sqrt(v10 * v10 + v11 * v11 + v12 * v12);
  v8 = (int)*(this + 3);
  *(float *)&v7 = v7;
  if ( (float)*(int *)(v8 + 108) < *(float *)&v7 )
    return 0;
  result = 1;
  if ( *((_BYTE *)this + 16) != 0 )
  {
    result = ActorVision::canSeeInAICache(*(ActorVision **)(v8 + 72), v3);
    if ( result != 0 )
    {
      *(this + 5) = nullptr;
    }
    else
    {
      v9 = (int)*(this + 5) + 1;
      *(this + 5) = (ClientActor *)v9;
      return (unsigned __int8)((v9 < 0) + ((unsigned int)v9 <= 0x3C));
    }
  }
  return result;
}


//======================================================================
// AITarget::resetTask(void)
// address: 0x00301B62   size: 0xC (12 bytes)
//======================================================================
ClientActor *__fastcall AITarget::resetTask(ClientActor **this)
{
  return ClientActor::setToAttackTarget(*(this + 3), nullptr);
}


//======================================================================
// AITarget::AITarget(ClientActor *,bool)
// address: 0x00301B70   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN8AITargetC1EP11ClientActorb'
void __fastcall AITarget::AITarget(AITarget *this, ClientActor *a2, bool a3)
{
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &off_462E78;
  *((_DWORD *)this + 3) = a2;
  *((_BYTE *)this + 16) = a3;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 2) = 1;
}


//======================================================================
// AITarget::isSuitableTarget(ClientActor *)
// address: 0x00301B90   size: 0x5C (92 bytes)
//======================================================================
bool __fastcall AITarget::isSuitableTarget(ClientActor **this, ClientActor *a2)
{
  _BOOL4 v4; // r6

  if ( a2 == nullptr )
    return false;
  if ( a2 == *(this + 3) )
    return false;
  if ( ClientActor::isDead(a2) != 0 )
    return false;
  if ( World::isCreativeMode(*((World **)*(this + 3) + 13)) != 0 )
    return false;
  if ( ClientActor::getTamedOwner(*(this + 3)) == a2 )
    return false;
  v4 = ClientActor::isInHomeDist(
         *(this + 3),
         *(_DWORD *)(*((_DWORD *)a2 + 17) + 32),
         *(_DWORD *)(*((_DWORD *)a2 + 17) + 36),
         *(_DWORD *)(*((_DWORD *)a2 + 17) + 40));
  if ( !v4 || *((_BYTE *)this + 16) != 0 && ActorVision::canSeeInAICache(*((ActorVision **)*(this + 3) + 18), a2) == 0 )
    return false;
  return v4;
}

