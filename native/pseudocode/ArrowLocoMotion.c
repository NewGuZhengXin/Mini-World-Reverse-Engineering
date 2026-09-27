// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ArrowLocoMotion

//======================================================================
// ArrowLocoMotion::~ArrowLocoMotion()
// address: 0x002A2238   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15ArrowLocoMotionD1Ev'
void __fastcall ArrowLocoMotion::~ArrowLocoMotion(ArrowLocoMotion *this)
{
  *(_DWORD *)this = &off_45CC18;
  ActorLocoMotion::~ActorLocoMotion(this);
}


//======================================================================
// ArrowLocoMotion::~ArrowLocoMotion()
// address: 0x002A2254   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ArrowLocoMotion::~ArrowLocoMotion(ArrowLocoMotion *this)
{
  ArrowLocoMotion::~ArrowLocoMotion(this);
  operator delete(this);
}


//======================================================================
// ArrowLocoMotion::setThrowableHeading(Ogre::Vector3 const&,float,float)
// address: 0x002A24A4   size: 0xD2 (210 bytes)
//======================================================================
__int64 __fastcall ArrowLocoMotion::setThrowableHeading(
        ArrowLocoMotion *this,
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
  result = Direction2PitchYaw(v10, (ArrowLocoMotion *)((char *)this + 72));
  *((_DWORD *)this + 39) = 0;
  return result;
}


//======================================================================
// ArrowLocoMotion::ArrowLocoMotion(ClientActorArrow *)
// address: 0x002A2580   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN15ArrowLocoMotionC1EP16ClientActorArrow'
void __fastcall ArrowLocoMotion::ArrowLocoMotion(ArrowLocoMotion *this, ClientActorArrow *a2)
{
  ActorLocoMotion::ActorLocoMotion(this, a2);
  *(_DWORD *)this = &off_45CC18;
  *((_BYTE *)this + 148) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_DWORD *)this + 39) = 0;
  *((_DWORD *)this + 40) = -1;
  *((_DWORD *)this + 41) = -1;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 45) = 0;
}


//======================================================================
// ArrowLocoMotion::tickInGround(void)
// address: 0x002A25C0   size: 0x94 (148 bytes)
//======================================================================
float __fastcall ArrowLocoMotion::tickInGround(World **this)
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
// ArrowLocoMotion::tickInAir(void)
// address: 0x002A2C70   size: 0x2C8 (712 bytes)
//======================================================================
void __fastcall ArrowLocoMotion::tickInAir(ArrowLocoMotion *this)
{
  int v2; // r6
  float v3; // r1
  int v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r0
  int v9; // r0
  int v10; // r3
  int v11; // r0
  ActorLocoMotion **v12; // r1
  ActorLocoMotion **v13; // r2
  ActorLocoMotion **v14; // r5
  int BlockData; // r0
  int v16; // r1
  int v17; // r2
  float v18; // r0
  float v19; // r0
  float v20; // r0
  int Material; // r0
  float v22; // r0
  int v23; // r3
  int v24; // r2
  int v25; // r1
  __int64 v26; // r0
  float v27; // r1
  int v28; // [sp+Ch] [bp-98h]
  int v29; // [sp+14h] [bp-90h]
  float v30; // [sp+18h] [bp-8Ch]
  Ogre::Vector3 *v31; // [sp+1Ch] [bp-88h]
  int v32; // [sp+20h] [bp-84h] BYREF
  int v33; // [sp+24h] [bp-80h]
  int v34; // [sp+28h] [bp-7Ch]
  _DWORD v35[3]; // [sp+2Ch] [bp-78h] BYREF
  int v36; // [sp+38h] [bp-6Ch] BYREF
  int v37; // [sp+3Ch] [bp-68h]
  int v38; // [sp+40h] [bp-64h]
  float v39; // [sp+44h] [bp-60h] BYREF
  float v40; // [sp+48h] [bp-5Ch]
  float v41; // [sp+4Ch] [bp-58h]
  float v42; // [sp+50h] [bp-54h]
  ActorLocoMotion **v43[6]; // [sp+54h] [bp-50h] BYREF
  float v44; // [sp+6Ch] [bp-38h]
  void *v45; // [sp+94h] [bp-10h]
  int v46; // [sp+98h] [bp-Ch]
  int v47; // [sp+9Ch] [bp-8h]

  if ( *((_BYTE *)this + 125) != 0 )
    v30 = 0.8;
  else
    v30 = 0.99;
  ++*((_DWORD *)this + 38);
  v31 = (ArrowLocoMotion *)((char *)this + 72);
  ActorLocoMotion::getIntegerMotion((ActorLocoMotion *)&v32, this);
  v2 = v34;
  v28 = v32;
  v29 = v33;
  if ( v32 == 0 && v33 == 0 && v34 == 0 )
  {
    v3 = *((float *)this + 19);
    *((float *)this + 18) = *((float *)this + 18) * v30;
    *((float *)this + 19) = v30 * v3;
    *((float *)this + 20) = *((float *)this + 20) * v30;
    *((float *)this + 19) = (float)(v30 * v3) - 5.0;
    return;
  }
  v4 = *((_DWORD *)this + 9);
  v5 = *((_DWORD *)this + 10);
  v42 = 3.4028e38;
  v6 = 10 * v4;
  v7 = 10 * v5;
  v8 = *((_DWORD *)this + 8);
  v38 = v7;
  v37 = v6;
  v36 = 10 * v8;
  v39 = (float)v32;
  v40 = (float)v33;
  v41 = (float)v34;
  v42 = Ogre::Vector3::length((Ogre::Vector3 *)&v39);
  v39 = v39 / v42;
  v40 = v40 / v42;
  v41 = v41 / v42;
  j_memset(v35, 0, sizeof(v35));
  v9 = *((_DWORD *)this + 28);
  v10 = *((_DWORD *)this + 38);
  v35[0] = v9;
  if ( v10 <= 5 )
    v35[1] = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 72))(v9);
  v45 = nullptr;
  v46 = 0;
  v47 = 0;
  v11 = World::pickAll(*((_DWORD *)this + 27), &v36, v43, v35, 1);
  if ( v11 == 1 )
  {
    v12 = v43[1];
    v13 = v43[2];
    v14 = v43[3];
    *((_BYTE *)this + 148) = 1;
    *((_DWORD *)this + 42) = v12;
    *((_DWORD *)this + 43) = v13;
    *((_DWORD *)this + 44) = v14;
    *((_DWORD *)this + 40) = World::getBlockID(*((World **)this + 27), (ArrowLocoMotion *)((char *)this + 168));
    BlockData = World::getBlockData(*((World **)this + 27), (ArrowLocoMotion *)((char *)this + 168));
    *((_DWORD *)this + 45) = 7;
    v16 = v36;
    v17 = Ogre::WorldPos::m_Origin;
    *((_DWORD *)this + 41) = BlockData;
    v18 = (double)(v16 - v17) / 10.0;
    v28 = (int)(float)(v18 + (float)(v44 * v39)) - *((_DWORD *)this + 8);
    v19 = (double)(v37 - dword_4C6B7C) / 10.0;
    v29 = (int)(float)(v19 + (float)(v44 * v40)) - *((_DWORD *)this + 9);
    v20 = (double)(v38 - dword_4C6B80) / 10.0;
    v2 = (int)(float)(v20 + (float)(v44 * v41)) - *((_DWORD *)this + 10);
    Material = BlockMaterialMgr::getMaterial(
                 (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                 *((_DWORD *)this + 40));
    (*(void (__fastcall **)(int, _DWORD, char *, _DWORD))(*(_DWORD *)Material + 136))(
      Material,
      *((_DWORD *)this + 27),
      (char *)this + 168,
      *((_DWORD *)this + 28));
    goto LABEL_16;
  }
  if ( v11 == 2 )
  {
    ClientActorArrow::doAttackActor(*((ClientActorArrow **)this + 28), v43[5], v31);
    goto LABEL_16;
  }
  if ( v11 > 0 )
  {
LABEL_16:
    v22 = GenRandomFloat();
    ClientActor::playSound(*((ClientActor **)this + 28), "random.bowhit", 1.0, 1.2 / (float)((float)(v22 * 0.2) + 0.9));
    v23 = *((_DWORD *)this + 28);
    *(_DWORD *)(v23 + 172) = 0;
    Ogre::Entity::stopMotion(*(_DWORD *)(v23 + 200), 0);
  }
  v24 = *((_DWORD *)this + 9);
  v25 = *((_DWORD *)this + 10);
  *((_DWORD *)this + 8) += v28;
  *((_DWORD *)this + 9) = v24 + v29;
  *((_DWORD *)this + 10) = v25 + v2;
  LODWORD(v26) = (char *)this + 4;
  HIDWORD(v26) = (char *)this + 8;
  Direction2PitchYaw(v26, v31);
  v27 = *((float *)this + 19);
  *((float *)this + 18) = *((float *)this + 18) * v30;
  *((float *)this + 19) = v30 * v27;
  *((float *)this + 20) = *((float *)this + 20) * v30;
  *((float *)this + 19) = (float)(v30 * v27) - 5.0;
  if ( v45 != nullptr )
    operator delete(v45);
}


//======================================================================
// ArrowLocoMotion::tick(void)
// address: 0x002A3234   size: 0x38 (56 bytes)
//======================================================================
void __fastcall ArrowLocoMotion::tick(World **this)
{
  int v2; // r2

  ActorLocoMotion::tick((ActorLocoMotion *)this);
  World::getBlockID(*(this + 27), (const WCoord *)(this + 42));
  v2 = (int)*(this + 45);
  if ( v2 > 0 )
    *(this + 45) = (World *)(v2 - 1);
  if ( *((_BYTE *)this + 148) != 0 )
    ArrowLocoMotion::tickInGround(this);
  else
    ArrowLocoMotion::tickInAir((ArrowLocoMotion *)this);
}

