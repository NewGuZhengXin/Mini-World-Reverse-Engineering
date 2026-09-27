// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerRiver

//======================================================================
// GenLayerRiver::GenLayerRiver(unsigned long long,GenLayer *)
// address: 0x002E6444   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN13GenLayerRiverC2EyP8GenLayer'
void __fastcall GenLayerRiver::GenLayerRiver(GenLayerRiver *this, unsigned __int64 a2, GenLayer *a3)
{
  GenLayer::GenLayer(this, a2, a3);
  *(_DWORD *)this = &off_461910;
}


//======================================================================
// GenLayerRiver::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002E6464   size: 0x11C (284 bytes)
//======================================================================
void __fastcall GenLayerRiver::getInts(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v6; // r0
  unsigned int v8; // r3
  unsigned int v9; // r1
  __int64 v10; // r0
  int v11; // r2
  int v12; // r6
  int v13; // r7
  int v14; // r5
  int v15; // r3
  int v16; // r12
  int v17; // r1
  int v18; // r0
  int v19; // r1
  int v20; // [sp+Ch] [bp-38h]
  int v21; // [sp+10h] [bp-34h]
  int v22; // [sp+14h] [bp-30h]
  int v23; // [sp+18h] [bp-2Ch]
  int v24; // [sp+1Ch] [bp-28h]
  void *v25[4]; // [sp+34h] [bp-10h] BYREF

  v6 = *(_DWORD *)(a1 + 32);
  memset(v25, 0, 12);
  v22 = a5 + 2;
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v6 + 8))(
    v6,
    v25,
    a3 - 1,
    a4 - 1,
    a5 + 2,
    a6 + 2);
  v8 = a6 * a5;
  v9 = (a2[1] - *a2) >> 2;
  if ( a6 * a5 <= v9 )
  {
    if ( v8 < v9 )
      a2[1] = *a2 + 4 * v8;
  }
  else
  {
    HIDWORD(v10) = v8 - v9;
    LODWORD(v10) = a2;
    std::vector<int>::_M_default_append(v10);
  }
  v11 = 0;
  v12 = 0;
  v13 = -4 * v22;
  while ( v12 < a6 )
  {
    v14 = 0;
    v15 = 4 * (a5 + 2 + v11);
    while ( v14 < a5 )
    {
      ++v14;
      v16 = *(_DWORD *)((char *)v25[0] + v15);
      v21 = *(_DWORD *)((char *)v25[0] + v15 + 8);
      v23 = *((_DWORD *)v25[0] + v14 + v11);
      v24 = *((_DWORD *)v25[0] + 2 * a5 + v14 + v11 + 4);
      v17 = *(_DWORD *)((char *)v25[0] + v15 + 4);
      v20 = *a2;
      if ( v17 != 0
        && v16 != 0
        && v21 != 0
        && v23 != 0
        && v24 != 0
        && v17 == v16
        && v17 == v23
        && v17 == v21
        && v17 == v24 )
      {
        v18 = v20 + v13;
        v19 = -1;
      }
      else
      {
        v18 = v20 + v13;
        v19 = 18;
      }
      *(_DWORD *)(v18 + v15) = v19;
      v15 += 4;
    }
    ++v12;
    v13 -= 8;
    v11 += v22;
  }
  if ( v25[0] != nullptr )
    operator delete(v25[0]);
}

