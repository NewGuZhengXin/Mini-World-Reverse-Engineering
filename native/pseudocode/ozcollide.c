// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide

//======================================================================
// ozcollide::testIntersectionFrustumSphere(ozcollide::Frustum const&,ozcollide::Sphere const&)
// address: 0x001CFE04   size: 0x6C (108 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionFrustumSphere(int a1, int a2)
{
  int v2; // r4

  v2 = 0;
  while ( (float)((float)((float)((float)(*(float *)a2 * *(float *)(a1 + v2))
                                + (float)(*(float *)(a2 + 4) * *(float *)(a1 + v2 + 4)))
                        + (float)(*(float *)(a2 + 8) * *(float *)(a1 + v2 + 8)))
                + *(float *)(a1 + v2 + 12)) >= COERCE_FLOAT(*(_DWORD *)(a2 + 12) + 0x80000000) )
  {
    v2 += 16;
    if ( v2 == 96 )
      return 1;
  }
  return 0;
}


//======================================================================
// ozcollide::testIntersectionSphereBox(ozcollide::Sphere const&,ozcollide::Box const&)
// address: 0x001CFE70   size: 0x26 (38 bytes)
//======================================================================
bool __fastcall ozcollide::testIntersectionSphereBox(
        float *a1,
        const ozcollide::Vec3f *a2,
        int a3,
        ozcollide::Vec3f *a4)
{
  return COERCE_FLOAT(ozcollide::sqrDistancePointToBox((ozcollide *)a1, a2, nullptr, a4)) <= (float)(a1[3] * a1[3]);
}


//======================================================================
// ozcollide::testIntersectionEllipsoidBox(ozcollide::Ellipsoid const&,ozcollide::Box const&)
// address: 0x001CFE96   size: 0x9E (158 bytes)
//======================================================================
bool __fastcall ozcollide::testIntersectionEllipsoidBox(float *a1, float *a2)
{
  float v2; // r7
  float v4; // r6
  float v5; // r1
  float v6; // r1
  float v7; // r6
  float v9; // [sp+4h] [bp-38h]
  float v10; // [sp+8h] [bp-34h]
  float v11; // [sp+8h] [bp-34h]
  float v12; // [sp+Ch] [bp-30h]
  float v13; // [sp+Ch] [bp-30h]
  float v14[3]; // [sp+14h] [bp-28h] BYREF
  float v15[7]; // [sp+20h] [bp-1Ch] BYREF

  v2 = a1[7];
  v9 = a1[6];
  v4 = a1[8];
  v10 = v2 * a1[1];
  v12 = v4 * a1[2];
  v5 = a2[1];
  v14[0] = *a1 * v9;
  v14[1] = v10;
  v14[2] = v12;
  v11 = v2 * v5;
  v13 = v4 * a2[2];
  v6 = a2[4];
  v15[0] = *a2 * v9;
  v15[1] = v11;
  v15[2] = v13;
  v7 = v4 * a2[5];
  v15[3] = a2[3] * v9;
  v15[4] = v2 * v6;
  v15[5] = v7;
  return COERCE_FLOAT(
           ozcollide::sqrDistancePointToBox(
             (ozcollide *)v14,
             (const ozcollide::Vec3f *)v15,
             nullptr,
             (ozcollide::Vec3f *)LODWORD(v13))) <= 1.0;
}


//======================================================================
// ozcollide::getErrorString(ozcollide::ERR)
// address: 0x001D0860   size: 0x26 (38 bytes)
//======================================================================
const char *__fastcall ozcollide::getErrorString(int a1)
{
  if ( a1 == 17 )
    return "Cannot open file";
  if ( a1 == 18 )
    return "Invalid file format";
  if ( a1 != 0 )
    return "Non-recensed error";
  return "No error";
}


//======================================================================
// ozcollide::getLibVersion(void)
// address: 0x001D0898   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ozcollide::getLibVersion(ozcollide *this)
{
  return 256;
}


//======================================================================
// ozcollide::isPointInsideTriangle(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&)
// address: 0x001D0B96   size: 0x178 (376 bytes)
//======================================================================
bool __fastcall ozcollide::isPointInsideTriangle(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Vec3f *a4,
        const ozcollide::Vec3f *a5)
{
  float v5; // r7
  float v6; // r3
  float v7; // r6
  float v8; // r6
  float v9; // r6
  float v10; // r7
  float v11; // r5
  _BOOL4 v12; // r4
  float v13; // r0
  float v14; // r6
  float v16; // [sp+4h] [bp-40h]
  float v17; // [sp+4h] [bp-40h]
  float v18; // [sp+8h] [bp-3Ch]
  float v19; // [sp+8h] [bp-3Ch]
  float v20; // [sp+8h] [bp-3Ch]
  float v21; // [sp+Ch] [bp-38h]
  float v23; // [sp+10h] [bp-34h]
  float v24; // [sp+14h] [bp-30h]
  float v25; // [sp+14h] [bp-30h]
  float v26[3]; // [sp+1Ch] [bp-28h] BYREF
  float v27[3]; // [sp+28h] [bp-1Ch] BYREF
  float v28[4]; // [sp+34h] [bp-10h] BYREF

  v5 = *((float *)this + 1);
  v6 = *(float *)this;
  v7 = *((float *)this + 2);
  v18 = *((float *)a2 + 1) - v5;
  v24 = *((float *)a2 + 2) - v7;
  v26[0] = *(float *)a2 - *(float *)this;
  v26[1] = v18;
  v26[2] = v24;
  v19 = *((float *)a3 + 1) - v5;
  v25 = *((float *)a3 + 2) - v7;
  v27[0] = *(float *)a3 - v6;
  v27[1] = v19;
  v27[2] = v25;
  v16 = *((float *)a4 + 1) - v5;
  v8 = *((float *)a4 + 2) - v7;
  v28[0] = *(float *)a4 - v6;
  v28[1] = v16;
  v28[2] = v8;
  v21 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)v26, (const ozcollide::Vec3f *)v26);
  v9 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)v26, (const ozcollide::Vec3f *)v27);
  v17 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)v27, (const ozcollide::Vec3f *)v27);
  v23 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)v28, (const ozcollide::Vec3f *)v26);
  v10 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)v28, (const ozcollide::Vec3f *)v27);
  v20 = 1.0 / (float)((float)(v9 * v9) - (float)(v21 * v17));
  v11 = (float)((float)(v9 * v10) - (float)(v17 * v23)) * v20;
  v12 = v11 < 0.0;
  if ( v11 < 0.0 )
    return false;
  if ( v11 <= 1.0 )
  {
    v13 = v9 * v23;
    v14 = (float)((float)(v9 * v23) - (float)(v21 * v10)) * v20;
    if ( (float)((float)(v13 - (float)(v21 * v10)) * v20) >= 0.0 )
      return (float)(v11 + v14) <= 1.0;
  }
  return v12;
}


//======================================================================
// ozcollide::isPointInsidePolygon(int,ozcollide::Vec3f const*,ozcollide::Vec3f const&)
// address: 0x001D0D0E   size: 0x34 (52 bytes)
//======================================================================
int __fastcall ozcollide::isPointInsidePolygon(
        ozcollide *this,
        ozcollide *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Vec3f *a4)
{
  char *v6; // r1
  int i; // r4
  char *v8; // r6
  const ozcollide::Vec3f *v10; // [sp+0h] [bp-Ch]
  char *v11; // [sp+4h] [bp-8h]

  v10 = this;
  v11 = (char *)this - 2;
  v6 = (char *)a2 + 12;
  for ( i = 0; ; ++i )
  {
    if ( i >= (int)v11 )
      return 0;
    v8 = v6 + 12;
    if ( ozcollide::isPointInsideTriangle(
           a2,
           (const ozcollide::Vec3f *)v6,
           (const ozcollide::Vec3f *)(v6 + 12),
           a3,
           v10) )
    {
      break;
    }
    v6 = v8;
  }
  return 1;
}


//======================================================================
// ozcollide::testIntersectionSegmentBox(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Box const&)
// address: 0x001D0DEA   size: 0x1EE (494 bytes)
//======================================================================
bool __fastcall ozcollide::testIntersectionSegmentBox(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Box *a4)
{
  _BOOL4 isInside; // r7
  float v8; // r5
  float v9; // r4
  float v10; // r0
  float v12; // [sp+4h] [bp-30h]
  float v13; // [sp+8h] [bp-2Ch]
  float v14; // [sp+8h] [bp-2Ch]
  float v15; // [sp+Ch] [bp-28h]
  float v16; // [sp+10h] [bp-24h]
  float v17; // [sp+14h] [bp-20h]
  float v18; // [sp+18h] [bp-1Ch]
  float v19; // [sp+1Ch] [bp-18h]
  float v20; // [sp+20h] [bp-14h]
  float v21; // [sp+24h] [bp-10h]
  float v22; // [sp+28h] [bp-Ch]

  if ( !ozcollide::Box::isInside(a3, this) || !(isInside = ozcollide::Box::isInside(a3, a2)) )
  {
    v13 = *((float *)this + 1);
    v18 = (float)(*(float *)a2 - *(float *)this) * 0.5;
    v22 = (float)(*(float *)this + v18) - *(float *)a3;
    isInside = false;
    LODWORD(v19) = (unsigned int)(2 * LODWORD(v18)) >> 1;
    v20 = *((float *)a3 + 3);
    v8 = *((float *)this + 2);
    if ( COERCE_FLOAT((unsigned int)(2 * LODWORD(v22)) >> 1) <= (float)(v20 + v19) )
    {
      v12 = (float)(*((float *)a2 + 1) - v13) * 0.5;
      v21 = (float)(v13 + v12) - *((float *)a3 + 1);
      LODWORD(v14) = (unsigned int)(2 * LODWORD(v12)) >> 1;
      v15 = *((float *)a3 + 4);
      if ( COERCE_FLOAT((unsigned int)(2 * LODWORD(v21)) >> 1) <= (float)(v15 + v14) )
      {
        v9 = (float)(*((float *)a2 + 2) - v8) * 0.5;
        v10 = (float)(v8 + v9) - *((float *)a3 + 2);
        v17 = *((float *)a3 + 5);
        LODWORD(v16) = (unsigned int)(2 * LODWORD(v9)) >> 1;
        if ( COERCE_FLOAT((unsigned int)(2 * LODWORD(v10)) >> 1) <= (float)(v17 + v16)
          && COERCE_FLOAT((unsigned int)(2 * COERCE_INT((float)(v12 * v10) - (float)(v9 * v21))) >> 1) <= (float)((float)(v15 * v16) + (float)(v17 * v14))
          && COERCE_FLOAT((unsigned int)(2 * COERCE_INT((float)(v9 * v22) - (float)(v18 * v10))) >> 1) <= (float)((float)(v20 * v16) + (float)(v17 * v19)) )
        {
          return COERCE_FLOAT((unsigned int)(2 * COERCE_INT((float)(v18 * v21) - (float)(v12 * v22))) >> 1) <= (float)((float)(v20 * v14) + (float)(v15 * v19));
        }
      }
    }
  }
  return isInside;
}


//======================================================================
// ozcollide::intersectRayBox(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Box const&,float &,float &)
// address: 0x001D0FD8   size: 0x170 (368 bytes)
//======================================================================
int __fastcall ozcollide::intersectRayBox(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Box *a4,
        float *a5,
        float *a6)
{
  float v6; // r7
  float v7; // r6
  float v8; // r5
  int v9; // r7
  int v10; // r4
  float v11; // r5
  float v12; // r6
  _BOOL4 v13; // r0
  float v15; // r5
  float v16; // r6
  float v17; // [sp+0h] [bp-34h]
  float v18; // [sp+0h] [bp-34h]
  int v19; // [sp+0h] [bp-34h]
  float v20; // [sp+8h] [bp-2Ch]
  int v21; // [sp+8h] [bp-2Ch]
  float v22; // [sp+Ch] [bp-28h]
  float v23; // [sp+Ch] [bp-28h]
  float v25[3]; // [sp+18h] [bp-1Ch] BYREF
  float v26[4]; // [sp+24h] [bp-10h] BYREF

  *(_DWORD *)a4 = -8388609;
  *a5 = 3.4028e38;
  v6 = *(float *)a3;
  v7 = *((float *)a3 + 3);
  v20 = *((float *)a3 + 1);
  v17 = *((float *)a3 + 4);
  v8 = *((float *)a3 + 5);
  v22 = *((float *)a3 + 2);
  v25[0] = *(float *)a3 - v7;
  v25[1] = v20 - v17;
  v25[2] = v22 - v8;
  v26[0] = v6 + v7;
  v26[1] = v20 + v17;
  v9 = 0;
  v26[2] = v22 + v8;
  v21 = -1;
  v10 = 0;
  do
  {
    v11 = *(float *)((char *)a2 + v10 * 4);
    v12 = *(float *)((char *)this + v10 * 4);
    if ( v11 <= -0.001 || v11 >= 0.001 )
    {
      v18 = 1.0 / v11;
      v15 = (float)(v25[v10] - v12) * (float)(1.0 / v11);
      v23 = v15;
      v16 = (float)(v26[v10] - v12) * v18;
      if ( v15 <= v16 )
      {
        v19 = v9;
      }
      else
      {
        v15 = v16;
        v19 = v9 + 1;
        v16 = v23;
      }
      if ( v15 > *(float *)a4 )
      {
        *(float *)a4 = v15;
        v21 = v19;
      }
      if ( v16 < *a5 )
        *a5 = v16;
      if ( *(float *)a4 > *a5 )
        return -1;
      v13 = *a5 < 0.001;
    }
    else
    {
      if ( v12 < v25[v10] )
        return -1;
      v13 = v12 > v26[v10];
    }
    if ( v13 )
      return -1;
    v9 += 2;
    ++v10;
  }
  while ( v9 != 6 );
  if ( *(float *)a4 > *a5 || *a5 < 0.001 )
    return -1;
  return v21;
}


//======================================================================
// ozcollide::sqrDistancePointToLine(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f*)
// address: 0x001D11A6   size: 0x146 (326 bytes)
//======================================================================
float __fastcall ozcollide::sqrDistancePointToLine(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Vec3f *a4,
        ozcollide::Vec3f *a5)
{
  float v5; // r5
  float v6; // r0
  float v7; // r6
  float v8; // r0
  float v9; // r5
  float v10; // r4
  float v11; // r0
  float v12; // r6
  float v14; // [sp+0h] [bp-24h]
  float v15; // [sp+8h] [bp-1Ch]
  float v16; // [sp+Ch] [bp-18h]
  float v17; // [sp+10h] [bp-14h]
  float v18; // [sp+14h] [bp-10h]
  float v19; // [sp+18h] [bp-Ch]
  float v20; // [sp+1Ch] [bp-8h]

  v18 = *(float *)this - *(float *)a2;
  v15 = *((float *)a2 + 1);
  v19 = *((float *)this + 1) - v15;
  v16 = *((float *)a2 + 2);
  v20 = *((float *)this + 2) - v16;
  v5 = *(float *)a3 - *(float *)a2;
  v6 = *((float *)a3 + 1) - v15;
  v14 = *((float *)a3 + 2) - v16;
  v7 = (float)(v18 * v5) + (float)(v19 * v6);
  v17 = (float)(v5 * v5) + (float)(v6 * v6);
  v8 = (float)(v7 + (float)(v20 * v14)) / (float)(v17 + (float)(v14 * v14));
  v9 = v5 * v8;
  v10 = (float)(*((float *)a3 + 1) - v15) * v8;
  v11 = v14 * v8;
  v12 = v14 * (float)((float)(v7 + (float)(v20 * v14)) / (float)(v17 + (float)(v14 * v14)));
  if ( a4 != nullptr )
  {
    *(float *)a4 = *(float *)a2 + v9;
    *((float *)a4 + 1) = v15 + v10;
    *((float *)a4 + 2) = v16 + v11;
  }
  return (float)((float)((float)(v18 - v9) * (float)(v18 - v9)) + (float)((float)(v19 - v10) * (float)(v19 - v10)))
       + (float)((float)(v20 - v12) * (float)(v20 - v12));
}


//======================================================================
// ozcollide::distancePointToLine(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f*)
// address: 0x001D12EC   size: 0x14 (20 bytes)
//======================================================================
float __fastcall ozcollide::distancePointToLine(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Vec3f *a4,
        ozcollide::Vec3f *a5)
{
  double v5; // r0

  v5 = ozcollide::sqrDistancePointToLine(this, a2, a3, a4, a4);
  return j_sqrt(v5);
}


//======================================================================
// ozcollide::testIntersectionLineLine(ozcollide::Vec2f const&,ozcollide::Vec2f const&,ozcollide::Vec2f const&,ozcollide::Vec2f const&,float *)
// address: 0x001D2B7A   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionLineLine(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  float v5; // r7
  float v6; // r5
  int v7; // r3
  float v9; // [sp+4h] [bp-10h]
  float v10; // [sp+8h] [bp-Ch]
  float v11; // [sp+Ch] [bp-8h]

  v9 = a1[1];
  v11 = *a3 - *a4;
  v10 = a3[1];
  v5 = v10 - a4[1];
  v6 = (float)(v5 * (float)(*a2 - *a1)) - (float)(v11 * (float)(a2[1] - v9));
  v7 = 0;
  if ( v6 != 0.0 )
  {
    if ( a5 != nullptr )
      *a5 = (float)((float)(v11 * (float)(v9 - v10)) - (float)(v5 * (float)(*a1 - *a3))) / v6;
    return 1;
  }
  return v7;
}


//======================================================================
// ozcollide::testIntersectionAABB_OBB(ozcollide::Box const&,ozcollide::OBB const&)
// address: 0x001D3604   size: 0x6E4 (1764 bytes)
//======================================================================
bool __fastcall ozcollide::testIntersectionAABB_OBB(float *a1, float *a2)
{
  float v4; // r7
  float v5; // r5
  _BOOL4 result; // r0
  float v7; // r0
  float v8; // r5
  float v9; // r4
  unsigned int v10; // r6
  float v11; // r7
  float v12; // r7
  float v13; // r7
  unsigned int v14; // r6
  float v15; // r7
  unsigned int v16; // r6
  float v17; // r7
  unsigned int v18; // r6
  float v19; // r7
  unsigned int v20; // r6
  float v21; // r7
  unsigned int v22; // r6
  float v23; // r7
  unsigned int v24; // r6
  float v25; // r7
  unsigned int v26; // r5
  float v27; // r4
  unsigned int v28; // r4
  float v29; // r5
  unsigned int v30; // r4
  float v31; // r5
  float v32; // [sp+4h] [bp-90h]
  float v33; // [sp+8h] [bp-8Ch]
  float v34; // [sp+8h] [bp-8Ch]
  float v35; // [sp+Ch] [bp-88h]
  float v36; // [sp+10h] [bp-84h]
  float v37; // [sp+14h] [bp-80h]
  float v38; // [sp+18h] [bp-7Ch]
  float v39; // [sp+1Ch] [bp-78h]
  float v40; // [sp+20h] [bp-74h]
  float v41; // [sp+20h] [bp-74h]
  float v42; // [sp+24h] [bp-70h]
  float v43; // [sp+24h] [bp-70h]
  float v44; // [sp+28h] [bp-6Ch]
  float v45; // [sp+2Ch] [bp-68h]
  float v46; // [sp+30h] [bp-64h]
  float v47; // [sp+34h] [bp-60h]
  float v48; // [sp+38h] [bp-5Ch]
  float v49; // [sp+3Ch] [bp-58h]
  float v50; // [sp+40h] [bp-54h]
  float v51[10]; // [sp+6Ch] [bp-28h] BYREF

  v33 = a1[1];
  v38 = *a2 - *a1;
  v40 = a2[2];
  v4 = a2[1];
  v42 = a1[2];
  j_memcpy(v51, a2 + 6, 0x24u);
  v44 = COERCE_FLOAT((unsigned int)(2 * LODWORD(v51[0])) >> 1) + 0.000001;
  v45 = COERCE_FLOAT((unsigned int)(2 * LODWORD(v51[1])) >> 1) + 0.000001;
  v46 = COERCE_FLOAT((unsigned int)(2 * LODWORD(v51[2])) >> 1) + 0.000001;
  v32 = a1[3];
  v35 = a2[3];
  v36 = a2[4];
  v37 = a2[5];
  v5 = (float)(v32 + (float)(v35 * v44)) + (float)(v36 * v45);
  result = COERCE_FLOAT((unsigned int)(2 * LODWORD(v38)) >> 1) <= (float)(v5 + (float)(v37 * v46));
  if ( COERCE_FLOAT((unsigned int)(2 * LODWORD(v38)) >> 1) <= (float)(v5 + (float)(v37 * v46)) )
  {
    v39 = v4 - v33;
    v7 = v40 - v42;
    v8 = v40 - v42;
    v41 = COERCE_FLOAT((unsigned int)(2 * LODWORD(v51[3])) >> 1) + 0.000001;
    v48 = COERCE_FLOAT((unsigned int)(2 * LODWORD(v51[6])) >> 1) + 0.000001;
    v34 = a1[4];
    v9 = a1[5];
    v10 = 2 * COERCE_INT((float)((float)(v38 * v51[0]) + (float)(v39 * v51[3])) + (float)(v7 * v51[6]));
    v11 = (float)(v35 + (float)(v32 * v44)) + (float)(v34 * v41);
    result = COERCE_FLOAT(v10 >> 1) <= (float)(v11 + (float)(v9 * v48));
    if ( COERCE_FLOAT(v10 >> 1) <= (float)(v11 + (float)(v9 * v48)) )
    {
      v43 = COERCE_FLOAT((unsigned int)(2 * LODWORD(v51[4])) >> 1) + 0.000001;
      v47 = COERCE_FLOAT((unsigned int)(2 * LODWORD(v51[5])) >> 1) + 0.000001;
      v12 = (float)(v34 + (float)(v35 * v41)) + (float)(v36 * v43);
      result = COERCE_FLOAT((unsigned int)(2 * LODWORD(v39)) >> 1) <= (float)(v12 + (float)(v37 * v47));
      if ( COERCE_FLOAT((unsigned int)(2 * LODWORD(v39)) >> 1) <= (float)(v12 + (float)(v37 * v47)) )
      {
        v49 = COERCE_FLOAT((unsigned int)(2 * LODWORD(v51[7])) >> 1) + 0.000001;
        v50 = COERCE_FLOAT((unsigned int)(2 * LODWORD(v51[8])) >> 1) + 0.000001;
        v13 = (float)(v9 + (float)(v35 * v48)) + (float)(v36 * v49);
        result = COERCE_FLOAT((unsigned int)(2 * LODWORD(v8)) >> 1) <= (float)(v13 + (float)(v37 * v50));
        if ( COERCE_FLOAT((unsigned int)(2 * LODWORD(v8)) >> 1) <= (float)(v13 + (float)(v37 * v50)) )
        {
          v14 = 2 * COERCE_INT((float)((float)(v38 * v51[1]) + (float)(v39 * v51[4])) + (float)(v8 * v51[7]));
          v15 = (float)(v36 + (float)(v32 * v45)) + (float)(v34 * v43);
          result = COERCE_FLOAT(v14 >> 1) <= (float)(v15 + (float)(v9 * v49));
          if ( COERCE_FLOAT(v14 >> 1) <= (float)(v15 + (float)(v9 * v49)) )
          {
            v16 = 2 * COERCE_INT((float)((float)(v38 * v51[2]) + (float)(v39 * v51[5])) + (float)(v8 * v51[8]));
            v17 = (float)(v37 + (float)(v32 * v46)) + (float)(v34 * v47);
            result = COERCE_FLOAT(v16 >> 1) <= (float)(v17 + (float)(v9 * v50));
            if ( COERCE_FLOAT(v16 >> 1) <= (float)(v17 + (float)(v9 * v50)) )
            {
              v18 = 2 * COERCE_INT((float)(v8 * v51[3]) - (float)(v39 * v51[6]));
              v19 = (float)((float)(v34 * v48) + (float)(v9 * v41)) + (float)(v36 * v46);
              result = COERCE_FLOAT(v18 >> 1) <= (float)(v19 + (float)(v37 * v45));
              if ( COERCE_FLOAT(v18 >> 1) <= (float)(v19 + (float)(v37 * v45)) )
              {
                v20 = 2 * COERCE_INT((float)(v8 * v51[4]) - (float)(v39 * v51[7]));
                v21 = (float)((float)(v34 * v49) + (float)(v9 * v43)) + (float)(v35 * v46);
                result = COERCE_FLOAT(v20 >> 1) <= (float)(v21 + (float)(v37 * v44));
                if ( COERCE_FLOAT(v20 >> 1) <= (float)(v21 + (float)(v37 * v44)) )
                {
                  v22 = 2 * COERCE_INT((float)(v8 * v51[5]) - (float)(v39 * v51[8]));
                  v23 = (float)((float)(v34 * v50) + (float)(v9 * v47)) + (float)(v35 * v45);
                  result = COERCE_FLOAT(v22 >> 1) <= (float)(v23 + (float)(v36 * v44));
                  if ( COERCE_FLOAT(v22 >> 1) <= (float)(v23 + (float)(v36 * v44)) )
                  {
                    if ( COERCE_FLOAT((unsigned int)(2 * COERCE_INT((float)(v38 * v51[6]) - (float)(v8 * v51[0]))) >> 1) <= (float)((float)((float)((float)(v32 * v48) + (float)(v9 * v44)) + (float)(v36 * v47)) + (float)(v37 * v43)) )
                    {
                      v24 = 2 * COERCE_INT((float)(v38 * v51[7]) - (float)(v8 * v51[1]));
                      v25 = (float)((float)(v32 * v49) + (float)(v9 * v45)) + (float)(v35 * v47);
                      result = COERCE_FLOAT(v24 >> 1) <= (float)(v25 + (float)(v37 * v41));
                      if ( COERCE_FLOAT(v24 >> 1) <= (float)(v25 + (float)(v37 * v41)) )
                      {
                        v26 = 2 * COERCE_INT((float)(v38 * v51[8]) - (float)(v8 * v51[2]));
                        v27 = (float)((float)(v32 * v50) + (float)(v9 * v46)) + (float)(v35 * v43);
                        result = COERCE_FLOAT(v26 >> 1) <= (float)(v27 + (float)(v36 * v41));
                        if ( COERCE_FLOAT(v26 >> 1) <= (float)(v27 + (float)(v36 * v41)) )
                        {
                          v28 = 2 * COERCE_INT((float)(v39 * v51[0]) - (float)(v38 * v51[3]));
                          v29 = (float)((float)(v32 * v41) + (float)(v34 * v44)) + (float)(v36 * v50);
                          result = COERCE_FLOAT(v28 >> 1) <= (float)(v29 + (float)(v37 * v49));
                          if ( COERCE_FLOAT(v28 >> 1) <= (float)(v29 + (float)(v37 * v49)) )
                          {
                            v30 = 2 * COERCE_INT((float)(v39 * v51[1]) - (float)(v38 * v51[4]));
                            v31 = (float)((float)(v32 * v43) + (float)(v34 * v45)) + (float)(v35 * v50);
                            result = COERCE_FLOAT(v30 >> 1) <= (float)(v31 + (float)(v37 * v48));
                            if ( COERCE_FLOAT(v30 >> 1) <= (float)(v31 + (float)(v37 * v48)) )
                              return COERCE_FLOAT((unsigned int)(2
                                                               * COERCE_INT((float)(v39 * v51[2]) - (float)(v38 * v51[5]))) >> 1) <= (float)((float)((float)((float)(v32 * v47) + (float)(v34 * v46)) + (float)(v35 * v49)) + (float)(v36 * v48));
                          }
                        }
                      }
                    }
                    else
                    {
                      return false;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// ozcollide::testIntersectionSphereTriangle(ozcollide::Vec3f &,float,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Plane const&,ozcollide::Vec3f*,int *)
// address: 0x001D3DF8   size: 0x4D0 (1232 bytes)
//======================================================================
bool __fastcall ozcollide::testIntersectionSphereTriangle(
        ozcollide *this,
        ozcollide::Vec3f *a2,
        float *a3,
        const ozcollide::Vec3f *a4,
        const ozcollide::Vec3f *a5,
        const ozcollide::Vec3f *a6,
        const ozcollide::Plane *a7,
        ozcollide::Vec3f *a8,
        int *a9)
{
  float v11; // r4
  int v12; // r3
  float v13; // r5
  float v14; // r4
  float v15; // r5
  float v16; // r2
  float v17; // r1
  float v18; // r1
  float v19; // r2
  float v20; // r3
  float v21; // r4
  float v22; // r5
  float v23; // r1
  float v24; // r2
  float v25; // r7
  float v26; // r1
  float v27; // r2
  float v28; // r4
  float v29; // r3
  float v30; // r1
  float v31; // r7
  float v32; // r5
  float v33; // r2
  float v34; // r2
  float v35; // r1
  float v36; // r6
  float v37; // r5
  float v38; // r1
  float v39; // r4
  char *v41; // [sp+20h] [bp-ACh]
  float v42; // [sp+24h] [bp-A8h]
  float v43; // [sp+24h] [bp-A8h]
  float v44; // [sp+28h] [bp-A4h]
  float v45; // [sp+28h] [bp-A4h]
  float v47; // [sp+30h] [bp-9Ch]
  _BOOL4 v48; // [sp+30h] [bp-9Ch]
  float v49; // [sp+34h] [bp-98h]
  int v50; // [sp+34h] [bp-98h]
  float v52; // [sp+3Ch] [bp-90h]
  float v53[4]; // [sp+58h] [bp-74h] BYREF
  float v54; // [sp+68h] [bp-64h] BYREF
  float v55; // [sp+6Ch] [bp-60h]
  float v56; // [sp+70h] [bp-5Ch]
  float v57; // [sp+74h] [bp-58h] BYREF
  float v58; // [sp+78h] [bp-54h]
  float v59; // [sp+7Ch] [bp-50h]
  float v60; // [sp+80h] [bp-4Ch] BYREF
  float v61; // [sp+84h] [bp-48h]
  float v62; // [sp+88h] [bp-44h]
  float v63[3]; // [sp+8Ch] [bp-40h] BYREF
  float v64[4]; // [sp+98h] [bp-34h] BYREF
  float v65[4]; // [sp+A8h] [bp-24h] BYREF
  float v66[5]; // [sp+B8h] [bp-14h] BYREF

  v11 = (float)((float)((float)(*(float *)this * *(float *)a6) + (float)(*((float *)this + 1) * *((float *)a6 + 1)))
              + (float)(*((float *)this + 2) * *((float *)a6 + 2)))
      + *((float *)a6 + 3);
  if ( v11 > *(float *)&a2 )
    return false;
  v41 = (char *)a2 + 0x80000000;
  if ( v11 < COERCE_FLOAT((ozcollide::Vec3f *)((char *)a2 + 0x80000000)) )
    return false;
  ozcollide::Plane::Plane((ozcollide::Plane *)v64);
  ozcollide::Plane::Plane((ozcollide::Plane *)v65);
  ozcollide::Plane::Plane((ozcollide::Plane *)v66);
  v47 = *((float *)this + 1);
  v49 = *(float *)this;
  v44 = *((float *)this + 2);
  v52 = (float)((float)((float)(*(float *)this * v64[0]) + (float)(v47 * v64[1])) + (float)(v44 * v64[2])) + v64[3];
  if ( v52 <= *(float *)&v41 )
    return false;
  v13 = (float)((float)((float)(v49 * v65[0]) + (float)(v47 * v65[1])) + (float)(v44 * v65[2])) + v65[3];
  if ( v13 <= *(float *)&v41 )
    return false;
  v14 = (float)((float)((float)(v49 * v66[0]) + (float)(v47 * v66[1])) + (float)(v44 * v66[2])) + v66[3];
  if ( v14 <= *(float *)&v41 )
    return false;
  if ( v52 < *(float *)&a2 || v13 < *(float *)&a2 || (v12 = 1, v14 < *(float *)&a2) )
  {
    ozcollide::Vec3f::operator-(v53, (float *)this, a3);
    v54 = v53[0];
    v55 = v53[1];
    v56 = v53[2];
    ozcollide::Vec3f::operator-(v53, (float *)a4, a3);
    v57 = v53[0];
    v58 = v53[1];
    v59 = v53[2];
    v42 = ozcollide::Vec3f::len((ozcollide::Vec3f *)&v57);
    ozcollide::Vec3f::normalize((ozcollide::Vec3f *)&v57);
    v15 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v57, (const ozcollide::Vec3f *)&v54);
    if ( v15 >= 0.0 )
    {
      if ( v15 <= v42 )
      {
        v63[2] = v15 * v59;
        v63[0] = v57 * v15;
        v63[1] = v15 * v58;
        ozcollide::Vec3f::operator+(v53, v63, a3);
        v60 = v53[0];
        v61 = v53[1];
        v62 = v53[2];
      }
      else
      {
        v18 = *((float *)a4 + 1);
        v60 = *(float *)a4;
        v19 = *((float *)a4 + 2);
        v61 = v18;
        v62 = v19;
      }
    }
    else
    {
      v16 = a3[1];
      v60 = *a3;
      v17 = a3[2];
      v61 = v16;
      v62 = v17;
    }
    ozcollide::Vec3f::operator-(v63, &v60, (float *)this);
    v43 = ozcollide::Vec3f::len((ozcollide::Vec3f *)v63);
    v48 = v43 < *(float *)&a2;
    v50 = v48;
    if ( a7 != nullptr )
    {
      if ( v43 >= 3.4028e38 )
      {
        v43 = 3.4028e38;
      }
      else
      {
        v20 = v60;
        v21 = v62;
        *((float *)a7 + 1) = v61;
        *(float *)a7 = v20;
        *((float *)a7 + 2) = v21;
      }
    }
    else
    {
      v43 = 3.4028e38;
    }
    ozcollide::Vec3f::operator-(v53, (float *)this, (float *)a4);
    v54 = v53[0];
    v55 = v53[1];
    v56 = v53[2];
    ozcollide::Vec3f::operator-(v53, (float *)a5, (float *)a4);
    v57 = v53[0];
    v58 = v53[1];
    v59 = v53[2];
    v45 = ozcollide::Vec3f::len((ozcollide::Vec3f *)&v57);
    ozcollide::Vec3f::normalize((ozcollide::Vec3f *)&v57);
    v22 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v57, (const ozcollide::Vec3f *)&v54);
    if ( v22 >= 0.0 )
    {
      if ( v22 <= v45 )
      {
        v63[2] = v22 * v59;
        v63[0] = v57 * v22;
        v63[1] = v22 * v58;
        ozcollide::Vec3f::operator+(v53, v63, (float *)a4);
        v60 = v53[0];
        v61 = v53[1];
        v62 = v53[2];
      }
      else
      {
        v26 = *((float *)a5 + 1);
        v27 = *((float *)a5 + 2);
        v60 = *(float *)a5;
        v61 = v26;
        v62 = v27;
      }
    }
    else
    {
      v23 = *(float *)a4;
      v24 = *((float *)a4 + 1);
      v25 = *((float *)a4 + 2);
      v60 = v23;
      v61 = v24;
      v62 = v25;
    }
    ozcollide::Vec3f::operator-(v63, &v60, (float *)this);
    v28 = ozcollide::Vec3f::len((ozcollide::Vec3f *)v63);
    if ( v28 < *(float *)&a2 )
      v50 = v48 | 2;
    if ( a7 != nullptr && v28 < v43 )
    {
      v29 = v62;
      v43 = v28;
      *(float *)a7 = v60;
      v30 = v61;
      *((float *)a7 + 2) = v29;
      *((float *)a7 + 1) = v30;
    }
    ozcollide::Vec3f::operator-(v53, (float *)this, (float *)a5);
    v54 = v53[0];
    v55 = v53[1];
    v56 = v53[2];
    ozcollide::Vec3f::operator-(v53, a3, (float *)a5);
    v57 = v53[0];
    v58 = v53[1];
    v59 = v53[2];
    v31 = ozcollide::Vec3f::len((ozcollide::Vec3f *)&v57);
    ozcollide::Vec3f::normalize((ozcollide::Vec3f *)&v57);
    v32 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v57, (const ozcollide::Vec3f *)&v54);
    if ( v32 >= 0.0 )
    {
      if ( v32 <= v31 )
      {
        v63[0] = v57 * v32;
        v63[1] = v32 * v58;
        v63[2] = v32 * v59;
        ozcollide::Vec3f::operator+(v53, v63, (float *)a5);
        v60 = v53[0];
        v61 = v53[1];
        v62 = v53[2];
      }
      else
      {
        v34 = *a3;
        v35 = a3[1];
        v36 = a3[2];
        v60 = v34;
        v61 = v35;
        v62 = v36;
      }
    }
    else
    {
      v33 = *((float *)a5 + 1);
      v60 = *(float *)a5;
      v61 = v33;
      v62 = *((float *)a5 + 2);
    }
    ozcollide::Vec3f::operator-(v63, &v60, (float *)this);
    v37 = ozcollide::Vec3f::len((ozcollide::Vec3f *)v63);
    if ( v37 < *(float *)&a2 )
      v50 |= 4u;
    if ( a7 != nullptr && v37 < v43 )
    {
      v38 = v60;
      v39 = v62;
      *((float *)a7 + 1) = v61;
      *(float *)a7 = v38;
      *((float *)a7 + 2) = v39;
    }
    if ( a8 != nullptr )
      *(_DWORD *)a8 = v50;
    return v50 != 0;
  }
  return v12;
}


//======================================================================
// ozcollide::magic_testIntersectionSphereTriangle(ozcollide::Vec3f const&,float,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,float *)
// address: 0x001D42CC   size: 0x454 (1108 bytes)
//======================================================================
bool __fastcall ozcollide::magic_testIntersectionSphereTriangle(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        float *a3,
        const ozcollide::Vec3f *a4,
        const ozcollide::Vec3f *a5,
        const ozcollide::Vec3f *a6,
        float *a7)
{
  float v8; // r7
  float v9; // r4
  float v10; // r5
  float v11; // r6
  float v12; // r5
  float v13; // r0
  float v14; // r0
  float v15; // r6
  float v16; // r5
  float v17; // r0
  float v18; // r1
  float v19; // r1
  float v20; // r0
  float v21; // r0
  float v22; // r5
  float v23; // r0
  float v24; // r5
  float v25; // r1
  float v26; // r0
  float v27; // r0
  float v28; // r4
  float v29; // r0
  float v32; // [sp+4h] [bp-28h]
  float v33; // [sp+8h] [bp-24h]
  float v34; // [sp+Ch] [bp-20h]
  float v35; // [sp+10h] [bp-1Ch]
  float v36; // [sp+10h] [bp-1Ch]
  float v37; // [sp+14h] [bp-18h]
  float v39; // [sp+1Ch] [bp-10h]
  float v40[3]; // [sp+20h] [bp-Ch] BYREF
  float v41[3]; // [sp+2Ch] [bp+0h] BYREF
  float v42[3]; // [sp+38h] [bp+Ch] BYREF
  float v43[4]; // [sp+44h] [bp+18h] BYREF

  v40[0] = *a3;
  v40[1] = a3[1];
  v40[2] = a3[2];
  ozcollide::Vec3f::operator-(v41, (float *)a4, a3);
  ozcollide::Vec3f::operator-(v42, (float *)a5, a3);
  ozcollide::Vec3f::operator-(v43, v40, (float *)this);
  v37 = ozcollide::Vec3f::lenSq((ozcollide::Vec3f *)v41);
  v33 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)v41, (const ozcollide::Vec3f *)v42);
  v34 = ozcollide::Vec3f::lenSq((ozcollide::Vec3f *)v42);
  v32 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)v43, (const ozcollide::Vec3f *)v41);
  v8 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)v43, (const ozcollide::Vec3f *)v42);
  v9 = ozcollide::Vec3f::lenSq((ozcollide::Vec3f *)v43);
  v35 = (float)(v33 * v8) - (float)(v34 * v32);
  v10 = (float)(v33 * v32) - (float)(v37 * v8);
  LODWORD(v11) = (unsigned int)(2 * COERCE_INT((float)(v37 * v34) - (float)(v33 * v33))) >> 1;
  if ( (float)(v35 + v10) > v11 )
  {
    if ( v35 >= 0.0 )
    {
      if ( v10 < 0.0 )
      {
        v22 = v37 + v32;
        if ( (float)(v37 + v32) <= (float)(v33 + v8) )
        {
          if ( v22 > 0.0 )
          {
            if ( v32 >= 0.0 )
              goto LABEL_42;
            LODWORD(v14) = LODWORD(v32) + 0x80000000;
            goto LABEL_33;
          }
LABEL_37:
          v25 = v32 + v32;
          v26 = v37;
          goto LABEL_40;
        }
        v23 = v22 - (float)(v33 + v8);
        v24 = (float)(v37 - (float)(v33 + v33)) + v34;
        if ( v23 >= v24 )
          goto LABEL_35;
        v36 = v23 / v24;
        v15 = 1.0 - (float)(v23 / v24);
        goto LABEL_29;
      }
      if ( (float)((float)((float)(v34 + v8) - v33) - v32) <= 0.0 )
        goto LABEL_35;
      if ( (float)((float)((float)(v34 + v8) - v33) - v32) >= (float)((float)(v37 - (float)(v33 + v33)) + v34) )
        goto LABEL_37;
      v17 = (float)((float)(v34 + v8) - v33) - v32;
      v18 = (float)(v37 - (float)(v33 + v33)) + v34;
    }
    else
    {
      v16 = v34 + v8;
      if ( (float)(v34 + v8) <= (float)(v33 + v32) )
      {
        if ( v16 > 0.0 )
        {
          if ( v8 >= 0.0 )
            goto LABEL_42;
          LODWORD(v13) = LODWORD(v8) + 0x80000000;
          goto LABEL_23;
        }
        goto LABEL_35;
      }
      v17 = v16 - (float)(v33 + v32);
      if ( v17 >= (float)((float)(v37 - (float)(v33 + v33)) + v34) )
        goto LABEL_37;
      v18 = (float)(v37 - (float)(v33 + v33)) + v34;
    }
    v27 = v17 / v18;
    v25 = (float)(1.0 - v27)
        * (float)((float)((float)(v33 * v27) + (float)(v34 * (float)(1.0 - v27))) + (float)(v8 + v8));
    v26 = v27 * (float)((float)((float)(v37 * v27) + (float)(v33 * (float)(1.0 - v27))) + (float)(v32 + v32));
    goto LABEL_40;
  }
  if ( v35 >= 0.0 )
  {
    if ( v10 < 0.0 )
    {
      if ( v32 >= 0.0 )
        goto LABEL_42;
      goto LABEL_13;
    }
    v39 = 1.0 / v11;
    v15 = v35 * (float)(1.0 / v11);
    v36 = v10 * v39;
LABEL_29:
    v25 = v36 * (float)((float)((float)(v33 * v15) + (float)(v34 * v36)) + (float)(v8 + v8));
    v26 = v15 * (float)((float)((float)(v37 * v15) + (float)(v33 * v36)) + (float)(v32 + v32));
LABEL_40:
    v21 = v26 + v25;
    goto LABEL_41;
  }
  if ( v10 < 0.0 )
  {
    if ( v32 >= 0.0 )
    {
      if ( v8 >= 0.0 )
        goto LABEL_42;
      LODWORD(v12) = LODWORD(v8) + 0x80000000;
      goto LABEL_9;
    }
LABEL_13:
    if ( COERCE_FLOAT(LODWORD(v32) + 0x80000000) < v37 )
    {
      LODWORD(v14) = LODWORD(v32) + 0x80000000;
LABEL_33:
      v19 = v14 / v37;
      v20 = v32;
      goto LABEL_24;
    }
    goto LABEL_37;
  }
  if ( v8 < 0.0 )
  {
    LODWORD(v12) = LODWORD(v8) + 0x80000000;
LABEL_9:
    if ( v12 >= v34 )
    {
LABEL_35:
      v25 = v8 + v8;
      v26 = v34;
      goto LABEL_40;
    }
    v13 = v12;
LABEL_23:
    v19 = v13 / v34;
    v20 = v8;
LABEL_24:
    v21 = v20 * v19;
LABEL_41:
    v9 = v9 + v21;
  }
LABEL_42:
  LODWORD(v28) = (unsigned int)(2 * LODWORD(v9)) >> 1;
  if ( a6 != nullptr )
  {
    v29 = j_sqrt(v28);
    *(float *)a6 = v29;
  }
  return v28 < (float)(*(float *)&a2 * *(float *)&a2);
}


//======================================================================
// ozcollide::testIntersectionTriSphere(ozcollide::Vec3f const**,ozcollide::Vec3f const&,ozcollide::Sphere const&,ozcollide::Vec3f const&,float &,ozcollide::Vec3f&)
// address: 0x001D4720   size: 0x4D8 (1240 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionTriSphere(
        const ozcollide::Vec3f **a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        ozcollide::Vec3f *a6)
{
  float v7; // r1
  float v8; // r2
  float v9; // r3
  float v11; // r6
  float v12; // r7
  float v13; // r6
  float v14; // r7
  ozcollide *v15; // r1
  const ozcollide::Vec3f *v16; // r2
  const ozcollide::Vec3f *v17; // r3
  int i; // r5
  float *v19; // r3
  float v20; // r4
  int v21; // r3
  int v22; // r2
  float *v23; // r3
  int v24; // r3
  float *v25; // r3
  float v26; // r5
  float v27; // r6
  float v28; // r0
  float v29; // r0
  float v30; // r6
  float v31; // r0
  float v32; // r6
  float v33; // r4
  int v34; // r5
  int v35; // r6
  int v36; // r5
  int v37; // r6
  float v38; // r2
  float v39; // r3
  float v40; // r4
  float v41; // r3
  float v42; // r2
  float v43; // r6
  float v44; // r5
  ozcollide::Vec3f *v45; // [sp+0h] [bp-11Ch]
  ozcollide::Vec3f *v46; // [sp+0h] [bp-11Ch]
  float v47; // [sp+30h] [bp-ECh]
  int v48; // [sp+34h] [bp-E8h]
  float v49; // [sp+38h] [bp-E4h]
  int v50; // [sp+38h] [bp-E4h]
  float v52; // [sp+40h] [bp-DCh]
  float v53; // [sp+48h] [bp-D4h]
  float v55[4]; // [sp+58h] [bp-C4h] BYREF
  float v56; // [sp+68h] [bp-B4h] BYREF
  float v57[2]; // [sp+6Ch] [bp-B0h] BYREF
  float v58; // [sp+74h] [bp-A8h] BYREF
  float v59; // [sp+78h] [bp-A4h]
  float v60; // [sp+7Ch] [bp-A0h]
  float v61[3]; // [sp+80h] [bp-9Ch] BYREF
  float v62[3]; // [sp+8Ch] [bp-90h] BYREF
  float v63[3]; // [sp+98h] [bp-84h] BYREF
  float v64[3]; // [sp+A4h] [bp-78h] BYREF
  float v65[3]; // [sp+B0h] [bp-6Ch] BYREF
  float v66[3]; // [sp+BCh] [bp-60h] BYREF
  float v67[3]; // [sp+C8h] [bp-54h] BYREF
  float v68[3]; // [sp+D4h] [bp-48h] BYREF
  float v69; // [sp+E0h] [bp-3Ch] BYREF
  float v70; // [sp+E4h] [bp-38h]
  float v71; // [sp+E8h] [bp-34h]
  float v72; // [sp+ECh] [bp-30h] BYREF
  float v73; // [sp+F0h] [bp-2Ch]
  float v74; // [sp+F4h] [bp-28h]
  _BYTE v75[16]; // [sp+F8h] [bp-24h] BYREF
  float v76; // [sp+108h] [bp-14h] BYREF
  float v77; // [sp+10Ch] [bp-10h]
  float v78; // [sp+110h] [bp-Ch]

  v7 = *a4;
  v8 = a4[1];
  v9 = a4[2];
  v58 = v7;
  v59 = v8;
  v60 = v9;
  ozcollide::Vec3f::normalize((ozcollide::Vec3f *)&v58);
  if ( ozcollide::Vec3f::dot((ozcollide::Vec3f *)a2, (const ozcollide::Vec3f *)&v58) >= 0.0 )
    return 0;
  *a5 = 3.4028e38;
  ozcollide::Plane::Plane((ozcollide::Plane *)v75);
  ozcollide::Plane::fromPointAndNormal((ozcollide::Plane *)v75, *a1, (const ozcollide::Vec3f *)a2);
  v11 = ozcollide::Plane::dist((ozcollide::Plane *)v75, (const ozcollide::Vec3f *)a3);
  v49 = a3[3];
  if ( v11 < COERCE_FLOAT(LODWORD(v49) + 0x80000000) )
    return 0;
  if ( v11 <= v49 )
    goto LABEL_10;
  v12 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)a2, (const ozcollide::Vec3f *)&v58);
  v48 = v12 == 0.0;
  if ( v12 == 0.0 )
    goto LABEL_10;
  v13 = COERCE_FLOAT(COERCE_INT(v11 - v49) + 0x80000000) / v12;
  if ( v13 < 0.0 )
    goto LABEL_10;
  v76 = v58 * v13;
  v77 = v13 * v59;
  v78 = v13 * v60;
  ozcollide::Vec3f::operator+(&v72, a3, &v76);
  v14 = v49 * a2[1];
  v47 = v49 * a2[2];
  v72 = v72 - (float)(v49 * *a2);
  v73 = v73 - v14;
  v15 = *a1;
  v16 = a1[1];
  v17 = a1[2];
  v74 = v74 - v47;
  if ( !ozcollide::isPointInsideTriangle(v15, v16, v17, (const ozcollide::Vec3f *)&v72, v45) || v13 >= *a5 )
  {
LABEL_10:
    v48 = -1;
  }
  else
  {
    *a5 = v13;
    *(float *)a6 = *a2;
    *((float *)a6 + 1) = a2[1];
    *((float *)a6 + 2) = a2[2];
  }
  for ( i = 0; i != 3; ++i )
  {
    v19 = (float *)a1[i];
    v67[0] = *v19;
    v67[1] = v19[1];
    v67[2] = v19[2];
    ozcollide::Vec3f::operator-(v68, v67, &v58);
    ozcollide::Vec3f::operator-(&v69, v68, v67);
    v46 = (ozcollide::Vec3f *)v64;
    v64[0] = 3.4028e38;
    v65[0] = 3.4028e38;
    if ( ozcollide::testIntersectionSphereLine(a3, v67, v68, v66) != 0 )
    {
      v20 = v65[0];
      if ( v65[0] >= v64[0] )
        v20 = v64[0];
      if ( v20 >= 0.0 && v20 < *a5 )
      {
        *a5 = v20;
        v78 = v20 * v71;
        v76 = v69 * v20;
        v77 = v20 * v70;
        ozcollide::Vec3f::operator+(&v72, v67, &v76);
        ozcollide::Vec3f::operator-(v55, a3, &v72);
        *(float *)a6 = v55[0];
        *((float *)a6 + 1) = v55[1];
        v48 = 1;
        *((float *)a6 + 2) = v55[2];
      }
    }
  }
  v50 = 0;
  do
  {
    v21 = v50;
    v22 = v50 + 1;
    v50 = v22;
    v23 = (float *)a1[v21];
    v61[0] = *v23;
    v61[1] = v23[1];
    v61[2] = v23[2];
    if ( v22 == 3 )
      v24 = 0;
    else
      v24 = v22;
    v25 = (float *)a1[v24];
    v62[0] = *v25;
    v62[1] = v25[1];
    v62[2] = v25[2];
    ozcollide::Plane::Plane((ozcollide::Plane *)&v76);
    ozcollide::Vec3f::operator-(&v72, v62, &v58);
    ozcollide::Plane::fromPoints(
      (ozcollide::Plane *)&v76,
      (const ozcollide::Vec3f *)v61,
      (const ozcollide::Vec3f *)v62,
      (const ozcollide::Vec3f *)&v72);
    v26 = ozcollide::Plane::dist((ozcollide::Plane *)&v76, (const ozcollide::Vec3f *)a3);
    v27 = a3[3];
    if ( v26 <= v27 && v26 >= COERCE_FLOAT(LODWORD(v27) + 0x80000000) )
    {
      v28 = j_sqrt((float)((float)(v27 * v27) - (float)(v26 * v26)));
      v52 = v28;
      v29 = ozcollide::Plane::dist((ozcollide::Plane *)&v76, (const ozcollide::Vec3f *)a3);
      v53 = a3[1] - (float)(v29 * v77);
      v30 = a3[2] - (float)(v29 * v78);
      v31 = *a3 - (float)(v29 * v76);
      v63[2] = v30;
      v63[0] = v31;
      v63[1] = v53;
      ozcollide::distancePointToLine(
        (ozcollide *)v63,
        (const ozcollide::Vec3f *)v61,
        (const ozcollide::Vec3f *)v62,
        (const ozcollide::Vec3f *)v64,
        v46);
      ozcollide::Vec3f::operator-(v65, v64, v63);
      ozcollide::Vec3f::normalize((ozcollide::Vec3f *)v65);
      v72 = v65[0] * v52;
      v74 = v52 * v65[2];
      v73 = v52 * v65[1];
      ozcollide::Vec3f::operator+(v66, &v72, v63);
      LODWORD(v32) = (unsigned int)(2 * LODWORD(v76)) >> 1;
      LODWORD(v33) = (unsigned int)(2 * LODWORD(v78)) >> 1;
      if ( v32 > COERCE_FLOAT((unsigned int)(2 * LODWORD(v77)) >> 1) && v32 > v33 )
      {
        v34 = 2;
        v35 = 1;
      }
      else
      {
        v34 = 1;
        if ( COERCE_FLOAT((unsigned int)(2 * LODWORD(v77)) >> 1) > v33 )
          v34 = 2;
        v35 = 0;
      }
      v36 = v34;
      ozcollide::Vec3f::operator+(v67, v66, &v58);
      v37 = v35;
      v38 = v66[v37];
      v57[1] = v66[v36];
      v39 = v67[v36];
      v57[0] = v38;
      v68[1] = v39;
      v40 = v67[v37];
      v70 = v61[v36];
      v41 = v62[v36];
      v42 = v61[v37];
      v43 = v62[v37];
      v68[0] = v40;
      v73 = v41;
      v69 = v42;
      v72 = v43;
      if ( ozcollide::testIntersectionLineLine(v57, v68, &v69, &v72, &v56) != 0 )
      {
        v44 = v56;
        if ( v56 >= 0.0 )
        {
          v72 = v58 * v56;
          v73 = v56 * v59;
          v74 = v56 * v60;
          ozcollide::Vec3f::operator+(v68, v66, &v72);
          ozcollide::Vec3f::operator-(&v69, v61, v68);
          ozcollide::Vec3f::operator-(&v72, v62, v68);
          if ( ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v69, (const ozcollide::Vec3f *)&v72) <= 0.0 && v44 <= *a5 )
          {
            *a5 = v44;
            ozcollide::Vec3f::operator-(v55, a3, v66);
            *(float *)a6 = v55[0];
            *((float *)a6 + 1) = v55[1];
            v48 = 2;
            *((float *)a6 + 2) = v55[2];
          }
        }
      }
    }
  }
  while ( v50 != 3 );
  if ( v48 == -1 )
    return 0;
  ozcollide::Vec3f::normalize(a6);
  return 1;
}


//======================================================================
// ozcollide::testIntersectionTriBox(ozcollide::Vec3f const*,ozcollide::Box const&)
// address: 0x001D5CB8   size: 0x89E (2206 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionTriBox(ozcollide *this, const ozcollide::Vec3f *a2, const ozcollide::Box *a3)
{
  float v3; // r7
  float v4; // r6
  float v5; // r5
  float v6; // r4
  float v7; // r5
  float v8; // r7
  _BOOL4 v9; // r3
  float v10; // r4
  float v11; // r5
  float v12; // r6
  float v13; // r6
  float v14; // r5
  float v15; // r4
  float v16; // r6
  float v17; // r4
  float v18; // r5
  float v19; // r7
  float v20; // r4
  float v21; // r5
  float v22; // r6
  float v23; // r6
  float v24; // r7
  float v25; // r4
  float v26; // r5
  float v27; // r6
  float v28; // r5
  float v29; // r4
  float v30; // r6
  float v31; // r6
  float v32; // r4
  float v33; // r5
  float v34; // r6
  float v35; // r7
  float v36; // r5
  float v37; // r6
  float v38; // r4
  float v39; // r4
  float v40; // r4
  float v41; // r4
  int v42; // r6
  int v43; // r3
  float v45; // [sp+4h] [bp-88h]
  float v46; // [sp+8h] [bp-84h]
  float v47; // [sp+8h] [bp-84h]
  float v48; // [sp+Ch] [bp-80h]
  float v49; // [sp+10h] [bp-7Ch]
  float v50; // [sp+14h] [bp-78h]
  float v51; // [sp+18h] [bp-74h]
  float v52; // [sp+1Ch] [bp-70h]
  float v53; // [sp+20h] [bp-6Ch]
  float v54; // [sp+24h] [bp-68h]
  float v55; // [sp+28h] [bp-64h]
  float v56; // [sp+28h] [bp-64h]
  float v57; // [sp+2Ch] [bp-60h]
  float v58; // [sp+2Ch] [bp-60h]
  float v59; // [sp+30h] [bp-5Ch]
  float v60; // [sp+30h] [bp-5Ch]
  float v61; // [sp+34h] [bp-58h]
  float v62; // [sp+38h] [bp-54h]
  float v63; // [sp+3Ch] [bp-50h]
  float v64; // [sp+3Ch] [bp-50h]
  float v65; // [sp+40h] [bp-4Ch]
  float v66; // [sp+44h] [bp-48h]
  float v67; // [sp+4Ch] [bp-40h]
  float v68; // [sp+50h] [bp-3Ch]
  float v69; // [sp+54h] [bp-38h]
  float v70; // [sp+58h] [bp-34h]
  float v71; // [sp+5Ch] [bp-30h]
  float v72; // [sp+64h] [bp-28h]
  float v73; // [sp+68h] [bp-24h]
  float v74; // [sp+6Ch] [bp-20h]
  float v75[3]; // [sp+70h] [bp-1Ch]
  float v76[4]; // [sp+7Ch] [bp-10h] BYREF

  v3 = *((float *)a2 + 1);
  v4 = *(float *)a2;
  v51 = *((float *)this + 1) - v3;
  v5 = *((float *)a2 + 2);
  v46 = *((float *)this + 2) - v5;
  v48 = *((float *)this + 4) - v3;
  v54 = *((float *)this + 5) - v5;
  v55 = *((float *)this + 6);
  v52 = *((float *)this + 7) - v3;
  v53 = *((float *)this + 8) - v5;
  v66 = v48 - v51;
  v67 = v54 - v46;
  LODWORD(v57) = (unsigned int)(2 * COERCE_INT(v48 - v51)) >> 1;
  LODWORD(v59) = (unsigned int)(2 * COERCE_INT(v54 - v46)) >> 1;
  v6 = (float)((float)(v54 - v46) * v51) - (float)((float)(v48 - v51) * v46);
  v7 = (float)((float)(v54 - v46) * v52) - (float)((float)(v48 - v51) * v53);
  if ( v6 < v7 )
  {
    v7 = (float)((float)(v54 - v46) * v51) - (float)((float)(v48 - v51) * v46);
    v6 = (float)(v67 * v52) - (float)(v66 * v53);
  }
  v61 = *((float *)a2 + 4);
  v62 = *((float *)a2 + 5);
  v8 = (float)(v59 * v61) + (float)(v57 * v62);
  LOBYTE(v9) = 0;
  if ( v7 <= v8 )
  {
    LOBYTE(v9) = 0;
    if ( v6 >= COERCE_FLOAT(LODWORD(v8) + 0x80000000) )
    {
      v50 = *(float *)this - v4;
      v45 = *((float *)this + 3) - v4;
      v49 = v55 - v4;
      v65 = v45 - v50;
      v10 = (float)(COERCE_FLOAT(LODWORD(v67) + 0x80000000) * v50) + (float)((float)(v45 - v50) * v46);
      v11 = (float)(COERCE_FLOAT(LODWORD(v67) + 0x80000000) * (float)(v55 - v4)) + (float)((float)(v45 - v50) * v53);
      v12 = v11;
      if ( v10 < v11 )
      {
        v11 = (float)(COERCE_FLOAT(LODWORD(v67) + 0x80000000) * v50) + (float)(v65 * v46);
        v10 = v12;
      }
      LODWORD(v13) = (unsigned int)(2 * LODWORD(v65)) >> 1;
      v56 = *((float *)a2 + 3);
      LOBYTE(v9) = 0;
      if ( v11 <= (float)((float)(v59 * v56) + (float)(v13 * v62)) )
      {
        LOBYTE(v9) = 0;
        if ( v10 >= COERCE_FLOAT(COERCE_INT((float)(v59 * v56) + (float)(v13 * v62)) + 0x80000000) )
        {
          v14 = (float)(v66 * v45) - (float)(v65 * v48);
          v15 = (float)(v66 * v49) - (float)(v65 * v52);
          if ( v15 < v14 )
          {
            v14 = (float)(v66 * v49) - (float)(v65 * v52);
            v15 = (float)(v66 * v45) - (float)(v65 * v48);
          }
          v16 = (float)(v57 * v56) + (float)(v13 * v61);
          LOBYTE(v9) = 0;
          if ( v14 <= v16 )
          {
            LOBYTE(v9) = 0;
            if ( v15 >= COERCE_FLOAT(LODWORD(v16) + 0x80000000) )
            {
              v60 = v52 - v48;
              v68 = v53 - v54;
              LODWORD(v63) = (unsigned int)(2 * COERCE_INT(v52 - v48)) >> 1;
              v17 = (float)((float)(v53 - v54) * v51) - (float)((float)(v52 - v48) * v46);
              v18 = (float)((float)(v53 - v54) * v52) - (float)((float)(v52 - v48) * v53);
              LODWORD(v19) = (unsigned int)(2 * COERCE_INT(v53 - v54)) >> 1;
              if ( v17 < v18 )
              {
                v18 = (float)((float)(v53 - v54) * v51) - (float)((float)(v52 - v48) * v46);
                v17 = (float)(v68 * v52) - (float)(v60 * v53);
              }
              LOBYTE(v9) = 0;
              if ( v18 <= (float)((float)(v19 * v61) + (float)(v63 * v62)) )
              {
                LOBYTE(v9) = 0;
                if ( v17 >= COERCE_FLOAT(COERCE_INT((float)(v19 * v61) + (float)(v63 * v62)) + 0x80000000) )
                {
                  v58 = v49 - v45;
                  v20 = (float)(COERCE_FLOAT(LODWORD(v68) + 0x80000000) * v50) + (float)((float)(v49 - v45) * v46);
                  v21 = (float)(COERCE_FLOAT(LODWORD(v68) + 0x80000000) * v49) + (float)((float)(v49 - v45) * v53);
                  v22 = v21;
                  if ( v20 < v21 )
                  {
                    v21 = (float)(COERCE_FLOAT(LODWORD(v68) + 0x80000000) * v50) + (float)(v58 * v46);
                    v20 = v22;
                  }
                  LODWORD(v23) = (unsigned int)(2 * LODWORD(v58)) >> 1;
                  v24 = (float)(v19 * v56) + (float)(v23 * v62);
                  LOBYTE(v9) = 0;
                  if ( v21 <= v24 )
                  {
                    LOBYTE(v9) = 0;
                    if ( v20 >= COERCE_FLOAT(LODWORD(v24) + 0x80000000) )
                    {
                      v25 = (float)(v60 * v50) - (float)(v58 * v51);
                      v26 = (float)(v60 * v45) - (float)(v58 * v48);
                      if ( v25 < v26 )
                      {
                        v26 = (float)(v60 * v50) - (float)(v58 * v51);
                        v25 = (float)(v60 * v45) - (float)(v58 * v48);
                      }
                      v27 = (float)(v63 * v56) + (float)(v23 * v61);
                      LOBYTE(v9) = 0;
                      if ( v26 <= v27 )
                      {
                        LOBYTE(v9) = 0;
                        if ( v25 >= COERCE_FLOAT(LODWORD(v27) + 0x80000000) )
                        {
                          v64 = v51 - v52;
                          v28 = v46 - v53;
                          LODWORD(v70) = (unsigned int)(2 * COERCE_INT(v51 - v52)) >> 1;
                          LODWORD(v71) = (unsigned int)(2 * COERCE_INT(v46 - v53)) >> 1;
                          v29 = (float)((float)(v46 - v53) * v51) - (float)((float)(v51 - v52) * v46);
                          v30 = (float)((float)(v46 - v53) * v48) - (float)((float)(v51 - v52) * v54);
                          if ( v29 < v30 )
                          {
                            v30 = (float)((float)(v46 - v53) * v51) - (float)((float)(v51 - v52) * v46);
                            v29 = (float)(v28 * v48) - (float)(v64 * v54);
                          }
                          LOBYTE(v9) = 0;
                          if ( v30 <= (float)((float)(v71 * v61) + (float)(v70 * v62)) )
                          {
                            LOBYTE(v9) = 0;
                            if ( v29 >= COERCE_FLOAT(COERCE_INT((float)(v71 * v61) + (float)(v70 * v62)) + 0x80000000) )
                            {
                              LODWORD(v31) = LODWORD(v28) + 0x80000000;
                              v32 = v50 - v49;
                              v33 = (float)(COERCE_FLOAT(LODWORD(v28) + 0x80000000) * v50)
                                  + (float)((float)(v50 - v49) * v46);
                              v34 = (float)(v31 * v45) + (float)((float)(v50 - v49) * v54);
                              v35 = v34;
                              if ( v33 < v34 )
                              {
                                v34 = v33;
                                v33 = v35;
                              }
                              LODWORD(v69) = (unsigned int)(2 * LODWORD(v32)) >> 1;
                              LOBYTE(v9) = 0;
                              if ( v34 <= (float)((float)(v71 * v56) + (float)(v69 * v62)) )
                              {
                                LOBYTE(v9) = 0;
                                if ( v33 >= COERCE_FLOAT(COERCE_INT((float)(v71 * v56) + (float)(v69 * v62)) + 0x80000000) )
                                {
                                  v36 = (float)(v64 * v45) - (float)(v32 * v48);
                                  v37 = v36;
                                  v38 = (float)(v64 * v49) - (float)(v32 * v52);
                                  if ( v38 < v36 )
                                  {
                                    v36 = v38;
                                    v38 = v37;
                                  }
                                  LOBYTE(v9) = 0;
                                  if ( v36 <= (float)((float)(v70 * v56) + (float)(v69 * v61)) )
                                  {
                                    LOBYTE(v9) = 0;
                                    if ( v38 >= COERCE_FLOAT(COERCE_INT((float)(v70 * v56) + (float)(v69 * v61)) + 0x80000000) )
                                    {
                                      v39 = v45;
                                      if ( v45 >= v50 )
                                        v39 = v50;
                                      if ( v45 <= v50 )
                                        v45 = v50;
                                      if ( v49 < v39 )
                                        v39 = v49;
                                      if ( v49 <= v45 )
                                        v49 = v45;
                                      LOBYTE(v9) = 0;
                                      if ( v39 <= v56 )
                                      {
                                        LOBYTE(v9) = 0;
                                        if ( v49 >= COERCE_FLOAT(LODWORD(v56) + 0x80000000) )
                                        {
                                          v40 = v48;
                                          if ( v48 >= v51 )
                                            v40 = v51;
                                          if ( v48 <= v51 )
                                            v48 = v51;
                                          if ( v52 < v40 )
                                            v40 = v52;
                                          if ( v52 <= v48 )
                                            v52 = v48;
                                          LOBYTE(v9) = 0;
                                          if ( v40 <= v61 )
                                          {
                                            LOBYTE(v9) = 0;
                                            if ( v52 >= COERCE_FLOAT(LODWORD(v61) + 0x80000000) )
                                            {
                                              v41 = v54;
                                              if ( v54 >= v46 )
                                                v41 = *((float *)this + 2) - *((float *)a2 + 2);
                                              if ( v54 <= v46 )
                                                v54 = *((float *)this + 2) - *((float *)a2 + 2);
                                              if ( v53 < v41 )
                                                v41 = v53;
                                              if ( v53 <= v54 )
                                                v53 = v54;
                                              LOBYTE(v9) = 0;
                                              if ( v41 <= v62 )
                                              {
                                                LOBYTE(v9) = 0;
                                                if ( v53 >= COERCE_FLOAT(LODWORD(v62) + 0x80000000) )
                                                {
                                                  v72 = (float)(v66 * v68) - (float)(v67 * v60);
                                                  v73 = (float)(v67 * v58) - (float)(v65 * v68);
                                                  v74 = (float)(v65 * v60) - (float)(v66 * v58);
                                                  v42 = v53 < COERCE_FLOAT(LODWORD(v62) + 0x80000000);
                                                  v47 = (float)((float)(v72 * v50) + (float)(v73 * v51))
                                                      + (float)(v74 * v46);
                                                  do
                                                  {
                                                    v43 = *(_DWORD *)((char *)a2 + v42 + 12);
                                                    if ( *(float *)((char *)&v72 + v42) <= 0.0 )
                                                    {
                                                      *(_DWORD *)((char *)v75 + v42) = v43;
                                                      v43 += 0x80000000;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)((char *)v75 + v42) = v43 + 0x80000000;
                                                    }
                                                    *(_DWORD *)((char *)v76 + v42) = v43;
                                                    v42 += 4;
                                                  }
                                                  while ( v42 != 12 );
                                                  LOBYTE(v9) = 0;
                                                  if ( (float)((float)((float)((float)(v72 * v75[0])
                                                                             + (float)(v73 * v75[1]))
                                                                     + (float)(v74 * v75[2]))
                                                             - v47) <= 0.0 )
                                                    return (float)((float)((float)((float)(v72 * v76[0])
                                                                                 + (float)(v73 * v76[1]))
                                                                         + (float)(v74 * v76[2]))
                                                                 - v47) >= 0.0;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return v9;
}


//======================================================================
// ozcollide::testIntersectionTriBox(ozcollide::Polygon const&,ozcollide::Vec3f const*,ozcollide::Box const&)
// address: 0x001D6556   size: 0x3A (58 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionTriBox(
        ozcollide *this,
        const ozcollide::Polygon *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Box *a4)
{
  int v4; // r3
  int v5; // r4
  int v6; // r5
  int v7; // r7
  char *v8; // r5
  int v9; // r7
  int v10; // r5
  _BYTE *v11; // r4
  _BYTE v13[40]; // [sp+4h] [bp-28h] BYREF

  v4 = 0;
  do
  {
    v5 = 3 * v4;
    v6 = 12 * *(_DWORD *)((char *)this + v4 + 4);
    v7 = *(_DWORD *)((char *)a2 + v6);
    v8 = (char *)a2 + v6;
    v4 += 4;
    *(_DWORD *)&v13[v5] = v7;
    v9 = *((_DWORD *)v8 + 1);
    v10 = *((_DWORD *)v8 + 2);
    v11 = &v13[v5];
    *((_DWORD *)v11 + 1) = v9;
    *((_DWORD *)v11 + 2) = v10;
  }
  while ( v4 != 12 );
  return ozcollide::testIntersectionTriBox((ozcollide *)v13, a3, a3);
}


//======================================================================
// ozcollide::testIntersectionTriOBB(ozcollide::Polygon const&,ozcollide::Vec3f const*,ozcollide::OBB const&)
// address: 0x001D6590   size: 0x13C (316 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionTriOBB(int a1, int a2, int a3)
{
  float *v5; // r5
  int v6; // r7
  float *v7; // r7
  const ozcollide::Box *v8; // r2
  int v9; // r3
  int v10; // r4
  float v12; // [sp+0h] [bp-D4h]
  float v13; // [sp+4h] [bp-D0h]
  float v14; // [sp+8h] [bp-CCh]
  float v15; // [sp+Ch] [bp-C8h]
  float v16; // [sp+10h] [bp-C4h]
  float v17; // [sp+14h] [bp-C0h]
  _BYTE v18[48]; // [sp+18h] [bp-BCh]
  _DWORD v19[6]; // [sp+54h] [bp-80h] BYREF
  _DWORD v20[26]; // [sp+6Ch] [bp-68h] BYREF

  v15 = *(float *)a3;
  v16 = *(float *)(a3 + 4);
  v17 = *(float *)(a3 + 8);
  qmemcpy(v18, &v20[9], sizeof(v18));
  v5 = (float *)v20;
  do
  {
    v6 = 12 * *(_DWORD *)(a1 + 4);
    a1 += 4;
    v7 = (float *)(a2 + v6);
    v12 = *v7 - v15;
    v13 = v7[1] - v16;
    v14 = v7[2] - v17;
    *v5 = (float)((float)((float)(v12 * *(float *)v18) + (float)(v13 * *(float *)&v18[4]))
                + (float)(v14 * *(float *)&v18[8]))
        + *(float *)&v18[12];
    v5[1] = (float)((float)((float)(v12 * *(float *)&v18[16]) + (float)(v13 * *(float *)&v18[20]))
                  + (float)(v14 * *(float *)&v18[24]))
          + *(float *)&v18[28];
    v5[2] = (float)((float)((float)(v12 * *(float *)&v18[32]) + (float)(v13 * *(float *)&v18[36]))
                  + (float)(v14 * *(float *)&v18[40]))
          + *(float *)&v18[44];
    v5 += 3;
  }
  while ( v5 != (float *)&v20[9] );
  v8 = *(const ozcollide::Box **)(a3 + 16);
  memset(v19, 0, 12);
  v9 = *(_DWORD *)(a3 + 12);
  v10 = *(_DWORD *)(a3 + 20);
  v19[3] = v9;
  v19[4] = v8;
  v19[5] = v10;
  return ozcollide::testIntersectionTriBox((ozcollide *)v20, (const ozcollide::Vec3f *)v19, v8);
}


//======================================================================
// ozcollide::magic_testIntersectionTriBox(ozcollide::Vec3f const**,ozcollide::Box const&)
// address: 0x001D66CC   size: 0x1DC (476 bytes)
//======================================================================
int __fastcall ozcollide::magic_testIntersectionTriBox(
        float **this,
        const ozcollide::Vec3f **a2,
        const ozcollide::Box *a3)
{
  float *v3; // r7
  __int64 v4; // r2
  int v5; // r6
  float v6; // r0
  float v7; // r1
  float v8; // r1
  float *v9; // r6
  __int64 v10; // r2
  int i; // [sp+8h] [bp-74h]
  float v14; // [sp+10h] [bp-6Ch]
  float v16[5]; // [sp+18h] [bp-64h] BYREF
  float v17; // [sp+2Ch] [bp-50h] BYREF
  float v18; // [sp+30h] [bp-4Ch] BYREF
  float v19; // [sp+34h] [bp-48h] BYREF
  float v20; // [sp+38h] [bp-44h] BYREF
  float v21; // [sp+3Ch] [bp-40h] BYREF
  float v22; // [sp+40h] [bp-3Ch]
  float v23; // [sp+44h] [bp-38h]
  float v24[3]; // [sp+48h] [bp-34h] BYREF
  float v25[3]; // [sp+54h] [bp-28h] BYREF
  float v26[6]; // [sp+60h] [bp-1Ch] BYREF
  char v27; // [sp+78h] [bp-4h] BYREF

  v3 = *this;
  ozcollide::Vec3f::operator-(v16, *(this + 1), *this);
  qmemcpy(v25, v16, sizeof(v25));
  ozcollide::Vec3f::operator-(v16, *(this + 2), v3);
  v26[0] = v16[0];
  v26[1] = v16[1];
  v26[2] = v16[2];
  ozcollide::Vec3f::operator|(v16, v25, v26);
  v21 = v16[0];
  v22 = v16[1];
  v23 = v16[2];
  v17 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v21, (const ozcollide::Vec3f *)v3);
  v18 = v17;
  LODWORD(v4) = &v19;
  HIDWORD(v4) = &v20;
  sub_1D5A9E((ozcollide::Vec3f *)&v21, (float *)a2, v4);
  if ( v20 >= v17 && v18 >= v19 )
  {
    v5 = 0;
    while ( 1 )
    {
      if ( v5 != 0 )
      {
        v21 = 0.0;
        if ( v5 != 1 )
        {
          v22 = 0.0;
          v23 = 1.0;
          goto LABEL_10;
        }
        v22 = 1.0;
      }
      else
      {
        v21 = 1.0;
        v22 = 0.0;
      }
      v23 = 0.0;
LABEL_10:
      sub_1D5A3A((ozcollide::Vec3f *)&v21, (const ozcollide::Vec3f **)this, &v17, &v18);
      v6 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v21, (const ozcollide::Vec3f *)a2);
      if ( v5 != 0 )
      {
        if ( v5 == 1 )
          v7 = *((float *)a2 + 4);
        else
          v7 = *((float *)a2 + 5);
      }
      else
      {
        v7 = *((float *)a2 + 3);
      }
      v14 = v6 - v7;
      v19 = v6 - v7;
      if ( v5 != 0 )
      {
        if ( v5 == 1 )
          v8 = *((float *)a2 + 4);
        else
          v8 = *((float *)a2 + 5);
      }
      else
      {
        v8 = *((float *)a2 + 3);
      }
      v20 = v6 + v8;
      if ( (float)(v6 + v8) < v17 || v18 < v14 )
        return 0;
      if ( ++v5 == 3 )
      {
        ozcollide::Vec3f::operator-(v16, v26, v25);
        v9 = v25;
        v26[3] = v16[0];
        v26[4] = v16[1];
        v26[5] = v16[2];
        while ( 1 )
        {
          for ( i = 0; i != 3; ++i )
          {
            if ( i != 0 )
            {
              v24[0] = 0.0;
              if ( i != 1 )
              {
                v24[1] = 0.0;
                v24[2] = 1.0;
                goto LABEL_31;
              }
              v24[1] = 1.0;
            }
            else
            {
              v24[0] = 1.0;
              v24[1] = 0.0;
            }
            v24[2] = 0.0;
LABEL_31:
            ozcollide::Vec3f::operator|(v16, v9, v24);
            v21 = v16[0];
            v22 = v16[1];
            v23 = v16[2];
            sub_1D5A3A((ozcollide::Vec3f *)&v21, (const ozcollide::Vec3f **)this, &v17, &v18);
            LODWORD(v10) = &v19;
            HIDWORD(v10) = &v20;
            sub_1D5A9E((ozcollide::Vec3f *)&v21, (float *)a2, v10);
            if ( v20 < v17 || v18 < v19 )
              return 0;
          }
          v9 += 3;
          if ( v9 == (float *)&v27 )
            return 1;
        }
      }
    }
  }
  return 0;
}


//======================================================================
// ozcollide::magic_testIntersectionTriBox(ozcollide::Vec3f const**,ozcollide::Box const&,ozcollide::Vec3f const&,float,float &,float &)
// address: 0x001D68A8   size: 0x230 (560 bytes)
//======================================================================
int __fastcall ozcollide::magic_testIntersectionTriBox(
        float **this,
        const ozcollide::Vec3f **a2,
        const ozcollide::Box *a3,
        const ozcollide::Vec3f *a4,
        float *a5,
        float *a6,
        float *a7)
{
  int v8; // r3
  int v9; // r2
  float *v10; // r1
  float v11; // r0
  __int64 v12; // r2
  float v13; // r0
  int v14; // r4
  float v15; // r0
  float v16; // r1
  float v17; // r1
  float v18; // r5
  float v19; // r0
  __int64 v20; // r2
  float v21; // r0
  float *v23; // [sp+14h] [bp-34h]
  float v24; // [sp+14h] [bp-34h]
  float *v25; // [sp+14h] [bp-34h]
  int i; // [sp+20h] [bp-28h]
  float v29[4]; // [sp+28h] [bp-20h] BYREF
  float v30; // [sp+38h] [bp-10h] BYREF
  float v31; // [sp+3Ch] [bp-Ch] BYREF
  float v32; // [sp+40h] [bp-8h] BYREF
  float v33; // [sp+44h] [bp-4h] BYREF
  float v34; // [sp+48h] [bp+0h] BYREF
  float v35; // [sp+4Ch] [bp+4h]
  float v36; // [sp+50h] [bp+8h]
  _DWORD v37[3]; // [sp+54h] [bp+Ch] BYREF
  float v38[3]; // [sp+60h] [bp+18h] BYREF
  float v39[3]; // [sp+6Ch] [bp+24h] BYREF
  float v40[6]; // [sp+78h] [bp+30h] BYREF
  char v41; // [sp+90h] [bp+48h] BYREF

  v37[0] = *(_DWORD *)a3;
  v8 = *((_DWORD *)a3 + 1);
  v9 = *((_DWORD *)a3 + 2);
  v37[1] = v8;
  v37[2] = v9;
  *a5 = 0.0;
  *a6 = 3.4028e38;
  v23 = *this;
  ozcollide::Vec3f::operator-(v29, *(this + 1), *this);
  v10 = *(this + 2);
  qmemcpy(v39, v29, sizeof(v39));
  ozcollide::Vec3f::operator-(v29, v10, v23);
  v40[0] = v29[0];
  v40[1] = v29[1];
  v40[2] = v29[2];
  ozcollide::Vec3f::operator|(v29, v39, v40);
  v34 = v29[0];
  v35 = v29[1];
  v36 = v29[2];
  v11 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v34, (const ozcollide::Vec3f *)v23);
  LODWORD(v12) = &v32;
  HIDWORD(v12) = &v33;
  v30 = v11;
  v31 = v11;
  sub_1D5A9E((ozcollide::Vec3f *)&v34, (float *)a2, v12);
  v13 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v34, (const ozcollide::Vec3f *)v37);
  if ( !sub_1D58B4(*(float *)&a4, v13, v30, v31, v32, v33, a5, a6) )
  {
    v14 = 0;
    while ( 1 )
    {
      if ( v14 != 0 )
      {
        v34 = 0.0;
        if ( v14 != 1 )
        {
          v35 = 0.0;
          v36 = 1.0;
          goto LABEL_9;
        }
        v35 = 1.0;
      }
      else
      {
        v34 = 1.0;
        v35 = 0.0;
      }
      v36 = 0.0;
LABEL_9:
      sub_1D5A3A((ozcollide::Vec3f *)&v34, (const ozcollide::Vec3f **)this, &v30, &v31);
      v15 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v34, (const ozcollide::Vec3f *)a2);
      if ( v14 != 0 )
      {
        if ( v14 == 1 )
          v16 = *((float *)a2 + 4);
        else
          v16 = *((float *)a2 + 5);
      }
      else
      {
        v16 = *((float *)a2 + 3);
      }
      v24 = v15 - v16;
      v32 = v15 - v16;
      if ( v14 != 0 )
      {
        if ( v14 == 1 )
          v17 = *((float *)a2 + 4);
        else
          v17 = *((float *)a2 + 5);
      }
      else
      {
        v17 = *((float *)a2 + 3);
      }
      v18 = v15 + v17;
      v33 = v15 + v17;
      v19 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v34, (const ozcollide::Vec3f *)v37);
      if ( sub_1D58B4(*(float *)&a4, v19, v30, v31, v24, v18, a5, a6) )
        return 0;
      if ( ++v14 == 3 )
      {
        ozcollide::Vec3f::operator-(v29, v40, v39);
        v40[3] = v29[0];
        v40[4] = v29[1];
        v25 = v39;
        v40[5] = v29[2];
        while ( 1 )
        {
          for ( i = 0; i != 3; ++i )
          {
            if ( i == 0 )
            {
              v38[0] = 1.0;
              v38[1] = 0.0;
LABEL_27:
              v38[2] = 0.0;
              goto LABEL_29;
            }
            v38[0] = 0.0;
            if ( i == 1 )
            {
              v38[1] = 1.0;
              goto LABEL_27;
            }
            v38[1] = 0.0;
            v38[2] = 1.0;
LABEL_29:
            ozcollide::Vec3f::operator|(v29, v25, v38);
            v34 = v29[0];
            v35 = v29[1];
            v36 = v29[2];
            sub_1D5A3A((ozcollide::Vec3f *)&v34, (const ozcollide::Vec3f **)this, &v30, &v31);
            LODWORD(v20) = &v32;
            HIDWORD(v20) = &v33;
            sub_1D5A9E((ozcollide::Vec3f *)&v34, (float *)a2, v20);
            v21 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v34, (const ozcollide::Vec3f *)v37);
            if ( sub_1D58B4(*(float *)&a4, v21, v30, v31, v32, v33, a5, a6) )
              return 0;
          }
          v25 += 3;
          if ( v25 == (float *)&v41 )
            return 1;
        }
      }
    }
  }
  return 0;
}


//======================================================================
// ozcollide::testIntersectionTriBox(ozcollide::Vec3f const**,ozcollide::Vec3f const&,ozcollide::Box const&,ozcollide::Vec3f const&,float &,ozcollide::Vec3f&)
// address: 0x001D6ADC   size: 0x646 (1606 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionTriBox(
        const ozcollide::Vec3f **this,
        const ozcollide::Vec3f **a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Box *a4,
        const ozcollide::Vec3f *a5,
        ozcollide::Vec3f *a6,
        ozcollide::Vec3f *a7)
{
  float v8; // r2
  float v9; // r3
  float v11; // r5
  float v12; // r0
  float v13; // r6
  float v14; // r0
  float v15; // r6
  float v16; // r0
  float v17; // r6
  float v18; // r0
  float v19; // r6
  float v20; // r0
  float v21; // r6
  float v22; // r0
  float v23; // r6
  float v24; // r0
  float v25; // r5
  float v26; // r0
  ozcollide *v27; // r0
  const ozcollide::Vec3f *v28; // r1
  const ozcollide::Vec3f *v29; // r2
  int j; // r4
  int v31; // r6
  int v32; // r3
  int v33; // r2
  int v34; // r1
  float v35; // r6
  float *v36; // r5
  const ozcollide::Vec3f *v37; // r6
  float v38; // r0
  float v39; // r6
  float v40; // r5
  float v41; // r4
  _BOOL4 v42; // r0
  int v43; // r4
  unsigned int v44; // r0
  unsigned int v45; // r4
  float v46; // r6
  float v47; // r5
  float v48; // r4
  float v49; // r4
  unsigned int v50; // r2
  unsigned int v51; // r3
  float *v52; // [sp+0h] [bp-12Ch]
  float *v53; // [sp+4h] [bp-128h]
  ozcollide *v54; // [sp+44h] [bp-E8h]
  int m; // [sp+48h] [bp-E4h]
  float v57; // [sp+4Ch] [bp-E0h]
  float v58; // [sp+4Ch] [bp-E0h]
  float v59; // [sp+50h] [bp-DCh]
  int i; // [sp+54h] [bp-D8h]
  int v61; // [sp+58h] [bp-D4h]
  _BOOL4 v62; // [sp+5Ch] [bp-D0h]
  int k; // [sp+5Ch] [bp-D0h]
  float v66; // [sp+70h] [bp-BCh]
  float v67; // [sp+74h] [bp-B8h]
  float v68; // [sp+78h] [bp-B4h]
  float v69; // [sp+7Ch] [bp-B0h]
  float v70; // [sp+80h] [bp-ACh]
  float v71[5]; // [sp+90h] [bp-9Ch] BYREF
  float v72; // [sp+A4h] [bp-88h] BYREF
  float v73; // [sp+A8h] [bp-84h] BYREF
  float v74; // [sp+ACh] [bp-80h]
  float v75; // [sp+B0h] [bp-7Ch]
  float v76[3]; // [sp+B4h] [bp-78h] BYREF
  float v77[3]; // [sp+C0h] [bp-6Ch] BYREF
  float v78; // [sp+CCh] [bp-60h] BYREF
  float v79; // [sp+D0h] [bp-5Ch]
  float v80; // [sp+D4h] [bp-58h]
  float v81[3]; // [sp+D8h] [bp-54h] BYREF
  float v82; // [sp+E4h] [bp-48h] BYREF
  float v83; // [sp+E8h] [bp-44h]
  float v84; // [sp+ECh] [bp-40h]
  _BYTE v85[16]; // [sp+F0h] [bp-3Ch] BYREF
  float v86; // [sp+100h] [bp-2Ch] BYREF
  int v87; // [sp+104h] [bp-28h]
  int v88; // [sp+108h] [bp-24h]
  unsigned int v89; // [sp+110h] [bp-1Ch] BYREF
  float v90; // [sp+114h] [bp-18h]
  float v91; // [sp+118h] [bp-14h]
  float v92[4]; // [sp+11Ch] [bp-10h] BYREF

  ozcollide::Plane::Plane((ozcollide::Plane *)v85);
  ozcollide::Plane::fromPointAndNormal((ozcollide::Plane *)v85, *this, (const ozcollide::Vec3f *)a2);
  v8 = *((float *)a4 + 1);
  v9 = *((float *)a4 + 2);
  v73 = *(float *)a4;
  v74 = v8;
  v75 = v9;
  ozcollide::Vec3f::normalize((ozcollide::Vec3f *)&v73);
  if ( ozcollide::Vec3f::dot((ozcollide::Vec3f *)a2, (const ozcollide::Vec3f *)&v73) > 0.0 )
    return 0;
  v61 = -1;
  v59 = 3.4028e38;
  for ( i = 0; i != 8; ++i )
  {
    switch ( i )
    {
      case 1:
        v13 = *((float *)a3 + 1) - *((float *)a3 + 4);
        v14 = *((float *)a3 + 2) - *((float *)a3 + 5);
        v82 = *(float *)a3 + *((float *)a3 + 3);
        v83 = v13;
        v84 = v14;
        v86 = 0.57735;
        v87 = -1089221318;
        goto LABEL_9;
      case 2:
        v15 = *((float *)a3 + 1) + *((float *)a3 + 4);
        v16 = *((float *)a3 + 2) - *((float *)a3 + 5);
        v82 = *(float *)a3 - *((float *)a3 + 3);
        v83 = v15;
        v84 = v16;
        v86 = -0.57735;
        v87 = 1058262330;
        goto LABEL_9;
      case 3:
        v17 = *((float *)a3 + 1) + *((float *)a3 + 4);
        v18 = *((float *)a3 + 2) - *((float *)a3 + 5);
        v82 = *(float *)a3 + *((float *)a3 + 3);
        v83 = v17;
        v84 = v18;
        v86 = 0.57735;
        v87 = 1058262330;
LABEL_9:
        v88 = -1089221318;
        break;
      case 4:
        v19 = *((float *)a3 + 1) - *((float *)a3 + 4);
        v20 = *((float *)a3 + 2) + *((float *)a3 + 5);
        v82 = *(float *)a3 - *((float *)a3 + 3);
        v83 = v19;
        v84 = v20;
        v86 = -0.57735;
        goto LABEL_12;
      case 5:
        v21 = *((float *)a3 + 1) - *((float *)a3 + 4);
        v22 = *((float *)a3 + 2) + *((float *)a3 + 5);
        v82 = *(float *)a3 + *((float *)a3 + 3);
        v83 = v21;
        v84 = v22;
        v86 = 0.57735;
LABEL_12:
        v87 = -1089221318;
        goto LABEL_16;
      case 6:
        v23 = *((float *)a3 + 1) + *((float *)a3 + 4);
        v24 = *((float *)a3 + 2) + *((float *)a3 + 5);
        v82 = *(float *)a3 - *((float *)a3 + 3);
        v83 = v23;
        v84 = v24;
        v86 = -0.57735;
        goto LABEL_15;
      case 7:
        v25 = *((float *)a3 + 2) + *((float *)a3 + 5);
        v26 = *(float *)a3 + *((float *)a3 + 3);
        v83 = *((float *)a3 + 1) + *((float *)a3 + 4);
        v82 = v26;
        v84 = v25;
        v86 = 0.57735;
LABEL_15:
        v87 = 1058262330;
LABEL_16:
        v88 = 1058262330;
        break;
      default:
        v11 = *((float *)a3 + 1) - *((float *)a3 + 4);
        v12 = *((float *)a3 + 2) - *((float *)a3 + 5);
        v82 = *(float *)a3 - *((float *)a3 + 3);
        v83 = v11;
        v84 = v12;
        v86 = -0.57735;
        v87 = -1089221318;
        v88 = -1089221318;
        break;
    }
    if ( ozcollide::Vec3f::dot((ozcollide::Vec3f *)&v86, (const ozcollide::Vec3f *)&v73) >= -0.70711 )
    {
      *(float *)&v89 = v82 + v73;
      v90 = v83 + v74;
      v91 = v84 + v75;
      if ( ozcollide::Plane::intersectWithLine(
             (ozcollide::Plane *)v85,
             (const ozcollide::Vec3f *)&v82,
             (const ozcollide::Vec3f *)&v89,
             v81) != 0
        && v81[0] < v59 )
      {
        v62 = v81[0] < 0.0;
        if ( v81[0] >= 0.0 )
        {
          *(float *)&v89 = v82 + (float)(v81[0] * v73);
          v90 = (float)(v81[0] * v74) + v83;
          v27 = *this;
          v28 = *(this + 1);
          v29 = *(this + 2);
          v91 = (float)(v81[0] * v75) + v84;
          if ( ozcollide::isPointInsideTriangle(
                 v27,
                 v28,
                 v29,
                 (const ozcollide::Vec3f *)&v89,
                 (const ozcollide::Vec3f *)v52) )
          {
            v59 = v81[0];
            *(_DWORD *)a6 = *a2;
            *((_DWORD *)a6 + 1) = a2[1];
            *((_DWORD *)a6 + 2) = a2[2];
            v61 = v62;
          }
        }
      }
    }
  }
  for ( j = 0; j != 12; j += 4 )
  {
    v54 = *(const ozcollide::Vec3f **)((char *)this + j);
    v89 = LODWORD(v73) + 0x80000000;
    LODWORD(v91) = LODWORD(v75) + 0x80000000;
    LODWORD(v90) = LODWORD(v74) + 0x80000000;
    v31 = ozcollide::intersectRayBox(v54, (const ozcollide::Vec3f *)&v89, a3, (const ozcollide::Box *)&v82, &v86, v53);
    if ( v31 != -1 && v82 >= 0.0 && v82 < v59 )
    {
      switch ( v31 )
      {
        case 0:
          v32 = 0;
          v33 = 0;
          v34 = -1082130432;
          break;
        case 1:
          v32 = 0;
          v33 = 0;
          v34 = 1065353216;
          break;
        case 2:
          v32 = 0;
          v33 = -1082130432;
          goto LABEL_36;
        case 3:
          v32 = 0;
          v33 = 1065353216;
          goto LABEL_36;
        case 4:
          v32 = -1082130432;
          goto LABEL_34;
        case 5:
          v32 = 1065353216;
LABEL_34:
          v33 = 0;
          v34 = 0;
          break;
        default:
          v32 = 0;
          v33 = 0;
LABEL_36:
          v34 = 0;
          break;
      }
      v59 = v82;
      *(_DWORD *)a6 = v34 + 0x80000000;
      *((_DWORD *)a6 + 1) = v33 + 0x80000000;
      *((_DWORD *)a6 + 2) = v32 + 0x80000000;
      v61 = 1;
    }
  }
  for ( k = 0; k != 12; ++k )
  {
    ozcollide::Box::getEdge((ozcollide::Box *)&v89, (float *)a3, k);
    ozcollide::Plane::Plane((ozcollide::Plane *)&v86);
    v57 = v90 + *((float *)a4 + 1);
    v35 = v91 + *((float *)a4 + 2);
    v82 = *(float *)&v89 + *(float *)a4;
    v83 = v57;
    v84 = v35;
    ozcollide::Plane::fromPoints(
      (ozcollide::Plane *)&v86,
      (const ozcollide::Vec3f *)v92,
      (const ozcollide::Vec3f *)&v89,
      (const ozcollide::Vec3f *)&v82);
    ozcollide::Vec3f::operator-(v76, v92, (float *)&v89);
    for ( m = 0; m != 3; ++m )
    {
      v36 = (float *)*(this + m);
      if ( m == 2 )
        v37 = *this;
      else
        v37 = *(this + m + 1);
      v58 = ozcollide::Plane::dist((ozcollide::Plane *)&v86, *(this + m));
      if ( (float)(v58 * ozcollide::Plane::dist((ozcollide::Plane *)&v86, v37)) <= 0.0
        && ozcollide::Plane::intersectWithLine((ozcollide::Plane *)&v86, (const ozcollide::Vec3f *)v36, v37, &v72) != 0 )
      {
        ozcollide::Vec3f::operator-(v77, (float *)v37, v36);
        v66 = (float)(v72 * v77[0]) + *v36;
        v67 = (float)(v72 * v77[1]) + v36[1];
        v38 = (float)(v72 * v77[2]) + v36[2];
        v68 = v38;
        v78 = v66;
        v80 = v38;
        v79 = v67;
        LODWORD(v39) = (unsigned int)(2 * LODWORD(v86)) >> 1;
        LODWORD(v40) = (unsigned int)(2 * v87) >> 1;
        LODWORD(v41) = (unsigned int)(2 * v88) >> 1;
        if ( v39 > v40 && v39 > v41 )
        {
          v43 = 2;
          v42 = true;
        }
        else
        {
          v42 = v40 > v41;
          v43 = 1;
          if ( v42 )
          {
            v43 = 2;
            v42 = false;
          }
        }
        v44 = 4 * v42;
        v45 = 4 * v43;
        v46 = v76[v44 / 4];
        v69 = *(float *)((char *)&v78 + v45);
        v70 = *(float *)((char *)&v89 + v45);
        v47 = v76[v45 / 4];
        v48 = (float)(v47 * COERCE_FLOAT(*(_DWORD *)((char *)&v73 + v44) + 0x80000000))
            + (float)(v46 * *(float *)((char *)&v73 + v45));
        if ( v48 != 0.0 )
        {
          v49 = (float)((float)(v46 * (float)(v69 - v70))
                      - (float)(v47 * (float)(*(float *)((char *)&v78 + v44) - *(float *)((char *)&v89 + v44))))
              / v48;
          if ( v49 >= 0.0 )
          {
            v78 = v66 - (float)(v49 * v73);
            v79 = v67 - (float)(v49 * v74);
            v80 = v68 - (float)(v49 * v75);
            ozcollide::Vec3f::operator-(v81, (float *)&v89, &v78);
            ozcollide::Vec3f::operator-(&v82, v92, &v78);
            if ( ozcollide::Vec3f::dot((ozcollide::Vec3f *)v81, (const ozcollide::Vec3f *)&v82) <= 0.0 )
            {
              if ( v49 >= v59 )
              {
                v49 = v59;
              }
              else
              {
                ozcollide::Vec3f::operator|(v71, v76, v77);
                *(float *)a6 = v71[0];
                *((float *)a6 + 1) = v71[1];
                *((float *)a6 + 2) = v71[2];
                ozcollide::Vec3f::normalize(a6);
                if ( ozcollide::Vec3f::dot(a6, (const ozcollide::Vec3f *)&v73) > 0.0 )
                {
                  v50 = *((_DWORD *)a6 + 1) + 0x80000000;
                  v51 = *((_DWORD *)a6 + 2) + 0x80000000;
                  *(_DWORD *)a6 += 0x80000000;
                  *((_DWORD *)a6 + 1) = v50;
                  *((_DWORD *)a6 + 2) = v51;
                }
                v61 = 2;
              }
              v59 = v49;
            }
          }
        }
      }
    }
  }
  if ( v61 == -1 )
    return 0;
  *(float *)a5 = v59;
  return 1;
}


//======================================================================
// ozcollide::sqrDistancePointToBox(ozcollide::Vec3f const&,ozcollide::Box const&,ozcollide::Vec3f*)
// address: 0x001D7124   size: 0x118 (280 bytes)
//======================================================================
float __fastcall ozcollide::sqrDistancePointToBox(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Box *a3,
        ozcollide::Vec3f *a4)
{
  float v4; // r6
  float v5; // r5
  float v6; // r4
  float v8; // [sp+8h] [bp-1Ch]
  float v9; // [sp+Ch] [bp-18h]
  float v10; // [sp+10h] [bp-14h]
  float v11; // [sp+14h] [bp-10h]
  float v12; // [sp+18h] [bp-Ch]
  float v13; // [sp+1Ch] [bp-8h]

  v8 = *(float *)a2;
  v9 = *((float *)a2 + 3);
  v4 = *(float *)a2 - v9;
  v10 = *((float *)a2 + 1);
  v11 = *((float *)a2 + 4);
  v5 = v10 - v11;
  v12 = *((float *)a2 + 2);
  v13 = *((float *)a2 + 5);
  v6 = v12 - v13;
  if ( *(float *)this >= v4 )
  {
    v4 = v8 + v9;
    if ( *(float *)this <= (float)(v8 + v9) )
      v4 = *(float *)this;
  }
  if ( *((float *)this + 1) >= v5 )
  {
    v5 = v10 + v11;
    if ( *((float *)this + 1) <= (float)(v10 + v11) )
      v5 = *((float *)this + 1);
  }
  if ( *((float *)this + 2) >= (float)(v12 - v13) )
  {
    v6 = v12 + v13;
    if ( *((float *)this + 2) <= (float)(v12 + v13) )
      v6 = *((float *)this + 2);
  }
  if ( a3 != nullptr )
  {
    *(float *)a3 = v4;
    *((float *)a3 + 1) = v5;
    *((float *)a3 + 2) = v6;
  }
  return (float)((float)((float)(*(float *)this - v4) * (float)(*(float *)this - v4))
               + (float)((float)(*((float *)this + 1) - v5) * (float)(*((float *)this + 1) - v5)))
       + (float)((float)(*((float *)this + 2) - v6) * (float)(*((float *)this + 2) - v6));
}


//======================================================================
// ozcollide::distancePointToBox(ozcollide::Vec3f const&,ozcollide::Box const&,ozcollide::Vec3f*)
// address: 0x001D723C   size: 0x14 (20 bytes)
//======================================================================
float __fastcall ozcollide::distancePointToBox(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Box *a3,
        ozcollide::Vec3f *a4)
{
  double v4; // r0

  v4 = ozcollide::sqrDistancePointToBox(this, a2, a3, a4);
  return j_sqrt(v4);
}


//======================================================================
// ozcollide::testIntersectionRayTri(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f*)
// address: 0x001D7284   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionRayTri(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Vec3f *a4,
        const ozcollide::Vec3f *a5,
        const ozcollide::Vec3f *a6,
        ozcollide::Vec3f *a7)
{
  float v8; // r6
  float v10; // r6
  float v11; // r4
  const ozcollide::Vec3f *v12; // [sp+0h] [bp-3Ch]
  float v16; // [sp+10h] [bp-2Ch]
  float v17; // [sp+14h] [bp-28h]
  float v18; // [sp+1Ch] [bp-20h] BYREF
  float v19; // [sp+20h] [bp-1Ch]
  float v20; // [sp+24h] [bp-18h]
  _BYTE v21[20]; // [sp+28h] [bp-14h] BYREF

  ozcollide::Plane::Plane((ozcollide::Plane *)v21);
  ozcollide::Plane::fromPointsNN((ozcollide::Plane *)v21, a3, a4, a5);
  v8 = ozcollide::Plane::dot((ozcollide::Plane *)v21, a2);
  if ( v8 == 0.0 )
    return 0;
  v10 = COERCE_FLOAT(
          ((int (__fastcall *)(ozcollide::Plane *, const ozcollide::Vec3f *))ozcollide::Plane::dist)(
            (ozcollide::Plane *)v21,
            this)
        + 0x80000000)
      / v8;
  if ( v10 < 0.0 )
    return 0;
  v16 = (float)(v10 * *((float *)a2 + 1)) + *((float *)this + 1);
  v17 = (float)(v10 * *((float *)a2 + 2)) + *((float *)this + 2);
  v18 = (float)(v10 * *(float *)a2) + *(float *)this;
  v19 = v16;
  v20 = v17;
  if ( !ozcollide::isPointInsideTriangle(a3, a4, a5, (const ozcollide::Vec3f *)&v18, v12) )
    return 0;
  if ( a6 != nullptr )
  {
    *(float *)a6 = v18;
    v11 = v20;
    *((float *)a6 + 1) = v19;
    *((float *)a6 + 2) = v11;
  }
  return 1;
}


//======================================================================
// ozcollide::testIntersectionSegmentTri(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f*)
// address: 0x001D7344   size: 0xF4 (244 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionSegmentTri(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Vec3f *a4,
        const ozcollide::Vec3f *a5,
        const ozcollide::Vec3f *a6,
        ozcollide::Vec3f *a7)
{
  float v9; // r6
  float v11; // r5
  float v12; // r4
  ozcollide::Vec3f *v13; // [sp+0h] [bp-4Ch]
  float v14; // [sp+4h] [bp-48h]
  float v15; // [sp+8h] [bp-44h]
  float v18; // [sp+14h] [bp-38h]
  float v19; // [sp+18h] [bp-34h]
  float v20; // [sp+1Ch] [bp-30h]
  float v21[2]; // [sp+20h] [bp-2Ch] BYREF
  float v22; // [sp+28h] [bp-24h]
  float v23; // [sp+2Ch] [bp-20h] BYREF
  float v24; // [sp+30h] [bp-1Ch]
  float v25; // [sp+34h] [bp-18h]
  _BYTE v26[20]; // [sp+38h] [bp-14h] BYREF

  ozcollide::Plane::Plane((ozcollide::Plane *)v26);
  ozcollide::Plane::fromPointsNN((ozcollide::Plane *)v26, a3, a4, a5);
  v13 = *(ozcollide::Vec3f **)this;
  v18 = *(float *)a2 - *(float *)this;
  v14 = *((float *)this + 1);
  v19 = *((float *)a2 + 1) - v14;
  v15 = *((float *)this + 2);
  v22 = *((float *)a2 + 2) - v15;
  v21[0] = v18;
  v20 = v22;
  v21[1] = v19;
  v9 = ozcollide::Plane::dot((ozcollide::Plane *)v26, (const ozcollide::Vec3f *)v21);
  if ( v9 == 0.0 )
    return 0;
  v11 = COERCE_FLOAT(
          ((int (__fastcall *)(ozcollide::Plane *, const ozcollide::Vec3f *))ozcollide::Plane::dist)(
            (ozcollide::Plane *)v26,
            this)
        + 0x80000000)
      / v9;
  if ( v11 < 0.0 )
    return 0;
  if ( v11 > 1.0 )
    return 0;
  v23 = (float)(v18 * v11) + *(float *)&v13;
  v24 = (float)(v19 * v11) + v14;
  v25 = (float)(v20 * v11) + v15;
  if ( !ozcollide::isPointInsideTriangle(a3, a4, a5, (const ozcollide::Vec3f *)&v23, v13) )
    return 0;
  if ( a6 != nullptr )
  {
    *(float *)a6 = v23;
    v12 = v25;
    *((float *)a6 + 1) = v24;
    *((float *)a6 + 2) = v12;
  }
  return 1;
}


//======================================================================
// ozcollide::intersectionLinePlane(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Plane const&,ozcollide::Vec3f*)
// address: 0x001D7438   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall ozcollide::intersectionLinePlane(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Plane *a4,
        ozcollide::Vec3f *a5)
{
  float v8; // r5
  int v9; // r3
  float v10; // r0
  float v12; // [sp+0h] [bp-2Ch]
  float v13; // [sp+4h] [bp-28h]
  float v14; // [sp+8h] [bp-24h]
  float v15; // [sp+Ch] [bp-20h]
  float v16; // [sp+10h] [bp-1Ch]
  float v17; // [sp+14h] [bp-18h]
  float v18[2]; // [sp+1Ch] [bp-10h] BYREF
  float v19; // [sp+24h] [bp-8h]

  v13 = *(float *)this;
  v16 = *(float *)a2 - *(float *)this;
  v14 = *((float *)this + 1);
  v17 = *((float *)a2 + 1) - v14;
  v15 = *((float *)this + 2);
  v19 = *((float *)a2 + 2) - v15;
  v18[0] = v16;
  v8 = v19;
  v18[1] = v17;
  v12 = ozcollide::Plane::dot(a3, (const ozcollide::Vec3f *)v18);
  v9 = 0;
  if ( v12 != 0.0 )
  {
    v10 = COERCE_FLOAT(
            ((int (__fastcall *)(ozcollide::Plane *, const ozcollide::Vec3f *))ozcollide::Plane::dist)(a3, this)
          + 0x80000000)
        / v12;
    *(float *)a4 = (float)(v16 * v10) + v13;
    *((float *)a4 + 1) = (float)(v17 * v10) + v14;
    v9 = 1;
    *((float *)a4 + 2) = (float)(v8 * v10) + v15;
  }
  return v9;
}


//======================================================================
// ozcollide::testIntersectionSphereLine(ozcollide::Sphere const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,int *,float *,float *)
// address: 0x001D7F90   size: 0x286 (646 bytes)
//======================================================================
int __fastcall ozcollide::testIntersectionSphereLine(float *a1, float *a2, float *a3, _DWORD *a4, float *a5, float *a6)
{
  float v6; // r4
  float v7; // r6
  float v8; // r7
  float v9; // r5
  float v10; // r6
  float v11; // r0
  float *v12; // r2
  float v13; // r0
  float v15; // [sp+4h] [bp-28h]
  float v16; // [sp+4h] [bp-28h]
  float v17; // [sp+Ch] [bp-20h]
  float v18; // [sp+10h] [bp-1Ch]
  float v19; // [sp+14h] [bp-18h]
  float v20; // [sp+18h] [bp-14h]
  float v21; // [sp+1Ch] [bp-10h]

  v17 = *a2;
  v6 = *a3 - *a2;
  v18 = a2[1];
  v15 = a3[1] - v18;
  v19 = a2[2];
  v7 = a3[2] - v19;
  v8 = (float)((float)(v6 * v6) + (float)(v15 * v15)) + (float)(v7 * v7);
  v9 = *a1;
  v20 = a1[1];
  v21 = a1[2];
  v16 = (float)((float)((float)(v6 * (float)(*a2 - *a1)) + (float)(v15 * (float)(v18 - v20)))
              + (float)(v7 * (float)(v19 - v21)))
      + (float)((float)((float)(v6 * (float)(*a2 - *a1)) + (float)(v15 * (float)(v18 - v20)))
              + (float)(v7 * (float)(v19 - v21)));
  v10 = (float)(v16 * v16)
      - (float)((float)(v8 * 4.0)
              * (float)((float)((float)((float)((float)((float)((float)((float)(v9 * v9) + (float)(v20 * v20))
                                                              + (float)(v21 * v21))
                                                      + (float)(v17 * v17))
                                              + (float)(v18 * v18))
                                      + (float)(v19 * v19))
                              - (float)((float)((float)((float)(v9 * v17) + (float)(v20 * v18)) + (float)(v21 * v19))
                                      + (float)((float)((float)(v9 * v17) + (float)(v20 * v18)) + (float)(v21 * v19))))
                      - (float)(a1[3] * a1[3])));
  if ( v10 >= 0.0 )
  {
    if ( v10 == 0.0 )
    {
      if ( a4 != nullptr )
        *a4 = 1;
      if ( a5 == nullptr )
        return 1;
      v11 = COERCE_FLOAT(LODWORD(v16) + 0x80000000) / (float)(v8 + v8);
      v12 = a5;
    }
    else
    {
      if ( a4 != nullptr )
        *a4 = 2;
      if ( a5 != nullptr )
      {
        v13 = (COERCE_FLOAT(LODWORD(v16) + 0x80000000) + j_sqrt(v10)) / (float)(v8 + v8);
        *a5 = v13;
      }
      if ( a6 == nullptr )
        return 1;
      v11 = (COERCE_FLOAT(LODWORD(v16) + 0x80000000) - j_sqrt(v10)) / (float)(v8 + v8);
      v12 = a6;
    }
    *v12 = v11;
    return 1;
  }
  return 0;
}


//======================================================================
// ozcollide::intersectRaySphere(ozcollide::Vec3f const&,ozcollide::Vec3f const&,ozcollide::Vec3f const&,float)
// address: 0x001D8218   size: 0xF4 (244 bytes)
//======================================================================
float __fastcall ozcollide::intersectRaySphere(
        ozcollide *this,
        const ozcollide::Vec3f *a2,
        const ozcollide::Vec3f *a3,
        const ozcollide::Vec3f *a4,
        float a5)
{
  float v5; // r5
  float v6; // r4
  float v7; // r6
  float v8; // r0
  float v9; // r4

  v5 = *(float *)a3 - *(float *)this;
  v6 = *((float *)a3 + 1) - *((float *)this + 1);
  v7 = *((float *)a3 + 2) - *((float *)this + 2);
  v8 = j_sqrt((float)((float)((float)(v5 * v5) + (float)(v6 * v6)) + (float)(v7 * v7)));
  v9 = (float)((float)(v5 * *(float *)a2) + (float)(v6 * *((float *)a2 + 1))) + (float)(v7 * *((float *)a2 + 2));
  if ( (float)((float)(*(float *)&a4 * *(float *)&a4) - (float)((float)(v8 * v8) - (float)(v9 * v9))) < 0.0 )
    return -1.0;
  else
    return v9 - j_sqrt((float)((float)(*(float *)&a4 * *(float *)&a4) - (float)((float)(v8 * v8) - (float)(v9 * v9))));
}

