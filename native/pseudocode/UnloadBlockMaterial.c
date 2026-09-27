// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: UnloadBlockMaterial

//======================================================================
// UnloadBlockMaterial::canBlocksMovement(World *,WCoord const&)
// address: 0x002BE068   size: 0x4 (4 bytes)
//======================================================================
int UnloadBlockMaterial::canBlocksMovement()
{
  return 1;
}


//======================================================================
// UnloadBlockMaterial::init(int)
// address: 0x002BE1B4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall UnloadBlockMaterial::init(UnloadBlockMaterial *this, int a2)
{
  int result; // r0

  *((_DWORD *)this + 1) = "unload";
  *((_DWORD *)this + 8) = a2;
  result = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a2);
  *((_DWORD *)this + 9) = result;
  return result;
}


//======================================================================
// UnloadBlockMaterial::~UnloadBlockMaterial()
// address: 0x002BE584   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN19UnloadBlockMaterialD1Ev'
void __fastcall UnloadBlockMaterial::~UnloadBlockMaterial(UnloadBlockMaterial *this)
{
  *(_DWORD *)this = &off_45ED90;
  BlockMaterial::~BlockMaterial(this);
}


//======================================================================
// UnloadBlockMaterial::~UnloadBlockMaterial()
// address: 0x002BE5A0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall UnloadBlockMaterial::~UnloadBlockMaterial(UnloadBlockMaterial *this)
{
  UnloadBlockMaterial::~UnloadBlockMaterial(this);
  operator delete(this);
}

