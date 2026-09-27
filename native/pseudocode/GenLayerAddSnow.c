// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerAddSnow

//======================================================================
// GenLayerAddSnow::GenLayerAddSnow(unsigned long long,GenLayer *)
// address: 0x002A06A4   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN15GenLayerAddSnowC1EyP8GenLayer'
void __fastcall GenLayerAddSnow::GenLayerAddSnow(GenLayerAddSnow *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_45C998;
}


//======================================================================
// GenLayerAddSnow::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002A06C4   size: 0xF2 (242 bytes)
//======================================================================
void __fastcall GenLayerAddSnow::getInts(GenLayer *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int v12; // r7
  int v13; // r5
  int Int; // r0
  int v15; // r3
  int v16; // [sp+8h] [bp-2Ch]
  int v17; // [sp+Ch] [bp-28h]
  int v18; // [sp+10h] [bp-24h]
  int v19; // [sp+14h] [bp-20h]
  void *v22[4]; // [sp+24h] [bp-10h] BYREF

  v7 = *((_DWORD *)a1 + 8);
  memset(v22, 0, 12);
  (*(void (__fastcall **)(_DWORD, void **, int, int, int, int))(*(_DWORD *)v7 + 8))(
    *((_DWORD *)a1 + 8),
    v22,
    a3 - 1,
    a4 - 1,
    a5 + 2,
    a6 + 2);
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
  v19 = 4 * (a5 + 2);
  v16 = a4;
  v18 = 0;
  while ( v16 - a4 < a6 )
  {
    v12 = a3;
    v13 = 4 * v18;
    while ( v12 - a3 < a5 )
    {
      v17 = *(_DWORD *)((char *)v22[0] + v19 + v13 + 4);
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, v12, v16);
      if ( v17 != 0 )
      {
        Int = GenLayer::nextInt(a1, 5u);
        v15 = 1;
        if ( Int == 0 )
          v15 = 8;
        *(_DWORD *)(*a2 + v13) = v15;
      }
      else
      {
        *(_DWORD *)(*a2 + v13) = 0;
      }
      v13 += 4;
      ++v12;
    }
    v18 += a5;
    v19 += 8;
    ++v16;
  }
  if ( v22[0] != nullptr )
    operator delete(v22[0]);
}

