// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorDragon

//======================================================================
// ActorDragon::getObjType(void)
// address: 0x002B2F04   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorDragon::getObjType(ActorDragon *this)
{
  return 0;
}


//======================================================================
// ActorDragon::doActualAttack(ClientActor *)
// address: 0x002B2F08   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ActorDragon::doActualAttack(ActorDragon *this, ClientActor *a2)
{
  ;
}


//======================================================================
// ActorDragon::saveBossData(WorldBossData *)
// address: 0x002B2F0A   size: 0x28 (40 bytes)
//======================================================================
int __fastcall ActorDragon::saveBossData(int a1, _DWORD *a2)
{
  int v2; // r3
  _DWORD *v3; // r0
  int result; // r0

  *a2 = **(_DWORD **)(a1 + 276);
  a2[2] = *(_DWORD *)(a1 + 212);
  v2 = *(_DWORD *)(a1 + 76);
  v3 = (_DWORD *)(a1 + 240);
  a2[1] = *(_DWORD *)(v2 + 8);
  a2[3] = *v3;
  a2[4] = v3[1];
  result = v3[2];
  a2[5] = result;
  return result;
}


//======================================================================
// ActorDragon::loadBossData(WorldBossData *)
// address: 0x002B2F32   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall ActorDragon::loadBossData(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // r0

  *(_DWORD *)(a1[19] + 8) = a2[1];
  a1[53] = a2[2];
  result = a1 + 60;
  *result = a2[3];
  result[1] = a2[4];
  result[2] = a2[5];
  return result;
}


//======================================================================
// ActorDragon::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002B2F50   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorDragon::save(ActorDragon *this, flatbuffers::FlatBufferBuilder *a2)
{
  return 0;
}


//======================================================================
// ActorDragon::load(void const*)
// address: 0x002B2F54   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorDragon::load(ActorDragon *this, const void *a2)
{
  return 0;
}


//======================================================================
// ActorDragon::onCull(Ogre::CullResult *,Ogre::CullFrustum *)
// address: 0x002B2F8E   size: 0x22 (34 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ActorDragon::onCull(
        Ogre::MovableObject ***this,
        Ogre::GameScene **a2,
        Ogre::CullFrustum *a3)
{
  if ( (int)*(this + 6) < 0 )
    Ogre::CullResult::addRenderable((Ogre::CullResult *)a2, a2[137], *(this + 57), 2, nullptr);
}


//======================================================================
// ActorDragon::update(float)
// address: 0x002B2FB0   size: 0xEA (234 bytes)
//======================================================================
int __fastcall ActorDragon::update(ActorDragon *this, float a2)
{
  int v2; // r4
  _DWORD *v4; // r5
  int v5; // r4
  int v7; // [sp+4h] [bp-18h]
  int v8; // [sp+8h] [bp-14h]
  float v9; // [sp+Ch] [bp-10h]

  v2 = *((_DWORD *)this + 17);
  v9 = *(float *)(v2 + 68) / 0.05;
  v7 = (int)(float)((float)((float)*(int *)(v2 + 60)
                          + (float)((float)((float)*(int *)(v2 + 36) - (float)*(int *)(v2 + 60)) * v9))
                  * 10.0);
  v8 = (int)(float)((float)((float)*(int *)(v2 + 64)
                          + (float)((float)((float)*(int *)(v2 + 40) - (float)*(int *)(v2 + 64)) * v9))
                  * 10.0);
  v4 = *((_DWORD **)this + 57);
  v4[2] = (int)(float)((float)((float)*(int *)(v2 + 56)
                             + (float)((float)((float)*(int *)(v2 + 32) - (float)*(int *)(v2 + 56)) * v9))
                     * 10.0);
  v4[3] = v7;
  v4[4] = v8;
  (*(void (__fastcall **)(_DWORD *))(*v4 + 64))(v4);
  v5 = *((_DWORD *)this + 57);
  Ogre::Quaternion::setEulerAngle((Ogre::Quaternion *)(v5 + 20), *(float *)(*((_DWORD *)this + 17) + 4), 0.0, 0.0);
  (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 64))(v5);
  return (*(int (__fastcall **)(_DWORD, unsigned int))(**((_DWORD **)this + 57) + 40))(
           *((_DWORD *)this + 57),
           (unsigned int)(float)(a2 * 1000.0));
}


//======================================================================
// ActorDragon::~ActorDragon()
// address: 0x002B30A8   size: 0x3C (60 bytes)
//======================================================================
// Alternative name is '_ZN11ActorDragonD1Ev'
void __fastcall ActorDragon::~ActorDragon(ActorDragon *this)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  _DWORD *v4; // r0

  v1 = (_DWORD *)((char *)this + 224);
  *(_DWORD *)this = &off_45DDD8;
  v3 = *((_DWORD **)this + 56);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *v1 = 0;
  }
  v4 = *((_DWORD **)this + 57);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 57) = 0;
  }
  ActorBoss::~ActorBoss(this);
}


//======================================================================
// ActorDragon::~ActorDragon()
// address: 0x002B30E8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorDragon::~ActorDragon(ActorDragon *this)
{
  ActorDragon::~ActorDragon(this);
  operator delete(this);
}


//======================================================================
// ActorDragon::ActorDragon(void)
// address: 0x002B3118   size: 0x138 (312 bytes)
//======================================================================
// Alternative name is '_ZN11ActorDragonC1Ev'
void __fastcall ActorDragon::ActorDragon(ActorDragon *this)
{
  ActorLocoMotion *v2; // r7
  int v3; // r3
  MobAttrib *v4; // r7
  Ogre::Entity *v5; // r6
  char s[256]; // [sp+Ch] [bp-108h] BYREF

  ActorLiving::ActorLiving(this);
  *(_DWORD *)this = &off_45E760;
  ChunkViewer::ChunkViewer((ActorDragon *)((char *)this + 188));
  *((_DWORD *)this + 53) = 0;
  *(_DWORD *)this = &off_45DDD8;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0x80000000;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 69) = DefManager::getMonsterDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, 3502);
  v2 = (ActorLocoMotion *)operator new(0x94u);
  ActorLocoMotion::ActorLocoMotion(v2, this);
  *((_DWORD *)this + 17) = v2;
  v3 = *(_DWORD *)(*((_DWORD *)this + 69) + 172);
  *((_DWORD *)v2 + 6) = *(_DWORD *)(*((_DWORD *)this + 69) + 168);
  *((_DWORD *)v2 + 5) = v3;
  *(_BYTE *)(*((_DWORD *)this + 17) + 138) = 1;
  v4 = (MobAttrib *)operator new(0x44u);
  MobAttrib::MobAttrib(v4, this);
  MobAttrib::init((int)v4, *((_DWORD *)this + 69));
  *((_DWORD *)this + 19) = v4;
  *((_BYTE *)v4 + 20) = 1;
  j_sprintf(s, "entity/%s/body.omod", (const char *)(*((_DWORD *)this + 69) + 36));
  *((_DWORD *)this + 56) = BlockMaterialMgr::getModel(
                             (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                             s,
                             nullptr);
  v5 = (Ogre::Entity *)operator new(0x210u);
  Ogre::Entity::Entity(v5);
  *((_DWORD *)this + 57) = v5;
  Ogre::Entity::load((int)v5, *((Ogre::Model **)this + 56));
  *((_DWORD *)this + 58) = -1;
  *((_DWORD *)this + 59) = -1;
  *((_DWORD *)this + 66) = 0;
  *((_BYTE *)this + 268) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_BYTE *)this + 269) = 0;
  *((_DWORD *)this + 68) = 0;
}


//======================================================================
// ActorDragon::setCurAnim(int)
// address: 0x002B3270   size: 0x20 (32 bytes)
//======================================================================
int __fastcall ActorDragon::setCurAnim(int this, int a2)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(this + 232);
  if ( *(_DWORD *)(this + 232) != a2 )
  {
    this = Ogre::Model::playAnim(*(Ogre::Model **)(this + 224), a2, 1.0, 1.0);
    *v2 = a2;
  }
  return this;
}


//======================================================================
// ActorDragon::attackedFrom(OneAttackData &,ClientActor *)
// address: 0x002B3290   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall ActorDragon::attackedFrom(int a1, int a2, int a3)
{
  int v6; // r6
  _DWORD v8[3]; // [sp+8h] [bp-1Ch] BYREF
  _DWORD v9[4]; // [sp+14h] [bp-10h] BYREF

  v6 = 0;
  if ( ClientActor::isDead((ClientActor *)a1) == 0 )
  {
    v6 = ActorLiving::attackedFrom(a1, a2, a3);
    if ( *(_BYTE *)(a1 + 269) != 0 )
      GameEventQue::postBossState(
        (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
        **(_DWORD **)(a1 + 276),
        (int)*(float *)(*(_DWORD *)(a1 + 76) + 8));
    if ( ClientActor::isDead((ClientActor *)a1) != 0 )
    {
      CoordDivBlock((const WCoord *)v9, (int *)(a1 + 240));
      v8[0] = v9[0];
      v8[1] = v9[1] - 9;
      v8[2] = v9[2];
      World::setBlockAll(*(World **)(a1 + 52), (const WCoord *)v8, 733, 0, 3);
      WorldContainerMgr::addDungeonChest(
        *(WorldContainerMgr **)(*(_DWORD *)(a1 + 52) + 128),
        (const WCoord *)v8,
        733,
        nullptr);
      ActorDragon::setCurAnim(a1, 3);
      ClientActor::setNeedClear((ClientActor *)a1, 20);
      GameEventQue::postMissionComplete((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 2);
      *(_DWORD *)(a1 + 212) |= 2u;
    }
  }
  return v6;
}


//======================================================================
// ActorDragon::setSpawnPoint(WCoord const&)
// address: 0x002B335C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall ActorDragon::setSpawnPoint(ActorDragon *this, const WCoord *a2)
{
  int v2; // r2
  int v3; // r5
  int v4; // r1
  char *v5; // r4
  int v6; // r5
  int (__fastcall *v7)(int, char *, _DWORD, _DWORD); // r6
  float v8; // r0

  v2 = *(_DWORD *)a2;
  v3 = 100 * (*((_DWORD *)a2 + 1) + 15);
  v4 = 100 * *((_DWORD *)a2 + 2);
  v5 = (char *)this + 240;
  *((_DWORD *)this + 60) = 100 * v2 + 50;
  *((_DWORD *)this + 62) = v4 + 50;
  *((_DWORD *)this + 61) = v3;
  v6 = *((_DWORD *)this + 17);
  v7 = *(int (__fastcall **)(int, char *, _DWORD, _DWORD))(*(_DWORD *)v6 + 16);
  v8 = GenRandomFloat();
  return v7(v6, v5, v8 * 360.0, 0);
}


//======================================================================
// ActorDragon::attackAndCollideActors(std::vector<ClientActor *,std::allocator<ClientActor *>> &)
// address: 0x002B33A4   size: 0x42 (66 bytes)
//======================================================================
void *__fastcall ActorDragon::attackAndCollideActors(int a1, _DWORD *a2)
{
  void *result; // r0
  unsigned int i; // r5
  _DWORD v6[8]; // [sp+4h] [bp-20h] BYREF

  result = j_memset(v6, 0, 0x1Cu);
  v6[1] = 1065353216;
  v6[5] = 0x40000000;
  for ( i = 0; i < (a2[1] - *a2) >> 2; ++i )
    result = (void *)(*(int (__fastcall **)(_DWORD, _DWORD *, int))(**(_DWORD **)(a1 + 96) + 68))(
                       *(_DWORD *)(a1 + 96),
                       v6,
                       a1);
  return result;
}


//======================================================================
// ActorDragon::destroyBlocksInBox(CollideAABB const&)
// address: 0x002B33E8   size: 0x1CE (462 bytes)
//======================================================================
int __fastcall ActorDragon::destroyBlocksInBox(ActorDragon *this, const CollideAABB *a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r2
  int v6; // r6
  int v7; // r3
  int v8; // r0
  int i; // r6
  int j; // r6
  World *v11; // r0
  int BlockID; // r0
  __int64 v13; // r6
  World *v14; // r1
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r1
  EffectParticle *v19; // r0
  int v21; // [sp+10h] [bp-3Ch]
  int v22; // [sp+14h] [bp-38h]
  int v23; // [sp+18h] [bp-34h]
  int v24; // [sp+20h] [bp-2Ch]
  int v25; // [sp+24h] [bp-28h]
  int v27; // [sp+2Ch] [bp-20h]
  int v28; // [sp+30h] [bp-1Ch]
  int v29; // [sp+34h] [bp-18h]
  int v30; // [sp+38h] [bp-14h]
  int v31; // [sp+3Ch] [bp-10h]
  int v32; // [sp+4Ch] [bp+0h] BYREF
  int v33; // [sp+50h] [bp+4h]
  int v34; // [sp+54h] [bp+8h]
  _DWORD v35[3]; // [sp+58h] [bp+Ch] BYREF
  int v36[3]; // [sp+64h] [bp+18h] BYREF
  _DWORD v37[3]; // [sp+70h] [bp+24h] BYREF
  int v38; // [sp+7Ch] [bp+30h] BYREF
  int v39; // [sp+80h] [bp+34h]
  int v40; // [sp+84h] [bp+38h]

  v3 = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  v5 = *((_DWORD *)a2 + 2);
  v38 = v3;
  v39 = v4;
  v40 = v5;
  CoordDivBlock((const WCoord *)&v32, &v38);
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)a2 + 2) + *((_DWORD *)a2 + 5);
  v8 = *((_DWORD *)a2 + 3);
  v39 = *((_DWORD *)a2 + 1) + *((_DWORD *)a2 + 4);
  v40 = v7;
  v38 = v6 + v8;
  CoordDivBlock((const WCoord *)v35, &v38);
  v27 = v35[0];
  v28 = v33;
  v31 = v35[2];
  v21 = v32;
  v36[0] = (v32 + v35[0]) / 2;
  v29 = v35[1];
  v36[1] = (v33 + v35[1]) / 2;
  v30 = v34;
  v36[2] = (v34 + v35[2]) / 2;
  v24 = 0;
  v25 = 0;
  while ( v21 <= v27 )
  {
    for ( i = v28; ; i = v22 + 1 )
    {
      v22 = i;
      if ( i > v29 )
        break;
      for ( j = v30; ; j = v23 + 1 )
      {
        v23 = j;
        if ( j > v31 )
          break;
        v11 = *((World **)this + 13);
        v38 = v21;
        v39 = v22;
        v40 = j;
        BlockID = World::getBlockID(v11, (const WCoord *)&v38);
        if ( BlockID != 0 )
        {
          if ( BlockID == 112 )
          {
            v25 = 1;
          }
          else if ( BlockID == 1 )
          {
            v25 = 1;
          }
          else
          {
            v38 = v21;
            v39 = v22;
            v40 = j;
            operator-(v37, &v38, v36);
            v13 = v37[0] * (__int64)v37[0] + v37[1] * (__int64)v37[1] + v37[2] * (__int64)v37[2];
            if ( GenRandomInt(3, 20) > v13 )
            {
              v14 = *((World **)this + 13);
              v38 = v21;
              v39 = v22;
              v40 = v23;
              World::setBlockAll(v14, (const WCoord *)&v38, 0, 0, 3);
              v24 = 1;
            }
          }
        }
      }
    }
    ++v21;
  }
  if ( v24 != 0 )
  {
    v15 = GenRandomInt(*(_DWORD *)a2, *(_DWORD *)a2 + *((_DWORD *)a2 + 3));
    v16 = *((_DWORD *)a2 + 4);
    v38 = v15;
    v17 = GenRandomInt(*((_DWORD *)a2 + 1), *((_DWORD *)a2 + 1) + v16);
    v18 = *((_DWORD *)a2 + 5);
    v39 = v17;
    v40 = GenRandomInt(*((_DWORD *)a2 + 2), *((_DWORD *)a2 + 2) + v18);
    v19 = (EffectParticle *)operator new(0x14u);
    EffectParticle::EffectParticle(
      v19,
      *((World **)this + 13),
      (Ogre::FixedString *)"particles/1005.ent",
      (const WCoord *)&v38,
      100);
  }
  return v25;
}


//======================================================================
// ActorDragon::tickFly(bool)
// address: 0x002B35BC   size: 0x514 (1300 bytes)
//======================================================================
void __fastcall ActorDragon::tickFly(ActorDragon *this, int a2)
{
  float *v3; // r6
  void **v4; // r4
  int v5; // r3
  float v6; // r0
  float v7; // r0
  float v8; // r0
  double v9; // r4
  double v10; // r4
  float v11; // r0
  float v12; // r0
  unsigned __int64 v13; // r4
  float v14; // r0
  float v15; // r0
  float v16; // r4
  float v17; // r0
  float v18; // r1
  float v19; // r5
  float v20; // r0
  float v21; // r1
  ActorLocoMotion *v22; // r4
  float v23; // r0
  float v24; // r3
  const Ogre::Vector3 *v25; // r1
  ActorLocoMotion *v26; // r0
  float v27; // r0
  int v28; // r0
  float v29; // [sp+8h] [bp-74h]
  double v30; // [sp+8h] [bp-74h]
  float v31; // [sp+8h] [bp-74h]
  unsigned int i; // [sp+8h] [bp-74h]
  float v33; // [sp+10h] [bp-6Ch]
  float v34; // [sp+18h] [bp-64h]
  float v35; // [sp+1Ch] [bp-60h]
  float v37; // [sp+28h] [bp-54h] BYREF
  float v38; // [sp+2Ch] [bp-50h] BYREF
  float v39; // [sp+30h] [bp-4Ch]
  float v40; // [sp+34h] [bp-48h]
  void *v41; // [sp+38h] [bp-44h] BYREF
  int v42; // [sp+3Ch] [bp-40h]
  int v43; // [sp+40h] [bp-3Ch]
  int v44; // [sp+44h] [bp-38h] BYREF
  int v45; // [sp+48h] [bp-34h]
  int v46; // [sp+4Ch] [bp-30h]
  float v47[8]; // [sp+5Ch] [bp-20h] BYREF

  ActorDragon::setCurAnim((int)this, 100111);
  v3 = *((float **)this + 17);
  v4 = (void **)((char *)this + 252);
  if ( *((_DWORD *)this + 24) != 0 )
  {
    ClientActor::getPosition((ClientActor *)&v41);
    v5 = v43;
    *v4 = v41;
    *((_DWORD *)this + 65) = v5;
    ClientActor::getPosition((ClientActor *)v47);
    operator-(&v44, (int *)this + 63, (int *)v47);
    v45 = 0;
    v29 = (float)((float)(WCoord::length((WCoord *)&v44) / 100.0) / 80.0) - 0.6;
    if ( v29 > 10.0 )
      v29 = 10.0;
    *((_DWORD *)this + 64) = v42 + (int)(float)(v29 * 100.0);
  }
  else if ( a2 != 0 )
  {
    v6 = COERCE_FLOAT(GenGaussian());
    *v4 = (char *)*v4 + (int)(float)((float)(v6 + v6) * 100.0);
    v7 = COERCE_FLOAT(GenGaussian());
    *((_DWORD *)this + 65) += (int)(float)((float)(v7 + v7) * 100.0);
  }
  v8 = j_sqrt((float)((float)(v3[18] * v3[18]) + (float)(v3[20] * v3[20])));
  v35 = v8 + 100.0;
  if ( (float)(v8 + 100.0) > 4000.0 )
    v35 = 4000.0;
  v9 = (float)(v3[1] * 0.017453);
  v30 = j_sin(v9);
  v10 = j_cos(v9);
  v11 = v30;
  LODWORD(v38) = LODWORD(v11) + 0x80000000;
  v12 = v10;
  LODWORD(v40) = LODWORD(v12) + 0x80000000;
  v39 = v3[19];
  Ogre::Normalize(&v38);
  ClientActor::getPosition((ClientActor *)&v41);
  operator-(&v44, (int *)this + 63, (int *)&v41);
  v34 = (float)v45;
  v13 = __PAIR64__(v44, v46);
  v47[0] = (float)v44;
  v47[1] = (float)v45;
  v47[2] = (float)v46;
  Ogre::Normalize(v47);
  v14 = j_sqrt((double)SHIDWORD(v13) * (double)SHIDWORD(v13) + (double)(int)v13 * (double)(int)v13);
  if ( (float)(v34 / v14) < -0.6 )
  {
    v15 = -0.6;
  }
  else if ( (float)(v34 / v14) <= 0.6 )
  {
    v15 = v34 / v14;
  }
  else
  {
    v15 = 0.6;
  }
  v3[19] = v3[19] + (float)(v15 * 10.0);
  *((_DWORD *)v3 + 1) = WrapAngleTo180(v3[1]);
  Direction2PitchYaw((unsigned int)&v37, (const Ogre::Vector3 *)v47);
  v16 = COERCE_FLOAT(WrapAngleTo180(v37 - v3[1]));
  if ( v16 < -50.0 )
  {
    v33 = -50.0;
  }
  else if ( v16 <= 50.0 )
  {
    v33 = v16;
  }
  else
  {
    v33 = 50.0;
  }
  v31 = (float)((float)((float)((float)(v38 * v47[0]) + (float)(v39 * v47[1])) + (float)(v40 * v47[2])) + 0.5) / 1.5;
  if ( v31 < 0.0 )
    v31 = 0.0;
  *((float *)this + 66) = *((float *)this + 66) * 0.8;
  v17 = j_sqrt((float)((float)(v3[18] * v3[18]) + (float)(v3[20] * v3[20])));
  v18 = v17 + 100.0;
  if ( (float)(v17 + 100.0) > 4000.0 )
    v18 = 4000.0;
  if ( a2 != 0 )
    v19 = *((float *)this + 66);
  else
    v19 = 0.0;
  v20 = v19 + (float)(v33 * (float)((float)(7000.0 / v18) / (float)(v17 + 100.0)));
  v21 = v20;
  *((float *)this + 66) = v20;
  if ( a2 != 0 )
    v21 = v20 * 0.15;
  v3[1] = v3[1] + v21;
  (*(void (__fastcall **)(_DWORD, _DWORD, int, _DWORD))(**((_DWORD **)this + 17) + 24))(
    *((_DWORD *)this + 17),
    0,
    1065353216,
    (float)((float)(v31 * (float)(200.0 / (float)(v35 + 100.0))) + (float)(1.0 - (float)(200.0 / (float)(v35 + 100.0))))
  * 6.0);
  v22 = *((ActorLocoMotion **)this + 17);
  if ( *((_BYTE *)this + 268) != 0 )
  {
    v23 = v3[20] * 0.8;
    v24 = v3[19] * 0.8;
    v25 = (const Ogre::Vector3 *)v47;
    v47[0] = v3[18] * 0.8;
    v47[1] = v24;
    v47[2] = v23;
    v26 = v22;
  }
  else
  {
    v26 = *((ActorLocoMotion **)this + 17);
    v25 = (const Ogre::Vector3 *)(v3 + 18);
  }
  ActorLocoMotion::doMoveStep(v26, v25);
  v47[0] = v3[18];
  v47[1] = v3[19];
  v47[2] = v3[20];
  Ogre::Normalize(v47);
  v27 = (float)((float)((float)((float)((float)((float)(v47[0] * v38) + (float)(v47[1] * v39)) + (float)(v47[2] * v40))
                              + 1.0)
                      * 0.5)
              * 0.15)
      + 0.8;
  *(float *)(*((_DWORD *)this + 17) + 72) = *(float *)(*((_DWORD *)this + 17) + 72) * v27;
  *(float *)(*((_DWORD *)this + 17) + 80) = *(float *)(*((_DWORD *)this + 17) + 80) * v27;
  *(float *)(*((_DWORD *)this + 17) + 76) = *(float *)(*((_DWORD *)this + 17) + 76) * 0.91;
  ActorLocoMotion::getCollideBox(*((ActorLocoMotion **)this + 17), (CollideAABB *)&v44);
  *((_BYTE *)this + 268) = ActorDragon::destroyBlocksInBox(this, (const CollideAABB *)&v44);
  if ( *((_DWORD *)this + 68) == 0 )
  {
    *((_DWORD *)this + 68) = 3;
    v41 = nullptr;
    v28 = *((_DWORD *)this + 13);
    v42 = 0;
    v43 = 0;
    World::getActorsInBoxExclude(v28, &v41, &v44, this);
    for ( i = 0; i < (v42 - (int)v41) >> 2; ++i )
    {
      j_memset(v47, 0, 0x1Cu);
      v47[1] = (float)*(__int16 *)(*((_DWORD *)this + 69) + 158);
      v47[5] = 3.0;
      (*(void (__fastcall **)(_DWORD, float *, ActorDragon *))(**((_DWORD **)v41 + i) + 68))(
        *((_DWORD *)v41 + i),
        v47,
        this);
    }
    if ( v41 != nullptr )
      operator delete(v41);
  }
  --*((_DWORD *)this + 68);
}


//======================================================================
// ActorDragon::setNewTarget(void)
// address: 0x002B3AF0   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall ActorDragon::setNewTarget(ActorDragon *this)
{
  _DWORD *v2; // r5
  ClientActor *v3; // r6
  int v4; // r7
  double v5; // r0
  int v6; // r6
  int v7; // r0
  int v8; // r3
  int v9; // r6
  int v10; // r6
  int result; // r0
  _DWORD v12[3]; // [sp+8h] [bp-1Ch] BYREF
  int v13[4]; // [sp+14h] [bp-10h] BYREF

  v2 = (_DWORD *)((char *)this + 252);
  if ( GenRandomInt(2u) == 0 )
  {
    v3 = (ClientActor *)ClientActorMgr::selectRandomPlayer(*(ClientActorMgr **)(*((_DWORD *)this + 13) + 132));
    v4 = *(_DWORD *)(*((_DWORD *)this + 69) + 176);
    if ( v3 != nullptr )
    {
      LODWORD(v5) = ClientActor::getDistanceSqToEntity(this, v3);
      if ( v5 < (float)((float)v4 * 100.0) * (float)((float)v4 * 100.0) )
        return ClientActor::setToAttackTarget(this, v3);
    }
  }
  ClientActor::setToAttackTarget(this, nullptr);
  do
  {
    v6 = *((_DWORD *)this + 61);
    v7 = v6 + GenRandomInt(-2500, 2500);
    v8 = 200;
    if ( v7 > 199 )
    {
      v8 = v7;
      if ( v7 > 25500 )
        v8 = 25500;
    }
    *((_DWORD *)this + 64) = v8;
    v9 = *((_DWORD *)this + 60);
    *v2 = v9 + GenRandomInt(-6000, 6000);
    v10 = *((_DWORD *)this + 62);
    *((_DWORD *)this + 65) = v10 + GenRandomInt(-6000, 6000);
    ClientActor::getPosition((ClientActor *)v13);
    operator-(v12, v13, (int *)this + 63);
    result = WCoord::length((WCoord *)v12) > 1000.0;
  }
  while ( result == 0 );
  return result;
}


//======================================================================
// ActorDragon::setAIState(int)
// address: 0x002B3BEC   size: 0x1C (28 bytes)
//======================================================================
ActorDragon *__fastcall ActorDragon::setAIState(ActorDragon *this, int a2)
{
  if ( *((_DWORD *)this + 54) != a2 )
  {
    *((_DWORD *)this + 54) = a2;
    *((_DWORD *)this + 55) = 0;
    if ( a2 == 1 )
      return (ActorDragon *)ActorDragon::setNewTarget(this);
  }
  return this;
}


//======================================================================
// ActorDragon::tick(void)
// address: 0x002B3C08   size: 0x522 (1314 bytes)
//======================================================================
int __fastcall ActorDragon::tick(ActorDragon *this)
{
  int result; // r0
  int v3; // r1
  int v4; // r2
  GameEventQue *v5; // r0
  int *v6; // r7
  int v7; // r0
  int v8; // r3
  int v9; // r6
  int *v10; // r7
  int v11; // r3
  ActorDragon *v12; // r0
  int v13; // r1
  float v14; // r5
  ActorDragon *v15; // r0
  int v16; // r1
  int v17; // r1
  ActorDragon *v18; // r0
  int v19; // r3
  ClientActor *v20; // r5
  double v21; // r0
  ClientActor *v22; // r1
  int v23; // r3
  int v24; // r1
  Ogre::Model *v25; // r0
  double v26; // r0
  int v27; // r0
  ClientActor *v28; // r1
  int v29; // r6
  Ogre::Entity *v30; // r7
  int v31; // r2
  void *v32; // r1
  int v33; // r7
  int v34; // r7
  __int64 v35; // r0
  int v36; // r3
  Ogre::FixedString **v37; // r3
  WCoord *v38; // [sp+8h] [bp-7Ch]
  WCoord *v39; // [sp+8h] [bp-7Ch]
  World *v40; // [sp+Ch] [bp-78h]
  ClientActorMgr *v41; // [sp+14h] [bp-70h]
  int v42[3]; // [sp+1Ch] [bp-68h] BYREF
  float v43; // [sp+28h] [bp-5Ch] BYREF
  float v44; // [sp+2Ch] [bp-58h]
  float v45; // [sp+30h] [bp-54h]
  int v46[3]; // [sp+34h] [bp-50h] BYREF
  Ogre::FixedString *v47[17]; // [sp+40h] [bp-44h] BYREF

  result = ClientActor::isDead(this);
  if ( result == 0 )
  {
    ClientActor::tick(this);
    v41 = *(ClientActorMgr **)(*((_DWORD *)this + 13) + 132);
    ClientActor::getPosition((ClientActor *)v47);
    if ( ClientActorMgr::selectNearPlayer(v41, (const WCoord *)v47, 100 * *(_DWORD *)(*((_DWORD *)this + 69) + 176)) != 0 )
    {
      if ( *((_BYTE *)this + 269) != 0 )
        goto LABEL_8;
      *((_BYTE *)this + 269) = 1;
      v3 = **((_DWORD **)this + 69);
      v4 = (int)*(float *)(*((_DWORD *)this + 19) + 8);
      v5 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
    }
    else
    {
      if ( *((_BYTE *)this + 269) == 0 )
        goto LABEL_8;
      *((_BYTE *)this + 269) = 0;
      v4 = -1;
      v5 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
      v3 = **((_DWORD **)this + 69);
    }
    GameEventQue::postBossState(v5, v3, v4);
LABEL_8:
    v6 = (int *)((char *)this + 220);
    v7 = *((_DWORD *)this + 55) + 1;
    *((_DWORD *)this + 55) = v7;
    v8 = *((_DWORD *)this + 54);
    switch ( v8 )
    {
      case 0:
        if ( v7 % 20 == 0 )
          (*(void (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)this + 19) + 36))(
            *((_DWORD *)this + 19),
            *(float *)(*((_DWORD *)this + 19) + 12) * 0.02);
        ActorDragon::setCurAnim((int)this, 100100);
        v9 = 100 * *(_DWORD *)(*((_DWORD *)this + 69) + 176);
        ClientActor::getPosition((ClientActor *)v47);
        if ( ClientActorMgr::selectNearPlayer(v41, (const WCoord *)v47, v9) != 0 )
        {
          ActorDragon::setAIState(this, 1);
          *((_DWORD *)this + 59) = 0;
          *((_DWORD *)this + 53) |= 1u;
          GameEventQue::postMissionComplete((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 1);
          GameEventQue::postGameDialogue((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 1000);
        }
        goto LABEL_61;
      case 1:
        v10 = (int *)((char *)this + 236);
        v11 = *((_DWORD *)this + 59) + 1;
        *((_DWORD *)this + 59) = v11;
        if ( v11 > 599 || *((_BYTE *)this + 269) == 0 )
        {
          v12 = this;
          v13 = 2;
LABEL_32:
          ActorDragon::setAIState(v12, v13);
          *v10 = 0;
          goto LABEL_61;
        }
        ClientActor::getPosition((ClientActor *)v47);
        operator-(v46, (int *)this + 63, (int *)v47);
        v14 = WCoord::length((WCoord *)v46);
        if ( v14 < 1000.0
          || v14 > 15000.0
          || *(_BYTE *)(*((_DWORD *)this + 17) + 136) != 0
          || *(_BYTE *)(*((_DWORD *)this + 17) + 137) != 0 )
        {
          ActorDragon::setNewTarget(this);
        }
        v15 = this;
        v16 = 1;
        goto LABEL_26;
      case 2:
        ClientActor::getPosition((ClientActor *)v47);
        operator-(v46, (int *)v47, (int *)this + 60);
        if ( WCoord::length((WCoord *)v46) > 500.0 )
        {
          ClientActor::setToAttackTarget(this, nullptr);
          *((_DWORD *)this + 63) = *((_DWORD *)this + 60);
          v15 = this;
          v16 = 0;
          *((_DWORD *)this + 64) = *((_DWORD *)this + 61);
          *((_DWORD *)this + 65) = *((_DWORD *)this + 62);
LABEL_26:
          ActorDragon::tickFly(v15, v16);
          goto LABEL_61;
        }
        v17 = *((unsigned __int8 *)this + 269);
        v18 = this;
        if ( *((_BYTE *)this + 269) != 0 )
        {
          v10 = (int *)((char *)this + 236);
          if ( *((_DWORD *)this + 59) == 0 )
            GameEventQue::postGameDialogue((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 1001);
          v12 = this;
          v19 = *v10 + 1;
          *v10 = v19;
          if ( v19 > 599 )
          {
            v13 = 1;
            goto LABEL_32;
          }
          ActorDragon::setCurAnim((int)this, 100100);
          if ( *((_DWORD *)this + 55) % 40 != 0 )
            goto LABEL_61;
          ClientActor::getPosition((ClientActor *)v47);
          v20 = (ClientActor *)ClientActorMgr::selectNearPlayer(
                                 v41,
                                 (const WCoord *)v47,
                                 (int)(float)((float)*(int *)(*((_DWORD *)this + 69) + 180) * 100.0));
          if ( v20 == nullptr )
            goto LABEL_61;
          ClientActor::setToAttackTarget(this, v20);
          LODWORD(v21) = ClientActor::getDistanceSqToEntity(this, v20);
          if ( v21 >= 640000.0 )
          {
            v18 = this;
            v17 = 3;
          }
          else
          {
            v18 = this;
            v17 = 4;
          }
        }
LABEL_60:
        ActorDragon::setAIState(v18, v17);
        goto LABEL_61;
      default:
        break;
    }
    v38 = (ActorDragon *)((char *)this + 224);
    if ( v8 == 4 )
    {
      v22 = *((ClientActor **)this + 24);
      if ( v22 != nullptr )
        ClientActor::faceActor(this, v22, 10.0, 10.0);
      v23 = *v6;
      if ( *v6 == 1 )
      {
        v24 = 100114;
        v25 = *(Ogre::Model **)v38;
LABEL_55:
        Ogre::Model::playAnim(v25, v24, 1.0, 1.0);
        goto LABEL_61;
      }
      if ( v23 == 10 )
      {
        LODWORD(v26) = ClientActor::getDistanceSqToEntity(this, *((ClientActor **)this + 24));
        if ( v26 < 960000.0 )
        {
          j_memset(v47, 0, 0x1Cu);
          *(float *)&v47[1] = (float)*(__int16 *)(*((_DWORD *)this + 69) + 158);
          v27 = *((_DWORD *)this + 24);
          v47[5] = (Ogre::FixedString *)1077936128;
          (*(void (__fastcall **)(int, Ogre::FixedString **, ActorDragon *))(*(_DWORD *)v27 + 68))(v27, v47, this);
        }
        goto LABEL_61;
      }
      if ( v23 != 20 )
      {
LABEL_61:
        memset(v47, 0, 16);
        ClientActor::getPosition((ClientActor *)&v43);
        LODWORD(v44) += *(_DWORD *)(*((_DWORD *)this + 17) + 24) / 2;
        v40 = *((World **)this + 13);
        CoordDivBlock((const WCoord *)v46, (int *)&v43);
        result = World::getBlockLightValue2(v40, (float *)v47, (float *)&v47[1], (const WCoord *)v46, true);
        v37 = *((Ogre::FixedString ***)this + 56);
        v37[108] = v47[0];
        v37 += 108;
        v37[1] = v47[1];
        v37[2] = v47[2];
        v37[3] = v47[3];
        return result;
      }
    }
    else
    {
      if ( v8 != 3 )
        goto LABEL_61;
      v28 = *((ClientActor **)this + 24);
      if ( v28 != nullptr )
        ClientActor::faceActor(this, v28, 10.0, 10.0);
      v29 = *v6;
      if ( *v6 == 1 )
      {
        ActorDragon::setCurAnim((int)this, 100113);
        v30 = *((Ogre::Entity **)this + 57);
        v47[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                        (Ogre::FixedString *)"35021",
                                        (const char *)0xFFFFFFFF,
                                        v31,
                                        (int)this + 228);
        Ogre::Entity::playMotion(v30, (char **)v47, 1, 0);
        Ogre::FixedString::release((int)v47[0], v32);
        goto LABEL_61;
      }
      if ( v29 == 30 )
      {
        v24 = 100105;
        v25 = *(Ogre::Model **)v38;
        goto LABEL_55;
      }
      if ( v29 == 40 )
      {
        (*(void (__fastcall **)(Ogre::FixedString **))(**((_DWORD **)this + 56) + 60))(v47);
        v42[0] = (int)*(float *)&v47[12];
        v42[1] = (int)*(float *)&v47[13];
        v33 = *((_DWORD *)this + 24);
        v42[2] = (int)*(float *)&v47[14];
        ClientActor::getPosition((ClientActor *)v47);
        v46[1] = (int)v47[1] + *(_DWORD *)(*(_DWORD *)(v33 + 68) + 24) / 2;
        v46[0] = (int)v47[0];
        v46[2] = (int)v47[2];
        operator-(v47, v46, v42);
        v43 = (float)(int)v47[0];
        v45 = (float)(int)v47[2];
        v44 = (float)(int)v47[1];
        v34 = operator new(0xD8u);
        v39 = (WCoord *)*(__int16 *)(*((_DWORD *)this + 69) + 160);
        ActorFireBall::ActorFireBall((ActorFireBall *)v34, this, (Ogre::FixedString **)&v43);
        LODWORD(v35) = v47;
        *(_DWORD *)v34 = &off_45C5D8;
        *(_DWORD *)(v34 + 208) = 1;
        *(_DWORD *)(v34 + 212) = v39;
        v36 = *((_DWORD *)this + 17);
        HIDWORD(v35) = *(_DWORD *)(v36 + 4);
        PitchYaw2Direction(v35, *(float *)(v36 + 8));
        (*(void (__fastcall **)(_DWORD, int *, _DWORD, _DWORD))(**(_DWORD **)(v34 + 68) + 16))(
          *(_DWORD *)(v34 + 68),
          v42,
          *(_DWORD *)(*((_DWORD *)this + 17) + 4),
          *(_DWORD *)(*((_DWORD *)this + 17) + 8));
        ClientActorMgr::spawnActor(v41, (ClientActor *)v34, true);
        goto LABEL_61;
      }
      if ( v29 != 50 )
        goto LABEL_61;
    }
    ClientActor::setToAttackTarget(this, nullptr);
    v18 = this;
    v17 = 2;
    goto LABEL_60;
  }
  return result;
}

