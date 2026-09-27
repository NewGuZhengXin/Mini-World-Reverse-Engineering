// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Matrix4

//======================================================================
// Ogre::Matrix4::transformCoord(Ogre::Vector3 const&)const
// address: 0x0016F1C6   size: 0xBA (186 bytes)
//======================================================================
float *__fastcall Ogre::Matrix4::transformCoord(float *this, const Ogre::Vector3 *a2, float *a3)
{
  float v3; // r6
  float v4; // [sp+4h] [bp-10h]
  float v5; // [sp+8h] [bp-Ch]
  float v6; // [sp+Ch] [bp-8h]

  v3 = a3[1];
  v6 = a3[2];
  v4 = (float)((float)((float)(*a3 * *((float *)a2 + 1)) + (float)(v3 * *((float *)a2 + 5)))
             + (float)(v6 * *((float *)a2 + 9)))
     + *((float *)a2 + 13);
  v5 = (float)((float)((float)(*a3 * *((float *)a2 + 2)) + (float)(v3 * *((float *)a2 + 6)))
             + (float)(v6 * *((float *)a2 + 10)))
     + *((float *)a2 + 14);
  *this = (float)((float)((float)(*a3 * *(float *)a2) + (float)(v3 * *((float *)a2 + 4)))
                + (float)(v6 * *((float *)a2 + 8)))
        + *((float *)a2 + 12);
  *(this + 1) = v4;
  *(this + 2) = v5;
  return this;
}


//======================================================================
// Ogre::Matrix4::Matrix4(void)
// address: 0x0017A6E2   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7Matrix4C2Ev'
void __fastcall Ogre::Matrix4::Matrix4(Ogre::Matrix4 *this)
{
  ;
}


//======================================================================
// Ogre::Matrix4::Matrix4(float const*)
// address: 0x0017A6E4   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7Matrix4C1EPKf'
int __fastcall Ogre::Matrix4::Matrix4(int this, const float *a2)
{
  int i; // r3

  for ( i = 0; i != 16; ++i )
    *(float *)(this + i * 4) = a2[i];
  return this;
}


//======================================================================
// Ogre::Matrix4::Matrix4(Ogre::Matrix4 const&)
// address: 0x0017A6F4   size: 0x10 (16 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre7Matrix4C2ERKS0_'
int __fastcall Ogre::Matrix4::Matrix4(int this, const Ogre::Matrix4 *a2)
{
  int i; // r3

  for ( i = 0; i != 64; i += 4 )
    *(_DWORD *)(this + i) = *(_DWORD *)((char *)a2 + i);
  return this;
}


//======================================================================
// Ogre::Matrix4::operator=(Ogre::Matrix4 const&)
// address: 0x0017A704   size: 0xE (14 bytes)
//======================================================================
void *__fastcall Ogre::Matrix4::operator=(void *a1, const void *a2)
{
  j_memcpy(a1, a2, 0x40u);
  return a1;
}


//======================================================================
// Ogre::Matrix4::operator+=(Ogre::Matrix4 const&)
// address: 0x0017A712   size: 0x1A (26 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::operator+=(int a1, int a2)
{
  int i; // r4
  float result; // r0

  for ( i = 0; i != 64; i += 4 )
  {
    result = *(float *)(a1 + i) + *(float *)(a2 + i);
    *(float *)(a1 + i) = result;
  }
  return result;
}


//======================================================================
// Ogre::Matrix4::operator-=(Ogre::Matrix4 const&)
// address: 0x0017A72C   size: 0x1A (26 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::operator-=(int a1, int a2)
{
  int i; // r4
  float result; // r0

  for ( i = 0; i != 64; i += 4 )
  {
    result = *(float *)(a1 + i) - *(float *)(a2 + i);
    *(float *)(a1 + i) = result;
  }
  return result;
}


//======================================================================
// Ogre::Matrix4::operator*=(float)
// address: 0x0017A746   size: 0x1A (26 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::operator*=(float *a1, float a2)
{
  float *v2; // r4
  float *v3; // r5
  float result; // r0

  v2 = a1;
  v3 = a1 + 16;
  do
  {
    result = *v2 * a2;
    *v2++ = result;
  }
  while ( v2 != v3 );
  return result;
}


//======================================================================
// Ogre::Matrix4::operator/=(float)
// address: 0x0017A760   size: 0x1A (26 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::operator/=(float *a1, float a2)
{
  float *v2; // r4
  float *v3; // r5
  float result; // r0

  v2 = a1;
  v3 = a1 + 16;
  do
  {
    result = *v2 / a2;
    *v2++ = result;
  }
  while ( v2 != v3 );
  return result;
}


//======================================================================
// Ogre::Matrix4::operator float *(void)
// address: 0x0017A77A   size: 0x2 (2 bytes)
//======================================================================
void Ogre::Matrix4::operator float *()
{
  ;
}


//======================================================================
// Ogre::Matrix4::operator*=(Ogre::Matrix4 const&)
// address: 0x0017A77C   size: 0x8E (142 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::operator*=(Ogre::Matrix4 *a1, int a2)
{
  int v2; // r5
  int v3; // r4
  float v4; // r3
  float v5; // r1
  float result; // r0
  Ogre::Matrix4 *v7; // [sp+0h] [bp-64h] BYREF
  int v8; // [sp+4h] [bp-60h]
  _BYTE *v9; // [sp+8h] [bp-5Ch]
  float v10; // [sp+Ch] [bp-58h]
  float v11; // [sp+10h] [bp-54h]
  float v12; // [sp+14h] [bp-50h]
  float v13; // [sp+18h] [bp-4Ch]
  char *v14; // [sp+1Ch] [bp-48h]
  _BYTE v15[68]; // [sp+20h] [bp-44h] BYREF

  v7 = a1;
  v8 = a2;
  Ogre::Matrix4::Matrix4((int)v15, a1);
  v2 = 0;
  v9 = v15;
  do
  {
    v3 = 0;
    v10 = *(float *)((char *)&v7 + v2 + 32);
    v11 = *(float *)&v15[v2 + 4];
    v4 = *(float *)&v15[v2 + 12];
    v12 = *(float *)&v15[v2 + 8];
    v13 = v4;
    do
    {
      v5 = *(float *)(v8 + v3);
      v14 = (char *)v7 + v2;
      result = (float)((float)((float)(v10 * v5) + (float)(v11 * *(float *)(v8 + v3 + 16)))
                     + (float)(v12 * *(float *)(v8 + v3 + 32)))
             + (float)(v13 * *(float *)(v8 + v3 + 48));
      *(float *)&v14[v3] = result;
      v3 += 4;
    }
    while ( v3 != 16 );
    v2 += 16;
  }
  while ( v2 != 64 );
  return result;
}


//======================================================================
// Ogre::Matrix4::det(void)const
// address: 0x0017A80A   size: 0x1EA (490 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::det(Ogre::Matrix4 *this)
{
  float v1; // r7
  float v3; // [sp+4h] [bp-40h]
  float v4; // [sp+8h] [bp-3Ch]
  float v5; // [sp+Ch] [bp-38h]
  float v6; // [sp+10h] [bp-34h]
  float v7; // [sp+14h] [bp-30h]
  float v8; // [sp+1Ch] [bp-28h]
  float v9; // [sp+20h] [bp-24h]
  float v10; // [sp+24h] [bp-20h]
  float v11; // [sp+28h] [bp-1Ch]
  float v12; // [sp+2Ch] [bp-18h]
  float v13; // [sp+30h] [bp-14h]
  float v14; // [sp+34h] [bp-10h]
  float v15; // [sp+38h] [bp-Ch]

  v3 = *((float *)this + 5);
  v1 = *((float *)this + 12);
  v4 = *((float *)this + 1);
  v5 = *((float *)this + 4);
  v6 = *((float *)this + 10);
  v7 = *((float *)this + 15);
  v8 = *((float *)this + 14);
  v9 = *((float *)this + 6);
  v10 = *((float *)this + 2);
  v11 = *((float *)this + 9);
  v12 = *((float *)this + 13);
  v13 = *((float *)this + 7);
  v14 = *((float *)this + 3);
  v15 = *((float *)this + 8);
  return (float)((float)((float)((float)((float)((float)((float)(*(float *)this * v3) - (float)(v4 * v5))
                                               * (float)((float)(v6 * v7) - (float)(*((float *)this + 11) * v8)))
                                       - (float)((float)((float)(*(float *)this * v9) - (float)(v10 * v5))
                                               * (float)((float)(v11 * v7) - (float)(*((float *)this + 11) * v12))))
                               + (float)((float)((float)(*(float *)this * v13) - (float)(v14 * v5))
                                       * (float)((float)(v11 * v8) - (float)(v6 * v12))))
                       + (float)((float)((float)(v4 * v9) - (float)(v10 * v3))
                               * (float)((float)(v15 * v7) - (float)(*((float *)this + 11) * v1))))
               - (float)((float)((float)(v4 * v13) - (float)(v14 * v3)) * (float)((float)(v15 * v8) - (float)(v6 * v1))))
       + (float)((float)((float)(v10 * v13) - (float)(v14 * v9)) * (float)((float)(v15 * v12) - (float)(v11 * v1)));
}


//======================================================================
// Ogre::Matrix4::identity(void)
// address: 0x0017A9F4   size: 0xE (14 bytes)
//======================================================================
void *__fastcall Ogre::Matrix4::identity(Ogre::Matrix4 *this)
{
  return Ogre::Matrix4::operator=(this, &Ogre::Matrix4::Iden);
}


//======================================================================
// Ogre::Matrix4::inverse(Ogre::Matrix4&)const
// address: 0x0017AA08   size: 0x968 (2408 bytes)
//======================================================================
int __fastcall Ogre::Matrix4::inverse(Ogre::Matrix4 *this, Ogre::Matrix4 *a2)
{
  float v3; // r5

  v3 = Ogre::Matrix4::det(this);
  if ( v3 == 0.0 )
    sub_17B370();
  *(float *)a2 = (float)(1.0 / v3)
               * (float)((float)((float)((float)((float)(*((float *)this + 10) * *((float *)this + 15))
                                               - (float)(*((float *)this + 11) * *((float *)this + 14)))
                                       * *((float *)this + 5))
                               + (float)((float)((float)(*((float *)this + 11) * *((float *)this + 13))
                                               - (float)(*((float *)this + 9) * *((float *)this + 15)))
                                       * *((float *)this + 6)))
                       + (float)((float)((float)(*((float *)this + 9) * *((float *)this + 14))
                                       - (float)(*((float *)this + 10) * *((float *)this + 13)))
                               * *((float *)this + 7)));
  *((float *)a2 + 1) = (float)(1.0 / v3)
                     * (float)((float)((float)((float)((float)(*((float *)this + 2) * *((float *)this + 15))
                                                     - (float)(*((float *)this + 3) * *((float *)this + 14)))
                                             * *((float *)this + 9))
                                     + (float)((float)((float)(*((float *)this + 3) * *((float *)this + 13))
                                                     - (float)(*((float *)this + 1) * *((float *)this + 15)))
                                             * *((float *)this + 10)))
                             + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 14))
                                             - (float)(*((float *)this + 2) * *((float *)this + 13)))
                                     * *((float *)this + 11)));
  *((float *)a2 + 2) = (float)(1.0 / v3)
                     * (float)((float)((float)((float)((float)(*((float *)this + 2) * *((float *)this + 7))
                                                     - (float)(*((float *)this + 3) * *((float *)this + 6)))
                                             * *((float *)this + 13))
                                     + (float)((float)((float)(*((float *)this + 3) * *((float *)this + 5))
                                                     - (float)(*((float *)this + 1) * *((float *)this + 7)))
                                             * *((float *)this + 14)))
                             + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 6))
                                             - (float)(*((float *)this + 2) * *((float *)this + 5)))
                                     * *((float *)this + 15)));
  *((float *)a2 + 3) = (float)(1.0 / v3)
                     * (float)((float)((float)((float)((float)(*((float *)this + 7) * *((float *)this + 10))
                                                     - (float)(*((float *)this + 6) * *((float *)this + 11)))
                                             * *((float *)this + 1))
                                     + (float)((float)((float)(*((float *)this + 5) * *((float *)this + 11))
                                                     - (float)(*((float *)this + 7) * *((float *)this + 9)))
                                             * *((float *)this + 2)))
                             + (float)((float)((float)(*((float *)this + 6) * *((float *)this + 9))
                                             - (float)(*((float *)this + 5) * *((float *)this + 10)))
                                     * *((float *)this + 3)));
  *((float *)a2 + 4) = (float)(1.0 / v3)
                     * (float)((float)((float)((float)((float)(*((float *)this + 8) * *((float *)this + 15))
                                                     - (float)(*((float *)this + 11) * *((float *)this + 12)))
                                             * *((float *)this + 6))
                                     + (float)((float)((float)(*((float *)this + 10) * *((float *)this + 12))
                                                     - (float)(*((float *)this + 8) * *((float *)this + 14)))
                                             * *((float *)this + 7)))
                             + (float)((float)((float)(*((float *)this + 11) * *((float *)this + 14))
                                             - (float)(*((float *)this + 10) * *((float *)this + 15)))
                                     * *((float *)this + 4)));
  *((float *)a2 + 5) = (float)(1.0 / v3)
                     * (float)((float)((float)((float)((float)(*(float *)this * *((float *)this + 15))
                                                     - (float)(*((float *)this + 3) * *((float *)this + 12)))
                                             * *((float *)this + 10))
                                     + (float)((float)((float)(*((float *)this + 2) * *((float *)this + 12))
                                                     - (float)(*(float *)this * *((float *)this + 14)))
                                             * *((float *)this + 11)))
                             + (float)((float)((float)(*((float *)this + 3) * *((float *)this + 14))
                                             - (float)(*((float *)this + 2) * *((float *)this + 15)))
                                     * *((float *)this + 8)));
  *((float *)a2 + 6) = (float)(1.0 / v3)
                     * (float)((float)((float)((float)((float)(*(float *)this * *((float *)this + 7))
                                                     - (float)(*((float *)this + 3) * *((float *)this + 4)))
                                             * *((float *)this + 14))
                                     + (float)((float)((float)(*((float *)this + 2) * *((float *)this + 4))
                                                     - (float)(*(float *)this * *((float *)this + 6)))
                                             * *((float *)this + 15)))
                             + (float)((float)((float)(*((float *)this + 3) * *((float *)this + 6))
                                             - (float)(*((float *)this + 2) * *((float *)this + 7)))
                                     * *((float *)this + 12)));
  *((float *)a2 + 7) = (float)(1.0 / v3)
                     * (float)((float)((float)((float)((float)(*((float *)this + 7) * *((float *)this + 8))
                                                     - (float)(*((float *)this + 4) * *((float *)this + 11)))
                                             * *((float *)this + 2))
                                     + (float)((float)((float)(*((float *)this + 4) * *((float *)this + 10))
                                                     - (float)(*((float *)this + 6) * *((float *)this + 8)))
                                             * *((float *)this + 3)))
                             + (float)((float)((float)(*((float *)this + 6) * *((float *)this + 11))
                                             - (float)(*((float *)this + 7) * *((float *)this + 10)))
                                     * *(float *)this));
  *((float *)a2 + 8) = (float)(1.0 / v3)
                     * (float)((float)((float)((float)((float)(*((float *)this + 8) * *((float *)this + 13))
                                                     - (float)(*((float *)this + 9) * *((float *)this + 12)))
                                             * *((float *)this + 7))
                                     + (float)((float)((float)(*((float *)this + 9) * *((float *)this + 15))
                                                     - (float)(*((float *)this + 11) * *((float *)this + 13)))
                                             * *((float *)this + 4)))
                             + (float)((float)((float)(*((float *)this + 11) * *((float *)this + 12))
                                             - (float)(*((float *)this + 8) * *((float *)this + 15)))
                                     * *((float *)this + 5)));
  *((float *)a2 + 9) = (float)(1.0 / v3)
                     * (float)((float)((float)((float)((float)(*(float *)this * *((float *)this + 13))
                                                     - (float)(*((float *)this + 1) * *((float *)this + 12)))
                                             * *((float *)this + 11))
                                     + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 15))
                                                     - (float)(*((float *)this + 3) * *((float *)this + 13)))
                                             * *((float *)this + 8)))
                             + (float)((float)((float)(*((float *)this + 3) * *((float *)this + 12))
                                             - (float)(*(float *)this * *((float *)this + 15)))
                                     * *((float *)this + 9)));
  *((float *)a2 + 10) = (float)(1.0 / v3)
                      * (float)((float)((float)((float)((float)(*(float *)this * *((float *)this + 5))
                                                      - (float)(*((float *)this + 1) * *((float *)this + 4)))
                                              * *((float *)this + 15))
                                      + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 7))
                                                      - (float)(*((float *)this + 3) * *((float *)this + 5)))
                                              * *((float *)this + 12)))
                              + (float)((float)((float)(*((float *)this + 3) * *((float *)this + 4))
                                              - (float)(*(float *)this * *((float *)this + 7)))
                                      * *((float *)this + 13)));
  *((float *)a2 + 11) = (float)(1.0 / v3)
                      * (float)((float)((float)((float)((float)(*((float *)this + 5) * *((float *)this + 8))
                                                      - (float)(*((float *)this + 4) * *((float *)this + 9)))
                                              * *((float *)this + 3))
                                      + (float)((float)((float)(*((float *)this + 7) * *((float *)this + 9))
                                                      - (float)(*((float *)this + 5) * *((float *)this + 11)))
                                              * *(float *)this))
                              + (float)((float)((float)(*((float *)this + 4) * *((float *)this + 11))
                                              - (float)(*((float *)this + 7) * *((float *)this + 8)))
                                      * *((float *)this + 1)));
  *((float *)a2 + 12) = (float)(1.0 / v3)
                      * (float)((float)((float)((float)((float)(*((float *)this + 10) * *((float *)this + 13))
                                                      - (float)(*((float *)this + 9) * *((float *)this + 14)))
                                              * *((float *)this + 4))
                                      + (float)((float)((float)(*((float *)this + 8) * *((float *)this + 14))
                                                      - (float)(*((float *)this + 10) * *((float *)this + 12)))
                                              * *((float *)this + 5)))
                              + (float)((float)((float)(*((float *)this + 9) * *((float *)this + 12))
                                              - (float)(*((float *)this + 8) * *((float *)this + 13)))
                                      * *((float *)this + 6)));
  *((float *)a2 + 13) = (float)(1.0 / v3)
                      * (float)((float)((float)((float)((float)(*((float *)this + 2) * *((float *)this + 13))
                                                      - (float)(*((float *)this + 1) * *((float *)this + 14)))
                                              * *((float *)this + 8))
                                      + (float)((float)((float)(*(float *)this * *((float *)this + 14))
                                                      - (float)(*((float *)this + 2) * *((float *)this + 12)))
                                              * *((float *)this + 9)))
                              + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 12))
                                              - (float)(*(float *)this * *((float *)this + 13)))
                                      * *((float *)this + 10)));
  *((float *)a2 + 14) = (float)(1.0 / v3)
                      * (float)((float)((float)((float)((float)(*((float *)this + 2) * *((float *)this + 5))
                                                      - (float)(*((float *)this + 1) * *((float *)this + 6)))
                                              * *((float *)this + 12))
                                      + (float)((float)((float)(*(float *)this * *((float *)this + 6))
                                                      - (float)(*((float *)this + 2) * *((float *)this + 4)))
                                              * *((float *)this + 13)))
                              + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 4))
                                              - (float)(*(float *)this * *((float *)this + 5)))
                                      * *((float *)this + 14)));
  *((float *)a2 + 15) = (float)(1.0 / v3)
                      * (float)((float)((float)((float)((float)(*((float *)this + 5) * *((float *)this + 10))
                                                      - (float)(*((float *)this + 6) * *((float *)this + 9)))
                                              * *(float *)this)
                                      + (float)((float)((float)(*((float *)this + 6) * *((float *)this + 8))
                                                      - (float)(*((float *)this + 4) * *((float *)this + 10)))
                                              * *((float *)this + 1)))
                              + (float)((float)((float)(*((float *)this + 4) * *((float *)this + 9))
                                              - (float)(*((float *)this + 5) * *((float *)this + 8)))
                                      * *((float *)this + 2)));
  return sub_17B370();
}


//======================================================================
// Ogre::Matrix4::quickInverse(Ogre::Matrix4&)const
// address: 0x0017B374   size: 0x338 (824 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::quickInverse(Ogre::Matrix4 *this, Ogre::Matrix4 *a2)
{
  float v4; // r7
  float result; // r0
  float v6; // r0
  float v7; // r0
  float v8; // r0

  v4 = Ogre::Matrix4::det(this);
  LODWORD(result) = v4 == 0.0;
  if ( v4 != 0.0 )
  {
    *(float *)a2 = (float)(1.0 / v4)
                 * (float)((float)(*((float *)this + 5) * *((float *)this + 10))
                         - (float)(*((float *)this + 6) * *((float *)this + 9)));
    *((float *)a2 + 1) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 9) * *((float *)this + 2))
                               - (float)(*((float *)this + 10) * *((float *)this + 1)));
    v6 = (float)(1.0 / v4)
       * (float)((float)(*((float *)this + 1) * *((float *)this + 6))
               - (float)(*((float *)this + 2) * *((float *)this + 5)));
    *((_DWORD *)a2 + 3) = 0;
    *((float *)a2 + 2) = v6;
    *((float *)a2 + 4) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 6) * *((float *)this + 8))
                               - (float)(*((float *)this + 4) * *((float *)this + 10)));
    *((float *)a2 + 5) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 10) * *(float *)this)
                               - (float)(*((float *)this + 8) * *((float *)this + 2)));
    v7 = (float)(1.0 / v4)
       * (float)((float)(*((float *)this + 2) * *((float *)this + 4)) - (float)(*(float *)this * *((float *)this + 6)));
    *((_DWORD *)a2 + 7) = 0;
    *((float *)a2 + 6) = v7;
    *((float *)a2 + 8) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 4) * *((float *)this + 9))
                               - (float)(*((float *)this + 5) * *((float *)this + 8)));
    *((float *)a2 + 9) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 8) * *((float *)this + 1))
                               - (float)(*((float *)this + 9) * *(float *)this));
    v8 = (float)(1.0 / v4)
       * (float)((float)(*(float *)this * *((float *)this + 5)) - (float)(*((float *)this + 1) * *((float *)this + 4)));
    *((_DWORD *)a2 + 11) = 0;
    *((float *)a2 + 10) = v8;
    *((float *)a2 + 12) = (float)(1.0 / v4)
                        * (float)((float)((float)((float)((float)(*((float *)this + 10) * *((float *)this + 13))
                                                        - (float)(*((float *)this + 9) * *((float *)this + 14)))
                                                * *((float *)this + 4))
                                        + (float)((float)((float)(*((float *)this + 8) * *((float *)this + 14))
                                                        - (float)(*((float *)this + 10) * *((float *)this + 12)))
                                                * *((float *)this + 5)))
                                + (float)((float)((float)(*((float *)this + 9) * *((float *)this + 12))
                                                - (float)(*((float *)this + 8) * *((float *)this + 13)))
                                        * *((float *)this + 6)));
    *((float *)a2 + 13) = (float)(1.0 / v4)
                        * (float)((float)((float)((float)((float)(*((float *)this + 2) * *((float *)this + 13))
                                                        - (float)(*((float *)this + 1) * *((float *)this + 14)))
                                                * *((float *)this + 8))
                                        + (float)((float)((float)(*(float *)this * *((float *)this + 14))
                                                        - (float)(*((float *)this + 2) * *((float *)this + 12)))
                                                * *((float *)this + 9)))
                                + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 12))
                                                - (float)(*(float *)this * *((float *)this + 13)))
                                        * *((float *)this + 10)));
    result = (float)(1.0 / v4)
           * (float)((float)((float)((float)((float)(*((float *)this + 2) * *((float *)this + 5))
                                           - (float)(*((float *)this + 1) * *((float *)this + 6)))
                                   * *((float *)this + 12))
                           + (float)((float)((float)(*(float *)this * *((float *)this + 6))
                                           - (float)(*((float *)this + 2) * *((float *)this + 4)))
                                   * *((float *)this + 13)))
                   + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 4))
                                   - (float)(*(float *)this * *((float *)this + 5)))
                           * *((float *)this + 14)));
    *((float *)a2 + 14) = result;
    *((_DWORD *)a2 + 15) = 1065353216;
  }
  return result;
}


//======================================================================
// Ogre::Matrix4::inverse(void)
// address: 0x0017B6AC   size: 0x1C (28 bytes)
//======================================================================
Ogre::Matrix4 *__fastcall Ogre::Matrix4::inverse(Ogre::Matrix4 *this)
{
  _BYTE v3[68]; // [sp+0h] [bp-44h] BYREF

  Ogre::Matrix4::Matrix4((int)v3, this);
  Ogre::Matrix4::inverse((Ogre::Matrix4 *)v3, this);
  return this;
}


//======================================================================
// Ogre::Matrix4::quickInverse(void)
// address: 0x0017B6C8   size: 0x1A (26 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::quickInverse(Ogre::Matrix4 *this)
{
  _BYTE v3[68]; // [sp+0h] [bp-44h] BYREF

  Ogre::Matrix4::Matrix4((int)v3, this);
  return Ogre::Matrix4::quickInverse((Ogre::Matrix4 *)v3, this);
}


//======================================================================
// Ogre::Matrix4::transpose(void)
// address: 0x0017B6E2   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Matrix4::transpose(_DWORD *this)
{
  int v1; // r2
  int v2; // r2
  int v3; // r2
  int v4; // r2
  int v5; // r2
  int v6; // r2

  v1 = *(this + 4);
  *(this + 4) = *(this + 1);
  *(this + 1) = v1;
  v2 = *(this + 8);
  *(this + 8) = *(this + 2);
  *(this + 2) = v2;
  v3 = *(this + 12);
  *(this + 12) = *(this + 3);
  *(this + 3) = v3;
  v4 = *(this + 9);
  *(this + 9) = *(this + 6);
  *(this + 6) = v4;
  v5 = *(this + 13);
  *(this + 13) = *(this + 7);
  *(this + 7) = v5;
  v6 = *(this + 14);
  *(this + 14) = *(this + 11);
  *(this + 11) = v6;
  return this;
}


//======================================================================
// Ogre::Matrix4::getMatrix3(Ogre::Matrix3 &)const
// address: 0x0017B714   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::Matrix4::getMatrix3(_DWORD *a1, _DWORD *a2)
{
  int result; // r0

  *a2 = *a1;
  a2[1] = a1[1];
  a2[2] = a1[2];
  a2[3] = a1[4];
  a2[4] = a1[5];
  a2[5] = a1[6];
  a2[6] = a1[8];
  a2[7] = a1[9];
  result = a1[10];
  a2[8] = result;
  return result;
}


//======================================================================
// Ogre::Matrix4::getScale(Ogre::Matrix4&)const
// address: 0x0017B73A   size: 0xF8 (248 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::getScale(Ogre::Matrix4 *this, Ogre::Matrix4 *a2)
{
  unsigned int v4; // r5
  float v5; // r1
  float v6; // r3
  int i; // r4
  int v8; // r1
  int v9; // r5
  Ogre *v10; // r1
  int v11; // r5
  float v12; // r1
  Ogre *v13; // r5
  float v14; // r1
  float v15; // r1
  float result; // r0
  _DWORD v17[4]; // [sp+0h] [bp-94h] BYREF
  float v18; // [sp+10h] [bp-84h]
  float v19; // [sp+14h] [bp-80h]
  float v20; // [sp+18h] [bp-7Ch]
  _BYTE *v21; // [sp+1Ch] [bp-78h]
  Ogre *v22; // [sp+24h] [bp-70h] BYREF
  int v23; // [sp+28h] [bp-6Ch]
  int v24; // [sp+2Ch] [bp-68h]
  int v25; // [sp+30h] [bp-64h]
  int v26; // [sp+34h] [bp-60h]
  int v27; // [sp+38h] [bp-5Ch]
  int v28; // [sp+3Ch] [bp-58h]
  float v29; // [sp+40h] [bp-54h]
  int v30; // [sp+44h] [bp-50h]
  _DWORD v31[9]; // [sp+48h] [bp-4Ch] BYREF
  _BYTE v32[40]; // [sp+6Ch] [bp-28h] BYREF

  Ogre::Matrix4::identity(a2);
  v22 = (Ogre *)1065353216;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 1065353216;
  v27 = 0;
  v28 = 0;
  v29 = 0.0;
  v30 = 1065353216;
  Ogre::Matrix4::getMatrix3(this, &v22);
  v31[0] = v22;
  v31[1] = v25;
  v31[2] = v28;
  v31[3] = v23;
  v31[4] = v26;
  *(float *)&v31[5] = v29;
  v31[7] = v27;
  v31[6] = v24;
  v31[8] = v30;
  v4 = 0;
  v17[2] = &v22;
  v17[3] = v31;
  v17[0] = v32;
  do
  {
    v5 = *(float *)((char *)&v22 + v4 + 4);
    v6 = *(float *)((char *)&v24 + v4);
    v18 = *(float *)&v17[v4 / 4 + 9];
    v19 = v5;
    v20 = v6;
    for ( i = 0; i != 3; ++i )
    {
      v17[1] = &v31[i];
      v21 = &v32[v4];
      *(float *)&v32[v4 + i * 4] = (float)((float)(v18 * *(float *)&v17[i + 18]) + (float)(v19 * *(float *)&v31[i + 3]))
                                 + (float)(v20 * *(float *)&v31[i + 6]);
    }
    v4 += 12;
  }
  while ( v4 != 36 );
  v8 = *(_DWORD *)(v17[0] + 4);
  v9 = *(_DWORD *)(v17[0] + 8);
  v22 = *(Ogre **)v17[0];
  v23 = v8;
  v24 = v9;
  v10 = *(Ogre **)(v17[0] + 16);
  v11 = *(_DWORD *)(v17[0] + 20);
  v25 = *(_DWORD *)(v17[0] + 12);
  v26 = (int)v10;
  v27 = v11;
  v12 = *(float *)(v17[0] + 28);
  v13 = *(Ogre **)(v17[0] + 32);
  v28 = *(_DWORD *)(v17[0] + 24);
  v29 = v12;
  v30 = (int)v13;
  *(float *)a2 = Ogre::Sqrt(v22, v12);
  *((float *)a2 + 5) = Ogre::Sqrt((Ogre *)v26, v14);
  result = Ogre::Sqrt((Ogre *)v30, v15);
  *((float *)a2 + 10) = result;
  return result;
}


//======================================================================
// Ogre::Matrix4::transformVec4(Ogre::Vector4 &,Ogre::Vector4 const&)const
// address: 0x0017B848   size: 0x124 (292 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::transformVec4(float *a1, float *a2, float *a3)
{
  float v3; // r5
  float v5; // r7
  float result; // r0
  float v7; // [sp+4h] [bp-18h]
  float v8; // [sp+8h] [bp-14h]
  float v9; // [sp+10h] [bp-Ch]
  float v10; // [sp+14h] [bp-8h]

  v3 = a3[1];
  v7 = a3[2];
  v8 = a3[3];
  v9 = (float)((float)((float)(*a3 * a1[1]) + (float)(v3 * a1[5])) + (float)(v7 * a1[9])) + (float)(v8 * a1[13]);
  v10 = (float)((float)((float)(*a3 * a1[2]) + (float)(v3 * a1[6])) + (float)(v7 * a1[10])) + (float)(v8 * a1[14]);
  v5 = (float)((float)((float)(*a3 * a1[3]) + (float)(v3 * a1[7])) + (float)(v7 * a1[11])) + (float)(v8 * a1[15]);
  result = (float)((float)((float)(*a3 * *a1) + (float)(v3 * a1[4])) + (float)(v7 * a1[8])) + (float)(v8 * a1[12]);
  *a2 = result;
  a2[3] = v5;
  a2[1] = v9;
  a2[2] = v10;
  return result;
}


//======================================================================
// Ogre::Matrix4::transformCoord(Ogre::Vector3 &,Ogre::Vector3 const&)const
// address: 0x0017B96C   size: 0xB8 (184 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::transformCoord(Ogre::Matrix4 *this, Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
{
  float v3; // r6
  float v4; // r5
  float result; // r0
  float v6; // [sp+4h] [bp-10h]
  float v7; // [sp+8h] [bp-Ch]

  v3 = *((float *)a3 + 1);
  v4 = *((float *)a3 + 2);
  v6 = (float)((float)((float)(*(float *)a3 * *((float *)this + 1)) + (float)(v3 * *((float *)this + 5)))
             + (float)(v4 * *((float *)this + 9)))
     + *((float *)this + 13);
  v7 = (float)((float)((float)(*(float *)a3 * *((float *)this + 2)) + (float)(v3 * *((float *)this + 6)))
             + (float)(v4 * *((float *)this + 10)))
     + *((float *)this + 14);
  result = (float)((float)((float)(*(float *)a3 * *(float *)this) + (float)(v3 * *((float *)this + 4)))
                 + (float)(v4 * *((float *)this + 8)))
         + *((float *)this + 12);
  *(float *)a2 = result;
  *((float *)a2 + 1) = v6;
  *((float *)a2 + 2) = v7;
  return result;
}


//======================================================================
// Ogre::Matrix4::transformNormal(Ogre::Vector3 &,Ogre::Vector3 const&)const
// address: 0x0017BA24   size: 0xA6 (166 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::transformNormal(Ogre::Matrix4 *this, Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
{
  float v3; // r6
  float v4; // r5
  float result; // r0
  float v6; // [sp+4h] [bp-10h]
  float v7; // [sp+8h] [bp-Ch]

  v3 = *((float *)a3 + 1);
  v4 = *((float *)a3 + 2);
  v6 = (float)((float)(*(float *)a3 * *((float *)this + 1)) + (float)(v3 * *((float *)this + 5)))
     + (float)(v4 * *((float *)this + 9));
  v7 = (float)((float)(*(float *)a3 * *((float *)this + 2)) + (float)(v3 * *((float *)this + 6)))
     + (float)(v4 * *((float *)this + 10));
  result = (float)((float)(*(float *)a3 * *(float *)this) + (float)(v3 * *((float *)this + 4)))
         + (float)(v4 * *((float *)this + 8));
  *(float *)a2 = result;
  *((float *)a2 + 1) = v6;
  *((float *)a2 + 2) = v7;
  return result;
}


//======================================================================
// Ogre::Matrix4::apply4x4(Ogre::Vector3 &,Ogre::Vector3 const&)const
// address: 0x0017BACA   size: 0x108 (264 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::apply4x4(Ogre::Matrix4 *this, Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
{
  float v3; // r5
  float v5; // r7
  float result; // r0
  float v7; // [sp+0h] [bp-14h]
  float v8; // [sp+8h] [bp-Ch]
  float v9; // [sp+Ch] [bp-8h]

  v3 = *((float *)a3 + 1);
  v7 = *((float *)a3 + 2);
  v8 = 1.0
     / (float)((float)((float)((float)(*(float *)a3 * *((float *)this + 3)) + (float)(v3 * *((float *)this + 7)))
                     + (float)(v7 * *((float *)this + 11)))
             + *((float *)this + 15));
  v9 = (float)((float)((float)((float)(*(float *)a3 * *((float *)this + 1)) + (float)(v3 * *((float *)this + 5)))
                     + (float)(v7 * *((float *)this + 9)))
             + *((float *)this + 13))
     * v8;
  v5 = (float)((float)((float)((float)(*(float *)a3 * *((float *)this + 2)) + (float)(v3 * *((float *)this + 6)))
                     + (float)(v7 * *((float *)this + 10)))
             + *((float *)this + 14))
     * v8;
  result = (float)((float)((float)((float)(*(float *)a3 * *(float *)this) + (float)(v3 * *((float *)this + 4)))
                         + (float)(v7 * *((float *)this + 8)))
                 + *((float *)this + 12))
         * v8;
  *(float *)a2 = result;
  *((float *)a2 + 2) = v5;
  *((float *)a2 + 1) = v9;
  return result;
}


//======================================================================
// Ogre::Matrix4::makeTranslateMatrix(Ogre::Vector3 const&)
// address: 0x0017BBD2   size: 0x1E (30 bytes)
//======================================================================
void *__fastcall Ogre::Matrix4::makeTranslateMatrix(Ogre::Matrix4 *a1, int *a2)
{
  void *result; // r0
  int v5; // r3
  int v6; // r2
  int v7; // r5

  result = Ogre::Matrix4::identity(a1);
  v5 = a2[1];
  v6 = *a2;
  v7 = a2[2];
  *((_DWORD *)a1 + 13) = v5;
  *((_DWORD *)a1 + 14) = v7;
  *((_DWORD *)a1 + 12) = v6;
  *((_DWORD *)a1 + 15) = 1065353216;
  return result;
}


//======================================================================
// Ogre::Matrix4::makeScaleMatrix(Ogre::Vector3 const&)
// address: 0x0017BBF0   size: 0x18 (24 bytes)
//======================================================================
void *__fastcall Ogre::Matrix4::makeScaleMatrix(Ogre::Matrix4 *a1, _DWORD *a2)
{
  void *result; // r0

  result = Ogre::Matrix4::identity(a1);
  *(_DWORD *)a1 = *a2;
  *((_DWORD *)a1 + 5) = a2[1];
  *((_DWORD *)a1 + 10) = a2[2];
  return result;
}


//======================================================================
// Ogre::Matrix4::makeRotateMatrix(Ogre::Quaternion const&)
// address: 0x0017BC08   size: 0xE (14 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::makeRotateMatrix(Ogre::Matrix4 *this, const Ogre::Quaternion *a2)
{
  return Ogre::Quaternion::getMatrix(a2, this);
}


//======================================================================
// Ogre::Matrix4::makeRotateMatrix(Ogre::Vector3 const&,float)
// address: 0x0017BC16   size: 0x15C (348 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::makeRotateMatrix(Ogre::Matrix4 *this, const Ogre::Vector3 *a2, float a3)
{
  float v5; // r1
  float v6; // r6
  float v7; // r1
  float v8; // r6
  float result; // r0
  float v10; // [sp+0h] [bp-1Ch]
  float v11; // [sp+4h] [bp-18h]
  float v12; // [sp+8h] [bp-14h]
  float v13; // [sp+Ch] [bp-10h]

  v6 = a3 * 0.5;
  v13 = Ogre::Cos(COERCE_OGRE_(a3 * 0.5), v5);
  v8 = Ogre::Sin((Ogre *)LODWORD(v6), v7);
  v10 = v8 * *(float *)a2;
  v11 = v8 * *((float *)a2 + 1);
  v12 = v8 * *((float *)a2 + 2);
  *(float *)this = 1.0
                 - (float)((float)((float)(v11 * v11) + (float)(v12 * v12))
                         + (float)((float)(v11 * v11) + (float)(v12 * v12)));
  *((float *)this + 5) = 1.0
                       - (float)((float)((float)(v10 * v10) + (float)(v12 * v12))
                               + (float)((float)(v10 * v10) + (float)(v12 * v12)));
  *((_DWORD *)this + 15) = 1065353216;
  *((float *)this + 10) = 1.0
                        - (float)((float)((float)(v10 * v10) + (float)(v11 * v11))
                                + (float)((float)(v10 * v10) + (float)(v11 * v11)));
  *((float *)this + 1) = (float)((float)(v10 * v11) + (float)(v13 * v12))
                       + (float)((float)(v10 * v11) + (float)(v13 * v12));
  *((float *)this + 2) = (float)((float)(v10 * v12) - (float)(v13 * v11))
                       + (float)((float)(v10 * v12) - (float)(v13 * v11));
  *((_DWORD *)this + 3) = 0;
  *((float *)this + 4) = (float)((float)(v10 * v11) - (float)(v13 * v12))
                       + (float)((float)(v10 * v11) - (float)(v13 * v12));
  *((float *)this + 6) = (float)((float)(v11 * v12) + (float)(v13 * v10))
                       + (float)((float)(v11 * v12) + (float)(v13 * v10));
  *((_DWORD *)this + 7) = 0;
  *((float *)this + 8) = (float)((float)(v10 * v12) + (float)(v13 * v11))
                       + (float)((float)(v10 * v12) + (float)(v13 * v11));
  result = (float)((float)(v11 * v12) - (float)(v13 * v10)) + (float)((float)(v11 * v12) - (float)(v13 * v10));
  *((_DWORD *)this + 11) = 0;
  *((float *)this + 9) = result;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 12) = 0;
  return result;
}


//======================================================================
// Ogre::Matrix4::makeRotateX(float)
// address: 0x0017BD72   size: 0x28 (40 bytes)
//======================================================================
unsigned int __fastcall Ogre::Matrix4::makeRotateX(Ogre::Matrix4 *this, Ogre *a2)
{
  float v4; // r1
  float v5; // r5
  float v6; // r1
  float v7; // r0
  unsigned int result; // r0

  Ogre::Matrix4::identity(this);
  v5 = Ogre::Cos(a2, v4);
  v7 = Ogre::Sin(a2, v6);
  *((float *)this + 6) = v7;
  result = LODWORD(v7) + 0x80000000;
  *((float *)this + 5) = v5;
  *((float *)this + 10) = v5;
  *((_DWORD *)this + 9) = result;
  return result;
}


//======================================================================
// Ogre::Matrix4::makeRotateY(float)
// address: 0x0017BD9A   size: 0x28 (40 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::makeRotateY(Ogre::Matrix4 *this, Ogre *a2)
{
  float v4; // r1
  float v5; // r5
  float v6; // r1
  float result; // r0

  Ogre::Matrix4::identity(this);
  v5 = Ogre::Cos(a2, v4);
  result = Ogre::Sin(a2, v6);
  *(float *)this = v5;
  *((float *)this + 10) = v5;
  *((_DWORD *)this + 2) = LODWORD(result) + 0x80000000;
  *((float *)this + 8) = result;
  return result;
}


//======================================================================
// Ogre::Matrix4::makeRotateZ(float)
// address: 0x0017BDC2   size: 0x28 (40 bytes)
//======================================================================
unsigned int __fastcall Ogre::Matrix4::makeRotateZ(Ogre::Matrix4 *this, Ogre *a2)
{
  float v4; // r1
  float v5; // r5
  float v6; // r1
  float v7; // r0
  unsigned int result; // r0

  Ogre::Matrix4::identity(this);
  v5 = Ogre::Cos(a2, v4);
  v7 = Ogre::Sin(a2, v6);
  *((float *)this + 1) = v7;
  result = LODWORD(v7) + 0x80000000;
  *(float *)this = v5;
  *((float *)this + 5) = v5;
  *((_DWORD *)this + 4) = result;
  return result;
}


//======================================================================
// Ogre::Matrix4::makeRotateMatrix(Ogre::Vector3 const&,Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x0017BDEA   size: 0x3C (60 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Matrix4::makeRotateMatrix(_DWORD *result, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int v4; // r2
  int v5; // r3

  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = 0;
  result[4] = *a3;
  result[5] = a3[1];
  v4 = a3[2];
  result[7] = 0;
  result[6] = v4;
  result[8] = *a4;
  result[9] = a4[1];
  v5 = a4[2];
  result[11] = 0;
  result[12] = 0;
  result[10] = v5;
  result[13] = 0;
  result[14] = 0;
  result[15] = 1065353216;
  return result;
}


//======================================================================
// Ogre::Matrix4::makeRFTMatrix(Ogre::Quaternion const&,float,Ogre::Vector3 const&)
// address: 0x0017BE26   size: 0x4C (76 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::Matrix4::makeRFTMatrix(
        Ogre::Matrix4 *this,
        const Ogre::Quaternion *a2,
        unsigned int a3,
        const Ogre::Vector3 *a4)
{
  int i; // r5
  float *v7; // r6
  float v8; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r7
  unsigned __int64 v13; // [sp+0h] [bp-Ch]

  v13 = __PAIR64__(a3, (unsigned int)this);
  Ogre::Quaternion::getMatrix(a2, this);
  for ( i = 0; i != 48; i += 16 )
  {
    v7 = (float *)((char *)this + i);
    *(float *)((char *)this + i) = *(float *)((char *)this + i) * *((float *)&v13 + 1);
    v7[1] = *(float *)((char *)this + i + 4) * *((float *)&v13 + 1);
    v8 = *(float *)((char *)this + i + 8) * *((float *)&v13 + 1);
    v7[2] = v8;
  }
  v9 = *((_DWORD *)a4 + 1);
  v10 = *(_DWORD *)a4;
  v11 = *((_DWORD *)a4 + 2);
  *((_DWORD *)this + 13) = v9;
  *((_DWORD *)this + 14) = v11;
  *((_DWORD *)this + 12) = v10;
  *((_DWORD *)this + 15) = 1065353216;
  return v13;
}


//======================================================================
// Ogre::Matrix4::makeSRTMatrix(Ogre::Vector3 const&,Ogre::Quaternion const&,Ogre::Vector3 const&)
// address: 0x0017BE72   size: 0x78 (120 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::makeSRTMatrix(
        Ogre::Matrix4 *this,
        const Ogre::Vector3 *a2,
        const Ogre::Quaternion *a3,
        const Ogre::Vector3 *a4)
{
  float result; // r0

  Ogre::Quaternion::getMatrix(a3, this);
  *(float *)this = *(float *)this * *(float *)a2;
  *((float *)this + 1) = *((float *)this + 1) * *(float *)a2;
  *((float *)this + 2) = *((float *)this + 2) * *(float *)a2;
  *((float *)this + 4) = *((float *)this + 4) * *((float *)a2 + 1);
  *((float *)this + 5) = *((float *)this + 5) * *((float *)a2 + 1);
  *((float *)this + 6) = *((float *)this + 6) * *((float *)a2 + 1);
  *((float *)this + 8) = *((float *)this + 8) * *((float *)a2 + 2);
  *((float *)this + 9) = *((float *)this + 9) * *((float *)a2 + 2);
  result = *((float *)this + 10) * *((float *)a2 + 2);
  *((float *)this + 10) = result;
  *((_DWORD *)this + 12) = *(_DWORD *)a4;
  *((_DWORD *)this + 13) = *((_DWORD *)a4 + 1);
  *((_DWORD *)this + 14) = *((_DWORD *)a4 + 2);
  return result;
}


//======================================================================
// Ogre::Matrix4::makeViewMatrix(Ogre::Vector3 const&,Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x0017BEEA   size: 0x186 (390 bytes)
//======================================================================
unsigned int __fastcall Ogre::Matrix4::makeViewMatrix(
        Ogre::Matrix4 *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3,
        const Ogre::Vector3 *a4)
{
  float v6; // r0
  float v7; // r7
  float v8; // r4
  float v9; // r0
  float v10; // r4
  const Ogre::Vector3 *v11; // r2
  float v12; // r5
  const Ogre::Vector3 *v13; // r2
  unsigned int result; // r0
  float v15; // [sp+4h] [bp-50h]
  float v16; // [sp+4h] [bp-50h]
  float v17; // [sp+4h] [bp-50h]
  float v19; // [sp+Ch] [bp-48h]
  float v20; // [sp+10h] [bp-44h]
  Ogre::Vector3 *v21; // [sp+10h] [bp-44h]
  float v22; // [sp+14h] [bp-40h]
  float v23; // [sp+1Ch] [bp-38h]
  float v24; // [sp+20h] [bp-34h]
  float v25; // [sp+2Ch] [bp-28h] BYREF
  float v26; // [sp+30h] [bp-24h]
  float v27; // [sp+34h] [bp-20h]
  float v28[3]; // [sp+38h] [bp-1Ch] BYREF
  float v29[4]; // [sp+44h] [bp-10h] BYREF

  v15 = *((float *)a3 + 2) - *((float *)a2 + 2);
  v6 = *(float *)a3 - *(float *)a2;
  v29[1] = *((float *)a3 + 1) - *((float *)a2 + 1);
  v29[0] = v6;
  v29[2] = v15;
  Ogre::GetNormalize((Ogre *)&v25, (const Ogre::Vector3 *)v29);
  v7 = *(float *)a4;
  v16 = *((float *)a4 + 1);
  v20 = *((float *)a4 + 2);
  v29[0] = (float)(v16 * v27) - (float)(v20 * v26);
  v29[1] = (float)(v20 * v25) - (float)(v7 * v27);
  v29[2] = (float)(v7 * v26) - (float)(v16 * v25);
  Ogre::GetNormalize((Ogre *)v28, (const Ogre::Vector3 *)v29);
  v17 = v26;
  v19 = v28[2];
  v21 = (Ogre::Vector3 *)LODWORD(v27);
  v22 = v28[1];
  v24 = (float)(v26 * v28[2]) - (float)(v27 * v28[1]);
  v23 = v25;
  v8 = (float)(v27 * v28[0]) - (float)(v25 * v28[2]);
  v9 = (float)(v25 * v28[1]) - (float)(v26 * v28[0]);
  v29[1] = v8;
  v29[0] = v24;
  v29[2] = v9;
  *(float *)this = v28[0];
  *((float *)this + 1) = v24;
  *((_DWORD *)this + 3) = 0;
  *((float *)this + 2) = v23;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 11) = 0;
  *((float *)this + 4) = v22;
  *((float *)this + 5) = v8;
  *((float *)this + 9) = v9;
  *((float *)this + 6) = v17;
  *((float *)this + 8) = v19;
  *((_DWORD *)this + 10) = v21;
  v10 = Ogre::DotProduct((Ogre *)v28, a2, v21);
  v12 = Ogre::DotProduct((Ogre *)v29, a2, v11);
  result = ((int (__fastcall *)(Ogre *, const Ogre::Vector3 *, const Ogre::Vector3 *))Ogre::DotProduct)(
             (Ogre *)&v25,
             a2,
             v13)
         + 0x80000000;
  *((_DWORD *)this + 12) = LODWORD(v10) + 0x80000000;
  *((_DWORD *)this + 13) = LODWORD(v12) + 0x80000000;
  *((_DWORD *)this + 14) = result;
  *((_DWORD *)this + 15) = 1065353216;
  return result;
}


//======================================================================
// Ogre::Matrix4::makeViewMatrix(Ogre::Vector3 const&,Ogre::Quaternion const&)
// address: 0x0017C070   size: 0x28 (40 bytes)
//======================================================================
Ogre::Matrix4 *__fastcall Ogre::Matrix4::makeViewMatrix(
        Ogre::Matrix4 *this,
        const Ogre::Vector3 *a2,
        const Ogre::Quaternion *a3)
{
  int v5; // r3
  int v6; // r2
  int v7; // r5

  Ogre::Quaternion::getMatrix(a3, this);
  v5 = *((_DWORD *)a2 + 1);
  v6 = *(_DWORD *)a2;
  v7 = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 13) = v5;
  *((_DWORD *)this + 14) = v7;
  *((_DWORD *)this + 12) = v6;
  *((_DWORD *)this + 15) = 1065353216;
  return Ogre::Matrix4::inverse(this);
}


//======================================================================
// Ogre::Matrix4::makeOrthoMatrix(float,float,float,float)
// address: 0x0017C098   size: 0xC2 (194 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::Matrix4::makeOrthoMatrix(
        Ogre::Matrix4 *this,
        float a2,
        unsigned int a3,
        float a4,
        float a5)
{
  float v6; // r1
  float v7; // r0
  unsigned __int64 v9; // [sp+0h] [bp-Ch]

  v9 = __PAIR64__(a3, (unsigned int)this);
  if ( Ogre::Matrix4::HandMode != 0 )
  {
    *(float *)this = 2.0 / a2;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
    *((_DWORD *)this + 4) = 0;
    *((_DWORD *)this + 6) = 0;
    *((float *)this + 5) = 2.0 / *(float *)&a3;
    *((_DWORD *)this + 7) = 0;
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 9) = 0;
    *((_DWORD *)this + 11) = 0;
    *((float *)this + 10) = 2.0 / (float)(a5 - a4);
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 13) = 0;
    v7 = a4 + a5;
    v6 = a4 - a5;
  }
  else
  {
    *(float *)this = 2.0 / a2;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
    *((_DWORD *)this + 4) = 0;
    *((float *)this + 5) = 2.0 / *(float *)&a3;
    *((_DWORD *)this + 6) = 0;
    *((_DWORD *)this + 7) = 0;
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 9) = 0;
    *((float *)this + 10) = 1.0 / (float)(a5 - a4);
    *((_DWORD *)this + 11) = 0;
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 13) = 0;
    v6 = a4 - a5;
    v7 = a4;
  }
  *((_DWORD *)this + 15) = 1065353216;
  *((float *)this + 14) = v7 / v6;
  return v9;
}


//======================================================================
// Ogre::Matrix4::makePerspectiveMatrix(float,float,float,float)
// address: 0x0017C160   size: 0xCE (206 bytes)
//======================================================================
__int64 __fastcall Ogre::Matrix4::makePerspectiveMatrix(Ogre::Matrix4 *this, float a2, float a3, float a4, float a5)
{
  float v8; // r0
  int v9; // r3
  float v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  LODWORD(v12) = this;
  v8 = j_tan((float)((float)(a2 * 0.5) * 0.017453));
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  v9 = Ogre::Matrix4::HandMode;
  *((_DWORD *)this + 3) = 0;
  *(float *)this = (float)(1.0 / v8) / a3;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 6) = 0;
  *((float *)this + 5) = 1.0 / v8;
  *((_DWORD *)this + 7) = 0;
  if ( v9 != 0 )
  {
    *((float *)&v12 + 1) = a5 - a4;
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 9) = 0;
    *((float *)this + 10) = (float)(a5 + a4) / (float)(a5 - a4);
    *((_DWORD *)this + 11) = 1065353216;
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 13) = 0;
    v10 = a4 * -2.0;
  }
  else
  {
    *((float *)&v12 + 1) = a4 - a5;
    *((_DWORD *)this + 8) = 0;
    *((_DWORD *)this + 9) = 0;
    *((float *)this + 10) = COERCE_FLOAT(LODWORD(a5) + 0x80000000) / (float)(a4 - a5);
    *((_DWORD *)this + 11) = 1065353216;
    *((_DWORD *)this + 12) = 0;
    *((_DWORD *)this + 13) = 0;
    v10 = a4;
  }
  *((_DWORD *)this + 15) = 0;
  *((float *)this + 14) = (float)(v10 * a5) / *((float *)&v12 + 1);
  return v12;
}


//======================================================================
// Ogre::Matrix4::isOrthonormal(void)const
// address: 0x0017C238   size: 0x1CA (458 bytes)
//======================================================================
bool __fastcall Ogre::Matrix4::isOrthonormal(Ogre::Matrix4 *this)
{
  float v1; // r6
  float v2; // r5
  _BOOL4 result; // r0
  float v5; // r7
  float v6; // r4
  float v7; // r0
  float v8; // r4
  float v9; // r0
  float v10; // r4
  float v11; // r0
  float v12; // [sp+0h] [bp-1Ch]
  float v13; // [sp+4h] [bp-18h]
  float v14; // [sp+8h] [bp-14h]
  float v15; // [sp+Ch] [bp-10h]
  float v16; // [sp+10h] [bp-Ch]
  float v17; // [sp+14h] [bp-8h]

  v1 = *((float *)this + 4);
  v12 = *(float *)this;
  v2 = *((float *)this + 5);
  v13 = *((float *)this + 1);
  v14 = *((float *)this + 2);
  v15 = *((float *)this + 6);
  result = (float)((float)((float)(*(float *)this * v1) + (float)(v13 * v2)) + (float)(v14 * v15)) < 0.01;
  if ( (float)((float)((float)(v12 * v1) + (float)(v13 * v2)) + (float)(v14 * v15)) < 0.01 )
  {
    v5 = *((float *)this + 8);
    v16 = *((float *)this + 9);
    v17 = *((float *)this + 10);
    result = (float)((float)((float)(v12 * v5) + (float)(v13 * v16)) + (float)(v14 * v17)) < 0.01;
    if ( (float)((float)((float)(v12 * v5) + (float)(v13 * v16)) + (float)(v14 * v17)) < 0.01 )
    {
      result = (float)((float)((float)(v5 * v1) + (float)(v16 * v2)) + (float)(v17 * v15)) < 0.01;
      if ( (float)((float)((float)(v5 * v1) + (float)(v16 * v2)) + (float)(v17 * v15)) < 0.01 )
      {
        v6 = (float)((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14)) - 1.0;
        if ( v6 >= 0.0 )
          v7 = (float)((float)((float)(v12 * v12) + (float)(v13 * v13)) + (float)(v14 * v14)) - 1.0;
        else
          LODWORD(v7) = LODWORD(v6) + 0x80000000;
        result = v7 < 0.01;
        if ( result )
        {
          v8 = (float)((float)((float)(v1 * v1) + (float)(v2 * v2)) + (float)(v15 * v15)) - 1.0;
          if ( v8 >= 0.0 )
            v9 = (float)((float)((float)(v1 * v1) + (float)(v2 * v2)) + (float)(v15 * v15)) - 1.0;
          else
            LODWORD(v9) = LODWORD(v8) + 0x80000000;
          result = v9 < 0.01;
          if ( result )
          {
            v10 = (float)((float)((float)(v5 * v5) + (float)(v16 * v16)) + (float)(v17 * v17)) - 1.0;
            if ( v10 >= 0.0 )
              v11 = (float)((float)((float)(v5 * v5) + (float)(v16 * v16)) + (float)(v17 * v17)) - 1.0;
            else
              LODWORD(v11) = LODWORD(v10) + 0x80000000;
            return v11 < 0.01;
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::Matrix4::makeReflectMatrix(Ogre::Vector4 const&)
// address: 0x0017C408   size: 0x126 (294 bytes)
//======================================================================
float __fastcall Ogre::Matrix4::makeReflectMatrix(int a1, float *a2)
{
  float v4; // r0
  float v5; // r1
  float v6; // r6
  float v7; // r0
  float result; // r0
  float v9; // [sp+0h] [bp-14h]
  float v10; // [sp+4h] [bp-10h]
  float v11; // [sp+Ch] [bp-8h]

  v4 = (float)((float)(*a2 * *a2) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2]);
  v6 = Ogre::Sqrt((Ogre *)LODWORD(v4), v5);
  v7 = *a2 / v6;
  v9 = a2[1] / v6;
  v10 = a2[2] / v6;
  v11 = a2[3] / v6;
  *(float *)a1 = (float)((float)(v7 * -2.0) * v7) + 1.0;
  *(float *)(a1 + 4) = (float)(v9 * -2.0) * v7;
  *(float *)(a1 + 8) = (float)(v10 * -2.0) * v7;
  *(_DWORD *)(a1 + 12) = 0;
  *(float *)(a1 + 16) = (float)(v7 * -2.0) * v9;
  *(float *)(a1 + 20) = (float)((float)(v9 * -2.0) * v9) + 1.0;
  *(float *)(a1 + 24) = (float)(v10 * -2.0) * v9;
  *(_DWORD *)(a1 + 28) = 0;
  *(float *)(a1 + 32) = (float)(v7 * -2.0) * v10;
  *(float *)(a1 + 36) = (float)(v9 * -2.0) * v10;
  *(float *)(a1 + 40) = (float)((float)(v10 * -2.0) * v10) + 1.0;
  *(_DWORD *)(a1 + 44) = 0;
  *(float *)(a1 + 48) = (float)(v7 * -2.0) * v11;
  *(float *)(a1 + 52) = (float)(v9 * -2.0) * v11;
  result = (float)(v10 * -2.0) * v11;
  *(float *)(a1 + 56) = result;
  *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}

