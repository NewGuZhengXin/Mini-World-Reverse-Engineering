// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: EnchantContainer

//======================================================================
// EnchantContainer::canPutItem(int)
// address: 0x002F31B8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall EnchantContainer::canPutItem(EnchantContainer *this, int a2)
{
  return 1;
}


//======================================================================
// EnchantContainer::~EnchantContainer()
// address: 0x002F31BC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16EnchantContainerD1Ev'
void __fastcall EnchantContainer::~EnchantContainer(EnchantContainer *this)
{
  *(_DWORD *)this = &off_462398;
  PackContainer::~PackContainer(this);
}


//======================================================================
// EnchantContainer::~EnchantContainer()
// address: 0x002F31D8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall EnchantContainer::~EnchantContainer(EnchantContainer *this)
{
  EnchantContainer::~EnchantContainer(this);
  operator delete(this);
}


//======================================================================
// EnchantContainer::EnchantContainer(int,int)
// address: 0x002F31EC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN16EnchantContainerC2Eii'
void __fastcall EnchantContainer::EnchantContainer(EnchantContainer *this, int a2, int a3)
{
  PackContainer::PackContainer(this, a2, a3);
  *(_DWORD *)this = &off_462398;
}


//======================================================================
// EnchantContainer::enchant(int,int,int)
// address: 0x002F3208   size: 0x6A (106 bytes)
//======================================================================
int __fastcall EnchantContainer::enchant(EnchantContainer *this, int a2, int a3, int a4)
{
  int v7; // r6
  int v8; // r3
  int v9; // r2
  int v10; // r1
  int ItemDef; // r0

  if ( *(_DWORD *)(*((_DWORD *)this + 3) + 4) == 0 )
    return 0;
  v7 = 100 * a3 + a4;
  if ( DefManager::getEnchantDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v7) == nullptr )
    return 0;
  v8 = *((_DWORD *)this + 3);
  v9 = *(_DWORD *)(v8 + 28);
  if ( v9 <= 4 )
    *(_DWORD *)(v8 + 28) = v9 + 1;
  *(_DWORD *)(4 * (a2 + 8) + *((_DWORD *)this + 3)) = v7;
  v10 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 4) + 464);
  if ( v10 > 0 )
  {
    ItemDef = DefManager::getItemDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v10);
    if ( ItemDef != 0 )
      *(_DWORD *)(*((_DWORD *)this + 3) + 4) = ItemDef;
  }
  (*(void (__fastcall **)(EnchantContainer *, int))(*(_DWORD *)this + 12))(this, 16000);
  return 1;
}


//======================================================================
// EnchantContainer::afterChangeGrid(int)
// address: 0x002F3278   size: 0x8 (8 bytes)
//======================================================================
int __fastcall EnchantContainer::afterChangeGrid(EnchantContainer *this, int a2)
{
  return PackContainer::afterChangeGrid(this, a2);
}

