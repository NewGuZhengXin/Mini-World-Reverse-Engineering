// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BitArray1D

//======================================================================
// Ogre::BitArray1D::setPixel(unsigned int,unsigned int)
// address: 0x0017E518   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::BitArray1D::setPixel(Ogre::BitArray1D *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r1
  char v4; // r4
  unsigned int *v5; // r1
  int v6; // r3
  int result; // r0

  v3 = a2 * *((_DWORD *)this + 2);
  v4 = v3 & 0x1F;
  v5 = (unsigned int *)(*(_DWORD *)this + 4 * (v3 >> 5));
  v6 = *((_DWORD *)this + 3) << v4;
  result = *v5 & ~v6;
  *v5 = v6 & (a3 << v4) | result;
  return result;
}


//======================================================================
// Ogre::BitArray1D::getPixel(unsigned int)const
// address: 0x0017E53C   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::BitArray1D::getPixel(Ogre::BitArray1D *this, unsigned int a2)
{
  return *((_DWORD *)this + 3)
       & (*(_DWORD *)(4 * ((a2 * *((_DWORD *)this + 2)) >> 5) + *(_DWORD *)this) >> ((a2 * *((_BYTE *)this + 8)) & 0x1F));
}


//======================================================================
// Ogre::BitArray1D::BitArray1D(Ogre::BitArray1D const&)
// address: 0x0017E570   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10BitArray1DC1ERKS0_'
Ogre::BitArray1D *__fastcall Ogre::BitArray1D::BitArray1D(Ogre::BitArray1D *this, const Ogre::BitArray1D *a2)
{
  int v2; // r6
  int v5; // r3
  unsigned int v6; // r6
  void *v7; // r0

  v2 = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 1) = v2;
  v5 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 2) = v5;
  v6 = 4 * ((unsigned int)(v2 * v5 + 31) >> 5);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 3);
  v7 = (void *)operator new[](v6);
  *(_DWORD *)this = v7;
  j_memcpy(v7, *(const void **)a2, v6);
  return this;
}


//======================================================================
// Ogre::BitArray1D::~BitArray1D()
// address: 0x0017E59E   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10BitArray1DD1Ev'
void __fastcall Ogre::BitArray1D::~BitArray1D(void **this)
{
  void *v1; // r0

  v1 = *this;
  if ( v1 != nullptr )
    operator delete[](v1);
}


//======================================================================
// Ogre::BitArray1D::init(unsigned int,unsigned int)
// address: 0x0017E5B0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::BitArray1D::init(Ogre::BitArray1D *this, unsigned int a2, unsigned int a3)
{
  void *v4; // r0
  int result; // r0
  int v8; // r2

  v4 = *(void **)this;
  if ( v4 != nullptr )
    operator delete[](v4);
  *((_DWORD *)this + 1) = a2;
  *((_DWORD *)this + 2) = a3;
  result = operator new[](4 * ((a3 * a2 + 31) >> 5));
  v8 = *((_DWORD *)this + 2);
  *(_DWORD *)this = result;
  *((_DWORD *)this + 3) = (1 << v8) - 1;
  return result;
}


//======================================================================
// Ogre::BitArray1D::BitArray1D(unsigned int,unsigned int)
// address: 0x0017E5E2   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10BitArray1DC1Ejj'
Ogre::BitArray1D *__fastcall Ogre::BitArray1D::BitArray1D(Ogre::BitArray1D *this, unsigned int a2, unsigned int a3)
{
  *(_DWORD *)this = 0;
  Ogre::BitArray1D::init(this, a2, a3);
  return this;
}


//======================================================================
// Ogre::BitArray1D::clear(unsigned int)
// address: 0x0017E5F2   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::BitArray1D::clear(int this, unsigned int a2)
{
  Ogre::BitArray1D *v2; // r5
  unsigned int i; // r4

  v2 = (Ogre::BitArray1D *)this;
  for ( i = 0; i < *((_DWORD *)v2 + 1); ++i )
    this = Ogre::BitArray1D::setPixel(v2, i, a2);
  return this;
}


//======================================================================
// Ogre::BitArray1D::reduceBppTo(unsigned int)
// address: 0x0017E610   size: 0x5C (92 bytes)
//======================================================================
void __fastcall Ogre::BitArray1D::reduceBppTo(Ogre::BitArray1D *this, unsigned int a2)
{
  char v2; // r6
  char v4; // r7
  unsigned int i; // r6
  unsigned int Pixel; // r0
  void *v7; // r0
  void *v8[5]; // [sp+0h] [bp-14h] BYREF

  v2 = a2;
  Ogre::BitArray1D::BitArray1D((Ogre::BitArray1D *)v8, *((_DWORD *)this + 1), a2);
  v4 = *((_DWORD *)this + 2) - v2;
  for ( i = 0; i < *((_DWORD *)this + 1); ++i )
  {
    Pixel = Ogre::BitArray1D::getPixel(this, i);
    Ogre::BitArray1D::setPixel((Ogre::BitArray1D *)v8, i, Pixel >> v4);
  }
  v7 = *(void **)this;
  *((void **)this + 2) = v8[2];
  *((void **)this + 3) = v8[3];
  if ( v7 != nullptr )
    operator delete[](v7);
  *(void **)this = v8[0];
  v8[0] = nullptr;
  Ogre::BitArray1D::~BitArray1D(v8);
}

