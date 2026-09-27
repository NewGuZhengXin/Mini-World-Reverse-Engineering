// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ShareMaterial

//======================================================================
// ShareMaterial::ShareMaterial(void)
// address: 0x002C1F50   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN13ShareMaterialC1Ev'
void __fastcall ShareMaterial::ShareMaterial(ShareMaterial *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
}


//======================================================================
// ShareMaterial::~ShareMaterial()
// address: 0x002C1F5A   size: 0x14 (20 bytes)
//======================================================================
// Alternative name is '_ZN13ShareMaterialD1Ev'
void __fastcall ShareMaterial::~ShareMaterial(ShareMaterial *this)
{
  Ogre::BaseObject::release(*(_DWORD **)this);
  Ogre::BaseObject::release(*((_DWORD **)this + 1));
}

