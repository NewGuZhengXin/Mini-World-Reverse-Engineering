// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_360000

//======================================================================
// sub_360014
// address: 0x00360014   size: 0x2E (46 bytes)
//======================================================================
_QWORD *__fastcall sub_360014(int a1)
{
  signed int v1; // r5
  _QWORD *v2; // r0
  _QWORD *v3; // r4

  v1 = (a1 + 7) & 0xFFFFFFF8;
  v2 = j_malloc(v1 + 8);
  v3 = v2;
  if ( v2 != nullptr )
  {
    *v2 = v1;
    return v2 + 1;
  }
  else
  {
    sqlite3_log(7, (int)"failed to allocate %u bytes of memory", v1);
  }
  return v3;
}


//======================================================================
// sub_360048
// address: 0x00360048   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_360048(__int64 a1, _DWORD *a2)
{
  int v3; // r5
  const char *v4; // r0

  LODWORD(a1) = *a2;
  v3 = sqlite3_value_int(a1, (int)a2);
  v4 = (const char *)sqlite3_value_text(a2[1]);
  return sqlite3_log(v3, (int)"%s", v4);
}


//======================================================================
// sub_36006C
// address: 0x0036006C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_36006C(int a1)
{
  int v1; // r3
  int result; // r0

  v1 = *(_DWORD *)(a1 + 76);
  if ( v1 == 1266094736 )
    return 1;
  result = 1;
  if ( v1 != -1607883113 && v1 != -264537850 )
  {
    sqlite3_log(21, (int)"API call with %s database connection pointer", "invalid");
    return 0;
  }
  return result;
}


//======================================================================
// sub_360170
// address: 0x00360170   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_360170(int *a1)
{
  int v1; // r3
  int result; // r0

  if ( a1 != nullptr )
  {
    v1 = *a1;
    result = 0;
    if ( v1 != 0 )
      return result;
    sqlite3_log(21, (int)"API called with finalized prepared statement");
  }
  else
  {
    sqlite3_log(21, (int)"API called with NULL prepared statement");
  }
  return 1;
}


//======================================================================
// sub_36019C
// address: 0x0036019C   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_36019C(int a1)
{
  int result; // r0
  int v3; // r3

  if ( a1 != 0 )
  {
    v3 = *(_DWORD *)(a1 + 76);
    result = 1;
    if ( v3 != -1607883113 )
    {
      result = sub_36006C(a1);
      if ( result != 0 )
      {
        sqlite3_log(21, (int)"API call with %s database connection pointer", "unopened");
        return 0;
      }
    }
  }
  else
  {
    sqlite3_log(21, (int)"API call with %s database connection pointer", "NULL");
    return 0;
  }
  return result;
}


//======================================================================
// sub_3601F0
// address: 0x003601F0   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_3601F0(int a1, int a2, void **a3)
{
  int v4; // r1
  int result; // r0
  _DWORD v7[5]; // [sp+0h] [bp-6Ch] BYREF
  int v8; // [sp+18h] [bp-54h]
  int v9[20]; // [sp+1Ch] [bp-50h] BYREF
  int savedregs[5]; // [sp+6Ch] [bp+0h]

  v7[4] = 70;
  v4 = *(_DWORD *)(a1 + 88);
  LOWORD(v8) = 1;
  sub_35BA28(
    (int)v7,
    1,
    a2,
    a3,
    a1,
    (int)v9,
    (int)v9,
    0,
    70,
    v4,
    v8,
    v9[0],
    v9[1],
    v9[2],
    v9[3],
    v9[4],
    v9[5],
    v9[6],
    v9[7],
    v9[8],
    v9[9],
    v9[10],
    v9[11],
    v9[12],
    v9[13],
    v9[14],
    v9[15],
    v9[16],
    v9[17],
    v9[18],
    v9[19],
    savedregs[0],
    savedregs[1],
    savedregs[2],
    savedregs[3],
    savedregs[4]);
  result = sub_3591A0((int)v7);
  if ( BYTE1(v8) == 1 )
    *(_BYTE *)(a1 + 64) = 1;
  return result;
}


//======================================================================
// sub_36024C
// address: 0x0036024C   size: 0x50 (80 bytes)
//======================================================================
__int64 sub_36024C(__int64 a1, int a2, ...)
{
  int v3; // r5
  int *v4; // r4
  _BYTE *v5; // r0
  _WORD *v6; // r0
  __int64 v8; // [sp+0h] [bp-8h]
  va_list varg_r3; // [sp+1Ch] [bp+14h] BYREF

  va_start(varg_r3, a2);
  v8 = a1;
  v3 = a1;
  *(_DWORD *)(a1 + 52) = HIDWORD(a1);
  v4 = (int *)(a1 + 224);
  if ( a2 != 0 && (*v4 != 0 || (v6 = sub_3518AC(a1), *v4 = (int)v6, v6 != nullptr)) )
  {
    va_copy((va_list)HIDWORD(v8), varg_r3);
    v5 = (_BYTE *)sub_3601F0(v3, a2, (void **)varg_r3);
    sub_35A338(*v4, v5, 1, sub_34CCB0);
  }
  else if ( *v4 != 0 )
  {
    sub_3549D4((_DWORD *)*v4);
  }
  return v8;
}


//======================================================================
// sub_3602A0
// address: 0x003602A0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_3602A0(int a1)
{
  int v2; // r4
  int v3; // r6
  int *v4; // r7
  __int64 v5; // r0
  char v7; // [sp+4h] [bp-8h]

  v2 = *(_DWORD *)a1;
  v3 = *(_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 44) != 0 )
  {
    v4 = (int *)(v2 + 224);
    v7 = *(_BYTE *)(v2 + 64);
    sub_34CB1C();
    if ( *(_DWORD *)(v2 + 224) == 0 )
      *v4 = (int)sub_3518AC(v2);
    sub_35A338(*v4, *(_BYTE **)(a1 + 44), 1, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
    sub_34CB30();
    *(_BYTE *)(v2 + 64) = v7;
    *(_DWORD *)(v2 + 52) = v3;
  }
  else
  {
    LODWORD(v5) = *(_DWORD *)a1;
    HIDWORD(v5) = v3;
    sub_36024C(v5, 0);
  }
  return v3;
}


//======================================================================
// sub_3602F4
// address: 0x003602F4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_3602F4(__int64 a1)
{
  int v1; // r4
  _BYTE *v2; // r5

  v1 = a1;
  if ( (_DWORD)a1 != 0 )
  {
    v2 = (_BYTE *)(a1 + 64);
    if ( *(_BYTE *)(a1 + 64) != 0 || HIDWORD(a1) == 3082 )
    {
      HIDWORD(a1) = 7;
      sub_36024C(a1, 0);
      *v2 = 0;
      HIDWORD(a1) = 7;
    }
    LODWORD(a1) = *(_DWORD *)(v1 + 56);
  }
  else
  {
    LODWORD(a1) = 255;
  }
  return a1 & HIDWORD(a1);
}


//======================================================================
// sub_36032C
// address: 0x0036032C   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_36032C(int *result)
{
  int *v1; // r4
  __int64 v2; // r0
  int v3; // r0
  int v4; // r3

  v1 = result;
  if ( result != nullptr )
  {
    LODWORD(v2) = *result;
    HIDWORD(v2) = v1[20];
    v3 = sub_3602F4(v2);
    v4 = *v1;
    v1[20] = v3;
    return (int *)sqlite3_mutex_leave(*(_DWORD *)(v4 + 12));
  }
  return result;
}


//======================================================================
// sub_360348
// address: 0x00360348   size: 0xAA (170 bytes)
//======================================================================
int __fastcall sub_360348(int a1, void *a2, int a3, int a4, void (__fastcall *a5)(int))
{
  unsigned int v6; // r6
  __int64 v7; // r0
  int v8; // r0
  int *v9; // r5
  unsigned __int8 *v10; // r7
  int *v11; // r1
  int v12; // r5

  sqlite3_mutex_enter(*(_DWORD *)(a1 + 12));
  v6 = sub_34CF50((unsigned int)a2);
  if ( sub_34DA7E((_DWORD *)(a1 + 300), (unsigned __int8 *)a2, v6) != nullptr )
  {
    HIDWORD(v7) = sub_35EB98(107875);
  }
  else
  {
    v8 = sub_3516AC(a1, v6 + 17);
    v9 = (int *)v8;
    if ( v8 != 0
      && (v10 = (unsigned __int8 *)(v8 + 16),
          j_memcpy((void *)(v8 + 16), a2, v6 + 1),
          v9[1] = (int)v10,
          *v9 = a3,
          v9[2] = a4,
          v9[3] = (int)a5,
          (v11 = sub_35271C((unsigned int *)(a1 + 300), v10, v6, v9)) != nullptr) )
    {
      *(_BYTE *)(a1 + 64) = 1;
      sub_354940((_DWORD *)a1, v11);
      HIDWORD(v7) = 0;
    }
    else
    {
      HIDWORD(v7) = 0;
    }
  }
  LODWORD(v7) = a1;
  v12 = sub_3602F4(v7);
  if ( v12 != 0 && a5 != nullptr )
    a5(a4);
  sqlite3_mutex_leave(*(_DWORD *)(a1 + 12));
  return v12;
}


//======================================================================
// sub_360410
// address: 0x00360410   size: 0x15E (350 bytes)
//======================================================================
int __fastcall sub_360410(
        _DWORD *a1,
        unsigned __int8 *a2,
        int a3,
        __int16 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        _DWORD *a9)
{
  int result; // r0
  int v13; // r5
  char *v14; // r0
  __int64 v15; // r0
  char *v16; // r5
  __int16 v17; // r2
  signed int v19; // [sp+20h] [bp-Ch]
  int v20; // [sp+24h] [bp-8h]

  if ( a2 == nullptr )
    return sub_35EB98(121413);
  if ( a6 != 0 )
  {
    if ( a8 != 0 )
      return sub_35EB98(121413);
  }
  else if ( a8 != 0 )
  {
    if ( a7 == 0 )
      return sub_35EB98(121413);
LABEL_8:
    if ( (unsigned int)(a3 + 1) > 0x80 )
      return sub_35EB98(121413);
    v19 = sub_34CF50((unsigned int)a2);
    if ( v19 > 255 )
      return sub_35EB98(121413);
    v20 = a4 & 0x800;
    v13 = a4 & 7;
    if ( v13 == 4 )
    {
      v13 = 2;
    }
    else if ( v13 == 5 )
    {
      result = sub_360410(a1, a2, a3, v20 | 1, a5, a6, a7, a8, a9);
      if ( result != 0 )
        return result;
      result = sub_360410(a1, a2, a3, v20 | 2, a5, a6, a7, a8, a9);
      if ( result != 0 )
        return result;
      v13 = 3;
    }
    v14 = sub_3534B0((int)a1, a2, v19, a3, v13, 0);
    if ( v14 != nullptr && (*((_WORD *)v14 + 1) & 3) == v13 && *(__int16 *)v14 == a3 )
    {
      LODWORD(v15) = a1;
      if ( a1[35] != 0 )
      {
        HIDWORD(v15) = 5;
        sub_36024C(v15, (int)"unable to delete/modify user-function due to active statements");
        return 5;
      }
      sub_34E530((int)a1);
    }
    v16 = sub_3534B0((int)a1, a2, v19, a3, v13, 1);
    result = 7;
    if ( v16 != nullptr )
    {
      sub_354F36(a1, *((_DWORD *)v16 + 8));
      if ( a9 != nullptr )
        ++*a9;
      v17 = *((_WORD *)v16 + 1);
      *((_DWORD *)v16 + 8) = a9;
      *(_WORD *)v16 = a3;
      *((_WORD *)v16 + 1) = v17 & 3 | v20;
      *((_DWORD *)v16 + 4) = a7;
      *((_DWORD *)v16 + 3) = a6;
      *((_DWORD *)v16 + 1) = a5;
      *((_DWORD *)v16 + 5) = a8;
      return 0;
    }
    return result;
  }
  if ( a7 == 0 )
    goto LABEL_8;
  return sub_35EB98(121413);
}


//======================================================================
// sub_3606FC
// address: 0x003606FC   size: 0x58 (88 bytes)
//======================================================================
void *__fastcall sub_3606FC(int *a1, int a2)
{
  int v4; // r3
  __int64 v6; // r0

  if ( a1 != nullptr )
  {
    v4 = *a1;
    if ( a1[5] != 0 && a2 < *((unsigned __int16 *)a1 + 42) && a2 >= 0 )
    {
      sqlite3_mutex_enter(*(_DWORD *)(v4 + 12));
      return (void *)(a1[5] + 40 * a2);
    }
    if ( v4 != 0 )
    {
      sqlite3_mutex_enter(*(_DWORD *)(v4 + 12));
      LODWORD(v6) = *a1;
      HIDWORD(v6) = 25;
      sub_36024C(v6, 0);
    }
  }
  return &unk_4547C8;
}


//======================================================================
// sub_36086C
// address: 0x0036086C   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall sub_36086C(int *a1, int a2)
{
  int v4; // r5
  int v5; // r0
  __int64 v6; // r0
  __int64 v7; // r0
  int v8; // r6
  int v9; // r7
  _DWORD *v10; // r3

  v4 = sub_360170(a1);
  if ( v4 != 0 )
  {
    v5 = 66382;
    return sub_35EB98(v5);
  }
  sqlite3_mutex_enter(*(_DWORD *)(*a1 + 12));
  if ( a1[10] != -1108210269 || a1[19] >= 0 )
  {
    LODWORD(v6) = *a1;
    HIDWORD(v6) = 21;
    sub_36024C(v6, 0);
    sqlite3_mutex_leave(*(_DWORD *)(*a1 + 12));
    sqlite3_log(21, (int)"bind on a busy prepared statement: [%s]", (const char *)a1[42]);
    v5 = 66390;
    return sub_35EB98(v5);
  }
  if ( a2 > 0 && a2 <= *((__int16 *)a1 + 34) )
  {
    v8 = a2 - 1;
    v9 = a1[15] + 40 * v8;
    sub_355700((_DWORD *)v9);
    *(_WORD *)(v9 + 28) = 1;
    sub_36024C((unsigned int)*a1, 0);
    if ( (*((_BYTE *)a1 + 89) & 4) != 0 )
    {
      if ( (v10 = a1 + 47, v8 <= 31) && (*v10 & (1 << v8)) != 0 || *v10 == -1 )
        *((_BYTE *)a1 + 88) |= 0x20u;
    }
  }
  else
  {
    LODWORD(v7) = *a1;
    HIDWORD(v7) = 25;
    sub_36024C(v7, 0);
    v4 = 25;
    sqlite3_mutex_leave(*(_DWORD *)(*a1 + 12));
  }
  return v4;
}


//======================================================================
// sub_360A30
// address: 0x00360A30   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_360A30(int *a1, int a2, _BYTE *a3, int a4, void (__fastcall *a5)(_BYTE *), unsigned __int8 a6)
{
  int v9; // r5
  int v10; // r5
  int v11; // r6
  __int64 v12; // r0
  __int64 v13; // r0

  v9 = sub_36086C(a1, a2);
  if ( v9 != 0 )
  {
    if ( (unsigned int)a5 - 1 <= 0xFFFFFFFD )
      a5(a3);
  }
  else
  {
    if ( a3 != nullptr )
    {
      v10 = a1[15] + 40 * a2 - 40;
      v11 = sub_359B84(v10, a3, a4, a6, (int (__fastcall *)(_DWORD))a5);
      if ( v11 == 0 && a6 != 0 )
        v11 = sub_359790(v10, *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*a1 + 16) + 12) + 77));
      LODWORD(v12) = *a1;
      HIDWORD(v12) = v11;
      sub_36024C(v12, 0);
      LODWORD(v13) = *a1;
      HIDWORD(v13) = v11;
      v9 = sub_3602F4(v13);
    }
    sqlite3_mutex_leave(*(_DWORD *)(*a1 + 12));
  }
  return v9;
}


//======================================================================
// sub_360BD8
// address: 0x00360BD8   size: 0x156 (342 bytes)
//======================================================================
int __fastcall sub_360BD8(_DWORD *a1, unsigned __int8 *a2, int a3, int *a4, int *a5, int *a6)
{
  int result; // r0
  int **v8; // r3
  __int64 v9; // r0
  int v10; // r5
  int v11; // r0
  _DWORD *j; // r7
  int k; // r6
  _DWORD *v14; // r0
  int v15; // r6
  int **v16; // r5
  int *v17; // r3
  int i; // [sp+Ch] [bp-20h]
  int v20; // [sp+14h] [bp-18h]
  int **v21; // [sp+18h] [bp-14h]
  unsigned int v23; // [sp+20h] [bp-Ch]

  v23 = sub_34CF50((unsigned int)a2);
  v20 = a3;
  if ( a3 == 4 || a3 == 8 )
  {
    v20 = 2;
  }
  else if ( (unsigned int)(a3 - 1) > 2 )
  {
    return sub_35EB98(122053);
  }
  v21 = sub_355EDA((int)a1, (unsigned __int8)v20, a2, 0);
  if ( v21 != nullptr && v21[3] != nullptr )
  {
    LODWORD(v9) = a1;
    if ( a1[35] != 0 )
    {
      HIDWORD(v9) = 5;
      sub_36024C(v9, (int)"unable to delete/modify collation sequence due to active statements");
      return 5;
    }
    sub_34E530((int)a1);
    v10 = a1[4];
    for ( i = 0; i < a1[5]; ++i )
    {
      v11 = *(_DWORD *)(v10 + 4);
      if ( v11 != 0 )
      {
        sub_3574C2(v11);
        for ( j = *(_DWORD **)(*(_DWORD *)(v10 + 12) + 16); j != nullptr; j = (_DWORD *)*j )
        {
          for ( k = *(_DWORD *)(j[2] + 8); k != 0; k = *(_DWORD *)(k + 20) )
          {
            v14 = *(_DWORD **)(k + 40);
            if ( v14 != nullptr && (_DWORD *)v14[3] == a1 )
            {
              sub_354E0C(v14);
              *(_DWORD *)(k + 40) = 0;
            }
          }
        }
        sub_35655E(*(_DWORD *)(v10 + 4));
      }
      v10 += 16;
    }
    if ( ((_BYTE)v21[1] & 0xF7) == v20 )
    {
      v15 = 0;
      v16 = sub_34DA7E(a1 + 105, a2, v23);
      do
      {
        if ( *((unsigned __int8 *)v16 + 4) == *((unsigned __int8 *)v21 + 4) )
        {
          v17 = v16[4];
          if ( v17 != nullptr )
            ((void (__fastcall *)(int *))v17)(v16[2]);
          v16[3] = nullptr;
        }
        ++v15;
        v16 += 5;
      }
      while ( v15 != 3 );
    }
  }
  v8 = sub_355EDA((int)a1, (unsigned __int8)v20, a2, 1);
  result = 7;
  if ( v8 != nullptr )
  {
    v8[3] = a5;
    v8[2] = a4;
    v8[4] = a6;
    *((_BYTE *)v8 + 4) = a3 & 8 | v20;
    sub_36024C((unsigned int)a1, 0);
    return 0;
  }
  return result;
}


//======================================================================
// sub_360E94
// address: 0x00360E94   size: 0x48 (72 bytes)
//======================================================================
unsigned __int64 sub_360E94(int *a1, int a2, ...)
{
  int v2; // r5
  _DWORD *v4; // r6
  _DWORD *v5; // r1
  unsigned __int64 v7; // [sp+0h] [bp-Ch]
  va_list varg_r2; // [sp+20h] [bp+14h] BYREF

  va_start(varg_r2, a2);
  v7 = __PAIR64__((void **)varg_r2, (unsigned int)a1);
  v2 = *a1;
  v4 = (_DWORD *)sub_3601F0(*a1, a2, (void **)varg_r2);
  if ( *(_BYTE *)(v2 + 67) != 0 )
  {
    sub_354940((_DWORD *)v2, v4);
  }
  else
  {
    v5 = (_DWORD *)a1[1];
    ++a1[17];
    sub_354940((_DWORD *)v2, v5);
    a1[1] = (int)v4;
    a1[3] = 1;
  }
  return v7;
}


//======================================================================
// sub_360EDC
// address: 0x00360EDC   size: 0x28 (40 bytes)
//======================================================================
unsigned __int64 __fastcall sub_360EDC(int *a1)
{
  int *v1; // r5
  unsigned __int64 result; // r0

  v1 = (int *)a1[2];
  --*a1;
  while ( *a1 >= 0 )
    sub_35554C((int)a1);
  result = sub_360E94(v1, (int)"parser stack overflow");
  a1[2] = (int)v1;
  return result;
}


//======================================================================
// sub_360F08
// address: 0x00360F08   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_360F08(int a1)
{
  int v2; // r0
  int result; // r0
  int v4; // r0
  int (__fastcall *v5)(_DWORD); // r5
  int v6; // r0
  int v7; // r5

  v2 = *(_DWORD *)a1;
  if ( *(_BYTE *)(v2 + 137) == 0 && *(_BYTE *)(a1 + 455) == 0 )
  {
    v4 = v2 + 252;
    v5 = *(int (__fastcall **)(_DWORD))(v4 + 24);
    if ( v5 != nullptr )
    {
      v6 = v5(*(_DWORD *)(v4 + 28));
      v7 = v6;
      if ( v6 == 1 )
      {
        sub_360E94((int *)a1, (int)"not authorized");
        *(_DWORD *)(a1 + 12) = 23;
        return 1;
      }
      if ( v6 != 0 )
      {
        result = 2;
        if ( v7 != 2 )
        {
          sub_360E94((int *)a1, (int)"authorizer malfunction");
          *(_DWORD *)(a1 + 12) = 1;
          return 1;
        }
        return result;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_360F78
// address: 0x00360F78   size: 0x5C (92 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_360F78(int *a1, int a2, int a3)
{
  unsigned __int8 *result; // r0
  unsigned __int8 *v6; // r4
  int *v7; // r7

  result = sub_351C1C(*a1, a3);
  v6 = result;
  if ( result != nullptr )
  {
    v7 = sub_35A956((int)a1);
    if ( v7 == nullptr || sub_360F08((int)a1) != 0 )
      return (unsigned __int8 *)sub_354940((_DWORD *)*a1, v6);
    else
      return (unsigned __int8 *)sub_35A9FC(v7, 2, a2, 0, 0, v6, -1);
  }
  return result;
}


//======================================================================
// sub_360FD8
// address: 0x00360FD8   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_360FD8(int *a1, int a2, int a3, int *a4)
{
  int v6; // r5
  unsigned __int8 *v7; // r7
  int result; // r0
  int v9; // [sp+4h] [bp-8h]

  v6 = *a1;
  if ( a3 != 0 && *(_DWORD *)(a3 + 4) != 0 )
  {
    if ( *(_BYTE *)(v6 + 137) != 0 )
    {
      sub_360E94(a1, (int)"corrupt database");
    }
    else
    {
      *a4 = a3;
      v7 = sub_351C1C(v6, a2);
      v9 = sub_34EBAE(v6, v7);
      sub_354940((_DWORD *)v6, v7);
      result = v9;
      if ( v9 >= 0 )
        return result;
      sub_360E94(a1, (int)"unknown database %T", a2);
    }
    ++a1[17];
    return -1;
  }
  else
  {
    result = *(unsigned __int8 *)(v6 + 136);
    *a4 = a2;
  }
  return result;
}


//======================================================================
// sub_36104C
// address: 0x0036104C   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_36104C(unsigned __int8 *a1, char *a2)
{
  int v2; // r4

  v2 = 0;
  if ( *(_BYTE *)(*(_DWORD *)a1 + 137) == 0 && a1[18] == 0 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)a1 + 24) & 0x800;
    if ( v2 != 0 )
    {
      return a1[18];
    }
    else if ( sqlite3_strnicmp(a2, "sqlite_", 7) == 0 )
    {
      sub_360E94((int *)a1, (int)"object name reserved for internal use: %s", a2);
      return 1;
    }
  }
  return v2;
}


//======================================================================
// sub_3610A0
// address: 0x003610A0   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_3610A0(int a1, _DWORD *a2)
{
  int result; // r0
  char *v5; // r5
  int i; // r4

  result = a2[4];
  if ( result != 0 )
  {
    v5 = (char *)a2[16];
    if ( v5 != nullptr )
    {
      for ( i = *(_DWORD *)(result + 8); ; i = *(_DWORD *)(i + 20) )
      {
        if ( i == 0 )
        {
          sub_360E94((int *)a1, (int)"no such index: %s", v5);
          *(_BYTE *)(a1 + 17) = 1;
          return 1;
        }
        result = sqlite3_stricmp(*(_BYTE **)i, (unsigned __int8 *)v5);
        if ( result == 0 )
          break;
      }
      a2[17] = i;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


//======================================================================
// sub_3610E8
// address: 0x003610E8   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3610E8(int *a1, int a2)
{
  int v2; // r2
  int v3; // r3

  v2 = *(_DWORD *)(*a1 + 100);
  v3 = 0;
  if ( a2 > v2 )
  {
    sub_360E94(a1, (int)"Expression tree is too large (maximum depth %d)", v2);
    return 1;
  }
  return v3;
}


//======================================================================
// sub_361108
// address: 0x00361108   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_361108(int a1, _DWORD *a2)
{
  int *v4; // r6
  int v5; // r1
  int result; // r0
  int *v7; // r1
  char v8; // [sp+4h] [bp-20h]
  int (*v9[7])(void); // [sp+8h] [bp-1Ch] BYREF

  if ( a2 == nullptr )
    return 0;
  v4 = *(int **)a1;
  v5 = sub_3610E8(*(int **)a1, a2[6] + *(_DWORD *)(*(_DWORD *)a1 + 464));
  result = 1;
  if ( v5 == 0 )
  {
    v4[116] += a2[6];
    v8 = *(_BYTE *)(a1 + 28);
    *(_BYTE *)(a1 + 28) = v8 & 0xFD;
    j_memset(v9, 0, 0x18u);
    v7 = *(int **)a1;
    v9[0] = sub_364FD8;
    v9[3] = (int (*)(void))v7;
    v9[1] = sub_364B80;
    v9[5] = (int (*)(void))a1;
    sub_352FCC(v9, a2);
    *(_DWORD *)(*(_DWORD *)a1 + 464) -= a2[6];
    if ( *(int *)(a1 + 24) > 0 || *((int *)v9[3] + 17) > 0 )
      a2[1] |= 8u;
    if ( (*(_BYTE *)(a1 + 28) & 2) != 0 )
    {
      a2[1] |= 2u;
    }
    else if ( (v8 & 2) != 0 )
    {
      *(_BYTE *)(a1 + 28) |= 2u;
    }
    return a2[1] << 28 >> 31;
  }
  return result;
}


//======================================================================
// sub_3611B4
// address: 0x003611B4   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_3611B4(int a1, int *a2, char a3, _DWORD *a4, _DWORD *a5)
{
  int v6; // r2
  int result; // r0
  int v8; // r5
  _DWORD v12[8]; // [sp+10h] [bp-74h] BYREF
  _DWORD v13[21]; // [sp+30h] [bp-54h] BYREF

  j_memset(v12, 0, sizeof(v12));
  j_memset(v13, 0, 0x50u);
  v6 = *a2;
  v13[0] = 1;
  v13[4] = v6;
  v13[12] = -1;
  v13[6] = a2;
  v12[0] = a1;
  v12[1] = v13;
  LOBYTE(v12[7]) = a3;
  result = sub_361108((int)v12, a4);
  if ( result == 0 )
  {
    v8 = 0;
    if ( a5 != nullptr )
    {
      while ( v8 < *a5 )
      {
        result = sub_361108((int)v12, *(_DWORD **)(20 * v8 + a5[2]));
        if ( result != 0 )
          break;
        ++v8;
      }
    }
  }
  return result;
}


//======================================================================
// sub_361224
// address: 0x00361224   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_361224(int a1, _DWORD *a2)
{
  if ( a2 == nullptr )
    return 0;
  if ( *(_BYTE *)a2 != 27 )
    return sub_361108(a1, a2);
  *(_BYTE *)a2 = 97;
  return 0;
}


//======================================================================
// sub_361242
// address: 0x00361242   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_361242(__int64 a1, int a2)
{
  __int64 v2; // kr00_8

  v2 = a1;
  LODWORD(a1) = HIDWORD(a1);
  sub_34E942(a1, a2);
  return sub_3610E8((int *)v2, *(_DWORD *)(HIDWORD(v2) + 24));
}


//======================================================================
// sub_361258
// address: 0x00361258   size: 0x2E (46 bytes)
//======================================================================
_WORD *__fastcall sub_361258(int *a1, _DWORD *a2, unsigned __int8 **a3)
{
  _DWORD *v3; // r7
  _WORD *v6; // r0
  int v7; // r2
  _WORD *v8; // r4

  v3 = (_DWORD *)*a1;
  v6 = sub_351A12(*a1, 153, a3, 1);
  v8 = v6;
  if ( v6 != nullptr )
  {
    *((_DWORD *)v6 + 5) = a2;
    sub_361242(__SPAIR64__((unsigned int)v6, (unsigned int)a1), v7);
  }
  else
  {
    sub_3551E8(v3, a2);
  }
  return v8;
}


//======================================================================
// sub_361286
// address: 0x00361286   size: 0x48 (72 bytes)
//======================================================================
_WORD *__fastcall sub_361286(int *a1, int a2, _DWORD *a3, _DWORD *a4, unsigned __int8 **a5)
{
  int v8; // r0
  _WORD *v9; // r4
  __int64 v10; // r0

  v8 = *a1;
  if ( a2 == 72 && a3 != nullptr && a4 != nullptr )
  {
    v9 = sub_355378(v8, a3, a4);
  }
  else
  {
    v9 = sub_351A12(v8, a2, a5, 1);
    HIDWORD(v10) = v9;
    LODWORD(v10) = *a1;
    sub_3552D8(v10, (int)a3, (int)a4);
  }
  if ( v9 != nullptr )
    sub_3610E8(a1, *((_DWORD *)v9 + 6));
  return v9;
}


//======================================================================
// sub_3612CE
// address: 0x003612CE   size: 0x56 (86 bytes)
//======================================================================
_WORD *__fastcall sub_3612CE(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, _DWORD **a8)
{
  int v8; // r4
  _DWORD *v11; // r6
  _WORD *v12; // r0
  _WORD *result; // r0
  _WORD *v14; // [sp+Ch] [bp-8h]

  v8 = *a1;
  v14 = sub_351AC6(*a1, a2, a3, a4);
  v11 = sub_351AC6(v8, a2, a5, a6);
  v12 = sub_361286(a1, 79, v14, v11, nullptr);
  if ( v12 != nullptr && a7 != 0 )
  {
    *((_DWORD *)v12 + 1) |= 1u;
    v12[18] = v11[7];
  }
  result = sub_355378(v8, *a8, v12);
  *a8 = result;
  return result;
}


//======================================================================
// sub_361324
// address: 0x00361324   size: 0xF6 (246 bytes)
//======================================================================
_DWORD *__fastcall sub_361324(int *a1, _DWORD *a2, int a3, _DWORD *a4, _BYTE *a5, int (*a6)(void))
{
  _DWORD *result; // r0
  _WORD *v10; // r4
  int v11; // r3
  int v12; // r2
  void *v13; // r1
  void *v14; // r0
  int v15; // r1
  _DWORD *v16; // [sp+Ch] [bp-28h]
  int v17; // [sp+10h] [bp-24h]
  _DWORD *v18; // [sp+14h] [bp-20h]
  int (*v19[7])(void); // [sp+18h] [bp-1Ch] BYREF

  v17 = 20 * a3;
  v16 = *(_DWORD **)(*a2 + 20 * a3);
  v18 = (_DWORD *)*a1;
  result = sub_3568BC(*a1, v16, 0);
  v10 = result;
  if ( result == nullptr )
    return result;
  if ( *(unsigned __int8 *)v16 == 154 || *a5 == 71 )
    goto LABEL_10;
  if ( (int)a6 > 0 )
  {
    j_memset(v19, 0, 0x18u);
    v19[0] = (int (*)(void))sub_34E808;
    v19[5] = a6;
    sub_352FCC(v19, v10);
  }
  result = sub_361286(a1, 24, v10, nullptr, nullptr);
  v10 = result;
  if ( result != nullptr )
  {
    result[1] |= 0x1000u;
    v11 = *a2 + v17;
    if ( *(_WORD *)(v11 + 18) == 0 )
    {
      v12 = a1[115] + 1;
      a1[115] = v12;
      *(_WORD *)(v11 + 18) = v12;
    }
    result[7] = *(unsigned __int16 *)(*a2 + v17 + 18);
LABEL_10:
    if ( *(_BYTE *)a4 == 95 )
      v10 = sub_354126(a1, (int)v10, a4[2]);
    a4[1] |= 0x8000u;
    sub_35519A(v18, (int)a4);
    j_memcpy(a4, v10, 0x30u);
    if ( (a4[1] & 0x400) == 0 )
    {
      v13 = (void *)a4[2];
      if ( v13 != nullptr )
      {
        v14 = sub_351BC8((int)v18, v13);
        v15 = a4[1];
        a4[2] = v14;
        a4[1] = v15 | 0x10000;
      }
    }
    return sub_354940(v18, v10);
  }
  return result;
}


//======================================================================
// sub_361420
// address: 0x00361420   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_361420(_DWORD *a1, int *a2, int a3, int a4)
{
  int v7; // [sp+0h] [bp-Ch]

  *a1 = sub_361286(a2, a3, nullptr, nullptr, (unsigned __int8 **)a4);
  a1[1] = *(_DWORD *)a4;
  a1[2] = *(_DWORD *)a4 + *(_DWORD *)(a4 + 4);
  return v7;
}


//======================================================================
// sub_361444
// address: 0x00361444   size: 0x6E (110 bytes)
//======================================================================
_DWORD *__fastcall sub_361444(int *a1, int *a2)
{
  int v2; // r3
  _DWORD *v5; // r4
  int v6; // r6
  _DWORD *v7; // r0
  _DWORD *v8; // r1

  v2 = a1[122];
  v5 = (_DWORD *)*a1;
  if ( v2 != 0 )
  {
    v6 = *(_DWORD *)(v2 + 4) + 24 * *(__int16 *)(v2 + 38) - 24;
    if ( sub_35304C((_DWORD *)*a2, (int (*)(void))((char *)&dword_0 + 2)) != nullptr )
    {
      sub_35519A(v5, *(_DWORD *)(v6 + 4));
      v7 = sub_3568BC((int)v5, (_DWORD *)*a2, 1);
      v8 = *(_DWORD **)(v6 + 8);
      *(_DWORD *)(v6 + 4) = v7;
      sub_354940(v5, v8);
      *(_DWORD *)(v6 + 8) = sub_351BF2((int)v5, (const void *)a2[1], a2[2] - a2[1]);
    }
    else
    {
      sub_360E94(a1, (int)"default value of column [%s] is not constant", *(const char **)v6);
    }
  }
  return sub_35519A(v5, *a2);
}


//======================================================================
// sub_3614B8
// address: 0x003614B8   size: 0x224 (548 bytes)
//======================================================================
_DWORD *__fastcall sub_3614B8(int a1, int *a2, int a3, int *a4, __int16 a5)
{
  int v7; // r4
  int v8; // r3
  size_t v9; // r4
  int v10; // r7
  int v11; // r3
  _DWORD *v12; // r0
  int v13; // r1
  int v14; // r7
  int i; // r5
  unsigned __int8 *v16; // r5
  unsigned int v17; // r0
  int *v18; // r0
  int v19; // r2
  char *v20; // r7
  size_t v21; // r5
  int v23; // [sp+18h] [bp-24h]
  char *v24; // [sp+18h] [bp-24h]
  int v25; // [sp+1Ch] [bp-20h]
  int v27; // [sp+20h] [bp-1Ch]
  int v28; // [sp+24h] [bp-18h]
  int v29; // [sp+28h] [bp-14h]
  int v31; // [sp+30h] [bp-Ch]

  v31 = *(_DWORD *)a1;
  v25 = *(_DWORD *)(a1 + 488);
  if ( v25 == 0 )
    goto LABEL_37;
  v7 = *(unsigned __int8 *)(a1 + 455);
  if ( *(_BYTE *)(a1 + 455) != 0 )
    goto LABEL_37;
  if ( a2 != nullptr )
  {
    if ( a4 != nullptr && *a4 != *a2 )
    {
      sub_360E94(
        (int *)a1,
        (int)"number of columns in foreign key does not match the number of columns in the referenced table");
      goto LABEL_38;
    }
    v28 = *a2;
    goto LABEL_12;
  }
  v8 = *(__int16 *)(v25 + 38) - 1;
  if ( v8 < 0 )
    goto LABEL_37;
  v28 = 1;
  if ( a4 == nullptr || *a4 == 1 )
  {
LABEL_12:
    v9 = *(_DWORD *)(a3 + 4) + 45 + 8 * (v28 - 1);
    if ( a4 != nullptr )
    {
      v10 = 0;
      v23 = *a4;
      while ( v10 < v23 )
      {
        v11 = 20 * v10++;
        v9 += sub_34CF50(*(_DWORD *)(a4[2] + v11 + 4)) + 1;
      }
    }
    v12 = sub_351894(v31, v9);
    v7 = (int)v12;
    if ( v12 != nullptr )
    {
      *v12 = v25;
      v13 = *(_DWORD *)(v25 + 16);
      v12[2] = &v12[2 * v28 + 9];
      v12[1] = v13;
      v24 = (char *)&v12[2 * v28 + 9];
      j_memcpy(v24, *(const void **)a3, *(_DWORD *)(a3 + 4));
      v14 = 0;
      v24[*(_DWORD *)(a3 + 4)] = 0;
      sub_34CF6A((unsigned __int8 *)v24);
      v29 = *(_DWORD *)(a3 + 4);
      *(_DWORD *)(v7 + 20) = v28;
      if ( a2 != nullptr )
      {
        while ( v14 < v28 )
        {
          for ( i = 0; i < *(__int16 *)(v25 + 38); ++i )
          {
            if ( sqlite3_stricmp(
                   *(_BYTE **)(24 * i + *(_DWORD *)(v25 + 4)),
                   *(unsigned __int8 **)(a2[2] + 20 * v14 + 4)) == 0 )
            {
              *(_DWORD *)(v7 + 8 * v14 + 36) = i;
              break;
            }
          }
          if ( i >= *(__int16 *)(v25 + 38) )
          {
            sub_360E94(
              (int *)a1,
              (int)"unknown column \"%s\" in foreign key definition",
              *(const char **)(a2[2] + 20 * v14 + 4));
            goto LABEL_38;
          }
          ++v14;
        }
      }
      else
      {
        *(_DWORD *)(v7 + 36) = *(__int16 *)(v25 + 38) - 1;
      }
      if ( a4 != nullptr )
      {
        v19 = 0;
        v20 = &v24[v29 + 1];
        while ( 1 )
        {
          v27 = v19;
          if ( v19 >= v28 )
            break;
          v21 = sub_34CF50(*(_DWORD *)(a4[2] + 20 * v19 + 4));
          *(_DWORD *)(v7 + 8 * v27 + 40) = v20;
          j_memcpy(v20, *(const void **)(a4[2] + 20 * v27 + 4), v21);
          v20[v21] = 0;
          v20 += v21 + 1;
          v19 = v27 + 1;
        }
      }
      v16 = *(unsigned __int8 **)(v7 + 8);
      *(_BYTE *)(v7 + 24) = 0;
      *(_WORD *)(v7 + 25) = a5;
      v17 = sub_34CF50((unsigned int)v16);
      v18 = sub_35271C((unsigned int *)(*(_DWORD *)(v25 + 68) + 56), v16, v17, (int *)v7);
      if ( v18 == (int *)v7 )
      {
        *(_BYTE *)(v31 + 64) = 1;
        goto LABEL_38;
      }
      if ( v18 != nullptr )
      {
        *(_DWORD *)(v7 + 12) = v18;
        v18[4] = v7;
      }
      *(_DWORD *)(v25 + 16) = v7;
    }
LABEL_37:
    v7 = 0;
    goto LABEL_38;
  }
  sub_360E94(
    (int *)a1,
    (int)"foreign key on %s should reference only one column of table %T",
    *(_DWORD *)(24 * v8 + *(_DWORD *)(v25 + 4)),
    a3);
  v7 = 0;
LABEL_38:
  sub_354940((_DWORD *)v31, (_DWORD *)v7);
  sub_3551E8((_DWORD *)v31, a2);
  return sub_3551E8((_DWORD *)v31, a4);
}


//======================================================================
// sub_3616E8
// address: 0x003616E8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_3616E8(_DWORD ***a1, _DWORD *a2)
{
  _DWORD *v5; // r4
  int i; // r6
  _BYTE *v7; // r0
  unsigned __int8 *v8; // [sp+Ch] [bp-8h]

  if ( a2 != nullptr )
  {
    v5 = a2 + 2;
    v8 = (unsigned __int8 *)a1[3];
    for ( i = 0; i < *a2; ++i )
    {
      if ( a1[2] == nullptr )
      {
        v7 = (_BYTE *)v5[1];
        if ( v7 != nullptr && sqlite3_stricmp(v7, v8) != 0 )
        {
          sub_360E94((int *)*a1, (int)"%s %T cannot reference objects in database %s", a1[4], a1[5], v5[1]);
          return 1;
        }
        sub_354940(**a1, (_DWORD *)v5[1]);
        v5[1] = 0;
        *v5 = a1[1];
      }
      if ( sub_36176C(a1, v5[5]) != 0 || sub_3617E4(a1, v5[11]) != 0 )
        return 1;
      v5 += 18;
    }
  }
  return 0;
}


//======================================================================
// sub_36176C
// address: 0x0036176C   size: 0x76 (118 bytes)
//======================================================================
int __fastcall sub_36176C(_DWORD ***a1, int a2)
{
  while ( a2 != 0 )
  {
    if ( sub_36184C(a1, *(_DWORD *)a2) != 0
      || sub_3616E8(a1, *(_DWORD **)(a2 + 40)) != 0
      || sub_3617E4(a1, *(_DWORD *)(a2 + 44)) != 0
      || sub_36184C(a1, *(_DWORD *)(a2 + 48)) != 0
      || sub_3617E4(a1, *(_DWORD *)(a2 + 52)) != 0
      || sub_36184C(a1, *(_DWORD *)(a2 + 56)) != 0
      || sub_3617E4(a1, *(_DWORD *)(a2 + 68)) != 0
      || sub_3617E4(a1, *(_DWORD *)(a2 + 72)) != 0 )
    {
      return 1;
    }
    a2 = *(_DWORD *)(a2 + 60);
  }
  return 0;
}


//======================================================================
// sub_3617E4
// address: 0x003617E4   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_3617E4(int a1, unsigned __int8 *a2)
{
  int v4; // r3
  int v6; // r1
  int v7; // r0

  while ( 1 )
  {
    if ( a2 == nullptr )
      return 0;
    if ( *a2 == 135 )
      break;
LABEL_6:
    v4 = *((_DWORD *)a2 + 1);
    if ( (v4 & 0x4000) != 0 )
      return 0;
    v6 = *((_DWORD *)a2 + 5);
    if ( (v4 & 0x800) != 0 )
      v7 = sub_36176C((_DWORD ***)a1, v6);
    else
      v7 = sub_36184C(a1, v6);
    if ( v7 != 0 || sub_3617E4(a1, *((_DWORD *)a2 + 4)) != 0 )
      return 1;
    a2 = *((unsigned __int8 **)a2 + 3);
  }
  if ( *(_BYTE *)(**(_DWORD **)a1 + 137) != 0 )
  {
    *a2 = 101;
    goto LABEL_6;
  }
  sub_360E94(*(int **)a1, (int)"%s cannot use variables", *(const char **)(a1 + 16));
  return 1;
}


//======================================================================
// sub_36184C
// address: 0x0036184C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_36184C(int a1, _DWORD *a2)
{
  int v5; // r6
  int i; // r4

  if ( a2 != nullptr )
  {
    v5 = a2[2];
    for ( i = 0; i < *a2; ++i )
    {
      if ( sub_3617E4(a1, *(unsigned __int8 **)(v5 + 20 * i)) != 0 )
        return 1;
    }
  }
  return 0;
}


//======================================================================
// sub_36187C
// address: 0x0036187C   size: 0xBE (190 bytes)
//======================================================================
int __fastcall sub_36187C(int *a1, int a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r4
  int v6; // r6
  int v7; // r7
  int v8; // r2
  char *v9; // r3
  int v11; // [sp+8h] [bp-2Ch]
  _DWORD v16[4]; // [sp+24h] [bp-10h] BYREF

  v4 = 0;
  v16[0] = a2;
  v16[1] = a3;
  v16[2] = a4;
  v5 = 0;
  while ( 2 )
  {
    v6 = v16[v4];
    if ( v6 != 0 )
    {
      v7 = 0;
      while ( 1 )
      {
        v11 = 3 * v7;
        v8 = *(_DWORD *)(v6 + 4);
        if ( v8 == *((unsigned __int8 *)&unk_44B3E4 + 3 * v7 + 1)
          && sqlite3_strnicmp(
               *(_BYTE **)v6,
               (unsigned __int8 *)&aNaturaleftoute[*((unsigned __int8 *)&unk_44B3E4 + v11)],
               v8) == 0 )
        {
          break;
        }
        if ( ++v7 == 7 )
        {
          v5 |= 0x40u;
          goto LABEL_10;
        }
      }
      ++v4;
      v5 |= byte_44B3E6[v11];
      if ( v4 != 3 )
        continue;
    }
    break;
  }
LABEL_10:
  if ( (v5 & 0x21) == 0x21 || (v5 & 0x40) != 0 )
  {
    if ( a4 != 0 )
      v9 = " ";
    else
      v9 = "";
    sub_360E94(a1, (int)"unknown or unsupported join type: %T %T%s%T", a2, a3, v9, a4);
    return 1;
  }
  if ( (v5 & 0x20) != 0 && (v5 & 0x18) != 8 )
  {
    sub_360E94(a1, (int)"RIGHT and FULL OUTER JOINs are not currently supported", v5 << 25);
    return 1;
  }
  return v5;
}


//======================================================================
// sub_361950
// address: 0x00361950   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_361950(int a1, _DWORD *a2, int a3)
{
  char v3; // r7
  int result; // r0

  v3 = *((_BYTE *)a2 + 44);
  if ( (v3 & 0x10) != 0 && *(_DWORD *)(*(_DWORD *)sub_353624(*(_DWORD *)a1, (_DWORD *)a2[15])[1] + 52) == 0
    || (v3 & 1) != 0 && (*(_DWORD *)(*(_DWORD *)a1 + 24) & 0x800) == 0 && *(_BYTE *)(a1 + 18) == 0 )
  {
    sub_360E94((int *)a1, (int)"table %s may not be modified", *a2);
    return 1;
  }
  result = 0;
  if ( a3 == 0 && a2[3] != 0 )
  {
    sub_360E94((int *)a1, (int)"cannot modify %s because it is a view", *a2);
    return 1;
  }
  return result;
}


//======================================================================
// sub_3619B4
// address: 0x003619B4   size: 0x15E (350 bytes)
//======================================================================
int __fastcall sub_3619B4(int *a1, int a2, int a3, _DWORD *a4, int *a5)
{
  int v7; // r3
  int v8; // r0
  int i; // r4
  int k; // r3
  int v11; // r1
  int v12; // r2
  int v13; // r6
  unsigned __int8 *v14; // r1
  int v15; // r6
  _DWORD *v17; // [sp+8h] [bp-24h]
  int v18; // [sp+Ch] [bp-20h]
  unsigned __int8 *v19; // [sp+10h] [bp-1Ch]
  int j; // [sp+18h] [bp-14h]
  unsigned __int8 *v21; // [sp+1Ch] [bp-10h]

  v18 = *(_DWORD *)(a3 + 20);
  v21 = *(unsigned __int8 **)(a3 + 40);
  if ( v18 != 1 )
  {
    if ( a5 != nullptr )
    {
      v8 = sub_3516AC(*a1, 4 * v18);
      v17 = (_DWORD *)v8;
      if ( v8 == 0 )
        return 1;
      *a5 = v8;
LABEL_10:
      for ( i = *(_DWORD *)(a2 + 8); i != 0; i = *(_DWORD *)(i + 20) )
      {
        if ( *(unsigned __int16 *)(i + 50) == v18 && *(_BYTE *)(i + 54) != 0 )
        {
          if ( v21 != nullptr )
          {
            for ( j = 0; j != v18; ++j )
            {
              v13 = 24 * *(__int16 *)(2 * j + *(_DWORD *)(i + 4));
              v14 = *(unsigned __int8 **)(*(_DWORD *)(a2 + 4) + v13 + 16);
              if ( v14 == nullptr )
                v14 = "BINARY";
              if ( sqlite3_stricmp(*(_BYTE **)(*(_DWORD *)(i + 32) + 4 * j), v14) != 0 )
                goto LABEL_34;
              v19 = *(unsigned __int8 **)(*(_DWORD *)(a2 + 4) + v13);
              v15 = 0;
              while ( sqlite3_stricmp(*(_BYTE **)(a3 + 8 * v15 + 40), v19) != 0 )
              {
                if ( ++v15 >= v18 )
                  goto LABEL_28;
              }
              if ( v17 != nullptr )
                v17[j] = *(_DWORD *)(a3 + 8 * (v15 + 4) + 4);
LABEL_28:
              if ( v15 == v18 )
                goto LABEL_34;
            }
            goto LABEL_39;
          }
          if ( (*(_BYTE *)(i + 55) & 3) == 2 )
          {
            if ( v17 != nullptr )
            {
              for ( k = 0; k != v18; ++k )
              {
                v11 = *(_DWORD *)(a3 + 8 * k + 36);
                v12 = k;
                v17[v12] = v11;
              }
            }
LABEL_39:
            *a4 = i;
            return 0;
          }
        }
LABEL_34:
        ;
      }
      if ( *((_BYTE *)a1 + 442) == 0 )
        sub_360E94(a1, (int)"foreign key mismatch - \"%w\" referencing \"%w\"", **(_DWORD **)a3, *(_DWORD *)(a3 + 8));
      sub_354940((_DWORD *)*a1, v17);
      return 1;
    }
LABEL_3:
    v17 = nullptr;
    goto LABEL_10;
  }
  v7 = *(__int16 *)(a2 + 36);
  if ( v7 < 0 || v21 != nullptr && sqlite3_stricmp(*(_BYTE **)(24 * v7 + *(_DWORD *)(a2 + 4)), v21) != 0 )
    goto LABEL_3;
  return 0;
}


//======================================================================
// sub_361B1C
// address: 0x00361B1C   size: 0x8E (142 bytes)
//======================================================================
int __fastcall sub_361B1C(int *a1, unsigned int *a2)
{
  unsigned int v2; // r3
  int v4; // r4
  int i; // r2
  int v6; // r1
  int v7; // r1
  int **j; // r5
  int v9; // r7
  int v10; // r2
  int v11; // r2
  int v14; // [sp+14h] [bp-8h] BYREF

  v2 = a2[4];
  v4 = 0;
  while ( v2 != 0 )
  {
    for ( i = 0; i < *(_DWORD *)(v2 + 20); ++i )
    {
      v6 = *(_DWORD *)(v2 + 8 * i + 36);
      if ( v6 > 31 )
        v7 = -1;
      else
        v7 = 1 << v6;
      v4 |= v7;
    }
    v2 = *(_DWORD *)(v2 + 4);
  }
  for ( j = sub_34F1D0(a2); j != nullptr; j = (int **)j[3] )
  {
    v9 = 0;
    v14 = 0;
    sub_3619B4(a1, (int)a2, (int)j, &v14, nullptr);
    if ( v14 != 0 )
    {
      while ( v9 < *(unsigned __int16 *)((char *)&word_32 + v14) )
      {
        v10 = *(__int16 *)(*(_DWORD *)&byte_4[v14] + 2 * v9);
        if ( v10 > 31 )
          v11 = -1;
        else
          v11 = 1 << v10;
        v4 |= v11;
        ++v9;
      }
    }
  }
  return v4;
}


//======================================================================
// sub_361BAC
// address: 0x00361BAC   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_361BAC(int *result, _DWORD *a2, const char *a3)
{
  if ( a2 != nullptr && *a2 > *(_DWORD *)(*result + 96) )
    return (int *)sub_360E94(result, (int)"too many columns in %s", a3);
  return result;
}


//======================================================================
// sub_361BCC
// address: 0x00361BCC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_361BCC(int *a1, char *a2)
{
  int v4; // r5

  v4 = 0;
  if ( (int)sub_34CF50((unsigned int)a2) > 6 && sqlite3_strnicmp(a2, "sqlite_", 7) == 0 )
  {
    sub_360E94(a1, (int)"table %s may not be altered", a2);
    return 1;
  }
  return v4;
}


//======================================================================
// sub_361C08
// address: 0x00361C08   size: 0x102 (258 bytes)
//======================================================================
int **__fastcall sub_361C08(int *a1, int a2, int **a3, unsigned __int8 *a4)
{
  int **v5; // r6
  int v6; // r4
  _DWORD *v7; // r6
  _WORD *v8; // r6
  int v9; // r3
  int *v10; // r5
  int **v11; // r1
  unsigned __int8 *v13; // [sp+4h] [bp-10h]

  v5 = a3;
  v6 = *a1;
  if ( (a3 != nullptr || (v5 = sub_355EDA(*a1, a2, a4, 0)) != nullptr) && v5[3] != nullptr )
    goto LABEL_14;
  if ( *(_DWORD *)(v6 + 212) != 0 )
  {
    v7 = sub_351BC8(v6, a4);
    if ( v7 == nullptr )
      goto LABEL_13;
    (*(void (__fastcall **)(_DWORD, int, int, _DWORD *))(v6 + 212))(*(_DWORD *)(v6 + 220), v6, a2, v7);
    sub_354940((_DWORD *)v6, v7);
  }
  if ( *(_DWORD *)(v6 + 216) != 0 )
  {
    v8 = sub_3518AC(v6);
    sub_35A338((int)v8, a4, 1, nullptr);
    v9 = sub_35C700((int)v8, 2);
    if ( v9 != 0 )
      (*(void (__fastcall **)(_DWORD, int, _DWORD, int))(v6 + 216))(
        *(_DWORD *)(v6 + 220),
        v6,
        *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v6 + 16) + 12) + 77),
        v9);
    sub_3559EA(v8);
  }
LABEL_13:
  v5 = sub_355EDA(v6, a2, a4, 0);
  if ( v5 == nullptr )
  {
LABEL_19:
    sub_360E94(a1, (int)"no such collation sequence: %s", (const char *)a4);
    return nullptr;
  }
LABEL_14:
  v10 = v5[3];
  if ( v10 == nullptr )
  {
    v13 = (unsigned __int8 *)*v5;
    while ( 1 )
    {
      v11 = sub_355EDA(v6, byte_44B41B[(_DWORD)v10], v13, 0);
      if ( v11[3] != nullptr )
        break;
      v10 = (int *)((char *)v10 + 1);
      if ( v10 == (int *)((char *)&dword_0 + 3) )
        goto LABEL_19;
    }
    j_memcpy(v5, v11, 0x14u);
    v5[4] = nullptr;
  }
  return v5;
}


//======================================================================
// sub_361D18
// address: 0x00361D18   size: 0x40 (64 bytes)
//======================================================================
int **__fastcall sub_361D18(int *a1, unsigned __int8 *a2)
{
  int v3; // r0
  int v5; // r5
  int v6; // r7
  int **v7; // r0
  int **v8; // r2

  v3 = *a1;
  v5 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v3 + 16) + 12) + 77);
  v6 = *(unsigned __int8 *)(v3 + 137);
  v7 = sub_355EDA(v3, v5, a2, v6);
  v8 = v7;
  if ( v6 == 0 && (v7 == nullptr || v7[3] == nullptr) )
    return sub_361C08(a1, v5, v7, a2);
  return v8;
}


//======================================================================
// sub_361D58
// address: 0x00361D58   size: 0xB0 (176 bytes)
//======================================================================
_DWORD *__fastcall sub_361D58(int *a1, int a2)
{
  _DWORD *v4; // r0
  unsigned int v5; // r2
  int v6; // r1
  _DWORD *v7; // r5
  int i; // r6
  int v9; // r0
  int **v10; // r3
  _DWORD *result; // r0
  char *v12; // [sp+4h] [bp-10h]
  int v13; // [sp+8h] [bp-Ch]

  if ( a1[17] != 0 )
    return nullptr;
  v4 = *(_DWORD **)(a2 + 40);
  if ( v4 != nullptr && v4[3] != *a1 )
  {
    sub_354E0C(v4);
    *(_DWORD *)(a2 + 40) = 0;
  }
  if ( *(_DWORD *)(a2 + 40) == 0 )
  {
    v13 = *(unsigned __int16 *)(a2 + 52);
    v5 = (unsigned int)(*(unsigned __int8 *)(a2 + 55) << 28) >> 31;
    v6 = *(unsigned __int16 *)(a2 + 50);
    if ( (*(_BYTE *)(a2 + 55) & 8) != 0 )
      v5 = v13 - v6;
    else
      v6 = *(unsigned __int16 *)(a2 + 52);
    v7 = sub_3518F8(*a1, v6, v5);
    if ( v7 != nullptr )
    {
      for ( i = 0; i < v13; ++i )
      {
        v12 = *(char **)(*(_DWORD *)(a2 + 32) + 4 * i);
        v9 = j_strcmp(v12, "BINARY");
        v10 = nullptr;
        if ( v9 != 0 )
          v10 = sub_361D18(a1, (unsigned __int8 *)v12);
        v7[i + 5] = v10;
        *(_BYTE *)(v7[4] + i) = *(_BYTE *)(*(_DWORD *)(a2 + 28) + i);
      }
      if ( a1[17] != 0 )
        sub_354E0C(v7);
      else
        *(_DWORD *)(a2 + 40) = v7;
    }
  }
  result = *(_DWORD **)(a2 + 40);
  if ( result != nullptr )
    ++*result;
  return result;
}


//======================================================================
// sub_361E0C
// address: 0x00361E0C   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_361E0C(int *a1, int a2)
{
  int *v2; // r4
  _DWORD *v3; // r0

  v2 = (int *)a1[2];
  v3 = sub_361D58(a1, a2);
  return sub_355AEA(v2, -1, v3, -6);
}


//======================================================================
// sub_361E26
// address: 0x00361E26   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall sub_361E26(int *a1, int a2, int a3, int a4, int a5)
{
  int *v8; // r7
  __int64 v9; // r2
  int v11; // r4

  v8 = sub_35A956((int)a1);
  HIDWORD(v9) = a5 == 53;
  LODWORD(v9) = *(_DWORD *)(a4 + 32);
  sub_35A7C8((int)a1, a3, v9, *(_DWORD *)a4);
  if ( (*(_BYTE *)(a4 + 44) & 0x20) == 0 )
    return (_DWORD *)sub_35A98A(v8, a5, a2, *(_DWORD *)(a4 + 32), a3, (_DWORD *)*(__int16 *)(a4 + 38));
  v11 = sub_35344C(*(_DWORD *)(a4 + 8));
  sub_35A902(v8, a5, a2, *(_DWORD *)(v11 + 44), a3);
  return sub_361E0C(a1, v11);
}


//======================================================================
// sub_361E90
// address: 0x00361E90   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall sub_361E90(int *a1, int a2, int a3, int a4, _BYTE *a5, int *a6, _DWORD *a7)
{
  int result; // r0
  __int64 v11; // r2
  int v12; // r6
  int i; // r2
  int v14; // r2
  int v15; // [sp+8h] [bp-14h]
  int v16; // [sp+Ch] [bp-10h]
  _DWORD *v18; // [sp+14h] [bp-8h]

  if ( (*(_BYTE *)(a2 + 44) & 0x10) != 0 )
  {
    *a6 = 0;
    *a7 = 1;
    return 0;
  }
  else
  {
    v16 = sub_34F2A0(*a1, *(_DWORD *)(a2 + 68));
    v18 = sub_35A956((int)a1);
    if ( a4 < 0 )
      a4 = a1[18];
    if ( a6 != nullptr )
      *a6 = a4;
    if ( (*(_BYTE *)(a2 + 44) & 0x20) != 0 || a5 != nullptr && *a5 == 0 )
    {
      HIDWORD(v11) = a3 == 53;
      LODWORD(v11) = *(_DWORD *)(a2 + 32);
      sub_35A7C8((int)a1, v16, v11, *(_DWORD *)a2);
    }
    else
    {
      sub_361E26(a1, a4, v16, a2, a3);
    }
    if ( a7 != nullptr )
      *a7 = a4 + 1;
    v12 = *(_DWORD *)(a2 + 8);
    for ( i = 1; ; i = v15 + 1 )
    {
      v15 = i;
      result = i - 1;
      v14 = i + a4;
      if ( v12 == 0 )
        break;
      if ( (*(_BYTE *)(v12 + 55) & 3) == 2 && (*(_BYTE *)(a2 + 44) & 0x20) != 0 && a6 != nullptr )
        *a6 = v14;
      if ( a5 == nullptr || a5[v15] != 0 )
      {
        sub_35A902(v18, a3, v14, *(_DWORD *)(v12 + 44), v16);
        sub_361E0C(a1, v12);
      }
      v12 = *(_DWORD *)(v12 + 20);
    }
    if ( v14 > a1[18] )
      a1[18] = v14;
  }
  return result;
}


//======================================================================
// sub_361F88
// address: 0x00361F88   size: 0x266 (614 bytes)
//======================================================================
int __fastcall sub_361F88(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7, int a8, int a9)
{
  int v9; // r5
  int *v11; // r4
  int v12; // r0
  int i; // r6
  int v14; // r6
  unsigned int v15; // r7
  int j; // r6
  int v17; // r6
  int v18; // r3
  int v19; // r3
  _DWORD *v20; // r0
  int v22; // [sp+1Ch] [bp-20h]
  int v24; // [sp+20h] [bp-1Ch]
  int v25; // [sp+24h] [bp-18h]
  int v26; // [sp+28h] [bp-14h]
  int v28; // [sp+30h] [bp-Ch]
  int v29; // [sp+34h] [bp-8h]

  v9 = a1;
  v11 = sub_35A956(a1);
  v26 = *(_DWORD *)(v9 + 72) - 1;
  v12 = sub_35A856(v11[6]);
  v25 = v12;
  if ( a8 < 0 )
    sub_35AAF0(v11, 130, *(unsigned __int8 *)(a5 + 24), v12);
  for ( i = 0; ; ++i )
  {
    v22 = *(_DWORD *)(a5 + 20);
    if ( i >= v22 )
      break;
    sub_35AAF0(v11, 76, a7 + a6[i] + 1, v25);
  }
  if ( a9 == 0 )
  {
    if ( a4 != 0 )
    {
      v28 = sub_34EA92((_DWORD *)v9, v22);
      v29 = sub_34EA6E(v9);
      sub_35A902(v11, 52, v26, *(_DWORD *)(a4 + 44), a2);
      sub_361E0C((int *)v9, a4);
      for ( j = 0; j < v22; ++j )
        sub_35AAF0(v11, 33, a6[j] + 1 + a7, j + v28);
      if ( a3 == *(_DWORD *)a5 && a8 == 1 )
      {
        v17 = 0;
        v24 = v22 + v11[8] + 1;
        while ( v17 < v22 )
        {
          v18 = *(__int16 *)(*(_DWORD *)(a4 + 4) + 2 * v17);
          if ( *(__int16 *)(a3 + 36) == v18 )
            v19 = a7;
          else
            v19 = v18 + 1 + a7;
          sub_35A902(v11, 78, a6[v17] + 1 + a7, v24, v19);
          sub_34E458((int)v11, 8);
          ++v17;
        }
        sub_35AAF0(v11, 16, 0, v25);
      }
      v20 = (_DWORD *)sub_3517DE(v11, a4);
      sub_35A9FC(v11, 48, v28, v22, v29, v20, v22);
      sub_35A98A(v11, 66, v26, v25, v29, nullptr);
      sub_353416(v9, v29);
      sub_353306(v9, v28, v22);
    }
    else
    {
      v14 = sub_34EA6E(v9);
      sub_35AAF0(v11, 34, *a6 + 1 + a7, v14);
      v15 = sub_35AAF0(v11, 38, v14, 0);
      if ( a3 == *(_DWORD *)a5 && a8 == 1 )
      {
        sub_35A902(v11, 79, a7, v25, v14);
        sub_34E458((int)v11, 136);
      }
      sub_361E26((int *)v9, v26, a2, a3, 52);
      sub_35A902(v11, 67, v26, 0, v14);
      sub_35AAF0(v11, 16, 0, v25);
      sub_34E46E((int)v11, v11[8] - 2);
      sub_34E46E((int)v11, v15);
      sub_353416(v9, v14);
    }
  }
  if ( *(_BYTE *)(a5 + 24) != 0 )
    goto LABEL_34;
  if ( (*(_DWORD *)(*(_DWORD *)v9 + 24) & 0x1000000) != 0 || *(_DWORD *)(v9 + 412) != 0 || *(_BYTE *)(v9 + 22) != 0 )
  {
    if ( a8 > 0 )
    {
      if ( *(_DWORD *)(v9 + 412) != 0 )
        v9 = *(_DWORD *)(v9 + 412);
      *(_BYTE *)(v9 + 23) = 1;
    }
LABEL_34:
    sub_35AAF0(v11, 129, *(unsigned __int8 *)(a5 + 24), a8);
    goto LABEL_35;
  }
  sub_35AA7C(v9, 787, 2, (_DWORD *)*(unsigned __int8 *)(v9 + 22), -2, 4);
LABEL_35:
  sub_34E412((int)v11, v25);
  return sub_35AACE(v11, 58, v26);
}


//======================================================================
// sub_3621F4
// address: 0x003621F4   size: 0x3DC (988 bytes)
//======================================================================
int *__fastcall sub_3621F4(int *a1, _DWORD **a2, int a3, int a4, int a5, int a6)
{
  int v7; // r3
  int *result; // r0
  int *v9; // r4
  int v10; // r3
  int v11; // r7
  int v12; // r6
  _DWORD *v13; // r3
  int v14; // r3
  int v15; // r6
  int v16; // r0
  int v17; // r6
  unsigned int v18; // r5
  int v19; // [sp+14h] [bp-58h]
  int v20; // [sp+18h] [bp-54h]
  int v22; // [sp+20h] [bp-4Ch]
  int v23; // [sp+24h] [bp-48h]
  int *v24; // [sp+28h] [bp-44h]
  int v26; // [sp+30h] [bp-3Ch]
  unsigned int *v27; // [sp+30h] [bp-3Ch]
  _DWORD *v28; // [sp+34h] [bp-38h]
  int v29; // [sp+38h] [bp-34h]
  int v31; // [sp+40h] [bp-2Ch]
  int v32; // [sp+44h] [bp-28h]
  int v33; // [sp+48h] [bp-24h]
  int v34; // [sp+4Ch] [bp-20h]
  int v35; // [sp+50h] [bp-1Ch]
  int **v36; // [sp+54h] [bp-18h]
  int v37; // [sp+58h] [bp-14h]
  unsigned int v38; // [sp+5Ch] [bp-10h]
  unsigned int v39; // [sp+60h] [bp-Ch]
  int v40; // [sp+64h] [bp-8h]

  v28 = (_DWORD *)*a1;
  v35 = a5 + 7;
  v7 = a5 + 7;
  if ( a5 + 7 < a1[19] )
    v7 = a1[19];
  a1[19] = v7;
  result = sub_35A956((int)a1);
  v9 = result;
  if ( result != nullptr && a2 != nullptr && a2[8] != nullptr )
  {
    result = (int *)sqlite3_strnicmp(*a2, "sqlite_", 7);
    if ( result != nullptr )
    {
      v29 = sub_34F2A0((int)v28, (int)a2[17]);
      result = (int *)sub_360F08((int)a1);
      if ( result == nullptr )
      {
        v32 = a5 + 1;
        v23 = a5 + 2;
        v19 = a5 + 3;
        v33 = a5 + 4;
        v37 = a5 + 5;
        v34 = a5 + 6;
        sub_35A7C8((int)a1, v29, (unsigned int)a2[8], (int)*a2);
        v22 = a6 + 1;
        v10 = a6 + 2;
        if ( a6 + 2 < a1[18] )
          v10 = a1[18];
        a1[18] = v10;
        sub_361E26(a1, a6, v29, (int)a2, 52);
        result = (int *)sub_35A9FC(v9, 97, 0, v33, 0, *a2, 0);
        v11 = (int)a2[2];
        v31 = 1;
        while ( v11 != 0 )
        {
          if ( a3 == 0 || a3 == v11 )
          {
            v12 = *(unsigned __int16 *)(v11 + 50) + 1;
            v31 &= -(*(_DWORD *)(v11 + 36) != 0);
            v20 = *(unsigned __int16 *)(v11 + 50);
            result = (int *)sub_3516AC((int)v28, 4 * v12);
            v24 = result;
            if ( result != nullptr )
            {
              if ( (*(_BYTE *)(v11 + 55) & 3) == 2 && ((_BYTE)a2[11] & 0x20) != 0 )
                v13 = *a2;
              else
                v13 = *(_DWORD **)v11;
              sub_35A9FC(v9, 97, 0, v37, 0, v13, 0);
              v14 = v35 + v20;
              if ( v35 + v20 < a1[19] )
                v14 = a1[19];
              a1[19] = v14;
              sub_35A902(v9, 52, v22, *(_DWORD *)(v11 + 44), v29);
              sub_361E0C(a1, v11);
              sub_35AAF0(v9, 25, v12, v23);
              sub_35A902(v9, 1, 0, v23, v32);
              sub_355AEA(v9, -1, dword_4547FC, -5);
              sub_34E458((int)v9, 1);
              v38 = sub_35AACE(v9, 105, v22);
              sub_35AAF0(v9, 25, 0, v23);
              v39 = sub_35A948(v9, 16);
              v15 = 0;
              v40 = v9[8];
              while ( v15 < v20 )
              {
                v26 = v15;
                v36 = sub_361D18(a1, *(unsigned __int8 **)(*(_DWORD *)(v11 + 32) + 4 * v15));
                sub_35AAF0(v9, 25, v15, v23);
                sub_35A902(v9, 46, v22, v15, v19);
                v16 = sub_35A9FC(v9, 78, v19, 0, a5 + 7 + v15++, v36, -4);
                v24[v26] = v16;
                sub_34E458((int)v9, 128);
              }
              sub_35AAF0(v9, 25, v20, v23);
              v17 = 0;
              v27 = (unsigned int *)&v24[v20];
              *v27 = sub_35A948(v9, 16);
              sub_34E46E((int)v9, v39);
              while ( v17 < v20 )
              {
                sub_34E46E((int)v9, v24[v17]);
                sub_35A902(v9, 46, v22, v17, a5 + 7 + v17);
                ++v17;
              }
              sub_34E46E((int)v9, *v27);
              sub_35A902(v9, 1, 1, v32, v19);
              sub_355AEA(v9, -1, dword_454820, -5);
              sub_34E458((int)v9, 2);
              sub_35AAF0(v9, 9, v22, v40);
              sub_35A902(v9, 1, 0, v32, v34);
              sub_355AEA(v9, -1, dword_454844, -5);
              sub_34E458((int)v9, 1);
              sub_35A9FC(v9, 48, v33, 3, v19, "aaa", 0);
              sub_35AAF0(v9, 69, a4, a5);
              sub_35A902(v9, 70, a4, v19, a5);
              sub_34E458((int)v9, 8);
              sub_34E46E((int)v9, v38);
              result = sub_354940(v28, v24);
            }
          }
          v11 = *(_DWORD *)(v11 + 20);
        }
        if ( a3 == 0 )
        {
          result = (int *)v31;
          if ( v31 != 0 )
          {
            sub_35AAF0(v9, 49, a6, v34);
            v18 = sub_35AACE(v9, 45, v34);
            sub_35AAF0(v9, 28, 0, v37);
            sub_35A9FC(v9, 48, v33, 3, v19, "aaa", 0);
            sub_35AAF0(v9, 69, a4, a5);
            sub_35A902(v9, 70, a4, v19, a5);
            sub_34E458((int)v9, 8);
            return (int *)sub_34E46E((int)v9, v18);
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_3625D4
// address: 0x003625D4   size: 0xBE (190 bytes)
//======================================================================
int **__fastcall sub_3625D4(int *a1, unsigned __int8 *a2)
{
  int v3; // r0
  int v5; // r2
  unsigned __int8 *v6; // r2
  int **v7; // r0
  int v8; // r4
  int v9; // r3
  int v10; // r4

  v3 = *a1;
  while ( 1 )
  {
    if ( a2 == nullptr )
      return nullptr;
    v5 = *a2;
    if ( v5 == 38 || v5 == 158 )
    {
      v6 = *((unsigned __int8 **)a2 + 3);
      goto LABEL_25;
    }
    if ( v5 == 95 || v5 == 159 && a2[38] == 95 )
    {
      v7 = sub_361C08(
             a1,
             *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v3 + 16) + 12) + 77),
             nullptr,
             *((unsigned __int8 **)a2 + 2));
      goto LABEL_19;
    }
    v8 = *((_DWORD *)a2 + 11);
    if ( v8 != 0 && (v5 == 156 || v5 == 154 || v5 == 159 || v5 == 62) )
      break;
    v10 = *((_DWORD *)a2 + 1) & 0x100;
    if ( v10 == 0 )
      return (int **)v10;
    v6 = *((unsigned __int8 **)a2 + 3);
    if ( v6 == nullptr || (*((_DWORD *)v6 + 1) & 0x100) == 0 )
      v6 = *((unsigned __int8 **)a2 + 4);
LABEL_25:
    a2 = v6;
  }
  v9 = *((__int16 *)a2 + 16);
  if ( v9 < 0 )
    return nullptr;
  v7 = sub_355EDA(
         v3,
         *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v3 + 16) + 12) + 77),
         *(unsigned __int8 **)(*(_DWORD *)(v8 + 4) + 24 * v9 + 16),
         0);
LABEL_19:
  v10 = (int)v7;
  if ( v7 != nullptr )
    return sub_361C08(
             a1,
             *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(*a1 + 16) + 12) + 77),
             v7,
             (unsigned __int8 *)*v7) != nullptr
         ? v7
         : nullptr;
  return (int **)v10;
}


//======================================================================
// sub_362692
// address: 0x00362692   size: 0x2C (44 bytes)
//======================================================================
int **__fastcall sub_362692(int *a1, int a2, int a3)
{
  int *v4; // r5
  int **result; // r0

  v4 = a1;
  if ( (*(_DWORD *)(a2 + 4) & 0x100) == 0 )
  {
    if ( a3 == 0 || (*(_DWORD *)(a3 + 4) & 0x100) == 0 )
    {
      result = sub_3625D4(a1, (unsigned __int8 *)a2);
      if ( result != nullptr )
        return result;
      a1 = v4;
    }
    a2 = a3;
  }
  return sub_3625D4(a1, (unsigned __int8 *)a2);
}


//======================================================================
// sub_3626BE
// address: 0x003626BE   size: 0x152 (338 bytes)
//======================================================================
int *__fastcall sub_3626BE(int a1)
{
  unsigned int v2; // r3
  int v3; // r6
  int *v4; // r5
  _DWORD *v5; // r0
  int v6; // r2
  signed int i; // r3
  int v8; // r3
  int v9; // r7
  int **v10; // r0
  int v11; // r3
  char v12; // r3
  unsigned int v14; // [sp+0h] [bp-14h]
  int *v15; // [sp+0h] [bp-14h]
  int v16; // [sp+4h] [bp-10h]
  int v17; // [sp+8h] [bp-Ch]
  int v18; // [sp+Ch] [bp-8h]

  v16 = *(_DWORD *)(a1 + 20);
  while ( 1 )
  {
    v2 = *(unsigned __int8 *)(a1 + 14);
    if ( *(unsigned __int8 *)(a1 + 13) < v2 )
      return nullptr;
    v17 = *(_DWORD *)(4 * (v2 + 4) + a1);
    v18 = *(_DWORD *)(4 * (v2 + 5) + a1);
    while ( 1 )
    {
      v3 = *(_DWORD *)(a1 + 4);
      if ( v3 == 0 )
        break;
      v4 = (int *)(*(_DWORD *)(v3 + 20) + 48 * v16);
      while ( v16 < *(_DWORD *)(v3 + 12) )
      {
        if ( v4[2] == v17 && v4[3] == v18 && (*(unsigned __int8 *)(a1 + 14) <= 2u || (*(_DWORD *)(*v4 + 4) & 1) == 0) )
        {
          if ( (*((_WORD *)v4 + 9) & 0x400) != 0 )
          {
            v14 = *(unsigned __int8 *)(a1 + 13);
            if ( v14 <= 0x15 )
            {
              v5 = sub_34E89C(*(_DWORD **)(*v4 + 16));
              v6 = a1;
              for ( i = 0;
                    i < (int)v14 && (*(_DWORD *)(v6 + 24) != v5[7] || *(_DWORD *)(v6 + 28) != *((__int16 *)v5 + 16));
                    i += 2 )
              {
                v6 += 8;
              }
              if ( i == v14 )
              {
                *(_DWORD *)(4 * (i + 6) + a1) = v5[7];
                *(_DWORD *)(4 * (i + 7) + a1) = *((__int16 *)v5 + 16);
                *(_BYTE *)(a1 + 13) = i + 2;
              }
            }
          }
          v8 = *((unsigned __int16 *)v4 + 9);
          if ( (*(_DWORD *)(a1 + 16) & v8) != 0 )
          {
            if ( *(_DWORD *)(a1 + 8) == 0 || (v8 & 0x80) != 0 )
              goto LABEL_35;
            v9 = *v4;
            v15 = **(int ***)v3;
            if ( sub_34EDE8(*v4, *(unsigned __int8 *)(a1 + 12)) )
            {
              v10 = sub_362692(v15, *(_DWORD *)(v9 + 12), *(_DWORD *)(v9 + 16));
              if ( v10 == nullptr )
                v10 = *(int ***)(*v15 + 8);
              if ( sqlite3_stricmp(*v10, *(unsigned __int8 **)(a1 + 8)) == 0 )
              {
LABEL_35:
                if ( (*((_WORD *)v4 + 9) & 2) == 0
                  || *(unsigned __int8 *)(v11 = *(_DWORD *)(*v4 + 16)) != 154
                  || *(_DWORD *)(v11 + 28) != *(_DWORD *)(a1 + 24)
                  || *(__int16 *)(v11 + 32) != *(_DWORD *)(a1 + 28) )
                {
                  *(_DWORD *)(a1 + 20) = v16 + 1;
                  return v4;
                }
              }
            }
          }
        }
        v4 += 12;
        ++v16;
      }
      v16 = 0;
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4);
    }
    v16 = *(_DWORD *)(a1 + 4);
    v12 = *(_BYTE *)(a1 + 14) + 2;
    *(_DWORD *)(a1 + 4) = *(_DWORD *)a1;
    *(_BYTE *)(a1 + 14) = v12;
  }
}


//======================================================================
// sub_362810
// address: 0x00362810   size: 0x5E (94 bytes)
//======================================================================
int *__fastcall sub_362810(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int i; // r1
  int v7; // r1

  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a2;
  if ( a6 != 0 && a4 >= 0 )
  {
    *(_BYTE *)(a1 + 12) = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a6 + 12) + 4) + 24 * a4 + 21);
    for ( i = 0; ; ++i )
    {
      if ( *(__int16 *)(*(_DWORD *)(a6 + 4) + 2 * i) == a4 )
      {
        v7 = *(_DWORD *)(4 * i + *(_DWORD *)(a6 + 32));
        goto LABEL_9;
      }
      if ( i >= *(unsigned __int16 *)(a6 + 50) )
        break;
    }
    return nullptr;
  }
  else
  {
    v7 = 0;
    *(_BYTE *)(a1 + 12) = 0;
LABEL_9:
    *(_DWORD *)(a1 + 8) = v7;
    *(_DWORD *)(a1 + 28) = a4;
    *(_DWORD *)(a1 + 16) = a5;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 24) = a3;
    *(_BYTE *)(a1 + 13) = 2;
    *(_BYTE *)(a1 + 14) = 2;
    return sub_3626BE(a1);
  }
}


//======================================================================
// sub_36286E
// address: 0x0036286E   size: 0x5A (90 bytes)
//======================================================================
int *__fastcall sub_36286E(int a1, int a2, int a3, int a4, __int64 a5, int a6, int a7)
{
  int *v7; // r0
  int *v8; // r4
  _BYTE v10[116]; // [sp+10h] [bp-74h] BYREF

  v7 = sub_362810((int)v10, a1, a2, a3, a6, a7);
  v8 = nullptr;
  while ( v7 != nullptr )
  {
    if ( (a5 & *((_QWORD *)v7 + 4)) == 0 )
    {
      if ( *((_QWORD *)v7 + 4) == 0 && (*((_WORD *)v7 + 9) & 2) != 0 )
        return v7;
      if ( v8 == nullptr )
        v8 = v7;
    }
    v7 = sub_3626BE((int)v10);
  }
  return v8;
}


//======================================================================
// sub_3628C8
// address: 0x003628C8   size: 0x3D8 (984 bytes)
//======================================================================
int __fastcall sub_3628C8(int *a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r3
  int result; // r0
  int v8; // r5
  unsigned int v9; // r3
  int *v10; // r5
  unsigned __int64 v11; // r0
  int v12; // r2
  int v13; // r3
  _DWORD *v14; // r7
  int v15; // r0
  int v16; // r3
  int v17; // r1
  int v18; // r3
  int v19; // r0
  __int16 v20; // r2
  int v21; // r3
  int v22; // r0
  int v23; // r3
  __int16 v24; // r2
  int v25; // r3
  int v26; // r2
  int *v27; // r7
  int v28; // r0
  int v29; // r2
  int v30; // r1
  int v31; // r0
  __int16 v32; // r3
  int v33; // r2
  int v34; // [sp+18h] [bp-C4h]
  int *v35; // [sp+1Ch] [bp-C0h]
  int v36; // [sp+20h] [bp-BCh]
  int *v37; // [sp+20h] [bp-BCh]
  int v39; // [sp+28h] [bp-B4h]
  int v40; // [sp+2Ch] [bp-B0h]
  int v43; // [sp+38h] [bp-A4h]
  int v44; // [sp+3Ch] [bp-A0h]
  int v45; // [sp+44h] [bp-98h]
  __int16 v46; // [sp+48h] [bp-94h]
  _DWORD *v47; // [sp+4Ch] [bp-90h]
  __int16 v48; // [sp+50h] [bp-8Ch]
  int v49; // [sp+54h] [bp-88h]
  int v50; // [sp+58h] [bp-84h]
  int v51; // [sp+5Ch] [bp-80h]
  int v52; // [sp+60h] [bp-7Ch]
  _BYTE v53[116]; // [sp+68h] [bp-74h] BYREF

  v4 = a1[3];
  v5 = *(_DWORD *)*a1;
  result = 7;
  v47 = *(_DWORD **)v5;
  if ( *(_BYTE *)(*(_DWORD *)v5 + 64) == 0 )
  {
    v8 = 24;
    if ( (*(_DWORD *)(v4 + 36) & 0x20) == 0 )
    {
      if ( *(int *)(a3 + 44) <= 0 || (v8 = 191, (*(_BYTE *)(a2 + 36) & 8) != 0) )
        v8 = 63;
    }
    if ( (*(_BYTE *)(a3 + 55) & 4) != 0 )
      v8 &= 0xC3u;
    v9 = *(unsigned __int16 *)(v4 + 24);
    if ( *(unsigned __int16 *)(a3 + 50) <= v9 )
    {
      LOWORD(v39) = 0;
      v40 = -1;
    }
    else
    {
      v40 = *(__int16 *)(2 * v9 + *(_DWORD *)(a3 + 4));
      v39 = sub_34D98C(*(unsigned int *)(4 * (v9 + 1) + *(_DWORD *)(a3 + 8)));
      if ( v39 == 0 )
        LOWORD(v39) = *(unsigned __int8 *)(a3 + 54) == 0;
    }
    v10 = sub_362810((int)v53, a1[1], *(_DWORD *)(a2 + 40), v40, v8, a3);
    LODWORD(v11) = *(unsigned __int16 *)(v4 + 40);
    v12 = *(unsigned __int16 *)(v4 + 24);
    v13 = *(unsigned __int16 *)(v4 + 26);
    v50 = *(_DWORD *)(v4 + 36);
    *(_WORD *)(v4 + 18) = 0;
    v44 = v11;
    v14 = *(_DWORD **)(a3 + 8);
    v43 = v12;
    v49 = v13;
    v48 = *(_WORD *)(v4 + 22);
    v11 = (unsigned int)v11;
    LODWORD(v11) = *v14;
    v51 = *(_DWORD *)v4;
    v52 = *(_DWORD *)(v4 + 4);
    v15 = sub_34D98C(v11);
    v45 = sub_34F73C(v15);
    v34 = 0;
    if ( v10 == nullptr )
    {
      v34 = 0;
      if ( v43 == v49 )
      {
        v16 = v43 + 1;
        if ( v43 + 1 < *(unsigned __int16 *)(a3 + 50) )
        {
          v36 = 4 * v16;
          if ( v14[v16] > 0x11u )
          {
            v34 = sub_356054(v47, v4, v44 + 1);
            if ( v34 == 0 )
            {
              v17 = *(_DWORD *)(v4 + 44);
              ++*(_WORD *)(v4 + 24);
              ++*(_WORD *)(v4 + 26);
              v18 = *(unsigned __int16 *)(v4 + 40);
              *(_WORD *)(v4 + 40) = v18 + 1;
              *(_DWORD *)(4 * v18 + v17) = 0;
              *(_DWORD *)(v4 + 36) |= 0x8000u;
              v19 = sub_34D98C((unsigned int)(**(_DWORD **)(a3 + 8) / *(_DWORD *)(*(_DWORD *)(a3 + 8) + v36)));
              *(_WORD *)(v4 + 20) = v19 + v45;
              *(_WORD *)(v4 + 22) += v19;
              sub_3628C8(a1, a2, a3, v19);
              *(_WORD *)(v4 + 22) = v48;
            }
          }
        }
      }
    }
    v20 = 10;
    if ( v45 > 27 )
      v20 = v45 - 17;
    v46 = v20;
    v37 = nullptr;
    v35 = nullptr;
    while ( 1 )
    {
      if ( v34 != 0 || v10 == nullptr )
      {
LABEL_67:
        *(_DWORD *)v4 = v51;
        *(_DWORD *)(v4 + 4) = v52;
        *(_WORD *)(v4 + 24) = v43;
        *(_DWORD *)(v4 + 36) = v50;
        *(_WORD *)(v4 + 26) = v49;
        *(_WORD *)(v4 + 22) = v48;
        *(_WORD *)(v4 + 40) = v44;
        return v34;
      }
      if ( (*((_WORD *)v10 + 9) != 128
         || v40 >= 0 && *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 16) + 4) + 24 * v40 + 20) == 0)
        && (*((_QWORD *)v10 + 4) & *(_QWORD *)(v4 + 8)) == 0 )
      {
        break;
      }
LABEL_66:
      v10 = sub_3626BE((int)v53);
    }
    *(_WORD *)(v4 + 24) = v43;
    *(_DWORD *)(v4 + 36) = v50;
    *(_WORD *)(v4 + 40) = v44;
    if ( sub_356054(v47, v4, v44 + 1) != 0 )
      goto LABEL_67;
    v21 = *(unsigned __int16 *)(v4 + 40);
    v22 = *(_DWORD *)(v4 + 44);
    *(_WORD *)(v4 + 40) = v21 + 1;
    *(_DWORD *)(4 * v21 + v22) = v10;
    v23 = v10[9] | v52;
    *(_DWORD *)v4 = (v10[8] | v51) & ~*(_DWORD *)(v4 + 8);
    *(_DWORD *)(v4 + 4) = v23 & ~*(_DWORD *)(v4 + 12);
    *(_WORD *)(v4 + 20) = v45;
    v24 = *((_WORD *)v10 + 9);
    v25 = *(_DWORD *)(v4 + 36);
    if ( (v24 & 1) != 0 )
    {
      v26 = *v10;
      *(_DWORD *)(v4 + 36) = v25 | 4;
      LOWORD(v27) = 46;
      if ( (*(_DWORD *)(v26 + 4) & 0x800) == 0 )
      {
        v27 = *(int **)(v26 + 20);
        if ( v27 != nullptr )
        {
          v28 = *v27;
          v27 = (int *)(*(_DWORD *)(v26 + 4) & 0x800);
          if ( v28 != 0 )
            LOWORD(v27) = sub_34D98C(v28);
        }
      }
      *(_WORD *)(v4 + 20) = (_WORD)v27 + v45;
      ++*(_WORD *)(v4 + 24);
      *(_WORD *)(v4 + 22) = (_WORD)v27 + v39 + a4;
      v10 = v35;
      goto LABEL_50;
    }
    if ( (v24 & 2) == 0 )
    {
      if ( (v24 & 0x80) != 0 )
      {
        *(_DWORD *)(v4 + 36) = v25 | 8;
        v10 = v35;
        ++*(_WORD *)(v4 + 24);
        LOWORD(v27) = 10;
        *(_WORD *)(v4 + 22) = a4 + 10 + v39;
      }
      else
      {
        LOWORD(v27) = *((_WORD *)v10 + 9) & 0x24;
        if ( (v24 & 0x24) != 0 )
        {
          v37 = v10;
          *(_DWORD *)(v4 + 36) = v25 | 0x22;
          v10 = nullptr;
          LOWORD(v27) = 0;
        }
        else
        {
          *(_DWORD *)(v4 + 36) = v25 | 0x12;
          if ( (v25 & 0x20) != 0 )
          {
            v37 = *(int **)(4 * (*(unsigned __int16 *)(v4 + 40) + 1073741822) + *(_DWORD *)(v4 + 44));
          }
          else
          {
            v37 = nullptr;
            LOWORD(v27) = 0;
          }
        }
      }
      goto LABEL_50;
    }
    *(_DWORD *)(v4 + 36) = v25 | 1;
    v29 = *(unsigned __int16 *)(v4 + 24);
    if ( v40 < 0 )
      goto LABEL_40;
    if ( a4 == 0 && v29 == *(unsigned __int16 *)(a3 + 50) - 1 )
    {
      if ( *(_BYTE *)(a3 + 54) != 0 )
LABEL_40:
        v30 = 4097;
      else
        v30 = 65537;
      *(_DWORD *)(v4 + 36) = v25 | v30;
    }
    *(_WORD *)(v4 + 24) = v29 + 1;
    v10 = v35;
    LOWORD(v27) = 0;
    *(_WORD *)(v4 + 22) = v39 + a4;
LABEL_50:
    v31 = *(_DWORD *)(v4 + 36);
    if ( (v31 & 2) != 0 )
    {
      v32 = *(_WORD *)(v4 + 22);
      v33 = v32;
      if ( v37 != nullptr )
      {
        v32 -= 20;
        --v33;
      }
      if ( v10 != nullptr )
      {
        v32 -= 20;
        --v33;
      }
      if ( v32 <= 9 )
        v32 = 10;
      if ( v32 > v33 )
        v32 = v33;
      *(_WORD *)(v4 + 22) = v32;
    }
    if ( (v31 & 0x140) == 0 )
      *(_WORD *)(v4 + 20) = sub_3525FC(*(__int16 *)(v4 + 20), v46);
    *(_WORD *)(v4 + 20) = sub_3525FC(*(__int16 *)(v4 + 20), *(__int16 *)(v4 + 22));
    sub_34F7B0((_DWORD *)a1[1], v4);
    v34 = sub_3560A0(a1, v4);
    if ( (*(_DWORD *)(v4 + 36) & 0x10) == 0
      && *(unsigned __int16 *)(v4 + 24) < *(unsigned __int16 *)(a3 + 50) + (unsigned int)(*(_DWORD *)a3 != 0) )
    {
      sub_3628C8(a1, a2, a3, (__int16)((_WORD)v27 + a4));
    }
    v35 = v10;
    *(_WORD *)(v4 + 22) = v48;
    goto LABEL_66;
  }
  return result;
}


//======================================================================
// sub_362CAC
// address: 0x00362CAC   size: 0x34E (846 bytes)
//======================================================================
int __fastcall sub_362CAC(int *a1, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r2
  _DWORD *v6; // r5
  _DWORD *v7; // r7
  int v8; // r3
  int v9; // r1
  char v10; // r2
  int v11; // r3
  int v12; // r5
  unsigned int v13; // r6
  unsigned int *v14; // r3
  int i; // r6
  int v16; // r5
  int *v17; // r6
  int v18; // r5
  _DWORD *v19; // r0
  int j; // r3
  char v21; // r3
  __int64 v22; // r2
  int v23; // r1
  int v24; // r1
  int v25; // r3
  unsigned __int8 *v27; // [sp+20h] [bp-84h]
  int v28; // [sp+20h] [bp-84h]
  int v29; // [sp+24h] [bp-80h]
  int v30; // [sp+28h] [bp-7Ch]
  unsigned int v31; // [sp+2Ch] [bp-78h]
  char v32; // [sp+2Ch] [bp-78h]
  int v33; // [sp+30h] [bp-74h]
  int v35; // [sp+38h] [bp-6Ch]
  int v36; // [sp+38h] [bp-6Ch]
  int v37; // [sp+3Ch] [bp-68h]
  _DWORD *v38; // [sp+40h] [bp-64h]
  int v39; // [sp+44h] [bp-60h]
  _WORD *v40; // [sp+48h] [bp-5Ch]
  int v43; // [sp+54h] [bp-50h]
  __int16 v44; // [sp+5Eh] [bp-46h] BYREF
  _DWORD v45[2]; // [sp+60h] [bp-44h] BYREF
  _DWORD v46[15]; // [sp+68h] [bp-3Ch] BYREF

  v4 = a1[3];
  v44 = -1;
  v40 = (_WORD *)*a1;
  v29 = *(_DWORD *)(*a1 + 4) + 72 * *(unsigned __int8 *)(v4 + 16) + 8;
  v5 = *(_DWORD *)(v29 + 16);
  v33 = v5;
  v6 = *(_DWORD **)(v29 + 68);
  v7 = v6;
  v38 = (_DWORD *)a1[1];
  if ( v6 == nullptr )
  {
    if ( (*(_BYTE *)(v5 + 44) & 0x20) != 0 )
    {
      v7 = *(_DWORD **)(v5 + 8);
    }
    else
    {
      v7 = v46;
      j_memset(v46, 0, 0x38u);
      HIWORD(v46[12]) = 1;
      v45[1] = 1;
      BYTE2(v46[13]) = 5;
      v46[2] = v45;
      v8 = *(_DWORD *)(v29 + 16);
      v9 = *(_DWORD *)(v33 + 28);
      v10 = *(_BYTE *)(v29 + 37);
      v46[3] = v33;
      v46[1] = &v44;
      v45[0] = v9;
      v11 = *(_DWORD *)(v8 + 8);
      if ( (v10 & 1) == 0 )
        v46[5] = v11;
    }
  }
  v30 = sub_34D98C(*(unsigned int *)(v33 + 28));
  v39 = sub_34F73C(v30);
  if ( a1[4] == 0
    && (*(_DWORD *)(**(_DWORD **)v40 + 24) & 0x100000) != 0
    && v6 == nullptr
    && (*(_BYTE *)(v29 + 37) & 5) == 0
    && (*(_BYTE *)(v33 + 44) & 0x20) == 0
    && (*(_BYTE *)(v29 + 37) & 0xA) == 0 )
  {
    v13 = v38[5];
    v31 = v13 + 48 * v38[3];
    while ( v13 < v31 )
    {
      if ( (*(_QWORD *)(v4 + 8) & *(_QWORD *)(v13 + 32)) != 0 || !sub_35379E(v13, v29, 0) )
      {
        v12 = 0;
      }
      else
      {
        *(_WORD *)(v4 + 24) = 1;
        *(_WORD *)(v4 + 40) = 1;
        v14 = *(unsigned int **)(v4 + 44);
        *(_WORD *)(v4 + 26) = 0;
        *(_DWORD *)(v4 + 28) = 0;
        *v14 = v13;
        *(_WORD *)(v4 + 18) = v39 + v30 + 28;
        *(_WORD *)(v4 + 22) = 43;
        *(_WORD *)(v4 + 20) = sub_3525FC(v39, 43);
        *(_DWORD *)(v4 + 36) = 0x4000;
        *(_DWORD *)v4 = *(_DWORD *)(v13 + 32) | a3;
        *(_DWORD *)(v4 + 4) = *(_DWORD *)(v13 + 36) | a4;
        v12 = sub_3560A0(a1, v4);
      }
      v13 += 48;
      if ( v12 != 0 )
        goto LABEL_18;
    }
  }
  v12 = 0;
LABEL_18:
  v32 = 1;
  while ( v12 == 0 && v7 != nullptr )
  {
    v27 = (unsigned __int8 *)v7[9];
    if ( v27 != nullptr )
    {
      v35 = *(unsigned __int8 *)(v4 + 16);
      v37 = v38[5];
      v43 = v38[3];
      for ( i = 0; i < v43; ++i )
      {
        if ( sub_354346(*(unsigned __int8 ***)(v37 + 48 * i), v27, v35) )
          goto LABEL_30;
      }
      goto LABEL_25;
    }
LABEL_30:
    *(_DWORD *)v4 = a3;
    *(_WORD *)(v4 + 22) = v30;
    *(_WORD *)(v4 + 24) = 0;
    *(_WORD *)(v4 + 26) = 0;
    *(_WORD *)(v4 + 40) = 0;
    *(_BYTE *)(v4 + 17) = 0;
    *(_WORD *)(v4 + 18) = 0;
    *(_DWORD *)(v4 + 4) = a4;
    *(_DWORD *)(v4 + 28) = v7;
    v16 = 0;
    v28 = *(_DWORD *)(v29 + 40);
    if ( (*((_BYTE *)v7 + 55) & 4) == 0 )
    {
      v17 = *(int **)(*a1 + 8);
      if ( v17 != nullptr )
      {
        v18 = 0;
        v36 = *v17;
        while ( v18 < v36 )
        {
          v19 = sub_34E89C(*(_DWORD **)(20 * v18 + v17[2]));
          if ( *(unsigned __int8 *)v19 != 154 )
            break;
          if ( v19[7] == v28 )
          {
            for ( j = 0; j < *((unsigned __int16 *)v7 + 25); ++j )
            {
              if ( *((__int16 *)v19 + 16) == *(__int16 *)(2 * j + v7[1]) )
              {
                v16 = 1;
                goto LABEL_43;
              }
            }
          }
          ++v18;
        }
        v16 = 0;
      }
    }
LABEL_43:
    if ( (int)v7[11] > 0 )
    {
      if ( (*((_BYTE *)v7 + 55) & 0x20) != 0 )
      {
        *(_DWORD *)(v4 + 36) = 576;
        v22 = 0;
      }
      else
      {
        HIDWORD(v22) = *(_DWORD *)(v29 + 56) & ~sub_34F858((int)v7);
        LODWORD(v22) = *(_DWORD *)(v29 + 60) & ~v23;
        if ( v22 != 0 )
          v24 = 128;
        else
          v24 = 144;
        *(_DWORD *)(v4 + 36) = 4 * v24;
      }
      v25 = HIDWORD(v22) | v22;
      if ( v16 != 0 )
      {
        LOBYTE(v16) = v32;
      }
      else if ( (*(_BYTE *)(v33 + 44) & 0x20) == 0
             && (v25 != 0
              || (*((_BYTE *)v7 + 55) & 4) != 0
              || *((__int16 *)v7 + 24) >= *(__int16 *)(v33 + 42)
              || (v40[17] & 4) != 0
              || dword_471648 == 0
              || (*(_WORD *)(**(_DWORD **)v40 + 60) & 0x40) != 0) )
      {
        goto LABEL_48;
      }
      *(_BYTE *)(v4 + 17) = v16;
      if ( v25 != 0 )
        *(_WORD *)(v4 + 20) = v39 + v30;
      else
        *(_WORD *)(v4 + 20) = 15 * *((__int16 *)v7 + 24) / *(__int16 *)(v33 + 42) + 1 + sub_3525FC(v30, v39);
    }
    else
    {
      *(_DWORD *)(v4 + 36) = 256;
      v21 = 0;
      if ( v16 != 0 )
        v21 = v32;
      *(_BYTE *)(v4 + 17) = v21;
      *(_WORD *)(v4 + 20) = sub_3525FC(v30, v39) + 16;
    }
    sub_34F7B0(v38, v4);
    v12 = sub_3560A0(a1, v4);
    *(_WORD *)(v4 + 22) = v30;
    if ( v12 != 0 )
      return v12;
LABEL_48:
    v12 = sub_3628C8(a1, v29, (int)v7, 0);
    if ( *(_DWORD *)(v29 + 68) != 0 )
      return v12;
LABEL_25:
    v7 = (_DWORD *)v7[5];
    ++v32;
  }
  return v12;
}


//======================================================================
// sub_363000
// address: 0x00363000   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_363000(int a1, _DWORD *a2, _DWORD *a3, char a4, int a5, int a6, int a7, int a8)
{
  int **v11; // r7
  unsigned int v12; // r0
  int v13; // r5
  int v14; // r6

  v11 = sub_362692((int *)a1, (int)a2, (int)a3);
  v12 = sub_34ED2C(a3);
  v13 = (sub_34ED7C(a2, v12) | a8) << 24;
  v14 = sub_35A9FC(*(int **)(a1 + 8), a4, a6, a7, a5, v11, -4);
  sub_34E458(*(_DWORD *)(a1 + 8), SHIBYTE(v13));
  return v14;
}


//======================================================================
// sub_363050
// address: 0x00363050   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall sub_363050(int *a1, int a2, int *a3)
{
  int result; // r0
  int v6; // r3
  int *v7; // r1
  int v8; // r4
  int v9; // r3
  int v10; // r7
  char *v11; // r0
  void *v12; // r0
  unsigned int v13; // r1
  int v14; // r0
  void **v15; // r0
  __int64 v16; // [sp+8h] [bp-44h]
  int v17; // [sp+10h] [bp-3Ch]
  unsigned __int8 *v18; // [sp+14h] [bp-38h]
  int v20; // [sp+24h] [bp-28h]
  int *v21[9]; // [sp+28h] [bp-24h] BYREF

  result = *a1;
  v17 = result;
  if ( *(_BYTE *)(result + 64) == 0 )
  {
    j_memset(v21, 0, 0x20u);
    v6 = *a3;
    v7 = (int *)a3[10];
    v8 = *(_DWORD *)(a2 + 4);
    v9 = *(_DWORD *)(v6 + 8);
    v21[1] = v7;
    v10 = 0;
    v20 = v9;
    v16 = 0;
    while ( v10 < *(__int16 *)(a2 + 38) )
    {
      v18 = *(unsigned __int8 **)(v20 + 20 * v10);
      v11 = (char *)sub_34F354(v21, v18, nullptr, nullptr, nullptr, (char *)(v8 + 22));
      v12 = sub_351BC8(v17, v11);
      v13 = *(unsigned __int8 *)(v8 + 22);
      *(_DWORD *)(v8 + 12) = v12;
      v16 += v13;
      v14 = sub_34ED2C(v18);
      if ( v14 != 0 )
        *(_BYTE *)(v8 + 21) = v14;
      else
        *(_BYTE *)(v8 + 21) = 98;
      v15 = (void **)sub_3625D4(a1, v18);
      if ( v15 != nullptr )
        *(_DWORD *)(v8 + 16) = sub_351BC8(v17, *v15);
      ++v10;
      v8 += 24;
    }
    result = sub_34D98C(4 * v16);
    *(_WORD *)(a2 + 42) = result;
  }
  return result;
}


//======================================================================
// sub_363116
// address: 0x00363116   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_363116(int result, int a2)
{
  int v2; // r5
  int *v3; // r6
  int *v4; // r7
  _DWORD *v5; // r4
  int v6; // r1
  int *v7; // r2

  v2 = *(_WORD *)(a2 + 6) & 0x20;
  if ( v2 == 0 )
  {
    v3 = *(int **)(a2 + 40);
    *(_WORD *)(a2 + 6) |= 0x20u;
    v4 = *(int **)(result + 12);
    v5 = v3 + 2;
    while ( v2 < *v3 )
    {
      v6 = v5[4];
      if ( v6 != 0 && (*(_BYTE *)(v6 + 44) & 2) != 0 )
      {
        v7 = (int *)v5[5];
        if ( v7 != nullptr )
        {
          while ( v7[15] != 0 )
            v7 = (int *)v7[15];
          result = sub_363050(v4, v6, v7);
        }
      }
      ++v2;
      v5 += 18;
    }
  }
  return result;
}


//======================================================================
// sub_363162
// address: 0x00363162   size: 0x32 (50 bytes)
//======================================================================
int **__fastcall sub_363162(int *a1, _DWORD *a2, int a3)
{
  int **result; // r0

  if ( a2[15] == 0 || (result = (int **)sub_363162()) == nullptr )
  {
    result = nullptr;
    if ( a3 < *(_DWORD *)*a2 )
      return sub_3625D4(a1, *(unsigned __int8 **)(20 * a3 + *(_DWORD *)(*a2 + 8)));
  }
  return result;
}


//======================================================================
// sub_363194
// address: 0x00363194   size: 0x46C (1132 bytes)
//======================================================================
int __fastcall sub_363194(
        int **a1,
        unsigned __int16 *a2,
        _DWORD *a3,
        __int16 a4,
        unsigned __int16 a5,
        int a6,
        _DWORD *a7)
{
  int result; // r0
  unsigned int v9; // r4
  int v10; // r6
  signed int v11; // r4
  _DWORD *v12; // r0
  _DWORD *v13; // r5
  int *v14; // r0
  int **v15; // r0
  int *v16; // r5
  int **v17; // r0
  int v18; // r3
  int v19; // r4
  _BOOL4 v20; // r5
  int v21; // r5
  int v22; // r3
  __int16 v23; // r2
  _DWORD *v24; // r0
  int **v25; // r0
  int v26; // r2
  int v27; // r2
  signed int j; // r5
  __int64 v29; // r0
  __int64 v30; // kr00_8
  unsigned __int8 **v31; // [sp+34h] [bp-80h]
  int v32; // [sp+34h] [bp-80h]
  __int64 v33; // [sp+34h] [bp-80h]
  int v34; // [sp+38h] [bp-7Ch]
  signed int v35; // [sp+3Ch] [bp-78h]
  _DWORD *v36; // [sp+3Ch] [bp-78h]
  unsigned __int64 v37; // [sp+40h] [bp-74h]
  unsigned __int64 v38; // [sp+48h] [bp-6Ch]
  char v39; // [sp+50h] [bp-64h]
  int i; // [sp+54h] [bp-60h]
  unsigned __int8 *v42; // [sp+5Ch] [bp-58h]
  signed int v43; // [sp+60h] [bp-54h]
  int v44; // [sp+64h] [bp-50h]
  int v45; // [sp+68h] [bp-4Ch]
  int v46; // [sp+6Ch] [bp-48h]
  char v47; // [sp+70h] [bp-44h]
  int v48; // [sp+74h] [bp-40h]
  int v49; // [sp+78h] [bp-3Ch]
  __int64 v50; // [sp+80h] [bp-34h]
  int v51; // [sp+88h] [bp-2Ch]
  int v52; // [sp+8Ch] [bp-28h]
  _BOOL4 v53; // [sp+90h] [bp-24h]
  __int64 v54; // [sp+94h] [bp-20h]
  __int64 v57; // [sp+A8h] [bp-Ch]

  v44 = **a1;
  if ( (*(_DWORD *)(a6 + 36) & 0x400) != 0 )
    return *(unsigned __int8 *)(a6 + 29);
  if ( a5 != 0 && (*(_WORD *)(v44 + 60) & 0x80) != 0 )
    return 0;
  v9 = *a2;
  v43 = v9;
  if ( v9 > 0x3F )
    return 0;
  v38 = (1LL << v9) - 1;
  v37 = 0;
  v54 = 0;
  v50 = 0;
  v10 = 0;
  for ( i = 0; ; ++i )
  {
    if ( v38 <= v37 || i > a5 )
    {
      result = 1;
      if ( v37 != v38 )
        return -1;
      return result;
    }
    if ( i != 0 )
      v50 |= *(_QWORD *)(v10 + 8);
    v10 = a6;
    if ( i < a5 )
      v10 = *(_DWORD *)(4 * i + *a3);
    v11 = 0;
    v46 = a1[1][18 * *(unsigned __int8 *)(v10 + 16) + 12];
    while ( v11 < v43 )
    {
      if ( ((v37 >> v11) & 1) == 0 )
      {
        v12 = sub_34E89C(*(_DWORD **)(*((_DWORD *)a2 + 2) + 20 * v11));
        v13 = v12;
        if ( *(unsigned __int8 *)v12 == 154 && v12[7] == v46 )
        {
          v14 = sub_36286E((int)(a1 + 82), v46, *((__int16 *)v12 + 16), 328, ~v50, 130, 0);
          v31 = (unsigned __int8 **)v14;
          if ( v14 != nullptr )
          {
            if ( (*((_WORD *)v14 + 9) & 2) == 0 || *((__int16 *)v13 + 16) < 0 )
              goto LABEL_21;
            v15 = sub_3625D4(*a1, *(unsigned __int8 **)(*((_DWORD *)a2 + 2) + 20 * v11));
            if ( v15 == nullptr )
              v15 = *(int ***)(v44 + 8);
            v16 = *v15;
            v17 = sub_3625D4(*a1, *v31);
            if ( v17 == nullptr )
              v17 = *(int ***)(v44 + 8);
            if ( sqlite3_stricmp(v16, (unsigned __int8 *)*v17) == 0 )
LABEL_21:
              v37 |= 1LL << v11;
          }
        }
      }
      ++v11;
    }
    v18 = *(_DWORD *)(v10 + 36);
    v19 = v18 & 0x1000;
    if ( (v18 & 0x1000) == 0 )
      break;
LABEL_74:
    v33 = *(_QWORD *)(v10 + 8) | v54;
    v54 = v33;
    for ( j = 0; j < v43; ++j )
    {
      if ( ((v37 >> j) & 1) == 0 )
      {
        v36 = *(_DWORD **)(20 * j + *((_DWORD *)a2 + 2));
        LODWORD(v29) = sub_35366A(a1 + 17, v36);
        v30 = v29;
        if ( (v29 != 0 || sub_35304C(v36, (int (*)(void))((char *)&dword_0 + 1)) != nullptr) && (v30 & ~v33) == 0 )
          v37 |= 1LL << j;
      }
    }
    v32 = 1;
LABEL_83:
    if ( v32 == 0 )
      return v37 == v38;
  }
  if ( (v18 & 0x100) != 0 )
  {
    v20 = true;
    v48 = 1;
    v52 = v18 & 0x1000;
  }
  else
  {
    v19 = *(_DWORD *)(v10 + 28);
    if ( v19 == 0 || (*(_BYTE *)(v19 + 55) & 4) != 0 )
      return 0;
    v52 = *(unsigned __int16 *)(v19 + 50);
    v48 = *(unsigned __int16 *)(v19 + 52);
    v20 = *(unsigned __int8 *)(v19 + 54) != 0;
  }
  v32 = v20;
  v21 = 0;
  v57 = 1LL << i;
  v45 = 0;
  v39 = 0;
  v51 = 0;
  while ( 1 )
  {
    if ( v21 >= v48 )
    {
LABEL_72:
      if ( v45 == 0 && v32 == 0 )
        goto LABEL_83;
      goto LABEL_74;
    }
    v22 = *(unsigned __int16 *)(v10 + 24);
    if ( v21 >= v22 )
      break;
    if ( *(_WORD *)(v10 + 26) != 0 )
      break;
    v23 = *(_WORD *)(*(_DWORD *)(4 * v21 + *(_DWORD *)(v10 + 44)) + 18);
    if ( (v23 & 0x82) == 0 )
      break;
    v32 &= -((v23 & 0x80) == 0);
LABEL_69:
    ++v21;
  }
  if ( v19 != 0 )
  {
    v34 = *(__int16 *)(2 * v21 + *(_DWORD *)(v19 + 4));
    v47 = *(_BYTE *)(*(_DWORD *)(v19 + 28) + v21);
    if ( v34 == *(__int16 *)(*(_DWORD *)(v19 + 12) + 36) )
      v34 = -1;
  }
  else
  {
    v34 = -1;
    v47 = 0;
  }
  if ( v32 != 0 )
  {
    if ( v34 < 0 )
    {
      v32 = 1;
    }
    else
    {
      v32 = 1;
      if ( v21 >= v22 )
        v32 = *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v19 + 12) + 4) + 24 * v34 + 20) != 0;
    }
  }
  v35 = 0;
  while ( 1 )
  {
    if ( v35 >= v43 )
    {
LABEL_70:
      if ( v21 != 0 && v21 >= v52 )
        goto LABEL_72;
      if ( v45 != 0 )
        goto LABEL_74;
      v32 = 0;
      goto LABEL_83;
    }
    v53 = true;
    if ( ((v37 >> v35) & 1) == 0 )
    {
      v49 = 20 * v35;
      v42 = *(unsigned __int8 **)(*((_DWORD *)a2 + 2) + 20 * v35);
      v24 = sub_34E89C(v42);
      v53 = (a4 & 0x300) != 0;
      if ( *(unsigned __int8 *)v24 != 154 || v24[7] != v46 || *((__int16 *)v24 + 16) != v34 )
        goto LABEL_60;
      if ( v34 < 0 )
        break;
      v25 = sub_3625D4(*a1, v42);
      if ( v25 == nullptr )
        v25 = *(int ***)(v44 + 8);
      if ( sqlite3_stricmp(*v25, *(unsigned __int8 **)(*(_DWORD *)(v19 + 32) + 4 * v21)) == 0 )
        goto LABEL_63;
    }
LABEL_60:
    ++v35;
    if ( !v53 )
      goto LABEL_70;
  }
  v45 = 1;
LABEL_63:
  v37 |= 1LL << v35;
  if ( (*((_WORD *)a1 + 17) & 0x100) != 0 )
    goto LABEL_69;
  v26 = *((_DWORD *)a2 + 2);
  if ( v51 == 0 )
  {
    v51 = 1;
    v39 = *(_BYTE *)(v26 + v49 + 12) ^ v47;
    if ( v39 != 0 )
    {
      v27 = a7[1];
      *a7 |= v57;
      a7[1] = v27 | HIDWORD(v57);
    }
    goto LABEL_69;
  }
  if ( *(unsigned __int8 *)(v26 + v49 + 12) == (unsigned __int8)(v47 ^ v39) )
    goto LABEL_69;
  return 0;
}


//======================================================================
// sub_363600
// address: 0x00363600   size: 0x9C (156 bytes)
//======================================================================
_DWORD *__fastcall sub_363600(int *a1, _DWORD *a2)
{
  int *v2; // r6
  _DWORD *v3; // r5
  int v4; // r3
  unsigned __int8 *v5; // r7
  unsigned int *v6; // r4
  _DWORD *v8; // [sp+4h] [bp-20h]
  int v9; // [sp+8h] [bp-1Ch]
  int v10; // [sp+Ch] [bp-18h]
  int v12; // [sp+14h] [bp-10h]
  int v13; // [sp+18h] [bp-Ch]

  v2 = (int *)a2[14];
  v13 = *a1;
  v12 = *v2;
  v3 = sub_3518F8(*a1, *v2 + 1, 1);
  v9 = 0;
  if ( v3 != nullptr )
  {
    while ( v9 < v12 )
    {
      v10 = 20 * v9;
      v4 = v2[2] + 20 * v9;
      v5 = *(unsigned __int8 **)v4;
      if ( (*(_DWORD *)(*(_DWORD *)v4 + 4) & 0x100) != 0 )
      {
        v6 = (unsigned int *)sub_3625D4(a1, *(unsigned __int8 **)v4);
      }
      else
      {
        v6 = (unsigned int *)sub_363162(a1, a2, *(unsigned __int16 *)(v4 + 16) - 1);
        if ( v6 == nullptr )
          v6 = *(unsigned int **)(v13 + 8);
        v8 = (_DWORD *)(v2[2] + v10);
        *v8 = sub_354126(a1, (int)v5, *v6);
      }
      v3[v9 + 5] = v6;
      *(_BYTE *)(v3[4] + v9++) = *(_BYTE *)(v2[2] + v10 + 12);
    }
  }
  return v3;
}


//======================================================================
// sub_36369C
// address: 0x0036369C   size: 0x412 (1042 bytes)
//======================================================================
int __fastcall sub_36369C(_DWORD ***a1, int a2)
{
  int v2; // r3
  int result; // r0
  int v5; // r3
  int v6; // r2
  _DWORD *v7; // r5
  unsigned int v8; // r3
  _DWORD *v9; // r6
  int j; // r5
  __int16 v11; // r7
  int v12; // r0
  int v13; // r0
  int v14; // r1
  int *v15; // r7
  int v16; // r12
  int v17; // r1
  _DWORD *v18; // r3
  __int16 v19; // r12
  _DWORD *v20; // r3
  int v21; // r2
  _DWORD *v22; // r3
  _DWORD *v23; // r1
  _DWORD ***v24; // r3
  int m; // r2
  int v26; // r1
  int v27; // r1
  _DWORD **v28; // r2
  int v29; // r7
  int v30; // [sp+24h] [bp-70h]
  _DWORD *v31; // [sp+28h] [bp-6Ch]
  int v32; // [sp+2Ch] [bp-68h]
  int v33; // [sp+30h] [bp-64h]
  int v34; // [sp+30h] [bp-64h]
  int v35; // [sp+34h] [bp-60h]
  int v36; // [sp+34h] [bp-60h]
  int v37; // [sp+38h] [bp-5Ch]
  int k; // [sp+38h] [bp-5Ch]
  int v39; // [sp+3Ch] [bp-58h]
  int v40; // [sp+40h] [bp-54h]
  int v41; // [sp+40h] [bp-54h]
  int v42; // [sp+44h] [bp-50h]
  int v43; // [sp+48h] [bp-4Ch]
  _DWORD *v44; // [sp+4Ch] [bp-48h]
  _DWORD *v45; // [sp+50h] [bp-44h]
  int v46; // [sp+54h] [bp-40h]
  __int16 v47; // [sp+58h] [bp-3Ch]
  int v48; // [sp+5Ch] [bp-38h]
  char v49; // [sp+60h] [bp-34h]
  __int16 v50; // [sp+64h] [bp-30h]
  int v52; // [sp+6Ch] [bp-28h]
  int v53; // [sp+6Ch] [bp-28h]
  int i; // [sp+70h] [bp-24h]
  int v55; // [sp+74h] [bp-20h]
  int *v56; // [sp+78h] [bp-1Ch]
  _DWORD *v57; // [sp+7Ch] [bp-18h]
  int v58; // [sp+80h] [bp-14h]
  int v59; // [sp+88h] [bp-Ch] BYREF
  int v60; // [sp+8Ch] [bp-8h]

  v2 = *((unsigned __int8 *)a1 + 40);
  v56 = (int *)*a1;
  v57 = **a1;
  v42 = v2;
  if ( v2 == 1 )
  {
    v32 = 1;
  }
  else
  {
    v32 = 10;
    if ( v2 == 2 )
      v32 = 5;
  }
  v45 = (_DWORD *)sub_3516AC((int)v57, 8 * (v2 + 8) * v32);
  result = 7;
  if ( v45 != nullptr )
  {
    v31 = &v45[8 * v32];
    j_memset(v31, 0, 0x20u);
    v5 = 2 * v32;
    v6 = (int)v45;
    v7 = &v31[8 * v32];
    v58 = 4 * v42;
    do
    {
      --v5;
      *(_DWORD *)(v6 + 24) = v7;
      v6 += 32;
      v7 = (_DWORD *)((char *)v7 + v58);
    }
    while ( v5 > 0 );
    v8 = v56[107];
    if ( v8 > 0x2E )
      LOWORD(v8) = 46;
    *((_WORD *)v31 + 8) = v8;
    if ( a1[2] != nullptr && a2 != 0 )
    {
      v47 = sub_34F73C(a2) + a2;
    }
    else
    {
      *((_BYTE *)v31 + 21) = 1;
      v47 = 0;
    }
    v44 = v45;
    v48 = 1;
    LOWORD(v39) = 0;
    v55 = 0;
    v46 = 0;
    while ( v46 < v42 )
    {
      v9 = v31;
      v30 = 0;
      for ( i = 0; i < v48; ++i )
      {
        for ( j = (int)a1[4]; j != 0; j = *(_DWORD *)(j + 48) )
        {
          v59 = 0;
          v60 = 0;
          v43 = *((unsigned __int8 *)v9 + 21);
          v49 = *((_BYTE *)v9 + 20);
          v35 = *v9;
          v40 = v9[1];
          v6 = *(_DWORD *)j & ~*v9;
          if ( (*(_QWORD *)j & ~*(_QWORD *)v9) == 0 )
          {
            v37 = *(_DWORD *)(j + 8);
            v52 = *(_DWORD *)(j + 12);
            v6 = v37 & v35;
            if ( (v52 & v40 | v37 & v35) == 0 )
            {
              v11 = *((_WORD *)v9 + 8);
              v12 = sub_3525FC(*(__int16 *)(j + 18), (__int16)(v11 + *(_WORD *)(j + 20)));
              v33 = sub_3525FC(v12, *((__int16 *)v9 + 9));
              v50 = v11 + *(_WORD *)(j + 22);
              v36 = v35 | v37;
              v41 = v40 | v52;
              if ( v43 != 0 )
              {
                v14 = v9[3];
                v59 = v9[2];
                v60 = v14;
              }
              else
              {
                v13 = sub_363194((int **)a1, (unsigned __int16 *)a1[2], v9 + 6, *((_WORD *)a1 + 17), v46, j, &v59);
                if ( v13 != 0 )
                {
                  if ( v13 == 1 )
                  {
                    v49 = 1;
                    v43 = 1;
                  }
                }
                else
                {
                  LOWORD(v33) = sub_3525FC(v33, v47);
                  v49 = 0;
                  v43 = 1;
                }
              }
              v15 = v44;
              for ( k = 0; ; ++k )
              {
                if ( k >= v30 )
                {
                  if ( v30 < v32 )
                  {
                    v29 = v30++;
                    goto LABEL_77;
                  }
                  v6 = (__int16)v33;
                  if ( (__int16)v33 < (__int16)v39 )
                  {
                    v29 = v55;
LABEL_77:
                    v15 = &v44[8 * v29];
                    goto LABEL_43;
                  }
                  goto LABEL_52;
                }
                if ( *v15 == v36 && v15[1] == v41 && *((unsigned __int8 *)v15 + 21) == v43 )
                {
                  v53 = *((__int16 *)v15 + 9);
                  v16 = *((__int16 *)v15 + 8);
                  if ( v53 > (__int16)v33 )
                    goto LABEL_38;
                  if ( v16 <= v50 )
                    goto LABEL_42;
                  if ( v53 >= (__int16)v33 )
                  {
LABEL_38:
                    if ( v16 >= v50 )
                      break;
                  }
                }
                v15 += 8;
              }
              if ( v53 > (__int16)v33 )
                goto LABEL_43;
LABEL_42:
              v6 = *((__int16 *)v15 + 8);
              if ( v6 > v50 )
              {
LABEL_43:
                *v15 = *v9 | *(_DWORD *)(j + 8);
                v15[1] = v9[1] | *(_DWORD *)(j + 12);
                v17 = v60;
                v15[2] = v59;
                v15[3] = v17;
                *((_WORD *)v15 + 9) = v33;
                *((_BYTE *)v15 + 21) = v43;
                *((_BYTE *)v15 + 20) = v49;
                *((_WORD *)v15 + 8) = v50;
                j_memcpy((void *)v15[6], (const void *)v9[6], 4 * v46);
                *(_DWORD *)(v15[6] + 4 * v46) = j;
                if ( v30 >= v32 )
                {
                  v6 = 1;
                  v18 = v44 + 8;
                  v39 = *((unsigned __int16 *)v44 + 9);
                  v19 = *((_WORD *)v44 + 8);
                  v55 = 0;
                  while ( v6 < v32 )
                  {
                    v34 = *((unsigned __int16 *)v18 + 9);
                    if ( (__int16)v34 > (__int16)v39 )
                      goto LABEL_50;
                    if ( (__int16)v34 != (__int16)v39 )
                    {
                      v34 = v39;
                      goto LABEL_51;
                    }
                    if ( *((__int16 *)v18 + 8) > v19 )
                    {
LABEL_50:
                      v55 = v6;
                      v19 = *((_WORD *)v18 + 8);
                    }
LABEL_51:
                    ++v6;
                    v18 += 8;
                    v39 = v34;
                  }
                }
              }
            }
          }
LABEL_52:
          ;
        }
        v9 += 8;
      }
      v20 = v31;
      ++v46;
      v31 = v44;
      v44 = v20;
      v48 = v30;
    }
    if ( v48 != 0 )
    {
      v21 = 1;
      v22 = v31 + 8;
      while ( v21 < v48 )
      {
        v23 = v22;
        if ( *((__int16 *)v31 + 9) <= *((__int16 *)v22 + 9) )
          v23 = v31;
        ++v21;
        v22 += 8;
        v31 = v23;
      }
      v24 = a1;
      for ( m = 0; ; ++m )
      {
        v24 += 18;
        if ( m >= v42 )
          break;
        v26 = *(_DWORD *)(4 * m + v31[6]);
        v24[180] = (_DWORD **)v26;
        v27 = *(unsigned __int8 *)(v26 + 16);
        *((_BYTE *)v24 + 700) = v27;
        v24[167] = (_DWORD **)a1[1][18 * v27 + 12];
      }
      if ( (*((_WORD *)a1 + 17) & 0x600) == 0x400
        && *((_BYTE *)a1 + 39) == 0
        && a2 != 0
        && sub_363194((int **)a1, (unsigned __int16 *)a1[3], v31 + 6, 512, v42 - 1, *(_DWORD *)(v31[6] + v58 - 4), &v59) == 1 )
      {
        *((_BYTE *)a1 + 39) = 2;
      }
      if ( *((_BYTE *)v31 + 20) != 0 )
      {
        if ( (*((_WORD *)a1 + 17) & 0x200) != 0 )
        {
          *((_BYTE *)a1 + 39) = 2;
        }
        else
        {
          *((_BYTE *)a1 + 36) = 1;
          v28 = (_DWORD **)v31[3];
          a1[6] = (_DWORD **)v31[2];
          a1[7] = v28;
        }
      }
      *((_WORD *)a1 + 16) = *((_WORD *)v31 + 8);
      sub_354940(v57, v45);
      return 0;
    }
    else
    {
      sub_360E94(v56, (int)"no query solution", v6);
      sub_354940(v57, v45);
      return 1;
    }
  }
  return result;
}


//======================================================================
// sub_363AB4
// address: 0x00363AB4   size: 0x80 (128 bytes)
//======================================================================
int *__fastcall sub_363AB4(int *a1, int *a2, int a3, _DWORD *a4, int a5, _DWORD *a6, int a7, _DWORD *a8)
{
  _DWORD *v8; // r4
  const char *v9; // r2
  int *v10; // r0
  int *v11; // r6
  int *v12; // r5

  v8 = (_DWORD *)*a1;
  if ( a2 == nullptr )
  {
    if ( a7 != 0 )
    {
      v9 = "ON";
      goto LABEL_6;
    }
    if ( a8 != nullptr )
    {
      v9 = "USING";
LABEL_6:
      sub_360E94(a1, (int)"a JOIN clause is required before %s", v9);
LABEL_12:
      sub_35519A(v8, a7);
      sub_354DDC(v8, a8);
      sub_355184(v8, a6);
      return nullptr;
    }
  }
  v10 = sub_35B348(*a1, a2, a3, a4);
  v11 = v10;
  if ( v10 == nullptr || *v10 == 0 )
    goto LABEL_12;
  v12 = &v10[18 * *v10 - 16];
  if ( *(_DWORD *)(a5 + 4) != 0 )
    v12[3] = (int)sub_351C1C((int)v8, a5);
  v12[5] = (int)a6;
  v12[11] = a7;
  v12[12] = (int)a8;
  return v11;
}


//======================================================================
// sub_363B40
// address: 0x00363B40   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall sub_363B40(int a1, _DWORD *a2)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r3
  int v5; // r2
  int i; // r3
  int *v7; // r7
  _DWORD *v8; // r0
  _DWORD *v9; // r6
  _WORD *v10; // r0
  _DWORD *v11; // r0
  __int16 v12; // r2
  int *v14; // [sp+10h] [bp-14h]
  int v15; // [sp+14h] [bp-10h]
  _DWORD v16[3]; // [sp+18h] [bp-Ch] BYREF

  if ( a2[15] != 0 )
  {
    v3 = (_DWORD *)a2[14];
    if ( v3 != nullptr )
    {
      v4 = a2;
      while ( 1 )
      {
        v5 = *((unsigned __int8 *)v4 + 4);
        if ( v5 != 116 && v5 != 119 )
          break;
        v4 = (_DWORD *)v4[15];
        if ( v4 == nullptr )
          return 0;
      }
      for ( i = *v3 - 1; i >= 0; --i )
      {
        if ( (*(_DWORD *)(*(_DWORD *)(v3[2] + 20 * i) + 4) & 0x100) != 0 )
        {
          v7 = *(int **)(a1 + 12);
          v15 = *v7;
          v8 = sub_351894(*v7, 0x50u);
          v9 = v8;
          if ( v8 != nullptr )
          {
            v16[0] = 0;
            v16[1] = 0;
            v14 = sub_363AB4(v7, nullptr, 0, nullptr, (int)v16, v8, 0, nullptr);
            if ( v14 != nullptr )
            {
              j_memcpy(v9, a2, 0x50u);
              a2[10] = v14;
              v10 = sub_351B26(v15, 116, nullptr);
              v11 = sub_35B684((_DWORD *)*v7, nullptr, (int)v10);
              *((_BYTE *)a2 + 4) = 119;
              *a2 = v11;
              a2[11] = 0;
              v9[12] = 0;
              v9[13] = 0;
              v9[14] = 0;
              v12 = *((_WORD *)a2 + 3);
              a2[15] = 0;
              a2[16] = 0;
              *((_WORD *)a2 + 3) = v12 & 0xEFFF;
              *(_DWORD *)(v9[15] + 64) = v9;
              v9[17] = 0;
              v9[18] = 0;
              return 0;
            }
          }
          return 2;
        }
      }
    }
  }
  return 0;
}


//======================================================================
// sub_363C0C
// address: 0x00363C0C   size: 0x9A (154 bytes)
//======================================================================
_DWORD *__fastcall sub_363C0C(int *a1, _DWORD *a2, int a3, _DWORD *a4, _DWORD *a5)
{
  _DWORD *v5; // r5
  unsigned __int8 *v7; // r6
  int i; // r7
  _DWORD *v9; // r0
  int v10; // r2
  _DWORD *v11; // r3

  v5 = (_DWORD *)*a1;
  v7 = sub_351C1C(*a1, a3);
  if ( v7 != nullptr )
  {
    if ( a2 != nullptr )
    {
      for ( i = 0; i < *a2; ++i )
      {
        if ( sqlite3_stricmp(v7, (unsigned __int8 *)a2[4 * i + 2]) == 0 )
          sub_360E94(a1, (int)"duplicate WITH table name: %s", (const char *)v7);
      }
      goto LABEL_9;
    }
  }
  else if ( a2 != nullptr )
  {
LABEL_9:
    v9 = (_DWORD *)sub_3595BC((int)v5, (unsigned int)a2, 16 * *a2 + 24);
    goto LABEL_11;
  }
  v9 = sub_351894((int)v5, 0x18u);
LABEL_11:
  if ( v9 != nullptr )
  {
    v10 = *v9;
    a2 = v9;
    v11 = &v9[4 * *v9];
    v11[4] = a5;
    v11[2] = v7;
    v11[3] = a4;
    v11[5] = 0;
    *v9 = v10 + 1;
  }
  else
  {
    sub_3551E8(v5, a4);
    sub_355184(v5, a5);
    sub_354940(v5, v7);
  }
  return a2;
}


//======================================================================
// sub_363CB0
// address: 0x00363CB0   size: 0x4AA (1194 bytes)
//======================================================================
int __fastcall sub_363CB0(int *a1, int a2, int a3, int a4)
{
  int v4; // r7
  int v5; // r6
  int *v6; // r5
  int v7; // r3
  int i; // r2
  int v9; // r3
  unsigned __int8 *v10; // r2
  _DWORD *v11; // r0
  _DWORD *v12; // r4
  int v13; // r12
  int v14; // r3
  _DWORD *v15; // r0
  int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r1
  int v21; // r3
  int k; // r0
  int v23; // r2
  bool v24; // r2
  _DWORD *v25; // r6
  int v26; // r0
  const char *v27; // r2
  int v28; // r5
  int v29; // r3
  int v30; // r2
  int v31; // r2
  char *v32; // r1
  int v33; // r3
  int v34; // r0
  int v35; // r0
  int v36; // r2
  int v37; // r3
  unsigned int v38; // r6
  unsigned int v39; // r5
  __int16 v40; // r0
  int v41; // r5
  int *v42; // [sp+8h] [bp-64h]
  int v43; // [sp+Ch] [bp-60h]
  int v44; // [sp+30h] [bp-3Ch]
  int v45; // [sp+30h] [bp-3Ch]
  int v46; // [sp+34h] [bp-38h]
  int v47; // [sp+34h] [bp-38h]
  int v48; // [sp+34h] [bp-38h]
  _DWORD *v49; // [sp+38h] [bp-34h]
  int v50; // [sp+38h] [bp-34h]
  int *v51; // [sp+3Ch] [bp-30h]
  int v52; // [sp+40h] [bp-2Ch]
  int v53; // [sp+40h] [bp-2Ch]
  int v54; // [sp+44h] [bp-28h]
  _DWORD *v56; // [sp+4Ch] [bp-20h]
  int j; // [sp+50h] [bp-1Ch]
  int v58; // [sp+50h] [bp-1Ch]
  const char **v59; // [sp+54h] [bp-18h]
  char *v60; // [sp+58h] [bp-14h]
  int v61; // [sp+5Ch] [bp-10h]

  v4 = a1[3];
  v54 = a1[1];
  v5 = *(_DWORD *)(*a1 + 4) + 72 * *(unsigned __int8 *)(v4 + 16) + 8;
  v51 = *(int **)*a1;
  v56 = (_DWORD *)*v51;
  v59 = *(const char ***)(v5 + 16);
  v6 = (int *)a1[2];
  v7 = *(_DWORD *)(v54 + 20);
  v44 = 0;
  for ( i = 0; i < *(_DWORD *)(v54 + 12); ++i )
  {
    if ( *(_DWORD *)(v7 + 8) == *(_DWORD *)(v5 + 40) )
      v44 += (*(_WORD *)(v7 + 18) & 0xFB7F) != 0;
    v7 += 48;
  }
  if ( v6 != nullptr )
  {
    v9 = 0;
    v46 = *v6;
    while ( v9 < v46 )
    {
      v10 = *(unsigned __int8 **)(20 * v9 + v6[2]);
      if ( *v10 != 154 || *((_DWORD *)v10 + 7) != *(_DWORD *)(v5 + 40) )
        break;
      ++v9;
    }
    v47 = v9 == v46 ? v46 : 0;
  }
  else
  {
    v47 = 0;
  }
  v11 = sub_351894((int)v56, 20 * v44 + 56 + 8 * v47);
  v12 = v11;
  if ( v11 == nullptr )
  {
    sub_360E94(v51, (int)"out of memory");
    return 7;
  }
  v49 = v11 + 14;
  *v11 = v44;
  v13 = (int)&v11[3 * v44 + 14];
  v11[3] = v13;
  v11[2] = v47;
  v11[1] = v11 + 14;
  v11[4] = 8 * v47 + v13;
  v14 = *(_DWORD *)(v54 + 20);
  v52 = 0;
  for ( j = 0; j < *(_DWORD *)(v54 + 12); ++j )
  {
    if ( *(_DWORD *)(v14 + 8) == *(_DWORD *)(v5 + 40) && (*(_WORD *)(v14 + 18) & 0xFB7F) != 0 )
    {
      v15 = &v49[3 * v52];
      *v15 = *(_DWORD *)(v14 + 12);
      v15[2] = j;
      v16 = *(unsigned __int8 *)(v14 + 18);
      if ( v16 == 1 )
        LOBYTE(v16) = 2;
      *((_BYTE *)v15 + 4) = v16;
      ++v52;
    }
    v14 += 48;
  }
  v17 = v13;
  v18 = 0;
  while ( v18 < v47 )
  {
    v19 = 20 * v18++;
    *(_DWORD *)v17 = *(__int16 *)(*(_DWORD *)(v6[2] + v19) + 32);
    *(_BYTE *)(v17 + 4) = *(_BYTE *)(v6[2] + v19 + 12);
    v17 += 8;
  }
  *(_DWORD *)v4 = 0;
  *(_DWORD *)(v4 + 4) = 0;
  *(_DWORD *)(v4 + 36) = 1024;
  *(_WORD *)(v4 + 18) = 0;
  *(_WORD *)(v4 + 40) = 0;
  *(_BYTE *)(v4 + 28) = 0;
  v60 = (char *)v12[4];
  v50 = *v12;
  if ( sub_356054(v56, v4, *v12) != 0 )
  {
    sub_354940(v56, v12);
    return 7;
  }
  v48 = 0;
  v58 = 0;
  v53 = 0;
LABEL_31:
  if ( v53 == 0 && (v48 & 1) != 0 && ++v48 == 4 )
  {
    v45 = 0;
    goto LABEL_100;
  }
  if ( v58 != 0 || v48 <= 1 )
  {
    v21 = v12[1];
    for ( k = 0; ; ++k )
    {
      if ( k >= *v12 )
      {
        j_memset(v60, 0, 8 * *v12);
        if ( v12[7] != 0 )
          sqlite3_free(v12[6]);
        v12[6] = 0;
        v12[5] = 0;
        v12[7] = 0;
        v12[8] = 0;
        v12[10] = -1568170194;
        v12[11] = 1416446638;
        v12[12] = 25;
        v12[13] = 0;
        v25 = (_DWORD *)sub_353624(*v51, v59[15])[2];
        v26 = (*(int (__fastcall **)(_DWORD *, _DWORD *))(*v25 + 12))(v25, v12);
        if ( v26 != 0 )
        {
          if ( v26 == 7 )
          {
            *(_BYTE *)(*v51 + 64) = 1;
          }
          else
          {
            v27 = (const char *)v25[2];
            if ( v27 == nullptr )
              v27 = sub_353D40(v26);
            sub_360E94(v51, (int)"%s", v27);
          }
        }
        v28 = 0;
        sqlite3_free(v25[2]);
        v25[2] = 0;
        while ( v28 < *v12 )
        {
          if ( *(_BYTE *)(v12[1] + 12 * v28 + 5) == 0 && *(int *)(8 * v28 + v12[4]) > 0 )
            sub_360E94(v51, (int)"table %s: xBestIndex returned an invalid plan", *v59);
          ++v28;
        }
        v45 = v51[17];
        if ( v45 != 0 )
          goto LABEL_100;
        v29 = 0;
        v61 = v12[1];
        *(_DWORD *)v4 = a3;
        *(_DWORD *)(v4 + 4) = a4;
        while ( 1 )
        {
          v30 = 0;
          if ( v29 >= v50 )
            break;
          v31 = 4 * v29++;
          *(_DWORD *)(v31 + *(_DWORD *)(v4 + 44)) = 0;
        }
        v32 = v60;
        *(_WORD *)(v4 + 30) = 0;
        v43 = -1;
        while ( v30 < v50 )
        {
          v33 = *(_DWORD *)v32 - 1;
          if ( v33 >= 0 )
          {
            v34 = *(_DWORD *)(v61 + 12 * v30 + 8);
            if ( v33 >= v50
              || v34 < 0
              || v34 >= *(_DWORD *)(v54 + 12)
              || *(v42 = (int *)(*(_DWORD *)(v4 + 44) + 4 * v33)) != 0 )
            {
              sub_360E94(v51, (int)"%s.xBestIndex() malfunction", *v59);
              v41 = 1;
              goto LABEL_99;
            }
            v35 = *(_DWORD *)(v54 + 20) + 48 * v34;
            *(_DWORD *)v4 |= *(_DWORD *)(v35 + 32);
            *(_DWORD *)(v4 + 4) |= *(_DWORD *)(v35 + 36);
            *v42 = v35;
            if ( v43 < v33 )
              v43 = v33;
            if ( v33 <= 15 && v32[4] != 0 )
              *(_WORD *)(v4 + 30) |= 1 << v33;
            if ( (*(_WORD *)(v35 + 18) & 1) != 0 )
            {
              if ( v32[4] == 0 )
                goto LABEL_97;
              v12[8] = 0;
            }
          }
          ++v30;
          v32 += 8;
        }
        *(_WORD *)(v4 + 40) = v43 + 1;
        *(_DWORD *)(v4 + 24) = v12[5];
        *(_BYTE *)(v4 + 28) = v12[7];
        v36 = v12[6];
        v12[7] = 0;
        *(_DWORD *)(v4 + 32) = v36;
        v37 = v12[2];
        if ( v37 != 0 )
          LOBYTE(v37) = v12[8] != 0;
        *(_BYTE *)(v4 + 29) = v37;
        *(_WORD *)(v4 + 18) = 0;
        v38 = v12[10];
        v39 = v12[11];
        if ( *((double *)v12 + 5) <= 1.0 )
        {
          v40 = 0;
        }
        else if ( COERCE_DOUBLE(__PAIR64__(v39, v38)) > 2000000000.0 )
        {
          v40 = 10 * ((v39 >> 20) - 1022);
        }
        else
        {
          v40 = sub_34D98C((unsigned __int64)COERCE_DOUBLE(__PAIR64__(v39, v38)));
        }
        *(_WORD *)(v4 + 20) = v40;
        *(_WORD *)(v4 + 22) = sub_34D98C(*((_QWORD *)v12 + 6));
        sub_3560A0(a1, v4);
        if ( *(_BYTE *)(v4 + 28) != 0 )
        {
          sqlite3_free(*(_DWORD *)(v4 + 32));
          *(_BYTE *)(v4 + 28) = 0;
        }
LABEL_97:
        if ( ++v48 > 3 )
          goto LABEL_100;
        goto LABEL_31;
      }
      v23 = *(_DWORD *)(v54 + 20) + 48 * *(_DWORD *)(v21 + 8);
      if ( v48 == 1 )
      {
        v24 = *(_QWORD *)(v23 + 32) == 0;
LABEL_50:
        *(_BYTE *)(v21 + 5) = v24;
        goto LABEL_53;
      }
      if ( v48 == 2 )
      {
        v24 = (*(_WORD *)(v23 + 18) & 1) == 0;
        goto LABEL_50;
      }
      if ( v48 != 0 )
        goto LABEL_51;
      *(_BYTE *)(v21 + 5) = 0;
      if ( (*(_WORD *)(v23 + 18) & 1) != 0 )
        v53 = 1;
      if ( *(_QWORD *)(v23 + 32) == 0 )
        break;
      v58 = 1;
LABEL_53:
      v21 += 12;
    }
    if ( (*(_WORD *)(v23 + 18) & 1) != 0 )
      goto LABEL_53;
LABEL_51:
    *(_BYTE *)(v21 + 5) = 1;
    goto LABEL_53;
  }
  v41 = 0;
LABEL_99:
  v45 = v41;
LABEL_100:
  if ( v12[7] != 0 )
    sqlite3_free(v12[6]);
  sub_354940(v56, v12);
  return v45;
}


//======================================================================
// sub_364178
// address: 0x00364178   size: 0x24C (588 bytes)
//======================================================================
int __fastcall sub_364178(int *a1, int a2, int a3, int a4)
{
  int v4; // r4
  int *v5; // r5
  int result; // r0
  int v7; // r7
  int v8; // r6
  int v9; // r2
  int v10; // r12
  int v11; // r3
  unsigned int v12; // r4
  _DWORD *v13; // r3
  int v14; // r7
  int v15; // r0
  int v16; // r1
  int v17; // r0
  int v18; // r1
  __int16 v19; // r7
  __int16 v20; // r0
  int v21; // r1
  int v22; // r4
  int v23; // r1
  int v24; // r1
  int v25; // [sp+14h] [bp-2A0h]
  int v26; // [sp+18h] [bp-29Ch]
  int v27; // [sp+1Ch] [bp-298h]
  char *v28; // [sp+1Ch] [bp-298h]
  unsigned int v30; // [sp+24h] [bp-290h]
  int v31; // [sp+28h] [bp-28Ch]
  int v32; // [sp+2Ch] [bp-288h]
  int i; // [sp+30h] [bp-284h]
  int v34; // [sp+34h] [bp-280h]
  unsigned int v37; // [sp+48h] [bp-26Ch]
  int v38; // [sp+4Ch] [bp-268h]
  unsigned int v39; // [sp+50h] [bp-264h]
  int v40; // [sp+54h] [bp-260h]
  int v41; // [sp+5Ch] [bp-258h] BYREF
  _DWORD *v42; // [sp+60h] [bp-254h]
  int v43; // [sp+64h] [bp-250h]
  int v44; // [sp+68h] [bp-24Ch]
  _WORD *v45; // [sp+6Ch] [bp-248h]
  _WORD v46[28]; // [sp+70h] [bp-244h] BYREF
  _WORD v47[4]; // [sp+A8h] [bp-20Ch] BYREF
  char v48[48]; // [sp+B0h] [bp-204h] BYREF
  unsigned __int16 v49; // [sp+E0h] [bp-1D4h]
  char v50[8]; // [sp+E8h] [bp-1CCh] BYREF
  char v51; // [sp+F0h] [bp-1C4h] BYREF
  _DWORD v52[2]; // [sp+118h] [bp-19Ch] BYREF
  char v53; // [sp+120h] [bp-194h]
  int v54; // [sp+124h] [bp-190h]
  unsigned int v55; // [sp+12Ch] [bp-188h]

  v4 = *a1;
  v5 = (int *)a1[1];
  if ( (*(_WORD *)(*a1 + 34) & 0x80) == 0 )
  {
    v7 = v5[5];
    v8 = a1[3];
    v27 = v5[3];
    j_memset(v46, 0, sizeof(v46));
    v9 = *(_DWORD *)(v4 + 4) + 72 * *(unsigned __int8 *)(v8 + 16) + 8;
    v25 = v9;
    if ( (*(_BYTE *)(*(_DWORD *)(v9 + 16) + 44) & 0x20) == 0 )
    {
      v10 = 0;
      v38 = *(_DWORD *)(v9 + 40);
      v30 = v5[5];
      v37 = v7 + 48 * v27;
      while ( 1 )
      {
        result = v10;
        if ( v30 >= v37 || v10 != 0 )
          return result;
        if ( (*(_WORD *)(v30 + 18) & 0x100) == 0
          || (*(_QWORD *)((v11 = *(_DWORD *)(v30 + 12)) + 408) & *(_QWORD *)(v8 + 8)) == 0 )
        {
LABEL_8:
          v26 = 0;
          goto LABEL_34;
        }
        v12 = *(_DWORD *)(v11 + 20);
        v39 = v12 + 48 * *(_DWORD *)(v11 + 12);
        v13 = (_DWORD *)a1[1];
        v14 = a1[2];
        v41 = *a1;
        v42 = v13;
        v43 = v14;
        v44 = a1[3];
        v43 = 0;
        v45 = v47;
        v26 = 0;
        v31 = 1;
        while ( v12 < v39 )
        {
          if ( (*(_WORD *)(v12 + 18) & 0x200) != 0 )
          {
            v42 = *(_DWORD **)(v12 + 12);
          }
          else
          {
            if ( *(_DWORD *)(v12 + 8) != v38 )
              goto LABEL_29;
            v15 = *v5;
            v53 = 72;
            v52[0] = v15;
            v52[1] = v5;
            v54 = 1;
            v55 = v12;
            v42 = v52;
          }
          v16 = *(_DWORD *)(v25 + 16);
          v47[0] = 0;
          if ( (*(_BYTE *)(v16 + 44) & 0x10) != 0 )
            v17 = sub_363CB0(&v41, v16, a3, a4);
          else
            v17 = sub_362CAC(&v41, v16, a3, a4);
          v26 = v17;
          if ( v47[0] == 0 )
          {
            v46[0] = 0;
            break;
          }
          if ( v31 != 0 )
          {
            v46[0] = v47[0];
            j_memcpy(&v46[4], v48, 16 * v47[0]);
            v31 = 0;
          }
          else
          {
            v49 = v46[0];
            j_memcpy(v50, &v46[4], 16 * v46[0]);
            v46[0] = 0;
            v28 = &v51;
            for ( i = 0; i < v49; ++i )
            {
              v32 = 0;
              while ( 1 )
              {
                v18 = v32++;
                if ( v18 >= v47[0] )
                  break;
                v34 = *(_DWORD *)&v47[8 * v32 - 4] | *((_DWORD *)v28 - 2);
                v40 = *(_DWORD *)&v47[8 * v32 - 2] | *((_DWORD *)v28 - 1);
                v19 = sub_3525FC(*(__int16 *)v28, (__int16)v47[8 * v32]);
                v20 = sub_3525FC(*((__int16 *)v28 + 1), (__int16)v47[8 * v32 + 1]);
                sub_34F624(v46, v21, v34, v40, v19, v20);
              }
              v28 += 16;
            }
          }
LABEL_29:
          v12 += 48;
        }
        *(_WORD *)(v8 + 40) = 1;
        **(_DWORD **)(v8 + 44) = v30;
        v22 = 0;
        *(_DWORD *)(v8 + 36) = 0x2000;
        *(_WORD *)(v8 + 18) = 0;
        *(_BYTE *)(v8 + 17) = 0;
        j_memset((void *)(v8 + 24), 0, 0xCu);
        while ( 1 )
        {
          v23 = v22;
          if ( v26 != 0 )
            break;
          ++v22;
          if ( v23 >= v46[0] )
            goto LABEL_8;
          *(_WORD *)(v8 + 20) = v46[8 * v22] + 18;
          *(_WORD *)(v8 + 22) = v46[8 * v22 + 1];
          v24 = *(_DWORD *)&v46[8 * v22 - 2];
          *(_DWORD *)v8 = *(_DWORD *)&v46[8 * v22 - 4];
          *(_DWORD *)(v8 + 4) = v24;
          v26 = sub_3560A0(a1, v8);
        }
LABEL_34:
        v30 += 48;
        v10 = v26;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_3643C8
// address: 0x003643C8   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_3643C8(int *a1, const char *a2, const char *a3, int a4)
{
  int v4; // r7
  int v7; // r0
  int v8; // r5
  int v9; // r3
  const char *v11; // [sp+Ch] [bp-10h]

  v4 = *a1;
  v11 = *(const char **)(16 * a4 + *(_DWORD *)(*a1 + 16));
  v7 = (*(int (__fastcall **)(_DWORD, int, const char *, const char *, const char *, int))(*a1 + 276))(
         *(_DWORD *)(*a1 + 280),
         20,
         a2,
         a3,
         v11,
         a1[124]);
  v8 = v7;
  if ( v7 == 1 )
  {
    if ( *(int *)(v4 + 20) > 2 || a4 != 0 )
      sub_360E94(a1, (int)"access to %s.%s.%s is prohibited", v11, a2, a3);
    else
      sub_360E94(a1, (int)"access to %s.%s is prohibited", a2, a3);
    v9 = 23;
    goto LABEL_9;
  }
  if ( (v7 & 0xFFFFFFFD) != 0 )
  {
    sub_360E94(a1, (int)"authorizer malfunction", v7 & 0xFFFFFFFD);
    v9 = 1;
LABEL_9:
    a1[3] = v9;
  }
  return v8;
}


//======================================================================
// sub_36445C
// address: 0x0036445C   size: 0x5B0 (1456 bytes)
//======================================================================
int __fastcall sub_36445C(int a1, unsigned __int8 *a2, unsigned __int8 *a3, unsigned __int8 *a4, int a5, char *a6)
{
  int v6; // r4
  _DWORD *v7; // r6
  int v8; // r4
  _DWORD *v9; // r0
  _DWORD *v10; // r5
  int v11; // r3
  int *v12; // r5
  int v13; // r4
  int v14; // r3
  int v15; // r6
  _DWORD *v16; // r4
  int v17; // r2
  _BYTE *v18; // r0
  _DWORD *v19; // r4
  __int16 v20; // r4
  int v21; // r5
  int v22; // r5
  int v23; // r4
  int v24; // r1
  int v25; // r2
  char *v26; // r3
  int result; // r0
  const char *v28; // r2
  int v29; // r2
  int v30; // r1
  char v31; // r3
  int v32; // r5
  _DWORD *v33; // r4
  int v34; // r3
  int k; // r2
  int v36; // r1
  _DWORD *v37; // r1
  int v38; // r2
  const char *v39; // r2
  int v40; // [sp+2Ch] [bp-48h]
  const char *v41; // [sp+2Ch] [bp-48h]
  int v42; // [sp+30h] [bp-44h]
  int v43; // [sp+30h] [bp-44h]
  int v44; // [sp+30h] [bp-44h]
  int v47; // [sp+3Ch] [bp-38h]
  int j; // [sp+3Ch] [bp-38h]
  _DWORD *v49; // [sp+40h] [bp-34h]
  int v51; // [sp+48h] [bp-2Ch]
  unsigned __int8 *v52; // [sp+4Ch] [bp-28h]
  int v53; // [sp+50h] [bp-24h]
  int v54; // [sp+54h] [bp-20h]
  int v55; // [sp+58h] [bp-1Ch]
  int v56; // [sp+58h] [bp-1Ch]
  _DWORD *v57; // [sp+5Ch] [bp-18h]
  int v58; // [sp+60h] [bp-14h]
  int i; // [sp+64h] [bp-10h]
  int (*v60)(void); // [sp+68h] [bp-Ch]
  _DWORD *v61; // [sp+6Ch] [bp-8h]

  v52 = a2;
  v57 = *(_DWORD **)a1;
  *((_DWORD *)a6 + 7) = -1;
  *((_DWORD *)a6 + 11) = 0;
  if ( a2 == nullptr )
  {
LABEL_10:
    v51 = 0;
    goto LABEL_9;
  }
  v6 = *(_BYTE *)(a5 + 28) & 0x14;
  if ( (*(_BYTE *)(a5 + 28) & 0x14) == 0 )
  {
    while ( v6 < v57[5] )
    {
      if ( sqlite3_stricmp(*(_BYTE **)(v57[4] + 16 * v6), v52) == 0 )
      {
        v51 = *(_DWORD *)(v57[4] + 16 * v6 + 12);
        goto LABEL_9;
      }
      ++v6;
    }
    goto LABEL_10;
  }
  v51 = 0;
  v52 = nullptr;
LABEL_9:
  v53 = a5;
  v7 = nullptr;
  v54 = 0;
  v60 = nullptr;
  v42 = 0;
  v8 = 0;
  while ( v53 != 0 )
  {
    if ( v8 != 0 )
      goto LABEL_117;
    v9 = *(_DWORD **)(v53 + 4);
    v61 = v9;
    if ( v9 != nullptr )
    {
      v10 = v9 + 2;
      v49 = v7;
      v40 = 0;
      for ( i = 0; i < *v61; ++i )
      {
        v14 = v10[5];
        v15 = v10[4];
        if ( v14 == 0 || (*(_WORD *)(v14 + 6) & 0x200) == 0 )
          goto LABEL_36;
        v16 = *(_DWORD **)v14;
        v17 = 0;
        v55 = 0;
        while ( 1 )
        {
          v47 = v17;
          if ( v17 >= *v16 )
            break;
          if ( sub_34E81E(*(_BYTE **)(v16[2] + 20 * v17 + 8), a4, a3, v52) )
          {
            ++v40;
            *((_WORD *)a6 + 16) = v47;
            v49 = v10;
            v55 = 1;
            v42 = 2;
          }
          v17 = v47 + 1;
        }
        if ( v55 == 0 && a3 != nullptr )
        {
LABEL_36:
          if ( v52 == nullptr || *(_DWORD *)(v15 + 68) == v51 )
          {
            if ( a3 == nullptr )
              goto LABEL_38;
            v18 = (_BYTE *)v10[3];
            if ( v18 == nullptr )
              v18 = *(_BYTE **)v15;
            if ( sqlite3_stricmp(v18, a3) == 0 )
            {
LABEL_38:
              v56 = v42 + 1;
              if ( v42 == 0 )
                v49 = v10;
              v43 = 0;
              v58 = *(_DWORD *)(v15 + 4);
              while ( v43 < *(__int16 *)(v15 + 38) )
              {
                if ( sqlite3_stricmp(*(_BYTE **)(v58 + 24 * v43), a4) == 0 )
                {
                  if ( v40 != 1 )
                    goto LABEL_54;
                  if ( (v10[9] & 4) == 0 )
                  {
                    v19 = (_DWORD *)v10[12];
                    if ( v19 != nullptr )
                    {
                      for ( j = v10[9] & 4; j < v19[1]; ++j )
                      {
                        if ( sqlite3_stricmp(*(_BYTE **)(8 * j + *v19), a4) == 0 )
                          goto LABEL_58;
                      }
                    }
LABEL_54:
                    ++v40;
                    if ( v43 == *(__int16 *)(v15 + 36) )
                      v20 = -1;
                    else
                      v20 = v43;
                    *((_WORD *)a6 + 16) = v20;
                    v49 = v10;
                    break;
                  }
                }
LABEL_58:
                ++v43;
              }
              v42 = v56;
            }
          }
        }
        v10 += 18;
      }
      v7 = v49;
      if ( v49 != nullptr )
      {
        *((_DWORD *)a6 + 7) = v49[10];
        v11 = v49[4];
        *((_DWORD *)a6 + 11) = v11;
        v51 = *(_DWORD *)(v11 + 68);
      }
    }
    else
    {
      v40 = 0;
    }
    if ( v52 != nullptr || a3 == nullptr || v42 != 0 || *(_DWORD *)(a1 + 416) == 0 )
      goto LABEL_19;
    v21 = *(unsigned __int8 *)(a1 + 440);
    if ( v21 == 109 )
      goto LABEL_65;
    if ( sqlite3_stricmp("new", a3) != 0 )
    {
      if ( v21 == 108 )
        goto LABEL_19;
LABEL_65:
      if ( sqlite3_stricmp("old", a3) != 0 )
        goto LABEL_19;
      *((_DWORD *)a6 + 7) = 0;
      v22 = *(_DWORD *)(a1 + 416);
      goto LABEL_71;
    }
    *((_DWORD *)a6 + 7) = 1;
    v22 = *(_DWORD *)(a1 + 416);
LABEL_71:
    if ( v22 != 0 )
    {
      v23 = 0;
      v51 = *(_DWORD *)(v22 + 68);
      v44 = *(_DWORD *)(v22 + 4);
      while ( v23 < *(__int16 *)(v22 + 38) )
      {
        if ( sqlite3_stricmp(*(_BYTE **)(v44 + 24 * v23), a4) == 0 )
        {
          if ( v23 == *(__int16 *)(v22 + 36) )
            v23 = -1;
          break;
        }
        ++v23;
      }
      if ( v23 >= *(__int16 *)(v22 + 38) && sub_353270(a4) && (*(_BYTE *)(v22 + 44) & 0x20) == 0 )
        v23 = -1;
      if ( v23 < *(__int16 *)(v22 + 38) )
      {
        ++v40;
        if ( v23 >= 0 )
        {
          if ( *((_DWORD *)a6 + 7) != 0 )
          {
            if ( v23 > 31 )
              v25 = -1;
            else
              v25 = 1 << v23;
            *(_DWORD *)(a1 + 436) |= v25;
          }
          else
          {
            v24 = 1 << v23;
            if ( v23 > 31 )
              v24 = -1;
            *(_DWORD *)(a1 + 432) |= v24;
          }
        }
        else
        {
          a6[1] = 100;
        }
        *((_WORD *)a6 + 16) = v23;
        *((_DWORD *)a6 + 11) = v22;
        v54 = 1;
LABEL_157:
        v42 = 1;
        goto LABEL_20;
      }
      if ( v40 != 0 )
        goto LABEL_157;
LABEL_95:
      if ( v7 != nullptr )
      {
        if ( sub_353270(a4) )
        {
          if ( (*(_BYTE *)(v7[4] + 44) & 0x20) != 0 )
          {
            v40 = 0;
            v42 = 1;
          }
          else
          {
            *((_WORD *)a6 + 16) = -1;
            a6[1] = 100;
            v42 = 1;
            v40 = 1;
          }
        }
        else
        {
          v40 = 0;
          v42 = 1;
        }
      }
      else
      {
        v40 = 0;
        v42 = 1;
      }
      goto LABEL_20;
    }
LABEL_19:
    if ( v40 == 0 && v42 == 1 )
      goto LABEL_95;
LABEL_20:
    v12 = *(int **)(v53 + 8);
    if ( v12 == nullptr || a3 != nullptr )
    {
      if ( v40 != 0 )
        goto LABEL_23;
    }
    else
    {
      v13 = 0;
      if ( v40 != 0 )
        goto LABEL_23;
      while ( v13 < *v12 )
      {
        v26 = *(char **)(v12[2] + 20 * v13 + 4);
        v41 = v26;
        if ( v26 != nullptr && sqlite3_stricmp(v26, a4) == 0 )
        {
          if ( (*(_BYTE *)(v53 + 28) & 1) == 0 && (*(_DWORD *)(*(_DWORD *)(v12[2] + 20 * v13) + 4) & 2) != 0 )
          {
            sub_360E94((int *)a1, (int)"misuse of aliased aggregate %s", v41);
            return 2;
          }
          sub_361324((int *)a1, v12 + 2, v13, a6, &unk_3FB8EA, v60);
          goto LABEL_135;
        }
        ++v13;
      }
    }
    v60 = (int (*)(void))((char *)v60 + 1);
    v53 = *(_DWORD *)(v53 + 16);
    v40 = 0;
LABEL_23:
    v8 = v40;
  }
  if ( v8 != 0 )
  {
LABEL_117:
    if ( v8 != 1 )
    {
      v28 = "ambiguous column name";
      goto LABEL_121;
    }
  }
  else
  {
    if ( a3 != nullptr )
    {
      v28 = "no such column";
    }
    else
    {
      if ( (*((_DWORD *)a6 + 1) & 0x40) != 0 )
      {
        *a6 = 97;
        *((_DWORD *)a6 + 11) = 0;
        return 1;
      }
      v28 = "no such column";
    }
LABEL_121:
    if ( v52 != nullptr )
    {
      sub_360E94((int *)a1, (int)"%s: %s.%s.%s", v28, (const char *)v52, (const char *)a3, (const char *)a4);
    }
    else if ( a3 != nullptr )
    {
      sub_360E94((int *)a1, (int)"%s: %s.%s", v28, (const char *)a3, (const char *)a4);
    }
    else
    {
      sub_360E94((int *)a1, (int)"%s: %s", v28, (const char *)a4);
    }
    *(_BYTE *)(a1 + 17) = 1;
    ++*(_DWORD *)(a5 + 24);
  }
  v29 = *((__int16 *)a6 + 16);
  if ( v29 >= 0 && v7 != nullptr )
  {
    if ( v29 > 63 )
      LOBYTE(v29) = 63;
    v30 = ((unsigned __int64)(1LL << v29) >> 32) | v7[15];
    v7[14] |= 1LL << v29;
    v7[15] = v30;
  }
  sub_35519A(v57, *((_DWORD *)a6 + 3));
  *((_DWORD *)a6 + 3) = 0;
  sub_35519A(v57, *((_DWORD *)a6 + 4));
  *((_DWORD *)a6 + 4) = 0;
  v31 = -102;
  if ( v54 != 0 )
    v31 = 62;
  *a6 = v31;
  result = 2;
  if ( v8 == 1 )
  {
LABEL_135:
    v32 = (unsigned __int8)*a6;
    if ( v32 != 24 )
    {
      v33 = *(_DWORD **)(v53 + 4);
      if ( *(_DWORD *)(*(_DWORD *)a1 + 276) != 0 )
      {
        v34 = sub_34F2A0(*(_DWORD *)a1, v51);
        if ( v34 >= 0 )
        {
          if ( v32 == 62 )
          {
            v36 = *(_DWORD *)(a1 + 416);
          }
          else
          {
            for ( k = 0; k < *v33; ++k )
            {
              v37 = &v33[18 * k];
              if ( *((_DWORD *)a6 + 7) == v37[12] )
              {
                v36 = v37[6];
                goto LABEL_146;
              }
            }
            v36 = 0;
          }
LABEL_146:
          if ( v36 != 0 )
          {
            v38 = *((__int16 *)a6 + 16);
            if ( v38 < 0 && (v38 = *(__int16 *)(v36 + 36)) < 0 )
              v39 = "ROWID";
            else
              v39 = *(const char **)(24 * v38 + *(_DWORD *)(v36 + 4));
            if ( sub_3643C8((int *)a1, *(const char **)v36, v39, v34) == 2 )
              *a6 = 101;
          }
        }
      }
    }
    while ( 1 )
    {
      ++*(_DWORD *)(a5 + 20);
      if ( a5 == v53 )
        break;
      a5 = *(_DWORD *)(a5 + 16);
    }
    return 1;
  }
  return result;
}


//======================================================================
// sub_364A10
// address: 0x00364A10   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_364A10(int *a1, _DWORD *a2, _DWORD *a3, _BYTE *a4)
{
  int v6; // r2
  int result; // r0
  int v8; // r5
  int v9; // r7
  int v10; // r2
  _DWORD *v11; // [sp+8h] [bp-Ch]

  v6 = *a1;
  if ( a3 == nullptr )
    return 0;
  result = 0;
  if ( *(_BYTE *)(v6 + 64) == 0 )
  {
    if ( *a3 <= *(_DWORD *)(v6 + 96) )
    {
      v8 = a3[2];
      v9 = *(unsigned __int8 *)(v6 + 64);
      v11 = (_DWORD *)*a2;
      while ( v9 < *a3 )
      {
        v10 = *(unsigned __int16 *)(v8 + 16);
        if ( *(_WORD *)(v8 + 16) != 0 )
        {
          if ( v10 > *v11 )
          {
            sub_360E94(a1, (int)"%r %s BY term out of range - should be between 1 and %d", v9 + 1, a4, *v11);
            return 1;
          }
          sub_361324(a1, v11 + 2, v10 - 1, *(_DWORD **)v8, a4, nullptr);
        }
        ++v9;
        v8 += 20;
      }
      return 0;
    }
    else
    {
      sub_360E94(a1, (int)"too many terms in %s BY clause", a4);
      return 1;
    }
  }
  return result;
}


//======================================================================
// sub_364AA0
// address: 0x00364AA0   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_364AA0(int **a1, int **a2, _DWORD *a3, _BYTE *a4)
{
  unsigned __int8 **v6; // r4
  _DWORD *v7; // r0
  int v8; // r2
  _DWORD *v9; // r7
  int v10; // r3
  int v11; // r7
  int v12; // r2
  unsigned __int8 *v14; // [sp+8h] [bp-24h]
  int i; // [sp+Ch] [bp-20h]
  int *v17; // [sp+14h] [bp-18h]
  int v19; // [sp+1Ch] [bp-10h]
  int v20; // [sp+24h] [bp-8h] BYREF

  if ( a3 == nullptr )
    return 0;
  v6 = (unsigned __int8 **)a3[2];
  v17 = *a1;
  v19 = **a2;
  for ( i = 0; ; ++i )
  {
    if ( i >= *a3 )
      return sub_364A10(v17, a2, a3, a4);
    v14 = *v6;
    v7 = sub_34E89C(*v6);
    v8 = (int)a4;
    v9 = v7;
    if ( *a4 != 71 )
    {
      v8 = *(unsigned __int8 *)v7;
      v10 = 0;
      if ( v8 == 27 )
        v10 = sub_3531B0(*a2, (int)v7);
      v20 = v10;
      if ( v10 > 0 )
        goto LABEL_11;
    }
    if ( sub_3531E4(v9, &v20, v8) != 0 )
      break;
    *((_WORD *)v6 + 8) = 0;
    if ( sub_361108((int)a1, v14) != 0 )
      return 1;
    v11 = 0;
    while ( v11 < **a2 )
    {
      v12 = 20 * v11++;
      if ( sub_354228(v14, *(unsigned __int8 **)(v12 + (*a2)[2]), -1) == 0 )
        *((_WORD *)v6 + 8) = v11;
    }
LABEL_17:
    v6 += 5;
  }
  LOWORD(v10) = v20;
  if ( (unsigned int)(v20 - 1) <= 0xFFFE )
  {
LABEL_11:
    *((_WORD *)v6 + 8) = v10;
    goto LABEL_17;
  }
  sub_360E94(v17, (int)"%r %s BY term out of range - should be between 1 and %d", i + 1, a4, v19);
  return 1;
}


//======================================================================
// sub_364B80
// address: 0x00364B80   size: 0x452 (1106 bytes)
//======================================================================
int __fastcall sub_364B80(int a1, int a2)
{
  __int16 v2; // r2
  int v4; // r7
  int result; // r0
  int v6; // r4
  int *v7; // r3
  int v8; // r4
  int *v9; // r2
  int *v10; // r6
  int *v11; // r3
  int v12; // r1
  int v13; // r3
  int *v14; // r3
  int v15; // r1
  int v16; // r5
  int *v17; // r6
  _DWORD *v18; // r6
  _DWORD *v19; // r1
  _BYTE *v20; // r5
  int v21; // r3
  int *v22; // r5
  int v23; // r3
  int v24; // r3
  _DWORD **v25; // r6
  int v26; // r2
  int v27; // r1
  _BYTE *v28; // r0
  int v29; // r0
  int v30; // r4
  int v31; // r0
  _WORD *v32; // r0
  int v33; // r2
  char v34; // r3
  int v35; // r2
  int v36; // r0
  int v37; // [sp+1Ch] [bp-78h]
  int v38; // [sp+1Ch] [bp-78h]
  int *v39; // [sp+20h] [bp-74h]
  int i; // [sp+24h] [bp-70h]
  _DWORD *v41; // [sp+24h] [bp-70h]
  int *v42; // [sp+28h] [bp-6Ch]
  int v43; // [sp+28h] [bp-6Ch]
  _BOOL4 v44; // [sp+2Ch] [bp-68h]
  int j; // [sp+2Ch] [bp-68h]
  int v46; // [sp+30h] [bp-64h]
  unsigned __int8 *v47; // [sp+30h] [bp-64h]
  _BYTE *v48; // [sp+34h] [bp-60h]
  int v49; // [sp+34h] [bp-60h]
  int v50; // [sp+38h] [bp-5Ch]
  int *v51; // [sp+38h] [bp-5Ch]
  _DWORD *v52; // [sp+3Ch] [bp-58h]
  int v53; // [sp+3Ch] [bp-58h]
  int *v54; // [sp+40h] [bp-54h]
  char v55; // [sp+44h] [bp-50h]
  int v56; // [sp+4Ch] [bp-48h] BYREF
  int *v57[8]; // [sp+50h] [bp-44h] BYREF
  _DWORD v58[9]; // [sp+70h] [bp-24h] BYREF

  v2 = *(_WORD *)(a2 + 6);
  v4 = a2;
  result = 1;
  if ( (v2 & 2) == 0 )
  {
    v6 = *(_DWORD *)(a1 + 20);
    v7 = *(int **)(a1 + 12);
    v42 = (int *)v6;
    v39 = v7;
    v50 = *v7;
    if ( (v2 & 0x10) != 0 )
    {
      v8 = a2;
      v44 = *(_DWORD *)(a2 + 60) != 0;
      while ( 1 )
      {
        *(_WORD *)(v8 + 6) |= 2u;
        j_memset(v57, 0, sizeof(v57));
        v57[0] = v39;
        if ( sub_361108((int)v57, *(_DWORD **)(v8 + 68)) != 0 || sub_361108((int)v57, *(_DWORD **)(v8 + 72)) != 0 )
          break;
        for ( i = 0; ; ++i )
        {
          v9 = *(int **)(v8 + 40);
          if ( i >= *v9 )
            break;
          v10 = &v9[18 * i + 2];
          if ( v10[5] != 0 )
          {
            v11 = v42;
            v46 = v39[124];
            v37 = 0;
            while ( v11 != nullptr )
            {
              v12 = v11[5];
              v11 = (int *)v11[4];
              v37 += v12;
            }
            v13 = v10[2];
            if ( v13 != 0 )
              v39[124] = v13;
            v52 = (_DWORD *)v10[5];
            j_memset(v58, 0, 0x18u);
            v58[0] = sub_364FD8;
            v58[3] = v39;
            v58[1] = sub_364B80;
            v58[5] = v42;
            sub_352EFA(v58, v52);
            v39[124] = v46;
            if ( v39[17] != 0 || *(_BYTE *)(v50 + 64) != 0 )
              return 2;
            v14 = v42;
            while ( v14 != nullptr )
            {
              v15 = v14[5];
              v14 = (int *)v14[4];
              v37 -= v15;
            }
            *((_BYTE *)v10 + 37) = *((_BYTE *)v10 + 37) & 0xFD | (2 * (v37 != 0));
          }
        }
        LOBYTE(v57[7]) = 1;
        v57[1] = v9;
        v16 = 0;
        v57[4] = v42;
        v17 = *(int **)v8;
        while ( v16 < *v17 )
        {
          if ( sub_361108((int)v57, *(_DWORD **)(20 * v16 + v17[2])) != 0 )
            return 2;
          ++v16;
        }
        v18 = *(_DWORD **)(v8 + 48);
        if ( v18 != nullptr || ((int)v57[7] & 2) != 0 )
          *(_WORD *)(v8 + 6) |= 4u;
        else
          LOBYTE(v57[7]) &= ~1u;
        v19 = *(_DWORD **)(v8 + 52);
        if ( v19 != nullptr && v18 == nullptr )
        {
          sub_360E94(v39, (int)"a GROUP BY clause is required before HAVING");
          return 2;
        }
        v57[2] = *(int **)v8;
        if ( sub_361108((int)v57, v19) != 0 )
          return 2;
        if ( sub_361108((int)v57, *(_DWORD **)(v8 + 44)) != 0 )
          return 2;
        v57[4] = nullptr;
        LOBYTE(v57[7]) |= 1u;
        if ( !v44 && sub_364AA0(v57, (int **)v8, *(_DWORD **)(v8 + 56), "ORDER") != 0 )
          return 2;
        v20 = (_BYTE *)(v50 + 64);
        if ( *(_BYTE *)(v50 + 64) != 0 )
          return 2;
        if ( v18 != nullptr )
        {
          if ( sub_364AA0(v57, (int **)v8, v18, "GROUP") != 0 )
            return 2;
          v21 = (unsigned __int8)*v20;
          if ( *v20 != 0 )
            return 2;
          while ( v21 < *v18 )
          {
            if ( (*(_DWORD *)(*(_DWORD *)(v18[2] + 20 * v21) + 4) & 2) != 0 )
            {
              sub_360E94(v39, (int)"aggregate functions are not allowed in the GROUP BY clause");
              return 2;
            }
            ++v21;
          }
        }
        v8 = *(_DWORD *)(v8 + 60);
        if ( v8 == 0 )
        {
          result = 1;
          if ( !v44 )
            return result;
          v22 = *(int **)(v4 + 56);
          if ( v22 != nullptr )
          {
            v43 = *v39;
            if ( *v22 > *(_DWORD *)(*v39 + 96) )
            {
              sub_360E94(v39, (int)"too many terms in ORDER BY clause");
              return 2;
            }
            while ( v8 < *v22 )
            {
              v23 = 20 * v8++;
              *(_BYTE *)(v22[2] + v23 + 13) &= ~1u;
            }
            *(_DWORD *)(v4 + 64) = 0;
            while ( 1 )
            {
              v24 = *(_DWORD *)(v4 + 60);
              if ( v24 == 0 )
                break;
              *(_DWORD *)(v24 + 64) = v4;
              v4 = *(_DWORD *)(v4 + 60);
            }
            do
            {
              v25 = (_DWORD **)v22[2];
              v51 = *(int **)v4;
              v53 = 0;
              for ( j = 0; j < *v22; ++j )
              {
                v56 = -1;
                if ( (*((_BYTE *)v25 + 13) & 1) == 0 )
                {
                  v41 = sub_34E89C(*v25);
                  v38 = sub_3531E4(v41, &v56, v26);
                  if ( v38 != 0 )
                  {
                    if ( v56 <= 0 || v56 > *v51 )
                    {
                      sub_360E94(
                        v39,
                        (int)"%r %s BY term out of range - should be between 1 and %d",
                        j + 1,
                        "ORDER",
                        *v51);
                      return 2;
                    }
                  }
                  else
                  {
                    if ( *(_BYTE *)v41 == 27 )
                      v38 = sub_3531B0(v51, (int)v41);
                    v56 = v38;
                    if ( v38 == 0 )
                    {
                      v47 = (unsigned __int8 *)sub_3568BC(v43, v41, 0);
                      if ( *(_BYTE *)(v43 + 64) == 0 )
                      {
                        v54 = *(int **)v4;
                        j_memset(v58, 0, 0x20u);
                        v58[0] = v39;
                        v27 = *(_DWORD *)(v4 + 40);
                        v58[2] = v54;
                        LOBYTE(v58[7]) = 1;
                        v58[1] = v27;
                        v28 = (_BYTE *)(*v39 + 67);
                        LOBYTE(v27) = *v28;
                        v48 = v28;
                        *v28 = 1;
                        v55 = v27;
                        v29 = sub_361108((int)v58, v47);
                        *v48 = v55;
                        if ( v29 == 0 )
                        {
                          v49 = *v54;
                          v30 = 0;
                          while ( v30 < v49 )
                          {
                            v31 = sub_354228(*(unsigned __int8 **)(20 * v30++ + v54[2]), v47, -1);
                            if ( v31 <= 1 )
                            {
                              v38 = v30;
                              break;
                            }
                          }
                        }
                        v56 = v38;
                      }
                      sub_35519A((_DWORD *)v43, (int)v47);
                    }
                  }
                  if ( v56 <= 0 )
                  {
                    v53 = 1;
                  }
                  else
                  {
                    v32 = sub_351B26(v43, 132, nullptr);
                    if ( v32 == nullptr )
                      return 2;
                    v33 = v56;
                    *((_DWORD *)v32 + 1) |= 0x400u;
                    *((_DWORD *)v32 + 2) = v33;
                    if ( *v25 == v41 )
                      *v25 = v32;
                    else
                      (*v25)[3] = v32;
                    sub_35519A((_DWORD *)v43, (int)v41);
                    v34 = *((_BYTE *)v25 + 13) | 1;
                    *((_WORD *)v25 + 8) = v56;
                    *((_BYTE *)v25 + 13) = v34;
                  }
                }
                v25 += 5;
              }
              v4 = *(_DWORD *)(v4 + 64);
            }
            while ( v4 != 0 && v53 != 0 );
            v35 = 0;
            while ( v35 < *v22 )
            {
              v36 = 20 * v35++;
              if ( (*(_BYTE *)(v22[2] + v36 + 13) & 1) == 0 )
              {
                sub_360E94(v39, (int)"%r ORDER BY term does not match any column in the result set", v35);
                return 2;
              }
            }
          }
          return 1;
        }
      }
    }
    else
    {
      sub_3530DC(v7, a2, v6);
      if ( v39[17] == 0 && *(_BYTE *)(v50 + 64) == 0 )
        return 1;
    }
    return 2;
  }
  return result;
}


//======================================================================
// sub_364FD8
// address: 0x00364FD8   size: 0x356 (854 bytes)
//======================================================================
int __fastcall sub_364FD8(int (**a1)(void), unsigned __int8 *a2)
{
  int v2; // r7
  int v3; // r0
  int *v5; // r4
  unsigned int v6; // r3
  int result; // r0
  int v8; // r3
  int v9; // r1
  unsigned __int8 *v10; // r5
  unsigned __int8 *v11; // r3
  unsigned __int8 *v12; // r1
  int *v13; // r2
  unsigned __int8 v14; // r5
  int v15; // r5
  unsigned __int8 *v16; // r1
  int v17; // r0
  unsigned int v18; // r0
  int v19; // r0
  int v20; // r5
  int v21; // r4
  int *v22; // r1
  _BYTE *v23; // r3
  char *v24; // [sp+10h] [bp-4Ch]
  unsigned __int8 *v25; // [sp+14h] [bp-48h]
  int v26; // [sp+18h] [bp-44h]
  _BYTE *v27; // [sp+18h] [bp-44h]
  int *v28; // [sp+20h] [bp-3Ch]
  int v29; // [sp+20h] [bp-3Ch]
  size_t v30; // [sp+24h] [bp-38h]
  int v31; // [sp+28h] [bp-34h]
  int v33; // [sp+34h] [bp-28h] BYREF
  int v34; // [sp+38h] [bp-24h]
  int v35; // [sp+3Ch] [bp-20h]
  double v36[3]; // [sp+40h] [bp-1Ch] BYREF

  v2 = (int)a1[5];
  v3 = *((_DWORD *)a2 + 1);
  v5 = *(int **)v2;
  if ( (v3 & 4) != 0 )
    return 1;
  *((_DWORD *)a2 + 1) = v3 | 4;
  v6 = *a2;
  if ( v6 == 119 )
  {
LABEL_39:
    if ( (v3 & 0x800) != 0 )
    {
      v20 = *(_DWORD *)(v2 + 20);
      if ( (*(_BYTE *)(v2 + 28) & 4) != 0 )
        sub_360E94(v5, (int)"%s prohibited in CHECK constraints", "subqueries");
      if ( (*(_BYTE *)(v2 + 28) & 0x10) != 0 )
        sub_360E94(v5, (int)"%s prohibited in partial index WHERE clauses", "subqueries");
      sub_352EFA(a1, *((_DWORD **)a2 + 5));
      if ( v20 != *(_DWORD *)(v2 + 20) )
        *((_DWORD *)a2 + 1) |= 0x20u;
    }
    goto LABEL_50;
  }
  if ( v6 <= 0x77 )
  {
    if ( v6 == 27 )
      return sub_36445C((int)v5, nullptr, nullptr, *((unsigned __int8 **)a2 + 2), v2, (char *)a2);
    if ( v6 != 75 && v6 != 20 )
      goto LABEL_50;
    goto LABEL_39;
  }
  if ( v6 == 135 )
  {
    if ( (*(_BYTE *)(v2 + 28) & 4) != 0 )
      sub_360E94(v5, (int)"%s prohibited in CHECK constraints", "parameters");
    if ( (*(_BYTE *)(v2 + 28) & 0x10) != 0 )
      sub_360E94(v5, (int)"%s prohibited in partial index WHERE clauses", "parameters");
    goto LABEL_50;
  }
  if ( v6 == 153 )
  {
    v13 = *((int **)a2 + 5);
    v28 = v13;
    if ( v13 != nullptr )
      v26 = *v13;
    else
      v26 = 0;
    v14 = *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(*v5 + 16) + 12) + 77);
    if ( (*(_BYTE *)(v2 + 28) & 0x10) != 0 )
      sub_360E94(v5, (int)"%s prohibited in partial index WHERE clauses", "functions");
    v25 = *((unsigned __int8 **)a2 + 2);
    v30 = sub_34CF50((unsigned int)v25);
    v24 = sub_3534B0(*v5, v25, v30, v26, v14, 0);
    if ( v24 != nullptr )
    {
      v15 = *((_DWORD *)v24 + 3) == 0;
      v31 = 0;
      if ( (*((_WORD *)v24 + 1) & 0x400) != 0 )
      {
        *((_DWORD *)a2 + 1) |= 0x41000u;
        if ( v26 == 2 )
        {
          v16 = *(unsigned __int8 **)(v28[2] + 20);
          v36[0] = -1.0;
          if ( *v16 == 133
            && (v27 = *((_BYTE **)v16 + 2),
                v18 = sub_34CF50((unsigned int)v27),
                sub_34D098(v27, v36, v18, 1),
                v36[0] <= 1.0) )
          {
            v17 = (int)(v36[0] * 1000.0);
          }
          else
          {
            v17 = -1;
          }
          *((_DWORD *)a2 + 7) = v17;
          v31 = 0;
          if ( v17 < 0 )
          {
            sub_360E94(v5, (int)"second argument to likelihood() must be a constant between 0.0 and 1.0");
            ++*(_DWORD *)(v2 + 24);
          }
        }
        else
        {
          *((_DWORD *)a2 + 7) = 62;
        }
      }
    }
    else
    {
      v24 = sub_3534B0(*v5, v25, v30, -2, v14, 0);
      if ( v24 == nullptr )
      {
        v23 = (_BYTE *)(*v5 + 137);
        v15 = (unsigned __int8)*v23;
        if ( *v23 == 0 )
        {
          sub_360E94(v5, (int)"no such function: %.*s", v30, (const char *)v25);
          ++*(_DWORD *)(v2 + 24);
          goto LABEL_62;
        }
        goto LABEL_72;
      }
      v15 = 0;
      v31 = 1;
    }
    v19 = sub_360F08((int)v5);
    if ( v19 != 0 )
    {
      if ( v19 == 1 )
      {
        sub_360E94(v5, (int)"not authorized to use function: %s", *((const char **)v24 + 6));
        ++*(_DWORD *)(v2 + 24);
      }
      *a2 = 101;
      return 1;
    }
    if ( (*((_WORD *)v24 + 1) & 0x800) != 0 )
      *((_DWORD *)a2 + 1) |= 0x80000u;
    if ( v15 == 0 || (v15 = 1, (*(_BYTE *)(v2 + 28) & 1) != 0) )
    {
      if ( v31 != 0 )
      {
        sub_360E94(v5, (int)"wrong number of arguments to function %.*s()", v30, (const char *)v25);
        ++*(_DWORD *)(v2 + 24);
      }
      if ( v15 != 0 )
      {
        v15 = 1;
        *(_BYTE *)(v2 + 28) &= ~1u;
      }
LABEL_62:
      sub_353022(a1, v28);
      if ( v15 != 0 )
      {
        *a2 = -101;
        v21 = v2;
        a2[38] = 0;
        while ( 1 )
        {
          v29 = *(_DWORD *)(v21 + 4);
          j_memset(v36, 0, sizeof(v36));
          LODWORD(v36[0]) = sub_3533D8;
          v22 = *((int **)a2 + 5);
          HIDWORD(v36[2]) = &v33;
          v33 = v29;
          v34 = 0;
          v35 = 0;
          sub_353022((int (**)(void))v36, v22);
          if ( v34 > 0 || v35 == 0 )
            break;
          ++a2[38];
          v21 = *(_DWORD *)(v21 + 16);
          if ( v21 == 0 )
            goto LABEL_69;
        }
        *(_BYTE *)(v21 + 28) |= 2u;
LABEL_69:
        *(_BYTE *)(v2 + 28) |= 1u;
        return 1;
      }
      return 1;
    }
    sub_360E94(v5, (int)"misuse of aggregate function %.*s()", v30, (const char *)v25);
    ++*(_DWORD *)(v2 + 24);
LABEL_72:
    v15 = 0;
    goto LABEL_62;
  }
  if ( *a2 != 122 )
  {
LABEL_50:
    result = v5[17];
    if ( result != 0 || *(_BYTE *)(*v5 + 64) != 0 )
      return 2;
    return result;
  }
  v8 = *((_DWORD *)a2 + 4);
  v9 = *((_DWORD *)a2 + 3);
  if ( *(_BYTE *)v8 == 27 )
  {
    v10 = *(unsigned __int8 **)(v9 + 8);
    v11 = *(unsigned __int8 **)(v8 + 8);
    v12 = nullptr;
  }
  else
  {
    v12 = *(unsigned __int8 **)(v9 + 8);
    v10 = *(unsigned __int8 **)(*(_DWORD *)(v8 + 12) + 8);
    v11 = *(unsigned __int8 **)(*(_DWORD *)(v8 + 16) + 8);
  }
  return sub_36445C((int)v5, v12, v10, v11, v2, (char *)a2);
}


//======================================================================
// sub_365388
// address: 0x00365388   size: 0x2A (42 bytes)
//======================================================================
unsigned __int64 sub_365388(int *a1, _DWORD *a2, int a3, ...)
{
  int v5; // r6
  unsigned __int64 v7; // [sp+0h] [bp-8h]
  va_list varg_r3; // [sp+1Ch] [bp+14h] BYREF

  va_start(varg_r3, a3);
  v7 = __PAIR64__((void **)varg_r3, (unsigned int)a1);
  v5 = sub_3601F0((int)a2, a3, (void **)varg_r3);
  sub_354940(a2, (_DWORD *)*a1);
  *a1 = v5;
  return v7;
}


//======================================================================
// sub_3653B4
// address: 0x003653B4   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_3653B4(int *a1, int a2)
{
  int v3; // r1

  v3 = *a1;
  if ( a2 != 0 )
  {
    if ( (__int64)(*(_QWORD *)(v3 + 504) + *(_QWORD *)(v3 + 496)) <= 0 )
      return 0;
LABEL_5:
    a1[20] = 787;
    *((_BYTE *)a1 + 86) = 2;
    sub_365388(a1 + 11, (_DWORD *)v3, (int)"FOREIGN KEY constraint failed");
    return 1;
  }
  if ( *((__int64 *)a1 + 18) > 0 )
    goto LABEL_5;
  return 0;
}


//======================================================================
// sub_36541C
// address: 0x0036541C   size: 0x18 (24 bytes)
//======================================================================
int sub_36541C(int a1, const char *a2, ...)
{
  va_list varg_r2; // [sp+10h] [bp+8h] BYREF

  va_start(varg_r2, a2);
  return sub_3601F0(a1, (int)a2, (void **)varg_r2);
}


//======================================================================
// sub_365434
// address: 0x00365434   size: 0x1D8 (472 bytes)
//======================================================================
int __fastcall sub_365434(
        int a1,
        const char **a2,
        _DWORD *a3,
        int (__fastcall *a4)(int, int, const char *, const char *, _DWORD *, const char **),
        int *a5)
{
  const char *v6; // r2
  int v8; // r7
  _DWORD *v9; // r0
  _DWORD *v10; // r6
  int v11; // r1
  _DWORD *v12; // r3
  const char **v13; // r3
  int v14; // r7
  unsigned __int8 *v15; // r6
  int v16; // r3
  unsigned __int8 *i; // r7
  int v18; // r0
  signed int v19; // r2
  unsigned __int8 *v20; // r0
  int v23; // [sp+10h] [bp-34h]
  signed int v24; // [sp+14h] [bp-30h]
  const char *v25; // [sp+1Ch] [bp-28h]
  int v26; // [sp+1Ch] [bp-28h]
  char *v27; // [sp+20h] [bp-24h]
  const char *v28; // [sp+24h] [bp-20h]
  int v29; // [sp+24h] [bp-20h]
  int v30; // [sp+28h] [bp-1Ch]
  const char *v32; // [sp+34h] [bp-10h] BYREF
  _DWORD *v33; // [sp+38h] [bp-Ch] BYREF
  const char **v34; // [sp+3Ch] [bp-8h]

  v25 = a2[14];
  v6 = *a2;
  v28 = a2[13];
  v32 = nullptr;
  v8 = 7;
  v27 = (char *)sub_36541C(a1, "%s", v6);
  if ( v27 != nullptr )
  {
    v9 = sub_351894(a1, 0x1Cu);
    v10 = v9;
    if ( v9 == nullptr )
    {
      sub_354940((_DWORD *)a1, v27);
      return v8;
    }
    *v9 = a1;
    v9[1] = a3;
    *((_DWORD *)a2[14] + 1) = *(_DWORD *)(16 * sub_34F2A0(a1, (int)a2[17]) + *(_DWORD *)(a1 + 16));
    v30 = *(_DWORD *)(a1 + 316);
    *(_DWORD *)(a1 + 316) = &v33;
    v11 = a3[2];
    v34 = a2;
    v33 = v10;
    v26 = a4(a1, v11, v28, v25, v10 + 2, &v32);
    *(_DWORD *)(a1 + 316) = v30;
    if ( v26 == 7 )
    {
      *(_BYTE *)(a1 + 64) = 1;
    }
    else if ( v26 == 0 )
    {
      v12 = (_DWORD *)v10[2];
      if ( v12 != nullptr )
      {
        *v12 = *a3;
        v13 = v34;
        v10[3] = 1;
        if ( v13 != nullptr )
        {
          *a5 = sub_36541C(a1, "vtable constructor did not declare schema: %s", *a2);
          sub_354E22(v10);
          v26 = 1;
        }
        else
        {
          v14 = 0;
          v10[6] = a2[15];
          a2[15] = (const char *)v10;
          while ( 1 )
          {
            v23 = v14;
            if ( v14 >= *((__int16 *)a2 + 19) )
              break;
            v15 = *(unsigned __int8 **)&a2[1][24 * v14 + 12];
            v29 = 24 * v14;
            if ( v15 != nullptr )
            {
              v24 = sub_34CF50((unsigned int)v15);
              if ( sqlite3_strnicmp("hidden", v15, 6) != 0 || (v16 = v15[6] & 0xDF) != 0 )
              {
                for ( i = v15; i - v15 < v24; ++i )
                {
                  if ( sqlite3_strnicmp(" hidden", i, 7) == 0 && (i[7] & 0xDF) == 0 )
                  {
                    v16 = i - v15 + 1;
                    goto LABEL_25;
                  }
                }
              }
              else
              {
LABEL_25:
                if ( v16 < v24 )
                {
                  v18 = 7 - (v15[v16 + 6] == 0);
                  v19 = v16 + v18;
                  v20 = &v15[-v18];
                  while ( v19 <= v24 )
                  {
                    v20[v19] = v15[v19];
                    ++v19;
                  }
                  if ( v15[v16] == 0 && v16 > 0 )
                    v15[v16 - 1] = 0;
                  a2[1][v29 + 23] |= 2u;
                }
              }
            }
            v14 = v23 + 1;
          }
        }
      }
      goto LABEL_34;
    }
    if ( v32 != nullptr )
    {
      *a5 = sub_36541C(a1, "%s", v32);
      sqlite3_free(v32);
    }
    else
    {
      *a5 = sub_36541C(a1, "vtable constructor failed: %s", v27);
    }
    sub_354940((_DWORD *)a1, v10);
LABEL_34:
    sub_354940((_DWORD *)a1, v27);
    return v26;
  }
  return v8;
}


//======================================================================
// sub_365624
// address: 0x00365624   size: 0x18A (394 bytes)
//======================================================================
int __fastcall sub_365624(int a1, int *a2, _WORD *a3, _DWORD *a4)
{
  int v6; // r1
  int v7; // r4
  _DWORD *v8; // r0
  void *v9; // r1
  char *v10; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r3
  const char *v14; // r2
  int v15; // r7
  char *v16; // r4
  int i; // r3
  int v18; // r7
  int result; // r0
  int j; // r4
  int v21; // r3
  int v22; // [sp+4h] [bp-20h]
  int v23; // [sp+8h] [bp-1Ch]
  _DWORD *v24; // [sp+Ch] [bp-18h]
  int v25; // [sp+10h] [bp-14h]
  unsigned int v26; // [sp+14h] [bp-10h]

  if ( a2 != nullptr )
  {
    v25 = *a2;
    v24 = sub_351894(a1, 24 * *a2);
  }
  else
  {
    v25 = 0;
    v24 = nullptr;
  }
  *a3 = v25;
  v6 = 0;
  *a4 = v24;
  while ( 1 )
  {
    v23 = v6;
    if ( v6 >= v25 )
      break;
    v7 = a2[2] + 20 * v6;
    v8 = sub_34E89C(*(_DWORD **)v7);
    v9 = *(void **)(v7 + 4);
    if ( v9 != nullptr )
    {
      v10 = (char *)sub_351BC8(a1, v9);
      goto LABEL_20;
    }
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)v8;
      if ( v11 != 122 )
        break;
      v8 = (_DWORD *)v8[4];
    }
    if ( v11 != 154 )
    {
      if ( v11 == 27 )
      {
        v10 = (char *)sub_36541C(a1, "%s", v8[2]);
        goto LABEL_20;
      }
LABEL_19:
      v10 = (char *)sub_36541C(a1, "%s", *(_DWORD *)(v7 + 8));
      goto LABEL_20;
    }
    v12 = v8[11];
    if ( v12 == 0 )
      goto LABEL_19;
    v13 = *((__int16 *)v8 + 16);
    if ( v13 < 0 && (v13 = *(__int16 *)(v12 + 36)) < 0 )
      v14 = "rowid";
    else
      v14 = *(const char **)(24 * v13 + *(_DWORD *)(v12 + 4));
    v10 = (char *)sub_36541C(a1, "%s", v14);
LABEL_20:
    v15 = *(unsigned __int8 *)(a1 + 64);
    v16 = v10;
    if ( *(_BYTE *)(a1 + 64) != 0 )
    {
      sub_354940((_DWORD *)a1, v10);
      break;
    }
    v22 = *(unsigned __int8 *)(a1 + 64);
    v26 = sub_34CF50((unsigned int)v10);
    while ( v15 < v23 )
    {
      if ( sqlite3_stricmp((_BYTE *)v24[6 * v15], (unsigned __int8 *)v16) == 0 )
      {
        for ( i = v26 - 1; i > 1; --i )
        {
          if ( (byte_44AA64[(unsigned __int8)v16[i]] & 4) == 0 )
            goto LABEL_30;
        }
        if ( i >= 0 )
        {
LABEL_30:
          if ( v16[i] == 58 )
            v26 = i;
        }
        v16[v26] = 0;
        v18 = sub_36541C(a1, "%s:%d", v16, ++v22);
        sub_354940((_DWORD *)a1, v16);
        v16 = (char *)v18;
        if ( v18 == 0 )
          break;
        v15 = -1;
      }
      ++v15;
    }
    v6 = v23 + 1;
    v24[6 * v23] = v16;
  }
  result = *(unsigned __int8 *)(a1 + 64);
  if ( *(_BYTE *)(a1 + 64) != 0 )
  {
    for ( j = 0; j < v23; ++j )
    {
      v21 = 6 * j;
      sub_354940((_DWORD *)a1, (_DWORD *)v24[v21]);
    }
    sub_354940((_DWORD *)a1, v24);
    *a4 = 0;
    *a3 = 0;
    return 7;
  }
  return result;
}


//======================================================================
// sub_3657C8
// address: 0x003657C8   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_3657C8(int *a1, int a2)
{
  int v2; // r5
  int v4; // r4
  int v5; // r6
  __int64 v6; // r0
  _WORD *v7; // r0
  int v8; // r4

  v2 = *a1;
  v4 = *(_DWORD *)(*a1 + 24);
  v5 = a2;
  *(_DWORD *)(*a1 + 24) = v4 & 0xFFFFFF9F | 0x40;
  sub_3530DC(a1, a2, 0);
  if ( a1[17] != 0 )
    goto LABEL_2;
  while ( *(_DWORD *)(v5 + 60) != 0 )
    v5 = *(_DWORD *)(v5 + 60);
  *(_DWORD *)(v2 + 24) = v4;
  v7 = sub_351894(v2, 0x4Cu);
  v8 = (int)v7;
  if ( v7 == nullptr )
  {
LABEL_2:
    HIDWORD(v6) = 0;
  }
  else
  {
    v7[20] = 1;
    *(_DWORD *)v7 = 0;
    *((_DWORD *)v7 + 7) = 0x100000;
    sub_365624(*a1, *(int **)v5, v7 + 19, (_DWORD *)v7 + 1);
    sub_363050(a1, v8, (int *)v5);
    *(_WORD *)(v8 + 36) = -1;
    HIDWORD(v6) = v8;
    if ( *(_BYTE *)(v2 + 64) != 0 )
    {
      LODWORD(v6) = v2;
      sub_354F8A(v6);
      HIDWORD(v6) = 0;
    }
  }
  return HIDWORD(v6);
}


//======================================================================
// sub_365850
// address: 0x00365850   size: 0x12E (302 bytes)
//======================================================================
int __fastcall sub_365850(int *a1, _DWORD *a2)
{
  int result; // r0
  unsigned __int8 *v5; // r7
  unsigned int v6; // r0
  int **v7; // r0
  int v8; // r6
  int v9; // r7
  int v10; // r6
  int v11; // r2
  __int64 v12; // r0
  _BYTE *v13; // [sp+8h] [bp-24h]
  int v14; // [sp+Ch] [bp-20h]
  char v15; // [sp+14h] [bp-18h]
  int v16; // [sp+18h] [bp-14h]
  int v17; // [sp+1Ch] [bp-10h]
  char *v18; // [sp+24h] [bp-8h] BYREF

  v13 = a2 + 11;
  v14 = *a1;
  if ( (a2[11] & 0x10) != 0 && sub_353624(v14, (_DWORD *)a2[15]) == nullptr )
  {
    v5 = *(unsigned __int8 **)a2[14];
    v6 = sub_34CF50((unsigned int)v5);
    v7 = sub_34DA7E((_DWORD *)(v14 + 300), v5, v6);
    if ( v7 == nullptr )
    {
      sub_360E94(a1, (int)"no such module: %s", *(_DWORD *)a2[14]);
      return 1;
    }
    v18 = nullptr;
    v8 = sub_365434(
           v14,
           (const char **)a2,
           v7,
           (int (__fastcall *)(int, int, const char *, const char *, _DWORD *, const char **))(*v7)[2],
           (int *)&v18);
    if ( v8 != 0 )
      sub_360E94(a1, (int)"%s", v18);
    sub_354940((_DWORD *)v14, v18);
    if ( v8 != 0 )
      return 1;
  }
  result = 0;
  if ( (*v13 & 0x10) == 0 )
  {
    v9 = *((unsigned __int16 *)a2 + 19);
    if ( (__int16)v9 <= 0 )
    {
      if ( *((_WORD *)a2 + 19) != 0 )
      {
        sub_360E94(a1, (int)"view %s is circularly defined", *a2);
        return 1;
      }
      v10 = sub_356ABC((_DWORD *)v14, a2[3], 0);
      if ( v10 == 0 )
        return 1;
      v15 = *(_BYTE *)(v14 + 242);
      v16 = a1[18];
      sub_34EEB8((int)a1, *(_DWORD **)(v10 + 40));
      *((_WORD *)a2 + 19) = -1;
      *(_BYTE *)(v14 + 242) = 0;
      v11 = *(_DWORD *)(v14 + 276);
      *(_DWORD *)(v14 + 276) = 0;
      v17 = v11;
      LODWORD(v12) = sub_3657C8(a1, v10);
      HIDWORD(v12) = v12;
      *(_DWORD *)(v14 + 276) = v17;
      *(_BYTE *)(v14 + 242) = v15;
      a1[18] = v16;
      if ( (_DWORD)v12 != 0 )
      {
        *((_WORD *)a2 + 19) = *(_WORD *)(v12 + 38);
        a2[1] = *(_DWORD *)(v12 + 4);
        *(_WORD *)(v12 + 38) = 0;
        *(_DWORD *)(v12 + 4) = 0;
        LODWORD(v12) = v14;
        sub_354F8A(v12);
        *(_WORD *)(a2[17] + 78) |= 2u;
      }
      else
      {
        *((_WORD *)a2 + 19) = 0;
        v9 = 1;
      }
      sub_355184((_DWORD *)v14, (_DWORD *)v10);
      return v9;
    }
  }
  return result;
}


//======================================================================
// sub_36598C
// address: 0x0036598C   size: 0x1D8 (472 bytes)
//======================================================================
int __fastcall sub_36598C(int a1, int *a2, int *a3)
{
  int result; // r0
  int v6; // r7
  int v7; // r4
  int v8; // r2
  char *v9; // r3
  int v10; // r2
  int v11; // r3
  int j; // r3
  int v13; // r0
  void *v14; // r1
  char *v15; // r0
  int v16; // r7
  int i; // r4
  unsigned __int8 *v18; // r1
  unsigned __int8 *v19; // [sp+10h] [bp-54h]
  int v20; // [sp+14h] [bp-50h]
  int v21; // [sp+1Ch] [bp-48h]
  char *v22; // [sp+1Ch] [bp-48h]
  _BOOL4 v24; // [sp+28h] [bp-3Ch]
  _BOOL4 v25; // [sp+2Ch] [bp-38h]
  _BYTE *v26; // [sp+34h] [bp-30h] BYREF
  _BYTE *v27; // [sp+38h] [bp-2Ch] BYREF
  char *v28; // [sp+3Ch] [bp-28h] BYREF
  int *v29[9]; // [sp+40h] [bp-24h] BYREF

  result = *(_DWORD *)(a1 + 8);
  v21 = result;
  v6 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 454) == 0 && *(_BYTE *)(a1 + 16) == 0 && result != 0 )
  {
    v7 = *(unsigned __int8 *)(v6 + 64);
    if ( *(_BYTE *)(v6 + 64) == 0 )
    {
      *(_BYTE *)(a1 + 16) = 1;
      v24 = (*(_DWORD *)(v6 + 24) & 0x20) != 0;
      v25 = (*(_DWORD *)(v6 + 24) & 0x40) != 0;
      sub_3559A0(result, *a3);
      while ( 1 )
      {
        if ( v7 >= *a3 )
        {
          result = (int)a2;
          v16 = *(_DWORD *)(a1 + 8);
          v29[0] = (int *)a1;
          v29[1] = a2;
          for ( i = 0; i < *a3; ++i )
          {
            v18 = *(unsigned __int8 **)(20 * i + a3[2]);
            v26 = nullptr;
            v27 = nullptr;
            v28 = nullptr;
            v22 = (char *)sub_34F354(v29, v18, &v26, &v27, (const char **)&v28, nullptr);
            sub_35A2BC(v16, i, 2, v26, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
            sub_35A2BC(v16, i, 3, v27, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
            sub_35A2BC(v16, i, 4, v28, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
            result = sub_35A2BC(v16, i, 1, v22, (int (__fastcall *)(_DWORD))0xFFFFFFFF);
          }
          return result;
        }
        v8 = a3[2] + 20 * v7;
        v19 = *(unsigned __int8 **)v8;
        if ( *(_DWORD *)v8 != 0 )
          break;
LABEL_34:
        ++v7;
      }
      v9 = *(char **)(v8 + 4);
      if ( v9 != nullptr )
      {
        v10 = -1;
LABEL_33:
        sub_35A2BC(v21, v7, 0, v9, (int (__fastcall *)(_DWORD))v10);
        goto LABEL_34;
      }
      v11 = *v19;
      if ( v11 != 154 && v11 != 156 || a2 == nullptr )
      {
        v14 = *(void **)(v8 + 8);
        if ( v14 != nullptr )
          v15 = (char *)sub_351BC8(v6, v14);
        else
          v15 = (char *)sub_36541C(v6, "column%d", v7 + 1);
        v9 = v15;
        v10 = (int)sub_34CCB0;
        goto LABEL_33;
      }
      v20 = *((__int16 *)v19 + 16);
      for ( j = 0; j < *a2 && a2[18 * j + 12] != *((_DWORD *)v19 + 7); ++j )
        ;
      v13 = a2[18 * j + 6];
      if ( v20 < 0 && (v20 = *(__int16 *)(v13 + 36)) < 0 )
        v9 = "rowid";
      else
        v9 = *(char **)(24 * v20 + *(_DWORD *)(v13 + 4));
      if ( v25 )
      {
        if ( !v24 )
        {
          v10 = -1;
          goto LABEL_33;
        }
      }
      else if ( !v24 )
      {
        v9 = (char *)sub_351BC8(v6, *(void **)(v8 + 8));
        v10 = (int)sub_34CCB0;
        goto LABEL_33;
      }
      v9 = (char *)sub_36541C(v6, "%s.%s", *(const char **)v13, v9);
      v10 = (int)sub_34CCB0;
      goto LABEL_33;
    }
  }
  return result;
}


//======================================================================
// sub_365B7C
// address: 0x00365B7C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_365B7C(_DWORD *a1, _DWORD *a2, int a3)
{
  int v5; // r6

  if ( a2 == nullptr )
    return sub_36541C((int)a1, "name=%Q", a3, a3);
  v5 = sub_36541C((int)a1, "%s OR name=%Q", a2, a3);
  sub_354940(a1, a2);
  return v5;
}


//======================================================================
// sub_365BB4
// address: 0x00365BB4   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_365BB4(unsigned __int8 *a1, int a2)
{
  _DWORD *v2; // r7
  int v4; // r5
  char *v5; // r4
  int *i; // r5
  int v8; // [sp+4h] [bp-8h]

  v2 = *(_DWORD **)a1;
  v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 16) + 28);
  if ( *(_DWORD *)(a2 + 68) == v8 )
    return 0;
  v5 = nullptr;
  for ( i = (int *)sub_34F4D6(a1, a2); i != nullptr; i = (int *)i[8] )
  {
    if ( i[5] == v8 )
      v5 = (char *)sub_365B7C(v2, v5, *i);
  }
  if ( v5 == nullptr )
    return 0;
  v4 = sub_36541C(*(_DWORD *)a1, "type='trigger' AND (%s)", v5);
  sub_354940(*(_DWORD **)a1, v5);
  return v4;
}


//======================================================================
// sub_365C10
// address: 0x00365C10   size: 0xE0 (224 bytes)
//======================================================================
_DWORD *__fastcall sub_365C10(int a1, int a2, int *a3)
{
  _DWORD *v4; // r5
  const char *v5; // r6
  int v6; // r0
  unsigned __int8 *v7; // r4
  _DWORD *v8; // r7
  const char *v9; // r2
  void *v10; // r2
  _BYTE *v11; // r0
  size_t v13; // [sp+8h] [bp-24h]
  unsigned __int8 *v14; // [sp+Ch] [bp-20h]
  _BYTE *v16; // [sp+14h] [bp-18h]
  int v17; // [sp+18h] [bp-14h]
  int v18; // [sp+1Ch] [bp-10h]
  int v19[2]; // [sp+24h] [bp-8h] BYREF

  v4 = (_DWORD *)sqlite3_context_db_handle(a1);
  v5 = (const char *)sqlite3_value_text(*a3);
  v16 = (_BYTE *)sqlite3_value_text(a3[1]);
  v6 = sqlite3_value_text(a3[2]);
  v7 = (unsigned __int8 *)v5;
  v17 = v6;
  v8 = nullptr;
  while ( *v7 != 0 )
  {
    v13 = sub_353874(v7, v19);
    if ( v19[0] == 105 )
    {
      do
      {
        v7 += v13;
        v13 = sub_353874(v7, v19);
      }
      while ( v19[0] == 151 );
      v14 = sub_351BF2((int)v4, v7, v13);
      if ( v14 == nullptr )
        break;
      sub_34CF6A(v14);
      if ( sqlite3_stricmp(v16, v14) == 0 )
      {
        v10 = v8;
        if ( v8 == nullptr )
          v10 = &unk_3FB8EA;
        v18 = sub_36541C((int)v4, "%s%.*s\"%w\"", v10, v7 - (unsigned __int8 *)v5, v5, v17);
        sub_354940(v4, v8);
        v8 = (_DWORD *)v18;
        v5 = (const char *)&v7[v13];
      }
      sub_354940(v4, v14);
    }
    v7 += v13;
  }
  v9 = (const char *)v8;
  if ( v8 == nullptr )
    v9 = (const char *)&unk_3FB8EA;
  v11 = (_BYTE *)sub_36541C((int)v4, "%s%s", v9, v5);
  sqlite3_result_text(a1, v11, -1, sub_34CCB0);
  return sub_354940(v4, v8);
}


//======================================================================
// sub_365D04
// address: 0x00365D04   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_365D04(int a1, int a2, int *a3)
{
  int v4; // r6
  int result; // r0
  unsigned __int8 *v6; // r4
  int v7; // r5
  unsigned __int8 *v8; // r7
  _BYTE *v9; // r0
  int v10; // [sp+8h] [bp-1Ch]
  int v12; // [sp+10h] [bp-14h]
  int v13; // [sp+14h] [bp-10h]
  int v14; // [sp+1Ch] [bp-8h] BYREF

  v4 = sqlite3_value_text(*a3);
  v12 = sqlite3_value_text(a3[1]);
  result = sqlite3_context_db_handle(a1);
  v13 = result;
  if ( v4 != 0 )
  {
    v6 = (unsigned __int8 *)v4;
    v10 = 0;
    v7 = 3;
    while ( *v6 != 0 )
    {
      result = v10;
      v8 = v6;
      do
      {
        v8 += result;
        result = sub_353874(v8, &v14);
      }
      while ( v14 == 151 );
      if ( v14 == 122 || v14 == 107 )
      {
        v7 = 0;
      }
      else if ( ++v7 == 2 && (v14 == 137 || v14 == 46 || v14 == 5) )
      {
        v9 = (_BYTE *)sub_36541C(v13, "%.*s\"%w\"%s", &v6[-v4], v4, v12, &v6[v10]);
        return sqlite3_result_text(a1, v9, -1, sub_34CCB0);
      }
      v10 = result;
      v6 = v8;
    }
  }
  return result;
}


//======================================================================
// sub_365DA4
// address: 0x00365DA4   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_365DA4(int a1, int a2, int *a3)
{
  int v4; // r6
  int result; // r0
  unsigned __int8 *v6; // r4
  int v7; // r7
  unsigned __int8 *v8; // r5
  _BYTE *v9; // r0
  int v10; // [sp+Ch] [bp-18h]
  int v12; // [sp+14h] [bp-10h]
  int v13; // [sp+1Ch] [bp-8h] BYREF

  v4 = sqlite3_value_text(*a3);
  v10 = sqlite3_value_text(a3[1]);
  result = sqlite3_context_db_handle(a1);
  v12 = result;
  if ( v4 != 0 )
  {
    v6 = (unsigned __int8 *)v4;
    v7 = 0;
    while ( *v6 != 0 )
    {
      result = v7;
      v8 = v6;
      do
      {
        v8 += result;
        result = sub_353874(v8, &v13);
      }
      while ( v13 == 151 );
      if ( v13 == 22 || v13 == 125 )
      {
        v9 = (_BYTE *)sub_36541C(v12, "%.*s\"%w\"%s", &v6[-v4], v4, v10, &v6[v7]);
        return sqlite3_result_text(a1, v9, -1, sub_34CCB0);
      }
      v7 = result;
      v6 = v8;
    }
  }
  return result;
}


//======================================================================
// sub_365E28
// address: 0x00365E28   size: 0x1D8 (472 bytes)
//======================================================================
int __fastcall sub_365E28(int a1, unsigned __int8 *a2, int a3, int a4, _DWORD *a5)
{
  _DWORD *v6; // r4
  int result; // r0
  int v8; // r5
  _BYTE *v9; // r2
  _WORD *v10; // r7
  _BYTE *v11; // r1
  int v12; // r1
  _DWORD *v13; // r0
  __int16 v14; // r3
  _DWORD *v15; // r0
  __int64 v16; // r4
  _WORD *v17; // r5
  unsigned __int8 *v18; // r7
  int v19; // r4
  _BYTE *v20; // r0
  int v21; // [sp+8h] [bp-24h]
  __int64 v22; // [sp+8h] [bp-24h]
  const char *v25; // [sp+1Ch] [bp-10h]
  _DWORD *v26; // [sp+24h] [bp-8h] BYREF

  v6 = a2;
  v26 = nullptr;
  if ( a2 == nullptr )
  {
    *a5 = 0;
    return 0;
  }
  v8 = *a2;
  if ( v8 == 159 )
    v8 = a2[38];
  if ( v8 == 157 )
  {
    v9 = *((_BYTE **)a2 + 3);
    v8 = (unsigned __int8)*v9;
    if ( (unsigned __int8)(*v9 + 124) > 1u )
      goto LABEL_26;
    v6 = *((_DWORD **)a2 + 3);
    v25 = "-";
    v21 = -1;
  }
  else
  {
    if ( v8 == 97 )
    {
      v21 = 1;
      v25 = (const char *)&unk_3FB8EA;
      goto LABEL_13;
    }
    v21 = 1;
    v25 = (const char *)&unk_3FB8EA;
  }
  if ( (unsigned int)(v8 - 132) > 1 )
  {
    if ( v8 != 157 )
    {
      if ( v8 == 101 )
      {
        v26 = sub_3518AC(a1);
        if ( v26 != nullptr )
          goto LABEL_38;
      }
      else
      {
        if ( v8 != 134 )
          goto LABEL_38;
        v17 = sub_3518AC(a1);
        v26 = v17;
        if ( v17 != nullptr )
        {
          v18 = (unsigned __int8 *)(v6[2] + 2);
          v19 = sub_34CF50((unsigned int)v18) - 1;
          v20 = (_BYTE *)sub_3564F4(a1, v18, v19);
          sub_359B84((int)v17, v20, v19 / 2, 0, sub_34CCB0);
          goto LABEL_38;
        }
      }
      goto LABEL_40;
    }
LABEL_26:
    if ( sub_365E28(a1, v6[3], a3, a4, &v26) == 0 && v26 != nullptr )
    {
      sub_352DB8((int)v26);
      v15 = v26;
      v16 = *((_QWORD *)v26 + 2);
      if ( v16 == 0x8000000000000000LL )
      {
        *((_WORD *)v26 + 14) = v26[7] & 0xFFF3 | 8;
        v15[2] = 0;
        v15[3] = -1008730112;
      }
      else
      {
        *((_QWORD *)v26 + 2) = -v16;
      }
      v15[3] += 0x80000000;
      sub_35E1FE((int)v15, a4, a3);
    }
    goto LABEL_38;
  }
LABEL_13:
  v10 = sub_3518AC(a1);
  v26 = v10;
  if ( v10 != nullptr )
  {
    if ( (v6[1] & 0x400) != 0 )
    {
      v22 = (int)v6[2] * (__int64)v21;
      sub_355700(v10);
      *((_QWORD *)v10 + 2) = v22;
      v10[14] = 4;
LABEL_18:
      if ( (unsigned int)(v8 - 132) > 1 || (v12 = 99, a4 != 98) )
        v12 = a4;
      sub_35E1FE((int)v26, v12, 1);
      v13 = v26;
      v14 = *((_WORD *)v26 + 14);
      if ( (v14 & 0xC) != 0 )
        *((_WORD *)v26 + 14) = v14 & 0xFFFD;
      if ( a3 != 1 )
      {
        result = sub_359790((int)v13, a3);
LABEL_39:
        *a5 = v26;
        return result;
      }
LABEL_38:
      result = 0;
      goto LABEL_39;
    }
    v11 = (_BYTE *)sub_36541C(a1, "%s%s", v25, (const char *)v6[2]);
    if ( v11 != nullptr )
    {
      sub_35A338((int)v26, v11, 1, sub_34CCB0);
      goto LABEL_18;
    }
  }
LABEL_40:
  *(_BYTE *)(a1 + 64) = 1;
  sub_354940((_DWORD *)a1, nullptr);
  sub_3559EA(v26);
  return 7;
}


//======================================================================
// sub_366020
// address: 0x00366020   size: 0x5C (92 bytes)
//======================================================================
_DWORD *__fastcall sub_366020(int *a1, int a2, int a3, int a4)
{
  int v4; // r5
  int v6; // r2
  int v7; // r0
  _DWORD *result; // r0
  _DWORD *v11; // [sp+14h] [bp-8h] BYREF

  v4 = 24 * a3;
  v6 = *(_DWORD *)(a2 + 4);
  v7 = *a1;
  v11 = nullptr;
  result = (_DWORD *)sub_365E28(
                       v7,
                       *(unsigned __int8 **)(v6 + v4 + 4),
                       *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v7 + 16) + 12) + 77),
                       *(unsigned __int8 *)(v6 + v4 + 21),
                       &v11);
  if ( v11 != nullptr )
    result = sub_355AEA(a1, -1, v11, -8);
  if ( *(_BYTE *)(*(_DWORD *)(a2 + 4) + v4 + 21) == 101 )
    return (_DWORD *)sub_35AACE(a1, 39, a4);
  return result;
}


//======================================================================
// sub_36607C
// address: 0x0036607C   size: 0x70 (112 bytes)
//======================================================================
_DWORD *__fastcall sub_36607C(int *a1, int a2, int a3, int a4, int a5)
{
  int v7; // r4
  _DWORD *result; // r0
  char v9; // r7
  int v10; // r0

  v7 = a4;
  if ( a4 < 0 || a4 == *(__int16 *)(a2 + 36) )
  {
    result = (_DWORD *)sub_35AAF0(a1, 100, a3, a5);
    if ( v7 < 0 )
      return result;
  }
  else
  {
    v9 = 46;
    if ( (*(_BYTE *)(a2 + 44) & 0x10) != 0 )
      v9 = -107;
    if ( (*(_BYTE *)(a2 + 44) & 0x20) != 0 )
    {
      v10 = sub_35344C(*(_DWORD *)(a2 + 8));
      a4 = sub_34EBF4(v10, (__int16)v7);
    }
    result = (_DWORD *)sub_35A902(a1, v9, a3, a4, a5);
  }
  if ( *(_DWORD *)(a2 + 12) == 0 )
    return sub_366020(a1, a2, v7, a5);
  return result;
}


//======================================================================
// sub_3660EC
// address: 0x003660EC   size: 0x90 (144 bytes)
//======================================================================
unsigned int __fastcall sub_3660EC(unsigned int *a1, int a2, int a3, unsigned int a4, unsigned int a5, char a6)
{
  unsigned int *v9; // r2
  unsigned int *v10; // r3
  unsigned int v11; // r1
  unsigned int v12; // r1
  unsigned int *v14; // [sp+10h] [bp-Ch]
  int *v15; // [sp+14h] [bp-8h]

  v9 = a1 + 30;
  v15 = (int *)a1[2];
  v14 = a1 + 80;
  v10 = a1 + 30;
  while ( (int)v10[3] <= 0 || *v10 != a4 || *((__int16 *)v10 + 2) != a3 )
  {
    v10 += 5;
    if ( v10 == v14 )
    {
      sub_36607C(v15, a2, a4, a3, a5);
      if ( a6 != 0 )
        sub_34E458((int)v15, a6);
      else
        sub_353348(a1, a4, a3, a5);
      return a5;
    }
  }
  v11 = a1[27];
  a1[27] = v11 + 1;
  v10[4] = v11;
  v12 = v10[3];
  do
  {
    if ( v9[3] == v12 )
      *((_BYTE *)v9 + 6) = 0;
    v9 += 5;
  }
  while ( v9 != v14 );
  return v10[3];
}


//======================================================================
// sub_36617C
// address: 0x0036617C   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_36617C(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r4
  int *v6; // r6
  int v7; // r7
  const char *v8; // r5
  const char *v9; // r0
  _DWORD *v10; // r0

  v5 = result;
  if ( *(_BYTE *)(result + 454) == 2 )
  {
    v6 = *(int **)(result + 8);
    v7 = *(_DWORD *)result;
    if ( a5 != 0 )
      v8 = "USING TEMP B-TREE ";
    else
      v8 = (const char *)&unk_3FB8EA;
    v9 = sub_34F31C(a2);
    v10 = (_DWORD *)sub_36541C(v7, "COMPOUND SUBQUERIES %d AND %d %s(%s)", a3, a4, v8, v9);
    return sub_35A9FC(v6, 156, *(_DWORD *)(v5 + 468), 0, 0, v10, -1);
  }
  return result;
}


//======================================================================
// sub_3661E8
// address: 0x003661E8   size: 0x8E (142 bytes)
//======================================================================
int *__fastcall sub_3661E8(int *a1, int a2, int a3)
{
  int *result; // r0
  int *v6; // r6
  int i; // r4
  int v8; // r0
  int v9; // [sp+10h] [bp-Ch]

  result = sub_35A956((int)a1);
  v6 = result;
  if ( result != nullptr )
  {
    v9 = sub_34F2A0(*a1, *(_DWORD *)(a2 + 68));
    for ( i = sub_34F4D6((unsigned __int8 *)a1, a2); i != 0; i = *(_DWORD *)(i + 32) )
    {
      v8 = sub_34F2A0(*a1, *(_DWORD *)(i + 20));
      sub_35A9FC(v6, 122, v8, 0, 0, *(_DWORD **)i, 0);
    }
    sub_35A9FC(v6, 120, v9, 0, 0, *(_DWORD **)a2, 0);
    result = (int *)sub_36541C(*a1, "tbl_name=%Q", a3);
    if ( result != nullptr )
    {
      sub_35AC80(v6, v9, result);
      result = (int *)sub_365BB4((unsigned __int8 *)a1, a2);
      if ( result != nullptr )
        return (int *)sub_35AC80(v6, 1, result);
    }
  }
  return result;
}


//======================================================================
// sub_36627C
// address: 0x0036627C   size: 0x28 (40 bytes)
//======================================================================
int sub_36627C(_DWORD *a1, _DWORD *a2, int a3, ...)
{
  int v5; // r5
  va_list varg_r3; // [sp+1Ch] [bp+14h] BYREF

  va_start(varg_r3, a3);
  v5 = sub_3601F0((int)a1, a3, (void **)varg_r3);
  sub_354940(a1, a2);
  return v5;
}


//======================================================================
// sub_3662A4
// address: 0x003662A4   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_3662A4(int a1, const char *a2, const char *a3)
{
  _DWORD *v3; // r5
  const char *v4; // r3
  const char **v7; // r6
  int result; // r0
  _BYTE *v9; // [sp+Ch] [bp-8h]

  v3 = *(_DWORD **)a1;
  v4 = a2;
  v9 = (_BYTE *)(*(_DWORD *)a1 + 64);
  if ( *v9 == 0 && (v3[6] & 0x10000) == 0 )
  {
    if ( a2 == nullptr )
      v4 = "?";
    sub_365388(*(int **)(a1 + 4), v3, (int)"malformed database schema (%s)", v4);
    if ( a3 != nullptr )
    {
      v7 = *(const char ***)(a1 + 4);
      *v7 = (const char *)sub_36627C(v3, *v7, (int)"%s - %s", *v7, a3);
    }
  }
  result = 7;
  if ( *v9 == 0 )
    result = sub_35FA58(99195);
  *(_DWORD *)(a1 + 12) = result;
  return result;
}


//======================================================================
// sub_366314
// address: 0x00366314   size: 0x2E4 (740 bytes)
//======================================================================
int __fastcall sub_366314(int a1, int a2, int a3, int a4, int a5, unsigned __int16 a6)
{
  int v6; // r5
  _DWORD *v7; // r7
  int v8; // r3
  int result; // r0
  const char *v10; // r2
  int v11; // r6
  _DWORD *v12; // r3
  char *v13; // r0
  char *v14; // r4
  int v15; // r1
  _DWORD *v16; // r6
  int v17; // r6
  const char *v18; // r2
  const char *v19; // r2
  const char *v20; // r2
  const char *v21; // r3
  int v22; // r0
  _DWORD *v23; // r0
  int v24; // [sp+14h] [bp-50h]
  int v25; // [sp+18h] [bp-4Ch]
  int v26; // [sp+1Ch] [bp-48h]
  const char *v27; // [sp+1Ch] [bp-48h]
  int v28; // [sp+20h] [bp-44h]
  int v29; // [sp+28h] [bp-3Ch]
  int v30; // [sp+2Ch] [bp-38h]
  int *v31; // [sp+30h] [bp-34h]
  int v32; // [sp+34h] [bp-30h]
  int v33; // [sp+38h] [bp-2Ch]
  _DWORD v35[6]; // [sp+44h] [bp-20h] BYREF
  __int16 v36; // [sp+5Ch] [bp-8h]

  v31 = *(int **)(a1 + 8);
  v32 = *(_DWORD *)(a1 + 468);
  v6 = *(_DWORD *)(a3 + 56);
  v7 = *(_DWORD **)a1;
  v8 = *(unsigned __int8 *)(a3 + 36);
  v24 = *(_DWORD *)(v6 + 36);
  result = v24 << 18;
  if ( (v24 & 0x2000) == 0 && (a6 & 0x40) == 0 )
  {
    if ( (v24 & 0x30) != 0 )
    {
      v10 = "SEARCH";
    }
    else if ( (v24 & 0x400) == 0 && *(_WORD *)(v6 + 24) != 0 )
    {
      v10 = "SEARCH";
    }
    else if ( a6 << 30 != 0 )
    {
      v10 = "SEARCH";
    }
    else
    {
      v10 = "SCAN";
    }
    v11 = a2 + 72 * v8 + 8;
    v12 = (_DWORD *)sub_36541C((int)v7, "%s", v10);
    if ( *(_DWORD *)(v11 + 20) != 0 )
      v13 = (char *)sub_36627C(v7, v12, (int)"%s SUBQUERY %d");
    else
      v13 = (char *)sub_36627C(v7, v12, (int)"%s TABLE %s");
    v14 = v13;
    if ( *(_DWORD *)(v11 + 12) != 0 )
      v14 = (char *)sub_36627C(v7, v13, (int)"%s AS %s", v13, *(const char **)(v11 + 12));
    if ( (v24 & 0x500) == 0 )
    {
      v15 = *(_DWORD *)(v6 + 28);
      v28 = v15;
      if ( v15 != 0 )
      {
        v25 = *(unsigned __int16 *)(v6 + 24);
        v30 = *(_DWORD *)(v15 + 4);
        v29 = *(_DWORD *)(*(_DWORD *)(v11 + 16) + 4);
        v33 = *(unsigned __int16 *)(v6 + 26);
        if ( *(_WORD *)(v6 + 24) != 0 || (v16 = (_DWORD *)(*(_DWORD *)(v6 + 36) & 0x30)) != nullptr )
        {
          v17 = 0;
          v35[5] = 1000000000;
          memset(&v35[1], 0, 16);
          v36 = 1;
          v35[0] = v7;
          sub_35B8C8((int)v35, " (", 2);
          while ( 1 )
          {
            v26 = v25;
            if ( v17 >= v25 )
              break;
            if ( v17 == *(unsigned __int16 *)(v28 + 50) )
              v27 = "rowid";
            else
              v27 = *(const char **)(24 * *(__int16 *)(v30 + 2 * v17) + v29);
            if ( v17 < v33 )
            {
              if ( v17 != 0 )
                sub_35B8C8((int)v35, " AND ", 5);
              sub_35B8C8((int)v35, "ANY(", 4);
              sub_35B992((int)v35, v27);
              sub_35B8C8((int)v35, ")", 1);
            }
            else
            {
              sub_35B9E4((int)v35, v17, v27, "=");
            }
            ++v17;
          }
          if ( (*(_DWORD *)(v6 + 36) & 0x20) != 0 )
          {
            if ( v25 == *(unsigned __int16 *)(v28 + 50) )
              v18 = "rowid";
            else
              v18 = *(const char **)(24 * *(__int16 *)(2 * v25 + v30) + v29);
            v26 = v25 + 1;
            sub_35B9E4((int)v35, v25, v18, ">");
          }
          if ( (*(_DWORD *)(v6 + 36) & 0x10) != 0 )
          {
            if ( v25 == *(unsigned __int16 *)(v28 + 50) )
              v19 = "rowid";
            else
              v19 = *(const char **)(24 * *(__int16 *)(2 * v25 + v30) + v29);
            sub_35B9E4((int)v35, v26, v19, "<");
          }
          sub_35B8C8((int)v35, ")", 1);
          v16 = (_DWORD *)sub_3591A0((int)v35);
        }
        if ( (v24 & 0x4000) != 0 )
          v20 = "%s USING AUTOMATIC %sINDEX%.0s%s";
        else
          v20 = "%s USING %sINDEX %s%s";
        if ( (v24 & 0x40) != 0 )
          v21 = "COVERING ";
        else
          v21 = (const char *)&unk_3FB8EA;
        v14 = (char *)sub_36627C(v7, v14, (int)v20, v14, v21, **(_DWORD **)(v6 + 28), v16);
        sub_354940(v7, v16);
        goto LABEL_62;
      }
    }
    if ( (v24 & 0x100) != 0 && v24 << 28 != 0 )
    {
      v14 = (char *)sub_36627C(v7, v14, (int)"%s USING INTEGER PRIMARY KEY", v14);
      if ( (v24 & 5) != 0 )
      {
        v22 = sub_36627C(v7, v14, (int)"%s (rowid=?)", v14);
LABEL_61:
        v14 = (char *)v22;
        goto LABEL_62;
      }
      if ( (v24 & 0x30) == 0x30 )
      {
        v22 = sub_36627C(v7, v14, (int)"%s (rowid>? AND rowid<?)", v14);
        goto LABEL_61;
      }
      if ( (v24 & 0x20) != 0 )
      {
        v22 = sub_36627C(v7, v14, (int)"%s (rowid>?)", v14);
        goto LABEL_61;
      }
      if ( (v24 & 0x10) != 0 )
      {
        v22 = sub_36627C(v7, v14, (int)"%s (rowid<?)", v14);
        goto LABEL_61;
      }
    }
    else if ( (v24 & 0x400) != 0 )
    {
      v22 = sub_36627C(
              v7,
              v14,
              (int)"%s VIRTUAL TABLE INDEX %d:%s",
              v14,
              *(_DWORD *)(v6 + 24),
              *(const char **)(v6 + 32));
      goto LABEL_61;
    }
LABEL_62:
    v23 = (_DWORD *)sub_36627C(v7, v14, (int)"%s", v14);
    return sub_35A9FC(v31, 156, v32, a4, a5, v23, -1);
  }
  return result;
}


//======================================================================
// sub_366674
// address: 0x00366674   size: 0x16 (22 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00366674  PUSH    {R2,R3}
//   00366676  PUSH    {R0-R2,LR}
//   00366678  ADD     R3, SP, #0xC+varg_r2
//   0036667A  LDM     R3!, {R2}
//   0036667C  STR     R3, [SP,#0xC+var_8]
//   0036667E  BL      sub_35BA28
//   00366682  ADD     SP, SP, #0xC
//   00366684  POP     {R3}
//   00366686  ADD     SP, SP, #8
//   00366688  BX      R3

//======================================================================
// sub_36668C
// address: 0x0036668C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_36668C(int result, int a2, int *a3)
{
  int v3; // r5
  int v5; // r6
  int v6; // r4
  _BYTE *v7; // r0
  _DWORD v9[3]; // [sp+8h] [bp-2Ch] BYREF
  _DWORD v10[3]; // [sp+14h] [bp-20h] BYREF
  int v11; // [sp+20h] [bp-14h]
  int v12; // [sp+24h] [bp-10h]
  int v13; // [sp+28h] [bp-Ch]
  char v14; // [sp+2Ch] [bp-8h]
  char v15; // [sp+2Dh] [bp-7h]

  v3 = result;
  if ( a2 > 0 )
  {
    result = sqlite3_value_text(*a3);
    v5 = result;
    if ( result != 0 )
    {
      v9[2] = a3 + 1;
      v9[0] = a2 - 1;
      v13 = 1000000000;
      v9[1] = 0;
      v10[1] = 0;
      v10[2] = 0;
      v11 = 0;
      v12 = 0;
      v14 = 1;
      v15 = 0;
      v10[0] = sqlite3_context_db_handle(v3);
      sub_366674(v10, 2, v5, v9);
      v6 = v11;
      v7 = (_BYTE *)sub_3591A0((int)v10);
      return sqlite3_result_text(v3, v7, v6, sub_34CCB0);
    }
  }
  return result;
}


//======================================================================
// sub_366700
// address: 0x00366700   size: 0x5E (94 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00366700  PUSH    {R2,R3}
//   00366702  PUSH    {R0,R1,R4-R6,LR}
//   00366704  LDR     R3, [R0,#0x10]
//   00366706  MOVS    R4, R0
//   00366708  MOVS    R6, R1
//   0036670A  CMP     R3, #0
//   0036670C  BEQ     loc_366756
//   0036670E  SUBS    R3, #1
//   00366710  STR     R3, [R0,#0x10]
//   00366712  LDR     R3, [R0,#0x14]
//   00366714  MOVS    R5, R0
//   00366716  ADDS    R5, #0x1C
//   00366718  ADDS    R3, #1
//   0036671A  STR     R3, [R0,#0x14]
//   0036671C  ADD     R3, SP, #8+varg_r3
//   0036671E  STR     R3, [SP,#8+var_4]
//   00366720  LDR     R3, [R0,#0x28]
//   00366722  CMP     R3, #0
//   00366724  BEQ     loc_366732
//   00366726  LDR     R1, =(asc_3FD6CE - 0x366730); "\n"
//   00366728  MOVS    R0, R5; int
//   0036672A  MOVS    R2, #1; size_t
//   0036672C  ADD     R1, PC; "\n"
//   0036672E  BL      sub_35B8C8
//   00366732  CMP     R6, #0
//   00366734  BEQ     loc_36673E
//   00366736  MOVS    R0, R5
//   00366738  MOVS    R1, R6
//   0036673A  BL      sub_35B992
//   0036673E  LDR     R3, [SP,#8+var_4]
//   00366740  MOVS    R0, R5
//   00366742  MOVS    R1, #1
//   00366744  LDR     R2, [SP,#8+varg_r2]
//   00366746  BL      sub_35BA28
//   0036674A  MOVS    R3, R4
//   0036674C  ADDS    R3, #0x35 ; '5'
//   0036674E  LDRB    R3, [R3]
//   00366750  CMP     R3, #1
//   00366752  BNE     loc_366756
//   00366754  STR     R3, [R4,#0x18]
//   00366756  POP     {R0,R1,R4-R6}
//   00366758  POP     {R3}
//   0036675A  ADD     SP, SP, #8
//   0036675C  BX      R3

//======================================================================
// sub_366764
// address: 0x00366764   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_366764(int a1, unsigned int a2, int a3)
{
  int v3; // r4
  _BYTE *v4; // r2
  int v5; // r6
  int v6; // r7

  v3 = 1;
  if ( a2 != 0 )
  {
    if ( a2 <= *(_DWORD *)(a1 + 12) )
    {
      v4 = (_BYTE *)(*(_DWORD *)(a1 + 8) + (a2 >> 3));
      v5 = (unsigned __int8)*v4;
      v6 = 1 << (a2 & 7);
      v3 = v6 & v5;
      if ( (v6 & v5) != 0 )
      {
        v3 = 1;
        ((void (*)(void))sub_366700)();
      }
      else
      {
        *v4 = v5 | v6;
      }
    }
    else
    {
      sub_366700(a1, a3, "invalid page number %d", a2);
    }
  }
  return v3;
}


//======================================================================
// sub_3667B4
// address: 0x003667B4   size: 0x74 (116 bytes)
//======================================================================
char *__fastcall sub_3667B4(_DWORD *a1, int a2, int *a3)
{
  char *result; // r0
  int v7; // r4
  int v8; // r0
  int v9; // r3
  const char *v10; // r6
  signed int v11; // r2
  const void *v12; // r6

  result = (char *)sqlite3_value_type(*a3);
  if ( result != &byte_5 )
  {
    result = (char *)sqlite3_aggregate_context(a1, 28);
    v7 = (int)result;
    if ( result != nullptr )
    {
      v8 = sqlite3_context_db_handle((int)a1);
      v9 = *(unsigned __int8 *)(v7 + 24);
      *(_BYTE *)(v7 + 24) = 2;
      *(_DWORD *)(v7 + 20) = *(_DWORD *)(v8 + 88);
      if ( v9 != 0 )
      {
        if ( a2 == 2 )
        {
          v10 = (const char *)sqlite3_value_text(a3[1]);
          v11 = sqlite3_value_bytes(a3[1]);
          if ( v11 == 0 )
            goto LABEL_9;
        }
        else
        {
          v11 = 1;
          v10 = ",";
        }
        sub_35B8C8(v7, v10, v11);
      }
LABEL_9:
      v12 = (const void *)sqlite3_value_text(*a3);
      result = (char *)sqlite3_value_bytes(*a3);
      if ( result != nullptr )
        return (char *)sub_35B8C8(v7, v12, (signed int)result);
    }
  }
  return result;
}


//======================================================================
// sub_36682C
// address: 0x0036682C   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_36682C(int *a1, int a2, int a3)
{
  int v4; // r7
  int v5; // r3
  int i; // r5
  _DWORD *v8; // r3
  int v9; // r1
  const void *v11; // [sp+10h] [bp-2Ch]
  _DWORD v13[6]; // [sp+1Ch] [bp-20h] BYREF
  char v14; // [sp+34h] [bp-8h]
  char v15; // [sp+35h] [bp-7h]

  v4 = *(_DWORD *)(a3 + 12);
  v13[5] = 200;
  v14 = 1;
  v15 = 0;
  v5 = *a1;
  memset(&v13[1], 0, 16);
  v13[0] = v5;
  for ( i = 0; i < *(unsigned __int16 *)(a3 + 50); ++i )
  {
    v11 = *(const void **)(24 * *(__int16 *)(2 * i + *(_DWORD *)(a3 + 4)) + *(_DWORD *)(v4 + 4));
    if ( i != 0 )
      sub_35B8C8((int)v13, ", ", 2);
    sub_35B992((int)v13, *(const void **)v4);
    sub_35B8C8((int)v13, ".", 1);
    sub_35B992((int)v13, v11);
  }
  v8 = (_DWORD *)sub_3591A0((int)v13);
  if ( (*(_BYTE *)(a3 + 55) & 3) == 2 )
    v9 = 1555;
  else
    v9 = 2067;
  return sub_35AA7C((int)a1, v9, a2, v8, -1, 2);
}


//======================================================================
// sub_3668E0
// address: 0x003668E0   size: 0x2EA (746 bytes)
//======================================================================
int __fastcall sub_3668E0(int a1, int a2, size_t a3, int a4, _DWORD *a5)
{
  _DWORD *v6; // r0
  int v7; // r4
  _DWORD *v8; // r7
  int v9; // r4
  char *v10; // r5
  size_t v11; // r0
  char *v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  int v15; // r1
  int v16; // r0
  int v17; // r0
  int v18; // r1
  int v19; // r0
  int *v20; // r3
  int v21; // r5
  int v22; // r0
  int v23; // r0
  int v24; // r4
  int v25; // r1
  __int64 v26; // r6
  int v27; // r0
  int v28; // r0
  const char *v29; // r2
  const char *v30; // r1
  int v31; // r3
  void *v32; // r0
  void *v33; // r4
  int v34; // r3
  int v35; // r2
  size_t v37; // [sp+14h] [bp-80h]
  const char *v38; // [sp+14h] [bp-80h]
  size_t v39; // [sp+14h] [bp-80h]
  int v40; // [sp+18h] [bp-7Ch]
  struct stat buf; // [sp+28h] [bp-6Ch] BYREF

  if ( *(_DWORD *)(a1 + 36) == 0 )
  {
    v6 = (_DWORD *)sqlite3_malloc(16);
    v7 = 7;
    v8 = v6;
    if ( v6 == nullptr )
      return v7;
    j_memset(v6, 0, 0x10u);
    sub_34DAAE();
    v9 = *(_DWORD *)(a1 + 8);
    v10 = *(char **)(v9 + 20);
    if ( v10 == nullptr )
    {
      if ( off_472364(*(_DWORD *)(a1 + 12), &buf) != 0 && *(_BYTE *)(v9 + 13) == 0 )
      {
        v7 = 1802;
        goto LABEL_20;
      }
      v11 = j_strlen(*(const char **)(a1 + 32));
      v40 = v11 + 6;
      v37 = v11 + 42;
      v12 = (char *)sqlite3_malloc(v11 + 42);
      v10 = v12;
      if ( v12 == nullptr )
        goto LABEL_7;
      j_memset(v12, 0, v37);
      *((_DWORD *)v10 + 2) = v10 + 36;
      v38 = v10 + 36;
      sqlite3_snprintf(v40, (int)(v10 + 36), (int)"%s-shm", *(_DWORD *)(a1 + 32));
      *((_DWORD *)v10 + 3) = -1;
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 20) = v10;
      *(_DWORD *)v10 = *(_DWORD *)(a1 + 8);
      v13 = sqlite3_mutex_alloc(0);
      *((_DWORD *)v10 + 1) = v13;
      if ( v13 == 0 )
      {
LABEL_7:
        v7 = 7;
        goto LABEL_20;
      }
      if ( *(_BYTE *)(v9 + 13) == 0 )
      {
        v14 = sqlite3_uri_boolean(*(_DWORD *)(a1 + 32), "readonly_shm", 0);
        v15 = 66;
        if ( v14 )
        {
          v10[22] = 1;
          v15 = 0;
        }
        v16 = sub_35EC18(v38, v15, buf.st_mode & 0x1FF);
        *((_DWORD *)v10 + 3) = v16;
        if ( v16 < 0 )
        {
          v17 = sub_35ECC0(27934);
          v7 = sub_35ECE0(v17, "open", v38, 27934);
          goto LABEL_20;
        }
        if ( (off_472418(v16, buf.st_uid, buf.st_gid), sub_353E80(*((_DWORD *)v10 + 3), 1, 128, 1) == 0)
          && sub_350CD8(*((_DWORD *)v10 + 3), v18, 0) != 0
          && (v7 = sub_35ECE0(4618, "ftruncate", v38, 27950)) != 0
          || (v7 = sub_353E80(*((_DWORD *)v10 + 3), 0, 128, 1)) != 0 )
        {
LABEL_20:
          sub_35EF8C(a1);
          sqlite3_free(v8);
          sub_34DABC();
          if ( v7 != 0 )
            return v7;
          goto LABEL_23;
        }
      }
    }
    *v8 = v10;
    ++*((_DWORD *)v10 + 7);
    *(_DWORD *)(a1 + 36) = v8;
    sub_34DABC();
    sqlite3_mutex_enter(*((_DWORD *)v10 + 1));
    v8[1] = *((_DWORD *)v10 + 8);
    v19 = *((_DWORD *)v10 + 1);
    *((_DWORD *)v10 + 8) = v8;
    sqlite3_mutex_leave(v19);
  }
LABEL_23:
  v20 = *(int **)(a1 + 36);
  v7 = 0;
  v21 = *v20;
  sqlite3_mutex_enter(*(_DWORD *)(*v20 + 4));
  if ( *(unsigned __int16 *)(v21 + 20) > a2 )
    goto LABEL_48;
  v22 = *(_DWORD *)(v21 + 12);
  v39 = a2 + 1;
  *(_DWORD *)(v21 + 16) = a3;
  if ( v22 < 0 )
    goto LABEL_25;
  if ( off_472364(v22, &buf) != 0 )
  {
    v7 = 4874;
    goto LABEL_48;
  }
  if ( (int)(a3 * v39) <= *(__int64 *)&buf.st_blksize )
  {
LABEL_25:
    v23 = sqlite3_realloc(*(_DWORD *)(v21 + 24), 4 * v39);
    if ( v23 == 0 )
    {
      v7 = 3082;
      goto LABEL_48;
    }
    for ( *(_DWORD *)(v21 + 24) = v23;
          ;
          *(_DWORD *)(4 * (unsigned __int16)(*(_WORD *)(v21 + 20))++ + *(_DWORD *)(v21 + 24)) = v33 )
    {
      v34 = *(unsigned __int16 *)(v21 + 20);
      if ( v34 > a2 )
      {
        v7 = 0;
        goto LABEL_48;
      }
      if ( *(int *)(v21 + 12) < 0 )
      {
        v32 = (void *)sqlite3_malloc(a3);
        v33 = v32;
        if ( v32 == nullptr )
        {
          v7 = 7;
          goto LABEL_48;
        }
        j_memset(v32, 0, a3);
      }
      else
      {
        v35 = 3;
        if ( *(_BYTE *)(v21 + 22) != 0 )
          v35 = 1;
        v33 = off_472424(nullptr, a3, v35, 1, *(_DWORD *)(v21 + 12), v34 * a3);
        if ( v33 == (void *)-1 )
        {
          v28 = 5386;
          v29 = *(const char **)(v21 + 8);
          v31 = 28101;
          v30 = "mmap";
          goto LABEL_45;
        }
      }
    }
  }
  v7 = 0;
  if ( a4 == 0 )
    goto LABEL_48;
  v24 = *(_QWORD *)&buf.st_blksize / 4096LL;
  v25 = -1;
  v26 = ((v24 + 1) << 12) - 1LL;
  do
  {
    if ( v24 >= (int)(a3 * v39) / 4096 )
      goto LABEL_25;
    v27 = sub_350DE0(*(_DWORD *)(v21 + 12), v25, v26, SHIDWORD(v26), &unk_3FB8EA, 1, nullptr);
    v25 = 4096;
    ++v24;
    v26 += 4096;
  }
  while ( v27 == 1 );
  v28 = 4874;
  v29 = *(const char **)(v21 + 8);
  v30 = "write";
  v31 = 28076;
LABEL_45:
  v7 = sub_35ECE0(v28, v30, v29, v31);
LABEL_48:
  if ( *(unsigned __int16 *)(v21 + 20) <= a2 )
    *a5 = 0;
  else
    *a5 = *(_DWORD *)(4 * a2 + *(_DWORD *)(v21 + 24));
  if ( *(_BYTE *)(v21 + 22) != 0 && v7 == 0 )
    v7 = 8;
  sqlite3_mutex_leave(*(_DWORD *)(v21 + 4));
  return v7;
}


//======================================================================
// sub_366C28
// address: 0x00366C28   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall sub_366C28(int a1, int a2, _DWORD *a3)
{
  int v6; // r6
  int result; // r0
  void **v8; // r6
  int v9; // [sp+8h] [bp-Ch]

  if ( *(_DWORD *)(a1 + 24) <= a2 )
  {
    v9 = a2 + 1;
    v6 = sqlite3_realloc(*(_DWORD *)(a1 + 32), 4 * (a2 + 1));
    if ( v6 == 0 )
    {
      *a3 = 0;
      return 7;
    }
    j_memset((void *)(v6 + 4 * *(_DWORD *)(a1 + 24)), 0, 4 * (v9 - *(_DWORD *)(a1 + 24)));
    *(_DWORD *)(a1 + 32) = v6;
    *(_DWORD *)(a1 + 24) = v9;
  }
  v8 = (void **)(*(_DWORD *)(a1 + 32) + 4 * a2);
  if ( *v8 == nullptr )
  {
    if ( *(_BYTE *)(a1 + 43) == 2 )
    {
      *v8 = sub_351CC4(0x8000u);
      if ( *(_DWORD *)(*(_DWORD *)(a1 + 32) + 4 * a2) == 0 )
      {
        result = 7;
        goto LABEL_12;
      }
    }
    else
    {
      result = (*(int (__fastcall **)(_DWORD, int, int, _DWORD, void **))(**(_DWORD **)(a1 + 4) + 52))(
                 *(_DWORD *)(a1 + 4),
                 a2,
                 0x8000,
                 *(unsigned __int8 *)(a1 + 44),
                 v8);
      if ( result != 8 )
        goto LABEL_12;
      *(_BYTE *)(a1 + 46) |= 2u;
    }
  }
  result = 0;
LABEL_12:
  *a3 = *(_DWORD *)(*(_DWORD *)(a1 + 32) + 4 * a2);
  return result;
}


//======================================================================
// sub_366CD0
// address: 0x00366CD0   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_366CD0(int a1, int a2, int *a3, _DWORD *a4, int *a5)
{
  int result; // r0
  int v9; // r2
  int v10; // r4
  int v11; // [sp+4h] [bp-4h] BYREF

  v11 = a2;
  result = sub_366C28(a1, a2, &v11);
  if ( result == 0 )
  {
    v9 = v11 + 0x4000;
    if ( a2 != 0 )
    {
      v10 = (a2 << 12) - 34;
    }
    else
    {
      v11 += 136;
      v10 = 0;
    }
    *a4 = v11 - 4;
    *a3 = v9;
    *a5 = v10;
  }
  return result;
}


//======================================================================
// sub_366D08
// address: 0x00366D08   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall sub_366D08(_DWORD *result)
{
  int v1; // r1
  _DWORD *v2; // r5
  int v3; // r3
  int v4; // r0
  int v5; // [sp+Ch] [bp-10h] BYREF
  int v6; // [sp+10h] [bp-Ch] BYREF
  int v7; // [sp+14h] [bp-8h] BYREF

  v1 = result[17];
  v2 = result;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( v1 != 0 )
  {
    sub_366CD0((int)result, (unsigned int)(v1 + 33) >> 12, &v5, &v6, &v7);
    v3 = 0;
    v4 = v2[17] - v7;
    do
    {
      if ( *(unsigned __int16 *)(v5 + v3) > v4 )
        *(_WORD *)(v5 + v3) = 0;
      v3 += 2;
    }
    while ( v3 != 0x4000 );
    return j_memset((void *)(v6 + 4 * (v4 + 1)), 0, v5 - (v6 + 4 * (v4 + 1)));
  }
  return result;
}


//======================================================================
// sub_366D60
// address: 0x00366D60   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_366D60(_DWORD *a1, int a2, int a3)
{
  int result; // r0
  int v7; // r4
  int v8; // r3
  int i; // r2
  int v10; // [sp+Ch] [bp-10h] BYREF
  int v11; // [sp+10h] [bp-Ch] BYREF
  int v12; // [sp+14h] [bp-8h] BYREF

  v10 = 0;
  v11 = 0;
  v12 = 0;
  result = sub_366CD0((int)a1, (unsigned int)(a2 + 33) >> 12, &v12, &v11, &v10);
  if ( result == 0 )
  {
    v7 = a2 - v10;
    if ( v7 == 1 )
      j_memset((void *)(v11 + 4), 0, v12 - v11 + 16380);
    if ( *(_DWORD *)(v11 + 4 * v7) != 0 )
      sub_366D08(a1);
    v8 = (383 * a3) & 0x1FFF;
    for ( i = v7; ; --i )
    {
      result = *(unsigned __int16 *)(v12 + 2 * v8);
      if ( *(_WORD *)(v12 + 2 * v8) == 0 )
        break;
      if ( i == 0 )
        return sub_35FA58(47776);
      v8 = (v8 + 1) & 0x1FFF;
    }
    *(_DWORD *)(v11 + 4 * v7) = a3;
    *(_WORD *)(v12 + 2 * v8) = v7;
  }
  return result;
}


//======================================================================
// sub_366E00
// address: 0x00366E00   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall sub_366E00(int a1, int a2, int *a3)
{
  int result; // r0
  int v7; // r1
  int i; // r2
  _WORD *v9; // r3
  bool v10; // cf
  unsigned int v11; // [sp+8h] [bp-2Ch]
  unsigned int v12; // [sp+Ch] [bp-28h]
  int v13; // [sp+1Ch] [bp-18h]
  int v14; // [sp+24h] [bp-10h] BYREF
  int v15; // [sp+28h] [bp-Ch] BYREF
  int v16; // [sp+2Ch] [bp-8h] BYREF

  v12 = *(_DWORD *)(a1 + 68);
  if ( v12 != 0 && *(_WORD *)(a1 + 40) != 0 )
  {
    v11 = (v12 + 33) >> 12;
    v13 = (383 * a2) & 0x1FFF;
    while ( 1 )
    {
      result = sub_366CD0(a1, v11, &v14, &v15, &v16);
      if ( result != 0 )
        break;
      v7 = 8193;
      for ( i = v13; ; i = (i + 1) & 0x1FFF )
      {
        v9 = (_WORD *)(v14 + 2 * i);
        if ( *v9 == 0 )
          break;
        if ( (unsigned int)(unsigned __int16)*v9 + v16 <= v12 && *(_DWORD *)(v15 + 4 * (unsigned __int16)*v9) == a2 )
          result = (unsigned __int16)*v9 + v16;
        if ( --v7 == 0 )
          return sub_35FA58(49131);
      }
      v10 = v11-- != 0;
      if ( !v10 || result != 0 )
      {
        *a3 = result;
        return 0;
      }
    }
  }
  else
  {
    *a3 = 0;
    return 0;
  }
  return result;
}


//======================================================================
// sub_366EBC
// address: 0x00366EBC   size: 0x288 (648 bytes)
//======================================================================
int __fastcall sub_366EBC(int a1, unsigned int a2, int *a3, char a4)
{
  int v7; // r6
  int v8; // r0
  int v9; // r7
  int v10; // r3
  int v11; // r0
  _DWORD *v12; // r0
  int v13; // r1
  _DWORD *v14; // r7
  int v15; // r0
  _DWORD *v16; // r0
  _BOOL4 v17; // [sp+Ch] [bp-28h]
  int v18; // [sp+14h] [bp-20h]
  int v21; // [sp+24h] [bp-10h] BYREF
  int v22; // [sp+28h] [bp-Ch] BYREF
  int v23; // [sp+2Ch] [bp-8h] BYREF

  v21 = 0;
  v22 = 0;
  if ( a2 == 1 )
  {
    v17 = false;
  }
  else
  {
    v17 = false;
    if ( *(_BYTE *)(a1 + 116) != 0 )
      v17 = *(_BYTE *)(a1 + 15) == 1 || (a4 & 2) != 0;
    if ( a2 == 0 )
      return sub_35FA58(44825);
  }
  v7 = *(_DWORD *)(a1 + 40);
  if ( v7 != 0 )
    goto LABEL_17;
  if ( !v17 )
    goto LABEL_16;
  v8 = *(_DWORD *)(a1 + 208);
  if ( v8 != 0 )
  {
    v7 = sub_366E00(v8, a2, &v22);
    if ( v7 != 0 )
      goto LABEL_42;
  }
  if ( v22 != 0 )
    goto LABEL_16;
  v9 = *(_DWORD *)(a1 + 60);
  v23 = 0;
  v7 = (*(int (__fastcall **)(int, _DWORD, unsigned int, _DWORD, _DWORD, int *))(*(_DWORD *)v9 + 68))(
         v9,
         *(_DWORD *)(*(_DWORD *)v9 + 68),
         (a2 - 1) * *(_DWORD *)(a1 + 152),
         ((unsigned __int64)(a2 - 1) * *(int *)(a1 + 152)) >> 32,
         *(_DWORD *)(a1 + 152),
         &v23);
  if ( v7 != 0 )
  {
LABEL_42:
    if ( v21 != 0 )
      sub_34DCE4(v21);
    if ( *(_DWORD *)(a1 + 120) == 0 && *(_DWORD *)(*(_DWORD *)(a1 + 204) + 12) == 0 )
      sub_3677A4(a1);
    *a3 = 0;
    return v7;
  }
  if ( v23 == 0 )
    goto LABEL_16;
  if ( *(unsigned __int8 *)(a1 + 15) > 1u )
    sub_350028(*(_DWORD *)(a1 + 204), a2, 0, &v21);
  v18 = v23;
  if ( v21 != 0 )
  {
    sub_34CAA4(*(_DWORD *)(a1 + 60));
    goto LABEL_59;
  }
  v14 = *(_DWORD **)(a1 + 136);
  if ( v14 != nullptr )
  {
    v15 = v14[3];
    v21 = *(_DWORD *)(a1 + 136);
    *(_DWORD *)(a1 + 136) = v15;
    v14[3] = 0;
    j_memset((void *)v14[2], 0, *(unsigned __int16 *)(a1 + 140));
LABEL_57:
    v14[5] = a2;
    v14[1] = v18;
    ++*(_DWORD *)(a1 + 120);
    goto LABEL_59;
  }
  v16 = sub_351CC4(*(unsigned __int16 *)(a1 + 140) + 40);
  v14 = v16;
  v21 = (int)v16;
  if ( v16 != nullptr )
  {
    v16[2] = v16 + 10;
    *((_WORD *)v16 + 12) = 64;
    *((_WORD *)v16 + 13) = 1;
    v16[4] = a1;
    goto LABEL_57;
  }
  sub_34CAA4(*(_DWORD *)(a1 + 60));
  v7 = 7;
LABEL_59:
  if ( v21 != 0 )
  {
    *a3 = v21;
    return 0;
  }
  if ( v7 != 0 )
    goto LABEL_42;
LABEL_16:
  v7 = sub_350028(*(_DWORD *)(a1 + 204), a2, 1, a3);
  if ( v7 != 0 )
  {
LABEL_17:
    v21 = 0;
    goto LABEL_42;
  }
  v10 = *a3;
  v7 = a4 & 1;
  if ( *(_DWORD *)(*a3 + 16) != 0 && (a4 & 1) == 0 )
  {
    ++*(_DWORD *)(a1 + 184);
    return v7;
  }
  v21 = *a3;
  *(_DWORD *)(v10 + 16) = a1;
  if ( (a2 & 0x80000000) != 0 || a2 == dword_471740 / *(_DWORD *)(a1 + 152) + 1 )
  {
    v7 = sub_35FA58(44896);
    goto LABEL_42;
  }
  if ( *(_BYTE *)(a1 + 14) != 0 || *(_DWORD *)(a1 + 24) < a2 || (a4 & 1) != 0 || **(_DWORD **)(a1 + 60) == 0 )
  {
    if ( a2 > *(_DWORD *)(a1 + 156) )
    {
      v7 = 13;
      goto LABEL_42;
    }
    if ( (a4 & 1) != 0 )
    {
      sub_34CB1C();
      if ( a2 <= *(_DWORD *)(a1 + 28) )
        sub_355C78(*(_DWORD **)(a1 + 56), a2);
      sub_355D9E(a1, a2);
      sub_34CB30();
    }
    j_memset(*(void **)(v21 + 4), 0, *(_DWORD *)(a1 + 152));
    return 0;
  }
  v11 = *(_DWORD *)(a1 + 208);
  if ( v11 != 0 && !v17 )
  {
    v7 = sub_366E00(v11, a2, &v22);
    if ( v7 != 0 )
      goto LABEL_42;
  }
  v12 = (_DWORD *)v21;
  v13 = v22;
  ++*(_DWORD *)(a1 + 188);
  v7 = sub_3503D8(v12, v13);
  if ( v7 != 0 )
    goto LABEL_42;
  return v7;
}


//======================================================================
// sub_367150
// address: 0x00367150   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_367150(int *a1, unsigned int a2, _DWORD *a3, char a4)
{
  int v7; // r0
  int v8; // r3
  int v9; // r3
  int v10; // r1
  unsigned int v12; // [sp+4h] [bp-4h] BYREF

  v12 = a2;
  v7 = sub_366EBC(*a1, a2, (int *)&v12, a4);
  v8 = v7;
  if ( v7 == 0 )
  {
    v9 = *(_DWORD *)(v12 + 8);
    v10 = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(v9 + 68) = v12;
    *(_DWORD *)(v9 + 56) = v10;
    *(_DWORD *)(v9 + 52) = a1;
    *(_DWORD *)(v9 + 72) = a2;
    if ( a2 == 1 )
      LOBYTE(v7) = 100;
    *(_BYTE *)(v9 + 5) = v7;
    *a3 = v9;
    return 0;
  }
  return v8;
}


//======================================================================
// sub_367184
// address: 0x00367184   size: 0x266 (614 bytes)
//======================================================================
int __fastcall sub_367184(int a1, int *a2, _DWORD *a3, int a4, int a5)
{
  int v7; // r7
  int result; // r0
  int *v9; // r7
  int v10; // r5
  int v11; // r3
  int v12; // r2
  int i; // r3
  int v14; // r2
  _BOOL4 v15; // r3
  _DWORD *v16; // r7
  int v17; // r0
  unsigned int v18; // r1
  int v19; // r0
  _DWORD *v20; // r0
  int v21; // r7
  int v22; // [sp+Ch] [bp-30h]
  __int64 v23; // [sp+10h] [bp-2Ch]
  unsigned __int8 *v24; // [sp+18h] [bp-24h]
  _DWORD *v27; // [sp+2Ch] [bp-10h] BYREF
  unsigned int v28; // [sp+30h] [bp-Ch] BYREF
  unsigned int v29[2]; // [sp+34h] [bp-8h] BYREF

  v24 = *(unsigned __int8 **)(a1 + 200);
  if ( a4 != 0 )
    v7 = *(_DWORD *)(a1 + 64);
  else
    v7 = *(_DWORD *)(a1 + 68);
  v22 = v7;
  result = sub_34DF32(v7, (int)a2, *a2, a2[1], &v28);
  if ( result == 0 )
  {
    v9 = (int *)(a1 + 152);
    result = sub_34CA3A(v22);
    v10 = result;
    if ( result == 0 )
    {
      v23 = *(_QWORD *)a2 + *v9 + 4 + 4 * a4;
      *(_QWORD *)a2 = v23;
      if ( v28 == 0 || v28 == dword_471740 / *v9 + 1 )
        return 101;
      result = 0;
      if ( v28 > *(_DWORD *)(a1 + 24) )
        return result;
      v11 = sub_352940((int)a3, v28);
      result = 0;
      if ( v11 != 0 )
        return result;
      if ( a4 != 0 )
      {
        result = sub_34DF32(v22, (int)v29, v23 - 4, (unsigned __int64)(v23 - 4) >> 32, v29);
        if ( result != 0 )
          return result;
        if ( a5 == 0 )
        {
          v12 = *(_DWORD *)(a1 + 48);
          for ( i = *v9; ; v12 += v24[i] )
          {
            i -= 200;
            if ( i <= 0 )
              break;
          }
          if ( v12 != v29[0] )
            return 101;
        }
      }
      if ( a3 == nullptr || (result = sub_355C78(a3, v28)) == 0 )
      {
        if ( v28 == 1 )
        {
          v14 = v24[20];
          if ( *(__int16 *)(a1 + 142) != v14 )
            *(_WORD *)(a1 + 142) = v14;
        }
        if ( *(_DWORD *)(a1 + 208) != 0 )
          v27 = nullptr;
        else
          v27 = (_DWORD *)sub_353F9C();
        if ( a4 != 0 )
        {
          v15 = true;
          if ( *(_BYTE *)(a1 + 7) == 0 )
            v15 = *(_QWORD *)a2 <= *(_QWORD *)(a1 + 80);
        }
        else
        {
          v15 = v27 == nullptr || (v27[6] & 4) == 0;
        }
        v16 = *(_DWORD **)(a1 + 60);
        if ( *v16 != 0 && (unsigned int)*(unsigned __int8 *)(a1 + 15) - 1 > 2 && v15 )
        {
          v17 = sub_34CA4C((int)v16);
          v18 = v28;
          v10 = v17;
          if ( v28 > *(_DWORD *)(a1 + 32) )
            *(_DWORD *)(a1 + 32) = v28;
          v19 = *(_DWORD *)(a1 + 88);
          if ( v19 != 0 )
            sub_367FEC(v19, v18);
        }
        else if ( a4 == 0 && v27 == nullptr )
        {
          *(_BYTE *)(a1 + 19) |= 2u;
          result = sub_366EBC(a1, v28, (int *)&v27, 1);
          v10 = result;
          *(_BYTE *)(a1 + 19) &= ~2u;
          if ( result != 0 )
            return result;
          v20 = v27;
          *((_WORD *)v27 + 12) &= ~8u;
          sub_34DD1C((int)v20);
        }
        if ( v27 != nullptr )
        {
          v21 = v27[1];
          j_memcpy((void *)v21, v24, *(_DWORD *)(a1 + 152));
          (*(void (__fastcall **)(_DWORD *))(a1 + 196))(v27);
          if ( a4 != 0 && (a5 == 0 || *(_QWORD *)a2 <= *(_QWORD *)(a1 + 80)) )
            sub_3529C0(v27);
          if ( v28 == 1 )
            *(_OWORD *)(a1 + 100) = *(_OWORD *)(v21 + 24);
          sub_352990((int)v27);
        }
        return v10;
      }
    }
  }
  return result;
}


//======================================================================
// sub_3673F0
// address: 0x003673F0   size: 0x328 (808 bytes)
//======================================================================
int __fastcall sub_3673F0(const char **a1, int a2)
{
  int v3; // r0
  int v4; // r4
  unsigned __int8 *v5; // r7
  int v6; // r7
  int v7; // r0
  int v8; // r0
  const char *v9; // r6
  __int64 v10; // r2
  int v11; // r0
  int i; // r6
  int v13; // r0
  int v14; // r6
  int v15; // r7
  unsigned int j; // r7
  int *v18; // [sp+8h] [bp-4Ch]
  char *v19; // [sp+10h] [bp-44h]
  unsigned __int8 *v20; // [sp+10h] [bp-44h]
  int v21; // [sp+14h] [bp-40h]
  int v22; // [sp+18h] [bp-3Ch]
  int v24; // [sp+24h] [bp-30h]
  int *v25; // [sp+24h] [bp-30h]
  unsigned __int8 *v26; // [sp+28h] [bp-2Ch]
  unsigned int v27; // [sp+2Ch] [bp-28h]
  unsigned int v28; // [sp+30h] [bp-24h] BYREF
  const char *v29; // [sp+34h] [bp-20h] BYREF
  int v30; // [sp+38h] [bp-1Ch]
  int v31; // [sp+3Ch] [bp-18h]
  __int64 v32; // [sp+40h] [bp-14h]
  __int64 v33; // [sp+48h] [bp-Ch]

  v19 = (char *)*a1;
  v3 = (int)a1[16];
  v29 = nullptr;
  v30 = 1;
  v21 = 0;
  v4 = sub_34CA72(v3);
  if ( v4 != 0 )
    goto LABEL_32;
  v5 = (unsigned __int8 *)a1[50];
  v21 = 0;
  v4 = sub_351128((int)a1[16], v5, *((_DWORD *)*a1 + 2) + 1);
  if ( v4 != 0 )
    goto LABEL_32;
  if ( *v5 != 0 )
  {
    v7 = sub_34CAD0((int)v19);
    if ( v7 != 0 )
    {
      v4 = v7;
      v21 = 0;
      goto LABEL_32;
    }
  }
  v21 = 0;
  a1[18] = nullptr;
  a1[19] = nullptr;
  v6 = a2;
  while ( 2 )
  {
    v8 = sub_356ED8((int)a1, a2, v32, HIDWORD(v32), &v28, (unsigned int *)&v29);
    if ( v8 != 0 )
    {
      if ( v8 != 101 )
        v4 = v8;
    }
    else
    {
      if ( v28 == -1 )
        v28 = (v32 - (unsigned int)a1[37]) / (int)(a1[38] + 8);
      v9 = a1[18];
      if ( v28 == 0 && a2 == 0 )
      {
        v10 = (__int64)&a1[37][*((_QWORD *)a1 + 10)];
        if ( *((_QWORD *)a1 + 9) == v10 )
          v28 = (v32 - v10) / (int)(a1[38] + 8);
      }
      if ( v9 == a1[37] && a1[19] == nullptr )
      {
        v11 = sub_35019C((int)a1, (unsigned int)v29);
        if ( v11 != 0 )
        {
          v4 = v11;
          break;
        }
        a1[6] = v29;
      }
      for ( i = v21; ; ++i )
      {
        if ( i - v21 >= v28 )
          goto LABEL_9;
        if ( v6 != 0 )
          sub_356D1C((int)a1);
        v6 = 0;
        v13 = sub_367184((int)a1, (int *)a1 + 18, nullptr, 1, 0);
        if ( v13 != 0 )
          break;
        v6 = 0;
      }
      if ( v13 == 101 )
      {
        *((_QWORD *)a1 + 9) = v32;
LABEL_9:
        v21 = i;
        continue;
      }
      v21 = i;
      if ( v13 == 522 )
        v4 = 0;
      else
        v4 = v13;
    }
    break;
  }
LABEL_32:
  *((_BYTE *)a1 + 17) = *((_BYTE *)a1 + 12);
  if ( v4 != 0 )
    goto LABEL_60;
  v20 = (unsigned __int8 *)a1[50];
  v4 = sub_351128((int)a1[16], v20, *((_DWORD *)*a1 + 2) + 1);
  if ( v4 != 0 )
    goto LABEL_60;
  if ( (unsigned int)*((unsigned __int8 *)a1 + 15) - 1 > 2 )
  {
    v4 = sub_352B0C((int)a1);
    if ( v4 != 0 )
      goto LABEL_60;
  }
  v4 = sub_357A74((int)a1, *v20 != 0, 0);
  if ( v4 != 0 || *v20 == 0 || v30 == 0 )
    goto LABEL_60;
  v14 = (int)*a1;
  v18 = (int *)sub_351CC4(2 * *((_DWORD *)*a1 + 1));
  v24 = *(_DWORD *)(v14 + 4);
  if ( v18 == nullptr )
    goto LABEL_42;
  v4 = sub_34CAB4(v14, (int)v20, (int)v18, 16385);
  v22 = 0;
  if ( v4 == 0 )
  {
    v4 = sub_34CA72((int)v18);
    if ( v4 == 0 )
    {
      v27 = *(_DWORD *)(v14 + 8) + 1;
      v22 = sub_351664(v27 + v33 + 1);
      if ( v22 == 0 )
      {
LABEL_42:
        v4 = 7;
        sqlite3_free(0);
        goto LABEL_58;
      }
      v15 = v33;
      v4 = sub_34CA3A((int)v18);
      if ( v4 == 0 )
      {
        v26 = (unsigned __int8 *)(v22 + v15 + 1);
        v25 = (int *)((char *)v18 + v24);
        *(_BYTE *)(v22 + v33) = 0;
        for ( j = v22; v33 > (int)(j - v22); j += sub_34CF50(j) + 1 )
        {
          v4 = sub_34CAD0(v14);
          if ( v4 != 0 )
            goto LABEL_57;
          if ( v31 != 0 )
          {
            v4 = sub_34CAB4(v14, j, (int)v25, 2049);
            if ( v4 != 0 )
              goto LABEL_57;
            v4 = sub_351128((int)v25, v26, v27);
            sub_34CA24(v25);
            if ( v4 != 0 || *v26 != 0 && j_strcmp((const char *)v26, (const char *)v20) == 0 )
              goto LABEL_57;
          }
        }
        sub_34CA24(v18);
        v4 = sub_34CAC8(v14);
      }
    }
  }
LABEL_57:
  sqlite3_free(v22);
LABEL_58:
  if ( v18 != nullptr )
  {
    sub_34CA24(v18);
    sqlite3_free(v18);
  }
LABEL_60:
  if ( a2 != 0 && v21 != 0 )
    sqlite3_log(539, (int)"recovered %d pages from %s", v21, a1[43]);
  sub_35666A((int)a1);
  return v4;
}


//======================================================================
// sub_36772C
// address: 0x0036772C   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_36772C(int a1)
{
  unsigned int v1; // r5
  int result; // r0
  int v4; // r5
  int v5; // r1

  v1 = *(unsigned __int8 *)(a1 + 15);
  if ( v1 == 6 )
    return *(_DWORD *)(a1 + 40);
  if ( v1 <= 1 )
    return 0;
  if ( *(_DWORD *)(a1 + 208) != 0 )
  {
    v4 = sub_3678A8(a1, 2, -1);
    v5 = sub_357A74(a1, *(unsigned __int8 *)(a1 + 18), 0);
    if ( v4 != 0 )
      v5 = v4;
  }
  else if ( **(_DWORD **)(a1 + 64) != 0 && v1 != 2 )
  {
    v5 = sub_3673F0((const char **)a1, 0);
  }
  else
  {
    result = sub_357A74(a1, 0, 0);
    v5 = result;
    if ( *(_BYTE *)(a1 + 14) == 0 && v1 != 2 )
    {
      *(_DWORD *)(a1 + 40) = 4;
      *(_BYTE *)(a1 + 15) = 6;
      return result;
    }
  }
  return sub_34DFE0(a1, v5);
}


//======================================================================
// sub_3677A4
// address: 0x003677A4   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_3677A4(int a1)
{
  unsigned int v1; // r3

  v1 = *(unsigned __int8 *)(a1 + 15);
  if ( v1 != 6 && *(_BYTE *)(a1 + 15) != 0 )
  {
    if ( v1 <= 1 )
    {
      if ( *(_BYTE *)(a1 + 4) == 0 )
        sub_357A74(a1, *(unsigned __int8 *)(a1 + 4), *(unsigned __int8 *)(a1 + 4));
    }
    else
    {
      sub_34CB1C();
      sub_36772C(a1);
      sub_34CB30();
    }
  }
  return sub_356D36(a1);
}


//======================================================================
// sub_3677DA
// address: 0x003677DA   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_3677DA(int a1)
{
  int *v1; // r4
  int v3; // [sp+0h] [bp-8h]

  v3 = a1;
  v1 = *(int **)(a1 + 16);
  if ( (*(_WORD *)(a1 + 24) & 0x40) != 0 )
  {
    --v1[30];
    *(_DWORD *)(a1 + 12) = v1[34];
    v1[34] = a1;
    v3 = *(_DWORD *)(a1 + 4);
    sub_34CAA4(v1[15]);
  }
  else
  {
    sub_352990(a1);
  }
  if ( v1[30] == 0 && *(_DWORD *)(v1[51] + 12) == 0 )
    sub_3677A4((int)v1);
  return v3;
}


//======================================================================
// sub_367834
// address: 0x00367834   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_367834(int a1, int a2, int a3)
{
  int v3; // r5
  int v5; // r0
  _DWORD *v6; // r4
  int i; // r3
  int v9[2]; // [sp+4h] [bp+0h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v3 = 0;
  v5 = *(_DWORD *)(a1 + 204);
  v9[0] = 0;
  sub_350028(v5, a2, 0, v9);
  v6 = (_DWORD *)v9[0];
  if ( v9[0] != 0 )
  {
    if ( *(_WORD *)(v9[0] + 26) == 1 )
    {
      sub_34DCE4(v9[0]);
    }
    else
    {
      v9[0] = 0;
      v3 = sub_366E00(*(_DWORD *)(a1 + 208), *(int *)((char *)&dword_14 + (_DWORD)v6), v9);
      if ( v3 == 0 )
      {
        v3 = sub_3503D8(v6, v9[0]);
        if ( v3 == 0 )
          (*(void (__fastcall **)(_DWORD *))(a1 + 196))(v6);
      }
      sub_3677DA((int)v6);
    }
  }
  else
  {
    v3 = 0;
  }
  for ( i = *(_DWORD *)(a1 + 88); i != 0; i = *(_DWORD *)(i + 44) )
    *(_DWORD *)(i + 16) = 1;
  return v3;
}


//======================================================================
// sub_3678A8
// address: 0x003678A8   size: 0x2F8 (760 bytes)
//======================================================================
int __fastcall sub_3678A8(int a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r5
  int v6; // r6
  void **v7; // r0
  int *v8; // r5
  _DWORD *v9; // r6
  int i; // r4
  int v11; // r4
  int v12; // r6
  unsigned int v13; // r5
  int v14; // r6
  _DWORD *v15; // r3
  unsigned int v16; // r2
  int *v17; // r3
  int v18; // r0
  _DWORD *v19; // r0
  int v20; // r2
  _DWORD *v21; // r5
  __int64 v22; // r4
  int v23; // r1
  unsigned int v24; // r5
  __int64 v25; // r2
  _DWORD *v26; // r0
  unsigned int v27; // r3
  unsigned int v28; // r5
  int v29; // r3
  unsigned int v31; // [sp+Ch] [bp-30h]
  unsigned int v32; // [sp+10h] [bp-2Ch]
  __int64 v33; // [sp+10h] [bp-2Ch]
  _DWORD *v35; // [sp+18h] [bp-24h]
  int v36; // [sp+1Ch] [bp-20h]
  unsigned int v37; // [sp+2Ch] [bp-10h] BYREF
  __int64 v38; // [sp+30h] [bp-Ch] BYREF

  v36 = *(_DWORD *)(a1 + 40);
  if ( v36 != 0 || a3 >= *(_DWORD *)(a1 + 96) )
    return v36;
  v4 = a3 + (a2 != 1);
  v5 = v4;
  v6 = 48 * v4;
  while ( v5 < *(_DWORD *)(a1 + 96) )
  {
    ++v5;
    sub_351F88(*(_DWORD *)(*(_DWORD *)(a1 + 92) + v6 + 16));
    v6 += 48;
  }
  *(_DWORD *)(a1 + 96) = v4;
  if ( a2 != 1 )
  {
    v8 = (int *)(a1 + 208);
    if ( *(_DWORD *)(a1 + 208) == 0 && **(_DWORD **)(a1 + 64) == 0 )
      return v36;
    if ( v4 != 0 && (v9 = (_DWORD *)(*(_DWORD *)(a1 + 92) + 48 * v4 - 48)) != nullptr )
    {
      v35 = sub_351CDC(v9[5]);
      if ( v35 == nullptr )
        return 7;
      v29 = v9[5];
    }
    else
    {
      v29 = *(_DWORD *)(a1 + 28);
      v35 = nullptr;
      v9 = nullptr;
    }
    *(_DWORD *)(a1 + 24) = v29;
    *(_BYTE *)(a1 + 17) = *(_BYTE *)(a1 + 12);
    if ( v9 != nullptr || (v11 = *v8, *v8 == 0) )
    {
      v33 = *(_QWORD *)(a1 + 72);
      if ( v9 == nullptr || *v8 != 0 )
      {
        *(_DWORD *)(a1 + 72) = 0;
        *(_DWORD *)(a1 + 76) = 0;
LABEL_48:
        i = 0;
        goto LABEL_54;
      }
      HIDWORD(v22) = v9[3];
      v31 = v9[2];
      LODWORD(v22) = v31;
      if ( v22 == 0 )
      {
        HIDWORD(v22) = *(_DWORD *)(a1 + 76);
        v31 = *(_DWORD *)(a1 + 72);
      }
      v23 = v9[1];
      *(_DWORD *)(a1 + 72) = *v9;
      *(_DWORD *)(a1 + 76) = v23;
      do
      {
        if ( *(_QWORD *)(a1 + 72) >= __SPAIR64__(HIDWORD(v22), v31) )
          goto LABEL_48;
        i = sub_367184(a1, (int *)(a1 + 72), v35, 1, 1);
      }
      while ( i == 0 );
LABEL_54:
      while ( i == 0 )
      {
LABEL_61:
        if ( *(_QWORD *)(a1 + 72) >= v33 )
          break;
        v37 = 0;
        i = sub_356ED8(a1, 0, v33, HIDWORD(v33), &v37, (unsigned int *)&v38);
        if ( v37 == 0 )
        {
          v25 = *(unsigned int *)(a1 + 148) + *(_QWORD *)(a1 + 80);
          if ( *(_QWORD *)(a1 + 72) == v25 )
            v37 = (v33 - v25) / (*(_DWORD *)(a1 + 152) + 8);
        }
        v24 = 0;
        while ( i == 0 )
        {
          if ( v24 >= v37 || *(_QWORD *)(a1 + 72) >= v33 )
            goto LABEL_61;
          ++v24;
          i = sub_367184(a1, (int *)(a1 + 72), v35, 1, 1);
        }
      }
      if ( v9 != nullptr )
      {
        v38 = (unsigned int)v9[6] * (__int64)(*(_DWORD *)(a1 + 152) + 4);
        v26 = *(_DWORD **)(a1 + 208);
        if ( v26 != nullptr )
        {
          if ( v9[10] != v26[26] )
          {
            v9[7] = 0;
            v9[10] = v26[26];
          }
          v27 = v9[7];
          if ( v27 < v26[17] )
          {
            v26[17] = v27;
            v26[19] = v9[8];
            v26[20] = v9[9];
            sub_366D08(v26);
          }
        }
        else
        {
          v36 = i;
        }
        v28 = v9[6];
        for ( i = v36; i == 0 && v28 < *(_DWORD *)(a1 + 52); i = sub_367184(a1, (int *)&v38, v35, 0, 1) )
          ++v28;
      }
      sub_351F88((int)v35);
      if ( i == 0 )
        *(_QWORD *)(a1 + 72) = v33;
    }
    else
    {
      *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 28);
      if ( *(_BYTE *)(v11 + 44) != 0 )
      {
        v32 = *(_DWORD *)(v11 + 68);
        j_memcpy((void *)(v11 + 52), **(const void ***)(v11 + 32), 0x30u);
        v12 = *(_DWORD *)(v11 + 68);
        v13 = v12 + 1;
        v14 = 4 * (v12 + 34);
        while ( v13 <= v32 )
        {
          v15 = *(_DWORD **)(v11 + 32);
          v16 = (v13 + 33) >> 12;
          if ( v16 != 0 )
          {
            v16 *= 4;
            v17 = (int *)(*(_DWORD *)((char *)v15 + v16) + ((4 * (v13 - 4063)) & 0x3FFF));
          }
          else
          {
            v17 = (int *)(*v15 + v14);
          }
          v18 = sub_367834(a1, *v17, v16);
          ++v13;
          v14 += 4;
          if ( v18 != 0 )
          {
            v36 = v18;
            break;
          }
        }
        if ( v32 != *(_DWORD *)(v11 + 68) )
          sub_366D08((_DWORD *)v11);
      }
      v19 = sub_353FAC(*(_DWORD **)(a1 + 204));
      i = v36;
      while ( v19 != nullptr && i == 0 )
      {
        v21 = (_DWORD *)v19[3];
        i = sub_367834(a1, v19[5], v20);
        v19 = v21;
      }
    }
    return i;
  }
  if ( v4 == 0 )
  {
    v7 = *(void ***)(a1 + 68);
    if ( *v7 != nullptr )
    {
      if ( *v7 == &unk_45465C )
        v36 = sub_34CA5E((int)v7);
      *(_DWORD *)(a1 + 52) = 0;
    }
  }
  return v36;
}


//======================================================================
// sub_367BA8
// address: 0x00367BA8   size: 0x122 (290 bytes)
//======================================================================
int __fastcall sub_367BA8(int a1)
{
  int v1; // r4
  unsigned int v3; // r1
  int v4; // r0
  unsigned int v5; // r2
  unsigned int v6; // r3
  unsigned int v7; // r7
  int v8; // r0
  int v9; // r5
  int v10; // r0
  int v11; // r5
  int v13; // [sp+Ch] [bp-18h]
  int v14; // [sp+10h] [bp-14h]
  int v15; // [sp+14h] [bp-10h]
  int v16; // [sp+1Ch] [bp-8h] BYREF

  v1 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD *)(v1 + 152);
  if ( *(_DWORD *)(v1 + 148) <= v3 )
    return sub_358CB4(a1);
  v4 = *(_DWORD *)(v1 + 148) / v3;
  *(_BYTE *)(v1 + 19) |= 4u;
  v5 = *(_DWORD *)(a1 + 20);
  v6 = *(_DWORD *)(v1 + 24);
  v15 = (v5 - 1) & -v4;
  if ( v5 <= v6 )
  {
    v13 = v4;
    if ( v4 + v15 > v6 )
      v13 = v6 - v15;
  }
  else
  {
    v13 = v5 - v15;
  }
  v7 = v15 + 1;
  v14 = 0;
  v11 = 0;
  while ( (int)(~v15 + v7) < v13 )
  {
    if ( v11 != 0 )
      goto LABEL_28;
    if ( v7 != *(_DWORD *)(a1 + 20) && sub_352940(*(_DWORD *)(v1 + 56), v7) != 0 )
    {
      v8 = sub_353F9C();
      v16 = v8;
      if ( v8 == 0 )
        goto LABEL_19;
    }
    else
    {
      if ( v7 == dword_471740 / *(_DWORD *)(v1 + 152) + 1 )
        goto LABEL_19;
      v11 = sub_366EBC(v1, v7, &v16, 0);
      if ( v11 != 0 )
        goto LABEL_19;
      v11 = sub_358CB4(v16);
      v8 = v16;
    }
    if ( (*(_WORD *)(v8 + 24) & 4) != 0 )
      v14 = 1;
    sub_3677DA(v8);
LABEL_19:
    ++v7;
  }
  if ( v11 == 0 )
  {
    v9 = v15 + 1;
    if ( v14 != 0 )
    {
      while ( ~v15 + v9 < v13 )
      {
        v10 = sub_353F9C();
        if ( v10 != 0 )
        {
          *(_WORD *)(v10 + 24) |= 4u;
          sub_3677DA(v10);
        }
        ++v9;
      }
    }
    v11 = 0;
  }
LABEL_28:
  *(_BYTE *)(v1 + 19) &= ~4u;
  return v11;
}


//======================================================================
// sub_367CD0
// address: 0x00367CD0   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_367CD0(int a1)
{
  int v1; // r7
  char *v3; // r4
  __int16 v4; // r3
  int v6; // [sp+4h] [bp-8h]

  v1 = *(_DWORD *)(a1 + 12);
  v3 = *(char **)(v1 + 56);
  v6 = sub_367BA8(*(_DWORD *)(v1 + 68));
  if ( v6 == 0 )
  {
    strcpy(v3, "SQLite format 3");
    v3[16] = BYTE1(*(_DWORD *)(a1 + 32));
    v4 = *(_WORD *)(a1 + 34);
    v3[18] = 1;
    v3[19] = 1;
    v3[17] = v4;
    v3[20] = *(_DWORD *)(a1 + 32) - *(_DWORD *)(a1 + 36);
    v3[21] = 64;
    v3[22] = 32;
    v3[23] = 32;
    j_memset(v3 + 24, 0, 0x4Cu);
    sub_35FACC(v1, 13);
    *(_WORD *)(a1 + 22) |= 2u;
    sub_34D8F0(v3 + 52, *(unsigned __int8 *)(a1 + 17));
    sub_34D8F0(v3 + 64, *(unsigned __int8 *)(a1 + 18));
    *(_DWORD *)(a1 + 44) = 1;
    v3[31] = 1;
  }
  return v6;
}


//======================================================================
// sub_367D50
// address: 0x00367D50   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_367D50(int a1, int a2, int a3)
{
  int v5; // r5
  int v6; // r4

  if ( a1 == 0 )
    return 0;
  v5 = 0;
  if ( *(_BYTE *)(a1 + 8) == 2 )
  {
    v6 = *(_DWORD *)(a1 + 4);
    sub_3574C2(a1);
    v5 = sub_3678A8(*(_DWORD *)v6, a2, a3);
    if ( v5 == 0 )
    {
      if ( a3 < 0 && (*(_WORD *)(v6 + 22) & 8) != 0 )
        *(_DWORD *)(v6 + 44) = 0;
      if ( *(_DWORD *)(v6 + 44) == 0 )
        v5 = sub_367CD0(v6);
      *(_DWORD *)(v6 + 44) = sub_34D8D8((unsigned int *)(*(_DWORD *)(*(_DWORD *)(v6 + 12) + 56) + 28));
    }
    sub_35655E(a1);
  }
  return v5;
}


//======================================================================
// sub_367DAC
// address: 0x00367DAC   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_367DAC(_DWORD *a1, int a2)
{
  _DWORD *v2; // r4
  int v3; // r5
  int v6; // r3
  int v7; // r0
  int v8; // r3
  _DWORD *v9; // r6
  _DWORD *v10; // r4
  int v11; // r3
  int v13; // [sp+4h] [bp-10h]
  int i; // [sp+8h] [bp-Ch]
  int v15; // [sp+Ch] [bp-8h]

  v2 = (_DWORD *)*a1;
  v3 = 0;
  if ( *(_DWORD *)(*a1 + 492) != 0 )
  {
    v6 = a1[26];
    if ( v6 != 0 )
    {
      v15 = v6 - 1;
      for ( i = 0; i < v2[5]; ++i )
      {
        v13 = *(_DWORD *)(v2[4] + 16 * i + 4);
        if ( v13 != 0 )
        {
          if ( a2 != 2 || (v7 = sub_367D50(v13, 2, v15)) == 0 )
            v7 = sub_367D50(v13, 1, v15);
          if ( v3 == 0 )
            v3 = v7;
        }
      }
      --v2[123];
      a1[26] = 0;
      if ( v3 == 0 )
      {
        if ( a2 == 2 )
        {
          v3 = sub_34F5AA((int)v2, 2, v15);
          if ( v3 != 0 )
            goto LABEL_18;
        }
        v3 = sub_34F5AA((int)v2, 1, v15);
      }
      if ( a2 == 2 )
      {
LABEL_18:
        v8 = a1[39];
        v2[124] = a1[38];
        v2[125] = v8;
        v9 = a1 + 40;
        v10 = v2 + 126;
        v11 = v9[1];
        *v10 = *v9;
        v10[1] = v11;
      }
    }
  }
  return v3;
}


//======================================================================
// sub_367E76
// address: 0x00367E76   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_367E76(int a1, int a2, int a3)
{
  int v3; // r6
  int v6; // r3
  int v7; // r5
  int v10; // [sp+4h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 4);
  sub_3574C2(a1);
  v6 = *(_DWORD *)(v3 + 12);
  v10 = *(_DWORD *)(v6 + 56);
  v7 = sub_367BA8(*(_DWORD *)(v6 + 68));
  if ( v7 == 0 )
  {
    sub_34D8F0((_BYTE *)(v10 + 4 * (a2 + 9)), a3);
    if ( a2 == 7 )
      *(_BYTE *)(v3 + 18) = a3;
  }
  sub_35655E(a1);
  return v7;
}


//======================================================================
// sub_367EB6
// address: 0x00367EB6   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_367EB6(int result)
{
  if ( result != 0 )
    return sub_3677DA(result);
  return result;
}


//======================================================================
// sub_367EC4
// address: 0x00367EC4   size: 0x122 (290 bytes)
//======================================================================
int __fastcall sub_367EC4(int a1, unsigned int a2, int a3, int a4)
{
  int *v5; // r3
  int v6; // r2
  signed int v7; // r4
  int v8; // r4
  __int64 i; // r6
  __int64 v11; // [sp+0h] [bp-3Ch]
  void *v12; // [sp+8h] [bp-34h]
  _BYTE *v13; // [sp+8h] [bp-34h]
  signed int v14; // [sp+Ch] [bp-30h]
  __int64 v15; // [sp+10h] [bp-2Ch]
  size_t v16; // [sp+20h] [bp-1Ch]
  int v17; // [sp+24h] [bp-18h]
  int v20; // [sp+34h] [bp-8h] BYREF

  v5 = *(int **)(*(_DWORD *)(a1 + 4) + 4);
  v17 = *v5;
  v6 = *(_DWORD *)(a1 + 24);
  v14 = v5[8];
  v16 = v14;
  v7 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 32);
  if ( v14 > v7 )
    v16 = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 32);
  v11 = v7;
  v15 = a2 * (__int64)v7;
  if ( v7 == v14 )
    v8 = 0;
  else
    v8 = 8 * (*(_BYTE *)(v17 + 14) != 0);
  for ( i = v15 - v11; v8 == 0 && v15 > i; i += v14 )
  {
    v20 = 0;
    v12 = (void *)(i / v14 + 1);
    if ( v12 != (void *)((unsigned int)dword_471740 / *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) + 32) + 1) )
    {
      v8 = sub_366EBC(v17, (unsigned int)v12, &v20, 0);
      if ( v8 == 0 )
      {
        v8 = sub_367BA8(v20);
        if ( v8 == 0 )
        {
          v13 = (_BYTE *)(*(_DWORD *)(v20 + 4) + i % v14);
          j_memcpy(v13, (const void *)(a3 + i % v11), v16);
          **(_BYTE **)(v20 + 8) = 0;
          if ( i == 0 && a4 == 0 )
            sub_34D8F0(v13 + 28, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 24) + 4) + 44));
        }
      }
      sub_367EB6(v20);
    }
  }
  return v8;
}


//======================================================================
// sub_367FEC
// address: 0x00367FEC   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_367FEC(int result, unsigned int a2, int a3)
{
  _DWORD *i; // r4
  int v6; // r3
  int v7; // r6

  for ( i = (_DWORD *)result; i != nullptr; i = (_DWORD *)i[11] )
  {
    v6 = i[7];
    if ( (v6 == 0 || (unsigned int)(v6 - 5) <= 1) && a2 < i[4] )
    {
      sqlite3_mutex_enter(*(_DWORD *)(*i + 12));
      v7 = sub_367EC4((int)i, a2, a3, 1);
      result = sqlite3_mutex_leave(*(_DWORD *)(*i + 12));
      if ( v7 != 0 )
        i[7] = v7;
    }
  }
  return result;
}


//======================================================================
// sub_368034
// address: 0x00368034   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_368034(int a1, int a2)
{
  _DWORD *v2; // r2
  unsigned int v5; // r3
  int v6; // r6
  unsigned int v7; // r7
  int v9; // [sp+8h] [bp-1Ch]

  v2 = *(_DWORD **)(a1 + 60);
  if ( *v2 != 0 || (v6 = sub_34CAB4(*(_DWORD *)a1, 0, (int)v2, *(_DWORD *)(a1 + 144) | 0x1E)) == 0 )
  {
    v5 = *(_DWORD *)(a1 + 36);
    if ( v5 >= *(_DWORD *)(a1 + 24) )
      goto LABEL_9;
    v6 = *(_DWORD *)(a2 + 12);
    if ( v6 != 0 || *(_DWORD *)(a2 + 20) > v5 )
    {
      sub_34CA86(*(_DWORD *)(a1 + 60));
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 24);
LABEL_9:
      v6 = 0;
    }
  }
  while ( v6 == 0 && a2 != 0 )
  {
    v7 = *(_DWORD *)(a2 + 20);
    if ( v7 <= *(_DWORD *)(a1 + 24) && (*(_WORD *)(a2 + 24) & 0x20) == 0 )
    {
      if ( v7 == 1 )
        sub_3548B0(a2);
      v9 = *(_DWORD *)(a2 + 4);
      v6 = sub_34CA4C(*(_DWORD *)(a1 + 60));
      if ( v7 == 1 )
        *(_OWORD *)(a1 + 100) = *(_OWORD *)(v9 + 24);
      if ( v7 > *(_DWORD *)(a1 + 32) )
        *(_DWORD *)(a1 + 32) = v7;
      ++*(_DWORD *)(a1 + 192);
      sub_367FEC(*(_DWORD *)(a1 + 88), v7, *(_DWORD *)(a2 + 4));
    }
    a2 = *(_DWORD *)(a2 + 12);
  }
  return v6;
}


//======================================================================
// sub_368120
// address: 0x00368120   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_368120(int result)
{
  if ( result != 0 )
    return sub_3677DA(*(_DWORD *)(result + 68));
  return result;
}


//======================================================================
// sub_36812E
// address: 0x0036812E   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_36812E(int result)
{
  int v1; // r5
  int v2; // r4

  v1 = *(unsigned __int8 *)(result + 20);
  v2 = result;
  if ( *(_BYTE *)(result + 20) == 0 )
  {
    result = *(_DWORD *)(result + 12);
    if ( result != 0 )
    {
      result = sub_368120(result);
      *(_DWORD *)(v2 + 12) = v1;
    }
  }
  return result;
}


//======================================================================
// sub_368146
// address: 0x00368146   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_368146(int result)
{
  int v1; // r6
  int v2; // r2
  int v3; // r5
  int v4; // r4
  _DWORD **v5; // r7
  int i; // r3
  _DWORD *v7; // r0
  __int16 v8; // r3
  __int16 v9; // r2
  int v10; // r3

  v1 = *(_DWORD *)(result + 4);
  v2 = *(_DWORD *)result;
  *(_BYTE *)(v1 + 19) = 0;
  v3 = result;
  if ( *(_BYTE *)(result + 8) == 0 )
  {
LABEL_21:
    *(_BYTE *)(v3 + 8) = 0;
    return sub_36812E(v1);
  }
  v4 = *(_DWORD *)(result + 4);
  v5 = (_DWORD **)(v4 + 72);
  if ( *(int *)(v2 + 144) <= 1 )
  {
    while ( 1 )
    {
      v7 = *v5;
      if ( *v5 == nullptr )
        break;
      if ( *v7 == v3 )
      {
        *v5 = (_DWORD *)v7[3];
        if ( v7[1] != 1 )
          sqlite3_free(v7);
      }
      else
      {
        v5 = (_DWORD **)(v7 + 3);
      }
    }
    if ( *(_DWORD *)(v4 + 76) == v3 )
    {
      *(_DWORD *)(v4 + 76) = 0;
      v8 = *(_WORD *)(v4 + 22);
      v9 = 96;
    }
    else
    {
      if ( *(_DWORD *)(v4 + 40) != 2 )
        goto LABEL_19;
      v8 = *(_WORD *)(v4 + 22);
      v9 = 64;
    }
    *(_WORD *)(v4 + 22) = v8 & ~v9;
LABEL_19:
    v10 = *(_DWORD *)(v1 + 40) - 1;
    *(_DWORD *)(v1 + 40) = v10;
    if ( v10 == 0 )
      *(_BYTE *)(v1 + 20) = 0;
    goto LABEL_21;
  }
  if ( *(_DWORD *)(v4 + 76) == result )
  {
    *(_DWORD *)(v4 + 76) = 0;
    *(_WORD *)(v4 + 22) &= 0xFF9Fu;
    for ( i = *(_DWORD *)(v4 + 72); i != 0; i = *(_DWORD *)(i + 12) )
      *(_BYTE *)(i + 8) = 1;
  }
  *(_BYTE *)(result + 8) = 1;
  return result;
}


//======================================================================
// sub_3681E0
// address: 0x003681E0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_3681E0(int a1, int a2)
{
  int v2; // r6
  int *v4; // r7
  _BYTE *v5; // r4
  int v6; // r0

  v2 = 0;
  if ( *(_BYTE *)(a1 + 8) != 0 )
  {
    sub_3574C2(a1);
    if ( *(_BYTE *)(a1 + 8) != 2 )
    {
LABEL_12:
      sub_368146(a1);
      sub_35655E(a1);
      return 0;
    }
    v4 = *(int **)(a1 + 4);
    v5 = (_BYTE *)*v4;
    v2 = *(_DWORD *)(*v4 + 40);
    if ( v2 == 0 )
    {
      if ( v5[15] == 2 && v5[4] != 0 && v5[5] == 1 )
      {
        v5[15] = 1;
LABEL_11:
        *((_BYTE *)v4 + 20) = 1;
        sub_351F88(v4[15]);
        v4[15] = 0;
        goto LABEL_12;
      }
      v6 = sub_357A74(*v4, (unsigned __int8)v5[18], 1);
      v2 = sub_34DFE0((int)v5, v6);
      if ( v2 == 0 )
        goto LABEL_11;
    }
    if ( a2 != 0 )
      goto LABEL_11;
    sub_35655E(a1);
  }
  return v2;
}


//======================================================================
// sub_36825C
// address: 0x0036825C   size: 0x54 (84 bytes)
//======================================================================
__int64 __fastcall sub_36825C(__int64 a1)
{
  int v1; // r5
  int i; // r4
  int v3; // r7
  int v4; // r6

  v1 = a1;
  if ( (_DWORD)a1 != 0 )
  {
    sub_3574C2(a1);
    for ( i = *(_DWORD *)(*(_DWORD *)(v1 + 4) + 8); i != 0; i = *(_DWORD *)(i + 8) )
    {
      sqlite3_free(*(_DWORD *)(i + 72));
      v3 = 0;
      *(_DWORD *)(i + 72) = 0;
      *(_BYTE *)(i + 83) = 4;
      v4 = i;
      *(_DWORD *)(i + 76) = HIDWORD(a1);
      while ( 1 )
      {
        v4 += 4;
        if ( v3 > *(__int16 *)(i + 86) )
          break;
        sub_368120(*(_DWORD *)(v4 + 124));
        *(_DWORD *)(v4 + 124) = 0;
        ++v3;
      }
    }
    sub_35655E(v1);
  }
  return a1;
}


//======================================================================
// sub_3682B0
// address: 0x003682B0   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_3682B0(int a1)
{
  int v1; // r6
  int v3; // r7
  int v4; // r2
  int v5; // r3
  int v6; // r3
  int i; // r5

  v1 = *(_DWORD *)a1;
  if ( *(_DWORD *)a1 != 0 )
  {
    v3 = *(_DWORD *)(a1 + 4);
    sub_3574C2(*(_DWORD *)a1);
    sqlite3_free(*(_DWORD *)(a1 + 72));
    *(_DWORD *)(a1 + 72) = 0;
    *(_BYTE *)(a1 + 83) = 0;
    v4 = *(_DWORD *)(a1 + 12);
    v5 = *(_DWORD *)(a1 + 8);
    if ( v4 != 0 )
      *(_DWORD *)(v4 + 8) = v5;
    else
      *(_DWORD *)(v3 + 8) = v5;
    v6 = *(_DWORD *)(a1 + 8);
    if ( v6 != 0 )
      *(_DWORD *)(v6 + 12) = *(_DWORD *)(a1 + 12);
    for ( i = 0; i <= *(__int16 *)(a1 + 86); ++i )
      sub_368120(*(_DWORD *)(a1 + 4 * i + 128));
    sub_36812E(v3);
    sqlite3_free(*(_DWORD *)(a1 + 20));
    *(_DWORD *)(a1 + 20) = 0;
    sub_35655E(v1);
  }
  return 0;
}


//======================================================================
// sub_368324
// address: 0x00368324   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_368324(int *a1, unsigned int a2, int *a3, char a4)
{
  int v5; // r4

  if ( a2 > a1[11] )
    return sub_35FA58(52471);
  v5 = sub_367150(a1, a2, a3, a4);
  if ( v5 == 0 && *(_BYTE *)*a3 == 0 )
  {
    v5 = sub_35FC54((_BYTE *)*a3);
    if ( v5 != 0 )
      sub_368120(*a3);
  }
  return v5;
}


//======================================================================
// sub_368360
// address: 0x00368360   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_368360(int a1, unsigned int a2)
{
  _WORD *v2; // r6
  int v3; // r5
  int *v5; // r0
  int v6; // r0
  int result; // r0
  int v8; // r3
  unsigned int v9; // [sp+4h] [bp-4h] BYREF

  v9 = a2;
  v2 = (_WORD *)(a1 + 86);
  v3 = *(__int16 *)(a1 + 86);
  v5 = *(int **)(a1 + 4);
  if ( v3 > 18 )
  {
    v6 = 55060;
    return sub_35FA58(v6);
  }
  result = sub_368324(v5, a2, (int *)&v9, 2 * (*(_BYTE *)(a1 + 80) == 0));
  if ( result == 0 )
  {
    v8 = v9;
    *(_DWORD *)(4 * (v3 + 33) + a1) = v9;
    *(_WORD *)(2 * (v3 + 45) + a1) = 0;
    ++*v2;
    *(_WORD *)(a1 + 58) = 0;
    *(_BYTE *)(a1 + 82) = 0;
    if ( *(_WORD *)(v8 + 16) == 0
      || *(unsigned __int8 *)(v8 + 2) != *(unsigned __int8 *)(*(_DWORD *)(4 * (v3 + 32) + a1) + 2) )
    {
      v6 = 55072;
      return sub_35FA58(v6);
    }
  }
  return result;
}


//======================================================================
// sub_3683D0
// address: 0x003683D0   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_3683D0(int a1)
{
  int v2; // r3
  unsigned int v3; // r0
  int result; // r0

  while ( 1 )
  {
    v2 = *(_DWORD *)(4 * (*(__int16 *)(a1 + 86) + 32) + a1);
    if ( *(_BYTE *)(v2 + 3) != 0 )
      break;
    v3 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v2 + 56)
                                   + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(v2 + 64)
                                                                                  + 2
                                                                                  * *(unsigned __int16 *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1)))
                                                      & *(_WORD *)(v2 + 18))));
    result = sub_368360(a1, v3);
    if ( result != 0 )
      return result;
  }
  return 0;
}


//======================================================================
// sub_36841C
// address: 0x0036841C   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_36841C(int a1)
{
  int v2; // r5
  int v3; // r6
  unsigned int v4; // r0
  int result; // r0

  while ( 1 )
  {
    v2 = *(_DWORD *)(4 * (*(__int16 *)(a1 + 86) + 32) + a1);
    v3 = *(__int16 *)(a1 + 86) + 44;
    if ( *(_BYTE *)(v2 + 3) != 0 )
      break;
    v4 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v2 + 56) + *(unsigned __int8 *)(v2 + 5) + 8));
    *(_WORD *)(2 * v3 + a1) = *(_WORD *)(v2 + 16);
    result = sub_368360(a1, v4);
    if ( result != 0 )
      return result;
  }
  *(_WORD *)(2 * v3 + a1) = *(_WORD *)(v2 + 16) - 1;
  *(_WORD *)(a1 + 58) = 0;
  *(_BYTE *)(a1 + 82) = 0;
  return 0;
}


//======================================================================
// sub_36846C
// address: 0x0036846C   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall sub_36846C(int a1)
{
  _BYTE *v1; // r5
  unsigned int v2; // r3
  int result; // r0
  __int16 *v5; // r6
  __int16 v6; // r3
  unsigned int v7; // r1
  int v8; // r3
  int v9; // r0
  unsigned int v10; // r0

  v1 = (_BYTE *)(a1 + 83);
  v2 = *(unsigned __int8 *)(a1 + 83);
  if ( v2 > 2 )
  {
    if ( v2 == 4 )
      return *(_DWORD *)(a1 + 76);
    sqlite3_free(*(_DWORD *)(a1 + 72));
    *(_DWORD *)(a1 + 72) = 0;
    *v1 = 0;
  }
  v5 = (__int16 *)(a1 + 86);
  if ( *(__int16 *)(a1 + 86) < 0 )
  {
    v7 = *(_DWORD *)(a1 + 24);
    if ( v7 == 0 )
    {
      *v1 = 0;
      return 0;
    }
    result = sub_368324(*(int **)(*(_DWORD *)a1 + 4), v7, (int *)(a1 + 128), 2 * (*(_BYTE *)(a1 + 80) == 0));
    if ( result != 0 )
    {
      *v1 = 0;
      return result;
    }
    *v5 = 0;
  }
  else
  {
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == 0 )
        break;
      *v5 = v6 - 1;
      sub_368120(*(_DWORD *)(4 * (v6 + 32) + a1));
    }
  }
  v8 = *(_DWORD *)(a1 + 128);
  if ( *(_BYTE *)v8 == 0 || (*(_DWORD *)(a1 + 16) == 0) != *(_BYTE *)(v8 + 2) )
  {
    v9 = 55197;
    return sub_35FA58(v9);
  }
  *(_WORD *)(a1 + 88) = 0;
  *(_WORD *)(a1 + 58) = 0;
  *(_BYTE *)(a1 + 81) = 0;
  *(_BYTE *)(a1 + 82) = 0;
  result = *(unsigned __int16 *)(v8 + 16);
  if ( *(_WORD *)(v8 + 16) != 0 )
  {
    *v1 = 1;
    return 0;
  }
  if ( *(_BYTE *)(v8 + 3) != 0 )
  {
    *v1 = result;
  }
  else
  {
    if ( *(_DWORD *)(v8 + 72) != 1 )
    {
      v9 = 55209;
      return sub_35FA58(v9);
    }
    v10 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v8 + 56) + *(unsigned __int8 *)(v8 + 5) + 8));
    *v1 = 1;
    return sub_368360(a1, v10);
  }
  return result;
}


//======================================================================
// sub_368554
// address: 0x00368554   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_368554(int a1, _DWORD *a2)
{
  _BYTE *v2; // r6
  int v5; // r3
  int result; // r0

  v2 = (_BYTE *)(a1 + 83);
  if ( *(_BYTE *)(a1 + 83) != 1 || (v5 = *(unsigned __int8 *)(a1 + 81), result = 0, v5 == 0) )
  {
    result = sub_36846C(a1);
    if ( result == 0 )
    {
      if ( *v2 != 0 )
      {
        *a2 = 0;
        result = sub_36841C(a1);
        *(_BYTE *)(a1 + 81) = result == 0;
      }
      else
      {
        *a2 = 1;
      }
    }
  }
  return result;
}


//======================================================================
// sub_368598
// address: 0x00368598   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_368598(int *a1, unsigned int a2, _BYTE *a3, unsigned int *a4)
{
  unsigned int v7; // r6
  int result; // r0
  int v9; // r6
  int v10; // r4
  int v11; // r0
  int v12; // r0
  int v14; // [sp+Ch] [bp-8h] BYREF

  v7 = sub_34E284((int)a1, a2);
  result = sub_366EBC(*a1, v7, &v14, 0);
  if ( result == 0 )
  {
    v9 = 5 * (a2 - v7);
    v10 = v14;
    v11 = *(_DWORD *)(v14 + 4);
    if ( v9 - 5 < 0 )
    {
      sub_367EB6(v14);
      v12 = 51692;
      return sub_35FA58(v12);
    }
    *a3 = *(_BYTE *)(v11 + v9 - 5);
    if ( a4 != nullptr )
      *a4 = sub_34D8D8((unsigned int *)(v11 + v9 - 4));
    sub_367EB6(v10);
    result = 0;
    if ( (unsigned int)(unsigned __int8)*a3 - 1 > 4 )
    {
      v12 = 51700;
      return sub_35FA58(v12);
    }
  }
  return result;
}


//======================================================================
// sub_36860C
// address: 0x0036860C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_36860C(int a1, unsigned int a2, int a3, int a4, int a5)
{
  int result; // r0
  unsigned __int8 v10; // [sp+1Bh] [bp-9h] BYREF
  unsigned int v11; // [sp+1Ch] [bp-8h] BYREF

  result = sub_368598(*(int **)a1, a2, &v10, &v11);
  if ( result != 0 )
  {
    if ( result == 7 || result == 3082 )
      *(_DWORD *)(a1 + 24) = 1;
    return sub_366700(a1, a5, "Failed to read ptrmap key=%d", a2);
  }
  else if ( v10 != a3 || v11 != a4 )
  {
    return sub_366700(a1, a5, "Bad ptr map entry key=%d expected=(%d,%d) got=(%d,%d)", a2, a3, a4, v10, v11);
  }
  return result;
}


//======================================================================
// sub_368680
// address: 0x00368680   size: 0xBA (186 bytes)
//======================================================================
int __fastcall sub_368680(int a1, unsigned int a2, int *a3, unsigned int *a4)
{
  unsigned int v4; // r4
  unsigned int v7; // r5
  int v8; // r5
  int v9; // r0
  char v13; // [sp+17h] [bp-Dh] BYREF
  int v14; // [sp+18h] [bp-Ch] BYREF
  unsigned int v15; // [sp+1Ch] [bp-8h] BYREF

  v4 = *(unsigned __int8 *)(a1 + 17);
  v14 = 0;
  if ( v4 != 0 )
  {
    v4 = a2 + 1;
    v7 = dword_471740;
    while ( sub_34E284(a1, v4) == v4 || v4 == v7 / *(_DWORD *)(a1 + 32) + 1 )
      ++v4;
    if ( v4 > *(_DWORD *)(a1 + 44) )
      goto LABEL_7;
    v8 = sub_368598((int *)a1, v4, &v13, &v15);
    if ( v8 != 0 )
    {
      v4 = 0;
      goto LABEL_16;
    }
    if ( v13 == 4 )
    {
      if ( v15 == a2 )
      {
        v8 = 101;
        goto LABEL_16;
      }
      v4 = 0;
    }
    else
    {
LABEL_7:
      v4 = 0;
    }
  }
  v8 = sub_367150((int *)a1, a2, &v14, 2 * (a3 == nullptr));
  if ( v8 == 0 )
    v4 = sub_34D8D8(*(unsigned int **)(v14 + 56));
LABEL_16:
  v9 = v14;
  *a4 = v4;
  if ( a3 != nullptr )
    *a3 = v9;
  else
    sub_368120(v9);
  return v8 != 101 ? v8 : 0;
}


//======================================================================
// sub_368740
// address: 0x00368740   size: 0x4BA (1210 bytes)
//======================================================================
int __fastcall sub_368740(int a1, int *a2, unsigned int *a3, unsigned int a4, char a5)
{
  int v5; // r7
  unsigned int v6; // r1
  unsigned int *v8; // r0
  unsigned int v9; // r0
  unsigned int v10; // r6
  int v11; // r0
  unsigned int *v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r6
  int v15; // r0
  int v16; // r4
  int v17; // r1
  int v18; // r0
  _DWORD *v19; // r0
  _DWORD *v20; // r1
  int v21; // r0
  unsigned int v22; // r0
  int v23; // r6
  _BYTE *v24; // r0
  int v25; // r3
  unsigned int *v26; // r6
  unsigned int v27; // r0
  unsigned int v28; // r0
  int v29; // r6
  unsigned int v30; // r0
  int v31; // r0
  unsigned int v32; // r0
  unsigned int *v33; // r0
  unsigned int v34; // r4
  bool v35; // r3
  int result; // r0
  int v37; // r4
  unsigned int v38; // r1
  char v39; // r6
  unsigned int v40; // r4
  unsigned int v41; // r1
  int v42; // r4
  unsigned int v43; // r1
  unsigned int v44; // r1
  _BYTE *v45; // r0
  int v46; // [sp+20h] [bp-44h]
  int v47; // [sp+20h] [bp-44h]
  _BOOL4 v48; // [sp+24h] [bp-40h]
  int v49; // [sp+24h] [bp-40h]
  unsigned int v50; // [sp+28h] [bp-3Ch]
  unsigned int v53; // [sp+34h] [bp-30h]
  unsigned int v54; // [sp+38h] [bp-2Ch]
  int v55; // [sp+3Ch] [bp-28h]
  unsigned int *v56; // [sp+40h] [bp-24h]
  int v58; // [sp+4Ch] [bp-18h]
  unsigned int *v59; // [sp+50h] [bp-14h]
  int v60; // [sp+58h] [bp-Ch] BYREF
  int v61[2]; // [sp+5Ch] [bp-8h] BYREF

  v5 = *(_DWORD *)(a1 + 12);
  v6 = *(_DWORD *)(a1 + 44);
  v8 = (unsigned int *)(*(_DWORD *)(v5 + 56) + 36);
  v60 = 0;
  v54 = v6;
  v9 = sub_34D8D8(v8);
  v10 = v9;
  if ( v9 >= v54 )
  {
    v11 = 55797;
    return sub_35FA58(v11);
  }
  if ( v9 == 0 )
  {
    v47 = *(unsigned __int8 *)(a1 + 19);
    result = sub_367BA8(*(_DWORD *)(v5 + 68));
    if ( result != 0 )
      return result;
    v37 = *(_DWORD *)(a1 + 44);
    v38 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 44) = v37 + 1;
    if ( v37 + 1 == dword_471740 / v38 + 1 )
      *(_DWORD *)(a1 + 44) = v37 + 2;
    v39 = v47 == 0;
    if ( *(_BYTE *)(a1 + 17) != 0 )
    {
      v40 = *(_DWORD *)(a1 + 44);
      v41 = sub_34E284(a1, v40);
      if ( v41 == v40 )
      {
        v61[0] = 0;
        v16 = sub_367150((int *)a1, v41, v61, v39);
        if ( v16 != 0 )
          return v16;
        v16 = sub_367BA8(*(_DWORD *)(v61[0] + 68));
        sub_368120(v61[0]);
        if ( v16 != 0 )
          return v16;
        v42 = *(_DWORD *)(a1 + 44);
        v43 = *(_DWORD *)(a1 + 32);
        *(_DWORD *)(a1 + 44) = v42 + 1;
        if ( v42 + 1 == dword_471740 / v43 + 1 )
          *(_DWORD *)(a1 + 44) = v42 + 2;
      }
    }
    sub_34D8F0((_BYTE *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 56) + 28), *(_DWORD *)(a1 + 44));
    v44 = *(_DWORD *)(a1 + 44);
    *a3 = v44;
    result = sub_367150((int *)a1, v44, a2, v39);
    if ( result == 0 )
    {
      v46 = 0;
      v16 = sub_367BA8(*(_DWORD *)(*a2 + 68));
      if ( v16 != 0 )
        sub_368120(*a2);
      goto LABEL_97;
    }
    return result;
  }
  if ( a5 == 1 )
  {
    v48 = false;
    if ( a4 <= v54 )
    {
      result = sub_368598((int *)a1, a4, v61, nullptr);
      if ( result != 0 )
        return result;
      v48 = LOBYTE(v61[0]) == 2;
    }
  }
  else
  {
    v48 = a5 == 2;
  }
  result = sub_367BA8(*(_DWORD *)(v5 + 68));
  if ( result == 0 )
  {
    sub_34D8F0((_BYTE *)(*(_DWORD *)(v5 + 56) + 36), v10 - 1);
    while ( 1 )
    {
      v46 = v60;
      if ( v60 != 0 )
        v12 = *(unsigned int **)(v60 + 56);
      else
        v12 = (unsigned int *)(*(_DWORD *)(v5 + 56) + 32);
      v13 = sub_34D8D8(v12);
      v14 = v13;
      if ( v13 <= v54 )
        v15 = sub_367150((int *)a1, v13, &v60, 0);
      else
        v15 = sub_35FA58(55846);
      v16 = v15;
      if ( v15 != 0 )
      {
        v60 = 0;
        goto LABEL_97;
      }
      v55 = v60;
      v56 = *(unsigned int **)(v60 + 56);
      v50 = sub_34D8D8(v56 + 1);
      if ( v50 == 0 && !v48 )
      {
        v16 = sub_367BA8(*(_DWORD *)(v55 + 68));
        if ( v16 != 0 )
          goto LABEL_97;
        *a3 = v14;
        *(_DWORD *)(*(_DWORD *)(v5 + 56) + 32) = **(_DWORD **)(v60 + 56);
        v17 = v60;
        v60 = 0;
        *a2 = v17;
        goto LABEL_82;
      }
      if ( v50 > (*(_DWORD *)(a1 + 36) >> 2) - 2 )
      {
        v18 = 55874;
        goto LABEL_64;
      }
      if ( v48 && (a4 == v14 || v14 < a4 && a5 == 2) )
        break;
      if ( v50 != 0 )
      {
        v53 = 0;
        if ( a4 != 0 )
        {
          if ( a5 == 2 )
          {
            v26 = v56 + 2;
            while ( 1 )
            {
              v27 = sub_34D8D8(v26++);
              if ( v27 <= a4 )
                break;
              if ( ++v53 == v50 )
              {
                v53 = 0;
                break;
              }
            }
          }
          else
          {
            v28 = sub_34D8D8(v56 + 2);
            v29 = 1;
            v58 = sub_34D970(v28 - a4);
            v59 = v56 + 3;
            while ( v29 != v50 )
            {
              v30 = sub_34D8D8(v59);
              v31 = sub_34D970(v30 - a4);
              if ( v31 < v58 )
                v53 = v29;
              else
                v31 = v58;
              ++v29;
              v58 = v31;
              ++v59;
            }
          }
        }
        v32 = sub_34D8D8(&v56[v53 + 2]);
        if ( v32 > v54 )
        {
          v18 = 55973;
LABEL_64:
          v21 = sub_35FA58(v18);
LABEL_96:
          v16 = v21;
LABEL_97:
          sub_368120(v60);
          sub_368120(v46);
          if ( v16 != 0 )
          {
            *a2 = 0;
          }
          else
          {
            v45 = (_BYTE *)*a2;
            if ( *(__int16 *)(*(_DWORD *)(*a2 + 68) + 26) > 1 )
            {
              sub_368120((int)v45);
              v11 = 56072;
              *a2 = 0;
              return sub_35FA58(v11);
            }
            *v45 = 0;
          }
          return v16;
        }
        if ( !v48 || v32 == a4 )
        {
LABEL_69:
          *a3 = v32;
          v16 = sub_367BA8(*(_DWORD *)(v55 + 68));
          if ( v16 != 0 )
            goto LABEL_97;
          if ( v53 < v50 - 1 )
            v56[v53 + 2] = v56[v50 + 1];
          sub_34D8F0((_BYTE *)v56 + 4, v50 - 1);
          v33 = *(unsigned int **)(a1 + 60);
          v34 = *a3;
          if ( v33 != nullptr )
          {
            v35 = true;
            if ( v34 <= *v33 )
              v35 = sub_352940((int)v33, *a3) != 0;
          }
          else
          {
            v35 = false;
          }
          v16 = sub_367150((int *)a1, v34, a2, !v35);
          v48 = false;
          if ( v16 == 0 )
          {
            v16 = sub_367BA8(*(_DWORD *)(*a2 + 68));
            if ( v16 != 0 )
              sub_368120(*a2);
            else
              v48 = false;
          }
          goto LABEL_82;
        }
        if ( v32 >= a4 )
        {
          v25 = 1;
LABEL_80:
          v48 = v25;
          goto LABEL_82;
        }
        v48 = true;
        if ( a5 == 2 )
          goto LABEL_69;
      }
LABEL_82:
      sub_368120(v46);
      if ( !v48 )
      {
        v46 = 0;
        goto LABEL_97;
      }
    }
    *a3 = v14;
    *a2 = v55;
    v16 = sub_367BA8(*(_DWORD *)(v55 + 68));
    if ( v16 != 0 )
      goto LABEL_97;
    if ( v50 != 0 )
    {
      v22 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v60 + 56) + 8));
      v49 = v22;
      if ( v22 > v54 )
      {
        v23 = sub_35FA58(55908);
LABEL_47:
        v16 = v23;
        goto LABEL_97;
      }
      v23 = sub_367150((int *)a1, v22, v61, 0);
      if ( v23 != 0 )
        goto LABEL_47;
      v23 = sub_367BA8(*(_DWORD *)(v61[0] + 68));
      if ( v23 != 0 )
      {
        sub_368120(v61[0]);
        goto LABEL_47;
      }
      **(_DWORD **)(v61[0] + 56) = **(_DWORD **)(v60 + 56);
      sub_34D8F0((_BYTE *)(*(_DWORD *)(v61[0] + 56) + 4), v50 - 1);
      j_memcpy(
        (void *)(*(_DWORD *)(v61[0] + 56) + 8),
        (const void *)(*(_DWORD *)(v60 + 56) + 12),
        4 * (v50 + 0x3FFFFFFF));
      sub_368120(v61[0]);
      if ( v46 != 0 )
      {
        v23 = sub_367BA8(*(_DWORD *)(v46 + 68));
        if ( v23 != 0 )
          goto LABEL_47;
        v24 = *(_BYTE **)(v46 + 56);
      }
      else
      {
        v24 = (_BYTE *)(*(_DWORD *)(v5 + 56) + 32);
      }
      sub_34D8F0(v24, v49);
    }
    else
    {
      if ( v46 != 0 )
      {
        v21 = sub_367BA8(*(_DWORD *)(v46 + 68));
        if ( v21 != 0 )
          goto LABEL_96;
        v19 = *(_DWORD **)(v46 + 56);
        v20 = *(_DWORD **)(v60 + 56);
      }
      else
      {
        v19 = (_DWORD *)(*(_DWORD *)(v5 + 56) + 32);
        v20 = *(_DWORD **)(v60 + 56);
      }
      *v19 = *v20;
    }
    v25 = 0;
    v60 = 0;
    goto LABEL_80;
  }
  return result;
}


//======================================================================
// sub_368C08
// address: 0x00368C08   size: 0x94 (148 bytes)
//======================================================================
int __fastcall sub_368C08(int result, unsigned int a2, int a3, int a4, int *a5)
{
  int *v5; // r7
  unsigned int v7; // r6
  int v8; // r5
  int v9; // r3
  int v10; // r6
  int v11; // r7
  int v12; // r0
  _BYTE *v13; // [sp+4h] [bp-18h]
  int v16; // [sp+14h] [bp-8h] BYREF

  v5 = (int *)result;
  if ( *a5 == 0 )
  {
    if ( a2 == 0 )
    {
      result = sub_35FA58(51636);
LABEL_5:
      *a5 = result;
      return result;
    }
    v7 = sub_34E284(result, a2);
    result = sub_366EBC(*v5, v7, &v16, 0);
    if ( result != 0 )
      goto LABEL_5;
    v8 = 5 * (a2 - v7);
    v9 = v8 - 5;
    if ( v8 - 5 >= 0 )
    {
      v10 = v16;
      v11 = *(_DWORD *)(v16 + 4);
      v13 = (_BYTE *)(v11 + v9);
      if ( *(unsigned __int8 *)(v11 + v9) != a3 || sub_34D8D8((unsigned int *)(v11 + v8 - 4)) != a4 )
      {
        v12 = sub_367BA8(v10);
        *a5 = v12;
        if ( v12 == 0 )
        {
          *v13 = a3;
          sub_34D8F0((_BYTE *)(v11 + v8 - 4), a4);
        }
      }
    }
    else
    {
      *a5 = sub_35FA58(51647);
    }
    return sub_367EB6(v16);
  }
  return result;
}


//======================================================================
// sub_368CA4
// address: 0x00368CA4   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_368CA4(int result, unsigned __int8 *a2, int *a3)
{
  int v3; // r4
  unsigned int v6; // r0
  _WORD v7[18]; // [sp+8h] [bp-24h] BYREF

  v3 = result;
  if ( *a3 == 0 )
  {
    sub_3523AC(result, a2, (int)v7);
    result = v7[12];
    if ( v7[12] != 0 )
    {
      v6 = sub_34D8D8((unsigned int *)&a2[v7[12]]);
      return sub_368C08(*(_DWORD *)(v3 + 52), v6, 3, *(_DWORD *)(v3 + 72), a3);
    }
  }
  return result;
}


//======================================================================
// sub_368CDC
// address: 0x00368CDC   size: 0x22C (556 bytes)
//======================================================================
unsigned __int16 *__fastcall sub_368CDC(
        unsigned __int16 *result,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned __int8 *a5,
        int a6,
        int *a7)
{
  int v7; // r4
  int v8; // r3
  char v9; // r2
  int v10; // r1
  int v11; // r5
  int v12; // r12
  int v13; // r0
  int v14; // r0
  int i; // r1
  _BYTE *v16; // r1
  int v17; // r7
  _BYTE *v18; // r2
  int v19; // r3
  int v20; // r0
  int v21; // r6
  int v22; // r2
  _BYTE *v23; // r7
  unsigned int v25; // [sp+14h] [bp-30h]
  int v26; // [sp+18h] [bp-2Ch]
  unsigned __int8 *v27; // [sp+1Ch] [bp-28h]
  _BYTE *v28; // [sp+20h] [bp-24h]
  _BYTE *v29; // [sp+24h] [bp-20h]
  int v30; // [sp+28h] [bp-1Ch]
  char *v31; // [sp+2Ch] [bp-18h]
  char v32; // [sp+30h] [bp-14h]

  v27 = a3;
  v7 = (int)result;
  v26 = 4 * (a6 != 0);
  if ( *a7 != 0 )
    return result;
  if ( *((_BYTE *)result + 1) != 0 || a4 + 1 >= result[7] )
  {
    if ( a5 != nullptr )
    {
      result = (unsigned __int16 *)j_memcpy(&a5[v26], &a3[v26], a4 - v26);
      v27 = a5;
    }
    if ( a6 != 0 )
      result = (unsigned __int16 *)sub_34D8F0(v27, a6);
    v8 = *(unsigned __int8 *)(v7 + 1);
    v9 = v8 + 1;
    v8 += 8;
    *(_BYTE *)(v7 + 1) = v9;
    *(_DWORD *)(4 * v8 + v7) = v27;
    *(_WORD *)(v7 + 2 * v8 + 4) = a2;
    return result;
  }
  result = (unsigned __int16 *)sub_367BA8(*((_DWORD *)result + 17));
  if ( result != nullptr )
  {
    *a7 = (int)result;
    return result;
  }
  v10 = *(unsigned __int8 *)(v7 + 5);
  v25 = *(unsigned __int16 *)(v7 + 12) + 2 * *(unsigned __int16 *)(v7 + 16);
  v11 = *(_DWORD *)(v7 + 56);
  v30 = *(unsigned __int16 *)(v7 + 12);
  v12 = *(_DWORD *)(*(_DWORD *)(v7 + 52) + 36);
  v31 = (char *)(v11 + v10 + 7);
  v28 = (_BYTE *)(v11 + v10 + 5);
  v29 = (_BYTE *)(v11 + v10 + 6);
  v32 = *v31;
  v13 = (unsigned __int16)((((unsigned __int8)*v28 << 8) | (unsigned __int8)*v29) - 1) + 1;
  if ( v25 <= v13 )
  {
    if ( *(unsigned __int8 *)(v11 + v10 + 7) <= 0x3Bu )
    {
      if ( (int)(v25 + 1) < v13 )
      {
        for ( i = v10 + 1; ; i = v19 )
        {
          v18 = (_BYTE *)(v11 + i);
          v19 = (*(unsigned __int8 *)(v11 + i) << 8) | *(unsigned __int8 *)(v11 + i + 1);
          if ( v19 == 0 )
            break;
          if ( v12 - 3 <= v19 || i + 3 >= v19 )
          {
            v14 = 52052;
            goto LABEL_24;
          }
          v16 = (_BYTE *)(v11 + v19 + 3);
          v17 = (unsigned __int8)*v16 | (*(unsigned __int8 *)(v11 + v19 + 2) << 8);
          if ( v17 >= a4 )
          {
            v20 = v17 - a4;
            if ( v17 - a4 > 3 )
            {
              if ( v17 + v19 > v12 )
              {
                v14 = 52065;
                goto LABEL_24;
              }
              *(_BYTE *)(v11 + v19 + 2) = BYTE1(v20);
              *v16 = v20;
            }
            else
            {
              *v18 = *(_BYTE *)(v11 + v19);
              v18[1] = *(_BYTE *)(v11 + v19 + 1);
              *v31 = v32 + v20;
            }
            v21 = v19 + v20;
            goto LABEL_37;
          }
        }
      }
    }
    else
    {
      result = (unsigned __int16 *)sub_35FE80(v7);
      if ( result != nullptr )
        goto LABEL_36;
      v13 = (unsigned __int16)((((unsigned __int8)*v28 << 8) | (unsigned __int8)*v29) - 1) + 1;
    }
    if ( (int)(v25 + 2 + a4) <= v13 )
    {
LABEL_35:
      v21 = v13 - a4;
      *v28 = (unsigned __int16)(v13 - a4) >> 8;
      *v29 = v13 - a4;
      goto LABEL_37;
    }
    result = (unsigned __int16 *)sub_35FE80(v7);
    if ( result == nullptr )
    {
      v13 = (unsigned __int16)((((unsigned __int8)*v28 << 8) | (unsigned __int8)*v29) - 1) + 1;
      goto LABEL_35;
    }
LABEL_36:
    *a7 = (int)result;
    return result;
  }
  v14 = 52033;
LABEL_24:
  result = (unsigned __int16 *)sub_35FA58(v14);
  if ( result != nullptr )
    goto LABEL_36;
  v21 = 0;
LABEL_37:
  ++*(_WORD *)(v7 + 16);
  *(_WORD *)(v7 + 14) = *(_WORD *)(v7 + 14) - 2 - a4;
  j_memcpy((void *)(v11 + v21 + v26), &v27[v26], a4 - v26);
  if ( a6 != 0 )
    sub_34D8F0((_BYTE *)(v11 + v21), a6);
  v22 = v30 + 2 * a2;
  v23 = (_BYTE *)(v11 + v22);
  result = (unsigned __int16 *)j_memmove((void *)(v11 + v22 + 2), (const void *)(v11 + v22), v25 - v22);
  *v23 = BYTE1(v21);
  v23[1] = v21;
  *(_BYTE *)(v11 + *(unsigned __int8 *)(v7 + 5) + 3) = HIBYTE(*(_WORD *)(v7 + 16));
  *(_BYTE *)(v11 + *(unsigned __int8 *)(v7 + 5) + 4) = *(_WORD *)(v7 + 16);
  if ( *(_BYTE *)(*(_DWORD *)(v7 + 52) + 17) != 0 )
    return (unsigned __int16 *)sub_368CA4(v7, v27, a7);
  return result;
}


//======================================================================
// sub_368F14
// address: 0x00368F14   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_368F14(int a1)
{
  int v2; // r6
  int v3; // r5
  unsigned __int8 *v4; // r7
  unsigned int v5; // r0
  unsigned int v6; // r0
  int result; // r0
  int v8; // [sp+Ch] [bp-18h]
  char v9; // [sp+10h] [bp-14h]
  int v10; // [sp+14h] [bp-10h]
  int v11[2]; // [sp+1Ch] [bp-8h] BYREF

  v9 = *(_BYTE *)a1;
  v2 = *(_DWORD *)(a1 + 52);
  v8 = *(_DWORD *)(a1 + 72);
  v11[0] = sub_35FC54((_BYTE *)a1);
  if ( v11[0] == 0 )
  {
    v3 = 0;
    v10 = 2 * *(unsigned __int16 *)(a1 + 16);
    while ( v3 != v10 )
    {
      v4 = (unsigned __int8 *)(*(_DWORD *)(a1 + 56)
                             + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(a1 + 64) + v3))
                                                & *(_WORD *)(a1 + 18)));
      sub_368CA4(a1, v4, v11);
      if ( *(_BYTE *)(a1 + 3) == 0 )
      {
        v5 = sub_34D8D8((unsigned int *)v4);
        sub_368C08(v2, v5, 5, v8, v11);
      }
      v3 += 2;
    }
    if ( *(_BYTE *)(a1 + 3) == 0 )
    {
      v6 = sub_34D8D8((unsigned int *)(*(_DWORD *)(a1 + 56) + *(unsigned __int8 *)(a1 + 5) + 8));
      sub_368C08(v2, v6, 5, v8, v11);
    }
  }
  result = v11[0];
  *(_BYTE *)a1 = v9;
  return result;
}


//======================================================================
// sub_368FAA
// address: 0x00368FAA   size: 0x72 (114 bytes)
//======================================================================
int __fastcall sub_368FAA(int a1, int a2, int *a3)
{
  int v5; // r7
  int v6; // r1
  int v8; // r3
  int v9; // r3
  int result; // r0
  void *v11; // [sp+4h] [bp-10h]
  int v12; // [sp+8h] [bp-Ch]
  int v13; // [sp+Ch] [bp-8h]

  v5 = *(_DWORD *)(a1 + 52);
  v6 = *(_DWORD *)(a1 + 56);
  v12 = *(_DWORD *)(a2 + 56);
  v8 = *(unsigned __int8 *)(a1 + 5);
  v13 = 0;
  if ( *(_DWORD *)(a2 + 72) == 1 )
    v13 = 100;
  v11 = (void *)(v6 + v8);
  v9 = (*(unsigned __int8 *)(v6 + v8 + 5) << 8) | *(unsigned __int8 *)(v6 + v8 + 6);
  j_memcpy((void *)(v12 + v9), (const void *)(v6 + v9), *(_DWORD *)(v5 + 36) - v9);
  j_memcpy((void *)(v12 + v13), v11, *(unsigned __int16 *)(a1 + 12) + 2 * *(unsigned __int16 *)(a1 + 16));
  *(_BYTE *)a2 = 0;
  result = sub_35FB48(a2);
  if ( result == 0 )
  {
    if ( *(_BYTE *)(v5 + 17) == 0 )
      return result;
    result = sub_368F14(a2);
  }
  *a3 = result;
  return result;
}


//======================================================================
// sub_36901C
// address: 0x0036901C   size: 0x1CC (460 bytes)
//======================================================================
int __fastcall sub_36901C(int a1, int a2, unsigned int a3)
{
  int v5; // r6
  int v6; // r3
  unsigned int v7; // r7
  int v8; // r7
  int v9; // r3
  int v10; // r0
  int v11; // r3
  __int16 v12; // r2
  _DWORD *v13; // r0
  _BYTE *v14; // r3
  unsigned int *v16; // r0
  unsigned int *v17; // [sp+8h] [bp-1Ch]
  unsigned int v18; // [sp+8h] [bp-1Ch]
  unsigned int v19; // [sp+Ch] [bp-18h]
  int v20; // [sp+14h] [bp-10h] BYREF
  int v21; // [sp+18h] [bp-Ch] BYREF
  int v22; // [sp+1Ch] [bp-8h] BYREF

  v20 = 0;
  v5 = *(_DWORD *)(a1 + 12);
  if ( a2 != 0 )
  {
    v6 = *(_DWORD *)(a2 + 68);
    v21 = a2;
    ++*(_WORD *)(v6 + 26);
  }
  else
  {
    v21 = sub_356634(a1, a3);
  }
  v22 = sub_367BA8(*(_DWORD *)(v5 + 68));
  if ( v22 == 0 )
  {
    v17 = (unsigned int *)(*(_DWORD *)(v5 + 56) + 36);
    v7 = sub_34D8D8(v17);
    sub_34D8F0(v17, v7 + 1);
    if ( (*(_WORD *)(a1 + 22) & 4) != 0 )
    {
      if ( v21 == 0 )
      {
        v22 = sub_367150((int *)a1, a3, &v21, 0);
        if ( v22 != 0 )
          goto LABEL_34;
      }
      v22 = sub_367BA8(*(_DWORD *)(v21 + 68));
      if ( v22 != 0 )
        goto LABEL_34;
      j_memset(*(void **)(v21 + 56), 0, *(_DWORD *)(*(_DWORD *)(v21 + 52) + 32));
    }
    if ( *(_BYTE *)(a1 + 17) == 0 || (sub_368C08(a1, a3, 2, 0, &v22), v22 == 0) )
    {
      if ( v7 == 0 )
      {
        v19 = 0;
        goto LABEL_30;
      }
      v19 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v5 + 56) + 32));
      v22 = sub_367150((int *)a1, v19, &v20, 0);
      if ( v22 != 0 )
        goto LABEL_34;
      v8 = v20;
      v18 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v20 + 56) + 4));
      v9 = *(_DWORD *)(a1 + 36) >> 2;
      if ( v18 <= v9 - 2 )
      {
        if ( v18 >= v9 - 8 )
        {
LABEL_30:
          if ( v21 != 0 || (v22 = sub_367150((int *)a1, a3, &v21, 0)) == 0 )
          {
            v22 = sub_367BA8(*(_DWORD *)(v21 + 68));
            if ( v22 == 0 )
            {
              sub_34D8F0(*(_BYTE **)(v21 + 56), v19);
              v14 = *(_BYTE **)(v21 + 56);
              v14[4] = 0;
              v14[5] = 0;
              v14[6] = 0;
              v14[7] = 0;
              sub_34D8F0((_BYTE *)(*(_DWORD *)(v5 + 56) + 32), a3);
            }
          }
          goto LABEL_34;
        }
        v22 = sub_367BA8(*(_DWORD *)(v8 + 68));
        if ( v22 != 0 )
          goto LABEL_34;
        sub_34D8F0((_BYTE *)(*(_DWORD *)(v20 + 56) + 4), v18 + 1);
        sub_34D8F0((_BYTE *)(*(_DWORD *)(v20 + 56) + 4 * (v18 + 2)), a3);
        if ( v21 != 0 && (*(_WORD *)(a1 + 22) & 4) == 0 )
        {
          v11 = *(_DWORD *)(v21 + 68);
          v12 = *(_WORD *)(v11 + 24);
          if ( (v12 & 2) != 0 && *(_DWORD *)(*(_DWORD *)(v11 + 16) + 96) == 0 )
            *(_WORD *)(v11 + 24) = v12 | 0x20;
        }
        if ( *(_DWORD *)(a1 + 60) != 0
          || (v13 = sub_351CDC(*(_DWORD *)(a1 + 44)), *(_DWORD *)(a1 + 60) = v13, v13 != nullptr) )
        {
          v16 = *(unsigned int **)(a1 + 60);
          if ( a3 > *v16 )
            v10 = 0;
          else
            v10 = sub_355C78(v16, a3);
        }
        else
        {
          v10 = 7;
        }
      }
      else
      {
        v10 = sub_35FA58(56158);
      }
      v22 = v10;
    }
  }
LABEL_34:
  if ( v21 != 0 )
    *(_BYTE *)v21 = 0;
  sub_368120(v21);
  sub_368120(v20);
  return v22;
}


//======================================================================
// sub_3691EC
// address: 0x003691EC   size: 0xCC (204 bytes)
//======================================================================
int __fastcall sub_3691EC(int a1, unsigned __int8 *a2)
{
  int v3; // r5
  int result; // r0
  int v6; // r0
  unsigned int v7; // r4
  unsigned int i; // r6
  int v9; // r0
  int v10; // r4
  unsigned int v11; // [sp+0h] [bp-2Ch] BYREF
  int v12; // [sp+4h] [bp-28h] BYREF
  _DWORD v13[9]; // [sp+8h] [bp-24h] BYREF

  v3 = *(_DWORD *)(a1 + 52);
  sub_3523AC(a1, a2, (int)v13);
  if ( LOWORD(v13[6]) == 0 )
    return 0;
  if ( (unsigned int)&a2[LOWORD(v13[6]) + 3] <= *(_DWORD *)(a1 + 56) + (unsigned int)*(unsigned __int16 *)(a1 + 18) )
  {
    v7 = sub_34D8D8((unsigned int *)&a2[LOWORD(v13[6])]);
    for ( i = (v13[4] - 1 + *(_DWORD *)(v3 + 36) - 4 - (unsigned int)HIWORD(v13[5])) / (*(_DWORD *)(v3 + 36) - 4) - 1;
          i != -1;
          --i )
    {
      v11 = 0;
      v12 = 0;
      if ( v7 <= 1 || v7 > *(_DWORD *)(v3 + 44) )
      {
        v6 = 56253;
        return sub_35FA58(v6);
      }
      if ( i != 0 )
      {
        result = sub_368680(v3, v7, &v12, &v11);
        if ( result != 0 )
          return result;
      }
      if ( (v12 != 0 || (v12 = sub_356634(v3, v7)) != 0) && *(_WORD *)(*(_DWORD *)(v12 + 68) + 26) != 1 )
        v9 = sub_35FA58(56273);
      else
        v9 = sub_36901C(v3, v12, v7);
      v10 = v9;
      if ( v12 != 0 )
        sub_367EB6(*(_DWORD *)(v12 + 68));
      if ( v10 != 0 )
        return v10;
      v7 = v11;
    }
    return 0;
  }
  v6 = 56239;
  return sub_35FA58(v6);
}


//======================================================================
// sub_3692C4
// address: 0x003692C4   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3692C4(int result, int *a2)
{
  if ( *a2 == 0 )
  {
    result = sub_36901C(*(_DWORD *)(result + 52), result, *(_DWORD *)(result + 72));
    *a2 = result;
  }
  return result;
}


//======================================================================
// sub_3692E0
// address: 0x003692E0   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall sub_3692E0(int *a1, unsigned int a2, int a3, _DWORD *a4)
{
  int result; // r0
  int v7; // r6
  int v8; // r2
  unsigned __int16 *v9; // r0
  int v10; // r1
  unsigned __int8 *v11; // r7
  unsigned int v12; // r0
  unsigned int v13; // r0
  int v14; // [sp+0h] [bp-14h]
  int v16; // [sp+8h] [bp-Ch] BYREF
  int v17; // [sp+Ch] [bp-8h] BYREF

  if ( a2 > a1[11] )
    return sub_35FA58(58181);
  result = sub_368324(a1, a2, &v16, 0);
  v7 = result;
  v17 = result;
  if ( result == 0 )
  {
    v14 = *(unsigned __int8 *)(v16 + 5);
    while ( 1 )
    {
      v8 = *(unsigned __int16 *)(v16 + 16);
      if ( v7 >= v8 )
        break;
      v9 = (unsigned __int16 *)(*(_DWORD *)(v16 + 64) + 2 * v7);
      v10 = *(_DWORD *)(v16 + 56);
      v11 = (unsigned __int8 *)(v10 + (unsigned __int16)(_byteswap_ushort(*v9) & *(_WORD *)(v16 + 18)));
      if ( *(_BYTE *)(v16 + 3) == 0 )
      {
        v12 = sub_34D8D8((unsigned int *)(v10 + (unsigned __int16)(_byteswap_ushort(*v9) & *(_WORD *)(v16 + 18))));
        v17 = sub_3692E0(a1, v12, 1, a4);
        if ( v17 != 0 )
          goto LABEL_20;
      }
      v17 = sub_3691EC(v16, v11);
      if ( v17 != 0 )
        goto LABEL_20;
      ++v7;
    }
    if ( *(_BYTE *)(v16 + 3) != 0 )
    {
      if ( a4 != nullptr )
        *a4 += v8;
    }
    else
    {
      v13 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v16 + 56) + v14 + 8));
      v17 = sub_3692E0(a1, v13, 1, a4);
      if ( v17 != 0 )
      {
LABEL_20:
        sub_368120(v16);
        return v17;
      }
    }
    if ( a3 != 0 )
    {
      sub_3692C4(v16, &v17);
    }
    else
    {
      v17 = sub_367BA8(*(_DWORD *)(v16 + 68));
      if ( v17 == 0 )
        sub_35FACC(v16, *(unsigned __int8 *)(*(_DWORD *)(v16 + 56) + v14) | 8);
    }
    goto LABEL_20;
  }
  return result;
}


//======================================================================
// sub_3693CC
// address: 0x003693CC   size: 0x24 (36 bytes)
//======================================================================
int sub_3693CC()
{
  return sub_3693F0();
}


//======================================================================
// sub_3693F0
// address: 0x003693F0   size: 0xA8A (2698 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   003693F0  LDR     R3, [SP,#arg_60]
//   003693F2  LDR     R4, [SP,#arg_60]
//   003693F4  ADDS    R3, #0x56 ; 'V'
//   003693F6  MOVS    R0, #0
//   003693F8  LDRSH   R6, [R3,R0]
//   003693FA  MOVS    R3, R6
//   003693FC  ADDS    R3, #0x20 ; ' '
//   003693FE  LSLS    R3, R3, #2
//   00369400  LDR     R3, [R3,R4]
//   00369402  STR     R6, [SP,#arg_68]; int
//   00369404  STR     R3, [SP,#arg_38]; int
//   00369406  LDRB    R4, [R3,#1]
//   00369408  CMP     R6, #0
//   0036940A  BNE     loc_3694E4
//   0036940C  CMP     R4, #0
//   0036940E  BNE     loc_369414
//   00369410  BL      sub_369EB0
//   00369414  STR     R6, [SP,#arg_FC]; int
//   00369416  STR     R6, [SP,#arg_110]; int
//   00369418  LDR     R5, [R3,#0x44]
//   0036941A  LDR     R4, [R3,#0x34]
//   0036941C  MOVS    R0, R5
//   0036941E  STR     R5, [SP,#arg_30]; int
//   00369420  BL      sub_367BA8
//   00369424  STR     R0, [SP,#arg_E8]
//   00369426  CMP     R0, #0
//   00369428  BNE     loc_369462
//   0036942A  LDR     R6, [SP,#arg_38]
//   0036942C  ADD     R1, SP, #arg_FC
//   0036942E  ADD     R2, SP, #arg_110
//   00369430  LDR     R3, [R6,#0x48]
//   00369432  STR     R0, [SP,#arg_0]
//   00369434  MOVS    R0, R4
//   00369436  BL      sub_368740
//   0036943A  LDR     R1, [SP,#arg_FC]
//   0036943C  STR     R0, [SP,#arg_E8]; int
//   0036943E  CMP     R0, #0
//   00369440  BNE     loc_36944A
//   00369442  LDR     R0, [SP,#arg_38]
//   00369444  ADD     R2, SP, #arg_E8
//   00369446  BL      sub_368FAA
//   0036944A  LDRB    R3, [R4,#0x11]
//   0036944C  CMP     R3, #0
//   0036944E  BEQ     loc_369462
//   00369450  LDR     R5, [SP,#arg_38]
//   00369452  ADD     R2, SP, #arg_E8
//   00369454  MOVS    R0, R4
//   00369456  LDR     R3, [R5,#0x48]
//   00369458  LDR     R1, [SP,#arg_110]
//   0036945A  STR     R2, [SP,#arg_0]; int
//   0036945C  MOVS    R2, #5
//   0036945E  BL      sub_368C08
//   00369462  LDR     R4, [SP,#arg_E8]
//   00369464  LDR     R0, [SP,#arg_FC]
//   00369466  CMP     R4, #0
//   00369468  BEQ     loc_369482
//   0036946A  LDR     R3, [SP,#arg_60]
//   0036946C  MOVS    R2, #0
//   0036946E  ADDS    R3, #8
//   00369470  STR     R2, [R3,#0x7C]
//   00369472  BL      sub_368120
//   00369476  LDR     R4, [SP,#arg_E8]
//   00369478  CMP     R4, #0
//   0036947A  BEQ     loc_369480
//   0036947C  BL      sub_369EB0
//   00369480  B       loc_3694CE
//   00369482  LDR     R6, [SP,#arg_38]
//   00369484  ADDS    R0, #0x14; void *
//   00369486  LDRB    R2, [R6,#1]
//   00369488  MOVS    R1, R6
//   0036948A  ADDS    R1, #0x14; void *
//   0036948C  LSLS    R2, R2, #1; size_t
//   0036948E  BL      j_memcpy
//   00369492  LDR     R0, [SP,#arg_FC]
//   00369494  LDRB    R2, [R6,#1]
//   00369496  MOVS    R1, R6
//   00369498  ADDS    R1, #0x20 ; ' '; void *
//   0036949A  LSLS    R2, R2, #2; size_t
//   0036949C  ADDS    R0, #0x20 ; ' '; void *
//   0036949E  BL      j_memcpy
//   003694A2  LDRB    R3, [R6,#1]
//   003694A4  LDR     R0, [SP,#arg_FC]
//   003694A6  STRB    R3, [R0,#1]
//   003694A8  LDR     R3, [SP,#arg_FC]
//   003694AA  LDR     R0, [SP,#arg_38]
//   003694AC  LDR     R3, [R3,#0x38]
//   003694AE  LDRB    R1, [R3]
//   003694B0  MOVS    R3, #8
//   003694B2  BICS    R1, R3
//   003694B4  BL      sub_35FACC
//   003694B8  LDRB    R0, [R6,#5]
//   003694BA  LDR     R3, [R6,#0x38]
//   003694BC  LDR     R1, [SP,#arg_110]
//   003694BE  ADDS    R0, #8
//   003694C0  ADDS    R0, R3, R0
//   003694C2  BL      sub_34D8F0
//   003694C6  LDR     R3, [SP,#arg_60]
//   003694C8  LDR     R1, [SP,#arg_FC]; int
//   003694CA  ADDS    R3, #8
//   003694CC  STR     R1, [R3,#0x7C]
//   003694CE  LDR     R3, [SP,#arg_60]
//   003694D0  MOVS    R2, #1; int
//   003694D2  ADDS    R3, #0x56 ; 'V'
//   003694D4  STRH    R2, [R3]
//   003694D6  LDR     R3, [SP,#arg_60]
//   003694D8  ADDS    R3, #0x58 ; 'X'
//   003694DA  STRH    R4, [R3]
//   003694DC  LDR     R3, [SP,#arg_60]
//   003694DE  ADDS    R3, #0x5A ; 'Z'; int
//   003694E0  STRH    R4, [R3]
//   003694E2  B       sub_3693F0
//   003694E4  CMP     R4, #0
//   003694E6  BNE     loc_3694F6
//   003694E8  LDR     R5, [SP,#arg_38]
//   003694EA  LDR     R6, [SP,#arg_98]
//   003694EC  LDRH    R3, [R5,#0xE]
//   003694EE  CMP     R3, R6
//   003694F0  BGT     loc_3694F6
//   003694F2  BL      sub_369EB0
//   003694F6  LDR     R3, [SP,#arg_68]
//   003694F8  LDR     R4, [SP,#arg_60]
//   003694FA  ADDS    R3, #0x1F
//   003694FC  LSLS    R3, R3, #2
//   003694FE  LDR     R7, [R3,R4]
//   00369500  LDR     R3, [SP,#arg_68]
//   00369502  LDR     R0, [R7,#0x44]
//   00369504  ADDS    R3, #0x2B ; '+'
//   00369506  LSLS    R3, R3, #1
//   00369508  LDRH    R5, [R3,R4]
//   0036950A  BL      sub_367BA8
//   0036950E  SUBS    R4, R0, #0
//   00369510  BEQ     loc_369516
//   00369512  BL      sub_369E92
//   00369516  LDR     R6, [SP,#arg_38]
//   00369518  LDRB    R3, [R6,#4]
//   0036951A  CMP     R3, #0
//   0036951C  BNE     loc_369520
//   0036951E  B       loc_369640
//   00369520  LDRB    R6, [R6,#1]
//   00369522  CMP     R6, #1
//   00369524  BEQ     loc_369528
//   00369526  B       loc_369640
//   00369528  LDR     R0, [SP,#arg_38]
//   0036952A  LDRH    R2, [R0,#0x14]
//   0036952C  LDRH    R3, [R0,#0x10]
//   0036952E  CMP     R3, R2
//   00369530  BEQ     loc_369534
//   00369532  B       loc_369640
//   00369534  LDR     R1, [R7,#0x48]
//   00369536  CMP     R1, #1
//   00369538  BNE     loc_36953C
//   0036953A  B       loc_369640
//   0036953C  LDRH    R2, [R7,#0x10]
//   0036953E  CMP     R2, R5
//   00369540  BEQ     loc_369544
//   00369542  B       loc_369640
//   00369544  LDR     R5, [R0,#0x34]
//   00369546  CMP     R3, #0
//   00369548  BNE     loc_369556
//   0036954A  LDR     R0, =0xDD68
//   0036954C  BL      sub_35FA58
//   00369550  MOVS    R4, R0
//   00369552  BL      sub_369E92
//   00369556  STR     R4, [SP,#arg_0]
//   00369558  MOVS    R0, R5
//   0036955A  ADD     R1, SP, #arg_D4
//   0036955C  ADD     R2, SP, #arg_FC
//   0036955E  MOVS    R3, R4
//   00369560  BL      sub_368740
//   00369564  STR     R0, [SP,#arg_E8]
//   00369566  CMP     R0, #0
//   00369568  BNE     loc_36963A
//   0036956A  LDR     R4, [SP,#arg_38]
//   0036956C  LDR     R1, [R4,#0x20]
//   0036956E  MOVS    R0, R4
//   00369570  ADD     R4, SP, #arg_C8
//   00369572  STR     R1, [SP,#arg_110]
//   00369574  BL      sub_3524C6
//   00369578  MOVS    R1, #0xD
//   0036957A  STRH    R0, [R4]
//   0036957C  LDR     R0, [SP,#arg_D4]
//   0036957E  BL      sub_35FACC
//   00369582  MOVS    R3, R4
//   00369584  LDR     R0, [SP,#arg_D4]
//   00369586  MOVS    R1, R6
//   00369588  ADD     R2, SP, #arg_110
//   0036958A  BL      sub_35089C
//   0036958E  LDRB    R3, [R5,#0x11]
//   00369590  CMP     R3, #0
//   00369592  BEQ     loc_3695B6
//   00369594  ADD     R6, SP, #arg_E8
//   00369596  LDR     R3, [R7,#0x48]
//   00369598  MOVS    R0, R5
//   0036959A  MOVS    R2, #5
//   0036959C  STR     R6, [SP,#arg_0]
//   0036959E  LDR     R1, [SP,#arg_FC]
//   003695A0  BL      sub_368C08
//   003695A4  LDR     R0, [SP,#arg_D4]
//   003695A6  LDRH    R2, [R4]
//   003695A8  LDRH    R3, [R0,#0xA]

//======================================================================
// sub_369E7A
// address: 0x00369E7A   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_369E7A(
        unsigned int a1,
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
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        int a31,
        int a32,
        int a33,
        unsigned int a34)
{
  if ( a34 != 0 )
    a1 = sub_351FB4(a34);
  return sub_369E92(a1);
}


//======================================================================
// sub_369E92
// address: 0x00369E92   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_369E92(
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
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29)
{
  int v29; // r4
  int v30; // r0

  *(_BYTE *)(a19 + 1) = 0;
  v30 = sub_368120(a19);
  --*(_WORD *)(a29 + 86);
  if ( v29 == 0 )
    v30 = sub_3693F0(v30);
  return sub_369EB0(v30);
}


//======================================================================
// sub_369EB0
// address: 0x00369EB0   size: 0x20 (32 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_369EB0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  unsigned int v9; // [sp-D8h] [bp-D8h]

  if ( v9 != 0 )
    sub_351FB4(v9);
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_369ED0
// address: 0x00369ED0   size: 0x142 (322 bytes)
//======================================================================
int __fastcall sub_369ED0(int result, int a2, int a3, int a4, int a5)
{
  int *v5; // r4
  int v6; // r6
  int v7; // r5
  signed int v8; // r5
  unsigned int *v9; // r6
  unsigned int v10; // r7
  unsigned int v11; // r0
  unsigned int *v12; // [sp+Ch] [bp-28h]
  int v13; // [sp+10h] [bp-24h]
  int v14; // [sp+14h] [bp-20h]
  signed int v15; // [sp+18h] [bp-1Ch]
  int v19; // [sp+2Ch] [bp-8h] BYREF

  v5 = (int *)result;
  v6 = a4;
  v7 = a3;
  while ( 1 )
  {
    v13 = v6 - 1;
    if ( v6 <= 0 || v5[4] == 0 )
      break;
    if ( v7 <= 0 )
      return sub_366700(v5, a5, "%d of %d pages missing from overflow list starting at %d", v6, a4, a3);
    result = sub_366764((int)v5, v7, a5);
    if ( result != 0 )
      return result;
    if ( sub_366EBC(v5[1], v7, &v19, 0) != 0 )
      return sub_366700(v5, a5, "failed to get page %d", v7);
    v14 = *v5;
    v12 = *(unsigned int **)(v19 + 4);
    if ( a2 != 0 )
    {
      v15 = sub_34D8D8(v12 + 1);
      if ( *(_BYTE *)(v14 + 17) != 0 )
        sub_36860C((int)v5, v7, 2, 0, a5);
      if ( *(_DWORD *)(*v5 + 36) / 4 - 1 <= v15 )
      {
        sub_366700(v5, a5, "freelist leaf count too big on page %d", v7);
        v13 = v6 - 2;
      }
      else
      {
        v8 = 0;
        v9 = v12 + 2;
        while ( v8 < v15 )
        {
          v10 = sub_34D8D8(v9);
          if ( *(_BYTE *)(*v5 + 17) != 0 )
            sub_36860C((int)v5, v10, 2, 0, a5);
          sub_366764((int)v5, v10, a5);
          ++v8;
          ++v9;
        }
        v13 -= v15;
      }
    }
    else if ( *(_BYTE *)(v14 + 17) != 0 && v13 > 0 )
    {
      v11 = sub_34D8D8(v12);
      sub_36860C((int)v5, v11, 4, v7, a5);
    }
    v7 = sub_34D8D8(v12);
    result = sub_367EB6(v19);
    v6 = v13;
  }
  return result;
}


//======================================================================
// sub_36A020
// address: 0x0036A020   size: 0x498 (1176 bytes)
//======================================================================
int __fastcall sub_36A020(_DWORD *a1, unsigned int a2, int a3, __int64 *a4, __int64 *a5)
{
  int v6; // r7
  int v7; // r5
  int v8; // r3
  int v9; // r3
  int i; // r5
  int v11; // r6
  unsigned int *v12; // r6
  unsigned int v13; // r6
  unsigned int v14; // r6
  int v15; // r0
  unsigned int v16; // r5
  __int64 v17; // r2
  int v18; // r0
  unsigned __int8 *v19; // r5
  size_t v20; // r7
  unsigned __int8 *v21; // r6
  int v22; // r7
  int v23; // r0
  int v24; // r0
  int v25; // r3
  int k; // r6
  int v27; // r6
  int m; // r3
  int n; // r3
  unsigned int v31; // [sp+10h] [bp-C4h]
  unsigned int v32; // [sp+10h] [bp-C4h]
  int j; // [sp+10h] [bp-C4h]
  int v34; // [sp+14h] [bp-C0h]
  int v37; // [sp+1Ch] [bp-B8h]
  int v39; // [sp+20h] [bp-B4h]
  int v40; // [sp+24h] [bp-B0h]
  unsigned __int8 *v41; // [sp+28h] [bp-ACh]
  int v42; // [sp+28h] [bp-ACh]
  _BYTE *v43; // [sp+34h] [bp-A0h] BYREF
  __int64 v44; // [sp+38h] [bp-9Ch]
  __int64 v45; // [sp+40h] [bp-94h]
  _QWORD v46[4]; // [sp+48h] [bp-8Ch] BYREF
  _BYTE v47[100]; // [sp+68h] [bp-6Ch] BYREF

  v44 = 0;
  v45 = 0;
  sqlite3_snprintf(100, (int)v47, (int)"Page %d: ", a2);
  v6 = *a1;
  v40 = *(_DWORD *)(*a1 + 36);
  if ( a2 == 0 )
    return 0;
  v7 = sub_366764((int)a1, a2, a3);
  if ( v7 != 0 )
    return 0;
  v8 = sub_367150((int *)v6, a2, &v43, 0);
  if ( v8 != 0 )
  {
    sub_366700(a1, v47, "unable to get the page. error code=%d", v8);
  }
  else
  {
    *v43 = 0;
    v9 = sub_35FC54(v43);
    if ( v9 != 0 )
    {
      sub_366700(a1, v47, "btreeInitPage() returns error code %d", v9);
      sub_368120((int)v43);
    }
    else
    {
      v37 = 0;
      for ( i = 0; i < *((unsigned __int16 *)v43 + 8) && a1[4] != 0; ++i )
      {
        sqlite3_snprintf(100, (int)v47, (int)"On tree page %d cell %d: ", a2);
        v41 = (unsigned __int8 *)(*((_DWORD *)v43 + 14)
                                + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*((_DWORD *)v43 + 16) + 2 * i))
                                                   & *((_WORD *)v43 + 9)));
        sub_3523AC((int)v43, v41, (int)v46);
        v31 = HIDWORD(v46[1]);
        if ( v43[2] != 0 )
        {
          if ( i != 0 )
          {
            if ( v46[0] <= v45 )
              sub_366700(a1, v47, "Rowid %lld out of order (previous was %lld)", v46[0], v45);
            v45 = v46[0];
          }
          else
          {
            v45 = v46[0];
            v44 = v46[0];
          }
        }
        else
        {
          v31 = HIDWORD(v46[1]) + LODWORD(v46[0]);
        }
        if ( v31 > HIWORD(v46[2]) )
        {
          v12 = (unsigned int *)&v41[LOWORD(v46[3])];
          if ( (unsigned int)v12 <= *((_DWORD *)v43 + 14) + *(_DWORD *)(v6 + 36) )
          {
            v32 = (v40 - 5 - HIWORD(v46[2]) + v31) / (v40 - 4);
            v13 = sub_34D8D8(v12);
            if ( *(_BYTE *)(v6 + 17) != 0 )
              sub_36860C((int)a1, v13, 3, a2, (int)v47);
            sub_369ED0((int)a1, 0, v13, v32, (int)v47);
          }
        }
        v11 = v37;
        if ( v43[3] == 0 )
        {
          v14 = sub_34D8D8((unsigned int *)v41);
          if ( *(_BYTE *)(v6 + 17) != 0 )
            sub_36860C((int)a1, v14, 5, a2, (int)v47);
          v15 = sub_36A020(a1, v14);
          v11 = v15;
          if ( i != 0 && v15 != v37 )
            sub_366700(a1, v47, "Child page depth differs");
        }
        v37 = v11;
      }
      if ( v43[3] == 0 )
      {
        v16 = sub_34D8D8((unsigned int *)(*((_DWORD *)v43 + 14) + (unsigned __int8)v43[5] + 8));
        sqlite3_snprintf(100, (int)v47, (int)"On page %d at right child: ", a2);
        if ( *(_BYTE *)(v6 + 17) != 0 )
          sub_36860C((int)a1, v16, 5, a2, (int)v47);
        sub_36A020(a1, v16);
      }
      if ( v43[3] != 0 && v43[2] != 0 )
      {
        if ( a4 != nullptr )
        {
          v17 = *a4;
          if ( a5 != nullptr )
          {
            if ( v44 <= v17 )
              sub_366700(a1, v47, "Rowid %lld out of order (min less than parent min of %lld)", v44, v17);
            if ( v45 > *a5 )
              sub_366700(a1, v47, "Rowid %lld out of order (max larger than parent max of %lld)", v45, *a5);
            *a4 = v45;
          }
          else if ( v45 > v17 )
          {
            sub_366700(a1, v47, "Rowid %lld out of order (max larger than parent min of %lld)", v45, v17);
          }
        }
        else if ( a5 != nullptr && v44 <= *a5 )
        {
          sub_366700(a1, v47, "Rowid %lld out of order (min less than parent max of %lld)", v44, *a5);
        }
      }
      v34 = *((_DWORD *)v43 + 14);
      v39 = (unsigned __int8)v43[5];
      v18 = sub_351C3C(*(_DWORD *)(v6 + 32));
      v19 = (unsigned __int8 *)v18;
      if ( v18 != 0 )
      {
        v20 = (unsigned __int16)(_byteswap_ushort(*(_WORD *)(v34 + v39 + 5)) - 1) + 1;
        j_memset((void *)(v18 + v20), 0, v40 - v20);
        j_memset(v19, 1, v20);
        v42 = (*(unsigned __int8 *)(v34 + v39 + 3) << 8) | *(unsigned __int8 *)(v34 + v39 + 4);
        v21 = (unsigned __int8 *)(v34 + v39 + 12 - 4 * (unsigned __int8)v43[3]);
        for ( j = 0; j < v42; ++j )
        {
          v22 = (*v21 << 8) | v21[1];
          if ( v40 - 3 <= v22 )
            v23 = 0x10000;
          else
            v23 = sub_3524C6((int)v43, v34 + v22);
          v24 = v22 - 1 + v23;
          if ( v24 < v40 )
          {
            while ( v24 >= v22 )
              ++v19[v24--];
          }
          else
          {
            sub_366700(a1, 0, "Corruption detected in cell %d on page %d", j, a2);
          }
          v21 += 2;
        }
        v25 = *(unsigned __int8 *)(v34 + v39 + 2);
        for ( k = *(unsigned __int8 *)(v34 + v39 + 1) << 8; ; k = *(unsigned __int8 *)(v34 + v27) << 8 )
        {
          v27 = k | v25;
          if ( v27 == 0 )
            break;
          for ( m = v27 + ((*(unsigned __int8 *)(v34 + v27 + 2) << 8) | *(unsigned __int8 *)(v34 + v27 + 3));
                --m >= v27;
                ++v19[m] )
          {
            ;
          }
          v25 = *(unsigned __int8 *)(v34 + v27 + 1);
        }
        for ( n = 0; n < v40; ++n )
        {
          if ( v19[n] != 0 )
          {
            if ( v19[n] > 1u )
            {
              sub_366700(a1, 0, "Multiple uses for byte %d of page %d", n, a2);
              break;
            }
          }
          else
          {
            ++v27;
          }
        }
        if ( v27 != *(unsigned __int8 *)(v34 + v39 + 7) )
          sub_366700(
            a1,
            0,
            "Fragmentation of %d bytes reported as %d on page %d",
            v27,
            *(unsigned __int8 *)(v34 + v39 + 7),
            a2);
      }
      else
      {
        a1[6] = 1;
      }
      sub_351FB4((unsigned int)v19);
      sub_368120((int)v43);
      return v37 + 1;
    }
  }
  return v7;
}


//======================================================================
// sub_36A4C8
// address: 0x0036A4C8   size: 0x208 (520 bytes)
//======================================================================
int __fastcall sub_36A4C8(int a1, unsigned int a2, size_t a3, char *a4, int a5)
{
  int v6; // r3
  int v7; // r7
  int v9; // r3
  unsigned int v10; // r3
  int v11; // r0
  size_t v12; // r6
  void *v13; // r5
  int result; // r0
  void *v15; // r0
  const void *v16; // r1
  unsigned int v17; // r5
  int v18; // r6
  unsigned int v19; // r0
  int v20; // r3
  int v21; // r7
  unsigned int v22; // r6
  void *v23; // r0
  int v24; // r6
  unsigned int v25; // r3
  int i; // r6
  int v27; // r2
  int v28; // r3
  unsigned int v29; // r3
  size_t v30; // r6
  char *v31; // r5
  void *v32; // r0
  const void *v33; // r1
  unsigned int v34; // [sp+Ch] [bp-28h]
  int v35; // [sp+10h] [bp-24h]
  int v36; // [sp+10h] [bp-24h]
  int v39; // [sp+1Ch] [bp-18h]
  int *v40; // [sp+20h] [bp-14h]
  unsigned int *v41; // [sp+24h] [bp-10h]
  unsigned int v42; // [sp+28h] [bp-Ch] BYREF
  int v43; // [sp+2Ch] [bp-8h] BYREF

  v6 = *(__int16 *)(a1 + 86);
  v7 = *(_DWORD *)(4 * (v6 + 32) + a1);
  v40 = *(int **)(a1 + 4);
  if ( *(_WORD *)(a1 + 58) == 0 )
  {
    sub_352472(v7, *(unsigned __int16 *)(2 * (v6 + 44) + a1), a1 + 32);
    *(_BYTE *)(a1 + 82) = 1;
  }
  v35 = *(_DWORD *)(a1 + 40) + *(unsigned __int16 *)(a1 + 52);
  v9 = 0;
  if ( *(_BYTE *)(v7 + 2) == 0 )
    v9 = *(_DWORD *)(a1 + 32);
  if ( a2 + a3 <= v9 + *(_DWORD *)(a1 + 44) )
  {
    v10 = *(unsigned __int16 *)(a1 + 54);
    if ( v35 + v10 <= *(_DWORD *)(v7 + 56) + v40[9] )
    {
      if ( a2 >= v10 )
      {
        v17 = a2 - v10;
      }
      else
      {
        v12 = v10 - a2;
        if ( a2 + a3 <= v10 )
          v12 = a3;
        v13 = (void *)(v35 + a2);
        if ( a5 != 0 )
        {
          result = sub_367BA8(*(_DWORD *)(v7 + 68));
          if ( result != 0 )
            return result;
          v15 = v13;
          v16 = a4;
        }
        else
        {
          v15 = a4;
          v16 = v13;
        }
        j_memcpy(v15, v16, v12);
        v17 = 0;
        a4 += v12;
        a3 -= v12;
      }
      if ( a3 == 0 )
        return 0;
      v18 = *(unsigned __int16 *)(a1 + 54);
      v34 = v40[9] - 4;
      v19 = sub_34D8D8((unsigned int *)(v35 + v18));
      v20 = *(unsigned __int8 *)(a1 + 84);
      v42 = v19;
      if ( v20 == 0
        || *(_DWORD *)(a1 + 20) != 0
        || (v22 = (*(_DWORD *)(a1 + 48) - 1 + v34 - v18) / v34,
            v23 = sub_351CC4(4 * v22),
            *(_DWORD *)(a1 + 20) = v23,
            v22 == 0)
        || v23 != nullptr )
      {
        v21 = 0;
      }
      else
      {
        v21 = 7;
      }
      v24 = *(_DWORD *)(a1 + 20);
      if ( v24 != 0 )
      {
        v25 = *(_DWORD *)(4 * (v17 / v34) + v24);
        v24 = 0;
        if ( v25 != 0 )
        {
          v24 = v17 / v34;
          v42 = v25;
          v17 %= v34;
        }
      }
      for ( i = 4 * v24; ; i = v36 + 4 )
      {
        v36 = i;
        if ( v21 != 0 )
          return v21;
        if ( a3 == 0 )
          return 0;
        if ( v42 == 0 )
        {
          v11 = 54927;
          return sub_35FA58(v11);
        }
        v27 = *(_DWORD *)(a1 + 20);
        if ( v27 != 0 )
          *(_DWORD *)(v27 + i) = v42;
        if ( v17 < v34 )
          break;
        v28 = *(_DWORD *)(a1 + 20);
        if ( v28 != 0 && (v29 = *(_DWORD *)(v28 + i + 4)) != 0 )
          v42 = v29;
        else
          v21 = sub_368680((int)v40, v42, nullptr, &v42);
        v17 -= v34;
LABEL_50:
        ;
      }
      v30 = v34 - v17;
      if ( a3 + v17 <= v34 )
        v30 = a3;
      v21 = sub_366EBC(*v40, v42, &v43, 2 * (a5 == 0));
      if ( v21 != 0 )
      {
LABEL_49:
        a3 -= v30;
        a4 += v30;
        goto LABEL_50;
      }
      v39 = v43;
      v41 = *(unsigned int **)(v43 + 4);
      v42 = sub_34D8D8(v41);
      v31 = (char *)v41 + v17 + 4;
      if ( a5 != 0 )
      {
        v21 = sub_367BA8(v39);
        if ( v21 != 0 )
        {
LABEL_48:
          sub_367EB6(v43);
          v17 = 0;
          goto LABEL_49;
        }
        v32 = v31;
        v33 = a4;
      }
      else
      {
        v32 = a4;
        v33 = v31;
      }
      j_memcpy(v32, v33, v30);
      goto LABEL_48;
    }
  }
  v11 = 54791;
  return sub_35FA58(v11);
}


//======================================================================
// sub_36A6D8
// address: 0x0036A6D8   size: 0x33C (828 bytes)
//======================================================================
int __fastcall sub_36A6D8(int a1, _DWORD *a2, unsigned int a3, unsigned int a4, char a5, int *a6)
{
  _BYTE *v6; // r4
  __int64 v9; // r2
  int result; // r0
  int v11; // r3
  int (*v12)(void); // r5
  __int16 v13; // r2
  int v14; // r4
  int (*v15)(void); // r5
  unsigned __int8 *v16; // r0
  __int64 v17; // r2
  __int16 v18; // r2
  unsigned __int8 *v19; // r1
  unsigned int v20; // r0
  int v21; // r3
  int v22; // r5
  int v23; // r0
  unsigned int v24; // r0
  int v25; // r0
  char *v26; // [sp+Ch] [bp-38h]
  int i; // [sp+10h] [bp-34h]
  int v28; // [sp+14h] [bp-30h]
  int v29; // [sp+18h] [bp-2Ch]
  int (*v30)(void); // [sp+1Ch] [bp-28h]
  int v31; // [sp+20h] [bp-24h]
  int v33; // [sp+28h] [bp-1Ch]
  size_t v35; // [sp+30h] [bp-14h]
  char v36; // [sp+34h] [bp-10h]
  __int64 v37; // [sp+38h] [bp-Ch] BYREF

  v6 = (_BYTE *)(a1 + 83);
  if ( *(_BYTE *)(a1 + 83) == 1 && *(_BYTE *)(a1 + 82) != 0 && *(_BYTE *)(*(_DWORD *)(a1 + 128) + 2) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    if ( v9 == __PAIR64__(a4, a3) )
    {
      *a6 = 0;
      return 0;
    }
    if ( *(_BYTE *)(a1 + 81) != 0 && __SPAIR64__(a4, a3) > v9 )
    {
      *a6 = -1;
      return 0;
    }
  }
  if ( a2 == nullptr )
  {
    v30 = nullptr;
    goto LABEL_23;
  }
  v11 = *a2;
  if ( *(unsigned __int16 *)(*a2 + 6) + (unsigned int)*(unsigned __int16 *)(*a2 + 8) <= 0xD )
  {
    v13 = *(_WORD *)(a2[2] + 28);
    if ( **(_BYTE **)(v11 + 16) != 0 )
    {
      a2[3] = 1;
      a2[4] = -1;
    }
    else
    {
      a2[3] = -1;
      a2[4] = 1;
    }
    if ( (v13 & 4) != 0 )
    {
      v12 = (int (*)(void))sub_35E0D8;
      goto LABEL_21;
    }
    if ( (v13 & 0x19) == 0 )
    {
      if ( *(_DWORD *)(v11 + 20) != 0 )
        v12 = (int (*)(void))sub_35DA5A;
      else
        v12 = (int (*)(void))sub_35E054;
      goto LABEL_21;
    }
  }
  v12 = (int (*)(void))sub_35DA5A;
LABEL_21:
  v30 = v12;
LABEL_23:
  result = sub_36846C(a1);
  v33 = result;
  if ( result != 0 )
    return result;
  if ( *v6 == 0 )
  {
    *a6 = -1;
    return result;
  }
  v36 = 1 - a5;
LABEL_27:
  v14 = *(_DWORD *)(4 * (*(__int16 *)(a1 + 86) + 32) + a1);
  v31 = *(unsigned __int16 *)(v14 + 16) - 1;
  i = v31 >> v36;
  *(_WORD *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1) = v31 >> v36;
  v15 = v30;
  if ( v30 != nullptr )
  {
    v29 = v31 >> v36;
    for ( i = 0; ; v29 = (i + v31) >> 1 )
    {
      v19 = (unsigned __int8 *)(*(_DWORD *)(v14 + 56)
                              + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(v14 + 64) + 2 * v29))
                                                 & *(_WORD *)(v14 + 18))
                              + *(unsigned __int8 *)(v14 + 6));
      v20 = *v19;
      if ( v20 > *(unsigned __int8 *)(v14 + 7)
        && (((v21 = v19[1]) & 0x80) != 0 || (int)(((v20 & 0x7F) << 7) + v21) > *(unsigned __int16 *)(v14 + 8)) )
      {
        sub_3523AC(
          v14,
          (unsigned __int8 *)(*(_DWORD *)(v14 + 56)
                            + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(v14 + 64) + 2 * v29))
                                               & *(_WORD *)(v14 + 18))),
          a1 + 32);
        v35 = *(_DWORD *)(a1 + 32);
        v26 = (char *)sub_351664(v35);
        if ( v26 == nullptr )
        {
          v22 = 7;
          goto LABEL_66;
        }
        *(_WORD *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1) = v29;
        v22 = sub_36A4C8(a1, 0, v35, v26, 0);
        if ( v22 != 0 )
        {
          sqlite3_free(v26);
LABEL_66:
          v33 = v22;
          goto LABEL_67;
        }
        v28 = ((int (__fastcall *)(size_t, char *, _DWORD *, _DWORD))v30)(v35, v26, a2, 0);
        sqlite3_free(v26);
      }
      else
      {
        v28 = v30();
      }
      if ( v28 >= 0 )
      {
        if ( v28 == 0 )
        {
          *a6 = 0;
          *(_WORD *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1) = v29;
          goto LABEL_67;
        }
        v31 = v29 - 1;
      }
      else
      {
        i = v29 + 1;
      }
      if ( i > v31 )
      {
LABEL_58:
        if ( *(_BYTE *)(v14 + 3) != 0 )
        {
          *(_WORD *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1) = v29;
          *a6 = v28;
          goto LABEL_67;
        }
LABEL_60:
        if ( i < *(unsigned __int16 *)(v14 + 16) )
          v23 = (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(v14 + 64) + 2 * i)) & *(_WORD *)(v14 + 18));
        else
          v23 = *(unsigned __int8 *)(v14 + 5) + 8;
        v24 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v14 + 56) + v23));
        *(_WORD *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1) = i;
        v25 = sub_368360(a1, v24);
        if ( v25 != 0 )
        {
          v33 = v25;
          goto LABEL_67;
        }
        goto LABEL_27;
      }
    }
  }
  while ( 1 )
  {
    v16 = (unsigned __int8 *)(*(_DWORD *)(v14 + 56)
                            + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(v14 + 64) + 2 * i))
                                               & *(_WORD *)(v14 + 18))
                            + *(unsigned __int8 *)(v14 + 6));
    if ( *(_BYTE *)(v14 + 4) != 0 )
    {
      while ( *v16++ > 0x7Fu )
      {
        if ( (unsigned int)v16 >= *(_DWORD *)(v14 + 60) )
          return sub_35FA58(55440);
      }
    }
    sub_34D798(v16, &v37);
    v17 = v37;
    if ( __SPAIR64__(a4, a3) > v37 )
    {
      v15 = (int (*)(void))(i + 1);
      if ( i + 1 > v31 )
      {
        v28 = -1;
LABEL_41:
        v18 = i;
        i = (int)v15;
        LOWORD(v29) = v18;
        goto LABEL_58;
      }
      goto LABEL_40;
    }
    if ( v37 <= __SPAIR64__(a4, a3) )
      break;
    v31 = i - 1;
    if ( (int)v15 > i - 1 )
    {
      v28 = 1;
      goto LABEL_41;
    }
LABEL_40:
    i = ((int)v15 + v31) >> 1;
  }
  *(_BYTE *)(a1 + 82) = 1;
  *(_QWORD *)(a1 + 32) = v17;
  *(_WORD *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1) = i;
  if ( *(_BYTE *)(v14 + 3) == 0 )
    goto LABEL_60;
  *a6 = 0;
LABEL_67:
  *(_WORD *)(a1 + 58) = 0;
  *(_BYTE *)(a1 + 82) = 0;
  return v33;
}


//======================================================================
// sub_36AA28
// address: 0x0036AA28   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_36AA28(int a1, unsigned __int8 *a2, unsigned int a3, unsigned int a4, char a5, int *a6)
{
  int v9; // r5
  int result; // r0
  int v11; // r5
  _DWORD *v13; // [sp+18h] [bp-D4h] BYREF
  _BYTE v14[200]; // [sp+1Ch] [bp-D0h] BYREF

  v13 = nullptr;
  if ( a2 != nullptr )
  {
    v9 = sub_35179C(*(_DWORD *)(a1 + 16), (int)v14, 200, (int *)&v13);
    result = 7;
    if ( v9 == 0 )
      return result;
    sub_35256A(*(_DWORD *)(a1 + 16), a3, a2, v9);
    if ( *(_WORD *)(v9 + 4) == 0 )
    {
      sub_354940(*(_DWORD **)(*(_DWORD *)(a1 + 16) + 12), v13);
      return sub_35FA58(51519);
    }
  }
  else
  {
    v9 = 0;
  }
  v11 = sub_36A6D8(a1, (_DWORD *)v9, a3, a4, a5, a6);
  if ( v13 != nullptr )
    sub_354940(*(_DWORD **)(*(_DWORD *)(a1 + 16) + 12), v13);
  return v11;
}


//======================================================================
// sub_36AAC8
// address: 0x0036AAC8   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_36AAC8(int a1)
{
  _BYTE *v1; // r5
  int v4; // r6
  int v5; // r3

  v1 = (_BYTE *)(a1 + 83);
  if ( *(_BYTE *)(a1 + 83) == 4 )
    return *(_DWORD *)(a1 + 76);
  *v1 = 0;
  v4 = sub_36AA28(a1, *(unsigned __int8 **)(a1 + 72), *(_DWORD *)(a1 + 64), *(_DWORD *)(a1 + 68), 0, (int *)(a1 + 76));
  if ( v4 == 0 )
  {
    sqlite3_free(*(_DWORD *)(a1 + 72));
    v5 = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 72) = 0;
    if ( v5 != 0 && *v1 == 1 )
      *v1 = 2;
  }
  return v4;
}


//======================================================================
// sub_36AB10
// address: 0x0036AB10   size: 0x108 (264 bytes)
//======================================================================
int __fastcall sub_36AB10(int a1, int *a2)
{
  _BYTE *v4; // r7
  unsigned int v5; // r3
  int result; // r0
  int v7; // r3
  int v8; // r3
  _WORD *v9; // r6
  int v10; // r3
  _WORD *v11; // r1
  int v12; // r3
  unsigned int v13; // r2
  unsigned int v14; // r0
  __int16 v15; // r3
  int v16; // r1

  while ( 1 )
  {
    v4 = (_BYTE *)(a1 + 83);
    v5 = *(unsigned __int8 *)(a1 + 83);
    if ( v5 != 1 )
    {
      if ( v5 > 2 )
      {
        result = sub_36AAC8(a1);
        if ( result != 0 )
        {
          v7 = 0;
LABEL_7:
          *a2 = v7;
          return result;
        }
      }
      result = (unsigned __int8)*v4;
      if ( *v4 == 0 )
      {
        v7 = 1;
        goto LABEL_7;
      }
      v8 = *(_DWORD *)(a1 + 76);
      if ( v8 != 0 )
      {
        result = 0;
        *v4 = 1;
        *(_DWORD *)(a1 + 76) = 0;
        if ( v8 > 0 )
        {
          *a2 = 0;
          return result;
        }
      }
    }
    v9 = (_WORD *)(a1 + 86);
    v10 = *(__int16 *)(a1 + 86);
    v11 = (_WORD *)(a1 + 2 * v10 + 88);
    v12 = *(_DWORD *)(4 * (v10 + 32) + a1);
    v13 = (unsigned __int16)(*v11 + 1);
    *v11 = v13;
    *(_WORD *)(a1 + 58) = 0;
    *(_BYTE *)(a1 + 82) = 0;
    if ( v13 < *(unsigned __int16 *)(v12 + 16) )
      break;
    if ( *(_BYTE *)(v12 + 3) == 0 )
    {
      v14 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v12 + 56) + *(unsigned __int8 *)(v12 + 5) + 8));
      result = sub_368360(a1, v14);
      if ( result == 0 )
        result = sub_3683D0(a1);
      *a2 = 0;
      return result;
    }
    do
    {
      result = (unsigned __int16)*v9;
      if ( *v9 == 0 )
      {
        *a2 = 1;
        *v4 = result;
        return result;
      }
      sub_368120(*(_DWORD *)(4 * ((__int16)result + 32) + a1));
      v15 = *v9 - 1;
      *v9 = v15;
      *(_WORD *)(a1 + 58) = 0;
      *(_BYTE *)(a1 + 82) = 0;
      v16 = *(_DWORD *)(4 * (v15 + 32) + a1);
    }
    while ( *(unsigned __int16 *)(2 * (v15 + 44) + a1) >= (unsigned int)*(unsigned __int16 *)(v16 + 16) );
    *a2 = 0;
    if ( *(_BYTE *)(v16 + 2) == 0 )
      return 0;
  }
  *a2 = 0;
  if ( *(_BYTE *)(v12 + 3) != 0 )
    return 0;
  else
    return sub_3683D0(a1);
}


//======================================================================
// sub_36AC18
// address: 0x0036AC18   size: 0xFC (252 bytes)
//======================================================================
int __fastcall sub_36AC18(int a1, int *a2)
{
  _BYTE *v2; // r7
  unsigned int v3; // r3
  int result; // r0
  int v7; // r3
  _WORD *v8; // r6
  int v9; // r3
  unsigned int v10; // r0
  int v11; // r3
  int v12; // r3
  int v13; // r2
  int v14; // r3
  __int16 v15; // [sp+4h] [bp-8h]

  *(_BYTE *)(a1 + 81) = 0;
  v2 = (_BYTE *)(a1 + 83);
  v3 = *(unsigned __int8 *)(a1 + 83);
  if ( v3 != 1 )
  {
    if ( v3 > 2 )
    {
      result = sub_36AAC8(a1);
      if ( result != 0 )
      {
        *a2 = 0;
        return result;
      }
    }
    result = (unsigned __int8)*v2;
    if ( *v2 == 0 )
    {
LABEL_17:
      v11 = 1;
      goto LABEL_22;
    }
    v7 = *(_DWORD *)(a1 + 76);
    if ( v7 != 0 )
    {
      result = 0;
      *v2 = 1;
      *(_DWORD *)(a1 + 76) = 0;
      if ( v7 < 0 )
      {
        *a2 = 0;
        return result;
      }
    }
  }
  v8 = (_WORD *)(a1 + 86);
  v9 = *(_DWORD *)(4 * (*(__int16 *)(a1 + 86) + 32) + a1);
  if ( *(_BYTE *)(v9 + 3) != 0 )
  {
    while ( 1 )
    {
      result = (unsigned __int16)*v8;
      v12 = (__int16)result;
      v13 = 2 * ((__int16)result + 44);
      v15 = *(_WORD *)(v13 + a1);
      if ( v15 != 0 )
        break;
      if ( *v8 == 0 )
      {
        *v2 = 0;
        goto LABEL_17;
      }
      sub_368120(*(_DWORD *)(4 * ((__int16)result + 32) + a1));
      --*v8;
      *(_WORD *)(a1 + 58) = 0;
      *(_BYTE *)(a1 + 82) = 0;
    }
    result = 0;
    *(_WORD *)(a1 + 58) = 0;
    *(_BYTE *)(a1 + 82) = 0;
    *(_WORD *)(v13 + a1) = v15 - 1;
    v14 = *(_DWORD *)(4 * (v12 + 32) + a1);
    if ( *(_BYTE *)(v14 + 2) != 0 && *(_BYTE *)(v14 + 3) == 0 )
      result = sub_36AC18(a1, a2);
    goto LABEL_21;
  }
  v10 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v9 + 56)
                                  + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(v9 + 64)
                                                                                 + 2
                                                                                 * *(unsigned __int16 *)(2 * (*(__int16 *)(a1 + 86) + 44) + a1)))
                                                     & *(_WORD *)(v9 + 18))));
  result = sub_368360(a1, v10);
  if ( result == 0 )
  {
    result = sub_36841C(a1);
LABEL_21:
    v11 = 0;
    goto LABEL_22;
  }
  v11 = 0;
LABEL_22:
  *a2 = v11;
  return result;
}


//======================================================================
// sub_36AD14
// address: 0x0036AD14   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_36AD14(int a1, int a2, int a3, int a4)
{
  int v5; // r5
  int result; // r0
  int v7; // r3
  int v8; // [sp+Ch] [bp-4h] BYREF

  v8 = a4;
  v5 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 27) == 0 )
  {
    if ( v5 != 0 )
    {
      if ( *(unsigned __int8 *)(v5 + 83) > 2u )
      {
        result = sub_36AAC8(*(_DWORD *)a1);
        if ( result != 0 )
          return result;
      }
      if ( *(_BYTE *)(v5 + 83) != 1 || *(_DWORD *)(v5 + 76) != 0 )
      {
        *(_DWORD *)(a1 + 68) = 0;
        *(_BYTE *)(a1 + 25) = 1;
        return 0;
      }
    }
    return 0;
  }
  result = sub_36A6D8(v5, nullptr, *(_DWORD *)(a1 + 48), *(_DWORD *)(a1 + 52), 0, &v8);
  if ( result == 0 )
  {
    v7 = *(_DWORD *)(a1 + 52);
    *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 60) = v7;
    if ( v8 != 0 )
    {
      return sub_35FA58(64075);
    }
    else
    {
      *(_BYTE *)(a1 + 26) = 1;
      *(_BYTE *)(a1 + 27) = 0;
      *(_DWORD *)(a1 + 68) = 0;
    }
  }
  return result;
}


//======================================================================
// sub_36AD94
// address: 0x0036AD94   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_36AD94(int a1, unsigned int a2, size_t a3, char *a4)
{
  unsigned int v5; // r3
  int result; // r0

  v5 = *(unsigned __int8 *)(a1 + 83);
  result = 4;
  if ( v5 != 0 )
  {
    if ( v5 <= 2 )
      return sub_36A4C8(a1, a2, a3, a4, 0);
    result = sub_36AAC8(a1);
    if ( result == 0 )
      return sub_36A4C8(a1, a2, a3, a4, 0);
  }
  return result;
}


//======================================================================
// sub_36ADCC
// address: 0x0036ADCC   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_36ADCC(int a1, unsigned int a2, size_t a3, int a4, int a5)
{
  int v6; // r5
  __int16 v8; // r3
  char *v9; // r3
  int v10; // r0
  int v13; // [sp+10h] [bp-14h]
  unsigned int v15; // [sp+1Ch] [bp-8h] BYREF

  v6 = 0;
  v15 = 0;
  v13 = sub_352490(a1, &v15);
  if ( a2 + a3 <= v15 )
  {
    sub_355700((_DWORD *)a5);
    *(_DWORD *)(a5 + 4) = v13 + a2;
    v8 = 4112;
LABEL_9:
    *(_WORD *)(a5 + 28) = v8;
    *(_DWORD *)(a5 + 24) = a3;
    return v6;
  }
  v6 = sub_359644((int *)a5, a3 + 2, 0);
  if ( v6 == 0 )
  {
    v9 = *(char **)(a5 + 4);
    if ( a4 != 0 )
      v10 = sub_36A4C8(a1, a2, a3, v9, 0);
    else
      v10 = sub_36AD94(a1, a2, a3, v9);
    v6 = v10;
    if ( v10 != 0 )
    {
      sub_355700((_DWORD *)a5);
      return v6;
    }
    *(_BYTE *)(*(_DWORD *)(a5 + 4) + a3) = 0;
    *(_BYTE *)(*(_DWORD *)(a5 + 4) + a3 + 1) = 0;
    v8 = 528;
    goto LABEL_9;
  }
  return v6;
}


//======================================================================
// sub_36AE54
// address: 0x0036AE54   size: 0xE4 (228 bytes)
//======================================================================
int __fastcall sub_36AE54(int a1, int a2, int a3)
{
  int v4; // r5
  int i; // r6
  int v6; // r0
  int v7; // r3
  int v8; // r5
  unsigned int v9; // r7
  char *v10; // r6
  int v11; // r5
  int j; // r6

  while ( a1 != 0 )
  {
    if ( a1 == a3 || a2 != 0 && *(_DWORD *)(a1 + 24) != a2 )
      goto LABEL_22;
    if ( *(_BYTE *)(a1 + 83) != 1 )
    {
      v4 = a1;
      for ( i = 0; ; ++i )
      {
        v4 += 4;
        if ( i > *(__int16 *)(a1 + 86) )
          break;
        sub_368120(*(_DWORD *)(v4 + 124));
        *(_DWORD *)(v4 + 124) = 0;
      }
      *(_WORD *)(a1 + 86) = -1;
      goto LABEL_22;
    }
    v6 = sub_352C20(a1, (_DWORD *)(a1 + 64));
    v7 = *(_DWORD *)(a1 + 128);
    v8 = v6;
    v9 = *(unsigned __int8 *)(v7 + 2);
    if ( *(_BYTE *)(v7 + 2) != 0 )
    {
      if ( v6 != 0 )
        goto LABEL_17;
    }
    else
    {
      v8 = 7;
      v10 = (char *)sub_351664(*(_DWORD *)(a1 + 64));
      if ( v10 == nullptr )
        goto LABEL_17;
      v8 = sub_36A4C8(a1, v9, *(_DWORD *)(a1 + 64), v10, v9);
      if ( v8 != 0 )
      {
        sqlite3_free(v10);
        goto LABEL_17;
      }
      *(_DWORD *)(a1 + 72) = v10;
    }
    v11 = a1;
    for ( j = 0; ; ++j )
    {
      v11 += 4;
      if ( j > *(__int16 *)(a1 + 86) )
        break;
      sub_368120(*(_DWORD *)(v11 + 124));
      *(_DWORD *)(v11 + 124) = 0;
    }
    *(_WORD *)(a1 + 86) = -1;
    v8 = 0;
    *(_BYTE *)(a1 + 83) = 3;
LABEL_17:
    sqlite3_free(*(_DWORD *)(a1 + 20));
    *(_DWORD *)(a1 + 20) = 0;
    if ( v8 != 0 )
      return v8;
LABEL_22:
    a1 = *(_DWORD *)(a1 + 8);
  }
  return 0;
}


//======================================================================
// sub_36AF38
// address: 0x0036AF38   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_36AF38(int a1, unsigned int a2, size_t a3, char *a4)
{
  _BYTE *v4; // r5
  int result; // r0

  v4 = (_BYTE *)(a1 + 83);
  if ( *(unsigned __int8 *)(a1 + 83) <= 2u || (result = sub_36AAC8(a1)) == 0 )
  {
    result = 4;
    if ( *v4 == 1 )
    {
      sub_36AE54(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 8), *(_DWORD *)(a1 + 24), a1);
      result = 8;
      if ( *(_BYTE *)(a1 + 80) != 0 )
        return sub_36A4C8(a1, a2, a3, a4, 1);
    }
  }
  return result;
}


//======================================================================
// sub_36AF8C
// address: 0x0036AF8C   size: 0x384 (900 bytes)
//======================================================================
int __fastcall sub_36AF8C(int a1, char *a2, __int64 a3, char *a4, int a5, int a6, char a7, int a8)
{
  int v9; // r7
  int v10; // r3
  int *v11; // r6
  int result; // r0
  int v13; // r3
  int v14; // r7
  int v15; // r6
  int v16; // r5
  unsigned int v17; // r1
  int v18; // r0
  int v19; // r5
  int v20; // r0
  unsigned int v21; // r5
  int v22; // r0
  int v23; // r3
  unsigned __int8 *v24; // r3
  signed int v25; // r5
  _WORD *v26; // r3
  int v27; // r5
  unsigned __int8 *v28; // r6
  int v29; // r5
  int v31; // [sp+10h] [bp-64h]
  int v32; // [sp+10h] [bp-64h]
  size_t v33; // [sp+10h] [bp-64h]
  unsigned __int8 *v34; // [sp+18h] [bp-5Ch]
  int v35; // [sp+1Ch] [bp-58h]
  unsigned __int8 *v37; // [sp+24h] [bp-50h]
  unsigned __int8 *v38; // [sp+28h] [bp-4Ch]
  unsigned int v39; // [sp+28h] [bp-4Ch]
  int v40; // [sp+2Ch] [bp-48h]
  int v41; // [sp+30h] [bp-44h]
  int v42; // [sp+34h] [bp-40h]
  int v43; // [sp+3Ch] [bp-38h] BYREF
  int v44; // [sp+40h] [bp-34h] BYREF
  int v45; // [sp+44h] [bp-30h] BYREF
  int v46; // [sp+48h] [bp-2Ch] BYREF
  unsigned int v47; // [sp+4Ch] [bp-28h] BYREF
  _WORD v48[18]; // [sp+50h] [bp-24h] BYREF

  v9 = *(_DWORD *)a1;
  v10 = *(unsigned __int8 *)(a1 + 83);
  v44 = a8;
  v11 = *(int **)(v9 + 4);
  if ( v10 == 4 )
    return *(_DWORD *)(a1 + 76);
  result = sub_36AE54(v11[2], *(_DWORD *)(a1 + 24), a1);
  v43 = result;
  if ( result == 0 )
  {
    if ( *(_DWORD *)(a1 + 16) == 0 )
    {
      v13 = *(_DWORD *)(v9 + 4);
      while ( 1 )
      {
        v13 = *(_DWORD *)(v13 + 8);
        if ( v13 == 0 )
          break;
        if ( *(_BYTE *)(v13 + 84) != 0 && *(_QWORD *)(v13 + 32) == a3 )
          *(_BYTE *)(v13 + 83) = 0;
      }
      if ( *(_BYTE *)(a1 + 82) != 0 && a3 > 0 && *(_QWORD *)(a1 + 32) == a3 - 1 )
        v44 = -1;
    }
    if ( v44 != 0
      || (result = sub_36AA28(a1, (unsigned __int8 *)a2, a3, HIDWORD(a3), a7, &v44), v43 = result, result == 0) )
    {
      v14 = *(_DWORD *)(4 * (*(__int16 *)(a1 + 86) + 32) + a1);
      sub_354018(v11);
      result = 7;
      v34 = (unsigned __int8 *)v11[20];
      if ( v34 != nullptr )
      {
        v46 = 0;
        v47 = 0;
        v15 = *(_DWORD *)(v14 + 52);
        v16 = 4 * (*(_BYTE *)(v14 + 3) == 0);
        if ( *(_BYTE *)(v14 + 4) != 0 )
        {
          v17 = a5 + a6;
          if ( (unsigned int)(a5 + a6) > 0x7F )
          {
            v18 = (unsigned __int8)sub_352338(&v34[v16], v17);
          }
          else
          {
            v18 = 1;
            v34[4 * (*(_BYTE *)(v14 + 3) == 0)] = v17;
          }
          v16 += v18;
        }
        else
        {
          a6 = *(unsigned __int8 *)(v14 + 4);
          a5 = a6;
        }
        v19 = v16 + sub_352284(&v34[v16], a3);
        sub_3523AC(v14, v34, (int)v48);
        v35 = a5 + a6;
        if ( *(_BYTE *)(v14 + 2) != 0 )
        {
          v42 = 0;
          a2 = a4;
        }
        else
        {
          if ( SHIDWORD(a3) > 0 || HIDWORD(a3) == 0 && (int)a3 < 0 || a2 == nullptr )
          {
            v20 = sub_35FA58(56351);
            v41 = 0;
            goto LABEL_58;
          }
          v35 += a3;
          v42 = a5;
          a5 = a3;
        }
        v41 = v48[13];
        v37 = &v34[v48[12]];
        v31 = v48[11];
        v38 = &v34[v19];
        v40 = 0;
        while ( 1 )
        {
          if ( v35 <= 0 )
          {
            sub_368120(v40);
            v20 = 0;
            goto LABEL_58;
          }
          if ( v31 == 0 )
          {
            v32 = v47;
            if ( *(_BYTE *)(v15 + 17) != 0 )
            {
              v39 = dword_471740;
              do
              {
                do
                  v21 = ++v47;
                while ( sub_34E284(v15, v47) == v21 );
              }
              while ( v21 == v39 / *(_DWORD *)(v15 + 32) + 1 );
            }
            v22 = sub_368740(v15, &v46, &v47, v47, 0);
            v23 = *(unsigned __int8 *)(v15 + 17);
            v45 = v22;
            if ( v23 != 0 && v22 == 0 )
            {
              sub_368C08(v15, v47, 4 - (v32 == 0), v32, &v45);
              if ( v45 != 0 )
                sub_368120(v46);
            }
            if ( v45 != 0 )
            {
              sub_368120(v40);
              v20 = v45;
LABEL_58:
              v43 = v20;
              if ( v20 == 0 )
              {
                v26 = (_WORD *)(a1 + 2 * *(__int16 *)(a1 + 86) + 88);
                v27 = (unsigned __int16)*v26;
                if ( v44 != 0 )
                {
                  if ( v44 < 0 && *(_WORD *)(v14 + 16) != 0 )
                  {
                    v27 = (unsigned __int16)(v27 + 1);
                    *v26 = v27;
                  }
LABEL_68:
                  sub_368CDC((unsigned __int16 *)v14, v27, v34, v41, nullptr, 0, &v43);
                  v29 = v43;
                  *(_WORD *)(a1 + 58) = 0;
                  if ( v29 == 0 && *(_BYTE *)(v14 + 1) != 0 )
                  {
                    *(_BYTE *)(a1 + 82) = 0;
                    v43 = sub_3693CC();
                    *(_BYTE *)(*(_DWORD *)(4 * (*(__int16 *)(a1 + 86) + 32) + a1) + 1) = 0;
                    *(_BYTE *)(a1 + 83) = 0;
                  }
                }
                else
                {
                  v43 = sub_367BA8(*(_DWORD *)(v14 + 68));
                  if ( v43 == 0 )
                  {
                    v28 = (unsigned __int8 *)(*(_DWORD *)(v14 + 56)
                                            + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(v14 + 64)
                                                                                           + 2 * v27))
                                                               & *(_WORD *)(v14 + 18)));
                    if ( *(_BYTE *)(v14 + 3) == 0 )
                      *(_DWORD *)v34 = *(_DWORD *)(*(_DWORD *)(v14 + 56)
                                                 + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(v14 + 64)
                                                                                                + 2 * v27))
                                                                    & *(_WORD *)(v14 + 18)));
                    v33 = sub_3524C6(v14, (int)v28);
                    v43 = sub_3691EC(v14, v28);
                    sub_35FC88((unsigned __int8 *)v14, v27, v33, &v43);
                    if ( v43 == 0 )
                      goto LABEL_68;
                  }
                }
              }
              return v43;
            }
            sub_34D8F0(v37, v47);
            sub_368120(v40);
            v24 = *(unsigned __int8 **)(v46 + 56);
            v40 = v46;
            *v24 = 0;
            v24[1] = 0;
            v24[2] = 0;
            v24[3] = 0;
            v37 = v24;
            v31 = *(_DWORD *)(v15 + 36) - 4;
            v38 = (unsigned __int8 *)(*(_DWORD *)(v46 + 56) + 4);
          }
          v25 = v31;
          if ( v31 > v35 )
            v25 = v35;
          if ( a5 <= 0 )
          {
            j_memset(v38, 0, v25);
          }
          else
          {
            if ( v25 > a5 )
              v25 = a5;
            j_memcpy(v38, a2, v25);
          }
          v35 -= v25;
          v38 += v25;
          a5 -= v25;
          v31 -= v25;
          if ( a5 != 0 )
          {
            a2 += v25;
          }
          else
          {
            a5 = v42;
            a2 = a4;
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_36B318
// address: 0x0036B318   size: 0x1D4 (468 bytes)
//======================================================================
int __fastcall sub_36B318(int a1)
{
  int v1; // r6
  int v3; // r5
  int result; // r0
  int v5; // r3
  int v6; // r7
  int v7; // r1
  int v8; // r0
  int v9; // r3
  size_t v10; // r0
  int v11; // r6
  __int16 *v12; // r5
  int v13; // r3
  int v14; // [sp+18h] [bp-24h]
  int v15; // [sp+1Ch] [bp-20h]
  int v16; // [sp+1Ch] [bp-20h]
  int *v17; // [sp+20h] [bp-1Ch]
  unsigned __int8 *v18; // [sp+20h] [bp-1Ch]
  unsigned int v19; // [sp+24h] [bp-18h]
  size_t v20; // [sp+28h] [bp-14h]
  int v21; // [sp+28h] [bp-14h]
  int v22; // [sp+2Ch] [bp-10h]
  int v23; // [sp+2Ch] [bp-10h]
  int v24; // [sp+30h] [bp-Ch] BYREF
  int v25; // [sp+34h] [bp-8h] BYREF

  v1 = *(_DWORD *)a1;
  v17 = *(int **)(*(_DWORD *)a1 + 4);
  v14 = *(__int16 *)(a1 + 86);
  v19 = *(unsigned __int16 *)(2 * (v14 + 44) + a1);
  v3 = *(_DWORD *)(4 * (v14 + 32) + a1);
  result = 1;
  if ( *(unsigned __int16 *)(v3 + 16) > v19 && *(_BYTE *)(a1 + 83) == 1 )
  {
    v15 = *(_DWORD *)(v3 + 56);
    v5 = *(_DWORD *)(v3 + 64);
    v20 = *(unsigned __int16 *)(v3 + 18);
    v6 = *(unsigned __int8 *)(v5 + 2 * v19 + 1);
    v22 = *(unsigned __int8 *)(v5 + 2 * v19);
    if ( *(_BYTE *)(v3 + 3) != 0 || (v25 = 0, result = sub_36AC18(a1, &v25), v24 = result, result == 0) )
    {
      result = sub_36AE54(v17[2], *(_DWORD *)(a1 + 24), a1);
      v24 = result;
      if ( result == 0 )
      {
        if ( *(_DWORD *)(a1 + 16) == 0 )
        {
          v7 = *(_DWORD *)(a1 + 32);
          v8 = *(_DWORD *)(a1 + 36);
          v9 = *(_DWORD *)(v1 + 4);
          while ( 1 )
          {
            v9 = *(_DWORD *)(v9 + 8);
            if ( v9 == 0 )
              break;
            if ( *(_BYTE *)(v9 + 84) != 0 && *(_DWORD *)(v9 + 32) == v7 && *(_DWORD *)(v9 + 36) == v8 )
              *(_BYTE *)(v9 + 83) = 0;
          }
        }
        result = sub_367BA8(*(_DWORD *)(v3 + 68));
        v24 = result;
        if ( result == 0 )
        {
          v24 = sub_3691EC(v3, (unsigned __int8 *)(v15 + ((v6 | (v22 << 8)) & v20)));
          v10 = sub_3524C6(v3, v15 + ((v6 | (v22 << 8)) & v20));
          sub_35FC88((unsigned __int8 *)v3, v19, v10, &v24);
          result = v24;
          if ( v24 == 0 )
          {
            if ( *(_BYTE *)(v3 + 3) != 0 )
              goto LABEL_17;
            v11 = *(_DWORD *)(4 * (*(__int16 *)(a1 + 86) + 32) + a1);
            v23 = *(_DWORD *)(*(_DWORD *)(4 * (v14 + 33) + a1) + 72);
            v16 = *(_DWORD *)(v11 + 56)
                + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*(_DWORD *)(v11 + 64)
                                                               + 2 * (*(unsigned __int16 *)(v11 + 16) - 1)))
                                   & *(_WORD *)(v11 + 18));
            v21 = sub_3524C6(v11, v16);
            sub_354018(v17);
            v18 = (unsigned __int8 *)v17[20];
            v24 = sub_367BA8(*(_DWORD *)(v11 + 68));
            sub_368CDC((unsigned __int16 *)v3, v19, (unsigned __int8 *)(v16 - 4), v21 + 4, v18, v23, &v24);
            sub_35FC88((unsigned __int8 *)v11, *(unsigned __int16 *)(v11 + 16) - 1, v21, &v24);
            result = v24;
            if ( v24 == 0 )
            {
LABEL_17:
              v24 = sub_3693CC();
              if ( v24 == 0 )
              {
                v12 = (__int16 *)(a1 + 86);
                if ( *(__int16 *)(a1 + 86) > v14 )
                {
                  while ( 1 )
                  {
                    v13 = *v12;
                    if ( v13 <= v14 )
                      break;
                    --*v12;
                    sub_368120(*(_DWORD *)(4 * (v13 + 32) + a1));
                  }
                  v24 = sub_3693CC();
                }
              }
              if ( v24 == 0 )
                sub_36846C(a1);
              return v24;
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_36B4EC
// address: 0x0036B4EC   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_36B4EC(int a1, unsigned int a2, _DWORD *a3)
{
  int *v3; // r7
  int v6; // r4
  int i; // r2

  v3 = *(int **)(a1 + 4);
  sub_3574C2(a1);
  v6 = sub_36AE54(v3[2], a2, 0);
  if ( v6 == 0 )
  {
    for ( i = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 8); i != 0; i = *(_DWORD *)(i + 8) )
    {
      if ( *(_BYTE *)(i + 84) != 0 )
        *(_BYTE *)(i + 83) = 0;
    }
    v6 = sub_3692E0(v3, a2, 0, a3);
  }
  sub_35655E(a1);
  return v6;
}


//======================================================================
// sub_36B53A
// address: 0x0036B53A   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_36B53A(__int64 a1, int a2)
{
  int v2; // r5
  __int64 v3; // r6
  int v4; // r4
  int v5; // r0
  int v6; // r7
  int v7; // r5
  unsigned int v8; // r0
  _DWORD v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[0] = HIDWORD(a1);
  v10[1] = a2;
  v2 = 0;
  v3 = a1;
  v4 = *(_DWORD *)(a1 + 4);
  sub_3574C2(a1);
  if ( HIDWORD(v3) == 0 )
  {
    v5 = sub_36AE54(*(_DWORD *)(v4 + 8), 0, 0);
    v2 = v5;
    if ( v5 == 0 )
      goto LABEL_5;
    HIDWORD(v3) = v5;
  }
  sub_36825C(v3);
LABEL_5:
  if ( *(_BYTE *)(v3 + 8) == 2 )
  {
    v6 = sub_36772C(*(_DWORD *)v4);
    if ( v6 == 0 )
      v6 = v2;
    if ( sub_367150((int *)v4, 1u, v10, 0) == 0 )
    {
      v7 = v10[0];
      v8 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v10[0] + 56) + 28));
      if ( v8 == 0 )
        v8 = *(_DWORD *)(*(_DWORD *)v4 + 24);
      *(_DWORD *)(v4 + 44) = v8;
      sub_368120(v7);
    }
    *(_BYTE *)(v4 + 20) = 1;
    sub_351F88(*(_DWORD *)(v4 + 60));
    *(_DWORD *)(v4 + 60) = 0;
    v2 = v6;
  }
  sub_368146(v3);
  sub_35655E(v3);
  return v2;
}


//======================================================================
// sub_36B5C0
// address: 0x0036B5C0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_36B5C0(int a1, int a2)
{
  int v4; // r5
  int i; // r6
  int v6; // r2
  __int64 v7; // r0
  int result; // r0
  int (__fastcall *v9)(_DWORD); // r3

  sub_34CB1C();
  sub_35752E(a1);
  v4 = 0;
  for ( i = 0; ; ++i )
  {
    v6 = *(_DWORD *)(a1 + 20);
    if ( i >= v6 )
      break;
    LODWORD(v7) = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 16 * i + 4);
    if ( (_DWORD)v7 != 0 )
    {
      if ( *(_BYTE *)(v7 + 8) == 2 )
        v4 = 1;
      HIDWORD(v7) = a2;
      sub_36B53A(v7, v6);
    }
  }
  sub_354E6E((unsigned int)a1 | 0x4400000000LL);
  sub_34CB30();
  if ( (*(_DWORD *)(a1 + 24) & 2) != 0 && *(_BYTE *)(a1 + 137) == 0 )
  {
    sub_34E530(a1);
    sub_3577F4((_DWORD *)a1);
  }
  sub_35657E(a1);
  result = 504;
  *(_DWORD *)(a1 + 496) = 0;
  *(_DWORD *)(a1 + 500) = 0;
  *(_DWORD *)(a1 + 504) = 0;
  *(_DWORD *)(a1 + 508) = 0;
  *(_DWORD *)(a1 + 24) &= ~0x1000000u;
  v9 = *(int (__fastcall **)(_DWORD))(a1 + 192);
  if ( v9 != nullptr && (v4 != 0 || *(_BYTE *)(a1 + 62) == 0) )
    return v9(*(_DWORD *)(a1 + 188));
  return result;
}


//======================================================================
// sub_36B66C
// address: 0x0036B66C   size: 0x284 (644 bytes)
//======================================================================
int __fastcall sub_36B66C(int *a1, int a2, int a3, unsigned int a4, unsigned int a5, int a6)
{
  int v7; // r5
  int v8; // r4
  int v9; // r6
  int v10; // r0
  int v11; // r6
  int v12; // r4
  int v13; // r0
  int v14; // r0
  unsigned int v15; // r1
  int v16; // r0
  _BYTE *v17; // r4
  unsigned int *v18; // r4
  int v19; // r0
  int v20; // r1
  unsigned __int8 *v21; // r5
  unsigned int *v22; // r5
  unsigned int v24; // [sp+Ch] [bp-48h]
  int v25; // [sp+Ch] [bp-48h]
  int v26; // [sp+10h] [bp-44h]
  int v27; // [sp+10h] [bp-44h]
  int v29; // [sp+18h] [bp-3Ch]
  char v32; // [sp+24h] [bp-30h]
  _BYTE *v33; // [sp+28h] [bp-2Ch] BYREF
  int v34; // [sp+2Ch] [bp-28h] BYREF
  int v35[9]; // [sp+30h] [bp-24h] BYREF

  v7 = *a1;
  v29 = *(_DWORD *)(a2 + 72);
  v8 = *(_DWORD *)(a2 + 68);
  if ( (*(_BYTE *)(*a1 + 14) == 0 || (v9 = sub_367BA8(*(_DWORD *)(a2 + 68))) == 0)
    && ((*(_WORD *)(v8 + 24) & 2) == 0 || sub_35295C(v8) == 0 || (v9 = sub_357388(v8)) == 0) )
  {
    if ( (*(_WORD *)(v8 + 24) & 4) != 0 )
    {
      v24 = 0;
      if ( a6 == 0 )
        v24 = *(_DWORD *)(v8 + 20);
    }
    else
    {
      v24 = 0;
    }
    *(_WORD *)(v8 + 24) &= ~4u;
    v10 = sub_353F9C();
    v11 = v10;
    if ( v10 != 0 )
    {
      *(_WORD *)(v8 + 24) |= *(_WORD *)(v10 + 24) & 4;
      if ( *(_BYTE *)(v7 + 14) != 0 )
        ((void (*)(void))sub_352A48)();
      else
        sub_34DCE4(v10);
    }
    v26 = *(_DWORD *)(v8 + 20);
    sub_352A48(v8, a5);
    sub_34DD1C(v8);
    if ( *(_BYTE *)(v7 + 14) != 0 )
    {
      sub_352A48(v11, v26);
      sub_3677DA(v11);
    }
    v9 = 0;
    if ( v24 != 0 )
    {
      v12 = sub_366EBC(v7, v24, v35, 0);
      if ( v12 != 0 )
      {
        if ( v24 <= *(_DWORD *)(v7 + 28) )
          sub_3505F4(*(_DWORD **)(v7 + 56), v24, *(void **)(v7 + 200));
        v9 = v12;
      }
      else
      {
        v13 = v35[0];
        *(_WORD *)(v35[0] + 24) |= 4u;
        sub_34DD1C(v13);
        sub_3677DA(v35[0]);
      }
    }
  }
  v34 = v9;
  if ( v9 == 0 )
  {
    *(_DWORD *)(a2 + 72) = a5;
    if ( (a3 & 0xFFFFFFFB) == 1 )
    {
      v14 = sub_368F14(a2);
      v34 = v14;
      if ( v14 != 0 )
        return v14;
      if ( a3 == 1 )
        return v34;
LABEL_33:
      v14 = sub_367150(a1, a4, &v33, 0);
      v34 = v14;
      if ( v14 != 0 )
        return v14;
      v16 = sub_367BA8(*((_DWORD *)v33 + 17));
      v17 = v33;
      v34 = v16;
      if ( v16 != 0 )
      {
        sub_368120((int)v33);
      }
      else
      {
        if ( a3 == 4 )
        {
          v18 = *((unsigned int **)v33 + 14);
          if ( sub_34D8D8(v18) == v29 )
          {
            sub_34D8F0(v18, a5);
          }
          else
          {
            v19 = 53692;
LABEL_50:
            v9 = sub_35FA58(v19);
          }
        }
        else
        {
          v32 = *v33;
          sub_35FC54(v33);
          v25 = 0;
          v27 = *((unsigned __int16 *)v17 + 8);
          while ( v25 < v27 )
          {
            v20 = *((_DWORD *)v17 + 14);
            v21 = (unsigned __int8 *)(v20
                                    + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*((_DWORD *)v17 + 16) + 2 * v25))
                                                       & *((_WORD *)v17 + 9)));
            if ( a3 == 3 )
            {
              sub_3523AC((int)v17, v21, (int)v35);
              if ( LOWORD(v35[6]) != 0
                && (unsigned int)&v21[LOWORD(v35[6]) + 3] <= *((_DWORD *)v17 + 14)
                                                           + (unsigned int)*((unsigned __int16 *)v17 + 9) )
              {
                v22 = (unsigned int *)&v21[LOWORD(v35[6])];
                if ( v29 == sub_34D8D8(v22) )
                  goto LABEL_55;
              }
            }
            else if ( sub_34D8D8((unsigned int *)(v20
                                                + (unsigned __int16)(_byteswap_ushort(*(_WORD *)(*((_DWORD *)v17 + 16)
                                                                                               + 2 * v25))
                                                                   & *((_WORD *)v17 + 9)))) == v29 )
            {
              sub_34D8F0(v21, a5);
              break;
            }
            ++v25;
          }
          if ( v25 == v27 )
          {
            if ( a3 != 5
              || (v22 = (unsigned int *)(*((_DWORD *)v17 + 14) + (unsigned __int8)v17[5] + 8), sub_34D8D8(v22) != v29) )
            {
              v19 = 53726;
              goto LABEL_50;
            }
LABEL_55:
            sub_34D8F0(v22, a5);
          }
          *v17 = v32;
        }
        v34 = v9;
        sub_368120((int)v33);
        if ( v34 == 0 )
          sub_368C08((int)a1, a5, a3, a4, &v34);
      }
      return v34;
    }
    v15 = sub_34D8D8(*(unsigned int **)(a2 + 56));
    if ( v15 == 0 )
      goto LABEL_33;
    sub_368C08((int)a1, v15, 4, a5, &v34);
    if ( v34 == 0 )
      goto LABEL_33;
    return v34;
  }
  return v9;
}


//======================================================================
// sub_36B8F8
// address: 0x0036B8F8   size: 0x11E (286 bytes)
//======================================================================
int __fastcall sub_36B8F8(int a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // r5
  unsigned int v7; // r3
  int result; // r0
  char v9; // r3
  int v10; // r7
  unsigned int v11; // r6
  unsigned int v12; // [sp+8h] [bp-2Ch]
  char v13; // [sp+Ch] [bp-28h]
  int v14; // [sp+10h] [bp-24h]
  unsigned __int8 v16; // [sp+1Fh] [bp-15h] BYREF
  unsigned int v17; // [sp+20h] [bp-14h] BYREF
  unsigned int v18; // [sp+24h] [bp-10h] BYREF
  int v19; // [sp+28h] [bp-Ch] BYREF
  int v20[2]; // [sp+2Ch] [bp-8h] BYREF

  v4 = a3;
  if ( sub_34E284(a1, a3) != a3 && v4 != (unsigned int)dword_471740 / *(_DWORD *)(a1 + 32) + 1 )
  {
    v7 = sub_34D8D8((unsigned int *)(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 56) + 36));
    result = 101;
    if ( v7 == 0 )
      return result;
    result = sub_368598((int *)a1, v4, &v16, &v17);
    if ( result != 0 )
      return result;
    if ( v16 == 1 )
      return sub_35FA58(53860);
    if ( v16 == 2 )
    {
      if ( a4 == 0 )
      {
        result = sub_368740(a1, v20, (unsigned int *)&v19, v4, 1);
        if ( result != 0 )
          return result;
        sub_368120(v20[0]);
        goto LABEL_22;
      }
      return 0;
    }
    result = sub_367150((int *)a1, v4, &v19, 0);
    v9 = result;
    if ( result != 0 )
      return result;
    if ( a4 != 0 )
    {
      v12 = 0;
    }
    else
    {
      v9 = 2;
      v12 = a2;
    }
    v13 = v9;
    do
    {
      v14 = sub_368740(a1, v20, &v18, v12, v13);
      if ( v14 != 0 )
      {
        sub_368120(v19);
        return v14;
      }
      sub_368120(v20[0]);
    }
    while ( a4 != 0 && v18 > a2 );
    v10 = sub_36B66C((int *)a1, v19, v16, v17, v18, a4);
    sub_368120(v19);
    result = v10;
    if ( v10 != 0 )
      return result;
  }
  if ( a4 == 0 )
  {
LABEL_22:
    v11 = (unsigned int)dword_471740 / *(_DWORD *)(a1 + 32) + 1;
    do
    {
      do
        --v4;
      while ( v4 == v11 );
    }
    while ( sub_34E284(a1, v4) == v4 );
    *(_BYTE *)(a1 + 19) = 1;
    *(_DWORD *)(a1 + 44) = v4;
  }
  return 0;
}


//======================================================================
// sub_36BA24
// address: 0x0036BA24   size: 0x17C (380 bytes)
//======================================================================
int __fastcall sub_36BA24(int a1, _DWORD *a2, char a3)
{
  int v3; // r4
  unsigned int v6; // r5
  int v7; // r3
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r1
  unsigned int v13; // [sp+8h] [bp-2Ch]
  unsigned __int8 v15; // [sp+17h] [bp-1Dh] BYREF
  int v16; // [sp+18h] [bp-1Ch] BYREF
  unsigned int v17; // [sp+1Ch] [bp-18h] BYREF
  int v18; // [sp+20h] [bp-14h] BYREF
  unsigned int v19; // [sp+24h] [bp-10h] BYREF
  int v20; // [sp+28h] [bp-Ch] BYREF
  unsigned int v21; // [sp+2Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 4);
  if ( *(_BYTE *)(v3 + 17) == 0 )
  {
    v10 = sub_368740(v3, &v16, &v17, 1u, 0);
    v18 = v10;
    v7 = v10;
    if ( v10 != 0 )
      return v7;
    goto LABEL_24;
  }
  sub_356342(*(_DWORD *)(v3 + 8));
  sub_357930(a1, 4, &v17);
  ++v17;
  v13 = dword_471740;
  while ( 1 )
  {
    v6 = v17;
    if ( v6 != sub_34E284(v3, v17) && v6 != v13 / *(_DWORD *)(v3 + 32) + 1 )
      break;
    v17 = v6 + 1;
  }
  v18 = sub_368740(v3, &v20, &v19, v6, 1);
  v7 = v18;
  if ( v18 != 0 )
    return v7;
  if ( v19 == v17 )
  {
    v16 = v20;
  }
  else
  {
    v8 = *(_DWORD *)(v3 + 8);
    v15 = 0;
    v21 = 0;
    v18 = sub_36AE54(v8, 0, 0);
    sub_368120(v20);
    v7 = v18;
    if ( v18 != 0 )
      return v7;
    v18 = sub_367150((int *)v3, v17, &v16, 0);
    v7 = v18;
    if ( v18 != 0 )
      return v7;
    v18 = sub_368598((int *)v3, v17, &v15, &v21);
    if ( (unsigned int)v15 - 1 <= 1 )
      v18 = sub_35FA58(58092);
    v9 = v16;
    if ( v18 != 0 )
    {
LABEL_22:
      sub_368120(v9);
      return v18;
    }
    v18 = sub_36B66C((int *)v3, v16, v15, v21, v19, 0);
    sub_368120(v16);
    v7 = v18;
    if ( v18 != 0 )
      return v7;
    v18 = sub_367150((int *)v3, v17, &v16, 0);
    v7 = v18;
    if ( v18 != 0 )
      return v7;
    v18 = sub_367BA8(*(_DWORD *)(v16 + 68));
    if ( v18 != 0 )
    {
LABEL_21:
      v9 = v16;
      goto LABEL_22;
    }
  }
  sub_368C08(v3, v17, 1, 0, &v18);
  if ( v18 != 0 )
    goto LABEL_21;
  v18 = sub_367E76(a1, 4, v17);
  if ( v18 != 0 )
    goto LABEL_21;
LABEL_24:
  v11 = 10;
  if ( (a3 & 1) != 0 )
    v11 = 13;
  sub_35FACC(v16, v11);
  sub_367EB6(*(_DWORD *)(v16 + 68));
  v7 = 0;
  *a2 = v17;
  return v7;
}


//======================================================================
// sub_36BBA8
// address: 0x0036BBA8   size: 0x39C (924 bytes)
//======================================================================
int __fastcall sub_36BBA8(int a1, _DWORD *a2)
{
  int v3; // r5
  int v4; // r6
  unsigned int v5; // r0
  unsigned int v6; // r7
  int v7; // r0
  unsigned int *v8; // r6
  __int64 v9; // r2
  _BOOL4 v10; // r7
  unsigned int v11; // r7
  _DWORD *v12; // r3
  int v13; // r2
  int v15; // [sp+8h] [bp-8Ch]
  int v16; // [sp+Ch] [bp-88h]
  unsigned int v17; // [sp+10h] [bp-84h]
  int *v18; // [sp+10h] [bp-84h]
  signed int v19; // [sp+14h] [bp-80h]
  int v20; // [sp+18h] [bp-7Ch]
  int v21; // [sp+1Ch] [bp-78h]
  __int64 v22; // [sp+20h] [bp-74h]
  int v23; // [sp+28h] [bp-6Ch]
  unsigned int v24; // [sp+2Ch] [bp-68h]
  __int16 v25; // [sp+30h] [bp-64h]
  char *v27; // [sp+50h] [bp-44h]
  int v28; // [sp+5Ch] [bp-38h] BYREF
  __int64 v29; // [sp+60h] [bp-34h]
  unsigned int v30; // [sp+6Ch] [bp-28h] BYREF
  unsigned int v31; // [sp+70h] [bp-24h] BYREF
  unsigned int v32; // [sp+74h] [bp-20h] BYREF
  unsigned int v33[3]; // [sp+78h] [bp-1Ch] BYREF
  unsigned int v34; // [sp+84h] [bp-10h] BYREF
  unsigned int v35; // [sp+88h] [bp-Ch] BYREF

  v3 = sub_366C28(a1, 0, &v28);
  if ( v3 != 0 )
    return v3;
  if ( v28 == 0 )
  {
    v20 = 1;
    goto LABEL_6;
  }
  v20 = sub_35108A(a1, a2);
  if ( v20 != 0 )
  {
LABEL_6:
    if ( (*(_BYTE *)(a1 + 46) & 2) != 0 )
    {
      v3 = sub_356618(a1);
      if ( v3 == 0 )
      {
        sub_352B3A(a1);
        return 264;
      }
      return v3;
    }
    v3 = sub_352B52(a1);
    if ( v3 != 0 )
      return v3;
    *(_BYTE *)(a1 + 44) = 1;
    v3 = sub_366C28(a1, 0, &v28);
    if ( v3 != 0 )
      goto LABEL_51;
    v20 = sub_35108A(a1, a2);
    if ( v20 == 0 )
      goto LABEL_51;
    v3 = sub_352B52(a1);
    if ( v3 != 0 )
    {
LABEL_50:
      *a2 = 1;
LABEL_51:
      *(_BYTE *)(a1 + 44) = 0;
      sub_352B94(a1);
      if ( v20 != 0 )
        return v3;
      goto LABEL_52;
    }
    j_memset((void *)(a1 + 52), 0, 0x30u);
    v3 = sub_34CA72(*(_DWORD *)(a1 + 8));
    if ( v3 != 0 )
      goto LABEL_49;
    if ( v29 <= 32 )
    {
      v15 = 0;
      v23 = 0;
LABEL_44:
      *(_DWORD *)(a1 + 80) = v15;
      *(_DWORD *)(a1 + 76) = v23;
      sub_35038C(a1);
      v12 = **(_DWORD ***)(a1 + 32);
      v12[24] = 0;
      v12[25] = 0;
      v12[26] = -1;
      v12[27] = -1;
      v12[28] = -1;
      v12[29] = -1;
      v13 = *(_DWORD *)(a1 + 68);
      if ( v13 != 0 )
        v12[26] = v13;
      if ( *(_DWORD *)(a1 + 72) != 0 )
        sqlite3_log(283, (int)"recovered %d frames from WAL file %s", *(_DWORD *)(a1 + 68), *(const char **)(a1 + 100));
      goto LABEL_49;
    }
    v4 = sub_34CA3A(*(_DWORD *)(a1 + 8));
    if ( v4 == 0 )
    {
      v17 = sub_34D8D8(&v30);
      v5 = sub_34D8D8(&v32);
      v6 = v5;
      if ( (v17 & 0xFFFFFFFE) != 0x377F0682 )
        goto LABEL_40;
      v15 = (v5 - 1) & v5;
      if ( v15 != 0 )
        goto LABEL_40;
      if ( v5 - 512 > 0xFE00 )
        goto LABEL_40;
      *(_BYTE *)(a1 + 65) = v17 & 1;
      *(_DWORD *)(a1 + 36) = v5;
      *(_DWORD *)(a1 + 104) = sub_34D8D8(v33);
      *(_QWORD *)(a1 + 84) = *(_QWORD *)&v33[1];
      v18 = (int *)(a1 + 76);
      sub_34E08C(*(unsigned __int8 *)(a1 + 65) == 0, (char *)&v30, 24, nullptr, (_DWORD *)(a1 + 76));
      if ( *(_DWORD *)(a1 + 76) != sub_34D8D8(&v34) || *(_DWORD *)(a1 + 80) != sub_34D8D8(&v35) )
        goto LABEL_40;
      if ( sub_34D8D8(&v31) != 3007000 )
      {
        v4 = sub_35ECC0(47907);
LABEL_40:
        v16 = v4;
        v15 = 0;
        v23 = 0;
LABEL_41:
        if ( v16 == 0 )
          goto LABEL_44;
        v3 = v16;
LABEL_49:
        sub_352B94(a1);
        goto LABEL_50;
      }
      v19 = v6 + 24;
      v7 = sqlite3_malloc(v6 + 24);
      v8 = (unsigned int *)v7;
      if ( v7 != 0 )
      {
        v25 = v6 & 0xFF00 | HIWORD(v6);
        v27 = (char *)(v7 + 24);
        v23 = 0;
        v9 = 32;
        v21 = 0;
        while ( 1 )
        {
          v22 = v19 + v9;
          if ( v29 < v19 + v9 )
            break;
          ++v21;
          v16 = sub_34CA3A(*(_DWORD *)(a1 + 8));
          if ( v16 != 0 )
            goto LABEL_38;
          if ( j_memcmp((const void *)(a1 + 84), v8 + 2, 8u) != 0 )
            goto LABEL_38;
          v24 = sub_34D8D8(v8);
          if ( v24 == 0 )
            goto LABEL_38;
          v10 = *(unsigned __int8 *)(a1 + 65) == 0;
          sub_34E08C(v10, (char *)v8, 8, v18, v18);
          sub_34E08C(v10, v27, *(_DWORD *)(a1 + 36), v18, v18);
          if ( *(_DWORD *)(a1 + 76) != sub_34D8D8(v8 + 4) )
            goto LABEL_38;
          if ( *(_DWORD *)(a1 + 80) != sub_34D8D8(v8 + 5) )
            goto LABEL_38;
          v11 = sub_34D8D8(v8 + 1);
          v16 = sub_366D60((_DWORD *)a1, v21, v24);
          if ( v16 != 0 )
            goto LABEL_38;
          if ( v11 != 0 )
          {
            *(_DWORD *)(a1 + 72) = v11;
            *(_DWORD *)(a1 + 68) = v21;
            *(_WORD *)(a1 + 66) = v25;
            v23 = *(_DWORD *)(a1 + 76);
            v15 = *(_DWORD *)(a1 + 80);
          }
          v9 = v22;
        }
        v16 = 0;
LABEL_38:
        sqlite3_free(v8);
        goto LABEL_41;
      }
      v4 = 7;
    }
    v3 = v4;
    goto LABEL_49;
  }
LABEL_52:
  if ( *(_DWORD *)(a1 + 52) != 3007000 )
    return sub_35ECC0(48778);
  return v3;
}


//======================================================================
// sub_36BF4C
// address: 0x0036BF4C   size: 0x180 (384 bytes)
//======================================================================
int __fastcall sub_36BF4C(int a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0
  int v8; // r7
  int v9; // r0
  unsigned int v10; // r6
  int i; // r3
  unsigned int v12; // r2
  int j; // r7
  int v14; // [sp+0h] [bp-Ch]

  if ( a4 > 5 )
  {
    result = 15;
    if ( a4 > 100 )
      return result;
    sub_34CAE0(*(_DWORD *)a1);
  }
  if ( a3 != 0 )
  {
LABEL_5:
    v8 = 0;
    v14 = **(_DWORD **)(a1 + 32);
    if ( a3 == 0 )
    {
      v8 = 0;
      if ( *(_DWORD *)(v14 + 96) == *(_DWORD *)(a1 + 68) )
      {
        v8 = sub_356618(a1);
        sub_34E104(a1);
        if ( v8 == 0 )
        {
          result = j_memcmp(**(const void ***)(a1 + 32), (const void *)(a1 + 52), 0x30u);
          if ( result != 0 )
          {
            v9 = a1;
            goto LABEL_44;
          }
LABEL_45:
          *(_WORD *)(a1 + 40) = a3;
          return result;
        }
        result = v8;
        if ( v8 != 5 )
          return result;
      }
    }
    a3 = 0;
    v10 = 0;
    for ( i = 1; i != 5; ++i )
    {
      v12 = *(_DWORD *)(v14 + 4 * i + 100);
      if ( v10 <= v12 && v12 <= *(_DWORD *)(a1 + 68) )
      {
        a3 = i;
        v10 = *(_DWORD *)(v14 + 4 * i + 100);
      }
    }
    if ( (*(_BYTE *)(a1 + 46) & 2) != 0 )
    {
      if ( a3 == 0 )
      {
        if ( v8 != 5 )
          return 520;
        return -1;
      }
    }
    else if ( v10 < *(_DWORD *)(a1 + 68) || a3 == 0 )
    {
      for ( j = 1; j != 5; ++j )
      {
        result = sub_352B52(a1);
        if ( result == 0 )
        {
          v10 = *(_DWORD *)(a1 + 68);
          *(_DWORD *)(v14 + 4 * j + 100) = v10;
          sub_352B94(a1);
          a3 = j;
          goto LABEL_38;
        }
        if ( result != 5 )
          return result;
      }
      if ( a3 == 0 )
        return -1;
    }
LABEL_38:
    result = sub_356618(a1);
    if ( result != 0 )
    {
      if ( result != 5 )
        return result;
      return -1;
    }
    sub_34E104(a1);
    if ( *(_DWORD *)(v14 + 4 * a3 + 100) != v10
      || (result = j_memcmp(**(const void ***)(a1 + 32), (const void *)(a1 + 52), 0x30u)) != 0 )
    {
      v9 = a1;
      goto LABEL_44;
    }
    goto LABEL_45;
  }
  result = sub_36BBA8(a1, a2);
  if ( result == 5 )
  {
    if ( **(_DWORD **)(a1 + 32) == 0 )
      return -1;
    result = sub_356618(a1);
    if ( result == 0 )
    {
      v9 = a1;
LABEL_44:
      sub_352B3A(v9);
      return -1;
    }
    if ( result == 5 )
      return 261;
  }
  else if ( result == 0 )
  {
    goto LABEL_5;
  }
  return result;
}


//======================================================================
// sub_36C0CC
// address: 0x0036C0CC   size: 0x424 (1060 bytes)
//======================================================================
int __fastcall sub_36C0CC(int a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v4; // r2
  _DWORD *v5; // r3
  _DWORD *v6; // r1
  int v7; // r4
  int v8; // r4
  _DWORD *v9; // r6
  int v10; // r0
  int v11; // r5
  unsigned int v12; // r0
  int v13; // r6
  int v14; // r0
  __int64 v15; // r6
  int v16; // r2
  int (*v17)(void); // r3
  int v18; // r0
  int v19; // r3
  int v20; // r0
  int v21; // r6
  _DWORD *v22; // r7
  int v23; // r0
  int v24; // r7
  __int64 v26; // r6
  __int64 v27; // r0
  int v28; // [sp+20h] [bp-84h]
  unsigned int v29; // [sp+2Ch] [bp-78h]
  __int64 v30; // [sp+30h] [bp-74h]
  _DWORD *v31; // [sp+38h] [bp-6Ch]
  int v32; // [sp+3Ch] [bp-68h]
  int v33; // [sp+40h] [bp-64h]
  int i; // [sp+44h] [bp-60h]
  _DWORD *v38; // [sp+5Ch] [bp-48h] BYREF
  int v39; // [sp+60h] [bp-44h] BYREF
  int v40; // [sp+64h] [bp-40h]
  __int64 v41; // [sp+68h] [bp-3Ch]
  int v42; // [sp+70h] [bp-34h]
  int v43; // [sp+74h] [bp-30h]
  char v44[8]; // [sp+7Ch] [bp-28h] BYREF
  char v45[4]; // [sp+84h] [bp-20h] BYREF
  _DWORD v46[3]; // [sp+88h] [bp-1Ch] BYREF
  char v47[4]; // [sp+94h] [bp-10h] BYREF
  char v48[4]; // [sp+98h] [bp-Ch] BYREF

  v38 = a2;
  v4 = 1;
  if ( a4 != 0 )
  {
    v5 = a2;
    v4 = 0;
    v6 = &v38;
    while ( 1 )
    {
      *v6 = v5;
      if ( v5 == nullptr )
        break;
      if ( v5[5] <= a3 )
      {
        v6 = v5 + 3;
        ++v4;
      }
      v5 = (_DWORD *)v5[3];
    }
  }
  v7 = (int)v38;
  v31 = v38;
  *(_DWORD *)(a1 + 192) += v4;
  if ( *(_DWORD *)(v7 + 20) == 1 )
    sub_3548B0(v7);
  v8 = *(_DWORD *)(a1 + 208);
  v33 = *(unsigned __int8 *)(a1 + 10);
  v32 = *(_DWORD *)(a1 + 152);
  if ( *(_WORD *)(v8 + 40) == 0 )
  {
    v9 = **(_DWORD ***)(v8 + 32);
    if ( v9[24] != 0 )
    {
      sqlite3_randomness(4, &v39);
      v10 = sub_352B52(v8);
      v11 = v10;
      if ( v10 != 0 )
      {
        if ( v10 != 5 )
          goto LABEL_58;
      }
      else
      {
        ++*(_DWORD *)(v8 + 104);
        *(_DWORD *)(v8 + 68) = 0;
        v12 = sub_34D8D8((unsigned int *)(v8 + 84));
        sub_34D8F0((_BYTE *)(v8 + 84), v12 + 1);
        *(_DWORD *)(v8 + 88) = v39;
        sub_35038C(v8);
        v9[24] = 0;
        v9[26] = 0;
        v9[27] = -1;
        v9[28] = -1;
        v9[29] = -1;
        sub_352B94(v8);
      }
    }
    sub_352B3A(v8);
    *(_WORD *)(v8 + 40) = -1;
    v13 = 0;
    do
    {
      v14 = sub_36BF4C(v8, &v39, 1, ++v13);
      v11 = v14;
    }
    while ( v14 == -1 );
    if ( v14 == 0 )
      goto LABEL_10;
LABEL_58:
    if ( v11 == 0 )
    {
LABEL_62:
      if ( *(_DWORD *)(a1 + 88) != 0 )
      {
        do
        {
          sub_367FEC(*(_DWORD *)(a1 + 88), v31[5], v31[1]);
          v31 = (_DWORD *)v31[3];
        }
        while ( v31 != nullptr );
      }
    }
    return v11;
  }
LABEL_10:
  v29 = *(_DWORD *)(v8 + 68);
  if ( v29 == 0 )
  {
    sub_34D8F0(v44, 931071618);
    v44[4] = 0;
    v44[5] = 45;
    v44[6] = -30;
    v44[7] = 24;
    sub_34D8F0(v45, v32);
    sub_34D8F0(v46, *(_DWORD *)(v8 + 104));
    if ( *(_DWORD *)(v8 + 104) == 0 )
      sqlite3_randomness(8, (_BYTE *)(v8 + 84));
    *(_QWORD *)&v46[1] = *(_QWORD *)(v8 + 84);
    sub_34E08C(1, v44, 24, nullptr, &v39);
    sub_34D8F0(v47, v39);
    sub_34D8F0(v48, v40);
    *(_DWORD *)(v8 + 36) = v32;
    *(_BYTE *)(v8 + 65) = 0;
    *(_DWORD *)(v8 + 76) = v39;
    *(_DWORD *)(v8 + 80) = v40;
    *(_BYTE *)(v8 + 47) = 1;
    v11 = sub_34CA4C(*(_DWORD *)(v8 + 8));
    if ( v11 != 0 )
      return v11;
    if ( *(_BYTE *)(v8 + 48) != 0 && v33 != 0 )
    {
      v11 = sub_34CA68(*(_DWORD *)(v8 + 8));
      if ( v11 != 0 )
        return v11;
    }
  }
  v39 = v8;
  v40 = *(_DWORD *)(v8 + 8);
  v41 = 0;
  v42 = v33;
  v30 = v32 + 24;
  v43 = v32;
  v15 = v29 * v30 + 32;
  for ( i = (int)v31; ; i = *(_DWORD *)(i + 12) )
  {
    ++v29;
    v16 = 0;
    if ( a4 != 0 && *(_DWORD *)(i + 12) == 0 )
      v16 = a3;
    v11 = sub_3502BC(&v39, i, v16, a4, v15);
    if ( v11 != 0 )
      return v11;
    v15 += v30;
    if ( *(_DWORD *)(i + 12) == 0 )
      break;
  }
  if ( a4 == 0 )
  {
    v28 = 0;
    goto LABEL_50;
  }
  if ( (v33 & 0x20) == 0 )
  {
    v28 = 0;
LABEL_65:
    if ( *(_BYTE *)(v8 + 47) != 0 )
    {
      v26 = *(_QWORD *)(v8 + 16);
      if ( v26 >= 0 )
      {
        v27 = (v28 + v29) * v30;
        if ( v26 <= v27 + 31 )
          v26 = v27 + 32;
        LODWORD(v27) = v8;
        sub_35FF88(v27, v26, HIDWORD(v26));
        *(_BYTE *)(v8 + 47) = 0;
      }
    }
LABEL_50:
    v21 = *(_DWORD *)(v8 + 68);
    v22 = v31;
    do
    {
      if ( v11 != 0 )
        break;
      v23 = sub_366D60((_DWORD *)v8, ++v21, v22[5]);
      v22 = (_DWORD *)v22[3];
      v11 = v23;
    }
    while ( v22 != nullptr );
    v24 = v21 + v28;
    while ( v11 == 0 )
    {
      if ( v21 == v24 )
      {
        *(_WORD *)(v8 + 66) = HIWORD(v32) | v32 & 0xFF00;
        *(_DWORD *)(v8 + 68) = v21;
        if ( a4 != 0 )
        {
          ++*(_DWORD *)(v8 + 60);
          *(_DWORD *)(v8 + 72) = a3;
          sub_35038C(v8);
          *(_DWORD *)(v8 + 12) = v21;
        }
        goto LABEL_62;
      }
      v11 = sub_366D60((_DWORD *)v8, ++v21, *(_DWORD *)(i + 20));
    }
    return v11;
  }
  v28 = *(unsigned __int8 *)(v8 + 49);
  if ( *(_BYTE *)(v8 + 49) == 0 )
  {
    v11 = sub_34CA68(v40);
    goto LABEL_65;
  }
  v17 = *(int (**)(void))(**(_DWORD **)(v8 + 8) + 44);
  if ( v17 != nullptr )
  {
    v18 = v17();
    v19 = 512;
    if ( v18 <= 31 )
      goto LABEL_43;
  }
  else
  {
    v18 = 4096;
  }
  v19 = v18;
  if ( v18 > 0x10000 )
    v19 = 0x10000;
LABEL_43:
  v41 = (v19 + v15 - 1) / v19 * v19;
  v28 = 0;
  while ( v41 > v15 )
  {
    v20 = sub_3502BC(&v39, i, a3, SHIDWORD(v41), v15);
    if ( v20 != 0 )
    {
      v11 = v20;
      goto LABEL_58;
    }
    v15 += v30;
    ++v28;
  }
  goto LABEL_65;
}


//======================================================================
// sub_36C4F0
// address: 0x0036C4F0   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall sub_36C4F0(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r5

  result = *(_DWORD *)(a1 + 40);
  if ( result != 0 )
    return 0;
  if ( *(_BYTE *)(a1 + 19) == 0 || *(unsigned __int8 *)(a1 + 19) << 30 == 0 && (*(_WORD *)(a2 + 24) & 4) == 0 )
  {
    *(_DWORD *)(a2 + 12) = 0;
    if ( *(_DWORD *)(a1 + 208) != 0 )
    {
      if ( sub_35295C(a2) != 0 )
      {
        v6 = sub_357388(a2);
        if ( v6 != 0 )
          return sub_34DFE0(a1, v6);
      }
      v5 = sub_36C0CC(a1, (_DWORD *)a2, 0, 0);
    }
    else
    {
      if ( (*(_WORD *)(a2 + 24) & 4) != 0 || *(_BYTE *)(a1 + 15) == 3 )
      {
        v6 = sub_358EC8(a1, 1);
        if ( v6 != 0 )
          return sub_34DFE0(a1, v6);
      }
      if ( *(_DWORD *)(a2 + 20) > *(_DWORD *)(a1 + 24) && sub_35295C(a2) != 0 )
      {
        v6 = sub_357388(a2);
        if ( v6 != 0 )
          return sub_34DFE0(a1, v6);
      }
      v5 = sub_368034(a1, a2);
    }
    v6 = v5;
    if ( v5 == 0 )
      sub_3529C0((_DWORD *)a2);
    return sub_34DFE0(a1, v6);
  }
  return result;
}


//======================================================================
// sub_36C598
// address: 0x0036C598   size: 0x25E (606 bytes)
//======================================================================
int __fastcall sub_36C598(int a1, int a2, int a3)
{
  int result; // r0
  int v6; // r5
  int i; // r3
  _DWORD *v8; // r0
  _DWORD *v9; // r3
  int v10; // r5
  int v11; // r3
  int j; // r6
  int v13; // r3
  int v14; // r1
  _DWORD *v15; // r0
  unsigned int v16; // r5
  int v17; // r0
  __int64 v18; // [sp+8h] [bp-1Ch]
  __int64 v19; // [sp+8h] [bp-1Ch]
  __int64 v20; // [sp+8h] [bp-1Ch]
  int v21; // [sp+10h] [bp-14h]
  int v23[3]; // [sp+18h] [bp-Ch] BYREF

  result = *(_DWORD *)(a1 + 40);
  if ( result == 0 && *(unsigned __int8 *)(a1 + 15) > 2u )
  {
    v6 = *(unsigned __int8 *)(a1 + 14);
    if ( *(_BYTE *)(a1 + 14) != 0 )
    {
      for ( i = *(_DWORD *)(a1 + 88); i != 0; i = *(_DWORD *)(i + 44) )
        *(_DWORD *)(i + 16) = 1;
    }
    else if ( *(_DWORD *)(a1 + 208) != 0 )
    {
      v8 = sub_353FAC(*(_DWORD **)(a1 + 204));
      v23[0] = v6;
      v9 = v8;
      if ( v8 == nullptr )
      {
        sub_366EBC(a1, 1u, v23, 0);
        v9 = (_DWORD *)v23[0];
        *(_DWORD *)(v23[0] + 12) = v6;
      }
      v10 = sub_36C0CC(a1, v9, *(_DWORD *)(a1 + 24), 1);
      sub_367EB6(v23[0]);
      if ( v10 != 0 )
        return v10;
      sub_352A34(*(_DWORD ***)(a1 + 204));
    }
    else
    {
      if ( *(_BYTE *)(a1 + 17) == 0 && *(_DWORD *)(a1 + 24) != 0 )
      {
        v10 = sub_366EBC(a1, 1u, v23, 0);
        if ( v10 == 0 )
        {
          v10 = sub_367BA8(v23[0]);
          if ( v10 == 0 )
          {
            sub_3548B0(v23[0]);
            *(_BYTE *)(a1 + 17) = 1;
          }
        }
        sub_367EB6(v23[0]);
        if ( v10 != 0 )
          return v10;
      }
      if ( a2 != 0 )
      {
        v11 = *(unsigned __int8 *)(a1 + 5);
        if ( v11 != 4 && v11 != 2 )
        {
          *(_BYTE *)(a1 + 18) = 1;
          v21 = 0;
          for ( j = 0; ; ++j )
          {
            v13 = *(unsigned __int8 *)(a2 + j);
            if ( *(_BYTE *)(a2 + j) == 0 )
              break;
            v21 += v13;
          }
          if ( *(_BYTE *)(a1 + 8) != 0 )
            *(_QWORD *)(a1 + 72) = sub_34DF9E(a1);
          v18 = *(_QWORD *)(a1 + 72);
          v10 = sub_34DF58(*(_DWORD *)(a1 + 64), v14, v18, SHIDWORD(v18), dword_471740 / *(_DWORD *)(a1 + 152) + 1);
          if ( v10 != 0 )
            return v10;
          v19 = v18 + 4;
          v10 = sub_34CA4C(*(_DWORD *)(a1 + 64));
          if ( v10 != 0 )
            return v10;
          v20 = v19 + j;
          v10 = sub_34DF58(*(_DWORD *)(a1 + 64), SHIDWORD(v20), v20, SHIDWORD(v20), j);
          if ( v10 != 0 )
            return v10;
          v10 = sub_34DF58(*(_DWORD *)(a1 + 64), v21, v20 + 4, (unsigned __int64)(v20 + 4) >> 32, v21);
          if ( v10 != 0 )
            return v10;
          v10 = sub_34CA4C(*(_DWORD *)(a1 + 64));
          if ( v10 != 0 )
            return v10;
          *(_QWORD *)(a1 + 72) += j + 20;
          v10 = sub_34CA72(*(_DWORD *)(a1 + 64));
          if ( v10 != 0 )
            return v10;
          if ( *(__int64 *)v23 > *(_QWORD *)(a1 + 72) )
          {
            v10 = sub_34CA5E(*(_DWORD *)(a1 + 64));
            if ( v10 != 0 )
              return v10;
          }
        }
      }
      v10 = sub_358EC8(a1, 0);
      if ( v10 != 0 )
        return v10;
      v15 = sub_353FAC(*(_DWORD **)(a1 + 204));
      v10 = sub_368034(a1, (int)v15);
      if ( v10 != 0 )
        return v10;
      sub_352A34(*(_DWORD ***)(a1 + 204));
      v16 = *(_DWORD *)(a1 + 24);
      if ( v16 > *(_DWORD *)(a1 + 32) )
      {
        v10 = sub_35019C(a1, v16 - (v16 == dword_471740 / *(_DWORD *)(a1 + 152) + 1));
        if ( v10 != 0 )
          return v10;
      }
      if ( a3 == 0 )
      {
        v17 = sub_352B0C(a1);
        v10 = v17;
        if ( v17 != 0 )
          return v10;
      }
    }
    v10 = 0;
    if ( *(_DWORD *)(a1 + 208) == 0 )
      *(_BYTE *)(a1 + 15) = 5;
    return v10;
  }
  return result;
}


//======================================================================
// sub_36C804
// address: 0x0036C804   size: 0x140 (320 bytes)
//======================================================================
int __fastcall sub_36C804(int a1, int a2)
{
  int v3; // r5
  int *v4; // r4
  unsigned int v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r6
  _BYTE *v9; // r2
  _BYTE *v10; // r2
  unsigned int v12; // [sp+0h] [bp-14h]
  unsigned int v13; // [sp+4h] [bp-10h]
  int v14; // [sp+8h] [bp-Ch]

  v3 = 0;
  if ( *(_BYTE *)(a1 + 8) == 2 )
  {
    v4 = *(int **)(a1 + 4);
    sub_3574C2(a1);
    if ( *((_BYTE *)v4 + 17) != 0 )
    {
      v14 = *v4;
      sub_356342(v4[2]);
      v3 = *((unsigned __int8 *)v4 + 18);
      if ( *((_BYTE *)v4 + 18) == 0 )
      {
        v5 = v4[11];
        if ( sub_34E284((int)v4, v5) == v5 || v5 == dword_471740 / (unsigned int)v4[8] + 1 )
        {
          v6 = 54023;
LABEL_9:
          v3 = sub_35FA58(v6);
LABEL_26:
          if ( v3 != 0 )
            goto LABEL_30;
          goto LABEL_27;
        }
        v13 = sub_34D8D8((unsigned int *)(*(_DWORD *)(v4[3] + 56) + 36));
        v12 = sub_34E2C4((int)v4, v5, v13);
        if ( v12 > v5 )
        {
          v6 = 54028;
          goto LABEL_9;
        }
        if ( v12 < v5 )
          v3 = sub_36AE54(v4[2], v3, v3);
        while ( v5 != v12 )
        {
          if ( v3 != 0 )
          {
            v8 = v3;
            if ( v3 == 101 )
              goto LABEL_19;
LABEL_25:
            sub_36772C(v14);
            goto LABEL_26;
          }
          v7 = sub_36B8F8((int)v4, v12, v5--, 1);
          v3 = v7;
        }
        v8 = v3;
        if ( v3 != 101 && v3 != 0 )
          goto LABEL_25;
LABEL_19:
        if ( v13 != 0 )
        {
          v8 = sub_367BA8(*(_DWORD *)(v4[3] + 68));
          v9 = *(_BYTE **)(v4[3] + 56);
          v9[32] = 0;
          v9[33] = 0;
          v9[34] = 0;
          v9[35] = 0;
          v10 = *(_BYTE **)(v4[3] + 56);
          v10[36] = 0;
          v10[37] = 0;
          v10[38] = 0;
          v10[39] = 0;
          sub_34D8F0((_BYTE *)(*(_DWORD *)(v4[3] + 56) + 28), v12);
          *((_BYTE *)v4 + 19) = 1;
          v4[11] = v12;
        }
        if ( v8 != 0 )
        {
          v3 = v8;
          goto LABEL_25;
        }
      }
    }
LABEL_27:
    if ( *((_BYTE *)v4 + 19) != 0 )
      *(_DWORD *)(*v4 + 24) = v4[11];
    v3 = sub_36C598(*v4, a2, 0);
LABEL_30:
    sub_35655E(a1);
  }
  return v3;
}


//======================================================================
// sub_36C950
// address: 0x0036C950   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_36C950(int a1)
{
  int v2; // r4

  sub_3574C2(a1);
  v2 = sub_36C804(a1, 0);
  if ( v2 == 0 )
    v2 = sub_3681E0(a1, 0);
  sub_35655E(a1);
  return v2;
}


//======================================================================
// sub_36C978
// address: 0x0036C978   size: 0x3B0 (944 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0036C978  LDR     R3, =(__stack_chk_guard_ptr - 0x36C980)
//   0036C97A  PUSH    {R4-R7,LR}
//   0036C97C  ADD     R3, PC; __stack_chk_guard_ptr
//   0036C97E  LDR     R3, [R3]; __stack_chk_guard
//   0036C980  SUB     SP, SP, #0x44
//   0036C982  MOVS    R4, R0
//   0036C984  LDR     R2, [R3]
//   0036C986  STR     R3, [SP,#0x44+var_30]
//   0036C988  STR     R2, [SP,#0x44+var_8]
//   0036C98A  LDRB    R2, [R0,#0xE]
//   0036C98C  CMP     R2, #0
//   0036C98E  BEQ     loc_36C998
//   0036C990  LDR     R0, [R0,#0x28]
//   0036C992  CMP     R0, #0
//   0036C994  BEQ     loc_36C998
//   0036C996  B       loc_36CD0C
//   0036C998  MOVS    R3, R4
//   0036C99A  ADDS    R3, #0xD0
//   0036C99C  LDR     R3, [R3]
//   0036C99E  MOVS    R5, #0
//   0036C9A0  CMP     R3, R5
//   0036C9A2  BEQ     loc_36C9A6
//   0036C9A4  B       loc_36CC94
//   0036C9A6  LDRB    R3, [R4,#0xF]
//   0036C9A8  CMP     R3, R5
//   0036C9AA  BEQ     loc_36C9AE
//   0036C9AC  B       loc_36CC94
//   0036C9AE  MOVS    R0, R4
//   0036C9B0  MOVS    R1, #1
//   0036C9B2  BL      sub_35708A
//   0036C9B6  SUBS    R5, R0, #0
//   0036C9B8  BEQ     loc_36C9BC
//   0036C9BA  B       loc_36CCFE
//   0036C9BC  LDRB    R3, [R4,#0x10]
//   0036C9BE  CMP     R3, #1
//   0036C9C0  BLS     loc_36C9CC
//   0036C9C2  LDRB    R3, [R4,#0xD]
//   0036C9C4  CMP     R3, #0
//   0036C9C6  BEQ     loc_36C9CA
//   0036C9C8  B       loc_36CD1A
//   0036C9CA  B       loc_36CAD8
//   0036C9CC  MOVS    R3, #1
//   0036C9CE  STR     R3, [SP,#0x44+var_28]
//   0036C9D0  LDR     R3, [R4,#0x40]
//   0036C9D2  LDR     R1, [R4]
//   0036C9D4  LDR     R7, [R3]
//   0036C9D6  STR     R1, [SP,#0x44+var_34]
//   0036C9D8  MOVS    R2, R7
//   0036C9DA  SUBS    R7, R2, #1
//   0036C9DC  SBCS    R2, R7
//   0036C9DE  STR     R2, [SP,#0x44+var_38]
//   0036C9E0  CMP     R2, #0
//   0036C9E2  BEQ     loc_36C9F0
//   0036C9E4  LDR     R3, [SP,#0x44+var_28]
//   0036C9E6  MOVS    R7, #0
//   0036C9E8  CMP     R3, R7
//   0036C9EA  BNE     loc_36C9EE
//   0036C9EC  B       loc_36CB74
//   0036C9EE  B       loc_36CA08
//   0036C9F0  MOVS    R3, R4
//   0036C9F2  ADDS    R3, #0xAC
//   0036C9F4  LDR     R1, [R3]
//   0036C9F6  LDR     R0, [SP,#0x44+var_34]
//   0036C9F8  MOVS    R2, R5
//   0036C9FA  ADD     R3, SP, #0x44+var_28
//   0036C9FC  BL      sub_34CAD0
//   0036CA00  SUBS    R6, R0, #0
//   0036CA02  BEQ     loc_36C9E4
//   0036CA04  MOVS    R7, R5
//   0036CA06  B       loc_36CACC
//   0036CA08  LDR     R0, [R4,#0x3C]
//   0036CA0A  STR     R7, [SP,#0x44+var_24]
//   0036CA0C  ADD     R1, SP, #0x44+var_24
//   0036CA0E  LDR     R3, [R0]
//   0036CA10  LDR     R3, [R3,#0x24]
//   0036CA12  BLX     R3
//   0036CA14  SUBS    R6, R0, #0
//   0036CA16  BNE     loc_36CACC
//   0036CA18  LDR     R7, [SP,#0x44+var_24]
//   0036CA1A  CMP     R7, #0
//   0036CA1C  BEQ     loc_36CA20
//   0036CA1E  B       loc_36CB74
//   0036CA20  MOVS    R0, R4
//   0036CA22  ADD     R1, SP, #0x44+var_20
//   0036CA24  BL      sub_34E11A
//   0036CA28  SUBS    R6, R0, #0
//   0036CA2A  BNE     loc_36CACC
//   0036CA2C  LDR     R1, [SP,#0x44+var_20]
//   0036CA2E  CMP     R1, #0
//   0036CA30  BNE     loc_36CA8C
//   0036CA32  LDR     R2, [SP,#0x44+var_38]
//   0036CA34  CMP     R2, #0
//   0036CA36  BEQ     loc_36CA5A
//   0036CA38  ADD     R7, SP, #0x44+var_1C
//   0036CA3A  MOVS    R3, #0
//   0036CA3C  STRB    R3, [R7]
//   0036CA3E  MOVS    R2, #0
//   0036CA40  MOVS    R3, #0
//   0036CA42  STR     R2, [SP,#0x44+var_44]
//   0036CA44  STR     R3, [SP,#0x44+var_40]
//   0036CA46  LDR     R0, [R4,#0x40]
//   0036CA48  MOVS    R1, R7
//   0036CA4A  MOVS    R2, #1
//   0036CA4C  BL      sub_34CA3A
//   0036CA50  LDR     R3, =0x20A
//   0036CA52  CMP     R0, R3
//   0036CA54  BEQ     loc_36CAAE
//   0036CA56  MOVS    R6, R0
//   0036CA58  B       loc_36CAAE
//   0036CA5A  BL      sub_34CB1C
//   0036CA5E  MOVS    R0, R4
//   0036CA60  MOVS    R1, #2
//   0036CA62  BL      sub_35705C
//   0036CA66  CMP     R0, #0
//   0036CA68  BNE     loc_36CA86
//   0036CA6A  MOVS    R3, R4
//   0036CA6C  ADDS    R3, #0xAC
//   0036CA6E  LDR     R1, [R3]
//   0036CA70  LDR     R0, [SP,#0x44+var_34]
//   0036CA72  LDR     R2, [SP,#0x44+var_38]
//   0036CA74  BL      sub_34CAC8
//   0036CA78  LDRB    R3, [R4,#4]
//   0036CA7A  CMP     R3, #0
//   0036CA7C  BNE     loc_36CA86
//   0036CA7E  MOVS    R0, R4
//   0036CA80  MOVS    R1, #1
//   0036CA82  BL      sub_34DF7E
//   0036CA86  BL      sub_34CB30
//   0036CA8A  B       loc_36CB74
//   0036CA8C  LDR     R3, [SP,#0x44+var_38]
//   0036CA8E  CMP     R3, #0
//   0036CA90  BNE     loc_36CA38
//   0036CA92  MOVS    R2, R4
//   0036CA94  ADDS    R2, #0xAC
//   0036CA96  LDR     R3, =0x801
//   0036CA98  LDR     R1, [R2]
//   0036CA9A  ADD     R2, SP, #0x44+var_1C
//   0036CA9C  STR     R2, [SP,#0x44+var_44]
//   0036CA9E  LDR     R0, [SP,#0x44+var_34]
//   0036CAA0  LDR     R2, [R4,#0x40]
//   0036CAA2  STR     R3, [SP,#0x44+var_1C]
//   0036CAA4  BL      sub_34CAB4
//   0036CAA8  CMP     R0, #0
//   0036CAAA  BNE     loc_36CAC2
//   0036CAAC  B       loc_36CA38
//   0036CAAE  LDR     R1, [SP,#0x44+var_38]
//   0036CAB0  CMP     R1, #0
//   0036CAB2  BNE     loc_36CABA
//   0036CAB4  LDR     R0, [R4,#0x40]
//   0036CAB6  BL      sub_34CA24
//   0036CABA  LDRB    R7, [R7]
//   0036CABC  SUBS    R3, R7, #1
//   0036CABE  SBCS    R7, R3
//   0036CAC0  B       loc_36CACC
//   0036CAC2  CMP     R0, #0xE
//   0036CAC4  BNE     loc_36CAC8
//   0036CAC6  B       loc_36C9C2
//   0036CAC8  LDR     R7, [SP,#0x44+var_38]
//   0036CACA  MOVS    R6, R0
//   0036CACC  CMP     R6, #0
//   0036CACE  BEQ     loc_36CAD2
//   0036CAD0  B       loc_36CD20
//   0036CAD2  CMP     R7, #0
//   0036CAD4  BEQ     loc_36CB74
//   0036CAD6  B       loc_36C9C2
//   0036CAD8  MOVS    R0, R4
//   0036CADA  MOVS    R1, #4
//   0036CADC  BL      sub_35705C
//   0036CAE0  SUBS    R6, R0, #0
//   0036CAE2  BEQ     loc_36CAE6
//   0036CAE4  B       loc_36CD20
//   0036CAE6  LDR     R3, [R4,#0x40]
//   0036CAE8  LDR     R3, [R3]
//   0036CAEA  CMP     R3, #0
//   0036CAEC  BNE     loc_36CB36
//   0036CAEE  LDR     R2, [R4]
//   0036CAF0  MOVS    R7, R4
//   0036CAF2  ADDS    R7, #0xAC
//   0036CAF4  STR     R2, [SP,#0x44+var_38]
//   0036CAF6  MOVS    R0, R2
//   0036CAF8  LDR     R1, [R7]
//   0036CAFA  MOVS    R2, R6
//   0036CAFC  ADD     R3, SP, #0x44+var_20
//   0036CAFE  BL      sub_34CAD0
//   0036CB02  SUBS    R6, R0, #0
//   0036CB04  BNE     loc_36CB36
//   0036CB06  LDR     R3, [SP,#0x44+var_20]
//   0036CB08  CMP     R3, #0
//   0036CB0A  BEQ     loc_36CB36
//   0036CB0C  ADD     R3, SP, #0x44+var_1C
//   0036CB0E  STR     R0, [SP,#0x44+var_1C]
//   0036CB10  LDR     R1, [R7]
//   0036CB12  LDR     R0, [SP,#0x44+var_38]
//   0036CB14  STR     R3, [SP,#0x44+var_44]
//   0036CB16  LDR     R2, [R4,#0x40]
//   0036CB18  LDR     R3, =0x802
//   0036CB1A  BL      sub_34CAB4
//   0036CB1E  SUBS    R6, R0, #0
//   0036CB20  BNE     loc_36CB36
//   0036CB22  LDR     R1, [SP,#0x44+var_1C]

//======================================================================
// sub_36CD28
// address: 0x0036CD28   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_36CD28(int a1, int a2)
{
  int v3; // r3
  int v4; // r2
  int v5; // r5
  int v6; // r2

  v3 = *(unsigned __int8 *)(a1 + 5);
  if ( *(_BYTE *)(a1 + 14) != 0 && a2 != 4 && a2 != 2 )
    a2 = *(unsigned __int8 *)(a1 + 5);
  if ( a2 != v3 )
  {
    v4 = *(unsigned __int8 *)(a1 + 4);
    *(_BYTE *)(a1 + 5) = a2;
    if ( v4 == 0 && (v3 & 5) == 1 && (a2 & 1) == 0 )
    {
      sub_34CA24(*(int **)(a1 + 64));
      if ( *(unsigned __int8 *)(a1 + 16) <= 1u )
      {
        v5 = *(unsigned __int8 *)(a1 + 15);
        v6 = 0;
        if ( *(_BYTE *)(a1 + 15) == 0 )
          v6 = sub_36C978(a1);
        if ( *(_BYTE *)(a1 + 15) == 1 )
          v6 = sub_35705C(a1, 2);
        if ( v6 != 0 || (sub_34CAC8(*(_DWORD *)a1), v5 != 1) )
        {
          if ( v5 == 0 )
            sub_356D36(a1);
        }
        else
        {
          sub_34DF7E(a1, 1);
        }
      }
      else
      {
        sub_34CAC8(*(_DWORD *)a1);
      }
    }
  }
  return *(unsigned __int8 *)(a1 + 5);
}


//======================================================================
// sub_36CDC0
// address: 0x0036CDC0   size: 0x44E (1102 bytes)
//======================================================================
int __fastcall sub_36CDC0(int a1, int a2)
{
  int v2; // r4
  int v3; // r3
  __int16 v4; // r3
  int v5; // r7
  int v6; // r3
  int **i; // r3
  int v8; // r1
  __int16 v9; // r3
  int v10; // r6
  unsigned int v11; // r0
  int v12; // r5
  unsigned int v13; // r3
  int v14; // r5
  int v15; // r5
  unsigned int v16; // r0
  int v17; // r0
  int v18; // r3
  int v19; // r6
  unsigned int v20; // r5
  __int16 v21; // r0
  int v22; // r6
  int v23; // r5
  int v24; // r3
  _BYTE *v25; // r5
  int v26; // r3
  unsigned int v27; // r3
  __int16 v28; // r3
  int v29; // r5
  __int16 v30; // r3
  int v32; // [sp+Ch] [bp-28h]
  int *v33; // [sp+Ch] [bp-28h]
  int v34; // [sp+Ch] [bp-28h]
  int v37; // [sp+18h] [bp-1Ch]
  unsigned int v38; // [sp+1Ch] [bp-18h]
  int v39; // [sp+20h] [bp-14h]
  int v40; // [sp+28h] [bp-Ch] BYREF
  int v41; // [sp+2Ch] [bp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 4);
  sub_3574C2(a1);
  v3 = *(unsigned __int8 *)(a1 + 8);
  if ( v3 == 2 )
  {
    v5 = a2;
    if ( a2 == 0 )
      goto LABEL_100;
    goto LABEL_95;
  }
  if ( v3 == 1 && a2 == 0 )
  {
LABEL_99:
    v5 = 0;
    goto LABEL_100;
  }
  v4 = *(_WORD *)(v2 + 22);
  if ( (v4 & 1) != 0 )
  {
    v5 = 8;
    if ( a2 != 0 )
      goto LABEL_100;
  }
  else if ( a2 != 0 && *(_BYTE *)(v2 + 20) == 2 )
  {
    goto LABEL_10;
  }
  if ( (v4 & 0x40) == 0 )
  {
    if ( a2 > 1 )
    {
      for ( i = *(int ***)(v2 + 72); i != nullptr; i = (int **)i[3] )
      {
        if ( *i != (int *)a1 )
        {
          v6 = **i;
          goto LABEL_17;
        }
      }
    }
    goto LABEL_18;
  }
LABEL_10:
  v6 = **(_DWORD **)(v2 + 76);
LABEL_17:
  v5 = 262;
  if ( v6 != 0 )
    goto LABEL_100;
LABEL_18:
  v5 = sub_34E238(a1, 1, 1);
  if ( v5 != 0 )
    goto LABEL_100;
  v8 = *(_DWORD *)(v2 + 44);
  v9 = *(_WORD *)(v2 + 22) & 0xFFF7;
  *(_WORD *)(v2 + 22) = v9;
  if ( v8 == 0 )
    *(_WORD *)(v2 + 22) = v9 | 8;
  while ( 1 )
  {
    while ( *(_DWORD *)(v2 + 12) == 0 )
    {
      v5 = sub_36C978(*(_DWORD *)v2);
      if ( v5 != 0 )
        goto LABEL_78;
      v5 = sub_367150((int *)v2, 1u, &v40, 0);
      if ( v5 != 0 )
        goto LABEL_78;
      v10 = *(_DWORD *)(v40 + 56);
      v11 = sub_34D8D8((unsigned int *)(v10 + 28));
      v12 = *(_DWORD *)v2;
      v32 = v11;
      v37 = *(_DWORD *)(*(_DWORD *)v2 + 24);
      if ( v11 != 0 )
      {
        if ( j_memcmp((const void *)(v10 + 24), (const void *)(v10 + 92), 4u) != 0 )
          v32 = v37;
      }
      else
      {
        v32 = *(_DWORD *)(*(_DWORD *)v2 + 24);
      }
      if ( v32 <= 0 )
        goto LABEL_48;
      if ( strcmp((const char *)v10, "SQLite format 3") != 0 )
        goto LABEL_52;
      if ( *(unsigned __int8 *)(v10 + 18) > 2u )
        *(_WORD *)(v2 + 22) |= 1u;
      v13 = *(unsigned __int8 *)(v10 + 19);
      if ( v13 > 2 )
      {
LABEL_52:
        v14 = 26;
        goto LABEL_53;
      }
      if ( v13 != 2 || (*(_WORD *)(v2 + 22) & 0x10) != 0 )
        goto LABEL_40;
      v41 = 0;
      v14 = sub_357EF8(v12, &v41);
      if ( v14 != 0 )
        goto LABEL_53;
      if ( v41 != 0 )
      {
LABEL_40:
        if ( j_memcmp((const void *)(v10 + 21), "@  ", 3u) != 0 )
          goto LABEL_52;
        v15 = (*(unsigned __int8 *)(v10 + 17) << 16) | (*(unsigned __int8 *)(v10 + 16) << 8);
        if ( ((v15 - 1) & v15) != 0 || (unsigned int)(v15 - 257) > 0xFEFF )
          goto LABEL_52;
        v39 = *(unsigned __int8 *)(v10 + 20);
        v38 = v15 - v39;
        if ( v15 == *(_DWORD *)(v2 + 32) )
        {
          if ( (*(_DWORD *)(*(_DWORD *)(v2 + 4) + 24) & 0x10000) == 0 && v32 > v37 )
          {
            v14 = sub_35FA58(53308);
LABEL_53:
            sub_368120(v40);
            *(_DWORD *)(v2 + 12) = 0;
            v5 = v14;
            goto LABEL_54;
          }
          if ( v38 <= 0x1DF )
            goto LABEL_52;
          *(_DWORD *)(v2 + 36) = v38;
          *(_BYTE *)(v2 + 17) = sub_34D8D8((unsigned int *)(v10 + 52)) != 0;
          *(_BYTE *)(v2 + 18) = sub_34D8D8((unsigned int *)(v10 + 64)) != 0;
LABEL_48:
          v19 = *(_DWORD *)(v2 + 36);
          v20 = (unsigned __int16)(((v19 + 67108852) << 6) / 0xFFu - 23);
          *(_WORD *)(v2 + 24) = v20;
          v21 = 32 * (v19 + 134217716) / 0xFFu - 23;
          *(_WORD *)(v2 + 26) = v21;
          *(_WORD *)(v2 + 28) = v19 - 35;
          *(_WORD *)(v2 + 30) = v21;
          if ( v20 <= 0x7F )
            *(_BYTE *)(v2 + 21) = ((v19 + 67108852) << 6) / 0xFFu - 23;
          else
            *(_BYTE *)(v2 + 21) = 127;
          *(_DWORD *)(v2 + 12) = v40;
          *(_DWORD *)(v2 + 44) = v32;
        }
        else
        {
          sub_368120(v40);
          *(_DWORD *)(v2 + 32) = v15;
          v16 = *(_DWORD *)(v2 + 80);
          *(_DWORD *)(v2 + 36) = v38;
          sub_351FB4(v16);
          v17 = *(_DWORD *)v2;
          *(_DWORD *)(v2 + 80) = 0;
          v5 = sub_356DE0(v17, v2 + 32, v39, v18);
LABEL_54:
          if ( v5 != 0 )
            goto LABEL_78;
        }
      }
      else
      {
        sub_368120(v40);
        v5 = 0;
      }
    }
    if ( v5 != 0 )
      goto LABEL_78;
    if ( a2 == 0 )
      goto LABEL_79;
    if ( (*(_WORD *)(v2 + 22) & 1) != 0 )
    {
      v5 = 8;
      goto LABEL_78;
    }
    v22 = *(_DWORD *)v2;
    v23 = *(_DWORD *)(*(_DWORD *)v2 + 40);
    if ( v23 != 0 )
      goto LABEL_98;
    *(_BYTE *)(v22 + 20) = *(_BYTE *)(*(_DWORD *)a1 + 63) == 2;
    if ( *(_BYTE *)(v22 + 15) == 1 )
    {
      v33 = (int *)(v22 + 208);
      v24 = *(_DWORD *)(v22 + 208);
      if ( v24 != 0 )
      {
        if ( *(_BYTE *)(v22 + 4) != 0 && *(_BYTE *)(v24 + 43) == 0 )
        {
          v23 = sub_35705C(v22, 4);
          if ( v23 != 0 )
            goto LABEL_98;
          v25 = (_BYTE *)(*v33 + 43);
          sub_352B3A(*v33);
          *v25 = 1;
        }
        v23 = 8;
        v34 = *v33;
        if ( *(_BYTE *)(v34 + 46) != 0 )
          goto LABEL_98;
        v23 = sub_352B52(v34);
        if ( v23 != 0 )
          goto LABEL_98;
        *(_BYTE *)(v34 + 44) = 1;
        if ( j_memcmp((const void *)(v34 + 52), **(const void ***)(v34 + 32), 0x30u) != 0 )
        {
          sub_352B94(v34);
          *(_BYTE *)(v34 + 44) = 0;
          v23 = 517;
LABEL_98:
          v5 = v23;
LABEL_78:
          sub_36812E(v2);
          goto LABEL_79;
        }
      }
      else
      {
        v23 = sub_35705C(v22, 2);
        if ( v23 != 0 )
          goto LABEL_98;
        if ( a2 > 1 )
        {
          v23 = sub_35708A(v22, 4);
          if ( v23 != 0 )
            goto LABEL_98;
        }
      }
      *(_BYTE *)(v22 + 15) = 2;
      v26 = *(_DWORD *)(v22 + 24);
      *(_DWORD *)(v22 + 72) = 0;
      *(_DWORD *)(v22 + 76) = 0;
      *(_DWORD *)(v22 + 36) = v26;
      *(_DWORD *)(v22 + 32) = v26;
      *(_DWORD *)(v22 + 28) = v26;
    }
    if ( *(_DWORD *)(v2 + 44) == 0 )
    {
      v5 = sub_367CD0(v2);
      if ( v5 != 0 )
        goto LABEL_78;
    }
LABEL_79:
    if ( (unsigned __int8)v5 != 5 )
      break;
    if ( *(_BYTE *)(v2 + 20) != 0 || sub_34FA98(v2) == 0 )
      goto LABEL_100;
  }
  if ( v5 != 0 )
    goto LABEL_100;
  if ( *(_BYTE *)(a1 + 8) == 0 )
  {
    ++*(_DWORD *)(v2 + 40);
    if ( *(_BYTE *)(a1 + 9) != 0 )
    {
      *(_BYTE *)(a1 + 36) = 1;
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(v2 + 72);
      *(_DWORD *)(v2 + 72) = a1 + 28;
    }
  }
  v27 = 2 - (a2 == 0);
  *(_BYTE *)(a1 + 8) = v27;
  if ( *(unsigned __int8 *)(v2 + 20) < v27 )
    *(_BYTE *)(v2 + 20) = v27;
  if ( a2 == 0 )
    goto LABEL_99;
  v28 = *(_WORD *)(v2 + 22);
  *(_DWORD *)(v2 + 76) = a1;
  v29 = *(_DWORD *)(v2 + 12);
  v30 = v28 & 0xFFDF;
  if ( a2 > 1 )
    v30 |= 0x20u;
  *(_WORD *)(v2 + 22) = v30;
  if ( *(_DWORD *)(v2 + 44) == sub_34D8D8((unsigned int *)(*(_DWORD *)(v29 + 56) + 28)) )
  {
LABEL_95:
    v5 = sub_351EB8(*(_DWORD *)v2, *(_DWORD *)(*(_DWORD *)a1 + 488));
    goto LABEL_100;
  }
  v5 = sub_367BA8(*(_DWORD *)(v29 + 68));
  if ( v5 == 0 )
  {
    sub_34D8F0((_BYTE *)(*(_DWORD *)(v29 + 56) + 28), *(_DWORD *)(v2 + 44));
    goto LABEL_95;
  }
LABEL_100:
  sub_35655E(a1);
  return v5;
}


//======================================================================
// sub_36D210
// address: 0x0036D210   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_36D210(int a1, int a2)
{
  int v2; // r4
  unsigned __int8 v4; // r5
  __int16 v5; // r3
  int result; // r0
  int v7; // r6

  v2 = *(_DWORD *)(a1 + 4);
  v4 = a2;
  v5 = *(_WORD *)(v2 + 22) & 0xFFEF;
  if ( a2 == 1 )
    v5 |= 0x10u;
  *(_WORD *)(v2 + 22) = v5;
  result = sub_36CDC0(a1, 0);
  if ( result == 0 )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(v2 + 12) + 56);
    if ( *(unsigned __int8 *)(v7 + 18) != v4 || *(unsigned __int8 *)(v7 + 19) != v4 )
    {
      result = sub_36CDC0(a1, 2);
      if ( result == 0 )
      {
        result = sub_367BA8(*(_DWORD *)(*(_DWORD *)(v2 + 12) + 68));
        if ( result == 0 )
        {
          *(_BYTE *)(v7 + 18) = v4;
          *(_BYTE *)(v7 + 19) = v4;
        }
      }
    }
  }
  *(_WORD *)(v2 + 22) &= ~0x10u;
  return result;
}


//======================================================================
// sub_36D608
// address: 0x0036D608   size: 0x54E (1358 bytes)
//======================================================================
int __fastcall sub_36D608(
        int a1,
        int a2,
        int (__fastcall *a3)(int),
        int a4,
        int a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r3
  int result; // r0
  int v12; // r4
  int **v13; // r0
  unsigned int v14; // r5
  unsigned int *v15; // r0
  int v16; // r0
  int v17; // r2
  int v18; // r3
  unsigned int *v19; // r1
  int j; // r3
  int m; // r4
  int k; // r5
  int *v23; // r6
  int v24; // r4
  unsigned __int16 **v25; // r5
  int v26; // r3
  int v27; // r5
  int v28; // r4
  int v29; // r6
  int v30; // r0
  int v31; // r3
  int v32; // r0
  int v33; // r0
  unsigned int v34; // r6
  unsigned int v35; // r12
  int v36; // r2
  unsigned int *v37; // r3
  unsigned int v38; // r1
  unsigned int v39; // r0
  unsigned int *v40; // [sp+18h] [bp-CCh]
  unsigned int v41; // [sp+18h] [bp-CCh]
  unsigned int v42; // [sp+18h] [bp-CCh]
  unsigned int *v43; // [sp+1Ch] [bp-C8h]
  int v44; // [sp+20h] [bp-C4h]
  unsigned int v45; // [sp+24h] [bp-C0h]
  unsigned int v46; // [sp+24h] [bp-C0h]
  int v47; // [sp+28h] [bp-BCh]
  unsigned int v48; // [sp+28h] [bp-BCh]
  int i; // [sp+2Ch] [bp-B8h]
  int v50; // [sp+30h] [bp-B4h]
  int v51; // [sp+30h] [bp-B4h]
  char *v52; // [sp+34h] [bp-B0h]
  int (__fastcall *v54)(int); // [sp+38h] [bp-ACh]
  _WORD *v55; // [sp+3Ch] [bp-A8h]
  unsigned int v56; // [sp+3Ch] [bp-A8h]
  int v57; // [sp+40h] [bp-A4h]
  int v58; // [sp+44h] [bp-A0h]
  unsigned int v61; // [sp+50h] [bp-94h]
  int v62; // [sp+50h] [bp-94h]
  int v63; // [sp+54h] [bp-90h]
  int v64; // [sp+5Ch] [bp-88h] BYREF
  int v65; // [sp+60h] [bp-84h] BYREF
  int v66; // [sp+64h] [bp-80h] BYREF
  int v67; // [sp+68h] [bp-7Ch] BYREF
  int v68; // [sp+6Ch] [bp-78h] BYREF
  __int64 v69; // [sp+70h] [bp-74h] BYREF
  _DWORD v70[27]; // [sp+78h] [bp-6Ch] BYREF

  v64 = 0;
  v9 = *(unsigned __int8 *)(a1 + 46);
  result = 8;
  if ( v9 != 0 )
    return result;
  result = sub_352B52(a1);
  if ( result != 0 )
    return result;
  *(_BYTE *)(a1 + 45) = 1;
  if ( a2 == 0 )
  {
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
  v44 = sub_352B6A(a1, a3, a4);
  if ( v44 != 0 )
  {
    if ( v44 != 5 )
    {
      v58 = a2;
      goto LABEL_13;
    }
    goto LABEL_8;
  }
  *(_BYTE *)(a1 + 44) = 1;
  v12 = a2;
LABEL_9:
  v58 = v12;
  v44 = sub_36BBA8(a1, &v64);
  if ( v64 != 0 )
  {
    v13 = *(int ***)(a1 + 4);
    if ( **v13 > 2 )
      sub_34CAA4((int)v13);
  }
  if ( v44 != 0 )
    goto LABEL_13;
  v45 = *(_DWORD *)(a1 + 68);
  if ( v45 == 0 || (*(unsigned __int16 *)(a1 + 66) >> 9 << 9) + ((*(_WORD *)(a1 + 66) & 1) << 16) == a6 )
  {
    v61 = *(unsigned __int16 *)(a1 + 66);
    v57 = **(_DWORD **)(a1 + 32);
    if ( *(_DWORD *)(v57 + 96) >= v45 )
    {
LABEL_60:
      if ( a8 != nullptr )
        *a8 = *(_DWORD *)(a1 + 68);
      if ( a9 != nullptr )
        *a9 = *(_DWORD *)(**(_DWORD **)(a1 + 32) + 96);
      goto LABEL_13;
    }
    v14 = (v45 + 33) >> 12;
    v15 = (unsigned int *)sub_34CD58(2 * (v45 + 14 + 10 * v14));
    v43 = v15;
    if ( v15 == nullptr )
    {
      v44 = 7;
      goto LABEL_13;
    }
    v50 = v14 + 1;
    j_memset(v15, 0, 2 * (v45 + 14 + 10 * v14));
    v16 = v45;
    v43[1] = v14 + 1;
    if ( v45 > 0x1000 )
      v16 = 4096;
    v55 = (_WORD *)sub_34CD58(2 * v16);
    if ( v55 == nullptr )
      v44 = 7;
    v40 = v43;
    for ( i = 0; v44 == 0 && i < v50; ++i )
    {
      v44 = sub_366CD0(a1, i, &v65, &v67, &v66);
      if ( v44 == 0 )
      {
        v17 = v67 + 4;
        v67 += 4;
        v18 = v66;
        if ( i + 1 == v50 )
          v47 = v45 - v66;
        else
          v47 = (v65 - v17) >> 2;
        v19 = &v43[5 * v43[1] + 2];
        ++v66;
        v52 = (char *)v19 + 2 * v18;
        for ( j = 0; j < v47; ++j )
          *(_WORD *)&v52[2 * j] = j;
        v63 = v67;
        m = 0;
        v68 = 0;
        LODWORD(v69) = 0;
        j_memset(v70, 0, 0x68u);
        for ( k = 0; k < v47; ++k )
        {
          v68 = 1;
          LODWORD(v69) = &v52[2 * k];
          v23 = v70;
          for ( m = 0; ((k >> m) & 1) != 0; ++m )
          {
            sub_350558(v63, (unsigned __int16 *)v23[1], *v23, (int *)&v69, &v68, v55);
            v23 += 2;
          }
          v70[2 * m + 1] = v69;
          v70[2 * m] = v68;
        }
        v24 = m + 1;
        v25 = (unsigned __int16 **)&v70[2 * v24 + 1];
        while ( v24 <= 12 )
        {
          if ( ((v47 >> v24) & 1) != 0 )
            sub_350558(v63, *v25, (int)*(v25 - 1), (int *)&v69, &v68, v55);
          ++v24;
          v25 += 2;
        }
        v26 = v68;
        v40[6] = v66;
        v40[5] = v26;
        v40[3] = (unsigned int)v52;
        v40[4] = v67;
      }
      v40 += 5;
    }
    sub_34CDF8(v55);
    if ( v44 != 0 )
      goto LABEL_57;
    v27 = 1;
    v54 = v58 != 0 ? a3 : nullptr;
    v46 = *(_DWORD *)(a1 + 68);
    v56 = *(_DWORD *)(a1 + 72);
    v28 = 0;
    do
    {
      v29 = v57 + 4 * v27;
      v41 = *(_DWORD *)(v29 + 100);
      if ( v46 > v41 )
      {
        v30 = sub_352B6A(a1, v54, a4);
        v28 = v30;
        if ( v30 != 0 )
        {
          if ( v30 != 5 )
            goto LABEL_103;
          v54 = nullptr;
          v46 = v41;
        }
        else
        {
          if ( v27 == 1 )
            v31 = v46;
          else
            v31 = -1;
          *(_DWORD *)(v29 + 100) = v31;
          sub_352B94(a1);
        }
      }
      ++v27;
    }
    while ( v27 != 5 );
    if ( *(_DWORD *)(v57 + 96) < v46 )
    {
      v32 = sub_352B6A(a1, v54, a4);
      if ( v32 != 0 )
      {
        if ( v32 != 5 )
        {
          v44 = v32;
LABEL_57:
          sub_34CDF8(v43);
          goto LABEL_58;
        }
LABEL_56:
        if ( v58 == 0 )
          goto LABEL_57;
        if ( *(_DWORD *)(v57 + 96) >= *(_DWORD *)(a1 + 68) )
        {
          if ( v58 == 2 )
          {
            v44 = sub_352B6A(a1, v54, a4);
            if ( v44 == 0 )
              sub_352B94(a1);
          }
          goto LABEL_57;
        }
        v28 = 5;
LABEL_103:
        v44 = v28;
        goto LABEL_57;
      }
      v48 = *(_DWORD *)(v57 + 96);
      if ( a5 != 0 && (v33 = sub_34CA68(*(_DWORD *)(a1 + 8))) != 0
        || (*(_QWORD *)v70 = v56 * (__int64)(int)((v61 >> 9 << 9) + ((v61 & 1) << 16)),
            (v33 = sub_34CA72(*(_DWORD *)(a1 + 4))) != 0) )
      {
LABEL_104:
        v28 = v33;
      }
      else
      {
        if ( *(__int64 *)v70 > v69 )
          sub_34CA86(*(_DWORD *)(a1 + 4));
        v42 = 0;
        while ( 1 )
        {
          v34 = -1;
          v35 = *v43;
          v36 = v43[1] - 1;
          v37 = &v43[5 * v36 + 2];
          while ( v36 >= 0 )
          {
            v51 = v37[3];
            while ( 1 )
            {
              v38 = *v37;
              if ( (int)*v37 >= v51 )
                break;
              v62 = *(unsigned __int16 *)(2 * v38 + v37[1]);
              v39 = *(_DWORD *)(4 * v62 + v37[2]);
              if ( v39 > v35 )
              {
                if ( v39 < v34 )
                {
                  v34 = *(_DWORD *)(4 * v62 + v37[2]);
                  v42 = v62 + v37[4];
                }
                break;
              }
              *v37 = v38 + 1;
            }
            --v36;
            v37 -= 5;
          }
          *v43 = v34;
          if ( v34 == -1 )
            break;
          if ( v42 > v48 && v42 <= v46 && v34 <= v56 )
          {
            v33 = sub_34CA3A(*(_DWORD *)(a1 + 8));
            if ( v33 != 0 )
              goto LABEL_104;
            v33 = sub_34CA4C(*(_DWORD *)(a1 + 4));
            if ( v33 != 0 )
              goto LABEL_104;
          }
        }
        if ( v46 != *(_DWORD *)(**(_DWORD **)(a1 + 32) + 16)
          || (v28 = sub_34CA5E(*(_DWORD *)(a1 + 4))) == 0 && (a5 == 0 || (v28 = sub_34CA68(*(_DWORD *)(a1 + 4))) == 0) )
        {
          *(_DWORD *)(v57 + 96) = v46;
          v28 = 0;
        }
      }
      sub_352B94(a1);
    }
    if ( v28 != 5 && v28 != 0 )
      goto LABEL_103;
    goto LABEL_56;
  }
  v44 = sub_35FA58(49732);
LABEL_58:
  if ( v44 == 0 || v44 == 5 )
    goto LABEL_60;
LABEL_13:
  if ( v64 != 0 )
    j_memset((void *)(a1 + 52), 0, 0x30u);
  sub_352BDE(a1);
  sub_352B94(a1);
  result = v44;
  *(_BYTE *)(a1 + 45) = 0;
  if ( v44 == 0 )
    return a2 != v58 ? 5 : 0;
  return result;
}


//======================================================================
// sub_36DB58
// address: 0x0036DB58   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_36DB58(int a1, int a2, int a3, int a4)
{
  int v6; // r6
  int v7; // r5

  if ( a1 == 0 )
    return 0;
  v6 = 0;
  v7 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 4) + 28))(*(_DWORD *)(a1 + 4), 4);
  if ( v7 == 0 )
  {
    if ( *(_BYTE *)(a1 + 43) == 0 )
      *(_BYTE *)(a1 + 43) = 1;
    v6 = 0;
    v7 = sub_36D608(a1, 0, nullptr, 0, a2, a3, a4, nullptr, nullptr);
    if ( v7 == 0 )
    {
      sub_34CA86(*(_DWORD *)(a1 + 4));
      v6 = 1;
    }
  }
  sub_352BAA(a1);
  sub_34CA24(*(int **)(a1 + 8));
  if ( v6 != 0 )
  {
    sub_34CB1C();
    sub_34CAC8(*(_DWORD *)a1);
    sub_34CB30();
  }
  sqlite3_free(*(_DWORD *)(a1 + 32));
  sqlite3_free(a1);
  return v7;
}


//======================================================================
// sub_36DC10
// address: 0x0036DC10   size: 0xA2 (162 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0036DC10  PUSH    {R3-R7,LR}
//   0036DC12  MOVS    R3, R0
//   0036DC14  ADDS    R3, #0xC8
//   0036DC16  MOVS    R4, R0
//   0036DC18  LDR     R6, [R3]
//   0036DC1A  BL      sub_34CB1C
//   0036DC1E  MOVS    R3, R4
//   0036DC20  ADDS    R3, #0x88
//   0036DC22  LDR     R5, [R3]
//   0036DC24  CMP     R5, #0
//   0036DC26  BEQ     loc_36DC34
//   0036DC28  LDR     R7, [R5,#0xC]
//   0036DC2A  MOVS    R0, R5
//   0036DC2C  BL      sqlite3_free
//   0036DC30  MOVS    R5, R7
//   0036DC32  B       loc_36DC24
//   0036DC34  MOVS    R7, R4
//   0036DC36  MOVS    R3, R4
//   0036DC38  STRB    R5, [R4,#4]
//   0036DC3A  ADDS    R7, #0xD0
//   0036DC3C  ADDS    R3, #0x98
//   0036DC3E  LDR     R2, [R3]
//   0036DC40  LDRB    R1, [R4,#9]
//   0036DC42  MOVS    R3, R6
//   0036DC44  LDR     R0, [R7]
//   0036DC46  BL      sub_36DB58
//   0036DC4A  STR     R5, [R7]
//   0036DC4C  MOVS    R0, R4
//   0036DC4E  BL      sub_356D1C
//   0036DC52  LDRB    R3, [R4,#0xE]
//   0036DC54  CMP     R3, #0
//   0036DC56  BEQ     loc_36DC60
//   0036DC58  MOVS    R0, R4
//   0036DC5A  BL      sub_356D36
//   0036DC5E  B       loc_36DC7C
//   0036DC60  LDR     R3, [R4,#0x40]
//   0036DC62  LDR     R3, [R3]
//   0036DC64  CMP     R3, #0
//   0036DC66  BEQ     loc_36DC76
//   0036DC68  MOVS    R0, R4
//   0036DC6A  BL      sub_352AE8
//   0036DC6E  MOVS    R1, R0
//   0036DC70  MOVS    R0, R4
//   0036DC72  BL      sub_34DFE0
//   0036DC76  MOVS    R0, R4
//   0036DC78  BL      sub_3677A4
//   0036DC7C  BL      sub_34CB30
//   0036DC80  LDR     R0, [R4,#0x40]
//   0036DC82  BL      sub_34CA24
//   0036DC86  LDR     R0, [R4,#0x3C]
//   0036DC88  BL      sub_34CA24
//   0036DC8C  MOVS    R0, R6
//   0036DC8E  BL      sub_351FB4
//   0036DC92  MOVS    R3, R4
//   0036DC94  ADDS    R3, #0xCC
//   0036DC96  LDR     R3, [R3]
//   0036DC98  LDR     R0, [R3,#0x28]
//   0036DC9A  CMP     R0, #0
//   0036DC9C  BEQ     loc_36DCA8
//   0036DC9E  LDR     R3, =(dword_471638 - 0x36DCA4)
//   0036DCA0  ADD     R3, PC; dword_471638
//   0036DCA2  ADDS    R3, #(off_4716CC - 0x471638)
//   0036DCA4  LDR     R3, [R3]
//   0036DCA6  BLX     R3
//   0036DCA8  MOVS    R0, R4
//   0036DCAA  BL      sqlite3_free
//   0036DCAE  MOVS    R0, #0
//   0036DCB0  POP     {R3-R7,PC}

//======================================================================
// sub_36DCB8
// address: 0x0036DCB8   size: 0x780 (1920 bytes)
//======================================================================
int (__fastcall *__fastcall sub_36DCB8(int a1, char *a2, int a3, int *a4, char a5, unsigned int a6))(int a1, int a2)
{
  _BOOL4 v6; // r5
  _BYTE *v7; // r0
  int v8; // r7
  int v9; // r4
  _BYTE *v10; // r0
  void *v11; // r5
  unsigned int v12; // r0
  int v13; // r6
  int v14; // r6
  _DWORD *i; // r4
  int v16; // r3
  int v17; // r2
  int v18; // r1
  _BYTE *v19; // r6
  int v20; // r3
  int v21; // r1
  size_t v22; // r5
  int v23; // r4
  _BYTE *v24; // r0
  char *j; // r5
  unsigned int v26; // r5
  _DWORD *v27; // r0
  int v28; // r4
  unsigned int v29; // r0
  unsigned int v30; // r0
  char *v31; // r0
  void *v32; // r0
  unsigned int v33; // r3
  int v34; // r3
  int v35; // r5
  char v36; // r3
  __int64 v37; // r0
  _DWORD *v38; // r3
  int v39; // r2
  int v40; // r5
  _DWORD *v41; // r0
  int v42; // r0
  _DWORD *v43; // r3
  _DWORD *v44; // r0
  int v45; // r5
  int v46; // r3
  int v47; // r4
  unsigned int v48; // r0
  int v49; // r4
  int v50; // r0
  int v51; // r0
  int k; // r2
  int v53; // r3
  unsigned int v54; // r1
  int v55; // r2
  int v56; // r4
  int v58; // r4
  _DWORD *v59; // [sp+3Ch] [bp-B0h]
  int (__fastcall *v60)(int, int); // [sp+3Ch] [bp-B0h]
  _DWORD *v62; // [sp+44h] [bp-A8h]
  char v63; // [sp+48h] [bp-A4h]
  unsigned int v64; // [sp+48h] [bp-A4h]
  char v65; // [sp+4Ch] [bp-A0h]
  unsigned int v67; // [sp+50h] [bp-9Ch]
  char *v68; // [sp+54h] [bp-98h]
  int v70; // [sp+5Ch] [bp-90h]
  int v71; // [sp+60h] [bp-8Ch]
  unsigned int v72; // [sp+64h] [bp-88h]
  char *v73; // [sp+68h] [bp-84h]
  int v74; // [sp+6Ch] [bp-80h]
  unsigned int v76[27]; // [sp+78h] [bp-74h] BYREF

  if ( a2 == nullptr )
    goto LABEL_5;
  v6 = *a2 == 0;
  if ( j_strcmp(a2, ":memory:") == 0 )
  {
    v58 = v6;
LABEL_133:
    a5 |= 2u;
    v74 = 1;
    goto LABEL_8;
  }
  v58 = 0;
  if ( v6 )
  {
LABEL_5:
    v58 = 1;
    if ( *(_BYTE *)(a3 + 63) == 2 )
      goto LABEL_133;
  }
  if ( (a6 & 0x80) != 0 )
    goto LABEL_133;
  v74 = 0;
LABEL_8:
  if ( (a6 & 0x100) != 0 && (v74 | v58) != 0 )
    a6 = a6 & 0xFFFFFCFF | 0x200;
  v7 = sub_351CC4(0x2Cu);
  v8 = (int)v7;
  if ( v7 == nullptr )
    return (int (__fastcall *)(int, int))&byte_7;
  v7[8] = 0;
  *((_DWORD *)v7 + 7) = v7;
  *(_DWORD *)v7 = a3;
  *((_DWORD *)v7 + 8) = 1;
  if ( v58 != 0 )
  {
    v70 = 0;
    goto LABEL_37;
  }
  if ( v74 != 0 && (a6 & 0x40) == 0 )
  {
    v70 = 0;
    goto LABEL_37;
  }
  v70 = 0;
  if ( (a6 & 0x20000) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 8) + 1;
    v10 = (_BYTE *)sub_351664(v9);
    v11 = v10;
    *(_BYTE *)(v8 + 9) = 1;
    if ( v10 == nullptr )
    {
      sqlite3_free(v8);
      return (int (__fastcall *)(int, int))&byte_7;
    }
    if ( v74 != 0 )
    {
      v12 = sub_34CF50((unsigned int)a2);
      j_memcpy(v11, a2, v12 + 1);
    }
    else
    {
      *v10 = 0;
      v13 = (*(int (__fastcall **)(int, char *, int, _BYTE *))(a1 + 36))(a1, a2, v9, v10);
      if ( v13 != 0 )
      {
        sqlite3_free(v11);
        sqlite3_free(v8);
        return (int (__fastcall *)(int, int))v13;
      }
    }
    v70 = sub_34CB60(4);
    sqlite3_mutex_enter(v70);
    v14 = sub_34CB60(2);
    sqlite3_mutex_enter(v14);
    for ( i = (_DWORD *)dword_55956C; i != nullptr; i = (_DWORD *)i[17] )
    {
      v59 = (_DWORD *)*i;
      if ( j_strcmp((const char *)v11, *(const char **)(*i + 168)) == 0 && *v59 == a1 )
      {
        v16 = *(_DWORD *)(a3 + 20) - 1;
        v17 = 16 * v16;
        while ( v16 >= 0 )
        {
          v18 = *(_DWORD *)(*(_DWORD *)(a3 + 16) + v17 + 4);
          if ( v18 != 0 && *(_DWORD **)(v18 + 4) == i )
          {
            sqlite3_mutex_leave(v14);
            sqlite3_mutex_leave(v70);
            sqlite3_free(v11);
            sqlite3_free(v8);
            return (int (__fastcall *)(int, int))(&word_12 + 1);
          }
          --v16;
          v17 -= 16;
        }
        *(_DWORD *)(v8 + 4) = i;
        ++i[16];
        break;
      }
    }
    sqlite3_mutex_leave(v14);
    sqlite3_free(v11);
    if ( i != nullptr )
      goto LABEL_108;
  }
LABEL_37:
  v19 = sub_351CC4(0x54u);
  if ( v19 != nullptr )
  {
    v76[0] = 1024;
    v20 = *(_DWORD *)(a1 + 4);
    v72 = 40;
    if ( v20 > 40 )
      v72 = (v20 + 7) & 0xFFFFFFF8;
    *(_DWORD *)v19 = 0;
    if ( (a5 & 2) != 0 )
    {
      if ( a2 == nullptr )
      {
        v64 = 0;
        v62 = nullptr;
LABEL_134:
        v71 = 1;
        v68 = nullptr;
        v22 = 0;
        v73 = nullptr;
        goto LABEL_61;
      }
      v71 = 1;
      if ( *a2 != 0 )
      {
        v62 = sub_351BC8(0, a2);
        if ( v62 != nullptr )
        {
          v64 = sub_34CF50((unsigned int)v62);
          goto LABEL_134;
        }
LABEL_106:
        v60 = (int (__fastcall *)(int, int))&byte_7;
LABEL_135:
        if ( *(_DWORD *)v19 != 0 )
          sub_36DC10(*(_DWORD *)v19, v21);
        goto LABEL_127;
      }
    }
    else
    {
      if ( a2 == nullptr )
      {
        v68 = nullptr;
        v71 = 0;
        v22 = 0;
        goto LABEL_60;
      }
      v71 = 0;
    }
    v22 = (unsigned __int8)*a2;
    if ( *a2 != 0 )
    {
      v23 = *(_DWORD *)(a1 + 8) + 1;
      v24 = (_BYTE *)sub_3516AC(0, 2 * v23);
      v62 = v24;
      if ( v24 != nullptr )
      {
        *v24 = 0;
        v60 = (int (__fastcall *)(int, int))(*(int (__fastcall **)(int, char *, int, _BYTE *))(a1 + 36))(
                                              a1,
                                              a2,
                                              v23,
                                              v24);
        v64 = sub_34CF50((unsigned int)v62);
        v73 = &a2[sub_34CF50((unsigned int)a2) + 1];
        for ( j = v73; *j != 0; j = (char *)(v26 + sub_34CF50(v26) + 1) )
          v26 = (unsigned int)&j[sub_34CF50((unsigned int)j) + 1];
        v22 = j + 1 - v73;
        if ( v60 != nullptr
          || (v68 = a2, (signed int)(v64 + 7) >= *(_DWORD *)(a1 + 8))
          && (v68 = a2, (v60 = (int (__fastcall *)(int, int))sub_35ECC0(44137)) != nullptr) )
        {
          sub_354940(nullptr, v62);
          goto LABEL_135;
        }
LABEL_61:
        v27 = sub_351CC4(((*(_DWORD *)(a1 + 4) + 7) & 0xFFFFFFF8) + 281 + 2 * v72 + v64 + v64 + v64 + v22);
        v28 = (int)v27;
        if ( v27 == nullptr )
        {
          sub_354940(nullptr, v62);
          goto LABEL_106;
        }
        v27[51] = v27 + 54;
        v27[15] = v27 + 66;
        v29 = (unsigned int)v27 + ((*(_DWORD *)(a1 + 4) + 7) & 0xFFFFFFF8) + 264;
        *(_DWORD *)(v28 + 68) = v29;
        v30 = v29 + v72;
        *(_DWORD *)(v28 + 64) = v30;
        v31 = (char *)(v30 + v72);
        *(_DWORD *)(v28 + 168) = v31;
        if ( v62 != nullptr )
        {
          *(_DWORD *)(v28 + 172) = &v31[v64 + 1 + v22];
          j_memcpy(v31, v62, v64);
          if ( v22 != 0 )
            j_memcpy((void *)(*(_DWORD *)(v28 + 168) + v64 + 1), v73, v22);
          j_memcpy(*(void **)(v28 + 172), v62, v64);
          j_memcpy((void *)(*(_DWORD *)(v28 + 172) + v64), "-journal", 0xAu);
          v32 = (void *)(*(_DWORD *)(v28 + 172) + v64 + 9);
          *(_DWORD *)(v28 + 212) = v32;
          j_memcpy(v32, v62, v64);
          strcpy((char *)(*(_DWORD *)(v28 + 212) + v64), "-wal");
          sub_354940(nullptr, v62);
        }
        *(_DWORD *)v28 = a1;
        *(_DWORD *)(v28 + 144) = a6;
        if ( v68 != nullptr && *v68 != 0 )
        {
          v76[1] = 0;
          v60 = (int (__fastcall *)(int, int))sub_34CAB4(a1, *(_DWORD *)(v28 + 168), *(_DWORD *)(v28 + 60), a6);
          v65 = 0;
          if ( v60 == nullptr )
          {
            sub_35666A(v28);
            v33 = *(_DWORD *)(v28 + 148);
            if ( v76[0] < v33 )
            {
              if ( v33 <= 0x2000 )
                v76[0] = *(_DWORD *)(v28 + 148);
              else
                v76[0] = 0x2000;
            }
          }
          if ( v60 != nullptr )
            goto LABEL_78;
          v34 = 0;
        }
        else
        {
          *(_BYTE *)(v28 + 16) = 4;
          v34 = 1;
          *(_BYTE *)(v28 + 15) = 1;
          v65 = a6 & 1;
        }
        v63 = v34;
        v60 = (int (__fastcall *)(int, int))sub_356DE0(v28, v76, -1, v34);
        if ( v60 != nullptr )
        {
LABEL_78:
          sub_34CA24(*(int **)(v28 + 60));
          sqlite3_free(v28);
          goto LABEL_135;
        }
        v67 = v76[0];
        if ( v71 == 0 )
          v60 = sub_36C4F0;
        v35 = *(_DWORD *)(v28 + 204);
        j_memset((void *)v35, 0, 0x30u);
        *(_DWORD *)(v35 + 24) = 80;
        *(_DWORD *)(v35 + 20) = v67;
        *(_BYTE *)(v35 + 28) = v71 ^ 1;
        *(_DWORD *)(v35 + 32) = v60;
        *(_DWORD *)(v35 + 16) = 100;
        *(_BYTE *)(v35 + 29) = 2;
        *(_DWORD *)(v35 + 36) = v28;
        *(_BYTE *)(v28 + 6) = (a5 & 1) == 0;
        *(_DWORD *)(v28 + 156) = 0x3FFFFFFF;
        *(_BYTE *)(v28 + 12) = v63;
        *(_BYTE *)(v28 + 4) = v63;
        *(_BYTE *)(v28 + 17) = v63;
        *(_BYTE *)(v28 + 14) = v71;
        *(_BYTE *)(v28 + 13) = v65;
        *(_BYTE *)(v28 + 7) = v63;
        if ( v63 == 0 )
        {
          *(_BYTE *)(v28 + 8) = 1;
          *(_BYTE *)(v28 + 11) = 2;
          *(_BYTE *)(v28 + 10) = 34;
          *(_BYTE *)(v28 + 9) = 2;
        }
        *(_WORD *)(v28 + 140) = 80;
        *(_DWORD *)(v28 + 160) = -1;
        *(_DWORD *)(v28 + 164) = -1;
        sub_35666A(v28);
        v36 = 2;
        if ( (a5 & 1) == 0 )
        {
          if ( v71 == 0 )
            goto LABEL_87;
          v36 = 4;
        }
        *(_BYTE *)(v28 + 5) = v36;
LABEL_87:
        *(_DWORD *)(v28 + 196) = sub_35FC68;
        *(_DWORD *)v19 = v28;
        LODWORD(v37) = *(_DWORD *)v19;
        v38 = (_DWORD *)(*(_DWORD *)v19 + 128);
        HIDWORD(v37) = *(_DWORD *)(a3 + 40);
        v39 = *(_DWORD *)(a3 + 44);
        *v38 = HIDWORD(v37);
        v38[1] = v39;
        sub_34DFF8(v37);
        v40 = *(_DWORD *)v19;
        j_memset(&v76[2], 0, 0x64u);
        v41 = *(_DWORD **)(v40 + 60);
        if ( *v41 != 0 )
        {
          v42 = sub_34CA3A((int)v41);
          v60 = (int (__fastcall *)(int, int))v42;
          if ( v42 != 522 && v42 != 0 )
            goto LABEL_135;
        }
        v43 = *(_DWORD **)v19;
        v19[16] = a5;
        *((_DWORD *)v19 + 1) = a3;
        v43[44] = sub_34FA98;
        v43[45] = v19;
        v44 = (_DWORD *)v43[15];
        if ( *v44 != 0 )
          sub_34CA86((int)v44);
        *(_DWORD *)(v8 + 4) = v19;
        v45 = *(_DWORD *)v19;
        *((_DWORD *)v19 + 2) = 0;
        *((_DWORD *)v19 + 3) = 0;
        if ( *(_BYTE *)(v45 + 13) != 0 )
          *((_WORD *)v19 + 11) |= 1u;
        v46 = (LOBYTE(v76[6]) << 8) | (BYTE1(v76[6]) << 16);
        *((_DWORD *)v19 + 8) = v46;
        if ( (unsigned int)(v46 - 512) > 0xFE00 || (v46 & (v46 - 1)) != 0 )
        {
          v47 = 0;
          *((_DWORD *)v19 + 8) = 0;
          if ( a2 != nullptr )
          {
            if ( v74 == 0 )
            {
              v19[17] = 0;
              v19[18] = 0;
            }
          }
          else
          {
            v47 = 0;
          }
        }
        else
        {
          v47 = LOBYTE(v76[7]);
          *((_WORD *)v19 + 11) |= 2u;
          v19[17] = sub_34D8D8(&v76[15]) != 0;
          v48 = sub_34D8D8(&v76[18]);
          v46 = v48 - 1;
          v19[18] = v48 != 0;
        }
        v60 = (int (__fastcall *)(int, int))sub_356DE0(v45, v19 + 32, v47, v46);
        if ( v60 != nullptr )
          goto LABEL_135;
        *((_DWORD *)v19 + 9) = *((_DWORD *)v19 + 8) - v47;
        if ( *(_BYTE *)(v8 + 9) != 0 )
        {
          *((_DWORD *)v19 + 16) = 1;
          v49 = sub_34CB60(2);
          if ( dword_47163C != 0 )
          {
            v50 = sub_34CB60(0);
            *((_DWORD *)v19 + 14) = v50;
            if ( v50 == 0 )
            {
              *(_BYTE *)(a3 + 64) = 0;
              goto LABEL_106;
            }
          }
          sqlite3_mutex_enter(v49);
          v51 = dword_55956C;
          dword_55956C = (int)v19;
          *((_DWORD *)v19 + 17) = v51;
          sqlite3_mutex_leave(v49);
        }
LABEL_108:
        if ( *(_BYTE *)(v8 + 9) != 0 )
        {
          for ( k = 0; k < *(_DWORD *)(a3 + 20); ++k )
          {
            v53 = *(_DWORD *)(*(_DWORD *)(a3 + 16) + 16 * k + 4);
            if ( v53 != 0 && *(_BYTE *)(v53 + 9) != 0 )
            {
              while ( *(_DWORD *)(v53 + 24) != 0 )
                v53 = *(_DWORD *)(v53 + 24);
              v54 = *(_DWORD *)(v8 + 4);
              if ( v54 >= *(_DWORD *)(v53 + 4) )
              {
                while ( 1 )
                {
                  v55 = *(_DWORD *)(v53 + 20);
                  if ( v55 == 0 || *(_DWORD *)(v55 + 4) >= v54 )
                    break;
                  v53 = *(_DWORD *)(v53 + 20);
                }
                *(_DWORD *)(v8 + 20) = v55;
                *(_DWORD *)(v8 + 24) = v53;
                if ( v55 != 0 )
                  *(_DWORD *)(v55 + 24) = v8;
                *(_DWORD *)(v53 + 20) = v8;
              }
              else
              {
                *(_DWORD *)(v8 + 20) = v53;
                *(_DWORD *)(v8 + 24) = 0;
                *(_DWORD *)(v53 + 24) = v8;
              }
              break;
            }
          }
        }
        *a4 = v8;
        v56 = *(_DWORD *)(v8 + 4);
        sub_3574C2(v8);
        sub_35655E(v8);
        if ( *(_DWORD *)(v56 + 48) == 0 )
          sub_3571A8(*(_DWORD *)(**(_DWORD **)(v8 + 4) + 204), 2000);
        v60 = nullptr;
        goto LABEL_128;
      }
      goto LABEL_106;
    }
    v68 = a2;
LABEL_60:
    v73 = (char *)v22;
    v64 = v22;
    v62 = (_DWORD *)v22;
    goto LABEL_61;
  }
  v60 = (int (__fastcall *)(int, int))&byte_7;
LABEL_127:
  sqlite3_free(v19);
  sqlite3_free(v8);
  *a4 = 0;
LABEL_128:
  if ( v70 != 0 )
    sqlite3_mutex_leave(v70);
  return v60;
}


//======================================================================
// sub_36E438
// address: 0x0036E438   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_36E438(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int (__fastcall *v5)(int, int); // r5
  int v7; // r0
  int v9; // [sp+Ch] [bp-4h] BYREF

  v9 = a4;
  v4 = *(_DWORD *)a1;
  v5 = nullptr;
  if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 16) + 20) == 0 )
  {
    v5 = nullptr;
    if ( *(_BYTE *)(a1 + 454) == 0 )
    {
      v5 = sub_36DCB8(*(_DWORD *)v4, (char *)*(unsigned __int8 *)(a1 + 454), v4, &v9, *(_BYTE *)(a1 + 454), 0x21Eu);
      if ( v5 != nullptr )
      {
        sub_360E94((int *)a1, (int)"unable to open a temporary database file for storing temporary tables");
        *(_DWORD *)(a1 + 12) = v5;
        return 1;
      }
      v7 = v9;
      *(_DWORD *)(*(_DWORD *)(v4 + 16) + 20) = v9;
      if ( sub_357E18(v7, *(_DWORD *)(v4 + 72), -1, 0) == 7 )
      {
        *(_BYTE *)(v4 + 64) = 1;
        return 1;
      }
    }
  }
  return (int)v5;
}


//======================================================================
// sub_36E4A4
// address: 0x0036E4A4   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_36E4A4(int a1, int a2, unsigned __int8 *a3)
{
  int v6; // r0
  int v7; // r6
  _DWORD *v8; // r0
  int v9; // r1
  int v10; // r2
  int v11; // r3
  _DWORD *v12; // r4
  __int64 v13; // r0
  int result; // r0
  int v15; // [sp+4h] [bp-8h]

  v6 = sub_34EBAE(a2, a3);
  v7 = v6;
  if ( v6 != 1 )
  {
    if ( v6 < 0 )
    {
      sub_36024C((unsigned int)a1 | 0x100000000LL, (int)"unknown database %s", (const char *)a3);
      return 0;
    }
    return *(_DWORD *)(*(_DWORD *)(a2 + 16) + 16 * v7 + 4);
  }
  v8 = sub_351894(a1, 0x21Cu);
  v12 = v8;
  if ( v8 == nullptr )
  {
    sub_36024C((unsigned int)a1 | 0x700000000LL, (int)"out of memory");
    return 0;
  }
  *v8 = a2;
  v15 = 0;
  if ( sub_36E438((int)v8, v9, v10, v11) != 0 )
  {
    LODWORD(v13) = a1;
    HIDWORD(v13) = v12[3];
    sub_36024C(v13, (int)"%s", (const char *)v12[1]);
    v15 = 1;
  }
  sub_354940((_DWORD *)a1, (_DWORD *)v12[1]);
  sub_355228(v12);
  sub_354940((_DWORD *)a1, v12);
  result = 0;
  if ( v15 == 0 )
    return *(_DWORD *)(*(_DWORD *)(a2 + 16) + 16 * v7 + 4);
  return result;
}


//======================================================================
// sub_36E5E0
// address: 0x0036E5E0   size: 0x40 (64 bytes)
//======================================================================
int *__fastcall sub_36E5E0(int *result, int a2)
{
  int v2; // r2
  int v3; // r5
  int v4; // r2
  int v5; // r3

  if ( result[103] != 0 )
    result = (int *)result[103];
  v2 = result[84];
  v3 = *result;
  if ( (v2 & (1 << a2)) == 0 )
  {
    result[84] = v2 | (1 << a2);
    v4 = **(_DWORD **)(*(_DWORD *)(v3 + 16) + 16 * a2 + 12);
    v5 = (int)&result[a2 + 84];
    *(_DWORD *)(v5 + 4) = v4;
    if ( a2 == 1 )
      return (int *)sub_36E438((int)result, 1, v4, v5);
  }
  return result;
}


//======================================================================
// sub_36E620
// address: 0x0036E620   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_36E620(int *a1, char a2, char a3)
{
  int *v3; // r4
  int *result; // r0

  v3 = (int *)a1[103];
  if ( v3 == nullptr )
    v3 = a1;
  result = sub_36E5E0(a1, a3);
  v3[83] |= 1 << a3;
  *((_BYTE *)v3 + 22) |= a2;
  return result;
}


//======================================================================
// sub_36E650
// address: 0x0036E650   size: 0xE4 (228 bytes)
//======================================================================
int *__fastcall sub_36E650(int *a1, _DWORD **a2)
{
  int v4; // r0
  unsigned __int8 *v5; // r7
  unsigned int v6; // r0
  int *result; // r0
  int *v8; // r5
  int v9; // [sp+10h] [bp-Ch]
  int v10; // [sp+14h] [bp-8h]

  v4 = sub_34F2A0(*a1, (int)a2[5]);
  v5 = (unsigned __int8 *)a2[1];
  v9 = v4;
  v6 = sub_34CF50((unsigned int)v5);
  sub_34DA7E(a2[6] + 2, v5, v6);
  result = (int *)sub_360F08((int)a1);
  if ( result == nullptr )
  {
    result = (int *)sub_360F08((int)a1);
    if ( result == nullptr )
    {
      result = sub_35A956((int)a1);
      v8 = result;
      if ( result != nullptr )
      {
        sub_36E620(a1, 0, v9);
        sub_35A9AC((int)a1, v9);
        v10 = sub_35B22E(v8, 9, "i");
        sub_355AEA(v8, v10 + 1, *a2, 0);
        sub_355AEA(v8, v10 + 4, "trigger", -2);
        sub_35AC42(a1, v9);
        sub_35AAF0(v8, 58, 0, 0);
        result = (int *)sub_35A9FC(v8, 122, v9, 0, 0, *a2, 0);
        if ( a1[19] <= 2 )
          a1[19] = 3;
      }
    }
  }
  return result;
}


//======================================================================
// sub_36E744
// address: 0x0036E744   size: 0x3C (60 bytes)
//======================================================================
int *__fastcall sub_36E744(int *result, _BYTE *a2)
{
  int v2; // r5
  int *v3; // r6
  int i; // r4
  int v6; // r3

  v2 = *result;
  v3 = result;
  for ( i = 0; i < *(_DWORD *)(v2 + 20); ++i )
  {
    v6 = *(_DWORD *)(v2 + 16) + 16 * i;
    if ( *(_DWORD *)(v6 + 4) != 0
      && (a2 == nullptr || (result = (int *)sqlite3_stricmp(a2, *(unsigned __int8 **)v6)) == nullptr) )
    {
      result = sub_36E5E0(v3, i);
    }
  }
  return result;
}


//======================================================================
// sub_36E780
// address: 0x0036E780   size: 0x228 (552 bytes)
//======================================================================
int __fastcall sub_36E780(int *a1, _DWORD *a2, int *a3)
{
  int v4; // r1
  int *v6; // r3
  _DWORD *v7; // r2
  int v8; // r6
  int v9; // r3
  unsigned __int8 *v10; // r5
  _BOOL4 v11; // r0
  int v12; // r5
  int v13; // r5
  unsigned int v14; // r5
  int v15; // r3
  int v16; // r2
  int v17; // r3
  int v19; // [sp+Ch] [bp-30h]
  int v20; // [sp+10h] [bp-2Ch]
  int v21; // [sp+10h] [bp-2Ch]
  __int16 v23; // [sp+18h] [bp-24h]
  _DWORD *v24; // [sp+1Ch] [bp-20h]
  int v25; // [sp+20h] [bp-1Ch]
  int v26; // [sp+28h] [bp-14h]
  unsigned int v27; // [sp+2Ch] [bp-10h]
  int **v28; // [sp+30h] [bp-Ch]
  _BOOL4 v29; // [sp+34h] [bp-8h]

  v4 = a1[18];
  a1[18] = v4 + 1;
  v25 = v4;
  v24 = sub_35A956((int)a1);
  v6 = nullptr;
  if ( (a2[1] & 0x800) != 0 )
    v6 = (int *)a2[5];
  if ( a1[17] == 0 && v6 != nullptr && v6[15] == 0 && (*((_WORD *)v6 + 3) & 5) == 0 && v6[17] == 0 && v6[11] == 0 )
  {
    v7 = (_DWORD *)v6[10];
    if ( *v7 == 1 && v7[7] == 0 )
    {
      v8 = v7[6];
      if ( v8 != 0 && (*(_BYTE *)(v8 + 44) & 0x10) == 0 )
      {
        v9 = *v6;
        v19 = *(_DWORD *)v9;
        if ( *(_DWORD *)v9 == 1 )
        {
          v10 = **(unsigned __int8 ***)(v9 + 8);
          if ( *v10 == 154 )
          {
            v23 = *((_WORD *)v10 + 16);
            v26 = *a1;
            v21 = (__int16)sub_34F2A0(*a1, *(_DWORD *)(v8 + 68));
            sub_36E5E0(a1, v21);
            sub_35A7C8((int)a1, v21, *(unsigned int *)(v8 + 32), *(_DWORD *)v8);
            if ( v23 < 0 )
            {
              v14 = sub_35AADA((int)a1);
              sub_361E26(a1, v25, v21, v8, 52);
              sub_34E46E((int)v24, v14);
LABEL_41:
              a2[7] = v25;
              return v19;
            }
            v28 = sub_362692(a1, a2[3], (int)v10);
            v11 = sub_34EDE8((int)a2, *(unsigned __int8 *)(*(_DWORD *)(v8 + 4) + 24 * v23 + 21));
            v12 = *(_DWORD *)(v8 + 8);
            v29 = v11;
            v19 = 0;
            while ( v12 != 0 )
            {
              if ( v19 != 0 )
                goto LABEL_41;
              if ( !v29 )
                goto LABEL_20;
              if ( **(__int16 **)(v12 + 4) == v23
                && sub_355EDA(
                     v26,
                     *(unsigned __int8 *)(*(_DWORD *)(*(_DWORD *)(v26 + 16) + 12) + 77),
                     **(unsigned __int8 ***)(v12 + 32),
                     0) == v28
                && (a3 != nullptr || *(_WORD *)(v12 + 50) == 1 && *(_BYTE *)(v12 + 54) != 0) )
              {
                v27 = sub_35AADA((int)a1);
                sub_35A902(v24, 52, v25, *(_DWORD *)(v12 + 44), v21);
                sub_361E0C(a1, v12);
                v19 = **(unsigned __int8 **)(v12 + 28) + 3;
                if ( a3 != nullptr )
                {
                  v15 = *(_DWORD *)(v8 + 4) + 24 * v23;
                  v16 = *(unsigned __int8 *)(v15 + 20);
                  if ( *(_BYTE *)(v15 + 20) == 0 )
                  {
                    v17 = a1[19] + 1;
                    a1[19] = v17;
                    *a3 = v17;
                    sub_35AAF0(v24, 28, v16, v17);
                  }
                }
                sub_34E46E((int)v24, v27);
              }
              v12 = *(_DWORD *)(v12 + 20);
            }
            if ( v19 != 0 )
              goto LABEL_41;
          }
        }
      }
    }
  }
LABEL_20:
  v20 = a1[107];
  if ( a3 != nullptr )
  {
    v13 = a1[19] + 1;
    a1[19] = v13;
    *a3 = v13;
    sub_35AAF0(v24, 28, 0, v13);
  }
  else
  {
    a1[107] = 0;
    if ( *(__int16 *)(a2[3] + 32) >= 0 )
    {
      v13 = 0;
      v19 = 2;
      goto LABEL_27;
    }
    v13 = 0;
    if ( (a2[1] & 0x800) == 0 )
    {
      v19 = 1;
      goto LABEL_27;
    }
  }
  v19 = 2;
LABEL_27:
  sub_372288(a1, a2, v13, v19 == 1);
  a1[107] = v20;
  return v19;
}


//======================================================================
// sub_36E9A8
// address: 0x0036E9A8   size: 0x10E (270 bytes)
//======================================================================
int __fastcall sub_36E9A8(int *a1, unsigned __int8 **a2, _DWORD *a3, int a4, _BOOL4 a5, int a6)
{
  _DWORD *v6; // r7
  int v8; // r2
  int v10; // r6
  int v11; // r2
  int v12; // r7
  char v13; // r1
  _DWORD *v14; // r1
  int v15; // r2
  int v16; // r0
  int v17; // r5
  int v18; // r0
  _DWORD *v20; // [sp+Ch] [bp-10h]
  int v21; // [sp+10h] [bp-Ch]

  v6 = *a2;
  v8 = **a2;
  v20 = (_DWORD *)a1[2];
  if ( v8 == 79 )
  {
    a6 = sub_372578();
  }
  else if ( v8 == 76 )
  {
    sub_35AAF0(v20, 28, 0, a6);
  }
  else
  {
    v10 = a3[14];
    if ( (*(_DWORD *)(v10 + 36) & 0x400) == 0 )
    {
      v11 = *(_DWORD *)(v10 + 28);
      if ( v11 != 0 && *(_BYTE *)(*(_DWORD *)(v11 + 28) + a4) != 0 )
        a5 = !a5;
    }
    v21 = sub_36E780(a1, v6, nullptr);
    if ( v21 == 4 )
      a5 = !a5;
    v12 = v6[7];
    v13 = 105;
    if ( a5 )
      v13 = 102;
    sub_35AAF0(v20, v13, v12, 0);
    *(_DWORD *)(v10 + 36) |= 0x800u;
    if ( a3[12] == 0 )
      a3[4] = sub_35A856(v20[6]);
    v14 = (_DWORD *)a3[13];
    v15 = a3[12] + 1;
    a3[12] = v15;
    v16 = sub_359628((_DWORD *)*a1, v14, 12 * v15);
    a3[13] = v16;
    if ( v16 != 0 )
    {
      v17 = v16 + 12 * a3[12] - 12;
      *(_DWORD *)v17 = v12;
      if ( v21 == 1 )
        v18 = sub_35AAF0(v20, 100, v12, a6);
      else
        v18 = sub_35A902(v20, 46, v12, 0, a6);
      *(_DWORD *)(v17 + 4) = v18;
      *(_BYTE *)(v17 + 8) = !a5 + 6;
      sub_35AACE(v20, 76, a6);
    }
    else
    {
      a3[12] = 0;
    }
  }
  sub_34F758((int)a3, (int)a2);
  return a6;
}


//======================================================================
// sub_36EAB8
// address: 0x0036EAB8   size: 0x2EC (748 bytes)
//======================================================================
int __fastcall sub_36EAB8(int *a1, int *a2, _DWORD *a3, int a4, int *a5, __int16 a6)
{
  int v6; // r6
  __int16 v7; // r3
  unsigned __int64 v8; // r0
  _DWORD *v9; // r0
  _DWORD *v10; // r7
  int v11; // r4
  _DWORD *v12; // r0
  int v13; // r1
  _DWORD *v14; // r6
  int v15; // r3
  int v16; // r2
  int v17; // r0
  int v18; // r2
  int v19; // r0
  int v20; // r4
  int v22; // r6
  int v23; // r5
  _DWORD *v24; // r0
  int i; // r4
  int v26; // r5
  _DWORD *v27; // r0
  int **v28; // r0
  int v30; // [sp+ECh] [bp-C0h]
  int v31; // [sp+F0h] [bp-BCh]
  unsigned __int8 *v32; // [sp+F8h] [bp-B4h]
  int v33; // [sp+100h] [bp-ACh]
  unsigned __int8 *v34; // [sp+108h] [bp-A4h]
  int v37; // [sp+13Ch] [bp-70h]
  int v38; // [sp+140h] [bp-6Ch]
  int v40; // [sp+150h] [bp-5Ch]
  __int16 v41; // [sp+154h] [bp-58h]
  int v42; // [sp+160h] [bp-4Ch]
  _DWORD v43[5]; // [sp+194h] [bp-18h] BYREF

  v6 = *a1;
  v41 = a6;
  v42 = a1[2];
  v37 = *a1;
  j_memset(v43, 0, sizeof(v43));
  v7 = *(_WORD *)(v6 + 60);
  v43[2] = a4;
  if ( (v7 & 0x20) != 0 )
    v41 = a6 & 0xFBFF;
  v38 = *a2;
  if ( *a2 > 64 )
  {
    v8 = sub_360E94(a1, (int)"at most %d tables in a join", 64);
    sub_370338(v8, HIDWORD(v8));
  }
  if ( (v41 & 0x40) != 0 )
    v38 = 1;
  v9 = sub_351894(v37, 72 * (v38 - 1) + 880);
  v10 = v9;
  v11 = *(unsigned __int8 *)(v37 + 64);
  if ( *(_BYTE *)(v37 + 64) != 0 )
  {
    v12 = sub_354940((_DWORD *)v37, v9);
    v9 = (_DWORD *)sub_370338(v12, v13);
  }
  v9[16] = -1;
  v9[15] = -1;
  *((_BYTE *)v9 + 40) = v38;
  v14 = &v10[18 * v38 + 184];
  *v9 = a1;
  v9[1] = a2;
  v9[2] = a4;
  v9[3] = a5;
  v10[13] = sub_35A856(*(_DWORD *)(v42 + 24));
  *((_WORD *)v10 + 17) = v41;
  v10[14] = a1[107];
  v14[11] = v14 + 13;
  *((_WORD *)v14 + 21) = 4;
  *((_WORD *)v14 + 20) = v11;
  v14[9] = v11;
  v10[17] = v11;
  v10[82] = v10;
  v10[86] = 8;
  v40 = (int)(v10 + 82);
  v43[1] = v10 + 82;
  v10[83] = v11;
  v10[85] = v11;
  v10[87] = v10 + 88;
  v43[0] = v10;
  v43[3] = v14;
  sub_356314((int)(v10 + 82), a3, 72);
  while ( v11 < *(_DWORD *)(v43[1] + 12) )
  {
    if ( v38 == 0
      || sub_35304C(*(_DWORD **)(48 * v11 + *(_DWORD *)(v43[1] + 20)), (int (*)(void))((char *)&dword_0 + 3)) != nullptr )
    {
      sub_37384A(a1, *(_DWORD *)(*(_DWORD *)(v43[1] + 20) + 48 * v11), v10[13], 8);
      *(_BYTE *)(*(_DWORD *)(v43[1] + 20) + 48 * v11 + 20) |= 4u;
    }
    ++v11;
  }
  if ( v38 == 0 )
  {
    if ( a4 != 0 )
      *((_BYTE *)v10 + 36) = 1;
    if ( (v41 & 0x400) != 0 )
      *((_BYTE *)v10 + 39) = 1;
  }
  v15 = 0;
  while ( v15 < *a2 )
  {
    v16 = 18 * v15++;
    v17 = a2[v16 + 12];
    v18 = v10[17];
    v10[17] = v18 + 1;
    v10[v18 + 18] = v17;
  }
  v19 = sub_374AC0(a2, v40);
  v20 = *(unsigned __int8 *)(v37 + 64);
  if ( *(_BYTE *)(v37 + 64) != 0 )
    sub_370326(v19);
  if ( (v41 & 0x400) != 0 )
  {
    if ( *a2 != 1 )
    {
LABEL_54:
      if ( a4 == 0 )
      {
        *((_WORD *)v10 + 17) |= 0x200u;
        v10[2] = a5;
      }
      return sub_36EDA4();
    }
    v31 = a2[12];
    v22 = a2[6];
    v23 = *a5;
    while ( v20 < v23 )
    {
      v24 = sub_34E89C(*(_DWORD **)(20 * v20 + a5[2]));
      if ( *(unsigned __int8 *)v24 == 154 && v24[7] == v31 && *((__int16 *)v24 + 16) < 0 )
        sub_3702BE();
      ++v20;
    }
    for ( i = *(_DWORD *)(v22 + 8); ; i = *(_DWORD *)(i + 20) )
    {
      if ( i == 0 )
        goto LABEL_54;
      v26 = 0;
      if ( *(_BYTE *)(i + 54) != 0 )
        break;
LABEL_53:
      ;
    }
    while ( v26 < *(unsigned __int16 *)(i + 50) )
    {
      v33 = *(__int16 *)(*(_DWORD *)(i + 4) + 2 * v26);
      if ( sub_36286E(v40, v31, v33, 2, -1, 2, i) != nullptr )
        goto LABEL_52;
      v30 = 0;
      v34 = *(unsigned __int8 **)(4 * v26 + *(_DWORD *)(i + 32));
      while ( 1 )
      {
        if ( v30 >= *a5 )
          goto LABEL_49;
        v32 = *(unsigned __int8 **)(20 * v30 + a5[2]);
        v27 = sub_34E89C(v32);
        if ( *(unsigned __int8 *)v27 == 154
          && *((__int16 *)v27 + 16) == *(__int16 *)(*(_DWORD *)(i + 4) + 2 * v26)
          && v27[7] == v31 )
        {
          v28 = sub_3625D4(a1, v32);
          if ( v28 != nullptr && sqlite3_stricmp(*v28, v34) == 0 )
            break;
        }
        ++v30;
      }
      if ( v30 < 0 )
        break;
LABEL_51:
      if ( *(_BYTE *)(*(_DWORD *)(v22 + 4) + 24 * v33 + 20) == 0 )
        break;
LABEL_52:
      ++v26;
    }
LABEL_49:
    if ( v26 != *(unsigned __int16 *)(i + 50) )
      goto LABEL_53;
    sub_3702BE();
    goto LABEL_51;
  }
  return sub_36EDA4();
}


//======================================================================
// sub_36EDA4
// address: 0x0036EDA4   size: 0x2FE (766 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0036EDA4  LDR     R5, [SP,#arg_140]
//   0036EDA6  CMP     R5, #1
//   0036EDA8  BEQ     loc_36EDAC
//   0036EDAA  B       loc_36EF06
//   0036EDAC  LDR     R6, [SP,#arg_194]
//   0036EDAE  LDRH    R3, [R6,#0x22]
//   0036EDB0  STR     R6, [SP,#arg_EC]
//   0036EDB2  LSLS    R0, R3, #0x1A
//   0036EDB4  BPL     loc_36EDB8
//   0036EDB6  B       loc_36EF06
//   0036EDB8  LDR     R4, [R6,#4]
//   0036EDBA  LDR     R5, [R4,#0x18]
//   0036EDBC  STR     R4, [SP,#arg_10C]
//   0036EDBE  MOVS    R3, R5
//   0036EDC0  ADDS    R3, #0x2C ; ','
//   0036EDC2  LDRB    R3, [R3]
//   0036EDC4  LSLS    R6, R3, #0x1B
//   0036EDC6  BPL     loc_36EDCA
//   0036EDC8  B       loc_36EF06
//   0036EDCA  LDR     R3, [R4,#0x48]
//   0036EDCC  CMP     R3, #0
//   0036EDCE  BEQ     loc_36EDD2
//   0036EDD0  B       loc_36EF06
//   0036EDD2  LDR     R4, [R4,#0x30]
//   0036EDD4  LDR     R6, [SP,#arg_EC]
//   0036EDD6  MOVS    R2, #2
//   0036EDD8  STR     R4, [SP,#arg_F0]
//   0036EDDA  LDR     R4, [SP,#arg_1A0]
//   0036EDDC  ADDS    R6, #0x49 ; 'I'
//   0036EDDE  ADDS    R6, #0xFF
//   0036EDE0  STR     R3, [R4,#0x24]
//   0036EDE2  STRH    R3, [R4,#0x1A]
//   0036EDE4  STR     R6, [SP,#arg_F8]
//   0036EDE6  STR     R2, [SP,#arg_8]
//   0036EDE8  MOVS    R6, #0
//   0036EDEA  MOVS    R2, #1
//   0036EDEC  STR     R6, [SP,#arg_0]
//   0036EDEE  STR     R6, [SP,#arg_4]
//   0036EDF0  STR     R3, [SP,#arg_C]
//   0036EDF2  LDR     R0, [SP,#arg_F8]
//   0036EDF4  LDR     R1, [SP,#arg_F0]
//   0036EDF6  NEGS    R2, R2
//   0036EDF8  BL      sub_36286E
//   0036EDFC  CMP     R0, R6
//   0036EDFE  BEQ     loc_36EE12
//   0036EE00  LDR     R3, =0x1101
//   0036EE02  LDR     R5, [SP,#arg_140]
//   0036EE04  STR     R3, [R4,#0x24]
//   0036EE06  LDR     R3, [R4,#0x2C]
//   0036EE08  STR     R0, [R3]
//   0036EE0A  STRH    R5, [R4,#0x28]
//   0036EE0C  STRH    R5, [R4,#0x18]
//   0036EE0E  MOVS    R3, #0x21 ; '!'
//   0036EE10  B       loc_36EEA2
//   0036EE12  MOVS    R0, #0
//   0036EE14  LDR     R5, [R5,#8]
//   0036EE16  STR     R0, [SP,#arg_100]
//   0036EE18  STR     R6, [SP,#arg_108]
//   0036EE1A  B       loc_36EE2A
//   0036EE1C  DCD 0xFFFFFBFF
//   0036EE20  DCD aAtMostDTablesI - 0x36EB06
//   0036EE24  DCD 0x1101
//   0036EE28  LDR     R5, [R5,#0x14]
//   0036EE2A  CMP     R5, #0
//   0036EE2C  BEQ     loc_36EEB6
//   0036EE2E  MOVS    R3, R5
//   0036EE30  ADDS    R3, #0x36 ; '6'
//   0036EE32  LDRB    R3, [R3]
//   0036EE34  CMP     R3, #0
//   0036EE36  BEQ     loc_36EE28
//   0036EE38  LDR     R6, [R5,#0x24]
//   0036EE3A  CMP     R6, #0
//   0036EE3C  BNE     loc_36EE28
//   0036EE3E  LDRH    R3, [R5,#0x32]
//   0036EE40  CMP     R3, #4
//   0036EE42  BHI     loc_36EE28
//   0036EE44  LDRH    R3, [R5,#0x32]
//   0036EE46  CMP     R6, R3
//   0036EE48  BGE     loc_36EE6A
//   0036EE4A  LDR     R1, [R5,#4]
//   0036EE4C  LSLS    R3, R6, #1
//   0036EE4E  LDR     R0, [SP,#arg_108]
//   0036EE50  LDRSH   R2, [R3,R1]
//   0036EE52  LDR     R3, [SP,#arg_100]
//   0036EE54  STR     R0, [SP,#arg_4]
//   0036EE56  STR     R5, [SP,#arg_C]
//   0036EE58  STR     R3, [SP,#arg_0]
//   0036EE5A  MOVS    R3, #2
//   0036EE5C  STR     R3, [SP,#arg_8]
//   0036EE5E  LDR     R0, [SP,#arg_F8]
//   0036EE60  LDR     R1, [SP,#arg_F0]
//   0036EE62  BL      sub_36286E
//   0036EE66  CMP     R0, #0
//   0036EE68  BNE     loc_36EEA6
//   0036EE6A  LDRH    R3, [R5,#0x32]
//   0036EE6C  CMP     R6, R3
//   0036EE6E  BNE     loc_36EE28
//   0036EE70  LDR     R3, =0x1201
//   0036EE72  STR     R3, [R4,#0x24]
//   0036EE74  MOVS    R3, R5
//   0036EE76  ADDS    R3, #0x37 ; '7'
//   0036EE78  LDRB    R3, [R3]
//   0036EE7A  LSLS    R2, R3, #0x1A
//   0036EE7C  BMI     loc_36EEB0
//   0036EE7E  MOVS    R0, R5
//   0036EE80  BL      sub_34F858
//   0036EE84  LDR     R3, [SP,#arg_10C]
//   0036EE86  LDR     R3, [R3,#0x40]
//   0036EE88  MOVS    R2, R3
//   0036EE8A  BICS    R2, R0
//   0036EE8C  LDR     R0, [SP,#arg_10C]
//   0036EE8E  LDR     R3, [R0,#0x44]
//   0036EE90  BICS    R3, R1
//   0036EE92  ORRS    R3, R2
//   0036EE94  BEQ     loc_36EEB0
//   0036EE96  LSLS    R6, R6, #0x10
//   0036EE98  LSRS    R6, R6, #0x10
//   0036EE9A  STRH    R6, [R4,#0x28]
//   0036EE9C  STRH    R6, [R4,#0x18]
//   0036EE9E  STR     R5, [R4,#0x1C]
//   0036EEA0  MOVS    R3, #0x27 ; '''
//   0036EEA2  STRH    R3, [R4,#0x14]
//   0036EEA4  B       loc_36EEB6
//   0036EEA6  LDR     R1, [R4,#0x2C]
//   0036EEA8  LSLS    R3, R6, #2
//   0036EEAA  ADDS    R6, #1
//   0036EEAC  STR     R0, [R3,R1]
//   0036EEAE  B       loc_36EE44
//   0036EEB0  LDR     R3, =0x1241
//   0036EEB2  STR     R3, [R4,#0x24]
//   0036EEB4  B       loc_36EE96
//   0036EEB6  LDR     R1, [R4,#0x24]
//   0036EEB8  CMP     R1, #0
//   0036EEBA  BEQ     loc_36EF06
//   0036EEBC  LDR     R6, [SP,#arg_EC]
//   0036EEBE  MOVS    R3, #0x318
//   0036EEC2  MOVS    R5, #1
//   0036EEC4  MOVS    R0, R6
//   0036EEC6  STRH    R5, [R4,#0x16]
//   0036EEC8  ADDS    R0, #0x44 ; 'D'
//   0036EECA  STR     R4, [R6,R3]
//   0036EECC  LDR     R1, [SP,#arg_F0]
//   0036EECE  BL      sub_34F6FC
//   0036EED2  STR     R0, [R4,#8]
//   0036EED4  STR     R1, [R4,#0xC]
//   0036EED6  LDR     R4, [SP,#arg_F0]
//   0036EED8  MOVS    R3, #0x2E4
//   0036EEDC  STR     R4, [R6,R3]
//   0036EEDE  LDR     R6, [SP,#arg_EC]
//   0036EEE0  LDR     R0, [R6,#8]
//   0036EEE2  STRH    R5, [R6,#0x20]
//   0036EEE4  CMP     R0, #0
//   0036EEE6  BEQ     loc_36EEEE
//   0036EEE8  MOVS    R3, R6
//   0036EEEA  ADDS    R3, #5
//   0036EEEC  STRB    R5, [R3,#0x1F]
//   0036EEEE  LDR     R4, [SP,#arg_EC]
//   0036EEF0  MOVS    R5, #0x400
//   0036EEF4  LDRH    R3, [R4,#0x22]
//   0036EEF6  TST     R3, R5
//   0036EEF8  BNE     loc_36EEFC
//   0036EEFA  B       loc_36F028
//   0036EEFC  MOVS    R3, R4
//   0036EEFE  ADDS    R3, #8
//   0036EF00  MOVS    R2, #1
//   0036EF02  STRB    R2, [R3,#0x1F]
//   0036EF04  B       loc_36F028
//   0036EF06  LDR     R6, [SP,#arg_194]
//   0036EF08  STR     R6, [SP,#arg_EC]
//   0036EF0A  LDR     R4, [SP,#arg_EC]
//   0036EF0C  LDR     R6, [R6,#4]
//   0036EF0E  LDR     R3, [R4]
//   0036EF10  ADDS    R6, #8
//   0036EF12  LDR     R3, [R3]
//   0036EF14  STR     R3, [SP,#arg_110]
//   0036EF16  MOVS    R3, R4
//   0036EF18  LDR     R4, [SP,#arg_1A0]
//   0036EF1A  ADDS    R3, #0x28 ; '('
//   0036EF1C  LDRB    R3, [R3]
//   0036EF1E  MOVS    R5, R4
//   0036EF20  ADDS    R5, #0x34 ; '4'
//   0036EF22  STR     R3, [SP,#arg_128]
//   0036EF24  STR     R5, [SP,#arg_100]
//   0036EF26  STR     R5, [R4,#0x2C]
//   0036EF28  MOVS    R3, #4
//   0036EF2A  MOVS    R5, #0
//   0036EF2C  STRH    R5, [R4,#0x28]
//   0036EF2E  STRH    R3, [R4,#0x2A]
//   0036EF30  STR     R5, [R4,#0x24]
//   0036EF32  STR     R5, [SP,#arg_10C]
//   0036EF34  STR     R5, [SP,#arg_108]
//   0036EF36  STR     R5, [SP,#arg_130]
//   0036EF38  STR     R5, [SP,#arg_F0]
//   0036EF3A  STR     R5, [SP,#arg_F8]
//   0036EF3C  LDR     R0, [SP,#arg_10C]
//   0036EF3E  LDR     R1, [SP,#arg_128]
//   0036EF40  CMP     R0, R1
//   0036EF42  BGE     loc_36EFB8
//   0036EF44  LDR     R0, [SP,#arg_10C]
//   0036EF46  STRB    R0, [R4,#0x10]

//======================================================================
// sub_36F0A2
// address: 0x0036F0A2   size: 0x278 (632 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   0036F0A2  MOVS    R3, R7
//   0036F0A4  ADDS    R3, #0x28 ; '('
//   0036F0A6  LDRB    R2, [R3]
//   0036F0A8  CMP     R2, #1
//   0036F0AA  BLS     loc_36F134
//   0036F0AC  SUBS    R3, R2, #1
//   0036F0AE  MOVS    R0, R3
//   0036F0B0  MOV     R3, R12
//   0036F0B2  MULS    R3, R0
//   0036F0B4  MOVS    R5, #0x318
//   0036F0B8  ADDS    R3, R7, R3
//   0036F0BA  ADDS    R3, R3, R5
//   0036F0BC  LDR     R3, [R3]
//   0036F0BE  LDR     R5, [R7,#4]
//   0036F0C0  LDRB    R0, [R3,#0x10]
//   0036F0C2  MOVS    R6, R0
//   0036F0C4  MOV     R0, R12
//   0036F0C6  MULS    R0, R6
//   0036F0C8  ADDS    R0, R5, R0
//   0036F0CA  ADDS    R0, #0x28 ; '('
//   0036F0CC  LDRB    R0, [R0,#4]
//   0036F0CE  MOVS    R6, #8
//   0036F0D0  TST     R0, R6
//   0036F0D2  BEQ     loc_36F134
//   0036F0D4  LDR     R5, [SP,#arg_11C]
//   0036F0D6  CMP     R5, #0
//   0036F0D8  BNE     loc_36F0E4
//   0036F0DA  LDR     R6, [R3,#0x24]
//   0036F0DC  MOVS    R0, #0x1000
//   0036F0E0  TST     R6, R0
//   0036F0E2  BEQ     loc_36F134
//   0036F0E4  LDR     R5, [R3,#8]
//   0036F0E6  LDR     R6, [SP,#arg_EC]
//   0036F0E8  LDR     R3, [R3,#0xC]
//   0036F0EA  STR     R5, [SP,#arg_F8]
//   0036F0EC  ANDS    R5, R4
//   0036F0EE  STR     R3, [SP,#arg_10C]
//   0036F0F0  ANDS    R3, R6
//   0036F0F2  ORRS    R3, R5
//   0036F0F4  BNE     loc_36F134
//   0036F0F6  LDR     R5, [R1,#0xC]
//   0036F0F8  MOVS    R6, #0x30 ; '0'
//   0036F0FA  LDR     R3, [R1,#0x14]
//   0036F0FC  MOVS    R0, R5
//   0036F0FE  MULS    R0, R6
//   0036F100  ADDS    R0, R3, R0
//   0036F102  STR     R0, [SP,#arg_F0]
//   0036F104  LDR     R0, [SP,#arg_F0]
//   0036F106  CMP     R3, R0
//   0036F108  BCC     loc_36F10E
//   0036F10A  BL      sub_37033C
//   0036F10E  LDR     R5, [SP,#arg_F8]
//   0036F110  LDR     R6, [R3,#0x28]
//   0036F112  LDR     R0, [R3,#0x2C]
//   0036F114  ANDS    R6, R5
//   0036F116  LDR     R5, [SP,#arg_10C]
//   0036F118  ANDS    R5, R0
//   0036F11A  ORRS    R5, R6
//   0036F11C  BEQ     loc_36F128
//   0036F11E  LDR     R5, [R3]
//   0036F120  MOVS    R6, #1
//   0036F122  LDR     R5, [R5,#4]
//   0036F124  TST     R5, R6
//   0036F126  BEQ     loc_36F134
//   0036F128  ADDS    R3, #0x30 ; '0'
//   0036F12A  B       loc_36F104
//   0036F12C  DCD 0x1201
//   0036F130  DCD 0x1241
//   0036F134  LDR     R3, [R7]
//   0036F136  MOVS    R4, #0x1AC
//   0036F13A  MOVS    R1, #0x20 ; ' '
//   0036F13C  LDRSH   R2, [R7,R1]
//   0036F13E  LDR     R4, [R3,R4]
//   0036F140  LDR     R6, [SP,#arg_154]
//   0036F142  MOVS    R5, #0xD6
//   0036F144  ADDS    R2, R2, R4
//   0036F146  LSLS    R5, R5, #1
//   0036F148  STR     R2, [R3,R5]
//   0036F14A  LSLS    R6, R6, #0x1D
//   0036F14C  BPL     loc_36F176
//   0036F14E  MOVS    R3, #0x318
//   0036F152  LDR     R3, [R7,R3]
//   0036F154  LDR     R0, [R3,#0x24]
//   0036F156  LSLS    R0, R0, #0x13
//   0036F158  BPL     loc_36F176
//   0036F15A  ADDS    R2, R7, #6
//   0036F15C  MOVS    R1, #1
//   0036F15E  STRB    R1, [R2,#0x1F]
//   0036F160  LDR     R1, [SP,#arg_148]
//   0036F162  LDR     R1, [R1,#0x18]
//   0036F164  MOVS    R2, R1
//   0036F166  ADDS    R2, #0x2C ; ','
//   0036F168  LDRB    R2, [R2]
//   0036F16A  LSLS    R4, R2, #0x1A
//   0036F16C  BMI     loc_36F176
//   0036F16E  LDR     R5, [R3,#0x24]
//   0036F170  MOVS    R2, #0x40 ; '@'
//   0036F172  BICS    R5, R2
//   0036F174  STR     R5, [R3,#0x24]
//   0036F176  MOVS    R6, #0x2E0
//   0036F17A  ADDS    R6, R7, R6
//   0036F17C  MOVS    R4, #0
//   0036F17E  STR     R6, [SP,#arg_EC]
//   0036F180  STR     R4, [SP,#arg_10C]
//   0036F182  LDR     R6, [SP,#arg_10C]
//   0036F184  LDR     R4, [SP,#arg_140]
//   0036F186  CMP     R6, R4
//   0036F188  BLT     loc_36F18C
//   0036F18A  B       loc_36F2E4
//   0036F18C  LDR     R3, [SP,#arg_EC]
//   0036F18E  MOVS    R5, #0x48 ; 'H'
//   0036F190  LDR     R6, [SP,#arg_148]
//   0036F192  ADDS    R3, #0x24 ; '$'
//   0036F194  LDRB    R3, [R3]
//   0036F196  LDR     R0, [SP,#arg_13C]
//   0036F198  MULS    R5, R3
//   0036F19A  ADDS    R5, #8
//   0036F19C  ADDS    R5, R6, R5
//   0036F19E  LDR     R4, [R5,#0x10]
//   0036F1A0  LDR     R1, [R4,#0x44]
//   0036F1A2  BL      sub_34F2A0
//   0036F1A6  MOVS    R3, R4
//   0036F1A8  ADDS    R3, #0x2C ; ','
//   0036F1AA  STR     R0, [SP,#arg_F4]
//   0036F1AC  LDRB    R1, [R3]
//   0036F1AE  LDR     R0, [SP,#arg_EC]
//   0036F1B0  LDR     R6, [R0,#0x38]
//   0036F1B2  LSLS    R2, R1, #0x1E
//   0036F1B4  BMI     loc_36F26C
//   0036F1B6  LDR     R3, [R4,#0xC]
//   0036F1B8  STR     R3, [SP,#arg_F0]
//   0036F1BA  CMP     R3, #0
//   0036F1BC  BNE     loc_36F26C
//   0036F1BE  LDR     R2, [R6,#0x24]
//   0036F1C0  MOVS    R0, #0x400
//   0036F1C4  TST     R2, R0
//   0036F1C6  BEQ     loc_36F1EA
//   0036F1C8  LDR     R1, [R4,#0x3C]
//   0036F1CA  LDR     R0, [SP,#arg_13C]
//   0036F1CC  BL      sub_353624
//   0036F1D0  LDR     R4, [SP,#arg_F0]
//   0036F1D2  MOVS    R3, #0xA
//   0036F1D4  NEGS    R3, R3
//   0036F1D6  STR     R0, [SP,#arg_4]
//   0036F1D8  STR     R3, [SP,#arg_8]
//   0036F1DA  STR     R4, [SP,#arg_0]
//   0036F1DC  LDR     R0, [SP,#arg_160]
//   0036F1DE  MOVS    R1, #0x94
//   0036F1E0  LDR     R2, [R5,#0x28]
//   0036F1E2  MOVS    R3, R4
//   0036F1E4  BL      sub_35A9FC
//   0036F1E8  B       loc_36F26C
//   0036F1EA  MOVS    R3, #0x10
//   0036F1EC  TST     R1, R3
//   0036F1EE  BNE     loc_36F26C
//   0036F1F0  LSLS    R0, R2, #0x19
//   0036F1F2  BMI     loc_36F25C
//   0036F1F4  LDR     R1, [SP,#arg_154]
//   0036F1F6  TST     R1, R3
//   0036F1F8  BNE     loc_36F25C
//   0036F1FA  ADDS    R3, R7, #6
//   0036F1FC  LDRB    R2, [R3,#0x1F]
//   0036F1FE  MOVS    R3, #0x34 ; '4'
//   0036F200  CMP     R2, #0
//   0036F202  BEQ     loc_36F20A
//   0036F204  LDR     R2, [R5,#0x28]
//   0036F206  MOVS    R3, #0x35 ; '5'
//   0036F208  STR     R2, [R7,#0x3C]
//   0036F20A  STR     R3, [SP,#arg_0]
//   0036F20C  LDR     R0, [SP,#arg_118]
//   0036F20E  MOVS    R3, R4
//   0036F210  LDR     R1, [R5,#0x28]
//   0036F212  LDR     R2, [SP,#arg_F4]
//   0036F214  BL      sub_361E26
//   0036F218  ADDS    R3, R7, #6
//   0036F21A  LDRB    R3, [R3,#0x1F]
//   0036F21C  CMP     R3, #0
//   0036F21E  BNE     loc_36F26C
//   0036F220  MOVS    R0, #0x26 ; '&'
//   0036F222  LDRSH   R3, [R4,R0]
//   0036F224  CMP     R3, #0x3F ; '?'
//   0036F226  BGT     loc_36F26C
//   0036F228  ADDS    R4, #0x2C ; ','
//   0036F22A  LDRB    R2, [R4]
//   0036F22C  MOVS    R3, #0x20 ; ' '
//   0036F22E  ANDS    R2, R3
//   0036F230  BNE     loc_36F26C
//   0036F232  LDR     R1, [R5,#0x38]
//   0036F234  LDR     R3, [R5,#0x3C]
//   0036F236  MOVS    R0, R1
//   0036F238  ORRS    R0, R3
//   0036F23A  BEQ     loc_36F248
//   0036F23C  LSLS    R0, R3, #0x1F
//   0036F23E  LSRS    R1, R1, #1
//   0036F240  ORRS    R1, R0
//   0036F242  LSRS    R3, R3, #1
//   0036F244  ADDS    R2, #1
//   0036F246  B       loc_36F236
//   0036F248  LDR     R1, [SP,#arg_160]
//   0036F24A  MOVS    R3, #0xE
