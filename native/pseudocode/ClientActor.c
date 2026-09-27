// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientActor

//======================================================================
// ClientActor::canAttackWithItem(void)
// address: 0x0029D1DC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::canAttackWithItem(ClientActor *this)
{
  return 1;
}


//======================================================================
// ClientActor::canTriggerWalking(void)
// address: 0x0029D1E0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::canTriggerWalking(ClientActor *this)
{
  return 1;
}


//======================================================================
// ClientActor::preventActorSpawning(void)
// address: 0x0029D1E4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::preventActorSpawning(ClientActor *this)
{
  return 0;
}


//======================================================================
// ClientActor::getAttackTargetType(void)
// address: 0x0029D1E8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::getAttackTargetType(ClientActor *this)
{
  return 3;
}


//======================================================================
// ClientActor::canBeCollidedWith(void)
// address: 0x0029D1EC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::canBeCollidedWith(ClientActor *this)
{
  return 0;
}


//======================================================================
// ClientActor::teleportMap(int)
// address: 0x0029D1F0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientActor::teleportMap(ClientActor *this, int a2)
{
  ;
}


//======================================================================
// ClientActor::managedByChunk(void)
// address: 0x0029D1F2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::managedByChunk(ClientActor *this)
{
  return 1;
}


//======================================================================
// ClientActor::getMasterActor(void)
// address: 0x0029D1F6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientActor::getMasterActor(ClientActor *this)
{
  ;
}


//======================================================================
// ClientActor::isAIEnabled(void)
// address: 0x0029D1F8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::isAIEnabled(ClientActor *this)
{
  return 0;
}


//======================================================================
// ClientActor::onClear(void)
// address: 0x0029D1FC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientActor::onClear(ClientActor *this)
{
  ;
}


//======================================================================
// ClientActor::canExplodeBlock(Explosion *,World *,WCoord const&,int,int)
// address: 0x0029D1FE   size: 0x4 (4 bytes)
//======================================================================
int ClientActor::canExplodeBlock()
{
  return 1;
}


//======================================================================
// ClientActor::isInvulnerable(ClientActor*)
// address: 0x0029D202   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::isInvulnerable(ClientActor *this, ClientActor *a2)
{
  return 0;
}


//======================================================================
// ClientActor::getSafeFallBlock(void)
// address: 0x0029D206   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::getSafeFallBlock(ClientActor *this)
{
  return 3;
}


//======================================================================
// ClientActor::getViewDist(void)
// address: 0x0029D20A   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientActor::getViewDist(ClientActor *this)
{
  return 3200;
}


//======================================================================
// ClientActor::getBlockPathWeight(void)
// address: 0x0029D210   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::getBlockPathWeight(ClientActor *this)
{
  return 0;
}


//======================================================================
// ClientActor::getPortalCooldown(void)
// address: 0x0029D214   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientActor::getPortalCooldown(ClientActor *this)
{
  return 900;
}


//======================================================================
// ClientActor::getPortalTransferTime(void)
// address: 0x0029D21A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::getPortalTransferTime(ClientActor *this)
{
  return 0;
}


//======================================================================
// ClientActor::interact(ClientPlayer *)
// address: 0x0029D21E   size: 0x4 (4 bytes)
//======================================================================
int ClientActor::interact()
{
  return 0;
}


//======================================================================
// ClientActor::isMaster(void)
// address: 0x002FCDD8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::isMaster(ClientActor *this)
{
  return 1;
}


//======================================================================
// ClientActor::onCollideWithPlayer(ClientPlayer *)
// address: 0x002FCDDC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientActor::onCollideWithPlayer(ClientActor *this, ClientPlayer *a2)
{
  ;
}


//======================================================================
// ClientActor::collideWithActor(ClientActor*)
// address: 0x002FCDDE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientActor::collideWithActor(ClientActor *this, ClientActor *a2)
{
  return (*(int (__fastcall **)(ClientActor *, ClientActor *))(*(_DWORD *)a2 + 36))(a2, this);
}


//======================================================================
// ClientActor::attackedFrom(OneAttackData &,ClientActor*)
// address: 0x002FCDEE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientActor::attackedFrom(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 76);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 16))(result);
  return result;
}


//======================================================================
// ClientActor::getVerticalFaceSpeed(void)
// address: 0x002FCDFE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::getVerticalFaceSpeed(ClientActor *this)
{
  return 40;
}


//======================================================================
// ClientActor::canBePushed(void)
// address: 0x002FCE02   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::canBePushed(ClientActor *this)
{
  return 0;
}


//======================================================================
// ClientActor::getEyeHeight(void)
// address: 0x002FCE06   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ClientActor::getEyeHeight(ClientActor *this)
{
  return 80 * *(_DWORD *)(*((_DWORD *)this + 17) + 24) / 100;
}


//======================================================================
// ClientActor::isPotionApplicable(int)
// address: 0x002FCE18   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::isPotionApplicable(ClientActor *this, int a2)
{
  return 1;
}


//======================================================================
// ClientActor::update(float)
// address: 0x002FCE1C   size: 0x1C (28 bytes)
//======================================================================
ActorBody *__fastcall ClientActor::update(ClientActor *this, float a2)
{
  ActorBody *result; // r0

  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 17) + 12))(*((_DWORD *)this + 17));
  result = *((ActorBody **)this + 16);
  if ( result != nullptr )
    return (ActorBody *)ActorBody::update(result, a2);
  return result;
}


//======================================================================
// ClientActor::onEvent(ActorEvent const&)
// address: 0x002FCE38   size: 0xE (14 bytes)
//======================================================================
int __fastcall ClientActor::onEvent(__int64 a1, int a2, int a3)
{
  LODWORD(a1) = *(_DWORD *)(a1 + 64);
  if ( (_DWORD)a1 != 0 )
    LODWORD(a1) = ActorBody::onEvent(a1, a2, a3);
  return a1;
}


//======================================================================
// ClientActor::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002FCE46   size: 0xA (10 bytes)
//======================================================================
ActorBody *__fastcall ClientActor::onCull(ClientActor *this, Ogre::GameScene **a2, Ogre::CullFrustum *a3)
{
  ActorBody *result; // r0

  result = *((ActorBody **)this + 16);
  ActorBody::onCull(result, a2, a3);
  return result;
}


//======================================================================
// ClientActor::getRiderPosition(void)
// address: 0x002FCE50   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall ClientActor::getRiderPosition(_DWORD *this, int a2)
{
  _DWORD *v2; // r3
  int v3; // r4
  int v4; // r1

  v2 = *(_DWORD **)(a2 + 68);
  v3 = v2[9];
  *(this + 2) = v2[10];
  v4 = v2[7];
  *this = v2[8];
  *(this + 1) = v3 - v4;
  return this;
}


//======================================================================
// ClientActor::applyActorCollision(ClientActor*)
// address: 0x002FCE68   size: 0x10A (266 bytes)
//======================================================================
float __fastcall ClientActor::applyActorCollision(float this, ClientActor *a2)
{
  float v2; // r5
  int v4; // r7
  int v5; // r6
  float v6; // r0
  float v7; // r7
  float v8; // r0
  float v9; // r0
  float v10; // r6
  float v11; // r7
  float v12; // r0
  float v13; // r6
  float v14; // r7
  float v15; // [sp+4h] [bp-10h]
  float v16; // [sp+4h] [bp-10h]
  float v17; // [sp+8h] [bp-Ch]
  float v18; // [sp+8h] [bp-Ch]
  float v19; // [sp+Ch] [bp-8h]

  v2 = this;
  if ( *((_DWORD *)a2 + 20) != LODWORD(this) && *((_DWORD *)a2 + 21) != LODWORD(this) )
  {
    v4 = *((_DWORD *)a2 + 17);
    v5 = *(_DWORD *)(LODWORD(this) + 68);
    v17 = (float)(*(_DWORD *)(v4 + 32) - *(_DWORD *)(v5 + 32)) / 100.0;
    v6 = (float)(*(_DWORD *)(v4 + 40) - *(_DWORD *)(v5 + 40)) / 100.0;
    v7 = v6;
    if ( v17 >= 0.0 )
      v15 = v17;
    else
      LODWORD(v15) = LODWORD(v17) + 0x80000000;
    if ( v6 >= 0.0 )
      v19 = v6;
    else
      LODWORD(v19) = LODWORD(v6) + 0x80000000;
    if ( v15 <= v19 )
      v15 = v19;
    LODWORD(this) = v15 > 0.0;
    if ( v15 > 0.0 )
    {
      v8 = j_sqrt(v15);
      v16 = v8;
      v9 = v17 / v8;
      v10 = v9;
      v18 = v7 / v16;
      v11 = 1.0 / v16;
      if ( (float)(1.0 / v16) > 1.0 )
        v11 = 1.0;
      v12 = v9 * (float)(v11 * 5.0);
      v13 = v10 * (float)(v11 * 5.0);
      v14 = v18 * (float)(v11 * 5.0);
      ActorLocoMotion::addMotion(
        *(ActorLocoMotion **)(LODWORD(v2) + 68),
        COERCE_FLOAT(LODWORD(v12) + 0x80000000),
        0.0,
        COERCE_FLOAT(LODWORD(v14) + 0x80000000));
      return ActorLocoMotion::addMotion(*((ActorLocoMotion **)a2 + 17), v13, 0.0, v14);
    }
  }
  return this;
}


//======================================================================
// ClientActor::enterWorld(World *)
// address: 0x002FCF7C   size: 0x7E (126 bytes)
//======================================================================
Chunk *__fastcall ClientActor::enterWorld(ClientActor *this, World *a2)
{
  Chunk *result; // r0
  _DWORD *v5; // r3
  int v6; // [sp+0h] [bp-1Ch] BYREF
  int v7; // [sp+8h] [bp-14h]
  int v8; // [sp+Ch] [bp-10h] BYREF
  int v9; // [sp+10h] [bp-Ch]
  int v10; // [sp+14h] [bp-8h]

  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 13) = a2;
  *((_WORD *)this + 28) = *((_WORD *)a2 + 30);
  ActorLocoMotion::onEnterWorld(*((ActorLocoMotion **)this + 17), a2);
  result = *((Chunk **)this + 16);
  if ( result != nullptr )
    result = (Chunk *)ActorBody::onEnterWorld((int)result, a2);
  if ( *((_BYTE *)this + 8) == 0 )
  {
    v5 = *((_DWORD **)this + 17);
    v8 = v5[8];
    v9 = v5[9];
    v10 = v5[10];
    CoordDivBlock((const WCoord *)&v6, &v8);
    v8 = v6 / 16 - ((unsigned int)(v6 % 16) >> 31);
    v9 = v7 / 16 - ((unsigned int)(v7 % 16) >> 31);
    result = (Chunk *)World::getChunk((int)a2, v8, v9);
    if ( result != nullptr )
      return (Chunk *)Chunk::addActor(result, this);
  }
  return result;
}


//======================================================================
// ClientActor::ClientActor(void)
// address: 0x002FCFFC   size: 0x96 (150 bytes)
//======================================================================
// Alternative name is '_ZN11ClientActorC1Ev'
void __fastcall ClientActor::ClientActor(ClientActor *this)
{
  *(_DWORD *)this = &off_462BB8;
  *((_DWORD *)this + 6) = -1;
  *((_DWORD *)this + 12) = 1;
  *((_WORD *)this + 28) = -1;
  *((_DWORD *)this + 1) = 0;
  *((_BYTE *)this + 8) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 27) = 3200;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_BYTE *)this + 120) = 0;
  *((_BYTE *)this + 116) = 1;
  *((_BYTE *)this + 117) = 0;
  *((_DWORD *)this + 28) = -1;
  *((_BYTE *)this + 118) = 1;
  *((_BYTE *)this + 119) = 0;
  *((_BYTE *)this + 121) = 0;
  *((_BYTE *)this + 122) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_BYTE *)this + 123) = 0;
  *((_DWORD *)this + 33) = 1128792064;
  *((_BYTE *)this + 140) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 149) = 0;
  *((_DWORD *)this + 38) = -1;
  *((_DWORD *)this + 39) = 0;
  *((_BYTE *)this + 148) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 40) = 0;
  *((_DWORD *)this + 41) = 0;
  *((_BYTE *)this + 168) = 0;
  *((_BYTE *)this + 169) = 0;
}


//======================================================================
// ClientActor::release(void)
// address: 0x002FD09C   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall ClientActor::release(_DWORD *this)
{
  int v1; // r3

  v1 = *(this + 12) - 1;
  *(this + 12) = v1;
  if ( v1 == 0 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*this + 164))(this);
  return this;
}


//======================================================================
// ClientActor::addRef(void)
// address: 0x002FD0B2   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ClientActor::addRef(int this)
{
  ++*(_DWORD *)(this + 48);
  return this;
}


//======================================================================
// ClientActor::mountActor(ClientActor*)
// address: 0x002FD0BA   size: 0x60 (96 bytes)
//======================================================================
__int64 __fastcall ClientActor::mountActor(__int64 this, int a2, int a3)
{
  int v4; // r3
  _DWORD *v5; // r3
  int v6; // r2
  int v7; // r6
  int v8; // r0
  int v9; // r2
  int v10; // r0
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  __int64 v14; // [sp+0h] [bp-10h] BYREF
  int v15; // [sp+8h] [bp-8h]
  int v16; // [sp+Ch] [bp-4h]

  v14 = this;
  v15 = a2;
  v16 = a3;
  v4 = *(_DWORD *)(this + 80);
  if ( HIDWORD(this) != 0 )
  {
    if ( v4 != 0 )
      *(_DWORD *)(v4 + 84) = 0;
    v12 = *(_DWORD **)(this + 80);
    if ( v12 != nullptr )
      ClientActor::release(v12);
    ClientActor::addRef(SHIDWORD(this));
    *(_DWORD *)(this + 80) = HIDWORD(this);
    *(_DWORD *)(HIDWORD(this) + 84) = this;
  }
  else
  {
    if ( v4 != 0 )
    {
      v5 = *(_DWORD **)(v4 + 68);
      v6 = v5[10];
      v7 = v5[9];
      HIDWORD(v14) = v5[8];
      v8 = v5[6];
      v16 = v6;
      v9 = v7 + v8;
      v10 = *(_DWORD *)(this + 68);
      v15 = v9;
      (*(void (__fastcall **)(int, char *, _DWORD, _DWORD))(*(_DWORD *)v10 + 16))(v10, (char *)&v14 + 4, v5[1], v5[2]);
      *(_DWORD *)(*(_DWORD *)(this + 80) + 84) = 0;
    }
    v11 = *(_DWORD **)(this + 80);
    if ( v11 != nullptr )
      ClientActor::release(v11);
    *(_DWORD *)(this + 80) = 0;
  }
  return v14;
}


//======================================================================
// ClientActor::sendEvent(ActorEvent const&)
// address: 0x002FD11A   size: 0xC (12 bytes)
//======================================================================
int __fastcall ClientActor::sendEvent(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 168))(a1);
}


//======================================================================
// ClientActor::sendEvent(ACTOR_EVENT)
// address: 0x002FD126   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ClientActor::sendEvent(int *a1, int a2, int a3, int a4)
{
  int v4; // r3
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  v6[0] = a1;
  v6[1] = a2;
  v6[2] = a3;
  v6[3] = a4;
  v4 = *a1;
  v6[0] = a2;
  return (*(int (__fastcall **)(int *, _DWORD *))(v4 + 168))(a1, v6);
}


//======================================================================
// ClientActor::attackedFromType(ATTACK_TYPE,float)
// address: 0x002FD138   size: 0x2E (46 bytes)
//======================================================================
int __fastcall ClientActor::attackedFromType(int *a1, int a2, int a3)
{
  int v6; // r3
  _DWORD v8[8]; // [sp+4h] [bp-20h] BYREF

  j_memset(v8, 0, 0x1Cu);
  BYTE2(v8[4]) = 1;
  v6 = *a1;
  v8[0] = a2;
  v8[1] = a3;
  return (*(int (__fastcall **)(int *, _DWORD *, _DWORD))(v6 + 68))(a1, v8, 0);
}


//======================================================================
// ClientActor::updateSunHurt(void)
// address: 0x002FD168   size: 0x84 (132 bytes)
//======================================================================
int __fastcall ClientActor::updateSunHurt(int this)
{
  int v1; // r4
  float v2; // r5
  float v3; // r6
  _DWORD *v4; // r3
  int v5; // r2
  int v6; // r3
  int v7; // r6
  int v8[3]; // [sp+0h] [bp-18h] BYREF
  int v9[3]; // [sp+Ch] [bp-Ch] BYREF

  v1 = this;
  if ( *(_DWORD *)(g_WorldMgr + 56) <= 0x2EE0u )
  {
    v2 = COERCE_FLOAT(ActorLocoMotion::getBrightness(*(ActorLocoMotion **)(this + 68)));
    this = v2 > 0.5;
    if ( v2 > 0.5 )
    {
      v3 = GenRandomFloat() * 30.0;
      this = v3 < (float)((float)(v2 - 0.4) + (float)(v2 - 0.4));
      if ( v3 < (float)((float)(v2 - 0.4) + (float)(v2 - 0.4)) )
      {
        v4 = *(_DWORD **)(v1 + 68);
        v9[0] = v4[8];
        v5 = v4[9];
        v6 = v4[10];
        v9[1] = v5;
        v9[2] = v6;
        CoordDivBlock((const WCoord *)v8, v9);
        v7 = v8[1];
        this = (int)World::getTopHeight(*(World **)(v1 + 52), v8[0], v8[2]);
        if ( v7 >= this )
          return ClientActor::attackedFromType((int *)v1, 6, 0);
      }
    }
  }
  return this;
}


//======================================================================
// ClientActor::isDead(void)
// address: 0x002FD1FC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall ClientActor::isDead(ClientActor *this)
{
  int result; // r0

  result = *((_DWORD *)this + 19);
  if ( result != 0 )
    return *(float *)(result + 8) <= 0.0;
  return result;
}


//======================================================================
// ClientActor::setNeedClear(int)
// address: 0x002FD212   size: 0xC (12 bytes)
//======================================================================
int __fastcall ClientActor::setNeedClear(int this, int a2)
{
  if ( *(int *)(this + 24) < 0 )
    *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// ClientActor::onDie(void)
// address: 0x002FD21E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ClientActor::onDie(ActorLocoMotion **this)
{
  int v2; // r0

  ActorLocoMotion::onDie(*(this + 17));
  v2 = (int)*(this + 19);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 20))(v2);
  return ClientActor::setNeedClear((int)this, 0);
}


//======================================================================
// ClientActor::getActorMgr(void)
// address: 0x002FD23E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ClientActor::getActorMgr(ClientActor *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 13) + 132);
}


//======================================================================
// ClientActor::getPosition(void)
// address: 0x002FD246   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall ClientActor::getPosition(_DWORD *this, int a2)
{
  _DWORD *v2; // r3
  int v3; // r2
  int v4; // r3

  v2 = *(_DWORD **)(a2 + 68);
  *this = v2[8];
  v3 = v2[9];
  v4 = v2[10];
  *(this + 1) = v3;
  *(this + 2) = v4;
  return this;
}


//======================================================================
// ClientActor::isWet(void)
// address: 0x002FD256   size: 0x5E (94 bytes)
//======================================================================
int __fastcall ClientActor::isWet(ClientActor *this)
{
  Environment **v3; // r7
  Environment **v4; // r7
  int v5; // r2
  int v6[3]; // [sp+4h] [bp-28h] BYREF
  int v7[3]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v8[16]; // [sp+1Ch] [bp-10h] BYREF

  if ( *(_BYTE *)(*((_DWORD *)this + 17) + 125) != 0 )
    return 1;
  ClientActor::getPosition(v6, (int)this);
  v3 = *((Environment ***)this + 13);
  CoordDivBlock((const WCoord *)v8, v6);
  if ( World::canLightningStrikeAt(v3, (const WCoord *)v8) != 0 )
    return 1;
  v4 = *((Environment ***)this + 13);
  v5 = v6[1] + *(_DWORD *)(*((_DWORD *)this + 17) + 24);
  v7[0] = v6[0];
  v7[1] = v5;
  v7[2] = v6[2];
  CoordDivBlock((const WCoord *)v8, v7);
  return World::canLightningStrikeAt(v4, (const WCoord *)v8);
}


//======================================================================
// ClientActor::setToAttackTarget(ClientActor*)
// address: 0x002FD2B4   size: 0x38 (56 bytes)
//======================================================================
ClientActor *__fastcall ClientActor::setToAttackTarget(ClientActor *this, ClientActor *a2)
{
  ClientActor *result; // r0

  result = *((ClientActor **)this + 24);
  if ( result != a2 )
  {
    if ( result != nullptr )
    {
      result = (ClientActor *)ClientActor::release(result);
      *((_DWORD *)this + 24) = 0;
    }
    if ( a2 != nullptr )
    {
      *((_DWORD *)this + 24) = a2;
      result = (ClientActor *)ClientActor::addRef((int)a2);
      if ( *((_DWORD *)this + 31) == 0 )
        *((_BYTE *)this + 148) = 1;
    }
    else
    {
      *((_BYTE *)this + 148) = 0;
    }
  }
  return result;
}


//======================================================================
// ClientActor::getToAttackTarget(void)
// address: 0x002FD2EC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::getToAttackTarget(ClientActor *this)
{
  return *((_DWORD *)this + 24);
}


//======================================================================
// ClientActor::getPathHideRange(void)
// address: 0x002FD2F0   size: 0x46 (70 bytes)
//======================================================================
int __fastcall ClientActor::getPathHideRange(ClientActor *this)
{
  int v2; // r3
  int v3; // r4

  if ( ClientActor::getToAttackTarget(this) == 0 )
    return 3;
  v2 = *((_DWORD *)this + 39);
  v3 = *((_DWORD *)this + 19);
  if ( v2 == 1 )
    return (((int)(float)(*(float *)(v3 + 8) - (float)(*(float *)(v3 + 12) * 0.33)) - 8)
          & (~((int)(float)(*(float *)(v3 + 8) - (float)(*(float *)(v3 + 12) * 0.33)) - 8) >> 31))
         + 3;
  else
    return (int)*(float *)(v3 + 8) + 2;
}


//======================================================================
// ClientActor::setBeHurtTarget(ClientActor*)
// address: 0x002FD33C   size: 0x2A (42 bytes)
//======================================================================
ClientActor *__fastcall ClientActor::setBeHurtTarget(ClientActor *this, ClientActor *a2)
{
  ClientActor *result; // r0

  *((_DWORD *)this + 26) = *((_DWORD *)this + 1);
  result = *((ClientActor **)this + 25);
  if ( result != a2 )
  {
    if ( result != nullptr )
    {
      result = (ClientActor *)ClientActor::release(result);
      *((_DWORD *)this + 25) = 0;
    }
    if ( a2 != nullptr )
    {
      result = (ClientActor *)ClientActor::addRef((int)a2);
      *((_DWORD *)this + 25) = a2;
    }
  }
  return result;
}


//======================================================================
// ClientActor::~ClientActor()
// address: 0x002FD368   size: 0xA6 (166 bytes)
//======================================================================
// Alternative name is '_ZN11ClientActorD1Ev'
void __fastcall ClientActor::~ClientActor(ActorBody **this)
{
  _DWORD *v2; // r0
  int v3; // r0
  void *v4; // r5
  void *v5; // r5
  int v6; // r0
  void *v7; // r5
  void *v8; // r5
  void *v9; // r5

  *this = (ActorBody *)&off_462BB8;
  ClientActor::setToAttackTarget((ClientActor *)this, nullptr);
  ClientActor::setBeHurtTarget((ClientActor *)this, nullptr);
  v2 = *(this + 20);
  if ( v2 != nullptr )
    ClientActor::release(v2);
  v3 = (int)*(this + 17);
  *(this + 20) = nullptr;
  *(this + 21) = nullptr;
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *(this + 18);
  if ( v4 != nullptr )
  {
    ActorVision::~ActorVision(*(this + 18));
    operator delete(v4);
  }
  v5 = *(this + 16);
  if ( v5 != nullptr )
  {
    ActorBody::~ActorBody(*(this + 16));
    operator delete(v5);
  }
  v6 = (int)*(this + 19);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *(this + 22);
  if ( v7 != nullptr )
  {
    AITask::~AITask(*(this + 22));
    operator delete(v7);
  }
  v8 = *(this + 23);
  if ( v8 != nullptr )
  {
    AITask::~AITask(*(this + 23));
    operator delete(v8);
  }
  v9 = *(this + 34);
  if ( v9 != nullptr )
  {
    NavigationPath::~NavigationPath(*(this + 34));
    operator delete(v9);
  }
}


//======================================================================
// ClientActor::~ClientActor()
// address: 0x002FD414   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientActor::~ClientActor(ActorBody **this)
{
  ClientActor::~ClientActor(this);
  operator delete(this);
}


//======================================================================
// ClientActor::leaveWorld(bool)
// address: 0x002FD426   size: 0x60 (96 bytes)
//======================================================================
__int64 __fastcall ClientActor::leaveWorld(__int64 this)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // r0
  Section **Chunk; // r0

  ClientActor::setToAttackTarget((ClientActor *)this, nullptr);
  ClientActor::setBeHurtTarget((ClientActor *)this, nullptr);
  v2 = *(_DWORD **)(this + 80);
  if ( v2 != nullptr )
    ClientActor::release(v2);
  v3 = *(_DWORD *)(this + 52);
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 84) = 0;
  if ( *(unsigned __int16 *)(this + 56) == *(unsigned __int16 *)(v3 + 60) )
  {
    v4 = *(_DWORD *)(this + 64);
    if ( v4 != 0 )
      ActorBody::onLeaveWorld(v4);
  }
  if ( HIDWORD(this) == 0 && *(_BYTE *)(this + 8) != 0 )
  {
    Chunk = (Section **)World::getChunk(*(_DWORD *)(this + 52), *(_DWORD *)(this + 12), *(_DWORD *)(this + 20));
    if ( Chunk != nullptr )
      Chunk::removeActor(Chunk, (ClientActor *)this);
    else
      *(_BYTE *)(this + 8) = 0;
  }
  *(_DWORD *)(this + 52) = 0;
  return this;
}


//======================================================================
// ClientActor::tick(void)
// address: 0x002FD486   size: 0x13A (314 bytes)
//======================================================================
NavigationPath *__fastcall ClientActor::tick(ClientActor *this)
{
  _BYTE *v2; // r6
  int v3; // r0
  int *v4; // r3
  int *v5; // r5
  int v6; // r2
  int v7; // r1
  _DWORD *v8; // r2
  int v9; // r3
  int v10; // r0
  ActorBody *v11; // r0
  _DWORD *v12; // r3
  int v13; // r3
  int v14; // r3
  AITask *v15; // r0
  AITask *v16; // r0
  NavigationPath *result; // r0

  if ( *(_BYTE *)(*((_DWORD *)this + 13) + 68) == 0 )
  {
    v2 = (char *)this + 168;
    v3 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)this + 132))(this);
    v4 = (int *)((char *)this + 164);
    v5 = (int *)((char *)this + 160);
    if ( *v2 != 0 )
    {
      v6 = *v4 + 1;
      *v4 = v6;
      if ( *((_DWORD *)this + 20) == 0 && v6 >= v3 )
      {
        *v4 = v3;
        *v5 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)this + 128))(this);
        (*(void (__fastcall **)(ClientActor *, bool))(*(_DWORD *)this + 60))(
          this,
          *(unsigned __int16 *)(*((_DWORD *)this + 13) + 60) == 0);
      }
      *v2 = 0;
    }
    else
    {
      if ( *v4 > 0 )
        *v4 -= 4;
      if ( *v4 < 0 )
        *v4 = 0;
    }
    if ( *v5 > 0 )
      --*v5;
  }
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 17) + 8))(*((_DWORD *)this + 17));
  if ( *((_BYTE *)this + 149) != 0 )
    ClientActor::updateSunHurt((int)this);
  v8 = (_DWORD *)((char *)this + 152);
  v9 = *((_DWORD *)this + 38);
  if ( v9 <= 0 )
  {
    if ( v9 == 0 )
    {
      v7 = -1;
      *v8 = -1;
      v8 = (_DWORD *)(*((_DWORD *)this + 17) + 156);
      *(_BYTE *)v8 = 0;
    }
  }
  else
  {
    *v8 = 0;
    v8 = &dword_0 + 1;
    *(_BYTE *)(*((_DWORD *)this + 17) + 156) = 1;
  }
  v10 = *((_DWORD *)this + 19);
  if ( v10 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 12))(v10);
  v11 = *((ActorBody **)this + 16);
  if ( v11 != nullptr )
    ActorBody::tick(v11);
  v12 = *((_DWORD **)this + 18);
  if ( v12 != nullptr )
  {
    v8 = (_DWORD *)v12[4];
    v7 = v12[7];
    v12[5] = v8;
    v12[8] = v7;
  }
  v13 = *((_DWORD *)this + 24);
  if ( v13 != 0 )
  {
    v8 = *(_DWORD **)(v13 + 52);
    if ( v8 == nullptr || *(int *)(v13 + 24) >= 0 )
      ClientActor::setToAttackTarget(this, nullptr);
  }
  v14 = *((_DWORD *)this + 25);
  if ( v14 != 0 )
  {
    v7 = *(_DWORD *)(v14 + 52);
    if ( v7 == 0 || (v14 = *(_DWORD *)(v14 + 24)) >= 0 )
      ClientActor::setBeHurtTarget(this, nullptr);
  }
  v15 = *((AITask **)this + 22);
  if ( v15 != nullptr )
    AITask::onUpdateTasks(v15);
  v16 = *((AITask **)this + 23);
  if ( v16 != nullptr )
    AITask::onUpdateTasks(v16);
  result = *((NavigationPath **)this + 34);
  if ( result != nullptr )
    NavigationPath::onUpdateNavigation(result, v7, (int)v8, v14);
  return result;
}


//======================================================================
// ClientActor::getBeHurtTarget(void)
// address: 0x002FD5C0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::getBeHurtTarget(ClientActor *this)
{
  return *((_DWORD *)this + 25);
}


//======================================================================
// ClientActor::setHome(int,int,int,int)
// address: 0x002FD5C4   size: 0xE (14 bytes)
//======================================================================
int __fastcall ClientActor::setHome(int this, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r1

  *(_DWORD *)(this + 112) = a2;
  v5 = *(_DWORD **)(this + 68);
  v5[12] = a4;
  v5[11] = a3;
  v5[13] = a5;
  return this;
}


//======================================================================
// ClientActor::isInHomeDist(int,int,int)
// address: 0x002FD5D2   size: 0x4C (76 bytes)
//======================================================================
bool __fastcall ClientActor::isInHomeDist(ClientActor *this, int a2, int a3, int a4)
{
  int v5; // r4
  _DWORD *v6; // r0
  int v7; // r2
  int v8; // r1
  _DWORD v10[3]; // [sp+4h] [bp-Ch] BYREF

  v10[0] = a2;
  v10[1] = a3;
  v10[2] = a4;
  v5 = 1;
  if ( *((_DWORD *)this + 28) != -1 )
  {
    v6 = *((_DWORD **)this + 17);
    v7 = v6[12] - a3;
    v8 = v6[11] - a2;
    v10[2] = v6[13] - a4;
    v10[0] = v8;
    v10[1] = v7;
    return WCoord::length((WCoord *)v10) <= (float)*((int *)this + 28);
  }
  return v5;
}


//======================================================================
// ClientActor::leapTarget(WCoord &,float)
// address: 0x002FD620   size: 0xB8 (184 bytes)
//======================================================================
float __fastcall ClientActor::leapTarget(ClientActor *this, WCoord *a2, float a3)
{
  int v3; // r3
  int v5; // r0
  int v6; // r5
  float v7; // r5
  float result; // r0
  _DWORD v10[2]; // [sp+14h] [bp-10h] BYREF
  int v11; // [sp+1Ch] [bp-8h]

  v3 = *((_DWORD *)this + 17);
  v5 = *((_DWORD *)a2 + 2);
  v6 = *(_DWORD *)(v3 + 40);
  v10[0] = *(_DWORD *)a2 - *(_DWORD *)(v3 + 32);
  v11 = v5 - v6;
  v10[1] = 0;
  v7 = WCoord::length((WCoord *)v10);
  if ( v7 == 0.0 )
    v7 = 1.0;
  *(float *)(*((_DWORD *)this + 17) + 72) = *(float *)(*((_DWORD *)this + 17) + 72)
                                          + (float)((float)((float)((float)((float)v10[0] / v7) * 50.0) * 0.8)
                                                  + (float)(*(float *)(*((_DWORD *)this + 17) + 72) * 0.2));
  result = *(float *)(*((_DWORD *)this + 17) + 80)
         + (float)((float)((float)((float)((float)v11 / v7) * 50.0) * 0.8)
                 + (float)(*(float *)(*((_DWORD *)this + 17) + 80) * 0.2));
  *(float *)(*((_DWORD *)this + 17) + 80) = result;
  *(float *)(*((_DWORD *)this + 17) + 76) = a3;
  return result;
}


//======================================================================
// ClientActor::faceActor(ClientActor*,float,float)
// address: 0x002FD6E4   size: 0xC4 (196 bytes)
//======================================================================
float __fastcall ClientActor::faceActor(ClientActor *this, ClientActor *a2, float a3, float a4)
{
  void *v6; // r0
  int v7; // r7
  int v8; // r7
  int v9; // kr00_4
  __int64 v10; // r0
  int v11; // r5
  int v12; // r4
  float result; // r0
  int v14; // [sp+4h] [bp-38h]
  int v15; // [sp+8h] [bp-34h]
  int v16; // [sp+Ch] [bp-30h]
  float v19; // [sp+1Ch] [bp-20h] BYREF
  float v20[3]; // [sp+20h] [bp-1Ch] BYREF
  float v21; // [sp+2Ch] [bp-10h] BYREF
  float v22; // [sp+30h] [bp-Ch]
  float v23; // [sp+34h] [bp-8h]

  ClientActor::getPosition(v20, (int)a2);
  ClientActor::getPosition(&v21, (int)this);
  v16 = LODWORD(v20[0]) - LODWORD(v21);
  v14 = LODWORD(v20[1]) - LODWORD(v22);
  v15 = LODWORD(v20[2]) - LODWORD(v23);
  if ( a2 != nullptr
    && (v6 = _dynamic_cast(
               a2,
               (const struct __class_type_info *)&`typeinfo for'ClientActor,
               (const struct __class_type_info *)&`typeinfo for'ActorLiving,
               0)) != nullptr )
  {
    v7 = (*(int (__fastcall **)(void *))(*(_DWORD *)v6 + 124))(v6);
    v8 = v14 + v7 - (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)this + 124))(this);
  }
  else
  {
    v9 = *(_DWORD *)(*((_DWORD *)a2 + 17) + 24);
    v8 = v14 + v9 / 2 - (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)this + 124))(this);
  }
  v21 = (float)v16;
  v22 = (float)v8;
  HIDWORD(v10) = v20;
  v23 = (float)v15;
  LODWORD(v10) = &v19;
  Direction2PitchYaw(v10, (const Ogre::Vector3 *)&v21);
  v11 = *((_DWORD *)this + 17);
  *(float *)(v11 + 8) = UpdateRotation(*(float *)(v11 + 8), v20[0], a4);
  v12 = *((_DWORD *)this + 17);
  result = UpdateRotation(*(float *)(v12 + 4), v19, a3);
  *(float *)(v12 + 4) = result;
  return result;
}


//======================================================================
// ClientActor::setInPortal(void)
// address: 0x002FD7B0   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall ClientActor::setInPortal(_DWORD *this)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r3
  int v3; // r5
  int v4; // r2
  int v5; // r4
  _BYTE *v6; // r1
  int v7; // r3
  int v8; // r2
  int v9; // r3

  v1 = this + 40;
  if ( (int)*(this + 40) <= 0 )
  {
    v2 = (_DWORD *)*(this + 17);
    v3 = v2[8];
    v4 = v2[14];
    v5 = v2[10];
    v6 = this + 42;
    v7 = v2[16];
    if ( *(_BYTE *)(*(this + 13) + 68) == 0 && *v6 == 0 )
    {
      v8 = v3 - v4;
      v9 = v5 - v7;
      this = (_DWORD *)((char *)this + 169);
      if ( ((v8 + (v8 >> 31)) ^ (v8 >> 31)) <= ((v9 + (v9 >> 31)) ^ (v9 >> 31)) )
        *(_BYTE *)this = 3 - ((v9 | (v9 - 1)) < 0);
      else
        *(_BYTE *)this = (v8 >> 31) - v8 < 0;
    }
    *v6 = 1;
  }
  else
  {
    this = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*this + 128))(this);
    *v1 = this;
  }
  return this;
}


//======================================================================
// ClientActor::addAiTaskSwimming(int)
// address: 0x002FD81A   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskSwimming(ClientActor *this, int a2)
{
  AITask *v4; // r5
  AITask *v5; // r7
  AISwimming *v6; // r5

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v4 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v4);
    *((_DWORD *)this + 22) = v4;
  }
  v5 = *((AITask **)this + 22);
  v6 = (AISwimming *)operator new(0x10u);
  AISwimming::AISwimming(v6, this);
  return AITask::addTask(v5, a2, v6);
}


//======================================================================
// ClientActor::addAiTaskRestrictSun(int)
// address: 0x002FD85C   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskRestrictSun(ClientActor *this, int a2)
{
  AITask *v4; // r5
  AITask *v5; // r7
  AIRestrictSun *v6; // r5

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v4 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v4);
    *((_DWORD *)this + 22) = v4;
  }
  v5 = *((AITask **)this + 22);
  v6 = (AIRestrictSun *)operator new(0x10u);
  AIRestrictSun::AIRestrictSun(v6, this);
  return AITask::addTask(v5, a2, v6);
}


//======================================================================
// ClientActor::addAiTaskFleeSun(int,float)
// address: 0x002FD89E   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiTaskFleeSun(ClientActor *this, int a2, float a3)
{
  AITask *v6; // r5
  AIFleeSun *v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  if ( *((_DWORD *)this + 22) == 0 )
  {
    v6 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v6);
    *((_DWORD *)this + 22) = v6;
  }
  HIDWORD(v9) = *((_DWORD *)this + 22);
  v7 = (AIFleeSun *)operator new(0x24u);
  AIFleeSun::AIFleeSun(v7, this, a3);
  AITask::addTask((AITask *)HIDWORD(v9), a2, v7);
  return v9;
}


//======================================================================
// ClientActor::addAiTaskSit(int)
// address: 0x002FD8E6   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskSit(ClientActor *this, int a2)
{
  AITask *v4; // r5
  AITask *v5; // r7
  AISit *v6; // r5

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v4 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v4);
    *((_DWORD *)this + 22) = v4;
  }
  v5 = *((AITask **)this + 22);
  v6 = (AISit *)operator new(0x10u);
  AISit::AISit(v6, this);
  return AITask::addTask(v5, a2, v6);
}


//======================================================================
// ClientActor::addAiTaskAtk(int,int,bool,float)
// address: 0x002FD928   size: 0x48 (72 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskAtk(ClientActor *this, int a2, int a3, bool a4, float a5)
{
  AITask *v8; // r5
  AIAtk *v9; // r5
  AITask *v11; // [sp+8h] [bp-Ch]

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v8 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v8);
    *((_DWORD *)this + 22) = v8;
  }
  v11 = *((AITask **)this + 22);
  v9 = (AIAtk *)operator new(0x28u);
  AIAtk::AIAtk(v9, this, a3, a4, a5);
  return AITask::addTask(v11, a2, v9);
}


//======================================================================
// ClientActor::addAiTaskArrowAttack(int,float,int,int,int)
// address: 0x002FD97C   size: 0x52 (82 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskArrowAttack(ClientActor *this, int a2, float a3, int a4, int a5, int a6)
{
  AITask *v9; // r5
  AIArrowAttack *v10; // r5
  AITask *v12; // [sp+8h] [bp-Ch]

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v9 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v9);
    *((_DWORD *)this + 22) = v9;
  }
  v12 = *((AITask **)this + 22);
  v10 = (AIArrowAttack *)operator new(0x30u);
  AIArrowAttack::AIArrowAttack(v10, this, a3, a4, a5, (float)a6);
  return AITask::addTask(v12, a2, v10);
}


//======================================================================
// ClientActor::addAiTaskFollowOwner(int,float,int,int)
// address: 0x002FD9DA   size: 0x48 (72 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskFollowOwner(ClientActor *this, int a2, float a3, int a4, int a5)
{
  AITask *v8; // r5
  AIFollowOwner *v9; // r5
  AITask *v11; // [sp+8h] [bp-Ch]

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v8 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v8);
    *((_DWORD *)this + 22) = v8;
  }
  v11 = *((AITask **)this + 22);
  v9 = (AIFollowOwner *)operator new(0x28u);
  AIFollowOwner::AIFollowOwner(v9, this, a3, a4, a5);
  return AITask::addTask(v11, a2, v9);
}


//======================================================================
// ClientActor::addAiTaskWander(int,float)
// address: 0x002FDA2E   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiTaskWander(ClientActor *this, int a2, float a3)
{
  AITask *v6; // r5
  AIWander *v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  if ( *((_DWORD *)this + 22) == 0 )
  {
    v6 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v6);
    *((_DWORD *)this + 22) = v6;
  }
  HIDWORD(v9) = *((_DWORD *)this + 22);
  v7 = (AIWander *)operator new(0x20u);
  AIWander::AIWander(v7, this, a3);
  AITask::addTask((AITask *)HIDWORD(v9), a2, v7);
  return v9;
}


//======================================================================
// ClientActor::addAiTaskBeg(int,int,int)
// address: 0x002FDA76   size: 0x40 (64 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiTaskBeg(ClientActor *this, int a2, int a3, int a4)
{
  AITask *v7; // r5
  AIBeg *v8; // r5
  __int64 v10; // [sp+0h] [bp-Ch]

  HIDWORD(v10) = a2;
  if ( *((_DWORD *)this + 22) == 0 )
  {
    v7 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v7);
    *((_DWORD *)this + 22) = v7;
  }
  LODWORD(v10) = *((_DWORD *)this + 22);
  v8 = (AIBeg *)operator new(0x20u);
  AIBeg::AIBeg(v8, this, a3, a4);
  AITask::addTask((AITask *)v10, SHIDWORD(v10), v8);
  return v10;
}


//======================================================================
// ClientActor::addAiTaskWatchClosest(int,int)
// address: 0x002FDAC2   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiTaskWatchClosest(ClientActor *this, int a2, int a3)
{
  AITask *v6; // r5
  AIWatchClosest *v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  if ( *((_DWORD *)this + 22) == 0 )
  {
    v6 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v6);
    *((_DWORD *)this + 22) = v6;
  }
  HIDWORD(v9) = *((_DWORD *)this + 22);
  v7 = (AIWatchClosest *)operator new(0x18u);
  AIWatchClosest::AIWatchClosest(v7, this, a3);
  AITask::addTask((AITask *)HIDWORD(v9), a2, v7);
  return v9;
}


//======================================================================
// ClientActor::addAiTaskLookIdle(int)
// address: 0x002FDB0A   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskLookIdle(ClientActor *this, int a2)
{
  AITask *v4; // r5
  AITask *v5; // r7
  AILookIdle *v6; // r5

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v4 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v4);
    *((_DWORD *)this + 22) = v4;
  }
  v5 = *((AITask **)this + 22);
  v6 = (AILookIdle *)operator new(0x28u);
  AILookIdle::AILookIdle(v6, this);
  return AITask::addTask(v5, a2, v6);
}


//======================================================================
// ClientActor::addAiTaskBreakDoor(int)
// address: 0x002FDB4C   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskBreakDoor(ClientActor *this, int a2)
{
  AITask *v4; // r5
  AITask *v5; // r7
  AIBreakDoor *v6; // r5

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v4 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v4);
    *((_DWORD *)this + 22) = v4;
  }
  v5 = *((AITask **)this + 22);
  v6 = (AIBreakDoor *)operator new(0x34u);
  AIBreakDoor::AIBreakDoor(v6, this);
  return AITask::addTask(v5, a2, v6);
}


//======================================================================
// ClientActor::addAiTaskMoveTowardsRestriction(int,float)
// address: 0x002FDB8E   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiTaskMoveTowardsRestriction(ClientActor *this, int a2, float a3)
{
  AITask *v6; // r5
  AIMoveTowardsRestriction *v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  if ( *((_DWORD *)this + 22) == 0 )
  {
    v6 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v6);
    *((_DWORD *)this + 22) = v6;
  }
  HIDWORD(v9) = *((_DWORD *)this + 22);
  v7 = (AIMoveTowardsRestriction *)operator new(0x20u);
  AIMoveTowardsRestriction::AIMoveTowardsRestriction(v7, this, a3);
  AITask::addTask((AITask *)HIDWORD(v9), a2, v7);
  return v9;
}


//======================================================================
// ClientActor::addAiTaskPanic(int,float)
// address: 0x002FDBD6   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiTaskPanic(ClientActor *this, int a2, float a3)
{
  AITask *v6; // r5
  AIPanic *v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  if ( *((_DWORD *)this + 22) == 0 )
  {
    v6 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v6);
    *((_DWORD *)this + 22) = v6;
  }
  HIDWORD(v9) = *((_DWORD *)this + 22);
  v7 = (AIPanic *)operator new(0x20u);
  AIPanic::AIPanic(v7, this, a3);
  AITask::addTask((AITask *)HIDWORD(v9), a2, v7);
  return v9;
}


//======================================================================
// ClientActor::addAiTaskTempt(int,float,int,bool)
// address: 0x002FDC1E   size: 0x4E (78 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskTempt(ClientActor *this, int a2, float a3, int a4, bool a5)
{
  AITask *v8; // r5
  AITempt *v9; // r5
  AITask *v11; // [sp+Ch] [bp-10h]

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v8 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v8);
    *((_DWORD *)this + 22) = v8;
  }
  v11 = *((AITask **)this + 22);
  v9 = (AITempt *)operator new(0x30u);
  AITempt::AITempt(v9, this, a3, a4, a5);
  return AITask::addTask(v11, a2, v9);
}


//======================================================================
// ClientActor::addAiLeapAtTarget(int,float,int,int)
// address: 0x002FDC78   size: 0x48 (72 bytes)
//======================================================================
int __fastcall ClientActor::addAiLeapAtTarget(ClientActor *this, int a2, float a3, int a4, int a5)
{
  AITask *v8; // r5
  AILeapAtTarget *v9; // r5
  AITask *v11; // [sp+8h] [bp-Ch]

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v8 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v8);
    *((_DWORD *)this + 22) = v8;
  }
  v11 = *((AITask **)this + 22);
  v9 = (AILeapAtTarget *)operator new(0x28u);
  AILeapAtTarget::AILeapAtTarget(v9, this, a3, a4, a5);
  return AITask::addTask(v11, a2, v9);
}


//======================================================================
// ClientActor::addAiMate(int,float)
// address: 0x002FDCCC   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiMate(ClientActor *this, int a2, float a3)
{
  AITask *v6; // r5
  AIMate *v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  if ( *((_DWORD *)this + 22) == 0 )
  {
    v6 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v6);
    *((_DWORD *)this + 22) = v6;
  }
  HIDWORD(v9) = *((_DWORD *)this + 22);
  v7 = (AIMate *)operator new(0x1Cu);
  AIMate::AIMate(v7, this, a3);
  AITask::addTask((AITask *)HIDWORD(v9), a2, v7);
  return v9;
}


//======================================================================
// ClientActor::addAiTaskFollowParent(int,float)
// address: 0x002FDD14   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiTaskFollowParent(ClientActor *this, int a2, float a3)
{
  AITask *v6; // r5
  AIFollowParent *v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  if ( *((_DWORD *)this + 22) == 0 )
  {
    v6 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v6);
    *((_DWORD *)this + 22) = v6;
  }
  HIDWORD(v9) = *((_DWORD *)this + 22);
  v7 = (AIFollowParent *)operator new(0x18u);
  AIFollowParent::AIFollowParent(v7, this, a3);
  AITask::addTask((AITask *)HIDWORD(v9), a2, v7);
  return v9;
}


//======================================================================
// ClientActor::addAiTaskCreeperSwell(int)
// address: 0x002FDD5C   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskCreeperSwell(ClientActor *this, int a2)
{
  AITask *v4; // r5
  AITask *v5; // r7
  AICreeperSwell *v6; // r5

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v4 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v4);
    *((_DWORD *)this + 22) = v4;
  }
  v5 = *((AITask **)this + 22);
  v6 = (AICreeperSwell *)operator new(0x10u);
  AICreeperSwell::AICreeperSwell(v6, this);
  return AITask::addTask(v5, a2, v6);
}


//======================================================================
// ClientActor::addAiTaskEatGrass(int)
// address: 0x002FDD9E   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskEatGrass(ClientActor *this, int a2)
{
  AITask *v4; // r5
  AITask *v5; // r7
  AIEatGrass *v6; // r5

  if ( *((_DWORD *)this + 22) == 0 )
  {
    v4 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v4);
    *((_DWORD *)this + 22) = v4;
  }
  v5 = *((AITask **)this + 22);
  v6 = (AIEatGrass *)operator new(0x18u);
  AIEatGrass::AIEatGrass(v6, this);
  return AITask::addTask(v5, a2, v6);
}


//======================================================================
// ClientActor::addAiTaskTargetOnwnerHurtee(int)
// address: 0x002FDDE0   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskTargetOnwnerHurtee(ClientActor *this, int a2)
{
  AITask *v4; // r5
  AITask *v5; // r7
  AITargetOwnerHurtee *v6; // r5

  if ( *((_DWORD *)this + 23) == 0 )
  {
    v4 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v4);
    *((_DWORD *)this + 23) = v4;
  }
  v5 = *((AITask **)this + 23);
  v6 = (AITargetOwnerHurtee *)operator new(0x1Cu);
  AITargetOwnerHurtee::AITargetOwnerHurtee(v6, this);
  return AITask::addTask(v5, a2, v6);
}


//======================================================================
// ClientActor::addAiTaskTargetOnwnerHurter(int)
// address: 0x002FDE22   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskTargetOnwnerHurter(ClientActor *this, int a2)
{
  AITask *v4; // r5
  AITask *v5; // r7
  AITargetOwnerHurter *v6; // r5

  if ( *((_DWORD *)this + 23) == 0 )
  {
    v4 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v4);
    *((_DWORD *)this + 23) = v4;
  }
  v5 = *((AITask **)this + 23);
  v6 = (AITargetOwnerHurter *)operator new(0x1Cu);
  AITargetOwnerHurter::AITargetOwnerHurter(v6, this);
  return AITask::addTask(v5, a2, v6);
}


//======================================================================
// ClientActor::addAiTaskTargetHurtee(int,bool)
// address: 0x002FDE64   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiTaskTargetHurtee(ClientActor *this, int a2, bool a3)
{
  AITask *v6; // r5
  AITargetHurtee *v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = this;
  if ( *((_DWORD *)this + 23) == 0 )
  {
    v6 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v6);
    *((_DWORD *)this + 23) = v6;
  }
  HIDWORD(v9) = *((_DWORD *)this + 23);
  v7 = (AITargetHurtee *)operator new(0x20u);
  AITargetHurtee::AITargetHurtee(v7, this, a3);
  AITask::addTask((AITask *)HIDWORD(v9), a2, v7);
  return v9;
}


//======================================================================
// ClientActor::addAiTaskTargetNonTamed(int,int,int)
// address: 0x002FDEAC   size: 0x40 (64 bytes)
//======================================================================
__int64 __fastcall ClientActor::addAiTaskTargetNonTamed(ClientActor *this, int a2, int a3, int a4)
{
  AITask *v7; // r5
  AITargetNonTamed *v8; // r5
  __int64 v10; // [sp+0h] [bp-Ch]

  HIDWORD(v10) = a2;
  if ( *((_DWORD *)this + 23) == 0 )
  {
    v7 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v7);
    *((_DWORD *)this + 23) = v7;
  }
  LODWORD(v10) = *((_DWORD *)this + 23);
  v8 = (AITargetNonTamed *)operator new(0x20u);
  AITargetNonTamed::AITargetNonTamed(v8, this, a3, a4);
  AITask::addTask((AITask *)v10, SHIDWORD(v10), v8);
  return v10;
}


//======================================================================
// ClientActor::addAiTaskTargetNearest(int,int,bool,float)
// address: 0x002FDEF8   size: 0x48 (72 bytes)
//======================================================================
int __fastcall ClientActor::addAiTaskTargetNearest(ClientActor *this, int a2, int a3, bool a4, float a5)
{
  AITask *v8; // r5
  AITargetNearest *v9; // r5
  AITask *v11; // [sp+8h] [bp-Ch]

  if ( *((_DWORD *)this + 23) == 0 )
  {
    v8 = (AITask *)operator new(0x2Cu);
    AITask::AITask(v8);
    *((_DWORD *)this + 23) = v8;
  }
  v11 = *((AITask **)this + 23);
  v9 = (AITargetNearest *)operator new(0x20u);
  AITargetNearest::AITargetNearest(v9, this, a3, a4, a5);
  return AITask::addTask(v11, a2, v9);
}


//======================================================================
// ClientActor::getTamedOwner(void)
// address: 0x002FDF50   size: 0x12 (18 bytes)
//======================================================================
ClientPlayer *__fastcall ClientActor::getTamedOwner(ClientActor *this)
{
  return ClientActorMgr::findPlayerByUin(*(ClientActorMgr **)(*((_DWORD *)this + 13) + 132), *((_DWORD *)this + 31));
}


//======================================================================
// ClientActor::getEyePosition(void)
// address: 0x002FDF62   size: 0x20 (32 bytes)
//======================================================================
ClientActor *__fastcall ClientActor::getEyePosition(ClientActor *this, _DWORD *a2)
{
  _DWORD *v2; // r3
  int v4; // r7
  int v5; // r5
  int v6; // r6
  int v7; // r0

  v2 = (_DWORD *)a2[17];
  v4 = v2[8];
  v5 = v2[10];
  v6 = v2[9];
  v7 = (*(int (__fastcall **)(_DWORD *))(*a2 + 124))(a2);
  *(_DWORD *)this = v4;
  *((_DWORD *)this + 1) = v6 + v7;
  *((_DWORD *)this + 2) = v5;
  return this;
}


//======================================================================
// ClientActor::getBrightness(float)
// address: 0x002FDF82   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ClientActor::getBrightness(ClientActor *this, float a2)
{
  World *v3; // r6
  int v4; // r2
  int v5; // r3
  int v7[3]; // [sp+0h] [bp-18h] BYREF
  _BYTE v8[12]; // [sp+Ch] [bp-Ch] BYREF

  ClientActor::getEyePosition((ClientActor *)v7, this);
  v3 = *((World **)this + 13);
  CoordDivBlock((const WCoord *)v8, v7);
  return World::getLightBrightness(v3, (const WCoord *)v8, v4, v5);
}


//======================================================================
// ClientActor::lookAtPos(WCoord &)
// address: 0x002FDFA8   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall ClientActor::lookAtPos(ClientActor *this, WCoord *a2)
{
  float v3; // r7
  float v4; // r6
  float v5; // r0
  float v6; // r5
  float v7; // r0
  float v8; // r7
  float v9; // r6
  float v10; // r0
  _DWORD v13[7]; // [sp+Ch] [bp-28h] BYREF
  char v14; // [sp+28h] [bp-Ch]

  ClientActor::getEyePosition((ClientActor *)v13, this);
  v3 = (float)(*(_DWORD *)a2 - v13[0]);
  v4 = (float)(*((_DWORD *)a2 + 1) - v13[1]);
  v5 = (float)(*((_DWORD *)a2 + 2) - v13[2]);
  v6 = v5;
  v7 = j_sqrt((float)((float)((float)(v3 * v3) + (float)(v4 * v4)) + (float)(v5 * v5)));
  if ( v7 <= 0.00001 )
  {
    v10 = 0.0;
    v9 = 0.0;
    v8 = 0.0;
  }
  else
  {
    v8 = v3 * (float)(1.0 / v7);
    v9 = v4 * (float)(1.0 / v7);
    v10 = v6 * (float)(1.0 / v7);
  }
  v13[3] = 5;
  *(float *)&v13[6] = v10;
  v14 = 0;
  *(float *)&v13[4] = v8;
  *(float *)&v13[5] = v9;
  return ClientActor::sendEvent((int)this);
}


//======================================================================
// ClientActor::lookAtTarget(ClientActor*)
// address: 0x002FE070   size: 0x1A (26 bytes)
//======================================================================
int __fastcall ClientActor::lookAtTarget(ClientActor *this, ClientActor *a2)
{
  _BYTE v4[16]; // [sp+4h] [bp-10h] BYREF

  ClientActor::getEyePosition((ClientActor *)v4, a2);
  return ClientActor::lookAtPos(this, (WCoord *)v4);
}


//======================================================================
// ClientActor::setLookPositionWithEntity(ClientActor*,float,float)
// address: 0x002FE08A   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ClientActor::setLookPositionWithEntity(ClientActor *this, ClientActor *a2, int a3, int a4)
{
  int v4; // r7
  _DWORD v8[4]; // [sp+4h] [bp-10h] BYREF

  v4 = *((_DWORD *)this + 16);
  ClientActor::getEyePosition((ClientActor *)v8, a2);
  return ActorBody::setLookAt(v4, v8, a3, a4);
}


//======================================================================
// ClientActor::setLookPosition(int,int,int,float,float)
// address: 0x002FE0AC   size: 0x18 (24 bytes)
//======================================================================
int __fastcall ClientActor::setLookPosition(ClientActor *this, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  return ActorBody::setLookAt(*((_DWORD *)this + 16), v7, a5, a6);
}


//======================================================================
// ClientActor::setTamedOwnerUin(int,bool)
// address: 0x002FE0C4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActor::setTamedOwnerUin(int this, int a2, bool a3)
{
  *(_DWORD *)(this + 124) = a2;
  return this;
}


//======================================================================
// ClientActor::isBurning(void)
// address: 0x002FE0C8   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall ClientActor::isBurning(ClientActor *this)
{
  int v1; // r3
  unsigned int result; // r0

  v1 = *((_DWORD *)this + 19);
  result = 0;
  if ( *(_BYTE *)(v1 + 20) == 0 )
    return (unsigned int)((*(int *)(v1 + 16) >> 31) - *(_DWORD *)(v1 + 16)) >> 31;
  return result;
}


//======================================================================
// ClientActor::isInWater(void)
// address: 0x002FE0DE   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ClientActor::isInWater(ClientActor *this)
{
  return *(unsigned __int8 *)(*((_DWORD *)this + 17) + 125);
}


//======================================================================
// ClientActor::handleLavaMovement(void)
// address: 0x002FE0E6   size: 0xA (10 bytes)
//======================================================================
int __fastcall ClientActor::handleLavaMovement(ActorLocoMotion **this)
{
  return ActorLocoMotion::handleLavaMovement(*(this + 17));
}


//======================================================================
// ClientActor::jumpOnce(void)
// address: 0x002FE0F0   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall ClientActor::jumpOnce(ClientActor *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 152);
  *result = 1;
  return result;
}


//======================================================================
// ClientActor::kill(void)
// address: 0x002FE0F8   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ClientActor::kill(ClientActor *this)
{
  int result; // r0

  result = *((_DWORD *)this + 19);
  if ( result != 0 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)result + 36))(result, -915135488);
  return result;
}


//======================================================================
// ClientActor::playSound(char const*,float,float)
// address: 0x002FE110   size: 0x24 (36 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientActor::playSound(ClientActor *this, const char *a2, float a3, float a4)
{
  if ( *a2 != 0 )
    EffectManager::playSoundAtActor((EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton, this, a2, a3, a4);
}


//======================================================================
// ClientActor::fall(float)
// address: 0x002FE138   size: 0x78 (120 bytes)
//======================================================================
int __fastcall ClientActor::fall(ClientActor *this, float a2)
{
  float v3; // r6
  int result; // r0
  const char *v5; // r1

  v3 = a2 / 100.0;
  result = (int)j_ceil((float)((float)(a2 / 100.0) - 3.0));
  if ( result > 0 )
  {
    if ( result <= 4 )
      v5 = "damage.fallsmall";
    else
      v5 = "damage.fallbig";
    ClientActor::playSound(this, v5, 1.0, 1.0);
    ClientActor::attackedFromType((int *)this, 7, COERCE_INT((float)result));
    j_floor((float)(v3 / 100.0));
    return ClientActor::sendEvent((int)this);
  }
  return result;
}


//======================================================================
// ClientActor::playParticles(char const*)
// address: 0x002FE1C0   size: 0x6E (110 bytes)
//======================================================================
int __fastcall ClientActor::playParticles(ClientActor *this, const char *a2)
{
  _DWORD *v3; // r3
  int v4; // r2
  int v5; // r3
  EffectParticle *v6; // r5
  _DWORD v8[3]; // [sp+10h] [bp-114h] BYREF
  char s[256]; // [sp+1Ch] [bp-108h] BYREF

  j_sprintf(s, "particles/%s", a2);
  v3 = *((_DWORD **)this + 17);
  v8[0] = v3[8];
  v4 = v3[9];
  v5 = v3[10];
  v8[1] = v4;
  v8[2] = v5;
  v6 = (EffectParticle *)operator new(0x14u);
  EffectParticle::EffectParticle(v6, *((World **)this + 13), (Ogre::FixedString *)s, (const WCoord *)v8, 100);
  return EffectManager::addEffect((EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton, v6);
}


//======================================================================
// ClientActor::setAIMoveSpeed(float)
// address: 0x002FE23C   size: 0x6 (6 bytes)
//======================================================================
float *__fastcall ClientActor::setAIMoveSpeed(ClientActor *this, float a2)
{
  float *result; // r0

  result = (float *)((char *)this + 8);
  result[31] = a2;
  return result;
}


//======================================================================
// ClientActor::getAIMoveSpeed(void)
// address: 0x002FE242   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientActor::getAIMoveSpeed(ClientActor *this)
{
  return *((_DWORD *)this + 33);
}


//======================================================================
// ClientActor::getDistanceSq(double,double,double)
// address: 0x002FE248   size: 0x86 (134 bytes)
//======================================================================
double __fastcall ClientActor::getDistanceSq(ClientActor *this, double a2, double a3, double a4)
{
  int *v5; // r6

  v5 = *((int **)this + 17);
  return ((double)v5[8] - a2) * ((double)v5[8] - a2)
       + ((double)v5[9] - a3) * ((double)v5[9] - a3)
       + ((double)v5[10] - a4) * ((double)v5[10] - a4);
}


//======================================================================
// ClientActor::getDistanceSqToEntity(ClientActor*)
// address: 0x002FE2D0   size: 0x86 (134 bytes)
//======================================================================
double __fastcall ClientActor::getDistanceSqToEntity(ClientActor *this, ClientActor *a2)
{
  _DWORD *v2; // r7
  _DWORD *v3; // r6
  double v4; // r4
  double v5; // r6
  double v7; // [sp+0h] [bp-Ch]

  if ( *((unsigned __int16 *)this + 28) != *((unsigned __int16 *)a2 + 28) )
    return 1.0e10;
  v2 = *((_DWORD **)this + 17);
  v3 = *((_DWORD **)a2 + 17);
  v4 = (double)(v2[8] - v3[8]);
  v7 = (double)(v2[9] - v3[9]);
  v5 = (double)(v2[10] - v3[10]);
  return v4 * v4 + v7 * v7 + v5 * v5;
}


//======================================================================
// ClientActor::followOwnerAttack(ClientActor*,ClientActor*)
// address: 0x002FE360   size: 0x56 (86 bytes)
//======================================================================
int __fastcall ClientActor::followOwnerAttack(ClientActor *this, ClientActor *a2, ClientActor *a3)
{
  int result; // r0
  int v6; // r3
  ClientActor *v7; // r0

  if ( a2 != nullptr && a3 != nullptr )
  {
    v6 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 24))(a2);
    result = 1;
    if ( v6 != 0 )
      return result;
    v7 = (ClientActor *)_dynamic_cast(
                          a2,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ClientMob,
                          0);
    if ( (unsigned int)(**((_DWORD **)v7 + 48) - 3109) > 2
      && (*((_DWORD *)v7 + 31) == 0 || ClientActor::getTamedOwner(v7) != a3) )
    {
      return 1;
    }
  }
  return 0;
}


//======================================================================
// ClientActor::setFire(int)
// address: 0x002FE3C4   size: 0xE (14 bytes)
//======================================================================
int __fastcall ClientActor::setFire(ClientActor *this, int a2)
{
  int result; // r0

  result = *((_DWORD *)this + 19);
  if ( result != 0 )
    return ActorAttrib::setFireSeconds(result, a2);
  return result;
}


//======================================================================
// ClientActor::dropItem(int,int)
// address: 0x002FE3D2   size: 0x76 (118 bytes)
//======================================================================
ClientItem *__fastcall ClientActor::dropItem(ClientItem *this, int a2, int a3)
{
  ClientItem *v3; // r6
  _DWORD *v5; // r3
  int v6; // r2
  int v7; // r1
  int v8; // r3
  unsigned int v9; // r7
  unsigned int v10; // r7
  unsigned int v11; // r0
  int v12; // r3
  _DWORD v14[2]; // [sp+1Ch] [bp-10h] BYREF
  int v15; // [sp+24h] [bp-8h]

  v3 = this;
  if ( a2 != 0 )
  {
    v5 = *((_DWORD **)this + 17);
    v6 = v5[9];
    v14[0] = v5[8];
    v7 = v5[10];
    v8 = v5[6];
    v15 = v7;
    v14[1] = v6 + v8 / 2;
    v9 = GenRandomInt(0x96u);
    v14[0] += v9 - GenRandomInt(0x96u);
    v10 = GenRandomInt(0x96u);
    v11 = GenRandomInt(0x96u);
    v12 = *((_DWORD *)v3 + 13);
    v15 += v10 - v11;
    return ClientActorMgr::spawnItem(*(ClientActorMgr **)(v12 + 132), (const WCoord *)v14, a2, a3, -1, true, 0, nullptr);
  }
  return this;
}


//======================================================================
// ClientActor::dropItem(BackPackGrid *)
// address: 0x002FE448   size: 0x8E (142 bytes)
//======================================================================
_DWORD *__fastcall ClientActor::dropItem(_DWORD *this, BackPackGrid *a2)
{
  _DWORD *v3; // r6
  _DWORD *v4; // r3
  int v5; // r2
  int v6; // r1
  int v7; // r3
  unsigned int v8; // r7
  unsigned int v9; // r7
  unsigned int v10; // r0
  int v11; // r1
  int v12; // r3
  ClientItem *v13; // r0
  _DWORD v14[2]; // [sp+14h] [bp-10h] BYREF
  int v15; // [sp+1Ch] [bp-8h]

  v3 = this;
  if ( *((_DWORD *)a2 + 1) != 0 && *((_DWORD *)a2 + 2) != 0 )
  {
    v4 = (_DWORD *)*(this + 17);
    v5 = v4[9];
    v14[0] = v4[8];
    v6 = v4[10];
    v7 = v4[6];
    v15 = v6;
    v14[1] = v5 + v7 / 2;
    v8 = GenRandomInt(0x96u);
    v14[0] += v8 - GenRandomInt(0x96u);
    v9 = GenRandomInt(0x96u);
    v10 = GenRandomInt(0x96u);
    v11 = *((_DWORD *)a2 + 7);
    v12 = v3[13];
    v15 += v9 - v10;
    v13 = ClientActorMgr::spawnItem(
            *(ClientActorMgr **)(v12 + 132),
            (const WCoord *)v14,
            **((_DWORD **)a2 + 1),
            *((_DWORD *)a2 + 2),
            -1,
            true,
            v11,
            (int *)a2 + 8);
    return j_memcpy((char *)v13 + 172, a2, 0x34u);
  }
  return this;
}


//======================================================================
// ClientActor::loadActorCommon(FBSave::ActorCommon const*)
// address: 0x002FE4D6   size: 0xD0 (208 bytes)
//======================================================================
int __fastcall ClientActor::loadActorCommon(_DWORD *a1, flatbuffers::Table *this)
{
  int OptionalFieldOffset; // r0
  int v5; // r2
  int v6; // r3
  int *v7; // r0
  _DWORD *v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r7
  int v12; // r0
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r3
  _DWORD *v17; // r6
  int *v18; // r0
  int v19; // r3
  int v20; // r2
  int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r0
  int v25; // r3
  int v27; // [sp+0h] [bp-1Ch]
  void (__fastcall *v28)(int, _DWORD *, int, int); // [sp+4h] [bp-18h]
  _DWORD v29[4]; // [sp+Ch] [bp-10h] BYREF

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(this, 4u);
  v5 = 0;
  v6 = 0;
  if ( OptionalFieldOffset != 0 )
  {
    v7 = (int *)((char *)this + OptionalFieldOffset);
    v5 = *v7;
    v6 = v7[1];
  }
  a1[10] = v5;
  a1[11] = v6;
  v8 = (_DWORD *)flatbuffers::Table::GetOptionalFieldOffset(this, 6u);
  if ( v8 != nullptr )
    v8 = (_DWORD *)((char *)v8 + (_DWORD)this);
  v9 = v8[2];
  v10 = v8[1];
  v11 = a1[17];
  v29[0] = *v8;
  v29[1] = v10;
  v29[2] = v9;
  v28 = *(void (__fastcall **)(int, _DWORD *, int, int))(*(_DWORD *)v11 + 16);
  v12 = flatbuffers::Table::GetOptionalFieldOffset(this, 0xAu);
  if ( v12 != 0 )
    v27 = *(_DWORD *)((char *)this + v12);
  else
    v27 = 0;
  v13 = flatbuffers::Table::GetOptionalFieldOffset(this, 0xCu);
  v14 = 0;
  if ( v13 != 0 )
    v14 = *(_DWORD *)((char *)this + v13);
  v28(v11, v29, v27, v14);
  v15 = flatbuffers::Table::GetOptionalFieldOffset(this, 0xEu);
  v16 = 0;
  if ( v15 != 0 )
    v16 = *(_DWORD *)((char *)this + v15);
  *(_DWORD *)(a1[17] + 120) = v16;
  v17 = (_DWORD *)a1[17];
  v18 = (int *)flatbuffers::Table::GetOptionalFieldOffset(this, 8u);
  if ( v18 != nullptr )
    v18 = (int *)((char *)v18 + (_DWORD)this);
  v19 = v18[1];
  v20 = *v18;
  v21 = v18[2];
  v17[19] = v19;
  v17[20] = v21;
  v17[18] = v20;
  v22 = flatbuffers::Table::GetOptionalFieldOffset(this, 0x10u);
  v23 = 0;
  if ( v22 != 0 )
    v23 = *(_DWORD *)((char *)this + v22);
  a1[15] = v23;
  v24 = flatbuffers::Table::GetOptionalFieldOffset(this, 0x12u);
  v25 = 0;
  if ( v24 != 0 )
    v25 = *(_DWORD *)((char *)this + v24);
  a1[1] = v25;
  return 1;
}


//======================================================================
// ClientActor::saveActorCommon(flatbuffers::FlatBufferBuilder &)
// address: 0x002FE68A   size: 0x48 (72 bytes)
//======================================================================
int __fastcall ClientActor::saveActorCommon(ClientActor *this, flatbuffers::FlatBufferBuilder *a2)
{
  int *v2; // r4
  int v3; // r5
  int v4; // r3
  int v5; // r5
  int v6; // r3
  unsigned __int8 v8[4]; // [sp+20h] [bp-18h] BYREF
  int v9; // [sp+24h] [bp-14h]
  int v10; // [sp+28h] [bp-10h]
  unsigned __int8 v11[4]; // [sp+2Ch] [bp-Ch] BYREF
  int v12; // [sp+30h] [bp-8h]
  int v13; // [sp+34h] [bp-4h]

  v2 = *((int **)this + 17);
  v3 = v2[9];
  *(_DWORD *)v8 = v2[8];
  v4 = v2[10];
  v9 = v3;
  v5 = v2[18];
  v10 = v4;
  v6 = v2[19];
  *(_DWORD *)v11 = v5;
  v12 = v6;
  v13 = v2[20];
  return FBSave::CreateActorCommon(
           (unsigned int)a2,
           *((_QWORD *)this + 5),
           v8,
           v11,
           v2[1],
           v2[2],
           v2[30],
           *((_DWORD *)this + 15),
           *((_DWORD *)this + 1));
}

