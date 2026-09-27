// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::AABBTreePolyBuilder

//======================================================================
// ozcollide::AABBTreePolyBuilder::AABBTreePolyBuilder(void)
// address: 0x001D4CBA   size: 0xA (10 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide19AABBTreePolyBuilderC2Ev'
_DWORD *__fastcall ozcollide::AABBTreePolyBuilder::AABBTreePolyBuilder(_DWORD *this)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// ozcollide::AABBTreePolyBuilder::~AABBTreePolyBuilder()
// address: 0x001D4CC4   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN9ozcollide19AABBTreePolyBuilderD2Ev'
void __fastcall ozcollide::AABBTreePolyBuilder::~AABBTreePolyBuilder(ozcollide::AABBTreePolyBuilder *this)
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
// ozcollide::AABBTreePolyBuilder::build(ozcollide::Monitor *)
// address: 0x001D4CE0   size: 0x254 (596 bytes)
//======================================================================
void __fastcall ozcollide::AABBTreePolyBuilder::build(int a1, int a2)
{
  unsigned int v3; // r0
  unsigned int v5; // r0
  unsigned int v6; // r6
  char *v7; // r3
  unsigned int v8; // r7
  int i; // r2
  int v10; // r1
  unsigned int v11; // r0
  _DWORD *v12; // r0
  unsigned int v13; // r0
  _DWORD *v14; // r0
  _DWORD *v15; // r0
  unsigned int v16; // r3
  _DWORD *v17; // r12
  int j; // r6
  int v19; // r2
  _DWORD *v20; // r7
  int v21; // r3
  int v22; // r1
  int v23; // r6
  int v24; // r1
  int v25; // r6
  unsigned int v26; // r6
  unsigned int v27; // r0
  _DWORD *v28; // r0
  _DWORD *v29; // r6
  signed int m; // r6
  _DWORD *v31; // r12
  int v32; // r3
  int v33; // r6
  int v34; // r3
  int v35; // r6
  int v36; // r2
  int v37; // r2
  int v38; // r0
  int v39; // r1
  int v40; // r1
  int v41; // r2
  int v42; // r2
  int v43; // r2
  int v44; // r1
  int v45; // r0
  int v46; // r1
  int v47; // r2
  _DWORD *v48; // [sp+4h] [bp-20h]
  signed int v49; // [sp+8h] [bp-1Ch]
  char *v50; // [sp+10h] [bp-14h]
  int k; // [sp+14h] [bp-10h]
  int v52; // [sp+18h] [bp-Ch]
  _DWORD *v53; // [sp+1Ch] [bp-8h]

  v3 = *(_DWORD *)(a1 + 4);
  if ( v3 > 0x1FC00000 )
    v5 = -1;
  else
    v5 = 4 * v3;
  v6 = 0;
  v50 = (char *)operator new[](v5);
  v7 = v50;
  v8 = 0;
  for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
  {
    v10 = *(_DWORD *)(*(_DWORD *)a1 + v7 - v50);
    if ( *(_DWORD *)(v10 + 24) == -1 && *(_DWORD *)(v10 + 28) == -1 )
      *(_DWORD *)v7 = v6++;
    else
      *(_DWORD *)v7 = v8++;
    v7 += 4;
  }
  if ( v8 > 0x3F80000 )
    v11 = -1;
  else
    v11 = 32 * v8 + 8;
  v12 = (_DWORD *)operator new[](v11);
  *v12 = 32;
  v12[1] = v8;
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 8) = v12 + 2;
  if ( v6 > 0x2E80000 )
    v13 = -1;
  else
    v13 = 44 * v6 + 8;
  v14 = (_DWORD *)operator new[](v13);
  *v14 = 44;
  v14[1] = v6;
  v15 = v14 + 2;
  v16 = v6 - 1;
  v17 = v15;
  while ( --v16 != -2 )
  {
    v15[8] = 0;
    v15[9] = 0;
    v15[10] = 0;
    v15 += 11;
  }
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 36) = v17;
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4) = v8;
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 12) = v6;
  if ( a2 != 0 )
    (**(void (__fastcall ***)(int, const char *))a2)(a2, "Building the final clean tree");
  for ( j = 0; ; j = v52 + 1 )
  {
    v52 = j;
    if ( j >= *(_DWORD *)(a1 + 4) )
      break;
    if ( a2 != 0 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a2 + 4))(a2, j);
    v19 = *(_DWORD *)(a1 + 12);
    v20 = *(_DWORD **)(*(_DWORD *)a1 + 4 * j);
    v21 = *(_DWORD *)&v50[4 * j];
    if ( v20[6] == -1 && v20[7] == -1 )
    {
      v48 = (_DWORD *)(*(_DWORD *)(v19 + 36) + 44 * v21);
      v22 = v20[1];
      v23 = v20[2];
      *v48 = *v20;
      v48[1] = v22;
      v48[2] = v23;
      v24 = v20[4];
      v25 = v20[5];
      v48[3] = v20[3];
      v48[4] = v24;
      v48[5] = v25;
      v48[6] = 0;
      v48[7] = 0;
      v26 = v20[9];
      v48[8] = v26;
      v49 = v26;
      v27 = -1;
      if ( v26 <= 0x3F80000 )
        v27 = 32 * v26 + 8;
      v28 = (_DWORD *)operator new[](v27);
      *v28 = 32;
      v28[1] = v26;
      v29 = v28 + 2;
      v53 = v28 + 2;
      for ( k = v49 - 1; k != -1; --k )
      {
        ozcollide::Polygon::Polygon(v29);
        v29 += 8;
      }
      v48[9] = v53;
      for ( m = 0; m < v49; ++m )
        ozcollide::Polygon::copyTo(*(ozcollide::Polygon **)(4 * m + v20[8]), (ozcollide::Polygon *)(v48[9] + 32 * m));
    }
    else
    {
      v31 = (_DWORD *)(*(_DWORD *)(v19 + 8) + 32 * v21);
      v32 = v20[1];
      v33 = v20[2];
      *v31 = *v20;
      v31[1] = v32;
      v31[2] = v33;
      v34 = v20[4];
      v35 = v20[5];
      v31[3] = v20[3];
      v31[4] = v34;
      v31[5] = v35;
      v36 = v20[6];
      if ( v36 == -1 )
      {
        v31[6] = 0;
      }
      else
      {
        v37 = 4 * v36;
        v38 = *(_DWORD *)(*(_DWORD *)a1 + v37);
        v39 = *(_DWORD *)(a1 + 12);
        if ( *(_DWORD *)(v38 + 24) == -1 && *(_DWORD *)(v38 + 28) == -1 )
        {
          v40 = *(_DWORD *)(v39 + 36);
          v41 = 44 * *(_DWORD *)&v50[v37];
        }
        else
        {
          v40 = *(_DWORD *)(v39 + 8);
          v41 = 32 * *(_DWORD *)&v50[v37];
        }
        v31[6] = v40 + v41;
      }
      v42 = v20[7];
      if ( v42 == -1 )
      {
        v31[7] = 0;
      }
      else
      {
        v43 = 4 * v42;
        v44 = *(_DWORD *)(a1 + 12);
        v45 = *(_DWORD *)(*(_DWORD *)a1 + v43);
        if ( *(_DWORD *)(v45 + 24) == -1 && *(_DWORD *)(v45 + 28) == -1 )
        {
          v46 = *(_DWORD *)(v44 + 36);
          v47 = 44 * *(_DWORD *)&v50[v43];
        }
        else
        {
          v46 = *(_DWORD *)(v44 + 8);
          v47 = 32 * *(_DWORD *)&v50[v43];
        }
        v31[7] = v46 + v47;
      }
    }
  }
  if ( a2 != 0 )
    (**(void (__fastcall ***)(int, const char *))a2)(a2, "Freeing temporary buffer");
  if ( v50 != nullptr )
    operator delete[](v50);
  if ( *(_DWORD *)a1 != 0 )
    j_free(*(void **)a1);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 != 0 )
    (**(void (__fastcall ***)(int, const char *))a2)(a2, "Done.");
}


//======================================================================
// ozcollide::AABBTreePolyBuilder::takeMinMax(ozcollide::Polygon const&,int,float &,float &)
// address: 0x001D4F40   size: 0xBC (188 bytes)
//======================================================================
bool __fastcall ozcollide::AABBTreePolyBuilder::takeMinMax(
        _BOOL4 this,
        const ozcollide::Polygon *a2,
        int a3,
        float *a4,
        float *a5)
{
  int v5; // r1
  int v6; // r7
  float *v7; // r5
  float v8; // r5
  float v9; // r5
  int i; // [sp+0h] [bp-14h]

  v5 = *(unsigned __int8 *)a2;
  *a4 = 3.4028e38;
  v6 = this;
  *a5 = -3.4028e38;
  for ( i = 0; i < v5; ++i )
  {
    v7 = (float *)(*(_DWORD *)(*(_DWORD *)(v6 + 12) + 44) + 12 * *((_DWORD *)a2 + i + 1));
    if ( a3 != 0 )
    {
      if ( a3 == 1 )
      {
        if ( v7[1] < *a4 )
          *a4 = v7[1];
        v9 = v7[1];
      }
      else
      {
        if ( a3 != 2 )
          continue;
        if ( v7[2] < *a4 )
          *a4 = v7[2];
        v9 = v7[2];
      }
      this = v9 > *a5;
      if ( v9 > *a5 )
        *a5 = v9;
    }
    else
    {
      if ( *v7 < *a4 )
        *a4 = *v7;
      v8 = *v7;
      this = v8 > *a5;
      if ( v8 > *a5 )
        *a5 = v8;
    }
  }
  return this;
}


//======================================================================
// ozcollide::AABBTreePolyBuilder::classifyPol(ozcollide::Polygon const&,int,float,float &,float &)
// address: 0x001D5004   size: 0x80 (128 bytes)
//======================================================================
bool __fastcall ozcollide::AABBTreePolyBuilder::classifyPol(
        ozcollide::AABBTreePolyBuilder *this,
        const ozcollide::Polygon *a2,
        int a3,
        float a4,
        float *a5,
        float *a6)
{
  float v8; // r4
  int v9; // r6
  float *v10; // r3
  float v11; // r0
  float v12; // r1
  int v14; // [sp+Ch] [bp-10h]

  ozcollide::AABBTreePolyBuilder::takeMinMax((_BOOL4)this, a2, a3, a5, a6);
  v8 = 0.0;
  v9 = 0;
  v14 = *(unsigned __int8 *)a2;
  while ( v9 < v14 )
  {
    v10 = (float *)(*(_DWORD *)(*((_DWORD *)this + 3) + 44) + 12 * *((_DWORD *)a2 + v9 + 1));
    if ( a3 != 0 )
    {
      if ( a3 == 1 )
      {
        v11 = v8;
        v12 = v10[1];
      }
      else
      {
        if ( a3 != 2 )
          goto LABEL_10;
        v12 = v10[2];
        v11 = v8;
      }
    }
    else
    {
      v11 = v8;
      v12 = *v10;
    }
    v8 = v11 + v12;
LABEL_10:
    ++v9;
  }
  return (float)(v8 / (float)v14) >= a4;
}


//======================================================================
// ozcollide::AABBTreePolyBuilder::calculAvgPoint(ozcollide::AABBTreePolyBuilder::WorkingItem &,int)
// address: 0x001D5084   size: 0x114 (276 bytes)
//======================================================================
float __fastcall ozcollide::AABBTreePolyBuilder::calculAvgPoint(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r6
  _DWORD *v5; // r7
  int v6; // r2
  int v7; // r6
  _DWORD *v8; // r7
  int v9; // r3
  int v10; // r6
  _DWORD *v11; // r7
  int v12; // r3
  int v14; // [sp+4h] [bp-18h]
  int v15; // [sp+4h] [bp-18h]
  int v16; // [sp+4h] [bp-18h]
  int k; // [sp+8h] [bp-14h]
  int i; // [sp+8h] [bp-14h]
  int j; // [sp+8h] [bp-14h]
  float v20; // [sp+Ch] [bp-10h]
  int v21; // [sp+10h] [bp-Ch]

  v21 = *(_DWORD *)(a2 + 36);
  v20 = 0.0;
  if ( a3 != 0 )
  {
    v3 = 0;
    if ( a3 == 1 )
    {
      for ( i = 0; i < v21; ++i )
      {
        v7 = 0;
        v8 = *(_DWORD **)(4 * i + *(_DWORD *)(a2 + 32));
        v15 = (unsigned __int8)*v8;
        v3 += v15;
        while ( v7 < v15 )
        {
          v9 = v8[++v7];
          v20 = v20 + *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 44) + 12 * v9 + 4);
        }
      }
    }
    else if ( a3 == 2 )
    {
      for ( j = 0; j < v21; ++j )
      {
        v10 = 0;
        v11 = *(_DWORD **)(4 * j + *(_DWORD *)(a2 + 32));
        v16 = (unsigned __int8)*v11;
        v3 += v16;
        while ( v10 < v16 )
        {
          v12 = v11[++v10];
          v20 = v20 + *(float *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 44) + 12 * v12 + 8);
        }
      }
    }
  }
  else
  {
    v3 = 0;
    for ( k = 0; k < v21; ++k )
    {
      v4 = 0;
      v5 = *(_DWORD **)(4 * k + *(_DWORD *)(a2 + 32));
      v14 = (unsigned __int8)*v5;
      v3 += v14;
      while ( v4 < v14 )
      {
        v6 = v5[++v4];
        v20 = v20 + *(float *)(12 * v6 + *(_DWORD *)(*(_DWORD *)(a1 + 12) + 44));
      }
    }
  }
  return v20 / (float)v3;
}


//======================================================================
// ozcollide::AABBTreePolyBuilder::workOnItem(ozcollide::AABBTreePolyBuilder::WorkingItem &,int)
// address: 0x001D5288   size: 0x544 (1348 bytes)
//======================================================================
void __fastcall ozcollide::AABBTreePolyBuilder::workOnItem(ozcollide::AABBTreePolyBuilder *a1, int a2, int a3)
{
  float *v4; // r6
  float v5; // r4
  float v6; // r5
  float v7; // r6
  float v8; // r5
  float v9; // r4
  float v10; // r0
  float v11; // r0
  float v12; // r6
  float v13; // r5
  _DWORD *v14; // r4
  ozcollide::Box *v15; // r0
  float v16; // r3
  ozcollide::Box *v17; // r0
  _DWORD *v18; // r4
  ozcollide::Box *v19; // r0
  float v20; // r3
  _DWORD *v21; // r5
  ozcollide::Box *v22; // r2
  int v23; // r0
  int v24; // r1
  int v25; // r4
  _DWORD *v26; // r3
  int v27; // r1
  int v28; // r5
  int v29; // r4
  int v30; // r5
  int m; // r6
  _DWORD *v32; // r4
  ozcollide::Box *v33; // r2
  int v34; // r0
  int v35; // r1
  int v36; // r5
  _DWORD *v37; // r3
  int v38; // r4
  int v39; // r5
  int v40; // r4
  int v41; // r5
  int n; // r6
  ozcollide::Box *v43; // r0
  float v44; // [sp+18h] [bp-6Ch]
  float v45; // [sp+18h] [bp-6Ch]
  float v46; // [sp+1Ch] [bp-68h]
  int v47; // [sp+1Ch] [bp-68h]
  int v48; // [sp+1Ch] [bp-68h]
  float v49; // [sp+20h] [bp-64h]
  float v50; // [sp+20h] [bp-64h]
  float v51; // [sp+24h] [bp-60h]
  float v52; // [sp+24h] [bp-60h]
  int k; // [sp+24h] [bp-60h]
  int i; // [sp+28h] [bp-5Ch]
  float v55; // [sp+28h] [bp-5Ch]
  int j; // [sp+2Ch] [bp-58h]
  float v57; // [sp+2Ch] [bp-58h]
  float v59; // [sp+34h] [bp-50h]
  float v60; // [sp+38h] [bp-4Ch]
  int v61; // [sp+3Ch] [bp-48h]
  ozcollide::Box *v62; // [sp+48h] [bp-3Ch] BYREF
  ozcollide::Box *v63; // [sp+4Ch] [bp-38h] BYREF
  const ozcollide::Polygon *v64; // [sp+50h] [bp-34h] BYREF
  float v65; // [sp+54h] [bp-30h] BYREF
  float v66; // [sp+58h] [bp-2Ch] BYREF
  float v67; // [sp+5Ch] [bp-28h] BYREF
  float v68; // [sp+60h] [bp-24h]
  float v69; // [sp+64h] [bp-20h]
  float v70; // [sp+68h] [bp-1Ch] BYREF
  float v71; // [sp+6Ch] [bp-18h]
  float v72; // [sp+70h] [bp-14h]
  float v73[4]; // [sp+74h] [bp-10h] BYREF

  v61 = *(_DWORD *)(a2 + 36);
  if ( v61 <= a3 )
  {
    *(_DWORD *)(a2 + 24) = -1;
    goto LABEL_81;
  }
  v46 = -3.4028e38;
  v44 = -3.4028e38;
  v49 = -3.4028e38;
  v51 = 3.4028e38;
  v59 = 3.4028e38;
  v60 = 3.4028e38;
  for ( i = 0; i < v61; ++i )
  {
    for ( j = 0; j < (unsigned __int8)**(_DWORD **)(4 * i + *(_DWORD *)(a2 + 32)); ++j )
    {
      v4 = (float *)(*(_DWORD *)(*((_DWORD *)a1 + 3) + 44)
                   + 12 * *(_DWORD *)(*(_DWORD *)(4 * i + *(_DWORD *)(a2 + 32)) + 4 * j + 4));
      v5 = *v4;
      if ( *v4 < v60 )
        v60 = *v4;
      v6 = v4[1];
      if ( v6 < v59 )
        v59 = v4[1];
      v7 = v4[2];
      if ( v7 < v51 )
        v51 = v7;
      if ( v5 <= v49 )
        v5 = v49;
      if ( v6 <= v44 )
        v6 = v44;
      if ( v7 <= v46 )
        v7 = v46;
      v46 = v7;
      v44 = v6;
      v49 = v5;
    }
  }
  *(float *)a2 = (float)(v60 + v49) * 0.5;
  *(float *)(a2 + 4) = (float)(v59 + v44) * 0.5;
  *(float *)(a2 + 8) = (float)(v51 + v46) * 0.5;
  v8 = (float)(v49 - v60) * 0.5;
  v9 = (float)(v44 - v59) * 0.5;
  v10 = (float)(v46 - v51) * 0.5;
  *(float *)(a2 + 12) = v8;
  *(float *)(a2 + 20) = v10;
  *(float *)(a2 + 16) = v9;
  if ( v8 <= v9 || (v47 = 0, v8 <= v10) )
    v47 = 2 - (v9 > v10);
  v11 = ozcollide::AABBTreePolyBuilder::calculAvgPoint((int)a1, a2, v47);
  v12 = *(float *)(a2 + 12);
  v57 = v11;
  v52 = *(float *)a2;
  v45 = *(float *)(a2 + 16);
  v13 = *(float *)(a2 + 4);
  v50 = *(float *)(a2 + 8);
  v55 = *(float *)(a2 + 20);
  v67 = *(float *)a2 - v12;
  v68 = v13 - v45;
  v69 = v50 - v55;
  v70 = v52 + v12;
  v71 = v13 + v45;
  v72 = v50 + v55;
  v62 = nullptr;
  v63 = nullptr;
  for ( k = 0; k < v61; ++k )
  {
    v64 = *(const ozcollide::Polygon **)(4 * k + *(_DWORD *)(a2 + 32));
    if ( !ozcollide::AABBTreePolyBuilder::classifyPol(a1, v64, v47, v57, &v65, &v66) )
    {
      if ( v62 == nullptr )
      {
        v14 = (_DWORD *)operator new(0x2Cu);
        j_memset(v14, 0, 0x2Cu);
        v14[8] = 0;
        v14[9] = 0;
        v14[10] = 0;
        v62 = (ozcollide::Box *)v14;
        if ( v47 != 0 )
        {
          if ( v47 == 1 )
          {
            v73[1] = (float)(v68 + v71) * 0.5;
            v73[0] = v70;
            v73[2] = v72;
          }
          else
          {
            v73[2] = (float)(v69 + v72) * 0.5;
            v73[0] = v70;
            v73[1] = v71;
          }
          v15 = (ozcollide::Box *)v14;
        }
        else
        {
          v73[0] = (float)(v67 + v70) * 0.5;
          v73[1] = v71;
          v73[2] = v72;
          v15 = (ozcollide::Box *)v14;
        }
        ozcollide::Box::setFromPoints(v15, (const ozcollide::Vec3f *)&v67, (const ozcollide::Vec3f *)v73);
      }
      if ( v47 == 0 )
      {
        if ( v66 > (float)(*(float *)v62 + *((float *)v62 + 3)) )
        {
          v16 = v72;
          v73[0] = v66;
          v73[1] = v71;
          goto LABEL_41;
        }
LABEL_45:
        v17 = v62;
        goto LABEL_65;
      }
      if ( v47 == 1 )
      {
        if ( v66 <= (float)(*((float *)v62 + 1) + *((float *)v62 + 4)) )
          goto LABEL_45;
        v16 = v72;
        v73[0] = v70;
        v73[1] = v66;
LABEL_41:
        v73[2] = v16;
      }
      else
      {
        if ( v66 <= (float)(*((float *)v62 + 2) + *((float *)v62 + 5)) )
          goto LABEL_45;
        v73[0] = v70;
        v73[1] = v71;
        v73[2] = v66;
      }
      ozcollide::Box::setFromPoints(v62, (const ozcollide::Vec3f *)&v67, (const ozcollide::Vec3f *)v73);
      goto LABEL_45;
    }
    if ( v63 == nullptr )
    {
      v18 = (_DWORD *)operator new(0x2Cu);
      j_memset(v18, 0, 0x2Cu);
      v18[8] = 0;
      v18[9] = 0;
      v18[10] = 0;
      v63 = (ozcollide::Box *)v18;
      if ( v47 != 0 )
      {
        if ( v47 == 1 )
        {
          v73[1] = (float)(v68 + v71) * 0.5;
          v73[0] = v67;
          v73[2] = v69;
        }
        else
        {
          v73[2] = (float)(v69 + v72) * 0.5;
          v73[0] = v67;
          v73[1] = v68;
        }
        v19 = (ozcollide::Box *)v18;
      }
      else
      {
        v73[0] = (float)(v67 + v70) * 0.5;
        v73[1] = v68;
        v73[2] = v69;
        v19 = (ozcollide::Box *)v18;
      }
      ozcollide::Box::setFromPoints(v19, (const ozcollide::Vec3f *)v73, (const ozcollide::Vec3f *)&v70);
    }
    if ( v47 != 0 )
    {
      if ( v47 == 1 )
      {
        if ( v65 < (float)(*((float *)v63 + 1) - *((float *)v63 + 4)) )
        {
          v20 = v69;
          v73[0] = v67;
          v73[1] = v65;
          goto LABEL_60;
        }
      }
      else if ( v65 < (float)(*((float *)v63 + 2) - *((float *)v63 + 5)) )
      {
        v73[0] = v67;
        v73[1] = v68;
        v73[2] = v65;
        goto LABEL_63;
      }
    }
    else if ( v65 < (float)(*(float *)v63 - *((float *)v63 + 3)) )
    {
      v20 = v69;
      v73[0] = v65;
      v73[1] = v68;
LABEL_60:
      v73[2] = v20;
LABEL_63:
      ozcollide::Box::setFromPoints(v63, (const ozcollide::Vec3f *)v73, (const ozcollide::Vec3f *)&v70);
    }
    v17 = v63;
LABEL_65:
    ozcollide::Vector<ozcollide::Polygon *>::add((_DWORD *)v17 + 8, &v64);
  }
  if ( v62 != nullptr )
  {
    if ( v63 == nullptr )
    {
      v21 = (_DWORD *)operator new(0x2Cu);
      j_memset(v21, 0, 0x2Cu);
      v22 = v62;
      v21[8] = 0;
      v21[9] = 0;
      v21[10] = 0;
      v63 = (ozcollide::Box *)v21;
      v23 = *(_DWORD *)v22;
      v24 = *((_DWORD *)v22 + 1);
      v25 = *((_DWORD *)v22 + 2);
      v22 = (ozcollide::Box *)((char *)v22 + 12);
      *v21 = v23;
      v21[1] = v24;
      v21[2] = v25;
      v26 = v21 + 3;
      v27 = *((_DWORD *)v22 + 1);
      v28 = *((_DWORD *)v22 + 2);
      *v26 = *(_DWORD *)v22;
      v26[1] = v27;
      v26[2] = v28;
      v29 = *((_DWORD *)v62 + 9);
      v30 = v29 - v29 / 2;
      v48 = v29 / 2;
      for ( m = 4 * v30; ; m += 4 )
      {
        v43 = v62;
        if ( v30 >= v29 )
          break;
        ++v30;
        v73[0] = *(float *)(*((_DWORD *)v62 + 8) + m);
        ozcollide::Vector<ozcollide::Polygon *>::add((_DWORD *)v63 + 8, v73);
      }
      goto LABEL_75;
    }
  }
  else if ( v63 != nullptr )
  {
    v32 = (_DWORD *)operator new(0x2Cu);
    j_memset(v32, 0, 0x2Cu);
    v33 = v63;
    v32[8] = 0;
    v32[9] = 0;
    v32[10] = 0;
    v62 = (ozcollide::Box *)v32;
    v34 = *(_DWORD *)v33;
    v35 = *((_DWORD *)v33 + 1);
    v36 = *((_DWORD *)v33 + 2);
    v33 = (ozcollide::Box *)((char *)v33 + 12);
    *v32 = v34;
    v32[1] = v35;
    v32[2] = v36;
    v37 = v32 + 3;
    v38 = *((_DWORD *)v33 + 1);
    v39 = *((_DWORD *)v33 + 2);
    *v37 = *(_DWORD *)v33;
    v37[1] = v38;
    v37[2] = v39;
    v40 = *((_DWORD *)v63 + 9);
    v41 = v40 - v40 / 2;
    v48 = v40 / 2;
    for ( n = 4 * v41; ; n += 4 )
    {
      v43 = v63;
      if ( v41 >= v40 )
        break;
      ++v41;
      v73[0] = *(float *)(*((_DWORD *)v63 + 8) + n);
      ozcollide::Vector<ozcollide::Polygon *>::add((_DWORD *)v62 + 8, v73);
    }
LABEL_75:
    ozcollide::Vector<ozcollide::Polygon *>::grow((int)v43 + 32, -v48);
  }
  if ( v62 != nullptr )
  {
    *(_DWORD *)(a2 + 24) = *((_DWORD *)a1 + 1);
    ozcollide::Vector<ozcollide::AABBTreePolyBuilder::WorkingItem *>::add((int)a1, &v62);
  }
  else
  {
    *(_DWORD *)(a2 + 24) = -1;
  }
  if ( v63 != nullptr )
  {
    *(_DWORD *)(a2 + 28) = *((_DWORD *)a1 + 1);
    ozcollide::Vector<ozcollide::AABBTreePolyBuilder::WorkingItem *>::add((int)a1, &v63);
    return;
  }
LABEL_81:
  *(_DWORD *)(a2 + 28) = -1;
}


//======================================================================
// ozcollide::AABBTreePolyBuilder::buildFromPolys(ozcollide::Polygon const*,int,ozcollide::Vec3f const*,int,int,ozcollide::Monitor *)
// address: 0x001D57CC   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall ozcollide::AABBTreePolyBuilder::buildFromPolys(
        ozcollide::AABBTreePolyBuilder *a1,
        int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7)
{
  ozcollide::AABBTreePoly *v10; // r6
  unsigned int v11; // r0
  signed int v12; // r3
  int v13; // r2
  int v14; // r6
  int v15; // r1
  int v16; // r1
  int v17; // r2
  void *v18; // r5
  int i; // r5
  _DWORD *v20; // r0
  int v21; // r5
  _DWORD *v22; // r5
  void *v23; // r0
  void *v26; // [sp+8h] [bp-Ch] BYREF
  int v27; // [sp+Ch] [bp-8h] BYREF

  v10 = (ozcollide::AABBTreePoly *)operator new(0x100u);
  ozcollide::AABBTreePoly::AABBTreePoly(v10, a6);
  *((_DWORD *)a1 + 3) = v10;
  if ( a5 > 0xAA00000 )
    v11 = -1;
  else
    v11 = 12 * a5;
  *(_DWORD *)(*((_DWORD *)a1 + 3) + 44) = operator new[](v11);
  *(_DWORD *)(*((_DWORD *)a1 + 3) + 40) = a5;
  v12 = 0;
  while ( v12 < (int)a5 )
  {
    v13 = 12 * v12;
    v14 = *(_DWORD *)(a4 + 12 * v12++);
    v15 = *(_DWORD *)(*((_DWORD *)a1 + 3) + 44);
    *(_DWORD *)(v15 + v13) = v14;
    v16 = v15 + v13;
    v17 = a4 + v13;
    *(_DWORD *)(v16 + 4) = *(_DWORD *)(v17 + 4);
    *(_DWORD *)(v16 + 8) = *(_DWORD *)(v17 + 8);
  }
  v18 = (void *)operator new(0x2Cu);
  j_memset(v18, 0, 0x2Cu);
  v26 = v18;
  for ( i = 0; ; ++i )
  {
    v20 = v26;
    if ( i >= a3 )
      break;
    v27 = a2 + 32 * i;
    ozcollide::Vector<ozcollide::Polygon *>::add((_DWORD *)v26 + 8, &v27);
  }
  *((_DWORD *)v26 + 6) = -1;
  v20[7] = -1;
  ozcollide::Vector<ozcollide::AABBTreePolyBuilder::WorkingItem *>::add((int)a1, &v26);
  v21 = 0;
  do
    ozcollide::AABBTreePolyBuilder::workOnItem(a1, *(_DWORD *)(4 * v21++ + *(_DWORD *)a1), a6);
  while ( v21 != *((_DWORD *)a1 + 1) );
  ozcollide::AABBTreePolyBuilder::build((int)a1, a7);
  v22 = v26;
  if ( v26 != nullptr )
  {
    v23 = *((void **)v26 + 8);
    if ( v23 != nullptr )
      j_free(v23);
    v22[8] = 0;
    v22[9] = 0;
    v22[10] = 0;
    operator delete(v22);
  }
  return *((_DWORD *)a1 + 3);
}

