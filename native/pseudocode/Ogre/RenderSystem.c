// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderSystem

//======================================================================
// Ogre::RenderSystem::RenderSystem(void)
// address: 0x001987F4   size: 0x54 (84 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12RenderSystemC1Ev'
Ogre::RenderSystem *__fastcall Ogre::RenderSystem::RenderSystem(Ogre::RenderSystem *this)
{
  int v2; // r5

  Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton = (int)this;
  *(_DWORD *)this = &off_4587E0;
  *((_DWORD *)this + 17) = &byte_55FB88;
  *((_DWORD *)this + 15) = 2;
  *((_BYTE *)this + 64) = 1;
  v2 = operator new(0x30u);
  Ogre::RenderSystemCapabilities::RenderSystemCapabilities(v2);
  *((_DWORD *)this + 13) = v2;
  j_memset((char *)this + 4, 0, 0x28u);
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 44) = 0;
  *((_BYTE *)this + 45) = 0;
  return this;
}


//======================================================================
// Ogre::RenderSystem::~RenderSystem()
// address: 0x00198854   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12RenderSystemD1Ev'
void __fastcall Ogre::RenderSystem::~RenderSystem(Ogre::RenderSystem *this)
{
  Ogre::RenderSystemCapabilities *v1; // r5

  v1 = *((Ogre::RenderSystemCapabilities **)this + 13);
  *(_DWORD *)this = &off_4587E0;
  if ( v1 != nullptr )
  {
    Ogre::RenderSystemCapabilities::~RenderSystemCapabilities(v1);
    operator delete(v1);
  }
  sub_3BDF80((char *)this + 68);
  Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton = 0;
}

