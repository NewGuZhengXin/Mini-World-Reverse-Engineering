// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_uielement_lod0

//======================================================================
// Ogre::OGLTech_uielement_lod0::~OGLTech_uielement_lod0()
// address: 0x00261064   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre22OGLTech_uielement_lod0D1Ev'
void __fastcall Ogre::OGLTech_uielement_lod0::~OGLTech_uielement_lod0(Ogre::OGLTech_uielement_lod0 *this)
{
  *(_DWORD *)this = &off_45AF10;
  Ogre::Tech_uielement_lod0::~Tech_uielement_lod0(this);
}


//======================================================================
// Ogre::OGLTech_uielement_lod0::~OGLTech_uielement_lod0()
// address: 0x00261080   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_uielement_lod0::~OGLTech_uielement_lod0(Ogre::OGLTech_uielement_lod0 *this)
{
  Ogre::OGLTech_uielement_lod0::~OGLTech_uielement_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_uielement_lod0::endPass(void)
// address: 0x002615D4   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_uielement_lod0::endPass(Ogre::OGLTech_uielement_lod0 *this)
{
  j_glEnable(0xB44u);
  j_glEnable(0xB71u);
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_uielement_lod0::beginPass(unsigned int)
// address: 0x002632D8   size: 0x24 (36 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_uielement_lod0::beginPass(Ogre::OGLTech_uielement_lod0 *this, unsigned int a2, int a3)
{
  Ogre::SetBlendState((Ogre *)*((unsigned __int8 *)this + 332), -1, a3);
  j_glDisable(0xB44u);
  j_glDisable(0xB71u);
  j_glDepthMask(0);
}


//======================================================================
// Ogre::OGLTech_uielement_lod0::clone(void)
// address: 0x00263814   size: 0x1E (30 bytes)
//======================================================================
Ogre::Tech_uielement_lod0 *__fastcall Ogre::OGLTech_uielement_lod0::clone(Ogre::OGLTech_uielement_lod0 *this)
{
  Ogre::Tech_uielement_lod0 *v1; // r4

  v1 = (Ogre::Tech_uielement_lod0 *)operator new(0x150u);
  Ogre::Tech_uielement_lod0::Tech_uielement_lod0(v1);
  *(_DWORD *)v1 = &off_45AF10;
  return v1;
}

