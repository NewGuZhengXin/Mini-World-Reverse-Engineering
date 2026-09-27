// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_sky_stdmtl_shadowgen

//======================================================================
// Ogre::OGLTech_sky_stdmtl_shadowgen::~OGLTech_sky_stdmtl_shadowgen()
// address: 0x00261124   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre28OGLTech_sky_stdmtl_shadowgenD1Ev'
void __fastcall Ogre::OGLTech_sky_stdmtl_shadowgen::~OGLTech_sky_stdmtl_shadowgen(
        Ogre::OGLTech_sky_stdmtl_shadowgen *this)
{
  *(_DWORD *)this = &off_45AF90;
  Ogre::Tech_sky_stdmtl_shadowgen::~Tech_sky_stdmtl_shadowgen(this);
}


//======================================================================
// Ogre::OGLTech_sky_stdmtl_shadowgen::~OGLTech_sky_stdmtl_shadowgen()
// address: 0x00261140   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_sky_stdmtl_shadowgen::~OGLTech_sky_stdmtl_shadowgen(
        Ogre::OGLTech_sky_stdmtl_shadowgen *this)
{
  Ogre::OGLTech_sky_stdmtl_shadowgen::~OGLTech_sky_stdmtl_shadowgen(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_sky_stdmtl_shadowgen::endPass(void)
// address: 0x00261670   size: 0x1C (28 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_sky_stdmtl_shadowgen::endPass(Ogre::OGLTech_sky_stdmtl_shadowgen *this)
{
  j_glEnable(0xB44u);
  j_glDepthMask(1u);
  j_glColorMask(1u, 1u, 1u, 1u);
}


//======================================================================
// Ogre::OGLTech_sky_stdmtl_shadowgen::beginPass(unsigned int)
// address: 0x0026286C   size: 0x22 (34 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_sky_stdmtl_shadowgen::beginPass(
        Ogre::OGLTech_sky_stdmtl_shadowgen *this,
        unsigned int a2)
{
  j_glDisable(0xBE2u);
  j_glDisable(0xB44u);
  j_glDepthMask(0);
  j_glColorMask(0, 0, 0, 0);
}


//======================================================================
// Ogre::OGLTech_sky_stdmtl_shadowgen::clone(void)
// address: 0x00262BB8   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_sky_stdmtl_shadowgen::clone(Ogre::OGLTech_sky_stdmtl_shadowgen *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AF90;
  return v1;
}

