// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::EntityData

//======================================================================
// Ogre::EntityData::getRTTI(void)const
// address: 0x00180D48   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::EntityData::getRTTI(Ogre::EntityData *this)
{
  return &Ogre::EntityData::m_RTTI;
}


//======================================================================
// Ogre::EntityData::~EntityData()
// address: 0x00180D60   size: 0x78 (120 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10EntityDataD1Ev'
void __fastcall Ogre::EntityData::~EntityData(Ogre::EntityData *this)
{
  _DWORD *v2; // r0
  unsigned int i; // r5
  int v4; // r3
  _DWORD *v5; // r0
  unsigned int j; // r5
  _DWORD *v7; // r0
  _DWORD *v8; // r0
  void *v9; // r1

  *(_DWORD *)this = &off_457AB0;
  v2 = *((_DWORD **)this + 4);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 4) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 5);
    if ( i >= (*((_DWORD *)this + 6) - v4) >> 2 )
      break;
    v5 = *(_DWORD **)(v4 + 4 * i);
    if ( v5 != nullptr )
    {
      Ogre::BaseObject::release(v5);
      *(_DWORD *)(*((_DWORD *)this + 5) + 4 * i) = 0;
    }
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_DWORD **)this + 8);
    if ( j >= (*((_DWORD *)this + 9) - (int)v7) >> 2 )
      break;
    v8 = (_DWORD *)v7[j];
    if ( v8 != nullptr )
    {
      Ogre::BaseObject::release(v8);
      *(_DWORD *)(*((_DWORD *)this + 8) + 4 * j) = 0;
    }
  }
  sub_180D54(v7);
  sub_180D54(*((void **)this + 5));
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v9);
}


//======================================================================
// Ogre::EntityData::~EntityData()
// address: 0x00180DDC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::EntityData::~EntityData(Ogre::EntityData *this)
{
  Ogre::EntityData::~EntityData(this);
  operator delete(this);
}


//======================================================================
// Ogre::EntityData::EntityData(void)
// address: 0x00180DF0   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10EntityDataC1Ev'
_DWORD *__fastcall Ogre::EntityData::EntityData(_DWORD *this)
{
  *(this + 1) = 1;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *this = &off_457AB0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  return this;
}


//======================================================================
// Ogre::EntityData::newObject(void)
// address: 0x00180E18   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::EntityData::newObject(Ogre::EntityData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x2Cu);
  Ogre::EntityData::EntityData(v1);
  return v1;
}


//======================================================================
// Ogre::EntityData::_serialize(Ogre::Archive &,int)
// address: 0x0018102C   size: 0x168 (360 bytes)
//======================================================================
int __fastcall Ogre::EntityData::_serialize(Ogre::EntityData *this, Ogre::Archive *a2, int a3)
{
  int v4; // r3
  void **v6; // r7
  const char *v7; // r0
  void *v8; // r1
  int v9; // r0
  int *v10; // r6
  unsigned int v11; // r0
  unsigned int v12; // r7
  int *v13; // r3
  int v14; // r0
  int v15; // r6
  int v17; // r1
  int v18; // r0
  unsigned int v19; // r7
  int v20; // r1
  char *v21; // [sp+0h] [bp-1Ch]
  int v22; // [sp+4h] [bp-18h]
  char *i; // [sp+8h] [bp-14h]
  int v24; // [sp+Ch] [bp-10h]
  unsigned int v25; // [sp+10h] [bp-Ch] BYREF
  Ogre::FixedString *v26[2]; // [sp+14h] [bp-8h] BYREF

  v4 = *((_DWORD *)a2 + 2);
  v26[0] = nullptr;
  v6 = (void **)((char *)this + 20);
  if ( v4 == 1 )
  {
    Ogre::Archive::operator<<((int)a2, (Ogre::FixedString *)v26);
    v7 = Ogre::FixedString::length((const char **)v26);
    if ( v7 != nullptr )
      v7 = (const char *)Ogre::ResourceManager::blockLoad(
                           (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
                           v26,
                           0);
    *((_DWORD *)this + 4) = v7;
    Ogre::Archive::operator<<<Ogre::EntityMotionData>(a2, v6);
    (*(void (__fastcall **)(_DWORD, unsigned int *, int))(**((_DWORD **)a2 + 1) + 8))(*((_DWORD *)a2 + 1), &v25, 4);
    for ( i = nullptr; ; ++i )
    {
      v8 = i;
      if ( (unsigned int)i >= v25 )
        break;
      Ogre::Archive::operator<<((int)a2, (Ogre::FixedString *)v26);
      v9 = Ogre::ResourceManager::blockLoad(
             (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
             v26,
             0);
      v22 = v9;
      if ( v9 != 0 )
      {
        v10 = *((int **)this + 9);
        if ( v10 == *((int **)this + 10) )
        {
          v11 = std::vector<Ogre::EntityMotionData *>::_M_check_len(
                  (_DWORD *)this + 8,
                  1u,
                  (int)"vector::_M_insert_aux");
          v12 = v11;
          v24 = *((_DWORD *)this + 8);
          if ( v11 != 0 )
          {
            if ( v11 > 0x3FFFFFFF )
              sub_3BCEB4(v11);
            v21 = (char *)operator new(4 * v11);
          }
          else
          {
            v21 = nullptr;
          }
          v13 = (int *)&v21[4 * (((int)v10 - v24) >> 2)];
          if ( v13 != nullptr )
            *v13 = v22;
          v14 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EntityMotionData *>(
                  *((void **)this + 8),
                  (int)v10,
                  v21);
          v15 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::EntityMotionData *>(
                  v10,
                  *((_DWORD *)this + 9),
                  (void *)(v14 + 4));
          sub_180D54(*((void **)this + 8));
          *((_DWORD *)this + 9) = v15;
          *((_DWORD *)this + 8) = v21;
          *((_DWORD *)this + 10) = &v21[4 * v12];
        }
        else
        {
          if ( v10 != nullptr )
            *v10 = v9;
          *((_DWORD *)this + 9) += 4;
        }
      }
    }
  }
  else
  {
    v17 = *((_DWORD *)this + 4);
    if ( v17 != 0 )
      Ogre::FixedString::operator=((int *)v26, (int *)(v17 + 8));
    Ogre::Archive::operator<<((int)a2, (Ogre::FixedString *)v26);
    Ogre::Archive::operator<<<Ogre::EntityMotionData>(a2, v6);
    v18 = *((_DWORD *)a2 + 1);
    v19 = 0;
    v25 = (*((_DWORD *)this + 9) - *((_DWORD *)this + 8)) >> 2;
    (*(void (__fastcall **)(int, unsigned int *, int))(*(_DWORD *)v18 + 12))(v18, &v25, 4);
    while ( v19 < v25 )
    {
      v20 = *(_DWORD *)(4 * v19++ + *((_DWORD *)this + 8));
      Ogre::FixedString::operator=((int *)v26, (int *)(v20 + 8));
      Ogre::Archive::operator<<((int)a2, (Ogre::FixedString *)v26);
    }
  }
  return Ogre::FixedString::release((int)v26[0], v8);
}

