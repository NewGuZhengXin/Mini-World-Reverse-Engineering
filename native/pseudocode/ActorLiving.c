// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorLiving

//======================================================================
// ActorLiving::preventActorSpawning(void)
// address: 0x0029DB9C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorLiving::preventActorSpawning(ActorLiving *this)
{
  return 1;
}


//======================================================================
// ActorLiving::canBeCollidedWith(void)
// address: 0x0029DBDC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ActorLiving::canBeCollidedWith(ActorLiving *this)
{
  return (unsigned __int8)ClientActor::isDead(this) ^ 1;
}


//======================================================================
// ActorLiving::canBePushed(void)
// address: 0x002DD21C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ActorLiving::canBePushed(ActorLiving *this)
{
  return *((_DWORD *)this + 6) >> 31;
}


//======================================================================
// ActorLiving::getSoundVolume(void)
// address: 0x002DD224   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorLiving::getSoundVolume(ActorLiving *this)
{
  return 1061997773;
}


//======================================================================
// ActorLiving::playHurtSound(void)
// address: 0x002DD22C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall ActorLiving::playHurtSound(ActorLiving *this)
{
  float v2; // r5
  float v3; // r0

  v2 = COERCE_FLOAT((*(int (__fastcall **)(ActorLiving *))(*(_DWORD *)this + 184))(this));
  v3 = (*(float (__fastcall **)(ActorLiving *))(*(_DWORD *)this + 188))(this);
  return ClientActor::playSound(this, "damage.hit", v2, v3);
}


//======================================================================
// ActorLiving::playDeathSound(void)
// address: 0x002DD258   size: 0x28 (40 bytes)
//======================================================================
int __fastcall ActorLiving::playDeathSound(ActorLiving *this)
{
  float v2; // r5
  float v3; // r0

  v2 = COERCE_FLOAT((*(int (__fastcall **)(ActorLiving *))(*(_DWORD *)this + 184))(this));
  v3 = (*(float (__fastcall **)(ActorLiving *))(*(_DWORD *)this + 188))(this);
  return ClientActor::playSound(this, "damage.hit", v2, v3);
}


//======================================================================
// ActorLiving::getSoundPitch(void)
// address: 0x002DD284   size: 0x24 (36 bytes)
//======================================================================
float __fastcall ActorLiving::getSoundPitch(ActorLiving *this)
{
  float v1; // r4

  v1 = GenRandomFloat();
  return (float)((float)(v1 - GenRandomFloat()) * 0.2) + 1.0;
}


//======================================================================
// ActorLiving::attackedFrom(OneAttackData &,ClientActor *)
// address: 0x002DD2AC   size: 0x1A2 (418 bytes)
//======================================================================
int __fastcall ActorLiving::attackedFrom(ClientActor *a1, int a2, int a3)
{
  const void *v6; // r0
  ClientActor *v7; // r0
  ClientActor *v8; // r6
  int v9; // r3
  float v10; // r7
  int v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r7
  int v16; // r6
  float v17; // r0
  float *v18; // r6
  int v19; // r3
  void (__fastcall **v20)(ClientActor *); // r3
  float v22; // [sp+0h] [bp-14h]
  int v23; // [sp+8h] [bp-Ch]
  float v24; // [sp+Ch] [bp-8h]

  v23 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)a1 + 19) + 16))(*((_DWORD *)a1 + 19));
  if ( v23 != 0 )
  {
    if ( *(int *)a2 <= 2 && a3 != 0 )
    {
      v6 = (const void *)(*(int (__fastcall **)(int))(*(_DWORD *)a3 + 72))(a3);
      if ( v6 != nullptr )
      {
        v7 = (ClientActor *)_dynamic_cast(
                              v6,
                              (const struct __class_type_info *)&`typeinfo for'ClientActor,
                              (const struct __class_type_info *)&`typeinfo for'ActorLiving,
                              0);
        v8 = v7;
        if ( v7 != nullptr )
        {
          ClientActor::setBeHurtTarget(a1, v7);
          if ( *(_DWORD *)a2 == 0 )
          {
            v10 = COERCE_FLOAT(LivingAttrib::antiInjuryEnchant(*((_DWORD *)a1 + 19), 0));
            if ( v10 > 0.0 )
              ClientActor::attackedFromType(v8, 12, LODWORD(v10), v9);
          }
          if ( *(float *)(a2 + 20) > 0.0 && *(_DWORD *)a2 == 0 )
          {
            v11 = *((_DWORD *)v8 + 17);
            v12 = *((_DWORD *)a1 + 17);
            v13 = *(_DWORD *)(v11 + 32);
            v14 = *(_DWORD *)(v12 + 32);
            v15 = v13 - v14;
            v16 = *(_DWORD *)(v11 + 40) - *(_DWORD *)(v12 + 40);
            if ( v13 == v14 && v16 == 0 )
            {
              v15 = GenRandomInt(2u) == 0 ? -1 : 1;
              v16 = GenRandomInt(2u) == 0 ? -1 : 1;
            }
            v22 = (float)v16;
            v17 = j_sqrt((float)((float)((float)((float)v15 * (float)v15) + 0.0) + (float)(v22 * v22)));
            v18 = *((float **)a1 + 17);
            v24 = *(float *)(a2 + 20) * 40.0;
            v18[18] = v18[18] * 0.5;
            v18[19] = v18[19] * 0.5;
            v18[20] = v18[20] * 0.5;
            *(float *)(*((_DWORD *)a1 + 17) + 72) = *(float *)(*((_DWORD *)a1 + 17) + 72)
                                                  - (float)((float)((float)v15 / v17) * v24);
            *(float *)(*((_DWORD *)a1 + 17) + 80) = *(float *)(*((_DWORD *)a1 + 17) + 80)
                                                  - (float)((float)(v22 / v17) * v24);
            *(float *)(*((_DWORD *)a1 + 17) + 76) = *(float *)(*((_DWORD *)a1 + 17) + 76)
                                                  + (float)((float)(*(float *)(a2 + 24) * 40.0) + 40.0);
          }
        }
      }
    }
    v19 = *(_DWORD *)a1;
    if ( *(float *)(*((_DWORD *)a1 + 19) + 8) > 0.0 )
      v20 = (void (__fastcall **)(ClientActor *))(v19 + 172);
    else
      v20 = (void (__fastcall **)(ClientActor *))(v19 + 176);
    (*v20)(a1);
  }
  return v23;
}


//======================================================================
// ActorLiving::playStepSound(void)
// address: 0x002DD45C   size: 0x56 (86 bytes)
//======================================================================
int __fastcall ActorLiving::playStepSound(ActorLiving *this)
{
  int *v1; // r5
  unsigned int v3; // r7
  unsigned int v4; // r6
  World *v5; // r0
  int v6; // r2
  int v7; // r3
  int result; // r0
  int BlockDef; // r0
  _DWORD v10[4]; // [sp+4h] [bp-10h] BYREF

  v1 = *((int **)this + 17);
  v3 = CoordDivBlock(v1[8]);
  v4 = CoordDivBlock(v1[9] - 1);
  v10[2] = CoordDivBlock(v1[10]);
  v5 = *((World **)this + 13);
  v10[1] = v4;
  v10[0] = v3;
  result = World::getBlockID(v5, (const WCoord *)v10, v6, v7);
  if ( result > 0 )
  {
    BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, result);
    return ClientActor::playSound(this, (const char *)(BlockDef + 276), 0.5, 1.0);
  }
  return result;
}


//======================================================================
// ActorLiving::ActorLiving(void)
// address: 0x002DD4B8   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN11ActorLivingC1Ev'
void __fastcall ActorLiving::ActorLiving(ActorLiving *this)
{
  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_461100;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = -1;
}


//======================================================================
// ActorLiving::setAtkingTarget(ClientActor *)
// address: 0x002DD4E8   size: 0x30 (48 bytes)
//======================================================================
ClientActor *__fastcall ActorLiving::setAtkingTarget(ActorLiving *this, ClientActor *a2)
{
  _DWORD *v2; // r5
  ClientActor *result; // r0
  _DWORD *v6; // r7

  v2 = (_DWORD *)((char *)this + 172);
  result = *((ClientActor **)this + 43);
  if ( result != nullptr )
    result = (ClientActor *)ClientActor::release(result);
  v6 = (_DWORD *)((char *)this + 176);
  if ( a2 != nullptr )
  {
    result = (ClientActor *)ClientActor::addRef(a2);
    *v2 = a2;
    *v6 = *((_DWORD *)this + 1);
  }
  else
  {
    *v2 = 0;
    *v6 = 0;
  }
  return result;
}


//======================================================================
// ActorLiving::~ActorLiving()
// address: 0x002DD518   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN11ActorLivingD1Ev'
void __fastcall ActorLiving::~ActorLiving(ActorLiving *this)
{
  *(_DWORD *)this = &off_461100;
  ActorLiving::setAtkingTarget(this, nullptr);
  ClientActor::~ClientActor(this);
}


//======================================================================
// ActorLiving::~ActorLiving()
// address: 0x002DD53C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorLiving::~ActorLiving(ActorLiving *this)
{
  ActorLiving::~ActorLiving(this);
  operator delete(this);
}


//======================================================================
// ActorLiving::attackActor(ClientActor *,int)
// address: 0x002DD54E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ActorLiving::attackActor(ActorBody **this, ClientActor *a2, ActorBody *a3)
{
  ActorLiving::setAtkingTarget((ActorLiving *)this, a2);
  *(this + 46) = nullptr;
  *(this + 45) = a3;
  ActorBody::playAttack(*(this + 16));
  return 1;
}


//======================================================================
// ActorLiving::attackActorRanged(ClientActor *,int)
// address: 0x002DD56E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ActorLiving::attackActorRanged(ActorBody **this, ClientActor *a2, ActorBody *a3)
{
  ActorLiving::setAtkingTarget((ActorLiving *)this, a2);
  *(this + 46) = (ActorBody *)(&dword_0 + 1);
  *(this + 45) = a3;
  ActorBody::playAttack(*(this + 16));
  return 1;
}


//======================================================================
// ActorLiving::canActorBeSeen(ClientActor *)
// address: 0x002DD58E   size: 0x30 (48 bytes)
//======================================================================
int __fastcall ActorLiving::canActorBeSeen(World **this, ClientActor *a2)
{
  _BYTE v4[12]; // [sp+0h] [bp-1Ch] BYREF
  _BYTE v5[16]; // [sp+Ch] [bp-10h] BYREF

  ClientActor::getEyePosition((ClientActor *)v4);
  ClientActor::getEyePosition((ClientActor *)v5);
  return (unsigned __int8)World::clip(*(this + 13), (const WCoord *)v4, (const WCoord *)v5) ^ 1;
}


//======================================================================
// ActorLiving::leaveWorld(bool)
// address: 0x002DD5BE   size: 0x16 (22 bytes)
//======================================================================
int __fastcall ActorLiving::leaveWorld(ActorLiving *this, bool a2)
{
  ActorLiving::setAtkingTarget(this, nullptr);
  return ClientActor::leaveWorld(this, a2);
}


//======================================================================
// ActorLiving::onEvent(ActorEvent const&)
// address: 0x002DD5D4   size: 0x6A (106 bytes)
//======================================================================
int __fastcall ActorLiving::onEvent(ClientActor *a1, _DWORD *a2)
{
  int result; // r0
  int *v5; // r5
  unsigned int v6; // r7
  unsigned int v7; // r6
  int v8; // r2
  int v9; // r3
  World *v10; // [sp+4h] [bp-18h]
  _DWORD v11[4]; // [sp+Ch] [bp-10h] BYREF

  result = ClientActor::onEvent();
  if ( *a2 == 14 )
  {
    v5 = *((int **)a1 + 17);
    v10 = *((World **)a1 + 13);
    v6 = CoordDivBlock(v5[8]);
    v7 = CoordDivBlock(v5[9] - 20);
    v11[2] = CoordDivBlock(v5[10]);
    v11[1] = v7;
    v11[0] = v6;
    result = World::getBlockID(v10, (const WCoord *)v11, v8, v9);
    if ( result > 0 )
    {
      result = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, result);
      if ( result != 0 )
        return ClientActor::playSound(a1, (const char *)(result + 276), 0.5, 0.75);
    }
  }
  return result;
}


//======================================================================
// ActorLiving::tick(void)
// address: 0x002DD644   size: 0x190 (400 bytes)
//======================================================================
int __fastcall ActorLiving::tick(ActorLiving *this)
{
  int v2; // r3
  ClientActor **v3; // r6
  int v4; // r3
  int v5; // r7
  float v6; // r0
  int result; // r0
  int v8; // r0
  int v9; // r1
  int v10; // r3
  int v11; // r3
  unsigned int v12; // r6
  unsigned int v13; // r6
  unsigned int v14; // r6
  EffectParticle *v15; // r6
  LivingAttrib *v16; // r0
  int v17; // r1
  float v18; // [sp+4h] [bp-18h]
  int v19; // [sp+Ch] [bp-10h] BYREF
  int v20; // [sp+10h] [bp-Ch]
  int v21; // [sp+14h] [bp-8h]

  ClientActor::tick(this);
  v2 = *((_DWORD *)this + 45);
  v3 = (ClientActor **)((char *)this + 172);
  if ( v2 > 0 )
  {
    v4 = v2 - 1;
    *((_DWORD *)this + 45) = v4;
    if ( v4 == 0 && *v3 != nullptr )
    {
      if ( *((_DWORD *)this + 46) == 1 )
      {
        v5 = ClientActorArrow::shootArrow(
               *((ClientActorMgr ***)this + 13),
               this,
               *v3,
               (ClientActor *)0x43200000,
               2.0,
               v18);
        *(_DWORD *)(v5 + 176) = LivingAttrib::getAttackPoint(*((_DWORD *)this + 19), 1);
        *(float *)(v5 + 172) = LivingAttrib::getKnockback(*((LivingAttrib **)this + 19), 1, -1);
        v6 = GenRandomFloat();
        ClientActor::playSound(this, "random.bow", 1.0, 1.0 / (float)((float)(v6 * 0.4) + 0.8));
      }
      else
      {
        (*(void (__fastcall **)(ActorLiving *, ClientActor *))(*(_DWORD *)this + 192))(this, *v3);
      }
    }
  }
  if ( *v3 != nullptr && *((int *)*v3 + 6) >= 0 )
    ActorLiving::setAtkingTarget(this, nullptr);
  result = ClientActor::isDead(this);
  if ( result == 0 )
  {
    v8 = *((_DWORD *)this + 1);
    v9 = v8 % 20;
    result = v8 / 20;
    if ( v9 == 0 )
    {
      if ( ActorLocoMotion::isInsideOpaqueBlock(*((ActorLocoMotion **)this + 17)) != 0 )
        ClientActor::attackedFromType(this, 10, 1065353216, v10);
      if ( ActorLocoMotion::isInsideWaterBlock(*((ActorLocoMotion **)this + 17)) != 0 )
      {
        if ( *(float *)(*((_DWORD *)this + 19) + 32) == 0.0 )
        {
          ClientActor::attackedFromType(this, 11, 1065353216, v11);
          ClientActor::getPosition((ClientActor *)&v19);
          v12 = GenRandomInt(0x64u);
          v19 += v12 - GenRandomInt(0x64u);
          v13 = GenRandomInt(0x64u);
          v20 += v13 - GenRandomInt(0x64u);
          v14 = GenRandomInt(0x64u);
          v21 += v14 - GenRandomInt(0x64u);
          v15 = (EffectParticle *)operator new(0x14u);
          EffectParticle::EffectParticle(
            v15,
            *((World **)this + 13),
            (Ogre::FixedString *)"particles/1025.ent",
            (const WCoord *)&v19,
            40);
          return EffectManager::addEffect((EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton, v15);
        }
        v16 = *((LivingAttrib **)this + 19);
        v17 = -1;
      }
      else
      {
        v16 = *((LivingAttrib **)this + 19);
        v17 = 20;
      }
      return LivingAttrib::addOxygen(v16, v17);
    }
  }
  return result;
}

