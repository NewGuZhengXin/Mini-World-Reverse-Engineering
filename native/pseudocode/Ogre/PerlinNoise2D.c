// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PerlinNoise2D

//======================================================================
// Ogre::PerlinNoise2D::PerlinNoise2D(int,int)
// address: 0x001912A8   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13PerlinNoise2DC1Eii'
Ogre::PerlinNoise2D *__fastcall Ogre::PerlinNoise2D::PerlinNoise2D(Ogre::PerlinNoise2D *this, int a2, int a3)
{
  int v4; // r0
  int v5; // r2
  int v6; // r3

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 4) = 0;
  v4 = operator new[](a3 * a2);
  v5 = *((_DWORD *)this + 1);
  v6 = *(_DWORD *)this;
  *((_DWORD *)this + 2) = v4;
  *((_DWORD *)this + 3) = operator new[](v5 * v6);
  return this;
}


//======================================================================
// Ogre::PerlinNoise2D::~PerlinNoise2D()
// address: 0x001912D0   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13PerlinNoise2DD1Ev'
void __fastcall Ogre::PerlinNoise2D::~PerlinNoise2D(Ogre::PerlinNoise2D *this)
{
  void *v2; // r0
  void *v3; // r0

  v2 = *((void **)this + 2);
  if ( v2 != nullptr )
    operator delete[](v2);
  v3 = *((void **)this + 3);
  if ( v3 != nullptr )
    operator delete[](v3);
}


//======================================================================
// Ogre::PerlinNoise2D::SampleNoise(int,int,int,int,int)
// address: 0x001912EC   size: 0xF2 (242 bytes)
//======================================================================
int __fastcall Ogre::PerlinNoise2D::SampleNoise(Ogre::PerlinNoise2D *this, char a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  int v7; // r6
  int v8; // r4
  int v10; // [sp+0h] [bp-24h]
  int v11; // [sp+4h] [bp-20h]
  int v12; // [sp+8h] [bp-1Ch]
  int v13; // [sp+10h] [bp-14h]
  int v14; // [sp+14h] [bp-10h]
  int v15; // [sp+18h] [bp-Ch]
  int v16; // [sp+1Ch] [bp-8h]

  v6 = *(_DWORD *)this << a2;
  v14 = *((_DWORD *)this + 1);
  v10 = v14 << a2;
  v12 = a5 / v6;
  v13 = a6 / (v14 << a2);
  v7 = a3 / (a5 / v6) + 1;
  if ( v7 >= v6 )
    v7 = v6 - 1;
  v8 = a4 / v13 + 1;
  if ( v8 >= v10 )
    v8 = v10 - 1;
  v11 = *(_DWORD *)this;
  v16 = *((_DWORD *)this + 2);
  v15 = a3 % v12;
  return (unsigned __int8)(((v13 - a4 % v13)
                          * ((*(unsigned __int8 *)(v16 + a3 / v12 % v11 + v11 * (a4 / v13 % v14)) * (v12 - v15)
                            + *(unsigned __int8 *)(v16 + v7 % v11 + v11 * (a4 / v13 % v14)) * v15)
                           / v12)
                          + (*(unsigned __int8 *)(v16 + a3 / v12 % v11 + v11 * (v8 % v14)) * (v12 - v15)
                           + *(unsigned __int8 *)(v16 + v7 % v11 + v11 * (v8 % v14)) * v15)
                          / v12
                          * (a4 % v13))
                         / v13);
}


//======================================================================
// Ogre::PerlinNoise2D::calNoiseData(unsigned char *,int)
// address: 0x001913DE   size: 0xBA (186 bytes)
//======================================================================
Ogre::PerlinNoise2D *__fastcall Ogre::PerlinNoise2D::calNoiseData(
        Ogre::PerlinNoise2D *this,
        unsigned __int8 *a2,
        int a3)
{
  Ogre::PerlinNoise2D *v3; // r5
  unsigned __int8 *v4; // r7
  int i; // r6
  int k; // r6
  int j; // r4
  unsigned __int8 *v8; // r7
  int n; // r4
  int v10; // r0
  int v11; // [sp+Ch] [bp-20h]
  int m; // [sp+10h] [bp-1Ch]
  int v13; // [sp+14h] [bp-18h]
  int v16; // [sp+24h] [bp-8h]

  v3 = this;
  v11 = *(_DWORD *)this << (a3 - 1);
  v4 = a2;
  v13 = *((_DWORD *)this + 1) << (a3 - 1);
  for ( i = 0; i < v13; ++i )
  {
    for ( j = 0; j < v11; ++j )
    {
      this = (Ogre::PerlinNoise2D *)Ogre::PerlinNoise2D::SampleNoise(v3, 0, j, i, v11, v13);
      v4[j] = (unsigned __int8)this;
    }
    v4 += v11;
  }
  for ( k = 1; k < a3; ++k )
  {
    v8 = a2;
    for ( m = 0; m < v13; ++m )
    {
      for ( n = 0; n < v11; ++n )
      {
        v16 = v8[n];
        v10 = v16 + (Ogre::PerlinNoise2D::SampleNoise(v3, k, n, m, v11, v13) - 127) / (1 << k);
        if ( v10 > 255 )
          this = (Ogre::PerlinNoise2D *)(&off_FC + 3);
        else
          this = (Ogre::PerlinNoise2D *)(v10 & (~v10 >> 31));
        v8[n] = (unsigned __int8)this;
      }
      v8 += v11;
    }
  }
  return this;
}


//======================================================================
// Ogre::PerlinNoise2D::calNoiseDataRow(unsigned char *,int,int)
// address: 0x00191498   size: 0xA2 (162 bytes)
//======================================================================
Ogre::PerlinNoise2D *__fastcall Ogre::PerlinNoise2D::calNoiseDataRow(
        Ogre::PerlinNoise2D *this,
        unsigned __int8 *a2,
        int a3,
        int a4)
{
  int v4; // r7
  Ogre::PerlinNoise2D *v5; // r6
  int i; // r4
  int j; // r5
  int k; // r4
  int v9; // r0
  int v10; // [sp+8h] [bp-24h]
  int v12; // [sp+10h] [bp-1Ch]
  int v15; // [sp+24h] [bp-8h]

  v4 = *(_DWORD *)this << (a3 - 1);
  v5 = this;
  v10 = *((_DWORD *)this + 1) << (a3 - 1);
  v12 = a4 * v4;
  for ( i = 0; i < v4; ++i )
  {
    this = (Ogre::PerlinNoise2D *)Ogre::PerlinNoise2D::SampleNoise(v5, 0, i, a4, v4, v10);
    a2[v12 + i] = (unsigned __int8)this;
  }
  for ( j = 1; j < a3; ++j )
  {
    for ( k = 0; k < v4; ++k )
    {
      v15 = a2[v12 + k];
      v9 = v15 + (Ogre::PerlinNoise2D::SampleNoise(v5, j, k, a4, v4, v10) - 127) / (1 << j);
      if ( v9 > 255 )
        this = (Ogre::PerlinNoise2D *)(&off_FC + 3);
      else
        this = (Ogre::PerlinNoise2D *)(v9 & (~v9 >> 31));
      a2[v12 + k] = (unsigned __int8)this;
    }
  }
  return this;
}


//======================================================================
// Ogre::PerlinNoise2D::calNoiseData(float *,int)
// address: 0x0019153C   size: 0xB6 (182 bytes)
//======================================================================
float __fastcall Ogre::PerlinNoise2D::calNoiseData(Ogre::PerlinNoise2D *this, float *a2, int a3)
{
  int v3; // r7
  float result; // r0
  int i; // r4
  int j; // r5
  int v8; // [sp+Ch] [bp-28h]
  float *v9; // [sp+10h] [bp-24h]
  int v10; // [sp+14h] [bp-20h]
  int v11; // [sp+18h] [bp-1Ch]
  float v14; // [sp+2Ch] [bp-8h]

  v3 = *(_DWORD *)this << (a3 - 1);
  v10 = *((_DWORD *)this + 1) << (a3 - 1);
  result = COERCE_FLOAT(j_memset(a2, 0, 4 * v10 * v3));
  for ( i = 0; i < a3; ++i )
  {
    v8 = 0;
    v9 = a2;
    while ( v8 < v10 )
    {
      for ( j = 0; j < v3; ++j )
      {
        v11 = j;
        v14 = (float)((float)Ogre::PerlinNoise2D::SampleNoise(this, i, j, v8, v3, v10) / 255.0) - 0.5;
        result = v9[v11] + (float)(v14 / (float)(1 << i));
        v9[v11] = result;
      }
      ++v8;
      v9 += v3;
    }
  }
  return result;
}


//======================================================================
// Ogre::PerlinNoise2D::makeNoiseSharp(unsigned char *,int,int,int,float)
// address: 0x001915F8   size: 0x76 (118 bytes)
//======================================================================
unsigned int __fastcall Ogre::PerlinNoise2D::makeNoiseSharp(
        unsigned int this,
        int a2,
        int a3,
        int a4,
        int a5,
        float a6)
{
  unsigned int v6; // r5
  int i; // r2
  _BYTE *j; // r4
  int v10; // [sp+4h] [bp-18h]

  v6 = this;
  for ( i = 0; ; i = v10 + 1 )
  {
    v10 = i;
    if ( i >= a3 )
      break;
    for ( j = (_BYTE *)v6; (int)&j[-v6] < a2; ++j )
    {
      this = (unsigned int)(255.0
                          - j_pow(
                              *(float *)&a5,
                              (double)((~((unsigned __int8)*j - a4) >> 31) & ((unsigned __int8)*j - a4)))
                          * 255.0);
      *j = this;
    }
    v6 += (~a2 >> 31) & a2;
  }
  return this;
}


//======================================================================
// Ogre::PerlinNoise2D::makeNoiseSharpRow(unsigned char *,int,int,int,float)
// address: 0x00191678   size: 0x64 (100 bytes)
//======================================================================
unsigned int __fastcall Ogre::PerlinNoise2D::makeNoiseSharpRow(
        unsigned int this,
        int a2,
        int a3,
        int a4,
        int a5,
        float a6)
{
  _BYTE *i; // r6
  unsigned int v8; // [sp+8h] [bp-Ch]

  v8 = this + a3 * a2;
  for ( i = (_BYTE *)v8; (int)&i[-v8] < a2; ++i )
  {
    this = (unsigned int)(255.0
                        - j_pow(
                            *(float *)&a5,
                            (double)((~((unsigned __int8)*i - a4) >> 31) & ((unsigned __int8)*i - a4)))
                        * 255.0);
    *i = this;
  }
  return this;
}


//======================================================================
// Ogre::PerlinNoise2D::initNoise(int)
// address: 0x00191792   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::PerlinNoise2D::initNoise(Ogre::PerlinNoise2D *this, int a2)
{
  *((_DWORD *)this + 4) = a2;
  sub_19127C(*((_BYTE **)this + 3), *(_DWORD *)this, *((_DWORD *)this + 1), (int *)this + 4);
  return Ogre::BigArray2D<unsigned char>::Smooth(
           *((_DWORD *)this + 2),
           *((_DWORD *)this + 3),
           *(_DWORD *)this,
           *((_DWORD *)this + 1));
}


//======================================================================
// Ogre::PerlinNoise2D::initNoise(int,int,float)
// address: 0x001917B4   size: 0x76 (118 bytes)
//======================================================================
__int64 __fastcall Ogre::PerlinNoise2D::initNoise(Ogre::PerlinNoise2D *this, int a2, int a3, float a4)
{
  int *v5; // r6
  int v8; // r2
  int v9; // r6
  int v10; // r7
  int i; // r5
  __int64 v13; // [sp+0h] [bp-Ch]

  *((_DWORD *)this + 4) = a2;
  v5 = (int *)((char *)this + 16);
  sub_19127C(*((_BYTE **)this + 2), *(_DWORD *)this, *((_DWORD *)this + 1), (int *)this + 4);
  v8 = *((_DWORD *)this + 1);
  *((_DWORD *)this + 4) = a3;
  sub_19127C(*((_BYTE **)this + 3), *(_DWORD *)this, v8, v5);
  LODWORD(v13) = *((_DWORD *)this + 2);
  v9 = (unsigned __int8)(unsigned int)(float)(a4 * 255.0);
  v10 = *((_DWORD *)this + 3);
  HIDWORD(v13) = 255 - v9;
  for ( i = 0; i < *((_DWORD *)this + 1) * *(_DWORD *)this; ++i )
    *(_BYTE *)(v10 + i) = (*(unsigned __int8 *)(v13 + i) * HIDWORD(v13) + *(unsigned __int8 *)(v10 + i) * v9) / 255;
  Ogre::BigArray2D<unsigned char>::Smooth(
    *((_DWORD *)this + 2),
    *((_DWORD *)this + 3),
    *(_DWORD *)this,
    *((_DWORD *)this + 1));
  return v13;
}

