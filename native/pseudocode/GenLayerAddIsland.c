// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerAddIsland

//======================================================================
// GenLayerAddIsland::GenLayerAddIsland(unsigned long long,GenLayer *)
// address: 0x00296C74   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN17GenLayerAddIslandC1EyP8GenLayer'
void __fastcall GenLayerAddIsland::GenLayerAddIsland(GenLayerAddIsland *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_45C170;
}


//======================================================================
// GenLayerAddIsland::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x00296C94   size: 0x202 (514 bytes)
//======================================================================
void __fastcall GenLayerAddIsland::getInts(GenLayer *a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v7; // r0
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int i; // r6
  int v13; // r7
  unsigned int v14; // r1
  int v15; // r0
  unsigned int v16; // r7
  int v17; // r0
  int v18; // r3
  int v19; // r3
  int v20; // r2
  int v21; // r3
  int Int; // r0
  int v23; // [sp+8h] [bp-4Ch]
  unsigned int v24; // [sp+Ch] [bp-48h]
  unsigned int v25; // [sp+Ch] [bp-48h]
  int v26; // [sp+10h] [bp-44h]
  unsigned int v27; // [sp+14h] [bp-40h]
  unsigned int v28; // [sp+18h] [bp-3Ch]
  int v29; // [sp+1Ch] [bp-38h]
  int v30; // [sp+20h] [bp-34h]
  int v31; // [sp+24h] [bp-30h]
  int v32; // [sp+28h] [bp-2Ch]
  void *v35[4]; // [sp+44h] [bp-10h] BYREF

  v7 = *((_DWORD *)a1 + 8);
  memset(v35, 0, 12);
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v7 + 8))(
    v7,
    v35,
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
  v30 = a4;
  v29 = 0;
  v23 = 0;
LABEL_6:
  if ( v30 - a4 < a6 )
  {
    v32 = a3;
    v31 = 4 * (2 * a5 + 4 + v29);
    for ( i = 4 * v29; ; i += 4 )
    {
      if ( v32 - a3 >= a5 )
      {
        v23 -= 8;
        v29 += a5 + 2;
        ++v30;
        goto LABEL_6;
      }
      v24 = *(_DWORD *)((char *)v35[0] + i);
      v27 = *(_DWORD *)((char *)v35[0] + i + 8);
      v28 = *(_DWORD *)((char *)v35[0] + v31);
      v26 = *(_DWORD *)((char *)v35[0] + v31 + 8);
      v13 = *(_DWORD *)((char *)v35[0] + 4 * a5 + i + 12);
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, v32, v30);
      if ( v13 == 0 )
        break;
      if ( v13 <= 0 || v24 != 0 && v27 != 0 && v28 != 0 && v26 != 0 )
        goto LABEL_35;
      Int = GenLayer::nextInt(a1, 5u);
      v18 = *a2;
      if ( Int != 0 )
      {
        v19 = v18 + v23;
        goto LABEL_36;
      }
      if ( v13 == 8 )
        goto LABEL_32;
      *(_DWORD *)(v18 + v23 + i) = 0;
LABEL_37:
      v31 += 4;
      ++v32;
    }
    if ( (v27 | v24 | v28 | v26) != 0 )
    {
      v14 = 1;
      if ( v24 == 0 || (v15 = GenLayer::nextInt(a1, 1u), v14 = 2, v15 != 0) )
        v24 = 1;
      v16 = v14;
      if ( v27 == 0 || (v16 = v14 + 1, GenLayer::nextInt(a1, v14) != 0) )
        v27 = v24;
      v25 = v16;
      if ( v28 == 0 || (v25 = v16 + 1, GenLayer::nextInt(a1, v16) != 0) )
        v28 = v27;
      if ( v26 == 0 || GenLayer::nextInt(a1, v25) != 0 )
        v26 = v28;
      v17 = GenLayer::nextInt(a1, 3u);
      v18 = *a2;
      if ( v17 != 0 )
      {
        if ( v26 == 8 )
        {
LABEL_32:
          v20 = 9;
          v21 = v18 + v23;
        }
        else
        {
          v20 = 0;
          v21 = v18 + v23;
        }
        *(_DWORD *)(v21 + i) = v20;
        goto LABEL_37;
      }
      v19 = v18 + v23;
      v13 = v26;
    }
    else
    {
LABEL_35:
      v19 = *a2 + v23;
    }
LABEL_36:
    *(_DWORD *)(v19 + i) = v13;
    goto LABEL_37;
  }
  if ( v35[0] != nullptr )
    operator delete(v35[0]);
}

