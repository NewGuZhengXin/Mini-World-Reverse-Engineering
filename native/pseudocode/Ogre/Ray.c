// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::Ray

//======================================================================
// Ogre::Ray::intersectHorizon(float,float *)const
// address: 0x0016D21C   size: 0x4A (74 bytes)
//======================================================================
int __fastcall Ogre::Ray::intersectHorizon(Ogre::Ray *this, float a2, float *a3)
{
  float v3; // r6
  int v5; // r4
  float v6; // r0
  float v7; // r6

  v3 = *((float *)this + 4);
  v5 = 0;
  if ( v3 != 0.0 )
  {
    v6 = (float)(a2 - *((float *)this + 1)) / v3;
    v7 = (float)(a2 - *((float *)this + 1)) / v3;
    if ( v6 >= 0.0 && v7 <= *((float *)this + 6) )
    {
      if ( a3 != nullptr )
        *a3 = v7;
      return 1;
    }
  }
  return v5;
}


//======================================================================
// Ogre::Ray::intersectPlane(Ogre::Plane const*,float *)const
// address: 0x0016D268   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall Ogre::Ray::intersectPlane(float *a1, int a2, const Ogre::Vector3 *a3)
{
  float v5; // r5
  float v6; // r7
  float v7; // r6
  const Ogre::Vector3 *v8; // r2
  float v9; // r4
  float v11; // [sp+8h] [bp-24h]
  float v13[3]; // [sp+10h] [bp-1Ch] BYREF
  float v14[4]; // [sp+1Ch] [bp-10h] BYREF

  v11 = Ogre::DotProduct((Ogre *)(a1 + 3), (const Ogre::Vector3 *)a2, a3);
  if ( v11 < 0.000001 && v11 > -0.000001 )
    return 0;
  v5 = *(float *)(a2 + 12);
  v6 = COERCE_FLOAT(*(_DWORD *)(a2 + 4) + 0x80000000) * v5;
  v7 = COERCE_FLOAT(*(_DWORD *)(a2 + 8) + 0x80000000) * v5;
  v14[0] = COERCE_FLOAT(*(_DWORD *)a2 + 0x80000000) * v5;
  v14[1] = v6;
  v14[2] = v7;
  Ogre::operator-(v13, v14, a1);
  v9 = Ogre::DotProduct((Ogre *)v13, (const Ogre::Vector3 *)a2, v8) / v11;
  if ( v9 < 0.0 || v9 > a1[6] )
    return 0;
  if ( a3 != nullptr )
    *(float *)a3 = v9;
  return 1;
}


//======================================================================
// Ogre::Ray::intersectBox(Ogre::Vector3 const&,Ogre::Vector3 const&,float *)const
// address: 0x0016D330   size: 0x36A (874 bytes)
//======================================================================
int __fastcall Ogre::Ray::intersectBox(Ogre::Ray *this, const Ogre::Vector3 *a2, const Ogre::Vector3 *a3, float *a4)
{
  float v6; // r0
  float v7; // r3
  float v8; // r4
  float v10; // r6
  float v11; // r3
  float v12; // r4
  _BOOL4 v13; // r0
  int v14; // r3
  float v15; // r7
  float v16; // r5
  float v17; // r3
  float v18; // r4
  float v19; // r0
  float v20; // [sp+0h] [bp-4Ch]
  float v21; // [sp+0h] [bp-4Ch]
  float v22; // [sp+0h] [bp-4Ch]
  float v24; // [sp+8h] [bp-44h]
  float v25; // [sp+Ch] [bp-40h]
  float v27; // [sp+14h] [bp-38h]
  float v28; // [sp+14h] [bp-38h]
  float v29[3]; // [sp+18h] [bp-34h] BYREF
  float v30; // [sp+24h] [bp-28h] BYREF
  float v31; // [sp+28h] [bp-24h]
  float v32; // [sp+2Ch] [bp-20h]
  float v33; // [sp+30h] [bp-1Ch] BYREF
  float v34; // [sp+34h] [bp-18h]
  float v35; // [sp+38h] [bp-14h]
  float v36; // [sp+3Ch] [bp-10h] BYREF
  float v37; // [sp+40h] [bp-Ch]
  float v38; // [sp+44h] [bp-8h]

  v20 = (float)(*((float *)a2 + 2) + *((float *)a3 + 2)) * 0.5;
  v6 = *(float *)a2 + *(float *)a3;
  v29[1] = (float)(*((float *)a2 + 1) + *((float *)a3 + 1)) * 0.5;
  v29[0] = v6 * 0.5;
  v29[2] = v20;
  Ogre::operator-(&v30, (float *)this, v29);
  Ogre::operator-(&v33, (float *)a3, v29);
  Ogre::operator-(&v36, (float *)a2, v29);
  v21 = v30;
  v25 = v36;
  if ( v30 >= v36 && v30 <= v33 && v31 >= v37 && v31 <= v34 && v32 >= v38 && v32 <= v35 )
  {
    if ( a4 != nullptr )
      *a4 = 0.0;
    return 7;
  }
  if ( (v30 < v36 || v30 > v33) && *((float *)this + 3) != 0.0 )
  {
    v7 = v36;
    if ( v30 >= v36 )
      v7 = v33;
    v8 = (float)(v7 - v30) / *((float *)this + 3);
    if ( v8 < 0.0 )
      return -1;
    v27 = *((float *)this + 5);
    if ( (float)((float)(v8 * *((float *)this + 4)) + v31) > v37
      && (float)((float)(v8 * *((float *)this + 4)) + v31) < v34
      && (float)(v32 + (float)(v8 * v27)) > v38
      && (float)(v32 + (float)(v8 * v27)) < v35
      && v8 < *((float *)this + 6) )
    {
      if ( a4 != nullptr )
        *a4 = v8;
      return v21 >= v25;
    }
  }
  v10 = v31;
  v24 = v37;
  if ( (v31 < v37 || v31 > v34) && *((float *)this + 4) != 0.0 )
  {
    v11 = v37;
    if ( v31 >= v37 )
      v11 = v34;
    v12 = (float)(v11 - v31) / *((float *)this + 4);
    if ( v12 < 0.0 )
      return -1;
    v28 = *((float *)this + 5);
    if ( (float)(v30 + (float)(v12 * *((float *)this + 3))) > v36
      && (float)(v30 + (float)(v12 * *((float *)this + 3))) < v33
      && (float)(v32 + (float)(v12 * v28)) > v38
      && (float)(v32 + (float)(v12 * v28)) < v35
      && v12 < *((float *)this + 6) )
    {
      if ( a4 != nullptr )
        *a4 = v12;
      v13 = v10 < v24;
      v14 = 5;
      return v14 - v13;
    }
  }
  v15 = v32;
  v16 = v38;
  if ( (v32 < v38 || v32 > v35) && *((float *)this + 5) != 0.0 )
  {
    v17 = v38;
    if ( v32 >= v38 )
      v17 = v35;
    v18 = (float)(v17 - v32) / *((float *)this + 5);
    if ( v18 >= 0.0 )
    {
      v22 = v30 + (float)(v18 * *((float *)this + 3));
      v19 = v31 + (float)(v18 * *((float *)this + 4));
      if ( v22 > v36 && v22 < v33 && v19 > v37 && v19 < v34 && v18 < *((float *)this + 6) )
      {
        if ( a4 != nullptr )
          *a4 = v18;
        v13 = v15 < v16;
        v14 = 3;
        return v14 - v13;
      }
    }
  }
  return -1;
}


//======================================================================
// Ogre::Ray::intersectBox(Ogre::BoxBound const*,float *)const
// address: 0x0016D69A   size: 0x12 (18 bytes)
//======================================================================
bool __fastcall Ogre::Ray::intersectBox(Ogre::Ray *a1, int a2, float *a3)
{
  return Ogre::Ray::intersectBox(a1, (const Ogre::Vector3 *)a2, (const Ogre::Vector3 *)(a2 + 12), a3) >= 0;
}


//======================================================================
// Ogre::Ray::intersectSphere(Ogre::SphereBound const*,float *)const
// address: 0x0016D6AC   size: 0x100 (256 bytes)
//======================================================================
int __fastcall Ogre::Ray::intersectSphere(float *a1, float *a2, float *a3)
{
  Ogre::Vector3 *v4; // r5
  float v5; // r6
  const Ogre::Vector3 *v6; // r2
  float v7; // r5
  float v8; // r7
  float v10; // r0
  float v11; // r7
  float v12; // r0
  float v13; // r5
  float v15; // [sp+0h] [bp-Ch]
  float v16[4]; // [sp+Ch] [bp+0h] BYREF

  v4 = (Ogre::Vector3 *)(a1 + 3);
  Ogre::operator-(v16, a1, a2);
  v5 = Ogre::Vector3::lengthSqr(v4);
  v7 = Ogre::DotProduct((Ogre *)v16, v4, v6);
  v8 = (float)(v7 * v7) - (float)(v5 * (float)(Ogre::Vector3::lengthSqr((Ogre::Vector3 *)v16) - (float)(a2[3] * a2[3])));
  if ( v8 < 0.0 )
    return 0;
  if ( v8 <= 0.0 )
  {
    v13 = COERCE_FLOAT(LODWORD(v7) + 0x80000000) / v5;
    if ( v13 >= 0.0 )
    {
LABEL_9:
      if ( a3 != nullptr )
        *a3 = v13;
      return 1;
    }
    return 0;
  }
  v10 = j_sqrt(v8);
  v11 = v10;
  v15 = (float)(COERCE_FLOAT(LODWORD(v7) + 0x80000000) - v10) * (float)(1.0 / v5);
  v12 = (float)(v10 - v7) * (float)(1.0 / v5);
  v13 = (float)(v11 - v7) * (float)(1.0 / v5);
  if ( v12 < 0.0 )
    return 0;
  if ( v15 < 0.0 )
    goto LABEL_9;
  if ( a3 != nullptr )
    *a3 = v15;
  return 1;
}


//======================================================================
// Ogre::Ray::intersectBoxSphere(Ogre::BoxSphereBound const*,float *)const
// address: 0x0016D7AC   size: 0x5C (92 bytes)
//======================================================================
bool __fastcall Ogre::Ray::intersectBoxSphere(Ogre::Ray *a1, float *a2)
{
  float v3; // r1
  float v4; // r0
  float v6; // [sp+0h] [bp-34h]
  float v8[3]; // [sp+8h] [bp-2Ch] BYREF
  float v9[8]; // [sp+14h] [bp-20h] BYREF

  LOBYTE(v9[6]) = 0;
  Ogre::operator-(v8, a2, a2 + 3);
  v3 = a2[4];
  v4 = a2[1];
  qmemcpy(v9, v8, 12);
  v6 = a2[2] + a2[5];
  v9[3] = *a2 + a2[3];
  v9[5] = v6;
  v9[4] = v4 + v3;
  LOBYTE(v9[6]) = 1;
  return Ogre::Ray::intersectBox(a1, (int)v9, nullptr);
}


//======================================================================
// Ogre::Ray::intersectTriangle(Ogre::Vector3 const&,Ogre::Vector3 const&,Ogre::Vector3 const&,float *)const
// address: 0x0016D808   size: 0x13E (318 bytes)
//======================================================================
int __fastcall Ogre::Ray::intersectTriangle(
        Ogre::Ray *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3,
        const Ogre::Vector3 *a4,
        float *a5)
{
  float v7; // r4
  const Ogre::Vector3 *v8; // r2
  float v9; // r4
  float v10; // r7
  const Ogre::Vector3 *v11; // r2
  float v12; // r0
  float v14; // [sp+8h] [bp-5Ch]
  Ogre::Vector3 *v15; // [sp+Ch] [bp-58h]
  float v17[3]; // [sp+18h] [bp-4Ch] BYREF
  float v18[3]; // [sp+24h] [bp-40h] BYREF
  float v19[3]; // [sp+30h] [bp-34h] BYREF
  _DWORD v20[3]; // [sp+3Ch] [bp-28h] BYREF
  _DWORD v21[3]; // [sp+48h] [bp-1Ch] BYREF
  float v22[4]; // [sp+54h] [bp-10h] BYREF

  Ogre::operator-(v22, (float *)a3, (float *)a2);
  qmemcpy(v17, v22, sizeof(v17));
  Ogre::operator-(v22, (float *)a4, (float *)a2);
  qmemcpy(v18, v22, sizeof(v18));
  Ogre::operator-(v22, (float *)this, (float *)a2);
  qmemcpy(v19, v22, sizeof(v19));
  Ogre::CrossProduct(v22, (float *)this + 3, v18);
  qmemcpy(v20, v22, sizeof(v20));
  Ogre::CrossProduct(v22, v19, v17);
  qmemcpy(v21, v22, sizeof(v21));
  v7 = Ogre::DotProduct((Ogre *)v20, (const Ogre::Vector3 *)v17, (const Ogre::Vector3 *)LODWORD(v22[0]));
  v15 = nullptr;
  if ( v7 != 0.0 )
  {
    v14 = 1.0 / v7;
    v9 = Ogre::DotProduct((Ogre *)v21, (const Ogre::Vector3 *)v18, nullptr) * (float)(1.0 / v7);
    if ( v9 >= 0.0 && v9 <= *((float *)this + 6) )
    {
      v10 = Ogre::DotProduct((Ogre *)v20, (const Ogre::Vector3 *)v19, v8) * v14;
      v12 = Ogre::DotProduct((Ogre *)v21, (Ogre::Ray *)((char *)this + 12), v11) * v14;
      if ( v10 >= 0.0 && v12 >= 0.0 && (float)(v10 + v12) <= 1.0 )
      {
        if ( a5 != nullptr )
          *a5 = v9;
        return 1;
      }
    }
  }
  return (int)v15;
}


//======================================================================
// Ogre::Ray::intersectQuad(Ogre::Vector3 const&,Ogre::Vector3 const&,Ogre::Vector3 const&,float *)const
// address: 0x0016D946   size: 0x142 (322 bytes)
//======================================================================
int __fastcall Ogre::Ray::intersectQuad(
        Ogre::Ray *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3,
        const Ogre::Vector3 *a4,
        float *a5)
{
  const Ogre::Vector3 *v7; // r2
  const Ogre::Vector3 *v8; // r2
  float v9; // r5
  int v10; // r4
  float v11; // r5
  const Ogre::Vector3 *v12; // r2
  float v13; // r7
  float v14; // r4
  const Ogre::Vector3 *v15; // r2
  float v16; // r5
  _BOOL4 v17; // r0
  float v20[3]; // [sp+10h] [bp-4Ch] BYREF
  float v21[3]; // [sp+1Ch] [bp-40h] BYREF
  float v22[3]; // [sp+28h] [bp-34h] BYREF
  _DWORD v23[3]; // [sp+34h] [bp-28h] BYREF
  _BYTE v24[12]; // [sp+40h] [bp-1Ch] BYREF
  float v25[4]; // [sp+4Ch] [bp-10h] BYREF

  Ogre::operator-(v25, (float *)a3, (float *)a2);
  qmemcpy(v20, v25, sizeof(v20));
  Ogre::operator-(v25, (float *)a4, (float *)a2);
  qmemcpy(v21, v25, sizeof(v21));
  Ogre::operator-(v25, (float *)this, (float *)a2);
  qmemcpy(v22, v25, sizeof(v22));
  Ogre::CrossProduct(v25, (float *)this + 3, v21);
  qmemcpy(v23, v25, sizeof(v23));
  Ogre::CrossProduct(v25, v22, v20);
  qmemcpy(v24, v25, sizeof(v24));
  v9 = Ogre::DotProduct((Ogre *)v23, (const Ogre::Vector3 *)v20, v7);
  v10 = 0;
  if ( v9 != 0.0 )
  {
    v11 = 1.0 / v9;
    v13 = Ogre::DotProduct((Ogre *)v24, (const Ogre::Vector3 *)v21, v8) * v11;
    if ( v13 >= 0.0 || v13 <= *((float *)this + 6) )
    {
      v14 = Ogre::DotProduct((Ogre *)v23, (const Ogre::Vector3 *)v22, v12) * v11;
      v16 = Ogre::DotProduct((Ogre *)v24, (Ogre::Ray *)((char *)this + 12), v15) * v11;
      v17 = v14 >= 0.0;
      if ( v14 < 0.0 )
        return v17;
      v17 = v16 >= 0.0;
      if ( v16 < 0.0 )
        return v17;
      v17 = v14 <= 1.0;
      if ( v14 > 1.0 )
        return v17;
      v17 = v16 <= 1.0;
      if ( v16 > 1.0 )
      {
        return v17;
      }
      else
      {
        if ( a5 != nullptr )
          *a5 = v13;
        return 1;
      }
    }
  }
  return v10;
}


//======================================================================
// Ogre::Ray::intersectCapsule(Ogre::Vector3 const&,Ogre::Vector3 const&,float)const
// address: 0x0016DDEC   size: 0x44 (68 bytes)
//======================================================================
bool __fastcall Ogre::Ray::intersectCapsule(
        Ogre::Ray *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3,
        float a4)
{
  float v5; // r3
  float v6; // r1
  float v7; // r3
  float v8; // r3
  float v9; // r2
  float v11[7]; // [sp+0h] [bp-1Ch] BYREF

  v11[0] = *(float *)a2;
  v5 = *((float *)a2 + 1);
  v6 = *((float *)a2 + 2);
  v11[1] = v5;
  v7 = *(float *)a3;
  v11[2] = v6;
  v11[3] = v7;
  v8 = *((float *)a3 + 1);
  v9 = *((float *)a3 + 2);
  v11[4] = v8;
  v11[5] = v9;
  return COERCE_FLOAT(Ogre::SqrDistance((float *)this, v11, nullptr, nullptr)) < (float)(a4 * a4);
}

