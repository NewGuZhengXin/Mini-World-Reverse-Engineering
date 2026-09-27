// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorMinecart

//======================================================================
// ActorMinecart::getMinecartType(void)
// address: 0x002A6394   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorMinecart::getMinecartType(ActorMinecart *this)
{
  return 0;
}


//======================================================================
// ActorMinecart::canTriggerWalking(void)
// address: 0x002A6398   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorMinecart::canTriggerWalking(ActorMinecart *this)
{
  return 0;
}


//======================================================================
// ActorMinecart::preventActorSpawning(void)
// address: 0x002A639C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorMinecart::preventActorSpawning(ActorMinecart *this)
{
  return 1;
}


//======================================================================
// ActorMinecart::canBeCollidedWith(void)
// address: 0x002A63A0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ActorMinecart::canBeCollidedWith(ActorMinecart *this)
{
  return *((_DWORD *)this + 6) >> 31;
}


//======================================================================
// ActorMinecart::canBePushed(void)
// address: 0x002A63A6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorMinecart::canBePushed(ActorMinecart *this)
{
  return 1;
}


//======================================================================
// ActorMinecart::getObjType(void)
// address: 0x002A64C0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorMinecart::getObjType(ActorMinecart *this)
{
  return 6;
}


//======================================================================
// ActorMinecart::onCollideWithPlayer(ClientPlayer *)
// address: 0x002A64C4   size: 0x2 (2 bytes)
//======================================================================
void ActorMinecart::onCollideWithPlayer()
{
  ;
}


//======================================================================
// ActorMinecart::~ActorMinecart()
// address: 0x002A64F8   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN13ActorMinecartD1Ev'
void __fastcall ActorMinecart::~ActorMinecart(ActorMinecart *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  int v4; // r2

  v1 = (_DWORD *)((char *)this + 176);
  *(_DWORD *)this = &off_45D188;
  v3 = *((_DWORD **)this + 44);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *v1 = 0;
  }
  ClientActor::~ClientActor(this);
}


//======================================================================
// ActorMinecart::~ActorMinecart()
// address: 0x002A6534   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorMinecart::~ActorMinecart(ActorMinecart *this)
{
  ActorMinecart::~ActorMinecart(this);
  operator delete(this);
}


//======================================================================
// ActorMinecart::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002A6546   size: 0x1C (28 bytes)
//======================================================================
void *__fastcall ActorMinecart::onCull(Ogre::MovableObject ***this, Ogre::GameScene **a2, Ogre::CullFrustum *a3)
{
  void *v4; // [sp+0h] [bp-Ch]

  Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], *(this + 44), 2, nullptr);
  return v4;
}


//======================================================================
// ActorMinecart::applyActorCollision(ClientActor *)
// address: 0x002A6568   size: 0x322 (802 bytes)
//======================================================================
float __fastcall ActorMinecart::applyActorCollision(ActorMinecart *this, ClientActor *a2)
{
  float result; // r0
  int v3; // r7
  int v4; // r6
  float v5; // r0
  float v6; // r4
  float v7; // r0
  void *v8; // r5
  float v9; // r0
  float v10; // r4
  float v11; // r0
  float v12; // r4
  float v13; // r0
  float v14; // r4
  float v15; // r1
  float v16; // r3
  ActorLocoMotion *v17; // r0
  float v18; // r0
  float v19; // r5
  float v20; // r4
  int v21; // [sp+14h] [bp-30h]
  float v22; // [sp+14h] [bp-30h]
  double lpsrcb; // [sp+18h] [bp-2Ch]
  double lpsrcc; // [sp+18h] [bp-2Ch]
  float lpsrca; // [sp+18h] [bp-2Ch]
  float v27; // [sp+20h] [bp-24h]
  float v28; // [sp+20h] [bp-24h]
  int v29; // [sp+28h] [bp-1Ch]
  float v30; // [sp+28h] [bp-1Ch]
  float v31; // [sp+2Ch] [bp-18h]
  float v33; // [sp+34h] [bp-10h]
  float v34; // [sp+34h] [bp-10h]
  double v35; // [sp+38h] [bp-Ch]

  result = *((float *)this + 21);
  if ( a2 != (ClientActor *)LODWORD(result) )
  {
    v3 = *((_DWORD *)a2 + 17);
    v4 = *((_DWORD *)this + 17);
    v21 = *(_DWORD *)(v3 + 32) - *(_DWORD *)(v4 + 32);
    result = *(float *)&v21;
    v29 = *(_DWORD *)(v3 + 40) - *(_DWORD *)(v4 + 40);
    if ( v21 != 0 || *(_DWORD *)(v3 + 40) != *(_DWORD *)(v4 + 40) )
    {
      v5 = j_sqrt((double)v21 * (double)v21 + 0.0 + (double)v29 * (double)v29);
      v27 = v5;
      v6 = 100.0 / v5;
      if ( (float)(100.0 / v5) > 100.0 )
        v6 = 100.0;
      v33 = (float)v21 / v5;
      v31 = (float)v29 / v5;
      v7 = (float)(v6 * 10.0) * 0.5;
      v22 = v33 * v7;
      v30 = v31 * v7;
      v8 = _dynamic_cast(
             a2,
             (const struct __class_type_info *)&`typeinfo for'ClientActor,
             (const struct __class_type_info *)&`typeinfo for'ActorMinecart,
             0);
      if ( v8 == nullptr )
      {
        ActorLocoMotion::addMotion(
          (ActorLocoMotion *)v4,
          COERCE_FLOAT(LODWORD(v22) + 0x80000000),
          0.0,
          COERCE_FLOAT(LODWORD(v30) + 0x80000000));
        v15 = v22 * 0.25;
        v16 = v30 * 0.25;
        v17 = (ActorLocoMotion *)v3;
        return COERCE_FLOAT(ActorLocoMotion::addMotion(v17, v15, 0.0, v16));
      }
      lpsrcb = (float)(*(float *)(*((_DWORD *)this + 17) + 4) * 0.017453);
      v35 = j_sin(lpsrcb);
      lpsrcc = j_cos(lpsrcb);
      v9 = v35;
      v10 = v33 * COERCE_FLOAT(LODWORD(v9) + 0x80000000);
      v11 = lpsrcc;
      v12 = (float)(v10 + (float)((float)(0.0 / v27) * 0.0)) + (float)(v31 * COERCE_FLOAT(LODWORD(v11) + 0x80000000));
      if ( v12 >= 0.0 )
        v13 = v12;
      else
        LODWORD(v13) = LODWORD(v12) + 0x80000000;
      LODWORD(result) = v13 < 0.8;
      if ( result == 0.0 )
      {
        v34 = *(float *)(v4 + 80);
        v28 = *(float *)(v4 + 72);
        lpsrca = *(float *)(v3 + 80);
        v14 = *(float *)(v3 + 72);
        if ( (*(int (__fastcall **)(void *))(*(_DWORD *)v8 + 172))(v8) == 2
          && (*(int (__fastcall **)(ActorMinecart *))(*(_DWORD *)this + 172))(this) != 2 )
        {
          *(float *)(v4 + 72) = *(float *)(v4 + 72) * 0.2;
          *(float *)(v4 + 80) = *(float *)(v4 + 80) * 0.2;
          ActorLocoMotion::addMotion((ActorLocoMotion *)v4, *(float *)(v3 + 72) - v22, 0.0, *(float *)(v3 + 80) - v30);
          *(float *)(v3 + 72) = *(float *)(v3 + 72) * 0.95;
          result = *(float *)(v3 + 80) * 0.95;
          *(float *)(v3 + 80) = result;
          return result;
        }
        if ( (*(int (__fastcall **)(void *))(*(_DWORD *)v8 + 172))(v8) != 2
          && (*(int (__fastcall **)(ActorMinecart *))(*(_DWORD *)this + 172))(this) == 2 )
        {
          *(float *)(v3 + 72) = *(float *)(v3 + 72) * 0.2;
          *(float *)(v3 + 80) = *(float *)(v3 + 80) * 0.2;
          ActorLocoMotion::addMotion((ActorLocoMotion *)v3, v22 + *(float *)(v4 + 72), 0.0, v30 + *(float *)(v4 + 80));
          *(float *)(v4 + 72) = *(float *)(v4 + 72) * 0.95;
          result = *(float *)(v4 + 80) * 0.95;
          *(float *)(v4 + 80) = result;
          return result;
        }
        v18 = (float)(v14 + v28) * 0.5;
        v19 = v18;
        v20 = (float)(lpsrca + v34) * 0.5;
        *(float *)(v4 + 72) = *(float *)(v4 + 72) * 0.2;
        *(float *)(v4 + 80) = *(float *)(v4 + 80) * 0.2;
        ActorLocoMotion::addMotion((ActorLocoMotion *)v4, v18 - v22, 0.0, v20 - v30);
        *(float *)(v3 + 72) = *(float *)(v3 + 72) * 0.2;
        *(float *)(v3 + 80) = *(float *)(v3 + 80) * 0.2;
        v15 = v19 + v22;
        v16 = v20 + v30;
        v17 = (ActorLocoMotion *)v3;
        return COERCE_FLOAT(ActorLocoMotion::addMotion(v17, v15, 0.0, v16));
      }
    }
  }
  return result;
}


//======================================================================
// ActorMinecart::ActorMinecart(int)
// address: 0x002A7480   size: 0x98 (152 bytes)
//======================================================================
// Alternative name is '_ZN13ActorMinecartC1Ei'
void __fastcall ActorMinecart::ActorMinecart(ActorMinecart *this, int a2)
{
  int v4; // r5
  MinecartLocoMotion *v5; // r5
  _DWORD *Model; // r0

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_45D188;
  *((_DWORD *)this + 43) = a2;
  v4 = operator new(0x20u);
  ActorAttrib::ActorAttrib(v4, (int)this);
  *((_DWORD *)this + 19) = v4;
  v5 = (MinecartLocoMotion *)operator new(0xE8u);
  MinecartLocoMotion::MinecartLocoMotion(v5, this);
  *((_DWORD *)this + 17) = v5;
  *((_DWORD *)v5 + 6) = 70;
  *((_DWORD *)v5 + 5) = 98;
  *(_DWORD *)(*((_DWORD *)this + 17) + 28) = *(_DWORD *)(*((_DWORD *)this + 17) + 24) / 2;
  Model = (_DWORD *)BlockMaterialMgr::getModel(
                      (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                      "entity/120001/body.omod",
                      nullptr);
  *((_DWORD *)this + 44) = Model;
  Model[104] = 1045220557;
  Model[105] = 1045220557;
  Model[106] = 1045220557;
  Model[107] = 1065353216;
  *((_DWORD *)this + 45) = 100100;
  Ogre::Model::playAnim(*((Ogre::Model **)this + 44), 100100, 1.0, 1.0);
}


//======================================================================
// ActorMinecart::create(int)
// address: 0x002A7540   size: 0x16 (22 bytes)
//======================================================================
ActorMinecartEmpty *__fastcall ActorMinecart::create(ActorMinecart *this, int a2)
{
  ActorMinecartEmpty *v3; // r4

  v3 = (ActorMinecartEmpty *)operator new(0xB8u);
  ActorMinecartEmpty::ActorMinecartEmpty(v3, (int)this);
  return v3;
}


//======================================================================
// ActorMinecart::createByType(int)
// address: 0x002A7560   size: 0x14 (20 bytes)
//======================================================================
ActorMinecartEmpty *__fastcall ActorMinecart::createByType(ActorMinecart *this, int a2)
{
  ActorMinecartEmpty *v2; // r4

  v2 = (ActorMinecartEmpty *)operator new(0xB8u);
  ActorMinecartEmpty::ActorMinecartEmpty(v2, 3800);
  return v2;
}


//======================================================================
// ActorMinecart::tick(void)
// address: 0x002A7730   size: 0x4C (76 bytes)
//======================================================================
int __fastcall ActorMinecart::tick(ActorMinecart *this)
{
  int v2; // r3
  int result; // r0
  _DWORD v4[4]; // [sp+4h] [bp-10h] BYREF

  ClientActor::tick(this);
  ClientActor::getPosition((ClientActor *)v4);
  if ( v4[1] < -6400 )
    ClientActor::setNeedClear(this, 0);
  v2 = *((_DWORD *)this + 19);
  result = *(float *)(v2 + 8) <= 0.0;
  if ( *(float *)(v2 + 8) <= 0.0 )
  {
    ClientActor::setNeedClear(this, 0);
    return ClientActor::dropItem(this, *((_DWORD *)this + 43), 1);
  }
  return result;
}


//======================================================================
// ActorMinecart::update(float)
// address: 0x002A7780   size: 0x19A (410 bytes)
//======================================================================
int __fastcall ActorMinecart::update(World **this, float a2)
{
  int v2; // r7
  _DWORD *v3; // r4
  int v4; // r6
  int v5; // r6
  int v6; // r2
  World *v7; // r3
  int v8; // r3
  int v9; // r1
  int v10; // r4
  int v11; // r1
  World *v13; // [sp+Ch] [bp-40h]
  World *v14; // [sp+Ch] [bp-40h]
  Ogre::Model **v16; // [sp+14h] [bp-38h]
  int v18[3]; // [sp+20h] [bp-2Ch] BYREF
  _BYTE v19[12]; // [sp+2Ch] [bp-20h] BYREF
  int v20; // [sp+38h] [bp-14h] BYREF
  float v21; // [sp+3Ch] [bp-10h] BYREF
  int v22; // [sp+40h] [bp-Ch]
  int v23; // [sp+44h] [bp-8h]

  ClientActor::update((ClientActor *)this, a2);
  v2 = (int)*(this + 17);
  v3 = *(this + 44);
  v16 = this + 44;
  v13 = (World *)(int)(float)((float)((float)-*(_DWORD *)(v2 + 28) + *(float *)(v2 + 152)) * 10.0);
  v4 = (int)(float)((float)(*(float *)(v2 + 156) + 0.0) * 10.0);
  v3[2] = (int)(float)((float)(*(float *)(v2 + 148) + 0.0) * 10.0);
  v3[4] = v4;
  v3[3] = v13;
  (*(void (__fastcall **)(_DWORD *))(*v3 + 64))(v3);
  v5 = (int)*(this + 44);
  Ogre::Quaternion::setEulerAngle(
    (Ogre::Quaternion *)(v5 + 20),
    *(float *)(v2 + 12)
  + (float)((float)(*(float *)(v2 + 4) - *(float *)(v2 + 12)) * (float)(*(float *)(v2 + 68) / 0.05)),
    COERCE_FLOAT(
      COERCE_INT(
        *(float *)(v2 + 16)
      + (float)((float)(*(float *)(v2 + 8) - *(float *)(v2 + 16)) * (float)(*(float *)(v2 + 68) / 0.05)))
    + 0x80000000),
    0.0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 64))(v5);
  v6 = *(_DWORD *)(v2 + 32);
  v18[1] = *(_DWORD *)(v2 + 36);
  v18[0] = v6;
  v7 = *(this + 13);
  v18[2] = *(_DWORD *)(v2 + 40);
  v14 = v7;
  v20 = 0;
  v21 = 0.0;
  v22 = 0;
  v23 = 0;
  CoordDivBlock((const WCoord *)v19, v18);
  World::getBlockLightValue2(v14, (float *)&v20, &v21, (const WCoord *)v19, true);
  v8 = (int)*(this + 44);
  *(_DWORD *)(v8 + 432) = v20;
  v9 = v22;
  v10 = v23;
  v8 += 432;
  *(float *)(v8 + 4) = v21;
  *(_DWORD *)(v8 + 8) = v9;
  *(_DWORD *)(v8 + 12) = v10;
  v11 = ((float)((float)((float)(*(float *)(v2 + 72) * *(float *)(v2 + 72))
                       + (float)(*(float *)(v2 + 76) * *(float *)(v2 + 76)))
               + (float)(*(float *)(v2 + 80) * *(float *)(v2 + 80))) > 0.0)
      + 100100;
  if ( (World *)v11 != *(this + 45) )
  {
    *(this + 45) = (World *)v11;
    Ogre::Model::playAnim(*v16, v11, 1.0, 1.0);
  }
  return (*(int (__fastcall **)(Ogre::Model *, unsigned int))(*(_DWORD *)*v16 + 40))(
           *v16,
           (unsigned int)(float)(a2 * 1000.0));
}

