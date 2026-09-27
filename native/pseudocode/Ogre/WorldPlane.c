// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::WorldPlane

//======================================================================
// Ogre::WorldPlane::relativePlane(Ogre::Plane &,Ogre::WorldPos const&)const
// address: 0x0017CA78   size: 0x78 (120 bytes)
//======================================================================
unsigned int __fastcall Ogre::WorldPlane::relativePlane(
        Ogre::WorldPlane *this,
        Ogre::Plane *a2,
        const Ogre::WorldPos *a3)
{
  float v5; // r0
  float v6; // r7
  float v7; // r0
  float v8; // r0
  const Ogre::Vector3 *v9; // r2
  int v10; // r3
  int v11; // r4
  unsigned int result; // r0
  float v13; // [sp+4h] [bp-18h]
  float v14[4]; // [sp+Ch] [bp-10h] BYREF

  v5 = (double)(*((_DWORD *)this + 4) - *((_DWORD *)a3 + 1)) / 10.0;
  v6 = v5;
  v7 = (double)(*((_DWORD *)this + 5) - *((_DWORD *)a3 + 2)) / 10.0;
  v13 = v7;
  v8 = (double)(*((_DWORD *)this + 3) - *(_DWORD *)a3) / 10.0;
  v9 = *(const Ogre::Vector3 **)this;
  *(_DWORD *)a2 = *(_DWORD *)this;
  v14[2] = v13;
  v10 = *((_DWORD *)this + 1);
  v14[0] = v8;
  *((_DWORD *)a2 + 1) = v10;
  v11 = *((_DWORD *)this + 2);
  v14[1] = v6;
  *((_DWORD *)a2 + 2) = v11;
  result = ((int (__fastcall *)(Ogre *, const Ogre::Vector3 *, const Ogre::Vector3 *))Ogre::DotProduct)(
             a2,
             (const Ogre::Vector3 *)v14,
             v9)
         + 0x80000000;
  *((_DWORD *)a2 + 3) = result;
  return result;
}


//======================================================================
// Ogre::WorldPlane::distanceToPoint(Ogre::WorldPos const&)const
// address: 0x0017CAF8   size: 0x60 (96 bytes)
//======================================================================
float __fastcall Ogre::WorldPlane::distanceToPoint(Ogre::WorldPlane *this, const Ogre::WorldPos *a2)
{
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r5
  const Ogre::Vector3 *v7; // r2
  float v8; // r0
  float v10[4]; // [sp+4h] [bp-10h] BYREF

  v3 = (double)(*((_DWORD *)a2 + 1) - *((_DWORD *)this + 4)) / 10.0;
  v4 = v3;
  v5 = (double)(*((_DWORD *)a2 + 2) - *((_DWORD *)this + 5)) / 10.0;
  v6 = v5;
  v8 = (double)(*(_DWORD *)a2 - *((_DWORD *)this + 3)) / 10.0;
  v10[0] = v8;
  v10[1] = v4;
  v10[2] = v6;
  return Ogre::DotProduct((Ogre *)v10, this, v7);
}


//======================================================================
// Ogre::WorldPlane::mirrorPoint(Ogre::WorldPos &,Ogre::WorldPos const&)const
// address: 0x0017CB60   size: 0x66 (102 bytes)
//======================================================================
__int64 __fastcall Ogre::WorldPlane::mirrorPoint(Ogre::WorldPlane *this, Ogre::WorldPos *a2, const Ogre::WorldPos *a3)
{
  float v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch]

  v6 = Ogre::WorldPlane::distanceToPoint(this, a3);
  LODWORD(v8) = *((_DWORD *)a3 + 1) - (int)(float)((float)((float)(v6 + v6) * *((float *)this + 1)) * 10.0);
  HIDWORD(v8) = *((_DWORD *)a3 + 2) - (int)(float)((float)((float)(v6 + v6) * *((float *)this + 2)) * 10.0);
  *(_DWORD *)a2 = *(_DWORD *)a3 - (int)(float)((float)((float)(v6 + v6) * *(float *)this) * 10.0);
  *(_QWORD *)((char *)a2 + 4) = v8;
  return v8;
}


//======================================================================
// Ogre::WorldPlane::mirrorVector(Ogre::Vector3 &,Ogre::Vector3 const&)const
// address: 0x0017CBCC   size: 0x56 (86 bytes)
//======================================================================
__int64 __fastcall Ogre::WorldPlane::mirrorVector(Ogre::WorldPlane *this, Ogre::Vector3 *a2, const Ogre::Vector3 *a3)
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

