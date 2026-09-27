// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ModelData

//======================================================================
// Ogre::ModelData::getRTTI(void)const
// address: 0x00192F70   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::ModelData::getRTTI(Ogre::ModelData *this)
{
  return &Ogre::ModelData::m_RTTI;
}


//======================================================================
// Ogre::ModelData::~ModelData()
// address: 0x00193080   size: 0x8A (138 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9ModelDataD1Ev'
void __fastcall Ogre::ModelData::~ModelData(Ogre::ModelData *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0
  unsigned int i; // r5
  int v5; // r3
  unsigned int j; // r5
  int v7; // r3
  void *v8; // r1
  void *v9; // r0
  void *v10; // r0
  void *v11; // r0

  *(_DWORD *)this = &off_4584C0;
  v2 = *((_DWORD **)this + 7);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 7) = 0;
  }
  v3 = *((_DWORD **)this + 11);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 11) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 4);
    if ( i >= (*((_DWORD *)this + 5) - v5) >> 2 )
      break;
    Ogre::BaseObject::release(*(_DWORD **)(4 * i + v5));
  }
  *((_DWORD *)this + 5) = v5;
  for ( j = 0; ; ++j )
  {
    v7 = *((_DWORD *)this + 8);
    v8 = *((void **)this + 9);
    if ( j >= ((int)v8 - v7) >> 2 )
      break;
    Ogre::BaseObject::release(*(_DWORD **)(4 * j + v7));
  }
  v9 = *((void **)this + 19);
  *((_DWORD *)this + 9) = v7;
  if ( v9 != nullptr )
    operator delete(v9);
  v10 = *((void **)this + 8);
  if ( v10 != nullptr )
    operator delete(v10);
  v11 = *((void **)this + 4);
  if ( v11 != nullptr )
    operator delete(v11);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v8);
}


//======================================================================
// Ogre::ModelData::~ModelData()
// address: 0x00193110   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ModelData::~ModelData(Ogre::ModelData *this)
{
  Ogre::ModelData::~ModelData(this);
  operator delete(this);
}


//======================================================================
// Ogre::ModelData::ModelData(void)
// address: 0x00193124   size: 0x32 (50 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9ModelDataC1Ev'
int __fastcall Ogre::ModelData::ModelData(int this)
{
  *(_DWORD *)(this + 4) = 1;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)this = &off_4584C0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 20) = 0;
  *(_DWORD *)(this + 24) = 0;
  *(_DWORD *)(this + 28) = 0;
  *(_DWORD *)(this + 32) = 0;
  *(_DWORD *)(this + 36) = 0;
  *(_DWORD *)(this + 40) = 0;
  *(_DWORD *)(this + 44) = 0;
  *(_BYTE *)(this + 72) = 0;
  *(_DWORD *)(this + 76) = 0;
  *(_DWORD *)(this + 80) = 0;
  *(_DWORD *)(this + 84) = 0;
  return this;
}


//======================================================================
// Ogre::ModelData::newObject(void)
// address: 0x0019315C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::ModelData::newObject(Ogre::ModelData *this)
{
  int v1; // r4

  v1 = operator new(0x58u);
  Ogre::ModelData::ModelData(v1);
  return v1;
}


//======================================================================
// Ogre::ModelData::getMeshByName(Ogre::FixedString const&)const
// address: 0x0019316E   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::ModelData::getMeshByName(Ogre::ModelData *this, const Ogre::FixedString *a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  int result; // r0

  v2 = *((_DWORD *)this + 4);
  v3 = 0;
  v4 = (*((_DWORD *)this + 5) - v2) >> 2;
  while ( v3 != v4 )
  {
    result = *(_DWORD *)(v2 + 4 * v3);
    if ( *(_DWORD *)(result + 16) == *(_DWORD *)a2 )
      return result;
    ++v3;
  }
  return 0;
}


//======================================================================
// Ogre::ModelData::addAnimation(Ogre::AnimationData *)
// address: 0x001932BC   size: 0x58 (88 bytes)
//======================================================================
__int64 __fastcall Ogre::ModelData::addAnimation(__int64 this)
{
  int v1; // r4
  int v2; // r3
  int v3; // r2
  int v4; // r0
  int v5; // r1
  int i; // r3
  unsigned int v7; // r5
  int v8; // r3
  int v9; // r6
  __int64 v10; // r0
  __int64 v12; // [sp+0h] [bp-8h] BYREF

  v12 = this;
  v1 = this;
  v2 = *(_DWORD *)(this + 36);
  v3 = *(_DWORD *)(this + 32);
  v4 = HIDWORD(this);
  v5 = (v2 - v3) >> 2;
  for ( i = 0; i != v5; ++i )
  {
    if ( *(_DWORD *)(v3 + 4 * i) == v4 )
      return v12;
  }
  v7 = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  while ( 1 )
  {
    v8 = *(_DWORD *)(HIDWORD(v12) + 40);
    if ( v7 >= (*(_DWORD *)(HIDWORD(v12) + 44) - v8) >> 2 )
      break;
    v9 = *(_DWORD *)(4 * v7++ + v8);
    *(_DWORD *)(v9 + 20) = Ogre::SkeletonData::findBoneID(
                             *(Ogre::SkeletonData **)(v1 + 28),
                             (Ogre::FixedString **)(v9 + 16));
  }
  LODWORD(v10) = v1 + 32;
  HIDWORD(v10) = (char *)&v12 + 4;
  std::vector<Ogre::AnimationData *>::push_back(v10);
  return v12;
}


//======================================================================
// Ogre::ModelData::getAllSequence(std::vector<Ogre::SequenceDesc,std::allocator<Ogre::SequenceDesc>> &)
// address: 0x00193ABA   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::ModelData::getAllSequence(int a1, void **a2)
{
  unsigned int i; // r5
  int v5; // r3
  int v7; // [sp+0h] [bp-8h]

  v7 = a1;
  if ( ((_BYTE *)a2[1] - (_BYTE *)*a2) >> 4 != 0 )
    a2[1] = *a2;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(a1 + 32);
    if ( i >= (*(_DWORD *)(a1 + 36) - v5) >> 2 )
      break;
    LOBYTE(v7) = 0;
    std::vector<Ogre::SequenceDesc>::_M_range_insert<__gnu_cxx::__normal_iterator<Ogre::SequenceDesc*,std::vector<Ogre::SequenceDesc>>>(
      a2,
      a2[1],
      *(char **)(*(_DWORD *)(4 * i + v5) + 28),
      *(_DWORD *)(*(_DWORD *)(4 * i + v5) + 32));
  }
  return v7;
}


//======================================================================
// Ogre::ModelData::_serialize(Ogre::Archive &,int)
// address: 0x00193FE4   size: 0x14C (332 bytes)
//======================================================================
int __fastcall Ogre::ModelData::_serialize(Ogre::ModelData *this, Ogre::Archive *a2, int a3)
{
  int v6; // r2
  int v7; // r3
  int v9; // r0
  unsigned int i; // r7
  int Object; // r0
  int v12; // r3
  unsigned int j; // r2
  int v14; // r7
  __int64 v15; // r0
  unsigned int v16; // [sp+4h] [bp-28h]
  _DWORD *v17; // [sp+8h] [bp-24h]
  _DWORD *v18; // [sp+14h] [bp-18h] BYREF
  void *v19; // [sp+18h] [bp-14h] BYREF
  _BYTE *v20; // [sp+1Ch] [bp-10h] BYREF
  char *v21; // [sp+20h] [bp-Ch]
  int v22; // [sp+24h] [bp-8h]

  Ogre::Archive::operator<<<Ogre::MeshData>((unsigned int)a2, (int *)this + 4);
  if ( *((_DWORD *)a2 + 2) == 1 )
    *((_DWORD *)this + 7) = Ogre::Archive::readObject(a2);
  else
    Ogre::Archive::writeObject(a2, *((Ogre::BaseObject **)this + 7));
  if ( a3 == 100 && *((_DWORD *)a2 + 2) == 1 )
  {
    v9 = *((_DWORD *)a2 + 1);
    v21 = nullptr;
    v22 = 0;
    v20 = nullptr;
    sub_192FA0(v9);
    v19 = nullptr;
    if ( v18 != nullptr )
      std::vector<Ogre::SkeletonAnimData *>::_M_fill_insert((int)&v20, v21, (unsigned int)v18, &v19);
    for ( i = 0; i < (unsigned int)v18; ++i )
    {
      Object = Ogre::Archive::readObject(a2);
      v12 = 4 * i;
      *(_DWORD *)&v20[v12] = Object;
    }
    for ( j = 0; ; j = v16 + 1 )
    {
      v16 = j;
      if ( j >= (v21 - v20) >> 2 )
        break;
      v17 = (_DWORD *)operator new(0x40u);
      Ogre::AnimationData::AnimationData(v17);
      v18 = v17;
      v14 = *(_DWORD *)&v20[4 * v16];
      std::vector<Ogre::BoneTrack *>::operator=((int)(v17 + 10), v14 + 40);
      std::vector<Ogre::SequenceDesc>::operator=((int)(v18 + 7), v14 + 28);
      std::vector<Ogre::TriggerDesc>::operator=((int)(v18 + 4), v14 + 16);
      LODWORD(v15) = (char *)this + 32;
      *(_DWORD *)(v14 + 44) = *(_DWORD *)(v14 + 40);
      HIDWORD(v15) = &v18;
      std::vector<Ogre::AnimationData *>::push_back(v15);
    }
    if ( v20 != nullptr )
      operator delete(v20);
  }
  else
  {
    Ogre::Archive::operator<<<Ogre::AnimationData>((unsigned int)a2, (int *)this + 8);
  }
  if ( *((_DWORD *)a2 + 2) == 1 )
    *((_DWORD *)this + 11) = Ogre::Archive::readObject(a2);
  else
    Ogre::Archive::writeObject(a2, *((Ogre::BaseObject **)this + 11));
  Ogre::Archive::serialize(a2, (char *)this + 48, 0xCu);
  Ogre::Archive::serialize(a2, (char *)this + 60, 0xCu);
  Ogre::Archive::serialize(a2, (char *)this + 72, 1u);
  return Ogre::Archive::serializeRawArray<Ogre::ModelAnchor>((int)a2, (unsigned int)this + 76, v6, v7);
}

