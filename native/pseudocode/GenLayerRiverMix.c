// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerRiverMix

//======================================================================
// GenLayerRiverMix::GenLayerRiverMix(unsigned long long,GenLayer *,GenLayer *)
// address: 0x002D0834   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN16GenLayerRiverMixC1EyP8GenLayerS1_'
void __fastcall GenLayerRiverMix::GenLayerRiverMix(
        GenLayerRiverMix *this,
        unsigned __int64 a2,
        GenLayer *a3,
        GenLayer *a4)
{
  GenLayer::GenLayer(this, a2, nullptr);
  *(_DWORD *)this = &off_460368;
  *((_DWORD *)this + 10) = a3;
  *((_DWORD *)this + 11) = a4;
}


//======================================================================
// GenLayerRiverMix::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002D085C   size: 0xDE (222 bytes)
//======================================================================
void __fastcall GenLayerRiverMix::getInts(int a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v8; // r0
  int v10; // r5
  unsigned int v11; // r1
  __int64 v12; // r0
  int i; // r0
  int v14; // r2
  int v15; // r1
  int v16; // r6
  void *v18[3]; // [sp+10h] [bp-1Ch] BYREF
  void *v19[4]; // [sp+1Ch] [bp-10h] BYREF

  v8 = *(_DWORD *)(a1 + 40);
  memset(v18, 0, sizeof(v18));
  memset(v19, 0, 12);
  (*(void (__fastcall **)(int, void **, int, int, int, int))(*(_DWORD *)v8 + 8))(v8, v18, a3, a4, a5, a6);
  (*(void (__fastcall **)(_DWORD, void **, int, int, int, int))(**(_DWORD **)(a1 + 44) + 8))(
    *(_DWORD *)(a1 + 44),
    v19,
    a3,
    a4,
    a5,
    a6);
  v10 = a6 * a5;
  v11 = (a2[1] - *a2) >> 2;
  if ( a6 * a5 <= v11 )
  {
    if ( v10 < v11 )
      a2[1] = *a2 + 4 * v10;
  }
  else
  {
    HIDWORD(v12) = v10 - v11;
    LODWORD(v12) = a2;
    std::vector<int>::_M_default_append(v12);
  }
  for ( i = 0; i < v10; ++i )
  {
    v14 = *a2;
    v15 = *((_DWORD *)v18[0] + i);
    if ( v15 == 0 )
      goto LABEL_13;
    v16 = *((_DWORD *)v19[0] + i);
    if ( v16 < 0 )
      goto LABEL_13;
    if ( v15 == 8 )
    {
      v15 = 10;
LABEL_13:
      *(_DWORD *)(v14 + 4 * i) = v15;
      continue;
    }
    if ( (unsigned int)(v15 - 11) <= 1 )
      v16 = 12;
    *(_DWORD *)(v14 + 4 * i) = v16;
  }
  if ( v19[0] != nullptr )
    operator delete(v19[0]);
  if ( v18[0] != nullptr )
    operator delete(v18[0]);
}


//======================================================================
// GenLayerRiverMix::initWorldGenSeed(unsigned long long)
// address: 0x002D093A   size: 0x2A (42 bytes)
//======================================================================
int __fastcall GenLayerRiverMix::initWorldGenSeed(GenLayerRiverMix *this, unsigned __int64 a2)
{
  (***((void (__fastcall ****)(_DWORD, _DWORD, _DWORD, _DWORD))this + 10))(
    *((_DWORD *)this + 10),
    ***((_DWORD ***)this + 10),
    a2,
    HIDWORD(a2));
  (***((void (__fastcall ****)(_DWORD, _DWORD, _DWORD, _DWORD))this + 11))(
    *((_DWORD *)this + 11),
    ***((_DWORD ***)this + 11),
    a2,
    HIDWORD(a2));
  return GenLayer::initWorldGenSeed(this, a2);
}

