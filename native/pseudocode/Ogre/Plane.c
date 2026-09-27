// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Plane

//======================================================================
// Ogre::Plane::distanceToPoint(Ogre::Vector3 const&)const
// address: 0x0017C52E   size: 0x10 (16 bytes)
//======================================================================
float __fastcall Ogre::Plane::distanceToPoint(Ogre::Plane *this, const Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
{
  return Ogre::DotProduct(this, a2, a3) + *((float *)this + 3);
}


//======================================================================
// Ogre::Plane::rotate(Ogre::Matrix4 const&)
// address: 0x0017C53E   size: 0xE (14 bytes)
//======================================================================
float __fastcall Ogre::Plane::rotate(Ogre::Plane *this, const Ogre::Matrix4 *a2)
{
  return Ogre::Matrix4::transformNormal(a2, this, this);
}


//======================================================================
// Ogre::Plane::transformIT(Ogre::Matrix4 const&)
// address: 0x0017C54C   size: 0x124 (292 bytes)
//======================================================================
float __fastcall Ogre::Plane::transformIT(Ogre::Plane *this, const Ogre::Matrix4 *a2)
{
  float v4; // r7
  float result; // r0
  float v6; // [sp+4h] [bp-18h]
  float v7; // [sp+8h] [bp-14h]
  float v8; // [sp+Ch] [bp-10h]
  float v9; // [sp+10h] [bp-Ch]
  float v10; // [sp+14h] [bp-8h]

  v6 = *((float *)this + 1);
  v7 = *((float *)this + 2);
  v8 = *((float *)this + 3);
  v9 = (float)((float)((float)(*(float *)this * *((float *)a2 + 1)) + (float)(v6 * *((float *)a2 + 5)))
             + (float)(v7 * *((float *)a2 + 9)))
     + (float)(v8 * *((float *)a2 + 13));
  v10 = (float)((float)((float)(*(float *)this * *((float *)a2 + 2)) + (float)(v6 * *((float *)a2 + 6)))
              + (float)(v7 * *((float *)a2 + 10)))
      + (float)(v8 * *((float *)a2 + 14));
  v4 = (float)((float)((float)(*(float *)this * *((float *)a2 + 3)) + (float)(v6 * *((float *)a2 + 7)))
             + (float)(v7 * *((float *)a2 + 11)))
     + (float)(v8 * *((float *)a2 + 15));
  result = (float)((float)((float)(*(float *)this * *(float *)a2) + (float)(v6 * *((float *)a2 + 4)))
                 + (float)(v7 * *((float *)a2 + 8)))
         + (float)(v8 * *((float *)a2 + 12));
  *(float *)this = result;
  *((float *)this + 3) = v4;
  *((float *)this + 1) = v9;
  *((float *)this + 2) = v10;
  return result;
}


//======================================================================
// Ogre::Plane::transform(Ogre::Matrix4 const&)
// address: 0x0017C670   size: 0x28 (40 bytes)
//======================================================================
float __fastcall Ogre::Plane::transform(Ogre::Plane *this, const Ogre::Matrix4 *a2)
{
  _DWORD v5[16]; // [sp+0h] [bp-40h] BYREF

  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v5);
  Ogre::Matrix4::inverse(a2, (Ogre::Matrix4 *)v5);
  Ogre::Matrix4::transpose(v5);
  return Ogre::Plane::transformIT(this, (const Ogre::Matrix4 *)v5);
}


//======================================================================
// Ogre::Plane::normalize(void)
// address: 0x0017C698   size: 0x6C (108 bytes)
//======================================================================
float __fastcall Ogre::Plane::normalize(Ogre::Plane *this)
{
  float v2; // r0
  float result; // r0

  v2 = j_sqrt((float)((float)((float)(*(float *)this * *(float *)this)
                            + (float)(*((float *)this + 1) * *((float *)this + 1)))
                    + (float)(*((float *)this + 2) * *((float *)this + 2))));
  *(float *)this = *(float *)this / v2;
  *((float *)this + 1) = *((float *)this + 1) / v2;
  *((float *)this + 2) = *((float *)this + 2) / v2;
  result = *((float *)this + 3) / v2;
  *((float *)this + 3) = result;
  return result;
}


//======================================================================
// Ogre::Plane::setFromThreePoints(Ogre::Vector3 const&,Ogre::Vector3 const&,Ogre::Vector3 const&)
// address: 0x0017C704   size: 0x146 (326 bytes)
//======================================================================
int __fastcall Ogre::Plane::setFromThreePoints(
        Ogre::Plane *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3,
        const Ogre::Vector3 *a4)
{
  float v5; // r5
  float v6; // r7
  float v7; // r6
  float v8; // r7
  float v9; // r0
  float v10; // r5
  float v11; // r0
  float v12; // r0
  const Ogre::Vector3 *v13; // r2
  float v15; // [sp+0h] [bp-1Ch]
  float v16; // [sp+0h] [bp-1Ch]
  float v18; // [sp+8h] [bp-14h]
  float v19; // [sp+Ch] [bp-10h]
  float v20; // [sp+10h] [bp-Ch]
  float v21; // [sp+14h] [bp-8h]

  v19 = *(float *)a3 - *(float *)a2;
  v15 = *((float *)a2 + 1);
  v20 = *((float *)a3 + 1) - v15;
  v18 = *((float *)a2 + 2);
  v5 = *((float *)a3 + 2) - v18;
  v21 = *(float *)a4 - *(float *)a2;
  v16 = *((float *)a4 + 1) - v15;
  v6 = *((float *)a4 + 2) - v18;
  v7 = (float)(v20 * v6) - (float)(v5 * v16);
  v8 = (float)(v5 * v21) - (float)(v19 * v6);
  v9 = (float)(v19 * v16) - (float)(v20 * v21);
  *(float *)this = v7;
  *((float *)this + 2) = v9;
  *((float *)this + 1) = v8;
  if ( (float)((float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9)) >= 1.0e-10 )
  {
    v11 = j_sqrt((float)((float)((float)(v7 * v7) + (float)(v8 * v8)) + (float)(v9 * v9)));
    v10 = v11;
    v12 = 1.0 / v11;
    *(float *)this = *(float *)this * v12;
    *((float *)this + 1) = *((float *)this + 1) * v12;
    *((float *)this + 2) = *((float *)this + 2) * v12;
    *((_DWORD *)this + 3) = ((int (__fastcall *)(Ogre *, const Ogre::Vector3 *, const Ogre::Vector3 *))Ogre::DotProduct)(
                              this,
                              a2,
                              v13)
                          + 0x80000000;
  }
  else
  {
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 3) = 0;
    v10 = 0.0;
  }
  return LODWORD(v10);
}


//======================================================================
// Ogre::Plane::mirrorPoint(Ogre::Vector3 &,Ogre::Vector3 const&)
// address: 0x0017C850   size: 0x56 (86 bytes)
//======================================================================
__int64 __fastcall Ogre::Plane::mirrorPoint(Ogre::Plane *this, Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
{
  float v6; // r0
  float v7; // r7
  __int64 v9; // [sp+0h] [bp-Ch]

  v6 = Ogre::Plane::distanceToPoint(this, a3, a3);
  v7 = COERCE_FLOAT(LODWORD(v6) + 0x80000000) + COERCE_FLOAT(LODWORD(v6) + 0x80000000);
  *(float *)&v9 = (float)(v7 * *((float *)this + 1)) + *((float *)a3 + 1);
  *((float *)&v9 + 1) = (float)(v7 * *((float *)this + 2)) + *((float *)a3 + 2);
  *(float *)a2 = *(float *)a3 + (float)(v7 * *(float *)this);
  *(_QWORD *)((char *)a2 + 4) = v9;
  return v9;
}


//======================================================================
// Ogre::Plane::mirrorVector(Ogre::Vector3 &,Ogre::Vector3 const&)
// address: 0x0017C8A6   size: 0x56 (86 bytes)
//======================================================================
__int64 __fastcall Ogre::Plane::mirrorVector(Ogre::Plane *this, Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
{
  float v6; // r0
  float v7; // r7
  __int64 v9; // [sp+0h] [bp-Ch]

  v6 = Ogre::DotProduct(this, a3, a3);
  v7 = COERCE_FLOAT(LODWORD(v6) + 0x80000000) + COERCE_FLOAT(LODWORD(v6) + 0x80000000);
  *(float *)&v9 = (float)(v7 * *((float *)this + 1)) + *((float *)a3 + 1);
  *((float *)&v9 + 1) = (float)(v7 * *((float *)this + 2)) + *((float *)a3 + 2);
  *(float *)a2 = *(float *)a3 + (float)(v7 * *(float *)this);
  *(_QWORD *)((char *)a2 + 4) = v9;
  return v9;
}


//======================================================================
// Ogre::Plane::boxSide(Ogre::BoxBound const&)const
// address: 0x0017C8FC   size: 0x11C (284 bytes)
//======================================================================
int __fastcall Ogre::Plane::boxSide(Ogre::Plane *this, const Ogre::BoxBound *a2, const Ogre::Vector3 *a3)
{
  float v3; // r4
  float v4; // r6
  float v5; // r7
  float v6; // r5
  float v7; // r0
  float v8; // r7
  float v9; // r6
  float v10; // r1
  float v11; // r0
  float v12; // r1
  float v13; // r4
  int result; // r0
  float v16; // [sp+4h] [bp-20h]
  float v17; // [sp+8h] [bp-1Ch]
  float v18; // [sp+Ch] [bp-18h]
  float v19[4]; // [sp+14h] [bp-10h] BYREF

  v3 = *((float *)a2 + 1);
  v16 = *(float *)a2;
  v4 = *((float *)a2 + 4);
  v5 = *((float *)a2 + 5);
  v17 = *((float *)a2 + 3);
  v18 = *((float *)a2 + 2);
  v19[0] = (float)(*(float *)a2 + v17) * 0.5;
  v19[1] = (float)(v3 + v4) * 0.5;
  v19[2] = (float)(v18 + v5) * 0.5;
  v6 = Ogre::Plane::distanceToPoint(this, (const Ogre::Vector3 *)v19, a3);
  v7 = (float)(v4 - v3) * 0.5;
  v8 = (float)(v5 - v18) * 0.5;
  v9 = (float)((float)(v17 - v16) * 0.5) * *(float *)this;
  if ( v9 < 0.0 )
    LODWORD(v9) += 0x80000000;
  v10 = v7 * *((float *)this + 1);
  if ( v10 < 0.0 )
    LODWORD(v10) = COERCE_INT(v7 * *((float *)this + 1)) + 0x80000000;
  v11 = v9 + v10;
  v12 = v8 * *((float *)this + 2);
  if ( v12 < 0.0 )
    LODWORD(v12) = COERCE_INT(v8 * *((float *)this + 2)) + 0x80000000;
  v13 = v11 + v12;
  result = 0;
  if ( v6 <= v13 )
    return 2 - (v6 < COERCE_FLOAT(LODWORD(v13) + 0x80000000));
  return result;
}


//======================================================================
// Ogre::Plane::sphereSide(Ogre::SphereBound const&)const
// address: 0x0017CA18   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::Plane::sphereSide(Ogre::Plane *a1, float *a2, const Ogre::Vector3 *a3)
{
  float v3; // r5
  float v4; // r4
  int result; // r0

  v3 = a2[3];
  v4 = Ogre::Plane::distanceToPoint(a1, (const Ogre::Vector3 *)a2, a3);
  result = 0;
  if ( v4 <= v3 )
    return 2 - (v4 < COERCE_FLOAT(LODWORD(v3) + 0x80000000));
  return result;
}


//======================================================================
// Ogre::Plane::boxSphereBoundSide(Ogre::BoxSphereBound const&)const
// address: 0x0017CA46   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::Plane::boxSphereBoundSide(
        Ogre::Plane *this,
        const Ogre::BoxSphereBound *a2,
        const Ogre::Vector3 *a3)
{
  float v4; // r0
  float v5; // r5
  float v6; // r4
  _BOOL4 v7; // r3
  int result; // r0

  v4 = Ogre::Plane::distanceToPoint(this, a2, a3);
  v5 = *((float *)a2 + 6);
  v6 = v4;
  v7 = v4 > v5;
  result = 0;
  if ( !v7 )
    return 2 - (v6 < COERCE_FLOAT(LODWORD(v5) + 0x80000000));
  return result;
}


//======================================================================
// Ogre::Plane::setFromPlaneParam(float const*)
// address: 0x00182C20   size: 0x6E (110 bytes)
//======================================================================
__int64 __fastcall Ogre::Plane::setFromPlaneParam(Ogre::Plane *this, const float *a2)
{
  float v4; // r0
  __int64 v6; // [sp+0h] [bp-Ch]

  LODWORD(v6) = this;
  *((float *)&v6 + 1) = *a2 * *a2;
  v4 = j_sqrt((float)((float)(*((float *)&v6 + 1) + (float)(a2[1] * a2[1])) + (float)(a2[2] * a2[2])));
  *(float *)this = *a2 / v4;
  *((float *)this + 1) = a2[1] / v4;
  *((float *)this + 2) = a2[2] / v4;
  *((float *)this + 3) = a2[3] / v4;
  return v6;
}

