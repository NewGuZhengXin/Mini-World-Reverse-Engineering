// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Quaternion

//======================================================================
// Ogre::Quaternion::operator==(Ogre::Quaternion const&)const
// address: 0x00141CD0   size: 0xA8 (168 bytes)
//======================================================================
bool __fastcall Ogre::Quaternion::operator==(float *a1, float *a2)
{
  float v3; // r6
  float v4; // r0
  _BOOL4 result; // r0
  float v6; // r0
  float v7; // r0
  float v8; // r4
  float v9; // r0

  v3 = *a1 - *a2;
  if ( v3 >= 0.0 )
    v4 = *a1 - *a2;
  else
    LODWORD(v4) = LODWORD(v3) + 0x80000000;
  result = v4 < 0.0001;
  if ( result )
  {
    if ( (float)(a1[1] - a2[1]) >= 0.0 )
      v6 = a1[1] - a2[1];
    else
      LODWORD(v6) = COERCE_INT(a1[1] - a2[1]) + 0x80000000;
    result = v6 < 0.0001;
    if ( result )
    {
      if ( (float)(a1[2] - a2[2]) >= 0.0 )
        v7 = a1[2] - a2[2];
      else
        LODWORD(v7) = COERCE_INT(a1[2] - a2[2]) + 0x80000000;
      result = v7 < 0.0001;
      if ( result )
      {
        v8 = a1[3] - a2[3];
        if ( v8 >= 0.0 )
          v9 = a1[3] - a2[3];
        else
          LODWORD(v9) = LODWORD(v8) + 0x80000000;
        return v9 < 0.0001;
      }
    }
  }
  return result;
}


//======================================================================
// Ogre::Quaternion::magnitude(void)
// address: 0x00141D7C   size: 0x5E (94 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::magnitude(Ogre::Quaternion *this)
{
  float v1; // r4
  float v2; // r1

  v1 = (float)((float)((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)))
             + (float)(*((float *)this + 2) * *((float *)this + 2)))
     + (float)(*((float *)this + 3) * *((float *)this + 3));
  if ( v1 <= 0.0 )
    return 0.0;
  else
    return Ogre::Sqrt((Ogre *)LODWORD(v1), v2);
}


//======================================================================
// Ogre::Quaternion::operator*=(Ogre::Quaternion const&)
// address: 0x00141DDA   size: 0x26 (38 bytes)
//======================================================================
float *__fastcall Ogre::Quaternion::operator*=(float *a1, float *a2)
{
  float *result; // r0
  float v4; // r5
  float v5[5]; // [sp+0h] [bp-14h] BYREF

  result = Ogre::operator*(v5, a1, a2);
  *a1 = v5[0];
  a1[1] = v5[1];
  v4 = v5[3];
  a1[2] = v5[2];
  a1[3] = v4;
  return result;
}


//======================================================================
// Ogre::Quaternion::normalize(void)
// address: 0x00141E00   size: 0x5A (90 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::normalize(Ogre::Quaternion *this)
{
  float v2; // r6
  float result; // r0

  v2 = Ogre::Quaternion::magnitude(this);
  LODWORD(result) = v2 > 0.0;
  if ( v2 <= 0.0 )
  {
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 1) = 0;
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 3) = 1065353216;
  }
  else
  {
    *(float *)this = *(float *)this * (float)(1.0 / v2);
    *((float *)this + 1) = *((float *)this + 1) * (float)(1.0 / v2);
    *((float *)this + 2) = *((float *)this + 2) * (float)(1.0 / v2);
    result = *((float *)this + 3) * (float)(1.0 / v2);
    *((float *)this + 3) = result;
  }
  return result;
}


//======================================================================
// Ogre::Quaternion::setAxisAngle(Ogre::Vector3 const&,float)
// address: 0x00141E5A   size: 0x40 (64 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::setAxisAngle(float *a1, float *a2, float a3)
{
  float v5; // r1
  float v6; // r7
  float v7; // r0
  float v8; // r1
  float result; // r0

  v6 = a3 * 0.5;
  v7 = Ogre::Sin(COERCE_OGRE_(a3 * 0.5), v5);
  *a1 = *a2 * v7;
  a1[1] = a2[1] * v7;
  a1[2] = a2[2] * v7;
  result = Ogre::Cos((Ogre *)LODWORD(v6), v8);
  a1[3] = result;
  return result;
}


//======================================================================
// Ogre::Quaternion::rotate(Ogre::Vector3 const&,float)
// address: 0x00141E9A   size: 0x3C (60 bytes)
//======================================================================
float *__fastcall Ogre::Quaternion::rotate(float *a1, float *a2, float a3)
{
  float *result; // r0
  float v5; // r6
  float v6[4]; // [sp+0h] [bp-20h] BYREF
  float v7[4]; // [sp+10h] [bp-10h] BYREF

  memset(v6, 0, 12);
  v6[3] = 1.0;
  Ogre::Quaternion::setAxisAngle(v6, a2, a3);
  result = Ogre::operator*(v7, a1, v6);
  *a1 = v7[0];
  a1[1] = v7[1];
  v5 = v7[3];
  a1[2] = v7[2];
  a1[3] = v5;
  return result;
}


//======================================================================
// Ogre::Quaternion::setAxisAngleX(float)
// address: 0x00141ED6   size: 0x18 (24 bytes)
//======================================================================
__int64 __fastcall Ogre::Quaternion::setAxisAngleX(Ogre::Quaternion *this, float a2)
{
  __int64 v3; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+8h] [bp-8h]
  int v5; // [sp+Ch] [bp-4h]

  v3 = (unsigned int)this | 0x3F80000000000000LL;
  v4 = 0;
  v5 = 0;
  Ogre::Quaternion::setAxisAngle((float *)this, (float *)&v3 + 1, a2);
  return v3;
}


//======================================================================
// Ogre::Quaternion::setAxisAngleY(float)
// address: 0x00141EEE   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall Ogre::Quaternion::setAxisAngleY(Ogre::Quaternion *this, float a2)
{
  __int64 v3; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+8h] [bp-8h]
  int v5; // [sp+Ch] [bp-4h]

  v3 = (unsigned int)this;
  v4 = 1065353216;
  v5 = 0;
  Ogre::Quaternion::setAxisAngle((float *)this, (float *)&v3 + 1, a2);
  return v3;
}


//======================================================================
// Ogre::Quaternion::setAxisAngleZ(float)
// address: 0x00141F08   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall Ogre::Quaternion::setAxisAngleZ(Ogre::Quaternion *this, float a2)
{
  __int64 v3; // [sp+0h] [bp-10h] BYREF
  int v4; // [sp+8h] [bp-8h]
  int v5; // [sp+Ch] [bp-4h]

  v3 = (unsigned int)this;
  v5 = 1065353216;
  v4 = 0;
  Ogre::Quaternion::setAxisAngle((float *)this, (float *)&v3 + 1, a2);
  return v3;
}


//======================================================================
// Ogre::Quaternion::slerp(Ogre::Quaternion const&,Ogre::Quaternion const&,float)
// address: 0x00141F24   size: 0x16C (364 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::slerp(
        Ogre::Quaternion *this,
        const Ogre::Quaternion *a2,
        const Ogre::Quaternion *a3,
        float a4)
{
  float v5; // r4
  float v6; // r5
  float v7; // r0
  float v8; // r0
  float v9; // r1
  float v10; // r5
  float v11; // r0
  float v12; // r1
  float v13; // r6
  float v14; // r1
  float v15; // r5
  float v16; // r0
  float v17; // r6
  float v18; // r4
  float result; // r0
  float v22; // [sp+8h] [bp-Ch]
  float v23; // [sp+8h] [bp-Ch]
  float v24; // [sp+Ch] [bp-8h]
  float v25; // [sp+Ch] [bp-8h]

  v5 = a4;
  v6 = (float)((float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a2 + 1) * *((float *)a3 + 1)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 2)))
     + (float)(*((float *)a2 + 3) * *((float *)a3 + 3));
  if ( v6 >= 0.0 )
  {
    v22 = 1.0;
  }
  else
  {
    LODWORD(v6) += 0x80000000;
    v22 = -1.0;
  }
  if ( v6 <= 0.99999 )
  {
    v8 = j_acos(v6);
    v10 = v8 * 57.296;
    v24 = v5 * v10;
    v11 = 1.0 / Ogre::Sin(COERCE_OGRE_(v8 * 57.296), v9);
    v13 = v11;
    v5 = Ogre::Sin(COERCE_OGRE_(v5 * v10), v12) * v11;
    v7 = Ogre::Sin(COERCE_OGRE_(v10 - v24), v14) * v13;
  }
  else
  {
    v7 = 1.0 - a4;
  }
  v15 = v7;
  v16 = v5 * v22;
  v17 = v5 * v22;
  v23 = (float)(v15 * *((float *)a2 + 1)) + (float)((float)(v5 * v22) * *((float *)a3 + 1));
  v25 = (float)(v15 * *((float *)a2 + 2)) + (float)(v16 * *((float *)a3 + 2));
  v18 = (float)(v15 * *((float *)a2 + 3)) + (float)(v16 * *((float *)a3 + 3));
  result = (float)(v15 * *(float *)a2) + (float)(v17 * *(float *)a3);
  *(float *)this = result;
  *((float *)this + 1) = v23;
  *((float *)this + 3) = v18;
  *((float *)this + 2) = v25;
  return result;
}


//======================================================================
// Ogre::Quaternion::rotate(Ogre::Vector3 &,Ogre::Vector3 const&)const
// address: 0x0014209C   size: 0x174 (372 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::rotate(float *a1, float *a2, float *a3)
{
  float v3; // r7
  float v4; // r6
  float v5; // r0
  float v6; // r5
  float v7; // r5
  float v8; // r6
  float v9; // r4
  float result; // r0
  float v11; // [sp+4h] [bp-30h]
  float v12; // [sp+4h] [bp-30h]
  float v13; // [sp+8h] [bp-2Ch]
  float v14; // [sp+18h] [bp-1Ch]
  float v15; // [sp+1Ch] [bp-18h]
  float v16; // [sp+20h] [bp-14h]
  float v17; // [sp+24h] [bp-10h]
  float v18; // [sp+28h] [bp-Ch]
  float v19; // [sp+2Ch] [bp-8h]

  v3 = *a1;
  v4 = a1[1];
  v11 = a1[2];
  v6 = a1[3];
  v5 = v11 + v11;
  v14 = v6 * (float)(v3 + v3);
  v15 = v6 * (float)(v4 + v4);
  v16 = v6 * (float)(v11 + v11);
  v17 = v4 * (float)(v4 + v4);
  v18 = v11 * (float)(v11 + v11);
  v7 = v3 * (float)(v4 + v4);
  v19 = v4 * (float)(v11 + v11);
  v12 = *a3;
  v8 = a3[1];
  v9 = a3[2];
  v13 = 1.0 - (float)(v3 * (float)(v3 + v3));
  *a2 = (float)((float)((float)((float)(1.0 - v17) - v18) * *a3) + (float)((float)(v7 - v16) * v8))
      + (float)((float)((float)(v3 * v5) + v15) * v9);
  a2[1] = (float)((float)((float)(v7 + v16) * v12) + (float)((float)(v13 - v18) * v8))
        + (float)((float)(v19 - v14) * v9);
  result = (float)((float)((float)((float)(v3 * v5) - v15) * v12) + (float)((float)(v19 + v14) * v8))
         + (float)((float)(v13 - v17) * v9);
  a2[2] = result;
  return result;
}


//======================================================================
// Ogre::Quaternion::rotate(Ogre::WorldPos &,Ogre::WorldPos const&)const
// address: 0x00142210   size: 0x1EE (494 bytes)
//======================================================================
int __fastcall Ogre::Quaternion::rotate(float *a1, _DWORD *a2, int *a3)
{
  float v3; // r7
  float v5; // r0
  float v6; // r5
  float v7; // r4
  int result; // r0
  float v9; // [sp+0h] [bp-44h]
  double v10; // [sp+0h] [bp-44h]
  double v11; // [sp+8h] [bp-3Ch]
  float v12; // [sp+10h] [bp-34h]
  double v13; // [sp+10h] [bp-34h]
  float v14; // [sp+24h] [bp-20h]
  float v15; // [sp+2Ch] [bp-18h]
  float v16; // [sp+30h] [bp-14h]
  float v17; // [sp+34h] [bp-10h]
  float v18; // [sp+38h] [bp-Ch]
  float v19; // [sp+3Ch] [bp-8h]

  v3 = *a1;
  v9 = a1[1];
  v5 = v9 + v9;
  v12 = a1[2];
  v6 = a1[3];
  v14 = v6 * (float)(v3 + v3);
  v15 = v6 * (float)(v12 + v12);
  v16 = v9 * (float)(v9 + v9);
  v17 = v12 * (float)(v12 + v12);
  v18 = v3 * (float)(v12 + v12);
  v19 = v9 * (float)(v12 + v12);
  v10 = (double)*a3;
  v11 = (double)a3[1];
  v13 = (double)a3[2];
  *a2 = (int)((float)((float)(1.0 - v16) - v17) * v10
            + (float)((float)(v3 * v5) - v15) * v11
            + (float)(v18 + (float)(v6 * v5)) * v13);
  v7 = 1.0 - (float)(v3 * (float)(v3 + v3));
  a2[1] = (int)((float)((float)(v3 * v5) + v15) * v10 + (float)(v7 - v17) * v11 + (float)(v19 - v14) * v13);
  result = (int)((float)(v18 - (float)(v6 * v5)) * v10 + (float)(v19 + v14) * v11 + (float)(v7 - v16) * v13);
  a2[2] = result;
  return result;
}


//======================================================================
// Ogre::Quaternion::getMatrix(Ogre::Matrix4 &)const
// address: 0x001423FE   size: 0x110 (272 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::getMatrix(Ogre::Quaternion *this, Ogre::Matrix4 *a2)
{
  float v2; // r7
  float v3; // r5
  float v4; // r4
  float v5; // r0
  float v6; // r7
  float v8; // [sp+4h] [bp-28h]
  float v9; // [sp+4h] [bp-28h]
  float v10; // [sp+8h] [bp-24h]
  float v11; // [sp+Ch] [bp-20h]
  float v12; // [sp+14h] [bp-18h]
  float v13; // [sp+18h] [bp-14h]
  float v14; // [sp+1Ch] [bp-10h]
  float v15; // [sp+20h] [bp-Ch]
  float v16; // [sp+24h] [bp-8h]

  v8 = *(float *)this;
  v11 = *((float *)this + 1);
  v2 = *((float *)this + 2);
  v3 = *((float *)this + 3);
  v4 = v2 + v2;
  v12 = v3 * (float)(v8 + v8);
  v13 = v3 * (float)(v11 + v11);
  v14 = v3 * (float)(v2 + v2);
  v15 = v11 * (float)(v11 + v11);
  v16 = v2 * (float)(v2 + v2);
  v5 = *(float *)this * (float)(v11 + v11);
  v6 = v8 * (float)(v11 + v11);
  v10 = v8 * v4;
  *(float *)a2 = (float)(1.0 - v15) - v16;
  *((float *)a2 + 1) = v5 + v14;
  *((float *)a2 + 2) = (float)(v8 * v4) - v13;
  *((_DWORD *)a2 + 3) = 0;
  v9 = 1.0 - (float)(v8 * (float)(v8 + v8));
  *((float *)a2 + 4) = v6 - v14;
  *((float *)a2 + 5) = v9 - v16;
  *((float *)a2 + 6) = (float)(v11 * v4) + v12;
  *((_DWORD *)a2 + 7) = 0;
  *((float *)a2 + 8) = v10 + v13;
  *((float *)a2 + 9) = (float)(v11 * v4) - v12;
  *((float *)a2 + 10) = v9 - v15;
  *((_DWORD *)a2 + 11) = 0;
  *((_DWORD *)a2 + 12) = 0;
  *((_DWORD *)a2 + 13) = 0;
  *((_DWORD *)a2 + 14) = 0;
  *((_DWORD *)a2 + 15) = 1065353216;
  return v9 - v15;
}


//======================================================================
// Ogre::Quaternion::getMatrix(Ogre::Matrix3 &)const
// address: 0x0014250E   size: 0xFC (252 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::getMatrix(Ogre::Quaternion *this, Ogre::Matrix3 *a2)
{
  float v2; // r7
  float v3; // r5
  float v4; // r4
  float v5; // r0
  float v6; // r7
  float v7; // r5
  float v8; // r4
  float result; // r0
  float v10; // [sp+4h] [bp-28h]
  float v11; // [sp+4h] [bp-28h]
  float v12; // [sp+8h] [bp-24h]
  float v13; // [sp+14h] [bp-18h]
  float v14; // [sp+18h] [bp-14h]
  float v15; // [sp+1Ch] [bp-10h]
  float v16; // [sp+24h] [bp-8h]

  v10 = *(float *)this;
  v12 = *((float *)this + 1);
  v2 = *((float *)this + 2);
  v3 = *((float *)this + 3);
  v4 = v2 + v2;
  v13 = v3 * (float)(v10 + v10);
  v14 = v3 * (float)(v12 + v12);
  v15 = v3 * (float)(v2 + v2);
  v16 = v2 * (float)(v2 + v2);
  v5 = *(float *)this * (float)(v12 + v12);
  v6 = v10 * (float)(v12 + v12);
  v7 = v10 * v4;
  v8 = v12 * v4;
  *(float *)a2 = (float)(1.0 - (float)(v12 * (float)(v12 + v12))) - v16;
  *((float *)a2 + 1) = v5 + v15;
  *((float *)a2 + 2) = v7 - v14;
  v11 = 1.0 - (float)(v10 * (float)(v10 + v10));
  *((float *)a2 + 3) = v6 - v15;
  *((float *)a2 + 4) = v11 - v16;
  *((float *)a2 + 5) = v8 + v13;
  *((float *)a2 + 6) = v7 + v14;
  *((float *)a2 + 7) = v8 - v13;
  result = v11 - (float)(v12 * (float)(v12 + v12));
  *((float *)a2 + 8) = result;
  return result;
}


//======================================================================
// Ogre::Quaternion::getAxisX(void)const
// address: 0x0014260A   size: 0x8E (142 bytes)
//======================================================================
float *__fastcall Ogre::Quaternion::getAxisX(float *this, float *a2)
{
  float v2; // r6
  float v3; // r5
  float v4; // [sp+8h] [bp-Ch]
  float v5; // [sp+Ch] [bp-8h]

  v2 = a2[1] + a2[1];
  v4 = a2[2];
  v5 = a2[3];
  v3 = *a2;
  *this = (float)(1.0 - (float)(a2[1] * v2)) - (float)(v4 * (float)(v4 + v4));
  *(this + 1) = (float)(v3 * v2) + (float)(v5 * (float)(v4 + v4));
  *(this + 2) = (float)(v3 * (float)(v4 + v4)) - (float)(v5 * v2);
  return this;
}


//======================================================================
// Ogre::Quaternion::getAxisY(void)const
// address: 0x00142698   size: 0x94 (148 bytes)
//======================================================================
float *__fastcall Ogre::Quaternion::getAxisY(float *this, float *a2)
{
  float v2; // r5
  float v3; // r6
  float v4; // [sp+0h] [bp-14h]
  float v5; // [sp+4h] [bp-10h]
  float v6; // [sp+8h] [bp-Ch]

  v2 = *a2;
  v6 = *a2 + *a2;
  v4 = a2[1];
  v5 = a2[2];
  v3 = a2[3];
  *this = (float)(*a2 * (float)(v4 + v4)) - (float)(v3 * (float)(v5 + v5));
  *(this + 1) = (float)(1.0 - (float)(v2 * v6)) - (float)(v5 * (float)(v5 + v5));
  *(this + 2) = (float)(v4 * (float)(v5 + v5)) + (float)(v3 * v6);
  return this;
}


//======================================================================
// Ogre::Quaternion::getAxisZ(void)const
// address: 0x0014272C   size: 0x92 (146 bytes)
//======================================================================
float *__fastcall Ogre::Quaternion::getAxisZ(float *this, float *a2)
{
  float v2; // r6
  float v3; // r5
  float v4; // [sp+0h] [bp-14h]
  float v5; // [sp+4h] [bp-10h]
  float v6; // [sp+Ch] [bp-8h]

  v2 = *a2;
  v3 = a2[1];
  v5 = *a2 + *a2;
  v6 = a2[2] + a2[2];
  v4 = a2[3];
  *this = (float)(*a2 * v6) + (float)(v4 * (float)(v3 + v3));
  *(this + 1) = (float)(v3 * v6) - (float)(v4 * v5);
  *(this + 2) = (float)(1.0 - (float)(v2 * v5)) - (float)(v3 * (float)(v3 + v3));
  return this;
}


//======================================================================
// Ogre::Quaternion::setMatrix(Ogre::Matrix4 const&)
// address: 0x001427BE   size: 0x17A (378 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::setMatrix(Ogre::Quaternion *this, const Ogre::Matrix4 *a2)
{
  float v3; // r6
  float v5; // r1
  float v6; // r5
  int v7; // r3
  unsigned int v8; // r6
  int v9; // r1
  int v10; // r2
  float v11; // r0
  float v12; // r1
  float v13; // r0
  float v15; // [sp+0h] [bp-34h]
  unsigned int v16; // [sp+0h] [bp-34h]
  float v17; // [sp+4h] [bp-30h]
  unsigned int v18; // [sp+4h] [bp-30h]
  char *v19; // [sp+8h] [bp-2Ch]
  char *v20; // [sp+Ch] [bp-28h]
  char *v21; // [sp+10h] [bp-24h]
  _DWORD v22[3]; // [sp+18h] [bp-1Ch]
  _DWORD v23[4]; // [sp+24h] [bp-10h] BYREF

  v3 = *(float *)a2;
  v15 = *((float *)a2 + 5);
  v17 = *((float *)a2 + 10);
  if ( (float)((float)(*(float *)a2 + v15) + v17) <= 0.0 )
  {
    v22[0] = 1;
    v22[1] = 2;
    v22[2] = 0;
    v7 = 2;
    if ( v17 <= *((float *)a2 + 4 * (v15 > v3) + (v15 > v3)) )
      v7 = v15 > v3;
    v8 = 4 * v7;
    v9 = v22[v7];
    v10 = v22[v9];
    v19 = (char *)a2 + 16 * v7;
    v16 = 4 * v9;
    v21 = (char *)a2 + 16 * v10;
    v18 = 4 * v10;
    v20 = (char *)a2 + 16 * v9;
    v11 = (float)((float)(*(float *)&v19[4 * v7] - *(float *)&v20[4 * v9]) - *(float *)&v21[4 * v10]) + 1.0;
    v13 = Ogre::Sqrt((Ogre *)LODWORD(v11), v12);
    v23[1] = (char *)this + 4;
    v23[2] = (char *)this + 8;
    v23[0] = this;
    *(float *)v23[v8 / 4] = v13 * 0.5;
    *((float *)this + 3) = (float)(*(float *)&v20[v18] - *(float *)&v21[v16]) * (float)(0.5 / v13);
    *(float *)v23[v16 / 4] = (float)(*(float *)&v19[v16] + *(float *)&v20[v8]) * (float)(0.5 / v13);
    *(float *)v23[v18 / 4] = (float)(*(float *)&v19[v18] + *(float *)&v21[v8]) * (float)(0.5 / v13);
  }
  else
  {
    v6 = Ogre::Sqrt(COERCE_OGRE_((float)((float)(v3 + v15) + v17) + 1.0), v5);
    *((float *)this + 3) = v6 * 0.5;
    *(float *)this = (float)(*((float *)a2 + 6) - *((float *)a2 + 9)) * (float)(0.5 / v6);
    *((float *)this + 1) = (float)(*((float *)a2 + 8) - *((float *)a2 + 2)) * (float)(0.5 / v6);
    *((float *)this + 2) = (float)(*((float *)a2 + 1) - *((float *)a2 + 4)) * (float)(0.5 / v6);
  }
  return Ogre::Quaternion::normalize(this);
}


//======================================================================
// Ogre::Quaternion::Quaternion(Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x00142938   size: 0x104 (260 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10QuaternionC1ERKNS_7Vector3ES3_'
Ogre::Quaternion *__fastcall Ogre::Quaternion::Quaternion(Ogre::Quaternion *a1, float *a2, float *a3)
{
  float v3; // r3
  float v4; // r1
  float v5; // r3
  float v6; // r2
  float v7; // r4
  float v10; // [sp+1Ch] [bp-80h] BYREF
  float v11; // [sp+20h] [bp-7Ch]
  float v12; // [sp+24h] [bp-78h]
  float v13; // [sp+28h] [bp-74h] BYREF
  float v14; // [sp+2Ch] [bp-70h]
  float v15; // [sp+30h] [bp-6Ch]
  float v16[3]; // [sp+34h] [bp-68h] BYREF
  float v17[3]; // [sp+40h] [bp-5Ch] BYREF
  float v18[3]; // [sp+4Ch] [bp-50h] BYREF
  float v19[17]; // [sp+58h] [bp-44h] BYREF

  v10 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v11 = v3;
  v13 = *a3;
  v5 = a3[1];
  v6 = a3[2];
  v12 = v4;
  v14 = v5;
  v15 = v6;
  Ogre::Normalize(&v10);
  Ogre::Normalize(&v13);
  v16[2] = v15;
  v16[1] = v14;
  v16[0] = v13;
  v7 = (float)((float)(v10 * v13) + (float)(v11 * v14)) + (float)(v12 * v15);
  if ( v7 > 0.995 || v7 < -0.995 )
  {
    v16[0] = v11;
    v16[1] = v12;
    v16[2] = v10;
  }
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v19);
  Ogre::CrossProduct(v17, v16, &v10);
  Ogre::Normalize(v17);
  Ogre::CrossProduct(v18, &v10, v17);
  qmemcpy(v19, v17, 12);
  v19[5] = v18[1];
  v19[3] = 0.0;
  v19[4] = v18[0];
  v19[7] = 0.0;
  v19[9] = v11;
  memset(&v19[11], 0, 16);
  v19[6] = v18[2];
  v19[10] = v12;
  v19[8] = v10;
  v19[15] = 1.0;
  Ogre::Quaternion::setMatrix(a1, (const Ogre::Matrix4 *)v19);
  return a1;
}


//======================================================================
// Ogre::Quaternion::setRotateArc(Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x00142A44   size: 0xAE (174 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::setRotateArc(
        Ogre::Quaternion *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3)
{
  float v4; // r6
  float result; // r0
  int v6; // r6
  int v7; // r3
  int v8; // r3
  float v9; // r7
  float v10; // r3
  _DWORD v11[3]; // [sp+8h] [bp-1Ch] BYREF
  float v12[4]; // [sp+14h] [bp-10h] BYREF

  v4 = (float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a2 + 1) * *((float *)a3 + 1)))
     + (float)(*((float *)a2 + 2) * *((float *)a3 + 2));
  if ( v4 <= -0.99999 )
  {
    result = COERCE_FLOAT(Ogre::GetPerpendicular((Ogre *)v11, (Ogre::Vector3 *)v12, a2, a3));
    v6 = v11[2];
    *((_DWORD *)this + 1) = v11[1];
    v7 = v11[0];
    *((_DWORD *)this + 2) = v6;
    *(_DWORD *)this = v7;
    v8 = 0;
LABEL_5:
    *((_DWORD *)this + 3) = v8;
    return result;
  }
  LODWORD(result) = v4 >= 1.0;
  if ( v4 >= 1.0 )
  {
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 1) = 0;
    *(_DWORD *)this = 0;
    v8 = 1065353216;
    goto LABEL_5;
  }
  Ogre::CrossProduct(v12, (float *)a2, (float *)a3);
  v9 = v12[2];
  *((float *)this + 1) = v12[1];
  v10 = v12[0];
  *((float *)this + 2) = v9;
  *(float *)this = v10;
  *((float *)this + 3) = v4 + 1.0;
  return Ogre::Quaternion::normalize(this);
}


//======================================================================
// Ogre::Quaternion::setEulerAngle(float,float,float)
// address: 0x00142AF8   size: 0xFA (250 bytes)
//======================================================================
float __fastcall Ogre::Quaternion::setEulerAngle(Ogre::Quaternion *this, float a2, float a3, float a4)
{
  float v7; // r0
  float v8; // r1
  float v9; // r6
  float v10; // r1
  float v11; // r6
  float v12; // r1
  float v13; // r5
  float v14; // r1
  float v15; // r5
  float v16; // r1
  float v17; // r7
  float v18; // r1
  float v20; // [sp+4h] [bp-18h]
  float v21; // [sp+8h] [bp-14h]
  float v22; // [sp+Ch] [bp-10h]
  float v23; // [sp+10h] [bp-Ch]

  v7 = a2 * 0.5;
  v9 = v7;
  v20 = Ogre::Sin((Ogre *)LODWORD(v7), v8);
  v11 = Ogre::Cos((Ogre *)LODWORD(v9), v10);
  v13 = a3 * 0.5;
  v21 = Ogre::Sin((Ogre *)LODWORD(v13), v12);
  v15 = Ogre::Cos((Ogre *)LODWORD(v13), v14);
  v17 = a4 * 0.5;
  v22 = Ogre::Sin((Ogre *)LODWORD(v17), v16);
  v23 = Ogre::Cos((Ogre *)LODWORD(v17), v18);
  *(float *)this = (float)((float)(v23 * v11) * v21) + (float)((float)(v22 * v15) * v20);
  *((float *)this + 1) = (float)((float)(v23 * v20) * v15) - (float)((float)(v22 * v11) * v21);
  *((float *)this + 2) = (float)((float)(v22 * v11) * v15) - (float)((float)(v23 * v21) * v20);
  *((float *)this + 3) = (float)((float)(v23 * v11) * v15) + (float)((float)(v22 * v21) * v20);
  return Ogre::Quaternion::normalize(this);
}

