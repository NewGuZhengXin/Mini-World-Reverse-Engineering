// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Particle_lod0

//======================================================================
// Ogre::OGLTech_Particle_lod0::~OGLTech_Particle_lod0()
// address: 0x00260AC4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre21OGLTech_Particle_lod0D1Ev'
void __fastcall Ogre::OGLTech_Particle_lod0::~OGLTech_Particle_lod0(Ogre::OGLTech_Particle_lod0 *this)
{
  *(_DWORD *)this = &off_45AB70;
  Ogre::Tech_Particle_lod0::~Tech_Particle_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Particle_lod0::~OGLTech_Particle_lod0()
// address: 0x00260AE0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Particle_lod0::~OGLTech_Particle_lod0(Ogre::OGLTech_Particle_lod0 *this)
{
  Ogre::OGLTech_Particle_lod0::~OGLTech_Particle_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Particle_lod0::endPass(void)
// address: 0x0026158C   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Particle_lod0::endPass(Ogre::OGLTech_Particle_lod0 *this)
{
  j_glEnable(0xB44u);
  j_glDepthMask(1u);
}


//======================================================================
// Ogre::OGLTech_Particle_lod0::beginPass(unsigned int)
// address: 0x002630E4   size: 0x26 (38 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Particle_lod0::beginPass(Ogre::OGLTech_Particle_lod0 *this, unsigned int a2)
{
  int v3; // r2

  j_glDisable(0xB44u);
  Ogre::SetBlendState((Ogre *)*((unsigned __int8 *)this + 328), -1, v3);
  if ( *((unsigned __int8 *)this + 328) > 1u )
    j_glDepthMask(0);
}


//======================================================================
// Ogre::OGLTech_Particle_lod0::clone(void)
// address: 0x00263688   size: 0x1E (30 bytes)
//======================================================================
Ogre::Tech_Particle_lod0 *__fastcall Ogre::OGLTech_Particle_lod0::clone(Ogre::OGLTech_Particle_lod0 *this)
{
  Ogre::Tech_Particle_lod0 *v1; // r4
  Ogre::FixedString *v2; // r1
  Ogre::FixedString *v3; // r2

  v1 = (Ogre::Tech_Particle_lod0 *)operator new(0x14Cu);
  Ogre::Tech_Particle_lod0::Tech_Particle_lod0(v1, v2, v3);
  *(_DWORD *)v1 = &off_45AB70;
  return v1;
}

