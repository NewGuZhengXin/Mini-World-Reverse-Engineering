// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Triangle_lod0

//======================================================================
// Ogre::OGLTech_Triangle_lod0::beginPass(unsigned int)
// address: 0x00260550   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Triangle_lod0::beginPass(Ogre::OGLTech_Triangle_lod0 *this, unsigned int a2)
{
  ;
}


//======================================================================
// Ogre::OGLTech_Triangle_lod0::endPass(void)
// address: 0x00260552   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Triangle_lod0::endPass(Ogre::OGLTech_Triangle_lod0 *this)
{
  ;
}


//======================================================================
// Ogre::OGLTech_Triangle_lod0::~OGLTech_Triangle_lod0()
// address: 0x00261484   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21OGLTech_Triangle_lod0D1Ev'
void __fastcall Ogre::OGLTech_Triangle_lod0::~OGLTech_Triangle_lod0(Ogre::OGLTech_Triangle_lod0 *this)
{
  *(_DWORD *)this = &off_45B1D0;
  Ogre::Tech_Triangle_lod0::~Tech_Triangle_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Triangle_lod0::~OGLTech_Triangle_lod0()
// address: 0x002614A0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Triangle_lod0::~OGLTech_Triangle_lod0(Ogre::OGLTech_Triangle_lod0 *this)
{
  Ogre::OGLTech_Triangle_lod0::~OGLTech_Triangle_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Triangle_lod0::clone(void)
// address: 0x00262D44   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_Triangle_lod0::clone(Ogre::OGLTech_Triangle_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45B1D0;
  return v1;
}

