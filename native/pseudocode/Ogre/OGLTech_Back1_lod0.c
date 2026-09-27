// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Back1_lod0

//======================================================================
// Ogre::OGLTech_Back1_lod0::~OGLTech_Back1_lod0()
// address: 0x00260944   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLTech_Back1_lod0D1Ev'
void __fastcall Ogre::OGLTech_Back1_lod0::~OGLTech_Back1_lod0(Ogre::OGLTech_Back1_lod0 *this)
{
  *(_DWORD *)this = &off_45AA50;
  Ogre::Tech_Back1_lod0::~Tech_Back1_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Back1_lod0::~OGLTech_Back1_lod0()
// address: 0x00260960   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Back1_lod0::~OGLTech_Back1_lod0(Ogre::OGLTech_Back1_lod0 *this)
{
  Ogre::OGLTech_Back1_lod0::~OGLTech_Back1_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Back1_lod0::beginPass(unsigned int)
// address: 0x002616EC   size: 0x36 (54 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Back1_lod0::beginPass(Ogre::OGLTech_Back1_lod0 *this, unsigned int a2)
{
  j_glEnable(0xBE2u);
  j_glBlendFunc(0x302u, 1u);
  j_glDisable(0xB71u);
  j_glDepthMask(0);
  j_glEnable(0xB90u);
  j_glStencilFunc(0x205u, 1, 1u);
  j_glCullFace(0x404u);
}


//======================================================================
// Ogre::OGLTech_Back1_lod0::endPass(void)
// address: 0x00261738   size: 0x2A (42 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Back1_lod0::endPass(Ogre::OGLTech_Back1_lod0 *this)
{
  j_glDisable(0xBE2u);
  j_glDisable(0xB90u);
  j_glEnable(0xB71u);
  j_glDepthMask(1u);
  j_glDepthFunc(0x203u);
  j_glCullFace(0x405u);
}


//======================================================================
// Ogre::OGLTech_Back1_lod0::clone(void)
// address: 0x00262B28   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_Back1_lod0::clone(Ogre::OGLTech_Back1_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AA50;
  return v1;
}

