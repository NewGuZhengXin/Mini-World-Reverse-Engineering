// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::Plane

//======================================================================
// ozcollide::Plane::Plane(void)
// address: 0x001D0916   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide5PlaneC2Ev'
void __fastcall ozcollide::Plane::Plane(ozcollide::Plane *this)
{
  ;
}


//======================================================================
// ozcollide::Plane::Plane(float,float,float,float)
// address: 0x001D0918   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide5PlaneC1Effff'
float *__fastcall ozcollide::Plane::Plane(float *this, float a2, float a3, float a4, float a5)
{
  *(this + 2) = a4;
  *this = a2;
  *(this + 1) = a3;
  *(this + 3) = a5;
  return this;
}


//======================================================================
// ozcollide::Plane::fromPoints(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&)
// address: 0x001D0924   size: 0xF2 (242 bytes)
//======================================================================
unsigned int __fastcall ozcollide::Plane::fromPoints(
        ozcollide::Plane *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Vec3f *a4)
{
  float v5; // r6
  float v6; // r5
  float v7; // r6
  float v8; // r0
  float v9; // r5
  float v10; // r0
  float v11; // r4
  unsigned int result; // r0
  float v13; // [sp+0h] [bp-2Ch]
  float v15; // [sp+8h] [bp-24h]
  float v16; // [sp+Ch] [bp-20h]
  float v17; // [sp+10h] [bp-1Ch]
  float v18; // [sp+1Ch] [bp-10h] BYREF
  float v19; // [sp+20h] [bp-Ch]
  float v20; // [sp+24h] [bp-8h]

  v5 = *((float *)a3 + 1);
  v15 = *(float *)a2 - *(float *)a3;
  v6 = *((float *)a3 + 2);
  v16 = *((float *)a2 + 1) - v5;
  v17 = *((float *)a2 + 2) - v6;
  v13 = *(float *)a4 - *(float *)a3;
  v7 = *((float *)a4 + 1) - v5;
  v8 = *((float *)a4 + 2) - v6;
  v18 = (float)(v7 * v17) - (float)(v8 * v16);
  v19 = (float)(v8 * v15) - (float)(v13 * v17);
  v20 = (float)(v13 * v16) - (float)(v7 * v15);
  ozcollide::Vec3f::normalize((ozcollide::Vec3f *)&v18);
  v9 = v19;
  v10 = v18;
  v11 = v20;
  *((float *)this + 1) = v19;
  *(float *)this = v10;
  *((float *)this + 2) = v11;
  result = COERCE_INT((float)((float)(v10 * *(float *)a2) + (float)(v9 * *((float *)a2 + 1))) + (float)(v11 * *((float *)a2 + 2)))
         + 0x80000000;
  *((_DWORD *)this + 3) = result;
  return result;
}


//======================================================================
// ozcollide::Plane::fromPointsNN(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&)
// address: 0x001D0A16   size: 0xEE (238 bytes)
//======================================================================
unsigned int __fastcall ozcollide::Plane::fromPointsNN(
        ozcollide::Plane *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Vec3f *a4)
{
  float v4; // r6
  float v5; // r5
  float v6; // r7
  float v7; // r6
  float v8; // r0
  float v9; // r5
  float v10; // r4
  float v11; // r0
  unsigned int result; // r0
  float v14; // [sp+Ch] [bp-10h]
  float v15; // [sp+10h] [bp-Ch]
  float v16; // [sp+14h] [bp-8h]

  v4 = *((float *)a3 + 1);
  v14 = *(float *)a2 - *(float *)a3;
  v5 = *((float *)a3 + 2);
  v15 = *((float *)a2 + 1) - v4;
  v16 = *((float *)a2 + 2) - v5;
  v6 = *(float *)a4 - *(float *)a3;
  v7 = *((float *)a4 + 1) - v4;
  v8 = *((float *)a4 + 2) - v5;
  v9 = (float)(v7 * v16) - (float)(v8 * v15);
  v10 = (float)(v8 * v14) - (float)(v6 * v16);
  v11 = (float)(v6 * v15) - (float)(v7 * v14);
  *(float *)this = v9;
  *((float *)this + 1) = v10;
  *((float *)this + 2) = v11;
  result = COERCE_INT((float)((float)(v9 * *(float *)a2) + (float)(v10 * *((float *)a2 + 1))) + (float)(v11 * *((float *)a2 + 2)))
         + 0x80000000;
  *((_DWORD *)this + 3) = result;
  return result;
}


//======================================================================
// ozcollide::Plane::fromPointAndNormal(ozcollide::Vec3f const&,ozcollide::Vec3f const&)
// address: 0x001D0B04   size: 0x5E (94 bytes)
//======================================================================
unsigned int __fastcall ozcollide::Plane::fromPointAndNormal(
        ozcollide::Plane *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3)
{
  float v3; // r3
  float v4; // r2
  float v7; // r6
  float v8; // r0
  float v9; // r7
  unsigned int result; // r0
  float v11; // [sp+Ch] [bp+0h] BYREF
  float v12; // [sp+10h] [bp+4h]
  float v13; // [sp+14h] [bp+8h]

  v11 = *(float *)a3;
  v3 = *((float *)a3 + 1);
  v4 = *((float *)a3 + 2);
  v12 = v3;
  v13 = v4;
  ozcollide::Vec3f::normalize((ozcollide::Vec3f *)&v11);
  v7 = v12;
  v8 = v11;
  v9 = v13;
  *((float *)this + 1) = v12;
  *(float *)this = v8;
  *((float *)this + 2) = v9;
  result = COERCE_INT((float)((float)(v8 * *(float *)a2) + (float)(v7 * *((float *)a2 + 1))) + (float)(v9 * *((float *)a2 + 2)))
         + 0x80000000;
  *((_DWORD *)this + 3) = result;
  return result;
}


//======================================================================
// ozcollide::Plane::dist(ozcollide::Vec3f const&)const
// address: 0x001D3DBC   size: 0x3A (58 bytes)
//======================================================================
float __fastcall ozcollide::Plane::dist(ozcollide::Plane *this, const ozcollide::Vec3f *a2)
{
  return (float)((float)((float)(*(float *)this * *(float *)a2) + (float)(*((float *)this + 1) * *((float *)a2 + 1)))
               + (float)(*((float *)this + 2) * *((float *)a2 + 2)))
       + *((float *)this + 3);
}


//======================================================================
// ozcollide::Plane::intersectWithLine(ozcollide::Vec3f const&,ozcollide::Vec3f const&,float &)
// address: 0x001D5B02   size: 0x70 (112 bytes)
//======================================================================
int __fastcall ozcollide::Plane::intersectWithLine(
        ozcollide::Plane *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        float *a4)
{
  float v6; // r5
  int v7; // r3
  float v10[4]; // [sp+Ch] [bp-10h] BYREF

  ozcollide::Vec3f::operator-(v10, (float *)a3, (float *)a2);
  v6 = (float)((float)(*(float *)this * v10[0]) + (float)(*((float *)this + 1) * v10[1]))
     + (float)(*((float *)this + 2) * v10[2]);
  v7 = 0;
  if ( v6 != 0.0 )
  {
    *a4 = COERCE_FLOAT(
            ((int (__fastcall *)(ozcollide::Plane *, const ozcollide::Vec3f *))ozcollide::Plane::dist)(this, a2)
          + 0x80000000)
        / v6;
    return 1;
  }
  return v7;
}


//======================================================================
// ozcollide::Plane::dot(ozcollide::Vec3f const&)const
// address: 0x001D7250   size: 0x34 (52 bytes)
//======================================================================
float __fastcall ozcollide::Plane::dot(ozcollide::Plane *this, const ozcollide::Vec3f *a2)
{
  return (float)((float)(*(float *)this * *(float *)a2) + (float)(*((float *)this + 1) * *((float *)a2 + 1)))
       + (float)(*((float *)this + 2) * *((float *)a2 + 2));
}

