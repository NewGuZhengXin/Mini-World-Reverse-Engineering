// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Matrix3

//======================================================================
// Ogre::Matrix3::identity(void)
// address: 0x001831EE   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Matrix3::identity(_DWORD *this)
{
  *this = 1065353216;
  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *(this + 4) = 1065353216;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 1065353216;
  return this;
}


//======================================================================
// Ogre::Matrix3::det(void)const
// address: 0x00183208   size: 0x92 (146 bytes)
//======================================================================
float __fastcall Ogre::Matrix3::det(Ogre::Matrix3 *this)
{
  return (float)((float)((float)((float)(*(float *)this * *((float *)this + 4))
                               - (float)(*((float *)this + 1) * *((float *)this + 3)))
                       * *((float *)this + 8))
               - (float)((float)((float)(*(float *)this * *((float *)this + 5))
                               - (float)(*((float *)this + 2) * *((float *)this + 3)))
                       * *((float *)this + 7)))
       + (float)((float)((float)(*((float *)this + 1) * *((float *)this + 5))
                       - (float)(*((float *)this + 2) * *((float *)this + 4)))
               * *((float *)this + 6));
}


//======================================================================
// Ogre::Matrix3::inverse(Ogre::Matrix3&)const
// address: 0x0018329A   size: 0x16A (362 bytes)
//======================================================================
float __fastcall Ogre::Matrix3::inverse(Ogre::Matrix3 *this, Ogre::Matrix3 *a2)
{
  float v4; // r6
  float result; // r0

  v4 = Ogre::Matrix3::det(this);
  LODWORD(result) = v4 == 0.0;
  if ( v4 != 0.0 )
  {
    *(float *)a2 = (float)(1.0 / v4)
                 * (float)((float)(*((float *)this + 4) * *((float *)this + 8))
                         - (float)(*((float *)this + 5) * *((float *)this + 7)));
    *((float *)a2 + 1) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 7) * *((float *)this + 2))
                               - (float)(*((float *)this + 8) * *((float *)this + 1)));
    *((float *)a2 + 2) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 1) * *((float *)this + 5))
                               - (float)(*((float *)this + 2) * *((float *)this + 4)));
    *((float *)a2 + 3) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 5) * *((float *)this + 6))
                               - (float)(*((float *)this + 3) * *((float *)this + 8)));
    *((float *)a2 + 4) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 8) * *(float *)this)
                               - (float)(*((float *)this + 6) * *((float *)this + 2)));
    *((float *)a2 + 5) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 2) * *((float *)this + 3))
                               - (float)(*(float *)this * *((float *)this + 5)));
    *((float *)a2 + 6) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 3) * *((float *)this + 7))
                               - (float)(*((float *)this + 4) * *((float *)this + 6)));
    *((float *)a2 + 7) = (float)(1.0 / v4)
                       * (float)((float)(*((float *)this + 6) * *((float *)this + 1))
                               - (float)(*((float *)this + 7) * *(float *)this));
    result = (float)(1.0 / v4)
           * (float)((float)(*(float *)this * *((float *)this + 4))
                   - (float)(*((float *)this + 1) * *((float *)this + 3)));
    *((float *)a2 + 8) = result;
  }
  return result;
}


//======================================================================
// Ogre::Matrix3::inverse(void)
// address: 0x00183404   size: 0x20 (32 bytes)
//======================================================================
float __fastcall Ogre::Matrix3::inverse(Ogre::Matrix3 *this)
{
  int v1; // r5
  int v2; // r6
  int v3; // r5
  int v4; // r6
  int v5; // r5
  int v6; // r6
  _DWORD v8[9]; // [sp+4h] [bp-24h] BYREF

  v1 = *((_DWORD *)this + 1);
  v2 = *((_DWORD *)this + 2);
  v8[0] = *(_DWORD *)this;
  v8[1] = v1;
  v8[2] = v2;
  v3 = *((_DWORD *)this + 4);
  v4 = *((_DWORD *)this + 5);
  v8[3] = *((_DWORD *)this + 3);
  v8[4] = v3;
  v8[5] = v4;
  v5 = *((_DWORD *)this + 7);
  v6 = *((_DWORD *)this + 8);
  v8[6] = *((_DWORD *)this + 6);
  v8[7] = v5;
  v8[8] = v6;
  return Ogre::Matrix3::inverse((Ogre::Matrix3 *)v8, this);
}


//======================================================================
// Ogre::Matrix3::makeRotateVector2Matrix(float)
// address: 0x00183424   size: 0x40 (64 bytes)
//======================================================================
unsigned int __fastcall Ogre::Matrix3::makeRotateVector2Matrix(Ogre::Matrix3 *this, float a2)
{
  double v4; // r4
  float v5; // r0
  float v6; // r7
  float v7; // r0
  unsigned int result; // r0

  Ogre::Matrix3::identity(this);
  v4 = (float)(a2 * 0.017453);
  v5 = j_cos(v4);
  v6 = v5;
  v7 = j_sin(v4);
  *((float *)this + 3) = v7;
  result = LODWORD(v7) + 0x80000000;
  *(float *)this = v6;
  *((float *)this + 4) = v6;
  *((_DWORD *)this + 1) = result;
  return result;
}


//======================================================================
// Ogre::Matrix3::makeTranslateVector2Matrix(float,float)
// address: 0x00183468   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Matrix3::makeTranslateVector2Matrix(Ogre::Matrix3 *this, float a2, float a3)
{
  _DWORD *result; // r0

  result = Ogre::Matrix3::identity(this);
  *((float *)this + 6) = a2;
  *((float *)this + 7) = a3;
  return result;
}


//======================================================================
// Ogre::Matrix3::makeScaleVector2Matrix(float,float)
// address: 0x0018347A   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Matrix3::makeScaleVector2Matrix(Ogre::Matrix3 *this, float a2, float a3)
{
  _DWORD *result; // r0

  result = Ogre::Matrix3::identity(this);
  *(float *)this = a2;
  *((float *)this + 4) = a3;
  return result;
}


//======================================================================
// Ogre::Matrix3::makeScaleMatrix(Ogre::Vector3 const&)
// address: 0x0018348C   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall Ogre::Matrix3::makeScaleMatrix(_DWORD *a1, _DWORD *a2)
{
  _DWORD *result; // r0

  result = Ogre::Matrix3::identity(a1);
  *a1 = *a2;
  a1[4] = a2[1];
  a1[8] = a2[2];
  return result;
}


//======================================================================
// Ogre::Matrix3::transform(Ogre::Vector3 &,Ogre::Vector3 const&)const
// address: 0x001834A4   size: 0xA6 (166 bytes)
//======================================================================
float __fastcall Ogre::Matrix3::transform(Ogre::Matrix3 *this, Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
{
  float v3; // r6
  float v4; // r5
  float result; // r0
  float v6; // [sp+4h] [bp-10h]
  float v7; // [sp+8h] [bp-Ch]

  v3 = *((float *)a3 + 1);
  v4 = *((float *)a3 + 2);
  v6 = (float)((float)(*(float *)a3 * *((float *)this + 1)) + (float)(v3 * *((float *)this + 4)))
     + (float)(v4 * *((float *)this + 7));
  v7 = (float)((float)(*(float *)a3 * *((float *)this + 2)) + (float)(v3 * *((float *)this + 5)))
     + (float)(v4 * *((float *)this + 8));
  result = (float)((float)(*(float *)a3 * *(float *)this) + (float)(v3 * *((float *)this + 3)))
         + (float)(v4 * *((float *)this + 6));
  *(float *)a2 = result;
  *((float *)a2 + 1) = v6;
  *((float *)a2 + 2) = v7;
  return result;
}


//======================================================================
// Ogre::Matrix3::transform(Ogre::Vector2 &,Ogre::Vector2 const&)const
// address: 0x0018354A   size: 0x54 (84 bytes)
//======================================================================
__int64 __fastcall Ogre::Matrix3::transform(__int64 this, const Ogre::Vector2 *a2)
{
  float *v2; // r4
  float v3; // r5
  float v4; // r7
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = this;
  v2 = (float *)this;
  v3 = *((float *)a2 + 1);
  v4 = *(float *)a2 * *(float *)(this + 4);
  *(float *)&this = (float)((float)(*(float *)a2 * *(float *)this) + (float)(v3 * v2[3])) + v2[6];
  *(float *)(HIDWORD(this) + 4) = (float)(v4 + (float)(v3 * v2[4])) + v2[7];
  *(_DWORD *)HIDWORD(this) = this;
  return v6;
}


//======================================================================
// Ogre::Matrix3::transform(Ogre::WorldPos &,Ogre::WorldPos const&)const
// address: 0x0018359E   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall Ogre::Matrix3::transform(Ogre::Matrix3 *this, Ogre::WorldPos *a2, const Ogre::WorldPos *a3)
{
  float v3; // r6
  float v4; // r7
  float v6; // [sp+4h] [bp-10h]
  float v7; // [sp+8h] [bp-Ch]
  float v8; // [sp+Ch] [bp-8h]

  v3 = (float)*(int *)a3;
  v8 = (float)*((int *)a3 + 1);
  v4 = (float)*((int *)a3 + 2);
  v6 = (float)((float)(v3 * *((float *)this + 1)) + (float)(v8 * *((float *)this + 4)))
     + (float)(v4 * *((float *)this + 7));
  v7 = (float)((float)(v3 * *((float *)this + 2)) + (float)(v8 * *((float *)this + 5)))
     + (float)(v4 * *((float *)this + 8));
  *(_DWORD *)a2 = (int)(float)((float)((float)(v3 * *(float *)this) + (float)(v8 * *((float *)this + 3)))
                             + (float)(v4 * *((float *)this + 6)));
  *((_DWORD *)a2 + 1) = (int)v6;
  *((_DWORD *)a2 + 2) = (int)v7;
  return (int)v7;
}

