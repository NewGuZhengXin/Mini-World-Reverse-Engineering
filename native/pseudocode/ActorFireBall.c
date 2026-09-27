// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorFireBall

//======================================================================
// ActorFireBall::getObjType(void)
// address: 0x0029D222   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorFireBall::getObjType(ActorFireBall *this)
{
  return 0;
}


//======================================================================
// ActorFireBall::getMotionFactor(void)
// address: 0x0029D228   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorFireBall::getMotionFactor(ActorFireBall *this)
{
  return 1064514355;
}


//======================================================================
// ActorFireBall::~ActorFireBall()
// address: 0x0029D230   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN13ActorFireBallD1Ev'
void __fastcall ActorFireBall::~ActorFireBall(ActorFireBall *this)
{
  ClientActor *v2; // r0
  _DWORD *v3; // r0
  int v4; // r3

  *(_DWORD *)this = &off_45C518;
  v2 = *((ClientActor **)this + 46);
  if ( v2 != nullptr )
    ClientActor::release(v2);
  v3 = *((_DWORD **)this + 51);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *((_DWORD *)this + 51) = 0;
  }
  ClientActor::~ClientActor(this);
}


//======================================================================
// ActorFireBall::~ActorFireBall()
// address: 0x0029D278   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorFireBall::~ActorFireBall(ActorFireBall *this)
{
  ActorFireBall::~ActorFireBall(this);
  operator delete(this);
}


//======================================================================
// ActorFireBall::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x0029D2BA   size: 0x1C (28 bytes)
//======================================================================
void *__fastcall ActorFireBall::onCull(Ogre::MovableObject ***this, Ogre::GameScene **a2, Ogre::CullFrustum *a3)
{
  void *v4; // [sp+0h] [bp-Ch]

  Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], *(this + 51), 2, nullptr);
  return v4;
}


//======================================================================
// ActorFireBall::ActorFireBall(void)
// address: 0x0029D3B0   size: 0x80 (128 bytes)
//======================================================================
// Alternative name is '_ZN13ActorFireBallC1Ev'
void __fastcall ActorFireBall::ActorFireBall(ActorFireBall *this, int a2, Ogre::FixedString *a3)
{
  ActorLocoMotion *v4; // r5
  Ogre::Entity *v5; // r5
  int v6; // r2
  void *v7; // r1
  Ogre::FixedString *v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[1] = a3;
  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_45C518;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 50) = 0;
  v4 = (ActorLocoMotion *)operator new(0x94u);
  ActorLocoMotion::ActorLocoMotion(v4, this);
  *((_DWORD *)this + 17) = v4;
  *((_DWORD *)v4 + 6) = 100;
  *((_DWORD *)v4 + 5) = 100;
  v5 = (Ogre::Entity *)operator new(0x210u);
  Ogre::Entity::Entity(v5);
  *((_DWORD *)this + 51) = v5;
  v8[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                 (Ogre::FixedString *)"particles/1029.ent",
                                 (const char *)0xFFFFFFFF,
                                 v6,
                                 (int)this + 204);
  Ogre::Entity::load(v5, v8, 1);
  Ogre::FixedString::release((int)v8[0], v7);
}


//======================================================================
// ActorFireBall::ActorFireBall(ActorLiving *,Ogre::Vector3 const&)
// address: 0x0029D454   size: 0x186 (390 bytes)
//======================================================================
// Alternative name is '_ZN13ActorFireBallC1EP11ActorLivingRKN4Ogre7Vector3E'
void __fastcall ActorFireBall::ActorFireBall(ActorFireBall *this, ActorLiving *a2, Ogre::FixedString **a3)
{
  ActorLocoMotion *v4; // r5
  Ogre::Entity *v5; // r5
  int v6; // r2
  void *v7; // r1
  int v8; // r5
  float v9; // r5
  float v10; // r5
  float v11; // r6
  ClientActor *v13; // [sp+Ch] [bp-20h]
  Ogre::FixedString *v15; // [sp+1Ch] [bp-10h] BYREF
  float v16; // [sp+20h] [bp-Ch]
  float v17; // [sp+24h] [bp-8h]

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_45C518;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  *((_DWORD *)this + 50) = 0;
  v4 = (ActorLocoMotion *)operator new(0x94u);
  ActorLocoMotion::ActorLocoMotion(v4, this);
  *((_DWORD *)this + 17) = v4;
  *((_DWORD *)v4 + 6) = 100;
  *((_DWORD *)v4 + 5) = 100;
  v5 = (Ogre::Entity *)operator new(0x210u);
  Ogre::Entity::Entity(v5);
  *((_DWORD *)this + 51) = v5;
  *(float *)&v15 = COERCE_FLOAT(
                     Ogre::FixedString::insert(
                       (Ogre::FixedString *)"particles/1029.ent",
                       (const char *)0xFFFFFFFF,
                       v6,
                       (int)this + 204));
  Ogre::Entity::load(v5, &v15, 1);
  Ogre::FixedString::release((int)v15, v7);
  *((_DWORD *)this + 46) = a2;
  ClientActor::addRef(a2);
  v8 = *((_DWORD *)this + 17);
  v13 = *(ClientActor **)(*(_DWORD *)v8 + 16);
  ClientActor::getPosition((ClientActor *)&v15);
  ((void (__fastcall *)(int, Ogre::FixedString **, _DWORD, _DWORD))v13)(
    v8,
    &v15,
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 46) + 68) + 4),
    *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 46) + 68) + 8));
  v15 = *a3;
  v16 = *((float *)a3 + 1);
  v17 = *((float *)a3 + 2);
  *(float *)&v15 = *(float *)&v15 + (float)(COERCE_FLOAT(GenGaussian()) * 40.0);
  v16 = v16 + (float)(COERCE_FLOAT(GenGaussian()) * 40.0);
  v17 = v17 + (float)(COERCE_FLOAT(GenGaussian()) * 40.0);
  v9 = Ogre::Vector3::length((Ogre::Vector3 *)&v15);
  if ( v9 <= 0.00001 )
  {
    *(float *)&v15 = 0.0;
    v16 = 0.0;
    v17 = 0.0;
  }
  else
  {
    *(float *)&v15 = *(float *)&v15 * (float)(1.0 / v9);
    v16 = v16 * (float)(1.0 / v9);
    v17 = v17 * (float)(1.0 / v9);
  }
  v10 = v16 * 10.0;
  v11 = v17 * 10.0;
  *((float *)this + 43) = *(float *)&v15 * 10.0;
  *((float *)this + 44) = v10;
  *((float *)this + 45) = v11;
}


//======================================================================
// ActorFireBall::setAcceleration(Ogre::Vector3 const&)
// address: 0x0029D5F0   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ActorFireBall::setAcceleration(ActorFireBall *this, const Ogre::Vector3 *a2)
{
  ActorFireBall *v2; // r5
  float v4; // r0
  float v5; // r7
  float v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch]

  LODWORD(v8) = this;
  v2 = this;
  v4 = 0.1 / Ogre::Vector3::length(a2);
  v5 = v4 * *((float *)a2 + 1);
  *((float *)&v8 + 1) = v4 * *((float *)a2 + 2);
  v6 = *(float *)a2 * v4;
  v2 = (ActorFireBall *)((char *)v2 + 172);
  *((float *)v2 + 1) = v5;
  *(float *)v2 = v6;
  *((_DWORD *)v2 + 2) = HIDWORD(v8);
  return v8;
}


//======================================================================
// ActorFireBall::tick(void)
// address: 0x0029D7E8   size: 0x27C (636 bytes)
//======================================================================
float __fastcall ActorFireBall::tick(ActorFireBall *this)
{
  char *v1; // r7
  ClientActor *v3; // r0
  float result; // r0
  unsigned int v5; // r6
  unsigned int v6; // r0
  int v7; // r3
  int v8; // r3
  int v9; // r1
  int v10; // r6
  int v11; // r3
  int v12; // r5
  int v13; // r7
  int v14; // r1
  __int64 v15; // r0
  float v16; // r6
  int v17; // r6
  int v18; // r0
  int v19; // r3
  EffectParticle *v20; // r6
  float *v21; // r5
  float *v22; // r4
  World *v23; // [sp+Ch] [bp-88h]
  World *i; // [sp+Ch] [bp-88h]
  EffectManager *v25; // [sp+10h] [bp-84h]
  EffectManager *v26; // [sp+10h] [bp-84h]
  EffectManager *v27; // [sp+10h] [bp-84h]
  int v28; // [sp+14h] [bp-80h]
  _DWORD v29[3]; // [sp+1Ch] [bp-78h] BYREF
  int v30; // [sp+28h] [bp-6Ch] BYREF
  int v31; // [sp+2Ch] [bp-68h]
  int v32; // [sp+30h] [bp-64h]
  float v33; // [sp+34h] [bp-60h] BYREF
  float v34; // [sp+38h] [bp-5Ch]
  float v35; // [sp+3Ch] [bp-58h]
  float v36; // [sp+40h] [bp-54h]
  _DWORD v37[16]; // [sp+44h] [bp-50h] BYREF
  void *v38; // [sp+84h] [bp-10h]
  int v39; // [sp+88h] [bp-Ch]
  int v40; // [sp+8Ch] [bp-8h]

  v1 = (char *)this + 184;
  v3 = *((ClientActor **)this + 46);
  if ( v3 != nullptr && (ClientActor::isDead(v3) != 0 || *(int *)(*(_DWORD *)v1 + 24) >= 0) )
    return COERCE_FLOAT(ClientActor::setNeedClear(this, 0));
  v23 = *((World **)this + 13);
  ClientActor::getPosition((ClientActor *)&v30);
  v5 = CoordDivBlock(v30);
  v25 = (EffectManager *)CoordDivBlock(v31);
  v6 = CoordDivBlock(v32);
  v37[0] = v5;
  v37[2] = v6;
  v37[1] = v25;
  if ( World::blockExists(v23, (const WCoord *)v37) == 0 )
    return COERCE_FLOAT(ClientActor::setNeedClear(this, 0));
  ClientActor::tick(this);
  ClientActor::setFire(this, 1);
  v7 = *((_DWORD *)this + 50) + 1;
  *((_DWORD *)this + 50) = v7;
  if ( v7 > 40 )
    ClientActor::setNeedClear(this, 0);
  if ( Ogre::Vector3::length((Ogre::Vector3 *)(*((_DWORD *)this + 17) + 72)) > 1.0 )
  {
    v36 = 3.4028e38;
    v8 = *((_DWORD *)this + 17);
    v9 = 10 * *(_DWORD *)(v8 + 40);
    v10 = *(_DWORD *)(v8 + 32);
    v31 = 10 * *(_DWORD *)(v8 + 36);
    v32 = v9;
    v30 = 10 * v10;
    v33 = *(float *)(v8 + 72);
    v34 = *(float *)(v8 + 76);
    v35 = *(float *)(v8 + 80);
    v36 = Ogre::Vector3::length((Ogre::Vector3 *)&v33);
    v33 = v33 / v36;
    v34 = v34 / v36;
    v35 = v35 / v36;
    j_memset(v29, 0, sizeof(v29));
    v11 = *((_DWORD *)this + 50);
    v29[0] = this;
    if ( v11 <= 25 )
      v29[1] = *(_DWORD *)v1;
    v38 = nullptr;
    v39 = 0;
    v40 = 0;
    if ( World::pickAll(*((_DWORD *)this + 13), &v30, v37, v29, 1) > 0 )
      (*(void (__fastcall **)(ActorFireBall *, _DWORD *))(*(_DWORD *)this + 176))(this, v37);
    v12 = *((_DWORD *)this + 17);
    v26 = (EffectManager *)(int)*(float *)(v12 + 80);
    v13 = *(_DWORD *)(v12 + 36) + (int)*(float *)(v12 + 76);
    v14 = *(_DWORD *)(v12 + 40);
    *(_DWORD *)(v12 + 32) += (int)*(float *)(v12 + 72);
    *(_DWORD *)(v12 + 36) = v13;
    *(_DWORD *)(v12 + 40) = (char *)v26 + v14;
    HIDWORD(v15) = *((_DWORD *)this + 17);
    LODWORD(v15) = HIDWORD(v15) + 4;
    HIDWORD(v15) += 8;
    Direction2PitchYaw(v15, (const Ogre::Vector3 *)&v33);
    if ( v38 != nullptr )
      operator delete(v38);
  }
  v16 = COERCE_FLOAT((*(int (__fastcall **)(ActorFireBall *))(*(_DWORD *)this + 172))(this));
  if ( ClientActor::isInWater(this) != 0 )
  {
    for ( i = (World *)&byte_4; i != nullptr; i = (World *)((char *)i - 1) )
    {
      v17 = *((_DWORD *)this + 17);
      v28 = *(_DWORD *)(v17 + 40) - (int)(float)(*(float *)(v17 + 80) * 0.25);
      v18 = (int)(float)(*(float *)(v17 + 72) * 0.25);
      v19 = *(_DWORD *)(v17 + 32);
      v37[1] = *(_DWORD *)(v17 + 36) - (int)(float)(*(float *)(v17 + 76) * 0.25);
      v37[0] = v19 - v18;
      v37[2] = v28;
      v27 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
      v20 = (EffectParticle *)operator new(0x14u);
      EffectParticle::EffectParticle(
        v20,
        *((World **)this + 13),
        (Ogre::FixedString *)"particles/1025.ent",
        (const WCoord *)v37,
        40);
      EffectManager::addEffect(v27, v20);
    }
    v16 = 0.8;
  }
  v21 = *((float **)this + 17);
  v21[18] = v21[18] + *((float *)this + 43);
  v21[19] = v21[19] + *((float *)this + 44);
  v21[20] = v21[20] + *((float *)this + 45);
  v22 = *((float **)this + 17);
  v22[18] = v22[18] * v16;
  v22[19] = v22[19] * v16;
  result = v22[20] * v16;
  v22[20] = result;
  return result;
}


//======================================================================
// ActorFireBall::update(float)
// address: 0x0029DA74   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall ActorFireBall::update(ActorFireBall *this, float a2)
{
  ActorFireBall *v3; // r6
  int v4; // r4
  _DWORD *v5; // r5
  int v6; // r7
  float v8; // [sp+4h] [bp-18h]
  int v10; // [sp+14h] [bp-8h]

  v3 = this;
  ClientActor::update(this, a2);
  v4 = *((_DWORD *)this + 17);
  v3 = (ActorFireBall *)((char *)v3 + 204);
  v5 = *(_DWORD **)v3;
  v8 = *(float *)(v4 + 68) / 0.05;
  v10 = (int)(float)((float)((float)*(int *)(v4 + 60)
                           + (float)((float)((float)*(int *)(v4 + 36) - (float)*(int *)(v4 + 60)) * v8))
                   * 10.0);
  v6 = (int)(float)((float)((float)*(int *)(v4 + 64)
                          + (float)((float)((float)*(int *)(v4 + 40) - (float)*(int *)(v4 + 64)) * v8))
                  * 10.0);
  v5[2] = (int)(float)((float)((float)*(int *)(v4 + 56)
                             + (float)((float)((float)*(int *)(v4 + 32) - (float)*(int *)(v4 + 56)) * v8))
                     * 10.0);
  v5[4] = v6;
  v5[3] = v10;
  (*(void (__fastcall **)(_DWORD *))(*v5 + 64))(v5);
  return (*(int (__fastcall **)(_DWORD, unsigned int))(**(_DWORD **)v3 + 40))(
           *(_DWORD *)v3,
           (unsigned int)(float)(a2 * 1000.0));
}


//======================================================================
// ActorFireBall::enterWorld(World *)
// address: 0x0029DB54   size: 0x40 (64 bytes)
//======================================================================
void *__fastcall ActorFireBall::enterWorld(ActorFireBall *this, ClientActorMgr **a2)
{
  void *result; // r0
  __int64 v5; // r2

  result = (void *)ClientActor::enterWorld(this, (World *)a2);
  v5 = *((_QWORD *)this + 24);
  if ( v5 > 0 )
  {
    result = (void *)ClientActorMgr::findActorByWID(a2[33], v5);
    if ( result != nullptr )
      result = _dynamic_cast(
                 result,
                 (const struct __class_type_info *)&`typeinfo for'ClientActor,
                 (const struct __class_type_info *)&`typeinfo for'ActorLiving,
                 0);
    *((_DWORD *)this + 46) = result;
  }
  return result;
}

