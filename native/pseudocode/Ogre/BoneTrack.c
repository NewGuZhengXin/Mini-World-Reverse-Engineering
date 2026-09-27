// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BoneTrack

//======================================================================
// Ogre::BoneTrack::getRTTI(void)const
// address: 0x00153390   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BoneTrack::getRTTI(Ogre::BoneTrack *this)
{
  return &Ogre::BoneTrack::m_RTTI;
}


//======================================================================
// Ogre::BoneTrack::newObject(void)
// address: 0x001533C4   size: 0x8C (140 bytes)
//======================================================================
_DWORD *__fastcall Ogre::BoneTrack::newObject(Ogre::BoneTrack *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(0xA8u);
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  result[7] = 1;
  result[4] = 0;
  *result = &off_4563A8;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 1;
  result[6] = &off_455C50;
  result[19] = 1;
  result[12] = 0;
  result[13] = 0;
  result[14] = 0;
  result[15] = 0;
  result[16] = 0;
  result[17] = 0;
  result[20] = 0;
  result[21] = 0;
  result[22] = 0;
  result[23] = 1;
  result[24] = 0;
  result[18] = &off_456368;
  result[25] = 0;
  result[26] = 0;
  result[27] = 0;
  result[28] = 0;
  result[31] = 1;
  result[29] = 0;
  result[32] = 0;
  result[33] = 0;
  result[34] = 0;
  result[30] = &off_455C50;
  result[35] = 1;
  result[36] = 0;
  result[37] = 0;
  result[38] = 0;
  result[39] = 0;
  result[40] = 0;
  result[41] = 0;
  return result;
}


//======================================================================
// Ogre::BoneTrack::~BoneTrack()
// address: 0x00153490   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9BoneTrackD1Ev'
void __fastcall Ogre::BoneTrack::~BoneTrack(Ogre::FixedString **this)
{
  void *v2; // r1
  void *v3; // r1

  *this = (Ogre::FixedString *)&off_4563A8;
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray((Ogre::BaseKeyFrameArray *)(this + 30));
  Ogre::KeyFrameArray<Ogre::Quaternion>::~KeyFrameArray((Ogre::BaseKeyFrameArray *)(this + 18));
  Ogre::KeyFrameArray<Ogre::Vector3>::~KeyFrameArray((Ogre::BaseKeyFrameArray *)(this + 6));
  Ogre::FixedString::release(*(this + 4), v2);
  Ogre::Resource::~Resource(this, v3);
}


//======================================================================
// Ogre::BoneTrack::~BoneTrack()
// address: 0x001534C8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BoneTrack::~BoneTrack(Ogre::FixedString **this)
{
  Ogre::BoneTrack::~BoneTrack(this);
  operator delete(this);
}


//======================================================================
// Ogre::BoneTrack::getValue(int,unsigned int,Ogre::Vector3 &,Ogre::Quaternion &,Ogre::Vector3 &,bool)
// address: 0x0015389C   size: 0x56 (86 bytes)
//======================================================================
int __fastcall Ogre::BoneTrack::getValue(
        Ogre::BoneTrack *this,
        int a2,
        unsigned int a3,
        Ogre::Vector3 *a4,
        Ogre::Quaternion *a5,
        Ogre::Vector3 *a6,
        char a7)
{
  int v9; // r2
  int result; // r0

  v9 = *((_DWORD *)this + 20);
  if ( (*((_DWORD *)this + 21) - v9) >> 3 == 0 || (result = 0, *(_DWORD *)(v9 + 8 * a2) <= *(_DWORD *)(v9 + 8 * a2 + 4)) )
  {
    Ogre::KeyFrameArray<Ogre::Vector3>::getValue((_DWORD *)this + 6, a2, a3, *(float *)&a4, a7);
    Ogre::KeyFrameArray<Ogre::Quaternion>::getValue((_DWORD *)this + 18, a2, a3, (int)a5, a7);
    Ogre::KeyFrameArray<Ogre::Vector3>::getValue((_DWORD *)this + 30, a2, a3, *(float *)&a6, a7);
    return 1;
  }
  return result;
}


//======================================================================
// Ogre::BoneTrack::_serialize(Ogre::Archive &,int)
// address: 0x00153EEA   size: 0x44 (68 bytes)
//======================================================================
int __fastcall Ogre::BoneTrack::_serialize(Ogre::BoneTrack *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::operator<<((int)a2, (Ogre::BoneTrack *)((char *)this + 16));
  Ogre::Archive::serialize(a2, (char *)this + 20, 4u);
  Ogre::KeyFrameArray<Ogre::Vector3>::_serialize((_DWORD *)this + 6, a2);
  Ogre::KeyFrameArray<Ogre::Quaternion>::_serialize((_DWORD *)this + 18, a2);
  return Ogre::KeyFrameArray<Ogre::Vector3>::_serialize((_DWORD *)this + 30, a2);
}

