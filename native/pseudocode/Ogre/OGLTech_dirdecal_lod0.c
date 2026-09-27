// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_dirdecal_lod0

//======================================================================
// Ogre::OGLTech_dirdecal_lod0::~OGLTech_dirdecal_lod0()
// address: 0x00261364   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21OGLTech_dirdecal_lod0D1Ev'
void __fastcall Ogre::OGLTech_dirdecal_lod0::~OGLTech_dirdecal_lod0(Ogre::OGLTech_dirdecal_lod0 *this)
{
  *(_DWORD *)this = &off_45B110;
  Ogre::Tech_dirdecal_lod0::~Tech_dirdecal_lod0(this);
}


//======================================================================
// Ogre::OGLTech_dirdecal_lod0::~OGLTech_dirdecal_lod0()
// address: 0x00261380   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_dirdecal_lod0::~OGLTech_dirdecal_lod0(Ogre::OGLTech_dirdecal_lod0 *this)
{
  Ogre::OGLTech_dirdecal_lod0::~OGLTech_dirdecal_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_dirdecal_lod0::endPass(void)
// address: 0x00262950   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_dirdecal_lod0::endPass(Ogre::OGLTech_dirdecal_lod0 *this)
{
  j_glDisable(0xBE2u);
}


//======================================================================
// Ogre::OGLTech_dirdecal_lod0::clone(void)
// address: 0x00262C6C   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_dirdecal_lod0::clone(Ogre::OGLTech_dirdecal_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45B110;
  return v1;
}


//======================================================================
// Ogre::OGLTech_dirdecal_lod0::beginPass(unsigned int)
// address: 0x00263330   size: 0x26 (38 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_dirdecal_lod0::beginPass(Ogre::OGLTech_dirdecal_lod0 *this, unsigned int a2, int a3)
{
  if ( *((_BYTE *)this + 320) != 0 )
    sub_26179C(4);
  else
    Ogre::SetBlendState((Ogre *)((char *)&dword_0 + 2), -1, a3);
  j_glDisable(0xB44u);
}

