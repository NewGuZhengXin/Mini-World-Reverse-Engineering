// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::FixedSizePool

//======================================================================
// Ogre::FixedSizePool::FixedSizePool(unsigned int)
// address: 0x001593A4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13FixedSizePoolC1Ej'
unsigned int *__fastcall Ogre::FixedSizePool::FixedSizePool(unsigned int *this, unsigned int a2)
{
  *(this + 2) = (unsigned int)(this + 1);
  *(this + 1) = (unsigned int)(this + 1);
  *(this + 3) = 0;
  *(this + 4) = 0;
  *this = (a2 + 3) & 0xFFFFFFFC;
  return this;
}


//======================================================================
// Ogre::FixedSizePool::~FixedSizePool()
// address: 0x001593BA   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13FixedSizePoolD1Ev'
void __fastcall Ogre::FixedSizePool::~FixedSizePool(Ogre::FixedSizePool *this)
{
  _DWORD *i; // r0
  _DWORD *v3; // r4

  for ( i = *((_DWORD *)this + 1) != (_DWORD)this + 4 ? *((_DWORD **)this + 1) : nullptr; i != nullptr; i = v3 )
  {
    v3 = *i != (_DWORD)this + 4 ? (_DWORD *)*i : nullptr;
    j_free(i);
  }
}


//======================================================================
// Ogre::FixedSizePool::AllocAndInitChunk(void)
// address: 0x001593E8   size: 0x3C (60 bytes)
//======================================================================
_DWORD *__fastcall Ogre::FixedSizePool::AllocAndInitChunk(Ogre::FixedSizePool *this)
{
  _DWORD *result; // r0
  _DWORD *i; // r3
  unsigned int v4; // r2
  int v5; // r3
  int v6; // r3

  result = j_malloc(0x2000u);
  for ( i = result + 2; ; i = (_DWORD *)v4 )
  {
    v4 = (unsigned int)i + *(_DWORD *)this;
    if ( (unsigned int)(result + 2048) < v4 )
      break;
    *i = *((_DWORD *)this + 4);
    *((_DWORD *)this + 4) = i;
  }
  result[1] = (char *)this + 4;
  v5 = *((_DWORD *)this + 1);
  *result = v5;
  *(_DWORD *)(v5 + 4) = result;
  v6 = *((_DWORD *)this + 3);
  *((_DWORD *)this + 1) = result;
  *((_DWORD *)this + 3) = v6 + 1;
  return result;
}


//======================================================================
// Ogre::FixedSizePool::AllocUnit(void)
// address: 0x00159424   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall Ogre::FixedSizePool::AllocUnit(Ogre::FixedSizePool *this)
{
  _DWORD *result; // r0

  if ( *((_DWORD *)this + 4) == 0 )
    Ogre::FixedSizePool::AllocAndInitChunk(this);
  result = *((_DWORD **)this + 4);
  *((_DWORD *)this + 4) = *result;
  return result;
}


//======================================================================
// Ogre::FixedSizePool::FreeUnit(void *)
// address: 0x0015943A   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::FixedSizePool::FreeUnit(int this, _DWORD *a2)
{
  *a2 = *(_DWORD *)(this + 16);
  *(_DWORD *)(this + 16) = a2;
  return this;
}

