// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockSand

//======================================================================
// BlockSand::tickRate(void)
// address: 0x002A8370   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockSand::tickRate(BlockSand *this)
{
  return 2;
}


//======================================================================
// BlockSand::onStartFalling(ActorFallingSand *)
// address: 0x002A8374   size: 0x2 (2 bytes)
//======================================================================
void BlockSand::onStartFalling()
{
  ;
}


//======================================================================
// BlockSand::onFinishFalling(World *,WCoord const&,int)
// address: 0x002A8376   size: 0x2 (2 bytes)
//======================================================================
void BlockSand::onFinishFalling()
{
  ;
}


//======================================================================
// BlockSand::onBlockAdded(World *,WCoord const&)
// address: 0x002A8378   size: 0x22 (34 bytes)
//======================================================================
int __fastcall BlockSand::onBlockAdded(BlockSand *this, World *a2, const WCoord *a3)
{
  BlockTickMgr *v4; // r6
  int v5; // r4
  int v6; // r0
  int v8; // [sp+0h] [bp-8h]

  v4 = *((BlockTickMgr **)a2 + 34);
  v5 = *((_DWORD *)this + 8);
  v6 = (*(int (__fastcall **)(BlockSand *))(*(_DWORD *)this + 100))(this);
  BlockTickMgr::scheduleBlockUpdate(v4, a3, v5, v6, 0);
  return v8;
}


//======================================================================
// BlockSand::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002A839A   size: 0x22 (34 bytes)
//======================================================================
int __fastcall BlockSand::onNeighborBlockChange(BlockSand *this, World *a2, const WCoord *a3, int a4)
{
  BlockTickMgr *v5; // r6
  int v6; // r4
  int v7; // r0
  int v9; // [sp+0h] [bp-8h]

  v5 = *((BlockTickMgr **)a2 + 34);
  v6 = *((_DWORD *)this + 8);
  v7 = (*(int (__fastcall **)(BlockSand *))(*(_DWORD *)this + 100))(this);
  BlockTickMgr::scheduleBlockUpdate(v5, a3, v6, v7, 0);
  return v9;
}


//======================================================================
// BlockSand::~BlockSand()
// address: 0x002A83BC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN9BlockSandD1Ev'
void __fastcall BlockSand::~BlockSand(BlockSand *this)
{
  *(_DWORD *)this = &off_45D678;
  BasicBlockMaterial::~BasicBlockMaterial(this);
}


//======================================================================
// BlockSand::~BlockSand()
// address: 0x002A83D8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockSand::~BlockSand(BlockSand *this)
{
  BlockSand::~BlockSand(this);
  operator delete(this);
}


//======================================================================
// BlockSand::canFallBelow(World *,WCoord const&)
// address: 0x002A83EC   size: 0x2C (44 bytes)
//======================================================================
bool __fastcall BlockSand::canFallBelow(BlockSand *this, World *a2, const WCoord *a3)
{
  int BlockID; // r1
  _BOOL4 result; // r0

  BlockID = World::getBlockID(this, a2);
  result = true;
  if ( BlockID != 0 && BlockID != 500 )
    return *(_DWORD *)(DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, BlockID) + 12) == 2;
  return result;
}


//======================================================================
// BlockSand::tryToFall(World *,WCoord const&)
// address: 0x002A841C   size: 0x134 (308 bytes)
//======================================================================
int __fastcall BlockSand::tryToFall(BlockSand *this, ClientActorMgr **a2, const WCoord *a3)
{
  int v5; // r12
  int v6; // r0
  int result; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r3
  int BlockData; // r7
  ActorFallingSand *v12; // r5
  int v13; // r1
  int v14; // r2
  int v15; // r4
  int v17; // [sp+10h] [bp-Ch] BYREF
  int v18; // [sp+14h] [bp-8h]
  int v19; // [sp+18h] [bp-4h]
  int v20; // [sp+1Ch] [bp+0h] BYREF
  const WCoord *v21; // [sp+20h] [bp+4h]
  int v22; // [sp+24h] [bp+8h]

  v5 = *((_DWORD *)a3 + 2) + dword_516660;
  v6 = *(_DWORD *)a3;
  v21 = (const WCoord *)(*((_DWORD *)a3 + 1) + dword_51665C);
  v20 = v6 + dword_516658;
  v22 = v5;
  result = BlockSand::canFallBelow((BlockSand *)a2, (World *)&v20, v21);
  if ( result != 0 )
  {
    v8 = *((_DWORD *)a3 + 1);
    if ( v8 >= 0 )
    {
      if ( BlockSand::m_FallInstantly != 0 )
        goto LABEL_7;
      v9 = *(_DWORD *)a3;
      v17 = *(_DWORD *)a3 - 32;
      v18 = v8 - 32;
      v19 = *((_DWORD *)a3 + 2) - 32;
      v10 = *((_DWORD *)a3 + 2);
      v20 = v9 + 32;
      v21 = (const WCoord *)(v8 + 32);
      v22 = v10 + 32;
      result = World::checkChunksExist((World *)a2, (const WCoord *)&v17, (const WCoord *)&v20);
      if ( result == 0 )
      {
LABEL_7:
        World::setBlockAll((World *)a2, a3, 0, 0, 3);
        v13 = *(_DWORD *)a3;
        v14 = *((_DWORD *)a3 + 1);
        v15 = *((_DWORD *)a3 + 2);
        v17 = v13;
        v18 = v14;
        v19 = v15;
        while ( 1 )
        {
          v20 = v17 + dword_516658;
          v21 = (const WCoord *)(v18 + dword_51665C);
          v22 = v19 + dword_516660;
          result = BlockSand::canFallBelow((BlockSand *)a2, (World *)&v20, (const WCoord *)(v18 + dword_51665C));
          if ( result == 0 || v18 <= 0 )
            break;
          --v18;
        }
        if ( v18 > 0 )
          return World::setBlockAll((World *)a2, (const WCoord *)&v17, *((_DWORD *)this + 8), 0, 3);
      }
      else if ( *((_BYTE *)a2 + 68) == 0 )
      {
        BlockData = World::getBlockData((World *)a2, a3);
        v12 = (ActorFallingSand *)operator new(0xC0u);
        ActorFallingSand::ActorFallingSand(v12, (World *)a2, a3, *((_DWORD *)this + 8), BlockData);
        (*(void (__fastcall **)(BlockSand *, ActorFallingSand *))(*(_DWORD *)this + 220))(this, v12);
        return ClientActorMgr::spawnActor(a2[33], v12, true);
      }
    }
  }
  return result;
}


//======================================================================
// BlockSand::blockTick(World *,WCoord const&)
// address: 0x002A8558   size: 0x8 (8 bytes)
//======================================================================
int __fastcall BlockSand::blockTick(BlockSand *this, ClientActorMgr **a2, const WCoord *a3)
{
  return BlockSand::tryToFall(this, a2, a3);
}


//======================================================================
// BlockSand::newObject(void)
// address: 0x002C1DF8   size: 0x1C (28 bytes)
//======================================================================
BasicBlockMaterial *__fastcall BlockSand::newObject(BlockSand *this)
{
  BasicBlockMaterial *v1; // r4

  v1 = (BasicBlockMaterial *)operator new(0x74u);
  BasicBlockMaterial::BasicBlockMaterial(v1);
  *(_DWORD *)v1 = &off_45D678;
  return v1;
}

