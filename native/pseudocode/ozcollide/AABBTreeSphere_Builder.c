// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::AABBTreeSphere_Builder

//======================================================================
// ozcollide::AABBTreeSphere_Builder::AABBTreeSphere_Builder(void)
// address: 0x001D74DC   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide22AABBTreeSphere_BuilderC1Ev'
_DWORD *__fastcall ozcollide::AABBTreeSphere_Builder::AABBTreeSphere_Builder(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// ozcollide::AABBTreeSphere_Builder::~AABBTreeSphere_Builder()
// address: 0x001D74E6   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide22AABBTreeSphere_BuilderD1Ev'
void __fastcall ozcollide::AABBTreeSphere_Builder::~AABBTreeSphere_Builder(ozcollide::AABBTreeSphere_Builder *this)
{
  void *v2; // r0

  v2 = *(void **)this;
  if ( v2 != nullptr )
    j_free(v2);
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
}


//======================================================================
// ozcollide::AABBTreeSphere_Builder::classifySphere(ozcollide::Sphere const&,int,float)
// address: 0x001D7500   size: 0x46 (70 bytes)
//======================================================================
bool __fastcall ozcollide::AABBTreeSphere_Builder::classifySphere(int a1, float *a2, int a3, float a4)
{
  _BOOL4 result; // r0

  if ( *a2 > a4 || (result = false, a3 != 0) )
  {
    if ( a2[1] <= a4 && a3 == 1 )
      return false;
    else
      return a2[2] > a4 || a3 != 2;
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreeSphere_Builder::workOnItem(ozcollide::AABBTreeSphere_Builder::WorkingItem &,int)
// address: 0x001D7644   size: 0x5A8 (1448 bytes)
//======================================================================
void __fastcall ozcollide::AABBTreeSphere_Builder::workOnItem(int a1, int a2, int a3)
{
  float v3; // r7
  int v4; // r5
  float *v5; // r5
  float v6; // r4
  float v7; // r6
  float v8; // r5
  float v9; // r6
  float v10; // r0
  float v11; // r4
  float v12; // r6
  float v13; // r5
  float v14; // r0
  int v15; // r7
  _BOOL4 v16; // r5
  float v17; // r4
  float v18; // r6
  float v19; // r6
  _DWORD *v20; // r4
  ozcollide::Box *v21; // r0
  _DWORD *v22; // r4
  ozcollide::Box *v23; // r0
  _DWORD *v24; // r5
  ozcollide::Box *v25; // r2
  int v26; // r0
  int v27; // r1
  int v28; // r7
  _DWORD *v29; // r3
  int v30; // r5
  int v31; // r7
  int v32; // r4
  int v33; // r5
  int j; // r6
  _DWORD *v35; // r4
  ozcollide::Box *v36; // r2
  int v37; // r0
  int v38; // r5
  int v39; // r7
  _DWORD *v40; // r3
  int v41; // r4
  int v42; // r5
  int v43; // r4
  int v44; // r5
  int k; // r6
  ozcollide::Box *v46; // r0
  float *v47; // r3
  float v48; // r1
  float v49; // r7
  float *v50; // r3
  float v51; // r1
  float v52; // r7
  float v53; // [sp+14h] [bp-68h]
  float v54; // [sp+14h] [bp-68h]
  int v55; // [sp+14h] [bp-68h]
  float v56; // [sp+18h] [bp-64h]
  int v57; // [sp+1Ch] [bp-60h]
  float v58; // [sp+1Ch] [bp-60h]
  float v60; // [sp+24h] [bp-58h]
  float v61; // [sp+24h] [bp-58h]
  float v62; // [sp+28h] [bp-54h]
  float *v63; // [sp+28h] [bp-54h]
  float v64; // [sp+2Ch] [bp-50h]
  int i; // [sp+2Ch] [bp-50h]
  float v66; // [sp+30h] [bp-4Ch]
  float v67; // [sp+30h] [bp-4Ch]
  float v68; // [sp+34h] [bp-48h]
  float v69; // [sp+34h] [bp-48h]
  float v70; // [sp+38h] [bp-44h]
  float v71; // [sp+38h] [bp-44h]
  int v73; // [sp+40h] [bp-3Ch]
  float v74; // [sp+44h] [bp-38h]
  ozcollide::Box *v75; // [sp+48h] [bp-34h] BYREF
  ozcollide::Box *v76; // [sp+4Ch] [bp-30h] BYREF
  float v77; // [sp+50h] [bp-2Ch] BYREF
  float v78; // [sp+54h] [bp-28h]
  float v79; // [sp+58h] [bp-24h]
  float v80; // [sp+5Ch] [bp-20h] BYREF
  float v81; // [sp+60h] [bp-1Ch]
  float v82; // [sp+64h] [bp-18h]
  float v83[5]; // [sp+68h] [bp-14h] BYREF

  v73 = *(_DWORD *)(a2 + 36);
  if ( v73 <= a3 )
  {
    v4 = a2;
    *(_DWORD *)(a2 + 24) = -1;
    goto LABEL_84;
  }
  v3 = 3.4028e38;
  v53 = -3.4028e38;
  v62 = -3.4028e38;
  v56 = -3.4028e38;
  v66 = 3.4028e38;
  v64 = 3.4028e38;
  v57 = 0;
  while ( v57 < v73 )
  {
    v5 = (float *)(*(_DWORD *)(a2 + 32) + 16 * v57);
    v6 = v5[3];
    v70 = *v5;
    v7 = v5[1];
    v60 = *v5 - v6;
    v68 = v7 - v6;
    v74 = v5[2];
    v8 = v74 - v6;
    v71 = v70 + v6;
    v9 = v7 + v6;
    v10 = v74 + v6;
    v11 = v74 + v6;
    if ( v60 >= v64 )
      v60 = v64;
    if ( v68 >= v66 )
      v68 = v66;
    if ( v8 >= v3 )
      v8 = v3;
    if ( v71 <= v56 )
      v71 = v56;
    if ( v9 <= v62 )
      v9 = v62;
    if ( v10 <= v53 )
      v11 = v53;
    v53 = v11;
    ++v57;
    v56 = v71;
    v3 = v8;
    v62 = v9;
    v64 = v60;
    v66 = v68;
  }
  v58 = (float)(v64 + v56) * 0.5;
  v61 = (float)(v66 + v62) * 0.5;
  v69 = (float)(v3 + v53) * 0.5;
  *(float *)(a2 + 8) = v69;
  *(float *)a2 = v58;
  *(float *)(a2 + 4) = v61;
  v12 = (float)(v56 - v64) * 0.5;
  v13 = (float)(v62 - v66) * 0.5;
  v14 = (float)(v53 - v3) * 0.5;
  *(float *)(a2 + 20) = v14;
  *(float *)(a2 + 12) = v12;
  *(float *)(a2 + 16) = v13;
  if ( v12 > v13 && v12 > v14 )
  {
    v67 = (float)(v64 + v56) * 0.5;
    v15 = 0;
  }
  else if ( v13 > v14 )
  {
    v67 = (float)(v66 + v62) * 0.5;
    v15 = 1;
  }
  else
  {
    v67 = (float)(v3 + v53) * 0.5;
    v15 = 2;
  }
  v77 = v58 - v12;
  v78 = v61 - v13;
  v79 = v69 - v14;
  v80 = v58 + v12;
  v81 = v61 + v13;
  v82 = v69 + v14;
  v75 = nullptr;
  v76 = nullptr;
  for ( i = 0; i < v73; ++i )
  {
    v63 = (float *)(*(_DWORD *)(a2 + 32) + 16 * i);
    v16 = ozcollide::AABBTreeSphere_Builder::classifySphere(a1, v63, v15, v67);
    v17 = v63[3];
    if ( v15 != 0 )
    {
      if ( v15 == 1 )
        v18 = v63[1];
      else
        v18 = v63[2];
    }
    else
    {
      v18 = *v63;
    }
    v54 = v18 - v17;
    v19 = v18 + v17;
    if ( !v16 )
    {
      if ( v75 == nullptr )
      {
        v20 = (_DWORD *)operator new(0x2Cu);
        j_memset(v20, 0, 0x2Cu);
        v20[8] = 0;
        v20[9] = 0;
        v20[10] = 0;
        v75 = (ozcollide::Box *)v20;
        if ( v15 != 0 )
        {
          if ( v15 == 1 )
          {
            v83[1] = (float)(v78 + v81) * 0.5;
            v83[0] = v80;
            v83[2] = v82;
          }
          else
          {
            v83[2] = (float)(v79 + v82) * 0.5;
            v83[0] = v80;
            v83[1] = v81;
          }
        }
        else
        {
          v83[0] = (float)(v77 + v80) * 0.5;
          v83[1] = v81;
          v83[2] = v82;
        }
        ozcollide::Box::setFromPoints(
          (ozcollide::Box *)v20,
          (const ozcollide::Vec3f *)&v77,
          (const ozcollide::Vec3f *)v83);
      }
      if ( v15 == 0 )
      {
        if ( v19 > (float)(*(float *)v75 + *((float *)v75 + 3)) )
        {
          v83[0] = v19;
          v83[1] = v81;
          v83[2] = v82;
          goto LABEL_47;
        }
LABEL_48:
        v21 = v75;
        goto LABEL_67;
      }
      if ( v15 == 1 )
      {
        if ( v19 <= (float)(*((float *)v75 + 1) + *((float *)v75 + 4)) )
          goto LABEL_48;
        v83[0] = v80;
        v83[1] = v19;
        v83[2] = v82;
      }
      else
      {
        if ( v19 <= (float)(*((float *)v75 + 2) + *((float *)v75 + 5)) )
          goto LABEL_48;
        v83[0] = v80;
        v83[1] = v81;
        v83[2] = v19;
      }
LABEL_47:
      ozcollide::Box::setFromPoints(v75, (const ozcollide::Vec3f *)&v77, (const ozcollide::Vec3f *)v83);
      goto LABEL_48;
    }
    if ( v76 == nullptr )
    {
      v22 = (_DWORD *)operator new(0x2Cu);
      j_memset(v22, 0, 0x2Cu);
      v22[8] = 0;
      v22[9] = 0;
      v22[10] = 0;
      v76 = (ozcollide::Box *)v22;
      if ( v15 != 0 )
      {
        if ( v15 == 1 )
        {
          v83[1] = (float)(v78 + v81) * 0.5;
          v83[0] = v77;
          v83[2] = v79;
        }
        else
        {
          v83[2] = (float)(v79 + v82) * 0.5;
          v83[0] = v77;
          v83[1] = v78;
        }
        v23 = (ozcollide::Box *)v22;
      }
      else
      {
        v83[0] = (float)(v77 + v80) * 0.5;
        v83[1] = v78;
        v83[2] = v79;
        v23 = (ozcollide::Box *)v22;
      }
      ozcollide::Box::setFromPoints(v23, (const ozcollide::Vec3f *)v83, (const ozcollide::Vec3f *)&v80);
    }
    if ( v15 != 0 )
    {
      if ( v15 == 1 )
      {
        if ( v54 < (float)(*((float *)v76 + 1) - *((float *)v76 + 4)) )
        {
          v83[0] = v77;
          v83[1] = v54;
          v83[2] = v79;
          goto LABEL_65;
        }
      }
      else if ( v54 < (float)(*((float *)v76 + 2) - *((float *)v76 + 5)) )
      {
        v83[0] = v77;
        v83[1] = v78;
        v83[2] = v54;
        goto LABEL_65;
      }
    }
    else if ( v54 < (float)(*(float *)v76 - *((float *)v76 + 3)) )
    {
      v83[1] = v78;
      v83[0] = v54;
      v83[2] = v79;
LABEL_65:
      ozcollide::Box::setFromPoints(v76, (const ozcollide::Vec3f *)v83, (const ozcollide::Vec3f *)&v80);
    }
    v21 = v76;
LABEL_67:
    ozcollide::Vector<ozcollide::Sphere>::add((int *)v21 + 8, (int *)v63);
  }
  if ( v75 != nullptr )
  {
    if ( v76 == nullptr )
    {
      v24 = (_DWORD *)operator new(0x2Cu);
      j_memset(v24, 0, 0x2Cu);
      v25 = v75;
      v24[8] = 0;
      v24[9] = 0;
      v24[10] = 0;
      v76 = (ozcollide::Box *)v24;
      v26 = *(_DWORD *)v25;
      v27 = *((_DWORD *)v25 + 1);
      v28 = *((_DWORD *)v25 + 2);
      v25 = (ozcollide::Box *)((char *)v25 + 12);
      *v24 = v26;
      v24[1] = v27;
      v24[2] = v28;
      v29 = v24 + 3;
      v30 = *((_DWORD *)v25 + 1);
      v31 = *((_DWORD *)v25 + 2);
      *v29 = *(_DWORD *)v25;
      v29[1] = v30;
      v29[2] = v31;
      v32 = *((_DWORD *)v75 + 9);
      v33 = v32 - v32 / 2;
      v55 = v32 / 2;
      for ( j = 16 * v33; ; j += 16 )
      {
        v46 = v75;
        if ( v33 >= v32 )
          break;
        v47 = (float *)(*((_DWORD *)v75 + 8) + j);
        v48 = v47[1];
        v49 = v47[2];
        v83[0] = *v47;
        v83[1] = v48;
        v83[2] = v49;
        ++v33;
        v83[3] = v47[3];
        ozcollide::Vector<ozcollide::Sphere>::add((int *)v76 + 8, (int *)v83);
      }
      goto LABEL_77;
    }
  }
  else if ( v76 != nullptr )
  {
    v35 = (_DWORD *)operator new(0x2Cu);
    j_memset(v35, 0, 0x2Cu);
    v36 = v76;
    v35[8] = 0;
    v35[9] = 0;
    v35[10] = 0;
    v75 = (ozcollide::Box *)v35;
    v37 = *(_DWORD *)v36;
    v38 = *((_DWORD *)v36 + 1);
    v39 = *((_DWORD *)v36 + 2);
    v36 = (ozcollide::Box *)((char *)v36 + 12);
    *v35 = v37;
    v35[1] = v38;
    v35[2] = v39;
    v40 = v35 + 3;
    v41 = *((_DWORD *)v36 + 1);
    v42 = *((_DWORD *)v36 + 2);
    *v40 = *(_DWORD *)v36;
    v40[1] = v41;
    v40[2] = v42;
    v43 = *((_DWORD *)v76 + 9);
    v44 = v43 - v43 / 2;
    v55 = v43 / 2;
    for ( k = 16 * v44; ; k += 16 )
    {
      v46 = v76;
      if ( v44 >= v43 )
        break;
      v50 = (float *)(*((_DWORD *)v76 + 8) + k);
      v51 = v50[1];
      v52 = v50[2];
      v83[0] = *v50;
      v83[1] = v51;
      v83[2] = v52;
      ++v44;
      v83[3] = v50[3];
      ozcollide::Vector<ozcollide::Sphere>::add((int *)v75 + 8, (int *)v83);
    }
LABEL_77:
    ozcollide::Vector<ozcollide::Sphere>::grow((int)v46 + 32, -v55);
  }
  if ( v75 != nullptr )
  {
    *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 4);
    ozcollide::Vector<ozcollide::AABBTreeSphere_Builder::WorkingItem *>::add(a1, &v75);
  }
  else
  {
    *(_DWORD *)(a2 + 24) = -1;
  }
  if ( v76 != nullptr )
  {
    *(_DWORD *)(a2 + 28) = *(_DWORD *)(a1 + 4);
    ozcollide::Vector<ozcollide::AABBTreeSphere_Builder::WorkingItem *>::add(a1, &v76);
    return;
  }
  v4 = a2;
LABEL_84:
  *(_DWORD *)(v4 + 28) = -1;
}


//======================================================================
// ozcollide::AABBTreeSphere_Builder::build(int,ozcollide::Sphere const*,int,ozcollide::Monitor *)
// address: 0x001D7BEC   size: 0x2BC (700 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeSphere_Builder::build(int a1, int a2, int a3, int a4, int a5)
{
  ozcollide::AABBTreeSphere *v7; // r6
  void *v8; // r6
  int i; // r6
  _DWORD *v10; // r0
  unsigned int v11; // r6
  unsigned int v12; // r0
  unsigned int v13; // r6
  char *v14; // r3
  unsigned int v15; // r7
  int j; // r2
  int v17; // r1
  unsigned int v18; // r0
  _DWORD *v19; // r0
  unsigned int v20; // r0
  _DWORD *v21; // r0
  _DWORD *v22; // r0
  unsigned int v23; // r3
  _DWORD *v24; // r12
  int k; // r7
  int v26; // r3
  _DWORD *v27; // r6
  int v28; // r2
  int v29; // r1
  int v30; // r7
  int v31; // r1
  int v32; // r7
  unsigned int v33; // r7
  unsigned int v34; // r0
  signed int m; // r0
  _DWORD *v36; // r3
  _DWORD *v37; // r2
  int v38; // r1
  int v39; // r7
  _DWORD *v40; // r12
  int v41; // r1
  int v42; // r7
  int v43; // r1
  int v44; // r7
  int v45; // r3
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r2
  int v50; // r3
  int v51; // r3
  int v52; // r3
  int v53; // r2
  int v54; // r1
  int v55; // r2
  int v56; // r3
  _DWORD *v57; // r6
  void *v58; // r0
  _DWORD *v60; // [sp+8h] [bp-1Ch]
  signed int v61; // [sp+Ch] [bp-18h]
  char *v63; // [sp+10h] [bp-14h]
  int v65; // [sp+14h] [bp-10h]
  void *v66; // [sp+1Ch] [bp-8h] BYREF

  v7 = (ozcollide::AABBTreeSphere *)operator new(0xDCu);
  ozcollide::AABBTreeSphere::AABBTreeSphere(v7, a4);
  *(_DWORD *)(a1 + 12) = v7;
  v8 = (void *)operator new(0x2Cu);
  j_memset(v8, 0, 0x2Cu);
  v66 = v8;
  for ( i = 0; ; ++i )
  {
    v10 = v66;
    if ( i >= a2 )
      break;
    ozcollide::Vector<ozcollide::Sphere>::add((int *)v66 + 8, (int *)(a3 + 16 * i));
  }
  *((_DWORD *)v66 + 6) = -1;
  v10[7] = -1;
  ozcollide::Vector<ozcollide::AABBTreeSphere_Builder::WorkingItem *>::add(a1, &v66);
  v11 = 0;
  do
    ozcollide::AABBTreeSphere_Builder::workOnItem(a1, *(_DWORD *)(4 * v11++ + *(_DWORD *)a1), a4);
  while ( v11 != *(_DWORD *)(a1 + 4) );
  v12 = 4 * v11;
  if ( v11 > 0x1FC00000 )
    v12 = -1;
  v13 = 0;
  v63 = (char *)operator new[](v12);
  v14 = v63;
  v15 = 0;
  for ( j = 0; j < *(_DWORD *)(a1 + 4); ++j )
  {
    v17 = *(_DWORD *)(*(_DWORD *)a1 + v14 - v63);
    if ( *(_DWORD *)(v17 + 24) == -1 && *(_DWORD *)(v17 + 28) == -1 )
      *(_DWORD *)v14 = v13++;
    else
      *(_DWORD *)v14 = v15++;
    v14 += 4;
  }
  if ( v15 > 0x3F80000 )
    v18 = -1;
  else
    v18 = 32 * v15 + 8;
  v19 = (_DWORD *)operator new[](v18);
  *v19 = 32;
  v19[1] = v15;
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8) = v19 + 2;
  if ( v13 > 0x2E80000 )
    v20 = -1;
  else
    v20 = 44 * v13 + 8;
  v21 = (_DWORD *)operator new[](v20);
  *v21 = 44;
  v21[1] = v13;
  v22 = v21 + 2;
  v23 = v13 - 1;
  v24 = v22;
  while ( --v23 != -2 )
  {
    v22[8] = 0;
    v22[9] = 0;
    v22[10] = 0;
    v22 += 11;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 36) = v24;
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4) = v15;
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12) = v13;
  if ( a5 != 0 )
    (**(void (__fastcall ***)(int, const char *))a5)(a5, "Building the final clean tree");
  for ( k = 0; ; k = v65 + 1 )
  {
    v65 = k;
    if ( k >= *(_DWORD *)(a1 + 4) )
      break;
    if ( a5 != 0 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a5 + 4))(a5, k);
    v26 = *(_DWORD *)(a1 + 12);
    v27 = *(_DWORD **)(*(_DWORD *)a1 + 4 * k);
    v28 = *(_DWORD *)&v63[4 * k];
    if ( v27[6] == -1 && v27[7] == -1 )
    {
      v60 = (_DWORD *)(*(_DWORD *)(v26 + 36) + 44 * v28);
      v29 = v27[1];
      v30 = v27[2];
      *v60 = *v27;
      v60[1] = v29;
      v60[2] = v30;
      v31 = v27[4];
      v32 = v27[5];
      v60[3] = v27[3];
      v60[4] = v31;
      v60[5] = v32;
      v60[6] = 0;
      v60[7] = 0;
      v33 = v27[9];
      v60[8] = v33;
      v61 = v33;
      v34 = -1;
      if ( v33 <= 0x7F00000 )
        v34 = 16 * v33;
      v60[9] = operator new[](v34);
      for ( m = 0; m < v61; ++m )
      {
        v36 = (_DWORD *)(v60[9] + 16 * m);
        v37 = (_DWORD *)(v27[8] + 16 * m);
        v38 = v37[1];
        v39 = v37[2];
        *v36 = *v37;
        v36[1] = v38;
        v36[2] = v39;
        v36[3] = v37[3];
      }
    }
    else
    {
      v40 = (_DWORD *)(*(_DWORD *)(v26 + 8) + 32 * v28);
      v41 = v27[1];
      v42 = v27[2];
      *v40 = *v27;
      v40[1] = v41;
      v40[2] = v42;
      v43 = v27[4];
      v44 = v27[5];
      v40[3] = v27[3];
      v40[4] = v43;
      v40[5] = v44;
      v45 = v27[6];
      if ( v45 == -1 )
      {
        v40[6] = 0;
      }
      else
      {
        v46 = 4 * v45;
        v47 = *(_DWORD *)(*(_DWORD *)a1 + v46);
        v48 = *(_DWORD *)(a1 + 12);
        if ( *(_DWORD *)(v47 + 24) == -1 && *(_DWORD *)(v47 + 28) == -1 )
        {
          v49 = *(_DWORD *)(v48 + 36);
          v50 = 44 * *(_DWORD *)&v63[v46];
        }
        else
        {
          v49 = *(_DWORD *)(v48 + 8);
          v50 = 32 * *(_DWORD *)&v63[v46];
        }
        v40[6] = v49 + v50;
      }
      v51 = v27[7];
      if ( v51 == -1 )
      {
        v40[7] = 0;
      }
      else
      {
        v52 = 4 * v51;
        v53 = *(_DWORD *)(a1 + 12);
        v54 = *(_DWORD *)(*(_DWORD *)a1 + v52);
        if ( *(_DWORD *)(v54 + 24) == -1 && *(_DWORD *)(v54 + 28) == -1 )
        {
          v55 = *(_DWORD *)(v53 + 36);
          v56 = 44 * *(_DWORD *)&v63[v52];
        }
        else
        {
          v55 = *(_DWORD *)(v53 + 8);
          v56 = 32 * *(_DWORD *)&v63[v52];
        }
        v40[7] = v55 + v56;
      }
    }
  }
  if ( a5 != 0 )
    (**(void (__fastcall ***)(int, const char *))a5)(a5, "Freeing temporary buffer");
  if ( v63 != nullptr )
    operator delete[](v63);
  v57 = v66;
  if ( v66 != nullptr )
  {
    v58 = *((void **)v66 + 8);
    if ( v58 != nullptr )
      j_free(v58);
    v57[8] = 0;
    v57[9] = 0;
    v57[10] = 0;
    operator delete(v57);
  }
  if ( *(_DWORD *)a1 != 0 )
    j_free(*(void **)a1);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a5 != 0 )
    (**(void (__fastcall ***)(int, const char *))a5)(a5, "Done.");
  return *(_DWORD *)(a1 + 12);
}

