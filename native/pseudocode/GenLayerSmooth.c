// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerSmooth

//======================================================================
// GenLayerSmooth::GenLayerSmooth(unsigned long long,GenLayer *)
// address: 0x002B4FE8   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN14GenLayerSmoothC1EyP8GenLayer'
void __fastcall GenLayerSmooth::GenLayerSmooth(GenLayerSmooth *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_45E3B0;
}


//======================================================================
// GenLayerSmooth::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002B5008   size: 0x138 (312 bytes)
//======================================================================
void __fastcall GenLayerSmooth::getInts(GenLayer *a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int i; // r7
  int v13; // r5
  int v14; // r2
  int v15; // [sp+8h] [bp-44h]
  int v16; // [sp+Ch] [bp-40h]
  int v17; // [sp+10h] [bp-3Ch]
  int v18; // [sp+14h] [bp-38h]
  int v19; // [sp+18h] [bp-34h]
  int v20; // [sp+1Ch] [bp-30h]
  int v21; // [sp+20h] [bp-2Ch]
  void *v24[4]; // [sp+3Ch] [bp-10h] BYREF

  v7 = *((_DWORD *)a1 + 8);
  memset(v24, 0, 12);
  v20 = a5 + 2;
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v7 + 8))(
    v7,
    v24,
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
  v21 = -4 * v20;
  v17 = a4;
  v15 = 0;
LABEL_6:
  if ( v17 - a4 < a6 )
  {
    v18 = a3;
    v19 = 4 * (v15 + 1);
    for ( i = 4 * (a5 + 2 + v15); ; i += 4 )
    {
      if ( v18 - a3 >= a5 )
      {
        v15 += v20;
        v21 -= 8;
        ++v17;
        goto LABEL_6;
      }
      v13 = *(_DWORD *)((char *)v24[0] + v19);
      v16 = *(_DWORD *)((char *)v24[0] + i);
      v14 = *(_DWORD *)((char *)v24[0] + 8 * a5 + v19 + 16);
      if ( v16 != *(_DWORD *)((char *)v24[0] + i + 8) )
        break;
      if ( v13 != v14 )
        goto LABEL_15;
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, v18, v17);
      if ( GenLayer::nextInt(a1, 2u) == 0 )
        goto LABEL_15;
LABEL_16:
      *(_DWORD *)(*a2 + v21 + i) = v13;
      v19 += 4;
      ++v18;
    }
    if ( v13 == v14 )
      goto LABEL_16;
    v16 = *(_DWORD *)((char *)v24[0] + i + 4);
LABEL_15:
    v13 = v16;
    goto LABEL_16;
  }
  if ( v24[0] != nullptr )
    operator delete(v24[0]);
}

