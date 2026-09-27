// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_decal_lod0

//======================================================================
// Ogre::OGLTech_decal_lod0::~OGLTech_decal_lod0()
// address: 0x00261184   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLTech_decal_lod0D1Ev'
void __fastcall Ogre::OGLTech_decal_lod0::~OGLTech_decal_lod0(Ogre::OGLTech_decal_lod0 *this)
{
  *(_DWORD *)this = &off_45AFF0;
  Ogre::Tech_decal_lod0::~Tech_decal_lod0(this);
}


//======================================================================
// Ogre::OGLTech_decal_lod0::~OGLTech_decal_lod0()
// address: 0x002611A0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_decal_lod0::~OGLTech_decal_lod0(Ogre::OGLTech_decal_lod0 *this)
{
  Ogre::OGLTech_decal_lod0::~OGLTech_decal_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_decal_lod0::endPass(void)
// address: 0x00262898   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_decal_lod0::endPass(Ogre::OGLTech_decal_lod0 *this)
{
  j_glDisable(0xBE2u);
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_decal_lod0::clone(void)
// address: 0x00262C48   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_decal_lod0::clone(Ogre::OGLTech_decal_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AFF0;
  return v1;
}


//======================================================================
// Ogre::OGLTech_decal_lod0::beginPass(unsigned int)
// address: 0x00263304   size: 0x28 (40 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_decal_lod0::beginPass(Ogre::OGLTech_decal_lod0 *this, unsigned int a2, int a3)
{
  Ogre::SetBlendState((Ogre *)*((unsigned __int8 *)this + 320), -1, a3);
  j_glDepthMask(*((unsigned __int8 *)this + 320) <= 1u);
  j_glDisable(0xB44u);
}

