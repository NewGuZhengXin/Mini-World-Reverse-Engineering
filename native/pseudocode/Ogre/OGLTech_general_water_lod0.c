// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_general_water_lod0

//======================================================================
// Ogre::OGLTech_general_water_lod0::~OGLTech_general_water_lod0()
// address: 0x00260F44   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre26OGLTech_general_water_lod0D1Ev'
void __fastcall Ogre::OGLTech_general_water_lod0::~OGLTech_general_water_lod0(Ogre::OGLTech_general_water_lod0 *this)
{
  *(_DWORD *)this = &off_45AE50;
  Ogre::Tech_general_water_lod0::~Tech_general_water_lod0(this);
}


//======================================================================
// Ogre::OGLTech_general_water_lod0::~OGLTech_general_water_lod0()
// address: 0x00260F60   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_general_water_lod0::~OGLTech_general_water_lod0(Ogre::OGLTech_general_water_lod0 *this)
{
  Ogre::OGLTech_general_water_lod0::~OGLTech_general_water_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_general_water_lod0::endPass(void)
// address: 0x00261774   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_general_water_lod0::endPass(Ogre::OGLTech_general_water_lod0 *this)
{
  j_glDepthMask(1u);
  j_glCullFace(0x405u);
}


//======================================================================
// Ogre::OGLTech_general_water_lod0::clone(void)
// address: 0x00262A74   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_general_water_lod0::clone(Ogre::OGLTech_general_water_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AE50;
  return v1;
}


//======================================================================
// Ogre::OGLTech_general_water_lod0::beginPass(unsigned int)
// address: 0x00263284   size: 0x2C (44 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_general_water_lod0::beginPass(
        Ogre::OGLTech_general_water_lod0 *this,
        unsigned int a2,
        int a3)
{
  if ( *((_BYTE *)this + 320) != 0 )
  {
    Ogre::SetBlendState((Ogre *)((char *)&dword_0 + 2), -1, a3);
    j_glDepthMask(0);
  }
  else
  {
    j_glDisable(0xBE2u);
  }
  j_glCullFace(0x404u);
}

