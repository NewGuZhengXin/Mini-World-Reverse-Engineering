// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BackPack

//======================================================================
// BackPack::BackPack(void)
// address: 0x002DD87C   size: 0x13A (314 bytes)
//======================================================================
// Alternative name is '_ZN8BackPackC2Ev'
void __fastcall BackPack::BackPack(BackPack *this)
{
  PackContainer *v2; // r5
  PackContainer *v3; // r5
  CraftingContainer *v4; // r5
  CraftingContainer *v5; // r5
  PackContainer *v6; // r5
  PackContainer *v7; // r5
  PackContainer *v8; // r5
  PackContainer *v9; // r5
  PackContainer *v10; // r5
  PackContainer *v11; // r5
  PackContainer *v12; // r5
  PackContainer *v13; // r5
  RepairContainer *v14; // r5
  EnchantContainer *v15; // r5

  j_memset(this, 0, 0x44u);
  v2 = (PackContainer *)operator new(0x18u);
  PackContainer::PackContainer(v2, 40, 0);
  *(_DWORD *)this = v2;
  if ( ClientManager::isMobile((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton) != 0 )
  {
    v3 = (PackContainer *)operator new(0x18u);
    PackContainer::PackContainer(v3, 6, 1000);
  }
  else
  {
    v3 = (PackContainer *)operator new(0x18u);
    PackContainer::PackContainer(v3, 10, 1000);
  }
  *((_DWORD *)this + 1) = v3;
  v4 = (CraftingContainer *)operator new(0x20u);
  CraftingContainer::CraftingContainer(v4, 5, 2000);
  *((_DWORD *)this + 2) = v4;
  v5 = (CraftingContainer *)operator new(0x20u);
  CraftingContainer::CraftingContainer(v5, 10, 4000);
  *((_DWORD *)this + 4) = v5;
  v6 = (PackContainer *)operator new(0x18u);
  PackContainer::PackContainer(v6, 5, 6000);
  *((_DWORD *)this + 6) = v6;
  v7 = (PackContainer *)operator new(0x18u);
  PackContainer::PackContainer(v7, 1, 7000);
  *((_DWORD *)this + 7) = v7;
  v8 = (PackContainer *)operator new(0x18u);
  PackContainer::PackContainer(v8, 5, 8000);
  *((_DWORD *)this + 8) = v8;
  v9 = (PackContainer *)operator new(0x18u);
  PackContainer::PackContainer(v9, 100, 10000);
  *((_DWORD *)this + 10) = v9;
  v10 = (PackContainer *)operator new(0x18u);
  PackContainer::PackContainer(v10, 100, 11000);
  *((_DWORD *)this + 11) = v10;
  v11 = (PackContainer *)operator new(0x18u);
  PackContainer::PackContainer(v11, 100, 12000);
  *((_DWORD *)this + 12) = v11;
  v12 = (PackContainer *)operator new(0x18u);
  PackContainer::PackContainer(v12, 100, 13000);
  *((_DWORD *)this + 13) = v12;
  v13 = (PackContainer *)operator new(0x18u);
  PackContainer::PackContainer(v13, 100, 14000);
  *((_DWORD *)this + 14) = v13;
  v14 = (RepairContainer *)operator new(0x18u);
  RepairContainer::RepairContainer(v14, 3, 15000);
  *((_DWORD *)this + 15) = v14;
  v15 = (EnchantContainer *)operator new(0x18u);
  EnchantContainer::EnchantContainer(v15, 2, 16000);
  *((_DWORD *)this + 16) = v15;
}


//======================================================================
// BackPack::~BackPack()
// address: 0x002DDA00   size: 0xB0 (176 bytes)
//======================================================================
// Alternative name is '_ZN8BackPackD2Ev'
void __fastcall BackPack::~BackPack(BackPack *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r0

  v2 = *(_DWORD *)this;
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 1);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 2);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((_DWORD *)this + 4);
  if ( v5 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  v6 = *((_DWORD *)this + 6);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *((_DWORD *)this + 7);
  if ( v7 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  v8 = *((_DWORD *)this + 8);
  if ( v8 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v8 + 4))(v8);
  v9 = *((_DWORD *)this + 10);
  if ( v9 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
  v10 = *((_DWORD *)this + 11);
  if ( v10 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 4))(v10);
  v11 = *((_DWORD *)this + 12);
  if ( v11 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 4))(v11);
  v12 = *((_DWORD *)this + 13);
  if ( v12 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v12 + 4))(v12);
  v13 = *((_DWORD *)this + 14);
  if ( v13 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v13 + 4))(v13);
  v14 = *((_DWORD *)this + 15);
  if ( v14 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v14 + 4))(v14);
  v15 = *((_DWORD *)this + 16);
  if ( v15 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v15 + 4))(v15);
}


//======================================================================
// BackPack::getContainer(int)
// address: 0x002DDAB0   size: 0x14 (20 bytes)
//======================================================================
int __fastcall BackPack::getContainer(BackPack *this, int a2)
{
  return *((_DWORD *)this + a2 / 1000);
}


//======================================================================
// BackPack::getPack(int)
// address: 0x002DDAC4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall BackPack::getPack(BackPack *this, int a2)
{
  return *((_DWORD *)this + a2 / 1000);
}


//======================================================================
// BackPack::addItem(int,int,int)
// address: 0x002DDAD8   size: 0x86 (134 bytes)
//======================================================================
int __fastcall BackPack::addItem(BackPack *this, int a2, int a3, int a4)
{
  PackContainer *Pack; // r0
  int v7; // r4
  PackContainer *v8; // r0
  int v9; // r0
  PackContainer *v10; // r0
  PackContainer *v11; // r0

  if ( a4 == 1 )
  {
    Pack = (PackContainer *)BackPack::getPack(this, 1000);
    v7 = PackContainer::addItem(Pack, a2, a3, -1, 0, nullptr);
    if ( v7 < a3 )
    {
      v8 = (PackContainer *)BackPack::getPack(this, 0);
      v9 = PackContainer::addItem(v8, a2, a3 - v7, -1, 0, nullptr);
LABEL_7:
      v7 += v9;
    }
  }
  else
  {
    v7 = 0;
    if ( a4 == 2 )
    {
      v10 = (PackContainer *)BackPack::getPack(this, 0);
      v7 = PackContainer::addItem(v10, a2, a3, -1, 0, nullptr);
      if ( v7 < a3 )
      {
        v11 = (PackContainer *)BackPack::getPack(this, 1000);
        v9 = PackContainer::addItem(v11, a2, a3, -1, 0, nullptr);
        goto LABEL_7;
      }
    }
  }
  return v7;
}


//======================================================================
// BackPack::addItemWithPickUp(int,int,int,int,int *)
// address: 0x002DDB5E   size: 0x4E (78 bytes)
//======================================================================
int __fastcall BackPack::addItemWithPickUp(BackPack *this, int a2, int a3, int a4, int a5, int *a6)
{
  PackContainer *Pack; // r0
  int v10; // r4
  PackContainer *v11; // r0

  Pack = (PackContainer *)BackPack::getPack(this, 1000);
  v10 = PackContainer::addItem(Pack, a2, a3, a4, a5, a6);
  if ( v10 < a3 )
  {
    v11 = (PackContainer *)BackPack::getPack(this, 0);
    v10 += PackContainer::addItem(v11, a2, a3 - v10, a4, a5, a6);
  }
  return v10;
}


//======================================================================
// BackPack::index2Grid(int)
// address: 0x002DDBAC   size: 0x12 (18 bytes)
//======================================================================
int __fastcall BackPack::index2Grid(BackPack *this, int a2)
{
  int Container; // r0

  Container = BackPack::getContainer(this, a2);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 8))(Container, a2);
}


//======================================================================
// BackPack::addItem(int,int,int,int,int)
// address: 0x002DDBBE   size: 0x98 (152 bytes)
//======================================================================
int __fastcall BackPack::addItem(BackPack *this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // r5
  PackContainer *Pack; // r0
  int v9; // r4
  PackContainer *v10; // r0
  int v11; // r0
  PackContainer *v12; // r0
  PackContainer *v13; // r0

  v7 = BackPack::index2Grid(this, a2);
  if ( a6 == 1 )
  {
    Pack = (PackContainer *)BackPack::getPack(this, 1000);
    v9 = PackContainer::addItem(Pack, a3, a4, a5, *(_DWORD *)(v7 + 28), (int *)(v7 + 32));
    if ( v9 < a4 )
    {
      v10 = (PackContainer *)BackPack::getPack(this, 0);
      v11 = PackContainer::addItem(v10, a3, a4 - v9, a5, *(_DWORD *)(v7 + 28), (int *)(v7 + 32));
LABEL_7:
      v9 += v11;
    }
  }
  else
  {
    v9 = 0;
    if ( a6 == 2 )
    {
      v12 = (PackContainer *)BackPack::getPack(this, 0);
      v9 = PackContainer::addItem(v12, a3, a4, a5, *(_DWORD *)(v7 + 28), (int *)(v7 + 32));
      if ( v9 < a4 )
      {
        v13 = (PackContainer *)BackPack::getPack(this, 1000);
        v11 = PackContainer::addItem(v13, a3, a4, a5, *(_DWORD *)(v7 + 28), (int *)(v7 + 32));
        goto LABEL_7;
      }
    }
  }
  return v9;
}


//======================================================================
// BackPack::addStorageItem(int,int,int,int)
// address: 0x002DDC56   size: 0x24 (36 bytes)
//======================================================================
int __fastcall BackPack::addStorageItem(WorldStorageBox **this, int a2, int a3, int a4, int a5)
{
  int v8; // r0

  v8 = BackPack::index2Grid((BackPack *)this, a2);
  return WorldStorageBox::addItem(*(this + 3), a3, a4, a5, *(_DWORD *)(v8 + 28), (int *)(v8 + 32));
}


//======================================================================
// BackPack::afterChangeGrid(int)
// address: 0x002DDC7A   size: 0x12 (18 bytes)
//======================================================================
int __fastcall BackPack::afterChangeGrid(BackPack *this, int a2)
{
  int Container; // r0

  Container = BackPack::getContainer(this, a2);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 12))(Container, a2);
}


//======================================================================
// BackPack::setItem(int,int,int)
// address: 0x002DDC8C   size: 0x4C (76 bytes)
//======================================================================
int __fastcall BackPack::setItem(BackPack *this, int a2, int a3, int a4)
{
  int Container; // r5
  int result; // r0
  BackPackGrid *v9; // r0

  Container = BackPack::getContainer(this, a3);
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 16))(Container, a3);
  if ( result != 0 )
  {
    v9 = (BackPackGrid *)(*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 8))(Container, a3);
    SetBackPackGrid(v9, a2, a4, -1, nullptr, 1, 0);
    return BackPack::afterChangeGrid(this, a3);
  }
  return result;
}


//======================================================================
// BackPack::shiftMoveItem(int,int)
// address: 0x002DDCD8   size: 0x50 (80 bytes)
//======================================================================
int __fastcall BackPack::shiftMoveItem(BackPack *this, int a2, int a3)
{
  int v5; // r5
  int v6; // r4
  PackContainer *Pack; // r0
  int v8; // r0
  int v9; // r3

  v5 = 0;
  v6 = BackPack::index2Grid(this, a2);
  if ( *(_DWORD *)(v6 + 8) != 0 )
  {
    Pack = (PackContainer *)BackPack::getPack(this, a3);
    v8 = PackContainer::addItem(Pack, **(_DWORD **)(v6 + 4), *(_DWORD *)(v6 + 8), *(_DWORD *)(v6 + 12), 0, nullptr);
    v9 = *(_DWORD *)(v6 + 8) - v8;
    *(_DWORD *)(v6 + 8) = v9;
    if ( v9 == 0 )
      *(_DWORD *)(v6 + 4) = 0;
    if ( v8 > 0 )
      BackPack::afterChangeGrid(this, a2);
    return 1;
  }
  return v5;
}


//======================================================================
// BackPack::removeItem(int,int)
// address: 0x002DDD28   size: 0x20 (32 bytes)
//======================================================================
int __fastcall BackPack::removeItem(BackPack *this, int a2, int a3)
{
  int v6; // r0
  int v7; // r3

  v6 = BackPack::index2Grid(this, a2);
  v7 = *(_DWORD *)(v6 + 8);
  *(_DWORD *)(v6 + 8) = v7 - a3;
  if ( v7 == a3 )
    *(_DWORD *)(v6 + 4) = v7 - a3;
  return BackPack::afterChangeGrid(this, a2);
}


//======================================================================
// BackPack::replaceItem(int,int,int,int)
// address: 0x002DDD48   size: 0x30 (48 bytes)
//======================================================================
int __fastcall BackPack::replaceItem(BackPack *this, int a2, int a3, int a4, int a5)
{
  BackPackGrid *v9; // r0

  v9 = (BackPackGrid *)BackPack::index2Grid(this, a2);
  SetBackPackGrid(v9, a3, a4, a5, nullptr, 1, 0);
  return BackPack::afterChangeGrid(this, a2);
}


//======================================================================
// BackPack::moveItem(int,int,int)
// address: 0x002DDD78   size: 0x7C (124 bytes)
//======================================================================
int __fastcall BackPack::moveItem(BackPack *this, int a2, int a3, int a4)
{
  int Container; // r7
  _DWORD *v7; // r4
  _DWORD *v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r1
  int v13; // [sp+4h] [bp-10h]

  Container = BackPack::getContainer(this, a3);
  v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 16))(Container, a3);
  if ( v13 == 0 )
    return 0;
  v7 = (_DWORD *)BackPack::index2Grid(this, a2);
  v8 = (_DWORD *)(*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 8))(Container, a3);
  v9 = v7[1];
  if ( v9 == 0 )
    return 0;
  v10 = v8[1];
  if ( v10 != 0 )
  {
    if ( v10 == v9 )
      goto LABEL_8;
    return 0;
  }
  v8[1] = v9;
  v8[3] = v7[3];
LABEL_8:
  v8[2] += a4;
  v11 = v7[2];
  v7[2] = v11 - a4;
  if ( v11 == a4 )
    v7[1] = v11 - a4;
  BackPack::afterChangeGrid(this, a2);
  BackPack::afterChangeGrid(this, a3);
  return v13;
}


//======================================================================
// BackPack::swapItem(int,int)
// address: 0x002DDDF4   size: 0x70 (112 bytes)
//======================================================================
int __fastcall BackPack::swapItem(BackPack *this, int a2, int a3)
{
  _DWORD *v5; // r6
  int Container; // r7
  int result; // r0
  _DWORD *v8; // r7
  int v10[14]; // [sp+Ch] [bp-38h] BYREF

  v5 = (_DWORD *)BackPack::index2Grid(this, a2);
  Container = BackPack::getContainer(this, a3);
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 16))(Container, a3);
  if ( result != 0 || (int)v5[2] <= 0 )
  {
    v8 = (_DWORD *)(*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 8))(Container, a3);
    sub_2DD7EC(v10, v8, v8[2]);
    sub_2DD7EC(v8, v5, v5[2]);
    sub_2DD7EC(v5, v10, v10[2]);
    BackPack::afterChangeGrid(this, a2);
    return BackPack::afterChangeGrid(this, a3);
  }
  return result;
}


//======================================================================
// BackPack::findItemInNormalPack(int)
// address: 0x002DDE64   size: 0x30 (48 bytes)
//======================================================================
int __fastcall BackPack::findItemInNormalPack(BackPack *this, int a2)
{
  PackContainer *Pack; // r0
  int result; // r0
  PackContainer *v6; // r0

  Pack = (PackContainer *)BackPack::getPack(this, 1000);
  result = PackContainer::findItem(Pack, a2);
  if ( result < 0 )
  {
    v6 = (PackContainer *)BackPack::getPack(this, 0);
    result = PackContainer::findItem(v6, a2);
    if ( result < 0 )
      return -1;
  }
  return result;
}


//======================================================================
// BackPack::setEnchantItem(int,int)
// address: 0x002DDE94   size: 0x62 (98 bytes)
//======================================================================
int __fastcall BackPack::setEnchantItem(BackPack *this, int a2, int a3)
{
  _DWORD *v5; // r7
  int Container; // r6
  int result; // r0
  _DWORD *v8; // [sp+0h] [bp-44h]
  _DWORD v10[14]; // [sp+Ch] [bp-38h] BYREF

  v5 = (_DWORD *)BackPack::index2Grid(this, a2);
  Container = BackPack::getContainer(this, a3);
  result = (*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 16))(Container, a3);
  if ( result != 0 || (int)v5[2] <= 0 )
  {
    v8 = (_DWORD *)(*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 8))(Container, a3);
    sub_2DD7EC(v10, v5, 1);
    sub_2DD7EC(v8, v10, 1);
    BackPack::afterChangeGrid(this, a2);
    return BackPack::afterChangeGrid(this, a3);
  }
  return result;
}


//======================================================================
// BackPack::getGridItem(int)
// address: 0x002DDEF6   size: 0x10 (16 bytes)
//======================================================================
int __fastcall BackPack::getGridItem(BackPack *this, int a2)
{
  int result; // r0

  result = *(_DWORD *)(BackPack::index2Grid(this, a2) + 4);
  if ( result != 0 )
    return *(_DWORD *)result;
  return result;
}


//======================================================================
// BackPack::getGridNum(int)
// address: 0x002DDF06   size: 0xA (10 bytes)
//======================================================================
int __fastcall BackPack::getGridNum(BackPack *this, int a2)
{
  return *(_DWORD *)(BackPack::index2Grid(this, a2) + 8);
}


//======================================================================
// BackPack::getGridDuration(int)
// address: 0x002DDF10   size: 0xC (12 bytes)
//======================================================================
int __fastcall BackPack::getGridDuration(BackPack *this, int a2)
{
  BackPackGrid *v2; // r0

  v2 = (BackPackGrid *)BackPack::index2Grid(this, a2);
  return BackPackGrid::getDuration(v2);
}


//======================================================================
// BackPack::getGridMaxDuration(int)
// address: 0x002DDF1C   size: 0xC (12 bytes)
//======================================================================
int __fastcall BackPack::getGridMaxDuration(BackPack *this, int a2)
{
  BackPackGrid *v2; // r0

  v2 = (BackPackGrid *)BackPack::index2Grid(this, a2);
  return BackPackGrid::getMaxDuration(v2);
}


//======================================================================
// BackPack::getGridEnchantNum(int)
// address: 0x002DDF28   size: 0xA (10 bytes)
//======================================================================
int __fastcall BackPack::getGridEnchantNum(BackPack *this, int a2)
{
  return *(_DWORD *)(BackPack::index2Grid(this, a2) + 28);
}


//======================================================================
// BackPack::getGridEnchantId(int,int)
// address: 0x002DDF32   size: 0x10 (16 bytes)
//======================================================================
int __fastcall BackPack::getGridEnchantId(BackPack *this, int a2, int a3)
{
  return *(_DWORD *)(4 * (a3 + 8) + BackPack::index2Grid(this, a2));
}


//======================================================================
// BackPack::getGridUserdata(int)
// address: 0x002DDF42   size: 0xA (10 bytes)
//======================================================================
int __fastcall BackPack::getGridUserdata(BackPack *this, int a2)
{
  return *(_DWORD *)(BackPack::index2Grid(this, a2) + 16);
}


//======================================================================
// BackPack::getGridEnough(int)
// address: 0x002DDF4C   size: 0xA (10 bytes)
//======================================================================
int __fastcall BackPack::getGridEnough(BackPack *this, int a2)
{
  return *(_DWORD *)(BackPack::index2Grid(this, a2) + 20);
}


//======================================================================
// BackPack::canPutItem(int)
// address: 0x002DDF56   size: 0x12 (18 bytes)
//======================================================================
int __fastcall BackPack::canPutItem(BackPack *this, int a2)
{
  int Container; // r0

  Container = BackPack::getContainer(this, a2);
  return (*(int (__fastcall **)(int, int))(*(_DWORD *)Container + 16))(Container, a2);
}


//======================================================================
// BackPack::getGridItemName(int)
// address: 0x002DDF68   size: 0x16 (22 bytes)
//======================================================================
void *__fastcall BackPack::getGridItemName(BackPack *this, int a2)
{
  int v2; // r0

  v2 = *(_DWORD *)(BackPack::index2Grid(this, a2) + 4);
  if ( v2 != 0 )
    return (void *)(v2 + 16);
  else
    return &unk_3FB8EA;
}


//======================================================================
// BackPack::attachContainer(BaseContainer *)
// address: 0x002DDF84   size: 0x1E (30 bytes)
//======================================================================
int __fastcall BackPack::attachContainer(BackPack *this, BaseContainer *a2)
{
  *((_DWORD *)this + *((_DWORD *)a2 + 1) / 1000) = a2;
  return (*(int (__fastcall **)(BaseContainer *))(*(_DWORD *)a2 + 20))(a2);
}


//======================================================================
// BackPack::detachContainer(BaseContainer *)
// address: 0x002DDFA2   size: 0x20 (32 bytes)
//======================================================================
int __fastcall BackPack::detachContainer(BackPack *this, BaseContainer *a2)
{
  int result; // r0

  (*(void (__fastcall **)(BaseContainer *))(*(_DWORD *)a2 + 24))(a2);
  result = 4 * (*((_DWORD *)a2 + 1) / 1000);
  *(_DWORD *)((char *)this + result) = 0;
  return result;
}


//======================================================================
// BackPack::clearPack(void)
// address: 0x002DDFC2   size: 0x2C (44 bytes)
//======================================================================
PackContainer *__fastcall BackPack::clearPack(BackPack *this)
{
  PackContainer *Container; // r0
  PackContainer *v3; // r0
  PackContainer *result; // r0

  Container = (PackContainer *)BackPack::getContainer(this, 0);
  PackContainer::clear(Container);
  v3 = (PackContainer *)BackPack::getContainer(this, 1000);
  PackContainer::clear(v3);
  result = (PackContainer *)BackPack::getContainer(this, 8000);
  PackContainer::clear(result);
  return result;
}


//======================================================================
// BackPack::mergePack(int)
// address: 0x002DDFF0   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall BackPack::mergePack(BackPack *this, int a2)
{
  int result; // r0
  unsigned int v3; // r5
  int v4; // r6
  int v5; // r4
  int v6; // r3
  int v7; // r4
  int v8; // r1
  BackPackGrid *v9; // r0
  _DWORD *v10; // r2
  _DWORD *v11; // r3
  int v12; // r7
  int v13; // r3
  int v14; // r7
  unsigned int i; // [sp+10h] [bp-Ch]
  int v16; // [sp+14h] [bp-8h]

  result = BackPack::getContainer(this, a2);
  v3 = 0;
  v4 = result;
  while ( 1 )
  {
    v5 = *(_DWORD *)(v4 + 12);
    if ( v3 >= -991146299 * ((*(_DWORD *)(v4 + 16) - v5) >> 2) )
      break;
    v6 = 52 * v3;
    v7 = v5 + 52 * v3;
    v8 = *(_DWORD *)(v7 + 4);
    if ( v8 != 0 )
    {
      result = *(_DWORD *)(v7 + 8);
      if ( *(_DWORD *)(v8 + 440) > result )
      {
        for ( i = v3 + 1; ; ++i )
        {
          result = *(_DWORD *)(v4 + 12);
          v16 = v6 + 52;
          if ( i >= -991146299 * ((*(_DWORD *)(v4 + 16) - result) >> 2) )
            break;
          v9 = (BackPackGrid *)(result + v16);
          v10 = *((_DWORD **)v9 + 1);
          if ( v10 != nullptr )
          {
            v11 = *(_DWORD **)(v7 + 4);
            if ( *v11 == *v10 )
            {
              v12 = *((_DWORD *)v9 + 2);
              v13 = v11[110] - *(_DWORD *)(v7 + 8);
              if ( v13 < v12 )
              {
                *((_DWORD *)v9 + 2) = v12 - v13;
                v12 = v13;
              }
              else
              {
                SetBackPackGrid(v9, 0, 0, -1, nullptr, 1, 0);
              }
              result = *(_DWORD *)(v7 + 4);
              v14 = v12 + *(_DWORD *)(v7 + 8);
              *(_DWORD *)(v7 + 8) = v14;
              if ( v14 >= *(_DWORD *)(result + 440) )
                break;
            }
          }
          v6 = v16;
        }
      }
    }
    ++v3;
  }
  return result;
}


//======================================================================
// BackPack::doCrafting2Mobile(int,int)
// address: 0x002DE0D8   size: 0x1D8 (472 bytes)
//======================================================================
int __fastcall BackPack::doCrafting2Mobile(BackPack *this, int a2, int a3)
{
  int v5; // r5
  int result; // r0
  int v7; // r3
  int v8; // r3
  unsigned int i; // r1
  int v10; // r2
  _DWORD *v11; // r2
  int *v12; // r6
  int v13; // r6
  int v14; // r7
  int v15; // r6
  unsigned int j; // r1
  int v17; // r2
  int *v18; // r2
  int *v19; // r6
  int v20; // r6
  int v21; // r7
  int v22; // r6
  int v23; // [sp+Ch] [bp-30h]
  int v24; // [sp+Ch] [bp-30h]
  int v25; // [sp+18h] [bp-24h]
  unsigned int v26; // [sp+1Ch] [bp-20h]
  int GridItem; // [sp+20h] [bp-1Ch]
  int Container; // [sp+28h] [bp-14h]
  int v29; // [sp+2Ch] [bp-10h]
  int GridNum; // [sp+30h] [bp-Ch]
  int v31; // [sp+34h] [bp-8h]

  Container = BackPack::getContainer(this, a3);
  v29 = BackPack::getContainer(this, 0);
  v5 = BackPack::getContainer(this, 1000);
  GridItem = BackPack::getGridItem(this, a2);
  GridNum = BackPack::getGridNum(this, a2);
  result = DefManager::findCrafting((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, GridItem);
  v31 = result;
  if ( GridItem > 0 )
  {
    v26 = 0;
    v25 = 0;
    while ( 1 )
    {
      v7 = *(_DWORD *)(Container + 12);
      result = *(_DWORD *)(Container + 16);
      if ( v26 >= -991146299 * ((result - v7) >> 2) - 1 )
        break;
      v8 = v7 + 52 * v26;
      if ( *(_DWORD *)(v8 + 4) != 0 )
      {
        for ( i = 0; ; ++i )
        {
          v10 = *(_DWORD *)(v29 + 12);
          if ( i >= -991146299 * ((*(_DWORD *)(v29 + 16) - v10) >> 2) )
            break;
          v11 = (_DWORD *)(v10 + 52 * i);
          v12 = (int *)v11[1];
          if ( v12 != nullptr )
          {
            v23 = *v12;
            if ( *(_BYTE *)(v31 + 36) != 0 )
            {
              v13 = v12[113];
              if ( v13 > 0 )
                v23 = v13;
            }
            if ( **(_DWORD **)(v8 + 4) == v23 )
            {
              v14 = *(_DWORD *)(v8 + 8);
              v15 = v11[2];
              if ( v14 < v15 )
              {
                v11[2] = v15 - v14;
                *(_DWORD *)(v8 + 8) = 0;
                v25 = 1;
                break;
              }
              *(_DWORD *)(v8 + 8) = v14 - v15;
              v11[3] = -1;
              v11[2] = 0;
              v11[1] = 0;
              v11[4] = 0;
              v11[5] = 1;
              if ( *(_DWORD *)(v8 + 8) == 0 )
              {
                v25 = 1;
                break;
              }
            }
          }
        }
        if ( *(int *)(v8 + 8) > 0 )
        {
          for ( j = 0; ; ++j )
          {
            v17 = *(_DWORD *)(v5 + 12);
            if ( j >= -991146299 * ((*(_DWORD *)(v5 + 16) - v17) >> 2) )
              break;
            v18 = (int *)(v17 + 52 * j);
            v19 = (int *)v18[1];
            if ( v19 != nullptr )
            {
              v24 = *v19;
              if ( *(_BYTE *)(v31 + 36) != 0 )
              {
                v20 = v19[113];
                if ( v20 > 0 )
                  v24 = v20;
              }
              if ( **(_DWORD **)(v8 + 4) == v24 )
              {
                v21 = *(_DWORD *)(v8 + 8);
                v22 = v18[2];
                if ( v21 < v22 )
                {
                  v18[2] = v22 - v21;
                  v25 = 1;
                  break;
                }
                *(_DWORD *)(v8 + 8) = v21 - v22;
                v18[3] = -1;
                v18[2] = 0;
                v18[1] = 0;
                v18[4] = 0;
                v18[5] = 1;
                if ( *(_DWORD *)(v8 + 8) == 0 )
                {
                  BackPack::afterChangeGrid(this, *v18);
                  v25 = 1;
                  break;
                }
              }
            }
          }
        }
      }
      ++v26;
    }
    if ( v25 != 0 )
    {
      PlayerControl::gainItems((PlayerControl *)g_pPlayerCtrl, GridItem, GridNum, 1);
      (*(void (__fastcall **)(int, int, int, int, int))(*(_DWORD *)g_pPlayerCtrl + 208))(
        g_pPlayerCtrl,
        1,
        2,
        GridItem,
        GridNum);
      return GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, -1);
    }
  }
  return result;
}


//======================================================================
// BackPack::doRepair(int)
// address: 0x002DE2C0   size: 0xA (10 bytes)
//======================================================================
int __fastcall BackPack::doRepair(RepairContainer **this, int a2)
{
  return RepairContainer::doRepair(*(this + 15), a2);
}


//======================================================================
// BackPack::clearEnchant(int)
// address: 0x002DE2CA   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall BackPack::clearEnchant(BackPack *this, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)BackPack::index2Grid(this, a2);
  if ( result[1] != 0 )
  {
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
  }
  return result;
}


//======================================================================
// BackPack::enchant(int,int,int)
// address: 0x002DE2E8   size: 0x2C (44 bytes)
//======================================================================
int __fastcall BackPack::enchant(BackPack *this, int a2, int a3, int a4)
{
  EnchantContainer *v4; // r4
  int result; // r0

  v4 = *((EnchantContainer **)this + 16);
  result = EnchantContainer::enchant(v4, a2, a3, a4);
  if ( result != 0 )
  {
    result = (*(int (__fastcall **)(EnchantContainer *, int))(*(_DWORD *)v4 + 8))(v4, 16001);
    if ( *(_DWORD *)(result + 4) != 0 )
      return BackPack::removeItem(this, 16001, 1);
  }
  return result;
}


//======================================================================
// BackPack::updateCraftContainer(int,int,int)
// address: 0x002DE488   size: 0x1AA (426 bytes)
//======================================================================
void **__fastcall BackPack::updateCraftContainer(BackPack *this, int a2, int a3, int a4)
{
  int Container; // r7
  void **result; // r0
  _DWORD *Crafting; // r4
  _DWORD *v9; // r5
  int v10; // r6
  int v11; // r1
  int v12; // r2
  int v13; // [sp+14h] [bp-70h]
  BackPackGrid *v14; // [sp+18h] [bp-6Ch]
  int v15; // [sp+1Ch] [bp-68h]
  int v16; // [sp+1Ch] [bp-68h]
  int v17; // [sp+20h] [bp-64h]
  int v18; // [sp+20h] [bp-64h]
  int v19; // [sp+24h] [bp-60h]
  int v20; // [sp+28h] [bp-5Ch]
  const void *v23[3]; // [sp+38h] [bp-4Ch] BYREF
  void *v24[3]; // [sp+44h] [bp-40h] BYREF
  void *v25[3]; // [sp+50h] [bp-34h] BYREF
  void *v26[3]; // [sp+5Ch] [bp-28h] BYREF
  void *v27[3]; // [sp+68h] [bp-1Ch] BYREF
  void *v28[4]; // [sp+74h] [bp-10h] BYREF

  Container = BackPack::getContainer(this, a3);
  result = (void **)PackContainer::initGrids(Container, a3);
  if ( a2 > 0 )
  {
    v15 = BackPack::getContainer(this, 0);
    v17 = BackPack::getContainer(this, 1000);
    v19 = (a3 == 4000) + 2;
    Crafting = (_DWORD *)DefManager::findCrafting((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a2);
    memset(v23, 0, sizeof(v23));
    memset(v24, 0, sizeof(v24));
    memset(v25, 0, sizeof(v25));
    GetNeedMaterialID(Crafting, v23, v24);
    std::vector<int>::vector((unsigned int *)v26, v23);
    FindMaterial2Container((int)Crafting, v15, (int *)v26, v25);
    std::_Vector_base<int>::~_Vector_base(v26);
    std::vector<int>::vector((unsigned int *)v27, v23);
    FindMaterial2Container((int)Crafting, v17, (int *)v27, v25);
    std::_Vector_base<int>::~_Vector_base(v27);
    v16 = 0;
    v13 = 0;
    v20 = 0;
    do
    {
      v18 = 0;
      do
      {
        if ( v13 < Crafting[8] && v18 < Crafting[7] )
        {
          v14 = (BackPackGrid *)(*(_DWORD *)(Container + 12) + 52 * (v18 + v16));
          std::vector<int>::vector((unsigned int *)v28, v23);
          v9 = &Crafting[v20];
          v10 = IsEnoughMaterialNum((int *)v28, v25, v9[10], v9[19]);
          std::_Vector_base<int>::~_Vector_base(v28);
          v11 = v9[10];
          v12 = v9[19];
          if ( v10 != 0 )
            SetBackPackGrid(v14, v11, v12, -1, Crafting, 1, 0);
          else
            SetBackPackGrid(v14, v11, v12, -1, Crafting, 0, 0);
          ++v20;
        }
        ++v18;
      }
      while ( v18 < v19 );
      ++v13;
      v16 += v19;
    }
    while ( v13 < v19 );
    SetBackPackGrid(
      (BackPackGrid *)(*(_DWORD *)(Container + 12)
                     + 52 * (-991146299 * ((*(_DWORD *)(Container + 16) - *(_DWORD *)(Container + 12)) >> 2) - 1)),
      a2,
      Crafting[3],
      -1,
      Crafting,
      a4,
      0);
    std::_Vector_base<int>::~_Vector_base(v25);
    std::_Vector_base<int>::~_Vector_base(v24);
    return std::_Vector_base<int>::~_Vector_base((void **)v23);
  }
  return result;
}


//======================================================================
// BackPack::addItemDuration(int,int)
// address: 0x002DE730   size: 0x7A (122 bytes)
//======================================================================
BackPackGrid *__fastcall BackPack::addItemDuration(BackPack *this, int a2, int a3)
{
  BackPackGrid *result; // r0
  int *v6; // r2
  BackPackGrid *v7; // r4
  int v8; // r7
  int v9; // r3
  int MaxDuration; // r0
  int v12; // [sp+Ch] [bp-8h] BYREF

  result = (BackPackGrid *)BackPack::index2Grid(this, a2);
  v6 = *((int **)result + 1);
  v7 = result;
  if ( v6 != nullptr )
  {
    v12 = *v6;
    v8 = Ogre::Singleton<DefManager>::ms_Singleton;
    result = (BackPackGrid *)std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::find(
                               Ogre::Singleton<DefManager>::ms_Singleton + 472,
                               &v12);
    if ( result != (BackPackGrid *)(v8 + 476) && result != (BackPackGrid *)-20 && *((int *)result + 20) > 0 )
    {
      v9 = a3 + *((_DWORD *)v7 + 3);
      *((_DWORD *)v7 + 3) = v9;
      if ( v9 != 0 )
      {
        MaxDuration = BackPackGrid::getMaxDuration(v7);
        if ( *((_DWORD *)v7 + 3) > MaxDuration )
          *((_DWORD *)v7 + 3) = MaxDuration;
        return (BackPackGrid *)GameEventQue::postBackpackChange(
                                 (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
                                 a2);
      }
      else
      {
        return (BackPackGrid *)BackPack::removeItem(this, a2, 1);
      }
    }
  }
  return result;
}


//======================================================================
// BackPack::getGridToolType(int)
// address: 0x002DE7B4   size: 0x3C (60 bytes)
//======================================================================
int __fastcall BackPack::getGridToolType(BackPack *this, int a2)
{
  int *v2; // r2
  int v4; // r4
  _DWORD *v5; // r0
  int v6; // [sp+4h] [bp-4h] BYREF

  v6 = a2;
  v2 = *(int **)(BackPack::index2Grid(this, a2) + 4);
  if ( v2 == nullptr )
    return -1;
  v6 = *v2;
  v4 = Ogre::Singleton<DefManager>::ms_Singleton;
  v5 = std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::find(
         Ogre::Singleton<DefManager>::ms_Singleton + 472,
         &v6);
  if ( v5 == (_DWORD *)(v4 + 476) || v5 == (_DWORD *)-20 )
    return -1;
  else
    return v5[14];
}


//======================================================================
// BackPack::sortStorageBox(void)
// address: 0x002DEBAC   size: 0xF0 (240 bytes)
//======================================================================
void __fastcall BackPack::sortStorageBox(BackPack *this)
{
  int Container; // r6
  int v2; // r7
  int v3; // r4
  __int64 v4; // r0
  int v5; // r4
  __int64 v6; // r0
  int v7; // [sp+0h] [bp-1Ch]
  int v8; // [sp+4h] [bp-18h]
  void *v9; // [sp+Ch] [bp-10h] BYREF
  char *v10; // [sp+10h] [bp-Ch]
  int v11; // [sp+14h] [bp-8h]

  Container = BackPack::getContainer(this, 3000);
  v9 = nullptr;
  v10 = nullptr;
  v11 = 0;
  v2 = Container + 48;
  v3 = 31;
  while ( --v3 != 0 )
  {
    LODWORD(v4) = &v9;
    HIDWORD(v4) = v2;
    std::vector<BackPackGrid>::push_back(v4);
    v2 += 52;
  }
  if ( *(_DWORD *)(Container + 1608) != 0 )
  {
    do
    {
      HIDWORD(v6) = *(_DWORD *)(Container + 1608) + 52 * v3 + 48;
      LODWORD(v6) = &v9;
      std::vector<BackPackGrid>::push_back(v6);
      ++v3;
    }
    while ( v3 != 30 );
  }
  std::sort<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
    (char *)v9,
    v10,
    (int (__fastcall *)(int, int))LessThan);
  v5 = 3000;
  v7 = 0;
  while ( v5 - 3000 < (unsigned int)(-991146299 * ((v10 - (_BYTE *)v9) >> 2)) )
  {
    if ( v5 > 3029 )
    {
      if ( v5 <= 3059 )
      {
        v8 = 52 * (v5 - 3030);
        j_memcpy((void *)(*(_DWORD *)(Container + 1608) + v8 + 48), (char *)v9 + v7, 0x34u);
        *(_DWORD *)(*(_DWORD *)(Container + 1608) + v8 + 48) = v5 - 30;
      }
    }
    else
    {
      j_memcpy((void *)(Container + v7 + 48), (char *)v9 + v7, 0x34u);
      *(_DWORD *)(Container + v7 + 48) = v5;
    }
    ++v5;
    v7 += 52;
  }
  if ( v9 != nullptr )
    operator delete(v9);
}


//======================================================================
// BackPack::sortPack(int)
// address: 0x002DECB8   size: 0x94 (148 bytes)
//======================================================================
void **__fastcall BackPack::sortPack(BackPack *this, int a2)
{
  unsigned int v3; // r7
  int Container; // r6
  char *v5; // r1
  char *v6; // r0
  __int64 v7; // r0
  int (__fastcall **v8)(int, int); // r2
  unsigned int i; // r3
  int v10; // r2
  int v11; // r4
  int v12; // r1
  void *v14[4]; // [sp+4h] [bp-10h] BYREF

  v3 = 0;
  Container = BackPack::getContainer(this, a2);
  memset(v14, 0, 12);
  while ( 1 )
  {
    v5 = *(char **)(Container + 16);
    v6 = *(char **)(Container + 12);
    if ( v3 >= -991146299 * ((v5 - v6) >> 2) )
      break;
    HIDWORD(v7) = &v6[52 * v3];
    LODWORD(v7) = v14;
    std::vector<int>::push_back(v7);
    ++v3;
  }
  if ( a2 == 10000 || a2 == 11000 || a2 == 12000 || a2 == 13000 || a2 == 14000 )
    v8 = (int (__fastcall **)(int, int))&LessThan2sortId;
  else
    v8 = (int (__fastcall **)(int, int))&LessThan;
  std::sort<__gnu_cxx::__normal_iterator<BackPackGrid *,std::vector<BackPackGrid>>,bool (*)(BackPackGrid const&,BackPackGrid const&)>(
    v6,
    v5,
    *v8);
  for ( i = 0; ; ++i )
  {
    v10 = *(_DWORD *)(Container + 12);
    if ( i >= -991146299 * ((*(_DWORD *)(Container + 16) - v10) >> 2) )
      break;
    v11 = *((_DWORD *)v14[0] + i);
    v12 = 52 * i;
    *(_DWORD *)(v12 + v10) = v11;
  }
  return std::_Vector_base<int>::~_Vector_base(v14);
}


//======================================================================
// BackPack::updateProductContainer(int)
// address: 0x002DED78   size: 0x24A (586 bytes)
//======================================================================
void **__fastcall BackPack::updateProductContainer(BackPack *this, int a2)
{
  int Container; // r7
  int i; // r4
  int v4; // r2
  int v5; // r3
  int v6; // r5
  int *v7; // r1
  int v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r1
  int v12; // r2
  int v13; // r6
  int j; // r1
  int *v15; // r0
  int v16; // r0
  BackPackGrid *v17; // r3
  int v18; // r1
  int k; // r2
  BackPackGrid *v20; // r0
  int v22; // [sp+14h] [bp-68h]
  int v23; // [sp+14h] [bp-68h]
  int v24; // [sp+24h] [bp-58h]
  int v25; // [sp+28h] [bp-54h]
  int v28; // [sp+38h] [bp-44h]
  int v29; // [sp+40h] [bp-3Ch]
  int v30; // [sp+44h] [bp-38h]
  int v31; // [sp+48h] [bp-34h]
  int v32; // [sp+4Ch] [bp-30h]
  char *v33; // [sp+60h] [bp-1Ch] BYREF
  int v34; // [sp+64h] [bp-18h]
  int v35; // [sp+68h] [bp-14h]
  void *v36[4]; // [sp+6Ch] [bp-10h] BYREF

  Container = BackPack::getContainer(this, a2);
  PackContainer::initGrids(Container, a2);
  v29 = BackPack::getContainer(this, 0);
  v30 = BackPack::getContainer(this, 1000);
  for ( i = *(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 508);
        i != Ogre::Singleton<DefManager>::ms_Singleton + 500;
        i = sub_391DDC(i) )
  {
    switch ( a2 )
    {
      case 10000:
        if ( *(int *)(i + 48) > 2 || *(int *)(i + 52) > 2 )
          continue;
        break;
      case 11000:
        if ( *(_DWORD *)(i + 24) != 0 )
          continue;
        break;
      case 12000:
        if ( *(_DWORD *)(i + 24) != 1 )
          continue;
        break;
      case 13000:
        if ( *(_DWORD *)(i + 24) != 2 )
          continue;
        break;
      default:
        if ( a2 == 14000 && *(_DWORD *)(i + 24) != 3 )
          continue;
        break;
    }
    v34 = 0;
    v35 = 0;
    v33 = nullptr;
    memset(v36, 0, 12);
    GetNeedMaterialID((_DWORD *)(i + 20), &v33, v36);
    v25 = 0;
    v24 = -1;
    v28 = 0;
    while ( v25 != 4 * ((v34 - (int)v33) >> 2) )
    {
      v31 = *(_DWORD *)&v33[v25];
      v32 = *(_DWORD *)((char *)v36[0] + v25);
      v4 = 0;
      v22 = *(_DWORD *)(v29 + 12);
      v5 = 0;
      v6 = 0;
      while ( v4 != 4 * ((*(_DWORD *)(v29 + 16) - *(_DWORD *)(v29 + 12)) >> 2) )
      {
        v7 = *(int **)(v22 + v4 + 4);
        if ( v7 != nullptr )
        {
          v8 = *v7;
          if ( *(_BYTE *)(i + 56) != 0 )
          {
            v9 = v7[113];
            if ( v9 > 0 )
              v8 = v9;
          }
          if ( v8 == v31 )
          {
            v6 += *(_DWORD *)(v22 + v4 + 8);
            v5 = 1;
            v28 = 1;
          }
        }
        v4 += 52;
      }
      v10 = *(_DWORD *)(v30 + 12);
      v11 = (*(_DWORD *)(v30 + 16) - v10) >> 2;
      v12 = v10 + 4;
      v13 = -991146299 * v11;
      for ( j = 0; j != v13; ++j )
      {
        v15 = *(int **)v12;
        if ( *(_DWORD *)v12 != 0 )
        {
          v23 = *v15;
          if ( *(_BYTE *)(i + 56) != 0 )
          {
            v16 = v15[113];
            if ( v16 > 0 )
              v23 = v16;
          }
          if ( v23 == v31 )
          {
            v5 = 1;
            v28 = 1;
            v6 += *(_DWORD *)(v12 + 4);
          }
        }
        v12 += 52;
      }
      if ( v5 != 0 )
      {
        if ( v24 == -1 || v6 / v32 < v24 )
          v24 = v6 / v32;
      }
      else
      {
        v24 = 0;
      }
      v25 += 4;
    }
    if ( v28 != 0 )
    {
      v17 = *(BackPackGrid **)(Container + 12);
      v18 = -991146299 * ((*(_DWORD *)(Container + 16) - (int)v17) >> 2);
      for ( k = 0; k != v18; ++k )
      {
        v20 = v17;
        v17 = (BackPackGrid *)((char *)v17 + 52);
        if ( *((_DWORD *)v17 - 12) == 0 )
        {
          SetBackPackGrid(
            v20,
            *(_DWORD *)(i + 28),
            *(_DWORD *)(i + 32) * v24,
            -1,
            nullptr,
            (unsigned int)((v24 >> 31) - v24) >> 31,
            *(_DWORD *)(i + 20));
          break;
        }
      }
    }
    std::_Vector_base<int>::~_Vector_base(v36);
    std::_Vector_base<int>::~_Vector_base((void **)&v33);
  }
  return BackPack::sortPack(this, a2);
}

