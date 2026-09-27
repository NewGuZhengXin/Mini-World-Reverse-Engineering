// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerShore

//======================================================================
// GenLayerShore::GenLayerShore(unsigned long long,GenLayer *)
// address: 0x002B5B18   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN13GenLayerShoreC1EyP8GenLayer'
void __fastcall GenLayerShore::GenLayerShore(GenLayerShore *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_45E528;
}


//======================================================================
// GenLayerShore::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002B5B38   size: 0x1C0 (448 bytes)
//======================================================================
void __fastcall GenLayerShore::getInts(_DWORD *a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int i; // r4
  int v13; // r2
  int v14; // r1
  int v15; // r3
  int v16; // r1
  int v17; // [sp+14h] [bp-40h]
  int v18; // [sp+18h] [bp-3Ch]
  int v19; // [sp+1Ch] [bp-38h]
  int v20; // [sp+20h] [bp-34h]
  int v21; // [sp+24h] [bp-30h]
  int v22; // [sp+28h] [bp-2Ch]
  int v23; // [sp+2Ch] [bp-28h]
  int v24; // [sp+30h] [bp-24h]
  void *v27[4]; // [sp+44h] [bp-10h] BYREF

  v7 = a1[8];
  memset(v27, 0, 12);
  v20 = a5 + 2;
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v7 + 8))(
    v7,
    v27,
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
  v23 = 2 * v20;
  v17 = -4 * v20;
  v21 = a4;
  v19 = 0;
LABEL_6:
  if ( v21 - a4 < a6 )
  {
    v18 = 4 * (v19 + 1);
    v24 = 4 * (v23 - v19);
    v22 = a3;
    for ( i = 4 * (a5 + 2 + v19); ; i += 4 )
    {
      if ( v22 - a3 >= a5 )
      {
        v19 += v20;
        v17 -= 8;
        ++v21;
        v23 += v20;
        goto LABEL_6;
      }
      (*(void (__fastcall **)(_DWORD *, int, int))(*a1 + 4))(a1, v22, v21);
      v13 = *(_DWORD *)((char *)v27[0] + i + 4);
      v14 = *a2;
      switch ( v13 )
      {
        case 11:
          if ( *(_DWORD *)((char *)v27[0] + v18) == 0
            || *(_DWORD *)((char *)v27[0] + i + 8) == 0
            || *(_DWORD *)((char *)v27[0] + i) == 0
            || *(_DWORD *)((char *)v27[0] + v18 + v24) == 0 )
          {
            v15 = 12;
            v16 = v14 + v17;
LABEL_30:
            *(_DWORD *)(v16 + i) = v15;
            goto LABEL_32;
          }
          break;
        case 0:
        case 18:
        case 5:
LABEL_38:
          break;
        case 4:
          if ( *(_DWORD *)((char *)v27[0] + v18) == 4
            && *(_DWORD *)((char *)v27[0] + i + 8) == 4
            && *(_DWORD *)((char *)v27[0] + i) == 4
            && *(_DWORD *)((char *)v27[0] + v18 + v24) == 4 )
          {
            *(_DWORD *)(v14 + v17 + i) = 4;
            goto LABEL_32;
          }
          v15 = 20;
          v16 = v14 + v17;
          goto LABEL_30;
        default:
          if ( *(_DWORD *)((char *)v27[0] + v18) == 0
            || *(_DWORD *)((char *)v27[0] + i + 8) == 0
            || *(_DWORD *)((char *)v27[0] + i) == 0
            || *(_DWORD *)((char *)v27[0] + v18 + v24) == 0 )
          {
            v15 = 19;
            v16 = v14 + v17;
            goto LABEL_30;
          }
          goto LABEL_38;
      }
      *(_DWORD *)(v14 + v17 + i) = v13;
LABEL_32:
      ++v22;
      v18 += 4;
    }
  }
  if ( v27[0] != nullptr )
    operator delete(v27[0]);
}

