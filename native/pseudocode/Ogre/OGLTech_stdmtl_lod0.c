// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_stdmtl_lod0

//======================================================================
// Ogre::OGLTech_stdmtl_lod0::~OGLTech_stdmtl_lod0()
// address: 0x00260DC4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19OGLTech_stdmtl_lod0D1Ev'
void __fastcall Ogre::OGLTech_stdmtl_lod0::~OGLTech_stdmtl_lod0(Ogre::OGLTech_stdmtl_lod0 *this)
{
  *(_DWORD *)this = &off_45AD70;
  Ogre::Tech_stdmtl_lod0::~Tech_stdmtl_lod0(this);
}


//======================================================================
// Ogre::OGLTech_stdmtl_lod0::~OGLTech_stdmtl_lod0()
// address: 0x00260DE0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_stdmtl_lod0::~OGLTech_stdmtl_lod0(Ogre::OGLTech_stdmtl_lod0 *this)
{
  Ogre::OGLTech_stdmtl_lod0::~OGLTech_stdmtl_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_stdmtl_lod0::endPass(void)
// address: 0x00261648   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_stdmtl_lod0::endPass(Ogre::OGLTech_stdmtl_lod0 *this)
{
  j_glColorMask(1u, 1u, 1u, 1u);
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_stdmtl_lod0::beginPass(unsigned int)
// address: 0x002631E4   size: 0x84 (132 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_stdmtl_lod0::beginPass(Ogre::OGLTech_stdmtl_lod0 *this, unsigned int a2)
{
  int v4; // r2
  Ogre *v5; // r0
  int v6; // r1

  j_glEnable(0xB71u);
  if ( *((_BYTE *)this + 337) != 0 )
    j_glDisable(0xB44u);
  else
    j_glEnable(0xB44u);
  if ( *((_DWORD *)this + 78) > 1u && a2 == 0 )
  {
    j_glDisable(0xBE2u);
    j_glDepthMask(1u);
    j_glColorMask(0, 0, 0, 0);
    return;
  }
  v5 = (Ogre *)*((unsigned __int8 *)this + 336);
  if ( v5 != (Ogre *)((char *)&dword_0 + 1) )
  {
    v6 = -1;
    goto LABEL_11;
  }
  v6 = 85;
  if ( (unsigned int)*((unsigned __int8 *)this + 338) - 3 > 1 )
  {
LABEL_11:
    Ogre::SetBlendState(v5, v6, v4);
    goto LABEL_12;
  }
  j_glDisable(0xBE2u);
LABEL_12:
  j_glDepthMask(*((unsigned __int8 *)this + 336) <= 1u);
}


//======================================================================
// Ogre::OGLTech_stdmtl_lod0::clone(void)
// address: 0x00263760   size: 0x1E (30 bytes)
//======================================================================
Ogre::Tech_stdmtl_lod0 *__fastcall Ogre::OGLTech_stdmtl_lod0::clone(Ogre::OGLTech_stdmtl_lod0 *this)
{
  Ogre::Tech_stdmtl_lod0 *v1; // r4

  v1 = (Ogre::Tech_stdmtl_lod0 *)operator new(0x154u);
  Ogre::Tech_stdmtl_lod0::Tech_stdmtl_lod0(v1);
  *(_DWORD *)v1 = &off_45AD70;
  return v1;
}

