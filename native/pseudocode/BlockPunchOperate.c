// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockPunchOperate

//======================================================================
// BlockPunchOperate::getProgress(void)
// address: 0x002D7090   size: 0x1C (28 bytes)
//======================================================================
float __fastcall BlockPunchOperate::getProgress(BlockPunchOperate *this)
{
  return (float)*((int *)this + 5) / (float)*((int *)this + 7);
}


//======================================================================
// BlockPunchOperate::~BlockPunchOperate()
// address: 0x002D70AC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN17BlockPunchOperateD1Ev'
void __fastcall BlockPunchOperate::~BlockPunchOperate(BlockPunchOperate *this)
{
  *(_DWORD *)this = &off_462258;
}


//======================================================================
// BlockPunchOperate::~BlockPunchOperate()
// address: 0x002D7104   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockPunchOperate::~BlockPunchOperate(BlockPunchOperate *this)
{
  BlockPunchOperate::~BlockPunchOperate(this);
  operator delete(this);
}


//======================================================================
// BlockPunchOperate::end(void)
// address: 0x002D7160   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall BlockPunchOperate::end(_DWORD *this)
{
  _DWORD *v1; // r4
  int *v2; // r0
  int v3; // r3
  _DWORD v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v1 = this;
  if ( *(this + 8) != 0 )
  {
    v2 = (int *)*(this + 1);
    v3 = *v2;
    memset(v4, 0, sizeof(v4));
    (*(void (__fastcall **)(int *, _DWORD, _DWORD, _DWORD, _DWORD *, int))(v3 + 24))(
      v2,
      *(_DWORD *)(v3 + 24),
      *(_DWORD *)(g_pPlayerCtrl + 40),
      *(_DWORD *)(g_pPlayerCtrl + 44),
      v4,
      -1);
    this = ClientWorld::removeParticleEffect((ClientWorld *)v1[1], (ParticleNode *)v1[8]);
    v1[8] = 0;
  }
  return this;
}


//======================================================================
// BlockPunchOperate::begin(OperateTarget *,OperateTool *)
// address: 0x002D732C   size: 0x132 (306 bytes)
//======================================================================
int __fastcall BlockPunchOperate::begin(int a1)
{
  int v2; // r2
  int v3; // r3
  _DWORD *v4; // r1
  __int16 *Block; // r0
  int MineBlockTicks; // r0
  _DWORD *v7; // r6
  int *v8; // r3
  int v9; // r0
  int v10; // r1
  int v11; // r3
  int v12; // r0
  int v13; // r6
  int v14; // r7
  _DWORD *v15; // r3
  int v16; // r2
  int v17; // r4
  Ogre::Timer *v18; // r0
  __suseconds_t v19; // r1
  int v21; // [sp+10h] [bp-34h]
  void (__fastcall *v22)(int, _DWORD, int, int, int *, _DWORD); // [sp+10h] [bp-34h]
  int v23[3]; // [sp+1Ch] [bp-28h] BYREF
  int v24; // [sp+28h] [bp-1Ch] BYREF
  int v25; // [sp+2Ch] [bp-18h]
  int v26; // [sp+30h] [bp-14h]

  BlockOperate::begin();
  v4 = *(_DWORD **)(a1 + 8);
  if ( *v4 == 1 )
  {
    Block = World::getBlock(*(World **)(a1 + 4), (const WCoord *)(v4 + 1), v2, v3);
    MineBlockTicks = ClientPlayer::getMineBlockTicks(g_pPlayerCtrl, *Block & 0xFFF, a1 + 36);
    *(_DWORD *)(a1 + 28) = MineBlockTicks;
    if ( MineBlockTicks > 0 )
    {
      v7 = *(_DWORD **)(a1 + 8);
      v21 = v7[5];
      if ( (dword_51735C & 1) == 0 && _cxa_guard_acquire(&dword_51735C) != 0 )
      {
        dword_517360[0] = 0;
        dword_517364 = 50;
        dword_517368 = 50;
        dword_51736C = 99;
        dword_517370 = 50;
        dword_517374 = 50;
        dword_517378 = 50;
        dword_51737C = 50;
        dword_517380 = 0;
        dword_517384 = 50;
        dword_517388 = 50;
        dword_51738C = 99;
        dword_517390 = 50;
        dword_517394 = 0;
        dword_517398 = 50;
        dword_51739C = 50;
        dword_5173A0 = 99;
        dword_5173A4 = 50;
        _cxa_guard_release(&dword_51735C);
      }
      v8 = &dword_517360[3 * v21];
      v9 = 100 * v7[2] + v8[1];
      v10 = 100 * v7[3] + v8[2];
      v23[0] = 100 * v7[1] + *v8;
      v11 = *(_DWORD *)(a1 + 8);
      v23[2] = v10;
      v23[1] = v9;
      *(_DWORD *)(a1 + 32) = ClientWorld::addParticleEffect(
                               *(World **)(a1 + 4),
                               1,
                               v23,
                               *(_DWORD *)(v11 + 20),
                               0xFFFFFFFF);
      v12 = *(_DWORD *)(a1 + 4);
      v22 = *(void (__fastcall **)(int, _DWORD, int, int, int *, _DWORD))(*(_DWORD *)v12 + 24);
      v13 = *(_DWORD *)(g_pPlayerCtrl + 40);
      v14 = *(_DWORD *)(g_pPlayerCtrl + 44);
      v15 = *(_DWORD **)(a1 + 8);
      v16 = 100 * v15[3];
      v17 = 100 * v15[1];
      v25 = 100 * v15[2];
      v26 = v16;
      v24 = v17;
      v22(v12, v22, v13, v14, &v24, 0);
    }
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 10;
    v24 = 4;
    LOBYTE(v25) = 1;
    v18 = (Ogre::Timer *)ClientActor::sendEvent(g_pPlayerCtrl);
    dword_5173A8 = Ogre::Timer::getSystemTick(v18, v19);
  }
  return 5;
}


//======================================================================
// BlockPunchOperate::BlockPunchOperate(void)
// address: 0x002D7470   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN17BlockPunchOperateC1Ev'
void __fastcall BlockPunchOperate::BlockPunchOperate(BlockPunchOperate *this)
{
  *(_DWORD *)this = &off_460BD8;
  *((_DWORD *)this + 8) = 0;
}


//======================================================================
// BlockPunchOperate::destroyBlock(WCoord const&)
// address: 0x002D7484   size: 0x1C2 (450 bytes)
//======================================================================
int __fastcall BlockPunchOperate::destroyBlock(BlockPunchOperate *this, const WCoord *a2, int a3)
{
  int v5; // r2
  int v6; // r3
  int BlockDef; // r6
  int v8; // r0
  int v9; // r1
  int v10; // r3
  int result; // r0
  double v12; // r4
  double v13; // r0
  World *v14; // r1
  int v15; // r6
  int v16; // r2
  ActorExpOrb *v17; // r0
  WCoord *v18; // [sp+0h] [bp-154h]
  int BlockID; // [sp+18h] [bp-13Ch]
  int Material; // [sp+20h] [bp-134h]
  int BlockData; // [sp+24h] [bp-130h]
  _DWORD v22[3]; // [sp+28h] [bp-12Ch] BYREF
  _DWORD v23[3]; // [sp+34h] [bp-120h] BYREF
  int v24[3]; // [sp+40h] [bp-114h] BYREF
  char v25[256]; // [sp+4Ch] [bp-108h] BYREF

  BlockID = World::getBlockID(*((World **)this + 1), a2, a3, _stack_chk_guard);
  BlockData = World::getBlockData(*((World **)this + 1), a2, v5, v6);
  Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, BlockID);
  BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID);
  (*(void (__fastcall **)(int, int, int, int, int))(*(_DWORD *)g_pPlayerCtrl + 208))(g_pPlayerCtrl, 3, 6, BlockID, 1);
  v8 = 100 * *((_DWORD *)a2 + 1) + 50;
  v9 = 100 * *((_DWORD *)a2 + 2) + 50;
  v24[0] = 100 * *(_DWORD *)a2 + 50;
  v24[1] = v8;
  v24[2] = v9;
  ClientWorld::addParticleEffect(*((World **)this + 1), 0, v24, 0, 0x28u);
  World::destroyBlock(*((World **)this + 1), a2, *((_DWORD *)this + 9), v10);
  BlockCenterCoord(v22, a2);
  if ( *(_BYTE *)(BlockDef + 308) != 0 )
    EffectManager::playSound(
      (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
      (const WCoord *)v22,
      (const char *)(BlockDef + 308),
      1.0,
      1.0,
      true);
  else
    EffectManager::playSound(
      (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
      (const WCoord *)v22,
      "dig.grass",
      1.0,
      1.0,
      true);
  (*(void (__fastcall **)(int, _DWORD, const WCoord *, int))(*(_DWORD *)Material + 124))(
    Material,
    *((_DWORD *)this + 1),
    a2,
    BlockData);
  if ( *((int *)this + 7) > 0 )
  {
    PlayerAttrib::useStamina();
    PlayerControl::addCurToolDuration(
      (PlayerControl *)g_pPlayerCtrl,
      *((_DWORD *)this + 9) - 1 - (*((_DWORD *)this + 9) + (*((_DWORD *)this + 9) == 1)));
    if ( *(int *)(BlockDef + 100) > 0 && (signed int)GenRandomInt(0x2710u) < *(_DWORD *)(BlockDef + 104) )
    {
      v14 = *(World **)(BlockDef + 100);
      v15 = 100 * *((_DWORD *)a2 + 1);
      v16 = *((_DWORD *)a2 + 2);
      v24[0] = 100;
      v23[0] = 100 * *(_DWORD *)a2;
      v23[2] = 100 * v16;
      v24[1] = 100;
      v24[2] = 100;
      v17 = *((ActorExpOrb **)this + 1);
      v23[1] = v15;
      ActorExpOrb::SpawnExpOrb(v17, v14, (int)v23, (const WCoord *)v24, v18);
    }
  }
  result = ClientManager::isMobile((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton);
  if ( result == 0 )
  {
    v12 = (float)((float)(50 * *((_DWORD *)this + 7)) / 1000.0);
    v13 = (float)((float)(unsigned int)(Ogre::Timer::getSystemTick((Ogre::Timer *)LODWORD(v12), SHIDWORD(v12))
                                      - dword_5173A8)
                / 1000.0);
    j_sprintf(v25, "BlockID=%d, CalTime=%.2fs, RealTime=%.2fs", BlockID, v12, v13);
    return SurviveGame::sendChat(*(SurviveGame **)(Ogre::Singleton<ClientManager>::ms_Singleton + 76), v25);
  }
  return result;
}


//======================================================================
// BlockPunchOperate::update(int,IntersectResult &)
// address: 0x002D7678   size: 0x12E (302 bytes)
//======================================================================
bool __fastcall BlockPunchOperate::update(BlockPunchOperate *this, int a2, _DWORD *a3)
{
  int v3; // r3
  int v6; // r3
  int v7; // r1
  int BlockID; // r0
  int v9; // r1
  _DWORD *v10; // r3
  int v11; // r2
  _BOOL4 result; // r0
  int v13; // r6
  int v14; // r12
  int v15; // r5
  int v16; // r1
  _DWORD *v17; // r3
  int v18; // [sp+Ch] [bp-30h]
  int v19; // [sp+10h] [bp-2Ch]
  int v20; // [sp+14h] [bp-28h]
  int BlockDef; // [sp+18h] [bp-24h]
  void (__fastcall *v22)(int, int, int, int, int *, int); // [sp+18h] [bp-24h]
  int v24; // [sp+20h] [bp-1Ch] BYREF
  int v25; // [sp+24h] [bp-18h]
  int v26; // [sp+28h] [bp-14h]

  v3 = *((_DWORD *)this + 4) + 1;
  if ( v3 > 9 )
  {
    *((_DWORD *)this + 4) = 0;
    v24 = 4;
    LOBYTE(v25) = 1;
    ClientActor::sendEvent(g_pPlayerCtrl);
  }
  else
  {
    *((_DWORD *)this + 4) = v3;
  }
  v6 = *((_DWORD *)this + 6) + 1;
  if ( v6 > 9 )
  {
    v7 = *((_DWORD *)this + 2);
    *((_DWORD *)this + 6) = 0;
    BlockID = World::getBlockID(*((World **)this + 1), (const WCoord *)(v7 + 4), (int)a3, 0);
    BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID);
    BlockCenterCoord(&v24, (_DWORD *)(*((_DWORD *)this + 2) + 4));
    if ( *(_BYTE *)(BlockDef + 276) != 0 )
      EffectManager::playSound(
        (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
        (const WCoord *)&v24,
        (const char *)(BlockDef + 276),
        1.0,
        0.5,
        true);
    else
      EffectManager::playSound(
        (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
        (const WCoord *)&v24,
        "step.grass",
        1.0,
        0.5,
        true);
  }
  else
  {
    *((_DWORD *)this + 6) = v6;
  }
  v9 = *((_DWORD *)this + 7);
  v10 = *((_DWORD **)this + 2);
  v11 = *((_DWORD *)this + 5) + 1;
  *((_DWORD *)this + 5) = v11;
  v18 = v9;
  if ( v11 < v9 )
  {
    v13 = *((_DWORD *)this + 1);
    v22 = *(void (__fastcall **)(int, int, int, int, int *, int))(*(_DWORD *)v13 + 24);
    v19 = *(_DWORD *)(g_pPlayerCtrl + 40);
    v20 = *(_DWORD *)(g_pPlayerCtrl + 44);
    v14 = 100 * v10[2];
    v15 = 100 * v10[3];
    v24 = 100 * v10[1];
    v25 = v14;
    v26 = v15;
    v22(v13, v16, v19, v20, &v24, 10 * v11 / v18);
    result = true;
    if ( a2 == 1 )
    {
      v17 = *((_DWORD **)this + 2);
      if ( v17[1] == a3[1] && v17[2] == a3[2] )
        return v17[3] != a3[3];
    }
  }
  else
  {
    BlockPunchOperate::destroyBlock(this, (const WCoord *)(v10 + 1), v11);
    return true;
  }
  return result;
}

