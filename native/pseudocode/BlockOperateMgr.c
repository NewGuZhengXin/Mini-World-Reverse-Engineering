// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockOperateMgr

//======================================================================
// BlockOperateMgr::~BlockOperateMgr()
// address: 0x002EE674   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN15BlockOperateMgrD2Ev'
void __fastcall BlockOperateMgr::~BlockOperateMgr(BlockOperateMgr *this)
{
  _DWORD *v1; // r5
  void *v3; // r0
  unsigned int i; // r5
  _DWORD *v5; // r0
  int v6; // r0

  v1 = *(_DWORD **)this;
  if ( *(_DWORD *)this != 0 )
  {
    v3 = (void *)v1[16];
    if ( v3 != nullptr )
      operator delete(v3);
    operator delete(v1);
  }
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD **)this + 21);
    if ( i >= (*((_DWORD *)this + 22) - (int)v5) >> 2 )
      break;
    v6 = v5[i];
    if ( v6 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  }
  if ( v5 != nullptr )
    operator delete(v5);
  Ogre::Singleton<BlockOperateMgr>::ms_Singleton = 0;
}


//======================================================================
// BlockOperateMgr::setCurWorld(World *)
// address: 0x002EE6C8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockOperateMgr::setCurWorld(int this, World *a2)
{
  *(_DWORD *)(this + 12) = a2;
  return this;
}


//======================================================================
// BlockOperateMgr::setCurCamera(Ogre::Camera *)
// address: 0x002EE6CC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockOperateMgr::setCurCamera(int this, Ogre::Camera *a2)
{
  *(_DWORD *)(this + 16) = a2;
  return this;
}


//======================================================================
// BlockOperateMgr::beginOperate(BLOCKOP_TYPE)
// address: 0x002EE6D0   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall BlockOperateMgr::beginOperate(_DWORD *result, int a2)
{
  result[5] = 0;
  result[15] = a2;
  result[6] = 0x7FFFFFFF;
  result[7] = 0x7FFFFFFF;
  result[8] = 0x7FFFFFFF;
  return result;
}


//======================================================================
// BlockOperateMgr::endOperate(void)
// address: 0x002EE6E4   size: 0x18 (24 bytes)
//======================================================================
int __fastcall BlockOperateMgr::endOperate(BlockOperateMgr *this)
{
  int result; // r0

  *((_DWORD *)this + 15) = 0;
  result = *((_DWORD *)this + 24);
  if ( result != 0 )
  {
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
    *((_DWORD *)this + 24) = 0;
  }
  return result;
}


//======================================================================
// BlockOperateMgr::resetOperate(void)
// address: 0x002EE6FC   size: 0x3A (58 bytes)
//======================================================================
int __fastcall BlockOperateMgr::resetOperate(BlockOperateMgr *this)
{
  int *v1; // r0
  int v2; // r3
  _DWORD v4[4]; // [sp+Ch] [bp-10h] BYREF

  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0x7FFFFFFF;
  *((_DWORD *)this + 7) = 0x7FFFFFFF;
  *((_DWORD *)this + 8) = 0x7FFFFFFF;
  *((_DWORD *)this + 9) = 0;
  v1 = *((int **)this + 3);
  v2 = *v1;
  memset(v4, 0, 12);
  return (*(int (__fastcall **)(int *, int, _DWORD, _DWORD, _DWORD *, int))(v2 + 24))(
           v1,
           -1,
           *(_DWORD *)(g_pPlayerCtrl + 40),
           *(_DWORD *)(g_pPlayerCtrl + 44),
           v4,
           -1);
}


//======================================================================
// BlockOperateMgr::getOperate(int)
// address: 0x002EE740   size: 0x36 (54 bytes)
//======================================================================
int __fastcall BlockOperateMgr::getOperate(BlockOperateMgr *this, int a2)
{
  int v2; // r3
  int v3; // r3

  v2 = *((_DWORD *)this + 15);
  if ( v2 == 2 )
  {
    v3 = *((_DWORD *)this + 21);
    if ( *((_DWORD *)this + 16) == 2050 )
      return *(_DWORD *)(v3 + 16);
    else
      return *(_DWORD *)(v3 + 4);
  }
  else
  {
    if ( v2 != 1 )
      return 0;
    if ( a2 == 1 )
      return **((_DWORD **)this + 21);
    if ( a2 == 2 )
      return *(_DWORD *)(*((_DWORD *)this + 21) + 8);
    else
      return 0;
  }
}


//======================================================================
// BlockOperateMgr::getCollideInFaceX(void)
// address: 0x002EE77C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockOperateMgr::getCollideInFaceX(BlockOperateMgr *this)
{
  return *((_DWORD *)this + 11);
}


//======================================================================
// BlockOperateMgr::getCollideInFaceY(void)
// address: 0x002EE780   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockOperateMgr::getCollideInFaceY(BlockOperateMgr *this)
{
  return *((_DWORD *)this + 12);
}


//======================================================================
// BlockOperateMgr::getCollideInFaceZ(void)
// address: 0x002EE784   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BlockOperateMgr::getCollideInFaceZ(BlockOperateMgr *this)
{
  return *((_DWORD *)this + 13);
}


//======================================================================
// BlockOperateMgr::pickLiquid(int &,int &,int &)
// address: 0x002EE788   size: 0x62 (98 bytes)
//======================================================================
int __fastcall BlockOperateMgr::pickLiquid(World **this, int *a2, int *a3, int *a4)
{
  unsigned int i; // r4
  int v6; // r3
  unsigned int v7; // r2
  const WCoord *v8; // r5
  __int16 *Block; // r7

  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)*this + 16);
    v7 = -1431655765 * ((*((_DWORD *)*this + 17) - v6) >> 2);
    if ( i >= v7 )
      break;
    v8 = (const WCoord *)(v6 + 12 * i);
    Block = World::getBlock(*(this + 3), v8, v7, v6);
    if ( Block::moveCollide((Block *)Block) == 2 && (int)(unsigned __int16)*Block >> 12 == 0 )
    {
      *a2 = *(_DWORD *)v8;
      *a3 = *((_DWORD *)v8 + 1);
      *a4 = *((_DWORD *)v8 + 2);
      return 1;
    }
  }
  return 0;
}


//======================================================================
// BlockOperateMgr::getCurPlaceDir(int,int,int)
// address: 0x002EE7F0   size: 0x4A (74 bytes)
//======================================================================
int __fastcall BlockOperateMgr::getCurPlaceDir(BlockOperateMgr *this, int a2, int a3, int a4)
{
  int v6; // r2
  int v7; // r0
  _DWORD v9[2]; // [sp+4h] [bp-Ch] BYREF
  int v10; // [sp+Ch] [bp-4h]

  v9[0] = a2;
  v9[1] = a3;
  v10 = a4;
  PlayerControl::getPosition(v9, g_pPlayerCtrl);
  v6 = v9[0] - (100 * a2 + 50);
  v7 = v10 - (100 * a4 + 50);
  if ( ((v6 + (v6 >> 31)) ^ (v6 >> 31)) <= ((v7 + (v7 >> 31)) ^ (v7 >> 31)) )
    return (v7 >= 0) + 2;
  else
    return v6 >= 0;
}


//======================================================================
// BlockOperateMgr::getDigProgress(void)
// address: 0x002EE840   size: 0x20 (32 bytes)
//======================================================================
int __fastcall BlockOperateMgr::getDigProgress(BlockOperateMgr *this)
{
  int v1; // r0

  if ( *((_DWORD *)this + 15) == 1 && *((_DWORD *)this + 5) == 1 && (v1 = *((_DWORD *)this + 24)) != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 20))(v1);
  else
    return -1082130432;
}


//======================================================================
// BlockOperateMgr::BlockOperateMgr(void)
// address: 0x002EE918   size: 0xB4 (180 bytes)
//======================================================================
// Alternative name is '_ZN15BlockOperateMgrC2Ev'
void __fastcall BlockOperateMgr::BlockOperateMgr(BlockOperateMgr *this)
{
  int v2; // r2
  unsigned int v3; // r3
  __int64 v4; // r0
  BlockPunchOperate *v5; // r6
  BlockUseOperate *v6; // r6
  ActorPunchOperate *v7; // r6
  BlockEatFoodOperate *v8; // r6
  UseBowOperate *v9; // r6
  _DWORD *v10; // r0

  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  Ogre::Singleton<BlockOperateMgr>::ms_Singleton = (int)this;
  j_memset((char *)this + 64, 0, 0x10u);
  v2 = *((_DWORD *)this + 21);
  v3 = (*((_DWORD *)this + 22) - v2) >> 2;
  if ( v3 > 4 )
  {
    if ( v3 != 5 )
      *((_DWORD *)this + 22) = v2 + 20;
  }
  else
  {
    HIDWORD(v4) = 5 - v3;
    LODWORD(v4) = (char *)this + 84;
    std::vector<BlockOperate *>::_M_default_append(v4);
  }
  v5 = (BlockPunchOperate *)operator new(0x28u);
  BlockPunchOperate::BlockPunchOperate(v5);
  **((_DWORD **)this + 21) = v5;
  v6 = (BlockUseOperate *)operator new(0x10u);
  BlockUseOperate::BlockUseOperate(v6);
  *(_DWORD *)(*((_DWORD *)this + 21) + 4) = v6;
  v7 = (ActorPunchOperate *)operator new(0x10u);
  ActorPunchOperate::ActorPunchOperate(v7);
  *(_DWORD *)(*((_DWORD *)this + 21) + 8) = v7;
  v8 = (BlockEatFoodOperate *)operator new(0x14u);
  BlockEatFoodOperate::BlockEatFoodOperate(v8);
  *(_DWORD *)(*((_DWORD *)this + 21) + 12) = v8;
  v9 = (UseBowOperate *)operator new(0x1Cu);
  UseBowOperate::UseBowOperate(v9);
  *(_DWORD *)(*((_DWORD *)this + 21) + 16) = v9;
  *((_DWORD *)this + 20) = 0;
  v10 = (_DWORD *)operator new(0x4Cu);
  v10[16] = 0;
  v10[17] = 0;
  v10[18] = 0;
  *(_DWORD *)this = v10;
  *((_DWORD *)this + 1) = 1056964608;
  *((_DWORD *)this + 2) = 1056964608;
}


//======================================================================
// BlockOperateMgr::tick(void)
// address: 0x002EEAB8   size: 0x138 (312 bytes)
//======================================================================
int __fastcall BlockOperateMgr::tick(BlockOperateMgr *this)
{
  int v1; // r3
  float v3; // r2
  int v4; // r1
  _BYTE *v5; // r1
  int v6; // r5
  ClientWorld *v7; // r0
  int result; // r0
  _DWORD *v9; // r3
  int v10; // r3
  int Operate; // r0
  int v12; // r0
  int v13; // r0
  ClientActor *v14[6]; // [sp+Ch] [bp-38h] BYREF
  _DWORD v15[8]; // [sp+24h] [bp-20h] BYREF

  v1 = *((_DWORD *)this + 20);
  if ( v1 > 0 )
    *((_DWORD *)this + 20) = v1 - 1;
  v3 = *((float *)this + 1);
  v15[6] = 2139095039;
  Ogre::Camera::getViewRayByScreenPt(*((Ogre::Camera **)this + 4), (Ogre::WorldRay *)v15, v3, *((float *)this + 2));
  v15[6] = 1140457472;
  if ( *(_DWORD *)(g_pPlayerCtrl + 268) == 1 )
    v15[6] = 1148846080;
  v4 = *(_DWORD *)(*(_DWORD *)this + 64);
  if ( -1431655765 * ((*(_DWORD *)(*(_DWORD *)this + 68) - v4) >> 2) != 0 )
    *(_DWORD *)(*(_DWORD *)this + 68) = v4;
  v5 = *(_BYTE **)this;
  *v5 = 0;
  v5[1] = 0;
  v14[1] = nullptr;
  v14[0] = (ClientActor *)g_pPlayerCtrl;
  v6 = World::pickAll(*((World **)this + 3), (const Ogre::WorldRay *)v15, *(int **)this, v14, 0);
  v7 = *((ClientWorld **)this + 3);
  if ( v6 == 1 )
  {
    ClientWorld::setWireBlockPos(v7, (const WCoord *)(*(_DWORD *)this + 4));
  }
  else
  {
    ClientWorld::clearWireBlock(v7);
    if ( v6 == 2 )
      ActorLocoMotion::getCollideBox(*(ActorLocoMotion **)(*(_DWORD *)(*(_DWORD *)this + 20) + 68), (CollideAABB *)v14);
  }
  result = *((_DWORD *)this + 15);
  if ( result != 0 )
  {
    if ( *((_DWORD *)this + 24) == 0 )
    {
      if ( *((int *)this + 20) > 0 )
        return result;
      if ( v6 == 1 )
      {
        v9 = *(_DWORD **)this;
        *((_DWORD *)this + 5) = 1;
        *((_DWORD *)this + 6) = v9[1];
        *((_DWORD *)this + 7) = v9[2];
        *((_DWORD *)this + 8) = v9[3];
        *((_DWORD *)this + 10) = v9[4];
        *((_DWORD *)this + 11) = v9[7];
        *((_DWORD *)this + 12) = v9[8];
        *((_DWORD *)this + 13) = v9[9];
      }
      else if ( v6 == 2 )
      {
        v10 = *(_DWORD *)this;
        *((_DWORD *)this + 5) = 2;
        *((_DWORD *)this + 14) = *(_DWORD *)(v10 + 20);
      }
      else
      {
        *((_DWORD *)this + 5) = 0;
      }
      Operate = BlockOperateMgr::getOperate(this, v6);
      *((_DWORD *)this + 24) = Operate;
      if ( Operate != 0 )
      {
        v12 = (*(int (__fastcall **)(int, char *, char *))(*(_DWORD *)Operate + 8))(
                Operate,
                (char *)this + 20,
                (char *)this + 64);
        if ( v12 != 5 )
        {
          v13 = *(_DWORD *)(4 * v12 + *((_DWORD *)this + 21));
          *((_DWORD *)this + 24) = v13;
          (*(void (__fastcall **)(int, char *, char *))(*(_DWORD *)v13 + 8))(v13, (char *)this + 20, (char *)this + 64);
        }
      }
    }
    result = *((_DWORD *)this + 24);
    if ( result != 0 )
    {
      result = (*(int (__fastcall **)(int, int, _DWORD))(*(_DWORD *)result + 16))(result, v6, *(_DWORD *)this);
      if ( result == 1 )
      {
        result = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 24) + 12))(*((_DWORD *)this + 24));
        *((_DWORD *)this + 24) = 0;
        *((_DWORD *)this + 20) = 5;
      }
    }
  }
  return result;
}


//======================================================================
// BlockOperateMgr::setOperateTool(int)
// address: 0x002EEC04   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall BlockOperateMgr::setOperateTool(BlockOperateMgr *this, int a2)
{
  int v3; // r4
  int ItemDef; // r0
  int v5; // r6
  _DWORD *v6; // r0
  _DWORD *v7; // r6
  _DWORD *v8; // r0
  int result; // r0
  _DWORD *v10; // r3
  int v11; // r2
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch] BYREF
  int v14; // [sp+Ch] [bp-8h] BYREF

  v3 = a2;
  if ( a2 == 0 )
    v3 = 1000;
  *((_DWORD *)this + 16) = v3;
  ItemDef = DefManager::getItemDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v3);
  v5 = Ogre::Singleton<DefManager>::ms_Singleton;
  *((_DWORD *)this + 17) = ItemDef;
  v13 = v3;
  v6 = std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::find(
         v5 + 472,
         &v13);
  if ( v6 == (_DWORD *)(v5 + 476) )
    v7 = nullptr;
  else
    v7 = v6 + 5;
  *((_DWORD *)this + 18) = v7;
  if ( v7 == nullptr )
  {
    v14 = 1000;
    v12 = Ogre::Singleton<DefManager>::ms_Singleton;
    v8 = std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::find(
           Ogre::Singleton<DefManager>::ms_Singleton + 472,
           &v14);
    if ( v8 != (_DWORD *)(v12 + 476) )
      v7 = v8 + 5;
    *((_DWORD *)this + 18) = v7;
  }
  result = 548;
  v10 = *(_DWORD **)(Ogre::Singleton<DefManager>::ms_Singleton + 552);
  v11 = Ogre::Singleton<DefManager>::ms_Singleton + 548;
  while ( v10 != nullptr )
  {
    if ( v10[4] < v3 )
    {
      result = v10[3];
      v10 = (_DWORD *)v11;
    }
    else
    {
      result = v10[2];
    }
    v11 = (int)v10;
    v10 = (_DWORD *)result;
  }
  if ( v11 != Ogre::Singleton<DefManager>::ms_Singleton + 548 && v3 >= *(_DWORD *)(v11 + 16) )
    v10 = (_DWORD *)(v11 + 20);
  *((_DWORD *)this + 19) = v10;
  return result;
}

