// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::Vec3f

//======================================================================
// ozcollide::Vec3f::normalize(void)
// address: 0x001D089E   size: 0x78 (120 bytes)
//======================================================================
float __fastcall ozcollide::Vec3f::normalize(ozcollide::Vec3f *this)
{
  float v2; // r0
  float v3; // r5
  float result; // r0

  v2 = j_sqrt((float)((float)((float)(*(float *)this * *(float *)this)
                            + (float)(*((float *)this + 1) * *((float *)this + 1)))
                    + (float)(*((float *)this + 2) * *((float *)this + 2))));
  v3 = v2;
  LODWORD(result) = v2 == 0.0;
  if ( result == 0.0 )
  {
    *(float *)this = *(float *)this * (float)(1.0 / v3);
    *((float *)this + 1) = *((float *)this + 1) * (float)(1.0 / v3);
    result = *((float *)this + 2) * (float)(1.0 / v3);
    *((float *)this + 2) = result;
  }
  return result;
}


//======================================================================
// ozcollide::Vec3f::dot(ozcollide::Vec3f const&)const
// address: 0x001D0B62   size: 0x34 (52 bytes)
//======================================================================
float __fastcall ozcollide::Vec3f::dot(ozcollide::Vec3f *this, const ozcollide::Vec3f *a2)
{
  return (float)((float)(*(float *)this * *(float *)a2) + (float)(*((float *)this + 1) * *((float *)a2 + 1)))
       + (float)(*((float *)this + 2) * *((float *)a2 + 2));
}


//======================================================================
// ozcollide::Vec3f::operator*=(float)
// address: 0x001D164A   size: 0x24 (36 bytes)
//======================================================================
float __fastcall ozcollide::Vec3f::operator*=(float *a1, float a2)
{
  float result; // r0

  *a1 = *a1 * a2;
  a1[1] = a1[1] * a2;
  result = a1[2] * a2;
  a1[2] = result;
  return result;
}


//======================================================================
// ozcollide::Vec3f::operator*(ozcollide::Vec3f const&)const
// address: 0x001D16DA   size: 0x30 (48 bytes)
//======================================================================
float *__fastcall ozcollide::Vec3f::operator*(float *result, float *a2, float *a3)
{
  float v3; // r7
  float v4; // [sp+4h] [bp-8h]

  v3 = a2[1] * a3[1];
  v4 = a2[2] * a3[2];
  *result = *a2 * *a3;
  result[1] = v3;
  result[2] = v4;
  return result;
}


//======================================================================
// ozcollide::Vec3f::operator-(ozcollide::Vec3f const&)const
// address: 0x001D3CE8   size: 0x30 (48 bytes)
//======================================================================
float *__fastcall ozcollide::Vec3f::operator-(float *result, float *a2, float *a3)
{
  float v3; // r7
  float v4; // [sp+4h] [bp-8h]

  v3 = a2[1] - a3[1];
  v4 = a2[2] - a3[2];
  *result = *a2 - *a3;
  result[1] = v3;
  result[2] = v4;
  return result;
}


//======================================================================
// ozcollide::Vec3f::operator+(ozcollide::Vec3f const&)const
// address: 0x001D3D18   size: 0x30 (48 bytes)
//======================================================================
float *__fastcall ozcollide::Vec3f::operator+(float *result, float *a2, float *a3)
{
  float v3; // r7
  float v4; // [sp+4h] [bp-8h]

  v3 = a2[1] + a3[1];
  v4 = a2[2] + a3[2];
  *result = *a2 + *a3;
  result[1] = v3;
  result[2] = v4;
  return result;
}


//======================================================================
// ozcollide::Vec3f::len(void)const
// address: 0x001D3D48   size: 0x40 (64 bytes)
//======================================================================
float __fastcall ozcollide::Vec3f::len(ozcollide::Vec3f *this)
{
  return j_sqrt((float)((float)((float)(*(float *)this * *(float *)this)
                              + (float)(*((float *)this + 1) * *((float *)this + 1)))
                      + (float)(*((float *)this + 2) * *((float *)this + 2))));
}


//======================================================================
// ozcollide::Vec3f::lenSq(void)const
// address: 0x001D3D88   size: 0x34 (52 bytes)
//======================================================================
float __fastcall ozcollide::Vec3f::lenSq(ozcollide::Vec3f *this)
{
  return (float)((float)(*(float *)this * *(float *)this) + (float)(*((float *)this + 1) * *((float *)this + 1)))
       + (float)(*((float *)this + 2) * *((float *)this + 2));
}


//======================================================================
// ozcollide::Vec3f::operator|(ozcollide::Vec3f const&)const
// address: 0x001D59C8   size: 0x72 (114 bytes)
//======================================================================
float *__fastcall ozcollide::Vec3f::operator|(float *result, float *a2, float *a3)
{
  float v3; // r6
  float v4; // r7
  float v5; // r5
  float v6; // [sp+0h] [bp-14h]
  float v7; // [sp+4h] [bp-10h]
  float v8; // [sp+8h] [bp-Ch]

  v3 = a3[2];
  v6 = a2[1];
  v4 = a2[2];
  v5 = *a2;
  v7 = a3[1];
  v8 = *a3;
  *result = (float)(v6 * v3) - (float)(v4 * v7);
  result[1] = (float)(v4 * v8) - (float)(v5 * v3);
  result[2] = (float)(v5 * v7) - (float)(v6 * v8);
  return result;
}

