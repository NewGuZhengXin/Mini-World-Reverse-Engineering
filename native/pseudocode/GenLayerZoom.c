// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerZoom

//======================================================================
// GenLayerZoom::GenLayerZoom(unsigned long long,GenLayer *)
// address: 0x002651DC   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN12GenLayerZoomC1EyP8GenLayer'
void __fastcall GenLayerZoom::GenLayerZoom(GenLayerZoom *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_45B368;
}


//======================================================================
// GenLayerZoom::modeOrRandom(int,int,int,int)
// address: 0x002651FC   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall GenLayerZoom::modeOrRandom(GenLayerZoom *this, int a2, int a3, int a4, int a5)
{
  int v8; // r3
  int Int; // r0

  if ( a3 == a4 && a3 == a5 )
    return a3;
  if ( a2 == a3 )
  {
    if ( a2 == a4 || a2 == a5 || a4 != a5 )
      return a2;
  }
  else if ( a2 == a4 && (a2 == a5 || a3 != a5) )
  {
    return a2;
  }
  if ( a2 == a5 && a3 != a4 )
    return a2;
  if ( a3 == a2 && a4 != a5 || a3 == a4 && a2 != a5 )
    return a3;
  if ( a3 == a5 )
  {
    if ( a2 != a4 )
      return a3;
  }
  else if ( a4 == a2 )
  {
    return a4;
  }
  if ( a4 == a3 && a2 != a5 || a4 == a5 && a2 != a3 || a5 == a2 && a3 != a4 || a5 == a3 && a2 != a4 )
    return a4;
  if ( a5 != a4 || (v8 = a5, a2 == a3) )
  {
    Int = GenLayer::nextInt(this, 4u);
    if ( Int != 0 )
    {
      if ( Int != 1 )
      {
        if ( Int != 2 )
          return a5;
        return a4;
      }
      return a3;
    }
    return a2;
  }
  return v8;
}


//======================================================================
// GenLayerZoom::magnify(unsigned long long,GenLayer *,int)
// address: 0x002652A4   size: 0x46 (70 bytes)
//======================================================================
GenLayer *__fastcall GenLayerZoom::magnify(unsigned __int64 this, unsigned __int64 a2, GenLayer *a3, int a4)
{
  GenLayer *v4; // r4
  unsigned __int64 i; // r6
  GenLayerZoom *v6; // r5
  int v8; // [sp+8h] [bp-Ch]
  int v9; // [sp+Ch] [bp-8h]

  v8 = this;
  v9 = HIDWORD(a2);
  v4 = (GenLayer *)a2;
  for ( i = this; (int)i - v8 < v9; ++i )
  {
    v6 = (GenLayerZoom *)operator new(0x28u);
    GenLayerZoom::GenLayerZoom(v6, i, v4);
    v4 = v6;
  }
  return v4;
}


//======================================================================
// GenLayerZoom::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002653B0   size: 0x1EE (494 bytes)
//======================================================================
void **__fastcall GenLayerZoom::getInts(GenLayer *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v8; // r0
  unsigned int v9; // r5
  char *v10; // r0
  int v11; // r5
  int v12; // r2
  char *v13; // r6
  int Int; // r0
  int v15; // r3
  char *v16; // r6
  int v17; // r0
  int v18; // r3
  int *v19; // r6
  unsigned int v20; // r3
  unsigned int v21; // r1
  __int64 v22; // r0
  int v23; // r5
  int v24; // r4
  size_t i; // r6
  int v26; // r1
  int v28; // [sp+8h] [bp-64h]
  int v29; // [sp+Ch] [bp-60h]
  int v30; // [sp+10h] [bp-5Ch]
  int v31; // [sp+14h] [bp-58h]
  int v32; // [sp+18h] [bp-54h]
  int v33; // [sp+1Ch] [bp-50h]
  int v34; // [sp+20h] [bp-4Ch]
  int v35; // [sp+24h] [bp-48h]
  int v36; // [sp+28h] [bp-44h]
  int v37; // [sp+2Ch] [bp-40h]
  int v38; // [sp+30h] [bp-3Ch]
  int v39; // [sp+34h] [bp-38h]
  int v40; // [sp+3Ch] [bp-30h]
  int v41; // [sp+40h] [bp-2Ch]
  char v42; // [sp+44h] [bp-28h]
  char v43; // [sp+48h] [bp-24h]
  void *v44[3]; // [sp+50h] [bp-1Ch] BYREF
  char *v45; // [sp+5Ch] [bp-10h] BYREF
  char *v46; // [sp+60h] [bp-Ch]
  char *v47; // [sp+64h] [bp-8h]

  v43 = a4;
  v38 = a3 >> 1;
  v42 = a3;
  v8 = *((_DWORD *)a1 + 8);
  v39 = a4 >> 1;
  memset(v44, 0, sizeof(v44));
  v35 = a5 >> 1;
  v31 = (a5 >> 1) + 3;
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v8 + 8))(
    v8,
    v44,
    a3 >> 1,
    a4 >> 1,
    v31,
    (a6 >> 1) + 3);
  v45 = nullptr;
  v46 = nullptr;
  v9 = ((a6 >> 1) + 3) * 4 * v31;
  v47 = nullptr;
  if ( v9 != 0 )
  {
    if ( v9 > 0x3FFFFFFF )
      sub_3BCEB4(v31);
    v10 = (char *)operator new(4 * v9);
  }
  else
  {
    v10 = nullptr;
  }
  v47 = &v10[4 * v9];
  v45 = v10;
  memset(v10, 0, 4 * v9);
  v11 = 0;
  v29 = 0;
  v46 = v47;
  v36 = 2 * v31;
  while ( v29 < (a6 >> 1) + 2 )
  {
    v12 = 2 * v29 * v36;
    v30 = *((_DWORD *)v44[0] + v11);
    v41 = v35 + 3 + v11;
    v34 = *((_DWORD *)v44[0] + v41);
    v33 = 4 * v12;
    v32 = 4 * (v12 + v36);
    v28 = 0;
    while ( v28 < v35 + 2 )
    {
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, 2 * (v28 + v38), 2 * (v29 + v39));
      v37 = *((_DWORD *)v44[0] + ++v28 + v11);
      v40 = *((_DWORD *)v44[0] + v28 + v41);
      *(_DWORD *)&v45[v33] = v30;
      v13 = &v45[v32];
      Int = GenLayer::nextInt(a1, 2u);
      v15 = v34;
      if ( Int == 0 )
        v15 = v30;
      *(_DWORD *)v13 = v15;
      v16 = &v45[v33 + 4];
      v17 = GenLayer::nextInt(a1, 2u);
      v18 = v37;
      if ( v17 == 0 )
        v18 = v30;
      *(_DWORD *)v16 = v18;
      v19 = (int *)&v45[v32 + 4];
      *v19 = GenLayerZoom::modeOrRandom(a1, v30, v37, v34, v40);
      v32 += 8;
      v33 += 8;
      v34 = v40;
      v30 = v37;
    }
    ++v29;
    v11 += v31;
  }
  v20 = a6 * a5;
  v21 = (a2[1] - *a2) >> 2;
  if ( a6 * a5 <= v21 )
  {
    if ( v20 < v21 )
      a2[1] = *a2 + 4 * v20;
  }
  else
  {
    HIDWORD(v22) = v20 - v21;
    LODWORD(v22) = a2;
    std::vector<int>::_M_default_append(v22);
  }
  v23 = 0;
  v24 = 0;
  for ( i = 4 * a5; ; j_memcpy((void *)(*a2 + v23 - 4 * a5), &v45[4 * v26 + 4 * (v42 & 1)], i) )
  {
    v23 += i;
    if ( v24 >= a6 )
      break;
    v26 = (v24 + (v43 & 1)) * v36;
    ++v24;
  }
  std::_Vector_base<int>::~_Vector_base((void **)&v45);
  return std::_Vector_base<int>::~_Vector_base(v44);
}

