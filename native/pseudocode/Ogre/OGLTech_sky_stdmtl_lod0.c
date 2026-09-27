// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_sky_stdmtl_lod0

//======================================================================
// Ogre::OGLTech_sky_stdmtl_lod0::~OGLTech_sky_stdmtl_lod0()
// address: 0x002610C4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre23OGLTech_sky_stdmtl_lod0D1Ev'
void __fastcall Ogre::OGLTech_sky_stdmtl_lod0::~OGLTech_sky_stdmtl_lod0(Ogre::OGLTech_sky_stdmtl_lod0 *this)
{
  *(_DWORD *)this = &off_45AF70;
  Ogre::Tech_sky_stdmtl_lod0::~Tech_sky_stdmtl_lod0(this);
}


//======================================================================
// Ogre::OGLTech_sky_stdmtl_lod0::~OGLTech_sky_stdmtl_lod0()
// address: 0x002610E0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_sky_stdmtl_lod0::~OGLTech_sky_stdmtl_lod0(Ogre::OGLTech_sky_stdmtl_lod0 *this)
{
  Ogre::OGLTech_sky_stdmtl_lod0::~OGLTech_sky_stdmtl_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_sky_stdmtl_lod0::endPass(void)
// address: 0x002615F4   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_sky_stdmtl_lod0::endPass(Ogre::OGLTech_sky_stdmtl_lod0 *this)
{
  j_glEnable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_sky_stdmtl_lod0::beginPass(unsigned int)
// address: 0x00262854   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_sky_stdmtl_lod0::beginPass(Ogre::OGLTech_sky_stdmtl_lod0 *this, unsigned int a2)
{
  j_glDisable(0xBE2u);
  j_glDisable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_sky_stdmtl_lod0::clone(void)
// address: 0x00262B94   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_sky_stdmtl_lod0::clone(Ogre::OGLTech_sky_stdmtl_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AF70;
  return v1;
}

