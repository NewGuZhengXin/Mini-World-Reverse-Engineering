// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ThrowableLocoMotion

//======================================================================
// ThrowableLocoMotion::~ThrowableLocoMotion()
// address: 0x002BF14C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN19ThrowableLocoMotionD1Ev'
void __fastcall ThrowableLocoMotion::~ThrowableLocoMotion(ThrowableLocoMotion *this)
{
  *(_DWORD *)this = &off_45F1B8;
  ActorLocoMotion::~ActorLocoMotion(this);
}


//======================================================================
// ThrowableLocoMotion::~ThrowableLocoMotion()
// address: 0x002BF168   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ThrowableLocoMotion::~ThrowableLocoMotion(ThrowableLocoMotion *this)
{
  ThrowableLocoMotion::~ThrowableLocoMotion(this);
  operator delete(this);
}


//======================================================================
// ThrowableLocoMotion::setThrowableHeading(Ogre::Vector3 const&,float,float)
// address: 0x002BF1F8   size: 0xD2 (210 bytes)
//======================================================================
__int64 __fastcall ThrowableLocoMotion::setThrowableHeading(
        ThrowableLocoMotion *this,
        const Ogre::Vector3 *a2,
        float a3,
        float a4)
{
  float v7; // r7
  float v8; // r5
  float v9; // r7
  __int64 v10; // r0
  __int64 result; // r0
  float v12; // [sp+4h] [bp-10h]
  float v13; // [sp+4h] [bp-10h]
  float v14; // [sp+8h] [bp-Ch]
  float v15; // [sp+8h] [bp-Ch]

  v7 = Ogre::Vector3::length(a2);
  if ( v7 <= 0.00001 )
  {
    v8 = 0.0;
    v12 = 0.0;
    v14 = 0.0;
  }
  else
  {
    v14 = (float)(1.0 / v7) * *(float *)a2;
    v12 = (float)(1.0 / v7) * *((float *)a2 + 1);
    v8 = (float)(1.0 / v7) * *((float *)a2 + 2);
  }
  v9 = v14 + (float)((float)(COERCE_FLOAT(GenGaussian()) * 0.0075) * a4);
  v15 = v12 + (float)((float)(COERCE_FLOAT(GenGaussian()) * 0.0075) * a4);
  v13 = COERCE_FLOAT(GenGaussian());
  *((float *)this + 18) = v9 * a3;
  *((float *)this + 19) = v15 * a3;
  *((float *)this + 20) = (float)(v8 + (float)((float)(v13 * 0.0075) * a4)) * a3;
  HIDWORD(v10) = (char *)this + 8;
  LODWORD(v10) = (char *)this + 4;
  result = Direction2PitchYaw(v10, (ThrowableLocoMotion *)((char *)this + 72));
  *((_DWORD *)this + 39) = 0;
  return result;
}


//======================================================================
// ThrowableLocoMotion::ThrowableLocoMotion(ClientActorThrowable *)
// address: 0x002BF2D4   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN19ThrowableLocoMotionC1EP20ClientActorThrowable'
void __fastcall ThrowableLocoMotion::ThrowableLocoMotion(ThrowableLocoMotion *this, ClientActorThrowable *a2)
{
  ActorLocoMotion::ActorLocoMotion(this, a2);
  *(_DWORD *)this = &off_45F1B8;
  *((_BYTE *)this + 148) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = -1;
  *((_DWORD *)this + 41) = -1;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 1077936128;
}


//======================================================================
// ThrowableLocoMotion::tickInGround(void)
// address: 0x002BF31C   size: 0x94 (148 bytes)
//======================================================================
float __fastcall ThrowableLocoMotion::tickInGround(World **this)
{
  const WCoord *v1; // r5
  World *BlockID; // r7
  float result; // r0
  int *v5; // r6
  int v6; // r3

  v1 = (const WCoord *)(this + 42);
  BlockID = (World *)World::getBlockID(*(this + 27), (const WCoord *)(this + 42));
  result = COERCE_FLOAT(World::getBlockData(*(this + 27), v1));
  v5 = (int *)(this + 39);
  if ( *(this + 40) == BlockID && *(this + 41) == (World *)LODWORD(result) )
  {
    v6 = *v5 + 1;
    *v5 = v6;
    if ( v6 > 1199 )
      return COERCE_FLOAT(ClientActor::setNeedClear(*(this + 28), 0));
  }
  else
  {
    *((_BYTE *)this + 148) = 0;
    *((float *)this + 18) = *((float *)this + 18) * (float)(GenRandomFloat() * 0.2);
    *((float *)this + 19) = *((float *)this + 19) * (float)(GenRandomFloat() * 0.2);
    result = *((float *)this + 20) * (float)(GenRandomFloat() * 0.2);
    *((float *)this + 20) = result;
    *v5 = 0;
    *(this + 38) = nullptr;
  }
  return result;
}


//======================================================================
// ThrowableLocoMotion::tickInAir(void)
// address: 0x002BF644   size: 0x19A (410 bytes)
//======================================================================
void __fastcall ThrowableLocoMotion::tickInAir(ThrowableLocoMotion *this)
{
  int v2; // r6
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r2
  int v7; // r0
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r2
  int v12; // r3
  ClientActorThrowable *v13; // r0
  ClientActor *v14; // r1
  const WCoord *v15; // r2
  int v16; // r1
  int v17; // r0
  __int64 v18; // r0
  float v19; // r6
  float v20; // r1
  int v21; // [sp+Ch] [bp-90h]
  int v22; // [sp+10h] [bp-8Ch]
  Ogre::Vector3 *v23; // [sp+14h] [bp-88h]
  int v24; // [sp+18h] [bp-84h] BYREF
  int v25; // [sp+1Ch] [bp-80h]
  int v26; // [sp+20h] [bp-7Ch]
  _DWORD v27[3]; // [sp+24h] [bp-78h] BYREF
  _DWORD v28[3]; // [sp+30h] [bp-6Ch] BYREF
  float v29; // [sp+3Ch] [bp-60h] BYREF
  float v30; // [sp+40h] [bp-5Ch]
  float v31; // [sp+44h] [bp-58h]
  float v32; // [sp+48h] [bp-54h]
  _DWORD v33[16]; // [sp+4Ch] [bp-50h] BYREF
  void *v34; // [sp+8Ch] [bp-10h]
  int v35; // [sp+90h] [bp-Ch]
  int v36; // [sp+94h] [bp-8h]

  v23 = (ThrowableLocoMotion *)((char *)this + 72);
  ++*((_DWORD *)this + 38);
  ActorLocoMotion::getIntegerMotion((ActorLocoMotion *)&v24, this);
  v2 = v24;
  v22 = v25;
  v21 = v26;
  if ( v24 != 0 || v25 != 0 || v26 != 0 )
  {
    v3 = *((_DWORD *)this + 9);
    v32 = 3.4028e38;
    v4 = 10 * v3;
    v5 = *((_DWORD *)this + 10);
    v28[1] = v4;
    v6 = 10 * v5;
    v7 = *((_DWORD *)this + 8);
    v28[2] = v6;
    v28[0] = 10 * v7;
    v29 = (float)v24;
    v30 = (float)v25;
    v31 = (float)v26;
    v32 = Ogre::Vector3::length((Ogre::Vector3 *)&v29);
    v29 = v29 / v32;
    v30 = v30 / v32;
    v31 = v31 / v32;
    j_memset(v27, 0, sizeof(v27));
    v8 = *((_DWORD *)this + 28);
    v9 = *((_DWORD *)this + 38);
    v27[0] = v8;
    if ( v9 <= 5 )
      v27[1] = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 72))(v8);
    v34 = nullptr;
    v35 = 0;
    v36 = 0;
    v10 = World::pickAll(*((_DWORD *)this + 27), v28, v33, v27, 0);
    if ( v10 == 1 )
    {
      *((_BYTE *)this + 148) = 1;
      v11 = v33[2];
      v12 = v33[3];
      *((_DWORD *)this + 42) = v33[1];
      *((_DWORD *)this + 43) = v11;
      *((_DWORD *)this + 44) = v12;
      *((_DWORD *)this + 40) = World::getBlockID(*((World **)this + 27), (ThrowableLocoMotion *)((char *)this + 168));
      *((_DWORD *)this + 41) = World::getBlockData(*((World **)this + 27), (ThrowableLocoMotion *)((char *)this + 168));
      v13 = *((ClientActorThrowable **)this + 28);
      v14 = nullptr;
      v15 = (ThrowableLocoMotion *)((char *)this + 168);
    }
    else
    {
      if ( v10 != 2 )
      {
LABEL_9:
        v16 = *((_DWORD *)this + 9);
        *((_DWORD *)this + 8) += v2;
        v17 = *((_DWORD *)this + 10);
        *((_DWORD *)this + 9) = v16 + v22;
        *((_DWORD *)this + 10) = v17 + v21;
        LODWORD(v18) = (char *)this + 4;
        HIDWORD(v18) = (char *)this + 8;
        Direction2PitchYaw(v18, v23);
        if ( *((_BYTE *)this + 125) != 0 )
          v19 = 0.8;
        else
          v19 = 0.99;
        v20 = *((float *)this + 19);
        *((float *)this + 18) = *((float *)this + 18) * v19;
        *((float *)this + 19) = v19 * v20;
        *((float *)this + 20) = *((float *)this + 20) * v19;
        *((float *)this + 19) = (float)(v19 * v20) - *((float *)this + 45);
        if ( v34 != nullptr )
          operator delete(v34);
        return;
      }
      v13 = *((ClientActorThrowable **)this + 28);
      v14 = (ClientActor *)v33[5];
      v15 = nullptr;
    }
    ClientActorThrowable::onImpact(v13, v14, v15);
    goto LABEL_9;
  }
}


//======================================================================
// ThrowableLocoMotion::tick(void)
// address: 0x002BF7EC   size: 0x20 (32 bytes)
//======================================================================
void __fastcall ThrowableLocoMotion::tick(ThrowableLocoMotion *this)
{
  ActorLocoMotion::tick(this);
  if ( *((_BYTE *)this + 148) != 0 )
    ThrowableLocoMotion::tickInGround((World **)this);
  else
    ThrowableLocoMotion::tickInAir(this);
}

