// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_block_shadowgen

//======================================================================
// Ogre::OGLTech_block_shadowgen::~OGLTech_block_shadowgen()
// address: 0x00260704   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre23OGLTech_block_shadowgenD1Ev'
void __fastcall Ogre::OGLTech_block_shadowgen::~OGLTech_block_shadowgen(Ogre::OGLTech_block_shadowgen *this)
{
  *(_DWORD *)this = &off_45A8D0;
  Ogre::Tech_block_shadowgen::~Tech_block_shadowgen(this);
}


//======================================================================
// Ogre::OGLTech_block_shadowgen::~OGLTech_block_shadowgen()
// address: 0x00260720   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_block_shadowgen::~OGLTech_block_shadowgen(Ogre::OGLTech_block_shadowgen *this)
{
  Ogre::OGLTech_block_shadowgen::~OGLTech_block_shadowgen(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_block_shadowgen::endPass(void)
// address: 0x00261618   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_block_shadowgen::endPass(Ogre::OGLTech_block_shadowgen *this)
{
  j_glColorMask(1u, 1u, 1u, 1u);
}


//======================================================================
// Ogre::OGLTech_block_shadowgen::beginPass(unsigned int)
// address: 0x00262794   size: 0x34 (52 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_block_shadowgen::beginPass(Ogre::OGLTech_block_shadowgen *this, unsigned int a2)
{
  j_glColorMask(0, 0, 0, 0);
  j_glEnable(0xB71u);
  if ( *((_BYTE *)this + 324) != 0 )
    j_glDisable(0xB44u);
  else
    j_glEnable(0xB44u);
  j_glDisable(0xBE2u);
}


//======================================================================
// Ogre::OGLTech_block_shadowgen::clone(void)
// address: 0x00263488   size: 0x1E (30 bytes)
//======================================================================
Ogre::Tech_block_shadowgen *__fastcall Ogre::OGLTech_block_shadowgen::clone(Ogre::OGLTech_block_shadowgen *this)
{
  Ogre::Tech_block_shadowgen *v1; // r4
  Ogre::FixedString *v2; // r1

  v1 = (Ogre::Tech_block_shadowgen *)operator new(0x148u);
  Ogre::Tech_block_shadowgen::Tech_block_shadowgen(v1, v2);
  *(_DWORD *)v1 = &off_45A8D0;
  return v1;
}

