// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_plant_lod0

//======================================================================
// Ogre::OGLTech_plant_lod0::~OGLTech_plant_lod0()
// address: 0x00261004   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLTech_plant_lod0D1Ev'
void __fastcall Ogre::OGLTech_plant_lod0::~OGLTech_plant_lod0(Ogre::OGLTech_plant_lod0 *this)
{
  *(_DWORD *)this = &off_45AED0;
  Ogre::Tech_plant_lod0::~Tech_plant_lod0(this);
}


//======================================================================
// Ogre::OGLTech_plant_lod0::~OGLTech_plant_lod0()
// address: 0x00261020   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_plant_lod0::~OGLTech_plant_lod0(Ogre::OGLTech_plant_lod0 *this)
{
  Ogre::OGLTech_plant_lod0::~OGLTech_plant_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_plant_lod0::beginPass(unsigned int)
// address: 0x0026283C   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_plant_lod0::beginPass(Ogre::OGLTech_plant_lod0 *this, unsigned int a2)
{
  j_glDisable(0xBE2u);
  j_glDisable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_plant_lod0::clone(void)
// address: 0x00262ABC   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_plant_lod0::clone(Ogre::OGLTech_plant_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AED0;
  return v1;
}


//======================================================================
// Ogre::OGLTech_plant_lod0::endPass(void)
// address: 0x00262EBE   size: 0xC (12 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_plant_lod0::endPass(Ogre::OGLTech_plant_lod0 *this, int a2, unsigned int a3)
{
  Ogre::SetSamplerTexture((Ogre *)((char *)&dword_0 + 1), 0, a3);
}

