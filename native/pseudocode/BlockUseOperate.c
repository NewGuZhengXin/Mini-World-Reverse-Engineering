// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockUseOperate

//======================================================================
// BlockUseOperate::~BlockUseOperate()
// address: 0x002D70BC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15BlockUseOperateD1Ev'
void __fastcall BlockUseOperate::~BlockUseOperate(BlockUseOperate *this)
{
  *(_DWORD *)this = &off_462258;
}


//======================================================================
// BlockUseOperate::update(int,IntersectResult &)
// address: 0x002D70CC   size: 0x4 (4 bytes)
//======================================================================
int BlockUseOperate::update()
{
  return 1;
}


//======================================================================
// BlockUseOperate::~BlockUseOperate()
// address: 0x002D7116   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockUseOperate::~BlockUseOperate(BlockUseOperate *this)
{
  BlockUseOperate::~BlockUseOperate(this);
  operator delete(this);
}


//======================================================================
// BlockUseOperate::BlockUseOperate(void)
// address: 0x002D77BC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15BlockUseOperateC1Ev'
void __fastcall BlockUseOperate::BlockUseOperate(BlockUseOperate *this)
{
  *(_DWORD *)this = &off_460BF8;
}


//======================================================================
// BlockUseOperate::useBlock(void)
// address: 0x002D77CC   size: 0x31A (794 bytes)
//======================================================================
int __fastcall BlockUseOperate::useBlock(BlockUseOperate *this, int a2, int a3)
{
  int v3; // r3
  _DWORD *v5; // r7
  const char *v6; // r1
  int Material; // r0
  _DWORD *v8; // r0
  ClientActor *v9; // r2
  _DWORD *v10; // r3
  int v11; // r6
  int v12; // r2
  World **ActorMgr; // r0
  int v14; // r0
  int v15; // r1
  _DWORD *v16; // r2
  int canPlaceActorOnSide; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // r3
  int v22; // r6
  int v23; // r0
  int v24; // r2
  int v25; // r3
  int BlockDef; // r4
  const char *v27; // r2
  int *v28; // r3
  int v29; // r1
  int v30; // r0
  int v31; // r3
  int v32; // r2
  int v33; // r0
  int v34; // r3
  World *v35; // r0
  int BlockMaterial; // r0
  int v37; // r3
  int v39; // [sp+1Ch] [bp-28h]
  int BlockID; // [sp+20h] [bp-24h]
  int v41; // [sp+28h] [bp-1Ch] BYREF
  int v42; // [sp+2Ch] [bp-18h]
  int v43; // [sp+30h] [bp-14h]
  _DWORD v44[4]; // [sp+34h] [bp-10h] BYREF

  v3 = *((_DWORD *)this + 2);
  if ( *(_DWORD *)v3 == 2
    && (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(v3 + 36) + 136))(*(_DWORD *)(v3 + 36), g_pPlayerCtrl) != 0 )
  {
    return 1;
  }
  v5 = *((_DWORD **)this + 2);
  BlockID = World::getBlockID(*((World **)this + 1), (const WCoord *)(v5 + 1), a3, v3);
  if ( **((_DWORD **)this + 2) == 1 && BlockID > 0 )
  {
    v6 = (const char *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID) + 180);
    if ( *v6 != 0 )
    {
      LOBYTE(v44[0]) = 0;
      Ogre::ScriptVM::callFunction(
        *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
        v6,
        "iiii>b",
        v5[1],
        v5[2],
        v5[3],
        **((_DWORD **)this + 3),
        v44);
      if ( LOBYTE(v44[0]) != 0 )
        return 1;
    }
    else
    {
      Material = BlockMaterialMgr::getMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   BlockID);
      if ( (*(int (__fastcall **)(int, _DWORD, _DWORD *, _DWORD, int))(*(_DWORD *)Material + 128))(
             Material,
             *((_DWORD *)this + 1),
             v5 + 1,
             *(_DWORD *)(*((_DWORD *)this + 2) + 20),
             g_pPlayerCtrl) != 0 )
        return 1;
    }
  }
  v8 = *((_DWORD **)this + 3);
  v9 = (ClientActor *)*v8;
  if ( (*v8 & 0xFFFFFFFD) == 0x804 )
  {
    ClientActorThrowable::throwItem(*((ClientActorMgr ***)this + 1), (World *)g_pPlayerCtrl, v9, -2860);
    ClientPlayer::shortcutItemUsed((ClientPlayer *)g_pPlayerCtrl);
    return 1;
  }
  if ( (unsigned int)v9 - 3101 <= 0x191 )
  {
    v10 = *((_DWORD **)this + 2);
    if ( *v10 == 1 )
    {
      v11 = v10[3];
      v12 = 100 * v10[1];
      v44[1] = 100 * v10[2] + 100;
      v44[0] = v12 + 50;
      v44[2] = 100 * v11 + 50;
      ActorMgr = (World **)ClientActor::getActorMgr((ClientActor *)g_pPlayerCtrl);
      v14 = ClientActorMgr::spawnMonster(ActorMgr, (const WCoord *)v44, **((ClientMob ***)this + 3), 1, true);
      if ( v14 != 0 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 200))(v14);
      return 1;
    }
  }
  v15 = v8[1];
  if ( *(_BYTE *)(v15 + 400) != 0 )
  {
    v16 = *((_DWORD **)this + 2);
    if ( *v16 == 1 )
    {
      LOBYTE(v44[0]) = 0;
      Ogre::ScriptVM::callFunction(
        *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24),
        (const char *)(v15 + 400),
        "iiiii>b",
        v5[1],
        v5[2],
        v5[3],
        v16[5],
        *v8,
        v44);
      if ( LOBYTE(v44[0]) != 0 )
        return 1;
    }
  }
  canPlaceActorOnSide = 0;
  if ( **((int **)this + 3) <= 999 && **((_DWORD **)this + 2) == 1 )
  {
    v18 = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, BlockID);
    v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v18 + 52))(v18);
    v20 = *((_DWORD *)this + 2);
    if ( v19 == 0 || **((_DWORD **)this + 3) == BlockID )
    {
      v28 = &g_DirectionCoord[3 * *(_DWORD *)(v20 + 20)];
      v29 = v5[2] + v28[1];
      v30 = v28[2];
      v31 = *v28;
      v32 = v5[3] + v30;
      v33 = v5[1];
      v42 = v29;
      v34 = v33 + v31;
      v35 = *((World **)this + 1);
      v41 = v34;
      v43 = v32;
      BlockMaterial = World::getBlockMaterial(v35, (const WCoord *)&v41, v32);
      canPlaceActorOnSide = (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 52))(BlockMaterial);
      if ( canPlaceActorOnSide == 0 )
        return canPlaceActorOnSide;
      v37 = *(_DWORD *)(*((_DWORD *)this + 2) + 20);
      v39 = v37 + 1;
      if ( (v37 & 1) == 0 )
        goto LABEL_27;
      v21 = v37 - 1;
    }
    else
    {
      v21 = *(_DWORD *)(v20 + 20);
      v41 = v5[1];
      v42 = v5[2];
      v43 = v5[3];
    }
    v39 = v21;
LABEL_27:
    canPlaceActorOnSide = World::canPlaceActorOnSide(
                            *((World **)this + 1),
                            **((_DWORD **)this + 3),
                            (const WCoord *)&v41,
                            0,
                            v39,
                            nullptr);
    if ( canPlaceActorOnSide == 0 )
      return 1;
    v22 = BlockMaterialMgr::getMaterial(
            (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
            **((_DWORD **)this + 3));
    v23 = (*(int (__fastcall **)(int, _DWORD, int *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v22 + 116))(
            v22,
            *((_DWORD *)this + 1),
            &v41,
            v39,
            *(_DWORD *)(*((_DWORD *)this + 2) + 24),
            *(_DWORD *)(*((_DWORD *)this + 2) + 28),
            *(_DWORD *)(*((_DWORD *)this + 2) + 32),
            0);
    World::setBlockAll(*((World **)this + 1), (const WCoord *)&v41, **((_DWORD **)this + 3), v23, 3);
    if ( World::getBlockID(*((World **)this + 1), (const WCoord *)&v41, v24, v25) == **((_DWORD **)this + 3) )
      (*(void (__fastcall **)(int, _DWORD, int *, int))(*(_DWORD *)v22 + 120))(
        v22,
        *((_DWORD *)this + 1),
        &v41,
        g_pPlayerCtrl);
    ClientPlayer::shortcutItemUsed((ClientPlayer *)g_pPlayerCtrl);
    BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, **((_DWORD **)this + 3));
    BlockCenterCoord(v44, &v41);
    v27 = (const char *)(BlockDef + 308);
    if ( *(_BYTE *)(BlockDef + 340) != 0 )
      v27 = (const char *)(BlockDef + 340);
    if ( *v27 == 0 )
      v27 = "dig.grass";
    EffectManager::playSound(
      (EffectManager *)Ogre::Singleton<EffectManager>::ms_Singleton,
      (const WCoord *)v44,
      v27,
      1.0,
      0.8,
      true);
  }
  return canPlaceActorOnSide;
}


//======================================================================
// BlockUseOperate::begin(OperateTarget *,OperateTool *)
// address: 0x002D7B20   size: 0x22 (34 bytes)
//======================================================================
int __fastcall BlockUseOperate::begin(BlockUseOperate *a1, int a2, int a3)
{
  int v5; // r1
  int v6; // r2
  int v7; // r0
  int v8; // r3

  BlockOperate::begin();
  v7 = BlockUseOperate::useBlock(a1, v5, v6);
  v8 = 5;
  if ( v7 == 0 && *(_DWORD *)(a3 + 12) != 0 )
    return 3;
  return v8;
}

