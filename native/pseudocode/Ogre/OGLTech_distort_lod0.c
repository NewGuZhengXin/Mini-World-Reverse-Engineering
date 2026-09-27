// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_distort_lod0

//======================================================================
// Ogre::OGLTech_distort_lod0::~OGLTech_distort_lod0()
// address: 0x002612A4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20OGLTech_distort_lod0D1Ev'
void __fastcall Ogre::OGLTech_distort_lod0::~OGLTech_distort_lod0(Ogre::OGLTech_distort_lod0 *this)
{
  *(_DWORD *)this = &off_45B090;
  Ogre::Tech_distort_lod0::~Tech_distort_lod0(this);
}


//======================================================================
// Ogre::OGLTech_distort_lod0::~OGLTech_distort_lod0()
// address: 0x002612C0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_distort_lod0::~OGLTech_distort_lod0(Ogre::OGLTech_distort_lod0 *this)
{
  Ogre::OGLTech_distort_lod0::~OGLTech_distort_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_distort_lod0::beginPass(unsigned int)
// address: 0x002628D0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_distort_lod0::beginPass(Ogre::OGLTech_distort_lod0 *this, unsigned int a2)
{
  j_glDisable(0xBE2u);
  j_glDisable(0xB71u);
  j_glDisable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_distort_lod0::endPass(void)
// address: 0x002628F4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_distort_lod0::endPass(Ogre::OGLTech_distort_lod0 *this)
{
  j_glDisable(0xBE2u);
  j_glEnable(0xB71u);
  j_glEnable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_distort_lod0::clone(void)
// address: 0x00262C24   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_distort_lod0::clone(Ogre::OGLTech_distort_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45B090;
  return v1;
}

