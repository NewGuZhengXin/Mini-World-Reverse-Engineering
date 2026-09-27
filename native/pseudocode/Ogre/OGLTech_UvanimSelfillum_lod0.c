// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_UvanimSelfillum_lod0

//======================================================================
// Ogre::OGLTech_UvanimSelfillum_lod0::~OGLTech_UvanimSelfillum_lod0()
// address: 0x00260CA4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre28OGLTech_UvanimSelfillum_lod0D1Ev'
void __fastcall Ogre::OGLTech_UvanimSelfillum_lod0::~OGLTech_UvanimSelfillum_lod0(
        Ogre::OGLTech_UvanimSelfillum_lod0 *this)
{
  *(_DWORD *)this = &off_45AC90;
  Ogre::Tech_UvanimSelfillum_lod0::~Tech_UvanimSelfillum_lod0(this);
}


//======================================================================
// Ogre::OGLTech_UvanimSelfillum_lod0::~OGLTech_UvanimSelfillum_lod0()
// address: 0x00260CC0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_UvanimSelfillum_lod0::~OGLTech_UvanimSelfillum_lod0(
        Ogre::OGLTech_UvanimSelfillum_lod0 *this)
{
  Ogre::OGLTech_UvanimSelfillum_lod0::~OGLTech_UvanimSelfillum_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_UvanimSelfillum_lod0::endPass(void)
// address: 0x0026151A   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_UvanimSelfillum_lod0::endPass(Ogre::OGLTech_UvanimSelfillum_lod0 *this)
{
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_UvanimSelfillum_lod0::clone(void)
// address: 0x00262DB0   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_UvanimSelfillum_lod0::clone(Ogre::OGLTech_UvanimSelfillum_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AC90;
  return v1;
}


//======================================================================
// Ogre::OGLTech_UvanimSelfillum_lod0::beginPass(unsigned int)
// address: 0x0026314C   size: 0x14 (20 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_UvanimSelfillum_lod0::beginPass(
        Ogre::OGLTech_UvanimSelfillum_lod0 *this,
        unsigned int a2,
        int a3)
{
  Ogre::SetBlendState((Ogre *)((char *)&dword_0 + 3), -1, a3);
  j_glDepthMask(0);
}

