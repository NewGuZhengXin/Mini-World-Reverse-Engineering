// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientActorMgr

//======================================================================
// ClientActorMgr::ClientActorMgr(World *)
// address: 0x002C7008   size: 0x56 (86 bytes)
//======================================================================
// Alternative name is '_ZN14ClientActorMgrC1EP5World'
int __fastcall ClientActorMgr::ClientActorMgr(int a1, int a2)
{
  int v2; // r6

  v2 = a1 + 80;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)a1 = a2;
  *(_BYTE *)(a1 + 40) = 1;
  j_memset((void *)(a1 + 80), 0, 0x10u);
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 88) = v2;
  *(_DWORD *)(a1 + 92) = v2;
  j_memset((void *)(a1 + 44), 0, 0x10u);
  *(_DWORD *)(a1 + 64) = -400;
  *(_DWORD *)(a1 + 68) = -400;
  *(_DWORD *)(a1 + 72) = -400;
  *(_DWORD *)(a1 + 60) = -100;
  return a1;
}


//======================================================================
// ClientActorMgr::tickOneActor(ClientActor *,bool)
// address: 0x002C7064   size: 0xDE (222 bytes)
//======================================================================
Chunk *__fastcall ClientActorMgr::tickOneActor(World **this, ClientActor *a2, int a3)
{
  World *v6; // r0
  Chunk *result; // r0
  signed int v8; // r7
  int v9; // r1
  int v10; // r7
  int v11; // r2
  World *v12; // r0
  Chunk *Chunk; // r0
  World *v14; // r0
  unsigned int v15; // [sp+0h] [bp-34h]
  int v16; // [sp+4h] [bp-30h]
  int v17; // [sp+Ch] [bp-28h] BYREF
  int v18; // [sp+14h] [bp-20h]
  _DWORD v19[3]; // [sp+18h] [bp-1Ch] BYREF
  int v20; // [sp+24h] [bp-10h] BYREF
  int v21; // [sp+28h] [bp-Ch]
  int v22; // [sp+2Ch] [bp-8h]

  ClientActor::getPosition((ClientActor *)&v20);
  CoordDivBlock((const WCoord *)&v17, &v20);
  if ( a3 == 0 )
  {
    v19[0] = v17 - 16;
    v19[2] = v18 - 16;
    v20 = v17 + 16;
    v6 = *this;
    v19[1] = 0;
    v21 = 0;
    v22 = v18 + 16;
    result = (Chunk *)World::checkChunksExist(v6, (const WCoord *)v19, (const WCoord *)&v20);
    if ( result == nullptr )
      return result;
    if ( *((_BYTE *)a2 + 8) != 0 )
    {
      ++*((_DWORD *)a2 + 1);
      (*(void (__fastcall **)(ClientActor *))(*(_DWORD *)a2 + 16))(a2);
    }
  }
  ClientActor::getPosition((ClientActor *)&v20);
  v15 = CoordDivSection(v20);
  v8 = CoordDivSection(v21);
  result = (Chunk *)CoordDivSection(v22);
  v16 = (int)result;
  if ( *((_BYTE *)a2 + 8) == 0 )
    goto LABEL_14;
  v9 = *((_DWORD *)a2 + 3);
  if ( v9 != v15
    || (v8 <= 15 ? (v10 = v8 & (~v8 >> 31)) : (v10 = 15), *((_DWORD *)a2 + 4) != v10 || *((Chunk **)a2 + 5) != result) )
  {
    v11 = *((_DWORD *)a2 + 5);
    v12 = *this;
    v20 = *((_DWORD *)a2 + 3);
    v21 = v11;
    Chunk = (Chunk *)World::getChunk(v12, v9, v11);
    if ( Chunk != nullptr )
      Chunk::removeActor(Chunk, a2);
LABEL_14:
    v14 = *this;
    v20 = v15;
    v21 = v16;
    result = (Chunk *)World::getChunk(v14, v15, v16);
    if ( result != nullptr )
      return (Chunk *)Chunk::addActor(result, a2);
    else
      *((_BYTE *)a2 + 8) = 0;
  }
  return result;
}


//======================================================================
// ClientActorMgr::update(float)
// address: 0x002C7144   size: 0x11A (282 bytes)
//======================================================================
int __fastcall ClientActorMgr::update(ClientActorMgr *this, float a2)
{
  int v3; // r3
  _DWORD *v4; // r6
  int v5; // r4
  unsigned int j; // r4
  int v7; // r3
  int v8; // r0
  unsigned int k; // r4
  int v10; // r3
  int result; // r0
  int v12; // r0
  unsigned int i; // [sp+8h] [bp-34h]
  int v15; // [sp+20h] [bp-1Ch] BYREF
  int v16; // [sp+24h] [bp-18h]
  int v17; // [sp+28h] [bp-14h]
  _DWORD v18[4]; // [sp+2Ch] [bp-10h] BYREF

  PlayerControl::getPosition((PlayerControl *)&v15);
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 1);
    if ( i >= (*((_DWORD *)this + 2) - v3) >> 2 )
      break;
    v4 = *(_DWORD **)(4 * i + v3);
    if ( v4[7] != ClientActor::m_CurActorFrame )
      continue;
    ClientActor::getPosition((ClientActor *)v18);
    v5 = (v18[0] - v15) * (v18[0] - v15) + (v18[1] - v16) * (v18[1] - v16) + (v18[2] - v17) * (v18[2] - v17);
    if ( v5 > 40960000 )
    {
      if ( (unsigned int)(v4[8] + 5) > v4[7] )
        continue;
LABEL_8:
      if ( (unsigned int)(v4[8] + 2) > v4[7] )
        continue;
      goto LABEL_9;
    }
    if ( v5 > 10240000 )
      goto LABEL_8;
LABEL_9:
    (*(void (__fastcall **)(_DWORD *, _DWORD))(*v4 + 20))(v4, LODWORD(a2));
    v4[8] = v4[7];
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_DWORD *)this + 4);
    if ( j >= (*((_DWORD *)this + 5) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(4 * j + v7);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v8 + 20))(v8, LODWORD(a2));
  }
  for ( k = 0; ; ++k )
  {
    v10 = *((_DWORD *)this + 7);
    result = *((_DWORD *)this + 8);
    if ( k >= (result - v10) >> 2 )
      break;
    v12 = *(_DWORD *)(4 * k + v10);
    (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v12 + 20))(v12, LODWORD(a2));
  }
  ++ClientActor::m_CurActorFrame;
  return result;
}


//======================================================================
// ClientActorMgr::clearMobs(void)
// address: 0x002C7274   size: 0x22 (34 bytes)
//======================================================================
int __fastcall ClientActorMgr::clearMobs(int this)
{
  int v1; // r5
  unsigned int i; // r4
  int v3; // r3

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(v1 + 4);
    if ( i >= (*(_DWORD *)(v1 + 8) - v3) >> 2 )
      break;
    this = ClientActor::setNeedClear(*(ClientActor **)(4 * i + v3), 0);
  }
  return this;
}


//======================================================================
// ClientActorMgr::sendMonsterSpawnMsg(ClientMob *)
// address: 0x002C7296   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientActorMgr::sendMonsterSpawnMsg(ClientActorMgr *this, ClientMob *a2)
{
  ;
}


//======================================================================
// ClientActorMgr::sendMonsterDeleteMsg(ClientMob *)
// address: 0x002C7298   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientActorMgr::sendMonsterDeleteMsg(ClientActorMgr *this, ClientMob *a2)
{
  ;
}


//======================================================================
// ClientActorMgr::sendItemSpawnMsg(ClientItem *)
// address: 0x002C729A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientActorMgr::sendItemSpawnMsg(ClientActorMgr *this, ClientItem *a2)
{
  ;
}


//======================================================================
// ClientActorMgr::sendItemDeleteMsg(ClientItem *)
// address: 0x002C729C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ClientActorMgr::sendItemDeleteMsg(ClientActorMgr *this, ClientItem *a2)
{
  ;
}


//======================================================================
// ClientActorMgr::addMobSpawnNum(int,int)
// address: 0x002C7378   size: 0xC (12 bytes)
//======================================================================
char *__fastcall ClientActorMgr::addMobSpawnNum(ClientActorMgr *this, int a2, int a3)
{
  char *result; // r0

  result = (char *)this + 4 * a2;
  *((_DWORD *)result + 11) += a3;
  return result;
}


//======================================================================
// ClientActorMgr::findPlayerByUin(int)
// address: 0x002C7384   size: 0x22 (34 bytes)
//======================================================================
ClientPlayer *__fastcall ClientActorMgr::findPlayerByUin(ClientActorMgr *this, int a2)
{
  ClientPlayer **i; // r4
  ClientPlayer *v5; // r5

  for ( i = *((ClientPlayer ***)this + 4); i != *((ClientPlayer ***)this + 5); ++i )
  {
    v5 = *i;
    if ( ClientPlayer::getUin(v5) == a2 )
      return v5;
  }
  return nullptr;
}


//======================================================================
// ClientActorMgr::areAllPlayersAsleep(void)
// address: 0x002C73A6   size: 0x28 (40 bytes)
//======================================================================
int __fastcall ClientActorMgr::areAllPlayersAsleep(ClientActorMgr *this)
{
  int v1; // r1
  int i; // r3
  int result; // r0
  int v4; // r2

  v1 = *((_DWORD *)this + 5);
  for ( i = *((_DWORD *)this + 4); i != v1; i += 4 )
  {
    result = *(_DWORD *)(*(_DWORD *)i + 60) & 0x100;
    if ( result == 0 )
      return result;
    v4 = *(_DWORD *)(*(_DWORD *)i + 208);
    if ( v4 <= 99 )
      return 0;
  }
  return 1;
}


//======================================================================
// ClientActorMgr::wakeAllPlayers(void)
// address: 0x002C73CE   size: 0x24 (36 bytes)
//======================================================================
ClientPlayer *__fastcall ClientActorMgr::wakeAllPlayers(ClientPlayer *this)
{
  ClientPlayer **v1; // r4
  ClientPlayer *v2; // r5

  v1 = *((ClientPlayer ***)this + 4);
  v2 = this;
  while ( v1 != *((ClientPlayer ***)v2 + 5) )
  {
    this = *v1;
    if ( (*((_DWORD *)*v1 + 15) & 0x100) != 0 )
      this = (ClientPlayer *)ClientPlayer::wakeUp(this, false, false, true);
    ++v1;
  }
  return this;
}


//======================================================================
// ClientActorMgr::findActorByWID(long long)
// address: 0x002C73F2   size: 0x28 (40 bytes)
//======================================================================
int __fastcall ClientActorMgr::findActorByWID(ClientActorMgr *this, __int64 a2)
{
  int v3; // r4
  int v4; // r1
  int v5; // r5
  int result; // r0

  v3 = *((_DWORD *)this + 1);
  v4 = 0;
  v5 = (*((_DWORD *)this + 2) - v3) >> 2;
  while ( v4 != v5 )
  {
    result = *(_DWORD *)(v3 + 4 * v4);
    if ( *(_QWORD *)(result + 40) == a2 )
      return result;
    ++v4;
  }
  return 0;
}


//======================================================================
// ClientActorMgr::checkMobStandPoint(MonsterDef const*,Chunk *,WCoord const&)
// address: 0x002C741C   size: 0x96 (150 bytes)
//======================================================================
bool __fastcall ClientActorMgr::checkMobStandPoint(int a1, int a2, Chunk *this, int *a4)
{
  unsigned __int16 *Block; // r0
  unsigned __int16 *v8; // r5
  int v9; // r0
  int v11; // r2
  Block *v12; // r0
  int v13; // r0
  int v14; // r4
  int v15; // r5
  int v16; // r2

  Block = (unsigned __int16 *)Chunk::getBlock(this, *a4, a4[1], a4[2]);
  v8 = Block;
  if ( *(_DWORD *)(a2 + 104) == 3 )
  {
    v9 = *Block & 0xFFF;
    if ( v9 == 3 )
      return true;
    return v9 == 4;
  }
  else
  {
    v11 = a4[1];
    if ( v11 > 0 )
    {
      v12 = (Block *)Chunk::getBlock(this, *a4, v11 - 1, a4[2]);
      if ( Block::moveCollide(v12) != 0 && *v8 << 20 == 0 )
      {
        v13 = (int)j_ceil((float)((float)*(int *)(a2 + 168) / 100.0));
        v14 = 1;
        v15 = v13;
        while ( v14 <= v15 )
        {
          v16 = v14 + a4[1];
          if ( v16 <= 255 && *(unsigned __int16 *)Chunk::getBlock(this, *a4, v16, a4[2]) << 20 != 0 )
            return false;
          ++v14;
        }
        return true;
      }
    }
    return false;
  }
}


//======================================================================
// ClientActorMgr::getMonsterValidPos(ClientMob *,WCoord const&,int,int,int,int,WCoord&)
// address: 0x002C74B8   size: 0xE8 (232 bytes)
//======================================================================
bool __fastcall ClientActorMgr::getMonsterValidPos(
        World **this,
        ClientMob *a2,
        const WCoord *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        WCoord *a8)
{
  int v10; // r0
  int v11; // r5
  int v12; // r5
  int v13; // r0
  int v14; // r4
  int v15; // r0
  int v16; // r1
  int v17; // r3
  Chunk *Chunk; // r0
  int v19; // r12
  int v20; // r1
  _BOOL4 result; // r0
  int v22; // r3
  int v23; // r4
  int i; // [sp+4h] [bp-38h]
  int v25; // [sp+8h] [bp-34h]
  int v26; // [sp+Ch] [bp-30h]
  int v27; // [sp+14h] [bp-28h] BYREF
  int v28; // [sp+18h] [bp-24h]
  int v29; // [sp+1Ch] [bp-20h]
  _DWORD v30[3]; // [sp+20h] [bp-1Ch] BYREF
  int v31[4]; // [sp+2Ch] [bp-10h] BYREF

  v26 = *((_DWORD *)a2 + 48);
  v25 = a4 - a5;
  for ( i = 0; i < a7; ++i )
  {
    v10 = GenRandomInt(-v25, v25);
    if ( v10 < 0 )
      v11 = v10 - a5;
    else
      v11 = v10 + a5;
    v12 = 100 * v11;
    v13 = GenRandomInt(-v25, v25);
    if ( v13 < 0 )
      v14 = v13 - a5;
    else
      v14 = v13 + a5;
    v15 = GenRandomInt(-a6, a6);
    v16 = *(_DWORD *)a3;
    v17 = 100 * v14 + *((_DWORD *)a3 + 2);
    v28 = 100 * v15 + *((_DWORD *)a3 + 1);
    v27 = v16 + v12;
    v29 = v17;
    if ( v28 >= 0 )
    {
      CoordDivBlock((const WCoord *)v30, &v27);
      Chunk = (Chunk *)World::getChunk(*this, (const WCoord *)v30);
      if ( Chunk != nullptr )
      {
        v19 = v30[1] - *((_DWORD *)Chunk + 70);
        v20 = v30[2] - *((_DWORD *)Chunk + 71);
        v31[0] = v30[0] - *((_DWORD *)Chunk + 69);
        v31[1] = v19;
        v31[2] = v20;
        result = ClientActorMgr::checkMobStandPoint((int)this, v26, Chunk, v31);
        if ( result )
        {
          v22 = v28;
          v23 = v29;
          *(_DWORD *)a8 = v27;
          *((_DWORD *)a8 + 1) = v22;
          *((_DWORD *)a8 + 2) = v23;
          return result;
        }
      }
    }
  }
  return false;
}


//======================================================================
// ClientActorMgr::transportMonster(ClientMob *,WCoord const&,int,int)
// address: 0x002C75A0   size: 0x34 (52 bytes)
//======================================================================
bool __fastcall ClientActorMgr::transportMonster(World **this, ClientMob *a2, const WCoord *a3, int a4, int a5)
{
  _BOOL4 MonsterValidPos; // r5
  _BYTE v8[16]; // [sp+14h] [bp-10h] BYREF

  MonsterValidPos = ClientActorMgr::getMonsterValidPos(this, a2, a3, a4, 0, 5, a5, (WCoord *)v8);
  if ( MonsterValidPos )
    (*(void (__fastcall **)(_DWORD, _BYTE *, _DWORD, _DWORD))(**((_DWORD **)a2 + 17) + 16))(
      *((_DWORD *)a2 + 17),
      v8,
      *(_DWORD *)(*((_DWORD *)a2 + 17) + 4),
      *(_DWORD *)(*((_DWORD *)a2 + 17) + 8));
  return MonsterValidPos;
}


//======================================================================
// ClientActorMgr::minDistToPlayer(WCoord const&,ClientPlayer **,bool)
// address: 0x002C75D4   size: 0x82 (130 bytes)
//======================================================================
int __fastcall ClientActorMgr::minDistToPlayer(ClientActorMgr *this, const WCoord *a2, ClientPlayer **a3, int a4)
{
  int v4; // r6
  unsigned int v5; // r4
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // r2
  int v11; // r12
  int v12; // r1
  int v13; // r0
  ClientPlayer *v15; // [sp+0h] [bp-24h]
  _DWORD v18[4]; // [sp+14h] [bp-10h] BYREF

  v4 = 0x7FFFFFFF;
  v5 = 0;
  v15 = nullptr;
  while ( 1 )
  {
    v8 = *((_DWORD *)this + 4);
    if ( v5 >= (*((_DWORD *)this + 5) - v8) >> 2 )
      break;
    if ( a4 == 0 || ClientActor::isDead(*(ClientActor **)(4 * v5 + v8)) == 0 )
    {
      v9 = *(_DWORD **)(*(_DWORD *)(*((_DWORD *)this + 4) + 4 * v5) + 68);
      v10 = v9[9];
      v11 = v9[10];
      v18[0] = v9[8] - *(_DWORD *)a2;
      v12 = *((_DWORD *)a2 + 2);
      v18[1] = v10 - *((_DWORD *)a2 + 1);
      v18[2] = v11 - v12;
      v13 = (int)WCoord::length((WCoord *)v18);
      if ( v13 < v4 )
      {
        v4 = v13;
        v15 = *(ClientPlayer **)(*((_DWORD *)this + 4) + 4 * v5);
      }
    }
    ++v5;
  }
  if ( a3 != nullptr )
    *a3 = v15;
  return v4;
}


//======================================================================
// ClientActorMgr::selectNearPlayer(WCoord const&,int)
// address: 0x002C765C   size: 0x80 (128 bytes)
//======================================================================
ClientActor *__fastcall ClientActorMgr::selectNearPlayer(ClientActorMgr *this, const WCoord *a2, int a3)
{
  unsigned int v4; // r6
  int v6; // r3
  ClientActor *v7; // r5
  _DWORD *v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3
  int v12; // r12
  int v13; // r2
  float v15; // [sp+0h] [bp-24h]
  ClientActor *v16; // [sp+4h] [bp-20h]
  float v17; // [sp+8h] [bp-1Ch]
  _DWORD v19[4]; // [sp+14h] [bp-10h] BYREF

  v4 = 0;
  v17 = 100000000.0;
  v16 = nullptr;
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 4);
    if ( v4 >= (*((_DWORD *)this + 5) - v6) >> 2 )
      break;
    v7 = *(ClientActor **)(4 * v4 + v6);
    if ( ClientActor::isDead(v7) == 0 )
    {
      v8 = *((_DWORD **)v7 + 17);
      v9 = v8[9] - *((_DWORD *)a2 + 1);
      v10 = v8[10];
      v11 = v8[8];
      v12 = v10 - *((_DWORD *)a2 + 2);
      v13 = *(_DWORD *)a2;
      v19[1] = v9;
      v19[0] = v11 - v13;
      v19[2] = v12;
      v15 = WCoord::length((WCoord *)v19);
      if ( v15 < (float)a3 && v15 < v17 )
      {
        v16 = v7;
        v17 = v15;
      }
    }
    ++v4;
  }
  return v16;
}


//======================================================================
// ClientActorMgr::~ClientActorMgr()
// address: 0x002C7700   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZN14ClientActorMgrD1Ev'
void __fastcall ClientActorMgr::~ClientActorMgr(ClientActorMgr *this)
{
  unsigned int i; // r5
  int v3; // r3
  unsigned int j; // r5
  int v5; // r3
  unsigned int k; // r5
  int v7; // r3
  void *v8; // r0
  void *v9; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 1);
    if ( i >= (*((_DWORD *)this + 2) - v3) >> 2 )
      break;
    ClientActor::release(*(ClientActor **)(4 * i + v3));
  }
  for ( j = 0; ; ++j )
  {
    v5 = *((_DWORD *)this + 4);
    if ( j >= (*((_DWORD *)this + 5) - v5) >> 2 )
      break;
    ClientActor::release(*(ClientActor **)(4 * j + v5));
  }
  for ( k = 0; ; ++k )
  {
    v7 = *((_DWORD *)this + 7);
    if ( k >= (*((_DWORD *)this + 8) - v7) >> 2 )
      break;
    ClientActor::release(*(ClientActor **)(4 * k + v7));
  }
  std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_erase(
    (int)this + 76,
    *((_DWORD **)this + 21));
  v8 = *((void **)this + 7);
  if ( v8 != nullptr )
    operator delete(v8);
  sub_2C6EC2(*((void **)this + 4));
  v9 = *((void **)this + 1);
  if ( v9 != nullptr )
    operator delete(v9);
}


//======================================================================
// ClientActorMgr::spawnBoss(ActorBoss *)
// address: 0x002C77FC   size: 0x34 (52 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientActorMgr::spawnBoss(_DWORD *a1, int a2)
{
  _DWORD *v3; // r3
  int v4; // [sp+4h] [bp-4h] BYREF

  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 8))(a2, *a1);
  v3 = (_DWORD *)a1[8];
  if ( v3 == (_DWORD *)a1[9] )
  {
    std::vector<ActorBoss *>::_M_emplace_back_aux<ActorBoss * const&>((int)(a1 + 7), &v4);
  }
  else
  {
    if ( v3 != nullptr )
      *v3 = v4;
    a1[8] += 4;
  }
}


//======================================================================
// ClientActorMgr::removeActorByChunk(ClientActor *)
// address: 0x002C79C8   size: 0x9C (156 bytes)
//======================================================================
int __fastcall ClientActorMgr::removeActorByChunk(ClientActorMgr *this, ClientActor *a2)
{
  ClientActor **v3; // r3
  ClientActor **v4; // r1
  int i; // r5
  ClientActor **v6; // r2
  int v7; // r5
  ClientActor **j; // r2

  v3 = *((ClientActor ***)this + 1);
  v4 = *((ClientActor ***)this + 2);
  for ( i = ((char *)v4 - (char *)v3) >> 4; ; --i )
  {
    v6 = v3;
    if ( i <= 0 )
      break;
    if ( *v3 == a2 )
      goto LABEL_21;
    if ( v3[1] == a2 )
    {
      ++v3;
      goto LABEL_21;
    }
    if ( v3[2] == a2 )
    {
      v3 += 2;
      goto LABEL_21;
    }
    v3 += 4;
    if ( *(v3 - 1) == a2 )
    {
      v3 = v6 + 3;
      goto LABEL_21;
    }
  }
  v7 = v4 - v3;
  if ( v7 != 2 )
  {
    if ( v7 != 3 )
    {
      if ( v7 != 1 )
        goto LABEL_28;
LABEL_19:
      if ( *v6 != a2 )
        goto LABEL_28;
      goto LABEL_20;
    }
    if ( *v3 == a2 )
      goto LABEL_21;
    v6 = v3 + 1;
  }
  if ( *v6 != a2 )
  {
    ++v6;
    goto LABEL_19;
  }
LABEL_20:
  v3 = v6;
LABEL_21:
  if ( v3 != v4 )
  {
    for ( j = v3 + 1; j != v4; ++j )
    {
      if ( *j != a2 )
        *v3++ = *j;
    }
    v4 = v3;
  }
LABEL_28:
  if ( v4 != *((ClientActor ***)this + 2) )
    *((_DWORD *)this + 2) = v4;
  (*(void (__fastcall **)(ClientActor *, int))(*(_DWORD *)a2 + 12))(a2, 1);
  return ClientActor::release(a2);
}


//======================================================================
// ClientActorMgr::addActorByChunk(ClientActor *)
// address: 0x002C7A64   size: 0x20 (32 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientActorMgr::addActorByChunk(ClientActorMgr *this, ClientActor *a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  ClientActor::addRef(a2);
  std::vector<ClientActor *>::push_back((int)this + 4, &v3);
  (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 8))(v3, *(_DWORD *)this);
}


//======================================================================
// ClientActorMgr::spawnActor(ClientActor *,bool)
// address: 0x002C7A84   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall ClientActorMgr::spawnActor(__int64 this, int a2)
{
  World **v2; // r5
  int v3; // r4
  int v5; // r4
  int v6; // r1
  __int64 v8; // [sp+0h] [bp-8h] BYREF

  v8 = this;
  v2 = (World **)this;
  v3 = this;
  (*(void (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)HIDWORD(this) + 8))(HIDWORD(this), *(_DWORD *)this);
  std::vector<ClientActor *>::push_back(v3 + 4, (_DWORD *)&v8 + 1);
  if ( a2 != 0 )
  {
    v5 = HIDWORD(v8);
    *(_DWORD *)(v5 + 40) = World::get_wid(*v2);
    *(_DWORD *)(v5 + 44) = v6;
  }
  return v8;
}


//======================================================================
// ClientActorMgr::spawnActor(ClientActor *,WCoord const&,float,float,bool)
// address: 0x002C7AB2   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall ClientActorMgr::spawnActor(
        ClientActorMgr *this,
        ClientActor *a2,
        const WCoord *a3,
        float a4,
        float a5,
        bool a6)
{
  (*(void (__fastcall **)(_DWORD, const WCoord *, _DWORD, _DWORD))(**((_DWORD **)a2 + 17) + 16))(
    *((_DWORD *)a2 + 17),
    a3,
    LODWORD(a4),
    LODWORD(a5));
  return ClientActorMgr::spawnActor(__SPAIR64__((unsigned int)a2, (unsigned int)this), a6);
}


//======================================================================
// ClientActorMgr::spawnActor(ClientActor *,int,int,int,float,float)
// address: 0x002C7AD8   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall ClientActorMgr::spawnActor(
        ClientActorMgr *this,
        ClientActor *a2,
        int a3,
        int a4,
        int a5,
        float a6,
        float a7)
{
  int v8; // [sp+Ch] [bp-4h] BYREF
  _DWORD savedregs[4]; // [sp+10h] [bp+0h]

  v8 = a3;
  savedregs[0] = a4;
  savedregs[1] = a5;
  return ClientActorMgr::spawnActor(this, a2, (const WCoord *)&v8, a6, a7, true);
}


//======================================================================
// ClientActorMgr::spawnItem(WCoord const&,int,int,int,bool,int,int *)
// address: 0x002C7AF8   size: 0x84 (132 bytes)
//======================================================================
ClientItem *__fastcall ClientActorMgr::spawnItem(
        ClientActorMgr *this,
        const WCoord *a2,
        int a3,
        int a4,
        int a5,
        bool a6,
        int a7,
        int *a8)
{
  ClientItem *v11; // r5
  int v12; // r4
  float v13; // r0

  v11 = (ClientItem *)operator new(0xF8u);
  ClientItem::ClientItem(v11, a3, a4, a5, a7, a8);
  v12 = *((_DWORD *)v11 + 17);
  (*(void (__fastcall **)(int, const WCoord *, _DWORD, _DWORD))(*(_DWORD *)v12 + 16))(v12, a2, 0, 0);
  *(float *)(v12 + 4) = GenRandomFloat() * 360.0;
  v13 = (float)(GenRandomFloat() * 20.0) - 10.0;
  *(_DWORD *)(v12 + 76) = 1101004800;
  *(float *)(v12 + 72) = v13;
  *(float *)(v12 + 80) = (float)(GenRandomFloat() * 20.0) - 10.0;
  ClientActorMgr::spawnActor(__SPAIR64__((unsigned int)v11, (unsigned int)this), a6);
  return v11;
}


//======================================================================
// ClientActorMgr::spawnMonster(WCoord const&,int,bool,bool)
// address: 0x002C7B94   size: 0x64 (100 bytes)
//======================================================================
int __fastcall ClientActorMgr::spawnMonster(World **this, const WCoord *a2, ClientMob *a3, int a4, bool a5)
{
  ActorEnderman *v8; // r0
  int v9; // r7
  ActorEnderman *v10; // r4
  signed int v11; // r0
  int result; // r0
  char *MonsterDef; // r0
  void (__fastcall *v14)(int, const WCoord *, float, _DWORD); // [sp+0h] [bp-Ch]

  if ( a5
    || (MonsterDef = DefManager::getMonsterDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, (int)a3),
        (result = CanMonbSpawnHere(MonsterDef, *this, (int *)a2)) != 0) )
  {
    v8 = ClientMob::createFromDef(a3, (int)a2);
    v9 = *((_DWORD *)v8 + 17);
    v10 = v8;
    v14 = *(void (__fastcall **)(int, const WCoord *, float, _DWORD))(*(_DWORD *)v9 + 16);
    v11 = GenRandomInt(0x168u);
    ((void (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD))v14)(v9, a2, (float)v11, 0);
    ClientActorMgr::spawnActor(__SPAIR64__((unsigned int)v10, (unsigned int)this), a4);
    return (int)v10;
  }
  return result;
}


//======================================================================
// ClientActorMgr::performWorldGenSpawning(BiomeGenBase *,int,int,int,int,ChunkRandGen &)
// address: 0x002C7BFC   size: 0x1AA (426 bytes)
//======================================================================
int __fastcall ClientActorMgr::performWorldGenSpawning(
        int this,
        BiomeGenBase *a2,
        int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        ChunkRandGen *a7)
{
  World **v7; // r7
  int v8; // r5
  int i; // r1
  World *v10; // r0
  unsigned int v11; // r6
  unsigned int v12; // r6
  unsigned int v13; // r6
  unsigned int v14; // r6
  int v15; // [sp+8h] [bp-4Ch]
  int v16; // [sp+Ch] [bp-48h]
  int v17; // [sp+14h] [bp-40h]
  int j; // [sp+18h] [bp-3Ch]
  ClientMob *v19; // [sp+1Ch] [bp-38h]
  int v22; // [sp+28h] [bp-2Ch]
  int v23; // [sp+2Ch] [bp-28h]
  int v24; // [sp+30h] [bp-24h]
  int v26; // [sp+38h] [bp-1Ch] BYREF
  int TopSolidOrLiquidBlock; // [sp+3Ch] [bp-18h]
  int v28; // [sp+40h] [bp-14h]
  _DWORD v29[4]; // [sp+44h] [bp-10h] BYREF

  v7 = (World **)this;
  if ( *(_BYTE *)(this + 40) != 0 )
  {
    while ( 1 )
    {
      this = ChunkRandGen::getFloat(a7) < 0.1;
      if ( this == 0 )
        break;
      this = BiomeGenBase::getSpawnMobs(a2, 1);
      v19 = (ClientMob *)this;
      if ( this < 0 )
        break;
      v24 = *((_DWORD *)DefManager::getMonsterDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, this) + 52);
      ChunkRandGen::get(a7);
      v22 = a3 + ChunkRandGen::get(a7) % a5;
      v8 = v22;
      v23 = a4 + ChunkRandGen::get(a7) % a6;
      v16 = v23;
      for ( i = 0; ; i = v17 + 1 )
      {
        v17 = i;
        if ( i >= v24 )
          break;
        for ( j = 4; j != 0; --j )
        {
          TopSolidOrLiquidBlock = World::getTopSolidOrLiquidBlock(*v7, v8, v16);
          v28 = v16;
          v10 = *v7;
          v26 = v8;
          v15 = 0;
          if ( sub_2C6ED0(v10, 1, (const WCoord *)&v26) != 0 )
          {
            v29[1] = 100 * TopSolidOrLiquidBlock;
            v29[2] = 100 * v28 + 50;
            v29[0] = 100 * v26 + 50;
            ClientActorMgr::spawnMonster(v7, (const WCoord *)v29, v19, 1, true);
            v15 = 1;
          }
          v11 = ChunkRandGen::get(a7);
          v8 += v11 % 5 - ChunkRandGen::get(a7) % 5u;
          v12 = ChunkRandGen::get(a7);
          for ( v16 += v12 % 5 - ChunkRandGen::get(a7) % 5u;
                v8 < a3 || v8 >= (int)(a3 + a5) || v16 < a4 || v16 >= (int)(a4 + a6);
                v16 = v14 - ChunkRandGen::get(a7) % 5u )
          {
            v13 = v22 + ChunkRandGen::get(a7) % 5u;
            v8 = v13 - ChunkRandGen::get(a7) % 5u;
            v14 = v23 + ChunkRandGen::get(a7) % 5u;
          }
          if ( v15 != 0 )
            break;
        }
      }
    }
  }
  return this;
}


//======================================================================
// ClientActorMgr::spawnMobPackInChunk(World *,MOB_TYPE,WCoord const&)
// address: 0x002C7DB0   size: 0x17A (378 bytes)
//======================================================================
int __fastcall ClientActorMgr::spawnMobPackInChunk(int a1, World *a2, int a3, WCoord *a4)
{
  int v4; // r7
  int v6; // r0
  unsigned int v7; // r4
  unsigned int v8; // r4
  unsigned int v9; // r4
  int BiomeGen; // r0
  int SpawnMobs; // r0
  int v13; // [sp+10h] [bp-34h]
  int v16; // [sp+28h] [bp-1Ch] BYREF
  int v17; // [sp+2Ch] [bp-18h]
  int v18; // [sp+30h] [bp-14h]
  _DWORD v19[4]; // [sp+34h] [bp-10h] BYREF

  v4 = *((_DWORD *)a4 + 2);
  v6 = *(_DWORD *)a4;
  v17 = *((_DWORD *)a4 + 1);
  v18 = v4;
  v16 = v6;
  World::getChunk(a2, a4);
  v13 = 0;
  do
  {
    v7 = GenRandomInt(6u);
    v16 += v7 - GenRandomInt(6u);
    v8 = GenRandomInt(6u);
    v18 += v8 - GenRandomInt(6u);
    v9 = GenRandomInt(1u);
    v17 += v9 - GenRandomInt(1u);
    if ( sub_2C6ED0(a2, a3, (const WCoord *)&v16) != 0 )
    {
      v19[1] = 100 * v17;
      v19[2] = 100 * v18 + 50;
      v19[0] = 100 * v16 + 50;
      if ( ClientActorMgr::selectNearPlayer((ClientActorMgr *)a1, (const WCoord *)v19, 24) != nullptr
        || *((_WORD *)a2 + 30) == 0
        && ((v16 - *(_DWORD *)(g_WorldMgr + 8)) * (__int64)(v16 - *(_DWORD *)(g_WorldMgr + 8))
          + (v17 - *(_DWORD *)(g_WorldMgr + 12)) * (__int64)(v17 - *(_DWORD *)(g_WorldMgr + 12))
          + (v18 - *(_DWORD *)(g_WorldMgr + 16)) * (__int64)(v18 - *(_DWORD *)(g_WorldMgr + 16)) > 576) << 24 == 0 )
      {
        goto LABEL_13;
      }
      if ( *(int *)(a1 + 100) < 0 )
      {
        BiomeGen = World::getBiomeGen(a2, v16, v18);
        SpawnMobs = BiomeGenBase::getSpawnMobs(BiomeGen, a3);
        *(_DWORD *)(a1 + 100) = SpawnMobs;
        if ( SpawnMobs < 0 )
          continue;
      }
      if ( ClientActorMgr::spawnMonster((World **)a1, (const WCoord *)v19, *(ClientMob **)(a1 + 100), 1, false) != 0 )
        ++*(_DWORD *)(a1 + 104);
      if ( *(_DWORD *)(a1 + 104) >= *((_DWORD *)DefManager::getMonsterDef(
                                                  (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                                                  *(_DWORD *)(a1 + 100))
                                    + 52) )
        return 0;
    }
LABEL_13:
    ++v13;
  }
  while ( v13 <= 3 );
  return 1;
}


//======================================================================
// ClientActorMgr::trySpawnMobs(World *,MOB_TYPE)
// address: 0x002C7F34   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall ClientActorMgr::trySpawnMobs(int result, World *a2, int a3)
{
  int v4; // r4
  int i; // r5
  int TopFilledSegment; // r0
  unsigned int v7; // r0
  int v8; // r3
  int BlockID; // r0
  int j; // r6
  Chunk *Chunk; // [sp+0h] [bp-1Ch]
  _DWORD v13[2]; // [sp+Ch] [bp-10h] BYREF
  unsigned int v14; // [sp+14h] [bp-8h]

  v4 = result;
  if ( *(_DWORD *)(result + 4 * (a3 + 10) + 4) < *(_DWORD *)&aF_0[4 * a3] * *(_DWORD *)(result + 96) / 256 )
  {
    for ( i = *(_DWORD *)(result + 88); i != v4 + 80; i = result )
    {
      if ( *(_BYTE *)(i + 24) != 0 )
      {
        Chunk = (Chunk *)World::getChunk(a2, *(_DWORD *)(i + 16), *(_DWORD *)(i + 20));
        v13[0] = GenRandomInt(0x10u);
        v14 = GenRandomInt(0x10u);
        TopFilledSegment = Chunk::getTopFilledSegment(Chunk);
        v7 = GenRandomInt(TopFilledSegment + 15);
        v13[0] += *((_DWORD *)Chunk + 69);
        v8 = *((_DWORD *)Chunk + 71);
        v13[1] = v7 + *((_DWORD *)Chunk + 70);
        v14 += v8;
        BlockID = World::getBlockID(a2, (const WCoord *)v13);
        if ( a3 != 3 && BlockID == 0 )
        {
          *(_DWORD *)(v4 + 100) = -1;
          *(_DWORD *)(v4 + 104) = 0;
          for ( j = 3; j != 0; --j )
          {
            if ( ClientActorMgr::spawnMobPackInChunk(v4, a2, a3, (WCoord *)v13) == 0 )
              break;
          }
        }
      }
      result = sub_391DDC(i);
    }
  }
  return result;
}


//======================================================================
// ClientActorMgr::checkMobGen(void)
// address: 0x002C7FFC   size: 0x142 (322 bytes)
//======================================================================
int __fastcall ClientActorMgr::checkMobGen(ClientActorMgr *this)
{
  int result; // r0
  bool v3; // r2
  _DWORD *v4; // r6
  char *v5; // r5
  _DWORD *v6; // r3
  int *v7; // r6
  int k; // r5
  int v9; // r2
  int v10; // r3
  int j; // [sp+8h] [bp-44h]
  int i; // [sp+Ch] [bp-40h]
  char v13; // [sp+10h] [bp-3Ch]
  _DWORD *v14; // [sp+1Ch] [bp-30h]
  unsigned int v15; // [sp+20h] [bp-2Ch]
  unsigned int v16; // [sp+24h] [bp-28h]
  int *v17; // [sp+30h] [bp-1Ch] BYREF
  unsigned int v18; // [sp+34h] [bp-18h] BYREF
  unsigned int v19; // [sp+38h] [bp-14h]
  int v20[4]; // [sp+3Ch] [bp-10h] BYREF

  PlayerControl::getPosition((PlayerControl *)v20);
  v14 = *(_DWORD **)this;
  v15 = CoordDivSection(v20[0]);
  v16 = CoordDivSection(v20[2]);
  std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_erase(
    (int)this + 76,
    *((_DWORD **)this + 21));
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 22) = (char *)this + 80;
  *((_DWORD *)this + 23) = (char *)this + 80;
  for ( i = -8; i != 9; ++i )
  {
    for ( j = -8; j != 9; ++j )
    {
      v18 = j + v15;
      v19 = i + v16;
      result = World::getChunk(v14, j + v15, i + v16);
      if ( result == 0 )
        continue;
      if ( j != -8 )
      {
        if ( j == 8 )
        {
          v3 = true;
          goto LABEL_9;
        }
        if ( i != -8 )
        {
          v3 = i == 8;
LABEL_9:
          v13 = v3;
          goto LABEL_11;
        }
      }
      v13 = 1;
LABEL_11:
      v18 = j + v15;
      v19 = i + v16;
      v4 = *((_DWORD **)this + 21);
      v5 = (char *)this + 80;
      while ( v4 != nullptr )
      {
        if ( sub_2C6EA0(v4 + 4, (int *)&v18) )
        {
          v6 = (_DWORD *)v4[3];
          v4 = v5;
        }
        else
        {
          v6 = (_DWORD *)v4[2];
        }
        v5 = (char *)v4;
        v4 = v6;
      }
      if ( v5 == (char *)this + 80 || (result = sub_2C6EA0((int *)&v18, (int *)v5 + 4)) != 0 )
      {
        v17 = (int *)&v18;
        result = std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<ChunkIndex&&>,std::tuple<>>(
                   (_DWORD *)this + 19,
                   (int)v5,
                   (int)&unk_4465E8,
                   &v17);
        v5 = (char *)result;
      }
      v5[24] = v13 ^ 1;
    }
  }
  v7 = (int *)((char *)this + 60);
  for ( k = 0; k != 4; ++k )
  {
    v9 = dword_4465D8[k];
    v10 = *v7 + 1;
    *v7 = v10;
    if ( v10 >= v9 )
    {
      *v7 = 0;
      result = ClientActorMgr::trySpawnMobs((int)this, *(World **)this, k);
    }
    ++v7;
  }
  return result;
}


//======================================================================
// ClientActorMgr::tick(void)
// address: 0x002C814C   size: 0xC4 (196 bytes)
//======================================================================
__int64 __fastcall ClientActorMgr::tick(__int64 this)
{
  int v1; // r4
  unsigned int v2; // r6
  int v3; // r3
  ClientActor *v4; // r5
  int v5; // r3
  int v6; // r2
  int v7; // r1
  unsigned int i; // r5
  int v9; // r3
  int v10; // r6
  unsigned int j; // r5
  int v12; // r3
  int v13; // r6
  int v14; // r1
  int v15; // r3
  __int64 v17; // [sp+0h] [bp-Ch]

  v17 = this;
  v1 = this;
  if ( *(_BYTE *)(this + 40) != 0 )
    ClientActorMgr::checkMobGen((ClientActorMgr *)this);
  v2 = 0;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v1 + 4);
    if ( v2 >= (*(_DWORD *)(v1 + 8) - v3) >> 2 )
      break;
    v4 = *(ClientActor **)(v3 + 4 * v2);
    HIDWORD(v17) = 4 * v2;
    ClientActorMgr::tickOneActor((World **)v1, v4, 0);
    v5 = *((_DWORD *)v4 + 6);
    if ( v5 > 0 )
      *((_DWORD *)v4 + 6) = v5 - 1;
    if ( *((_DWORD *)v4 + 6) != 0 )
    {
      ++v2;
    }
    else
    {
      (*(void (__fastcall **)(ClientActor *))(*(_DWORD *)v4 + 92))(v4);
      (*(void (__fastcall **)(ClientActor *, _DWORD))(*(_DWORD *)v4 + 12))(v4, 0);
      ClientActor::release(v4);
      v6 = *(_DWORD *)(v1 + 4) + HIDWORD(v17);
      v7 = *(_DWORD *)(v1 + 8);
      if ( v6 + 4 != v7 )
        std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientActor *>(
          (void *)(v6 + 4),
          v7,
          (void *)v6);
      *(_DWORD *)(v1 + 8) -= 4;
    }
  }
  for ( i = 0; ; ++i )
  {
    v9 = *(_DWORD *)(v1 + 16);
    if ( i >= (*(_DWORD *)(v1 + 20) - v9) >> 2 )
      break;
    v10 = 4 * i;
    ClientActorMgr::tickOneActor((World **)v1, *(ClientActor **)(v9 + 4 * i), 0);
    ClientPlayer::updateChunkView(*(ClientPlayer **)(*(_DWORD *)(v1 + 16) + v10));
  }
  for ( j = 0; ; ++j )
  {
    v12 = *(_DWORD *)(v1 + 28);
    if ( j >= (*(_DWORD *)(v1 + 32) - v12) >> 2 )
      break;
    v13 = 4 * j;
    ClientActorMgr::tickOneActor((World **)v1, *(ClientActor **)(v12 + 4 * j), 0);
    ActorBoss::updateChunkView(*(ActorBoss **)(*(_DWORD *)(v1 + 28) + v13), v14, *(_DWORD *)(v1 + 28), v15);
  }
  return v17;
}


//======================================================================
// ClientActorMgr::unregisterPlayer(ClientPlayer *)
// address: 0x002C822E   size: 0x34 (52 bytes)
//======================================================================
ClientPlayer *__fastcall ClientActorMgr::unregisterPlayer(ClientPlayer *this, ClientPlayer *a2)
{
  _DWORD *v2; // r2
  _DWORD *v3; // r3
  ClientPlayer *v4; // r4
  _DWORD *v5; // r5
  int v6; // r1

  v2 = *((_DWORD **)this + 5);
  v3 = *((_DWORD **)this + 4);
  v4 = this;
  while ( 1 )
  {
    v5 = v3;
    if ( v3 == v2 )
      break;
    this = (ClientPlayer *)*v3++;
    if ( this == a2 )
    {
      ClientActor::release(a2);
      v6 = *((_DWORD *)v4 + 5);
      this = (ClientPlayer *)(v5 + 1);
      if ( v5 + 1 != (_DWORD *)v6 )
        this = (ClientPlayer *)std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientPlayer *>(
                                 this,
                                 v6,
                                 v5);
      *((_DWORD *)v4 + 5) -= 4;
      return this;
    }
  }
  return this;
}


//======================================================================
// ClientActorMgr::registerPlayer(ClientPlayer *)
// address: 0x002C82F4   size: 0x18 (24 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> ClientActorMgr::registerPlayer(ClientActorMgr *this, ClientPlayer *a2)
{
  int v3; // [sp+4h] [bp-4h] BYREF

  ClientActor::addRef(a2);
  std::vector<ClientPlayer *>::push_back((int)this + 16, &v3);
}


//======================================================================
// ClientActorMgr::selectRandomPlayer(void)
// address: 0x002C830C   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall ClientActorMgr::selectRandomPlayer(ClientActorMgr *this)
{
  int v1; // r1
  int v2; // r2
  unsigned int v4; // r0
  int v5; // r7
  char *v6; // r5
  unsigned int i; // r5
  int v8; // r3
  int v9; // r4
  ClientActor *v11; // [sp+0h] [bp-14h] BYREF
  _BYTE *v12; // [sp+4h] [bp-10h] BYREF
  _BYTE *v13; // [sp+8h] [bp-Ch]
  char *v14; // [sp+Ch] [bp-8h]

  v1 = *((_DWORD *)this + 5);
  v2 = *((_DWORD *)this + 4);
  v12 = nullptr;
  v13 = nullptr;
  v14 = nullptr;
  v4 = (v1 - v2) >> 2;
  if ( v4 > 0x3FFFFFFF )
    sub_3BD058("vector::reserve");
  if ( v4 != 0 )
  {
    v5 = 4 * v4;
    v6 = (char *)operator new(4 * v4);
    std::__copy_move<true,true,std::random_access_iterator_tag>::__copy_m<ClientPlayer *>(nullptr, 0, v6);
    sub_2C6EC2(v12);
    v12 = v6;
    v13 = v6;
    v14 = &v6[v5];
  }
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)this + 4);
    if ( i >= (*((_DWORD *)this + 5) - v8) >> 2 )
      break;
    v11 = *(ClientActor **)(4 * i + v8);
    if ( ClientActor::isDead(v11) == 0 )
      std::vector<ClientPlayer *>::push_back((int)&v12, &v11);
  }
  if ( v12 == v13 )
    v9 = 0;
  else
    v9 = *(_DWORD *)&v12[4 * GenRandomInt((v13 - v12) >> 2)];
  sub_2C6EC2(v12);
  return v9;
}

