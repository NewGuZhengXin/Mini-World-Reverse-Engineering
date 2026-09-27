// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Border1_lod0

//======================================================================
// Ogre::OGLTech_Border1_lod0::~OGLTech_Border1_lod0()
// address: 0x00260A04   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20OGLTech_Border1_lod0D1Ev'
void __fastcall Ogre::OGLTech_Border1_lod0::~OGLTech_Border1_lod0(Ogre::OGLTech_Border1_lod0 *this)
{
  *(_DWORD *)this = &off_45AAD0;
  Ogre::Tech_Border1_lod0::~Tech_Border1_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Border1_lod0::~OGLTech_Border1_lod0()
// address: 0x00260A20   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Border1_lod0::~OGLTech_Border1_lod0(Ogre::OGLTech_Border1_lod0 *this)
{
  Ogre::OGLTech_Border1_lod0::~OGLTech_Border1_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Border1_lod0::endPass(void)
// address: 0x00261574   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Border1_lod0::endPass(Ogre::OGLTech_Border1_lod0 *this)
{
  j_glEnable(0xB44u);
  j_glEnable(0xB71u);
}


//======================================================================
// Ogre::OGLTech_Border1_lod0::clone(void)
// address: 0x00262A2C   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_Border1_lod0::clone(Ogre::OGLTech_Border1_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AAD0;
  return v1;
}


//======================================================================
// Ogre::OGLTech_Border1_lod0::beginPass(unsigned int)
// address: 0x0026308C   size: 0x1A (26 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Border1_lod0::beginPass(Ogre::OGLTech_Border1_lod0 *this, unsigned int a2)
{
  int v2; // r2

  j_glDisable(0xB44u);
  j_glDisable(0xB71u);
  Ogre::SetBlendState((Ogre *)((char *)&dword_0 + 2), -1, v2);
}

