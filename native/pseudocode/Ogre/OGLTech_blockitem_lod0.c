// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_blockitem_lod0

//======================================================================
// Ogre::OGLTech_blockitem_lod0::~OGLTech_blockitem_lod0()
// address: 0x002607C4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre22OGLTech_blockitem_lod0D1Ev'
void __fastcall Ogre::OGLTech_blockitem_lod0::~OGLTech_blockitem_lod0(Ogre::OGLTech_blockitem_lod0 *this)
{
  *(_DWORD *)this = &off_45A950;
  Ogre::Tech_blockitem_lod0::~Tech_blockitem_lod0(this);
}


//======================================================================
// Ogre::OGLTech_blockitem_lod0::~OGLTech_blockitem_lod0()
// address: 0x002607E0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_blockitem_lod0::~OGLTech_blockitem_lod0(Ogre::OGLTech_blockitem_lod0 *this)
{
  Ogre::OGLTech_blockitem_lod0::~OGLTech_blockitem_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_blockitem_lod0::endPass(void)
// address: 0x002614F2   size: 0x14 (20 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_blockitem_lod0::endPass(Ogre::OGLTech_blockitem_lod0 *this)
{
  if ( *((unsigned __int8 *)this + 324) > 1u )
    j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_blockitem_lod0::beginPass(unsigned int)
// address: 0x00262FD0   size: 0x2E (46 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_blockitem_lod0::beginPass(Ogre::OGLTech_blockitem_lod0 *this, unsigned int a2)
{
  int v3; // r2
  Ogre *v4; // r0
  int v5; // r1

  j_glEnable(0xB71u);
  v4 = (Ogre *)*((unsigned __int8 *)this + 324);
  v5 = 150;
  if ( v4 != (Ogre *)((char *)&dword_0 + 1) )
    v5 = -1;
  Ogre::SetBlendState(v4, v5, v3);
  if ( *((unsigned __int8 *)this + 324) > 1u )
    j_glDepthMask(0);
}


//======================================================================
// Ogre::OGLTech_blockitem_lod0::clone(void)
// address: 0x00263588   size: 0x1E (30 bytes)
//======================================================================
Ogre::Tech_blockitem_lod0 *__fastcall Ogre::OGLTech_blockitem_lod0::clone(Ogre::OGLTech_blockitem_lod0 *this)
{
  Ogre::Tech_blockitem_lod0 *v1; // r4
  Ogre::FixedString *v2; // r1

  v1 = (Ogre::Tech_blockitem_lod0 *)operator new(0x148u);
  Ogre::Tech_blockitem_lod0::Tech_blockitem_lod0(v1, v2);
  *(_DWORD *)v1 = &off_45A950;
  return v1;
}

