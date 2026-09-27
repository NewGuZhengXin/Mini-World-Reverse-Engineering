// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MaterialParam

//======================================================================
// Ogre::MaterialParam::reset(Ogre::ShaderParamType)
// address: 0x00195D30   size: 0x1A (26 bytes)
//======================================================================
void *__fastcall Ogre::MaterialParam::reset(_DWORD *a1, int a2)
{
  *a1 = a2;
  a1[2] = -1;
  a1[3] = -1;
  a1[4] = -1;
  return j_memset(a1 + 5, 0, 0x40u);
}


//======================================================================
// Ogre::MaterialParam::MaterialParam(Ogre::ShaderParamType)
// address: 0x00195D4A   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13MaterialParamC2ENS_15ShaderParamTypeE'
_DWORD *__fastcall Ogre::MaterialParam::MaterialParam(_DWORD *a1, int a2)
{
  a1[1] = 0;
  Ogre::MaterialParam::reset(a1, a2);
  return a1;
}


//======================================================================
// Ogre::MaterialParam::~MaterialParam()
// address: 0x00195D5C   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13MaterialParamD1Ev'
void __fastcall Ogre::MaterialParam::~MaterialParam(Ogre::MaterialParam *this, void *a2)
{
  _DWORD *v3; // r0

  *((_DWORD *)this + 3) = 0xFFFFFFF;
  if ( *(_DWORD *)this == 5 )
  {
    v3 = *((_DWORD **)this + 5);
    if ( v3 != nullptr )
      Ogre::BaseObject::release(v3);
  }
  Ogre::FixedString::~FixedString((Ogre::FixedString **)this + 1, a2);
}


//======================================================================
// Ogre::MaterialParam::getValueSize(void)const
// address: 0x00195DF4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::MaterialParam::getValueSize(Ogre::MaterialParam *this)
{
  unsigned int v1; // r3
  int result; // r0

  v1 = *(_DWORD *)this;
  result = 0;
  if ( v1 <= 8 )
    return byte_42EBB6[v1];
  return result;
}


//======================================================================
// Ogre::MaterialParam::MaterialParam(Ogre::MaterialParam const&)
// address: 0x00195E0C   size: 0x50 (80 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13MaterialParamC1ERKS0_'
Ogre::MaterialParam *__fastcall Ogre::MaterialParam::MaterialParam(
        Ogre::MaterialParam *this,
        const Ogre::MaterialParam *a2)
{
  int v4; // r0
  int v5; // r0
  size_t ValueSize; // r0

  *(_DWORD *)this = *(_DWORD *)a2;
  v4 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1) = v4;
  Ogre::FixedString::addRef(v4, a2);
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  *((_DWORD *)this + 4) = *((_DWORD *)a2 + 4);
  if ( *(_DWORD *)this == 5 )
  {
    v5 = *((_DWORD *)a2 + 5);
    *((_DWORD *)this + 5) = v5;
    *((_DWORD *)this + 6) = *((_DWORD *)a2 + 6);
    if ( v5 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  }
  else
  {
    ValueSize = Ogre::MaterialParam::getValueSize(this);
    j_memcpy((char *)this + 20, (char *)a2 + 20, ValueSize);
  }
  return this;
}


//======================================================================
// Ogre::MaterialParam::serialize(Ogre::Archive &)
// address: 0x00195E5C   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall Ogre::MaterialParam::serialize(__int64 this, int a2)
{
  int v3; // r3
  char *v4; // r0
  int v5; // r0
  void *v6; // r1
  int v7; // r1
  void (*v8)(void); // r4
  __int64 v10; // [sp+0h] [bp-Ch] BYREF
  int v11; // [sp+8h] [bp-4h]

  v10 = this;
  v11 = a2;
  Ogre::Archive::operator<<(SHIDWORD(this), (const char **)(this + 4));
  v3 = *(_DWORD *)(HIDWORD(this) + 8);
  if ( *(_DWORD *)this == 5 )
  {
    HIDWORD(v10) = 0;
    if ( v3 == 1 )
    {
      Ogre::Archive::operator<<(SHIDWORD(this), (const char **)&v10 + 1);
      v4 = j_strchr((const char *)HIDWORD(v10), 36);
      if ( v4 != nullptr )
      {
        v5 = j_atoi(v4 + 1);
        *(_DWORD *)(this + 20) = 0;
        *(_DWORD *)(this + 12) = v5;
      }
      else
      {
        *(_DWORD *)(this + 20) = Ogre::ResourceManager::blockLoad(
                                   (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                                   (Ogre::FixedString **)&v10 + 1,
                                   0);
      }
    }
    else
    {
      v7 = *(_DWORD *)(this + 20);
      if ( v7 != 0 )
        Ogre::FixedString::operator=((int *)&v10 + 1, (int *)(v7 + 8));
      Ogre::Archive::operator<<(SHIDWORD(this), (const char **)&v10 + 1);
    }
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v10 + 1, v6);
  }
  else
  {
    if ( v3 == 1 )
    {
      Ogre::MaterialParam::getValueSize((Ogre::MaterialParam *)this);
      v8 = *(void (**)(void))(**(_DWORD **)(HIDWORD(this) + 4) + 8);
    }
    else
    {
      Ogre::MaterialParam::getValueSize((Ogre::MaterialParam *)this);
      v8 = *(void (**)(void))(**(_DWORD **)(HIDWORD(this) + 4) + 12);
    }
    v8();
  }
  return v10;
}

