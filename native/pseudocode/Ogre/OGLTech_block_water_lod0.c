// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_block_water_lod0

//======================================================================
// Ogre::OGLTech_block_water_lod0::~OGLTech_block_water_lod0()
// address: 0x00260884   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24OGLTech_block_water_lod0D1Ev'
void __fastcall Ogre::OGLTech_block_water_lod0::~OGLTech_block_water_lod0(Ogre::OGLTech_block_water_lod0 *this)
{
  *(_DWORD *)this = &off_45A9D0;
  Ogre::Tech_block_water_lod0::~Tech_block_water_lod0(this);
}


//======================================================================
// Ogre::OGLTech_block_water_lod0::~OGLTech_block_water_lod0()
// address: 0x002608A0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_block_water_lod0::~OGLTech_block_water_lod0(Ogre::OGLTech_block_water_lod0 *this)
{
  Ogre::OGLTech_block_water_lod0::~OGLTech_block_water_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_block_water_lod0::endPass(void)
// address: 0x00261506   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_block_water_lod0::endPass(Ogre::OGLTech_block_water_lod0 *this)
{
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_block_water_lod0::clone(void)
// address: 0x00262B4C   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_block_water_lod0::clone(Ogre::OGLTech_block_water_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45A9D0;
  return v1;
}


//======================================================================
// Ogre::OGLTech_block_water_lod0::beginPass(unsigned int)
// address: 0x00263004   size: 0x20 (32 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_block_water_lod0::beginPass(Ogre::OGLTech_block_water_lod0 *this, unsigned int a2)
{
  int v2; // r2

  j_glEnable(0xB71u);
  j_glEnable(0xB44u);
  Ogre::SetBlendState((Ogre *)((char *)&dword_0 + 2), -1, v2);
  j_glDepthMask(0);
}

