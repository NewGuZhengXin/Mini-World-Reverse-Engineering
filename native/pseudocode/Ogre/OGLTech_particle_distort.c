// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_particle_distort

//======================================================================
// Ogre::OGLTech_particle_distort::~OGLTech_particle_distort()
// address: 0x00260B24   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24OGLTech_particle_distortD1Ev'
void __fastcall Ogre::OGLTech_particle_distort::~OGLTech_particle_distort(Ogre::OGLTech_particle_distort *this)
{
  *(_DWORD *)this = &off_45AB90;
  Ogre::Tech_particle_distort::~Tech_particle_distort(this);
}


//======================================================================
// Ogre::OGLTech_particle_distort::~OGLTech_particle_distort()
// address: 0x00260B40   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_particle_distort::~OGLTech_particle_distort(Ogre::OGLTech_particle_distort *this)
{
  Ogre::OGLTech_particle_distort::~OGLTech_particle_distort(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_particle_distort::endPass(void)
// address: 0x002615A0   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_particle_distort::endPass(Ogre::OGLTech_particle_distort *this)
{
  j_glEnable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_particle_distort::beginPass(unsigned int)
// address: 0x00262984   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_particle_distort::beginPass(Ogre::OGLTech_particle_distort *this, unsigned int a2)
{
  j_glDisable(0xBE2u);
  j_glDisable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_particle_distort::clone(void)
// address: 0x00262DD4   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_particle_distort::clone(Ogre::OGLTech_particle_distort *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x144u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AB90;
  return v1;
}

