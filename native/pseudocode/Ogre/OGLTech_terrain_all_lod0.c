// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_terrain_all_lod0

//======================================================================
// Ogre::OGLTech_terrain_all_lod0::endPass(void)
// address: 0x00260548   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_terrain_all_lod0::endPass(Ogre::OGLTech_terrain_all_lod0 *this)
{
  ;
}


//======================================================================
// Ogre::OGLTech_terrain_all_lod0::~OGLTech_terrain_all_lod0()
// address: 0x00260E84   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24OGLTech_terrain_all_lod0D1Ev'
void __fastcall Ogre::OGLTech_terrain_all_lod0::~OGLTech_terrain_all_lod0(Ogre::OGLTech_terrain_all_lod0 *this)
{
  *(_DWORD *)this = &off_45ADD0;
  Ogre::Tech_terrain_all_lod0::~Tech_terrain_all_lod0(this);
}


//======================================================================
// Ogre::OGLTech_terrain_all_lod0::~OGLTech_terrain_all_lod0()
// address: 0x00260EA0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_terrain_all_lod0::~OGLTech_terrain_all_lod0(Ogre::OGLTech_terrain_all_lod0 *this)
{
  Ogre::OGLTech_terrain_all_lod0::~OGLTech_terrain_all_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_terrain_all_lod0::beginPass(unsigned int)
// address: 0x0026281C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_terrain_all_lod0::beginPass(Ogre::OGLTech_terrain_all_lod0 *this, unsigned int a2)
{
  j_glEnable(0xB71u);
  j_glDepthMask(1u);
  j_glDisable(0xBE2u);
}


//======================================================================
// Ogre::OGLTech_terrain_all_lod0::clone(void)
// address: 0x00262D8C   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_terrain_all_lod0::clone(Ogre::OGLTech_terrain_all_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45ADD0;
  return v1;
}

