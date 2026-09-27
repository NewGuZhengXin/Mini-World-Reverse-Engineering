// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_bloom_lod0

//======================================================================
// Ogre::OGLTech_bloom_lod0::~OGLTech_bloom_lod0()
// address: 0x00261304   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLTech_bloom_lod0D1Ev'
void __fastcall Ogre::OGLTech_bloom_lod0::~OGLTech_bloom_lod0(Ogre::OGLTech_bloom_lod0 *this)
{
  *(_DWORD *)this = &off_45B0D0;
  Ogre::Tech_bloom_lod0::~Tech_bloom_lod0(this);
}


//======================================================================
// Ogre::OGLTech_bloom_lod0::~OGLTech_bloom_lod0()
// address: 0x00261320   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_bloom_lod0::~OGLTech_bloom_lod0(Ogre::OGLTech_bloom_lod0 *this)
{
  Ogre::OGLTech_bloom_lod0::~OGLTech_bloom_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_bloom_lod0::beginPass(unsigned int)
// address: 0x00262918   size: 0x14 (20 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_bloom_lod0::beginPass(Ogre::OGLTech_bloom_lod0 *this, unsigned int a2)
{
  Ogre::OGL_SetDefaultState(this);
  j_glDisable(0xBE2u);
  j_glDisable(0xB71u);
}


//======================================================================
// Ogre::OGLTech_bloom_lod0::endPass(void)
// address: 0x00262934   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::OGLTech_bloom_lod0::endPass(Ogre::OGLTech_bloom_lod0 *this)
{
  Ogre *v1; // r0

  j_glDisable(0xBE2u);
  j_glEnable(0xB71u);
  return Ogre::OGL_SetDefaultState(v1);
}


//======================================================================
// Ogre::OGLTech_bloom_lod0::clone(void)
// address: 0x00263884   size: 0x1E (30 bytes)
//======================================================================
Ogre::Tech_bloom_lod0 *__fastcall Ogre::OGLTech_bloom_lod0::clone(Ogre::OGLTech_bloom_lod0 *this)
{
  Ogre::Tech_bloom_lod0 *v1; // r4
  Ogre::FixedString *v2; // r1

  v1 = (Ogre::Tech_bloom_lod0 *)operator new(0x148u);
  Ogre::Tech_bloom_lod0::Tech_bloom_lod0(v1, v2);
  *(_DWORD *)v1 = &off_45B0D0;
  return v1;
}

