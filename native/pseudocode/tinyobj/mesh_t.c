// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: tinyobj::mesh_t

//======================================================================
// tinyobj::mesh_t::operator=(tinyobj::mesh_t&&)
// address: 0x002B5FEE   size: 0x76 (118 bytes)
//======================================================================
_DWORD *__fastcall tinyobj::mesh_t::operator=(_DWORD *a1, _DWORD *a2, int a3, int a4)
{
  int v6; // r2
  int v7; // r3
  int v8; // r2
  int v9; // r3
  void *v10; // r0
  int v11; // r2
  int v12; // r2
  void *v13; // r0
  int v14; // r3
  int v15; // r3

  sub_2B5FB8((int)a1, a2, a3, a4);
  sub_2B5FB8((int)(a1 + 3), a2 + 3, v6, v7);
  sub_2B5FB8((int)(a1 + 6), a2 + 6, v8, v9);
  a1[10] = 0;
  a1[11] = 0;
  v10 = (void *)a1[9];
  a1[9] = 0;
  a1[9] = a2[9];
  a2[9] = 0;
  v11 = a1[10];
  a1[10] = a2[10];
  a2[10] = v11;
  v12 = a1[11];
  a1[11] = a2[11];
  a2[11] = v12;
  if ( v10 != nullptr )
    operator delete(v10);
  a1[13] = 0;
  a1[14] = 0;
  v13 = (void *)a1[12];
  a1[12] = 0;
  a1[12] = a2[12];
  a2[12] = 0;
  v14 = a1[13];
  a1[13] = a2[13];
  a2[13] = v14;
  v15 = a1[14];
  a1[14] = a2[14];
  a2[14] = v15;
  if ( v13 != nullptr )
    operator delete(v13);
  return a1;
}


//======================================================================
// tinyobj::mesh_t::mesh_t(tinyobj::mesh_t const&)
// address: 0x002B7030   size: 0xEA (234 bytes)
//======================================================================
// Alternative name is '_ZN7tinyobj6mesh_tC1ERKS0_'
_DWORD *__fastcall tinyobj::mesh_t::mesh_t(_DWORD *a1, _DWORD *a2)
{
  void *v4; // r0
  unsigned int v5; // r6
  int v6; // r7
  const void *v7; // r1
  int v8; // r3
  int v9; // r7
  unsigned int v10; // r7
  int v11; // r6
  const void *v12; // r1
  int v13; // r3
  int v14; // r5

  std::vector<float>::vector(a1, (int)a2);
  std::vector<float>::vector(a1 + 3, (int)(a2 + 3));
  v4 = std::vector<float>::vector(a1 + 6, (int)(a2 + 6));
  v5 = (a2[10] - a2[9]) >> 2;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  v6 = 4 * v5;
  if ( v5 != 0 )
  {
    if ( v5 > 0x3FFFFFFF )
      sub_3BCEB4(v4);
    v4 = (void *)operator new(4 * v5);
    v5 = (unsigned int)v4;
  }
  a1[11] = v5 + v6;
  a1[9] = v5;
  a1[10] = v5;
  v7 = (const void *)a2[9];
  v8 = (a2[10] - (int)v7) >> 2;
  v9 = 4 * v8;
  if ( v8 != 0 )
    v4 = j_memmove((void *)v5, v7, 4 * v8);
  a1[10] = v5 + v9;
  v10 = (a2[13] - a2[12]) >> 2;
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  v11 = 4 * v10;
  if ( v10 != 0 )
  {
    if ( v10 > 0x3FFFFFFF )
      sub_3BCEB4(v4);
    v10 = operator new(4 * v10);
  }
  a1[12] = v10;
  a1[13] = v10;
  a1[14] = v10 + v11;
  v12 = (const void *)a2[12];
  v13 = (a2[13] - (int)v12) >> 2;
  v14 = 4 * v13;
  if ( v13 != 0 )
    j_memmove((void *)v10, v12, 4 * v13);
  a1[13] = v10 + v14;
  return a1;
}

