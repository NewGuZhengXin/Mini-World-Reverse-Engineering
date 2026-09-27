// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Line_lod0

//======================================================================
// Ogre::OGLTech_Line_lod0::~OGLTech_Line_lod0()
// address: 0x00261424   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17OGLTech_Line_lod0D1Ev'
void __fastcall Ogre::OGLTech_Line_lod0::~OGLTech_Line_lod0(Ogre::OGLTech_Line_lod0 *this)
{
  *(_DWORD *)this = &off_45B190;
  Ogre::Tech_Line_lod0::~Tech_Line_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Line_lod0::~OGLTech_Line_lod0()
// address: 0x00261440   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Line_lod0::~OGLTech_Line_lod0(Ogre::OGLTech_Line_lod0 *this)
{
  Ogre::OGLTech_Line_lod0::~OGLTech_Line_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Line_lod0::beginPass(unsigned int)
// address: 0x00261524   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Line_lod0::beginPass(Ogre::OGLTech_Line_lod0 *this, unsigned int a2)
{
  j_glDisable(0xB44u);
  j_glDepthMask(0);
}


//======================================================================
// Ogre::OGLTech_Line_lod0::endPass(void)
// address: 0x00261604   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Line_lod0::endPass(Ogre::OGLTech_Line_lod0 *this)
{
  j_glEnable(0xB44u);
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_Line_lod0::clone(void)
// address: 0x00262B70   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_Line_lod0::clone(Ogre::OGLTech_Line_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45B190;
  return v1;
}

