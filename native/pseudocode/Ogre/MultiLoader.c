// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MultiLoader

//======================================================================
// Ogre::MultiLoader::MultiLoader(void)
// address: 0x00187B4C   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11MultiLoaderC1Ev'
Ogre::MultiLoader *__fastcall Ogre::MultiLoader::MultiLoader(Ogre::MultiLoader *this)
{
  *(_DWORD *)this = &off_457F80;
  j_memset((char *)this + 8, 0, 0x10u);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 4) = (char *)this + 8;
  *((_DWORD *)this + 5) = (char *)this + 8;
  *((_DWORD *)this + 7) = 0;
  return this;
}


//======================================================================
// Ogre::MultiLoader::~MultiLoader()
// address: 0x00187B9C   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11MultiLoaderD1Ev'
void __fastcall Ogre::MultiLoader::~MultiLoader(Ogre::MultiLoader *this)
{
  int v1; // r5
  char *v2; // r6
  char *v4; // r7
  _DWORD *v5; // r0

  v1 = *((_DWORD *)this + 4);
  v2 = (char *)this + 4;
  v4 = (char *)this + 8;
  *(_DWORD *)this = &off_457F80;
  while ( (char *)v1 != v4 )
  {
    v5 = *(_DWORD **)(v1 + 20);
    if ( v5 != nullptr )
      Ogre::BaseObject::release(v5);
    else
      Ogre::LoadWrap::breakLoad(this, *(_DWORD *)(v1 + 16));
    v1 = sub_391DDC(v1);
  }
  std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::_M_erase(
    (int)v2,
    *((_DWORD **)this + 3));
  Ogre::LoadWrap::~LoadWrap(this);
}


//======================================================================
// Ogre::MultiLoader::~MultiLoader()
// address: 0x00187BE8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MultiLoader::~MultiLoader(Ogre::MultiLoader *this)
{
  Ogre::MultiLoader::~MultiLoader(this);
  operator delete(this);
}


//======================================================================
// Ogre::MultiLoader::startLoad(Ogre::FixedString const&,int)
// address: 0x00187C86   size: 0x130 (304 bytes)
//======================================================================
unsigned int __fastcall Ogre::MultiLoader::startLoad(Ogre::MultiLoader *this, const Ogre::FixedString *a2, int a3)
{
  unsigned int v4; // r0
  char *v5; // r7
  char *v6; // r4
  char *v7; // r3
  char *v8; // r5
  unsigned int v9; // r3
  int v10; // r0
  int v11; // r0
  _BOOL4 v12; // r7
  char *v13; // r0
  int v14; // r2
  unsigned int v16; // [sp+0h] [bp-24h]
  char *v17; // [sp+8h] [bp-1Ch]
  char *v18; // [sp+Ch] [bp-18h]
  unsigned int v19; // [sp+10h] [bp-14h] BYREF
  int v20; // [sp+14h] [bp-10h]
  char *v21; // [sp+18h] [bp-Ch] BYREF
  char *v22; // [sp+1Ch] [bp-8h]

  ++*((_DWORD *)this + 7);
  v4 = Ogre::LoadWrap::backgroundLoad(this, a2);
  v5 = *((char **)this + 3);
  v17 = (char *)this + 4;
  v16 = v4;
  v18 = (char *)this + 8;
  v6 = (char *)this + 8;
  while ( v5 != nullptr )
  {
    if ( *((_DWORD *)v5 + 4) < v4 )
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
  if ( v6 != v18 && v4 >= *((_DWORD *)v6 + 4) )
    goto LABEL_35;
  v20 = 0;
  v19 = v4;
  if ( v6 != v18 )
  {
    v9 = *((_DWORD *)v6 + 4);
    if ( v4 >= v9 )
    {
      if ( v9 >= v4 )
        goto LABEL_35;
      if ( v6 != *((char **)this + 5) )
      {
        v11 = sub_391DDC(v6);
        if ( v16 >= *(_DWORD *)(v11 + 16) )
        {
          std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::_M_get_insert_unique_pos(
            (int *)&v21,
            (int)v17,
            &v19);
          v5 = v21;
          v6 = v22;
        }
        else if ( *((_DWORD *)v6 + 3) != 0 )
        {
          v6 = (char *)v11;
          v5 = (char *)v11;
        }
      }
      v8 = v6;
      v6 = v5;
    }
    else if ( v6 == *((char **)this + 4) )
    {
      v8 = v6;
    }
    else
    {
      v10 = sub_391E44(v6);
      v8 = (char *)v10;
      if ( *(_DWORD *)(v10 + 16) >= v16 )
      {
LABEL_34:
        std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::_M_get_insert_unique_pos(
          (int *)&v21,
          (int)v17,
          &v19);
        v6 = v21;
        v8 = v22;
        goto LABEL_26;
      }
      if ( *(_DWORD *)(v10 + 12) != 0 )
        v8 = v6;
      else
        v6 = nullptr;
    }
LABEL_26:
    if ( v8 == nullptr )
      goto LABEL_35;
    v12 = true;
    if ( v6 != nullptr )
      goto LABEL_31;
    goto LABEL_28;
  }
  if ( *((_DWORD *)this + 6) == 0 )
    goto LABEL_34;
  v8 = *((char **)this + 5);
  if ( *((_DWORD *)v8 + 4) >= v4 )
    goto LABEL_34;
LABEL_28:
  v12 = v8 == v18 || v16 < *((_DWORD *)v8 + 4);
LABEL_31:
  v13 = (char *)operator new(0x18u);
  v6 = v13;
  if ( v13 != (char *)-16 )
  {
    v14 = v20;
    *((_DWORD *)v13 + 4) = v19;
    *((_DWORD *)v13 + 5) = v14;
  }
  sub_391E64(v12, v13, v8, v18);
  ++*((_DWORD *)this + 6);
LABEL_35:
  *((_DWORD *)v6 + 5) = 0;
  return v16;
}


//======================================================================
// Ogre::MultiLoader::testResult(void)
// address: 0x00187DB6   size: 0x86 (134 bytes)
//======================================================================
void __fastcall Ogre::MultiLoader::testResult(Ogre::MultiLoader *this)
{
  unsigned int v2; // r4
  unsigned int v3; // r2
  void *v4; // [sp+0h] [bp-24h] BYREF
  void *v5; // [sp+4h] [bp-20h] BYREF
  void *v6[3]; // [sp+8h] [bp-1Ch] BYREF
  void *v7; // [sp+14h] [bp-10h] BYREF
  char *v8; // [sp+18h] [bp-Ch]
  int v9; // [sp+1Ch] [bp-8h]

  if ( *((_DWORD *)this + 7) == 0 )
  {
    v2 = *((_DWORD *)this + 6);
    if ( v2 != 0 )
    {
      memset(v6, 0, sizeof(v6));
      v7 = nullptr;
      v8 = nullptr;
      v9 = 0;
      v4 = nullptr;
      std::vector<Ogre::Resource *>::_M_fill_insert((int)v6, nullptr, v2, &v4);
      v5 = nullptr;
      v3 = (v8 - (_BYTE *)v7) >> 2;
      if ( v2 <= v3 )
      {
        if ( v2 < v3 )
          v8 = (char *)v7 + 4 * v2;
      }
      else
      {
        std::vector<unsigned int>::_M_fill_insert((int)&v7, v8, v2 - v3, &v5);
      }
      (*(void (__fastcall **)(Ogre::MultiLoader *, unsigned int, void *, void *))(*(_DWORD *)this + 12))(
        this,
        v2,
        v6[0],
        v7);
      if ( v7 != nullptr )
        operator delete(v7);
      if ( v6[0] != nullptr )
        operator delete(v6[0]);
    }
    else
    {
      (*(void (__fastcall **)(Ogre::MultiLoader *, _DWORD, _DWORD, _DWORD))(*(_DWORD *)this + 12))(this, 0, 0, 0);
    }
  }
}


//======================================================================
// Ogre::MultiLoader::stopLoad(unsigned int)
// address: 0x00187E3C   size: 0x4C (76 bytes)
//======================================================================
Ogre::MultiLoader *__fastcall Ogre::MultiLoader::stopLoad(Ogre::MultiLoader *this, unsigned int a2)
{
  char *v2; // r6
  char *v4; // r0
  char *v5; // r6
  char *v6; // r5
  _DWORD *v7; // r0
  void *v8; // r0
  int v11; // [sp+4h] [bp-4h] BYREF

  v2 = (char *)this + 4;
  v4 = (char *)std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::find(
                 (int)this + 4,
                 &v11);
  v5 = v2 + 4;
  v6 = v4;
  if ( v4 != v5 )
  {
    v7 = *((_DWORD **)v4 + 5);
    if ( v7 != nullptr )
      Ogre::BaseObject::release(v7);
    else
      Ogre::LoadWrap::breakLoad(this, *((_DWORD *)v6 + 4));
    v8 = (void *)sub_391F50(v6, v5);
    operator delete(v8);
    --*((_DWORD *)this + 6);
    --*((_DWORD *)this + 7);
    Ogre::MultiLoader::testResult(this);
  }
  return this;
}


//======================================================================
// Ogre::MultiLoader::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x00187E88   size: 0x4A (74 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::MultiLoader::ResourceLoaded(
        Ogre::MultiLoader *this,
        Ogre::Resource *a2,
        unsigned int a3)
{
  char *v3; // r6
  char *v6; // r0
  void *v7; // r0
  unsigned __int64 v9; // [sp+0h] [bp-8h] BYREF

  v9 = __PAIR64__(a3, (unsigned int)this);
  v3 = (char *)this + 4;
  v6 = (char *)std::_Rb_tree<unsigned int,std::pair<unsigned int const,Ogre::Resource *>,std::_Select1st<std::pair<unsigned int const,Ogre::Resource *>>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Ogre::Resource *>>>::find(
                 (int)this + 4,
                 (_DWORD *)&v9 + 1);
  if ( v6 != v3 + 4 && *((_DWORD *)v6 + 5) == 0 )
  {
    if ( a2 != nullptr )
    {
      *((_DWORD *)v6 + 5) = a2;
      (*(void (__fastcall **)(Ogre::Resource *))(*(_DWORD *)a2 + 4))(a2);
    }
    else
    {
      v7 = (void *)sub_391F50(v6, v3 + 4);
      operator delete(v7);
      --*((_DWORD *)this + 6);
    }
    --*((_DWORD *)this + 7);
    Ogre::MultiLoader::testResult(this);
  }
  return v9;
}

