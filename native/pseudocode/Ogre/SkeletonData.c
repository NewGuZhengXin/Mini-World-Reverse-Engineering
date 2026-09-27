// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SkeletonData

//======================================================================
// Ogre::SkeletonData::getRTTI(void)const
// address: 0x00155CA8   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::SkeletonData::getRTTI(Ogre::SkeletonData *this)
{
  return &Ogre::SkeletonData::m_RTTI;
}


//======================================================================
// Ogre::SkeletonData::SkeletonData(void)
// address: 0x00155D54   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12SkeletonDataC1Ev'
Ogre::SkeletonData *__fastcall Ogre::SkeletonData::SkeletonData(Ogre::SkeletonData *this)
{
  char *v1; // r6

  *((_DWORD *)this + 1) = 1;
  v1 = (char *)this + 32;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_456510;
  j_memset((char *)this + 32, 0, 0x10u);
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 10) = v1;
  *((_DWORD *)this + 11) = v1;
  return this;
}


//======================================================================
// Ogre::SkeletonData::newObject(void)
// address: 0x00155D90   size: 0x12 (18 bytes)
//======================================================================
Ogre::SkeletonData *__fastcall Ogre::SkeletonData::newObject(Ogre::SkeletonData *this)
{
  Ogre::SkeletonData *v1; // r4

  v1 = (Ogre::SkeletonData *)operator new(0x34u);
  Ogre::SkeletonData::SkeletonData(v1);
  return v1;
}


//======================================================================
// Ogre::SkeletonData::~SkeletonData()
// address: 0x00155DC8   size: 0x4E (78 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12SkeletonDataD1Ev'
void __fastcall Ogre::SkeletonData::~SkeletonData(Ogre::SkeletonData *this)
{
  unsigned int v2; // r5
  int v3; // r3
  int v4; // r0
  void *v5; // r1
  void *v6; // r0

  v2 = 0;
  *(_DWORD *)this = &off_456510;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 4);
    if ( v2 >= (*((_DWORD *)this + 5) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * v2 + v3);
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 20))(v4);
    ++v2;
  }
  *((_DWORD *)this + 5) = v3;
  std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,int>,std::_Select1st<std::pair<Ogre::FixedString const,int>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,int>>>::_M_erase(
    (int)this + 28,
    *((_DWORD *)this + 9));
  v6 = *((void **)this + 4);
  if ( v6 != nullptr )
    operator delete(v6);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v5);
}


//======================================================================
// Ogre::SkeletonData::~SkeletonData()
// address: 0x00155E1C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SkeletonData::~SkeletonData(Ogre::SkeletonData *this)
{
  Ogre::SkeletonData::~SkeletonData(this);
  operator delete(this);
}


//======================================================================
// Ogre::SkeletonData::findBoneID(Ogre::FixedString const&)
// address: 0x00155E7C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall Ogre::SkeletonData::findBoneID(Ogre::SkeletonData *this, Ogre::FixedString **a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r2
  _DWORD *v4; // r5

  v2 = *((_DWORD **)this + 9);
  v3 = (_DWORD *)((char *)this + 32);
  while ( v2 != nullptr )
  {
    if ( v2[4] < (unsigned int)*a2 )
    {
      v4 = (_DWORD *)v2[3];
      v2 = v3;
    }
    else
    {
      v4 = (_DWORD *)v2[2];
    }
    v3 = v2;
    v2 = v4;
  }
  if ( v3 == (_DWORD *)((char *)this + 32) || (unsigned int)*a2 < v3[4] )
    return -1;
  else
    return *std::map<Ogre::FixedString,int>::operator[]((_DWORD *)this + 7, a2);
}


//======================================================================
// Ogre::SkeletonData::addBone(Ogre::BoneData *)
// address: 0x00155EDC   size: 0x92 (146 bytes)
//======================================================================
__int64 __fastcall Ogre::SkeletonData::addBone(__int64 this)
{
  _DWORD *v1; // r5
  unsigned int v3; // r0
  unsigned int v4; // r6
  _DWORD *v5; // r3
  int v6; // r0
  int v7; // r5
  void *v8; // r0
  __int64 byte_count; // [sp+0h] [bp-Ch]

  byte_count = this;
  v1 = *(_DWORD **)(this + 20);
  if ( v1 == *(_DWORD **)(this + 24) )
  {
    v3 = std::vector<Ogre::BoneData *>::_M_check_len((_DWORD *)(this + 16), 1u, (int)"vector::_M_insert_aux");
    LODWORD(byte_count) = 4 * v3;
    HIDWORD(byte_count) = *(_DWORD *)(this + 16);
    if ( v3 != 0 )
    {
      if ( v3 > 0x3FFFFFFF )
        sub_3BCEB4();
      v3 = operator new(byte_count);
    }
    v4 = v3;
    v5 = (_DWORD *)(v3 + 4 * (((int)v1 - HIDWORD(byte_count)) >> 2));
    if ( v5 != nullptr )
      *v5 = HIDWORD(this);
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneData *>(
           *(void **)(this + 16),
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneData *>(
           v1,
           *(_DWORD *)(this + 20),
           (void *)(v6 + 4));
    v8 = *(void **)(this + 16);
    if ( v8 != nullptr )
      operator delete(v8);
    *(_DWORD *)(this + 16) = v4;
    *(_DWORD *)(this + 20) = v7;
    *(_DWORD *)(this + 24) = v4 + byte_count;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = HIDWORD(this);
    *(_DWORD *)(this + 20) += 4;
  }
  *std::map<Ogre::FixedString,int>::operator[]((_DWORD *)(this + 28), (Ogre::FixedString **)(HIDWORD(this) + 16)) = *(_DWORD *)(HIDWORD(this) + 24);
  return byte_count;
}


//======================================================================
// Ogre::SkeletonData::_serialize(Ogre::Archive &,int)
// address: 0x0015610E   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SkeletonData::_serialize(Ogre::SkeletonData *this, Ogre::Archive *a2, int a3)
{
  _DWORD *result; // r0
  int v6; // r3
  unsigned int v7; // r4
  int v8; // r3
  int v9; // r6

  result = Ogre::Archive::operator<<<Ogre::BoneData>(a2, (int *)this + 4);
  v6 = *((_DWORD *)a2 + 2);
  v7 = 0;
  if ( v6 == 1 )
  {
    while ( 1 )
    {
      v8 = *((_DWORD *)this + 4);
      if ( v7 >= (*((_DWORD *)this + 5) - v8) >> 2 )
        break;
      v9 = *(_DWORD *)(4 * v7 + v8);
      result = std::map<Ogre::FixedString,int>::operator[]((_DWORD *)this + 7, (Ogre::FixedString **)(v9 + 16));
      *(_DWORD *)(v9 + 24) = v7;
      *result = v7++;
    }
  }
  return result;
}

