// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientActorArrow

//======================================================================
// ClientActorArrow::getObjType(void)
// address: 0x002A2228   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActorArrow::getObjType(ClientActorArrow *this)
{
  return 9;
}


//======================================================================
// ClientActorArrow::getMasterActor(void)
// address: 0x002A222C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientActorArrow::getMasterActor(ClientActorArrow *this)
{
  return *((_DWORD *)this + 51);
}


//======================================================================
// ClientActorArrow::canTriggerWalking(void)
// address: 0x002A2232   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientActorArrow::canTriggerWalking(ClientActorArrow *this)
{
  return 0;
}


//======================================================================
// ClientActorArrow::~ClientActorArrow()
// address: 0x002A2268   size: 0x44 (68 bytes)
//======================================================================
// Alternative name is '_ZN16ClientActorArrowD1Ev'
void __fastcall ClientActorArrow::~ClientActorArrow(ClientActorArrow *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  int v4; // r3
  ClientActor *v5; // r0

  v1 = (_DWORD *)((char *)this + 200);
  *(_DWORD *)this = &off_45CB60;
  v3 = *((_DWORD **)this + 50);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *v1 = 0;
  }
  v5 = *((ClientActor **)this + 51);
  if ( v5 != nullptr )
    ClientActor::release(v5);
  ClientActor::~ClientActor(this);
}


//======================================================================
// ClientActorArrow::~ClientActorArrow()
// address: 0x002A22B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientActorArrow::~ClientActorArrow(ClientActorArrow *this)
{
  ClientActorArrow::~ClientActorArrow(this);
  operator delete(this);
}


//======================================================================
// ClientActorArrow::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002A22C2   size: 0x20 (32 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientActorArrow::onCull(
        ClientActorArrow *this,
        Ogre::GameScene **a2,
        Ogre::CullFrustum *a3)
{
  Ogre::MovableObject **v3; // r2

  v3 = *((Ogre::MovableObject ***)this + 50);
  if ( v3 != nullptr )
    Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], v3, 2, nullptr);
}


//======================================================================
// ClientActorArrow::onCollideWithPlayer(ClientPlayer *)
// address: 0x002A22E4   size: 0x68 (104 bytes)
//======================================================================
int __fastcall ClientActorArrow::onCollideWithPlayer(int this, ClientPlayer *a2)
{
  ClientActor *v2; // r4
  int v4; // r5
  _DWORD *v5; // r7
  int v6; // r3
  BackPack *BackPack; // r0

  v2 = (ClientActor *)this;
  if ( *(_BYTE *)(*(_DWORD *)(this + 68) + 148) != 0 )
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 68) + 180);
    if ( v4 == 0 )
    {
      v5 = (_DWORD *)(this + 184);
      v6 = *(_DWORD *)(this + 184);
      if ( v6 == 1 )
      {
        v4 = 1;
      }
      else if ( v6 == 2 )
      {
        this = World::isCreativeMode(*(World **)(this + 52));
        v4 = this;
      }
      if ( *v5 != 1
        || (BackPack = (BackPack *)ClientPlayer::getBackPack(a2), (this = BackPack::addItem(BackPack, 2051, 1, 1)) != 0) )
      {
        if ( v4 != 0 )
        {
          (*(void (__fastcall **)(ClientPlayer *, ClientActor *))(*(_DWORD *)a2 + 212))(a2, v2);
          return ClientActor::setNeedClear(v2, 10);
        }
      }
    }
  }
  return this;
}


//======================================================================
// ClientActorArrow::load(void const*)
// address: 0x002A2350   size: 0x154 (340 bytes)
//======================================================================
int __fastcall ClientActorArrow::load(ClientActorArrow *this, flatbuffers::Table *a2)
{
  int OptionalFieldOffset; // r0
  flatbuffers::Table *v5; // r1
  int v6; // r0
  int v7; // r2
  int v8; // r3
  int *v9; // r0
  int v10; // r6
  int *v11; // r0
  int v12; // r2
  int v13; // r7
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r0
  int v23; // r3
  int *v24; // r0
  int v25; // r2
  int v26; // r7
  int v27; // r0
  char v28; // r3
  int v29; // r0
  int v30; // r3
  int v31; // r0
  int v32; // r3
  int v33; // r0
  int v34; // r3

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 4u);
  if ( OptionalFieldOffset != 0 )
    v5 = (flatbuffers::Table *)((char *)a2 + OptionalFieldOffset + *(_DWORD *)((char *)a2 + OptionalFieldOffset));
  else
    v5 = nullptr;
  ClientActor::loadActorCommon((int)this, v5);
  v6 = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
  v7 = 0;
  v8 = 0;
  if ( v6 != 0 )
  {
    v9 = (int *)((char *)a2 + v6);
    v7 = *v9;
    v8 = v9[1];
  }
  *((_DWORD *)this + 52) = v7;
  *((_DWORD *)this + 53) = v8;
  *((_DWORD *)this + 51) = 0;
  v10 = *((_DWORD *)this + 17);
  v11 = (int *)flatbuffers::Table::GetOptionalFieldOffset(a2, 0xAu);
  if ( v11 != nullptr )
    v11 = (int *)((char *)v11 + (_DWORD)a2);
  v12 = v11[2];
  v13 = *v11;
  *(_DWORD *)(v10 + 172) = v11[1];
  *(_DWORD *)(v10 + 168) = v13;
  *(_DWORD *)(v10 + 176) = v12;
  v14 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xCu);
  v15 = 0;
  if ( v14 != 0 )
    v15 = *(unsigned __int16 *)((char *)a2 + v14);
  *(_DWORD *)(v10 + 160) = v15;
  v16 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xEu);
  v17 = 0;
  if ( v16 != 0 )
    v17 = *(unsigned __int16 *)((char *)a2 + v16);
  *(_DWORD *)(v10 + 164) = v17;
  v18 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0x10u);
  v19 = 0;
  if ( v18 != 0 )
    v19 = *(_DWORD *)((char *)a2 + v18);
  *((_DWORD *)this + 43) = v19;
  v20 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0x12u);
  v21 = 0;
  if ( v20 != 0 )
    v21 = *(_DWORD *)((char *)a2 + v20);
  *((_DWORD *)this + 44) = v21;
  v22 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0x14u);
  v23 = 0;
  if ( v22 != 0 )
    v23 = *(_DWORD *)((char *)a2 + v22);
  *((_DWORD *)this + 45) = v23;
  v24 = (int *)flatbuffers::Table::GetOptionalFieldOffset(a2, 0x16u);
  if ( v24 != nullptr )
    v24 = (int *)((char *)v24 + (_DWORD)a2);
  v25 = v24[2];
  v26 = *v24;
  *((_DWORD *)this + 48) = v24[1];
  *((_DWORD *)this + 47) = v26;
  *((_DWORD *)this + 49) = v25;
  v27 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0x18u);
  v28 = 0;
  if ( v27 != 0 )
    v28 = *((_BYTE *)a2 + v27);
  *((_DWORD *)this + 46) = v28;
  v29 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0x1Au);
  v30 = 0;
  if ( v29 != 0 )
    v30 = *((unsigned __int8 *)a2 + v29);
  *(_BYTE *)(v10 + 148) = v30 != 0;
  v31 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0x1Cu);
  v32 = 0;
  if ( v31 != 0 )
    v32 = *(_DWORD *)((char *)a2 + v31);
  *(_DWORD *)(v10 + 152) = v32;
  v33 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0x1Eu);
  v34 = 0;
  if ( v33 != 0 )
    v34 = *(_DWORD *)((char *)a2 + v33);
  *(_DWORD *)(v10 + 156) = v34;
  return 1;
}


//======================================================================
// ClientActorArrow::ClientActorArrow(void)
// address: 0x002A265C   size: 0x90 (144 bytes)
//======================================================================
// Alternative name is '_ZN16ClientActorArrowC2Ev'
void __fastcall ClientActorArrow::ClientActorArrow(ClientActorArrow *this)
{
  int Entity; // r0
  _DWORD *v3; // r3
  int v4; // r5
  ArrowLocoMotion *v5; // r5

  ClientActor::ClientActor(this);
  *(_DWORD *)this = &off_45CB60;
  Entity = BlockMaterialMgr::getEntity(
             (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
             "particles/gongjian/body.omod");
  *((_DWORD *)this + 50) = Entity;
  v3 = *(_DWORD **)(Entity + 364);
  v3[108] = 1065353216;
  v3 += 108;
  v3[1] = 1065353216;
  v3[2] = 0;
  v3[3] = 0;
  *((_DWORD *)this + 51) = 0;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 43) = 1065353216;
  *((_DWORD *)this + 44) = 0x40000000;
  *((_DWORD *)this + 45) = 0;
  *((_DWORD *)this + 46) = 0;
  v4 = operator new(0x20u);
  ActorAttrib::ActorAttrib(v4, (int)this);
  *((_DWORD *)this + 19) = v4;
  v5 = (ArrowLocoMotion *)operator new(0xB8u);
  ArrowLocoMotion::ArrowLocoMotion(v5, this);
  *((_DWORD *)this + 17) = v5;
  *((_DWORD *)v5 + 6) = 50;
  *((_DWORD *)v5 + 5) = 50;
}


//======================================================================
// ClientActorArrow::setShootingActor(ClientActor *)
// address: 0x002A270C   size: 0x38 (56 bytes)
//======================================================================
int __fastcall ClientActorArrow::setShootingActor(ClientActorArrow *this, ClientActor *a2)
{
  int result; // r0

  ClientActor::addRef(a2);
  *((_DWORD *)this + 51) = a2;
  if ( (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 24))(a2) == 5 )
    *((_DWORD *)this + 46) = 1;
  result = World::isCreativeMode(*((World **)this + 13));
  if ( result != 0 )
    *((_DWORD *)this + 46) = 2;
  return result;
}


//======================================================================
// ClientActorArrow::shootArrow(World *,ClientActor *,float)
// address: 0x002A2744   size: 0x1BA (442 bytes)
//======================================================================
int __fastcall ClientActorArrow::shootArrow(ClientActorMgr **this, World *a2, ClientActor *a3, float a4)
{
  int v4; // r3
  int v6; // r4
  float v7; // r0
  float v8; // r7
  float v9; // r0
  void *v10; // r0
  LivingAttrib *v11; // r5
  __int64 v12; // r0
  Ogre::Entity *v13; // r5
  int v14; // r2
  void *v15; // r1
  float x; // [sp+8h] [bp-4Ch]
  float v18; // [sp+10h] [bp-44h]
  float v20; // [sp+18h] [bp-3Ch]
  _DWORD v22[5]; // [sp+20h] [bp-34h] BYREF
  Ogre::FixedString *v23; // [sp+34h] [bp-20h] BYREF
  int v24; // [sp+38h] [bp-1Ch] BYREF
  int v25; // [sp+3Ch] [bp-18h]
  int v26; // [sp+40h] [bp-14h]
  _DWORD v27[4]; // [sp+44h] [bp-10h] BYREF

  v4 = *((_DWORD *)a2 + 17);
  v18 = *(float *)(v4 + 4);
  v20 = *(float *)(v4 + 8);
  v6 = operator new(0xD8u);
  ClientActorArrow::ClientActorArrow((ClientActorArrow *)v6);
  *(_DWORD *)(v6 + 184) = 1;
  ClientActor::getEyePosition((ClientActor *)&v24);
  v7 = j_sin((float)(v18 * 0.017453));
  LODWORD(v8) = LODWORD(v7) + 0x80000000;
  v9 = j_cos((float)(v18 * 0.017453));
  v27[1] = 0;
  v27[2] = LODWORD(v9) + 0x80000000;
  *(float *)v27 = v8;
  v24 += (int)(float)(v8 * 16.0);
  v25 -= 10;
  v26 += (int)(float)(COERCE_FLOAT(LODWORD(v9) + 0x80000000) * 16.0);
  ClientActorMgr::spawnActor(*(this + 33), (ClientActor *)v6, (const WCoord *)&v24, v18, v20, true);
  ClientActorArrow::setShootingActor((ClientActorArrow *)v6, a2);
  ClientActor::getPosition((ClientActor *)v22);
  *(_DWORD *)(v6 + 188) = v22[0];
  *(_DWORD *)(v6 + 192) = v22[1];
  *(_DWORD *)(v6 + 196) = v22[2];
  v10 = _dynamic_cast(
          a2,
          (const struct __class_type_info *)&`typeinfo for'ClientActor,
          (const struct __class_type_info *)&`typeinfo for'ActorLiving,
          0);
  if ( v10 != nullptr )
  {
    v11 = *((LivingAttrib **)v10 + 19);
    x = COERCE_FLOAT(LivingAttrib::getEquipEnchantValue((int)v11, 5, 14, 1, -1));
    *(float *)(v6 + 176) = (float)(COERCE_FLOAT(LivingAttrib::getAttackPoint((int)v11, 1))
                                 * (float)((float)(*(float *)&a3 * 7.0) + 1.0))
                         * (float)(x + 1.0);
    *(_DWORD *)(v6 + 180) = LivingAttrib::getModAttrib(v11, 4);
    *(float *)(v6 + 172) = *(float *)(v6 + 172) + LivingAttrib::getKnockback(v11, 1, -1);
  }
  LODWORD(v12) = v27;
  *((float *)&v12 + 1) = v18;
  PitchYaw2Direction(v12, v20);
  (*(void (__fastcall **)(_DWORD, _DWORD *, _DWORD, int))(**(_DWORD **)(v6 + 68) + 40))(
    *(_DWORD *)(v6 + 68),
    v27,
    *(float *)&a3 * 300.0,
    1065353216);
  v13 = *(Ogre::Entity **)(v6 + 200);
  v23 = (Ogre::FixedString *)Ogre::FixedString::insert(
                               (Ogre::FixedString *)"1026",
                               (const char *)0xFFFFFFFF,
                               v14,
                               v6 + 200);
  Ogre::Entity::playMotion(v13, (char **)&v23, 1, 0);
  Ogre::FixedString::release((int)v23, v15);
  return v6;
}


//======================================================================
// ClientActorArrow::shootArrow(World *,ClientActor *,ClientActor *,float,float)
// address: 0x002A2928   size: 0x188 (392 bytes)
//======================================================================
int __fastcall ClientActorArrow::shootArrow(
        ClientActorMgr **this,
        World *a2,
        ClientActor *a3,
        ClientActor *a4,
        float a5,
        float a6)
{
  int v7; // r7
  ActorLocoMotion *v8; // r0
  float v9; // r0
  float v10; // r6
  Ogre::Entity *v11; // r4
  int v12; // r2
  void *v13; // r1
  ClientActorMgr *v15; // [sp+10h] [bp-64h]
  _DWORD v19[5]; // [sp+20h] [bp-54h] BYREF
  int v20; // [sp+34h] [bp-40h] BYREF
  Ogre::FixedString *v21; // [sp+38h] [bp-3Ch]
  int v22; // [sp+3Ch] [bp-38h]
  float v23; // [sp+40h] [bp-34h] BYREF
  float v24; // [sp+44h] [bp-30h]
  float v25; // [sp+48h] [bp-2Ch]
  Ogre::FixedString *v26[3]; // [sp+4Ch] [bp-28h] BYREF
  _DWORD v27[7]; // [sp+58h] [bp-1Ch] BYREF

  v7 = operator new(0xD8u);
  ClientActorArrow::ClientActorArrow((ClientActorArrow *)v7);
  ClientActor::getEyePosition((ClientActor *)&v20);
  v8 = *((ActorLocoMotion **)a3 + 17);
  v21 = (Ogre::FixedString *)((char *)v21 - 10);
  ActorLocoMotion::getCollideBox(v8, (CollideAABB *)v27);
  v25 = (float)(v27[5] / 2 + v27[2] - v22);
  v24 = (float)(v27[4] / 3 + v27[1] - (int)v21);
  v23 = (float)(v27[3] / 2 + v27[0] - v20);
  v9 = j_sqrt((float)((float)(v23 * v23) + (float)(v25 * v25)));
  v10 = v9;
  if ( v9 <= 0.0 )
  {
    ClientActorMgr::spawnActor(*(this + 33), (ClientActor *)v7, (const WCoord *)&v20, 0.0, 0.0, true);
  }
  else
  {
    v15 = *(this + 33);
    v26[2] = (Ogre::FixedString *)((int)(float)((float)(v25 * 100.0) / v9) + v22);
    v26[0] = (Ogre::FixedString *)(v20 + (int)(float)((float)(v23 * 100.0) / v9));
    v26[1] = v21;
    ClientActorMgr::spawnActor(v15, (ClientActor *)v7, (const WCoord *)v26, 0.0, 0.0, true);
    ClientActor::getPosition((ClientActor *)v19);
    *(_DWORD *)(v7 + 188) = v19[0];
    *(_DWORD *)(v7 + 192) = v19[1];
    *(_DWORD *)(v7 + 196) = v19[2];
    v24 = v24 + (float)(v10 * 0.2);
    (*(void (__fastcall **)(_DWORD, float *, ClientActor *, _DWORD))(**(_DWORD **)(v7 + 68) + 40))(
      *(_DWORD *)(v7 + 68),
      &v23,
      a4,
      LODWORD(a5));
  }
  ClientActorArrow::setShootingActor((ClientActorArrow *)v7, a2);
  v11 = *(Ogre::Entity **)(v7 + 200);
  v26[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                  (Ogre::FixedString *)"1026",
                                  (const char *)0xFFFFFFFF,
                                  v12,
                                  v7 + 200);
  Ogre::Entity::playMotion(v11, (char **)v26, 1, 0);
  Ogre::FixedString::release((int)v26[0], v13);
  return v7;
}


//======================================================================
// ClientActorArrow::doAttackActor(ClientActor *,Ogre::Vector3 &)
// address: 0x002A2AD0   size: 0x18E (398 bytes)
//======================================================================
int __fastcall ClientActorArrow::doAttackActor(ClientActorArrow *this, ActorLocoMotion **a2, Ogre::Vector3 *a3)
{
  _DWORD *v3; // r5
  char *v4; // r4
  double v7; // r0
  float v8; // r0
  int v9; // r4
  float v10; // r3
  float v11; // r0
  ClientActorArrow *v13; // [sp+0h] [bp-44h]
  double v14; // [sp+8h] [bp-3Ch]
  float v15; // [sp+10h] [bp-34h]
  double v17; // [sp+18h] [bp-2Ch]
  float v18[8]; // [sp+24h] [bp-20h] BYREF

  v3 = *((_DWORD **)this + 17);
  v4 = (char *)this + 188;
  v15 = *((float *)this + 44);
  v7 = (double)(v3[8] - *((_DWORD *)this + 47));
  v14 = (double)(v3[9] - *((_DWORD *)v4 + 1));
  v17 = (double)(v3[10] - *((_DWORD *)v4 + 2));
  v8 = j_sqrt(v7 * v7 + v14 * v14 + v17 * v17);
  if ( v8 >= 2000.0 )
    v15 = v15 + 1.0;
  if ( ClientActor::isBurning(this) != 0 )
    ClientActor::setFire((ClientActor *)a2, 5);
  v9 = *((_DWORD *)this + 51);
  if ( v9 != 0 )
    v13 = *((ClientActorArrow **)this + 51);
  else
    v13 = this;
  j_memset(v18, 0, 0x1Cu);
  BYTE2(v18[4]) = 1;
  LODWORD(v18[0]) = 1;
  v18[3] = *((float *)this + 45);
  v10 = *((float *)this + 43);
  v18[1] = v15;
  v18[5] = v10;
  BYTE1(v18[4]) = (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 24))(v9) == 5;
  (*((void (__fastcall **)(ActorLocoMotion **, float *, ClientActorArrow *))*a2 + 17))(a2, v18, v13);
  if ( v18[5] > 0.0 )
  {
    v11 = j_sqrt((float)((float)(*(float *)a3 * *(float *)a3) + (float)(*((float *)a3 + 2) * *((float *)a3 + 2))));
    if ( v11 > 0.0 )
      ActorLocoMotion::addMotion(
        a2[17],
        (float)((float)(v18[5] * 60.0) * *(float *)a3) / v11,
        10.0,
        (float)((float)(v18[5] * 60.0) * *((float *)a3 + 2)) / v11);
  }
  return ClientActor::setNeedClear(this, 0);
}


//======================================================================
// ClientActorArrow::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002A3174   size: 0xBC (188 bytes)
//======================================================================
int __fastcall ClientActorArrow::save(ClientActorArrow *this, flatbuffers::FlatBufferBuilder *a2)
{
  int v4; // r0
  int v5; // r3
  int v6; // r1
  int v7; // r3
  int v8; // r0
  int v9; // r6
  int v10; // r0
  int v11; // r7
  int ActorArrow; // r0
  unsigned __int16 v14; // [sp+8h] [bp-4Ch]
  unsigned int v15; // [sp+30h] [bp-24h]
  unsigned int v16; // [sp+34h] [bp-20h]
  _DWORD v17[3]; // [sp+38h] [bp-1Ch] BYREF
  _DWORD v18[4]; // [sp+44h] [bp-10h] BYREF

  v4 = ClientActor::saveActorCommon(this, a2);
  v5 = *((_DWORD *)this + 51);
  v6 = v4;
  if ( v5 != 0 )
  {
    v15 = *(_DWORD *)(v5 + 40);
    v16 = *(_DWORD *)(v5 + 44);
  }
  else
  {
    v15 = 0;
    v16 = 0;
  }
  v7 = *((_DWORD *)this + 17);
  v8 = *(_DWORD *)(v7 + 172);
  v9 = *(_DWORD *)(v7 + 168);
  v17[2] = *(_DWORD *)(v7 + 176);
  v17[1] = v8;
  v10 = *((_DWORD *)this + 49);
  v11 = *((_DWORD *)this + 48);
  v17[0] = v9;
  v18[2] = v10;
  LOWORD(v10) = *(_WORD *)(v7 + 160);
  v18[0] = *((_DWORD *)this + 47);
  v14 = v10;
  LOWORD(v10) = *(_WORD *)(v7 + 164);
  v18[1] = v11;
  ActorArrow = FBSave::CreateActorArrow(
                 (const void **)a2,
                 v6,
                 v15,
                 v16,
                 2051,
                 (const unsigned __int8 *)v17,
                 v14,
                 v10,
                 *((float *)this + 43),
                 *((float *)this + 44),
                 *((float *)this + 45),
                 (const unsigned __int8 *)v18,
                 *((_DWORD *)this + 46),
                 *(_BYTE *)(v7 + 148),
                 *(_DWORD *)(v7 + 152),
                 *(_DWORD *)(v7 + 156));
  return FBSave::CreateSectionActor(a2, 2u, ActorArrow);
}


//======================================================================
// ClientActorArrow::enterWorld(World *)
// address: 0x002A326C   size: 0x2A (42 bytes)
//======================================================================
int __fastcall ClientActorArrow::enterWorld(ClientActorArrow *this, ClientActorMgr **a2)
{
  int result; // r0
  __int64 v5; // r2

  result = ClientActor::enterWorld(this, (World *)a2);
  v5 = *((_QWORD *)this + 26);
  if ( v5 > 0 )
  {
    result = ClientActorMgr::findActorByWID(a2[33], v5);
    *((_DWORD *)this + 51) = result;
  }
  return result;
}


//======================================================================
// ClientActorArrow::update(float)
// address: 0x002A3298   size: 0x128 (296 bytes)
//======================================================================
int __fastcall ClientActorArrow::update(ClientActorArrow *this, float a2)
{
  int v3; // r4
  _DWORD *v4; // r7
  float v5; // r0
  _DWORD *v6; // r5
  int *v7; // r4
  float v8; // r0
  float v9; // r4
  float v10; // r0
  float v11; // r0
  int v12; // r4
  int v14; // [sp+4h] [bp-18h]
  int v15; // [sp+8h] [bp-14h]
  float v16; // [sp+Ch] [bp-10h]

  ClientActor::update(this, a2);
  v3 = *((_DWORD *)this + 17);
  v4 = (_DWORD *)((char *)this + 200);
  v16 = *(float *)(v3 + 68) / 0.05;
  v14 = (int)(float)((float)((float)*(int *)(v3 + 60)
                           + (float)((float)((float)*(int *)(v3 + 36) - (float)*(int *)(v3 + 60)) * v16))
                   * 10.0);
  v15 = (int)(float)((float)((float)*(int *)(v3 + 64)
                           + (float)((float)((float)*(int *)(v3 + 40) - (float)*(int *)(v3 + 64)) * v16))
                   * 10.0);
  v5 = (float)((float)*(int *)(v3 + 56) + (float)((float)((float)*(int *)(v3 + 32) - (float)*(int *)(v3 + 56)) * v16))
     * 10.0;
  v6 = *((_DWORD **)this + 50);
  v7 = (int *)(v3 + 180);
  v6[2] = (int)v5;
  v6[3] = v14;
  v6[4] = v15;
  (*(void (__fastcall **)(_DWORD *))(*v6 + 64))(v6);
  if ( *v7 <= 0 )
  {
    v11 = 0.0;
  }
  else
  {
    v8 = (float)*v7;
    v9 = v8;
    v10 = j_sin((float)((float)(v8 * 171.89) * 0.017453));
    v11 = v10 * v9;
  }
  v12 = *v4;
  Ogre::Quaternion::setEulerAngle(
    (Ogre::Quaternion *)(*v4 + 20),
    *(float *)(*((_DWORD *)this + 17) + 4),
    v11 - *(float *)(*((_DWORD *)this + 17) + 8),
    0.0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 64))(v12);
  return (*(int (__fastcall **)(_DWORD, unsigned int))(*(_DWORD *)*v4 + 40))(*v4, (unsigned int)(float)(a2 * 1000.0));
}

