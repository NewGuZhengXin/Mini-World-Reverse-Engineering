// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::EffectObject

//======================================================================
// Ogre::EffectObject::~EffectObject()
// address: 0x001431E4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12EffectObjectD1Ev'
void __fastcall Ogre::EffectObject::~EffectObject(Ogre::EffectObject *this)
{
  *(_DWORD *)this = &off_457D38;
  Ogre::MovableObject::~MovableObject(this);
}


//======================================================================
// Ogre::EffectObject::~EffectObject()
// address: 0x00143200   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::EffectObject::~EffectObject(Ogre::EffectObject *this)
{
  Ogre::EffectObject::~EffectObject(this);
  operator delete(this);
}


//======================================================================
// Ogre::EffectObject::getRTTI(void)const
// address: 0x001842B4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::EffectObject::getRTTI(Ogre::EffectObject *this)
{
  return &Ogre::EffectObject::m_RTTI;
}


//======================================================================
// Ogre::EffectObject::attachToScene(Ogre::GameScene *,bool)
// address: 0x001842C0   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::EffectObject::attachToScene(Ogre::EffectObject *this, Ogre::GameScene *a2, bool a3)
{
  return Ogre::MovableObject::attachToScene(this, a2, false);
}

