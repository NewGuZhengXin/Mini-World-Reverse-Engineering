// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerBiome

//======================================================================
// GenLayerBiome::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002D0B64   size: 0xF0 (240 bytes)
//======================================================================
void **__fastcall GenLayerBiome::getInts(GenLayer *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int j; // r7
  int v13; // r6
  int v14; // r3
  int v15; // r1
  int v16; // r2
  _DWORD *v17; // r6
  int v18; // r2
  int i; // [sp+8h] [bp-24h]
  int v21; // [sp+Ch] [bp-20h]
  void *v24[4]; // [sp+1Ch] [bp-10h] BYREF

  v7 = *((_DWORD *)a1 + 8);
  memset(v24, 0, 12);
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v7 + 8))(v7, v24, a3, a4, a5, a6);
  v9 = a6 * a5;
  v10 = (a2[1] - *a2) >> 2;
  if ( a6 * a5 <= v10 )
  {
    if ( v9 < v10 )
      a2[1] = *a2 + 4 * v9;
  }
  else
  {
    HIDWORD(v11) = v9 - v10;
    LODWORD(v11) = a2;
    std::vector<int>::_M_default_append(v11);
  }
  v21 = 0;
  for ( i = a4; i - a4 < a6; ++i )
  {
    for ( j = 0; j < a5; ++j )
    {
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, j + a3, i);
      v13 = 4 * (j + v21);
      v14 = *(_DWORD *)((char *)v24[0] + v13);
      if ( v14 != 0 )
      {
        if ( v14 == 11 )
        {
          *(_DWORD *)(*a2 + v13) = 11;
        }
        else
        {
          v15 = *((_DWORD *)a1 + 11);
          v16 = *((_DWORD *)a1 + 10);
          if ( v14 == 1 )
          {
            v17 = (_DWORD *)(*a2 + v13);
            *v17 = *(_DWORD *)(4 * GenLayer::nextInt(a1, (v15 - v16) >> 2) + *((_DWORD *)a1 + 10));
          }
          else
          {
            v18 = *(_DWORD *)(4 * GenLayer::nextInt(a1, (v15 - v16) >> 2) + *((_DWORD *)a1 + 10));
            if ( v18 != 6 )
              v18 = 8;
            *(_DWORD *)(*a2 + v13) = v18;
          }
        }
      }
      else
      {
        *(_DWORD *)(*a2 + v13) = 0;
      }
    }
    v21 += a5;
  }
  return std::_Vector_base<int>::~_Vector_base(v24);
}


//======================================================================
// GenLayerBiome::GenLayerBiome(unsigned long long,GenLayer *,TERRAIN_TYPE)
// address: 0x002D0C60   size: 0x7E (126 bytes)
//======================================================================
// Alternative name is '_ZN13GenLayerBiomeC1EyP8GenLayer12TERRAIN_TYPE'
GenLayer *__fastcall GenLayerBiome::GenLayerBiome(GenLayer *a1, unsigned __int64 a2, GenLayer *a3)
{
  int v5; // r4
  int v7; // [sp+Ch] [bp-4h] BYREF

  v5 = (int)a1;
  GenLayer::GenLayer(a1, a2, a3);
  v5 += 40;
  *(_DWORD *)a1 = &off_460390;
  *((_DWORD *)a1 + 10) = 0;
  *((_DWORD *)a1 + 11) = 0;
  *((_DWORD *)a1 + 12) = 0;
  v7 = 2;
  std::vector<int>::emplace_back<int>(v5, &v7);
  v7 = 3;
  std::vector<int>::emplace_back<int>(v5, &v7);
  v7 = 4;
  std::vector<int>::emplace_back<int>(v5, &v7);
  v7 = 5;
  std::vector<int>::emplace_back<int>(v5, &v7);
  v7 = 1;
  std::vector<int>::emplace_back<int>(v5, &v7);
  v7 = 6;
  std::vector<int>::emplace_back<int>(v5, &v7);
  v7 = 7;
  std::vector<int>::emplace_back<int>(v5, &v7);
  return a1;
}

