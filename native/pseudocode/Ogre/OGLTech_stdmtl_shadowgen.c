// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_stdmtl_shadowgen

//======================================================================
// Ogre::OGLTech_stdmtl_shadowgen::~OGLTech_stdmtl_shadowgen()
// address: 0x00260E24   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24OGLTech_stdmtl_shadowgenD1Ev'
void __fastcall Ogre::OGLTech_stdmtl_shadowgen::~OGLTech_stdmtl_shadowgen(Ogre::OGLTech_stdmtl_shadowgen *this)
{
  *(_DWORD *)this = &off_45AD90;
  Ogre::Tech_stdmtl_shadowgen::~Tech_stdmtl_shadowgen(this);
}


//======================================================================
// Ogre::OGLTech_stdmtl_shadowgen::~OGLTech_stdmtl_shadowgen()
// address: 0x00260E40   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_stdmtl_shadowgen::~OGLTech_stdmtl_shadowgen(Ogre::OGLTech_stdmtl_shadowgen *this)
{
  Ogre::OGLTech_stdmtl_shadowgen::~OGLTech_stdmtl_shadowgen(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_stdmtl_shadowgen::endPass(void)
// address: 0x0026165E   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_stdmtl_shadowgen::endPass(Ogre::OGLTech_stdmtl_shadowgen *this)
{
  j_glColorMask(1u, 1u, 1u, 1u);
}


//======================================================================
// Ogre::OGLTech_stdmtl_shadowgen::beginPass(unsigned int)
// address: 0x002627D4   size: 0x3A (58 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_stdmtl_shadowgen::beginPass(Ogre::OGLTech_stdmtl_shadowgen *this, unsigned int a2)
{
  j_glColorMask(0, 0, 0, 0);
  j_glEnable(0xB71u);
  j_glDepthMask(1u);
  j_glDisable(0xBE2u);
  if ( *((_BYTE *)this + 320) != 0 )
    j_glDisable(0xB44u);
  else
    j_glEnable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_stdmtl_shadowgen::clone(void)
// address: 0x00262AE0   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_stdmtl_shadowgen::clone(Ogre::OGLTech_stdmtl_shadowgen *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AD90;
  return v1;
}

