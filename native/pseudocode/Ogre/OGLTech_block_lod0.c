// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_block_lod0

//======================================================================
// Ogre::OGLTech_block_lod0::~OGLTech_block_lod0()
// address: 0x002606A4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLTech_block_lod0D1Ev'
void __fastcall Ogre::OGLTech_block_lod0::~OGLTech_block_lod0(Ogre::OGLTech_block_lod0 *this)
{
  *(_DWORD *)this = &off_45A8B0;
  Ogre::Tech_block_lod0::~Tech_block_lod0(this);
}


//======================================================================
// Ogre::OGLTech_block_lod0::~OGLTech_block_lod0()
// address: 0x002606C0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_block_lod0::~OGLTech_block_lod0(Ogre::OGLTech_block_lod0 *this)
{
  Ogre::OGLTech_block_lod0::~OGLTech_block_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_block_lod0::endPass(void)
// address: 0x002614D4   size: 0x14 (20 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_block_lod0::endPass(Ogre::OGLTech_block_lod0 *this)
{
  if ( *((unsigned __int8 *)this + 332) > 1u )
    j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_block_lod0::beginPass(unsigned int)
// address: 0x00262F38   size: 0x44 (68 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_block_lod0::beginPass(Ogre::OGLTech_block_lod0 *this, unsigned int a2)
{
  int v3; // r2
  Ogre *v4; // r0
  int v5; // r1

  j_glEnable(0xB71u);
  if ( *((_BYTE *)this + 333) != 0 )
    j_glDisable(0xB44u);
  else
    j_glEnable(0xB44u);
  v4 = (Ogre *)*((unsigned __int8 *)this + 332);
  v5 = 200;
  if ( v4 != (Ogre *)((char *)&dword_0 + 1) )
    v5 = -1;
  Ogre::SetBlendState(v4, v5, v3);
  if ( *((unsigned __int8 *)this + 332) > 1u )
    j_glDepthMask(0);
}


//======================================================================
// Ogre::OGLTech_block_lod0::clone(void)
// address: 0x00263418   size: 0x1E (30 bytes)
//======================================================================
Ogre::Tech_block_lod0 *__fastcall Ogre::OGLTech_block_lod0::clone(Ogre::OGLTech_block_lod0 *this)
{
  Ogre::Tech_block_lod0 *v1; // r4

  v1 = (Ogre::Tech_block_lod0 *)operator new(0x150u);
  Ogre::Tech_block_lod0::Tech_block_lod0(v1);
  *(_DWORD *)v1 = &off_45A8B0;
  return v1;
}

