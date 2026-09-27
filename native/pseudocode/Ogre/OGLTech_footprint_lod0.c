// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_footprint_lod0

//======================================================================
// Ogre::OGLTech_footprint_lod0::endPass(void)
// address: 0x0026054E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_footprint_lod0::endPass(Ogre::OGLTech_footprint_lod0 *this)
{
  ;
}


//======================================================================
// Ogre::OGLTech_footprint_lod0::~OGLTech_footprint_lod0()
// address: 0x00261244   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre22OGLTech_footprint_lod0D1Ev'
void __fastcall Ogre::OGLTech_footprint_lod0::~OGLTech_footprint_lod0(Ogre::OGLTech_footprint_lod0 *this)
{
  *(_DWORD *)this = &off_45B050;
  Ogre::Tech_footprint_lod0::~Tech_footprint_lod0(this);
}


//======================================================================
// Ogre::OGLTech_footprint_lod0::~OGLTech_footprint_lod0()
// address: 0x00261260   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_footprint_lod0::~OGLTech_footprint_lod0(Ogre::OGLTech_footprint_lod0 *this)
{
  Ogre::OGLTech_footprint_lod0::~OGLTech_footprint_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_footprint_lod0::beginPass(unsigned int)
// address: 0x002628C4   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_footprint_lod0::beginPass(Ogre::OGLTech_footprint_lod0 *this, unsigned int a2)
{
  sub_26179C(5);
}


//======================================================================
// Ogre::OGLTech_footprint_lod0::clone(void)
// address: 0x00262BDC   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_footprint_lod0::clone(Ogre::OGLTech_footprint_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45B050;
  return v1;
}

