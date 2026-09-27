// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockTNT

//======================================================================
// BlockTNT::newObject(void)
// address: 0x002C1AB4   size: 0x1C (28 bytes)
//======================================================================
BasicBlockMaterial *__fastcall BlockTNT::newObject(BlockTNT *this)
{
  BasicBlockMaterial *v1; // r4

  v1 = (BasicBlockMaterial *)operator new(0x74u);
  BasicBlockMaterial::BasicBlockMaterial(v1);
  *(_DWORD *)v1 = &off_460700;
  return v1;
}


//======================================================================
// BlockTNT::~BlockTNT()
// address: 0x002D36E0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN8BlockTNTD1Ev'
void __fastcall BlockTNT::~BlockTNT(BlockTNT *this)
{
  *(_DWORD *)this = &off_460700;
  BasicBlockMaterial::~BasicBlockMaterial(this);
}


//======================================================================
// BlockTNT::~BlockTNT()
// address: 0x002D36FC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockTNT::~BlockTNT(BlockTNT *this)
{
  BlockTNT::~BlockTNT(this);
  operator delete(this);
}


//======================================================================
// BlockTNT::init(int)
// address: 0x002D3710   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall BlockTNT::init(__int64 this)
{
  int v1; // r2
  BlockMaterialMgr *v2; // r6
  void *v3; // r1
  __int64 v5; // [sp+0h] [bp-8h] BYREF

  v5 = this;
  BasicBlockMaterial::init(this);
  if ( BlockTNT::m_ExplodeTex == 0 )
  {
    v2 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
    HIDWORD(v5) = Ogre::FixedString::insert(
                    (Ogre::FixedString *)"tnt_explode",
                    (const char *)0xFFFFFFFF,
                    v1,
                    (int)&BlockTNT::m_ExplodeTex);
    BlockTNT::m_ExplodeTex = BlockMaterialMgr::getTexElement(v2, (const char **)&v5 + 1, 0);
    Ogre::FixedString::release(SHIDWORD(v5), v3);
  }
  return v5;
}


//======================================================================
// BlockTNT::onBlockAdded(World *,WCoord const&)
// address: 0x002D3768   size: 0x30 (48 bytes)
//======================================================================
int __fastcall BlockTNT::onBlockAdded(BlockTNT *this, World *a2, const WCoord *a3)
{
  int result; // r0

  BlockMaterial::onBlockAdded();
  result = World::isBlockIndirectlyGettingPowered(a2, a3);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(BlockTNT *, World *, const WCoord *, int))(*(_DWORD *)this + 124))(this, a2, a3, 1);
    return World::setBlockAir(a2, a3);
  }
  return result;
}


//======================================================================
// BlockTNT::onNeighborBlockChange(World *,WCoord const&,int)
// address: 0x002D3798   size: 0x2C (44 bytes)
//======================================================================
int __fastcall BlockTNT::onNeighborBlockChange(BlockTNT *this, World *a2, const WCoord *a3, int a4)
{
  int result; // r0

  result = World::isBlockIndirectlyGettingPowered(a2, a3);
  if ( result != 0 )
  {
    (*(void (__fastcall **)(BlockTNT *, World *, const WCoord *, int))(*(_DWORD *)this + 124))(this, a2, a3, 1);
    return World::setBlockAir(a2, a3);
  }
  return result;
}


//======================================================================
// BlockTNT::onBlockDestroyedByExplosion(World *,WCoord const&,Explosion *)
// address: 0x002D37C4   size: 0x5A (90 bytes)
//======================================================================
__int64 __fastcall BlockTNT::onBlockDestroyedByExplosion(BlockTNT *this, World *a2, const WCoord *a3, Explosion *a4)
{
  ClientActor *Exploder; // r7
  ActorTNTPrimed *v7; // r4
  __int64 v8; // r0
  _DWORD v10[4]; // [sp+4h] [bp-10h] BYREF

  BlockCenterCoord(v10, a3);
  Exploder = (ClientActor *)Explosion::getExploder(a4);
  v7 = (ActorTNTPrimed *)operator new(0xC0u);
  ActorTNTPrimed::ActorTNTPrimed(v7, (const WCoord *)v10, Exploder);
  v8 = __PAIR64__((unsigned int)v7, GenRandomInt(*((_DWORD *)v7 + 43) / 4));
  *((_DWORD *)v7 + 43) = v8 + *((_DWORD *)v7 + 43) / 8;
  LODWORD(v8) = *((_DWORD *)a2 + 33);
  return ClientActorMgr::spawnActor(v8, 1);
}


//======================================================================
// BlockTNT::checkExplode(World *,WCoord const&,int,ClientActor *)
// address: 0x002D3828   size: 0x4C (76 bytes)
//======================================================================
__int64 __fastcall BlockTNT::checkExplode(__int64 this, const WCoord *a2, int a3, ClientActor *a4)
{
  int v4; // r6
  ActorTNTPrimed *v5; // r4
  __int64 v6; // r0
  __int64 v8; // [sp+0h] [bp-10h] BYREF
  const WCoord *v9; // [sp+8h] [bp-8h]
  int v10; // [sp+Ch] [bp-4h]

  v8 = this;
  v9 = a2;
  v10 = a3;
  v4 = HIDWORD(this);
  if ( (a3 & 1) != 0 )
  {
    BlockCenterCoord((_DWORD *)&v8 + 1, a2);
    v5 = (ActorTNTPrimed *)operator new(0xC0u);
    ActorTNTPrimed::ActorTNTPrimed(v5, (const WCoord *)((char *)&v8 + 4), a4);
    LODWORD(v6) = *(_DWORD *)(v4 + 132);
    HIDWORD(v6) = v5;
    ClientActorMgr::spawnActor(v6, 1);
    ClientActor::playSound(v5, "random.fuse", 1.0, 1.0);
  }
  return v8;
}


//======================================================================
// BlockTNT::onBlockDestroyedByPlayer(World *,WCoord const&,int)
// address: 0x002D3878   size: 0xC (12 bytes)
//======================================================================
ClientActor *__fastcall BlockTNT::onBlockDestroyedByPlayer(__int64 this, const WCoord *a2, int a3)
{
  ClientActor *v4; // [sp+0h] [bp-8h]

  BlockTNT::checkExplode(this, a2, a3, nullptr);
  return v4;
}


//======================================================================
// BlockTNT::onBlockActivated(World *,WCoord const&,DirectionType,ClientPlayer *)
// address: 0x002D3884   size: 0x50 (80 bytes)
//======================================================================
int __fastcall BlockTNT::onBlockActivated(unsigned int a1, World *a2, const WCoord *a3, int a4, ClientPlayer *a5)
{
  if ( ClientPlayer::getCurToolID(a5) != 1055 )
    return BlockMaterial::onBlockActivated();
  BlockTNT::checkExplode(__SPAIR64__((unsigned int)a2, a1), a3, 1, a5);
  World::setBlockAir(a2, a3);
  (*(void (__fastcall **)(_DWORD, int, int))(**((_DWORD **)a5 + 19) + 48))(*((_DWORD *)a5 + 19), 5, 1);
  return 1;
}


//======================================================================
// BlockTNT::onActorCollidedWithBlock(World *,WCoord const&,ClientActor *)
// address: 0x002D38D8   size: 0x44 (68 bytes)
//======================================================================
ClientActor *__fastcall BlockTNT::onActorCollidedWithBlock(
        BlockTNT *this,
        World *a2,
        const WCoord *a3,
        ClientActor *lpsrc)
{
  ClientActor *v7; // r0
  ClientActor *v8; // r4
  ClientActor *v9; // r0
  ClientActor *v11; // [sp+0h] [bp-Ch]

  v11 = this;
  if ( lpsrc != nullptr )
  {
    v7 = (ClientActor *)_dynamic_cast(
                          lpsrc,
                          (const struct __class_type_info *)&`typeinfo for'ClientActor,
                          (const struct __class_type_info *)&`typeinfo for'ClientActorArrow,
                          0);
    v8 = v7;
    if ( v7 != nullptr && ClientActor::isBurning(v7) != 0 )
    {
      v9 = (ClientActor *)(*(int (__fastcall **)(ClientActor *))(*(_DWORD *)v8 + 72))(v8);
      BlockTNT::checkExplode(__SPAIR64__((unsigned int)a2, (unsigned int)this), a3, 1, v9);
    }
  }
  return v11;
}

