// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::AnimationData

//======================================================================
// Ogre::AnimationData::getRTTI(void)const
// address: 0x0014AA6C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::AnimationData::getRTTI(Ogre::AnimationData *this)
{
  return &Ogre::AnimationData::m_RTTI;
}


//======================================================================
// Ogre::AnimationData::getType(void)
// address: 0x0014AA78   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::AnimationData::getType(Ogre::AnimationData *this)
{
  return 3;
}


//======================================================================
// Ogre::AnimationData::~AnimationData()
// address: 0x0014AAD4   size: 0x62 (98 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13AnimationDataD1Ev'
void __fastcall Ogre::AnimationData::~AnimationData(Ogre::AnimationData *this)
{
  unsigned int v2; // r5
  int v3; // r3
  void *v4; // r1
  unsigned int i; // r5
  _DWORD **v6; // r0
  void *v7; // r0

  v2 = 0;
  *(_DWORD *)this = &off_455E70;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 10);
    v4 = *((void **)this + 11);
    if ( v2 >= ((int)v4 - v3) >> 2 )
      break;
    Ogre::BaseObject::release(*(_DWORD **)(4 * v2++ + v3));
  }
  *((_DWORD *)this + 11) = v3;
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD ***)this + 13);
    if ( i >= (*((_DWORD *)this + 14) - (int)v6) >> 2 )
      break;
    Ogre::BaseObject::release(v6[i]);
  }
  *((_DWORD *)this + 14) = v6;
  if ( v6 != nullptr )
    operator delete(v6);
  v7 = *((void **)this + 10);
  if ( v7 != nullptr )
    operator delete(v7);
  Ogre::BaseAnimationData::~BaseAnimationData(this, v4);
}


//======================================================================
// Ogre::AnimationData::~AnimationData()
// address: 0x0014AB3C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::AnimationData::~AnimationData(Ogre::AnimationData *this)
{
  Ogre::AnimationData::~AnimationData(this);
  operator delete(this);
}


//======================================================================
// Ogre::AnimationData::AnimationData(void)
// address: 0x0014AB84   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13AnimationDataC1Ev'
_DWORD *__fastcall Ogre::AnimationData::AnimationData(_DWORD *this)
{
  *(this + 1) = 1;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *this = &off_455E70;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  return this;
}


//======================================================================
// Ogre::AnimationData::newObject(void)
// address: 0x0014ABB8   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::AnimationData::newObject(Ogre::AnimationData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x40u);
  Ogre::AnimationData::AnimationData(v1);
  return v1;
}


//======================================================================
// Ogre::AnimationData::getNumBoneTrack(void)
// address: 0x0014ABCA   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::AnimationData::getNumBoneTrack(Ogre::AnimationData *this)
{
  return (*((_DWORD *)this + 11) - *((_DWORD *)this + 10)) >> 2;
}


//======================================================================
// Ogre::AnimationData::getBoneTrack(unsigned int)
// address: 0x0014ABD4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::AnimationData::getBoneTrack(Ogre::AnimationData *this, unsigned int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 10));
}


//======================================================================
// Ogre::AnimationData::getNumMtlParamTrack(void)
// address: 0x0014ABDC   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::AnimationData::getNumMtlParamTrack(Ogre::AnimationData *this)
{
  return (*((_DWORD *)this + 14) - *((_DWORD *)this + 13)) >> 2;
}


//======================================================================
// Ogre::AnimationData::getMtlParamTrack(unsigned int)
// address: 0x0014ABE6   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::AnimationData::getMtlParamTrack(Ogre::AnimationData *this, unsigned int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 13));
}


//======================================================================
// Ogre::AnimationData::addBoneTrack(Ogre::BoneTrack *)
// address: 0x0014AF90   size: 0x82 (130 bytes)
//======================================================================
__int64 __fastcall Ogre::AnimationData::addBoneTrack(__int64 this)
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
  v1 = *(_DWORD **)(this + 44);
  if ( v1 == *(_DWORD **)(this + 48) )
  {
    v3 = std::vector<Ogre::BoneTrack *>::_M_check_len((_DWORD *)(this + 40), 1u, (int)"vector::_M_insert_aux");
    LODWORD(byte_count) = 4 * v3;
    HIDWORD(byte_count) = *(_DWORD *)(this + 40);
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
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneTrack *>(
           *(void **)(this + 40),
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::BoneTrack *>(
           v1,
           *(_DWORD *)(this + 44),
           (void *)(v6 + 4));
    v8 = *(void **)(this + 40);
    if ( v8 != nullptr )
      operator delete(v8);
    *(_DWORD *)(this + 40) = v4;
    *(_DWORD *)(this + 44) = v7;
    *(_DWORD *)(this + 48) = v4 + byte_count;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = HIDWORD(this);
    *(_DWORD *)(this + 44) += 4;
  }
  return byte_count;
}


//======================================================================
// Ogre::AnimationData::addMtlParamTrack(Ogre::MaterialParamTrack *)
// address: 0x0014B148   size: 0x82 (130 bytes)
//======================================================================
__int64 __fastcall Ogre::AnimationData::addMtlParamTrack(__int64 this)
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
  v1 = *(_DWORD **)(this + 56);
  if ( v1 == *(_DWORD **)(this + 60) )
  {
    v3 = std::vector<Ogre::MaterialParamTrack *>::_M_check_len((_DWORD *)(this + 52), 1u, (int)"vector::_M_insert_aux");
    LODWORD(byte_count) = 4 * v3;
    HIDWORD(byte_count) = *(_DWORD *)(this + 52);
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
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParamTrack *>(
           *(void **)(this + 52),
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::MaterialParamTrack *>(
           v1,
           *(_DWORD *)(this + 56),
           (void *)(v6 + 4));
    v8 = *(void **)(this + 52);
    if ( v8 != nullptr )
      operator delete(v8);
    *(_DWORD *)(this + 52) = v4;
    *(_DWORD *)(this + 56) = v7;
    *(_DWORD *)(this + 60) = v4 + byte_count;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = HIDWORD(this);
    *(_DWORD *)(this + 56) += 4;
  }
  return byte_count;
}


//======================================================================
// Ogre::AnimationData::_serialize(Ogre::Archive &,int)
// address: 0x0014B4BA   size: 0xF4 (244 bytes)
//======================================================================
void __fastcall Ogre::AnimationData::_serialize(void **this, Ogre::Archive *a2, int a3, int a4)
{
  char *v6; // r1
  int v7; // r0
  unsigned int v8; // r2
  void *i; // r6
  Ogre::BaseObject **v10; // r7
  char *v11; // r1
  int v12; // r0
  unsigned int v13; // r2
  unsigned int j; // r6
  Ogre::BaseObject **v15; // r7
  void *v16; // [sp+Ch] [bp-10h] BYREF
  unsigned int v17; // [sp+10h] [bp-Ch] BYREF
  void *v18[2]; // [sp+14h] [bp-8h] BYREF

  Ogre::BaseAnimationData::_serialize((Ogre::BaseAnimationData *)this, a2, a3, a4);
  v18[0] = (void *)(((_BYTE *)*(this + 11) - (_BYTE *)*(this + 10)) >> 2);
  Ogre::Archive::serialize(a2, v18, 4u);
  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    v6 = (char *)*(this + 11);
    v7 = (int)*(this + 10);
    v16 = nullptr;
    v8 = (int)&v6[-v7] >> 2;
    if ( v18[0] <= (void *)v8 )
    {
      if ( v18[0] < (void *)v8 )
        *(this + 11) = (void *)(v7 + 4 * (int)v18[0]);
    }
    else
    {
      std::vector<Ogre::BoneTrack *>::_M_fill_insert(this + 10, v6, (unsigned int)v18[0] - v8, &v16);
    }
  }
  for ( i = nullptr; i < v18[0]; i = (char *)i + 1 )
  {
    v10 = (Ogre::BaseObject **)((char *)*(this + 10) + 4 * (_DWORD)i);
    if ( *((_DWORD *)a2 + 2) == 1 )
      *v10 = (Ogre::BaseObject *)Ogre::Archive::readObject(a2);
    else
      Ogre::Archive::writeObject(a2, *v10);
  }
  v17 = ((_BYTE *)*(this + 14) - (_BYTE *)*(this + 13)) >> 2;
  Ogre::Archive::serialize(a2, &v17, 4u);
  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    v11 = (char *)*(this + 14);
    v12 = (int)*(this + 13);
    v18[0] = nullptr;
    v13 = (int)&v11[-v12] >> 2;
    if ( v17 <= v13 )
    {
      if ( v17 < v13 )
        *(this + 14) = (void *)(v12 + 4 * v17);
    }
    else
    {
      std::vector<Ogre::MaterialParamTrack *>::_M_fill_insert(this + 13, v11, v17 - v13, v18);
    }
  }
  for ( j = 0; j < v17; ++j )
  {
    v15 = (Ogre::BaseObject **)((char *)*(this + 13) + 4 * j);
    if ( *((_DWORD *)a2 + 2) == 1 )
      *v15 = (Ogre::BaseObject *)Ogre::Archive::readObject(a2);
    else
      Ogre::Archive::writeObject(a2, *v15);
  }
}

