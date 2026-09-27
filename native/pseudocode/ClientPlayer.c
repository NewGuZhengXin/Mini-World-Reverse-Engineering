// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientPlayer

//======================================================================
// ClientPlayer::getAttackTargetType(void)
// address: 0x002D424C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientPlayer::getAttackTargetType(ClientPlayer *this)
{
  return 0;
}


//======================================================================
// ClientPlayer::getPortalCooldown(void)
// address: 0x002D4250   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientPlayer::getPortalCooldown(ClientPlayer *this)
{
  return 10;
}


//======================================================================
// ClientPlayer::managedByChunk(void)
// address: 0x002D4254   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientPlayer::managedByChunk(ClientPlayer *this)
{
  return 0;
}


//======================================================================
// ClientPlayer::save(flatbuffers::FlatBufferBuilder &)
// address: 0x002FF7A8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientPlayer::save(ClientPlayer *this, flatbuffers::FlatBufferBuilder *a2)
{
  return 0;
}


//======================================================================
// ClientPlayer::load(void const*)
// address: 0x002FF7AC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientPlayer::load(ClientPlayer *this, const void *a2)
{
  return 0;
}


//======================================================================
// ClientPlayer::getObjType(void)
// address: 0x002FF7B0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientPlayer::getObjType(ClientPlayer *this)
{
  return 5;
}


//======================================================================
// ClientPlayer::getEyeHeight(void)
// address: 0x002FF7B4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientPlayer::getEyeHeight(ClientPlayer *this)
{
  return 162;
}


//======================================================================
// ClientPlayer::addAchievement(int,ACHIEVEMENT_TYPE,int,int)
// address: 0x002FF7B8   size: 0x2 (2 bytes)
//======================================================================
void ClientPlayer::addAchievement()
{
  ;
}


//======================================================================
// ClientPlayer::~ClientPlayer()
// address: 0x002FF7BC   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN12ClientPlayerD1Ev'
void __fastcall ClientPlayer::~ClientPlayer(ClientPlayer *this)
{
  void *v2; // r5

  *(_DWORD *)this = &off_462D28;
  v2 = *((void **)this + 48);
  if ( v2 != nullptr )
  {
    ActorBody::~ActorBody(*((ActorBody **)this + 48));
    operator delete(v2);
  }
  ChunkViewer::~ChunkViewer((void **)this + 59);
  sub_3BDF80((char *)this + 188);
  ActorLiving::~ActorLiving(this);
}


//======================================================================
// ClientPlayer::~ClientPlayer()
// address: 0x002FF800   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientPlayer::~ClientPlayer(ClientPlayer *this)
{
  ClientPlayer::~ClientPlayer(this);
  operator delete(this);
}


//======================================================================
// ClientPlayer::init(int,char const*,int)
// address: 0x002FF812   size: 0x5A (90 bytes)
//======================================================================
int __fastcall ClientPlayer::init(ClientPlayer *this, int a2, char *a3, const char *a4)
{
  ActorBody *v6; // r5
  PlayerLocoMotion *v7; // r5
  PlayerAttrib *v8; // r5

  *((_QWORD *)this + 5) = a2;
  sub_3BE508((int)this + 188, a3);
  v6 = (ActorBody *)operator new(0x6Cu);
  ActorBody::ActorBody(v6, this);
  *((_DWORD *)this + 16) = v6;
  ActorBody::initPlayer((Ogre::Model **)v6, a4);
  v7 = (PlayerLocoMotion *)operator new(0xBCu);
  PlayerLocoMotion::PlayerLocoMotion(v7, this);
  *((_DWORD *)this + 17) = v7;
  *((_DWORD *)v7 + 6) = 180;
  *((_DWORD *)v7 + 5) = 60;
  v8 = (PlayerAttrib *)operator new(0x58u);
  PlayerAttrib::PlayerAttrib(v8, this);
  *((_DWORD *)this + 19) = v8;
  return 1;
}


//======================================================================
// ClientPlayer::getPortalTransferTime(void)
// address: 0x002FF87A   size: 0x16 (22 bytes)
//======================================================================
int __fastcall ClientPlayer::getPortalTransferTime(World **this)
{
  return World::isCreativeMode(*(this + 13)) == 0 ? 0x50 : 0;
}


//======================================================================
// ClientPlayer::isInvulnerable(ClientActor *)
// address: 0x002FF890   size: 0x30 (48 bytes)
//======================================================================
int __fastcall ClientPlayer::isInvulnerable(World **this, ClientActor *lpsrc)
{
  int result; // r0

  if ( lpsrc != nullptr
    && _dynamic_cast(
         lpsrc,
         (const struct __class_type_info *)&`typeinfo for'ClientActor,
         (const struct __class_type_info *)&`typeinfo for'ClientPlayer,
         0) != nullptr )
  {
    return 0;
  }
  result = World::isCreativeMode(*(this + 13));
  if ( result == 0 )
    return 0;
  return result;
}


//======================================================================
// ClientPlayer::onDie(void)
// address: 0x002FF8C8   size: 0x26 (38 bytes)
//======================================================================
int __fastcall ClientPlayer::onDie(ActorLocoMotion **this)
{
  ActorLocoMotion::onDie(*(this + 17));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*(this + 19) + 20))(*(this + 19));
  *(this + 50) = nullptr;
  return ClientActor::playParticles((ClientActor *)this, "1002.ent");
}


//======================================================================
// ClientPlayer::onPickupItem(ClientActor *)
// address: 0x002FF8F4   size: 0x5C (92 bytes)
//======================================================================
ClientPlayer *__fastcall ClientPlayer::onPickupItem(ClientPlayer *this, ClientActor *a2)
{
  EffectPickItem *v4; // r4
  float v5; // r4
  float v6; // r0
  float v7; // r3

  v4 = (EffectPickItem *)operator new(0x1Cu);
  EffectPickItem::EffectPickItem(v4, this, a2, 0);
  EffectManager::addEffect((EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton, v4);
  v5 = GenRandomFloat();
  v6 = GenRandomFloat();
  v7 = (float)((float)((float)(v5 - v6) * 0.7) + 1.0) + (float)((float)((float)(v5 - v6) * 0.7) + 1.0);
  ClientActor::playSound(this, "random.pop", 0.2, v7);
  return this;
}


//======================================================================
// ClientPlayer::teleportMap(int)
// address: 0x002FF96C   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall ClientPlayer::teleportMap(ClientPlayer *this, int a2)
{
  return WorldManager::teleportPlayer(__SPAIR64__((unsigned int)this, g_WorldMgr), a2);
}


//======================================================================
// ClientPlayer::ClientPlayer(void)
// address: 0x002FF9A8   size: 0x54 (84 bytes)
//======================================================================
// Alternative name is '_ZN12ClientPlayerC1Ev'
void __fastcall ClientPlayer::ClientPlayer(ClientPlayer *this)
{
  ActorLiving::ActorLiving(this);
  *(_DWORD *)this = &off_462D28;
  *((_DWORD *)this + 47) = &byte_55FB88;
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  *((_DWORD *)this + 51) = 0;
  ChunkViewer::ChunkViewer((ClientPlayer *)((char *)this + 236));
  *((_DWORD *)this + 57) = 1;
  *((_DWORD *)this + 52) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 54) = -1;
  *((_DWORD *)this + 55) = 0;
  *((_BYTE *)this + 224) = 0;
}


//======================================================================
// ClientPlayer::verifyRespawnCoordinates(World *,WCoord const&,bool)
// address: 0x002FFA14   size: 0xFC (252 bytes)
//======================================================================
ClientPlayer *__fastcall ClientPlayer::verifyRespawnCoordinates(
        ClientPlayer *this,
        World *a2,
        ChunkProvider **a3,
        WCoord *a4,
        char a5)
{
  int v8; // r2
  int v9; // r3
  int v10; // r2
  int v11; // r1
  int v12; // r7
  int BlockMaterial; // r7
  int v14; // r2
  int v15; // r3
  int v16; // r6
  int v17; // r0
  int v18; // r3
  int v19; // r2
  int v20; // r3
  int v21; // r5
  int v23; // [sp+0h] [bp-1Ch]
  int v24; // [sp+0h] [bp-1Ch]
  int v25; // [sp+Ch] [bp-10h] BYREF
  int v26; // [sp+10h] [bp-Ch]
  int v27; // [sp+14h] [bp-8h]

  World::syncLoadChunk(a3, a4, 3);
  if ( World::getBlockID((World *)a3, a4, v8, v9) == 828 )
  {
    if ( BlockBed::getNearestEmptyChunkCoordinates((BlockBed *)&v25, (WCoord *)a3, a4, nullptr, v23) != 0 )
    {
      v11 = v25;
      v12 = v27;
      *((_DWORD *)this + 1) = v26;
      *(_DWORD *)this = v11;
      *((_DWORD *)this + 2) = v12;
    }
    else
    {
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = -1;
      *((_DWORD *)this + 2) = 0;
    }
  }
  else
  {
    BlockMaterial = World::getBlockMaterial((World *)a3, a4, v10);
    v14 = *((_DWORD *)a4 + 2) + dword_51666C;
    v15 = *(_DWORD *)a4 + dword_516664;
    v26 = *((_DWORD *)a4 + 1) + dword_516668;
    v25 = v15;
    v27 = v14;
    v16 = World::getBlockMaterial((World *)a3, (const WCoord *)&v25, v14);
    v24 = 0;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 44))(BlockMaterial) == 0 )
      v24 = (*(unsigned __int8 (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 48))(BlockMaterial) ^ 1;
    v17 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 44))(v16);
    v18 = 0;
    if ( v17 == 0 )
      v18 = (*(unsigned __int8 (__fastcall **)(int))(*(_DWORD *)v16 + 48))(v16) ^ 1;
    if ( a5 != 0 && v24 != 0 && v18 != 0 )
    {
      v19 = *(_DWORD *)a4;
      v20 = *((_DWORD *)a4 + 1);
      v21 = *((_DWORD *)a4 + 2);
      *(_DWORD *)this = v19;
      *((_DWORD *)this + 1) = v20;
      *((_DWORD *)this + 2) = v21;
    }
    else
    {
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = -1;
      *((_DWORD *)this + 2) = 0;
    }
  }
  return this;
}


//======================================================================
// ClientPlayer::setRevivePoint(WCoord const*,bool)
// address: 0x002FFB14   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall ClientPlayer::setRevivePoint(int a1, _DWORD *a2, char a3)
{
  _DWORD *v3; // r3
  _BYTE *v4; // r4
  _DWORD *result; // r0
  _DWORD *v6; // r3

  v3 = (_DWORD *)(a1 + 212);
  v4 = (_BYTE *)(a1 + 224);
  if ( a2 != nullptr )
  {
    *v3 = *a2;
    result = (_DWORD *)a2[1];
    v3[1] = result;
    v3[2] = a2[2];
    *v4 = a3;
  }
  else
  {
    *v3 = 0;
    v6 = (_DWORD *)(a1 + 216);
    result = (_DWORD *)(a1 + 220);
    *v6 = -1;
    *result = 0;
    *v4 = 0;
  }
  return result;
}


//======================================================================
// ClientPlayer::gotoBlockPos(World *,WCoord const&,bool)
// address: 0x002FFB46   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall ClientPlayer::gotoBlockPos(ClientPlayer *this, ChunkProvider **a2, const WCoord *a3, int a4)
{
  int v5; // r0
  int v6; // r1
  int v7; // r6
  unsigned int v8; // r7
  unsigned int v9; // r0
  unsigned int v10; // r7
  unsigned int v11; // r0
  int v12; // r6
  int result; // r0
  void (__fastcall *v14)(int, _DWORD *, _DWORD, _DWORD); // [sp+0h] [bp-34h]
  int v16; // [sp+Ch] [bp-28h] BYREF
  int TopSolidOrLiquidBlock; // [sp+10h] [bp-24h]
  int v18; // [sp+14h] [bp-20h]
  _DWORD v19[7]; // [sp+18h] [bp-1Ch] BYREF

  v5 = *(_DWORD *)a3;
  v6 = *((_DWORD *)a3 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v16 = *(_DWORD *)a3;
  TopSolidOrLiquidBlock = v6;
  v18 = v7;
  if ( a4 != 0 )
  {
    v16 += GenRandomInt(-5, 5);
    v18 += GenRandomInt(-5, 5);
    v8 = BlockDivSection(v16);
    v9 = BlockDivSection(v18);
    World::syncLoadChunk(a2, v8, v9);
    TopSolidOrLiquidBlock = World::getTopSolidOrLiquidBlock((World *)a2, v16, v18);
  }
  else
  {
    v10 = BlockDivSection(v5);
    v11 = BlockDivSection(v7);
    World::syncLoadChunk(a2, v10, v11);
  }
  v12 = *((_DWORD *)this + 17);
  v14 = *(void (__fastcall **)(int, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v12 + 16);
  BlockBottomCenter(v19, &v16);
  v14(v12, v19, 0, 0);
  while ( 1 )
  {
    ActorLocoMotion::getCollideBox(*((ActorLocoMotion **)this + 17), (CollideAABB *)v19);
    result = World::checkNoCollisionBoundBox((World *)a2, (const CollideAABB *)v19, this);
    if ( result != 0 )
      break;
    *(_DWORD *)(*((_DWORD *)this + 17) + 36) += 100;
  }
  return result;
}


//======================================================================
// ClientPlayer::teleportTo(WCoord const&)
// address: 0x002FFBFE   size: 0x28 (40 bytes)
//======================================================================
int __fastcall ClientPlayer::teleportTo(ClientPlayer *this, const WCoord *a2)
{
  ChunkProvider **v2; // r5

  v2 = *((ChunkProvider ***)this + 13);
  (*(void (__fastcall **)(ClientPlayer *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
  ClientPlayer::gotoBlockPos(this, v2, a2, 0);
  return (*(int (__fastcall **)(ClientPlayer *, ChunkProvider **))(*(_DWORD *)this + 8))(this, v2);
}


//======================================================================
// ClientPlayer::gotoSpawnPoint(World *)
// address: 0x002FFC28   size: 0x24 (36 bytes)
//======================================================================
int __fastcall ClientPlayer::gotoSpawnPoint(ClientPlayer *this, World *a2)
{
  int v4; // r5
  int hasSky; // r0

  v4 = g_WorldMgr;
  hasSky = World::hasSky(a2);
  return ClientPlayer::gotoBlockPos(this, (ChunkProvider **)a2, (const WCoord *)(v4 + 8), hasSky);
}


//======================================================================
// ClientPlayer::revive(void)
// address: 0x002FFC50   size: 0x176 (374 bytes)
//======================================================================
int __fastcall ClientPlayer::revive(ClientPlayer *this)
{
  int v1; // r5
  int v3; // r2
  int v4; // r5
  unsigned int v5; // r6
  unsigned int v6; // r0
  _DWORD *v7; // r5
  int v8; // r6
  int v9; // r5
  unsigned int v10; // r6
  unsigned int v11; // r0
  int result; // r0
  ChunkProvider **World; // [sp+8h] [bp-54h]
  char v14; // [sp+10h] [bp-4Ch]
  void (__fastcall *v15)(int, _DWORD *, _DWORD, _DWORD); // [sp+14h] [bp-48h]
  int v16[4]; // [sp+18h] [bp-44h] BYREF
  int v17; // [sp+28h] [bp-34h] BYREF
  int v18; // [sp+2Ch] [bp-30h]
  int v19; // [sp+30h] [bp-2Ch]
  _DWORD v20[3]; // [sp+34h] [bp-28h] BYREF
  _DWORD v21[7]; // [sp+40h] [bp-1Ch] BYREF

  v1 = *((_DWORD *)this + 13);
  World = (ChunkProvider **)v1;
  (*(void (__fastcall **)(ClientPlayer *, _DWORD))(*(_DWORD *)this + 12))(this, 0);
  v3 = *(unsigned __int16 *)(v1 + 60);
  v17 = 0;
  v18 = -1;
  v19 = 0;
  if ( v3 != 0 )
  {
    World::getPortalPoint(v16, (_DWORD *)v1);
    v17 = v16[0];
    v18 = v16[1];
    v4 = v16[2];
    v19 = v16[2];
    if ( v16[1] >= 0 )
    {
      v5 = CoordDivSection(v16[0]);
      v6 = CoordDivSection(v4);
      World::syncLoadChunk(World, v5, v6);
      v7 = *((_DWORD **)this + 17);
      BlockCenterCoord(v21, &v17);
      (*(void (__fastcall **)(_DWORD *, _DWORD *, _DWORD, _DWORD))(*v7 + 16))(v7, v21, v7[1], v7[2]);
      *((_DWORD *)this + 40) = (*(int (__fastcall **)(ClientPlayer *))(*(_DWORD *)this + 128))(this);
      goto LABEL_12;
    }
    World = (ChunkProvider **)WorldManager::getWorld((WorldManager *)g_WorldMgr, 0);
    if ( World == nullptr )
    {
      World = (ChunkProvider **)WorldManager::createWorld((WorldManager *)g_WorldMgr, 0);
      ClientPlayer::gotoSpawnPoint(this, (World *)World);
      goto LABEL_12;
    }
LABEL_11:
    ClientPlayer::gotoSpawnPoint(this, (World *)World);
    goto LABEL_12;
  }
  v18 = *((_DWORD *)this + 54);
  v19 = *((_DWORD *)this + 55);
  v17 = *((_DWORD *)this + 53);
  v14 = *((_BYTE *)this + 224);
  ClientPlayer::setRevivePoint((int)this, nullptr, 0);
  if ( v18 <= 0 )
    goto LABEL_11;
  ClientPlayer::verifyRespawnCoordinates((ClientPlayer *)v20, this, (ChunkProvider **)v1, (WCoord *)&v17, v14);
  if ( v20[1] <= 0 )
    goto LABEL_11;
  v8 = *((_DWORD *)this + 17);
  v15 = *(void (__fastcall **)(int, _DWORD *, _DWORD, _DWORD))(*(_DWORD *)v8 + 16);
  BlockCenterCoord(v21, v20);
  v15(v8, v21, 0, 0);
  ClientPlayer::setRevivePoint((int)this, &v17, v14);
  v9 = *((_DWORD *)this + 17);
  v10 = CoordDivSection(*(_DWORD *)(v9 + 32));
  v11 = CoordDivSection(*(_DWORD *)(v9 + 40));
  World::syncLoadChunk(World, v10, v11);
  while ( 1 )
  {
    ActorLocoMotion::getCollideBox(*((ActorLocoMotion **)this + 17), (CollideAABB *)v21);
    if ( World::checkNoCollisionBoundBox((World *)World, (const CollideAABB *)v21, this) != 0 )
      break;
    *(_DWORD *)(*((_DWORD *)this + 17) + 36) += 100;
  }
LABEL_12:
  (*(void (__fastcall **)(_DWORD))(**((_DWORD **)this + 19) + 8))(*((_DWORD *)this + 19));
  ActorBody::revive(*((_DWORD *)this + 16));
  result = (*(int (__fastcall **)(ClientPlayer *, ChunkProvider **))(*(_DWORD *)this + 8))(this, World);
  *((_DWORD *)this + 50) = -1082130432;
  return result;
}


//======================================================================
// ClientPlayer::sleepInBed(WCoord const&)
// address: 0x002FFDD0   size: 0x166 (358 bytes)
//======================================================================
int __fastcall ClientPlayer::sleepInBed(ClientPlayer *this, const WCoord *a2)
{
  int v4; // r2
  int v5; // r2
  int v6; // r3
  char BlockData; // r0
  _DWORD *v8; // r2
  int v9; // r12
  int v10; // r1
  int v11; // r7
  _DWORD *v12; // r3
  _DWORD *v13; // r3
  int result; // r0
  int v15; // [sp+4h] [bp-28h]
  int v16; // [sp+8h] [bp-24h]
  int v17; // [sp+Ch] [bp-20h]
  _DWORD v18[3]; // [sp+10h] [bp-1Ch] BYREF
  int v19[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( *(_BYTE *)(*((_DWORD *)this + 13) + 68) != 0 )
    goto LABEL_10;
  if ( (*((_DWORD *)this + 15) & 0x100) != 0 || ClientActor::isDead(this) != 0 )
    return 1;
  if ( World::hasSky(*((World **)this + 13)) == 0 )
    return 2;
  result = 3;
  if ( *(_DWORD *)(g_WorldMgr + 56) > 0x2EE0u )
  {
    ClientActor::getPosition(v19, (int)this);
    CoordDivBlock((const WCoord *)v18, v19);
    result = 4;
    if ( ((v18[0] - *(_DWORD *)a2 + ((v18[0] - *(_DWORD *)a2) >> 31)) ^ ((v18[0] - *(_DWORD *)a2) >> 31)) <= 3
      && ((v18[1] - *((_DWORD *)a2 + 1) + ((v18[1] - *((_DWORD *)a2 + 1)) >> 31))
        ^ ((v18[1] - *((_DWORD *)a2 + 1)) >> 31)) <= 2
      && ((v18[2] - *((_DWORD *)a2 + 2) + ((v18[2] - *((_DWORD *)a2 + 2)) >> 31))
        ^ ((v18[2] - *((_DWORD *)a2 + 2)) >> 31)) <= 3 )
    {
LABEL_10:
      if ( *((_DWORD *)this + 20) != 0 )
        (*(void (__fastcall **)(ClientPlayer *, _DWORD))(*(_DWORD *)this + 148))(this, 0);
      v4 = *((_DWORD *)this + 17);
      *(_DWORD *)(v4 + 24) = 20;
      *(_DWORD *)(v4 + 20) = 20;
      *(_DWORD *)(*((_DWORD *)this + 17) + 28) = 20;
      if ( World::blockExists(*((World **)this + 13), a2) )
      {
        BlockData = World::getBlockData(*((World **)this + 13), a2, v5, v6);
        v17 = 100 * *((_DWORD *)a2 + 1) + 90;
        v16 = BlockData & 3;
        v15 = 100 * *((_DWORD *)a2 + 2);
        v8 = *((_DWORD **)this + 17);
        v9 = *(_DWORD *)&aZ_0[8 * v16 + 4];
        v8[8] = 100 * *(_DWORD *)a2 + *(_DWORD *)&aZ_0[8 * v16];
        v8[9] = v17;
        v8[10] = v15 + v9;
        *(_DWORD *)(*((_DWORD *)this + 17) + 4) = *(_DWORD *)&aZ_0[4 * v16 + 32];
        *(_DWORD *)(*((_DWORD *)this + 17) + 8) = -1049624576;
      }
      else
      {
        v10 = *((_DWORD *)a2 + 1);
        v11 = *((_DWORD *)a2 + 2);
        v12 = *((_DWORD **)this + 17);
        v12[8] = 100 * *(_DWORD *)a2 + 50;
        v12[9] = 100 * v10 + 90;
        v12[10] = 100 * v11 + 50;
        *(_DWORD *)(*((_DWORD *)this + 17) + 4) = 0;
        *(_DWORD *)(*((_DWORD *)this + 17) + 16) = 1097859072;
      }
      *((_DWORD *)this + 15) |= 0x100u;
      *((_DWORD *)this + 52) = 0;
      v13 = *((_DWORD **)this + 17);
      v13[18] = 0;
      v13[19] = 0;
      v13[20] = 0;
      return 0;
    }
  }
  return result;
}


//======================================================================
// ClientPlayer::isInBed(void)
// address: 0x002FFF4C   size: 0x2C (44 bytes)
//======================================================================
bool __fastcall ClientPlayer::isInBed(ClientPlayer *this)
{
  World *v1; // r6
  int v2; // r2
  int v3; // r3
  int v5[3]; // [sp+0h] [bp-18h] BYREF
  _BYTE v6[12]; // [sp+Ch] [bp-Ch] BYREF

  v1 = *((World **)this + 13);
  ClientActor::getPosition(v5, (int)this);
  CoordDivBlock((const WCoord *)v6, v5);
  return World::getBlockID(v1, (const WCoord *)v6, v2, v3) == 828;
}


//======================================================================
// ClientPlayer::wakeUp(bool,bool,bool)
// address: 0x002FFF7C   size: 0xC8 (200 bytes)
//======================================================================
unsigned int __fastcall ClientPlayer::wakeUp(ClientPlayer *this, int a2, bool a3, int a4)
{
  int v4; // r3
  World *v6; // r0
  _DWORD *v7; // r5
  void (__fastcall *v8)(_DWORD *, int *, _DWORD, _DWORD); // r7
  unsigned int result; // r0
  int v10; // r2
  int v11; // [sp+0h] [bp-34h]
  int v13[3]; // [sp+Ch] [bp-28h] BYREF
  int v14; // [sp+18h] [bp-1Ch] BYREF
  int v15; // [sp+1Ch] [bp-18h]
  int v16; // [sp+20h] [bp-14h]
  int v17[4]; // [sp+24h] [bp-10h] BYREF

  v4 = *((_DWORD *)this + 17);
  *(_DWORD *)(v4 + 24) = 180;
  *(_DWORD *)(v4 + 20) = 60;
  *(_DWORD *)(*((_DWORD *)this + 17) + 28) = 0;
  v11 = a2;
  ClientActor::getPosition(v17, (int)this);
  CoordDivBlock((const WCoord *)v13, v17);
  v16 = v13[2];
  v6 = *((World **)this + 13);
  v15 = v13[1];
  v14 = v13[0];
  if ( World::getBlockID(v6, (const WCoord *)v13, v13[0], v13[1]) == 828 )
  {
    BlockBed::setBedOccupied(*((BlockBed **)this + 13), (World *)v13, nullptr, 60);
    if ( BlockBed::getNearestEmptyChunkCoordinates(
           (BlockBed *)&v14,
           *((WCoord **)this + 13),
           (World *)v13,
           nullptr,
           v11) == 0 )
    {
      v15 = v13[1] + dword_516668;
      v16 = v13[2] + dword_51666C;
      v14 = v13[0] + dword_516664;
    }
    v7 = *((_DWORD **)this + 17);
    v8 = *(void (__fastcall **)(_DWORD *, int *, _DWORD, _DWORD))(*v7 + 16);
    BlockBottomCenter(v17, &v14);
    v8(v7, v17, v7[1], v7[2]);
  }
  result = *((_DWORD *)this + 15);
  v10 = 0;
  *((_DWORD *)this + 15) = result & 0xFFFFFEFF;
  if ( v11 == 0 )
    v10 = 100;
  *((_DWORD *)this + 52) = v10;
  if ( a4 != 0 )
    return (unsigned int)ClientPlayer::setRevivePoint((int)this, v13, 0);
  return result;
}


//======================================================================
// ClientPlayer::getBackPack(void)
// address: 0x0030004C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientPlayer::getBackPack(ClientPlayer *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 19) + 80);
}


//======================================================================
// ClientPlayer::getCurShortcut(void)
// address: 0x00300052   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientPlayer::getCurShortcut(ClientPlayer *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 19) + 84);
}


//======================================================================
// ClientPlayer::shortcutItemUsed(void)
// address: 0x00300058   size: 0x38 (56 bytes)
//======================================================================
ClientPlayer *__fastcall ClientPlayer::shortcutItemUsed(World **this)
{
  PlayerAttrib *v2; // r5
  int v3; // r3
  ClientPlayer *v5; // [sp+0h] [bp-8h]

  v5 = (ClientPlayer *)this;
  if ( World::isCreativeMode(*(this + 13)) == 0 )
  {
    v2 = *(this + 19);
    v3 = (*(int (__fastcall **)(PlayerAttrib *, int))(*(_DWORD *)v2 + 44))(v2, 5);
    if ( v3 > 0 )
    {
      v5 = (ClientPlayer *)(&dword_0 + 1);
      (*((void (__fastcall **)(World **, int, int, int))*this + 52))(this, 3, 4, v3);
      PlayerAttrib::onCurToolUsed(v2);
    }
  }
  return v5;
}


//======================================================================
// ClientPlayer::getUin(void)
// address: 0x00300090   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ClientPlayer::getUin(ClientPlayer *this)
{
  return *((_DWORD *)this + 10);
}


//======================================================================
// ClientPlayer::getNickname(void)
// address: 0x00300094   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientPlayer::getNickname(ClientPlayer *this)
{
  return *((_DWORD *)this + 47);
}


//======================================================================
// ClientPlayer::getCurToolID(void)
// address: 0x0030009A   size: 0xE (14 bytes)
//======================================================================
int __fastcall ClientPlayer::getCurToolID(ClientPlayer *this)
{
  return (*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 19) + 44))(*((_DWORD *)this + 19), 5);
}


//======================================================================
// ClientPlayer::doActualAttack(ClientActor *)
// address: 0x003000A8   size: 0x246 (582 bytes)
//======================================================================
void __fastcall ClientPlayer::doActualAttack(LivingAttrib **this, ClientActor *a2)
{
  int CurToolID; // r0
  char *v5; // r3
  char *v6; // r2
  char *v7; // r1
  float v8; // r0
  int v9; // r5
  bool v10; // r3
  LivingAttrib *v11; // r0
  float KnockUp; // r0
  int v13; // r5
  _DWORD **v14; // r0
  int v15; // r0
  int v16; // r1
  ClientActor *v17; // r0
  struct __class_type_info *lpstype; // [sp+8h] [bp-3Ch]
  struct __class_type_info *lpstypea; // [sp+8h] [bp-3Ch]
  int v20; // [sp+Ch] [bp-38h]
  int FireAspect; // [sp+10h] [bp-34h]
  void *v22; // [sp+18h] [bp-2Ch]
  int v23; // [sp+1Ch] [bp-28h]
  int v24[8]; // [sp+24h] [bp-20h] BYREF

  if ( (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 40))(a2) != 0 )
  {
    v20 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 52))(a2);
    j_memset(v24, 0, 0x1Cu);
    BYTE2(v24[4]) = 1;
    lpstype = (struct __class_type_info *)Ogre::Singleton<DefManager>::ms_Singleton;
    CurToolID = ClientPlayer::getCurToolID((ClientPlayer *)this);
    v5 = *((char **)lpstype + 120);
    v6 = (char *)lpstype + 476;
    while ( v5 != nullptr )
    {
      if ( *((_DWORD *)v5 + 4) < CurToolID )
      {
        v7 = *((char **)v5 + 3);
        v5 = v6;
      }
      else
      {
        v7 = *((char **)v5 + 2);
      }
      v6 = v5;
      v5 = v7;
    }
    if ( v6 != (char *)lpstype + 476 && CurToolID >= *((_DWORD *)v6 + 4) && v6 != (char *)-20 )
      v24[0] = *((__int16 *)v6 + 34);
    lpstypea = *(this + 19);
    v24[1] = LivingAttrib::getAttackPoint((int)lpstypea, v24[0]);
    v24[2] = LivingAttrib::getEnchantAttackPoint((int)lpstypea, v24[0], v20);
    v24[3] = LivingAttrib::getModAttrib(lpstypea, v24[0] + 3);
    if ( v20 <= 2 )
    {
      v8 = COERCE_FLOAT(LivingAttrib::getModAttrib(lpstypea, v20 + 9));
      *(float *)&v24[3] = *(float *)&v24[3] + v8;
    }
    v9 = (int)*(this + 17);
    v10 = *(float *)(v9 + 120) > 0.0
       && *(_BYTE *)(v9 + 124) == 0
       && (*(int (__fastcall **)(_DWORD))(*(_DWORD *)v9 + 20))(*(this + 17)) == 0
       && *((_BYTE *)*(this + 17) + 125) == 0
       && *(this + 20) == nullptr;
    v11 = *(this + 19);
    LOBYTE(v24[4]) = v10;
    FireAspect = LivingAttrib::getFireAspect(v11);
    v22 = _dynamic_cast(
            a2,
            (const struct __class_type_info *)&`typeinfo for'ClientActor,
            (const struct __class_type_info *)&`typeinfo for'ActorLiving,
            0);
    if ( v22 == nullptr || FireAspect <= 0 || ClientActor::isBurning(a2) != 0 )
    {
      v23 = 0;
    }
    else
    {
      ClientActor::setFire(a2, 1);
      v23 = 1;
    }
    v24[5] = LivingAttrib::getKnockback(*(this + 19), v24[0], v20);
    KnockUp = LivingAttrib::getKnockUp((int)*(this + 19), v24[0], v20);
    BYTE1(v24[4]) = 1;
    *(float *)&v24[6] = KnockUp;
    ClientMob::m_DropItemProbAdd = (int)COERCE_FLOAT(LivingAttrib::getEquipEnchantValue((int)*(this + 19), 5, 4, -1, -1));
    v13 = (*(int (__fastcall **)(ClientActor *, int *, LivingAttrib **))(*(_DWORD *)a2 + 68))(a2, v24, this);
    if ( v13 != 0 )
    {
      v14 = (_DWORD **)_dynamic_cast(
                         a2,
                         (const struct __class_type_info *)&`typeinfo for'ClientActor,
                         (const struct __class_type_info *)&`typeinfo for'ClientMob,
                         0);
      if ( v14 != nullptr )
        (*((void (__fastcall **)(LivingAttrib **, int, int, _DWORD, int))*this + 52))(this, 3, 7, *v14[48], 1);
      if ( *(float *)&v24[5] > 0.0 )
      {
        *((float *)*(this + 17) + 18) = *((float *)*(this + 17) + 18) * 0.6;
        *((float *)*(this + 17) + 20) = *((float *)*(this + 17) + 20) * 0.6;
        *((_BYTE *)*(this + 17) + 128) = 0;
      }
      if ( LOBYTE(v24[4]) != 0 )
        ClientActor::playParticles(a2, "1003.ent");
    }
    v15 = (int)*(this + 19);
    ClientMob::m_DropItemProbAdd = 0;
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v15 + 48))(v15, 5, 1);
    if ( v22 == nullptr )
      goto LABEL_37;
    v16 = FireAspect;
    if ( FireAspect <= 0 || (v17 = a2, v13 == 0) )
    {
      if ( v23 == 0 )
      {
LABEL_37:
        PlayerAttrib::useStamina();
        return;
      }
      v17 = a2;
      v16 = -1;
    }
    ClientActor::setFire(v17, v16);
    goto LABEL_37;
  }
}


//======================================================================
// ClientPlayer::attachUIModelView(ModelView *,int)
// address: 0x00300314   size: 0x4C (76 bytes)
//======================================================================
unsigned __int64 __fastcall ClientPlayer::attachUIModelView(ClientPlayer *this, ModelView *a2, unsigned int a3)
{
  int *v3; // r5
  ActorBody *v6; // r6
  unsigned __int64 v8; // [sp+0h] [bp-Ch]

  v8 = __PAIR64__(a3, (unsigned int)this);
  v3 = (int *)((char *)this + 192);
  if ( *((_DWORD *)this + 48) == 0 )
  {
    v6 = (ActorBody *)operator new(0x6Cu);
    ActorBody::ActorBody(v6, this);
    *v3 = (int)v6;
    ActorBody::initPlayer((Ogre::Model **)v6, *(const char **)(*((_DWORD *)this + 16) + 80));
  }
  LivingAttrib::applyEquips(*((_DWORD *)this + 19), *v3, 6);
  ActorBody::attachUIModelView((ActorBody *)*v3, a2, HIDWORD(v8));
  ActorBody::playStand((ActorBody *)*v3);
  *((_DWORD *)this + 49) = a2;
  return v8;
}


//======================================================================
// ClientPlayer::detachUIModelView(int)
// address: 0x0030036A   size: 0x1A (26 bytes)
//======================================================================
int __fastcall ClientPlayer::detachUIModelView(ActorBody **this, unsigned int a2)
{
  _DWORD *v2; // r4
  int result; // r0

  v2 = this + 49;
  result = ActorBody::detachUIModelView(*(this + 48), *(this + 49), a2);
  *v2 = 0;
  return result;
}


//======================================================================
// ClientPlayer::isFlying(void)
// address: 0x00300384   size: 0xC (12 bytes)
//======================================================================
int __fastcall ClientPlayer::isFlying(ClientPlayer *this)
{
  return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 17) + 48))(*((_DWORD *)this + 17));
}


//======================================================================
// ClientPlayer::getMineBlockTicks(int,BLOCK_MINE_TYPE *)
// address: 0x00300390   size: 0x158 (344 bytes)
//======================================================================
int __fastcall ClientPlayer::getMineBlockTicks(int a1, const char *a2, int *a3)
{
  int BlockDef; // r0
  float v6; // r6
  int CurToolID; // r1
  char *ToolDef; // r0
  char *v9; // r7
  float v10; // r4
  float v11; // r4
  int v12; // r6
  char *v13; // r0
  unsigned int v14; // r3
  int v15; // r5
  float v16; // [sp+Ch] [bp-18h]
  int v17; // [sp+10h] [bp-14h]

  if ( World::isCreativeMode(*(World **)(a1 + 52)) != 0 )
    return 0;
  BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, (int)a2);
  v6 = *(float *)(BlockDef + 36);
  v17 = BlockDef;
  if ( v6 == 0.0 )
    return 0;
  if ( v6 < 0.0 )
    return 0x7FFFFFFF;
  CurToolID = ClientPlayer::getCurToolID((ClientPlayer *)a1);
  if ( CurToolID == 0 )
    CurToolID = 1000;
  ToolDef = DefManager::getToolDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, CurToolID);
  v9 = ToolDef;
  if ( ToolDef == nullptr
    || (v11 = (float)*((int *)ToolDef + 11),
        (v10 = v11
             * (float)(COERCE_FLOAT(LivingAttrib::getEquipEnchantValue(*(_DWORD *)(a1 + 76), 5, 16, -1, -1)) + 1.0)) == 0.0) )
  {
    v10 = 1.0;
  }
  v16 = v6 * 1.5;
  v12 = *(_DWORD *)(v17 + 108);
  if ( v12 <= 0 || v12 == 1000 )
    goto LABEL_18;
  v13 = DefManager::getToolDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, *(_DWORD *)(v17 + 108));
  if ( v13 == nullptr )
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/iworld/ClientPlayer.cpp",
      (_BYTE *)&stru_2A8.st_value + 2,
      8,
      v14);
    Ogre::LogMessage((Ogre *)&unk_422996, a2, v12);
    return 0x7FFFFFFF;
  }
  if ( v9 != nullptr && *((_DWORD *)v13 + 9) == *((_DWORD *)v9 + 9) && *((_DWORD *)v13 + 10) <= *((_DWORD *)v9 + 10) )
  {
    v15 = (COERCE_FLOAT(LivingAttrib::getEquipEnchantValue(*(_DWORD *)(a1 + 76), 5, 19, -1, -1)) > 0.0) + 2;
  }
  else
  {
LABEL_18:
    if ( (unsigned int)(a2 - 200) > 6 )
      v16 = v16 * 3.33;
    v15 = 1;
    v10 = 1.0;
  }
  if ( a3 != nullptr )
    *a3 = v15;
  return (int)j_ceil((float)((float)(v16 * 20.0) / v10));
}


//======================================================================
// ClientPlayer::getOWID(void)
// address: 0x00300504   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ClientPlayer::getOWID(ClientPlayer *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 13) + 24);
}


//======================================================================
// ClientPlayer::changeRoleData(tagRoleData *)
// address: 0x0030050C   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall ClientPlayer::changeRoleData(int a1, int a2)
{
  __int64 v4; // r0
  void *v5; // r0
  int BackPack; // r6
  char CurShortcut; // r2
  __int64 v8; // r0
  int result; // r0
  __int16 v10; // r3
  _DWORD *v11; // r5

  LODWORD(v4) = a2 + 13136;
  HIDWORD(v4) = *(_DWORD *)(a1 + 76);
  storeBuff(v4);
  storeDir((_DWORD *)(a2 + 24), *(_DWORD **)(a1 + 68));
  v5 = *(void **)(a1 + 76);
  if ( v5 != nullptr )
    v5 = _dynamic_cast(
           v5,
           (const struct __class_type_info *)&`typeinfo for'ActorAttrib,
           (const struct __class_type_info *)&`typeinfo for'PlayerAttrib,
           0);
  storeAttr((_DWORD *)a2, (PlayerAttrib *)v5);
  *(_DWORD *)(a2 + 13552) = j_time(nullptr);
  *(_DWORD *)(a2 + 13556) = *(_DWORD *)(a1 + 228);
  *(_DWORD *)(a2 + 4) = ClientPlayer::getOWID((ClientPlayer *)a1);
  *(_DWORD *)a2 = ClientPlayer::getUin((ClientPlayer *)a1);
  BackPack = ClientPlayer::getBackPack((ClientPlayer *)a1);
  CurShortcut = ClientPlayer::getCurShortcut((ClientPlayer *)a1);
  HIDWORD(v8) = BackPack;
  LODWORD(v8) = a2 + 72;
  storePak(v8, CurShortcut);
  result = storePos(a2 + 8, *(_DWORD **)(a1 + 68));
  v10 = *(_WORD *)(a1 + 56);
  v11 = (_DWORD *)(a1 + 212);
  *(_WORD *)(a2 + 18) = v10;
  *(_DWORD *)(a2 + 13120) = *v11;
  *(_WORD *)(a2 + 13128) = v11[1];
  *(_DWORD *)(a2 + 13124) = v11[2];
  *(_WORD *)(a2 + 13130) = 0;
  return result;
}


//======================================================================
// ClientPlayer::updateChunkView(void)
// address: 0x003005CC   size: 0x26 (38 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientPlayer::updateChunkView(ClientPlayer *this, int a2, int a3, int a4)
{
  World *v4; // r6
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[1] = a3;
  v6[2] = a4;
  v4 = *((World **)this + 13);
  if ( v4 != nullptr )
  {
    ClientActor::getPosition(v6, (int)this);
    ChunkViewer::updateChunkView((char **)this + 59, v4, (const WCoord *)v6, *((char **)this + 58));
  }
}


//======================================================================
// ClientPlayer::applyEquips(EQUIP_SLOT_TYPE)
// address: 0x003005F2   size: 0x2C (44 bytes)
//======================================================================
int __fastcall ClientPlayer::applyEquips(int *a1, int a2)
{
  int result; // r0
  int v5; // r1

  result = LivingAttrib::applyEquips(a1[19], a1[16], a2);
  v5 = a1[48];
  if ( v5 != 0 && a1[49] != 0 )
    return LivingAttrib::applyEquips(a1[19], v5, a2);
  return result;
}


//======================================================================
// ClientPlayer::onSetCurShortcut(int)
// address: 0x0030061E   size: 0xE (14 bytes)
//======================================================================
int __fastcall ClientPlayer::onSetCurShortcut(ClientPlayer *this, int a2)
{
  *(_DWORD *)(*((_DWORD *)this + 19) + 84) = a2;
  return ClientPlayer::applyEquips((int *)this, 5);
}


//======================================================================
// ClientPlayer::storeRoleData(void)
// address: 0x0030062C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall ClientPlayer::storeRoleData(ClientPlayer *this)
{
  return CSMgr::saveRoleData((CSMgr *)g_CSMgr, this);
}


//======================================================================
// ClientPlayer::tickStoreRoleData(void)
// address: 0x00300644   size: 0x18 (24 bytes)
//======================================================================
ClientPlayer *__fastcall ClientPlayer::tickStoreRoleData(ClientPlayer *this)
{
  int v1; // r2

  v1 = *((_DWORD *)this + 1);
  if ( (unsigned int)(v1 - *((_DWORD *)this + 51)) > 0x77 )
  {
    *((_DWORD *)this + 51) = v1;
    return (ClientPlayer *)ClientPlayer::storeRoleData(this);
  }
  return this;
}


//======================================================================
// ClientPlayer::reStoreRoleData(tagRoleData *)
// address: 0x0030065C   size: 0x90 (144 bytes)
//======================================================================
__int64 __fastcall ClientPlayer::reStoreRoleData(__int64 a1, int a2, int a3)
{
  void *v4; // r0
  __int64 v5; // r0
  _DWORD *v6; // r0
  __int64 v8; // [sp+0h] [bp-10h] BYREF
  int v9; // [sp+8h] [bp-8h]
  int v10; // [sp+Ch] [bp-4h]

  v8 = a1;
  v9 = a2;
  v10 = a3;
  restoreBuff((unsigned __int8 *)(HIDWORD(a1) + 13136), *(_DWORD **)(a1 + 76));
  restoreDir((int *)(HIDWORD(a1) + 24), *(_DWORD **)(a1 + 68));
  v4 = *(void **)(a1 + 76);
  if ( v4 != nullptr )
    v4 = _dynamic_cast(
           v4,
           (const struct __class_type_info *)&`typeinfo for'ActorAttrib,
           (const struct __class_type_info *)&`typeinfo for'PlayerAttrib,
           0);
  restoreAttr((int *)HIDWORD(a1), (int)v4);
  HIDWORD(v5) = ClientPlayer::getBackPack((ClientPlayer *)a1);
  LODWORD(v5) = HIDWORD(a1) + 72;
  restorePak(v5, a1);
  v6 = *(_DWORD **)(a1 + 68);
  HIDWORD(v8) = *(_DWORD *)(HIDWORD(a1) + 8);
  v9 = *(unsigned __int16 *)(HIDWORD(a1) + 16);
  v10 = *(_DWORD *)(HIDWORD(a1) + 12);
  *(_WORD *)(a1 + 56) = *(_WORD *)(HIDWORD(a1) + 18);
  (*(void (__fastcall **)(_DWORD *, char *, _DWORD, _DWORD))(*v6 + 16))(v6, (char *)&v8 + 4, v6[1], v6[2]);
  *(_DWORD *)(a1 + 228) = *(_DWORD *)(HIDWORD(a1) + 13556) + 1;
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(HIDWORD(a1) + 13120);
  *(_DWORD *)(a1 + 216) = *(unsigned __int16 *)(HIDWORD(a1) + 13128);
  *(_DWORD *)(a1 + 220) = *(_DWORD *)(HIDWORD(a1) + 13124);
  return v8;
}


//======================================================================
// ClientPlayer::enterWorld(World *)
// address: 0x003006FC   size: 0x44 (68 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientPlayer::enterWorld(
        ClientPlayer *this,
        ClientActorMgr **a2,
        int a3,
        int a4)
{
  _DWORD v6[3]; // [sp+4h] [bp-Ch] BYREF

  v6[1] = a3;
  v6[2] = a4;
  ClientActor::enterWorld(this, (World *)a2);
  *((_DWORD *)this + 50) = -1082130432;
  ClientActor::playParticles(this, "1001.ent");
  ClientActorMgr::registerPlayer(a2[33], this);
  ClientActor::getPosition(v6, (int)this);
  ChunkViewer::enterWorld((ClientPlayer *)((char *)this + 236), (World *)a2, (const WCoord *)v6, *((_DWORD *)this + 58));
}


//======================================================================
// ClientPlayer::leaveWorld(bool)
// address: 0x00300748   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ClientPlayer::leaveWorld(World **this, bool a2)
{
  ChunkViewer::leaveWorld((ChunkViewer *)(this + 59), *(this + 13));
  ClientActorMgr::unregisterPlayer(*((ClientPlayer **)*(this + 13) + 33), (ClientPlayer *)this);
  return ActorLiving::leaveWorld((ActorLiving *)this, false);
}


//======================================================================
// ClientPlayer::tick(void)
// address: 0x0030076C   size: 0x132 (306 bytes)
//======================================================================
int __fastcall ClientPlayer::tick(World **this)
{
  float *v2; // r5
  World *v3; // r0
  unsigned int i; // r5
  int *v5; // r0
  int *v6; // r3
  int v7; // r2
  _BYTE *v8; // r3
  int v9; // r5
  _BOOL4 v10; // r3
  int v11; // r1
  ClientPlayer *v12; // r0
  int v13; // r1
  int result; // r0
  void *v15; // [sp+4h] [bp-28h] BYREF
  int v16; // [sp+8h] [bp-24h]
  int v17; // [sp+Ch] [bp-20h]
  int v18; // [sp+10h] [bp-1Ch] BYREF
  int v19; // [sp+14h] [bp-18h]
  int v20; // [sp+18h] [bp-14h]
  int v21; // [sp+1Ch] [bp-10h]
  int v22; // [sp+20h] [bp-Ch]
  int v23; // [sp+24h] [bp-8h]

  v2 = (float *)(this + 50);
  ActorLiving::tick((ActorLiving *)this);
  if ( *v2 >= 0.0 )
    *v2 = *v2 + 0.05;
  ClientPlayer::tickStoreRoleData((ClientPlayer *)this);
  if ( ClientActor::isDead((ClientActor *)this) == 0 )
  {
    ActorLocoMotion::getCollideBox(*(this + 17), (CollideAABB *)&v18);
    v16 = 0;
    v18 -= 100;
    v17 = 0;
    v3 = *(this + 13);
    v19 -= 50;
    v20 -= 100;
    v15 = nullptr;
    v21 += 200;
    v22 += 100;
    v23 += 200;
    World::getActorsInBoxExclude(v3, (int)&v15, &v18, (int)this);
    for ( i = 0; i < (v16 - (int)v15) >> 2; ++i )
    {
      v5 = *((int **)v15 + i);
      if ( v5[6] < 0 )
        (*(void (__fastcall **)(int *, World **))(*v5 + 28))(v5, this);
    }
    if ( v15 != nullptr )
      operator delete(v15);
  }
  v6 = (int *)(this + 52);
  if ( ((unsigned int)*(this + 15) & 0x100) != 0 )
  {
    v7 = *v6 + 1;
    if ( v7 > 100 )
      v7 = 100;
    *v6 = v7;
    v8 = (char *)*(this + 13) + 68;
    v9 = (unsigned __int8)*v8;
    if ( *v8 == 0 )
    {
      v10 = ClientPlayer::isInBed((ClientPlayer *)this);
      if ( v10 )
      {
        if ( *(_DWORD *)(g_WorldMgr + 56) > 0x2EE0u )
          goto LABEL_24;
        v12 = (ClientPlayer *)this;
        v11 = v9;
        v10 = true;
      }
      else
      {
        v11 = 1;
        v12 = (ClientPlayer *)this;
      }
      ClientPlayer::wakeUp(v12, v11, true, v10);
    }
  }
  else if ( *v6 > 0 )
  {
    v13 = *v6 + 1;
    if ( v13 > 109 )
      *v6 = 0;
    else
      *v6 = v13;
  }
LABEL_24:
  result = World::isCreativeMode(*(this + 13));
  if ( result != 0 )
    return LivingAttrib::addOxygen(*(this + 19), 20);
  return result;
}


//======================================================================
// ClientPlayer::update(float)
// address: 0x003008AC   size: 0x20 (32 bytes)
//======================================================================
ActorBody *__fastcall ClientPlayer::update(ActorBody **this, float a2)
{
  ActorBody *result; // r0

  result = ClientActor::update((ClientActor *)this, a2);
  if ( *(this + 49) != nullptr )
    return (ActorBody *)ActorBody::update(*(this + 48), a2);
  return result;
}


//======================================================================
// ClientPlayer::onEvent(ActorEvent const&)
// address: 0x003008CC   size: 0x24 (36 bytes)
//======================================================================
int __fastcall ClientPlayer::onEvent(ClientActor *a1, _DWORD *a2)
{
  int v4; // r2
  __int64 v5; // r0
  int v6; // r3

  ActorLiving::onEvent(a1, a2);
  LODWORD(v5) = *((_DWORD *)a1 + 48);
  if ( (_DWORD)v5 != 0 )
  {
    v6 = *((_DWORD *)a1 + 49);
    if ( v6 != 0 )
    {
      HIDWORD(v5) = a2;
      LODWORD(v5) = ActorBody::onEvent(v5, v4, v6);
    }
  }
  return v5;
}

