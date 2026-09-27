// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_cloth_shadowgen

//======================================================================
// Ogre::OGLTech_cloth_shadowgen::~OGLTech_cloth_shadowgen()
// address: 0x00260D64   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre23OGLTech_cloth_shadowgenD1Ev'
void __fastcall Ogre::OGLTech_cloth_shadowgen::~OGLTech_cloth_shadowgen(Ogre::OGLTech_cloth_shadowgen *this)
{
  *(_DWORD *)this = &off_45AD10;
  Ogre::Tech_cloth_shadowgen::~Tech_cloth_shadowgen(this);
}


//======================================================================
// Ogre::OGLTech_cloth_shadowgen::~OGLTech_cloth_shadowgen()
// address: 0x00260D80   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_cloth_shadowgen::~OGLTech_cloth_shadowgen(Ogre::OGLTech_cloth_shadowgen *this)
{
  Ogre::OGLTech_cloth_shadowgen::~OGLTech_cloth_shadowgen(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_cloth_shadowgen::endPass(void)
// address: 0x00261638   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_cloth_shadowgen::endPass(Ogre::OGLTech_cloth_shadowgen *this)
{
  j_glColorMask(1u, 1u, 1u, 1u);
}


//======================================================================
// Ogre::OGLTech_cloth_shadowgen::beginPass(unsigned int)
// address: 0x002629B4   size: 0x28 (40 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_cloth_shadowgen::beginPass(Ogre::OGLTech_cloth_shadowgen *this, unsigned int a2)
{
  j_glColorMask(0, 0, 0, 0);
  j_glDisable(0xBE2u);
  if ( *((_BYTE *)this + 321) != 0 )
    j_glDisable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_cloth_shadowgen::clone(void)
// address: 0x00262B04   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_cloth_shadowgen::clone(Ogre::OGLTech_cloth_shadowgen *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AD10;
  return v1;
}

