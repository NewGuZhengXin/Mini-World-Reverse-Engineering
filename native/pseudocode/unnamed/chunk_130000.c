// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_130000

//======================================================================
// sub_137824
// address: 0x00137824   size: 0x10 (16 bytes)
//======================================================================
void sub_137824()
{
  JUMPOUT(0);
}


//======================================================================
// sub_138820
// address: 0x00138820   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_138820(int a1, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r2
  int v7; // r1
  int v8; // r3
  int v9; // r2

  v2 = *(_DWORD *)(a1 + 88);
  v3 = (*(_DWORD *)(a1 + 40) - *(_DWORD *)(v2 + 8)) >> 2;
  if ( v3 < 0 )
  {
    v4 = 99;
LABEL_12:
    *(_DWORD *)(a1 + 44) = v4;
    return 1;
  }
  if ( v3 != 0 )
  {
    *(_DWORD *)(v2 + 16) = v3;
    if ( a2 != 0 )
    {
      v5 = *(_DWORD *)(a1 + 88);
      v6 = *(_DWORD *)(v5 + 12);
      if ( (v6 & 8) != 0 )
        v7 = 16;
      else
        v7 = 32;
      *(_DWORD *)(v5 + 12) = v6 | v7;
    }
    v8 = *(_DWORD *)(a1 + 40);
    v9 = *(_DWORD *)(a1 + 88);
    *(_DWORD *)(a1 + 40) = v8 + 32;
    *(_DWORD *)(a1 + 88) = v8;
    *(_DWORD *)(v8 + 16) = 0;
    *(_DWORD *)(*(_DWORD *)(a1 + 88) + 8) = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(v9 + 28) = *(_DWORD *)(a1 + 88);
    ++*(_WORD *)(a1 + 84);
  }
  if ( *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 36) )
  {
    v4 = 98;
    goto LABEL_12;
  }
  *(_BYTE *)(a1 + 87) = 0;
  return 0;
}


//======================================================================
// sub_13888C
// address: 0x0013888C   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_13888C(_DWORD *a1, int a2)
{
  int v3; // r0
  int v4; // r2
  int v5; // r5
  int v6; // r4
  int v7; // r6
  int result; // r0
  int v9; // r2
  int v10; // r5
  int v11; // r4
  unsigned int v12; // r0
  unsigned int v13; // r2
  int v14; // r2

  v3 = a1[12];
  v4 = v3 - 1;
  v5 = a1[8] - 4 * v3;
  while ( v4 >= 0 )
  {
    v6 = 4 * v4;
    v7 = *(_DWORD *)(v5 + 4 * v4);
    if ( a2 >= v7 )
    {
      result = 0;
      if ( a2 <= v7 )
        return result;
      v9 = -4 * (v4 + 1);
      v10 = v5 + v6;
      do
      {
        v11 = a2;
        a2 = *(_DWORD *)(v10 + result);
        *(_DWORD *)(v10 + result) = v11;
        result -= 4;
      }
      while ( result != v9 );
      break;
    }
    --v4;
  }
  v12 = a1[10];
  v13 = a1[9] - 4;
  a1[9] = v13;
  if ( v13 > v12 )
  {
    v14 = a1[12] + 1;
    a1[12] = v14;
    *(_DWORD *)(-4 * v14 + a1[8]) = a2;
    return 0;
  }
  else
  {
    a1[11] = 98;
    return 1;
  }
}


//======================================================================
// sub_1388EA
// address: 0x001388EA   size: 0x12E (302 bytes)
//======================================================================
int __fastcall sub_1388EA(int a1, int a2, void (__fastcall *a3)(_DWORD *), int a4, int a5)
{
  int v6; // r7
  _DWORD *v7; // r1
  int v9; // r3
  _DWORD *v10; // r5
  int v11; // r2
  int v12; // r7
  int v13; // r0
  _DWORD *v14; // r6
  _DWORD *v16; // r7
  int v17; // r3
  int v18; // r1
  int v19; // r1
  int v20; // r0
  int v21; // [sp+0h] [bp-1Ch]
  int v22; // [sp+8h] [bp-14h]
  int v23; // [sp+Ch] [bp-10h]
  _DWORD *v24; // [sp+10h] [bp-Ch]

  v21 = a4;
  v24 = *(_DWORD **)(a1 + 52);
  v23 = 8 * a2;
  v6 = v24[1];
  v7 = &v24[2 * a2];
  v9 = v7[1];
  v10 = *(_DWORD **)(a1 + 40);
  if ( v6 >= a4 && v9 <= a5 )
  {
    v11 = *(_DWORD *)(a1 + 4);
    v22 = a5;
    v12 = v6 & -v11;
    if ( a5 > v12 )
      v22 = v12;
    v13 = v21;
    if ( v9 >= v21 )
    {
      v13 = (v9 + v11 - 1) & -v11;
      v21 = v13;
      if ( ((unsigned __int16)v9 & (unsigned __int16)(v11 - 1)) == 0 )
      {
        if ( *(_BYTE *)(a1 + 87) != 0 )
        {
          --v10;
          *(_BYTE *)(a1 + 87) = 0;
        }
        *v10++ = *v7;
        v21 = v13 + *(_DWORD *)(a1 + 4);
      }
    }
    if ( *(_BYTE *)(a1 + 86) != 0 )
    {
      *(_DWORD *)(*(_DWORD *)(a1 + 88) + 20) = v13 >> *(_DWORD *)a1;
      *(_BYTE *)(a1 + 86) = 0;
    }
    if ( v22 >= v21 )
    {
      v14 = v24;
      if ( *(_DWORD *)(a1 + 36) <= (unsigned int)&v10[((v22 - v21) >> *(_DWORD *)a1) + 1] )
      {
        *(_DWORD *)(a1 + 40) = v10;
        *(_DWORD *)(a1 + 44) = 98;
        return 1;
      }
      while ( 1 )
      {
        *(_BYTE *)(a1 + 87) = 0;
        v19 = v14[1];
        if ( v19 <= v21 )
        {
          if ( v19 == v21 )
          {
            *(_BYTE *)(a1 + 87) = 1;
            *v10++ = *v14;
            v21 += *(_DWORD *)(a1 + 4);
          }
          v16 = &v14[v23 / 0xFFFFFFFC];
        }
        else
        {
          v16 = &v14[v23 / 4u];
          v17 = v14[v23 / 4u + 1];
          v18 = v19 - v17;
          if ( v18 < *(_DWORD *)(a1 + 16) )
          {
            *v10++ = *v16 + (v21 - v17) * (*v14 - *v16) / v18;
            v16 = &v14[v23 / 0xFFFFFFFC];
            v21 += *(_DWORD *)(a1 + 4);
          }
          else
          {
            a3(v14);
          }
        }
        if ( v16 < v24 || v21 > v22 )
          break;
        v14 = v16;
      }
    }
  }
  v20 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 40) = v10;
  *(_DWORD *)(a1 + 52) = v20 - v23;
  return 0;
}


//======================================================================
// sub_138A18
// address: 0x00138A18   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_138A18(int a1, int a2, void (__fastcall *a3)(_DWORD *), int a4, int a5)
{
  _DWORD *v5; // r4
  int v7; // r6
  int v8; // r0
  int v9; // r6
  int result; // r0
  int v11; // [sp+Ch] [bp-8h]

  v5 = *(_DWORD **)(a1 + 52);
  v7 = v5[3];
  v5[1] = -v5[1];
  v8 = -v7;
  v9 = v5[5];
  v5[3] = v8;
  v5[5] = -v9;
  if ( a2 > 2 )
    v5[7] = -v5[7];
  v11 = *(unsigned __int8 *)(a1 + 86);
  result = sub_1388EA(a1, a2, a3, -a5, -a4);
  if ( v11 != 0 && *(_BYTE *)(a1 + 86) == 0 )
    *(_DWORD *)(*(_DWORD *)(a1 + 88) + 20) = -*(_DWORD *)(*(_DWORD *)(a1 + 88) + 20);
  v5[1] = -v5[1];
  return result;
}


//======================================================================
// sub_138A72
// address: 0x00138A72   size: 0x1C (28 bytes)
//======================================================================
_DWORD **__fastcall sub_138A72(_DWORD **result, _DWORD *a2)
{
  _DWORD *i; // r3

  for ( i = *result; i != nullptr && *a2 >= *i; i = (_DWORD *)i[1] )
    result = (_DWORD **)(i + 1);
  a2[1] = i;
  *result = a2;
  return result;
}


//======================================================================
// sub_138A8E
// address: 0x00138A8E   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_138A8E(int *result, int a2)
{
  int i; // r3

  for ( i = *result; i != 0; i = *(_DWORD *)(i + 4) )
  {
    if ( i == a2 )
    {
      *result = *(_DWORD *)(i + 4);
      return result;
    }
    result = (int *)(i + 4);
  }
  return result;
}


//======================================================================
// sub_138AA8
// address: 0x00138AA8   size: 0x5A (90 bytes)
//======================================================================
_DWORD **__fastcall sub_138AA8(_DWORD **result)
{
  _DWORD *i; // r3
  _DWORD *v2; // r1
  int v3; // r5
  int v4; // r2
  _DWORD *v5; // r3
  _DWORD *v6; // r2
  _DWORD *v7; // r1

  for ( i = *result; i != nullptr; i = (_DWORD *)i[1] )
  {
    v2 = (_DWORD *)i[2];
    v3 = i[3];
    *i = *v2;
    v4 = 1;
    if ( (v3 & 8) == 0 )
      v4 = -1;
    i[2] = &v2[v4];
    --i[4];
  }
  v5 = *result;
  if ( *result != nullptr )
  {
    v6 = (_DWORD *)v5[1];
    v7 = result;
    while ( v6 != nullptr )
    {
      if ( *v5 > *v6 )
      {
        *v7 = v6;
        v5[1] = v6[1];
        v6[1] = v5;
        v5 = *result;
        v7 = result;
      }
      else
      {
        v7 = v5 + 1;
        v5 = (_DWORD *)v5[1];
        if ( v5 == nullptr )
          return result;
      }
      v6 = (_DWORD *)v5[1];
    }
  }
  return result;
}


//======================================================================
// sub_138B02
// address: 0x00138B02   size: 0x138 (312 bytes)
//======================================================================
int __fastcall sub_138B02(int *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // r6
  int v9; // r7
  int v10; // r2
  int v11; // r5
  int v12; // r3
  int v13; // r5
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r7
  _DWORD *v19; // r2
  int v20; // r3
  int v21; // [sp+4h] [bp-10h]
  int v22; // [sp+4h] [bp-10h]
  int v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v8 = a2;
  v24 = a5 - a3;
  if ( a5 - a3 <= 0 || a5 < a6 || a3 > a7 )
    return 0;
  v9 = a4 - a2;
  if ( a3 >= a6 )
  {
    v11 = a3 >> *a1;
    v10 = a3 & (a1[1] - 1);
  }
  else
  {
    v8 = a2 + FT_MulDiv(v9, a6 - a3, v24);
    v10 = 0;
    v11 = a6 >> *a1;
  }
  v12 = *a1;
  if ( a5 <= a7 )
  {
    v23 = a5 >> v12;
    v21 = a5 & (a1[1] - 1);
  }
  else
  {
    v23 = a7 >> v12;
    v21 = 0;
  }
  if ( v10 <= 0 )
  {
    if ( *((_BYTE *)a1 + 87) != 0 )
      a1[10] -= 4;
  }
  else
  {
    if ( v11 == v23 )
      return 0;
    ++v11;
    v8 += FT_MulDiv(v9, a1[1] - v10, v24);
  }
  *((_BYTE *)a1 + 87) = v21 == 0;
  if ( *((_BYTE *)a1 + 86) != 0 )
  {
    *(_DWORD *)(a1[22] + 20) = v11;
    *((_BYTE *)a1 + 86) = 0;
  }
  v13 = v23 - v11 + 1;
  if ( a1[9] <= (unsigned int)(a1[10] + 4 * v13) )
  {
    a1[11] = 98;
    return 1;
  }
  v15 = a1[1];
  if ( v9 <= 0 )
  {
    v18 = -v9;
    v22 = -FT_MulDiv(v15, v18, v24);
    v16 = a1[1] * v18 % v24;
    v17 = -1;
  }
  else
  {
    v22 = FT_MulDiv(v15, v9, v24);
    v16 = a1[1] * v9 % v24;
    v17 = 1;
  }
  v19 = (_DWORD *)a1[10];
  v20 = -v24;
  while ( v13 > 0 )
  {
    *v19 = v8;
    v8 += v22;
    v20 += v16;
    if ( v20 >= 0 )
    {
      v8 += v17;
      v20 -= v24;
    }
    --v13;
    ++v19;
  }
  a1[10] = (int)v19;
  return 0;
}


//======================================================================
// sub_138C3A
// address: 0x00138C3A   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_138C3A(int a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r2

  if ( *(_DWORD *)(a1 + 92) == 0 )
  {
    v3 = *(_DWORD *)(a1 + 40);
    *(_DWORD *)(a1 + 88) = v3;
    *(_DWORD *)(a1 + 92) = v3;
    *(_DWORD *)(a1 + 40) = v3 + 32;
  }
  v4 = 98;
  if ( *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 36) )
    goto LABEL_12;
  *(_DWORD *)(*(_DWORD *)(a1 + 88) + 12) = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 88) + 20) = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 88) + 16) = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 88) + 8) = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(*(_DWORD *)(a1 + 88) + 4) = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 88) + 28) = 0;
  *(_DWORD *)(*(_DWORD *)(a1 + 88) + 12) = *(unsigned __int8 *)(a1 + 180);
  if ( a2 == 1 )
  {
    *(_DWORD *)(*(_DWORD *)(a1 + 88) + 12) |= 8u;
    if ( a3 != 0 )
    {
      v5 = *(_DWORD *)(a1 + 88);
      v6 = *(_DWORD *)(v5 + 12) | 0x20;
LABEL_11:
      *(_DWORD *)(v5 + 12) = v6;
    }
  }
  else
  {
    if ( a2 != 2 )
    {
      v4 = 20;
LABEL_12:
      *(_DWORD *)(a1 + 44) = v4;
      return 1;
    }
    if ( a3 != 0 )
    {
      v5 = *(_DWORD *)(a1 + 88);
      v6 = *(_DWORD *)(v5 + 12) | 0x10;
      goto LABEL_11;
    }
  }
  if ( *(_DWORD *)(a1 + 96) == 0 )
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 88);
  *(_DWORD *)(a1 + 100) = a2;
  *(_BYTE *)(a1 + 86) = 1;
  *(_BYTE *)(a1 + 87) = 0;
  return 0;
}


//======================================================================
// sub_138CD0
// address: 0x00138CD0   size: 0xF2 (242 bytes)
//======================================================================
int __fastcall sub_138CD0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v5; // r7
  int v7; // r5
  _DWORD *v8; // r0
  int *v9; // r0
  int v10; // r3
  unsigned int v11; // r5
  int v12; // r1
  int v13; // r2
  int v14; // r6
  int v15; // r0
  int v16; // r3
  int v17; // r0
  int v18; // r1
  int v19; // r2
  int v20; // r3
  int v21; // r6
  int v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v5 = a1 + 46;
  a1[13] = a1 + 46;
  v7 = a1[17];
  v8 = a1 + 50;
  *v8 = v7;
  v8 -= 2;
  v8[3] = a1[18];
  *v8 = a2;
  v8[1] = a3;
  *v5 = a4;
  v5[1] = a5;
  do
  {
    v9 = (int *)a1[13];
    v10 = v9[5];
    v11 = v9[1];
    v12 = v9[3];
    v24 = *v9;
    if ( v10 > (int)v11 )
    {
      v13 = v9[5];
      v14 = v9[1];
    }
    else
    {
      v13 = v9[1];
      v14 = v9[5];
    }
    if ( v12 >= v14 && v12 <= v13 )
    {
      if ( v10 == v11 )
      {
        a1[13] = v9 - 4;
      }
      else
      {
        v15 = a1[25];
        v23 = (v11 >> 31) + (v10 >= v11) + (v10 >> 31) + 1;
        if ( v15 != v23 )
        {
          v18 = a1[1];
          v19 = a1[2];
          v20 = (v11 >> 31) + (v10 >= v11) + (v10 >> 31) != 0 ? v10 & (v18 - 1) : (-v18 & (v10 + v18 - 1)) - v10;
          v21 = (unsigned __int8)((v19 < 0) + (v20 >= (unsigned int)v19) + (v20 >> 31));
          if ( v15 != 0
            && sub_138820((int)a1, (unsigned __int8)((v19 < 0) + (v20 >= (unsigned int)v19) + (v20 >> 31))) != 0 )
          {
            return 1;
          }
          if ( sub_138C3A((int)a1, v23, v21) != 0 )
            return 1;
        }
        v16 = a1[19];
        v17 = v23 == 1
            ? sub_1388EA((int)a1, 2, (void (__fastcall *)(_DWORD *))sub_214358, v16, a1[20])
            : sub_138A18((int)a1, 2, (void (__fastcall *)(_DWORD *))sub_214358, v16, a1[20]);
        if ( v17 != 0 )
          return 1;
      }
    }
    else
    {
      sub_214358();
      a1[13] += 16;
    }
  }
  while ( a1[13] >= (unsigned int)v5 );
  a1[18] = v11;
  a1[17] = v24;
  return 0;
}


//======================================================================
// sub_138DCC
// address: 0x00138DCC   size: 0x10C (268 bytes)
//======================================================================
int __fastcall sub_138DCC(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  _DWORD *v7; // r7
  int v9; // r5
  _DWORD *v10; // r0
  int *v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r1
  int v15; // r12
  int v16; // r5
  int v17; // r6
  int v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r5
  int v26; // [sp+8h] [bp-Ch]
  int v27; // [sp+Ch] [bp-8h]

  v7 = a1 + 46;
  a1[13] = a1 + 46;
  v9 = a1[17];
  v10 = a1 + 50;
  v10[2] = v9;
  v10[3] = a1[18];
  *v10 = a2;
  v10[1] = a3;
  a1[48] = a4;
  a1[49] = a5;
  *v7 = a6;
  v7[1] = a7;
  do
  {
    v11 = (int *)a1[13];
    v12 = v11[7];
    v13 = v11[5];
    v26 = v11[1];
    v14 = v11[3];
    v27 = *v11;
    if ( v12 > v26 )
    {
      v16 = v11[1];
      v15 = v11[7];
    }
    else
    {
      v15 = v11[1];
      v16 = v11[7];
    }
    if ( v13 <= v14 )
    {
      v14 = v11[5];
      v13 = v11[3];
    }
    if ( v14 >= v16 && v13 <= v15 )
    {
      if ( v12 == v26 )
      {
        a1[13] = v11 - 6;
      }
      else
      {
        v17 = 2;
        if ( v12 <= v26 )
          v17 = 1;
        v18 = a1[25];
        if ( v18 != v17 )
        {
          v21 = a1[1];
          v22 = a1[2];
          v23 = v17 == 1 ? (-v21 & (v12 + v21 - 1)) - v12 : v12 & (v21 - 1);
          v24 = (unsigned __int8)((v22 < 0) + (v23 >= (unsigned int)v22) + (v23 >> 31));
          if ( v18 != 0
            && sub_138820((int)a1, (unsigned __int8)((v22 < 0) + (v23 >= (unsigned int)v22) + (v23 >> 31))) != 0 )
          {
            return 1;
          }
          if ( sub_138C3A((int)a1, v17, v24) != 0 )
            return 1;
        }
        v19 = a1[19];
        v20 = v17 == 1
            ? sub_1388EA((int)a1, 3, (void (__fastcall *)(_DWORD *))sub_2143A6, v19, a1[20])
            : sub_138A18((int)a1, 3, (void (__fastcall *)(_DWORD *))sub_2143A6, v19, a1[20]);
        if ( v20 != 0 )
          return 1;
      }
    }
    else
    {
      sub_2143A6();
      a1[13] += 24;
    }
  }
  while ( a1[13] >= (unsigned int)v7 );
  a1[17] = v27;
  a1[18] = v26;
  return 0;
}


//======================================================================
// sub_138EE0
// address: 0x00138EE0   size: 0x152 (338 bytes)
//======================================================================
int __fastcall sub_138EE0(int a1, int a2, int a3)
{
  int v3; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r2
  int v10; // r0
  int v11; // r1
  int v13; // r3
  int v14; // r1
  int v15; // r3
  int v16; // r3
  int v17; // r1
  int v18; // r3
  int v19; // r0
  int v20; // [sp+14h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 100);
  switch ( v3 )
  {
    case 1:
      v13 = *(_DWORD *)(a1 + 72);
      if ( a3 >= v13 )
        goto LABEL_19;
      if ( sub_138820(
             a1,
             (unsigned __int8)((((*(_DWORD *)(a1 + 4) - 1) & v13) >> 31)
                             + (((*(_DWORD *)(a1 + 4) - 1) & (unsigned int)v13) >= *(_DWORD *)(a1 + 8))
                             + (*(int *)(a1 + 8) < 0))) != 0 )
        return 1;
      v14 = (*(_DWORD *)(a1 + 4) - 1) & *(_DWORD *)(a1 + 72);
      v9 = (v14 >> 31) + ((unsigned int)v14 >= *(_DWORD *)(a1 + 8)) + (*(_DWORD *)(a1 + 8) >> 31);
      break;
    case 0:
      v7 = *(_DWORD *)(a1 + 72);
      if ( a3 > v7 )
      {
        v8 = (-*(_DWORD *)(a1 + 4) & (v7 + *(_DWORD *)(a1 + 4) - 1)) - v7;
        v9 = (v8 >> 31) + ((unsigned int)v8 >= *(_DWORD *)(a1 + 8)) + (*(_DWORD *)(a1 + 8) >> 31);
LABEL_7:
        v9 = (unsigned __int8)v9;
        v10 = a1;
        v11 = 1;
        goto LABEL_8;
      }
      if ( a3 >= v7 )
        goto LABEL_19;
      v9 = ((v7 & (*(_DWORD *)(a1 + 4) - 1)) >> 31)
         + ((v7 & (unsigned int)(*(_DWORD *)(a1 + 4) - 1)) >= *(_DWORD *)(a1 + 8))
         + (*(_DWORD *)(a1 + 8) >> 31);
      break;
    case 2:
      v15 = *(_DWORD *)(a1 + 72);
      if ( a3 <= v15 )
        goto LABEL_19;
      v16 = (-*(_DWORD *)(a1 + 4) & (v15 + *(_DWORD *)(a1 + 4) - 1)) - v15;
      if ( sub_138820(
             a1,
             (unsigned __int8)((v16 >> 31) + ((unsigned int)v16 >= *(_DWORD *)(a1 + 8)) + (*(int *)(a1 + 8) < 0))) != 0 )
        return 1;
      v17 = ((*(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 4) - 1) & -*(_DWORD *)(a1 + 4)) - *(_DWORD *)(a1 + 72);
      v9 = (v17 >> 31) + ((unsigned int)v17 >= *(_DWORD *)(a1 + 8)) + (*(_DWORD *)(a1 + 8) >> 31);
      goto LABEL_7;
    default:
      goto LABEL_19;
  }
  v9 = (unsigned __int8)v9;
  v10 = a1;
  v11 = 2;
LABEL_8:
  if ( sub_138C3A(v10, v11, v9) != 0 )
    return 1;
LABEL_19:
  v18 = *(_DWORD *)(a1 + 100);
  if ( v18 == 1 )
  {
    v19 = sub_138B02(
            (int *)a1,
            *(_DWORD *)(a1 + 68),
            *(_DWORD *)(a1 + 72),
            a2,
            a3,
            *(_DWORD *)(a1 + 76),
            *(_DWORD *)(a1 + 80));
  }
  else
  {
    if ( v18 != 2 )
      goto LABEL_27;
    v20 = *(unsigned __int8 *)(a1 + 86);
    v19 = sub_138B02(
            (int *)a1,
            *(_DWORD *)(a1 + 68),
            -*(_DWORD *)(a1 + 72),
            a2,
            -a3,
            -*(_DWORD *)(a1 + 80),
            -*(_DWORD *)(a1 + 76));
    if ( v20 != 0 && *(_BYTE *)(a1 + 86) == 0 )
      *(_DWORD *)(*(_DWORD *)(a1 + 88) + 20) = -*(_DWORD *)(*(_DWORD *)(a1 + 88) + 20);
  }
  if ( v19 != 0 )
    return 1;
LABEL_27:
  *(_DWORD *)(a1 + 68) = a2;
  *(_DWORD *)(a1 + 72) = a3;
  return 0;
}


//======================================================================
// sub_139034
// address: 0x00139034   size: 0x6BC (1724 bytes)
//======================================================================
int __fastcall sub_139034(int a1, int a2)
{
  int v3; // r2
  int v4; // r2
  int v5; // r3
  int v6; // r2
  unsigned __int16 v7; // r6
  int v8; // r3
  int v9; // r2
  int v10; // r7
  int v11; // r3
  _DWORD *v12; // r0
  int v13; // r3
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r5
  int v19; // r1
  int v20; // r5
  _DWORD *v21; // r7
  int v22; // r5
  int v23; // r3
  int v24; // r2
  int v25; // r1
  int v26; // r0
  int v27; // r5
  int v28; // r3
  int v29; // r2
  int v30; // r1
  int v31; // r5
  char v32; // r0
  int v33; // r0
  int v34; // r6
  int v35; // r5
  int v36; // r3
  int v37; // r6
  int v38; // r5
  int v39; // r1
  int v40; // r3
  int v41; // r2
  int v42; // r12
  int v43; // r5
  int v44; // r0
  unsigned int v45; // r6
  _DWORD *v46; // r5
  int v47; // r3
  int v48; // r2
  int v49; // r0
  int v50; // r7
  int v51; // r1
  int v52; // r3
  int v53; // r1
  int v54; // r5
  signed int v55; // r3
  unsigned int v56; // r2
  int v57; // r1
  int v58; // r1
  int v59; // r2
  __int16 v60; // r6
  int v61; // r7
  int v62; // r5
  int v63; // r1
  int v64; // r0
  int v66; // r2
  int v67; // r3
  int v68; // r3
  int v69; // r1
  int v70; // r3
  int v71; // r7
  int v72; // r7
  __int16 v73; // r3
  _DWORD *v74; // r3
  __int16 v75; // r1
  int v76; // r3
  __int16 v77; // r5
  _DWORD *j; // r6
  int v79; // r1
  _DWORD *v80; // r7
  int **v81; // r0
  int v82; // r3
  int v83; // r6
  int v84; // r3
  int *v85; // r6
  int v86; // r3
  int v87; // r2
  int v88; // r1
  int v89; // r7
  int *k; // r1
  int *v91; // r7
  _DWORD *m; // r1
  _DWORD *v93; // r6
  int *v94; // r6
  _DWORD *v95; // r7
  int v96; // [sp+18h] [bp-44h]
  _BYTE *v97; // [sp+28h] [bp-34h]
  int *v98; // [sp+28h] [bp-34h]
  _BYTE *v99; // [sp+2Ch] [bp-30h]
  int v100; // [sp+2Ch] [bp-30h]
  int v101; // [sp+2Ch] [bp-30h]
  _DWORD *v102; // [sp+30h] [bp-2Ch]
  __int16 v103; // [sp+30h] [bp-2Ch]
  int v104; // [sp+34h] [bp-28h]
  int v105; // [sp+38h] [bp-24h]
  __int16 v106; // [sp+38h] [bp-24h]
  int i; // [sp+3Ch] [bp-20h]
  int v109; // [sp+44h] [bp-18h]
  __int16 v110; // [sp+48h] [bp-14h] BYREF
  __int16 v111; // [sp+4Ah] [bp-12h] BYREF
  _DWORD *v112; // [sp+4Ch] [bp-10h] BYREF
  int *v113; // [sp+50h] [bp-Ch] BYREF
  _DWORD *v114[2]; // [sp+54h] [bp-8h] BYREF

  while ( 1 )
  {
LABEL_1:
    v3 = *(_DWORD *)(a1 + 1024);
    if ( v3 < 0 )
      return 0;
    v4 = a1 + 4 * v3;
    v5 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(a1 + 80) = *(__int16 *)(v4 + 962) * v5;
    v6 = *(__int16 *)(v4 + 960);
    v7 = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 76) = v5 * v6;
    v8 = *(_DWORD *)(a1 + 28);
    *(_DWORD *)(a1 + 40) = v8;
    *(_DWORD *)(a1 + 92) = 0;
    *(_BYTE *)(a1 + 87) = 0;
    *(_BYTE *)(a1 + 86) = 0;
    v9 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 88) = v8;
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 36) = v9 - 32;
    *(_DWORD *)(v8 + 8) = v8;
    *(_WORD *)(a1 + 84) = 0;
    for ( i = 0; i < *(__int16 *)(a1 + 128); ++i )
    {
      *(_DWORD *)(a1 + 100) = 0;
      *(_DWORD *)(a1 + 96) = 0;
      v10 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 140) + 2 * i);
      v11 = *(_DWORD *)(a1 + 132);
      v12 = (_DWORD *)(v11 + 8 * v7);
      v102 = (_DWORD *)(v11 + 8 * v10);
      v13 = *(_DWORD *)(a1 + 24);
      v14 = *(_DWORD *)(a1 + 8);
      v104 = (*v12 << v13) - v14;
      v105 = (v12[1] << v13) - v14;
      v15 = *v102 << v13;
      v16 = (v102[1] << v13) - v14;
      v17 = v15 - v14;
      if ( a2 == 0 )
      {
        v18 = v104;
        v104 = v105;
        v19 = v16;
        v105 = v18;
        v16 = v17;
        v17 = v19;
      }
      v20 = *(_DWORD *)(a1 + 136);
      v97 = (_BYTE *)(v20 + v7);
      if ( (*v97 & 4) != 0 )
        *(_BYTE *)(a1 + 180) = *v97 >> 5;
      if ( (*v97 & 3) == 2 )
      {
LABEL_49:
        *(_DWORD *)(a1 + 44) = 20;
        goto LABEL_67;
      }
      if ( (*v97 & 3) == 0 )
      {
        if ( (*(_BYTE *)(v20 + v10) & 3) == 1 )
        {
          v102 -= 2;
        }
        else
        {
          v16 = (v105 + v16) / 2;
          v17 = (v104 + v17) / 2;
        }
        v12 -= 2;
        v104 = v17;
        --v97;
        v105 = v16;
      }
      *(_DWORD *)(a1 + 68) = v105;
      *(_DWORD *)(a1 + 72) = v104;
      while ( 1 )
      {
        if ( v12 >= v102 )
        {
          v44 = sub_138EE0(a1, v105, v104);
          goto LABEL_46;
        }
        v21 = v12 + 2;
        v99 = v97 + 1;
        if ( (v97[1] & 3) == 0 )
          break;
        if ( (v97[1] & 3) == 1 )
        {
          v22 = *(_DWORD *)(a1 + 24);
          v23 = *(_DWORD *)(a1 + 8);
          v24 = (v12[2] << v22) - v23;
          v25 = (v12[3] << v22) - v23;
          if ( a2 == 0 )
          {
            v25 = (v12[2] << v22) - v23;
            v24 = (v12[3] << v22) - v23;
          }
          v26 = sub_138EE0(a1, v25, v24);
LABEL_30:
          if ( v26 != 0 )
            goto LABEL_67;
        }
        else
        {
          if ( v102 < v12 + 4 || (v97[2] & 3) != 2 )
            goto LABEL_49;
          v37 = *(_DWORD *)(a1 + 24);
          v38 = *(_DWORD *)(a1 + 8);
          v100 = (v12[4] << v37) - v38;
          v96 = (v12[2] << v37) - v38;
          v21 = v12 + 6;
          v39 = (v12[3] << v37) - v38;
          v40 = (v12[5] << v37) - v38;
          if ( a2 == 0 )
          {
            v40 = (v12[4] << v37) - v38;
            v100 = (v12[5] << v37) - v38;
            v39 = (v12[2] << v37) - v38;
            v96 = (v12[3] << v37) - v38;
          }
          if ( v21 > v102 )
          {
            v44 = sub_138DCC((_DWORD *)a1, v39, v96, v40, v100, v105, v104);
            goto LABEL_46;
          }
          v41 = (v12[6] << v37) - v38;
          v42 = v41;
          v43 = (v12[7] << v37) - v38;
          if ( a2 == 0 )
          {
            v42 = v43;
            v43 = v41;
          }
          if ( sub_138DCC((_DWORD *)a1, v39, v96, v40, v100, v43, v42) != 0 )
            goto LABEL_67;
          v99 = v97 + 3;
        }
        v12 = v21;
        v97 = v99;
      }
      v27 = *(_DWORD *)(a1 + 24);
      v28 = *(_DWORD *)(a1 + 8);
      v29 = (v12[2] << v27) - v28;
      v30 = (v12[3] << v27) - v28;
      if ( a2 == 0 )
      {
        v30 = (v12[2] << v27) - v28;
        v29 = (v12[3] << v27) - v28;
      }
      while ( v21 < v102 )
      {
        v21 += 2;
        v31 = *(_DWORD *)(a1 + 24);
        v32 = *++v99;
        v33 = v32 & 3;
        v34 = (*v21 << v31) - *(_DWORD *)(a1 + 8);
        v35 = (v21[1] << v31) - *(_DWORD *)(a1 + 8);
        if ( a2 == 0 )
        {
          v36 = v35;
          v35 = v34;
          v34 = v36;
        }
        if ( v33 == 1 )
        {
          v26 = sub_138CD0((_DWORD *)a1, v30, v29, v35, v34);
          goto LABEL_30;
        }
        if ( v33 != 0 )
          goto LABEL_49;
        if ( sub_138CD0((_DWORD *)a1, v30, v29, (v30 + v35) / 2, (v29 + v34) / 2) != 0 )
          goto LABEL_67;
        v29 = v34;
        v30 = v35;
      }
      v44 = sub_138CD0((_DWORD *)a1, v30, v29, v105, v104);
LABEL_46:
      if ( v44 != 0 )
        goto LABEL_67;
      v53 = *(_DWORD *)(a1 + 4);
      v54 = *(_DWORD *)(a1 + 88);
      v55 = *(_DWORD *)(a1 + 72);
      v7 = *(_WORD *)(*(_DWORD *)(a1 + 140) + 2 * i) + 1;
      if ( ((v53 - 1) & v55) == 0 && v55 >= *(_DWORD *)(a1 + 76) && v55 <= *(_DWORD *)(a1 + 80) )
      {
        v66 = *(_DWORD *)(a1 + 96);
        if ( v66 != 0 && ((*(_DWORD *)(v66 + 12) ^ *(_DWORD *)(v54 + 12)) & 8) == 0 )
          *(_DWORD *)(a1 + 40) -= 4;
      }
      v56 = *(_DWORD *)(a1 + 8);
      if ( (*(_DWORD *)(v54 + 12) & 8) != 0 )
      {
        v57 = (v56 >> 31) + (((v53 - 1) & (unsigned int)v55) >= v56) + (((v53 - 1) & v55) >> 31);
      }
      else
      {
        v67 = (-v53 & (v55 + v53 - 1)) - v55;
        v57 = (v67 >> 31) + (v67 >= v56) + (v56 >> 31);
      }
      if ( sub_138820(a1, (unsigned __int8)v57) != 0 )
        goto LABEL_67;
      v68 = *(_DWORD *)(a1 + 96);
      if ( v68 != 0 )
        *(_DWORD *)(v54 + 28) = v68;
    }
    v45 = *(unsigned __int16 *)(a1 + 84);
    v46 = *(_DWORD **)(a1 + 92);
    if ( v45 > 1 && v46 != nullptr )
      break;
    *(_DWORD *)(a1 + 92) = 0;
LABEL_82:
    if ( *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 36) )
      goto LABEL_67;
    v69 = *(_DWORD *)(a1 + 92);
    if ( v69 != 0 )
    {
      v112 = nullptr;
      v113 = nullptr;
      v114[0] = nullptr;
      v70 = *(_DWORD *)a1;
      v71 = *(_DWORD *)(a1 + 80);
      v111 = *(int *)(a1 + 76) >> *(_DWORD *)a1;
      v110 = v71 >> v70;
      while ( 1 )
      {
        v72 = *(_DWORD *)(v69 + 4);
        v73 = *(_WORD *)(v69 + 16) + *(_DWORD *)(v69 + 20) - 1;
        if ( v110 > (__int16)*(_DWORD *)(v69 + 20) )
          v110 = *(_DWORD *)(v69 + 20);
        if ( v111 < v73 )
          v111 = v73;
        *(_DWORD *)v69 = 0;
        sub_138A72(&v112, (_DWORD *)v69);
        if ( v72 == 0 )
          break;
        v69 = v72;
      }
      if ( *(_DWORD *)(a1 + 48) == 0 )
        goto LABEL_72;
      (*(void (__fastcall **)(int, __int16 *, __int16 *))(a1 + 164))(a1, &v110, &v111);
      v74 = v112;
      v75 = v110;
      while ( v74 != nullptr )
      {
        v74[6] = (unsigned __int16)(v74[5] - v75);
        v74 = (_DWORD *)v74[1];
      }
      v76 = *(_DWORD *)(a1 + 48);
      v77 = v110;
      if ( v76 > 0 && *(_DWORD *)(-4 * v76 + *(_DWORD *)(a1 + 32)) == v110 )
        *(_DWORD *)(a1 + 48) = v76 - 1;
      v106 = 0;
      while ( *(int *)(a1 + 48) > 0 )
      {
        for ( j = v112; j != nullptr; j = v80 )
        {
          v79 = j[6];
          v80 = (_DWORD *)j[1];
          j[6] = v79 - v106;
          if ( v79 == v106 )
          {
            sub_138A8E((int *)&v112, (int)j);
            v81 = &v113;
            if ( (j[3] & 8) == 0 )
              v81 = v114;
            sub_138A72(v81, j);
          }
        }
        sub_138AA8(&v113);
        sub_138AA8(v114);
        v82 = *(_DWORD *)(a1 + 48);
        v83 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 48) = v82 - 1;
        v84 = *(_DWORD *)(-4 * v82 + v83);
        v106 = v84 - v77;
        v101 = (__int16)v84;
        while ( 1 )
        {
          v85 = v113;
          if ( v77 >= v101 )
            break;
          v98 = v114[0];
          v103 = 0;
          while ( v85 != nullptr )
          {
            v86 = *v85;
            v87 = *v98;
            if ( *v85 <= *v98 )
            {
              v87 = *v85;
              v86 = *v98;
            }
            v88 = *(_DWORD *)(a1 + 4);
            if ( v86 - v87 > v88
              || (v109 = -v88 & v87) == v87
              || (v89 = -v88 & (v86 + v88 - 1)) == v86
              || v109 <= v89 && v89 != v109 + v88 )
            {
              (*(void (__fastcall **)(int, _DWORD))(a1 + 168))(a1, v77);
            }
            else if ( (v85[3] & 7) != 2 )
            {
              *v85 = v87;
              *v98 = v86;
              v85[6] = 1;
              ++v103;
            }
            v85 = (int *)v85[1];
            v98 = (int *)v98[1];
          }
          if ( v103 > 0 )
          {
            v94 = v113;
            v95 = v114[0];
            while ( v94 != nullptr )
            {
              if ( v94[6] != 0 )
              {
                v94[6] = 0;
                (*(void (__fastcall **)(int, _DWORD, int, _DWORD, int *, _DWORD *))(a1 + 172))(
                  a1,
                  v77,
                  *v94,
                  *v95,
                  v94,
                  v95);
              }
              v94 = (int *)v94[1];
              v95 = (_DWORD *)v95[1];
            }
          }
          (*(void (__fastcall **)(int))(a1 + 176))(a1);
          if ( ++v77 < v101 )
          {
            sub_138AA8(&v113);
            sub_138AA8(v114);
          }
        }
        for ( k = v113; k != nullptr; k = v91 )
        {
          v91 = (int *)k[1];
          if ( k[4] == 0 )
            sub_138A8E((int *)&v113, (int)k);
        }
        for ( m = v114[0]; m != nullptr; m = v93 )
        {
          v93 = (_DWORD *)m[1];
          if ( m[4] == 0 )
            sub_138A8E((int *)v114, (int)m);
        }
      }
      while ( v111 >= v77 )
      {
        (*(void (__fastcall **)(int))(a1 + 176))(a1);
        ++v77;
      }
    }
    --*(_DWORD *)(a1 + 1024);
  }
  while ( 1 )
  {
    v47 = v46[4];
    v48 = 0;
    if ( v45 > 1 )
      v48 = v46[2] + 4 * v47;
    v49 = v46[3];
    v46[1] = v48;
    v50 = v46[5];
    if ( (v49 & 8) != 0 )
    {
      v51 = v46[5];
      v50 = v50 + v47 - 1;
    }
    else
    {
      v51 = v50 - v47 + 1;
      v52 = v46[2] + 4 * (v47 + 0x3FFFFFFF);
      v46[5] = v51;
      v46[2] = v52;
    }
    if ( sub_13888C((_DWORD *)a1, v51) != 0 || sub_13888C((_DWORD *)a1, v50 + 1) != 0 )
      break;
    v46 = (_DWORD *)v46[1];
    v45 = (unsigned __int16)(v45 - 1);
    if ( v45 == 0 )
      goto LABEL_82;
  }
LABEL_67:
  if ( *(_DWORD *)(a1 + 44) == 98 )
  {
    *(_DWORD *)(a1 + 44) = 0;
    v58 = *(_DWORD *)(a1 + 1024);
    v59 = a1 + 4 * v58;
    v60 = *(_WORD *)(v59 + 962);
    v61 = *(__int16 *)(v59 + 960);
    v62 = (v61 + v60) / 2;
    if ( v58 <= 6 && (__int16)v62 >= v61 )
    {
      v63 = v58 + 1;
      v64 = a1 + 4 * v63;
      *(_WORD *)(v64 + 960) = v62;
      *(_WORD *)(v64 + 962) = v60;
      *(_WORD *)(v59 + 962) = v62 - 1;
      *(_DWORD *)(a1 + 1024) = v63;
      goto LABEL_1;
    }
    *(_DWORD *)(a1 + 1024) = 0;
LABEL_72:
    *(_DWORD *)(a1 + 44) = 20;
    return 20;
  }
  return 1;
}


//======================================================================
// sub_1396F0
// address: 0x001396F0   size: 0x16E (366 bytes)
//======================================================================
int __fastcall sub_1396F0(int a1, int a2, int a3, char a4, char a5)
{
  int v5; // r5
  int v6; // r0
  int v7; // r4
  int v8; // r12
  int v9; // r1
  signed int v10; // r3
  int v11; // r5
  int v12; // r2
  int v13; // r3
  int v14; // r5
  int i; // r4
  int v16; // r7
  unsigned int v17; // r4
  int v19; // [sp+4h] [bp-10h]
  int v20; // [sp+8h] [bp-Ch]
  int v21; // [sp+Ch] [bp-8h]

  v5 = *(_DWORD *)(a1 + 108);
  v6 = *(_DWORD *)(a1 + 104);
  if ( (v6 & 4) == 0 )
    return a3;
  v7 = v5 + 396 * a2 + 40;
  if ( *(_BYTE *)(v7 + 212) != 0 )
    return a3;
  v8 = 0;
  if ( a3 < 0 )
  {
    a3 = -a3;
    v8 = 1;
  }
  v9 = a2 - 1;
  if ( v9 == 0 )
  {
    if ( (v6 & 2) != 0 )
      goto LABEL_28;
LABEL_9:
    if ( (a5 & 2) != 0 && v9 == 0 && a3 <= 191 )
      goto LABEL_53;
    if ( (a4 & 1) != 0 )
    {
      if ( a3 <= 79 )
        a3 = 64;
    }
    else if ( a3 <= 55 )
    {
      a3 = 56;
    }
    if ( *(_DWORD *)(v7 + 8) == 0 )
      goto LABEL_53;
    v10 = *(_DWORD *)(v7 + 16);
    if ( ((a3 - v10 + ((a3 - v10) >> 31)) ^ ((a3 - v10) >> 31)) > 39 )
    {
      if ( a3 <= 191 )
      {
        if ( (a3 & 0x3Fu) > 9 )
        {
          v11 = a3 & 0xC0;
          if ( (a3 & 0x3Fu) > 0x1F )
          {
            if ( (a3 & 0x3Fu) <= 0x35 )
              a3 = v11 + 54;
          }
          else
          {
            a3 = v11 + 10;
          }
        }
        goto LABEL_53;
      }
      v12 = a3 + 32;
LABEL_44:
      a3 = v12 & 0xFFFFFFC0;
      goto LABEL_53;
    }
    a3 = 48;
    if ( v10 <= 47 )
      goto LABEL_53;
    goto LABEL_52;
  }
  if ( (v6 & 1) == 0 )
    goto LABEL_9;
LABEL_28:
  v20 = v7 + 12;
  v21 = *(_DWORD *)(v7 + 8);
  v13 = a3;
  v14 = 98;
  for ( i = 0; i < v21; ++i )
  {
    v16 = *(_DWORD *)(v20 + 12 * i + 4);
    v19 = (a3 - v16 + ((a3 - v16) >> 31)) ^ ((a3 - v16) >> 31);
    if ( v19 >= v14 )
    {
      v16 = v13;
      v19 = v14;
    }
    v13 = v16;
    v14 = v19;
  }
  v17 = (v13 + 32) & 0xFFFFFFC0;
  if ( a3 < v13 )
  {
    if ( (int)(v17 - 47) > a3 )
LABEL_37:
      v13 = a3;
  }
  else if ( (int)(v17 + 47) < a3 )
  {
    goto LABEL_37;
  }
  if ( v9 == 0 )
  {
    a3 = 64;
    if ( v13 <= 63 )
      goto LABEL_53;
    v12 = v13 + 16;
    goto LABEL_44;
  }
  if ( (v6 & 8) != 0 )
  {
    a3 = 64;
    if ( v13 <= 63 )
      goto LABEL_53;
    v12 = v13 + 32;
    goto LABEL_44;
  }
  if ( v13 <= 47 )
  {
    a3 = v13;
LABEL_50:
    a3 = (a3 + 64) >> 1;
    goto LABEL_53;
  }
  if ( v13 > 127 )
  {
    a3 = (v13 + 32) & 0xFFFFFFC0;
    goto LABEL_53;
  }
  v10 = (v13 + 22) & 0xFFFFFFC0;
  if ( ((v10 - a3 + ((v10 - a3) >> 31)) ^ ((v10 - a3) >> 31)) > 15 )
  {
    if ( a3 > 47 )
      goto LABEL_53;
    goto LABEL_50;
  }
LABEL_52:
  a3 = v10;
LABEL_53:
  if ( v8 != 0 )
    return -a3;
  return a3;
}


//======================================================================
// sub_13985E
// address: 0x0013985E   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_13985E(int a1, int a2, int a3, int a4)
{
  int v5; // [sp+0h] [bp-8h]

  *(_DWORD *)(a4 + 8) = *(_DWORD *)(a3 + 8)
                      + sub_1396F0(
                          a1,
                          a2,
                          *(_DWORD *)(a4 + 4) - *(_DWORD *)(a3 + 4),
                          *(_BYTE *)(a3 + 12),
                          *(_BYTE *)(a4 + 12));
  return v5;
}


//======================================================================
// sub_13987C
// address: 0x0013987C   size: 0x162 (354 bytes)
//======================================================================
__int16 *__fastcall sub_13987C(int a1, int a2)
{
  unsigned __int16 *v2; // r4
  int v3; // r3
  __int16 *result; // r0
  __int16 *v5; // r5
  int v6; // r3
  int v7; // r7
  int v8; // r1
  int v9; // r7
  int i; // r3
  __int16 *v11; // r2
  int v12; // r1
  int v13; // r3
  __int16 *v14; // r6
  int v15; // [sp+4h] [bp-20h]
  int v16; // [sp+8h] [bp-1Ch]
  int v17; // [sp+8h] [bp-1Ch]
  int v19; // [sp+10h] [bp-14h]
  __int16 *v20; // [sp+14h] [bp-10h]
  int v21; // [sp+18h] [bp-Ch]
  unsigned __int16 *v22; // [sp+1Ch] [bp-8h]

  v2 = *(unsigned __int16 **)(a1 + 28);
  v3 = *(_DWORD *)(a1 + 24);
  result = (__int16 *)(a1 + 28 * a2);
  v5 = *((__int16 **)result + 16);
  v19 = 128;
  v20 = &v5[24 * *((_DWORD *)result + 14)];
  if ( a2 == 0 )
    v19 = 64;
  if ( v5 < v20 )
  {
    v22 = &v2[20 * v3];
    v21 = -1431655765 * ((48 * *((_DWORD *)result + 14)) >> 4);
    while ( 1 )
    {
      if ( v2 >= v22 )
        return result;
      v6 = *v2;
      if ( (v19 & v6) == 0 && (v6 & 0x300) != 0x100 )
        break;
LABEL_36:
      v2 += 20;
    }
    if ( a2 == 1 )
    {
      result = (_WORD *)(byte_9 + 5);
      v7 = (__int16)v2[7];
      v8 = *((_DWORD *)v2 + 2);
    }
    else
    {
      v7 = (__int16)v2[6];
      v8 = *((_DWORD *)v2 + 1);
    }
    if ( *v5 - v7 < 0 )
    {
      result = nullptr;
      if ( v7 - *(v20 - 24) < 0 )
      {
        if ( v21 > 8 )
        {
          i = 0;
          v15 = -1431655765 * (((char *)v20 - (char *)v5) >> 4);
          while ( i < v15 )
          {
            v12 = (v15 + i) >> 1;
            result = &v5[24 * v12];
            v16 = *result;
            if ( v7 >= v16 )
            {
              if ( v7 <= v16 )
              {
                v9 = *((_DWORD *)result + 2);
                goto LABEL_32;
              }
              i = v12 + 1;
            }
            else
            {
              v15 = (v15 + i) >> 1;
            }
          }
        }
        else
        {
          for ( i = 0; i < v21 && v5[24 * i] < v7; ++i )
            ;
          v11 = &v5[24 * i];
          if ( *v11 == v7 )
          {
            v9 = *((_DWORD *)v11 + 2);
            goto LABEL_32;
          }
        }
        v13 = 24 * i;
        v14 = &v5[v13 - 24];
        if ( *((_DWORD *)v14 + 4) == 0 )
          *((_DWORD *)v14 + 4) = FT_DivFix(*(_DWORD *)&v5[v13 + 4] - *((_DWORD *)v14 + 2), v5[v13] - *v14);
        v17 = *((_DWORD *)v14 + 2);
        result = (__int16 *)FT_MulFix(v7 - *v14, *((_DWORD *)v14 + 4));
        v9 = (int)result + v17;
        goto LABEL_32;
      }
      v9 = v8 - *((_DWORD *)v20 - 11) + *((_DWORD *)v20 - 10);
    }
    else
    {
      v9 = v8 - *((_DWORD *)v5 + 1) + *((_DWORD *)v5 + 2);
    }
LABEL_32:
    if ( a2 != 0 )
      *((_DWORD *)v2 + 5) = v9;
    else
      *((_DWORD *)v2 + 4) = v9;
    *v2 |= v19;
    goto LABEL_36;
  }
  return result;
}


//======================================================================
// sub_1399E4
// address: 0x001399E4   size: 0xBC (188 bytes)
//======================================================================
unsigned int __fastcall sub_1399E4(unsigned int result, unsigned int a2, int a3, int a4)
{
  int v6; // r5
  unsigned int v7; // r4
  int v8; // r2
  int v9; // r3
  int v10; // r3
  int v11; // r2
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r1
  int v16; // [sp+4h] [bp-18h]
  int v17; // [sp+8h] [bp-14h]
  int v18; // [sp+8h] [bp-14h]
  int v20; // [sp+10h] [bp-Ch]
  int v21; // [sp+14h] [bp-8h]

  v16 = *(_DWORD *)(a4 + 28);
  v6 = *(_DWORD *)(a3 + 28);
  v7 = result;
  v8 = *(_DWORD *)(a3 + 24);
  v9 = *(_DWORD *)(a4 + 24);
  if ( result > a2 )
    return result;
  v20 = v8 - v6;
  v21 = v9 - v16;
  if ( v6 != v16 )
  {
    if ( v6 < v16 )
    {
      while ( 1 )
      {
        v12 = *(_DWORD *)(v7 + 28);
        if ( v12 <= v6 )
          break;
        if ( v12 < v16 )
        {
          v17 = *(_DWORD *)(a3 + 24);
          v12 = FT_MulDiv(v12 - v6, *(_DWORD *)(a4 + 24) - v17, v16 - v6);
          v13 = v17;
          goto LABEL_13;
        }
        result = v12 + v21;
LABEL_14:
        *(_DWORD *)(v7 + 24) = result;
        v7 += 40;
        if ( v7 > a2 )
          return result;
      }
      v13 = v20;
LABEL_13:
      result = v13 + v12;
      goto LABEL_14;
    }
    while ( 1 )
    {
      v14 = *(_DWORD *)(v7 + 28);
      if ( v14 <= v16 )
        break;
      if ( v14 < v6 )
      {
        v18 = *(_DWORD *)(a3 + 24);
        v14 = FT_MulDiv(v14 - v6, *(_DWORD *)(a4 + 24) - v18, v16 - v6);
        v15 = v18;
        goto LABEL_22;
      }
      result = v14 + v20;
LABEL_18:
      *(_DWORD *)(v7 + 24) = result;
      v7 += 40;
      if ( v7 > a2 )
        return result;
    }
    v15 = v21;
LABEL_22:
    result = v15 + v14;
    goto LABEL_18;
  }
  do
  {
    v10 = *(_DWORD *)(v7 + 28);
    v11 = v10 + v21;
    if ( v10 <= v6 )
      v11 = v10 + v20;
    *(_DWORD *)(v7 + 24) = v11;
    v7 += 40;
  }
  while ( v7 <= a2 );
  return result;
}


//======================================================================
// sub_139AA0
// address: 0x00139AA0   size: 0x134 (308 bytes)
//======================================================================
_DWORD *__fastcall sub_139AA0(_DWORD *result, int a2)
{
  _DWORD *v2; // r5
  _DWORD *i; // r3
  _DWORD *j; // r3
  int v5; // r1
  __int16 v6; // r3
  int v7; // r1
  unsigned int v8; // r6
  unsigned int v9; // r4
  _WORD *k; // r7
  unsigned int v11; // r0
  unsigned int v12; // r3
  int v13; // r0
  int v14; // r1
  int v15; // r2
  unsigned int v16; // [sp+4h] [bp-20h]
  unsigned int v17; // [sp+8h] [bp-1Ch]
  unsigned int *v18; // [sp+Ch] [bp-18h]
  __int16 v19; // [sp+10h] [bp-14h]
  _DWORD *v20; // [sp+14h] [bp-10h]
  unsigned int v22; // [sp+1Ch] [bp-8h]

  v2 = (_DWORD *)result[7];
  v20 = &v2[10 * result[6]];
  v22 = result[10] + 4 * result[9];
  v18 = (unsigned int *)result[10];
  if ( a2 != 0 )
  {
    for ( i = (_DWORD *)result[7]; i < v20; i += 10 )
    {
      result = (_DWORD *)i[5];
      v7 = i[2];
      i[6] = result;
      i[7] = v7;
    }
    v6 = 128;
  }
  else
  {
    for ( j = (_DWORD *)result[7]; j < v20; j += 10 )
    {
      result = (_DWORD *)j[4];
      v5 = j[1];
      j[6] = result;
      j[7] = v5;
    }
    v6 = 64;
  }
  v19 = v6;
  while ( (unsigned int)v18 < v22 )
  {
    v8 = *v18;
    v9 = *v18;
    v16 = *(_DWORD *)(*v18 + 36);
    while ( v9 <= v16 )
    {
      if ( ((unsigned __int16)v19 & *(_WORD *)v9) != 0 )
      {
        v17 = v9;
        while ( 1 )
        {
          v11 = v9 + 40;
          if ( v9 >= v16 || (*(_WORD *)(v9 + 40) & (unsigned __int16)v19) == 0 )
            break;
          k = (_WORD *)(v9 + 40);
LABEL_19:
          v9 = (unsigned int)k;
        }
        v12 = v9 + 40;
        for ( k = (_WORD *)(v9 + 40); (unsigned int)k <= v16; k += 20 )
        {
          if ( ((unsigned __int16)v19 & *k) != 0 )
          {
            sub_1399E4(v11, (unsigned int)(k - 20), v9, (int)k);
            goto LABEL_19;
          }
        }
        if ( v9 == v17 )
        {
          v13 = *(_DWORD *)(v9 + 24);
          v14 = *(_DWORD *)(v9 + 28);
          v15 = v13 - v14;
          if ( v13 != v14 )
          {
            while ( v8 < v9 )
            {
              *(_DWORD *)(v8 + 24) = *(_DWORD *)(v8 + 28) + v15;
              v8 += 40;
            }
            while ( v12 <= v16 )
            {
              *(_DWORD *)(v12 + 24) = *(_DWORD *)(v12 + 28) + v15;
              v12 += 40;
            }
          }
        }
        else
        {
          if ( v9 < v16 )
            sub_1399E4(v11, v16, v9, v17);
          if ( v17 > (unsigned int)v2 )
            sub_1399E4(v8, v17 - 40, v9, v17);
        }
        break;
      }
      v9 += 40;
    }
    result = ++v18;
  }
  if ( a2 != 0 )
  {
    while ( v2 < v20 )
    {
      v2[5] = v2[6];
      v2 += 10;
    }
  }
  else
  {
    while ( v2 < v20 )
    {
      result = (_DWORD *)v2[6];
      v2[4] = result;
      v2 += 10;
    }
  }
  return result;
}


//======================================================================
// sub_139BD4
// address: 0x00139BD4   size: 0x130 (304 bytes)
//======================================================================
int __fastcall sub_139BD4(int a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r0
  int v5; // r3
  int v6; // r12
  int v7; // r3
  int v8; // r7
  int v9; // r5
  int v10; // r3
  int i; // r4
  int v12; // r7
  unsigned int v13; // r4
  int v14; // r2
  int v15; // r2
  int v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch]
  int v19; // [sp+Ch] [bp-8h]

  v3 = *(_DWORD *)(a1 + 108);
  v4 = *(_DWORD *)(a1 + 104);
  if ( (v4 & 4) == 0 )
    return a3;
  v18 = 0;
  if ( a3 < 0 )
  {
    a3 = -a3;
    v18 = 1;
  }
  v5 = v3 + 340 * a2 + 40;
  v6 = *(_DWORD *)(v5 + 8);
  if ( a2 == 1 )
  {
    if ( (v4 & 2) != 0 )
      goto LABEL_20;
LABEL_8:
    if ( *(_DWORD *)(v5 + 8) != 0 && (v7 = *(_DWORD *)(v5 + 16), (unsigned int)(a3 - v7 + 39) <= 0x4E) )
    {
      a3 = 48;
      if ( v7 > 47 )
        a3 = v7;
    }
    else if ( a3 > 53 )
    {
      if ( a3 <= 191 && (a3 & 0x3Fu) > 9 )
      {
        v8 = a3 & 0xC0;
        if ( (a3 & 0x3Fu) > 0x15 )
        {
          if ( (a3 & 0x3Fu) - 42 <= 0xB )
            a3 = v8 + 54;
        }
        else
        {
          a3 = v8 + 10;
        }
      }
    }
    else
    {
      a3 += (54 - a3) >> 1;
    }
    goto LABEL_43;
  }
  if ( (v4 & 1) == 0 )
    goto LABEL_8;
LABEL_20:
  v19 = v5 + 12;
  v9 = 98;
  v10 = a3;
  for ( i = 0; i < v6; ++i )
  {
    v12 = *(_DWORD *)(v19 + 12 * i + 4);
    v17 = (a3 - v12 + ((a3 - v12) >> 31)) ^ ((a3 - v12) >> 31);
    if ( v17 >= v9 )
    {
      v12 = v10;
      v17 = v9;
    }
    v10 = v12;
    v9 = v17;
  }
  v13 = (v10 + 32) & 0xFFFFFFC0;
  if ( a3 < v10 )
  {
    if ( (int)(v13 - 47) <= a3 )
      goto LABEL_30;
  }
  else if ( (int)(v13 + 47) >= a3 )
  {
    goto LABEL_30;
  }
  v10 = a3;
LABEL_30:
  if ( a2 == 1 )
  {
    a3 = 64;
    if ( v10 <= 63 )
      goto LABEL_43;
    v14 = v10 + 16;
LABEL_36:
    a3 = v14 & 0xFFFFFFC0;
    goto LABEL_43;
  }
  if ( (v4 & 8) != 0 )
  {
    a3 = 64;
    if ( v10 <= 63 )
      goto LABEL_43;
    v14 = v10 + 32;
    goto LABEL_36;
  }
  if ( v10 > 47 )
  {
    if ( v10 > 127 )
      v15 = v10 + 32;
    else
      v15 = v10 + 22;
    a3 = v15 & 0xFFFFFFC0;
  }
  else
  {
    a3 = (v10 + 64) >> 1;
  }
LABEL_43:
  if ( v18 != 0 )
    return -a3;
  return a3;
}


//======================================================================
// sub_139D04
// address: 0x00139D04   size: 0x126 (294 bytes)
//======================================================================
int __fastcall sub_139D04(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r4
  int v9; // r0
  int v10; // r2
  int v11; // r12
  int v12; // r1
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r7
  int v17; // r2
  int v18; // r7
  int v19; // r0
  int v21; // [sp+0h] [bp-14h]
  int v22; // [sp+4h] [bp-10h]
  int v23; // [sp+8h] [bp-Ch]
  int v24; // [sp+Ch] [bp-8h]

  v21 = *(_DWORD *)(a1 + 104) & 4;
  v8 = 64;
  if ( v21 == 0 )
  {
    if ( (*(_BYTE *)(a2 + 12) & 1) != 0 && (*(_BYTE *)(a3 + 12) & 1) != 0 )
    {
      v8 = 49;
      if ( a5 == 1 )
        v8 = 55;
    }
    else
    {
      v8 = 59;
      if ( a5 == 1 )
        v8 = 61;
    }
  }
  v22 = *(_DWORD *)(a3 + 4);
  v23 = *(_DWORD *)(a2 + 4);
  v9 = sub_139BD4(a1, a5, v22 - v23);
  v10 = (v23 + v22) / 2 + a4 - v9 / 2;
  v11 = v10;
  v12 = v10 & 0x3F;
  if ( (v10 & 0x3F) == 0 )
  {
    v14 = 0;
    goto LABEL_41;
  }
  v13 = (v10 + v9) & 0x3F;
  if ( v13 == 0 )
  {
    v14 = 0;
    goto LABEL_41;
  }
  v14 = 64 - v12;
  if ( v9 > v8 )
  {
    if ( v8 <= 63 && (v12 >= v8 || v14 >= v8 || v13 >= v8 || 64 - v13 >= v8) )
      goto LABEL_40;
    v15 = v9 & 0x3F;
    if ( (unsigned int)v15 > 0x1F )
    {
      v15 = 64 - v8;
    }
    else if ( v14 <= v15 || v13 <= v15 )
    {
      goto LABEL_40;
    }
    v24 = v8 - v14;
    v16 = v14 - v15;
    v14 = v8 - v13;
    v17 = v13 - v15;
    if ( v24 <= v16 )
      v16 = -v24;
    if ( v17 <= v14 )
      v14 = -v17;
    if ( ((v16 + (v16 >> 31)) ^ (v16 >> 31)) <= ((v14 + (v14 >> 31)) ^ (v14 >> 31)) )
      v14 = v16;
    goto LABEL_30;
  }
  if ( v13 >= v9 )
  {
LABEL_40:
    v14 = 0;
LABEL_41:
    if ( v21 != 0 )
      goto LABEL_35;
    goto LABEL_32;
  }
  if ( v14 > v13 )
  {
    v14 = -v13;
    goto LABEL_41;
  }
LABEL_30:
  if ( v21 == 0 )
  {
    if ( v14 > 14 )
    {
      v14 = 14;
      goto LABEL_35;
    }
LABEL_32:
    if ( v14 < -14 )
      v14 = -14;
  }
LABEL_35:
  v18 = v11 + v14;
  v19 = v11 + v14 + v9;
  if ( v23 >= v22 )
  {
    *(_DWORD *)(a2 + 8) = v19;
    *(_DWORD *)(a3 + 8) = v18;
  }
  else
  {
    *(_DWORD *)(a2 + 8) = v18;
    *(_DWORD *)(a3 + 8) = v19;
  }
  return v14;
}


//======================================================================
// sub_139E2A
// address: 0x00139E2A   size: 0x108 (264 bytes)
//======================================================================
int __fastcall sub_139E2A(int a1, unsigned int *a2)
{
  int v3; // r5
  unsigned int v4; // r0
  int v5; // r0
  signed int v6; // r6
  unsigned __int8 Char; // r0
  int v8; // r4
  int v9; // r5
  _WORD *v10; // r7
  int UShort; // r0
  int v12; // r6
  int v13; // r4
  int v14; // r0
  _WORD *v15; // r3
  signed int v16; // r5
  __int16 v17; // r0
  __int16 v18; // r7
  signed int v20; // [sp+Ch] [bp-20h]
  int v21; // [sp+10h] [bp-1Ch]
  int v23; // [sp+18h] [bp-14h]
  signed int v24; // [sp+24h] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 28);
  v24 = 0;
  v4 = ((int (*)(void))FT_Stream_GetChar)() << 24;
  v20 = HIBYTE(v4);
  *a2 = HIBYTE(v4);
  if ( HIBYTE(v4) == 0 )
    return -1;
  if ( (v4 & 0x80000000) != 0 )
    v20 = (unsigned __int8)FT_Stream_GetChar(a1) | ((HIBYTE(v4) & 0x7F) << 8);
  v5 = ft_mem_realloc(v3, 2, 0, v20, 0, &v24);
  v6 = v24;
  v21 = v5;
  if ( v24 != 0 )
    return 0;
  while ( v6 < v20 )
  {
    Char = FT_Stream_GetChar(a1);
    v8 = Char;
    v23 = v6 + 1;
    if ( (Char & 0x80) != 0 )
    {
      v9 = Char & 0x7F;
      v10 = (_WORD *)(v21 + 2 * v6);
      UShort = FT_Stream_GetUShort(a1);
      *v10 = UShort;
      v12 = UShort;
      if ( (v8 & 0x7F) == 0 || v23 + v9 >= v20 )
        return v21;
      v13 = 0;
      do
      {
        v14 = FT_Stream_GetUShort(a1);
        v15 = &v10[v13];
        v12 += v14;
        ++v13;
        v15[1] = v12;
      }
      while ( v13 != v9 );
      v16 = v9 + v23;
    }
    else
    {
      v16 = v6 + 1;
      v17 = (unsigned __int8)FT_Stream_GetChar(a1);
      *(_WORD *)(v21 + 2 * v6) = v17;
      v18 = v17;
      if ( v8 == 0 || v23 + v8 >= v20 )
        return v21;
      do
      {
        ++v16;
        v18 += (unsigned __int8)FT_Stream_GetChar(a1);
        *(_WORD *)(v21 + 2 * v16 - 2) = v18;
      }
      while ( v16 - 1 - v6 < v8 );
    }
    v6 = v16;
  }
  return v21;
}


//======================================================================
// sub_139F32
// address: 0x00139F32   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_139F32(int a1, unsigned int a2)
{
  int v3; // r0
  unsigned int v4; // r5
  char Char; // r0
  char v6; // r6
  unsigned int i; // r3
  unsigned int j; // r4
  int v9; // r0
  int v10; // r2
  __int16 UShort; // r0
  int v12; // r3
  __int16 v13; // r0
  int v14; // r3
  int v16; // [sp+8h] [bp-24h]
  int k; // [sp+10h] [bp-1Ch]
  int v19; // [sp+10h] [bp-1Ch]
  int v20; // [sp+18h] [bp-14h]
  unsigned int v21; // [sp+1Ch] [bp-10h]
  unsigned int v22; // [sp+24h] [bp-8h] BYREF

  v20 = *(_DWORD *)(a1 + 28);
  v22 = 0;
  v3 = ft_mem_realloc(v20, 2, 0, a2, 0, &v22);
  v4 = v22;
  v16 = v3;
  if ( v22 != 0 )
    return 0;
  while ( v4 < a2 )
  {
    Char = FT_Stream_GetChar(a1);
    v6 = Char;
    if ( Char < 0 )
    {
      for ( i = v4; ; ++i )
      {
        j = i - v4;
        if ( i - v4 > (v6 & 0x3Fu) || i == a2 )
          break;
        v9 = 2 * i;
        *(_WORD *)(v16 + v9) = 0;
      }
    }
    else
    {
      j = Char & 0x40;
      v21 = a2 - v4;
      v10 = 2 * v4;
      if ( (Char & 0x40) != 0 )
      {
        v19 = v16 + v10;
        for ( j = 0; ; ++j )
        {
          i = j + v4;
          if ( j > (v6 & 0x3Fu) || j == v21 )
            break;
          UShort = FT_Stream_GetUShort(a1);
          v12 = 2 * j;
          *(_WORD *)(v19 + v12) = UShort;
        }
      }
      else
      {
        for ( k = v16 + v10; ; *(_WORD *)(k + v14) = v13 )
        {
          i = j + v4;
          if ( j > (v6 & 0x3Fu) || j == v21 )
            break;
          v13 = FT_Stream_GetChar(a1);
          v14 = 2 * j++;
        }
      }
    }
    if ( j <= (v6 & 0x3Fu) )
    {
      ft_mem_free(v20, v16);
      return 0;
    }
    v4 = i;
  }
  return v16;
}


//======================================================================
// sub_13A01C
// address: 0x0013A01C   size: 0x19C (412 bytes)
//======================================================================
int __fastcall sub_13A01C(_DWORD *a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v3; // r4
  unsigned int v5; // r3
  char *v6; // r2
  int result; // r0
  unsigned int v8; // r3
  int v9; // r3
  int *i; // r6
  int v11; // r0
  int v12; // r3
  unsigned int v13; // r2
  _WORD *v14; // r7
  int v15; // r0
  int v16; // r3
  char *v17; // r0
  int v18; // r1
  int v19; // r3
  unsigned int v20; // [sp+4h] [bp-18h]
  char *v21; // [sp+8h] [bp-14h]
  int v22; // [sp+Ch] [bp-10h]
  char *v24; // [sp+14h] [bp-8h]

  v3 = a2;
  a1[101] = a1 + 4;
  v21 = (char *)(a1 + 4);
  a1[1] = a2;
  a1[2] = a3;
  a1[3] = a2;
  while ( 1 )
  {
    if ( (unsigned int)v3 >= a3 )
      return 0;
    v5 = *v3;
    v6 = (char *)a1[101];
    if ( v5 <= 0x1A || v5 == 31 )
    {
      *(_DWORD *)v6 = v3;
      if ( v5 == 12 )
      {
        if ( (unsigned int)(v3 + 1) >= a3 )
          return 6;
        v5 = *++v3 | 0x100;
      }
      v9 = v5 | a1[102];
      for ( i = (int *)&unk_452400; ; i += 7 )
      {
        v11 = *i;
        if ( *i == 0 )
          goto LABEL_51;
        if ( i[1] == v9 )
          break;
      }
      v12 = a1[103];
      v13 = (v6 - v21) >> 2;
      v14 = (_WORD *)(v12 + i[2]);
      if ( v11 == 6 )
      {
        v20 = v13;
        if ( v13 > i[5] )
          v20 = i[5];
        v17 = v21;
        *(_BYTE *)(v12 + i[6]) = v20;
        v22 = 0;
        while ( v20 != 0 )
        {
          v24 = v17 + 4;
          v18 = v22 + ((int (*)(void))sub_224ECC)();
          v22 = v18;
          v19 = *((unsigned __int8 *)i + 12);
          switch ( v19 )
          {
            case 2:
              *v14 = v18;
              break;
            case 4:
              *(_DWORD *)v14 = v18;
              break;
            case 1:
              *(_BYTE *)v14 = v18;
              break;
            default:
              *(_DWORD *)v14 = v18;
              break;
          }
          v17 = v24;
          v14 = (_WORD *)((char *)v14 + *((unsigned __int8 *)i + 12));
          --v20;
        }
LABEL_51:
        a1[101] = v21;
        goto LABEL_52;
      }
      if ( v13 != 0 )
      {
        switch ( v11 )
        {
          case 1:
          case 4:
          case 5:
            v15 = sub_224ECC(v21);
            goto LABEL_31;
          case 2:
            v15 = sub_224E7C(v21);
            goto LABEL_31;
          case 3:
            v15 = sub_224E9C(v21, 3);
LABEL_31:
            v16 = *((unsigned __int8 *)i + 12);
            if ( v16 == 2 )
            {
              *v14 = v15;
            }
            else if ( v16 == 1 )
            {
              *(_BYTE *)v14 = v15;
            }
            else
            {
              *(_DWORD *)v14 = v15;
            }
            goto LABEL_51;
          default:
            result = ((int (__fastcall *)(_DWORD *))i[4])(a1);
            if ( result == 0 )
              goto LABEL_51;
            return result;
        }
      }
      return 6;
    }
    if ( v6 - v21 > 383 )
      return 6;
    a1[101] = v6 + 4;
    *(_DWORD *)v6 = v3;
    if ( v5 == 30 )
      break;
    if ( v5 == 28 )
    {
      v3 += 2;
    }
    else if ( v5 == 29 )
    {
      v3 += 4;
    }
    else
    {
      v3 += v5 > 0xF6;
    }
LABEL_52:
    ++v3;
  }
  ++v3;
  while ( v3 != (unsigned __int8 *)a3 )
  {
    v8 = *v3;
    if ( v8 >> 4 == 15 || (v8 & 0xF) == 0xF )
      goto LABEL_52;
    ++v3;
  }
  return 0;
}


//======================================================================
// sub_13A1BC
// address: 0x0013A1BC   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_13A1BC(_DWORD *a1, int a2, int a3)
{
  int v4; // r4
  int i; // r3
  unsigned int v7; // r7
  int v8; // r0
  int v9; // r2
  int v10; // r3
  int v11; // r2
  int v12; // r1
  int v14; // [sp+Ch] [bp-8h] BYREF

  v4 = a1[4];
  v14 = 0;
  if ( v4 == 0 )
  {
    for ( i = 0; i != a2; ++i )
    {
      v7 = *(unsigned __int16 *)(2 * i + a1[2]);
      if ( v7 < (unsigned __int16)v4 )
        LOWORD(v7) = v4;
      v4 = (unsigned __int16)v7;
    }
    v8 = ft_mem_realloc(a3, 2, 0, v4 + 1, 0, &v14);
    v9 = v14;
    a1[3] = v8;
    if ( v9 == 0 )
    {
      v10 = a2 - 1;
      v11 = 2 * (a2 + 0x7FFFFFFF);
      while ( v10 >= 0 )
      {
        v12 = *(unsigned __int16 *)(a1[2] + v11);
        v11 -= 2;
        *(_WORD *)(2 * v12 + a1[3]) = v10--;
      }
      a1[4] = v4;
      a1[5] = a2;
    }
  }
  return v14;
}


//======================================================================
// sub_13A234
// address: 0x0013A234   size: 0x1E8 (488 bytes)
//======================================================================
int __fastcall sub_13A234(int *a1, unsigned int **a2, int *a3)
{
  int v4; // r2
  int v5; // r2
  int v6; // r3
  int v7; // r5
  int v8; // r7
  int v9; // r7
  int v10; // r6
  int v11; // r7
  unsigned __int8 *v12; // r3
  int *v13; // r2
  unsigned __int8 *v14; // r7
  int v15; // r1
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int v20; // r1
  int v21; // r0
  unsigned int *v22; // r6
  unsigned int v23; // r1
  unsigned int v24; // r3
  void **v25; // r7
  unsigned int v26; // r3
  int v27; // r0
  unsigned int v28; // r5
  unsigned int v29; // r2
  int v31; // [sp+8h] [bp-24h]
  int v32; // [sp+Ch] [bp-20h]
  unsigned int i; // [sp+Ch] [bp-20h]
  int v34; // [sp+10h] [bp-1Ch]
  int v35; // [sp+10h] [bp-1Ch]
  int v37; // [sp+18h] [bp-14h]
  int v39; // [sp+20h] [bp-Ch] BYREF
  int v40; // [sp+24h] [bp-8h] BYREF

  v4 = *(_DWORD *)(*a1 + 28);
  *a2 = nullptr;
  v32 = v4;
  v5 = a1[6];
  v39 = 0;
  if ( v5 != 0 )
    goto LABEL_49;
  v7 = *a1;
  v8 = a1[2];
  v40 = 0;
  v34 = *(_DWORD *)(v7 + 28);
  if ( v8 != 0 )
  {
    v9 = v8 + 1;
    v10 = *((unsigned __int8 *)a1 + 12);
    a1[6] = ft_mem_realloc(v34, 4, 0, v9, 0, &v40);
    if ( v40 == 0 )
    {
      v40 = FT_Stream_Seek(v7, a1[1] + 3);
      if ( v40 == 0 )
      {
        v11 = v9 * v10;
        v40 = FT_Stream_EnterFrame(v7, v11);
        if ( v40 == 0 )
        {
          v12 = *(unsigned __int8 **)(v7 + 32);
          v13 = (int *)a1[6];
          v14 = &v12[v11];
          switch ( v10 )
          {
            case 2:
              while ( v12 < v14 )
              {
                v16 = *v12;
                v17 = v12[1];
                v12 += 2;
                *v13++ = (v16 << 8) | v17;
              }
              break;
            case 3:
              while ( v12 < v14 )
              {
                v18 = (v12[1] << 8) | ((char)*v12 << 16);
                v19 = v12[2];
                v12 += 3;
                *v13++ = v18 | v19;
              }
              break;
            case 1:
              while ( v12 < v14 )
              {
                v15 = *v12++;
                *v13++ = v15;
              }
              break;
            default:
              while ( v12 < v14 )
              {
                v20 = (v12[1] << 16) | (*v12 << 24) | v12[3];
                v21 = v12[2];
                v12 += 4;
                *v13++ = v20 | (v21 << 8);
              }
              break;
          }
          FT_Stream_ExitFrame(v7);
        }
      }
    }
  }
  if ( v40 != 0 )
  {
    ft_mem_free(v34, a1[6]);
    a1[6] = 0;
  }
  v39 = v40;
  if ( v40 == 0 )
  {
LABEL_49:
    v6 = a1[2];
    if ( v6 != 0 )
    {
      v22 = (unsigned int *)ft_mem_realloc(v32, 4, 0, v6 + 1, 0, &v39);
      if ( v39 == 0 )
      {
        if ( a3 != nullptr )
        {
          v35 = ft_mem_alloc(v32, a1[2] + a1[5], &v39);
          if ( v39 != 0 )
            return v39;
        }
        else
        {
          v35 = 0;
        }
        v37 = a1[7];
        v23 = *(_DWORD *)a1[6] - 1 < (unsigned int)a1[5] ? *(_DWORD *)a1[6] - 1 : 0;
        if ( a3 != nullptr )
          v24 = v35 + v23;
        else
          v24 = v37 + v23;
        *v22 = v24;
        v25 = (void **)v22;
        v31 = 0;
        for ( i = 1; ; ++i )
        {
          v26 = a1[2];
          if ( i > v26 )
            break;
          v27 = a1[6];
          v28 = *(_DWORD *)(4 * i + v27) - 1;
          if ( *(_DWORD *)(4 * i + v27) == 1 || v28 < v23 || v28 >= a1[5] && i < v26 )
            v28 = v23;
          if ( a3 != nullptr )
          {
            v29 = v35 + v28 + v31;
            v25[1] = (void *)v29;
            if ( v28 != v23 )
            {
              j_memcpy(*v25, (const void *)(v37 + v23), v29 - (_DWORD)*v25);
              *(_BYTE *)v25[1] = 0;
              ++v31;
              v25[1] = (char *)v25[1] + 1;
            }
          }
          else
          {
            v25[1] = (void *)(v37 + v28);
          }
          ++v25;
          v23 = v28;
        }
        *a2 = v22;
        if ( a3 != nullptr )
          *a3 = v35;
      }
    }
  }
  return v39;
}


//======================================================================
// sub_13A41C
// address: 0x0013A41C   size: 0x1AC (428 bytes)
//======================================================================
int __fastcall sub_13A41C(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int v8; // r5
  int v9; // r3
  int v10; // r0
  int v11; // r6
  int v12; // r1
  unsigned __int8 *v16; // [sp+18h] [bp-1ACh] BYREF
  int v17; // [sp+1Ch] [bp-1A8h] BYREF
  _DWORD v18[105]; // [sp+20h] [bp-1A4h] BYREF

  v16 = nullptr;
  j_memset(v18, 0, 0x1A0u);
  v18[101] = &v18[4];
  v18[0] = a6;
  v18[102] = 4096;
  v18[103] = a1;
  j_memset((void *)a1, 0, 0xB0u);
  *(_DWORD *)(a1 + 32) = -6553600;
  *(_DWORD *)(a1 + 36) = 3276800;
  *(_DWORD *)(a1 + 44) = 2;
  *(_DWORD *)(a1 + 48) = 0x10000;
  *(_DWORD *)(a1 + 60) = 0x10000;
  *(_DWORD *)(a1 + 156) = 8720;
  *(_DWORD *)a1 = 0xFFFF;
  *(_DWORD *)(a1 + 4) = 0xFFFF;
  *(_DWORD *)(a1 + 8) = 0xFFFF;
  *(_DWORD *)(a1 + 12) = 0xFFFF;
  *(_DWORD *)(a1 + 16) = 0xFFFF;
  *(_DWORD *)(a1 + 20) = 0xFFFF;
  *(_DWORD *)(a1 + 128) = 0xFFFF;
  *(_DWORD *)(a1 + 132) = 0xFFFF;
  *(_DWORD *)(a1 + 136) = 0xFFFF;
  *(_DWORD *)(a1 + 172) = 0xFFFF;
  v8 = sub_224B5A(a2, a3, &v16, &v17);
  if ( v8 == 0 )
    v8 = sub_13A01C(v18, v16, (unsigned int)&v16[v17]);
  sub_2250AC(a2, &v16);
  if ( v8 == 0 && *(_DWORD *)(a1 + 132) == 0xFFFF )
  {
    if ( *(_DWORD *)(a1 + 116) != 0 && *(_DWORD *)(a1 + 120) != 0 )
    {
      j_memset((void *)(a1 + 176), 0, 0x168u);
      *(_DWORD *)(a1 + 376) = 7;
      *(_DWORD *)(a1 + 380) = 1;
      *(_DWORD *)(a1 + 508) = -1;
      *(_DWORD *)(a1 + 516) = 3932;
      *(_DWORD *)(a1 + 372) = 2596864;
      j_memset(v18, 0, 0x1A0u);
      v18[101] = &v18[4];
      v18[102] = 0x2000;
      v18[103] = a1 + 176;
      v9 = *(_DWORD *)(a1 + 116);
      v18[0] = a6;
      v10 = FT_Stream_Seek(a4, a5 + v9);
      if ( v10 != 0 )
        return v10;
      v10 = FT_Stream_EnterFrame(a4, *(_DWORD *)(a1 + 120));
      if ( v10 != 0 )
        return v10;
      v11 = sub_13A01C(v18, *(unsigned __int8 **)(a4 + 32), *(_DWORD *)(a4 + 36));
      FT_Stream_ExitFrame(a4);
      if ( v11 != 0 )
        return v11;
      *(_BYTE *)(a1 + 176) &= ~1u;
    }
    v12 = *(_DWORD *)(a1 + 524);
    if ( v12 != 0 )
    {
      v8 = FT_Stream_Seek(a4, v12 + *(_DWORD *)(a1 + 116) + a5);
      if ( v8 == 0 )
      {
        v8 = sub_2251D8(a1 + 536, a4, 1);
        if ( v8 == 0 )
          return sub_13A234((int *)(a1 + 536), (unsigned int **)(a1 + 568), nullptr);
      }
    }
  }
  return v8;
}


//======================================================================
// sub_13A5DC
// address: 0x0013A5DC   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_13A5DC(int a1)
{
  __int64 v1; // r2
  _QWORD *v2; // r7
  int result; // r0
  void **v5; // r5
  void *v6; // r3

  v1 = *(_QWORD *)(a1 + 568);
  v2 = (_QWORD *)(a1 + 34408);
  *(_QWORD *)(a1 + 34408) = v1;
  if ( v1 != 0 || (result = *(_DWORD *)(a1 + 892)) != 0 )
  {
    v5 = (void **)(a1 + 34404);
    if ( *(_BYTE *)(a1 + 34402) != 0 )
      Curl_cfree(*v5);
    if ( *v2 != 0 )
      curl_maprintf("%llu-", *v2);
    *v5 = Curl_cstrdup(*(const char **)(a1 + 892));
    v6 = *v5;
    *(_BYTE *)(a1 + 34402) = *v5 != nullptr;
    if ( v6 != nullptr )
    {
      *(_BYTE *)(a1 + 34401) = 1;
      return 0;
    }
    else
    {
      return 27;
    }
  }
  else
  {
    *(_BYTE *)(a1 + 34401) = 0;
  }
  return result;
}


//======================================================================
// sub_13A680
// address: 0x0013A680   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_13A680(int *a1, int a2, int a3)
{
  int v3; // r6
  int v4; // r2
  int v5; // r1
  int v6; // r1
  int *v8; // [sp+0h] [bp-Ch] BYREF
  int v9; // [sp+4h] [bp-8h]
  int v10; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v3 = *a1;
  *((_BYTE *)a1 + 460) = 0;
  *((_BYTE *)a1 + 448) = 0;
  *(_BYTE *)(v3 + 34376) = 0;
  if ( *(_BYTE *)(v3 + 767) != 0 )
  {
    v4 = 5;
LABEL_5:
    *(_DWORD *)(v3 + 628) = v4;
    goto LABEL_6;
  }
  if ( *(_DWORD *)(v3 + 628) == 5 )
  {
    v4 = 1;
    goto LABEL_5;
  }
LABEL_6:
  curlx_tvnow(&v8);
  *(_DWORD *)(v3 + 136) = v8;
  *(_DWORD *)(v3 + 140) = v9;
  *(_DWORD *)(v3 + 144) = *(_DWORD *)(v3 + 136);
  *(_DWORD *)(v3 + 148) = *(_DWORD *)(v3 + 140);
  *(_BYTE *)(v3 + 152) = 1;
  *(_DWORD *)(v3 + 112) = 0;
  *(_DWORD *)(v3 + 116) = 0;
  *(_DWORD *)(v3 + 288) = v3 + 1388;
  *(_DWORD *)(v3 + 292) = v3 + 17773;
  *(_DWORD *)(v3 + 164) = *(_DWORD *)(v3 + 1380);
  *(_BYTE *)(v3 + 305) = 0;
  Curl_speedinit(v3);
  Curl_pgrsSetUploadCounter(v3, v5, 0, 0);
  Curl_pgrsSetDownloadCounter(v3, v6, 0, 0);
  return 0;
}


//======================================================================
// sub_13A730
// address: 0x0013A730   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_13A730(int result, int a2)
{
  char *v2; // r3
  char v3; // r2

  v2 = *(char **)(a2 + 8);
  *(_DWORD *)(a2 + 12) = v2;
  while ( 1 )
  {
    v3 = *v2;
    if ( *v2 == 0 )
      break;
    ++v2;
    if ( v3 < 0 )
      return Curl_infof(result, "IDN support not present, can't parse Unicode domains\n");
  }
  return result;
}


//======================================================================
// sub_13A750
// address: 0x0013A750   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_13A750(_DWORD *a1, int a2)
{
  int result; // r0

  if ( (*(_DWORD *)(a2 + 60) & 1) == 0 || Curl_multi_pipeline_enabled(a1[16]) == 0 )
    return 0;
  result = 0;
  if ( (a1[157] & 0xFFFFFFFB) == 1 )
    return a1[158] - 1 - (a1[158] - 2 + (a1[158] == 1));
  return result;
}


//======================================================================
// sub_13A788
// address: 0x0013A788   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_13A788(_DWORD *a1, int a2)
{
  int v3; // r1
  int result; // r0

  v3 = dword_510EE8 + 1;
  *(_DWORD *)(a2 + 52) = dword_510EE8;
  dword_510EE8 = v3;
  result = Curl_conncache_add_conn(*a1, a2);
  if ( result != 0 )
    *(_DWORD *)(a2 + 52) = -1;
  return result;
}


//======================================================================
// sub_13A7B0
// address: 0x0013A7B0   size: 0x2E (46 bytes)
//======================================================================
__int64 __fastcall sub_13A7B0(int a1, int a2, __int16 a3)
{
  int v6; // r0
  int v7; // r0

  v6 = sub_34CF50(a2);
  v7 = sub_3534B0(a1, a2, v6, 2);
  if ( v7 != 0 )
    *(_WORD *)(v7 + 2) |= a3;
  return 1;
}


//======================================================================
// sub_13A7DE
// address: 0x0013A7DE   size: 0x56 (86 bytes)
//======================================================================
bool __fastcall sub_13A7DE(int *a1, _DWORD *a2, int a3)
{
  _BOOL4 result; // r0
  int v6; // r7
  int v7; // r4
  int v8; // r2
  int v9; // r3

  if ( a1 == nullptr )
    return a2 != nullptr;
  if ( a2 == nullptr )
    return true;
  v6 = *a1;
  result = true;
  v7 = 0;
  if ( v6 == *a2 )
  {
    while ( v7 < v6 )
    {
      v8 = a1[2] + 20 * v7;
      v9 = a2[2] + 20 * v7;
      if ( *(unsigned __int8 *)(v8 + 12) != *(unsigned __int8 *)(v9 + 12)
        || sub_354228(*(_DWORD *)v8, *(_DWORD *)v9, a3) != 0 )
      {
        return true;
      }
      ++v7;
    }
    return false;
  }
  return result;
}


//======================================================================
// sub_13A834
// address: 0x0013A834   size: 0x66 (102 bytes)
//======================================================================
bool __fastcall sub_13A834(_DWORD *a1, int a2)
{
  int i; // r4
  int v6; // r1
  _BOOL4 v7; // r3

  for ( i = 0; i < *(unsigned __int16 *)(a2 + 50); ++i )
  {
    if ( *(__int16 *)(*(_DWORD *)(a2 + 4) + 2 * i) != *(__int16 *)(a1[1] + 2 * i)
      || *(unsigned __int8 *)(*(_DWORD *)(a2 + 28) + i) != *(unsigned __int8 *)(a1[7] + i) )
    {
      return false;
    }
    v6 = *(_DWORD *)(a1[8] + 4 * i);
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 32) + 4 * i) != 0 )
    {
      if ( v6 == 0 )
        return false;
      v7 = sqlite3_stricmp() == 0;
    }
    else
    {
      v7 = v6 == 0;
    }
    if ( !v7 )
      return false;
  }
  return sub_354228(*(_DWORD *)(a2 + 36), a1[9], -1) == 0;
}


//======================================================================
// sub_13A89A
// address: 0x0013A89A   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_13A89A(int a1)
{
  int v2; // r3
  int v3; // r5

  sub_3574C2();
  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( *(_BYTE *)(v2 + 17) != 0 )
    v3 = (*(_BYTE *)(v2 + 18) != 0) + 1;
  sub_35655E(a1);
  return v3;
}


//======================================================================
// sub_13A8BE
// address: 0x0013A8BE   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall sub_13A8BE(__int64 a1)
{
  int v1; // r5
  int v2; // r4
  int i; // r7
  int v4; // r6
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = a1;
  v1 = a1;
  if ( *(_BYTE *)(a1 + 62) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 16);
    for ( i = *(_DWORD *)(a1 + 20); i > 0; --i )
    {
      v4 = *(_DWORD *)(v2 + 4);
      if ( v4 != 0 )
      {
        LODWORD(v6) = *(unsigned __int8 *)(v2 + 8) | *(_DWORD *)(v1 + 24) & 0x1C;
        HIDWORD(v6) = *(_DWORD *)(v4 + 4);
        sub_3574C2(*(_DWORD *)(v2 + 4));
        sub_34E02E(*(_DWORD *)HIDWORD(v6), v6);
        sub_35655E(v4);
      }
      v2 += 16;
    }
  }
  return v6;
}


//======================================================================
// sub_13A908
// address: 0x0013A908   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_13A908(int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r7
  int i; // r5
  int *v6; // r3
  int v7; // r3

  v2 = *(_DWORD **)(a2 + 40);
  v3 = result;
  for ( i = 0; i < *(_DWORD *)(a2 + 44); ++i )
  {
    v6 = *(int **)(*v2 + 20);
    if ( v6 != nullptr )
      v7 = *v6;
    else
      v7 = 0;
    result = sub_35A9FC(v3, 136, v2[2], v7, 0, v2[1], -5);
    v2 += 4;
  }
  return result;
}


//======================================================================
// sub_13A94A
// address: 0x0013A94A   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_13A94A(int *a1, int a2, int a3)
{
  int v3; // r4
  int result; // r0
  int i; // r3
  int v9; // [sp+14h] [bp-8h]

  v3 = *(_DWORD *)(a2 + 20);
  if ( v3 == 0 )
  {
    v9 = *a1;
    result = sub_3516AC(0, *(__int16 *)(a2 + 38) + 1);
    v3 = result;
    if ( result == 0 )
    {
      *(_BYTE *)(v9 + 64) = 1;
      return result;
    }
    for ( i = 0; i < *(__int16 *)(a2 + 38); ++i )
      *(_BYTE *)(result + i) = *(_BYTE *)(*(_DWORD *)(a2 + 4) + 24 * i + 21);
    do
    {
      --i;
      *(_BYTE *)(result + i + 1) = 0;
    }
    while ( i != -1 && *(_BYTE *)(result + i) == 98 );
    *(_DWORD *)(a2 + 20) = result;
  }
  result = sub_34CF50(v3);
  if ( result != 0 )
  {
    if ( a3 != 0 )
      return sub_35A9FC(a1, 47, a3, result, 0, v3, result);
    else
      return sub_355AEA(a1, -1, v3, result);
  }
  return result;
}


//======================================================================
// sub_13A9DC
// address: 0x0013A9DC   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_13A9DC(_DWORD *a1, int a2, __int64 a3)
{
  int v4; // r5
  int v5; // r6
  _QWORD *v6; // r0

  v4 = sub_35A956();
  v5 = a1[19] + 1;
  a1[19] = v5;
  v6 = (_QWORD *)sub_3516AC(*a1, 8);
  if ( v6 != nullptr )
    *v6 = a3;
  sub_35A9FC(v4, 26, 0, v5, 0, v6, -13);
  sub_3559A0(v4, 1);
  sub_35A2BC(v4, 0, 0, a2, 0);
  return sub_35AAF0(v4, 35, v5, 1);
}


//======================================================================
// sub_13AA46
// address: 0x0013AA46   size: 0x224 (548 bytes)
//======================================================================
int __fastcall sub_13AA46(int a1, int a2, int a3, int a4, unsigned __int8 *a5)
{
  _DWORD *v7; // r5
  int v8; // r0
  int v9; // r2
  int v10; // r3
  int i; // r5
  int v12; // r1
  int result; // r0
  int v14; // [sp+1Ch] [bp-38h]
  int v15; // [sp+20h] [bp-34h]
  int v16; // [sp+24h] [bp-30h]
  int v17; // [sp+28h] [bp-2Ch]
  int v18; // [sp+2Ch] [bp-28h]
  int v19; // [sp+30h] [bp-24h]
  int v20; // [sp+34h] [bp-20h]
  int v22; // [sp+3Ch] [bp-18h]
  int v24; // [sp+44h] [bp-10h]
  int v25; // [sp+48h] [bp-Ch]
  int v26; // [sp+4Ch] [bp-8h]

  v24 = sub_35A856(*(_DWORD *)(a3 + 24));
  v25 = sub_35A856(*(_DWORD *)(a3 + 24));
  v7 = *(_DWORD **)(a2 + 56);
  v18 = *a5;
  v15 = *((_DWORD *)a5 + 1);
  v19 = v7[1];
  v8 = sub_34EA6E(a1);
  v14 = v8;
  if ( v18 == 5 || v18 == 9 )
  {
    v20 = *(_DWORD *)(a1 + 72);
    *(_DWORD *)(a1 + 72) = v20 + 1;
    sub_35A902(a3, 57, v20, v8, a4);
    v17 = 0;
  }
  else
  {
    v17 = sub_34EA6E(a1);
    v20 = 0;
  }
  if ( (*(_WORD *)(a2 + 6) & 0x40) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 72);
    v10 = *(_DWORD *)(a1 + 76) + 1;
    *(_DWORD *)(a1 + 76) = v10;
    v22 = v10;
    *(_DWORD *)(a1 + 72) = v9 + 1;
    v26 = v9;
    sub_35A902(a3, 57, v9, v10, *v7 + 2);
    v16 = sub_35AAF0(a3, 103, v19, v24) + 1;
    sub_35ABA8(a3, *(_DWORD *)(a2 + 12), v25);
    sub_35AAF0(a3, 95, v19, v22);
    sub_35A902(a3, 46, v26, *v7 + 1, v14);
    sub_34E458(a3, 32);
  }
  else
  {
    v16 = sub_35AAF0(a3, 104, v19, v24) + 1;
    sub_35ABA8(a3, *(_DWORD *)(a2 + 12), v25);
    sub_35A902(a3, 46, v19, *v7 + 1, v14);
  }
  switch ( v18 )
  {
    case 6:
      sub_35ACBA(a1, v14, v15, 1);
      break;
    case 7:
      sub_35A9FC(a3, 48, v14, 1, v17, a5 + 1, 1);
      sub_3532D2(a1, v14, 1);
      sub_35AAF0(a3, 107, v15, v17);
      break;
    case 8:
    case 10:
      sub_35AAF0(a3, 69, v15, v17);
      sub_35A902(a3, 70, v15, v14, v17);
      sub_34E458(a3, 8);
      break;
    default:
      for ( i = 0; i < a4; ++i )
      {
        sub_35A902(a3, 46, v20, i, i + *((_DWORD *)a5 + 2));
        if ( i == 0 )
          sub_34E458(a3, 32);
      }
      if ( v18 == 5 )
      {
        sub_35AAF0(a3, 35, *((_DWORD *)a5 + 2), a4);
        sub_3532D2(a1, *((_DWORD *)a5 + 2), a4);
      }
      else
      {
        sub_35AACE(a3, 22, *((_DWORD *)a5 + 1));
      }
      break;
  }
  sub_353416(a1, v14);
  sub_353416(a1, v17);
  sub_34E412(a3, v25);
  v12 = 5;
  if ( (*(_WORD *)(a2 + 6) & 0x40) == 0 )
    v12 = 9;
  sub_35AAF0(a3, v12, v19, v16);
  result = sub_34E412(a3, v24);
  if ( v18 == 5 || v18 == 9 )
    return sub_35AAF0(a3, 58, v20, 0);
  return result;
}


//======================================================================
// sub_13AC6A
// address: 0x0013AC6A   size: 0x12E (302 bytes)
//======================================================================
int __fastcall sub_13AC6A(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7, int a8, int a9)
{
  int result; // r0
  int v11; // r7
  int *v13; // r5
  int v14; // r1
  int v15; // r4
  int v16; // r7
  int v17; // r3
  int v18; // [sp+8h] [bp-1Ch]
  int v21; // [sp+14h] [bp-10h]

  result = sub_35A956();
  v11 = *(_DWORD *)(a2 + 8);
  v21 = 16 * (a9 != 0);
  v13 = (int *)result;
  v18 = 0;
  while ( v11 != 0 )
  {
    if ( *a6 != 0 )
    {
      if ( *(_DWORD *)(v11 + 36) != 0 )
        sub_35AAF0(v13, 76, *a6, v13[8] + 2);
      result = sub_35AAF0(v13, 107, a4, *a6);
      if ( (*(_BYTE *)(v11 + 55) & 3) == 2 && (*(_BYTE *)(a2 + 44) & 0x20) != 0 )
      {
        v14 = v21 | 1;
      }
      else
      {
        v18 = 1;
        v14 = 16 * (a9 != 0);
        if ( v21 == 0 )
          goto LABEL_12;
      }
      result = sub_34E458(v13, v14);
      v18 = 1;
    }
LABEL_12:
    v11 = *(_DWORD *)(v11 + 20);
    ++a6;
    ++a4;
  }
  if ( (*(_BYTE *)(a2 + 44) & 0x20) == 0 )
  {
    v15 = sub_34EA6E(a1);
    sub_35A902(v13, 48, a5 + 1, *(__int16 *)(a2 + 38), v15);
    if ( v18 == 0 )
      sub_13A94A(v13, a2, 0);
    sub_3532D2(a1, a5 + 1, *(__int16 *)(a2 + 38));
    v16 = 0;
    if ( *(_BYTE *)(a1 + 18) == 0 )
    {
      v17 = 2;
      if ( a7 != 0 )
        v17 = 4;
      v16 = v17 | 1;
    }
    if ( a8 != 0 )
      v16 |= 8u;
    if ( a9 != 0 )
      v16 |= 0x10u;
    sub_35A902(v13, 70, a3, v15, a5);
    if ( *(_BYTE *)(a1 + 18) == 0 )
      sub_355AEA(v13, -1, *(_DWORD *)a2, *(unsigned __int8 *)(a1 + 18));
    return sub_34E458(v13, v16);
  }
  return result;
}


//======================================================================
// sub_13AD98
// address: 0x0013AD98   size: 0xA2 (162 bytes)
//======================================================================
_DWORD *__fastcall sub_13AD98(_DWORD *result)
{
  int v1; // r4
  _DWORD *v2; // r5
  _DWORD *v3; // r6
  int v4; // r7
  int v5; // [sp+10h] [bp-14h]
  int v6; // [sp+14h] [bp-10h]
  int v7; // [sp+18h] [bp-Ch]
  int v8; // [sp+1Ch] [bp-8h]

  v1 = result[2];
  v7 = *result;
  v2 = (_DWORD *)result[102];
  v3 = result;
  while ( v2 != nullptr )
  {
    v4 = *(_DWORD *)(v7 + 16) + 16 * v2[2];
    v6 = v2[3];
    v5 = sub_34EA6E(v3);
    sub_361E26(v3, 0, v2[2], *(_DWORD *)(*(_DWORD *)(v4 + 12) + 72), 53);
    v8 = sub_35AACE(v1, 77, v6 + 1);
    sub_35AAF0(v1, 69, 0, v6 + 1);
    sub_34E46E(v1, v8);
    sub_35A902(v1, 48, v6 - 1, 2, v5);
    sub_35A902(v1, 70, 0, v5, v6 + 1);
    sub_34E458(v1, 8);
    sub_35A948(v1, 58);
    result = (_DWORD *)sub_353416(v3, v5);
    v2 = (_DWORD *)*v2;
  }
  return result;
}


//======================================================================
// sub_13AE3A
// address: 0x0013AE3A   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_13AE3A(_DWORD *a1, _DWORD *a2)
{
  int v4; // r5
  int v5; // r6
  int i; // r4
  int v7; // r0
  char v8; // r3
  int v10; // [sp+0h] [bp-Ch]
  int v11; // [sp+4h] [bp-8h]

  v10 = *a1;
  v11 = *a2;
  v4 = sub_3518F8(*a1, *a2, 1);
  if ( v4 != 0 )
  {
    v5 = a2[2];
    for ( i = 0; i < v11; ++i )
    {
      v7 = sub_3625D4(a1, *(_DWORD *)v5);
      if ( v7 == 0 )
        v7 = *(_DWORD *)(v10 + 8);
      *(_DWORD *)(v4 + 4 * i + 20) = v7;
      v8 = *(_BYTE *)(v5 + 12);
      v5 += 20;
      *(_BYTE *)(*(_DWORD *)(v4 + 16) + i) = v8;
    }
  }
  return v4;
}


//======================================================================
// sub_13AE88
// address: 0x0013AE88   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_13AE88(int result, _DWORD *a2)
{
  _DWORD *v3; // r7
  _DWORD *v4; // r5
  int i; // r6
  _DWORD *v6; // r1
  int v7; // r0
  int v8; // [sp+14h] [bp-8h]

  v8 = *(_DWORD *)(result + 8);
  v3 = (_DWORD *)result;
  if ( a2[11] + a2[8] != 0 )
  {
    result = sub_35A902(v8, 28, 0, a2[4], a2[5]);
    v4 = (_DWORD *)a2[10];
    for ( i = 0; i < a2[11]; ++i )
    {
      if ( (int)v4[3] >= 0 )
      {
        v6 = *(_DWORD **)(*v4 + 20);
        if ( v6 != nullptr && *v6 == 1 )
        {
          v7 = sub_13AE3A(v3, v6);
          result = sub_35A9FC(v8, 55, v4[3], 0, 0, v7, -6);
        }
        else
        {
          result = sub_360E94(v3, "DISTINCT aggregates must have exactly one argument");
          v4[3] = -1;
        }
      }
      v4 += 4;
    }
  }
  return result;
}


//======================================================================
// sub_13AF08
// address: 0x0013AF08   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall sub_13AF08(int *a1, int a2, int a3)
{
  int v5; // r1
  const char *v7; // r2
  int v8; // r0
  int v9; // r0
  int v10; // r1

  v5 = *(__int16 *)(a3 + 36);
  v7 = *(const char **)a3;
  v8 = *a1;
  if ( v5 < 0 )
  {
    v9 = sub_36541C(v8, "%s.rowid", v7);
    v10 = 2579;
  }
  else
  {
    v9 = sub_36541C(v8, "%s.%s", v7, *(const char **)(24 * v5 + *(_DWORD *)(a3 + 4)));
    v10 = 1555;
  }
  sub_35AA7C(a1, v10, a2, v9);
  return 0x2FFFFFFFFLL;
}


//======================================================================
// sub_13AF64
// address: 0x0013AF64   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_13AF64(int result, const char *a2)
{
  int v2; // r4
  int v3; // r5
  int v4; // r0

  v2 = result;
  if ( *(_BYTE *)(result + 454) == 2 )
  {
    v3 = *(_DWORD *)(result + 8);
    v4 = sub_36541C(*(_DWORD *)result, "USE TEMP B-TREE FOR %s", a2);
    return sub_35A9FC(v3, 156, *(_DWORD *)(v2 + 468), 0, 0, v4, -1);
  }
  return result;
}


//======================================================================
// sub_13AFA4
// address: 0x0013AFA4   size: 0x176 (374 bytes)
//======================================================================
int __fastcall sub_13AFA4(_DWORD *a1, int a2)
{
  int v2; // r2
  _DWORD *v3; // r5
  _DWORD *v6; // r6
  int v7; // r6
  int v8; // r3
  int v9; // r0
  int v10; // r6
  int v11; // r5
  int result; // r0
  int v13; // [sp+14h] [bp-20h]
  int j; // [sp+14h] [bp-20h]
  int v15; // [sp+18h] [bp-1Ch]
  int v16; // [sp+1Ch] [bp-18h]
  int v17; // [sp+20h] [bp-14h]
  int v18; // [sp+24h] [bp-10h]
  int v19; // [sp+28h] [bp-Ch]
  int i; // [sp+2Ch] [bp-8h]

  v2 = a1[2];
  v3 = *(_DWORD **)(a2 + 40);
  *(_BYTE *)a2 = 1;
  v18 = v2;
  v13 = 0;
  for ( i = 0; i < *(_DWORD *)(a2 + 44); ++i )
  {
    v6 = *(_DWORD **)(*v3 + 20);
    if ( v6 != nullptr )
    {
      v15 = *v6;
      v17 = sub_34EA92(a1, *v6);
      sub_373192(a1, v6, v17, 1);
    }
    else
    {
      v17 = 0;
      v15 = 0;
    }
    v19 = 0;
    if ( (int)v3[3] >= 0 )
    {
      v19 = sub_35A856(*(_DWORD *)(v18 + 24));
      sub_35AED4(a1, v3[3], v19, 1, v17);
    }
    if ( (*(_WORD *)(v3[1] + 2) & 0x20) != 0 )
    {
      v16 = v6[2];
      v7 = 0;
      while ( v7 < v15 )
      {
        v8 = 20 * v7++;
        v9 = sub_3625D4(a1, *(_DWORD *)(v16 + v8));
        if ( v9 != 0 )
          goto LABEL_14;
      }
      v9 = *(_DWORD *)(*a1 + 8);
LABEL_14:
      if ( v13 == 0 && *(_DWORD *)(a2 + 36) != 0 )
      {
        v13 = a1[19] + 1;
        a1[19] = v13;
      }
      sub_35A9FC(v18, 36, v13, 0, 0, v9, -4);
    }
    sub_35A9FC(v18, 10, 0, v17, v3[2], v3[1], -5);
    sub_34E458(v18, (unsigned __int8)v15);
    sub_3532D2(a1, v17, v15);
    sub_353306(a1, v17, v15);
    if ( v19 != 0 )
    {
      sub_34E412(v18, v19);
      sub_35331E(a1);
    }
    v3 += 4;
  }
  v10 = 0;
  if ( v13 != 0 )
    v10 = sub_35AACE(v18, 44, v13);
  sub_35331E(a1);
  v11 = *(_DWORD *)(a2 + 28);
  for ( j = 0; j < *(_DWORD *)(a2 + 36); ++j )
  {
    sub_372DE4(a1, *(_DWORD *)(v11 + 20), *(_DWORD *)(v11 + 16));
    v11 += 24;
  }
  *(_BYTE *)a2 = 0;
  result = sub_35331E(a1);
  if ( v10 != 0 )
    return sub_34E46E(v18, v10);
  return result;
}


//======================================================================
// sub_13B11C
// address: 0x0013B11C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_13B11C(int *a1)
{
  int v1; // r4
  int v2; // r3
  int v3; // r5

  v1 = *a1;
  v2 = *(_DWORD *)(*(_DWORD *)(*a1 + 16) + 20);
  if ( v2 == 0 )
    return 0;
  if ( *(_BYTE *)(v1 + 62) != 0 && (v3 = *(unsigned __int8 *)(v2 + 8), *(_BYTE *)(v2 + 8) == 0) )
  {
    sub_374D70(*(_DWORD *)(*(_DWORD *)(*a1 + 16) + 20));
    *(_DWORD *)(*(_DWORD *)(v1 + 16) + 20) = v3;
    sub_3577F4(v1);
    return v3;
  }
  else
  {
    sub_360E94(a1, "temporary storage cannot be changed from within a transaction");
    return 1;
  }
}


//======================================================================
// sub_13B160
// address: 0x0013B160   size: 0x692 (1682 bytes)
//======================================================================
int __fastcall sub_13B160(
        int *a1,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        char a8,
        unsigned __int8 a9,
        int a10,
        int *a11)
{
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int *v15; // r4
  int v16; // r6
  int v17; // r3
  int v18; // r5
  int v19; // r0
  int v20; // r5
  _DWORD *v21; // r6
  int v22; // r5
  int v23; // r3
  int v24; // r0
  int v25; // r6
  int v26; // r5
  int j; // r3
  int v28; // r2
  int *v29; // r3
  int *v30; // r3
  int v31; // r5
  int v32; // r6
  int v33; // r3
  int v34; // r2
  int v35; // r2
  int v36; // r6
  int v37; // r0
  int v38; // r0
  int *v39; // r3
  int v40; // r3
  int v42; // [sp+0h] [bp-A4h]
  int v43; // [sp+4h] [bp-A0h]
  int v44; // [sp+44h] [bp-60h]
  int i; // [sp+44h] [bp-60h]
  int v46; // [sp+44h] [bp-60h]
  int v48; // [sp+4Ch] [bp-58h]
  int v49; // [sp+4Ch] [bp-58h]
  int v50; // [sp+50h] [bp-54h]
  int v51; // [sp+50h] [bp-54h]
  int v52; // [sp+54h] [bp-50h]
  int k; // [sp+54h] [bp-50h]
  int v54; // [sp+58h] [bp-4Ch]
  int v55; // [sp+5Ch] [bp-48h]
  int v56; // [sp+5Ch] [bp-48h]
  int v57; // [sp+64h] [bp-40h]
  int v59; // [sp+6Ch] [bp-38h]
  int v60; // [sp+74h] [bp-30h]
  int v61; // [sp+7Ch] [bp-28h]
  int v62; // [sp+80h] [bp-24h]
  int v63; // [sp+84h] [bp-20h]
  int v65; // [sp+8Ch] [bp-18h]
  int v66; // [sp+90h] [bp-14h]
  int v67; // [sp+94h] [bp-10h]
  int v68; // [sp+98h] [bp-Ch]
  int v69; // [sp+9Ch] [bp-8h]

  v62 = *a1;
  v12 = sub_35A956(a1);
  v55 = *(__int16 *)(a2 + 38);
  v14 = *(unsigned __int8 *)(a2 + 44);
  v15 = (int *)v12;
  if ( (v14 & 0x20) != 0 )
  {
    v54 = sub_35344C(*(_DWORD *)(a2 + 8), v13, v14, v14 & 0x20);
    v61 = *(unsigned __int16 *)(v54 + 50);
  }
  else
  {
    v61 = 1;
    v54 = 0;
  }
  v44 = 0;
  v63 = a6 + 1;
  v16 = a6 + 1;
  while ( v44 < v55 )
  {
    if ( v44 == *(__int16 *)(a2 + 36) )
      goto LABEL_19;
    v17 = *(_DWORD *)(a2 + 4) + 24 * v44;
    v18 = *(unsigned __int8 *)(v17 + 20);
    if ( *(_BYTE *)(v17 + 20) == 0 )
      goto LABEL_19;
    if ( a9 == 10 )
    {
      if ( v18 == 10 )
        goto LABEL_15;
    }
    else
    {
      v18 = a9;
    }
    if ( v18 == 5 )
    {
      if ( *(_DWORD *)(v17 + 4) != 0 )
      {
LABEL_18:
        v20 = sub_35AACE(v15, 77, v16);
        sub_372DE4(a1, *(_DWORD *)(*(_DWORD *)(a2 + 4) + 24 * v44 + 4), v16);
        sub_34E46E(v15, v20);
        goto LABEL_19;
      }
LABEL_15:
      sub_34EEF2(a1);
      v18 = 2;
LABEL_16:
      v19 = sub_36541C(v62, "%s.%s", *(const char **)a2, *(const char **)(*(_DWORD *)(a2 + 4) + 24 * v44));
      sub_35A9FC(v15, 23, 1299, v18, v16, v19, -1);
      sub_34E458(v15, 1);
      goto LABEL_19;
    }
    switch ( v18 )
    {
      case 1:
      case 3:
        goto LABEL_16;
      case 2:
        goto LABEL_15;
      case 4:
        sub_35AAF0(v15, 76, v16, a10);
        break;
      default:
        goto LABEL_18;
    }
LABEL_19:
    ++v16;
    ++v44;
  }
  v21 = *(_DWORD **)(a2 + 24);
  if ( v21 != nullptr && (*(_DWORD *)(v62 + 24) & 0x2000) == 0 )
  {
    a1[24] = v63;
    if ( a9 == 10 )
      v22 = 2;
    else
      v22 = a9;
    for ( i = 0; i < *v21; ++i )
    {
      v50 = sub_35A856(v15[6]);
      sub_373A9C(a1, *(_DWORD *)(v21[2] + 20 * i), v50, 8, v42, v43);
      if ( v22 == 4 )
      {
        sub_35AAF0(v15, 16, 0, a10);
      }
      else
      {
        v23 = *(_DWORD *)(v21[2] + 20 * i + 4);
        if ( v23 == 0 )
          v23 = *(_DWORD *)a2;
        if ( v22 == 5 )
          v22 = 2;
        v42 = 0;
        v43 = 3;
        sub_35AA7C(a1, 275, v22, v23);
      }
      sub_34E412(v15, v50);
    }
  }
  if ( a8 == 0 || v54 != 0 )
  {
    v59 = 0;
    v56 = 0;
    v51 = 0;
  }
  else
  {
    v24 = sub_35A856(v15[6]);
    v25 = v24;
    v26 = *(unsigned __int8 *)(a2 + 45);
    if ( a9 == 10 )
    {
      if ( v26 == 10 )
        v26 = 2;
    }
    else
    {
      v26 = a9;
    }
    if ( a7 != 0 )
    {
      sub_35A902(v15, 79, a6, v24, a7);
      sub_34E458(v15, 136);
    }
    v56 = 0;
    if ( v26 == 5 && a9 != 5 )
    {
      for ( j = *(_DWORD *)(a2 + 8); j != 0; j = *(_DWORD *)(j + 20) )
      {
        if ( (unsigned int)*(unsigned __int8 *)(j + 54) - 3 <= 1 )
        {
          v56 = sub_35A948(v15, 16);
          goto LABEL_52;
        }
      }
      v56 = 0;
    }
LABEL_52:
    sub_35A902(v15, 67, a4, v25, a6);
    switch ( v26 )
    {
      case 1:
      case 2:
      case 3:
        goto LABEL_54;
      case 4:
        sub_35AAF0(v15, 16, 0, a10);
        v51 = 0;
        goto LABEL_69;
      case 5:
        if ( (*(_DWORD *)(v62 + 24) & 0x40000) != 0 )
        {
          v28 = sub_34F560(a1, a2, 109);
          if ( v28 != 0 )
            goto LABEL_59;
        }
        if ( sub_357D14(*a1, a2, 0, 0) != 0 )
        {
          v28 = 0;
LABEL_59:
          v29 = (int *)a1[103];
          if ( v29 == nullptr )
            v29 = a1;
          *((_BYTE *)v29 + 22) = 1;
          sub_385C0E(a1, a2, v28, a4, a5, a6, 1, 0, 5, 1);
          goto LABEL_66;
        }
        if ( *(_DWORD *)(a2 + 8) != 0 )
        {
          v30 = (int *)a1[103];
          if ( v30 == nullptr )
            v30 = a1;
          *((_BYTE *)v30 + 22) = 1;
          sub_373D30(a1, a2, a4, a5, 0);
LABEL_66:
          v51 = 1;
          goto LABEL_69;
        }
        v51 = 1;
LABEL_69:
        sub_34E412(v15, v25);
        v59 = 0;
        if ( v56 != 0 )
        {
          v59 = sub_35A948(v15, 16);
          sub_34E46E(v15, v56);
        }
        break;
      default:
        v26 = 2;
LABEL_54:
        sub_13AF08(a1, v26, a2);
        v51 = 0;
        goto LABEL_69;
    }
  }
  v31 = *(_DWORD *)(a2 + 8);
  v60 = a5;
  v66 = -1;
  v67 = 0;
LABEL_73:
  if ( v31 != 0 )
  {
    if ( *a3 == 0 )
      goto LABEL_131;
    if ( v67 == 0 )
    {
      sub_13A94A(v15, a2, v63);
      v67 = 1;
    }
    v57 = sub_35A856(v15[6]);
    if ( *(_DWORD *)(v31 + 36) != 0 )
    {
      sub_35AAF0(v15, 28, 0, *a3);
      a1[24] = v63;
      sub_37384A(a1, *(_DWORD *)(v31 + 36), v57, 8);
      a1[24] = 0;
    }
    v32 = 0;
    v46 = sub_34EA92(a1, *(unsigned __int16 *)(v31 + 52));
    while ( 1 )
    {
      v33 = *(unsigned __int16 *)(v31 + 52);
      if ( v32 >= v33 )
      {
        sub_35A902(v15, 48, v46, v33, *a3);
        sub_3532D2(a1, v46, *(unsigned __int16 *)(v31 + 52));
        if ( a7 != 0 && v54 == v31 && a8 == 0 )
        {
LABEL_94:
          sub_34E412(v15, v57);
        }
        else
        {
          v36 = *(unsigned __int8 *)(v31 + 54);
          if ( *(_BYTE *)(v31 + 54) == 0 )
          {
            sub_353306(a1, v46, *(unsigned __int16 *)(v31 + 52));
            goto LABEL_94;
          }
          if ( a9 == 10 )
          {
            if ( v36 == 10 )
              v36 = 2;
          }
          else
          {
            v36 = a9;
          }
          sub_35A98A(v15, 64, v60, v57, v46, *(unsigned __int16 *)(v31 + 50));
          if ( v31 == v54 )
            v49 = v46;
          else
            v49 = sub_34EA92(a1, v61);
          if ( a7 != 0 || v36 == 5 )
          {
            if ( (*(_BYTE *)(a2 + 44) & 0x20) != 0 )
            {
              v52 = 0;
              if ( v31 != v54 )
              {
                while ( v52 < *(unsigned __int16 *)(v54 + 50) )
                {
                  v37 = sub_34EBF4(v31, *(__int16 *)(2 * v52 + *(_DWORD *)(v54 + 4)));
                  sub_35A902(v15, 46, v60, v37, v52 + v49);
                  ++v52;
                }
              }
              if ( a7 != 0 )
              {
                v69 = v49;
                v65 = *(unsigned __int16 *)(v54 + 50) + v15[8];
                if ( (*(_BYTE *)(v31 + 55) & 3) == 2 )
                  v69 = v46;
                v68 = 78;
                for ( k = 0; k < *(unsigned __int16 *)(v54 + 50); ++k )
                {
                  v38 = sub_361D18(a1, *(_DWORD *)(4 * k + *(_DWORD *)(v54 + 32)));
                  if ( k == *(unsigned __int16 *)(v54 + 50) - 1 )
                  {
                    v68 = 79;
                    v65 = v57;
                  }
                  sub_35A9FC(v15, v68, a7 + 1 + *(__int16 *)(2 * k + *(_DWORD *)(v54 + 4)), v65, k + v69, v38, -4);
                  sub_34E458(v15, 136);
                }
              }
            }
            else
            {
              sub_35AAF0(v15, 109, v60, v49);
              if ( a7 != 0 )
              {
                sub_35A902(v15, 79, v49, v57, a7);
                sub_34E458(v15, 136);
              }
            }
          }
          if ( v36 <= 0 )
            goto LABEL_124;
          if ( v36 <= 3 )
          {
            sub_36682C(a1, v36, v31);
            goto LABEL_129;
          }
          if ( v36 == 4 )
          {
            sub_35AAF0(v15, 16, 0, a10);
          }
          else
          {
LABEL_124:
            v39 = (int *)a1[103];
            if ( v39 == nullptr )
              v39 = a1;
            *((_BYTE *)v39 + 22) = 1;
            v40 = 0;
            if ( (*(_DWORD *)(v62 + 24) & 0x40000) != 0 )
              v40 = sub_34F560(a1, a2, 109);
            sub_385C0E(a1, a2, v40, a4, a5, v49, (__int16)v61, 0, 5, v31 == v54);
            v51 = 1;
          }
LABEL_129:
          sub_34E412(v15, v57);
          sub_353306(a1, v46, *(unsigned __int16 *)(v31 + 52));
          if ( v49 != v46 )
            sub_353306(a1, v49, v61);
        }
LABEL_131:
        v31 = *(_DWORD *)(v31 + 20);
        ++a3;
        ++v60;
        goto LABEL_73;
      }
      v34 = *(__int16 *)(2 * v32 + *(_DWORD *)(v31 + 4));
      if ( v34 < 0 || v34 == *(__int16 *)(a2 + 36) )
      {
        v48 = v32 + v46;
        if ( v66 == v32 + v46 )
          goto LABEL_88;
        v35 = a6;
        if ( *(_DWORD *)(v31 + 36) != 0 )
          v48 = -1;
      }
      else
      {
        v35 = v34 + a6 + 1;
        v48 = v66;
      }
      sub_35AAF0(v15, 34, v35, v32 + v46);
      v66 = v48;
LABEL_88:
      ++v32;
    }
  }
  if ( v56 != 0 )
  {
    sub_35AAF0(v15, 16, 0, v56 + 1);
    sub_34E46E(v15, v59);
  }
  *a11 = v51;
  return v51;
}


//======================================================================
// sub_13B7F4
// address: 0x0013B7F4   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B7F4(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
}


//======================================================================
// sub_13B800
// address: 0x0013B800   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B800(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
}


//======================================================================
// sub_13B80C
// address: 0x0013B80C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B80C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
}


//======================================================================
// sub_13B818
// address: 0x0013B818   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B818(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
}


//======================================================================
// sub_13B824
// address: 0x0013B824   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B824(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
}


//======================================================================
// sub_13B830
// address: 0x0013B830   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B830(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
}


//======================================================================
// sub_13B83C
// address: 0x0013B83C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B83C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
}


//======================================================================
// sub_13B848
// address: 0x0013B848   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B848(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
}


//======================================================================
// sub_13B854
// address: 0x0013B854   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B854(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
}


//======================================================================
// sub_13B860
// address: 0x0013B860   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13B860(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 52))(a1);
}


//======================================================================
// sub_13B86C
// address: 0x0013B86C   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall sub_13B86C(_DWORD *a1, int a2)
{
  _DWORD *result; // r0

  *a1 = a2;
  a1[2] = 0;
  result = &a1[a2];
  result[3] = 0;
  return result;
}


//======================================================================
// sub_13B87C
// address: 0x0013B87C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_13B87C(int a1, int a2)
{
  int result; // r0

  result = sub_3C82FC(a1 + 8, -1);
  if ( result <= 0 )
    return sub_3B7350(a1, a2);
  return result;
}


//======================================================================
// sub_13B89C
// address: 0x0013B89C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_13B89C(int a1, int a2)
{
  int result; // r0

  result = sub_3C82FC(a1 + 8, -1);
  if ( result <= 0 )
    return sub_3BDF60(a1, a2);
  return result;
}


//======================================================================
// sub_13B8BC
// address: 0x0013B8BC   size: 0xC (12 bytes)
//======================================================================
int sub_13B8BC()
{
  return _cxa_finalize(&unk_468000);
}


//======================================================================
// sub_13B8CC
// address: 0x0013B8CC   size: 0x22 (34 bytes)
//======================================================================
int sub_13B8CC()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::RibbonEmitterData::m_RTTI,
    "RibbonEmitterData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    101,
    (Ogre::BaseObject *(*)())Ogre::RibbonEmitterData::newObject);
  return v1;
}


//======================================================================
// sub_13B900
// address: 0x0013B900   size: 0x24 (36 bytes)
//======================================================================
void sub_13B900()
{
  Ogre::Quaternion::ZERO = 0;
  dword_472504 = 0;
  dword_472508 = 0;
  dword_47250C = 0;
  Ogre::Quaternion::IDENTITY = 1065353216;
  dword_4724F4 = 0;
  dword_4724F8 = 0;
  dword_4724FC = 0;
}


//======================================================================
// sub_13B92C
// address: 0x0013B92C   size: 0x1E (30 bytes)
//======================================================================
int sub_13B92C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Light::m_RTTI,
    "Light",
    (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13B958
// address: 0x0013B958   size: 0x22 (34 bytes)
//======================================================================
int sub_13B958()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BackGameScene::m_RTTI,
    "BackGameScene",
    (const Ogre::RuntimeClass *)&Ogre::GameScene::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::BackGameScene::newObject);
  return v1;
}


//======================================================================
// sub_13B98C
// address: 0x0013B98C   size: 0x22 (34 bytes)
//======================================================================
int sub_13B98C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::GroundGrid::m_RTTI,
    "GroundGrid",
    (const Ogre::RuntimeClass *)&Ogre::RenderLines::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::GroundGrid::newObject);
  return v1;
}


//======================================================================
// sub_13B9C0
// address: 0x0013B9C0   size: 0x2C (44 bytes)
//======================================================================
int sub_13B9C0()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::ParticleEmitterData::m_RTTI,
    "ParticleEmitterData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    105,
    (Ogre::BaseObject *(*)())Ogre::ParticleEmitterData::newObject);
  Ogre::ParticleEmitterData::m_Rand = 0;
  return v1;
}


//======================================================================
// sub_13BA00
// address: 0x0013BA00   size: 0x22 (34 bytes)
//======================================================================
int sub_13BA00()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::DummyNodeData::m_RTTI,
    "DummyNodeData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::DummyNodeData::newObject);
  return v1;
}


//======================================================================
// sub_13BA34
// address: 0x0013BA34   size: 0x3A (58 bytes)
//======================================================================
int sub_13BA34()
{
  int v1; // [sp+0h] [bp-8h]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BaseAnimationData::m_RTTI,
    "BaseAnimationData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    nullptr);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::AnimationData::m_RTTI,
    "AnimationData",
    (const Ogre::RuntimeClass *)&Ogre::BaseAnimationData::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::AnimationData::newObject);
  return v1;
}


//======================================================================
// sub_13BA88
// address: 0x0013BA88   size: 0x54 (84 bytes)
//======================================================================
int sub_13BA88()
{
  Ogre::ColourValue::ZERO = 0;
  dword_47260C = 0;
  dword_472610 = 0;
  dword_472614 = 0;
  Ogre::ColourValue::Black = 0;
  dword_4725FC = 0;
  dword_472600 = 0;
  dword_472604 = 1065353216;
  Ogre::ColourValue::White = 1065353216;
  dword_4725EC = 1065353216;
  dword_4725F0 = 1065353216;
  dword_4725F4 = 1065353216;
  Ogre::ColourValue::Red = 1065353216;
  dword_4725DC = 0;
  dword_4725E0 = 0;
  dword_4725E4 = 1065353216;
  Ogre::ColourValue::Green = 0;
  dword_4725CC = 1065353216;
  dword_4725D0 = 0;
  dword_4725D4 = 1065353216;
  Ogre::ColourValue::Blue = 0;
  dword_4725BC = 0;
  dword_4725C0 = 1065353216;
  dword_4725C4 = 1065353216;
  return -5960;
}


//======================================================================
// sub_13BAF8
// address: 0x0013BAF8   size: 0x22 (34 bytes)
//======================================================================
int sub_13BAF8()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::SoundData::m_RTTI,
    "SoundData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    103,
    (Ogre::BaseObject *(*)())Ogre::SoundData::newObject);
  return v1;
}


//======================================================================
// sub_13BB2C
// address: 0x0013BB2C   size: 0x20 (32 bytes)
//======================================================================
int sub_13BB2C()
{
  sub_390CD8(&unk_472634);
  return sub_390BFC(&unk_472634, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13BB58
// address: 0x0013BB58   size: 0x52 (82 bytes)
//======================================================================
int sub_13BB58()
{
  Ogre::BeamEmitter::m_Rand = 0;
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BeamEmitter::m_RTTI,
    "BeamEmitter",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::BeamEmitter::newObject);
  Ogre::VertexFormat::VertexFormat((Ogre::VertexFormat *)&unk_472650);
  return sub_390BFC(&unk_472650, (void (*)(void *))Ogre::VertexFormat::~VertexFormat);
}


//======================================================================
// sub_13BBD0
// address: 0x0013BBD0   size: 0x22 (34 bytes)
//======================================================================
int sub_13BBD0()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::SoundNode::m_RTTI,
    "SoundNode",
    (const Ogre::RuntimeClass *)&Ogre::MovableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::SoundNode::newObject);
  return v1;
}


//======================================================================
// sub_13BC04
// address: 0x0013BC04   size: 0x1A (26 bytes)
//======================================================================
void sub_13BC04()
{
  byte_47268C = 0;
  byte_47268D = 0;
  byte_47268E = 0;
  byte_47268F = -1;
  dword_472690 = 0;
  dword_472694 = 0;
  dword_472698 = 0;
  dword_47269C = 0;
}


//======================================================================
// sub_13BC24
// address: 0x0013BC24   size: 0x1A (26 bytes)
//======================================================================
void sub_13BC24()
{
  byte_4726A4 = 0;
  byte_4726A5 = 0;
  byte_4726A6 = 0;
  byte_4726A7 = -1;
  dword_4726A8 = 0;
  dword_4726AC = 0;
  dword_4726B0 = 0;
  dword_4726B4 = 0;
}


//======================================================================
// sub_13BC44
// address: 0x0013BC44   size: 0x1E (30 bytes)
//======================================================================
int sub_13BC44()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Shadowcubemap::m_RTTI,
    "Shadowcubemap",
    (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13BC70
// address: 0x0013BC70   size: 0x22 (34 bytes)
//======================================================================
int sub_13BC70()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::RibbonEmitter::m_RTTI,
    "RibbonEmitter",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::RibbonEmitter::newObject);
  return v1;
}


//======================================================================
// sub_13BCA4
// address: 0x0013BCA4   size: 0x22 (34 bytes)
//======================================================================
int sub_13BCA4()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::LightData::m_RTTI,
    "LightData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::LightData::newObject);
  return v1;
}


//======================================================================
// sub_13BCD8
// address: 0x0013BCD8   size: 0x22 (34 bytes)
//======================================================================
int sub_13BCD8()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::DummyNode::m_RTTI,
    "DummyNode",
    (const Ogre::RuntimeClass *)&Ogre::RenderLines::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::DummyNode::newObject);
  return v1;
}


//======================================================================
// sub_13BD0C
// address: 0x0013BD0C   size: 0x22 (34 bytes)
//======================================================================
int sub_13BD0C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BoneTrack::m_RTTI,
    "BoneTrack",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::BoneTrack::newObject);
  return v1;
}


//======================================================================
// sub_13BD40
// address: 0x0013BD40   size: 0x1E (30 bytes)
//======================================================================
int sub_13BD40()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::RenderWindow::m_RTTI,
    "RenderWindow",
    (const Ogre::RuntimeClass *)&Ogre::RenderTarget::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13BD6C
// address: 0x0013BD6C   size: 0x1E (30 bytes)
//======================================================================
int sub_13BD6C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::FogEffect::m_RTTI,
    "FogEffect",
    (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13BD98
// address: 0x0013BD98   size: 0x36 (54 bytes)
//======================================================================
int sub_13BD98()
{
  byte_47274F = -1;
  byte_47274C = 0;
  byte_47274D = 0;
  byte_47274E = 0;
  dword_472750 = 0;
  dword_472754 = 0;
  dword_472758 = 0;
  dword_47275C = 0;
  Ogre::FontGlyphMapFreeType::m_vecFontFaces = 0;
  dword_472764 = 0;
  dword_472768 = 0;
  return sub_390BFC(
           &Ogre::FontGlyphMapFreeType::m_vecFontFaces,
           (void (*)(void *))std::vector<Ogre::FontGlyphMapFreeType::FontFaceInfo>::~vector);
}


//======================================================================
// sub_13BDE0
// address: 0x0013BDE0   size: 0x44 (68 bytes)
//======================================================================
int sub_13BDE0()
{
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BoneData::m_RTTI,
    "BoneData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::BoneData::newObject);
  return Ogre::RuntimeClass::RuntimeClass(
           (Ogre::RuntimeClass *)&Ogre::SkeletonData::m_RTTI,
           "SkeletonData",
           (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
           100,
           (Ogre::BaseObject *(*)())Ogre::SkeletonData::newObject);
}


//======================================================================
// sub_13BE44
// address: 0x0013BE44   size: 0x7C (124 bytes)
//======================================================================
int sub_13BE44()
{
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::TerrainBlockSource::m_RTTI,
    "TerrainBlockSource",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    101,
    (Ogre::BaseObject *(*)())Ogre::TerrainBlockSource::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::TerrainTileSource::m_RTTI,
    "TerrainTileSource",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    101,
    (Ogre::BaseObject *(*)())Ogre::TerrainTileSource::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::AlphaTexture::m_RTTI,
    "AlphaTexture",
    (const Ogre::RuntimeClass *)&Ogre::Texture::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::AlphaTexture::newObject);
  return Ogre::RuntimeClass::RuntimeClass(
           (Ogre::RuntimeClass *)&Ogre::WaterDepthTexture::m_RTTI,
           "WaterDepthTexture",
           (const Ogre::RuntimeClass *)&Ogre::Texture::m_RTTI,
           100,
           (Ogre::BaseObject *(*)())Ogre::WaterDepthTexture::newObject);
}


//======================================================================
// sub_13BEFC
// address: 0x0013BEFC   size: 0x1E (30 bytes)
//======================================================================
int sub_13BEFC()
{
  sub_390CD8(&unk_472820);
  return sub_390BFC(&unk_472820, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13BF28
// address: 0x0013BF28   size: 0x1E (30 bytes)
//======================================================================
int sub_13BF28()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    "RenderableObject",
    (const Ogre::RuntimeClass *)&Ogre::MovableObject::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13BF54
// address: 0x0013BF54   size: 0x22 (34 bytes)
//======================================================================
int sub_13BF54()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::SkeletonAnimData::m_RTTI,
    "SkeletonAnimData",
    (const Ogre::RuntimeClass *)&Ogre::BaseAnimationData::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::SkeletonAnimData::newObject);
  return v1;
}


//======================================================================
// sub_13BF88
// address: 0x0013BF88   size: 0x22 (34 bytes)
//======================================================================
int sub_13BF88()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BillboardData::m_RTTI,
    "BillboardData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    104,
    (Ogre::BaseObject *(*)())Ogre::BillboardData::newObject);
  return v1;
}


//======================================================================
// sub_13BFBC
// address: 0x0013BFBC   size: 0x1E (30 bytes)
//======================================================================
int sub_13BFBC()
{
  sub_390CD8(&unk_472864);
  return sub_390BFC(&unk_472864, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13BFE8
// address: 0x0013BFE8   size: 0x3A (58 bytes)
//======================================================================
int sub_13BFE8()
{
  int v1; // [sp+0h] [bp-8h]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::GameScene::m_RTTI,
    "GameScene",
    (const Ogre::RuntimeClass *)&Ogre::BaseObject::m_RTTI,
    100,
    nullptr);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::SimpleGameScene::m_RTTI,
    "SimpleGameScene",
    (const Ogre::RuntimeClass *)&Ogre::GameScene::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::SimpleGameScene::newObject);
  return v1;
}


//======================================================================
// sub_13C03C
// address: 0x0013C03C   size: 0x60 (96 bytes)
//======================================================================
int *sub_13C03C()
{
  Ogre::Vector3::ZERO = 0;
  dword_4728E8 = 0;
  dword_4728EC = 0;
  dword_4728DC = 0;
  dword_4728E0 = 0;
  Ogre::Vector3::UNIT_X = 1065353216;
  Ogre::Vector3::UNIT_Y = 0;
  dword_4728D4 = 0;
  dword_4728D0 = 1065353216;
  Ogre::Vector3::UNIT_Z = 0;
  dword_4728C4 = 0;
  dword_4728C8 = 1065353216;
  dword_4728B8 = 0;
  dword_4728BC = 0;
  Ogre::Vector3::NEGATIVE_UNIT_X = -1082130432;
  Ogre::Vector3::NEGATIVE_UNIT_Y = 0;
  dword_4728B0 = 0;
  dword_4728AC = -1082130432;
  Ogre::Vector3::NEGATIVE_UNIT_Z = 0;
  dword_4728A0 = 0;
  dword_4728A4 = -1082130432;
  Ogre::Vector3::UNIT_SCALE = 1065353216;
  dword_472894 = 1065353216;
  dword_472898 = 1065353216;
  return &Ogre::Vector3::NEGATIVE_UNIT_Z;
}


//======================================================================
// sub_13C0C4
// address: 0x0013C0C4   size: 0x1A (26 bytes)
//======================================================================
void sub_13C0C4()
{
  byte_4728F0 = 0;
  byte_4728F1 = 0;
  byte_4728F2 = 0;
  byte_4728F3 = -1;
  dword_4728F4 = 0;
  dword_4728F8 = 0;
  dword_4728FC = 0;
  dword_472900 = 0;
}


//======================================================================
// sub_13C0E4
// address: 0x0013C0E4   size: 0x78 (120 bytes)
//======================================================================
int sub_13C0E4()
{
  int v1; // [sp+0h] [bp-10h]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::VertexData::m_RTTI,
    "VertexData",
    (const Ogre::RuntimeClass *)&Ogre::VertexBuffer::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::VertexData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::IndexData::m_RTTI,
    "IndexData",
    (const Ogre::RuntimeClass *)&Ogre::IndexBuffer::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::IndexData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::DynamicVertexBuffer::m_RTTI,
    "DynamicVertexBuffer",
    (const Ogre::RuntimeClass *)&Ogre::VertexBuffer::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::DynamicVertexBuffer::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::DynamicIndexBuffer::m_RTTI,
    "DynamicIndexBuffer",
    (const Ogre::RuntimeClass *)&Ogre::IndexBuffer::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::DynamicIndexBuffer::newObject);
  return v1;
}


//======================================================================
// sub_13C198
// address: 0x0013C198   size: 0x1E (30 bytes)
//======================================================================
int sub_13C198()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    "Resource",
    (const Ogre::RuntimeClass *)&Ogre::BaseObject::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13C1C4
// address: 0x0013C1C4   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_13C1C4(Ogre *a1)
{
  int result; // r0

  result = Ogre::InitRadsValue(a1);
  byte_472970 = result;
  return result;
}


//======================================================================
// sub_13C1D8
// address: 0x0013C1D8   size: 0x22 (34 bytes)
//======================================================================
int sub_13C1D8()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::MorphAnimData::m_RTTI,
    "MorphAnimData",
    (const Ogre::RuntimeClass *)&Ogre::AnimationData::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::MorphAnimData::newObject);
  return v1;
}


//======================================================================
// sub_13C20C
// address: 0x0013C20C   size: 0x22 (34 bytes)
//======================================================================
int sub_13C20C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::DecalNode::m_RTTI,
    "DecalNode",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::DecalNode::newObject);
  return v1;
}


//======================================================================
// sub_13C240
// address: 0x0013C240   size: 0x22 (34 bytes)
//======================================================================
int sub_13C240()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Beach::m_RTTI,
    "Beach",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::Beach::newObject);
  return v1;
}


//======================================================================
// sub_13C274
// address: 0x0013C274   size: 0x22 (34 bytes)
//======================================================================
int sub_13C274()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BeamEmitterData::m_RTTI,
    "BeamEmitterData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    102,
    (Ogre::BaseObject *(*)())Ogre::BeamEmitterData::newObject);
  return v1;
}


//======================================================================
// sub_13C2A8
// address: 0x0013C2A8   size: 0x20 (32 bytes)
//======================================================================
int sub_13C2A8()
{
  dword_4B9300 = (int)&byte_55FB88;
  return sub_390BFC(&dword_4B9300, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13C2D8
// address: 0x0013C2D8   size: 0x3E (62 bytes)
//======================================================================
int sub_13C2D8()
{
  int v1; // [sp+0h] [bp-8h]

  Ogre::VertexFormat::VertexFormat((Ogre::VertexFormat *)&unk_4B9308);
  sub_390BFC(&unk_4B9308, (void (*)(void *))Ogre::VertexFormat::~VertexFormat);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Billboard::m_RTTI,
    "Billboard",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::Billboard::newObject);
  return v1;
}


//======================================================================
// sub_13C334
// address: 0x0013C334   size: 0x22 (34 bytes)
//======================================================================
int sub_13C334()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::RenderLines::m_RTTI,
    "RenderLines",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::RenderLines::newObject);
  return v1;
}


//======================================================================
// sub_13C368
// address: 0x0013C368   size: 0x66 (102 bytes)
//======================================================================
int sub_13C368()
{
  sub_390CD8(&unk_4B9384);
  sub_390BFC(&unk_4B9384, (void (*)(void *))sub_391198);
  Ogre::VertexFormat::VertexFormat((Ogre::VertexFormat *)&unk_4B9374);
  sub_390BFC(&unk_4B9374, (void (*)(void *))Ogre::VertexFormat::~VertexFormat);
  return Ogre::RuntimeClass::RuntimeClass(
           (Ogre::RuntimeClass *)&Ogre::ParticleEmitter::m_RTTI,
           "ParticleEmitter",
           (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
           100,
           (Ogre::BaseObject *(*)())Ogre::ParticleEmitter::newObject);
}


//======================================================================
// sub_13C3F4
// address: 0x0013C3F4   size: 0x44 (68 bytes)
//======================================================================
int sub_13C3F4()
{
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::PlantNode::m_RTTI,
    "PlantNode",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::PlantNode::newObject);
  return Ogre::RuntimeClass::RuntimeClass(
           (Ogre::RuntimeClass *)&Ogre::PlantSetNode::m_RTTI,
           "PlantSetNode",
           (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
           100,
           (Ogre::BaseObject *(*)())Ogre::PlantSetNode::newObject);
}


//======================================================================
// sub_13C458
// address: 0x0013C458   size: 0x22 (34 bytes)
//======================================================================
int sub_13C458()
{
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&Ogre::Matrix4::Iden, flt_42E63C);
  return Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&Ogre::Matrix4::Zero, flt_42E67C);
}


//======================================================================
// sub_13C488
// address: 0x0013C488   size: 0x22 (34 bytes)
//======================================================================
int sub_13C488()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::DecalData::m_RTTI,
    "DecalData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    101,
    (Ogre::BaseObject *(*)())Ogre::DecalData::newObject);
  return v1;
}


//======================================================================
// sub_13C4BC
// address: 0x0013C4BC   size: 0x22 (34 bytes)
//======================================================================
int sub_13C4BC()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BeachData::m_RTTI,
    "BeachData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::BeachData::newObject);
  return v1;
}


//======================================================================
// sub_13C4F0
// address: 0x0013C4F0   size: 0x22 (34 bytes)
//======================================================================
int sub_13C4F0()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::TerrainBlock::m_RTTI,
    "TerrainBlock",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::TerrainBlock::newObject);
  return v1;
}


//======================================================================
// sub_13C524
// address: 0x0013C524   size: 0x22 (34 bytes)
//======================================================================
int sub_13C524()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::EntityData::m_RTTI,
    "EntityData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::EntityData::newObject);
  return v1;
}


//======================================================================
// sub_13C558
// address: 0x0013C558   size: 0x22 (34 bytes)
//======================================================================
int sub_13C558()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BorderGameScene::m_RTTI,
    "BorderGameScene",
    (const Ogre::RuntimeClass *)&Ogre::GameScene::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::BorderGameScene::newObject);
  return v1;
}


//======================================================================
// sub_13C58C
// address: 0x0013C58C   size: 0x22 (34 bytes)
//======================================================================
int sub_13C58C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::SmallDecal::m_RTTI,
    "SmallDecal",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::SmallDecal::newObject);
  return v1;
}


//======================================================================
// sub_13C5C0
// address: 0x0013C5C0   size: 0x3C (60 bytes)
//======================================================================
int sub_13C5C0()
{
  int v1; // [sp+0h] [bp-8h]

  Ogre::VertexFormat::VertexFormat((Ogre::VertexFormat *)&unk_4BB67C);
  sub_390BFC(&unk_4BB67C, (void (*)(void *))Ogre::VertexFormat::~VertexFormat);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Footprints::m_RTTI,
    "Footprints",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::Footprints::newObject);
  return v1;
}


//======================================================================
// sub_13C618
// address: 0x0013C618   size: 0x22 (34 bytes)
//======================================================================
int sub_13C618()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::RenderTriangle::m_RTTI,
    "RenderTriangle",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::RenderTriangle::newObject);
  return v1;
}


//======================================================================
// sub_13C64C
// address: 0x0013C64C   size: 0x1E (30 bytes)
//======================================================================
int sub_13C64C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI,
    "EffectObject",
    (const Ogre::RuntimeClass *)&Ogre::MovableObject::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13C678
// address: 0x0013C678   size: 0x18 (24 bytes)
//======================================================================
int sub_13C678()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass((Ogre::RuntimeClass *)&Ogre::BaseObject::m_RTTI, "BaseObject", nullptr, 100, nullptr);
  return v1;
}


//======================================================================
// sub_13C698
// address: 0x0013C698   size: 0x1E (30 bytes)
//======================================================================
int sub_13C698()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::MovableObject::m_RTTI,
    "MovableObject",
    (const Ogre::RuntimeClass *)&Ogre::BaseObject::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13C6C4
// address: 0x0013C6C4   size: 0xA4 (164 bytes)
//======================================================================
int sub_13C6C4()
{
  int v1; // [sp+0h] [bp-10h]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::MotionElementData::m_RTTI,
    "MotionElementData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    nullptr);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::MotionBindElementData::m_RTTI,
    "MotionBindElementData",
    (const Ogre::RuntimeClass *)&Ogre::MotionElementData::m_RTTI,
    102,
    (Ogre::BaseObject *(*)())Ogre::MotionBindElementData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::MotionAnimElementData::m_RTTI,
    "MotionAnimElementData",
    (const Ogre::RuntimeClass *)&Ogre::MotionElementData::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::MotionAnimElementData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::MotionPostElementData::m_RTTI,
    "MotionPostElementData",
    (const Ogre::RuntimeClass *)&Ogre::MotionElementData::m_RTTI,
    102,
    (Ogre::BaseObject *(*)())Ogre::MotionPostElementData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::MotionEventElementData::m_RTTI,
    "MotionEventElementData",
    (const Ogre::RuntimeClass *)&Ogre::MotionElementData::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::MotionEventElementData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::EntityMotionData::m_RTTI,
    "EntityMotionData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::EntityMotionData::newObject);
  return v1;
}


//======================================================================
// sub_13C7B4
// address: 0x0013C7B4   size: 0x22 (34 bytes)
//======================================================================
int sub_13C7B4()
{
  Ogre::StringUtil::BLANK = (int)&byte_55FB88;
  return sub_390BFC(&Ogre::StringUtil::BLANK, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13C7E8
// address: 0x0013C7E8   size: 0x10 (16 bytes)
//======================================================================
void sub_13C7E8()
{
  Ogre::WorldPos::m_Origin = 0;
  dword_4C6B7C = 0;
  dword_4C6B80 = 0;
}


//======================================================================
// sub_13C7FC
// address: 0x0013C7FC   size: 0x34 (52 bytes)
//======================================================================
int sub_13C7FC()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::RenderTarget::m_RTTI,
    "RenderTarget",
    (const Ogre::RuntimeClass *)&Ogre::BaseObject::m_RTTI,
    100,
    nullptr);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::TextureRenderTarget::m_RTTI,
    "TextureRenderTarget",
    (const Ogre::RuntimeClass *)&Ogre::RenderTarget::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13C844
// address: 0x0013C844   size: 0x3C (60 bytes)
//======================================================================
int sub_13C844()
{
  int v1; // [sp+0h] [bp-8h]

  sub_390CD8(&unk_4C6BAC);
  sub_390BFC(&unk_4C6BAC, (void (*)(void *))sub_391198);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Model::m_RTTI,
    "Model",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::Model::newObject);
  return v1;
}


//======================================================================
// sub_13C89C
// address: 0x0013C89C   size: 0x3C (60 bytes)
//======================================================================
int sub_13C89C()
{
  int v1; // [sp+0h] [bp-8h]

  sub_390CD8(&unk_4C6BC4);
  sub_390BFC(&unk_4C6BC4, (void (*)(void *))sub_391198);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Entity::m_RTTI,
    "Entity",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::Entity::newObject);
  return v1;
}


//======================================================================
// sub_13C8F4
// address: 0x0013C8F4   size: 0x22 (34 bytes)
//======================================================================
int sub_13C8F4()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::DirDecal::m_RTTI,
    "DirDecal",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::DirDecal::newObject);
  return v1;
}


//======================================================================
// sub_13C928
// address: 0x0013C928   size: 0x22 (34 bytes)
//======================================================================
int sub_13C928()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BuildingData::m_RTTI,
    "BuildingData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::BuildingData::newObject);
  return v1;
}


//======================================================================
// sub_13C95C
// address: 0x0013C95C   size: 0x48 (72 bytes)
//======================================================================
int sub_13C95C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::VertexBuffer::m_RTTI,
    "VertexBuffer",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    nullptr);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::IndexBuffer::m_RTTI,
    "IndexBuffer",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    nullptr);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Texture::m_RTTI,
    "Texture",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13C9C0
// address: 0x0013C9C0   size: 0x22 (34 bytes)
//======================================================================
int sub_13C9C0()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::ParamShapeData::m_RTTI,
    "ParamShapeData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    101,
    (Ogre::BaseObject *(*)())Ogre::ParamShapeData::newObject);
  return v1;
}


//======================================================================
// sub_13C9F4
// address: 0x0013C9F4   size: 0x22 (34 bytes)
//======================================================================
int sub_13C9F4()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::MaterialAnimData::m_RTTI,
    "MaterialAnimData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::MaterialAnimData::newObject);
  return v1;
}


//======================================================================
// sub_13CA28
// address: 0x0013CA28   size: 0x22 (34 bytes)
//======================================================================
int sub_13CA28()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::DeathGameScene::m_RTTI,
    "DeathGameScene",
    (const Ogre::RuntimeClass *)&Ogre::GameScene::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::DeathGameScene::newObject);
  return v1;
}


//======================================================================
// sub_13CA5C
// address: 0x0013CA5C   size: 0x92 (146 bytes)
//======================================================================
int sub_13CA5C()
{
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::BSPData::m_RTTI,
    "BSPData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::BSPData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::ModelData::m_RTTI,
    "ModelData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    101,
    (Ogre::BaseObject *(*)())Ogre::ModelData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::SkinPatch::m_RTTI,
    "SkinPatch",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::SkinPatch::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::SubMeshData::m_RTTI,
    "SubMeshData",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::SubMeshData::newObject);
  return Ogre::RuntimeClass::RuntimeClass(
           (Ogre::RuntimeClass *)&Ogre::MeshData::m_RTTI,
           "MeshData",
           (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
           100,
           (Ogre::BaseObject *(*)())Ogre::MeshData::newObject);
}


//======================================================================
// sub_13CB34
// address: 0x0013CB34   size: 0x22 (34 bytes)
//======================================================================
int sub_13CB34()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::PlantSource::m_RTTI,
    "PlantSource",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    101,
    (Ogre::BaseObject *(*)())Ogre::PlantSource::newObject);
  return v1;
}


//======================================================================
// sub_13CB68
// address: 0x0013CB68   size: 0x22 (34 bytes)
//======================================================================
int sub_13CB68()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::ParametricShape::m_RTTI,
    "ParametricShape",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::ParametricShape::newObject);
  return v1;
}


//======================================================================
// sub_13CB9C
// address: 0x0013CB9C   size: 0x22 (34 bytes)
//======================================================================
int sub_13CB9C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Material::m_RTTI,
    "Material",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    102,
    (Ogre::BaseObject *(*)())Ogre::Material::newObject);
  return v1;
}


//======================================================================
// sub_13CBD0
// address: 0x0013CBD0   size: 0x3E (62 bytes)
//======================================================================
int sub_13CBD0()
{
  int v1; // [sp+0h] [bp-Ch]

  dword_4C6E20 = 1065353216;
  dword_4C6E24 = 0;
  dword_4C6E28 = 0;
  dword_4C6E2C = 0;
  dword_4C6E30 = 1065353216;
  dword_4C6E34 = 0;
  dword_4C6E14 = 0;
  dword_4C6E18 = 0;
  dword_4C6E1C = 1065353216;
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Camera::m_RTTI,
    "Camera",
    (const Ogre::RuntimeClass *)&Ogre::MovableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::Camera::newObject);
  return v1;
}


//======================================================================
// sub_13CC24
// address: 0x0013CC24   size: 0x1A (26 bytes)
//======================================================================
void sub_13CC24()
{
  byte_4C6E4C = 0;
  byte_4C6E4D = 0;
  byte_4C6E4E = 0;
  byte_4C6E4F = -1;
  dword_4C6E50 = 0;
  dword_4C6E54 = 0;
  dword_4C6E58 = 0;
  dword_4C6E5C = 0;
}


//======================================================================
// sub_13CC44
// address: 0x0013CC44   size: 0x1E (30 bytes)
//======================================================================
int sub_13CC44()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::Shadowmap::m_RTTI,
    "Shadowmap",
    (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13CC70
// address: 0x0013CC70   size: 0x1A (26 bytes)
//======================================================================
void sub_13CC70()
{
  byte_4C6E74 = 0;
  byte_4C6E75 = 0;
  byte_4C6E76 = 0;
  byte_4C6E77 = -1;
  dword_4C6E78 = 0;
  dword_4C6E7C = 0;
  dword_4C6E80 = 0;
  dword_4C6E84 = 0;
}


//======================================================================
// sub_13CC90
// address: 0x0013CC90   size: 0x22 (34 bytes)
//======================================================================
int sub_13CC90()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::MaterialParamTrack::m_RTTI,
    "MaterialParamTrack",
    (const Ogre::RuntimeClass *)&Ogre::Resource::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::MaterialParamTrack::newObject);
  return v1;
}


//======================================================================
// sub_13CCC4
// address: 0x0013CCC4   size: 0x2A (42 bytes)
//======================================================================
int sub_13CCC4()
{
  byte_4C6EC8 = 0;
  byte_4C6EC9 = 0;
  byte_4C6ECA = 0;
  byte_4C6ECB = -1;
  dword_4C6ECC = 0;
  dword_4C6ED0 = 0;
  dword_4C6ED4 = 0;
  dword_4C6ED8 = 0;
  return 255;
}


//======================================================================
// sub_13CCF4
// address: 0x0013CCF4   size: 0x2E (46 bytes)
//======================================================================
int sub_13CCF4()
{
  j_memset(&unk_4C6F04, 0, 0x10u);
  dword_4C6F0C = (int)&unk_4C6F04;
  dword_4C6F10 = (int)&unk_4C6F04;
  dword_4C6F14 = 0;
  return sub_390BFC(&Ogre::Codec::ms_mapCodecs, (void (*)(void *))std::map<std::string,Ogre::Codec *>::~map);
}


//======================================================================
// sub_13CD30
// address: 0x0013CD30   size: 0x9A (154 bytes)
//======================================================================
int sub_13CD30()
{
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::SurfaceData::m_RTTI,
    "SurfaceData",
    (const Ogre::RuntimeClass *)&Ogre::BaseObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::SurfaceData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::DummyTexture::m_RTTI,
    "DummyTexture",
    (const Ogre::RuntimeClass *)&Ogre::Texture::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::DummyTexture::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::TextureData::m_RTTI,
    "TextureData",
    (const Ogre::RuntimeClass *)&Ogre::Texture::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::TextureData::newObject);
  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::RT_TEXTURE::m_RTTI,
    "RT_TEXTURE",
    (const Ogre::RuntimeClass *)&Ogre::Texture::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::RT_TEXTURE::newObject);
  Ogre::LockSection::LockSection((Ogre::LockSection *)&Ogre::TextureData::m_ilLoadLMutex);
  return sub_390BFC(&Ogre::TextureData::m_ilLoadLMutex, (void (*)(void *))Ogre::LockSection::~LockSection);
}


//======================================================================
// sub_13CE14
// address: 0x0013CE14   size: 0x22 (34 bytes)
//======================================================================
int sub_13CE14()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::TLiquid::m_RTTI,
    "TLiquid",
    (const Ogre::RuntimeClass *)&Ogre::RenderableObject::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::TLiquid::newObject);
  return v1;
}


//======================================================================
// sub_13CE48
// address: 0x0013CE48   size: 0x22 (34 bytes)
//======================================================================
int sub_13CE48()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::GameTerrainScene::m_RTTI,
    "GameTerrainScene",
    (const Ogre::RuntimeClass *)&Ogre::GameScene::m_RTTI,
    100,
    (Ogre::BaseObject *(*)())Ogre::GameTerrainScene::newObject);
  return v1;
}


//======================================================================
// sub_13CE7C
// address: 0x0013CE7C   size: 0x1E (30 bytes)
//======================================================================
int sub_13CE7C()
{
  int v1; // [sp+0h] [bp-Ch]

  Ogre::RuntimeClass::RuntimeClass(
    (Ogre::RuntimeClass *)&Ogre::ReflectEffect::m_RTTI,
    "ReflectEffect",
    (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI,
    100,
    nullptr);
  return v1;
}


//======================================================================
// sub_13CEA8
// address: 0x0013CEA8   size: 0x60 (96 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13CEA8()
{
  byte_50F7E7 = -1;
  byte_50F7E4 = 0;
  byte_50F7E5 = 0;
  byte_50F7E6 = 0;
  dword_50F7E8 = 0;
  dword_50F7EC = 0;
  dword_50F7F0 = 0;
  dword_50F7F4 = 0;
  sub_3BF0BC((int)&dword_50F7E0, "UIClient");
  sub_390BFC(&dword_50F7E0, (void (*)(void *))sub_3BDF80);
  j_memset(&unk_50F7FC, 0, 0x10u);
  dword_50F80C = 0;
  dword_50F804 = (int)&unk_50F7FC;
  dword_50F808 = (int)&unk_50F7FC;
  sub_390BFC(&EventMap, (void (*)(void *))std::map<std::string,stEventFrameArray>::~map);
}


//======================================================================
// sub_13CF20
// address: 0x0013CF20   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13CF20()
{
  byte_50F814 = 0;
  byte_50F815 = 0;
  byte_50F816 = 0;
  dword_50F818 = 0;
  dword_50F81C = 0;
  dword_50F820 = 0;
  dword_50F824 = 0;
  byte_50F817 = -1;
  sub_3BF0BC((int)&unk_50F828, "UIClient");
  sub_390BFC(&unk_50F828, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13CF6C
// address: 0x0013CF6C   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13CF6C()
{
  byte_50F82C = 0;
  byte_50F82D = 0;
  byte_50F82E = 0;
  dword_50F830 = 0;
  dword_50F834 = 0;
  dword_50F838 = 0;
  dword_50F83C = 0;
  byte_50F82F = -1;
  sub_3BF0BC((int)&unk_50F840, "UIClient");
  sub_390BFC(&unk_50F840, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13CFB8
// address: 0x0013CFB8   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13CFB8()
{
  byte_50F844 = 0;
  byte_50F845 = 0;
  byte_50F846 = 0;
  dword_50F848 = 0;
  dword_50F84C = 0;
  dword_50F850 = 0;
  dword_50F854 = 0;
  byte_50F847 = -1;
  sub_3BF0BC((int)&unk_50F858, "UIClient");
  sub_390BFC(&unk_50F858, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D004
// address: 0x0013D004   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D004()
{
  byte_50F85C = 0;
  byte_50F85D = 0;
  byte_50F85E = 0;
  dword_50F860 = 0;
  dword_50F864 = 0;
  dword_50F868 = 0;
  dword_50F86C = 0;
  byte_50F85F = -1;
  sub_3BF0BC((int)&unk_50F870, "UIClient");
  sub_390BFC(&unk_50F870, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D050
// address: 0x0013D050   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D050()
{
  byte_50F874 = 0;
  byte_50F875 = 0;
  byte_50F876 = 0;
  dword_50F878 = 0;
  dword_50F87C = 0;
  dword_50F880 = 0;
  dword_50F884 = 0;
  byte_50F877 = -1;
  sub_3BF0BC((int)&unk_50F888, "UIClient");
  sub_390BFC(&unk_50F888, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D09C
// address: 0x0013D09C   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D09C()
{
  byte_50F88C = 0;
  byte_50F88D = 0;
  byte_50F88E = 0;
  dword_50F890 = 0;
  dword_50F894 = 0;
  dword_50F898 = 0;
  dword_50F89C = 0;
  byte_50F88F = -1;
  sub_3BF0BC((int)&unk_50F8A0, "UIClient");
  sub_390BFC(&unk_50F8A0, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D0E8
// address: 0x0013D0E8   size: 0x5C (92 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D0E8()
{
  byte_50F8C4 = 0;
  byte_50F8C5 = 0;
  byte_50F8C6 = 0;
  byte_50F8C7 = -1;
  dword_50F8C8 = 0;
  dword_50F8CC = 0;
  dword_50F8D0 = 0;
  dword_50F8D4 = 0;
  sub_3BF0BC((int)&unk_50F8C0, "UIClient");
  sub_390BFC(&unk_50F8C0, (void (*)(void *))sub_3BDF80);
  dword_50F8B4 = 0;
  dword_50F8B8 = 0;
  dword_50F8BC = 0;
  sub_390BFC(&dword_50F8B4, (void (*)(void *))std::vector<std::string>::~vector);
}


//======================================================================
// sub_13D158
// address: 0x0013D158   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D158()
{
  byte_50F8D8 = 0;
  byte_50F8D9 = 0;
  byte_50F8DA = 0;
  dword_50F8DC = 0;
  dword_50F8E0 = 0;
  dword_50F8E4 = 0;
  dword_50F8E8 = 0;
  byte_50F8DB = -1;
  sub_3BF0BC((int)&unk_50F8EC, "UIClient");
  sub_390BFC(&unk_50F8EC, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D1A4
// address: 0x0013D1A4   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D1A4()
{
  byte_50F8F0 = 0;
  byte_50F8F1 = 0;
  byte_50F8F2 = 0;
  dword_50F8F4 = 0;
  dword_50F8F8 = 0;
  dword_50F8FC = 0;
  dword_50F900 = 0;
  byte_50F8F3 = -1;
  sub_3BF0BC((int)&unk_50F904, "UIClient");
  sub_390BFC(&unk_50F904, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D1F0
// address: 0x0013D1F0   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D1F0()
{
  byte_50F908 = 0;
  byte_50F909 = 0;
  byte_50F90A = 0;
  dword_50F90C = 0;
  dword_50F910 = 0;
  dword_50F914 = 0;
  dword_50F918 = 0;
  byte_50F90B = -1;
  sub_3BF0BC((int)&unk_50F91C, "UIClient");
  sub_390BFC(&unk_50F91C, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D23C
// address: 0x0013D23C   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D23C()
{
  byte_50F920 = 0;
  byte_50F921 = 0;
  byte_50F922 = 0;
  dword_50F924 = 0;
  dword_50F928 = 0;
  dword_50F92C = 0;
  dword_50F930 = 0;
  byte_50F923 = -1;
  sub_3BF0BC((int)&unk_50F934, "UIClient");
  sub_390BFC(&unk_50F934, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D288
// address: 0x0013D288   size: 0x56 (86 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D288()
{
  byte_50F93F = -1;
  byte_50F93C = 0;
  byte_50F93D = 0;
  byte_50F93E = 0;
  dword_50F940 = 0;
  dword_50F944 = 0;
  dword_50F948 = 0;
  dword_50F94C = 0;
  sub_3BF0BC((int)&unk_50F950, "UIClient");
  sub_390BFC(&unk_50F950, (void (*)(void *))sub_3BDF80);
  dword_50F938 = (int)&off_4573B8;
  sub_390BFC(&dword_50F938, (void (*)(void *))Ogre::CharacterCodingUtf8::~CharacterCodingUtf8);
}


//======================================================================
// sub_13D2F8
// address: 0x0013D2F8   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D2F8()
{
  byte_50F95C = 0;
  byte_50F95D = 0;
  byte_50F95E = 0;
  dword_50F960 = 0;
  dword_50F964 = 0;
  dword_50F968 = 0;
  dword_50F96C = 0;
  byte_50F95F = -1;
  sub_3BF0BC((int)&unk_50F970, "UIClient");
  sub_390BFC(&unk_50F970, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D344
// address: 0x0013D344   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D344()
{
  byte_50F974 = 0;
  byte_50F975 = 0;
  byte_50F976 = 0;
  dword_50F978 = 0;
  dword_50F97C = 0;
  dword_50F980 = 0;
  dword_50F984 = 0;
  byte_50F977 = -1;
  sub_3BF0BC((int)&unk_50F988, "UIClient");
  sub_390BFC(&unk_50F988, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D390
// address: 0x0013D390   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D390()
{
  byte_50F98C = 0;
  byte_50F98D = 0;
  byte_50F98E = 0;
  dword_50F990 = 0;
  dword_50F994 = 0;
  dword_50F998 = 0;
  dword_50F99C = 0;
  byte_50F98F = -1;
  sub_3BF0BC((int)&unk_50F9A0, "UIClient");
  sub_390BFC(&unk_50F9A0, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D3DC
// address: 0x0013D3DC   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D3DC()
{
  byte_50F9A4 = 0;
  byte_50F9A5 = 0;
  byte_50F9A6 = 0;
  dword_50F9A8 = 0;
  dword_50F9AC = 0;
  dword_50F9B0 = 0;
  dword_50F9B4 = 0;
  byte_50F9A7 = -1;
  sub_3BF0BC((int)&unk_50F9B8, "UIClient");
  sub_390BFC(&unk_50F9B8, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D428
// address: 0x0013D428   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D428()
{
  byte_50F9BC = 0;
  byte_50F9BD = 0;
  byte_50F9BE = 0;
  dword_50F9C0 = 0;
  dword_50F9C4 = 0;
  dword_50F9C8 = 0;
  dword_50F9CC = 0;
  byte_50F9BF = -1;
  sub_3BF0BC((int)&unk_50F9D0, "UIClient");
  sub_390BFC(&unk_50F9D0, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D474
// address: 0x0013D474   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D474()
{
  byte_50F9D4 = 0;
  byte_50F9D5 = 0;
  byte_50F9D6 = 0;
  dword_50F9D8 = 0;
  dword_50F9DC = 0;
  dword_50F9E0 = 0;
  dword_50F9E4 = 0;
  byte_50F9D7 = -1;
  sub_3BF0BC((int)&unk_50F9E8, "UIClient");
  sub_390BFC(&unk_50F9E8, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D4C0
// address: 0x0013D4C0   size: 0x38 (56 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D4C0()
{
  byte_50F9F3 = -1;
  byte_50F9F0 = 0;
  byte_50F9F1 = 0;
  byte_50F9F2 = 0;
  dword_50F9F4 = 0;
  dword_50F9F8 = 0;
  dword_50F9FC = 0;
  dword_50FA00 = 0;
  sub_3BF0BC((int)&unk_50F9EC, "UIClient");
  sub_390BFC(&unk_50F9EC, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D508
// address: 0x0013D508   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D508()
{
  byte_50FA04 = 0;
  byte_50FA05 = 0;
  byte_50FA06 = 0;
  dword_50FA08 = 0;
  dword_50FA0C = 0;
  dword_50FA10 = 0;
  dword_50FA14 = 0;
  byte_50FA07 = -1;
  sub_3BF0BC((int)&unk_50FA18, "UIClient");
  sub_390BFC(&unk_50FA18, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D554
// address: 0x0013D554   size: 0x46 (70 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D554()
{
  byte_50FA1F = -1;
  byte_50FA1C = 0;
  byte_50FA1D = 0;
  byte_50FA1E = 0;
  dword_50FA20 = 0;
  dword_50FA24 = 0;
  dword_50FA28 = 0;
  dword_50FA2C = 0;
  sub_3BF0BC((int)&unk_50FA30, "UIClient");
  sub_390BFC(&unk_50FA30, (void (*)(void *))sub_3BDF80);
  UICursor::m_Pos = 0;
  dword_50FA38 = 0;
}


//======================================================================
// sub_13D5B0
// address: 0x0013D5B0   size: 0x38 (56 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D5B0()
{
  byte_50FA47 = -1;
  byte_50FA44 = 0;
  byte_50FA45 = 0;
  byte_50FA46 = 0;
  dword_50FA48 = 0;
  dword_50FA4C = 0;
  dword_50FA50 = 0;
  dword_50FA54 = 0;
  sub_3BF0BC((int)&dword_50FA40, "UIClient");
  sub_390BFC(&dword_50FA40, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D5F8
// address: 0x0013D5F8   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D5F8()
{
  byte_50FA60 = 0;
  byte_50FA61 = 0;
  byte_50FA62 = 0;
  dword_50FA64 = 0;
  dword_50FA68 = 0;
  dword_50FA6C = 0;
  dword_50FA70 = 0;
  byte_50FA63 = -1;
  sub_3BF0BC((int)&unk_50FA74, "UIClient");
  sub_390BFC(&unk_50FA74, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D644
// address: 0x0013D644   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D644()
{
  byte_50FA78 = 0;
  byte_50FA79 = 0;
  byte_50FA7A = 0;
  dword_50FA7C = 0;
  dword_50FA80 = 0;
  dword_50FA84 = 0;
  dword_50FA88 = 0;
  byte_50FA7B = -1;
  sub_3BF0BC((int)&unk_50FA8C, "UIClient");
  sub_390BFC(&unk_50FA8C, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D690
// address: 0x0013D690   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D690()
{
  byte_50FA90 = 0;
  byte_50FA91 = 0;
  byte_50FA92 = 0;
  dword_50FA94 = 0;
  dword_50FA98 = 0;
  dword_50FA9C = 0;
  dword_50FAA0 = 0;
  byte_50FA93 = -1;
  sub_3BF0BC((int)&unk_50FAA4, "UIClient");
  sub_390BFC(&unk_50FAA4, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D6DC
// address: 0x0013D6DC   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D6DC()
{
  byte_50FAA8 = 0;
  byte_50FAA9 = 0;
  byte_50FAAA = 0;
  dword_50FAAC = 0;
  dword_50FAB0 = 0;
  dword_50FAB4 = 0;
  dword_50FAB8 = 0;
  byte_50FAAB = -1;
  sub_3BF0BC((int)&unk_50FABC, "UIClient");
  sub_390BFC(&unk_50FABC, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D728
// address: 0x0013D728   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D728()
{
  byte_50FBC0 = 0;
  byte_50FBC1 = 0;
  byte_50FBC2 = 0;
  dword_50FBC4 = 0;
  dword_50FBC8 = 0;
  dword_50FBCC = 0;
  dword_50FBD0 = 0;
  byte_50FBC3 = -1;
  sub_3BF0BC((int)&unk_50FBD4, "UIClient");
  sub_390BFC(&unk_50FBD4, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D774
// address: 0x0013D774   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D774()
{
  byte_50FBD8 = 0;
  byte_50FBD9 = 0;
  byte_50FBDA = 0;
  dword_50FBDC = 0;
  dword_50FBE0 = 0;
  dword_50FBE4 = 0;
  dword_50FBE8 = 0;
  byte_50FBDB = -1;
  sub_3BF0BC((int)&unk_50FBEC, "UIClient");
  sub_390BFC(&unk_50FBEC, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D7C0
// address: 0x0013D7C0   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D7C0()
{
  byte_50FBF0 = 0;
  byte_50FBF1 = 0;
  byte_50FBF2 = 0;
  dword_50FBF4 = 0;
  dword_50FBF8 = 0;
  dword_50FBFC = 0;
  dword_50FC00 = 0;
  byte_50FBF3 = -1;
  sub_3BF0BC((int)&unk_50FC04, "UIClient");
  sub_390BFC(&unk_50FC04, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D80C
// address: 0x0013D80C   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D80C()
{
  byte_50FC08 = 0;
  byte_50FC09 = 0;
  byte_50FC0A = 0;
  dword_50FC0C = 0;
  dword_50FC10 = 0;
  dword_50FC14 = 0;
  dword_50FC18 = 0;
  byte_50FC0B = -1;
  sub_3BF0BC((int)&unk_50FC1C, "UIClient");
  sub_390BFC(&unk_50FC1C, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D858
// address: 0x0013D858   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D858()
{
  byte_50FC20 = 0;
  byte_50FC21 = 0;
  byte_50FC22 = 0;
  dword_50FC24 = 0;
  dword_50FC28 = 0;
  dword_50FC2C = 0;
  dword_50FC30 = 0;
  byte_50FC23 = -1;
  sub_3BF0BC((int)&unk_50FC34, "UIClient");
  sub_390BFC(&unk_50FC34, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D8A4
// address: 0x0013D8A4   size: 0x38 (56 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D8A4()
{
  byte_50FC3F = -1;
  byte_50FC3C = 0;
  byte_50FC3D = 0;
  byte_50FC3E = 0;
  dword_50FC40 = 0;
  dword_50FC44 = 0;
  dword_50FC48 = 0;
  dword_50FC4C = 0;
  sub_3BF0BC((int)&dword_50FC38, "UIClient");
  sub_390BFC(&dword_50FC38, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D8EC
// address: 0x0013D8EC   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D8EC()
{
  byte_50FC50 = 0;
  byte_50FC51 = 0;
  byte_50FC52 = 0;
  dword_50FC54 = 0;
  dword_50FC58 = 0;
  dword_50FC5C = 0;
  dword_50FC60 = 0;
  byte_50FC53 = -1;
  sub_3BF0BC((int)&unk_50FC64, "UIClient");
  sub_390BFC(&unk_50FC64, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D938
// address: 0x0013D938   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D938()
{
  byte_50FC68 = 0;
  byte_50FC69 = 0;
  byte_50FC6A = 0;
  dword_50FC6C = 0;
  dword_50FC70 = 0;
  dword_50FC74 = 0;
  dword_50FC78 = 0;
  byte_50FC6B = -1;
  sub_3BF0BC((int)&unk_50FC7C, "UIClient");
  sub_390BFC(&unk_50FC7C, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D984
// address: 0x0013D984   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D984()
{
  byte_50FC80 = 0;
  byte_50FC81 = 0;
  byte_50FC82 = 0;
  dword_50FC84 = 0;
  dword_50FC88 = 0;
  dword_50FC8C = 0;
  dword_50FC90 = 0;
  byte_50FC83 = -1;
  sub_3BF0BC((int)&unk_50FC94, "UIClient");
  sub_390BFC(&unk_50FC94, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13D9D0
// address: 0x0013D9D0   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13D9D0()
{
  byte_50FC98 = 0;
  byte_50FC99 = 0;
  byte_50FC9A = 0;
  dword_50FC9C = 0;
  dword_50FCA0 = 0;
  dword_50FCA4 = 0;
  dword_50FCA8 = 0;
  byte_50FC9B = -1;
  sub_3BF0BC((int)&unk_50FCAC, "UIClient");
  sub_390BFC(&unk_50FCAC, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DA1C
// address: 0x0013DA1C   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DA1C()
{
  byte_50FCB0 = 0;
  byte_50FCB1 = 0;
  byte_50FCB2 = 0;
  dword_50FCB4 = 0;
  dword_50FCB8 = 0;
  dword_50FCBC = 0;
  dword_50FCC0 = 0;
  byte_50FCB3 = -1;
  sub_3BF0BC((int)&unk_50FCC4, "UIClient");
  sub_390BFC(&unk_50FCC4, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DA68
// address: 0x0013DA68   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DA68()
{
  byte_50FCC8 = 0;
  byte_50FCC9 = 0;
  byte_50FCCA = 0;
  dword_50FCCC = 0;
  dword_50FCD0 = 0;
  dword_50FCD4 = 0;
  dword_50FCD8 = 0;
  byte_50FCCB = -1;
  sub_3BF0BC((int)&unk_50FCDC, "UIClient");
  sub_390BFC(&unk_50FCDC, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DAB4
// address: 0x0013DAB4   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DAB4()
{
  byte_50FCE0 = 0;
  byte_50FCE1 = 0;
  byte_50FCE2 = 0;
  dword_50FCE4 = 0;
  dword_50FCE8 = 0;
  dword_50FCEC = 0;
  dword_50FCF0 = 0;
  byte_50FCE3 = -1;
  sub_3BF0BC((int)&unk_50FCF4, "UIClient");
  sub_390BFC(&unk_50FCF4, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DB00
// address: 0x0013DB00   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DB00()
{
  byte_50FCF8 = 0;
  byte_50FCF9 = 0;
  byte_50FCFA = 0;
  dword_50FCFC = 0;
  dword_50FD00 = 0;
  dword_50FD04 = 0;
  dword_50FD08 = 0;
  byte_50FCFB = -1;
  sub_3BF0BC((int)&unk_50FD0C, "UIClient");
  sub_390BFC(&unk_50FD0C, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DB4C
// address: 0x0013DB4C   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DB4C()
{
  byte_50FD10 = 0;
  byte_50FD11 = 0;
  byte_50FD12 = 0;
  dword_50FD14 = 0;
  dword_50FD18 = 0;
  dword_50FD1C = 0;
  dword_50FD20 = 0;
  byte_50FD13 = -1;
  sub_3BF0BC((int)&unk_50FD24, "UIClient");
  sub_390BFC(&unk_50FD24, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DB98
// address: 0x0013DB98   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DB98()
{
  byte_50FD2C = 0;
  byte_50FD2D = 0;
  byte_50FD2E = 0;
  dword_50FD30 = 0;
  dword_50FD34 = 0;
  dword_50FD38 = 0;
  dword_50FD3C = 0;
  byte_50FD2F = -1;
  sub_3BF0BC((int)&unk_50FD40, "UIClient");
  sub_390BFC(&unk_50FD40, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DBE4
// address: 0x0013DBE4   size: 0x1A (26 bytes)
//======================================================================
void sub_13DBE4()
{
  byte_50FD44 = 0;
  byte_50FD45 = 0;
  byte_50FD46 = 0;
  byte_50FD47 = -1;
  dword_50FD48 = 0;
  dword_50FD4C = 0;
  dword_50FD50 = 0;
  dword_50FD54 = 0;
}


//======================================================================
// sub_13DC04
// address: 0x0013DC04   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DC04()
{
  byte_50FD58 = 0;
  byte_50FD59 = 0;
  byte_50FD5A = 0;
  dword_50FD5C = 0;
  dword_50FD60 = 0;
  dword_50FD64 = 0;
  dword_50FD68 = 0;
  byte_50FD5B = -1;
  sub_3BF0BC((int)&unk_50FD6C, "UIClient");
  sub_390BFC(&unk_50FD6C, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DC50
// address: 0x0013DC50   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DC50()
{
  byte_50FD70 = 0;
  byte_50FD71 = 0;
  byte_50FD72 = 0;
  dword_50FD74 = 0;
  dword_50FD78 = 0;
  dword_50FD7C = 0;
  dword_50FD80 = 0;
  byte_50FD73 = -1;
  sub_3BF0BC((int)&unk_50FD84, "UIClient");
  sub_390BFC(&unk_50FD84, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DC9C
// address: 0x0013DC9C   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DC9C()
{
  byte_50FD88 = 0;
  byte_50FD89 = 0;
  byte_50FD8A = 0;
  dword_50FD8C = 0;
  dword_50FD90 = 0;
  dword_50FD94 = 0;
  dword_50FD98 = 0;
  byte_50FD8B = -1;
  sub_3BF0BC((int)&unk_50FD9C, "UIClient");
  sub_390BFC(&unk_50FD9C, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DCE8
// address: 0x0013DCE8   size: 0x48 (72 bytes)
//======================================================================
int sub_13DCE8()
{
  sub_3BF0BC((int)&dword_50FDAC, (char *)&unk_3FB8EA);
  sub_390BFC(&dword_50FDAC, (void (*)(void *))sub_3BDF80);
  sub_3BF0BC((int)&dword_50FDB0, (char *)&unk_3FB8EA);
  return sub_390BFC(&dword_50FDB0, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DD40
// address: 0x0013DD40   size: 0x24 (36 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13DD40()
{
  sub_3BF0BC((int)&unk_510FCC, "OGL RenderSystem");
  sub_390BFC(&unk_510FCC, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13DD74
// address: 0x0013DD74   size: 0x4E (78 bytes)
//======================================================================
int sub_13DD74()
{
  sub_390CD8(&unk_510FF4);
  sub_390BFC(&unk_510FF4, (void (*)(void *))sub_391198);
  dword_510FDC = 0;
  dword_510FE0 = 0;
  dword_510FE4 = 0;
  sub_390BFC(&dword_510FDC, (void (*)(void *))std::vector<ParticleVertex>::~vector);
  dword_510FE8 = 0;
  dword_510FEC = 0;
  dword_510FF0 = 0;
  return sub_390BFC(&dword_510FE8, (void (*)(void *))std::vector<ParticleVertex>::~vector);
}


//======================================================================
// sub_13DDD4
// address: 0x0013DDD4   size: 0x32 (50 bytes)
//======================================================================
int sub_13DDD4()
{
  int result; // r0

  sub_390CD8(&unk_512FFC);
  result = sub_390BFC(&unk_512FFC, (void (*)(void *))sub_391198);
  byte_513000 = 0;
  byte_513001 = 0;
  byte_513002 = 0;
  byte_513003 = -1;
  dword_513004 = 0;
  dword_513008 = 0;
  dword_51300C = 0;
  dword_513010 = 0;
  return result;
}


//======================================================================
// sub_13DE14
// address: 0x0013DE14   size: 0x32 (50 bytes)
//======================================================================
int sub_13DE14()
{
  int result; // r0

  sub_390CD8(&unk_513020);
  result = sub_390BFC(&unk_513020, (void (*)(void *))sub_391198);
  byte_513024 = 0;
  byte_513025 = 0;
  byte_513026 = 0;
  byte_513027 = -1;
  dword_513028 = 0;
  dword_51302C = 0;
  dword_513030 = 0;
  dword_513034 = 0;
  return result;
}


//======================================================================
// sub_13DE54
// address: 0x0013DE54   size: 0x1E (30 bytes)
//======================================================================
int sub_13DE54()
{
  sub_390CD8(&unk_513038);
  return sub_390BFC(&unk_513038, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13DE80
// address: 0x0013DE80   size: 0x28 (40 bytes)
//======================================================================
int sub_13DE80()
{
  sub_390CD8(&unk_513048);
  sub_390BFC(&unk_513048, (void (*)(void *))sub_391198);
  return profiny::Timer::Timer((profiny::Timer *)&s_Timer);
}


//======================================================================
// sub_13DEB8
// address: 0x0013DEB8   size: 0x23E (574 bytes)
//======================================================================
int *sub_13DEB8()
{
  Section::m_EmptyBlock = 0;
  Section::m_EmptyBlockLight = 15;
  dword_513080 = -1;
  dword_513084 = 0;
  dword_513088 = -1;
  dword_51308C = -1;
  dword_513090 = -1;
  dword_513094 = 0;
  dword_513098 = -1;
  dword_51309C = 0;
  dword_5130A0 = 1;
  dword_5130A4 = -1;
  dword_5130A8 = 1;
  dword_5130AC = 0;
  dword_5130B0 = 1;
  dword_5130B4 = -1;
  dword_5130B8 = 0;
  dword_5130BC = 1;
  dword_5130C0 = 0;
  dword_5130C4 = -1;
  dword_5130C8 = 1;
  dword_5130CC = 1;
  dword_5130D0 = 0;
  dword_5130D4 = 1;
  dword_5130D8 = 0;
  dword_5130DC = 1;
  dword_5130E0 = 0;
  dword_5130E4 = -1;
  dword_5130E8 = -1;
  dword_5130EC = -1;
  dword_5130F0 = 0;
  dword_513100 = -1;
  dword_513104 = 1;
  dword_513108 = 0;
  dword_51310C = -1;
  dword_513110 = -1;
  dword_513114 = 0;
  dword_513118 = 1;
  dword_51311C = 0;
  dword_513120 = -1;
  dword_513124 = 1;
  dword_513128 = 1;
  dword_51312C = 0;
  dword_513130 = 1;
  dword_513134 = 0;
  dword_513138 = 1;
  dword_51313C = 1;
  dword_513140 = -1;
  dword_513144 = -1;
  dword_513148 = 0;
  dword_51314C = 0;
  dword_513150 = -1;
  dword_513154 = -1;
  dword_513158 = 1;
  dword_51315C = -1;
  dword_513160 = 0;
  dword_513164 = 0;
  dword_513168 = -1;
  dword_51316C = 1;
  dword_513170 = 0;
  dword_513174 = 1;
  dword_5130F4 = -1;
  dword_5130F8 = 0;
  dword_5130FC = 1;
  dword_513178 = -1;
  dword_51319C = 0;
  dword_51317C = -1;
  dword_513180 = 1;
  dword_513184 = 0;
  dword_513188 = 0;
  dword_51318C = 1;
  dword_513190 = 1;
  dword_513194 = 1;
  dword_513198 = 1;
  dword_5131A0 = -1;
  dword_5131A4 = -1;
  dword_5131A8 = -1;
  dword_5131AC = -1;
  dword_5131B0 = -1;
  dword_5131B4 = 1;
  dword_5131B8 = -1;
  dword_5131BC = 1;
  dword_5131C0 = 1;
  dword_5131C4 = -1;
  dword_5131C8 = 1;
  dword_5131CC = -1;
  dword_5131D0 = 1;
  dword_5131D4 = -1;
  dword_5131D8 = -1;
  dword_5131DC = 1;
  dword_5131E0 = 1;
  dword_5131E4 = -1;
  dword_5131E8 = 1;
  dword_5131EC = 1;
  dword_5131F0 = 1;
  dword_5131F4 = 1;
  dword_5131F8 = -1;
  dword_5131FC = 1;
  dword_513200 = -1;
  dword_513204 = -1;
  dword_513208 = -1;
  dword_51320C = -1;
  dword_513210 = 1;
  dword_513214 = -1;
  dword_513218 = 1;
  dword_51321C = 1;
  dword_513220 = -1;
  dword_513224 = 1;
  dword_513228 = -1;
  dword_51322C = -1;
  dword_513230 = -1;
  dword_513234 = -1;
  dword_513238 = 1;
  dword_51323C = 1;
  dword_513240 = -1;
  dword_513244 = 1;
  dword_513248 = 1;
  dword_51324C = 1;
  dword_513250 = 1;
  dword_513254 = -1;
  dword_513258 = 1;
  dword_51325C = 1;
  dword_513260 = -1;
  dword_513264 = -1;
  dword_513268 = -1;
  dword_51326C = 1;
  dword_513270 = -1;
  dword_513274 = -1;
  dword_513278 = 1;
  dword_51327C = -1;
  dword_513280 = 1;
  dword_513284 = -1;
  dword_513288 = -1;
  dword_51328C = 1;
  dword_513290 = -1;
  dword_513294 = 1;
  dword_513298 = -1;
  dword_51329C = -1;
  dword_5132A0 = 1;
  dword_5132A4 = 1;
  dword_5132A8 = 1;
  dword_5132AC = 1;
  dword_5132B0 = 1;
  dword_5132B4 = 1;
  dword_5132B8 = 1;
  dword_5132BC = -1;
  return &dword_513278;
}


//======================================================================
// sub_13E108
// address: 0x0013E108   size: 0x2C (44 bytes)
//======================================================================
int sub_13E108()
{
  ChunkRandGen::ChunkRandGen((ChunkRandGen *)&s_DefaultGen);
  Ogre::GaussGenerator::GaussGenerator((Ogre::GaussGenerator *)&s_GaussGen, 0);
  return sub_390BFC(&s_GaussGen, (void (*)(void *))Ogre::GaussGenerator::~GaussGenerator);
}


//======================================================================
// sub_13E144
// address: 0x0013E144   size: 0x5E (94 bytes)
//======================================================================
int sub_13E144()
{
  byte_5132FB = -1;
  byte_5132F8 = 0;
  byte_5132F9 = 0;
  byte_5132FA = 0;
  dword_5132FC = 0;
  dword_513300 = 0;
  dword_513304 = 0;
  dword_513308 = 0;
  sub_390CD8(&unk_51330C);
  sub_390BFC(&unk_51330C, (void (*)(void *))sub_391198);
  j_memset(&unk_513318, 0, 0x10u);
  dword_513328 = 0;
  dword_513320 = (int)&unk_513318;
  dword_513324 = (int)&unk_513318;
  return sub_390BFC(&g_BreedingItemMap, (void (*)(void *))std::multimap<int,int>::~multimap);
}


//======================================================================
// sub_13E1B8
// address: 0x0013E1B8   size: 0x1E (30 bytes)
//======================================================================
int sub_13E1B8()
{
  sub_390CD8(&unk_51332C);
  return sub_390BFC(&unk_51332C, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E1E4
// address: 0x0013E1E4   size: 0x1A (26 bytes)
//======================================================================
void sub_13E1E4()
{
  dword_513330 = 1056964608;
  dword_513334 = 1045220557;
  dword_513338 = 1061997773;
  dword_51333C = 1065353216;
}


//======================================================================
// sub_13E20C
// address: 0x0013E20C   size: 0x1E (30 bytes)
//======================================================================
int sub_13E20C()
{
  sub_390CD8(&unk_513340);
  return sub_390BFC(&unk_513340, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E238
// address: 0x0013E238   size: 0x54 (84 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13E238()
{
  byte_513347 = -1;
  byte_513344 = 0;
  byte_513345 = 0;
  byte_513346 = 0;
  dword_513348 = 0;
  dword_51334C = 0;
  dword_513350 = 0;
  dword_513354 = 0;
  sub_3BF0BC((int)&unk_513358, "UIClient");
  sub_390BFC(&unk_513358, (void (*)(void *))sub_3BDF80);
  sub_390CD8(&unk_51335C);
  sub_390BFC(&unk_51335C, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E2A0
// address: 0x0013E2A0   size: 0x1E (30 bytes)
//======================================================================
int sub_13E2A0()
{
  sub_390CD8(&unk_513360);
  return sub_390BFC(&unk_513360, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E2CC
// address: 0x0013E2CC   size: 0x54 (84 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13E2CC()
{
  byte_513364 = 0;
  byte_513365 = 0;
  byte_513366 = 0;
  dword_513368 = 0;
  dword_51336C = 0;
  dword_513370 = 0;
  dword_513374 = 0;
  byte_513367 = -1;
  sub_390CD8(&unk_513378);
  sub_390BFC(&unk_513378, (void (*)(void *))sub_391198);
  sub_3BF0BC((int)&unk_51337C, "UIClient");
  sub_390BFC(&unk_51337C, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13E334
// address: 0x0013E334   size: 0x1A (26 bytes)
//======================================================================
void sub_13E334()
{
  byte_513380 = 0;
  byte_513381 = 0;
  byte_513382 = 0;
  byte_513383 = -1;
  dword_513384 = 0;
  dword_513388 = 0;
  dword_51338C = 0;
  dword_513390 = 0;
}


//======================================================================
// sub_13E354
// address: 0x0013E354   size: 0x24 (36 bytes)
//======================================================================
int sub_13E354()
{
  dword_5133AC = (int)&off_45DC48;
  dword_5133B0 = 10000;
  return sub_390BFC(&dword_5133AC, (void (*)(void *))anl::LCG::~LCG);
}


//======================================================================
// sub_13E38C
// address: 0x0013E38C   size: 0x36 (54 bytes)
//======================================================================
int sub_13E38C()
{
  byte_5133CC = 0;
  byte_5133CD = 0;
  byte_5133CE = 0;
  dword_5133D0 = 0;
  dword_5133D4 = 0;
  dword_5133D8 = 0;
  dword_5133DC = 0;
  byte_5133CF = -1;
  sub_390CD8(&unk_5133E0);
  return sub_390BFC(&unk_5133E0, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E3D0
// address: 0x0013E3D0   size: 0x1E (30 bytes)
//======================================================================
int sub_13E3D0()
{
  sub_390CD8(&unk_5133E4);
  return sub_390BFC(&unk_5133E4, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E3FC
// address: 0x0013E3FC   size: 0x36 (54 bytes)
//======================================================================
int sub_13E3FC()
{
  byte_513468 = 0;
  byte_513469 = 0;
  byte_51346A = 0;
  dword_51346C = 0;
  dword_513470 = 0;
  dword_513474 = 0;
  dword_513478 = 0;
  byte_51346B = -1;
  sub_390CD8(&unk_51347C);
  return sub_390BFC(&unk_51347C, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E440
// address: 0x0013E440   size: 0x1E (30 bytes)
//======================================================================
int sub_13E440()
{
  sub_390CD8(&unk_513484);
  return sub_390BFC(&unk_513484, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E46C
// address: 0x0013E46C   size: 0x1A (26 bytes)
//======================================================================
void sub_13E46C()
{
  byte_513490 = 0;
  byte_513491 = 0;
  byte_513492 = 0;
  byte_513493 = -1;
  dword_513494 = 0;
  dword_513498 = 0;
  dword_51349C = 0;
  dword_5134A0 = 0;
}


//======================================================================
// sub_13E48C
// address: 0x0013E48C   size: 0x2A (42 bytes)
//======================================================================
int sub_13E48C()
{
  byte_5134D0 = 0;
  byte_5134D1 = 0;
  byte_5134D2 = 0;
  byte_5134D3 = -1;
  dword_5134D4 = 0;
  dword_5134D8 = 0;
  dword_5134DC = 0;
  dword_5134E0 = 0;
  return 255;
}


//======================================================================
// sub_13E4BC
// address: 0x0013E4BC   size: 0x1E (30 bytes)
//======================================================================
int sub_13E4BC()
{
  sub_390CD8(&unk_5164E4);
  return sub_390BFC(&unk_5164E4, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E4E8
// address: 0x0013E4E8   size: 0x5A (90 bytes)
//======================================================================
int sub_13E4E8()
{
  int result; // r0

  sub_390CD8(&unk_516524);
  result = sub_390BFC(&unk_516524, (void (*)(void *))sub_391198);
  dword_5164EC = 0;
  dword_5164E8 = 1112014848;
  dword_5164F0 = 1112014848;
  dword_516508 = 0;
  dword_5164F4 = 1117782016;
  dword_51650C = -1059061760;
  dword_5164F8 = 1097859072;
  dword_5164FC = 1101004800;
  dword_516500 = 1108606976;
  dword_516504 = 1107296256;
  dword_516510 = 1107296256;
  dword_516514 = -1049624576;
  dword_516518 = 1101529088;
  dword_51651C = -1038614528;
  dword_516520 = 1102577664;
  return result;
}


//======================================================================
// sub_13E578
// address: 0x0013E578   size: 0x2C (44 bytes)
//======================================================================
int sub_13E578()
{
  j_memset(&unk_51652C, 0, 0x10u);
  dword_516534 = (int)&unk_51652C;
  dword_516538 = (int)&unk_51652C;
  dword_51653C = 0;
  return sub_390BFC(&unk_516528, (void (*)(void *))std::map<std::string,BlockMaterial * (*)(void)>::~map);
}


//======================================================================
// sub_13E5B0
// address: 0x0013E5B0   size: 0x1E (30 bytes)
//======================================================================
int sub_13E5B0()
{
  sub_390CD8(&unk_516588);
  return sub_390BFC(&unk_516588, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E5DC
// address: 0x0013E5DC   size: 0x5A (90 bytes)
//======================================================================
int sub_13E5DC()
{
  sub_390CD8(&unk_516624);
  sub_390BFC(&unk_516624, (void (*)(void *))sub_391198);
  word_51658C = 4095;
  g_DirectionCoord = -1;
  dword_51662C = 0;
  dword_516630 = 0;
  dword_516634 = 1;
  dword_516638 = 0;
  dword_51663C = 0;
  dword_516640 = 0;
  dword_516644 = 0;
  dword_516648 = -1;
  dword_51664C = 0;
  dword_516650 = 0;
  dword_516654 = 1;
  dword_516658 = 0;
  dword_51665C = -1;
  dword_516660 = 0;
  dword_516664 = 0;
  dword_516668 = 1;
  dword_51666C = 0;
  return -1;
}


//======================================================================
// sub_13E650
// address: 0x0013E650   size: 0x1E (30 bytes)
//======================================================================
int sub_13E650()
{
  sub_390CD8(&unk_516F74);
  return sub_390BFC(&unk_516F74, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E67C
// address: 0x0013E67C   size: 0x66 (102 bytes)
//======================================================================
int *sub_13E67C()
{
  dword_516FFC = 1;
  dword_516F7C = 0;
  dword_516F80 = 0;
  dword_516F84 = 0;
  dword_516F88 = 0;
  dword_516F8C = 1;
  dword_516F90 = 0;
  dword_516F94 = 0;
  dword_516F98 = 0;
  dword_516F9C = 1;
  dword_516FA0 = 0;
  dword_516FA4 = 1;
  dword_516FA8 = 1;
  dword_516FAC = 0;
  dword_516FB0 = 0;
  dword_516FB4 = 0;
  dword_516FB8 = 1;
  dword_516FBC = 0;
  dword_516FC0 = 0;
  dword_516FC4 = 0;
  dword_516FC8 = 1;
  dword_516FCC = 0;
  dword_516FD0 = 1;
  dword_516FD4 = 1;
  dword_516FD8 = 0;
  dword_516FDC = 0;
  dword_516FE0 = 0;
  dword_516FE4 = 0;
  dword_516FE8 = 1;
  dword_516FEC = 0;
  dword_516FF0 = 0;
  dword_516FF4 = 0;
  dword_516FF8 = 0;
  dword_517000 = 1;
  dword_517008 = 1;
  dword_517004 = 0;
  dword_51700C = -8355712;
  return &dword_517004;
}


//======================================================================
// sub_13E6F0
// address: 0x0013E6F0   size: 0x1E (30 bytes)
//======================================================================
int sub_13E6F0()
{
  sub_390CD8(&unk_517010);
  return sub_390BFC(&unk_517010, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E71C
// address: 0x0013E71C   size: 0x1E (30 bytes)
//======================================================================
int sub_13E71C()
{
  sub_390CD8(&unk_51701C);
  return sub_390BFC(&unk_51701C, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E748
// address: 0x0013E748   size: 0x3C (60 bytes)
//======================================================================
int sub_13E748()
{
  sub_390CD8(&unk_5172E4);
  sub_390BFC(&unk_5172E4, (void (*)(void *))sub_391198);
  SectionCuller::SectionCuller((SectionCuller *)&unk_517078);
  return sub_390BFC(&unk_517078, (void (*)(void *))SectionCuller::~SectionCuller);
}


//======================================================================
// sub_13E798
// address: 0x0013E798   size: 0x1A (26 bytes)
//======================================================================
void sub_13E798()
{
  byte_5172E8 = 0;
  byte_5172E9 = 0;
  byte_5172EA = 0;
  byte_5172EB = -1;
  dword_5172EC = 0;
  dword_5172F0 = 0;
  dword_5172F4 = 0;
  dword_5172F8 = 0;
}


//======================================================================
// sub_13E7B8
// address: 0x0013E7B8   size: 0x1E (30 bytes)
//======================================================================
int sub_13E7B8()
{
  sub_390CD8(&unk_5172FC);
  return sub_390BFC(&unk_5172FC, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E7E4
// address: 0x0013E7E4   size: 0x1E (30 bytes)
//======================================================================
int sub_13E7E4()
{
  sub_390CD8(&unk_5172FD);
  return sub_390BFC(&unk_5172FD, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E810
// address: 0x0013E810   size: 0x1E (30 bytes)
//======================================================================
int sub_13E810()
{
  sub_390CD8(&unk_5172FE);
  return sub_390BFC(&unk_5172FE, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E83C
// address: 0x0013E83C   size: 0x36 (54 bytes)
//======================================================================
int sub_13E83C()
{
  byte_517300 = 0;
  byte_517301 = 0;
  byte_517302 = 0;
  dword_517304 = 0;
  dword_517308 = 0;
  dword_51730C = 0;
  dword_517310 = 0;
  byte_517303 = -1;
  sub_390CD8(&unk_517314);
  return sub_390BFC(&unk_517314, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E880
// address: 0x0013E880   size: 0x1E (30 bytes)
//======================================================================
int sub_13E880()
{
  sub_390CD8(&unk_517324);
  return sub_390BFC(&unk_517324, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E8AC
// address: 0x0013E8AC   size: 0x50 (80 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13E8AC()
{
  sub_390CD8(&unk_51732C);
  sub_390BFC(&unk_51732C, (void (*)(void *))sub_391198);
  byte_517330 = 0;
  byte_517331 = 0;
  byte_517332 = 0;
  dword_517334 = 0;
  dword_517338 = 0;
  dword_51733C = 0;
  dword_517340 = 0;
  byte_517333 = -1;
  sub_3BF0BC((int)&unk_517344, "UIClient");
  sub_390BFC(&unk_517344, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13E910
// address: 0x0013E910   size: 0x46 (70 bytes)
//======================================================================
int sub_13E910()
{
  int result; // r0

  sub_390CD8(&unk_5173AC);
  result = sub_390BFC(&unk_5173AC, (void (*)(void *))sub_391198);
  byte_5173B0 = 0;
  byte_5173B1 = 0;
  byte_5173B2 = 0;
  byte_5173B3 = -1;
  dword_5173B4 = 0;
  dword_5173B8 = 0;
  dword_5173BC = 0;
  dword_5173C0 = 0;
  return result;
}


//======================================================================
// sub_13E964
// address: 0x0013E964   size: 0x1E (30 bytes)
//======================================================================
int sub_13E964()
{
  sub_390CD8(&unk_5173C4);
  return sub_390BFC(&unk_5173C4, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13E990
// address: 0x0013E990   size: 0x3C (60 bytes)
//======================================================================
int sub_13E990()
{
  int result; // r0

  byte_5173CF = -1;
  byte_5173CC = 0;
  byte_5173CD = 0;
  byte_5173CE = 0;
  dword_5173D0 = 0;
  dword_5173D4 = 0;
  dword_5173D8 = 0;
  dword_5173DC = 0;
  sub_390CD8(&unk_5173E0);
  result = sub_390BFC(&unk_5173E0, (void (*)(void *))sub_391198);
  word_5173CA = 0;
  byte_5173C8 = 15;
  return result;
}


//======================================================================
// sub_13E9D8
// address: 0x0013E9D8   size: 0x1A (26 bytes)
//======================================================================
void sub_13E9D8()
{
  byte_5173E4 = 0;
  byte_5173E5 = 0;
  byte_5173E6 = 0;
  byte_5173E7 = -1;
  dword_5173E8 = 0;
  dword_5173EC = 0;
  dword_5173F0 = 0;
  dword_5173F4 = 0;
}


//======================================================================
// sub_13E9F8
// address: 0x0013E9F8   size: 0x36 (54 bytes)
//======================================================================
int sub_13E9F8()
{
  byte_5173F8 = 0;
  byte_5173F9 = 0;
  byte_5173FA = 0;
  dword_5173FC = 0;
  dword_517400 = 0;
  dword_517404 = 0;
  dword_517408 = 0;
  byte_5173FB = -1;
  sub_390CD8(&unk_51740C);
  return sub_390BFC(&unk_51740C, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EA3C
// address: 0x0013EA3C   size: 0x1E (30 bytes)
//======================================================================
int sub_13EA3C()
{
  sub_390CD8(&unk_517410);
  return sub_390BFC(&unk_517410, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EA68
// address: 0x0013EA68   size: 0x1E (30 bytes)
//======================================================================
int sub_13EA68()
{
  dword_517414 = 0;
  dword_517418 = 0;
  dword_51741C = 0;
  return sub_390BFC(&dword_517414, (void (*)(void *))std::vector<GenLayer *>::~vector);
}


//======================================================================
// sub_13EA94
// address: 0x0013EA94   size: 0x3C (60 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13EA94()
{
  byte_517420 = 0;
  byte_517421 = 0;
  byte_517422 = 0;
  dword_517424 = 0;
  dword_517428 = 0;
  dword_51742C = 0;
  dword_517430 = 0;
  byte_517423 = -1;
  sub_3BF0BC((int)&unk_517434, "UIClient");
  sub_390BFC(&unk_517434, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13EAE0
// address: 0x0013EAE0   size: 0x1E (30 bytes)
//======================================================================
int sub_13EAE0()
{
  sub_390CD8(&unk_517438);
  return sub_390BFC(&unk_517438, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EB0C
// address: 0x0013EB0C   size: 0x24 (36 bytes)
//======================================================================
int sub_13EB0C()
{
  dword_51743C = (int)&off_45DC48;
  dword_517440 = 10000;
  return sub_390BFC(&dword_51743C, (void (*)(void *))anl::LCG::~LCG);
}


//======================================================================
// sub_13EB44
// address: 0x0013EB44   size: 0x1E (30 bytes)
//======================================================================
int sub_13EB44()
{
  sub_390CD8(&unk_517448);
  return sub_390BFC(&unk_517448, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EB70
// address: 0x0013EB70   size: 0x54 (84 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13EB70()
{
  byte_51744C = 0;
  byte_51744D = 0;
  byte_51744E = 0;
  dword_517450 = 0;
  dword_517454 = 0;
  dword_517458 = 0;
  dword_51745C = 0;
  byte_51744F = -1;
  sub_390CD8(&unk_517460);
  sub_390BFC(&unk_517460, (void (*)(void *))sub_391198);
  sub_3BF0BC((int)&unk_517464, "UIClient");
  sub_390BFC(&unk_517464, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13EBD8
// address: 0x0013EBD8   size: 0x1E (30 bytes)
//======================================================================
int sub_13EBD8()
{
  sub_390CD8(&unk_517534);
  return sub_390BFC(&unk_517534, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EC04
// address: 0x0013EC04   size: 0x1E (30 bytes)
//======================================================================
int sub_13EC04()
{
  sub_390CD8(&unk_517535);
  return sub_390BFC(&unk_517535, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EC30
// address: 0x0013EC30   size: 0x1E (30 bytes)
//======================================================================
int sub_13EC30()
{
  sub_390CD8(&unk_517536);
  return sub_390BFC(&unk_517536, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EC5C
// address: 0x0013EC5C   size: 0x1E (30 bytes)
//======================================================================
int sub_13EC5C()
{
  sub_390CD8(&unk_517538);
  return sub_390BFC(&unk_517538, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EC88
// address: 0x0013EC88   size: 0x1E (30 bytes)
//======================================================================
int sub_13EC88()
{
  sub_390CD8(&unk_517544);
  return sub_390BFC(&unk_517544, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13ECB4
// address: 0x0013ECB4   size: 0x32 (50 bytes)
//======================================================================
int sub_13ECB4()
{
  int result; // r0

  sub_390CD8(&unk_517548);
  result = sub_390BFC(&unk_517548, (void (*)(void *))sub_391198);
  byte_51754C = 0;
  byte_51754D = 0;
  byte_51754E = 0;
  byte_51754F = -1;
  dword_517550 = 0;
  dword_517554 = 0;
  dword_517558 = 0;
  dword_51755C = 0;
  return result;
}


//======================================================================
// sub_13ECF4
// address: 0x0013ECF4   size: 0x24 (36 bytes)
//======================================================================
int sub_13ECF4()
{
  dword_517560 = (int)&off_45DC48;
  dword_517564 = 10000;
  return sub_390BFC(&dword_517560, (void (*)(void *))anl::LCG::~LCG);
}


//======================================================================
// sub_13ED2C
// address: 0x0013ED2C   size: 0x1E (30 bytes)
//======================================================================
int sub_13ED2C()
{
  sub_390CD8(&unk_517568);
  return sub_390BFC(&unk_517568, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13ED58
// address: 0x0013ED58   size: 0x1E (30 bytes)
//======================================================================
int sub_13ED58()
{
  sub_390CD8(&unk_517570);
  return sub_390BFC(&unk_517570, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13ED84
// address: 0x0013ED84   size: 0x54 (84 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13ED84()
{
  byte_517578 = 0;
  byte_517579 = 0;
  byte_51757A = 0;
  dword_51757C = 0;
  dword_517580 = 0;
  dword_517584 = 0;
  dword_517588 = 0;
  byte_51757B = -1;
  sub_390CD8(&unk_51758C);
  sub_390BFC(&unk_51758C, (void (*)(void *))sub_391198);
  sub_3BF0BC((int)&unk_517590, "UIClient");
  sub_390BFC(&unk_517590, (void (*)(void *))sub_3BDF80);
}


//======================================================================
// sub_13EDEC
// address: 0x0013EDEC   size: 0x54 (84 bytes)
//======================================================================
void __spoils<R2,R3,R12,LR> sub_13EDEC()
{
  byte_51759F = -1;
  byte_51759C = 0;
  byte_51759D = 0;
  byte_51759E = 0;
  dword_5175A0 = 0;
  dword_5175A4 = 0;
  dword_5175A8 = 0;
  dword_5175AC = 0;
  sub_3BF0BC((int)&unk_5175B0, "UIClient");
  sub_390BFC(&unk_5175B0, (void (*)(void *))sub_3BDF80);
  sub_390CD8(&unk_5175B4);
  sub_390BFC(&unk_5175B4, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EE54
// address: 0x0013EE54   size: 0xA (10 bytes)
//======================================================================
void sub_13EE54()
{
  dword_5175BC = 0;
}


//======================================================================
// sub_13EE64
// address: 0x0013EE64   size: 0x32 (50 bytes)
//======================================================================
int sub_13EE64()
{
  int result; // r0

  sub_390CD8(&unk_5175C0);
  result = sub_390BFC(&unk_5175C0, (void (*)(void *))sub_391198);
  byte_5175C4 = 0;
  byte_5175C5 = 0;
  byte_5175C6 = 0;
  byte_5175C7 = -1;
  dword_5175C8 = 0;
  dword_5175CC = 0;
  dword_5175D0 = 0;
  dword_5175D4 = 0;
  return result;
}


//======================================================================
// sub_13EEA4
// address: 0x0013EEA4   size: 0x24 (36 bytes)
//======================================================================
int sub_13EEA4()
{
  dword_5175DC = (int)&off_45DC48;
  dword_5175E0 = 10000;
  return sub_390BFC(&dword_5175DC, (void (*)(void *))anl::LCG::~LCG);
}


//======================================================================
// sub_13EEDC
// address: 0x0013EEDC   size: 0x1E (30 bytes)
//======================================================================
int sub_13EEDC()
{
  sub_390CD8(&unk_5175E4);
  return sub_390BFC(&unk_5175E4, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EF08
// address: 0x0013EF08   size: 0x32 (50 bytes)
//======================================================================
int sub_13EF08()
{
  dword_5175EC = -1;
  dword_5175F0 = 0;
  dword_5175F4 = 0;
  dword_5175F8 = 1;
  dword_5175FC = 0;
  dword_517600 = 0;
  dword_517604 = 0;
  dword_517608 = -1;
  dword_51760C = 0;
  dword_517610 = 0;
  dword_517614 = 1;
  dword_517618 = 0;
  dword_51761C = 0;
  dword_517620 = 0;
  dword_517624 = -1;
  dword_517628 = 0;
  dword_51762C = 0;
  dword_517630 = 1;
  return -1;
}


//======================================================================
// sub_13EF40
// address: 0x0013EF40   size: 0x3E (62 bytes)
//======================================================================
void sub_13EF40()
{
  s_RawPos = -1082130432;
  dword_517638 = -1082130432;
  dword_51763C = -1082130432;
  dword_517640 = 1065353216;
  dword_517644 = -1082130432;
  dword_517648 = -1082130432;
  dword_51764C = 1065353216;
  dword_517650 = -1082130432;
  dword_517654 = 1065353216;
  dword_517658 = -1082130432;
  dword_51765C = -1082130432;
  dword_517660 = 1065353216;
  dword_517664 = -1082130432;
  dword_517668 = 1065353216;
  dword_51766C = -1082130432;
  dword_517670 = 1065353216;
  dword_517674 = 1065353216;
  dword_517678 = -1082130432;
  dword_51767C = 1065353216;
  dword_517680 = 1065353216;
  dword_517684 = 1065353216;
  dword_517688 = -1082130432;
  dword_51768C = 1065353216;
  dword_517690 = 1065353216;
}


//======================================================================
// sub_13EF88
// address: 0x0013EF88   size: 0x1E (30 bytes)
//======================================================================
int sub_13EF88()
{
  sub_390CD8(&unk_517694);
  return sub_390BFC(&unk_517694, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EFB4
// address: 0x0013EFB4   size: 0x1E (30 bytes)
//======================================================================
int sub_13EFB4()
{
  sub_390CD8(&unk_517695);
  return sub_390BFC(&unk_517695, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13EFE0
// address: 0x0013EFE0   size: 0x1E (30 bytes)
//======================================================================
int sub_13EFE0()
{
  sub_390CD8(&unk_517696);
  return sub_390BFC(&unk_517696, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F00C
// address: 0x0013F00C   size: 0x1E (30 bytes)
//======================================================================
int sub_13F00C()
{
  sub_390CD8(&unk_517697);
  return sub_390BFC(&unk_517697, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F038
// address: 0x0013F038   size: 0x1E (30 bytes)
//======================================================================
int sub_13F038()
{
  sub_390CD8(&unk_517698);
  return sub_390BFC(&unk_517698, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F064
// address: 0x0013F064   size: 0x1A (26 bytes)
//======================================================================
void sub_13F064()
{
  byte_51769C = 0;
  byte_51769D = 0;
  byte_51769E = 0;
  byte_51769F = -1;
  dword_5176A0 = 0;
  dword_5176A4 = 0;
  dword_5176A8 = 0;
  dword_5176AC = 0;
}


//======================================================================
// sub_13F084
// address: 0x0013F084   size: 0x1E (30 bytes)
//======================================================================
int sub_13F084()
{
  sub_390CD8(&unk_5176B0);
  return sub_390BFC(&unk_5176B0, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F0B0
// address: 0x0013F0B0   size: 0x7A (122 bytes)
//======================================================================
unsigned __int64 __fastcall sub_13F0B0(unsigned int a1)
{
  unsigned __int64 v2; // [sp+0h] [bp-Ch]

  v2 = __PAIR64__(sub_391198, a1);
  sub_390CD8(&unk_517E98);
  sub_390BFC(&unk_517E98, (void (*)(void *))sub_391198);
  byte_517E9C = 0;
  byte_517E9D = 0;
  byte_517E9E = 0;
  dword_517EA0 = 0;
  dword_517EA4 = 0;
  dword_517EA8 = 0;
  dword_517EAC = 0;
  byte_517E9F = -1;
  Ogre::LockSection::LockSection((Ogre::LockSection *)&g_Locker1);
  sub_390BFC(&g_Locker1, (void (*)(void *))Ogre::LockSection::~LockSection);
  Ogre::LockSection::LockSection((Ogre::LockSection *)&g_OWLocker1);
  sub_390BFC(&g_OWLocker1, (void (*)(void *))Ogre::LockSection::~LockSection);
  Ogre::LockSection::LockSection((Ogre::LockSection *)&g_CreateOWLocker1);
  sub_390BFC(&g_CreateOWLocker1, (void (*)(void *))Ogre::LockSection::~LockSection);
  return v2;
}


//======================================================================
// sub_13F14C
// address: 0x0013F14C   size: 0x1E (30 bytes)
//======================================================================
int sub_13F14C()
{
  sub_390CD8(&unk_5587E8);
  return sub_390BFC(&unk_5587E8, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F178
// address: 0x0013F178   size: 0x1E (30 bytes)
//======================================================================
int sub_13F178()
{
  sub_390CD8(&unk_558C9C);
  return sub_390BFC(&unk_558C9C, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F1A4
// address: 0x0013F1A4   size: 0x1E (30 bytes)
//======================================================================
int sub_13F1A4()
{
  sub_390CD8(&unk_558C9D);
  return sub_390BFC(&unk_558C9D, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F1D0
// address: 0x0013F1D0   size: 0x24 (36 bytes)
//======================================================================
int sub_13F1D0()
{
  dword_558D30 = (int)&off_45DC48;
  dword_558D34 = 10000;
  return sub_390BFC(&dword_558D30, (void (*)(void *))anl::LCG::~LCG);
}


//======================================================================
// sub_13F208
// address: 0x0013F208   size: 0x3E (62 bytes)
//======================================================================
int sub_13F208()
{
  dword_558D38 = (int)&off_45DC48;
  dword_558D3C = 10000;
  sub_390BFC(&dword_558D38, (void (*)(void *))anl::LCG::~LCG);
  sub_390CD8(&unk_558D40);
  return sub_390BFC(&unk_558D40, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F260
// address: 0x0013F260   size: 0x24 (36 bytes)
//======================================================================
int sub_13F260()
{
  dword_558D44 = (int)&off_45DC48;
  dword_558D48 = 10000;
  return sub_390BFC(&dword_558D44, (void (*)(void *))anl::LCG::~LCG);
}


//======================================================================
// sub_13F298
// address: 0x0013F298   size: 0x1E (30 bytes)
//======================================================================
int sub_13F298()
{
  sub_390CD8(&unk_559578);
  return sub_390BFC(&unk_559578, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F2C4
// address: 0x0013F2C4   size: 0x1E (30 bytes)
//======================================================================
int sub_13F2C4()
{
  sub_390CD8(&unk_559579);
  return sub_390BFC(&unk_559579, (void (*)(void *))sub_391198);
}


//======================================================================
// sub_13F2F0
// address: 0x0013F2F0   size: 0x2A (42 bytes)
//======================================================================
int sub_13F2F0()
{
  byte_559598 = 0;
  byte_559598 = j_pthread_key_create((pthread_key_t *)&dword_559594, (void (*)(void *))sub_390260) == 0;
  return sub_390BFC(&dword_559594, (void (*)(void *))sub_390244);
}


//======================================================================
// sub_13F32C
// address: 0x0013F32C   size: 0xA (10 bytes)
//======================================================================
void sub_13F32C()
{
  dword_55A4B0 = 0;
}


//======================================================================
// sub_13F33C
// address: 0x0013F33C   size: 0xAC (172 bytes)
//======================================================================
void sub_13F33C()
{
  if ( (dword_55ECD4 & 1) == 0 )
    dword_55ECD4 = 1;
  if ( (dword_55ECD0 & 1) == 0 )
    dword_55ECD0 = 1;
  if ( (dword_55ECCC & 1) == 0 )
    dword_55ECCC = 1;
  if ( (dword_55ECC8 & 1) == 0 )
    dword_55ECC8 = 1;
  if ( (dword_55ECC4 & 1) == 0 )
    dword_55ECC4 = 1;
  if ( (dword_55ECC0 & 1) == 0 )
    dword_55ECC0 = 1;
  if ( (dword_55ECBC & 1) == 0 )
    dword_55ECBC = 1;
  if ( (dword_55ECB8 & 1) == 0 )
    dword_55ECB8 = 1;
  if ( (dword_55ECB4 & 1) == 0 )
    dword_55ECB4 = 1;
  if ( (dword_55ECB0 & 1) == 0 )
    dword_55ECB0 = 1;
  if ( (dword_55ECAC & 1) == 0 )
    dword_55ECAC = 1;
  if ( (dword_55ECA8 & 1) == 0 )
    dword_55ECA8 = 1;
}


//======================================================================
// sub_13F418
// address: 0x0013F418   size: 0xAC (172 bytes)
//======================================================================
void sub_13F418()
{
  if ( (dword_55FB30 & 1) == 0 )
    dword_55FB30 = 1;
  if ( (dword_55FB2C & 1) == 0 )
    dword_55FB2C = 1;
  if ( (dword_55FB28 & 1) == 0 )
    dword_55FB28 = 1;
  if ( (dword_55FB24 & 1) == 0 )
    dword_55FB24 = 1;
  if ( (dword_55FB20 & 1) == 0 )
    dword_55FB20 = 1;
  if ( (dword_55FB1C & 1) == 0 )
    dword_55FB1C = 1;
  if ( (dword_55FB18 & 1) == 0 )
    dword_55FB18 = 1;
  if ( (dword_55FB14 & 1) == 0 )
    dword_55FB14 = 1;
  if ( (dword_55FB10 & 1) == 0 )
    dword_55FB10 = 1;
  if ( (dword_55FB0C & 1) == 0 )
    dword_55FB0C = 1;
  if ( (dword_55FB08 & 1) == 0 )
    dword_55FB08 = 1;
  if ( (dword_55FB04 & 1) == 0 )
    dword_55FB04 = 1;
}


//======================================================================
// sub_13F4F4
// address: 0x0013F4F4   size: 0x34 (52 bytes)
//======================================================================
int sub_13F4F4()
{
  dword_55FB90 = (int)&off_4660F0;
  sub_390BFC(&dword_55FB90, (void (*)(void *))sub_3C0628);
  dword_55FB8C = (int)&off_466130;
  return sub_390BFC(&dword_55FB8C, (void (*)(void *))sub_3C0618);
}


//======================================================================
// sub_13F544
// address: 0x0013F544   size: 0x14 (20 bytes)
//======================================================================
int (*__fastcall sub_13F544(int (*result)(void)))(void)
{
  if ( result != nullptr )
    return (int (*)(void))result();
  return result;
}


//======================================================================
// sub_13F558
// address: 0x0013F558   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_13F558(void *a1)
{
  return _cxa_atexit((void (*)(void *))sub_13F544, a1, &unk_468000);
}


//======================================================================
// sub_13F58E
// address: 0x0013F58E   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_13F58E(int a1, int a2, int a3)
{
  char *v6; // r6
  char v8; // [sp+Fh] [bp-5h]

  v6 = (char *)(*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 676))(a2, a3);
  sub_3BF0BC(a1, v6);
  if ( v8 != 0 )
    (*(void (__fastcall **)(int, int, char *))(*(_DWORD *)a2 + 680))(a2, a3, v6);
  return a1;
}


//======================================================================
// sub_13FB24
// address: 0x0013FB24   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13FB24(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_13FB2E
// address: 0x0013FB2E   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_13FB2E(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}

