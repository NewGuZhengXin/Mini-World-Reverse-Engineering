// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_230000

//======================================================================
// sub_230054
// address: 0x00230054   size: 0x350 (848 bytes)
//======================================================================
int __fastcall sub_230054(_DWORD *a1)
{
  int v1; // r4
  int v3; // r0
  int v4; // r1
  int v5; // r0
  _DWORD *v6; // r0
  const char *v7; // r7
  _BOOL4 v8; // r6
  _BOOL4 v9; // r0
  int v10; // r7
  bool v11; // cf
  int *v12; // r3
  int *v13; // r7
  int v14; // r1
  int v16; // r1
  int v17; // r6
  int i; // r7
  int v19; // r1
  int v20; // r1
  int j; // r6
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r1
  unsigned int v26; // r7
  unsigned int k; // r3
  int *m; // r6
  int v29; // r1
  int v30; // r5
  int v31; // r1
  int v32; // r3
  int n; // r6
  int *v34; // r3
  int ii; // r3
  int v36; // r2
  int jj; // r6
  int v38; // r1
  int kk; // r3
  int v40; // r2
  int v41; // r2
  int v42; // [sp+0h] [bp-Ch]
  int v43; // [sp+4h] [bp-8h]

  v1 = a1[9];
  v3 = *(unsigned __int8 *)(v1 + 4) - 5;
  *(_BYTE *)(v1 + 5) |= 4u;
  switch ( v3 )
  {
    case 0:
      a1[9] = *(_DWORD *)(v1 + 24);
      v4 = *(_DWORD *)(v1 + 8);
      if ( v4 != 0 && *(unsigned __int8 *)(v4 + 5) << 30 != 0 )
        sub_22FDB6((int)a1, v4);
      v5 = *(_DWORD *)(v1 + 8);
      if ( v5 != 0 && (*(_BYTE *)(v5 + 6) & 8) == 0 && (v6 = (_DWORD *)sub_2375CC()) != nullptr && v6[2] == 4 )
      {
        v7 = (const char *)(*v6 + 16);
        v8 = j_strchr(v7, 107) != nullptr;
        v9 = j_strchr(v7, 118) != nullptr;
        if ( v9 || v8 )
        {
          *(_BYTE *)(v1 + 5) = (16 * v9) | (8 * v8) | *(_BYTE *)(v1 + 5) & 0xE7;
          *(_DWORD *)(v1 + 24) = a1[11];
          a1[11] = v1;
          if ( v8 )
          {
            v8 = true;
            if ( v9 )
            {
LABEL_13:
              *(_BYTE *)(v1 + 5) &= ~4u;
              return 16 * (*(_DWORD *)(v1 + 28) + 2) + (32 << *(_BYTE *)(v1 + 7));
            }
          }
          else
          {
            v43 = 1;
            if ( v9 )
              goto LABEL_21;
          }
        }
      }
      else
      {
        v8 = false;
      }
      v10 = *(_DWORD *)(v1 + 28);
      while ( 1 )
      {
        v11 = v10-- != 0;
        if ( !v11 )
          break;
        v12 = (int *)(*(_DWORD *)(v1 + 12) + 16 * v10);
        if ( v12[2] > 3 && *(unsigned __int8 *)(*v12 + 5) << 30 != 0 )
          sub_22FDB6((int)a1, *v12);
      }
      v43 = 0;
LABEL_21:
      v42 = 1 << *(_BYTE *)(v1 + 7);
      while ( 1 )
      {
        v11 = v42-- != 0;
        if ( !v11 )
          break;
        v13 = (int *)(*(_DWORD *)(v1 + 16) + 32 * v42);
        if ( v13[2] != 0 )
        {
          if ( !v8 && v13[6] > 3 )
          {
            v14 = v13[4];
            if ( *(unsigned __int8 *)(v14 + 5) << 30 != 0 )
              sub_22FDB6((int)a1, v14);
          }
          if ( v43 == 0 && v13[2] > 3 && *(unsigned __int8 *)(*v13 + 5) << 30 != 0 )
            sub_22FDB6((int)a1, *v13);
        }
        else if ( v13[6] > 3 )
        {
          v13[6] = 11;
        }
      }
      if ( (v8 | v43) == 0 )
        return 16 * (*(_DWORD *)(v1 + 28) + 2) + (32 << *(_BYTE *)(v1 + 7));
      goto LABEL_13;
    case 1:
      a1[9] = *(_DWORD *)(v1 + 8);
      v16 = *(_DWORD *)(v1 + 12);
      if ( *(unsigned __int8 *)(v16 + 5) << 30 != 0 )
        sub_22FDB6((int)a1, v16);
      if ( *(_BYTE *)(v1 + 6) != 0 )
      {
        v17 = v1;
        for ( i = 0; i < *(unsigned __int8 *)(v1 + 7); ++i )
        {
          if ( *(int *)(v17 + 32) > 3 )
          {
            v19 = *(_DWORD *)(v17 + 24);
            if ( *(unsigned __int8 *)(v19 + 5) << 30 != 0 )
              sub_22FDB6((int)a1, v19);
          }
          v17 += 16;
        }
      }
      else
      {
        v20 = *(_DWORD *)(v1 + 16);
        if ( *(unsigned __int8 *)(v20 + 5) << 30 != 0 )
          sub_22FDB6((int)a1, v20);
        for ( j = 0; j < *(unsigned __int8 *)(v1 + 7); ++j )
        {
          v23 = *(_DWORD *)(v1 + 4 * j + 20);
          if ( *(unsigned __int8 *)(v23 + 5) << 30 != 0 )
            sub_22FDB6((int)a1, v23);
        }
      }
      v22 = *(unsigned __int8 *)(v1 + 7);
      if ( *(_BYTE *)(v1 + 6) != 0 )
        return 16 * v22 + 24;
      else
        return 4 * v22 + 20;
    case 3:
      v24 = a1[10];
      a1[9] = *(_DWORD *)(v1 + 108);
      *(_DWORD *)(v1 + 108) = v24;
      a1[10] = v1;
      *(_BYTE *)(v1 + 5) &= ~4u;
      if ( *(int *)(v1 + 80) > 3 )
      {
        v25 = *(_DWORD *)(v1 + 72);
        if ( *(unsigned __int8 *)(v25 + 5) << 30 != 0 )
          sub_22FDB6((int)a1, v25);
      }
      v26 = *(_DWORD *)(v1 + 8);
      for ( k = *(_DWORD *)(v1 + 40); k <= *(_DWORD *)(v1 + 20); k += 24 )
      {
        if ( v26 < *(_DWORD *)(k + 8) )
          v26 = *(_DWORD *)(k + 8);
      }
      for ( m = *(int **)(v1 + 32); (unsigned int)m < *(_DWORD *)(v1 + 8); m += 4 )
      {
        if ( m[2] > 3 && *(unsigned __int8 *)(*m + 5) << 30 != 0 )
          sub_22FDB6((int)a1, *m);
      }
      while ( (unsigned int)m <= v26 )
      {
        m[2] = 0;
        m += 4;
      }
      v29 = *(_DWORD *)(v1 + 48);
      v30 = *(_DWORD *)(v1 + 32);
      if ( v29 <= 20000 )
      {
        if ( -1431655764 * ((*(_DWORD *)(v1 + 20) - *(_DWORD *)(v1 + 40)) >> 3) < v29 && v29 > 16 )
          sub_22F0D4((_DWORD *)v1, v29 >> 1);
        v31 = *(_DWORD *)(v1 + 44);
        if ( 4 * ((int)(v26 - v30) >> 4) < v31 && v31 > 90 )
          sub_22F050((_DWORD *)v1, v31 >> 1);
      }
      return 16 * *(_DWORD *)(v1 + 44) + 24 * *(_DWORD *)(v1 + 48) + 120;
    case 4:
      a1[9] = *(_DWORD *)(v1 + 68);
      v32 = *(_DWORD *)(v1 + 32);
      if ( v32 != 0 )
        *(_BYTE *)(v32 + 5) &= 0xFCu;
      for ( n = 0; n < *(_DWORD *)(v1 + 40); ++n )
      {
        v34 = (int *)(*(_DWORD *)(v1 + 8) + 16 * n);
        if ( v34[2] > 3 && *(unsigned __int8 *)(*v34 + 5) << 30 != 0 )
          sub_22FDB6((int)a1, *v34);
      }
      for ( ii = 0; ii < *(_DWORD *)(v1 + 36); ++ii )
      {
        v36 = *(_DWORD *)(4 * ii + *(_DWORD *)(v1 + 28));
        if ( v36 != 0 )
          *(_BYTE *)(v36 + 5) &= 0xFCu;
      }
      for ( jj = 0; jj < *(_DWORD *)(v1 + 52); ++jj )
      {
        v38 = *(_DWORD *)(4 * jj + *(_DWORD *)(v1 + 16));
        if ( v38 != 0 && *(unsigned __int8 *)(v38 + 5) << 30 != 0 )
          sub_22FDB6((int)a1, v38);
      }
      for ( kk = 0; ; ++kk )
      {
        v40 = *(_DWORD *)(v1 + 56);
        if ( kk >= v40 )
          break;
        v41 = *(_DWORD *)(12 * kk + *(_DWORD *)(v1 + 24));
        if ( v41 != 0 )
          *(_BYTE *)(v41 + 5) &= 0xFCu;
      }
      return 4
           * (*(_DWORD *)(v1 + 44)
            + *(_DWORD *)(v1 + 52)
            + 19
            + *(_DWORD *)(v1 + 48)
            + *(_DWORD *)(v1 + 36)
            + 4 * *(_DWORD *)(v1 + 40)
            + 3 * v40);
    default:
      return 0;
  }
}


//======================================================================
// sub_2303AC
// address: 0x002303AC   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_2303AC(_DWORD *a1)
{
  int v2; // r4

  v2 = 0;
  while ( a1[9] != 0 )
    v2 += sub_230054(a1);
  return v2;
}


//======================================================================
// sub_2303C6
// address: 0x002303C6   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_2303C6(int a1, int a2)
{
  int v2; // r5
  int **v3; // r6
  int *v4; // r4
  int v5; // r0
  int *v6; // r2
  int *v7; // r3
  int v9; // [sp+0h] [bp-Ch]

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(int ***)(v2 + 112);
  v9 = 0;
  while ( 1 )
  {
    v4 = *v3;
    if ( *v3 == nullptr )
      return v9;
    if ( (*((_BYTE *)v4 + 5) & 3 | a2) == 0 || (*((_BYTE *)v4 + 5) & 8) != 0 )
    {
LABEL_7:
      v3 = (int **)v4;
    }
    else
    {
      v5 = v4[2];
      if ( v5 == 0 || (*(_BYTE *)(v5 + 6) & 4) != 0 || sub_2375CC() == 0 )
      {
        *((_BYTE *)v4 + 5) |= 8u;
        goto LABEL_7;
      }
      v9 += v4[4] + 24;
      v6 = (int *)*v4;
      *((_BYTE *)v4 + 5) |= 8u;
      *v3 = v6;
      v7 = *(int **)(v2 + 48);
      if ( v7 != nullptr )
      {
        *v4 = *v7;
        **(_DWORD **)(v2 + 48) = v4;
      }
      else
      {
        *v4 = (int)v4;
      }
      *(_DWORD *)(v2 + 48) = v4;
    }
  }
}


//======================================================================
// sub_230444
// address: 0x00230444   size: 0x218 (536 bytes)
//======================================================================
int __fastcall sub_230444(int a1)
{
  int v1; // r4
  int result; // r0
  int i; // r5
  int *v5; // r3
  int v6; // r2
  int v7; // r0
  int v8; // r5
  int v9; // r0
  int v10; // r5
  int v11; // r6
  int v12; // r7
  bool v13; // cf
  int *v14; // r7
  int *v15; // r6
  int v16; // r2
  int v17; // r1
  int v18; // r1
  int v19; // r3
  int *v20; // r1
  int v21; // r5
  int *v22; // r0
  _DWORD *v23; // r5
  int v24; // r1
  unsigned int v25; // r2
  unsigned int v26; // r7
  int v27; // r0
  unsigned int v28; // r3
  int v29; // [sp+0h] [bp-Ch]
  int v30; // [sp+0h] [bp-Ch]
  int v31; // [sp+4h] [bp-8h]

  v1 = *(_DWORD *)(a1 + 16);
  switch ( *(_BYTE *)(v1 + 21) )
  {
    case 0:
      sub_22FFFE((int *)(a1 + 16));
      goto LABEL_4;
    case 1:
      if ( *(_DWORD *)(v1 + 36) != 0 )
      {
        result = sub_230054((_DWORD *)v1);
      }
      else
      {
        for ( i = *(_DWORD *)(v1 + 140); i != v1 + 120; i = *(_DWORD *)(i + 20) )
        {
          if ( *(unsigned __int8 *)(i + 5) << 29 == 0 )
          {
            v5 = *(int **)(i + 8);
            if ( v5[2] > 3 && *(unsigned __int8 *)(*v5 + 5) << 30 != 0 )
              sub_22FDB6(v1, *v5);
          }
        }
        sub_2303AC((_DWORD *)v1);
        *(_DWORD *)(v1 + 36) = *(_DWORD *)(v1 + 44);
        *(_DWORD *)(v1 + 44) = 0;
        if ( *(unsigned __int8 *)(a1 + 5) << 30 != 0 )
          sub_22FDB6(v1, a1);
        sub_22FE3C(v1);
        sub_2303AC((_DWORD *)v1);
        v6 = *(_DWORD *)(v1 + 40);
        *(_DWORD *)(v1 + 40) = 0;
        *(_DWORD *)(v1 + 36) = v6;
        sub_2303AC((_DWORD *)v1);
        v7 = sub_2303C6(a1, 0);
        v8 = *(_DWORD *)(v1 + 48);
        v29 = v7;
        if ( v8 != 0 )
        {
          do
          {
            v8 = *(_DWORD *)v8;
            *(_BYTE *)(v8 + 5) = *(_BYTE *)(v1 + 20) & 3 | *(_BYTE *)(v8 + 5) & 0xF8;
            sub_22FDB6(v1, v8);
          }
          while ( v8 != *(_DWORD *)(v1 + 48) );
        }
        v9 = sub_2303AC((_DWORD *)v1);
        v10 = *(_DWORD *)(v1 + 44);
        v31 = v9;
        while ( v10 != 0 )
        {
          v11 = *(_DWORD *)(v10 + 28);
          if ( (*(_BYTE *)(v10 + 5) & 0x10) != 0 )
          {
            while ( 1 )
            {
              v13 = v11-- != 0;
              if ( !v13 )
                break;
              v14 = (int *)(*(_DWORD *)(v10 + 12) + 16 * v11);
              if ( sub_22FFCA(v14, 0) != 0 )
                v14[2] = 0;
            }
          }
          v12 = 1 << *(_BYTE *)(v10 + 7);
          while ( 1 )
          {
            v13 = v12-- != 0;
            if ( !v13 )
              break;
            v15 = (int *)(*(_DWORD *)(v10 + 16) + 32 * v12);
            if ( v15[2] != 0 && (sub_22FFCA(v15 + 4, 1) != 0 || sub_22FFCA(v15, 0) != 0) )
            {
              v16 = v15[6];
              v15[2] = 0;
              if ( v16 > 3 )
                v15[6] = 11;
            }
          }
          v10 = *(_DWORD *)(v10 + 24);
        }
        v17 = *(_DWORD *)(v1 + 68);
        *(_BYTE *)(v1 + 20) ^= 3u;
        *(_DWORD *)(v1 + 32) = v1 + 28;
        *(_BYTE *)(v1 + 21) = 2;
        *(_DWORD *)(v1 + 24) = 0;
        *(_DWORD *)(v1 + 72) = v17 - v29 - v31;
LABEL_4:
        result = 0;
      }
      break;
    case 2:
      v18 = *(_DWORD *)(v1 + 24);
      v19 = v18 + 1;
      v20 = (int *)(*(_DWORD *)v1 + 4 * v18);
      *(_DWORD *)(v1 + 24) = v19;
      v21 = *(_DWORD *)(v1 + 68);
      sub_22FF00(a1, v20, -3);
      if ( *(_DWORD *)(v1 + 24) >= *(_DWORD *)(v1 + 8) )
        *(_BYTE *)(v1 + 21) = 3;
      *(_DWORD *)(v1 + 72) = *(_DWORD *)(v1 + 68) + *(_DWORD *)(v1 + 72) - v21;
      result = 10;
      break;
    case 3:
      v30 = *(_DWORD *)(v1 + 68);
      v22 = sub_22FF00(a1, *(int **)(v1 + 32), 40);
      *(_DWORD *)(v1 + 32) = v22;
      if ( *v22 == 0 )
      {
        v23 = *(_DWORD **)(a1 + 16);
        v24 = v23[2];
        if ( v23[1] < (unsigned int)(v24 / 4) && v24 > 64 )
          sub_235200(a1, v24 >> 1);
        v25 = v23[15];
        if ( v25 > 0x40 )
        {
          v26 = v25 >> 1;
          v27 = sub_23237C(a1, v23[13], v25, v25 >> 1);
          v23[15] = v26;
          v23[13] = v27;
        }
        *(_BYTE *)(v1 + 21) = 4;
      }
      *(_DWORD *)(v1 + 72) = *(_DWORD *)(v1 + 68) + *(_DWORD *)(v1 + 72) - v30;
      result = 400;
      break;
    case 4:
      result = *(_DWORD *)(v1 + 48);
      if ( result != 0 )
      {
        sub_22FE64(a1);
        v28 = *(_DWORD *)(v1 + 72);
        result = 100;
        if ( v28 > 0x64 )
          *(_DWORD *)(v1 + 72) = v28 - 100;
      }
      else
      {
        *(_BYTE *)(v1 + 21) = 0;
        *(_DWORD *)(v1 + 76) = 0;
      }
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_23065C
// address: 0x0023065C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_23065C(int result)
{
  int i; // r4

  for ( i = result; *(_DWORD *)(*(_DWORD *)(i + 16) + 48) != 0; result = sub_22FE64(i) )
    ;
  return result;
}


//======================================================================
// sub_230672
// address: 0x00230672   size: 0x34 (52 bytes)
//======================================================================
int *__fastcall sub_230672(int a1)
{
  int v1; // r5
  int *result; // r0
  int i; // r4

  v1 = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(v1 + 20) = 67;
  result = sub_22FF00(a1, (int *)(v1 + 28), -3);
  for ( i = 0; i < *(_DWORD *)(v1 + 8); ++i )
    result = sub_22FF00(a1, (int *)(*(_DWORD *)v1 + 4 * i), -3);
  return result;
}


//======================================================================
// sub_2306A8
// address: 0x002306A8   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_2306A8(int a1)
{
  int v1; // r4
  int v3; // r5
  int result; // r0
  unsigned int v5; // r3
  int v6; // r2

  v1 = *(_DWORD *)(a1 + 16);
  v3 = 10 * *(_DWORD *)(v1 + 84);
  if ( v3 == 0 )
    v3 = 2147483646;
  *(_DWORD *)(v1 + 76) = *(_DWORD *)(v1 + 68) + *(_DWORD *)(v1 + 76) - *(_DWORD *)(v1 + 64);
  do
  {
    result = sub_230444(a1);
    v3 -= result;
    if ( *(_BYTE *)(v1 + 21) == 0 )
    {
      result = *(_DWORD *)(v1 + 72) / 0x64u * *(_DWORD *)(v1 + 80);
      *(_DWORD *)(v1 + 64) = result;
      return result;
    }
  }
  while ( v3 > 0 );
  v5 = *(_DWORD *)(v1 + 76);
  v6 = *(_DWORD *)(v1 + 68);
  if ( v5 > 0x3FF )
    *(_DWORD *)(v1 + 76) = v5 - 1024;
  else
    v6 += 1024;
  *(_DWORD *)(v1 + 64) = v6;
  return result;
}


//======================================================================
// sub_230710
// address: 0x00230710   size: 0x52 (82 bytes)
//======================================================================
unsigned int __fastcall sub_230710(int a1)
{
  int v1; // r4
  unsigned int result; // r0

  v1 = *(_DWORD *)(a1 + 16);
  if ( *(unsigned __int8 *)(v1 + 21) <= 1u )
  {
    *(_DWORD *)(v1 + 24) = 0;
    *(_DWORD *)(v1 + 36) = 0;
    *(_DWORD *)(v1 + 40) = 0;
    *(_DWORD *)(v1 + 44) = 0;
    *(_DWORD *)(v1 + 32) = v1 + 28;
    *(_BYTE *)(v1 + 21) = 2;
  }
  while ( *(_BYTE *)(v1 + 21) != 4 )
    sub_230444(a1);
  sub_22FFFE((int *)(a1 + 16));
  while ( *(_BYTE *)(v1 + 21) != 0 )
    sub_230444(a1);
  result = *(_DWORD *)(v1 + 72) / 0x64u * *(_DWORD *)(v1 + 80);
  *(_DWORD *)(v1 + 64) = result;
  return result;
}


//======================================================================
// sub_230762
// address: 0x00230762   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_230762(int a1, int a2, int a3)
{
  int v3; // r0
  char v6; // r1

  v3 = *(_DWORD *)(a1 + 16);
  if ( *(_BYTE *)(v3 + 21) == 1 )
    return sub_22FDB6(v3, a3);
  v6 = *(_BYTE *)(v3 + 20);
  *(_BYTE *)(a2 + 5) = v6 & 3 | *(_BYTE *)(a2 + 5) & 0xF8;
  return 7;
}


//======================================================================
// sub_230788
// address: 0x00230788   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_230788(int a1, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  *(_BYTE *)(a2 + 5) &= ~4u;
  *(_DWORD *)(a2 + 24) = *(_DWORD *)(v2 + 40);
  *(_DWORD *)(v2 + 40) = a2;
  return 4;
}


//======================================================================
// sub_23079A
// address: 0x0023079A   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_23079A(int a1, int a2, char a3)
{
  int v3; // r3
  int result; // r0

  v3 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)a2 = *(_DWORD *)(v3 + 28);
  result = *(unsigned __int8 *)(v3 + 20);
  *(_DWORD *)(v3 + 28) = a2;
  *(_BYTE *)(a2 + 5) = result & 3;
  *(_BYTE *)(a2 + 4) = a3;
  return result;
}


//======================================================================
// sub_2307AE
// address: 0x002307AE   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_2307AE(int result, int a2)
{
  int v2; // r3
  char v3; // r2
  int *v4; // r3

  v2 = *(_DWORD *)(result + 16);
  *(_DWORD *)a2 = *(_DWORD *)(v2 + 28);
  *(_DWORD *)(v2 + 28) = a2;
  v3 = *(_BYTE *)(a2 + 5);
  if ( (v3 & 7) == 0 )
  {
    if ( *(_BYTE *)(v2 + 21) == 1 )
    {
      v4 = *(int **)(a2 + 8);
      *(_BYTE *)(a2 + 5) = v3 | 4;
      if ( v4[2] > 3 && *(unsigned __int8 *)(*v4 + 5) << 30 != 0 )
        return sub_230762(result, a2, *v4);
    }
    else
    {
      result = *(unsigned __int8 *)(v2 + 20);
      *(_BYTE *)(a2 + 5) = v3 & 0xF8 | result & 3;
    }
  }
  return result;
}


//======================================================================
// sub_230824
// address: 0x00230824   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_230824(int a1, int a2, const char *a3)
{
  int v6; // r5
  __int64 v7; // r0
  char *v9; // r0

  v6 = *(_DWORD *)j___errno();
  LODWORD(v7) = a1;
  if ( a2 != 0 )
  {
    HIDWORD(v7) = 1;
    lua_pushboolean(v7);
    return 1;
  }
  else
  {
    lua_pushnil(a1);
    v9 = j_strerror(v6);
    if ( a3 != nullptr )
      lua_pushfstring(a1, (int)"%s: %s", a3, v9);
    else
      lua_pushfstring(a1, (int)"%s", v9);
    lua_pushinteger(a1, v6);
    return 3;
  }
}


//======================================================================
// sub_230884
// address: 0x00230884   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_230884(_DWORD *a1)
{
  *(_DWORD *)luaL_checkudata(a1, 1, "FILE*") = 0;
  return sub_230824((int)a1, 0, nullptr);
}


//======================================================================
// sub_2308A4
// address: 0x002308A4   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_2308A4(int a1)
{
  lua_pushnil(a1);
  lua_pushlstring(a1, (int)"cannot close standard file", 0x1Au);
  return 2;
}


//======================================================================
// sub_2308C0
// address: 0x002308C0   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_2308C0(_DWORD *a1)
{
  int v2; // r0

  v2 = luaL_checkudata(a1, 1, "FILE*");
  if ( *(_DWORD *)v2 == 0 )
    luaL_error((int)a1, (int)"attempt to use a closed file");
  return *(_DWORD *)v2;
}


//======================================================================
// sub_2308EC
// address: 0x002308EC   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_2308EC(_DWORD *a1, FILE *a2, int a3)
{
  int v3; // r4
  int v6; // r5
  int v7; // r2
  int v8; // r3
  __int64 v9; // r0
  int v10; // r0
  const void *v11; // r0
  size_t v12; // r0
  int v14; // [sp+4h] [bp-10h]
  size_t n[2]; // [sp+Ch] [bp-8h] BYREF

  v3 = a3;
  v14 = a3 - 1 + lua_gettop((int)a1);
  v6 = 1;
  while ( v3 != v14 )
  {
    if ( lua_type(a1, v3) == 3 )
    {
      if ( v6 != 0 )
      {
        v9 = lua_tonumber(a1, v3, v7, v8);
        v10 = j_fprintf(a2, "%.14g", *(double *)&v9);
        v6 = (unsigned int)((v10 >> 31) - v10) >> 31;
      }
    }
    else
    {
      v11 = (const void *)luaL_checklstring(a1, v3, n);
      if ( v6 != 0 )
      {
        v12 = j_fwrite(v11, 1u, n[0], a2);
        v6 = v12 == n[0];
      }
    }
    ++v3;
  }
  return sub_230824((int)a1, v6, nullptr);
}


//======================================================================
// sub_23096C
// address: 0x0023096C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_23096C(_DWORD *a1)
{
  FILE *v2; // r0

  v2 = (FILE *)sub_2308C0(a1);
  return sub_2308EC(a1, v2, 2);
}


//======================================================================
// sub_230980
// address: 0x00230980   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_230980(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r3
  size_t v4; // r2
  const char *v5; // r1

  luaL_checkany(a1, 1);
  v2 = (_DWORD *)lua_touserdata(a1, 1);
  lua_getfield(a1, -10000, "FILE*", v3);
  if ( v2 != nullptr && lua_getmetatable(a1, 1) != 0 && lua_rawequal(a1, -2, -1) != 0 )
  {
    if ( *v2 != 0 )
    {
      v4 = 4;
      v5 = "file";
    }
    else
    {
      v4 = 11;
      v5 = "closed file";
    }
    lua_pushlstring((int)a1, (int)v5, v4);
  }
  else
  {
    lua_pushnil((int)a1);
  }
  return 1;
}


//======================================================================
// sub_2309F8
// address: 0x002309F8   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall sub_2309F8(_DWORD *a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)lua_newuserdata(a1, 4);
  *v2 = 0;
  lua_getfield(a1, -10000, "FILE*", 0);
  lua_setmetatable(a1, -2);
  return v2;
}


//======================================================================
// sub_230A2C
// address: 0x00230A2C   size: 0x8C (140 bytes)
//======================================================================
bool __fastcall sub_230A2C(_DWORD *a1, FILE *a2)
{
  int *v3; // r5
  size_t v5; // r0
  int v7[253]; // [sp+8h] [bp-414h] BYREF

  luaL_buffinit((int)a1, v7);
  while ( 1 )
  {
    v3 = luaL_prepbuffer(v7);
    if ( j_fgets((char *)v3, 1024, a2) == nullptr )
    {
      luaL_pushresult(v7);
      return lua_objlen(a1, -1) != 0;
    }
    v5 = j_strlen((const char *)v3);
    if ( v5 != 0 && *((_BYTE *)v3 + v5 - 1) == 10 )
      break;
    v7[0] += v5;
  }
  v7[0] += v5 - 1;
  luaL_pushresult(v7);
  return true;
}


//======================================================================
// sub_230AC4
// address: 0x00230AC4   size: 0x2E (46 bytes)
//======================================================================
void __fastcall __noreturn sub_230AC4(_DWORD *a1)
{
  luaL_checklstring(a1, 1, nullptr);
  luaL_optlstring(a1, 2, (const char *)aRgb, nullptr);
  sub_2309F8(a1);
  luaL_error((int)a1, (int)"'popen' not supported");
}


//======================================================================
// sub_230B08
// address: 0x00230B08   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_230B08(_DWORD *a1)
{
  const char *v2; // r5
  const char *v3; // r7
  _DWORD *v4; // r6
  FILE *v5; // r1
  int result; // r0

  v2 = (const char *)luaL_checklstring(a1, 1, nullptr);
  v3 = (const char *)luaL_optlstring(a1, 2, (const char *)aRgb, nullptr);
  v4 = sub_2309F8(a1);
  v5 = j_fopen(v2, v3);
  *v4 = v5;
  result = 1;
  if ( v5 == nullptr )
    return sub_230824((int)a1, 0, v2);
  return result;
}


//======================================================================
// sub_230B50
// address: 0x00230B50   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_230B50(_DWORD *a1)
{
  int v2; // r3
  int (__fastcall *v3)(_DWORD *); // r0

  lua_getfenv(a1, 1);
  lua_getfield(a1, -1, "__close", v2);
  v3 = (int (__fastcall *)(_DWORD *))lua_tocfunction(a1, -1);
  return v3(a1);
}


//======================================================================
// sub_230B80
// address: 0x00230B80   size: 0x6E (110 bytes)
//======================================================================
bool __fastcall sub_230B80(_DWORD *a1)
{
  int v2; // r6
  _BOOL4 v3; // r5
  int *v4; // r0
  char *v5; // r0
  _BOOL4 result; // r0

  v2 = *(_DWORD *)lua_touserdata(a1, -10003);
  if ( v2 == 0 )
    luaL_error((int)a1, (int)"file is already closed");
  v3 = sub_230A2C(a1, (FILE *)v2);
  if ( (*(_WORD *)(v2 + 12) & 0x40) != 0 )
  {
    v4 = (int *)j___errno();
    v5 = j_strerror(*v4);
    luaL_error((int)a1, (int)"%s", v5);
  }
  result = true;
  if ( !v3 )
  {
    result = lua_toboolean(a1, -10004);
    if ( result )
    {
      lua_settop((int)a1, 0);
      lua_pushvalue(a1, -10003);
      sub_230B50(a1);
      return false;
    }
  }
  return result;
}


//======================================================================
// sub_230C00
// address: 0x00230C00   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_230C00(_DWORD *a1)
{
  if ( lua_type(a1, 1) == -1 )
    lua_rawgeti(a1, -10001, 2);
  sub_2308C0(a1);
  return sub_230B50(a1);
}


//======================================================================
// sub_230C2C
// address: 0x00230C2C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_230C2C(_DWORD *a1)
{
  if ( *(_DWORD *)luaL_checkudata(a1, 1, "FILE*") != 0 )
    sub_230B50(a1);
  return 0;
}


//======================================================================
// sub_230C50
// address: 0x00230C50   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_230C50(_DWORD *a1)
{
  FILE *v2; // r0
  int v3; // r0

  v2 = (FILE *)sub_2308C0(a1);
  v3 = j_fflush(v2);
  return sub_230824((int)a1, v3 == 0, nullptr);
}


//======================================================================
// sub_230C6C
// address: 0x00230C6C   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_230C6C(_DWORD *a1)
{
  FILE **v2; // r5
  int v3; // r0

  v2 = (FILE **)luaL_checkudata(a1, 1, "FILE*");
  v3 = j_fclose(*v2);
  *v2 = nullptr;
  return sub_230824((int)a1, v3 == 0, nullptr);
}


//======================================================================
// sub_230C98
// address: 0x00230C98   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_230C98(_DWORD *a1, int a2, int a3, const char *a4)
{
  int v7; // r3

  *sub_2309F8(a1) = a2;
  if ( a3 > 0 )
  {
    lua_pushvalue(a1, -1);
    lua_rawseti(a1, -10001, a3);
  }
  lua_pushvalue(a1, -2);
  lua_setfenv(a1, -2);
  return lua_setfield(a1, -3, a4, v7);
}


//======================================================================
// sub_230CE8
// address: 0x00230CE8   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_230CE8(_DWORD *a1)
{
  FILE *v2; // r5
  int v3; // r6
  char *v4; // r0
  int v5; // r0

  v2 = (FILE *)sub_2308C0(a1);
  v3 = luaL_checkoption(a1, 2, nullptr, (int)off_452CA8);
  v4 = luaL_optinteger(a1, 3, 1024);
  v5 = j_setvbuf(v2, nullptr, dword_4448D0[v3], (size_t)v4);
  return sub_230824((int)a1, v5 == 0, nullptr);
}


//======================================================================
// sub_230D38
// address: 0x00230D38   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_230D38(_DWORD *a1)
{
  FILE *v2; // r5
  int v3; // r6
  char *v4; // r0
  int v6; // r0

  v2 = (FILE *)sub_2308C0(a1);
  v3 = luaL_checkoption(a1, 2, "cur", (int)off_452CB8);
  v4 = luaL_optinteger(a1, 3, 0);
  if ( j_fseek(v2, (int)v4, dword_4448D0[v3 + 3]) != 0 )
    return sub_230824((int)a1, 0, nullptr);
  v6 = j_ftell(v2);
  lua_pushinteger((int)a1, v6);
  return 1;
}


//======================================================================
// sub_230DA0
// address: 0x00230DA0   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_230DA0(_DWORD *a1, int a2)
{
  int v4; // r3

  lua_createtable((int)a1, 0, 1);
  lua_pushcclosure(a1, a2, 0);
  return lua_setfield(a1, -2, "__close", v4);
}


//======================================================================
// sub_230DCC
// address: 0x00230DCC   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_230DCC(_DWORD *a1)
{
  const void *v2; // r2

  v2 = *(const void **)luaL_checkudata(a1, 1, "FILE*");
  if ( v2 != nullptr )
    lua_pushfstring((int)a1, (int)"file (%p)", v2);
  else
    lua_pushlstring((int)a1, (int)"file (closed)", 0xDu);
  return 1;
}


//======================================================================
// sub_230E08
// address: 0x00230E08   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_230E08(_DWORD *a1, int a2)
{
  int v4; // r0

  lua_rawgeti(a1, -10001, a2);
  v4 = lua_touserdata(a1, -1);
  if ( *(_DWORD *)v4 == 0 )
    luaL_error((int)a1, (int)"standard %s file is closed", off_452CA8[a2 + 7]);
  return *(_DWORD *)v4;
}


//======================================================================
// sub_230E4C
// address: 0x00230E4C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_230E4C(_DWORD *a1)
{
  FILE *v2; // r0

  v2 = (FILE *)sub_230E08(a1, 2);
  return sub_2308EC(a1, v2, 1);
}


//======================================================================
// sub_230E62
// address: 0x00230E62   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_230E62(_DWORD *a1)
{
  FILE *v2; // r0
  int v3; // r0

  v2 = (FILE *)sub_230E08(a1, 2);
  v3 = j_fflush(v2);
  return sub_230824((int)a1, v3 == 0, nullptr);
}


//======================================================================
// sub_230E7E
// address: 0x00230E7E   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_230E7E(_DWORD *a1)
{
  _DWORD *v2; // r5
  FILE *v3; // r2
  int result; // r0

  v2 = sub_2309F8(a1);
  v3 = j_tmpfile();
  *v2 = v3;
  result = 1;
  if ( v3 == nullptr )
    return sub_230824((int)a1, 0, nullptr);
  return result;
}


//======================================================================
// sub_230EA0
// address: 0x00230EA0   size: 0x82 (130 bytes)
//======================================================================
bool __fastcall sub_230EA0(_DWORD *a1, FILE *a2, size_t a3)
{
  unsigned int v5; // r6
  int *v6; // r0
  size_t v7; // r5
  size_t v8; // r0
  _BOOL4 result; // r0
  int v11[253]; // [sp+8h] [bp-414h] BYREF

  v5 = 1024;
  luaL_buffinit((int)a1, v11);
  do
  {
    v6 = luaL_prepbuffer(v11);
    v7 = v5;
    if ( v5 > a3 )
      v7 = a3;
    v8 = j_fread(v6, 1u, v7, a2);
    v5 = v8;
    a3 -= v8;
    v11[0] += v8;
  }
  while ( a3 != 0 && v8 == v7 );
  luaL_pushresult(v11);
  result = true;
  if ( a3 != 0 )
    return lua_objlen(a1, -1) != 0;
  return result;
}


//======================================================================
// sub_230F30
// address: 0x00230F30   size: 0x148 (328 bytes)
//======================================================================
int __fastcall sub_230F30(_DWORD *a1, int a2, int a3)
{
  int v5; // r0
  int v6; // r6
  _BOOL4 v7; // r0
  int v8; // r7
  int v9; // r2
  int v10; // r3
  char *v11; // r6
  _BYTE *v12; // r0
  int v13; // r3
  int v14; // r1
  int v17; // [sp+8h] [bp-14h]
  int v18; // [sp+Ch] [bp-10h]
  int v19; // [sp+10h] [bp-Ch] BYREF
  int v20; // [sp+14h] [bp-8h]

  v5 = lua_gettop((int)a1);
  v6 = v5;
  *(_WORD *)(a2 + 12) &= 0xFF9Fu;
  if ( v5 == 1 )
  {
    v7 = sub_230A2C(a1, (FILE *)a2);
    v8 = a3 + 1;
  }
  else
  {
    luaL_checkstack(a1, v5 + 19, "too many arguments");
    v8 = a3;
    v7 = true;
    v18 = a3 - 1 + v6;
    while ( v8 != v18 && v7 )
    {
      if ( lua_type(a1, v8) == 3 )
      {
        v11 = lua_tointeger(a1, v8, v9, v10);
        if ( v11 != nullptr )
        {
          v7 = sub_230EA0(a1, (FILE *)a2, (size_t)v11);
        }
        else
        {
          v17 = j_getc((FILE *)a2);
          j_ungetc(v17, (FILE *)a2);
          lua_pushlstring((int)a1, 0, 0);
          v7 = v17 != -1;
        }
      }
      else
      {
        v12 = (_BYTE *)lua_tolstring(a1, v8, nullptr);
        if ( v12 == nullptr || *v12 != 42 )
          luaL_argerror((int)a1, v8, "invalid option");
        v13 = (unsigned __int8)v12[1];
        switch ( v13 )
        {
          case 'l':
            v7 = sub_230A2C(a1, (FILE *)a2);
            break;
          case 'n':
            if ( j_fscanf((FILE *)a2, "%lf", &v19) == 1 )
            {
              lua_pushnumber((int)a1, v14, v19, v20);
              v7 = true;
            }
            else
            {
              lua_pushnil((int)a1);
              v7 = false;
            }
            break;
          case 'a':
            sub_230EA0(a1, (FILE *)a2, 0xFFFFFFFF);
            v7 = true;
            break;
          default:
            luaL_argerror((int)a1, v8, "invalid format");
        }
      }
      ++v8;
    }
  }
  if ( (*(_WORD *)(a2 + 12) & 0x40) != 0 )
    return sub_230824((int)a1, 0, nullptr);
  if ( !v7 )
  {
    lua_settop((int)a1, -2);
    lua_pushnil((int)a1);
  }
  return v8 - a3;
}


//======================================================================
// sub_231088
// address: 0x00231088   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_231088(_DWORD *a1)
{
  int v2; // r0

  v2 = sub_230E08(a1, 1);
  return sub_230F30(a1, v2, 1);
}


//======================================================================
// sub_23109E
// address: 0x0023109E   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_23109E(_DWORD *a1)
{
  int v2; // r0

  v2 = sub_2308C0(a1);
  return sub_230F30(a1, v2, 2);
}


//======================================================================
// sub_2310B4
// address: 0x002310B4   size: 0x34 (52 bytes)
//======================================================================
void __fastcall __noreturn sub_2310B4(_DWORD *a1, const char *a2)
{
  int *v4; // r0
  char *v5; // r0
  const char *v6; // r0

  v4 = (int *)j___errno();
  v5 = j_strerror(*v4);
  lua_pushfstring((int)a1, (int)"%s: %s", a2, v5);
  v6 = (const char *)lua_tolstring(a1, -1, nullptr);
  luaL_argerror((int)a1, 1, v6);
}


//======================================================================
// sub_2310F0
// address: 0x002310F0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_2310F0(_DWORD *a1, int a2, const char *a3)
{
  const char *v5; // r5
  _DWORD *v6; // r7
  FILE *v7; // r0

  if ( lua_type(a1, 1) > 0 )
  {
    v5 = (const char *)lua_tolstring(a1, 1, nullptr);
    if ( v5 != nullptr )
    {
      v6 = sub_2309F8(a1);
      v7 = j_fopen(v5, a3);
      *v6 = v7;
      if ( v7 == nullptr )
        sub_2310B4(a1, v5);
    }
    else
    {
      sub_2308C0(a1);
      lua_pushvalue(a1, 1);
    }
    lua_rawseti(a1, -10001, a2);
  }
  lua_rawgeti(a1, -10001, a2);
  return 1;
}


//======================================================================
// sub_23115C
// address: 0x0023115C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_23115C(_DWORD *a1)
{
  return sub_2310F0(a1, 2, "w");
}


//======================================================================
// sub_231170
// address: 0x00231170   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_231170(_DWORD *a1)
{
  return sub_2310F0(a1, 1, (const char *)aRgb);
}


//======================================================================
// sub_231184
// address: 0x00231184   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_231184(_DWORD *a1)
{
  sub_2308C0(a1);
  lua_pushvalue(a1, 1);
  lua_pushboolean((unsigned int)a1);
  lua_pushcclosure(a1, (int)sub_230B80, 2);
  return 1;
}


//======================================================================
// sub_2311B0
// address: 0x002311B0   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_2311B0(int a1)
{
  const char *v3; // r5
  _DWORD *v4; // r6
  FILE *v5; // r0
  int v6; // r0

  if ( lua_type((_DWORD *)a1, 1) > 0 )
  {
    v3 = (const char *)luaL_checklstring((_DWORD *)a1, 1, nullptr);
    v4 = sub_2309F8((_DWORD *)a1);
    v5 = j_fopen(v3, (const char *)aRgb);
    *v4 = v5;
    if ( v5 == nullptr )
      sub_2310B4((_DWORD *)a1, v3);
    v6 = lua_gettop(a1);
    lua_pushvalue((_DWORD *)a1, v6);
    lua_pushboolean((unsigned int)a1 | 0x100000000LL);
    lua_pushcclosure((_DWORD *)a1, (int)sub_230B80, 2);
    return 1;
  }
  else
  {
    lua_rawgeti((_DWORD *)a1, -10001, 1);
    return sub_231184((_DWORD *)a1);
  }
}


//======================================================================
// sub_23132C
// address: 0x0023132C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_23132C(int *a1, int a2, char a3)
{
  int v3; // r3
  int result; // r0

  v3 = a1[1];
  result = *a1;
  while ( v3-- != 0 )
  {
    if ( *(unsigned __int8 *)(result + v3) == a2 )
      *(_BYTE *)(result + v3) = a3;
  }
  return result;
}


//======================================================================
// sub_231344
// address: 0x00231344   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_231344(int a1)
{
  int i; // r4
  size_t v3; // r0
  int result; // r0
  char v5; // r2

  for ( i = 1; i != 22; ++i )
  {
    v3 = j_strlen(off_452D80[i - 1]);
    result = sub_235280(a1, (int)off_452D80[i - 1], v3);
    v5 = *(_BYTE *)(result + 5);
    *(_BYTE *)(result + 6) = i;
    *(_BYTE *)(result + 5) = v5 | 0x20;
  }
  return result;
}


//======================================================================
// sub_23137C
// address: 0x0023137C   size: 0x44 (68 bytes)
//======================================================================
char *__fastcall sub_23137C(int a1, int a2)
{
  int v2; // r0

  if ( a2 > 256 )
    return off_452D80[a2 - 257];
  v2 = *(_DWORD *)(a1 + 52);
  if ( a2 == -1 || (*(_BYTE *)(ctype_ + (unsigned __int8)a2 + 1) & 0x20) == 0 )
    return (char *)sub_23309C(v2, "%c");
  else
    return (char *)sub_23309C(v2, "char(%d)");
}


//======================================================================
// sub_2313D0
// address: 0x002313D0   size: 0x80 (128 bytes)
//======================================================================
void __fastcall __noreturn sub_2313D0(int a1, const char *a2, int a3)
{
  const char *v5; // r7
  char *v6; // r3
  int v8; // [sp+Ch] [bp-8h]
  char v9[80]; // [sp+14h] [bp+0h] BYREF

  sub_2330B4((int)v9, (char *)(*(_DWORD *)(a1 + 64) + 16));
  v5 = (const char *)sub_23309C(*(_DWORD *)(a1 + 52), "%s:%d: %s", v9, *(_DWORD *)(a1 + 4), a2);
  if ( a3 != 0 )
  {
    v8 = *(_DWORD *)(a1 + 52);
    if ( (unsigned int)(a3 - 284) > 2 )
    {
      v6 = sub_23137C(a1, a3);
    }
    else
    {
      sub_231460(a1, 0);
      v6 = **(char ***)(a1 + 60);
    }
    sub_23309C(v8, "%s near '%s'", v5, v6);
  }
  sub_22F13C(*(_DWORD *)(a1 + 52), 3);
}


//======================================================================
// sub_231460
// address: 0x00231460   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_231460(int result, char a2)
{
  int *v2; // r4
  unsigned int v4; // r3
  int v5; // r2
  int v6; // r0
  int v7; // r5
  int v8; // r3
  int v9; // r2

  v2 = *(int **)(result + 60);
  v4 = v2[2];
  if ( v2[1] + 1 > v4 )
  {
    if ( v4 > 0x7FFFFFFD )
      sub_2313D0(result, "lexical element too long", 0);
    v5 = v2[2];
    v6 = *(_DWORD *)(result + 52);
    v7 = 2 * v5;
    if ( (unsigned int)(2 * v5 + 1) > 0xFFFFFFFD )
      sub_232368(v6);
    result = sub_23237C(v6, *v2, v5, 2 * v5);
    *v2 = result;
    v2[2] = v7;
  }
  v8 = v2[1];
  v9 = *v2;
  v2[1] = v8 + 1;
  *(_BYTE *)(v9 + v8) = a2;
  return result;
}


//======================================================================
// sub_2314B4
// address: 0x002314B4   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_2314B4(int *a1)
{
  int v1; // r6
  _DWORD *v3; // r2
  int v4; // r3
  int v5; // r0
  unsigned __int8 *v6; // r3
  int v7; // r0
  int v8; // r5
  _DWORD *v9; // r2
  int v10; // r3
  int v11; // r0
  unsigned __int8 *v12; // r3
  int v13; // r0

  v1 = *a1;
  sub_231460((int)a1, *a1);
  v3 = (_DWORD *)a1[14];
  v4 = (*v3)--;
  v5 = a1[14];
  if ( v4 != 0 )
  {
    v6 = *(unsigned __int8 **)(v5 + 4);
    *(_DWORD *)(v5 + 4) = v6 + 1;
    v7 = *v6;
  }
  else
  {
    v7 = sub_238DB8(v5);
  }
  *a1 = v7;
  v8 = 0;
  while ( *a1 == 61 )
  {
    sub_231460((int)a1, 61);
    v9 = (_DWORD *)a1[14];
    v10 = (*v9)--;
    v11 = a1[14];
    if ( v10 != 0 )
    {
      v12 = *(unsigned __int8 **)(v11 + 4);
      *(_DWORD *)(v11 + 4) = v12 + 1;
      v13 = *v12;
    }
    else
    {
      v13 = sub_238DB8(v11);
    }
    *a1 = v13;
    ++v8;
  }
  if ( *a1 == v1 )
    return v8;
  else
    return ~v8;
}


//======================================================================
// sub_23151A
// address: 0x0023151A   size: 0x3C (60 bytes)
//======================================================================
char *__fastcall sub_23151A(int *a1, char *a2)
{
  int v2; // r5
  char *result; // r0
  _DWORD *v5; // r2
  int v6; // r3
  int v7; // r0
  unsigned __int8 *v8; // r3
  int v9; // r0

  v2 = *a1;
  result = j_strchr(a2, *a1);
  if ( result != nullptr )
  {
    sub_231460((int)a1, v2);
    v5 = (_DWORD *)a1[14];
    v6 = (*v5)--;
    v7 = a1[14];
    if ( v6 != 0 )
    {
      v8 = *(unsigned __int8 **)(v7 + 4);
      *(_DWORD *)(v7 + 4) = v8 + 1;
      v9 = *v8;
    }
    else
    {
      v9 = sub_238DB8(v7);
    }
    *a1 = v9;
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// sub_231558
// address: 0x00231558   size: 0xF0 (240 bytes)
//======================================================================
int __fastcall sub_231558(int a1, int a2)
{
  _DWORD *v4; // r2
  int v5; // r3
  int v6; // r0
  unsigned __int8 *v7; // r3
  int v8; // r0
  _DWORD *v9; // r2
  int v10; // r3
  int v11; // r0
  unsigned __int8 *v12; // r3
  int v13; // r0
  int v14; // r1
  _BYTE *v15; // r5
  int result; // r0
  int v17; // r1

  do
  {
    sub_231460(a1, *(_DWORD *)a1);
    v4 = *(_DWORD **)(a1 + 56);
    v5 = (*v4)--;
    v6 = *(_DWORD *)(a1 + 56);
    if ( v5 != 0 )
    {
      v7 = *(unsigned __int8 **)(v6 + 4);
      *(_DWORD *)(v6 + 4) = v7 + 1;
      v8 = *v7;
    }
    else
    {
      v8 = sub_238DB8(v6);
    }
    *(_DWORD *)a1 = v8;
  }
  while ( (unsigned int)(v8 - 48) <= 9 || v8 == 46 );
  if ( sub_23151A((int *)a1, "Ee") != nullptr )
    sub_23151A((int *)a1, "+-");
  while ( 1 )
  {
    v14 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 == -1
      || *(unsigned __int8 *)(ctype_ + (unsigned __int8)*(_DWORD *)a1 + 1) << 29 == 0 && v14 != 95 )
    {
      break;
    }
    sub_231460(a1, v14);
    v9 = *(_DWORD **)(a1 + 56);
    v10 = (*v9)--;
    v11 = *(_DWORD *)(a1 + 56);
    if ( v10 != 0 )
    {
      v12 = *(unsigned __int8 **)(v11 + 4);
      *(_DWORD *)(v11 + 4) = v12 + 1;
      v13 = *v12;
    }
    else
    {
      v13 = sub_238DB8(v11);
    }
    *(_DWORD *)a1 = v13;
  }
  v15 = (_BYTE *)(a1 + 68);
  sub_231460(a1, 0);
  sub_23132C(*(int **)(a1 + 60), 46, *(_BYTE *)(a1 + 68));
  result = sub_232EA8(**(_DWORD **)(a1 + 60), a2);
  if ( result == 0 )
  {
    v17 = (unsigned __int8)*v15;
    *v15 = 46;
    sub_23132C(*(int **)(a1 + 60), v17, 46);
    result = sub_232EA8(**(_DWORD **)(a1 + 60), a2);
    if ( result == 0 )
    {
      sub_23132C(*(int **)(a1 + 60), (unsigned __int8)*v15, 46);
      sub_2313D0(a1, "malformed number", 284);
    }
  }
  return result;
}


//======================================================================
// sub_231658
// address: 0x00231658   size: 0xA (10 bytes)
//======================================================================
void __fastcall __noreturn sub_231658(int a1, const char *a2)
{
  sub_2313D0(a1, a2, *(_DWORD *)(a1 + 16));
}


//======================================================================
// sub_231664
// address: 0x00231664   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_231664(int *a1)
{
  _DWORD *v1; // r2
  int v2; // r5
  int v4; // r3
  int v5; // r0
  unsigned __int8 *v6; // r3
  int result; // r0
  _DWORD *v8; // r2
  int v9; // r3
  int v10; // r0
  unsigned __int8 *v11; // r3
  int v12; // r3

  v1 = (_DWORD *)a1[14];
  v2 = *a1;
  v4 = (*v1)--;
  v5 = a1[14];
  if ( v4 != 0 )
  {
    v6 = *(unsigned __int8 **)(v5 + 4);
    *(_DWORD *)(v5 + 4) = v6 + 1;
    result = *v6;
  }
  else
  {
    result = sub_238DB8(v5);
  }
  *a1 = result;
  if ( (result == 10 || result == 13) && result != v2 )
  {
    v8 = (_DWORD *)a1[14];
    v9 = (*v8)--;
    v10 = a1[14];
    if ( v9 != 0 )
    {
      v11 = *(unsigned __int8 **)(v10 + 4);
      *(_DWORD *)(v10 + 4) = v11 + 1;
      result = *v11;
    }
    else
    {
      result = sub_238DB8(v10);
    }
    *a1 = result;
  }
  v12 = a1[1] + 1;
  a1[1] = v12;
  if ( v12 > 2147483644 )
    sub_231658((int)a1, "chunk has too many lines");
  return result;
}


//======================================================================
// sub_2316D4
// address: 0x002316D4   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_2316D4(int a1, int a2, size_t a3)
{
  int v3; // r4
  int v5; // r5
  _DWORD *v6; // r0

  v3 = *(_DWORD *)(a1 + 52);
  v5 = sub_235280(v3, a2, a3);
  v6 = (_DWORD *)sub_236E64(v3, *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4), v5);
  if ( v6[2] == 0 )
  {
    *v6 = 1;
    v6[2] = 1;
    if ( *(_DWORD *)(*(_DWORD *)(v3 + 16) + 68) >= *(_DWORD *)(*(_DWORD *)(v3 + 16) + 64) )
      sub_2306A8(v3);
  }
  return v5;
}


//======================================================================
// sub_231710
// address: 0x00231710   size: 0x146 (326 bytes)
//======================================================================
int __fastcall sub_231710(int *a1, int *a2, int a3)
{
  _DWORD *v6; // r2
  int v7; // r3
  int v8; // r0
  unsigned __int8 *v9; // r3
  int v10; // r0
  int v11; // r1
  const char *v12; // r1
  int v13; // r0
  int v14; // r2
  _DWORD *v15; // r2
  int v16; // r3
  int v17; // r0
  unsigned __int8 *v18; // r3
  int v19; // r0
  int v20; // r7
  _DWORD *v21; // r2
  int v22; // r3
  int v23; // r0
  unsigned __int8 *v24; // r3
  int result; // r0
  _DWORD *v26; // r2
  int v27; // r3
  int v28; // r0
  unsigned __int8 *v29; // r3
  int v30; // r0

  sub_231460((int)a1, *a1);
  v6 = (_DWORD *)a1[14];
  v7 = (*v6)--;
  v8 = a1[14];
  if ( v7 != 0 )
  {
    v9 = *(unsigned __int8 **)(v8 + 4);
    *(_DWORD *)(v8 + 4) = v9 + 1;
    v10 = *v9;
  }
  else
  {
    v10 = sub_238DB8(v8);
  }
  *a1 = v10;
  if ( v10 == 10 || v10 == 13 )
    sub_231664(a1);
  do
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = *a1;
        if ( *a1 == 13 )
          goto LABEL_32;
        if ( *a1 > 13 )
          break;
        if ( v11 == -1 )
        {
          if ( a2 != nullptr )
            v12 = "unfinished long string";
          else
            v12 = "unfinished long comment";
          v13 = (int)a1;
          v14 = 287;
LABEL_25:
          sub_2313D0(v13, v12, v14);
        }
        if ( v11 == 10 )
        {
LABEL_32:
          sub_231460((int)a1, 10);
          sub_231664(a1);
          if ( a2 == nullptr )
            *(_DWORD *)(a1[15] + 4) = 0;
        }
        else
        {
LABEL_34:
          if ( a2 != nullptr )
            sub_231460((int)a1, v11);
          v26 = (_DWORD *)a1[14];
          v27 = (*v26)--;
          v28 = a1[14];
          if ( v27 != 0 )
          {
            v29 = *(unsigned __int8 **)(v28 + 4);
            *(_DWORD *)(v28 + 4) = v29 + 1;
            v30 = *v29;
          }
          else
          {
            v30 = sub_238DB8(v28);
          }
          *a1 = v30;
        }
      }
      if ( v11 != 91 )
        break;
      if ( sub_2314B4(a1) == a3 )
      {
        sub_231460((int)a1, *a1);
        v15 = (_DWORD *)a1[14];
        v16 = (*v15)--;
        v17 = a1[14];
        if ( v16 != 0 )
        {
          v18 = *(unsigned __int8 **)(v17 + 4);
          *(_DWORD *)(v17 + 4) = v18 + 1;
          v19 = *v18;
        }
        else
        {
          v19 = sub_238DB8(v17);
        }
        *a1 = v19;
        if ( a3 == 0 )
        {
          v13 = (int)a1;
          v14 = 91;
          v12 = "nesting of [[...]] is deprecated";
          goto LABEL_25;
        }
      }
    }
    if ( v11 != 93 )
      goto LABEL_34;
    v20 = sub_2314B4(a1);
  }
  while ( v20 != a3 );
  sub_231460((int)a1, *a1);
  v21 = (_DWORD *)a1[14];
  v22 = (*v21)--;
  v23 = a1[14];
  if ( v22 != 0 )
  {
    v24 = *(unsigned __int8 **)(v23 + 4);
    *(_DWORD *)(v23 + 4) = v24 + 1;
    result = *v24;
  }
  else
  {
    result = sub_238DB8(v23);
  }
  *a1 = result;
  if ( a2 != nullptr )
  {
    result = sub_2316D4((int)a1, *(_DWORD *)a1[15] + v20 + 2, 2 * (-2 - v20) + *(_DWORD *)(a1[15] + 4));
    *a2 = result;
  }
  return result;
}


//======================================================================
// sub_231864
// address: 0x00231864   size: 0x500 (1280 bytes)
//======================================================================
int __fastcall sub_231864(int a1, int *a2)
{
  int v4; // r5
  _DWORD *v5; // r2
  int v6; // r3
  int v7; // r0
  unsigned __int8 *v8; // r3
  int v9; // r0
  _DWORD *v10; // r2
  int v11; // r3
  int v12; // r0
  unsigned __int8 *v13; // r3
  int v14; // r0
  int v15; // r2
  _DWORD *v16; // r2
  int v17; // r3
  int v18; // r0
  unsigned __int8 *v19; // r3
  int v20; // r0
  int v21; // r3
  int v22; // r0
  _DWORD *v23; // r2
  int v24; // r3
  int v25; // r0
  unsigned __int8 *v26; // r3
  int v27; // r0
  _DWORD *v28; // r2
  int v29; // r3
  int v30; // r0
  unsigned __int8 *v31; // r3
  int v32; // r0
  int v33; // r5
  _DWORD *v34; // r2
  int v35; // r3
  int v36; // r0
  unsigned __int8 *v37; // r3
  int v38; // r0
  _DWORD *v39; // r2
  int v40; // r3
  int v41; // r0
  unsigned __int8 *v42; // r3
  int v43; // r0
  _DWORD *v44; // r2
  int v45; // r3
  int v46; // r0
  unsigned __int8 *v47; // r3
  int v48; // r0
  _DWORD *v49; // r2
  int v50; // r3
  int v51; // r0
  unsigned __int8 *v52; // r3
  int v53; // r0
  _DWORD *v54; // r2
  int v55; // r3
  int v56; // r0
  unsigned __int8 *v57; // r3
  int v58; // r0
  _DWORD *v59; // r2
  int v60; // r3
  int v61; // r0
  unsigned __int8 *v62; // r3
  int v63; // r0
  int v64; // r0
  int v65; // r1
  _DWORD *v66; // r2
  int v67; // r3
  int v68; // r0
  unsigned __int8 *v69; // r3
  int v70; // r0
  int v71; // r0
  int v72; // r2
  _DWORD *v73; // r2
  int v74; // r3
  int v75; // r0
  unsigned __int8 *v76; // r3
  int v77; // r3
  unsigned int v78; // r7
  _DWORD *v79; // r2
  int v80; // r3
  int v81; // r0
  unsigned __int8 *v82; // r3
  int v83; // r0
  _DWORD *v84; // r2
  int v85; // r3
  int v86; // r0
  unsigned __int8 *v87; // r3
  int v88; // r0
  _DWORD *v89; // r3
  _DWORD *v90; // r2
  int v91; // r3
  int v92; // r0
  unsigned __int8 *v93; // r3
  int v94; // r0
  int v95; // r2
  _DWORD *v96; // r2
  int v97; // r3
  int v98; // r0
  unsigned __int8 *v99; // r3
  int v100; // r0
  _DWORD *v101; // r2
  int v102; // r3
  int v103; // r0
  unsigned __int8 *v104; // r3
  int v105; // r0
  int v106; // r0
  _DWORD *v107; // r2
  int v108; // r3
  int v109; // r0
  unsigned __int8 *v110; // r3
  int v111; // r0
  int v112; // r5
  int v114; // [sp+4h] [bp-8h]

  *(_DWORD *)(*(_DWORD *)(a1 + 60) + 4) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      v4 = *(_DWORD *)a1;
      if ( *(_DWORD *)a1 != 45 )
        break;
      v5 = *(_DWORD **)(a1 + 56);
      v6 = (*v5)--;
      v7 = *(_DWORD *)(a1 + 56);
      if ( v6 != 0 )
      {
        v8 = *(unsigned __int8 **)(v7 + 4);
        *(_DWORD *)(v7 + 4) = v8 + 1;
        v9 = *v8;
      }
      else
      {
        v9 = sub_238DB8(v7);
      }
      *(_DWORD *)a1 = v9;
      if ( v9 != 45 )
        return v4;
      v10 = *(_DWORD **)(a1 + 56);
      v11 = (*v10)--;
      v12 = *(_DWORD *)(a1 + 56);
      if ( v11 != 0 )
      {
        v13 = *(unsigned __int8 **)(v12 + 4);
        *(_DWORD *)(v12 + 4) = v13 + 1;
        v14 = *v13;
      }
      else
      {
        v14 = sub_238DB8(v12);
      }
      *(_DWORD *)a1 = v14;
      if ( v14 == 91 && (v15 = sub_2314B4((int *)a1), *(_DWORD *)(*(_DWORD *)(a1 + 60) + 4) = 0, v15 >= 0) )
      {
        sub_231710((int *)a1, nullptr, v15);
        *(_DWORD *)(*(_DWORD *)(a1 + 60) + 4) = 0;
      }
      else
      {
        while ( 1 )
        {
          v21 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 == 10 || v21 == 13 || v21 == -1 )
            break;
          v16 = *(_DWORD **)(a1 + 56);
          v17 = (*v16)--;
          v18 = *(_DWORD *)(a1 + 56);
          if ( v17 != 0 )
          {
            v19 = *(unsigned __int8 **)(v18 + 4);
            *(_DWORD *)(v18 + 4) = v19 + 1;
            v20 = *v19;
          }
          else
          {
            v20 = sub_238DB8(v18);
          }
          *(_DWORD *)a1 = v20;
        }
      }
    }
    if ( *(int *)a1 > 45 )
      break;
    if ( v4 == 13 )
      goto LABEL_23;
    if ( v4 > 13 )
    {
      if ( v4 == 34 || v4 == 39 )
      {
        v64 = a1;
        v65 = *(_DWORD *)a1;
LABEL_80:
        sub_231460(v64, v65);
        v66 = *(_DWORD **)(a1 + 56);
        v67 = (*v66)--;
        v68 = *(_DWORD *)(a1 + 56);
        if ( v67 != 0 )
        {
          v69 = *(unsigned __int8 **)(v68 + 4);
          *(_DWORD *)(v68 + 4) = v69 + 1;
          v70 = *v69;
        }
        else
        {
          v70 = sub_238DB8(v68);
        }
        *(_DWORD *)a1 = v70;
        while ( 1 )
        {
          v65 = *(_DWORD *)a1;
          if ( *(_DWORD *)a1 == v4 )
          {
            sub_231460(a1, v4);
            v84 = *(_DWORD **)(a1 + 56);
            v85 = (*v84)--;
            v86 = *(_DWORD *)(a1 + 56);
            if ( v85 != 0 )
            {
              v87 = *(unsigned __int8 **)(v86 + 4);
              *(_DWORD *)(v86 + 4) = v87 + 1;
              v88 = *v87;
            }
            else
            {
              v88 = sub_238DB8(v86);
            }
            v89 = *(_DWORD **)(a1 + 60);
            *(_DWORD *)a1 = v88;
            *a2 = sub_2316D4(a1, *v89 + 1, v89[1] - 2);
LABEL_137:
            v33 = 143;
            return 2 * v33;
          }
          if ( v65 == 10 )
            goto LABEL_93;
          if ( v65 <= 10 )
          {
            if ( v65 != -1 )
              goto LABEL_132;
            v71 = a1;
            v72 = 287;
LABEL_94:
            sub_2313D0(v71, "unfinished string", v72);
          }
          if ( v65 == 13 )
          {
LABEL_93:
            v71 = a1;
            v72 = 286;
            goto LABEL_94;
          }
          if ( v65 != 92 )
            goto LABEL_132;
          v73 = *(_DWORD **)(a1 + 56);
          v74 = (*v73)--;
          v75 = *(_DWORD *)(a1 + 56);
          if ( v74 != 0 )
          {
            v76 = *(unsigned __int8 **)(v75 + 4);
            *(_DWORD *)(v75 + 4) = v76 + 1;
            v77 = *v76;
          }
          else
          {
            v77 = sub_238DB8(v75);
          }
          *(_DWORD *)a1 = v77;
          if ( v77 == 98 )
          {
            LOBYTE(v65) = 8;
LABEL_132:
            v64 = a1;
            goto LABEL_80;
          }
          if ( v77 > 98 )
          {
            if ( v77 == 114 )
            {
              LOBYTE(v65) = 13;
              goto LABEL_132;
            }
            if ( v77 > 114 )
            {
              if ( v77 == 116 )
              {
                LOBYTE(v65) = 9;
                goto LABEL_132;
              }
              LOBYTE(v65) = 11;
              if ( v77 == 118 )
                goto LABEL_132;
            }
            else
            {
              if ( v77 == 102 )
              {
                LOBYTE(v65) = 12;
                goto LABEL_132;
              }
              LOBYTE(v65) = 10;
              if ( v77 == 110 )
                goto LABEL_132;
            }
          }
          else
          {
            if ( v77 == 10 )
              goto LABEL_118;
            if ( v77 > 10 )
            {
              if ( v77 == 13 )
              {
LABEL_118:
                sub_231460(a1, 10);
                sub_231664((int *)a1);
                continue;
              }
              LOBYTE(v65) = 7;
              if ( v77 == 97 )
                goto LABEL_132;
            }
            else if ( v77 == -1 )
            {
              continue;
            }
          }
          if ( (unsigned int)(v77 - 48) > 9 )
          {
            v64 = a1;
            LOBYTE(v65) = v77;
            goto LABEL_80;
          }
          v114 = 3;
          v78 = 0;
          do
          {
            v79 = *(_DWORD **)(a1 + 56);
            v78 = 10 * v78 + *(_DWORD *)a1 - 48;
            v80 = (*v79)--;
            v81 = *(_DWORD *)(a1 + 56);
            if ( v80 != 0 )
            {
              v82 = *(unsigned __int8 **)(v81 + 4);
              *(_DWORD *)(v81 + 4) = v82 + 1;
              v83 = *v82;
            }
            else
            {
              v83 = sub_238DB8(v81);
            }
            *(_DWORD *)a1 = v83;
            --v114;
          }
          while ( v114 != 0 && (unsigned int)(v83 - 48) <= 9 );
          if ( v78 > 0xFF )
            sub_2313D0(a1, "escape sequence too large", 286);
          sub_231460(a1, v78);
        }
      }
LABEL_145:
      if ( v4 == -1 )
        goto LABEL_164;
      v95 = ctype_ + (unsigned __int8)*(_DWORD *)a1;
      if ( (*(_BYTE *)(v95 + 1) & 8) == 0 )
      {
        if ( (unsigned int)(v4 - 48) > 9 )
        {
          if ( *(unsigned __int8 *)(v95 + 1) << 30 == 0 && v4 != 95 )
          {
LABEL_164:
            v107 = *(_DWORD **)(a1 + 56);
            v108 = (*v107)--;
            v109 = *(_DWORD *)(a1 + 56);
            if ( v108 != 0 )
            {
              v110 = *(unsigned __int8 **)(v109 + 4);
              *(_DWORD *)(v109 + 4) = v110 + 1;
              v111 = *v110;
            }
            else
            {
              v111 = sub_238DB8(v109);
            }
            *(_DWORD *)a1 = v111;
            return v4;
          }
          do
          {
            sub_231460(a1, *(_DWORD *)a1);
            v101 = *(_DWORD **)(a1 + 56);
            v102 = (*v101)--;
            v103 = *(_DWORD *)(a1 + 56);
            if ( v102 != 0 )
            {
              v104 = *(unsigned __int8 **)(v103 + 4);
              *(_DWORD *)(v103 + 4) = v104 + 1;
              v105 = *v104;
            }
            else
            {
              v105 = sub_238DB8(v103);
            }
            *(_DWORD *)a1 = v105;
          }
          while ( v105 != -1 && (*(unsigned __int8 *)(ctype_ + (unsigned __int8)v105 + 1) << 29 != 0 || v105 == 95) );
          v106 = sub_2316D4(a1, **(_DWORD **)(a1 + 60), *(_DWORD *)(*(_DWORD *)(a1 + 60) + 4));
          if ( *(_BYTE *)(v106 + 6) != 0 )
          {
            v112 = *(unsigned __int8 *)(v106 + 6) + 1;
          }
          else
          {
            *a2 = v106;
            v112 = 30;
          }
          return v112 + 255;
        }
LABEL_144:
        sub_231558(a1, (int)a2);
        v33 = 142;
        return 2 * v33;
      }
      v96 = *(_DWORD **)(a1 + 56);
      v97 = (*v96)--;
      v98 = *(_DWORD *)(a1 + 56);
      if ( v97 != 0 )
      {
        v99 = *(unsigned __int8 **)(v98 + 4);
        *(_DWORD *)(v98 + 4) = v99 + 1;
        v100 = *v99;
      }
      else
      {
        v100 = sub_238DB8(v98);
      }
      *(_DWORD *)a1 = v100;
    }
    else
    {
      if ( v4 == -1 )
      {
        v112 = 32;
        return v112 + 255;
      }
      if ( v4 != 10 )
        goto LABEL_145;
LABEL_23:
      sub_231664((int *)a1);
    }
  }
  if ( v4 != 61 )
  {
    if ( v4 > 61 )
    {
      switch ( v4 )
      {
        case '[':
          v22 = sub_2314B4((int *)a1);
          if ( v22 >= 0 )
          {
            sub_231710((int *)a1, a2, v22);
            goto LABEL_137;
          }
          if ( v22 != -1 )
            sub_2313D0(a1, "invalid long string delimiter", 286);
          return v4;
        case '~':
          v54 = *(_DWORD **)(a1 + 56);
          v55 = (*v54)--;
          v56 = *(_DWORD *)(a1 + 56);
          if ( v55 != 0 )
          {
            v57 = *(unsigned __int8 **)(v56 + 4);
            *(_DWORD *)(v56 + 4) = v57 + 1;
            v58 = *v57;
          }
          else
          {
            v58 = sub_238DB8(v56);
          }
          *(_DWORD *)a1 = v58;
          if ( v58 != 61 )
            return v4;
          v59 = *(_DWORD **)(a1 + 56);
          v60 = (*v59)--;
          v61 = *(_DWORD *)(a1 + 56);
          if ( v60 != 0 )
          {
            v62 = *(unsigned __int8 **)(v61 + 4);
            *(_DWORD *)(v61 + 4) = v62 + 1;
            v63 = *v62;
          }
          else
          {
            v63 = sub_238DB8(v61);
          }
          *(_DWORD *)a1 = v63;
          v112 = 28;
          return v112 + 255;
        case '>':
          v44 = *(_DWORD **)(a1 + 56);
          v45 = (*v44)--;
          v46 = *(_DWORD *)(a1 + 56);
          if ( v45 != 0 )
          {
            v47 = *(unsigned __int8 **)(v46 + 4);
            *(_DWORD *)(v46 + 4) = v47 + 1;
            v48 = *v47;
          }
          else
          {
            v48 = sub_238DB8(v46);
          }
          *(_DWORD *)a1 = v48;
          if ( v48 != 61 )
            return v4;
          v49 = *(_DWORD **)(a1 + 56);
          v50 = (*v49)--;
          v51 = *(_DWORD *)(a1 + 56);
          if ( v50 != 0 )
          {
            v52 = *(unsigned __int8 **)(v51 + 4);
            *(_DWORD *)(v51 + 4) = v52 + 1;
            v53 = *v52;
          }
          else
          {
            v53 = sub_238DB8(v51);
          }
          *(_DWORD *)a1 = v53;
          v112 = 26;
          return v112 + 255;
        default:
          break;
      }
    }
    else
    {
      if ( v4 == 46 )
      {
        sub_231460(a1, *(_DWORD *)a1);
        v90 = *(_DWORD **)(a1 + 56);
        v91 = (*v90)--;
        v92 = *(_DWORD *)(a1 + 56);
        if ( v91 != 0 )
        {
          v93 = *(unsigned __int8 **)(v92 + 4);
          *(_DWORD *)(v92 + 4) = v93 + 1;
          v94 = *v93;
        }
        else
        {
          v94 = sub_238DB8(v92);
        }
        *(_DWORD *)a1 = v94;
        if ( sub_23151A((int *)a1, ".") != nullptr )
          return 279 - (sub_23151A((int *)a1, ".") == nullptr);
        if ( (unsigned int)(*(_DWORD *)a1 - 48) > 9 )
          return v4;
        goto LABEL_144;
      }
      if ( v4 == 60 )
      {
        v34 = *(_DWORD **)(a1 + 56);
        v35 = (*v34)--;
        v36 = *(_DWORD *)(a1 + 56);
        if ( v35 != 0 )
        {
          v37 = *(unsigned __int8 **)(v36 + 4);
          *(_DWORD *)(v36 + 4) = v37 + 1;
          v38 = *v37;
        }
        else
        {
          v38 = sub_238DB8(v36);
        }
        *(_DWORD *)a1 = v38;
        if ( v38 == 61 )
        {
          v39 = *(_DWORD **)(a1 + 56);
          v40 = (*v39)--;
          v41 = *(_DWORD *)(a1 + 56);
          if ( v40 != 0 )
          {
            v42 = *(unsigned __int8 **)(v41 + 4);
            *(_DWORD *)(v41 + 4) = v42 + 1;
            v43 = *v42;
          }
          else
          {
            v43 = sub_238DB8(v41);
          }
          *(_DWORD *)a1 = v43;
          v33 = 141;
          return 2 * v33;
        }
        return v4;
      }
    }
    goto LABEL_145;
  }
  v23 = *(_DWORD **)(a1 + 56);
  v24 = (*v23)--;
  v25 = *(_DWORD *)(a1 + 56);
  if ( v24 != 0 )
  {
    v26 = *(unsigned __int8 **)(v25 + 4);
    *(_DWORD *)(v25 + 4) = v26 + 1;
    v27 = *v26;
  }
  else
  {
    v27 = sub_238DB8(v25);
  }
  v4 = 61;
  *(_DWORD *)a1 = v27;
  if ( v27 == 61 )
  {
    v28 = *(_DWORD **)(a1 + 56);
    v29 = (*v28)--;
    v30 = *(_DWORD *)(a1 + 56);
    if ( v29 != 0 )
    {
      v31 = *(unsigned __int8 **)(v30 + 4);
      *(_DWORD *)(v30 + 4) = v31 + 1;
      v32 = *v31;
    }
    else
    {
      v32 = sub_238DB8(v30);
    }
    *(_DWORD *)a1 = v32;
    v33 = 140;
    return 2 * v33;
  }
  return v4;
}


//======================================================================
// sub_231D68
// address: 0x00231D68   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_231D68(int a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  _DWORD *v6; // r2
  int v7; // r3
  int v8; // r0
  unsigned __int8 *v9; // r3
  int result; // r0

  *(_BYTE *)(a2 + 68) = 46;
  v5 = *(_DWORD **)(a2 + 60);
  *(_DWORD *)(a2 + 56) = a3;
  *(_DWORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 64) = a4;
  *(_DWORD *)(a2 + 52) = a1;
  *(_DWORD *)(a2 + 32) = 287;
  *(_DWORD *)(a2 + 4) = 1;
  *(_DWORD *)(a2 + 8) = 1;
  *v5 = sub_23237C(a1, *v5, v5[2], 32);
  *(_DWORD *)(*(_DWORD *)(a2 + 60) + 8) = 32;
  v6 = *(_DWORD **)(a2 + 56);
  v7 = (*v6)--;
  v8 = *(_DWORD *)(a2 + 56);
  if ( v7 != 0 )
  {
    v9 = *(unsigned __int8 **)(v8 + 4);
    *(_DWORD *)(v8 + 4) = v9 + 1;
    result = *v9;
  }
  else
  {
    result = sub_238DB8(v8);
  }
  *(_DWORD *)a2 = result;
  return result;
}


//======================================================================
// sub_231DBC
// address: 0x00231DBC   size: 0x2E (46 bytes)
//======================================================================
void *__fastcall sub_231DBC(int *a1)
{
  void *result; // r0

  a1[2] = a1[1];
  if ( a1[8] == 287 )
  {
    result = (void *)sub_231864((int)a1, a1 + 6);
    a1[4] = (int)result;
  }
  else
  {
    result = j_memcpy(a1 + 4, a1 + 8, 0x10u);
    a1[8] = 287;
  }
  return result;
}


//======================================================================
// sub_231DEA
// address: 0x00231DEA   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_231DEA(int a1)
{
  int result; // r0

  result = sub_231864(a1, (int *)(a1 + 40));
  *(_DWORD *)(a1 + 32) = result;
  return result;
}


//======================================================================
// sub_231E00
// address: 0x00231E00   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_231E00(_DWORD *a1, int a2, int a3, int a4)
{
  double v5; // r0

  v5 = COERCE_DOUBLE(luaL_checknumber(a1, 1, a3, a4)) * 0.0174532925;
  lua_pushnumber((int)a1, SHIDWORD(v5), SLODWORD(v5), SHIDWORD(v5));
  return 1;
}


//======================================================================
// sub_231E28
// address: 0x00231E28   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_231E28(_DWORD *a1, int a2, int a3, int a4)
{
  double v5; // r0

  v5 = COERCE_DOUBLE(luaL_checknumber(a1, 1, a3, a4)) / 0.0174532925;
  lua_pushnumber((int)a1, SHIDWORD(v5), SLODWORD(v5), SHIDWORD(v5));
  return 1;
}


//======================================================================
// sub_231E50
// address: 0x00231E50   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_231E50(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  lua_pushnumber((int)a1, 2 * HIDWORD(v5), v5, (unsigned int)(2 * HIDWORD(v5)) >> 1);
  return 1;
}


//======================================================================
// sub_231E6C
// address: 0x00231E6C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_231E6C(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_tan(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_231E88
// address: 0x00231E88   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_231E88(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_tanh(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_231EA4
// address: 0x00231EA4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_231EA4(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_sqrt(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_231EC0
// address: 0x00231EC0   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_231EC0(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_sin(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_231EDC
// address: 0x00231EDC   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_231EDC(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_sinh(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_231EF8
// address: 0x00231EF8   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_231EF8(_DWORD *a1, int a2, int a3, int a4)
{
  char *v4; // r0

  v4 = luaL_checkinteger(a1, 1, a3, a4);
  j_srand48((int)v4);
  return 0;
}


//======================================================================
// sub_231F08
// address: 0x00231F08   size: 0x52 (82 bytes)
//======================================================================
// local variable allocation has failed, the output may be wrong!
int __fastcall sub_231F08(_DWORD *a1)
{
  int v2; // r2
  int v3; // r3
  __int64 v4; // r0 OVERLAPPED
  int v5; // r2 OVERLAPPED
  int v6; // r7
  double v7; // r4
  double v9; // [sp+0h] [bp-14h]
  int v10; // [sp+Ch] [bp-8h]

  v10 = lua_gettop((int)a1);
  v4 = luaL_checknumber(a1, 1, v2, v3);
  v6 = 2;
  v7 = *(double *)&v4;
  while ( v6 <= v10 )
  {
    v9 = COERCE_DOUBLE(luaL_checknumber(a1, v6, v5, v10));
    if ( v9 >= v7 )
      v9 = v7;
    v7 = v9;
    ++v6;
  }
  lua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_231F5A
// address: 0x00231F5A   size: 0x52 (82 bytes)
//======================================================================
// local variable allocation has failed, the output may be wrong!
int __fastcall sub_231F5A(_DWORD *a1)
{
  int v2; // r2
  int v3; // r3
  __int64 v4; // r0 OVERLAPPED
  int v5; // r2 OVERLAPPED
  int v6; // r7
  double v7; // r4
  double v9; // [sp+0h] [bp-14h]
  int v10; // [sp+Ch] [bp-8h]

  v10 = lua_gettop((int)a1);
  v4 = luaL_checknumber(a1, 1, v2, v3);
  v6 = 2;
  v7 = *(double *)&v4;
  while ( v6 <= v10 )
  {
    v9 = COERCE_DOUBLE(luaL_checknumber(a1, v6, v5, v10));
    if ( v9 <= v7 )
      v9 = v7;
    v7 = v9;
    ++v6;
  }
  lua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_231FAC
// address: 0x00231FAC   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_231FAC(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_floor(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_231FC8
// address: 0x00231FC8   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_231FC8(_DWORD *a1)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  double v5; // r0
  double v6; // r2
  char *v7; // r0
  double v8; // r0
  char *v9; // r7
  int v10; // r2
  int v11; // r3
  char *v12; // r0
  double v14; // [sp+0h] [bp-Ch]

  v14 = (double)(j_lrand48() % 0x7FFFFFFF) / 2147483650.0;
  v4 = lua_gettop((int)a1);
  LODWORD(v5) = a1;
  if ( v4 == 1 )
  {
    v7 = luaL_checkinteger(a1, 1, v2, v3);
    if ( (int)v7 <= 0 )
      luaL_argerror((int)a1, 1, "interval is empty");
    v8 = j_floor(v14 * (double)(int)v7) + 1.0;
    lua_pushnumber((int)a1, SHIDWORD(v8), SLODWORD(v8), SHIDWORD(v8));
  }
  else
  {
    if ( v4 == 2 )
    {
      v9 = luaL_checkinteger(a1, 1, v2, v3);
      v12 = luaL_checkinteger(a1, 2, v10, v11);
      if ( (int)v9 > (int)v12 )
        luaL_argerror((int)a1, 2, "interval is empty");
      v5 = j_floor(v14 * (double)(v12 - v9 + 1)) + (double)(int)v9;
      v6 = v5;
      LODWORD(v5) = a1;
    }
    else
    {
      if ( v4 != 0 )
        luaL_error((int)a1, (int)"wrong number of arguments");
      v6 = v14;
    }
    lua_pushnumber(SLODWORD(v5), SHIDWORD(v5), SLODWORD(v6), SHIDWORD(v6));
  }
  return 1;
}


//======================================================================
// sub_2320D0
// address: 0x002320D0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_2320D0(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r4
  int v6; // r2
  int v7; // r3
  __int64 v8; // r0
  double v9; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v8 = luaL_checknumber(a1, 2, v6, v7);
  v9 = j_pow(*(double *)&v5, *(double *)&v8);
  lua_pushnumber((int)a1, SHIDWORD(v9), SLODWORD(v9), SHIDWORD(v9));
  return 1;
}


//======================================================================
// sub_232100
// address: 0x00232100   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_232100(double a1, int a2, int a3)
{
  int v3; // r6
  __int64 v4; // r0
  double v5; // r4
  int v6; // r1
  double v8; // [sp+0h] [bp-8h] BYREF

  v8 = a1;
  v3 = LODWORD(a1);
  v4 = luaL_checknumber((_DWORD *)LODWORD(a1), 1, a2, a3);
  v5 = j_modf(*(double *)&v4, &v8);
  lua_pushnumber(v3, SHIDWORD(v5), SLODWORD(v8), SHIDWORD(v8));
  lua_pushnumber(v3, v6, SLODWORD(v5), SHIDWORD(v5));
  return 2;
}


//======================================================================
// sub_23212C
// address: 0x0023212C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_23212C(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_log(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_232148
// address: 0x00232148   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_232148(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_log10(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_232164
// address: 0x00232164   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_232164(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r4
  int v6; // r2
  int v7; // r3
  char *v8; // r0
  double v9; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v8 = luaL_checkinteger(a1, 2, v6, v7);
  v9 = j_ldexp(*(double *)&v5, (int)v8);
  lua_pushnumber((int)a1, SHIDWORD(v9), SLODWORD(v9), SHIDWORD(v9));
  return 1;
}


//======================================================================
// sub_232192
// address: 0x00232192   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_232192(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0
  int exponent; // [sp+4h] [bp-4h] BYREF

  exponent = a2;
  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_frexp(*(double *)&v5, &exponent);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  lua_pushinteger((int)a1, exponent);
  return 2;
}


//======================================================================
// sub_2321B8
// address: 0x002321B8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_2321B8(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r4
  int v6; // r2
  int v7; // r3
  __int64 v8; // r0
  double v9; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v8 = luaL_checknumber(a1, 2, v6, v7);
  v9 = j_fmod(*(double *)&v5, *(double *)&v8);
  lua_pushnumber((int)a1, SHIDWORD(v9), SLODWORD(v9), SHIDWORD(v9));
  return 1;
}


//======================================================================
// sub_2321E8
// address: 0x002321E8   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_2321E8(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_exp(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_232204
// address: 0x00232204   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_232204(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_cos(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_232220
// address: 0x00232220   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_232220(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_cosh(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_23223C
// address: 0x0023223C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_23223C(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_ceil(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_232258
// address: 0x00232258   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_232258(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_atan(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_232274
// address: 0x00232274   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_232274(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r4
  int v6; // r2
  int v7; // r3
  __int64 v8; // r0
  double v9; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v8 = luaL_checknumber(a1, 2, v6, v7);
  v9 = j_atan2(*(double *)&v5, *(double *)&v8);
  lua_pushnumber((int)a1, SHIDWORD(v9), SLODWORD(v9), SHIDWORD(v9));
  return 1;
}


//======================================================================
// sub_2322A4
// address: 0x002322A4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_2322A4(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_asin(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_2322C0
// address: 0x002322C0   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_2322C0(_DWORD *a1, int a2, int a3, int a4)
{
  __int64 v5; // r0
  double v6; // r0

  v5 = luaL_checknumber(a1, 1, a3, a4);
  v6 = j_acos(*(double *)&v5);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_232368
// address: 0x00232368   size: 0xE (14 bytes)
//======================================================================
void __fastcall __noreturn sub_232368(_DWORD *a1)
{
  sub_22EE48(a1, (int)"memory allocation error: block too big");
}


//======================================================================
// sub_23237C
// address: 0x0023237C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_23237C(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int result; // r0

  v4 = *(_DWORD *)(a1 + 16);
  result = (*(int (__fastcall **)(_DWORD))(v4 + 12))(*(_DWORD *)(v4 + 16));
  if ( result == 0 && a4 != 0 )
    sub_22F13C(a1, 4);
  *(_DWORD *)(v4 + 68) = a4 + *(_DWORD *)(v4 + 68) - a3;
  return result;
}


//======================================================================
// sub_2323AC
// address: 0x002323AC   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_2323AC(_DWORD *a1, int a2, int *a3, unsigned int a4, int a5, int a6)
{
  int v6; // r4
  int v7; // r3
  int result; // r0

  v6 = a5;
  v7 = *a3;
  if ( *a3 < a5 / 2 )
  {
    v6 = 2 * v7;
    if ( 2 * v7 <= 3 )
      v6 = 4;
  }
  else if ( v7 >= a5 )
  {
    sub_22EE48(a1, a6);
  }
  if ( v6 + 1 > 0xFFFFFFFD / a4 )
    sub_22EE48(a1, (int)"memory allocation error: block too big");
  result = sub_23237C((int)a1, a2, *a3 * a4, a4 * v6);
  *a3 = v6;
  return result;
}


//======================================================================
// sub_232414
// address: 0x00232414   size: 0x2C (44 bytes)
//======================================================================
void __fastcall __noreturn sub_232414(_DWORD *a1, const char *a2)
{
  const char *v4; // r6
  const char *v5; // r0

  v4 = (const char *)lua_tolstring(a1, 1, nullptr);
  v5 = (const char *)lua_tolstring(a1, -1, nullptr);
  luaL_error((int)a1, (int)"error loading module '%s' from file '%s':\n\t%s", v4, a2, v5);
}


//======================================================================
// sub_232448
// address: 0x00232448   size: 0x180 (384 bytes)
//======================================================================
int __fastcall sub_232448(int a1)
{
  char *v2; // r5
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int i; // r6
  const char *v7; // r0
  int v8; // r3
  int v9; // r3
  int v10; // r3

  v2 = (char *)luaL_checklstring((_DWORD *)a1, 1, nullptr);
  lua_settop(a1, 1);
  lua_getfield((_DWORD *)a1, -10000, "_LOADED", v3);
  lua_getfield((_DWORD *)a1, 2, v2, v4);
  if ( lua_toboolean((_DWORD *)a1, -1) )
  {
    if ( (_UNKNOWN *)lua_touserdata((_DWORD *)a1, -1) == &unk_4448E8 )
      luaL_error(a1, (int)"loop or previous error loading module '%s'", v2);
  }
  else
  {
    lua_getfield((_DWORD *)a1, -10001, "loaders", v5);
    if ( lua_type((_DWORD *)a1, -1) != 5 )
      luaL_error(a1, (int)"'package.loaders' must be a table");
    lua_pushlstring(a1, (int)&unk_3FB8EA, 0);
    for ( i = 1; ; ++i )
    {
      lua_rawgeti((_DWORD *)a1, -2, i);
      if ( lua_type((_DWORD *)a1, -1) == 0 )
      {
        v7 = (const char *)lua_tolstring((_DWORD *)a1, -2, nullptr);
        luaL_error(a1, (int)"module '%s' not found:%s", v2, v7);
      }
      lua_pushstring(a1, v2);
      lua_call(a1, 1, 1);
      if ( lua_type((_DWORD *)a1, -1) == 6 )
        break;
      if ( lua_isstring((_DWORD *)a1, -1) )
        lua_concat(a1, 2);
      else
        lua_settop(a1, -2);
    }
    lua_pushlightuserdata(a1, (int)&unk_4448E8);
    lua_setfield((_DWORD *)a1, 2, v2, v8);
    lua_pushstring(a1, v2);
    lua_call(a1, 1, 1);
    if ( lua_type((_DWORD *)a1, -1) != 0 )
      lua_setfield((_DWORD *)a1, 2, v2, v9);
    lua_getfield((_DWORD *)a1, 2, v2, v9);
    if ( (_UNKNOWN *)lua_touserdata((_DWORD *)a1, -1) == &unk_4448E8 )
    {
      lua_pushboolean((unsigned int)a1 | 0x100000000LL);
      lua_pushvalue((_DWORD *)a1, -1);
      lua_setfield((_DWORD *)a1, 2, v2, v10);
    }
  }
  return 1;
}


//======================================================================
// sub_2325F4
// address: 0x002325F4   size: 0x1B0 (432 bytes)
//======================================================================
int __fastcall sub_2325F4(_DWORD *a1)
{
  char *v2; // r5
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  char *v9; // r0
  char *v10; // r2
  int v11; // r3
  int i; // r5
  int v14; // [sp+0h] [bp-74h]
  _BYTE v15[100]; // [sp+8h] [bp-6Ch] BYREF

  v2 = (char *)luaL_checklstring(a1, 1, nullptr);
  v14 = lua_gettop((int)a1);
  lua_getfield(a1, -10000, "_LOADED", v3);
  lua_getfield(a1, v14 + 1, v2, v4);
  if ( lua_type(a1, -1) != 5 )
  {
    lua_settop((int)a1, -2);
    if ( luaL_findtable(a1, -10002, v2, 1) != nullptr )
      luaL_error((int)a1, (int)"name conflict for module '%s'", v2);
    lua_pushvalue(a1, -1);
    lua_setfield(a1, v14 + 1, v2, v6);
  }
  lua_getfield(a1, -1, "_NAME", v5);
  if ( lua_type(a1, -1) != 0 )
  {
    lua_settop((int)a1, -2);
  }
  else
  {
    lua_settop((int)a1, -2);
    lua_pushvalue(a1, -1);
    lua_setfield(a1, -2, "_M", v7);
    lua_pushstring((int)a1, v2);
    lua_setfield(a1, -2, "_NAME", v8);
    v9 = j_strrchr(v2, 46);
    if ( v9 != nullptr )
      v10 = v9 + 1;
    else
      v10 = v2;
    lua_pushlstring((int)a1, (int)v2, v10 - v2);
    lua_setfield(a1, -2, "_PACKAGE", v11);
  }
  lua_pushvalue(a1, -1);
  if ( lua_getstack((int)a1, 1, (int)v15) == 0 || lua_getinfo(a1, "f", (int)v15) == 0 || lua_iscfunction(a1, -1) )
    luaL_error((int)a1, (int)"'module' not called from a Lua function");
  lua_pushvalue(a1, -2);
  lua_setfenv(a1, -2);
  lua_settop((int)a1, -2);
  for ( i = 2; i <= v14; ++i )
  {
    lua_pushvalue(a1, i);
    lua_pushvalue(a1, -2);
    lua_call((int)a1, 1, 0);
  }
  return 0;
}


//======================================================================
// sub_2327CC
// address: 0x002327CC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_2327CC(_DWORD *a1)
{
  const char *v2; // r5
  int v3; // r3
  int v4; // r3

  v2 = (const char *)luaL_checklstring(a1, 1, nullptr);
  lua_getfield(a1, -10001, "preload", v3);
  if ( lua_type(a1, -1) != 5 )
    luaL_error((int)a1, (int)"'package.preload' must be a table");
  lua_getfield(a1, -1, v2, v4);
  if ( lua_type(a1, -1) == 0 )
    lua_pushfstring((int)a1, (int)"\n\tno field package.preload['%s']", v2);
  return 1;
}


//======================================================================
// sub_232838
// address: 0x00232838   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_232838(_DWORD *a1, char *a2)
{
  char *v3; // r5
  char *v4; // r0
  const char *v5; // r0
  int v6; // r5

  v3 = a2;
  v4 = j_strchr(a2, 45);
  if ( v4 != nullptr )
    v3 = v4 + 1;
  v5 = (const char *)luaL_gsub(a1, v3, ".", "_");
  v6 = lua_pushfstring((int)a1, (int)"luaopen_%s", v5);
  lua_remove(a1, -2);
  return v6;
}


//======================================================================
// sub_232884
// address: 0x00232884   size: 0xDA (218 bytes)
//======================================================================
const char *__fastcall sub_232884(_DWORD *a1, char *a2, const char *a3)
{
  char *v5; // r7
  int v6; // r3
  char *v7; // r6
  const char *i; // r5
  char *v10; // r0
  const char *v11; // r5
  FILE *v12; // r0

  v5 = (char *)luaL_gsub(a1, a2, ".", "/");
  lua_getfield(a1, -10001, a3, v6);
  v7 = (char *)lua_tolstring(a1, -1, nullptr);
  if ( v7 == nullptr )
    luaL_error((int)a1, (int)"'package.%s' must be a string", a3);
  lua_pushlstring((int)a1, (int)&unk_3FB8EA, 0);
  while ( 1 )
  {
    for ( i = v7; *i == 59; ++i )
      ;
    if ( *i == 0 )
      return nullptr;
    v7 = j_strchr(i, 59);
    if ( v7 == nullptr )
      v7 = (char *)&i[j_strlen(i)];
    lua_pushlstring((int)a1, (int)i, v7 - i);
    if ( v7 == nullptr )
      return nullptr;
    v10 = (char *)lua_tolstring(a1, -1, nullptr);
    v11 = (const char *)luaL_gsub(a1, v10, "?", v5);
    lua_remove(a1, -2);
    v12 = j_fopen(v11, (const char *)aRgb);
    if ( v12 != nullptr )
      break;
    lua_pushfstring((int)a1, (int)"\n\tno file '%s'", v11);
    lua_remove(a1, -2);
    lua_concat((int)a1, 2);
  }
  j_fclose(v12);
  return v11;
}


//======================================================================
// sub_232980
// address: 0x00232980   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_232980(_DWORD *a1)
{
  char *v2; // r0
  const char *v3; // r5

  v2 = (char *)luaL_checklstring(a1, 1, nullptr);
  v3 = sub_232884(a1, v2, "path");
  if ( v3 != nullptr && luaL_loadfile(a1, v3) != 0 )
    sub_232414(a1, v3);
  return 1;
}


//======================================================================
// sub_2329B8
// address: 0x002329B8   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_2329B8(_DWORD *a1)
{
  int v2; // r3

  luaL_checktype(a1, 1, 5);
  if ( lua_getmetatable(a1, 1) == 0 )
  {
    lua_createtable((int)a1, 0, 1);
    lua_pushvalue(a1, -1);
    lua_setmetatable(a1, 1);
  }
  lua_pushvalue(a1, -10002);
  lua_setfield(a1, -2, "__index", v2);
  return 0;
}


//======================================================================
// sub_232A0C
// address: 0x00232A0C   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_232A0C(_DWORD *a1)
{
  *(_DWORD *)luaL_checkudata(a1, 1, "_LOADLIB") = 0;
  return 0;
}


//======================================================================
// sub_232A24
// address: 0x00232A24   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_232A24(_DWORD *a1, const char *a2, char *a3, char *a4)
{
  char *v7; // r1
  int v8; // r3
  char *v9; // r0

  v7 = j_getenv(a3);
  if ( v7 != nullptr )
  {
    v9 = (char *)luaL_gsub(a1, v7, ";;", asc_409642);
    luaL_gsub(a1, v9, byte_409646, a4);
    lua_remove(a1, -2);
  }
  else
  {
    lua_pushstring((int)a1, a4);
  }
  return lua_setfield(a1, -2, a2, v8);
}


//======================================================================
// sub_232A80
// address: 0x00232A80   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall sub_232A80(_DWORD *a1, const char *a2)
{
  _DWORD *v3; // r5
  _DWORD *v4; // r0

  lua_pushfstring((int)a1, (int)"%s%s", "LOADLIB: ", a2);
  lua_gettable(a1, -10000);
  if ( lua_type(a1, -1) != 0 )
  {
    v3 = (_DWORD *)lua_touserdata(a1, -1);
  }
  else
  {
    lua_settop((int)a1, -2);
    v4 = (_DWORD *)lua_newuserdata(a1, 4);
    *v4 = 0;
    v3 = v4;
    lua_getfield(a1, -10000, "_LOADLIB", 0);
    lua_setmetatable(a1, -2);
    lua_pushfstring((int)a1, (int)"%s%s", "LOADLIB: ", a2);
    lua_pushvalue(a1, -2);
    lua_settable(a1, -10000);
  }
  if ( *v3 == 0 )
  {
    lua_pushlstring((int)a1, (int)"dynamic libraries not enabled; check your Lua installation", 0x3Au);
    *v3 = 0;
  }
  if ( *v3 == 0 )
    return 1;
  lua_pushlstring((int)a1, (int)"dynamic libraries not enabled; check your Lua installation", 0x3Au);
  return 2;
}


//======================================================================
// sub_232B50
// address: 0x00232B50   size: 0x70 (112 bytes)
//======================================================================
char *__fastcall sub_232B50(_DWORD *a1)
{
  char *v2; // r5
  char *result; // r0
  char *v4; // r0
  const char *v5; // r6
  int v6; // r0

  v2 = (char *)luaL_checklstring(a1, 1, nullptr);
  result = j_strchr(v2, 46);
  if ( result != nullptr )
  {
    lua_pushlstring((int)a1, (int)v2, result - v2);
    v4 = (char *)lua_tolstring(a1, -1, nullptr);
    v5 = sub_232884(a1, v4, "cpath");
    if ( v5 != nullptr )
    {
      sub_232838(a1, v2);
      v6 = sub_232A80(a1, v5);
      if ( v6 != 0 )
      {
        if ( v6 != 2 )
          sub_232414(a1, v5);
        lua_pushfstring((int)a1, (int)"\n\tno module '%s' in file '%s'", v2, v5);
      }
    }
    return (_BYTE *)(&dword_0 + 1);
  }
  return result;
}


//======================================================================
// sub_232BC8
// address: 0x00232BC8   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_232BC8(_DWORD *a1)
{
  char *v2; // r6
  const char *v3; // r5

  v2 = (char *)luaL_checklstring(a1, 1, nullptr);
  v3 = sub_232884(a1, v2, "cpath");
  if ( v3 != nullptr )
  {
    sub_232838(a1, v2);
    if ( sub_232A80(a1, v3) != 0 )
      sub_232414(a1, v3);
  }
  return 1;
}


//======================================================================
// sub_232C0C
// address: 0x00232C0C   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_232C0C(_DWORD *a1)
{
  const char *v2; // r5
  int v3; // r5
  int result; // r0
  char *v5; // r1

  v2 = (const char *)luaL_checklstring(a1, 1, nullptr);
  luaL_checklstring(a1, 2, nullptr);
  v3 = sub_232A80(a1, v2);
  result = 1;
  if ( v3 != 0 )
  {
    lua_pushnil((int)a1);
    lua_insert(a1, -2);
    if ( v3 == 1 )
      v5 = "absent";
    else
      v5 = "init";
    lua_pushstring((int)a1, v5);
    return 3;
  }
  return result;
}


//======================================================================
// sub_232DD4
// address: 0x00232DD4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_232DD4(_DWORD *a1, char *a2)
{
  _DWORD *v3; // r5
  size_t v5; // r0
  int result; // r0

  v3 = (_DWORD *)a1[2];
  v5 = j_strlen(a2);
  result = sub_235280((int)a1, (int)a2, v5);
  v3[2] = 4;
  *v3 = result;
  if ( a1[7] - a1[2] <= 16 )
    result = sub_22F1D4(a1, 1);
  a1[2] += 16;
  return result;
}


//======================================================================
// sub_232E0C
// address: 0x00232E0C   size: 0x1E (30 bytes)
//======================================================================
unsigned int __fastcall sub_232E0C(unsigned int result)
{
  int v1; // r3

  v1 = 0;
  while ( result > 0xF )
  {
    result = (result + 1) >> 1;
    ++v1;
  }
  if ( result > 7 )
    return (result - 8) | (8 * (v1 + 1));
  return result;
}


//======================================================================
// sub_232E2A
// address: 0x00232E2A   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_232E2A(int result)
{
  int v1; // r3

  v1 = (unsigned __int8)result >> 3;
  if ( v1 != 0 )
    return ((result & 7) + 8) << (v1 - 1);
  return result;
}


//======================================================================
// sub_232E40
// address: 0x00232E40   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_232E40(unsigned int a1)
{
  int v1; // r3

  v1 = -1;
  while ( a1 > 0xFF )
  {
    v1 += 8;
    a1 >>= 8;
  }
  return v1 + byte_4448F0[a1];
}


//======================================================================
// sub_232E60
// address: 0x00232E60   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_232E60(int a1, int a2)
{
  int v3; // r0
  int v4; // r3

  v3 = *(_DWORD *)(a1 + 8);
  v4 = 0;
  if ( v3 == *(_DWORD *)(a2 + 8) )
  {
    switch ( v3 )
    {
      case 0:
        v4 = 1;
        break;
      case 3:
        v4 = *(double *)a1 == *(double *)a2;
        break;
      default:
        v4 = *(_DWORD *)a2 - *(_DWORD *)a1 + (*(_DWORD *)a1 == *(_DWORD *)a2) + *(_DWORD *)a1 - *(_DWORD *)a2;
        break;
    }
  }
  return v4;
}


//======================================================================
// sub_232EA8
// address: 0x00232EA8   size: 0x64 (100 bytes)
//======================================================================
bool __fastcall sub_232EA8(const char *a1, char *a2)
{
  double v4; // r0
  char *v5; // r3
  _BOOL4 result; // r0
  int v7; // r0
  char *v8; // [sp+4h] [bp-4h] BYREF

  v8 = a2;
  v4 = j_strtod(a1, &v8);
  v5 = v8;
  *(double *)a2 = v4;
  if ( v5 == a1 )
    return false;
  if ( (*v5 & 0xDF) == 0x58 )
    *(double *)a2 = (double)j_strtoul(a1, &v8, 16);
  result = true;
  if ( *v8 != 0 )
  {
    while ( 1 )
    {
      v7 = (unsigned __int8)*v8;
      if ( (*(_BYTE *)(ctype_ + v7 + 1) & 8) == 0 )
        break;
      ++v8;
    }
    return v7 == 0;
  }
  return result;
}


//======================================================================
// sub_232F10
// address: 0x00232F10   size: 0x178 (376 bytes)
//======================================================================
int __fastcall sub_232F10(_DWORD *a1, char *a2, const void **a3)
{
  char *v6; // r0
  char *v7; // r7
  int v8; // r0
  int v9; // r6
  unsigned int v10; // r3
  char *v11; // r1
  const void **v12; // r6
  _DWORD *v13; // r0
  _DWORD *v14; // r3
  int v15; // r1
  _DWORD *v16; // r0
  char *v17; // r1
  int v18; // r3
  int *v20; // [sp+4h] [bp-30h]
  int i; // [sp+8h] [bp-2Ch]
  _BYTE v22[4]; // [sp+10h] [bp-24h] BYREF
  char s[24]; // [sp+14h] [bp-20h] BYREF

  sub_232DD4(a1, (char *)&unk_3FB8EA);
  for ( i = 1; ; i += 2 )
  {
    v6 = j_strchr(a2, 37);
    v7 = v6;
    if ( v6 == nullptr )
      break;
    v20 = (int *)a1[2];
    v8 = sub_235280((int)a1, (int)a2, v6 - a2);
    v20[2] = 4;
    *v20 = v8;
    if ( a1[7] - a1[2] <= 16 )
      sub_22F1D4(a1, 1);
    v9 = a1[2];
    a1[2] = v9 + 16;
    v10 = (unsigned __int8)v7[1];
    if ( v10 == 100 )
    {
      *(double *)(v9 + 16) = (double)(int)*a3;
      *(_DWORD *)(v9 + 24) = 3;
      if ( a1[7] - a1[2] <= 16 )
        sub_22F1D4(a1, 1);
      ++a3;
      a1[2] += 16;
    }
    else
    {
      if ( v10 <= 0x64 )
      {
        if ( v10 == 37 )
        {
          v16 = a1;
          v17 = "%";
        }
        else
        {
          if ( v10 == 99 )
          {
            v11 = v22;
            v12 = a3 + 1;
            v22[0] = (unsigned __int8)*a3;
            v22[1] = 0;
            goto LABEL_17;
          }
LABEL_27:
          v17 = v22;
          v22[1] = v7[1];
          v22[0] = 37;
          v22[2] = 0;
          v16 = a1;
        }
        sub_232DD4(v16, v17);
        goto LABEL_29;
      }
      if ( v10 == 112 )
      {
        v12 = a3 + 1;
        j_sprintf(s, "%p", *a3);
        v13 = a1;
        v11 = s;
        goto LABEL_18;
      }
      if ( v10 == 115 )
      {
        v11 = (char *)*a3;
        v12 = a3 + 1;
        if ( *a3 == nullptr )
          v11 = "(null)";
LABEL_17:
        v13 = a1;
LABEL_18:
        sub_232DD4(v13, v11);
        a3 = v12;
        goto LABEL_29;
      }
      if ( v10 != 102 )
        goto LABEL_27;
      v14 = (_DWORD *)(((unsigned int)a3 + 7) & 0xFFFFFFF8);
      v15 = v14[1];
      *(_DWORD *)(v9 + 16) = *v14;
      *(_DWORD *)(v9 + 20) = v15;
      *(_DWORD *)(v9 + 24) = 3;
      a3 = (const void **)(v14 + 2);
      if ( a1[7] - a1[2] <= 16 )
        sub_22F1D4(a1, 1);
      a1[2] += 16;
    }
LABEL_29:
    a2 = v7 + 2;
  }
  sub_232DD4(a1, a2);
  sub_238088(a1, i + 1, ((a1[2] - a1[3]) >> 4) - 1);
  v18 = a1[2] - 16 * i;
  a1[2] = v18;
  return *(_DWORD *)(v18 - 16) + 16;
}


//======================================================================
// sub_23309C
// address: 0x0023309C   size: 0x18 (24 bytes)
//======================================================================
int sub_23309C(_DWORD *a1, char *a2, ...)
{
  va_list varg_r2; // [sp+10h] [bp+8h] BYREF

  va_start(varg_r2, a2);
  return sub_232F10(a1, a2, (const void **)varg_r2);
}


//======================================================================
// sub_2330B4
// address: 0x002330B4   size: 0x94 (148 bytes)
//======================================================================
char *__fastcall sub_2330B4(char *a1, char *a2, size_t a3)
{
  int v3; // r3
  char *v7; // r4
  char *result; // r0
  char *v9; // r5
  size_t v10; // r6
  size_t v11; // r7
  char *v12; // r0
  const char *v13; // r1
  size_t v14; // r7
  size_t v15; // r6
  char *v16; // r0
  const char *v17; // r1

  v3 = (unsigned __int8)*a2;
  if ( v3 == 61 )
  {
    v7 = &a1[a3];
    result = j_strncpy(a1, a2 + 1, a3);
    *(v7 - 1) = 0;
  }
  else
  {
    if ( v3 == 64 )
    {
      v9 = a2 + 1;
      v10 = j_strlen(a2 + 1);
      v11 = a3 - 8;
      j_strcpy(a1, (const char *)&unk_3FB8EA);
      if ( v10 > v11 )
      {
        v9 += v10 - v11;
        j_strcat(a1, "...");
      }
      v12 = a1;
      v13 = v9;
    }
    else
    {
      v14 = a3 - 17;
      v15 = j_strcspn(a2, "\n\r");
      if ( v15 > v14 )
        v15 = v14;
      j_strcpy(a1, "[string \"");
      v16 = a1;
      v17 = a2;
      if ( a2[v15] != 0 )
      {
        j_strncat(a1, a2, v15);
        v16 = a1;
        v17 = "...";
      }
      j_strcat(v16, v17);
      v12 = a1;
      v13 = "\"]";
    }
    return j_strcat(v12, v13);
  }
  return result;
}


//======================================================================
// sub_233160
// address: 0x00233160   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_233160(_DWORD *a1)
{
  const char *v2; // r5
  int v3; // r0
  char *v4; // r0

  v2 = (const char *)luaL_optlstring(a1, 1, nullptr, nullptr);
  v3 = luaL_checkoption(a1, 2, "all", (int)off_452FC8);
  v4 = j_setlocale(dword_444A28[v3], v2);
  lua_pushstring((int)a1, v4);
  return 1;
}


//======================================================================
// sub_2331A8
// address: 0x002331A8   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_2331A8(int a1, int a2, const char *a3)
{
  int v6; // r5
  __int64 v7; // r0
  char *v9; // r0

  v6 = *(_DWORD *)j___errno();
  LODWORD(v7) = a1;
  if ( a2 != 0 )
  {
    HIDWORD(v7) = 1;
    lua_pushboolean(v7);
    return 1;
  }
  else
  {
    lua_pushnil(a1);
    v9 = j_strerror(v6);
    lua_pushfstring(a1, (int)"%s: %s", a3, v9);
    lua_pushinteger(a1, v6);
    return 3;
  }
}


//======================================================================
// sub_2331F0
// address: 0x002331F0   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_2331F0(_DWORD *a1)
{
  const char *v2; // r5
  const char *v3; // r0
  int v4; // r0

  v2 = (const char *)luaL_checklstring(a1, 1, nullptr);
  v3 = (const char *)luaL_checklstring(a1, 2, nullptr);
  v4 = j_rename(v2, v3);
  return sub_2331A8((int)a1, v4 == 0, v2);
}


//======================================================================
// sub_23321E
// address: 0x0023321E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_23321E(_DWORD *a1)
{
  const char *v2; // r4
  int v3; // r0

  v2 = (const char *)luaL_checklstring(a1, 1, nullptr);
  v3 = j_remove(v2);
  return sub_2331A8((int)a1, v3 == 0, v2);
}


//======================================================================
// sub_23323E
// address: 0x0023323E   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_23323E(_DWORD *a1)
{
  const char *v2; // r0
  char *v3; // r0

  v2 = (const char *)luaL_checklstring(a1, 1, nullptr);
  v3 = j_getenv(v2);
  lua_pushstring((int)a1, v3);
  return 1;
}


//======================================================================
// sub_23325A
// address: 0x0023325A   size: 0xE (14 bytes)
//======================================================================
void __fastcall __noreturn sub_23325A(_DWORD *a1)
{
  char *v1; // r0

  v1 = luaL_optinteger(a1, 1, 0);
  j_exit((int)v1);
}


//======================================================================
// sub_233268
// address: 0x00233268   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_233268(_DWORD *a1)
{
  const char *v2; // r0
  int v3; // r0

  v2 = (const char *)luaL_optlstring(a1, 1, nullptr, nullptr);
  v3 = j_system(v2);
  lua_pushinteger((int)a1, v3);
  return 1;
}


//======================================================================
// sub_233288
// address: 0x00233288   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_233288(_DWORD *a1, int a2, int a3, int a4)
{
  double v5; // r4
  double v6; // r0
  double v8; // [sp+0h] [bp-8h]

  v5 = COERCE_DOUBLE(luaL_checknumber(a1, 1, a3, a4));
  v8 = COERCE_DOUBLE(luaL_optnumber(a1, 2, 0));
  v6 = j_difftime((int)v5, (int)v8);
  lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
  return 1;
}


//======================================================================
// sub_2332D8
// address: 0x002332D8   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_2332D8(_DWORD *a1, const char *a2, int a3)
{
  int v5; // r3

  lua_pushinteger((int)a1, a3);
  return lua_setfield(a1, -2, a2, v5);
}


//======================================================================
// sub_2332F8
// address: 0x002332F8   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_2332F8(int a1)
{
  double v2; // r0

  v2 = (double)j_clock() / 1000000.0;
  lua_pushnumber(a1, SHIDWORD(v2), SLODWORD(v2), SHIDWORD(v2));
  return 1;
}


//======================================================================
// sub_233328
// address: 0x00233328   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_233328(int a1)
{
  char s[1016]; // [sp+4h] [bp-404h] BYREF

  if ( j_tmpnam(s) == nullptr )
    luaL_error(a1, (int)"unable to generate a unique filename");
  lua_pushstring(a1, s);
  return 1;
}


//======================================================================
// sub_233384
// address: 0x00233384   size: 0x4E (78 bytes)
//======================================================================
char *__fastcall sub_233384(_DWORD *a1, const char *a2, char *a3, int a4)
{
  int v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r3

  lua_getfield(a1, -1, a2, a4);
  if ( lua_isnumber(a1, -1, v7, v8) )
  {
    a3 = lua_tointeger(a1, -1, v9, v10);
  }
  else if ( (int)a3 < 0 )
  {
    luaL_error((int)a1, (int)"field '%s' missing in date table", a2);
  }
  lua_settop((int)a1, -2);
  return a3;
}


//======================================================================
// sub_2333D8
// address: 0x002333D8   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_2333D8(_DWORD *a1)
{
  time_t v2; // r0
  int v3; // r3
  int v4; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r6
  struct tm v11; // [sp+4h] [bp-2Ch] BYREF

  if ( lua_type(a1, 1) > 0 )
  {
    luaL_checktype(a1, 1, 5);
    lua_settop((int)a1, 1);
    v11.tm_sec = (int)sub_233384(a1, "sec", nullptr, v3);
    v11.tm_min = (int)sub_233384(a1, "min", nullptr, v4);
    v11.tm_hour = (int)sub_233384(a1, "hour", &byte_9[3], v5);
    v11.tm_mday = (int)sub_233384(a1, "day", (char *)0xFFFFFFFF, v6);
    v11.tm_mon = (int)(sub_233384(a1, "month", (char *)0xFFFFFFFF, v7) - 1);
    v11.tm_year = (int)(sub_233384(a1, "year", (char *)0xFFFFFFFF, v8) - 1900);
    lua_getfield(a1, -1, "isdst", -1900);
    if ( lua_type(a1, -1) != 0 )
      v9 = lua_toboolean(a1, -1);
    else
      v9 = -1;
    lua_settop((int)a1, -2);
    v11.tm_isdst = v9;
    v2 = j_mktime(&v11);
  }
  else
  {
    v2 = j_time(nullptr);
  }
  if ( v2 == -1 )
    lua_pushnil((int)a1);
  else
    lua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v2)),
      COERCE_UNSIGNED_INT64((double)v2),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v2)));
  return 1;
}


//======================================================================
// sub_2334E4
// address: 0x002334E4   size: 0x188 (392 bytes)
//======================================================================
int __fastcall sub_2334E4(_DWORD *a1)
{
  int v2; // r5
  int v3; // r2
  int v4; // r3
  int v5; // r0
  struct tm *v6; // r4
  __int64 v7; // r0
  int v8; // r3
  _BYTE *v9; // r3
  size_t v10; // r0
  char format[4]; // [sp+8h] [bp-4E4h] BYREF
  time_t timer; // [sp+Ch] [bp-4E0h] BYREF
  char s[200]; // [sp+10h] [bp-4DCh] BYREF
  int v15[201]; // [sp+D8h] [bp-414h] BYREF
  int v16; // [sp+4E4h] [bp-8h] BYREF

  v2 = luaL_optlstring(a1, 1, "%c", nullptr);
  if ( lua_type(a1, 2) > 0 )
    v5 = (int)COERCE_DOUBLE(luaL_checknumber(a1, 2, v3, v4));
  else
    v5 = j_time(nullptr);
  timer = v5;
  if ( *(_BYTE *)v2 == 33 )
  {
    ++v2;
    v6 = j_gmtime(&timer);
  }
  else
  {
    v6 = j_localtime(&timer);
  }
  if ( v6 != nullptr )
  {
    if ( j_strcmp((const char *)v2, "*t") == 0 )
    {
      lua_createtable((int)a1, 0, 9);
      sub_2332D8(a1, "sec", v6->tm_sec);
      sub_2332D8(a1, "min", v6->tm_min);
      sub_2332D8(a1, "hour", v6->tm_hour);
      sub_2332D8(a1, "day", v6->tm_mday);
      sub_2332D8(a1, "month", v6->tm_mon + 1);
      sub_2332D8(a1, "year", v6->tm_year + 1900);
      sub_2332D8(a1, "wday", v6->tm_wday + 1);
      sub_2332D8(a1, "yday", v6->tm_yday + 1);
      HIDWORD(v7) = v6->tm_isdst;
      if ( v7 >= 0 )
      {
        LODWORD(v7) = a1;
        lua_pushboolean(v7);
        lua_setfield(a1, -2, "isdst", v8);
      }
    }
    else
    {
      format[0] = 37;
      format[2] = 0;
      luaL_buffinit((int)a1, v15);
      while ( *(_BYTE *)v2 != 0 )
      {
        if ( *(_BYTE *)v2 == 37 && *(_BYTE *)(v2 + 1) != 0 )
        {
          format[1] = *(_BYTE *)(v2 + 1);
          v10 = j_strftime(s, 0xC8u, format, v6);
          ++v2;
          luaL_addlstring(v15, s, v10);
        }
        else
        {
          if ( v15[0] >= (unsigned int)&v16 )
            luaL_prepbuffer(v15);
          v9 = (_BYTE *)v15[0]++;
          *v9 = *(_BYTE *)v2;
        }
        ++v2;
      }
      luaL_pushresult(v15);
    }
  }
  else
  {
    lua_pushnil((int)a1);
  }
  return 1;
}


//======================================================================
// sub_2336C4
// address: 0x002336C4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_2336C4(int *a1, int a2)
{
  int v2; // r3

  v2 = 0;
  if ( a1[4] == a2 )
  {
    sub_231DBC(a1);
    return 1;
  }
  return v2;
}


//======================================================================
// sub_2336D8
// address: 0x002336D8   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_2336D8(_DWORD *a1, int a2)
{
  _DWORD *v2; // r5
  int v5; // r0
  int v6; // r7
  int result; // r0
  int *v8; // r3
  int v9; // r3

  v2 = (_DWORD *)a1[13];
  v5 = sub_22FCB4((int)v2);
  *(_DWORD *)a2 = v5;
  *(_DWORD *)(a2 + 8) = a1[12];
  *(_DWORD *)(a2 + 12) = a1;
  *(_DWORD *)(a2 + 16) = v2;
  a1[12] = a2;
  *(_DWORD *)(a2 + 28) = -1;
  *(_DWORD *)(a2 + 32) = -1;
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 36) = 0;
  *(_DWORD *)(a2 + 40) = 0;
  *(_DWORD *)(a2 + 44) = 0;
  *(_WORD *)(a2 + 48) = 0;
  *(_BYTE *)(a2 + 50) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(v5 + 32) = a1[16];
  v6 = v5;
  *(_BYTE *)(v5 + 75) = 2;
  result = sub_236960(v2, 0, 0);
  *(_DWORD *)(a2 + 4) = result;
  v8 = (int *)v2[2];
  *v8 = result;
  v8[2] = 5;
  if ( v2[7] - v2[2] <= 16 )
    result = sub_22F1D4(v2, 1);
  v9 = v2[2];
  v2[2] = v9 + 16;
  *(_DWORD *)(v9 + 16) = v6;
  *(_DWORD *)(v9 + 24) = 9;
  if ( v2[7] - v2[2] <= 16 )
    result = sub_22F1D4(v2, 1);
  v2[2] += 16;
  return result;
}


//======================================================================
// sub_233768
// address: 0x00233768   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_233768(int a1, int a2, int a3)
{
  int *v3; // r5
  int v4; // r6
  int v5; // r4
  int v6; // r3
  int v7; // r0
  int v9; // [sp+0h] [bp-8h]

  v9 = a1;
  v3 = *(int **)(a1 + 48);
  v4 = 0;
  v5 = v3[5];
  while ( 1 )
  {
    if ( v5 == 0 )
      sub_231658(a1, "no loop to break");
    if ( *(_BYTE *)(v5 + 10) != 0 )
      break;
    v6 = *(unsigned __int8 *)(v5 + 9);
    v5 = *(_DWORD *)v5;
    v4 |= v6;
  }
  if ( v4 != 0 )
    sub_22D114(*(int **)(a1 + 48), 35, *(unsigned __int8 *)(v5 + 8), 0, 0);
  v7 = sub_22D1C8(v3, a2, a3);
  sub_22CF84(v3, (int *)(v5 + 4), v7);
  return v9;
}


//======================================================================
// sub_2337B4
// address: 0x002337B4   size: 0x36 (54 bytes)
//======================================================================
void __fastcall __noreturn sub_2337B4(int *a1, int a2, const char *a3)
{
  int v5; // r2
  _DWORD *v6; // r0
  const char *v7; // r0

  v5 = *(_DWORD *)(*a1 + 60);
  v6 = (_DWORD *)a1[4];
  if ( v5 != 0 )
    v7 = (const char *)sub_23309C(v6, "function at line %d has more than %d %s", v5, a2, a3);
  else
    v7 = (const char *)sub_23309C(v6, "main function has more than %d %s", a2, a3);
  sub_2313D0(a1[3], v7, 0);
}


//======================================================================
// sub_2337F4
// address: 0x002337F4   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_2337F4(int a1, int a2, int a3)
{
  int v4; // r0
  __int16 *v5; // r5
  int v6; // r4
  int v7; // r6
  int i; // r3
  int v9; // r2
  __int16 v10; // r3
  int v12; // [sp+Ch] [bp-10h]
  int v14; // [sp+14h] [bp-8h]

  v4 = *(_DWORD *)(a1 + 48);
  v12 = v4;
  if ( *(unsigned __int8 *)(v4 + 50) + a3 > 199 )
    sub_2337B4((int *)v4, 200, "local variables");
  v5 = *(__int16 **)(a1 + 48);
  v6 = *(_DWORD *)v5;
  v14 = *(unsigned __int8 *)(v4 + 50) + a3;
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 56);
  if ( v5[24] >= v7 )
    *(_DWORD *)(v6 + 24) = sub_2323AC(
                             *(_DWORD **)(a1 + 52),
                             *(_DWORD *)(v6 + 24),
                             (int *)(v6 + 56),
                             0xCu,
                             0x7FFF,
                             (int)"too many local variables");
  for ( i = 12 * v7; ; i += 12 )
  {
    v9 = *(_DWORD *)(v6 + 24);
    if ( v7 >= *(_DWORD *)(v6 + 56) )
      break;
    *(_DWORD *)(v9 + i) = 0;
    ++v7;
  }
  *(_DWORD *)(v9 + 12 * v5[24]) = a2;
  if ( *(unsigned __int8 *)(a2 + 5) << 30 != 0 && (*(_BYTE *)(v6 + 5) & 4) != 0 )
    sub_230762(*(_DWORD *)(a1 + 52), v6, a2);
  v10 = v5[24];
  v5[24] = v10 + 1;
  *(_WORD *)(v12 + 2 * (v14 + 84) + 4) = v10;
  return v12;
}


//======================================================================
// sub_2338A0
// address: 0x002338A0   size: 0x20 (32 bytes)
//======================================================================
void __fastcall __noreturn sub_2338A0(int a1, int a2)
{
  _DWORD *v3; // r5
  char *v4; // r0
  const char *v5; // r0

  v3 = *(_DWORD **)(a1 + 52);
  v4 = sub_23137C(a1, a2);
  v5 = (const char *)sub_23309C(v3, "'%s' expected", v4);
  sub_231658(a1, v5);
}


//======================================================================
// sub_2338C4
// address: 0x002338C4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_2338C4(int result, int a2)
{
  int v2; // r6

  *(_BYTE *)(result + 50) += a2;
  while ( a2 != 0 )
  {
    v2 = *(unsigned __int16 *)(result + 2 * (*(unsigned __int8 *)(result + 50) - a2-- + 84) + 4);
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)result + 24) + 12 * v2 + 4) = *(_DWORD *)(result + 24);
  }
  return result;
}


//======================================================================
// sub_2338F8
// address: 0x002338F8   size: 0x146 (326 bytes)
//======================================================================
__int64 __fastcall sub_2338F8(_DWORD *a1)
{
  int *v1; // r5
  _DWORD *v3; // r6
  int v4; // r4
  _BYTE *v5; // r3
  int v6; // r2
  int v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3
  unsigned int v14; // r3
  __int64 v16; // [sp+0h] [bp-Ch]

  LODWORD(v16) = a1;
  v1 = (int *)a1[12];
  v3 = (_DWORD *)a1[13];
  v4 = *v1;
  v5 = (char *)v1 + 50;
  while ( 1 )
  {
    v6 = (unsigned __int8)*v5;
    if ( *v5 == 0 )
      break;
    v7 = (unsigned __int8)(v6 - 1);
    v8 = *(_DWORD *)(*v1 + 24);
    *v5 = v7;
    *(_DWORD *)(12 * *((unsigned __int16 *)v1 + v7 + 86) + v8 + 8) = v1[6];
  }
  sub_22D1A0(v1, (unsigned __int8)*v5, v6);
  v9 = v1[6];
  if ( (unsigned int)(v9 + 1) > 0x3FFFFFFF )
    sub_232368(v3);
  *(_DWORD *)(v4 + 12) = sub_23237C((int)v3, *(_DWORD *)(v4 + 12), 4 * *(_DWORD *)(v4 + 44), 4 * v9);
  *(_DWORD *)(v4 + 44) = v1[6];
  v10 = v1[6];
  if ( (unsigned int)(v10 + 1) > 0x3FFFFFFF )
    sub_232368(v3);
  *(_DWORD *)(v4 + 20) = sub_23237C((int)v3, *(_DWORD *)(v4 + 20), 4 * *(_DWORD *)(v4 + 48), 4 * v10);
  *(_DWORD *)(v4 + 48) = v1[6];
  v11 = v1[10];
  if ( (unsigned int)(v11 + 1) > 0xFFFFFFF )
    sub_232368(v3);
  *(_DWORD *)(v4 + 8) = sub_23237C((int)v3, *(_DWORD *)(v4 + 8), 16 * *(_DWORD *)(v4 + 40), 16 * v11);
  *(_DWORD *)(v4 + 40) = v1[10];
  v12 = v1[11];
  if ( (unsigned int)(v12 + 1) > 0x3FFFFFFF )
    sub_232368(v3);
  *(_DWORD *)(v4 + 16) = sub_23237C((int)v3, *(_DWORD *)(v4 + 16), 4 * *(_DWORD *)(v4 + 52), 4 * v12);
  *(_DWORD *)(v4 + 52) = v1[11];
  v13 = *((__int16 *)v1 + 24);
  if ( (unsigned int)(v13 + 1) > 0x15555555 )
    sub_232368(v3);
  *(_DWORD *)(v4 + 24) = sub_23237C((int)v3, *(_DWORD *)(v4 + 24), 12 * *(_DWORD *)(v4 + 56), 12 * v13);
  *(_DWORD *)(v4 + 56) = *((__int16 *)v1 + 24);
  HIDWORD(v16) = v4 + 72;
  *(_DWORD *)(v4 + 28) = sub_23237C(
                           (int)v3,
                           *(_DWORD *)(v4 + 28),
                           4 * *(_DWORD *)(v4 + 36),
                           4 * *(unsigned __int8 *)(v4 + 72));
  *(_DWORD *)(v4 + 36) = (unsigned __int8)*(_BYTE *)HIDWORD(v16);
  v14 = a1[4] - 285;
  a1[12] = v1[2];
  if ( v14 <= 1 )
    sub_2316D4((int)a1, a1[6] + 16, *(_DWORD *)(a1[6] + 12));
  v3[2] -= 32;
  return v16;
}


//======================================================================
// sub_233A4C
// address: 0x00233A4C   size: 0x14E (334 bytes)
//======================================================================
int __fastcall sub_233A4C(int *a1, int a2, _DWORD *a3, int a4)
{
  int result; // r0
  int i; // r2
  int v8; // r6
  int *v9; // r2
  int v10; // r1
  int k; // r3
  _BYTE *v12; // r7
  int m; // r3
  int v14; // r2
  int j; // r3
  int v17; // [sp+Ch] [bp-8h]

  if ( a1 != nullptr )
  {
    for ( i = *((unsigned __int8 *)a1 + 50) - 1; i != -1; --i )
    {
      if ( a2 == *(_DWORD *)(12 * *((unsigned __int16 *)a1 + i + 86) + *(_DWORD *)(*a1 + 24)) )
      {
        result = 6;
        a3[4] = -1;
        a3[5] = -1;
        *a3 = 6;
        a3[2] = i;
        if ( a4 == 0 )
        {
          for ( j = a1[5]; j != 0; j = *(_DWORD *)j )
          {
            if ( *(unsigned __int8 *)(j + 8) <= i )
            {
              *(_BYTE *)(j + 9) = 1;
              return 6;
            }
          }
          return 6;
        }
        return result;
      }
    }
    result = sub_233A4C(a1[2], a2, a3, 0);
    if ( result != 8 )
    {
      v8 = *a1;
      v9 = a1;
      v10 = *(unsigned __int8 *)(*a1 + 72);
      v17 = *(_DWORD *)(*a1 + 36);
      for ( k = 0; k < v10; ++k )
      {
        if ( *((unsigned __int8 *)v9 + 51) == *a3 && *((unsigned __int8 *)v9 + 52) == a3[2] )
          goto LABEL_24;
        v9 = (int *)((char *)v9 + 2);
      }
      if ( v10 == 60 )
        sub_2337B4(a1, 60, "upvalues");
      v12 = (_BYTE *)(v8 + 72);
      if ( *(unsigned __int8 *)(v8 + 72) >= *(int *)(v8 + 36) )
        *(_DWORD *)(v8 + 28) = sub_2323AC(
                                 (_DWORD *)a1[4],
                                 *(_DWORD *)(v8 + 28),
                                 (int *)(v8 + 36),
                                 4u,
                                 2147483645,
                                 (int)&unk_3FB8EA);
      for ( m = 4 * v17; ; m += 4 )
      {
        v14 = *(_DWORD *)(v8 + 28);
        if ( v17 >= *(_DWORD *)(v8 + 36) )
          break;
        *(_DWORD *)(v14 + m) = 0;
        ++v17;
      }
      *(_DWORD *)(v14 + 4 * (unsigned __int8)*v12) = a2;
      if ( *(unsigned __int8 *)(a2 + 5) << 30 != 0 && (*(_BYTE *)(v8 + 5) & 4) != 0 )
        sub_230762(a1[4], v8, a2);
      *((_BYTE *)a1 + 2 * (unsigned __int8)*v12 + 51) = *a3;
      *((_BYTE *)a1 + 2 * (unsigned __int8)*v12 + 52) = a3[2];
      k = (unsigned __int8)*v12;
      *v12 = k + 1;
LABEL_24:
      a3[2] = k;
      *a3 = 7;
      return 7;
    }
  }
  else
  {
    a3[4] = -1;
    a3[5] = -1;
    *a3 = 8;
    a3[2] = 255;
    return 8;
  }
  return result;
}


//======================================================================
// sub_233BA8
// address: 0x00233BA8   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_233BA8(int result)
{
  int v1; // r2
  unsigned int v2; // r3

  v1 = *(_DWORD *)(result + 52);
  v2 = (unsigned __int16)(*(_WORD *)(v1 + 52) + 1);
  *(_WORD *)(v1 + 52) = v2;
  if ( v2 > 0xC8 )
    sub_2313D0(result, "chunk has too many syntax levels", 0);
  return result;
}


//======================================================================
// sub_233BCC
// address: 0x00233BCC   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_233BCC(int *a1, int a2, int a3, int a4)
{
  int result; // r0
  char *v9; // r5
  char *v10; // r0
  const char *v11; // r0
  _DWORD *v12; // [sp+Ch] [bp-8h]

  result = sub_2336C4(a1, a2);
  if ( result == 0 )
  {
    if ( a4 == a1[1] )
      sub_2338A0((int)a1, a2);
    v12 = (_DWORD *)a1[13];
    v9 = sub_23137C((int)a1, a2);
    v10 = sub_23137C((int)a1, a3);
    v11 = (const char *)sub_23309C(v12, "'%s' expected (to close '%s' at line %d)", v9, v10, a4);
    sub_231658((int)a1, v11);
  }
  return result;
}


//======================================================================
// sub_233C28
// address: 0x00233C28   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_233C28(__int64 a1, int a2, _DWORD *a3)
{
  int v3; // r5
  _DWORD *v4; // r4
  int v5; // r5
  unsigned int v6; // r6

  v3 = HIDWORD(a1) - a2;
  v4 = (_DWORD *)a1;
  if ( (unsigned int)(*a3 - 13) > 1 )
  {
    if ( *a3 != 0 )
    {
      HIDWORD(a1) = a3;
      LODWORD(a1) = sub_22D3C4(a1);
    }
    if ( v3 > 0 )
    {
      v6 = v4[9];
      sub_22D00C(v4, v3);
      LODWORD(a1) = sub_22D130(__SPAIR64__(v6, (unsigned int)v4), v3);
    }
  }
  else
  {
    v5 = (v3 + 1) & (~(v3 + 1) >> 31);
    LODWORD(a1) = sub_22D048((_DWORD *)a1, a3, v5);
    if ( v5 > 1 )
      LODWORD(a1) = sub_22D00C(v4, v5 - 1);
  }
  return a1;
}


//======================================================================
// sub_233C7A
// address: 0x00233C7A   size: 0x16 (22 bytes)
//======================================================================
void *__fastcall sub_233C7A(int *a1, int a2)
{
  if ( a1[4] != a2 )
    sub_2338A0((int)a1, a2);
  return sub_231DBC(a1);
}


//======================================================================
// sub_233C90
// address: 0x00233C90   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_233C90(int *a1)
{
  int v1; // r5

  if ( a1[4] != 285 )
    sub_2338A0((int)a1, 285);
  v1 = a1[6];
  sub_231DBC(a1);
  return v1;
}


//======================================================================
// sub_233CAE
// address: 0x00233CAE   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_233CAE(int a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r2
  int v6; // r3
  int result; // r0

  v4 = sub_233C90((int *)a1);
  result = sub_22D01E(*(_DWORD **)(a1 + 48), v4, v5, v6);
  a2[4] = -1;
  a2[5] = -1;
  *a2 = 4;
  a2[2] = result;
  return result;
}


//======================================================================
// sub_233CD0
// address: 0x00233CD0   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_233CD0(__int64 a1)
{
  unsigned int v1; // r6
  __int64 v2; // r4
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  v2 = a1;
  LODWORD(a1) = *(_DWORD *)(a1 + 48);
  v1 = a1;
  sub_22D3EC(a1);
  sub_231DBC((int *)v2);
  sub_233CAE(v2, v4);
  return sub_22D4C6(__SPAIR64__(HIDWORD(v2), v1), (int)v4);
}


//======================================================================
// sub_233CFC
// address: 0x00233CFC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_233CFC(int *a1, _DWORD *a2)
{
  int v4; // r0
  int *v5; // r6
  int v6; // r5
  int result; // r0
  int v8; // r2
  int v9; // r3

  v4 = sub_233C90(a1);
  v5 = (int *)a1[12];
  v6 = v4;
  result = sub_233A4C(v5, v4, a2, 1);
  if ( result == 8 )
  {
    result = sub_22D01E(v5, v6, v8, v9);
    a2[2] = result;
  }
  return result;
}


//======================================================================
// sub_233D26
// address: 0x00233D26   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_233D26(int a1)
{
  int v1; // r5
  int v3; // r3
  _DWORD *v4; // r3
  int v5; // r6
  _BYTE *v6; // r1
  int v7; // r2
  int v8; // r2
  int v9; // r0
  int v11; // [sp+0h] [bp-Ch]

  v11 = a1;
  v1 = *(_DWORD *)(a1 + 20);
  v3 = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)v1;
  v4 = *(_DWORD **)(v3 + 48);
  v5 = *(unsigned __int8 *)(v1 + 8);
  v6 = (char *)v4 + 50;
  while ( 1 )
  {
    v7 = (unsigned __int8)*v6;
    if ( v7 <= v5 )
      break;
    v8 = (unsigned __int8)(v7 - 1);
    v9 = *(_DWORD *)(*v4 + 24);
    *v6 = v8;
    *(_DWORD *)(12 * *((unsigned __int16 *)v4 + v8 + 86) + v9 + 8) = v4[6];
  }
  if ( *(_BYTE *)(v1 + 9) != 0 )
    sub_22D114((int *)a1, 35, *(unsigned __int8 *)(v1 + 8), 0, 0);
  *(_DWORD *)(a1 + 36) = *(unsigned __int8 *)(a1 + 50);
  sub_22CFB6((int *)a1, *(_DWORD *)(v1 + 4));
  return v11;
}


//======================================================================
// sub_233D88
// address: 0x00233D88   size: 0x232 (562 bytes)
//======================================================================
int __fastcall sub_233D88(int a1, int *a2, unsigned int a3)
{
  int v5; // r3
  __int64 v6; // r0
  int v7; // r3
  int v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r6
  int *v12; // r0
  int v13; // r3
  int v14; // r7
  int v15; // r2
  __int64 v16; // r0
  int v17; // r6
  int v19; // [sp+8h] [bp-24h]
  _DWORD v21[7]; // [sp+10h] [bp-1Ch] BYREF

  sub_233BA8(a1);
  v5 = *(_DWORD *)(a1 + 16);
  switch ( v5 )
  {
    case 45:
      v17 = 0;
      goto LABEL_7;
    case 270:
      v17 = 1;
LABEL_7:
      sub_231DBC((int *)a1);
      sub_233D88(a1, a2, 8);
      LODWORD(v6) = *(_DWORD *)(a1 + 48);
      HIDWORD(v6) = v17;
      sub_22D948(v6, a2);
      goto LABEL_32;
    case 35:
      v17 = 2;
      goto LABEL_7;
    case 269:
      a2[4] = -1;
      a2[5] = -1;
      v7 = 1;
      goto LABEL_24;
    default:
      break;
  }
  if ( v5 <= 269 )
  {
    if ( v5 != 263 )
    {
      if ( v5 == 265 )
      {
        sub_231DBC((int *)a1);
        sub_234B98(a1, a2, 0, *(_DWORD *)(a1 + 4));
        goto LABEL_32;
      }
      if ( v5 == 123 )
      {
        sub_2340D4(a1, a2);
        goto LABEL_32;
      }
      goto LABEL_30;
    }
    a2[4] = -1;
    a2[5] = -1;
    v7 = 3;
    goto LABEL_24;
  }
  if ( v5 == 279 )
  {
    v11 = *(_DWORD *)(a1 + 48);
    if ( *(_BYTE *)(*(_DWORD *)v11 + 74) == 0 )
      sub_231658(a1, "cannot use '...' outside a vararg function");
    v12 = *(int **)(a1 + 48);
    *(_BYTE *)(*(_DWORD *)v11 + 74) &= ~4u;
    v8 = sub_22D114(v12, 37, 0, 1, 0);
    a2[4] = -1;
    a2[5] = -1;
    v9 = 14;
    goto LABEL_28;
  }
  if ( v5 <= 279 )
  {
    if ( v5 == 275 )
    {
      a2[4] = -1;
      a2[5] = -1;
      v7 = 2;
LABEL_24:
      *a2 = v7;
      a2[2] = 0;
      goto LABEL_31;
    }
LABEL_30:
    sub_23436C(a1, a2);
    goto LABEL_32;
  }
  if ( v5 != 284 )
  {
    if ( v5 != 286 )
      goto LABEL_30;
    v8 = sub_22D01E(*(_DWORD **)(a1 + 48), *(_DWORD *)(a1 + 24), 286, 286);
    a2[4] = -1;
    a2[5] = -1;
    v9 = 4;
LABEL_28:
    *a2 = v9;
    a2[2] = v8;
    goto LABEL_31;
  }
  a2[4] = -1;
  a2[5] = -1;
  *a2 = 5;
  a2[2] = 0;
  v10 = *(_DWORD *)(a1 + 28);
  a2[2] = *(_DWORD *)(a1 + 24);
  a2[3] = v10;
LABEL_31:
  sub_231DBC((int *)a1);
LABEL_32:
  v13 = *(_DWORD *)(a1 + 16);
  if ( v13 == 94 )
  {
    v14 = 5;
    goto LABEL_64;
  }
  if ( v13 > 94 )
  {
    if ( v13 == 280 )
    {
      v14 = 8;
      goto LABEL_64;
    }
    if ( v13 > 280 )
    {
      if ( v13 == 282 )
      {
        v14 = 10;
        goto LABEL_64;
      }
      v14 = 12;
      if ( v13 < 282 )
        goto LABEL_64;
      v14 = 7;
      v15 = 28;
    }
    else
    {
      if ( v13 == 271 )
      {
        v14 = 14;
        goto LABEL_64;
      }
      v14 = 6;
      if ( v13 == 278 )
        goto LABEL_64;
      v14 = 13;
      v15 = 2;
    }
    if ( v13 == v15 + 255 )
      goto LABEL_64;
    goto LABEL_60;
  }
  if ( v13 == 45 )
  {
    v14 = 1;
    goto LABEL_64;
  }
  if ( v13 > 45 )
  {
    if ( v13 == 60 )
    {
      v14 = 9;
      goto LABEL_64;
    }
    v14 = 11;
    if ( v13 == 62 )
      goto LABEL_64;
    v14 = 3;
    if ( v13 == 47 )
      goto LABEL_64;
LABEL_60:
    v14 = 15;
    goto LABEL_64;
  }
  if ( v13 == 42 )
  {
    v14 = 2;
    goto LABEL_64;
  }
  v14 = 0;
  if ( v13 != 43 )
  {
    v14 = 4;
    if ( v13 != 37 )
      goto LABEL_60;
  }
LABEL_64:
  while ( v14 != 15 && byte_444A40[2 * v14] > a3 )
  {
    sub_231DBC((int *)a1);
    sub_22D8B6(*(int **)(a1 + 48), v14, a2);
    v16 = __PAIR64__(v14, sub_233D88(a1, v21, byte_444A40[2 * v14 + 1]));
    v19 = v16;
    LODWORD(v16) = *(_DWORD *)(a1 + 48);
    sub_22D696(v16, a2, v21);
    v14 = v19;
  }
  --*(_WORD *)(*(_DWORD *)(a1 + 52) + 52);
  return v14;
}


//======================================================================
// sub_233FC4
// address: 0x00233FC4   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_233FC4(int a1, int *a2)
{
  return sub_233D88(a1, a2, 0);
}


//======================================================================
// sub_233FCE
// address: 0x00233FCE   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_233FCE(int a1)
{
  __int64 v2; // r0
  int v4[7]; // [sp+0h] [bp-1Ch] BYREF

  sub_233FC4(a1, v4);
  if ( v4[0] == 1 )
    v4[0] = 3;
  LODWORD(v2) = *(_DWORD *)(a1 + 48);
  HIDWORD(v2) = v4;
  sub_22D85E(v2);
  return v4[5];
}


//======================================================================
// sub_233FF4
// address: 0x00233FF4   size: 0x24 (36 bytes)
//======================================================================
void *__fastcall sub_233FF4(int *a1, int *a2)
{
  __int64 v4; // r0

  sub_231DBC(a1);
  sub_233FC4((int)a1, a2);
  HIDWORD(v4) = a2;
  LODWORD(v4) = a1[12];
  sub_22D428(v4);
  return sub_233C7A(a1, 93);
}


//======================================================================
// sub_234018
// address: 0x00234018   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_234018(int *a1, int a2)
{
  int *v2; // r4
  int v5; // r7
  int v6; // r6
  int v7; // r0
  int result; // r0
  int v9; // [sp+Ch] [bp-4h]
  int v10[6]; // [sp+10h] [bp+0h] BYREF
  int v11[7]; // [sp+28h] [bp+18h] BYREF

  v2 = (int *)a1[12];
  v9 = v2[9];
  if ( a1[4] == 285 )
  {
    if ( *(int *)(a2 + 28) > 2147483645 )
      sub_2337B4(v2, 2147483645, "items in a constructor");
    sub_233CAE((int)a1, v10);
  }
  else
  {
    sub_233FF4(a1, v10);
  }
  ++*(_DWORD *)(a2 + 28);
  sub_233C7A(a1, 61);
  v5 = sub_22D43E(__SPAIR64__(v10, (unsigned int)v2));
  sub_233FC4((int)a1, v11);
  v6 = *(_DWORD *)(*(_DWORD *)(a2 + 24) + 8);
  v7 = sub_22D43E(__SPAIR64__(v11, (unsigned int)v2));
  result = sub_22D114(v2, 9, v6, v5, v7);
  v2[9] = v9;
  return result;
}


//======================================================================
// sub_2340A0
// address: 0x002340A0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_2340A0(int a1, int *a2)
{
  int result; // r0

  result = sub_233FC4(a1, a2);
  if ( a2[8] > 2147483645 )
    sub_2337B4(*(int **)(a1 + 48), 2147483645, "items in a constructor");
  ++a2[8];
  ++a2[9];
  return result;
}


//======================================================================
// sub_2340D4
// address: 0x002340D4   size: 0x16A (362 bytes)
//======================================================================
unsigned int __fastcall sub_2340D4(int *a1, _DWORD *a2)
{
  __int64 v4; // r0
  int v5; // r3
  int *v6; // r0
  unsigned int *v7; // r6
  unsigned int v8; // r7
  unsigned int *v9; // r4
  unsigned int v10; // r6
  unsigned int result; // r0
  int *v12; // [sp+Ch] [bp-38h]
  int v13; // [sp+10h] [bp-34h]
  int v14; // [sp+14h] [bp-30h]
  int v15[6]; // [sp+18h] [bp-2Ch] BYREF
  _DWORD *v16; // [sp+30h] [bp-14h]
  unsigned int v17; // [sp+34h] [bp-10h]
  int v18; // [sp+38h] [bp-Ch]
  int v19; // [sp+3Ch] [bp-8h]

  v12 = (int *)a1[12];
  v13 = a1[1];
  v4 = __PAIR64__((unsigned int)a2, sub_22D114(v12, 10, 0, 0, 0));
  a2[4] = -1;
  a2[5] = -1;
  *a2 = 11;
  a2[2] = v4;
  v14 = v4;
  LODWORD(v4) = a1[12];
  v19 = 0;
  v17 = 0;
  v18 = 0;
  v16 = a2;
  v15[4] = -1;
  v15[5] = -1;
  v15[0] = 0;
  v15[2] = 0;
  sub_22D3C4(v4);
  sub_233C7A(a1, 123);
  while ( a1[4] != 125 )
  {
    if ( v15[0] != 0 )
    {
      sub_22D3C4(__SPAIR64__(v15, (unsigned int)v12));
      v15[0] = 0;
      if ( v19 == 50 )
      {
        sub_22DAA0(v12, v16[2], v18, 50);
        v19 = 0;
      }
    }
    v5 = a1[4];
    if ( v5 == 91 )
    {
      v6 = a1;
LABEL_13:
      sub_234018(v6, (int)v15);
      goto LABEL_15;
    }
    v6 = a1;
    if ( v5 == 285 )
    {
      sub_231DEA((int)a1);
      v6 = a1;
      if ( a1[8] == 61 )
        goto LABEL_13;
    }
    sub_2340A0((int)v6, v15);
LABEL_15:
    if ( sub_2336C4(a1, 44) == 0 && sub_2336C4(a1, 59) == 0 )
      break;
  }
  sub_233BCC(a1, 125, 123, v13);
  if ( v19 != 0 )
  {
    if ( (unsigned int)(v15[0] - 13) > 1 )
    {
      if ( v15[0] != 0 )
        sub_22D3C4(__SPAIR64__(v15, (unsigned int)v12));
      sub_22DAA0(v12, v16[2], v18, v19);
    }
    else
    {
      sub_22D048(v12, v15, -1);
      sub_22DAA0(v12, v16[2], v18--, -1);
    }
  }
  v7 = (unsigned int *)(*(_DWORD *)(*v12 + 12) + 4 * v14);
  v8 = *v7 << 9;
  *v7 = (v8 >> 9) | (sub_232E0C(v18) << 23);
  v9 = (unsigned int *)(*(_DWORD *)(*v12 + 12) + 4 * v14);
  v10 = *v9 & 0xFF803FFF;
  result = (sub_232E0C(v17) << 14) & 0x7FC000;
  *v9 = v10 | result;
  return result;
}


//======================================================================
// sub_234248
// address: 0x00234248   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_234248(int *a1, int *a2)
{
  int v4; // r5
  __int64 v5; // r0

  sub_233FC4((int)a1, a2);
  v4 = 1;
  while ( sub_2336C4(a1, 44) != 0 )
  {
    LODWORD(v5) = a1[12];
    HIDWORD(v5) = a2;
    sub_22D3C4(v5);
    sub_233FC4((int)a1, a2);
    ++v4;
  }
  return v4;
}


//======================================================================
// sub_234278
// address: 0x00234278   size: 0xEA (234 bytes)
//======================================================================
int __fastcall sub_234278(int *a1, _DWORD *a2)
{
  int v2; // r3
  int *v5; // r5
  int v6; // r7
  int v7; // r0
  int v8; // r3
  int v9; // r0
  int result; // r0
  int v11; // [sp+Ch] [bp-20h]
  int v12[7]; // [sp+10h] [bp-1Ch] BYREF

  v2 = a1[4];
  v5 = (int *)a1[12];
  v6 = a1[1];
  switch ( v2 )
  {
    case 123:
      sub_2340D4(a1, v12);
      break;
    case 286:
      v7 = sub_22D01E((_DWORD *)a1[12], a1[6], 286, 286);
      v12[4] = -1;
      v12[5] = -1;
      v12[2] = v7;
      v12[0] = 4;
      sub_231DBC(a1);
      break;
    case 40:
      if ( v6 != a1[2] )
        sub_231658((int)a1, "ambiguous syntax (function call x new statement)");
      sub_231DBC(a1);
      if ( a1[4] == 41 )
      {
        v12[0] = 0;
      }
      else
      {
        sub_234248(a1, v12);
        sub_22D048(v5, v12, -1);
      }
      sub_233BCC(a1, 41, 40, v6);
      break;
    default:
      sub_231658((int)a1, "function arguments expected");
  }
  v11 = a2[2];
  if ( (unsigned int)(v12[0] - 13) <= 1 )
  {
    v8 = -1;
  }
  else
  {
    if ( v12[0] != 0 )
      sub_22D3C4(__SPAIR64__(v12, (unsigned int)v5));
    v8 = ~v11 + v5[9];
  }
  v9 = sub_22D114(v5, 28, v11, v8 + 1, 2);
  *a2 = 13;
  a2[2] = v9;
  a2[4] = -1;
  a2[5] = -1;
  result = sub_22D100(v5, v6);
  v5[9] = v11 + 1;
  return result;
}


//======================================================================
// sub_23436C
// address: 0x0023436C   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall sub_23436C(__int64 a1)
{
  int v1; // r7
  unsigned int v3; // r6
  int result; // r0
  __int64 v5; // r0
  int v6; // r3
  int v7; // [sp+4h] [bp-20h]
  int v8[7]; // [sp+8h] [bp-1Ch] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 48);
  if ( v1 == 40 )
  {
    v7 = *(_DWORD *)(a1 + 4);
    sub_231DBC((int *)a1);
    sub_233FC4(a1, (int *)HIDWORD(a1));
    sub_233BCC((int *)a1, 41, 40, v7);
    LODWORD(v5) = *(_DWORD *)(a1 + 48);
    HIDWORD(v5) = HIDWORD(a1);
    result = sub_22D1F4(v5);
  }
  else
  {
    if ( v1 != 285 )
      sub_231658(a1, "unexpected symbol");
    result = sub_233CFC((int *)a1, (_DWORD *)HIDWORD(a1));
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 16);
      if ( v6 == 58 )
      {
        sub_231DBC((int *)a1);
        sub_233CAE(a1, v8);
        sub_22D7A8(__SPAIR64__(HIDWORD(a1), v3), v8);
        goto LABEL_17;
      }
      if ( v6 > 58 )
        break;
      if ( v6 == 40 )
      {
LABEL_16:
        sub_22D3C4(__SPAIR64__(HIDWORD(a1), v3));
LABEL_17:
        result = sub_234278((int *)a1, (_DWORD *)HIDWORD(a1));
      }
      else
      {
        if ( v6 != 46 )
          return result;
        result = sub_233CD0(a1);
      }
    }
    if ( v6 == 123 || v6 == 286 )
      goto LABEL_16;
    if ( v6 != 91 )
      return result;
    sub_22D3EC(__SPAIR64__(HIDWORD(a1), v3));
    sub_233FF4((int *)a1, v8);
    result = sub_22D4C6(__SPAIR64__(HIDWORD(a1), v3), (int)v8);
  }
}


//======================================================================
// sub_234438
// address: 0x00234438   size: 0x10A (266 bytes)
//======================================================================
__int64 __fastcall sub_234438(int a1, int a2, int a3)
{
  int *v5; // r7
  _DWORD *v6; // r1
  int v7; // r3
  int v8; // r12
  int v9; // r1
  int v10; // r7
  __int64 v11; // r0
  __int64 v12; // r0
  int v13; // r2
  int v16[2]; // [sp+10h] [bp-24h] BYREF
  int v17; // [sp+18h] [bp-1Ch] BYREF
  int v18; // [sp+20h] [bp-14h]
  int v19; // [sp+24h] [bp-10h]

  if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 6) > 3 )
    sub_231658(a1, "syntax error");
  if ( sub_2336C4((int *)a1, 44) != 0 )
  {
    v16[0] = a2;
    sub_23436C(__SPAIR64__(&v17, a1));
    if ( v17 == 6 )
    {
      v5 = *(int **)(a1 + 48);
      v6 = (_DWORD *)a2;
      v7 = 0;
      v8 = v5[9];
      do
      {
        if ( v6[2] == 9 )
        {
          if ( v6[4] == v18 )
          {
            v6[4] = v8;
            v7 = 1;
          }
          if ( v6[5] == v18 )
          {
            v6[5] = v8;
            v7 = 1;
          }
        }
        v6 = (_DWORD *)*v6;
      }
      while ( v6 != nullptr );
      if ( v7 != 0 )
      {
        sub_22D114(v5, 0, v5[9], v18, 0);
        sub_22D00C(v5, 1);
      }
    }
    v9 = 200 - *(unsigned __int16 *)(*(_DWORD *)(a1 + 52) + 52);
    if ( a3 > v9 )
      sub_2337B4(*(int **)(a1 + 48), v9, "variables in assignment");
    sub_234438(a1, v16, a3 + 1);
LABEL_21:
    LODWORD(v12) = *(_DWORD *)(a1 + 48);
    v13 = *(_DWORD *)(v12 + 36);
    v18 = -1;
    v19 = -1;
    v16[0] = 12;
    v17 = v13 - 1;
    goto LABEL_22;
  }
  sub_233C7A((int *)a1, 61);
  v10 = sub_234248((int *)a1, v16);
  LODWORD(v11) = *(_DWORD *)(a1 + 48);
  if ( v10 != a3 )
  {
    HIDWORD(v11) = a3;
    sub_233C28(v11, v10, v16);
    if ( v10 > a3 )
      *(_DWORD *)(*(_DWORD *)(a1 + 48) + 36) += a3 - v10;
    goto LABEL_21;
  }
  sub_22D0BC(v11, v16);
  LODWORD(v12) = *(_DWORD *)(a1 + 48);
LABEL_22:
  HIDWORD(v12) = a2 + 8;
  return sub_22DA28(v12, v16);
}


//======================================================================
// sub_23454C
// address: 0x0023454C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_23454C(int a1)
{
  __int64 v2; // r0
  int v3; // r6
  int v5[6]; // [sp+0h] [bp-18h] BYREF

  sub_233FC4(a1, v5);
  LODWORD(v2) = *(_DWORD *)(a1 + 48);
  HIDWORD(v2) = v5;
  v3 = v5[0];
  sub_22D3C4(v2);
  return v3;
}


//======================================================================
// sub_234568
// address: 0x00234568   size: 0x624 (1572 bytes)
//======================================================================
int __fastcall sub_234568(int a1)
{
  int result; // r0
  int v3; // r5
  unsigned int *v4; // r3
  int v5; // r5
  int *v6; // r4
  int v7; // r0
  int v8; // r1
  int v9; // r3
  int v10; // r5
  int v11; // r0
  int v12; // r0
  int *v13; // r0
  int v14; // r2
  int v15; // r4
  int v16; // r0
  char v17; // r2
  int v18; // r6
  int v19; // r1
  int v20; // r2
  int v21; // r0
  int v22; // r5
  int v23; // r0
  int v24; // r6
  int *v25; // r4
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r1
  int v30; // r5
  int v31; // r0
  int v32; // r0
  int v33; // r1
  int v34; // r2
  _DWORD *v35; // r5
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r4
  int v40; // r0
  int v41; // r2
  __int64 v42; // r0
  int v43; // r0
  int v44; // r4
  int v45; // r6
  char v46; // r1
  int v47; // r5
  int v48; // r1
  int v49; // r2
  int *v50; // r0
  int v51; // r1
  int *v52; // r5
  int v53; // r1
  int v54; // r2
  int v55; // r3
  int v56; // r2
  __int64 v57; // r0
  unsigned int v58; // r4
  int v59; // r0
  int v60; // r2
  int i; // r5
  int v62; // r0
  int v63; // r4
  int v64; // r2
  __int64 v65; // r0
  unsigned int v66; // r5
  int v67; // r3
  int v68; // r4
  unsigned int *v69; // r3
  signed int v70; // r1
  int v71; // r1
  int v72; // r2
  int v73; // [sp+Ch] [bp-50h]
  int v74; // [sp+Ch] [bp-50h]
  int v75; // [sp+10h] [bp-4Ch]
  int v76; // [sp+10h] [bp-4Ch]
  int v77; // [sp+14h] [bp-48h]
  int v78; // [sp+18h] [bp-44h]
  int v79; // [sp+18h] [bp-44h]
  int v80; // [sp+1Ch] [bp-40h]
  int v81; // [sp+20h] [bp-3Ch] BYREF
  int v82; // [sp+24h] [bp-38h]
  int v83; // [sp+28h] [bp-34h]
  int v84; // [sp+30h] [bp-2Ch]
  int v85; // [sp+34h] [bp-28h]
  int v86; // [sp+38h] [bp-24h] BYREF
  int v87; // [sp+3Ch] [bp-20h]
  _DWORD v88[7]; // [sp+40h] [bp-1Ch] BYREF

  sub_233BA8(a1);
  while ( 2 )
  {
    result = *(_DWORD *)(a1 + 16);
    if ( (unsigned int)(result - 260) > 0x1B || ((1 << (result - 4)) & 0x8010007) == 0 )
    {
      v73 = *(_DWORD *)(a1 + 4);
      switch ( result )
      {
        case 258:
          sub_231DBC((int *)a1);
          sub_233768(a1, v71, v72);
          goto LABEL_71;
        case 259:
          sub_231DBC((int *)a1);
          sub_234D80(a1);
          v13 = (int *)a1;
          v14 = 259;
          goto LABEL_22;
        case 264:
          v22 = *(_DWORD *)(a1 + 48);
          v82 = -1;
          v76 = v22;
          LOBYTE(v83) = *(_BYTE *)(v22 + 50);
          *(_WORD *)((char *)&v83 + 1) = 256;
          v81 = *(_DWORD *)(v22 + 20);
          *(_DWORD *)(v22 + 20) = &v81;
          sub_231DBC((int *)a1);
          v23 = sub_233C90((int *)a1);
          v24 = *(_DWORD *)(a1 + 16);
          v77 = v23;
          if ( v24 == 61 )
          {
            v25 = *(int **)(a1 + 48);
            v78 = v25[9];
            v26 = sub_2316D4(a1, (int)"(for index)", 0xBu);
            sub_2337F4(a1, v26, 0);
            v27 = sub_2316D4(a1, (int)"(for limit)", 0xBu);
            sub_2337F4(a1, v27, 1);
            v28 = sub_2316D4(a1, (int)"(for step)", 0xAu);
            sub_2337F4(a1, v28, 2);
            sub_2337F4(a1, v77, 3);
            sub_233C7A((int *)a1, 61);
            sub_23454C(a1);
            sub_233C7A((int *)a1, 44);
            sub_23454C(a1);
            if ( sub_2336C4((int *)a1, 44) != 0 )
            {
              sub_23454C(a1);
            }
            else
            {
              v30 = v25[9];
              v31 = sub_22D032(v25, v29, 0, 1072693248);
              sub_22D1B4(v25, 1, v30, v31);
              sub_22D00C(v25, 1);
            }
            v32 = a1;
            v33 = v78;
            v34 = v73;
          }
          else
          {
            if ( v24 != 267 && v24 != 44 )
              sub_231658(a1, "'=' or 'in' expected");
            v35 = *(_DWORD **)(a1 + 48);
            v79 = v35[9];
            v36 = sub_2316D4(a1, (int)"(for generator)", 0xFu);
            sub_2337F4(a1, v36, 0);
            v37 = sub_2316D4(a1, (int)"(for state)", 0xBu);
            sub_2337F4(a1, v37, 1);
            v38 = sub_2316D4(a1, (int)"(for control)", 0xDu);
            sub_2337F4(a1, v38, 2);
            sub_2337F4(a1, v77, 3);
            v39 = 4;
            while ( sub_2336C4((int *)a1, 44) != 0 )
            {
              v40 = sub_233C90((int *)a1);
              sub_2337F4(a1, v40, v39++);
            }
            sub_233C7A((int *)a1, 267);
            v80 = *(_DWORD *)(a1 + 4);
            v41 = sub_234248((int *)a1, &v86);
            HIDWORD(v42) = 3;
            LODWORD(v42) = *(_DWORD *)(a1 + 48);
            sub_233C28(v42, v41, &v86);
            sub_22CFE0(v35, 3);
            v33 = v79;
            v34 = v80;
            v32 = a1;
          }
          sub_234DD0(v32, v33, v34);
          sub_233BCC((int *)a1, 262, 264, v73);
          v43 = v76;
          goto LABEL_41;
        case 265:
          sub_231DBC((int *)a1);
          sub_233CFC((int *)a1, &v81);
          while ( 1 )
          {
            v55 = *(_DWORD *)(a1 + 16);
            if ( v55 != 46 )
              break;
            sub_233CD0(__SPAIR64__(&v81, a1));
          }
          v56 = 0;
          if ( v55 == 58 )
          {
            sub_233CD0(__SPAIR64__(&v81, a1));
            v56 = 1;
          }
          sub_234B98(a1, &v86, v56, v73);
          LODWORD(v57) = *(_DWORD *)(a1 + 48);
          HIDWORD(v57) = &v81;
          sub_22DA28(v57, &v86);
          sub_22D100(*(int **)(a1 + 48), v73);
          goto LABEL_9;
        case 266:
          v6 = *(int **)(a1 + 48);
          v86 = -1;
          while ( 1 )
          {
            v7 = sub_234DAC(a1);
            v9 = *(_DWORD *)(a1 + 16);
            v10 = v7;
            if ( v9 != 261 )
              break;
            v11 = sub_22D1C8(v6, v8, 261);
            sub_22CF84(v6, &v86, v11);
            sub_22CFB6(v6, v10);
          }
          if ( v9 == 260 )
          {
            v12 = sub_22D1C8(v6, v8, 260);
            sub_22CF84(v6, &v86, v12);
            sub_22CFB6(v6, v10);
            sub_231DBC((int *)a1);
            sub_234D80(a1);
          }
          else
          {
            sub_22CF84(v6, &v86, v7);
          }
          sub_22CFB6(v6, v86);
          v13 = (int *)a1;
          v14 = 266;
LABEL_22:
          sub_233BCC(v13, 262, v14, v73);
          goto LABEL_9;
        case 268:
          sub_231DBC((int *)a1);
          if ( sub_2336C4((int *)a1, 265) != 0 )
          {
            v58 = *(_DWORD *)(a1 + 48);
            v59 = sub_233C90((int *)a1);
            sub_2337F4(a1, v59, 0);
            v60 = *(_DWORD *)(v58 + 36);
            v84 = -1;
            v85 = -1;
            v81 = 6;
            v83 = v60;
            sub_22D00C((_DWORD *)v58, 1);
            sub_2338C4(*(_DWORD *)(a1 + 48), 1);
            sub_234B98(a1, &v86, 0, *(_DWORD *)(a1 + 4));
            sub_22DA28(__SPAIR64__(&v81, v58), &v86);
            *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v58 + 24)
                      + 12 * *(unsigned __int16 *)(v58 + 2 * (*(unsigned __int8 *)(v58 + 50) + 83) + 4)
                      + 4) = *(_DWORD *)(v58 + 24);
LABEL_9:
            v5 = 0;
          }
          else
          {
            for ( i = 0; ; i = v63 )
            {
              v62 = sub_233C90((int *)a1);
              sub_2337F4(a1, v62, i);
              v63 = i + 1;
              v5 = sub_2336C4((int *)a1, 44);
              if ( v5 == 0 )
                break;
            }
            if ( sub_2336C4((int *)a1, 61) != 0 )
            {
              v64 = sub_234248((int *)a1, &v86);
            }
            else
            {
              v86 = 0;
              v64 = 0;
            }
            LODWORD(v65) = *(_DWORD *)(a1 + 48);
            HIDWORD(v65) = v63;
            sub_233C28(v65, v64, &v86);
            sub_2338C4(*(_DWORD *)(a1 + 48), v63);
          }
          goto LABEL_10;
        case 272:
          v44 = *(_DWORD *)(a1 + 48);
          v45 = sub_22CF7C(v44);
          v82 = -1;
          v46 = *(_BYTE *)(v44 + 50);
          *(_WORD *)((char *)&v83 + 1) = 256;
          LOBYTE(v83) = v46;
          v47 = *(_DWORD *)(v44 + 20);
          v86 = (int)&v81;
          v87 = -1;
          v81 = v47;
          LOBYTE(v88[0]) = v46;
          *(_WORD *)((char *)v88 + 1) = 0;
          *(_DWORD *)(v44 + 20) = &v86;
          sub_231DBC((int *)a1);
          sub_234568(a1);
          sub_233BCC((int *)a1, 276, 272, v73);
          v74 = sub_233FCE(a1);
          if ( BYTE1(v88[0]) != 0 )
          {
            sub_233768(a1, v48, v49);
            sub_22CFB6(*(int **)(a1 + 48), v74);
            sub_233D26(v44);
            v52 = *(int **)(a1 + 48);
            v51 = sub_22D1C8((int *)v44, v53, v54);
            v50 = v52;
          }
          else
          {
            sub_233D26(v44);
            v50 = *(int **)(a1 + 48);
            v51 = v74;
          }
          sub_22CFC8(v50, v51, v45);
          v43 = v44;
LABEL_41:
          sub_233D26(v43);
          goto LABEL_9;
        case 273:
          v66 = *(_DWORD *)(a1 + 48);
          sub_231DBC((int *)a1);
          v67 = *(_DWORD *)(a1 + 16);
          if ( (unsigned int)(v67 - 260) > 0x1B )
          {
            if ( v67 == 59 )
            {
LABEL_68:
              v68 = 0;
              v70 = 0;
              goto LABEL_69;
            }
          }
          else if ( ((1 << (v67 - 4)) & 0x8010007) != 0 )
          {
            goto LABEL_68;
          }
          v68 = sub_234248((int *)a1, &v86);
          if ( (unsigned int)(v86 - 13) > 1 )
          {
            if ( v68 == 1 )
            {
              v70 = sub_22D3EC(__SPAIR64__(&v86, v66));
            }
            else
            {
              sub_22D3C4(__SPAIR64__(&v86, v66));
              v70 = *(unsigned __int8 *)(v66 + 50);
            }
          }
          else
          {
            sub_22D048((_DWORD *)v66, &v86, -1);
            if ( v86 == 13 && v68 == 1 )
            {
              v69 = (unsigned int *)(*(_DWORD *)(*(_DWORD *)v66 + 12) + 4 * v88[0]);
              *v69 = *v69 & 0xFFFFFFC0 | 0x1D;
            }
            v70 = *(unsigned __int8 *)(v66 + 50);
            v68 = -1;
          }
LABEL_69:
          sub_22D1A0((int *)v66, v70, v68);
LABEL_71:
          v5 = 1;
LABEL_10:
          result = sub_2336C4((int *)a1, 59);
          *(_DWORD *)(*(_DWORD *)(a1 + 48) + 36) = *(unsigned __int8 *)(*(_DWORD *)(a1 + 48) + 50);
          if ( v5 != 0 )
            break;
          continue;
        case 277:
          v15 = *(_DWORD *)(a1 + 48);
          sub_231DBC((int *)a1);
          v75 = sub_22CF7C(v15);
          v16 = sub_233FCE(a1);
          v87 = -1;
          v17 = *(_BYTE *)(v15 + 50);
          v5 = 0;
          *(_WORD *)((char *)v88 + 1) = 256;
          LOBYTE(v88[0]) = v17;
          v18 = v16;
          v86 = *(_DWORD *)(v15 + 20);
          *(_DWORD *)(v15 + 20) = &v86;
          sub_233C7A((int *)a1, 259);
          sub_234D80(a1);
          v21 = sub_22D1C8((int *)v15, v19, v20);
          sub_22CFC8((int *)v15, v21, v75);
          sub_233BCC((int *)a1, 262, 277, v73);
          sub_233D26(v15);
          sub_22CFB6((int *)v15, v18);
          goto LABEL_10;
        default:
          v3 = *(_DWORD *)(a1 + 48);
          sub_23436C(__SPAIR64__(v88, a1));
          if ( v88[0] == 13 )
          {
            v4 = (unsigned int *)(*(_DWORD *)(*(_DWORD *)v3 + 12) + 4 * v88[2]);
            *v4 = *v4 & 0xFF803FFF | 0x4000;
          }
          else
          {
            v86 = 0;
            sub_234438(a1, (int)&v86, 1);
          }
          goto LABEL_9;
      }
    }
    break;
  }
  --*(_WORD *)(*(_DWORD *)(a1 + 52) + 52);
  return result;
}


//======================================================================
// sub_234B98
// address: 0x00234B98   size: 0x1CE (462 bytes)
//======================================================================
int __fastcall sub_234B98(int *a1, _DWORD *a2, int a3, int a4)
{
  int v6; // r0
  _BYTE *v7; // r7
  int v8; // r5
  int v9; // r6
  _BYTE *v10; // r1
  int v11; // r3
  int v12; // r0
  int v13; // r0
  int *v14; // r6
  int v15; // r5
  int v16; // r7
  int i; // r3
  int v18; // r2
  int v19; // r3
  int result; // r0
  int j; // r4
  _BYTE *v23; // [sp+Ch] [bp-250h]
  int v24; // [sp+10h] [bp-24Ch]
  int v26[144]; // [sp+1Ch] [bp-240h] BYREF

  sub_2336D8(a1, (int)v26);
  *(_DWORD *)(v26[0] + 60) = a4;
  sub_233C7A(a1, 40);
  if ( a3 != 0 )
  {
    v6 = sub_2316D4((int)a1, (int)"self", 4u);
    sub_2337F4((int)a1, v6, 0);
    sub_2338C4(a1[12], 1);
  }
  v7 = (_BYTE *)a1[12];
  v8 = 0;
  v9 = *(_DWORD *)v7;
  v10 = (_BYTE *)(*(_DWORD *)v7 + 74);
  *v10 = 0;
  v23 = v10;
  if ( a1[4] != 41 )
  {
    do
    {
      v11 = a1[4];
      if ( v11 == 279 )
      {
        sub_231DBC(a1);
        v13 = sub_2316D4((int)a1, (int)"arg", 3u);
        v24 = v8 + 1;
        sub_2337F4((int)a1, v13, v8);
        *(_BYTE *)(v9 + 74) = 7;
      }
      else
      {
        if ( v11 != 285 )
          sub_231658((int)a1, "<name> or '...' expected");
        v12 = sub_233C90(a1);
        v24 = v8 + 1;
        sub_2337F4((int)a1, v12, v8);
      }
      v8 = v24;
    }
    while ( *(_BYTE *)(v9 + 74) == 0 && sub_2336C4(a1, 44) != 0 );
  }
  sub_2338C4(a1[12], v8);
  *(_BYTE *)(v9 + 73) = v7[50] - (*v23 & 1);
  sub_22D00C(v7, (unsigned __int8)v7[50]);
  sub_233C7A(a1, 41);
  sub_234568((int)a1);
  *(_DWORD *)(v26[0] + 64) = a1[1];
  sub_233BCC(a1, 262, 265, a4);
  sub_2338F8(a1);
  v14 = (int *)a1[12];
  v15 = *v14;
  v16 = *(_DWORD *)(*v14 + 52);
  if ( v14[11] >= v16 )
    *(_DWORD *)(v15 + 16) = sub_2323AC(
                              (_DWORD *)a1[13],
                              *(_DWORD *)(v15 + 16),
                              (int *)(v15 + 52),
                              4u,
                              0x3FFFF,
                              (int)"constant table overflow");
  for ( i = 4 * v16; ; i += 4 )
  {
    v18 = *(_DWORD *)(v15 + 16);
    if ( v16 >= *(_DWORD *)(v15 + 52) )
      break;
    *(_DWORD *)(v18 + i) = 0;
    ++v16;
  }
  v19 = v14[11];
  v14[11] = v19 + 1;
  *(_DWORD *)(v18 + 4 * v19) = v26[0];
  if ( *(unsigned __int8 *)(v26[0] + 5) << 30 != 0 && (*(_BYTE *)(v15 + 5) & 4) != 0 )
    sub_230762(a1[13], v15, v26[0]);
  result = sub_22D1B4(v14, 36, 0, v14[11] - 1);
  a2[4] = -1;
  a2[5] = -1;
  *a2 = 11;
  a2[2] = result;
  for ( j = 0; j < *(unsigned __int8 *)(v26[0] + 72); ++j )
    result = sub_22D114(
               v14,
               4
             * (*((unsigned __int8 *)&v26[12] + 2 * j + 3)
              - 6
              - (*((unsigned __int8 *)&v26[12] + 2 * j + 3)
               - 7
               + (*((_BYTE *)&v26[12] + 2 * j + 3) == 6))),
               0,
               *((unsigned __int8 *)&v26[13] + 2 * j),
               0);
  return result;
}


//======================================================================
// sub_234D80
// address: 0x00234D80   size: 0x2C (44 bytes)
//======================================================================
__int64 __fastcall sub_234D80(__int64 a1, int a2, int a3)
{
  int v3; // r4
  int v4; // r2
  __int64 v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+8h] [bp-8h]
  int v8; // [sp+Ch] [bp-4h]

  v6 = a1;
  v7 = a2;
  v8 = a3;
  v3 = *(_DWORD *)(a1 + 48);
  v7 = -1;
  BYTE4(a1) = *(_BYTE *)(v3 + 50);
  *(_WORD *)((char *)&v8 + 1) = 0;
  v4 = *(_DWORD *)(v3 + 20);
  *(_DWORD *)(v3 + 20) = (char *)&v6 + 4;
  LOBYTE(v8) = BYTE4(a1);
  HIDWORD(v6) = v4;
  sub_234568(a1);
  sub_233D26(v3);
  return v6;
}


//======================================================================
// sub_234DAC
// address: 0x00234DAC   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_234DAC(int *a1)
{
  int v2; // r5
  __int64 v3; // r0
  int v4; // r2
  int v5; // r3

  sub_231DBC(a1);
  v2 = sub_233FCE((int)a1);
  sub_233C7A(a1, 274);
  LODWORD(v3) = a1;
  sub_234D80(v3, v4, v5);
  return v2;
}


//======================================================================
// sub_234DD0
// address: 0x00234DD0   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall sub_234DD0(int *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int v8; // r1
  int v9; // r0
  char v10; // r1
  int v11; // r2
  int v12; // r7
  int v13; // r0
  __int64 v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v18; // r6
  int v19; // r2
  int v20; // r1
  _DWORD v24[2]; // [sp+14h] [bp-10h] BYREF
  char v25; // [sp+1Ch] [bp-8h]
  char v26; // [sp+1Dh] [bp-7h]
  char v27; // [sp+1Eh] [bp-6h]

  v5 = a1[12];
  sub_2338C4(v5, 3);
  sub_233C7A(a1, 259);
  if ( a5 != 0 )
    v9 = sub_22D1B4((int *)v5, 32, a2, 131070);
  else
    v9 = sub_22D1C8((int *)v5, v8, 0);
  v10 = *(_BYTE *)(v5 + 50);
  v24[1] = -1;
  v27 = 0;
  v26 = 0;
  v11 = *(_DWORD *)(v5 + 20);
  *(_DWORD *)(v5 + 20) = v24;
  v25 = v10;
  v12 = v9;
  v13 = a1[12];
  v24[0] = v11;
  sub_2338C4(v13, a4);
  sub_22D00C((_DWORD *)v5, a4);
  LODWORD(v14) = a1;
  sub_234D80(v14, v15, v16);
  sub_233D26(v5);
  sub_22CFB6((int *)v5, v12);
  if ( a5 != 0 )
    v17 = sub_22D1B4((int *)v5, 31, a2, 131070);
  else
    v17 = sub_22D114((int *)v5, 33, a2, 0, a4);
  v18 = v17;
  sub_22D100((int *)v5, a3);
  v20 = v18;
  if ( a5 == 0 )
    v20 = sub_22D1C8((int *)v5, v18, v19);
  sub_22CFC8((int *)v5, v20, v12 + 1);
  return v5;
}


//======================================================================
// sub_234E98
// address: 0x00234E98   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_234E98(int a1, int a2, int a3, char *a4)
{
  size_t v7; // r0
  int v8; // r0
  int v10[19]; // [sp+0h] [bp-28Ch] BYREF
  _DWORD v11[144]; // [sp+4Ch] [bp-240h] BYREF

  v10[15] = a3;
  v7 = j_strlen(a4);
  v8 = sub_235280(a1, (int)a4, v7);
  sub_231D68(a1, (int)v10, a2, v8);
  sub_2336D8(v10, (int)v11);
  *(_BYTE *)(v11[0] + 74) = 2;
  sub_231DBC(v10);
  sub_234568((int)v10);
  if ( v10[4] != 287 )
    sub_2338A0((int)v10, 287);
  sub_2338F8(v10);
  return v11[0];
}


//======================================================================
// sub_234F04
// address: 0x00234F04   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_234F04(_DWORD *a1, int a2)
{
  int v4; // r0
  int result; // r0
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r2

  v4 = sub_23237C(a2, 0, 0, 192);
  a1[9] = v4 + 168;
  a1[10] = v4;
  a1[5] = v4;
  a1[12] = 8;
  result = sub_23237C(a2, 0, 0, 720);
  a1[11] = 45;
  a1[7] = result + 624;
  v6 = a1[5];
  a1[2] = result;
  a1[8] = result;
  *(_DWORD *)(v6 + 4) = result;
  v7 = a1[2];
  a1[2] = v7 + 16;
  *(_DWORD *)(v7 + 8) = 0;
  v8 = a1[2];
  *(_DWORD *)a1[5] = v8;
  v9 = a1[2];
  a1[3] = v8;
  *(_DWORD *)(a1[5] + 8) = v9 + 320;
  return result;
}


//======================================================================
// sub_234F66
// address: 0x00234F66   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_234F66(int a1, int *a2)
{
  sub_23237C(a1, a2[10], 24 * a2[12], 0);
  return sub_23237C(a1, a2[8], 16 * a2[11], 0);
}


//======================================================================
// sub_234F8C
// address: 0x00234F8C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_234F8C(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r0
  int result; // r0

  v2 = a1[4];
  sub_234F04(a1, (int)a1);
  a1[18] = sub_236960(a1, 0, 2);
  a1[20] = 5;
  v3 = a1[4];
  v4 = sub_236960(a1, 0, 2);
  *(_DWORD *)(v3 + 104) = 5;
  *(_DWORD *)(v3 + 96) = v4;
  sub_235200(a1, 32);
  sub_237588(a1);
  sub_231344((int)a1);
  result = sub_235280((int)a1, (int)"not enough memory", 0x11u);
  *(_BYTE *)(result + 5) |= 0x20u;
  *(_DWORD *)(v2 + 64) = 4 * *(_DWORD *)(v2 + 68);
  return result;
}


//======================================================================
// sub_234FEC
// address: 0x00234FEC   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_234FEC(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = *(_DWORD *)(a1 + 16);
  sub_22FC5C(a1, *(_DWORD *)(a1 + 32));
  sub_230672(a1);
  sub_23237C(a1, **(_DWORD **)(a1 + 16), 4 * *(_DWORD *)(*(_DWORD *)(a1 + 16) + 8), 0);
  v3 = sub_23237C(a1, *(_DWORD *)(v2 + 52), *(_DWORD *)(v2 + 60), 0);
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 52) = v3;
  sub_234F66(a1, (int *)a1);
  return (*(int (__fastcall **)(_DWORD, int, int, _DWORD))(v2 + 12))(*(_DWORD *)(v2 + 16), a1, 376, 0);
}


//======================================================================
// sub_235038
// address: 0x00235038   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_235038(int a1)
{
  return sub_23065C(a1);
}


//======================================================================
// sub_235040
// address: 0x00235040   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_235040(int a1)
{
  int v2; // r4
  int v3; // r3
  int v5; // r3
  int v6; // r5

  v2 = sub_23237C(a1, 0, 0, 120);
  sub_23079A(a1, v2, 8);
  *(_DWORD *)(v2 + 16) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(v2 + 32) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 112) = 0;
  *(_DWORD *)(v2 + 68) = 0;
  *(_BYTE *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 60) = 0;
  *(_BYTE *)(v2 + 57) = 1;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 104) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_WORD *)(v2 + 54) = 0;
  *(_WORD *)(v2 + 52) = 0;
  *(_BYTE *)(v2 + 6) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 116) = 0;
  *(_DWORD *)(v2 + 80) = 0;
  sub_234F04((_DWORD *)v2, a1);
  v3 = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(v2 + 72) = *(_DWORD *)(a1 + 72);
  *(_DWORD *)(v2 + 76) = v3;
  *(_DWORD *)(v2 + 80) = *(_DWORD *)(a1 + 80);
  *(_BYTE *)(v2 + 56) = *(_BYTE *)(a1 + 56);
  v5 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(v2 + 60) = v5;
  v6 = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(v2 + 64) = v5;
  *(_DWORD *)(v2 + 68) = v6;
  return v2;
}


//======================================================================
// sub_2350B8
// address: 0x002350B8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_2350B8(int a1, int a2)
{
  sub_22FC5C(a2, *(_DWORD *)(a2 + 32));
  sub_234F66(a1, (int *)a2);
  return sub_23237C(a1, a2, 120, 0);
}


//======================================================================
// sub_235200
// address: 0x00235200   size: 0x7C (124 bytes)
//======================================================================
__int64 __fastcall sub_235200(__int64 a1)
{
  int v1; // r4
  int v2; // r5
  int v3; // r0
  int *v4; // r6
  int v5; // r3
  int v6; // r7
  int i; // r0
  int v8; // r2
  int v9; // r1
  _DWORD *j; // r3
  _DWORD *v11; // r2
  __int64 v13; // [sp+0h] [bp-Ch]

  v13 = a1;
  v1 = HIDWORD(a1);
  v2 = a1;
  if ( *(_BYTE *)(*(_DWORD *)(a1 + 16) + 21) != 2 )
  {
    if ( (unsigned int)(HIDWORD(a1) + 1) > 0x3FFFFFFF )
      sub_232368((_DWORD *)a1);
    v3 = sub_23237C(a1, 0, 0, 4 * HIDWORD(a1));
    v4 = *(int **)(v2 + 16);
    v5 = 0;
    v6 = v3;
    while ( v5 < v1 )
      *(_DWORD *)(v3 + 4 * v5++) = 0;
    for ( i = 0; ; ++i )
    {
      v8 = v4[2];
      v9 = *v4;
      if ( i >= v8 )
        break;
      for ( j = *(_DWORD **)(v9 + 4 * i); j != nullptr; j = (_DWORD *)HIDWORD(v13) )
      {
        HIDWORD(v13) = *j;
        v11 = (_DWORD *)(v6 + 4 * (j[2] & (v1 - 1)));
        *j = *v11;
        *v11 = j;
      }
    }
    sub_23237C(v2, v9, 4 * v8, 0);
    v4[2] = v1;
    *v4 = v6;
  }
  return v13;
}


//======================================================================
// sub_235280
// address: 0x00235280   size: 0xEA (234 bytes)
//======================================================================
int __fastcall sub_235280(_DWORD *a1, char *a2, size_t a3)
{
  size_t v5; // r2
  size_t v6; // r3
  int v7; // r0
  int v8; // r7
  int i; // r5
  int v10; // r0
  char v11; // r2
  size_t v12; // r2
  size_t v13; // r4
  _DWORD *v14; // r3
  int v15; // r2
  int v16; // r1
  unsigned int v17; // r2
  __int64 v18; // r0
  size_t v20; // [sp+0h] [bp-Ch]

  v5 = (a3 >> 5) + 1;
  v6 = a3;
  v20 = a3;
  while ( v6 >= v5 )
  {
    v7 = (unsigned __int8)a2[v6 - 1];
    v6 -= v5;
    v20 ^= (v20 >> 2) + 32 * v20 + v7;
  }
  v8 = a1[4];
  for ( i = *(_DWORD *)(4 * ((*(_DWORD *)(v8 + 8) - 1) & v20) + *(_DWORD *)v8); i != 0; i = *(_DWORD *)i )
  {
    if ( *(_DWORD *)(i + 12) == a3 && j_memcmp(a2, (const void *)(i + 16), a3) == 0 )
    {
      if ( ((*(unsigned __int8 *)(v8 + 20) ^ 3) & *(_BYTE *)(i + 5) & 3) != 0 )
        *(_BYTE *)(i + 5) ^= 3u;
      return i;
    }
  }
  if ( a3 + 1 > 0xFFFFFFED )
    sub_232368(a1);
  v10 = sub_23237C((int)a1, 0, 0, a3 + 17);
  *(_DWORD *)(v10 + 12) = a3;
  i = v10;
  *(_DWORD *)(v10 + 8) = v20;
  v11 = *(_BYTE *)(a1[4] + 20);
  *(_BYTE *)(v10 + 6) = 0;
  *(_BYTE *)(v10 + 5) = v11 & 3;
  *(_BYTE *)(v10 + 4) = 4;
  v12 = a3;
  v13 = v10 + a3;
  j_memcpy((void *)(v10 + 16), a2, v12);
  *(_BYTE *)(v13 + 16) = 0;
  v14 = (_DWORD *)a1[4];
  v15 = 4 * ((v14[2] - 1) & v20);
  *(_DWORD *)i = *(_DWORD *)(*v14 + v15);
  *(_DWORD *)(*v14 + v15) = i;
  v16 = v14[2];
  v17 = v14[1] + 1;
  v14[1] = v17;
  if ( v17 > v16 && v16 <= 1073741822 )
  {
    HIDWORD(v18) = 2 * v16;
    LODWORD(v18) = a1;
    sub_235200(v18);
  }
  return i;
}


//======================================================================
// sub_235370
// address: 0x00235370   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_235370(_DWORD *a1, unsigned int a2, int a3)
{
  int result; // r0
  char v7; // r1

  if ( a2 > 0xFFFFFFE5 )
    sub_232368(a1);
  result = sub_23237C((int)a1, 0, 0, a2 + 24);
  v7 = *(_BYTE *)(a1[4] + 20);
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 12) = a3;
  *(_BYTE *)(result + 5) = v7 & 3;
  *(_BYTE *)(result + 4) = 7;
  *(_DWORD *)(result + 8) = 0;
  *(_DWORD *)result = **(_DWORD **)(a1[4] + 112);
  **(_DWORD **)(a1[4] + 112) = result;
  return result;
}


//======================================================================
// sub_2353B8
// address: 0x002353B8   size: 0x128 (296 bytes)
//======================================================================
bool __fastcall sub_2353B8(int a1, unsigned int a2)
{
  unsigned int v3; // r0
  int v4; // r0
  int v5; // r3
  int v6; // r3
  _BOOL4 result; // r0

  v3 = a2;
  if ( a2 <= 0xFF )
    v3 = *(__int16 *)(2 * (a2 + 1) + tolower_tab_);
  switch ( v3 )
  {
    case 'a':
      if ( a1 == -1 )
        goto LABEL_24;
      v4 = *(unsigned __int8 *)(ctype_ + (unsigned __int8)a1 + 1);
      v5 = 3;
      goto LABEL_8;
    case 'c':
      if ( a1 == -1 )
        goto LABEL_24;
      v4 = *(unsigned __int8 *)(ctype_ + (unsigned __int8)a1 + 1);
      v5 = 32;
      goto LABEL_8;
    case 'd':
      v6 = (unsigned int)(a1 - 48) <= 9;
      goto LABEL_25;
    case 'l':
      if ( a1 == -1 )
        goto LABEL_24;
      v4 = *(unsigned __int8 *)(ctype_ + (unsigned __int8)a1 + 1);
      v5 = 2;
      goto LABEL_8;
    case 'p':
      if ( a1 == -1 )
        goto LABEL_24;
      v4 = *(unsigned __int8 *)(ctype_ + (unsigned __int8)a1 + 1);
      v5 = 16;
      goto LABEL_8;
    case 's':
      if ( a1 == -1 )
        goto LABEL_24;
      v4 = *(unsigned __int8 *)(ctype_ + (unsigned __int8)a1 + 1);
      v5 = 8;
      goto LABEL_8;
    case 'u':
      if ( a1 == -1 )
        goto LABEL_24;
      v4 = *(unsigned __int8 *)(ctype_ + (unsigned __int8)a1 + 1);
      v5 = 1;
      goto LABEL_8;
    case 'w':
      if ( a1 == -1 )
        goto LABEL_24;
      v4 = *(unsigned __int8 *)(ctype_ + (unsigned __int8)a1 + 1);
      v5 = 7;
      goto LABEL_8;
    case 'x':
      if ( a1 == -1 )
      {
LABEL_24:
        v6 = 0;
      }
      else
      {
        v4 = *(unsigned __int8 *)(ctype_ + (unsigned __int8)a1 + 1);
        v5 = 68;
LABEL_8:
        v6 = v5 & v4;
      }
LABEL_25:
      if ( a2 == -1 )
        return v6 == 0;
      result = v6;
      if ( (*(_BYTE *)(ctype_ + (unsigned __int8)a2 + 1) & 2) == 0 )
        return v6 == 0;
      return result;
    case 'z':
      v6 = a1 == 0;
      goto LABEL_25;
    default:
      v6 = a2 - a1;
      return v6 == 0;
  }
}


//======================================================================
// sub_2354EC
// address: 0x002354EC   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_2354EC(int a1, unsigned __int8 *a2, unsigned int a3)
{
  unsigned __int8 *v5; // r3
  int v6; // r4
  int v7; // r2
  unsigned int v8; // r1
  unsigned __int8 *v9; // r6

  v5 = a2;
  v6 = 1;
  if ( a2[1] == 94 )
  {
    v5 = a2 + 1;
    v6 = 0;
  }
  while ( 1 )
  {
    if ( (unsigned int)(v5 + 1) >= a3 )
      return v6 ^ 1;
    v7 = v5[1];
    v8 = v5[2];
    if ( v7 == 37 )
    {
      v9 = v5 + 2;
      if ( sub_2353B8(a1, v8) )
        return v6;
      goto LABEL_5;
    }
    if ( v8 == 45 )
    {
      v9 = v5 + 3;
      if ( (unsigned int)(v5 + 3) < a3 )
        break;
    }
    if ( v7 == a1 )
      return v6;
    v9 = v5 + 1;
LABEL_5:
    v5 = v9;
  }
  if ( v7 > a1 || a1 > v5[3] )
    goto LABEL_5;
  return v6;
}


//======================================================================
// sub_23554C
// address: 0x0023554C   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_23554C(_DWORD *a1)
{
  int v2; // r7
  unsigned __int8 *i; // r6
  _BYTE *v4; // r2
  int v5; // r1
  unsigned int v7; // [sp+4h] [bp-418h] BYREF
  int v8[253]; // [sp+8h] [bp-414h] BYREF
  int v9; // [sp+414h] [bp-8h] BYREF

  v2 = luaL_checklstring(a1, 1, &v7);
  luaL_buffinit((int)a1, v8);
  for ( i = (unsigned __int8 *)v2; (unsigned int)&i[-v2] < v7; ++i )
  {
    if ( v8[0] >= (unsigned int)&v9 )
      luaL_prepbuffer(v8);
    v4 = (_BYTE *)v8[0]++;
    v5 = *i;
    *v4 = *(_WORD *)(2 * (v5 + 1) + toupper_tab_);
  }
  luaL_pushresult(v8);
  return 1;
}


//======================================================================
// sub_2355DC
// address: 0x002355DC   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_2355DC(_DWORD *a1)
{
  int v2; // r7
  int v3; // r3
  _BYTE *v4; // r3
  int v6; // [sp+4h] [bp-418h] BYREF
  int v7[253]; // [sp+8h] [bp-414h] BYREF
  int v8; // [sp+414h] [bp-8h] BYREF

  v2 = luaL_checklstring(a1, 1, &v6);
  luaL_buffinit((int)a1, v7);
  while ( 1 )
  {
    v3 = v6--;
    if ( v3 == 0 )
      break;
    if ( v7[0] >= (unsigned int)&v8 )
      luaL_prepbuffer(v7);
    v4 = (_BYTE *)v7[0]++;
    *v4 = *(_BYTE *)(v2 + v6);
  }
  luaL_pushresult(v7);
  return 1;
}


//======================================================================
// sub_235658
// address: 0x00235658   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_235658(_DWORD *a1)
{
  int v2; // r7
  unsigned __int8 *i; // r6
  _BYTE *v4; // r2
  int v5; // r1
  unsigned int v7; // [sp+4h] [bp-418h] BYREF
  int v8[253]; // [sp+8h] [bp-414h] BYREF
  int v9; // [sp+414h] [bp-8h] BYREF

  v2 = luaL_checklstring(a1, 1, &v7);
  luaL_buffinit((int)a1, v8);
  for ( i = (unsigned __int8 *)v2; (unsigned int)&i[-v2] < v7; ++i )
  {
    if ( v8[0] >= (unsigned int)&v9 )
      luaL_prepbuffer(v8);
    v4 = (_BYTE *)v8[0]++;
    v5 = *i;
    *v4 = *(_WORD *)(2 * (v5 + 1) + tolower_tab_);
  }
  luaL_pushresult(v8);
  return 1;
}


//======================================================================
// sub_2356E8
// address: 0x002356E8   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_2356E8(_DWORD *a1)
{
  int v2; // r2
  int v3; // r3
  char *v4; // r7
  char *v6; // [sp+4h] [bp-420h]
  int v7; // [sp+Ch] [bp-418h] BYREF
  int v8[251]; // [sp+10h] [bp-414h] BYREF

  v6 = (char *)luaL_checklstring(a1, 1, &v7);
  v4 = luaL_checkinteger(a1, 2, v2, v3);
  luaL_buffinit((int)a1, v8);
  while ( (int)v4 > 0 )
  {
    luaL_addlstring(v8, v6, v7);
    --v4;
  }
  luaL_pushresult(v8);
  return 1;
}


//======================================================================
// sub_235758
// address: 0x00235758   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_235758(int a1, char *a2, int a3, int *a4)
{
  luaL_addlstring(a4, a2, a3);
  return 0;
}


//======================================================================
// sub_235764
// address: 0x00235764   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_235764(_DWORD *a1, int a2)
{
  int v4; // [sp+4h] [bp-4h] BYREF

  v4 = a2;
  luaL_checklstring(a1, 1, &v4);
  lua_pushinteger((int)a1, v4);
  return 1;
}


//======================================================================
// sub_23577C
// address: 0x0023577C   size: 0xA (10 bytes)
//======================================================================
void __fastcall __noreturn sub_23577C(int a1)
{
  luaL_error(a1, (int)"'string.gfind' was renamed to 'string.gmatch'");
}


//======================================================================
// sub_23578C
// address: 0x0023578C   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_23578C(_DWORD *a1)
{
  luaL_checklstring(a1, 1, nullptr);
  luaL_checklstring(a1, 2, nullptr);
  lua_settop((int)a1, 2);
  lua_pushinteger((int)a1, 0);
  lua_pushcclosure(a1, (int)sub_236570, 3);
  return 1;
}


//======================================================================
// sub_2357C8
// address: 0x002357C8   size: 0x8A (138 bytes)
//======================================================================
int __fastcall sub_2357C8(_DWORD *a1)
{
  int v2; // r4
  int v3; // r2
  char *v4; // r0
  char v5; // r6
  _BYTE *v6; // r3
  int v8; // [sp+0h] [bp-41Ch]
  int v9[253]; // [sp+8h] [bp-414h] BYREF
  int v10; // [sp+414h] [bp-8h] BYREF

  v2 = 1;
  v8 = lua_gettop((int)a1);
  luaL_buffinit((int)a1, v9);
  while ( v2 <= v8 )
  {
    v4 = luaL_checkinteger(a1, v2, v3, v8);
    v5 = (char)v4;
    if ( (char *)(unsigned __int8)v4 != v4 )
      luaL_argerror((int)a1, v2, "invalid value");
    if ( v9[0] >= (unsigned int)&v10 )
      luaL_prepbuffer(v9);
    v6 = (_BYTE *)v9[0];
    ++v2;
    v3 = ++v9[0];
    *v6 = v5;
  }
  luaL_pushresult(v9);
  return 1;
}


//======================================================================
// sub_235864
// address: 0x00235864   size: 0x22 (34 bytes)
//======================================================================
char *__fastcall sub_235864(const char *a1)
{
  size_t v2; // r5
  char *v3; // r0
  char v4; // r6
  char *result; // r0

  v2 = j_strlen(a1);
  v3 = (char *)&a1[v2 - 1];
  v4 = *v3;
  result = j_strcpy(v3, "l");
  a1[v2] = v4;
  a1[v2 + 1] = 0;
  return result;
}


//======================================================================
// sub_23588C
// address: 0x0023588C   size: 0x374 (884 bytes)
//======================================================================
int __fastcall sub_23588C(_DWORD *a1)
{
  char *v2; // r7
  _BYTE *v3; // r3
  char v4; // r2
  _BYTE *v5; // r3
  char v6; // r2
  int v7; // r2
  const char *v8; // r7
  const char *i; // r4
  const char *v10; // r4
  unsigned __int8 *v11; // r4
  unsigned __int8 *v12; // r4
  unsigned int v13; // r2
  int v14; // r0
  int v15; // r2
  int v16; // r3
  int v17; // r0
  int v18; // r2
  int v19; // r3
  __int64 v20; // r0
  _BYTE *v21; // r4
  _BYTE *v22; // r3
  unsigned int v23; // r3
  unsigned int v24; // r3
  _BYTE *v25; // r3
  _BYTE *v26; // r3
  int v27; // r2
  char *v28; // r1
  _BYTE *v29; // r3
  int v30; // r4
  size_t v31; // r0
  int v33; // [sp+8h] [bp-644h]
  int v34; // [sp+Ch] [bp-640h]
  char *v35; // [sp+10h] [bp-63Ch]
  int v36; // [sp+1Ch] [bp-630h] BYREF
  unsigned int v37; // [sp+20h] [bp-62Ch] BYREF
  char format; // [sp+24h] [bp-628h] BYREF
  char v39[19]; // [sp+25h] [bp-627h] BYREF
  char s[512]; // [sp+38h] [bp-614h] BYREF
  int v41[259]; // [sp+238h] [bp-414h] BYREF
  _BYTE v42[8]; // [sp+644h] [bp-8h] BYREF

  v34 = lua_gettop((int)a1);
  v2 = (char *)luaL_checklstring(a1, 1, &v36);
  v35 = &v2[v36];
  luaL_buffinit((int)a1, v41);
  v33 = 1;
  while ( v2 < v35 )
  {
    if ( *v2 == 37 )
    {
      if ( v2[1] == 37 )
      {
        if ( v41[0] >= (unsigned int)v42 )
          luaL_prepbuffer(v41);
        v5 = (_BYTE *)v41[0]++;
        v6 = v2[1];
        v2 += 2;
        *v5 = v6;
      }
      else
      {
        v7 = v33 + 1;
        v33 = v7;
        if ( v7 > v34 )
          luaL_argerror((int)a1, v7, "no value");
        v8 = v2 + 1;
        for ( i = v8; *i != 0 && j_strchr("-+ #0", *(unsigned __int8 *)i) != nullptr; ++i )
          ;
        if ( (unsigned int)(i - v8) > 5 )
          luaL_error((int)a1, (int)"invalid format (repeated flags)");
        v10 = &i[(unsigned int)*(unsigned __int8 *)i - 48 <= 9];
        v11 = (unsigned __int8 *)&v10[(unsigned int)*(unsigned __int8 *)v10 - 48 <= 9];
        if ( *v11 == 46 )
        {
          if ( (unsigned int)v11[1] - 48 <= 9 )
            v12 = v11 + 2;
          else
            v12 = v11 + 1;
          v11 = &v12[(unsigned int)*v12 - 48 <= 9];
        }
        if ( (unsigned int)*v11 - 48 <= 9 )
          luaL_error((int)a1, (int)"invalid format (width or precision too long)");
        format = 37;
        j_strncpy(v39, v8, v11 - (unsigned __int8 *)v8 + 1);
        v39[v11 - (unsigned __int8 *)v8 + 1] = 0;
        v13 = *v11;
        v2 = (char *)(v11 + 1);
        if ( v13 <= 0x67 )
        {
          if ( v13 >= 0x65 )
            goto LABEL_51;
          if ( v13 != 88 )
          {
            if ( v13 <= 0x58 )
            {
              if ( v13 != 69 && v13 != 71 )
LABEL_83:
                luaL_error((int)a1, (int)"invalid option '%%%c' to 'format'", v13);
LABEL_51:
              v20 = luaL_checknumber(a1, v33, v13, 0);
              j_sprintf(s, &format, v20);
LABEL_84:
              v31 = j_strlen(s);
              luaL_addlstring(v41, s, v31);
              continue;
            }
            if ( v13 != 99 )
            {
              if ( v13 != 100 )
                goto LABEL_83;
              goto LABEL_48;
            }
            v14 = (int)COERCE_DOUBLE(luaL_checknumber(a1, v33, 99, 0));
LABEL_50:
            j_sprintf(s, &format, v14);
            goto LABEL_84;
          }
LABEL_49:
          sub_235864(&format);
          v14 = (unsigned int)COERCE_DOUBLE(luaL_checknumber(a1, v33, v18, v19));
          goto LABEL_50;
        }
        if ( v13 != 113 )
        {
          if ( v13 > 0x71 )
          {
            if ( v13 != 117 && v13 != 120 )
            {
              if ( v13 != 115 )
                goto LABEL_83;
              v30 = luaL_checklstring(a1, v33, &v37);
              if ( j_strchr(&format, 46) == nullptr && v37 > 0x63 )
              {
                lua_pushvalue(a1, v33);
                luaL_addvalue(v41);
                continue;
              }
              j_sprintf(s, &format, v30);
              goto LABEL_84;
            }
          }
          else
          {
            if ( v13 == 105 )
            {
LABEL_48:
              sub_235864(&format);
              v17 = (int)COERCE_DOUBLE(luaL_checknumber(a1, v33, v15, v16));
              j_sprintf(s, &format, v17);
              goto LABEL_84;
            }
            if ( v13 != 111 )
              goto LABEL_83;
          }
          goto LABEL_49;
        }
        v21 = (_BYTE *)luaL_checklstring(a1, v33, &v37);
        if ( v41[0] >= (unsigned int)v42 )
          luaL_prepbuffer(v41);
        v22 = (_BYTE *)v41[0]++;
        *v22 = 34;
        while ( 1 )
        {
          v23 = v37--;
          if ( v23 == 0 )
            break;
          v24 = (unsigned __int8)*v21;
          if ( v24 == 13 )
          {
            v27 = 2;
            v28 = "\\r";
LABEL_70:
            luaL_addlstring(v41, v28, v27);
            goto LABEL_75;
          }
          if ( v24 > 0xD )
          {
            if ( v24 != 34 && *v21 != 92 )
              goto LABEL_71;
          }
          else
          {
            if ( *v21 == 0 )
            {
              v27 = 4;
              v28 = "\\000";
              goto LABEL_70;
            }
            if ( v24 != 10 )
            {
LABEL_71:
              if ( v41[0] >= (unsigned int)v42 )
                luaL_prepbuffer(v41);
              v26 = (_BYTE *)v41[0]++;
              goto LABEL_74;
            }
          }
          if ( v41[0] >= (unsigned int)v42 )
            luaL_prepbuffer(v41);
          v25 = (_BYTE *)v41[0]++;
          *v25 = 92;
          if ( v41[0] >= (unsigned int)v42 )
            luaL_prepbuffer(v41);
          v26 = (_BYTE *)v41[0]++;
LABEL_74:
          *v26 = *v21;
LABEL_75:
          ++v21;
        }
        if ( v41[0] >= (unsigned int)v42 )
          luaL_prepbuffer(v41);
        v29 = (_BYTE *)v41[0]++;
        *v29 = 34;
      }
    }
    else
    {
      if ( v41[0] >= (unsigned int)v42 )
        luaL_prepbuffer(v41);
      v3 = (_BYTE *)v41[0]++;
      v4 = *v2++;
      *v3 = v4;
    }
  }
  luaL_pushresult(v41);
  return 1;
}


//======================================================================
// sub_235C08
// address: 0x00235C08   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_235C08(_DWORD *a1)
{
  int v3[255]; // [sp+0h] [bp-410h] BYREF

  luaL_checktype(a1, 1, 6);
  lua_settop((int)a1, 1);
  luaL_buffinit((int)a1, v3);
  if ( lua_dump((int)a1, (int)sub_235758, (int)v3) != 0 )
    luaL_error((int)a1, (int)"unable to dump given function");
  luaL_pushresult(v3);
  return 1;
}


//======================================================================
// sub_235C80
// address: 0x00235C80   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_235C80(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3

  v3 = *a2;
  switch ( v3 )
  {
    case '.':
      return 1;
    case '[':
      return sub_2354EC(a1, a2, a3 - 1);
    case '%':
      return sub_2353B8(a1, a2[1]);
    default:
      break;
  }
  return v3 == a1;
}


//======================================================================
// sub_235CAC
// address: 0x00235CAC   size: 0x66 (102 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_235CAC(int *a1, unsigned __int8 *a2)
{
  int v2; // r3
  _BYTE *v3; // r4
  _BYTE *v4; // r5

  v2 = *a2;
  v3 = a2 + 1;
  if ( v2 == 37 )
  {
    if ( a2[1] == 0 )
      luaL_error(*a1, (int)"malformed pattern (ends with '%%')", v2 << 24);
    return a2 + 2;
  }
  else if ( *a2 == 91 )
  {
    if ( a2[1] == 94 )
      v3 = a2 + 2;
    while ( 1 )
    {
      if ( *v3 == 0 )
        luaL_error(*a1, (int)"malformed pattern (missing ']')");
      v4 = v3 + 1;
      if ( *v3 == 37 && v3[1] != 0 )
        v4 = v3 + 2;
      if ( *v4 == 93 )
        break;
      v3 = v4;
    }
    return v4 + 1;
  }
  else
  {
    return a2 + 1;
  }
}


//======================================================================
// sub_235D1C
// address: 0x00235D1C   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_235D1C(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r2
  int v8; // r0
  size_t v9; // r2
  _DWORD *v10; // r6
  int v11; // r5
  double v12; // r0

  v7 = a1[3];
  v8 = a1[2];
  if ( a2 >= v7 )
  {
    v9 = a4 - a3;
    if ( a2 != 0 )
      luaL_error(v8, (int)"invalid capture index", v9);
    goto LABEL_9;
  }
  v10 = &a1[2 * a2];
  v11 = v10[5];
  if ( v11 == -1 )
    luaL_error(v8, (int)"unfinished capture");
  if ( v11 != -2 )
  {
    v8 = a1[2];
    a3 = v10[4];
    v9 = v10[5];
LABEL_9:
    LODWORD(v12) = lua_pushlstring(v8, a3, v9);
    return LODWORD(v12);
  }
  v12 = lua_pushinteger(v8, v10[4] - *a1 + 1);
  return LODWORD(v12);
}


//======================================================================
// sub_235D78
// address: 0x00235D78   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_235D78(int a1, int a2, int a3)
{
  int v3; // r4
  int i; // r5

  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 == 0 )
    v3 = a2 != 0;
  luaL_checkstack(*(_DWORD **)(a1 + 8), v3, "too many captures");
  for ( i = 0; i < v3; ++i )
    sub_235D1C((_DWORD *)a1, i, a2, a3);
  return v3;
}


//======================================================================
// sub_235DB8
// address: 0x00235DB8   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_235DB8(_DWORD *a1, int a2)
{
  int v3; // r6
  int v4; // r2
  int v5; // r3
  int v6; // r0
  int v7; // r5
  int v8; // r0
  int v9; // r3
  void *v10; // r1
  size_t v11; // r2
  int v12; // r0
  int v14; // [sp+4h] [bp-4h] BYREF

  v14 = a2;
  v3 = luaL_checklstring(a1, 1, &v14);
  v6 = (int)luaL_checkinteger(a1, 2, v4, v5);
  if ( v6 < 0 )
    v6 += v14 + 1;
  v7 = (~v6 >> 31) & v6;
  v8 = (int)luaL_optinteger(a1, 3, -1);
  if ( v8 < 0 )
    v8 += v14 + 1;
  v9 = v8 & (~v8 >> 31);
  if ( v7 == 0 )
    v7 = 1;
  if ( v9 > v14 )
    v9 = v14;
  if ( v7 > v9 )
  {
    v12 = (int)a1;
    v11 = 0;
    v10 = &unk_3FB8EA;
  }
  else
  {
    v10 = (void *)(v3 + v7 - 1);
    v11 = v9 - v7 + 1;
    v12 = (int)a1;
  }
  lua_pushlstring(v12, (int)v10, v11);
  return 1;
}


//======================================================================
// sub_235E2C
// address: 0x00235E2C   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_235E2C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r4
  int v4; // r0
  int v5; // r3
  int result; // r0
  int v7; // r6
  int i; // r7
  int v9; // [sp+4h] [bp-10h]
  unsigned int v10; // [sp+Ch] [bp-8h] BYREF

  v9 = luaL_checklstring(a1, 1, &v10);
  v2 = (int)luaL_optinteger(a1, 2, 1);
  if ( v2 < 0 )
    v2 += v10 + 1;
  v3 = (~v2 >> 31) & v2;
  v4 = (int)luaL_optinteger(a1, 3, v3);
  if ( v4 < 0 )
    v4 += v10 + 1;
  v5 = (~v4 >> 31) & v4;
  if ( v3 == 0 )
    v3 = 1;
  if ( v5 > v10 )
    v5 = v10;
  result = 0;
  if ( v3 <= v5 )
  {
    v7 = v5 - v3 + 1;
    if ( v5 + 1 <= v5 )
      luaL_error((int)a1, (int)"string slice too long");
    luaL_checkstack(a1, v5 - v3 + 1, "string slice too long");
    for ( i = 0; i < v7; ++i )
      lua_pushinteger((int)a1, *(unsigned __int8 *)(v9 + v3 + i - 1));
    return v7;
  }
  return result;
}


//======================================================================
// sub_235ECC
// address: 0x00235ECC   size: 0x274 (628 bytes)
//======================================================================
int __fastcall sub_235ECC(_DWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  unsigned int v6; // r3
  unsigned __int8 *v7; // r6
  int v8; // r0
  int v9; // r7
  unsigned __int8 *v10; // r6
  _DWORD *v11; // r3
  int v12; // r2
  int result; // r0
  _DWORD *v14; // r7
  int v15; // r3
  int v16; // r1
  int v17; // r3
  int v18; // r0
  unsigned __int8 *v19; // r7
  int v20; // r0
  int v21; // r0
  _DWORD *v22; // r0
  size_t v23; // r7
  _BOOL4 v24; // r0
  unsigned int v25; // r3
  _DWORD *v26; // r0
  unsigned __int8 *v27; // r1
  unsigned __int8 *v28; // [sp+4h] [bp-8h]

  while ( 1 )
  {
    v6 = *a3;
    if ( v6 != 37 )
      break;
    v15 = a3[1];
    if ( v15 == 98 )
    {
      if ( a3[2] == 0 || a3[3] == 0 )
        luaL_error(a1[2], (int)"unbalanced pattern");
      v16 = *a2;
      if ( a3[2] == v16 )
      {
        v17 = 1;
        while ( (unsigned int)(a2 + 1) < a1[1] )
        {
          v18 = a2[1];
          if ( v18 == a3[3] )
          {
            if ( --v17 == 0 )
            {
              a2 += 2;
              v19 = a3 + 4;
              goto LABEL_36;
            }
          }
          else
          {
            v17 += v18 == v16;
          }
          ++a2;
        }
      }
      return 0;
    }
    if ( v15 == 102 )
    {
      v28 = a3 + 2;
      if ( a3[2] != 91 )
        luaL_error(a1[2], (int)"missing '[' after '%%f' in pattern");
      v19 = sub_235CAC(a1 + 2, v28);
      if ( a2 == (unsigned __int8 *)*a1 )
        v20 = 0;
      else
        v20 = *(a2 - 1);
      if ( sub_2354EC(v20, v28, (unsigned int)(v19 - 1)) != 0 || sub_2354EC(*a2, v28, (unsigned int)(v19 - 1)) == 0 )
        return 0;
      goto LABEL_36;
    }
    if ( (unsigned int)(v15 - 48) <= 9 )
    {
      v21 = v15 - 49;
      if ( v15 - 49 < 0 || v21 >= a1[3] || a1[2 * v15 - 93] == -1 )
        luaL_error(a1[2], (int)"invalid capture index");
      v22 = &a1[2 * v21];
      v23 = v22[5];
      if ( a1[1] - (int)a2 < v23 )
        return 0;
      if ( j_memcmp((const void *)v22[4], a2, v23) != 0 )
        return 0;
      a2 += v23;
      if ( a2 == nullptr )
        return 0;
      v19 = a3 + 2;
      goto LABEL_36;
    }
LABEL_59:
    v19 = sub_235CAC(a1 + 2, a3);
    v24 = false;
    if ( (unsigned int)a2 < a1[1] )
      v24 = sub_235C80(*a2, a3, (int)v19) != 0;
    v25 = *v19;
    if ( v25 == 43 )
    {
      if ( v24 )
      {
        v27 = a2 + 1;
        v26 = a1;
        return sub_236158(v26, v27, a3, v19);
      }
      return 0;
    }
    if ( v25 > 0x2B )
    {
      if ( v25 == 45 )
      {
        while ( 1 )
        {
          result = sub_235ECC(a1, a2, v19 + 1);
          if ( result != 0 )
            break;
          if ( (unsigned int)a2 >= a1[1] )
            break;
          result = sub_235C80(*a2, a3, (int)v19);
          if ( result == 0 )
            break;
          ++a2;
        }
        return result;
      }
      if ( *v19 == 63 )
      {
        ++v19;
        if ( v24 )
        {
          result = sub_235ECC(a1, a2 + 1, v19);
          if ( result != 0 )
            return result;
        }
        goto LABEL_36;
      }
    }
    else if ( v25 == 42 )
    {
      v26 = a1;
      v27 = a2;
      return sub_236158(v26, v27, a3, v19);
    }
    if ( !v24 )
      return 0;
    ++a2;
LABEL_36:
    a3 = v19;
  }
  if ( v6 > 0x25 )
  {
    if ( v6 == 40 )
    {
      v9 = a1[3];
      if ( a3[1] == 41 )
      {
        v10 = a3 + 2;
        if ( v9 > 31 )
          luaL_error(a1[2], (int)"too many captures");
        v11 = &a1[2 * v9];
        v11[4] = a2;
        v12 = 2;
      }
      else
      {
        v10 = a3 + 1;
        if ( v9 > 31 )
          luaL_error(a1[2], (int)"too many captures");
        v11 = &a1[2 * v9];
        v11[4] = a2;
        v12 = 1;
      }
      v11[5] = -v12;
      a1[3] = v9 + 1;
      result = sub_235ECC(a1, a2, v10);
      if ( result == 0 )
        --a1[3];
      return result;
    }
    if ( *a3 == 41 )
    {
      v7 = a3 + 1;
      v8 = a1[3];
      do
      {
        if ( --v8 < 0 )
          luaL_error(a1[2], (int)"invalid pattern capture");
      }
      while ( a1[2 * v8 + 5] != -1 );
      v14 = &a1[2 * v8];
      v14[5] = &a2[-v14[4]];
      result = sub_235ECC(a1, a2, v7);
      if ( result == 0 )
        v14[5] = -1;
      return result;
    }
    goto LABEL_59;
  }
  if ( *a3 == 0 )
    return (int)a2;
  if ( v6 != 36 )
    goto LABEL_59;
  result = a3[1];
  if ( a3[1] != 0 )
    goto LABEL_59;
  if ( a2 == (unsigned __int8 *)a1[1] )
    return (int)a2;
  return result;
}


//======================================================================
// sub_236158
// address: 0x00236158   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_236158(_DWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3, int a4)
{
  unsigned __int8 *v6; // r4
  unsigned __int8 *v7; // r5
  int v8; // r0
  int result; // r0
  unsigned int v12; // [sp+8h] [bp-Ch]

  v12 = a1[1];
  v6 = a2;
  do
  {
    v7 = (unsigned __int8 *)(v6 - a2);
    if ( (unsigned int)v6 >= v12 )
      break;
    v8 = sub_235C80(*v6++, a3, a4);
  }
  while ( v8 != 0 );
  do
  {
    result = sub_235ECC(a1, &v7[(_DWORD)a2], (unsigned __int8 *)(a4 + 1));
    if ( result != 0 )
      break;
  }
  while ( v7-- != nullptr );
  return result;
}


//======================================================================
// sub_23619C
// address: 0x0023619C   size: 0x158 (344 bytes)
//======================================================================
int __fastcall sub_23619C(_DWORD *a1, int a2)
{
  char *v3; // r0
  char *v4; // r6
  unsigned __int8 *v5; // r5
  unsigned int v6; // r6
  size_t i; // r6
  unsigned __int8 *v8; // r0
  char *v9; // r7
  char *v10; // r0
  unsigned __int8 *v11; // r5
  int v13; // r7
  unsigned __int8 *v14; // [sp+4h] [bp-130h]
  int v15; // [sp+8h] [bp-12Ch]
  char *v16; // [sp+Ch] [bp-128h]
  void *v17; // [sp+Ch] [bp-128h]
  size_t v19; // [sp+10h] [bp-124h]
  char *v20; // [sp+18h] [bp-11Ch] BYREF
  unsigned int v21; // [sp+1Ch] [bp-118h] BYREF
  int v22; // [sp+20h] [bp-114h] BYREF
  unsigned int v23; // [sp+24h] [bp-110h]
  _DWORD *v24; // [sp+28h] [bp-10Ch]
  int v25; // [sp+2Ch] [bp-108h]

  v15 = luaL_checklstring(a1, 1, &v20);
  v14 = (unsigned __int8 *)luaL_checklstring(a1, 2, &v21);
  v3 = luaL_optinteger(a1, 3, 1);
  if ( (int)v3 < 0 )
    v3 = &v20[(_DWORD)v3 + 1];
  if ( (int)v3 >= 0 && (v4 = v3 - 1, v3 != nullptr) )
  {
    if ( v4 > v20 )
      v4 = v20;
  }
  else
  {
    v4 = nullptr;
  }
  v5 = (unsigned __int8 *)&v4[v15];
  if ( a2 != 0 && (lua_toboolean(a1, 4) || j_strpbrk((const char *)v14, "^$*+?.([%-") == nullptr) )
  {
    v16 = &v4[v15];
    if ( v21 != 0 )
    {
      v6 = v20 - v4;
      if ( v21 <= v6 )
      {
        v19 = v21 - 1;
        for ( i = v6 - (v21 - 1); i != 0; i += v10 - v9 )
        {
          v8 = (unsigned __int8 *)j_memchr(v16, *v14, i);
          v5 = v8;
          if ( v8 == nullptr )
            break;
          v9 = (char *)(v8 + 1);
          if ( j_memcmp(v8 + 1, v14 + 1, v19) == 0 )
            goto LABEL_19;
          v10 = v16;
          v16 = (char *)(v5 + 1);
        }
      }
    }
    else if ( v5 != nullptr )
    {
LABEL_19:
      v11 = &v5[-v15];
      lua_pushinteger((int)a1, (int)(v11 + 1));
      lua_pushinteger((int)a1, (int)&v11[v21]);
      return 2;
    }
LABEL_30:
    lua_pushnil((int)a1);
    return 1;
  }
  else
  {
    v17 = nullptr;
    if ( *v14 == 94 )
    {
      ++v14;
      v17 = &dword_0 + 1;
    }
    v24 = a1;
    v22 = v15;
    v23 = (unsigned int)&v20[v15];
    while ( 1 )
    {
      v25 = 0;
      v13 = sub_235ECC(&v22, v5, v14);
      if ( v13 != 0 )
        break;
      if ( (unsigned int)v5 >= v23 || v17 != nullptr )
        goto LABEL_30;
      ++v5;
    }
    if ( a2 != 0 )
    {
      lua_pushinteger((int)a1, (int)&v5[-v15 + 1]);
      lua_pushinteger((int)a1, v13 - v15);
      return sub_235D78((int)&v22, 0, 0) + 2;
    }
    else
    {
      return sub_235D78((int)&v22, (int)v5, v13);
    }
  }
}


//======================================================================
// sub_2362F8
// address: 0x002362F8   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_2362F8(_DWORD *a1)
{
  return sub_23619C(a1, 0);
}


//======================================================================
// sub_236302
// address: 0x00236302   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_236302(_DWORD *a1)
{
  return sub_23619C(a1, 1);
}


//======================================================================
// sub_23630C
// address: 0x0023630C   size: 0x24C (588 bytes)
//======================================================================
int __fastcall sub_23630C(_DWORD *a1)
{
  unsigned __int8 *v1; // r4
  int v2; // r6
  _DWORD *v3; // r5
  unsigned int v4; // r5
  _BYTE *v5; // r7
  _BYTE *v6; // r3
  int v7; // r1
  int v8; // r0
  int v9; // r0
  const char *v10; // r0
  _BYTE *v11; // r3
  char v12; // r2
  unsigned int v14; // [sp+0h] [bp-54Ch]
  unsigned __int8 *v16; // [sp+8h] [bp-544h]
  int v17; // [sp+Ch] [bp-540h]
  int v18; // [sp+10h] [bp-53Ch]
  int v19; // [sp+14h] [bp-538h]
  char *v20; // [sp+18h] [bp-534h]
  int v21; // [sp+20h] [bp-52Ch] BYREF
  unsigned int v22; // [sp+24h] [bp-528h] BYREF
  unsigned __int8 *v23; // [sp+28h] [bp-524h] BYREF
  unsigned __int8 *v24; // [sp+2Ch] [bp-520h]
  _DWORD *v25; // [sp+30h] [bp-51Ch]
  int v26; // [sp+34h] [bp-518h]
  int v27[259]; // [sp+138h] [bp-414h] BYREF
  _BYTE v28[8]; // [sp+544h] [bp-8h] BYREF

  v1 = (unsigned __int8 *)luaL_checklstring(a1, 1, &v21);
  v16 = (unsigned __int8 *)luaL_checklstring(a1, 2, nullptr);
  v2 = lua_type(a1, 3);
  v20 = luaL_optinteger(a1, 4, v21 + 1);
  v18 = 0;
  if ( *v16 == 94 )
  {
    ++v16;
    v18 = 1;
  }
  if ( (unsigned int)(v2 - 3) > 3 )
    luaL_argerror((int)a1, 3, "string/function/table expected");
  luaL_buffinit((int)a1, v27);
  v23 = v1;
  v25 = a1;
  v24 = &v1[v21];
  v17 = 0;
  do
  {
    if ( v17 >= (int)v20 )
      break;
    v26 = 0;
    v14 = sub_235ECC(&v23, v1, v16);
    if ( v14 == 0 )
      goto LABEL_31;
    v3 = v25;
    ++v17;
    switch ( lua_type(v25, 3) )
    {
      case 3:
      case 4:
        v4 = 0;
        v19 = lua_tolstring(v25, 3, &v22);
        break;
      case 5:
        sub_235D1C(&v23, 0, (int)v1, v14);
        lua_gettable(v3, 3);
        goto LABEL_26;
      case 6:
        lua_pushvalue(v3, 3);
        v8 = sub_235D78((int)&v23, (int)v1, v14);
        lua_call((int)v3, v8, 1);
        goto LABEL_26;
      default:
LABEL_26:
        if ( lua_toboolean(v3, -1) )
        {
          if ( !lua_isstring(v3, -1) )
          {
            v9 = lua_type(v3, -1);
            v10 = lua_typename((int)v3, v9);
            luaL_error((int)v3, (int)"invalid replacement value (a %s)", v10);
          }
        }
        else
        {
          lua_settop((int)v3, -2);
          lua_pushlstring((int)v3, (int)v1, v14 - (_DWORD)v1);
        }
        luaL_addvalue(v27);
        goto LABEL_35;
    }
    while ( v4 < v22 )
    {
      v5 = (_BYTE *)(v19 + v4);
      if ( *(_BYTE *)(v19 + v4) != 37 )
      {
        if ( v27[0] >= (unsigned int)v28 )
          luaL_prepbuffer(v27);
        v6 = (_BYTE *)v27[0]++;
LABEL_19:
        *v6 = *v5;
        goto LABEL_23;
      }
      ++v4;
      v5 = (_BYTE *)(v19 + v4);
      v7 = *(unsigned __int8 *)(v19 + v4);
      if ( (unsigned int)(v7 - 48) > 9 )
      {
        if ( v27[0] >= (unsigned int)v28 )
          luaL_prepbuffer(v27);
        v6 = (_BYTE *)v27[0]++;
        goto LABEL_19;
      }
      if ( v7 == 48 )
      {
        luaL_addlstring(v27, (char *)v1, v14 - (_DWORD)v1);
      }
      else
      {
        sub_235D1C(&v23, v7 - 49, (int)v1, v14);
        luaL_addvalue(v27);
      }
LABEL_23:
      ++v4;
    }
LABEL_35:
    if ( v14 > (unsigned int)v1 )
    {
      v1 = (unsigned __int8 *)v14;
      continue;
    }
LABEL_31:
    if ( v1 >= v24 )
      break;
    if ( v27[0] >= (unsigned int)v28 )
      luaL_prepbuffer(v27);
    v11 = (_BYTE *)v27[0]++;
    v12 = *v1++;
    *v11 = v12;
  }
  while ( v18 == 0 );
  luaL_addlstring(v27, (char *)v1, v24 - v1);
  luaL_pushresult(v27);
  lua_pushinteger((int)a1, v17);
  return 2;
}


//======================================================================
// sub_236570
// address: 0x00236570   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_236570(_DWORD *a1)
{
  unsigned __int8 *i; // r4
  int result; // r0
  int v4; // r0
  int v5; // r7
  int v6; // [sp+0h] [bp-124h]
  unsigned __int8 *v7; // [sp+4h] [bp-120h]
  int v8; // [sp+Ch] [bp-118h] BYREF
  int v9; // [sp+10h] [bp-114h] BYREF
  unsigned int v10; // [sp+14h] [bp-110h]
  _DWORD *v11; // [sp+18h] [bp-10Ch]
  int v12; // [sp+1Ch] [bp-108h]

  v6 = lua_tolstring(a1, -10003, &v8);
  v7 = (unsigned __int8 *)lua_tolstring(a1, -10004, nullptr);
  v9 = v6;
  v10 = v6 + v8;
  v11 = a1;
  for ( i = (unsigned __int8 *)&lua_tointeger(a1, -10005, v8, v6 + v8)[v6]; ; ++i )
  {
    result = 0;
    if ( (unsigned int)i > v10 )
      break;
    v12 = 0;
    v4 = sub_235ECC(&v9, i, v7);
    v5 = v4;
    if ( v4 != 0 )
    {
      lua_pushinteger((int)a1, v4 - v6 + (v4 == (_DWORD)i));
      lua_replace(a1, -10005);
      return sub_235D78((int)&v9, (int)i, v5);
    }
  }
  return result;
}


//======================================================================
// sub_23668C
// address: 0x0023668C   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_23668C(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  int v6; // r3
  int v7; // r2

  if ( (unsigned int)(a3 + 1) > 0xFFFFFFF )
    sub_232368(a1);
  result = sub_23237C((int)a1, *(_DWORD *)(a2 + 12), 16 * *(_DWORD *)(a2 + 28), 16 * a3);
  v6 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 12) = result;
  v7 = 16 * v6;
  while ( v6 < a3 )
  {
    ++v6;
    result = *(_DWORD *)(a2 + 12) + v7;
    *(_DWORD *)(result + 8) = 0;
    v7 += 16;
  }
  *(_DWORD *)(a2 + 28) = a3;
  return result;
}


//======================================================================
// sub_2366CC
// address: 0x002366CC   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_2366CC(int result, int a2, int a3)
{
  _DWORD *v3; // r7
  int v5; // r4
  char v6; // r6
  int v7; // r0
  int v8; // r3
  int v9; // r1
  _DWORD *v10; // r1
  int v11; // r3

  v3 = (_DWORD *)result;
  v5 = a3;
  if ( a3 != 0 )
  {
    v7 = sub_232E40(a3 - 1);
    v6 = v7 + 1;
    if ( v7 + 1 > 26 )
      sub_22EE48(v3, (int)"table overflow");
    v5 = 1 << v6;
    if ( (unsigned int)((1 << v6) + 1) > 0x7FFFFFF )
      sub_232368(v3);
    result = sub_23237C((int)v3, 0, 0, 32 * v5);
    v8 = 0;
    *(_DWORD *)(a2 + 16) = result;
    while ( v8 < v5 )
    {
      result = *(_DWORD *)(a2 + 16);
      v9 = 32 * v8++;
      v10 = (_DWORD *)(result + v9);
      v10[7] = 0;
      v10[6] = 0;
      v10[2] = 0;
    }
  }
  else
  {
    v6 = 0;
    *(_DWORD *)(a2 + 16) = &unk_444A60;
  }
  v11 = *(_DWORD *)(a2 + 16);
  *(_BYTE *)(a2 + 7) = v6;
  *(_DWORD *)(a2 + 20) = v11 + 32 * v5;
  return result;
}


//======================================================================
// sub_236748
// address: 0x00236748   size: 0x2A (42 bytes)
//======================================================================
unsigned int __fastcall sub_236748(int a1, int a2, int a3, int a4)
{
  return *(_DWORD *)(a1 + 16) + 32 * ((a4 + a3) % (((1 << *(_BYTE *)(a1 + 7)) - 1) | 1u));
}


//======================================================================
// sub_236778
// address: 0x00236778   size: 0x78 (120 bytes)
//======================================================================
unsigned int __fastcall sub_236778(int a1, int *a2)
{
  int v3; // r4
  int v4; // r5
  int v6; // r1
  unsigned int result; // r0
  int v8; // r0
  int v9; // r3

  switch ( a2[2] )
  {
    case 1:
      v9 = *a2;
      v8 = (1 << *(_BYTE *)(a1 + 7)) - 1;
      goto LABEL_7;
    case 3:
      v3 = *a2;
      v4 = a2[1];
      if ( *(double *)a2 == 0.0 )
        result = *(_DWORD *)(a1 + 16);
      else
        result = sub_236748(a1, v6, v3, v4);
      break;
    case 4:
      v8 = (1 << *(_BYTE *)(a1 + 7)) - 1;
      v9 = *(_DWORD *)(*a2 + 8);
LABEL_7:
      result = *(_DWORD *)(a1 + 16) + 32 * (v8 & v9);
      break;
    default:
      result = *(_DWORD *)(a1 + 16) + 32 * (*a2 % (((1 << *(_BYTE *)(a1 + 7)) - 1) | 1u));
      break;
  }
  return result;
}


//======================================================================
// sub_2367F8
// address: 0x002367F8   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_2367F8(int a1, int a2)
{
  int v3; // r6
  int v4; // r3
  int v5; // r0

  if ( *(_DWORD *)(a1 + 8) != 3 || (double)(v3 = (int)*(double *)a1) != *(double *)a1 )
    v3 = -1;
  v4 = 0;
  if ( (unsigned int)(v3 - 1) <= 0x3FFFFFF )
  {
    v5 = sub_232E40(v3 - 1);
    ++*(_DWORD *)(a2 + 4 * (v5 + 1));
    return 1;
  }
  return v4;
}


//======================================================================
// sub_236848
// address: 0x00236848   size: 0x114 (276 bytes)
//======================================================================
int __fastcall sub_236848(_DWORD *a1, int a2, int *a3)
{
  int v3; // r3
  int v6; // r6
  _DWORD *v7; // r7
  int v8; // r3
  int v9; // r6
  int v10; // r7
  int *v11; // r7
  int v12; // r2
  int v13; // r6
  int v14; // r3
  _DWORD *v15; // r2
  int v16; // r1
  int *v17; // r3
  int v18; // r2
  int v20; // [sp+0h] [bp-Ch]

  v3 = a3[2];
  if ( v3 != 0 )
  {
    if ( v3 == 3 && (double)(v20 = (int)*(double *)a3) == *(double *)a3 && v20 > 0 && v20 <= *(_DWORD *)(a2 + 28) )
    {
      v6 = v20 - 1;
    }
    else
    {
      v7 = (_DWORD *)sub_236778(a2, a3);
      while ( sub_232E60((int)(v7 + 4), (int)a3) == 0 && (v7[6] != 11 || a3[2] <= 3 || v7[4] != *a3) )
      {
        v7 = (_DWORD *)v7[7];
        if ( v7 == nullptr )
          sub_22EE48(a1, (int)"invalid key to 'next'");
      }
      v6 = (((int)v7 - *(_DWORD *)(a2 + 16)) >> 5) + *(_DWORD *)(a2 + 28);
    }
  }
  else
  {
    v6 = -1;
  }
  v8 = *(_DWORD *)(a2 + 28);
  v9 = v6 + 1;
  v10 = 16 * v9;
  while ( v9 < v8 )
  {
    if ( *(_DWORD *)(*(_DWORD *)(a2 + 12) + v10 + 8) != 0 )
    {
      *(double *)a3 = (double)(v9 + 1);
      a3[2] = 3;
      v11 = (int *)(*(_DWORD *)(a2 + 12) + v10);
      v12 = v11[1];
      a3[4] = *v11;
      a3[5] = v12;
      a3[6] = v11[2];
      return 1;
    }
    ++v9;
    v10 += 16;
  }
  v13 = v9 - v8;
  v14 = 32 * v13;
  while ( v13 < 1 << *(_BYTE *)(a2 + 7) )
  {
    v15 = (_DWORD *)(*(_DWORD *)(a2 + 16) + v14);
    if ( v15[2] != 0 )
    {
      v16 = v15[5];
      *a3 = v15[4];
      a3[1] = v16;
      a3[2] = v15[6];
      v17 = (int *)(*(_DWORD *)(a2 + 16) + v14);
      v18 = v17[1];
      a3[4] = *v17;
      a3[5] = v18;
      a3[6] = v17[2];
      return 1;
    }
    ++v13;
    v14 += 32;
  }
  return 0;
}


//======================================================================
// sub_236960
// address: 0x00236960   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_236960(_DWORD *a1, int a2, int a3)
{
  int v6; // r4

  v6 = sub_23237C((int)a1, 0, 0, 32);
  sub_23079A((int)a1, v6, 5);
  *(_DWORD *)(v6 + 8) = 0;
  *(_DWORD *)(v6 + 12) = 0;
  *(_DWORD *)(v6 + 28) = 0;
  *(_BYTE *)(v6 + 7) = 0;
  *(_BYTE *)(v6 + 6) = -1;
  *(_DWORD *)(v6 + 16) = &unk_444A60;
  sub_23668C(a1, v6, a2);
  sub_2366CC((int)a1, v6, a3);
  return v6;
}


//======================================================================
// sub_2369B0
// address: 0x002369B0   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_2369B0(int a1, int a2)
{
  void *v3; // r1

  v3 = *(void **)(a2 + 16);
  if ( v3 != &unk_444A60 )
    sub_23237C(a1, (int)v3, 32 << *(_BYTE *)(a2 + 7), 0);
  sub_23237C(a1, *(_DWORD *)(a2 + 12), 16 * *(_DWORD *)(a2 + 28), 0);
  return sub_23237C(a1, a2, 32, 0);
}


//======================================================================
// sub_2369F0
// address: 0x002369F0   size: 0x64 (100 bytes)
//======================================================================
char *__fastcall sub_2369F0(_DWORD *a1, int a2)
{
  double v4; // r4
  int v6; // r1
  unsigned int v7; // r6

  if ( (unsigned int)(a2 - 1) < a1[7] )
    return (char *)(a1[3] + 16 * (a2 + 0xFFFFFFF));
  v4 = (double)a2;
  if ( (double)a2 == 0.0 )
    v7 = a1[4];
  else
    v7 = sub_236748((int)a1, v6, SLODWORD(v4), SHIDWORD(v4));
  do
  {
    if ( *(_DWORD *)(v7 + 24) == 3 && *(double *)(v7 + 16) == v4 )
      return (char *)v7;
    v7 = *(_DWORD *)(v7 + 28);
  }
  while ( v7 != 0 );
  return "";
}


//======================================================================
// sub_236A68
// address: 0x00236A68   size: 0x2E (46 bytes)
//======================================================================
char *__fastcall sub_236A68(int a1, int a2)
{
  char *result; // r0

  result = (char *)(*(_DWORD *)(a1 + 16) + 32 * (((1 << *(_BYTE *)(a1 + 7)) - 1) & *(_DWORD *)(a2 + 8)));
  while ( *((_DWORD *)result + 6) != 4 || *((_DWORD *)result + 4) != a2 )
  {
    result = *((char **)result + 7);
    if ( result == nullptr )
      return "";
  }
  return result;
}


//======================================================================
// sub_236A9C
// address: 0x00236A9C   size: 0x74 (116 bytes)
//======================================================================
char *__fastcall sub_236A9C(_DWORD *a1, int *a2)
{
  int v2; // r3
  double v5; // r4
  double v6; // r0
  unsigned int v7; // r4

  v2 = a2[2];
  switch ( v2 )
  {
    case 3:
      LODWORD(v5) = *a2;
      HIDWORD(v6) = a2[1];
      HIDWORD(v5) = HIDWORD(v6);
      LODWORD(v6) = LODWORD(v5);
      if ( (double)(int)v6 == v5 )
        return sub_2369F0(a1, (int)v6);
      break;
    case 4:
      return sub_236A68((int)a1, *a2);
    case 0:
      return "";
    default:
      break;
  }
  v7 = sub_236778((int)a1, a2);
  do
  {
    if ( sub_232E60(v7 + 16, (int)a2) != 0 )
      return (char *)v7;
    v7 = *(_DWORD *)(v7 + 28);
  }
  while ( v7 != 0 );
  return "";
}


//======================================================================
// sub_236B18
// address: 0x00236B18   size: 0x34 (52 bytes)
//======================================================================
char *__fastcall sub_236B18(double a1, int a2, int a3)
{
  char *result; // r0
  double v6; // [sp+0h] [bp-10h] BYREF
  int v7; // [sp+8h] [bp-8h]
  int v8; // [sp+Ch] [bp-4h]

  v6 = a1;
  v7 = a2;
  v8 = a3;
  result = sub_2369F0((_DWORD *)HIDWORD(a1), a2);
  if ( result == "" )
  {
    v6 = (double)a2;
    v7 = 3;
    return (char *)((int (__fastcall *)(_DWORD, _DWORD, double *))sub_236C68)(LODWORD(a1), HIDWORD(a1), &v6);
  }
  return result;
}


//======================================================================
// sub_236B50
// address: 0x00236B50   size: 0xEA (234 bytes)
//======================================================================
_DWORD *__fastcall sub_236B50(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0
  int v9; // r3
  _DWORD *v10; // r7
  char *v11; // r0
  int v12; // r2
  int v13; // r2
  int v14; // r7
  char *v15; // r6
  int v16; // r2
  int v17; // [sp+0h] [bp-1Ch]
  int v18; // [sp+4h] [bp-18h]
  char *v19; // [sp+8h] [bp-14h]
  int v20; // [sp+Ch] [bp-10h]
  char v21; // [sp+10h] [bp-Ch]

  v18 = *(_DWORD *)(a2 + 28);
  v21 = *(_BYTE *)(a2 + 7);
  v19 = *(char **)(a2 + 16);
  if ( a3 > v18 )
    sub_23668C(a1, a2, a3);
  result = (_DWORD *)sub_2366CC((int)a1, a2, a4);
  if ( a3 < v18 )
  {
    *(_DWORD *)(a2 + 28) = a3;
    v20 = 16 * a3;
    v17 = a3;
    do
    {
      v9 = *(_DWORD *)(a2 + 12);
      v10 = (_DWORD *)(v9 + v20);
      if ( *(_DWORD *)(v9 + v20 + 8) != 0 )
      {
        v11 = sub_236B18(COERCE_DOUBLE(__PAIR64__(a2, (unsigned int)a1)), v17 + 1, v9);
        v12 = v10[1];
        *(_DWORD *)v11 = *v10;
        *((_DWORD *)v11 + 1) = v12;
        *((_DWORD *)v11 + 2) = v10[2];
      }
      v13 = v17 + 1;
      v17 = v13;
      v20 += 16;
    }
    while ( v13 != v18 );
    if ( (unsigned int)(a3 + 1) > 0xFFFFFFF )
      sub_232368(a1);
    result = (_DWORD *)sub_23237C((int)a1, *(_DWORD *)(a2 + 12), 16 * v13, 16 * a3);
    *(_DWORD *)(a2 + 12) = result;
  }
  v14 = (1 << v21) - 1;
  v15 = &v19[32 * v14 + 8];
  while ( v14 >= 0 )
  {
    if ( *(_DWORD *)v15 != 0 )
    {
      result = (_DWORD *)sub_236E04(a1, a2, v15 + 8);
      v16 = *((_DWORD *)v15 - 1);
      *result = *((_DWORD *)v15 - 2);
      result[1] = v16;
      result[2] = *(_DWORD *)v15;
    }
    --v14;
    v15 -= 32;
  }
  if ( v19 != (char *)&unk_444A60 )
    return (_DWORD *)sub_23237C((int)a1, (int)v19, 32 << v21, 0);
  return result;
}


//======================================================================
// sub_236C44
// address: 0x00236C44   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall sub_236C44(_DWORD *a1, int a2, int a3)
{
  int v3; // r3

  if ( *(_UNKNOWN **)(a2 + 16) == &unk_444A60 )
    v3 = 0;
  else
    v3 = 1 << *(_BYTE *)(a2 + 7);
  return sub_236B50(a1, a2, a3, v3);
}


//======================================================================
// sub_236C68
// address: 0x00236C68   size: 0x194 (404 bytes)
//======================================================================
int __fastcall sub_236C68(_DWORD *a1, int a2, int *a3)
{
  int *v5; // r5
  unsigned int v6; // r2
  unsigned int v7; // r3
  int *v8; // r6
  int i; // r3
  int v10; // r3
  int v11; // r12
  int v12; // r2
  int v13; // r1
  int v14; // r6
  int v15; // r5
  int v16; // r6
  int v18; // r0
  int v19; // r0
  int v20; // r3
  int v21; // r12
  int v22; // r2
  int v23; // r1
  int j; // r0
  int v25; // r6
  unsigned int v27; // r0
  int v28; // r3
  int v29; // [sp+0h] [bp-8Ch]
  int v30; // [sp+8h] [bp-84h]
  int v31; // [sp+8h] [bp-84h]
  int v32; // [sp+Ch] [bp-80h]
  int v33; // [sp+Ch] [bp-80h]
  int v34; // [sp+Ch] [bp-80h]
  _BYTE v36[112]; // [sp+1Ch] [bp-70h] BYREF

  v5 = (int *)sub_236778(a2, a3);
  if ( v5[2] != 0 || v5 == (int *)&unk_444A60 )
  {
    v6 = *(_DWORD *)(a2 + 16);
    while ( 1 )
    {
      v7 = *(_DWORD *)(a2 + 20);
      v8 = (int *)(v7 - 32);
      *(_DWORD *)(a2 + 20) = v7 - 32;
      if ( v7 <= v6 )
        break;
      if ( *(_DWORD *)(v7 - 8) == 0 )
      {
        if ( v7 != 32 )
        {
          v27 = sub_236778(a2, v5 + 4);
          if ( (int *)v27 == v5 )
          {
            v8[7] = v5[7];
            v5[7] = (int)v8;
            v5 = v8;
          }
          else
          {
            while ( *(int **)(v27 + 28) != v5 )
              v27 = *(_DWORD *)(v27 + 28);
            *(_DWORD *)(v27 + 28) = v8;
            j_memcpy(v8, v5, 0x20u);
            v5[7] = 0;
            v5[2] = 0;
          }
          goto LABEL_37;
        }
        break;
      }
    }
    for ( i = 0; i != 108; i += 4 )
      *(_DWORD *)&v36[i] = 0;
    v10 = 0;
    v30 = 0;
    v11 = *(_DWORD *)(a2 + 28);
    v12 = 1;
    v13 = 1;
    do
    {
      if ( v13 <= v11 )
      {
        v32 = v13;
      }
      else
      {
        if ( v12 > v11 )
          break;
        v32 = v11;
      }
      v14 = 0;
      v29 = 16 * (v12 + 0xFFFFFFF);
      while ( v12 <= v32 )
      {
        ++v12;
        v14 += *(_DWORD *)(*(_DWORD *)(a2 + 12) + v29 + 8) != 0;
        v29 += 16;
      }
      v13 *= 2;
      *(_DWORD *)&v36[v10] += v14;
      v10 += 4;
      v30 += v14;
    }
    while ( v10 != 108 );
    v15 = 0;
    v16 = 1 << *(_BYTE *)(a2 + 7);
    v33 = 0;
    while ( v16-- != 0 )
    {
      v18 = *(_DWORD *)(a2 + 16) + 32 * v16;
      if ( *(_DWORD *)(v18 + 8) != 0 )
      {
        v15 += sub_2367F8(v18 + 16, (int)v36);
        ++v33;
      }
    }
    v19 = sub_2367F8((int)a3, (int)v36);
    v20 = 0;
    v21 = v30 + v15 + v19;
    v34 = v30 + v33 + 1;
    v22 = 0;
    v31 = 0;
    v23 = 0;
    for ( j = 1; j >> 1 < v21; j *= 2 )
    {
      v25 = *(_DWORD *)&v36[v20];
      if ( v25 > 0 )
      {
        v23 += v25;
        if ( v23 > j >> 1 )
        {
          v22 = j;
          v31 = v23;
        }
      }
      v20 += 4;
      if ( v23 == v21 )
        break;
    }
    sub_236B50(a1, a2, v22, v34 - v31);
    return sub_236E04(a1, a2, a3);
  }
  else
  {
LABEL_37:
    v28 = a3[1];
    v5[4] = *a3;
    v5[5] = v28;
    v5[6] = a3[2];
    if ( a3[2] > 3 && *(unsigned __int8 *)(*a3 + 5) << 30 != 0 && (*(_BYTE *)(a2 + 5) & 4) != 0 )
      sub_230788((int)a1, a2);
    return (int)v5;
  }
}


//======================================================================
// sub_236E04
// address: 0x00236E04   size: 0x54 (84 bytes)
//======================================================================
char *__fastcall sub_236E04(_DWORD *a1, int a2, int *a3)
{
  char *result; // r0
  int v7; // r3

  result = sub_236A9C((_DWORD *)a2, a3);
  *(_BYTE *)(a2 + 6) = 0;
  if ( result == "" )
  {
    v7 = a3[2];
    if ( v7 == 0 )
      sub_22EE48(a1, (int)"table index is nil");
    return (char *)sub_236C68(a1, a2, a3);
  }
  return result;
}


//======================================================================
// sub_236E64
// address: 0x00236E64   size: 0x2C (44 bytes)
//======================================================================
char *__fastcall sub_236E64(_DWORD *a1, int a2, int a3, int a4)
{
  char *result; // r0
  int v8[2]; // [sp+0h] [bp-10h] BYREF
  int v9; // [sp+8h] [bp-8h]
  int v10; // [sp+Ch] [bp-4h]

  v8[0] = (int)a1;
  v8[1] = a2;
  v9 = a3;
  v10 = a4;
  result = sub_236A68(a2, a3);
  if ( result == "" )
  {
    v8[0] = a3;
    v9 = 4;
    return (char *)sub_236C68(a1, a2, v8);
  }
  return result;
}


//======================================================================
// sub_236E94
// address: 0x00236E94   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_236E94(int a1)
{
  unsigned int v1; // r4
  int result; // r0
  int v4; // r2
  unsigned int v5; // r3
  unsigned int i; // r5
  int j; // r4
  unsigned int v8; // r7

  v1 = *(_DWORD *)(a1 + 28);
  result = v1;
  if ( v1 == 0 || (v4 = *(_DWORD *)(a1 + 12), (v5 = *(_DWORD *)(v4 + 16 * (v1 + 0xFFFFFFF) + 8)) != 0) )
  {
    if ( *(_UNKNOWN **)(a1 + 16) != &unk_444A60 )
    {
      for ( i = v1 + 1; *((_DWORD *)sub_2369F0((_DWORD *)a1, i) + 2) != 0; i *= 2 )
      {
        if ( 2 * i > 0x7FFFFFFD )
        {
          for ( j = 1; *((_DWORD *)sub_2369F0((_DWORD *)a1, j) + 2) != 0; ++j )
            ;
          return j - 1;
        }
        v1 = i;
      }
      while ( i - v1 > 1 )
      {
        v8 = (i + v1) >> 1;
        if ( *((_DWORD *)sub_2369F0((_DWORD *)a1, v8) + 2) == 0 )
        {
          i = (i + v1) >> 1;
          v8 = v1;
        }
        v1 = v8;
      }
      return v1;
    }
  }
  else
  {
LABEL_3:
    for ( result = v5; v1 - result > 1; v1 = (v1 + result) >> 1 )
    {
      v5 = (v1 + result) >> 1;
      if ( *(_DWORD *)(v4 + 16 * (v5 + 0xFFFFFFF) + 8) != 0 )
        goto LABEL_3;
    }
  }
  return result;
}


//======================================================================
// sub_236F3C
// address: 0x00236F3C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall __noreturn sub_236F3C(_DWORD *a1)
{
  luaL_checktype(a1, 1, 5);
  luaL_error((int)a1, (int)"'setn' is obsolete");
}


//======================================================================
// sub_236F64
// address: 0x00236F64   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_236F64(_DWORD *a1, int a2, int a3)
{
  lua_rawseti(a1, 1, a2);
  return lua_rawseti(a1, 1, a3);
}


//======================================================================
// sub_236F80
// address: 0x00236F80   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_236F80(_DWORD *a1)
{
  int v2; // r6
  char *v3; // r4
  int result; // r0

  luaL_checktype(a1, 1, 5);
  v2 = lua_objlen(a1, 1);
  v3 = luaL_optinteger(a1, 2, v2);
  result = 0;
  if ( (int)v3 > 0 && (int)v3 <= v2 )
  {
    lua_rawgeti(a1, 1, (int)v3);
    while ( v3 != (char *)v2 )
    {
      lua_rawgeti(a1, 1, (int)(v3 + 1));
      lua_rawseti(a1, 1, (int)v3++);
    }
    lua_pushnil((int)a1);
    lua_rawseti(a1, 1, (int)v3);
    return 1;
  }
  return result;
}


//======================================================================
// sub_236FE8
// address: 0x00236FE8   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_236FE8(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r2
  int v5; // r3
  char *v6; // r7
  int v7; // r5

  luaL_checktype(a1, 1, 5);
  v2 = lua_objlen(a1, 1) + 1;
  v3 = lua_gettop((int)a1);
  if ( v3 != 2 )
  {
    if ( v3 != 3 )
      luaL_error((int)a1, (int)"wrong number of arguments to 'insert'");
    v6 = luaL_checkinteger(a1, 2, v4, v5);
    v7 = (int)v6;
    if ( (int)v6 < v2 )
      goto LABEL_6;
    while ( v7 > (int)v6 )
    {
      v2 = v7 - 1;
      lua_rawgeti(a1, 1, v7 - 1);
      lua_rawseti(a1, 1, v7);
LABEL_6:
      v7 = v2;
    }
    v2 = (int)v6;
  }
  lua_rawseti(a1, 1, v2);
  return 0;
}


//======================================================================
// sub_23705C
// address: 0x0023705C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_23705C(_DWORD *a1)
{
  int result; // r0

  luaL_checktype(a1, 1, 5);
  luaL_checktype(a1, 2, 6);
  lua_pushnil((int)a1);
  while ( 1 )
  {
    result = lua_next(a1, 1);
    if ( result == 0 )
      break;
    lua_pushvalue(a1, 2);
    lua_pushvalue(a1, -3);
    lua_pushvalue(a1, -3);
    lua_call((int)a1, 2, 1);
    if ( lua_type(a1, -1) != 0 )
      return 1;
    lua_settop((int)a1, -3);
  }
  return result;
}


//======================================================================
// sub_2370C8
// address: 0x002370C8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_2370C8(_DWORD *a1)
{
  double v1; // r4
  int v3; // r1
  int v4; // r2
  int v5; // r3
  double v7; // [sp+0h] [bp-8h]

  v1 = 0.0;
  luaL_checktype(a1, 1, 5);
  lua_pushnil((int)a1);
  while ( lua_next(a1, 1) != 0 )
  {
    lua_settop((int)a1, -2);
    if ( lua_type(a1, -1) == 3 )
    {
      v7 = COERCE_DOUBLE(lua_tonumber(a1, -1, v4, v5));
      if ( v7 <= v1 )
        v7 = v1;
      v1 = v7;
    }
  }
  lua_pushnumber((int)a1, v3, SLODWORD(v1), SHIDWORD(v1));
  return 1;
}


//======================================================================
// sub_237140
// address: 0x00237140   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_237140(_DWORD *a1)
{
  int v2; // r0

  luaL_checktype(a1, 1, 5);
  v2 = lua_objlen(a1, 1);
  lua_pushinteger((int)a1, v2);
  return 1;
}


//======================================================================
// sub_237160
// address: 0x00237160   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_237160(_DWORD *a1)
{
  int v2; // r6
  int i; // r5

  luaL_checktype(a1, 1, 5);
  v2 = lua_objlen(a1, 1);
  luaL_checktype(a1, 2, 6);
  for ( i = 1; ; ++i )
  {
    if ( i > v2 )
      return 0;
    lua_pushvalue(a1, 2);
    lua_pushinteger((int)a1, i);
    lua_rawgeti(a1, 1, i);
    lua_call((int)a1, 2, 1);
    if ( lua_type(a1, -1) != 0 )
      break;
    lua_settop((int)a1, -2);
  }
  return 1;
}


//======================================================================
// sub_2371D0
// address: 0x002371D0   size: 0x44 (68 bytes)
//======================================================================
int *__fastcall sub_2371D0(_DWORD *a1, int *a2, int a3)
{
  int v6; // r0
  const char *v7; // r0

  lua_rawgeti(a1, 1, a3);
  if ( !lua_isstring(a1, -1) )
  {
    v6 = lua_type(a1, -1);
    v7 = lua_typename((int)a1, v6);
    luaL_error((int)a1, (int)"invalid value (%s) at index %d in table for 'concat'", v7, a3);
  }
  return luaL_addvalue(a2);
}


//======================================================================
// sub_237218
// address: 0x00237218   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall sub_237218(_DWORD *a1)
{
  char *v2; // r5
  int v3; // r2
  int v4; // r3
  char *v5; // r0
  char *v6; // r7
  char *v8; // [sp+8h] [bp-424h]
  int v9; // [sp+14h] [bp-418h] BYREF
  int v10[249]; // [sp+18h] [bp-414h] BYREF

  v8 = (char *)luaL_optlstring(a1, 2, (const char *)&unk_3FB8EA, (size_t *)&v9);
  luaL_checktype(a1, 1, 5);
  v2 = luaL_optinteger(a1, 3, 1);
  if ( lua_type(a1, 4) > 0 )
    v5 = luaL_checkinteger(a1, 4, v3, v4);
  else
    v5 = (char *)lua_objlen(a1, 1);
  v6 = v5;
  luaL_buffinit((int)a1, v10);
  while ( (int)v2 < (int)v6 )
  {
    sub_2371D0(a1, v10, (int)v2);
    luaL_addlstring(v10, v8, v9);
    ++v2;
  }
  if ( v2 == v6 )
    sub_2371D0(a1, v10, (int)v2);
  luaL_pushresult(v10);
  return 1;
}


//======================================================================
// sub_2372DC
// address: 0x002372DC   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_2372DC(_DWORD *a1, int a2, int a3)
{
  _BOOL4 v6; // r5

  if ( lua_type(a1, 2) == 0 )
    return lua_lessthan(a1, a2, a3);
  lua_pushvalue(a1, 2);
  lua_pushvalue(a1, a2 - 1);
  lua_pushvalue(a1, a3 - 2);
  lua_call((int)a1, 2, 1);
  v6 = lua_toboolean(a1, -1);
  lua_settop((int)a1, -2);
  return v6;
}


//======================================================================
// sub_237338
// address: 0x00237338   size: 0x1D6 (470 bytes)
//======================================================================
_DWORD *__fastcall sub_237338(_DWORD *result, int a2, int a3)
{
  _DWORD *v3; // r4
  _DWORD *v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r6
  int v10; // r1
  int v11; // r2
  int v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch]
  int v14; // [sp+Ch] [bp-8h]

  v3 = result;
LABEL_2:
  if ( a2 >= a3 )
    return result;
  lua_rawgeti(v3, 1, a2);
  lua_rawgeti(v3, 1, a3);
  result = sub_2372DC(v3, -1, -2) != 0 ? sub_236F64(v3, a2, a3) : (_DWORD *)lua_settop((int)v3, -3);
  if ( a3 - a2 == 1 )
    return result;
  lua_rawgeti(v3, 1, (a2 + a3) / 2);
  lua_rawgeti(v3, 1, a2);
  if ( sub_2372DC(v3, -2, -1) != 0 )
  {
    v6 = v3;
    v7 = (a2 + a3) / 2;
    v8 = a2;
LABEL_11:
    result = sub_236F64(v6, v7, v8);
    goto LABEL_13;
  }
  lua_settop((int)v3, -2);
  lua_rawgeti(v3, 1, a3);
  if ( sub_2372DC(v3, -1, -2) != 0 )
  {
    v6 = v3;
    v7 = (a2 + a3) / 2;
    v8 = a3;
    goto LABEL_11;
  }
  result = (_DWORD *)lua_settop((int)v3, -3);
LABEL_13:
  if ( a3 - a2 != 2 )
  {
    lua_rawgeti(v3, 1, (a2 + a3) / 2);
    lua_pushvalue(v3, -1);
    v14 = a3 - 1;
    lua_rawgeti(v3, 1, a3 - 1);
    sub_236F64(v3, (a2 + a3) / 2, a3 - 1);
    v13 = a2;
    v12 = a3 - 1;
    while ( 1 )
    {
      v9 = v13 + 1;
      lua_rawgeti(v3, 1, v13 + 1);
      if ( sub_2372DC(v3, -1, -2) != 0 )
      {
        if ( v9 > a3 )
          luaL_error((int)v3, (int)"invalid order function for sorting");
        lua_settop((int)v3, -2);
      }
      else
      {
        while ( 1 )
        {
          lua_rawgeti(v3, 1, --v12);
          if ( sub_2372DC(v3, -3, -1) == 0 )
            break;
          if ( v12 < a2 )
            luaL_error((int)v3, (int)"invalid order function for sorting");
          lua_settop((int)v3, -2);
        }
        if ( v12 < v9 )
        {
          lua_settop((int)v3, -4);
          lua_rawgeti(v3, 1, v14);
          lua_rawgeti(v3, 1, v9);
          sub_236F64(v3, v14, v9);
          if ( v9 - a2 >= a3 - v9 )
          {
            v11 = a3;
            a3 = v13;
            v10 = v13 + 2;
          }
          else
          {
            v10 = a2;
            v11 = v13;
            a2 = v13 + 2;
          }
          result = (_DWORD *)sub_237338(v3, v10, v11, v13 + 2);
          goto LABEL_2;
        }
        sub_236F64(v3, v9, v12);
      }
      ++v13;
    }
  }
  return result;
}


//======================================================================
// sub_237518
// address: 0x00237518   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_237518(_DWORD *a1)
{
  int v2; // r5

  luaL_checktype(a1, 1, 5);
  v2 = lua_objlen(a1, 1);
  luaL_checkstack(a1, 40, (const char *)&unk_3FB8EA);
  if ( lua_type(a1, 2) > 0 )
    luaL_checktype(a1, 2, 6);
  lua_settop((int)a1, 2);
  sub_237338(a1, 1, v2);
  return 0;
}


//======================================================================
// sub_237588
// address: 0x00237588   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_237588(_DWORD *a1)
{
  int i; // r4
  int v3; // r7
  size_t v4; // r0
  int result; // r0
  int v6; // r3
  int v7; // r3

  for ( i = 0; i != 17; ++i )
  {
    v3 = a1[4];
    v4 = j_strlen(off_453114[i]);
    result = sub_235280(a1, off_453114[i], v4);
    v6 = 4 * (i + 46);
    *(_DWORD *)(v3 + v6 + 4) = result;
    v7 = *(_DWORD *)(a1[4] + v6 + 4);
    *(_BYTE *)(v7 + 5) |= 0x20u;
  }
  return result;
}


//======================================================================
// sub_2375CC
// address: 0x002375CC   size: 0x22 (34 bytes)
//======================================================================
char *__fastcall sub_2375CC(int a1, char a2, int a3)
{
  char *result; // r0

  result = sub_236A68(a1, a3);
  if ( *((_DWORD *)result + 2) == 0 )
  {
    *(_BYTE *)(a1 + 6) |= 1 << a2;
    return nullptr;
  }
  return result;
}


//======================================================================
// sub_2375F0
// address: 0x002375F0   size: 0x36 (54 bytes)
//======================================================================
char *__fastcall sub_2375F0(int a1, _DWORD *a2, int a3)
{
  int v3; // r3
  int v4; // r3

  v3 = a2[2];
  if ( v3 == 5 || v3 == 7 )
    v4 = *(_DWORD *)(*a2 + 8);
  else
    v4 = *(_DWORD *)(4 * (v3 + 38) + *(_DWORD *)(a1 + 16));
  if ( v4 != 0 )
    return sub_236A68(v4, *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * (a3 + 46) + 4));
  else
    return "";
}


//======================================================================
// sub_23762C
// address: 0x0023762C   size: 0x1C (28 bytes)
//======================================================================
void __fastcall __noreturn sub_23762C(int *a1, const char *a2)
{
  sub_23309C((_DWORD *)*a1, "%s: %s in precompiled chunk", (const char *)a1[3], a2);
  sub_22F13C(*a1, 3);
}


//======================================================================
// sub_23764C
// address: 0x0023764C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_23764C(int *a1)
{
  int result; // r0

  result = sub_238E14(a1[1]);
  if ( result != 0 )
    sub_23762C(a1, "unexpected end");
  return result;
}


//======================================================================
// sub_23766C
// address: 0x0023766C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_23766C(int *a1, int a2)
{
  unsigned __int8 v3; // [sp+7h] [bp-1h]

  v3 = HIBYTE(a2);
  sub_23764C(a1);
  return v3;
}


//======================================================================
// sub_237680
// address: 0x00237680   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_237680(int *a1, int a2)
{
  sub_23764C(a1);
  if ( a2 < 0 )
    sub_23762C(a1, "bad integer");
  return a2;
}


//======================================================================
// sub_2376A4
// address: 0x002376A4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_2376A4(int *a1, int a2)
{
  char *v3; // r5

  sub_23764C(a1);
  if ( a2 == 0 )
    return 0;
  v3 = (char *)sub_238E54(*a1, a1[2]);
  sub_23764C(a1);
  return sub_235280((_DWORD *)*a1, v3, a2 - 1);
}


//======================================================================
// sub_2376DC
// address: 0x002376DC   size: 0x2FE (766 bytes)
//======================================================================
int __fastcall sub_2376DC(int *a1, int a2)
{
  unsigned int v4; // r3
  int v5; // r5
  int *v6; // r3
  int v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r1
  int v11; // r1
  int v12; // r1
  int v13; // r1
  int v14; // r1
  int v15; // r1
  int v16; // r6
  _DWORD *v17; // r0
  int v18; // r1
  int v19; // r0
  unsigned int v20; // r2
  int v21; // r7
  _DWORD *v22; // r0
  int v23; // r0
  int v24; // r3
  int v25; // r1
  int i; // r1
  int *v27; // r6
  int v28; // r1
  int v29; // r3
  int v30; // r0
  int v31; // r0
  unsigned int v32; // r3
  int v33; // r6
  _DWORD *v34; // r0
  int v35; // r0
  int v36; // r1
  int v37; // r3
  int *v38; // r2
  int j; // r7
  int v40; // r0
  int v41; // r6
  _DWORD *v42; // r0
  int v43; // r1
  int v44; // r0
  unsigned int v45; // r2
  int v46; // r6
  _DWORD *v47; // r0
  int v48; // r0
  int v49; // r3
  int v50; // r1
  int v51; // r0
  int k; // r7
  int *v53; // r7
  int v54; // r7
  int v55; // r1
  int v56; // r1
  int v57; // r0
  unsigned int v58; // r3
  int v59; // r6
  _DWORD *v60; // r0
  int v61; // r0
  int v62; // r1
  int v63; // r3
  int m; // r7
  int v66; // [sp+0h] [bp-14h]
  int *v67; // [sp+0h] [bp-14h]
  int v68; // [sp+0h] [bp-14h]
  int v69; // [sp+8h] [bp-Ch]
  int v70; // [sp+Ch] [bp-8h]

  v4 = (unsigned __int16)(*(_WORD *)(*a1 + 52) + 1);
  *(_WORD *)(*a1 + 52) = v4;
  if ( v4 > 0xC8 )
    sub_23762C(a1, "code too deep");
  v5 = sub_22FCB4(*a1);
  v6 = *(int **)(*a1 + 8);
  *v6 = v5;
  v6[2] = 9;
  v7 = *(_DWORD *)(*a1 + 28);
  if ( v7 - *(_DWORD *)(*a1 + 8) <= 16 )
    sub_22F1D4((_DWORD *)*a1, 1);
  *(_DWORD *)(*a1 + 8) += 16;
  v8 = sub_2376A4(a1, v7);
  *(_DWORD *)(v5 + 32) = v8;
  if ( v8 == 0 )
    *(_DWORD *)(v5 + 32) = a2;
  *(_DWORD *)(v5 + 60) = sub_237680(a1, v9);
  *(_DWORD *)(v5 + 64) = sub_237680(a1, v10);
  *(_BYTE *)(v5 + 72) = sub_23766C(a1, v11);
  *(_BYTE *)(v5 + 73) = sub_23766C(a1, v12);
  *(_BYTE *)(v5 + 74) = sub_23766C(a1, v13);
  *(_BYTE *)(v5 + 75) = sub_23766C(a1, v14);
  v16 = sub_237680(a1, v15);
  v17 = (_DWORD *)*a1;
  if ( (unsigned int)(v16 + 1) > 0x3FFFFFFF )
    sub_232368(v17);
  *(_DWORD *)(v5 + 12) = sub_23237C((int)v17, 0, 0, 4 * v16);
  *(_DWORD *)(v5 + 44) = v16;
  sub_23764C(a1);
  v19 = sub_237680(a1, v18);
  v20 = v19 + 1;
  v21 = v19;
  v22 = (_DWORD *)*a1;
  if ( v20 > 0xFFFFFFF )
    sub_232368(v22);
  v23 = sub_23237C((int)v22, 0, 0, 16 * v21);
  v24 = 0;
  *(_DWORD *)(v5 + 8) = v23;
  *(_DWORD *)(v5 + 40) = v21;
  while ( v24 < v21 )
  {
    v25 = 16 * v24++;
    *(_DWORD *)(*(_DWORD *)(v5 + 8) + v25 + 8) = 0;
  }
  for ( i = 0; ; i = v66 + 1 )
  {
    v66 = i;
    if ( i >= v21 )
      break;
    v27 = (int *)(*(_DWORD *)(v5 + 8) + 16 * i);
    switch ( sub_23766C(a1, i) )
    {
      case 0:
        v29 = 0;
        break;
      case 1:
        *v27 = sub_23766C(a1, v28) != 0;
        v29 = 1;
        break;
      case 3:
        sub_23764C(a1);
        v29 = 3;
        *v27 = v69;
        v27[1] = v70;
        break;
      case 4:
        v30 = sub_2376A4(a1, v28);
        v29 = 4;
        *v27 = v30;
        break;
      default:
        sub_23762C(a1, "bad constant");
    }
    v27[2] = v29;
  }
  v31 = sub_237680(a1, i);
  v32 = v31 + 1;
  v33 = v31;
  v34 = (_DWORD *)*a1;
  if ( v32 > 0x3FFFFFFF )
    sub_232368(v34);
  v35 = sub_23237C((int)v34, 0, 0, 4 * v33);
  v37 = 0;
  *(_DWORD *)(v5 + 16) = v35;
  *(_DWORD *)(v5 + 52) = v33;
  v38 = nullptr;
  while ( v37 < v33 )
  {
    v36 = 4 * v37++;
    *(_DWORD *)(v36 + *(_DWORD *)(v5 + 16)) = 0;
  }
  for ( j = 0; j < v33; ++j )
  {
    v67 = (int *)(*(_DWORD *)(v5 + 16) + 4 * j);
    v40 = sub_2376DC(a1, *(_DWORD *)(v5 + 32), v38);
    v38 = v67;
    *v67 = v40;
  }
  v41 = sub_237680(a1, v36);
  v42 = (_DWORD *)*a1;
  if ( (unsigned int)(v41 + 1) > 0x3FFFFFFF )
    sub_232368(v42);
  *(_DWORD *)(v5 + 20) = sub_23237C((int)v42, 0, 0, 4 * v41);
  *(_DWORD *)(v5 + 48) = v41;
  sub_23764C(a1);
  v44 = sub_237680(a1, v43);
  v45 = v44 + 1;
  v46 = v44;
  v47 = (_DWORD *)*a1;
  if ( v45 > 0x15555555 )
    sub_232368(v47);
  v48 = sub_23237C((int)v47, 0, 0, 12 * v46);
  v49 = 0;
  *(_DWORD *)(v5 + 24) = v48;
  *(_DWORD *)(v5 + 56) = v46;
  v50 = 12;
  while ( v49 < v46 )
  {
    v51 = 12 * v49++;
    *(_DWORD *)(v51 + *(_DWORD *)(v5 + 24)) = 0;
  }
  for ( k = 0; ; k = v68 + 1 )
  {
    v68 = k;
    if ( k >= v46 )
      break;
    v53 = (int *)(*(_DWORD *)(v5 + 24) + 12 * k);
    *v53 = sub_2376A4(a1, v68);
    v54 = *(_DWORD *)(v5 + 24) + 12 * v68;
    *(_DWORD *)(v54 + 4) = sub_237680(a1, v55);
    *(_DWORD *)(v56 + 12 * v68 + 8) = sub_237680(a1, *(_DWORD *)(v5 + 24));
  }
  v57 = sub_237680(a1, v50);
  v58 = v57 + 1;
  v59 = v57;
  v60 = (_DWORD *)*a1;
  if ( v58 > 0x3FFFFFFF )
    sub_232368(v60);
  v61 = sub_23237C((int)v60, 0, 0, 4 * v59);
  v63 = 0;
  *(_DWORD *)(v5 + 28) = v61;
  *(_DWORD *)(v5 + 36) = v59;
  while ( v63 < v59 )
  {
    v62 = 4 * v63++;
    *(_DWORD *)(v62 + *(_DWORD *)(v5 + 28)) = 0;
  }
  for ( m = 0; m < v59; ++m )
    *(_DWORD *)(v62 + 4 * m) = sub_2376A4(a1, *(_DWORD *)(v5 + 28));
  if ( !sub_22EDCC(v5) )
    sub_23762C(a1, "bad code");
  *(_DWORD *)(*a1 + 8) -= 16;
  --*(_WORD *)(*a1 + 52);
  return v5;
}


//======================================================================
// sub_2379F4
// address: 0x002379F4   size: 0x2A (42 bytes)
//======================================================================
void *__fastcall sub_2379F4(_BYTE *a1)
{
  void *result; // r0

  result = j_memcpy(a1, "\x1BLua", 4u);
  a1[4] = 81;
  a1[6] = 1;
  a1[7] = 4;
  a1[8] = 4;
  a1[9] = 4;
  a1[5] = 0;
  a1[10] = 8;
  a1[11] = 0;
  return result;
}


//======================================================================
// sub_237A24
// address: 0x00237A24   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_237A24(_DWORD *a1, int a2, int a3, const char *a4)
{
  int v5; // r6
  int v6; // r0
  int v8[4]; // [sp+Ch] [bp-30h] BYREF
  _BYTE v9[12]; // [sp+1Ch] [bp-20h] BYREF
  _BYTE v10[12]; // [sp+28h] [bp-14h] BYREF

  v5 = *(unsigned __int8 *)a4;
  if ( v5 == 64 || v5 == 61 )
  {
    ++a4;
  }
  else if ( v5 == 27 )
  {
    a4 = "binary string";
  }
  v8[3] = (int)a4;
  v8[1] = a2;
  v8[2] = a3;
  v8[0] = (int)a1;
  sub_2379F4(v9);
  sub_23764C(v8);
  if ( j_memcmp(v9, v10, 0xCu) != 0 )
    sub_23762C(v8, "bad header");
  v6 = sub_235280(a1, "=?", 2u);
  return sub_2376DC(v8, v6);
}


//======================================================================
// sub_237AB8
// address: 0x00237AB8   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_237AB8(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r5
  _DWORD *v7; // r1
  int v8; // r7
  _DWORD *v9; // r2
  int v10; // r7
  _DWORD *v11; // r3
  int v12; // r2
  char *v13; // r1
  int result; // r0
  _DWORD *v15; // r3
  _DWORD *v16; // r1
  int v17; // r5

  v6 = a2 - a1[8];
  v7 = (_DWORD *)a1[2];
  v8 = a3[1];
  *v7 = *a3;
  v7[1] = v8;
  v7[2] = a3[2];
  v9 = (_DWORD *)a1[2];
  v10 = a4[1];
  v9[4] = *a4;
  v9[5] = v10;
  v9[6] = a4[2];
  v11 = (_DWORD *)a1[2];
  v12 = a5[1];
  v11[8] = *a5;
  v11[9] = v12;
  v11[10] = a5[2];
  if ( a1[7] - a1[2] <= 48 )
    sub_22F1D4(a1, 3);
  v13 = (char *)a1[2];
  a1[2] = v13 + 48;
  result = sub_22F73C((int)a1, v13, 1);
  v15 = (_DWORD *)(a1[2] - 16);
  v16 = (_DWORD *)(a1[8] + v6);
  a1[2] = v15;
  v17 = v15[1];
  *v16 = *v15;
  v16[1] = v17;
  v16[2] = v15[2];
  return result;
}


//======================================================================
// sub_237B26
// address: 0x00237B26   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_237B26(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  char *v9; // r2
  int result; // r0

  v9 = sub_2375F0((int)a1, a2, a5);
  if ( *((_DWORD *)v9 + 2) == 0 )
    v9 = sub_2375F0((int)a1, a3, a5);
  result = *((_DWORD *)v9 + 2);
  if ( result != 0 )
  {
    sub_237AB8(a1, a4, v9, a2, a3);
    return 1;
  }
  return result;
}


//======================================================================
// sub_237B60
// address: 0x00237B60   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_237B60(int a1, int a2)
{
  int v2; // r5
  int v3; // r4
  const char *v4; // r6
  const char *v5; // r7
  int result; // r0
  size_t v7; // r0
  size_t v8; // r0

  v2 = *(_DWORD *)(a1 + 12);
  v3 = *(_DWORD *)(a2 + 12);
  v4 = (const char *)(a1 + 16);
  v5 = (const char *)(a2 + 16);
  while ( 1 )
  {
    result = j_strcoll(v4, v5);
    if ( result != 0 )
      break;
    v7 = j_strlen(v4);
    if ( v7 == v3 )
      return v3 != v2;
    if ( v7 == v2 )
      return -1;
    v8 = v7 + 1;
    v4 += v8;
    v2 -= v8;
    v5 += v8;
    v3 -= v8;
  }
  return result;
}


//======================================================================
// sub_237BA2
// address: 0x00237BA2   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_237BA2(_DWORD *a1, _DWORD *a2, _DWORD *a3, int a4)
{
  char *v7; // r5
  int result; // r0
  char *v9; // r0
  _DWORD *v10; // r3

  v7 = sub_2375F0((int)a1, a2, a4);
  if ( *((_DWORD *)v7 + 2) == 0 )
    return -1;
  v9 = sub_2375F0((int)a1, a3, a4);
  if ( sub_232E60((int)v7, (int)v9) == 0 )
    return -1;
  sub_237AB8(a1, a1[2], v7, a2, a3);
  v10 = (_DWORD *)a1[2];
  result = v10[2];
  if ( result != 0 )
    return result != 1 || *v10 != 0;
  return result;
}


//======================================================================
// sub_237C02
// address: 0x00237C02   size: 0x5A (90 bytes)
//======================================================================
char *__fastcall sub_237C02(int a1, int a2, int a3)
{
  char *v7; // r4
  char *v8; // r1

  if ( a2 != 0
    && (*(_BYTE *)(a2 + 6) & 0x10) == 0
    && (v7 = sub_2375CC(a2, 4, *(_DWORD *)(*(_DWORD *)a1 + 204))) != nullptr
    && (a2 == a3
     || a3 != 0
     && (*(_BYTE *)(a3 + 6) & 0x10) == 0
     && (v8 = sub_2375CC(a3, 4, *(_DWORD *)(*(_DWORD *)a1 + 204))) != nullptr
     && sub_232E60((int)v7, (int)v8) != 0) )
  {
    return v7;
  }
  else
  {
    return nullptr;
  }
}


//======================================================================
// sub_237C5C
// address: 0x00237C5C   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_237C5C(_DWORD *a1, _DWORD *a2, int a3)
{
  int v3; // r3
  int v5; // r4
  _DWORD *v6; // r4
  _DWORD *v8; // [sp+0h] [bp-Ch] BYREF
  _DWORD *v9; // [sp+4h] [bp-8h]
  int v10; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v10 = a3;
  v3 = a1[2];
  if ( v3 == 3 )
    return a1;
  v5 = 0;
  if ( v3 == 4 && sub_232EA8((const char *)(*a1 + 16), (char *)&v8) )
  {
    v6 = v9;
    *a2 = v8;
    a2[1] = v6;
    a2[2] = 3;
    return a2;
  }
  return (_DWORD *)v5;
}


//======================================================================
// sub_237C90
// address: 0x00237C90   size: 0xE2 (226 bytes)
//======================================================================
int __fastcall sub_237C90(_DWORD *a1, int a2, _DWORD *a3, _DWORD *a4, int a5)
{
  int v8; // r2
  _DWORD *v9; // r4
  double *v10; // r0
  _DWORD *v11; // r2
  unsigned int v12; // r7
  double v13; // r4
  double v14; // r0
  double v15; // r0
  double v16; // r2
  int v17; // r3
  _DWORD *x; // [sp+Ch] [bp-28h]
  int x_4; // [sp+10h] [bp-24h] BYREF
  _DWORD v21[5]; // [sp+20h] [bp-14h] BYREF

  x = a1;
  v9 = sub_237C5C(a3, &x_4, (int)a3);
  if ( v9 != nullptr && (v10 = (double *)sub_237C5C(a4, v21, v8)) != nullptr )
  {
    v11 = (_DWORD *)*v9;
    v12 = v9[1];
    v13 = *v10;
    x = v11;
    LODWORD(v14) = a5 - 5;
    switch ( a5 )
    {
      case 5:
        v14 = COERCE_DOUBLE(__PAIR64__(v12, (unsigned int)v11)) + v13;
        goto LABEL_7;
      case 6:
        v15 = COERCE_DOUBLE(__PAIR64__(v12, (unsigned int)v11));
        v16 = v13;
        goto LABEL_6;
      case 7:
        v14 = COERCE_DOUBLE(__PAIR64__(v12, (unsigned int)v11)) * v13;
        goto LABEL_7;
      case 8:
        v14 = COERCE_DOUBLE(__PAIR64__(v12, (unsigned int)v11)) / v13;
        goto LABEL_7;
      case 9:
        v16 = j_floor(COERCE_DOUBLE(__PAIR64__(v12, (unsigned int)v11)) / v13) * v13;
        v15 = COERCE_DOUBLE(__PAIR64__(v12, (unsigned int)x));
LABEL_6:
        v14 = v15 - v16;
        goto LABEL_7;
      case 10:
        v14 = j_pow(COERCE_DOUBLE(__PAIR64__(v12, (unsigned int)v11)), v13);
LABEL_7:
        *(double *)a2 = v14;
        goto LABEL_8;
      case 11:
        *(_DWORD *)a2 = v11;
        *(_DWORD *)(a2 + 4) = v12 + 0x80000000;
LABEL_8:
        *(_DWORD *)(a2 + 8) = 3;
        break;
      default:
        return LODWORD(v14);
    }
  }
  else
  {
    LODWORD(v14) = sub_237B26(x, a3, a4, a2, a5);
    if ( LODWORD(v14) == 0 )
      sub_22EF64(x, (int)a3, (int)a4, v17);
  }
  return LODWORD(v14);
}


//======================================================================
// sub_237D74
// address: 0x00237D74   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_237D74(_DWORD *a1, int a2)
{
  int result; // r0
  size_t v5; // r0
  char s[32]; // [sp+4h] [bp-28h] BYREF

  result = 0;
  if ( *(_DWORD *)(a2 + 8) == 3 )
  {
    j_sprintf(s, "%.14g", *(double *)a2);
    v5 = j_strlen(s);
    *(_DWORD *)a2 = sub_235280(a1, s, v5);
    *(_DWORD *)(a2 + 8) = 4;
    return 1;
  }
  return result;
}


//======================================================================
// sub_237DD0
// address: 0x00237DD0   size: 0xAA (170 bytes)
//======================================================================
char *__fastcall sub_237DD0(_DWORD *a1, char *a2, int *a3, _DWORD *a4)
{
  _DWORD *v6; // r5
  char *result; // r0
  char *v8; // r7
  int v9; // r4
  char *v10; // r5
  int v11; // [sp+Ch] [bp-10h]

  v11 = 100;
  while ( 1 )
  {
    if ( *((_DWORD *)a2 + 2) == 5 )
    {
      v6 = *(_DWORD **)a2;
      result = sub_236A9C(*(_DWORD **)a2, a3);
      v8 = result;
      if ( *((_DWORD *)result + 2) != 0
        || (result = (char *)v6[2]) == nullptr
        || (result[6] & 1) != 0
        || (result = sub_2375CC((int)result, 0, *(_DWORD *)(a1[4] + 188)), v10 = result, result == nullptr) )
      {
        v9 = *((_DWORD *)v8 + 1);
        *a4 = *(_DWORD *)v8;
        a4[1] = v9;
        a4[2] = *((_DWORD *)v8 + 2);
        return result;
      }
    }
    else
    {
      v10 = sub_2375F0((int)a1, a2, 0);
      if ( *((_DWORD *)v10 + 2) == 0 )
        sub_22EEDC(a1, (int)a2, "index");
    }
    if ( *((_DWORD *)v10 + 2) == 6 )
      break;
    if ( --v11 == 0 )
      sub_22EE48(a1, (int)"loop in gettable");
    a2 = v10;
  }
  return (char *)sub_237AB8(a1, (int)a4, v10, a2, a3);
}


//======================================================================
// sub_237E84
// address: 0x00237E84   size: 0x12A (298 bytes)
//======================================================================
char *__fastcall sub_237E84(_DWORD *a1, int *a2, int *a3, _DWORD *a4)
{
  char *result; // r0
  int v8; // r3
  char *v9; // r6
  int v10; // r3
  _DWORD *v11; // r3
  int v12; // r2
  _DWORD *v13; // r3
  int v14; // r2
  _DWORD *v15; // r3
  int v16; // r2
  _DWORD *v17; // r3
  int v18; // r2
  char *v19; // r1
  int v20; // r2
  int v21; // [sp+10h] [bp-24h]
  int v22; // [sp+14h] [bp-20h]
  char *v23; // [sp+18h] [bp-1Ch]
  _DWORD v25[5]; // [sp+20h] [bp-14h] BYREF

  v22 = 100;
  while ( 1 )
  {
    if ( a2[2] == 5 )
    {
      v21 = *a2;
      result = sub_236E04(a1, *a2, a3);
      v23 = result;
      if ( *((_DWORD *)result + 2) != 0
        || (result = *(char **)(v21 + 8)) == nullptr
        || (result[6] & 2) != 0
        || (result = sub_2375CC((int)result, 1, *(_DWORD *)(a1[4] + 192)), v9 = result, result == nullptr) )
      {
        v8 = a4[1];
        *(_DWORD *)v23 = *a4;
        *((_DWORD *)v23 + 1) = v8;
        *((_DWORD *)v23 + 2) = a4[2];
        *(_BYTE *)(v21 + 6) = 0;
        if ( (int)a4[2] > 3 && *(unsigned __int8 *)(*a4 + 5) << 30 != 0 && (*(_BYTE *)(v21 + 5) & 4) != 0 )
          return (char *)sub_230788((int)a1, v21);
        return result;
      }
    }
    else
    {
      v9 = sub_2375F0((int)a1, a2, 1);
      if ( *((_DWORD *)v9 + 2) == 0 )
        sub_22EEDC(a1, (int)a2, "index");
    }
    v10 = *((_DWORD *)v9 + 2);
    if ( v10 == 6 )
      break;
    v20 = *((_DWORD *)v9 + 1);
    v25[0] = *(_DWORD *)v9;
    v25[1] = v20;
    a2 = v25;
    v25[2] = v10;
    if ( --v22 == 0 )
      sub_22EE48(a1, (int)"loop in settable");
  }
  v11 = (_DWORD *)a1[2];
  v12 = *((_DWORD *)v9 + 1);
  *v11 = *(_DWORD *)v9;
  v11[1] = v12;
  v11[2] = *((_DWORD *)v9 + 2);
  v13 = (_DWORD *)a1[2];
  v14 = a2[1];
  v13[4] = *a2;
  v13[5] = v14;
  v13[6] = a2[2];
  v15 = (_DWORD *)a1[2];
  v16 = a3[1];
  v15[8] = *a3;
  v15[9] = v16;
  v15[10] = a3[2];
  v17 = (_DWORD *)a1[2];
  v18 = a4[1];
  v17[12] = *a4;
  v17[13] = v18;
  v17[14] = a4[2];
  if ( a1[7] - a1[2] <= 64 )
    sub_22F1D4(a1, 4);
  v19 = (char *)a1[2];
  a1[2] = v19 + 64;
  return (char *)sub_22F73C((int)a1, v19, 0);
}


//======================================================================
// sub_237FB8
// address: 0x00237FB8   size: 0x54 (84 bytes)
//======================================================================
unsigned int __fastcall sub_237FB8(_DWORD *a1, int *a2, int *a3)
{
  int v4; // r3
  unsigned int result; // r0

  v4 = a2[2];
  if ( v4 == a3[2] )
  {
    if ( v4 == 3 )
      return *(double *)a2 < *(double *)a3;
    if ( v4 == 4 )
      return (unsigned int)sub_237B60(*a2, *a3) >> 31;
    result = sub_237BA2(a1, a2, a3, 13);
    if ( result != -1 )
      return result;
  }
  sub_22EF8C(a1, (int)a2, (int)a3);
}


//======================================================================
// sub_23800C
// address: 0x0023800C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_23800C(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int result; // r0
  int *v7; // r3

  switch ( a2[2] )
  {
    case 0:
      goto LABEL_10;
    case 3:
      result = *(double *)a2 == *(double *)a3;
      break;
    case 5:
    case 7:
      if ( *a2 == *a3
        || (result = (int)sub_237C02((int)(a1 + 4), *(_DWORD *)(*a2 + 8), *(_DWORD *)(*a3 + 8))) != 0
        && (sub_237AB8(a1, a1[2], (_DWORD *)result, a2, a3), v7 = (int *)a1[2], (result = v7[2]) != 0)
        && (result != 1 || (result = *v7, *v7 != 0)) )
      {
LABEL_10:
        result = 1;
      }
      break;
    default:
      result = *a3 - *a2 + (*a2 == *a3) + *a2 - *a3;
      break;
  }
  return result;
}


//======================================================================
// sub_238088
// address: 0x00238088   size: 0x118 (280 bytes)
//======================================================================
int __fastcall sub_238088(int result, int a2, int a3)
{
  _DWORD *v3; // r4
  int v4; // r2
  _DWORD *v5; // r6
  _DWORD *v6; // r5
  int v7; // r7
  int v8; // r5
  int v9; // r6
  size_t v10; // r5
  int v11; // r1
  int *v12; // r6
  unsigned int v13; // [sp+Ch] [bp-18h]
  char *v14; // [sp+Ch] [bp-18h]
  int v15; // [sp+10h] [bp-14h]
  size_t v18; // [sp+1Ch] [bp-8h]

  v3 = (_DWORD *)result;
  do
  {
    v4 = v3[3];
    v15 = v4 + 16 * (a3 + 1);
    v5 = (_DWORD *)(v15 - 32);
    v6 = (_DWORD *)(v15 - 16);
    if ( (unsigned int)(*(_DWORD *)(v15 - 24) - 3) > 1
      || *(_DWORD *)(v4 + 16 * (a3 + 1) - 8) != 4 && (result = sub_237D74(v3, v4 + 16 * (a3 + 1) - 16)) == 0 )
    {
      result = sub_237B26(v3, v5, v6, (int)v5, 15);
      if ( result == 0 )
        sub_22EF48(v3, (int)v5, (int)v6);
LABEL_10:
      v7 = 2;
      goto LABEL_21;
    }
    v7 = 1;
    v8 = *(_DWORD *)(*v6 + 12);
    if ( v8 == 0 )
    {
      if ( *(_DWORD *)(v15 - 24) != 4 )
        result = sub_237D74(v3, (int)v5);
      goto LABEL_10;
    }
    while ( v7 < a2 && (v5[2] == 4 || sub_237D74(v3, (int)v5) != 0) )
    {
      v13 = *(_DWORD *)(*v5 + 12);
      if ( v13 >= -3 - v8 )
        sub_22EE48(v3, (int)"string length overflow");
      ++v7;
      v5 -= 4;
      v8 += v13;
    }
    v9 = v7;
    v14 = (char *)sub_238E54(v3, v3[4] + 52);
    v10 = 0;
    do
    {
      v11 = *(_DWORD *)(v15 - 16 * v9--);
      v18 = *(_DWORD *)(v11 + 12);
      j_memcpy(&v14[v10], (const void *)(v11 + 16), v18);
      v10 += v18;
    }
    while ( v9 != 0 );
    v12 = (int *)(v15 - 16 * v7);
    result = sub_235280(v3, v14, v10);
    *v12 = result;
    v12[2] = 4;
LABEL_21:
    a2 += 1 - v7;
    a3 += 1 - v7;
  }
  while ( a2 > 1 );
  return result;
}


//======================================================================
// sub_2381A8
// address: 0x002381A8   size: 0x8 (8 bytes)
//======================================================================
int sub_2381A8()
{
  return sub_2381B0();
}


//======================================================================
// sub_2381B0
// address: 0x002381B0   size: 0xC8 (200 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   002381B0  LDR     R3, [R5,#0x14]
//   002381B2  LDR     R4, [R5,#0x18]
//   002381B4  LDR     R6, [R5,#0xC]
//   002381B6  LDR     R3, [R3,#4]
//   002381B8  STR     R4, [SP,#arg_28]
//   002381BA  STR     R6, [SP,#arg_24]
//   002381BC  LDR     R3, [R3]
//   002381BE  STR     R3, [SP,#arg_48]
//   002381C0  LDR     R3, [R3,#0x10]
//   002381C2  LDR     R3, [R3,#8]
//   002381C4  STR     R3, [SP,#arg_3C]
//   002381C6  LDR     R4, [SP,#arg_28]
//   002381C8  MOVS    R3, R5
//   002381CA  ADDS    R3, #0x38 ; '8'
//   002381CC  ADDS    R4, #4
//   002381CE  STR     R4, [SP,#arg_38]
//   002381D0  LDR     R6, [SP,#arg_28]
//   002381D2  LDRB    R4, [R3]
//   002381D4  MOVS    R3, #0xC
//   002381D6  LDR     R7, [R6]
//   002381D8  TST     R4, R3
//   002381DA  BEQ     loc_238260
//   002381DC  LDR     R3, [R5,#0x40]
//   002381DE  SUBS    R3, #1
//   002381E0  STR     R3, [R5,#0x40]
//   002381E2  CMP     R3, #0
//   002381E4  BEQ     loc_2381EA
//   002381E6  LSLS    R0, R4, #0x1D
//   002381E8  BPL     loc_238260
//   002381EA  LDR     R1, [SP,#arg_38]
//   002381EC  LDR     R6, [R5,#0x18]
//   002381EE  STR     R1, [R5,#0x18]
//   002381F0  LSLS    R2, R4, #0x1C
//   002381F2  BPL     loc_238208
//   002381F4  CMP     R3, #0
//   002381F6  BNE     loc_238208
//   002381F8  LDR     R3, [R5,#0x3C]
//   002381FA  MOVS    R2, #1
//   002381FC  MOVS    R0, R5
//   002381FE  STR     R3, [R5,#0x40]
//   00238200  MOVS    R1, #3
//   00238202  NEGS    R2, R2
//   00238204  BL      sub_22F2B4
//   00238208  LSLS    R0, R4, #0x1D
//   0023820A  BPL     loc_23824E
//   0023820C  LDR     R3, [R5,#0x14]
//   0023820E  LDR     R4, [SP,#arg_38]
//   00238210  LDR     R3, [R3,#4]
//   00238212  LDR     R3, [R3]
//   00238214  LDR     R3, [R3,#0x10]
//   00238216  LDR     R1, [R3,#0xC]
//   00238218  LDR     R3, [R3,#0x14]
//   0023821A  SUBS    R0, R4, R1
//   0023821C  ASRS    R0, R0, #2
//   0023821E  SUBS    R0, #1
//   00238220  CMP     R3, #0
//   00238222  BEQ     loc_23822A
//   00238224  LSLS    R2, R0, #2
//   00238226  LDR     R2, [R2,R3]
//   00238228  B       loc_23822C
//   0023822A  MOVS    R2, R3
//   0023822C  CMP     R0, #0
//   0023822E  BEQ     loc_238246
//   00238230  LDR     R4, [SP,#arg_38]
//   00238232  CMP     R4, R6
//   00238234  BLS     loc_238246
//   00238236  CMP     R3, #0
//   00238238  BEQ     loc_238242
//   0023823A  SUBS    R1, R6, R1
//   0023823C  ADDS    R3, R3, R1
//   0023823E  SUBS    R3, #4
//   00238240  LDR     R3, [R3]
//   00238242  CMP     R2, R3
//   00238244  BEQ     loc_23824E
//   00238246  MOVS    R0, R5
//   00238248  MOVS    R1, #2
//   0023824A  BL      sub_22F2B4
//   0023824E  LDRB    R3, [R5,#6]
//   00238250  CMP     R3, #1
//   00238252  BNE     loc_23825C
//   00238254  LDR     R6, [SP,#arg_28]
//   00238256  STR     R6, [R5,#0x18]
//   00238258  BL      sub_238D98
//   0023825C  LDR     R4, [R5,#0xC]
//   0023825E  STR     R4, [SP,#arg_24]
//   00238260  LSRS    R6, R7, #6
//   00238262  LSLS    R3, R6, #0x18
//   00238264  LDR     R4, [SP,#arg_24]
//   00238266  LSRS    R3, R3, #0x18
//   00238268  LSLS    R3, R3, #4
//   0023826A  MOVS    R0, #0x3F ; '?'
//   0023826C  STR     R6, [SP,#arg_30]
//   0023826E  STR     R3, [SP,#arg_40]
//   00238270  ADDS    R6, R4, R3
//   00238272  ANDS    R0, R7
//   00238274  CMP     R0, #0x25 ; '%'; switch 38 cases
//   00238276  BLS     loc_23827E

//======================================================================
// sub_238BD6
// address: 0x00238BD6   size: 0x9E (158 bytes)
//======================================================================
void __fastcall __noreturn sub_238BD6(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15)
{
  _DWORD *v15; // r5
  int *v16; // r6
  unsigned int v17; // r7
  int v18; // r4
  unsigned int v19; // kr00_4
  unsigned int v20; // r7
  int v21; // r7
  int v22; // r3
  int *i; // r6
  int v24; // r2
  char *v25; // r0
  int v26; // r2
  int v27; // [sp+28h] [bp+28h]
  int v28; // [sp+30h] [bp+30h]

  def_23827E();
  v19 = v17;
  v18 = v17 >> 23;
  v20 = v17 << 9 >> 23;
  if ( is_mul_ok(0x200u, v19) )
  {
    v18 = ((v15[2] - (int)v16) >> 4) - 1;
    v15[2] = *(_DWORD *)(v15[5] + 8);
  }
  if ( v20 == 0 )
    v20 = *(_DWORD *)(a15 + 4);
  if ( v16[2] != 5 )
    def_23827E();
  v21 = 50 * (v20 - 1) + v18;
  v27 = *v16;
  if ( v21 > *(_DWORD *)(*v16 + 28) )
    sub_236C44(v15, *v16, v21);
  v22 = 16 * v18;
  v28 = v18;
  for ( i = &v16[4 * v18]; ; i -= 4 )
  {
    v24 = v21 - v28 + v18;
    if ( v18 <= 0 )
      def_23827E();
    v25 = sub_236B18(COERCE_DOUBLE(__PAIR64__(v27, (unsigned int)v15)), v24, v22);
    v26 = i[1];
    *(_DWORD *)v25 = *i;
    *((_DWORD *)v25 + 1) = v26;
    *((_DWORD *)v25 + 2) = i[2];
    v22 = i[2];
    if ( v22 > 3 )
    {
      v22 = *(unsigned __int8 *)(*i + 5);
      if ( v22 << 30 != 0 )
      {
        v22 = *(unsigned __int8 *)(v27 + 5);
        if ( (v22 & 4) != 0 )
          sub_230788((int)v15, v27);
      }
    }
    --v18;
  }
}


//======================================================================
// sub_238D08
// address: 0x00238D08   size: 0x90 (144 bytes)
//======================================================================
void __fastcall __noreturn sub_238D08(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23)
{
  _DWORD *v23; // r5
  _DWORD *v24; // r6
  unsigned int v25; // r7
  _DWORD *v26; // r4
  unsigned int v27; // r2
  int v28; // r7
  bool v29; // cf
  int v30; // r2
  int v31; // r0
  int v32; // r1
  int v33; // r3
  int v34; // r12
  int v35; // r1
  int v36; // [sp+28h] [bp+28h]
  _DWORD *v37; // [sp+28h] [bp+28h]

  def_23827E();
  v26 = (_DWORD *)v23[5];
  v27 = v25 >> 23;
  v36 = ((*v26 - v26[1]) >> 4) - *(unsigned __int8 *)(*(_DWORD *)(a23 + 16) + 73);
  v28 = v36 - 1;
  v29 = v27 != 0;
  v30 = v27 - 1;
  if ( !v29 )
  {
    v31 = v23[7];
    v32 = v23[2];
    v23[6] = a19;
    if ( v31 - v32 <= 16 * v28 )
      sub_22F1D4(v23, v28);
    v24 = (_DWORD *)(v23[3] + a21);
    v23[2] = &v24[4 * v28];
    v30 = v36 - 1;
  }
  v33 = 0;
  v34 = -16 * v36 - (_DWORD)v24 + 16;
  while ( 1 )
  {
    if ( v33 >= v30 )
      def_23827E();
    if ( v33 >= v28 )
    {
      v24[2] = 0;
    }
    else
    {
      v37 = (_DWORD *)((char *)v24 + v34 + *v26);
      v35 = v37[1];
      *v24 = *v37;
      v24[1] = v35;
      v24[2] = v37[2];
    }
    ++v33;
    v24 += 4;
  }
}


//======================================================================
// sub_238D98
// address: 0x00238D98   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_238D98(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_238DB8
// address: 0x00238DB8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_238DB8(int a1, int a2)
{
  unsigned __int8 *v3; // r0
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  v3 = (unsigned __int8 *)(*(int (__fastcall **)(_DWORD, _DWORD, int *))(a1 + 8))(
                            *(_DWORD *)(a1 + 16),
                            *(_DWORD *)(a1 + 12),
                            &v5);
  if ( v3 == nullptr || v5 == 0 )
    return -1;
  *(_DWORD *)a1 = v5 - 1;
  *(_DWORD *)(a1 + 4) = v3 + 1;
  return *v3;
}


//======================================================================
// sub_238DE2
// address: 0x00238DE2   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_238DE2(_DWORD *a1, int a2)
{
  int result; // r0

  if ( *a1 == 0 )
  {
    result = sub_238DB8((int)a1, a2);
    if ( result == -1 )
      return result;
    ++*a1;
    --a1[1];
  }
  return *(unsigned __int8 *)a1[1];
}


//======================================================================
// sub_238E06
// address: 0x00238E06   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_238E06(int result, _DWORD *a2, int a3, int a4)
{
  a2[3] = a4;
  a2[4] = result;
  a2[2] = a3;
  *a2 = 0;
  a2[1] = 0;
  return result;
}


//======================================================================
// sub_238E14
// address: 0x00238E14   size: 0x40 (64 bytes)
//======================================================================
size_t __fastcall sub_238E14(int a1, int a2, size_t a3)
{
  char *v4; // r7
  size_t v6; // r6
  int v7; // r2

  v4 = (char *)a2;
  while ( a3 != 0 && sub_238DE2((_DWORD *)a1, a2) != -1 )
  {
    v6 = a3;
    if ( a3 > *(_DWORD *)a1 )
      v6 = *(_DWORD *)a1;
    j_memcpy(v4, *(const void **)(a1 + 4), v6);
    v4 += v6;
    a3 -= v6;
    v7 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)a1 -= v6;
    *(_DWORD *)(a1 + 4) = v7 + v6;
  }
  return a3;
}


//======================================================================
// sub_238E54
// address: 0x00238E54   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_238E54(_DWORD *a1, int *a2, unsigned int a3)
{
  unsigned int v4; // r2

  v4 = a2[2];
  if ( a3 > v4 )
  {
    if ( a3 > 0x1F )
    {
      if ( a3 + 1 > 0xFFFFFFFD )
        sub_232368(a1);
    }
    else
    {
      a3 = 32;
    }
    *a2 = sub_23237C((int)a1, *a2, v4, a3);
    a2[2] = a3;
  }
  return *a2;
}


//======================================================================
// sub_238E84
// address: 0x00238E84   size: 0x102 (258 bytes)
//======================================================================
int __fastcall sub_238E84(int a1, int a2)
{
  int v2; // r3
  int v3; // r1
  int v5; // r6
  unsigned __int8 *v6; // r5
  unsigned __int8 *v7; // r6
  unsigned int v8; // r1

  v2 = a1 + 16 * a2;
  v3 = *(_DWORD *)(v2 + 8);
  switch ( v3 )
  {
    case 0:
      return j_printf("nil");
    case 1:
      if ( *(_DWORD *)v2 != 0 )
        return j_printf("true");
      else
        return j_printf("false");
    case 3:
      return j_printf("%.14g", *(double *)v2);
    case 4:
      v5 = *(_DWORD *)(*(_DWORD *)v2 + 12);
      v6 = (unsigned __int8 *)(*(_DWORD *)v2 + 16);
      j_putc(34, (FILE *)((char *)&_sF._offset + 4));
      v7 = &v6[v5];
      break;
    default:
      return j_printf("? type=%d", v3);
  }
  while ( v6 != v7 )
  {
    v8 = *v6;
    if ( v8 == 11 )
    {
      j_printf("\\v");
      goto LABEL_32;
    }
    if ( v8 > 0xB )
    {
      if ( v8 == 13 )
      {
        j_printf("\\r");
        goto LABEL_32;
      }
      if ( v8 < 0xD )
      {
        j_printf("\\f");
        goto LABEL_32;
      }
      if ( v8 == 34 )
      {
        j_printf("\\\"");
        goto LABEL_32;
      }
      if ( v8 == 92 )
      {
        j_printf("\\\\");
        goto LABEL_32;
      }
      goto LABEL_29;
    }
    if ( v8 == 8 )
    {
      j_printf("\\b");
      goto LABEL_32;
    }
    if ( v8 <= 8 )
    {
      if ( v8 == 7 )
      {
        j_printf("\\a");
        goto LABEL_32;
      }
LABEL_29:
      if ( (*(_BYTE *)(ctype_ + v8 + 1) & 0x97) != 0 )
        j_putc(*v6, (FILE *)((char *)&_sF._offset + 4));
      else
        j_printf("\\%03u", v8);
      goto LABEL_32;
    }
    if ( v8 == 9 )
      j_printf("\\t");
    else
      j_printf("\\n");
LABEL_32:
    ++v6;
  }
  return j_putc(34, (FILE *)((char *)&_sF._offset + 4));
}


//======================================================================
// sub_238FCC
// address: 0x00238FCC   size: 0x494 (1172 bytes)
//======================================================================
int __fastcall sub_238FCC(int a1, int a2)
{
  int v2; // r2
  int v3; // r3
  const char *v5; // r2
  int v6; // r3
  const char *v7; // r1
  int v8; // r0
  const char *v9; // r5
  int v10; // r1
  const char *v11; // r2
  const char *v12; // r3
  int v13; // r7
  const char *v14; // r6
  int v15; // r5
  const char *v16; // r0
  int v17; // r1
  const char *v18; // r2
  int v19; // r3
  const char *v20; // r6
  int v21; // r5
  const char *v22; // r0
  int result; // r0
  int v24; // r1
  int v25; // r6
  unsigned int v26; // r3
  int v27; // r7
  int v28; // r5
  unsigned int v29; // r6
  int v30; // r3
  int v31; // r1
  int v32; // r1
  int v33; // r0
  int v34; // r1
  const char *v35; // r1
  int m; // r5
  int v37; // r6
  int i; // r5
  int v39; // r6
  int j; // r5
  int v41; // r6
  int k; // r5
  int v43; // [sp+1Ch] [bp-30h]
  int v44; // [sp+20h] [bp-2Ch]
  int v45; // [sp+24h] [bp-28h]
  int v46; // [sp+2Ch] [bp-20h]
  int v47; // [sp+30h] [bp-1Ch]
  int v48; // [sp+34h] [bp-18h]
  int v50; // [sp+40h] [bp-Ch]
  int v51; // [sp+44h] [bp-8h]

  v2 = *(_DWORD *)(a1 + 32);
  v3 = *(unsigned __int8 *)(v2 + 16);
  v50 = *(_DWORD *)(a1 + 52);
  if ( v3 == 64 || v3 == 61 )
  {
    v5 = (const char *)(v2 + 17);
  }
  else if ( v3 == 27 )
  {
    v5 = "(bstring)";
  }
  else
  {
    v5 = "(string)";
  }
  v6 = *(_DWORD *)(a1 + 60);
  if ( v6 != 0 )
    v7 = "function";
  else
    v7 = "main";
  v8 = *(_DWORD *)(a1 + 44);
  if ( v8 == 1 )
    v9 = (const char *)&unk_3FB8EA;
  else
    v9 = "s";
  j_printf(
    "\n%s <%s:%d,%d> (%d instruction%s, %d bytes at %p)\n",
    v7,
    v5,
    v6,
    *(_DWORD *)(a1 + 64),
    *(_DWORD *)(a1 + 44),
    v9,
    4 * v8,
    (const void *)a1);
  v10 = *(unsigned __int8 *)(a1 + 73);
  if ( *(_BYTE *)(a1 + 74) != 0 )
    v11 = "+";
  else
    v11 = (const char *)&unk_3FB8EA;
  if ( v10 == 1 )
    v12 = (const char *)&unk_3FB8EA;
  else
    v12 = "s";
  v13 = *(unsigned __int8 *)(a1 + 75);
  if ( v13 == 1 )
    v14 = (const char *)&unk_3FB8EA;
  else
    v14 = "s";
  v15 = *(unsigned __int8 *)(a1 + 72);
  if ( v15 == 1 )
    v16 = (const char *)&unk_3FB8EA;
  else
    v16 = "s";
  j_printf("%d%s param%s, %d slot%s, %d upvalue%s, ", v10, v11, v12, v13, v14, v15, v16);
  v17 = *(_DWORD *)(a1 + 56);
  if ( v17 == 1 )
    v18 = (const char *)&unk_3FB8EA;
  else
    v18 = "s";
  v19 = *(_DWORD *)(a1 + 40);
  if ( v19 == 1 )
    v20 = (const char *)&unk_3FB8EA;
  else
    v20 = "s";
  v21 = *(_DWORD *)(a1 + 52);
  if ( v21 == 1 )
    v22 = (const char *)&unk_3FB8EA;
  else
    v22 = "s";
  result = j_printf("%d local%s, %d constant%s, %d function%s\n", v17, v18, v19, v20, v21, v22);
  v24 = 0;
  v48 = *(_DWORD *)(a1 + 12);
  v51 = *(_DWORD *)(a1 + 44);
  while ( 1 )
  {
    v43 = v24;
    if ( v24 >= v51 )
      break;
    v25 = *(_DWORD *)(a1 + 20);
    v26 = *(_DWORD *)(v48 + 4 * v24);
    v27 = v26 >> 14;
    v45 = v26 & 0x3F;
    v46 = (v26 >> 14) & 0x1FF;
    v28 = (unsigned __int8)(v26 >> 6);
    v44 = v26 >> 23;
    v47 = (v26 >> 14) - 0x1FFFF;
    if ( v25 != 0 )
      v25 = *(_DWORD *)(v25 + 4 * v24);
    j_printf("\t%d\t", v24 + 1);
    if ( v25 <= 0 )
      j_printf("[-]\t");
    else
      j_printf("[%d]\t", v25);
    j_printf("%-9s\t", off_452F2C[v45]);
    v29 = byte_444A00[v45];
    v30 = v29 & 3;
    if ( v30 == 1 )
    {
      if ( ((v29 >> 4) & 3) == 3 )
        j_printf("%d %d", v28, ~v27);
      else
        j_printf("%d %d", v28, v27);
    }
    else if ( (v29 & 3) != 0 )
    {
      if ( v30 == 2 )
      {
        if ( v45 == 22 )
        {
          j_printf("%d", v47);
LABEL_76:
          j_printf("\t; to %d", v47 + v43 + 2);
          goto LABEL_81;
        }
        j_printf("%d %d", v28, v47);
      }
    }
    else
    {
      j_printf("%d", v28);
      if ( ((v29 >> 4) & 3) != 0 )
      {
        v31 = v44;
        if ( (v44 & 0x100) != 0 )
          v31 = ~(unsigned __int8)v44;
        j_printf(" %d", v31);
      }
      if ( v29 << 28 >> 30 != 0 )
      {
        v32 = v46;
        if ( (v27 & 0x100) != 0 )
          v32 = ~(unsigned __int8)v27;
        j_printf(" %d", v32);
      }
    }
    switch ( v45 )
    {
      case 1:
        j_printf("\t; ");
        v33 = *(_DWORD *)(a1 + 8);
        v34 = v27;
        goto LABEL_69;
      case 4:
      case 8:
        if ( *(int *)(a1 + 36) <= 0 )
          v35 = "-";
        else
          v35 = (const char *)(*(_DWORD *)(4 * v44 + *(_DWORD *)(a1 + 28)) + 16);
        j_printf("\t; %s", v35);
        break;
      case 5:
      case 7:
        j_printf("\t; %s", *(_DWORD *)(16 * v27 + *(_DWORD *)(a1 + 8)) + 16);
        break;
      case 6:
      case 11:
        if ( (v27 & 0x100) == 0 )
          break;
        j_printf("\t; ");
        goto LABEL_68;
      case 9:
      case 12:
      case 13:
      case 14:
      case 15:
      case 17:
      case 23:
      case 24:
      case 25:
        if ( ((v44 | v27) & 0x100) == 0 )
          break;
        j_printf("\t; ");
        if ( (v44 & 0x100) != 0 )
          sub_238E84(*(_DWORD *)(a1 + 8), (unsigned __int8)v44);
        else
          j_putchar(45);
        j_putchar(32);
        if ( (v27 & 0x100) != 0 )
        {
LABEL_68:
          v33 = *(_DWORD *)(a1 + 8);
          v34 = (unsigned __int8)v27;
LABEL_69:
          sub_238E84(v33, v34);
        }
        else
        {
          j_putchar(45);
        }
        break;
      case 22:
      case 31:
      case 32:
        goto LABEL_76;
      case 34:
        if ( v46 != 0 )
          j_printf("\t; %d", v46);
        else
          j_printf("\t; %d", *(_DWORD *)(v48 + 4 * v43++ + 4));
        break;
      case 36:
        j_printf("\t; %p", *(_DWORD *)(4 * v27 + *(_DWORD *)(a1 + 16)));
        break;
      default:
        break;
    }
LABEL_81:
    result = j_putchar(10);
    v24 = v43 + 1;
  }
  if ( a2 != 0 )
  {
    v37 = *(_DWORD *)(a1 + 40);
    j_printf("constants (%d) for %p:\n", v37, (const void *)a1);
    for ( i = 0; i < v37; ++i )
    {
      j_printf("\t%d\t", i + 1);
      sub_238E84(*(_DWORD *)(a1 + 8), i);
      j_putchar(10);
    }
    v39 = *(_DWORD *)(a1 + 56);
    j_printf("locals (%d) for %p:\n", v39, (const void *)a1);
    for ( j = 0; j < v39; ++j )
      j_printf(
        "\t%d\t%s\t%d\t%d\n",
        j,
        (const char *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 12 * j) + 16),
        *(_DWORD *)(*(_DWORD *)(a1 + 24) + 12 * j + 4) + 1,
        *(_DWORD *)(*(_DWORD *)(a1 + 24) + 12 * j + 8) + 1);
    v41 = *(_DWORD *)(a1 + 36);
    result = j_printf("upvalues (%d) for %p:\n", v41, (const void *)a1);
    if ( *(_DWORD *)(a1 + 28) != 0 )
    {
      for ( k = 0; k < v41; ++k )
        result = j_printf("\t%d\t%s\n", k, (const char *)(*(_DWORD *)(4 * k + *(_DWORD *)(a1 + 28)) + 16));
    }
  }
  for ( m = 0; m < v50; ++m )
    result = sub_238FCC(*(_DWORD *)(4 * m + *(_DWORD *)(a1 + 16)), a2);
  return result;
}


//======================================================================
// sub_23948C
// address: 0x0023948C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_23948C(int *a1)
{
  int v1; // r5
  int result; // r0

  v1 = *a1;
  *(_DWORD *)(v1 + 328) = Curl_ccalloc(1u, 0xCu);
  result = 0;
  if ( *(_DWORD *)(*a1 + 328) == 0 )
    return 27;
  return result;
}


//======================================================================
// sub_2394B8
// address: 0x002394B8   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_2394B8(int a1)
{
  _DWORD *v1; // r4
  void *v2; // r0
  int v3; // r0

  v1 = *(_DWORD **)(*(_DWORD *)a1 + 328);
  if ( v1 != nullptr )
  {
    v2 = (void *)v1[1];
    if ( v2 != nullptr )
    {
      Curl_cfree(v2);
      v1[1] = 0;
    }
    v3 = v1[2];
    *v1 = 0;
    if ( v3 != -1 )
      j_close(v3);
    v1[2] = -1;
  }
  return 0;
}


//======================================================================
// sub_2394F4
// address: 0x002394F4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_2394F4(int a1)
{
  _DWORD *v1; // r4
  void *v2; // r0
  int v3; // r0

  v1 = *(_DWORD **)(*(_DWORD *)a1 + 328);
  if ( v1 != nullptr )
  {
    v2 = (void *)v1[1];
    if ( v2 != nullptr )
    {
      Curl_cfree(v2);
      v1[1] = 0;
    }
    v3 = v1[2];
    *v1 = 0;
    if ( v3 != -1 )
      j_close(v3);
    v1[2] = -1;
  }
  return 0;
}


//======================================================================
// sub_239530
// address: 0x00239530   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_239530(_DWORD *a1, _BYTE *a2)
{
  int v2; // r4
  const char **v3; // r6
  const char *v4; // r5
  int result; // r0
  int v6; // r0

  v2 = *a1;
  v3 = *(const char ***)(*a1 + 328);
  v4 = (const char *)curl_easy_unescape(*a1, *(_DWORD *)(*a1 + 34396), 0, 0);
  result = 27;
  if ( v4 != nullptr )
  {
    v6 = j_open(v4, 0);
    *v3 = v4;
    v3[1] = v4;
    v3[2] = (const char *)v6;
    if ( *(_BYTE *)(v2 + 769) == 0 && v6 == -1 )
      Curl_failf(v2, "Couldn't open file %s", *(const char **)(v2 + 34396));
    *a2 = 1;
    return 0;
  }
  return result;
}


//======================================================================
// sub_2395A4
// address: 0x002395A4   size: 0x562 (1378 bytes)
//======================================================================
int __fastcall sub_2395A4(_DWORD *a1, _BYTE *a2)
{
  int v2; // r4
  int v3; // r7
  int v4; // r5
  const char **v5; // r6
  char *v6; // r4
  int v7; // r1
  int v8; // r2
  __blkcnt_t st_blocks; // r3
  __int64 v10; // r6
  int v11; // r4
  size_t v12; // r4
  __int64 v13; // r2
  ssize_t v14; // r0
  int v15; // r1
  int v16; // r3
  int v17; // r0
  int v18; // r5
  const char *v19; // r0
  __int64 v20; // r6
  int v21; // r3
  __int64 v22; // r0
  __int64 *v23; // r5
  _QWORD *v24; // r1
  __int64 v25; // r2
  __int64 v26; // r2
  int v27; // r5
  int v28; // r6
  __off_t v29; // r0
  size_t v30; // r2
  ssize_t v31; // r0
  int v32; // r1
  int v33; // r5
  int v34; // r0
  char *v36; // [sp+18h] [bp-E4h]
  __int64 v37; // [sp+18h] [bp-E4h]
  int fd; // [sp+28h] [bp-D4h]
  __int64 fda; // [sp+28h] [bp-D4h]
  __int64 fdb; // [sp+28h] [bp-D4h]
  char *v41; // [sp+34h] [bp-C8h]
  int v42; // [sp+34h] [bp-C8h]
  void *v43; // [sp+38h] [bp-C4h]
  int v46; // [sp+50h] [bp-ACh]
  size_t n; // [sp+58h] [bp-A4h] BYREF
  char *v48[2]; // [sp+5Ch] [bp-A0h] BYREF
  char *v49[2]; // [sp+64h] [bp-98h] BYREF
  struct stat buf; // [sp+90h] [bp-6Ch] BYREF

  v2 = *a1;
  curlx_tvnow(v48);
  *a2 = 1;
  Curl_initinfo(v2);
  Curl_pgrsStartNow(v2);
  v3 = *(unsigned __int8 *)(v2 + 769);
  v4 = *a1;
  if ( *(_BYTE *)(v2 + 769) != 0 )
  {
    v5 = *(const char ***)(v4 + 328);
    v6 = j_strchr(*v5, 47);
    v41 = (char *)(v4 + 1388);
    curlx_tvnow(v49);
    a1[145] = *(_DWORD *)(v4 + 436);
    a1[146] = *(_DWORD *)(v4 + 356);
    *(_DWORD *)(*a1 + 320) = v4 + 1388;
    if ( v6 == nullptr )
      return 37;
    v16 = 37;
    if ( v6[1] == 0 )
      return v16;
    if ( *(_QWORD *)(v4 + 34408) != 0 )
      v7 = 1089;
    else
      v7 = 577;
    fd = j_open(*v5, v7, *(_DWORD *)(*a1 + 812));
    if ( fd < 0 )
      Curl_failf(v4, "Can't open %s for writing", *v5);
    v8 = *(_DWORD *)(v4 + 536);
    if ( v8 != -1 || *(_DWORD *)(v4 + 540) != -1 )
      Curl_pgrsSetUploadSize(v4, v8 + 1);
    if ( *(int *)(v4 + 34412) < 0 )
    {
      if ( j_fstat(fd, &buf) != 0 )
      {
        j_close(fd);
        Curl_failf(v4, "Can't get the size of %s", *v5);
      }
      st_blocks = buf.st_blocks;
      *(_DWORD *)(v4 + 34408) = buf.st_blksize;
      *(_DWORD *)(v4 + 34412) = st_blocks;
    }
    v10 = 0;
    while ( 1 )
    {
      v11 = Curl_fillreadbuffer(a1, 0x4000, &n);
      if ( v11 != 0 )
      {
LABEL_33:
        j_close(fd);
        return v11;
      }
      if ( (int)n <= 0 )
      {
        if ( Curl_pgrsUpdate(a1) == 0 )
          goto LABEL_33;
LABEL_32:
        v11 = 42;
        goto LABEL_33;
      }
      v12 = n;
      v13 = *(_QWORD *)(v4 + 34408);
      v36 = (char *)(v4 + 1388);
      if ( v13 != 0 )
      {
        if ( (int)n <= v13 )
        {
          *(_QWORD *)(v4 + 34408) = v13 - (int)n;
          v12 = 0;
          v14 = j_write(fd, v41, 0);
          goto LABEL_26;
        }
        v12 = n - v13;
        v36 = &v41[v13];
        *(_DWORD *)(v4 + 34408) = 0;
        *(_DWORD *)(v4 + 34412) = 0;
      }
      v14 = j_write(fd, v36, v12);
LABEL_26:
      if ( v14 != v12 )
      {
        v11 = 55;
        goto LABEL_33;
      }
      v10 += v12;
      Curl_pgrsSetUploadCounter(v4, v15, v10, HIDWORD(v10));
      if ( Curl_pgrsUpdate(a1) != 0 )
        goto LABEL_32;
      v11 = Curl_speedcheck(v4, v49[0], v49[1]);
      if ( v11 != 0 )
        goto LABEL_33;
    }
  }
  v46 = *(_DWORD *)(*(_DWORD *)(v4 + 328) + 8);
  if ( j_fstat(v46, &buf) == -1 )
  {
    fda = 0;
    v42 = v3;
  }
  else
  {
    fda = *(_QWORD *)&buf.st_blksize;
    v42 = 1;
    *(_DWORD *)(v2 + 34472) = buf.__unused4;
    if ( *(_DWORD *)(v2 + 34404) == 0 && *(_DWORD *)(v2 + 620) != 0 )
    {
      v17 = Curl_meets_timecondition(v2);
      v42 = 1;
      if ( v17 == 0 )
      {
        *a2 = 1;
        return v17;
      }
    }
  }
  v43 = (void *)(v2 + 1388);
  if ( *(_BYTE *)(v2 + 767) != 0 && *(_BYTE *)(v2 + 764) != 0 && v42 != 0 )
    curl_msnprintf(v43, 16385, "Content-Length: %lld\r\n", fda);
  v18 = *a1;
  if ( *(_BYTE *)(*a1 + 34401) != 0 )
  {
    v19 = *(const char **)(v18 + 34404);
    if ( v19 != nullptr )
    {
      v20 = j_strtoll(v19, (char **)&n, 0);
      while ( 1 )
      {
        v21 = *(unsigned __int8 *)n;
        if ( *(_BYTE *)n == 0 || (*(_BYTE *)(ctype_ + v21 + 1) & 8) == 0 && v21 != 45 )
          break;
        ++n;
      }
      v22 = j_strtoll((const char *)n, v49, 0);
      if ( (char *)n == v49[0] || v22 == -1 )
      {
        if ( v20 >= 0 )
        {
          v23 = (__int64 *)(v18 + 34408);
LABEL_59:
          *v23 = v20;
          goto LABEL_62;
        }
      }
      else if ( v20 >= 0 )
      {
        *(_QWORD *)(v18 + 96) = v22 - v20 + 1;
        v23 = (__int64 *)(v18 + 34408);
        goto LABEL_59;
      }
      *(_QWORD *)(v18 + 96) = -v20;
      v23 = (__int64 *)(v18 + 34408);
      goto LABEL_59;
    }
  }
  *(_DWORD *)(v18 + 96) = -1;
  *(_DWORD *)(v18 + 100) = -1;
LABEL_62:
  v24 = (_QWORD *)(v2 + 34408);
  v25 = *(_QWORD *)(v2 + 34408);
  if ( v25 < 0 )
  {
    if ( v42 == 0 )
      Curl_failf(v2, "Can't get the size of file.", (_DWORD)v25);
    *v24 = v25 + *(_QWORD *)&buf.st_blksize;
  }
  v26 = *(_QWORD *)(v2 + 34408);
  if ( SHIDWORD(v26) > SHIDWORD(fda)
    || HIDWORD(v26) == HIDWORD(fda) && (v24 = (_QWORD *)fda, (unsigned int)v26 > (unsigned int)fda) )
  {
    Curl_failf(v2, "failed to resume file:// transfer", (_DWORD)v26);
  }
  v37 = *(_QWORD *)(v2 + 96);
  if ( v37 > 0 )
  {
    if ( v42 == 0 )
      goto LABEL_75;
  }
  else
  {
    v37 = fda - v26;
    if ( v42 == 0 )
      goto LABEL_75;
    v16 = 0;
    if ( v37 == 0 )
      return v16;
  }
  Curl_pgrsSetDownloadSize(v2, v24, v37, HIDWORD(v37));
LABEL_75:
  v27 = *(_DWORD *)(v2 + 34408);
  v28 = *(_DWORD *)(v2 + 34412);
  if ( *(_QWORD *)(v2 + 34408) != 0 )
  {
    v29 = j_lseek(v46, *(_DWORD *)(v2 + 34408), 0);
    if ( v27 != v29 || v28 != v29 >> 31 )
      return 36;
  }
  Curl_pgrsTime(v2, 5);
  fdb = 0;
  while ( 1 )
  {
    if ( v37 <= 16382 )
      v30 = curlx_sotouz(v37, HIDWORD(v37));
    else
      v30 = 0x3FFF;
    v31 = j_read(v46, v43, v30);
    if ( v31 <= 0 || (*((_BYTE *)v43 + v31) = 0, v37 == 0) )
    {
      v33 = 0;
      goto LABEL_90;
    }
    fdb += v31;
    v37 -= v31;
    v17 = Curl_client_write((int)a1, 1, (char *)v43, v31);
    if ( v17 != 0 )
      return v17;
    Curl_pgrsSetDownloadCounter(v2, v32, fdb, HIDWORD(fdb));
    if ( Curl_pgrsUpdate(a1) != 0 )
      break;
    v33 = Curl_speedcheck(v2, v48[0], v48[1]);
    if ( v33 != 0 )
      goto LABEL_90;
  }
  v33 = 42;
LABEL_90:
  v34 = Curl_pgrsUpdate(a1);
  v16 = 42;
  if ( v34 == 0 )
    return v33;
  return v16;
}


//======================================================================
// sub_239E20
// address: 0x00239E20   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_239E20(_DWORD *a1, int a2)
{
  int v2; // r2

  v2 = a1[1] - *(_DWORD *)(a2 + 4);
  return (*a1 >> 31) + ((unsigned int)v2 >= *a1) + (v2 >> 31);
}


//======================================================================
// sub_239E34
// address: 0x00239E34   size: 0x34 (52 bytes)
//======================================================================
void __fastcall __noreturn sub_239E34(const char *a1, int a2)
{
  curl_maprintf("%s:%d", a1, a2);
}


//======================================================================
// sub_239E84
// address: 0x00239E84   size: 0x22 (34 bytes)
//======================================================================
void __fastcall sub_239E84(int a1)
{
  *(_DWORD *)(a1 + 4) = 0;
  if ( *(_DWORD *)(a1 + 8) == 0 )
  {
    Curl_freeaddrinfo(*(void **)a1);
    Curl_cfree((void *)a1);
  }
}


//======================================================================
// sub_23A31C
// address: 0x0023A31C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_23A31C(int a1, int a2)
{
  if ( *(_DWORD *)(a2 + 8) == 1 )
    Curl_resolv_unlock(a1, a2);
  return 1;
}


//======================================================================
// sub_23A4B0
// address: 0x0023A4B0   size: 0xD6 (214 bytes)
//======================================================================
char *__fastcall sub_23A4B0(char *a1, __int64 a2)
{
  __int64 v5; // r0

  if ( a2 > 0 )
  {
    if ( a2 / 3600 <= 99 )
      curl_msnprintf(a1, 9, "%2lld:%02lld:%02lld", a2 / 3600, a2 % 3600 / 60, a2 % 3600 % 60);
    v5 = a2 / 86400;
    if ( a2 / 86400 <= 999 )
      curl_msnprintf(a1, 9, "%3lldd %02lldh", v5, a2 % 86400 / 3600);
    curl_msnprintf(a1, 9, "%7lldd", v5);
  }
  return j_strcpy(a1, "--:--:--");
}


//======================================================================
// sub_23A5C0
// address: 0x0023A5C0   size: 0xF8 (248 bytes)
//======================================================================
void __fastcall __noreturn sub_23A5C0(__int64 a1, int a2)
{
  unsigned __int64 v2; // kr00_8

  if ( SHIDWORD(a1) <= 0 )
  {
    if ( HIDWORD(a1) != 0 || (unsigned int)a1 <= 0x1869F )
      curl_msnprintf(a2, 6, "%5lld", a1);
    if ( (unsigned int)a1 <= 0x9C3FFF )
      curl_msnprintf(a2, 6, "%4lldk", (unsigned __int64)((unsigned int)a1 >> 10));
    if ( (unsigned int)a1 <= 0x63FFFFF )
    {
      v2 = (unsigned __int64)(unsigned int)a1 << 12;
      LODWORD(a1) = a1 & 0xFFFFF;
      curl_msnprintf(a2, 6, "%2lld.%0lldM", (unsigned __int64)HIDWORD(v2), a1 / 104857);
    }
LABEL_12:
    curl_msnprintf(a2, 6, "%4lldM", a1 >> 20);
  }
  if ( SHIDWORD(a1) > 2 )
  {
    if ( SHIDWORD(a1) > 24 )
    {
      if ( SHIDWORD(a1) <= 2499 )
        curl_msnprintf(a2, 6, "%4lldG", a1 >> 30);
      if ( SHIDWORD(a1) <= 2559999 )
        curl_msnprintf(a2, 6, "%4lldT", (__int64)(SHIDWORD(a1) >> 8));
      curl_msnprintf(a2, 6, "%4lldP", (__int64)(SHIDWORD(a1) >> 18));
    }
  }
  else if ( HIDWORD(a1) != 2 || (unsigned int)a1 <= 0x70FFFFFF )
  {
    goto LABEL_12;
  }
  curl_msnprintf(a2, 6, "%2lld.%0lldG", a1 >> 30, ((unsigned int)(4 * a1) >> 2) / 107374182LL);
}


//======================================================================
// sub_23AFB4
// address: 0x0023AFB4   size: 0x6C (108 bytes)
//======================================================================
size_t __fastcall sub_23AFB4(_DWORD **a1, void *ptr, size_t n)
{
  _DWORD **v3; // r3
  _DWORD *v7; // r5
  size_t result; // r0
  FILE *v9; // r0
  FILE *v10; // r0

  v3 = (_DWORD **)*a1;
  if ( (*a1)[1] == 2 )
  {
    v7 = a1[3];
    if ( v7 == nullptr )
      return 0;
    result = ((int (__fastcall *)(void *, int, size_t, _DWORD *))v7)(ptr, 1, n, v3[2]);
  }
  else
  {
    if ( a1[2] == nullptr )
    {
      v9 = j_fopen((const char *)v3[2], "rb");
      a1[2] = &v9->_flags;
      if ( v9 == nullptr )
        return -1;
    }
    result = j_fread(ptr, 1u, n, (FILE *)a1[2]);
  }
  if ( result == 0 )
  {
    v10 = (FILE *)a1[2];
    if ( v10 != nullptr )
    {
      j_fclose(v10);
      a1[2] = nullptr;
    }
    *a1 = (_DWORD *)**a1;
    return 0;
  }
  return result;
}


//======================================================================
// sub_23B024
// address: 0x0023B024   size: 0x1E (30 bytes)
//======================================================================
void __fastcall __noreturn sub_23B024(int a1)
{
  int v2; // r5
  int v3; // r0

  v2 = Curl_rand(a1);
  v3 = Curl_rand(a1);
  curl_maprintf("------------------------%08x%08x", v2, v3);
}


//======================================================================
// sub_23B048
// address: 0x0023B048   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_23B048(_DWORD **a1, unsigned int a2, const char *a3, size_t a4, _QWORD *a5)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  void *v9; // r0
  int v10; // r0
  int result; // r0
  struct stat buf; // [sp+18h] [bp-6Ch] BYREF

  v7 = Curl_cmalloc(0x10u);
  v8 = v7;
  if ( v7 == nullptr )
    return 27;
  *v7 = 0;
  if ( a2 > 1 )
  {
    v7[2] = a3;
  }
  else
  {
    if ( a4 == 0 )
      a4 = j_strlen(a3);
    v9 = Curl_cmalloc(a4 + 1);
    v8[2] = v9;
    if ( v9 == nullptr )
    {
      Curl_cfree(v8);
      return 27;
    }
    j_memcpy(v9, a3, a4);
    v10 = v8[2];
    v8[3] = a4;
    *(_BYTE *)(v10 + a4) = 0;
  }
  v8[1] = a2;
  if ( *a1 != nullptr )
    **a1 = v8;
  *a1 = v8;
  if ( a5 == nullptr )
    return 0;
  if ( a2 != 3 )
  {
    *a5 += a4;
    return 0;
  }
  if ( curl_strequal("-", v8[2]) != 0 )
    return 0;
  result = j_stat((const char *)v8[2], &buf);
  if ( result != 0 || (buf.st_mode & 0xF000) == 0x4000 )
    return 43;
  *a5 += *(_QWORD *)&buf.st_blksize;
  return result;
}


//======================================================================
// sub_23B144
// address: 0x0023B144   size: 0x58 (88 bytes)
//======================================================================
void __fastcall __noreturn sub_23B144(int a1, int a2, int a3, int a4)
{
  _BYTE v4[4104]; // [sp+Ch] [bp-1008h] BYREF
  _DWORD savedregs[7]; // [sp+1014h] [bp+0h]

  savedregs[5] = a3;
  savedregs[6] = a4;
  curl_mvsnprintf(v4, 4096, a3);
}


//======================================================================
// sub_23B1B0
// address: 0x0023B1B0   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall sub_23B1B0(int a1, int a2, int a3)
{
  const char *v3; // r4
  const char *v4; // r0
  char *v5; // r6
  char *(__fastcall *v7)(const char *); // r4
  char *v8; // r0
  size_t v9; // r0
  _BYTE *v10; // r0
  _BYTE *i; // r3
  int v12; // r2
  char v13; // r2
  int v14; // [sp+0h] [bp-Ch]

  v3 = *(const char **)(a1 + 44);
  if ( v3 != nullptr
    || (v4 = Curl_cstrdup(*(const char **)(a1 + 12)), v5 = (char *)v4, v4 != nullptr)
    && (v7 = Curl_cstrdup, v8 = j_basename(v4), v3 = v7(v8), Curl_cfree(v5), v3 != nullptr) )
  {
    if ( j_strchr(v3, 92) == nullptr && j_strchr(v3, 34) == nullptr )
      goto LABEL_15;
    v9 = j_strlen(v3);
    v10 = Curl_cmalloc(2 * v9 + 1);
    if ( v10 != nullptr )
    {
      for ( i = v10; ; ++i )
      {
        v12 = *(unsigned __int8 *)v3;
        if ( *v3 == 0 )
          break;
        if ( v12 == 92 || v12 == 34 )
          *i++ = 92;
        v13 = *v3++;
        *i = v13;
      }
      *i = v12;
      v3 = v10;
LABEL_15:
      sub_23B144(v14, a3, (int)"; filename=\"%s\"", (int)v3);
    }
  }
  return 27;
}


//======================================================================
// sub_23B28C
// address: 0x0023B28C   size: 0x4E (78 bytes)
//======================================================================
char *__fastcall sub_23B28C(const char *a1, size_t a2)
{
  size_t v3; // r4
  int v4; // r5
  char *result; // r0
  char *v6; // r7

  v3 = a2;
  if ( a2 != 0 )
  {
    v4 = 0;
  }
  else
  {
    if ( a1 == nullptr )
      return Curl_cstrdup((const char *)&unk_3FB8EA);
    v4 = 1;
    v3 = j_strlen(a1);
  }
  result = (char *)Curl_cmalloc(v4 + v3);
  v6 = result;
  if ( result != nullptr )
  {
    j_memcpy(result, a1, v3);
    result = v6;
    if ( v4 != 0 )
      v6[v3] = 0;
  }
  return result;
}


//======================================================================
// sub_23BE9C
// address: 0x0023BE9C   size: 0x62 (98 bytes)
//======================================================================
void __fastcall sub_23BE9C(_DWORD *p)
{
  void *v2; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r0

  v2 = (void *)p[8];
  if ( v2 != nullptr )
    Curl_cfree(v2);
  v3 = (void *)p[5];
  if ( v3 != nullptr )
    Curl_cfree(v3);
  v4 = (void *)p[3];
  if ( v4 != nullptr )
    Curl_cfree(v4);
  v5 = (void *)p[4];
  if ( v5 != nullptr )
    Curl_cfree(v5);
  v6 = (void *)p[1];
  if ( v6 != nullptr )
    Curl_cfree(v6);
  v7 = (void *)p[2];
  if ( v7 != nullptr )
    Curl_cfree(v7);
  v8 = (void *)p[11];
  if ( v8 != nullptr )
    Curl_cfree(v8);
  v9 = (void *)p[10];
  if ( v9 != nullptr )
    Curl_cfree(v9);
  Curl_cfree(p);
}


//======================================================================
// sub_23BF04
// address: 0x0023BF04   size: 0x26 (38 bytes)
//======================================================================
char *__fastcall sub_23BF04(void **a1, char *a2)
{
  void *v3; // r0
  char *result; // r0

  v3 = *a1;
  if ( v3 != nullptr )
    Curl_cfree(v3);
  result = Curl_cstrdup(a2);
  *a1 = result;
  return result;
}


//======================================================================
// sub_23BF34
// address: 0x0023BF34   size: 0x56 (86 bytes)
//======================================================================
__int64 __fastcall sub_23BF34(_DWORD *a1)
{
  time_t v2; // r0
  int v3; // r2
  time_t v4; // r7
  _DWORD *v5; // r0
  _DWORD *v6; // r5
  _DWORD *v7; // r6
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = a1;
  v2 = j_time(nullptr);
  v3 = v2 >> 31;
  v4 = v2;
  v5 = (_DWORD *)*a1;
  HIDWORD(v9) = v3;
  v6 = nullptr;
  while ( v5 != nullptr )
  {
    v7 = (_DWORD *)*v5;
    if ( (v5[8] != 0 || v5[11] != 0) && *((_QWORD *)v5 + 3) < __SPAIR64__(HIDWORD(v9), v4) )
    {
      if ( v5 == (_DWORD *)*a1 )
        *a1 = v7;
      else
        *v6 = v7;
      --a1[3];
      sub_23BE9C(v5);
      v5 = v6;
    }
    v6 = v5;
    v5 = v7;
  }
  return v9;
}


//======================================================================
// sub_23BF8A
// address: 0x0023BF8A   size: 0x40 (64 bytes)
//======================================================================
bool __fastcall sub_23BF8A(const char *a1, const char *a2)
{
  size_t v4; // r4
  size_t v5; // r0
  size_t v6; // r5
  const char *v8; // r6

  v4 = j_strlen(a1);
  v5 = j_strlen(a2);
  v6 = v5;
  if ( v5 < v4 )
    return false;
  v8 = &a2[v5 - v4];
  if ( Curl_raw_equal(a1, v8) == 0 )
    return false;
  if ( v6 == v4 )
    return true;
  return *(v8 - 1) == 46;
}


//======================================================================
// sub_23BFCA
// address: 0x0023BFCA   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_23BFCA(int *a1, _DWORD *a2)
{
  int v2; // r5
  _DWORD *v3; // r6
  const char *v4; // r0
  const char *v5; // r4
  const char *v6; // r0
  size_t v7; // r0
  const char *v8; // r0
  const char *v9; // r0
  int result; // r0
  const char *v11; // r1

  v2 = *a1;
  v3 = (_DWORD *)*a2;
  v4 = *(const char **)(*a1 + 12);
  if ( v4 != nullptr )
    v4 = (const char *)j_strlen(v4);
  v5 = v4;
  v6 = (const char *)v3[3];
  if ( v6 != nullptr )
  {
    v7 = j_strlen(v6);
    if ( v5 != (const char *)v7 )
      return (unsigned int)v5 >= v7 ? -1 : 1;
  }
  else if ( v5 != nullptr )
  {
    return -1;
  }
  v8 = *(const char **)(v2 + 20);
  if ( v8 != nullptr )
    v8 = (const char *)j_strlen(v8);
  v5 = v8;
  v9 = (const char *)v3[5];
  if ( v9 != nullptr )
  {
    v7 = j_strlen(v9);
    if ( v5 != (const char *)v7 )
      return (unsigned int)v5 >= v7 ? -1 : 1;
    goto LABEL_13;
  }
  if ( v5 != nullptr )
    return -1;
LABEL_13:
  result = *(_DWORD *)(v2 + 4);
  if ( result != 0 )
  {
    v11 = (const char *)v3[1];
    if ( v11 != nullptr )
      return j_strcmp((const char *)result, v11);
    else
      return 0;
  }
  return result;
}


//======================================================================
// sub_23C038
// address: 0x0023C038   size: 0x74 (116 bytes)
//======================================================================
char *__fastcall sub_23C038(const char *a1)
{
  const char *v1; // r0
  char *v2; // r4
  size_t v3; // r0
  char *v4; // r0
  char *result; // r0
  size_t v6; // r0
  char *v7; // r3

  v1 = Curl_cstrdup(a1);
  v2 = (char *)v1;
  if ( v1 == nullptr )
    return v2;
  if ( *v1 == 34 )
  {
    v3 = j_strlen(v1);
    j_memmove(v2, v2 + 1, v3);
  }
  v4 = &v2[j_strlen(v2) - 1];
  if ( *v4 == 34 )
    *v4 = 0;
  if ( *v2 != 47 )
  {
    Curl_cfree(v2);
    return Curl_cstrdup("/");
  }
  v6 = j_strlen(v2);
  if ( v6 <= 1 )
    return v2;
  v7 = &v2[v6 - 1];
  result = v2;
  if ( *v7 == 47 )
    *v7 = 0;
  return result;
}


//======================================================================
// sub_23C0B8
// address: 0x0023C0B8   size: 0xAE (174 bytes)
//======================================================================
void __fastcall __noreturn sub_23C0B8(int a1)
{
  const char *v1; // r1
  const char *v2; // r3
  const char *v3; // r2
  const char *v4; // r12
  const char *v5; // r4
  const char *v6; // r5
  const char *v7; // r7
  const char *v8; // r0
  __int64 v9; // [sp+20h] [bp-Ch]

  if ( *(_BYTE *)(a1 + 50) != 0 )
    v1 = "#HttpOnly_";
  else
    v1 = (const char *)&unk_3FB8EA;
  v2 = *(const char **)(a1 + 20);
  if ( *(_BYTE *)(a1 + 36) != 0 )
  {
    if ( v2 == nullptr )
    {
      v3 = (const char *)&unk_3FB8EA;
LABEL_12:
      v2 = "unknown";
LABEL_13:
      if ( *(_BYTE *)(a1 + 36) != 0 )
        v4 = "TRUE";
      else
        v4 = "FALSE";
      v5 = *(const char **)(a1 + 12);
      if ( v5 == nullptr )
        v5 = "/";
      if ( *(_BYTE *)(a1 + 48) != 0 )
        v6 = "TRUE";
      else
        v6 = "FALSE";
      v9 = *(_QWORD *)(a1 + 24);
      v7 = *(const char **)(a1 + 4);
      v8 = *(const char **)(a1 + 8);
      if ( v8 == nullptr )
        v8 = (const char *)&unk_3FB8EA;
      curl_maprintf("%s%s%s\t%s\t%s\t%s\t%lld\t%s\t%s", v1, v3, v2, v4, v5, v6, v9, v7, v8);
    }
    if ( *v2 == 46 )
      v3 = (const char *)&unk_3FB8EA;
    else
      v3 = ".";
  }
  else
  {
    v3 = (const char *)&unk_3FB8EA;
  }
  if ( v2 != nullptr )
    goto LABEL_13;
  goto LABEL_12;
}


//======================================================================
// sub_23CED4
// address: 0x0023CED4   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_23CED4(_DWORD *a1)
{
  int v2; // r2
  int v3; // r1
  int result; // r0
  int v5; // r1

  v2 = a1[2] & *a1;
  v3 = 4;
  if ( (v2 & 4) != 0 || (v3 = 2, (v2 & 2) != 0) )
  {
    a1[1] = v3;
    result = 1;
  }
  else
  {
    v5 = 8;
    result = 1;
    if ( (v2 & 8) != 0 || (v5 = 32, (v2 & 0x20) != 0) )
    {
      a1[1] = v5;
    }
    else if ( (v2 & 1) != 0 )
    {
      a1[1] = 1;
    }
    else
    {
      a1[1] = 0x40000000;
      result = 0;
    }
  }
  a1[2] = 0;
  return result;
}


//======================================================================
// sub_23CF18
// address: 0x0023CF18   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_23CF18(_BYTE *a1)
{
  int v1; // r3
  int v2; // r1
  int v3; // r2

  v1 = *(_DWORD *)a1;
  v2 = *(_DWORD *)(*(_DWORD *)a1 + 200);
  v3 = 0;
  if ( *(_BYTE *)(*(_DWORD *)a1 + 760) != 0
    && v2 > 399
    && (*(_QWORD *)(v1 + 34408) == 0 || *(_DWORD *)(v1 + 628) != 1 || v2 != 416) )
  {
    if ( v2 == 401 )
    {
      if ( a1[444] != 0 )
        return *(unsigned __int8 *)(v1 + 34320);
      return 1;
    }
    else
    {
      v3 = 1;
      if ( v2 == 407 && a1[445] != 0 )
        return *(unsigned __int8 *)(v1 + 34320);
    }
  }
  return v3;
}


//======================================================================
// sub_23CF94
// address: 0x0023CF94   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_23CF94(int a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 320);
  return 0x10000;
}


//======================================================================
// sub_23CFA0
// address: 0x0023CFA0   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_23CFA0(void *a1, int a2, int a3, _DWORD *a4)
{
  int v4; // r5
  size_t *v6; // r6
  int v7; // r3
  __int64 v8; // r4
  const void *v9; // r1
  size_t v10; // r2
  int v11; // r1
  size_t v12; // r4
  size_t v13; // r0
  __int64 v14; // r2
  int v16; // [sp+4h] [bp-8h]

  v4 = *a4;
  v6 = *(size_t **)(*a4 + 328);
  v7 = 0;
  if ( *((_QWORD *)v6 + 1) != 0 )
  {
    LODWORD(v8) = a3 * a2;
    v16 = a3 * a2;
    *(_BYTE *)(v4 + 327) = v6[22] == 1;
    HIDWORD(v8) = 0;
    v9 = (const void *)v6[4];
    if ( *((_QWORD *)v6 + 1) > (__int64)(unsigned int)v8 )
    {
      j_memcpy(a1, v9, v16);
      v11 = v16;
      v6[4] += v16;
      v14 = *((_QWORD *)v6 + 1) - v8;
    }
    else
    {
      j_memcpy(a1, v9, v6[2]);
      v10 = v6[20];
      v11 = v6[2];
      if ( *((_QWORD *)v6 + 10) != 0 )
      {
        v12 = v6[18];
        v13 = v6[16];
        v6[3] = v6[21];
        v6[2] = v10;
        v6[4] = v12;
        a4[145] = v13;
        a4[146] = v6[17];
        ++v6[22];
        v6[20] = 0;
        v6[21] = 0;
        return v11;
      }
      v14 = 0;
    }
    *((_QWORD *)v6 + 1) = v14;
    return v11;
  }
  return v7;
}


//======================================================================
// sub_23D040
// address: 0x0023D040   size: 0x8A (138 bytes)
//======================================================================
int __fastcall sub_23D040(int a1, int a2, size_t a3)
{
  unsigned int v6; // r3
  unsigned int v7; // r1
  size_t v8; // r7
  void *v9; // r0
  char *v10; // r0
  _BYTE *v12; // r3
  int v13; // r2
  int v14; // [sp+4h] [bp-8h]

  v6 = a3 + *(_DWORD *)(a2 + 88);
  v7 = *(_DWORD *)(a1 + 1384);
  if ( v6 >= v7 )
  {
    if ( v6 > 0x19000 )
      Curl_failf(a1, "Avoided giant realloc for header (max is %d)!", 102400);
    v8 = (3 * v6) >> 1;
    if ( v8 < 2 * v7 )
      v8 = 2 * v7;
    v9 = *(void **)(a1 + 1380);
    v14 = *(_DWORD *)(a2 + 84) - (_DWORD)v9;
    v10 = (char *)Curl_crealloc(v9, v8);
    if ( v10 == nullptr )
      Curl_failf(a1, "Failed to alloc memory for big header!");
    *(_DWORD *)(a1 + 1384) = v8;
    *(_DWORD *)(a1 + 1380) = v10;
    *(_DWORD *)(a2 + 84) = &v10[v14];
  }
  j_memcpy(*(void **)(a2 + 84), *(const void **)(a2 + 96), a3);
  v12 = (_BYTE *)(*(_DWORD *)(a2 + 84) + a3);
  v13 = *(_DWORD *)(a2 + 88);
  *(_DWORD *)(a2 + 84) = v12;
  *(_DWORD *)(a2 + 88) = v13 + a3;
  *v12 = 0;
  return 0;
}


//======================================================================
// sub_23D0DC
// address: 0x0023D0DC   size: 0x140 (320 bytes)
//======================================================================
int __fastcall sub_23D0DC(int *a1)
{
  int v1; // r6
  int v3; // r2
  int v4; // r3
  __int64 v5; // r4
  const char *v6; // r0
  int v7; // r1
  int v8; // r2
  int v9; // r3
  __int64 v11; // [sp+0h] [bp-14h]
  int v12; // [sp+Ch] [bp-8h]

  v1 = *a1;
  v3 = *(_DWORD *)(*a1 + 328);
  if ( v3 == 0 )
    return 0;
  v4 = *(_DWORD *)(v1 + 628);
  if ( v4 == 1 || v4 == 5 )
    return 0;
  v11 = *(_QWORD *)(v3 + 40);
  v5 = 0;
  v12 = *((unsigned __int8 *)a1 + 454);
  if ( *((_BYTE *)a1 + 454) == 0 )
  {
    switch ( v4 )
    {
      case 3:
        v5 = *(_QWORD *)(v3 + 8);
        break;
      case 4:
        v5 = *(_QWORD *)(v1 + 536);
        break;
      case 2:
        v5 = *(_QWORD *)(v1 + 408);
        if ( v5 == -1 )
        {
          v6 = *(const char **)(v1 + 396);
          if ( v6 != nullptr )
            v5 = j_strlen(v6);
        }
        break;
      default:
        v5 = -1;
        break;
    }
  }
  *((_BYTE *)a1 + 455) = 0;
  v7 = v5 + 1;
  if ( v5 != -1 && v5 <= v11 )
    goto LABEL_28;
  v8 = *(_DWORD *)(v1 + 34308);
  if ( v8 != 8 )
  {
    v9 = *(_DWORD *)(v1 + 34292);
    if ( v9 != 8 && v8 != 32 && v9 != 32 )
    {
LABEL_27:
      *((_BYTE *)a1 + 440) = 1;
      *(_DWORD *)(v1 + 80) = 0;
      *(_DWORD *)(v1 + 84) = 0;
LABEL_28:
      if ( v11 != 0 )
        return Curl_readrewind(a1, v7);
      return 0;
    }
  }
  if ( v5 - v11 <= 1999 || a1[147] != 0 || a1[151] != 0 )
  {
    if ( v12 == 0 )
    {
      *((_BYTE *)a1 + 455) = 1;
      Curl_infof(v1, "Rewind stream after send\n");
      return 0;
    }
    return 0;
  }
  if ( *((_BYTE *)a1 + 440) == 0 )
  {
    Curl_infof(v1, "NTLM send, close instead of sending %lld bytes\n", v5 - v11);
    goto LABEL_27;
  }
  return 0;
}


//======================================================================
// sub_23D230
// address: 0x0023D230   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_23D230(_DWORD *a1, int a2)
{
  const char *v2; // r3
  const char *v3; // r2

  if ( a2 != 0 )
  {
    v2 = (const char *)a1[71];
    v3 = (const char *)a1[72];
  }
  else
  {
    v2 = (const char *)a1[67];
    v3 = (const char *)a1[68];
  }
  curl_msnprintf(*a1 + 1388, 16385, "%s:%s", v2, v3);
}


//======================================================================
// sub_23D404
// address: 0x0023D404   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_23D404(int a1, _DWORD *a2)
{
  int v2; // r2
  int v3; // r3

  v2 = *(_DWORD *)(a1 + 632);
  v3 = 1;
  if ( v2 <= 1 )
  {
    if ( v2 == 1 )
      return 0;
    if ( *a2 != 11 )
    {
      if ( *a2 != 10 )
        return *(_DWORD *)(a1 + 34372) - 10 - (*(_DWORD *)(a1 + 34372) - 11 + (*(_DWORD *)(a1 + 34372) == 10));
      return 0;
    }
  }
  return v3;
}


//======================================================================
// sub_23D434
// address: 0x0023D434   size: 0x3A (58 bytes)
//======================================================================
bool __fastcall sub_23D434(_DWORD *a1, int a2)
{
  size_t v4; // r0

  while ( a1 != nullptr )
  {
    v4 = j_strlen((const char *)*a1);
    if ( Curl_raw_nequal(*a1, a2, v4) != 0 )
      return true;
    a1 = (_DWORD *)a1[1];
  }
  return Curl_raw_nequal("HTTP/", a2, 5) != 0;
}


//======================================================================
// sub_23D474
// address: 0x0023D474   size: 0x28 (40 bytes)
//======================================================================
bool __fastcall sub_23D474(int a1, int a2, int a3)
{
  if ( (*(_DWORD *)(a2 + 60) & 0x40000) != 0 )
    return Curl_raw_nequal("RTSP/", a3, 5) != 0;
  else
    return sub_23D434(*(_DWORD **)(a1 + 720), a3);
}


//======================================================================
// sub_23DD40
// address: 0x0023DD40   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_23DD40(int a1, int a2, int a3)
{
  int v4; // r0
  int v5; // r2
  int v6; // r3

  *(_BYTE *)(a1 + 34376) = 0;
  if ( sub_23D404(a1, (_DWORD *)(a2 + 296)) != 0 )
  {
    v4 = Curl_checkheaders(a1, "Expect:");
    if ( v4 == 0 )
      Curl_add_bufferf(a3, (int)"Expect: 100-continue\r\n", v5, v6);
    *(_BYTE *)(a1 + 34376) = Curl_compareheader(v4, "Expect:", "100-continue");
  }
  return 0;
}


//======================================================================
// sub_23F26C
// address: 0x0023F26C   size: 0x16 (22 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_23F26C(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_23F2C2
// address: 0x0023F2C2   size: 0x4 (4 bytes)
//======================================================================
void __fastcall sub_23F2C2(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  sub_23F26C(a1, a2, a3, a4, a5, a6, a7, a8, a9);
}


//======================================================================
// sub_23F310
// address: 0x0023F310   size: 0x334 (820 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0023F310  MOVS    R4, R7
//   0023F312  ADDS    R4, #0xAC
//   0023F314  LDR     R5, [R4]
//   0023F316  LDR     R0, [SP,#arg_1C]
//   0023F318  STR     R4, [SP,#arg_10]
//   0023F31A  ADDS    R4, #4
//   0023F31C  STR     R5, [R4]
//   0023F31E  LDR     R0, [R0]
//   0023F320  MOVS    R1, #0xA; int
//   0023F322  STR     R4, [SP,#arg_14]
//   0023F324  STR     R0, [SP,#arg_C]
//   0023F326  LDR     R2, [SP,#arg_C]; size_t
//   0023F328  MOVS    R0, R5; void *
//   0023F32A  BL      j_memchr
//   0023F32E  LDR     R1, [SP,#arg_1C]
//   0023F330  ADDS    R4, #4
//   0023F332  STR     R0, [R4]
//   0023F334  LDR     R2, [R1]; size_t
//   0023F336  CMP     R0, #0
//   0023F338  BNE     loc_23F386
//   0023F33A  MOVS    R0, R7; int
//   0023F33C  LDR     R1, [SP,#arg_24]; int
//   0023F33E  BL      sub_23D040
//   0023F342  SUBS    R5, R0, #0
//   0023F344  BEQ     loc_23F34A
//   0023F346  BL      sub_23FF8E
//   0023F34A  MOVS    R3, R7
//   0023F34C  ADDS    R3, #0xA0
//   0023F34E  LDR     R3, [R3]
//   0023F350  CMP     R3, #0
//   0023F352  BEQ     loc_23F356
//   0023F354  B       loc_23F63E
//   0023F356  MOVS    R3, R7
//   0023F358  ADDS    R3, #0xA8
//   0023F35A  LDR     R3, [R3]
//   0023F35C  CMP     R3, #5
//   0023F35E  BHI     loc_23F362
//   0023F360  B       loc_23F63E
//   0023F362  MOVS    R3, #0x1E4
//   0023F366  LDR     R1, [R6,R3]
//   0023F368  LDR     R3, =0x564
//   0023F36A  MOVS    R0, R7
//   0023F36C  LDR     R2, [R7,R3]
//   0023F36E  BL      sub_23D474
//   0023F372  CMP     R0, #0
//   0023F374  BEQ     loc_23F378
//   0023F376  B       loc_23F63E
//   0023F378  MOVS    R3, R7
//   0023F37A  ADDS    R3, #0x98
//   0023F37C  MOVS    R2, #2
//   0023F37E  STRB    R5, [R3]
//   0023F380  STR     R2, [R3,#4]
//   0023F382  BL      sub_23FF8E
//   0023F386  SUBS    R5, R0, R5
//   0023F388  LDR     R3, [SP,#arg_1C]
//   0023F38A  ADDS    R5, #1
//   0023F38C  SUBS    R2, R2, R5
//   0023F38E  STR     R2, [R3]
//   0023F390  LDR     R3, [R4]
//   0023F392  LDR     R0, [SP,#arg_10]
//   0023F394  LDR     R1, [SP,#arg_14]
//   0023F396  ADDS    R3, #1
//   0023F398  STR     R3, [R0]
//   0023F39A  LDR     R2, [R1]
//   0023F39C  MOVS    R0, R7; int
//   0023F39E  LDR     R1, [SP,#arg_24]; int
//   0023F3A0  SUBS    R2, R3, R2; size_t
//   0023F3A2  BL      sub_23D040
//   0023F3A6  CMP     R0, #0
//   0023F3A8  BEQ     loc_23F3AE
//   0023F3AA  BL      sub_23FEC4
//   0023F3AE  MOVS    R3, R7
//   0023F3B0  ADDS    R3, #0xA4
//   0023F3B2  LDR     R3, [R3]
//   0023F3B4  STR     R3, [R4]
//   0023F3B6  LDR     R3, =0x564
//   0023F3B8  LDR     R2, [R7,R3]
//   0023F3BA  MOVS    R3, R7
//   0023F3BC  ADDS    R3, #0xB8
//   0023F3BE  STR     R2, [R3]
//   0023F3C0  SUBS    R3, #0x18
//   0023F3C2  LDR     R3, [R3]
//   0023F3C4  CMP     R3, #0
//   0023F3C6  BNE     loc_23F40A
//   0023F3C8  MOVS    R3, R7
//   0023F3CA  ADDS    R3, #0xA8
//   0023F3CC  LDR     R3, [R3]
//   0023F3CE  CMP     R3, #5
//   0023F3D0  BLS     loc_23F40A
//   0023F3D2  MOVS    R3, #0x1E4
//   0023F3D6  LDR     R1, [R6,R3]
//   0023F3D8  MOVS    R0, R7
//   0023F3DA  BL      sub_23D474
//   0023F3DE  CMP     R0, #0
//   0023F3E0  BNE     loc_23F40A
//   0023F3E2  MOVS    R3, R7
//   0023F3E4  LDR     R4, [SP,#arg_1C]
//   0023F3E6  ADDS    R3, #0x98
//   0023F3E8  STRB    R0, [R3]
//   0023F3EA  LDR     R3, [R4]
//   0023F3EC  MOVS    R2, R7
//   0023F3EE  ADDS    R2, #0x9C
//   0023F3F0  CMP     R3, #0
//   0023F3F2  BEQ     loc_23F3FC
//   0023F3F4  MOVS    R3, #1
//   0023F3F6  STR     R3, [R2]
//   0023F3F8  BL      sub_23FEC4
//   0023F3FC  LDR     R4, [SP,#arg_1C]
//   0023F3FE  MOVS    R1, #2
//   0023F400  STR     R1, [R2]
//   0023F402  STR     R5, [R4]
//   0023F404  MOVS    R5, R3
//   0023F406  BL      sub_23FF8E
//   0023F40A  MOVS    R4, R7
//   0023F40C  ADDS    R4, #0xB8
//   0023F40E  LDR     R0, [R4]
//   0023F410  LDRB    R3, [R0]
//   0023F412  CMP     R3, #0xA
//   0023F414  BEQ     loc_23F420
//   0023F416  CMP     R3, #0xD
//   0023F418  BEQ     loc_23F41C
//   0023F41A  B       loc_23F67A
//   0023F41C  ADDS    R0, #1
//   0023F41E  STR     R0, [R4]
//   0023F420  LDR     R3, [R4]
//   0023F422  LDRB    R2, [R3]
//   0023F424  CMP     R2, #0xA
//   0023F426  BNE     loc_23F42C
//   0023F428  ADDS    R3, #1
//   0023F42A  STR     R3, [R4]
//   0023F42C  MOVS    R3, R7
//   0023F42E  ADDS    R3, #0xC8
//   0023F430  LDR     R2, [R3]
//   0023F432  SUBS    R3, #0x30 ; '0'
//   0023F434  SUBS    R2, #0x64 ; 'd'
//   0023F436  CMP     R2, #0x63 ; 'c'
//   0023F438  BHI     loc_23F456
//   0023F43A  LDR     R5, [R3,#0x3C]
//   0023F43C  MOVS    R2, #1
//   0023F43E  STRB    R2, [R3]
//   0023F440  MOVS    R2, #0
//   0023F442  STR     R2, [R3,#8]
//   0023F444  ADDS    R3, #0x3C ; '<'
//   0023F446  CMP     R5, R2
//   0023F448  BEQ     loc_23F4A8
//   0023F44A  LDR     R0, [R3,#0x58]
//   0023F44C  STR     R2, [R3]
//   0023F44E  MOVS    R2, #2
//   0023F450  ORRS    R2, R0
//   0023F452  STR     R2, [R3,#0x58]
//   0023F454  B       loc_23F4A8
//   0023F456  MOVS    R2, #0
//   0023F458  STRB    R2, [R3]
//   0023F45A  LDR     R1, [R7,#0x50]
//   0023F45C  ADDS    R1, #1
//   0023F45E  BNE     loc_23F4A8
//   0023F460  LDR     R2, [R7,#0x54]
//   0023F462  ADDS    R2, #1
//   0023F464  BNE     loc_23F4A8
//   0023F466  MOVS    R3, #0x144
//   0023F46A  LDRB    R3, [R7,R3]
//   0023F46C  CMP     R3, #0
//   0023F46E  BNE     loc_23F4A8
//   0023F470  MOVS    R4, #0x1B8
//   0023F474  LDRB    R3, [R6,R4]
//   0023F476  CMP     R3, #0
//   0023F478  BNE     loc_23F4A8
//   0023F47A  MOVS    R3, R6
//   0023F47C  ADDS    R3, #0xFC
//   0023F47E  LDR     R3, [R3,#0x2C]
//   0023F480  CMP     R3, #0xA
//   0023F482  BLE     loc_23F4A8
//   0023F484  MOVS    R3, #0x1E4
//   0023F488  LDR     R3, [R6,R3]
//   0023F48A  LDR     R3, [R3,#0x3C]
//   0023F48C  LSLS    R5, R3, #0xD
//   0023F48E  BMI     loc_23F4A8
//   0023F490  MOVS    R3, #0x274
//   0023F494  LDR     R3, [R7,R3]
//   0023F496  CMP     R3, #5
//   0023F498  BEQ     loc_23F4A8
//   0023F49A  LDR     R1, =(aNoChunkNoClose - 0x23F4A2); "no chunk, no close, no size. Assume clo"...
//   0023F49C  MOVS    R0, R7
//   0023F49E  ADD     R1, PC; "no chunk, no close, no size. Assume clo"...
//   0023F4A0  BL      Curl_infof
//   0023F4A4  MOVS    R3, #1
//   0023F4A6  STRB    R3, [R6,R4]
//   0023F4A8  MOVS    R0, R6
//   0023F4AA  BL      sub_23CF18
//   0023F4AE  CMP     R0, #0
//   0023F4B0  BEQ     loc_23F4C0
//   0023F4B2  LDR     R1, =(aTheRequestedUr - 0x23F4C0); "The requested URL returned error: %d"
//   0023F4B4  MOVS    R3, R7
//   0023F4B6  ADDS    R3, #0xC8
//   0023F4B8  LDR     R2, [R3]
//   0023F4BA  MOVS    R0, R7
//   0023F4BC  ADD     R1, PC; "The requested URL returned error: %d"
//   0023F4BE  B       loc_23F7B0
//   0023F4C0  MOVS    R3, #0x2FC
//   0023F4C4  LDRB    R1, [R7,R3]

//======================================================================
// sub_23F7FE
// address: 0x0023F7FE   size: 0x6A6 (1702 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0023F7FE  MOVS    R3, #0x132
//   0023F802  LDRB    R3, [R7,R3]
//   0023F804  CMP     R3, #0
//   0023F806  BNE     loc_23F884
//   0023F808  LDR     R3, =0x31F
//   0023F80A  LDRB    R4, [R7,R3]
//   0023F80C  CMP     R4, #0
//   0023F80E  BNE     loc_23F884
//   0023F810  LDR     R0, =(aContentLength_0 - 0x23F81A); "Content-Length:"
//   0023F812  MOVS    R5, R7
//   0023F814  ADDS    R5, #0xB8
//   0023F816  ADD     R0, PC; "Content-Length:"
//   0023F818  LDR     R1, [R5]
//   0023F81A  MOVS    R2, #0xF
//   0023F81C  BL      Curl_raw_nequal
//   0023F820  CMP     R0, #0
//   0023F822  BEQ     loc_23F884
//   0023F824  LDR     R0, [R5]
//   0023F826  MOVS    R1, R4; char **
//   0023F828  MOVS    R2, #0xA; int
//   0023F82A  ADDS    R0, #0xF; char *
//   0023F82C  BL      j_strtoll
//   0023F830  MOVS    R4, #0x2D8
//   0023F834  MOVS    R3, R1
//   0023F836  ADDS    R1, R7, R4
//   0023F838  MOVS    R2, R0
//   0023F83A  LDR     R0, [R1]
//   0023F83C  LDR     R1, [R1,#4]
//   0023F83E  MOVS    R4, R0
//   0023F840  ORRS    R4, R1
//   0023F842  BEQ     loc_23F85C
//   0023F844  CMP     R3, R1
//   0023F846  BGT     loc_23F84E
//   0023F848  BNE     loc_23F85C
//   0023F84A  CMP     R2, R0
//   0023F84C  BLS     loc_23F85C
//   0023F84E  LDR     R1, =(aMaximumFileSiz - 0x23F858); "Maximum file size exceeded"
//   0023F850  MOVS    R0, R7
//   0023F852  MOVS    R5, #0x3F ; '?'
//   0023F854  ADD     R1, PC; "Maximum file size exceeded"
//   0023F856  BL      Curl_failf
//   0023F85A  B       sub_23FF8E
//   0023F85C  CMP     R3, #0
//   0023F85E  BLT     loc_23F870
//   0023F860  STR     R2, [R7,#0x50]
//   0023F862  STR     R3, [R7,#0x54]
//   0023F864  STR     R2, [R7,#0x60]
//   0023F866  STR     R3, [R7,#0x64]
//   0023F868  MOVS    R0, R7
//   0023F86A  BL      Curl_pgrsSetDownloadSize
//   0023F86E  B       loc_23FE46
//   0023F870  MOVS    R0, #1
//   0023F872  MOVS    R1, #0xDC
//   0023F874  LSLS    R1, R0
//   0023F876  STRB    R0, [R6,R1]
//   0023F878  LDR     R1, =(aNegativeConten - 0x23F880); "Negative content-length: %lld, closing "...
//   0023F87A  MOVS    R0, R7
//   0023F87C  ADD     R1, PC; "Negative content-length: %lld, closing "...
//   0023F87E  BL      Curl_infof
//   0023F882  B       loc_23FE46
//   0023F884  LDR     R0, =(aContentType - 0x23F890); "Content-Type:"
//   0023F886  MOVS    R4, R7
//   0023F888  ADDS    R4, #0xB8
//   0023F88A  LDR     R1, [R4]
//   0023F88C  ADD     R0, PC; "Content-Type:"
//   0023F88E  MOVS    R2, #0xD
//   0023F890  BL      Curl_raw_nequal
//   0023F894  LDR     R1, [R4]
//   0023F896  SUBS    R5, R0, #0
//   0023F898  BEQ     loc_23F8C4
//   0023F89A  MOVS    R0, R1; char *
//   0023F89C  BL      Curl_copy_header_value
//   0023F8A0  SUBS    R4, R0, #0
//   0023F8A2  BNE     loc_23F8A8
//   0023F8A4  MOVS    R5, #0x1B
//   0023F8A6  B       sub_23FF8E
//   0023F8A8  LDRB    R3, [R0]
//   0023F8AA  CMP     R3, #0
//   0023F8AC  BEQ     loc_23F906
//   0023F8AE  LDR     R5, =0x86C4
//   0023F8B0  LDR     R0, [R7,R5]; p
//   0023F8B2  CMP     R0, #0
//   0023F8B4  BEQ     loc_23F8C0
//   0023F8B6  LDR     R3, =0xFFFFF268
//   0023F8B8  LDR     R1, [SP,#arg_18]
//   0023F8BA  LDR     R3, [R1,R3]
//   0023F8BC  LDR     R3, [R3]
//   0023F8BE  BLX     R3
//   0023F8C0  STR     R4, [R7,R5]
//   0023F8C2  B       loc_23FE46
//   0023F8C4  LDR     R0, =(aServer_0 - 0x23F8CC); "Server:"
//   0023F8C6  MOVS    R2, #7
//   0023F8C8  ADD     R0, PC; "Server:"
//   0023F8CA  BL      Curl_raw_nequal
//   0023F8CE  STR     R0, [SP,#arg_10]
//   0023F8D0  CMP     R0, #0
//   0023F8D2  BEQ     loc_23F912
//   0023F8D4  LDR     R0, [R4]; char *
//   0023F8D6  BL      Curl_copy_header_value
//   0023F8DA  MOVS    R2, #0x458
//   0023F8DE  LDR     R3, [R6,R2]
//   0023F8E0  MOVS    R4, R0
//   0023F8E2  CMP     R3, #0
//   0023F8E4  BEQ     loc_23F900
//   0023F8E6  LDRB    R3, [R3]
//   0023F8E8  CMP     R3, #0
//   0023F8EA  BEQ     loc_23F900
//   0023F8EC  MOVS    R0, R7
//   0023F8EE  MOVS    R1, R4
//   0023F8F0  BL      Curl_pipeline_server_blacklisted
//   0023F8F4  CMP     R0, #0
//   0023F8F6  BEQ     loc_23F900
//   0023F8F8  MOVS    R0, #0x458
//   0023F8FC  LDR     R3, [R6,R0]
//   0023F8FE  STRB    R5, [R3]
//   0023F900  CMP     R4, #0
//   0023F902  BNE     loc_23F906
//   0023F904  B       loc_23FE46
//   0023F906  LDR     R3, =0xFFFFF268
//   0023F908  LDR     R5, [SP,#arg_18]
//   0023F90A  MOVS    R0, R4
//   0023F90C  LDR     R3, [R5,R3]
//   0023F90E  LDR     R3, [R3]
//   0023F910  B       loc_23FE06
//   0023F912  MOVS    R3, R6
//   0023F914  ADDS    R3, #0xFC
//   0023F916  LDR     R3, [R3,#0x2C]
//   0023F918  CMP     R3, #0xA
//   0023F91A  BNE     loc_23F948
//   0023F91C  MOVS    R3, #0x1BB
//   0023F920  LDRB    R3, [R6,R3]
//   0023F922  CMP     R3, #0
//   0023F924  BEQ     loc_23F948
//   0023F926  LDR     R1, =(aProxyConnectio - 0x23F930); "Proxy-Connection:"
//   0023F928  LDR     R2, =(aKeepAlive - 0x23F932); "keep-alive"
//   0023F92A  LDR     R0, [R4]; int
//   0023F92C  ADD     R1, PC; "Proxy-Connection:"
//   0023F92E  ADD     R2, PC; "keep-alive"
//   0023F930  BL      Curl_compareheader
//   0023F934  CMP     R0, #0
//   0023F936  BEQ     loc_23F948
//   0023F938  LDR     R4, [SP,#arg_10]
//   0023F93A  LDR     R1, =(aHttp10ProxyCon - 0x23F948); "HTTP/1.0 proxy connection set to keep a"...
//   0023F93C  MOVS    R3, #0x1B8
//   0023F940  STRB    R4, [R6,R3]
//   0023F942  MOVS    R0, R7
//   0023F944  ADD     R1, PC; "HTTP/1.0 proxy connection set to keep a"...
//   0023F946  B       loc_23F980
//   0023F948  MOVS    R3, R6
//   0023F94A  ADDS    R3, #0xFC
//   0023F94C  LDR     R3, [R3,#0x2C]
//   0023F94E  CMP     R3, #0xB
//   0023F950  BNE     loc_23F9EC
//   0023F952  MOVS    R3, #0x1BB
//   0023F956  LDRB    R3, [R6,R3]
//   0023F958  CMP     R3, #0
//   0023F95A  BEQ     loc_23F9EC
//   0023F95C  LDR     R1, =(aProxyConnectio - 0x23F96A); "Proxy-Connection:"
//   0023F95E  LDR     R2, =(aClose_1 - 0x23F96C); "close"
//   0023F960  MOVS    R3, R7
//   0023F962  ADDS    R3, #0xB8
//   0023F964  LDR     R0, [R3]; int
//   0023F966  ADD     R1, PC; "Proxy-Connection:"
//   0023F968  ADD     R2, PC; "close"
//   0023F96A  BL      Curl_compareheader
//   0023F96E  CMP     R0, #0
//   0023F970  BEQ     loc_23F9EC
//   0023F972  LDR     R1, =(aHttp11ProxyCon - 0x23F982); "HTTP/1.1 proxy connection set close!\n"
//   0023F974  MOVS    R2, #1
//   0023F976  MOVS    R3, #0xDC
//   0023F978  LSLS    R3, R2
//   0023F97A  STRB    R2, [R6,R3]
//   0023F97C  MOVS    R0, R7
//   0023F97E  ADD     R1, PC; "HTTP/1.1 proxy connection set close!\n"
//   0023F980  BL      Curl_infof
//   0023F984  B       loc_23FE46
//   0023F986  ALIGN 4
//   0023F988  DCD 0x564
//   0023F98C  DCD aHttpDD3d - 0x23F6A8
//   0023F990  DCD aHttp3d - 0x23F6CC
//   0023F994  DCD aRtspDD3d - 0x23F712
//   0023F998  DCD 0x869C
//   0023F99C  DCD 0x86A4
//   0023F9A0  DCD 0x8644
//   0023F9A4  DCD 0x8668
//   0023F9A8  DCD aHttp_0 - 0x23F7A0
//   0023F9AC  DCD aTheRequestedUr - 0x23F7B2
//   0023F9B0  DCD aHttp10AssumeCl - 0x23F7E2
//   0023F9B4  DCD 0x31F
//   0023F9B8  DCD aContentLength_0 - 0x23F81A
//   0023F9BC  DCD aMaximumFileSiz - 0x23F858
//   0023F9C0  DCD aNegativeConten - 0x23F880
//   0023F9C4  DCD aContentType - 0x23F890
//   0023F9C8  DCD 0x86C4
//   0023F9CC  DCD 0xFFFFF268
//   0023F9D0  DCD aServer_0 - 0x23F8CC
//   0023F9D4  DCD aProxyConnectio - 0x23F930
//   0023F9D8  DCD aKeepAlive - 0x23F932
//   0023F9DC  DCD aHttp10ProxyCon - 0x23F948
//   0023F9E0  DCD aProxyConnectio - 0x23F96A

//======================================================================
// sub_23FEA4
// address: 0x0023FEA4   size: 0x20 (32 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0023FEA4  LDR     R4, [SP,#arg_20]
//   0023FEA6  LDRB    R3, [R4]
//   0023FEA8  CMP     R3, #0
//   0023FEAA  BEQ     loc_23FEB0
//   0023FEAC  BL      loc_23F63E
//   0023FEB0  MOVS    R3, R7
//   0023FEB2  ADDS    R3, #0xAC
//   0023FEB4  LDR     R3, [R3]
//   0023FEB6  LDRB    R3, [R3]; int
//   0023FEB8  CMP     R3, #0
//   0023FEBA  BEQ     loc_23FEC0
//   0023FEBC  BL      sub_23F310
//   0023FEC0  BL      loc_23F63E

//======================================================================
// sub_23FEC4
// address: 0x0023FEC4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_23FEC4(int a1)
{
  return sub_23FF8E(a1);
}


//======================================================================
// sub_23FEC8
// address: 0x0023FEC8   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_23FEC8(int a1)
{
  int v1; // r7

  *(_BYTE *)(v1 + 152) = 0;
  return sub_23FF8E(a1);
}


//======================================================================
// sub_23FF8E
// address: 0x0023FF8E   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_23FF8E(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_23FFBC
// address: 0x0023FFBC   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_23FFBC(int a1, unsigned int a2, const void *a3, size_t a4)
{
  int (*v5)(void); // r5
  int v7; // r4

  v5 = *(int (**)(void))(a1 + 456);
  if ( v5 != nullptr )
    return v5();
  if ( a2 <= 2 )
  {
    v7 = a1 + 252;
    j_fwrite(&asc_444AC1[3 * a2], 2u, 1u, *(FILE **)(a1 + 336));
    j_fwrite(a3, a4, 1u, *(FILE **)(v7 + 84));
  }
  return (int)v5;
}

