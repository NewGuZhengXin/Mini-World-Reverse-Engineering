// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerFuzzyZoom

//======================================================================
// GenLayerFuzzyZoom::GenLayerFuzzyZoom(unsigned long long,GenLayer *)
// address: 0x002E6BD0   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN17GenLayerFuzzyZoomC2EyP8GenLayer'
void __fastcall GenLayerFuzzyZoom::GenLayerFuzzyZoom(GenLayerFuzzyZoom *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_461AF0;
}


//======================================================================
// GenLayerFuzzyZoom::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002E6BF0   size: 0x1FE (510 bytes)
//======================================================================
void **__fastcall GenLayerFuzzyZoom::getInts(GenLayer *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v8; // r0
  unsigned int v9; // r5
  char *v10; // r0
  int v11; // r2
  int v12; // r5
  char *v13; // r6
  unsigned int Int; // r0
  int v15; // r3
  char *v16; // r6
  unsigned int v17; // r0
  int v18; // r3
  char *v19; // r6
  unsigned int v20; // r0
  unsigned int v21; // r3
  unsigned int v22; // r1
  __int64 v23; // r0
  int v24; // r5
  int v25; // r4
  size_t j; // r6
  int v27; // r1
  int v29; // [sp+8h] [bp-64h]
  int v30; // [sp+Ch] [bp-60h]
  int i; // [sp+10h] [bp-5Ch]
  int v32; // [sp+14h] [bp-58h]
  int v33; // [sp+18h] [bp-54h]
  int v34; // [sp+1Ch] [bp-50h]
  int v35; // [sp+20h] [bp-4Ch]
  int v36; // [sp+24h] [bp-48h]
  int v37; // [sp+28h] [bp-44h]
  int v38; // [sp+2Ch] [bp-40h]
  int v39; // [sp+30h] [bp-3Ch]
  int v40; // [sp+34h] [bp-38h]
  int v41; // [sp+3Ch] [bp-30h]
  int v42; // [sp+40h] [bp-2Ch]
  char v43; // [sp+44h] [bp-28h]
  char v44; // [sp+48h] [bp-24h]
  void *v45[3]; // [sp+50h] [bp-1Ch] BYREF
  char *v46; // [sp+5Ch] [bp-10h] BYREF
  char *v47; // [sp+60h] [bp-Ch]
  char *v48; // [sp+64h] [bp-8h]

  v44 = a4;
  v39 = a3 >> 1;
  v43 = a3;
  v8 = *((_DWORD *)a1 + 8);
  v40 = a4 >> 1;
  memset(v45, 0, sizeof(v45));
  v36 = a5 >> 1;
  v32 = (a5 >> 1) + 3;
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v8 + 8))(
    v8,
    v45,
    a3 >> 1,
    a4 >> 1,
    v32,
    (a6 >> 1) + 3);
  v46 = nullptr;
  v47 = nullptr;
  v9 = ((a6 >> 1) + 3) * 4 * v32;
  v48 = nullptr;
  if ( v9 != 0 )
  {
    if ( v9 > 0x3FFFFFFF )
      sub_3BCEB4(v32);
    v10 = (char *)operator new(4 * v9);
  }
  else
  {
    v10 = nullptr;
  }
  v48 = &v10[4 * v9];
  v46 = v10;
  memset(v10, 0, 4 * v9);
  v30 = 0;
  v47 = v48;
  v37 = 2 * v32;
  for ( i = 0; i < (a6 >> 1) + 2; ++i )
  {
    v11 = 2 * i * v37;
    v12 = *((_DWORD *)v45[0] + v30);
    v42 = v36 + 3 + v30;
    v35 = *((_DWORD *)v45[0] + v42);
    v34 = 4 * v11;
    v33 = 4 * (v11 + v37);
    v29 = 0;
    while ( v29 < v36 + 2 )
    {
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, 2 * (v29 + v39), 2 * (i + v40));
      v38 = *((_DWORD *)v45[0] + ++v29 + v30);
      v41 = *((_DWORD *)v45[0] + v29 + v42);
      *(_DWORD *)&v46[v34] = v12;
      v13 = &v46[v33];
      Int = GenLayer::nextInt(a1, 2u);
      v15 = v35;
      if ( Int == 0 )
        v15 = v12;
      *(_DWORD *)v13 = v15;
      v16 = &v46[v34 + 4];
      v17 = GenLayer::nextInt(a1, 2u);
      v18 = v38;
      if ( v17 == 0 )
        v18 = v12;
      *(_DWORD *)v16 = v18;
      v19 = &v46[v33 + 4];
      v20 = GenLayer::nextInt(a1, 4u);
      if ( v20 != 0 )
      {
        if ( v20 == 1 )
        {
          v12 = v38;
        }
        else
        {
          v12 = v41;
          if ( v20 == 2 )
            v12 = v35;
        }
      }
      *(_DWORD *)v19 = v12;
      v33 += 8;
      v34 += 8;
      v35 = v41;
      v12 = v38;
    }
    v30 += v32;
  }
  v21 = a6 * a5;
  v22 = (a2[1] - *a2) >> 2;
  if ( a6 * a5 <= v22 )
  {
    if ( v21 < v22 )
      a2[1] = *a2 + 4 * v21;
  }
  else
  {
    HIDWORD(v23) = v21 - v22;
    LODWORD(v23) = a2;
    std::vector<int>::_M_default_append(v23);
  }
  v24 = 0;
  v25 = 0;
  for ( j = 4 * a5; ; j_memcpy((void *)(*a2 + v24 - 4 * a5), &v46[4 * v27 + 4 * (v43 & 1)], j) )
  {
    v24 += j;
    if ( v25 >= a6 )
      break;
    v27 = (v25 + (v44 & 1)) * v37;
    ++v25;
  }
  std::_Vector_base<int>::~_Vector_base((void **)&v46);
  return std::_Vector_base<int>::~_Vector_base(v45);
}

