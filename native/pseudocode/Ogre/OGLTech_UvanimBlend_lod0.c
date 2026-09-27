// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_UvanimBlend_lod0

//======================================================================
// Ogre::OGLTech_UvanimBlend_lod0::~OGLTech_UvanimBlend_lod0()
// address: 0x00260C44   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24OGLTech_UvanimBlend_lod0D1Ev'
void __fastcall Ogre::OGLTech_UvanimBlend_lod0::~OGLTech_UvanimBlend_lod0(Ogre::OGLTech_UvanimBlend_lod0 *this)
{
  *(_DWORD *)this = &off_45AC50;
  Ogre::Tech_UvanimBlend_lod0::~Tech_UvanimBlend_lod0(this);
}


//======================================================================
// Ogre::OGLTech_UvanimBlend_lod0::~OGLTech_UvanimBlend_lod0()
// address: 0x00260C60   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_UvanimBlend_lod0::~OGLTech_UvanimBlend_lod0(Ogre::OGLTech_UvanimBlend_lod0 *this)
{
  Ogre::OGLTech_UvanimBlend_lod0::~OGLTech_UvanimBlend_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_UvanimBlend_lod0::endPass(void)
// address: 0x00261510   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_UvanimBlend_lod0::endPass(Ogre::OGLTech_UvanimBlend_lod0 *this)
{
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_UvanimBlend_lod0::clone(void)
// address: 0x00262CB4   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_UvanimBlend_lod0::clone(Ogre::OGLTech_UvanimBlend_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AC50;
  return v1;
}


//======================================================================
// Ogre::OGLTech_UvanimBlend_lod0::beginPass(unsigned int)
// address: 0x00263138   size: 0x14 (20 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_UvanimBlend_lod0::beginPass(
        Ogre::OGLTech_UvanimBlend_lod0 *this,
        unsigned int a2,
        int a3)
{
  Ogre::SetBlendState((Ogre *)((char *)&dword_0 + 3), -1, a3);
  j_glDepthMask(0);
}

