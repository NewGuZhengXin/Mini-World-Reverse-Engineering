// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerRiverInit

//======================================================================
// GenLayerRiverInit::GenLayerRiverInit(unsigned long long,GenLayer *)
// address: 0x002C1128   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN17GenLayerRiverInitC1EyP8GenLayer'
void __fastcall GenLayerRiverInit::GenLayerRiverInit(GenLayerRiverInit *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_45F300;
}


//======================================================================
// GenLayerRiverInit::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002C1148   size: 0xCA (202 bytes)
//======================================================================
void __fastcall GenLayerRiverInit::getInts(GenLayer *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int v12; // r7
  int i; // r4
  int v14; // r3
  int v15; // r0
  int v16; // [sp+8h] [bp-24h]
  int *v18; // [sp+10h] [bp-1Ch]
  void *v20[4]; // [sp+1Ch] [bp-10h] BYREF

  v7 = *((_DWORD *)a1 + 8);
  memset(v20, 0, 12);
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v7 + 8))(v7, v20, a3, a4, a5, a6);
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
  v12 = a4;
  v16 = 0;
  while ( v12 - a4 < a6 )
  {
    for ( i = 0; i < a5; ++i )
    {
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, i + a3, v12);
      v14 = 4 * (i + v16);
      v18 = (int *)(*a2 + v14);
      if ( *(int *)((char *)v20[0] + v14) <= 0 )
        v15 = 0;
      else
        v15 = GenLayer::nextInt(a1, 2u) + 2;
      *v18 = v15;
    }
    ++v12;
    v16 += a5;
  }
  if ( v20[0] != nullptr )
    operator delete(v20[0]);
}

