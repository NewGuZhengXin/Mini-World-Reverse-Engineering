// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_3A0000

//======================================================================
// sub_3A00BC
// address: 0x003A00BC   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3A00BC(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0

  v4 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 128);
  if ( v4 == 0 )
    sub_3BCEE4();
  v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 40))(v4, 10);
  return sub_39FF94(a1, a2, v5);
}


//======================================================================
// sub_3A00EC
// address: 0x003A00EC   size: 0x5E (94 bytes)
//======================================================================
_DWORD *__fastcall sub_3A00EC(_DWORD *a1)
{
  int v3; // r3
  int *v4; // r2
  int v5; // r0
  _BYTE v6[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39F8BC(v6, a1, 1);
  if ( v6[0] != 0 )
  {
    v3 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v4 = *(int **)(v3 + 8);
    if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 12) )
    {
      v5 = sub_13B80C(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
    }
    else
    {
      v5 = *v4;
      *(_DWORD *)(v3 + 8) = v4 + 1;
    }
    if ( v5 == -1 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
    else
      a1[1] = 1;
  }
  return a1;
}


//======================================================================
// sub_3A01A4
// address: 0x003A01A4   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_3A01A4(_DWORD *a1)
{
  int v2; // r5
  int v4; // r0
  int *v5; // r3
  _BYTE v6[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39F8BC(v6, a1, 1);
  if ( v6[0] == 0 )
    return -1;
  v4 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  v5 = *(int **)(v4 + 8);
  if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 12) )
    v2 = sub_13B818(v4);
  else
    v2 = *v5;
  if ( v2 == -1 )
    sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
  return v2;
}


//======================================================================
// sub_3A0258
// address: 0x003A0258   size: 0x54 (84 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0258(_DWORD *a1, int a2, int a3)
{
  int v7; // r0
  int v8; // r0
  _BYTE v9[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39F8BC(v9, a1, 1);
  if ( v9[0] != 0 )
  {
    v7 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v8 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 32))(v7, a2, a3);
    a1[1] = v8;
    if ( a3 != v8 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 6);
  }
  return a1;
}


//======================================================================
// sub_3A0308
// address: 0x003A0308   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_3A0308(_DWORD *a1, int a2, int a3)
{
  _DWORD *v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r2
  int result; // r0
  _BYTE v11[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39F8BC(v11, a1, 1);
  if ( v11[0] == 0 )
    return a1[1];
  v6 = *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  v7 = (v6[3] - v6[2]) >> 2;
  if ( v7 == 0 )
  {
    v7 = (*(int (__fastcall **)(_DWORD *))(*v6 + 28))(v6);
    if ( v7 > 0 )
      goto LABEL_4;
  }
  else if ( v7 > 0 )
  {
LABEL_4:
    v9 = v7;
    if ( v7 > a3 )
      v9 = a3;
    v8 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    result = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v8 + 32))(v8, a2, v9);
    a1[1] = result;
    return result;
  }
  if ( v7 == -1 )
  {
    sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
    return a1[1];
  }
  return a1[1];
}


//======================================================================
// sub_3A03E8
// address: 0x003A03E8   size: 0x7C (124 bytes)
//======================================================================
_DWORD *__fastcall sub_3A03E8(_DWORD *a1, int a2)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r3
  unsigned int v6; // r2
  _DWORD *v7; // r2
  _BYTE v9[4]; // [sp+4h] [bp-4h] BYREF

  a1[1] = 0;
  sub_39194C(
    (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
    *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) & 0xFFFFFFFD);
  sub_39F8BC(v9, a1, 1);
  if ( v9[0] == 0 )
    return a1;
  v4 = (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12));
  v5 = (_DWORD *)v4[31];
  if ( v5 == nullptr )
  {
LABEL_9:
    sub_39194C(v4, v4[5] | 1);
    return a1;
  }
  v6 = v5[2];
  if ( v5[1] < v6 && (v7 = (_DWORD *)(v6 - 4), a2 == *v7) )
    v5[2] = v7;
  else
    a2 = (*(int (__fastcall **)(_DWORD, int))(*v5 + 44))(v4[31], a2);
  if ( a2 == -1 )
  {
    v4 = (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12));
    goto LABEL_9;
  }
  return a1;
}


//======================================================================
// sub_3A04C0
// address: 0x003A04C0   size: 0x76 (118 bytes)
//======================================================================
_DWORD *__fastcall sub_3A04C0(_DWORD *a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  unsigned int v4; // r2
  int *v5; // r2
  int v6; // r0
  _BYTE v8[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39194C(
    (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
    *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) & 0xFFFFFFFD);
  sub_39F8BC(v8, a1, 1);
  if ( v8[0] == 0 )
    return a1;
  v2 = (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12));
  v3 = (_DWORD *)v2[31];
  if ( v3 == nullptr )
  {
LABEL_8:
    sub_39194C(v2, v2[5] | 1);
    return a1;
  }
  v4 = v3[2];
  if ( v3[1] >= v4 )
  {
    v6 = (*(int (__fastcall **)(_DWORD, int))(*v3 + 44))(v2[31], -1);
  }
  else
  {
    v5 = (int *)(v4 - 4);
    v6 = *v5;
    v3[2] = v5;
  }
  if ( v6 == -1 )
  {
    v2 = (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12));
    goto LABEL_8;
  }
  return a1;
}


//======================================================================
// sub_3A0590
// address: 0x003A0590   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_3A0590(_DWORD *a1)
{
  int v2; // r0
  _BYTE v4[8]; // [sp+4h] [bp-8h] BYREF

  sub_39F8BC(v4, a1, 1);
  if ( v4[0] == 0 )
    return -1;
  v2 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  if ( v2 == 0 )
    return -1;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 24))(v2) != -1 )
    return 0;
  sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  return -1;
}


//======================================================================
// sub_3A0644
// address: 0x003A0644   size: 0x60 (96 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0644(_DWORD *a1, _DWORD *a2)
{
  char *v4; // r3
  _BYTE v6[4]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v7[20]; // [sp+10h] [bp-14h] BYREF

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  sub_39F8BC(v6, a2, 1);
  if ( v6[0] != 0 )
  {
    v4 = (char *)a2 + *(_DWORD *)(*a2 - 12);
    if ( (*((_DWORD *)v4 + 5) & 5) == 0 )
    {
      (*(void (__fastcall **)(_BYTE *, _DWORD, _DWORD, _DWORD, int, int))(**((_DWORD **)v4 + 31) + 16))(
        v7,
        *((_DWORD *)v4 + 31),
        0,
        0,
        1,
        8);
      j_memcpy(a1, v7, 0xCu);
    }
  }
  return a1;
}


//======================================================================
// sub_3A0700
// address: 0x003A0700   size: 0x96 (150 bytes)
//======================================================================
// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_3A0700(_DWORD *a1)
{
  char *v2; // r3
  int v4; // r5
  _BYTE v5[4]; // [sp+14h] [bp-28h] BYREF
  _DWORD v6[4]; // [sp+18h] [bp-24h] BYREF
  __int128 v7; // [sp+28h] [bp-14h]
  __int128 varg_r2; // [sp+50h] [bp+14h] OVERLAPPED

  sub_39194C(
    (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
    *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) & 0xFFFFFFFD);
  sub_39F8BC(v5, a1, 1);
  if ( v5[0] != 0 )
  {
    v2 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    if ( (*((_DWORD *)v2 + 5) & 5) == 0 )
    {
      v4 = *((_DWORD *)v2 + 31);
      v7 = varg_r2;
      (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 20))(v6, v4, v7, DWORD1(v7));
      if ( v6[0] == -1 && v6[1] == -1 )
        sub_39194C(
          (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
          *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
    }
  }
  return a1;
}


//======================================================================
// sub_3A07F0
// address: 0x003A07F0   size: 0x7A (122 bytes)
//======================================================================
_DWORD *__fastcall sub_3A07F0(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  char *v8; // r3
  _BYTE v10[4]; // [sp+Ch] [bp+0h] BYREF
  _DWORD v11[5]; // [sp+10h] [bp+4h] BYREF

  sub_39194C(
    (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
    *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) & 0xFFFFFFFD);
  sub_39F8BC(v10, a1, 1);
  if ( v10[0] != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    if ( (*((_DWORD *)v8 + 5) & 5) == 0 )
    {
      (*(void (__fastcall **)(_DWORD *, _DWORD, int, int, int, int))(**((_DWORD **)v8 + 31) + 16))(
        v11,
        *((_DWORD *)v8 + 31),
        a3,
        a4,
        a5,
        8);
      if ( v11[0] == -1 && v11[1] == -1 )
        sub_39194C(
          (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
          *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
    }
  }
  return a1;
}


//======================================================================
// sub_3A08C4
// address: 0x003A08C4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A08C4(unsigned __int8 *a1)
{
  return *a1;
}


//======================================================================
// sub_3A08C8
// address: 0x003A08C8   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A08C8(_DWORD *a1)
{
  int v2; // r6
  int v3; // r4
  int *v4; // r3
  int i; // r5
  int *v7; // r3
  int v8; // r0
  _BYTE v9[8]; // [sp+4h] [bp-8h] BYREF

  sub_3A84F8(v9, (char *)a1 + *(_DWORD *)(*a1 - 12) + 108);
  v2 = sub_3AB100(v9);
  sub_3A8980(v9);
  v3 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  v4 = *(int **)(v3 + 8);
  if ( (unsigned int)v4 >= *(_DWORD *)(v3 + 12) )
    goto LABEL_11;
LABEL_2:
  for ( i = *v4; i != -1; i = sub_13B818(v3) )
  {
    if ( (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v2 + 8))(v2, 8, i) == 0 )
      return a1;
    v7 = *(int **)(v3 + 8);
    if ( (unsigned int)v7 >= *(_DWORD *)(v3 + 12) )
    {
      v8 = sub_13B80C(v3);
    }
    else
    {
      v8 = *v7;
      *(_DWORD *)(v3 + 8) = v7 + 1;
    }
    if ( v8 == -1 )
      break;
    v4 = *(int **)(v3 + 8);
    if ( (unsigned int)v4 < *(_DWORD *)(v3 + 12) )
      goto LABEL_2;
LABEL_11:
    ;
  }
  sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
  return a1;
}


//======================================================================
// sub_3A0968
// address: 0x003A0968   size: 0x5A (90 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0968(_DWORD *a1, int *a2)
{
  int v5; // r3
  int *v6; // r2
  int v7; // r0
  _BYTE v8[4]; // [sp+4h] [bp-4h] BYREF

  sub_39F8BC(v8, a1, 0);
  if ( v8[0] != 0 )
  {
    v5 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v6 = *(int **)(v5 + 8);
    if ( (unsigned int)v6 >= *(_DWORD *)(v5 + 12) )
    {
      v7 = sub_13B80C(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
    }
    else
    {
      v7 = *v6;
      *(_DWORD *)(v5 + 8) = v6 + 1;
    }
    if ( v7 == -1 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 6);
    else
      *a2 = v7;
  }
  return a1;
}


//======================================================================
// sub_3A0A1C
// address: 0x003A0A1C   size: 0x144 (324 bytes)
//======================================================================
int *__fastcall sub_3A0A1C(int *a1, int *a2)
{
  char *v4; // r1
  int v5; // r6
  int v6; // r8
  int v7; // r4
  int *v8; // r3
  int v9; // r7
  int v10; // r10
  int v11; // r6
  int *v12; // r3
  unsigned int v13; // r2
  int v14; // r0
  int *v15; // r3
  int v16; // r3
  int v17; // r2
  _DWORD *v18; // r0
  int v20; // r1
  _BYTE v21[4]; // [sp+0h] [bp-8h] BYREF
  _BYTE v22[4]; // [sp+4h] [bp-4h] BYREF

  sub_39F8BC(v21, a1, 0);
  if ( v21[0] == 0 )
  {
    v17 = *a1;
    v20 = 4;
LABEL_22:
    sub_39194C((int *)((char *)a1 + *(_DWORD *)(v17 - 12)), v20 | *(int *)((char *)a1 + *(_DWORD *)(v17 - 12) + 20));
    return a1;
  }
  v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  v5 = *((_DWORD *)v4 + 2);
  if ( v5 <= 0 )
    v5 = 0x7FFFFFFF;
  sub_3A84F8(v22, v4 + 108);
  v6 = sub_3AB100(v22);
  sub_3A8980(v22);
  v7 = *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  v8 = *(int **)(v7 + 8);
  if ( (unsigned int)v8 >= *(_DWORD *)(v7 + 12) )
    v9 = sub_13B818(*(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
  else
    v9 = *v8;
  v10 = v5 - 1;
  v11 = 0;
  if ( v10 > 0 )
  {
    while ( 1 )
    {
      if ( v9 == -1 )
      {
        v16 = 2;
        goto LABEL_18;
      }
      if ( (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 8))(v6, 8, v9) != 0 )
        goto LABEL_16;
      v12 = *(int **)(v7 + 8);
      v13 = *(_DWORD *)(v7 + 12);
      *a2 = v9;
      ++v11;
      if ( (unsigned int)v12 >= v13 )
      {
        v14 = sub_13B80C(v7);
      }
      else
      {
        v14 = *v12;
        *(_DWORD *)(v7 + 8) = v12 + 1;
      }
      if ( v14 == -1 )
        goto LABEL_24;
      v15 = *(int **)(v7 + 8);
      if ( (unsigned int)v15 >= *(_DWORD *)(v7 + 12) )
        break;
      v9 = *v15;
      ++a2;
LABEL_14:
      if ( v11 >= v10 )
        goto LABEL_15;
    }
    v14 = sub_13B818(v7);
LABEL_24:
    v9 = v14;
    ++a2;
    goto LABEL_14;
  }
LABEL_15:
  v16 = 2;
  if ( v9 != -1 )
LABEL_16:
    v16 = 0;
LABEL_18:
  v17 = *a1;
  v18 = (_DWORD *)(*a1 - 12);
  *a2 = 0;
  *(int *)((char *)a1 + *v18 + 8) = 0;
  if ( v11 == 0 )
  {
    v20 = v16 | 4;
    goto LABEL_22;
  }
  if ( v16 != 0 )
  {
    v20 = v16;
    goto LABEL_22;
  }
  return a1;
}


//======================================================================
// sub_3A0BB8
// address: 0x003A0BB8   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0BB8(_DWORD *a1, int a2)
{
  char *v3; // r4
  int v6; // r0

  v3 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  if ( v3[120] == 0 )
  {
    v6 = *((_DWORD *)v3 + 32);
    if ( v6 == 0 )
      sub_3BCEE4();
    *((_DWORD *)v3 + 29) = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 40))(v6, 32);
    v3[120] = 1;
  }
  *((_DWORD *)v3 + 29) = a2;
  return a1;
}


//======================================================================
// sub_3A0BF0
// address: 0x003A0BF0   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0BF0(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) |= a2;
  return result;
}


//======================================================================
// sub_3A0C00
// address: 0x003A0C00   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0C00(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) &= ~a2;
  return result;
}


//======================================================================
// sub_3A0C10
// address: 0x003A0C10   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0C10(_DWORD *result, int a2)
{
  int v2; // r1

  if ( a2 == 8 )
  {
    v2 = 64;
  }
  else if ( a2 == 10 )
  {
    v2 = 2;
  }
  else
  {
    v2 = 8 * (a2 == 16);
  }
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) = v2
                                                               | *(_DWORD *)((char *)result
                                                                           + *(_DWORD *)(*result - 12)
                                                                           + 12)
                                                               & 0xFFFFFFB5;
  return result;
}


//======================================================================
// sub_3A0C40
// address: 0x003A0C40   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0C40(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 4) = a2;
  return result;
}


//======================================================================
// sub_3A0C4C
// address: 0x003A0C4C   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0C4C(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 8) = a2;
  return result;
}


//======================================================================
// sub_3A0C58
// address: 0x003A0C58   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0C58(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 16))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A0D48
// address: 0x003A0D48   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0D48(_DWORD *a1, int a2)
{
  return sub_3A0C58(a1, a2);
}


//======================================================================
// sub_3A0D50
// address: 0x003A0D50   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0D50(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 20))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A0E40
// address: 0x003A0E40   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0E40(_DWORD *a1, int a2)
{
  return sub_3A0D50(a1, a2);
}


//======================================================================
// sub_3A0E48
// address: 0x003A0E48   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0E48(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 12))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A0F38
// address: 0x003A0F38   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0F38(_DWORD *a1, int a2)
{
  return sub_3A0E48(a1, a2);
}


//======================================================================
// sub_3A0F40
// address: 0x003A0F40   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A0F40(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 24))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A1030
// address: 0x003A1030   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1030(_DWORD *a1, int a2)
{
  return sub_3A0F40(a1, a2);
}


//======================================================================
// sub_3A1038
// address: 0x003A1038   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1038(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 8))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A1128
// address: 0x003A1128   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1128(_DWORD *a1, int a2)
{
  return sub_3A1038(a1, a2);
}


//======================================================================
// sub_3A1130
// address: 0x003A1130   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1130(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 28))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A1220
// address: 0x003A1220   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1220(_DWORD *a1, int a2)
{
  return sub_3A1130(a1, a2);
}


//======================================================================
// sub_3A1228
// address: 0x003A1228   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1228(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 32))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A1318
// address: 0x003A1318   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1318(_DWORD *a1, int a2)
{
  return sub_3A1228(a1, a2);
}


//======================================================================
// sub_3A1320
// address: 0x003A1320   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1320(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 36))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A1410
// address: 0x003A1410   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1410(_DWORD *a1, int a2)
{
  return sub_3A1320(a1, a2);
}


//======================================================================
// sub_3A1418
// address: 0x003A1418   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1418(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 40))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A1508
// address: 0x003A1508   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1508(_DWORD *a1, int a2)
{
  return sub_3A1418(a1, a2);
}


//======================================================================
// sub_3A1510
// address: 0x003A1510   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1510(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 44))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A1600
// address: 0x003A1600   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1600(_DWORD *a1, int a2)
{
  return sub_3A1510(a1, a2);
}


//======================================================================
// sub_3A1608
// address: 0x003A1608   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1608(_DWORD *a1, int a2)
{
  char *v4; // r0
  int *v5; // r5
  int v6; // r2
  int v7; // r9
  char v9[4]; // [sp+18h] [bp-24h] BYREF
  int v10; // [sp+1Ch] [bp-20h] BYREF
  char v11[8]; // [sp+20h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-14h]
  int v13; // [sp+2Ch] [bp-10h]
  int v14; // [sp+30h] [bp-Ch]
  int v15; // [sp+34h] [bp-8h]

  sub_39F8BC(v9, a1, 0);
  if ( v9[0] != 0 )
  {
    v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v5 = *((int **)v4 + 34);
    v10 = 0;
    if ( v5 == nullptr )
      sub_3BCEE4();
    v6 = *((_DWORD *)v4 + 31);
    v7 = *v5;
    v14 = 0;
    v12 = v6;
    v13 = -1;
    v15 = -1;
    (*(void (__fastcall **)(char *, int *, int, int, _DWORD, int, char *, int *, int))(v7 + 48))(
      v11,
      v5,
      v6,
      -1,
      0,
      -1,
      v4,
      &v10,
      a2);
    if ( v10 != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v10 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  }
  return a1;
}


//======================================================================
// sub_3A16F8
// address: 0x003A16F8   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3A16F8(_DWORD *a1, int a2)
{
  return sub_3A1608(a1, a2);
}


//======================================================================
// sub_3A1700
// address: 0x003A1700   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_3A1700(_DWORD *a1)
{
  unsigned int v1; // r3

  if ( (a1[8] & 8) == 0 )
    return -1;
  v1 = a1[5];
  if ( v1 != 0 )
  {
    if ( v1 > a1[3] )
      a1[3] = v1;
    else
      v1 = a1[3];
  }
  else
  {
    v1 = a1[3];
  }
  return v1 - a1[2];
}


//======================================================================
// sub_3A172C
// address: 0x003A172C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3A172C(_DWORD *a1)
{
  unsigned int v1; // r3
  unsigned __int8 *v2; // r2

  if ( (a1[8] & 8) != 0
    && ((v1 = a1[5]) == 0 ? (v1 = a1[3]) : v1 > a1[3] ? (a1[3] = v1) : (v1 = a1[3]),
        (unsigned int)(v2 = (unsigned __int8 *)a1[2]) < v1) )
  {
    return *v2;
  }
  else
  {
    return -1;
  }
}


//======================================================================
// sub_3A175C
// address: 0x003A175C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_3A175C(_DWORD *a1, int a2)
{
  unsigned int v2; // r3
  _BYTE *v3; // r3
  int v4; // r2

  v2 = a1[2];
  if ( a1[1] >= v2 )
    return -1;
  if ( a2 == -1 )
  {
    a1[2] = v2 - 1;
    return 0;
  }
  else
  {
    v3 = (_BYTE *)(v2 - 1);
    v4 = (unsigned __int8)a2
       - (unsigned __int8)*v3
       + ((unsigned __int8)*v3 == (unsigned __int8)a2)
       + (unsigned __int8)*v3
       - (unsigned __int8)a2;
    if ( v4 == 0 && (a1[8] & 0x10) == 0 )
      return -1;
    a1[2] = v3;
    if ( v4 == 0 )
      *v3 = a2;
  }
  return a2;
}


//======================================================================
// sub_3A179C
// address: 0x003A179C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3A179C(_DWORD *a1)
{
  unsigned int v1; // r3

  if ( (a1[8] & 8) == 0 )
    return -1;
  v1 = a1[5];
  if ( v1 != 0 )
  {
    if ( v1 > a1[3] )
      a1[3] = v1;
    else
      v1 = a1[3];
  }
  else
  {
    v1 = a1[3];
  }
  return (int)(v1 - a1[2]) >> 2;
}


//======================================================================
// sub_3A17C8
// address: 0x003A17C8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3A17C8(_DWORD *a1, int a2)
{
  unsigned int v2; // r3
  _DWORD *v4; // r3
  _BOOL4 v5; // r2

  v2 = a1[2];
  if ( a1[1] >= v2 )
    return -1;
  v4 = (_DWORD *)(v2 - 4);
  if ( a2 == -1 )
  {
    a1[2] = v4;
    return 0;
  }
  v5 = *v4 == a2;
  if ( *v4 != a2 && (a1[8] & 0x10) == 0 )
    return -1;
  a1[2] = v4;
  if ( !v5 )
    *v4 = a2;
  return a2;
}


//======================================================================
// sub_3A1804
// address: 0x003A1804   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3A1804(_DWORD *a1)
{
  unsigned int v2; // r3
  int v3; // r2

  if ( (a1[8] & 8) != 0
    && ((v2 = a1[5]) == 0 ? (v2 = a1[3]) : v2 > a1[3] ? (a1[3] = v2) : (v2 = a1[3]), (v3 = a1[2]) < v2) )
  {
    return *(_DWORD *)v3;
  }
  else
  {
    return -1;
  }
}


//======================================================================
// sub_3A1834
// address: 0x003A1834   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1834(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464B40;
  v2 = a1[9];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3, v5);
  *a1 = &off_464358;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_3A1890
// address: 0x003A1890   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1890(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464D38;
  v2 = a1[9];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB64 && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3B7350(v3, v5);
  *a1 = &off_464398;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_3A18EC
// address: 0x003A18EC   size: 0x54 (84 bytes)
//======================================================================
_DWORD *__fastcall sub_3A18EC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464B40;
  v2 = a1[9];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3, v5);
  *a1 = &off_464358;
  sub_3A8980(a1 + 7);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A194C
// address: 0x003A194C   size: 0x54 (84 bytes)
//======================================================================
_DWORD *__fastcall sub_3A194C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464D38;
  v2 = a1[9];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB64 && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3B7350(v3, v5);
  *a1 = &off_464398;
  sub_3A8980(a1 + 7);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A19AC
// address: 0x003A19AC   size: 0x76 (118 bytes)
//======================================================================
_DWORD *__fastcall sub_3A19AC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  a1[11] = &off_464E28;
  a1[1] = &off_464D38;
  *a1 = &off_464E14;
  v2 = a1[10];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB64 && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3B7350(v3, v5);
  a1[1] = &off_464398;
  sub_3A8980(a1 + 8);
  *a1 = &off_464DDC;
  a1[11] = &off_464330;
  sub_392FE4(a1 + 11);
  return a1;
}


//======================================================================
// sub_3A1A3C
// address: 0x003A1A3C   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1A3C(_DWORD *a1)
{
  return sub_3A19AC((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A1A4C
// address: 0x003A1A4C   size: 0x76 (118 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1A4C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  a1[11] = &off_464C30;
  a1[1] = &off_464B40;
  *a1 = &off_464C1C;
  v2 = a1[10];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3, v5);
  a1[1] = &off_464358;
  sub_3A8980(a1 + 8);
  *a1 = &off_464BE4;
  a1[11] = &off_464320;
  sub_392FE4(a1 + 11);
  return a1;
}


//======================================================================
// sub_3A1ADC
// address: 0x003A1ADC   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1ADC(_DWORD *a1)
{
  return sub_3A1A4C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A1AEC
// address: 0x003A1AEC   size: 0x7A (122 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1AEC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  a1[12] = &off_464BD0;
  a1[2] = &off_464B40;
  *a1 = &off_464BBC;
  v2 = a1[11];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3, v5);
  a1[2] = &off_464358;
  sub_3A8980(a1 + 9);
  *a1 = &off_464B84;
  a1[1] = 0;
  a1[12] = &off_464320;
  sub_392FE4(a1 + 12);
  return a1;
}


//======================================================================
// sub_3A1B80
// address: 0x003A1B80   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1B80(_DWORD *a1)
{
  return sub_3A1AEC((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A1B90
// address: 0x003A1B90   size: 0x7A (122 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1B90(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  a1[12] = &off_464DC8;
  a1[2] = &off_464D38;
  *a1 = &off_464DB4;
  v2 = a1[11];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB64 && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3B7350(v3, v5);
  a1[2] = &off_464398;
  sub_3A8980(a1 + 9);
  *a1 = &off_464D7C;
  a1[1] = 0;
  a1[12] = &off_464330;
  sub_392FE4(a1 + 12);
  return a1;
}


//======================================================================
// sub_3A1C24
// address: 0x003A1C24   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1C24(_DWORD *a1)
{
  return sub_3A1B90((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A1C34
// address: 0x003A1C34   size: 0x7C (124 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1C34(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  a1[11] = &off_464C30;
  a1[1] = &off_464B40;
  *a1 = &off_464C1C;
  v2 = a1[10];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3, v5);
  a1[1] = &off_464358;
  sub_3A8980(a1 + 8);
  *a1 = &off_464BE4;
  a1[11] = &off_464320;
  sub_392FE4(a1 + 11);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A1CC8
// address: 0x003A1CC8   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1CC8(_DWORD *a1)
{
  return sub_3A1C34((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A1CD8
// address: 0x003A1CD8   size: 0x7C (124 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1CD8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  a1[11] = &off_464E28;
  a1[1] = &off_464D38;
  *a1 = &off_464E14;
  v2 = a1[10];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB64 && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3B7350(v3, v5);
  a1[1] = &off_464398;
  sub_3A8980(a1 + 8);
  *a1 = &off_464DDC;
  a1[11] = &off_464330;
  sub_392FE4(a1 + 11);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A1D6C
// address: 0x003A1D6C   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1D6C(_DWORD *a1)
{
  return sub_3A1CD8((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A1D7C
// address: 0x003A1D7C   size: 0x80 (128 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1D7C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  a1[12] = &off_464BD0;
  a1[2] = &off_464B40;
  *a1 = &off_464BBC;
  v2 = a1[11];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3, v5);
  a1[2] = &off_464358;
  sub_3A8980(a1 + 9);
  *a1 = &off_464B84;
  a1[1] = 0;
  a1[12] = &off_464320;
  sub_392FE4(a1 + 12);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A1E14
// address: 0x003A1E14   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1E14(_DWORD *a1)
{
  return sub_3A1D7C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A1E24
// address: 0x003A1E24   size: 0x80 (128 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1E24(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  a1[12] = &off_464DC8;
  a1[2] = &off_464D38;
  *a1 = &off_464DB4;
  v2 = a1[11];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB64 && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3B7350(v3, v5);
  a1[2] = &off_464398;
  sub_3A8980(a1 + 9);
  *a1 = &off_464D7C;
  a1[1] = 0;
  a1[12] = &off_464330;
  sub_392FE4(a1 + 12);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A1EBC
// address: 0x003A1EBC   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1EBC(_DWORD *a1)
{
  return sub_3A1E24((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A1ECC
// address: 0x003A1ECC   size: 0x88 (136 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1ECC(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464CFC;
  a1[2] = &off_464D10;
  a1[3] = &off_464B40;
  a1[13] = &off_464D24;
  v2 = a1[12];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3, v5);
  a1[3] = &off_464358;
  sub_3A8980(a1 + 10);
  a1[2] = &off_464C44;
  *a1 = &off_464C6C;
  a1[1] = 0;
  a1[13] = &off_464320;
  sub_392FE4(a1 + 13);
  return a1;
}


//======================================================================
// sub_3A1F84
// address: 0x003A1F84   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1F84(_DWORD *a1)
{
  return sub_3A1ECC((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A1F94
// address: 0x003A1F94   size: 0x88 (136 bytes)
//======================================================================
_DWORD *__fastcall sub_3A1F94(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464EF4;
  a1[2] = &off_464F08;
  a1[3] = &off_464D38;
  a1[13] = &off_464F1C;
  v2 = a1[12];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB64 && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3B7350(v3, v5);
  a1[3] = &off_464398;
  sub_3A8980(a1 + 10);
  a1[2] = &off_464E3C;
  *a1 = &off_464E64;
  a1[1] = 0;
  a1[13] = &off_464330;
  sub_392FE4(a1 + 13);
  return a1;
}


//======================================================================
// sub_3A204C
// address: 0x003A204C   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A204C(_DWORD *a1)
{
  return sub_3A1F94((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A205C
// address: 0x003A205C   size: 0x8E (142 bytes)
//======================================================================
_DWORD *__fastcall sub_3A205C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464CFC;
  a1[2] = &off_464D10;
  a1[3] = &off_464B40;
  a1[13] = &off_464D24;
  v2 = a1[12];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3, v5);
  a1[3] = &off_464358;
  sub_3A8980(a1 + 10);
  a1[2] = &off_464C44;
  *a1 = &off_464C6C;
  a1[1] = 0;
  a1[13] = &off_464320;
  sub_392FE4(a1 + 13);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A211C
// address: 0x003A211C   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A211C(_DWORD *a1)
{
  return sub_3A205C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A212C
// address: 0x003A212C   size: 0x8E (142 bytes)
//======================================================================
_DWORD *__fastcall sub_3A212C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r5
  _BYTE v5[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464EF4;
  a1[2] = &off_464F08;
  a1[3] = &off_464D38;
  a1[13] = &off_464F1C;
  v2 = a1[12];
  v3 = v2 - 12;
  if ( (int *)(v2 - 12) != &dword_55FB64 && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3B7350(v3, v5);
  a1[3] = &off_464398;
  sub_3A8980(a1 + 10);
  a1[2] = &off_464E3C;
  *a1 = &off_464E64;
  a1[1] = 0;
  a1[13] = &off_464330;
  sub_392FE4(a1 + 13);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A21EC
// address: 0x003A21EC   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A21EC(_DWORD *a1)
{
  return sub_3A212C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A21FC
// address: 0x003A21FC   size: 0x3C (60 bytes)
//======================================================================
_DWORD *__fastcall sub_3A21FC(_DWORD *a1, int a2)
{
  *a1 = &off_464358;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_3A6688(a1 + 7);
  a1[8] = a2;
  *a1 = &off_464B40;
  a1[9] = &byte_55FB88;
  return a1;
}


//======================================================================
// sub_3A2244
// address: 0x003A2244   size: 0x7E (126 bytes)
//======================================================================
_DWORD *__fastcall sub_3A2244(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r6
  _BYTE v7[4]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v8[4]; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  *a1 = &byte_55FB88;
  v3 = a2[5];
  if ( v3 != 0 )
  {
    v4 = a2[4];
    if ( v3 > a2[3] )
      v9 = sub_3BEC84(v4, a2[5], v7, 0);
    else
      v9 = sub_3BEC84(v4, a2[3], v7, 0);
    sub_3BEB58(a1, &v9);
    v5 = v9 - 12;
    if ( (int *)(v9 - 12) != &dword_55FB7C && sub_3C82FC(v9 - 4, -1) <= 0 )
      sub_3BDF60(v5, v8);
  }
  else
  {
    ((void (*)(void))sub_3BEB58)();
  }
  return a1;
}


//======================================================================
// sub_3A22E4
// address: 0x003A22E4   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_3A22E4(_DWORD *result)
{
  unsigned int v1; // r3

  v1 = result[5];
  if ( v1 != 0 && v1 > result[3] )
  {
    if ( (result[8] & 8) == 0 )
    {
      result[1] = v1;
      result[2] = v1;
    }
    result[3] = v1;
  }
  return result;
}


//======================================================================
// sub_3A2300
// address: 0x003A2300   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_3A2300(_DWORD *result, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // r4

  v5 = a5;
  result[5] = a2;
  result[4] = a2;
  result[6] = a3;
  if ( a5 > 0 )
  {
    do
    {
      v5 -= 0x7FFFFFFF;
      a2 += 0x7FFFFFFF;
    }
    while ( v5 > 0x7FFFFFFF );
  }
  result[5] = a2 + v5;
  return result;
}


//======================================================================
// sub_3A2348
// address: 0x003A2348   size: 0x5C (92 bytes)
//======================================================================
_DWORD *__fastcall sub_3A2348(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // r6
  _DWORD *result; // r0
  int v7; // r3
  int v8; // r5
  unsigned int v9; // r7
  int v10; // r6

  v5 = (_DWORD *)a1[9];
  result = a4;
  v7 = a1[8];
  v5 -= 3;
  v8 = a2 + *v5;
  v9 = (unsigned int)(v7 << 28) >> 31;
  v10 = a2 + v5[1];
  if ( a2 != a1[9] )
  {
    v8 += a3;
    v10 = v8;
    a3 = 0;
  }
  if ( (v7 & 8) != 0 )
  {
    a1[1] = a2;
    a1[2] = a2 + a3;
    a1[3] = v8;
  }
  if ( (v7 & 0x10) != 0 )
  {
    result = sub_3A2300(a1, a2, v10, 0, (unsigned int)result);
    if ( v9 == 0 )
    {
      a1[1] = v8;
      a1[2] = v8;
      a1[3] = v8;
    }
  }
  return result;
}


//======================================================================
// sub_3A23A4
// address: 0x003A23A4   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_3A23A4(_DWORD *a1, int a2)
{
  int v2; // r1
  _DWORD *v3; // r3

  a1[8] = a2;
  if ( a2 << 30 != 0 )
  {
    v2 = a1[9];
    v3 = *(_DWORD **)(v2 - 12);
  }
  else
  {
    v2 = a1[9];
    v3 = nullptr;
  }
  return sub_3A2348(a1, v2, 0, v3);
}


//======================================================================
// sub_3A23C4
// address: 0x003A23C4   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3A23C4(_DWORD *a1, int a2, int a3)
{
  if ( a2 != 0 && a3 >= 0 )
  {
    sub_3BDFA4(a1 + 9, 0, *(_DWORD *)(a1[9] - 12), 0);
    sub_3A2348(a1, a2, a3, nullptr);
  }
  return a1;
}


//======================================================================
// sub_3A23F8
// address: 0x003A23F8   size: 0x132 (306 bytes)
//======================================================================
int __fastcall sub_3A23F8(_DWORD *a1, int a2)
{
  _BYTE *v4; // r2
  unsigned int v5; // r6
  int v6; // r1
  unsigned int v7; // r3
  int v8; // r1
  void *v9; // r1
  int v10; // r3
  int v11; // r2
  int v12; // r9
  int v13; // r3
  _DWORD *v14; // r2
  int v15; // r7
  int v17; // [sp+0h] [bp-Ch] BYREF
  _DWORD v18[2]; // [sp+4h] [bp-8h] BYREF

  if ( (a1[8] & 0x10) == 0 )
    return -1;
  if ( a2 == -1 )
    return 0;
  v4 = (_BYTE *)a1[5];
  v5 = a1[6];
  v6 = *(_DWORD *)(a1[9] - 8);
  if ( (unsigned int)v4 >= v5 && v6 == 1073741820 )
    return -1;
  if ( (unsigned int)v4 < v5 )
  {
    *v4 = a2;
  }
  else
  {
    v7 = 2 * v6;
    if ( (unsigned int)(2 * v6) <= 0x1FF )
    {
      v8 = 512;
    }
    else
    {
      v8 = 1073741820;
      if ( v7 <= 0x3FFFFFFC )
        v8 = v7;
    }
    v18[0] = &byte_55FB88;
    sub_3BE700(v18, v8);
    v9 = (void *)a1[4];
    if ( v9 != nullptr )
      sub_3BE408((int)v18, v9, a1[6] - (_DWORD)v9);
    v10 = v18[0];
    v11 = *(_DWORD *)(v18[0] - 12);
    v12 = v11 + 1;
    if ( (unsigned int)(v11 + 1) > *(_DWORD *)&byte_4[v18[0] - 12] || *(int *)(v18[0] - 4) > 0 )
    {
      sub_3BE700(v18, v11 + 1);
      v10 = v18[0];
      v11 = *(_DWORD *)(v18[0] - 12);
    }
    *(_BYTE *)(v10 + v11) = a2;
    v13 = v18[0];
    v14 = (_DWORD *)(v18[0] - 12);
    if ( (int *)(v18[0] - 12) != &dword_55FB7C )
    {
      *(_DWORD *)(v18[0] - 4) = 0;
      *v14 = v12;
      *(_BYTE *)(v13 + v12) = 0;
    }
    sub_3BD870(a1 + 9, v18);
    sub_3A2348(a1, a1[9], a1[2] - a1[1], (_DWORD *)(a1[5] - a1[4]));
    v15 = v18[0] - 12;
    if ( (int *)(v18[0] - 12) != &dword_55FB7C && sub_3C82FC(v18[0] - 4, -1) <= 0 )
      sub_3BDF60(v15, &v17);
  }
  ++a1[5];
  return a2;
}


//======================================================================
// sub_3A253C
// address: 0x003A253C   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3A253C(_DWORD *a1, void **a2)
{
  int v3; // r1
  _DWORD *v4; // r3

  sub_3BE408((int)(a1 + 9), *a2, *((_DWORD *)*a2 - 3));
  v3 = a1[9];
  if ( a1[8] << 30 != 0 )
    v4 = *(_DWORD **)(v3 - 12);
  else
    v4 = nullptr;
  return sub_3A2348(a1, v3, 0, v4);
}


//======================================================================
// sub_3A256C
// address: 0x003A256C   size: 0x7C (124 bytes)
//======================================================================
_DWORD *__fastcall sub_3A256C(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  _DWORD *v7; // r3
  _BYTE v9[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464358;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_3A6688(a1 + 7);
  a1[8] = 0;
  *a1 = &off_464B40;
  sub_3BEE2C(a1 + 9, *a2, *(_DWORD *)(*a2 - 12), v9);
  a1[8] = a3;
  v6 = a1[9];
  if ( a3 << 30 != 0 )
    v7 = *(_DWORD **)(v6 - 12);
  else
    v7 = nullptr;
  sub_3A2348(a1, v6, 0, v7);
  return a1;
}


//======================================================================
// sub_3A260C
// address: 0x003A260C   size: 0x194 (404 bytes)
//======================================================================
int __fastcall sub_3A260C(int a1, _DWORD *a2, __int64 a3, int a4, unsigned __int8 a5)
{
  int v6; // r0
  bool v7; // r4
  _BOOL4 v8; // r12
  _BOOL4 v9; // r11
  int v10; // r0
  int v11; // r8
  unsigned int v12; // r5
  int v14; // r4
  __int64 v15; // [sp+8h] [bp-14h]

  *(_QWORD *)a1 = -1;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = a2[8];
  v7 = (v6 & 0x10 & a5) != 0;
  v8 = (v6 & 0x10 & a5) != 0 && (v6 & 8 & a5) != 0 && a4 != 1;
  v9 = (a5 & 0x10) == 0 && (v6 & 8 & a5) != 0;
  if ( (a5 & 0x10) == 0 && (v6 & 8 & a5) != 0 )
  {
    v10 = a2[1];
    if ( v10 != 0 )
      goto LABEL_6;
  }
  else
  {
    v10 = a2[4];
    if ( v10 != 0 )
      goto LABEL_6;
  }
  if ( a3 != 0 )
    return a1;
LABEL_6:
  v11 = (a5 & 8) == 0 && v7;
  if ( v11 == 0 && !v9 && !v8 )
    return a1;
  v12 = a2[5];
  if ( v12 == 0 || v12 <= a2[3] )
  {
LABEL_11:
    if ( a4 != 1 )
      goto LABEL_12;
    goto LABEL_32;
  }
  if ( (a2[8] & 8) != 0 )
  {
    a2[3] = v12;
    goto LABEL_11;
  }
  a2[1] = v12;
  a2[2] = v12;
  a2[3] = v12;
  if ( a4 != 1 )
  {
LABEL_12:
    v15 = a3;
    if ( a4 == 2 )
    {
      a3 += a2[3] - v10;
      v15 = a3;
    }
    goto LABEL_14;
  }
LABEL_32:
  v15 = (int)(v12 - v10) + a3;
  a3 += a2[2] - v10;
LABEL_14:
  if ( v8 || v9 )
  {
    if ( a3 >= 0 && a3 <= a2[3] - v10 )
    {
      v14 = a2[1];
      *(_QWORD *)a1 = a3;
      a2[2] = v14 + a3;
    }
    if ( v8 )
      goto LABEL_35;
  }
  if ( v11 != 0 )
  {
LABEL_35:
    if ( v15 >= 0 && v15 <= a2[3] - v10 )
    {
      sub_3A2300(a2, a2[4], a2[6], a2[4], v15);
      *(_QWORD *)a1 = v15;
    }
  }
  return a1;
}


//======================================================================
// sub_3A27A0
// address: 0x003A27A0   size: 0xD2 (210 bytes)
//======================================================================
_DWORD *__fastcall sub_3A27A0(_DWORD *a1, _DWORD *a2, __int64 a3, int a4, int a5, unsigned __int8 a6)
{
  int v7; // r4
  int v8; // r7
  unsigned int v9; // r8
  int varg_r2; // [sp+20h] [bp+18h] BYREF

  *(_QWORD *)a1 = -1;
  v7 = a2[8];
  a1[2] = 0;
  if ( (v7 & 8 & a6) != 0 )
  {
    v8 = a2[1];
    if ( v8 != 0 )
      goto LABEL_3;
  }
  else
  {
    v8 = a2[4];
    if ( v8 != 0 )
      goto LABEL_3;
  }
  if ( a3 != 0 )
    return a1;
LABEL_3:
  if ( (a6 & v7 & 0x10) != 0 || (v7 & 8 & a6) != 0 )
  {
    v9 = a2[5];
    if ( v9 != 0 && v9 > a2[3] )
    {
      if ( (v7 & 8) == 0 )
      {
        a2[1] = v9;
        a2[2] = v9;
      }
      a2[3] = v9;
    }
    if ( a3 >= 0 && a3 <= a2[3] - v8 )
    {
      if ( (v7 & 8 & a6) != 0 )
      {
        a2[2] = a2[1] + a3;
        if ( (a6 & v7 & 0x10) == 0 )
          goto LABEL_14;
      }
      else if ( (a6 & v7 & 0x10) == 0 )
      {
LABEL_14:
        j_memcpy(a1, &varg_r2, 0xCu);
        return a1;
      }
      sub_3A2300(a2, a2[4], a2[6], SHIDWORD(a3), a3);
      goto LABEL_14;
    }
  }
  return a1;
}


//======================================================================
// sub_3A2874
// address: 0x003A2874   size: 0x7A (122 bytes)
//======================================================================
int *__fastcall sub_3A2874(int *a1, int *a2, int a3)
{
  _DWORD *v3; // r3
  int v7; // r3

  v3 = (_DWORD *)a2[1];
  *a1 = (int)v3;
  v3 -= 3;
  *(int *)((char *)a1 + *v3) = a2[2];
  a1[1] = 0;
  sub_391734((int)a1 + *v3, 0);
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[3];
  a1[3] = 0;
  a1[2] = (int)&off_464358;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  sub_3A6688(a1 + 9);
  a1[2] = (int)&off_464B40;
  a1[10] = a3 | 8;
  a1[11] = (int)&byte_55FB88;
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  return a1;
}


//======================================================================
// sub_3A2914
// address: 0x003A2914   size: 0x9C (156 bytes)
//======================================================================
int __fastcall sub_3A2914(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 48;
  sub_392DEC((_DWORD *)(a1 + 48));
  *(_DWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 164) = 0;
  *(_BYTE *)(a1 + 165) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464B84;
  *(_DWORD *)(a1 + 48) = &off_464B98;
  sub_391734(v2, 0);
  *(_DWORD *)(a1 + 48) = &off_464BD0;
  *(_DWORD *)a1 = &off_464BBC;
  *(_DWORD *)(a1 + 8) = &off_464358;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  sub_3A6688(a1 + 36);
  *(_DWORD *)(a1 + 8) = &off_464B40;
  *(_DWORD *)(a1 + 40) = a2 | 8;
  *(_DWORD *)(a1 + 44) = &byte_55FB88;
  sub_391734(v2, a1 + 8);
  return a1;
}


//======================================================================
// sub_3A29F4
// address: 0x003A29F4   size: 0xC8 (200 bytes)
//======================================================================
int *__fastcall sub_3A29F4(int *a1, int *a2, _DWORD *a3, int a4)
{
  _DWORD *v5; // r3
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  _BYTE v13[8]; // [sp+Ch] [bp-8h] BYREF

  v5 = (_DWORD *)a2[1];
  *a1 = (int)v5;
  v5 -= 3;
  *(int *)((char *)a1 + *v5) = a2[2];
  a1[1] = 0;
  sub_391734((int)a1 + *v5, 0);
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[3];
  a1[2] = (int)&off_464358;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  sub_3A6688(a1 + 9);
  a1[10] = 0;
  a1[2] = (int)&off_464B40;
  sub_3BEE2C(a1 + 11, *a3, *(_DWORD *)(*a3 - 12), v13);
  a1[10] = a4 | 8;
  v10 = nullptr;
  v11 = a1[11];
  if ( a4 << 30 != 0 )
    v10 = *(_DWORD **)(v11 - 12);
  sub_3A2348(a1 + 2, v11, 0, v10);
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  return a1;
}


//======================================================================
// sub_3A2AF8
// address: 0x003A2AF8   size: 0xEA (234 bytes)
//======================================================================
int __fastcall sub_3A2AF8(int a1, int *a2, int a3)
{
  int v3; // r7
  int v7; // r1
  int v8; // r1
  _DWORD *v9; // r3
  _BYTE v11[8]; // [sp+Ch] [bp-8h] BYREF

  v3 = a1 + 48;
  sub_392DEC((_DWORD *)(a1 + 48));
  *(_DWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 164) = 0;
  *(_BYTE *)(a1 + 165) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464B84;
  *(_DWORD *)(a1 + 48) = &off_464B98;
  sub_391734(v3, 0);
  *(_DWORD *)a1 = &off_464BBC;
  *(_DWORD *)(a1 + 48) = &off_464BD0;
  *(_DWORD *)(a1 + 8) = &off_464358;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  sub_3A6688(a1 + 36);
  v7 = *a2;
  *(_DWORD *)(a1 + 8) = &off_464B40;
  *(_DWORD *)(a1 + 40) = 0;
  sub_3BEE2C(a1 + 44, v7, *(_DWORD *)(v7 - 12), v11);
  *(_DWORD *)(a1 + 40) = a3 | 8;
  v8 = *(_DWORD *)(a1 + 44);
  v9 = nullptr;
  if ( a3 << 30 != 0 )
    v9 = *(_DWORD **)(v8 - 12);
  sub_3A2348((_DWORD *)(a1 + 8), v8, 0, v9);
  sub_391734(v3, a1 + 8);
  return a1;
}


//======================================================================
// sub_3A2C3C
// address: 0x003A2C3C   size: 0x6C (108 bytes)
//======================================================================
int *__fastcall sub_3A2C3C(int *a1, int *a2)
{
  int v2; // r3
  int v4; // r0
  int v5; // r6
  int v7; // r3
  _BYTE v9[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[3];
  a1[2] = (int)&off_464B40;
  v4 = a1[11];
  v5 = v4 - 12;
  if ( (int *)(v4 - 12) != &dword_55FB7C && sub_3C82FC(v4 - 4, -1) <= 0 )
    sub_3BDF60(v5, v9);
  a1[2] = (int)&off_464358;
  sub_3A8980(a1 + 9);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[2];
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_3A2CB4
// address: 0x003A2CB4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A2CB4(int a1)
{
  return a1 + 8;
}


//======================================================================
// sub_3A2CB8
// address: 0x003A2CB8   size: 0x7E (126 bytes)
//======================================================================
_DWORD *__fastcall sub_3A2CB8(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r6
  _BYTE v7[4]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v8[4]; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  *a1 = &byte_55FB88;
  v3 = a2[7];
  if ( v3 != 0 )
  {
    v4 = a2[6];
    if ( v3 > a2[5] )
      v9 = sub_3BEC84(v4, a2[7], v7, 0);
    else
      v9 = sub_3BEC84(v4, a2[5], v7, 0);
    sub_3BEB58(a1, &v9);
    v5 = v9 - 12;
    if ( (int *)(v9 - 12) != &dword_55FB7C && sub_3C82FC(v9 - 4, -1) <= 0 )
      sub_3BDF60(v5, v8);
  }
  else
  {
    sub_3BEB58(a1, a2 + 11);
  }
  return a1;
}


//======================================================================
// sub_3A2D58
// address: 0x003A2D58   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3A2D58(_DWORD *a1, void **a2)
{
  _DWORD *v4; // r5
  int v5; // r1
  _DWORD *v6; // r3

  sub_3BE408((int)(a1 + 11), *a2, *((_DWORD *)*a2 - 3));
  v4 = a1 + 2;
  v5 = a1[11];
  if ( a1[10] << 30 != 0 )
    v6 = *(_DWORD **)(v5 - 12);
  else
    v6 = nullptr;
  return sub_3A2348(v4, v5, 0, v6);
}


//======================================================================
// sub_3A2D8C
// address: 0x003A2D8C   size: 0x74 (116 bytes)
//======================================================================
int *__fastcall sub_3A2D8C(int *a1, int *a2, int a3)
{
  int v3; // r3
  _DWORD *v6; // r0
  int v8; // r3

  v3 = a2[1];
  *a1 = v3;
  v6 = (int *)((char *)a1 + *(_DWORD *)(v3 - 12));
  *v6 = a2[2];
  sub_391734((int)v6, 0);
  v8 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v8 - 12)) = a2[3];
  a1[1] = (int)&off_464358;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_3A6688(a1 + 8);
  a1[1] = (int)&off_464B40;
  a1[9] = a3 | 0x10;
  a1[10] = (int)&byte_55FB88;
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  return a1;
}


//======================================================================
// sub_3A2E24
// address: 0x003A2E24   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_3A2E24(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 44;
  sub_392DEC((_DWORD *)(a1 + 44));
  *(_DWORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 161) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)a1 = &off_464BE4;
  *(_DWORD *)(a1 + 44) = &off_464BF8;
  sub_391734(v2, 0);
  *(_DWORD *)(a1 + 44) = &off_464C30;
  *(_DWORD *)a1 = &off_464C1C;
  *(_DWORD *)(a1 + 4) = &off_464358;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_3A6688(a1 + 32);
  *(_DWORD *)(a1 + 4) = &off_464B40;
  *(_DWORD *)(a1 + 36) = a2 | 0x10;
  *(_DWORD *)(a1 + 40) = &byte_55FB88;
  sub_391734(v2, a1 + 4);
  return a1;
}


//======================================================================
// sub_3A2EFC
// address: 0x003A2EFC   size: 0xC2 (194 bytes)
//======================================================================
int *__fastcall sub_3A2EFC(int *a1, int *a2, int *a3, int a4)
{
  int v5; // r3
  _DWORD *v8; // r0
  int v10; // r3
  int v11; // r1
  int v12; // r1
  _DWORD *v13; // r3
  _BYTE v15[8]; // [sp+Ch] [bp-8h] BYREF

  v5 = a2[1];
  *a1 = v5;
  v8 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12));
  *v8 = a2[2];
  sub_391734((int)v8, 0);
  v10 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v10 - 12)) = a2[3];
  a1[1] = (int)&off_464358;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_3A6688(a1 + 8);
  v11 = *a3;
  a1[1] = (int)&off_464B40;
  a1[9] = 0;
  sub_3BEE2C(a1 + 10, v11, *(_DWORD *)(v11 - 12), v15);
  a1[9] = a4 | 0x10;
  v12 = a1[10];
  v13 = nullptr;
  if ( a4 << 30 != 0 )
    v13 = *(_DWORD **)(v12 - 12);
  sub_3A2348(a1 + 1, v12, 0, v13);
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  return a1;
}


//======================================================================
// sub_3A2FF4
// address: 0x003A2FF4   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall sub_3A2FF4(int a1, int *a2, int a3)
{
  int v3; // r7
  int v7; // r1
  int v8; // r1
  _DWORD *v9; // r3
  _BYTE v11[8]; // [sp+Ch] [bp-8h] BYREF

  v3 = a1 + 44;
  sub_392DEC((_DWORD *)(a1 + 44));
  *(_DWORD *)(a1 + 156) = 0;
  *(_BYTE *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 161) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)a1 = &off_464BE4;
  *(_DWORD *)(a1 + 44) = &off_464BF8;
  sub_391734(v3, 0);
  *(_DWORD *)a1 = &off_464C1C;
  *(_DWORD *)(a1 + 44) = &off_464C30;
  *(_DWORD *)(a1 + 4) = &off_464358;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_3A6688(a1 + 32);
  v7 = *a2;
  *(_DWORD *)(a1 + 4) = &off_464B40;
  *(_DWORD *)(a1 + 36) = 0;
  sub_3BEE2C(a1 + 40, v7, *(_DWORD *)(v7 - 12), v11);
  *(_DWORD *)(a1 + 36) = a3 | 0x10;
  v8 = *(_DWORD *)(a1 + 40);
  v9 = nullptr;
  if ( a3 << 30 != 0 )
    v9 = *(_DWORD **)(v8 - 12);
  sub_3A2348((_DWORD *)(a1 + 4), v8, 0, v9);
  sub_391734(v3, a1 + 4);
  return a1;
}


//======================================================================
// sub_3A3130
// address: 0x003A3130   size: 0x68 (104 bytes)
//======================================================================
int *__fastcall sub_3A3130(int *a1, int *a2)
{
  int v2; // r3
  int v4; // r0
  int v5; // r6
  int v7; // r3
  _BYTE v9[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[3];
  a1[1] = (int)&off_464B40;
  v4 = a1[10];
  v5 = v4 - 12;
  if ( (int *)(v4 - 12) != &dword_55FB7C && sub_3C82FC(v4 - 4, -1) <= 0 )
    sub_3BDF60(v5, v9);
  a1[1] = (int)&off_464358;
  sub_3A8980(a1 + 8);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[2];
  return a1;
}


//======================================================================
// sub_3A31A4
// address: 0x003A31A4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A31A4(int a1)
{
  return a1 + 4;
}


//======================================================================
// sub_3A31A8
// address: 0x003A31A8   size: 0x7E (126 bytes)
//======================================================================
_DWORD *__fastcall sub_3A31A8(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r6
  _BYTE v7[4]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v8[4]; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  *a1 = &byte_55FB88;
  v3 = a2[6];
  if ( v3 != 0 )
  {
    v4 = a2[5];
    if ( v3 > a2[4] )
      v9 = sub_3BEC84(v4, a2[6], v7, 0);
    else
      v9 = sub_3BEC84(v4, a2[4], v7, 0);
    sub_3BEB58(a1, &v9);
    v5 = v9 - 12;
    if ( (int *)(v9 - 12) != &dword_55FB7C && sub_3C82FC(v9 - 4, -1) <= 0 )
      sub_3BDF60(v5, v8);
  }
  else
  {
    sub_3BEB58(a1, a2 + 10);
  }
  return a1;
}


//======================================================================
// sub_3A3248
// address: 0x003A3248   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3A3248(_DWORD *a1, void **a2)
{
  _DWORD *v3; // r5
  int v4; // r1
  _DWORD *v5; // r3

  v3 = a1 + 1;
  sub_3BE408((int)(a1 + 10), *a2, *((_DWORD *)*a2 - 3));
  v4 = a1[10];
  if ( a1[9] << 30 != 0 )
    v5 = *(_DWORD **)(v4 - 12);
  else
    v5 = nullptr;
  return sub_3A2348(v3, v4, 0, v5);
}


//======================================================================
// sub_3A3278
// address: 0x003A3278   size: 0xA4 (164 bytes)
//======================================================================
int *__fastcall sub_3A3278(int *a1, int *a2, int a3)
{
  _DWORD *v3; // r3
  int v7; // r3
  _DWORD *v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r2

  v3 = (_DWORD *)a2[2];
  *a1 = (int)v3;
  v3 -= 3;
  *(int *)((char *)a1 + *v3) = a2[3];
  a1[1] = 0;
  sub_391734((int)a1 + *v3, 0);
  v7 = a2[4];
  a1[2] = v7;
  v8 = (int *)((char *)a1 + *(_DWORD *)(v7 - 12) + 8);
  *v8 = a2[5];
  sub_391734((int)v8, 0);
  v9 = a2[1];
  *a1 = v9;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[6];
  a1[2] = a2[7];
  v10 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v10 - 12)) = a2[8];
  v11 = a2[9];
  a1[3] = (int)&off_464358;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[2] = v11;
  sub_3A6688(a1 + 10);
  a1[3] = (int)&off_464B40;
  a1[11] = a3;
  a1[12] = (int)&byte_55FB88;
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  return a1;
}


//======================================================================
// sub_3A3350
// address: 0x003A3350   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall sub_3A3350(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 52;
  sub_392DEC((_DWORD *)(a1 + 52));
  *(_DWORD *)(a1 + 164) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 169) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464C6C;
  *(_DWORD *)(a1 + 52) = &off_464C80;
  sub_391734(v2, 0);
  *(_DWORD *)(a1 + 8) = &off_464C44;
  *(_DWORD *)(a1 + 52) = &off_464C58;
  sub_391734(v2, 0);
  *(_DWORD *)a1 = &off_464CFC;
  *(_DWORD *)(a1 + 8) = &off_464D10;
  *(_DWORD *)(a1 + 52) = &off_464D24;
  *(_DWORD *)(a1 + 12) = &off_464358;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  sub_3A6688(a1 + 40);
  *(_DWORD *)(a1 + 12) = &off_464B40;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 48) = &byte_55FB88;
  sub_391734(v2, a1 + 12);
  return a1;
}


//======================================================================
// sub_3A3460
// address: 0x003A3460   size: 0xEE (238 bytes)
//======================================================================
int *__fastcall sub_3A3460(int *a1, int *a2, int *a3, int a4)
{
  _DWORD *v5; // r3
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r3
  int v12; // r3
  int v13; // r1
  int v14; // r1
  _DWORD *v15; // r3
  _BYTE v17[8]; // [sp+4h] [bp-8h] BYREF

  v5 = (_DWORD *)a2[2];
  *a1 = (int)v5;
  v5 -= 3;
  *(int *)((char *)a1 + *v5) = a2[3];
  a1[1] = 0;
  sub_391734((int)a1 + *v5, 0);
  v9 = a2[4];
  a1[2] = v9;
  v10 = (int *)((char *)a1 + *(_DWORD *)(v9 - 12) + 8);
  *v10 = a2[5];
  sub_391734((int)v10, 0);
  v11 = a2[1];
  *a1 = v11;
  *(int *)((char *)a1 + *(_DWORD *)(v11 - 12)) = a2[6];
  a1[2] = a2[7];
  v12 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v12 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[3] = (int)&off_464358;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  sub_3A6688(a1 + 10);
  v13 = *a3;
  a1[3] = (int)&off_464B40;
  a1[11] = 0;
  sub_3BEE2C(a1 + 12, v13, *(_DWORD *)(v13 - 12), v17);
  a1[11] = a4;
  v14 = a1[12];
  if ( a4 << 30 != 0 )
    v15 = *(_DWORD **)(v14 - 12);
  else
    v15 = nullptr;
  sub_3A2348(a1 + 3, v14, 0, v15);
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  return a1;
}


//======================================================================
// sub_3A3594
// address: 0x003A3594   size: 0xFE (254 bytes)
//======================================================================
int __fastcall sub_3A3594(int a1, _DWORD *a2, int a3)
{
  int v3; // r7
  int v7; // r1
  _DWORD *v8; // r3
  _BYTE v10[8]; // [sp+4h] [bp-8h] BYREF

  v3 = a1 + 52;
  sub_392DEC((_DWORD *)(a1 + 52));
  *(_DWORD *)(a1 + 164) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 169) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464C6C;
  *(_DWORD *)(a1 + 52) = &off_464C80;
  sub_391734(v3, 0);
  *(_DWORD *)(a1 + 8) = &off_464C44;
  *(_DWORD *)(a1 + 52) = &off_464C58;
  sub_391734(v3, 0);
  *(_DWORD *)a1 = &off_464CFC;
  *(_DWORD *)(a1 + 8) = &off_464D10;
  *(_DWORD *)(a1 + 12) = &off_464358;
  *(_DWORD *)(a1 + 52) = &off_464D24;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  sub_3A6688(a1 + 40);
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 12) = &off_464B40;
  sub_3BEE2C(a1 + 48, *a2, *(_DWORD *)(*a2 - 12), v10);
  *(_DWORD *)(a1 + 44) = a3;
  v7 = *(_DWORD *)(a1 + 48);
  if ( a3 << 30 != 0 )
    v8 = *(_DWORD **)(v7 - 12);
  else
    v8 = nullptr;
  sub_3A2348((_DWORD *)(a1 + 12), v7, 0, v8);
  sub_391734(v3, a1 + 12);
  return a1;
}


//======================================================================
// sub_3A3700
// address: 0x003A3700   size: 0x8E (142 bytes)
//======================================================================
int *__fastcall sub_3A3700(int *a1, int *a2)
{
  int v2; // r3
  int v4; // r0
  int v5; // r6
  int v7; // r3
  int v8; // r3
  int v9; // r3
  _BYTE v11[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[3] = (int)&off_464B40;
  v4 = a1[12];
  v5 = v4 - 12;
  if ( (int *)(v4 - 12) != &dword_55FB7C && sub_3C82FC(v4 - 4, -1) <= 0 )
    sub_3BDF60(v5, v11);
  a1[3] = (int)&off_464358;
  sub_3A8980(a1 + 10);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[6];
  a1[2] = a2[7];
  v8 = a2[4];
  a1[2] = v8;
  *(int *)((char *)a1 + *(_DWORD *)(v8 - 12) + 8) = a2[5];
  v9 = a2[2];
  *a1 = v9;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[3];
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_3A379C
// address: 0x003A379C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A379C(int a1)
{
  return a1 + 12;
}


//======================================================================
// sub_3A37A0
// address: 0x003A37A0   size: 0x7E (126 bytes)
//======================================================================
_DWORD *__fastcall sub_3A37A0(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r6
  _BYTE v7[4]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v8[4]; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  *a1 = &byte_55FB88;
  v3 = a2[8];
  if ( v3 != 0 )
  {
    v4 = a2[7];
    if ( v3 > a2[6] )
      v9 = sub_3BEC84(v4, a2[8], v7, 0);
    else
      v9 = sub_3BEC84(v4, a2[6], v7, 0);
    sub_3BEB58(a1, &v9);
    v5 = v9 - 12;
    if ( (int *)(v9 - 12) != &dword_55FB7C && sub_3C82FC(v9 - 4, -1) <= 0 )
      sub_3BDF60(v5, v8);
  }
  else
  {
    sub_3BEB58(a1, a2 + 12);
  }
  return a1;
}


//======================================================================
// sub_3A3840
// address: 0x003A3840   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3A3840(_DWORD *a1, void **a2)
{
  _DWORD *v4; // r5
  int v5; // r1
  _DWORD *v6; // r3

  sub_3BE408((int)(a1 + 12), *a2, *((_DWORD *)*a2 - 3));
  v4 = a1 + 3;
  v5 = a1[12];
  if ( a1[11] << 30 != 0 )
    v6 = *(_DWORD **)(v5 - 12);
  else
    v6 = nullptr;
  return sub_3A2348(v4, v5, 0, v6);
}


//======================================================================
// sub_3A3874
// address: 0x003A3874   size: 0x3C (60 bytes)
//======================================================================
_DWORD *__fastcall sub_3A3874(_DWORD *a1, int a2)
{
  *a1 = &off_464398;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_3A6688(a1 + 7);
  a1[8] = a2;
  *a1 = &off_464D38;
  a1[9] = &unk_55FB70;
  return a1;
}


//======================================================================
// sub_3A38BC
// address: 0x003A38BC   size: 0x7E (126 bytes)
//======================================================================
_DWORD *__fastcall sub_3A38BC(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r6
  _BYTE v7[4]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v8[4]; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  *a1 = &unk_55FB70;
  v3 = a2[5];
  if ( v3 != 0 )
  {
    v4 = a2[4];
    if ( v3 > a2[3] )
      v9 = sub_3B8120(v4, a2[5], v7, 0);
    else
      v9 = sub_3B8120(v4, a2[3], v7, 0);
    sub_3B7F94(a1, &v9);
    v5 = v9 - 12;
    if ( (int *)(v9 - 12) != &dword_55FB64 && sub_3C82FC(v9 - 4, -1) <= 0 )
      sub_3B7350(v5, v8);
  }
  else
  {
    ((void (*)(void))sub_3B7F94)();
  }
  return a1;
}


//======================================================================
// sub_3A395C
// address: 0x003A395C   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_3A395C(_DWORD *result)
{
  unsigned int v1; // r3

  v1 = result[5];
  if ( v1 != 0 && v1 > result[3] )
  {
    if ( (result[8] & 8) == 0 )
    {
      result[1] = v1;
      result[2] = v1;
    }
    result[3] = v1;
  }
  return result;
}


//======================================================================
// sub_3A3978
// address: 0x003A3978   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall sub_3A3978(_DWORD *result, int a2, int a3, int a4, __int64 a5)
{
  __int64 v5; // r4
  int v6; // r1
  int v7; // r6

  v5 = a5;
  result[5] = a2;
  result[4] = a2;
  result[6] = a3;
  if ( a5 <= 0 )
  {
    v7 = a2;
  }
  else
  {
    v6 = a2 - 4;
    do
    {
      v5 -= 0x7FFFFFFF;
      v7 = v6;
      v6 -= 4;
    }
    while ( v5 > 0x7FFFFFFF );
  }
  result[5] = v7 + 4 * v5;
  return result;
}


//======================================================================
// sub_3A39C8
// address: 0x003A39C8   size: 0x66 (102 bytes)
//======================================================================
_DWORD *__fastcall sub_3A39C8(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  _DWORD *v5; // r6
  _DWORD *result; // r0
  int v7; // r3
  unsigned int v8; // r7
  int v9; // r5
  int v10; // r6
  int v11; // r6

  v5 = (_DWORD *)a1[9];
  result = a4;
  v7 = a1[8];
  v5 -= 3;
  v8 = (unsigned int)(v7 << 28) >> 31;
  v9 = a2 + 4 * *v5;
  v10 = v5[1];
  if ( a2 == a1[9] )
  {
    v11 = a2 + 4 * v10;
  }
  else
  {
    v9 += 4 * a3;
    v11 = v9;
    a3 = 0;
  }
  if ( (v7 & 8) != 0 )
  {
    a1[1] = a2;
    a1[2] = a2 + 4 * a3;
    a1[3] = v9;
  }
  if ( (v7 & 0x10) != 0 )
  {
    result = sub_3A3978(a1, a2, v11, 0, (unsigned int)result);
    if ( v8 == 0 )
    {
      a1[1] = v9;
      a1[2] = v9;
      a1[3] = v9;
    }
  }
  return result;
}


//======================================================================
// sub_3A3A30
// address: 0x003A3A30   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_3A3A30(_DWORD *a1, int a2)
{
  int v2; // r1
  _DWORD *v3; // r3

  a1[8] = a2;
  if ( a2 << 30 != 0 )
  {
    v2 = a1[9];
    v3 = *(_DWORD **)(v2 - 12);
  }
  else
  {
    v2 = a1[9];
    v3 = nullptr;
  }
  return sub_3A39C8(a1, v2, 0, v3);
}


//======================================================================
// sub_3A3A50
// address: 0x003A3A50   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3A3A50(_DWORD *a1, int a2, int a3)
{
  if ( a2 != 0 && a3 >= 0 )
  {
    sub_3B7394(a1 + 9, 0, *(_DWORD *)(a1[9] - 12), 0);
    sub_3A39C8(a1, a2, a3, nullptr);
  }
  return a1;
}


//======================================================================
// sub_3A3A84
// address: 0x003A3A84   size: 0x12E (302 bytes)
//======================================================================
int __fastcall sub_3A3A84(_DWORD *a1, int a2)
{
  unsigned int v4; // r6
  int v5; // r1
  _DWORD *v6; // r3
  unsigned int v7; // r3
  int v8; // r1
  wchar_t *v9; // r1
  _DWORD *v10; // r2
  int *v11; // r3
  int v12; // r0
  int v13; // r8
  char *v14; // r7
  int v16; // [sp+0h] [bp-8h] BYREF
  _DWORD *v17; // [sp+4h] [bp-4h] BYREF

  if ( (a1[8] & 0x10) == 0 )
    return -1;
  if ( a2 == -1 )
    return 0;
  v4 = a1[6];
  v5 = *(_DWORD *)(a1[9] - 8);
  v6 = (_DWORD *)a1[5];
  if ( (unsigned int)v6 >= v4 && v5 == 268435454 )
    return -1;
  if ( (unsigned int)v6 < v4 )
  {
    *v6 = a2;
  }
  else
  {
    v7 = 2 * v5;
    if ( (unsigned int)(2 * v5) <= 0x1FF )
    {
      v8 = 512;
    }
    else
    {
      v8 = 268435454;
      if ( v7 <= 0xFFFFFFE )
        v8 = v7;
    }
    v17 = &unk_55FB70;
    sub_3B7B3C(&v17, v8);
    v9 = (wchar_t *)a1[4];
    if ( v9 != nullptr )
      sub_3B781C((int)&v17, v9, (a1[6] - (int)v9) >> 2);
    v10 = v17;
    v11 = v17 - 3;
    v12 = *(v17 - 3);
    v13 = v12 + 1;
    if ( (unsigned int)(v12 + 1) > *(_DWORD *)&byte_4[(_DWORD)(v17 - 3)] || (int)*(v17 - 1) > 0 )
    {
      sub_3B7B3C(&v17, v13);
      v10 = v17;
      v11 = v17 - 3;
      v12 = *(v17 - 3);
    }
    v10[v12] = a2;
    if ( v11 != &dword_55FB64 )
    {
      *(v10 - 1) = 0;
      *v11 = v13;
      v10[v13] = 0;
    }
    sub_3B6C2C(a1 + 9, &v17);
    sub_3A39C8(a1, a1[9], (a1[2] - a1[1]) >> 2, (_DWORD *)((a1[5] - a1[4]) >> 2));
    v14 = (char *)(v17 - 3);
    if ( v17 - 3 == &dword_55FB64 || sub_3C82FC(v17 - 1, -1) > 0 )
    {
      v6 = (_DWORD *)a1[5];
    }
    else
    {
      sub_3B7350(v14, &v16);
      v6 = (_DWORD *)a1[5];
    }
  }
  a1[5] = v6 + 1;
  return a2;
}


//======================================================================
// sub_3A3BC4
// address: 0x003A3BC4   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3A3BC4(_DWORD *a1, wchar_t **a2)
{
  int v3; // r1
  _DWORD *v4; // r3

  sub_3B781C((int)(a1 + 9), *a2, *(*a2 - 3));
  v3 = a1[9];
  if ( a1[8] << 30 != 0 )
    v4 = *(_DWORD **)(v3 - 12);
  else
    v4 = nullptr;
  return sub_3A39C8(a1, v3, 0, v4);
}


//======================================================================
// sub_3A3BF4
// address: 0x003A3BF4   size: 0x7C (124 bytes)
//======================================================================
_DWORD *__fastcall sub_3A3BF4(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r1
  _DWORD *v7; // r3
  _BYTE v9[8]; // [sp+4h] [bp-8h] BYREF

  *a1 = &off_464398;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_3A6688(a1 + 7);
  a1[8] = 0;
  *a1 = &off_464D38;
  sub_3B82D0(a1 + 9, *a2, *(_DWORD *)(*a2 - 12), v9);
  a1[8] = a3;
  v6 = a1[9];
  if ( a3 << 30 != 0 )
    v7 = *(_DWORD **)(v6 - 12);
  else
    v7 = nullptr;
  sub_3A39C8(a1, v6, 0, v7);
  return a1;
}


//======================================================================
// sub_3A3C94
// address: 0x003A3C94   size: 0x1B0 (432 bytes)
//======================================================================
int __fastcall sub_3A3C94(int a1, _DWORD *a2, __int64 a3, int a4, unsigned __int8 a5)
{
  int v6; // r0
  bool v7; // r4
  _BOOL4 v8; // r12
  _BOOL4 v9; // r11
  int v10; // r0
  unsigned int v11; // r5
  __int64 v13; // [sp+8h] [bp-14h]

  *(_QWORD *)a1 = -1;
  *(_DWORD *)(a1 + 8) = 0;
  v6 = a2[8];
  v7 = (v6 & 0x10 & a5) != 0;
  v8 = (v6 & 0x10 & a5) != 0 && (v6 & 8 & a5) != 0 && a4 != 1;
  v9 = (a5 & 0x10) == 0 && (v6 & 8 & a5) != 0;
  if ( (a5 & 0x10) == 0 && (v6 & 8 & a5) != 0 )
  {
    v10 = a2[1];
    if ( v10 != 0 )
      goto LABEL_6;
  }
  else
  {
    v10 = a2[4];
    if ( v10 != 0 )
      goto LABEL_6;
  }
  if ( a3 != 0 )
    return a1;
LABEL_6:
  if ( ((a5 & 8) != 0 || !v7) && !v9 && !v8 )
    return a1;
  v11 = a2[5];
  if ( v11 == 0 || v11 <= a2[3] )
  {
LABEL_11:
    if ( a4 != 1 )
      goto LABEL_12;
    goto LABEL_32;
  }
  if ( (a2[8] & 8) != 0 )
  {
    a2[3] = v11;
    goto LABEL_11;
  }
  a2[1] = v11;
  a2[2] = v11;
  a2[3] = v11;
  if ( a4 != 1 )
  {
LABEL_12:
    v13 = a3;
    if ( a4 == 2 )
    {
      a3 += __PAIR64__((a2[3] - v10) >> 31, (a2[3] - v10) >> 2);
      v13 = a3;
    }
    goto LABEL_14;
  }
LABEL_32:
  v13 = __PAIR64__((int)(v11 - v10) >> 31, (int)(v11 - v10) >> 2) + a3;
  a3 += __PAIR64__((a2[2] - v10) >> 31, (a2[2] - v10) >> 2);
LABEL_14:
  if ( v8 || v9 )
  {
    if ( a3 >= 0 && a3 <= __SPAIR64__((a2[3] - v10) >> 31, (a2[3] - v10) >> 2) )
    {
      a2[2] = a2[1] + 4 * a3;
      *(_QWORD *)a1 = a3;
    }
    if ( v8 )
      goto LABEL_35;
  }
  if ( (a5 & 8) == 0 && v7 )
  {
LABEL_35:
    if ( v13 >= 0 && v13 <= __SPAIR64__((a2[3] - v10) >> 31, (a2[3] - v10) >> 2) )
    {
      sub_3A3978(a2, a2[4], a2[6], a2[4], v13);
      *(_QWORD *)a1 = v13;
    }
  }
  return a1;
}


//======================================================================
// sub_3A3E44
// address: 0x003A3E44   size: 0xD8 (216 bytes)
//======================================================================
_DWORD *__fastcall sub_3A3E44(_DWORD *a1, _DWORD *a2, __int64 a3, int a4, int a5, unsigned __int8 a6)
{
  int v7; // r4
  int v8; // r7
  unsigned int v9; // r8
  int varg_r2; // [sp+20h] [bp+18h] BYREF

  *(_QWORD *)a1 = -1;
  v7 = a2[8];
  a1[2] = 0;
  if ( (v7 & 8 & a6) != 0 )
  {
    v8 = a2[1];
    if ( v8 != 0 )
      goto LABEL_3;
  }
  else
  {
    v8 = a2[4];
    if ( v8 != 0 )
      goto LABEL_3;
  }
  if ( a3 != 0 )
    return a1;
LABEL_3:
  if ( (a6 & v7 & 0x10) != 0 || (v7 & 8 & a6) != 0 )
  {
    v9 = a2[5];
    if ( v9 != 0 && v9 > a2[3] )
    {
      if ( (v7 & 8) == 0 )
      {
        a2[1] = v9;
        a2[2] = v9;
      }
      a2[3] = v9;
    }
    if ( a3 >= 0 && a3 <= __SPAIR64__((a2[3] - v8) >> 31, (a2[3] - v8) >> 2) )
    {
      if ( (v7 & 8 & a6) != 0 )
      {
        a2[2] = a2[1] + 4 * a3;
        if ( (a6 & v7 & 0x10) == 0 )
          goto LABEL_14;
      }
      else if ( (a6 & v7 & 0x10) == 0 )
      {
LABEL_14:
        j_memcpy(a1, &varg_r2, 0xCu);
        return a1;
      }
      sub_3A3978(a2, a2[4], a2[6], SHIDWORD(a3), a3);
      goto LABEL_14;
    }
  }
  return a1;
}


//======================================================================
// sub_3A3F1C
// address: 0x003A3F1C   size: 0x7A (122 bytes)
//======================================================================
int *__fastcall sub_3A3F1C(int *a1, int *a2, int a3)
{
  _DWORD *v3; // r3
  int v7; // r3

  v3 = (_DWORD *)a2[1];
  *a1 = (int)v3;
  v3 -= 3;
  *(int *)((char *)a1 + *v3) = a2[2];
  a1[1] = 0;
  sub_391B70((int)a1 + *v3, 0);
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[3];
  a1[3] = 0;
  a1[2] = (int)&off_464398;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  sub_3A6688(a1 + 9);
  a1[2] = (int)&off_464D38;
  a1[10] = a3 | 8;
  a1[11] = (int)&unk_55FB70;
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  return a1;
}


//======================================================================
// sub_3A3FBC
// address: 0x003A3FBC   size: 0x9C (156 bytes)
//======================================================================
int __fastcall sub_3A3FBC(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 48;
  sub_392DEC((_DWORD *)(a1 + 48));
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464D7C;
  *(_DWORD *)(a1 + 48) = &off_464D90;
  sub_391B70(v2, 0);
  *(_DWORD *)(a1 + 48) = &off_464DC8;
  *(_DWORD *)a1 = &off_464DB4;
  *(_DWORD *)(a1 + 8) = &off_464398;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  sub_3A6688(a1 + 36);
  *(_DWORD *)(a1 + 8) = &off_464D38;
  *(_DWORD *)(a1 + 40) = a2 | 8;
  *(_DWORD *)(a1 + 44) = &unk_55FB70;
  sub_391B70(v2, a1 + 8);
  return a1;
}


//======================================================================
// sub_3A409C
// address: 0x003A409C   size: 0xC8 (200 bytes)
//======================================================================
int *__fastcall sub_3A409C(int *a1, int *a2, _DWORD *a3, int a4)
{
  _DWORD *v5; // r3
  int v9; // r3
  _DWORD *v10; // r3
  int v11; // r1
  _BYTE v13[8]; // [sp+Ch] [bp-8h] BYREF

  v5 = (_DWORD *)a2[1];
  *a1 = (int)v5;
  v5 -= 3;
  *(int *)((char *)a1 + *v5) = a2[2];
  a1[1] = 0;
  sub_391B70((int)a1 + *v5, 0);
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[3];
  a1[2] = (int)&off_464398;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  sub_3A6688(a1 + 9);
  a1[10] = 0;
  a1[2] = (int)&off_464D38;
  sub_3B82D0(a1 + 11, *a3, *(_DWORD *)(*a3 - 12), v13);
  a1[10] = a4 | 8;
  v10 = nullptr;
  v11 = a1[11];
  if ( a4 << 30 != 0 )
    v10 = *(_DWORD **)(v11 - 12);
  sub_3A39C8(a1 + 2, v11, 0, v10);
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  return a1;
}


//======================================================================
// sub_3A41A0
// address: 0x003A41A0   size: 0xEA (234 bytes)
//======================================================================
int __fastcall sub_3A41A0(int a1, int *a2, int a3)
{
  int v3; // r7
  int v7; // r1
  int v8; // r1
  _DWORD *v9; // r3
  _BYTE v11[8]; // [sp+Ch] [bp-8h] BYREF

  v3 = a1 + 48;
  sub_392DEC((_DWORD *)(a1 + 48));
  *(_DWORD *)(a1 + 160) = 0;
  *(_DWORD *)(a1 + 164) = 0;
  *(_BYTE *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464D7C;
  *(_DWORD *)(a1 + 48) = &off_464D90;
  sub_391B70(v3, 0);
  *(_DWORD *)a1 = &off_464DB4;
  *(_DWORD *)(a1 + 48) = &off_464DC8;
  *(_DWORD *)(a1 + 8) = &off_464398;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  sub_3A6688(a1 + 36);
  v7 = *a2;
  *(_DWORD *)(a1 + 8) = &off_464D38;
  *(_DWORD *)(a1 + 40) = 0;
  sub_3B82D0(a1 + 44, v7, *(_DWORD *)(v7 - 12), v11);
  *(_DWORD *)(a1 + 40) = a3 | 8;
  v8 = *(_DWORD *)(a1 + 44);
  v9 = nullptr;
  if ( a3 << 30 != 0 )
    v9 = *(_DWORD **)(v8 - 12);
  sub_3A39C8((_DWORD *)(a1 + 8), v8, 0, v9);
  sub_391B70(v3, a1 + 8);
  return a1;
}


//======================================================================
// sub_3A42E4
// address: 0x003A42E4   size: 0x6C (108 bytes)
//======================================================================
int *__fastcall sub_3A42E4(int *a1, int *a2)
{
  int v2; // r3
  int v4; // r0
  int v5; // r6
  int v7; // r3
  _BYTE v9[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[3];
  a1[2] = (int)&off_464D38;
  v4 = a1[11];
  v5 = v4 - 12;
  if ( (int *)(v4 - 12) != &dword_55FB64 && sub_3C82FC(v4 - 4, -1) <= 0 )
    sub_3B7350(v5, v9);
  a1[2] = (int)&off_464398;
  sub_3A8980(a1 + 9);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[2];
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_3A435C
// address: 0x003A435C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A435C(int a1)
{
  return a1 + 8;
}


//======================================================================
// sub_3A4360
// address: 0x003A4360   size: 0x7E (126 bytes)
//======================================================================
_DWORD *__fastcall sub_3A4360(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r6
  _BYTE v7[4]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v8[4]; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  *a1 = &unk_55FB70;
  v3 = a2[7];
  if ( v3 != 0 )
  {
    v4 = a2[6];
    if ( v3 > a2[5] )
      v9 = sub_3B8120(v4, a2[7], v7, 0);
    else
      v9 = sub_3B8120(v4, a2[5], v7, 0);
    sub_3B7F94(a1, &v9);
    v5 = v9 - 12;
    if ( (int *)(v9 - 12) != &dword_55FB64 && sub_3C82FC(v9 - 4, -1) <= 0 )
      sub_3B7350(v5, v8);
  }
  else
  {
    sub_3B7F94(a1, a2 + 11);
  }
  return a1;
}


//======================================================================
// sub_3A4400
// address: 0x003A4400   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3A4400(_DWORD *a1, wchar_t **a2)
{
  _DWORD *v4; // r5
  int v5; // r1
  _DWORD *v6; // r3

  sub_3B781C((int)(a1 + 11), *a2, *(*a2 - 3));
  v4 = a1 + 2;
  v5 = a1[11];
  if ( a1[10] << 30 != 0 )
    v6 = *(_DWORD **)(v5 - 12);
  else
    v6 = nullptr;
  return sub_3A39C8(v4, v5, 0, v6);
}


//======================================================================
// sub_3A4434
// address: 0x003A4434   size: 0x74 (116 bytes)
//======================================================================
int *__fastcall sub_3A4434(int *a1, int *a2, int a3)
{
  int v3; // r3
  _DWORD *v6; // r0
  int v8; // r3

  v3 = a2[1];
  *a1 = v3;
  v6 = (int *)((char *)a1 + *(_DWORD *)(v3 - 12));
  *v6 = a2[2];
  sub_391B70((int)v6, 0);
  v8 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v8 - 12)) = a2[3];
  a1[1] = (int)&off_464398;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_3A6688(a1 + 8);
  a1[1] = (int)&off_464D38;
  a1[9] = a3 | 0x10;
  a1[10] = (int)&unk_55FB70;
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  return a1;
}


//======================================================================
// sub_3A44CC
// address: 0x003A44CC   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_3A44CC(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 44;
  sub_392DEC((_DWORD *)(a1 + 44));
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)a1 = &off_464DDC;
  *(_DWORD *)(a1 + 44) = &off_464DF0;
  sub_391B70(v2, 0);
  *(_DWORD *)(a1 + 44) = &off_464E28;
  *(_DWORD *)a1 = &off_464E14;
  *(_DWORD *)(a1 + 4) = &off_464398;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_3A6688(a1 + 32);
  *(_DWORD *)(a1 + 4) = &off_464D38;
  *(_DWORD *)(a1 + 36) = a2 | 0x10;
  *(_DWORD *)(a1 + 40) = &unk_55FB70;
  sub_391B70(v2, a1 + 4);
  return a1;
}


//======================================================================
// sub_3A45A4
// address: 0x003A45A4   size: 0xC2 (194 bytes)
//======================================================================
int *__fastcall sub_3A45A4(int *a1, int *a2, int *a3, int a4)
{
  int v5; // r3
  _DWORD *v8; // r0
  int v10; // r3
  int v11; // r1
  int v12; // r1
  _DWORD *v13; // r3
  _BYTE v15[8]; // [sp+Ch] [bp-8h] BYREF

  v5 = a2[1];
  *a1 = v5;
  v8 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12));
  *v8 = a2[2];
  sub_391B70((int)v8, 0);
  v10 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v10 - 12)) = a2[3];
  a1[1] = (int)&off_464398;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  sub_3A6688(a1 + 8);
  v11 = *a3;
  a1[1] = (int)&off_464D38;
  a1[9] = 0;
  sub_3B82D0(a1 + 10, v11, *(_DWORD *)(v11 - 12), v15);
  a1[9] = a4 | 0x10;
  v12 = a1[10];
  v13 = nullptr;
  if ( a4 << 30 != 0 )
    v13 = *(_DWORD **)(v12 - 12);
  sub_3A39C8(a1 + 1, v12, 0, v13);
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  return a1;
}


//======================================================================
// sub_3A469C
// address: 0x003A469C   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall sub_3A469C(int a1, int *a2, int a3)
{
  int v3; // r7
  int v7; // r1
  int v8; // r1
  _DWORD *v9; // r3
  _BYTE v11[8]; // [sp+Ch] [bp-8h] BYREF

  v3 = a1 + 44;
  sub_392DEC((_DWORD *)(a1 + 44));
  *(_DWORD *)(a1 + 156) = 0;
  *(_DWORD *)(a1 + 160) = 0;
  *(_BYTE *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_DWORD *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)a1 = &off_464DDC;
  *(_DWORD *)(a1 + 44) = &off_464DF0;
  sub_391B70(v3, 0);
  *(_DWORD *)a1 = &off_464E14;
  *(_DWORD *)(a1 + 44) = &off_464E28;
  *(_DWORD *)(a1 + 4) = &off_464398;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  sub_3A6688(a1 + 32);
  v7 = *a2;
  *(_DWORD *)(a1 + 4) = &off_464D38;
  *(_DWORD *)(a1 + 36) = 0;
  sub_3B82D0(a1 + 40, v7, *(_DWORD *)(v7 - 12), v11);
  *(_DWORD *)(a1 + 36) = a3 | 0x10;
  v8 = *(_DWORD *)(a1 + 40);
  v9 = nullptr;
  if ( a3 << 30 != 0 )
    v9 = *(_DWORD **)(v8 - 12);
  sub_3A39C8((_DWORD *)(a1 + 4), v8, 0, v9);
  sub_391B70(v3, a1 + 4);
  return a1;
}


//======================================================================
// sub_3A47D8
// address: 0x003A47D8   size: 0x68 (104 bytes)
//======================================================================
int *__fastcall sub_3A47D8(int *a1, int *a2)
{
  int v2; // r3
  int v4; // r0
  int v5; // r6
  int v7; // r3
  _BYTE v9[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[3];
  a1[1] = (int)&off_464D38;
  v4 = a1[10];
  v5 = v4 - 12;
  if ( (int *)(v4 - 12) != &dword_55FB64 && sub_3C82FC(v4 - 4, -1) <= 0 )
    sub_3B7350(v5, v9);
  a1[1] = (int)&off_464398;
  sub_3A8980(a1 + 8);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[2];
  return a1;
}


//======================================================================
// sub_3A484C
// address: 0x003A484C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A484C(int a1)
{
  return a1 + 4;
}


//======================================================================
// sub_3A4850
// address: 0x003A4850   size: 0x7E (126 bytes)
//======================================================================
_DWORD *__fastcall sub_3A4850(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r6
  _BYTE v7[4]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v8[4]; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  *a1 = &unk_55FB70;
  v3 = a2[6];
  if ( v3 != 0 )
  {
    v4 = a2[5];
    if ( v3 > a2[4] )
      v9 = sub_3B8120(v4, a2[6], v7, 0);
    else
      v9 = sub_3B8120(v4, a2[4], v7, 0);
    sub_3B7F94(a1, &v9);
    v5 = v9 - 12;
    if ( (int *)(v9 - 12) != &dword_55FB64 && sub_3C82FC(v9 - 4, -1) <= 0 )
      sub_3B7350(v5, v8);
  }
  else
  {
    sub_3B7F94(a1, a2 + 10);
  }
  return a1;
}


//======================================================================
// sub_3A48F0
// address: 0x003A48F0   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3A48F0(_DWORD *a1, wchar_t **a2)
{
  _DWORD *v3; // r5
  int v4; // r1
  _DWORD *v5; // r3

  v3 = a1 + 1;
  sub_3B781C((int)(a1 + 10), *a2, *(*a2 - 3));
  v4 = a1[10];
  if ( a1[9] << 30 != 0 )
    v5 = *(_DWORD **)(v4 - 12);
  else
    v5 = nullptr;
  return sub_3A39C8(v3, v4, 0, v5);
}


//======================================================================
// sub_3A4920
// address: 0x003A4920   size: 0xA4 (164 bytes)
//======================================================================
int *__fastcall sub_3A4920(int *a1, int *a2, int a3)
{
  _DWORD *v3; // r3
  int v7; // r3
  _DWORD *v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r2

  v3 = (_DWORD *)a2[2];
  *a1 = (int)v3;
  v3 -= 3;
  *(int *)((char *)a1 + *v3) = a2[3];
  a1[1] = 0;
  sub_391B70((int)a1 + *v3, 0);
  v7 = a2[4];
  a1[2] = v7;
  v8 = (int *)((char *)a1 + *(_DWORD *)(v7 - 12) + 8);
  *v8 = a2[5];
  sub_391B70((int)v8, 0);
  v9 = a2[1];
  *a1 = v9;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[6];
  a1[2] = a2[7];
  v10 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v10 - 12)) = a2[8];
  v11 = a2[9];
  a1[3] = (int)&off_464398;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  a1[2] = v11;
  sub_3A6688(a1 + 10);
  a1[3] = (int)&off_464D38;
  a1[11] = a3;
  a1[12] = (int)&unk_55FB70;
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  return a1;
}


//======================================================================
// sub_3A49F8
// address: 0x003A49F8   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall sub_3A49F8(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 52;
  sub_392DEC((_DWORD *)(a1 + 52));
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464E64;
  *(_DWORD *)(a1 + 52) = &off_464E78;
  sub_391B70(v2, 0);
  *(_DWORD *)(a1 + 8) = &off_464E3C;
  *(_DWORD *)(a1 + 52) = &off_464E50;
  sub_391B70(v2, 0);
  *(_DWORD *)a1 = &off_464EF4;
  *(_DWORD *)(a1 + 8) = &off_464F08;
  *(_DWORD *)(a1 + 52) = &off_464F1C;
  *(_DWORD *)(a1 + 12) = &off_464398;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  sub_3A6688(a1 + 40);
  *(_DWORD *)(a1 + 12) = &off_464D38;
  *(_DWORD *)(a1 + 44) = a2;
  *(_DWORD *)(a1 + 48) = &unk_55FB70;
  sub_391B70(v2, a1 + 12);
  return a1;
}


//======================================================================
// sub_3A4B08
// address: 0x003A4B08   size: 0xEE (238 bytes)
//======================================================================
int *__fastcall sub_3A4B08(int *a1, int *a2, int *a3, int a4)
{
  _DWORD *v5; // r3
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r3
  int v12; // r3
  int v13; // r1
  int v14; // r1
  _DWORD *v15; // r3
  _BYTE v17[8]; // [sp+4h] [bp-8h] BYREF

  v5 = (_DWORD *)a2[2];
  *a1 = (int)v5;
  v5 -= 3;
  *(int *)((char *)a1 + *v5) = a2[3];
  a1[1] = 0;
  sub_391B70((int)a1 + *v5, 0);
  v9 = a2[4];
  a1[2] = v9;
  v10 = (int *)((char *)a1 + *(_DWORD *)(v9 - 12) + 8);
  *v10 = a2[5];
  sub_391B70((int)v10, 0);
  v11 = a2[1];
  *a1 = v11;
  *(int *)((char *)a1 + *(_DWORD *)(v11 - 12)) = a2[6];
  a1[2] = a2[7];
  v12 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v12 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[3] = (int)&off_464398;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  a1[7] = 0;
  a1[8] = 0;
  a1[9] = 0;
  sub_3A6688(a1 + 10);
  v13 = *a3;
  a1[3] = (int)&off_464D38;
  a1[11] = 0;
  sub_3B82D0(a1 + 12, v13, *(_DWORD *)(v13 - 12), v17);
  a1[11] = a4;
  v14 = a1[12];
  if ( a4 << 30 != 0 )
    v15 = *(_DWORD **)(v14 - 12);
  else
    v15 = nullptr;
  sub_3A39C8(a1 + 3, v14, 0, v15);
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  return a1;
}


//======================================================================
// sub_3A4C3C
// address: 0x003A4C3C   size: 0xFE (254 bytes)
//======================================================================
int __fastcall sub_3A4C3C(int a1, _DWORD *a2, int a3)
{
  int v3; // r7
  int v7; // r1
  _DWORD *v8; // r3
  _BYTE v10[8]; // [sp+4h] [bp-8h] BYREF

  v3 = a1 + 52;
  sub_392DEC((_DWORD *)(a1 + 52));
  *(_DWORD *)(a1 + 164) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  *(_BYTE *)(a1 + 172) = 0;
  *(_DWORD *)(a1 + 176) = 0;
  *(_DWORD *)(a1 + 180) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_464E64;
  *(_DWORD *)(a1 + 52) = &off_464E78;
  sub_391B70(v3, 0);
  *(_DWORD *)(a1 + 8) = &off_464E3C;
  *(_DWORD *)(a1 + 52) = &off_464E50;
  sub_391B70(v3, 0);
  *(_DWORD *)a1 = &off_464EF4;
  *(_DWORD *)(a1 + 8) = &off_464F08;
  *(_DWORD *)(a1 + 12) = &off_464398;
  *(_DWORD *)(a1 + 52) = &off_464F1C;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_DWORD *)(a1 + 32) = 0;
  *(_DWORD *)(a1 + 36) = 0;
  sub_3A6688(a1 + 40);
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 12) = &off_464D38;
  sub_3B82D0(a1 + 48, *a2, *(_DWORD *)(*a2 - 12), v10);
  *(_DWORD *)(a1 + 44) = a3;
  v7 = *(_DWORD *)(a1 + 48);
  if ( a3 << 30 != 0 )
    v8 = *(_DWORD **)(v7 - 12);
  else
    v8 = nullptr;
  sub_3A39C8((_DWORD *)(a1 + 12), v7, 0, v8);
  sub_391B70(v3, a1 + 12);
  return a1;
}


//======================================================================
// sub_3A4DA8
// address: 0x003A4DA8   size: 0x8E (142 bytes)
//======================================================================
int *__fastcall sub_3A4DA8(int *a1, int *a2)
{
  int v2; // r3
  int v4; // r0
  int v5; // r6
  int v7; // r3
  int v8; // r3
  int v9; // r3
  _BYTE v11[4]; // [sp+4h] [bp-4h] BYREF

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[3] = (int)&off_464D38;
  v4 = a1[12];
  v5 = v4 - 12;
  if ( (int *)(v4 - 12) != &dword_55FB64 && sub_3C82FC(v4 - 4, -1) <= 0 )
    sub_3B7350(v5, v11);
  a1[3] = (int)&off_464398;
  sub_3A8980(a1 + 10);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[6];
  a1[2] = a2[7];
  v8 = a2[4];
  a1[2] = v8;
  *(int *)((char *)a1 + *(_DWORD *)(v8 - 12) + 8) = a2[5];
  v9 = a2[2];
  *a1 = v9;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[3];
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_3A4E44
// address: 0x003A4E44   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A4E44(int a1)
{
  return a1 + 12;
}


//======================================================================
// sub_3A4E48
// address: 0x003A4E48   size: 0x7E (126 bytes)
//======================================================================
_DWORD *__fastcall sub_3A4E48(_DWORD *a1, _DWORD *a2)
{
  unsigned int v3; // r3
  int v4; // r0
  int v5; // r6
  _BYTE v7[4]; // [sp+4h] [bp-Ch] BYREF
  _BYTE v8[4]; // [sp+8h] [bp-8h] BYREF
  int v9; // [sp+Ch] [bp-4h] BYREF

  *a1 = &unk_55FB70;
  v3 = a2[8];
  if ( v3 != 0 )
  {
    v4 = a2[7];
    if ( v3 > a2[6] )
      v9 = sub_3B8120(v4, a2[8], v7, 0);
    else
      v9 = sub_3B8120(v4, a2[6], v7, 0);
    sub_3B7F94(a1, &v9);
    v5 = v9 - 12;
    if ( (int *)(v9 - 12) != &dword_55FB64 && sub_3C82FC(v9 - 4, -1) <= 0 )
      sub_3B7350(v5, v8);
  }
  else
  {
    sub_3B7F94(a1, a2 + 12);
  }
  return a1;
}


//======================================================================
// sub_3A4EE8
// address: 0x003A4EE8   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3A4EE8(_DWORD *a1, wchar_t **a2)
{
  _DWORD *v4; // r5
  int v5; // r1
  _DWORD *v6; // r3

  sub_3B781C((int)(a1 + 12), *a2, *(*a2 - 3));
  v4 = a1 + 3;
  v5 = a1[12];
  if ( a1[11] << 30 != 0 )
    v6 = *(_DWORD **)(v5 - 12);
  else
    v6 = nullptr;
  return sub_3A39C8(v4, v5, 0, v6);
}


//======================================================================
// sub_3A4F1C
// address: 0x003A4F1C   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_3A4F1C(
        int a1,
        int *a2,
        unsigned int a3,
        unsigned int a4,
        wchar_t **a5,
        char *s,
        unsigned int a7,
        char **a8)
{
  wchar_t *v8; // r5
  char *v9; // r4
  _BOOL4 v12; // r3
  unsigned int v13; // r0
  unsigned int v14; // r6
  int result; // r0
  size_t v16; // r0
  char v17[4]; // [sp+0h] [bp-Ch] BYREF
  mbstate_t ps; // [sp+4h] [bp-8h] BYREF

  v8 = (wchar_t *)a3;
  v9 = s;
  ps.__count = *a2;
  if ( (int)&s[((int)(a4 - a3) >> 2) - a7] <= 0 )
  {
    if ( a4 <= a3 )
    {
      result = 0;
    }
    else
    {
      while ( 1 )
      {
        v16 = j_wcrtomb(v9, *v8, &ps);
        if ( v16 == -1 )
          break;
        ++v8;
        *a2 = ps.__count;
        v9 += v16;
        if ( a4 <= (unsigned int)v8 )
        {
          v12 = false;
          goto LABEL_11;
        }
      }
      result = 2;
    }
  }
  else
  {
    v12 = a3 < a4;
    if ( a3 < a4 && (unsigned int)s < a7 )
    {
      while ( 1 )
      {
        v13 = j_wcrtomb(v17, *v8, &ps);
        v14 = v13;
        if ( v13 == -1 )
          break;
        if ( v13 > a7 - (unsigned int)v9 )
          goto LABEL_12;
        j_memcpy(v9, v17, v13);
        ++v8;
        *a2 = ps.__count;
        v9 += v14;
        v12 = (unsigned int)v8 < a4;
        if ( (unsigned int)v9 >= a7 || (unsigned int)v8 >= a4 )
          goto LABEL_11;
      }
      result = 2;
    }
    else
    {
LABEL_11:
      result = 0;
      if ( v12 )
LABEL_12:
        result = 1;
    }
  }
  *a5 = v8;
  *a8 = v9;
  return result;
}


//======================================================================
// sub_3A4FE8
// address: 0x003A4FE8   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_3A4FE8(
        int a1,
        int *a2,
        char *s,
        unsigned int a4,
        const char **a5,
        wchar_t *pwc,
        unsigned int a7,
        wchar_t **a8)
{
  int result; // r0
  const char *v11; // r4
  wchar_t *v12; // r5
  size_t v13; // r0
  mbstate_t p; // [sp+4h] [bp-8h] BYREF

  result = (unsigned int)s < a4;
  v11 = s;
  v12 = pwc;
  p.__count = *a2;
  if ( (unsigned int)s < a4 && (unsigned int)pwc < a7 )
  {
    while ( 1 )
    {
      v13 = j_mbrtowc(v12, v11, a4 - (_DWORD)v11, &p);
      if ( v13 == -1 )
      {
        result = 2;
        goto LABEL_11;
      }
      if ( v13 == -2 )
        break;
      if ( v13 == 0 )
      {
        *v12 = 0;
        v13 = 1;
      }
      v11 += v13;
      result = (unsigned int)v11 < a4;
      *a2 = p.__count;
      ++v12;
      if ( (unsigned int)v11 >= a4 || (unsigned int)v12 >= a7 )
        goto LABEL_11;
    }
    result = 1;
  }
LABEL_11:
  *a5 = v11;
  *a8 = v12;
  return result;
}


//======================================================================
// sub_3A5060
// address: 0x003A5060   size: 0x4 (4 bytes)
//======================================================================
int sub_3A5060()
{
  return 1;
}


//======================================================================
// sub_3A5064
// address: 0x003A5064   size: 0x4 (4 bytes)
//======================================================================
int sub_3A5064()
{
  return 1;
}


//======================================================================
// sub_3A5068
// address: 0x003A5068   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_3A5068(int a1, int *a2, char *s, unsigned int a4, int a5)
{
  const char *v5; // r4
  int v8; // r5
  int v9; // r7
  size_t v10; // r0
  mbstate_t p; // [sp+4h] [bp-8h] BYREF

  v5 = s;
  v8 = a5;
  p.__count = *a2;
  v9 = 0;
  if ( (unsigned int)s < a4 && a5 != 0 )
  {
    do
    {
      v10 = j_mbrtowc(nullptr, v5, a4 - (_DWORD)v5, &p);
      if ( v10 + 2 <= 1 )
        break;
      if ( v10 == 0 )
        v10 = 1;
      v5 += v10;
      *a2 = p.__count;
      v9 += v10;
      --v8;
      if ( (unsigned int)v5 >= a4 )
        break;
    }
    while ( v8 != 0 );
  }
  return v9;
}


//======================================================================
// sub_3A50C8
// address: 0x003A50C8   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3A50C8(_DWORD *a1)
{
  _BYTE v3[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 6;
  a1[2] = 0;
  a1[3] = 4098;
  sub_3A6688(v3);
  sub_3A8948(a1 + 27, v3);
  return sub_3A8980(v3);
}


//======================================================================
// sub_3A50FC
// address: 0x003A50FC   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3A50FC(int a1, int a2, int a3)
{
  int v3; // r6

  v3 = a2 + 108;
  sub_3A84F8(a1, a2 + 108);
  sub_3A8948(v3, a3);
  sub_392F70(a2, 1);
  return a1;
}


//======================================================================
// sub_3A5400
// address: 0x003A5400   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3A5400(_DWORD *a1, char *a2)
{
  int result; // r0

  *a1 = 0;
  result = j_strcmp(a2, "C");
  if ( result != 0 )
    sub_3BD110("locale::facet::_S_create_c_locale name not valid");
  return result;
}


//======================================================================
// sub_3A5428
// address: 0x003A5428   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall sub_3A5428(_DWORD *result)
{
  *result = 0;
  return result;
}


//======================================================================
// sub_3A5430
// address: 0x003A5430   size: 0x4 (4 bytes)
//======================================================================
int sub_3A5430()
{
  return 0;
}


//======================================================================
// sub_3A5434
// address: 0x003A5434   size: 0x4 (4 bytes)
//======================================================================
int sub_3A5434()
{
  return 0;
}


//======================================================================
// sub_3A5438
// address: 0x003A5438   size: 0x72 (114 bytes)
//======================================================================
void __fastcall sub_3A5438(int a1, char *a2, size_t a3, const char *a4, struct tm *tp)
{
  char *v9; // r0
  char *v10; // r5
  size_t v11; // r7
  void *v12; // r4
  size_t v13; // r5

  v9 = j_setlocale(6, nullptr);
  v10 = v9;
  if ( v9 != nullptr )
  {
    v11 = j_strlen(v9) + 1;
    v12 = operator new[](v11);
    j_memcpy(v12, v10, v11);
    j_setlocale(6, *(const char **)(a1 + 16));
  }
  else
  {
    v12 = nullptr;
  }
  v13 = j_strftime(a2, a3, a4, tp);
  j_setlocale(6, (const char *)v12);
  if ( v12 != nullptr )
    operator delete[](v12);
  if ( v13 == 0 )
    *a2 = 0;
}


//======================================================================
// sub_3A54B8
// address: 0x003A54B8   size: 0x1D2 (466 bytes)
//======================================================================
_DWORD *__fastcall sub_3A54B8(_DWORD *result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5

  v1 = (_DWORD *)result[2];
  v2 = result;
  if ( v1 == nullptr )
  {
    result = operator new(0xC8u);
    *result = &off_4645C0;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result[4] = 0;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    result[13] = 0;
    result[14] = 0;
    result[15] = 0;
    result[16] = 0;
    result[17] = 0;
    result[18] = 0;
    result[19] = 0;
    result[20] = 0;
    result[21] = 0;
    result[22] = 0;
    result[23] = 0;
    result[24] = 0;
    result[25] = 0;
    result[26] = 0;
    result[27] = 0;
    result[28] = 0;
    result[29] = 0;
    result[30] = 0;
    result[31] = 0;
    result[32] = 0;
    result[33] = 0;
    result[34] = 0;
    result[35] = 0;
    result[36] = 0;
    result[37] = 0;
    result[38] = 0;
    result[39] = 0;
    result[40] = 0;
    result[41] = 0;
    result[42] = 0;
    result[43] = 0;
    result[44] = 0;
    result[45] = 0;
    result[46] = 0;
    result[47] = 0;
    result[48] = 0;
    *((_BYTE *)result + 196) = 0;
    v2[2] = result;
    v1 = result;
  }
  v1[2] = "%m/%d/%y";
  v1[3] = "%m/%d/%y";
  v1[4] = "%H:%M:%S";
  v1[5] = "%H:%M:%S";
  v1[8] = "AM";
  v1[6] = &unk_44DC7A;
  v1[7] = &unk_44DC7A;
  v1[10] = &unk_44DC7A;
  v1[11] = "Sunday";
  v1[12] = "Monday";
  v1[9] = "PM";
  v1[13] = "Tuesday";
  v1[14] = "Wednesday";
  v1[15] = "Thursday";
  v1[30] = "June";
  v1[16] = "Friday";
  v1[17] = "Saturday";
  v1[18] = "Sun";
  v1[31] = "July";
  v1[19] = "Mon";
  v1[20] = "Tue";
  v1[21] = "Wed";
  v1[22] = "Thu";
  v1[23] = "Fri";
  v1[24] = "Sat";
  v1[25] = "January";
  v1[26] = "February";
  v1[27] = "March";
  v1[28] = "April";
  v1[29] = "May";
  v1[32] = "August";
  v1[33] = "September";
  v1[34] = "October";
  v1[35] = "November";
  v1[36] = "December";
  v1[37] = "Jan";
  v1[38] = "Feb";
  v1[39] = "Mar";
  v1[40] = "Apr";
  v1[41] = "May";
  v1[42] = "Jun";
  v1[43] = "Jul";
  v1[44] = "Aug";
  v1[45] = "Sep";
  v1[46] = "Oct";
  v1[47] = "Nov";
  v1[48] = "Dec";
  return result;
}


//======================================================================
// sub_3A5738
// address: 0x003A5738   size: 0x86 (134 bytes)
//======================================================================
void __fastcall sub_3A5738(int a1, wchar_t *a2, size_t a3, const wchar_t *a4, struct tm *tp)
{
  char *v9; // r0
  char *v10; // r5
  size_t v11; // r7
  void *v12; // r4
  size_t v13; // r5

  v9 = j_setlocale(6, nullptr);
  v10 = v9;
  if ( v9 != nullptr )
  {
    v11 = j_strlen(v9) + 1;
    v12 = operator new[](v11);
    j_memcpy(v12, v10, v11);
    j_setlocale(6, *(const char **)(a1 + 16));
    v13 = j_wcsftime(a2, a3, a4, tp);
    j_setlocale(6, (const char *)v12);
    if ( v12 != nullptr )
      operator delete[](v12);
  }
  else
  {
    v13 = j_wcsftime(a2, a3, a4, tp);
    j_setlocale(6, nullptr);
  }
  if ( v13 == 0 )
    *a2 = 0;
}


//======================================================================
// sub_3A57CC
// address: 0x003A57CC   size: 0x1D2 (466 bytes)
//======================================================================
_DWORD *__fastcall sub_3A57CC(_DWORD *result)
{
  _DWORD *v1; // r4
  _DWORD *v2; // r5

  v1 = (_DWORD *)result[2];
  v2 = result;
  if ( v1 == nullptr )
  {
    result = operator new(0xC8u);
    *result = &off_4654B8;
    result[1] = 0;
    result[2] = 0;
    result[3] = 0;
    result[4] = 0;
    result[5] = 0;
    result[6] = 0;
    result[7] = 0;
    result[8] = 0;
    result[9] = 0;
    result[10] = 0;
    result[11] = 0;
    result[12] = 0;
    result[13] = 0;
    result[14] = 0;
    result[15] = 0;
    result[16] = 0;
    result[17] = 0;
    result[18] = 0;
    result[19] = 0;
    result[20] = 0;
    result[21] = 0;
    result[22] = 0;
    result[23] = 0;
    result[24] = 0;
    result[25] = 0;
    result[26] = 0;
    result[27] = 0;
    result[28] = 0;
    result[29] = 0;
    result[30] = 0;
    result[31] = 0;
    result[32] = 0;
    result[33] = 0;
    result[34] = 0;
    result[35] = 0;
    result[36] = 0;
    result[37] = 0;
    result[38] = 0;
    result[39] = 0;
    result[40] = 0;
    result[41] = 0;
    result[42] = 0;
    result[43] = 0;
    result[44] = 0;
    result[45] = 0;
    result[46] = 0;
    result[47] = 0;
    result[48] = 0;
    *((_BYTE *)result + 196) = 0;
    v2[2] = result;
    v1 = result;
  }
  v1[2] = "%";
  v1[3] = "%";
  v1[4] = "%";
  v1[5] = "%";
  v1[8] = "A";
  v1[6] = &dword_44D56C;
  v1[7] = &dword_44D56C;
  v1[10] = &dword_44D56C;
  v1[11] = "S";
  v1[12] = "M";
  v1[9] = "P";
  v1[13] = "T";
  v1[14] = "W";
  v1[15] = "T";
  v1[30] = "J";
  v1[16] = "F";
  v1[17] = "S";
  v1[18] = "S";
  v1[31] = "J";
  v1[19] = "M";
  v1[20] = "T";
  v1[21] = "W";
  v1[22] = "T";
  v1[23] = "F";
  v1[24] = "S";
  v1[25] = "J";
  v1[26] = "F";
  v1[27] = "M";
  v1[28] = "A";
  v1[29] = "M";
  v1[32] = "A";
  v1[33] = "S";
  v1[34] = "O";
  v1[35] = "N";
  v1[36] = "D";
  v1[37] = "J";
  v1[38] = "F";
  v1[39] = "M";
  v1[40] = "A";
  v1[41] = "M";
  v1[42] = "J";
  v1[43] = "J";
  v1[44] = "A";
  v1[45] = "S";
  v1[46] = "O";
  v1[47] = "N";
  v1[48] = "D";
  return result;
}


//======================================================================
// sub_3A5A4C
// address: 0x003A5A4C   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall sub_3A5A4C(_DWORD *a1, _DWORD *a2, _BYTE *a3)
{
  _BYTE *v4; // r1
  unsigned int v5; // r3
  int v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r5
  _BYTE *v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r3
  _BYTE *v15; // r2

  *a3 = 1;
  v4 = (_BYTE *)a1[2];
  v5 = a1[3];
  if ( (unsigned int)v4 >= v5 )
  {
    v9 = 0;
    v8 = (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
    if ( v8 == -1 )
      return v9;
    v4 = (_BYTE *)a1[2];
    v5 = a1[3];
  }
  else
  {
    LOBYTE(v8) = *v4;
  }
  v9 = 0;
  while ( 1 )
  {
    v11 = v5 - (_DWORD)v4;
    if ( (int)(v5 - (_DWORD)v4) > 1 )
    {
      v10 = (*(int (__fastcall **)(_DWORD *))(*a2 + 48))(a2);
      a1[2] += v10;
      v9 += v10;
      if ( v11 > v10 )
        break;
      goto LABEL_5;
    }
    v12 = (_BYTE *)a2[5];
    if ( (unsigned int)v12 < a2[6] )
    {
      *v12 = v8;
      ++a2[5];
      goto LABEL_10;
    }
    if ( (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD))(*a2 + 52))(a2, (unsigned __int8)v8, (unsigned __int8)v8) == -1 )
      break;
LABEL_10:
    v13 = a1[2];
    v14 = a1[3];
    ++v9;
    if ( v13 >= v14 )
    {
      if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 40))(a1) == -1 )
        return v9;
      v15 = (_BYTE *)a1[2];
      v14 = a1[3];
    }
    else
    {
      v15 = (_BYTE *)(v13 + 1);
      a1[2] = v15;
    }
    if ( v14 > (unsigned int)v15 )
    {
      LOBYTE(v8) = *v15;
      goto LABEL_6;
    }
LABEL_5:
    v8 = (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
    if ( v8 == -1 )
      return v9;
LABEL_6:
    v4 = (_BYTE *)a1[2];
    v5 = a1[3];
  }
  *a3 = 0;
  return v9;
}


//======================================================================
// sub_3A5B10
// address: 0x003A5B10   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall sub_3A5B10(_DWORD *a1, _DWORD *a2, _BYTE *a3)
{
  int *v4; // r3
  int v7; // r3
  int v8; // r7
  int v9; // r0
  int v10; // r5
  int *v11; // r2
  int *v12; // r3
  int v13; // r0
  int *v14; // r3

  *a3 = 1;
  v4 = (int *)a1[2];
  if ( (unsigned int)v4 >= a1[3] )
    v7 = (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
  else
    v7 = *v4;
  v8 = 0;
  if ( v7 != -1 )
  {
    while ( 1 )
    {
      v10 = (a1[3] - a1[2]) >> 2;
      if ( v10 > 1 )
        break;
      v11 = (int *)a2[5];
      if ( (unsigned int)v11 >= a2[6] )
      {
        if ( (*(int (__fastcall **)(_DWORD *, int))(*a2 + 52))(a2, v7) == -1 )
        {
LABEL_17:
          *a3 = 0;
          return v8;
        }
      }
      else
      {
        *v11 = v7;
        a2[5] = v11 + 1;
      }
      v12 = (int *)a1[2];
      ++v8;
      if ( (unsigned int)v12 >= a1[3] )
      {
        v13 = (*(int (__fastcall **)(_DWORD *))(*a1 + 40))(a1);
      }
      else
      {
        v13 = *v12;
        a1[2] = v12 + 1;
      }
      if ( v13 == -1 )
        return v8;
      v14 = (int *)a1[2];
      if ( (unsigned int)v14 >= a1[3] )
      {
LABEL_6:
        v7 = (*(int (__fastcall **)(_DWORD *))(*a1 + 36))(a1);
        if ( v7 == -1 )
          return v8;
      }
      else
      {
        v7 = *v14;
        if ( v7 == -1 )
          return v8;
      }
    }
    v9 = (*(int (__fastcall **)(_DWORD *))(*a2 + 48))(a2);
    a1[2] += 4 * v9;
    v8 += v9;
    if ( v10 > v9 )
      goto LABEL_17;
    goto LABEL_6;
  }
  return v8;
}


//======================================================================
// sub_3A5BC4
// address: 0x003A5BC4   size: 0x2C (44 bytes)
//======================================================================
int *sub_3A5BC4()
{
  if ( (dword_55FAD0 & 1) == 0 && _cxa_guard_acquire(&dword_55FAD0) != 0 )
  {
    dword_55ED58 = 0;
    _cxa_guard_release(&dword_55FAD0);
  }
  return &dword_55ED58;
}


//======================================================================
// sub_3A5BFC
// address: 0x003A5BFC   size: 0x94C (2380 bytes)
//======================================================================
_DWORD *__fastcall sub_3A5BFC(_DWORD *a1, int a2)
{
  char *v2; // r1
  int v3; // r3
  char *v5; // r0
  char *i; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r4
  int v10; // r7
  int v11; // r4
  int v12; // r5
  int v13; // r4
  int v14; // r4
  int v15; // r4
  int v16; // r4

  *a1 = a2;
  a1[2] = 28;
  v2 = (char *)&unk_55F240;
  v3 = 0;
  a1[4] = 0;
  a1[1] = &unk_55F240;
  v5 = (char *)&unk_55FA60;
  for ( a1[3] = &unk_55FA60; ; v5 = (char *)a1[3] )
  {
    *(_DWORD *)&v5[v3] = 0;
    *(_DWORD *)&v2[v3] = 0;
    v3 += 4;
    if ( v3 == 112 )
      break;
    v2 = (char *)a1[1];
  }
  a1[4] = &dword_55EED8;
  dword_55EED8 = (int)word_55ED4C;
  word_55ED4C[0] = *(_WORD *)sub_3A8868();
  dword_55EEDC = 0;
  for ( i = byte_8; i != (char *)&dword_18; i += 4 )
    *(_DWORD *)&i[a1[4]] = 0;
  sub_3A9498(&unk_55F020, 0, 0, 1);
  sub_3A8BA4(a1, &unk_55FADC, &unk_55F020);
  sub_39D6A4(dword_55EE5C, 1);
  sub_3A8BA4(a1, &unk_55ED08, dword_55EE5C);
  dword_55F9F4 = 1;
  dword_55F9F0 = (int)&off_464830;
  byte_55FA14 = 0;
  byte_55FA15 = 0;
  byte_55FA54 = 0;
  dword_55F9F8 = 0;
  dword_55F9FC = 0;
  byte_55FA00 = 0;
  dword_55FA04 = 0;
  dword_55FA08 = 0;
  dword_55FA0C = 0;
  dword_55FA10 = 0;
  dword_55ED7C = 1;
  dword_55ED78 = (int)&off_464500;
  dword_55ED80 = (int)&dword_55F9F0;
  sub_3BF914(&dword_55ED78, 0);
  sub_3A8BA4(a1, &unk_55ECF4, &dword_55ED78);
  dword_55FAD8 = 1;
  dword_55FAD4 = (int)&off_464550;
  sub_3A8BA4(a1, &unk_55ECF0, &dword_55FAD4);
  dword_55F3E4 = 1;
  dword_55F3E0 = (int)&off_464590;
  v7 = sub_3A8BA4(a1, &unk_55ECEC, &dword_55F3E0);
  dword_55ED28 = 1;
  dword_55ED24 = (int)&off_4644C0;
  dword_55ED2C = sub_3A8844(v7);
  sub_3A8BA4(a1, &unk_55ECD8, &dword_55ED24);
  dword_55F8DC = 1;
  dword_55F8D8 = (int)&off_464810;
  byte_55F908 = 0;
  byte_55F909 = 0;
  byte_55F90A = 0;
  byte_55F90B = 0;
  byte_55F90C = 0;
  byte_55F90D = 0;
  byte_55F90E = 0;
  byte_55F90F = 0;
  byte_55F91B = 0;
  dword_55F8E0 = 0;
  dword_55F8E4 = 0;
  byte_55F8E8 = 0;
  byte_55F8E9 = 0;
  byte_55F8EA = 0;
  dword_55F8EC = 0;
  dword_55F8F0 = 0;
  dword_55F8F4 = 0;
  dword_55F8F8 = 0;
  dword_55F8FC = 0;
  dword_55F900 = 0;
  dword_55F904 = 0;
  dword_55F3C4 = 1;
  dword_55F3C0 = (int)&off_464618;
  dword_55F3C8 = (int)&dword_55F8D8;
  sub_3BFCBC(&dword_55F3C0);
  sub_3A8BA4(a1, &unk_55ED04, &dword_55F3C0);
  dword_55F9A8 = 1;
  dword_55F9A4 = (int)&off_464820;
  byte_55F9D4 = 0;
  byte_55F9D5 = 0;
  byte_55F9D6 = 0;
  byte_55F9D7 = 0;
  byte_55F9D8 = 0;
  byte_55F9D9 = 0;
  byte_55F9DA = 0;
  byte_55F9DB = 0;
  byte_55F9E7 = 0;
  dword_55F9AC = 0;
  dword_55F9B0 = 0;
  byte_55F9B4 = 0;
  byte_55F9B5 = 0;
  byte_55F9B6 = 0;
  dword_55F9B8 = 0;
  dword_55F9BC = 0;
  dword_55F9C0 = 0;
  dword_55F9C4 = 0;
  dword_55F9C8 = 0;
  dword_55F9CC = 0;
  dword_55F9D0 = 0;
  dword_55F3AC = 1;
  dword_55F3A8 = (int)&off_4645E0;
  dword_55F3B0 = (int)&dword_55F9A4;
  sub_3BFBF0(&dword_55F3A8);
  sub_3A8BA4(a1, &unk_55ED00, &dword_55F3A8);
  dword_55F2C8 = 1;
  dword_55F2C4 = (int)&off_464740;
  sub_3A8BA4(a1, &unk_55ECFC, &dword_55F2C4);
  dword_55ED88 = 1;
  dword_55ED84 = (int)&off_464758;
  sub_3A8BA4(a1, &unk_55ECF8, &dword_55ED84);
  dword_55ED98 = 1;
  dword_55ED94 = (int)&off_4645C0;
  dword_55ED9C = 0;
  dword_55EDA0 = 0;
  dword_55EDA4 = 0;
  dword_55EDA8 = 0;
  dword_55EDAC = 0;
  dword_55EDB0 = 0;
  dword_55EDB4 = 0;
  dword_55EDB8 = 0;
  dword_55EDBC = 0;
  dword_55EDC0 = 0;
  dword_55EDC4 = 0;
  dword_55EDC8 = 0;
  dword_55EDCC = 0;
  dword_55EDD0 = 0;
  dword_55EDD4 = 0;
  dword_55EDD8 = 0;
  dword_55EDDC = 0;
  dword_55EDE0 = 0;
  dword_55EDE4 = 0;
  dword_55EDE8 = 0;
  dword_55EDEC = 0;
  dword_55EDF0 = 0;
  dword_55EDF4 = 0;
  dword_55EDF8 = 0;
  dword_55EDFC = 0;
  dword_55EE00 = 0;
  dword_55EE04 = 0;
  dword_55EE08 = 0;
  dword_55EE0C = 0;
  dword_55EE10 = 0;
  dword_55EE14 = 0;
  dword_55EE18 = 0;
  dword_55EE1C = 0;
  dword_55EE20 = 0;
  dword_55EE24 = 0;
  dword_55EE28 = 0;
  dword_55EE2C = 0;
  dword_55EE30 = 0;
  dword_55EE34 = 0;
  dword_55EE38 = 0;
  dword_55EE3C = 0;
  dword_55EE40 = 0;
  dword_55EE44 = 0;
  dword_55EE48 = 0;
  dword_55EE4C = 0;
  dword_55EE50 = 0;
  dword_55EE54 = 0;
  byte_55EE58 = 0;
  sub_394634(dword_55ED10, (int)&dword_55ED94, 1);
  sub_3A8BA4(a1, &unk_55ECE8, dword_55ED10);
  dword_55F9EC = 1;
  dword_55F9E8 = (int)&off_4647A0;
  sub_3A8BA4(a1, &unk_55ECE0, &dword_55F9E8);
  dword_55F3A4 = 1;
  dword_55F3A0 = (int)&off_464770;
  sub_3A8BA4(a1, &unk_55ECE4, &dword_55F3A0);
  sub_394A84(dword_55ED68, 1);
  sub_3A8BA4(a1, &unk_55ECDC, dword_55ED68);
  sub_3A7D8C(&unk_55F3E8, 1);
  sub_3A8BA4(a1, &unk_55FAE0, &unk_55F3E8);
  sub_39D704(dword_55F998, 1);
  sub_3A8BA4(a1, &unk_55ED0C, dword_55F998);
  dword_55EEFC = 1;
  dword_55EEF8 = (int)&off_465728;
  byte_55F01C = 0;
  dword_55EF00 = 0;
  dword_55EF04 = 0;
  byte_55EF08 = 0;
  dword_55EF0C = 0;
  dword_55EF10 = 0;
  dword_55EF14 = 0;
  dword_55EF18 = 0;
  dword_55EF1C = 0;
  dword_55EF20 = 0;
  dword_55ED60 = 1;
  dword_55ED5C = (int)&off_4653F8;
  dword_55ED64 = (int)&dword_55EEF8;
  sub_3BF9D0(&dword_55ED5C);
  sub_3A8BA4(a1, &unk_55FB50, &dword_55ED5C);
  dword_55F2D0 = 1;
  dword_55F2CC = (int)&off_465448;
  sub_3A8BA4(a1, &unk_55FB4C, &dword_55F2CC);
  dword_55ED90 = 1;
  dword_55ED8C = (int)&off_465488;
  v8 = sub_3A8BA4(a1, &unk_55FB48, &dword_55ED8C);
  dword_55F3B8 = 1;
  dword_55F3B4 = (int)&off_465378;
  dword_55F3BC = sub_3A8844(v8);
  sub_3A8BA4(a1, &unk_55FB34, &dword_55F3B4);
  dword_55EE6C = 1;
  dword_55EE68 = (int)&off_465708;
  byte_55EEA0 = 0;
  byte_55EEA1 = 0;
  byte_55EEA2 = 0;
  byte_55EEA3 = 0;
  byte_55EEA4 = 0;
  byte_55EEA5 = 0;
  byte_55EEA6 = 0;
  byte_55EEA7 = 0;
  byte_55EED4 = 0;
  dword_55EE70 = 0;
  dword_55EE74 = 0;
  byte_55EE78 = 0;
  dword_55EE7C = 0;
  dword_55EE80 = 0;
  dword_55EE84 = 0;
  dword_55EE88 = 0;
  dword_55EE8C = 0;
  dword_55EE90 = 0;
  dword_55EE94 = 0;
  dword_55EE98 = 0;
  dword_55EE9C = 0;
  dword_55F990 = 1;
  dword_55F98C = (int)&off_465510;
  dword_55F994 = (int)&dword_55EE68;
  sub_3BFE58();
  sub_3A8BA4(a1, &unk_55FB60, &dword_55F98C);
  dword_55F920 = 1;
  dword_55F91C = (int)&off_465718;
  byte_55F954 = 0;
  byte_55F955 = 0;
  byte_55F956 = 0;
  byte_55F957 = 0;
  byte_55F958 = 0;
  byte_55F959 = 0;
  byte_55F95A = 0;
  byte_55F95B = 0;
  byte_55F988 = 0;
  dword_55F924 = 0;
  dword_55F928 = 0;
  byte_55F92C = 0;
  dword_55F930 = 0;
  dword_55F934 = 0;
  dword_55F938 = 0;
  dword_55F93C = 0;
  dword_55F940 = 0;
  dword_55F944 = 0;
  dword_55F948 = 0;
  dword_55F94C = 0;
  dword_55F950 = 0;
  dword_55F3D8 = 1;
  dword_55F3D4 = (int)&off_4654D8;
  dword_55F3DC = (int)&dword_55F91C;
  sub_3BFD88();
  sub_3A8BA4(a1, &unk_55FB5C, &dword_55F3D4);
  dword_55ED34 = 1;
  dword_55ED30 = (int)&off_465638;
  sub_3A8BA4(a1, &unk_55FB58, &dword_55ED30);
  dword_55F3D0 = 1;
  dword_55F3CC = (int)&off_465650;
  sub_3A8BA4(a1, &unk_55FB54, &dword_55F3CC);
  dword_55F2D8 = 1;
  dword_55F2D4 = (int)&off_4654B8;
  dword_55F2DC = 0;
  dword_55F2E0 = 0;
  dword_55F2E4 = 0;
  dword_55F2E8 = 0;
  dword_55F2EC = 0;
  dword_55F2F0 = 0;
  dword_55F2F4 = 0;
  dword_55F2F8 = 0;
  dword_55F2FC = 0;
  dword_55F300 = 0;
  dword_55F304 = 0;
  dword_55F308 = 0;
  dword_55F30C = 0;
  dword_55F310 = 0;
  dword_55F314 = 0;
  dword_55F318 = 0;
  dword_55F31C = 0;
  dword_55F320 = 0;
  dword_55F324 = 0;
  dword_55F328 = 0;
  dword_55F32C = 0;
  dword_55F330 = 0;
  dword_55F334 = 0;
  dword_55F338 = 0;
  dword_55F33C = 0;
  dword_55F340 = 0;
  dword_55F344 = 0;
  dword_55F348 = 0;
  dword_55F34C = 0;
  dword_55F350 = 0;
  dword_55F354 = 0;
  dword_55F358 = 0;
  dword_55F35C = 0;
  dword_55F360 = 0;
  dword_55F364 = 0;
  dword_55F368 = 0;
  dword_55F36C = 0;
  dword_55F370 = 0;
  dword_55F374 = 0;
  dword_55F378 = 0;
  dword_55F37C = 0;
  dword_55F380 = 0;
  dword_55F384 = 0;
  dword_55F388 = 0;
  dword_55F38C = 0;
  dword_55F390 = 0;
  dword_55F394 = 0;
  byte_55F398 = 0;
  sub_3AAA48(&unk_55F2B0);
  sub_3A8BA4(a1, &unk_55FB44, &unk_55F2B0);
  dword_55EEF4 = 1;
  dword_55EEF0 = (int)&off_465698;
  sub_3A8BA4(a1, &unk_55FB3C, &dword_55EEF0);
  dword_55FA5C = 1;
  dword_55FA58 = (int)&off_465668;
  sub_3A8BA4(a1, &unk_55FB40, &dword_55FA58);
  sub_3AAE94(&unk_55F8C8, 1);
  sub_3A8BA4(a1, &unk_55FB38, &unk_55F8C8);
  v9 = a1[3];
  *(_DWORD *)(4 * sub_3A8B84(&unk_55ECF4) + v9) = &dword_55F9F0;
  v10 = a1[3];
  *(_DWORD *)(4 * sub_3A8B84(&unk_55ED04) + v10) = &dword_55F8D8;
  v11 = a1[3];
  *(_DWORD *)(4 * sub_3A8B84(&unk_55ED00) + v11) = &dword_55F9A4;
  v12 = a1[3];
  *(_DWORD *)(4 * sub_3A8B84(&unk_55ECE8) + v12) = &dword_55ED94;
  v13 = a1[3];
  *(_DWORD *)(4 * sub_3A8B84(&unk_55FB50) + v13) = &dword_55EEF8;
  v14 = a1[3];
  *(_DWORD *)(4 * sub_3A8B84(&unk_55FB60) + v14) = &dword_55EE68;
  v15 = a1[3];
  *(_DWORD *)(4 * sub_3A8B84(&unk_55FB5C) + v15) = &dword_55F91C;
  v16 = a1[3];
  *(_DWORD *)(4 * sub_3A8B84(&unk_55FB44) + v16) = &dword_55F2D4;
  return a1;
}


//======================================================================
// sub_3A6610
// address: 0x003A6610   size: 0x20 (32 bytes)
//======================================================================
_DWORD *sub_3A6610()
{
  _DWORD *result; // r0

  result = sub_3A5BFC(dword_55ED38, 2);
  dword_55FAF8 = (int)dword_55ED38;
  dword_55FAFC = (int)dword_55ED38;
  return result;
}


//======================================================================
// sub_3A663C
// address: 0x003A663C   size: 0x36 (54 bytes)
//======================================================================
_DWORD *sub_3A663C()
{
  _DWORD *result; // r0

  result = (_DWORD *)j_pthread_once(&dword_55FAF4, (void (*)(void))sub_3A6610);
  if ( dword_55FAF8 == 0 )
  {
    result = sub_3A5BFC(dword_55ED38, 2);
    dword_55FAF8 = (int)dword_55ED38;
    dword_55FAFC = (int)dword_55ED38;
  }
  return result;
}


//======================================================================
// sub_3A6688
// address: 0x003A6688   size: 0x68 (104 bytes)
//======================================================================
_DWORD *__fastcall sub_3A6688(_DWORD *a1)
{
  int v2; // r0
  pthread_mutex_t *v3; // r6

  *a1 = 0;
  sub_3A663C();
  v2 = dword_55FAFC;
  *a1 = dword_55FAFC;
  if ( v2 == dword_55FAF8 )
  {
    sub_3C82FC(v2, 1);
  }
  else
  {
    v3 = (pthread_mutex_t *)sub_3A5BC4();
    if ( j_pthread_mutex_lock(v3) != 0 )
      sub_38F058();
    sub_3C82FC(dword_55FAFC, 1);
    *a1 = dword_55FAFC;
    if ( j_pthread_mutex_unlock(v3) != 0 )
      sub_38F080();
  }
  return a1;
}


//======================================================================
// sub_3A66F8
// address: 0x003A66F8   size: 0x1C (28 bytes)
//======================================================================
void *sub_3A66F8()
{
  sub_3A663C();
  sub_3A850C(&unk_55F39C, dword_55FAF8);
  return &unk_55F39C;
}


//======================================================================
// sub_3A671C
// address: 0x003A671C   size: 0xAC (172 bytes)
//======================================================================
int __fastcall sub_3A671C(int a1, _DWORD *a2)
{
  pthread_mutex_t *v4; // r7
  int v5; // r8
  char *v6; // r4
  int v8; // [sp+0h] [bp-8h] BYREF
  char *locale; // [sp+4h] [bp-4h] BYREF

  sub_3A663C();
  v4 = (pthread_mutex_t *)sub_3A5BC4();
  if ( j_pthread_mutex_lock(v4) != 0 )
    sub_38F058();
  v5 = dword_55FAFC;
  sub_3C82FC(*a2, 1);
  dword_55FAFC = *a2;
  sub_3A8510(&locale, a2);
  if ( sub_3BDD5C((int)&locale, "*") != 0 )
    j_setlocale(6, locale);
  v6 = locale - 12;
  if ( locale - 12 != (char *)&dword_55FB7C && sub_3C82FC(locale - 4, -1) <= 0 )
    sub_3BDF60(v6, &v8);
  if ( j_pthread_mutex_unlock(v4) != 0 )
    sub_38F080();
  sub_3A850C(a1, v5);
  return a1;
}


//======================================================================
// sub_3A67F0
// address: 0x003A67F0   size: 0xB0 (176 bytes)
//======================================================================
const char *__fastcall sub_3A67F0(char a1)
{
  const char *result; // r0

  switch ( a1 & 0x3D )
  {
    case 1:
    case 0x11:
      result = "a";
      break;
    case 5:
      result = "ab";
      break;
    case 8:
      result = "r";
      break;
    case 9:
      result = "a+";
      break;
    case 0xC:
      result = "rb";
      break;
    case 0xD:
      result = "a+b";
      break;
    case 0x10:
    case 0x30:
      result = "w";
      break;
    case 0x14:
      result = "wb";
      break;
    case 0x15:
      result = "ab";
      break;
    case 0x18:
      result = "r+";
      break;
    case 0x19:
      result = "a+";
      break;
    case 0x1C:
      result = "r+b";
      break;
    case 0x1D:
      result = "a+b";
      break;
    case 0x34:
      result = "wb";
      break;
    case 0x38:
      result = "w+";
      break;
    case 0x3C:
      result = "w+b";
      break;
    default:
      result = nullptr;
      break;
  }
  return result;
}


//======================================================================
// sub_3A68E0
// address: 0x003A68E0   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3A68E0(int fd, char *buf, size_t n)
{
  size_t v6; // r4
  ssize_t v7; // r0

  v6 = n;
  while ( 1 )
  {
    v7 = j_write(fd, buf, v6);
    if ( v7 != -1 )
      break;
LABEL_5:
    if ( *(_DWORD *)j___errno() != 4 )
      return n - v6;
  }
  while ( 1 )
  {
    v6 -= v7;
    if ( v6 == 0 )
      return n - v6;
    buf += v7;
    v7 = j_write(fd, buf, v6);
    if ( v7 == -1 )
      goto LABEL_5;
  }
}


//======================================================================
// sub_3A691C
// address: 0x003A691C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3A691C(int result)
{
  *(_DWORD *)result = 0;
  *(_BYTE *)(result + 4) = 0;
  return result;
}


//======================================================================
// sub_3A6924
// address: 0x003A6924   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_3A6924(int a1, int a2)
{
  if ( *(_DWORD *)a1 != 0 || a2 == 0 )
    return 0;
  *(_DWORD *)j___errno() = 0;
  while ( j_fflush(*(FILE **)a1) != 0 )
  {
    if ( *(_DWORD *)j___errno() != 4 )
      return 0;
  }
  *(_BYTE *)(a1 + 4) = 0;
  *(_DWORD *)a1 = a2;
  return a1;
}


//======================================================================
// sub_3A695C
// address: 0x003A695C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_3A695C(int a1, int a2, char a3)
{
  const char *v5; // r1
  FILE *v7; // r0

  v5 = sub_3A67F0(a3);
  if ( v5 == nullptr )
    return 0;
  if ( *(_DWORD *)a1 != 0 )
    return 0;
  v7 = j_fdopen(a2, v5);
  *(_DWORD *)a1 = v7;
  if ( v7 == nullptr )
    return 0;
  *(_BYTE *)(a1 + 4) = 1;
  if ( a2 == 0 )
    j_setvbuf(v7, nullptr, 2, 0);
  return a1;
}


//======================================================================
// sub_3A69A8
// address: 0x003A69A8   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3A69A8(int a1, const char *a2, char a3)
{
  const char *v5; // r1
  FILE *v7; // r0

  v5 = sub_3A67F0(a3);
  if ( v5 == nullptr )
    return 0;
  if ( *(_DWORD *)a1 != 0 )
    return 0;
  v7 = j_fopen(a2, v5);
  *(_DWORD *)a1 = v7;
  if ( v7 == nullptr )
    return 0;
  *(_BYTE *)(a1 + 4) = 1;
  return a1;
}


//======================================================================
// sub_3A69D8
// address: 0x003A69D8   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall sub_3A69D8(_DWORD *a1)
{
  return *a1 != 0;
}


//======================================================================
// sub_3A69E0
// address: 0x003A69E0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3A69E0(int a1)
{
  return *(__int16 *)(*(_DWORD *)a1 + 14);
}


//======================================================================
// sub_3A69E8
// address: 0x003A69E8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A69E8(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3A69EC
// address: 0x003A69EC   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_3A69EC(int a1)
{
  if ( *(_DWORD *)a1 == 0 )
    return 0;
  if ( *(_BYTE *)(a1 + 4) != 0 )
  {
    *(_DWORD *)j___errno() = 0;
    while ( j_fclose(*(FILE **)a1) != 0 )
    {
      if ( *(_DWORD *)j___errno() != 4 )
      {
        *(_DWORD *)a1 = 0;
        return 0;
      }
    }
    *(_DWORD *)a1 = 0;
  }
  else
  {
    *(_DWORD *)a1 = *(unsigned __int8 *)(a1 + 4);
  }
  return a1;
}


//======================================================================
// sub_3A6A2C
// address: 0x003A6A2C   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_3A6A2C(int a1)
{
  sub_3A69EC(a1);
  return a1;
}


//======================================================================
// sub_3A6A38
// address: 0x003A6A38   size: 0x2C (44 bytes)
//======================================================================
ssize_t __fastcall sub_3A6A38(int a1, void *buf, size_t nbytes)
{
  ssize_t v6; // r4

  do
    v6 = j_read(*(__int16 *)(*(_DWORD *)a1 + 14), buf, nbytes);
  while ( v6 == -1 && *(_DWORD *)j___errno() == 4 );
  return v6;
}


//======================================================================
// sub_3A6A64
// address: 0x003A6A64   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3A6A64(int a1, char *a2, size_t a3)
{
  return sub_3A68E0(*(__int16 *)(*(_DWORD *)a1 + 14), a2, a3);
}


//======================================================================
// sub_3A6A74
// address: 0x003A6A74   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_3A6A74(int a1, char *a2, size_t a3, int a4, int a5)
{
  size_t v6; // r6
  int v7; // r7
  size_t v8; // r9
  size_t v10; // r5
  ssize_t v11; // r0
  struct iovec v13; // [sp+0h] [bp-10h] BYREF
  int v14; // [sp+8h] [bp-8h]
  int v15; // [sp+Ch] [bp-4h]

  v6 = a3;
  v7 = *(__int16 *)(*(_DWORD *)a1 + 14);
  v8 = a5 + a3;
  v10 = a5 + a3;
  v14 = a4;
  v15 = a5;
  while ( 1 )
  {
    while ( 1 )
    {
      v13.iov_base = a2;
      v13.iov_len = v6;
      v11 = j_writev(v7, &v13, 2);
      if ( v11 != -1 )
        break;
      if ( *(_DWORD *)j___errno() != 4 )
        return v8 - v10;
    }
    v10 -= v11;
    if ( v10 == 0 )
      return v8 - v10;
    if ( (int)(v11 - v6) >= 0 )
      break;
    a2 += v11;
    v6 -= v11;
  }
  v10 -= sub_3A68E0(v7, (char *)(a4 + v11 - v6), a5 - (v11 - v6));
  return v8 - v10;
}


//======================================================================
// sub_3A6AF0
// address: 0x003A6AF0   size: 0x28 (40 bytes)
//======================================================================
__int64 __fastcall sub_3A6AF0(int a1, __int64 offset, int whence)
{
  if ( (unsigned __int64)(offset + 0x80000000LL) >> 32 != 0 )
    return -1;
  else
    return j_lseek(*(__int16 *)(*(_DWORD *)a1 + 14), offset, whence);
}


//======================================================================
// sub_3A6B30
// address: 0x003A6B30   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3A6B30(FILE **a1)
{
  return j_fflush(*a1);
}


//======================================================================
// sub_3A6B3C
// address: 0x003A6B3C   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_3A6B3C(int a1)
{
  int v2; // r0
  int result; // r0
  __blksize_t st_blksize; // r5
  int v5; // [sp+4h] [bp-78h] BYREF
  struct pollfd fds; // [sp+8h] [bp-74h] BYREF
  struct stat buf; // [sp+10h] [bp-6Ch] BYREF

  v2 = *(__int16 *)(*(_DWORD *)a1 + 14);
  v5 = 0;
  if ( j_ioctl(v2, 0x541Bu, &v5) != 0 || (result = v5, v5 < 0) )
  {
    fds.fd = *(__int16 *)(*(_DWORD *)a1 + 14);
    fds.events = 1;
    if ( j_poll(&fds, 1u, 0) > 0
      && j_fstat(*(__int16 *)(*(_DWORD *)a1 + 14), &buf) == 0
      && (buf.st_mode & 0xF000) == 0x8000 )
    {
      st_blksize = buf.st_blksize;
      return st_blksize - j_lseek(*(__int16 *)(*(_DWORD *)a1 + 14), 0, 1);
    }
    else
    {
      return 0;
    }
  }
  return result;
}


//======================================================================
// sub_3A6BBC
// address: 0x003A6BBC   size: 0x182 (386 bytes)
//======================================================================
_DWORD *__fastcall sub_3A6BBC(_DWORD *a1, _BYTE *a2, int a3, int a4)
{
  int v8; // r5
  unsigned __int8 *v9; // r3
  int v10; // r4
  _BYTE *v11; // r6
  signed int v12; // r4
  _BYTE *v13; // r0
  unsigned __int8 *v14; // r6
  unsigned int v15; // r1
  unsigned int v17; // r3
  unsigned int v18; // r2
  unsigned int v19; // r3
  unsigned __int8 *v20; // r3
  int v21; // r1
  int v22; // r0
  char v23[4]; // [sp+4h] [bp-4h] BYREF

  a1[1] = 0;
  sub_39DA00(v23, a1, 1);
  if ( v23[0] == 0 )
  {
    v21 = 0;
    goto LABEL_18;
  }
  v8 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  v9 = *(unsigned __int8 **)(v8 + 8);
  if ( (unsigned int)v9 < *(_DWORD *)(v8 + 12) )
    v22 = *v9;
  else
    v22 = sub_13B824(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120));
  v10 = a1[1];
  while ( v10 + 1 < a3 )
  {
    if ( v22 == -1 )
      goto LABEL_17;
    if ( v22 == a4 )
      goto LABEL_26;
    v11 = *(_BYTE **)(v8 + 8);
    v12 = a3 - v10 - 1;
    if ( v12 > *(_DWORD *)(v8 + 12) - (int)v11 )
      v12 = *(_DWORD *)(v8 + 12) - (_DWORD)v11;
    if ( v12 <= 1 )
    {
      *a2 = v22;
      v18 = *(_DWORD *)(v8 + 12);
      ++a1[1];
      v19 = *(_DWORD *)(v8 + 8);
      if ( v19 >= v18 )
      {
        v22 = sub_13B830(v8);
        if ( v22 == -1 )
          goto LABEL_33;
        v20 = *(unsigned __int8 **)(v8 + 8);
        v18 = *(_DWORD *)(v8 + 12);
      }
      else
      {
        v20 = (unsigned __int8 *)(v19 + 1);
        *(_DWORD *)(v8 + 8) = v20;
      }
      if ( v18 <= (unsigned int)v20 )
        v22 = sub_13B824(v8);
      else
        v22 = *v20;
LABEL_33:
      v10 = a1[1];
      ++a2;
    }
    else
    {
      v13 = j_memchr(*(const void **)(v8 + 8), a4, v12);
      if ( v13 != nullptr )
        v12 = v13 - v11;
      j_memcpy(a2, v11, v12);
      v14 = (unsigned __int8 *)(*(_DWORD *)(v8 + 8) + v12);
      v15 = *(_DWORD *)(v8 + 12);
      a2 += v12;
      v10 = v12 + a1[1];
      *(_DWORD *)(v8 + 8) = v14;
      a1[1] = v10;
      if ( (unsigned int)v14 >= v15 )
      {
        v22 = (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 36))(v8);
        v10 = a1[1];
      }
      else
      {
        v22 = *v14;
      }
    }
  }
  if ( v22 == -1 )
  {
LABEL_17:
    v21 = 2;
    goto LABEL_18;
  }
  v21 = 4;
  if ( v22 == a4 )
  {
LABEL_26:
    a1[1] = v10 + 1;
    v17 = *(_DWORD *)(v8 + 8);
    if ( v17 >= *(_DWORD *)(v8 + 12) )
      sub_13B830(v8);
    else
      *(_DWORD *)(v8 + 8) = v17 + 1;
    v21 = 0;
  }
LABEL_18:
  if ( a3 > 0 )
    *a2 = 0;
  if ( a1[1] == 0 )
  {
    v21 |= 4u;
    goto LABEL_22;
  }
  if ( v21 != 0 )
LABEL_22:
    sub_3914B0(
      (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
      v21 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  return a1;
}


//======================================================================
// sub_3A6D84
// address: 0x003A6D84   size: 0x17C (380 bytes)
//======================================================================
int __fastcall sub_3A6D84(_DWORD *a1, int a2, int a3)
{
  int v6; // r9
  unsigned __int8 *v7; // r3
  signed int v8; // r5
  unsigned int v9; // r7
  unsigned int v10; // r8
  signed int v11; // r4
  void *v12; // r0
  unsigned __int8 *v13; // r7
  int v14; // r3
  unsigned int v15; // r3
  unsigned __int8 *v16; // r7
  unsigned int v17; // r3
  int v19; // r0
  int v20; // [sp+0h] [bp-14h]
  _BYTE v21[8]; // [sp+Ch] [bp-8h] BYREF

  if ( a3 == -1 )
    return sub_3BF134(a1, a2);
  a1[1] = 0;
  sub_39DA00(v21, a1, 1);
  if ( a2 > 0 && v21[0] != 0 )
  {
    v6 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    v7 = *(unsigned __int8 **)(v6 + 8);
    if ( (unsigned int)v7 < *(_DWORD *)(v6 + 12) )
      v19 = *v7;
    else
      v19 = sub_13B824(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120));
    v8 = a1[1];
    v20 = 0;
LABEL_9:
    while ( 2 )
    {
      while ( 2 )
      {
        if ( a2 > v8 )
        {
          while ( 1 )
          {
            if ( v19 == -1 || a3 == v19 )
              goto LABEL_23;
            v9 = *(_DWORD *)(v6 + 8);
            v10 = *(_DWORD *)(v6 + 12);
            v11 = a2 - v8;
            if ( a2 - v8 > (int)(v10 - v9) )
              v11 = v10 - v9;
            if ( v11 <= 1 )
              break;
            v12 = j_memchr(*(const void **)(v6 + 8), (unsigned __int8)a3, v11);
            if ( v12 != nullptr )
              v11 = (signed int)v12 - v9;
            v13 = (unsigned __int8 *)(v9 + v11);
            v8 += v11;
            *(_DWORD *)(v6 + 8) = v13;
            a1[1] = v8;
            if ( v10 <= (unsigned int)v13 )
            {
              v19 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 36))(v6);
              v8 = a1[1];
              goto LABEL_9;
            }
            v19 = *v13;
            if ( a2 <= v8 )
              goto LABEL_19;
          }
          a1[1] = v8 + 1;
          if ( v10 <= v9 )
          {
            v19 = sub_13B830(v6);
            if ( v19 == -1 )
            {
LABEL_37:
              v8 = a1[1];
              continue;
            }
            v16 = *(unsigned __int8 **)(v6 + 8);
            v17 = *(_DWORD *)(v6 + 12);
          }
          else
          {
            v16 = (unsigned __int8 *)(v9 + 1);
            v17 = v10;
            *(_DWORD *)(v6 + 8) = v16;
          }
          if ( (unsigned int)v16 >= v17 )
            v19 = sub_13B824(v6);
          else
            v19 = *v16;
          goto LABEL_37;
        }
        break;
      }
LABEL_19:
      if ( a2 == 0x7FFFFFFF && v19 != -1 && a3 != v19 )
      {
        v8 = 0x80000000;
        a1[1] = 0x80000000;
        v20 = 1;
        continue;
      }
      break;
    }
LABEL_23:
    if ( v20 != 0 )
      a1[1] = 0x7FFFFFFF;
    if ( v19 == -1 )
    {
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
    }
    else if ( a3 == v19 )
    {
      v14 = a1[1];
      if ( v14 != 0x7FFFFFFF )
        a1[1] = v14 + 1;
      v15 = *(_DWORD *)(v6 + 8);
      if ( v15 >= *(_DWORD *)(v6 + 12) )
        sub_13B830(v6);
      else
        *(_DWORD *)(v6 + 8) = v15 + 1;
    }
  }
  return (int)a1;
}


//======================================================================
// sub_3A6F64
// address: 0x003A6F64   size: 0x1F2 (498 bytes)
//======================================================================
int *__fastcall sub_3A6F64(int *a1, _BYTE *a2)
{
  char *v4; // r1
  _DWORD *v5; // r10
  int v6; // r5
  unsigned __int8 *v7; // r3
  int v8; // r9
  int v9; // r7
  int v10; // r3
  unsigned __int8 *v11; // r1
  int v12; // r2
  unsigned __int8 *v13; // r4
  size_t v14; // r4
  unsigned int v15; // r1
  unsigned __int8 *v16; // r3
  unsigned int v18; // r3
  unsigned int v19; // r2
  unsigned __int8 *v20; // r3
  int v21; // r2
  int v22; // r3
  int v23; // r0
  int v24; // [sp+4h] [bp-10h]
  char v25[4]; // [sp+8h] [bp-Ch] BYREF
  _BYTE v26[8]; // [sp+Ch] [bp-8h] BYREF

  sub_39DA00(v25, a1, 0);
  if ( v25[0] == 0 )
  {
    v21 = *a1;
    v22 = 4;
    goto LABEL_32;
  }
  v4 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  v24 = *((_DWORD *)v4 + 2);
  if ( v24 <= 0 )
    v24 = 0x7FFFFFFF;
  sub_3A84F8(v26, v4 + 108);
  v5 = sub_394CF0((int)v26);
  sub_3A8980(v26);
  v6 = *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  v7 = *(unsigned __int8 **)(v6 + 8);
  if ( (unsigned int)v7 < *(_DWORD *)(v6 + 12) )
    v23 = *v7;
  else
    v23 = sub_13B824(*(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120));
  v8 = v24 - 1;
  v9 = 0;
LABEL_9:
  while ( v9 < v8 )
  {
    while ( 1 )
    {
      if ( v23 == -1 )
        goto LABEL_26;
      v10 = v5[6];
      if ( (*(_BYTE *)(v10 + (unsigned __int8)v23) & 8) != 0 )
        goto LABEL_22;
      v11 = *(unsigned __int8 **)(v6 + 8);
      v12 = v24 - v9 - 1;
      if ( v12 > *(_DWORD *)(v6 + 12) - (int)v11 )
        v12 = *(_DWORD *)(v6 + 12) - (_DWORD)v11;
      if ( v12 <= 1 )
        break;
      v13 = v11 + 1;
      if ( v11 + 1 < &v11[v12] && (*(_BYTE *)(v10 + v11[1]) & 8) == 0 )
      {
        do
          ++v13;
        while ( v13 != &v11[v12] && (*(_BYTE *)(v10 + *v13) & 8) == 0 );
      }
      v14 = v13 - v11;
      j_memcpy(a2, v11, v14);
      v15 = *(_DWORD *)(v6 + 12);
      v16 = (unsigned __int8 *)(*(_DWORD *)(v6 + 8) + v14);
      a2 += v14;
      *(_DWORD *)(v6 + 8) = v16;
      v9 += v14;
      if ( (unsigned int)v16 >= v15 )
      {
        v23 = sub_13B824(v6);
        goto LABEL_9;
      }
      v23 = *v16;
      if ( v9 >= v8 )
        goto LABEL_21;
    }
    *a2 = v23;
    v18 = *(_DWORD *)(v6 + 8);
    v19 = *(_DWORD *)(v6 + 12);
    ++v9;
    if ( v18 >= v19 )
    {
      v23 = sub_13B830(v6);
      if ( v23 == -1 )
        goto LABEL_31;
      v20 = *(unsigned __int8 **)(v6 + 8);
      v19 = *(_DWORD *)(v6 + 12);
    }
    else
    {
      v20 = (unsigned __int8 *)(v18 + 1);
      *(_DWORD *)(v6 + 8) = v20;
    }
    if ( (unsigned int)v20 < v19 )
    {
      v23 = *v20;
LABEL_31:
      ++a2;
      continue;
    }
    v23 = sub_13B824(v6);
    ++a2;
  }
LABEL_21:
  if ( v23 == -1 )
LABEL_26:
    v22 = 2;
  else
LABEL_22:
    v22 = 0;
  *a2 = 0;
  v21 = *a1;
  *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 8) = 0;
  if ( v9 == 0 )
  {
    v22 |= 4u;
    goto LABEL_32;
  }
  if ( v22 != 0 )
LABEL_32:
    sub_3914B0((int *)((char *)a1 + *(_DWORD *)(v21 - 12)), *(int *)((char *)a1 + *(_DWORD *)(v21 - 12) + 20) | v22);
  return a1;
}


//======================================================================
// sub_3A7174
// address: 0x003A7174   size: 0x26E (622 bytes)
//======================================================================
int *__fastcall sub_3A7174(int *a1, int *a2)
{
  int v4; // r2
  int v5; // r3
  char *v7; // r1
  _DWORD *v8; // r9
  int v9; // r6
  unsigned int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r11
  unsigned __int8 *v14; // r3
  unsigned __int8 *v15; // r7
  unsigned int v16; // r2
  unsigned __int8 *v17; // r3
  int v18; // r3
  int v19; // r2
  int v20; // r11
  int v21; // r2
  int *v22; // r1
  unsigned int v23; // r3
  unsigned int v24; // r2
  unsigned int v25; // r8
  int v26; // r0
  char v27; // [sp+0h] [bp-14h]
  unsigned int v28; // [sp+4h] [bp-10h]
  char v29[4]; // [sp+8h] [bp-Ch] BYREF
  _BYTE v30[8]; // [sp+Ch] [bp-8h] BYREF

  sub_39DA00(v29, a1, 0);
  if ( v29[0] == 0 )
  {
    v4 = *a1;
    v5 = 4;
    goto LABEL_3;
  }
  sub_3BDFA4(a2, 0, *(_DWORD *)(*a2 - 12), 0);
  v7 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  if ( *((int *)v7 + 2) > 0 )
    v25 = *((_DWORD *)v7 + 2);
  else
    v25 = 1073741820;
  sub_3A84F8(v30, v7 + 108);
  v8 = sub_394CF0((int)v30);
  sub_3A8980(v30);
  v9 = *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  v10 = *(_DWORD *)(v9 + 8);
  if ( v10 < *(_DWORD *)(v9 + 12) )
  {
    LOBYTE(v10) = *(_BYTE *)v10;
  }
  else
  {
    v26 = sub_13B824(*(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120));
    LOBYTE(v10) = v26;
    v28 = 0;
    if ( v26 == -1 )
    {
      v5 = 2;
      goto LABEL_25;
    }
  }
  v11 = v8[6];
  v28 = 0;
  if ( (*(_BYTE *)(v11 + (unsigned __int8)v10) & 8) != 0 )
  {
LABEL_24:
    v5 = 0;
    goto LABEL_25;
  }
  while ( 1 )
  {
    v12 = *(_DWORD *)(v9 + 8);
    v13 = v25 - v28;
    if ( (int)(v25 - v28) > *(_DWORD *)(v9 + 12) - v12 )
      v13 = *(_DWORD *)(v9 + 12) - v12;
    if ( v13 > 1 )
    {
      v14 = (unsigned __int8 *)(v12 + 1);
      if ( v12 + 1 < (unsigned int)(v12 + v13) && (*(_BYTE *)(v11 + *(unsigned __int8 *)(v12 + 1)) & 8) == 0 )
      {
        do
          ++v14;
        while ( v14 != (unsigned __int8 *)(v12 + v13) && (*(_BYTE *)(v11 + *v14) & 8) == 0 );
      }
      v15 = &v14[-v12];
      sub_3BE898(a2, v12, &v14[-v12]);
      v16 = *(_DWORD *)(v9 + 12);
      v17 = &v15[*(_DWORD *)(v9 + 8)];
      *(_DWORD *)(v9 + 8) = v17;
      v28 += (unsigned int)v15;
      if ( (unsigned int)v17 < v16 )
      {
LABEL_20:
        v10 = *v17;
        goto LABEL_21;
      }
      goto LABEL_36;
    }
    v27 = v10;
    v18 = *a2;
    v19 = *(_DWORD *)(*a2 - 12);
    v20 = v19 + 1;
    if ( (unsigned int)(v19 + 1) > *(_DWORD *)(*a2 - 8) || *(int *)(v18 - 4) > 0 )
    {
      sub_3BE700(a2, v19 + 1);
      v18 = *a2;
      v19 = *(_DWORD *)(*a2 - 12);
    }
    *(_BYTE *)(v18 + v19) = v27;
    v21 = *a2;
    v22 = (int *)(*a2 - 12);
    if ( v22 != &dword_55FB7C )
    {
      *(_DWORD *)(v21 - 4) = 0;
      *v22 = v20;
      *(_BYTE *)(v21 + v20) = 0;
    }
    v23 = *(_DWORD *)(v9 + 8);
    v24 = *(_DWORD *)(v9 + 12);
    ++v28;
    if ( v23 < v24 )
    {
      v17 = (unsigned __int8 *)(v23 + 1);
      *(_DWORD *)(v9 + 8) = v17;
LABEL_35:
      if ( (unsigned int)v17 < v24 )
        goto LABEL_20;
LABEL_36:
      v10 = sub_13B824(v9);
      goto LABEL_21;
    }
    v10 = sub_13B830(v9);
    if ( v10 != -1 )
    {
      v17 = *(unsigned __int8 **)(v9 + 8);
      v24 = *(_DWORD *)(v9 + 12);
      goto LABEL_35;
    }
LABEL_21:
    if ( v25 <= v28 )
      break;
    if ( v10 == -1 )
      goto LABEL_38;
    v11 = v8[6];
    if ( (*(_BYTE *)(v11 + (unsigned __int8)v10) & 8) != 0 )
      goto LABEL_24;
  }
  if ( v10 != -1 )
    goto LABEL_24;
LABEL_38:
  v5 = 2;
LABEL_25:
  v4 = *a1;
  *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 8) = 0;
  if ( v28 == 0 )
  {
    v5 |= 4u;
    goto LABEL_3;
  }
  if ( v5 != 0 )
LABEL_3:
    sub_3914B0((int *)((char *)a1 + *(_DWORD *)(v4 - 12)), *(int *)((char *)a1 + *(_DWORD *)(v4 - 12) + 20) | v5);
  return a1;
}


//======================================================================
// sub_3A73F4
// address: 0x003A73F4   size: 0x1C4 (452 bytes)
//======================================================================
_DWORD *__fastcall sub_3A73F4(_DWORD *a1, int *a2, int a3)
{
  int v6; // r1
  char *v8; // r3
  _DWORD *v9; // r4
  unsigned __int8 *v10; // r6
  unsigned int v11; // r2
  unsigned int v12; // r5
  signed int v13; // r2
  signed int v14; // r7
  _BYTE *v15; // r0
  unsigned int v16; // r2
  unsigned __int8 *v17; // r3
  int v18; // r5
  int v19; // r3
  int v20; // r3
  int v21; // r2
  int v22; // r6
  char v23; // r7
  int v24; // r2
  int *v25; // r1
  unsigned int v26; // r3
  unsigned int v27; // r2
  int v28; // r0
  char v29[8]; // [sp+4h] [bp-8h] BYREF

  sub_39DA00(v29, a1, 1);
  v6 = 4;
  if ( v29[0] == 0 )
    goto LABEL_2;
  sub_3BDFA4(a2, 0, *(_DWORD *)(*a2 - 12), 0);
  v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  v9 = *((_DWORD **)v8 + 30);
  v10 = (unsigned __int8 *)v9[2];
  v11 = v9[3];
  if ( (unsigned int)v10 < v11 )
  {
    v28 = *v10;
  }
  else
  {
    v28 = sub_13B824(*((_DWORD *)v8 + 30));
    if ( v28 == -1 )
    {
LABEL_42:
      v19 = 2;
      goto LABEL_24;
    }
    v10 = (unsigned __int8 *)v9[2];
    v11 = v9[3];
  }
  v12 = 0;
  if ( a3 == v28 )
  {
    v18 = 1;
LABEL_20:
    if ( (unsigned int)v10 >= v11 )
      sub_13B830((int)v9);
    else
      v9[2] = v10 + 1;
    if ( v18 != 0 )
      return a1;
    v19 = 0;
LABEL_24:
    v6 = v19 | 4;
    goto LABEL_2;
  }
  while ( 1 )
  {
    v13 = v11 - (_DWORD)v10;
    v14 = 1073741820 - v12;
    if ( (int)(1073741820 - v12) > v13 )
      v14 = v13;
    if ( v14 <= 1 )
    {
      v20 = *a2;
      v21 = *(_DWORD *)(*a2 - 12);
      v22 = v21 + 1;
      v23 = v28;
      if ( (unsigned int)(v21 + 1) > *(_DWORD *)(*a2 - 8) || *(int *)(v20 - 4) > 0 )
      {
        sub_3BE700(a2, v21 + 1);
        v20 = *a2;
        v21 = *(_DWORD *)(*a2 - 12);
      }
      *(_BYTE *)(v20 + v21) = v23;
      v24 = *a2;
      v25 = (int *)(*a2 - 12);
      if ( v25 != &dword_55FB7C )
      {
        *(_DWORD *)(v24 - 4) = 0;
        *v25 = v22;
        *(_BYTE *)(v24 + v22) = 0;
      }
      v26 = v9[2];
      v27 = v9[3];
      ++v12;
      if ( v26 >= v27 )
      {
        v28 = sub_13B830((int)v9);
        if ( v28 == -1 )
          goto LABEL_15;
        v17 = (unsigned __int8 *)v9[2];
        v27 = v9[3];
      }
      else
      {
        v17 = (unsigned __int8 *)(v26 + 1);
        v9[2] = v17;
      }
      if ( (unsigned int)v17 < v27 )
        goto LABEL_14;
      v28 = sub_13B824((int)v9);
    }
    else
    {
      v15 = j_memchr(v10, a3, v14);
      if ( v15 != nullptr )
        v14 = v15 - v10;
      sub_3BE898(a2, v10, v14);
      v16 = v9[3];
      v17 = (unsigned __int8 *)(v9[2] + v14);
      v9[2] = v17;
      v12 += v14;
      if ( (unsigned int)v17 < v16 )
      {
LABEL_14:
        v28 = *v17;
        goto LABEL_15;
      }
      v28 = (*(int (__fastcall **)(_DWORD *))(*v9 + 36))(v9);
    }
LABEL_15:
    if ( v12 > 0x3FFFFFFB )
    {
      if ( v28 != -1 )
      {
        v6 = 4;
        if ( a3 != v28 )
          goto LABEL_2;
LABEL_27:
        v18 = v12 + 1;
        v10 = (unsigned __int8 *)v9[2];
        v11 = v9[3];
        goto LABEL_20;
      }
      goto LABEL_29;
    }
    if ( v28 == -1 )
      break;
    if ( a3 == v28 )
      goto LABEL_27;
    v10 = (unsigned __int8 *)v9[2];
    v11 = v9[3];
  }
  if ( v12 == 0 )
    goto LABEL_42;
LABEL_29:
  v6 = 2;
LABEL_2:
  sub_3914B0((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), v6 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  return a1;
}


//======================================================================
// sub_3A7600
// address: 0x003A7600   size: 0x196 (406 bytes)
//======================================================================
_DWORD *__fastcall sub_3A7600(_DWORD *a1, wchar_t *a2, int a3, wchar_t a4)
{
  _DWORD *v8; // r5
  int *v9; // r3
  int v10; // r4
  int v11; // r3
  unsigned int v12; // r3
  const wchar_t *v13; // r0
  signed int v14; // r4
  wchar_t *v15; // r0
  const wchar_t *v16; // r1
  int *v17; // r0
  unsigned int v18; // r1
  unsigned int v20; // r3
  int *v21; // r3
  int v22; // r1
  int v23; // r6
  char v24[8]; // [sp+4h] [bp-8h] BYREF

  a1[1] = 0;
  sub_39F8BC(v24, a1, 1);
  if ( v24[0] == 0 )
  {
    v22 = 0;
    goto LABEL_20;
  }
  v8 = *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  v9 = (int *)v8[2];
  if ( (unsigned int)v9 < v8[3] )
    v23 = *v9;
  else
    v23 = sub_13B83C(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
  v10 = a1[1];
LABEL_7:
  v11 = v10 + 1;
  if ( v10 + 1 < a3 )
  {
    while ( v23 != -1 )
    {
      if ( a4 == v23 )
        goto LABEL_26;
      v12 = v8[3];
      v13 = (const wchar_t *)v8[2];
      v14 = a3 - v10 - 1;
      if ( v14 > (int)(v12 - (_DWORD)v13) >> 2 )
        v14 = (int)(v12 - (_DWORD)v13) >> 2;
      if ( v14 <= 1 )
      {
        *a2 = v23;
        ++a1[1];
        if ( v12 <= (unsigned int)v13 )
        {
          v23 = sub_13B848((int)v8);
        }
        else
        {
          v23 = *v13;
          v8[2] = v13 + 1;
        }
        if ( v23 != -1 )
        {
          v21 = (int *)v8[2];
          if ( (unsigned int)v21 >= v8[3] )
            v23 = sub_13B83C((int)v8);
          else
            v23 = *v21;
        }
        v10 = a1[1];
        ++a2;
        goto LABEL_7;
      }
      v15 = j_wmemchr(v13, a4, v14);
      v16 = (const wchar_t *)v8[2];
      if ( v15 != nullptr )
        v14 = v15 - v16;
      j_wmemcpy(a2, v16, v14);
      a2 += v14;
      v17 = (int *)(v8[2] + 4 * v14);
      v18 = v8[3];
      v10 = v14 + a1[1];
      v8[2] = v17;
      a1[1] = v10;
      if ( (unsigned int)v17 >= v18 )
      {
        v23 = (*(int (__fastcall **)(_DWORD *))(*v8 + 36))(v8);
        v10 = a1[1];
        goto LABEL_7;
      }
      v11 = v10 + 1;
      v23 = *v17;
      if ( v10 + 1 >= a3 )
        goto LABEL_17;
    }
    goto LABEL_35;
  }
LABEL_17:
  if ( v23 == -1 )
  {
LABEL_35:
    v22 = 2;
    goto LABEL_20;
  }
  if ( a4 == v23 )
  {
LABEL_26:
    a1[1] = v11;
    v20 = v8[2];
    if ( v20 >= v8[3] )
      sub_13B848((int)v8);
    else
      v8[2] = v20 + 4;
    v22 = 0;
  }
  else
  {
    v22 = 4;
  }
LABEL_20:
  if ( a3 > 0 )
    *a2 = 0;
  if ( a1[1] != 0 )
  {
    if ( v22 == 0 )
      return a1;
  }
  else
  {
    v22 |= 4u;
  }
  sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), v22 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  return a1;
}


//======================================================================
// sub_3A77DC
// address: 0x003A77DC   size: 0x16A (362 bytes)
//======================================================================
int __fastcall sub_3A77DC(_DWORD *a1, int a2, wchar_t a3)
{
  _DWORD *v6; // r6
  int *v7; // r3
  int v8; // r9
  signed int v9; // r3
  unsigned int v10; // r2
  const wchar_t *v11; // r0
  signed int v12; // r4
  wchar_t *v13; // r0
  int v14; // r2
  int *v15; // r2
  unsigned int v16; // r1
  int v17; // r3
  unsigned int v18; // r3
  int v19; // r3
  int *v20; // r3
  int v22; // r0
  _BYTE v23[8]; // [sp+4h] [bp-8h] BYREF

  if ( a3 == -1 )
    return sub_3BF294(a1, a2);
  a1[1] = 0;
  sub_39F8BC(v23, a1, 1);
  if ( a2 > 0 && v23[0] != 0 )
  {
    v6 = *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v7 = (int *)v6[2];
    if ( (unsigned int)v7 < v6[3] )
      v22 = *v7;
    else
      v22 = sub_13B83C(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
    v8 = 0;
    v9 = a1[1];
LABEL_9:
    while ( a2 <= v9 )
    {
LABEL_19:
      if ( a2 != 0x7FFFFFFF || v22 == -1 || a3 == v22 )
        goto LABEL_23;
      a1[1] = 0x80000000;
      v9 = 0x80000000;
      v8 = 1;
    }
    while ( v22 != -1 && a3 != v22 )
    {
      v10 = v6[3];
      v11 = (const wchar_t *)v6[2];
      v12 = a2 - v9;
      if ( a2 - v9 > (int)(v10 - (_DWORD)v11) >> 2 )
        v12 = (int)(v10 - (_DWORD)v11) >> 2;
      if ( v12 <= 1 )
      {
        a1[1] = v9 + 1;
        if ( v10 <= (unsigned int)v11 )
        {
          v19 = sub_13B848((int)v6);
        }
        else
        {
          v19 = *v11;
          v6[2] = v11 + 1;
        }
        if ( v19 == -1 )
        {
          v22 = -1;
          v9 = a1[1];
        }
        else
        {
          v20 = (int *)v6[2];
          if ( (unsigned int)v20 >= v6[3] )
            v22 = sub_13B83C((int)v6);
          else
            v22 = *v20;
          v9 = a1[1];
        }
        goto LABEL_9;
      }
      v13 = j_wmemchr(v11, a3, v12);
      v14 = v6[2];
      if ( v13 != nullptr )
        v12 = ((int)v13 - v14) >> 2;
      v15 = (int *)(v14 + 4 * v12);
      v9 = v12 + a1[1];
      v16 = v6[3];
      v6[2] = v15;
      a1[1] = v9;
      if ( (unsigned int)v15 >= v16 )
      {
        v22 = (*(int (__fastcall **)(_DWORD *))(*v6 + 36))(v6);
        v9 = a1[1];
        goto LABEL_9;
      }
      v22 = *v15;
      if ( a2 <= v9 )
        goto LABEL_19;
    }
LABEL_23:
    if ( v8 != 0 )
      a1[1] = 0x7FFFFFFF;
    if ( v22 == -1 )
    {
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
    }
    else if ( a3 == v22 )
    {
      v17 = a1[1];
      if ( v17 != 0x7FFFFFFF )
        a1[1] = v17 + 1;
      v18 = v6[2];
      if ( v18 >= v6[3] )
        sub_13B848((int)v6);
      else
        v6[2] = v18 + 4;
    }
  }
  return (int)a1;
}


//======================================================================
// sub_3A79A4
// address: 0x003A79A4   size: 0x1AA (426 bytes)
//======================================================================
_DWORD *__fastcall sub_3A79A4(_DWORD *a1, int *a2, wchar_t a3)
{
  int v6; // r1
  _DWORD *v8; // r4
  int *v9; // r3
  unsigned int v10; // r5
  const wchar_t *v11; // r0
  unsigned int v12; // r12
  signed int v13; // r7
  wchar_t *v14; // r0
  int v15; // r1
  unsigned int v16; // r2
  int *v17; // r3
  int v18; // r5
  unsigned int v19; // r3
  int v20; // r3
  int v21; // r2
  int *v22; // r3
  int v23; // r6
  int v24; // [sp+0h] [bp-14h]
  unsigned int v25; // [sp+4h] [bp-10h]
  _BYTE v26[8]; // [sp+Ch] [bp-8h] BYREF

  sub_39F8BC(v26, a1, 1);
  v6 = 4;
  if ( v26[0] == 0 )
    goto LABEL_2;
  sub_3B7394(a2, 0, *(_DWORD *)(*a2 - 12), 0);
  v8 = *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  v9 = (int *)v8[2];
  if ( (unsigned int)v9 < v8[3] )
    v23 = *v9;
  else
    v23 = sub_13B83C(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
  if ( v23 == -1 )
  {
LABEL_43:
    v20 = 2;
    goto LABEL_24;
  }
  v10 = 0;
  if ( a3 == v23 )
  {
    v18 = 1;
LABEL_20:
    v19 = v8[2];
    if ( v19 >= v8[3] )
      sub_13B848((int)v8);
    else
      v8[2] = v19 + 4;
    if ( v18 != 0 )
      return a1;
    v20 = 0;
LABEL_24:
    v6 = v20 | 4;
    goto LABEL_2;
  }
  while ( 1 )
  {
    v11 = (const wchar_t *)v8[2];
    v12 = v8[3];
    v13 = 268435454 - v10;
    if ( (int)(268435454 - v10) > (int)(v12 - (_DWORD)v11) >> 2 )
      v13 = (int)(v12 - (_DWORD)v11) >> 2;
    if ( v13 <= 1 )
    {
      v21 = *a2;
      v22 = (int *)(*a2 - 12);
      v24 = *v22;
      v25 = *v22 + 1;
      if ( v25 > *(_DWORD *)(*a2 - 8) || *(int *)(v21 - 4) > 0 )
      {
        sub_3B7B3C(a2, v25);
        v21 = *a2;
        v22 = (int *)(*a2 - 12);
        v11 = (const wchar_t *)v8[2];
        v12 = v8[3];
        v24 = *v22;
      }
      *(_DWORD *)(4 * v24 + v21) = v23;
      if ( v22 != &dword_55FB64 )
      {
        *(_DWORD *)(v21 - 4) = 0;
        *v22 = v25;
        *(_DWORD *)(4 * v25 + v21) = 0;
      }
      ++v10;
      if ( (unsigned int)v11 >= v12 )
      {
        v23 = sub_13B848((int)v8);
      }
      else
      {
        v23 = *v11;
        v8[2] = v11 + 1;
      }
      if ( v23 != -1 )
      {
        v17 = (int *)v8[2];
        if ( (unsigned int)v17 < v8[3] )
          goto LABEL_15;
        v23 = sub_13B83C((int)v8);
      }
    }
    else
    {
      v14 = j_wmemchr(v11, a3, v13);
      v15 = v8[2];
      if ( v14 != nullptr )
        v13 = ((int)v14 - v15) >> 2;
      sub_3B7CD4(a2, v15, v13);
      v16 = v8[3];
      v17 = (int *)(v8[2] + 4 * v13);
      v8[2] = v17;
      v10 += v13;
      if ( (unsigned int)v17 < v16 )
      {
LABEL_15:
        v23 = *v17;
        goto LABEL_16;
      }
      v23 = (*(int (__fastcall **)(_DWORD *))(*v8 + 36))(v8);
    }
LABEL_16:
    if ( v10 > 0xFFFFFFD )
      break;
    if ( v23 == -1 )
    {
      if ( v10 == 0 )
        goto LABEL_43;
      goto LABEL_39;
    }
    if ( a3 == v23 )
      goto LABEL_19;
  }
  if ( v23 == -1 )
  {
LABEL_39:
    v6 = 2;
    goto LABEL_2;
  }
  v6 = 4;
  if ( a3 == v23 )
  {
LABEL_19:
    v18 = v10 + 1;
    goto LABEL_20;
  }
LABEL_2:
  sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), v6 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
  return a1;
}


//======================================================================
// sub_3A7BC0
// address: 0x003A7BC0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A7BC0(int a1, int a2)
{
  return a2;
}


//======================================================================
// sub_3A7BC4
// address: 0x003A7BC4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A7BC4(int a1, int a2)
{
  return a2;
}


//======================================================================
// sub_3A7BC8
// address: 0x003A7BC8   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3A7BC8(int a1, const void *a2, int a3, void *a4)
{
  j_memcpy(a4, a2, a3 - (_DWORD)a2);
  return a3;
}


//======================================================================
// sub_3A7BD8
// address: 0x003A7BD8   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3A7BD8(int a1, const void *a2, int a3, int a4, void *a5)
{
  j_memcpy(a5, a2, a3 - (_DWORD)a2);
  return a3;
}


//======================================================================
// sub_3A7BE8
// address: 0x003A7BE8   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3A7BE8(_DWORD *a1)
{
  *a1 = &off_4650E8;
  sub_3A5428(a1 + 2);
  *a1 = &off_4653B8;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A7C30
// address: 0x003A7C30   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A7C30(_DWORD *a1)
{
  *a1 = &off_465098;
  sub_3A7BE8(a1);
  return a1;
}


//======================================================================
// sub_3A7C48
// address: 0x003A7C48   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3A7C48(int a1)
{
  void *v2; // r0

  *(_DWORD *)a1 = &off_465038;
  sub_3A5428((_DWORD *)(a1 + 8));
  if ( *(_BYTE *)(a1 + 12) != 0 )
  {
    v2 = *(void **)(a1 + 24);
    if ( v2 != nullptr )
      operator delete[](v2);
  }
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A7C84
// address: 0x003A7C84   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3A7C84(_DWORD *a1)
{
  sub_3A7BE8(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A7C98
// address: 0x003A7C98   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A7C98(_DWORD *a1)
{
  *a1 = &off_465098;
  sub_3A7BE8(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A7CB8
// address: 0x003A7CB8   size: 0x12 (18 bytes)
//======================================================================
void *__fastcall sub_3A7CB8(void *a1)
{
  sub_3A7C48((int)a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A7CCC
// address: 0x003A7CCC   size: 0x76 (118 bytes)
//======================================================================
int __fastcall sub_3A7CCC(_BYTE *a1)
{
  int i; // r4
  int result; // r0
  char v4; // [sp+Fh] [bp-101h] BYREF
  char v5; // [sp+10h] [bp-100h] BYREF
  _BYTE v6[3]; // [sp+11h] [bp-FFh] BYREF
  char vars0; // [sp+110h] [bp+0h] BYREF

  for ( i = 0; i != 256; ++i )
    v6[i - 1] = i;
  (*(void (__fastcall **)(_BYTE *, char *, char *, _DWORD, _BYTE *))(*(_DWORD *)a1 + 36))(a1, &v5, &vars0, 0, a1 + 285);
  a1[541] = 1;
  result = j_memcmp(&v5, a1 + 285, 0x100u);
  if ( result != 0
    || (result = (*(int (__fastcall **)(_BYTE *, char *, _BYTE *, int, char *))(*(_DWORD *)a1 + 36))(
                   a1,
                   &v5,
                   v6,
                   1,
                   &v4),
        v4 == 1) )
  {
    a1[541] = 2;
  }
  return result;
}


//======================================================================
// sub_3A7D48
// address: 0x003A7D48   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_3A7D48(_BYTE *a1)
{
  int i; // r4
  int result; // r0
  _BYTE v4[256]; // [sp+0h] [bp-104h] BYREF
  _BYTE v5[4]; // [sp+100h] [bp-4h] BYREF

  for ( i = 0; i != 256; ++i )
    v4[i] = i;
  (*(void (__fastcall **)(_BYTE *, _BYTE *, _BYTE *, _BYTE *))(*(_DWORD *)a1 + 28))(a1, v4, v5, a1 + 29);
  a1[28] = 1;
  result = j_memcmp(v4, a1 + 29, 0x100u);
  if ( result != 0 )
    a1[28] = 2;
  return result;
}


//======================================================================
// sub_3A7D8C
// address: 0x003A7D8C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3A7D8C(int a1, int a2)
{
  *(_DWORD *)(a1 + 4) = a2 != 0;
  *(_DWORD *)a1 = &off_4650E8;
  *(_DWORD *)(a1 + 8) = sub_3A8844(a1);
  *(_BYTE *)(a1 + 12) = 0;
  sub_3C03F8(a1);
  return a1;
}


//======================================================================
// sub_3A7DD0
// address: 0x003A7DD0   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3A7DD0(int a1, int a2, int a3)
{
  int v4; // r0

  *(_DWORD *)(a1 + 4) = a3 != 0;
  *(_DWORD *)a1 = &off_4650E8;
  v4 = sub_3A5430();
  *(_BYTE *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 8) = v4;
  sub_3C03F8(a1);
  return a1;
}


//======================================================================
// sub_3A7E04
// address: 0x003A7E04   size: 0x50 (80 bytes)
//======================================================================
_DWORD *__fastcall sub_3A7E04(_DWORD *a1, char *a2, int a3)
{
  sub_3A7D8C((int)a1, a3);
  *a1 = &off_465098;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5428(a1 + 2);
    sub_3A5400(a1 + 2, a2);
    sub_3C03F8(a1);
  }
  return a1;
}


//======================================================================
// sub_3A7E6C
// address: 0x003A7E6C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A7E6C(int a1, char *a2, char *a3)
{
  int v3; // r0

  v3 = j_strcoll(a2, a3);
  return (v3 >> 30) | (v3 != 0);
}


//======================================================================
// sub_3A7E84
// address: 0x003A7E84   size: 0xE (14 bytes)
//======================================================================
size_t __fastcall sub_3A7E84(int a1, char *a2, char *a3, size_t a4)
{
  return j_strxfrm(a2, a3, a4);
}


//======================================================================
// sub_3A7E94
// address: 0x003A7E94   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A7E94(int a1, wchar_t *s1, wchar_t *s2)
{
  int v3; // r0

  v3 = j_wcscoll(s1, s2);
  return (v3 >> 30) | (v3 != 0);
}


//======================================================================
// sub_3A7EAC
// address: 0x003A7EAC   size: 0xE (14 bytes)
//======================================================================
size_t __fastcall sub_3A7EAC(int a1, wchar_t *s1, wchar_t *s2, size_t n)
{
  return j_wcsxfrm(s1, s2, n);
}


//======================================================================
// sub_3A7EBC
// address: 0x003A7EBC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_3A7EBC(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int varg_r2; // [sp+18h] [bp+Ch]
  int varg_r3; // [sp+1Ch] [bp+10h]

  (*(void (__fastcall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 16))(a1, a2, varg_r2, varg_r3, 0, a7);
  return a1;
}


//======================================================================
// sub_3A7EE8
// address: 0x003A7EE8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_3A7EE8(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int varg_r2; // [sp+18h] [bp+Ch]
  int varg_r3; // [sp+1Ch] [bp+10h]

  (*(void (__fastcall **)(int, int, int, int, _DWORD, int))(*(_DWORD *)a2 + 16))(a1, a2, varg_r2, varg_r3, 0, a7);
  return a1;
}


//======================================================================
// sub_3A7F14
// address: 0x003A7F14   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3A7F14(int a1, char *ptr, size_t a3)
{
  int result; // r0

  result = j_fread(ptr, 1u, a3, *(FILE **)(a1 + 32));
  if ( result <= 0 )
    *(_DWORD *)(a1 + 36) = -1;
  else
    *(_DWORD *)(a1 + 36) = (unsigned __int8)ptr[result - 1];
  return result;
}


//======================================================================
// sub_3A7F3C
// address: 0x003A7F3C   size: 0xE (14 bytes)
//======================================================================
size_t __fastcall sub_3A7F3C(int a1, void *ptr, size_t a3)
{
  return j_fwrite(ptr, 1u, a3, *(FILE **)(a1 + 32));
}


//======================================================================
// sub_3A7F4C
// address: 0x003A7F4C   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_3A7F4C(int a1, wint_t *a2, int a3)
{
  wint_t *v6; // r5
  int v7; // r4
  wint_t v8; // r0

  if ( a3 != 0 )
  {
    v6 = a2;
    v7 = 0;
    while ( 1 )
    {
      v8 = j_getwc(*(__FILE **)(a1 + 32));
      if ( v8 == -1 )
        break;
      ++v7;
      *v6++ = v8;
      if ( a3 == v7 )
        goto LABEL_7;
    }
    if ( v7 == 0 )
      goto LABEL_6;
LABEL_7:
    *(_DWORD *)(a1 + 36) = a2[v7 - 1];
  }
  else
  {
LABEL_6:
    *(_DWORD *)(a1 + 36) = -1;
    return 0;
  }
  return v7;
}


//======================================================================
// sub_3A7F98
// address: 0x003A7F98   size: 0xE (14 bytes)
//======================================================================
wint_t __fastcall sub_3A7F98(int a1)
{
  wint_t result; // r0

  result = j_getwc(*(__FILE **)(a1 + 32));
  *(_DWORD *)(a1 + 36) = result;
  return result;
}


//======================================================================
// sub_3A7FA8
// address: 0x003A7FA8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_3A7FA8(int a1, wchar_t *a2, int a3)
{
  int i; // r4

  if ( a3 == 0 )
    return 0;
  for ( i = 0; i != a3; ++i )
  {
    if ( j_putwc(*a2, *(__FILE **)(a1 + 32)) == -1 )
      break;
    ++a2;
  }
  return i;
}


//======================================================================
// sub_3A7FD4
// address: 0x003A7FD4   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall sub_3A7FD4(_DWORD *a1)
{
  *a1 = &off_464398;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_3A7FF0
// address: 0x003A7FF0   size: 0x18 (24 bytes)
//======================================================================
_DWORD *__fastcall sub_3A7FF0(_DWORD *a1)
{
  *a1 = &off_464358;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_3A800C
// address: 0x003A800C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3A800C(int a1)
{
  int result; // r0

  result = j_getc(*(FILE **)(a1 + 32));
  *(_DWORD *)(a1 + 36) = result;
  return result;
}


//======================================================================
// sub_3A801C
// address: 0x003A801C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_3A801C(int a1)
{
  int v2; // r0

  v2 = j_getc(*(FILE **)(a1 + 32));
  return j_ungetc(v2, *(FILE **)(a1 + 32));
}


//======================================================================
// sub_3A8030
// address: 0x003A8030   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3A8030(int a1, int c)
{
  int result; // r0

  result = c;
  if ( c != -1 || (result = *(_DWORD *)(a1 + 36)) != -1 )
    result = j_ungetc(result, *(FILE **)(a1 + 32));
  *(_DWORD *)(a1 + 36) = -1;
  return result;
}


//======================================================================
// sub_3A8050
// address: 0x003A8050   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3A8050(int a1)
{
  return j_fflush(*(FILE **)(a1 + 32));
}


//======================================================================
// sub_3A805C
// address: 0x003A805C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3A805C(int a1)
{
  return j_fflush(*(FILE **)(a1 + 32));
}


//======================================================================
// sub_3A8068
// address: 0x003A8068   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3A8068(int a1, int a2, int off, int a4, int a5)
{
  int v8; // r2

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = -1;
  v8 = 0;
  if ( a5 != 0 )
    v8 = (a5 != 1) + 1;
  if ( j_fseek(*(FILE **)(a2 + 32), off, v8) == 0 )
    *(_QWORD *)a1 = j_ftell(*(FILE **)(a2 + 32));
  return a1;
}


//======================================================================
// sub_3A80AC
// address: 0x003A80AC   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3A80AC(int a1, int a2, int off, int a4, int a5)
{
  int v8; // r2

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = -1;
  v8 = 0;
  if ( a5 != 0 )
    v8 = (a5 != 1) + 1;
  if ( j_fseek(*(FILE **)(a2 + 32), off, v8) == 0 )
    *(_QWORD *)a1 = j_ftell(*(FILE **)(a2 + 32));
  return a1;
}


//======================================================================
// sub_3A80F0
// address: 0x003A80F0   size: 0x12 (18 bytes)
//======================================================================
wint_t __fastcall sub_3A80F0(int a1)
{
  wint_t v2; // r0

  v2 = j_getwc(*(__FILE **)(a1 + 32));
  return j_ungetwc(v2, *(__FILE **)(a1 + 32));
}


//======================================================================
// sub_3A8104
// address: 0x003A8104   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_3A8104(int a1, int wc)
{
  int result; // r0

  result = wc;
  if ( wc != -1 || (result = *(_DWORD *)(a1 + 36)) != -1 )
    result = j_ungetwc(result, *(__FILE **)(a1 + 32));
  *(_DWORD *)(a1 + 36) = -1;
  return result;
}


//======================================================================
// sub_3A8128
// address: 0x003A8128   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8128(_DWORD *a1)
{
  *a1 = &off_464398;
  sub_3A8980(a1 + 7);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A814C
// address: 0x003A814C   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_3A814C(_DWORD *a1)
{
  *a1 = &off_464358;
  sub_3A8980(a1 + 7);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A8170
// address: 0x003A8170   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3A8170(int a1, int c)
{
  if ( c == -1 )
    return -(j_fflush(*(FILE **)(a1 + 32)) != 0);
  else
    return j_putc(c, *(FILE **)(a1 + 32));
}


//======================================================================
// sub_3A8190
// address: 0x003A8190   size: 0x20 (32 bytes)
//======================================================================
wint_t __fastcall sub_3A8190(int a1, wchar_t wc)
{
  if ( wc == -1 )
    return -(j_fflush(*(FILE **)(a1 + 32)) != 0);
  else
    return j_putwc(wc, *(__FILE **)(a1 + 32));
}


//======================================================================
// sub_3A81B0
// address: 0x003A81B0   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3A81B0(int a1)
{
  return sub_3B4214(a1);
}


//======================================================================
// sub_3A81C0
// address: 0x003A81C0   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall sub_3A81C0(_DWORD *a1, int *a2)
{
  _BYTE *v3; // r4
  int v5; // r2

  v3 = *(_BYTE **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  if ( v3 == nullptr )
    sub_3BCEE4();
  if ( v3[28] != 0 )
  {
    v5 = (unsigned __int8)v3[39];
  }
  else
  {
    sub_3A7D48(v3);
    v5 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v3 + 24))(v3, 10);
  }
  return sub_3A73F4(a1, a2, v5);
}


//======================================================================
// sub_3A8200
// address: 0x003A8200   size: 0x1DA (474 bytes)
//======================================================================
int *__fastcall sub_3A8200(int *a1, _DWORD *a2)
{
  int v4; // r3
  int v5; // r1
  char *v7; // r1
  unsigned int v8; // r10
  int v9; // r11
  _DWORD *v10; // r0
  int *v11; // r3
  int v12; // r4
  int v13; // r8
  unsigned int v14; // r5
  int v15; // r3
  _DWORD *v16; // r4
  int *v17; // r3
  int v18; // r0
  int *v19; // r3
  _BYTE v20[4]; // [sp+4h] [bp-208h] BYREF
  _DWORD v21[129]; // [sp+8h] [bp-204h] BYREF

  sub_39F8BC(v20, a1, 0);
  if ( v20[0] != 0 )
  {
    sub_3B7394(a2, 0, *(_DWORD *)(*a2 - 12), 0);
    v7 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    if ( *((int *)v7 + 2) <= 0 )
      v8 = 268435454;
    else
      v8 = *((_DWORD *)v7 + 2);
    sub_3A84F8(v21, v7 + 108);
    v9 = sub_3AB100(v21);
    sub_3A8980(v21);
    v10 = *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v11 = (int *)v10[2];
    if ( (unsigned int)v11 >= v10[3] )
      v12 = (*(int (__fastcall **)(_DWORD *))(*v10 + 36))(v10);
    else
      v12 = *v11;
    v13 = 0;
    v14 = 0;
    if ( v12 != -1 )
    {
      while ( (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v9 + 8))(v9, 8, v12) == 0 )
      {
        if ( v13 == 128 )
        {
          sub_3B7CD4(a2, v21, 128);
          v13 = 1;
          v15 = 0;
        }
        else
        {
          v15 = v13++;
        }
        v21[v15] = v12;
        ++v14;
        v16 = *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
        v17 = (int *)v16[2];
        if ( (unsigned int)v17 >= v16[3] )
        {
          v18 = (*(int (__fastcall **)(_DWORD))(*v16 + 40))(*(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
        }
        else
        {
          v18 = *v17;
          v16[2] = v17 + 1;
        }
        if ( v18 == -1 )
        {
          v12 = -1;
          if ( v8 > v14 )
          {
LABEL_20:
            v12 = -1;
            break;
          }
          break;
        }
        v19 = (int *)v16[2];
        if ( (unsigned int)v19 >= v16[3] )
          v12 = (*(int (__fastcall **)(_DWORD *))(*v16 + 36))(v16);
        else
          v12 = *v19;
        if ( v8 <= v14 )
          break;
        if ( v12 == -1 )
          goto LABEL_20;
      }
    }
    sub_3B7CD4(a2, v21, v13);
    v4 = *a1;
    v5 = 2 * (v12 == -1);
    *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 8) = 0;
    if ( v14 != 0 )
    {
      if ( v5 == 0 )
        return a1;
    }
    else
    {
      v5 |= 4u;
    }
  }
  else
  {
    v4 = *a1;
    v5 = 4;
  }
  sub_39194C((int *)((char *)a1 + *(_DWORD *)(v4 - 12)), v5 | *(int *)((char *)a1 + *(_DWORD *)(v4 - 12) + 20));
  return a1;
}


//======================================================================
// sub_3A83EC
// address: 0x003A83EC   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3A83EC(int a1)
{
  return sub_3B5A5C(a1);
}


//======================================================================
// sub_3A83FC
// address: 0x003A83FC   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3A83FC(_DWORD *a1, int *a2)
{
  int v4; // r0
  wchar_t v5; // r0

  v4 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 128);
  if ( v4 == 0 )
    sub_3BCEE4();
  v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 40))(v4, 10);
  return sub_3A79A4(a1, a2, v5);
}


//======================================================================
// sub_3A842C
// address: 0x003A842C   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_3A842C(_DWORD *a1, int a2)
{
  *a1 = &off_464358;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_3A6688(a1 + 7);
  a1[8] = a2;
  *a1 = &off_465128;
  a1[9] = -1;
  return a1;
}


//======================================================================
// sub_3A846C
// address: 0x003A846C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A846C(int a1)
{
  return *(_DWORD *)(a1 + 32);
}


//======================================================================
// sub_3A8470
// address: 0x003A8470   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8470(_DWORD *a1, int a2)
{
  *a1 = &off_464398;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  a1[4] = 0;
  a1[5] = 0;
  a1[6] = 0;
  sub_3A6688(a1 + 7);
  a1[8] = a2;
  *a1 = &off_465168;
  a1[9] = -1;
  return a1;
}


//======================================================================
// sub_3A84B0
// address: 0x003A84B0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3A84B0(int a1)
{
  return *(_DWORD *)(a1 + 32);
}


//======================================================================
// sub_3A84B4
// address: 0x003A84B4   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3A84B4(_DWORD *result)
{
  *result = &off_4651C8;
  return result;
}


//======================================================================
// sub_3A84C4
// address: 0x003A84C4   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A84C4(_DWORD *a1)
{
  *a1 = &off_4651C8;
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A84DC
// address: 0x003A84DC   size: 0x12 (18 bytes)
//======================================================================
int sub_3A84DC()
{
  return sub_3A5400(&dword_55FAEC, "C");
}


//======================================================================
// sub_3A84F8
// address: 0x003A84F8   size: 0x12 (18 bytes)
//======================================================================
int *__fastcall sub_3A84F8(int *a1, int *a2)
{
  int v3; // r0

  v3 = *a2;
  *a1 = *a2;
  sub_3C82FC(v3, 1);
  return a1;
}


//======================================================================
// sub_3A850C
// address: 0x003A850C   size: 0x4 (4 bytes)
//======================================================================
_DWORD *__fastcall sub_3A850C(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


//======================================================================
// sub_3A8510
// address: 0x003A8510   size: 0x1E0 (480 bytes)
//======================================================================
int *__fastcall sub_3A8510(int *a1, int a2)
{
  int v4; // r3
  const char *v5; // r0
  char *v6; // r11
  int v7; // r9
  unsigned int v8; // r5
  const char *v9; // r7
  char **v10; // r9
  size_t v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r5
  int v15; // r3
  int *v16; // r2
  size_t v17; // r0
  int i; // r5
  int v19; // r3
  int v20; // r2
  int v21; // r7
  int v22; // r3
  int *v23; // r2
  size_t v24; // r0
  int v25; // r3
  int v26; // r2
  int v27; // r7
  int v28; // r3
  int *v29; // r2
  size_t v30; // r0
  size_t v32; // r0

  *a1 = (int)&byte_55FB88;
  v4 = *(_DWORD *)(*(_DWORD *)a2 + 16);
  v5 = *(const char **)v4;
  v6 = *(char **)v4;
  if ( *(_DWORD *)v4 != 0 )
  {
    if ( *(_DWORD *)(v4 + 4) != 0 )
    {
      v7 = v4 + 4;
      v8 = 0;
      while ( 1 )
      {
        v7 += 4;
        v9 = *(const char **)(v7 - 4);
        ++v8;
        if ( j_strcmp(v5, v9) != 0 )
          break;
        if ( v8 > 4 )
          goto LABEL_26;
        v5 = v9;
      }
      sub_3BE700(a1, 128);
      v10 = off_454EC0;
      v11 = j_strlen(*off_454EC0);
      sub_3BE898(a1, *off_454EC0, v11);
      v12 = *a1;
      v13 = *(_DWORD *)(*a1 - 12);
      v14 = v13 + 1;
      if ( (unsigned int)(v13 + 1) > *(_DWORD *)(*a1 - 8) || *(int *)(v12 - 4) > 0 )
      {
        sub_3BE700(a1, v13 + 1);
        v12 = *a1;
        v13 = *(_DWORD *)(*a1 - 12);
      }
      *(_BYTE *)(v12 + v13) = 61;
      v15 = *a1;
      v16 = (int *)(*a1 - 12);
      if ( v16 != &dword_55FB7C )
      {
        *(_DWORD *)(v15 - 4) = 0;
        *v16 = v14;
        *(_BYTE *)(v15 + v14) = 0;
      }
      v17 = j_strlen(**(const char ***)(*(_DWORD *)a2 + 16));
      sub_3BE898(a1, **(_DWORD **)(*(_DWORD *)a2 + 16), v17);
      for ( i = 1; i != 6; ++i )
      {
        v19 = *a1;
        v20 = *(_DWORD *)(*a1 - 12);
        v21 = v20 + 1;
        if ( (unsigned int)(v20 + 1) > *(_DWORD *)(*a1 - 8) || *(int *)(v19 - 4) > 0 )
        {
          sub_3BE700(a1, v20 + 1);
          v19 = *a1;
          v20 = *(_DWORD *)(*a1 - 12);
        }
        *(_BYTE *)(v19 + v20) = 59;
        v22 = *a1;
        v23 = (int *)(*a1 - 12);
        if ( v23 != &dword_55FB7C )
        {
          *(_DWORD *)(v22 - 4) = 0;
          *v23 = v21;
          *(_BYTE *)(v22 + v21) = 0;
        }
        v24 = j_strlen(v10[i]);
        sub_3BE898(a1, v10[i], v24);
        v25 = *a1;
        v26 = *(_DWORD *)(*a1 - 12);
        v27 = v26 + 1;
        if ( (unsigned int)(v26 + 1) > *(_DWORD *)(*a1 - 8) || *(int *)(v25 - 4) > 0 )
        {
          sub_3BE700(a1, v26 + 1);
          v25 = *a1;
          v26 = *(_DWORD *)(*a1 - 12);
        }
        *(_BYTE *)(v25 + v26) = 61;
        v28 = *a1;
        v29 = (int *)(*a1 - 12);
        if ( v29 != &dword_55FB7C )
        {
          *(_DWORD *)(v28 - 4) = 0;
          *v29 = v27;
          *(_BYTE *)(v28 + v27) = 0;
        }
        v30 = j_strlen(*(const char **)(*(_DWORD *)(*(_DWORD *)a2 + 16) + i * 4));
        sub_3BE898(a1, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a2 + 16) + i * 4), v30);
      }
    }
    else
    {
LABEL_26:
      v32 = j_strlen(v6);
      sub_3BE408((int)a1, v6, v32);
    }
  }
  else
  {
    sub_3BE294(a1, 0, dword_55FB7C, 1, 42);
  }
  return a1;
}


//======================================================================
// sub_3A86F8
// address: 0x003A86F8   size: 0xFA (250 bytes)
//======================================================================
int __fastcall sub_3A86F8(int a1, int a2)
{
  int v4; // r6
  int v5; // r7
  _BOOL4 v6; // r4
  char *v7; // r8
  int *v8; // r6
  int *v9; // r7
  char *v10; // r9
  size_t v11; // r2
  _BYTE v13[4]; // [sp+4h] [bp-Ch] BYREF
  void *v14; // [sp+8h] [bp-8h] BYREF
  void *v15; // [sp+Ch] [bp-4h] BYREF

  if ( *(_DWORD *)a1 == *(_DWORD *)a2 )
    return 1;
  v4 = *(_DWORD *)(*(_DWORD *)a1 + 16);
  if ( *(_DWORD *)v4 == 0 )
    return 0;
  v5 = *(_DWORD *)(*(_DWORD *)a2 + 16);
  if ( *(_DWORD *)v5 == 0 || j_strcmp(*(const char **)v4, *(const char **)v5) != 0 )
    return 0;
  if ( *(_DWORD *)(v4 + 4) == 0 && *(_DWORD *)(v5 + 4) == 0 )
    return 1;
  sub_3A8510((int *)&v14, a1);
  sub_3A8510((int *)&v15, a2);
  v6 = false;
  v7 = (char *)v14;
  v8 = (int *)((char *)v14 - 12);
  v9 = (int *)((char *)v15 - 12);
  v10 = (char *)v15;
  v11 = *((_DWORD *)v14 - 3);
  if ( v11 == *((_DWORD *)v15 - 3) )
    v6 = j_memcmp(v14, v15, v11) == 0;
  if ( v9 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v10 - 4, -1) <= 0 )
      sub_3BDF60(v9, v13);
    v7 = (char *)v14;
    v8 = (int *)((char *)v14 - 12);
  }
  if ( v8 != &dword_55FB7C && sub_3C82FC(v7 - 4, -1) <= 0 )
    sub_3BDF60(v8, &v15);
  return v6;
}


//======================================================================
// sub_3A87F8
// address: 0x003A87F8   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_3A87F8(int result)
{
  unsigned int v1; // r0

  if ( result != 0 )
  {
    if ( (result & 0x3F) != 0 )
    {
      if ( (result & 0xFFFFFFC0) == 0 )
        return result;
      v1 = result - 1;
      if ( v1 > 5 )
LABEL_4:
        sub_3BD110("locale::_S_normalize_category category not found");
    }
    else
    {
      v1 = result - 1;
      if ( v1 > 5 )
        goto LABEL_4;
    }
    switch ( v1 )
    {
      case 0u:
        result = 2;
        break;
      case 1u:
        result = 8;
        break;
      case 2u:
        result = 4;
        break;
      case 3u:
        result = 16;
        break;
      case 4u:
        result = 32;
        break;
      case 5u:
        result = 63;
        break;
    }
  }
  return result;
}


//======================================================================
// sub_3A8844
// address: 0x003A8844   size: 0x16 (22 bytes)
//======================================================================
int sub_3A8844()
{
  j_pthread_once(&dword_55FB00, (void (*)(void))sub_3A84DC);
  return dword_55FAEC;
}


//======================================================================
// sub_3A8868
// address: 0x003A8868   size: 0x6 (6 bytes)
//======================================================================
const char *sub_3A8868()
{
  return "C";
}


//======================================================================
// sub_3A8874
// address: 0x003A8874   size: 0xB0 (176 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8874(_DWORD *a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r3
  unsigned int i; // r4
  int v5; // r6
  _DWORD *v6; // r0
  unsigned int v7; // r3
  unsigned int j; // r4
  int v9; // r6
  char *v10; // r3
  int v11; // r4
  void *v12; // r0

  v2 = (_DWORD *)a1[1];
  if ( v2 != nullptr )
  {
    v3 = a1[2];
    if ( v3 == 0 )
      goto LABEL_10;
    for ( i = 0; i < v3; ++i )
    {
      v5 = v2[i];
      if ( v5 != 0 )
      {
        if ( sub_3C82FC(v5 + 4, -1) == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
        v2 = (_DWORD *)a1[1];
        v3 = a1[2];
      }
    }
    if ( v2 != nullptr )
LABEL_10:
      operator delete[](v2);
  }
  v6 = (_DWORD *)a1[3];
  if ( v6 != nullptr )
  {
    v7 = a1[2];
    if ( v7 == 0 )
      goto LABEL_20;
    for ( j = 0; j < v7; ++j )
    {
      v9 = v6[j];
      if ( v9 != 0 )
      {
        if ( sub_3C82FC(v9 + 4, -1) == 1 )
          (*(void (__fastcall **)(int))(*(_DWORD *)v9 + 4))(v9);
        v6 = (_DWORD *)a1[3];
        v7 = a1[2];
      }
    }
    if ( v6 != nullptr )
LABEL_20:
      operator delete[](v6);
  }
  v10 = (char *)a1[4];
  v11 = 0;
  if ( v10 != nullptr )
  {
    do
    {
      v12 = *(void **)&v10[v11];
      if ( v12 != nullptr )
      {
        operator delete[](v12);
        v10 = (char *)a1[4];
      }
      v11 += 4;
    }
    while ( v11 != 24 );
    if ( v10 != nullptr )
      operator delete[](v10);
  }
  return a1;
}


//======================================================================
// sub_3A8948
// address: 0x003A8948   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8948(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v4; // r6

  sub_3C82FC(*a2, 1);
  v4 = (_DWORD *)*a1;
  if ( sub_3C82FC(*a1, -1) == 1 && v4 != nullptr )
  {
    sub_3A8874(v4);
    operator delete(v4);
  }
  *a1 = *a2;
  return a1;
}


//======================================================================
// sub_3A8980
// address: 0x003A8980   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8980(_DWORD *a1)
{
  _DWORD *v1; // r5

  v1 = (_DWORD *)*a1;
  if ( sub_3C82FC(*a1, -1) == 1 && v1 != nullptr )
  {
    sub_3A8874(v1);
    operator delete(v1);
  }
  return a1;
}


//======================================================================
// sub_3A89AC
// address: 0x003A89AC   size: 0x28 (40 bytes)
//======================================================================
void __fastcall sub_3A89AC(_DWORD *a1, int a2, int a3)
{
  unsigned int v4; // r0
  size_t v5; // r0

  a1[1] = 0;
  *a1 = a3;
  v4 = *(_DWORD *)(a2 + 8);
  a1[3] = 0;
  a1[4] = 0;
  a1[2] = v4;
  if ( v4 > 0x1FC00000 )
    v5 = -1;
  else
    v5 = 4 * v4;
  operator new[](v5);
  JUMPOUT(0x3A89D4);
}


//======================================================================
// sub_3A8AB4
// address: 0x003A8AB4   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_3A8AB4(int a1, int a2, int a3)
{
  int result; // r0
  _DWORD *exception; // r0

  if ( (dword_55FAF0 & 1) == 0 && _cxa_guard_acquire(&dword_55FAF0) != 0 )
  {
    dword_55FAE8 = 0;
    _cxa_guard_release(&dword_55FAF0);
  }
  if ( j_pthread_mutex_lock((pthread_mutex_t *)&dword_55FAE8) != 0 )
  {
    exception = _cxa_allocate_exception(4u);
    *exception = &off_464150;
    _cxa_throw(
      exception,
      (struct type_info *)&`typeinfo for'__gnu_cxx::__concurrence_lock_error,
      (void (*)(void *))sub_38EFC0);
  }
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * a3) != 0 )
  {
    if ( a2 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 4))(a2);
  }
  else
  {
    sub_3C82FC(a2 + 4, 1);
    *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * a3) = a2;
  }
  result = j_pthread_mutex_unlock((pthread_mutex_t *)&dword_55FAE8);
  if ( result != 0 )
    sub_38F080();
  return result;
}


//======================================================================
// sub_3A8B84
// address: 0x003A8B84   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3A8B84(int *a1)
{
  int v1; // r3

  v1 = *a1;
  if ( *a1 == 0 )
  {
    v1 = sub_3C82FC(&unk_55FAE4, 1) + 1;
    *a1 = v1;
  }
  return v1 - 1;
}


//======================================================================
// sub_3A8BA4
// address: 0x003A8BA4   size: 0x162 (354 bytes)
//======================================================================
int __fastcall sub_3A8BA4(int result, int *a2, int a3)
{
  _DWORD *v4; // r4
  unsigned int v5; // r0
  unsigned int v6; // r7
  unsigned int v7; // r6
  void *v8; // r9
  size_t v9; // r0
  char *v10; // r0
  unsigned int v11; // r2
  int v12; // r3
  char *v13; // r5
  int v14; // r3
  void *v15; // r10
  size_t v16; // r0
  char *v17; // r0
  unsigned int v18; // r11
  int v19; // r3
  int v20; // r3
  int *v21; // r7
  int v22; // r5
  unsigned int v23; // r3
  unsigned int i; // r5
  int v25; // r6

  v4 = (_DWORD *)result;
  if ( a3 != 0 )
  {
    v5 = sub_3A8B84(a2);
    v6 = v5;
    if ( v5 > v4[2] - 1 )
    {
      v7 = v5 + 4;
      v8 = (void *)v4[1];
      v9 = 4 * (v5 + 4);
      if ( v7 > 0x1FC00000 )
        v9 = -1;
      v10 = (char *)operator new[](v9);
      v11 = v4[2];
      v12 = 0;
      v13 = v10;
      if ( v11 != 0 )
      {
        do
        {
          *(_DWORD *)&v10[v12] = *(_DWORD *)(v4[1] + v12);
          v12 += 4;
        }
        while ( v12 != 4 * v11 );
      }
      if ( v7 > v11 )
      {
        v14 = 0;
        do
        {
          *(_DWORD *)&v10[4 * v11 + v14] = 0;
          v14 += 4;
        }
        while ( v14 != 4 * (v6 - v11 + 4) );
      }
      v15 = (void *)v4[3];
      v16 = 4 * v7;
      if ( v7 > 0x1FC00000 )
        v16 = -1;
      v17 = (char *)operator new[](v16);
      v18 = v4[2];
      v19 = 0;
      if ( v18 != 0 )
      {
        do
        {
          *(_DWORD *)&v17[v19] = *(_DWORD *)(v4[3] + v19);
          v19 += 4;
        }
        while ( v19 != 4 * v18 );
      }
      if ( v7 > v18 )
      {
        v20 = 0;
        do
        {
          *(_DWORD *)&v17[4 * v18 + v20] = 0;
          v20 += 4;
        }
        while ( v20 != 4 * (v6 - v18 + 4) );
      }
      v4[2] = v7;
      v4[1] = v13;
      v4[3] = v17;
      if ( v8 != nullptr )
        operator delete[](v8);
      if ( v15 != nullptr )
        operator delete[](v15);
    }
    sub_3C82FC(a3 + 4, 1);
    result = v4[1];
    v21 = (int *)(result + 4 * v6);
    v22 = *v21;
    if ( *v21 != 0 )
    {
      result = sub_3C82FC(v22 + 4, -1);
      if ( result == 1 )
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 4))(v22);
      *v21 = a3;
    }
    else
    {
      *v21 = a3;
    }
    v23 = v4[2];
    if ( v23 != 0 )
    {
      for ( i = 0; i < v23; ++i )
      {
        result = v4[3];
        v25 = *(_DWORD *)(result + 4 * i);
        if ( v25 != 0 )
        {
          result = sub_3C82FC(v25 + 4, -1);
          if ( result == 1 )
            result = (*(int (__fastcall **)(int))(*(_DWORD *)v25 + 4))(v25);
          *(_DWORD *)(v4[3] + 4 * i) = 0;
          v23 = v4[2];
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_3A8D40
// address: 0x003A8D40   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_3A8D40(int a1, int a2, int *a3)
{
  unsigned int v6; // r0
  int v7; // r2

  v6 = sub_3A8B84(a3);
  if ( v6 > *(_DWORD *)(a2 + 8) - 1 || (v7 = *(_DWORD *)(4 * v6 + *(_DWORD *)(a2 + 4))) == 0 )
    sub_3BD110("locale::_Impl::_M_replace_facet");
  return sub_3A8BA4(a1, a3, v7);
}


//======================================================================
// sub_3A8D78
// address: 0x003A8D78   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3A8D78(int result, int a2, int **a3)
{
  int **v3; // r4
  int *v4; // r2
  int v5; // r6

  v3 = a3;
  v4 = *a3;
  v5 = result;
  if ( v4 != nullptr )
  {
    do
    {
      ++v3;
      result = sub_3A8D40(v5, a2, v4);
      v4 = *v3;
    }
    while ( *v3 != nullptr );
  }
  return result;
}


//======================================================================
// sub_3A8D98
// address: 0x003A8D98   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8D98(_DWORD *a1)
{
  _DWORD *v2; // r0

  a1[2] = &off_4651DC;
  *a1 = &off_465204;
  a1[1] = 0;
  v2 = a1 + 3;
  *v2 = &off_464320;
  sub_392FE4(v2);
  return a1;
}


//======================================================================
// sub_3A8DE4
// address: 0x003A8DE4   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8DE4(_DWORD *a1)
{
  return sub_3A8D98((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A8DF4
// address: 0x003A8DF4   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8DF4(_DWORD *a1)
{
  _DWORD *v2; // r0

  a1[2] = &off_4651DC;
  *a1 = &off_465204;
  a1[1] = 0;
  v2 = a1 + 3;
  *v2 = &off_464320;
  sub_392FE4(v2);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A8E48
// address: 0x003A8E48   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8E48(_DWORD *a1)
{
  return sub_3A8DF4((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3A8E58
// address: 0x003A8E58   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8E58(_DWORD *a1)
{
  _DWORD *v2; // r0

  a1[2] = &off_46528C;
  *a1 = &off_4652B4;
  a1[1] = 0;
  v2 = a1 + 3;
  *v2 = &off_464330;
  sub_392FE4(v2);
  return a1;
}


//======================================================================
// sub_3A8E90
// address: 0x003A8E90   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_3A8E90(_DWORD *a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r5
  int v10; // r0
  size_t v11; // r0
  _DWORD *v12; // r0
  unsigned int v13; // r2
  int v14; // r5
  int v15; // r0
  char *v16; // r0
  int v17; // r3
  int i; // r5
  const char *v19; // r0
  void **v20; // r8
  size_t v21; // r7
  void *v22; // r0
  const void *v23; // r1
  _DWORD *v24; // r4
  _DWORD *v25; // r6
  _DWORD *v26; // r0

  *a1 = a4;
  v26 = a1 + 1;
  v24[1] = v26;
  if ( a3 == 0 )
    goto LABEL_22;
  v9 = 0;
  while ( 1 )
  {
    v26[v9] = *(_DWORD *)(v25[1] + 4 * v9);
    v10 = *(_DWORD *)(v24[1] + 4 * v9);
    if ( v10 != 0 )
    {
      sub_3C82FC(v10 + 4, 1);
      a3 = v24[2];
    }
    if ( a3 <= ++v9 )
      break;
    v26 = (_DWORD *)v24[1];
  }
  if ( a3 > 0x1FC00000 )
    v11 = -1;
  else
LABEL_22:
    v11 = 4 * a3;
  v12 = operator new[](v11);
  v13 = v24[2];
  v24[3] = v12;
  v14 = 0;
  if ( v13 != 0 )
  {
    while ( 1 )
    {
      v12[v14] = *(_DWORD *)(v25[3] + 4 * v14);
      v15 = *(_DWORD *)(v24[3] + 4 * v14);
      if ( v15 != 0 )
      {
        sub_3C82FC(v15 + 4, 1);
        v13 = v24[2];
      }
      if ( v13 <= ++v14 )
        break;
      v12 = (_DWORD *)v24[3];
    }
  }
  v16 = (char *)operator new[](0x18u);
  v24[4] = v16;
  v17 = 0;
  while ( 1 )
  {
    *(_DWORD *)&v16[v17] = 0;
    v17 += 4;
    if ( v17 == 24 )
      break;
    v16 = (char *)v24[4];
  }
  for ( i = 0; i != 24; i += 4 )
  {
    v19 = *(const char **)(v25[4] + i);
    if ( v19 == nullptr )
      break;
    v20 = (void **)(v24[4] + i);
    v21 = j_strlen(v19) + 1;
    *v20 = operator new[](v21);
    v22 = *(void **)(v24[4] + i);
    v23 = *(const void **)(v25[4] + i);
    j_memcpy(v22, v23, v21);
  }
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_3A8E94
// address: 0x003A8E94   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_3A8E94(int a1)
{
  int v1; // r12

  return ((int (__fastcall *)(int))(v1 + 0x3A8E9C))(a1 - 8);
}


//======================================================================
// sub_3A8EA4
// address: 0x003A8EA4   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003A8EA4  STMDAVS R3, {R3,R8,R10,R12,SP,PC}
//   003A8EA8  LDMDAVS R11, {R2,R3,R8,R9,R11-SP}
//   003A8EAC  DCB 0xC0
//   003A8EAE  DCB 0xFF
//   003A8EB2  DCB    8

//======================================================================
// sub_3A8EB4
// address: 0x003A8EB4   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3A8EB4(_DWORD *a1)
{
  _DWORD *v2; // r0

  a1[2] = &off_46528C;
  *a1 = &off_4652B4;
  a1[1] = 0;
  v2 = a1 + 3;
  *v2 = &off_464330;
  sub_392FE4(v2);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A8EF4
// address: 0x003A8EF4   size: 0x4 (4 bytes)
//======================================================================
void __fastcall sub_3A8EF4(_DWORD *a1, int a2, int a3, int a4)
{
  *a1 = a4;
  JUMPOUT(0x3A8A38);
}


//======================================================================
// sub_3A8EF8
// address: 0x003A8EF8   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_3A8EF8(int a1)
{
  int v1; // r12

  return ((int (__fastcall *)(int))(v1 + 0x3A8F00))(a1 - 8);
}


//======================================================================
// sub_3A8F08
// address: 0x003A8F08   size: 0x10 (16 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003A8F08  STMDAVS R3, {R3,R8,R10,R12,SP,PC}
//   003A8F0C  LDMDAVS R11, {R2,R3,R8,R9,R11-SP}
//   003A8F10  DCB 0xC0
//   003A8F12  DCB 0xFF
//   003A8F16  DCB    8

//======================================================================
// sub_3A8F1C
// address: 0x003A8F1C   size: 0x4E (78 bytes)
//======================================================================
int *__fastcall sub_3A8F1C(int *a1, int *a2, int a3)
{
  _DWORD *v3; // r3
  int v7; // r3
  _DWORD *v8; // r0
  int v9; // r3

  v3 = (_DWORD *)a2[1];
  *a1 = (int)v3;
  v3 -= 3;
  *(int *)((char *)a1 + *v3) = a2[2];
  a1[1] = 0;
  sub_391734((int)a1 + *v3, a3);
  v7 = a2[3];
  a1[2] = v7;
  v8 = (int *)((char *)a1 + *(_DWORD *)(v7 - 12) + 8);
  *v8 = a2[4];
  sub_391734((int)v8, a3);
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[5];
  a1[2] = a2[6];
  return a1;
}


//======================================================================
// sub_3A8F80
// address: 0x003A8F80   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_3A8F80(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 12;
  sub_392DEC((_DWORD *)(a1 + 12));
  *(_DWORD *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 129) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_465204;
  *(_DWORD *)(a1 + 12) = &off_465218;
  sub_391734(v2, a2);
  *(_DWORD *)(a1 + 8) = &off_4651DC;
  *(_DWORD *)(a1 + 12) = &off_4651F0;
  sub_391734(v2, a2);
  *(_DWORD *)a1 = &off_46524C;
  *(_DWORD *)(a1 + 12) = &off_465274;
  *(_DWORD *)(a1 + 8) = &off_465260;
  return a1;
}


//======================================================================
// sub_3A9028
// address: 0x003A9028   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_3A9028(int *result, int *a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r3

  v2 = *a2;
  *result = *a2;
  *(int *)((char *)result + *(_DWORD *)(v2 - 12)) = a2[5];
  result[2] = a2[6];
  v3 = a2[3];
  result[2] = v3;
  *(int *)((char *)result + *(_DWORD *)(v3 - 12) + 8) = a2[4];
  v4 = a2[1];
  *result = v4;
  *(int *)((char *)result + *(_DWORD *)(v4 - 12)) = a2[2];
  result[1] = 0;
  return result;
}


//======================================================================
// sub_3A9058
// address: 0x003A9058   size: 0x4C (76 bytes)
//======================================================================
int *__fastcall sub_3A9058(int *a1, int *a2)
{
  _DWORD *v2; // r3
  int v5; // r3
  _DWORD *v6; // r0
  int v7; // r3

  v2 = (_DWORD *)a2[1];
  *a1 = (int)v2;
  v2 -= 3;
  *(int *)((char *)a1 + *v2) = a2[2];
  a1[1] = 0;
  sub_391734((int)a1 + *v2, 0);
  v5 = a2[3];
  a1[2] = v5;
  v6 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12) + 8);
  *v6 = a2[4];
  sub_391734((int)v6, 0);
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[5];
  a1[2] = a2[6];
  return a1;
}


//======================================================================
// sub_3A90B8
// address: 0x003A90B8   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_3A90B8(int a1)
{
  int v1; // r5

  v1 = a1 + 12;
  sub_392DEC((_DWORD *)(a1 + 12));
  *(_DWORD *)(a1 + 124) = 0;
  *(_BYTE *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 129) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_465204;
  *(_DWORD *)(a1 + 12) = &off_465218;
  sub_391734(v1, 0);
  *(_DWORD *)(a1 + 8) = &off_4651DC;
  *(_DWORD *)(a1 + 12) = &off_4651F0;
  sub_391734(v1, 0);
  *(_DWORD *)a1 = &off_46524C;
  *(_DWORD *)(a1 + 12) = &off_465274;
  *(_DWORD *)(a1 + 8) = &off_465260;
  return a1;
}


//======================================================================
// sub_3A9164
// address: 0x003A9164   size: 0x4E (78 bytes)
//======================================================================
int *__fastcall sub_3A9164(int *a1, int *a2, int a3)
{
  _DWORD *v3; // r3
  int v7; // r3
  _DWORD *v8; // r0
  int v9; // r3

  v3 = (_DWORD *)a2[1];
  *a1 = (int)v3;
  v3 -= 3;
  *(int *)((char *)a1 + *v3) = a2[2];
  a1[1] = 0;
  sub_391B70((int)a1 + *v3, a3);
  v7 = a2[3];
  a1[2] = v7;
  v8 = (int *)((char *)a1 + *(_DWORD *)(v7 - 12) + 8);
  *v8 = a2[4];
  sub_391B70((int)v8, a3);
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[5];
  a1[2] = a2[6];
  return a1;
}


//======================================================================
// sub_3A91C8
// address: 0x003A91C8   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_3A91C8(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 12;
  sub_392DEC((_DWORD *)(a1 + 12));
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_4652B4;
  *(_DWORD *)(a1 + 12) = &off_4652C8;
  sub_391B70(v2, a2);
  *(_DWORD *)(a1 + 8) = &off_46528C;
  *(_DWORD *)(a1 + 12) = &off_4652A0;
  sub_391B70(v2, a2);
  *(_DWORD *)a1 = &off_4652FC;
  *(_DWORD *)(a1 + 12) = &off_465324;
  *(_DWORD *)(a1 + 8) = off_465310;
  return a1;
}


//======================================================================
// sub_3A9270
// address: 0x003A9270   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_3A9270(int *result, int *a2)
{
  int v2; // r3
  int v3; // r3
  int v4; // r3

  v2 = *a2;
  *result = *a2;
  *(int *)((char *)result + *(_DWORD *)(v2 - 12)) = a2[5];
  result[2] = a2[6];
  v3 = a2[3];
  result[2] = v3;
  *(int *)((char *)result + *(_DWORD *)(v3 - 12) + 8) = a2[4];
  v4 = a2[1];
  *result = v4;
  *(int *)((char *)result + *(_DWORD *)(v4 - 12)) = a2[2];
  result[1] = 0;
  return result;
}


//======================================================================
// sub_3A92A0
// address: 0x003A92A0   size: 0x4C (76 bytes)
//======================================================================
int *__fastcall sub_3A92A0(int *a1, int *a2)
{
  _DWORD *v2; // r3
  int v5; // r3
  _DWORD *v6; // r0
  int v7; // r3

  v2 = (_DWORD *)a2[1];
  *a1 = (int)v2;
  v2 -= 3;
  *(int *)((char *)a1 + *v2) = a2[2];
  a1[1] = 0;
  sub_391B70((int)a1 + *v2, 0);
  v5 = a2[3];
  a1[2] = v5;
  v6 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12) + 8);
  *v6 = a2[4];
  sub_391B70((int)v6, 0);
  v7 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[5];
  a1[2] = a2[6];
  return a1;
}


//======================================================================
// sub_3A9300
// address: 0x003A9300   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_3A9300(int a1)
{
  int v1; // r5

  v1 = a1 + 12;
  sub_392DEC((_DWORD *)(a1 + 12));
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_BYTE *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 148) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_4652B4;
  *(_DWORD *)(a1 + 12) = &off_4652C8;
  sub_391B70(v1, 0);
  *(_DWORD *)(a1 + 8) = &off_46528C;
  *(_DWORD *)(a1 + 12) = &off_4652A0;
  sub_391B70(v1, 0);
  *(_DWORD *)a1 = &off_4652FC;
  *(_DWORD *)(a1 + 12) = &off_465324;
  *(_DWORD *)(a1 + 8) = off_465310;
  return a1;
}


//======================================================================
// sub_3A93A8
// address: 0x003A93A8   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_3A93A8(int a1, int a2)
{
  int v2; // r3
  int result; // r0

  v2 = *(_DWORD *)(a1 + 24);
  result = a2;
  if ( (*(_BYTE *)(v2 + a2) & 2) != 0 )
    return (unsigned __int8)(a2 - 32);
  return result;
}


//======================================================================
// sub_3A93BC
// address: 0x003A93BC   size: 0x22 (34 bytes)
//======================================================================
_BYTE *__fastcall sub_3A93BC(int a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v4; // r4

  v4 = a2;
  if ( a2 < a3 )
  {
    do
    {
      *v4 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 8))(a1, (unsigned __int8)*v4);
      ++v4;
    }
    while ( v4 != a3 );
  }
  return a3;
}


//======================================================================
// sub_3A93E0
// address: 0x003A93E0   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_3A93E0(int a1, int a2)
{
  int v2; // r3
  int result; // r0

  v2 = *(_DWORD *)(a1 + 24);
  result = a2;
  if ( (*(_BYTE *)(v2 + a2) & 1) != 0 )
    return (unsigned __int8)(a2 + 32);
  return result;
}


//======================================================================
// sub_3A93F4
// address: 0x003A93F4   size: 0x22 (34 bytes)
//======================================================================
_BYTE *__fastcall sub_3A93F4(int a1, _BYTE *a2, _BYTE *a3)
{
  _BYTE *v4; // r4

  v4 = a2;
  if ( a2 < a3 )
  {
    do
    {
      *v4 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 16))(a1, (unsigned __int8)*v4);
      ++v4;
    }
    while ( v4 != a3 );
  }
  return a3;
}


//======================================================================
// sub_3A9418
// address: 0x003A9418   size: 0xC (12 bytes)
//======================================================================
int sub_3A9418()
{
  return ctype_ + 1;
}


//======================================================================
// sub_3A9428
// address: 0x003A9428   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_3A9428(int a1, int a2, int a3, char a4, int a5)
{
  *(_DWORD *)(a1 + 4) = a5 != 0;
  *(_DWORD *)a1 = &off_465038;
  *(_BYTE *)(a1 + 12) = a4 & (a3 != 0);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  if ( a3 == 0 )
    a3 = ctype_ + 1;
  *(_DWORD *)(a1 + 24) = a3;
  j_memset((void *)(a1 + 29), 0, 0x100u);
  *(_BYTE *)(a1 + 28) = 0;
  j_memset((void *)(a1 + 285), 0, 0x100u);
  *(_BYTE *)(a1 + 541) = 0;
  return a1;
}


//======================================================================
// sub_3A9498
// address: 0x003A9498   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_3A9498(int a1, int a2, char a3, int a4)
{
  *(_DWORD *)(a1 + 4) = a4 != 0;
  *(_DWORD *)a1 = &off_465038;
  *(_BYTE *)(a1 + 12) = a3 & (a2 != 0);
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  if ( a2 == 0 )
    a2 = ctype_ + 1;
  *(_DWORD *)(a1 + 24) = a2;
  j_memset((void *)(a1 + 29), 0, 0x100u);
  *(_BYTE *)(a1 + 28) = 0;
  j_memset((void *)(a1 + 285), 0, 0x100u);
  *(_BYTE *)(a1 + 541) = 0;
  return a1;
}


//======================================================================
// sub_3A9504
// address: 0x003A9504   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3A9504(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 20);
}


//======================================================================
// sub_3A950C
// address: 0x003A950C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3A950C(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24);
}


//======================================================================
// sub_3A9514
// address: 0x003A9514   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3A9514(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 52);
}


//======================================================================
// sub_3A951C
// address: 0x003A951C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3A951C(int a1)
{
  return (unsigned __int8)*(_DWORD *)(*(_DWORD *)(a1 + 8) + 56)
       | ((unsigned __int8)BYTE1(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 56)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 56)) << 16)
       | (HIBYTE(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 56)) << 24);
}


//======================================================================
// sub_3A9544
// address: 0x003A9544   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3A9544(int a1)
{
  return (unsigned __int8)*(_DWORD *)(*(_DWORD *)(a1 + 8) + 60)
       | ((unsigned __int8)BYTE1(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 60)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 60)) << 16)
       | (HIBYTE(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 60)) << 24);
}


//======================================================================
// sub_3A956C
// address: 0x003A956C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3A956C(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 20);
}


//======================================================================
// sub_3A9574
// address: 0x003A9574   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3A9574(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 24);
}


//======================================================================
// sub_3A957C
// address: 0x003A957C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3A957C(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 52);
}


//======================================================================
// sub_3A9584
// address: 0x003A9584   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3A9584(int a1)
{
  return (unsigned __int8)*(_DWORD *)(*(_DWORD *)(a1 + 8) + 56)
       | ((unsigned __int8)BYTE1(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 56)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 56)) << 16)
       | (HIBYTE(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 56)) << 24);
}


//======================================================================
// sub_3A95AC
// address: 0x003A95AC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3A95AC(int a1)
{
  return (unsigned __int8)*(_DWORD *)(*(_DWORD *)(a1 + 8) + 60)
       | ((unsigned __int8)BYTE1(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 60)) << 8)
       | ((unsigned __int8)BYTE2(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 60)) << 16)
       | (HIBYTE(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 60)) << 24);
}


//======================================================================
// sub_3A95D4
// address: 0x003A95D4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3A95D4(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 36);
}


//======================================================================
// sub_3A95DC
// address: 0x003A95DC   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3A95DC(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 8) + 40);
}


//======================================================================
// sub_3A95E4
// address: 0x003A95E4   size: 0x4 (4 bytes)
//======================================================================
int sub_3A95E4()
{
  return 0;
}


//======================================================================
// sub_3A95E8
// address: 0x003A95E8   size: 0x4 (4 bytes)
//======================================================================
int sub_3A95E8()
{
  return 0;
}


//======================================================================
// sub_3A95F0
// address: 0x003A95F0   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A95F0(int a1, int *a2, unsigned int a3)
{
  int result; // r0
  int v4; // r3

  for ( result = 0; a3 > (unsigned int)a2; result = __ROR4__(result, 25) + v4 )
    v4 = *a2++;
  return result;
}


//======================================================================
// sub_3A9608
// address: 0x003A9608   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9608(_DWORD *a1)
{
  *a1 = &off_465638;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9620
// address: 0x003A9620   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9620(_DWORD *a1)
{
  *a1 = &off_465650;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9638
// address: 0x003A9638   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9638(_DWORD *a1)
{
  *a1 = &off_465448;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9650
// address: 0x003A9650   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9650(_DWORD *a1)
{
  *a1 = &off_465488;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9668
// address: 0x003A9668   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9668(_DWORD *a1)
{
  *a1 = &off_4654B8;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9680
// address: 0x003A9680   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9680(_DWORD *a1)
{
  *a1 = &off_465668;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9698
// address: 0x003A9698   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9698(_DWORD *a1)
{
  *a1 = &off_465668;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A96B0
// address: 0x003A96B0   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A96B0(_DWORD *a1)
{
  *a1 = &off_465698;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A96C8
// address: 0x003A96C8   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A96C8(_DWORD *a1)
{
  *a1 = &off_465698;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A96E0
// address: 0x003A96E0   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A96E0(_DWORD *a1)
{
  *a1 = &off_465568;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A96F8
// address: 0x003A96F8   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A96F8(_DWORD *a1)
{
  *a1 = &off_4653B8;
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9710
// address: 0x003A9710   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A9710(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 8));
  return a1;
}


//======================================================================
// sub_3A9728
// address: 0x003A9728   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A9728(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 8));
  return a1;
}


//======================================================================
// sub_3A9740
// address: 0x003A9740   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A9740(int a1, int a2)
{
  sub_3BF0BC(a1, *(char **)(*(_DWORD *)(a2 + 8) + 8));
  return a1;
}


//======================================================================
// sub_3A9758
// address: 0x003A9758   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A9758(int a1, int a2)
{
  sub_3B859C(a1, *(wchar_t **)(*(_DWORD *)(a2 + 8) + 28));
  return a1;
}


//======================================================================
// sub_3A9770
// address: 0x003A9770   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A9770(int a1, int a2)
{
  sub_3B859C(a1, *(wchar_t **)(*(_DWORD *)(a2 + 8) + 36));
  return a1;
}


//======================================================================
// sub_3A9788
// address: 0x003A9788   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A9788(int a1, int a2)
{
  sub_3B859C(a1, *(wchar_t **)(*(_DWORD *)(a2 + 8) + 44));
  return a1;
}


//======================================================================
// sub_3A97A0
// address: 0x003A97A0   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A97A0(int a1, int a2)
{
  sub_3B859C(a1, *(wchar_t **)(*(_DWORD *)(a2 + 8) + 28));
  return a1;
}


//======================================================================
// sub_3A97B8
// address: 0x003A97B8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A97B8(int a1, int a2)
{
  sub_3B859C(a1, *(wchar_t **)(*(_DWORD *)(a2 + 8) + 36));
  return a1;
}


//======================================================================
// sub_3A97D0
// address: 0x003A97D0   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A97D0(int a1, int a2)
{
  sub_3B859C(a1, *(wchar_t **)(*(_DWORD *)(a2 + 8) + 44));
  return a1;
}


//======================================================================
// sub_3A97E8
// address: 0x003A97E8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A97E8(int a1, int a2)
{
  sub_3B859C(a1, *(wchar_t **)(*(_DWORD *)(a2 + 8) + 20));
  return a1;
}


//======================================================================
// sub_3A9800
// address: 0x003A9800   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_3A9800(int a1, int a2)
{
  sub_3B859C(a1, *(wchar_t **)(*(_DWORD *)(a2 + 8) + 28));
  return a1;
}


//======================================================================
// sub_3A9818
// address: 0x003A9818   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_3A9818(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  *(_DWORD *)a1 = &off_465708;
  if ( *(_BYTE *)(a1 + 108) != 0 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 != nullptr )
      operator delete[](v2);
    v3 = *(void **)(a1 + 28);
    if ( v3 != nullptr )
      operator delete[](v3);
    v4 = *(void **)(a1 + 36);
    if ( v4 != nullptr )
      operator delete[](v4);
    v5 = *(void **)(a1 + 44);
    if ( v5 != nullptr )
      operator delete[](v5);
  }
  sub_3A84B4((_DWORD *)a1);
  return a1;
}


//======================================================================
// sub_3A9864
// address: 0x003A9864   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_3A9864(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  *(_DWORD *)a1 = &off_465718;
  if ( *(_BYTE *)(a1 + 108) != 0 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 != nullptr )
      operator delete[](v2);
    v3 = *(void **)(a1 + 28);
    if ( v3 != nullptr )
      operator delete[](v3);
    v4 = *(void **)(a1 + 36);
    if ( v4 != nullptr )
      operator delete[](v4);
    v5 = *(void **)(a1 + 44);
    if ( v5 != nullptr )
      operator delete[](v5);
  }
  sub_3A84B4((_DWORD *)a1);
  return a1;
}


//======================================================================
// sub_3A98B0
// address: 0x003A98B0   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_3A98B0(int a1)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0

  *(_DWORD *)a1 = &off_465728;
  if ( *(_BYTE *)(a1 + 292) != 0 )
  {
    v2 = *(void **)(a1 + 8);
    if ( v2 != nullptr )
      operator delete[](v2);
    v3 = *(void **)(a1 + 20);
    if ( v3 != nullptr )
      operator delete[](v3);
    v4 = *(void **)(a1 + 28);
    if ( v4 != nullptr )
      operator delete[](v4);
  }
  sub_3A84B4((_DWORD *)a1);
  return a1;
}


//======================================================================
// sub_3A98F4
// address: 0x003A98F4   size: 0x12 (18 bytes)
//======================================================================
void *__fastcall sub_3A98F4(void *a1)
{
  sub_3A9818((int)a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9908
// address: 0x003A9908   size: 0x12 (18 bytes)
//======================================================================
void *__fastcall sub_3A9908(void *a1)
{
  sub_3A9864((int)a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A991C
// address: 0x003A991C   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A991C(_DWORD *a1)
{
  *a1 = &off_465638;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A993C
// address: 0x003A993C   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A993C(_DWORD *a1)
{
  *a1 = &off_465650;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A995C
// address: 0x003A995C   size: 0x12 (18 bytes)
//======================================================================
void *__fastcall sub_3A995C(void *a1)
{
  sub_3A98B0((int)a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9970
// address: 0x003A9970   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9970(_DWORD *a1)
{
  *a1 = &off_465448;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9990
// address: 0x003A9990   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9990(_DWORD *a1)
{
  *a1 = &off_465488;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A99B0
// address: 0x003A99B0   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3A99B0(_DWORD *a1)
{
  sub_3A9668(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A99C4
// address: 0x003A99C4   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A99C4(_DWORD *a1)
{
  *a1 = &off_465668;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A99E4
// address: 0x003A99E4   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A99E4(_DWORD *a1)
{
  *a1 = &off_465668;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9A04
// address: 0x003A9A04   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9A04(_DWORD *a1)
{
  *a1 = &off_465698;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9A24
// address: 0x003A9A24   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9A24(_DWORD *a1)
{
  *a1 = &off_465698;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9A44
// address: 0x003A9A44   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9A44(_DWORD *a1)
{
  *a1 = &off_465568;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9A64
// address: 0x003A9A64   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9A64(_DWORD *a1)
{
  *a1 = &off_4653B8;
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9A84
// address: 0x003A9A84   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9A84(_DWORD *a1)
{
  *a1 = &off_465548;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9AB0
// address: 0x003A9AB0   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9AB0(_DWORD *a1)
{
  sub_3A9A84(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9AC4
// address: 0x003A9AC4   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9AC4(_DWORD *a1)
{
  *a1 = &off_4656E8;
  sub_3A9A84(a1);
  return a1;
}


//======================================================================
// sub_3A9ADC
// address: 0x003A9ADC   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9ADC(_DWORD *a1)
{
  *a1 = &off_4656E8;
  sub_3A9A84(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9AFC
// address: 0x003A9AFC   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9AFC(_DWORD *a1)
{
  *a1 = &off_465378;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9B28
// address: 0x003A9B28   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9B28(_DWORD *a1)
{
  *a1 = &off_4655C8;
  sub_3BFB78();
  return a1;
}


//======================================================================
// sub_3A9B40
// address: 0x003A9B40   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9B40(_DWORD *a1)
{
  *a1 = &off_4655C8;
  sub_3BFB78();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9B60
// address: 0x003A9B60   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9B60(_DWORD *a1)
{
  *a1 = &off_465600;
  sub_3BFB30();
  return a1;
}


//======================================================================
// sub_3A9B78
// address: 0x003A9B78   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9B78(_DWORD *a1)
{
  *a1 = &off_465600;
  sub_3BFB30();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9B98
// address: 0x003A9B98   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9B98(_DWORD *a1)
{
  *a1 = &off_465420;
  sub_3BF8CC();
  return a1;
}


//======================================================================
// sub_3A9BB0
// address: 0x003A9BB0   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9BB0(_DWORD *a1)
{
  *a1 = &off_465420;
  sub_3BF8CC();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9BD0
// address: 0x003A9BD0   size: 0x3E (62 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9BD0(_DWORD *a1)
{
  char *v1; // r5
  int v3; // r0

  v1 = (char *)a1[4];
  *a1 = &off_4654C8;
  if ( v1 != sub_3A8868() && v1 != nullptr )
    operator delete[](v1);
  v3 = a1[2];
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  sub_3A5428(a1 + 3);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9C1C
// address: 0x003A9C1C   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9C1C(_DWORD *a1)
{
  sub_3A9BD0(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9C30
// address: 0x003A9C30   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9C30(_DWORD *a1)
{
  *a1 = &off_465598;
  sub_39D648(a1);
  return a1;
}


//======================================================================
// sub_3A9C48
// address: 0x003A9C48   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9C48(_DWORD *a1)
{
  *a1 = &off_465598;
  sub_39D648(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9C68
// address: 0x003A9C68   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9C68(_DWORD *a1)
{
  *a1 = &off_465378;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3A9C94
// address: 0x003A9C94   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9C94(_DWORD *a1)
{
  *a1 = &off_465378;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9CC4
// address: 0x003A9CC4   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9CC4(_DWORD *a1)
{
  *a1 = &off_465378;
  sub_3A5428(a1 + 2);
  sub_3A84B4(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3A9CF4
// address: 0x003A9CF4   size: 0xEA (234 bytes)
//======================================================================
int __fastcall sub_3A9CF4(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r9
  int v8; // r8
  int *v9; // r11
  int v10; // r7
  wchar_t *v11; // r5
  wchar_t *v12; // r4
  wchar_t *v13; // r4
  wchar_t *v14; // r5
  int v15; // r0
  int v16; // r5
  int v18; // [sp+0h] [bp-14h]
  _BYTE v19[8]; // [sp+Ch] [bp-8h] BYREF

  v7 = sub_3B8258(a2, a3, v19, 0);
  v18 = sub_3B8258(a4, a5, v19, 0);
  v8 = 4 * *(_DWORD *)(v7 - 12) + v7;
  v9 = (int *)(v18 - 12);
  v10 = v18 + 4 * *(_DWORD *)(v18 - 12);
  v11 = (wchar_t *)v18;
  v12 = (wchar_t *)v7;
  while ( 1 )
  {
    v15 = sub_3A7E94(a1, v12, v11);
    if ( v15 != 0 )
    {
      v16 = v15;
      goto LABEL_7;
    }
    v13 = &v12[j_wcslen(v12)];
    v14 = &v11[j_wcslen(v11)];
    if ( v14 == (wchar_t *)v10 )
    {
      v16 = v13 != (wchar_t *)v8;
      goto LABEL_7;
    }
    if ( v13 == (wchar_t *)v8 )
      break;
    v12 = v13 + 1;
    v11 = v14 + 1;
  }
  v16 = -1;
LABEL_7:
  if ( v9 != &dword_55FB64 && sub_3C82FC(v18 - 4, -1) <= 0 )
    sub_3B7350(v9, v19);
  if ( (int *)(v7 - 12) != &dword_55FB64 && sub_3C82FC(v7 - 4, -1) <= 0 )
    sub_3B7350(v7 - 12, v19);
  return v16;
}


//======================================================================
// sub_3A9DF0
// address: 0x003A9DF0   size: 0x11C (284 bytes)
//======================================================================
int *__fastcall sub_3A9DF0(int *a1, int a2, int a3, int a4)
{
  wchar_t *v8; // r4
  wchar_t *v9; // r11
  size_t v10; // r6
  size_t v11; // r0
  wchar_t *v12; // r5
  int v13; // r2
  int *v14; // r3
  int v15; // r1
  unsigned int v16; // r8
  size_t v17; // r0
  size_t v18; // r2
  size_t v19; // r0
  wchar_t *v20; // r4
  wchar_t *v22; // [sp+Ch] [bp-10h]
  _BYTE v23[8]; // [sp+14h] [bp-8h] BYREF

  *a1 = (int)&unk_55FB70;
  v8 = (wchar_t *)sub_3B8258(a3, a4, v23, 0);
  v22 = v8 - 3;
  v9 = &v8[*(v8 - 3)];
  v10 = (a4 - a3) >> 1;
  v11 = 4 * v10;
  if ( v10 > 0x1FC00000 )
    v11 = -1;
  v12 = (wchar_t *)operator new[](v11);
  while ( 1 )
  {
    v17 = sub_3A7EAC(a2, v12, v8, v10);
    v18 = v17;
    if ( v10 <= v17 )
    {
      v10 = v17 + 1;
      if ( v12 != nullptr )
        operator delete[](v12);
      v19 = 4 * v10;
      if ( v10 > 0x1FC00000 )
        v19 = -1;
      v12 = (wchar_t *)operator new[](v19);
      v18 = sub_3A7EAC(a2, v12, v8, v10);
    }
    sub_3B7CD4(a1, v12, v18);
    v20 = &v8[j_wcslen(v8)];
    if ( v20 == v9 )
      break;
    v13 = *a1;
    v8 = v20 + 1;
    v14 = (int *)(*a1 - 12);
    v15 = *v14;
    v16 = *v14 + 1;
    if ( v16 > *(_DWORD *)(*a1 - 8) || *(int *)(v13 - 4) > 0 )
    {
      sub_3B7B3C(a1, *v14 + 1);
      v13 = *a1;
      v14 = (int *)(*a1 - 12);
      v15 = *v14;
    }
    *(_DWORD *)(4 * v15 + v13) = 0;
    if ( v14 != &dword_55FB64 )
    {
      *(_DWORD *)(v13 - 4) = 0;
      *v14 = v16;
      *(_DWORD *)(4 * v16 + v13) = 0;
    }
  }
  if ( v12 != nullptr )
    operator delete[](v12);
  sub_3B7358(v22, v23);
  return a1;
}


//======================================================================
// sub_3A9F48
// address: 0x003A9F48   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9F48(_DWORD *a1, int a2)
{
  *a1 = &off_465510;
  a1[1] = a2 != 0;
  a1[2] = 0;
  sub_3BFE58();
  return a1;
}


//======================================================================
// sub_3A9F78
// address: 0x003A9F78   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9F78(_DWORD *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  a1[2] = a2;
  *a1 = &off_465510;
  sub_3BFE58();
  return a1;
}


//======================================================================
// sub_3A9FA8
// address: 0x003A9FA8   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3A9FA8(_DWORD *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = &off_465510;
  a1[2] = 0;
  sub_3BFE58(a1);
  return a1;
}


//======================================================================
// sub_3A9FD8
// address: 0x003A9FD8   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3A9FD8(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_3A9FE4
// address: 0x003A9FE4   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3A9FE4(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_3A9FF0
// address: 0x003A9FF0   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3A9FF0(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 16))();
  return a1;
}


//======================================================================
// sub_3AA000
// address: 0x003AA000   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA000(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 20))();
  return a1;
}


//======================================================================
// sub_3AA010
// address: 0x003AA010   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA010(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 24))();
  return a1;
}


//======================================================================
// sub_3AA020
// address: 0x003AA020   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA020(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 28))();
  return a1;
}


//======================================================================
// sub_3AA030
// address: 0x003AA030   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AA030(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}


//======================================================================
// sub_3AA03C
// address: 0x003AA03C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3AA03C(int a1)
{
  unsigned int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  return (BYTE1(v1) << 8) | (unsigned __int8)v1 | (BYTE2(v1) << 16) | (HIBYTE(v1) << 24);
}


//======================================================================
// sub_3AA068
// address: 0x003AA068   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3AA068(int a1)
{
  unsigned int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
  return (BYTE1(v1) << 8) | (unsigned __int8)v1 | (BYTE2(v1) << 16) | (HIBYTE(v1) << 24);
}


//======================================================================
// sub_3AA094
// address: 0x003AA094   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_3AA094(_DWORD *a1, int a2)
{
  *a1 = &off_4654D8;
  a1[1] = a2 != 0;
  a1[2] = 0;
  sub_3BFD88();
  return a1;
}


//======================================================================
// sub_3AA0C4
// address: 0x003AA0C4   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3AA0C4(_DWORD *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  a1[2] = a2;
  *a1 = &off_4654D8;
  sub_3BFD88();
  return a1;
}


//======================================================================
// sub_3AA0F4
// address: 0x003AA0F4   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3AA0F4(_DWORD *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = &off_4654D8;
  a1[2] = 0;
  sub_3BFD88(a1);
  return a1;
}


//======================================================================
// sub_3AA124
// address: 0x003AA124   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AA124(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_3AA130
// address: 0x003AA130   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AA130(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_3AA13C
// address: 0x003AA13C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA13C(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 16))();
  return a1;
}


//======================================================================
// sub_3AA14C
// address: 0x003AA14C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA14C(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 20))();
  return a1;
}


//======================================================================
// sub_3AA15C
// address: 0x003AA15C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA15C(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 24))();
  return a1;
}


//======================================================================
// sub_3AA16C
// address: 0x003AA16C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA16C(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 28))();
  return a1;
}


//======================================================================
// sub_3AA17C
// address: 0x003AA17C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AA17C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 32))(a1);
}


//======================================================================
// sub_3AA188
// address: 0x003AA188   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3AA188(int a1)
{
  unsigned int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  return (BYTE1(v1) << 8) | (unsigned __int8)v1 | (BYTE2(v1) << 16) | (HIBYTE(v1) << 24);
}


//======================================================================
// sub_3AA1B4
// address: 0x003AA1B4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3AA1B4(int a1)
{
  unsigned int v1; // r0

  v1 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 40))(a1);
  return (BYTE1(v1) << 8) | (unsigned __int8)v1 | (BYTE2(v1) << 16) | (HIBYTE(v1) << 24);
}


//======================================================================
// sub_3AA288
// address: 0x003AA288   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall sub_3AA288(_DWORD *a1, char *a2, int a3)
{
  int v6; // [sp+4h] [bp-4h] BYREF

  *a1 = &off_465510;
  a1[1] = a3 != 0;
  a1[2] = 0;
  sub_3BFE58(a1);
  *a1 = &off_4655C8;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5400(&v6, a2);
    sub_3BFE58(a1);
    sub_3A5428(&v6);
  }
  return a1;
}


//======================================================================
// sub_3AA318
// address: 0x003AA318   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall sub_3AA318(_DWORD *a1, char *a2, int a3)
{
  int v6; // [sp+4h] [bp-4h] BYREF

  *a1 = &off_4654D8;
  a1[1] = a3 != 0;
  a1[2] = 0;
  sub_3BFD88(a1);
  *a1 = &off_465600;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5400(&v6, a2);
    sub_3BFD88(a1);
    sub_3A5428(&v6);
  }
  return a1;
}


//======================================================================
// sub_3AA3A8
// address: 0x003AA3A8   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_3AA3A8(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_465638;
  return result;
}


//======================================================================
// sub_3AA3BC
// address: 0x003AA3BC   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_3AA3BC(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 a7, int a8, int a9, int a10)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, _DWORD, int, int, int, int, int))(*(_DWORD *)a2 + 8))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_3AA3FC
// address: 0x003AA3FC   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_3AA3FC(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 a7, int a8, int a9, int a10)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, _DWORD, int, int, int, int, int))(*(_DWORD *)a2 + 12))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_3AA43C
// address: 0x003AA43C   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_3AA43C(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_465650;
  return result;
}


//======================================================================
// sub_3AA450
// address: 0x003AA450   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_3AA450(int a1, int a2, int a3, int a4, unsigned __int8 a5, int a6, int a7)
{
  (*(void (__fastcall **)(int, int, int, int, _DWORD, int, int))(*(_DWORD *)a2 + 8))(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_3AA488
// address: 0x003AA488   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3AA488(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a1);
  return a1;
}


//======================================================================
// sub_3AA4B8
// address: 0x003AA4B8   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3AA4B8(_DWORD *a1, int a2)
{
  *a1 = &off_4653F8;
  a1[1] = a2 != 0;
  a1[2] = 0;
  sub_3BF9D0(a1);
  return a1;
}


//======================================================================
// sub_3AA4E8
// address: 0x003AA4E8   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_3AA4E8(_DWORD *a1, int a2, int a3)
{
  a1[2] = a2;
  a1[1] = a3 != 0;
  *a1 = &off_4653F8;
  sub_3BF9D0(a1);
  return a1;
}


//======================================================================
// sub_3AA514
// address: 0x003AA514   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_3AA514(_DWORD *a1, int a2, int a3)
{
  *a1 = &off_4653F8;
  a1[1] = a3 != 0;
  a1[2] = 0;
  sub_3BF9D0(a1);
  return a1;
}


//======================================================================
// sub_3AA540
// address: 0x003AA540   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AA540(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_3AA54C
// address: 0x003AA54C   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AA54C(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_3AA558
// address: 0x003AA558   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA558(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 16))();
  return a1;
}


//======================================================================
// sub_3AA568
// address: 0x003AA568   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA568(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 20))();
  return a1;
}


//======================================================================
// sub_3AA578
// address: 0x003AA578   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AA578(int a1, int a2)
{
  (*(void (**)(void))(*(_DWORD *)a2 + 24))();
  return a1;
}


//======================================================================
// sub_3AA5B8
// address: 0x003AA5B8   size: 0x66 (102 bytes)
//======================================================================
_DWORD *__fastcall sub_3AA5B8(_DWORD *a1, char *a2, int a3)
{
  int v6; // [sp+4h] [bp-4h] BYREF

  *a1 = &off_4653F8;
  a1[1] = a3 != 0;
  a1[2] = 0;
  sub_3BF9D0(a1);
  *a1 = &off_465420;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5400(&v6, a2);
    sub_3BF9D0(a1);
    sub_3A5428(&v6);
  }
  return a1;
}


//======================================================================
// sub_3AA644
// address: 0x003AA644   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_3AA644(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_465448;
  return result;
}


//======================================================================
// sub_3AA658
// address: 0x003AA658   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA658(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 8))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA68C
// address: 0x003AA68C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA68C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 12))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA6C0
// address: 0x003AA6C0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA6C0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 16))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA6F4
// address: 0x003AA6F4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA6F4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 20))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA728
// address: 0x003AA728   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA728(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 24))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA75C
// address: 0x003AA75C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA75C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 28))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA790
// address: 0x003AA790   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA790(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 32))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA7C4
// address: 0x003AA7C4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA7C4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 36))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA7F8
// address: 0x003AA7F8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA7F8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 40))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA82C
// address: 0x003AA82C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA82C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 44))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA860
// address: 0x003AA860   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AA860(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 48))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AA894
// address: 0x003AA894   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_3AA894(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_465488;
  return result;
}


//======================================================================
// sub_3AA8A8
// address: 0x003AA8A8   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_3AA8A8(int a1, int a2, int a3, int a4, int a5, int a6, unsigned __int8 a7)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, _DWORD))(*(_DWORD *)a2 + 8))(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_3AA8D8
// address: 0x003AA8D8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3AA8D8(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a1);
  return a1;
}


//======================================================================
// sub_3AA900
// address: 0x003AA900   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3AA900(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 16))(a1);
  return a1;
}


//======================================================================
// sub_3AA928
// address: 0x003AA928   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_3AA928(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 20))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_3AA958
// address: 0x003AA958   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_3AA958(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 24))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_3AA988
// address: 0x003AA988   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_3AA988(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 28))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_3AA9B8
// address: 0x003AA9B8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_3AA9B8(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 32))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a3,
    a4);
  return a1;
}


//======================================================================
// sub_3AA9E8
// address: 0x003AA9E8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3AA9E8(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 36))(a1);
  return a1;
}


//======================================================================
// sub_3AAA10
// address: 0x003AAA10   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAA10(_DWORD *a1, int a2)
{
  *a1 = &off_4654C8;
  a1[1] = a2 != 0;
  a1[2] = 0;
  a1[4] = sub_3A8868();
  sub_3A57CC(a1);
  return a1;
}


//======================================================================
// sub_3AAA48
// address: 0x003AAA48   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAA48(_DWORD *a1, int a2, int a3)
{
  a1[2] = a2;
  a1[1] = a3 != 0;
  *a1 = &off_4654C8;
  a1[4] = sub_3A8868();
  sub_3A57CC(a1);
  return a1;
}


//======================================================================
// sub_3AAA7C
// address: 0x003AAA7C   size: 0x64 (100 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAA7C(_DWORD *a1, int a2, const char *a3, int a4)
{
  const char *v6; // r5
  size_t v8; // r9
  void *v9; // r8

  a1[1] = a4 != 0;
  *a1 = &off_4654C8;
  a1[2] = 0;
  v6 = sub_3A8868();
  if ( j_strcmp(a3, v6) == 0 )
  {
    a1[4] = v6;
  }
  else
  {
    v8 = j_strlen(a3) + 1;
    v9 = operator new[](v8);
    j_memcpy(v9, a3, v8);
    a1[4] = v9;
  }
  sub_3A57CC(a1);
  return a1;
}


//======================================================================
// sub_3AAB0C
// address: 0x003AAB0C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AAB0C(int result, _DWORD *a2)
{
  *a2 = *(_DWORD *)(*(_DWORD *)(result + 8) + 8);
  a2[1] = *(_DWORD *)(*(_DWORD *)(result + 8) + 12);
  return result;
}


//======================================================================
// sub_3AAB1C
// address: 0x003AAB1C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AAB1C(int result, _DWORD *a2)
{
  *a2 = *(_DWORD *)(*(_DWORD *)(result + 8) + 16);
  a2[1] = *(_DWORD *)(*(_DWORD *)(result + 8) + 20);
  return result;
}


//======================================================================
// sub_3AAB2C
// address: 0x003AAB2C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AAB2C(int result, _DWORD *a2)
{
  *a2 = *(_DWORD *)(*(_DWORD *)(result + 8) + 24);
  a2[1] = *(_DWORD *)(*(_DWORD *)(result + 8) + 28);
  return result;
}


//======================================================================
// sub_3AAB40
// address: 0x003AAB40   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3AAB40(int result, _DWORD *a2)
{
  *a2 = *(_DWORD *)(*(_DWORD *)(result + 8) + 32);
  a2[1] = *(_DWORD *)(*(_DWORD *)(result + 8) + 36);
  return result;
}


//======================================================================
// sub_3AACFC
// address: 0x003AACFC   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_3AACFC(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_465668;
  return result;
}


//======================================================================
// sub_3AAD10
// address: 0x003AAD10   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_3AAD10(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)a2 + 8))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AAD48
// address: 0x003AAD48   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAD48(_DWORD *result, int a2, int a3)
{
  result[1] = a3 != 0;
  *result = &off_465680;
  return result;
}


//======================================================================
// sub_3AAD5C
// address: 0x003AAD5C   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_3AAD5C(__int64 result)
{
  HIDWORD(result) = HIDWORD(result) != 0;
  *(_DWORD *)(result + 4) = HIDWORD(result);
  *(_DWORD *)result = &off_465698;
  return result;
}


//======================================================================
// sub_3AAD70
// address: 0x003AAD70   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AAD70(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_3AAD7C
// address: 0x003AAD7C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AAD7C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 12))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AADB0
// address: 0x003AADB0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AADB0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 16))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AADE4
// address: 0x003AADE4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AADE4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 20))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AAE18
// address: 0x003AAE18   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AAE18(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 24))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AAE4C
// address: 0x003AAE4C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_3AAE4C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  (*(void (__fastcall **)(int, int, int, int, int, int, int, int, int))(*(_DWORD *)a2 + 28))(
    a1,
    a2,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9);
  return a1;
}


//======================================================================
// sub_3AAE80
// address: 0x003AAE80   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAE80(_DWORD *result, int a2, int a3)
{
  result[1] = a3 != 0;
  *result = &off_4656C0;
  return result;
}


//======================================================================
// sub_3AAE94
// address: 0x003AAE94   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAE94(_DWORD *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = &off_465548;
  a1[2] = sub_3A8844();
  return a1;
}


//======================================================================
// sub_3AAEC0
// address: 0x003AAEC0   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAEC0(_DWORD *a1, int a2, int a3, int a4)
{
  a1[1] = a4 != 0;
  *a1 = &off_465548;
  a1[2] = sub_3A8844();
  return a1;
}


//======================================================================
// sub_3AAEEC
// address: 0x003AAEEC   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AAEEC(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_3AAEF8
// address: 0x003AAEF8   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AAEF8(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_3AAF04
// address: 0x003AAF04   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3AAF04(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a1);
  return a1;
}


//======================================================================
// sub_3AAF20
// address: 0x003AAF20   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AAF20(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
}


//======================================================================
// sub_3AAF2C
// address: 0x003AAF2C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3AAF2C(int a1, int a2)
{
  return *(_DWORD *)a2;
}


//======================================================================
// sub_3AAF30
// address: 0x003AAF30   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAF30(_DWORD *result)
{
  *result = &unk_55FB70;
  return result;
}


//======================================================================
// sub_3AAF40
// address: 0x003AAF40   size: 0x4A (74 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAF40(_DWORD *a1, char *a2, int a3)
{
  sub_3AAE94(a1, a3);
  *a1 = &off_4656E8;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5428(a1 + 2);
    sub_3A5400(a1 + 2, a2);
  }
  return a1;
}


//======================================================================
// sub_3AAFA0
// address: 0x003AAFA0   size: 0x4A (74 bytes)
//======================================================================
_DWORD *__fastcall sub_3AAFA0(_DWORD *a1, char *a2, int a3)
{
  sub_39D704(a1, a3);
  *a1 = &off_465598;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5428(a1 + 2);
    sub_3A5400(a1 + 2, a2);
  }
  return a1;
}


//======================================================================
// sub_3AB000
// address: 0x003AB000   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_3AB000(_DWORD *a1, int a2)
{
  a1[1] = a2 != 0;
  *a1 = &off_465378;
  a1[2] = sub_3A8844();
  return a1;
}


//======================================================================
// sub_3AB02C
// address: 0x003AB02C   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3AB02C(_DWORD *a1, int a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = &off_465378;
  a1[2] = sub_3A5430();
  return a1;
}


//======================================================================
// sub_3AB054
// address: 0x003AB054   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_3AB054(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_3AB068
// address: 0x003AB068   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3AB068(int a1, int a2)
{
  (*(void (__fastcall **)(int))(*(_DWORD *)a2 + 12))(a1);
  return a1;
}


//======================================================================
// sub_3AB078
// address: 0x003AB078   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3AB078(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 16))(a1);
}


//======================================================================
// sub_3AB084
// address: 0x003AB084   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall sub_3AB084(_DWORD *a1, char *a2, int a3)
{
  a1[1] = a3 != 0;
  *a1 = &off_465378;
  a1[2] = sub_3A8844();
  *a1 = &off_465398;
  if ( j_strcmp(a2, "C") != 0 && j_strcmp(a2, "POSIX") != 0 )
  {
    sub_3A5428(a1 + 2);
    sub_3A5400(a1 + 2, a2);
  }
  return a1;
}


//======================================================================
// sub_3AB100
// address: 0x003AB100   size: 0x40 (64 bytes)
//======================================================================
void *__fastcall sub_3AB100(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FAE0);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::ctype<wchar_t>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AB14C
// address: 0x003AB14C   size: 0x12A (298 bytes)
//======================================================================
_DWORD *__fastcall sub_3AB14C(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, int *a8, int *a9)
{
  int *v11; // r4
  void *i; // r5
  int v13; // r1
  int *v14; // r3
  int v15; // r0
  int v16; // r6
  _DWORD *v17; // r4
  int v19; // [sp+1Ch] [bp-20h]
  int v21; // [sp+2Ch] [bp-10h]
  _DWORD *v22; // [sp+30h] [bp-Ch] BYREF
  unsigned __int8 v23; // [sp+34h] [bp-8h]

  v21 = a4;
  v11 = a8;
  v19 = (unsigned __int8)a4;
  for ( i = sub_3AB100(a5 + 108); a9 != v11; v19 = v23 )
  {
    while ( (*(int (__fastcall **)(void *, int, _DWORD))(*(_DWORD *)i + 48))(i, *v11, 0) != 37 )
    {
      v13 = *v11;
      if ( v19 == 0 )
      {
        v14 = (int *)a3[5];
        if ( (unsigned int)v14 >= a3[6] )
        {
          v13 = (*(int (__fastcall **)(_DWORD *, int))(*a3 + 52))(a3, v13);
        }
        else
        {
          *v14 = v13;
          a3[5] = v14 + 1;
        }
        if ( v13 == -1 )
          v19 = 1;
      }
      if ( a9 == ++v11 )
        goto LABEL_15;
    }
    if ( a9 == v11 + 1 )
      break;
    v15 = (*(int (__fastcall **)(void *, int, _DWORD))(*(_DWORD *)i + 48))(i, v11[1], 0);
    v16 = v15;
    if ( v15 == 79 || v15 == 69 )
    {
      if ( a9 == v11 + 2 )
        break;
      v15 = (*(int (__fastcall **)(void *, int, _DWORD))(*(_DWORD *)i + 48))(i, v11[2], 0);
      v17 = v11 + 2;
    }
    else
    {
      v17 = v11 + 1;
      v16 = 0;
    }
    LOBYTE(v21) = v19;
    (*(void (__fastcall **)(_DWORD **, int, _DWORD *, int, int, int, int, int, int))(*(_DWORD *)a2 + 8))(
      &v22,
      a2,
      a3,
      v21,
      a5,
      a6,
      a7,
      v15,
      v16);
    v11 = v17 + 1;
    a3 = v22;
  }
LABEL_15:
  LOBYTE(v21) = v19;
  *a1 = a3;
  a1[1] = v21;
  return a1;
}


//======================================================================
// sub_3AB278
// address: 0x003AB278   size: 0x19E (414 bytes)
//======================================================================
_DWORD *__fastcall sub_3AB278(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        _DWORD *a12)
{
  void *v15; // r10
  int v16; // r5
  int i; // r8
  int v18; // r9
  int v19; // r1
  int v20; // r3
  _DWORD *v22; // r3
  _DWORD *v23; // r3
  int v24; // r1
  int v25; // r0
  unsigned int v26; // r3
  _DWORD *v27; // r3
  int v28; // r6

  v15 = sub_3AB100(a11 + 108);
  if ( a10 == 2 )
  {
    v28 = 10;
  }
  else
  {
    v28 = 1;
    if ( a10 == 4 )
      v28 = 1000;
  }
  v16 = 0;
  for ( i = 0; ; ++i )
  {
    if ( a3 == nullptr )
    {
      v18 = 1;
LABEL_8:
      v19 = a5;
      if ( a5 == 0 )
        goto LABEL_25;
      goto LABEL_9;
    }
    v18 = 0;
    if ( a4 != -1 )
      goto LABEL_8;
    v23 = (_DWORD *)a3[2];
    a4 = (unsigned int)v23 >= a3[3] ? (*(int (__fastcall **)(_DWORD *, int))(*a3 + 36))(a3, a4 + 1) : *v23;
    v18 = 0;
    if ( a4 != -1 )
      goto LABEL_8;
    v19 = a5;
    v18 = 1;
    a3 = nullptr;
    if ( a5 == 0 )
    {
LABEL_25:
      v20 = 1;
      goto LABEL_10;
    }
LABEL_9:
    v20 = 0;
    if ( a6 == -1 )
    {
      v22 = *(_DWORD **)(v19 + 8);
      a6 = (unsigned int)v22 >= *(_DWORD *)(v19 + 12) ? (*(int (__fastcall **)(int))(*(_DWORD *)a5 + 36))(a5) : *v22;
      v20 = 0;
      if ( a6 == -1 )
      {
        v20 = 1;
        a5 = 0;
      }
    }
LABEL_10:
    if ( v18 == v20 )
      break;
    if ( i == a10 )
      goto LABEL_15;
    if ( a3 != nullptr )
    {
      v24 = a4;
      if ( a4 == -1 )
      {
        v27 = (_DWORD *)a3[2];
        v24 = (unsigned int)v27 >= a3[3] ? (*(int (__fastcall **)(_DWORD *))(*a3 + 36))(a3) : *v27;
        a4 = v24;
        if ( v24 == -1 )
          a3 = nullptr;
      }
    }
    else
    {
      v24 = -1;
    }
    v25 = (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)v15 + 48))(v15, v24, 42) - 48;
    if ( (unsigned __int8)v25 > 9u )
      goto LABEL_12;
    v16 = 10 * v16 + v25;
    if ( v28 * v16 > a9 || a8 >= v28 * v16 + v28 )
      goto LABEL_12;
    v28 /= 10;
    if ( a3 != nullptr )
    {
      v26 = a3[2];
      if ( v26 >= a3[3] )
        (*(void (__fastcall **)(_DWORD *))(*a3 + 40))(a3);
      else
        a3[2] = v26 + 4;
      a4 = -1;
    }
  }
  if ( i != a10 )
  {
LABEL_12:
    if ( i != 2 || a10 != 4 )
    {
      *a12 |= 4u;
      goto LABEL_16;
    }
    v16 -= 100;
  }
LABEL_15:
  *a7 = v16;
LABEL_16:
  *a1 = a3;
  a1[1] = a4;
  return a1;
}


//======================================================================
// sub_3AB418
// address: 0x003AB418   size: 0x102 (258 bytes)
//======================================================================
_DWORD *__fastcall sub_3AB418(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5, int a6, int a7, _DWORD *a8, int a9)
{
  _DWORD *v11; // r4
  int v12; // r5
  int v13; // r2
  int v14; // r8
  _DWORD *v15; // r0
  int v16; // r3
  int *v18; // r3
  int v19; // r0
  _DWORD *v20; // r3
  _DWORD v21[2]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD *v22; // [sp+28h] [bp-14h]
  int v23; // [sp+2Ch] [bp-10h]
  int v24; // [sp+30h] [bp-Ch] BYREF
  int v25; // [sp+34h] [bp-8h] BYREF

  v22 = a3;
  v23 = a4;
  sub_3AB100(a7 + 108);
  v25 = 0;
  sub_3AB278(v21, a2, v22, v23, a5, a6, &v24, 0, 9999, 4, a7, &v25);
  v22 = (_DWORD *)v21[0];
  v23 = v21[1];
  v11 = (_DWORD *)v21[0];
  v12 = v21[1];
  if ( v25 != 0 )
  {
    *a8 |= 4u;
    if ( v11 != nullptr )
      goto LABEL_5;
  }
  else
  {
    v13 = v24 - 1900;
    if ( v24 < 0 )
      v13 = v24 + 100;
    *(_DWORD *)(a9 + 20) = v13;
    if ( v11 != nullptr )
    {
LABEL_5:
      v14 = 0;
      if ( v12 == -1 )
      {
        v20 = (_DWORD *)v11[2];
        v12 = (unsigned int)v20 >= v11[3] ? (*(int (__fastcall **)(_DWORD *))(*v11 + 36))(v11) : *v20;
        v14 = 0;
        if ( v12 == -1 )
        {
          v14 = 1;
          v11 = nullptr;
        }
      }
      v15 = (_DWORD *)a5;
      if ( a5 != 0 )
        goto LABEL_7;
LABEL_13:
      v16 = 1;
      goto LABEL_8;
    }
  }
  v15 = (_DWORD *)a5;
  v14 = 1;
  if ( a5 == 0 )
    goto LABEL_13;
LABEL_7:
  v16 = 0;
  if ( a6 == -1 )
  {
    v18 = (int *)v15[2];
    if ( (unsigned int)v18 >= v15[3] )
      v19 = (*(int (__fastcall **)(_DWORD *, int))(*v15 + 36))(v15, a6 + 1);
    else
      v19 = *v18;
    v16 = v19 == -1;
  }
LABEL_8:
  if ( v16 == v14 )
    *a8 |= 2u;
  *a1 = v11;
  a1[1] = v12;
  return a1;
}


//======================================================================
// sub_3AB524
// address: 0x003AB524   size: 0x40 (64 bytes)
//======================================================================
void *__fastcall sub_3AB524(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55ED0C);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::codecvt<wchar_t,char,mbstate_t>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AB570
// address: 0x003AB570   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AB570(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB34);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::collate<wchar_t>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AB5B8
// address: 0x003AB5B8   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AB5B8(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB50);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::numpunct<wchar_t>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AB600
// address: 0x003AB600   size: 0x252 (594 bytes)
//======================================================================
int __fastcall sub_3AB600(int a1, int a2)
{
  int *v4; // r5
  int v5; // r3
  int *v6; // r7
  size_t v7; // r0
  char *v8; // r7
  int v9; // r8
  int v10; // r2
  unsigned int v11; // r3
  int v12; // r3
  unsigned int v13; // r0
  int *v14; // r8
  wchar_t *v15; // r9
  int v16; // r8
  int v17; // r3
  unsigned int v18; // r0
  int *v19; // r8
  size_t v20; // r0
  wchar_t *v21; // r8
  int v22; // r11
  int v23; // r3
  int v24; // r0
  int v25; // r3
  void *v26; // r5
  size_t v28; // r0
  int v29; // [sp+8h] [bp-1Ch] BYREF
  int v30; // [sp+Ch] [bp-18h] BYREF
  int v31; // [sp+10h] [bp-14h] BYREF
  int v32; // [sp+14h] [bp-10h] BYREF
  int v33; // [sp+18h] [bp-Ch] BYREF
  _DWORD v34[2]; // [sp+1Ch] [bp-8h] BYREF

  *(_BYTE *)(a1 + 292) = 1;
  v4 = (int *)sub_3AB5B8(a2);
  (*(void (__fastcall **)(int *, int *))(*v4 + 16))(&v29, v4);
  v5 = v29;
  v6 = (int *)(v29 - 12);
  v7 = *(_DWORD *)(v29 - 12);
  *(_DWORD *)(a1 + 12) = v7;
  if ( v6 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v5 - 4, -1) <= 0 )
      sub_3BDF60(v6, v34);
    v7 = *(_DWORD *)(a1 + 12);
  }
  v8 = (char *)operator new[](v7);
  (*(void (__fastcall **)(int *, int *))(*v4 + 16))(&v30, v4);
  sub_3BD82C((int)&v30, v8);
  v9 = v30 - 12;
  if ( (int *)(v30 - 12) != &dword_55FB7C && sub_3C82FC(v30 - 4, -1) <= 0 )
    sub_3BDF60(v9, v34);
  v10 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v8;
  LOBYTE(v11) = 0;
  if ( v10 != 0 )
    v11 = (unsigned int)((*v8 >> 31) - *v8) >> 31;
  *(_BYTE *)(a1 + 16) = v11;
  (*(void (__fastcall **)(int *, int *))(*v4 + 20))(&v31, v4);
  v12 = v31;
  v13 = *(_DWORD *)(v31 - 12);
  v14 = (int *)(v31 - 12);
  *(_DWORD *)(a1 + 24) = v13;
  if ( v14 != &dword_55FB64 )
  {
    if ( sub_3C82FC(v12 - 4, -1) <= 0 )
      sub_3B7350(v14, v34);
    v13 = *(_DWORD *)(a1 + 24);
  }
  if ( v13 <= 0x1FC00000 )
    v28 = 4 * v13;
  else
    v28 = -1;
  v15 = (wchar_t *)operator new[](v28);
  (*(void (__fastcall **)(int *, int *))(*v4 + 20))(&v32, v4);
  sub_3B6BE8((int)&v32, v15);
  v16 = v32 - 12;
  if ( (int *)(v32 - 12) != &dword_55FB64 && sub_3C82FC(v32 - 4, -1) <= 0 )
    sub_3B7350(v16, v34);
  *(_DWORD *)(a1 + 20) = v15;
  (*(void (__fastcall **)(int *, int *))(*v4 + 24))(&v33, v4);
  v17 = v33;
  v18 = *(_DWORD *)(v33 - 12);
  v19 = (int *)(v33 - 12);
  *(_DWORD *)(a1 + 32) = v18;
  if ( v19 != &dword_55FB64 )
  {
    if ( sub_3C82FC(v17 - 4, -1) <= 0 )
      sub_3B7350(v19, v34);
    v18 = *(_DWORD *)(a1 + 32);
  }
  if ( v18 > 0x1FC00000 )
    v20 = -1;
  else
    v20 = 4 * v18;
  v21 = (wchar_t *)operator new[](v20);
  (*(void (__fastcall **)(_DWORD *, int *))(*v4 + 24))(v34, v4);
  sub_3B6BE8((int)v34, v21);
  v22 = v34[0] - 12;
  if ( (int *)(v34[0] - 12) != &dword_55FB64 && sub_3C82FC(v34[0] - 4, -1) <= 0 )
    sub_3B7350(v22, &v33);
  v23 = *v4;
  *(_DWORD *)(a1 + 28) = v21;
  v24 = (*(int (__fastcall **)(int *))(v23 + 8))(v4);
  v25 = *v4;
  *(_DWORD *)(a1 + 36) = v24;
  *(_DWORD *)(a1 + 40) = (*(int (__fastcall **)(int *))(v25 + 12))(v4);
  v26 = sub_3AB100(a2);
  (*(void (__fastcall **)(void *, char *, char *, int))(*(_DWORD *)v26 + 44))(
    v26,
    off_472454[0],
    off_472454[0] + 36,
    a1 + 44);
  return (*(int (__fastcall **)(void *, char *, char *, int))(*(_DWORD *)v26 + 44))(
           v26,
           off_472450[0],
           off_472450[0] + 26,
           a1 + 188);
}


//======================================================================
// sub_3AB8F0
// address: 0x003AB8F0   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AB8F0(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB48);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AB938
// address: 0x003AB938   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AB938(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB4C);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AB980
// address: 0x003AB980   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AB980(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB5C);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<wchar_t,true>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AB9C8
// address: 0x003AB9C8   size: 0x2F2 (754 bytes)
//======================================================================
int __fastcall sub_3AB9C8(int a1, int a2)
{
  int *v3; // r4
  int v4; // r0
  int (__fastcall *v5)(void *); // r3
  int v6; // r0
  int (__fastcall *v7)(void *); // r3
  int v8; // r0
  void (__fastcall *v9)(int *, void *); // r3
  int v10; // r3
  int *v11; // r7
  size_t v12; // r0
  char *v13; // r7
  int v14; // r8
  int v15; // r2
  unsigned int v16; // r3
  int v17; // r3
  unsigned int v18; // r0
  int *v19; // r8
  wchar_t *v20; // r10
  int v21; // r8
  int v22; // r3
  unsigned int v23; // r0
  int *v24; // r8
  wchar_t *v25; // r9
  int v26; // r8
  int v27; // r3
  unsigned int v28; // r0
  int *v29; // r8
  size_t v30; // r0
  wchar_t *v31; // r8
  int v32; // r11
  int v33; // r3
  int v34; // r0
  int v35; // r3
  void *v36; // r0
  size_t v38; // r0
  size_t v39; // r0
  int v41; // [sp+8h] [bp-34h] BYREF
  int v42; // [sp+Ch] [bp-30h] BYREF
  int v43; // [sp+10h] [bp-2Ch] BYREF
  int v44; // [sp+14h] [bp-28h] BYREF
  int v45; // [sp+18h] [bp-24h] BYREF
  int v46; // [sp+1Ch] [bp-20h] BYREF
  int v47; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v48[4]; // [sp+24h] [bp-18h] BYREF
  _DWORD v49[2]; // [sp+34h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 108) = 1;
  v3 = (int *)sub_3AB980(a2);
  v4 = (*(int (__fastcall **)(int *))(*v3 + 8))(v3);
  v5 = *(int (__fastcall **)(void *))(*v3 + 12);
  *(_DWORD *)(a1 + 20) = v4;
  v6 = v5(v3);
  v7 = *(int (__fastcall **)(void *))(*v3 + 32);
  *(_DWORD *)(a1 + 24) = v6;
  v8 = v7(v3);
  v9 = *(void (__fastcall **)(int *, void *))(*v3 + 16);
  *(_DWORD *)(a1 + 52) = v8;
  v9(&v41, v3);
  v10 = v41;
  v11 = (int *)(v41 - 12);
  v12 = *(_DWORD *)(v41 - 12);
  *(_DWORD *)(a1 + 12) = v12;
  if ( v11 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v10 - 4, -1) <= 0 )
      sub_3BDF60(v11, v49);
    v12 = *(_DWORD *)(a1 + 12);
  }
  v13 = (char *)operator new[](v12);
  (*(void (__fastcall **)(int *, int *))(*v3 + 16))(&v42, v3);
  sub_3BD82C((int)&v42, v13);
  v14 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_55FB7C && sub_3C82FC(v42 - 4, -1) <= 0 )
    sub_3BDF60(v14, v49);
  v15 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v13;
  LOBYTE(v16) = 0;
  if ( v15 != 0 )
    v16 = (unsigned int)((*v13 >> 31) - *v13) >> 31;
  *(_BYTE *)(a1 + 16) = v16;
  (*(void (__fastcall **)(int *, int *))(*v3 + 20))(&v43, v3);
  v17 = v43;
  v18 = *(_DWORD *)(v43 - 12);
  v19 = (int *)(v43 - 12);
  *(_DWORD *)(a1 + 32) = v18;
  if ( v19 != &dword_55FB64 )
  {
    if ( sub_3C82FC(v17 - 4, -1) <= 0 )
      sub_3B7350(v19, v49);
    v18 = *(_DWORD *)(a1 + 32);
  }
  if ( v18 <= 0x1FC00000 )
    v38 = 4 * v18;
  else
    v38 = -1;
  v20 = (wchar_t *)operator new[](v38);
  (*(void (__fastcall **)(int *, int *))(*v3 + 20))(&v44, v3);
  sub_3B6BE8((int)&v44, v20);
  v21 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_55FB64 && sub_3C82FC(v44 - 4, -1) <= 0 )
    sub_3B7350(v21, v49);
  *(_DWORD *)(a1 + 28) = v20;
  (*(void (__fastcall **)(int *, int *))(*v3 + 24))(&v45, v3);
  v22 = v45;
  v23 = *(_DWORD *)(v45 - 12);
  v24 = (int *)(v45 - 12);
  *(_DWORD *)(a1 + 40) = v23;
  if ( v24 != &dword_55FB64 )
  {
    if ( sub_3C82FC(v22 - 4, -1) <= 0 )
      sub_3B7350(v24, v49);
    v23 = *(_DWORD *)(a1 + 40);
  }
  if ( v23 <= 0x1FC00000 )
    v39 = 4 * v23;
  else
    v39 = -1;
  v25 = (wchar_t *)operator new[](v39);
  (*(void (__fastcall **)(int *, int *))(*v3 + 24))(&v46, v3);
  sub_3B6BE8((int)&v46, v25);
  v26 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_55FB64 && sub_3C82FC(v46 - 4, -1) <= 0 )
    sub_3B7350(v26, v49);
  *(_DWORD *)(a1 + 36) = v25;
  (*(void (__fastcall **)(int *, int *))(*v3 + 28))(&v47, v3);
  v27 = v47;
  v28 = *(_DWORD *)(v47 - 12);
  v29 = (int *)(v47 - 12);
  *(_DWORD *)(a1 + 48) = v28;
  if ( v29 != &dword_55FB64 )
  {
    if ( sub_3C82FC(v27 - 4, -1) <= 0 )
      sub_3B7350(v29, v49);
    v28 = *(_DWORD *)(a1 + 48);
  }
  if ( v28 > 0x1FC00000 )
    v30 = -1;
  else
    v30 = 4 * v28;
  v31 = (wchar_t *)operator new[](v30);
  (*(void (__fastcall **)(_DWORD *, int *))(*v3 + 28))(v48, v3);
  sub_3B6BE8((int)v48, v31);
  v32 = v48[0] - 12;
  if ( (int *)(v48[0] - 12) != &dword_55FB64 && sub_3C82FC(v48[0] - 4, -1) <= 0 )
    sub_3B7350(v32, v49);
  v33 = *v3;
  *(_DWORD *)(a1 + 44) = v31;
  v34 = (*(int (__fastcall **)(int *))(v33 + 36))(v3);
  *(_DWORD *)(a1 + 56) = v34;
  v35 = *v3;
  v48[2] = v34;
  v48[1] = v34;
  v49[0] = (*(int (__fastcall **)(int *))(v35 + 40))(v3);
  v48[3] = v49[0];
  *(_DWORD *)(a1 + 60) = v49[0];
  v36 = sub_3AB100(a2);
  return (*(int (__fastcall **)(void *, char *, char *, int))(*(_DWORD *)v36 + 44))(
           v36,
           off_472458[0],
           off_472458[0] + 11,
           a1 + 64);
}


//======================================================================
// sub_3ABD80
// address: 0x003ABD80   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3ABD80(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB60);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<wchar_t,false>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3ABDC8
// address: 0x003ABDC8   size: 0x2F2 (754 bytes)
//======================================================================
int __fastcall sub_3ABDC8(int a1, int a2)
{
  int *v3; // r4
  int v4; // r0
  int (__fastcall *v5)(void *); // r3
  int v6; // r0
  int (__fastcall *v7)(void *); // r3
  int v8; // r0
  void (__fastcall *v9)(int *, void *); // r3
  int v10; // r3
  int *v11; // r7
  size_t v12; // r0
  char *v13; // r7
  int v14; // r8
  int v15; // r2
  unsigned int v16; // r3
  int v17; // r3
  unsigned int v18; // r0
  int *v19; // r8
  wchar_t *v20; // r10
  int v21; // r8
  int v22; // r3
  unsigned int v23; // r0
  int *v24; // r8
  wchar_t *v25; // r9
  int v26; // r8
  int v27; // r3
  unsigned int v28; // r0
  int *v29; // r8
  size_t v30; // r0
  wchar_t *v31; // r8
  int v32; // r11
  int v33; // r3
  int v34; // r0
  int v35; // r3
  void *v36; // r0
  size_t v38; // r0
  size_t v39; // r0
  int v41; // [sp+8h] [bp-34h] BYREF
  int v42; // [sp+Ch] [bp-30h] BYREF
  int v43; // [sp+10h] [bp-2Ch] BYREF
  int v44; // [sp+14h] [bp-28h] BYREF
  int v45; // [sp+18h] [bp-24h] BYREF
  int v46; // [sp+1Ch] [bp-20h] BYREF
  int v47; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v48[4]; // [sp+24h] [bp-18h] BYREF
  _DWORD v49[2]; // [sp+34h] [bp-8h] BYREF

  *(_BYTE *)(a1 + 108) = 1;
  v3 = (int *)sub_3ABD80(a2);
  v4 = (*(int (__fastcall **)(int *))(*v3 + 8))(v3);
  v5 = *(int (__fastcall **)(void *))(*v3 + 12);
  *(_DWORD *)(a1 + 20) = v4;
  v6 = v5(v3);
  v7 = *(int (__fastcall **)(void *))(*v3 + 32);
  *(_DWORD *)(a1 + 24) = v6;
  v8 = v7(v3);
  v9 = *(void (__fastcall **)(int *, void *))(*v3 + 16);
  *(_DWORD *)(a1 + 52) = v8;
  v9(&v41, v3);
  v10 = v41;
  v11 = (int *)(v41 - 12);
  v12 = *(_DWORD *)(v41 - 12);
  *(_DWORD *)(a1 + 12) = v12;
  if ( v11 != &dword_55FB7C )
  {
    if ( sub_3C82FC(v10 - 4, -1) <= 0 )
      sub_3BDF60(v11, v49);
    v12 = *(_DWORD *)(a1 + 12);
  }
  v13 = (char *)operator new[](v12);
  (*(void (__fastcall **)(int *, int *))(*v3 + 16))(&v42, v3);
  sub_3BD82C((int)&v42, v13);
  v14 = v42 - 12;
  if ( (int *)(v42 - 12) != &dword_55FB7C && sub_3C82FC(v42 - 4, -1) <= 0 )
    sub_3BDF60(v14, v49);
  v15 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 8) = v13;
  LOBYTE(v16) = 0;
  if ( v15 != 0 )
    v16 = (unsigned int)((*v13 >> 31) - *v13) >> 31;
  *(_BYTE *)(a1 + 16) = v16;
  (*(void (__fastcall **)(int *, int *))(*v3 + 20))(&v43, v3);
  v17 = v43;
  v18 = *(_DWORD *)(v43 - 12);
  v19 = (int *)(v43 - 12);
  *(_DWORD *)(a1 + 32) = v18;
  if ( v19 != &dword_55FB64 )
  {
    if ( sub_3C82FC(v17 - 4, -1) <= 0 )
      sub_3B7350(v19, v49);
    v18 = *(_DWORD *)(a1 + 32);
  }
  if ( v18 <= 0x1FC00000 )
    v38 = 4 * v18;
  else
    v38 = -1;
  v20 = (wchar_t *)operator new[](v38);
  (*(void (__fastcall **)(int *, int *))(*v3 + 20))(&v44, v3);
  sub_3B6BE8((int)&v44, v20);
  v21 = v44 - 12;
  if ( (int *)(v44 - 12) != &dword_55FB64 && sub_3C82FC(v44 - 4, -1) <= 0 )
    sub_3B7350(v21, v49);
  *(_DWORD *)(a1 + 28) = v20;
  (*(void (__fastcall **)(int *, int *))(*v3 + 24))(&v45, v3);
  v22 = v45;
  v23 = *(_DWORD *)(v45 - 12);
  v24 = (int *)(v45 - 12);
  *(_DWORD *)(a1 + 40) = v23;
  if ( v24 != &dword_55FB64 )
  {
    if ( sub_3C82FC(v22 - 4, -1) <= 0 )
      sub_3B7350(v24, v49);
    v23 = *(_DWORD *)(a1 + 40);
  }
  if ( v23 <= 0x1FC00000 )
    v39 = 4 * v23;
  else
    v39 = -1;
  v25 = (wchar_t *)operator new[](v39);
  (*(void (__fastcall **)(int *, int *))(*v3 + 24))(&v46, v3);
  sub_3B6BE8((int)&v46, v25);
  v26 = v46 - 12;
  if ( (int *)(v46 - 12) != &dword_55FB64 && sub_3C82FC(v46 - 4, -1) <= 0 )
    sub_3B7350(v26, v49);
  *(_DWORD *)(a1 + 36) = v25;
  (*(void (__fastcall **)(int *, int *))(*v3 + 28))(&v47, v3);
  v27 = v47;
  v28 = *(_DWORD *)(v47 - 12);
  v29 = (int *)(v47 - 12);
  *(_DWORD *)(a1 + 48) = v28;
  if ( v29 != &dword_55FB64 )
  {
    if ( sub_3C82FC(v27 - 4, -1) <= 0 )
      sub_3B7350(v29, v49);
    v28 = *(_DWORD *)(a1 + 48);
  }
  if ( v28 > 0x1FC00000 )
    v30 = -1;
  else
    v30 = 4 * v28;
  v31 = (wchar_t *)operator new[](v30);
  (*(void (__fastcall **)(_DWORD *, int *))(*v3 + 28))(v48, v3);
  sub_3B6BE8((int)v48, v31);
  v32 = v48[0] - 12;
  if ( (int *)(v48[0] - 12) != &dword_55FB64 && sub_3C82FC(v48[0] - 4, -1) <= 0 )
    sub_3B7350(v32, v49);
  v33 = *v3;
  *(_DWORD *)(a1 + 44) = v31;
  v34 = (*(int (__fastcall **)(int *))(v33 + 36))(v3);
  *(_DWORD *)(a1 + 56) = v34;
  v35 = *v3;
  v48[2] = v34;
  v48[1] = v34;
  v49[0] = (*(int (__fastcall **)(int *))(v35 + 40))(v3);
  v48[3] = v49[0];
  *(_DWORD *)(a1 + 60) = v49[0];
  v36 = sub_3AB100(a2);
  return (*(int (__fastcall **)(void *, char *, char *, int))(*(_DWORD *)v36 + 44))(
           v36,
           off_472458[0],
           off_472458[0] + 11,
           a1 + 64);
}


//======================================================================
// sub_3AC180
// address: 0x003AC180   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AC180(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB54);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AC1C8
// address: 0x003AC1C8   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AC1C8(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB58);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AC210
// address: 0x003AC210   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AC210(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB44);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::__timepunct<wchar_t>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AC258
// address: 0x003AC258   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_3AC258(
        int a1,
        int a2,
        int a3,
        bool a4,
        int a5,
        int a6,
        struct tm *tp,
        unsigned __int8 a8,
        unsigned __int8 a9)
{
  void *v10; // r6
  void *v11; // r7
  bool v12; // r7
  size_t v13; // r8
  wchar_t v17[4]; // [sp+10h] [bp-210h] BYREF
  wchar_t v18[128]; // [sp+20h] [bp-200h] BYREF

  v10 = sub_3AB100(a5 + 108);
  v11 = sub_3AC210(a5 + 108);
  v17[0] = (*(int (__fastcall **)(void *, int))(*(_DWORD *)v10 + 40))(v10, 37);
  if ( a9 != 0 )
  {
    v17[2] = a8;
    v17[1] = a9;
    v17[3] = 0;
  }
  else
  {
    v17[1] = a8;
    v17[2] = 0;
  }
  sub_3A5738((int)v11, v18, 0x80u, v17, tp);
  v12 = a4;
  v13 = j_wcslen(v18);
  if ( !a4 )
    v12 = v13 != (*(int (__fastcall **)(int, wchar_t *, size_t))(*(_DWORD *)a3 + 48))(a3, v18, v13);
  *(_DWORD *)a1 = a3;
  *(_BYTE *)(a1 + 4) = v12;
  return a1;
}


//======================================================================
// sub_3AC2F8
// address: 0x003AC2F8   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AC2F8(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB40);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AC340
// address: 0x003AC340   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AC340(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB3C);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AC388
// address: 0x003AC388   size: 0x3C (60 bytes)
//======================================================================
void *__fastcall sub_3AC388(int a1)
{
  unsigned int v2; // r0
  const void *v3; // r0
  void *result; // r0

  v2 = sub_3A8B84(&dword_55FB38);
  if ( v2 >= *(_DWORD *)(*(_DWORD *)a1 + 8)
    || (v3 = *(const void **)(4 * v2 + *(_DWORD *)(*(_DWORD *)a1 + 4))) == nullptr )
  {
    sub_3BCEE4();
  }
  result = _dynamic_cast(
             v3,
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::messages<wchar_t>,
             0);
  if ( result == nullptr )
    _cxa_bad_cast();
  return result;
}


//======================================================================
// sub_3AC3D0
// address: 0x003AC3D0   size: 0x3E (62 bytes)
//======================================================================
bool __fastcall sub_3AC3D0(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FAE0);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::ctype<wchar_t>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC41C
// address: 0x003AC41C   size: 0x3E (62 bytes)
//======================================================================
bool __fastcall sub_3AC41C(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55ED0C);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::codecvt<wchar_t,char,mbstate_t>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC468
// address: 0x003AC468   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC468(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB34);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::collate<wchar_t>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC4B0
// address: 0x003AC4B0   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC4B0(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB50);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::numpunct<wchar_t>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC4F8
// address: 0x003AC4F8   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC4F8(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB48);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC540
// address: 0x003AC540   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC540(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB4C);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::num_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC588
// address: 0x003AC588   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC588(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB60);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::moneypunct<wchar_t,false>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC5D0
// address: 0x003AC5D0   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC5D0(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB54);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC618
// address: 0x003AC618   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC618(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB58);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::money_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC660
// address: 0x003AC660   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC660(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB44);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::__timepunct<wchar_t>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC6A8
// address: 0x003AC6A8   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC6A8(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB40);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_put<wchar_t,std::ostreambuf_iterator<wchar_t>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC6F0
// address: 0x003AC6F0   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC6F0(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB3C);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC738
// address: 0x003AC738   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_3AC738(int a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  _BOOL4 result; // r0

  v2 = sub_3A8B84(&dword_55FB38);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 4);
  v4 = v2;
  result = false;
  if ( v4 < *(_DWORD *)(*(_DWORD *)a1 + 8) && *(_DWORD *)(4 * v4 + v3) != 0 )
    return _dynamic_cast(
             *(const void **)(4 * v4 + v3),
             (const struct __class_type_info *)&`typeinfo for'std::locale::facet,
             (const struct __class_type_info *)&`typeinfo for'std::messages<wchar_t>,
             0) != nullptr;
  return result;
}


//======================================================================
// sub_3AC780
// address: 0x003AC780   size: 0xF4 (244 bytes)
//======================================================================
_DWORD *__fastcall sub_3AC780(_DWORD *result, int a2, unsigned __int8 *a3, int a4, char *a5, char *a6)
{
  char *v7; // r7
  int v9; // r5
  int v10; // r12
  unsigned int v11; // r6
  _DWORD *v12; // r5
  char *v13; // r3
  int v14; // r1
  unsigned int v15; // r3
  bool v16; // cf
  _DWORD *v17; // r8
  int *v18; // r3
  _DWORD *v19; // r0
  int v20; // r9
  int v21; // r4
  int v22; // r3
  _DWORD *v23; // r12
  int v24; // r8
  _DWORD *v25; // r3
  int *v26; // r4
  int v27; // r5
  int v28; // r0
  int v29; // r3

  v7 = a5;
  v9 = *a3;
  v10 = 0;
  v11 = 0;
LABEL_2:
  if ( (a6 - a5) >> 2 > v9 )
  {
    while ( v9 << 24 > 0 )
    {
      a6 -= 4 * v9;
      if ( v11 >= a4 - 1 )
      {
        ++v10;
        goto LABEL_2;
      }
      v9 = a3[++v11];
      if ( (a6 - a5) >> 2 <= v9 )
        break;
    }
  }
  v12 = result;
  v13 = a5;
  if ( a6 != a5 )
  {
    do
    {
      v14 = *(_DWORD *)v13;
      v13 += 4;
      *v12++ = v14;
    }
    while ( a6 != v13 );
    v15 = 4 * (((unsigned int)(a6 - (a5 + 4)) >> 2) + 1);
    result = (_DWORD *)((char *)result + v15);
    v7 = &a5[v15];
  }
  while ( 1 )
  {
    v16 = v10-- != 0;
    if ( !v16 )
      break;
    while ( 1 )
    {
      *result = a2;
      v17 = result + 1;
      if ( a3[v11] == 0 )
        break;
      v18 = (int *)v7;
      v19 = result + 1;
      v20 = (unsigned __int8)(a3[v11] - 1);
      do
      {
        v21 = *v18++;
        *v19++ = v21;
      }
      while ( v18 != (int *)&v7[4 * v20 + 4] );
      v22 = v20 + 1;
      result = &v17[v22];
      v7 += v22 * 4;
      v16 = v10-- != 0;
      if ( !v16 )
        goto LABEL_15;
    }
    ++result;
  }
LABEL_15:
  while ( 1 )
  {
    v16 = v11-- != 0;
    if ( !v16 )
      break;
    while ( 1 )
    {
      *result = a2;
      v23 = result + 1;
      if ( a3[v11] == 0 )
        break;
      v24 = (unsigned __int8)(a3[v11] - 1);
      v25 = result + 1;
      v26 = (int *)v7;
      v27 = (int)&result[v24 + 2];
      do
      {
        v28 = *v26++;
        *v25++ = v28;
      }
      while ( v25 != (_DWORD *)v27 );
      v29 = v24 + 1;
      result = &v23[v29];
      v7 += v29 * 4;
      v16 = v11-- != 0;
      if ( !v16 )
        return result;
    }
    ++result;
  }
  return result;
}


//======================================================================
// sub_3AC874
// address: 0x003AC874   size: 0x72 (114 bytes)
//======================================================================
wchar_t *__fastcall sub_3AC874(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        wchar_t *s2,
        char *a6,
        char *a7,
        _DWORD *a8)
{
  int v8; // r8
  wchar_t *v9; // r0
  int v10; // r7
  wchar_t *result; // r0
  int v12; // r7

  if ( s2 != nullptr )
  {
    v8 = ((char *)s2 - a7) >> 2;
    v9 = sub_3AC780(a6, a4, a2, a3, a7, &a7[4 * v8]);
    v10 = (char *)v9 - a6;
    result = j_wmemcpy(v9, s2, *a8 - v8);
    v12 = *a8 - v8 + (v10 >> 2);
  }
  else
  {
    result = sub_3AC780(a6, a4, a2, a3, a7, &a7[4 * *a8]);
    v12 = ((char *)result - a6) >> 2;
  }
  *a8 = v12;
  return result;
}


//======================================================================
// sub_3AC8E8
// address: 0x003AC8E8   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3AC8E8(int a1, unsigned __int8 *a2, int a3, int a4, int a5, _DWORD *a6, char *a7, _DWORD *a8)
{
  _DWORD *result; // r0

  result = sub_3AC780(a6, a4, a2, a3, a7, &a7[4 * *a8]);
  *a8 = result - a6;
  return result;
}


//======================================================================
// sub_3AC918
// address: 0x003AC918   size: 0x482 (1154 bytes)
//======================================================================
_DWORD *__fastcall sub_3AC918(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5, wchar_t c, char **a7)
{
  void *v8; // r8
  int v9; // r0
  int *v10; // r6
  int v11; // r4
  int v12; // r9
  char *v13; // r6
  int v14; // r3
  int v15; // r1
  unsigned int v16; // r2
  int v17; // r0
  signed int v18; // r9
  int v20; // r3
  signed int v21; // r10
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r1
  _DWORD *v27; // r2
  int *v28; // r3
  int v29; // r12
  unsigned int v30; // r2
  int v31; // r3
  unsigned int v32; // r9
  int v33; // r6
  int v34; // r1
  unsigned int v35; // r3
  int v36; // r4
  char *v37; // r4
  int v38; // r2
  int *v39; // r3
  int v40; // r12
  _DWORD *v41; // r0
  int v42; // r4
  unsigned int v43; // [sp+10h] [bp-28h]
  _DWORD *v44; // [sp+14h] [bp-24h]
  int v45; // [sp+14h] [bp-24h]
  int v46; // [sp+18h] [bp-20h]
  int v48; // [sp+24h] [bp-14h]
  unsigned int v49; // [sp+24h] [bp-14h]
  unsigned int v50; // [sp+24h] [bp-14h]
  int v51; // [sp+28h] [bp-10h]
  int v52; // [sp+2Ch] [bp-Ch]
  int v53; // [sp+30h] [bp-8h]
  _BOOL4 v54; // [sp+34h] [bp-4h]
  int v55; // [sp+3Ch] [bp+4h]
  _BYTE v56[4]; // [sp+40h] [bp+8h] BYREF
  int v57; // [sp+44h] [bp+Ch] BYREF
  _DWORD *v58; // [sp+48h] [bp+10h] BYREF
  _DWORD v59[2]; // [sp+4Ch] [bp+14h] BYREF

  v55 = a4;
  v46 = (unsigned __int8)a4;
  v8 = sub_3AB100((int)(a5 + 27));
  v9 = sub_3A8B84(&dword_55FB5C);
  v10 = (int *)(*(_DWORD *)(a5[27] + 12) + 4 * v9);
  v11 = *v10;
  v12 = v9;
  if ( *v10 == 0 )
  {
    v41 = operator new(0x70u);
    *v41 = &off_465718;
    v41[1] = 0;
    v41[2] = 0;
    v41[3] = 0;
    *((_BYTE *)v41 + 16) = 0;
    v41[5] = 0;
    v41[6] = 0;
    v41[7] = 0;
    v41[8] = 0;
    v41[9] = 0;
    v41[10] = 0;
    v41[11] = 0;
    v41[12] = 0;
    v41[13] = 0;
    *((_BYTE *)v41 + 56) = 0;
    *((_BYTE *)v41 + 57) = 0;
    *((_BYTE *)v41 + 58) = 0;
    *((_BYTE *)v41 + 59) = 0;
    *((_BYTE *)v41 + 60) = 0;
    *((_BYTE *)v41 + 61) = 0;
    *((_BYTE *)v41 + 62) = 0;
    *((_BYTE *)v41 + 63) = 0;
    *((_BYTE *)v41 + 108) = 0;
    v42 = (int)v41;
    sub_3AB9C8((int)v41, (int)(a5 + 27));
    sub_3A8AB4(a5[27], v42, v12);
    v11 = *v10;
  }
  v13 = *a7;
  if ( *(_DWORD *)*a7 == *(_DWORD *)(v11 + 64) )
  {
    v57 = *(_DWORD *)(v11 + 60);
    v14 = *((_DWORD *)v13 - 3);
    v52 = *(_DWORD *)(v11 + 44);
    v43 = *(_DWORD *)(v11 + 48);
    if ( v14 != 0 )
      v13 += 4;
  }
  else
  {
    v14 = *((_DWORD *)v13 - 3);
    v15 = *(_DWORD *)(v11 + 36);
    v16 = *(_DWORD *)(v11 + 40);
    v57 = *(_DWORD *)(v11 + 56);
    v52 = v15;
    v43 = v16;
  }
  v17 = ((*(int (__fastcall **)(void *, int, char *, char *))(*(_DWORD *)v8 + 20))(v8, 4, v13, &v13[4 * v14]) - (int)v13) >> 2;
  v18 = v17;
  if ( v17 == 0 )
    goto LABEL_6;
  v58 = &unk_55FB70;
  sub_3B7B3C(&v58, 2 * v17);
  v20 = *(_DWORD *)(v11 + 52);
  v21 = v18 - v20;
  if ( v18 - v20 > 0 )
  {
    if ( v20 < 0 )
      v21 = v18;
    if ( *(_DWORD *)(v11 + 12) != 0 )
    {
      sub_3B76A0((int)&v58, 0, *(v58 - 3), 2 * v21, 0);
      v22 = v58;
      if ( (int)*(v58 - 1) >= 0 )
      {
        sub_3B74A0(&v58);
        v22 = v58;
      }
      v23 = sub_3AC780(
              v22,
              *(_DWORD *)(v11 + 24),
              *(unsigned __int8 **)(v11 + 8),
              *(_DWORD *)(v11 + 12),
              v13,
              &v13[4 * v21]);
      v24 = v58;
      v44 = v23;
      if ( (int)*(v58 - 1) >= 0 )
      {
        sub_3B74A0(&v58);
        v24 = v58;
      }
      v25 = *(v24 - 3);
      v26 = v44 - v24;
      if ( v26 > v25 )
        sub_3BD0B4("basic_string::erase");
      sub_3B7394(&v58, v26, v25 - v26, 0);
      v20 = *(_DWORD *)(v11 + 52);
    }
    else
    {
      sub_3B781C((int)&v58, (wchar_t *)v13, v21);
      v20 = *(_DWORD *)(v11 + 52);
    }
  }
  if ( v20 > 0 )
  {
    v27 = v58;
    v28 = v58 - 3;
    v48 = *(_DWORD *)(v11 + 20);
    v29 = *(v58 - 3);
    v45 = v29 + 1;
    if ( (unsigned int)(v29 + 1) > *(v58 - 2) || (int)*(v58 - 1) > 0 )
    {
      sub_3B7B3C(&v58, v45);
      v27 = v58;
      v28 = v58 - 3;
      v29 = *(v58 - 3);
    }
    v27[v29] = v48;
    if ( v28 != &dword_55FB64 )
    {
      *(v27 - 1) = 0;
      *v28 = v45;
      v27[v45] = 0;
    }
    if ( v21 >= 0 )
    {
      sub_3B7CD4(&v58, &v13[4 * v21], *(_DWORD *)(v11 + 52));
    }
    else
    {
      sub_3B7DC8(&v58, -v21, *(_DWORD *)(v11 + 68));
      sub_3B7CD4(&v58, v13, v18);
    }
  }
  v51 = a5[3] & 0xB0;
  v30 = v43 + *(v58 - 3);
  if ( (a5[3] & 0x200) != 0 )
    v31 = *(_DWORD *)(v11 + 32);
  else
    v31 = 0;
  v49 = v30 + v31;
  v59[0] = &unk_55FB70;
  sub_3B7B3C(v59, 2 * (v30 + v31));
  v32 = a5[2];
  v54 = v51 == 16 && v49 < v32;
  v33 = 1;
  v50 = v32 - v49;
  while ( 2 )
  {
    switch ( *((_BYTE *)&v57 + v33 - 1) )
    {
      case 0:
        if ( !v54 )
          goto LABEL_40;
        goto LABEL_62;
      case 1:
        if ( v54 )
        {
LABEL_62:
          sub_3B7DC8(v59, v50, c);
        }
        else
        {
          v38 = v59[0];
          v39 = (int *)(v59[0] - 12);
          v40 = *(_DWORD *)(v59[0] - 12);
          v53 = v40 + 1;
          if ( (unsigned int)(v40 + 1) > *(_DWORD *)(v59[0] - 8) || *(int *)(v59[0] - 4) > 0 )
          {
            sub_3B7B3C(v59, v53);
            v38 = v59[0];
            v39 = (int *)(v59[0] - 12);
            v40 = *(_DWORD *)(v59[0] - 12);
          }
          *(_DWORD *)(4 * v40 + v38) = c;
          if ( v39 != &dword_55FB64 )
          {
            *(_DWORD *)(v38 - 4) = 0;
            *v39 = v53;
            *(_DWORD *)(4 * v53 + v38) = 0;
          }
        }
        goto LABEL_40;
      case 2:
        if ( (a5[3] & 0x200) != 0 )
          sub_3B7CD4(v59, *(_DWORD *)(v11 + 28), *(_DWORD *)(v11 + 32));
        goto LABEL_40;
      case 3:
        if ( v43 == 0 )
        {
          if ( v33 == 4 )
            goto LABEL_43;
LABEL_37:
          ++v33;
          continue;
        }
        sub_3B7E94(v59);
LABEL_40:
        if ( v33 != 4 )
          goto LABEL_37;
        if ( v43 > 1 )
          sub_3B7CD4(v59, v52 + 4, v43 - 1);
LABEL_43:
        v34 = v59[0];
        v35 = *(_DWORD *)(v59[0] - 12);
        if ( v32 <= v35 )
        {
          v32 = *(_DWORD *)(v59[0] - 12);
        }
        else
        {
          if ( v51 == 32 )
            sub_3B7DC8(v59, v32 - v35, c);
          else
            sub_3B76A0((int)v59, 0, 0, v32 - v35, c);
          v34 = v59[0];
        }
        if ( v46 == 0 )
        {
          v46 = v32 != (*(int (__fastcall **)(int, int, unsigned int))(*(_DWORD *)a3 + 48))(a3, v34, v32);
          v34 = v59[0];
        }
        v36 = v34 - 12;
        if ( (int *)(v34 - 12) != &dword_55FB64 && sub_3C82FC(v34 - 4, -1) <= 0 )
          sub_3B7350(v36, v56);
        v37 = (char *)(v58 - 3);
        if ( v58 - 3 != &dword_55FB64 && sub_3C82FC(v58 - 1, -1) <= 0 )
          sub_3B7350(v37, v56);
LABEL_6:
        a5[2] = 0;
        LOBYTE(v55) = v46;
        *a1 = a3;
        a1[1] = v55;
        return a1;
      case 4:
        sub_3B7BB0(v59, &v58);
        goto LABEL_40;
      default:
        goto LABEL_40;
    }
  }
}


//======================================================================
// sub_3ACDAC
// address: 0x003ACDAC   size: 0x482 (1154 bytes)
//======================================================================
_DWORD *__fastcall sub_3ACDAC(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5, wchar_t c, char **a7)
{
  void *v8; // r8
  int v9; // r0
  int *v10; // r6
  int v11; // r4
  int v12; // r9
  char *v13; // r6
  int v14; // r3
  int v15; // r1
  unsigned int v16; // r2
  int v17; // r0
  signed int v18; // r9
  int v20; // r3
  signed int v21; // r10
  _DWORD *v22; // r0
  _DWORD *v23; // r0
  _DWORD *v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r1
  _DWORD *v27; // r2
  int *v28; // r3
  int v29; // r12
  unsigned int v30; // r2
  int v31; // r3
  unsigned int v32; // r9
  int v33; // r6
  int v34; // r1
  unsigned int v35; // r3
  int v36; // r4
  char *v37; // r4
  int v38; // r2
  int *v39; // r3
  int v40; // r12
  _DWORD *v41; // r0
  int v42; // r4
  unsigned int v43; // [sp+10h] [bp-28h]
  _DWORD *v44; // [sp+14h] [bp-24h]
  int v45; // [sp+14h] [bp-24h]
  int v46; // [sp+18h] [bp-20h]
  int v48; // [sp+24h] [bp-14h]
  unsigned int v49; // [sp+24h] [bp-14h]
  unsigned int v50; // [sp+24h] [bp-14h]
  int v51; // [sp+28h] [bp-10h]
  int v52; // [sp+2Ch] [bp-Ch]
  int v53; // [sp+30h] [bp-8h]
  _BOOL4 v54; // [sp+34h] [bp-4h]
  int v55; // [sp+3Ch] [bp+4h]
  _BYTE v56[4]; // [sp+40h] [bp+8h] BYREF
  int v57; // [sp+44h] [bp+Ch] BYREF
  _DWORD *v58; // [sp+48h] [bp+10h] BYREF
  _DWORD v59[2]; // [sp+4Ch] [bp+14h] BYREF

  v55 = a4;
  v46 = (unsigned __int8)a4;
  v8 = sub_3AB100((int)(a5 + 27));
  v9 = sub_3A8B84(&dword_55FB60);
  v10 = (int *)(*(_DWORD *)(a5[27] + 12) + 4 * v9);
  v11 = *v10;
  v12 = v9;
  if ( *v10 == 0 )
  {
    v41 = operator new(0x70u);
    *v41 = &off_465708;
    v41[1] = 0;
    v41[2] = 0;
    v41[3] = 0;
    *((_BYTE *)v41 + 16) = 0;
    v41[5] = 0;
    v41[6] = 0;
    v41[7] = 0;
    v41[8] = 0;
    v41[9] = 0;
    v41[10] = 0;
    v41[11] = 0;
    v41[12] = 0;
    v41[13] = 0;
    *((_BYTE *)v41 + 56) = 0;
    *((_BYTE *)v41 + 57) = 0;
    *((_BYTE *)v41 + 58) = 0;
    *((_BYTE *)v41 + 59) = 0;
    *((_BYTE *)v41 + 60) = 0;
    *((_BYTE *)v41 + 61) = 0;
    *((_BYTE *)v41 + 62) = 0;
    *((_BYTE *)v41 + 63) = 0;
    *((_BYTE *)v41 + 108) = 0;
    v42 = (int)v41;
    sub_3ABDC8((int)v41, (int)(a5 + 27));
    sub_3A8AB4(a5[27], v42, v12);
    v11 = *v10;
  }
  v13 = *a7;
  if ( *(_DWORD *)*a7 == *(_DWORD *)(v11 + 64) )
  {
    v57 = *(_DWORD *)(v11 + 60);
    v14 = *((_DWORD *)v13 - 3);
    v52 = *(_DWORD *)(v11 + 44);
    v43 = *(_DWORD *)(v11 + 48);
    if ( v14 != 0 )
      v13 += 4;
  }
  else
  {
    v14 = *((_DWORD *)v13 - 3);
    v15 = *(_DWORD *)(v11 + 36);
    v16 = *(_DWORD *)(v11 + 40);
    v57 = *(_DWORD *)(v11 + 56);
    v52 = v15;
    v43 = v16;
  }
  v17 = ((*(int (__fastcall **)(void *, int, char *, char *))(*(_DWORD *)v8 + 20))(v8, 4, v13, &v13[4 * v14]) - (int)v13) >> 2;
  v18 = v17;
  if ( v17 == 0 )
    goto LABEL_6;
  v58 = &unk_55FB70;
  sub_3B7B3C(&v58, 2 * v17);
  v20 = *(_DWORD *)(v11 + 52);
  v21 = v18 - v20;
  if ( v18 - v20 > 0 )
  {
    if ( v20 < 0 )
      v21 = v18;
    if ( *(_DWORD *)(v11 + 12) != 0 )
    {
      sub_3B76A0((int)&v58, 0, *(v58 - 3), 2 * v21, 0);
      v22 = v58;
      if ( (int)*(v58 - 1) >= 0 )
      {
        sub_3B74A0(&v58);
        v22 = v58;
      }
      v23 = sub_3AC780(
              v22,
              *(_DWORD *)(v11 + 24),
              *(unsigned __int8 **)(v11 + 8),
              *(_DWORD *)(v11 + 12),
              v13,
              &v13[4 * v21]);
      v24 = v58;
      v44 = v23;
      if ( (int)*(v58 - 1) >= 0 )
      {
        sub_3B74A0(&v58);
        v24 = v58;
      }
      v25 = *(v24 - 3);
      v26 = v44 - v24;
      if ( v26 > v25 )
        sub_3BD0B4("basic_string::erase");
      sub_3B7394(&v58, v26, v25 - v26, 0);
      v20 = *(_DWORD *)(v11 + 52);
    }
    else
    {
      sub_3B781C((int)&v58, (wchar_t *)v13, v21);
      v20 = *(_DWORD *)(v11 + 52);
    }
  }
  if ( v20 > 0 )
  {
    v27 = v58;
    v28 = v58 - 3;
    v48 = *(_DWORD *)(v11 + 20);
    v29 = *(v58 - 3);
    v45 = v29 + 1;
    if ( (unsigned int)(v29 + 1) > *(v58 - 2) || (int)*(v58 - 1) > 0 )
    {
      sub_3B7B3C(&v58, v45);
      v27 = v58;
      v28 = v58 - 3;
      v29 = *(v58 - 3);
    }
    v27[v29] = v48;
    if ( v28 != &dword_55FB64 )
    {
      *(v27 - 1) = 0;
      *v28 = v45;
      v27[v45] = 0;
    }
    if ( v21 >= 0 )
    {
      sub_3B7CD4(&v58, &v13[4 * v21], *(_DWORD *)(v11 + 52));
    }
    else
    {
      sub_3B7DC8(&v58, -v21, *(_DWORD *)(v11 + 68));
      sub_3B7CD4(&v58, v13, v18);
    }
  }
  v51 = a5[3] & 0xB0;
  v30 = v43 + *(v58 - 3);
  if ( (a5[3] & 0x200) != 0 )
    v31 = *(_DWORD *)(v11 + 32);
  else
    v31 = 0;
  v49 = v30 + v31;
  v59[0] = &unk_55FB70;
  sub_3B7B3C(v59, 2 * (v30 + v31));
  v32 = a5[2];
  v54 = v51 == 16 && v49 < v32;
  v33 = 1;
  v50 = v32 - v49;
  while ( 2 )
  {
    switch ( *((_BYTE *)&v57 + v33 - 1) )
    {
      case 0:
        if ( !v54 )
          goto LABEL_40;
        goto LABEL_62;
      case 1:
        if ( v54 )
        {
LABEL_62:
          sub_3B7DC8(v59, v50, c);
        }
        else
        {
          v38 = v59[0];
          v39 = (int *)(v59[0] - 12);
          v40 = *(_DWORD *)(v59[0] - 12);
          v53 = v40 + 1;
          if ( (unsigned int)(v40 + 1) > *(_DWORD *)(v59[0] - 8) || *(int *)(v59[0] - 4) > 0 )
          {
            sub_3B7B3C(v59, v53);
            v38 = v59[0];
            v39 = (int *)(v59[0] - 12);
            v40 = *(_DWORD *)(v59[0] - 12);
          }
          *(_DWORD *)(4 * v40 + v38) = c;
          if ( v39 != &dword_55FB64 )
          {
            *(_DWORD *)(v38 - 4) = 0;
            *v39 = v53;
            *(_DWORD *)(4 * v53 + v38) = 0;
          }
        }
        goto LABEL_40;
      case 2:
        if ( (a5[3] & 0x200) != 0 )
          sub_3B7CD4(v59, *(_DWORD *)(v11 + 28), *(_DWORD *)(v11 + 32));
        goto LABEL_40;
      case 3:
        if ( v43 == 0 )
        {
          if ( v33 == 4 )
            goto LABEL_43;
LABEL_37:
          ++v33;
          continue;
        }
        sub_3B7E94(v59);
LABEL_40:
        if ( v33 != 4 )
          goto LABEL_37;
        if ( v43 > 1 )
          sub_3B7CD4(v59, v52 + 4, v43 - 1);
LABEL_43:
        v34 = v59[0];
        v35 = *(_DWORD *)(v59[0] - 12);
        if ( v32 <= v35 )
        {
          v32 = *(_DWORD *)(v59[0] - 12);
        }
        else
        {
          if ( v51 == 32 )
            sub_3B7DC8(v59, v32 - v35, c);
          else
            sub_3B76A0((int)v59, 0, 0, v32 - v35, c);
          v34 = v59[0];
        }
        if ( v46 == 0 )
        {
          v46 = v32 != (*(int (__fastcall **)(int, int, unsigned int))(*(_DWORD *)a3 + 48))(a3, v34, v32);
          v34 = v59[0];
        }
        v36 = v34 - 12;
        if ( (int *)(v34 - 12) != &dword_55FB64 && sub_3C82FC(v34 - 4, -1) <= 0 )
          sub_3B7350(v36, v56);
        v37 = (char *)(v58 - 3);
        if ( v58 - 3 != &dword_55FB64 && sub_3C82FC(v58 - 1, -1) <= 0 )
          sub_3B7350(v37, v56);
LABEL_6:
        a5[2] = 0;
        LOBYTE(v55) = v46;
        *a1 = a3;
        a1[1] = v55;
        return a1;
      case 4:
        sub_3B7BB0(v59, &v58);
        goto LABEL_40;
      default:
        goto LABEL_40;
    }
  }
}


//======================================================================
// sub_3AD240
// address: 0x003AD240   size: 0x11A (282 bytes)
//======================================================================
_DWORD *__fastcall sub_3AD240(
        _DWORD *a1,
        int a2,
        int a3,
        int a4,
        unsigned __int8 a5,
        _DWORD *a6,
        wchar_t a7,
        long double a8)
{
  void *v9; // r10
  int v10; // r11
  char *v11; // r3
  char *v12; // r11
  char *v13; // r4
  char v15[324]; // [sp+10h] [bp-140h] BYREF
  int v16; // [sp+154h] [bp+4h]
  int v17; // [sp+158h] [bp+8h]
  int *v18; // [sp+15Ch] [bp+Ch]
  int v19; // [sp+160h] [bp+10h]
  int v20; // [sp+164h] [bp+14h]
  int v21; // [sp+16Ch] [bp+1Ch] BYREF
  int v22; // [sp+170h] [bp+20h] BYREF
  char *v23[2]; // [sp+174h] [bp+24h] BYREF

  v17 = a2;
  v20 = a4;
  v19 = a3;
  v16 = a5;
  sub_3A84F8(&v22, a6 + 27);
  v9 = sub_3AB100((int)&v22);
  v23[0] = (char *)sub_3A8844();
  v10 = sub_393A38((int)v23, v15, 0, "%.*Lf", 0, a8);
  v18 = &v21;
  sub_3B7334(v23, v10, 0, &v21);
  v11 = v23[0];
  v12 = &v15[v10];
  if ( *((int *)v23[0] - 1) >= 0 )
  {
    sub_3B74A0(v23);
    v11 = v23[0];
  }
  (*(void (__fastcall **)(void *, char *, char *, char *))(*(_DWORD *)v9 + 44))(v9, v15, v12, v11);
  if ( v16 != 0 )
    sub_3AC918(a1, v17, v19, v20, a6, a7, v23);
  else
    sub_3ACDAC(a1, v17, v19, v20, a6, a7, v23);
  v13 = v23[0] - 12;
  if ( (int *)v23[0] - 3 != &dword_55FB64 && sub_3C82FC(v23[0] - 4, -1) <= 0 )
    sub_3B7350(v13, &v21);
  sub_3A8980(&v22);
  return a1;
}


//======================================================================
// sub_3AD37C
// address: 0x003AD37C   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall sub_3AD37C(_DWORD *a1, int a2, int a3, int a4, char a5, _DWORD *a6, wchar_t a7, char **a8)
{
  if ( a5 != 0 )
    sub_3AC918(a1, a2, a3, a4, a6, a7, a8);
  else
    sub_3ACDAC(a1, a2, a3, a4, a6, a7, a8);
  return a1;
}


//======================================================================
// sub_3AD3C0
// address: 0x003AD3C0   size: 0xE4 (228 bytes)
//======================================================================
wchar_t *__fastcall sub_3AD3C0(int a1, wchar_t c, wchar_t *s1, wchar_t *s2, int a5, int n)
{
  wchar_t *v6; // r4
  size_t v8; // r7
  int v10; // r6
  int v11; // r5
  int v12; // r6
  void *v14; // r6
  int v15; // r0
  wchar_t v16; // r3
  int v17; // r0

  v6 = s1;
  v8 = a5 - n;
  v10 = *(_DWORD *)(a1 + 12) & 0xB0;
  if ( v10 != 32 )
  {
    if ( v10 != 16 )
      goto LABEL_3;
    v14 = sub_3AB100(a1 + 108);
    v15 = (*(int (__fastcall **)(void *, int))(*(_DWORD *)v14 + 40))(v14, 45);
    v16 = *s2;
    if ( *s2 == v15
      || (v17 = (*(int (__fastcall **)(void *, int))(*(_DWORD *)v14 + 40))(v14, 43), v16 = *s2, *s2 == v17) )
    {
      *v6++ = v16;
      v11 = 1;
      v12 = 1;
      goto LABEL_4;
    }
    if ( *s2 == (*(int (__fastcall **)(void *, int))(*(_DWORD *)v14 + 40))(v14, 48)
      && n > 1
      && (s2[1] == (*(int (__fastcall **)(void *, int))(*(_DWORD *)v14 + 40))(v14, 120)
       || s2[1] == (*(int (__fastcall **)(void *, int))(*(_DWORD *)v14 + 40))(v14, 88)) )
    {
      *v6 = *s2;
      v6[1] = s2[1];
      v11 = 2;
      v6 += 2;
      v12 = 2;
    }
    else
    {
LABEL_3:
      v11 = 0;
      v12 = 0;
    }
LABEL_4:
    j_wmemset(v6, c, v8);
    return j_wmemcpy(&v6[v8], &s2[v11], n - v12);
  }
  j_wmemcpy(s1, s2, n);
  return j_wmemset(&v6[n], c, v8);
}


//======================================================================
// sub_3AD4A4
// address: 0x003AD4A4   size: 0x1E (30 bytes)
//======================================================================
wchar_t *__fastcall sub_3AD4A4(int a1, wchar_t a2, int a3, int a4, wchar_t *s1, wchar_t *s2, int *a7)
{
  wchar_t *result; // r0

  result = sub_3AD3C0(a4, a2, s1, s2, a3, *a7);
  *a7 = a3;
  return result;
}


//======================================================================
// sub_3AD4C4
// address: 0x003AD4C4   size: 0x76 (118 bytes)
//======================================================================
int __fastcall sub_3AD4C4(_DWORD *a1, unsigned int a2, int a3, __int16 a4, char a5)
{
  _DWORD *v7; // r5
  int v9; // r2

  if ( a5 != 0 )
  {
    v7 = a1;
    do
    {
      *--v7 = *(_DWORD *)(4 * (a2 % 0xA + 4) + a3);
      a2 /= 0xAu;
    }
    while ( a2 != 0 );
  }
  else if ( (a4 & 0x4A) == 0x40 )
  {
    v7 = a1;
    do
    {
      *--v7 = *(_DWORD *)(4 * ((a2 & 7) + 4) + a3);
      a2 >>= 3;
    }
    while ( a2 != 0 );
  }
  else
  {
    v9 = 4;
    if ( (a4 & 0x4000) != 0 )
      v9 = 20;
    v7 = a1;
    do
    {
      *--v7 = *(_DWORD *)(4 * ((a2 & 0xF) + v9) + a3);
      a2 >>= 4;
    }
    while ( a2 != 0 );
  }
  return a1 - v7;
}


//======================================================================
// sub_3AD53C
// address: 0x003AD53C   size: 0x1C8 (456 bytes)
//======================================================================
int __fastcall sub_3AD53C(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, wchar_t a6, unsigned int a7)
{
  int v8; // r0
  int *v9; // r4
  int v10; // r9
  int v11; // r8
  int v12; // r10
  unsigned int v13; // r1
  int v14; // r0
  int v15; // r3
  int v16; // r4
  char *s2; // r1
  int v18; // r2
  int v19; // r5
  bool v20; // r8
  _DWORD *v22; // r0
  int v23; // r8
  wchar_t s1[2]; // [sp+10h] [bp-58h] BYREF
  _DWORD v25[21]; // [sp+18h] [bp-50h] BYREF
  int v26; // [sp+6Ch] [bp+4h]
  int v27; // [sp+70h] [bp+8h]
  wchar_t *v28; // [sp+74h] [bp+Ch]
  int v29; // [sp+78h] [bp+10h]
  _BOOL4 v30; // [sp+7Ch] [bp+14h]
  int v31[2]; // [sp+84h] [bp+1Ch] BYREF

  v29 = a3;
  v30 = a4;
  v26 = a2;
  v8 = sub_3A8B84(&dword_55FB50);
  v9 = (int *)(*(_DWORD *)(a5[27] + 12) + 4 * v8);
  v10 = v8;
  v11 = *v9;
  if ( *v9 == 0 )
  {
    v22 = operator new(0x128u);
    *v22 = &off_465728;
    v22[1] = 0;
    v22[2] = 0;
    v22[3] = 0;
    *((_BYTE *)v22 + 16) = 0;
    v22[5] = 0;
    v22[6] = 0;
    v22[7] = 0;
    v22[8] = 0;
    v22[9] = 0;
    v22[10] = 0;
    *((_BYTE *)v22 + 292) = 0;
    v23 = (int)v22;
    sub_3AB600((int)v22, (int)(a5 + 27));
    sub_3A8AB4(a5[27], v23, v10);
    v11 = *v9;
  }
  v12 = a5[3];
  v27 = v11 + 44;
  v28 = s1;
  if ( (v12 & 0x4A) == 64 || (v12 & 0x4A) == 8 || (v13 = 0, a7 != 0) )
    v13 = a7;
  v14 = sub_3AD4C4(v28 + 20, v13, v27, v12, (v12 & 0x4A) != 64 && (v12 & 0x4A) != 8);
  v15 = *(unsigned __int8 *)(v11 + 16);
  v16 = v14;
  v31[0] = v14;
  s2 = (char *)&v28[20 - v14];
  if ( v15 != 0 )
  {
    v28 = v25;
    sub_3AC8E8(v26, *(unsigned __int8 **)(v11 + 8), *(_DWORD *)(v11 + 12), *(_DWORD *)(v11 + 40), (int)a5, v25, s2, v31);
    v16 = v31[0];
    s2 = (char *)v28;
  }
  if ( ((v12 & 0x4A) == 64 || (v12 & 0x4A) == 8) && (v12 & 0x200) != 0 && a7 != 0 )
  {
    if ( (v12 & 0x4A) == 0x40 )
    {
      s2 -= 4;
      ++v16;
    }
    else
    {
      *((_DWORD *)s2 - 1) = *(_DWORD *)(4 * (((unsigned int)(v12 << 17) >> 31) + 2) + v27);
      s2 -= 8;
      v16 += 2;
    }
    *(_DWORD *)s2 = *(_DWORD *)(v11 + 60);
    v31[0] = v16;
  }
  v18 = a5[2];
  if ( v18 > v16 )
  {
    sub_3AD4A4(v26, a6, v18, (int)a5, s1, (wchar_t *)s2, v31);
    v16 = v31[0];
    s2 = (char *)s1;
  }
  a5[2] = 0;
  v19 = v29;
  v20 = v30;
  if ( !v30 )
    v20 = (*(int (__fastcall **)(int, char *, int))(*(_DWORD *)v29 + 48))(v29, s2, v16) != v16;
  *(_DWORD *)a1 = v19;
  *(_BYTE *)(a1 + 4) = v20;
  return a1;
}


//======================================================================
// sub_3AD72C
// address: 0x003AD72C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3AD72C(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, wchar_t a6, unsigned int a7)
{
  sub_3AD53C(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_3AD74C
// address: 0x003AD74C   size: 0x5C (92 bytes)
//======================================================================
_DWORD *__fastcall sub_3AD74C(_DWORD *a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, wchar_t a6, unsigned int a7)
{
  int v7; // r7
  int v10; // [sp+10h] [bp-14h]
  int v11; // [sp+14h] [bp-10h]
  _DWORD v12[3]; // [sp+18h] [bp-Ch] BYREF

  v7 = a5[3];
  v11 = a4;
  a5[3] = v7 & 0xFFFFBDB5 | 0x208;
  sub_3AD53C((int)v12, a2, a3, a4, a5, a6, a7);
  v10 = v12[0];
  LOBYTE(v11) = v12[1];
  a5[3] = v7;
  *a1 = v10;
  a1[1] = v11;
  return a1;
}


//======================================================================
// sub_3AD7AC
// address: 0x003AD7AC   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_3AD7AC(_DWORD *a1, int a2, unsigned int a3, unsigned int a4, int a5, __int16 a6, char a7)
{
  _DWORD *v10; // r4
  unsigned __int64 v11; // r0
  int v13; // r3

  if ( a7 != 0 )
  {
    v10 = a1;
    do
    {
      *--v10 = *(_DWORD *)(4 * (__PAIR64__(a4, a3) % 0xA + 4) + a5);
      v11 = __PAIR64__(a4, a3) / 0xA;
      a4 = (__PAIR64__(a4, a3) / 0xA) >> 32;
      a3 = v11;
    }
    while ( v11 != 0 );
  }
  else if ( (a6 & 0x4A) == 0x40 )
  {
    v10 = a1;
    do
    {
      *--v10 = *(_DWORD *)(4 * ((a3 & 7) + 4) + a5);
      a3 = (a3 >> 3) | (a4 << 29);
      a4 >>= 3;
    }
    while ( (a3 | a4) != 0 );
  }
  else
  {
    v13 = 4;
    if ( (a6 & 0x4000) != 0 )
      v13 = 20;
    v10 = a1;
    do
    {
      *--v10 = *(_DWORD *)(4 * ((a3 & 0xF) + v13) + a5);
      a3 = (a3 >> 4) | (a4 << 28);
      a4 >>= 4;
    }
    while ( (a3 | a4) != 0 );
  }
  return a1 - v10;
}


//======================================================================
// sub_3AD854
// address: 0x003AD854   size: 0x1DA (474 bytes)
//======================================================================
int __fastcall sub_3AD854(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, wchar_t a6, unsigned int a7, unsigned int a8)
{
  int v9; // r0
  int *v10; // r4
  int v11; // r9
  int v12; // r8
  int v13; // r0
  int v14; // r10
  _BOOL4 v15; // r9
  unsigned int v16; // r2
  unsigned int v17; // r3
  int v18; // r0
  int v19; // r3
  int v20; // r4
  wchar_t *s2; // r1
  int v22; // r2
  int v23; // r5
  bool v24; // r8
  _DWORD *v26; // r0
  int v27; // r8
  wchar_t s1[2]; // [sp+10h] [bp-A8h] BYREF
  _DWORD v29[38]; // [sp+18h] [bp-A0h] BYREF
  int v30[3]; // [sp+B0h] [bp-8h] BYREF
  int v31; // [sp+BCh] [bp+4h]
  unsigned __int64 v32; // [sp+C0h] [bp+8h]
  int v33; // [sp+C8h] [bp+10h]
  int v34; // [sp+CCh] [bp+14h]
  int v35; // [sp+D0h] [bp+18h]
  _BOOL4 v36; // [sp+D4h] [bp+1Ch]
  int v37[2]; // [sp+DCh] [bp+24h] BYREF

  v31 = a2;
  v35 = a3;
  v36 = a4;
  v32 = __PAIR64__(a7, a8);
  v9 = sub_3A8B84(&dword_55FB50);
  v10 = (int *)(*(_DWORD *)(a5[27] + 12) + 4 * v9);
  v11 = v9;
  v12 = *v10;
  if ( *v10 == 0 )
  {
    v26 = operator new(0x128u);
    *v26 = &off_465728;
    v26[1] = 0;
    v26[2] = 0;
    v26[3] = 0;
    *((_BYTE *)v26 + 16) = 0;
    v26[5] = 0;
    v26[6] = 0;
    v26[7] = 0;
    v26[8] = 0;
    v26[9] = 0;
    v26[10] = 0;
    *((_BYTE *)v26 + 292) = 0;
    v27 = (int)v26;
    sub_3AB600((int)v26, (int)(a5 + 27));
    sub_3A8AB4(a5[27], v27, v11);
    v12 = *v10;
  }
  v13 = a5[3] & 0x4A;
  v14 = a5[3];
  v33 = v12 + 44;
  v34 = v13;
  v15 = v13 != 64 && v13 != 8;
  if ( v13 != 64 && v13 != 8 && v32 == 0 )
  {
    v16 = 0;
    v17 = 0;
  }
  else
  {
    v16 = HIDWORD(v32);
    v17 = v32;
  }
  v18 = sub_3AD7AC(v30, v15, v16, v17, v33, v14, v15);
  v19 = *(unsigned __int8 *)(v12 + 16);
  v20 = v18;
  v37[0] = v18;
  s2 = &s1[40 - v18];
  if ( v19 != 0 )
  {
    sub_3AC8E8(
      v31,
      *(unsigned __int8 **)(v12 + 8),
      *(_DWORD *)(v12 + 12),
      *(_DWORD *)(v12 + 40),
      (int)a5,
      v29,
      (char *)s2,
      v37);
    v20 = v37[0];
    s2 = v29;
  }
  if ( !v15 && (v14 & 0x200) != 0 && v32 != 0 )
  {
    if ( v34 == 64 )
    {
      --s2;
      ++v20;
    }
    else
    {
      *(s2 - 1) = *(_DWORD *)(4 * (((unsigned int)(v14 << 17) >> 31) + 2) + v33);
      s2 -= 2;
      v20 += 2;
    }
    *s2 = *(_DWORD *)(v12 + 60);
    v37[0] = v20;
  }
  v22 = a5[2];
  if ( v22 > v20 )
  {
    sub_3AD4A4(v31, a6, v22, (int)a5, s1, s2, v37);
    v20 = v37[0];
    s2 = s1;
  }
  a5[2] = 0;
  v23 = v35;
  v24 = v36;
  if ( !v36 )
    v24 = (*(int (__fastcall **)(int, wchar_t *, int))(*(_DWORD *)v35 + 48))(v35, s2, v20) != v20;
  *(_DWORD *)a1 = v23;
  *(_BYTE *)(a1 + 4) = v24;
  return a1;
}


//======================================================================
// sub_3ADA54
// address: 0x003ADA54   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_3ADA54(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, wchar_t a6, unsigned int a7, unsigned int a8)
{
  sub_3AD854(a1, a2, a3, a4, a5, a6, a7, a8);
  return a1;
}


//======================================================================
// sub_3ADA78
// address: 0x003ADA78   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_3ADA78(int a1, int *a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r7
  int result; // r0
  _DWORD *v7; // r0
  int v8; // r4

  v3 = sub_3A8B84(&dword_55FB5C);
  v4 = *(_DWORD *)(*a2 + 12) + 4 * v3;
  v5 = v3;
  result = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 0 )
  {
    v7 = operator new(0x70u);
    *v7 = &off_465718;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    *((_BYTE *)v7 + 16) = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = 0;
    v7[12] = 0;
    v7[13] = 0;
    *((_BYTE *)v7 + 56) = 0;
    *((_BYTE *)v7 + 57) = 0;
    *((_BYTE *)v7 + 58) = 0;
    *((_BYTE *)v7 + 59) = 0;
    *((_BYTE *)v7 + 60) = 0;
    *((_BYTE *)v7 + 61) = 0;
    *((_BYTE *)v7 + 62) = 0;
    *((_BYTE *)v7 + 63) = 0;
    *((_BYTE *)v7 + 108) = 0;
    v8 = (int)v7;
    sub_3AB9C8((int)v7, (int)a2);
    sub_3A8AB4(*a2, v8, v5);
    return *(_DWORD *)v4;
  }
  return result;
}


//======================================================================
// sub_3ADB20
// address: 0x003ADB20   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3ADB20(int a1)
{
  _DWORD *v2; // r0
  unsigned int v3; // r2

  v2 = *(_DWORD **)a1;
  if ( v2 != nullptr )
  {
    v3 = v2[2];
    if ( v3 >= v2[3] )
      (*(void (__fastcall **)(_DWORD *))(*v2 + 40))(v2);
    else
      v2[2] = v3 + 4;
    *(_DWORD *)(a1 + 4) = -1;
  }
  return a1;
}


//======================================================================
// sub_3ADB48
// address: 0x003ADB48   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_3ADB48(int a1, int *a2)
{
  int v3; // r0
  int v4; // r6
  int v5; // r7
  int result; // r0
  _DWORD *v7; // r0
  int v8; // r4

  v3 = sub_3A8B84(&dword_55FB60);
  v4 = *(_DWORD *)(*a2 + 12) + 4 * v3;
  v5 = v3;
  result = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 0 )
  {
    v7 = operator new(0x70u);
    *v7 = &off_465708;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    *((_BYTE *)v7 + 16) = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    v7[11] = 0;
    v7[12] = 0;
    v7[13] = 0;
    *((_BYTE *)v7 + 56) = 0;
    *((_BYTE *)v7 + 57) = 0;
    *((_BYTE *)v7 + 58) = 0;
    *((_BYTE *)v7 + 59) = 0;
    *((_BYTE *)v7 + 60) = 0;
    *((_BYTE *)v7 + 61) = 0;
    *((_BYTE *)v7 + 62) = 0;
    *((_BYTE *)v7 + 63) = 0;
    *((_BYTE *)v7 + 108) = 0;
    v8 = (int)v7;
    sub_3ABDC8((int)v7, (int)a2);
    sub_3A8AB4(*a2, v8, v5);
    return *(_DWORD *)v4;
  }
  return result;
}


//======================================================================
// sub_3ADBF0
// address: 0x003ADBF0   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_3ADBF0(int a1, int *a2)
{
  int v3; // r0
  int v4; // r5
  int v5; // r6
  int result; // r0
  _DWORD *v7; // r0
  int v8; // r7

  v3 = sub_3A8B84(&dword_55FB50);
  v4 = *(_DWORD *)(*a2 + 12) + 4 * v3;
  v5 = v3;
  result = *(_DWORD *)v4;
  if ( *(_DWORD *)v4 == 0 )
  {
    v7 = operator new(0x128u);
    *v7 = &off_465728;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    *((_BYTE *)v7 + 16) = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[10] = 0;
    *((_BYTE *)v7 + 292) = 0;
    v8 = (int)v7;
    sub_3AB600((int)v7, (int)a2);
    sub_3A8AB4(*a2, v8, v5);
    return *(_DWORD *)v4;
  }
  return result;
}


//======================================================================
// sub_3ADC78
// address: 0x003ADC78   size: 0x17C (380 bytes)
//======================================================================
int __fastcall sub_3ADC78(int a1, int a2, int a3, int a4, _DWORD *a5, wchar_t a6, int a7)
{
  int v8; // r0
  int v9; // r9
  int v10; // r6
  _BOOL4 v11; // r10
  unsigned int v12; // r1
  int v13; // r0
  int v14; // r3
  int v15; // r4
  wchar_t *s2; // r1
  int v17; // r2
  int v18; // r6
  int v19; // r5
  wchar_t s1[2]; // [sp+10h] [bp-58h] BYREF
  _DWORD v22[18]; // [sp+18h] [bp-50h] BYREF
  _DWORD v23[3]; // [sp+60h] [bp-8h] BYREF
  int v24; // [sp+6Ch] [bp+4h]
  int v25; // [sp+70h] [bp+8h]
  int v26; // [sp+74h] [bp+Ch]
  int v27; // [sp+78h] [bp+10h]
  int v28; // [sp+7Ch] [bp+14h]
  int v29; // [sp+80h] [bp+18h] BYREF
  int v30[2]; // [sp+84h] [bp+1Ch] BYREF

  v24 = a2;
  v27 = a3;
  v28 = a4;
  v8 = sub_3ADBF0((int)&v29, a5 + 27);
  v9 = a5[3];
  v10 = v8;
  v25 = v8 + 44;
  v26 = v9 & 0x4A;
  v11 = v26 != 64 && v26 != 8;
  if ( v26 == 64 || v26 == 8 || (v12 = -a7, a7 > 0) )
    v12 = a7;
  v13 = sub_3AD4C4(v23, v12, v25, v9, v11);
  v14 = *(unsigned __int8 *)(v10 + 16);
  v15 = v13;
  v30[0] = v13;
  s2 = &s1[20 - v13];
  if ( v14 != 0 )
  {
    sub_3AC8E8(
      v24,
      *(unsigned __int8 **)(v10 + 8),
      *(_DWORD *)(v10 + 12),
      *(_DWORD *)(v10 + 40),
      (int)a5,
      v22,
      (char *)s2,
      v30);
    v15 = v30[0];
    s2 = v22;
  }
  if ( v11 )
  {
    if ( a7 < 0 )
    {
      --s2;
      ++v15;
      *s2 = *(_DWORD *)(v10 + 44);
      v30[0] = v15;
    }
    else if ( (v9 & 0x800) != 0 )
    {
      --s2;
      ++v15;
      *s2 = *(_DWORD *)(v10 + 48);
      v30[0] = v15;
    }
  }
  else if ( (v9 & 0x200) != 0 && a7 != 0 )
  {
    if ( v26 == 64 )
    {
      --s2;
      ++v15;
    }
    else
    {
      *(s2 - 1) = *(_DWORD *)(4 * (((unsigned int)(v9 << 17) >> 31) + 2) + v25);
      s2 -= 2;
      v15 += 2;
    }
    *s2 = *(_DWORD *)(v10 + 60);
    v30[0] = v15;
  }
  v17 = a5[2];
  if ( v17 > v15 )
  {
    sub_3AD4A4(v24, a6, v17, (int)a5, s1, s2, v30);
    v15 = v30[0];
    s2 = s1;
  }
  v18 = (unsigned __int8)v28;
  a5[2] = 0;
  v19 = v27;
  if ( v18 == 0 && (*(int (__fastcall **)(int, wchar_t *, int))(*(_DWORD *)v27 + 48))(v27, s2, v15) != v15 )
    LOBYTE(v18) = 1;
  *(_DWORD *)a1 = v19;
  *(_BYTE *)(a1 + 4) = v18;
  return a1;
}


//======================================================================
// sub_3ADDF4
// address: 0x003ADDF4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3ADDF4(int a1, int a2, int a3, int a4, _DWORD *a5, wchar_t a6, int a7)
{
  sub_3ADC78(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_3ADE14
// address: 0x003ADE14   size: 0x164 (356 bytes)
//======================================================================
int *__fastcall sub_3ADE14(int *a1, int a2, int a3, int a4, _DWORD *a5, wchar_t c, unsigned __int8 a7)
{
  int v9; // r2
  int v10; // r8
  int v11; // r6
  char v12; // r10
  int v13; // r2
  _DWORD *v15; // r0
  int v16; // r3
  _DWORD *v17; // r1
  int v18; // r0
  int v19; // r3
  int v20; // r11
  int v21; // r0
  int v22; // r0
  wchar_t s; // [sp+10h] [bp+0h] BYREF
  int v24; // [sp+14h] [bp+4h]
  size_t n; // [sp+18h] [bp+8h]
  int *v26; // [sp+1Ch] [bp+Ch]
  int v27; // [sp+20h] [bp+10h]
  int v28; // [sp+24h] [bp+14h] BYREF
  int v29; // [sp+28h] [bp+18h] BYREF
  char v30; // [sp+2Ch] [bp+1Ch]

  v28 = a4;
  v27 = a3;
  v9 = a5[3];
  v26 = &v28;
  v10 = a3;
  v11 = (unsigned __int8)a4;
  v12 = v9;
  if ( (v9 & 1) == 0 )
  {
    sub_3ADC78((int)&v29, a2, a3, v28, a5, c, a7);
    LOBYTE(v11) = v30;
    v10 = v29;
    goto LABEL_3;
  }
  v15 = (_DWORD *)sub_3ADBF0((int)&v29, a5 + 27);
  if ( a7 != 0 )
  {
    v17 = a5;
    v19 = a5[2];
    v20 = v15[6];
    v24 = v15[5];
    if ( v20 < v19 )
      goto LABEL_6;
LABEL_12:
    v17[2] = 0;
    if ( v11 == 0 && v20 != (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 48))(v10, v24, v20) )
      LOBYTE(v11) = 1;
    goto LABEL_3;
  }
  v16 = v15[7];
  v17 = a5;
  v18 = v15[8];
  v24 = v16;
  v19 = a5[2];
  v20 = v18;
  if ( v18 >= v19 )
    goto LABEL_12;
LABEL_6:
  n = v19 - v20;
  s = (wchar_t)&s;
  j_wmemset(&s, c, v19 - v20);
  a5[2] = 0;
  if ( (v12 & 0xB0) != 0x20 )
  {
    if ( v11 != 0 )
      goto LABEL_3;
    v21 = (*(int (__fastcall **)(int, wchar_t, size_t))(*(_DWORD *)v10 + 48))(v10, s, n);
    if ( n == v21 && v20 == (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 48))(v10, v24, v20) )
      goto LABEL_3;
LABEL_18:
    LOBYTE(v11) = 1;
    goto LABEL_3;
  }
  if ( v11 == 0 )
  {
    if ( v20 != (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v10 + 48))(v10, v24, v20) )
      goto LABEL_18;
    v22 = (*(int (__fastcall **)(int, wchar_t, size_t))(*(_DWORD *)v10 + 48))(v10, s, n);
    if ( n != v22 )
      goto LABEL_18;
  }
LABEL_3:
  v27 = v10;
  LOBYTE(v28) = v11;
  v13 = v28;
  *a1 = v10;
  a1[1] = v13;
  return a1;
}


//======================================================================
// sub_3ADF78
// address: 0x003ADF78   size: 0x1B6 (438 bytes)
//======================================================================
int __fastcall sub_3ADF78(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, wchar_t a6, __int64 a7)
{
  int v8; // r8
  int v9; // r0
  int v10; // r10
  _BOOL4 v11; // r9
  __int64 v12; // r2
  int v13; // r4
  wchar_t *s2; // r1
  int v15; // r2
  int v16; // r5
  bool v17; // r8
  wchar_t s1[2]; // [sp+10h] [bp-A8h] BYREF
  _DWORD v20[38]; // [sp+18h] [bp-A0h] BYREF
  int v21; // [sp+B0h] [bp-8h] BYREF
  __int64 v22; // [sp+B8h] [bp+0h]
  int v23; // [sp+C4h] [bp+Ch]
  int v24; // [sp+C8h] [bp+10h]
  int v25; // [sp+CCh] [bp+14h]
  int v26; // [sp+D0h] [bp+18h]
  _BOOL4 v27; // [sp+D4h] [bp+1Ch]
  int v28; // [sp+D8h] [bp+20h] BYREF
  int v29[2]; // [sp+DCh] [bp+24h] BYREF

  v23 = a2;
  v26 = a3;
  v27 = a4;
  v8 = sub_3ADBF0((int)&v28, a5 + 27);
  v9 = a5[3];
  v24 = v8 + 44;
  v10 = v9;
  v25 = v9 & 0x4A;
  v11 = v25 != 64 && v25 != 8;
  if ( v25 == 64
    || v25 == 8
    || (v22 = __PAIR64__(SHIDWORD(a7) >> 31, SHIDWORD(a7) >> 31) - a7,
        v12 = -a7,
        (((__PAIR64__(SHIDWORD(a7) >> 31, SHIDWORD(a7) >> 31) - a7) >> 32) & 0x80000000) != 0LL) )
  {
    v12 = a7;
  }
  v13 = sub_3AD7AC(&v21, v9, v12, HIDWORD(v12), v24, v9, v11);
  v29[0] = v13;
  s2 = &s1[40 - v13];
  if ( *(_BYTE *)(v8 + 16) != 0 )
  {
    sub_3AC8E8(
      v23,
      *(unsigned __int8 **)(v8 + 8),
      *(_DWORD *)(v8 + 12),
      *(_DWORD *)(v8 + 40),
      (int)a5,
      v20,
      (char *)s2,
      v29);
    v13 = v29[0];
    s2 = v20;
  }
  if ( v11 )
  {
    if ( a7 < 0 )
    {
      --s2;
      ++v13;
      *s2 = *(_DWORD *)(v8 + 44);
      v29[0] = v13;
    }
    else if ( (v10 & 0x800) != 0 )
    {
      --s2;
      ++v13;
      *s2 = *(_DWORD *)(v8 + 48);
      v29[0] = v13;
    }
  }
  else if ( (v10 & 0x200) != 0 && a7 != 0 )
  {
    if ( v25 == 64 )
    {
      --s2;
      ++v13;
    }
    else
    {
      *(s2 - 1) = *(_DWORD *)(4 * (((unsigned int)(v10 << 17) >> 31) + 2) + v24);
      s2 -= 2;
      v13 += 2;
    }
    *s2 = *(_DWORD *)(v8 + 60);
    v29[0] = v13;
  }
  v15 = a5[2];
  if ( v15 > v13 )
  {
    sub_3AD4A4(v23, a6, v15, (int)a5, s1, s2, v29);
    v13 = v29[0];
    s2 = s1;
  }
  a5[2] = 0;
  v16 = v26;
  v17 = v27;
  if ( !v27 )
    v17 = (*(int (__fastcall **)(int, wchar_t *, int))(*(_DWORD *)v26 + 48))(v26, s2, v13) != v13;
  *(_DWORD *)a1 = v16;
  *(_BYTE *)(a1 + 4) = v17;
  return a1;
}


//======================================================================
// sub_3AE130
// address: 0x003AE130   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_3AE130(int a1, int a2, int a3, _BOOL4 a4, _DWORD *a5, wchar_t a6, __int64 a7)
{
  sub_3ADF78(a1, a2, a3, a4, a5, a6, a7);
  return a1;
}


//======================================================================
// sub_3AE154
// address: 0x003AE154   size: 0x1CE (462 bytes)
//======================================================================
int __fastcall sub_3AE154(int a1, wchar_t a2, int a3, int a4, _DWORD *a5, wchar_t a6, int a7, int a8, int a9, int a10)
{
  int v11; // r0
  int v12; // r6
  int v13; // r10
  void *v14; // r0
  wchar_t *p_s1; // r8
  size_t v16; // r11
  _BYTE *v17; // r0
  signed int v18; // r6
  size_t v19; // r3
  int v20; // r5
  int v21; // r11
  int v22; // r2
  int v23; // r5
  int v24; // r4
  wchar_t *s2; // r0
  wchar_t *v27; // [sp+4h] [bp-Ch]
  wchar_t s1; // [sp+10h] [bp+0h] BYREF
  wchar_t *v29; // [sp+14h] [bp+4h]
  int v30; // [sp+18h] [bp+8h]
  int v31; // [sp+1Ch] [bp+Ch]
  int v32; // [sp+24h] [bp+14h] BYREF
  size_t v33; // [sp+28h] [bp+18h] BYREF
  int v34; // [sp+2Ch] [bp+1Ch] BYREF
  char v35[20]; // [sp+30h] [bp+20h] BYREF

  s1 = a2;
  v31 = a4;
  v30 = a3;
  v11 = sub_3ADBF0((int)&v32, a5 + 27);
  v12 = a5[1];
  v13 = v11;
  if ( v12 < 0 )
    v12 = 6;
  sub_3BFF28(a5);
  v34 = sub_3A8844();
  v33 = sub_393A38((int)&v34, (char *)&s1, 0, v35, v12, v27, a9, a10);
  v14 = sub_3AB100((int)(a5 + 27));
  p_s1 = &s1;
  (*(void (__fastcall **)(void *, wchar_t *, char *, wchar_t *))(*(_DWORD *)v14 + 44))(v14, &s1, (char *)&s1 + v33, &s1);
  v16 = v33;
  v17 = j_memchr(&s1, 46, v33);
  if ( v17 != nullptr )
  {
    s2 = &s1 + v17 - (_BYTE *)&s1;
    *s2 = *(_DWORD *)(v13 + 36);
  }
  else
  {
    s2 = nullptr;
  }
  v18 = v16;
  if ( *(_BYTE *)(v13 + 16) != 0
    && (s2 != nullptr
     || (v16 >> 31) + (v16 <= 2) != 0
     || BYTE1(s1) <= 0x39u && BYTE1(s1) > 0x2Fu && (unsigned __int8)(BYTE2(s1) - 48) <= 9u) )
  {
    v29 = &s1;
    if ( (unsigned __int8)s1 == 43 || (unsigned __int8)s1 == 45 )
    {
      v19 = v16 - 1;
      v20 = 1;
      v21 = 1;
      *v29 = s1;
      v33 = v19;
    }
    else
    {
      v20 = 0;
      v21 = 0;
    }
    sub_3AC874(
      s1,
      *(unsigned __int8 **)(v13 + 8),
      *(_DWORD *)(v13 + 12),
      *(_DWORD *)(v13 + 40),
      s2,
      (char *)&v29[v20],
      (char *)&s1 + v20 * 4,
      &v33);
    v18 = v33 + v21;
    p_s1 = v29;
    v33 += v21;
  }
  v22 = a5[2];
  if ( v22 > v18 )
  {
    sub_3AD4A4(s1, a6, v22, (int)a5, &s1, p_s1, (int *)&v33);
    v18 = v33;
    p_s1 = &s1;
  }
  v23 = (unsigned __int8)v31;
  a5[2] = 0;
  v24 = v30;
  if ( v23 == 0 && v18 != (*(int (__fastcall **)(int, wchar_t *, signed int))(*(_DWORD *)v30 + 48))(v30, p_s1, v18) )
    LOBYTE(v23) = 1;
  *(_DWORD *)a1 = v24;
  *(_BYTE *)(a1 + 4) = v23;
  return a1;
}


//======================================================================
// sub_3AE324
// address: 0x003AE324   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3AE324(int a1, wchar_t a2, int a3, int a4, _DWORD *a5, wchar_t a6, int a7, int a8)
{
  int v10; // [sp+Ch] [bp-14h]

  sub_3AE154(a1, a2, a3, a4, a5, a6, 0, v10, a7, a8);
  return a1;
}


//======================================================================
// sub_3AE34C
// address: 0x003AE34C   size: 0x1CE (462 bytes)
//======================================================================
int __fastcall sub_3AE34C(int a1, wchar_t a2, int a3, int a4, _DWORD *a5, wchar_t a6, int a7, int a8, int a9, int a10)
{
  int v11; // r0
  int v12; // r6
  int v13; // r10
  void *v14; // r0
  wchar_t *p_s1; // r8
  size_t v16; // r11
  _BYTE *v17; // r0
  signed int v18; // r6
  size_t v19; // r3
  int v20; // r5
  int v21; // r11
  int v22; // r2
  int v23; // r5
  int v24; // r4
  wchar_t *s2; // r0
  wchar_t *v27; // [sp+4h] [bp-Ch]
  wchar_t s1; // [sp+10h] [bp+0h] BYREF
  wchar_t *v29; // [sp+14h] [bp+4h]
  int v30; // [sp+18h] [bp+8h]
  int v31; // [sp+1Ch] [bp+Ch]
  int v32; // [sp+24h] [bp+14h] BYREF
  size_t v33; // [sp+28h] [bp+18h] BYREF
  int v34; // [sp+2Ch] [bp+1Ch] BYREF
  char v35[20]; // [sp+30h] [bp+20h] BYREF

  s1 = a2;
  v31 = a4;
  v30 = a3;
  v11 = sub_3ADBF0((int)&v32, a5 + 27);
  v12 = a5[1];
  v13 = v11;
  if ( v12 < 0 )
    v12 = 6;
  sub_3BFF28(a5);
  v34 = sub_3A8844();
  v33 = sub_393A38((int)&v34, (char *)&s1, 0, v35, v12, v27, a9, a10);
  v14 = sub_3AB100((int)(a5 + 27));
  p_s1 = &s1;
  (*(void (__fastcall **)(void *, wchar_t *, char *, wchar_t *))(*(_DWORD *)v14 + 44))(v14, &s1, (char *)&s1 + v33, &s1);
  v16 = v33;
  v17 = j_memchr(&s1, 46, v33);
  if ( v17 != nullptr )
  {
    s2 = &s1 + v17 - (_BYTE *)&s1;
    *s2 = *(_DWORD *)(v13 + 36);
  }
  else
  {
    s2 = nullptr;
  }
  v18 = v16;
  if ( *(_BYTE *)(v13 + 16) != 0
    && (s2 != nullptr
     || (v16 >> 31) + (v16 <= 2) != 0
     || BYTE1(s1) <= 0x39u && BYTE1(s1) > 0x2Fu && (unsigned __int8)(BYTE2(s1) - 48) <= 9u) )
  {
    v29 = &s1;
    if ( (unsigned __int8)s1 == 43 || (unsigned __int8)s1 == 45 )
    {
      v19 = v16 - 1;
      v20 = 1;
      v21 = 1;
      *v29 = s1;
      v33 = v19;
    }
    else
    {
      v20 = 0;
      v21 = 0;
    }
    sub_3AC874(
      s1,
      *(unsigned __int8 **)(v13 + 8),
      *(_DWORD *)(v13 + 12),
      *(_DWORD *)(v13 + 40),
      s2,
      (char *)&v29[v20],
      (char *)&s1 + v20 * 4,
      &v33);
    v18 = v33 + v21;
    p_s1 = v29;
    v33 += v21;
  }
  v22 = a5[2];
  if ( v22 > v18 )
  {
    sub_3AD4A4(s1, a6, v22, (int)a5, &s1, p_s1, (int *)&v33);
    v18 = v33;
    p_s1 = &s1;
  }
  v23 = (unsigned __int8)v31;
  a5[2] = 0;
  v24 = v30;
  if ( v23 == 0 && v18 != (*(int (__fastcall **)(int, wchar_t *, signed int))(*(_DWORD *)v30 + 48))(v30, p_s1, v18) )
    LOBYTE(v23) = 1;
  *(_DWORD *)a1 = v24;
  *(_BYTE *)(a1 + 4) = v23;
  return a1;
}


//======================================================================
// sub_3AE51C
// address: 0x003AE51C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3AE51C(int a1, wchar_t a2, int a3, int a4, _DWORD *a5, wchar_t a6, int a7, int a8)
{
  int v10; // [sp+Ch] [bp-14h]

  sub_3AE34C(a1, a2, a3, a4, a5, a6, 76, v10, a7, a8);
  return a1;
}


//======================================================================
// sub_3AE544
// address: 0x003AE544   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_3AE544(int a1)
{
  _DWORD *v1; // r3
  int result; // r0
  int *v4; // r2

  v1 = *(_DWORD **)a1;
  if ( *(_DWORD *)a1 == 0 )
    return -1;
  result = *(_DWORD *)(a1 + 4);
  if ( result == -1 )
  {
    v4 = (int *)v1[2];
    if ( (unsigned int)v4 >= v1[3] )
      result = (*(int (__fastcall **)(_DWORD *))(*v1 + 36))(v1);
    else
      result = *v4;
    if ( result == -1 )
      *(_DWORD *)a1 = 0;
    else
      *(_DWORD *)(a1 + 4) = result;
  }
  return result;
}


//======================================================================
// sub_3AE580
// address: 0x003AE580   size: 0x80 (128 bytes)
//======================================================================
bool __fastcall sub_3AE580(int a1, int a2)
{
  _DWORD *v3; // r0
  int v5; // r6
  _DWORD *v6; // r3
  int v7; // r0
  int *v9; // r2
  int v10; // r0
  int *v11; // r2
  int v12; // r0

  v3 = *(_DWORD **)a1;
  if ( v3 == nullptr )
  {
    v5 = 1;
    goto LABEL_3;
  }
  v5 = 0;
  if ( *(_DWORD *)(a1 + 4) != -1 )
    goto LABEL_3;
  v11 = (int *)v3[2];
  if ( (unsigned int)v11 >= v3[3] )
    v12 = (*(int (__fastcall **)(_DWORD *))(*v3 + 36))(v3);
  else
    v12 = *v11;
  if ( v12 == -1 )
  {
    *(_DWORD *)a1 = 0;
    v5 = 1;
LABEL_3:
    v6 = *(_DWORD **)a2;
    if ( *(_DWORD *)a2 != 0 )
      goto LABEL_4;
LABEL_14:
    v7 = 1;
    return v7 == v5;
  }
  v6 = *(_DWORD **)a2;
  *(_DWORD *)(a1 + 4) = v12;
  v5 = 0;
  if ( v6 == nullptr )
    goto LABEL_14;
LABEL_4:
  v7 = 0;
  if ( *(_DWORD *)(a2 + 4) == -1 )
  {
    v9 = (int *)v6[2];
    if ( (unsigned int)v9 >= v6[3] )
      v10 = (*(int (__fastcall **)(_DWORD *))(*v6 + 36))(v6);
    else
      v10 = *v9;
    if ( v10 == -1 )
    {
      *(_DWORD *)a2 = 0;
      v7 = 1;
    }
    else
    {
      *(_DWORD *)(a2 + 4) = v10;
      v7 = 0;
    }
  }
  return v7 == v5;
}


//======================================================================
// sub_3AE600
// address: 0x003AE600   size: 0x232 (562 bytes)
//======================================================================
int *__fastcall sub_3AE600(
        int *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD **a8,
        int a9,
        int a10,
        _DWORD *a11)
{
  int *v11; // r10
  _DWORD **v12; // r11
  void *v13; // r8
  int *v14; // r3
  int v15; // r1
  _DWORD **v17; // r6
  _DWORD **v18; // r10
  int v19; // r5
  unsigned int v20; // r4
  int v21; // r11
  int v22; // r1
  _DWORD **v23; // r11
  int *v24; // r6
  unsigned int v25; // r5
  unsigned int v26; // r8
  size_t v27; // r4
  size_t v28; // r0
  _DWORD *v29; // r0
  unsigned int v30; // r3
  size_t v31; // r8
  unsigned int v32; // r3
  unsigned int v33; // r6
  _DWORD *v34; // r5
  _DWORD *v35; // r0
  int v36; // r8
  int v37; // r3
  int v38; // r8
  size_t v39; // r4
  size_t v40; // r5
  int *v41; // r3
  int *v42; // r10
  int v43; // r6
  int *v44; // r3
  int v45; // r9
  _DWORD v46[2]; // [sp+0h] [bp+0h] BYREF
  int v47; // [sp+4h] [bp+4h] BYREF
  int *v48; // [sp+8h] [bp+8h]
  int *v49; // [sp+Ch] [bp+Ch]
  unsigned int v50; // [sp+10h] [bp+10h]
  int v51; // [sp+14h] [bp+14h]
  int v52; // [sp+18h] [bp+18h] BYREF
  int v53; // [sp+1Ch] [bp+1Ch]

  v48 = a1;
  v53 = a4;
  v11 = &v52;
  v52 = a3;
  v12 = a8;
  v13 = sub_3AB100(a10 + 108);
  if ( !sub_3AE580((int)&v52, (int)&a5) )
  {
    v51 = sub_3AE544((int)&v52);
    if ( a9 != 0 )
    {
      v17 = v12;
      v18 = v12;
      v19 = 0;
      v20 = 0;
      v50 = (unsigned int)&v52;
      v21 = v51;
      do
      {
        while ( **v17 != v21 && v21 != (*(int (__fastcall **)(void *))(*(_DWORD *)v13 + 24))(v13) )
        {
          ++v19;
          ++v17;
          if ( v19 == a9 )
            goto LABEL_10;
        }
        v22 = a9;
        v46[v20++] = v19++;
        ++v17;
      }
      while ( v19 != v22 );
LABEL_10:
      v23 = v18;
      v11 = (int *)v50;
      v50 = 0;
      v49 = &v47;
      if ( v20 <= 1 )
      {
LABEL_29:
        if ( v20 == 1 )
        {
          sub_3ADB20((int)v11);
          v38 = v46[0];
          v39 = v50 + 1;
          v40 = j_wcslen(v23[v46[0]]);
          if ( v50 + 1 < v40 )
          {
            v41 = v11;
            v42 = &v23[v46[0]][v39];
            v43 = (int)v41;
            do
            {
              if ( sub_3AE580(v43, (int)&a5) )
                break;
              v45 = *v42;
              if ( v45 != sub_3AE544(v43) )
                break;
              sub_3ADB20(v43);
              ++v39;
              ++v42;
            }
            while ( v39 < v40 );
            v11 = (int *)v43;
          }
          if ( v39 == v40 )
          {
            *a7 = v38;
            goto LABEL_3;
          }
        }
      }
      else
      {
        while ( 1 )
        {
          v24 = v49;
          v25 = 1;
          v26 = v20;
          v27 = j_wcslen(v23[v46[0]]);
          do
          {
            v28 = j_wcslen(v23[*v24]);
            if ( v27 > v28 )
              v27 = v28;
            ++v25;
            ++v24;
          }
          while ( v25 < v26 );
          v29 = (_DWORD *)*v11;
          v30 = v26;
          v31 = v27;
          v20 = v30;
          if ( *v11 != 0 )
          {
            v32 = v29[2];
            if ( v32 < v29[3] )
              v29[2] = v32 + 4;
            else
              (*(void (__fastcall **)(_DWORD *))(*v29 + 40))(v29);
            v11[1] = -1;
          }
          if ( ++v50 >= v31 || sub_3AE580((int)v11, (int)&a5) )
            break;
          v33 = 0;
          v51 = 4 * v50;
          do
          {
            while ( 1 )
            {
              v34 = &v46[v33];
              v35 = (_DWORD *)*v11;
              v36 = *(_DWORD *)((char *)v23[*v34] + v51);
              if ( *v11 != 0 )
              {
                v37 = v53;
                if ( v53 == -1 )
                {
                  v44 = (int *)v35[2];
                  if ( (unsigned int)v44 >= v35[3] )
                    v37 = (*(int (__fastcall **)(_DWORD *, int))(*v35 + 36))(v35, v53 + 1);
                  else
                    v37 = *v44;
                  if ( v37 == -1 )
                    *v11 = 0;
                  else
                    v11[1] = v37;
                }
              }
              else
              {
                v37 = -1;
              }
              if ( v36 == v37 )
                break;
              *v34 = v46[--v20];
              if ( v20 <= v33 )
                goto LABEL_28;
            }
            ++v33;
          }
          while ( v20 > v33 );
LABEL_28:
          if ( v20 <= 1 )
            goto LABEL_29;
        }
      }
    }
  }
  *a11 |= 4u;
LABEL_3:
  v14 = v48;
  v15 = v11[1];
  *v48 = *v11;
  v14[1] = v15;
  return v48;
}


//======================================================================
// sub_3AE834
// address: 0x003AE834   size: 0x2C0 (704 bytes)
//======================================================================
_DWORD *__fastcall sub_3AE834(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        _DWORD *a7,
        int *a8,
        unsigned int a9,
        int a10,
        int *a11)
{
  int *v11; // r9
  void *v12; // r0
  int *v13; // r5
  void *v14; // r11
  unsigned int v15; // r4
  unsigned int v16; // r8
  int *v17; // r6
  _DWORD *v18; // r0
  int v19; // r11
  _DWORD *v20; // r0
  int v21; // r3
  unsigned int v22; // r3
  int v23; // r12
  int *v24; // r1
  unsigned int *v25; // r2
  unsigned int v26; // r0
  unsigned int v27; // r5
  unsigned int v28; // r3
  int v29; // r3
  int *v30; // r3
  int *v31; // r3
  int *v32; // r3
  _DWORD *v33; // r3
  int v34; // r1
  int v36; // r11
  int *v37; // r8
  int *v38; // r2
  int v39; // r6
  int *v40; // r9
  unsigned int v41; // r5
  int *v42; // r4
  int v43; // r8
  int v44; // r1
  unsigned int v45; // r2
  int *v46; // r6
  size_t *v47; // r4
  int v48; // r5
  unsigned int v49; // r8
  int v50; // r3
  int v51; // r0
  int v52; // r0
  int v53; // [sp+0h] [bp+0h] BYREF
  int v54; // [sp+4h] [bp+4h]
  int *v55; // [sp+8h] [bp+8h]
  _DWORD *v56; // [sp+Ch] [bp+Ch]
  int v57; // [sp+10h] [bp+10h]
  int v58; // [sp+14h] [bp+14h]
  _DWORD *v59; // [sp+18h] [bp+18h] BYREF
  int v60; // [sp+1Ch] [bp+1Ch]

  v56 = a1;
  v60 = a4;
  v59 = a3;
  v11 = a8;
  v12 = sub_3AB100(a10 + 108);
  v13 = &v53 - 2 * a9 - 2;
  v14 = v12;
  if ( sub_3AE580((int)&v59, (int)&a5) || (v57 = sub_3AE544((int)&v59), v58 = 2 * a9, 2 * a9 == 0) )
  {
    v15 = 0;
    v16 = 0;
    v17 = nullptr;
  }
  else
  {
    v37 = v11;
    v38 = v11;
    v39 = 0;
    v40 = v13;
    v55 = v38;
    v41 = 0;
    v42 = v37;
    v43 = v57;
    do
    {
      while ( *(_DWORD *)*v42 != v43 && v43 != (*(int (__fastcall **)(void *))(*(_DWORD *)v14 + 24))(v14) )
      {
        ++v39;
        ++v42;
        if ( v39 == v58 )
          goto LABEL_59;
      }
      v44 = v58;
      v40[v41++] = v39++;
      ++v42;
    }
    while ( v39 != v44 );
LABEL_59:
    v15 = v41;
    v13 = v40;
    v11 = v55;
    if ( v15 != 0 )
    {
      sub_3ADB20((int)&v59);
      v45 = v15;
      v57 = (int)v13;
      v46 = v13;
      v47 = (size_t *)&v53;
      v48 = 0;
      v49 = v45;
      v58 = 0;
      do
      {
        v50 = *v46++;
        ++v48;
        *v47++ = j_wcslen((const wchar_t *)v11[v50]);
      }
      while ( v48 != v49 );
      v15 = v49;
      v13 = (int *)v57;
      v17 = &v53;
      v16 = 1;
    }
    else
    {
      v16 = 0;
      v17 = nullptr;
    }
  }
  v18 = v59;
  v57 = 4 * v16;
  if ( v59 == nullptr )
    goto LABEL_25;
  do
  {
    v19 = 0;
    if ( v60 == -1 )
    {
      v30 = (int *)v18[2];
      if ( (unsigned int)v30 < v18[3] )
        v52 = *v30;
      else
        v52 = (*(int (__fastcall **)(_DWORD *))(*v18 + 36))(v18);
      if ( v52 == -1 )
      {
        v59 = nullptr;
        v19 = 1;
      }
      else
      {
        v60 = v52;
        v19 = 0;
      }
    }
    v20 = a5;
    if ( a5 != nullptr )
      goto LABEL_6;
LABEL_26:
    if ( v19 == 1 )
      goto LABEL_27;
LABEL_8:
    if ( v59 != nullptr )
    {
      v36 = v60;
      if ( v60 == -1 )
      {
        v32 = (int *)v59[2];
        if ( (unsigned int)v32 < v59[3] )
          v36 = *v32;
        else
          v36 = (*(int (__fastcall **)(_DWORD *, int))(*v59 + 36))(v59, v60 + 1);
        if ( v36 != -1 )
        {
          v60 = v36;
          if ( v15 == 0 )
            goto LABEL_48;
          goto LABEL_12;
        }
        v59 = nullptr;
      }
    }
    else
    {
      v36 = -1;
    }
    if ( v15 == 0 )
      goto LABEL_48;
LABEL_12:
    v22 = 0;
    v23 = 0;
    v55 = v13;
    do
    {
      while ( 1 )
      {
        v24 = &v55[v22];
        v25 = (unsigned int *)&v17[v22];
        v26 = *v25;
        v58 = v11[*v24];
        if ( v16 < v26 )
          break;
        ++v23;
        ++v22;
LABEL_14:
        if ( v15 <= v22 )
          goto LABEL_18;
      }
      if ( *(_DWORD *)(v58 + v57) == v36 )
      {
        ++v22;
        goto LABEL_14;
      }
      v27 = v17[--v15];
      *v24 = v55[v15];
      *v25 = v27;
    }
    while ( v15 > v22 );
LABEL_18:
    v13 = v55;
    if ( v15 == v23 )
      goto LABEL_27;
    v18 = v59;
    if ( v59 != nullptr )
    {
      v28 = v59[2];
      if ( v28 < v59[3] )
      {
        v59[2] = v28 + 4;
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *))(*v59 + 40))(v59);
        v18 = v59;
      }
      v60 = -1;
    }
    ++v16;
    v57 += 4;
  }
  while ( v18 != nullptr );
LABEL_25:
  v19 = 1;
  v20 = a5;
  if ( a5 == nullptr )
    goto LABEL_26;
LABEL_6:
  v21 = 0;
  if ( a6 == -1 )
  {
    v31 = (int *)v20[2];
    if ( (unsigned int)v31 < v20[3] )
      v51 = *v31;
    else
      v51 = (*(int (__fastcall **)(_DWORD *, int))(*v20 + 36))(v20, a6 + 1);
    if ( v51 == -1 )
    {
      a5 = nullptr;
      v21 = 1;
    }
    else
    {
      a6 = v51;
      v21 = 0;
    }
  }
  if ( v21 != v19 )
    goto LABEL_8;
LABEL_27:
  if ( v15 == 1 )
  {
    if ( v16 == *v17 )
      goto LABEL_29;
LABEL_48:
    v54 = *a11;
    *a11 = v54 | 4;
  }
  else
  {
    if ( v15 != 2 || v16 != *v17 && v16 != v17[1] )
      goto LABEL_48;
LABEL_29:
    v29 = *v13;
    if ( a9 <= *v13 )
      v29 -= a9;
    *a7 = v29;
  }
  v33 = v56;
  v34 = v60;
  *v56 = v59;
  v33[1] = v34;
  return v56;
}


//======================================================================
// sub_3AEAF4
// address: 0x003AEAF4   size: 0x14E (334 bytes)
//======================================================================
_DWORD *__fastcall sub_3AEAF4(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  _DWORD *v11; // r4
  _DWORD *v12; // r3
  int v13; // r0
  int v14; // r2
  int v15; // r3
  int v16; // r3
  _DWORD *v17; // r4
  int v18; // r5
  int v19; // r7
  _DWORD *v20; // r0
  int v21; // r3
  int *v23; // r3
  int v24; // r0
  _DWORD *v25; // r3
  _DWORD v26[2]; // [sp+20h] [bp-54h] BYREF
  _DWORD *v27; // [sp+28h] [bp-4Ch]
  int v28; // [sp+2Ch] [bp-48h]
  int v29; // [sp+30h] [bp-44h] BYREF
  int v30; // [sp+34h] [bp-40h] BYREF
  int v31[15]; // [sp+38h] [bp-3Ch] BYREF

  v27 = a3;
  v28 = a4;
  v11 = sub_3AC210(a7 + 108);
  sub_3AB100(a7 + 108);
  v12 = (_DWORD *)v11[2];
  v13 = v12[19];
  v14 = v12[18];
  v31[2] = v12[20];
  v15 = v11[2];
  v31[1] = v13;
  v31[3] = *(_DWORD *)(v15 + 84);
  v16 = v11[2];
  v31[0] = v14;
  v31[4] = *(_DWORD *)(v16 + 88);
  v31[5] = *(_DWORD *)(v11[2] + 92);
  v31[6] = *(_DWORD *)(v11[2] + 96);
  v31[7] = *(_DWORD *)(v11[2] + 44);
  v31[8] = *(_DWORD *)(v11[2] + 48);
  v31[9] = *(_DWORD *)(v11[2] + 52);
  v31[10] = *(_DWORD *)(v11[2] + 56);
  v31[11] = *(_DWORD *)(v11[2] + 60);
  v31[12] = *(_DWORD *)(v11[2] + 64);
  v31[13] = *(_DWORD *)(v11[2] + 68);
  v30 = 0;
  sub_3AE834(v26, a2, v27, v28, a5, a6, &v29, v31, 7u, a7, &v30);
  v27 = (_DWORD *)v26[0];
  v28 = v26[1];
  v17 = (_DWORD *)v26[0];
  v18 = v26[1];
  if ( v30 != 0 )
  {
    *a8 |= 4u;
    if ( v17 != nullptr )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a9 + 24) = v29;
    if ( v17 != nullptr )
    {
LABEL_3:
      v19 = 0;
      if ( v18 == -1 )
      {
        v25 = (_DWORD *)v17[2];
        v18 = (unsigned int)v25 >= v17[3] ? (*(int (__fastcall **)(_DWORD *))(*v17 + 36))(v17) : *v25;
        v19 = 0;
        if ( v18 == -1 )
        {
          v19 = 1;
          v17 = nullptr;
        }
      }
      v20 = a5;
      if ( a5 != nullptr )
        goto LABEL_5;
LABEL_11:
      v21 = 1;
      goto LABEL_6;
    }
  }
  v20 = a5;
  v19 = 1;
  if ( a5 == nullptr )
    goto LABEL_11;
LABEL_5:
  v21 = 0;
  if ( a6 == -1 )
  {
    v23 = (int *)v20[2];
    if ( (unsigned int)v23 >= v20[3] )
      v24 = (*(int (__fastcall **)(_DWORD *))(*v20 + 36))(v20);
    else
      v24 = *v23;
    v21 = v24 == -1;
  }
LABEL_6:
  if ( v21 == v19 )
    *a8 |= 2u;
  *a1 = v17;
  a1[1] = v18;
  return a1;
}


//======================================================================
// sub_3AEC44
// address: 0x003AEC44   size: 0x1AC (428 bytes)
//======================================================================
_DWORD *__fastcall sub_3AEC44(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  _DWORD *v11; // r4
  _DWORD *v12; // r3
  _DWORD *v13; // r4
  int v14; // r5
  int v15; // r7
  _DWORD *v16; // r0
  int v17; // r3
  int *v19; // r3
  int v20; // r0
  _DWORD *v21; // r3
  _DWORD v22[2]; // [sp+20h] [bp-7Ch] BYREF
  _DWORD *v23; // [sp+28h] [bp-74h]
  int v24; // [sp+2Ch] [bp-70h]
  int v25; // [sp+30h] [bp-6Ch] BYREF
  int v26; // [sp+34h] [bp-68h] BYREF
  int v27[25]; // [sp+38h] [bp-64h] BYREF

  v23 = a3;
  v24 = a4;
  v11 = sub_3AC210(a7 + 108);
  sub_3AB100(a7 + 108);
  v12 = (_DWORD *)v11[2];
  v27[0] = v12[37];
  v27[1] = v12[38];
  v27[2] = v12[39];
  v27[3] = *(_DWORD *)(v11[2] + 160);
  v27[4] = *(_DWORD *)(v11[2] + 164);
  v27[5] = *(_DWORD *)(v11[2] + 168);
  v27[6] = *(_DWORD *)(v11[2] + 172);
  v27[7] = *(_DWORD *)(v11[2] + 176);
  v27[8] = *(_DWORD *)(v11[2] + 180);
  v27[9] = *(_DWORD *)(v11[2] + 184);
  v27[10] = *(_DWORD *)(v11[2] + 188);
  v27[11] = *(_DWORD *)(v11[2] + 192);
  v27[12] = *(_DWORD *)(v11[2] + 100);
  v27[13] = *(_DWORD *)(v11[2] + 104);
  v27[14] = *(_DWORD *)(v11[2] + 108);
  v27[15] = *(_DWORD *)(v11[2] + 112);
  v27[16] = *(_DWORD *)(v11[2] + 116);
  v27[17] = *(_DWORD *)(v11[2] + 120);
  v27[18] = *(_DWORD *)(v11[2] + 124);
  v27[19] = *(_DWORD *)(v11[2] + 128);
  v27[20] = *(_DWORD *)(v11[2] + 132);
  v27[21] = *(_DWORD *)(v11[2] + 136);
  v27[22] = *(_DWORD *)(v11[2] + 140);
  v27[23] = *(_DWORD *)(v11[2] + 144);
  v26 = 0;
  sub_3AE834(v22, a2, v23, v24, a5, a6, &v25, v27, 0xCu, a7, &v26);
  v23 = (_DWORD *)v22[0];
  v24 = v22[1];
  v13 = (_DWORD *)v22[0];
  v14 = v22[1];
  if ( v26 != 0 )
  {
    *a8 |= 4u;
    if ( v13 != nullptr )
      goto LABEL_3;
  }
  else
  {
    *(_DWORD *)(a9 + 16) = v25;
    if ( v13 != nullptr )
    {
LABEL_3:
      v15 = 0;
      if ( v14 == -1 )
      {
        v21 = (_DWORD *)v13[2];
        v14 = (unsigned int)v21 >= v13[3] ? (*(int (__fastcall **)(_DWORD *))(*v13 + 36))(v13) : *v21;
        v15 = 0;
        if ( v14 == -1 )
        {
          v15 = 1;
          v13 = nullptr;
        }
      }
      v16 = a5;
      if ( a5 != nullptr )
        goto LABEL_5;
LABEL_11:
      v17 = 1;
      goto LABEL_6;
    }
  }
  v16 = a5;
  v15 = 1;
  if ( a5 == nullptr )
    goto LABEL_11;
LABEL_5:
  v17 = 0;
  if ( a6 == -1 )
  {
    v19 = (int *)v16[2];
    if ( (unsigned int)v19 >= v16[3] )
      v20 = (*(int (__fastcall **)(_DWORD *))(*v16 + 36))(v16);
    else
      v20 = *v19;
    v17 = v20 == -1;
  }
LABEL_6:
  if ( v15 == v17 )
    *a8 |= 2u;
  *a1 = v13;
  a1[1] = v14;
  return a1;
}


//======================================================================
// sub_3AEDF0
// address: 0x003AEDF0   size: 0x748 (1864 bytes)
//======================================================================
_DWORD *__fastcall sub_3AEDF0(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        int *a9,
        wchar_t *s)
{
  int v10; // r5
  size_t v12; // r7
  _DWORD *v13; // r9
  int *v14; // r5
  size_t v15; // r10
  _DWORD *v16; // r0
  int v17; // r6
  _DWORD *v18; // r0
  int v19; // r3
  int v20; // r3
  wchar_t *v21; // r6
  wchar_t v22; // r6
  int v23; // r3
  int v24; // r1
  int *v26; // r3
  int *v27; // r3
  size_t v28; // r8
  int v29; // r0
  size_t v30; // r7
  int *v31; // r3
  _DWORD *v32; // r3
  _DWORD *v33; // r3
  int v34; // r2
  int v35; // r3
  const char *v36; // r1
  void *v37; // r2
  int v38; // r0
  _DWORD *v39; // r3
  _DWORD *v40; // r3
  int v41; // r0
  int v42; // r0
  int v43; // r0
  int v44; // r0
  _BOOL4 v45; // r0
  int v46; // r0
  int v47; // r0
  int v48; // [sp+0h] [bp-84h]
  int v49; // [sp+4h] [bp-80h]
  int v51; // [sp+34h] [bp-50h]
  int v52; // [sp+34h] [bp-50h]
  _DWORD v53[2]; // [sp+38h] [bp-4Ch] BYREF
  _DWORD *v54; // [sp+40h] [bp-44h] BYREF
  int v55; // [sp+44h] [bp-40h]
  int v56; // [sp+48h] [bp-3Ch] BYREF
  int v57; // [sp+4Ch] [bp-38h] BYREF
  _DWORD *v58; // [sp+50h] [bp-34h] BYREF
  int v59; // [sp+54h] [bp-30h]
  int v60; // [sp+58h] [bp-2Ch]
  int v61; // [sp+5Ch] [bp-28h]
  int v62; // [sp+60h] [bp-24h]
  int v63; // [sp+64h] [bp-20h]
  int v64; // [sp+68h] [bp-1Ch]
  int v65; // [sp+6Ch] [bp-18h]
  int v66; // [sp+70h] [bp-14h]
  int v67; // [sp+74h] [bp-10h]
  int v68; // [sp+78h] [bp-Ch]
  int v69; // [sp+7Ch] [bp-8h]

  v10 = a7 + 108;
  v55 = a4;
  v54 = a3;
  v12 = 0;
  v13 = sub_3AC210(a7 + 108);
  v14 = (int *)sub_3AB100(v10);
  v56 = 0;
  v15 = j_wcslen(s);
  v16 = v54;
  if ( v54 != nullptr )
    goto LABEL_2;
LABEL_14:
  v18 = a5;
  v17 = 1;
  if ( a5 != nullptr )
  {
    while ( 1 )
    {
      v19 = 0;
      if ( a6 == -1 )
      {
        v26 = (int *)v18[2];
        if ( (unsigned int)v26 < v18[3] )
          v47 = *v26;
        else
          v47 = (*(int (__fastcall **)(_DWORD *))(*v18 + 36))(v18);
        if ( v47 == -1 )
        {
          a5 = nullptr;
          v19 = 1;
        }
        else
        {
          a6 = v47;
          v19 = 0;
        }
      }
      if ( v19 == v17 )
        goto LABEL_16;
LABEL_6:
      v20 = v56;
      if ( v12 >= v15 || v56 != 0 )
        goto LABEL_17;
      v21 = &s[v12];
      if ( (*(int (__fastcall **)(int *, wchar_t, _DWORD))(*v14 + 48))(v14, *v21, 0) == 37 )
      {
        v28 = v12 + 1;
        v29 = (*(int (__fastcall **)(int *, wchar_t, _DWORD))(*v14 + 48))(v14, v21[1], 0);
        v57 = 0;
        if ( v29 == 79 || v29 == 69 )
        {
          v28 = v12 + 2;
          v29 = (*(int (__fastcall **)(int *, wchar_t, _DWORD))(*v14 + 48))(v14, v21[2], 0);
        }
        switch ( v29 )
        {
          case 'A':
            v32 = (_DWORD *)v13[2];
            v58 = (_DWORD *)v32[11];
            v59 = v32[12];
            v60 = v32[13];
            v61 = *(_DWORD *)(v13[2] + 56);
            v62 = *(_DWORD *)(v13[2] + 60);
            v63 = *(_DWORD *)(v13[2] + 64);
            v64 = *(_DWORD *)(v13[2] + 68);
            sub_3AE600(v53, a2, (int)v54, v55, (int)a5, a6, a9 + 6, &v58, 7, a7, &v56);
            goto LABEL_52;
          case 'B':
            v33 = (_DWORD *)v13[2];
            v58 = (_DWORD *)v33[25];
            v59 = v33[26];
            v60 = v33[27];
            v61 = *(_DWORD *)(v13[2] + 112);
            v62 = *(_DWORD *)(v13[2] + 116);
            v63 = *(_DWORD *)(v13[2] + 120);
            v64 = *(_DWORD *)(v13[2] + 124);
            v65 = *(_DWORD *)(v13[2] + 128);
            v66 = *(_DWORD *)(v13[2] + 132);
            v67 = *(_DWORD *)(v13[2] + 136);
            v68 = *(_DWORD *)(v13[2] + 140);
            v69 = *(_DWORD *)(v13[2] + 144);
            v48 = (int)a5;
            v49 = a6;
            goto LABEL_54;
          case 'C':
          case 'Y':
          case 'y':
            sub_3AB278(v53, a2, v54, v55, (int)a5, a6, &v57, 0, 9999, 4, a7, &v56);
            v54 = (_DWORD *)v53[0];
            v55 = v53[1];
            if ( v56 != 0 )
              goto LABEL_35;
            v34 = v57 - 1900;
            if ( v57 < 0 )
              v34 = v57 + 100;
            v30 = v28;
            a9[5] = v34;
            goto LABEL_36;
          case 'D':
            v35 = *v14;
            v36 = "%m/%d/%y";
            v37 = &unk_44DDD5;
            goto LABEL_60;
          case 'H':
            sub_3AB278(v53, a2, v54, v55, (int)a5, a6, a9 + 2, 0, 23, 2, a7, &v56);
            goto LABEL_63;
          case 'I':
            sub_3AB278(v53, a2, v54, v55, (int)a5, a6, a9 + 2, 1, 12, 2, a7, &v56);
            goto LABEL_63;
          case 'M':
            sub_3AB278(v53, a2, v54, v55, (int)a5, a6, a9 + 1, 0, 59, 2, a7, &v56);
            goto LABEL_63;
          case 'R':
            v35 = *v14;
            v36 = "%H:%M";
            v37 = &unk_44DDDE;
LABEL_60:
            (*(void (__fastcall **)(int *, const char *, void *, _DWORD **))(v35 + 44))(v14, v36, v37, &v58);
            goto LABEL_61;
          case 'S':
            sub_3AB278(v53, a2, v54, v55, (int)a5, a6, a9, 0, 61, 2, a7, &v56);
            goto LABEL_63;
          case 'T':
            (*(void (__fastcall **)(int *, const char *, void *, _DWORD **))(*v14 + 44))(
              v14,
              "%H:%M:%S",
              &unk_44DDE9,
              &v58);
LABEL_61:
            sub_3AEDF0((int)v53, a2, (int)v54, v55, (int)a5, a6, a7, (int)&v56, (int)a9, (wchar_t *)&v58);
            v54 = (_DWORD *)v53[0];
            v55 = v53[1];
            v30 = v28;
            goto LABEL_36;
          case 'X':
            sub_3AEDF0((int)v53, a2, (int)v54, v55, (int)a5, a6, a7, (int)&v56, (int)a9, *(wchar_t **)(v13[2] + 16));
            goto LABEL_50;
          case 'Z':
            v38 = sub_3AE544((int)&v54);
            if ( (*(int (__fastcall **)(int *, int, int))(*v14 + 8))(v14, 1, v38) != 0 )
            {
              sub_3AE600(v53, a2, (int)v54, v55, (int)a5, a6, &v58, (_DWORD **)off_472494, 14, a7, &v56);
              v54 = (_DWORD *)v53[0];
              v55 = v53[1];
              v45 = sub_3AE580((int)&v54, (int)&a5);
              if ( v45
                || v56 != 0
                || v58 != nullptr
                || (v51 = sub_3AE544((int)&v54)) != (*(int (__fastcall **)(int *, int))(*v14 + 40))(v14, 45)
                && (v52 = sub_3AE544((int)&v54)) != (*(int (__fastcall **)(int *, int))(*v14 + 40))(v14, 43) )
              {
LABEL_35:
                v30 = v28;
              }
              else
              {
                sub_3AB278(v53, a2, v54, v55, (int)a5, a6, (int *)&v58, 0, 23, 2, a7, &v56);
                v54 = (_DWORD *)v53[0];
                v55 = v53[1];
                sub_3AB278(v53, a2, (_DWORD *)v53[0], v53[1], (int)a5, a6, (int *)&v58, 0, 59, 2, a7, &v56);
                v54 = (_DWORD *)v53[0];
                v55 = v53[1];
                v30 = v28;
              }
            }
            else
            {
              v56 |= 4u;
              v30 = v28;
            }
LABEL_36:
            v12 = v30 + 1;
            break;
          case 'a':
            v39 = (_DWORD *)v13[2];
            v58 = (_DWORD *)v39[18];
            v59 = v39[19];
            v60 = v39[20];
            v61 = *(_DWORD *)(v13[2] + 84);
            v62 = *(_DWORD *)(v13[2] + 88);
            v63 = *(_DWORD *)(v13[2] + 92);
            v64 = *(_DWORD *)(v13[2] + 96);
            sub_3AE600(v53, a2, (int)v54, v55, (int)a5, a6, a9 + 6, &v58, 7, a7, &v56);
            goto LABEL_52;
          case 'b':
          case 'h':
            v40 = (_DWORD *)v13[2];
            v58 = (_DWORD *)v40[37];
            v59 = v40[38];
            v60 = v40[39];
            v61 = *(_DWORD *)(v13[2] + 160);
            v62 = *(_DWORD *)(v13[2] + 164);
            v63 = *(_DWORD *)(v13[2] + 168);
            v64 = *(_DWORD *)(v13[2] + 172);
            v65 = *(_DWORD *)(v13[2] + 176);
            v66 = *(_DWORD *)(v13[2] + 180);
            v67 = *(_DWORD *)(v13[2] + 184);
            v68 = *(_DWORD *)(v13[2] + 188);
            v69 = *(_DWORD *)(v13[2] + 192);
            v48 = (int)a5;
            v49 = a6;
LABEL_54:
            sub_3AE600(v53, a2, (int)v54, v55, v48, v49, a9 + 4, &v58, 12, a7, &v56);
LABEL_52:
            v54 = (_DWORD *)v53[0];
            v55 = v53[1];
            v30 = v28;
            goto LABEL_36;
          case 'c':
            sub_3AEDF0((int)v53, a2, (int)v54, v55, (int)a5, a6, a7, (int)&v56, (int)a9, *(wchar_t **)(v13[2] + 24));
            goto LABEL_50;
          case 'd':
            sub_3AB278(v53, a2, v54, v55, (int)a5, a6, a9 + 3, 1, 31, 2, a7, &v56);
            goto LABEL_63;
          case 'e':
            v41 = sub_3AE544((int)&v54);
            if ( (*(int (__fastcall **)(int *, int, int))(*v14 + 8))(v14, 8, v41) != 0 )
            {
              v42 = sub_3ADB20((int)&v54);
              v30 = v28;
              sub_3AB278(v53, a2, *(_DWORD **)v42, *(_DWORD *)(v42 + 4), (int)a5, a6, a9 + 3, 1, 9, 1, a7, &v56);
              v54 = (_DWORD *)v53[0];
              v55 = v53[1];
            }
            else
            {
              sub_3AB278(v53, a2, v54, v55, (int)a5, a6, a9 + 3, 10, 31, 2, a7, &v56);
LABEL_63:
              v54 = (_DWORD *)v53[0];
              v55 = v53[1];
              v30 = v28;
            }
            goto LABEL_36;
          case 'm':
            sub_3AB278(v53, a2, v54, v55, (int)a5, a6, &v57, 1, 12, 2, a7, &v56);
            v54 = (_DWORD *)v53[0];
            v55 = v53[1];
            if ( v56 != 0 )
              goto LABEL_35;
            a9[4] = v57 - 1;
            v30 = v28;
            goto LABEL_36;
          case 'n':
            v43 = sub_3AE544((int)&v54);
            if ( (*(int (__fastcall **)(int *, int, _DWORD))(*v14 + 48))(v14, v43, 0) != 10 )
              goto LABEL_82;
            goto LABEL_84;
          case 't':
            v44 = sub_3AE544((int)&v54);
            if ( (*(int (__fastcall **)(int *, int, _DWORD))(*v14 + 48))(v14, v44, 0) == 9 )
            {
LABEL_84:
              sub_3ADB20((int)&v54);
              v30 = v28;
            }
            else
            {
LABEL_82:
              v56 |= 4u;
              v30 = v28;
            }
            goto LABEL_36;
          case 'x':
            sub_3AEDF0((int)v53, a2, (int)v54, v55, (int)a5, a6, a7, (int)&v56, (int)a9, *(wchar_t **)(v13[2] + 8));
LABEL_50:
            v54 = (_DWORD *)v53[0];
            v55 = v53[1];
            v30 = v28;
            goto LABEL_36;
          default:
            v56 |= 4u;
            goto LABEL_35;
        }
        goto LABEL_13;
      }
      v22 = *v21;
      if ( v54 == nullptr )
        break;
      v23 = v55;
      if ( v55 != -1 )
        goto LABEL_11;
      v31 = (int *)v54[2];
      if ( (unsigned int)v31 < v54[3] )
        v23 = *v31;
      else
        v23 = (*(int (__fastcall **)(_DWORD *, int))(*v54 + 36))(v54, v55 + 1);
      if ( v23 == -1 )
      {
        v54 = nullptr;
LABEL_11:
        if ( v22 == v23 )
          goto LABEL_42;
        goto LABEL_12;
      }
      v55 = v23;
      if ( v22 == v23 )
      {
LABEL_42:
        sub_3ADB20((int)&v54);
        ++v12;
        goto LABEL_13;
      }
LABEL_12:
      ++v12;
      v56 |= 4u;
LABEL_13:
      v16 = v54;
      if ( v54 == nullptr )
        goto LABEL_14;
LABEL_2:
      v17 = 0;
      if ( v55 == -1 )
      {
        v27 = (int *)v16[2];
        if ( (unsigned int)v27 < v16[3] )
          v46 = *v27;
        else
          v46 = (*(int (__fastcall **)(_DWORD *))(*v16 + 36))(v16);
        if ( v46 == -1 )
        {
          v54 = nullptr;
          v17 = 1;
        }
        else
        {
          v55 = v46;
          v17 = 0;
        }
      }
      v18 = a5;
      if ( a5 == nullptr )
        goto LABEL_15;
    }
    v23 = -1;
    goto LABEL_11;
  }
LABEL_15:
  if ( v17 != 1 )
    goto LABEL_6;
LABEL_16:
  v20 = v56;
LABEL_17:
  if ( v20 != 0 || v12 != v15 )
    *a8 |= 4u;
  v24 = v55;
  *a1 = v54;
  a1[1] = v24;
  return a1;
}


//======================================================================
// sub_3AF53C
// address: 0x003AF53C   size: 0xCC (204 bytes)
//======================================================================
_DWORD *__fastcall sub_3AF53C(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int *a9)
{
  _DWORD *v11; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r8
  _DWORD *v15; // r0
  int v16; // r3
  int *v18; // r3
  int v19; // r0
  _DWORD *v20; // r3
  _DWORD v21[2]; // [sp+18h] [bp-10h] BYREF
  int v22; // [sp+20h] [bp-8h]
  int v23; // [sp+24h] [bp-4h]

  v22 = a3;
  v23 = a4;
  v11 = sub_3AC210(a7 + 108);
  sub_3AEDF0(v21, a2, (_DWORD *)v22, v23, a5, a6, a7, a8, a9, *(wchar_t **)(v11[2] + 16));
  v22 = v21[0];
  v23 = v21[1];
  v12 = v21[0];
  v13 = v21[1];
  if ( v21[0] != 0 )
  {
    v14 = 0;
    if ( v23 == -1 )
    {
      v20 = *(_DWORD **)(v22 + 8);
      v13 = (unsigned int)v20 >= *(_DWORD *)(v22 + 12) ? (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 36))(v22) : *v20;
      v14 = 0;
      if ( v13 == -1 )
      {
        v15 = a5;
        v14 = 1;
        v12 = 0;
        if ( a5 == nullptr )
          goto LABEL_15;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v14 = 1;
  }
  v15 = a5;
  if ( a5 == nullptr )
  {
LABEL_15:
    v16 = 1;
    goto LABEL_5;
  }
LABEL_4:
  v16 = 0;
  if ( a6 == -1 )
  {
    v18 = (int *)v15[2];
    if ( (unsigned int)v18 >= v15[3] )
      v19 = (*(int (__fastcall **)(_DWORD *))(*v15 + 36))(v15);
    else
      v19 = *v18;
    v16 = v19 == -1;
  }
LABEL_5:
  if ( v16 == v14 )
    *a8 |= 2u;
  *a1 = v12;
  a1[1] = v13;
  return a1;
}


//======================================================================
// sub_3AF608
// address: 0x003AF608   size: 0xCC (204 bytes)
//======================================================================
_DWORD *__fastcall sub_3AF608(_DWORD *a1, int a2, int a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int *a9)
{
  _DWORD *v11; // r0
  int v12; // r4
  int v13; // r5
  int v14; // r8
  _DWORD *v15; // r0
  int v16; // r3
  int *v18; // r3
  int v19; // r0
  _DWORD *v20; // r3
  _DWORD v21[2]; // [sp+18h] [bp-10h] BYREF
  int v22; // [sp+20h] [bp-8h]
  int v23; // [sp+24h] [bp-4h]

  v22 = a3;
  v23 = a4;
  v11 = sub_3AC210(a7 + 108);
  sub_3AEDF0(v21, a2, (_DWORD *)v22, v23, a5, a6, a7, a8, a9, *(wchar_t **)(v11[2] + 8));
  v22 = v21[0];
  v23 = v21[1];
  v12 = v21[0];
  v13 = v21[1];
  if ( v21[0] != 0 )
  {
    v14 = 0;
    if ( v23 == -1 )
    {
      v20 = *(_DWORD **)(v22 + 8);
      v13 = (unsigned int)v20 >= *(_DWORD *)(v22 + 12) ? (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 36))(v22) : *v20;
      v14 = 0;
      if ( v13 == -1 )
      {
        v15 = a5;
        v14 = 1;
        v12 = 0;
        if ( a5 == nullptr )
          goto LABEL_15;
        goto LABEL_4;
      }
    }
  }
  else
  {
    v14 = 1;
  }
  v15 = a5;
  if ( a5 == nullptr )
  {
LABEL_15:
    v16 = 1;
    goto LABEL_5;
  }
LABEL_4:
  v16 = 0;
  if ( a6 == -1 )
  {
    v18 = (int *)v15[2];
    if ( (unsigned int)v18 >= v15[3] )
      v19 = (*(int (__fastcall **)(_DWORD *))(*v15 + 36))(v15);
    else
      v19 = *v18;
    v16 = v19 == -1;
  }
LABEL_5:
  if ( v16 == v14 )
    *a8 |= 2u;
  *a1 = v12;
  a1[1] = v13;
  return a1;
}


//======================================================================
// sub_3AF6D4
// address: 0x003AF6D4   size: 0x800 (2048 bytes)
//======================================================================
_DWORD *__fastcall sub_3AF6D4(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        wchar_t a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  int *v9; // r5
  void *v10; // r8
  int v11; // r0
  int v12; // r9
  unsigned int v13; // r0
  int v14; // r10
  _DWORD *v15; // r0
  int v16; // r5
  _DWORD *v17; // r0
  int v18; // r3
  int v19; // r3
  _DWORD *v20; // r0
  char v21; // r6
  char *v22; // r3
  int v23; // r2
  int v24; // r5
  char *v25; // r3
  char *v26; // r2
  unsigned int v27; // r3
  int v28; // r5
  _DWORD *v29; // r0
  int v30; // r3
  wchar_t *v31; // r0
  char *v32; // r3
  int v33; // r2
  int v34; // r5
  char *v35; // r3
  char *v36; // r2
  int v37; // r0
  int v38; // r2
  int *v39; // r3
  _DWORD *v40; // r0
  int v41; // r10
  int v42; // r5
  _DWORD *v43; // r0
  int v44; // r3
  unsigned int v45; // r3
  int *v46; // r3
  wchar_t *v47; // r3
  wchar_t *v48; // r3
  int *v49; // r3
  int *v50; // r3
  int v51; // r5
  int *v52; // r3
  wchar_t *v53; // r3
  wchar_t v54; // r1
  int v56; // r6
  wchar_t *v57; // r3
  unsigned int v58; // r3
  int v59; // r0
  _BOOL4 v60; // r0
  _BOOL4 v61; // r0
  int v62; // r6
  _DWORD *v63; // r6
  unsigned int i; // r5
  int v65; // r1
  wchar_t v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  wchar_t v70; // r0
  wchar_t v71; // r2
  wchar_t v72; // r0
  int v73; // [sp+1Ch] [bp-58h]
  int v74; // [sp+28h] [bp-4Ch]
  int v75; // [sp+2Ch] [bp-48h]
  int v76; // [sp+30h] [bp-44h]
  unsigned int v77; // [sp+38h] [bp-3Ch]
  unsigned __int8 v78; // [sp+3Ch] [bp-38h]
  _BOOL4 v79; // [sp+40h] [bp-34h]
  int v81; // [sp+4Ch] [bp-28h]
  _DWORD *v82; // [sp+50h] [bp-24h] BYREF
  wchar_t c; // [sp+54h] [bp-20h]
  _BYTE v84[4]; // [sp+5Ch] [bp-18h] BYREF
  _BYTE v85[4]; // [sp+60h] [bp-14h] BYREF
  char *v86; // [sp+64h] [bp-10h] BYREF
  char *v87; // [sp+68h] [bp-Ch] BYREF
  unsigned __int8 v88[8]; // [sp+6Ch] [bp-8h]

  v9 = (int *)(a7 + 108);
  v82 = a3;
  c = a4;
  v10 = sub_3AB100(a7 + 108);
  v11 = sub_3ADB48((int)v84, v9);
  v79 = false;
  v12 = v11;
  v75 = v11 + 64;
  if ( *(_DWORD *)(v11 + 40) != 0 )
    v79 = *(_DWORD *)(v11 + 48) != 0;
  v86 = &byte_55FB88;
  if ( *(_BYTE *)(v11 + 16) != 0 )
    sub_3BE700(&v86, 32);
  v87 = &byte_55FB88;
  sub_3BE700(&v87, 32);
  v74 = 0;
  v73 = 0;
  *(_DWORD *)v88 = *(_DWORD *)(v12 + 60);
  v77 = 0;
  v76 = 0;
  v78 = 0;
  v81 = 0;
  v13 = v88[0];
  if ( v88[0] <= 4u )
    goto LABEL_10;
LABEL_6:
  v14 = 1;
LABEL_7:
  while ( (((unsigned int)(v74 + 1) >> 31) + ((unsigned int)(v74 + 1) <= 3)) << 24 != 0 )
  {
    ++v74;
LABEL_9:
    v13 = v88[v74];
    if ( v13 > 4 )
      goto LABEL_6;
LABEL_10:
    switch ( v13 )
    {
      case 0u:
        v14 = 1;
        goto LABEL_12;
      case 1u:
        if ( sub_3AE580((int)&v82, (int)&a5)
          || (v59 = sub_3AE544((int)&v82),
              (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)v10 + 8))(v10, 8, v59) == 0) )
        {
          v14 = 0;
          if ( v74 != 3 )
            goto LABEL_13;
        }
        else
        {
          sub_3ADB20((int)&v82);
          v14 = 1;
LABEL_12:
          if ( v74 != 3 )
          {
LABEL_13:
            v15 = v82;
            if ( v82 != nullptr )
            {
LABEL_14:
              v16 = 0;
              if ( c == -1 )
              {
                v47 = (wchar_t *)v15[2];
                if ( (unsigned int)v47 < v15[3] )
                  v66 = *v47;
                else
                  v66 = (*(int (__fastcall **)(_DWORD *))(*v15 + 36))(v15);
                if ( v66 == -1 )
                {
                  v82 = nullptr;
                  v16 = 1;
                }
                else
                {
                  c = v66;
                  v16 = 0;
                }
              }
LABEL_15:
              v17 = a5;
              if ( a5 == nullptr )
                goto LABEL_115;
            }
            else
            {
              while ( 1 )
              {
                v17 = a5;
                v16 = 1;
                if ( a5 != nullptr )
                  break;
LABEL_115:
                v18 = 1;
LABEL_17:
                if ( v18 == v16 )
                  goto LABEL_18;
                if ( v82 != nullptr && c == -1 )
                {
                  v57 = (wchar_t *)v82[2];
                  if ( (unsigned int)v57 < v82[3] )
                    v71 = *v57;
                  else
                    v71 = (*(int (__fastcall **)(_DWORD *, int))(*v82 + 36))(v82, c + 1);
                  if ( v71 == -1 )
                    v82 = nullptr;
                  else
                    c = v71;
                }
                v16 = (*(int (__fastcall **)(void *, int))(*(_DWORD *)v10 + 8))(v10, 8);
                if ( v16 == 0 )
                  goto LABEL_18;
                v15 = v82;
                if ( v82 == nullptr )
                  goto LABEL_15;
                v45 = v82[2];
                if ( v45 < v82[3] )
                {
                  v82[2] = v45 + 4;
                }
                else
                {
                  (*(void (__fastcall **)(_DWORD *))(*v82 + 40))(v82);
                  v15 = v82;
                }
                c = -1;
                if ( v15 != nullptr )
                  goto LABEL_14;
              }
            }
            v18 = 0;
            if ( a6 == -1 )
            {
              v46 = (int *)v17[2];
              if ( (unsigned int)v46 < v17[3] )
                v67 = *v46;
              else
                v67 = (*(int (__fastcall **)(_DWORD *, int))(*v17 + 36))(v17, a6 + 1);
              if ( v67 == -1 )
              {
                a5 = nullptr;
                v18 = 1;
              }
              else
              {
                a6 = v67;
                v18 = 0;
              }
            }
            goto LABEL_17;
          }
        }
        v19 = (v77 > 1) & (unsigned __int8)v14;
        goto LABEL_73;
      case 2u:
        if ( (*(_DWORD *)(a7 + 12) & 0x200) != 0 || v77 > 1 || v74 == 0 )
          goto LABEL_97;
        if ( v74 == 1 )
        {
          if ( v79 || v88[0] == 3 || v88[2] == 1 )
            goto LABEL_97;
          v74 = 2;
        }
        else
        {
          v14 = 1;
          if ( v74 != 2 )
            continue;
          if ( v88[3] == 4 || v79 && v88[3] == 3 )
          {
LABEL_97:
            v40 = v82;
            v41 = *(_DWORD *)(v12 + 32);
            v42 = 0;
            while ( v40 != nullptr )
            {
              v56 = 0;
              if ( c != -1 )
                goto LABEL_101;
              v53 = (wchar_t *)v40[2];
              if ( (unsigned int)v53 < v40[3] )
                v70 = *v53;
              else
                v70 = (*(int (__fastcall **)(_DWORD *, int))(*v40 + 36))(v40, c + 1);
              if ( v70 == -1 )
              {
                v82 = nullptr;
                v56 = 1;
LABEL_101:
                v43 = a5;
                if ( a5 == nullptr )
                  goto LABEL_163;
                goto LABEL_102;
              }
              c = v70;
              v43 = a5;
              v56 = 0;
              if ( a5 == nullptr )
              {
LABEL_163:
                v44 = 1;
                goto LABEL_103;
              }
LABEL_102:
              v44 = 0;
              if ( a6 != -1 )
                goto LABEL_103;
              v52 = (int *)v43[2];
              if ( (unsigned int)v52 < v43[3] )
                v69 = *v52;
              else
                v69 = (*(int (__fastcall **)(_DWORD *, int))(*v43 + 36))(v43, a6 + 1);
              if ( v69 == -1 )
              {
                a5 = nullptr;
                v44 = 1;
LABEL_103:
                if ( v44 == v56 )
                  goto LABEL_156;
                goto LABEL_104;
              }
              a6 = v69;
              if ( v56 == 0 )
              {
LABEL_156:
                if ( v42 != v41 )
                {
LABEL_165:
                  if ( v42 != 0 || (*(_DWORD *)(a7 + 12) & 0x200) != 0 )
                  {
LABEL_167:
                    *a8 |= 4u;
                    goto LABEL_168;
                  }
                }
LABEL_105:
                v14 = 1;
                goto LABEL_7;
              }
LABEL_104:
              if ( v42 == v41 )
                goto LABEL_105;
              if ( *(_DWORD *)(4 * v42 + *(_DWORD *)(v12 + 28)) != sub_3AE544((int)&v82) )
                goto LABEL_165;
              v40 = v82;
              if ( v82 != nullptr )
              {
                v58 = v82[2];
                if ( v58 < v82[3] )
                {
                  v82[2] = v58 + 4;
                }
                else
                {
                  (*(void (__fastcall **)(_DWORD *))(*v82 + 40))(v82);
                  v40 = v82;
                }
                c = -1;
              }
              ++v42;
            }
            v56 = 1;
            goto LABEL_101;
          }
          v74 = 3;
        }
        goto LABEL_9;
      case 3u:
        if ( *(_DWORD *)(v12 + 40) != 0 )
        {
          v60 = sub_3AE580((int)&v82, (int)&a5);
          if ( !v60 && **(_DWORD **)(v12 + 36) == sub_3AE544((int)&v82) )
          {
            v77 = *(_DWORD *)(v12 + 40);
            sub_3ADB20((int)&v82);
            goto LABEL_6;
          }
        }
        if ( *(_DWORD *)(v12 + 48) != 0 )
        {
          v61 = sub_3AE580((int)&v82, (int)&a5);
          if ( !v61 && **(_DWORD **)(v12 + 44) == sub_3AE544((int)&v82) )
          {
            v77 = *(_DWORD *)(v12 + 48);
            sub_3ADB20((int)&v82);
            v14 = 1;
            v81 = 1;
            continue;
          }
        }
        if ( *(_DWORD *)(v12 + 40) != 0 && *(_DWORD *)(v12 + 48) == 0 )
        {
          v14 = 1;
          v81 = 1;
          continue;
        }
        v14 = !v79;
        goto LABEL_18;
      case 4u:
        v20 = v82;
        while ( 2 )
        {
          if ( v20 == nullptr )
            goto LABEL_150;
          v28 = 0;
          if ( c != -1 )
            goto LABEL_34;
          v48 = (wchar_t *)v20[2];
          if ( (unsigned int)v48 < v20[3] )
            v72 = *v48;
          else
            v72 = (*(int (__fastcall **)(_DWORD *, int))(*v20 + 36))(v20, c + 1);
          if ( v72 == -1 )
          {
            v82 = nullptr;
            v28 = 1;
            goto LABEL_34;
          }
          c = v72;
          v29 = a5;
          v28 = 0;
          if ( a5 == nullptr )
            goto LABEL_134;
LABEL_35:
          v30 = 0;
          if ( a6 == -1 )
          {
            v49 = (int *)v29[2];
            if ( (unsigned int)v49 < v29[3] )
              v68 = *v49;
            else
              v68 = (*(int (__fastcall **)(_DWORD *, int))(*v29 + 36))(v29, a6 + 1);
            if ( v68 == -1 )
            {
              a5 = nullptr;
              v30 = 1;
            }
            else
            {
              a6 = v68;
              v30 = 0;
            }
          }
          if ( v28 == v30 )
          {
LABEL_135:
            v14 = 1;
            goto LABEL_136;
          }
LABEL_37:
          if ( v82 != nullptr )
          {
            v51 = c;
            if ( c == -1 )
            {
              v50 = (int *)v82[2];
              if ( (unsigned int)v50 < v82[3] )
                v51 = *v50;
              else
                v51 = (*(int (__fastcall **)(_DWORD *, int))(*v82 + 36))(v82, c + 1);
              if ( v51 == -1 )
                v82 = nullptr;
              else
                c = v51;
            }
          }
          else
          {
            v51 = -1;
          }
          v31 = j_wmemchr((const wchar_t *)(v12 + 68), v51, 0xAu);
          if ( v31 != nullptr )
          {
            v21 = off_472458[0][((int)v31 - v75) >> 2];
            v22 = v87;
            v23 = *((_DWORD *)v87 - 3);
            v24 = v23 + 1;
            if ( (unsigned int)(v23 + 1) > *((_DWORD *)v87 - 2) || *((int *)v87 - 1) > 0 )
            {
              sub_3BE700(&v87, v23 + 1);
              v22 = v87;
              v23 = *((_DWORD *)v87 - 3);
            }
            v22[v23] = v21;
            v25 = v87;
            v26 = v87 - 12;
            if ( v87 - 12 != (char *)&dword_55FB7C )
            {
              *((_DWORD *)v87 - 1) = 0;
              *(_DWORD *)v26 = v24;
              v25[v24] = 0;
            }
            ++v73;
LABEL_27:
            v20 = v82;
            if ( v82 != nullptr )
            {
              v27 = v82[2];
              if ( v27 < v82[3] )
              {
                v82[2] = v27 + 4;
              }
              else
              {
                (*(void (__fastcall **)(_DWORD *))(*v82 + 40))(v82);
                v20 = v82;
              }
              c = -1;
              continue;
            }
LABEL_150:
            v28 = 1;
LABEL_34:
            v29 = a5;
            if ( a5 != nullptr )
              goto LABEL_35;
LABEL_134:
            if ( v28 == 1 )
              goto LABEL_135;
            goto LABEL_37;
          }
          break;
        }
        if ( *(_DWORD *)(v12 + 20) != v51 || v76 != 0 )
        {
          if ( *(_BYTE *)(v12 + 16) == 0 )
          {
            v14 = 1;
            goto LABEL_136;
          }
          if ( *(_DWORD *)(v12 + 24) != v51 )
          {
            v14 = 1;
            goto LABEL_136;
          }
          if ( v76 != 0 )
            goto LABEL_135;
          if ( v73 == 0 )
          {
            v14 = 0;
            goto LABEL_136;
          }
          v32 = v86;
          v33 = *((_DWORD *)v86 - 3);
          v34 = v33 + 1;
          if ( (unsigned int)(v33 + 1) > *((_DWORD *)v86 - 2) || *((int *)v86 - 1) > 0 )
          {
            sub_3BE700(&v86, v33 + 1);
            v32 = v86;
            v33 = *((_DWORD *)v86 - 3);
          }
          v32[v33] = v73;
          v35 = v86;
          v36 = v86 - 12;
          v73 = 0;
          if ( v86 - 12 != (char *)&dword_55FB7C )
          {
            *((_DWORD *)v86 - 1) = 0;
            *(_DWORD *)v36 = v34;
            v35[v34] = 0;
          }
          goto LABEL_27;
        }
        if ( *(int *)(v12 + 52) > 0 )
        {
          v78 = v73;
          v76 = 1;
          v73 = 0;
          goto LABEL_27;
        }
        v14 = 1;
LABEL_136:
        if ( *((_DWORD *)v87 - 3) == 0 )
          goto LABEL_167;
LABEL_18:
        if ( v14 == 0 )
          goto LABEL_19;
        break;
      default:
        goto LABEL_6;
    }
  }
LABEL_19:
  v19 = (v77 > 1) & (unsigned __int8)v14;
LABEL_73:
  if ( v19 != 0 )
  {
    if ( v81 != 0 )
      v62 = *(_DWORD *)(v12 + 44);
    else
      v62 = *(_DWORD *)(v12 + 36);
    v63 = (_DWORD *)(v62 + 4);
    for ( i = 1; !sub_3AE580((int)&v82, (int)&a5) && i < v77; ++i )
    {
      if ( *v63 != sub_3AE544((int)&v82) )
        goto LABEL_167;
      sub_3ADB20((int)&v82);
      ++v63;
    }
    if ( i != v77 )
      goto LABEL_167;
  }
  else if ( v14 == 0 )
  {
    goto LABEL_167;
  }
  if ( *((_DWORD *)v87 - 3) > 1u )
  {
    v37 = sub_3BDB90(&v87, 48, 0);
    if ( v37 != 0 )
    {
      v38 = v37;
      if ( v37 == -1 )
        v38 = *((_DWORD *)v87 - 3) - 1;
      sub_3BE210(&v87, 0, v38);
    }
  }
  if ( v81 != 0 )
  {
    v39 = (int *)v87;
    if ( *((int *)v87 - 1) >= 0 )
    {
      sub_3BE0AC(&v87);
      v39 = (int *)v87;
    }
    if ( *(_BYTE *)v39 != 48 )
    {
      if ( *(v39 - 1) >= 0 )
        sub_3BE0AC(&v87);
      sub_3BE294(&v87, 0, 0, 1, 45);
      *((_DWORD *)v87 - 1) = -1;
    }
  }
  if ( *((_DWORD *)v86 - 3) != 0 )
  {
    v65 = v76 != 0 ? v78 : (unsigned __int8)v73;
    sub_3BEA50(&v86, v65);
    if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), &v86) == 0 )
      *a8 |= 4u;
  }
  if ( v76 != 0 && *(_DWORD *)(v12 + 52) != v73 )
    goto LABEL_167;
  sub_3BD870(a9, &v87);
LABEL_168:
  if ( sub_3AE580((int)&v82, (int)&a5) )
    *a8 |= 2u;
  v54 = c;
  *a1 = v82;
  a1[1] = v54;
  sub_3BDF68(v87 - 12, v85);
  sub_3BDF68(v86 - 12, v85);
  return a1;
}


//======================================================================
// sub_3AFED4
// address: 0x003AFED4   size: 0x81E (2078 bytes)
//======================================================================
_DWORD *__fastcall sub_3AFED4(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        wchar_t a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        int a9)
{
  int *v9; // r5
  void *v10; // r8
  int v11; // r0
  int v12; // r9
  unsigned int v13; // r0
  int v14; // r10
  _DWORD *v15; // r0
  int v16; // r5
  _DWORD *v17; // r0
  int v18; // r3
  int v19; // r3
  _DWORD *v20; // r0
  char v21; // r6
  char *v22; // r3
  int v23; // r2
  int v24; // r5
  char *v25; // r3
  char *v26; // r2
  unsigned int v27; // r3
  int v28; // r5
  _DWORD *v29; // r0
  int v30; // r3
  wchar_t *v31; // r0
  char *v32; // r3
  int v33; // r2
  int v34; // r5
  char *v35; // r3
  char *v36; // r2
  int v37; // r0
  int v38; // r2
  int *v39; // r3
  _DWORD *v40; // r0
  int v41; // r10
  int v42; // r5
  _DWORD *v43; // r0
  int v44; // r3
  unsigned int v45; // r3
  int *v46; // r3
  wchar_t *v47; // r3
  wchar_t *v48; // r3
  int *v49; // r3
  int *v50; // r3
  int v51; // r5
  int *v52; // r3
  wchar_t *v53; // r3
  wchar_t v54; // r1
  char *v55; // r5
  int v57; // r6
  wchar_t *v58; // r3
  unsigned int v59; // r3
  int v60; // r0
  _BOOL4 v61; // r0
  _BOOL4 v62; // r0
  int v63; // r6
  _DWORD *v64; // r6
  unsigned int i; // r5
  int v66; // r1
  wchar_t v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  wchar_t v71; // r0
  wchar_t v72; // r0
  wchar_t v73; // r2
  int v74; // [sp+1Ch] [bp-58h]
  int v75; // [sp+28h] [bp-4Ch]
  int v76; // [sp+2Ch] [bp-48h]
  int v77; // [sp+30h] [bp-44h]
  unsigned int v78; // [sp+38h] [bp-3Ch]
  unsigned __int8 v79; // [sp+3Ch] [bp-38h]
  _BOOL4 v80; // [sp+40h] [bp-34h]
  int v82; // [sp+4Ch] [bp-28h]
  _DWORD *v83; // [sp+50h] [bp-24h] BYREF
  wchar_t c; // [sp+54h] [bp-20h]
  _BYTE v85[4]; // [sp+5Ch] [bp-18h] BYREF
  _BYTE v86[4]; // [sp+60h] [bp-14h] BYREF
  char *v87; // [sp+64h] [bp-10h] BYREF
  char *v88; // [sp+68h] [bp-Ch] BYREF
  unsigned __int8 v89[8]; // [sp+6Ch] [bp-8h]

  v9 = (int *)(a7 + 108);
  v83 = a3;
  c = a4;
  v10 = sub_3AB100(a7 + 108);
  v11 = sub_3ADA78((int)v85, v9);
  v80 = false;
  v12 = v11;
  v76 = v11 + 64;
  if ( *(_DWORD *)(v11 + 40) != 0 )
    v80 = *(_DWORD *)(v11 + 48) != 0;
  v87 = &byte_55FB88;
  if ( *(_BYTE *)(v11 + 16) != 0 )
    sub_3BE700(&v87, 32);
  v88 = &byte_55FB88;
  sub_3BE700(&v88, 32);
  v75 = 0;
  v74 = 0;
  *(_DWORD *)v89 = *(_DWORD *)(v12 + 60);
  v78 = 0;
  v77 = 0;
  v79 = 0;
  v82 = 0;
  v13 = v89[0];
  if ( v89[0] <= 4u )
    goto LABEL_10;
LABEL_6:
  v14 = 1;
LABEL_7:
  while ( (((unsigned int)(v75 + 1) >> 31) + ((unsigned int)(v75 + 1) <= 3)) << 24 != 0 )
  {
    ++v75;
LABEL_9:
    v13 = v89[v75];
    if ( v13 > 4 )
      goto LABEL_6;
LABEL_10:
    switch ( v13 )
    {
      case 0u:
        v14 = 1;
        goto LABEL_12;
      case 1u:
        if ( sub_3AE580((int)&v83, (int)&a5)
          || (v60 = sub_3AE544((int)&v83),
              (*(int (__fastcall **)(void *, int, int))(*(_DWORD *)v10 + 8))(v10, 8, v60) == 0) )
        {
          v14 = 0;
          if ( v75 != 3 )
            goto LABEL_13;
        }
        else
        {
          sub_3ADB20((int)&v83);
          v14 = 1;
LABEL_12:
          if ( v75 != 3 )
          {
LABEL_13:
            v15 = v83;
            if ( v83 != nullptr )
            {
LABEL_14:
              v16 = 0;
              if ( c == -1 )
              {
                v47 = (wchar_t *)v15[2];
                if ( (unsigned int)v47 < v15[3] )
                  v67 = *v47;
                else
                  v67 = (*(int (__fastcall **)(_DWORD *))(*v15 + 36))(v15);
                if ( v67 == -1 )
                {
                  v83 = nullptr;
                  v16 = 1;
                }
                else
                {
                  c = v67;
                  v16 = 0;
                }
              }
LABEL_15:
              v17 = a5;
              if ( a5 == nullptr )
                goto LABEL_115;
            }
            else
            {
              while ( 1 )
              {
                v17 = a5;
                v16 = 1;
                if ( a5 != nullptr )
                  break;
LABEL_115:
                v18 = 1;
LABEL_17:
                if ( v18 == v16 )
                  goto LABEL_18;
                if ( v83 != nullptr && c == -1 )
                {
                  v58 = (wchar_t *)v83[2];
                  if ( (unsigned int)v58 < v83[3] )
                    v73 = *v58;
                  else
                    v73 = (*(int (__fastcall **)(_DWORD *, int))(*v83 + 36))(v83, c + 1);
                  if ( v73 == -1 )
                    v83 = nullptr;
                  else
                    c = v73;
                }
                v16 = (*(int (__fastcall **)(void *, int))(*(_DWORD *)v10 + 8))(v10, 8);
                if ( v16 == 0 )
                  goto LABEL_18;
                v15 = v83;
                if ( v83 == nullptr )
                  goto LABEL_15;
                v45 = v83[2];
                if ( v45 < v83[3] )
                {
                  v83[2] = v45 + 4;
                }
                else
                {
                  (*(void (__fastcall **)(_DWORD *))(*v83 + 40))(v83);
                  v15 = v83;
                }
                c = -1;
                if ( v15 != nullptr )
                  goto LABEL_14;
              }
            }
            v18 = 0;
            if ( a6 == -1 )
            {
              v46 = (int *)v17[2];
              if ( (unsigned int)v46 < v17[3] )
                v68 = *v46;
              else
                v68 = (*(int (__fastcall **)(_DWORD *, int))(*v17 + 36))(v17, a6 + 1);
              if ( v68 == -1 )
              {
                a5 = nullptr;
                v18 = 1;
              }
              else
              {
                a6 = v68;
                v18 = 0;
              }
            }
            goto LABEL_17;
          }
        }
        v19 = (v78 > 1) & (unsigned __int8)v14;
        goto LABEL_73;
      case 2u:
        if ( (*(_DWORD *)(a7 + 12) & 0x200) != 0 || v78 > 1 || v75 == 0 )
          goto LABEL_97;
        if ( v75 == 1 )
        {
          if ( v80 || v89[0] == 3 || v89[2] == 1 )
            goto LABEL_97;
          v75 = 2;
        }
        else
        {
          v14 = 1;
          if ( v75 != 2 )
            continue;
          if ( v89[3] == 4 || v80 && v89[3] == 3 )
          {
LABEL_97:
            v40 = v83;
            v41 = *(_DWORD *)(v12 + 32);
            v42 = 0;
            while ( v40 != nullptr )
            {
              v57 = 0;
              if ( c != -1 )
                goto LABEL_101;
              v53 = (wchar_t *)v40[2];
              if ( (unsigned int)v53 < v40[3] )
                v71 = *v53;
              else
                v71 = (*(int (__fastcall **)(_DWORD *, int))(*v40 + 36))(v40, c + 1);
              if ( v71 == -1 )
              {
                v83 = nullptr;
                v57 = 1;
LABEL_101:
                v43 = a5;
                if ( a5 == nullptr )
                  goto LABEL_164;
                goto LABEL_102;
              }
              c = v71;
              v43 = a5;
              v57 = 0;
              if ( a5 == nullptr )
              {
LABEL_164:
                v44 = 1;
LABEL_103:
                if ( v57 == v44 )
                  goto LABEL_157;
                goto LABEL_104;
              }
LABEL_102:
              v44 = 0;
              if ( a6 != -1 )
                goto LABEL_103;
              v52 = (int *)v43[2];
              if ( (unsigned int)v52 < v43[3] )
                v69 = *v52;
              else
                v69 = (*(int (__fastcall **)(_DWORD *, int))(*v43 + 36))(v43, a6 + 1);
              if ( v69 == -1 )
              {
                a5 = nullptr;
                v44 = 1;
                goto LABEL_103;
              }
              a6 = v69;
              if ( v57 == 0 )
              {
LABEL_157:
                if ( v42 == v41 )
                {
                  v14 = 1;
                  goto LABEL_7;
                }
LABEL_166:
                if ( v42 == 0 && (*(_DWORD *)(a7 + 12) & 0x200) == 0 )
                {
LABEL_105:
                  v14 = 1;
                  goto LABEL_7;
                }
LABEL_168:
                *a8 |= 4u;
                goto LABEL_169;
              }
LABEL_104:
              if ( v42 == v41 )
                goto LABEL_105;
              if ( *(_DWORD *)(4 * v42 + *(_DWORD *)(v12 + 28)) != sub_3AE544((int)&v83) )
                goto LABEL_166;
              v40 = v83;
              if ( v83 != nullptr )
              {
                v59 = v83[2];
                if ( v59 < v83[3] )
                {
                  v83[2] = v59 + 4;
                }
                else
                {
                  (*(void (__fastcall **)(_DWORD *))(*v83 + 40))(v83);
                  v40 = v83;
                }
                c = -1;
              }
              ++v42;
            }
            v57 = 1;
            goto LABEL_101;
          }
          v75 = 3;
        }
        goto LABEL_9;
      case 3u:
        if ( *(_DWORD *)(v12 + 40) != 0 )
        {
          v61 = sub_3AE580((int)&v83, (int)&a5);
          if ( !v61 && **(_DWORD **)(v12 + 36) == sub_3AE544((int)&v83) )
          {
            v78 = *(_DWORD *)(v12 + 40);
            sub_3ADB20((int)&v83);
            goto LABEL_6;
          }
        }
        if ( *(_DWORD *)(v12 + 48) != 0 )
        {
          v62 = sub_3AE580((int)&v83, (int)&a5);
          if ( !v62 && **(_DWORD **)(v12 + 44) == sub_3AE544((int)&v83) )
          {
            v78 = *(_DWORD *)(v12 + 48);
            sub_3ADB20((int)&v83);
            v14 = 1;
            v82 = 1;
            continue;
          }
        }
        if ( *(_DWORD *)(v12 + 40) != 0 && *(_DWORD *)(v12 + 48) == 0 )
        {
          v14 = 1;
          v82 = 1;
          continue;
        }
        v14 = !v80;
        goto LABEL_18;
      case 4u:
        v20 = v83;
        while ( 2 )
        {
          if ( v20 == nullptr )
            goto LABEL_150;
          v28 = 0;
          if ( c != -1 )
            goto LABEL_34;
          v48 = (wchar_t *)v20[2];
          if ( (unsigned int)v48 < v20[3] )
            v72 = *v48;
          else
            v72 = (*(int (__fastcall **)(_DWORD *, int))(*v20 + 36))(v20, c + 1);
          if ( v72 == -1 )
          {
            v83 = nullptr;
            v28 = 1;
            goto LABEL_34;
          }
          c = v72;
          v29 = a5;
          v28 = 0;
          if ( a5 == nullptr )
            goto LABEL_134;
LABEL_35:
          v30 = 0;
          if ( a6 == -1 )
          {
            v49 = (int *)v29[2];
            if ( (unsigned int)v49 < v29[3] )
              v70 = *v49;
            else
              v70 = (*(int (__fastcall **)(_DWORD *, int))(*v29 + 36))(v29, a6 + 1);
            if ( v70 == -1 )
            {
              a5 = nullptr;
              v30 = 1;
            }
            else
            {
              a6 = v70;
              v30 = 0;
            }
          }
          if ( v30 == v28 )
          {
LABEL_135:
            v14 = 1;
            goto LABEL_136;
          }
LABEL_37:
          if ( v83 != nullptr )
          {
            v51 = c;
            if ( c == -1 )
            {
              v50 = (int *)v83[2];
              if ( (unsigned int)v50 < v83[3] )
                v51 = *v50;
              else
                v51 = (*(int (__fastcall **)(_DWORD *, int))(*v83 + 36))(v83, c + 1);
              if ( v51 == -1 )
                v83 = nullptr;
              else
                c = v51;
            }
          }
          else
          {
            v51 = -1;
          }
          v31 = j_wmemchr((const wchar_t *)(v12 + 68), v51, 0xAu);
          if ( v31 != nullptr )
          {
            v21 = off_472458[0][((int)v31 - v76) >> 2];
            v22 = v88;
            v23 = *((_DWORD *)v88 - 3);
            v24 = v23 + 1;
            if ( (unsigned int)(v23 + 1) > *((_DWORD *)v88 - 2) || *((int *)v88 - 1) > 0 )
            {
              sub_3BE700(&v88, v23 + 1);
              v22 = v88;
              v23 = *((_DWORD *)v88 - 3);
            }
            v22[v23] = v21;
            v25 = v88;
            v26 = v88 - 12;
            if ( v88 - 12 != (char *)&dword_55FB7C )
            {
              *((_DWORD *)v88 - 1) = 0;
              *(_DWORD *)v26 = v24;
              v25[v24] = 0;
            }
            ++v74;
LABEL_27:
            v20 = v83;
            if ( v83 != nullptr )
            {
              v27 = v83[2];
              if ( v27 < v83[3] )
              {
                v83[2] = v27 + 4;
              }
              else
              {
                (*(void (__fastcall **)(_DWORD *))(*v83 + 40))(v83);
                v20 = v83;
              }
              c = -1;
              continue;
            }
LABEL_150:
            v28 = 1;
LABEL_34:
            v29 = a5;
            if ( a5 != nullptr )
              goto LABEL_35;
LABEL_134:
            if ( v28 == 1 )
              goto LABEL_135;
            goto LABEL_37;
          }
          break;
        }
        if ( *(_DWORD *)(v12 + 20) != v51 || v77 != 0 )
        {
          if ( *(_BYTE *)(v12 + 16) == 0 )
          {
            v14 = 1;
            goto LABEL_136;
          }
          if ( *(_DWORD *)(v12 + 24) != v51 )
          {
            v14 = 1;
            goto LABEL_136;
          }
          if ( v77 != 0 )
            goto LABEL_135;
          if ( v74 == 0 )
          {
            v14 = 0;
            goto LABEL_136;
          }
          v32 = v87;
          v33 = *((_DWORD *)v87 - 3);
          v34 = v33 + 1;
          if ( (unsigned int)(v33 + 1) > *((_DWORD *)v87 - 2) || *((int *)v87 - 1) > 0 )
          {
            sub_3BE700(&v87, v33 + 1);
            v32 = v87;
            v33 = *((_DWORD *)v87 - 3);
          }
          v32[v33] = v74;
          v35 = v87;
          v36 = v87 - 12;
          v74 = 0;
          if ( v87 - 12 != (char *)&dword_55FB7C )
          {
            *((_DWORD *)v87 - 1) = 0;
            *(_DWORD *)v36 = v34;
            v35[v34] = 0;
          }
          goto LABEL_27;
        }
        if ( *(int *)(v12 + 52) > 0 )
        {
          v79 = v74;
          v77 = 1;
          v74 = 0;
          goto LABEL_27;
        }
        v14 = 1;
LABEL_136:
        if ( *((_DWORD *)v88 - 3) == 0 )
          goto LABEL_168;
LABEL_18:
        if ( v14 == 0 )
          goto LABEL_19;
        break;
      default:
        goto LABEL_6;
    }
  }
LABEL_19:
  v19 = (v78 > 1) & (unsigned __int8)v14;
LABEL_73:
  if ( v19 != 0 )
  {
    if ( v82 != 0 )
      v63 = *(_DWORD *)(v12 + 44);
    else
      v63 = *(_DWORD *)(v12 + 36);
    v64 = (_DWORD *)(v63 + 4);
    for ( i = 1; !sub_3AE580((int)&v83, (int)&a5) && i < v78; ++i )
    {
      if ( *v64 != sub_3AE544((int)&v83) )
        goto LABEL_168;
      sub_3ADB20((int)&v83);
      ++v64;
    }
    if ( i != v78 )
      goto LABEL_168;
  }
  else if ( v14 == 0 )
  {
    goto LABEL_168;
  }
  if ( *((_DWORD *)v88 - 3) > 1u )
  {
    v37 = sub_3BDB90(&v88, 48, 0);
    if ( v37 != 0 )
    {
      v38 = v37;
      if ( v37 == -1 )
        v38 = *((_DWORD *)v88 - 3) - 1;
      sub_3BE210(&v88, 0, v38);
    }
  }
  if ( v82 != 0 )
  {
    v39 = (int *)v88;
    if ( *((int *)v88 - 1) >= 0 )
    {
      sub_3BE0AC(&v88);
      v39 = (int *)v88;
    }
    if ( *(_BYTE *)v39 != 48 )
    {
      if ( *(v39 - 1) >= 0 )
        sub_3BE0AC(&v88);
      sub_3BE294(&v88, 0, 0, 1, 45);
      *((_DWORD *)v88 - 1) = -1;
    }
  }
  if ( *((_DWORD *)v87 - 3) != 0 )
  {
    v66 = v77 != 0 ? v79 : (unsigned __int8)v74;
    sub_3BEA50(&v87, v66);
    if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), &v87) == 0 )
      *a8 |= 4u;
  }
  if ( v77 != 0 && *(_DWORD *)(v12 + 52) != v74 )
    goto LABEL_168;
  sub_3BD870(a9, &v88);
LABEL_169:
  if ( sub_3AE580((int)&v83, (int)&a5) )
    *a8 |= 2u;
  v54 = c;
  *a1 = v83;
  a1[1] = v54;
  v55 = v88 - 12;
  if ( v88 - 12 != (char *)&dword_55FB7C && sub_3C82FC(v88 - 4, -1) <= 0 )
    sub_3BDF60(v55, v86);
  sub_3BDF68(v87 - 12, v86);
  return a1;
}

