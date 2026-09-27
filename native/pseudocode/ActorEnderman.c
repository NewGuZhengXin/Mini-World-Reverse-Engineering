// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorEnderman

//======================================================================
// ActorEnderman::~ActorEnderman()
// address: 0x002D93B4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13ActorEndermanD1Ev'
void __fastcall ActorEnderman::~ActorEnderman(ActorEnderman *this)
{
  *(_DWORD *)this = &off_460E90;
  ClientMob::~ClientMob(this);
}


//======================================================================
// ActorEnderman::~ActorEnderman()
// address: 0x002D93D0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorEnderman::~ActorEnderman(ActorEnderman *this)
{
  ActorEnderman::~ActorEnderman(this);
  operator delete(this);
}


//======================================================================
// ActorEnderman::init(int)
// address: 0x002D93E2   size: 0x8 (8 bytes)
//======================================================================
int __fastcall ActorEnderman::init(ActorEnderman *this, int a2)
{
  return ClientMob::init(this, a2);
}


//======================================================================
// ActorEnderman::ActorEnderman(void)
// address: 0x002D93EC   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN13ActorEndermanC2Ev'
void __fastcall ActorEnderman::ActorEnderman(ActorEnderman *this)
{
  ClientMob::ClientMob(this);
  *(_DWORD *)this = &off_460E90;
  *((_DWORD *)this + 58) = 0;
  *((_BYTE *)this + 236) = 0;
  *((_BYTE *)this + 237) = 0;
  *((_DWORD *)this + 60) = 0;
  *((_DWORD *)this + 61) = 0;
  *((_DWORD *)this + 62) = 0;
  *((_DWORD *)this + 63) = 0;
}


//======================================================================
// ActorEnderman::shouldAttackPlayer(ClientPlayer *)
// address: 0x002D941C   size: 0xFC (252 bytes)
//======================================================================
int __fastcall ActorEnderman::shouldAttackPlayer(ActorEnderman *this, ClientPlayer *a2)
{
  int v3; // r2
  int result; // r0
  float v5; // r5
  float v6; // r4
  float v8[3]; // [sp+10h] [bp-34h] BYREF
  float v9; // [sp+1Ch] [bp-28h] BYREF
  float v10; // [sp+20h] [bp-24h]
  float v11; // [sp+24h] [bp-20h]
  _DWORD v12[3]; // [sp+28h] [bp-1Ch] BYREF
  _DWORD v13[4]; // [sp+34h] [bp-10h] BYREF

  v3 = (*(int (__fastcall **)(_DWORD, _DWORD))(**((_DWORD **)a2 + 19) + 44))(*((_DWORD *)a2 + 19), 0);
  result = 0;
  if ( v3 != 9999 )
  {
    ActorLocoMotion::getLookDir((ActorLocoMotion *)v8);
    Ogre::Normalize(v8);
    ClientActor::getPosition((ClientActor *)v12);
    ClientActor::getPosition((ClientActor *)v13);
    v9 = (float)(v12[0] - v13[0]);
    v11 = (float)(v12[2] - v13[2]);
    v10 = (float)(v12[1] - v13[1]);
    v5 = Ogre::Vector3::length((Ogre::Vector3 *)&v9);
    if ( v5 < 0.00001 )
      v5 = 0.00001;
    v9 = v9 / v5;
    v10 = v10 / v5;
    v11 = v11 / v5;
    v6 = (float)((float)(v9 * v8[0]) + (float)(v10 * v8[1])) + (float)(v11 * v8[2]);
    result = v6 > (float)(1.0 - (float)(2.5 / v5));
    if ( v6 > (float)(1.0 - (float)(2.5 / v5)) )
      return ActorLiving::canActorBeSeen(a2, this);
  }
  return result;
}


//======================================================================
// ActorEnderman::findPlayerToAttack(void)
// address: 0x002D9524   size: 0x80 (128 bytes)
//======================================================================
int __fastcall ActorEnderman::findPlayerToAttack(ActorEnderman *this)
{
  ClientActorMgr *v2; // r6
  ClientActor *v3; // r6
  int result; // r0
  _DWORD *v5; // r5
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  v2 = *(ClientActorMgr **)(*((_DWORD *)this + 13) + 132);
  ClientActor::getPosition((ClientActor *)v6);
  v3 = ClientActorMgr::selectNearPlayer(v2, (const WCoord *)v6, 6400);
  if ( v3 == nullptr )
    return 0;
  result = ActorEnderman::shouldAttackPlayer(this, v3);
  v5 = (_DWORD *)((char *)this + 232);
  if ( result != 0 )
  {
    *((_BYTE *)this + 236) = 1;
    if ( *v5 == 0 )
      EffectManager::playSoundAtActor(
        (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
        v3,
        "mob.endermen.stare",
        1.0,
        1.0);
    if ( *v5 != 5 )
    {
      ++*v5;
      return 0;
    }
    *v5 = 0;
    *((_BYTE *)this + 237) = 1;
    return (int)v3;
  }
  else
  {
    *v5 = 0;
  }
  return result;
}


//======================================================================
// ActorEnderman::teleportTo(WCoord const&)
// address: 0x002D95AC   size: 0x142 (322 bytes)
//======================================================================
bool __fastcall ActorEnderman::teleportTo(World **this, const WCoord *a2)
{
  int v3; // r2
  int v4; // r7
  _BOOL4 v5; // r6
  World *v6; // r0
  int BlockID; // r1
  int v8; // r2
  int v9; // r3
  World *v10; // r0
  World *v11; // r0
  int v13; // [sp+10h] [bp-4Ch] BYREF
  int v14; // [sp+14h] [bp-48h]
  int v15; // [sp+18h] [bp-44h]
  int v16; // [sp+1Ch] [bp-40h] BYREF
  int v17; // [sp+20h] [bp-3Ch]
  int v18; // [sp+24h] [bp-38h]
  _DWORD v19[3]; // [sp+28h] [bp-34h] BYREF
  _DWORD v20[3]; // [sp+34h] [bp-28h] BYREF
  int v21; // [sp+40h] [bp-1Ch] BYREF
  int v22; // [sp+44h] [bp-18h]
  int v23; // [sp+48h] [bp-14h]
  int v24; // [sp+4Ch] [bp-10h]
  int v25; // [sp+50h] [bp-Ch]
  int v26; // [sp+54h] [bp-8h]

  v3 = *((_DWORD *)a2 + 1);
  v4 = *((_DWORD *)a2 + 2);
  v13 = *(_DWORD *)a2;
  v14 = v3;
  v15 = v4;
  CoordDivBlock((const WCoord *)&v16, (int *)a2);
  v5 = World::blockExists(*(this + 13), (const WCoord *)&v16);
  if ( v5 )
  {
    while ( v17 > 0 )
    {
      v23 = v18 + dword_516660;
      v6 = *(this + 13);
      v21 = v16 + dword_516658;
      v22 = v17 + dword_51665C;
      BlockID = World::getBlockID(v6, (const WCoord *)&v21, v17 + dword_51665C, v16 + dword_516658);
      if ( BlockID != 0
        && *(_DWORD *)(*(_DWORD *)(BlockMaterialMgr::getMaterial(
                                     (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                     BlockID)
                                 + 36)
                     + 12) == 1 )
      {
        v8 = (int)*(this + 17);
        v9 = *(_DWORD *)(v8 + 20);
        v22 = v14;
        v21 = v13 - v9 / 2;
        v23 = v15 - v9 / 2;
        v10 = *(this + 13);
        v25 = *(_DWORD *)(v8 + 24);
        v24 = v9;
        v26 = v9;
        if ( World::checkNoCollisionBoundBox(v10, (const CollideAABB *)&v21, (ClientActor *)this) != 0 )
        {
          v19[0] = v21;
          v19[1] = v22;
          v19[2] = v23;
          v20[0] = v21 + v24;
          v20[1] = v22 + v25;
          v11 = *(this + 13);
          v20[2] = v23 + v26;
          if ( (unsigned __int8)World::isAnyLiquid(v11, (const WCoord *)v19, (const WCoord *)v20) != 1 )
          {
            ClientActor::getPosition((ClientActor *)&v21);
            (*(void (__fastcall **)(_DWORD, int *, _DWORD, _DWORD))(*(_DWORD *)*(this + 17) + 16))(
              *(this + 17),
              &v13,
              *((_DWORD *)*(this + 17) + 1),
              *((_DWORD *)*(this + 17) + 2));
            EffectManager::playSound(
              (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
              (const WCoord *)&v21,
              "mob.endermen.portal",
              1.0,
              1.0,
              false);
            EffectManager::playSound(
              (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
              (const WCoord *)&v13,
              "mob.endermen.portal",
              1.0,
              1.0,
              false);
            return v5;
          }
        }
        return false;
      }
      --v17;
      v14 -= 100;
    }
  }
  return false;
}


//======================================================================
// ActorEnderman::teleportRandomly(void)
// address: 0x002D9700   size: 0x52 (82 bytes)
//======================================================================
bool __fastcall ActorEnderman::teleportRandomly(World **this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v6; // [sp+4h] [bp-10h] BYREF
  int v7; // [sp+8h] [bp-Ch]
  int v8; // [sp+Ch] [bp-8h]

  ClientActor::getPosition((ClientActor *)&v6);
  v2 = GenRandomInt(-3200, 3200);
  v6 += v2;
  v3 = GenRandomInt(-3200, 3200);
  v8 += v3;
  v4 = GenRandomInt(-32, 32);
  v7 += 100 * v4;
  return ActorEnderman::teleportTo(this, (const WCoord *)&v6);
}


//======================================================================
// ActorEnderman::teleportToActor(ClientActor *)
// address: 0x002D9758   size: 0xE4 (228 bytes)
//======================================================================
bool __fastcall ActorEnderman::teleportToActor(ActorEnderman *this, ClientActor *a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r7
  int v8; // [sp+4h] [bp-48h]
  int v9; // [sp+4h] [bp-48h]
  int v10; // [sp+8h] [bp-44h]
  int v11; // [sp+Ch] [bp-40h]
  int v12; // [sp+10h] [bp-3Ch]
  int v13; // [sp+14h] [bp-38h]
  _DWORD v14[3]; // [sp+18h] [bp-34h] BYREF
  _DWORD v15[3]; // [sp+24h] [bp-28h] BYREF
  float v16; // [sp+30h] [bp-1Ch] BYREF
  float v17; // [sp+34h] [bp-18h]
  float v18; // [sp+38h] [bp-14h]
  _DWORD v19[4]; // [sp+3Ch] [bp-10h] BYREF

  ClientActor::getPosition((ClientActor *)v14);
  ClientActor::getPosition((ClientActor *)v15);
  v8 = v14[0];
  v12 = v14[0] - v15[0];
  v10 = v14[1];
  v13 = v14[1] + *(_DWORD *)(*((_DWORD *)this + 17) + 24) / 2 - v15[1];
  v4 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 124))(a2);
  v11 = v14[2];
  v16 = (float)v12;
  v17 = (float)(v13 + v4);
  v18 = (float)(v14[2] - v15[2]);
  Ogre::Normalize(&v16);
  v9 = v8 + GenRandomInt(-400, 400);
  v19[0] = v9 - (int)(float)(v16 * 1600.0);
  v5 = v11 + GenRandomInt(-400, 400);
  v19[2] = v5 - (int)(float)(v18 * 1600.0);
  v6 = v10 + 100 * GenRandomInt(-8, 8);
  v19[1] = v6 - (int)(float)(v17 * 1600.0);
  return ActorEnderman::teleportTo((World **)this, (const WCoord *)v19);
}


//======================================================================
// ActorEnderman::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002D9844   size: 0x70 (112 bytes)
//======================================================================
int __fastcall ActorEnderman::save(ActorEnderman *this, const void **a2)
{
  int v4; // r0
  int v5; // r7
  int v6; // r5
  int v7; // r0
  int v8; // r0
  int v10; // [sp+0h] [bp-Ch]
  __int16 v11; // [sp+4h] [bp-8h]

  v4 = ClientMob::saveMob(this, a2);
  v5 = *((unsigned __int16 *)this + 126);
  v6 = v4;
  v10 = *((unsigned __int16 *)this + 124);
  v11 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a2 + 1));
  if ( v6 != 0 )
  {
    flatbuffers::FlatBufferBuilder::Align((flatbuffers::FlatBufferBuilder *)a2, 4u);
    v7 = flatbuffers::vector_downward::size((flatbuffers::vector_downward *)(a2 + 1));
    flatbuffers::FlatBufferBuilder::AddElement<unsigned int>((flatbuffers::FlatBufferBuilder *)a2, 4u, 4 - v6 + v7, 0);
  }
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a2, 8u, v5, 0);
  flatbuffers::FlatBufferBuilder::AddElement<unsigned short>((flatbuffers::FlatBufferBuilder *)a2, 6u, v10, 0);
  v8 = flatbuffers::FlatBufferBuilder::EndTable((char **)a2, v11, 3);
  return FBSave::CreateSectionActor(a2, 0xAu, v8);
}


//======================================================================
// ActorEnderman::load(void const*)
// address: 0x002D98B4   size: 0x54 (84 bytes)
//======================================================================
int __fastcall ActorEnderman::load(ActorEnderman *this, flatbuffers::Table *a2)
{
  int OptionalFieldOffset; // r0
  flatbuffers::Table *v5; // r1
  int v6; // r6
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r3

  OptionalFieldOffset = flatbuffers::Table::GetOptionalFieldOffset(a2, 4u);
  if ( OptionalFieldOffset != 0 )
    v5 = (flatbuffers::Table *)((char *)a2 + OptionalFieldOffset + *(_DWORD *)((char *)a2 + OptionalFieldOffset));
  else
    v5 = nullptr;
  v6 = ClientMob::load(this, v5);
  if ( v6 != 0 )
  {
    v7 = flatbuffers::Table::GetOptionalFieldOffset(a2, 6u);
    v8 = 0;
    if ( v7 != 0 )
      v8 = *(unsigned __int16 *)((char *)a2 + v7);
    *((_DWORD *)this + 62) = v8;
    v9 = flatbuffers::Table::GetOptionalFieldOffset(a2, 8u);
    v10 = 0;
    if ( v9 != 0 )
      v10 = *(unsigned __int16 *)((char *)a2 + v9);
    *((_DWORD *)this + 63) = v10;
  }
  return v6;
}


//======================================================================
// ActorEnderman::tick(void)
// address: 0x002D9908   size: 0x37E (894 bytes)
//======================================================================
unsigned int __fastcall ActorEnderman::tick(ActorEnderman *this)
{
  int v2; // r3
  int *v3; // r6
  int v4; // r0
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int v10; // r3
  int v11; // r2
  World *v12; // r0
  int BlockID; // r1
  int Material; // r0
  _BYTE *v15; // r7
  float v16; // r5
  ClientActor *v17; // r1
  const void *v18; // r0
  ClientActor *v19; // r5
  double v20; // r0
  ClientActor *PlayerToAttack; // r0
  int v23; // r6
  double v24; // r0
  int v25; // r3
  struct __class_type_info *lpstype; // [sp+8h] [bp-24h]
  int v27; // [sp+10h] [bp-1Ch] BYREF
  int v28; // [sp+14h] [bp-18h]
  int v29; // [sp+18h] [bp-14h]
  int v30[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( ClientActor::isWet(this) != 0 )
    ClientActor::attackedFromType(this, 11, 1065353216, v2);
  *((_DWORD *)this + 60) = *((_DWORD *)this + 24);
  if ( *(_BYTE *)(*((_DWORD *)this + 13) + 68) == 0 )
  {
    v3 = (int *)((char *)this + 248);
    if ( *((_DWORD *)this + 62) != 0 )
    {
      if ( GenRandomInt(0x7D0u) == 0 )
      {
        ClientActor::getPosition((ClientActor *)v30);
        CoordDivBlock((const WCoord *)&v27, v30);
        v9 = GenRandomInt(0, 1);
        v10 = v28;
        v28 += v9;
        lpstype = (struct __class_type_info *)World::getBlockID(*((World **)this + 13), (const WCoord *)&v27, v11, v10);
        v30[1] = v28 + dword_51665C;
        v12 = *((World **)this + 13);
        v30[0] = v27 + dword_516658;
        v30[2] = v29 + dword_516660;
        BlockID = World::getBlockID(v12, (const WCoord *)v30, v27, v29 + dword_516660);
        if ( lpstype == nullptr && BlockID > 0 )
        {
          Material = BlockMaterialMgr::getMaterial(
                       (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                       BlockID);
          if ( (*(int (__fastcall **)(int))(*(_DWORD *)Material + 64))(Material) != 0 )
          {
            World::setBlockAll(*((World **)this + 13), (const WCoord *)&v27, *v3, *((_DWORD *)this + 63), 3);
            *v3 = 0;
          }
        }
      }
    }
    else if ( GenRandomInt(0x14u) == 0 )
    {
      ClientActor::getPosition((ClientActor *)v30);
      CoordDivBlock((const WCoord *)&v27, v30);
      v27 += GenRandomInt(-1, 1);
      v28 += GenRandomInt(0, 2);
      v4 = GenRandomInt(-1, 1);
      v5 = v29;
      v29 += v4;
      v7 = World::getBlockID(*((World **)this + 13), (const WCoord *)&v27, v5, v6);
      v8 = 0;
      while ( 1 )
      {
        v8 += 4;
        if ( *(_DWORD *)&aD_4[v8 - 4] == v7 )
          break;
        if ( v8 == 36 )
          goto LABEL_16;
      }
      *v3 = v7;
      *((_DWORD *)this + 63) = World::getBlockData(*((World **)this + 13), (const WCoord *)&v27, (int)"d", v8);
      World::setBlockAll(*((World **)this + 13), (const WCoord *)&v27, 0, 0, 3);
    }
  }
LABEL_16:
  v15 = (char *)this + 237;
  if ( *(_DWORD *)(g_WorldMgr + 56) <= 0x2EE0u && *(_BYTE *)(*((_DWORD *)this + 13) + 68) == 0 )
  {
    v16 = COERCE_FLOAT(ClientActor::getBrightness(this, 1.0));
    if ( v16 > 0.5 && (float)(GenRandomFloat() * 30.0) < (float)((float)(v16 - 0.4) + (float)(v16 - 0.4)) )
    {
      ClientActor::getPosition((ClientActor *)v30);
      CoordDivBlock((const WCoord *)&v27, v30);
      v23 = v28;
      if ( v23 >= (int)World::getTopHeight(*((World **)this + 13), v27, v29) )
      {
        ClientActor::setToAttackTarget(this, nullptr);
        *v15 = 0;
        *((_BYTE *)this + 236) = 0;
        ActorEnderman::teleportRandomly((World **)this);
      }
    }
  }
  if ( ClientActor::isWet(this) != 0 || ClientActor::isBurning(this) != 0 )
  {
    ClientActor::setToAttackTarget(this, nullptr);
    *v15 = 0;
    *((_BYTE *)this + 236) = 0;
    ActorEnderman::teleportRandomly((World **)this);
  }
  if ( *v15 != 0 && *((_BYTE *)this + 236) == 0 && GenRandomInt(0x64u) == 0 )
    *v15 = 0;
  *((_DWORD *)this + 38) = -1;
  v17 = *((ClientActor **)this + 24);
  if ( v17 != nullptr )
    ClientActor::faceActor(this, v17, 100.0, 100.0);
  if ( *(_BYTE *)(*((_DWORD *)this + 13) + 68) == 0 && ClientActor::isDead(this) == 0 )
  {
    v18 = *((const void **)this + 24);
    if ( v18 != nullptr )
    {
      v19 = (ClientActor *)_dynamic_cast(
                             v18,
                             (const struct __class_type_info *)&`typeinfo for'ClientActor,
                             (const struct __class_type_info *)&`typeinfo for'ClientPlayer,
                             0);
      if ( v19 != nullptr && ActorEnderman::shouldAttackPlayer(this, v19) != 0 )
      {
        LODWORD(v20) = ClientActor::getDistanceSqToEntity(v19, this);
        if ( v20 < 160000.0 )
          ActorEnderman::teleportRandomly((World **)this);
        *((_DWORD *)this + 61) = 0;
      }
      else
      {
        LODWORD(v24) = ClientActor::getDistanceSqToEntity(*((ClientActor **)this + 24), this);
        if ( v24 > 2560000.0 )
        {
          v25 = *((_DWORD *)this + 61);
          *((_DWORD *)this + 61) = v25 + 1;
          if ( v25 > 29 && ActorEnderman::teleportToActor(this, *((ClientActor **)this + 24)) )
            *((_DWORD *)this + 61) = 0;
        }
      }
    }
    else
    {
      *v15 = 0;
      *((_DWORD *)this + 61) = 0;
    }
  }
  if ( *((_DWORD *)this + 24) == 0 )
  {
    PlayerToAttack = (ClientActor *)ActorEnderman::findPlayerToAttack(this);
    ClientActor::setToAttackTarget(this, PlayerToAttack);
  }
  return ClientMob::tick((ActorLocoMotion **)this);
}


//======================================================================
// ActorEnderman::playSaySound(void)
// address: 0x002D9C90   size: 0x38 (56 bytes)
//======================================================================
ClientActor *__fastcall ActorEnderman::playSaySound(ActorEnderman *this)
{
  float v2; // r5
  float v3; // r0

  if ( *((_BYTE *)this + 237) == 0 )
    return ClientMob::playSaySound(this);
  v2 = COERCE_FLOAT((*(int (__fastcall **)(ActorEnderman *))(*(_DWORD *)this + 184))(this));
  v3 = (*(float (__fastcall **)(ActorEnderman *))(*(_DWORD *)this + 188))(this);
  return (ClientActor *)ClientActor::playSound(this, "mob.endermen.scream", v2, v3);
}


//======================================================================
// ActorEnderman::attackedFrom(OneAttackData &,ClientActor *)
// address: 0x002D9CCC   size: 0x56 (86 bytes)
//======================================================================
int __fastcall ActorEnderman::attackedFrom(ActorEnderman *this, int a2, void *lpsrc)
{
  int result; // r0
  int i; // r5

  *((_BYTE *)this + 237) = 1;
  if ( lpsrc != nullptr )
  {
    if ( _dynamic_cast(
           lpsrc,
           (const struct __class_type_info *)&`typeinfo for'ClientActor,
           (const struct __class_type_info *)&`typeinfo for'ClientPlayer,
           0) != nullptr )
      *((_BYTE *)this + 236) = 1;
    return ClientMob::attackedFrom((int)this);
  }
  else
  {
    *((_BYTE *)this + 236) = 0;
    for ( i = 64; i != 0; --i )
    {
      result = ActorEnderman::teleportRandomly((World **)this);
      if ( result != 0 )
        break;
    }
  }
  return result;
}

