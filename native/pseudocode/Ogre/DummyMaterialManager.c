// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DummyMaterialManager

//======================================================================
// Ogre::DummyMaterialManager::newCompiledShader(Ogre::COMPILED_TYPE)
// address: 0x00167DF8   size: 0x4 (4 bytes)
//======================================================================
int Ogre::DummyMaterialManager::newCompiledShader()
{
  return 0;
}


//======================================================================
// Ogre::DummyMaterialManager::newShaderTechImpl(Ogre::TechPassData *)
// address: 0x00167DFC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::DummyMaterialManager::newShaderTechImpl(Ogre::DummyMaterialManager *this, Ogre::TechPassData *a2)
{
  return 0;
}


//======================================================================
// Ogre::DummyMaterialManager::~DummyMaterialManager()
// address: 0x00167E00   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre20DummyMaterialManagerD1Ev'
void __fastcall Ogre::DummyMaterialManager::~DummyMaterialManager(Ogre::DummyMaterialManager *this)
{
  *(_DWORD *)this = &off_456F68;
  Ogre::MaterialManager::~MaterialManager(this);
}


//======================================================================
// Ogre::DummyMaterialManager::~DummyMaterialManager()
// address: 0x00167E1C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DummyMaterialManager::~DummyMaterialManager(Ogre::DummyMaterialManager *this)
{
  Ogre::DummyMaterialManager::~DummyMaterialManager(this);
  operator delete(this);
}

