// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientActorThrowable

//======================================================================
// ClientActorThrowable::getMasterActor(void)
// address: 0x002BF138   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientActorThrowable::getMasterActor(ClientActorThrowable *this)
{
  return *((_DWORD *)this + 47);
}


//======================================================================
// ClientActorThrowable::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002BF13E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActorThrowable::save(ClientActorThrowable *this, flatbuffers::FlatBufferBuilder *a2)
{
  return 0;
}


//======================================================================
// ClientActorThrowable::load(void const*)
// address: 0x002BF142   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActorThrowable::load(ClientActorThrowable *this, const void *a2)
{
  return 0;
}


//======================================================================
// ClientActorThrowable::getObjType(void)
// address: 0x002BF146   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActorThrowable::getObjType(ClientActorThrowable *this)
{
  return 2;
}


//======================================================================
// ClientActorThrowable::onCollideWithPlayer(ClientPlayer *)
// address: 0x002BF14A   size: 0x2 (2 bytes)
//======================================================================
void ClientActorThrowable::onCollideWithPlayer()
{
  ;
}


//======================================================================
// ClientActorThrowable::~ClientActorThrowable()
// address: 0x002BF17C   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN20ClientActorThrowableD1Ev'
void __fastcall ClientActorThrowable::~ClientActorThrowable(ClientActorThrowable *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  int v4; // r3
  ClientActor *v5; // r0

  v1 = (_DWORD *)((char *)this + 184);
  *(_DWORD *)this = &off_45F100;
  v3 = *((_DWORD **)this + 46);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *v1 = 0;
  }
  v5 = *((ClientActor **)this + 47);
  if ( v5 != nullptr )
    ClientActor::release(v5);
  ClientActor::~ClientActor(this);
}


//======================================================================
// ClientActorThrowable::~ClientActorThrowable()
// address: 0x002BF1C4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientActorThrowable::~ClientActorThrowable(ClientActorThrowable *this)
{
  ClientActorThrowable::~ClientActorThrowable(this);
  operator delete(this);
}


//======================================================================
// ClientActorThrowable::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002BF1D6   size: 0x20 (32 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientActorThrowable::onCull(
        ClientActorThrowable *this,
        Ogre::GameScene **a2,
        Ogre::CullFrustum *a3)
{
  Ogre::MovableObject **v3; // r2

  v3 = *((Ogre::MovableObject ***)this + 46);
  if ( v3 != nullptr )
    Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], v3, 2, nullptr);
}


//======================================================================
// ClientActorThrowable::ClientActorThrowable(int)
// address: 0x002BF3B8   size: 0x72 (114 bytes)
//======================================================================
// Alternative name is '_ZN20ClientActorThrowableC1Ei'
void __fastcall ClientActorThrowable::ClientActorThrowable(ClientActorThrowable *this, ClientItem *a2)
{
  int v4; // r5
  ThrowableLocoMotion *v5; // r5

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_45F100;
  *((_DWORD *)this + 48) = a2;
  *((_DWORD *)this + 46) = ClientItem::createItemModel(
                             a2,
                             0,
                             (const char *)0x3F800000,
                             COERCE_FLOAT((ClientActorThrowable *)((char *)this + 192)));
  *((_BYTE *)this + 170) = 0;
  *((_DWORD *)this + 47) = 0;
  *((_DWORD *)this + 43) = 1065353216;
  *((_DWORD *)this + 44) = 0x40000000;
  *((_DWORD *)this + 45) = 0;
  v4 = operator new(0x20u);
  ActorAttrib::ActorAttrib(v4, (int)this);
  *((_DWORD *)this + 19) = v4;
  v5 = (ThrowableLocoMotion *)operator new(0xB8u);
  ThrowableLocoMotion::ThrowableLocoMotion(v5, this);
  *((_DWORD *)this + 17) = v5;
  *((_DWORD *)v5 + 6) = 50;
  *((_DWORD *)v5 + 5) = 50;
}


//======================================================================
// ClientActorThrowable::setShootingActor(ClientActor *)
// address: 0x002BF444   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ClientActorThrowable::setShootingActor(ClientActorThrowable *this, ClientActor *a2)
{
  _DWORD *v3; // r5
  int result; // r0

  v3 = (_DWORD *)((char *)this + 188);
  result = ClientActor::addRef(a2);
  *v3 = a2;
  return result;
}


//======================================================================
// ClientActorThrowable::throwItem(World *,ClientActor *,int)
// address: 0x002BF458   size: 0x138 (312 bytes)
//======================================================================
ClientActorThrowable *__fastcall ClientActorThrowable::throwItem(
        ClientActorMgr **this,
        World *a2,
        ClientActor *a3,
        int a4)
{
  ClientActorThrowable *v5; // r6
  int v6; // r3
  double v7; // r4
  __int64 v8; // r0
  float v9; // r0
  float v10; // r0
  float v12; // [sp+Ch] [bp-48h]
  double v13; // [sp+10h] [bp-44h]
  float v15; // [sp+1Ch] [bp-38h]
  double v16; // [sp+20h] [bp-34h]
  int v18; // [sp+38h] [bp-1Ch] BYREF
  int v19; // [sp+3Ch] [bp-18h]
  int v20; // [sp+40h] [bp-14h]
  float v21[4]; // [sp+44h] [bp-10h] BYREF

  v5 = (ClientActorThrowable *)operator new(0xC8u);
  ClientActorThrowable::ClientActorThrowable(v5, a3);
  v6 = *((_DWORD *)a2 + 17);
  v12 = *(float *)(v6 + 4);
  v15 = *(float *)(v6 + 8);
  ClientActor::getEyePosition((ClientActor *)&v18);
  v7 = (float)(v12 * 0.017453);
  v16 = j_cos(v7);
  v13 = j_sin(v7);
  *((float *)&v8 + 1) = v12;
  LODWORD(v8) = v21;
  PitchYaw2Direction(v8, v15);
  v9 = v13;
  LODWORD(v13) = (int)(float)((float)v20 + (float)(v9 * 16.0));
  v10 = v16;
  v18 = (int)(float)((float)v18 + (float)(COERCE_FLOAT(LODWORD(v10) + 0x80000000) * 16.0)) + (int)(float)(v21[0] * 16.0);
  v19 = (int)(float)((float)v19 - 10.0) + (int)(float)(v21[1] * 16.0);
  v20 = LODWORD(v13) + (int)(float)(v21[2] * 16.0);
  ClientActorMgr::spawnActor(*(this + 33), v5, (const WCoord *)&v18, v12, v15, true);
  ClientActorThrowable::setShootingActor(v5, a2);
  (*(void (__fastcall **)(_DWORD *, float *, int, int))(**((_DWORD **)v5 + 17) + 40))(
    *((_DWORD **)v5 + 17),
    v21,
    1125515264,
    1065353216);
  return v5;
}


//======================================================================
// ClientActorThrowable::onImpact(ClientActor *,WCoord const*)
// address: 0x002BF5A8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall ClientActorThrowable::onImpact(ClientActorThrowable *this, ClientActor *a2, const WCoord *a3)
{
  ClientActorThrowable *v5; // r5
  int v6; // r7
  _DWORD *v7; // r3
  int v8; // r5
  _DWORD v10[8]; // [sp+Ch] [bp-20h] BYREF

  if ( a2 != nullptr )
  {
    v5 = *((ClientActorThrowable **)this + 47);
    if ( v5 == nullptr )
      v5 = this;
    j_memset(v10, 0, 0x1Cu);
    v10[0] = 1;
    (*(void (__fastcall **)(ClientActor *, _DWORD *, ClientActorThrowable *))(*(_DWORD *)a2 + 68))(a2, v10, v5);
  }
  if ( *((_DWORD *)this + 48) == 2052 && GenRandomInt(0, 7) == 0 )
  {
    v6 = 4;
    if ( GenRandomInt(0, 31) != 0 )
      v6 = 1;
    v7 = *((_DWORD **)this + 17);
    v8 = 0;
    v10[0] = v7[8];
    v10[1] = v7[9];
    v10[2] = v7[10];
    do
    {
      ++v8;
      ClientActorMgr::spawnMonster(
        *(ClientActorMgr **)(*((_DWORD *)this + 13) + 132),
        (const WCoord *)v10,
        (ClientMob *)&stru_ED8.st_other,
        true,
        false);
    }
    while ( v8 < v6 );
  }
  return ClientActor::setNeedClear(this, 0);
}


//======================================================================
// ClientActorThrowable::update(float)
// address: 0x002BF80C   size: 0xDC (220 bytes)
//======================================================================
int __fastcall ClientActorThrowable::update(ClientActorThrowable *this, float a2)
{
  int v3; // r4
  _DWORD *v4; // r5
  int v5; // r7
  int v6; // r4
  float v8; // [sp+4h] [bp-18h]
  int v9; // [sp+14h] [bp-8h]

  ClientActor::update(this, a2);
  v3 = *((_DWORD *)this + 17);
  v4 = *((_DWORD **)this + 46);
  v8 = *(float *)(v3 + 68) / 0.05;
  v9 = (int)(float)((float)((float)*(int *)(v3 + 60)
                          + (float)((float)((float)*(int *)(v3 + 36) - (float)*(int *)(v3 + 60)) * v8))
                  * 10.0);
  v5 = (int)(float)((float)((float)*(int *)(v3 + 64)
                          + (float)((float)((float)*(int *)(v3 + 40) - (float)*(int *)(v3 + 64)) * v8))
                  * 10.0);
  v4[2] = (int)(float)((float)((float)*(int *)(v3 + 56)
                             + (float)((float)((float)*(int *)(v3 + 32) - (float)*(int *)(v3 + 56)) * v8))
                     * 10.0);
  v4[4] = v5;
  v4[3] = v9;
  (*(void (__fastcall **)(_DWORD *))(*v4 + 64))(v4);
  v6 = *((_DWORD *)this + 46);
  Ogre::Quaternion::setEulerAngle(
    (Ogre::Quaternion *)(v6 + 20),
    *(float *)(*((_DWORD *)this + 17) + 4),
    COERCE_FLOAT(*(_DWORD *)(*((_DWORD *)this + 17) + 8) + 0x80000000),
    0.0);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 64))(v6);
}

