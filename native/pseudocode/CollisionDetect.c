// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: CollisionDetect

//======================================================================
// CollisionDetect::CollisionDetect(void)
// address: 0x00300EB4   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15CollisionDetectC2Ev'
void __fastcall CollisionDetect::CollisionDetect(CollisionDetect *this)
{
  *(_BYTE *)this = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
}


//======================================================================
// CollisionDetect::~CollisionDetect()
// address: 0x00300EC0   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN15CollisionDetectD2Ev'
void __fastcall CollisionDetect::~CollisionDetect(CollisionDetect *this)
{
  void *v1; // r0

  v1 = *((void **)this + 13);
  if ( v1 != nullptr )
    operator delete(v1);
}


//======================================================================
// CollisionDetect::moveBox(CollideAABB const&,WCoord const&,Ogre::Vector3 &)
// address: 0x00300ED4   size: 0x312 (786 bytes)
//======================================================================
int __fastcall CollisionDetect::moveBox(
        CollisionDetect *this,
        const CollideAABB *a2,
        const WCoord *a3,
        Ogre::Vector3 *a4)
{
  int v5; // r3
  _DWORD *v6; // r4
  int v7; // r12
  int v8; // r0
  int v9; // r3
  int v10; // r7
  int v11; // r7
  int v12; // r2
  int v13; // r2
  int v14; // r2
  int v15; // r2
  float v16; // r0
  int v17; // r3
  int v18; // r2
  float v19; // r7
  float v20; // r0
  int v21; // r3
  int v22; // r2
  float v23; // r0
  float v24; // r6
  float v25; // r4
  float v26; // r6
  float v27; // r1
  int v28; // r6
  int v29; // r6
  int v30; // r6
  int v32; // [sp+8h] [bp-54h]
  float v33; // [sp+8h] [bp-54h]
  float v34; // [sp+Ch] [bp-50h]
  int v35; // [sp+10h] [bp-4Ch]
  float v36; // [sp+10h] [bp-4Ch]
  int v37; // [sp+14h] [bp-48h]
  float v38; // [sp+14h] [bp-48h]
  int v39; // [sp+18h] [bp-44h]
  float v40; // [sp+18h] [bp-44h]
  float v41; // [sp+1Ch] [bp-40h]
  unsigned int v42; // [sp+20h] [bp-3Ch]
  int v43; // [sp+24h] [bp-38h]
  int v44; // [sp+28h] [bp-34h]
  int v45; // [sp+2Ch] [bp-30h]
  int v46; // [sp+30h] [bp-2Ch]
  int v47; // [sp+34h] [bp-28h]
  int v48; // [sp+38h] [bp-24h]
  int v51; // [sp+44h] [bp-18h]
  int v52; // [sp+48h] [bp-14h]
  int v53; // [sp+4Ch] [bp-10h]
  int v54; // [sp+50h] [bp-Ch]

  v42 = 0;
  v41 = 3.4028e38;
  while ( 1 )
  {
    v5 = *((_DWORD *)this + 13);
    if ( v42 >= -1431655765 * ((*((_DWORD *)this + 14) - v5) >> 3) )
      break;
    v6 = (_DWORD *)(v5 + 24 * v42);
    v7 = *((_DWORD *)a2 + 3);
    v8 = *(_DWORD *)a3;
    v9 = v6[3];
    if ( *(int *)a3 <= 0 )
    {
      v43 = *v6 + v9 - *(_DWORD *)a2;
      v10 = *v6 - (*(_DWORD *)a2 + v7);
    }
    else
    {
      v43 = *v6 - (*(_DWORD *)a2 + *((_DWORD *)a2 + 3));
      v10 = *v6 + v9 - *(_DWORD *)a2;
    }
    v39 = v10;
    v11 = *((_DWORD *)a3 + 1);
    v35 = *((_DWORD *)a2 + 4);
    v37 = v6[4];
    if ( v11 <= 0 )
    {
      v13 = *((_DWORD *)a2 + 1);
      v44 = v6[1] + v37 - v13;
      v53 = v6[1] - (v13 + v35);
    }
    else
    {
      v12 = v6[1];
      v44 = v12 - (*((_DWORD *)a2 + 1) + v35);
      v53 = v12 + v37 - *((_DWORD *)a2 + 1);
    }
    v32 = *((_DWORD *)a3 + 2);
    v51 = *((_DWORD *)a2 + 5);
    v52 = v6[5];
    if ( v32 <= 0 )
    {
      v15 = *((_DWORD *)a2 + 2);
      v45 = v6[2] + v52 - v15;
      v54 = v6[2] - (v15 + v51);
    }
    else
    {
      v14 = v6[2];
      v45 = v14 - (*((_DWORD *)a2 + 2) + v51);
      v54 = v14 + v52 - *((_DWORD *)a2 + 2);
    }
    if ( v8 != 0 )
    {
      v16 = (float)v8;
      v34 = (float)v43 / v16;
      v40 = (float)v39 / v16;
    }
    else
    {
      if ( *(_DWORD *)a2 >= *v6 + v9 || *(_DWORD *)a2 + v7 <= *v6 )
        goto LABEL_50;
      v40 = 3.4028e38;
      v34 = -3.4028e38;
    }
    if ( v11 != 0 )
    {
      v20 = (float)v11;
      v19 = (float)v44 / (float)v11;
      v36 = (float)v53 / v20;
    }
    else
    {
      v17 = v6[1];
      v18 = *((_DWORD *)a2 + 1);
      if ( v18 >= v17 + v37 || v18 + v35 <= v17 )
        goto LABEL_50;
      v19 = -3.4028e38;
      v36 = 3.4028e38;
    }
    if ( v32 != 0 )
    {
      v23 = (float)v32;
      v33 = (float)v45 / (float)v32;
      v38 = (float)v54 / v23;
    }
    else
    {
      v21 = v6[2];
      v22 = *((_DWORD *)a2 + 2);
      if ( v22 >= v21 + v52 || v22 + v51 <= v21 )
        goto LABEL_50;
      v38 = 3.4028e38;
      v33 = -3.4028e38;
    }
    v24 = v19;
    if ( v19 <= v33 )
      v24 = v33;
    v25 = v34;
    if ( v34 <= v24 )
      v25 = v24;
    v26 = v36;
    if ( v36 >= v38 )
      v26 = v38;
    v27 = v40;
    if ( v40 >= v26 )
      v27 = v26;
    if ( v25 > v27 || v34 < 0.0 && v19 < 0.0 && v33 < 0.0 || v34 > 1.0 || v19 > 1.0 || v33 > 1.0 )
    {
LABEL_50:
      v25 = 1.0;
      goto LABEL_57;
    }
    v48 = Ogre::Vector3::ZERO;
    v47 = dword_4728E8;
    v46 = dword_4728EC;
    if ( v25 == v34 )
    {
      if ( (float)v43 >= 0.0 )
        v28 = -1082130432;
      else
        v28 = 1065353216;
      v48 = v28;
    }
    else if ( v25 == v19 )
    {
      if ( (float)v44 >= 0.0 )
        v29 = -1082130432;
      else
        v29 = 1065353216;
      v47 = v29;
    }
    else
    {
      if ( (float)v45 >= 0.0 )
        v30 = -1082130432;
      else
        v30 = 1065353216;
      v46 = v30;
    }
LABEL_57:
    if ( v41 > v25 )
    {
      *(_DWORD *)a4 = v48;
      *((_DWORD *)a4 + 1) = v47;
      *((_DWORD *)a4 + 2) = v46;
      v41 = v25;
    }
    ++v42;
  }
  if ( v41 <= 1.0 )
    return LODWORD(v41);
  else
    return 1065353216;
}


//======================================================================
// CollisionDetect::intersectBox(CollideAABB const&)
// address: 0x003011FC   size: 0x76 (118 bytes)
//======================================================================
int __fastcall CollisionDetect::intersectBox(CollisionDetect *this, const CollideAABB *a2)
{
  _DWORD *v2; // r3
  int v3; // r2
  int v4; // r5
  int v5; // r12
  int v7; // [sp+0h] [bp-14h]
  int v8; // [sp+4h] [bp-10h]
  int v9; // [sp+Ch] [bp-8h]

  v2 = *((_DWORD **)this + 13);
  v3 = 0;
  v9 = -1431655765 * ((*((_DWORD *)this + 14) - (int)v2) >> 3);
  while ( v3 != v9 )
  {
    if ( *(_DWORD *)a2 < *v2 + v2[3] )
    {
      v4 = *((_DWORD *)a2 + 1);
      v7 = v2[1];
      if ( v4 < v2[4] + v7 )
      {
        v8 = *((_DWORD *)a2 + 2);
        v5 = v2[2];
        if ( v8 < v2[5] + v5
          && *(_DWORD *)a2 + *((_DWORD *)a2 + 3) > *v2
          && v4 + *((_DWORD *)a2 + 4) > v7
          && v8 + *((_DWORD *)a2 + 5) > v5 )
        {
          return 1;
        }
      }
    }
    ++v3;
    v2 += 6;
  }
  return 0;
}


//======================================================================
// CollisionDetect::intersectRay(Ogre::Vector3 const&,Ogre::Vector3 const&,float *)
// address: 0x00301278   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall CollisionDetect::intersectRay(
        CollisionDetect *this,
        const Ogre::Vector3 *a2,
        const Ogre::Vector3 *a3,
        float *a4)
{
  int v5; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r1
  int v9; // r2
  unsigned int v10; // r7
  int v11; // r3
  int *v12; // r4
  float v13; // r0
  int v14; // r3
  int v15; // r1
  int v16; // r0
  float v18; // [sp+8h] [bp-4Ch]
  float v19; // [sp+8h] [bp-4Ch]
  float v20; // [sp+Ch] [bp-48h]
  int v21; // [sp+10h] [bp-44h]
  float v23; // [sp+18h] [bp-3Ch] BYREF
  float v24[3]; // [sp+1Ch] [bp-38h] BYREF
  float v25[3]; // [sp+28h] [bp-2Ch] BYREF
  _DWORD v26[8]; // [sp+34h] [bp-20h] BYREF

  v26[0] = *(_DWORD *)a2;
  v5 = *((_DWORD *)a2 + 1);
  v6 = *((_DWORD *)a2 + 2);
  v26[1] = v5;
  v26[2] = v6;
  v7 = *((_DWORD *)a3 + 1);
  v8 = *(_DWORD *)a3;
  v9 = *((_DWORD *)a3 + 2);
  v26[3] = v8;
  v26[5] = v9;
  v26[4] = v7;
  v10 = 0;
  v26[6] = 2139095039;
  v21 = -1;
  v20 = 3.4028e38;
  while ( 1 )
  {
    v11 = *((_DWORD *)this + 13);
    if ( v10 >= -1431655765 * ((*((_DWORD *)this + 14) - v11) >> 3) )
      break;
    v12 = (int *)(v11 + 24 * v10);
    v18 = (float)v12[1];
    v13 = (float)*v12;
    v24[2] = (float)v12[2];
    v24[1] = v18;
    v14 = v12[1];
    v15 = v12[4];
    v24[0] = v13;
    v19 = (float)(v12[2] + v12[5]);
    v25[0] = (float)(*v12 + v12[3]);
    v25[2] = v19;
    v25[1] = (float)(v14 + v15);
    v16 = Ogre::Ray::intersectBox((Ogre::Ray *)v26, (const Ogre::Vector3 *)v24, (const Ogre::Vector3 *)v25, &v23);
    if ( v16 >= 0 && v23 < v20 )
    {
      v21 = v16;
      v20 = v23;
    }
    ++v10;
  }
  *a4 = v20;
  return v21;
}


//======================================================================
// CollisionDetect::addObstacle(WCoord const&,WCoord const&)
// address: 0x00301434   size: 0xDA (218 bytes)
//======================================================================
int __fastcall CollisionDetect::addObstacle(CollisionDetect *this, const WCoord *a2, const WCoord *a3)
{
  int result; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r3
  int v10; // r7
  int v11; // r0
  int v12; // r1
  _DWORD *v13; // r3
  _DWORD *v14; // r2
  int v15; // r1
  int v16; // r3
  _DWORD *v17; // r2
  int v18; // r1
  int v19; // r3
  int v20; // r2
  int v21; // r3
  int v22; // r1
  int v23; // r2
  int v24; // r3
  int v25; // r1
  int v26; // [sp+8h] [bp-1Ch] BYREF
  int v27; // [sp+Ch] [bp-18h]
  int v28; // [sp+10h] [bp-14h]
  int v29; // [sp+14h] [bp-10h]
  int v30; // [sp+18h] [bp-Ch]
  int v31; // [sp+1Ch] [bp-8h]

  if ( *(_BYTE *)this == 0
    || (result = *(_DWORD *)a2, *(_DWORD *)a2 < *((_DWORD *)this + 4))
    && *((_DWORD *)a2 + 1) < *((_DWORD *)this + 5)
    && (result = *((_DWORD *)this + 6), *((_DWORD *)a2 + 2) < result)
    && *(_DWORD *)a3 > *((_DWORD *)this + 1)
    && *((_DWORD *)a3 + 1) > *((_DWORD *)this + 2)
    && (result = *((_DWORD *)a3 + 2)) > *((_DWORD *)this + 3) )
  {
    v7 = *((_DWORD *)a2 + 1);
    v8 = *((_DWORD *)a3 + 1);
    v28 = *((_DWORD *)a2 + 2);
    v9 = *(_DWORD *)a2;
    v27 = v7;
    v10 = *((_DWORD *)a3 + 2);
    v11 = v8 - v7;
    v12 = *(_DWORD *)a3;
    v26 = v9;
    v29 = v12 - v9;
    v31 = v10 - v28;
    v13 = *((_DWORD **)this + 15);
    v14 = *((_DWORD **)this + 14);
    v30 = v11;
    if ( v14 == v13 )
    {
      std::vector<CollideAABB>::_M_emplace_back_aux<CollideAABB const&>((char **)this + 13, &v26);
    }
    else
    {
      if ( v14 != nullptr )
      {
        v15 = v27;
        v16 = v28;
        *v14 = v26;
        v14[1] = v15;
        v14[2] = v16;
        v17 = v14 + 3;
        v18 = v30;
        v19 = v31;
        *v17 = v29;
        v17[1] = v18;
        v17[2] = v19;
      }
      *((_DWORD *)this + 14) += 24;
    }
    v20 = *((_DWORD *)a2 + 1);
    if ( v20 > *((_DWORD *)this + 8) )
      v20 = *((_DWORD *)this + 8);
    v21 = *((_DWORD *)a2 + 2);
    if ( v21 > *((_DWORD *)this + 9) )
      v21 = *((_DWORD *)this + 9);
    v22 = *(_DWORD *)a2;
    if ( *(_DWORD *)a2 > *((_DWORD *)this + 7) )
      v22 = *((_DWORD *)this + 7);
    *((_DWORD *)this + 9) = v21;
    *((_DWORD *)this + 7) = v22;
    *((_DWORD *)this + 8) = v20;
    v23 = *((_DWORD *)a3 + 1);
    if ( v23 < *((_DWORD *)this + 11) )
      v23 = *((_DWORD *)this + 11);
    v24 = *((_DWORD *)a3 + 2);
    if ( v24 < *((_DWORD *)this + 12) )
      v24 = *((_DWORD *)this + 12);
    result = *((_DWORD *)this + 10);
    v25 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 < result )
      v25 = *((_DWORD *)this + 10);
    *((_DWORD *)this + 10) = v25;
    *((_DWORD *)this + 11) = v23;
    *((_DWORD *)this + 12) = v24;
  }
  return result;
}


//======================================================================
// CollisionDetect::addObstacle(WCoord const&,WCoord const&,WCoord const&,int)
// address: 0x0030150E   size: 0x9E (158 bytes)
//======================================================================
int __fastcall CollisionDetect::addObstacle(
        CollisionDetect *this,
        const WCoord *a2,
        const WCoord *a3,
        const WCoord *a4,
        int a5)
{
  int v5; // r4
  int v6; // r12
  int v7; // r5
  int v8; // r6
  int v9; // r1
  int v10; // r2
  int v11; // r5
  int v12; // r7
  int v13; // r6
  int v15; // [sp+0h] [bp-2Ch]
  int v16; // [sp+4h] [bp-28h]
  int v17; // [sp+8h] [bp-24h]
  int v18; // [sp+Ch] [bp-20h]
  _DWORD v19[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v20[4]; // [sp+1Ch] [bp-10h] BYREF

  v5 = *(_DWORD *)a4;
  v6 = *((_DWORD *)a4 + 2);
  v15 = *((_DWORD *)a4 + 1);
  v17 = *((_DWORD *)a2 + 1);
  v7 = *((_DWORD *)a3 + 2);
  v8 = *((_DWORD *)a2 + 2);
  v18 = *((_DWORD *)a3 + 1);
  v9 = *(_DWORD *)a2;
  v10 = *(_DWORD *)a3;
  if ( a5 != 0 )
  {
    if ( a5 == 1 )
    {
      v12 = v8;
      v16 = 100 - v10;
      v13 = 100 - v9;
    }
    else if ( a5 == 2 )
    {
      v16 = 100 - v7;
      v12 = v9;
      v13 = 100 - v8;
      v7 = v10;
    }
    else
    {
      v16 = v8;
      v12 = 100 - v10;
      v13 = v7;
      v7 = 100 - v9;
    }
    v20[0] = v5 + v13;
    v19[0] = v5 + v16;
    v19[1] = v15 + v17;
    v19[2] = v12 + v6;
    v20[1] = v15 + v18;
    v11 = v7 + v6;
  }
  else
  {
    v19[0] = v5 + v9;
    v19[1] = v15 + v17;
    v19[2] = v8 + v6;
    v11 = v7 + v6;
    v20[0] = v5 + v10;
    v20[1] = v15 + v18;
  }
  v20[2] = v11;
  return CollisionDetect::addObstacle(this, (const WCoord *)v19, (const WCoord *)v20);
}


//======================================================================
// CollisionDetect::reset(void)
// address: 0x003016D4   size: 0x22 (34 bytes)
//======================================================================
void __fastcall CollisionDetect::reset(CollisionDetect *this)
{
  *(_BYTE *)this = 0;
  std::vector<CollideAABB>::resize((int)this + 52, 0);
  *((_DWORD *)this + 7) = 0x7FFFFFFF;
  *((_DWORD *)this + 8) = 0x7FFFFFFF;
  *((_DWORD *)this + 9) = 0x7FFFFFFF;
  *((_DWORD *)this + 10) = 0x80000000;
  *((_DWORD *)this + 11) = 0x80000000;
  *((_DWORD *)this + 12) = 0x80000000;
}


//======================================================================
// CollisionDetect::reset(WCoord const&,WCoord const&)
// address: 0x003016FC   size: 0x3C (60 bytes)
//======================================================================
void __fastcall CollisionDetect::reset(CollisionDetect *this, const WCoord *a2, const WCoord *a3)
{
  *(_BYTE *)this = 1;
  *((_DWORD *)this + 1) = *(_DWORD *)a2;
  *((_DWORD *)this + 2) = *((_DWORD *)a2 + 1);
  *((_DWORD *)this + 3) = *((_DWORD *)a2 + 2);
  *((_DWORD *)this + 4) = *(_DWORD *)a3;
  *((_DWORD *)this + 5) = *((_DWORD *)a3 + 1);
  *((_DWORD *)this + 6) = *((_DWORD *)a3 + 2);
  std::vector<CollideAABB>::resize((int)this + 52, 0);
  *((_DWORD *)this + 7) = 0x7FFFFFFF;
  *((_DWORD *)this + 8) = 0x7FFFFFFF;
  *((_DWORD *)this + 9) = 0x7FFFFFFF;
  *((_DWORD *)this + 10) = 0x80000000;
  *((_DWORD *)this + 11) = 0x80000000;
  *((_DWORD *)this + 12) = 0x80000000;
}

