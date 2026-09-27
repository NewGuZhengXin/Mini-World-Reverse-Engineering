// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SkeletonAnimData

//======================================================================
// Ogre::SkeletonAnimData::getRTTI(void)const
// address: 0x0015BE3C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::SkeletonAnimData::getRTTI(Ogre::SkeletonAnimData *this)
{
  return &Ogre::SkeletonAnimData::m_RTTI;
}


//======================================================================
// Ogre::SkeletonAnimData::getType(void)
// address: 0x0015BE48   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::SkeletonAnimData::getType(Ogre::SkeletonAnimData *this)
{
  return 0;
}


//======================================================================
// Ogre::SkeletonAnimData::~SkeletonAnimData()
// address: 0x0015BE4C   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16SkeletonAnimDataD1Ev'
void __fastcall Ogre::SkeletonAnimData::~SkeletonAnimData(Ogre::SkeletonAnimData *this, void *a2)
{
  unsigned int v3; // r5
  _DWORD *v4; // r0
  int v5; // r0

  v3 = 0;
  *(_DWORD *)this = &off_4568A8;
  while ( 1 )
  {
    v4 = *((_DWORD **)this + 10);
    if ( v3 >= (*((_DWORD *)this + 11) - (int)v4) >> 2 )
      break;
    v5 = v4[v3];
    if ( v5 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5);
    ++v3;
  }
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::BaseAnimationData::~BaseAnimationData(this, a2);
}


//======================================================================
// Ogre::SkeletonAnimData::~SkeletonAnimData()
// address: 0x0015BE90   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SkeletonAnimData::~SkeletonAnimData(Ogre::SkeletonAnimData *this, void *a2)
{
  Ogre::SkeletonAnimData::~SkeletonAnimData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::SkeletonAnimData::SkeletonAnimData(void)
// address: 0x0015BEA4   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16SkeletonAnimDataC1Ev'
_DWORD *__fastcall Ogre::SkeletonAnimData::SkeletonAnimData(_DWORD *this)
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
  *this = &off_4568A8;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  return this;
}


//======================================================================
// Ogre::SkeletonAnimData::newObject(void)
// address: 0x0015BED0   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SkeletonAnimData::newObject(Ogre::SkeletonAnimData *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x34u);
  Ogre::SkeletonAnimData::SkeletonAnimData(v1);
  return v1;
}


//======================================================================
// Ogre::SkeletonAnimData::addBoneTrack(Ogre::BoneTrack *)
// address: 0x0015BEE4   size: 0x82 (130 bytes)
//======================================================================
__int64 __fastcall Ogre::SkeletonAnimData::addBoneTrack(__int64 this)
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
        sub_3BCEB4(v3);
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
// Ogre::SkeletonAnimData::_serialize(Ogre::Archive &,int)
// address: 0x0015BFFA   size: 0x16 (22 bytes)
//======================================================================
Ogre::Archive *__fastcall Ogre::SkeletonAnimData::_serialize(
        Ogre::SkeletonAnimData *this,
        Ogre::Archive *a2,
        int a3,
        int a4)
{
  Ogre::BaseAnimationData::_serialize(this, a2, a3, a4);
  return Ogre::Archive::operator<<<Ogre::BoneTrack>(a2, (int *)this + 10);
}

