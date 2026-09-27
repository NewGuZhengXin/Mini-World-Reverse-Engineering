// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_terrain_colormask_lod0

//======================================================================
// Ogre::OGLTech_terrain_colormask_lod0::endPass(void)
// address: 0x0026054A   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_terrain_colormask_lod0::endPass(Ogre::OGLTech_terrain_colormask_lod0 *this)
{
  ;
}


//======================================================================
// Ogre::OGLTech_terrain_colormask_lod0::~OGLTech_terrain_colormask_lod0()
// address: 0x00260EE4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre30OGLTech_terrain_colormask_lod0D1Ev'
void __fastcall Ogre::OGLTech_terrain_colormask_lod0::~OGLTech_terrain_colormask_lod0(
        Ogre::OGLTech_terrain_colormask_lod0 *this)
{
  *(_DWORD *)this = &off_45AE10;
  Ogre::Tech_terrain_colormask_lod0::~Tech_terrain_colormask_lod0(this);
}


//======================================================================
// Ogre::OGLTech_terrain_colormask_lod0::~OGLTech_terrain_colormask_lod0()
// address: 0x00260F00   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_terrain_colormask_lod0::~OGLTech_terrain_colormask_lod0(
        Ogre::OGLTech_terrain_colormask_lod0 *this)
{
  Ogre::OGLTech_terrain_colormask_lod0::~OGLTech_terrain_colormask_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_terrain_colormask_lod0::clone(void)
// address: 0x00262A50   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_terrain_colormask_lod0::clone(Ogre::OGLTech_terrain_colormask_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AE10;
  return v1;
}


//======================================================================
// Ogre::OGLTech_terrain_colormask_lod0::beginPass(unsigned int)
// address: 0x00263274   size: 0xE (14 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_terrain_colormask_lod0::beginPass(
        Ogre::OGLTech_terrain_colormask_lod0 *this,
        unsigned int a2,
        int a3)
{
  Ogre::SetBlendState((Ogre *)((char *)&dword_0 + 2), -1, a3);
}

