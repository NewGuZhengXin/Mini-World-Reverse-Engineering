// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Archive

//======================================================================
// Ogre::Archive::serialize(void *,unsigned int)
// address: 0x0013FD4E   size: 0x1C (28 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::serialize(Ogre::Archive *this, void *a2, unsigned int a3)
{
  int v4; // r3
  int v5; // r0
  void (*v6)(void); // r5

  v4 = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 1);
  if ( v4 == 1 )
    v6 = *(void (**)(void))(*(_DWORD *)v5 + 8);
  else
    v6 = *(void (**)(void))(*(_DWORD *)v5 + 12);
  v6();
  return this;
}


//======================================================================
// Ogre::Archive::operator<<(float &)
// address: 0x0014BCA4   size: 0xE (14 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<(Ogre::Archive *a1, void *a2)
{
  Ogre::Archive::serialize(a1, a2, 4u);
  return a1;
}


//======================================================================
// Ogre::Archive::~Archive()
// address: 0x0017DC78   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7ArchiveD1Ev'
void __fastcall Ogre::Archive::~Archive(Ogre::Archive *this)
{
  *(_DWORD *)this = &off_4579C0;
}


//======================================================================
// Ogre::Archive::~Archive()
// address: 0x0017DC88   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::Archive::~Archive(Ogre::Archive *this)
{
  *(_DWORD *)this = &off_4579C0;
  operator delete(this);
}


//======================================================================
// Ogre::Archive::operator<<(unsigned int &)
// address: 0x0017E554   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::Archive::operator<<(int a1)
{
  int v2; // r2
  void (*v3)(void); // r5

  v2 = **(_DWORD **)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) == 1 )
    v3 = *(void (**)(void))(v2 + 8);
  else
    v3 = *(void (**)(void))(v2 + 12);
  v3();
  return a1;
}


//======================================================================
// Ogre::Archive::readObject(void)
// address: 0x001861CC   size: 0x74 (116 bytes)
//======================================================================
int __fastcall Ogre::Archive::readObject(Ogre::Archive *this)
{
  const char *v2; // r1
  int v3; // r0
  int v4; // r6
  unsigned __int8 v6; // [sp+9h] [bp-10Bh]
  unsigned __int16 v7; // [sp+Ah] [bp-10Ah]
  _BYTE v8[256]; // [sp+Ch] [bp-108h] BYREF

  sub_1861B6(*((_DWORD *)this + 1));
  if ( v7 == 0 )
    return 0;
  sub_1861B6(*((_DWORD *)this + 1));
  sub_1861B6(*((_DWORD *)this + 1));
  v8[v6] = 0;
  v3 = Ogre::RuntimeClass::fromName((Ogre::RuntimeClass *)v8, v2);
  v4 = (*(int (**)(void))(v3 + 12))();
  (*(void (__fastcall **)(int, Ogre::Archive *, _DWORD))(*(_DWORD *)v4 + 12))(v4, this, v7);
  return v4;
}


//======================================================================
// Ogre::Archive::writeObject(Ogre::BaseObject *)
// address: 0x00186244   size: 0x66 (102 bytes)
//======================================================================
int __fastcall Ogre::Archive::writeObject(Ogre::Archive *this, Ogre::BaseObject *a2)
{
  unsigned __int16 v4; // r3
  int result; // r0
  const char *v6; // [sp+4h] [bp-10h]
  char v7; // [sp+Dh] [bp-7h]
  unsigned __int16 v8; // [sp+Eh] [bp-6h]

  if ( a2 != nullptr )
    v4 = *(_WORD *)((**(int (__fastcall ***)(Ogre::BaseObject *))a2)(a2) + 8);
  else
    v4 = 0;
  v8 = v4;
  result = sub_1861C0(*((_DWORD *)this + 1));
  if ( a2 != nullptr )
  {
    v6 = *(const char **)(**(int (__fastcall ***)(Ogre::BaseObject *))a2)(a2);
    v7 = j_strlen(v6);
    sub_1861C0(*((_DWORD *)this + 1));
    sub_1861C0(*((_DWORD *)this + 1));
    return (*(int (__fastcall **)(Ogre::BaseObject *, Ogre::Archive *, _DWORD))(*(_DWORD *)a2 + 12))(a2, this, v8);
  }
  return result;
}


//======================================================================
// Ogre::Archive::operator<<(std::string &)
// address: 0x001862AA   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Ogre::Archive::operator<<(int a1, int a2)
{
  int v3; // r3
  int v5; // r0
  unsigned __int16 v7; // [sp+6h] [bp-2h]

  v7 = HIWORD(a2);
  v3 = *(_DWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 4);
  if ( v3 == 1 )
  {
    sub_1861B6(v5);
    sub_3BEA44(a2, v7);
    sub_3BE0DC(a2);
    sub_1861B6(*(_DWORD *)(a1 + 4));
  }
  else
  {
    sub_1861C0(v5);
    sub_3BE0DC(a2);
    sub_1861C0(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive::operator<<(Ogre::FixedString &)
// address: 0x00186304   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall Ogre::Archive::operator<<(int a1, const char **this)
{
  _BYTE *v4; // r4
  void *v5; // r1
  int *v6; // r0
  unsigned __int16 v8; // [sp+Ah] [bp-10Ah]
  _BYTE v9[256]; // [sp+Ch] [bp-108h] BYREF

  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    sub_1861B6(*(_DWORD *)(a1 + 4));
    v4 = v9;
    if ( v8 > 0xFFu )
      v4 = (_BYTE *)operator new[](v8 + 1);
    sub_1861B6(*(_DWORD *)(a1 + 4));
    v4[v8] = 0;
    if ( j_memcmp(v4, ".\\res\\", 6u) == 0 )
    {
      v5 = v4 + 6;
      v6 = (int *)this;
    }
    else
    {
      v6 = (int *)this;
      v5 = v4;
    }
    Ogre::FixedString::operator=(v6, v5);
    if ( v4 != v9 && v4 != nullptr )
      operator delete[](v4);
  }
  else
  {
    Ogre::FixedString::length(this);
    sub_1861C0(*(_DWORD *)(a1 + 4));
    sub_1861C0(*(_DWORD *)(a1 + 4));
  }
  return a1;
}


//======================================================================
// Ogre::Archive::operator<<(std::vector<std::string,std::allocator<std::string>> &)
// address: 0x0018657C   size: 0x98 (152 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<(Ogre::Archive *this, int *a2)
{
  int v4; // r1
  unsigned int v5; // r3
  unsigned int v6; // r7
  unsigned int i; // r6
  unsigned int j; // r6
  int v10; // [sp+0h] [bp-14h]
  unsigned int v11; // [sp+8h] [bp-Ch] BYREF
  _DWORD v12[2]; // [sp+Ch] [bp-8h] BYREF

  if ( *((_DWORD *)this + 2) == 1 )
  {
    Ogre::Archive::serialize(this, &v11, 4u);
    v4 = *a2;
    v10 = a2[1];
    v12[0] = &byte_55FB88;
    v5 = (v10 - v4) >> 2;
    if ( v11 <= v5 )
    {
      if ( v11 < v5 )
      {
        v6 = v4 + 4 * v11;
        for ( i = v6; i != v10; i += 4 )
          sub_3BDF80(i);
        a2[1] = v6;
      }
    }
    else
    {
      std::vector<std::string>::_M_fill_insert(a2, v10, v11 - v5, (int)v12);
    }
    sub_3BDF80(v12);
  }
  else
  {
    v11 = (a2[1] - *a2) >> 2;
    Ogre::Archive::serialize(this, &v11, 4u);
  }
  for ( j = 0; j < v11; ++j )
    Ogre::Archive::operator<<((int)this, *a2 + 4 * j);
  return this;
}


//======================================================================
// Ogre::Archive::operator<<(int &)
// address: 0x00186932   size: 0xE (14 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::Archive::operator<<(Ogre::Archive *a1, void *a2)
{
  Ogre::Archive::serialize(a1, a2, 4u);
  return a1;
}

