// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTech_Uvanim2Layer_lod0

//======================================================================
// Ogre::OGLTech_Uvanim2Layer_lod0::~OGLTech_Uvanim2Layer_lod0()
// address: 0x00260BE4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre25OGLTech_Uvanim2Layer_lod0D1Ev'
void __fastcall Ogre::OGLTech_Uvanim2Layer_lod0::~OGLTech_Uvanim2Layer_lod0(Ogre::OGLTech_Uvanim2Layer_lod0 *this)
{
  *(_DWORD *)this = &off_45AC10;
  Ogre::Tech_Uvanim2Layer_lod0::~Tech_Uvanim2Layer_lod0(this);
}


//======================================================================
// Ogre::OGLTech_Uvanim2Layer_lod0::~OGLTech_Uvanim2Layer_lod0()
// address: 0x00260C00   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Uvanim2Layer_lod0::~OGLTech_Uvanim2Layer_lod0(Ogre::OGLTech_Uvanim2Layer_lod0 *this)
{
  Ogre::OGLTech_Uvanim2Layer_lod0::~OGLTech_Uvanim2Layer_lod0(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTech_Uvanim2Layer_lod0::endPass(void)
// address: 0x002615C4   size: 0xA (10 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Uvanim2Layer_lod0::endPass(Ogre::OGLTech_Uvanim2Layer_lod0 *this)
{
  j_glEnable(0xB44u);
}


//======================================================================
// Ogre::OGLTech_Uvanim2Layer_lod0::beginPass(unsigned int)
// address: 0x0026299C   size: 0x10 (16 bytes)
//======================================================================
void __fastcall Ogre::OGLTech_Uvanim2Layer_lod0::beginPass(Ogre::OGLTech_Uvanim2Layer_lod0 *this, unsigned int a2)
{
  j_glDisable(0xB44u);
  j_glDisable(0xBE2u);
}


//======================================================================
// Ogre::OGLTech_Uvanim2Layer_lod0::clone(void)
// address: 0x00262CD8   size: 0x1E (30 bytes)
//======================================================================
Ogre::TechPassData *__fastcall Ogre::OGLTech_Uvanim2Layer_lod0::clone(Ogre::OGLTech_Uvanim2Layer_lod0 *this)
{
  Ogre::TechPassData *v1; // r4

  v1 = (Ogre::TechPassData *)operator new(0x140u);
  Ogre::TechPassData::TechPassData(v1);
  *(_DWORD *)v1 = &off_45AC10;
  return v1;
}

