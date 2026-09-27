// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DynLibManager

//======================================================================
// Ogre::DynLibManager::getSingletonPtr(void)
// address: 0x001558FC   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::DynLibManager::getSingletonPtr(Ogre::DynLibManager *this)
{
  return Ogre::Singleton<Ogre::DynLibManager>::ms_Singleton;
}


//======================================================================
// Ogre::DynLibManager::getSingleton(void)
// address: 0x0015590C   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::DynLibManager::getSingleton(Ogre::DynLibManager *this)
{
  return Ogre::Singleton<Ogre::DynLibManager>::ms_Singleton;
}


//======================================================================
// Ogre::DynLibManager::DynLibManager(void)
// address: 0x0015591C   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13DynLibManagerC1Ev'
Ogre::DynLibManager *__fastcall Ogre::DynLibManager::DynLibManager(Ogre::DynLibManager *this)
{
  Ogre::Singleton<Ogre::DynLibManager>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_4564C0;
  j_memset((char *)this + 8, 0, 0x10u);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 4) = (char *)this + 8;
  *((_DWORD *)this + 5) = (char *)this + 8;
  return this;
}


//======================================================================
// Ogre::DynLibManager::~DynLibManager()
// address: 0x0015597C   size: 0x64 (100 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13DynLibManagerD1Ev'
void __fastcall Ogre::DynLibManager::~DynLibManager(Ogre::DynLibManager *this, int a2, int a3)
{
  char *v3; // r6
  int v4; // r5
  void *v6; // r7
  char *v7; // [sp+4h] [bp-8h]

  v3 = (char *)this + 4;
  v4 = *((_DWORD *)this + 4);
  *(_DWORD *)this = &off_4564C0;
  v7 = (char *)this + 8;
  while ( (char *)v4 != v7 )
  {
    Ogre::DynLib::unload(*(Ogre::DynLib **)(v4 + 20), a2, a3, (unsigned int)v7);
    v6 = *(void **)(v4 + 20);
    if ( v6 != nullptr )
    {
      Ogre::DynLib::~DynLib(*(Ogre::DynLib **)(v4 + 20));
      operator delete(v6);
    }
    v4 = sub_391DDC(v4);
  }
  std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_erase(
    (int)v3,
    *((_DWORD **)this + 3));
  *((_DWORD *)this + 4) = v4;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = v4;
  *((_DWORD *)this + 6) = 0;
  std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_erase(
    (int)v3,
    nullptr);
  Ogre::Singleton<Ogre::DynLibManager>::ms_Singleton = 0;
}


//======================================================================
// Ogre::DynLibManager::~DynLibManager()
// address: 0x001559E8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DynLibManager::~DynLibManager(Ogre::DynLibManager *this, int a2, int a3)
{
  Ogre::DynLibManager::~DynLibManager(this, a2, a3);
  operator delete(this);
}


//======================================================================
// Ogre::DynLibManager::unload(Ogre::DynLib *)
// address: 0x00155A46   size: 0x44 (68 bytes)
//======================================================================
void __fastcall Ogre::DynLibManager::unload(Ogre::DynLibManager *this, Ogre::DynLib *a2)
{
  char *v2; // r6
  int v5; // r0
  int v6; // r2
  unsigned int v7; // r3
  int v8; // r1
  char *v9; // r6

  v2 = (char *)this + 4;
  v5 = std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::find((int)this + 4);
  v8 = (int)(v2 + 4);
  if ( (char *)v5 != v2 + 4 )
  {
    v9 = (char *)sub_391F50();
    sub_3BDF80(v9 + 16);
    operator delete(v9);
    v7 = *((_DWORD *)this + 6) - 1;
    *((_DWORD *)this + 6) = v7;
  }
  Ogre::DynLib::unload(a2, v8, v6, v7);
  if ( a2 != nullptr )
  {
    Ogre::DynLib::~DynLib(a2);
    operator delete(a2);
  }
}


//======================================================================
// Ogre::DynLibManager::load(std::string const&)
// address: 0x00155C02   size: 0x98 (152 bytes)
//======================================================================
Ogre::DynLib *__fastcall Ogre::DynLibManager::load(int a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r7
  int v7; // r1
  int v8; // r2
  unsigned int v9; // r3
  _DWORD *v10; // r5
  _DWORD *inserted; // r4
  _DWORD *v12; // r3
  Ogre::DynLib *v13; // [sp+0h] [bp-14h]
  _DWORD *v14; // [sp+4h] [bp-10h]
  _DWORD v15[3]; // [sp+8h] [bp-Ch] BYREF

  v14 = (_DWORD *)(a1 + 4);
  v4 = std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::find(a1 + 4);
  v5 = (_DWORD *)v4;
  if ( (_DWORD *)v4 != v14 + 1 )
    return *(Ogre::DynLib **)(v4 + 20);
  v13 = (Ogre::DynLib *)operator new(8u);
  Ogre::DynLib::DynLib(v13);
  Ogre::DynLib::load((const char **)v13, v7, v8, v9);
  v10 = *(_DWORD **)(a1 + 12);
  inserted = v5;
  while ( v10 != nullptr )
  {
    if ( std::operator<<char>() != 0 )
    {
      v12 = (_DWORD *)v10[3];
      v10 = inserted;
    }
    else
    {
      v12 = (_DWORD *)v10[2];
    }
    inserted = v10;
    v10 = v12;
  }
  if ( inserted == v5 || std::operator<<char>() != 0 )
  {
    sub_3BEB1C(v15, a2);
    v15[1] = 0;
    inserted = (_DWORD *)std::_Rb_tree<std::string,std::pair<std::string const,Ogre::DynLib *>,std::_Select1st<std::pair<std::string const,Ogre::DynLib *>>,std::less<std::string>,std::allocator<std::pair<std::string const,Ogre::DynLib *>>>::_M_insert_unique_(
                           v14,
                           inserted,
                           (int)v15);
    sub_3BDF80(v15);
  }
  inserted[5] = v13;
  return v13;
}

