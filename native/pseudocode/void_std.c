// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: void_std

//======================================================================
// void std::__unguarded_linear_insert<BiomeSortUnit *>(BiomeSortUnit *)
// address: 0x002AA714   size: 0x2A (42 bytes)
//======================================================================
bool __fastcall std::__unguarded_linear_insert<BiomeSortUnit *>(float *a1)
{
  float v1; // r7
  float v2; // r6
  float *v3; // r4
  float *i; // r5
  _BOOL4 result; // r0

  v1 = *a1;
  v2 = a1[1];
  v3 = a1;
  for ( i = a1; ; v3 = i )
  {
    i -= 2;
    result = v2 > i[1];
    if ( v2 <= i[1] )
      break;
    *v3 = *i;
    v3[1] = i[1];
  }
  *v3 = v1;
  v3[1] = v2;
  return result;
}


//======================================================================
// void std::__insertion_sort<BiomeSortUnit *>(BiomeSortUnit *,BiomeSortUnit *)
// address: 0x002AA73E   size: 0x50 (80 bytes)
//======================================================================
__int64 __fastcall std::__insertion_sort<BiomeSortUnit *>(__int64 a1)
{
  float *v2; // r4
  float v3; // r7
  __int64 v5; // [sp+0h] [bp-Ch]

  v5 = a1;
  v2 = (float *)(a1 + 8);
  if ( (_DWORD)a1 != HIDWORD(a1) )
  {
    while ( v2 != (float *)HIDWORD(a1) )
    {
      v3 = v2[1];
      LODWORD(v5) = v2 + 2;
      if ( v3 <= *(float *)(a1 + 4) )
      {
        std::__unguarded_linear_insert<BiomeSortUnit *>(v2);
      }
      else
      {
        *((float *)&v5 + 1) = *v2;
        if ( (int)((int)v2 - a1) >> 3 != 0 )
          j_memmove((void *)(v5 - 8 * ((int)((int)v2 - a1) >> 3)), (const void *)a1, 8 * ((int)((int)v2 - a1) >> 3));
        *(float *)(a1 + 4) = v3;
        *(_DWORD *)a1 = HIDWORD(v5);
      }
      v2 += 2;
    }
  }
  return v5;
}


//======================================================================
// void std::__adjust_heap<BiomeSortUnit *,int,BiomeSortUnit>(BiomeSortUnit *,int,int,BiomeSortUnit)
// address: 0x002ABE48   size: 0xCA (202 bytes)
//======================================================================
bool __fastcall std::__adjust_heap<BiomeSortUnit *,int,BiomeSortUnit>(_BOOL4 result, int a2, int a3, int a4, float a5)
{
  int v5; // r4
  int i; // r5
  int v7; // r6
  int v8; // r3
  int v9; // r5
  int v10; // r5
  int v11; // r3
  int j; // r6
  int v13; // r7
  int v14; // r4
  int v15; // r5
  int varg_r3; // [sp+2Ch] [bp+18h]

  v5 = result;
  for ( i = a2; ; *(_DWORD *)(v5 + v7 + 4) = *(_DWORD *)(v5 + 8 * i + 4) )
  {
    v7 = 8 * i;
    if ( i >= (a3 - 1) / 2 )
      break;
    v8 = i + 1;
    v9 = 2 * (i + 1);
    result = *(float *)(v5 + 16 * v8 + 4) > *(float *)(v5 + 8 * (v9 + 0x1FFFFFFF) + 4);
    i = v9 - result;
    *(_DWORD *)(v5 + v7) = *(_DWORD *)(8 * i + v5);
  }
  if ( (a3 & 1) == 0 && i == (a3 - 2) / 2 )
  {
    v10 = 2 * (i + 1);
    v11 = 8 * (v10 + 0x1FFFFFFF);
    i = v10 - 1;
    *(_DWORD *)(v5 + v7) = *(_DWORD *)(v11 + v5);
    *(_DWORD *)(v5 + v7 + 4) = *(_DWORD *)(v5 + v11 + 4);
  }
  for ( j = (i - 1) / 2; ; j = (j - 1) / 2 )
  {
    v13 = 8 * i;
    if ( i <= a2 )
      break;
    v15 = v5 + 8 * j;
    result = *(float *)(v15 + 4) > a5;
    if ( *(float *)(v15 + 4) <= a5 )
      break;
    *(_DWORD *)(v5 + v13) = *(_DWORD *)v15;
    *(_DWORD *)(v5 + v13 + 4) = *(_DWORD *)(v15 + 4);
    i = j;
  }
  v14 = v5 + v13;
  *(_DWORD *)v14 = varg_r3;
  *(float *)(v14 + 4) = a5;
  return result;
}


//======================================================================
// void std::__pop_heap<BiomeSortUnit *>(BiomeSortUnit *,BiomeSortUnit *,BiomeSortUnit *)
// address: 0x002ABF18   size: 0x1C (28 bytes)
//======================================================================
int __fastcall std::__pop_heap<BiomeSortUnit *>(int *a1, int a2, int *a3)
{
  int v3; // r3
  float v5; // [sp+0h] [bp-10h]
  int v6; // [sp+0h] [bp-10h]

  v3 = *a3;
  v5 = *((float *)a3 + 1);
  *a3 = *a1;
  a3[1] = a1[1];
  std::__adjust_heap<BiomeSortUnit *,int,BiomeSortUnit>((_BOOL4)a1, 0, (a2 - (int)a1) >> 3, v3, v5);
  return v6;
}


//======================================================================
// void std::__introsort_loop<BiomeSortUnit *,int>(BiomeSortUnit *,BiomeSortUnit *,int)
// address: 0x002ABF34   size: 0x156 (342 bytes)
//======================================================================
int __fastcall std::__introsort_loop<BiomeSortUnit *,int>(int result, int *a2, int a3)
{
  int v3; // r4
  int v5; // r2
  int v6; // r5
  int i; // r6
  int v8; // r5
  float v9; // r3
  unsigned int v10; // r6
  int v11; // r2
  int *j; // r5
  int v13; // r3
  int v14; // [sp+10h] [bp-24h]
  float v15; // [sp+10h] [bp-24h]
  float v16; // [sp+14h] [bp-20h]
  int v17; // [sp+18h] [bp-1Ch]
  float v18; // [sp+18h] [bp-1Ch]
  float v20; // [sp+24h] [bp-10h]

  v3 = result;
  while ( 1 )
  {
    v5 = (int)a2 - v3;
    if ( (int)a2 - v3 <= 135 )
      return result;
    if ( a3 == 0 )
    {
      v6 = v5 >> 3;
      for ( i = ((v5 >> 3) - 2) >> 1; ; --i )
      {
        result = std::__adjust_heap<BiomeSortUnit *,int,BiomeSortUnit>(
                   v3,
                   i,
                   v6,
                   *(_DWORD *)(v3 + 8 * i),
                   *(float *)(v3 + 8 * i + 4));
        if ( i == 0 )
          break;
      }
      while ( (int)a2 - v3 > 15 )
      {
        a2 -= 2;
        result = std::__pop_heap<BiomeSortUnit *>((int *)v3, (int)a2, a2);
      }
      return result;
    }
    v8 = v3 + 8 * (v5 >> 4);
    --a3;
    v16 = *(float *)(v3 + 12);
    v20 = *(float *)(v8 + 4);
    v17 = *(_DWORD *)v3;
    v9 = *((float *)a2 - 1);
    v10 = v3 + 8;
    v14 = *(_DWORD *)(v3 + 4);
    if ( v16 <= v20 )
    {
      if ( v16 <= v9 )
      {
        if ( v20 <= v9 )
        {
          *(_DWORD *)v3 = *(_DWORD *)v8;
          *(_DWORD *)(v3 + 4) = *(_DWORD *)(v8 + 4);
          *(_DWORD *)v8 = v17;
          *(_DWORD *)(v8 + 4) = v14;
          goto LABEL_19;
        }
LABEL_17:
        *(_DWORD *)v3 = *(a2 - 2);
        *(_DWORD *)(v3 + 4) = *(a2 - 1);
        *(a2 - 2) = v17;
        *(a2 - 1) = v14;
        goto LABEL_19;
      }
      goto LABEL_15;
    }
    if ( v20 <= v9 )
    {
      if ( v16 > v9 )
        goto LABEL_17;
LABEL_15:
      v11 = *(_DWORD *)(v3 + 12);
      *(_DWORD *)v3 = *(_DWORD *)(v3 + 8);
      *(_DWORD *)(v3 + 4) = v11;
      *(_DWORD *)(v3 + 8) = v17;
      *(_DWORD *)(v3 + 12) = v14;
      goto LABEL_19;
    }
    *(_DWORD *)v3 = *(_DWORD *)v8;
    *(_DWORD *)(v3 + 4) = *(_DWORD *)(v8 + 4);
    *(_DWORD *)v8 = v17;
    *(_DWORD *)(v8 + 4) = v14;
LABEL_19:
    for ( j = a2; ; *((float *)j + 1) = v18 )
    {
      v15 = *(float *)(v3 + 4);
      while ( 1 )
      {
        v18 = *(float *)(v10 + 4);
        if ( v18 <= v15 )
          break;
        v10 += 8;
      }
      do
        j -= 2;
      while ( v15 > *((float *)j + 1) );
      if ( v10 >= (unsigned int)j )
        break;
      v13 = *(_DWORD *)v10;
      *(_DWORD *)v10 = *j;
      *(_DWORD *)(v10 + 4) = j[1];
      *j = v13;
      v10 += 8;
    }
    result = std::__introsort_loop<BiomeSortUnit *,int>(v10, a2, a3);
    a2 = (int *)v10;
  }
}


//======================================================================
// void std::swap<SubMeshInfo>(SubMeshInfo &,SubMeshInfo &)
// address: 0x002CF6B0   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall std::swap<SubMeshInfo>(int *result, int *a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3

  v2 = *result;
  v3 = result[1];
  *result = *a2;
  v4 = result[2];
  result[1] = a2[1];
  result[2] = a2[2];
  *a2 = v2;
  a2[1] = v3;
  a2[2] = v4;
  return result;
}


//======================================================================
// void std::swap<BackPackGrid>(BackPackGrid &,BackPackGrid &)
// address: 0x002DE9E4   size: 0x2E (46 bytes)
//======================================================================
void *__fastcall std::swap<BackPackGrid>(void *a1, void *a2)
{
  _BYTE v5[52]; // [sp+4h] [bp-38h] BYREF

  j_memcpy(v5, a1, sizeof(v5));
  j_memcpy(a1, a2, 0x34u);
  return j_memcpy(a2, v5, 0x34u);
}


//======================================================================
// void std::__unguarded_linear_insert<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering))
// address: 0x003255BC   size: 0x4C (76 bytes)
//======================================================================
void *__fastcall std::__unguarded_linear_insert<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
        _OWORD *a1,
        int (__fastcall *a2)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  void *v2; // r5
  char *i; // r6
  _QWORD v6[2]; // [sp+10h] [bp-14h] BYREF

  v2 = a1;
  *(_OWORD *)v6 = *a1;
  for ( i = (char *)a1; ; v2 = i )
  {
    i -= 16;
    if ( a2(v6[0], HIDWORD(v6[0]), v6[1], HIDWORD(v6[1])) == 0 )
      break;
    j_memcpy(v2, i, 0xCu);
  }
  return j_memcpy(v2, v6, 0xCu);
}


//======================================================================
// void std::__insertion_sort<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(SVectorOrdering *,SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering))
// address: 0x00325608   size: 0x9C (156 bytes)
//======================================================================
char *__fastcall std::__insertion_sort<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
        char *result,
        char *a2,
        int (__fastcall *a3)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  char *v3; // r4
  char *v4; // r5
  int v5; // r7
  char *v6; // r6
  int v7; // [sp+14h] [bp-18h]
  int v8; // [sp+18h] [bp-14h]
  int v9; // [sp+1Ch] [bp-10h]

  v3 = result;
  v4 = result + 16;
  if ( result != a2 )
  {
    while ( v4 != a2 )
    {
      result = (char *)a3(*(_DWORD *)v4, *((_DWORD *)v4 + 1), *((_DWORD *)v4 + 2), *((_DWORD *)v4 + 3));
      if ( result != nullptr )
      {
        v5 = (v4 - v3) >> 4;
        v8 = *(_DWORD *)v4;
        v9 = *((_DWORD *)v4 + 1);
        v7 = *((_DWORD *)v4 + 2);
        v6 = v4;
        while ( v5 > 0 )
        {
          v6 -= 16;
          result = (char *)j_memcpy(v6 + 16, v6, 0xCu);
          --v5;
        }
        *(_DWORD *)v3 = v8;
        *((_DWORD *)v3 + 1) = v9;
        *((_DWORD *)v3 + 2) = v7;
      }
      else
      {
        result = (char *)std::__unguarded_linear_insert<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
                           v4,
                           a3);
      }
      v4 += 16;
    }
  }
  return result;
}


//======================================================================
// void std::__adjust_heap<SVectorOrdering *,int,SVectorOrdering,bool (*)(SVectorOrdering,SVectorOrdering)>(SVectorOrdering *,int,int,SVectorOrdering,bool (*)(SVectorOrdering,SVectorOrdering))
// address: 0x003256A4   size: 0xEA (234 bytes)
//======================================================================
void *__fastcall std::__adjust_heap<SVectorOrdering *,int,SVectorOrdering,bool (*)(SVectorOrdering,SVectorOrdering)>(
        int a1,
        int a2,
        int a3,
        int a4,
        __int128 a5,
        int (__fastcall *a6)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  int i; // r4
  int v8; // r5
  int v9; // r5
  _DWORD *v11; // r5
  int j; // [sp+14h] [bp-20h]
  int v15; // [sp+1Ch] [bp-18h]
  __int128 v16; // [sp+20h] [bp-14h] BYREF

  v15 = (a3 - 1) / 2;
  for ( i = a2; i < v15; i = v8 )
  {
    v8 = 2 * (i + 1)
       - (a6(
            *(_DWORD *)(32 * (i + 1) + a1),
            *(_DWORD *)(a1 + 32 * (i + 1) + 4),
            *(_DWORD *)(a1 + 32 * (i + 1) + 8),
            *(_DWORD *)(a1 + 32 * (i + 1) + 12)) != 0);
    j_memcpy((void *)(a1 + 16 * i), (const void *)(a1 + 16 * v8), 0xCu);
  }
  if ( (a3 & 1) == 0 && i == (a3 - 2) / 2 )
  {
    v9 = 2 * (i + 1);
    j_memcpy((void *)(a1 + 16 * i), (const void *)(a1 + 16 * (v9 + 0xFFFFFFF)), 0xCu);
    i = v9 - 1;
  }
  v16 = a5;
  for ( j = (i - 1) / 2; i > a2; j = (j - 1) / 2 )
  {
    v11 = (_DWORD *)(a1 + 16 * j);
    if ( a6(*v11, v11[1], v11[2], v11[3]) == 0 )
      break;
    j_memcpy((void *)(a1 + 16 * i), v11, 0xCu);
    i = j;
  }
  return j_memcpy((void *)(a1 + 16 * i), &v16, 0xCu);
}


//======================================================================
// void std::__pop_heap<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(SVectorOrdering *,SVectorOrdering *,SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering))
// address: 0x00325794   size: 0x46 (70 bytes)
//======================================================================
void *__fastcall std::__pop_heap<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
        const void *a1,
        int a2,
        __int128 *a3,
        int (__fastcall *a4)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  __int128 v8; // [sp+20h] [bp-14h]

  v8 = *a3;
  j_memcpy(a3, a1, 0xCu);
  return std::__adjust_heap<SVectorOrdering *,int,SVectorOrdering,bool (*)(SVectorOrdering,SVectorOrdering)>(
           (int)a1,
           0,
           (a2 - (int)a1) >> 4,
           (int)a4,
           v8,
           a4);
}


//======================================================================
// void std::__heap_select<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(SVectorOrdering *,SVectorOrdering *,SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering))
// address: 0x003257DA   size: 0x7E (126 bytes)
//======================================================================
_OWORD *__fastcall std::__heap_select<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
        _OWORD *result,
        int a2,
        unsigned int a3,
        int (__fastcall *a4)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  _OWORD *v5; // r4
  int i; // r5
  int v8; // r3
  __int128 *j; // r5
  int v10; // [sp+20h] [bp-1Ch]

  v5 = result;
  if ( a2 - (int)result > 31 )
  {
    v10 = (a2 - (int)result) >> 4;
    for ( i = (v10 - 2) >> 1; ; --i )
    {
      result = std::__adjust_heap<SVectorOrdering *,int,SVectorOrdering,bool (*)(SVectorOrdering,SVectorOrdering)>(
                 (int)v5,
                 i,
                 v10,
                 v8,
                 v5[i],
                 a4);
      if ( i == 0 )
        break;
    }
  }
  for ( j = (__int128 *)a2; (unsigned int)j < a3; ++j )
  {
    result = (_OWORD *)a4(*(_DWORD *)j, *((_DWORD *)j + 1), *((_DWORD *)j + 2), *((_DWORD *)j + 3));
    if ( result != nullptr )
      result = std::__pop_heap<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(v5, a2, j, a4);
  }
  return result;
}


//======================================================================
// void std::swap<SVectorOrdering>(SVectorOrdering &,SVectorOrdering &)
// address: 0x00325858   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall std::swap<SVectorOrdering>(int *a1, _BYTE *a2)
{
  int v2; // r7
  int v3; // r6
  int v5; // r5
  void *result; // r0

  v2 = *a1;
  v3 = a1[1];
  v5 = a1[2];
  result = j_memcpy(a1, a2, 0xCu);
  a2[1] = BYTE1(v2);
  a2[2] = BYTE2(v2);
  a2[5] = BYTE1(v3);
  a2[6] = BYTE2(v3);
  *a2 = v2;
  a2[4] = v3;
  *((_WORD *)a2 + 4) = v5;
  a2[3] = HIBYTE(v2);
  a2[7] = HIBYTE(v3);
  a2[11] = HIBYTE(v5);
  a2[10] = BYTE2(v5);
  return result;
}


//======================================================================
// void std::__move_median_to_first<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(SVectorOrdering *,SVectorOrdering *,SVectorOrdering *,SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering))
// address: 0x00325894   size: 0xA4 (164 bytes)
//======================================================================
void *__fastcall std::__move_median_to_first<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
        int *a1,
        _DWORD *a2,
        _DWORD *a3,
        _BYTE *a4,
        int (__fastcall *a5)(_DWORD, _DWORD, _DWORD, _DWORD))
{
  int *v8; // r0
  _BYTE *v9; // r1

  if ( a5(*a2, a2[1], a2[2], a2[3]) == 0 )
  {
    if ( a5(*a2, a2[1], a2[2], a2[3]) == 0 )
    {
      if ( a5(*a3, a3[1], a3[2], a3[3]) == 0 )
        goto LABEL_3;
LABEL_5:
      v8 = a1;
      v9 = a4;
      return std::swap<SVectorOrdering>(v8, v9);
    }
LABEL_7:
    v8 = a1;
    v9 = a2;
    return std::swap<SVectorOrdering>(v8, v9);
  }
  if ( a5(*a3, a3[1], a3[2], a3[3]) == 0 )
  {
    if ( a5(*a2, a2[1], a2[2], a2[3]) != 0 )
      goto LABEL_5;
    goto LABEL_7;
  }
LABEL_3:
  v8 = a1;
  v9 = a3;
  return std::swap<SVectorOrdering>(v8, v9);
}


//======================================================================
// void std::__introsort_loop<SVectorOrdering *,int,bool (*)(SVectorOrdering,SVectorOrdering)>(SVectorOrdering *,SVectorOrdering *,int,bool (*)(SVectorOrdering,SVectorOrdering))
// address: 0x00325938   size: 0xC0 (192 bytes)
//======================================================================
int *__fastcall std::__introsort_loop<SVectorOrdering *,int,bool (*)(SVectorOrdering,SVectorOrdering)>(
        int *result,
        __int128 *a2,
        int a3,
        int (__fastcall *a4)(int, int, int, int))
{
  int *v4; // r5
  int *v6; // r4
  __int128 *v7; // [sp+14h] [bp-10h]

  v4 = result;
LABEL_2:
  if ( (char *)a2 - (char *)v4 > 271 )
  {
    if ( a3 != 0 )
    {
      --a3;
      v6 = v4 + 4;
      std::__move_median_to_first<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
        v4,
        v4 + 4,
        &v4[4 * (((char *)a2 - (char *)v4) >> 5)],
        (_BYTE *)a2 - 16,
        a4);
      v7 = a2;
      while ( 1 )
      {
        if ( a4(*v6, v6[1], v6[2], v6[3]) == 0 )
        {
          do
            --v7;
          while ( a4(*v4, v4[1], v4[2], v4[3]) != 0 );
          if ( v6 >= (int *)v7 )
          {
            result = (int *)std::__introsort_loop<SVectorOrdering *,int,bool (*)(SVectorOrdering,SVectorOrdering)>();
            a2 = (__int128 *)v6;
            goto LABEL_2;
          }
          std::swap<SVectorOrdering>(v6, v7);
        }
        v6 += 4;
      }
    }
    result = (int *)std::__heap_select<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
                      v4,
                      (int)a2,
                      (unsigned int)a2,
                      a4);
    while ( (char *)a2 - (char *)v4 > 31 )
    {
      --a2;
      result = (int *)std::__pop_heap<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(v4, (int)a2, a2, a4);
    }
  }
  return result;
}


//======================================================================
// void std::sort<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(SVectorOrdering *,SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering))
// address: 0x003259F8   size: 0x56 (86 bytes)
//======================================================================
char *__fastcall std::sort<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
        char *result,
        __int128 *a2,
        int (__fastcall *a3)(int, int, int, int))
{
  char *v3; // r4
  int v6; // r6
  int v7; // r0
  __int128 *v8; // r6

  v3 = result;
  if ( result != (char *)a2 )
  {
    v6 = (char *)a2 - result;
    v7 = j___clzsi2(((char *)a2 - result) >> 4);
    std::__introsort_loop<SVectorOrdering *,int,bool (*)(SVectorOrdering,SVectorOrdering)>(
      (int *)v3,
      a2,
      2 * (31 - v7),
      a3);
    if ( v6 <= 271 )
    {
      return std::__insertion_sort<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(v3, (char *)a2, a3);
    }
    else
    {
      v8 = (__int128 *)(v3 + 256);
      result = std::__insertion_sort<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(v3, v3 + 256, a3);
      while ( v8 != a2 )
        result = (char *)std::__unguarded_linear_insert<SVectorOrdering *,bool (*)(SVectorOrdering,SVectorOrdering)>(
                           v8++,
                           a3);
    }
  }
  return result;
}


//======================================================================
// void std::__convert_to_v<float>(char const*,float &,std::_Ios_Iostate &,int * const&)
// address: 0x003A5124   size: 0xD4 (212 bytes)
//======================================================================
void __fastcall std::__convert_to_v<float>(const char *a1, float *a2, _DWORD *a3)
{
  char *v6; // r0
  char *v7; // r4
  size_t v8; // r5
  void *v9; // r6
  float v10; // r0
  char *v11; // r3
  int v12; // r3
  char *v13; // [sp+4h] [bp-8h] BYREF

  v6 = j_setlocale(6, nullptr);
  v7 = v6;
  if ( v6 != nullptr )
  {
    v8 = j_strlen(v6) + 1;
    v9 = operator new[](v8);
    j_memcpy(v9, v7, v8);
    j_setlocale(6, "C");
  }
  else
  {
    v9 = nullptr;
  }
  v10 = j_strtod(a1, &v13);
  v11 = v13;
  *a2 = v10;
  if ( v11 == a1 || *v11 != 0 )
  {
    v12 = 0;
  }
  else
  {
    if ( COERCE_FLOAT((unsigned int)(2 * LODWORD(v10)) >> 1) <= 3.4028e38 && v10 <= 3.4028e38 && v10 >= -3.4028e38 )
      goto LABEL_8;
    if ( v10 > 0.0 )
    {
      *a2 = 3.4028e38;
      goto LABEL_7;
    }
    v12 = -8388609;
  }
  *(_DWORD *)a2 = v12;
LABEL_7:
  *a3 = 4;
LABEL_8:
  j_setlocale(6, (const char *)v9);
  if ( v9 != nullptr )
    operator delete[](v9);
}


//======================================================================
// void std::__convert_to_v<double>(char const*,double &,std::_Ios_Iostate &,int * const&)
// address: 0x003A5210   size: 0xCC (204 bytes)
//======================================================================
void __fastcall std::__convert_to_v<double>(const char *a1, int a2, _DWORD *a3)
{
  char *v6; // r0
  char *v7; // r4
  size_t v8; // r5
  void *v9; // r6
  double v10; // r0
  char *v11; // r3
  char *v12; // [sp+4h] [bp-8h] BYREF

  v6 = j_setlocale(6, nullptr);
  v7 = v6;
  if ( v6 != nullptr )
  {
    v8 = j_strlen(v6) + 1;
    v9 = operator new[](v8);
    j_memcpy(v9, v7, v8);
    j_setlocale(6, "C");
  }
  else
  {
    v9 = nullptr;
  }
  v10 = j_strtod(a1, &v12);
  v11 = v12;
  *(double *)a2 = v10;
  if ( v11 == a1 || *v11 != 0 )
  {
    *(_DWORD *)a2 = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *a3 = 4;
  }
  else if ( v10 > 1.79769313e308 || v10 < -1.79769313e308 )
  {
    *(_DWORD *)a2 = -1;
    if ( v10 <= 0.0 )
      *(_DWORD *)(a2 + 4) = -1048577;
    else
      *(_DWORD *)(a2 + 4) = 2146435071;
    *a3 = 4;
  }
  j_setlocale(6, (const char *)v9);
  if ( v9 != nullptr )
    operator delete[](v9);
}


//======================================================================
// void std::__convert_to_v<long double>(char const*,long double &,std::_Ios_Iostate &,int * const&)
// address: 0x003A5308   size: 0xC8 (200 bytes)
//======================================================================
void __fastcall std::__convert_to_v<long double>(const char *a1, double *a2, _DWORD *a3)
{
  char *v6; // r0
  char *v7; // r4
  size_t v8; // r5
  void *v9; // r6
  double v10; // r4

  v6 = j_setlocale(6, nullptr);
  v7 = v6;
  if ( v6 != nullptr )
  {
    v8 = j_strlen(v6) + 1;
    v9 = operator new[](v8);
    j_memcpy(v9, v7, v8);
    j_setlocale(6, "C");
  }
  else
  {
    v9 = nullptr;
  }
  if ( (unsigned int)(j_sscanf(a1, "%Lf", a2) + 1) <= 1 )
  {
    *(_DWORD *)a2 = 0;
    *((_DWORD *)a2 + 1) = 0;
    *a3 = 4;
  }
  else
  {
    v10 = *a2;
    if ( *a2 > 1.79769313e308 || v10 < -1.79769313e308 )
    {
      *(_DWORD *)a2 = -1;
      if ( v10 <= 0.0 )
        *((_DWORD *)a2 + 1) = -1048577;
      else
        *((_DWORD *)a2 + 1) = 2146435071;
      *a3 = 4;
    }
  }
  j_setlocale(6, (const char *)v9);
  if ( v9 != nullptr )
    operator delete[](v9);
}

