// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BaseAnimationData

//======================================================================
// Ogre::BaseAnimationData::getRTTI(void)const
// address: 0x0014AA60   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BaseAnimationData::getRTTI(Ogre::BaseAnimationData *this)
{
  return &Ogre::BaseAnimationData::m_RTTI;
}


//======================================================================
// Ogre::BaseAnimationData::~BaseAnimationData()
// address: 0x0014AA90   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17BaseAnimationDataD1Ev'
void __fastcall Ogre::BaseAnimationData::~BaseAnimationData(Ogre::BaseAnimationData *this, void *a2)
{
  void *v3; // r0
  void *v4; // r0

  *(_DWORD *)this = &off_455E48;
  v3 = *((void **)this + 7);
  if ( v3 != nullptr )
    operator delete(v3);
  v4 = *((void **)this + 4);
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::BaseAnimationData::~BaseAnimationData()
// address: 0x0014AAC0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BaseAnimationData::~BaseAnimationData(Ogre::BaseAnimationData *this, void *a2)
{
  Ogre::BaseAnimationData::~BaseAnimationData(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::BaseAnimationData::getSequence(unsigned int)
// address: 0x0014AB4E   size: 0x8 (8 bytes)
//======================================================================
unsigned int __fastcall Ogre::BaseAnimationData::getSequence(Ogre::BaseAnimationData *this, unsigned int a2)
{
  return *((_DWORD *)this + 7) + 16 * a2;
}


//======================================================================
// Ogre::BaseAnimationData::getSequenceIndex(int)
// address: 0x0014AB56   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::BaseAnimationData::getSequenceIndex(Ogre::BaseAnimationData *this, int a2)
{
  int v2; // r3
  int v3; // r2
  int result; // r0
  int v5; // r2

  v2 = *((_DWORD *)this + 7);
  v3 = *((_DWORD *)this + 8);
  result = 0;
  v5 = (v3 - v2) >> 4;
  while ( result != v5 )
  {
    if ( *(_DWORD *)(v2 + 16 * result) == a2 )
      return result;
    ++result;
  }
  return -1;
}


//======================================================================
// Ogre::BaseAnimationData::hasSequence(int)
// address: 0x0014AB78   size: 0xC (12 bytes)
//======================================================================
bool __fastcall Ogre::BaseAnimationData::hasSequence(Ogre::BaseAnimationData *this, int a2)
{
  return Ogre::BaseAnimationData::getSequenceIndex(this, a2) >= 0;
}


//======================================================================
// Ogre::BaseAnimationData::addTrigger(Ogre::TriggerDesc const&)
// address: 0x0014AD3C   size: 0x90 (144 bytes)
//======================================================================
__int64 __fastcall Ogre::BaseAnimationData::addTrigger(__int64 a1)
{
  _QWORD *v1; // r5
  unsigned int v3; // r0
  unsigned int v4; // r6
  _QWORD *v5; // r3
  int v6; // r0
  int v7; // r5
  void *v8; // r0
  __int64 byte_count; // [sp+0h] [bp-Ch]

  byte_count = a1;
  v1 = *(_QWORD **)(a1 + 20);
  if ( v1 == *(_QWORD **)(a1 + 24) )
  {
    v3 = std::vector<Ogre::TriggerDesc>::_M_check_len((_DWORD *)(a1 + 16), 1u, (int)"vector::_M_insert_aux");
    LODWORD(byte_count) = 8 * v3;
    HIDWORD(byte_count) = *(_DWORD *)(a1 + 16);
    if ( v3 != 0 )
    {
      if ( v3 > 0x1FFFFFFF )
        sub_3BCEB4();
      v3 = operator new(byte_count);
    }
    v4 = v3;
    v5 = (_QWORD *)(v3 + 8 * (((int)v1 - HIDWORD(byte_count)) >> 3));
    if ( v5 != nullptr )
      *v5 = *(_QWORD *)HIDWORD(a1);
    v6 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(
           *(void **)(a1 + 16),
           (int)v1,
           (void *)v3);
    v7 = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::TriggerDesc>(
           v1,
           *(_DWORD *)(a1 + 20),
           (void *)(v6 + 8));
    v8 = *(void **)(a1 + 16);
    if ( v8 != nullptr )
      operator delete(v8);
    *(_DWORD *)(a1 + 16) = v4;
    *(_DWORD *)(a1 + 20) = v7;
    *(_DWORD *)(a1 + 24) = v4 + byte_count;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = *(_QWORD *)HIDWORD(a1);
    *(_DWORD *)(a1 + 20) += 8;
  }
  return byte_count;
}


//======================================================================
// Ogre::BaseAnimationData::_serialize(Ogre::Archive &,int)
// address: 0x0014B49E   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::BaseAnimationData::_serialize(Ogre::BaseAnimationData *this, Ogre::Archive *a2, int a3, int a4)
{
  Ogre::Archive::serializeRawArray<Ogre::TriggerDesc>((int)a2, (unsigned int)this + 16, a3, a4);
  return Ogre::Archive::serializeRawArray<Ogre::SequenceDesc>((int)a2, (int *)this + 7);
}

