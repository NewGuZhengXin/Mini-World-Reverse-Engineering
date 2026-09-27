// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Back0_lod0

//======================================================================
// Ogre::OGLTech_Back0_lod0::~OGLTech_Back0_lod0()
// address: 0x002608E4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLTech_Back0_lod0D1Ev'
void __fastcall Ogre::OGLTech_Back0_lod0::~OGLTech_Back0_lod0(Ogre::OGLTech_Back0_lod0 *this)
{
  *(_DWORD *)this = &off_45AA30;
  Ogre::Tech_Back0_lod0::~Tech_Back0_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Back0_lod0::~OGLTech_Back0_lod0()
// address: 0x00260900   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Back0_lod0::~OGLTech_Back0_lod0(Ogre::OGLTech_Back0_lod0 *this)
{
  Ogre::OGLTech_Back0_lod0::~OGLTech_Back0_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Back0_lod0::endPass(void)
// address: 0x002616A4   size: 0x24 (36 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Back0_lod0::endPass(Ogre::OGLTech_Back0_lod0 *this)
{
  j_glColorMask(1u, 1u, 1u, 1u);
  j_glDisable(0xB90u);
  j_glDepthMask(1u);
  j_glDepthFunc(0x203u);
}


//======================================================================
// Ogre::OGLTech_Back0_lod0::beginPass(unsigned int)
// address: 0x0026302C   size: 0x50 (80 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Back0_lod0::beginPass(Ogre::OGLTech_Back0_lod0 *this, unsigned int a2)
{
  int v3; // r2

  j_glColorMask(0, 0, 0, 0);
  j_glDepthFunc(0x202u);
  j_glDepthMask(0);
  j_glEnable(0xB90u);
  j_glStencilFunc(0x207u, 1, 1u);
  j_glStencilOp(0x1E00u, 0x1E01u, 0x1E01u);
  Ogre::SetBlendState((Ogre *)*((unsigned __int8 *)this + 324), -1, v3);
  j_glDisable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_Back0_lod0::clone(void)
// address: 0x002635F8   size: 0x1E (30 bytes)
//======================================================================
Ogre::Tech_Back0_lod0 *__fastcall Ogre::OGLTech_Back0_lod0::clone(Ogre::OGLTech_Back0_lod0 *this)
{
  Ogre::Tech_Back0_lod0 *v1; // r4
  Ogre::FixedString *v2; // r1

  v1 = (Ogre::Tech_Back0_lod0 *)operator new(0x148u);
  Ogre::Tech_Back0_lod0::Tech_Back0_lod0(v1, v2);
  *(_DWORD *)v1 = &off_45AA30;
  return v1;
}

