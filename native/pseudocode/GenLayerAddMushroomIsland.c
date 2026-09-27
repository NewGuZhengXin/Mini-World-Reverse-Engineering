// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerAddMushroomIsland

//======================================================================
// GenLayerAddMushroomIsland::GenLayerAddMushroomIsland(unsigned long long,GenLayer *)
// address: 0x0030173C   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN25GenLayerAddMushroomIslandC2EyP8GenLayer'
void __fastcall GenLayerAddMushroomIsland::GenLayerAddMushroomIsland(
        GenLayerAddMushroomIsland *this,
        unsigned __int64 a2,
        GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_462E18;
}


//======================================================================
// GenLayerAddMushroomIsland::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x0030175C   size: 0x142 (322 bytes)
//======================================================================
void __fastcall GenLayerAddMushroomIsland::getInts(GenLayer *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int v12; // r6
  int v13; // r7
  int v14; // [sp+8h] [bp-4Ch]
  int v15; // [sp+Ch] [bp-48h]
  int v16; // [sp+10h] [bp-44h]
  int v17; // [sp+14h] [bp-40h]
  int v18; // [sp+18h] [bp-3Ch]
  int v19; // [sp+1Ch] [bp-38h]
  int v22; // [sp+28h] [bp-2Ch]
  int v23; // [sp+30h] [bp-24h]
  int v24; // [sp+34h] [bp-20h]
  void *v25[4]; // [sp+44h] [bp-10h] BYREF

  v7 = *((_DWORD *)a1 + 8);
  memset(v25, 0, 12);
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v7 + 8))(
    v7,
    v25,
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
  v16 = a4;
  v14 = 0;
  v15 = 0;
  while ( v16 - a4 < a6 )
  {
    v18 = a3;
    v17 = 4 * (2 * a5 + 4 + v14);
    v12 = 4 * v14;
    while ( v18 - a3 < a5 )
    {
      v22 = *(_DWORD *)((char *)v25[0] + v12);
      v13 = *(_DWORD *)((char *)v25[0] + v12 + 8);
      v24 = *(_DWORD *)((char *)v25[0] + v17 + 8);
      v23 = *(_DWORD *)((char *)v25[0] + v17);
      v19 = *(_DWORD *)((char *)v25[0] + 4 * a5 + v12 + 12);
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, v18, v16);
      if ( (v24 | v13 | v22 | v23 | v19) != 0 || GenLayer::nextInt(a1, 0x64u) != 0 )
        *(_DWORD *)(*a2 + v15 + v12) = v19;
      else
        *(_DWORD *)(*a2 + v15 + v12) = 11;
      v12 += 4;
      v17 += 4;
      ++v18;
    }
    v15 -= 8;
    v14 += a5 + 2;
    ++v16;
  }
  if ( v25[0] != nullptr )
    operator delete(v25[0]);
}

