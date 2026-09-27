// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::TArray2D

//======================================================================
// anl::TArray2D<double>::destroy(void)
// address: 0x002E1F80   size: 0x18 (24 bytes)
//======================================================================
void __fastcall anl::TArray2D<double>::destroy(int a1)
{
  void *v2; // r0

  v2 = *(void **)a1;
  if ( v2 != nullptr )
    operator delete[](v2);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
}


//======================================================================
// anl::TArray2D<double>::TArray2D(int,int)
// address: 0x002E1F98   size: 0x70 (112 bytes)
//======================================================================
// Alternative name is '_ZN3anl8TArray2DIdEC1Eii'
_DWORD *__fastcall anl::TArray2D<double>::TArray2D(_DWORD *a1, int a2, int a3)
{
  unsigned int v6; // r0
  int v7; // r0
  int i; // r0
  int j; // r1
  _DWORD *v10; // r5

  *a1 = 0;
  a1[1] = a2;
  a1[2] = a3;
  anl::TArray2D<double>::destroy((int)a1);
  if ( a2 != 0 && a3 != 0 )
  {
    if ( (unsigned int)(a3 * a2) > 0xFE00000 )
      v6 = -1;
    else
      v6 = 8 * a3 * a2;
    v7 = operator new[](v6);
    a1[1] = a2;
    *a1 = v7;
    a1[2] = a3;
    if ( v7 != 0 )
    {
      for ( i = 0; i < a1[1]; ++i )
      {
        for ( j = 0; j < a1[2]; ++j )
        {
          v10 = (_DWORD *)(*a1 + 8 * (a1[1] * j + i));
          *v10 = 0;
          v10[1] = 0;
        }
      }
    }
  }
  return a1;
}


//======================================================================
// anl::TArray2D<double>::set(unsigned int,unsigned int,double)
// address: 0x0031D190   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall anl::TArray2D<double>::set(_DWORD *result, int a2, int a3, int a4, int a5, int a6)
{
  int v6; // r4
  _DWORD *v7; // r3

  v6 = result[1];
  if ( a2 < v6 && a3 < result[2] && *result != 0 )
  {
    v7 = (_DWORD *)(*result + 8 * (a2 + a3 * v6));
    *v7 = a5;
    v7[1] = a6;
  }
  return result;
}


//======================================================================
// anl::TArray2D<TVec4D<float>>::set(unsigned int,unsigned int,TVec4D<float>)
// address: 0x0031E118   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall anl::TArray2D<TVec4D<float>>::set(_DWORD *result, int a2, int a3, _DWORD *a4)
{
  int v4; // r4
  _DWORD *v5; // r1
  int v6; // r2
  int v7; // r4

  v4 = result[1];
  if ( a2 < v4 && a3 < result[2] )
  {
    result = (_DWORD *)*result;
    if ( result != nullptr )
    {
      v5 = &result[4 * a2 + 4 * a3 * v4];
      result = (_DWORD *)*a4;
      v6 = a4[1];
      v7 = a4[2];
      *v5 = *a4;
      v5[1] = v6;
      v5[2] = v7;
      v5[3] = a4[3];
    }
  }
  return result;
}


//======================================================================
// anl::TArray2D<double>::get(int,int)
// address: 0x00328AD8   size: 0x28 (40 bytes)
//======================================================================
__int64 __fastcall anl::TArray2D<double>::get(_DWORD *a1, int a2, int a3)
{
  int v3; // r4

  v3 = a1[1];
  if ( a2 < v3 && a3 < a1[2] && *a1 != 0 )
    return *(_QWORD *)(*a1 + 8 * (a3 * v3 + a2));
  else
    return 0;
}


//======================================================================
// anl::TArray2D<TVec4D<float>>::resize(int,int)
// address: 0x00328DB8   size: 0x8E (142 bytes)
//======================================================================
unsigned __int64 __fastcall anl::TArray2D<TVec4D<float>>::resize(unsigned int a1, int a2, unsigned int a3)
{
  void *v4; // r0
  unsigned int v6; // r0
  _DWORD *v7; // r0
  int v8; // r7
  _DWORD *v9; // r3
  int i; // r2
  int j; // r3
  _DWORD *v12; // r0
  unsigned __int64 v14; // [sp+0h] [bp-Ch]

  v14 = __PAIR64__(a3, a1);
  v4 = *(void **)a1;
  if ( v4 != nullptr )
    operator delete[](v4);
  *(_DWORD *)a1 = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  if ( a2 != 0 && HIDWORD(v14) != 0 )
  {
    v6 = 16 * HIDWORD(v14) * a2;
    if ( (unsigned int)(HIDWORD(v14) * a2) > 0x7F00000 )
      v6 = -1;
    v7 = (_DWORD *)operator new[](v6);
    v8 = HIDWORD(v14) * a2 - 2;
    v9 = v7;
    do
    {
      --v8;
      *v9 = 0;
      v9[1] = 0;
      v9[2] = 0;
      v9[3] = 0;
      v9 += 4;
    }
    while ( v8 != -2 );
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a1 + 4) = a2;
    *(_DWORD *)(a1 + 8) = HIDWORD(v14);
    if ( v7 != nullptr )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
      {
        for ( j = 0; j < *(_DWORD *)(a1 + 8); ++j )
        {
          v12 = (_DWORD *)(*(_DWORD *)a1 + 16 * (*(_DWORD *)(a1 + 4) * j + i));
          *v12 = 0;
          v12[1] = 0;
          v12[2] = 0;
          v12[3] = 0;
        }
      }
    }
  }
  return v14;
}


//======================================================================
// anl::TArray2D<TVec4D<float>>::set(int,int,TVec4D<float>)
// address: 0x00328E46   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall anl::TArray2D<TVec4D<float>>::set(_DWORD *result, int a2, int a3, _DWORD *a4)
{
  int v4; // r4
  _DWORD *v5; // r1
  int v6; // r2
  int v7; // r4

  v4 = result[1];
  if ( a2 < v4 && a3 < result[2] && a2 >= 0 && a3 >= 0 )
  {
    result = (_DWORD *)*result;
    if ( result != nullptr )
    {
      v5 = &result[4 * a3 * v4 + 4 * a2];
      result = (_DWORD *)*a4;
      v6 = a4[1];
      v7 = a4[2];
      *v5 = *a4;
      v5[1] = v6;
      v5[2] = v7;
      v5[3] = a4[3];
    }
  }
  return result;
}

