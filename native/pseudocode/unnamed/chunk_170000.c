// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_170000

//======================================================================
// sub_170F44
// address: 0x00170F44   size: 0x1BC (444 bytes)
//======================================================================
int __fastcall sub_170F44(unsigned __int16 *a1, int a2, int a3, int a4)
{
  int v4; // r1
  int v5; // r3
  unsigned int v6; // r0
  unsigned int v7; // r7
  unsigned int v8; // r5
  unsigned int v9; // r4
  unsigned int v10; // r6
  int v11; // r2
  int v12; // r5
  int v13; // r6
  int v14; // r0
  int v15; // r4
  int v16; // r6
  int v17; // r2
  int result; // r0
  int i; // r3
  int v20; // r5
  int v21; // r1
  int v22; // r5
  int v23; // r1
  int v24; // r5
  int v25; // r7
  int v26; // r1
  int j; // r3
  int v28; // [sp+0h] [bp-2Ch]
  unsigned int v29; // [sp+4h] [bp-28h]
  unsigned int v30; // [sp+8h] [bp-24h]
  unsigned int v31; // [sp+Ch] [bp-20h]
  unsigned int v32; // [sp+10h] [bp-1Ch]
  int v35; // [sp+1Ch] [bp-10h]
  int v36; // [sp+20h] [bp-Ch]
  int v37; // [sp+20h] [bp-Ch]
  int v38; // [sp+24h] [bp-8h]
  int v39; // [sp+24h] [bp-8h]

  v4 = *a1;
  v29 = (((unsigned int)(255 * (v4 >> 11) + 16) >> 5) + 255 * (v4 >> 11) + 16) >> 5;
  v30 = (((unsigned int)(255 * ((v4 & 0x7E0) >> 5) + 32) >> 6) + 255 * ((v4 & 0x7E0) >> 5) + 32) >> 6;
  v5 = a1[1];
  v31 = (((255 * (v4 & 0x1Fu) + 16) >> 5) + 255 * (v4 & 0x1F) + 16) >> 5;
  v32 = *((_DWORD *)a1 + 1);
  v6 = v31 << 16;
  v7 = v30 << 8;
  v8 = (((unsigned int)(255 * (v5 >> 11) + 16) >> 5) + 255 * (v5 >> 11) + 16) >> 5;
  v9 = (((unsigned int)(255 * ((v5 & 0x7E0) >> 5) + 32) >> 6) + 255 * ((v5 & 0x7E0) >> 5) + 32) >> 6;
  v10 = (((255 * (v5 & 0x1Fu) + 16) >> 5) + 255 * (v5 & 0x1F) + 16) >> 5;
  v35 = 4 * a3;
  if ( v4 > (unsigned int)v5 )
  {
    v37 = v6 | v29 | v7;
    v39 = (v10 << 16) | v8 | (v9 << 8);
    v28 = (((int)(2 * v31 + v10) / 3) << 16) | ((int)(2 * v29 + v8) / 3) | (((int)(2 * v30 + v9) / 3) << 8);
    v14 = (int)(2 * v9 + v30) / 3;
    v15 = a2;
    v16 = (((int)(2 * v10 + v31) / 3) << 16) | ((int)(2 * v8 + v29) / 3) | (v14 << 8);
    v17 = 0;
    result = 3;
    while ( 1 )
    {
      for ( i = 0; i != 4; ++i )
      {
        v20 = (v32 >> (2 * (i + v17))) & 3;
        v21 = *(unsigned __int8 *)(a4 + v17 + i) << 24;
        if ( v20 == 2 )
        {
          v22 = v28;
LABEL_11:
          v23 = v21 | v22;
          goto LABEL_13;
        }
        if ( v20 != 3 )
        {
          if ( v20 == 1 )
          {
            v23 = v21 | v39;
            goto LABEL_13;
          }
          v22 = v37;
          goto LABEL_11;
        }
        v23 = v21 | v16;
LABEL_13:
        v24 = 4 * i;
        *(_DWORD *)(v15 + v24) = v23;
      }
      v17 += 4;
      v15 += v35;
      if ( v17 == 16 )
        return result;
    }
  }
  v11 = 0;
  v38 = (v10 << 16) | v8 | (v9 << 8);
  v36 = v6 | v29 | v7;
  v12 = ((int)(v29 + v8) >> 1) | ((int)(v31 + v10) >> 1 << 16) | ((int)(v30 + v9) >> 1 << 8);
  v13 = a2;
  do
  {
    for ( j = 0; j != 4; ++j )
    {
      v25 = (v32 >> (2 * (j + v11))) & 3;
      v26 = *(unsigned __int8 *)(a4 + v11 + j) << 24;
      switch ( v25 )
      {
        case 2:
          v26 |= v12;
          break;
        case 3:
LABEL_27:
          break;
        case 1:
          v26 |= v38;
          break;
        default:
          v26 |= v36;
          goto LABEL_27;
      }
      result = 4 * j;
      *(_DWORD *)(v13 + result) = v26;
    }
    v11 += 4;
    v13 += v35;
  }
  while ( v11 != 16 );
  return result;
}


//======================================================================
// sub_17266E
// address: 0x0017266E   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_17266E(int a1, _DWORD *a2, int *a3)
{
  _DWORD *v3; // r4
  int v5; // r0

  v3 = a2 + 1;
  v5 = (*(int (__fastcall **)(_DWORD, _DWORD *, int))(*(_DWORD *)*a2 + 8))(*a2, a2 + 1, 1024);
  *a3 = v5;
  return v5 != 0 ? v3 : nullptr;
}


//======================================================================
// sub_1726A8
// address: 0x001726A8   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_1726A8(int a1)
{
  int v2; // r0

  if ( lua_isstring(a1, 1) != 0 )
  {
    v2 = lua_tolstring(a1, 1, 0);
    lua_getfield(a1, -10002, v2);
  }
  else
  {
    lua_pushnil(a1);
  }
  return 1;
}


//======================================================================
// sub_175F30
// address: 0x00175F30   size: 0x1C (28 bytes)
//======================================================================
unsigned int *__fastcall sub_175F30(int a1, unsigned int a2)
{
  unsigned int *result; // r0

  result = (unsigned int *)(a1 + 452);
  do
  {
    if ( a2 >= *result && a2 < *result + result[1] )
      break;
    result = (unsigned int *)result[2];
  }
  while ( result != nullptr );
  return result;
}


//======================================================================
// sub_175F4C
// address: 0x00175F4C   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_175F4C(_DWORD *result, int a2, int a3)
{
  int v3; // r3
  int v4; // r1
  int v5; // r2

  v3 = 0;
  if ( (a2 & 7) != 0 )
    v3 = 8 - (a2 & 7);
  v4 = a2 + v3;
  v5 = a3 - v3;
  result[3] = v5;
  result[6] = v4;
  *(_DWORD *)(v4 + 4) = v5 | 1;
  *(_DWORD *)(v4 + v5 + 4) = 40;
  result[7] = dword_4B93AC;
  return result;
}


//======================================================================
// sub_175F80
// address: 0x00175F80   size: 0x308 (776 bytes)
//======================================================================
_DWORD *__fastcall sub_175F80(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r12
  unsigned int v4; // r3
  unsigned int v5; // r6
  unsigned int v6; // r5
  unsigned int v7; // r7
  int v8; // r2
  int v9; // r5
  unsigned int v10; // r5
  _DWORD *v11; // r3
  unsigned int v12; // r6
  int v13; // r6
  unsigned int v14; // r7
  int v15; // r3
  unsigned int v16; // r7
  int v17; // r6
  unsigned int v18; // r7
  int v19; // r4
  int v20; // r3
  unsigned int v21; // r4
  unsigned int v22; // r4
  int v23; // r5
  _DWORD *v24; // r2
  int v25; // r4
  int v26; // r5
  _DWORD *v27; // r5
  _DWORD *v28; // r6
  int v29; // r6
  int v30; // r4
  int v31; // r4
  unsigned int v32; // r1
  _DWORD *v33; // r2
  unsigned int v34; // r6
  _DWORD *v35; // r5
  _DWORD *v36; // r1
  unsigned int v37; // r7
  unsigned int v38; // r1
  unsigned int v39; // r6
  unsigned int v40; // r7
  unsigned int v41; // r5
  char v42; // r4
  int v43; // r0
  unsigned int v44; // r4
  int v45; // r1
  int v46; // r1
  unsigned int v48; // [sp+0h] [bp-Ch]
  int v49; // [sp+4h] [bp-8h]

  v2 = 0;
  v3 = -a2;
  v4 = a2 >> 8;
  if ( a2 >> 8 != 0 )
  {
    v2 = 31;
    if ( v4 <= 0xFFFF )
    {
      v5 = ((v4 - 256) >> 16) & 8;
      v6 = (((v4 << v5) - 4096) >> 16) & 4;
      v7 = v4 << v5 << v6;
      v2 = ((a2 >> ((v7 << (((v7 - 0x4000) >> 16) & 2) >> 15) - (v5 + v6 + (((v7 - 0x4000) >> 16) & 2)) + 21)) & 1)
         + 2 * ((v7 << (((v7 - 0x4000) >> 16) & 2) >> 15) - (v5 + v6 + (((v7 - 0x4000) >> 16) & 2)) + 14);
    }
  }
  v8 = a1[v2 + 76];
  if ( v8 != 0 )
  {
    if ( v2 == 31 )
      LOBYTE(v9) = 0;
    else
      v9 = 25 - (v2 >> 1);
    v10 = a2 << v9;
    v49 = 0;
    v11 = nullptr;
    while ( 1 )
    {
      v12 = (*(_DWORD *)(v8 + 4) & 0xFFFFFFF8) - a2;
      if ( v12 < v3 )
      {
        v3 = (*(_DWORD *)(v8 + 4) & 0xFFFFFFF8) - a2;
        v11 = (_DWORD *)v8;
        if ( v12 == 0 )
          goto LABEL_20;
      }
      v13 = *(_DWORD *)(v8 + 20);
      v8 = *(_DWORD *)(4 * ((v10 >> 31) + 4) + v8);
      if ( v13 != 0 )
      {
        if ( v13 == v8 )
          goto LABEL_15;
        v49 = v13;
      }
      if ( v8 == 0 )
      {
        v8 = v49;
        if ( v49 != 0 || v11 != nullptr )
          goto LABEL_20;
        break;
      }
LABEL_15:
      v10 *= 2;
    }
  }
  v8 = ((-2 * (1 << v2)) | (2 * (1 << v2))) & a1[1];
  v11 = (_DWORD *)v8;
  if ( v8 != 0 )
  {
    v14 = (v8 & -v8) - 1;
    v15 = (v14 >> 12) & 0x10;
    v16 = v14 >> v15;
    v17 = (v16 >> 5) & 8;
    v18 = v16 >> v17;
    v19 = (v18 >> 2) & 4;
    v20 = v17 + v15 + v19;
    v21 = v18 >> v19;
    v8 = a1[v20
          + 76
          + ((v21 >> 1) & 2)
          + (((v21 >> ((v21 >> 1) & 2)) & 2) != 0)
          + (v21 >> ((v21 >> 1) & 2) >> (((v21 >> ((v21 >> 1) & 2)) & 2) != 0))];
    v11 = nullptr;
  }
LABEL_20:
  while ( v8 != 0 )
  {
    v22 = (*(_DWORD *)(v8 + 4) & 0xFFFFFFF8) - a2;
    if ( v22 < v3 )
      v11 = (_DWORD *)v8;
    else
      v22 = v3;
    v23 = *(_DWORD *)(v8 + 16);
    if ( v23 == 0 )
      v23 = *(_DWORD *)(v8 + 20);
    v8 = v23;
    v3 = v22;
  }
  if ( v11 == nullptr )
    return nullptr;
  if ( v3 >= a1[2] - a2 )
    return nullptr;
  v24 = (_DWORD *)v11[3];
  v25 = v11[6];
  if ( v24 == v11 )
  {
    v24 = (_DWORD *)v11[5];
    v27 = v11 + 5;
    if ( v24 != nullptr || (v24 = (_DWORD *)v11[4], v27 = v11 + 4, v24 != nullptr) )
    {
      while ( 1 )
      {
        v28 = v24 + 5;
        if ( v24[5] == 0 )
        {
          v28 = v24 + 4;
          if ( v24[4] == 0 )
            break;
        }
        v24 = (_DWORD *)*v28;
        v27 = v28;
      }
      *v27 = 0;
    }
  }
  else
  {
    v26 = v11[2];
    *(_DWORD *)(v26 + 12) = v24;
    v24[2] = v26;
  }
  if ( v25 != 0 )
  {
    v29 = v11[7];
    if ( v11 == (_DWORD *)a1[v29 + 76] )
    {
      a1[v29 + 76] = v24;
      if ( v24 != nullptr )
      {
LABEL_41:
        v24[6] = v25;
        v30 = v11[4];
        if ( v30 != 0 )
        {
          v24[4] = v30;
          *(_DWORD *)(v30 + 24) = v24;
        }
        v31 = v11[5];
        if ( v31 != 0 )
        {
          v24[5] = v31;
          *(_DWORD *)(v31 + 24) = v24;
        }
        goto LABEL_51;
      }
      a1[1] &= ~(1 << v11[7]);
    }
    else
    {
      if ( *(_DWORD **)(v25 + 16) == v11 )
        *(_DWORD *)(v25 + 16) = v24;
      else
        *(_DWORD *)(v25 + 20) = v24;
      if ( v24 != nullptr )
        goto LABEL_41;
    }
  }
LABEL_51:
  if ( v3 > 0xF )
  {
    v33 = (_DWORD *)((char *)v11 + a2);
    v11[1] = a2 | 3;
    v33[1] = v3 | 1;
    *(_DWORD *)((char *)v33 + v3) = v3;
    v34 = v3 >> 3;
    if ( v3 >> 3 > 0x1F )
    {
      v37 = v3 >> 8;
      v38 = 31;
      if ( v3 >> 8 <= 0xFFFF )
      {
        v39 = ((v37 - 256) >> 16) & 8;
        v40 = v37 << v39;
        v41 = (v40 << (((v40 - 4096) >> 16) & 4) << ((((v40 << (((v40 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2) >> 15)
            - (v39
             + (((v40 - 4096) >> 16) & 4)
             + ((((v40 << (((v40 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2));
        v38 = ((v3 >> (v41 + 21)) & 1) + 2 * (v41 + 14);
      }
      v42 = 0;
      v33[7] = v38;
      v33[5] = 0;
      v33[4] = 0;
      v48 = v38 + 76;
      if ( ((a1[1] >> v38) & 1) != 0 )
      {
        v43 = a1[v48];
        if ( v38 != 31 )
          v42 = 25 - (v38 >> 1);
        v44 = v3 << v42;
        while ( (*(_DWORD *)(v43 + 4) & 0xFFFFFFF8) != v3 )
        {
          v45 = 4 * ((v44 >> 31) + 4);
          v44 *= 2;
          if ( *(_DWORD *)(v45 + v43) == 0 )
          {
            *(_DWORD *)(v45 + v43) = v33;
            v33[6] = v43;
            goto LABEL_69;
          }
          v43 = *(_DWORD *)(v45 + v43);
        }
        v46 = *(_DWORD *)(v43 + 8);
        *(_DWORD *)(v46 + 12) = v33;
        *(_DWORD *)(v43 + 8) = v33;
        v33[2] = v46;
        v33[3] = v43;
        v33[6] = 0;
      }
      else
      {
        a1[1] |= 1 << v38;
        a1[v48] = v33;
        v33[6] = &a1[v48];
LABEL_69:
        v33[3] = v33;
        v33[2] = v33;
      }
    }
    else
    {
      v35 = &a1[2 * v34 + 10];
      if ( ((*a1 >> v34) & 1) != 0 )
      {
        v36 = (_DWORD *)v35[2];
      }
      else
      {
        *a1 |= 1 << v34;
        v36 = &a1[2 * v34 + 10];
      }
      v35[2] = v33;
      v36[3] = v33;
      v33[2] = v36;
      v33[3] = v35;
    }
  }
  else
  {
    v32 = a2 + v3;
    v11[1] = v32 | 3;
    *(_DWORD *)((char *)v11 + v32 + 4) |= 1u;
  }
  return v11 + 2;
}


//======================================================================
// sub_176294
// address: 0x00176294   size: 0x172 (370 bytes)
//======================================================================
_DWORD *__fastcall sub_176294(_DWORD *a1, int a2)
{
  unsigned int v2; // r3
  int v3; // r6
  unsigned int v4; // r3
  int v5; // r5
  unsigned int v6; // r3
  int v7; // r4
  _DWORD *v8; // r5
  _DWORD *v9; // r3
  unsigned int v10; // r2
  _DWORD *v11; // r4
  unsigned int v12; // r5
  _DWORD *v13; // r4
  int v14; // r5
  int v15; // r6
  _DWORD *v16; // r7
  int v17; // r5
  int v18; // r5
  int v19; // r2
  char *v20; // r5
  unsigned int v21; // r6
  int v22; // r1
  _DWORD *v23; // r4
  _DWORD *v24; // r6
  _DWORD *v26; // [sp+4h] [bp-8h]

  v2 = (a1[1] & -a1[1]) - 1;
  v3 = (v2 >> 12) & 0x10;
  v4 = v2 >> v3;
  v5 = (v4 >> 5) & 8;
  v6 = v4 >> v5;
  v7 = (v6 >> 2) & 4;
  v8 = (_DWORD *)a1[v5
                  + 76
                  + v3
                  + v7
                  + ((v6 >> v7 >> 1) & 2)
                  + (v6 >> v7 >> ((v6 >> v7 >> 1) & 2) << 30 >> 31)
                  + (v6 >> v7 >> ((v6 >> v7 >> 1) & 2) >> (((v6 >> v7 >> ((v6 >> v7 >> 1) & 2)) & 2) != 0))];
  v9 = v8;
  v10 = (v8[1] & 0xFFFFFFF8) - a2;
  while ( 1 )
  {
    v11 = (_DWORD *)v8[4];
    if ( v11 == nullptr )
    {
      v11 = (_DWORD *)v8[5];
      if ( v11 == nullptr )
        break;
    }
    v12 = (v11[1] & 0xFFFFFFF8) - a2;
    if ( v12 < v10 )
      v9 = v11;
    else
      v12 = v10;
    v10 = v12;
    v8 = v11;
  }
  v13 = (_DWORD *)v9[3];
  v14 = v9[6];
  if ( v13 == v9 )
  {
    v26 = v9 + 5;
    v13 = (_DWORD *)v9[5];
    if ( v13 != nullptr || (v13 = (_DWORD *)v9[4], v26 = v9 + 4, v13 != nullptr) )
    {
      while ( 1 )
      {
        v16 = v13 + 5;
        if ( v13[5] == 0 )
        {
          v16 = v13 + 4;
          if ( v13[4] == 0 )
            break;
        }
        v13 = (_DWORD *)*v16;
        v26 = v16;
      }
      *v26 = 0;
    }
  }
  else
  {
    v15 = v9[2];
    *(_DWORD *)(v15 + 12) = v13;
    v13[2] = v15;
  }
  if ( v14 != 0 )
  {
    if ( v9 == (_DWORD *)a1[v9[7] + 76] )
    {
      a1[v9[7] + 76] = v13;
      if ( v13 == nullptr )
      {
        a1[1] &= ~(1 << v9[7]);
        goto LABEL_28;
      }
    }
    else
    {
      if ( *(_DWORD **)(v14 + 16) == v9 )
        *(_DWORD *)(v14 + 16) = v13;
      else
        *(_DWORD *)(v14 + 20) = v13;
      if ( v13 == nullptr )
        goto LABEL_28;
    }
    v13[6] = v14;
    v17 = v9[4];
    if ( v17 != 0 )
    {
      v13[4] = v17;
      *(_DWORD *)(v17 + 24) = v13;
    }
    v18 = v9[5];
    if ( v18 != 0 )
    {
      v13[5] = v18;
      *(_DWORD *)(v18 + 24) = v13;
    }
  }
LABEL_28:
  if ( v10 > 0xF )
  {
    v20 = (char *)v9 + a2;
    v9[1] = a2 | 3;
    *((_DWORD *)v20 + 1) = v10 | 1;
    *(_DWORD *)&v20[v10] = v10;
    v21 = a1[2];
    if ( v21 != 0 )
    {
      v22 = a1[5];
      v23 = &a1[2 * (v21 >> 3) + 10];
      if ( ((*a1 >> (v21 >> 3)) & 1) != 0 )
      {
        v24 = (_DWORD *)v23[2];
      }
      else
      {
        *a1 |= 1 << (v21 >> 3);
        v24 = &a1[2 * (v21 >> 3) + 10];
      }
      v23[2] = v22;
      v24[3] = v22;
      *(_DWORD *)(v22 + 8) = v24;
      *(_DWORD *)(v22 + 12) = v23;
    }
    a1[2] = v10;
    a1[5] = v20;
  }
  else
  {
    v19 = v10 + a2;
    v9[1] = v19 | 3;
    *(_DWORD *)((char *)v9 + v19 + 4) |= 1u;
  }
  return v9 + 2;
}


//======================================================================
// sub_176406
// address: 0x00176406   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_176406(_DWORD *a1)
{
  int v2; // r4
  int result; // r0

  v2 = 0;
  while ( 1 )
  {
    if ( *a1 == 0 )
    {
      result = sub_3C8C10(a1, 1);
      if ( result == 0 )
        break;
    }
    if ( ++v2 << 26 == 0 )
      j_sched_yield();
  }
  return result;
}


//======================================================================
// sub_17642C
// address: 0x0017642C   size: 0x78 (120 bytes)
//======================================================================
int sub_17642C()
{
  int v0; // r3

  if ( sub_3C8C10(&dword_4B93B4, 1) != 0 )
    sub_176406(&dword_4B93B4);
  if ( dword_4B939C == 0 )
  {
    v0 = j_sysconf(40);
    if ( ((v0 - 1) & v0) != 0 )
      j_abort();
    dword_4B93A4 = v0;
    dword_4B93A0 = v0;
    dword_4B93A8 = 0x40000;
    dword_4B93AC = 0x200000;
    dword_4B93B0 = 3;
    dword_4B9574 = 3;
    dword_4B9578 = 0;
    dword_4B939C = (j_time(nullptr) ^ 0x55555555) & 0xFFFFFFF0 | 8;
  }
  sub_3C8C04();
  dword_4B93B4 = 0;
  return 1;
}


//======================================================================
// sub_1764B4
// address: 0x001764B4   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_1764B4(int a1, unsigned int a2)
{
  int result; // r0

  if ( dword_4B939C == 0 )
    sub_17642C();
  if ( a1 != -2 )
  {
    if ( a1 == -1 )
    {
      dword_4B93AC = a2;
    }
    else
    {
      result = 0;
      if ( a1 != -3 )
        return result;
      dword_4B93A8 = a2;
    }
    return 1;
  }
  result = 0;
  if ( a2 >= dword_4B93A0 && (a2 & (a2 - 1)) == 0 )
  {
    dword_4B93A4 = a2;
    return 1;
  }
  return result;
}


//======================================================================
// sub_176510
// address: 0x00176510   size: 0xFA (250 bytes)
//======================================================================
_DWORD *__fastcall sub_176510(_DWORD *a1, _DWORD *a2)
{
  int v4; // r2
  unsigned int *v5; // r1
  unsigned int v6; // r6
  int v7; // r3
  int v8; // r0
  unsigned int i; // r3
  int v10; // r3
  int v11; // r1
  unsigned int v12; // r12
  int v14; // [sp+4h] [bp-18h]
  int v15; // [sp+8h] [bp-14h]
  int v16; // [sp+Ch] [bp-10h]
  int v17; // [sp+10h] [bp-Ch]
  int v18; // [sp+14h] [bp-8h]

  j_memset(a1, 0, 0x28u);
  if ( dword_4B939C == 0 )
    sub_17642C();
  if ( (a2[111] & 2) == 0 || sub_3C8C10(a2 + 112, 1) == 0 || sub_176406(a2 + 112) == 0 )
  {
    v17 = a2[6];
    if ( v17 != 0 )
    {
      v18 = a2[3];
      v4 = v18 + 40;
      v5 = a2 + 113;
      v15 = v18 + 40;
      v16 = 1;
      do
      {
        v6 = *v5;
        v7 = 0;
        v8 = (*v5 + 8) & 7;
        if ( v8 != 0 )
          v7 = 8 - v8;
        for ( i = v6 + v7; i >= v6; i += v12 )
        {
          if ( i >= v6 + v5[1] )
            break;
          if ( i == v17 )
            break;
          v14 = *(_DWORD *)(i + 4);
          if ( v14 == 7 )
            break;
          v12 = v14 & 0xFFFFFFF8;
          v15 += v14 & 0xFFFFFFF8;
          if ( (*(_DWORD *)(i + 4) & 3) == 1 )
          {
            v4 += v12;
            ++v16;
          }
        }
        v5 = (unsigned int *)v5[2];
      }
      while ( v5 != nullptr );
      a1[1] = v16;
      v10 = a2[108];
      *a1 = v15;
      a1[8] = v4;
      v11 = a2[109];
      a1[4] = v10 - v15;
      a1[5] = v11;
      a1[7] = v10 - v4;
      a1[9] = v18;
    }
    if ( (a2[111] & 2) != 0 )
    {
      sub_3C8C04();
      a2[112] = 0;
    }
  }
  return a1;
}


//======================================================================
// sub_176610
// address: 0x00176610   size: 0x82C (2092 bytes)
//======================================================================
_DWORD *__fastcall sub_176610(int *a1, unsigned int a2)
{
  size_t v3; // r5
  unsigned int v4; // r3
  unsigned int v5; // r1
  int v6; // r6
  char *v7; // r0
  int *v8; // r3
  char *v9; // r2
  unsigned int v10; // r2
  size_t v11; // r5
  _DWORD *result; // r0
  unsigned int v13; // r7
  unsigned int v14; // r3
  unsigned int v15; // r1
  unsigned int v16; // r6
  unsigned int v17; // r1
  unsigned int *v18; // r5
  unsigned int v19; // r0
  unsigned int v20; // r1
  unsigned int v21; // r3
  int v22; // r0
  unsigned int v23; // r2
  char *v24; // r5
  unsigned int v25; // r3
  _DWORD *v26; // r5
  unsigned int v27; // r3
  int i; // r3
  int *v29; // r2
  int *v30; // r0
  int v31; // r1
  int v32; // r2
  unsigned int *v33; // r3
  _DWORD *v34; // r2
  int v35; // r7
  unsigned int v36; // r1
  unsigned int *v37; // r0
  int v38; // r3
  int v39; // r1
  unsigned int v40; // r2
  int v41; // r2
  int v42; // r3
  _DWORD *v43; // r3
  unsigned int v44; // r7
  unsigned int v45; // r0
  int *v46; // r1
  int *v47; // r3
  unsigned int v48; // r6
  unsigned int v49; // r3
  unsigned int v50; // r0
  unsigned int v51; // r6
  unsigned int v52; // r1
  char v53; // r2
  int *v54; // r1
  unsigned int v55; // r2
  int v56; // r3
  int v57; // r3
  unsigned int v58; // r2
  int v59; // r0
  int v60; // r2
  intptr_t v61; // r5
  unsigned int v62; // r5
  int v63; // r2
  int v64; // r3
  int v65; // r2
  _DWORD *v66; // r2
  unsigned int v67; // r3
  unsigned int v68; // r0
  int v69; // r2
  int v70; // r0
  int v71; // r6
  int v72; // r0
  int v73; // r1
  unsigned int v74; // r12
  unsigned int v75; // r6
  int v76; // r5
  int v77; // r1
  _DWORD *v78; // r1
  int v79; // r5
  int v80; // r6
  _DWORD *v81; // r7
  int v82; // r5
  int v83; // r5
  unsigned int v84; // r5
  int *v85; // r0
  int *v86; // r2
  unsigned int v87; // r7
  unsigned int v88; // r2
  unsigned int v89; // r6
  unsigned int v90; // r7
  unsigned int v91; // r5
  char v92; // r1
  int v93; // r4
  unsigned int v94; // r1
  int v95; // r2
  int v96; // r2
  unsigned int delta; // [sp+8h] [bp-24h]
  _DWORD *v98; // [sp+18h] [bp-14h]
  unsigned int v99; // [sp+18h] [bp-14h]
  unsigned int v100; // [sp+18h] [bp-14h]
  unsigned int v102; // [sp+1Ch] [bp-10h]
  unsigned int v103; // [sp+20h] [bp-Ch]
  int v104; // [sp+20h] [bp-Ch]
  _DWORD *v105; // [sp+20h] [bp-Ch]
  unsigned int v106; // [sp+24h] [bp-8h]

  if ( dword_4B939C == 0 )
    sub_17642C();
  if ( (a1[111] & 1) != 0 && a2 >= dword_4B93A8 && a1[3] != 0 )
  {
    v3 = (dword_4B93A0 + 30 + a2) & -dword_4B93A0;
    v4 = a1[110];
    if ( v4 == 0 || (v5 = a1[108], v3 + v5 > v5) && v3 + v5 <= v4 )
    {
      if ( v3 > a2 )
      {
        v6 = 0;
        v7 = (char *)j_mmap(nullptr, v3, 3, 34, -1, 0);
        if ( v7 != (char *)-1 )
        {
          if ( ((unsigned __int8)v7 & 7) != 0 )
            v6 = 8 - ((unsigned __int8)v7 & 7);
          v8 = (int *)&v7[v6];
          v8[1] = v3 - v6 - 16;
          v9 = &v7[v3 - 16];
          *v8 = v6;
          *((_DWORD *)v9 + 1) = 7;
          *((_DWORD *)v9 + 2) = 0;
          v10 = a1[4];
          if ( v10 == 0 || (unsigned int)v7 < v10 )
            a1[4] = (int)v7;
          v11 = v3 + a1[108];
          a1[108] = v11;
          if ( v11 > a1[109] )
            a1[109] = v11;
          result = v8 + 2;
          if ( v8 != (int *)-8 )
            return result;
        }
      }
    }
  }
  v103 = a2 + 48;
  v13 = (dword_4B93A4 - 1 + a2 + 48) & -dword_4B93A4;
  if ( v13 <= a2 )
    return nullptr;
  v14 = a1[110];
  if ( v14 != 0 )
  {
    v15 = a1[108];
    if ( v13 + v15 <= v15 || v13 + v15 > v14 )
      return nullptr;
  }
  if ( (a1[111] & 4) == 0 )
  {
    v17 = a1[6];
    if ( v17 != 0 )
      v18 = sub_175F30((int)a1, v17);
    else
      v18 = nullptr;
    if ( sub_3C8C10(&dword_4B93B4, 1) != 0 )
      sub_176406(&dword_4B93B4);
    if ( v18 != nullptr )
    {
      v23 = dword_4B93A4 + 47 - a1[3] + a2;
      delta = -dword_4B93A4 & v23;
      if ( delta <= 0x7FFFFFFE )
      {
        v16 = (unsigned int)j_sbrk(-dword_4B93A4 & v23);
        if ( v16 == *v18 + v18[1] )
        {
          if ( v16 != -1 )
            goto LABEL_50;
          goto LABEL_123;
        }
        goto LABEL_48;
      }
    }
    else
    {
      v19 = (unsigned int)j_sbrk(0);
      v16 = v19;
      if ( v19 != -1 )
      {
        delta = v13;
        if ( (v19 & (dword_4B93A0 - 1)) != 0 )
          delta = v13 - v19 + (-dword_4B93A0 & (v19 + dword_4B93A0 - 1));
        v20 = a1[108];
        if ( delta <= a2 || delta > 0x7FFFFFFE || (v21 = a1[110]) != 0 && (delta + v20 <= v20 || delta + v20 > v21) )
        {
          v22 = -1;
        }
        else
        {
          v22 = (int)j_sbrk(delta);
          if ( v22 == v16 )
            goto LABEL_50;
        }
        v16 = v22;
LABEL_48:
        if ( v16 != -1 )
        {
          if ( delta > 0x7FFFFFFE
            || delta >= v103
            || (unsigned int)(v61 = (dword_4B93A4 - 1 + v103 - delta) & -dword_4B93A4) > 0x7FFFFFFE )
          {
LABEL_50:
            sub_3C8C04();
            dword_4B93B4 = 0;
            if ( v16 != -1 )
              goto LABEL_59;
            goto LABEL_24;
          }
          if ( j_sbrk(v61) != (void *)-1 )
          {
            delta += v61;
            goto LABEL_50;
          }
          j_sbrk(-delta);
        }
      }
    }
    delta = 0;
LABEL_123:
    a1[111] |= 4u;
    v16 = -1;
    goto LABEL_50;
  }
LABEL_24:
  v16 = (unsigned int)j_mmap(nullptr, v13, 3, 34, -1, 0);
  if ( v16 != -1 )
  {
    delta = v13;
    v104 = 1;
    goto LABEL_60;
  }
  if ( v13 > 0x7FFFFFFE )
    goto LABEL_113;
  if ( sub_3C8C10(&dword_4B93B4, 1) != 0 )
    sub_176406(&dword_4B93B4);
  v16 = (unsigned int)j_sbrk(v13);
  v24 = (char *)j_sbrk(0);
  sub_3C8C04();
  dword_4B93B4 = 0;
  if ( v16 == -1 )
    goto LABEL_113;
  if ( v24 == (char *)-1 )
    goto LABEL_113;
  if ( v16 >= (unsigned int)v24 )
    goto LABEL_113;
  delta = (unsigned int)&v24[-v16];
  if ( (unsigned int)&v24[-v16] <= a2 + 40 )
    goto LABEL_113;
LABEL_59:
  v104 = 0;
LABEL_60:
  v25 = delta + a1[108];
  a1[108] = v25;
  if ( v25 > a1[109] )
    a1[109] = v25;
  v26 = (_DWORD *)a1[6];
  if ( v26 == nullptr )
  {
    v27 = a1[4];
    if ( v27 == 0 || v16 < v27 )
      a1[4] = v16;
    a1[113] = v16;
    a1[114] = delta;
    a1[116] = v104;
    a1[9] = dword_4B939C;
    a1[8] = 4095;
    for ( i = 0; i != 32; ++i )
    {
      v29 = &a1[2 * i + 10];
      v29[3] = (int)v29;
      v29[2] = (int)v29;
    }
    if ( a1 == &dword_4B93B8 )
    {
      v30 = a1;
      v31 = v16;
      v32 = delta - 40;
    }
    else
    {
      v31 = (int)a1 + (*(a1 - 1) & 0xFFFFFFF8) - 8;
      v32 = v16 + delta - v31 - 40;
      v30 = a1;
    }
    goto LABEL_71;
  }
  v33 = (unsigned int *)(a1 + 113);
  v34 = a1 + 113;
  while ( 1 )
  {
    v35 = v34[1];
    if ( v16 == v35 + *v34 )
      break;
    v34 = (_DWORD *)v34[2];
    if ( v34 == nullptr )
      goto LABEL_78;
  }
  if ( (v34[3] & 8) == 0 && (v34[3] & 1) == v104 && (unsigned int)v26 >= *v34 && (unsigned int)v26 < v16 )
  {
    v34[1] = v35 + delta;
    v30 = a1;
    v31 = a1[6];
    v32 = delta + a1[3];
LABEL_71:
    sub_175F4C(v30, v31, v32);
    goto LABEL_110;
  }
LABEL_78:
  if ( v16 < a1[4] )
    a1[4] = v16;
  while ( 1 )
  {
    v36 = *v33;
    if ( *v33 == v16 + delta )
      break;
    v33 = (unsigned int *)v33[2];
    if ( v33 == nullptr )
      goto LABEL_85;
  }
  if ( (v33[3] & 8) == 0 && (v33[3] & 1) == v104 )
  {
    v62 = v33[1];
    *v33 = v16;
    v63 = 0;
    v33[1] = v62 + delta;
    if ( ((v16 + 8) & 7) != 0 )
      v63 = 8 - ((v16 + 8) & 7);
    v100 = v16 + v63;
    v64 = (v36 + 8) & 7;
    v65 = 0;
    if ( v64 != 0 )
      v65 = 8 - v64;
    v66 = (_DWORD *)(v36 + v65);
    v67 = v100 + a2;
    v68 = (unsigned int)v66 - v100 - a2;
    *(_DWORD *)(v100 + 4) = a2 | 3;
    if ( v66 == (_DWORD *)a1[6] )
    {
      v69 = a1[3];
      a1[6] = v67;
      v70 = v68 + v69;
      a1[3] = v70;
      *(_DWORD *)(v67 + 4) = v70 | 1;
LABEL_179:
      v59 = v100;
      return (_DWORD *)(v59 + 8);
    }
    if ( v66 == (_DWORD *)a1[5] )
    {
      v71 = a1[2];
      a1[5] = v67;
      v72 = v68 + v71;
      a1[2] = v72;
      *(_DWORD *)(v67 + 4) = v72 | 1;
      *(_DWORD *)(v67 + v72) = v72;
      goto LABEL_179;
    }
    v73 = v66[1];
    if ( (v73 & 3) != 1 )
    {
LABEL_161:
      v66[1] &= ~1u;
      *(_DWORD *)(v67 + 4) = v68 | 1;
      v84 = v68 >> 3;
      *(_DWORD *)(v67 + v68) = v68;
      if ( v68 >> 3 > 0x1F )
      {
        v87 = v68 >> 8;
        v88 = 31;
        if ( v68 >> 8 <= 0xFFFF )
        {
          v89 = ((v87 - 256) >> 16) & 8;
          v90 = v87 << v89;
          v91 = (v90 << (((v90 - 4096) >> 16) & 4) << ((((v90 << (((v90 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2) >> 15)
              - (v89
               + (((v90 - 4096) >> 16) & 4)
               + ((((v90 << (((v90 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2));
          v88 = ((v68 >> (v91 + 21)) & 1) + 2 * (v91 + 14);
        }
        v92 = 0;
        *(_DWORD *)(v67 + 28) = v88;
        *(_DWORD *)(v67 + 20) = 0;
        *(_DWORD *)(v67 + 16) = 0;
        v102 = v88 + 76;
        if ( (((unsigned int)a1[1] >> v88) & 1) != 0 )
        {
          v93 = a1[v102];
          if ( v88 != 31 )
            v92 = 25 - (v88 >> 1);
          v94 = v68 << v92;
          while ( (*(_DWORD *)(v93 + 4) & 0xFFFFFFF8) != v68 )
          {
            v95 = 4 * ((v94 >> 31) + 4);
            v94 *= 2;
            if ( *(_DWORD *)(v95 + v93) == 0 )
            {
              *(_DWORD *)(v95 + v93) = v67;
              *(_DWORD *)(v67 + 24) = v93;
              goto LABEL_177;
            }
            v93 = *(_DWORD *)(v95 + v93);
          }
          v96 = *(_DWORD *)(v93 + 8);
          *(_DWORD *)(v96 + 12) = v67;
          *(_DWORD *)(v93 + 8) = v67;
          *(_DWORD *)(v67 + 8) = v96;
          *(_DWORD *)(v67 + 12) = v93;
          *(_DWORD *)(v67 + 24) = 0;
        }
        else
        {
          a1[1] |= 1 << v88;
          a1[v102] = v67;
          *(_DWORD *)(v67 + 24) = &a1[v102];
LABEL_177:
          *(_DWORD *)(v67 + 12) = v67;
          *(_DWORD *)(v67 + 8) = v67;
        }
      }
      else
      {
        v85 = &a1[2 * v84 + 10];
        if ( (((unsigned int)*a1 >> v84) & 1) != 0 )
        {
          v86 = (int *)v85[2];
        }
        else
        {
          *a1 |= 1 << v84;
          v86 = &a1[2 * v84 + 10];
        }
        v85[2] = v67;
        v86[3] = v67;
        *(_DWORD *)(v67 + 8) = v86;
        *(_DWORD *)(v67 + 12) = v85;
      }
      goto LABEL_179;
    }
    v74 = v73 & 0xFFFFFFF8;
    v75 = (v73 & 0xFFFFFFF8) >> 3;
    if ( v75 <= 0x1F )
    {
      v76 = v66[2];
      v77 = v66[3];
      if ( v77 == v76 )
      {
        *a1 &= ~(1 << v75);
      }
      else
      {
        *(_DWORD *)(v76 + 12) = v77;
        *(_DWORD *)(v77 + 8) = v76;
      }
      goto LABEL_160;
    }
    v78 = (_DWORD *)v66[3];
    v79 = v66[6];
    if ( v78 == v66 )
    {
      v78 = (_DWORD *)v66[5];
      v105 = v66 + 5;
      if ( v78 != nullptr || (v105 = v66 + 4, (v78 = (_DWORD *)v66[4]) != nullptr) )
      {
        while ( 1 )
        {
          v81 = v78 + 5;
          if ( v78[5] == 0 )
          {
            v81 = v78 + 4;
            if ( v78[4] == 0 )
              break;
          }
          v78 = (_DWORD *)*v81;
          v105 = v81;
        }
        *v105 = 0;
      }
    }
    else
    {
      v80 = v66[2];
      *(_DWORD *)(v80 + 12) = v78;
      v78[2] = v80;
    }
    if ( v79 == 0 )
      goto LABEL_160;
    if ( v66 == (_DWORD *)a1[v66[7] + 76] )
    {
      a1[v66[7] + 76] = (int)v78;
      if ( v78 == nullptr )
      {
        a1[1] &= ~(1 << v66[7]);
LABEL_160:
        v66 = (_DWORD *)((char *)v66 + v74);
        v68 += v74;
        goto LABEL_161;
      }
    }
    else
    {
      if ( *(_DWORD **)(v79 + 16) == v66 )
        *(_DWORD *)(v79 + 16) = v78;
      else
        *(_DWORD *)(v79 + 20) = v78;
      if ( v78 == nullptr )
        goto LABEL_160;
    }
    v78[6] = v79;
    v82 = v66[4];
    if ( v82 != 0 )
    {
      v78[4] = v82;
      *(_DWORD *)(v82 + 24) = v78;
    }
    v83 = v66[5];
    if ( v83 != 0 )
    {
      v78[5] = v83;
      *(_DWORD *)(v83 + 24) = v78;
    }
    goto LABEL_160;
  }
LABEL_85:
  v37 = sub_175F30((int)a1, (unsigned int)v26);
  v106 = *v37 + v37[1];
  v38 = (v106 - 39) & 7;
  v39 = 0;
  v40 = v106 - 47;
  if ( v38 != 0 )
    v39 = 8 - v38;
  v98 = (_DWORD *)(v40 + v39);
  if ( v40 + v39 < (unsigned int)(v26 + 4) )
    v98 = v26;
  sub_175F4C(a1, v16, delta - 40);
  v98[1] = 27;
  v41 = a1[114];
  v42 = a1[115];
  v98[2] = a1[113];
  v98[3] = v41;
  v98[4] = v42;
  v98[5] = a1[116];
  a1[113] = v16;
  a1[114] = delta;
  a1[116] = v104;
  a1[115] = (int)(v98 + 2);
  v43 = v98 + 7;
  do
    *v43++ = 7;
  while ( v106 > (unsigned int)v43 );
  if ( v98 != v26 )
  {
    v44 = (char *)v98 - (char *)v26;
    v45 = (unsigned int)((char *)v98 - (char *)v26) >> 3;
    v98[1] &= ~1u;
    v26[1] = ((char *)v98 - (char *)v26) | 1;
    *v98 = (char *)v98 - (char *)v26;
    if ( v45 > 0x1F )
    {
      v48 = v44 >> 8;
      v49 = 31;
      if ( v44 >> 8 <= 0xFFFF )
      {
        v50 = ((v48 - 256) >> 16) & 8;
        v51 = v48 << v50;
        v52 = (v51 << (((v51 - 4096) >> 16) & 4) << ((((v51 << (((v51 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2) >> 15)
            - (v50
             + (((v51 - 4096) >> 16) & 4)
             + ((((v51 << (((v51 - 4096) >> 16) & 4)) - 0x4000) >> 16) & 2));
        v49 = ((v44 >> (v52 + 21)) & 1) + 2 * (v52 + 14);
      }
      v53 = 0;
      v26[7] = v49;
      v26[5] = 0;
      v26[4] = 0;
      v99 = v49 + 76;
      if ( (((unsigned int)a1[1] >> v49) & 1) != 0 )
      {
        v54 = (int *)a1[v99];
        if ( v49 != 31 )
          v53 = 25 - (v49 >> 1);
        v55 = v44 << v53;
        while ( (v54[1] & 0xFFFFFFF8) != v44 )
        {
          v56 = (v55 >> 31) + 4;
          v55 *= 2;
          if ( v54[v56] == 0 )
          {
            v54[v56] = (int)v26;
            goto LABEL_108;
          }
          v54 = (int *)v54[v56];
        }
        v57 = v54[2];
        *(_DWORD *)(v57 + 12) = v26;
        v54[2] = (int)v26;
        v26[2] = v57;
        v26[3] = v54;
        v26[6] = 0;
      }
      else
      {
        a1[1] |= 1 << v49;
        a1[v99] = (int)v26;
        v54 = &a1[v99];
LABEL_108:
        v26[6] = v54;
        v26[3] = v26;
        v26[2] = v26;
      }
    }
    else
    {
      v46 = &a1[2 * v45 + 10];
      if ( (((unsigned int)*a1 >> v45) & 1) != 0 )
      {
        v47 = (int *)v46[2];
      }
      else
      {
        *a1 |= 1 << v45;
        v47 = &a1[2 * v45 + 10];
      }
      v46[2] = (int)v26;
      v47[3] = (int)v26;
      v26[2] = v47;
      v26[3] = v46;
    }
  }
LABEL_110:
  v58 = a1[3];
  if ( a2 >= v58 )
  {
LABEL_113:
    *(_DWORD *)j___errno() = 12;
    return nullptr;
  }
  v59 = a1[6];
  v60 = v58 - a2;
  a1[3] = v60;
  a1[6] = v59 + a2;
  *(_DWORD *)(v59 + a2 + 4) = v60 | 1;
  *(_DWORD *)(v59 + 4) = a2 | 3;
  return (_DWORD *)(v59 + 8);
}


//======================================================================
// sub_176E48
// address: 0x00176E48   size: 0x21C (540 bytes)
//======================================================================
int __fastcall sub_176E48(_DWORD *a1)
{
  char **v2; // r7
  char **v3; // r6
  int v4; // r4
  char *v5; // r4
  int v6; // r3
  char *v7; // r3
  int v8; // r2
  int v9; // r1
  _DWORD *v10; // r0
  int v11; // r2
  int v12; // r2
  unsigned int v13; // r2
  unsigned int v14; // r3
  unsigned int v15; // r7
  unsigned int v16; // r0
  unsigned int v17; // r2
  char v18; // r2
  int v19; // r1
  int v20; // r1
  _DWORD *v21; // r1
  unsigned int v22; // r2
  int v23; // r3
  int v24; // r3
  int v25; // r3
  char *addr; // [sp+4h] [bp-20h]
  _DWORD *v28; // [sp+8h] [bp-1Ch]
  unsigned int v29; // [sp+8h] [bp-1Ch]
  unsigned int v30; // [sp+Ch] [bp-18h]
  size_t len; // [sp+10h] [bp-14h]
  unsigned int v32; // [sp+14h] [bp-10h]
  int v33; // [sp+18h] [bp-Ch]
  char *v34; // [sp+1Ch] [bp-8h]

  v2 = (char **)(a1 + 113);
  v3 = (char **)a1[115];
  v32 = 0;
  v33 = 0;
  while ( v3 != nullptr )
  {
    addr = *v3;
    len = (size_t)v3[1];
    v34 = v3[2];
    ++v32;
    if ( ((unsigned int)v3[3] & 9) != 1 )
      goto LABEL_46;
    v4 = 0;
    if ( ((unsigned __int8)addr & 7) != 0 )
      v4 = 8 - ((unsigned int)*v3 & 7);
    v5 = &addr[v4];
    v6 = *((_DWORD *)v5 + 1);
    if ( (v6 & 3) != 1 )
      goto LABEL_46;
    v30 = v6 & 0xFFFFFFF8;
    if ( &v5[v6 & 0xFFFFFFF8] < &addr[len - 40] )
      goto LABEL_46;
    if ( v5 == (char *)a1[5] )
    {
      a1[5] = 0;
      a1[2] = 0;
      goto LABEL_30;
    }
    v7 = *((char **)v5 + 3);
    v8 = *((_DWORD *)v5 + 6);
    if ( v7 == v5 )
    {
      v7 = *((char **)v5 + 5);
      v10 = v5 + 20;
      if ( v7 != nullptr || (v7 = *((char **)v5 + 4), v10 = v5 + 16, v7 != nullptr) )
      {
        while ( 1 )
        {
          v28 = v7 + 20;
          if ( *((_DWORD *)v7 + 5) == 0 )
          {
            v28 = v7 + 16;
            if ( *((_DWORD *)v7 + 4) == 0 )
              break;
          }
          v10 = v28;
          v7 = (char *)*v28;
        }
        *v10 = 0;
      }
    }
    else
    {
      v9 = *((_DWORD *)v5 + 2);
      *(_DWORD *)(v9 + 12) = v7;
      *((_DWORD *)v7 + 2) = v9;
    }
    if ( v8 != 0 )
    {
      if ( v5 == (char *)a1[*((_DWORD *)v5 + 7) + 76] )
      {
        a1[*((_DWORD *)v5 + 7) + 76] = v7;
        if ( v7 == nullptr )
        {
          a1[1] &= ~(1 << *((_DWORD *)v5 + 7));
          goto LABEL_30;
        }
      }
      else
      {
        if ( *(char **)(v8 + 16) == v5 )
          *(_DWORD *)(v8 + 16) = v7;
        else
          *(_DWORD *)(v8 + 20) = v7;
        if ( v7 == nullptr )
          goto LABEL_30;
      }
      *((_DWORD *)v7 + 6) = v8;
      v11 = *((_DWORD *)v5 + 4);
      if ( v11 != 0 )
      {
        *((_DWORD *)v7 + 4) = v11;
        *(_DWORD *)(v11 + 24) = v7;
      }
      v12 = *((_DWORD *)v5 + 5);
      if ( v12 != 0 )
      {
        *((_DWORD *)v7 + 5) = v12;
        *(_DWORD *)(v12 + 24) = v7;
      }
    }
LABEL_30:
    if ( j_munmap(addr, len) != 0 )
    {
      v13 = v30 >> 8;
      v14 = 0;
      if ( v30 >> 8 != 0 )
      {
        v14 = 31;
        if ( v13 <= 0xFFFF )
        {
          v15 = ((v13 - 256) >> 16) & 8;
          v16 = (((v13 << v15) - 4096) >> 16) & 4;
          v17 = (v13 << v15 << v16 << ((((v13 << v15 << v16) - 0x4000) >> 16) & 2) >> 15)
              - (v15
               + v16
               + ((((v13 << v15 << v16) - 0x4000) >> 16) & 2));
          v14 = ((v30 >> (v17 + 21)) & 1) + 2 * (v17 + 14);
        }
      }
      v18 = 0;
      *((_DWORD *)v5 + 7) = v14;
      *((_DWORD *)v5 + 5) = 0;
      *((_DWORD *)v5 + 4) = 0;
      v29 = a1[1];
      v19 = v14 + 76;
      if ( ((v29 >> v14) & 1) != 0 )
      {
        v21 = (_DWORD *)a1[v19];
        if ( v14 != 31 )
          v18 = 25 - (v14 >> 1);
        v22 = v30 << v18;
        while ( (v21[1] & 0xFFFFFFF8) != v30 )
        {
          v23 = (v22 >> 31) + 4;
          v22 *= 2;
          if ( v21[v23] == 0 )
          {
            v21[v23] = v5;
            goto LABEL_44;
          }
          v21 = (_DWORD *)v21[v23];
        }
        v24 = v21[2];
        *(_DWORD *)(v24 + 12) = v5;
        v21[2] = v5;
        *((_DWORD *)v5 + 2) = v24;
        *((_DWORD *)v5 + 3) = v21;
        *((_DWORD *)v5 + 6) = 0;
      }
      else
      {
        v20 = v19;
        a1[1] = v29 | (1 << v14);
        a1[v20] = v5;
        v21 = &a1[v20];
LABEL_44:
        *((_DWORD *)v5 + 6) = v21;
        *((_DWORD *)v5 + 3) = v5;
        *((_DWORD *)v5 + 2) = v5;
      }
    }
    else
    {
      v33 += len;
      a1[108] -= len;
      v3 = v2;
      v2[2] = v34;
    }
LABEL_46:
    v2 = v3;
    v3 = (char **)v34;
  }
  v25 = v32;
  if ( v32 < 0xFFF )
    v25 = 4095;
  a1[8] = v25;
  return v33;
}


//======================================================================
// sub_177074
// address: 0x00177074   size: 0x348 (840 bytes)
//======================================================================
unsigned int __fastcall sub_177074(_DWORD *a1, unsigned int *a2, unsigned int a3)
{
  _DWORD *v4; // r3
  unsigned int v5; // r12
  unsigned int v6; // r6
  unsigned int result; // r0
  size_t v8; // r6
  unsigned int v9; // r6
  int v10; // r7
  int v11; // r0
  _DWORD *v12; // r5
  int v13; // r7
  _DWORD *v14; // r12
  _DWORD *v15; // r6
  int v16; // r6
  int v17; // r0
  unsigned int v18; // r2
  int v19; // r6
  unsigned int v20; // r2
  unsigned int v21; // r0
  int v22; // r5
  int v23; // r3
  int v24; // r5
  int v25; // r6
  unsigned int *v26; // r7
  int v27; // r5
  int v28; // r3
  _DWORD *v29; // r3
  _DWORD *v30; // r2
  unsigned int v31; // r3
  unsigned int v32; // r7
  unsigned int v33; // r6
  int v34; // r0
  char v35; // r5
  _DWORD *v36; // r3
  int v37; // r4
  unsigned int v38; // r2
  int v39; // [sp+8h] [bp-Ch]
  unsigned int *v40; // [sp+Ch] [bp-8h]
  unsigned int v41; // [sp+Ch] [bp-8h]

  v4 = (unsigned int *)((char *)a2 + a3);
  v5 = a2[1];
  if ( (v5 & 1) != 0 )
    goto LABEL_32;
  v6 = *a2;
  result = (unsigned int)a2 - *a2;
  if ( (v5 & 3) == 0 )
  {
    v8 = v6 + 16 + a3;
    result = j_munmap((void *)result, v8);
    if ( result == 0 )
    {
      result = a1[108];
      a1[108] = result - v8;
    }
    return result;
  }
  a2 = (unsigned int *)((char *)a2 - *a2);
  a3 += v6;
  if ( result == a1[5] )
  {
    if ( (v4[1] & 3) == 3 )
    {
      a1[2] = a3;
      v4[1] &= ~1u;
      *(_DWORD *)(result + 4) = a3 | 1;
      *(_DWORD *)(result + a3) = a3;
      return result;
    }
  }
  else
  {
    v9 = v6 >> 3;
    if ( v9 <= 0x1F )
    {
      v10 = *(_DWORD *)(result + 8);
      v11 = *(_DWORD *)(result + 12);
      if ( v11 == v10 )
      {
        *a1 &= ~(1 << v9);
      }
      else
      {
        *(_DWORD *)(v10 + 12) = v11;
        *(_DWORD *)(v11 + 8) = v10;
      }
      goto LABEL_32;
    }
    v39 = *(_DWORD *)(result + 24);
    v12 = *(_DWORD **)(result + 12);
    if ( v12 == (_DWORD *)result )
    {
      v12 = *(_DWORD **)(result + 20);
      v14 = (_DWORD *)(result + 20);
      if ( v12 != nullptr || (v12 = *(_DWORD **)(result + 16), v14 = (_DWORD *)(result + 16), v12 != nullptr) )
      {
        while ( 1 )
        {
          v15 = v12 + 5;
          if ( v12[5] == 0 )
          {
            v15 = v12 + 4;
            if ( v12[4] == 0 )
              break;
          }
          v12 = (_DWORD *)*v15;
          v14 = v15;
        }
        *v14 = 0;
      }
    }
    else
    {
      v13 = *(_DWORD *)(result + 8);
      *(_DWORD *)(v13 + 12) = v12;
      v12[2] = v13;
    }
    if ( v39 != 0 )
    {
      if ( result == a1[*(_DWORD *)(result + 28) + 76] )
      {
        a1[*(_DWORD *)(result + 28) + 76] = v12;
        if ( v12 == nullptr )
        {
          a1[1] &= ~(1 << *(_DWORD *)(result + 28));
          goto LABEL_32;
        }
      }
      else
      {
        if ( *(_DWORD *)(v39 + 16) == result )
          *(_DWORD *)(v39 + 16) = v12;
        else
          *(_DWORD *)(v39 + 20) = v12;
        if ( v12 == nullptr )
          goto LABEL_32;
      }
      v12[6] = v39;
      v16 = *(_DWORD *)(result + 16);
      if ( v16 != 0 )
      {
        v12[4] = v16;
        *(_DWORD *)(v16 + 24) = v12;
      }
      v17 = *(_DWORD *)(result + 20);
      if ( v17 != 0 )
      {
        v12[5] = v17;
        *(_DWORD *)(v17 + 24) = v12;
      }
    }
  }
LABEL_32:
  result = v4[1];
  if ( (result & 2) == 0 )
  {
    if ( v4 == (_DWORD *)a1[6] )
    {
      result = a1[3];
      a1[6] = a2;
      v18 = a3 + result;
      a1[3] = v18;
      a2[1] = v18 | 1;
      if ( a2 == (unsigned int *)a1[5] )
      {
        a1[5] = 0;
        a1[2] = 0;
      }
      return result;
    }
    if ( v4 == (_DWORD *)a1[5] )
    {
      v19 = a1[2];
      a1[5] = a2;
      v20 = a3 + v19;
      a1[2] = v20;
      a2[1] = v20 | 1;
      *(unsigned int *)((char *)a2 + v20) = v20;
      return result;
    }
    v21 = result & 0xFFFFFFF8;
    a3 += v21;
    result = v21 >> 3;
    if ( result <= 0x1F )
    {
      v22 = v4[2];
      v23 = v4[3];
      if ( v23 == v22 )
      {
        result = 1 << result;
        *a1 &= ~result;
      }
      else
      {
        *(_DWORD *)(v22 + 12) = v23;
        *(_DWORD *)(v23 + 8) = v22;
      }
      goto LABEL_63;
    }
    result = v4[3];
    v24 = v4[6];
    if ( (_DWORD *)result == v4 )
    {
      result = v4[5];
      v40 = v4 + 5;
      if ( result != 0 || (v40 = v4 + 4, (result = v4[4]) != 0) )
      {
        while ( 1 )
        {
          v26 = (unsigned int *)(result + 20);
          if ( *(_DWORD *)(result + 20) == 0 )
          {
            v26 = (unsigned int *)(result + 16);
            if ( *(_DWORD *)(result + 16) == 0 )
              break;
          }
          result = *v26;
          v40 = v26;
        }
        *v40 = 0;
      }
    }
    else
    {
      v25 = v4[2];
      *(_DWORD *)(v25 + 12) = result;
      *(_DWORD *)(result + 8) = v25;
    }
    if ( v24 != 0 )
    {
      if ( v4 == (_DWORD *)a1[v4[7] + 76] )
      {
        a1[v4[7] + 76] = result;
        if ( result == 0 )
        {
          result = a1[1] & ~(1 << v4[7]);
          a1[1] = result;
          goto LABEL_63;
        }
      }
      else
      {
        if ( *(_DWORD **)(v24 + 16) == v4 )
          *(_DWORD *)(v24 + 16) = result;
        else
          *(_DWORD *)(v24 + 20) = result;
        if ( result == 0 )
          goto LABEL_63;
      }
      *(_DWORD *)(result + 24) = v24;
      v27 = v4[4];
      if ( v27 != 0 )
      {
        *(_DWORD *)(result + 16) = v27;
        *(_DWORD *)(v27 + 24) = result;
      }
      v28 = v4[5];
      if ( v28 != 0 )
      {
        *(_DWORD *)(result + 20) = v28;
        *(_DWORD *)(v28 + 24) = result;
      }
    }
LABEL_63:
    a2[1] = a3 | 1;
    *(unsigned int *)((char *)a2 + a3) = a3;
    if ( a2 == (unsigned int *)a1[5] )
    {
      a1[2] = a3;
      return result;
    }
    goto LABEL_65;
  }
  v4[1] = result & 0xFFFFFFFE;
  a2[1] = a3 | 1;
  *(unsigned int *)((char *)a2 + a3) = a3;
LABEL_65:
  result = a3 >> 3;
  if ( a3 >> 3 > 0x1F )
  {
    v31 = a3 >> 8;
    result = 31;
    if ( a3 >> 8 <= 0xFFFF )
    {
      v32 = ((v31 - 256) >> 16) & 8;
      v33 = (((v31 << v32) - 4096) >> 16) & 4;
      v34 = v31 << v32 << v33;
      result = ((a3 >> (((unsigned int)(v34 << (((unsigned int)(v34 - 0x4000) >> 16) & 2)) >> 15)
                      - (v32
                       + v33
                       + (((unsigned int)(v34 - 0x4000) >> 16) & 2))
                      + 21))
              & 1)
             + 2
             * (((unsigned int)(v34 << (((unsigned int)(v34 - 0x4000) >> 16) & 2)) >> 15)
              - (v32
               + v33
               + (((unsigned int)(v34 - 0x4000) >> 16) & 2))
              + 14);
    }
    v35 = 0;
    a2[7] = result;
    a2[5] = 0;
    a2[4] = 0;
    v41 = result + 76;
    if ( ((a1[1] >> result) & 1) != 0 )
    {
      v36 = (_DWORD *)a1[v41];
      if ( result != 31 )
        v35 = 25 - (result >> 1);
      result = a3 << v35;
      while ( (v36[1] & 0xFFFFFFF8) != a3 )
      {
        v37 = (result >> 31) + 4;
        result *= 2;
        if ( v36[v37] == 0 )
        {
          v36[v37] = a2;
          goto LABEL_81;
        }
        v36 = (_DWORD *)v36[v37];
      }
      v38 = v36[2];
      *(_DWORD *)(v38 + 12) = a2;
      v36[2] = a2;
      a2[3] = (unsigned int)v36;
      a2[2] = v38;
      a2[6] = 0;
    }
    else
    {
      a1[1] |= 1 << result;
      a1[v41] = a2;
      v36 = &a1[v41];
LABEL_81:
      a2[6] = (unsigned int)v36;
      a2[3] = (unsigned int)a2;
      a2[2] = (unsigned int)a2;
    }
  }
  else
  {
    v29 = &a1[2 * result + 10];
    if ( ((*a1 >> result) & 1) != 0 )
    {
      v30 = (_DWORD *)v29[2];
    }
    else
    {
      *a1 |= 1 << result;
      v30 = &a1[2 * result + 10];
    }
    v29[2] = a2;
    v30[3] = a2;
    a2[2] = (unsigned int)v30;
    a2[3] = (unsigned int)v29;
  }
  return result;
}


//======================================================================
// sub_1773C8
// address: 0x001773C8   size: 0x144 (324 bytes)
//======================================================================
int __fastcall sub_1773C8(_DWORD *a1, unsigned int a2)
{
  unsigned int v4; // r1
  unsigned int v5; // r3
  size_t v6; // r4
  unsigned int v7; // r7
  unsigned int *v8; // r6
  unsigned int v9; // r1
  unsigned int v10; // r3
  _BYTE *v11; // r7
  void *v12; // r4
  _BYTE *v13; // r0
  size_t v14; // r4
  int result; // r0
  unsigned int v16; // r7
  unsigned int v17; // [sp+4h] [bp-10h]
  unsigned int v18; // [sp+8h] [bp-Ch]
  unsigned int v19; // [sp+Ch] [bp-8h]

  if ( dword_4B939C == 0 )
    sub_17642C();
  if ( a2 > 0xFFFFFFBF )
    return 0;
  v4 = a1[6];
  if ( v4 == 0 )
    return 0;
  v17 = a2 + 40;
  v5 = a2 + 40;
  v6 = 0;
  v18 = a1[3];
  if ( v18 > v5 )
  {
    v7 = dword_4B93A4;
    v8 = sub_175F30((int)a1, v4);
    v19 = v8[3];
    if ( (v19 & 8) == 0 )
    {
      v6 = ((v18 + v7 - 1 - v17) / v7 - 1) * v7;
      if ( (v19 & 1) == 0 )
      {
        if ( v6 > 0x7FFFFFFE )
          v6 = 0x80000000 - v7;
        if ( sub_3C8C10(&dword_4B93B4, 1) != 0 )
          sub_176406(&dword_4B93B4);
        v11 = j_sbrk(0);
        if ( v11 != (_BYTE *)(*v8 + v8[1]) || (v12 = j_sbrk(-v6), v13 = j_sbrk(0), v12 == (void *)-1) || v13 >= v11 )
          v6 = 0;
        else
          v6 = v11 - v13;
        sub_3C8C04();
        dword_4B93B4 = 0;
LABEL_24:
        if ( v6 != 0 )
        {
          v8[1] -= v6;
          a1[108] -= v6;
          sub_175F4C(a1, a1[6], a1[3] - v6);
        }
        goto LABEL_26;
      }
      v9 = v8[1];
      if ( v9 >= v6 )
      {
        v10 = (unsigned int)(a1 + 113);
        while ( v10 < *v8 || v10 >= *v8 + v9 )
        {
          v10 = *(_DWORD *)(v10 + 8);
          if ( v10 == 0 )
          {
            v16 = v9 - v6;
            if ( j_mremap() != -1 || j_munmap((void *)(*v8 + v16), v6) == 0 )
              goto LABEL_24;
            break;
          }
        }
      }
    }
    v6 = 0;
  }
LABEL_26:
  v14 = sub_176E48(a1) + v6;
  result = 1;
  if ( v14 != 0 )
    return result;
  if ( a1[3] > a1[7] )
    a1[7] = -1;
  return 0;
}


//======================================================================
// sub_177520
// address: 0x00177520   size: 0x284 (644 bytes)
//======================================================================
_DWORD *__fastcall sub_177520(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  int v3; // r6
  unsigned int v6; // r7
  int v7; // r5
  unsigned int v8; // r7
  int v9; // r6
  unsigned int v10; // r0
  _DWORD *v11; // r3
  int v12; // r5
  int v13; // r5
  unsigned int v14; // r6
  unsigned int v15; // r2
  _DWORD *v16; // r1
  unsigned int v17; // r7
  unsigned int v18; // r7
  unsigned int v19; // r7
  unsigned int v20; // r2
  unsigned int *v21; // r5
  unsigned int v22; // r7
  int v23; // r6
  unsigned int v24; // r6
  unsigned int v25; // r7
  unsigned int v26; // r6
  int v27; // r5
  int v28; // r3
  _DWORD *v29; // r3
  int v30; // r5
  int v31; // r6
  _DWORD *v32; // r6
  int v33; // r5
  int v34; // r1
  char *v35; // r1
  _DWORD *v37; // [sp+4h] [bp-10h]
  _DWORD *v38; // [sp+Ch] [bp-8h]

  v3 = a2[1];
  v38 = a2;
  v6 = v3 & 0xFFFFFFF8;
  if ( (v3 & 3) != 0 )
  {
    if ( v6 >= a3 )
    {
      v15 = v6 - a3;
      if ( v6 - a3 <= 0xF )
        return v38;
LABEL_52:
      v35 = (char *)v38 + a3;
      v38[1] = a3 | v3 & 1 | 2;
      *((_DWORD *)v35 + 1) = v15 | 3;
      *(_DWORD *)&v35[v15 + 4] |= 1u;
      sub_177074(a1, (_DWORD *)((char *)v38 + a3), v15);
      return v38;
    }
    v16 = (_DWORD *)((char *)a2 + v6);
    if ( (_DWORD *)((char *)v38 + v6) == (_DWORD *)a1[6] )
    {
      v17 = v6 + a1[3];
      if ( v17 > a3 )
      {
        v18 = v17 - a3;
        v38[1] = a3 | v3 & 1 | 2;
        *(_DWORD *)((char *)v38 + a3 + 4) = v18 | 1;
        a1[6] = (char *)v38 + a3;
        a1[3] = v18;
        return v38;
      }
      return nullptr;
    }
    if ( v16 == (_DWORD *)a1[5] )
    {
      v19 = v6 + a1[2];
      if ( v19 < a3 )
        return nullptr;
      v20 = v19 - a3;
      if ( v19 - a3 <= 0xF )
      {
        v38[1] = v3 & 1 | 2 | v19;
        *(_DWORD *)((char *)v38 + v19 + 4) |= 1u;
        a1[2] = 0;
        a1[5] = 0;
      }
      else
      {
        v21 = (_DWORD *)((char *)v38 + a3 + v20);
        v38[1] = a3 | v3 & 1 | 2;
        *(_DWORD *)((char *)v38 + a3 + 4) = v20 | 1;
        v22 = v21[1];
        *v21 = v20;
        v21[1] = v22 & 0xFFFFFFFE;
        a1[2] = v20;
        a1[5] = (char *)v38 + a3;
      }
      return v38;
    }
    v23 = v16[1];
    if ( (v23 & 2) != 0 )
      return nullptr;
    v24 = v23 & 0xFFFFFFF8;
    v25 = v6 + v24;
    if ( v25 < a3 )
      return nullptr;
    v15 = v25 - a3;
    v26 = v24 >> 3;
    if ( v26 <= 0x1F )
    {
      v27 = v16[2];
      v28 = v16[3];
      if ( v28 == v27 )
      {
        *a1 &= ~(1 << v26);
      }
      else
      {
        *(_DWORD *)(v27 + 12) = v28;
        *(_DWORD *)(v28 + 8) = v27;
      }
      goto LABEL_50;
    }
    v29 = (_DWORD *)v16[3];
    v30 = v16[6];
    if ( v29 == v16 )
    {
      v29 = (_DWORD *)v16[5];
      v37 = v16 + 5;
      if ( v29 != nullptr || (v37 = v16 + 4, (v29 = (_DWORD *)v16[4]) != nullptr) )
      {
        while ( 1 )
        {
          v32 = v29 + 5;
          if ( v29[5] == 0 )
          {
            v32 = v29 + 4;
            if ( v29[4] == 0 )
              break;
          }
          v29 = (_DWORD *)*v32;
          v37 = v32;
        }
        *v37 = 0;
      }
    }
    else
    {
      v31 = v16[2];
      *(_DWORD *)(v31 + 12) = v29;
      v29[2] = v31;
    }
    if ( v30 != 0 )
    {
      if ( v16 == (_DWORD *)a1[v16[7] + 76] )
      {
        a1[v16[7] + 76] = v29;
        if ( v29 == nullptr )
        {
          a1[1] &= ~(1 << v16[7]);
          goto LABEL_50;
        }
      }
      else
      {
        if ( *(_DWORD **)(v30 + 16) == v16 )
          *(_DWORD *)(v30 + 16) = v29;
        else
          *(_DWORD *)(v30 + 20) = v29;
        if ( v29 == nullptr )
          goto LABEL_50;
      }
      v29[6] = v30;
      v33 = v16[4];
      if ( v33 != 0 )
      {
        v29[4] = v33;
        *(_DWORD *)(v33 + 24) = v29;
      }
      v34 = v16[5];
      if ( v34 != 0 )
      {
        v29[5] = v34;
        *(_DWORD *)(v34 + 24) = v29;
      }
    }
LABEL_50:
    v3 = v38[1];
    if ( v15 <= 0xF )
    {
      v38[1] = v38[1] & 1 | 2 | v25;
      *(_DWORD *)((char *)v38 + v25 + 4) |= 1u;
      return v38;
    }
    goto LABEL_52;
  }
  if ( a3 <= 0xFF )
    return nullptr;
  if ( v6 >= a3 + 4 && v6 - a3 <= 2 * dword_4B93A4 )
    return v38;
  v7 = *a2;
  v8 = *a2 + 16 + v6;
  v9 = -dword_4B93A0 & (dword_4B93A0 + 30 + a3);
  v10 = j_mremap();
  if ( v10 == -1 )
    return nullptr;
  v11 = (_DWORD *)(v10 + v7);
  v12 = v9 - v7 - 16;
  v11[1] = v12;
  v38 = v11;
  v13 = (int)v11 + v12;
  *(_DWORD *)(v13 + 4) = 7;
  *(_DWORD *)(v13 + 8) = 0;
  if ( v10 < a1[4] )
    a1[4] = v10;
  v14 = a1[108] - v8 + v9;
  a1[108] = v14;
  if ( v14 > a1[109] )
    a1[109] = v14;
  return v38;
}


//======================================================================
// sub_1777AC
// address: 0x001777AC   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall sub_1777AC(int a1, int *a2, int a3)
{
  _DWORD *v4; // r5
  _DWORD *v6; // r6
  int v7; // r3
  unsigned int *v8; // r1
  int v9; // r2
  unsigned int v10; // r2
  unsigned int v11; // r2
  char *v12; // r2
  int v14; // [sp+0h] [bp-Ch]
  int *v15; // [sp+4h] [bp-8h]

  v4 = (_DWORD *)a1;
  if ( (*(_DWORD *)(a1 + 444) & 2) == 0
    || (v6 = (_DWORD *)(a1 + 448), (a1 = sub_3C8C10(a1 + 448, 1)) == 0)
    || (a1 = sub_176406(v6)) == 0 )
  {
    v15 = &a2[a3];
    while ( a2 != v15 )
    {
      v7 = *a2;
      if ( *a2 != 0 )
      {
        v8 = (unsigned int *)(v7 - 8);
        v9 = *(_DWORD *)(v7 - 4);
        *a2 = 0;
        v10 = v9 & 0xFFFFFFF8;
        v14 = *(_DWORD *)(v7 - 4);
        if ( v15 == a2 + 1 || a2[1] != (v14 & 0xFFFFFFF8) + v7 )
        {
          a1 = sub_177074(v4, v8, v10);
        }
        else
        {
          v11 = (*(_DWORD *)((v14 & 0xFFFFFFF8) + v7 - 8 + 4) & 0xFFFFFFF8) + v10;
          *(_DWORD *)(v7 - 4) = *(_DWORD *)(v7 - 4) & 1 | 2 | v11;
          v12 = (char *)v8 + v11;
          a1 = *((_DWORD *)v12 + 1) | 1;
          *((_DWORD *)v12 + 1) = a1;
          a2[1] = v7;
        }
      }
      ++a2;
    }
    if ( v4[3] > v4[7] )
      a1 = sub_1773C8(v4, 0);
    if ( (v4[111] & 2) != 0 )
    {
      sub_3C8C04(a1);
      v4[112] = 0;
    }
  }
  return 0;
}


//======================================================================
// sub_17786C
// address: 0x0017786C   size: 0xFC (252 bytes)
//======================================================================
unsigned int __fastcall sub_17786C(unsigned int result)
{
  _DWORD *v1; // r4
  unsigned int *v2; // r2
  int v3; // r5
  int v4; // r3
  int v5; // r7
  unsigned int i; // r3
  int v7; // r1
  int v8; // [sp+4h] [bp-10h]
  int v9; // [sp+8h] [bp-Ch]
  int v10; // [sp+Ch] [bp-8h]

  v1 = (_DWORD *)result;
  if ( dword_4B939C == 0 )
    result = sub_17642C();
  if ( (v1[111] & 2) == 0 || (result = sub_3C8C10(v1 + 112, 1)) == 0 || (result = sub_176406(v1 + 112)) == 0 )
  {
    v9 = v1[6];
    if ( v9 != 0 )
    {
      v2 = v1 + 113;
      v10 = v1[109];
      v8 = v1[108];
      v3 = v8 - 40 - v1[3];
      do
      {
        result = *v2;
        v4 = 0;
        v5 = (*v2 + 8) & 7;
        if ( v5 != 0 )
          v4 = 8 - v5;
        for ( i = result + v4; i >= result; i += v7 & 0xFFFFFFF8 )
        {
          if ( i >= result + v2[1] )
            break;
          if ( i == v9 )
            break;
          v7 = *(_DWORD *)(i + 4);
          if ( v7 == 7 )
            break;
          if ( (*(_DWORD *)(i + 4) & 3) == 1 )
            v3 -= v7 & 0xFFFFFFF8;
        }
        v2 = (unsigned int *)v2[2];
      }
      while ( v2 != nullptr );
    }
    else
    {
      v3 = 0;
      v8 = 0;
      v10 = 0;
    }
    if ( (v1[111] & 2) != 0 )
    {
      sub_3C8C04(result);
      v1[112] = 0;
    }
    j_fprintf((FILE *)((char *)&_sF + 168), "max system bytes = %10lu\n", v10);
    j_fprintf((FILE *)((char *)&_sF + 168), "system bytes     = %10lu\n", v8);
    return j_fprintf((FILE *)((char *)&_sF + 168), "in use bytes     = %10lu\n", v3);
  }
  return result;
}


//======================================================================
// sub_17797C
// address: 0x0017797C   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall sub_17797C(int a1, int a2)
{
  int v2; // r4
  _DWORD *v5; // r4
  int v6; // r3
  int v7; // r2
  int v8; // r2

  v2 = 0;
  if ( (a1 & 7) != 0 )
    v2 = 8 - (a1 & 7);
  v5 = (_DWORD *)(a1 + v2);
  j_memset(v5 + 2, 0, 0x1E0u);
  v5[1] = 483;
  v5[6] = a1;
  v5[115] = a1;
  v5[111] = a2;
  v5[110] = a2;
  v5[116] = a2;
  v6 = 0;
  v7 = dword_4B93B0;
  v5[11] = dword_4B939C;
  v5[10] = 4095;
  v5[119] = 0;
  v5[120] = 0;
  v5[113] = v7 | 4;
  do
  {
    v8 = (int)&v5[2 * v6++ + 12];
    *(_DWORD *)(v8 + 12) = v8;
    *(_DWORD *)(v8 + 8) = v8;
  }
  while ( v6 != 32 );
  sub_175F4C(v5 + 2, (int)v5 + (v5[1] & 0xFFFFFFF8), a1 + a2 - ((_DWORD)v5 + (v5[1] & 0xFFFFFFF8)) - 40);
  return v5 + 2;
}


//======================================================================
// sub_1786DC
// address: 0x001786DC   size: 0x156 (342 bytes)
//======================================================================
_DWORD *__fastcall sub_1786DC(int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r4
  unsigned int i; // r3
  _DWORD *v6; // r6
  _DWORD *v7; // r0
  unsigned int v8; // r6
  unsigned int *v9; // r5
  char *v10; // r6
  unsigned int v11; // r2
  unsigned int v12; // r4
  unsigned int v13; // r1
  unsigned int v14; // r3
  int v15; // r4
  unsigned int v16; // r2
  char *v17; // r1
  int v18; // r3
  unsigned int v20; // [sp+4h] [bp-8h]

  v4 = a2;
  if ( a2 <= 0xF )
    v4 = 16;
  if ( (v4 & (v4 - 1)) != 0 )
  {
    for ( i = 16; i < v4; i *= 2 )
      ;
    v4 = i;
  }
  if ( a3 >= -64 - v4 )
  {
    if ( a1 != nullptr )
      *(_DWORD *)j___errno() = 12;
    return nullptr;
  }
  v20 = 16;
  if ( a3 > 0xA )
    v20 = (a3 + 11) & 0xFFFFFFF8;
  if ( a1 == dword_4B93B8 )
    v7 = dlmalloc(v4 + 12 + v20);
  else
    v7 = mspace_malloc(a1, v4 + 12 + v20);
  v8 = (unsigned int)v7;
  if ( v7 == nullptr )
    return nullptr;
  v9 = v7 - 2;
  if ( (a1[111] & 2) != 0 && sub_3C8C10(a1 + 112, 1) != 0 && sub_176406(a1 + 112) != 0 )
    return nullptr;
  if ( (v8 & (v4 - 1)) != 0 )
  {
    v10 = (char *)(((v8 + v4 - 1) & -v4) - 8);
    if ( (unsigned int)(v10 - (char *)v9) <= 0xF )
      v10 += v4;
    v11 = v10 - (char *)v9;
    v12 = v9[1] & 0xFFFFFFF8;
    v13 = v12 - (v10 - (char *)v9);
    if ( v9[1] << 30 != 0 )
    {
      *((_DWORD *)v10 + 1) = *((_DWORD *)v10 + 1) & 1 | 2 | v13;
      *(unsigned int *)((char *)v9 + v12 + 4) |= 1u;
      v9[1] = v9[1] & 1 | 2 | v11;
      *((_DWORD *)v10 + 1) |= 1u;
      sub_177074(a1, v9, v11);
    }
    else
    {
      v14 = *v9;
      *((_DWORD *)v10 + 1) = v13;
      *(_DWORD *)v10 = v11 + v14;
    }
  }
  else
  {
    v10 = (char *)v9;
  }
  v15 = *((_DWORD *)v10 + 1);
  if ( (v15 & 3) != 0 && (v15 & 0xFFFFFFF8) > v20 + 16 )
  {
    v16 = (v15 & 0xFFFFFFF8) - v20;
    v17 = &v10[v20];
    *((_DWORD *)v10 + 1) = *((_DWORD *)v10 + 1) & 1 | 2 | v20;
    *((_DWORD *)v17 + 1) = v16 | 3;
    *(_DWORD *)&v17[v16 + 4] = *(_DWORD *)&v10[v20 + 4 + v16] | 1;
    sub_177074(a1, (unsigned int *)&v10[v20], v16);
  }
  v18 = a1[111];
  v6 = v10 + 8;
  if ( (v18 & 2) != 0 )
  {
    sub_3C8C04(v18 << 30);
    a1[112] = 0;
  }
  return v6;
}


//======================================================================
// sub_178904
// address: 0x00178904   size: 0x1CA (458 bytes)
//======================================================================
_DWORD *__fastcall sub_178904(int *a1, unsigned int a2, _DWORD *a3, char a4, int a5)
{
  int v7; // r5
  _DWORD *v9; // r3
  unsigned int v10; // r2
  unsigned int v11; // r1
  int v12; // r5
  int v13; // r5
  _DWORD *v14; // r0
  char *v15; // r5
  unsigned int v16; // r6
  int i; // r2
  unsigned int v18; // r3
  unsigned int v19; // r1
  unsigned int v21; // [sp+8h] [bp-1Ch]
  unsigned int v22; // [sp+Ch] [bp-18h]
  unsigned int v23; // [sp+10h] [bp-14h]
  _DWORD *v24; // [sp+14h] [bp-10h]

  if ( dword_4B939C[0] == 0 )
    sub_17642C();
  if ( a5 != 0 )
  {
    v7 = a5;
    if ( a2 == 0 )
      return (_DWORD *)v7;
    v23 = 0;
  }
  else
  {
    if ( a2 == 0 )
    {
      if ( a1 == dword_4B93B8 )
        return dlmalloc(0);
      else
        return mspace_malloc(a1, 0);
    }
    v23 = 16;
    if ( 4 * a2 > 0xA )
      v23 = (4 * a2 + 11) & 0xFFFFFFF8;
  }
  if ( (a4 & 1) != 0 )
  {
    v22 = 16;
    if ( *a3 > 0xAu )
      v22 = (*a3 + 11) & 0xFFFFFFF8;
    v21 = a2 * v22;
  }
  else
  {
    v9 = a3;
    v21 = 0;
    while ( v9 != &a3[a2] )
    {
      v10 = 16;
      if ( *v9 > 0xAu )
        v10 = (*v9 + 11) & 0xFFFFFFF8;
      ++v9;
      v21 += v10;
    }
    v22 = 0;
  }
  v11 = v21 + v23 - 4;
  v12 = a1[111];
  a1[111] = v12 & 0xFFFFFFFE;
  v13 = v12 & 1;
  if ( a1 == dword_4B93B8 )
    v14 = dlmalloc(v11);
  else
    v14 = mspace_malloc(a1, v11);
  v24 = v14;
  if ( v13 != 0 )
    a1[111] |= 1u;
  if ( v14 == nullptr || (a1[111] & 2) != 0 && sub_3C8C10(a1 + 112, 1) != 0 && sub_176406(a1 + 112) != 0 )
    return nullptr;
  v15 = (char *)(v24 - 2);
  v16 = *(v24 - 1) & 0xFFFFFFF8;
  if ( (a4 & 2) != 0 )
    j_memset(v24, 0, v16 - 4 - v23);
  if ( a5 == 0 )
  {
    *(_DWORD *)&v15[v21 + 4] = (v16 - v21) | 3;
    v16 = v21;
    a5 = (int)v24 + v21;
  }
  for ( i = 0; ; ++i )
  {
    *(_DWORD *)(a5 + 4 * i) = v15 + 8;
    if ( i == a2 - 1 )
      break;
    v18 = v22;
    if ( v22 == 0 )
    {
      v18 = 16;
      v19 = a3[i];
      if ( v19 > 0xA )
        v18 = (v19 + 11) & 0xFFFFFFF8;
    }
    *((_DWORD *)v15 + 1) = v18 | 3;
    v16 -= v18;
    v15 += v18;
  }
  *((_DWORD *)v15 + 1) = v16 | 3;
  v7 = a5;
  if ( (a1[111] & 2) != 0 )
  {
    sub_3C8C04(3);
    a1[112] = 0;
  }
  return (_DWORD *)v7;
}


//======================================================================
// sub_17B370
// address: 0x0017B370   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_17B370(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_17CC30
// address: 0x0017CC30   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_17CC30(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 8))(a1);
}


//======================================================================
// sub_17CC3A
// address: 0x0017CC3A   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_17CC3A(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// sub_17E938
// address: 0x0017E938   size: 0x8C (140 bytes)
//======================================================================
float *__fastcall sub_17E938(float *a1, float a2, float a3)
{
  double v4; // r4
  float v5; // r0
  double v6; // r6
  double v7; // r4
  double v8; // r6
  float v9; // r0
  float v10; // r0
  float v11; // r0
  float v14; // [sp+4h] [bp-10h]
  double v15; // [sp+8h] [bp-Ch]

  v4 = (float)(a3 * 0.017453);
  v5 = j_cos(v4);
  v14 = v5;
  v6 = (float)(a2 * 0.017453);
  v15 = j_cos(v6);
  v7 = j_sin(v4);
  v8 = j_sin(v6);
  v9 = v15;
  *a1 = v14 * v9;
  v10 = v7;
  a1[1] = v10;
  v11 = v8;
  a1[2] = v14 * v11;
  return a1;
}

