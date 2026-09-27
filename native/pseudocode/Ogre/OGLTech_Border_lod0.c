// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Border_lod0

//======================================================================
// Ogre::OGLTech_Border_lod0::~OGLTech_Border_lod0()
// address: 0x002609A4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19OGLTech_Border_lod0D1Ev'
void __fastcall Ogre::OGLTech_Border_lod0::~OGLTech_Border_lod0(Ogre::OGLTech_Border_lod0 *this)
{
  *(_DWORD *)this = &off_45AAB0;
  Ogre::Tech_Border_lod0::~Tech_Border_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Border_lod0::~OGLTech_Border_lod0()
// address: 0x002609C0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Border_lod0::~OGLTech_Border_lod0(Ogre::OGLTech_Border_lod0 *this)
{
  Ogre::OGLTech_Border_lod0::~OGLTech_Border_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Border_lod0::endPass(void)
// address: 0x00261628   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Border_lod0::endPass(Ogre::OGLTech_Border_lod0 *this)
{
  j_glColorMask(1u, 1u, 1u, 1u);
}


//======================================================================
// Ogre::OGLTech_Border_lod0::beginPass(unsigned int)
// address: 0x00262960   size: 0x1C (28 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Border_lod0::beginPass(Ogre::OGLTech_Border_lod0 *this, unsigned int a2)
{
  j_glColorMask(0, 0, 0, 0);
  j_glDisable(0xBE2u);
  j_glDisable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_Border_lod0::clone(void)
// address: 0x00262D68   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_Border_lod0::clone(Ogre::OGLTech_Border_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AAB0;
  return v1;
}

