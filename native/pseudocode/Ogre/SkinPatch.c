// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SkinPatch

//======================================================================
// Ogre::SkinPatch::newObject(void)
// address: 0x00192FCC   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SkinPatch::newObject(Ogre::SkinPatch *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(0x38u);
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  *result = &off_458660;
  result[8] = 0;
  result[9] = 0;
  result[10] = 0;
  result[11] = 0;
  result[12] = 0;
  result[13] = 0;
  return result;
}


//======================================================================
// Ogre::SkinPatch::getRTTI(void)const
// address: 0x001974EC   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::SkinPatch::getRTTI(Ogre::SkinPatch *this)
{
  return &Ogre::SkinPatch::m_RTTI;
}


//======================================================================
// Ogre::SkinPatch::~SkinPatch()
// address: 0x00197524   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9SkinPatchD1Ev'
void __fastcall Ogre::SkinPatch::~SkinPatch(Ogre::SkinPatch *this, void *a2)
{
  void *v3; // r0
  void *v4; // r0

  *(_DWORD *)this = &off_458660;
  v3 = *((void **)this + 11);
  if ( v3 != nullptr )
    operator delete(v3);
  v4 = *((void **)this + 8);
  if ( v4 != nullptr )
    operator delete(v4);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, a2);
}


//======================================================================
// Ogre::SkinPatch::~SkinPatch()
// address: 0x00197554   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SkinPatch::~SkinPatch(Ogre::SkinPatch *this, void *a2)
{
  Ogre::SkinPatch::~SkinPatch(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::SkinPatch::_serialize(Ogre::Archive &,int)
// address: 0x00197B32   size: 0x4C (76 bytes)
//======================================================================
int __fastcall Ogre::SkinPatch::_serialize(Ogre::SkinPatch *this, Ogre::Archive *a2, int a3)
{
  Ogre::Archive::serialize(a2, (char *)this + 16, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 20, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 24, 4u);
  Ogre::Archive::serialize(a2, (char *)this + 28, 4u);
  Ogre::Archive::serializeRawArray<unsigned short>((int)a2, (_DWORD *)this + 8);
  return Ogre::Archive::serializeRawArray<Ogre::Matrix4>((int)a2, (_DWORD *)this + 11);
}

