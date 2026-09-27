// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_water_reflect_lod0

//======================================================================
// Ogre::OGLTech_water_reflect_lod0::~OGLTech_water_reflect_lod0()
// address: 0x00260FA4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre26OGLTech_water_reflect_lod0D1Ev'
void __fastcall Ogre::OGLTech_water_reflect_lod0::~OGLTech_water_reflect_lod0(Ogre::OGLTech_water_reflect_lod0 *this)
{
  *(_DWORD *)this = &off_45AE90;
  Ogre::Tech_water_reflect_lod0::~Tech_water_reflect_lod0(this);
}


//======================================================================
// Ogre::OGLTech_water_reflect_lod0::~OGLTech_water_reflect_lod0()
// address: 0x00260FC0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_water_reflect_lod0::~OGLTech_water_reflect_lod0(Ogre::OGLTech_water_reflect_lod0 *this)
{
  Ogre::OGLTech_water_reflect_lod0::~OGLTech_water_reflect_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_water_reflect_lod0::endPass(void)
// address: 0x00261788   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_water_reflect_lod0::endPass(Ogre::OGLTech_water_reflect_lod0 *this)
{
  j_glCullFace(0x405u);
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_water_reflect_lod0::clone(void)
// address: 0x00262A98   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_water_reflect_lod0::clone(Ogre::OGLTech_water_reflect_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AE90;
  return v1;
}


//======================================================================
// Ogre::OGLTech_water_reflect_lod0::beginPass(unsigned int)
// address: 0x002632B8   size: 0x1A (26 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_water_reflect_lod0::beginPass(
        Ogre::OGLTech_water_reflect_lod0 *this,
        unsigned int a2,
        int a3)
{
  Ogre::SetBlendState((Ogre *)((char *)&dword_0 + 2), -1, a3);
  j_glCullFace(0xB46u);
  j_glDepthMask(0);
}

