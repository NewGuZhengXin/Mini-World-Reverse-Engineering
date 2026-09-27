// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Resource

//======================================================================
// Ogre::Resource::~Resource()
// address: 0x0013FB38   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8ResourceD1Ev'
void __fastcall Ogre::Resource::~Resource(Ogre::FixedString **this, void *a2)
{
  *this = (Ogre::FixedString *)&off_456EA0;
  Ogre::FixedString::release(*(this + 2), a2);
  *this = (Ogre::FixedString *)&off_4559C0;
}


//======================================================================
// Ogre::Resource::~Resource()
// address: 0x0013FB64   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::Resource::~Resource(Ogre::FixedString **this, void *a2)
{
  Ogre::Resource::~Resource(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::Resource::getRTTI(void)const
// address: 0x001650FC   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::Resource::getRTTI(Ogre::Resource *this)
{
  return &Ogre::Resource::m_RTTI;
}


//======================================================================
// Ogre::Resource::deleteThis(void)
// address: 0x00165108   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::Resource::deleteThis(Ogre::Resource *this)
{
  if ( *((_DWORD *)this + 3) != 0 )
    Ogre::ResourceManager::clearResource(
      (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
      this);
  return (*(int (__fastcall **)(Ogre::Resource *))(*(_DWORD *)this + 20))(this);
}


//======================================================================
// Ogre::Resource::save(Ogre::FixedString const&)
// address: 0x00165130   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::Resource::save(Ogre::Resource *this, const Ogre::FixedString *a2)
{
  return Ogre::ResourceManager::writeResourceFile(
           (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton,
           a2,
           this);
}

