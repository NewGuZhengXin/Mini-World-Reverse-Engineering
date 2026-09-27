// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BitArray2D

//======================================================================
// Ogre::BitArray2D::BitArray2D(unsigned int,unsigned int,unsigned int)
// address: 0x0017E66C   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10BitArray2DC1Ejjj'
Ogre::BitArray2D *__fastcall Ogre::BitArray2D::BitArray2D(
        Ogre::BitArray2D *this,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  Ogre::BitArray1D::BitArray1D(this, a3 * a2, a4);
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
  return this;
}


//======================================================================
// Ogre::BitArray2D::~BitArray2D()
// address: 0x0017E686   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10BitArray2DD1Ev'
void __fastcall Ogre::BitArray2D::~BitArray2D(void **this)
{
  Ogre::BitArray1D::~BitArray1D(this);
}


//======================================================================
// Ogre::BitArray2D::init(unsigned int,unsigned int,unsigned int)
// address: 0x0017E692   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::BitArray2D::init(Ogre::BitArray2D *this, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int result; // r0

  result = Ogre::BitArray1D::init(this, a3 * a2, a4);
  *((_DWORD *)this + 4) = a2;
  *((_DWORD *)this + 5) = a3;
  return result;
}


//======================================================================
// Ogre::BitArray2D::dithering(unsigned int)
// address: 0x0017E6B0   size: 0x1F2 (498 bytes)
//======================================================================
void __fastcall Ogre::BitArray2D::dithering(Ogre::BitArray2D *this, char a2)
{
  int v3; // r7
  unsigned int v4; // r0
  unsigned int v5; // r7
  int v6; // r6
  unsigned int v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r0
  unsigned int v10; // r3
  int v11; // r1
  unsigned int j; // r3
  int v13; // r1
  unsigned int v14; // r7
  unsigned int v15; // r7
  float v16; // r6
  float v17; // r0
  float v18; // r5
  float v19; // r0
  float v20; // r5
  float v21; // r5
  float *v22; // r3
  unsigned int k; // [sp+0h] [bp-24h]
  float *v24; // [sp+4h] [bp-20h]
  float *v25; // [sp+8h] [bp-1Ch]
  float *v26; // [sp+Ch] [bp-18h]
  float *v27; // [sp+10h] [bp-14h]
  unsigned int i; // [sp+14h] [bp-10h]
  float v29; // [sp+18h] [bp-Ch]
  float v30; // [sp+1Ch] [bp-8h]

  v3 = 1 << *((_DWORD *)this + 2);
  v4 = *((_DWORD *)this + 4);
  v5 = v3 - 1;
  v6 = (1 << a2) - 1;
  if ( v4 > 0x1FC00000 )
    v7 = -1;
  else
    v7 = 4 * v4;
  v24 = (float *)operator new[](v7);
  v8 = *((_DWORD *)this + 4);
  if ( v8 > 0x1FC00000 )
    v9 = -1;
  else
    v9 = 4 * v8;
  v26 = (float *)operator new[](v9);
  v29 = (float)v5;
  v10 = 0;
  v30 = (float)(unsigned int)v6 / (float)v5;
  while ( v10 < *((_DWORD *)this + 4) )
  {
    v11 = v10++;
    v24[v11] = 0.0;
  }
  for ( i = 0; i < *((_DWORD *)this + 5); ++i )
  {
    for ( j = 0; j < *((_DWORD *)this + 4); ++j )
    {
      v13 = j;
      v26[v13] = 0.0;
    }
    v27 = v24 + 1;
    v25 = v26 + 1;
    for ( k = 0; ; ++k )
    {
      v14 = *((_DWORD *)this + 4);
      if ( k >= v14 )
        break;
      v15 = k + v14 * i;
      v16 = (float)(unsigned int)Ogre::BitArray1D::getPixel(this, v15) + *(v27 - 1);
      v17 = j_floor((float)(v16 * v30) + 0.5);
      v18 = v17 / v30;
      if ( (float)(v17 / v30) > v29 )
        v18 = v29;
      if ( v18 < 0.0 )
        v18 = 0.0;
      v19 = j_floor((float)(v18 + 0.5));
      v20 = v19;
      Ogre::BitArray1D::setPixel(this, v15, (unsigned int)v19);
      v21 = v16 - v20;
      *(v25 - 1) = *(v25 - 1) + (float)((float)(v21 * 5.0) * 0.0625);
      if ( k != 0 )
        *(v25 - 2) = *(v25 - 2) + (float)((float)(v21 * 3.0) * 0.0625);
      if ( k < *((_DWORD *)this + 4) - 1 )
      {
        *v27 = *v27 + (float)((float)(v21 * 7.0) * 0.0625);
        *v25 = *v25 + (float)(v21 * 0.0625);
      }
      ++v27;
      ++v25;
    }
    v22 = v24;
    v24 = v26;
    v26 = v22;
  }
  if ( v24 != nullptr )
    operator delete[](v24);
  if ( v26 != nullptr )
    operator delete[](v26);
}

