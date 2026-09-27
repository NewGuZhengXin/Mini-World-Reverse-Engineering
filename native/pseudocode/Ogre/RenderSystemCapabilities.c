// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderSystemCapabilities

//======================================================================
// Ogre::RenderSystemCapabilities::RenderSystemCapabilities(void)
// address: 0x00186178   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24RenderSystemCapabilitiesC1Ev'
int __fastcall Ogre::RenderSystemCapabilities::RenderSystemCapabilities(int this)
{
  *(_WORD *)this = 0;
  *(_WORD *)(this + 2) = 0;
  *(_WORD *)(this + 4) = 0;
  *(_DWORD *)(this + 12) = &byte_55FB88;
  *(_DWORD *)(this + 16) = &byte_55FB88;
  *(_WORD *)(this + 32) = 1;
  *(_WORD *)(this + 6) = 0;
  *(_DWORD *)(this + 8) = 0;
  *(_BYTE *)(this + 40) = 0;
  return this;
}


//======================================================================
// Ogre::RenderSystemCapabilities::~RenderSystemCapabilities()
// address: 0x001861A0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24RenderSystemCapabilitiesD1Ev'
void __fastcall Ogre::RenderSystemCapabilities::~RenderSystemCapabilities(Ogre::RenderSystemCapabilities *this)
{
  sub_3BDF80((char *)this + 16);
  sub_3BDF80((char *)this + 12);
}

