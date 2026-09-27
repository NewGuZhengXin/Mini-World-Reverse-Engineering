// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerHills

//======================================================================
// GenLayerHills::GenLayerHills(unsigned long long,GenLayer *)
// address: 0x002679E4   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN13GenLayerHillsC1EyP8GenLayer'
void __fastcall GenLayerHills::GenLayerHills(GenLayerHills *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_45B938;
}


//======================================================================
// GenLayerHills::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x00267A04   size: 0x178 (376 bytes)
//======================================================================
void __fastcall GenLayerHills::getInts(GenLayer *a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int i; // r5
  int v13; // r4
  int Int; // r0
  int v15; // r12
  int v16; // r3
  int v17; // [sp+10h] [bp-44h]
  int v18; // [sp+14h] [bp-40h]
  int v19; // [sp+18h] [bp-3Ch]
  int v20; // [sp+1Ch] [bp-38h]
  int v21; // [sp+20h] [bp-34h]
  int v22; // [sp+24h] [bp-30h]
  void *v25[4]; // [sp+44h] [bp-10h] BYREF

  v7 = *((_DWORD *)a1 + 8);
  memset(v25, 0, 12);
  v22 = a5 + 2;
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
  v17 = -4 * v22;
  v19 = a4;
  v18 = 0;
LABEL_6:
  if ( v19 - a4 < a6 )
  {
    v21 = 4 * (v18 + 1);
    v20 = a3;
    for ( i = 4 * (a5 + 2 + v18); ; i += 4 )
    {
      if ( v20 - a3 >= a5 )
      {
        v18 += v22;
        v17 -= 8;
        ++v19;
        goto LABEL_6;
      }
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, v20, v19);
      v13 = *(_DWORD *)((char *)v25[0] + i + 4);
      Int = GenLayer::nextInt(a1, 3u);
      v15 = *a2;
      if ( Int != 0 )
        goto LABEL_23;
      switch ( v13 )
      {
        case 2:
          v16 = 13;
          break;
        case 3:
          v16 = 14;
          break;
        case 6:
          v16 = 15;
          break;
        case 1:
          v16 = 3;
          break;
        case 8:
          v16 = 16;
          break;
        case 7:
          v16 = 17;
          break;
        default:
          goto LABEL_23;
      }
      if ( *(_DWORD *)((char *)v25[0] + v21) == v13
        && *(_DWORD *)((char *)v25[0] + i + 8) == v13
        && *(_DWORD *)((char *)v25[0] + i) == v13
        && *(_DWORD *)((char *)v25[0] + 8 * a5 + v21 + 16) == v13 )
      {
        *(_DWORD *)(v17 + v15 + i) = v16;
        goto LABEL_24;
      }
LABEL_23:
      *(_DWORD *)(v17 + v15 + i) = v13;
LABEL_24:
      v21 += 4;
      ++v20;
    }
  }
  if ( v25[0] != nullptr )
    operator delete(v25[0]);
}

