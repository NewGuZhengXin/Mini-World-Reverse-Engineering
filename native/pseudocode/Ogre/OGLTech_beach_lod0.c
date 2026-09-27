// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_beach_lod0

//======================================================================
// Ogre::OGLTech_beach_lod0::~OGLTech_beach_lod0()
// address: 0x002613C4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLTech_beach_lod0D1Ev'
void __fastcall Ogre::OGLTech_beach_lod0::~OGLTech_beach_lod0(Ogre::OGLTech_beach_lod0 *this)
{
  *(_DWORD *)this = &off_45B150;
  Ogre::Tech_beach_lod0::~Tech_beach_lod0(this);
}


//======================================================================
// Ogre::OGLTech_beach_lod0::~OGLTech_beach_lod0()
// address: 0x002613E0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_beach_lod0::~OGLTech_beach_lod0(Ogre::OGLTech_beach_lod0 *this)
{
  Ogre::OGLTech_beach_lod0::~OGLTech_beach_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_beach_lod0::endPass(void)
// address: 0x00262760   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_beach_lod0::endPass(Ogre::OGLTech_beach_lod0 *this)
{
  j_glDisable(0xBE2u);
}


//======================================================================
// Ogre::OGLTech_beach_lod0::beginPass(unsigned int)
// address: 0x0026335C   size: 0x26 (38 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_beach_lod0::beginPass(Ogre::OGLTech_beach_lod0 *this, unsigned int a2, int a3)
{
  if ( *((_BYTE *)this + 324) != 0 )
    sub_26179C(4);
  else
    Ogre::SetBlendState((Ogre *)((char *)&dword_0 + 2), -1, a3);
  j_glDisable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_beach_lod0::clone(void)
// address: 0x002638F4   size: 0x1E (30 bytes)
//======================================================================
Ogre::Tech_beach_lod0 *__fastcall Ogre::OGLTech_beach_lod0::clone(Ogre::OGLTech_beach_lod0 *this)
{
  Ogre::Tech_beach_lod0 *v1; // r4
  Ogre::FixedString *v2; // r1

  v1 = (Ogre::Tech_beach_lod0 *)operator new(0x148u);
  Ogre::Tech_beach_lod0::Tech_beach_lod0(v1, v2);
  *(_DWORD *)v1 = &off_45B150;
  return v1;
}

