// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIMate

//======================================================================
// AIMate::startExecuting(void)
// address: 0x00302914   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIMate::startExecuting(AIMate *this)
{
  ;
}


//======================================================================
// AIMate::resetTask(void)
// address: 0x00302916   size: 0x6 (6 bytes)
//======================================================================
int __fastcall AIMate::resetTask(int this)
{
  *(_DWORD *)(this + 24) = 0;
  return this;
}


//======================================================================
// AIMate::continueExecuting(void)
// address: 0x0030291C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall AIMate::continueExecuting(AIMate *this)
{
  int v1; // r4
  int result; // r0

  v1 = *((_DWORD *)this + 1);
  if ( v1 == 0 )
    return 0;
  if ( ClientActor::isDead(*((ClientActor **)this + 1)) != 0 )
    return 0;
  if ( *(int *)(v1 + 144) <= 0 )
    return 0;
  result = 1;
  if ( *((int *)this + 6) > 59 )
    return 0;
  return result;
}


//======================================================================
// AIMate::~AIMate()
// address: 0x00302944   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN6AIMateD1Ev'
void __fastcall AIMate::~AIMate(AIMate *this)
{
  *(_DWORD *)this = &off_4630A8;
  AIBase::~AIBase(this);
}


//======================================================================
// AIMate::~AIMate()
// address: 0x00302960   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIMate::~AIMate(AIMate *this)
{
  AIMate::~AIMate(this);
  operator delete(this);
}


//======================================================================
// AIMate::shouldExecute(void)
// address: 0x00302972   size: 0x2E (46 bytes)
//======================================================================
ActorLocoMotion **__fastcall AIMate::shouldExecute(AIMate *this)
{
  ActorLocoMotion **result; // r0

  if ( *(int *)(*((_DWORD *)this + 3) + 144) <= 0 )
    return nullptr;
  result = *((ActorLocoMotion ***)this + 5);
  if ( result != nullptr )
  {
    result = (ActorLocoMotion **)ClientMob::getNearbyMate(result);
    if ( result != nullptr )
    {
      AIBase::setTarget(this, (ClientActor *)result);
      return (ActorLocoMotion **)(&dword_0 + 1);
    }
  }
  return result;
}


//======================================================================
// AIMate::AIMate(ClientActor *,float)
// address: 0x003029A0   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN6AIMateC2EP11ClientActorf'
void __fastcall AIMate::AIMate(AIMate *this, ClientActor *lpsrc, float a3)
{
  ClientActor *v4; // r0

  v4 = lpsrc;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_4630A8;
  *((_DWORD *)this + 3) = lpsrc;
  *((float *)this + 4) = a3;
  *((_DWORD *)this + 6) = 0;
  if ( lpsrc != nullptr )
    v4 = (ClientActor *)_dynamic_cast(
                          lpsrc,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ClientMob,
                          0);
  *((_DWORD *)this + 5) = v4;
  *((_DWORD *)this + 2) = 3;
}


//======================================================================
// AIMate::spawnBaby(ClientActor *)
// address: 0x003029E8   size: 0x16A (362 bytes)
//======================================================================
__int64 __fastcall AIMate::spawnBaby(AIMate *this, ClientActor *a2)
{
  _DWORD *v4; // r6
  void *v5; // r0
  _DWORD *v6; // r7
  int v7; // r1
  _DWORD *v8; // r3
  int v9; // r7
  int v10; // r2
  int v11; // r3
  int v12; // r7
  float v13; // r2
  __int64 v14; // r0
  int v15; // r5
  World *v16; // r7
  EffectParticle *v17; // r4
  int v18; // r2
  struct __class_type_info *lpstype; // [sp+8h] [bp-124h]
  ClientActor *v21; // [sp+Ch] [bp-120h]
  _DWORD v22[3]; // [sp+18h] [bp-114h] BYREF
  char v23[256]; // [sp+24h] [bp-108h] BYREF

  v21 = (ClientActor *)operator new(0xE8u);
  ClientMob::ClientMob(v21);
  ClientMob::init(v21, *(_DWORD *)(*((_DWORD *)this + 5) + 200));
  j_snprintf(v23, 0x100u, "F%d_CreateChild", **(_DWORD **)(*((_DWORD *)this + 5) + 192));
  Ogre::ScriptVM::callFunction(
    *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
    v23,
    "u[ClientActor]u[ClientActor]u[ClientActor]",
    *((_DWORD *)this + 3),
    a2,
    v21);
  if ( a2 != nullptr )
    v4 = _dynamic_cast(
           a2,
           (const struct __class_type_info *)&`typeinfo for'ClientActor,
           (const struct __class_type_info *)&`typeinfo for'ClientMob,
           0);
  else
    v4 = nullptr;
  v5 = *((void **)this + 3);
  if ( v5 != nullptr )
    v5 = _dynamic_cast(
           v5,
           (const struct __class_type_info *)&`typeinfo for'ClientActor,
           (const struct __class_type_info *)&`typeinfo for'ClientMob,
           0);
  v6 = v5;
  *(_DWORD *)(*((_DWORD *)this + 5) + 196) = 6000;
  v4[49] = 6000;
  *(_DWORD *)(*((_DWORD *)this + 5) + 144) = 0;
  v4[36] = 0;
  *((_DWORD *)v21 + 49) = -24000;
  if ( GenRandomInt(0, 1) != 0 )
    v7 = v4[52];
  else
    v7 = v6[52];
  ClientMob::setColor(v21, v7);
  v8 = *(_DWORD **)(*((_DWORD *)this + 5) + 68);
  v9 = v8[9];
  v10 = v8[8];
  v11 = v8[10];
  v22[1] = v9;
  v12 = *((_DWORD *)v21 + 17);
  v22[0] = v10;
  v22[2] = v11;
  lpstype = *(struct __class_type_info **)(*(_DWORD *)v12 + 16);
  v13 = (float)(int)GenRandomInt(0x168u);
  ((void (__fastcall *)(int, _DWORD *, _DWORD, _DWORD))lpstype)(v12, v22, LODWORD(v13), 0);
  v14 = __PAIR64__((unsigned int)v21, ClientActor::getActorMgr(*((ClientActor **)this + 3)));
  ClientActorMgr::spawnActor(v14, 1);
  v15 = Ogre::Singleton<EffectManager>::ms_Singleton;
  v16 = *(World **)(*((_DWORD *)this + 5) + 52);
  v17 = (EffectParticle *)operator new(0x14u);
  EffectParticle::EffectParticle(v17, v16, (Ogre::FixedString *)"particles/1004.ent", (const WCoord *)v22, 40);
  return EffectManager::addEffect(__SPAIR64__((unsigned int)v17, v15), v18);
}


//======================================================================
// AIMate::updateTask(void)
// address: 0x00302B80   size: 0x5A (90 bytes)
//======================================================================
int __fastcall AIMate::updateTask(int this)
{
  ClientActor *v1; // r5
  int v2; // r4
  ClientActor *v3; // r6
  int v4; // r0
  int v5; // r3

  v1 = *(ClientActor **)(this + 4);
  v2 = this;
  if ( v1 != nullptr )
  {
    v3 = *(ClientActor **)(this + 12);
    v4 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)v3 + 120))(v3);
    ClientActor::setLookPositionWithEntity(v3, v1, 1092616192, COERCE_INT((float)v4));
    this = NavigationPath::tryMoveToEntityLiving(
             *(ClientActor ***)(*(_DWORD *)(v2 + 12) + 136),
             v1,
             *(float *)(v2 + 16));
    v5 = *(_DWORD *)(v2 + 24) + 1;
    *(_DWORD *)(v2 + 24) = v5;
    if ( v5 > 59 )
    {
      this = ClientActor::getDistanceSqToEntity((ClientActor *)*(_DWORD *)(v2 + 12), v1) < 90000.0;
      if ( this != 0 )
        return AIMate::spawnBaby((AIMate *)v2, v1);
    }
  }
  return this;
}

