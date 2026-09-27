// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_200000

//======================================================================
// sub_206054
// address: 0x00206054   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_206054(int a1, int a2, int a3)
{
  return iread(a2, 1, a3);
}


//======================================================================
// sub_20CBF2
// address: 0x0020CBF2   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_20CBF2(_DWORD *a1, _DWORD *a2)
{
  *a2 = *a1;
  a2[1] = a1[1];
  return 0;
}


//======================================================================
// sub_20CBFE
// address: 0x0020CBFE   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_20CBFE(int result, int a2, int a3, int *a4, int *a5)
{
  int v5; // r4

  v5 = result;
  if ( result > a3 )
    goto LABEL_8;
  if ( a2 != result )
  {
    if ( result >= a3 )
    {
LABEL_8:
      if ( a2 < a3 || a2 > result )
        goto LABEL_9;
      v5 = a3;
      a3 = result;
    }
    else if ( a2 < result || a2 > a3 )
    {
LABEL_9:
      result = FT_MulDiv(a2 - result, a2 - result, result - 2 * a2 + a3);
      a3 = v5 - result;
      v5 -= result;
    }
  }
  if ( v5 < *a4 )
    *a4 = v5;
  if ( a3 > *a5 )
    *a5 = a3;
  return result;
}


//======================================================================
// sub_20CC52
// address: 0x0020CC52   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_20CC52(int *a1, int *a2, int *a3)
{
  int v4; // r1
  int v7; // r1

  v4 = *a1;
  if ( *a1 < a3[2] || v4 > a3[4] )
    sub_20CBFE(*a3, v4, *a2, a3 + 2, a3 + 4);
  v7 = a1[1];
  if ( v7 < a3[3] || v7 > a3[5] )
    sub_20CBFE(a3[1], v7, a2[1], a3 + 3, a3 + 5);
  *a3 = *a2;
  a3[1] = a2[1];
  return 0;
}


//======================================================================
// sub_20CCA4
// address: 0x0020CCA4   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_20CCA4(int result, int a2, int a3, int a4, int *a5, int *a6)
{
  int v7; // r5
  int v8; // r4
  int v9; // r4
  int v11; // [sp+8h] [bp-Ch]

  v7 = result;
  if ( (unsigned int)(a4 - 1) <= 0xFFFE )
  {
    v11 = FT_MulFix(a4, a4);
    v8 = v7 + FT_MulFix(a2 - v7, 2 * a4);
    result = FT_MulFix(a3 - 2 * a2 + v7, v11);
    v9 = v8 + result;
    if ( v9 < *a5 )
      *a5 = v9;
    if ( v9 > *a6 )
      *a6 = v9;
  }
  return result;
}


//======================================================================
// sub_20CCFC
// address: 0x0020CCFC   size: 0x14E (334 bytes)
//======================================================================
int __fastcall sub_20CCFC(int a1, int a2, int a3, int a4, int *a5, int *a6)
{
  int result; // r0
  int v8; // r6
  unsigned int v9; // r3
  char v10; // r2
  char v11; // r2
  int v12; // r3
  int v13; // r0
  int v14; // r0
  int v15; // [sp+Ch] [bp-18h]
  int v18; // [sp+18h] [bp-Ch]
  int v19; // [sp+18h] [bp-Ch]
  int v20; // [sp+1Ch] [bp-8h]

  result = *a5;
  if ( a1 >= *a5 )
  {
    if ( a1 > *a6 )
      *a6 = a1;
  }
  else
  {
    *a5 = a1;
  }
  if ( a4 >= *a5 )
  {
    result = *a6;
    if ( a4 > *a6 )
      *a6 = a4;
  }
  else
  {
    *a5 = a4;
  }
  if ( a1 > a4 )
  {
    result = a2;
    if ( a1 >= a2 && a2 >= a4 && a1 >= a3 && a3 >= a4 )
      return result;
  }
  else if ( a1 <= a2 && a2 <= a4 && a1 <= a3 && a3 <= a4 )
  {
    return result;
  }
  v15 = a4 - 3 * a3 + 3 * a2 - a1;
  v8 = a3 - 2 * a2 + a1;
  v18 = a2 - a1;
  result = (a2 - a1) >> 31;
  v9 = (v15 + (v15 >> 31)) ^ (v15 >> 31) | (v8 + (v8 >> 31)) ^ (v8 >> 31) | (a2 - a1 + result) ^ result;
  if ( v9 == 0 )
    return result;
  if ( v9 <= 0x7FFFFF )
  {
    if ( v9 <= (unsigned int)"valid 'self' in function 'OnMouseDown'" )
    {
      v11 = 0;
      do
      {
        ++v11;
        v9 *= 2;
      }
      while ( v9 <= (unsigned int)"valid 'self' in function 'OnMouseDown'" );
      v8 <<= v11;
      result = v15 << v11;
      v15 <<= v11;
      v18 <<= v11;
    }
  }
  else
  {
    v10 = 0;
    do
    {
      ++v10;
      v9 >>= 1;
    }
    while ( v9 > 0x7FFFFF );
    v8 >>= v10;
    v15 >>= v10;
    v18 >>= v10;
  }
  if ( v15 != 0 )
  {
    v20 = FT_MulFix(v8, v8);
    result = v20 - FT_MulFix(v15, v18);
    if ( result < 0 )
      return result;
    if ( result != 0 )
    {
      v19 = FT_SqrtFixed();
      v13 = FT_DivFix(v8 - v19, v15);
      sub_20CCA4(a1, a2, a3, -v13, a5, a6);
      v14 = v8 + v19;
    }
    else
    {
      v14 = v8;
    }
    v12 = -FT_DivFix(v14, v15);
  }
  else
  {
    if ( v8 == 0 )
      return result;
    v12 = FT_DivFix(v18, v8) / -2;
  }
  return sub_20CCA4(a1, a2, a3, v12, a5, a6);
}


//======================================================================
// sub_20CE54
// address: 0x0020CE54   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_20CE54(int *a1, int *a2, int *a3, int *a4)
{
  int v6; // r1
  int v7; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r1
  int v13; // r0
  int v14; // r2
  int v15; // r3

  v6 = *a1;
  v7 = a4[2];
  v10 = *a2;
  if ( v6 < v7 || (v11 = a4[4], v6 > v11) || v10 < v7 || v10 > v11 )
    sub_20CCFC(*a4, v6, v10, *a3, a4 + 2, a4 + 4);
  v12 = a1[1];
  v13 = a4[3];
  v14 = a2[1];
  if ( v12 < v13 || (v15 = a4[5], v12 > v15) || v14 < v13 || v14 > v15 )
    sub_20CCFC(a4[1], v12, v14, a3[1], a4 + 3, a4 + 5);
  *a4 = *a3;
  a4[1] = a3[1];
  return 0;
}


//======================================================================
// sub_20D714
// address: 0x0020D714   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_20D714(_DWORD *result, _DWORD *a2)
{
  int v2; // r3
  int v3; // r3

  v2 = result[5] << 6;
  *a2 = v2;
  a2[2] = v2 + (result[8] << 6);
  v3 = result[6] << 6;
  a2[3] = v3;
  a2[1] = v3 - (result[7] << 6);
  return result;
}


//======================================================================
// sub_20D734
// address: 0x0020D734   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_20D734(int a1, _DWORD *a2)
{
  int *v2; // r0
  int v3; // r2
  int v4; // r4
  int v5; // r5
  int v6; // r4

  v2 = (int *)(a1 + 20);
  a2[18] = 1869968492;
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v2 += 3;
  a2[27] = v3;
  a2[28] = v4;
  a2[29] = v5;
  v6 = v2[1];
  a2[30] = *v2;
  a2[31] = v6;
  a2[31] &= ~1u;
  return 0;
}


//======================================================================
// sub_20D758
// address: 0x0020D758   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_20D758(int a1, _DWORD *a2)
{
  int *v2; // r3

  v2 = *(int **)a1;
  a2[5] = *(_DWORD *)(a1 + 20);
  a2[6] = *(_DWORD *)(a1 + 24);
  return FT_Bitmap_Copy(v2, (int *)(a1 + 28), a2 + 7);
}


//======================================================================
// sub_20D774
// address: 0x0020D774   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_20D774(int a1)
{
  return FT_Bitmap_Done(*(_DWORD **)a1, (_DWORD *)(a1 + 28));
}


//======================================================================
// sub_20D782
// address: 0x0020D782   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_20D782(int a1)
{
  return FT_Outline_Get_CBox(a1 + 20);
}


//======================================================================
// sub_20D78C
// address: 0x0020D78C   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_20D78C(int result, int a2, _DWORD *a3)
{
  int v3; // r5

  v3 = result;
  if ( a2 != 0 )
    result = FT_Outline_Transform(result + 20);
  if ( a3 != nullptr )
    return FT_Outline_Translate(v3 + 20, *a3, a3[1]);
  return result;
}


//======================================================================
// sub_20D7AC
// address: 0x0020D7AC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_20D7AC(int a1, int a2)
{
  int v2; // r6
  int v4; // r5

  v2 = a2 + 20;
  v4 = FT_Outline_New(*(_DWORD *)a1, *(__int16 *)(a1 + 22), *(__int16 *)(a1 + 20), a2 + 20);
  if ( v4 == 0 )
    FT_Outline_Copy(a1 + 20, v2);
  return v4;
}


//======================================================================
// sub_20D7D8
// address: 0x0020D7D8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_20D7D8(int *a1, int a2)
{
  int v3; // r4
  int v4; // r0
  _DWORD *v5; // r5
  int v6; // r6

  v3 = 18;
  v4 = *a1;
  if ( *(_DWORD *)(a2 + 72) == 1869968492 )
  {
    v5 = a1 + 5;
    v6 = a2 + 108;
    v3 = FT_Outline_New(v4, *(__int16 *)(a2 + 110), *(__int16 *)(a2 + 108), v5);
    if ( v3 == 0 )
      FT_Outline_Copy(v6, v5);
  }
  return v3;
}


//======================================================================
// sub_20D818
// address: 0x0020D818   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_20D818(_DWORD *a1)
{
  return FT_Outline_Done(*a1, a1 + 5);
}


//======================================================================
// sub_20D826
// address: 0x0020D826   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall sub_20D826(int *a1, _DWORD *a2, int ***a3)
{
  int v4; // r0
  int **v7; // r0
  _DWORD *v9; // [sp+4h] [bp-4h] BYREF

  v9 = a2;
  v4 = *a1;
  *a3 = nullptr;
  v7 = (int **)ft_mem_alloc(v4, *a2, &v9);
  if ( v9 == nullptr )
  {
    *v7 = a1;
    v7[1] = a2;
    v7[2] = (int *)a2[1];
    *a3 = v7;
  }
  return v9;
}


//======================================================================
// sub_20D850
// address: 0x0020D850   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_20D850(int a1, _DWORD *a2)
{
  int *v3; // r6
  int result; // r0
  int *v5; // r0
  int *v6; // r4
  int *v7; // r5
  int v8; // r1
  _DWORD *v9; // r5
  int v10; // r6
  int v11; // r7
  _DWORD *v12; // r3
  int v13; // r4
  int v14; // r6
  int v15; // r3

  v3 = *(int **)a1;
  result = 18;
  if ( a2[18] == 1651078259 )
  {
    v5 = a2 + 39;
    *(_DWORD *)(a1 + 20) = a2[25];
    *(_DWORD *)(a1 + 24) = a2[26];
    v6 = (int *)(a1 + 28);
    v7 = a2 + 19;
    if ( (*(_DWORD *)(a2[39] + 4) & 1) != 0 )
    {
      v8 = *v7;
      v10 = v7[1];
      v11 = v7[2];
      v9 = v7 + 3;
      *v6 = v8;
      v6[1] = v10;
      v6[2] = v11;
      v12 = v6 + 3;
      v13 = v9[1];
      v14 = v9[2];
      *v12 = *v9;
      v12[1] = v13;
      v12[2] = v14;
      v15 = *v5;
      *(_DWORD *)(v15 + 4) &= ~1u;
      return 0;
    }
    else
    {
      FT_Bitmap_New(v6);
      return FT_Bitmap_Copy(v3, v7, v6);
    }
  }
  return result;
}


//======================================================================
// sub_20DB54
// address: 0x0020DB54   size: 0x9C (156 bytes)
//======================================================================
__int64 __fastcall sub_20DB54(__int64 a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r6
  int *v6; // r2
  unsigned int v7; // r3
  int v8; // r7
  int v9; // r12
  int v10; // r6
  char *v11; // r2
  char *v12; // r3
  char v13; // r1
  char v14; // r6

  v1 = *(_DWORD *)(a1 + 20);
  v2 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 > (unsigned int)(v1 + 1) )
  {
    v3 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)a1 = v2 - 1;
    v4 = 8 * (v2 - 1);
    *(_DWORD *)(v3 + 8 * v1) = *(_DWORD *)(v3 + v4);
    *(_DWORD *)(v3 + 8 * v1 + 4) = *(_DWORD *)(v3 + v4 + 4);
    if ( HIDWORD(a1) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 8);
      v6 = (int *)(v5 + 8 * v1 + 8);
      v7 = v5 + v4 - 8;
      while ( (unsigned int)v6 < v7 )
      {
        v8 = *v6;
        v7 -= 8;
        v9 = v6[1];
        *v6 = *(_DWORD *)(v7 + 8);
        v6[1] = *(_DWORD *)(v7 + 12);
        *(_DWORD *)(v7 + 8) = v8;
        *(_DWORD *)(v7 + 12) = v9;
        v6 += 2;
      }
      v10 = *(_DWORD *)(a1 + 12);
      v11 = (char *)(v10 + v1 + 1);
      v12 = (char *)(v10 + v2 - 2);
      while ( v11 < v12 )
      {
        v13 = *v11;
        v14 = *v12--;
        *v11 = v14;
        v12[1] = v13;
        ++v11;
      }
    }
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + v1) |= 4u;
    *(_BYTE *)(*(_DWORD *)(a1 + 12) + v2 - 2) |= 8u;
  }
  else
  {
    *(_DWORD *)a1 = v1;
  }
  *(_DWORD *)(a1 + 20) = -1;
  *(_BYTE *)(a1 + 16) = 0;
  return a1;
}


//======================================================================
// sub_20DBF0
// address: 0x0020DBF0   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_20DBF0(int a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r5
  int v4; // r3
  int i; // r4
  int v7; // [sp+4h] [bp-8h]

  v3 = 0;
  v7 = *(_DWORD *)(a1 + 12);
  v4 = 0;
  for ( i = 0; i != *(_DWORD *)a1; ++i )
  {
    if ( (*(_BYTE *)(v7 + i) & 4) != 0 )
    {
      if ( v3 != 0 )
        goto LABEL_13;
    }
    else if ( v3 == 0 )
    {
      v4 = 0;
      goto LABEL_14;
    }
    v3 = 1;
    if ( (*(_BYTE *)(v7 + i) & 8) != 0 )
    {
      ++v4;
      v3 = 0;
    }
  }
  if ( v3 == 0 )
  {
    *(_BYTE *)(a1 + 28) = 1;
    goto LABEL_15;
  }
LABEL_13:
  v4 = 0;
LABEL_14:
  i = 0;
LABEL_15:
  *a2 = i;
  *a3 = v4;
  return 0;
}


//======================================================================
// sub_20DC48
// address: 0x0020DC48   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_20DC48(_DWORD *a1, int a2)
{
  unsigned int v2; // r6
  unsigned int v3; // r1
  unsigned int v5; // r5
  int v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int v11; // [sp+Ch] [bp-10h]
  _DWORD v12[2]; // [sp+14h] [bp-8h] BYREF

  v2 = a1[1];
  v3 = a2 + *a1;
  v12[0] = 0;
  if ( v3 > v2 )
  {
    v5 = v2;
    v11 = a1[6];
    while ( v5 < v3 )
      v5 += (v5 >> 1) + 16;
    v6 = ft_mem_realloc(v11, 8, v2, v5, a1[2], v12);
    v7 = v12[0];
    a1[2] = v6;
    if ( v7 == 0 )
    {
      v8 = ft_mem_realloc(v11, 1, v2, v5, a1[3], v12);
      v9 = v12[0];
      a1[3] = v8;
      if ( v9 == 0 )
        a1[1] = v5;
    }
  }
  return v12[0];
}


//======================================================================
// sub_20DCAC
// address: 0x0020DCAC   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_20DCAC(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  int result; // r0
  _DWORD *v9; // r3
  _BYTE *v10; // r2

  result = sub_20DC48((_DWORD *)a1, 3);
  if ( result == 0 )
  {
    v9 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 8 * *(_DWORD *)a1);
    v10 = (_BYTE *)(*(_DWORD *)(a1 + 12) + *(_DWORD *)a1);
    *v9 = *a2;
    v9[1] = a2[1];
    v9[2] = *a3;
    v9[3] = a3[1];
    v9[4] = *a4;
    v9[5] = a4[1];
    *v10 = 2;
    v10[1] = 2;
    v10[2] = 1;
    *(_DWORD *)a1 += 3;
  }
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}


//======================================================================
// sub_20DCFC
// address: 0x0020DCFC   size: 0x146 (326 bytes)
//======================================================================
int __fastcall sub_20DCFC(_DWORD *a1, int a2)
{
  int v3; // r5
  int v4; // r1
  int v5; // r3
  int v6; // r3
  int v7; // r6
  int v8; // r1
  int v9; // r7
  int v10; // r0
  int result; // r0
  int v12; // [sp+0h] [bp-44h]
  int v13; // [sp+4h] [bp-40h]
  int v14; // [sp+8h] [bp-3Ch]
  int v15; // [sp+Ch] [bp-38h]
  int v16; // [sp+14h] [bp-30h]
  int v17; // [sp+18h] [bp-2Ch]
  int v18; // [sp+1Ch] [bp-28h]
  int v19; // [sp+20h] [bp-24h] BYREF
  int v20; // [sp+24h] [bp-20h]
  int v21; // [sp+28h] [bp-1Ch] BYREF
  int v22; // [sp+2Ch] [bp-18h]
  int v23; // [sp+30h] [bp-14h] BYREF
  int v24; // [sp+34h] [bp-10h]
  int v25; // [sp+38h] [bp-Ch] BYREF
  int v26; // [sp+3Ch] [bp-8h]

  v18 = (int)&a1[8 * a2 + 16];
  v3 = -11796480 * a2 + 5898240;
  v16 = a1[15];
  v14 = FT_Angle_Diff(*a1, a1[1]);
  if ( v14 == 11796480 )
    v14 = -2 * v3;
  v15 = v3 + *a1;
  FT_Vector_From_Polar(&v19, v16, v15);
  v4 = a1[3];
  v19 += a1[2];
  v20 += v4;
  if ( v14 < 0 )
    v5 = -5898240;
  else
    v5 = 5898240;
  v17 = v5;
  while ( v14 != 0 )
  {
    v6 = v14;
    if ( v14 < -5898240 )
      v6 = -5898240;
    v13 = v6;
    if ( v6 > 5898240 )
      v13 = 5898240;
    FT_Vector_From_Polar(&v21, v16, v15 + v13);
    v7 = ((v13 + (v13 >> 31)) ^ (v13 >> 31)) >> 1;
    v8 = a1[3];
    v21 += a1[2];
    v22 += v8;
    v9 = FT_Sin(v7);
    v10 = FT_Cos(v7);
    v12 = FT_MulDiv(v16, 4 * v9, 3 * (v10 + 0x10000));
    FT_Vector_From_Polar(&v23, v12, v15 + v17);
    v23 += v19;
    v24 += v20;
    FT_Vector_From_Polar(&v25, v12, v15 + v13 - v17);
    v25 += v21;
    v26 += v22;
    result = sub_20DCAC(v18, &v23, &v25, &v21);
    if ( result != 0 )
      goto LABEL_15;
    v19 = v21;
    v20 = v22;
    v14 -= v13;
    v15 += v13;
  }
  result = 0;
LABEL_15:
  *(_BYTE *)(v18 + 16) = 0;
  return result;
}


//======================================================================
// sub_20DE4C
// address: 0x0020DE4C   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_20DE4C(int *a1, _DWORD *a2, char a3)
{
  int result; // r0
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r3
  int v10; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r7

  result = *((unsigned __int8 *)a1 + 16);
  v6 = *a1;
  if ( result != 0 )
  {
    v7 = a1[2];
    v8 = 8 * (v6 + 0x1FFFFFFF);
    *(_DWORD *)(v8 + v7) = *a2;
    result = 0;
    *(_DWORD *)(v7 + v8 + 4) = a2[1];
LABEL_8:
    *((_BYTE *)a1 + 16) = a3;
    return result;
  }
  if ( v6 == 0
    || (unsigned int)(*(_DWORD *)(v9 = a1[2] + 8 * (v6 + 0x1FFFFFFF)) - *a2 + 1) > 2
    || (unsigned int)(*(_DWORD *)(v9 + 4) - a2[1] + 1) > 2 )
  {
    result = sub_20DC48(a1, 1);
    if ( result == 0 )
    {
      v10 = *a1;
      v11 = a1[2];
      v12 = 8 * *a1;
      v13 = a1[3];
      *(_DWORD *)(v12 + v11) = *a2;
      *(_DWORD *)(v11 + v12 + 4) = a2[1];
      *(_BYTE *)(v13 + v10) = 1;
      ++*a1;
    }
    goto LABEL_8;
  }
  return result;
}


//======================================================================
// sub_20DECC
// address: 0x0020DECC   size: 0xCC (204 bytes)
//======================================================================
int __fastcall sub_20DECC(_DWORD *a1, int a2, int a3)
{
  _DWORD *v4; // r6
  int v5; // r0
  int v6; // r7
  int v7; // r0
  int v8; // r0
  unsigned int v9; // r0
  int v10; // r3
  int v11; // r0
  int v12; // r0
  int v15; // [sp+4h] [bp-18h]
  int v16; // [sp+8h] [bp-14h]
  int v17; // [sp+Ch] [bp-10h]
  int v18; // [sp+10h] [bp-Ch] BYREF
  int v19; // [sp+14h] [bp-8h]

  v4 = &a1[8 * a2 + 16];
  v17 = -11796480 * a2 + 5898240;
  v5 = FT_Angle_Diff(*a1, a1[1]);
  if ( *((_BYTE *)v4 + 16) == 0 || a3 == 0 )
    goto LABEL_2;
  v6 = v5 / 2;
  v16 = a1[15];
  v7 = FT_Tan(v5 / 2);
  v8 = FT_MulFix(v16, v7);
  v9 = (v8 + (v8 >> 31)) ^ (v8 >> 31);
  LOBYTE(v10) = 0;
  if ( a1[4] >= (signed int)v9 )
    v10 = (a3 >> 31) + (a3 >= v9) + (v9 >> 31);
  if ( (_BYTE)v10 != 0 )
  {
    v15 = v6 + *a1;
    v11 = FT_Cos(v6);
    v12 = FT_DivFix(a1[15], v11);
    FT_Vector_From_Polar(&v18, v12, v15 + v17);
    v18 += a1[2];
    v19 += a1[3];
  }
  else
  {
LABEL_2:
    FT_Vector_From_Polar(&v18, a1[15], v17 + a1[1]);
    v18 += a1[2];
    v19 += a1[3];
    *((_BYTE *)v4 + 16) = 0;
  }
  return sub_20DE4C(v4, &v18, 0);
}


//======================================================================
// sub_20DF9C
// address: 0x0020DF9C   size: 0x1F4 (500 bytes)
//======================================================================
int __fastcall sub_20DF9C(int *a1, int a2, int a3)
{
  int v3; // r3
  int v6; // r0
  int v7; // r6
  int v8; // r7
  int *v9; // r0
  int v10; // r0
  int v11; // r2
  int v12; // r0
  int v13; // r0
  int v14; // r6
  int v15; // r0
  int v16; // r2
  int v18; // [sp+4h] [bp-30h]
  int v19; // [sp+8h] [bp-2Ch]
  _BOOL4 v20; // [sp+Ch] [bp-28h]
  int v21; // [sp+Ch] [bp-28h]
  int v22; // [sp+10h] [bp-24h]
  int v23; // [sp+14h] [bp-20h]
  int *v24; // [sp+18h] [bp-1Ch]
  int v26; // [sp+20h] [bp-14h] BYREF
  int v27; // [sp+24h] [bp-10h]
  int v28; // [sp+28h] [bp-Ch] BYREF
  int v29; // [sp+2Ch] [bp-8h]

  v24 = &a1[8 * a2 + 16];
  v3 = a1[12];
  if ( v3 == 0 )
    return sub_20DCFC(a1, a2);
  v22 = a1[15];
  v19 = -11796480 * a2 + 5898240;
  v20 = v3 != 2;
  if ( v3 == 1 )
    goto LABEL_11;
  v6 = FT_Angle_Diff(*a1, a1[1]);
  if ( v6 == 11796480 )
  {
    v18 = *a1;
    v7 = v19;
  }
  else
  {
    v7 = v6 / 2;
    v18 = v6 / 2 + *a1 + v19;
  }
  v23 = FT_Cos(v7);
  v8 = FT_MulFix(a1[14], v23);
  if ( v8 <= 0xFFFF )
  {
    if ( !v20 )
    {
      if ( ((v7 + (v7 >> 31)) ^ (v7 >> 31)) <= 57 )
        goto LABEL_17;
      v10 = FT_MulFix(v22, a1[14]);
      FT_Vector_From_Polar(&v26, v10, v18);
      v11 = a1[3];
      v26 += a1[2];
      v27 += v11;
      v12 = FT_Sin(v7);
      v13 = FT_DivFix(0x10000 - v8, (v12 + (v12 >> 31)) ^ (v12 >> 31));
      v21 = FT_MulFix(v22, v13);
      FT_Vector_From_Polar(&v28, v21, v18 + v19);
      v28 += v26;
      v29 += v27;
      v14 = sub_20DE4C(v24, &v28, 0);
      if ( v14 != 0 )
        return v14;
      FT_Vector_From_Polar(&v28, v21, v18 - v19);
      v28 += v26;
      v29 += v27;
      v14 = sub_20DE4C(v24, &v28, 0);
      if ( v14 != 0 || a3 != 0 )
        return v14;
      FT_Vector_From_Polar(&v28, v22, v19 + a1[1]);
      v9 = v24;
      v28 += a1[2];
      v29 += a1[3];
      return sub_20DE4C(v9, &v28, 0);
    }
LABEL_11:
    FT_Vector_From_Polar(&v28, v22, v19 + a1[1]);
    v28 += a1[2];
    v29 += a1[3];
    *((_BYTE *)v24 + 16) = 0;
    v9 = v24;
    return sub_20DE4C(v9, &v28, 0);
  }
LABEL_17:
  v15 = FT_DivFix(a1[15], v23);
  FT_Vector_From_Polar(&v28, v15, v18);
  v16 = a1[3];
  v28 += a1[2];
  v29 += v16;
  v14 = sub_20DE4C(v24, &v28, 0);
  if ( v14 == 0 && a3 == 0 )
  {
    FT_Vector_From_Polar(&v28, a1[15], v19 + a1[1]);
    v9 = v24;
    v28 += a1[2];
    v29 += a1[3];
    return sub_20DE4C(v9, &v28, 0);
  }
  return v14;
}


//======================================================================
// sub_20E198
// address: 0x0020E198   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_20E198(int *a1, int a2)
{
  unsigned int v4; // r6
  int result; // r0
  int v6; // r6

  v4 = FT_Angle_Diff(*a1, a1[1]);
  result = 0;
  if ( v4 != 0 )
  {
    v6 = v4 >> 31;
    result = sub_20DECC(a1, v6, a2);
    if ( result == 0 )
      return sub_20DF9C(a1, 1 - v6, a2);
  }
  return result;
}


//======================================================================
// sub_20E1CC
// address: 0x0020E1CC   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_20E1CC(int a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  _DWORD *v7; // r3
  _BYTE *v8; // r2

  result = sub_20DC48((_DWORD *)a1, 2);
  if ( result == 0 )
  {
    v7 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 8 * *(_DWORD *)a1);
    v8 = (_BYTE *)(*(_DWORD *)(a1 + 12) + *(_DWORD *)a1);
    *v7 = *a2;
    v7[1] = a2[1];
    v7[2] = *a3;
    v7[3] = a3[1];
    *v8 = 0;
    v8[1] = 1;
    *(_DWORD *)a1 += 2;
  }
  *(_BYTE *)(a1 + 16) = 0;
  return result;
}


//======================================================================
// sub_20E20C
// address: 0x0020E20C   size: 0x114 (276 bytes)
//======================================================================
int __fastcall sub_20E20C(_DWORD *a1, int a2)
{
  int v2; // r3
  int *v5; // r5
  int v6; // r2
  int v7; // r7
  int *v8; // r0
  int *v10; // r6
  int v11; // r2
  int v14; // [sp+8h] [bp-1Ch]
  int v15; // [sp+8h] [bp-1Ch]
  int *v16; // [sp+Ch] [bp-18h]
  int v17; // [sp+10h] [bp-14h] BYREF
  int v18; // [sp+14h] [bp-10h]
  int v19; // [sp+18h] [bp-Ch] BYREF
  int v20; // [sp+1Ch] [bp-8h]

  v2 = a1[11];
  if ( v2 == 1 )
  {
    *a1 = a2;
    a1[1] = a2 + 11796480;
    return sub_20DCFC(a1, 0);
  }
  if ( v2 == 2 )
  {
    v14 = a1[15];
    v16 = a1 + 16;
    v5 = &v17;
    FT_Vector_From_Polar(&v19, v14, a2 + 5898240);
    FT_Vector_From_Polar(&v17, v14, a2);
    v6 = a1[3];
    v17 += a1[2] + v19;
    v18 += v6 + v20;
    v7 = sub_20DE4C(v16, &v17, 0);
    if ( v7 == 0 )
    {
      FT_Vector_From_Polar(&v19, v14, a2 - 5898240);
      FT_Vector_From_Polar(&v17, v14, a2);
      v8 = v16;
      v17 += v19 + a1[2];
      v18 += v20 + a1[3];
      return sub_20DE4C(v8, v5, 0);
    }
  }
  else
  {
    v7 = 0;
    if ( v2 == 0 )
    {
      v15 = a1[15];
      v5 = &v19;
      FT_Vector_From_Polar(&v19, v15, a2 + 5898240);
      v10 = a1 + 16;
      v11 = a1[3];
      v19 += a1[2];
      v20 += v11;
      v7 = sub_20DE4C(v10, &v19, 0);
      if ( v7 == 0 )
      {
        FT_Vector_From_Polar(&v19, v15, a2 - 5898240);
        v8 = v10;
        v19 += a1[2];
        v20 += a1[3];
        return sub_20DE4C(v8, v5, 0);
      }
    }
  }
  return v7;
}


//======================================================================
// sub_20E324
// address: 0x0020E324   size: 0x9E (158 bytes)
//======================================================================
int __fastcall sub_20E324(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r2
  __int64 v6; // r0
  int v7; // r2
  _DWORD v11[2]; // [sp+8h] [bp-14h] BYREF
  _DWORD v12[3]; // [sp+10h] [bp-Ch] BYREF

  FT_Vector_From_Polar(v11, *(_DWORD *)(a1 + 60), a2 + 5898240);
  v4 = *(_DWORD *)(a1 + 12);
  v5 = *(_DWORD *)(a1 + 84);
  v12[0] = *(_DWORD *)(a1 + 8) + v11[0];
  v12[1] = v4 + v11[1];
  if ( v5 >= 0 )
    sub_20DB54((unsigned int)(a1 + 64));
  *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 64);
  *(_BYTE *)(a1 + 80) = 0;
  HIDWORD(v6) = sub_20DE4C((int *)(a1 + 64), v12, 0);
  if ( HIDWORD(v6) == 0 )
  {
    v12[0] = *(_DWORD *)(a1 + 8) - v11[0];
    v7 = *(_DWORD *)(a1 + 116);
    v12[1] = *(_DWORD *)(a1 + 12) - v11[1];
    if ( v7 >= 0 )
    {
      LODWORD(v6) = a1 + 96;
      sub_20DB54(v6);
    }
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(a1 + 96);
    *(_BYTE *)(a1 + 112) = 0;
    HIDWORD(v6) = sub_20DE4C((int *)(a1 + 96), v12, 0);
    *(_BYTE *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 36) = a3;
    *(_DWORD *)(a1 + 24) = a2;
  }
  return HIDWORD(v6);
}


//======================================================================
// sub_20F580
// address: 0x0020F580   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_20F580(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // r3
  unsigned int v4; // r1
  int v5; // r4
  unsigned int v6; // r0
  int v7; // r5
  unsigned int v8; // r3
  int result; // r0
  unsigned int v10; // r4
  unsigned int v11; // r5

  v3 = a2 << 16;
  v4 = HIWORD(a2);
  v5 = (unsigned __int16)a1;
  v6 = HIWORD(a1);
  v3 >>= 16;
  v7 = v3 * v5;
  v8 = v3 * v6;
  result = v6 * v4;
  v10 = v8 + v5 * v4;
  v11 = (v10 << 16) + v7;
  *a3 = v11;
  a3[1] = HIWORD(v10) + result + (v11 < v10 << 16) + ((v10 < v8) << 16);
  return result;
}


//======================================================================
// sub_20F5BA
// address: 0x0020F5BA   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_20F5BA(int result)
{
  int v1; // r2
  int v2; // r3
  int v3; // r1

  v1 = *(__int16 *)(result + 22);
  v2 = 8 * v1;
  *(_DWORD *)(result + 60) = *(_DWORD *)(result + 24) + 8 * v1;
  *(_DWORD *)(result + 64) = *(_DWORD *)(result + 28) + v1;
  *(_DWORD *)(result + 68) = *(_DWORD *)(result + 32) + 2 * *(__int16 *)(result + 20);
  if ( *(_BYTE *)(result + 16) != 0 )
  {
    v3 = *(_DWORD *)(result + 44);
    *(_DWORD *)(result + 76) = *(_DWORD *)(result + 40) + v2;
    *(_DWORD *)(result + 80) = v3 + v2;
  }
  return result;
}


//======================================================================
// sub_20F5F0
// address: 0x0020F5F0   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_20F5F0(_DWORD *a1)
{
  unsigned int v1; // r3
  int *v2; // r2
  int *v3; // r1
  int v4; // r4
  int v5; // r5

  v1 = a1[10];
  if ( v1 != 0 )
  {
    v2 = (int *)(v1 + 4 * a1[9]);
    v3 = v2;
    while ( (unsigned int)--v3 >= v1 )
    {
      v4 = *v3;
      if ( *(_DWORD *)(*v3 + 4) == 1970170211 )
      {
        v5 = *(_DWORD *)(v4 + 8);
        if ( (v5 == 655363 || v5 == 0x40000) && (int)((int)v3 - v1) <= 63 )
        {
          a1[23] = v4;
          return 0;
        }
      }
    }
    while ( (unsigned int)--v2 >= v1 )
    {
      if ( *(_DWORD *)(*v2 + 4) == 1970170211 && (int)((int)v2 - v1) <= 63 )
      {
        a1[23] = *v2;
        return 0;
      }
    }
  }
  return 38;
}


//======================================================================
// sub_20F654
// address: 0x0020F654   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_20F654(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r0
  int v4; // r0

  v2 = *a1;
  v3 = *a2;
  if ( v2 < v3 )
    v4 = 1;
  else
    v4 = -(v3 < v2);
  return -v4;
}


//======================================================================
// sub_20F66C
// address: 0x0020F66C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_20F66C(int a1)
{
  int v1; // r1
  int v2; // r3
  int v3; // r2
  unsigned int v4; // r1
  unsigned int v5; // r3
  unsigned int v6; // r5
  int v8; // r2
  int result; // r0

  v1 = (unsigned __int64)((a1 + (a1 >> 31)) ^ (unsigned int)(a1 >> 31)) >> 16;
  v2 = (unsigned __int16)((a1 + (a1 >> 31)) ^ (a1 >> 31));
  v3 = 17797 * v1;
  v4 = 47593 * v1 + 17797 * v2;
  v5 = (unsigned int)(47593 * v2) >> 16;
  v6 = v5 + v4;
  v8 = ((v5 + v4) >> 16) + v3;
  if ( v5 < v4 )
    v5 = v4;
  if ( v6 < v5 )
    v8 += 0x10000;
  result = v8;
  if ( a1 < 0 )
    return -v8;
  return result;
}


//======================================================================
// sub_20F6B8
// address: 0x0020F6B8   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_20F6B8(int *a1)
{
  int v1; // r4
  int v2; // r5
  int v4; // r3
  int v5; // r2
  int v7; // r2

  v1 = a1[1];
  v2 = *a1;
  v4 = (*a1 + (*a1 >> 31)) ^ (*a1 >> 31) | (v1 + (v1 >> 31)) ^ (v1 >> 31);
  v5 = 0;
  if ( v4 > 0xFFFF )
  {
    v4 >>= 16;
    v5 = 16;
  }
  if ( v4 > 255 )
  {
    v4 >>= 8;
    v5 += 8;
  }
  if ( v4 > 15 )
  {
    v4 >>= 4;
    v5 += 4;
  }
  if ( v4 > 3 )
  {
    v4 >>= 2;
    v5 += 2;
  }
  if ( v4 > 1 )
    ++v5;
  if ( v5 > 27 )
  {
    v7 = v5 - 27;
    *a1 = v2 >> v7;
    a1[1] = v1 >> v7;
    return -v7;
  }
  else
  {
    *a1 = v2 << (27 - v5);
    a1[1] = v1 << (27 - v5);
    return 27 - v5;
  }
}


//======================================================================
// sub_20F71C
// address: 0x0020F71C   size: 0x80 (128 bytes)
//======================================================================
__int64 __fastcall sub_20F71C(__int64 a1)
{
  int v1; // r3
  int v2; // r2
  int v3; // r5
  int v4; // r4
  int v5; // r2
  int v6; // r3
  char *v7; // r1
  int v8; // r4
  int *v9; // r5
  int v10; // r12
  int v11; // r7
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = *(_DWORD *)(a1 + 4);
  v2 = *(_DWORD *)a1;
  while ( SHIDWORD(a1) < -5898239 )
  {
    v2 = -v2;
    v1 = -v1;
    HIDWORD(a1) += 11796480;
  }
  while ( SHIDWORD(a1) > 5898240 )
  {
    v2 = -v2;
    v1 = -v1;
    HIDWORD(a1) -= 11796480;
  }
  v3 = 2 * v1;
  v4 = 2 * v2;
  if ( a1 >= 0 )
  {
    v6 = v1 + v4;
    v5 = v2 - v3;
    v7 = (char *)(HIDWORD(a1) - 4157273);
  }
  else
  {
    v5 = v2 + v3;
    v6 = v1 - v4;
    v7 = (char *)&unk_3F6F59 + HIDWORD(a1);
  }
  v8 = 0;
  v9 = (int *)&unk_433DE4;
  do
  {
    v10 = v5 >> v8;
    HIDWORD(v13) = v6 >> v8;
    v11 = *v9;
    if ( (int)v7 >= 0 )
    {
      v6 += v10;
      ++v9;
      v7 -= v11;
      v5 -= HIDWORD(v13);
    }
    else
    {
      v7 += v11;
      v6 -= v10;
      ++v9;
      v5 += HIDWORD(v13);
    }
    ++v8;
  }
  while ( v8 != 23 );
  *(_DWORD *)a1 = v5;
  *(_DWORD *)(a1 + 4) = v6;
  return v13;
}


//======================================================================
// sub_20F7B0
// address: 0x0020F7B0   size: 0x94 (148 bytes)
//======================================================================
__int64 __fastcall sub_20F7B0(int *a1)
{
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // r5
  int v5; // r4
  int v6; // r2
  char *v7; // r3
  int v8; // r4
  int *v9; // r5
  int v10; // r12
  int v11; // r1
  int v12; // r7
  int v13; // r12
  unsigned int v14; // r3
  __int64 v16; // [sp+0h] [bp-Ch]

  v1 = *a1;
  v2 = 0;
  v3 = a1[1];
  if ( *a1 < 0 )
  {
    v1 = -v1;
    v3 = -v3;
    v2 = 11796480;
  }
  v4 = 2 * v1;
  v5 = 2 * v3;
  if ( v3 > 0 )
  {
    v2 = -v2;
LABEL_7:
    v6 = v1 + v5;
    HIDWORD(v16) = v3 - v4;
    v7 = (char *)&unk_3F6F59 + v2;
    goto LABEL_8;
  }
  if ( v3 == 0 )
    goto LABEL_7;
  HIDWORD(v16) = v3 + v4;
  v6 = v1 - v5;
  v7 = (char *)(v2 - 4157273);
LABEL_8:
  v8 = 0;
  v9 = (int *)&unk_433DE4;
  while ( 1 )
  {
    v10 = v6 >> v8;
    v11 = *v9;
    v12 = SHIDWORD(v16) >> v8;
    LODWORD(v16) = *v9;
    if ( v16 >= 0 )
    {
      v6 += v12;
      v13 = HIDWORD(v16) - v10;
      ++v9;
      v7 += v16;
    }
    else
    {
      v13 = v10 + HIDWORD(v16);
      v6 -= v12;
      ++v9;
      v7 -= v11;
    }
    if ( ++v8 == 23 )
      break;
    HIDWORD(v16) = v13;
  }
  if ( (int)v7 < 0 )
    v14 = -((16 - (_DWORD)v7) & 0xFFFFFFE0);
  else
    v14 = (unsigned int)(v7 + 16) & 0xFFFFFFE0;
  *a1 = v6;
  a1[1] = v14;
  return v16;
}


//======================================================================
// sub_20F850
// address: 0x0020F850   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_20F850(unsigned int a1, unsigned int a2, unsigned int a3)
{
  int v3; // r3
  int i; // r4

  v3 = 0;
  for ( i = 32; i != 0; --i )
  {
    v3 *= 2;
    a1 = (2 * a1) | (a2 >> 31);
    if ( a1 >= a3 )
    {
      a1 -= a3;
      v3 |= 1u;
    }
    a2 *= 2;
  }
  return v3;
}


//======================================================================
// sub_20F974
// address: 0x0020F974   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_20F974(int *a1, int *a2, int a3, char a4)
{
  int result; // r0
  int v7; // r2
  int v8; // r7
  int i; // r4
  __int64 v11; // r0

  result = 0;
  if ( (a4 & 1) == 0 )
  {
    v7 = *a1;
    if ( *a1 != 0 )
    {
      if ( (a4 & 0x10) != 0 )
        v8 = *(_DWORD *)(v7 + 20);
      else
        v8 = *(_DWORD *)(v7 + 16);
      for ( i = 0; i != a3; ++i )
      {
        LODWORD(v11) = *a2;
        HIDWORD(v11) = v8;
        *a2++ = FT_MulDiv(v11, 64);
      }
      return 0;
    }
    else
    {
      return 36;
    }
  }
  return result;
}


//======================================================================
// sub_20FA88
// address: 0x0020FA88   size: 0x56 (86 bytes)
//======================================================================
unsigned int __fastcall sub_20FA88(__int16 *a1, int *a2)
{
  unsigned int result; // r0

  a2[3] = (FT_MulFix(a1[35], a2[2]) + 63) & 0xFFFFFFC0;
  a2[4] = FT_MulFix(a1[36], a2[2]) & 0xFFFFFFC0;
  a2[5] = (FT_MulFix(a1[37], a2[2]) + 32) & 0xFFFFFFC0;
  result = (FT_MulFix(a1[38], a2[1]) + 32) & 0xFFFFFFC0;
  a2[6] = result;
  return result;
}

