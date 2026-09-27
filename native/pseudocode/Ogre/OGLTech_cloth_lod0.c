// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_cloth_lod0

//======================================================================
// Ogre::OGLTech_cloth_lod0::~OGLTech_cloth_lod0()
// address: 0x00260D04   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLTech_cloth_lod0D1Ev'
void __fastcall Ogre::OGLTech_cloth_lod0::~OGLTech_cloth_lod0(Ogre::OGLTech_cloth_lod0 *this)
{
  *(_DWORD *)this = &off_45ACF0;
  Ogre::Tech_cloth_lod0::~Tech_cloth_lod0(this);
}


//======================================================================
// Ogre::OGLTech_cloth_lod0::~OGLTech_cloth_lod0()
// address: 0x00260D20   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_cloth_lod0::~OGLTech_cloth_lod0(Ogre::OGLTech_cloth_lod0 *this)
{
  Ogre::OGLTech_cloth_lod0::~OGLTech_cloth_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_cloth_lod0::clone(void)
// address: 0x00262CFC   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_cloth_lod0::clone(Ogre::OGLTech_cloth_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45ACF0;
  return v1;
}


//======================================================================
// Ogre::OGLTech_cloth_lod0::endPass(void)
// address: 0x00262E84   size: 0x3A (58 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_cloth_lod0::endPass(Ogre::OGLTech_cloth_lod0 *this)
{
  unsigned int v2; // r2
  unsigned int v3; // r2
  unsigned int v4; // r2

  j_glColorMask(1u, 1u, 1u, 1u);
  j_glDepthMask(1u);
  Ogre::SetSamplerTexture((Ogre *)((char *)&dword_0 + 1), 0, v2);
  if ( *((_BYTE *)this + 323) != 0 )
  {
    Ogre::SetSamplerTexture((Ogre *)((char *)&dword_0 + 3), 0, v3);
    Ogre::SetSamplerTexture((Ogre *)&byte_4, 0, v4);
  }
}


//======================================================================
// Ogre::OGLTech_cloth_lod0::beginPass(unsigned int)
// address: 0x00263160   size: 0x78 (120 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_cloth_lod0::beginPass(Ogre::OGLTech_cloth_lod0 *this, unsigned int a2)
{
  int v4; // r2
  Ogre *v5; // r0
  int v6; // r1

  j_glEnable(0xB71u);
  if ( *((_BYTE *)this + 321) != 0 )
    j_glDisable(0xB44u);
  if ( *((_DWORD *)this + 78) > 1u && a2 == 0 )
  {
    j_glDisable(0xBE2u);
    j_glColorMask(0, 0, 0, 0);
    return;
  }
  v5 = (Ogre *)*((unsigned __int8 *)this + 320);
  if ( v5 != (Ogre *)((char *)&dword_0 + 1) )
  {
    v6 = -1;
    goto LABEL_10;
  }
  v6 = 85;
  if ( (unsigned int)*((unsigned __int8 *)this + 322) - 3 > 1 )
  {
LABEL_10:
    Ogre::SetBlendState(v5, v6, v4);
    goto LABEL_11;
  }
  j_glDisable(0xBE2u);
LABEL_11:
  j_glDepthMask(*((unsigned __int8 *)this + 320) <= 1u);
}

