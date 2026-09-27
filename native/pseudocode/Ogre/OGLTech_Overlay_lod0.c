// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Overlay_lod0

//======================================================================
// Ogre::OGLTech_Overlay_lod0::~OGLTech_Overlay_lod0()
// address: 0x00260A64   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20OGLTech_Overlay_lod0D1Ev'
void __fastcall Ogre::OGLTech_Overlay_lod0::~OGLTech_Overlay_lod0(Ogre::OGLTech_Overlay_lod0 *this)
{
  *(_DWORD *)this = &off_45AB10;
  Ogre::Tech_Overlay_lod0::~Tech_Overlay_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Overlay_lod0::~OGLTech_Overlay_lod0()
// address: 0x00260A80   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Overlay_lod0::~OGLTech_Overlay_lod0(Ogre::OGLTech_Overlay_lod0 *this)
{
  Ogre::OGLTech_Overlay_lod0::~OGLTech_Overlay_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Overlay_lod0::endPass(void)
// address: 0x002616CC   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Overlay_lod0::endPass(Ogre::OGLTech_Overlay_lod0 *this)
{
  j_glDepthMask(1u);
  j_glDepthFunc(0x201u);
  j_glEnable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_Overlay_lod0::clone(void)
// address: 0x00262A08   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_Overlay_lod0::clone(Ogre::OGLTech_Overlay_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AB10;
  return v1;
}


//======================================================================
// Ogre::OGLTech_Overlay_lod0::beginPass(unsigned int)
// address: 0x002630B0   size: 0x28 (40 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Overlay_lod0::beginPass(Ogre::OGLTech_Overlay_lod0 *this, unsigned int a2, int a3)
{
  Ogre::SetBlendState((Ogre *)*((unsigned __int8 *)this + 320), 0, a3);
  j_glEnable(0xB71u);
  j_glDepthMask(0);
  j_glDepthFunc(0x202u);
  j_glDisable(0xB44u);
}

