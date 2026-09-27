// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LivingLocoMotion

//======================================================================
// LivingLocoMotion::isPlayerFlyMode(void)
// address: 0x002D0E40   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LivingLocoMotion::isPlayerFlyMode(LivingLocoMotion *this)
{
  return 0;
}


//======================================================================
// LivingLocoMotion::~LivingLocoMotion()
// address: 0x002D0E44   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN16LivingLocoMotionD1Ev'
void __fastcall LivingLocoMotion::~LivingLocoMotion(LivingLocoMotion *this)
{
  void *v2; // r5

  *(_DWORD *)this = &off_4603D8;
  v2 = *((void **)this + 41);
  if ( v2 != nullptr )
  {
    NavigationPath::~NavigationPath(*((NavigationPath **)this + 41));
    operator delete(v2);
  }
  ActorLocoMotion::~ActorLocoMotion(this);
}


//======================================================================
// LivingLocoMotion::~LivingLocoMotion()
// address: 0x002D0E78   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LivingLocoMotion::~LivingLocoMotion(LivingLocoMotion *this)
{
  LivingLocoMotion::~LivingLocoMotion(this);
  operator delete(this);
}


//======================================================================
// LivingLocoMotion::collideWithNearbyActors(void)
// address: 0x002D0E8A   size: 0x88 (136 bytes)
//======================================================================
void __fastcall LivingLocoMotion::collideWithNearbyActors(LivingLocoMotion *this)
{
  World *v2; // r0
  unsigned int i; // r4
  void *v4; // [sp+4h] [bp-28h] BYREF
  int v5; // [sp+8h] [bp-24h]
  int v6; // [sp+Ch] [bp-20h]
  int v7[2]; // [sp+10h] [bp-1Ch] BYREF
  int v8; // [sp+18h] [bp-14h]
  int v9; // [sp+1Ch] [bp-10h]
  int v10; // [sp+24h] [bp-8h]

  ActorLocoMotion::getCollideBox(*(ActorLocoMotion **)(*((_DWORD *)this + 28) + 68), (CollideAABB *)v7);
  v2 = *((World **)this + 27);
  v7[0] -= 20;
  v8 -= 20;
  v9 += 40;
  v10 += 40;
  v4 = nullptr;
  v5 = 0;
  v6 = 0;
  World::getActorsInBoxExclude(v2, (int)&v4, v7, *((_DWORD *)this + 28));
  for ( i = 0; i < (v5 - (int)v4) >> 2; ++i )
  {
    if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)v4 + i) + 88))(*((_DWORD *)v4 + i)) != 0 )
      (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 28) + 32))(
        *((_DWORD *)this + 28),
        *((_DWORD *)v4 + i));
  }
  if ( v4 != nullptr )
    operator delete(v4);
}


//======================================================================
// LivingLocoMotion::moveEntityWithHeading(float,float)
// address: 0x002D0F14   size: 0x2EC (748 bytes)
//======================================================================
float __fastcall LivingLocoMotion::moveEntityWithHeading(LivingLocoMotion *this, float a2, float a3)
{
  int v5; // r0
  float v6; // r0
  float v7; // r6
  float v8; // r1
  float v9; // r7
  float v10; // r0
  float v11; // r0
  float v12; // r0
  float v13; // r5
  float result; // r0
  unsigned int v15; // r6
  unsigned int v16; // r0
  int BlockID; // r0
  float v18; // r6
  float v19; // r3
  float v20; // r6
  float v21; // r6
  unsigned int v22; // r6
  unsigned int v23; // r7
  unsigned int v24; // r0
  int v25; // r0
  float v26; // r5
  World *v27; // [sp+4h] [bp-20h]
  int v28; // [sp+8h] [bp-1Ch]
  unsigned int v29; // [sp+8h] [bp-1Ch]
  World *v31; // [sp+Ch] [bp-18h]
  _DWORD v32[4]; // [sp+14h] [bp-10h] BYREF

  v5 = (*(int (__fastcall **)(LivingLocoMotion *))(*(_DWORD *)this + 48))(this);
  if ( *((_BYTE *)this + 125) != 0 && v5 == 0 )
  {
    v28 = *((_DWORD *)this + 9);
    (*(void (__fastcall **)(LivingLocoMotion *, _DWORD, _DWORD, int))(*(_DWORD *)this + 24))(
      this,
      LODWORD(a2),
      LODWORD(a3),
      1082130432);
    ActorLocoMotion::doMoveStep(this, (LivingLocoMotion *)((char *)this + 72));
    v6 = *((float *)this + 18) * 0.8;
    *((float *)this + 18) = v6;
    v7 = v6;
    v8 = 0.8;
    v9 = *((float *)this + 19) * 0.8;
    *((float *)this + 19) = v9;
    v10 = *((float *)this + 20);
    goto LABEL_7;
  }
  if ( *((_BYTE *)this + 126) != 0 && v5 == 0 )
  {
    v28 = *((_DWORD *)this + 9);
    (*(void (__fastcall **)(LivingLocoMotion *, _DWORD, _DWORD, int))(*(_DWORD *)this + 24))(
      this,
      LODWORD(a2),
      LODWORD(a3),
      0x40000000);
    ActorLocoMotion::doMoveStep(this, (LivingLocoMotion *)((char *)this + 72));
    v11 = *((float *)this + 18) * 0.5;
    *((float *)this + 18) = v11;
    v7 = v11;
    v9 = *((float *)this + 19) * 0.5;
    *((float *)this + 19) = v9;
    v10 = *((float *)this + 20);
    v8 = 0.5;
LABEL_7:
    v12 = v10 * v8;
    *((float *)this + 20) = v12;
    v13 = v12;
    result = v9 - 2.0;
    *((float *)this + 19) = v9 - 2.0;
    if ( *((_BYTE *)this + 136) != 0 )
    {
      result = COERCE_FLOAT(
                 ActorLocoMotion::isOffsetPositionInLiquid(
                   this,
                   v7,
                   (float)((float)(result + 60.0) - (float)*((int *)this + 9)) + (float)v28,
                   v13));
      if ( result != 0.0 )
        *((_DWORD *)this + 19) = 1106247680;
    }
    return result;
  }
  if ( *((_BYTE *)this + 124) != 0 )
  {
    v27 = *((World **)this + 27);
    v29 = CoordDivBlock(*((_DWORD *)this + 8));
    v15 = CoordDivBlock(*((_DWORD *)this + 9));
    v16 = CoordDivBlock(*((_DWORD *)this + 10));
    v32[1] = v15 + dword_51665C;
    v32[2] = v16 + dword_516660;
    v32[0] = v29 + dword_516658;
    BlockID = World::getBlockID(v27, (const WCoord *)v32, v29, v29 + dword_516658);
    v18 = *(float *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID) + 40)
        * 0.91;
  }
  else
  {
    v18 = 0.91;
  }
  if ( *((_BYTE *)this + 124) != 0 )
    v19 = COERCE_FLOAT(ClientActor::getAIMoveSpeed(*((ClientActor **)this + 28)))
        * (float)(0.16277 / (float)((float)(v18 * v18) * v18));
  else
    v19 = *((float *)this + 33);
  (*(void (__fastcall **)(LivingLocoMotion *, _DWORD, _DWORD, float))(*(_DWORD *)this + 24))(
    this,
    LODWORD(a2),
    LODWORD(a3),
    COERCE_FLOAT(LODWORD(v19)));
  if ( (*(int (__fastcall **)(LivingLocoMotion *))(*(_DWORD *)this + 20))(this) != 0 )
  {
    v20 = *((float *)this + 18);
    if ( v20 < -15.0 )
    {
      v20 = -15.0;
    }
    else if ( v20 > 15.0 )
    {
      v20 = 15.0;
    }
    *((float *)this + 18) = v20;
    v21 = *((float *)this + 20);
    if ( v21 < -15.0 )
    {
      v21 = -15.0;
    }
    else if ( v21 > 15.0 )
    {
      v21 = 15.0;
    }
    *((float *)this + 20) = v21;
    *((_DWORD *)this + 30) = 0;
    if ( *((float *)this + 19) < -15.0 )
      *((_DWORD *)this + 19) = -1049624576;
    if ( *((_BYTE *)this + 129) != 0
      && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 28) + 24))(*((_DWORD *)this + 28)) == 5
      && *((float *)this + 19) < 0.0 )
    {
      *((_DWORD *)this + 19) = 0;
    }
  }
  ActorLocoMotion::doMoveStep(this, (LivingLocoMotion *)((char *)this + 72));
  if ( *((_BYTE *)this + 124) != 0 )
  {
    v31 = *((World **)this + 27);
    v22 = CoordDivBlock(*((_DWORD *)this + 8));
    v23 = CoordDivBlock(*((_DWORD *)this + 9));
    v24 = CoordDivBlock(*((_DWORD *)this + 10));
    v32[1] = v23 + dword_51665C;
    v32[2] = v24 + dword_516660;
    v32[0] = v22 + dword_516658;
    v25 = World::getBlockID(v31, (const WCoord *)v32, dword_516660, dword_516658);
    v26 = *(float *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v25) + 40) * 0.91;
  }
  else
  {
    v26 = 0.91;
  }
  if ( *((_BYTE *)this + 136) != 0 && (*(int (__fastcall **)(LivingLocoMotion *))(*(_DWORD *)this + 20))(this) != 0 )
    *((_DWORD *)this + 19) = 1101004800;
  *((float *)this + 19) = (float)(*((float *)this + 19) - 8.0) * 0.98;
  *((float *)this + 18) = *((float *)this + 18) * v26;
  result = *((float *)this + 20) * v26;
  *((float *)this + 20) = result;
  return result;
}


//======================================================================
// LivingLocoMotion::LivingLocoMotion(ClientActor *)
// address: 0x002D1230   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN16LivingLocoMotionC2EP11ClientActor'
void __fastcall LivingLocoMotion::LivingLocoMotion(LivingLocoMotion *this, ClientActor *a2)
{
  ActorLocoMotion::ActorLocoMotion(this, a2);
  *(_DWORD *)this = &off_4603D8;
  *((_DWORD *)this + 41) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_BYTE *)this + 156) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 45) = -1082130432;
}


//======================================================================
// LivingLocoMotion::doJump(void)
// address: 0x002D1270   size: 0xA2 (162 bytes)
//======================================================================
LivingLocoMotion *__fastcall LivingLocoMotion::doJump(LivingLocoMotion *this)
{
  double v2; // r4
  double v3; // r4
  float v4; // r0
  float v5; // r0
  const void *v6; // r0
  void *v7; // r0
  LivingLocoMotion *v9; // [sp+0h] [bp-10h]
  double v10; // [sp+8h] [bp-8h]

  v9 = this;
  *((_DWORD *)this + 19) = 1109393408;
  if ( *((_BYTE *)this + 128) != 0 )
  {
    v2 = (float)(*((float *)this + 1) * 0.017453);
    v10 = j_sin(v2);
    v3 = j_cos(v2);
    v4 = v10;
    *((float *)this + 18) = *((float *)this + 18) + (float)(COERCE_FLOAT(LODWORD(v4) + 0x80000000) * 20.0);
    v5 = v3;
    *((float *)this + 20) = *((float *)this + 20) + (float)(COERCE_FLOAT(LODWORD(v5) + 0x80000000) * 20.0);
  }
  v6 = *((const void **)this + 28);
  if ( v6 != nullptr )
  {
    v7 = _dynamic_cast(
           v6,
           (const struct __class_type_info *)&`typeinfo for'ClientActor,
           (const struct __class_type_info *)&`typeinfo for'ClientPlayer,
           0);
    if ( v7 != nullptr )
    {
      v9 = (LivingLocoMotion *)(&dword_0 + 1);
      (*(void (__fastcall **)(void *, int, int, _DWORD))(*(_DWORD *)v7 + 208))(v7, 3, 20, 0);
    }
  }
  return v9;
}


//======================================================================
// LivingLocoMotion::updateJumping(void)
// address: 0x002D1328   size: 0x5C (92 bytes)
//======================================================================
float __fastcall LivingLocoMotion::updateJumping(float this)
{
  int *v1; // r5
  int v2; // r3
  float v3; // r4
  int v4; // r3

  v1 = (int *)(LODWORD(this) + 160);
  v2 = *(_DWORD *)(LODWORD(this) + 160);
  v3 = this;
  if ( v2 > 0 )
    *v1 = v2 - 1;
  v4 = *(unsigned __int8 *)(LODWORD(this) + 156);
  if ( *(_BYTE *)(LODWORD(this) + 156) == 0 )
    goto LABEL_10;
  if ( *(_BYTE *)(LODWORD(this) + 125) != 0 || *(_BYTE *)(LODWORD(this) + 126) != 0 )
  {
    this = *(float *)(LODWORD(this) + 76) + 4.0;
    *(float *)(LODWORD(v3) + 76) = this;
    return this;
  }
  if ( *(_BYTE *)(LODWORD(this) + 124) != 0 && *v1 == 0 )
  {
    this = COERCE_FLOAT(LivingLocoMotion::doJump((LivingLocoMotion *)LODWORD(this)));
    v4 = 10;
LABEL_10:
    *v1 = v4;
  }
  return this;
}


//======================================================================
// LivingLocoMotion::setTarget(WCoord const&,float)
// address: 0x002D1384   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall LivingLocoMotion::setTarget(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  _DWORD *result; // r0

  v3 = a1 + 168;
  *(_DWORD *)(a1 + 168) = *a2;
  result = (_DWORD *)(a1 + 180);
  *(_DWORD *)(v3 + 4) = a2[1];
  *(_DWORD *)(v3 + 8) = a2[2];
  *result = a3;
  return result;
}


//======================================================================
// LivingLocoMotion::clearTarget(void)
// address: 0x002D139C   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall LivingLocoMotion::clearTarget(LivingLocoMotion *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 180);
  *result = -1082130432;
  return result;
}


//======================================================================
// LivingLocoMotion::updateMoveTarget(void)
// address: 0x002D13A8   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall LivingLocoMotion::updateMoveTarget(LivingLocoMotion *this)
{
  int v2; // r6
  int v3; // r5
  float v5; // r7
  int v6; // [sp+4h] [bp-20h]
  float *v7; // [sp+8h] [bp-1Ch]
  _BYTE *v8; // [sp+Ch] [bp-18h]
  float v9[4]; // [sp+14h] [bp-10h] BYREF

  *((_DWORD *)this + 37) = 0;
  *((_BYTE *)this + 156) = 0;
  v7 = (float *)((char *)this + 148);
  v8 = (char *)this + 156;
  v2 = *((_DWORD *)this + 42) - *((_DWORD *)this + 8);
  v6 = *((_DWORD *)this + 43) - *((_DWORD *)this + 9);
  v3 = *((_DWORD *)this + 44) - *((_DWORD *)this + 10);
  if ( v2 != 0 || *((_DWORD *)this + 43) != *((_DWORD *)this + 9) || v3 != 0 )
  {
    v9[0] = (float)v2;
    v9[1] = (float)v6;
    v9[2] = (float)v3;
    ActorLocoMotion::setMoveDir(this, (const Ogre::Vector3 *)v9);
    v5 = (*(float (__fastcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)this + 28) + 76) + 24))(*(_DWORD *)(*((_DWORD *)this + 28) + 76))
       * *((float *)this + 45);
    ClientActor::setAIMoveSpeed(*((ClientActor **)this + 28), v5);
    *v7 = v5;
    if ( v6 > 0 && v2 * v2 + v3 * v3 <= 9999 )
      *v8 = 1;
    LivingLocoMotion::clearTarget(this);
    return 0;
  }
  else
  {
    LivingLocoMotion::clearTarget(this);
    return 1;
  }
}


//======================================================================
// LivingLocoMotion::sendMoveEvent(MOVEACT_TYPE)
// address: 0x002D1460   size: 0x2C (44 bytes)
//======================================================================
int __fastcall LivingLocoMotion::sendMoveEvent(int a1)
{
  int vars0; // [sp+10h] [bp+0h]
  int vars4; // [sp+14h] [bp+4h]

  vars0 = 0;
  vars4 = 0;
  return ClientActor::sendEvent(*(_DWORD *)(a1 + 112));
}


//======================================================================
// LivingLocoMotion::tick(void)
// address: 0x002D148C   size: 0x132 (306 bytes)
//======================================================================
int __fastcall LivingLocoMotion::tick(LivingLocoMotion *this)
{
  float v2; // r7
  float v3; // r0
  float v4; // r6
  float v5; // r5
  float v6; // r0
  float v7; // r0
  float v8; // r0
  float *v9; // r6
  float *v10; // r5
  float v11; // r0
  float v12; // r7
  float v13; // r0

  ActorLocoMotion::tick(this);
  v2 = *((float *)this + 18) * 0.98;
  *((float *)this + 18) = v2;
  v3 = *((float *)this + 19) * 0.98;
  *((float *)this + 19) = v3;
  v4 = v3;
  v5 = *((float *)this + 20) * 0.98;
  *((float *)this + 20) = v5;
  if ( v2 >= 0.0 )
    v6 = v2;
  else
    LODWORD(v6) = LODWORD(v2) + 0x80000000;
  if ( v6 < 0.5 )
    *((_DWORD *)this + 18) = 0;
  if ( v4 >= 0.0 )
    v7 = v4;
  else
    LODWORD(v7) = LODWORD(v4) + 0x80000000;
  if ( v7 < 0.5 )
    *((_DWORD *)this + 19) = 0;
  if ( v5 >= 0.0 )
    v8 = v5;
  else
    LODWORD(v8) = LODWORD(v5) + 0x80000000;
  if ( v8 < 0.5 )
    *((_DWORD *)this + 20) = 0;
  v9 = (float *)((char *)this + 152);
  v10 = (float *)((char *)this + 148);
  if ( (*(int (__fastcall **)(LivingLocoMotion *))(*(_DWORD *)this + 28))(this) != 0 )
  {
    LivingLocoMotion::clearTarget(this);
    *v9 = 0.0;
    *v10 = 0.0;
    *((_BYTE *)this + 156) = 0;
  }
  else if ( *((float *)this + 45) >= 0.0 )
  {
    LivingLocoMotion::updateMoveTarget(this);
  }
  LivingLocoMotion::updateJumping(*(float *)&this);
  v11 = *v9 * 0.98;
  *v9 = v11;
  v12 = v11;
  v13 = *v10 * 0.98;
  *v10 = v13;
  (*(void (__fastcall **)(LivingLocoMotion *, float, _DWORD))(*(_DWORD *)this + 40))(
    this,
    COERCE_FLOAT(LODWORD(v12)),
    LODWORD(v13));
  if ( *(_BYTE *)(*((_DWORD *)this + 28) + 120) != 0 && *((float *)this + 19) < 0.0 )
    *((float *)this + 19) = *((float *)this + 19) * 0.6;
  return (*(int (__fastcall **)(LivingLocoMotion *))(*(_DWORD *)this + 44))(this);
}


//======================================================================
// LivingLocoMotion::gotoPosition(WCoord const&,float,float)
// address: 0x002D15C8   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall LivingLocoMotion::gotoPosition(LivingLocoMotion *this, const WCoord *a2, float a3, float a4)
{
  ActorLocoMotion::gotoPosition(this, a2, a3, a4);
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 37) = 0;
  return LivingLocoMotion::clearTarget(this);
}

