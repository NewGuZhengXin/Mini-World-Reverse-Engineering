// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::AABBTreeAABB_Builder

//======================================================================
// ozcollide::AABBTreeAABB_Builder::AABBTreeAABB_Builder(void)
// address: 0x001D8708   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide20AABBTreeAABB_BuilderC1Ev'
_DWORD *__fastcall ozcollide::AABBTreeAABB_Builder::AABBTreeAABB_Builder(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// ozcollide::AABBTreeAABB_Builder::~AABBTreeAABB_Builder()
// address: 0x001D8712   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide20AABBTreeAABB_BuilderD1Ev'
void __fastcall ozcollide::AABBTreeAABB_Builder::~AABBTreeAABB_Builder(ozcollide::AABBTreeAABB_Builder *this)
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
// ozcollide::AABBTreeAABB_Builder::classifyAABB(ozcollide::Box const&,int,float)
// address: 0x001D872C   size: 0x46 (70 bytes)
//======================================================================
bool __fastcall ozcollide::AABBTreeAABB_Builder::classifyAABB(
        ozcollide::AABBTreeAABB_Builder *this,
        const ozcollide::Box *a2,
        int a3,
        float a4)
{
  _BOOL4 result; // r0

  if ( *(float *)a2 > a4 || (result = false, a3 != 0) )
  {
    if ( *((float *)a2 + 1) <= a4 && a3 == 1 )
      return false;
    else
      return *((float *)a2 + 2) > a4 || a3 != 2;
  }
  return result;
}


//======================================================================
// ozcollide::AABBTreeAABB_Builder::workOnItem(ozcollide::AABBTreeAABB_Builder::WorkingItem &,int)
// address: 0x001D8874   size: 0x5D6 (1494 bytes)
//======================================================================
ozcollide::Box *__fastcall ozcollide::AABBTreeAABB_Builder::workOnItem(ozcollide::Box *result, int a2, int a3)
{
  float v4; // r5
  float *v5; // r4
  float v6; // r6
  float v7; // r0
  float v8; // r4
  float v9; // r6
  float v10; // r0
  float v11; // r4
  float v12; // r6
  float v13; // r5
  float v14; // r0
  int v15; // r1
  _BOOL4 v16; // r0
  float v17; // r6
  float v18; // r4
  float v19; // r6
  _DWORD *v20; // r4
  ozcollide::Box *v21; // r0
  _DWORD *v22; // r4
  ozcollide::Box *v23; // r0
  _DWORD *v24; // r5
  ozcollide::Box *v25; // r2
  int v26; // r0
  int v27; // r1
  int v28; // r6
  _DWORD *v29; // r3
  int v30; // r5
  int v31; // r6
  int v32; // r4
  int v33; // r5
  _DWORD *v34; // r4
  ozcollide::Box *v35; // r2
  int v36; // r0
  int v37; // r5
  int v38; // r6
  _DWORD *v39; // r3
  int v40; // r4
  int v41; // r5
  int v42; // r4
  int v43; // r5
  ozcollide::Box *v44; // r0
  float *v45; // r3
  float v46; // r0
  float v47; // r1
  float v48; // r6
  float v49; // r1
  float v50; // r6
  float *v51; // r3
  float v52; // r0
  float v53; // r1
  float v54; // r6
  float v55; // r1
  float v56; // r6
  float v57; // [sp+Ch] [bp-78h]
  int v58; // [sp+Ch] [bp-78h]
  int v59; // [sp+Ch] [bp-78h]
  float v60; // [sp+10h] [bp-74h]
  float v61; // [sp+10h] [bp-74h]
  int j; // [sp+10h] [bp-74h]
  int k; // [sp+10h] [bp-74h]
  float v64; // [sp+14h] [bp-70h]
  float *v65; // [sp+14h] [bp-70h]
  int v66; // [sp+18h] [bp-6Ch]
  float v67; // [sp+18h] [bp-6Ch]
  float v68; // [sp+1Ch] [bp-68h]
  float v69; // [sp+1Ch] [bp-68h]
  float v70; // [sp+20h] [bp-64h]
  float v71; // [sp+20h] [bp-64h]
  float v72; // [sp+24h] [bp-60h]
  int i; // [sp+24h] [bp-60h]
  float v74; // [sp+28h] [bp-5Ch]
  float v75; // [sp+28h] [bp-5Ch]
  float v76; // [sp+2Ch] [bp-58h]
  float v77; // [sp+2Ch] [bp-58h]
  ozcollide::AABBTreeAABB_Builder *v78; // [sp+30h] [bp-54h]
  int v79; // [sp+34h] [bp-50h]
  float v80; // [sp+38h] [bp-4Ch]
  float v81; // [sp+3Ch] [bp-48h]
  float v82; // [sp+40h] [bp-44h]
  ozcollide::Box *v83; // [sp+48h] [bp-3Ch] BYREF
  ozcollide::Box *v84; // [sp+4Ch] [bp-38h] BYREF
  float v85; // [sp+50h] [bp-34h] BYREF
  float v86; // [sp+54h] [bp-30h]
  float v87; // [sp+58h] [bp-2Ch]
  float v88; // [sp+5Ch] [bp-28h] BYREF
  float v89; // [sp+60h] [bp-24h]
  float v90; // [sp+64h] [bp-20h]
  float v91[7]; // [sp+68h] [bp-1Ch] BYREF

  v78 = result;
  v79 = *(_DWORD *)(a2 + 36);
  if ( v79 <= a3 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    goto LABEL_84;
  }
  v57 = -3.4028e38;
  v60 = -3.4028e38;
  v72 = -3.4028e38;
  v64 = 3.4028e38;
  v4 = 3.4028e38;
  v74 = 3.4028e38;
  v66 = 0;
  while ( v66 < v79 )
  {
    v5 = (float *)(*(_DWORD *)(a2 + 32) + 24 * v66);
    v76 = *v5;
    v81 = v5[3];
    v68 = *v5 - v81;
    v82 = v5[1];
    v6 = v5[4];
    v70 = v82 - v6;
    v7 = v5[2];
    v8 = v5[5];
    v80 = v7 - v8;
    v77 = v76 + v81;
    v9 = v82 + v6;
    v10 = v7 + v8;
    v11 = v10;
    if ( v68 >= v74 )
      v68 = v74;
    if ( v70 >= v4 )
      v70 = v4;
    if ( v80 >= v64 )
      v80 = v64;
    if ( v77 <= v72 )
      v77 = v72;
    if ( v9 <= v60 )
      v9 = v60;
    if ( v10 <= v57 )
      v11 = v57;
    v60 = v9;
    v57 = v11;
    v72 = v77;
    ++v66;
    v4 = v70;
    v64 = v80;
    v74 = v68;
  }
  v67 = (float)(v74 + v72) * 0.5;
  v69 = (float)(v4 + v60) * 0.5;
  v71 = (float)(v64 + v57) * 0.5;
  *(float *)a2 = v67;
  *(float *)(a2 + 4) = v69;
  *(float *)(a2 + 8) = v71;
  v12 = (float)(v72 - v74) * 0.5;
  v13 = (float)(v60 - v4) * 0.5;
  v14 = (float)(v57 - v64) * 0.5;
  *(float *)(a2 + 12) = v12;
  *(float *)(a2 + 20) = v14;
  *(float *)(a2 + 16) = v13;
  if ( v12 > v13 && v12 > v14 )
  {
    v58 = 0;
    v75 = (float)(v74 + v72) * 0.5;
  }
  else
  {
    if ( v13 > v14 )
    {
      v15 = 1;
      v75 = v69;
    }
    else
    {
      v15 = 2;
      v75 = (float)(v64 + v57) * 0.5;
    }
    v58 = v15;
  }
  v85 = v67 - v12;
  v86 = v69 - v13;
  v87 = v71 - v14;
  v88 = v67 + v12;
  v89 = v69 + v13;
  v90 = v71 + v14;
  v83 = nullptr;
  v84 = nullptr;
  for ( i = 0; i < v79; ++i )
  {
    v65 = (float *)(*(_DWORD *)(a2 + 32) + 24 * i);
    v16 = ozcollide::AABBTreeAABB_Builder::classifyAABB(v78, (const ozcollide::Box *)v65, v58, v75);
    if ( v58 != 0 )
    {
      if ( v58 == 1 )
      {
        v17 = v65[1];
        v18 = v65[4];
      }
      else
      {
        v17 = v65[2];
        v18 = v65[5];
      }
    }
    else
    {
      v17 = *v65;
      v18 = v65[3];
    }
    v61 = v17 - v18;
    v19 = v17 + v18;
    if ( !v16 )
    {
      if ( v83 == nullptr )
      {
        v20 = (_DWORD *)operator new(0x2Cu);
        j_memset(v20, 0, 0x2Cu);
        v20[8] = 0;
        v20[9] = 0;
        v20[10] = 0;
        v83 = (ozcollide::Box *)v20;
        if ( v58 != 0 )
        {
          if ( v58 == 1 )
          {
            v91[1] = (float)(v86 + v89) * 0.5;
            v91[0] = v88;
            v91[2] = v90;
          }
          else
          {
            v91[2] = (float)(v87 + v90) * 0.5;
            v91[0] = v88;
            v91[1] = v89;
          }
        }
        else
        {
          v91[0] = (float)(v85 + v88) * 0.5;
          v91[1] = v89;
          v91[2] = v90;
        }
        ozcollide::Box::setFromPoints(
          (ozcollide::Box *)v20,
          (const ozcollide::Vec3f *)&v85,
          (const ozcollide::Vec3f *)v91);
      }
      if ( v58 == 0 )
      {
        if ( v19 > (float)(*(float *)v83 + *((float *)v83 + 3)) )
        {
          v91[0] = v19;
          v91[1] = v89;
          v91[2] = v90;
          goto LABEL_48;
        }
LABEL_49:
        v21 = v83;
        goto LABEL_68;
      }
      if ( v58 == 1 )
      {
        if ( v19 <= (float)(*((float *)v83 + 1) + *((float *)v83 + 4)) )
          goto LABEL_49;
        v91[0] = v88;
        v91[1] = v19;
        v91[2] = v90;
      }
      else
      {
        if ( v19 <= (float)(*((float *)v83 + 2) + *((float *)v83 + 5)) )
          goto LABEL_49;
        v91[0] = v88;
        v91[1] = v89;
        v91[2] = v19;
      }
LABEL_48:
      ozcollide::Box::setFromPoints(v83, (const ozcollide::Vec3f *)&v85, (const ozcollide::Vec3f *)v91);
      goto LABEL_49;
    }
    if ( v84 == nullptr )
    {
      v22 = (_DWORD *)operator new(0x2Cu);
      j_memset(v22, 0, 0x2Cu);
      v22[8] = 0;
      v22[9] = 0;
      v22[10] = 0;
      v84 = (ozcollide::Box *)v22;
      if ( v58 != 0 )
      {
        if ( v58 == 1 )
        {
          v91[1] = (float)(v86 + v89) * 0.5;
          v91[0] = v85;
          v91[2] = v87;
        }
        else
        {
          v91[2] = (float)(v87 + v90) * 0.5;
          v91[0] = v85;
          v91[1] = v86;
        }
        v23 = (ozcollide::Box *)v22;
      }
      else
      {
        v91[0] = (float)(v85 + v88) * 0.5;
        v91[1] = v86;
        v91[2] = v87;
        v23 = (ozcollide::Box *)v22;
      }
      ozcollide::Box::setFromPoints(v23, (const ozcollide::Vec3f *)v91, (const ozcollide::Vec3f *)&v88);
    }
    if ( v58 != 0 )
    {
      if ( v58 == 1 )
      {
        if ( v61 < (float)(*((float *)v84 + 1) - *((float *)v84 + 4)) )
        {
          v91[0] = v85;
          v91[1] = v61;
          v91[2] = v87;
          goto LABEL_66;
        }
      }
      else if ( v61 < (float)(*((float *)v84 + 2) - *((float *)v84 + 5)) )
      {
        v91[0] = v85;
        v91[1] = v86;
        v91[2] = v61;
        goto LABEL_66;
      }
    }
    else if ( v61 < (float)(*(float *)v84 - *((float *)v84 + 3)) )
    {
      v91[1] = v86;
      v91[0] = v61;
      v91[2] = v87;
LABEL_66:
      ozcollide::Box::setFromPoints(v84, (const ozcollide::Vec3f *)v91, (const ozcollide::Vec3f *)&v88);
    }
    v21 = v84;
LABEL_68:
    ozcollide::Vector<ozcollide::Box>::add((_DWORD *)v21 + 8, (int *)v65);
  }
  if ( v83 != nullptr )
  {
    if ( v84 == nullptr )
    {
      v24 = (_DWORD *)operator new(0x2Cu);
      j_memset(v24, 0, 0x2Cu);
      v25 = v83;
      v24[8] = 0;
      v24[9] = 0;
      v24[10] = 0;
      v84 = (ozcollide::Box *)v24;
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
      v32 = *((_DWORD *)v83 + 9);
      v33 = v32 - v32 / 2;
      v59 = v32 / 2;
      for ( j = 24 * v33; ; j += 24 )
      {
        v44 = v83;
        if ( v33 >= v32 )
          break;
        v45 = (float *)(*((_DWORD *)v83 + 8) + j);
        v46 = *v45;
        v47 = v45[1];
        v48 = v45[2];
        v45 += 3;
        v91[0] = v46;
        v91[1] = v47;
        v91[2] = v48;
        v49 = v45[1];
        v50 = v45[2];
        v91[3] = *v45;
        v91[4] = v49;
        v91[5] = v50;
        ++v33;
        ozcollide::Vector<ozcollide::Box>::add((_DWORD *)v84 + 8, (int *)v91);
      }
      goto LABEL_78;
    }
  }
  else if ( v84 != nullptr )
  {
    v34 = (_DWORD *)operator new(0x2Cu);
    j_memset(v34, 0, 0x2Cu);
    v35 = v84;
    v34[8] = 0;
    v34[9] = 0;
    v34[10] = 0;
    v83 = (ozcollide::Box *)v34;
    v36 = *(_DWORD *)v35;
    v37 = *((_DWORD *)v35 + 1);
    v38 = *((_DWORD *)v35 + 2);
    v35 = (ozcollide::Box *)((char *)v35 + 12);
    *v34 = v36;
    v34[1] = v37;
    v34[2] = v38;
    v39 = v34 + 3;
    v40 = *((_DWORD *)v35 + 1);
    v41 = *((_DWORD *)v35 + 2);
    *v39 = *(_DWORD *)v35;
    v39[1] = v40;
    v39[2] = v41;
    v42 = *((_DWORD *)v84 + 9);
    v43 = v42 - v42 / 2;
    v59 = v42 / 2;
    for ( k = 24 * v43; ; k += 24 )
    {
      v44 = v84;
      if ( v43 >= v42 )
        break;
      v51 = (float *)(*((_DWORD *)v84 + 8) + k);
      v52 = *v51;
      v53 = v51[1];
      v54 = v51[2];
      v51 += 3;
      v91[0] = v52;
      v91[1] = v53;
      v91[2] = v54;
      v55 = v51[1];
      v56 = v51[2];
      v91[3] = *v51;
      v91[4] = v55;
      v91[5] = v56;
      ++v43;
      ozcollide::Vector<ozcollide::Box>::add((_DWORD *)v83 + 8, (int *)v91);
    }
LABEL_78:
    ozcollide::Vector<ozcollide::Box>::grow((int)v44 + 32, -v59);
  }
  if ( v83 != nullptr )
  {
    *(_DWORD *)(a2 + 24) = *((_DWORD *)v78 + 1);
    ozcollide::Vector<ozcollide::AABBTreeAABB_Builder::WorkingItem *>::add((int)v78, &v83);
  }
  else
  {
    *(_DWORD *)(a2 + 24) = -1;
  }
  result = v84;
  if ( v84 != nullptr )
  {
    *(_DWORD *)(a2 + 28) = *((_DWORD *)v78 + 1);
    return (ozcollide::Box *)ozcollide::Vector<ozcollide::AABBTreeAABB_Builder::WorkingItem *>::add((int)v78, &v84);
  }
LABEL_84:
  *(_DWORD *)(a2 + 28) = -1;
  return result;
}


//======================================================================
// ozcollide::AABBTreeAABB_Builder::buildFromList(int,ozcollide::Box const*,int,ozcollide::Monitor *)
// address: 0x001D8E4C   size: 0x2EA (746 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreeAABB_Builder::buildFromList(ozcollide::Box *a1, int a2, int a3, int a4, int a5)
{
  ozcollide::AABBTreeAABB *v7; // r4
  void *v8; // r4
  int i; // r4
  _DWORD *v10; // r0
  int v11; // r1
  unsigned int v12; // r4
  unsigned int v13; // r0
  unsigned int v14; // r4
  char *v15; // r3
  unsigned int v16; // r5
  int j; // r2
  int v18; // r1
  unsigned int v19; // r0
  _DWORD *v20; // r0
  unsigned int v21; // r0
  _DWORD *v22; // r0
  ozcollide::AABBTreeAABBLeaf *k; // r5
  int v24; // r3
  _DWORD *v25; // r4
  int v26; // r2
  int v27; // r1
  int v28; // r5
  int v29; // r1
  int v30; // r5
  unsigned int v31; // r5
  unsigned int v32; // r0
  _DWORD *v33; // r0
  signed int m; // r12
  int *v35; // r3
  int *v36; // r2
  int v37; // r0
  int v38; // r1
  int v39; // r5
  int v40; // r1
  int v41; // r5
  _DWORD *v42; // r12
  int v43; // r1
  int v44; // r5
  int v45; // r1
  int v46; // r5
  int v47; // r3
  int v48; // r3
  int v49; // r1
  int v50; // r2
  int v51; // r2
  int v52; // r3
  int v53; // r3
  int v54; // r3
  int v55; // r2
  int v56; // r1
  int v57; // r2
  int v58; // r3
  _DWORD *v59; // r4
  void *v60; // r0
  unsigned int v62; // [sp+8h] [bp-1Ch]
  signed int v63; // [sp+8h] [bp-1Ch]
  ozcollide::AABBTreeAABBLeaf *v65; // [sp+Ch] [bp-18h]
  ozcollide::AABBTreeAABBLeaf *v66; // [sp+Ch] [bp-18h]
  char *v68; // [sp+10h] [bp-14h]
  _DWORD *v69; // [sp+14h] [bp-10h]
  _DWORD *v70; // [sp+14h] [bp-10h]
  void *v71; // [sp+1Ch] [bp-8h] BYREF

  v7 = (ozcollide::AABBTreeAABB *)operator new(0x78u);
  ozcollide::AABBTreeAABB::AABBTreeAABB(v7, a4);
  *((_DWORD *)a1 + 3) = v7;
  v8 = (void *)operator new(0x2Cu);
  j_memset(v8, 0, 0x2Cu);
  v71 = v8;
  if ( a5 != 0 )
    (**(void (__fastcall ***)(int, const char *))a5)(a5, "Building the root node");
  for ( i = 0; ; ++i )
  {
    v10 = v71;
    if ( i >= a2 )
      break;
    v11 = 24 * i;
    ozcollide::Vector<ozcollide::Box>::add((_DWORD *)v71 + 8, (int *)(a3 + v11));
  }
  *((_DWORD *)v71 + 6) = -1;
  v10[7] = -1;
  ozcollide::Vector<ozcollide::AABBTreeAABB_Builder::WorkingItem *>::add((int)a1, &v71);
  v12 = 0;
  do
    ozcollide::AABBTreeAABB_Builder::workOnItem(a1, *(_DWORD *)(4 * v12++ + *(_DWORD *)a1), a4);
  while ( v12 != *((_DWORD *)a1 + 1) );
  v13 = 4 * v12;
  if ( v12 > 0x1FC00000 )
    v13 = -1;
  v14 = 0;
  v68 = (char *)operator new[](v13);
  v15 = v68;
  v16 = 0;
  for ( j = 0; j < *((_DWORD *)a1 + 1); ++j )
  {
    v18 = *(_DWORD *)(*(_DWORD *)a1 + v15 - v68);
    if ( *(_DWORD *)(v18 + 24) == -1 && *(_DWORD *)(v18 + 28) == -1 )
      *(_DWORD *)v15 = v14++;
    else
      *(_DWORD *)v15 = v16++;
    v15 += 4;
  }
  if ( v16 > 0x3F80000 )
    v19 = -1;
  else
    v19 = 32 * v16 + 8;
  v20 = (_DWORD *)operator new[](v19);
  *v20 = 32;
  v20[1] = v16;
  *(_DWORD *)(*((_DWORD *)a1 + 3) + 8) = v20 + 2;
  if ( v14 > 0x2E80000 )
    v21 = -1;
  else
    v21 = 44 * v14 + 8;
  v22 = (_DWORD *)operator new[](v21);
  *v22 = 44;
  v22[1] = v14;
  v65 = (ozcollide::AABBTreeAABBLeaf *)(v22 + 2);
  v62 = v14 - 1;
  v69 = v22 + 2;
  while ( v62 != -1 )
  {
    ozcollide::AABBTreeAABBLeaf::AABBTreeAABBLeaf(v65);
    v65 = (ozcollide::AABBTreeAABBLeaf *)((char *)v65 + 44);
    --v62;
  }
  *(_DWORD *)(*((_DWORD *)a1 + 3) + 36) = v69;
  *(_DWORD *)(*((_DWORD *)a1 + 3) + 4) = v16;
  *(_DWORD *)(*((_DWORD *)a1 + 3) + 12) = v14;
  if ( a5 != 0 )
    (**(void (__fastcall ***)(int, const char *))a5)(a5, "Building the final clean tree");
  for ( k = nullptr; ; k = (ozcollide::AABBTreeAABBLeaf *)((char *)v66 + 1) )
  {
    v66 = k;
    if ( (int)k >= *((_DWORD *)a1 + 1) )
      break;
    if ( a5 != 0 )
      (*(void (__fastcall **)(int, ozcollide::AABBTreeAABBLeaf *))(*(_DWORD *)a5 + 4))(a5, k);
    v24 = *((_DWORD *)a1 + 3);
    v25 = *(_DWORD **)(*(_DWORD *)a1 + 4 * (_DWORD)k);
    v26 = *(_DWORD *)&v68[4 * (_DWORD)k];
    if ( v25[6] == -1 && v25[7] == -1 )
    {
      v70 = (_DWORD *)(*(_DWORD *)(v24 + 36) + 44 * v26);
      v27 = v25[1];
      v28 = v25[2];
      *v70 = *v25;
      v70[1] = v27;
      v70[2] = v28;
      v29 = v25[4];
      v30 = v25[5];
      v70[3] = v25[3];
      v70[4] = v29;
      v70[5] = v30;
      v70[6] = 0;
      v70[7] = 0;
      v31 = v25[9];
      v70[8] = v31;
      v63 = v31;
      v32 = -1;
      if ( v31 <= 0x5500000 )
        v32 = 24 * v31 + 8;
      v33 = (_DWORD *)operator new[](v32);
      *v33 = 24;
      v33[1] = v31;
      v70[9] = v33 + 2;
      for ( m = 0; m < v63; ++m )
      {
        v35 = (int *)(v70[9] + 24 * m);
        v36 = (int *)(v25[8] + 24 * m);
        v37 = *v36;
        v38 = v36[1];
        v39 = v36[2];
        v36 += 3;
        *v35 = v37;
        v35[1] = v38;
        v35[2] = v39;
        v35 += 3;
        v40 = v36[1];
        v41 = v36[2];
        *v35 = *v36;
        v35[1] = v40;
        v35[2] = v41;
      }
    }
    else
    {
      v42 = (_DWORD *)(*(_DWORD *)(v24 + 8) + 32 * v26);
      v43 = v25[1];
      v44 = v25[2];
      *v42 = *v25;
      v42[1] = v43;
      v42[2] = v44;
      v45 = v25[4];
      v46 = v25[5];
      v42[3] = v25[3];
      v42[4] = v45;
      v42[5] = v46;
      v47 = v25[6];
      if ( v47 == -1 )
      {
        v42[6] = 0;
      }
      else
      {
        v48 = 4 * v47;
        v49 = *(_DWORD *)(*(_DWORD *)a1 + v48);
        v50 = *((_DWORD *)a1 + 3);
        if ( *(_DWORD *)(v49 + 24) == -1 && *(_DWORD *)(v49 + 28) == -1 )
        {
          v51 = *(_DWORD *)(v50 + 36);
          v52 = 44 * *(_DWORD *)&v68[v48];
        }
        else
        {
          v51 = *(_DWORD *)(v50 + 8);
          v52 = 32 * *(_DWORD *)&v68[v48];
        }
        v42[6] = v51 + v52;
      }
      v53 = v25[7];
      if ( v53 == -1 )
      {
        v42[7] = 0;
      }
      else
      {
        v54 = 4 * v53;
        v55 = *((_DWORD *)a1 + 3);
        v56 = *(_DWORD *)(*(_DWORD *)a1 + v54);
        if ( *(_DWORD *)(v56 + 24) == -1 && *(_DWORD *)(v56 + 28) == -1 )
        {
          v57 = *(_DWORD *)(v55 + 36);
          v58 = 44 * *(_DWORD *)&v68[v54];
        }
        else
        {
          v57 = *(_DWORD *)(v55 + 8);
          v58 = 32 * *(_DWORD *)&v68[v54];
        }
        v42[7] = v57 + v58;
      }
    }
  }
  if ( a5 != 0 )
    (**(void (__fastcall ***)(int, const char *))a5)(a5, "Freeing temporary buffer");
  if ( v68 != nullptr )
    operator delete[](v68);
  v59 = v71;
  if ( v71 != nullptr )
  {
    v60 = *((void **)v71 + 8);
    if ( v60 != nullptr )
      j_free(v60);
    v59[8] = 0;
    v59[9] = 0;
    v59[10] = 0;
    operator delete(v59);
  }
  if ( *(_DWORD *)a1 != 0 )
    j_free(*(void **)a1);
  *(_DWORD *)a1 = 0;
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = 0;
  if ( a5 != 0 )
    (**(void (__fastcall ***)(int, const char *))a5)(a5, "Done.");
  return *((_DWORD *)a1 + 3);
}

