// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: PathEntity

//======================================================================
// PathEntity::release(void)
// address: 0x002D5A5E   size: 0x20 (32 bytes)
//======================================================================
void __fastcall PathEntity::release(PathEntity *this)
{
  int v2; // r3
  void *v3; // r0

  v2 = *((_DWORD *)this + 5) - 1;
  *((_DWORD *)this + 5) = v2;
  if ( v2 <= 0 )
  {
    v3 = *(void **)this;
    if ( v3 != nullptr )
      operator delete(v3);
    operator delete(this);
  }
}


//======================================================================
// PathEntity::PathEntity(std::vector<PathPoint,std::allocator<PathPoint>> &)
// address: 0x002D5B4C   size: 0x92 (146 bytes)
//======================================================================
// Alternative name is '_ZN10PathEntityC1ERSt6vectorI9PathPointSaIS1_EE'
_DWORD *__fastcall PathEntity::PathEntity(_DWORD *a1, char **a2)
{
  unsigned int v3; // r7
  _DWORD *v5; // r0
  char *v6; // r1
  char *v7; // r7
  _DWORD *v8; // r2
  char *i; // r3

  v3 = -1431655765 * ((a2[1] - *a2) >> 2);
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  if ( v3 != 0 )
  {
    if ( v3 > 0x15555555 )
      sub_3BCEB4(a1);
    v5 = (_DWORD *)operator new(12 * v3);
  }
  else
  {
    v5 = nullptr;
  }
  *a1 = v5;
  a1[1] = v5;
  a1[2] = &v5[3 * v3];
  v6 = *a2;
  v7 = a2[1];
  v8 = v5;
  for ( i = *a2; i != v7; i += 12 )
  {
    if ( v8 != nullptr )
    {
      *v8 = *(_DWORD *)i;
      v8[1] = *((_DWORD *)i + 1);
      v8[2] = *((_DWORD *)i + 2);
    }
    v8 += 3;
  }
  a1[1] = &v5[3 * ((-1431655764 * ((unsigned int)(i - v6) >> 2)) >> 2)];
  a1[3] = 0;
  a1[4] = -1431655765 * ((a2[1] - *a2) >> 2);
  a1[5] = 1;
  return a1;
}


//======================================================================
// PathEntity::PathEntity(void)
// address: 0x002D5BEC   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN10PathEntityC1Ev'
void __fastcall PathEntity::PathEntity(PathEntity *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = 1;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
}


//======================================================================
// PathEntity::getVectorFromIndex(ClientActor *,int)
// address: 0x002D5BFE   size: 0x3A (58 bytes)
//======================================================================
PathEntity *__fastcall PathEntity::getVectorFromIndex(PathEntity *this, ClientActor *a2, int a3, int a4)
{
  int *v5; // r6
  int v6; // r7
  unsigned int v7; // r0
  int v8; // r2
  unsigned int v9; // r3

  v5 = (int *)(*(_DWORD *)a2 + 12 * a4);
  v6 = 100 * v5[1];
  v7 = 50 * CoordDivBlock(*(_DWORD *)(*(_DWORD *)(a3 + 68) + 20) + 100);
  v8 = *v5;
  v9 = 100 * v5[2] + v7;
  *((_DWORD *)this + 1) = v6;
  *(_DWORD *)this = 100 * v8 + v7;
  *((_DWORD *)this + 2) = v9;
  return this;
}

