// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AICreeperSwell

//======================================================================
// AICreeperSwell::~AICreeperSwell()
// address: 0x00303734   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14AICreeperSwellD1Ev'
void __fastcall AICreeperSwell::~AICreeperSwell(AICreeperSwell *this)
{
  *(_DWORD *)this = &off_4632D0;
  AIBase::~AIBase(this);
}


//======================================================================
// AICreeperSwell::~AICreeperSwell()
// address: 0x00303750   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AICreeperSwell::~AICreeperSwell(AICreeperSwell *this)
{
  AICreeperSwell::~AICreeperSwell(this);
  operator delete(this);
}


//======================================================================
// AICreeperSwell::shouldExecute(void)
// address: 0x00303768   size: 0x38 (56 bytes)
//======================================================================
bool __fastcall AICreeperSwell::shouldExecute(ClientActor **this)
{
  ClientActor *v2; // r4
  int Infuse; // r3
  _BOOL4 result; // r0

  v2 = (ClientActor *)ClientActor::getToAttackTarget(*(this + 3));
  Infuse = ClientMob::getInfuse(*(this + 3));
  result = true;
  if ( Infuse == 0 )
    return v2 != nullptr && ClientActor::getDistanceSqToEntity(*(this + 3), v2) < 90000.0;
  return result;
}


//======================================================================
// AICreeperSwell::startExecuting(void)
// address: 0x003037A8   size: 0x16 (22 bytes)
//======================================================================
ClientActor *__fastcall AICreeperSwell::startExecuting(ClientActor **this)
{
  ClientActor *result; // r0

  result = (ClientActor *)ClientActor::getToAttackTarget(*(this + 3));
  if ( result != nullptr )
    return (ClientActor *)AIBase::setTarget((AIBase *)this, result);
  return result;
}


//======================================================================
// AICreeperSwell::resetTask(void)
// address: 0x003037BE   size: 0x1C (28 bytes)
//======================================================================
unsigned int *__fastcall AICreeperSwell::resetTask(ClientMob **this)
{
  unsigned int *result; // r0

  AIBase::setTarget((AIBase *)this, nullptr);
  result = ClientMob::setInfuse(*(this + 3), 0);
  *((_DWORD *)*(this + 3) + 54) = 0;
  return result;
}


//======================================================================
// AICreeperSwell::updateTask(void)
// address: 0x003037E0   size: 0xCE (206 bytes)
//======================================================================
int *__fastcall AICreeperSwell::updateTask(AICreeperSwell *this)
{
  ClientActor *v1; // r5
  ClientActor *v3; // r0
  _BOOL4 v4; // r1
  int canSeeInAICache; // r1
  int *result; // r0
  int v7; // r5
  int v8; // r6
  ClientActor *v9; // r5
  int v10; // r0
  _DWORD *v11; // r3
  int v12; // r1
  int v13; // r2
  int v14; // r3
  float v15; // r0
  World *v16; // [sp+Ch] [bp-18h]
  _DWORD v17[4]; // [sp+14h] [bp-10h] BYREF

  v1 = *((ClientActor **)this + 1);
  v3 = *((ClientActor **)this + 3);
  v4 = (_BOOL4)v1;
  if ( v1 != nullptr )
  {
    if ( ClientActor::getDistanceSqToEntity(v3, v1) <= 490000.0 )
    {
      canSeeInAICache = ActorVision::canSeeInAICache(*(ActorVision **)(*((_DWORD *)this + 3) + 72), v1);
      v3 = *((ClientActor **)this + 3);
      v4 = canSeeInAICache != 0;
    }
    else
    {
      v3 = *((ClientActor **)this + 3);
      v4 = false;
    }
  }
  ClientMob::setInfuse(v3, v4);
  result = *((int **)this + 3);
  if ( result[6] < 0 )
  {
    v7 = ClientMob::getInfuse((ClientMob *)result) == 0 ? -1 : 1;
    v8 = *(_DWORD *)(*((_DWORD *)this + 3) + 216);
    if ( v7 == 1 && v8 == 0 )
      ClientActor::playSound(*((ClientActor **)this + 3), "mob.creeper.creeper_fuse", 1.0, 0.5);
    result = (int *)(v8 + v7);
    if ( v8 + v7 < 0 )
    {
      result = nullptr;
    }
    else if ( (int)result > 30 )
    {
      result = &dword_1C + 2;
    }
    *(_DWORD *)(*((_DWORD *)this + 3) + 216) = result;
    if ( result == (int *)((char *)&dword_1C + 2) )
    {
      v9 = *((ClientActor **)this + 3);
      v10 = *((_DWORD *)v9 + 19);
      v16 = *((World **)v9 + 13);
      v11 = *((_DWORD **)v9 + 17);
      v12 = v11[9];
      v13 = v11[10];
      v14 = v11[8];
      v17[1] = v12 + 50;
      v17[0] = v14;
      v17[2] = v13;
      v15 = COERCE_FLOAT(LivingAttrib::getAttackPoint(v10, 2));
      World::createExplosion(v16, v9, (const WCoord *)v17, (int)v15, false, true);
      return (int *)ClientActor::setNeedClear(*((_DWORD *)this + 3), 0);
    }
  }
  return result;
}


//======================================================================
// AICreeperSwell::AICreeperSwell(ClientActor *)
// address: 0x003038C0   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN14AICreeperSwellC2EP11ClientActor'
void __fastcall AICreeperSwell::AICreeperSwell(AICreeperSwell *this, ClientActor *lpsrc)
{
  ClientActor *v3; // r0

  *((_DWORD *)this + 1) = 0;
  v3 = lpsrc;
  *((_DWORD *)this + 2) = 0;
  *(_DWORD *)this = &off_4632D0;
  if ( lpsrc != nullptr )
    v3 = (ClientActor *)_dynamic_cast(
                          lpsrc,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ClientMob,
                          0);
  *((_DWORD *)this + 3) = v3;
  *((_DWORD *)this + 2) = 1;
}

