// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_decal_distort

//======================================================================
// Ogre::OGLTech_decal_distort::endPass(void)
// address: 0x0026054C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_decal_distort::endPass(Ogre::OGLTech_decal_distort *this)
{
  ;
}


//======================================================================
// Ogre::OGLTech_decal_distort::~OGLTech_decal_distort()
// address: 0x002611E4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21OGLTech_decal_distortD1Ev'
void __fastcall Ogre::OGLTech_decal_distort::~OGLTech_decal_distort(Ogre::OGLTech_decal_distort *this)
{
  *(_DWORD *)this = &off_45B010;
  Ogre::Tech_decal_distort::~Tech_decal_distort(this);
}


//======================================================================
// Ogre::OGLTech_decal_distort::~OGLTech_decal_distort()
// address: 0x00261200   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_decal_distort::~OGLTech_decal_distort(Ogre::OGLTech_decal_distort *this)
{
  Ogre::OGLTech_decal_distort::~OGLTech_decal_distort(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_decal_distort::beginPass(unsigned int)
// address: 0x002628AC   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_decal_distort::beginPass(Ogre::OGLTech_decal_distort *this, unsigned int a2)
{
  j_glDisable(0xBE2u);
  j_glDisable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_decal_distort::clone(void)
// address: 0x00262C00   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_decal_distort::clone(Ogre::OGLTech_decal_distort *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45B010;
  return v1;
}

