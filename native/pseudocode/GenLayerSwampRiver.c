// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerSwampRiver

//======================================================================
// GenLayerSwampRiver::GenLayerSwampRiver(unsigned long long,GenLayer *)
// address: 0x002BC620   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN18GenLayerSwampRiverC1EyP8GenLayer'
void __fastcall GenLayerSwampRiver::GenLayerSwampRiver(GenLayerSwampRiver *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_45EA28;
}


//======================================================================
// GenLayerSwampRiver::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002BC640   size: 0x104 (260 bytes)
//======================================================================
void __fastcall GenLayerSwampRiver::getInts(GenLayer *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int i; // r5
  int v13; // r7
  GenLayer *v14; // r0
  unsigned int v15; // r1
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
  v17 = a4;
  v18 = 0;
LABEL_6:
  if ( v17 - a4 < a6 )
  {
    v16 = a3;
    for ( i = 4 * v18; ; i += 4 )
    {
      if ( v16 - a3 >= a5 )
      {
        v18 += a5;
        v19 += 8;
        ++v17;
        goto LABEL_6;
      }
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, v16, v17);
      v13 = *(_DWORD *)((char *)v22[0] + v19 + i + 4);
      if ( v13 == 5 )
      {
        v14 = a1;
        v15 = 6;
      }
      else
      {
        if ( v13 != 7 && v13 != 17 )
          goto LABEL_19;
        v14 = a1;
        v15 = 8;
      }
      if ( GenLayer::nextInt(v14, v15) == 0 )
      {
        *(_DWORD *)(*a2 + i) = 18;
        goto LABEL_20;
      }
LABEL_19:
      *(_DWORD *)(*a2 + i) = v13;
LABEL_20:
      ++v16;
    }
  }
  if ( v22[0] != nullptr )
    operator delete(v22[0]);
}

