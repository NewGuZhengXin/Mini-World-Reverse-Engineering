// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: `non-virtual_thunk_to'Ogre::Entity

//======================================================================
// `non-virtual thunk to'Ogre::Entity::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x0018DF34   size: 0x10 (16 bytes)
//======================================================================
void __fastcall `non-virtual thunk to'Ogre::Entity::ResourceLoaded(
        Ogre::Entity *this,
        Ogre::ModelData **a2,
        unsigned int a3)
{
  Ogre::Entity::ResourceLoaded((Ogre::Entity *)((char *)this - 252), a2, a3);
}


//======================================================================
// `non-virtual thunk to'Ogre::Entity::~Entity()
// address: 0x0018E5CC   size: 0x10 (16 bytes)
//======================================================================
void __fastcall `non-virtual thunk to'Ogre::Entity::~Entity(Ogre::Entity *this)
{
  Ogre::Entity::~Entity((int)this - 252);
}


//======================================================================
// `non-virtual thunk to'Ogre::Entity::~Entity()
// address: 0x0018E5F4   size: 0x10 (16 bytes)
//======================================================================
void __fastcall `non-virtual thunk to'Ogre::Entity::~Entity(Ogre::Entity *this)
{
  Ogre::Entity::~Entity((Ogre::Entity *)((char *)this - 252));
}

