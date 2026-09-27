// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ozcollide::Vector

//======================================================================
// ozcollide::Vector<ozcollide::Polygon const*>::clear(void)
// address: 0x0016F890   size: 0x18 (24 bytes)
//======================================================================
void __fastcall ozcollide::Vector<ozcollide::Polygon const*>::clear(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 != nullptr )
    j_free(v2);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}


//======================================================================
// ozcollide::Vector<int>::clear(void)
// address: 0x0016F8A8   size: 0x18 (24 bytes)
//======================================================================
void __fastcall ozcollide::Vector<int>::clear(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 != nullptr )
    j_free(v2);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}


//======================================================================
// ozcollide::Vector<ozcollide::Polygon const*>::resize(int)
// address: 0x001D1D1E   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ozcollide::Vector<ozcollide::Polygon const*>::resize(__int64 a1)
{
  int v1; // r7
  void *v3; // r6
  void *v4; // r0
  int v5; // r2
  __int64 v7; // [sp+0h] [bp-Ch]

  v7 = a1;
  v1 = *(_DWORD *)(a1 + 8);
  if ( SHIDWORD(a1) > v1 )
  {
    v3 = *(void **)a1;
    HIDWORD(v7) = 2 * HIDWORD(a1);
    v4 = j_malloc(8 * HIDWORD(a1));
    v5 = HIDWORD(v7);
    *(_DWORD *)a1 = v4;
    if ( SHIDWORD(v7) > v1 )
      v5 = v1;
    j_memcpy(v4, v3, 4 * v5);
    if ( v3 != nullptr )
      j_free(v3);
    *(_DWORD *)(a1 + 8) = HIDWORD(v7);
  }
  *(_DWORD *)(a1 + 4) = HIDWORD(a1);
  return v7;
}


//======================================================================
// ozcollide::Vector<ozcollide::Polygon const*>::add(ozcollide::Polygon const* const&)
// address: 0x001D1D5C   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ozcollide::Vector<ozcollide::Polygon const*>::add(_DWORD *a1, _DWORD *a2)
{
  int v3; // r3
  int result; // r0
  __int64 v6; // r0

  v3 = a1[1];
  result = a1[2];
  if ( v3 >= result )
  {
    HIDWORD(v6) = v3 + 1;
    LODWORD(v6) = a1;
    ozcollide::Vector<ozcollide::Polygon const*>::resize(v6);
    *(_DWORD *)(4 * (a1[1] + 0x3FFFFFFF) + *a1) = *a2;
    return 0x3FFFFFFF;
  }
  else
  {
    *(_DWORD *)(4 * v3 + *a1) = *a2;
    ++a1[1];
  }
  return result;
}


//======================================================================
// ozcollide::Vector<int>::add(int const&)
// address: 0x001D1D98   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall ozcollide::Vector<int>::add(int a1, _DWORD *a2)
{
  int v3; // r5
  void *v5; // r6
  int v6; // r5
  void *v7; // r0
  int v8; // r2
  __int64 v10; // [sp+0h] [bp-Ch]

  HIDWORD(v10) = a2;
  v3 = *(_DWORD *)(a1 + 4);
  v5 = *(void **)a1;
  LODWORD(v10) = *(_DWORD *)(a1 + 8);
  if ( v3 >= (int)v10 )
  {
    v6 = v3 + 1;
    if ( v6 > (int)v10 )
    {
      HIDWORD(v10) = 2 * v6;
      v7 = j_malloc(8 * v6);
      v8 = 2 * v6;
      *(_DWORD *)a1 = v7;
      if ( 2 * v6 > (int)v10 )
        v8 = v10;
      j_memcpy(v7, v5, 4 * v8);
      if ( v5 != nullptr )
        j_free(v5);
      *(_DWORD *)(a1 + 8) = HIDWORD(v10);
    }
    *(_DWORD *)(a1 + 4) = v6;
    *(_DWORD *)(4 * (v6 + 0x3FFFFFFF) + *(_DWORD *)a1) = *a2;
  }
  else
  {
    *((_DWORD *)v5 + v3) = *a2;
    ++*(_DWORD *)(a1 + 4);
  }
  return v10;
}


//======================================================================
// ozcollide::Vector<ozcollide::Box const*>::resize(int)
// address: 0x001D3254   size: 0x3C (60 bytes)
//======================================================================
__int64 __fastcall ozcollide::Vector<ozcollide::Box const*>::resize(__int64 a1)
{
  int v1; // r7
  void *v3; // r6
  void *v4; // r0
  int v5; // r2
  __int64 v7; // [sp+0h] [bp-Ch]

  v7 = a1;
  v1 = *(_DWORD *)(a1 + 8);
  if ( SHIDWORD(a1) > v1 )
  {
    v3 = *(void **)a1;
    HIDWORD(v7) = 2 * HIDWORD(a1);
    v4 = j_malloc(8 * HIDWORD(a1));
    v5 = HIDWORD(v7);
    *(_DWORD *)a1 = v4;
    if ( SHIDWORD(v7) > v1 )
      v5 = v1;
    j_memcpy(v4, v3, 4 * v5);
    if ( v3 != nullptr )
      j_free(v3);
    *(_DWORD *)(a1 + 8) = HIDWORD(v7);
  }
  *(_DWORD *)(a1 + 4) = HIDWORD(a1);
  return v7;
}


//======================================================================
// ozcollide::Vector<ozcollide::Box const*>::add(ozcollide::Box const* const&)
// address: 0x001D3290   size: 0x36 (54 bytes)
//======================================================================
int __fastcall ozcollide::Vector<ozcollide::Box const*>::add(_DWORD *a1, _DWORD *a2)
{
  int v3; // r3
  int result; // r0
  __int64 v6; // r0

  v3 = a1[1];
  result = a1[2];
  if ( v3 >= result )
  {
    HIDWORD(v6) = v3 + 1;
    LODWORD(v6) = a1;
    ozcollide::Vector<ozcollide::Box const*>::resize(v6);
    *(_DWORD *)(4 * (a1[1] + 0x3FFFFFFF) + *a1) = *a2;
    return 0x3FFFFFFF;
  }
  else
  {
    *(_DWORD *)(4 * v3 + *a1) = *a2;
    ++a1[1];
  }
  return result;
}


//======================================================================
// ozcollide::Vector<ozcollide::AABBTreePolyBuilder::WorkingItem *>::add(ozcollide::AABBTreePolyBuilder::WorkingItem * const&)
// address: 0x001D5198   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall ozcollide::Vector<ozcollide::AABBTreePolyBuilder::WorkingItem *>::add(int a1, _DWORD *a2)
{
  int v3; // r5
  void *v5; // r6
  int v6; // r5
  void *v7; // r0
  int v8; // r2
  __int64 v10; // [sp+0h] [bp-Ch]

  HIDWORD(v10) = a2;
  v3 = *(_DWORD *)(a1 + 4);
  v5 = *(void **)a1;
  LODWORD(v10) = *(_DWORD *)(a1 + 8);
  if ( v3 >= (int)v10 )
  {
    v6 = v3 + 1;
    if ( v6 > (int)v10 )
    {
      HIDWORD(v10) = 2 * v6;
      v7 = j_malloc(8 * v6);
      v8 = 2 * v6;
      *(_DWORD *)a1 = v7;
      if ( 2 * v6 > (int)v10 )
        v8 = v10;
      j_memcpy(v7, v5, 4 * v8);
      if ( v5 != nullptr )
        j_free(v5);
      *(_DWORD *)(a1 + 8) = HIDWORD(v10);
    }
    *(_DWORD *)(a1 + 4) = v6;
    *(_DWORD *)(4 * (v6 + 0x3FFFFFFF) + *(_DWORD *)a1) = *a2;
  }
  else
  {
    *((_DWORD *)v5 + v3) = *a2;
    ++*(_DWORD *)(a1 + 4);
  }
  return v10;
}


//======================================================================
// ozcollide::Vector<ozcollide::Polygon *>::reserve(int)
// address: 0x001D5200   size: 0x30 (48 bytes)
//======================================================================
void __fastcall ozcollide::Vector<ozcollide::Polygon *>::reserve(int a1, int a2)
{
  void *v3; // r6
  void *v5; // r0
  int v6; // r3
  int v7; // r2

  v3 = *(void **)a1;
  v5 = j_malloc(4 * a2);
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = v5;
  v7 = a2;
  if ( a2 > v6 )
    v7 = v6;
  j_memcpy(v5, v3, 4 * v7);
  if ( v3 != nullptr )
    j_free(v3);
  *(_DWORD *)(a1 + 8) = a2;
}


//======================================================================
// ozcollide::Vector<ozcollide::Polygon *>::grow(int)
// address: 0x001D5230   size: 0x18 (24 bytes)
//======================================================================
void __fastcall ozcollide::Vector<ozcollide::Polygon *>::grow(int a1, int a2)
{
  int v3; // r5

  v3 = a2 + *(_DWORD *)(a1 + 4);
  if ( v3 > *(_DWORD *)(a1 + 8) )
    ozcollide::Vector<ozcollide::Polygon *>::reserve(a1, 2 * v3);
  *(_DWORD *)(a1 + 4) = v3;
}


//======================================================================
// ozcollide::Vector<ozcollide::Polygon *>::add(ozcollide::Polygon * const&)
// address: 0x001D5248   size: 0x3A (58 bytes)
//======================================================================
void __fastcall ozcollide::Vector<ozcollide::Polygon *>::add(_DWORD *a1, _DWORD *a2)
{
  int v2; // r3
  int v3; // r5
  int v6; // r5

  v2 = a1[2];
  v3 = a1[1];
  if ( v3 >= v2 )
  {
    v6 = v3 + 1;
    if ( v6 > v2 )
      ozcollide::Vector<ozcollide::Polygon *>::reserve((int)a1, 2 * v6);
    a1[1] = v6;
    *(_DWORD *)(4 * (v6 + 0x3FFFFFFF) + *a1) = *a2;
  }
  else
  {
    *(_DWORD *)(4 * v3 + *a1) = *a2;
    ++a1[1];
  }
}


//======================================================================
// ozcollide::Vector<ozcollide::AABBTreeSphere_Builder::WorkingItem *>::add(ozcollide::AABBTreeSphere_Builder::WorkingItem * const&)
// address: 0x001D7548   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall ozcollide::Vector<ozcollide::AABBTreeSphere_Builder::WorkingItem *>::add(int a1, _DWORD *a2)
{
  int v3; // r5
  void *v5; // r6
  int v6; // r5
  void *v7; // r0
  int v8; // r2
  __int64 v10; // [sp+0h] [bp-Ch]

  HIDWORD(v10) = a2;
  v3 = *(_DWORD *)(a1 + 4);
  v5 = *(void **)a1;
  LODWORD(v10) = *(_DWORD *)(a1 + 8);
  if ( v3 >= (int)v10 )
  {
    v6 = v3 + 1;
    if ( v6 > (int)v10 )
    {
      HIDWORD(v10) = 2 * v6;
      v7 = j_malloc(8 * v6);
      v8 = 2 * v6;
      *(_DWORD *)a1 = v7;
      if ( 2 * v6 > (int)v10 )
        v8 = v10;
      j_memcpy(v7, v5, 4 * v8);
      if ( v5 != nullptr )
        j_free(v5);
      *(_DWORD *)(a1 + 8) = HIDWORD(v10);
    }
    *(_DWORD *)(a1 + 4) = v6;
    *(_DWORD *)(4 * (v6 + 0x3FFFFFFF) + *(_DWORD *)a1) = *a2;
  }
  else
  {
    *((_DWORD *)v5 + v3) = *a2;
    ++*(_DWORD *)(a1 + 4);
  }
  return v10;
}


//======================================================================
// ozcollide::Vector<ozcollide::Sphere>::reserve(int)
// address: 0x001D75B0   size: 0x30 (48 bytes)
//======================================================================
void __fastcall ozcollide::Vector<ozcollide::Sphere>::reserve(int a1, int a2)
{
  void *v3; // r6
  void *v5; // r0
  int v6; // r3
  int v7; // r2

  v3 = *(void **)a1;
  v5 = j_malloc(16 * a2);
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = v5;
  v7 = a2;
  if ( a2 > v6 )
    v7 = v6;
  j_memcpy(v5, v3, 16 * v7);
  if ( v3 != nullptr )
    j_free(v3);
  *(_DWORD *)(a1 + 8) = a2;
}


//======================================================================
// ozcollide::Vector<ozcollide::Sphere>::grow(int)
// address: 0x001D75E0   size: 0x18 (24 bytes)
//======================================================================
void __fastcall ozcollide::Vector<ozcollide::Sphere>::grow(int a1, int a2)
{
  int v3; // r5

  v3 = a2 + *(_DWORD *)(a1 + 4);
  if ( v3 > *(_DWORD *)(a1 + 8) )
    ozcollide::Vector<ozcollide::Sphere>::reserve(a1, 2 * v3);
  *(_DWORD *)(a1 + 4) = v3;
}


//======================================================================
// ozcollide::Vector<ozcollide::Sphere>::add(ozcollide::Sphere const&)
// address: 0x001D75F8   size: 0x46 (70 bytes)
//======================================================================
int __fastcall ozcollide::Vector<ozcollide::Sphere>::add(int *a1, int *a2)
{
  int v2; // r6
  int v3; // r3
  int *v6; // r3
  int result; // r0
  int v8; // r1
  int v9; // r2
  int v10; // r6
  int v11; // r3
  int *v12; // r3
  int v13; // r1
  int v14; // r2

  v2 = a1[1];
  v3 = a1[2];
  if ( v2 >= v3 )
  {
    v10 = v2 + 1;
    if ( v10 > v3 )
      ozcollide::Vector<ozcollide::Sphere>::reserve((int)a1, 2 * v10);
    v11 = *a1;
    a1[1] = v10;
    v12 = (int *)(v11 + 16 * (v10 + 0xFFFFFFF));
    result = *a2;
    v13 = a2[1];
    v14 = a2[2];
    *v12 = *a2;
    v12[1] = v13;
    v12[2] = v14;
    v12[3] = a2[3];
  }
  else
  {
    v6 = (int *)(*a1 + 16 * v2);
    result = *a2;
    v8 = a2[1];
    v9 = a2[2];
    *v6 = *a2;
    v6[1] = v8;
    v6[2] = v9;
    v6[3] = a2[3];
    ++a1[1];
  }
  return result;
}


//======================================================================
// ozcollide::Vector<ozcollide::AABBTreeAABB_Builder::WorkingItem *>::add(ozcollide::AABBTreeAABB_Builder::WorkingItem * const&)
// address: 0x001D8774   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall ozcollide::Vector<ozcollide::AABBTreeAABB_Builder::WorkingItem *>::add(int a1, _DWORD *a2)
{
  int v3; // r5
  void *v5; // r6
  int v6; // r5
  void *v7; // r0
  int v8; // r2
  __int64 v10; // [sp+0h] [bp-Ch]

  HIDWORD(v10) = a2;
  v3 = *(_DWORD *)(a1 + 4);
  v5 = *(void **)a1;
  LODWORD(v10) = *(_DWORD *)(a1 + 8);
  if ( v3 >= (int)v10 )
  {
    v6 = v3 + 1;
    if ( v6 > (int)v10 )
    {
      HIDWORD(v10) = 2 * v6;
      v7 = j_malloc(8 * v6);
      v8 = 2 * v6;
      *(_DWORD *)a1 = v7;
      if ( 2 * v6 > (int)v10 )
        v8 = v10;
      j_memcpy(v7, v5, 4 * v8);
      if ( v5 != nullptr )
        j_free(v5);
      *(_DWORD *)(a1 + 8) = HIDWORD(v10);
    }
    *(_DWORD *)(a1 + 4) = v6;
    *(_DWORD *)(4 * (v6 + 0x3FFFFFFF) + *(_DWORD *)a1) = *a2;
  }
  else
  {
    *((_DWORD *)v5 + v3) = *a2;
    ++*(_DWORD *)(a1 + 4);
  }
  return v10;
}


//======================================================================
// ozcollide::Vector<ozcollide::Box>::reserve(int)
// address: 0x001D87DC   size: 0x34 (52 bytes)
//======================================================================
void __fastcall ozcollide::Vector<ozcollide::Box>::reserve(int a1, int a2)
{
  void *v3; // r6
  void *v5; // r0
  int v6; // r3
  int v7; // r2

  v3 = *(void **)a1;
  v5 = j_malloc(24 * a2);
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)a1 = v5;
  v7 = a2;
  if ( a2 > v6 )
    v7 = v6;
  j_memcpy(v5, v3, 24 * v7);
  if ( v3 != nullptr )
    j_free(v3);
  *(_DWORD *)(a1 + 8) = a2;
}


//======================================================================
// ozcollide::Vector<ozcollide::Box>::grow(int)
// address: 0x001D8810   size: 0x18 (24 bytes)
//======================================================================
void __fastcall ozcollide::Vector<ozcollide::Box>::grow(int a1, int a2)
{
  int v3; // r5

  v3 = a2 + *(_DWORD *)(a1 + 4);
  if ( v3 > *(_DWORD *)(a1 + 8) )
    ozcollide::Vector<ozcollide::Box>::reserve(a1, 2 * v3);
  *(_DWORD *)(a1 + 4) = v3;
}


//======================================================================
// ozcollide::Vector<ozcollide::Box>::add(ozcollide::Box const&)
// address: 0x001D8828   size: 0x4A (74 bytes)
//======================================================================
int __fastcall ozcollide::Vector<ozcollide::Box>::add(_DWORD *a1, int *a2)
{
  int v2; // r6
  int v3; // r3
  int *v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r2
  int *v10; // r4
  int result; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r6
  _DWORD *v15; // r6
  int v16; // r0
  int v17; // r1
  int v18; // r2
  int *v19; // r4
  int v20; // r1
  int v21; // r2

  v2 = a1[1];
  v3 = a1[2];
  if ( v2 >= v3 )
  {
    v14 = v2 + 1;
    if ( v14 > v3 )
      ozcollide::Vector<ozcollide::Box>::reserve((int)a1, 2 * v14);
    a1[1] = v14;
    v15 = (_DWORD *)(*a1 + 24 * v14 - 24);
    v16 = *a2;
    v17 = a2[1];
    v18 = a2[2];
    v19 = a2 + 3;
    *v15 = v16;
    v15[1] = v17;
    v15[2] = v18;
    result = *v19;
    v20 = v19[1];
    v21 = v19[2];
    v15[3] = *v19;
    v15[4] = v20;
    v15[5] = v21;
  }
  else
  {
    v6 = (int *)(*a1 + 24 * v2);
    v7 = *a2;
    v8 = a2[1];
    v9 = a2[2];
    v10 = a2 + 3;
    *v6 = v7;
    v6[1] = v8;
    v6[2] = v9;
    v6 += 3;
    result = *v10;
    v12 = v10[1];
    v13 = v10[2];
    *v6 = *v10;
    v6[1] = v12;
    v6[2] = v13;
    ++a1[1];
  }
  return result;
}

