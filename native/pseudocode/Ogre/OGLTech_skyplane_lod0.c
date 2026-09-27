// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_skyplane_lod0

//======================================================================
// Ogre::OGLTech_skyplane_lod0::~OGLTech_skyplane_lod0()
// address: 0x00260584   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21OGLTech_skyplane_lod0D1Ev'
void __fastcall Ogre::OGLTech_skyplane_lod0::~OGLTech_skyplane_lod0(Ogre::OGLTech_skyplane_lod0 *this)
{
  *(_DWORD *)this = &off_45A7D0;
  Ogre::Tech_skyplane_lod0::~Tech_skyplane_lod0(this);
}


//======================================================================
// Ogre::OGLTech_skyplane_lod0::~OGLTech_skyplane_lod0()
// address: 0x002605A0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_skyplane_lod0::~OGLTech_skyplane_lod0(Ogre::OGLTech_skyplane_lod0 *this)
{
  Ogre::OGLTech_skyplane_lod0::~OGLTech_skyplane_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_skyplane_lod0::beginPass(unsigned int)
// address: 0x002614B4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_skyplane_lod0::beginPass(Ogre::OGLTech_skyplane_lod0 *this, unsigned int a2)
{
  j_glDisable(0xB71u);
  j_glDisable(0xB44u);
  j_glDepthMask(0);
}


//======================================================================
// Ogre::OGLTech_skyplane_lod0::endPass(void)
// address: 0x00261538   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_skyplane_lod0::endPass(Ogre::OGLTech_skyplane_lod0 *this)
{
  j_glEnable(0xB44u);
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_skyplane_lod0::clone(void)
// address: 0x00262E40   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_skyplane_lod0::clone(Ogre::OGLTech_skyplane_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45A7D0;
  return v1;
}

