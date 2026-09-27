// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorLocoMotion

//======================================================================
// ActorLocoMotion::~ActorLocoMotion()
// address: 0x002E29D8   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15ActorLocoMotionD1Ev'
void __fastcall ActorLocoMotion::~ActorLocoMotion(ActorLocoMotion *this)
{
  *(_DWORD *)this = &off_461658;
}


//======================================================================
// ActorLocoMotion::isMovementBlocked(void)
// address: 0x002E29E8   size: 0x14 (20 bytes)
//======================================================================
bool __fastcall ActorLocoMotion::isMovementBlocked(ActorLocoMotion *this)
{
  return *(float *)(*(_DWORD *)(*((_DWORD *)this + 28) + 76) + 8) <= 0.0;
}


//======================================================================
// ActorLocoMotion::~ActorLocoMotion()
// address: 0x002E29FC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorLocoMotion::~ActorLocoMotion(ActorLocoMotion *this)
{
  ActorLocoMotion::~ActorLocoMotion(this);
  operator delete(this);
}


//======================================================================
// ActorLocoMotion::updateFallState(float,bool)
// address: 0x002E2A10   size: 0x74 (116 bytes)
//======================================================================
ActorLocoMotion *__fastcall ActorLocoMotion::updateFallState(ActorLocoMotion *this, float a2, int a3)
{
  const void *v4; // r0
  void *v5; // r0
  ActorLocoMotion *v7; // [sp+0h] [bp-8h]

  v7 = this;
  if ( a2 < 0.0 )
    *((float *)this + 30) = *((float *)this + 30) - a2;
  if ( a3 != 0 && *((float *)this + 30) > 0.0 )
  {
    (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 28) + 84))(
      *((_DWORD *)this + 28),
      *((_DWORD *)this + 30));
    v4 = *((const void **)this + 28);
    if ( v4 != nullptr )
    {
      v5 = _dynamic_cast(
             v4,
             (const struct __class_type_info *)&`typeinfo for'ClientActor,
             (const struct __class_type_info *)&`typeinfo for'ClientPlayer,
             0);
      if ( v5 != nullptr )
      {
        v7 = (ActorLocoMotion *)(int)*((float *)this + 30);
        (*(void (__fastcall **)(void *, int, int, _DWORD))(*(_DWORD *)v5 + 208))(v5, 2, 12, 0);
      }
    }
    *((_DWORD *)this + 30) = 0;
  }
  return v7;
}


//======================================================================
// ActorLocoMotion::update(float)
// address: 0x002E2A8C   size: 0x1E (30 bytes)
//======================================================================
bool __fastcall ActorLocoMotion::update(ActorLocoMotion *this, float a2)
{
  float v3; // r4
  _BOOL4 result; // r0

  v3 = a2 + *((float *)this + 17);
  result = v3 > 0.05;
  if ( v3 > 0.05 )
    v3 = 0.05;
  *((float *)this + 17) = v3;
  return result;
}


//======================================================================
// ActorLocoMotion::gotoPosition(WCoord const&,float,float)
// address: 0x002E2AB0   size: 0x34 (52 bytes)
//======================================================================
_BYTE *__fastcall ActorLocoMotion::gotoPosition(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v4; // r1
  _BYTE *v5; // r2
  _BYTE *result; // r0

  a1[8] = *a2;
  a1[9] = a2[1];
  a1[10] = a2[2];
  a1[14] = *a2;
  a1[15] = a2[1];
  v4 = a2[2];
  a1[1] = a3;
  a1[16] = v4;
  a1[2] = a4;
  a1[17] = 0;
  v5 = a1 + 31;
  result = (char *)a1 + 127;
  *v5 = 0;
  v5[1] = 0;
  v5[2] = 0;
  *result = 0;
  return result;
}


//======================================================================
// ActorLocoMotion::moveFlying(float,float,float)
// address: 0x002E2AE4   size: 0xDC (220 bytes)
//======================================================================
unsigned __int64 __fastcall ActorLocoMotion::moveFlying(
        ActorLocoMotion *this,
        unsigned int a2,
        float a3,
        unsigned int a4)
{
  float v7; // r5
  float v9; // r1
  float v10; // r5
  float v11; // r7
  double v12; // r4
  float v13; // r0
  float v14; // r0
  unsigned __int64 v16; // [sp+0h] [bp-Ch]

  v16 = __PAIR64__(a2, a4);
  v7 = (float)(*(float *)&a2 * *(float *)&a2) + (float)(a3 * a3);
  if ( (float)((float)(*(float *)&a2 * *(float *)&a2) + (float)(a3 * a3)) > 0.0001 )
  {
    v10 = Ogre::Sqrt((Ogre *)LODWORD(v7), v9);
    if ( v10 < 1.0 )
      v10 = 1.0;
    *((float *)&v16 + 1) = *(float *)&a2 * (float)(*(float *)&v16 / v10);
    v11 = a3 * (float)(*(float *)&v16 / v10);
    v12 = (float)(*((float *)this + 1) * 0.017453);
    v13 = j_sin(v12);
    *(float *)&v16 = v13;
    v14 = j_cos(v12);
    *((float *)this + 18) = *((float *)this + 18)
                          + (float)((float)(v11 * COERCE_FLOAT(v16 + 0x80000000))
                                  + (float)(*((float *)&v16 + 1) * COERCE_FLOAT(LODWORD(v14) + 0x80000000)));
    *((float *)this + 20) = *((float *)this + 20)
                          + (float)((float)(v11 * COERCE_FLOAT(LODWORD(v14) + 0x80000000))
                                  + (float)(*((float *)&v16 + 1) * *(float *)&v16));
  }
  return v16;
}


//======================================================================
// ActorLocoMotion::isOnLadder(void)
// address: 0x002E2BC8   size: 0x3C (60 bytes)
//======================================================================
bool __fastcall ActorLocoMotion::isOnLadder(ActorLocoMotion *this)
{
  World *v1; // r5
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r3
  int BlockID; // r0
  int v8[3]; // [sp+0h] [bp-1Ch] BYREF
  _BYTE v9[16]; // [sp+Ch] [bp-10h] BYREF

  v1 = *((World **)this + 27);
  v2 = *((_DWORD *)this + 9) + *((_DWORD *)this + 7);
  v3 = *((_DWORD *)this + 10);
  v8[0] = *((_DWORD *)this + 8);
  v8[2] = v3;
  v8[1] = v2;
  CoordDivBlock((const WCoord *)v9, v8);
  BlockID = World::getBlockID(v1, (const WCoord *)v9, v4, v5);
  return BlockID == 813 || BlockID == 232;
}


//======================================================================
// ActorLocoMotion::ActorLocoMotion(ClientActor *)
// address: 0x002E2C08   size: 0x68 (104 bytes)
//======================================================================
// Alternative name is '_ZN15ActorLocoMotionC2EP11ClientActor'
void __fastcall ActorLocoMotion::ActorLocoMotion(ActorLocoMotion *this, ClientActor *a2)
{
  *((_DWORD *)this + 28) = a2;
  *(_DWORD *)this = &off_461658;
  *((_DWORD *)this + 5) = 40;
  *((_DWORD *)this + 6) = 170;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_WORD *)this + 58) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_BYTE *)this + 124) = 0;
  *((_BYTE *)this + 125) = 0;
  *((_BYTE *)this + 126) = 0;
  *((_BYTE *)this + 127) = 0;
  *((_BYTE *)this + 136) = 0;
  *((_BYTE *)this + 128) = 0;
  *((_BYTE *)this + 129) = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_BYTE *)this + 138) = 0;
  *((_DWORD *)this + 33) = 0x40000000;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 35) = 0;
}


//======================================================================
// ActorLocoMotion::setPosition(int,int,int)
// address: 0x002E2C74   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall ActorLocoMotion::setPosition(_DWORD *this, int a2, int a3, int a4)
{
  *(this + 8) = a2;
  *(this + 9) = a3;
  *(this + 10) = a4;
  return this;
}


//======================================================================
// ActorLocoMotion::updateRidden(void)
// address: 0x002E2C7C   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall ActorLocoMotion::updateRidden(_DWORD *this)
{
  _DWORD *v1; // r4
  int v2; // r1
  int v3[4]; // [sp+4h] [bp-10h] BYREF

  *(this + 18) = 0;
  *(this + 19) = 0;
  *(this + 20) = 0;
  v1 = this;
  v2 = *(_DWORD *)(*(this + 28) + 80);
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(int *))(*(_DWORD *)v2 + 152))(v3);
    return ActorLocoMotion::setPosition(v1, v3[0], v3[1], v3[2]);
  }
  return this;
}


//======================================================================
// ActorLocoMotion::setMoveDir(Ogre::Vector3 const&)
// address: 0x002E2CB0   size: 0x1C (28 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ActorLocoMotion::setMoveDir(ActorLocoMotion *this, const Ogre::Vector3 *a2)
{
  float v3; // [sp+4h] [bp-4h] BYREF

  Direction2PitchYaw((unsigned int)&v3, a2);
  *((_DWORD *)this + 1) = LimitAngle(*((float *)this + 1), v3, 30.0);
}


//======================================================================
// ActorLocoMotion::setRotateRaw(float)
// address: 0x002E2CD0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorLocoMotion::setRotateRaw(int this, float a2)
{
  *(float *)(this + 4) = a2;
  return this;
}


//======================================================================
// ActorLocoMotion::onDie(void)
// address: 0x002E2CD4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ActorLocoMotion::onDie(ActorLocoMotion *this)
{
  return (*(int (__fastcall **)(ActorLocoMotion *, char *, _DWORD, _DWORD))(*(_DWORD *)this + 16))(
           this,
           (char *)this + 32,
           *((_DWORD *)this + 1),
           *((_DWORD *)this + 2));
}


//======================================================================
// ActorLocoMotion::updatePosition(WCoord const&)
// address: 0x002E2CE6   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall ActorLocoMotion::updatePosition(_DWORD *result, _DWORD *a2)
{
  result[8] = *a2;
  result[9] = a2[1];
  result[10] = a2[2];
  return result;
}


//======================================================================
// ActorLocoMotion::getBrightness(void)
// address: 0x002E2CF4   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ActorLocoMotion::getBrightness(ActorLocoMotion *this)
{
  int v2; // r5
  int v3; // r0
  int v4; // r2
  int v5; // r2
  int v6; // r3
  _BYTE v8[12]; // [sp+0h] [bp-1Ch] BYREF
  int v9[4]; // [sp+Ch] [bp-10h] BYREF

  v2 = *((_DWORD *)this + 9) - *((_DWORD *)this + 7);
  v3 = (int)(float)((float)((float)*((int *)this + 6) + (float)*((int *)this + 6)) / 3.0);
  v4 = *((_DWORD *)this + 8);
  v9[2] = *((_DWORD *)this + 10);
  v9[0] = v4;
  v9[1] = v2 + v3;
  CoordDivBlock((const WCoord *)v8, v9);
  return World::getLightBrightness(*((World **)this + 27), (const WCoord *)v8, v5, v6);
}


//======================================================================
// ActorLocoMotion::getCollideBox(CollideAABB &)
// address: 0x002E2D3C   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall ActorLocoMotion::getCollideBox(ActorLocoMotion *this, CollideAABB *a2)
{
  int v2; // r3
  int v3; // r2
  int v5; // r2
  int v6; // r0
  _DWORD *result; // r0
  int v8; // r2
  int v9; // r5
  _DWORD v10[4]; // [sp+0h] [bp-2Ch] BYREF
  int v11[3]; // [sp+10h] [bp-1Ch] BYREF
  int v12[4]; // [sp+1Ch] [bp-10h] BYREF

  v2 = *((_DWORD *)this + 5);
  v3 = *((_DWORD *)this + 6);
  *((_DWORD *)a2 + 3) = v2;
  *((_DWORD *)a2 + 5) = v2;
  *((_DWORD *)a2 + 4) = v3;
  v11[0] = *((_DWORD *)this + 8);
  v11[1] = *((_DWORD *)this + 9);
  v5 = *((_DWORD *)this + 10);
  v6 = *((_DWORD *)this + 7);
  v11[2] = v5;
  v12[1] = v6;
  v12[0] = v2 / 2;
  v12[2] = v2 / 2;
  result = operator-(v10, v11, v12);
  v8 = v10[1];
  v9 = v10[2];
  *(_DWORD *)a2 = v10[0];
  *((_DWORD *)a2 + 1) = v8;
  *((_DWORD *)a2 + 2) = v9;
  return result;
}


//======================================================================
// ActorLocoMotion::onEnterWorld(World *)
// address: 0x002E2D80   size: 0x44 (68 bytes)
//======================================================================
World *__fastcall ActorLocoMotion::onEnterWorld(ActorLocoMotion *this, World *a2)
{
  World *result; // r0
  int v4[3]; // [sp+0h] [bp-30h] BYREF
  _DWORD v5[3]; // [sp+Ch] [bp-24h] BYREF
  _BYTE v6[24]; // [sp+18h] [bp-18h] BYREF

  *((_DWORD *)this + 27) = a2;
  *((_BYTE *)this + 136) = 0;
  *((_BYTE *)this + 137) = 0;
  ActorLocoMotion::getCollideBox(*(ActorLocoMotion **)(*((_DWORD *)this + 28) + 68), (CollideAABB *)v6);
  v4[0] = 0;
  v4[2] = 0;
  v4[1] = -1;
  result = World::moveBox((World *)v5, *((const CollideAABB **)this + 27), (const WCoord *)v6, v4);
  *((_BYTE *)this + 124) = v5[1] == 0;
  return result;
}


//======================================================================
// ActorLocoMotion::hitBack(WCoord const&)
// address: 0x002E2DC4   size: 0xCE (206 bytes)
//======================================================================
_DWORD *__fastcall ActorLocoMotion::hitBack(ActorLocoMotion *this, const WCoord *a2)
{
  float v3; // r7
  float v4; // r4
  float v5; // r1
  float v6; // r7
  float v8; // [sp+4h] [bp-48h]
  float v9; // [sp+4h] [bp-48h]
  _DWORD *v10; // [sp+8h] [bp-44h]
  float v11; // [sp+Ch] [bp-40h]
  _BYTE v12[20]; // [sp+10h] [bp-3Ch] BYREF
  int v13[3]; // [sp+24h] [bp-28h] BYREF
  _DWORD v14[7]; // [sp+30h] [bp-1Ch] BYREF

  v10 = (_DWORD *)((char *)this + 32);
  operator-(v14, (int *)this + 8, (int *)a2);
  v3 = (float)v14[0];
  v4 = (float)v14[2];
  v8 = Ogre::Sqrt(COERCE_OGRE_((float)((float)(v3 * v3) + 0.0) + (float)((float)v14[2] * (float)v14[2])), v5);
  if ( v8 <= 0.00001 )
  {
    v6 = 0.0;
    v9 = 0.0;
  }
  else
  {
    v11 = 1.0 / v8;
    v9 = v3 * (float)(1.0 / v8);
    v6 = v4 * v11;
  }
  v13[1] = 70;
  v13[0] = (int)(float)(v9 * 150.0);
  v13[2] = (int)(float)(v6 * 150.0);
  ActorLocoMotion::getCollideBox(this, (CollideAABB *)v14);
  World::moveBox((World *)v12, *((const CollideAABB **)this + 27), (const WCoord *)v14, v13);
  qmemcpy(v13, v12, sizeof(v13));
  return WCoord::operator+=(v10, v13);
}


//======================================================================
// ActorLocoMotion::addMotion(float,float,float)
// address: 0x002E2E9C   size: 0x26 (38 bytes)
//======================================================================
float __fastcall ActorLocoMotion::addMotion(ActorLocoMotion *this, float a2, float a3, float a4)
{
  float result; // r0

  *((float *)this + 18) = *((float *)this + 18) + a2;
  *((float *)this + 19) = *((float *)this + 19) + a3;
  result = *((float *)this + 20) + a4;
  *((float *)this + 20) = result;
  return result;
}


//======================================================================
// ActorLocoMotion::getLookDir(void)
// address: 0x002E2EC2   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ActorLocoMotion::getLookDir(__int64 this)
{
  int v1; // r3
  int v2; // r4

  v1 = HIDWORD(this);
  v2 = this;
  HIDWORD(this) = *(_DWORD *)(HIDWORD(this) + 4);
  PitchYaw2Direction(this, *(float *)(v1 + 8));
  return v2;
}


//======================================================================
// ActorLocoMotion::handleWaterMovement(void)
// address: 0x002E2ED4   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall ActorLocoMotion::handleWaterMovement(ActorLocoMotion *this)
{
  int v1; // r1
  int v3; // r7
  unsigned __int8 *v4; // r6
  float v5; // r1
  float v6; // r0
  float v7; // r1
  int v9; // [sp+Ch] [bp-48h]
  int v10; // [sp+14h] [bp-40h] BYREF
  int v11; // [sp+18h] [bp-3Ch]
  int v12; // [sp+1Ch] [bp-38h]
  _DWORD v13[3]; // [sp+20h] [bp-34h] BYREF
  _DWORD v14[3]; // [sp+2Ch] [bp-28h] BYREF
  int v15; // [sp+38h] [bp-1Ch] BYREF
  int v16; // [sp+3Ch] [bp-18h]
  int v17; // [sp+40h] [bp-14h]
  float v18[4]; // [sp+44h] [bp-10h] BYREF

  v11 = 40;
  v1 = *((_DWORD *)this + 6);
  v10 = 1;
  v12 = 1;
  v9 = v1;
  if ( v1 / 2 <= 40 )
    v11 = v1 / 2 - 1;
  v3 = *((_DWORD *)this + 5) / 2;
  v16 = 0;
  v15 = v3;
  v17 = v3;
  operator-(v18, (int *)this + 8, &v15);
  operator+(v13, (int *)v18, &v10);
  v17 = v3;
  v16 = v9;
  v15 = v3;
  operator+(v18, (int *)this + 8, &v15);
  operator-(v14, (int *)v18, &v10);
  v4 = (unsigned __int8 *)this + 125;
  if ( World::getFluidFlowMotion(*((World **)this + 27), (const WCoord *)v13, (const WCoord *)v14, (Ogre::Vector3 *)v18) )
  {
    v5 = v18[1];
    *((float *)this + 18) = *((float *)this + 18) + v18[0];
    v6 = *((float *)this + 19) + v5;
    v7 = v18[2];
    *((float *)this + 19) = v6;
    *((float *)this + 20) = *((float *)this + 20) + v7;
    *v4 = 1;
    *((_DWORD *)this + 30) = 0;
    ClientActor::setFire(*((ClientActor **)this + 28), 0);
  }
  else
  {
    *v4 = 0;
  }
  return *v4;
}


//======================================================================
// ActorLocoMotion::handleLavaMovement(void)
// address: 0x002E2F94   size: 0x7E (126 bytes)
//======================================================================
int __fastcall ActorLocoMotion::handleLavaMovement(ActorLocoMotion *this)
{
  int v1; // r3
  int v4; // [sp+Ch] [bp-40h]
  int *v5; // [sp+14h] [bp-38h]
  int v6[3]; // [sp+1Ch] [bp-30h] BYREF
  _DWORD v7[3]; // [sp+28h] [bp-24h] BYREF
  _DWORD v8[3]; // [sp+34h] [bp-18h] BYREF
  int v9; // [sp+40h] [bp-Ch] BYREF
  int v10; // [sp+44h] [bp-8h]
  int v11; // [sp+48h] [bp-4h]
  int v12[4]; // [sp+4Ch] [bp+0h] BYREF

  v6[0] = 10;
  v6[2] = 10;
  v5 = (int *)((char *)this + 32);
  v1 = *((_DWORD *)this + 5);
  v6[1] = 40;
  v4 = v1 / 2;
  v9 = v1 / 2;
  v10 = 0;
  v11 = v1 / 2;
  operator-(v12, (int *)this + 8, &v9);
  operator+(v7, v12, v6);
  v9 = v4;
  v10 = *((_DWORD *)this + 6);
  v11 = v4;
  operator+(v12, v5, &v9);
  operator-(v8, v12, v6);
  return World::hasBlocksInCoordRange(*((World **)this + 27), (const WCoord *)v7, (const WCoord *)v8, 5, 6);
}


//======================================================================
// ActorLocoMotion::tick(void)
// address: 0x002E3014   size: 0x82 (130 bytes)
//======================================================================
float __fastcall ActorLocoMotion::tick(float this)
{
  int v1; // r3
  float v2; // r4
  int v3; // r2
  int v4; // r3
  ClientActor *v5; // r0
  int v6; // r3
  int v7; // r3

  v1 = *(_DWORD *)(LODWORD(this) + 36);
  v2 = this;
  *(_DWORD *)(LODWORD(this) + 56) = *(_DWORD *)(LODWORD(this) + 32);
  *(_DWORD *)(LODWORD(this) + 60) = v1;
  v3 = *(_DWORD *)(LODWORD(this) + 40);
  *(_DWORD *)(LODWORD(this) + 68) = 0;
  v4 = *(_DWORD *)(LODWORD(this) + 112);
  *(_DWORD *)(LODWORD(this) + 64) = v3;
  if ( *(int *)(v4 + 24) < 0 )
  {
    if ( *(_DWORD *)(v4 + 80) != 0 )
      (*(void (__fastcall **)(float))(*(_DWORD *)LODWORD(this) + 36))(COERCE_FLOAT(LODWORD(this)));
    ActorLocoMotion::handleWaterMovement((ActorLocoMotion *)LODWORD(v2));
    this = COERCE_FLOAT(ActorLocoMotion::handleLavaMovement((ActorLocoMotion *)LODWORD(v2)));
    if ( this != 0.0 )
    {
      v5 = *(ClientActor **)(LODWORD(v2) + 112);
      v6 = *((_DWORD *)v5 + 19);
      if ( v6 != 0 && *(_BYTE *)(v6 + 20) == 0 )
      {
        ClientActor::setFire(v5, 15);
        ClientActor::attackedFromType(*(_DWORD *)(LODWORD(v2) + 112), 3, 1082130432, v7);
      }
      this = *(float *)(LODWORD(v2) + 120) * 0.5;
      *(float *)(LODWORD(v2) + 120) = this;
    }
    if ( *(int *)(LODWORD(v2) + 36) < -6400 )
    {
      this = COERCE_FLOAT(ClientActor::isDead(*(ClientActor **)(LODWORD(v2) + 112)));
      if ( this == 0.0 )
        return COERCE_FLOAT(ClientActor::kill(*(ClientActor **)(LODWORD(v2) + 112)));
    }
  }
  return this;
}


//======================================================================
// ActorLocoMotion::isOffsetPositionInLiquid(float,float,float)
// address: 0x002E309C   size: 0x7A (122 bytes)
//======================================================================
int __fastcall ActorLocoMotion::isOffsetPositionInLiquid(ActorLocoMotion *this, float a2, float a3, float a4)
{
  int isBoxCollide; // r3
  int result; // r0
  World *v8; // r7
  _DWORD v11[3]; // [sp+8h] [bp-34h] BYREF
  _DWORD v12[3]; // [sp+14h] [bp-28h] BYREF
  int v13[3]; // [sp+20h] [bp-1Ch] BYREF
  int v14[4]; // [sp+2Ch] [bp-10h] BYREF

  ActorLocoMotion::getCollideBox(*(ActorLocoMotion **)(*((_DWORD *)this + 28) + 68), (CollideAABB *)v13);
  v12[0] = (int)a2;
  v12[1] = (int)a3;
  v12[2] = (int)a4;
  WCoord::operator+=(v13, v12);
  isBoxCollide = World::isBoxCollide(*((World **)this + 27), (const CollideAABB *)v13);
  result = 0;
  if ( isBoxCollide == 0 )
  {
    v8 = *((World **)this + 27);
    v11[0] = v13[0];
    v11[1] = v13[1];
    v11[2] = v13[2];
    operator+(v12, v13, v14);
    return (unsigned __int8)World::isAnyLiquid(v8, (const WCoord *)v11, (const WCoord *)v12) ^ 1;
  }
  return result;
}


//======================================================================
// ActorLocoMotion::getIntegerMotion(Ogre::Vector3 const&)
// address: 0x002E3116   size: 0xCE (206 bytes)
//======================================================================
_DWORD *__fastcall ActorLocoMotion::getIntegerMotion(_DWORD *this, const Ogre::Vector3 *a2, float *a3)
{
  float v3; // r7
  float v4; // [sp+4h] [bp-20h]
  int v5; // [sp+8h] [bp-1Ch]
  int v6; // [sp+Ch] [bp-18h]
  int v7; // [sp+10h] [bp-14h]
  float v8; // [sp+14h] [bp-10h]

  v5 = (int)*a3;
  v6 = (int)a3[1];
  v7 = (int)a3[2];
  v3 = (float)(*a3 - (float)v5) + *((float *)a2 + 21);
  *((float *)a2 + 21) = v3;
  v4 = (float)(a3[1] - (float)v6) + *((float *)a2 + 22);
  *((float *)a2 + 22) = v4;
  v8 = (float)(a3[2] - (float)v7) + *((float *)a2 + 23);
  *this = v5 + (int)v3;
  *(this + 1) = v6 + (int)v4;
  *(this + 2) = v7 + (int)v8;
  *((float *)a2 + 21) = v3 - (float)(int)v3;
  *((float *)a2 + 22) = v4 - (float)(int)v4;
  *((float *)a2 + 23) = v8 - (float)(int)v8;
  return this;
}


//======================================================================
// ActorLocoMotion::doBlockCollision(void)
// address: 0x002E31E4   size: 0xD6 (214 bytes)
//======================================================================
bool __fastcall ActorLocoMotion::doBlockCollision(ActorLocoMotion *this)
{
  _BOOL4 result; // r0
  int v3; // r3
  int j; // r5
  int k; // r6
  int BlockID; // r1
  int Material; // r0
  void (__fastcall *v8)(int, World *, int *, _DWORD); // r3
  int i; // [sp+0h] [bp-4Ch]
  World *v10; // [sp+4h] [bp-48h]
  _DWORD v11[3]; // [sp+Ch] [bp-40h] BYREF
  _DWORD v12[3]; // [sp+18h] [bp-34h] BYREF
  int v13; // [sp+24h] [bp-28h] BYREF
  int v14; // [sp+28h] [bp-24h]
  int v15; // [sp+2Ch] [bp-20h]
  int v16; // [sp+30h] [bp-1Ch] BYREF
  int v17; // [sp+34h] [bp-18h]
  int v18; // [sp+38h] [bp-14h]
  int v19; // [sp+3Ch] [bp-10h] BYREF
  int v20; // [sp+40h] [bp-Ch]
  int v21; // [sp+44h] [bp-8h]

  ActorLocoMotion::getCollideBox(this, (CollideAABB *)&v16);
  v19 -= 2;
  v20 -= 2;
  v21 -= 2;
  v13 = ++v16;
  v15 = ++v18;
  v14 = ++v17;
  CoordDivBlock((const WCoord *)v11, &v13);
  operator+(&v13, &v16, &v19);
  CoordDivBlock((const WCoord *)v12, &v13);
  v10 = *(World **)(*((_DWORD *)this + 28) + 52);
  result = World::checkChunksExist(v10, (const WCoord *)v11, (const WCoord *)v12);
  if ( result )
  {
    for ( i = v11[0]; ; ++i )
    {
      result = i;
      if ( i > v12[0] )
        break;
      for ( j = v11[1]; j <= v12[1]; ++j )
      {
        for ( k = v11[2]; k <= v12[2]; ++k )
        {
          v13 = i;
          v14 = j;
          v15 = k;
          BlockID = World::getBlockID(v10, (const WCoord *)&v13, i, v3);
          if ( BlockID > 0 )
          {
            Material = BlockMaterialMgr::getMaterial(
                         (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                         BlockID);
            v8 = *(void (__fastcall **)(int, World *, int *, _DWORD))(*(_DWORD *)Material + 136);
            v14 = j;
            v15 = k;
            v13 = i;
            v8(Material, v10, &v13, *((_DWORD *)this + 28));
          }
        }
      }
      v3 = i + 1;
    }
  }
  return result;
}


//======================================================================
// ActorLocoMotion::doMoveStep(Ogre::Vector3 const&)
// address: 0x002E32C0   size: 0x2F4 (756 bytes)
//======================================================================
int __fastcall ActorLocoMotion::doMoveStep(ActorLocoMotion *this, const Ogre::Vector3 *a2)
{
  int result; // r0
  int v4; // r6
  const CollideAABB *v5; // r1
  _BOOL4 v6; // r3
  const CollideAABB *v7; // r1
  int v8; // r3
  int v9; // r0
  int v10; // r3
  int v11; // r2
  int v12; // r7
  int v13; // r6
  float v14; // r1
  int v15; // r0
  float v16; // r1
  ClientActor *v17; // r5
  float v18; // r6
  float v19; // r0
  const void *v20; // r0
  void *v21; // r0
  World *v22; // r0
  int v23; // r2
  int BlockMaterial; // r0
  int v25; // [sp+4h] [bp-60h]
  _DWORD v26[4]; // [sp+8h] [bp-5Ch] BYREF
  int v27; // [sp+18h] [bp-4Ch] BYREF
  int v28; // [sp+1Ch] [bp-48h]
  int v29; // [sp+20h] [bp-44h]
  int v30; // [sp+24h] [bp-40h] BYREF
  int v31; // [sp+28h] [bp-3Ch]
  int v32; // [sp+2Ch] [bp-38h]
  int v33[3]; // [sp+30h] [bp-34h] BYREF
  int v34; // [sp+3Ch] [bp-28h] BYREF
  int v35; // [sp+40h] [bp-24h]
  int v36; // [sp+44h] [bp-20h]
  int v37[7]; // [sp+48h] [bp-1Ch] BYREF

  *((_DWORD *)this + 24) = *(_DWORD *)a2;
  *((_DWORD *)this + 25) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 26) = *((_DWORD *)a2 + 2);
  ActorLocoMotion::getIntegerMotion(&v27, this, (float *)a2);
  if ( v27 != 0 || v28 != 0 || (result = v29, v29 != 0) )
  {
    v4 = *((unsigned __int8 *)this + 138);
    if ( *((_BYTE *)this + 138) != 0 )
    {
      WCoord::operator+=((_DWORD *)this + 8, &v27);
      return 0;
    }
    else
    {
      ActorLocoMotion::getCollideBox(this, (CollideAABB *)v37);
      v33[1] = -1;
      v5 = *((const CollideAABB **)this + 27);
      v33[2] = v4;
      v33[0] = v4;
      World::moveBox((World *)&v34, v5, (const WCoord *)v37, v33);
      v6 = v35 == 0;
      *((_BYTE *)this + 124) = v6;
      v7 = *((const CollideAABB **)this + 27);
      if ( v6 && v28 <= 0 )
      {
        v28 = v4;
        *((_DWORD *)this + 19) = 0;
        *((_DWORD *)this + 22) = 0;
        World::moveBoxWalk((World *)v26, v7, (const WCoord *)v37, (const WCoord *)&v27);
        v30 = v26[0];
        v31 = v26[1];
      }
      else
      {
        World::moveBox((World *)v26, v7, (const WCoord *)v37, &v27);
        v30 = v26[0];
        v31 = v26[1];
      }
      v32 = v26[2];
      operator+(v33, v37, &v30);
      v8 = *((_DWORD *)this + 5) / 2;
      v35 = *((_DWORD *)this + 7);
      v36 = v8;
      v34 = v8;
      operator+(v26, v33, &v34);
      v9 = v28;
      *((_DWORD *)this + 8) = v26[0];
      *((_DWORD *)this + 9) = v26[1];
      v10 = 0;
      *((_DWORD *)this + 10) = v26[2];
      *((_BYTE *)this + 136) = 0;
      v11 = v31;
      *((_BYTE *)this + 137) = 0;
      if ( v11 != v9 )
      {
        if ( v9 < 0 )
          *((_BYTE *)this + 124) = 1;
        *((_DWORD *)this + 19) = 0;
        *((_DWORD *)this + 22) = 0;
        *((_BYTE *)this + 137) = 1;
        v10 = 2;
      }
      v25 = v10;
      if ( v27 != 0 && v30 == 0 )
      {
        *((_DWORD *)this + 18) = 0;
        *((_DWORD *)this + 21) = 0;
        *((_BYTE *)this + 136) = 1;
        v25 = v10 | 1;
      }
      if ( v29 != 0 && v32 == 0 )
      {
        World::moveBox((World *)v26, *((const CollideAABB **)this + 27), (const WCoord *)v37, &v27);
        v30 = v26[0];
        v31 = v26[1];
        v12 = v26[2];
        *((_DWORD *)this + 20) = 0;
        *((_DWORD *)this + 23) = 0;
        v32 = v12;
        *((_BYTE *)this + 136) = 1;
        v25 |= 1u;
      }
      (*(void (__fastcall **)(ActorLocoMotion *, float, _DWORD))(*(_DWORD *)this + 32))(
        this,
        (float)v31,
        *((unsigned __int8 *)this + 124));
      if ( (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 28) + 44))(*((_DWORD *)this + 28)) != 0
        && *((_BYTE *)this + 124) != 0
        && *(_DWORD *)(*((_DWORD *)this + 28) + 80) == 0 )
      {
        v13 = v30 * v30 + v32 * v32;
        if ( (*(int (__fastcall **)(ActorLocoMotion *))(*(_DWORD *)this + 20))(this) != 0 )
          v13 += v31 * v31;
        v15 = (int)(float)(Ogre::Sqrt(COERCE_OGRE_((float)v13), v14) * 0.6) + *((_DWORD *)this + 35);
        *((_DWORD *)this + 35) = v15;
        if ( v15 > *((_DWORD *)this + 36) )
        {
          *((_DWORD *)this + 36) = v15 + 100;
          if ( *((_BYTE *)this + 125) != 0 )
          {
            Ogre::Sqrt(
              COERCE_OGRE_(
                (float)((float)((float)((float)(*((float *)this + 18) / 100.0) * (float)(*((float *)this + 18) / 100.0))
                              * 0.2)
                      + (float)((float)(*((float *)this + 19) / 100.0) * (float)(*((float *)this + 19) / 100.0)))
              + (float)((float)((float)(*((float *)this + 20) / 100.0) * (float)(*((float *)this + 20) / 100.0)) * 0.2)),
              v16);
            v17 = *((ClientActor **)this + 28);
            v18 = GenRandomFloat();
            v19 = GenRandomFloat();
            ClientActor::playSound(v17, "liquid.swim", 1.0, (float)((float)(v18 - v19) * 0.4) + 1.0);
          }
          v20 = *((const void **)this + 28);
          if ( v20 != nullptr )
          {
            v21 = _dynamic_cast(
                    v20,
                    (const struct __class_type_info *)&`typeinfo for'ClientActor,
                    (const struct __class_type_info *)&`typeinfo for'ActorLiving,
                    0);
            if ( v21 != nullptr )
              (*(void (__fastcall **)(void *))(*(_DWORD *)v21 + 180))(v21);
          }
          CoordDivBlock((const WCoord *)&v34, (int *)this + 8);
          v22 = *((World **)this + 27);
          --v35;
          BlockMaterial = World::getBlockMaterial(v22, (const WCoord *)&v34, v23);
          if ( BlockMaterial != 0 )
            (*(void (__fastcall **)(int, _DWORD, int *, _DWORD))(*(_DWORD *)BlockMaterial + 140))(
              BlockMaterial,
              *((_DWORD *)this + 27),
              &v34,
              *((_DWORD *)this + 28));
        }
      }
      ActorLocoMotion::doBlockCollision(this);
      return v25;
    }
  }
  return result;
}


//======================================================================
// ActorLocoMotion::findRandTargetBlock(WCoord &,int,int,WCoord const*)
// address: 0x002E35D0   size: 0x1FE (510 bytes)
//======================================================================
const void *__fastcall ActorLocoMotion::findRandTargetBlock(
        ActorLocoMotion *this,
        WCoord *a2,
        int a3,
        int a4,
        const WCoord *a5)
{
  float v6; // r0
  const void *result; // r0
  int v8; // r6
  int v9; // r3
  World **v10; // r0
  int v11; // r3
  int v12; // r2
  float BlockPathWeight; // r5
  int v14; // r4
  int v15; // [sp+14h] [bp-60h]
  int v16; // [sp+18h] [bp-5Ch]
  World **v17; // [sp+20h] [bp-54h]
  int v18; // [sp+28h] [bp-4Ch]
  _BOOL4 v20; // [sp+30h] [bp-44h]
  float v22; // [sp+38h] [bp-3Ch]
  _DWORD v24[4]; // [sp+48h] [bp-2Ch] BYREF
  int v25; // [sp+58h] [bp-1Ch] BYREF
  int v26; // [sp+5Ch] [bp-18h]
  int v27; // [sp+60h] [bp-14h]
  int v28[4]; // [sp+64h] [bp-10h] BYREF

  v20 = false;
  if ( *(_DWORD *)(*((_DWORD *)this + 28) + 112) != -1 )
  {
    operator-(v28, (int *)this + 11, (int *)this + 8);
    v6 = j_sqrt((double)v28[0] * (double)v28[0] + (double)v28[1] * (double)v28[1] + (double)v28[2] * (double)v28[2]);
    v20 = v6 < (float)(a3 + *(_DWORD *)(*((_DWORD *)this + 28) + 112));
  }
  result = *((const void **)this + 28);
  if ( result != nullptr )
  {
    v17 = (World **)_dynamic_cast(
                      result,
                      (const struct __class_type_info *)&`typeinfo for'ClientActor,
                      (const struct __class_type_info *)&`typeinfo for'ClientMob,
                      0);
    result = nullptr;
    if ( v17 != nullptr && *((int *)this + 9) >= 0 )
    {
      v16 = 20;
      v22 = -99999.0;
      v18 = 0;
      do
      {
        v15 = 100 * GenRandomInt(-a3, a3);
        v8 = 100 * GenRandomInt(-a3, a3);
        if ( a5 == nullptr || (double)v15 * (double)*(int *)a5 + (double)v8 * (double)*((int *)a5 + 2) >= 0.0 )
        {
          v27 = v8;
          v25 = v15;
          v26 = 0;
          operator+(v24, &v25, (int *)this + 8);
          v25 = v24[0];
          v9 = *((_DWORD *)this + 27);
          v26 = v24[1];
          v10 = *(World ***)(v9 + 132);
          v27 = v24[2];
          if ( ClientActorMgr::getMonsterValidPos(
                 v10,
                 (ClientMob *)v17,
                 (const WCoord *)&v25,
                 0,
                 0,
                 a4,
                 2,
                 (WCoord *)v28) )
          {
            v12 = v20;
            if ( !v20 || ClientActor::isInHomeDist((ClientActor *)v17, v28[0], v28[1], v28[2]) != 0 )
            {
              BlockPathWeight = ClientMob::getBlockPathWeight(v17, (const WCoord *)v28, v12, v11);
              if ( BlockPathWeight > v22 )
              {
                v22 = BlockPathWeight;
                *(_DWORD *)a2 = v28[0];
                v14 = v28[2];
                *((_DWORD *)a2 + 1) = v28[1];
                *((_DWORD *)a2 + 2) = v14;
                v18 = 1;
              }
            }
          }
        }
        --v16;
      }
      while ( v16 != 0 );
      return (const void *)v18;
    }
  }
  return result;
}


//======================================================================
// ActorLocoMotion::findRandTargetBlockTowards(WCoord &,int,int,WCoord const&)
// address: 0x002E37E8   size: 0x2C (44 bytes)
//======================================================================
const void *__fastcall ActorLocoMotion::findRandTargetBlockTowards(
        ActorLocoMotion *this,
        WCoord *a2,
        int a3,
        int a4,
        const WCoord *a5)
{
  _DWORD v10[4]; // [sp+14h] [bp-10h] BYREF

  operator-(v10, (int *)a5, (int *)this + 8);
  return ActorLocoMotion::findRandTargetBlock(this, a2, a3, a4, (const WCoord *)v10);
}


//======================================================================
// ActorLocoMotion::pushOutOfBlocks(WCoord const&)
// address: 0x002E3814   size: 0x17C (380 bytes)
//======================================================================
int __fastcall ActorLocoMotion::pushOutOfBlocks(World **this, const WCoord *a2)
{
  int result; // r0
  int i; // r7
  int v6; // r3
  int v7; // r7
  int *v8; // r6
  float v9; // r5
  float v10; // r0
  int v11; // [sp+0h] [bp-5Ch]
  float v12; // [sp+0h] [bp-5Ch]
  World *v13; // [sp+4h] [bp-58h]
  int v14; // [sp+8h] [bp-54h]
  int v15; // [sp+Ch] [bp-50h]
  _BYTE v16[8]; // [sp+14h] [bp-48h] BYREF
  int v17[3]; // [sp+1Ch] [bp-40h] BYREF
  _DWORD v18[3]; // [sp+28h] [bp-34h] BYREF
  _DWORD v19[3]; // [sp+34h] [bp-28h] BYREF
  int v20[7]; // [sp+40h] [bp-1Ch] BYREF

  CoordDivBlock((const WCoord *)v17, (int *)a2);
  v20[1] = 100 * v17[1];
  v20[2] = 100 * v17[2];
  v20[0] = 100 * v17[0];
  operator-(v18, (int *)a2, v20);
  v15 = v18[0];
  v14 = v18[1];
  v11 = v18[2];
  ActorLocoMotion::getCollideBox((ActorLocoMotion *)this, (CollideAABB *)v20);
  if ( World::isBoxCollide(*(this + 27), (const CollideAABB *)v20) != 0
    || (result = World::isBlockFullCube(*(this + 27), (const WCoord *)v17)) != 0 )
  {
    World::isBoxCollide(*(this + 27), (const CollideAABB *)v20);
    World::isBlockFullCube(*(this + 27), (const WCoord *)v17);
    for ( i = 0; i != 6; ++i )
    {
      v13 = *(this + 27);
      operator+(v19, v17, &g_DirectionCoord[3 * i]);
      v16[i] = World::isBlockFullCube(v13, (const WCoord *)v19) ^ 1;
    }
    if ( v16[0] != 0 && v15 <= 999999 )
    {
      v6 = v15;
      v7 = 0;
    }
    else
    {
      v6 = 1000000;
      v7 = 5;
    }
    if ( v16[1] != 0 && 100 - v15 < v6 )
    {
      v6 = 100 - v15;
      v7 = 1;
    }
    if ( v16[2] != 0 && v11 < v6 )
    {
      v6 = v11;
      v7 = 2;
    }
    if ( v16[3] != 0 && 100 - v11 < v6 )
    {
      v6 = 100 - v11;
      v7 = 3;
    }
    if ( v16[4] != 0 && v14 < v6 )
    {
      v6 = v14;
      v7 = 4;
    }
    if ( v16[5] != 0 && 100 - v14 < v6 )
      v7 = 5;
    v8 = &g_DirectionCoord[3 * v7];
    v9 = (float)(GenRandomFloat() * 20.0) + 10.0;
    v10 = (float)v8[1] * v9;
    v12 = (float)v8[2] * v9;
    *((float *)this + 18) = *((float *)this + 18) + (float)((float)*v8 * v9);
    *((float *)this + 19) = *((float *)this + 19) + v10;
    *((float *)this + 20) = *((float *)this + 20) + v12;
    return 1;
  }
  return result;
}


//======================================================================
// ActorLocoMotion::isInsideOpaqueBlock(void)
// address: 0x002E39A4   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall ActorLocoMotion::isInsideOpaqueBlock(ActorLocoMotion *this)
{
  int i; // r4
  float v3; // r7
  int result; // r0
  World *v5; // [sp+4h] [bp-20h]
  World *v6; // [sp+4h] [bp-20h]
  int v7[3]; // [sp+8h] [bp-1Ch] BYREF
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  for ( i = 0; i != 8; ++i )
  {
    v3 = (float)*((int *)this + 5);
    v5 = (World *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 28) + 124))(*((_DWORD *)this + 28));
    v8[0] = (int)(float)((float)((float)((float)(i & 1) - 0.5) * v3) * 0.8);
    v8[1] = (int)v5 + (int)(float)((float)((float)((i >> 1) & 1) - 0.5) * 10.0);
    v8[2] = (int)(float)((float)((float)((float)(i >> 2) - 0.5) * v3) * 0.8);
    operator+(v7, (int *)this + 8, v8);
    v6 = *((World **)this + 27);
    CoordDivBlock((const WCoord *)v8, v7);
    result = World::isBlockNormalCube(v6, (const WCoord *)v8);
    if ( result != 0 )
      break;
  }
  return result;
}


//======================================================================
// ActorLocoMotion::isInsideWaterBlock(void)
// address: 0x002E3A5C   size: 0x72 (114 bytes)
//======================================================================
bool __fastcall ActorLocoMotion::isInsideWaterBlock(World **this)
{
  int v2; // r2
  int v3; // r3
  int v4; // r2
  unsigned int v5; // r3
  _BOOL4 result; // r0
  int BlockData; // r0
  float v8; // r0
  int v9[3]; // [sp+0h] [bp-18h] BYREF
  _DWORD v10[3]; // [sp+Ch] [bp-Ch] BYREF

  ClientActor::getEyePosition((ClientActor *)v9);
  CoordDivBlock((const WCoord *)v10, v9);
  v5 = World::getBlockID(*(this + 27), (const WCoord *)v10, v2, v3) - 3;
  result = false;
  if ( v5 <= 1 )
  {
    BlockData = World::getBlockData(*(this + 27), (const WCoord *)v10, v4, v5);
    if ( BlockData > 7 )
      v8 = 0.0;
    else
      v8 = (float)(BlockData + 1) / 9.0;
    return v9[1] < 100 * (v10[1] + 1) - (int)(float)((float)(v8 - 0.11111) * 100.0);
  }
  return result;
}

