// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_sun_lod0

//======================================================================
// Ogre::OGLTech_sun_lod0::~OGLTech_sun_lod0()
// address: 0x00260644   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16OGLTech_sun_lod0D1Ev'
void __fastcall Ogre::OGLTech_sun_lod0::~OGLTech_sun_lod0(Ogre::OGLTech_sun_lod0 *this)
{
  *(_DWORD *)this = &off_45A850;
  Ogre::Tech_sun_lod0::~Tech_sun_lod0(this);
}


//======================================================================
// Ogre::OGLTech_sun_lod0::~OGLTech_sun_lod0()
// address: 0x00260660   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_sun_lod0::~OGLTech_sun_lod0(Ogre::OGLTech_sun_lod0 *this)
{
  Ogre::OGLTech_sun_lod0::~OGLTech_sun_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_sun_lod0::endPass(void)
// address: 0x00261560   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_sun_lod0::endPass(Ogre::OGLTech_sun_lod0 *this)
{
  j_glDepthMask(1u);
  j_glEnable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_sun_lod0::beginPass(unsigned int)
// address: 0x00262770   size: 0x1C (28 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_sun_lod0::beginPass(Ogre::OGLTech_sun_lod0 *this, unsigned int a2)
{
  j_glDisable(0xB71u);
  j_glDisable(0xB44u);
  j_glDepthMask(0);
  sub_26179C(4);
}


//======================================================================
// Ogre::OGLTech_sun_lod0::clone(void)
// address: 0x00262E1C   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_sun_lod0::clone(Ogre::OGLTech_sun_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45A850;
  return v1;
}

