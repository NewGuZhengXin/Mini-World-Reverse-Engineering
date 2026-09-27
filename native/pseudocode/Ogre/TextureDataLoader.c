// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TextureDataLoader

//======================================================================
// Ogre::TextureDataLoader::~TextureDataLoader()
// address: 0x001888E8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17TextureDataLoaderD1Ev'
void __fastcall Ogre::TextureDataLoader::~TextureDataLoader(Ogre::TextureDataLoader *this)
{
  *(_DWORD *)this = &off_458018;
  Ogre::MultiLoader::~MultiLoader(this);
}


//======================================================================
// Ogre::TextureDataLoader::~TextureDataLoader()
// address: 0x00188904   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::TextureDataLoader::~TextureDataLoader(Ogre::TextureDataLoader *this)
{
  Ogre::TextureDataLoader::~TextureDataLoader(this);
  operator delete(this);
}


//======================================================================
// Ogre::TextureDataLoader::setModel(Ogre::Model *)
// address: 0x00189E50   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::TextureDataLoader::setModel(int this, Ogre::Model *a2)
{
  *(_DWORD *)(this + 32) = a2;
  return this;
}


//======================================================================
// Ogre::TextureDataLoader::onComplete(unsigned int,Ogre::Resource **,unsigned int *)
// address: 0x0018A30E   size: 0x2E (46 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::TextureDataLoader::onComplete(
        Ogre::Model **this,
        unsigned int a2,
        Ogre::Resource **a3,
        unsigned int *a4)
{
  int v5; // r0
  Ogre::Texture *v6; // r4
  Ogre::Model *result; // r0

  v5 = (*((int (__fastcall **)(Ogre::Model **, unsigned int, Ogre::Resource **))*this + 4))(this, a2, a3);
  v6 = (Ogre::Texture *)v5;
  if ( v5 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  result = *(this + 8);
  if ( result != nullptr )
    result = (Ogre::Model *)Ogre::Model::setTextureData(result, v6, (Ogre::TextureDataLoader *)this);
  if ( v6 != nullptr )
    return (Ogre::Model *)Ogre::BaseObject::release(v6);
  return result;
}

