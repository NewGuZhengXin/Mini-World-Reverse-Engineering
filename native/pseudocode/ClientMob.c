// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientMob

//======================================================================
// ClientMob::isMaster(void)
// address: 0x0029DBA0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientMob::isMaster(ClientMob *this)
{
  return *((unsigned __int8 *)this + 189);
}


//======================================================================
// ClientMob::getViewDist(void)
// address: 0x0029DBA6   size: 0xE (14 bytes)
//======================================================================
int __fastcall ClientMob::getViewDist(ClientMob *this)
{
  return 100 * *(_DWORD *)(*((_DWORD *)this + 48) + 176);
}


//======================================================================
// ClientMob::getObjType(void)
// address: 0x0029DBB4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientMob::getObjType(ClientMob *this)
{
  return 0;
}


//======================================================================
// ClientMob::getAttackTargetType(void)
// address: 0x0029DBB8   size: 0x1E (30 bytes)
//======================================================================
int __fastcall ClientMob::getAttackTargetType(ClientMob *this)
{
  _DWORD *v1; // r3
  int result; // r0

  v1 = *((_DWORD **)this + 48);
  result = 2;
  if ( v1[26] != 1 )
  {
    result = 3;
    if ( (unsigned int)(*v1 - 3101) <= 1 )
      return 1;
  }
  return result;
}


//======================================================================
// ClientMob::~ClientMob()
// address: 0x0029DBEC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9ClientMobD1Ev'
void __fastcall ClientMob::~ClientMob(ClientMob *this)
{
  *(_DWORD *)this = &off_45C6A8;
  ActorLiving::~ActorLiving(this);
}


//======================================================================
// ClientMob::~ClientMob()
// address: 0x0029DC08   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientMob::~ClientMob(ClientMob *this)
{
  ClientMob::~ClientMob(this);
  operator delete(this);
}


//======================================================================
// ClientMob::isPotionApplicable(int)
// address: 0x0029DC1C   size: 0x58 (88 bytes)
//======================================================================
int __fastcall ClientMob::isPotionApplicable(ClientMob *this, int a2)
{
  unsigned __int8 v4; // [sp+Bh] [bp-109h] BYREF
  char s[256]; // [sp+Ch] [bp-108h] BYREF

  v4 = 1;
  j_snprintf(s, 0x100u, "F%d_IsPotionApplicable", **((_DWORD **)this + 48));
  Ogre::ScriptVM::callFunction(
    *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
    s,
    "i>b",
    a2,
    &v4);
  return v4;
}


//======================================================================
// ClientMob::onClear(void)
// address: 0x0029DC84   size: 0xC (12 bytes)
//======================================================================
int __fastcall ClientMob::onClear(ClientMob *this)
{
  return ClientActor::playParticles(this, "10021.ent");
}


//======================================================================
// ClientMob::onDie(void)
// address: 0x0029DC94   size: 0x30 (48 bytes)
//======================================================================
AITask *__fastcall ClientMob::onDie(ActorLocoMotion **this)
{
  AITask *v2; // r0
  AITask *result; // r0

  ActorLocoMotion::onDie(*(this + 17));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*(this + 19) + 20))(*(this + 19));
  ClientActor::setNeedClear((ClientActor *)this, 20);
  v2 = *(this + 22);
  if ( v2 != nullptr )
    AITask::clearAllRunningTasks(v2);
  result = *(this + 23);
  if ( result != nullptr )
    return (AITask *)AITask::clearAllRunningTasks(result);
  return result;
}


//======================================================================
// ClientMob::playSaySound(void)
// address: 0x0029DCC4   size: 0x3A (58 bytes)
//======================================================================
ClientActor *__fastcall ClientMob::playSaySound(ClientActor *this)
{
  int v1; // r5
  ClientActor *v2; // r4
  float v3; // r6
  float v4; // r0

  v1 = *((_DWORD *)this + 48);
  v2 = this;
  if ( *(_BYTE *)(v1 + 402) != 0 )
  {
    v3 = COERCE_FLOAT((*(int (__fastcall **)(ClientActor *))(*(_DWORD *)this + 184))(this));
    v4 = (*(float (__fastcall **)(ClientActor *))(*(_DWORD *)v2 + 188))(v2);
    return (ClientActor *)ClientActor::playSound(v2, (const char *)(v1 + 402), v3, v4);
  }
  return this;
}


//======================================================================
// ClientMob::getSafeFallBlock(void)
// address: 0x0029DCFE   size: 0xA (10 bytes)
//======================================================================
int __fastcall ClientMob::getSafeFallBlock(ClientMob *this)
{
  ClientActor::getToAttackTarget(this);
  return 3;
}


//======================================================================
// ClientMob::canDespawn(void)
// address: 0x0029DD08   size: 0x1E (30 bytes)
//======================================================================
int __fastcall ClientMob::canDespawn(ClientMob *this)
{
  int v1; // r3

  v1 = 0;
  if ( (*((_DWORD *)this + 57) & 1) == 0 )
    return *(_DWORD *)(*((_DWORD *)this + 48) + 104)
         - 1
         - (*(_DWORD *)(*((_DWORD *)this + 48) + 104)
          - 2
          + (*(_DWORD *)(*((_DWORD *)this + 48) + 104) == 1));
  return v1;
}


//======================================================================
// ClientMob::doActualAttack(ClientActor *)
// address: 0x0029DD28   size: 0x162 (354 bytes)
//======================================================================
int __fastcall ClientMob::doActualAttack(ClientMob *this, ClientActor *a2)
{
  char *v3; // r7
  int result; // r0
  int v6; // r7
  float Knockback; // r0
  int v8; // r3
  float *v9; // r5
  int FireAspect; // r0
  int i; // r7
  LivingAttrib *v12; // [sp+Ch] [bp-138h]
  char v13; // [sp+10h] [bp-134h]
  char v14; // [sp+1Fh] [bp-125h] BYREF
  int v15[7]; // [sp+20h] [bp-124h] BYREF
  char s[256]; // [sp+3Ch] [bp-108h] BYREF

  v3 = (char *)this + 192;
  v14 = 1;
  j_snprintf(s, 0x100u, "F%d_AttackEntityAsMob", **((_DWORD **)this + 48));
  result = Ogre::ScriptVM::callFunction(
             *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
             s,
             "u[ClientMob]u[ClientActor]>b",
             this,
             a2,
             &v14);
  if ( v14 != 0 )
  {
    v12 = *((LivingAttrib **)this + 19);
    j_memset(v15, 0, sizeof(v15));
    BYTE2(v15[4]) = 1;
    v15[0] = *(__int16 *)(*(_DWORD *)v3 + 156);
    v6 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 52))(a2);
    v15[1] = LivingAttrib::getAttackPoint((int)v12, v15[0]);
    v15[2] = LivingAttrib::getEnchantAttackPoint((int)v12, v15[0], v6);
    v15[3] = LivingAttrib::getModAttrib(v12, v15[0] + 3);
    Knockback = LivingAttrib::getKnockback(v12, v15[0], v6);
    v8 = *(_DWORD *)a2;
    *(float *)&v15[5] = Knockback;
    v13 = 1;
    if ( (*(int (__fastcall **)(ClientActor *, int *, ClientMob *))(v8 + 68))(a2, v15, this) != 0 )
    {
      if ( *(float *)&v15[5] > 0.0 )
      {
        v9 = *((float **)this + 17);
        v9[18] = v9[18] * 0.6;
        v9[19] = v9[19] * 0.6;
        v9[20] = v9[20] * 0.6;
      }
      FireAspect = LivingAttrib::getFireAspect(*((LivingAttrib **)this + 19));
      v13 = 0;
      if ( FireAspect != 0 )
        ClientActor::setFire(a2, 4 * FireAspect);
    }
    for ( i = 3; i != 6; ++i )
    {
      j_memset(v15, 0, sizeof(v15));
      v15[0] = i;
      BYTE2(v15[4]) = v13;
      v15[1] = LivingAttrib::getAttackPoint((int)v12, i);
      v15[3] = LivingAttrib::getModAttrib(v12, v15[0] + 3);
      result = *(float *)&v15[1] > 0.0;
      if ( *(float *)&v15[1] > 0.0 )
        result = (*(int (__fastcall **)(ClientActor *, int *, ClientMob *))(*(_DWORD *)a2 + 68))(a2, v15, this);
    }
  }
  return result;
}


//======================================================================
// ClientMob::ClientMob(void)
// address: 0x0029DF58   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN9ClientMobC2Ev'
void __fastcall ClientMob::ClientMob(ClientMob *this)
{
  ActorLiving::ActorLiving(this);
  *(_DWORD *)this = &off_45C6A8;
  *((_BYTE *)this + 188) = 0;
  *((_BYTE *)this + 189) = 1;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 51) = -1;
  *((_DWORD *)this + 52) = -1;
  *((_BYTE *)this + 212) = 0;
  *((_DWORD *)this + 54) = 0;
  *((_DWORD *)this + 55) = 0;
  *((_DWORD *)this + 56) = 0;
  *((_DWORD *)this + 57) = 0;
}


//======================================================================
// ClientMob::setSpecialFlag(int)
// address: 0x0029DFA0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ClientMob::setSpecialFlag(int this, int a2)
{
  *(_DWORD *)(this + 228) = a2;
  *(_BYTE *)(*(_DWORD *)(this + 68) + 124) = (a2 & 2) != 0;
  return this;
}


//======================================================================
// ClientMob::getSpecialFlag(void)
// address: 0x0029DFB2   size: 0x1A (26 bytes)
//======================================================================
int __fastcall ClientMob::getSpecialFlag(ClientMob *this)
{
  int v1; // r3
  char *v2; // r0

  v1 = *((_DWORD *)this + 17);
  v2 = (char *)this + 228;
  if ( *(_BYTE *)(v1 + 124) != 0 )
    *(_DWORD *)v2 |= 2u;
  return *(_DWORD *)v2;
}


//======================================================================
// ClientMob::getSheared(void)
// address: 0x0029DFCC   size: 0xA (10 bytes)
//======================================================================
int __fastcall ClientMob::getSheared(ClientMob *this)
{
  return *((_DWORD *)this + 57) << 26 >> 31;
}


//======================================================================
// ClientMob::setInfuse(bool)
// address: 0x0029DFD6   size: 0x18 (24 bytes)
//======================================================================
unsigned int *__fastcall ClientMob::setInfuse(ClientMob *this, int a2)
{
  unsigned int *result; // r0
  unsigned int v3; // r2
  unsigned int v4; // r3

  result = (unsigned int *)((char *)this + 228);
  v3 = *result;
  if ( a2 != 0 )
    v4 = v3 | 0x10;
  else
    v4 = v3 & 0xFFFFFFEF;
  *result = v4;
  return result;
}


//======================================================================
// ClientMob::getInfuse(void)
// address: 0x0029DFEE   size: 0xA (10 bytes)
//======================================================================
int __fastcall ClientMob::getInfuse(ClientMob *this)
{
  return *((_DWORD *)this + 57) << 27 >> 31;
}


//======================================================================
// ClientMob::setPersistance(bool)
// address: 0x0029DFF8   size: 0x18 (24 bytes)
//======================================================================
unsigned int *__fastcall ClientMob::setPersistance(ClientMob *this, int a2)
{
  unsigned int *result; // r0
  unsigned int v3; // r2
  unsigned int v4; // r3

  result = (unsigned int *)((char *)this + 228);
  v3 = *result;
  if ( a2 != 0 )
    v4 = v3 | 1;
  else
    v4 = v3 & 0xFFFFFFFE;
  *result = v4;
  return result;
}


//======================================================================
// ClientMob::getPersistance(void)
// address: 0x0029E010   size: 0xA (10 bytes)
//======================================================================
int __fastcall ClientMob::getPersistance(ClientMob *this)
{
  return *((_DWORD *)this + 57) & 1;
}


//======================================================================
// ClientMob::pickItem(ClientItem *)
// address: 0x0029E01A   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ClientMob::pickItem(ClientMob *this, ClientItem *a2)
{
  int result; // r0

  result = ClientItem::getItemArmorPosition(a2);
  if ( result != 6 )
  {
    MobAttrib::equip(*((_DWORD *)this + 19), result, (int)a2 + 172);
    return ClientActor::setNeedClear(a2, 0);
  }
  return result;
}


//======================================================================
// ClientMob::playTameEffect(bool)
// address: 0x0029E040   size: 0x5E (94 bytes)
//======================================================================
int __fastcall ClientMob::playTameEffect(ClientMob *this, int a2)
{
  _DWORD *v2; // r3
  World *v3; // r6
  int v4; // r2
  int v5; // r3
  EffectManager *v6; // r7
  EffectParticle *v7; // r5
  _DWORD v9[4]; // [sp+Ch] [bp-10h] BYREF

  v2 = *((_DWORD **)this + 17);
  v3 = *((World **)this + 13);
  v9[0] = v2[8];
  v4 = v2[9];
  v5 = v2[10];
  v9[1] = v4;
  v9[2] = v5;
  v6 = (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton;
  if ( a2 != 0 )
  {
    v7 = (EffectParticle *)operator new(0x14u);
    EffectParticle::EffectParticle(v7, v3, (Ogre::FixedString *)"particles/34072.ent", (const WCoord *)v9, 40);
  }
  else
  {
    v7 = (EffectParticle *)operator new(0x14u);
    EffectParticle::EffectParticle(v7, v3, (Ogre::FixedString *)"particles/34071.ent", (const WCoord *)v9, 40);
  }
  return EffectManager::addEffect(v6, v7);
}


//======================================================================
// ClientMob::getBlockPathWeight(World *,WCoord const&)
// address: 0x0029E0B8   size: 0x68 (104 bytes)
//======================================================================
float __fastcall ClientMob::getBlockPathWeight(ClientMob *this, World *a2, const WCoord *a3, int a4)
{
  int v6; // r3
  int v7; // r0
  int v8; // r2
  int v9; // r6
  float v10; // r0
  float v11; // r1
  float result; // r0
  _DWORD v13[3]; // [sp+4h] [bp-Ch] BYREF

  v13[0] = a2;
  v13[1] = a3;
  v13[2] = a4;
  v6 = *(_DWORD *)(*((_DWORD *)this + 48) + 104);
  if ( v6 != 1 )
  {
    result = 0.0;
    if ( v6 != 0 )
      return result;
    v11 = COERCE_FLOAT(World::getLightBrightness(a2, a3));
    v10 = 0.5;
    return v10 - v11;
  }
  v7 = *((_DWORD *)a3 + 1) + dword_51665C;
  v8 = *((_DWORD *)a3 + 2) + dword_516660;
  v9 = *(_DWORD *)a3;
  v13[1] = v7;
  v13[0] = v9 + dword_516658;
  v13[2] = v8;
  if ( World::getBlockID(a2, (const WCoord *)v13) != 100 )
  {
    v10 = COERCE_FLOAT(World::getLightBrightness(a2, a3));
    v11 = 0.5;
    return v10 - v11;
  }
  return 10.0;
}


//======================================================================
// ClientMob::canSpawnHere(World *,WCoord const&)
// address: 0x0029E128   size: 0x13E (318 bytes)
//======================================================================
int __fastcall ClientMob::canSpawnHere(ClientMob *this, World *a2, const WCoord *a3)
{
  unsigned int v6; // r0
  int v7; // r3
  int v9; // r3
  _DWORD *v10; // r2
  int v11; // r3
  int v12; // r5
  int v13; // r2
  int v14; // r1
  int v15; // r6
  int v16; // r12
  unsigned int v17; // r6
  int v18; // r2
  int v19; // r3
  int v20; // r0
  unsigned int v21; // [sp+0h] [bp-4Ch]
  signed int BlockLightValue; // [sp+0h] [bp-4Ch]
  unsigned int v23; // [sp+4h] [bp-48h]
  int v24; // [sp+4h] [bp-48h]
  int v25; // [sp+4h] [bp-48h]
  _DWORD v26[3]; // [sp+Ch] [bp-40h] BYREF
  _DWORD v27[3]; // [sp+18h] [bp-34h] BYREF
  _DWORD v28[3]; // [sp+24h] [bp-28h] BYREF
  unsigned int v29; // [sp+30h] [bp-1Ch] BYREF
  unsigned int v30; // [sp+34h] [bp-18h]
  unsigned int v31; // [sp+38h] [bp-14h]
  int v32; // [sp+3Ch] [bp-10h]
  int v33; // [sp+40h] [bp-Ch]
  int v34; // [sp+44h] [bp-8h]

  v21 = CoordDivBlock(*(_DWORD *)a3);
  v23 = CoordDivBlock(*((_DWORD *)a3 + 1));
  v6 = CoordDivBlock(*((_DWORD *)a3 + 2));
  v7 = *(_DWORD *)(*((_DWORD *)this + 48) + 104);
  v26[0] = v21;
  v26[1] = v23;
  v26[2] = v6;
  if ( v7 == 1 )
  {
    v31 = v6 + dword_516660;
    v29 = v21 + dword_516658;
    v30 = v23 + dword_51665C;
    if ( World::getBlockID(a2, (const WCoord *)&v29) != 100
      || (int)World::getFullBlockLightValue(a2, (const WCoord *)v26) <= 8 )
    {
      return 0;
    }
  }
  else
  {
    if ( v7 != 0 )
      goto LABEL_7;
    if ( World::isThundering(a2) != 0 )
    {
      v19 = *((_DWORD *)a2 + 7);
      v20 = *(_DWORD *)(v19 + 72);
      *(_DWORD *)(v19 + 72) = 10;
      v25 = v20;
      BlockLightValue = World::getBlockLightValue(a2, (const WCoord *)v26, true);
      *(_DWORD *)(*((_DWORD *)a2 + 7) + 72) = v25;
    }
    else
    {
      BlockLightValue = World::getBlockLightValue(a2, (const WCoord *)v26, true);
    }
    if ( BlockLightValue > (int)GenRandomInt(8u) )
      return 0;
  }
  if ( ClientMob::getBlockPathWeight(this, a2, (const WCoord *)v26, v9) < 0.0 )
    return 0;
LABEL_7:
  v10 = *((_DWORD **)this + 17);
  v24 = v10[6];
  v11 = v10[5];
  v33 = v24;
  v12 = *(_DWORD *)a3;
  v32 = v11;
  v34 = v11;
  v13 = v10[7];
  v14 = *((_DWORD *)a3 + 1);
  v15 = *((_DWORD *)a3 + 2);
  v29 = v12 - v11 / 2;
  v30 = v14 - v13;
  v16 = v14 - v13;
  v17 = v15 - v11 / 2;
  v18 = *((_DWORD *)this + 48);
  v31 = v17;
  if ( *(_DWORD *)(v18 + 104) != 3 )
  {
    v27[1] = v30;
    v27[0] = v12 - v11 / 2;
    v27[2] = v31;
    v28[0] = v27[0] + v11;
    v28[1] = v24 + v16;
    v28[2] = v17 + v11;
    if ( World::isAnyLiquid(a2, (const WCoord *)v27, (const WCoord *)v28) != 0 )
      return 0;
  }
  return World::checkNoActorCollision(a2, (const CollideAABB *)&v29, nullptr);
}


//======================================================================
// ClientMob::getBlockPathWeight(WCoord const&)
// address: 0x0029E26C   size: 0xC (12 bytes)
//======================================================================
float __fastcall ClientMob::getBlockPathWeight(World **this, const WCoord *a2, int a3, int a4)
{
  return ClientMob::getBlockPathWeight((ClientMob *)this, *(this + 13), a2, a4);
}


//======================================================================
// ClientMob::isBreedItem(int)
// address: 0x0029E278   size: 0x80 (128 bytes)
//======================================================================
int __fastcall ClientMob::isBreedItem(ClientMob *this, int a2)
{
  int *v2; // r2
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  int v6; // r3
  int v7; // r1
  _DWORD *v8; // r3
  _DWORD *v9; // r2
  _DWORD *v10; // r3
  _DWORD *v11; // r6
  _DWORD *v12; // r2

  v2 = *((int **)this + 48);
  v4 = (_DWORD *)dword_51331C;
  v5 = &unk_513318;
  while ( 1 )
  {
    if ( v4 == nullptr )
    {
      v4 = v5;
      goto LABEL_23;
    }
    v6 = v4[4];
    v7 = *v2;
    if ( v6 < *v2 )
    {
      v8 = (_DWORD *)v4[3];
      v4 = v5;
      goto LABEL_19;
    }
    if ( v7 >= v6 )
      break;
    v8 = (_DWORD *)v4[2];
LABEL_19:
    v5 = v4;
    v4 = v8;
  }
  v9 = (_DWORD *)v4[2];
  v10 = (_DWORD *)v4[3];
  while ( v9 != nullptr )
  {
    if ( v9[4] < v7 )
    {
      v11 = (_DWORD *)v9[3];
      v9 = v4;
    }
    else
    {
      v11 = (_DWORD *)v9[2];
    }
    v4 = v9;
    v9 = v11;
  }
  while ( v10 != nullptr )
  {
    if ( v7 >= v10[4] )
    {
      v12 = (_DWORD *)v10[3];
      v10 = v5;
    }
    else
    {
      v12 = (_DWORD *)v10[2];
    }
    v5 = v10;
    v10 = v12;
  }
  while ( 1 )
  {
LABEL_23:
    if ( v4 == v5 )
      return 0;
    if ( v4[5] == a2 )
      break;
    v4 = (_DWORD *)sub_391DDC(v4);
  }
  return 1;
}


//======================================================================
// ClientMob::interact(ClientPlayer *)
// address: 0x0029E2FC   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall ClientMob::interact(ClientMob *this, ClientPlayer *a2)
{
  int CurToolID; // r0
  _DWORD *v5; // r7
  BackPack *BackPack; // r4
  int CurShortcut; // r0
  unsigned __int8 v9; // [sp+13h] [bp-109h] BYREF
  char s[256]; // [sp+14h] [bp-108h] BYREF

  v9 = 0;
  CurToolID = ClientPlayer::getCurToolID(a2);
  if ( ClientMob::isBreedItem(this, CurToolID) == 0
    || *((_DWORD *)this + 49) != 0
    || (v5 = (_DWORD *)((char *)this + 144), *((int *)this + 36) > 0) )
  {
    j_snprintf(s, 0x100u, "F%d_Interact", **((_DWORD **)this + 48));
    Ogre::ScriptVM::callFunction(
      *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
      s,
      "u[ClientMob]u[ClientPlayer]>b",
      this,
      a2,
      &v9);
  }
  else
  {
    BackPack = (BackPack *)ClientPlayer::getBackPack(a2);
    CurShortcut = ClientPlayer::getCurShortcut(a2);
    BackPack::removeItem(BackPack, CurShortcut + 1000, 1);
    *v5 = 600;
    return 1;
  }
  return v9;
}


//======================================================================
// ClientMob::setBreedingItem(int,int)
// address: 0x0029E3C4   size: 0x70 (112 bytes)
//======================================================================
__int64 __fastcall ClientMob::setBreedingItem(__int64 this, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r6
  _DWORD *v4; // r2
  _BOOL4 v5; // r7
  _QWORD *v6; // r0
  _QWORD *v7; // r4

  v2 = (_DWORD *)dword_51331C;
  v3 = &unk_513318;
  while ( v2 != nullptr )
  {
    if ( (int)this >= v2[4] )
      v4 = (_DWORD *)v2[3];
    else
      v4 = (_DWORD *)v2[2];
    v3 = v2;
    v2 = v4;
  }
  v5 = v3 == (_DWORD *)&unk_513318 || (int)this < v3[4];
  v6 = (_QWORD *)operator new(0x18u);
  v7 = v6;
  if ( v6 != nullptr )
  {
    j_memset(v6, 0, 0x10u);
    v7[2] = this;
  }
  sub_391E64(v5, v7, v3, &unk_513318);
  ++dword_513328;
  return this;
}


//======================================================================
// ClientMob::setSheared(bool)
// address: 0x0029E440   size: 0x3E (62 bytes)
//======================================================================
int __fastcall ClientMob::setSheared(ClientMob *this, int a2)
{
  int result; // r0
  int v5; // r1
  unsigned int v6; // r2
  ActorBody *v7; // r6
  int v8; // r5
  char Sheared; // r0

  result = ClientMob::getSheared(this);
  if ( a2 != result )
  {
    v5 = *((_DWORD *)this + 57);
    if ( a2 != 0 )
      v6 = v5 | 0x20;
    else
      v6 = v5 & 0xFFFFFFDF;
    *((_DWORD *)this + 57) = v6;
    v7 = *((ActorBody **)this + 16);
    v8 = *((_DWORD *)this + 52);
    Sheared = ClientMob::getSheared(this);
    return ActorBody::setBodyColor(v7, v8, Sheared);
  }
  return result;
}


//======================================================================
// ClientMob::setColor(int)
// address: 0x0029E47E   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall ClientMob::setColor(_DWORD *this, int a2)
{
  _DWORD *v2; // r5
  ActorBody *v4; // r6
  char Sheared; // r0

  v2 = this + 52;
  if ( *(this + 52) != a2 )
  {
    v4 = (ActorBody *)*(this + 16);
    Sheared = ClientMob::getSheared((ClientMob *)this);
    this = (_DWORD *)ActorBody::setBodyColor(v4, a2, Sheared);
  }
  *v2 = a2;
  return this;
}


//======================================================================
// ClientMob::getEquipIDByIdx(int)
// address: 0x0029E4A0   size: 0xC (12 bytes)
//======================================================================
int __fastcall ClientMob::getEquipIDByIdx(ClientMob *this, int a2)
{
  return (*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 19) + 44))(*((_DWORD *)this + 19), a2);
}


//======================================================================
// ClientMob::setEquipIDByIdx(int,int)
// address: 0x0029E4AC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall ClientMob::setEquipIDByIdx(ClientMob *this, int a2, int a3)
{
  return (*(int (__fastcall **)(_DWORD, int, int, int))(**((_DWORD **)this + 19) + 40))(
           *((_DWORD *)this + 19),
           a2,
           a3,
           -1);
}


//======================================================================
// ClientMob::enchantEquipment(void)
// address: 0x0029E4BC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientMob::enchantEquipment(ClientMob *this)
{
  ;
}


//======================================================================
// ClientMob::setCollarColor(int)
// address: 0x0029E4BE   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall ClientMob::setCollarColor(ClientMob *this, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)((char *)this + 204);
  *result = a2;
  return result;
}


//======================================================================
// ClientMob::init(int)
// address: 0x0029E4FC   size: 0x15E (350 bytes)
//======================================================================
int __fastcall ClientMob::init(ClientMob *this, int a2)
{
  _DWORD *Record; // r0
  int v4; // r5
  ActorBody *v5; // r7
  char v6; // r3
  const char *v7; // r1
  LivingLocoMotion *v8; // r6
  int v9; // r2
  ActorVision *v10; // r6
  MobAttrib *v11; // r6
  NavigationPath *v12; // r5
  char s[256]; // [sp+14h] [bp-108h] BYREF

  Record = DefDataTable<MonsterDef>::GetRecord(Ogre::Singleton<DefManager>::ms_Singleton + 520, a2);
  *((_DWORD *)this + 48) = Record;
  v4 = (int)Record;
  v5 = (ActorBody *)operator new(0x6Cu);
  ActorBody::ActorBody(v5, this);
  *((_DWORD *)this + 16) = v5;
  if ( a2 == 3101 )
  {
    v6 = 1;
    goto LABEL_5;
  }
  v6 = a2 == 3105;
  if ( a2 != 3408 )
  {
LABEL_5:
    v7 = nullptr;
    goto LABEL_6;
  }
  v7 = "entity/110010/male1.png";
LABEL_6:
  ActorBody::initMonster(v5, (const char *)(v4 + 36), *(float *)(v4 + 100), v6, (const char *)(v4 + 466), v7);
  v8 = (LivingLocoMotion *)operator new(0xB8u);
  LivingLocoMotion::LivingLocoMotion(v8, this);
  *((_DWORD *)this + 17) = v8;
  v9 = *(_DWORD *)(v4 + 172);
  *((_DWORD *)v8 + 6) = *(_DWORD *)(v4 + 168);
  *((_DWORD *)v8 + 5) = v9;
  v10 = (ActorVision *)operator new(0x28u);
  ActorVision::ActorVision(v10, this);
  *((_DWORD *)this + 18) = v10;
  v11 = (MobAttrib *)operator new(0x44u);
  MobAttrib::MobAttrib(v11, this);
  MobAttrib::init((int)v11, v4);
  *((_DWORD *)this + 19) = v11;
  *((_BYTE *)this + 188) = *(_DWORD *)(v4 + 104) == 0;
  v12 = (NavigationPath *)operator new(0x28u);
  NavigationPath::NavigationPath(v12, this);
  *((_DWORD *)this + 34) = v12;
  j_snprintf(s, 0x100u, "F%d_Init", **((_DWORD **)this + 48));
  Ogre::ScriptVM::callFunction(
    *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
    s,
    "u[ClientMob]",
    this);
  j_snprintf(s, 0x100u, "F%d_SetAi", **((_DWORD **)this + 48));
  Ogre::ScriptVM::callFunction(
    *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
    s,
    "u[ClientMob]",
    this);
  return 1;
}


//======================================================================
// ClientMob::createFromDef(int)
// address: 0x0029E680   size: 0x38 (56 bytes)
//======================================================================
ActorEnderman *__fastcall ClientMob::createFromDef(ClientMob *this, int a2)
{
  ActorEnderman *v3; // r4

  if ( this == (ClientMob *)((char *)&stru_DA8.st_value + 1) )
  {
    v3 = (ActorEnderman *)operator new(0x100u);
    ActorEnderman::ActorEnderman(v3);
  }
  else
  {
    v3 = (ActorEnderman *)operator new(0xE8u);
    ClientMob::ClientMob(v3);
  }
  return ClientMob::init(v3, (int)this) != 0 ? v3 : nullptr;
}


//======================================================================
// ClientMob::mobAdult(void)
// address: 0x0029E6C8   size: 0x72 (114 bytes)
//======================================================================
char *__fastcall ClientMob::mobAdult(ClientMob *this)
{
  int v2; // r6
  _DWORD *Record; // r5
  int v4; // r3
  int v5; // r1
  int v6; // r0
  int v7; // r7
  char *v9; // [sp+0h] [bp-Ch]

  v2 = *((_DWORD *)this + 13);
  (*(void (__fastcall **)(ClientMob *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
  Record = DefDataTable<MonsterDef>::GetRecord(Ogre::Singleton<DefManager>::ms_Singleton + 520, *((_DWORD *)this + 50));
  *((_DWORD *)this + 50) = **((_DWORD **)this + 48);
  *((_DWORD *)this + 48) = Record;
  ActorBody::initMonster(
    *((ActorBody **)this + 16),
    (const char *)Record + 36,
    *((float *)Record + 25),
    false,
    nullptr,
    nullptr);
  v4 = *((_DWORD *)this + 17);
  v5 = Record[43];
  *(_DWORD *)(v4 + 24) = Record[42];
  *(_DWORD *)(v4 + 20) = v5;
  v6 = *((_DWORD *)this + 19);
  v7 = *(_DWORD *)(v6 + 8);
  MobAttrib::init(v6, (int)Record);
  *(_DWORD *)(*((_DWORD *)this + 19) + 8) = v7;
  (*(void (__fastcall **)(ClientMob *, int))(*(_DWORD *)this + 8))(this, v2);
  return v9;
}


//======================================================================
// ClientMob::mobTamed(int)
// address: 0x0029E740   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall ClientMob::mobTamed(ClientMob *this, int a2)
{
  _DWORD *Record; // r5
  ActorBody *v5; // r0
  float v6; // r2
  const char *v7; // r1
  int v8; // r3
  int v9; // r1
  int result; // r0
  int v11; // [sp+Ch] [bp-8h]

  v11 = *((_DWORD *)this + 13);
  (*(void (__fastcall **)(ClientMob *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
  ClientActor::setTamedOwnerUin(this, a2, false);
  Record = DefDataTable<MonsterDef>::GetRecord(Ogre::Singleton<DefManager>::ms_Singleton + 520, *((_DWORD *)this + 32));
  *((_DWORD *)this + 48) = Record;
  v5 = *((ActorBody **)this + 16);
  v6 = *((float *)Record + 25);
  v7 = (const char *)(Record + 9);
  if ( *Record == 3408 )
    ActorBody::initMonster(v5, v7, v6, false, nullptr, "entity/110010/male1.png");
  else
    ActorBody::initMonster(v5, v7, v6, false, nullptr, nullptr);
  v8 = *((_DWORD *)this + 17);
  v9 = Record[43];
  *(_DWORD *)(v8 + 24) = Record[42];
  *(_DWORD *)(v8 + 20) = v9;
  MobAttrib::init(*((_DWORD *)this + 19), (int)Record);
  (*(void (__fastcall **)(ClientMob *, int))(*(_DWORD *)this + 8))(this, v11);
  *((_BYTE *)this + 122) = 1;
  ClientMob::playTameEffect(this, 1);
  result = g_pPlayerCtrl;
  if ( g_pPlayerCtrl != 0 )
    return (*(int (__fastcall **)(int, int, int, _DWORD, int))(*(_DWORD *)g_pPlayerCtrl + 208))(
             g_pPlayerCtrl,
             1,
             9,
             **((_DWORD **)this + 48),
             1);
  return result;
}


//======================================================================
// ClientMob::pickUpLoot(void)
// address: 0x0029E90C   size: 0xF4 (244 bytes)
//======================================================================
void **__fastcall ClientMob::pickUpLoot(ActorLocoMotion **this)
{
  unsigned int i; // r4
  int v3; // r5
  int v4; // r0
  int v5; // r6
  __int16 *v6; // r0
  int v7; // r2
  int v8; // r1
  char v9; // r3
  __int16 *ToolDef; // [sp+4h] [bp-38h]
  int ItemArmorPosition; // [sp+Ch] [bp-30h]
  _DWORD *v13; // [sp+14h] [bp-28h] BYREF
  int v14; // [sp+18h] [bp-24h]
  int v15; // [sp+1Ch] [bp-20h]
  _DWORD v16[7]; // [sp+20h] [bp-1Ch] BYREF

  ActorLocoMotion::getCollideBox(*(this + 17), (CollideAABB *)v16);
  CollideAABB::expand(v16, 100, 0, 100);
  v13 = nullptr;
  v14 = 0;
  v15 = 0;
  World::getActorsOfTypeInBox(*(this + 13), &v13, v16, 2);
  for ( i = 0; i < (v14 - (int)v13) >> 2; ++i )
  {
    v3 = v13[i];
    ItemArmorPosition = ClientItem::getItemArmorPosition((ClientItem *)v3);
    if ( ItemArmorPosition != 6 )
    {
      v4 = (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)*(this + 19) + 56))(*(this + 19), ItemArmorPosition);
      v5 = v4;
      if ( v4 == 0 || *(_DWORD *)(v4 + 4) == 0 )
        goto LABEL_5;
      ToolDef = (__int16 *)DefManager::getToolDef(
                             (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                             **(_DWORD **)(v3 + 176));
      v6 = (__int16 *)DefManager::getToolDef(
                        (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                        **(_DWORD **)(v5 + 4));
      if ( ItemArmorPosition == 5 )
      {
        v7 = v6[25];
        v8 = ToolDef[25];
      }
      else
      {
        v8 = ToolDef[26] + ToolDef[27] + ToolDef[28];
        v7 = v6[26] + v6[27] + v6[28];
      }
      v9 = 1;
      if ( v8 == v7 )
      {
        v8 = *(_DWORD *)(v3 + 184);
        v7 = *(_DWORD *)(v5 + 12);
      }
      if ( v8 <= v7 )
        v9 = 0;
      if ( v9 != 0 )
LABEL_5:
        ClientMob::pickItem((ClientMob *)this, (ClientItem *)v3);
    }
  }
  return std::_Vector_base<ClientActor *>::~_Vector_base((void **)&v13);
}


//======================================================================
// ClientMob::getNearbyMate(void)
// address: 0x0029EA10   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall ClientMob::getNearbyMate(ActorLocoMotion **this)
{
  int v2; // r0
  _DWORD *v3; // r3
  unsigned int v4; // r5
  int v5; // r4
  _DWORD *v6; // r3
  int v7; // r1
  int v8; // r0
  int v9; // r3
  float v10; // r7
  float v12; // [sp+4h] [bp-48h]
  int v13; // [sp+8h] [bp-44h]
  int v14; // [sp+Ch] [bp-40h]
  int v15; // [sp+10h] [bp-3Ch]
  int v16; // [sp+14h] [bp-38h]
  _DWORD *v17; // [sp+18h] [bp-34h] BYREF
  int v18; // [sp+1Ch] [bp-30h]
  int v19; // [sp+20h] [bp-2Ch]
  _DWORD v20[3]; // [sp+24h] [bp-28h] BYREF
  _DWORD v21[7]; // [sp+30h] [bp-1Ch] BYREF

  ActorLocoMotion::getCollideBox(*(this + 17), (CollideAABB *)v21);
  CollideAABB::expand(v21, 800, 800, 800);
  v18 = 0;
  v19 = 0;
  v2 = (int)*(this + 13);
  v17 = nullptr;
  World::getActorsOfTypeInBox(v2, &v17, v21, 0);
  v3 = *(this + 17);
  v4 = 0;
  v13 = 0;
  v15 = v3[8];
  v14 = v3[9];
  v16 = v3[10];
  v12 = 100000000.0;
  while ( v4 < (v18 - (int)v17) >> 2 )
  {
    v5 = v17[v4];
    if ( (ActorLocoMotion **)v5 != this && **(_DWORD **)(v5 + 192) == *(_DWORD *)*(this + 48) && *(int *)(v5 + 144) > 0 )
    {
      v6 = *(_DWORD **)(v5 + 68);
      v7 = v6[9] - v14;
      v8 = v6[10];
      v9 = v6[8];
      v20[1] = v7;
      v20[0] = v9 - v15;
      v20[2] = v8 - v16;
      v10 = WCoord::length((WCoord *)v20);
      if ( v10 >= v12 )
      {
        v5 = v13;
        v10 = v12;
      }
      v13 = v5;
      v12 = v10;
    }
    ++v4;
  }
  std::_Vector_base<ClientActor *>::~_Vector_base((void **)&v17);
  return v13;
}


//======================================================================
// ClientMob::selectNearMob(int,int,int)
// address: 0x0029EADC   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall ClientMob::selectNearMob(ActorLocoMotion **this, int a2, int a3, int a4)
{
  int v6; // r0
  unsigned int v7; // r7
  int v8; // r5
  _DWORD *v9; // r3
  int v10; // r12
  int v11; // r2
  float v13; // [sp+4h] [bp-3Ch]
  float v14; // [sp+8h] [bp-38h]
  int v15; // [sp+Ch] [bp-34h]
  _DWORD *v18; // [sp+1Ch] [bp-24h] BYREF
  int v19; // [sp+20h] [bp-20h]
  int v20; // [sp+24h] [bp-1Ch]
  _DWORD v21[3]; // [sp+28h] [bp-18h] BYREF
  _DWORD v22[3]; // [sp+34h] [bp-Ch] BYREF
  _DWORD v23[7]; // [sp+40h] [bp+0h] BYREF

  ActorLocoMotion::getCollideBox(*(this + 17), (CollideAABB *)v23);
  CollideAABB::expand(v23, a4, a4 / 2, a4);
  v19 = 0;
  v20 = 0;
  v6 = (int)*(this + 13);
  v18 = nullptr;
  World::getActorsOfTypeInBox(v6, &v18, v23, 0);
  ClientActor::getPosition((ClientActor *)v21);
  v7 = 0;
  v15 = 0;
  v14 = 100000000.0;
  while ( v7 < (v19 - (int)v18) >> 2 )
  {
    v8 = v18[v7];
    if ( (ActorLocoMotion **)v8 != this && (**(_DWORD **)(v8 + 192) == a2 || a3 != 0 && *(_DWORD *)(v8 + 200) == a2) )
    {
      v9 = *(_DWORD **)(v8 + 68);
      v10 = v9[9] - v21[1];
      v11 = v9[10] - v21[2];
      v22[0] = v9[8] - v21[0];
      v22[1] = v10;
      v22[2] = v11;
      v13 = WCoord::length((WCoord *)v22);
      if ( v13 < (float)a4 && v13 < v14 )
      {
        v15 = v8;
        v14 = v13;
      }
    }
    ++v7;
  }
  std::_Vector_base<ClientActor *>::~_Vector_base((void **)&v18);
  return v15;
}


//======================================================================
// ClientMob::initBreedItem(void)
// address: 0x0029EBE0   size: 0x58 (88 bytes)
//======================================================================
int __fastcall ClientMob::initBreedItem(ClientMob *this)
{
  char v2[256]; // [sp+4h] [bp-108h] BYREF

  std::_Rb_tree<int,std::pair<int const,int>,std::_Select1st<std::pair<int const,int>>,std::less<int>,std::allocator<std::pair<int const,int>>>::_M_erase(
    (int)&g_BreedingItemMap,
    (_DWORD *)dword_51331C);
  dword_513320 = (int)&unk_513318;
  dword_51331C = 0;
  dword_513324 = (int)&unk_513318;
  dword_513328 = 0;
  j_strcpy(v2, "InitBreedingItem");
  return Ogre::ScriptVM::callFunction(
           *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
           v2,
           (const char *)&unk_3FB8EA);
}


//======================================================================
// ClientMob::saveMob(flatbuffers::FlatBufferBuilder &)
// address: 0x0029ED74   size: 0x1D8 (472 bytes)
//======================================================================
int __fastcall ClientMob::saveMob(ClientMob *this, const void **a2)
{
  unsigned int v2; // r0
  int v3; // r4
  unsigned int v4; // r7
  size_t v5; // r7
  char *v6; // r6
  unsigned int i; // r5
  int v8; // r3
  int *v9; // r3
  __int16 v10; // r0
  float v11; // r2
  int v12; // r3
  unsigned int *v13; // r3
  const unsigned __int8 *v14; // r6
  unsigned int v15; // r7
  int v16; // r4
  unsigned int v17; // r7
  size_t v18; // r7
  char *v19; // r5
  unsigned int j; // r5
  int v21; // r3
  float v22; // r6
  unsigned int *v23; // r3
  const unsigned __int8 *v24; // r7
  int v25; // r4
  unsigned int v26; // r4
  int v28; // [sp+1Ch] [bp-30h]
  unsigned int v29; // [sp+1Ch] [bp-30h]
  unsigned int v32; // [sp+2Ch] [bp-20h]
  unsigned int v33; // [sp+34h] [bp-18h] BYREF
  float v34; // [sp+38h] [bp-14h]
  void *v35; // [sp+3Ch] [bp-10h] BYREF
  unsigned int *v36; // [sp+40h] [bp-Ch]
  char *v37; // [sp+44h] [bp-8h]

  v2 = ClientActor::saveActorCommon(this, (flatbuffers::FlatBufferBuilder *)a2);
  v3 = *((_DWORD *)this + 19);
  v35 = nullptr;
  v36 = nullptr;
  v37 = nullptr;
  v32 = v2;
  v4 = (*(_DWORD *)(v3 + 40) - *(_DWORD *)(v3 + 36)) >> 4;
  if ( v4 > 0x1FFFFFFF )
    sub_3BD058("vector::reserve");
  if ( v4 != 0 )
  {
    v5 = 8 * v4;
    v6 = (char *)operator new(v5);
    sub_29DEA0(v35);
    v35 = v6;
    v36 = (unsigned int *)v6;
    v37 = &v6[v5];
  }
  for ( i = 0; ; ++i )
  {
    v8 = *(_DWORD *)(v3 + 36);
    if ( i >= (*(_DWORD *)(v3 + 40) - v8) >> 4 )
      break;
    v9 = (int *)(v8 + 16 * i);
    v10 = *((_WORD *)v9 + 2);
    v11 = *((float *)v9 + 2);
    v12 = *v9;
    HIWORD(v33) = v10;
    LOWORD(v33) = v12;
    v34 = v11;
    v13 = v36;
    if ( v36 == (unsigned int *)v37 )
    {
      std::vector<FBSave::ActorBuff>::_M_emplace_back_aux<FBSave::ActorBuff>((int *)&v35, &v33);
    }
    else
    {
      if ( v36 != nullptr )
      {
        *v36 = v33;
        *((float *)v13 + 1) = v34;
      }
      v36 += 2;
    }
  }
  v14 = (const unsigned __int8 *)v35;
  v15 = 8 * (((char *)v36 - (_BYTE *)v35) >> 3);
  v28 = ((char *)v36 - (_BYTE *)v35) >> 3;
  flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)a2, v15, 4u);
  flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)a2, v15, 4u);
  flatbuffers::vector_downward::push(a2 + 1, v14, v15);
  v29 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a2, v28);
  sub_29DEA0(v35);
  v35 = nullptr;
  v16 = *((_DWORD *)this + 19);
  v36 = nullptr;
  v37 = nullptr;
  v17 = (*(_DWORD *)(v16 + 52) - *(_DWORD *)(v16 + 48)) >> 2;
  if ( v17 > 0x1FFFFFFF )
    sub_3BD058("vector::reserve");
  if ( v17 != 0 )
  {
    v18 = 8 * v17;
    v19 = (char *)operator new(v18);
    sub_29DEAC(v35);
    v35 = v19;
    v36 = (unsigned int *)v19;
    v37 = &v19[v18];
  }
  for ( j = 0; ; ++j )
  {
    v21 = *(_DWORD *)(v16 + 48);
    if ( j >= (*(_DWORD *)(v16 + 52) - v21) >> 2 )
      break;
    v22 = *(float *)(4 * j + v21);
    if ( v22 != 0.0 )
    {
      v23 = v36;
      v33 = j;
      v34 = v22;
      if ( v36 == (unsigned int *)v37 )
      {
        std::vector<FBSave::AttribMod>::_M_emplace_back_aux<FBSave::AttribMod>((int *)&v35, &v33);
      }
      else
      {
        if ( v36 != nullptr )
        {
          *v36 = j;
          *((float *)v23 + 1) = v34;
        }
        v36 += 2;
      }
    }
  }
  v24 = (const unsigned __int8 *)v35;
  v25 = ((char *)v36 - (_BYTE *)v35) >> 3;
  flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)a2, 8 * v25, 4u);
  flatbuffers::FlatBufferBuilder::PreAlign((flatbuffers::FlatBufferBuilder *)a2, 8 * v25, 4u);
  flatbuffers::vector_downward::push(a2 + 1, v24, 8 * v25);
  v26 = flatbuffers::FlatBufferBuilder::PushElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a2, v25);
  sub_29DEAC(v35);
  return FBSave::CreateActorMob(
           a2,
           v32,
           **((_DWORD **)this + 48),
           *(float *)(*((_DWORD *)this + 19) + 8),
           *((_DWORD *)this + 31),
           *((_DWORD *)this + 52),
           v29,
           v26);
}


//======================================================================
// ClientMob::save(flatbuffers::FlatBufferBuilder &)
// address: 0x0029EF58   size: 0x66 (102 bytes)
//======================================================================
int __fastcall ClientMob::save(ClientMob *this, const void **a2)
{
  unsigned int v3; // r6
  unsigned int v4; // r0
  unsigned int v5; // r0
  __int16 v7; // [sp+4h] [bp-10h]
  unsigned __int8 v8[5]; // [sp+Fh] [bp-5h] BYREF

  v3 = ClientMob::saveMob(this, a2);
  v7 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a2 + 1));
  if ( v3 != 0 )
  {
    v4 = flatbuffers::FlatBufferBuilder::ReferTo((flatbuffers::FlatBufferBuilder *)a2, v3);
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a2, 6u, v4, 0);
  }
  v8[0] = 1;
  flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a2, 1u);
  flatbuffers::vector_downward::push(a2 + 1, v8, 1u);
  v5 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a2 + 1));
  flatbuffers::FlatBufferBuilder::TrackField((flatbuffers::FlatBufferBuilder *)a2, 4u, v5);
  return flatbuffers::FlatBufferBuilder::EndTable((char **)a2, v7, 2);
}


//======================================================================
// ClientMob::load(void const*)
// address: 0x0029EFC0   size: 0x13C (316 bytes)
//======================================================================
int __fastcall ClientMob::load(ClientMob *this, flatbuffers::Table *a2)
{
  int OptionalFieldOffset; // r0
  int v5; // r1
  int v6; // r0
  flatbuffers::Table *v7; // r1
  int v8; // r0
  int v9; // r3
  int v10; // r0
  int v11; // r3
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r6
  unsigned int v16; // r3
  int v17; // r2
  unsigned int v18; // r1
  __int64 v19; // r0
  int v20; // r1
  int *v21; // r7
  int v22; // r2
  unsigned int *v23; // r0
  int v24; // r5
  _DWORD *v25; // r4
  _DWORD *v26; // r3
  unsigned int v27; // r2
  int v28; // r1
  int v29; // r4
  unsigned __int16 *v31; // [sp+8h] [bp-14h]
  unsigned int v32; // [sp+Ch] [bp-10h]
  unsigned int *v33; // [sp+10h] [bp-Ch]
  int v34; // [sp+14h] [bp-8h]

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
  v5 = 0;
  if ( OptionalFieldOffset != 0 )
    v5 = *(_DWORD *)((char *)a2 + OptionalFieldOffset);
  v34 = ClientMob::init(this, v5);
  if ( v34 != 0 )
  {
    v6 = flatbuffers::Table::GetOptionalFieldOffset(a2, 4u);
    if ( v6 != 0 )
      v7 = (flatbuffers::Table *)((char *)a2 + v6 + *(_DWORD *)((char *)a2 + v6));
    else
      v7 = nullptr;
    ClientActor::loadActorCommon((int)this, v7);
    v8 = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
    v9 = 0;
    if ( v8 != 0 )
      v9 = *(_DWORD *)((char *)a2 + v8);
    *(_DWORD *)(*((_DWORD *)this + 19) + 8) = v9;
    v10 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xAu);
    v11 = 0;
    if ( v10 != 0 )
      v11 = *(_DWORD *)((char *)a2 + v10);
    *((_DWORD *)this + 31) = v11;
    v12 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xCu);
    v13 = 0;
    if ( v12 != 0 )
      v13 = *(_DWORD *)((char *)a2 + v12);
    ClientMob::setColor(this, v13);
    v14 = flatbuffers::Table::GetOptionalFieldOffset(a2, 0xEu);
    v15 = *((_DWORD *)this + 19);
    if ( v14 != 0 )
      v33 = (unsigned int *)((char *)a2 + v14 + *(_DWORD *)((char *)a2 + v14));
    else
      v33 = nullptr;
    v16 = *v33;
    v17 = *(_DWORD *)(v15 + 36);
    v18 = (*(_DWORD *)(v15 + 40) - v17) >> 4;
    if ( *v33 <= v18 )
    {
      if ( v16 < v18 )
        *(_DWORD *)(v15 + 40) = v17 + 16 * v16;
    }
    else
    {
      HIDWORD(v19) = v16 - v18;
      LODWORD(v19) = v15 + 36;
      std::vector<ActorBuff>::_M_default_append(v19);
    }
    v32 = 0;
    v31 = (unsigned __int16 *)(v33 + 1);
    while ( v32 < *v33 )
    {
      v20 = *v31;
      v21 = (int *)(*(_DWORD *)(v15 + 36) + 16 * v32);
      *v21 = v20;
      v22 = v31[1];
      v21[1] = v22;
      v21[2] = *((_DWORD *)v31 + 1);
      v21[3] = DefManager::getBuffDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v20, v22);
      ++v32;
      v31 += 4;
    }
    v23 = (unsigned int *)flatbuffers::Table::GetOptionalFieldOffset(a2, 0x10u);
    v24 = *((_DWORD *)this + 19);
    v25 = (unsigned int *)((char *)v23 + (_DWORD)a2);
    if ( v23 != nullptr )
      v23 = (_DWORD *)((char *)v25 + *v25);
    v26 = v23 + 1;
    v27 = 0;
    while ( v27 < *v23 )
    {
      ++v27;
      v28 = 4 * *v26;
      v29 = v26[1];
      v26 += 2;
      *(_DWORD *)(v28 + *(_DWORD *)(v24 + 48)) = v29;
    }
  }
  return v34;
}


//======================================================================
// ClientMob::enterWorld(World *)
// address: 0x0029F100   size: 0x1C (28 bytes)
//======================================================================
int __fastcall ClientMob::enterWorld(ClientMob *this, ClientActorMgr **a2)
{
  char *v2; // r4

  v2 = (char *)this + 192;
  ClientActor::enterWorld(this, (World *)a2);
  return ClientActorMgr::addMobSpawnNum(a2[33], *(_DWORD *)(*(_DWORD *)v2 + 104), 1);
}


//======================================================================
// ClientMob::leaveWorld(bool)
// address: 0x0029F11C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ClientMob::leaveWorld(ClientMob *this, bool a2)
{
  ClientActorMgr::addMobSpawnNum(
    *(ClientActorMgr **)(*((_DWORD *)this + 13) + 132),
    *(_DWORD *)(*((_DWORD *)this + 48) + 104),
    -1);
  return ActorLiving::leaveWorld(this, a2);
}


//======================================================================
// ClientMob::tick(void)
// address: 0x0029F144   size: 0x174 (372 bytes)
//======================================================================
unsigned int __fastcall ClientMob::tick(ActorLocoMotion **this)
{
  int *v2; // r5
  int v3; // r3
  int v4; // r3
  int *v5; // r3
  int v6; // r0
  signed int v7; // r0
  _DWORD *v8; // r3
  signed int v9; // r2
  int v10; // r5
  int v11; // r1
  const char *v12; // r5
  int *v13; // r5
  ClientActorMgr *v14; // r7
  int v15; // r6
  unsigned int result; // r0
  ClientActor *v17; // r0
  _BYTE v18[16]; // [sp+4h] [bp-10h] BYREF

  v2 = (int *)(this + 49);
  ActorLiving::tick((ActorLiving *)this);
  v3 = *v2;
  if ( *v2 <= 0 )
  {
    if ( v3 != 0 )
    {
      v4 = v3 + 1;
      *v2 = v4;
      if ( v4 == 0 )
        ClientMob::mobAdult((ClientMob *)this);
    }
  }
  else
  {
    *v2 = v3 - 1;
  }
  v5 = (int *)(this + 36);
  if ( *v2 != 0 )
    *v5 = 0;
  if ( *v5 > 0 )
  {
    v6 = *v5 - 1;
    *v5 = v6;
    if ( v6 % 10 == 0 )
      ClientActor::playParticles((ClientActor *)this, "1004.ent");
  }
  if ( ClientActor::isDead((ClientActor *)this) == 0 && (int)*(this + 6) < 0 && *((_BYTE *)this + 212) != 0 )
    (*((void (__fastcall **)(ActorLocoMotion **))*this + 52))(this);
  if ( ClientActor::isDead((ClientActor *)this) == 0 && (int)*(this + 6) < 0 )
  {
    v7 = GenRandomInt(0xBB8u);
    v8 = this + 56;
    v9 = (signed int)*(this + 56);
    if ( v7 < v9 )
    {
      *v8 = v9 - 359;
      (*((void (__fastcall **)(ActorLocoMotion **))*this + 50))(this);
    }
    else
    {
      *v8 = v9 + 1;
    }
  }
  v10 = (int)*(this + 48);
  v11 = *(_DWORD *)(v10 + 112);
  if ( v11 > 0 )
  {
    v12 = (const char *)(v10 + 116);
    if ( *v12 != 0 && (int)*(this + 1) % v11 == 0 )
      Ogre::ScriptVM::callFunction(
        *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
        v12,
        "u[ClientMob]",
        this);
  }
  v13 = (int *)(this + 55);
  *(this + 55) = (ActorLocoMotion *)((char *)*(this + 55) + 1);
  if ( COERCE_FLOAT(ActorLocoMotion::getBrightness(*(this + 17))) > 0.5 )
    *v13 += 2;
  v14 = *((ClientActorMgr **)*(this + 13) + 33);
  ClientActor::getPosition((ClientActor *)v18);
  v15 = ClientActorMgr::minDistToPlayer(v14, (const WCoord *)v18, nullptr, false) / 100;
  result = (*((int (__fastcall **)(ActorLocoMotion **))*this + 51))(this);
  if ( result == 0 )
    goto LABEL_31;
  if ( v15 <= 127 )
  {
    if ( v15 <= 31 )
    {
LABEL_32:
      *v13 = 0;
      return result;
    }
    if ( *v13 > 600 )
    {
      result = GenRandomInt(0x320u);
      if ( result == 0 )
      {
        v17 = (ClientActor *)this;
        return ClientActor::setNeedClear(v17, 0);
      }
    }
LABEL_31:
    if ( v15 > 31 )
      return result;
    goto LABEL_32;
  }
  v17 = (ClientActor *)this;
  return ClientActor::setNeedClear(v17, 0);
}


//======================================================================
// ClientMob::playHurtSound(void)
// address: 0x0029F2C8   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ClientMob::playHurtSound(ClientMob *this)
{
  int v1; // r5
  float v3; // r6
  float v4; // r0

  v1 = *((_DWORD *)this + 48);
  if ( *(_BYTE *)(v1 + 338) == 0 )
    return ActorLiving::playHurtSound(this);
  v3 = COERCE_FLOAT((*(int (__fastcall **)(ClientMob *))(*(_DWORD *)this + 184))(this));
  v4 = (*(float (__fastcall **)(ClientMob *))(*(_DWORD *)this + 188))(this);
  return ClientActor::playSound(this, (const char *)(v1 + 338), v3, v4);
}


//======================================================================
// ClientMob::playDeathSound(void)
// address: 0x0029F308   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ClientMob::playDeathSound(ClientMob *this)
{
  int v1; // r5
  float v3; // r6
  float v4; // r0

  v1 = *((_DWORD *)this + 48);
  if ( *(_BYTE *)(v1 + 370) == 0 )
    return ActorLiving::playDeathSound(this);
  v3 = COERCE_FLOAT((*(int (__fastcall **)(ClientMob *))(*(_DWORD *)this + 184))(this));
  v4 = (*(float (__fastcall **)(ClientMob *))(*(_DWORD *)this + 188))(this);
  return ClientActor::playSound(this, (const char *)(v1 + 370), v3, v4);
}


//======================================================================
// ClientMob::playStepSound(void)
// address: 0x0029F348   size: 0x40 (64 bytes)
//======================================================================
int __fastcall ClientMob::playStepSound(ClientMob *this)
{
  int v1; // r5
  float v3; // r6
  float v4; // r0

  v1 = *((_DWORD *)this + 48);
  if ( *(_BYTE *)(v1 + 434) == 0 )
    return ActorLiving::playStepSound(this);
  v3 = COERCE_FLOAT((*(int (__fastcall **)(ClientMob *))(*(_DWORD *)this + 184))(this));
  v4 = (*(float (__fastcall **)(ClientMob *))(*(_DWORD *)this + 188))(this);
  return ClientActor::playSound(this, (const char *)(v1 + 434), v3, v4);
}


//======================================================================
// ClientMob::getVerticalFaceSpeed(void)
// address: 0x0029F388   size: 0x34 (52 bytes)
//======================================================================
int __fastcall ClientMob::getVerticalFaceSpeed(ClientMob *this)
{
  int v1; // r2
  int v2; // r3

  v1 = **((_DWORD **)this + 48);
  v2 = 0;
  if ( (unsigned int)(v1 - 3117) > 2 )
  {
    if ( v1 == 3408 && *((_BYTE *)this + 121) != 0 )
      return 20;
    else
      return ClientActor::getVerticalFaceSpeed(this);
  }
  return v2;
}


//======================================================================
// ClientMob::attackedFrom(OneAttackData &,ClientActor *)
// address: 0x0029F3C0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall ClientMob::attackedFrom(int a1)
{
  int result; // r0

  result = ActorLiving::attackedFrom();
  if ( result != 0 )
  {
    *(_BYTE *)(a1 + 122) = 0;
    *(_DWORD *)(a1 + 144) = 0;
  }
  return result;
}

