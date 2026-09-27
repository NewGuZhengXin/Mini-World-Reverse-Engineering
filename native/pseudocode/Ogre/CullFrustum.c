// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::CullFrustum

//======================================================================
// Ogre::CullFrustum::CullFrustum(void)
// address: 0x00182C8E   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11CullFrustumC2Ev'
int __fastcall Ogre::CullFrustum::CullFrustum(int this)
{
  *(_DWORD *)(this + 512) = 0;
  return this;
}


//======================================================================
// Ogre::CullFrustum::~CullFrustum()
// address: 0x00182C98   size: 0x2 (2 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11CullFrustumD2Ev'
void __fastcall Ogre::CullFrustum::~CullFrustum(Ogre::CullFrustum *this)
{
  ;
}


//======================================================================
// Ogre::CullFrustum::createFromMatrix(Ogre::Matrix4 const&)
// address: 0x00182C9C   size: 0x462 (1122 bytes)
//======================================================================
float __fastcall Ogre::CullFrustum::createFromMatrix(Ogre::CullFrustum *this, const Ogre::Matrix4 *a2)
{
  float v3; // r0
  float v4; // r1
  float v5; // r0
  float v6; // r1
  float v7; // r0
  float v8; // r1
  float v9; // r1
  float v10; // r0
  float v11; // r1
  float v12; // r0
  float v13; // r1
  float v14; // r1
  float v15; // r0
  float v16; // r1
  float v17; // r0
  float v18; // r1
  float v19; // r1
  float v20; // r0
  float v21; // r1
  float v22; // r0
  float v23; // r1
  float v24; // r2
  float v25; // r3
  float v26; // r1
  float v27; // r1
  float v28; // r0
  float v29; // r1
  float v30; // r0
  float v31; // r1
  float v32; // r1
  float v33; // r0
  float v34; // r1
  float v35; // r0
  float v36; // r1
  float *v37; // r7
  float v38; // r5
  float v39; // r7
  float v40; // r6
  float result; // r0
  float v42; // [sp+0h] [bp-D4h]
  float v44; // [sp+8h] [bp-CCh]
  float v45; // [sp+Ch] [bp-C8h]
  float v46; // [sp+10h] [bp-C4h]
  float v47; // [sp+14h] [bp-C0h]
  float v48; // [sp+18h] [bp-BCh]
  float v49[4]; // [sp+20h] [bp-B4h] BYREF
  _BYTE v50[64]; // [sp+30h] [bp-A4h] BYREF
  float v51[3]; // [sp+70h] [bp-64h] BYREF
  _BYTE v52[12]; // [sp+7Ch] [bp-58h] BYREF
  _BYTE v53[12]; // [sp+88h] [bp-4Ch] BYREF
  _BYTE v54[12]; // [sp+94h] [bp-40h] BYREF
  _BYTE v55[12]; // [sp+A0h] [bp-34h] BYREF
  _BYTE v56[12]; // [sp+ACh] [bp-28h] BYREF
  _BYTE v57[12]; // [sp+B8h] [bp-1Ch] BYREF
  _BYTE v58[12]; // [sp+C4h] [bp-10h] BYREF
  char v59; // [sp+D0h] [bp-4h] BYREF

  v3 = *((float *)a2 + 3) + *(float *)a2;
  v4 = *((float *)a2 + 4);
  v49[0] = v3;
  v5 = *((float *)a2 + 7) + v4;
  v6 = *((float *)a2 + 8);
  v49[1] = v5;
  v7 = *((float *)a2 + 11) + v6;
  v8 = *((float *)a2 + 12);
  v49[2] = v7;
  v49[3] = *((float *)a2 + 15) + v8;
  Ogre::Plane::setFromPlaneParam(this, v49);
  v9 = *((float *)a2 + 4);
  v49[0] = *((float *)a2 + 3) - *(float *)a2;
  v10 = *((float *)a2 + 7) - v9;
  v11 = *((float *)a2 + 8);
  v49[1] = v10;
  v12 = *((float *)a2 + 11) - v11;
  v13 = *((float *)a2 + 12);
  v49[2] = v12;
  v49[3] = *((float *)a2 + 15) - v13;
  Ogre::Plane::setFromPlaneParam((Ogre::CullFrustum *)((char *)this + 16), v49);
  v14 = *((float *)a2 + 5);
  v49[0] = *((float *)a2 + 3) - *((float *)a2 + 1);
  v15 = *((float *)a2 + 7) - v14;
  v16 = *((float *)a2 + 9);
  v49[1] = v15;
  v17 = *((float *)a2 + 11) - v16;
  v18 = *((float *)a2 + 13);
  v49[2] = v17;
  v49[3] = *((float *)a2 + 15) - v18;
  Ogre::Plane::setFromPlaneParam((Ogre::CullFrustum *)((char *)this + 32), v49);
  v19 = *((float *)a2 + 5);
  v49[0] = *((float *)a2 + 3) + *((float *)a2 + 1);
  v20 = *((float *)a2 + 7) + v19;
  v21 = *((float *)a2 + 9);
  v49[1] = v20;
  v22 = *((float *)a2 + 11) + v21;
  v23 = *((float *)a2 + 13);
  v49[2] = v22;
  v49[3] = *((float *)a2 + 15) + v23;
  Ogre::Plane::setFromPlaneParam((Ogre::CullFrustum *)((char *)this + 48), v49);
  if ( Ogre::Matrix4::HandMode != 0 )
  {
    v27 = *((float *)a2 + 6);
    v49[0] = *((float *)a2 + 3) + *((float *)a2 + 2);
    v28 = *((float *)a2 + 7) + v27;
    v29 = *((float *)a2 + 10);
    v49[1] = v28;
    v30 = *((float *)a2 + 11) + v29;
    v31 = *((float *)a2 + 14);
    v49[2] = v30;
    v49[3] = *((float *)a2 + 15) + v31;
  }
  else
  {
    v24 = *((float *)a2 + 6);
    v25 = *((float *)a2 + 10);
    v49[0] = *((float *)a2 + 2);
    v26 = *((float *)a2 + 14);
    v49[1] = v24;
    v49[2] = v25;
    v49[3] = v26;
  }
  Ogre::Plane::setFromPlaneParam((Ogre::CullFrustum *)((char *)this + 64), v49);
  v32 = *((float *)a2 + 6);
  v49[0] = *((float *)a2 + 3) - *((float *)a2 + 2);
  v33 = *((float *)a2 + 7) - v32;
  v34 = *((float *)a2 + 10);
  v49[1] = v33;
  v35 = *((float *)a2 + 11) - v34;
  v36 = *((float *)a2 + 14);
  v49[2] = v35;
  v49[3] = *((float *)a2 + 15) - v36;
  Ogre::Plane::setFromPlaneParam((Ogre::CullFrustum *)((char *)this + 80), v49);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v50);
  Ogre::Matrix4::inverse(a2, (Ogre::Matrix4 *)v50);
  if ( (dword_4BB5FC & 1) == 0 && _cxa_guard_acquire(&dword_4BB5FC) != 0 )
  {
    dword_4BB600 = -1082130432;
    dword_4BB604 = -1082130432;
    dword_4BB608 = 0;
    _cxa_guard_release(&dword_4BB5FC);
  }
  if ( (dword_4BB60C & 1) == 0 && _cxa_guard_acquire(&dword_4BB60C) != 0 )
  {
    dword_4BB610 = -1082130432;
    dword_4BB614 = 1065353216;
    dword_4BB618 = 0;
    _cxa_guard_release(&dword_4BB60C);
  }
  if ( (dword_4BB61C & 1) == 0 && _cxa_guard_acquire(&dword_4BB61C) != 0 )
  {
    dword_4BB620 = 1065353216;
    dword_4BB624 = -1082130432;
    dword_4BB628 = 0;
    _cxa_guard_release(&dword_4BB61C);
  }
  if ( (dword_4BB62C & 1) == 0 && _cxa_guard_acquire(&dword_4BB62C) != 0 )
  {
    dword_4BB630 = 1065353216;
    dword_4BB634 = 1065353216;
    dword_4BB638 = 0;
    _cxa_guard_release(&dword_4BB62C);
  }
  if ( (dword_4BB63C & 1) == 0 && _cxa_guard_acquire(&dword_4BB63C) != 0 )
  {
    dword_4BB640 = -1082130432;
    dword_4BB644 = -1082130432;
    dword_4BB648 = 1065353216;
    _cxa_guard_release(&dword_4BB63C);
  }
  if ( (dword_4BB64C & 1) == 0 && _cxa_guard_acquire(&dword_4BB64C) != 0 )
  {
    dword_4BB650 = -1082130432;
    dword_4BB654 = 1065353216;
    dword_4BB658 = 1065353216;
    _cxa_guard_release(&dword_4BB64C);
  }
  if ( (dword_4BB65C & 1) == 0 && _cxa_guard_acquire(&dword_4BB65C) != 0 )
  {
    dword_4BB660 = 1065353216;
    dword_4BB664 = -1082130432;
    dword_4BB668 = 1065353216;
    _cxa_guard_release(&dword_4BB65C);
  }
  if ( (dword_4BB66C & 1) == 0 && _cxa_guard_acquire(&dword_4BB66C) != 0 )
  {
    dword_4BB670 = 1065353216;
    dword_4BB674 = 1065353216;
    dword_4BB678 = 1065353216;
    _cxa_guard_release(&dword_4BB66C);
  }
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v50, (Ogre::Vector3 *)v51, (const Ogre::Vector3 *)&dword_4BB600);
  v37 = (float *)v52;
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v50, (Ogre::Vector3 *)v52, (const Ogre::Vector3 *)&dword_4BB610);
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v50, (Ogre::Vector3 *)v53, (const Ogre::Vector3 *)&dword_4BB620);
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v50, (Ogre::Vector3 *)v54, (const Ogre::Vector3 *)&dword_4BB630);
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v50, (Ogre::Vector3 *)v55, (const Ogre::Vector3 *)&dword_4BB640);
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v50, (Ogre::Vector3 *)v56, (const Ogre::Vector3 *)&dword_4BB650);
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v50, (Ogre::Vector3 *)v57, (const Ogre::Vector3 *)&dword_4BB660);
  Ogre::Matrix4::apply4x4((Ogre::Matrix4 *)v50, (Ogre::Vector3 *)v58, (const Ogre::Vector3 *)&dword_4BB670);
  v38 = v51[2];
  v44 = v51[0];
  v42 = v51[1];
  v45 = v51[2];
  v46 = v51[1];
  v47 = v51[0];
  do
  {
    if ( v47 >= *v37 )
      v47 = *v37;
    v48 = v37[1];
    if ( v46 >= v48 )
      v46 = v37[1];
    if ( v45 >= v37[2] )
      v45 = v37[2];
    if ( v44 <= *v37 )
      v44 = *v37;
    if ( v42 <= v48 )
      v42 = v37[1];
    if ( v38 <= v37[2] )
      v38 = v37[2];
    v37 += 3;
  }
  while ( v37 != (float *)&v59 );
  *((float *)this + 129) = (float)(v47 + v44) * 0.5;
  *((float *)this + 130) = (float)(v46 + v42) * 0.5;
  *((float *)this + 131) = (float)(v45 + v38) * 0.5;
  v39 = (float)(v44 - v47) * 0.5;
  v40 = (float)(v42 - v46) * 0.5;
  *((float *)this + 132) = v39;
  *((float *)this + 133) = v40;
  *((float *)this + 134) = (float)(v38 - v45) * 0.5;
  result = j_sqrt((float)((float)((float)(v39 * v39) + (float)(v40 * v40))
                        + (float)((float)((float)(v38 - v45) * 0.5) * (float)((float)(v38 - v45) * 0.5))));
  *((float *)this + 135) = result;
  *((_DWORD *)this + 128) = 6;
  return result;
}


//======================================================================
// Ogre::CullFrustum::addCullPlane(Ogre::Plane const&)
// address: 0x00183128   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall Ogre::CullFrustum::addCullPlane(int a1, _DWORD *a2)
{
  int v2; // r3
  _DWORD *result; // r0

  v2 = *(_DWORD *)(a1 + 512);
  *(_DWORD *)(a1 + 512) = v2 + 1;
  result = (_DWORD *)(a1 + 16 * v2);
  *result = *a2;
  result[1] = a2[1];
  result[2] = a2[2];
  result[3] = a2[3];
  return result;
}


//======================================================================
// Ogre::CullFrustum::cull(Ogre::BoxSphereBound const&)
// address: 0x0018314A   size: 0x30 (48 bytes)
//======================================================================
int __fastcall Ogre::CullFrustum::cull(
        Ogre::CullFrustum *this,
        const Ogre::BoxSphereBound *a2,
        const Ogre::Vector3 *a3)
{
  int v3; // r4
  int v6; // r5
  int result; // r0

  v3 = 0;
  v6 = 0;
  while ( v3 < *((_DWORD *)this + 128) )
  {
    result = Ogre::Plane::boxSphereBoundSide((Ogre::CullFrustum *)((char *)this + 16 * v3), a2, a3);
    if ( result == 1 )
      return result;
    if ( result != 0 )
      v6 = 2;
    ++v3;
  }
  return v6;
}


//======================================================================
// Ogre::CullFrustum::cull(Ogre::Vector3 const&)
// address: 0x0018317A   size: 0x74 (116 bytes)
//======================================================================
bool __fastcall Ogre::CullFrustum::cull(Ogre::CullFrustum *this, const Ogre::Vector3 *a2)
{
  float *v2; // r5
  int i; // r2
  float *v4; // r4
  float v5; // r0
  _BOOL4 result; // r0
  int v7; // [sp+4h] [bp-8h]

  v2 = (float *)this;
  v7 = *((_DWORD *)this + 128);
  for ( i = 0; i < v7; ++i )
  {
    v4 = v2;
    v5 = (float)(*v2 * *(float *)a2) + (float)(v2[1] * *((float *)a2 + 1));
    v2 += 4;
    result = (float)((float)(v5 + (float)(v4[2] * *((float *)a2 + 2))) + v4[3]) < 0.0;
    if ( result )
      return result;
  }
  return false;
}

