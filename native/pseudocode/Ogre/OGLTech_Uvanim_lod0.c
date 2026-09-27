// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Uvanim_lod0

//======================================================================
// Ogre::OGLTech_Uvanim_lod0::~OGLTech_Uvanim_lod0()
// address: 0x00260B84   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19OGLTech_Uvanim_lod0D1Ev'
void __fastcall Ogre::OGLTech_Uvanim_lod0::~OGLTech_Uvanim_lod0(Ogre::OGLTech_Uvanim_lod0 *this)
{
  *(_DWORD *)this = &off_45ABD0;
  Ogre::Tech_Uvanim_lod0::~Tech_Uvanim_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Uvanim_lod0::~OGLTech_Uvanim_lod0()
// address: 0x00260BA0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Uvanim_lod0::~OGLTech_Uvanim_lod0(Ogre::OGLTech_Uvanim_lod0 *this)
{
  Ogre::OGLTech_Uvanim_lod0::~OGLTech_Uvanim_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Uvanim_lod0::endPass(void)
// address: 0x002615B0   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Uvanim_lod0::endPass(Ogre::OGLTech_Uvanim_lod0 *this)
{
  j_glEnable(0xB44u);
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_Uvanim_lod0::clone(void)
// address: 0x00262DF8   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_Uvanim_lod0::clone(Ogre::OGLTech_Uvanim_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x150u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45ABD0;
  return v1;
}


//======================================================================
// Ogre::OGLTech_Uvanim_lod0::beginPass(unsigned int)
// address: 0x00263110   size: 0x24 (36 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Uvanim_lod0::beginPass(Ogre **this, unsigned int a2, int a3)
{
  char *v3; // r4

  v3 = (char *)(this + 63);
  Ogre::SetBlendState(*(this + 80), -1, a3);
  if ( *((_DWORD *)v3 + 17) > 1u )
    j_glDepthMask(0);
  j_glDisable(0xB44u);
}

