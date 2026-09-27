// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GenLayerIsland

//======================================================================
// GenLayerIsland::GenLayerIsland(unsigned long long)
// address: 0x002A5984   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN14GenLayerIslandC1Ey'
void __fastcall GenLayerIsland::GenLayerIsland(GenLayerIsland *this, unsigned __int64 a2)
{
  GenLayer::GenLayer(this, a2, nullptr);
  *(_DWORD *)this = &off_45CF88;
}


//======================================================================
// GenLayerIsland::getInts(std::vector<int,std::allocator<int>> &,int,int,int,int)
// address: 0x002A59A4   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall GenLayerIsland::getInts(GenLayer *a1, int *a2, int a3, int a4, int a5, int a6)
{
  int v8; // r2
  unsigned int v9; // r3
  unsigned int v10; // r1
  __int64 v11; // r0
  int j; // r5
  _DWORD *v13; // r7
  int result; // r0
  int i; // [sp+0h] [bp-14h]
  int v18; // [sp+Ch] [bp-8h]

  v8 = *a2;
  v9 = a6 * a5;
  v10 = (a2[1] - *a2) >> 2;
  if ( a6 * a5 <= v10 )
  {
    if ( v9 < v10 )
      a2[1] = v8 + 4 * v9;
  }
  else
  {
    HIDWORD(v11) = v9 - v10;
    LODWORD(v11) = a2;
    std::vector<int>::_M_default_append(v11);
  }
  v18 = 0;
  for ( i = a4; i - a4 < a6; ++i )
  {
    for ( j = 0; j < a5; ++j )
    {
      (*(void (__fastcall **)(GenLayer *, int, int))(*(_DWORD *)a1 + 4))(a1, j + a3, i);
      v13 = (_DWORD *)(*a2 + 4 * (j + v18));
      *v13 = GenLayer::nextInt(a1, 0xAu) == 0;
    }
    v18 += a5;
  }
  result = a3;
  if ( a3 > -a5 && a3 <= 0 && a4 > -a6 && a4 <= 0 )
    *(_DWORD *)(4 * (-a4 * a5 - a3) + *a2) = 1;
  return result;
}

