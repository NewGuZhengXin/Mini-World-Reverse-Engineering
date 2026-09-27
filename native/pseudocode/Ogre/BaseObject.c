// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BaseObject

//======================================================================
// Ogre::BaseObject::getRTTI(void)const
// address: 0x0013FAA0   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::BaseObject::getRTTI(Ogre::BaseObject *this)
{
  return &Ogre::BaseObject::m_RTTI;
}


//======================================================================
// Ogre::BaseObject::addRef(void)
// address: 0x0013FAAC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::BaseObject::addRef(int this)
{
  ++*(_DWORD *)(this + 4);
  return this;
}


//======================================================================
// Ogre::BaseObject::getRefCount(void)
// address: 0x0013FAB4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::BaseObject::getRefCount(Ogre::BaseObject *this)
{
  return *((_DWORD *)this + 1);
}


//======================================================================
// Ogre::BaseObject::_serialize(Ogre::Archive &,int)
// address: 0x0013FAB8   size: 0x2 (2 bytes)
//======================================================================
void Ogre::BaseObject::_serialize()
{
  ;
}


//======================================================================
// Ogre::BaseObject::~BaseObject()
// address: 0x0013FABC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10BaseObjectD1Ev'
void __fastcall Ogre::BaseObject::~BaseObject(Ogre::BaseObject *this)
{
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::BaseObject::deleteThis(void)
// address: 0x0013FACC   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::BaseObject::deleteThis(int this)
{
  if ( this != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)this + 20))(this);
  return this;
}


//======================================================================
// Ogre::BaseObject::~BaseObject()
// address: 0x0013FB08   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::BaseObject::~BaseObject(Ogre::BaseObject *this)
{
  *(_DWORD *)this = &off_4559C0;
  operator delete(this);
}


//======================================================================
// Ogre::BaseObject::release(void)
// address: 0x0013FC42   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall Ogre::BaseObject::release(_DWORD *this)
{
  int v1; // r3

  v1 = *(this + 1) - 1;
  *(this + 1) = v1;
  if ( v1 <= 0 )
    return (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*this + 24))(this);
  return this;
}


//======================================================================
// Ogre::BaseObject::isKindOf(Ogre::RuntimeClass const*)const
// address: 0x0018615C   size: 0x1A (26 bytes)
//======================================================================
const Ogre::RuntimeClass *__fastcall Ogre::BaseObject::isKindOf(Ogre::BaseObject *this, const Ogre::RuntimeClass *a2)
{
  const Ogre::RuntimeClass *result; // r0

  for ( result = (const Ogre::RuntimeClass *)(**(int (__fastcall ***)(Ogre::BaseObject *))this)(this);
        result != nullptr;
        result = *((const Ogre::RuntimeClass **)result + 1) )
  {
    if ( result == a2 )
      return (const Ogre::RuntimeClass *)(&dword_0 + 1);
  }
  return result;
}

