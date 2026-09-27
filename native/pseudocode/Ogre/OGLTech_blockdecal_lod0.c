// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_blockdecal_lod0

//======================================================================
// Ogre::OGLTech_blockdecal_lod0::~OGLTech_blockdecal_lod0()
// address: 0x00260824   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre23OGLTech_blockdecal_lod0D1Ev'
void __fastcall Ogre::OGLTech_blockdecal_lod0::~OGLTech_blockdecal_lod0(Ogre::OGLTech_blockdecal_lod0 *this)
{
  *(_DWORD *)this = &off_45A990;
  Ogre::Tech_blockdecal_lod0::~Tech_blockdecal_lod0(this);
}


//======================================================================
// Ogre::OGLTech_blockdecal_lod0::~OGLTech_blockdecal_lod0()
// address: 0x00260840   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_blockdecal_lod0::~OGLTech_blockdecal_lod0(Ogre::OGLTech_blockdecal_lod0 *this)
{
  Ogre::OGLTech_blockdecal_lod0::~OGLTech_blockdecal_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_blockdecal_lod0::endPass(void)
// address: 0x00261690   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_blockdecal_lod0::endPass(Ogre::OGLTech_blockdecal_lod0 *this)
{
  j_glDepthMask(1u);
  j_glDepthFunc(0x201u);
}


//======================================================================
// Ogre::OGLTech_blockdecal_lod0::beginPass(unsigned int)
// address: 0x002629E4   size: 0x1C (28 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_blockdecal_lod0::beginPass(Ogre::OGLTech_blockdecal_lod0 *this, unsigned int a2)
{
  j_glEnable(0xB71u);
  j_glDepthFunc(0x202u);
  j_glDepthMask(0);
  sub_26179C(6);
}


//======================================================================
// Ogre::OGLTech_blockdecal_lod0::clone(void)
// address: 0x00262C90   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_blockdecal_lod0::clone(Ogre::OGLTech_blockdecal_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45A990;
  return v1;
}

