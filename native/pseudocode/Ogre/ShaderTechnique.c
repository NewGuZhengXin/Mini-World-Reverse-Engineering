// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ShaderTechnique

//======================================================================
// Ogre::ShaderTechnique::~ShaderTechnique()
// address: 0x00159154   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15ShaderTechniqueD1Ev'
void __fastcall Ogre::ShaderTechnique::~ShaderTechnique(Ogre::ShaderTechnique *this)
{
  *(_DWORD *)this = &off_456690;
}


//======================================================================
// Ogre::ShaderTechnique::~ShaderTechnique()
// address: 0x001591D8   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::ShaderTechnique::~ShaderTechnique(Ogre::ShaderTechnique *this)
{
  *(_DWORD *)this = &off_456690;
  operator delete(this);
}

