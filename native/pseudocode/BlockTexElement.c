// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockTexElement

//======================================================================
// BlockTexElement::BlockTexElement(void)
// address: 0x002C1EE0   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN15BlockTexElementC1Ev'
void __fastcall BlockTexElement::BlockTexElement(BlockTexElement *this)
{
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 7) = 1;
  *((_DWORD *)this + 8) = 1;
  *((_DWORD *)this + 3) = 1065353216;
  *((_DWORD *)this + 2) = 1065353216;
}


//======================================================================
// BlockTexElement::~BlockTexElement()
// address: 0x002C1F06   size: 0x38 (56 bytes)
//======================================================================
// Alternative name is '_ZN15BlockTexElementD1Ev'
void __fastcall BlockTexElement::~BlockTexElement(BlockTexElement *this)
{
  _DWORD *v2; // r0
  unsigned int i; // r5
  _DWORD **v4; // r0

  v2 = *((_DWORD **)this + 9);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 9) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD ***)this + 10);
    if ( i >= (*((_DWORD *)this + 11) - (int)v4) >> 2 )
      break;
    Ogre::BaseObject::release(v4[i]);
  }
  if ( v4 != nullptr )
    operator delete(v4);
}


//======================================================================
// BlockTexElement::getTexture(int)
// address: 0x002C1F3E   size: 0x12 (18 bytes)
//======================================================================
int __fastcall BlockTexElement::getTexture(BlockTexElement *this, int a2)
{
  int v2; // r3

  v2 = *((_DWORD *)this + 9);
  if ( v2 == 0 )
    return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 10));
  return v2;
}

