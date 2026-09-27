// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_220000

//======================================================================
// sub_2200AC
// address: 0x002200AC   size: 0x2EC (748 bytes)
//======================================================================
int __fastcall sub_2200AC(int a1, unsigned int **a2)
{
  _DWORD *v3; // r0
  int v4; // r2
  _DWORD *v5; // r0
  int v6; // r3
  _DWORD *v7; // r5
  _DWORD *v8; // r0
  _DWORD *v9; // r1
  _DWORD *v10; // r2
  int v11; // r0
  int i; // r3
  int v13; // r4
  int v14; // r1
  int *v15; // r4
  char v16; // r3^3
  int v17; // r1
  _DWORD *v18; // r4
  int k; // r6
  int v20; // r5
  int v21; // r3
  unsigned int *v22; // r0
  unsigned int v23; // r5
  unsigned int *v24; // r4
  unsigned int v25; // r0
  int v26; // r1
  int v27; // r1
  int v28; // r3
  const char **v29; // r3
  unsigned int m; // r2
  const char *v31; // r0
  const char *v32; // r0
  int *v34; // [sp+8h] [bp-44h]
  int v35; // [sp+Ch] [bp-40h]
  int j; // [sp+Ch] [bp-40h]
  int *v37; // [sp+Ch] [bp-40h]
  int v38; // [sp+10h] [bp-3Ch]
  unsigned int v40; // [sp+1Ch] [bp-30h] BYREF
  int Fields; // [sp+20h] [bp-2Ch] BYREF
  _DWORD v42[4]; // [sp+24h] [bp-28h] BYREF
  _DWORD v43[6]; // [sp+34h] [bp-18h] BYREF

  Fields = 0;
  v34 = *(int **)(a1 + 104);
  v38 = *(_DWORD *)(a1 + 100);
  if ( *(_DWORD *)(a1 + 716) != 0 )
    goto LABEL_2;
  Fields = (*(int (__fastcall **)(int, int, int *, unsigned int *))(a1 + 508))(a1, 1735811442, v34, &v40);
  if ( Fields == 0 )
  {
    Fields = (*(int (__fastcall **)(int, int, int *, unsigned int *))(a1 + 508))(a1, 1719034226, v34, &v40);
    if ( Fields == 0 )
    {
      v35 = FT_Stream_Pos((int)v34);
      Fields = FT_Stream_ReadFields(v34, byte_434B4C, (int)v42);
      if ( Fields == 0 )
      {
        if ( v42[0] != 0x10000
          || HIWORD(v42[1]) != 2
          || HIWORD(v42[2]) != 20
          || LOWORD(v42[2]) > 0x3FFEu
          || HIWORD(v42[3]) != 4 * (LOWORD(v42[2]) + 1)
          || LOWORD(v42[3]) > 0x7EFFu
          || 20 * LOWORD(v42[2]) + LOWORD(v42[1]) + HIWORD(v42[3]) * (unsigned int)LOWORD(v42[3]) > v40 )
        {
          return 8;
        }
        v3 = ft_mem_alloc(v38, 40, &Fields);
        v4 = Fields;
        *(_DWORD *)(a1 + 716) = v3;
        if ( v4 == 0 )
        {
          v3[3] = 4 * (LOWORD(v42[2]) * LOWORD(v42[3]) + 5 + 2 * (LOWORD(v42[3]) + 3 * LOWORD(v42[2])))
                + 5 * LOWORD(v42[2]);
          v5 = ft_mem_alloc(v38, *(_DWORD *)(*(_DWORD *)(a1 + 716) + 12), &Fields);
          v6 = Fields;
          v7 = v5;
          if ( Fields == 0 )
          {
            *(_DWORD *)(*(_DWORD *)(a1 + 716) + 8) = v5;
            *v5 = LOWORD(v42[2]);
            v5[1] = -1;
            v5[2] = LOWORD(v42[3]);
            v8 = v5 + 5;
            v7[3] = v8;
            v9 = &v8[6 * LOWORD(v42[2])];
            v7[4] = v9;
            v10 = &v9[2 * LOWORD(v42[3])];
            while ( v6 < LOWORD(v42[3]) )
            {
              v11 = 8 * v6++;
              *(_DWORD *)(v11 + v7[4]) = v10;
              v10 += LOWORD(v42[2]);
            }
            for ( i = 0; ; ++i )
            {
              v13 = (int)v10 + 5 * i;
              if ( i >= LOWORD(v42[2]) )
                break;
              v14 = 24 * i;
              *(_DWORD *)(v14 + v7[3]) = v13;
            }
            Fields = FT_Stream_Seek(v34, v35 + LOWORD(v42[1]));
            if ( Fields == 0 )
            {
              v15 = (int *)v7[3];
              for ( j = 0; j < LOWORD(v42[2]); ++j )
              {
                Fields = FT_Stream_ReadFields(v34, byte_434B70, (int)v43);
                if ( Fields != 0 )
                  return Fields;
                v16 = HIBYTE(v43[0]);
                v15[4] = v43[0];
                v15[1] = v43[1];
                v15[2] = v43[2];
                v15[3] = v43[3];
                v15[5] = HIWORD(v43[4]);
                *(_BYTE *)*v15 = v16;
                *(_BYTE *)(*v15 + 1) = *((_WORD *)v15 + 9);
                *(_BYTE *)(*v15 + 2) = BYTE1(v15[4]);
                *(_BYTE *)(*v15 + 3) = v15[4];
                v17 = *v15;
                v15 += 6;
                *(_BYTE *)(v17 + 4) = 0;
              }
              v18 = (_DWORD *)v7[4];
              for ( k = 0; k < LOWORD(v42[3]); ++k )
              {
                v20 = FT_Stream_EnterFrame(v34, 4 * (LOWORD(v42[2]) + 1));
                Fields = v20;
                if ( v20 != 0 )
                  return Fields;
                v18[1] = FT_Stream_GetUShort((int)v34);
                FT_Stream_GetUShort((int)v34);
                while ( v20 < LOWORD(v42[2]) )
                {
                  v21 = 4 * v20++;
                  v37 = (int *)(*v18 + v21);
                  *v37 = FT_Stream_GetULong((int)v34);
                }
                FT_Stream_ExitFrame(v34);
                v18 += 2;
              }
LABEL_2:
              if ( a2 != nullptr )
              {
                v22 = (unsigned int *)ft_mem_alloc(v38, *(_DWORD *)(*(_DWORD *)(a1 + 716) + 12), &Fields);
                v23 = Fields;
                v24 = v22;
                if ( Fields == 0 )
                {
                  j_memcpy(v22, *(const void **)(*(_DWORD *)(a1 + 716) + 8), *(_DWORD *)(*(_DWORD *)(a1 + 716) + 12));
                  v25 = v24[2];
                  v26 = (int)&v24[6 * *v24 + 5];
                  v24[3] = (unsigned int)(v24 + 5);
                  v24[4] = v26;
                  v27 = v26 + 8 * v25;
                  while ( v23 < v24[2] )
                  {
                    v28 = 8 * v23++;
                    *(_DWORD *)(v28 + v24[4]) = v27;
                    v27 += 4 * *v24;
                  }
                  v29 = (const char **)v24[3];
                  for ( m = 0; ; ++m )
                  {
                    if ( m >= *v24 )
                    {
                      *a2 = v24;
                      return Fields;
                    }
                    *v29 = (const char *)(v27 + 5 * m);
                    v31 = v29[4];
                    if ( v31 == (const char *)2003265652 )
                    {
                      v32 = "Weight";
                    }
                    else if ( v31 == (const char *)2003072104 )
                    {
                      v32 = "Width";
                    }
                    else if ( v31 == (const char *)1869640570 )
                    {
                      v32 = "OpticalSize";
                    }
                    else
                    {
                      if ( v31 != (const char *)1936486004 )
                        goto LABEL_51;
                      v32 = "Slant";
                    }
                    *v29 = v32;
LABEL_51:
                    v29 += 6;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return Fields;
}


//======================================================================
// sub_2203D0
// address: 0x002203D0   size: 0x26E (622 bytes)
//======================================================================
int __fastcall sub_2203D0(int a1, int a2, _DWORD *a3)
{
  int v3; // r5
  int v4; // r1
  int v6; // r4
  int i; // r3
  int v8; // r2
  int v9; // r3
  int v10; // r6
  int v11; // r0
  int v12; // r3
  int v13; // r1
  unsigned int v14; // r5
  _DWORD *v15; // r6
  unsigned int v16; // r5
  _DWORD *v17; // r6
  int v18; // r3
  int v19; // r0
  int v20; // r3
  unsigned int v21; // r6
  unsigned int j; // r5
  int v23; // r0
  int v24; // r6
  int v25; // r5
  void *v26; // r0
  int v27; // r1
  int *v29; // [sp+Ch] [bp-40h]
  int v30; // [sp+10h] [bp-3Ch]
  _DWORD *v31; // [sp+10h] [bp-3Ch]
  int v32; // [sp+14h] [bp-38h]
  int v35; // [sp+20h] [bp-2Ch]
  int v36; // [sp+24h] [bp-28h]
  int v37; // [sp+28h] [bp-24h] BYREF
  int Fields; // [sp+2Ch] [bp-20h] BYREF
  _BYTE v39[4]; // [sp+30h] [bp-1Ch] BYREF
  _DWORD v40[6]; // [sp+34h] [bp-18h] BYREF

  v3 = *(_DWORD *)(a1 + 100);
  *(_BYTE *)(a1 + 712) = 0;
  v4 = *(_DWORD *)(a1 + 716);
  v37 = 0;
  v35 = v3;
  if ( v4 == 0 )
  {
    v37 = sub_2200AC(a1, nullptr);
    if ( v37 != 0 )
      return v37;
  }
  v6 = *(_DWORD *)(a1 + 716);
  if ( a2 != **(_DWORD **)(v6 + 8) )
    return 6;
  for ( i = 0; i != a2; ++i )
  {
    if ( (unsigned int)(a3[i] + 0x10000) > 0x20000 )
      return 6;
  }
  if ( *(_DWORD *)(v6 + 36) == 0 )
  {
    v29 = *(int **)(a1 + 104);
    v30 = v29[7];
    Fields = (*(int (__fastcall **)(int, int, int *, _BYTE *))(a1 + 508))(a1, 1735811442, v29, v39);
    if ( Fields == 0 )
    {
      v36 = FT_Stream_Pos((int)v29);
      Fields = FT_Stream_ReadFields(v29, byte_434B90, (int)v40);
      if ( Fields == 0 )
      {
        v10 = v40[4];
        v11 = v40[0];
        *(_DWORD *)(v6 + 24) = HIWORD(v40[1]);
        v12 = LOWORD(v40[3]);
        *(_DWORD *)(v6 + 32) = LOWORD(v40[3]);
        if ( v11 != 0x10000 || LOWORD(v40[1]) != **(unsigned __int16 **)(v6 + 8) )
        {
          Fields = 8;
          goto LABEL_36;
        }
        *(_DWORD *)(v6 + 36) = ft_mem_realloc(v30, 4, 0, v12 + 1, 0, &Fields);
        if ( Fields == 0 )
        {
          v32 = v36 + v10;
          v13 = *(_DWORD *)(v6 + 32) + 1;
          if ( (v40[3] & 0x10000) != 0 )
          {
            Fields = FT_Stream_EnterFrame(v29, 4 * v13);
            v14 = Fields;
            if ( Fields != 0 )
              goto LABEL_36;
            while ( v14 <= *(_DWORD *)(v6 + 32) )
            {
              v15 = (_DWORD *)(*(_DWORD *)(v6 + 36) + 4 * v14++);
              *v15 = FT_Stream_GetULong((int)v29) + v32;
            }
          }
          else
          {
            Fields = FT_Stream_EnterFrame(v29, 2 * v13);
            v16 = Fields;
            if ( Fields != 0 )
              goto LABEL_36;
            while ( v16 <= *(_DWORD *)(v6 + 32) )
            {
              v17 = (_DWORD *)(*(_DWORD *)(v6 + 36) + 4 * v16++);
              *v17 = 2 * FT_Stream_GetUShort((int)v29) + v32;
            }
          }
          FT_Stream_ExitFrame(v29);
          v18 = *(_DWORD *)(v6 + 24);
          if ( v18 != 0 )
          {
            v19 = ft_mem_realloc(v30, 4, 0, v18 * LOWORD(v40[1]), 0, &Fields);
            v20 = Fields;
            *(_DWORD *)(v6 + 28) = v19;
            if ( v20 == 0 )
            {
              Fields = FT_Stream_Seek(v29, v36 + v40[2]);
              if ( Fields == 0 )
              {
                Fields = FT_Stream_EnterFrame(v29, LOWORD(v40[1]) * 2 * *(_DWORD *)(v6 + 24));
                v21 = Fields;
                if ( Fields == 0 )
                {
                  while ( v21 < *(_DWORD *)(v6 + 24) )
                  {
                    for ( j = 0; j < LOWORD(v40[1]); ++j )
                    {
                      v31 = (_DWORD *)(*(_DWORD *)(v6 + 28) + 4 * (j + LOWORD(v40[1]) * v21));
                      *v31 = 4 * (__int16)FT_Stream_GetUShort((int)v29);
                    }
                    ++v21;
                  }
                  FT_Stream_ExitFrame(v29);
                }
              }
            }
          }
        }
      }
    }
LABEL_36:
    v37 = Fields;
    if ( Fields != 0 )
      return v37;
  }
  v8 = *(_DWORD *)(v6 + 4);
  v9 = 0;
  if ( v8 != 0 )
  {
    while ( 1 )
    {
      if ( v9 == a2 )
      {
        v25 = 0;
        goto LABEL_45;
      }
      if ( *(_DWORD *)(v8 + 4 * v9) != a3[v9] )
        break;
      ++v9;
    }
    v25 = 2;
  }
  else
  {
    v23 = ft_mem_realloc(v35, 4, 0, a2, 0, &v37);
    v24 = v37;
    *(_DWORD *)(v6 + 4) = v23;
    v25 = 1;
    if ( v24 != 0 )
      return v37;
  }
LABEL_45:
  v26 = *(void **)(v6 + 4);
  *(_DWORD *)v6 = a2;
  j_memcpy(v26, a3, 4 * a2);
  *(_BYTE *)(a1 + 712) = 1;
  v27 = *(_DWORD *)(a1 + 672);
  if ( v27 != 0 )
  {
    if ( v25 == 1 )
    {
      sub_21F598(a1, *(int **)(a1 + 104));
    }
    else if ( v25 == 2 )
    {
      ft_mem_free(v35, v27);
      *(_DWORD *)(a1 + 672) = 0;
      sub_21F858(a1, *(int **)(a1 + 104));
    }
  }
  return v37;
}


//======================================================================
// sub_220648
// address: 0x00220648   size: 0x27A (634 bytes)
//======================================================================
int __fastcall sub_220648(int a1, int a2, int a3)
{
  unsigned int *v3; // r7
  int v4; // r0
  unsigned int v5; // r6
  _DWORD *v6; // r4
  int *v7; // r5
  int v8; // r2
  int v9; // r0
  int v10; // r1
  int v11; // r3
  int v12; // r2
  __int64 v13; // r0
  int v14; // r0
  __int64 v15; // r0
  int v16; // r6
  int ULong; // r5
  int v18; // r0
  int v19; // r0
  int v20; // r3
  unsigned __int16 *v21; // r4
  int UShort; // r0
  int v23; // r5
  int v24; // r4
  int j; // r5
  int v26; // r1
  unsigned __int16 *v27; // r4
  _DWORD *v28; // r5
  unsigned int m; // r6
  int v30; // r3
  int v31; // r2
  int v32; // r6
  int v33; // r3
  __int64 v34; // r0
  __int64 v35; // r0
  int i; // [sp+Ch] [bp-40h]
  int v38; // [sp+Ch] [bp-40h]
  int *v40; // [sp+10h] [bp-3Ch]
  unsigned int k; // [sp+10h] [bp-3Ch]
  _DWORD *v43; // [sp+18h] [bp-34h]
  _DWORD *v44; // [sp+1Ch] [bp-30h]
  int v45; // [sp+20h] [bp-2Ch]
  int v46; // [sp+24h] [bp-28h]
  int v47; // [sp+24h] [bp-28h]
  int v48; // [sp+28h] [bp-24h]
  int v49; // [sp+2Ch] [bp-20h]
  int v51; // [sp+34h] [bp-18h]
  unsigned int v52; // [sp+3Ch] [bp-10h] BYREF
  int v53; // [sp+40h] [bp-Ch] BYREF
  unsigned int v54; // [sp+44h] [bp-8h] BYREF

  v52 = 0;
  v51 = *(_DWORD *)(a1 + 100);
  if ( *(_DWORD *)(a1 + 716) == 0 )
  {
    v43 = nullptr;
    v52 = sub_2200AC(a1, nullptr);
    if ( v52 != 0 )
      goto LABEL_46;
  }
  v3 = *(unsigned int **)(*(_DWORD *)(a1 + 716) + 8);
  v48 = *(_DWORD *)(a1 + 716);
  if ( a2 != *v3 )
  {
    v52 = 6;
    ft_mem_free(v51, 0);
    return v52;
  }
  v4 = ft_mem_realloc(v51, 4, 0, a2, 0, (int *)&v52);
  v5 = v52;
  v43 = (_DWORD *)v4;
  if ( v52 != 0 )
    goto LABEL_46;
  v6 = (_DWORD *)v3[3];
  v7 = (int *)v4;
  while ( v5 < *v3 )
  {
    v8 = v6[3];
    v9 = *(_DWORD *)(a3 + 4 * v5);
    if ( v9 > v8 || (v10 = v6[1], v9 < v10) )
    {
      v52 = 6;
      goto LABEL_46;
    }
    v11 = v6[2];
    if ( v9 >= v11 )
    {
      if ( v8 == v11 )
      {
        *v7 = 0;
        goto LABEL_18;
      }
      LODWORD(v15) = v9 - v11;
      HIDWORD(v15) = 0x10000;
      v14 = FT_MulDiv(v15, v8 - v11);
    }
    else
    {
      v12 = v10 - v11;
      LODWORD(v13) = v9 - v11;
      HIDWORD(v13) = 0x10000;
      v14 = -FT_MulDiv(v13, v12);
    }
    *v7 = v14;
LABEL_18:
    ++v5;
    v6 += 6;
    ++v7;
  }
  if ( *(_BYTE *)(v48 + 16) == 0 )
  {
    v53 = *(unsigned __int8 *)(v48 + 16);
    v40 = *(int **)(a1 + 104);
    v45 = v40[7];
    v16 = *(_DWORD *)(a1 + 716);
    *(_BYTE *)(v16 + 16) = 1;
    v53 = (*(int (__fastcall **)(int, int, int *, unsigned int *))(a1 + 508))(a1, 1635148146, v40, &v54);
    if ( v53 == 0 )
    {
      v53 = FT_Stream_EnterFrame(v40, v54);
      if ( v53 == 0 )
      {
        ULong = FT_Stream_GetULong((int)v40);
        v18 = FT_Stream_GetULong((int)v40);
        v49 = v18;
        if ( ULong == 0x10000 && v18 == **(_DWORD **)(v16 + 8) )
        {
          v19 = ft_mem_realloc(v45, 8, 0, v18, 0, &v53);
          v20 = v53;
          v21 = (unsigned __int16 *)v19;
          *(_DWORD *)(v16 + 20) = v19;
          if ( v20 == 0 )
          {
            for ( i = 0; i < v49; ++i )
            {
              UShort = FT_Stream_GetUShort((int)v40);
              *v21 = UShort;
              *((_DWORD *)v21 + 1) = ft_mem_realloc(v45, 8, 0, UShort, 0, &v53);
              v23 = v53;
              if ( v53 != 0 )
              {
                v24 = i - 1;
                for ( j = 8 * i; ; *(_DWORD *)(*(_DWORD *)(v16 + 20) + j + 4) = 0 )
                {
                  j -= 8;
                  v26 = *(_DWORD *)(v16 + 20);
                  if ( v24 < 0 )
                    break;
                  ft_mem_free(v45, *(_DWORD *)(v26 + j + 4));
                  --v24;
                }
                ft_mem_free(v45, v26);
                *(_DWORD *)(v16 + 20) = 0;
                break;
              }
              while ( v23 < *v21 )
              {
                v46 = 8 * v23;
                v44 = (_DWORD *)(*((_DWORD *)v21 + 1) + 8 * v23);
                *v44 = 4 * (__int16)FT_Stream_GetUShort((int)v40);
                ++v23;
                v47 = *((_DWORD *)v21 + 1) + v46;
                *(_DWORD *)(v47 + 4) = 4 * (__int16)FT_Stream_GetUShort((int)v40);
              }
              v21 += 4;
            }
          }
        }
        FT_Stream_ExitFrame(v40);
      }
    }
  }
  v27 = *(unsigned __int16 **)(v48 + 20);
  if ( v27 != nullptr )
  {
    v28 = v43;
    for ( k = 0; k < *v3; ++k )
    {
      for ( m = 1; m < *v27; ++m )
      {
        v30 = *((_DWORD *)v27 + 1);
        v31 = *(_DWORD *)(v30 + 8 * m);
        v38 = 8 * m;
        if ( *v28 < v31 )
        {
          v32 = 8 * (m + 0x1FFFFFFF);
          v33 = *(_DWORD *)(v30 + v32);
          HIDWORD(v34) = 0x10000;
          LODWORD(v34) = *v28 - v33;
          LODWORD(v35) = FT_MulDiv(v34, v31 - v33);
          HIDWORD(v35) = *(_DWORD *)(*((_DWORD *)v27 + 1) + v38 + 4) - *(_DWORD *)(*((_DWORD *)v27 + 1) + v32 + 4);
          *v28 = FT_MulDiv(v35, 0x10000) + *(_DWORD *)(*((_DWORD *)v27 + 1) + v32 + 4);
          break;
        }
      }
      v27 += 4;
      ++v28;
    }
  }
  v52 = sub_2203D0(a1, a2, v43);
LABEL_46:
  ft_mem_free(v51, (int)v43);
  return v52;
}


//======================================================================
// sub_2208CC
// address: 0x002208CC   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_2208CC(int a1, int a2, unsigned int a3)
{
  int v3; // r3
  _DWORD *v4; // r3
  _DWORD *v6; // r0
  int v7; // r3

  if ( (unsigned int)(a2 - 1) > 2 )
  {
    v3 = 132;
LABEL_7:
    *(_DWORD *)(a1 + 12) = v3;
    return 1;
  }
  v4 = (_DWORD *)(a1 + 8 * (a2 + 54) + 4);
  if ( *v4 == 0 )
  {
    v3 = 138;
    goto LABEL_7;
  }
  if ( a3 > *(_DWORD *)(a1 + 8 * (a2 + 54) + 8) )
  {
    v3 = 131;
    goto LABEL_7;
  }
  v6 = (_DWORD *)(a1 + 252);
  v6[26] = *v4;
  v7 = v4[1];
  v6[27] = a3;
  v6[25] = a2;
  v6[28] = v7;
  return 0;
}


//======================================================================
// sub_22090A
// address: 0x0022090A   size: 0xAE (174 bytes)
//======================================================================
_DWORD *__fastcall sub_22090A(_DWORD *result, _DWORD *a2)
{
  unsigned int v2; // r2
  int v3; // r4
  unsigned int v4; // r3
  int v5; // r5
  int *v6; // r3
  int *v7; // r5
  int v8; // r2
  int v9; // r3
  _DWORD *v10; // r2

  v2 = a2[1];
  v3 = (int)result;
  v4 = result[105] + 1;
  if ( v2 < v4 )
  {
    v5 = result[99];
    result = (_DWORD *)result[101];
    if ( v4 == v5 )
    {
      v6 = &result[5 * v2];
      if ( v6[3] == v2 )
        goto LABEL_10;
    }
    v6 = *(int **)(v3 + 404);
    v7 = &result[5 * v5];
    while ( v6 < v7 )
    {
      result = (_DWORD *)v6[3];
      if ( result == (_DWORD *)v2 )
        break;
      v6 += 5;
    }
    if ( v6 != v7 )
    {
LABEL_10:
      if ( *((_BYTE *)v6 + 16) != 0 )
      {
        result = (_DWORD *)(&stru_1A8 + 4);
        v8 = *(_DWORD *)(v3 + 428);
        if ( v8 >= *(_DWORD *)(v3 + 432) )
        {
          v9 = 130;
LABEL_16:
          *(_DWORD *)(v3 + 12) = v9;
          return result;
        }
        if ( (int)*a2 > 0 )
        {
          v10 = (_DWORD *)(*(_DWORD *)(v3 + 436) + 20 * v8);
          *v10 = *(_DWORD *)(v3 + 352);
          v10[1] = *(_DWORD *)(v3 + 360) + 1;
          v10[2] = *a2;
          v10[3] = v6[1];
          v10[4] = v6[2];
          ++*(_DWORD *)(v3 + 428);
          result = (_DWORD *)sub_2208CC(v3, *v6, v6[1]);
          *(_BYTE *)(v3 + 376) = 0;
        }
        return result;
      }
    }
  }
  v9 = 134;
  goto LABEL_16;
}


//======================================================================
// sub_2209B8
// address: 0x002209B8   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall sub_2209B8(int a1, int a2, int a3)
{
  unsigned int result; // r0
  int v4; // r2

  if ( a2 < 0 )
    return -((a3 - a2 + 32) & 0xFFFFFFC0)
         & ((int)((-((a3 - a2 + 32) & 0xFFFFFFC0) - 1) | -((a3 - a2 + 32) & 0xFFFFFFC0)) >> 31);
  result = 0;
  if ( a2 != 0 )
  {
    v4 = a2 + a3 + 32;
    if ( v4 > 0 )
      return v4 & 0x7FFFFFC0;
  }
  return result;
}


//======================================================================
// sub_2209E8
// address: 0x002209E8   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall sub_2209E8(int a1, int a2, int a3)
{
  unsigned int result; // r0
  int v4; // r3
  unsigned int v5; // r1

  if ( a2 < 0 )
  {
    v5 = (a3 - a2) & 0xFFFFFFC0;
    result = -32 - v5;
    v4 = (-33 - v5) | (-32 - v5);
    goto LABEL_5;
  }
  result = ((a2 + a3) & 0xFFFFFFC0) + 32;
  v4 = ~result;
  if ( a2 != 0 )
LABEL_5:
    result &= v4 >> 31;
  return result;
}


//======================================================================
// sub_220A14
// address: 0x00220A14   size: 0x2C (44 bytes)
//======================================================================
unsigned int __fastcall sub_220A14(int a1, int a2, int a3)
{
  unsigned int result; // r0
  int v4; // r1

  if ( a2 < 0 )
    return -((a3 - a2) & 0xFFFFFFC0) & ((int)((-((a3 - a2) & 0xFFFFFFC0) - 1) | -((a3 - a2) & 0xFFFFFFC0)) >> 31);
  result = 0;
  if ( a2 != 0 )
  {
    v4 = a2 + a3;
    if ( v4 > 0 )
      return v4 & 0x7FFFFFC0;
  }
  return result;
}


//======================================================================
// sub_220A40
// address: 0x00220A40   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall sub_220A40(int a1, int a2, int a3)
{
  unsigned int result; // r0
  int v4; // r2

  if ( a2 < 0 )
    return -((a3 - a2 + 63) & 0xFFFFFFC0)
         & ((int)((-((a3 - a2 + 63) & 0xFFFFFFC0) - 1) | -((a3 - a2 + 63) & 0xFFFFFFC0)) >> 31);
  result = 0;
  if ( a2 != 0 )
  {
    v4 = a2 + a3 + 63;
    if ( v4 > 0 )
      return v4 & 0x7FFFFFC0;
  }
  return result;
}


//======================================================================
// sub_220A70
// address: 0x00220A70   size: 0x30 (48 bytes)
//======================================================================
unsigned int __fastcall sub_220A70(int a1, int a2, int a3)
{
  unsigned int result; // r0
  int v4; // r2

  if ( a2 < 0 )
    return -((a3 - a2 + 16) & 0xFFFFFFE0)
         & ((int)((-((a3 - a2 + 16) & 0xFFFFFFE0) - 1) | -((a3 - a2 + 16) & 0xFFFFFFE0)) >> 31);
  result = 0;
  if ( a2 != 0 )
  {
    v4 = a2 + a3 + 16;
    if ( v4 > 0 )
      return v4 & 0x7FFFFFE0;
  }
  return result;
}


//======================================================================
// sub_220AA0
// address: 0x00220AA0   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_220AA0(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  int v4; // r2
  int v6; // r2

  v3 = a1[120];
  if ( a2 < 0 )
  {
    v6 = -((a1[121] - v3 - a2 + a3) & -a1[119]);
    return (v6 & (((v6 - 1) | v6) >> 31)) - v3;
  }
  else
  {
    v4 = (a2 - v3 + a1[121] + a3) & -a1[119];
    if ( a2 != 0 )
      v4 &= ~v4 >> 31;
    return v4 + v3;
  }
}


//======================================================================
// sub_220AEC
// address: 0x00220AEC   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_220AEC(_DWORD *a1, int a2, int a3)
{
  int v3; // r5
  int v4; // r6
  int v5; // r0

  v3 = a1[120];
  v4 = a1[119];
  if ( a2 < 0 )
    return (-((a1[121] - v3 - a2 + a3) / v4 * v4)
          & (((-((a1[121] - v3 - a2 + a3) / v4 * v4) - 1) | -((a1[121] - v3 - a2 + a3) / v4 * v4)) >> 31))
         - v3;
  v5 = (a2 - v3 + a1[121] + a3) / v4 * v4;
  if ( a2 != 0 )
    v5 &= ~v5 >> 31;
  return v5 + v3;
}


//======================================================================
// sub_220B40
// address: 0x00220B40   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_220B40(int result)
{
  unsigned int v1; // r3
  int v2; // r4
  unsigned int v3; // r2
  int v4; // r1
  int v5; // r3
  int v6; // r2
  _DWORD *v7; // r2

  v1 = *(_DWORD *)(result + 416);
  v2 = result;
  v3 = v1 + 20 * *(_DWORD *)(result + 408);
  while ( 1 )
  {
    if ( v1 >= v3 )
    {
      v5 = 128;
      goto LABEL_10;
    }
    result = *(unsigned __int8 *)(v2 + 368);
    if ( *(unsigned __int8 *)(v1 + 12) == result )
    {
      result = *(unsigned __int8 *)(v1 + 16);
      if ( *(_BYTE *)(v1 + 16) != 0 )
        break;
    }
    v1 += 20;
  }
  result = 428;
  v4 = *(_DWORD *)(v2 + 428);
  if ( v4 < *(_DWORD *)(v2 + 432) )
  {
    v6 = *(_DWORD *)(v2 + 436);
    *(_DWORD *)(v2 + 428) = v4 + 1;
    v7 = (_DWORD *)(v6 + 20 * v4);
    *v7 = *(_DWORD *)(v2 + 352);
    v7[1] = *(_DWORD *)(v2 + 360) + 1;
    v7[2] = 1;
    v7[3] = *(_DWORD *)(v1 + 4);
    v7[4] = *(_DWORD *)(v1 + 8);
    result = sub_2208CC(v2, *(_DWORD *)v1, *(_DWORD *)(v1 + 4));
    *(_BYTE *)(v2 + 376) = 0;
    return result;
  }
  v5 = 130;
LABEL_10:
  *(_DWORD *)(v2 + 12) = v5;
  return result;
}


//======================================================================
// sub_220BC6
// address: 0x00220BC6   size: 0xEC (236 bytes)
//======================================================================
unsigned int __fastcall sub_220BC6(_DWORD *a1, unsigned int a2, unsigned int a3, unsigned int a4, unsigned int a5)
{
  unsigned int result; // r0
  unsigned int v7; // r5
  unsigned int v8; // r2
  unsigned int v9; // r1
  int v10; // r1
  int v11; // r6
  unsigned int v12; // r1
  int v13; // r3
  int v14; // r2
  int v15; // r1
  int v16; // r3
  int v17; // r2
  int v18; // r1
  int v19; // r7
  int v20; // r0
  int v21; // r0
  __int64 v22; // r0
  int v23; // [sp+0h] [bp-2Ch]
  int v24; // [sp+4h] [bp-28h]
  int v25; // [sp+8h] [bp-24h]
  int v26; // [sp+Ch] [bp-20h]
  int v28; // [sp+14h] [bp-18h]
  int v29; // [sp+18h] [bp-14h]
  int v30; // [sp+1Ch] [bp-10h]
  int v31; // [sp+20h] [bp-Ch]
  int v32; // [sp+24h] [bp-8h]

  result = a3;
  v7 = a2;
  v8 = a5;
  if ( a2 <= result )
  {
    v9 = a1[3];
    if ( a4 < v9 && a5 < v9 )
    {
      v10 = a1[2];
      v23 = *(_DWORD *)(8 * a4 + v10);
      v11 = *(_DWORD *)(8 * a5 + v10);
      if ( v23 > v11 )
      {
        v12 = a4;
        a4 = a5;
        v8 = v12;
      }
      else
      {
        v11 = *(_DWORD *)(8 * a4 + v10);
        v23 = *(_DWORD *)(8 * a5 + v10);
      }
      v13 = 8 * a4;
      v14 = 8 * v8;
      v24 = *(_DWORD *)(*a1 + v13);
      v28 = *(_DWORD *)(*a1 + v14);
      v15 = a1[1];
      v25 = *(_DWORD *)(v15 + v13);
      v30 = *(_DWORD *)(v15 + v14);
      v29 = v25 - v24;
      v31 = v30 - v28;
      v16 = 8 * v7;
      if ( v11 == v23 )
      {
        do
        {
          v17 = *(_DWORD *)(*a1 + v16);
          v18 = v17 + v31;
          if ( v17 <= v24 )
            v18 = v17 + v29;
          result = a3;
          ++v7;
          *(_DWORD *)(a1[1] + v16) = v18;
          v16 += 8;
        }
        while ( v7 <= a3 );
      }
      else
      {
        v19 = 8 * v7;
        v26 = 0;
        v32 = 0;
        do
        {
          v20 = *(_DWORD *)(*a1 + v19);
          if ( v20 > v24 )
          {
            if ( v20 < v28 )
            {
              if ( v32 == 0 )
              {
                LODWORD(v22) = v30 - v25;
                HIDWORD(v22) = 0x10000;
                v26 = FT_MulDiv(v22, v23 - v11);
                v32 = 1;
              }
              v21 = v25 + FT_MulFix(*(_DWORD *)(a1[2] + v19) - v11, v26);
            }
            else
            {
              v21 = v20 + v31;
            }
          }
          else
          {
            v21 = v20 + v29;
          }
          ++v7;
          *(_DWORD *)(a1[1] + v19) = v21;
          result = a3;
          v19 += 8;
        }
        while ( v7 <= a3 );
      }
    }
  }
  return result;
}


//======================================================================
// sub_220CB4
// address: 0x00220CB4   size: 0x3E (62 bytes)
//======================================================================
const char *__fastcall sub_220CB4(int a1, char *a2)
{
  const char *result; // r0
  int v5; // r0
  int Module; // r0
  int v7; // r3

  result = ft_service_list_lookup((const char *)off_4523C0, a2);
  if ( result == nullptr && a1 != 0 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( v5 != 0 && (Module = FT_Get_Module(v5, "sfnt")) != 0 && (v7 = *(_DWORD *)(*(_DWORD *)Module + 20)) != 0 )
      return (const char *)(*(int (__fastcall **)(int, char *))(v7 + 16))(a1, a2);
    else
      return nullptr;
  }
  return result;
}


//======================================================================
// sub_220CFC
// address: 0x00220CFC   size: 0x76 (118 bytes)
//======================================================================
int __fastcall sub_220CFC(__int64 a1, int a2)
{
  int v2; // r5
  int v3; // r4
  _DWORD *v4; // r4
  int v5; // r6
  int v6; // r7
  __int64 v7; // r0
  int v8; // r1
  int v9; // r2
  int v11[3]; // [sp+0h] [bp-Ch] BYREF

  *(_QWORD *)v11 = a1;
  v11[2] = a2;
  v2 = a1 + 252;
  v3 = a1;
  if ( *(_DWORD *)(a1 + 256) == 0 )
  {
    if ( *(_BYTE *)(*(_DWORD *)a1 + 692) != 0 )
    {
      if ( *(_BYTE *)(a1 + 302) != 0 )
      {
LABEL_4:
        v4 = (_DWORD *)(a1 + 244);
LABEL_6:
        *(_DWORD *)(v2 + 4) = *v4;
        return *(_DWORD *)(v2 + 4);
      }
    }
    else
    {
      v5 = a1 + 254;
      if ( *(_WORD *)(a1 + 296) == 0 )
        goto LABEL_4;
      LOWORD(a1) = *(_WORD *)(a1 + 294);
      if ( *(_WORD *)(v5 + 40) != 0 )
      {
        HIDWORD(a1) = *(_DWORD *)(v3 + 244);
        LODWORD(a1) = (__int16)a1;
        v6 = FT_MulDiv(a1, 0x4000);
        HIDWORD(v7) = *(_DWORD *)(v3 + 248);
        LODWORD(v7) = *(__int16 *)(v5 + 42);
        *(_QWORD *)v11 = __PAIR64__(FT_MulDiv(v7, 0x4000), v6);
        *(_DWORD *)(v2 + 4) = FT_Vector_Length(v11, v8, v9);
        return *(_DWORD *)(v2 + 4);
      }
    }
    v4 = (_DWORD *)(v3 + 248);
    goto LABEL_6;
  }
  return *(_DWORD *)(v2 + 4);
}


//======================================================================
// sub_220D72
// address: 0x00220D72   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_220D72(__int64 a1, int a2)
{
  int *v3; // r4
  int v4; // r5
  int v5; // r0
  int result; // r0

  HIDWORD(a1) *= 4;
  v3 = (int *)(*(_DWORD *)(a1 + 384) + HIDWORD(a1));
  v4 = *v3;
  v5 = sub_220CFC(a1, a2);
  result = FT_DivFix(a2, v5);
  *v3 = v4 + result;
  return result;
}


//======================================================================
// sub_220D94
// address: 0x00220D94   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_220D94(__int64 a1, int a2)
{
  int *v3; // r4
  int v4; // r0
  int result; // r0

  HIDWORD(a1) *= 4;
  v3 = (int *)(*(_DWORD *)(a1 + 384) + HIDWORD(a1));
  v4 = sub_220CFC(a1, a2);
  result = FT_DivFix(a2, v4);
  *v3 = result;
  return result;
}


//======================================================================
// sub_220DB2
// address: 0x00220DB2   size: 0x1A (26 bytes)
//======================================================================
unsigned int __fastcall sub_220DB2(__int64 a1, int a2)
{
  int v2; // r4
  int v3; // r0

  HIDWORD(a1) *= 4;
  v2 = *(_DWORD *)(HIDWORD(a1) + *(_DWORD *)(a1 + 384));
  v3 = sub_220CFC(a1, a2);
  return FT_MulFix(v2, v3);
}


//======================================================================
// sub_220DCC
// address: 0x00220DCC   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall sub_220DCC(__int64 a1, int a2)
{
  int v2; // r4
  int v3; // r0

  v2 = *(unsigned __int16 *)(a1 + 252);
  v3 = sub_220CFC(a1, a2);
  return FT_MulFix(v2, v3);
}


//======================================================================
// sub_220DE4
// address: 0x00220DE4   size: 0xE2 (226 bytes)
//======================================================================
__int64 __fastcall sub_220DE4(__int64 a1)
{
  unsigned int v1; // r6
  int v2; // r4
  int v3; // r3
  int v4; // r6
  int v5; // r6
  unsigned int i; // r5
  int v7; // r3
  int v8; // r2
  int v9; // r3
  __int64 v10; // r0
  int v11; // r3
  int v12; // r7
  int v13; // r7
  int v14; // r0
  __int64 v16; // [sp+0h] [bp-Ch]

  v16 = a1;
  v1 = HIDWORD(a1);
  v2 = a1;
  if ( *(_BYTE *)(*(_DWORD *)a1 + 692) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 28);
    v4 = 2 * HIDWORD(a1);
    if ( v3 < 2 * HIDWORD(a1) )
    {
      v4 = *(_DWORD *)(a1 + 28);
      if ( *(_BYTE *)(a1 + 561) != 0 )
        *(_DWORD *)(a1 + 12) = 129;
    }
    v5 = v3 - v4;
    *(_DWORD *)(a1 + 28) = v5;
    *(_DWORD *)(a1 + 32) = v5;
  }
  else
  {
    for ( i = 1; i <= v1; ++i )
    {
      v7 = *(_DWORD *)(v2 + 28);
      if ( v7 <= 1 )
      {
        if ( *(_BYTE *)(v2 + 561) != 0 )
          *(_DWORD *)(v2 + 12) = 129;
        *(_DWORD *)(v2 + 28) = 0;
        break;
      }
      *(_DWORD *)(v2 + 28) = v7 - 2;
      v8 = *(_DWORD *)(v2 + 24);
      v9 = 4 * (v7 - 1);
      HIDWORD(v10) = *(unsigned __int16 *)(v8 + v9);
      LODWORD(v16) = HIDWORD(v10);
      HIDWORD(v16) = *(_DWORD *)(v8 + v9 - 4);
      if ( (unsigned int)*(unsigned __int16 *)(v2 + 44) <= HIDWORD(v10) )
      {
        if ( *(_BYTE *)(v2 + 561) != 0 )
          *(_DWORD *)(v2 + 12) = 134;
      }
      else
      {
        v11 = *(unsigned __int8 *)(v2 + 368);
        v12 = BYTE4(v16) >> 4;
        if ( v11 == 113 )
        {
          v12 += 16;
        }
        else if ( *(_BYTE *)(v2 + 368) == 114 )
        {
          v12 += 32;
        }
        LODWORD(v10) = v2;
        v13 = v12 + *(__int16 *)(v2 + 332);
        if ( sub_220DCC(v10, v11 << 24) == v13 )
        {
          v14 = (BYTE4(v16) & 0xF) - 8;
          if ( (BYTE4(v16) & 0xFu) >= 8 )
            v14 = (BYTE4(v16) & 0xF) - 7;
          (*(void (__fastcall **)(int, int, _DWORD, int))(v2 + 584))(
            v2,
            v2 + 36,
            v16,
            (v14 << 6) / (1 << *(_WORD *)(v2 + 334)));
        }
      }
    }
    *(_DWORD *)(v2 + 32) = *(_DWORD *)(v2 + 28);
  }
  return v16;
}


//======================================================================
// sub_220ECC
// address: 0x00220ECC   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall sub_220ECC(int a1, unsigned int a2, _WORD *a3)
{
  int v5; // r1
  int v7; // r4
  int v8; // r6
  int v9; // r0
  int v10; // r7
  int v11; // r0
  int v12; // r7
  int v13; // r4
  int v14; // r1
  int v15; // r3
  int v16; // r2
  int v18; // [sp+0h] [bp-Ch] BYREF
  unsigned int v19; // [sp+4h] [bp-8h]
  _WORD *v20; // [sp+8h] [bp-4h]

  v18 = a1;
  v19 = a2;
  v20 = a3;
  v5 = a1 + 0xFFFF;
  if ( (unsigned int)(a1 + 0xFFFF) > 0x1FFFE || (v5 = a2 + 0xFFFF, a2 + 0xFFFF > 0x1FFFE) )
  {
    v19 = a2;
    v18 = a1;
    v12 = FT_Vector_Length(&v18, v5, 131070);
    v13 = FT_MulDiv((unsigned int)a1 | 0x400000000000LL, v12);
    v11 = FT_MulDiv(a2 | 0x400000000000LL, v12);
    v14 = 0;
    v15 = v13 * v13 + v11 * v11;
    if ( v13 < 0 )
    {
      v13 = -v13;
      v14 = 1;
    }
    v16 = 0;
    if ( v11 < 0 )
    {
      v11 = -v11;
      v16 = 1;
    }
    while ( v15 <= 0xFFFFFFF )
    {
      if ( v13 >= v11 )
        ++v11;
      else
        ++v13;
      v15 = v13 * v13 + v11 * v11;
    }
    while ( v15 > 268451839 )
    {
      if ( v13 >= v11 )
        --v11;
      else
        --v13;
      v15 = v13 * v13 + v11 * v11;
    }
    if ( v14 != 0 )
      v13 = -v13;
    if ( v16 != 0 )
      v11 = -v11;
    *a3 = v13;
    goto LABEL_24;
  }
  v7 = a1 << 8;
  v8 = a2 << 8;
  v18 = a1 << 8;
  v19 = v8;
  v9 = FT_Vector_Length(&v18, v5, 131070);
  v10 = v9;
  if ( v9 != 0 )
  {
    *a3 = FT_MulDiv((unsigned int)v7 | 0x400000000000LL, v9);
    LOWORD(v11) = FT_MulDiv((unsigned int)v8 | 0x400000000000LL, v10);
LABEL_24:
    a3[1] = v11;
  }
  return 0;
}


//======================================================================
// sub_220FB4
// address: 0x00220FB4   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_220FB4(int a1, unsigned int a2, unsigned int a3, char a4, _WORD *a5)
{
  int v5; // r3
  _DWORD *v6; // r2
  _DWORD *v7; // r4
  unsigned __int64 v8; // r0
  char v9; // r2

  if ( *(unsigned __int16 *)(a1 + 116) > a2 && *(unsigned __int16 *)(a1 + 80) > a3 )
  {
    v6 = (_DWORD *)(*(_DWORD *)(a1 + 88) + 8 * a3);
    v7 = (_DWORD *)(*(_DWORD *)(a1 + 124) + 8 * a2);
    LODWORD(v8) = *v6 - *v7;
    HIDWORD(v8) = v6[1] - v7[1];
    v9 = BYTE4(v8) | v8;
    if ( v8 == 0 )
    {
      LODWORD(v8) = 0x4000;
      a4 = v9;
    }
    if ( (a4 & 1) != 0 )
      v8 = __PAIR64__(v8, -HIDWORD(v8));
    sub_220ECC(v8, HIDWORD(v8), a5);
    return 0;
  }
  else
  {
    v5 = 1;
    if ( *(_BYTE *)(a1 + 561) != 0 )
      *(_DWORD *)(a1 + 12) = 134;
  }
  return v5;
}


//======================================================================
// sub_221018
// address: 0x00221018   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_221018(int result, unsigned __int16 *a2)
{
  unsigned int v2; // r7
  int v3; // r4
  char v4; // r12
  unsigned int v5; // r6
  int v6; // r7
  int v7; // r6
  _DWORD *v8; // r2
  _DWORD *v9; // r3
  char v10; // r5
  unsigned __int64 v11; // r0
  int v12; // r5
  _DWORD *v13; // r7
  _DWORD *v14; // r6
  int v15; // r0
  unsigned int v16; // r1
  int v17; // r2

  v2 = *a2;
  v3 = result;
  v4 = *(_BYTE *)(result + 368);
  if ( *(unsigned __int16 *)(result + 80) > v2
    && (v5 = (unsigned __int16)*((_DWORD *)a2 + 1), *(unsigned __int16 *)(result + 116) > v5) )
  {
    v6 = 8 * v2;
    v7 = 8 * v5;
    v8 = (_DWORD *)(*(_DWORD *)(result + 84) + v6);
    v9 = (_DWORD *)(*(_DWORD *)(result + 120) + v7);
    LODWORD(v11) = *v8 - *v9;
    v10 = v4;
    HIDWORD(v11) = v8[1] - v9[1];
    if ( v11 == 0 )
    {
      v10 = 0;
      LODWORD(v11) = 0x4000;
    }
    v12 = v10 & 1;
    if ( v12 != 0 )
      v11 = __PAIR64__(v11, v9[1] - v8[1]);
    sub_220ECC(v11, HIDWORD(v11), (_WORD *)(v3 + 290));
    v13 = (_DWORD *)(*(_DWORD *)(v3 + 88) + v6);
    v14 = (_DWORD *)(*(_DWORD *)(v3 + 124) + v7);
    v15 = *v13 - *v14;
    v16 = v13[1] - v14[1];
    if ( v12 != 0 )
    {
      v16 = *v13 - *v14;
      v15 = v14[1] - v13[1];
    }
    sub_220ECC(v15, v16, (_WORD *)(v3 + 294));
    if ( *(_BYTE *)(*(_DWORD *)v3 + 692) != 0 )
    {
      v17 = *(unsigned __int8 *)(v3 + 302);
      *(_WORD *)(v3 + 298) = (v17 != 0) << 14;
      *(_WORD *)(v3 + 300) = (v17 == 0) << 14;
    }
    return sub_21DF68(v3);
  }
  else if ( *(_BYTE *)(result + 561) != 0 )
  {
    *(_DWORD *)(result + 12) = 134;
  }
  return result;
}


//======================================================================
// sub_221B3A
// address: 0x00221B3A   size: 0x8 (8 bytes)
//======================================================================
void sub_221B3A()
{
  int v0; // r4

  *(_DWORD *)(v0 + 12) = 130;
  JUMPOUT(0x222F80);
}


//======================================================================
// sub_222B76
// address: 0x00222B76   size: 0x4D6 (1238 bytes)
//======================================================================
int __fastcall sub_222B76(
        unsigned int a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        int a7,
        int (__fastcall *a8)(int),
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        unsigned int a14,
        unsigned int a15,
        int *a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21)
{
  int v21; // r4
  unsigned int *v22; // r5
  _DWORD *v23; // r6
  int v24; // r12
  unsigned int v25; // r1
  int v26; // r0
  int v27; // r7
  unsigned int v28; // r5
  int v29; // r6
  int v30; // r3
  int v31; // r2
  _DWORD *v32; // r3
  int v33; // r0
  _DWORD *v34; // r3
  int v35; // r5
  char v36; // r3
  int v37; // r0
  int v38; // r3
  int v39; // r2
  unsigned int v40; // r5
  unsigned int v41; // r3
  unsigned int v42; // r5
  int v43; // r5
  signed int v44; // r0
  int *v45; // r5
  int v46; // r1
  int *v47; // r6
  int v48; // r0
  int v49; // r3
  int v50; // r0
  unsigned int v51; // r0
  int v52; // r5
  char v53; // r3
  int v54; // r0
  int v55; // r6
  int v56; // r3
  _DWORD *v57; // r0
  _DWORD *v58; // r3
  int v59; // r0
  int v60; // r2
  unsigned int v61; // r7
  int v62; // r6
  int v63; // r3
  unsigned int v64; // r3
  int v65; // r3
  unsigned int v66; // r3
  unsigned int v67; // r2
  int v68; // r0
  int v69; // r2
  int v70; // r1
  _DWORD *v72; // r2
  int v73; // r1
  int v74; // r2
  int v75; // r3
  _DWORD *v76; // [sp+2Ch] [bp+2Ch]

  if ( a4 > 0xDF )
  {
    a15 = *v22 << 16;
    a14 = (unsigned __int16)*v22;
    v25 = v22[1];
    if ( *(unsigned __int16 *)(v21 + 80) <= a14
      || v25 + 1 >= *(_DWORD *)(v21 + 380) + 1
      || *(unsigned __int16 *)(v21 + 284) >= (unsigned int)*(unsigned __int16 *)(v21 + 44) )
    {
      if ( *(_BYTE *)(v21 + 561) != 0 )
        *(_DWORD *)(v21 + 12) = 134;
      goto LABEL_31;
    }
    v26 = v24;
    if ( v25 != -1 )
    {
      a8 = *(int (__fastcall **)(int))(v21 + 592);
      v26 = a8(v21);
    }
    v27 = v23[19];
    if ( ((v26 - v27 + ((v26 - v27) >> 31)) ^ ((v26 - v27) >> 31)) >= v23[18] )
    {
      v27 = v26;
    }
    else if ( v26 < 0 )
    {
      v27 = -v27;
    }
    if ( *(_WORD *)(v21 + 346) == 0 )
    {
      v28 = a15 >> 13;
      v76 = (_DWORD *)(*(_DWORD *)(v21 + 84) + (a15 >> 13));
      *v76 = *(_DWORD *)(8 * *(unsigned __int16 *)(v21 + 284) + *(_DWORD *)(v21 + 48))
           + sub_21DD1E(v27, *(__int16 *)(v21 + 298));
      v29 = *(_DWORD *)(v21 + 84) + (a15 >> 13);
      *(_DWORD *)(v29 + 4) = *(_DWORD *)(*(_DWORD *)(v21 + 48) + 8 * *(unsigned __int16 *)(v21 + 284) + 4)
                           + sub_21DD1E(v27, *(__int16 *)(v21 + 300));
      v30 = *(_DWORD *)(v21 + 84);
      v31 = *(_DWORD *)(v21 + 88);
      *(_DWORD *)(v31 + v28) = *(_DWORD *)(v30 + v28);
      *(_DWORD *)(v31 + v28 + 4) = *(_DWORD *)(v30 + v28 + 4);
    }
    a16 = (int *)(a15 >> 13);
    v32 = (_DWORD *)(*(_DWORD *)(v21 + 48) + 8 * *(unsigned __int16 *)(v21 + 284));
    v33 = (*(int (__fastcall **)(int, int, int))(v21 + 576))(
            v21,
            *(_DWORD *)(*(_DWORD *)(v21 + 84) + (a15 >> 13)) - *v32,
            *(_DWORD *)(*(_DWORD *)(v21 + 84) + (a15 >> 13) + 4) - v32[1]);
    v34 = (_DWORD *)(*(_DWORD *)(v21 + 52) + 8 * *(unsigned __int16 *)(v21 + 284));
    a15 = v33;
    v35 = (*(int (__fastcall **)(int, int, int))(v21 + 572))(
            v21,
            *(int *)((char *)a16 + *(_DWORD *)(v21 + 88)) - *v34,
            *(int *)((char *)a16 + *(_DWORD *)(v21 + 88) + 4) - v34[1]);
    if ( *(_BYTE *)(v21 + 316) != 0 && ((a15 ^ v27) & 0x80000000) != 0 )
      v27 = -v27;
    v36 = *(_BYTE *)(v21 + 368);
    if ( (v36 & 4) != 0 )
    {
      if ( *(unsigned __int16 *)(v21 + 344) == *(unsigned __int16 *)(v21 + 346)
        && (signed int)((v27 - a15 + ((int)(v27 - a15) >> 31)) ^ ((int)(v27 - a15) >> 31)) > *(_DWORD *)(v21 + 320) )
      {
        v27 = a15;
      }
      v37 = (*(int (__fastcall **)(int, int, _DWORD))(v21 + 568))(v21, v27, *(_DWORD *)(v21 + 4 * ((v36 & 3) + 64) + 8));
    }
    else
    {
      v37 = sub_21DE66(v21, v27, *(_DWORD *)(v21 + 4 * ((v36 & 3) + 64) + 8));
    }
    if ( (*(_BYTE *)(v21 + 368) & 8) != 0 )
    {
      v38 = *(_DWORD *)(v21 + 308);
      if ( (a15 & 0x80000000) != 0 )
      {
        v38 = -v38;
        if ( v37 > v38 )
LABEL_29:
          v37 = v38;
      }
      else if ( v37 < v38 )
      {
        goto LABEL_29;
      }
    }
    (*(void (__fastcall **)(int, int, unsigned int, int))(v21 + 584))(v21, v21 + 72, a14, v37 - v35);
LABEL_31:
    *(_WORD *)(v21 + 286) = *(_WORD *)(v21 + 284);
    v39 = *(unsigned __int8 *)(v21 + 368);
    a1 = v39 << 27;
    if ( (v39 & 0x10) != 0 )
      *(_WORD *)(v21 + 284) = a14;
    *(_WORD *)(v21 + 288) = a14;
    goto LABEL_72;
  }
  if ( a4 <= 0xBF )
  {
    if ( a4 <= 0xB7 )
    {
      if ( a4 <= 0xAF )
      {
        a1 = sub_220B40(v21);
        goto LABEL_72;
      }
      v64 = (unsigned __int16)(a4 - 175);
      if ( v64 < a14 + 1 - *(_DWORD *)(v21 + 16) )
      {
        do
        {
          v22[a1 - 1] = *(unsigned __int8 *)(v23[26] + v23[27] + a1);
          a1 = (unsigned __int16)(a1 + 1);
        }
        while ( a1 <= v64 );
        goto LABEL_72;
      }
    }
    else
    {
      a1 = *(_DWORD *)(v21 + 16);
      v61 = (unsigned __int16)(a4 - 183);
      if ( v61 < a14 + 1 - a1 )
      {
        ++v23[27];
        v62 = v24;
        do
        {
          a1 = sub_21DDF4(v21);
          v63 = v62++;
          v22[v63] = a1;
        }
        while ( (unsigned __int16)v62 < v61 );
        *(_BYTE *)(v21 + 376) = 0;
        goto LABEL_72;
      }
    }
    *(_DWORD *)(v21 + 12) = 130;
    goto LABEL_72;
  }
  v40 = *v22;
  v41 = v40 << 16;
  a15 = v40;
  a14 = (unsigned __int16)v40;
  if ( *(unsigned __int16 *)(v21 + 80) <= (unsigned int)(unsigned __int16)v40
    || (v42 = *(unsigned __int16 *)(v21 + 284), *(unsigned __int16 *)(v21 + 44) <= v42) )
  {
    if ( *(_BYTE *)(v21 + 561) != 0 )
      *(_DWORD *)(v21 + 12) = 134;
    goto LABEL_59;
  }
  v43 = 8 * v42;
  if ( *(_WORD *)(v21 + 344) != 0 && *(_WORD *)(v21 + 346) != 0 )
  {
    v45 = (int *)(*(_DWORD *)(v21 + 56) + v43);
    a16 = (int *)(v21 + 220);
    v46 = *(_DWORD *)(v21 + 220);
    v47 = (int *)(*(_DWORD *)(v21 + 92) + 8 * a14);
    v48 = *v47;
    v49 = *v45;
    if ( v46 == *(_DWORD *)(v21 + 224) )
    {
      v50 = (*(int (__fastcall **)(int, int, int))(v21 + 576))(v21, v48 - v49, v47[1] - v45[1]);
      v44 = FT_MulFix(v50, *a16);
    }
    else
    {
      a16 = (int *)FT_MulFix(v48 - v49, v46);
      v51 = FT_MulFix(v47[1] - v45[1], *(_DWORD *)(v21 + 224));
      v44 = (*(int (__fastcall **)(int, int *, unsigned int))(v21 + 576))(v21, a16, v51);
    }
  }
  else
  {
    v44 = (*(int (__fastcall **)(int, int, int))(v21 + 576))(
            v21,
            *(_DWORD *)(*(_DWORD *)(v21 + 84) + (v41 >> 13)) - *(_DWORD *)(*(_DWORD *)(v21 + 48) + v43),
            *(_DWORD *)(*(_DWORD *)(v21 + 84) + (v41 >> 13) + 4) - *(_DWORD *)(*(_DWORD *)(v21 + 48) + v43 + 4));
  }
  v52 = *(_DWORD *)(v21 + 328);
  if ( ((v44 - v52 + ((v44 - v52) >> 31)) ^ ((v44 - v52) >> 31)) >= *(_DWORD *)(v21 + 324) )
  {
    v52 = v44;
  }
  else if ( v44 < 0 )
  {
    v52 = -v52;
  }
  v53 = *(_BYTE *)(v21 + 368);
  if ( (v53 & 4) != 0 )
    v54 = (*(int (__fastcall **)(int, int, _DWORD))(v21 + 568))(v21, v52, *(_DWORD *)(v21 + 4 * ((v53 & 3) + 64) + 8));
  else
    v54 = sub_21DE66(v21, v52, *(_DWORD *)(v21 + 4 * ((v53 & 3) + 64) + 8));
  v55 = v54;
  if ( (*(_BYTE *)(v21 + 368) & 8) != 0 )
  {
    v56 = *(_DWORD *)(v21 + 308);
    if ( v52 < 0 )
    {
      v56 = -v56;
      if ( v54 > v56 )
LABEL_57:
        v55 = v56;
    }
    else if ( v54 < v56 )
    {
      goto LABEL_57;
    }
  }
  v57 = (_DWORD *)(*(_DWORD *)(v21 + 52) + 8 * *(unsigned __int16 *)(v21 + 284));
  v58 = (_DWORD *)(*(_DWORD *)(v21 + 88) + 8 * (unsigned __int16)a15);
  v59 = (*(int (__fastcall **)(int, int, int))(v21 + 572))(v21, *v58 - *v57, v58[1] - v57[1]);
  (*(void (__fastcall **)(int, int, unsigned int, int))(v21 + 584))(v21, v21 + 72, a14, v55 - v59);
LABEL_59:
  *(_WORD *)(v21 + 286) = *(_WORD *)(v21 + 284);
  *(_WORD *)(v21 + 288) = a14;
  v60 = *(unsigned __int8 *)(v21 + 368);
  a1 = v60 << 27;
  if ( (v60 & 0x10) != 0 )
    *(_WORD *)(v21 + 284) = a14;
LABEL_72:
  v65 = *(_DWORD *)(v21 + 12);
  if ( v65 != 0 )
  {
    if ( v65 != 128 )
      goto LABEL_93;
    v66 = *(_DWORD *)(v21 + 416);
    v67 = v66 + 20 * *(_DWORD *)(v21 + 408);
    while ( 1 )
    {
      if ( v66 >= v67 )
        goto LABEL_93;
      if ( *(_BYTE *)(v66 + 16) != 0 )
      {
        v68 = *(unsigned __int8 *)(v21 + 368);
        if ( v68 == *(unsigned __int8 *)(v66 + 12) )
          break;
      }
      v66 += 20;
    }
    v69 = *(_DWORD *)(v21 + 428);
    v70 = *(_DWORD *)(v21 + 432);
    if ( v69 >= v70 )
      return sub_22304E(v68, v70, v69, 134, a5, a6, a7, a8, a9, a10, a11, a12);
    v72 = (_DWORD *)(*(_DWORD *)(v21 + 436) + 20 * v69);
    *v72 = *(_DWORD *)(v21 + 352);
    v72[1] = *(_DWORD *)(v21 + 360) + 1;
    v72[2] = 1;
    v72[3] = *(_DWORD *)(v66 + 4);
    v72[4] = *(_DWORD *)(v66 + 8);
    a1 = sub_2208CC(v21, *(_DWORD *)v66, *(_DWORD *)(v66 + 4));
    if ( a1 == 1 )
LABEL_93:
      JUMPOUT(0x223050);
  }
  else
  {
    v73 = *(_DWORD *)(v21 + 32);
    *(_DWORD *)(v21 + 16) = v73;
    if ( *(_BYTE *)(v21 + 376) != 0 )
      *(_DWORD *)(v21 + 360) += *(_DWORD *)(v21 + 372);
    if ( a21 + 1 > 1000000 )
      JUMPOUT(0x22306C);
  }
  v74 = *(_DWORD *)(v21 + 360);
  if ( v74 < *(_DWORD *)(v21 + 364) )
  {
    if ( *(_BYTE *)(v21 + 488) == 0 )
      ((void (*)(void))loc_221198)();
LABEL_95:
    JUMPOUT(0x223070);
  }
  v75 = *(_DWORD *)(v21 + 428);
  if ( v75 <= 0 )
    goto LABEL_95;
  return sub_22304C(a1, v73, v74, v75, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
}


//======================================================================
// sub_22304C
// address: 0x0022304C   size: 0x2 (2 bytes)
//======================================================================
int __fastcall sub_22304C(
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
        int a12)
{
  return sub_22304E(a1, a2, a3, 131, a5, a6, a7, a8, a9, a10, a11, a12);
}


//======================================================================
// sub_22304E
// address: 0x0022304E   size: 0x28 (40 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_22304E(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v9; // r4

  *(_DWORD *)(v9 + 12) = a4;
  if ( *(_DWORD *)(v9 + 12) != 0 && *(_BYTE *)(v9 + 488) == 0 )
    *(_BYTE *)(*(_DWORD *)(v9 + 4) + 301) = 0;
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_223080
// address: 0x00223080   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_223080(int a1, char a2)
{
  int v4; // r6
  int v5; // r4
  int result; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r6
  int i; // r3
  _DWORD *v11; // r2
  int v12; // r1

  v4 = *(_DWORD *)a1;
  if ( *(_BYTE *)(a1 + 292) != 0 )
    v5 = *(_DWORD *)(a1 + 296);
  else
    v5 = *(_DWORD *)(*(_DWORD *)(v4 + 96) + 28);
  result = 153;
  if ( v5 != 0 )
  {
    sub_21EB24(v5, v4, a1);
    *(_DWORD *)(v5 + 428) = 0;
    *(_DWORD *)(v5 + 16) = 0;
    *(_BYTE *)(v5 + 488) = 0;
    *(_BYTE *)(v5 + 561) = a2;
    v7 = *(_DWORD *)(v4 + 664);
    v8 = *(_DWORD *)(v4 + 660);
    *(_DWORD *)(v5 + 452) = v7;
    *(_DWORD *)(v5 + 456) = v8;
    *(_DWORD *)(v5 + 460) = 0;
    *(_DWORD *)(v5 + 464) = 0;
    if ( *(_DWORD *)(v4 + 660) == 0
      || (*(_DWORD *)(v5 + 356) = v7,
          *(_DWORD *)(v5 + 360) = 0,
          *(_DWORD *)(v5 + 364) = v8,
          *(_DWORD *)(v5 + 352) = 2,
          *(_BYTE *)(a1 + 292) != 0) )
    {
      v9 = 0;
    }
    else
    {
      v9 = (*(int (__fastcall **)(int))(v4 + 688))(v5);
    }
    j_memcpy((void *)(a1 + 172), (const void *)(v5 + 284), 0x44u);
    *(_DWORD *)(a1 + 116) = *(_DWORD *)(v5 + 396);
    *(_DWORD *)(a1 + 128) = *(_DWORD *)(v5 + 408);
    *(_DWORD *)(a1 + 140) = *(_DWORD *)(v5 + 420);
    *(_DWORD *)(a1 + 144) = *(_DWORD *)(v5 + 424);
    for ( i = 0; i != 24; i += 8 )
    {
      v11 = (_DWORD *)(a1 + i + 148);
      *v11 = *(_DWORD *)(v5 + i + 444);
      v12 = *(_DWORD *)(v5 + i + 448);
      v11[1] = v12;
    }
    return v9;
  }
  return result;
}


//======================================================================
// sub_223170
// address: 0x00223170   size: 0x3C4 (964 bytes)
//======================================================================
int __fastcall sub_223170(int a1, char a2)
{
  unsigned int v3; // r5
  int result; // r0
  int v5; // r6
  int v6; // r7
  int v7; // r6
  int v8; // r3
  int v9; // r0
  int v10; // r2
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r2
  int v15; // r0
  int v16; // r6
  __int16 v17; // r5
  int v18; // r5
  int v19; // r0
  int v20; // r2
  int v21; // r0
  int v22; // r2
  int v23; // r0
  int v24; // r2
  int v25; // r0
  int v26; // r3
  int v27; // r0
  int v28; // r3
  int v29; // r6
  int v30; // r3
  int v31; // r7
  int v32; // r5
  int i; // r3
  int v34; // r0
  _DWORD *v35; // r2
  int v36; // r1
  int v37; // r2
  unsigned int *v38; // r7
  unsigned int v39; // r3
  int v40; // r0
  unsigned int j; // r3
  int v42; // r2
  int v43; // [sp+8h] [bp-24h]
  int v44; // [sp+8h] [bp-24h]
  int v45; // [sp+Ch] [bp-20h]
  unsigned __int16 *v47; // [sp+1Ch] [bp-10h]
  int v48; // [sp+20h] [bp-Ch] BYREF
  int v49[2]; // [sp+24h] [bp-8h] BYREF

  if ( *(_BYTE *)(a1 + 300) != 0 )
    goto LABEL_2;
  v6 = *(_DWORD *)a1;
  v7 = *(_DWORD *)(*(_DWORD *)a1 + 100);
  *(_BYTE *)(a1 + 300) = 1;
  v43 = v7;
  *(_BYTE *)(a1 + 301) = 0;
  v8 = *(unsigned __int16 *)(v6 + 280);
  *(_DWORD *)(a1 + 120) = v8;
  *(_DWORD *)(a1 + 132) = *(unsigned __int16 *)(v6 + 282);
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_DWORD *)(a1 + 240) = *(_DWORD *)(v6 + 668);
  *(_WORD *)(a1 + 248) = *(_WORD *)(v6 + 278);
  *(_BYTE *)(a1 + 109) = 0;
  *(_BYTE *)(a1 + 110) = 0;
  v47 = (unsigned __int16 *)(a1 + 248);
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  v9 = ft_mem_realloc(v7, 20, 0, v8, 0, &v48);
  v10 = v48;
  *(_DWORD *)(a1 + 124) = v9;
  if ( v10 == 0 )
  {
    v11 = ft_mem_realloc(v7, 20, 0, *(_DWORD *)(a1 + 132), 0, &v48);
    v12 = v48;
    *(_DWORD *)(a1 + 136) = v11;
    if ( v12 == 0 )
    {
      v13 = ft_mem_realloc(v7, 4, 0, *(_DWORD *)(a1 + 240), 0, &v48);
      v14 = v48;
      *(_DWORD *)(a1 + 244) = v13;
      if ( v14 == 0 )
      {
        v15 = ft_mem_realloc(v7, 4, 0, *v47, 0, &v48);
        v16 = v48;
        *(_DWORD *)(a1 + 252) = v15;
        if ( v16 == 0 )
        {
          v17 = *(_WORD *)(v6 + 276);
          j_memset((void *)(a1 + 256), 0, 0x24u);
          v18 = (unsigned __int16)(v17 + 4);
          *(_DWORD *)(a1 + 256) = v43;
          v19 = ft_mem_realloc(v43, 8, 0, v18, 0, v49);
          v20 = v49[0];
          *(_DWORD *)(a1 + 268) = v19;
          if ( v20 != 0 )
            goto LABEL_9;
          v21 = ft_mem_realloc(v43, 8, 0, v18, 0, v49);
          v22 = v49[0];
          *(_DWORD *)(a1 + 272) = v21;
          if ( v22 != 0 )
            goto LABEL_9;
          v23 = ft_mem_realloc(v43, 8, 0, v18, 0, v49);
          v24 = v49[0];
          *(_DWORD *)(a1 + 276) = v23;
          if ( v24 != 0
            || (v25 = ft_mem_realloc(v43, 1, 0, v18, 0, v49), v26 = v49[0], *(_DWORD *)(a1 + 280) = v25, v26 != 0)
            || (v27 = ft_mem_realloc(v43, 2, 0, 0, 0, v49), v28 = v49[0], *(_DWORD *)(a1 + 284) = v27, v28 != 0) )
          {
LABEL_9:
            sub_21ECE4((int *)(a1 + 256));
          }
          else
          {
            *(_WORD *)(a1 + 260) = v18;
            *(_WORD *)(a1 + 262) = 0;
          }
          v29 = v49[0];
          v48 = v49[0];
          if ( v49[0] == 0 )
          {
            *(_WORD *)(a1 + 264) = v18;
            j_memcpy((void *)(a1 + 172), &tt_default_graphics_state, 0x44u);
            v30 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v6 + 96) + 4) + 172);
            *(_DWORD *)(v6 + 688) = v30;
            if ( v30 == 0 )
              *(_DWORD *)(v6 + 688) = TT_RunIns;
            v31 = *(_DWORD *)a1;
            if ( *(_BYTE *)(a1 + 292) != 0 )
              v32 = *(_DWORD *)(a1 + 296);
            else
              v32 = *(_DWORD *)(*(_DWORD *)(v31 + 96) + 28);
            if ( v32 != 0 )
            {
              sub_21EB24(v32, *(_DWORD *)a1, a1);
              *(_DWORD *)(v32 + 428) = 0;
              *(_DWORD *)(v32 + 16) = 0;
              *(_DWORD *)(v32 + 476) = 64;
              *(_DWORD *)(v32 + 480) = 0;
              *(_DWORD *)(v32 + 484) = 0;
              *(_BYTE *)(v32 + 488) = 0;
              *(_DWORD *)(v32 + 564) = 0x10000;
              *(_BYTE *)(v32 + 561) = a2;
              *(_WORD *)(v32 + 216) = 0;
              *(_WORD *)(v32 + 218) = 0;
              *(_DWORD *)(v32 + 220) = 0;
              *(_DWORD *)(v32 + 224) = 0;
              *(_WORD *)(v32 + 252) = 0;
              *(_DWORD *)(v32 + 260) = 0;
              *(_DWORD *)(v32 + 256) = 0x10000;
              v44 = *(_DWORD *)(v31 + 656);
              v45 = *(_DWORD *)(v31 + 652);
              *(_DWORD *)(v32 + 444) = v44;
              *(_DWORD *)(v32 + 448) = v45;
              *(_DWORD *)(v32 + 452) = 0;
              *(_DWORD *)(v32 + 456) = 0;
              *(_DWORD *)(v32 + 460) = 0;
              *(_DWORD *)(v32 + 464) = 0;
              if ( *(_DWORD *)(v31 + 652) != 0
                && (*(_DWORD *)(v32 + 360) = 0,
                    *(_DWORD *)(v32 + 356) = v44,
                    *(_DWORD *)(v32 + 364) = v45,
                    *(_DWORD *)(v32 + 352) = 1,
                    (v34 = (*(int (__fastcall **)(int))(v31 + 688))(v32)) != 0) )
              {
                v29 = v34;
              }
              else
              {
                *(_DWORD *)(a1 + 116) = *(_DWORD *)(v32 + 396);
                *(_DWORD *)(a1 + 128) = *(_DWORD *)(v32 + 408);
                *(_DWORD *)(a1 + 140) = *(_DWORD *)(v32 + 420);
                *(_DWORD *)(a1 + 144) = *(_DWORD *)(v32 + 424);
                for ( i = 0; i != 24; i += 8 )
                {
                  v35 = (_DWORD *)(a1 + i + 148);
                  *v35 = *(_DWORD *)(v32 + i + 444);
                  v36 = *(_DWORD *)(v32 + i + 448);
                  v35[1] = v36;
                }
              }
            }
            else
            {
              v29 = 153;
            }
            v48 = v29;
          }
        }
      }
    }
  }
  if ( v48 != 0 )
    sub_21ED2E(a1);
  result = v48;
  if ( v48 == 0 )
  {
LABEL_2:
    v3 = *(unsigned __int8 *)(a1 + 301);
    result = 0;
    if ( *(_BYTE *)(a1 + 301) == 0 )
    {
      v5 = *(_DWORD *)a1;
      while ( v3 < *(_DWORD *)(a1 + 240) )
      {
        v37 = 2 * v3;
        v38 = (unsigned int *)(*(_DWORD *)(a1 + 244) + 4 * v3++);
        *v38 = FT_MulFix(*(__int16 *)(v37 + *(_DWORD *)(v5 + 672)), *(_DWORD *)(a1 + 88));
      }
      v39 = 0;
      while ( v39 < *(unsigned __int16 *)(a1 + 264) )
      {
        v40 = 8 * v39++;
        *(_DWORD *)(*(_DWORD *)(a1 + 268) + v40) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 268) + v40 + 4) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 272) + v40) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 272) + v40 + 4) = 0;
      }
      for ( j = 0; j < *(unsigned __int16 *)(a1 + 248); ++j )
      {
        v42 = 4 * j;
        *(_DWORD *)(v42 + *(_DWORD *)(a1 + 252)) = 0;
      }
      j_memcpy((void *)(a1 + 172), &tt_default_graphics_state, 0x44u);
      result = sub_223080(a1, a2);
      if ( result == 0 )
        *(_BYTE *)(a1 + 301) = 1;
    }
  }
  return result;
}


//======================================================================
// sub_223538
// address: 0x00223538   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_223538(int a1, int a2, int a3, char a4, _DWORD *a5)
{
  int v7; // r5
  int v9; // [sp+Ch] [bp-10h]
  _BYTE v10[2]; // [sp+14h] [bp-8h] BYREF
  _WORD v11[3]; // [sp+16h] [bp-6h] BYREF

  v9 = a3 + a2;
  v7 = a2;
  if ( (a4 & 0x10) != 0 )
  {
    while ( v7 != v9 )
    {
      if ( *(_BYTE *)(a1 + 296) != 0 )
        (*(void (__fastcall **)(int, int, int, _BYTE *, _WORD *))(*(_DWORD *)(a1 + 532) + 156))(a1, 1, v7, v10, v11);
      else
        v11[0] = *(_WORD *)(a1 + 68);
      ++v7;
      *a5++ = v11[0];
    }
  }
  else
  {
    while ( v7 != v9 )
    {
      (*(void (__fastcall **)(int, _DWORD, int, _BYTE *, _WORD *))(*(_DWORD *)(a1 + 532) + 156))(a1, 0, v7++, v10, v11);
      *a5++ = v11[0];
    }
  }
  return 0;
}


//======================================================================
// sub_2235BC
// address: 0x002235BC   size: 0x252 (594 bytes)
//======================================================================
int __fastcall sub_2235BC(int a1, int a2)
{
  unsigned __int16 *v2; // r7
  unsigned int v4; // r1
  const void **v5; // r5
  _DWORD *v6; // r3
  unsigned int v7; // r0
  unsigned int i; // r2
  int v9; // r6
  int v10; // r3
  unsigned int *v11; // r1
  int v12; // r3
  int v13; // r5
  _DWORD *v14; // r3
  _DWORD *v15; // r2
  int v16; // r6
  int v17; // r7
  int v18; // r6
  int v19; // r7
  int v20; // r6
  int v21; // r7
  int v22; // r0
  int v23; // r6
  int v24; // r7
  int v25; // r6
  int v26; // r7
  int v27; // r6
  int v28; // r7
  int v29; // r6
  int v30; // r7
  int v31; // r6
  int v32; // r7
  int v33; // r6
  int v34; // r7
  int v35; // r6
  int v36; // r7
  int v37; // r6
  int v38; // r7
  int v39; // r6
  int v40; // r7
  int result; // r0
  int v42; // r2
  int v43; // r3
  int v44; // r6
  _DWORD *v45; // r3
  int v46; // r2
  _DWORD *v47; // r4
  _BYTE *v48; // [sp+Ch] [bp-10h]
  int v49; // [sp+10h] [bp-Ch]

  v2 = (unsigned __int16 *)(a1 + 132);
  v4 = *(unsigned __int16 *)(a1 + 132);
  v5 = (const void **)(a1 + 140);
  v49 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 140);
  v6 = *(_DWORD **)(a1 + 140);
  v7 = ((v6[2 * v4 + 1073741816] + 32) & 0xFFFFFFC0) - v6[2 * v4 + 1073741816];
  if ( v7 != 0 )
  {
    for ( i = 0; i < v4; ++i )
    {
      *v6 += v7;
      v6 += 2;
    }
  }
  if ( v49 != 0 )
    j_memcpy(*(void **)(a1 + 136), *v5, 8 * *v2);
  v9 = a1 + 160;
  j_memcpy((void *)(*(_DWORD *)(a1 + 160) + 284), (const void *)(*(_DWORD *)(a1 + 4) + 172), 0x44u);
  v10 = *(_DWORD *)(a1 + 160);
  if ( a2 != 0 )
  {
    *(_DWORD *)(v10 + 220) = 0x10000;
    *(_DWORD *)(*(_DWORD *)v9 + 224) = 0x10000;
    j_memcpy(*(void **)(a1 + 144), *v5, 8 * *v2);
  }
  else
  {
    *(_DWORD *)(v10 + 220) = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 48);
    *(_DWORD *)(*(_DWORD *)v9 + 224) = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 52);
  }
  v11 = (unsigned int *)((char *)*v5 + 8 * *(unsigned __int16 *)(a1 + 132) + -24);
  *v11 = (*v11 + 32) & 0xFFFFFFC0;
  v12 = (int)*v5 + 8 * *(unsigned __int16 *)(a1 + 132) + -8;
  *(_DWORD *)(v12 + 4) = (*(_DWORD *)(v12 + 4) + 32) & 0xFFFFFFC0;
  if ( v49 == 0 )
    goto LABEL_14;
  v13 = a1 + 160;
  v48 = *(_BYTE **)(*(_DWORD *)(a1 + 12) + 64);
  v14 = *(_DWORD **)(a1 + 160);
  v14[115] = v14[98];
  v14[116] = v49;
  *(_BYTE *)(*(_DWORD *)(a1 + 160) + 560) = a2;
  v15 = (_DWORD *)(*(_DWORD *)(a1 + 160) + 144);
  v16 = *(_DWORD *)(a1 + 128);
  v17 = *(_DWORD *)(a1 + 132);
  *v15 = *(_DWORD *)(a1 + 124);
  v15[1] = v16;
  v15[2] = v17;
  v15 += 3;
  v18 = *(_DWORD *)(a1 + 140);
  v19 = *(_DWORD *)(a1 + 144);
  *v15 = *(_DWORD *)(a1 + 136);
  v15[1] = v18;
  v15[2] = v19;
  v15 += 3;
  v20 = *(_DWORD *)(a1 + 152);
  v21 = *(_DWORD *)(a1 + 156);
  *v15 = *(_DWORD *)(a1 + 148);
  v15[1] = v20;
  v15[2] = v21;
  v22 = *(_DWORD *)(a1 + 160);
  *(_DWORD *)(v22 + 356) = *(_DWORD *)(v22 + 460);
  *(_DWORD *)(v22 + 364) = *(_DWORD *)(v22 + 464);
  *(_DWORD *)(v22 + 352) = 3;
  *(_DWORD *)(v22 + 360) = 0;
  v23 = *(_DWORD *)(v22 + 148);
  v24 = *(_DWORD *)(v22 + 152);
  *(_DWORD *)(v22 + 36) = *(_DWORD *)(v22 + 144);
  *(_DWORD *)(v22 + 40) = v23;
  *(_DWORD *)(v22 + 44) = v24;
  v25 = *(_DWORD *)(v22 + 160);
  v26 = *(_DWORD *)(v22 + 164);
  *(_DWORD *)(v22 + 48) = *(_DWORD *)(v22 + 156);
  *(_DWORD *)(v22 + 52) = v25;
  *(_DWORD *)(v22 + 56) = v26;
  v27 = *(_DWORD *)(v22 + 172);
  v28 = *(_DWORD *)(v22 + 176);
  *(_DWORD *)(v22 + 60) = *(_DWORD *)(v22 + 168);
  *(_DWORD *)(v22 + 64) = v27;
  *(_DWORD *)(v22 + 68) = v28;
  v29 = *(_DWORD *)(v22 + 148);
  v30 = *(_DWORD *)(v22 + 152);
  *(_DWORD *)(v22 + 72) = *(_DWORD *)(v22 + 144);
  *(_DWORD *)(v22 + 76) = v29;
  *(_DWORD *)(v22 + 80) = v30;
  v31 = *(_DWORD *)(v22 + 160);
  v32 = *(_DWORD *)(v22 + 164);
  *(_DWORD *)(v22 + 84) = *(_DWORD *)(v22 + 156);
  *(_DWORD *)(v22 + 88) = v31;
  *(_DWORD *)(v22 + 92) = v32;
  v33 = *(_DWORD *)(v22 + 172);
  v34 = *(_DWORD *)(v22 + 176);
  *(_DWORD *)(v22 + 96) = *(_DWORD *)(v22 + 168);
  *(_DWORD *)(v22 + 100) = v33;
  *(_DWORD *)(v22 + 104) = v34;
  v35 = *(_DWORD *)(v22 + 148);
  v36 = *(_DWORD *)(v22 + 152);
  *(_DWORD *)(v22 + 108) = *(_DWORD *)(v22 + 144);
  *(_DWORD *)(v22 + 112) = v35;
  *(_DWORD *)(v22 + 116) = v36;
  v37 = *(_DWORD *)(v22 + 160);
  v38 = *(_DWORD *)(v22 + 164);
  *(_DWORD *)(v22 + 120) = *(_DWORD *)(v22 + 156);
  *(_DWORD *)(v22 + 124) = v37;
  *(_DWORD *)(v22 + 128) = v38;
  v39 = *(_DWORD *)(v22 + 172);
  v40 = *(_DWORD *)(v22 + 176);
  *(_DWORD *)(v22 + 132) = *(_DWORD *)(v22 + 168);
  *(_DWORD *)(v22 + 136) = v39;
  *(_DWORD *)(v22 + 140) = v40;
  *(_WORD *)(v22 + 344) = 1;
  *(_WORD *)(v22 + 346) = 1;
  *(_WORD *)(v22 + 348) = 1;
  *(_WORD *)(v22 + 294) = 0x4000;
  *(_WORD *)(v22 + 296) = 0;
  *(_WORD *)(v22 + 298) = 0x4000;
  *(_WORD *)(v22 + 300) = 0;
  *(_WORD *)(v22 + 290) = 0x4000;
  *(_WORD *)(v22 + 292) = 0;
  *(_BYTE *)(v22 + 302) = 1;
  *(_DWORD *)(v22 + 312) = 1;
  *(_DWORD *)(v22 + 304) = 1;
  *(_DWORD *)(v22 + 16) = 0;
  *(_DWORD *)(v22 + 428) = 0;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v22 + 688))(v22);
  if ( result == 0 || *(_BYTE *)(*(_DWORD *)v13 + 561) == 0 )
  {
    *v48 |= (unsigned __int8)(32 * *(_DWORD *)(*(_DWORD *)v13 + 340)) | 4;
LABEL_14:
    result = 0;
    if ( *(_BYTE *)(a1 + 65) == 0 )
    {
      v42 = *(_DWORD *)(a1 + 140);
      v43 = 8 * (*(unsigned __int16 *)(a1 + 132) + 536870908);
      v44 = *(_DWORD *)(v42 + v43);
      v45 = (_DWORD *)(v42 + v43);
      *(_DWORD *)(a1 + 68) = v44;
      *(_DWORD *)(a1 + 72) = v45[1];
      *(_DWORD *)(a1 + 76) = v45[2];
      *(_DWORD *)(a1 + 80) = v45[3];
      v46 = a1 + 184;
      *(_DWORD *)(a1 + 184) = v45[4];
      v47 = (_DWORD *)(a1 + 192);
      *(_DWORD *)(v46 + 4) = v45[5];
      *v47 = v45[6];
      v47[1] = v45[7];
    }
  }
  return result;
}


//======================================================================
// sub_223820
// address: 0x00223820   size: 0x982 (2434 bytes)
//======================================================================
int __fastcall sub_223820(int a1, unsigned int a2, unsigned int a3, _DWORD *a4)
{
  int v5; // r5
  int v6; // r1
  int v7; // r3
  int v8; // r0
  int v9; // r1
  int v10; // r3
  unsigned int v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r0
  __int16 v15; // r3
  int v16; // r3
  int v17; // r7
  int v18; // r3
  int v19; // r0
  _DWORD *v20; // r1
  int v22; // r6
  int v23; // r1
  int v24; // r1
  int v25; // r5
  int v26; // r3
  int v27; // r2
  int v28; // r2
  int v29; // r2
  int v30; // r2
  int v31; // r0
  int v32; // r7
  unsigned int v33; // r0
  signed int k; // r3
  int v35; // r2
  int v36; // r1
  _DWORD *v37; // r0
  int v38; // r2
  const void *v39; // r1
  void *v40; // r0
  int v41; // r7
  int *v42; // r6
  int v43; // r3
  int v44; // r7
  int v45; // r3
  int v46; // r0
  int v47; // r2
  int v48; // r2
  int v49; // r7
  int v50; // r0
  int v51; // r3
  int v52; // r1
  __int16 *v53; // r2
  int v54; // r1
  int v55; // r0
  _DWORD *v56; // r3
  int v57; // r5
  _DWORD *v58; // r3
  _DWORD *v59; // r2
  _DWORD *v60; // r0
  int v61; // r6
  int v62; // r7
  int v63; // r0
  int v64; // r1
  int v65; // r7
  int v66; // r3
  int v67; // r2
  int v68; // r0
  int v69; // r1
  int v70; // r2
  int v71; // r0
  int v72; // r2
  int v73; // r3
  int v74; // r0
  int v75; // r3
  int v76; // r0
  int v77; // r5
  int v78; // r6
  unsigned int v79; // r5
  int v80; // r2
  unsigned int i; // r5
  unsigned int v82; // r5
  unsigned int v83; // r2
  int v84; // r1
  _DWORD *v85; // r3
  _DWORD *v86; // r2
  unsigned int v87; // r6
  unsigned int v88; // r0
  unsigned int v89; // r0
  int v90; // r3
  unsigned int v91; // r0
  int v92; // r3
  int v93; // r2
  _DWORD *v94; // r2
  int j; // r1
  int v96; // r2
  int v97; // r5
  int v98; // r3
  int v99; // r1
  int v100; // r3
  int v101; // r1
  int v102; // r3
  int v103; // r0
  int v104; // r1
  int v105; // r0
  int v106; // r1
  int v107; // r2
  unsigned int v108; // r5
  int *v109; // r3
  int v110; // r2
  _WORD *v111; // r0
  int v112; // r3
  unsigned int v113; // r3
  _BYTE *v114; // r3
  signed int v116; // [sp+2Ch] [bp-78h]
  int *v117; // [sp+2Ch] [bp-78h]
  __int16 v118; // [sp+2Ch] [bp-78h]
  unsigned int v119; // [sp+2Ch] [bp-78h]
  int v121; // [sp+30h] [bp-74h]
  unsigned int v122; // [sp+30h] [bp-74h]
  int v123; // [sp+38h] [bp-6Ch]
  _DWORD *v124; // [sp+38h] [bp-6Ch]
  unsigned int v125; // [sp+3Ch] [bp-68h]
  unsigned int v126; // [sp+3Ch] [bp-68h]
  int v127; // [sp+40h] [bp-64h]
  unsigned int v128; // [sp+40h] [bp-64h]
  int v129; // [sp+44h] [bp-60h]
  int v130; // [sp+44h] [bp-60h]
  int v131; // [sp+44h] [bp-60h]
  int v132; // [sp+48h] [bp-5Ch]
  unsigned int v133; // [sp+48h] [bp-5Ch]
  int v134; // [sp+48h] [bp-5Ch]
  int v135; // [sp+48h] [bp-5Ch]
  unsigned int v136; // [sp+4Ch] [bp-58h]
  int v137; // [sp+4Ch] [bp-58h]
  int v139; // [sp+50h] [bp-54h]
  int v140; // [sp+54h] [bp-50h]
  __int16 v141; // [sp+58h] [bp-4Ch]
  int v142; // [sp+5Ch] [bp-48h]
  int v143; // [sp+60h] [bp-44h]
  int v144; // [sp+64h] [bp-40h]
  int v145; // [sp+68h] [bp-3Ch]
  int v146; // [sp+6Ch] [bp-38h]
  __int16 v147; // [sp+76h] [bp-2Eh] BYREF
  _DWORD *v148; // [sp+78h] [bp-2Ch] BYREF
  unsigned int v149; // [sp+7Ch] [bp-28h] BYREF
  int v150; // [sp+80h] [bp-24h] BYREF
  int v151; // [sp+84h] [bp-20h]
  int v152; // [sp+88h] [bp-1Ch]
  int v153; // [sp+8Ch] [bp-18h]
  int v154; // [sp+90h] [bp-14h]
  int v155; // [sp+94h] [bp-10h]
  int v156; // [sp+98h] [bp-Ch]
  int v157; // [sp+9Ch] [bp-8h]

  v5 = *(_DWORD *)a1;
  v123 = *(_DWORD *)(a1 + 12);
  v148 = nullptr;
  if ( a3 > 1 && a3 > *(unsigned __int16 *)(v5 + 290) )
    ((void (*)(void))sub_2241BA)();
  if ( a2 >= *(_DWORD *)(v5 + 16) )
    ((void (*)(void))sub_2241BA)();
  v6 = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 20) = a2;
  if ( (v6 & 1) != 0 )
  {
    v129 = 0x10000;
    v127 = 0x10000;
  }
  else
  {
    v7 = *(_DWORD *)(a1 + 4);
    v127 = *(_DWORD *)(v7 + 48);
    v129 = *(_DWORD *)(v7 + 52);
  }
  LOWORD(v150) = 0;
  LOWORD(v149) = 0;
  v8 = *(_DWORD *)(v5 + 532);
  v147 = 0;
  (*(void (__fastcall **)(int))(v8 + 156))(v5);
  if ( *(_BYTE *)(v5 + 296) != 0 )
  {
    (*(void (__fastcall **)(int, int, unsigned int, __int16 *, int *))(*(_DWORD *)(v5 + 532) + 156))(
      v5,
      1,
      a2,
      &v147,
      &v150);
  }
  else
  {
    v147 = *(unsigned __int8 *)(v5 + 296);
    LOWORD(v150) = *(_WORD *)(v5 + 68);
  }
  *(_DWORD *)(a1 + 52) = 0;
  v9 = v147;
  v10 = (unsigned __int16)v149;
  *(_DWORD *)(a1 + 56) = (unsigned __int16)v149;
  *(_DWORD *)(a1 + 176) = v9;
  *(_DWORD *)(a1 + 180) = (unsigned __int16)v150;
  if ( *(_BYTE *)(a1 + 64) == 0 )
  {
    *(_BYTE *)(a1 + 64) = 1;
    *(_DWORD *)(a1 + 60) = v10;
  }
  v11 = sub_21DBF6(v5, a2, (_DWORD *)(a1 + 28));
  if ( *(int *)(a1 + 28) > 0 )
  {
    v12 = *(_DWORD *)(a1 + 84);
    if ( v12 == 0 )
      v11 = sub_2241BA(v11);
    v13 = (*(int (__fastcall **)(int, unsigned int, unsigned int))(v5 + 512))(a1, a2, v11 + v12);
    if ( v13 != 0 )
      sub_2241BA(v13);
    v14 = (*(int (__fastcall **)(int))(v5 + 520))(a1);
    if ( v14 != 0 )
      v14 = ((int (*)(void))sub_2241AC)();
    if ( a4 != nullptr )
      sub_2241AC(v14);
  }
  if ( *(_DWORD *)(a1 + 28) == 0 || (v15 = *(_WORD *)(a1 + 32)) == 0 )
  {
    *(_DWORD *)(a1 + 36) = 0;
    *(_DWORD *)(a1 + 44) = 0;
    *(_DWORD *)(a1 + 40) = 0;
    *(_DWORD *)(a1 + 48) = 0;
    if ( a4 != nullptr )
      ((void (*)(void))sub_2241A2)();
    v16 = *(_DWORD *)(a1 + 52);
    v17 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 72) = a4;
    *(_DWORD *)(a1 + 76) = v17 - v16;
    *(_DWORD *)(a1 + 68) = -v16;
    *(_DWORD *)(a1 + 80) = a4;
    *(_DWORD *)(a1 + 184) = a4;
    v18 = *(_DWORD *)(a1 + 176);
    *(_DWORD *)(a1 + 188) = v18;
    *(_DWORD *)(a1 + 192) = a4;
    *(_DWORD *)(a1 + 196) = v18 - *(_DWORD *)(a1 + 180);
    v19 = *(_DWORD *)a1;
    if ( *(_BYTE *)(*(_DWORD *)a1 + 712) != 0 )
    {
      v139 = *(_DWORD *)(v19 + 100);
      if ( sub_21EE80(v19, a2, (int *)&v148, 4u) != 0 )
        goto LABEL_119;
      v20 = v148;
      *(_DWORD *)(a1 + 68) += *v148;
      *(_DWORD *)(a1 + 72) += v20[1];
      *(_DWORD *)(a1 + 76) += v20[2];
      *(_DWORD *)(a1 + 80) += v20[3];
      *(_DWORD *)(a1 + 184) += v20[4];
      *(_DWORD *)(a1 + 188) += v20[5];
      *(_DWORD *)(a1 + 192) += v20[6];
      *(_DWORD *)(a1 + 196) += v20[7];
      v19 = ft_mem_free(v139, (int)v20);
      v148 = a4;
    }
    if ( (*(_DWORD *)(a1 + 16) & 1) != 0 )
      return sub_2241A2(v19);
    *(_DWORD *)(a1 + 68) = FT_MulFix(*(_DWORD *)(a1 + 68), v127);
    *(_DWORD *)(a1 + 76) = FT_MulFix(*(_DWORD *)(a1 + 76), v127);
    *(_DWORD *)(a1 + 188) = FT_MulFix(*(_DWORD *)(a1 + 188), v129);
    *(_DWORD *)(a1 + 196) = FT_MulFix(*(_DWORD *)(a1 + 196), v129);
LABEL_119:
    JUMPOUT(0x2241A6);
  }
  v22 = *(_DWORD *)(a1 + 56);
  v23 = *(_DWORD *)(a1 + 36) - *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 68) = v23;
  *(_DWORD *)(a1 + 76) = v23 + v22;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 184) = 0;
  v24 = *(_DWORD *)(a1 + 176) + *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 188) = v24;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = v24 - *(_DWORD *)(a1 + 180);
  if ( v15 <= 0 )
  {
    if ( v15 != -1 )
      goto LABEL_119;
    v118 = *(_WORD *)(v123 + 22);
    v141 = *(_WORD *)(v123 + 20);
    if ( (*(int (__fastcall **)(int))(v5 + 528))(a1) != 0 )
      goto LABEL_119;
    v142 = *(_DWORD *)(a1 + 168);
    (*(void (__fastcall **)(int))(v5 + 516))(a1);
    if ( *(_BYTE *)(v5 + 712) != 0 )
    {
      v49 = *(_DWORD *)(v5 + 100);
      v33 = sub_21EE80(v5, a2, (int *)&v148, *(_DWORD *)(v123 + 84) + 4);
      if ( v33 != 0 )
        return sub_2241BA(v33);
      v50 = *(_DWORD *)(v123 + 84);
      v51 = *(_DWORD *)(v123 + 88) + 32 * *(_DWORD *)(v123 + 48);
      v52 = 0;
      v53 = (__int16 *)v148;
      while ( v52 < v50 )
      {
        if ( (*(_WORD *)(v51 + 4) & 2) != 0 )
        {
          *(_DWORD *)(v51 + 8) += *v53;
          *(_DWORD *)(v51 + 12) += v53[2];
        }
        ++v52;
        v51 += 32;
        v53 += 4;
      }
      v54 = (int)v148;
      v55 = 8 * (v50 & (~v50 >> 31));
      v56 = &v148[v55 / 4u];
      *(_DWORD *)(a1 + 68) += v148[v55 / 4u];
      v57 = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(a1 + 72) += v56[1];
      v58 = (_DWORD *)(v54 + v55 + 8);
      *(_DWORD *)(a1 + 76) = v57 + *v58;
      *(_DWORD *)(a1 + 80) += v58[1];
      v59 = (_DWORD *)(v54 + v55 + 16);
      v60 = (_DWORD *)(v54 + v55 + 24);
      *(_DWORD *)(a1 + 184) += *v59;
      v61 = *(_DWORD *)(a1 + 192);
      *(_DWORD *)(a1 + 188) += v59[1];
      *(_DWORD *)(a1 + 192) = v61 + *v60;
      *(_DWORD *)(a1 + 196) += v60[1];
      ft_mem_free(v49, v54);
      v148 = nullptr;
    }
    if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
    {
      *(_DWORD *)(a1 + 68) = FT_MulFix(*(_DWORD *)(a1 + 68), v127);
      *(_DWORD *)(a1 + 76) = FT_MulFix(*(_DWORD *)(a1 + 76), v127);
      *(_DWORD *)(a1 + 188) = FT_MulFix(*(_DWORD *)(a1 + 188), v129);
      *(_DWORD *)(a1 + 196) = FT_MulFix(*(_DWORD *)(a1 + 196), v129);
    }
    if ( (*(_DWORD *)(a1 + 16) & 0x400) != 0 )
    {
      v33 = FT_GlyphLoader_Add(v123);
      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 72) = 1668246896;
      return sub_2241BA(v33);
    }
    v122 = v118;
    v143 = *(_DWORD *)(v123 + 84);
    v144 = *(_DWORD *)(v123 + 48);
    v145 = *(_DWORD *)(a1 + 24);
    v146 = *(_DWORD *)(a1 + 28);
    FT_GlyphLoader_Add(v123);
    v131 = 0;
    v128 = v118;
    v62 = 0;
    while ( 1 )
    {
      if ( v131 == v143 )
      {
        *(_DWORD *)(a1 + 24) = v145;
        *(_DWORD *)(a1 + 28) = v146;
        *(_DWORD *)(a1 + 168) = v142;
        v33 = *(_DWORD *)(a1 + 16);
        v96 = v33 & 2;
        if ( (v33 & 2) == 0 && (*(_WORD *)(v62 + 4) & 0x100) != 0 && v128 > v122 )
        {
          v97 = *(_DWORD *)(a1 + 12);
          v98 = *(__int16 *)(v97 + 22);
          v33 = v98 + 4;
          if ( v98 != -4 )
          {
            v33 = *(__int16 *)(v97 + 58);
            if ( v98 + 4 + v98 + v33 > *(_DWORD *)(v97 + 4) )
            {
              v33 = FT_GlyphLoader_CheckPoints(*(_DWORD *)(a1 + 12), v98 + 4, 0);
              v96 = v33;
            }
          }
          v149 = v96;
          if ( v96 == 0 )
          {
            v99 = *(_DWORD *)(v97 + 24);
            v100 = 8 * *(__int16 *)(v97 + 22);
            *(_DWORD *)(v100 + v99) = *(_DWORD *)(a1 + 68);
            *(_DWORD *)(v99 + v100 + 4) = *(_DWORD *)(a1 + 72);
            v101 = *(_DWORD *)(v97 + 24);
            v102 = 8 * (*(__int16 *)(v97 + 22) + 1);
            *(_DWORD *)(v102 + v101) = *(_DWORD *)(a1 + 76);
            *(_DWORD *)(v101 + v102 + 4) = *(_DWORD *)(a1 + 80);
            v103 = *(_DWORD *)(v97 + 24);
            v104 = 8 * (*(__int16 *)(v97 + 22) + 2);
            *(_DWORD *)(v104 + v103) = *(_DWORD *)(a1 + 184);
            *(_DWORD *)(v103 + v104 + 4) = *(_DWORD *)(a1 + 188);
            v105 = *(_DWORD *)(v97 + 24);
            v106 = 8 * (*(__int16 *)(v97 + 22) + 3);
            *(_DWORD *)(v106 + v105) = *(_DWORD *)(a1 + 192);
            *(_DWORD *)(v105 + v106 + 4) = *(_DWORD *)(a1 + 196);
            *(_BYTE *)(*(_DWORD *)(v97 + 28) + *(__int16 *)(v97 + 22)) = 0;
            *(_BYTE *)(*(_DWORD *)(v97 + 28) + *(__int16 *)(v97 + 22) + 1) = 0;
            *(_BYTE *)(*(_DWORD *)(v97 + 28) + *(__int16 *)(v97 + 22) + 2) = 0;
            *(_BYTE *)(*(_DWORD *)(v97 + 28) + *(__int16 *)(v97 + 22) + 3) = 0;
            v124 = *(_DWORD **)(a1 + 24);
            v33 = FT_Stream_Seek(v124, *(_DWORD *)(a1 + 168));
            v149 = v33;
            if ( v33 == 0 )
            {
              v33 = FT_Stream_ReadUShort(v124, &v149, v107);
              v108 = v33;
              if ( v149 == 0 )
              {
                if ( *(unsigned __int16 *)(*(_DWORD *)a1 + 286) >= v33 )
                {
                  if ( v33 != 0 )
                  {
LABEL_111:
                    v33 = FT_Stream_Read(v124, *(void **)(*(_DWORD *)(a1 + 160) + 392), v108);
                    v149 = v33;
                    if ( v33 == 0 )
                    {
                      v111 = (_WORD *)(a1 + 132);
                      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 136) = *(_DWORD *)(*(_DWORD *)(a1 + 160) + 392);
                      *(_DWORD *)(*(_DWORD *)(a1 + 8) + 140) = v108;
                      v112 = *(_DWORD *)(a1 + 12);
                      *(_WORD *)(a1 + 132) = *(_WORD *)(v112 + 22) - v122;
                      *(_WORD *)(a1 + 134) = *(_WORD *)(v112 + 20) - v141;
                      *(_DWORD *)(a1 + 136) = *(_DWORD *)(v112 + 40) + 8 * v122;
                      *(_DWORD *)(a1 + 140) = *(_DWORD *)(v112 + 24) + 8 * v122;
                      *(_DWORD *)(a1 + 144) = *(_DWORD *)(v112 + 44) + 8 * v122;
                      *(_DWORD *)(a1 + 148) = *(_DWORD *)(v112 + 28) + v122;
                      *(_DWORD *)(a1 + 152) = *(_DWORD *)(v112 + 32) + 2 * v141;
                      *(_WORD *)(a1 + 156) = v122;
                      while ( 1 )
                      {
                        v113 = (unsigned __int16)*v111;
                        if ( v122 >= v113 )
                          break;
                        v114 = (_BYTE *)(*(_DWORD *)(a1 + 148) + v122++);
                        *v114 &= 0xE7u;
                      }
                      *v111 = v113 + 4;
                      v33 = sub_2235BC(a1, 1);
                    }
                  }
                }
                else if ( (signed int)v33 <= *(_DWORD *)(a1 + 28) )
                {
                  v109 = *(int **)(a1 + 160);
                  v150 = v109[97];
                  v33 = sub_21EAEC(v109[2], (unsigned int *)&v150, 1, v109 + 98, v33);
                  v110 = *(_DWORD *)(a1 + 160);
                  v149 = v33;
                  *(_DWORD *)(v110 + 388) = (unsigned __int16)v150;
                  if ( v33 == 0 )
                    goto LABEL_111;
                }
              }
            }
          }
        }
        return sub_2241BA(v33);
      }
      v63 = *(_DWORD *)(a1 + 72);
      v64 = *(_DWORD *)(a1 + 76);
      v65 = 32 * (v131 + v144);
      v66 = *(_DWORD *)(v123 + 52);
      v150 = *(_DWORD *)(a1 + 68);
      v151 = v63;
      v67 = *(_DWORD *)(a1 + 80);
      v68 = *(_DWORD *)(a1 + 184);
      v152 = v64;
      v69 = *(_DWORD *)(a1 + 188);
      v153 = v67;
      v154 = v68;
      v70 = *(_DWORD *)(a1 + 192);
      v71 = *(_DWORD *)(a1 + 196);
      v155 = v69;
      v156 = v70;
      v157 = v71;
      v119 = *(__int16 *)(v123 + 22);
      v33 = sub_223820(a1, *(_DWORD *)(v66 + v65), a3 + 1, 0);
      if ( v33 != 0 )
        return sub_2241BA(v33);
      v62 = *(_DWORD *)(v123 + 52) + v65;
      if ( (*(_WORD *)(v62 + 4) & 0x200) == 0 )
      {
        v72 = v151;
        v73 = v152;
        v74 = v153;
        *(_DWORD *)(a1 + 68) = v150;
        *(_DWORD *)(a1 + 72) = v72;
        *(_DWORD *)(a1 + 76) = v73;
        *(_DWORD *)(a1 + 80) = v74;
        v75 = v155;
        v76 = v156;
        v77 = v157;
        *(_DWORD *)(a1 + 184) = v154;
        *(_DWORD *)(a1 + 188) = v75;
        *(_DWORD *)(a1 + 192) = v76;
        *(_DWORD *)(a1 + 196) = v77;
      }
      v128 = *(__int16 *)(v123 + 22);
      if ( v128 != v119 )
      {
        v78 = *(_DWORD *)(a1 + 12);
        v132 = *(_WORD *)(v62 + 4) & 0xC8;
        v140 = *(_DWORD *)(v78 + 24);
        v125 = *(__int16 *)(v78 + 22);
        if ( v132 != 0 )
        {
          for ( i = v119; i < v125; ++i )
            FT_Vector_Transform((int *)(v140 + 8 * i), (int *)(v62 + 16));
        }
        v79 = *(_DWORD *)(v62 + 8);
        v80 = *(_DWORD *)(v62 + 12);
        if ( (*(_WORD *)(v62 + 4) & 2) != 0 )
        {
          v87 = *(_DWORD *)(v62 + 12);
          if ( (v80 | v79) == 0 )
            goto LABEL_98;
          if ( v132 != 0 && (*(_WORD *)(v62 + 4) & 0x800) != 0 )
          {
            v133 = FT_MulFix(*(_DWORD *)(v62 + 16), *(_DWORD *)(v62 + 16));
            v88 = FT_MulFix(*(_DWORD *)(v62 + 20), *(_DWORD *)(v62 + 20));
            v134 = FT_SqrtFixed(v133 + v88);
            v136 = FT_MulFix(*(_DWORD *)(v62 + 28), *(_DWORD *)(v62 + 28));
            v89 = FT_MulFix(*(_DWORD *)(v62 + 24), *(_DWORD *)(v62 + 24));
            v137 = FT_SqrtFixed(v136 + v89);
            v79 = FT_MulFix(v79, v134);
            v87 = FT_MulFix(v87, v137);
          }
          if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
          {
            v90 = *(_DWORD *)(a1 + 4);
            v135 = *(_DWORD *)(v90 + 52);
            v79 = FT_MulFix(v79, *(_DWORD *)(v90 + 48));
            v91 = FT_MulFix(v87, v135);
            v87 = v91;
            if ( (*(_WORD *)(v62 + 4) & 4) != 0 )
            {
              v79 = (v79 + 32) & 0xFFFFFFC0;
              v87 = (v91 + 32) & 0xFFFFFFC0;
            }
          }
        }
        else
        {
          v82 = v79 + v122;
          if ( v82 >= v119 )
            goto LABEL_98;
          v83 = v80 + v119;
          if ( v83 >= v125 )
            goto LABEL_98;
          v84 = *(_DWORD *)(v78 + 24);
          v85 = (_DWORD *)(v84 + 8 * v82);
          v86 = (_DWORD *)(v84 + 8 * v83);
          v79 = *v85 - *v86;
          v87 = v85[1] - v86[1];
        }
        if ( (v87 | v79) != 0 )
        {
          v126 = v125 - v119;
          v92 = v140 + 8 * v119;
          if ( v79 != 0 )
          {
            v94 = (_DWORD *)(v140 + 8 * v119);
            for ( j = 0; j != v126; ++j )
            {
              *v94 += v79;
              v94 += 2;
            }
          }
          v93 = 0;
          if ( v87 != 0 )
          {
            while ( v93 != v126 )
            {
              ++v93;
              *(_DWORD *)(v92 + 4) += v87;
              v92 += 8;
            }
          }
        }
      }
LABEL_98:
      ++v131;
    }
  }
  if ( (*(int (__fastcall **)(int))(v5 + 524))(a1) != 0 )
    goto LABEL_119;
  (*(void (__fastcall **)(int))(v5 + 516))(a1);
  v25 = *(_DWORD *)(a1 + 12);
  v26 = *(__int16 *)(v25 + 58);
  v121 = 8 * v26;
  v27 = *(_DWORD *)(v25 + 60);
  *(_DWORD *)(v27 + 8 * v26) = *(_DWORD *)(a1 + 68);
  *(_DWORD *)(v27 + 8 * v26 + 4) = *(_DWORD *)(a1 + 72);
  v28 = *(_DWORD *)(v25 + 60) + 8 * v26;
  *(_DWORD *)(v28 + 8) = *(_DWORD *)(a1 + 76);
  *(_DWORD *)(v28 + 12) = *(_DWORD *)(a1 + 80);
  v29 = *(_DWORD *)(v25 + 60) + 8 * v26;
  *(_DWORD *)(v29 + 16) = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(v29 + 20) = *(_DWORD *)(a1 + 188);
  v30 = *(_DWORD *)(v25 + 60) + 8 * v26;
  *(_DWORD *)(v30 + 24) = *(_DWORD *)(a1 + 192);
  *(_DWORD *)(v30 + 28) = *(_DWORD *)(a1 + 196);
  *(_BYTE *)(*(_DWORD *)(v25 + 64) + v26) = 0;
  *(_BYTE *)(*(_DWORD *)(v25 + 64) + v26 + 1) = 0;
  *(_BYTE *)(*(_DWORD *)(v25 + 64) + v26 + 2) = 0;
  *(_BYTE *)(*(_DWORD *)(v25 + 64) + v26 + 3) = 0;
  v31 = *(_DWORD *)a1;
  v116 = v26 + 4;
  if ( *(_BYTE *)(*(_DWORD *)a1 + 712) != 0 )
  {
    v32 = *(_DWORD *)(v31 + 100);
    v33 = sub_21EE80(v31, *(_DWORD *)(a1 + 20), &v150, v116);
    if ( v33 != 0 )
      return sub_2241BA(v33);
    for ( k = 0; k < v116; ++k )
    {
      v35 = 8 * k;
      v36 = *(_DWORD *)(v150 + 8 * k);
      v37 = (_DWORD *)(*(_DWORD *)(v25 + 60) + 8 * k);
      *v37 += v36;
      *(_DWORD *)(*(_DWORD *)(v25 + 60) + v35 + 4) += *(_DWORD *)(v150 + v35 + 4);
    }
    ft_mem_free(v32, v150);
  }
  if ( (*(_DWORD *)(a1 + 16) & 2) == 0 )
  {
    v38 = *(unsigned __int16 *)(v25 + 58);
    *(_WORD *)(a1 + 132) = v38;
    *(_WORD *)(a1 + 134) = *(_WORD *)(v25 + 56);
    *(_DWORD *)(a1 + 136) = *(_DWORD *)(v25 + 76);
    v39 = *(const void **)(v25 + 60);
    *(_DWORD *)(a1 + 140) = v39;
    v40 = *(void **)(v25 + 80);
    *(_DWORD *)(a1 + 144) = v40;
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(v25 + 64);
    v41 = *(_DWORD *)(v25 + 68);
    *(_WORD *)(a1 + 156) = 0;
    *(_DWORD *)(a1 + 152) = v41;
    j_memcpy(v40, v39, 8 * (v38 + 4));
  }
  if ( (*(_DWORD *)(a1 + 16) & 1) == 0 )
  {
    v42 = *(int **)(v25 + 60);
    v117 = &v42[v121 / 4u + 8];
    v43 = *(_DWORD *)(a1 + 4);
    v130 = *(_DWORD *)(v43 + 48);
    v44 = *(_DWORD *)(v43 + 52);
    while ( v42 < v117 )
    {
      *v42 = FT_MulFix(*v42, v130);
      v42[1] = FT_MulFix(v42[1], v44);
      v42 += 2;
    }
    v45 = *(_DWORD *)(v25 + 60);
    *(_DWORD *)(a1 + 68) = *(_DWORD *)(v45 + v121);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(v45 + v121 + 4);
    v46 = *(_DWORD *)(v25 + 60);
    *(_DWORD *)(a1 + 76) = *(_DWORD *)(v46 + v121 + 8);
    *(_DWORD *)(a1 + 80) = *(_DWORD *)(v46 + v121 + 12);
    v47 = *(_DWORD *)(v25 + 60) + v121;
    *(_DWORD *)(a1 + 184) = *(_DWORD *)(v47 + 16);
    *(_DWORD *)(a1 + 188) = *(_DWORD *)(v47 + 20);
    v48 = *(_DWORD *)(v25 + 60) + v121;
    *(_DWORD *)(a1 + 192) = *(_DWORD *)(v48 + 24);
    *(_DWORD *)(a1 + 196) = *(_DWORD *)(v48 + 28);
  }
  if ( (*(_DWORD *)(a1 + 16) & 2) != 0 || (*(_WORD *)(a1 + 132) += 4, (v33 = sub_2235BC(a1, 0)) == 0) )
    v33 = FT_GlyphLoader_Add(v123);
  return sub_2241BA(v33);
}


//======================================================================
// sub_2241A2
// address: 0x002241A2   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_2241A2(
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
        int a26)
{
  if ( a26 != 0 )
    return sub_2241AC(a1);
  else
    return sub_2241BA(a1);
}


//======================================================================
// sub_2241AC
// address: 0x002241AC   size: 0xC (12 bytes)
//======================================================================
int sub_2241AC()
{
  int v0; // r4
  int v1; // r5
  int v2; // r0

  v2 = (*(int (__fastcall **)(int))(v1 + 516))(v0);
  return sub_2241BA(v2);
}


//======================================================================
// sub_2241BA
// address: 0x002241BA   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_2241BA(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_2241C0
// address: 0x002241C0   size: 0x516 (1302 bytes)
//======================================================================
int __fastcall sub_2241C0(int a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r7
  _DWORD *v6; // r6
  int v7; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r0
  int v14; // r3
  int v15; // r6
  int v16; // r3
  int v17; // r5
  unsigned int i; // r5
  int v19; // r0
  int v20; // r0
  int v21; // r2
  int v22; // r1
  _DWORD *v23; // r2
  int v24; // r7
  int v25; // r7
  int v26; // r1
  int v27; // r3
  int v28; // r3
  int v29; // r7
  _DWORD *v30; // r5
  int v31; // r3
  int v32; // r2
  int v33; // r12
  int v34; // r6
  int v35; // r3
  unsigned __int8 *v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r7
  unsigned int v40; // r6
  __int16 v41; // r0
  int v42; // r6
  int v43; // r3
  int v44; // r3
  int v45; // r0
  int v46; // r5
  unsigned int v48; // [sp+18h] [bp-10Ch]
  int v49; // [sp+20h] [bp-104h]
  int v50; // [sp+20h] [bp-104h]
  int v51; // [sp+20h] [bp-104h]
  int v53; // [sp+28h] [bp-FCh]
  char v54; // [sp+28h] [bp-FCh]
  int v55; // [sp+28h] [bp-FCh]
  int v56; // [sp+2Ch] [bp-F8h]
  int v57; // [sp+2Ch] [bp-F8h]
  int v58; // [sp+2Ch] [bp-F8h]
  int v59; // [sp+2Ch] [bp-F8h]
  int v60; // [sp+30h] [bp-F4h]
  unsigned int *v62; // [sp+38h] [bp-ECh]
  int v63; // [sp+3Ch] [bp-E8h]
  int v64; // [sp+40h] [bp-E4h] BYREF
  int v65; // [sp+44h] [bp-E0h]
  int v66; // [sp+48h] [bp-DCh]
  int v67; // [sp+4Ch] [bp-D8h]
  _DWORD v68[53]; // [sp+50h] [bp-D4h] BYREF

  v5 = a4;
  v6 = *(_DWORD **)(a1 + 4);
  if ( a2 == 0 )
    return 36;
  v46 = 6;
  if ( v6 != nullptr && a3 < v6[4] )
  {
    if ( (a4 & 2) != 0 )
    {
      if ( (v6[2] & 0x2000) != 0 )
        v5 = a4 & 0xFFFFFFFD;
      if ( (v5 & 0x8000) != 0 )
        v5 |= 2u;
    }
    if ( (v5 & 0x401) != 0 )
    {
      if ( (v6[2] & 0x2000) != 0 )
        v7 = 9;
      else
        v7 = 11;
      v5 |= v7;
    }
    v8 = *(_DWORD *)(a2 + 112);
    if ( v8 == -1
      || (v5 & 8) != 0
      || (*(int (__fastcall **)(_DWORD *, int, unsigned int, unsigned int, _DWORD, int, _DWORD *))(v6[133] + 104))(
           v6,
           v8,
           a3,
           v5,
           v6[26],
           a1 + 76,
           v68) != 0 )
    {
      v63 = v5 & 1;
      if ( (v5 & 1) != 0 || (v46 = 36, *(_BYTE *)(a2 + 108) != 0) )
      {
        v46 = 6;
        if ( (v5 & 0x4000) == 0 )
        {
          v15 = *(_DWORD *)(a1 + 4);
          v57 = *(_DWORD *)(v15 + 104);
          j_memset(v68, 0, 0xD0u);
          v60 = v5 & 2;
          if ( (v5 & 2) == 0 )
          {
            v54 = v5 & 0x80;
            if ( *(_BYTE *)(a2 + 301) == 0 )
            {
              v46 = sub_223170(a2, v54);
              if ( v46 != 0 )
                return v46;
            }
            v16 = *(_BYTE *)(a2 + 292) != 0 ? *(_DWORD *)(a2 + 296) : *(_DWORD *)(*(_DWORD *)(v15 + 96) + 28);
            v49 = v16;
            v46 = 153;
            if ( v16 == 0 )
              return v46;
            sub_21EB24(v16, v15, a2);
            v17 = v5 << 12 >> 28 != 2;
            if ( *(unsigned __int8 *)(v49 + 604) != v17 )
            {
              *(_BYTE *)(v49 + 604) = v17;
              for ( i = 0; i < *(_DWORD *)(a2 + 240); ++i )
              {
                v62 = (unsigned int *)(*(_DWORD *)(a2 + 244) + 4 * i);
                v19 = *(__int16 *)(2 * i + *(_DWORD *)(v15 + 672));
                *v62 = FT_MulFix(v19, *(_DWORD *)(a2 + 88));
              }
              sub_223080(a2, v54);
            }
            if ( (*(_BYTE *)(v49 + 336) & 1) != 0 )
              v5 |= 2u;
            if ( (*(_BYTE *)(v49 + 336) & 2) != 0 )
              j_memcpy((void *)(v49 + 284), &tt_default_graphics_state, 0x44u);
            *(_BYTE *)(v49 + 561) = v5 & 0x80;
            v68[40] = v49;
            v68[41] = *(_DWORD *)(v49 + 392);
          }
          v20 = (*(int (__fastcall **)(int, int, int, _DWORD))(v15 + 508))(v15, 1735162214, v57, 0);
          if ( v20 == 142 )
          {
            v68[21] = 0;
          }
          else
          {
            v46 = v20;
            if ( v20 != 0 )
              return v46;
            v68[21] = FT_Stream_Pos(v57);
          }
          v50 = **(_DWORD **)(a1 + 156);
          FT_GlyphLoader_Rewind(v50);
          v68[4] = v5;
          v68[0] = v15;
          *(_DWORD *)(a1 + 72) = 1869968492;
          v68[6] = v57;
          v68[3] = v50;
          *(_DWORD *)(a1 + 128) = 0;
          *(_DWORD *)(a1 + 124) = 0;
          v68[1] = a2;
          v68[2] = a1;
          v55 = sub_223820((int)v68, a3, 0, nullptr);
          if ( v55 == 0 )
          {
            v21 = v68[3];
            if ( *(_DWORD *)(a1 + 72) == 1668246896 )
            {
              *(_DWORD *)(a1 + 128) = *(_DWORD *)(v68[3] + 48);
              *(_DWORD *)(a1 + 132) = *(_DWORD *)(v21 + 52);
            }
            else
            {
              v22 = *(_DWORD *)(v68[3] + 24);
              v24 = *(_DWORD *)(v68[3] + 28);
              v23 = (_DWORD *)(v68[3] + 32);
              *(_DWORD *)(a1 + 108) = *(_DWORD *)(v68[3] + 20);
              *(_DWORD *)(a1 + 112) = v22;
              *(_DWORD *)(a1 + 116) = v24;
              v25 = v23[1];
              *(_DWORD *)(a1 + 120) = *v23;
              *(_DWORD *)(a1 + 124) = v25;
              v26 = v68[17];
              *(_DWORD *)(a1 + 124) &= ~0x200u;
              if ( v26 != 0 )
                FT_Outline_Translate(a1 + 108, -v26, 0);
            }
            if ( v60 == 0 )
            {
              if ( *(_BYTE *)(v68[40] + 337) != 0 )
              {
                switch ( *(_DWORD *)(v68[40] + 340) )
                {
                  case 0:
                    v27 = 32;
                    goto LABEL_66;
                  case 1:
                    break;
                  case 4:
                    v28 = *(_DWORD *)(a1 + 124) | 0x30;
                    goto LABEL_67;
                  case 5:
                    v28 = *(_DWORD *)(a1 + 124) | 0x10;
                    goto LABEL_67;
                  default:
                    v28 = *(_DWORD *)(a1 + 124) | 8;
                    goto LABEL_67;
                }
              }
              else
              {
                v27 = 8;
LABEL_66:
                v28 = v27 | *(_DWORD *)(a1 + 124);
LABEL_67:
                *(_DWORD *)(a1 + 124) = v28;
              }
            }
            v29 = v68[0];
            v30 = (_DWORD *)v68[2];
            v58 = v68[1];
            if ( (v68[4] & 1) != 0 )
              v31 = 0x10000;
            else
              v31 = *(_DWORD *)(v68[1] + 20);
            v51 = v31;
            if ( *(_DWORD *)(v68[2] + 72) == 1668246896 )
            {
              v64 = v68[9];
              v65 = v68[10];
              v66 = v68[11];
              v67 = v68[12];
            }
            else
            {
              FT_Outline_Get_CBox(v68[2] + 108, &v64);
            }
            v32 = v68[15];
            v33 = v64;
            v30[8] = v64;
            v34 = v67;
            v30[14] = v32;
            v30[9] = v34;
            v30[10] = v68[19] - v68[17];
            if ( *(_DWORD *)(v29 + 480) == 0 )
            {
              v35 = v68[4] & 2;
              if ( (v68[4] & 2) == 0 )
              {
                v59 = *(unsigned __int16 *)(v58 + 12);
                v48 = *(_DWORD *)(v29 + 756);
                while ( v35 != *(_DWORD *)(v29 + 752) )
                {
                  if ( *(unsigned __int8 *)(*(_DWORD *)(v29 + 760) + v35) == v59 )
                  {
                    if ( a3 + 2 < v48 )
                    {
                      v36 = (unsigned __int8 *)(*(_DWORD *)(v29 + 744) + 8 + v35 * v48 + a3 + 2);
                      if ( v36 != nullptr )
                        v30[10] = *v36 << 6;
                    }
                    break;
                  }
                  ++v35;
                }
              }
            }
            v37 = v65;
            v30[6] = v66 - v33;
            v38 = v34 - v37;
            v30[7] = v38;
            if ( *(_BYTE *)(v29 + 296) != 0 && *(_WORD *)(v29 + 334) != 0 )
            {
              v39 = (__int16)FT_DivFix(v68[47] - v34, v51);
              v40 = 0;
              if ( v68[47] > v68[49] )
                v40 = (unsigned __int16)FT_DivFix(v68[47] - v68[49], v51);
            }
            else
            {
              v41 = FT_DivFix(v38, v51);
              if ( *(unsigned __int16 *)(v29 + 368) == 0xFFFF )
              {
                v42 = *(__int16 *)(v29 + 220);
                v43 = *(__int16 *)(v29 + 222);
              }
              else
              {
                v42 = *(__int16 *)(v29 + 438);
                v43 = *(__int16 *)(v29 + 440);
              }
              v40 = v42 - v43;
              v39 = (int)(v40 - v41) / 2;
            }
            v30[15] = v40;
            if ( (v68[4] & 1) == 0 )
            {
              v39 = FT_MulFix(v39, v51);
              v40 = FT_MulFix(v40, v51);
            }
            v44 = v30[10];
            v45 = v30[8];
            v30[12] = v39;
            v30[11] = v45 - v44 / 2;
            v30[13] = v40;
          }
          v46 = v55;
          if ( v63 == 0 && *(unsigned __int16 *)(a2 + 14) <= 0x17u )
            *(_DWORD *)(a1 + 124) |= 0x100u;
        }
      }
    }
    else
    {
      *(_WORD *)(a1 + 110) = 0;
      *(_WORD *)(a1 + 108) = 0;
      *(_DWORD *)(a1 + 24) = BYTE1(v68[0]) << 6;
      *(_DWORD *)(a1 + 28) = LOBYTE(v68[0]) << 6;
      v9 = SBYTE2(v68[0]);
      *(_DWORD *)(a1 + 32) = SBYTE2(v68[0]) << 6;
      v10 = SHIBYTE(v68[0]);
      *(_DWORD *)(a1 + 36) = SHIBYTE(v68[0]) << 6;
      *(_DWORD *)(a1 + 40) = LOBYTE(v68[1]) << 6;
      v11 = SBYTE1(v68[1]);
      *(_DWORD *)(a1 + 44) = SBYTE1(v68[1]) << 6;
      v12 = SBYTE2(v68[1]);
      *(_DWORD *)(a1 + 52) = HIBYTE(v68[1]) << 6;
      *(_DWORD *)(a1 + 48) = v12 << 6;
      *(_DWORD *)(a1 + 72) = 1651078259;
      if ( (v5 & 0x10) != 0 )
      {
        *(_DWORD *)(a1 + 100) = v11;
        *(_DWORD *)(a1 + 104) = v12;
      }
      else
      {
        *(_DWORD *)(a1 + 100) = v9;
        *(_DWORD *)(a1 + 104) = v10;
      }
      v46 = 0;
      if ( (v6[2] & 1) != 0 )
      {
        v53 = *(_DWORD *)(a1 + 4);
        v56 = *(_DWORD *)(v53 + 104);
        j_memset(v68, 0, 0xD0u);
        v13 = (*(int (__fastcall **)(int, int, int, _DWORD))(v53 + 508))(v53, 1735162214, v56, 0);
        if ( v13 == 142 )
        {
          v68[21] = 0;
        }
        else
        {
          if ( v13 != 0 )
          {
LABEL_27:
            sub_223820((int)v68, a3, 0, (int *)((char *)&dword_0 + 1));
            v14 = v68[44] + v68[12] - v68[45];
            *(_DWORD *)(a1 + 56) = v68[15];
            *(_DWORD *)(a1 + 60) = v14;
            return 0;
          }
          v68[21] = FT_Stream_Pos(v56);
        }
        v68[4] = v5;
        v68[2] = a1;
        v68[0] = v53;
        v68[1] = a2;
        v68[6] = v56;
        goto LABEL_27;
      }
    }
  }
  return v46;
}


//======================================================================
// sub_22475C
// address: 0x0022475C   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_22475C(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  int v5; // r3

  v4 = TT_New_Context(a1, a2, a3, a4);
  v5 = 0;
  if ( v4 == 0 )
    return 153;
  return v5;
}


//======================================================================
// sub_22476E
// address: 0x0022476E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_22476E(int a1, int a2, int a3, _DWORD *a4)
{
  int v5; // r3

  v5 = *(_DWORD *)(a1 + 532);
  *a4 = 0;
  a4[1] = 0;
  if ( v5 != 0 )
    *a4 = (*(int (**)(void))(v5 + 128))();
  return 0;
}


//======================================================================
// sub_22478E
// address: 0x0022478E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_22478E(int a1)
{
  return *(_DWORD *)(a1 + 8) << 22 >> 31;
}


//======================================================================
// sub_224796
// address: 0x00224796   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_224796(int a1)
{
  return *(_DWORD *)(*(_DWORD *)(a1 + 696) + 1304);
}


//======================================================================
// sub_2247A4
// address: 0x002247A4   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_2247A4(int a1, _BYTE *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 696);
  *a2 = 0;
  if ( v2 != 0 && *(_DWORD *)(v2 + 1456) != 0xFFFF )
    *a2 = 1;
  return 0;
}


//======================================================================
// sub_2247D0
// address: 0x002247D0   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_2247D0(int a1, unsigned int a2, _DWORD *a3)
{
  _DWORD *v3; // r3
  int result; // r0
  int v5; // r3

  v3 = *(_DWORD **)(a1 + 696);
  if ( v3 == nullptr )
    return 0;
  result = 6;
  if ( v3[364] != 0xFFFF && a2 <= v3[3] )
  {
    v5 = *(unsigned __int16 *)(2 * a2 + v3[290]);
    if ( a3 != nullptr )
    {
      *a3 = v5;
      return 0;
    }
    return 0;
  }
  return result;
}


//======================================================================
// sub_224810
// address: 0x00224810   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_224810(unsigned __int8 *a1, unsigned int a2)
{
  int v2; // r2
  unsigned __int8 *v4; // r2
  int result; // r0
  unsigned __int8 *v6; // r2
  unsigned __int8 *v7; // r4

  v2 = *a1;
  if ( v2 == 28 )
  {
    v4 = a1 + 3;
    result = 0;
    if ( a2 >= (unsigned int)v4 )
      return (__int16)_byteswap_ushort(*(_WORD *)(a1 + 1));
  }
  else if ( v2 == 29 )
  {
    v6 = a1 + 5;
    result = 0;
    if ( a2 >= (unsigned int)v6 )
      return _byteswap_ulong(*(_DWORD *)(a1 + 1));
  }
  else if ( *a1 > 0xF6u )
  {
    v7 = a1 + 2;
    result = 0;
    if ( v2 > 250 )
    {
      if ( a2 >= (unsigned int)v7 )
        return ((251 - v2) << 8) - a1[1] - 108;
    }
    else if ( a2 >= (unsigned int)v7 )
    {
      return ((v2 - 247) << 8) + a1[1] + 108;
    }
  }
  else
  {
    return v2 - 139;
  }
  return result;
}


//======================================================================
// sub_224888
// address: 0x00224888   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_224888(int a1)
{
  int result; // r0

  result = a1 + 156;
  *(_DWORD *)(*(_DWORD *)result + 36) = 0;
  return result;
}


//======================================================================
// sub_224892
// address: 0x00224892   size: 0x4 (4 bytes)
//======================================================================
int sub_224892()
{
  return 0;
}


//======================================================================
// sub_224898
// address: 0x00224898   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_224898(int a1, int a2, int a3, int a4)
{
  int v4; // r4
  int result; // r0
  int *v6; // r5
  int v7; // r6

  v4 = *(_DWORD *)(a1 + 20);
  result = *(unsigned __int8 *)(a1 + 65);
  if ( result != 0 )
  {
    result = *(__int16 *)(v4 + 2);
    v6 = (int *)(*(_DWORD *)(v4 + 4) + 8 * result);
    v7 = *(_DWORD *)(v4 + 8);
    v6[1] = a3 >> 16;
    *v6 = a2 >> 16;
    *(_BYTE *)(v7 + result) = (a4 == 0) + 1;
  }
  ++*(_WORD *)(v4 + 2);
  return result;
}


//======================================================================
// sub_2248C8
// address: 0x002248C8   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_2248C8(int a1, unsigned int a2)
{
  int v2; // r3
  int v3; // r1
  int v4; // r2
  int result; // r0

  v2 = *(_DWORD *)(a1 + 1160);
  if ( v2 != 0 && a2 <= 0xFF )
  {
    v3 = word_434CFC[a2];
    v4 = *(_DWORD *)(a1 + 12);
    for ( result = 0; result != v4; ++result )
    {
      if ( *(unsigned __int16 *)(v2 + 2 * result) == v3 )
        return result;
    }
  }
  return -1;
}


//======================================================================
// sub_224900
// address: 0x00224900   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_224900(_DWORD *a1)
{
  a1[4] = *(_DWORD *)(*a1 + 696) + 640;
  return 0;
}


//======================================================================
// sub_224914
// address: 0x00224914   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_224914(int result)
{
  *(_DWORD *)(result + 16) = 0;
  return result;
}


//======================================================================
// sub_22491A
// address: 0x0022491A   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_22491A(int a1, unsigned int a2)
{
  int v2; // r3

  v2 = 0;
  if ( a2 <= 0xFF )
    return *(unsigned __int16 *)(2 * a2 + *(_DWORD *)(a1 + 16));
  return v2;
}


//======================================================================
// sub_22492C
// address: 0x0022492C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_22492C(int a1, unsigned int *a2)
{
  unsigned int v2; // r3
  int result; // r0
  int v5; // r4
  unsigned int v6; // r3

  v2 = *a2;
  *a2 = 0;
  result = 0;
  if ( v2 <= 0xFE )
  {
    v5 = *(_DWORD *)(a1 + 16);
    v6 = v2 + 1;
    while ( 1 )
    {
      result = *(unsigned __int16 *)(v5 + 2 * v6);
      if ( *(_WORD *)(v5 + 2 * v6) != 0 )
        break;
      if ( ++v6 == 256 )
        return result;
    }
    *a2 = v6;
  }
  return result;
}


//======================================================================
// sub_224958
// address: 0x00224958   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_224958(int a1)
{
  _DWORD *v1; // r2
  int v3; // r5
  int result; // r0

  v1 = *(_DWORD **)(*(_DWORD *)a1 + 696);
  v3 = *(_DWORD *)(*(_DWORD *)a1 + 100);
  result = 163;
  if ( v1[290] != 0 )
    return (*(int (__fastcall **)(int, int, _DWORD, int (*)()))(v1[739] + 4))(v3, a1, v1[3], sub_225808);
  return result;
}


//======================================================================
// sub_224994
// address: 0x00224994   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_224994(int a1)
{
  return (*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 696) + 2956) + 8))();
}


//======================================================================
// sub_2249AC
// address: 0x002249AC   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_2249AC(int a1)
{
  return (*(int (**)(void))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)a1 + 696) + 2956) + 12))();
}


//======================================================================
// sub_2249C4
// address: 0x002249C4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_2249C4(int a1)
{
  int v1; // r3
  int v3; // r5

  v1 = *(_DWORD *)(a1 + 4);
  v3 = *(_DWORD *)(*(_DWORD *)(v1 + 696) + 2952);
  if ( v3 != 0 && FT_Get_Module(*(_DWORD *)(*(_DWORD *)(v1 + 96) + 4), "pshinter") != 0 )
    *(_DWORD *)(*(_DWORD *)(a1 + 156) + 36) = (*(int (**)(void))(v3 + 8))();
  return 0;
}


//======================================================================
// sub_224A00
// address: 0x00224A00   size: 0x128 (296 bytes)
//======================================================================
char *__fastcall sub_224A00(int a1, char *a2)
{
  char *result; // r0
  int v5; // r3
  unsigned int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r1
  unsigned int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r1
  unsigned int i; // r2
  unsigned int v16; // r1
  unsigned int j; // r2
  int v18; // r5

  result = (char *)j_memset(a2, 0, 0xC4u);
  v5 = a1 + 176;
  v6 = *(unsigned __int8 *)(a1 + 176);
  v7 = 0;
  a2[8] = v6;
  while ( v7 < v6 )
  {
    result = &a2[2 * v7];
    *((_WORD *)result + 6) = *(_DWORD *)(v5 + 4 * v7++ + 4);
  }
  v8 = *(unsigned __int8 *)(a1 + 177);
  v9 = 0;
  a2[9] = v8;
  while ( v9 < v8 )
  {
    result = &a2[2 * v9];
    *((_WORD *)result + 20) = *(_DWORD *)(v5 + 4 * v9++ + 60);
  }
  v10 = *(unsigned __int8 *)(a1 + 178);
  v11 = 0;
  a2[10] = v10;
  while ( v11 < v10 )
  {
    result = &a2[2 * v11];
    *((_WORD *)result + 30) = *(_DWORD *)(v5 + 4 * v11++ + 100);
  }
  v12 = *(unsigned __int8 *)(a1 + 179);
  v13 = 0;
  a2[11] = v12;
  while ( v13 < v12 )
  {
    result = &a2[2 * v13 + 88];
    *(_WORD *)result = *(_DWORD *)(v5 + 4 * v13++ + 156);
  }
  *((_DWORD *)a2 + 27) = *(_DWORD *)(a1 + 372);
  *((_DWORD *)a2 + 28) = *(_DWORD *)(a1 + 376);
  *((_DWORD *)a2 + 29) = *(_DWORD *)(a1 + 380);
  *((_WORD *)a2 + 60) = *(_DWORD *)(a1 + 384);
  *((_WORD *)a2 + 61) = *(_DWORD *)(a1 + 388);
  v14 = *(unsigned __int8 *)(a1 + 392);
  a2[124] = v14;
  for ( i = 0; i < v14; ++i )
  {
    result = &a2[2 * i + 128];
    *(_WORD *)result = *(_DWORD *)(v5 + 4 * i + 220);
  }
  v16 = *(unsigned __int8 *)(a1 + 393);
  a2[125] = v16;
  for ( j = 0; j < v16; ++j )
  {
    result = &a2[2 * j + 154];
    *(_WORD *)result = *(_DWORD *)(v5 + 4 * j + 272);
  }
  a2[126] = *(_BYTE *)(a1 + 500);
  v18 = a1 + 428;
  *((_DWORD *)a2 + 46) = *(_DWORD *)(v18 + 84);
  *((_DWORD *)a2 + 1) = *(_DWORD *)(v18 + 80);
  return result;
}


//======================================================================
// sub_224B28
// address: 0x00224B28   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_224B28(int a1, int *a2)
{
  int v4; // r0
  int v5; // r3
  int v6; // r1
  int v7; // r2
  int v8; // r4
  int *v10; // [sp+4h] [bp-4h] BYREF

  v10 = a2;
  v4 = FT_Stream_Read(*(_DWORD **)a1, &v10, *(unsigned __int8 *)(a1 + 12));
  v5 = 0;
  if ( v4 == 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 12);
    v7 = 0;
    v5 = 0;
    while ( v7 < v6 )
    {
      v8 = *((unsigned __int8 *)&v10 + v7++);
      v5 = (v5 << 8) | v8;
    }
  }
  *a2 = v4;
  return v5;
}


//======================================================================
// sub_224B5A
// address: 0x00224B5A   size: 0xE6 (230 bytes)
//======================================================================
int __fastcall sub_224B5A(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v5; // r5
  unsigned int v6; // r2
  int v7; // r3
  int *v8; // r7
  int v9; // r0
  unsigned int v10; // r6
  unsigned int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r3
  unsigned int v14; // r5
  int v15; // r3
  int v16; // r3
  _DWORD *v17; // r2
  int v21[2]; // [sp+14h] [bp-8h] BYREF

  v5 = a2;
  v21[0] = 0;
  if ( a1 == 0 || (v6 = *(_DWORD *)(a1 + 8)) <= a2 )
  {
    v21[0] = 6;
    return v21[0];
  }
  v7 = *(_DWORD *)(a1 + 24);
  v8 = *(int **)a1;
  if ( v7 != 0 )
  {
    v10 = *(_DWORD *)(4 * a2 + v7);
    if ( v10 != 0 )
    {
      do
      {
        ++v5;
        v11 = *(_DWORD *)(v7 + 4 * v5);
      }
      while ( v11 == 0 && v5 < v6 );
      goto LABEL_14;
    }
  }
  else
  {
    v21[0] = FT_Stream_Seek(*(_DWORD **)a1, *(_DWORD *)(a1 + 4) + 3 + *(unsigned __int8 *)(a1 + 12) * a2);
    if ( v21[0] != 0 )
      return v21[0];
    v9 = sub_224B28(a1, v21);
    v10 = v9;
    if ( v21[0] != 0 )
      return v21[0];
    if ( v9 != 0 )
    {
      do
      {
        ++v5;
        v11 = sub_224B28(a1, v21);
      }
      while ( v11 == 0 && v5 < *(_DWORD *)(a1 + 8) );
      goto LABEL_14;
    }
  }
  v11 = 0;
  v10 = 0;
LABEL_14:
  v12 = *(_DWORD *)(a1 + 16);
  v13 = v8[1] + 1;
  if ( v11 > v13 || v12 > v13 - v11 )
    v11 = v13 - v12;
  if ( v10 == 0 || v11 <= v10 )
  {
    v16 = 0;
    *a3 = 0;
    v17 = a4;
    goto LABEL_24;
  }
  v14 = v11 - v10;
  *a4 = v11 - v10;
  v15 = *(_DWORD *)(a1 + 28);
  if ( v15 != 0 )
  {
    v16 = v15 + v10 - 1;
    v17 = a3;
LABEL_24:
    *v17 = v16;
    return v21[0];
  }
  v21[0] = FT_Stream_Seek(v8, *(_DWORD *)(a1 + 16) - 1 + v10);
  if ( v21[0] == 0 )
    v21[0] = FT_Stream_ExtractFrame(v8, v14, a3);
  return v21[0];
}


//======================================================================
// sub_224C40
// address: 0x00224C40   size: 0x21E (542 bytes)
//======================================================================
int __fastcall sub_224C40(unsigned __int8 *a1, unsigned int a2, int a3, int *a4)
{
  int v5; // r3
  int v6; // r12
  int v7; // r7
  unsigned int v8; // r1
  int i; // r2
  int v10; // r1
  unsigned int v11; // r4
  int v12; // r5
  int v13; // r4
  int v14; // r5
  int result; // r0
  int v16; // r4
  int v17; // r3
  int v18; // r5
  int v19; // r5
  int v20; // r3
  int v21; // [sp+4h] [bp-18h]
  int v22; // [sp+4h] [bp-18h]
  int v23; // [sp+8h] [bp-14h]
  int v25; // [sp+10h] [bp-Ch]

  if ( a4 != nullptr )
    *a4 = 0;
  v5 = 4;
  v6 = 0;
  v21 = 0;
  v25 = 0;
  v7 = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v5 != 0 && (unsigned int)++a1 >= a2 )
        return 0;
      v8 = ((int)*a1 >> v5) & 0xF;
      v5 = 4 - v5;
      if ( v8 != 14 )
        break;
      v25 = 1;
    }
    if ( v8 > 9 )
      break;
    if ( v7 <= 214748363 )
    {
      if ( v8 != 0 || v7 != 0 )
      {
        ++v6;
        v7 = v8 + 10 * v7;
      }
    }
    else
    {
      ++v21;
    }
  }
  v23 = 0;
  if ( v8 == 10 )
  {
    while ( v5 == 0 || (unsigned int)++a1 < a2 )
    {
      v8 = ((int)*a1 >> v5) & 0xF;
      v5 = 4 - v5;
      if ( v8 > 9 )
        goto LABEL_24;
      if ( v8 != 0 || v7 != 0 )
      {
        if ( v7 <= 214748363 && v23 <= 8 )
        {
          ++v23;
          v7 = v8 + 10 * v7;
        }
      }
      else
      {
        --v21;
      }
    }
    return 0;
  }
LABEL_24:
  if ( v8 == 12 )
  {
    v10 = 1;
LABEL_28:
    for ( i = 0; i <= 1000; i = v11 + 10 * i )
    {
      if ( v5 != 0 && (unsigned int)++a1 >= a2 )
        break;
      v11 = ((int)*a1 >> v5) & 0xF;
      v5 = 4 - v5;
      if ( v11 > 9 )
      {
        if ( v10 != 0 )
          i = -i;
        goto LABEL_36;
      }
    }
    return 0;
  }
  i = 0;
  if ( v8 == 11 )
  {
    v10 = 0;
    goto LABEL_28;
  }
LABEL_36:
  v12 = i + a3 + v21;
  v13 = v12 + v6;
  if ( a4 != nullptr )
  {
    v14 = v23 + v6;
    if ( v23 + v6 > 5 )
    {
      v22 = dword_434EFC[v14 - 5];
      if ( v7 / v22 <= 0x7FFF )
      {
        result = FT_DivFix(v7, v22);
        v16 = v13 - 5;
      }
      else
      {
        result = FT_DivFix(v7, dword_434EFC[v14 - 4]);
        v16 = v13 - 4;
      }
    }
    else if ( v7 <= 0x7FFF )
    {
      if ( v13 <= 0 )
      {
        v16 = v13 - v14;
      }
      else
      {
        v17 = v13;
        if ( v13 > 5 )
          v17 = 5;
        v16 = v13 - v17;
        v7 *= dword_434EFC[v17 - v14];
        if ( v7 > 0x7FFF )
        {
          ++v16;
          v7 /= 10;
        }
      }
      result = v7 << 16;
    }
    else
    {
      result = FT_DivFix(v7, 10);
      v16 = v13 - v14 + 1;
    }
    *a4 = v16;
  }
  else
  {
    result = 0;
    if ( ((v13 + (v13 >> 31)) ^ (v13 >> 31)) > 5 )
      return result;
    v18 = v23 - v12;
    if ( v13 < 0 )
    {
      v18 += v13;
      v7 /= dword_434EFC[-v13];
    }
    if ( v18 == 10 )
    {
      v18 = 9;
      v7 /= 10;
    }
    else if ( v18 <= 0 )
    {
      result = 0;
      v20 = dword_434EFC[-v18] * v7;
      if ( v20 > 0x7FFF )
        return result;
      result = v20 << 16;
      goto LABEL_61;
    }
    v19 = v18;
    result = 0;
    if ( v7 / dword_434EFC[v19] > 0x7FFF )
      return result;
    result = FT_DivFix(v7, dword_434EFC[v19]);
  }
LABEL_61:
  if ( v25 != 0 )
    return -result;
  return result;
}


//======================================================================
// sub_224E7C
// address: 0x00224E7C   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_224E7C(int a1)
{
  unsigned __int8 *v2; // r0
  unsigned int v3; // r1

  v2 = *(unsigned __int8 **)a1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( *v2 == 30 )
    return sub_224C40(v2, v3, 0, nullptr);
  else
    return sub_224810(v2, v3) << 16;
}


//======================================================================
// sub_224E9C
// address: 0x00224E9C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_224E9C(int a1, int a2)
{
  unsigned __int8 *v3; // r0
  unsigned int v5; // r1

  v3 = *(unsigned __int8 **)a1;
  v5 = *(_DWORD *)(a1 + 4);
  if ( *v3 == 30 )
    return sub_224C40(v3, v5, a2, nullptr);
  else
    return (sub_224810(v3, v5) * dword_434EFC[a2]) << 16;
}


//======================================================================
// sub_224ECC
// address: 0x00224ECC   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_224ECC(int a1)
{
  unsigned __int8 *v2; // r0
  unsigned int v3; // r1

  v2 = *(unsigned __int8 **)a1;
  v3 = *(_DWORD *)(a1 + 4);
  if ( *v2 == 30 )
    return sub_224C40(v2, v3, 0, nullptr) >> 16;
  else
    return sub_224810(v2, v3);
}


//======================================================================
// sub_224EEC
// address: 0x00224EEC   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_224EEC(int a1)
{
  unsigned int v1; // r2
  _DWORD *v2; // r5
  unsigned int v3; // r3
  int result; // r0

  v1 = *(_DWORD *)(a1 + 404);
  v2 = *(_DWORD **)(a1 + 412);
  v3 = a1 + 28;
  result = 161;
  if ( v1 >= v3 )
  {
    v2[33] = sub_224ECC(a1 + 16);
    v2[34] = sub_224ECC(a1 + 20);
    v2[35] = sub_224ECC(a1 + 24);
    return 0;
  }
  return result;
}


//======================================================================
// sub_224F32
// address: 0x00224F32   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_224F32(int a1)
{
  unsigned int v1; // r2
  int v2; // r5
  unsigned int v3; // r3
  int result; // r0

  v1 = *(_DWORD *)(a1 + 404);
  v2 = *(_DWORD *)(a1 + 412);
  v3 = a1 + 24;
  result = 161;
  if ( v1 >= v3 )
  {
    *(_DWORD *)(v2 + 120) = sub_224ECC(a1 + 16);
    *(_DWORD *)(v2 + 116) = sub_224ECC(a1 + 20);
    return 0;
  }
  return result;
}


//======================================================================
// sub_224F64
// address: 0x00224F64   size: 0x128 (296 bytes)
//======================================================================
int __fastcall sub_224F64(_DWORD *a1)
{
  unsigned int v1; // r2
  int v2; // r4
  _DWORD *v3; // r3
  int result; // r0
  unsigned __int8 *v6; // r0
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r7
  int v11; // r1
  int v12; // r2
  int v13; // r0
  int v14; // r3
  int v15; // [sp+14h] [bp-8h] BYREF

  v1 = a1[101];
  v2 = a1[103];
  v3 = a1 + 10;
  result = 161;
  if ( v1 >= (unsigned int)v3 )
  {
    *(_BYTE *)(v2 + 64) = 1;
    v6 = (unsigned __int8 *)a1[4];
    v7 = a1[5];
    if ( *v6 == 30 )
    {
      v8 = sub_224C40(v6, v7, 0, &v15);
    }
    else
    {
      v9 = sub_224810(v6, v7);
      if ( v9 <= 0x7FFF )
      {
        v15 = 0;
        v8 = v9 << 16;
      }
      else
      {
        if ( v9 <= 99999 )
        {
          v10 = 5;
        }
        else if ( v9 <= 999999 )
        {
          v10 = 6;
        }
        else if ( v9 <= 9999999 )
        {
          v10 = 7;
        }
        else if ( v9 <= 99999999 )
        {
          v10 = 8;
        }
        else
        {
          v10 = 10;
          if ( v9 <= 999999999 )
            v10 = 9;
        }
        if ( v9 / dword_434EFC[v10 - 5] <= 0x7FFF )
        {
          v11 = dword_434EFC[v10 - 5];
          v15 = v10 - 5;
        }
        else
        {
          v15 = v10 - 4;
          v11 = dword_434EFC[v10 - 4];
        }
        v8 = FT_DivFix(v9, v11);
      }
    }
    v12 = v15;
    *(_DWORD *)(v2 + 48) = v8;
    v15 = -v12;
    if ( (unsigned int)-v12 <= 9 )
    {
      *(_DWORD *)(v2 + 56) = sub_224E9C((int)(a1 + 5), -v12);
      *(_DWORD *)(v2 + 52) = sub_224E9C((int)(a1 + 6), v15);
      *(_DWORD *)(v2 + 60) = sub_224E9C((int)(a1 + 7), v15);
      *(_DWORD *)(v2 + 72) = sub_224E9C((int)(a1 + 8), v15);
      v13 = sub_224E9C((int)(a1 + 9), v15);
      v14 = v15;
      *(_DWORD *)(v2 + 76) = v13;
      *(_DWORD *)(v2 + 68) = dword_434EFC[v14];
      return 0;
    }
    else
    {
      *(_DWORD *)(v2 + 48) = 0x10000;
      *(_DWORD *)(v2 + 60) = 0x10000;
      *(_DWORD *)(v2 + 56) = 0;
      *(_DWORD *)(v2 + 52) = 0;
      *(_DWORD *)(v2 + 72) = 0;
      *(_DWORD *)(v2 + 76) = 0;
      *(_DWORD *)(v2 + 68) = 1;
      return 0;
    }
  }
  return result;
}


//======================================================================
// sub_2250AC
// address: 0x002250AC   size: 0x10 (16 bytes)
//======================================================================
int *__fastcall sub_2250AC(int *result, int *a2)
{
  if ( result[7] == 0 )
    return (int *)FT_Stream_ReleaseFrame(*result, a2);
  return result;
}


//======================================================================
// sub_2250BC
// address: 0x002250BC   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_2250BC(int *a1)
{
  _DWORD *result; // r0
  int v3; // r5

  result = (_DWORD *)*a1;
  if ( result != nullptr )
  {
    v3 = result[7];
    if ( a1[7] != 0 )
      FT_Stream_ReleaseFrame((int)result, a1 + 7);
    ft_mem_free(v3, a1[6]);
    a1[6] = 0;
    return j_memset(a1, 0, 0x20u);
  }
  return result;
}


//======================================================================
// sub_2250EC
// address: 0x002250EC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_2250EC(_DWORD *a1)
{
  int result; // r0

  result = ft_mem_free(*(_DWORD *)(*a1 + 100), a1[5]);
  a1[5] = 0;
  a1[4] = 0;
  return result;
}


//======================================================================
// sub_225104
// address: 0x00225104   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_225104(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  void *v5; // r2
  _DWORD *Module; // r0
  int (__fastcall **service)(_DWORD *, _DWORD *); // r0

  v4 = *(_DWORD *)(*(_DWORD *)(*a1 + 96) + 4);
  *a2 = 0;
  a2[1] = 0;
  v5 = (void *)a1[3];
  if ( v5 == &cff_cmap_encoding_class_rec )
    return 0;
  if ( v5 == &cff_cmap_unicode_class_rec )
    return 0;
  Module = (_DWORD *)FT_Get_Module(v4, "sfnt");
  service = (int (__fastcall **)(_DWORD *, _DWORD *))ft_module_get_service(Module);
  if ( service == nullptr || *service == nullptr )
    return 0;
  else
    return (*service)(a1, a2);
}


//======================================================================
// sub_225164
// address: 0x00225164   size: 0x6C (108 bytes)
//======================================================================
unsigned int __fastcall sub_225164(int a1, const char *a2)
{
  _DWORD *v3; // r5
  int service; // r6
  unsigned int i; // r4
  unsigned int v6; // r0
  unsigned int v7; // r0
  const char *v8; // r1

  v3 = *(_DWORD **)(a1 + 696);
  service = ft_module_get_service(*(_DWORD **)(a1 + 96));
  if ( service != 0 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= v3[3] )
        return 0;
      v6 = *(unsigned __int16 *)(2 * i + v3[290]);
      if ( v6 <= 0x186 )
      {
        v8 = (const char *)(*(int (**)(void))(service + 20))();
      }
      else
      {
        v7 = v6 - 391;
        if ( v7 >= v3[328] )
          continue;
        v8 = *(const char **)(4 * v7 + v3[329]);
      }
      if ( v8 != nullptr && j_strcmp(a2, v8) == 0 )
        return i;
    }
  }
  return 0;
}


//======================================================================
// sub_2251D8
// address: 0x002251D8   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall sub_2251D8(int **a1, int *a2, int a3)
{
  int v5; // r2
  int UShort; // r0
  int v7; // r2
  int v8; // r7
  unsigned __int8 Char; // r0
  int v10; // r7
  int *v11; // r3
  int v12; // r0
  unsigned int v13; // r1
  int Frame; // r0
  int v17; // [sp+4h] [bp-10h]
  int v18[2]; // [sp+Ch] [bp-8h] BYREF

  v17 = a2[7];
  j_memset(a1, 0, 0x20u);
  *a1 = a2;
  a1[1] = (int *)FT_Stream_Pos((int)a2);
  UShort = FT_Stream_ReadUShort(a2, v18, v5);
  v8 = UShort;
  if ( v18[0] == 0 && UShort != 0 )
  {
    Char = FT_Stream_ReadChar(a2, v18, v7);
    if ( v18[0] == 0 )
    {
      if ( (unsigned int)Char - 1 > 3 )
      {
LABEL_8:
        v18[0] = 8;
        goto LABEL_13;
      }
      a1[2] = (int *)v8;
      v10 = (v8 + 1) * Char;
      v11 = a1[1];
      *((_BYTE *)a1 + 12) = Char;
      a1[4] = (int *)((char *)v11 + v10 + 3);
      v18[0] = FT_Stream_Skip(a2, v10 - Char);
      if ( v18[0] == 0 )
      {
        v12 = sub_224B28((int)a1, v18);
        if ( v18[0] == 0 )
        {
          if ( v12 != 0 )
          {
            v13 = v12 - 1;
            a1[5] = (int *)(v12 - 1);
            if ( a3 != 0 )
              Frame = FT_Stream_ExtractFrame(a2, v13, a1 + 7);
            else
              Frame = FT_Stream_Skip(a2, v13);
            v18[0] = Frame;
            goto LABEL_13;
          }
          goto LABEL_8;
        }
      }
    }
  }
LABEL_13:
  if ( v18[0] != 0 )
  {
    ft_mem_free(v17, (int)a1[6]);
    a1[6] = nullptr;
  }
  return v18[0];
}


//======================================================================
// sub_225290
// address: 0x00225290   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_225290(int a1)
{
  unsigned int v1; // r2
  _DWORD *v2; // r5
  unsigned int v3; // r3
  int result; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0

  v1 = *(_DWORD *)(a1 + 404);
  v2 = *(_DWORD **)(a1 + 412);
  v3 = a1 + 32;
  result = 161;
  if ( v1 >= v3 )
  {
    v6 = sub_224E7C(a1 + 16);
    v2[21] = FT_RoundFix(v6);
    v7 = sub_224E7C(a1 + 20);
    v2[22] = FT_RoundFix(v7);
    v8 = sub_224E7C(a1 + 24);
    v2[23] = FT_RoundFix(v8);
    v9 = sub_224E7C(a1 + 28);
    v2[24] = FT_RoundFix(v9);
    return 0;
  }
  return result;
}


//======================================================================
// sub_2252E6
// address: 0x002252E6   size: 0x50 (80 bytes)
//======================================================================
_BYTE *__fastcall sub_2252E6(int a1, unsigned int a2)
{
  int *v2; // r6
  int v3; // r4
  _BYTE *v4; // r0
  _BYTE *v5; // r4
  void *v7; // [sp+4h] [bp-10h] BYREF
  size_t v8; // [sp+8h] [bp-Ch] BYREF
  int v9; // [sp+Ch] [bp-8h] BYREF

  v2 = (int *)(a1 + 20);
  v3 = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 28);
  v9 = sub_224B5A(a1 + 20, a2, &v7, &v8);
  if ( v9 != 0 )
    return nullptr;
  v4 = ft_mem_alloc(v3, v8 + 1, &v9);
  v5 = v4;
  if ( v9 == 0 )
  {
    j_memcpy(v4, v7, v8);
    v5[v8] = 0;
  }
  sub_2250AC(v2, (int *)&v7);
  return v5;
}


//======================================================================
// sub_225336
// address: 0x00225336   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_225336(int a1, unsigned int a2)
{
  int result; // r0
  unsigned __int8 *v4; // r0
  unsigned int v5; // r4
  unsigned __int8 *v6; // r2
  unsigned __int8 *v7; // r6
  unsigned int v8; // r5

  if ( *(_BYTE *)a1 == 0 )
    return *(unsigned __int8 *)(*(_DWORD *)(a1 + 8) + a2);
  if ( *(_BYTE *)a1 != 3 )
    return 0;
  if ( a2 - *(_DWORD *)(a1 + 16) < *(_DWORD *)(a1 + 20) )
    return *(unsigned __int8 *)(a1 + 24);
  v4 = *(unsigned __int8 **)(a1 + 8);
  v5 = (*v4 << 8) | v4[1];
  if ( a2 < v5 )
    return 0;
  v6 = v4 + 2;
  v7 = &v4[*(_DWORD *)(a1 + 12)];
  while ( 1 )
  {
    result = *v6;
    v8 = (v6[1] << 8) | v6[2];
    if ( a2 < v8 )
      break;
    v6 += 3;
    if ( v6 >= v7 )
      return 0;
    v5 = v8;
  }
  *(_DWORD *)(a1 + 16) = v5;
  *(_DWORD *)(a1 + 20) = v8 - v5;
  *(_BYTE *)(a1 + 24) = result;
  return result;
}


//======================================================================
// sub_225398
// address: 0x00225398   size: 0x90 (144 bytes)
//======================================================================
__int16 *__fastcall sub_225398(__int16 *result)
{
  int v1; // r3
  int v2; // r1
  __int16 v3; // r6
  int v4; // r5
  _DWORD *v5; // r7
  __int16 v6; // r4
  int v7; // r2
  __int16 v8; // r4
  __int16 v9; // [sp+Ch] [bp-8h]

  if ( result != nullptr )
  {
    v9 = *result;
    v1 = *result;
    if ( v1 <= 1 )
      v2 = 0;
    else
      v2 = *(__int16 *)(2 * (*result + 2147483646) + *((_DWORD *)result + 3)) + 1;
    v3 = result[1];
    if ( v3 > 1 )
    {
      v4 = *((_DWORD *)result + 1);
      v5 = (_DWORD *)(v4 + 8 * v2);
      if ( *v5 == *(_DWORD *)(v4 + 8 * (v3 + 0x1FFFFFFF))
        && v5[1] == *(_DWORD *)(v4 + 8 * (v3 + 0x1FFFFFFF) + 4)
        && *(_BYTE *)(v3 + *((_DWORD *)result + 2) - 1) == 1 )
      {
        result[1] = v3 - 1;
      }
    }
    if ( v1 > 0 )
    {
      v6 = result[1];
      v7 = v6 - 1;
      v8 = v6 - 1;
      if ( v2 == v7 )
      {
        result[1] = v8;
        *result = v9 - 1;
      }
      else
      {
        *(_WORD *)(2 * (v1 + 0x7FFFFFFF) + *((_DWORD *)result + 3)) = v8;
      }
    }
  }
  return result;
}


//======================================================================
// sub_225434
// address: 0x00225434   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_225434(int a1)
{
  int (**v1)(void); // r4
  int result; // r0

  v1 = *(int (***)(void))(*(_DWORD *)(a1 + 696) + 2952);
  result = FT_Get_Module(*(_DWORD *)(*(_DWORD *)(a1 + 96) + 4), "pshinter");
  if ( result != 0 )
  {
    if ( v1 != nullptr )
    {
      if ( *v1 != nullptr )
        return (*v1)();
      else
        return 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}


//======================================================================
// sub_225470
// address: 0x00225470   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_225470(unsigned int *a1, int a2)
{
  int v3; // r5
  int i; // r6
  int v5; // r7
  __int64 v6; // r0
  __int64 v7; // r0
  int v8; // r2
  int v10; // [sp+Ch] [bp-18h]
  int v11; // [sp+14h] [bp-10h]
  int v12; // [sp+18h] [bp-Ch]
  _DWORD *v13; // [sp+1Ch] [bp-8h]

  a1[11] = a2;
  FT_Select_Metrics(*a1, a2);
  v3 = sub_225434(*a1);
  if ( v3 != 0 )
  {
    v10 = *(_DWORD *)(*a1 + 696);
    v13 = (_DWORD *)a1[10];
    v12 = *(_DWORD *)(v10 + 1392);
    (*(void (__fastcall **)(_DWORD, unsigned int, unsigned int))(v3 + 4))(*v13, a1[4], a1[5]);
    for ( i = *(_DWORD *)(v10 + 1896); i != 0; (*(void (__fastcall **)(_DWORD, int, int))(v3 + 4))(v13[i + 1], v11, v8) )
    {
      --i;
      v5 = *(_DWORD *)(*(_DWORD *)(v10 + 4 * i + 1900) + 68);
      if ( v12 == v5 )
      {
        v8 = a1[5];
        v11 = a1[4];
      }
      else
      {
        HIDWORD(v6) = v12;
        LODWORD(v6) = a1[4];
        v11 = FT_MulDiv(v6, v5);
        HIDWORD(v7) = v12;
        LODWORD(v7) = a1[5];
        v8 = FT_MulDiv(v7, v5);
      }
    }
  }
  return 0;
}


//======================================================================
// sub_22550C
// address: 0x0022550C   size: 0x3A (58 bytes)
//======================================================================
int *__fastcall sub_22550C(int *result)
{
  _DWORD *v1; // r5
  int v2; // r4
  int *v3; // r6
  int i; // r4

  v1 = (_DWORD *)result[10];
  v2 = *(_DWORD *)(*result + 696);
  if ( v1 != nullptr )
  {
    result = (int *)sub_225434(*result);
    v3 = result;
    if ( result != nullptr )
    {
      result = (int *)((int (__fastcall *)(_DWORD))result[2])(*v1);
      for ( i = *(_DWORD *)(v2 + 1896); i != 0; result = (int *)((int (__fastcall *)(_DWORD))v3[2])(v1[i + 1]) )
        --i;
    }
  }
  return result;
}


//======================================================================
// sub_225548
// address: 0x00225548   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_225548(unsigned int *a1, _DWORD *a2)
{
  unsigned int v3; // r0
  int v6; // r5
  int i; // r6
  int v8; // r7
  __int64 v9; // r0
  __int64 v10; // r0
  int v11; // r2
  int v12; // [sp+Ch] [bp-20h]
  int v13; // [sp+14h] [bp-18h]
  int v14; // [sp+18h] [bp-14h]
  _DWORD *v15; // [sp+1Ch] [bp-10h]
  int v16; // [sp+24h] [bp-8h]

  v3 = *a1;
  if ( (*(_DWORD *)(v3 + 8) & 2) != 0 )
  {
    if ( (*(int (**)(void))(*(_DWORD *)(v3 + 532) + 148))() == 0 )
      return sub_225470(a1, v16);
    a1[11] = -1;
  }
  FT_Request_Metrics(*a1, a2);
  v6 = sub_225434(*a1);
  if ( v6 != 0 )
  {
    v12 = *(_DWORD *)(*a1 + 696);
    v15 = (_DWORD *)a1[10];
    v14 = *(_DWORD *)(v12 + 1392);
    (*(void (__fastcall **)(_DWORD, unsigned int, unsigned int))(v6 + 4))(*v15, a1[4], a1[5]);
    for ( i = *(_DWORD *)(v12 + 1896); i != 0; (*(void (__fastcall **)(_DWORD, int, int))(v6 + 4))(v15[i + 1], v13, v11) )
    {
      --i;
      v8 = *(_DWORD *)(*(_DWORD *)(v12 + 4 * i + 1900) + 68);
      if ( v14 == v8 )
      {
        v11 = a1[5];
        v13 = a1[4];
      }
      else
      {
        HIDWORD(v9) = v14;
        LODWORD(v9) = a1[4];
        v13 = FT_MulDiv(v9, v8);
        HIDWORD(v10) = v14;
        LODWORD(v10) = a1[5];
        v11 = FT_MulDiv(v10, v8);
      }
    }
  }
  return 0;
}


//======================================================================
// sub_225618
// address: 0x00225618   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall sub_225618(int *a1)
{
  int v2; // r0
  int (__fastcall **v3)(_DWORD, char *, char *); // r7
  char *v4; // r6
  int v5; // r5
  char *v7; // [sp+8h] [bp-D4h]
  int v8; // [sp+Ch] [bp-D0h]
  int v9; // [sp+10h] [bp-CCh] BYREF
  char v10[200]; // [sp+14h] [bp-C8h] BYREF

  v2 = *a1;
  v9 = 0;
  v3 = (int (__fastcall **)(_DWORD, char *, char *))sub_225434(v2);
  if ( v3 == nullptr )
  {
LABEL_9:
    a1[11] = -1;
    return v9;
  }
  v8 = *(_DWORD *)(*a1 + 696);
  v4 = (char *)ft_mem_alloc(*(_DWORD *)(*a1 + 100), 1028, &v9);
  if ( v9 == 0 )
  {
    sub_224A00(v8 + 1324, v10);
    v9 = (*v3)(*(_DWORD *)(*a1 + 100), v10, v4);
    if ( v9 == 0 )
    {
      v5 = *(_DWORD *)(v8 + 1896);
      v7 = &v4[4 * v5];
      while ( v5 != 0 )
      {
        --v5;
        sub_224A00(*(_DWORD *)(v8 + 4 * v5 + 1900), v10);
        v9 = (*v3)(*(_DWORD *)(*a1 + 100), v10, v7);
        v7 -= 4;
        if ( v9 != 0 )
          return v9;
      }
      a1[10] = (int)v4;
      goto LABEL_9;
    }
  }
  return v9;
}


//======================================================================
// sub_2256C8
// address: 0x002256C8   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_2256C8(int *a1, int a2)
{
  int v2; // r2

  v2 = 0;
  if ( (unsigned int)(a2 + *(__int16 *)(*a1 + 22) + *(__int16 *)(*a1 + 58)) > *(_DWORD *)(*a1 + 4) )
    return FT_GlyphLoader_CheckPoints(*a1, a2, 0);
  return v2;
}


//======================================================================
// sub_2256EC
// address: 0x002256EC   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_2256EC(int *a1, int a2)
{
  int v2; // r3

  v2 = 0;
  if ( a2 != 0 )
    return sub_2256C8(a1, a2);
  return v2;
}


//======================================================================
// sub_225700
// address: 0x00225700   size: 0x38 (56 bytes)
//======================================================================
const char *__fastcall sub_225700(int a1, char *a2)
{
  const char *result; // r0
  int v5; // r0
  int Module; // r0

  result = ft_service_list_lookup((const char *)&off_4529B0, a2);
  if ( result == nullptr && a1 != 0 )
  {
    v5 = *(_DWORD *)(a1 + 4);
    if ( v5 != 0 && (Module = FT_Get_Module(v5, "sfnt")) != 0 )
      return (const char *)(*(int (__fastcall **)(int, char *))(*(_DWORD *)Module + 32))(Module, a2);
    else
      return nullptr;
  }
  return result;
}


//======================================================================
// sub_225740
// address: 0x00225740   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_225740(_DWORD *a1, unsigned int a2)
{
  unsigned int v2; // r1
  int result; // r0

  if ( a2 == 0xFFFF )
    return 0;
  if ( a2 > 0x186 )
  {
    v2 = a2 - 391;
    if ( v2 < a1[328] )
      return *(_DWORD *)(4 * v2 + a1[329]);
    return 0;
  }
  result = a1[739];
  if ( result != 0 )
    return (*(int (__fastcall **)(unsigned int))(result + 20))(a2);
  return result;
}


//======================================================================
// sub_225788
// address: 0x00225788   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_225788(int a1, _DWORD *a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v4; // r4
  int result; // r0
  unsigned int v8; // r1

  v4 = *(_DWORD **)(a1 + 696);
  if ( v4 != nullptr )
  {
    result = 6;
    v8 = v4[364];
    if ( v8 == 0xFFFF )
      return result;
    if ( a2 != nullptr )
    {
      if ( v4[741] == 0 )
        v4[741] = sub_225740(v4, v8);
      *a2 = v4[741];
    }
    if ( a3 != nullptr )
    {
      if ( v4[742] == 0 )
        v4[742] = sub_225740(v4, v4[365]);
      *a3 = v4[742];
    }
    if ( a4 != nullptr )
      *a4 = v4[366];
  }
  return 0;
}


//======================================================================
// sub_225808
// address: 0x00225808   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_225808(int a1, int a2)
{
  return sub_225740(*(_DWORD **)(a1 + 696), *(unsigned __int16 *)(2 * a2 + *(_DWORD *)(*(_DWORD *)(a1 + 696) + 1160)));
}


//======================================================================
// sub_225824
// address: 0x00225824   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_225824(int a1, _DWORD *a2)
{
  int v2; // r4
  _DWORD *v3; // r5
  int *v4; // r2
  int v5; // r0
  int v6; // r1
  int v7; // r4
  int v8; // r0
  int v9; // r1
  int v10; // r4
  int v11; // r4
  int v14; // [sp+Ch] [bp-8h] BYREF

  v2 = *(_DWORD *)(a1 + 696);
  v14 = 0;
  if ( v2 != 0 )
  {
    if ( *(_DWORD *)(v2 + 2960) != 0 )
    {
LABEL_5:
      v4 = *(int **)(v2 + 2960);
      v5 = *v4;
      v6 = v4[1];
      v7 = v4[2];
      v4 += 3;
      *a2 = v5;
      a2[1] = v6;
      a2[2] = v7;
      v8 = *v4;
      v9 = v4[1];
      v10 = v4[2];
      v4 += 3;
      a2[3] = v8;
      a2[4] = v9;
      a2[5] = v10;
      v11 = v4[1];
      a2[6] = *v4;
      a2[7] = v11;
      return v14;
    }
    v3 = ft_mem_alloc(*(_DWORD *)(a1 + 100), 32, &v14);
    if ( v14 == 0 )
    {
      *v3 = sub_225740((_DWORD *)v2, *(_DWORD *)(v2 + 1324));
      v3[1] = sub_225740((_DWORD *)v2, *(_DWORD *)(v2 + 1328));
      v3[2] = sub_225740((_DWORD *)v2, *(_DWORD *)(v2 + 1336));
      v3[3] = sub_225740((_DWORD *)v2, *(_DWORD *)(v2 + 1340));
      v3[4] = sub_225740((_DWORD *)v2, *(_DWORD *)(v2 + 1344));
      v3[5] = *(_DWORD *)(v2 + 1352);
      *((_BYTE *)v3 + 24) = *(_BYTE *)(v2 + 1348);
      *((_WORD *)v3 + 13) = *(_DWORD *)(v2 + 1356);
      *((_WORD *)v3 + 14) = *(_DWORD *)(v2 + 1360);
      *(_DWORD *)(v2 + 2960) = v3;
      goto LABEL_5;
    }
  }
  return v14;
}


//======================================================================
// sub_2258B8
// address: 0x002258B8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_2258B8(int a1, int a2, _BYTE *a3, int a4)
{
  _DWORD *v5; // r0
  int v7; // r4
  _BYTE *v8; // r1

  v5 = *(_DWORD **)(a1 + 696);
  v7 = 11;
  if ( v5[739] != 0 )
  {
    v8 = (_BYTE *)sub_225740(v5, *(unsigned __int16 *)(2 * a2 + v5[290]));
    if ( v8 != nullptr )
      ft_mem_strcpyn(a3, v8, a4);
    return 0;
  }
  return v7;
}


//======================================================================
// sub_2258F8
// address: 0x002258F8   size: 0x16C (364 bytes)
//======================================================================
int __fastcall sub_2258F8(int result)
{
  int v1; // r6
  int v2; // r3
  int v3; // r4
  unsigned int v4; // r7
  int v5; // r5
  int v6; // r3
  int v7; // r1
  int v8; // [sp+Ch] [bp-10h]
  int v9; // [sp+10h] [bp-Ch]
  int v10; // [sp+14h] [bp-8h]

  v1 = result;
  if ( result != 0 )
  {
    v2 = *(_DWORD *)(result + 532);
    v10 = *(_DWORD *)(result + 100);
    if ( v2 != 0 )
      result = (*(int (**)(void))(v2 + 12))();
    v3 = *(_DWORD *)(v1 + 696);
    if ( v3 != 0 )
    {
      v9 = *(_DWORD *)(v3 + 4);
      sub_2250BC((int *)(v3 + 84));
      sub_2250BC((int *)(v3 + 1208));
      sub_2250BC((int *)(v3 + 20));
      sub_2250BC((int *)(v3 + 1176));
      v4 = 0;
      if ( *(_DWORD *)(v3 + 1896) != 0 )
      {
        while ( v4 < *(_DWORD *)(v3 + 1896) )
        {
          v5 = *(_DWORD *)(v3 + 4 * v4 + 1900);
          if ( v5 != 0 )
          {
            sub_2250BC((int *)(v5 + 536));
            ft_mem_free(v9, *(_DWORD *)(v5 + 568));
            *(_DWORD *)(v5 + 568) = 0;
          }
          ++v4;
        }
        ft_mem_free(v9, *(_DWORD *)(v3 + 1900));
        *(_DWORD *)(v3 + 1900) = 0;
      }
      v6 = *(_DWORD *)v3;
      *(_DWORD *)(v3 + 116) = 0;
      *(_DWORD *)(v3 + 120) = 0;
      *(_DWORD *)(v3 + 124) = 0;
      v8 = *(_DWORD *)(v6 + 28);
      ft_mem_free(v8, *(_DWORD *)(v3 + 1164));
      v7 = *(_DWORD *)(v3 + 1160);
      *(_DWORD *)(v3 + 1164) = 0;
      *(_DWORD *)(v3 + 1168) = 0;
      ft_mem_free(v8, v7);
      *(_DWORD *)(v3 + 1160) = 0;
      *(_DWORD *)(v3 + 1152) = 0;
      *(_DWORD *)(v3 + 1156) = 0;
      sub_2250BC((int *)(v3 + 1860));
      ft_mem_free(v9, *(_DWORD *)(v3 + 1892));
      *(_DWORD *)(v3 + 1892) = 0;
      if ( *(_DWORD *)(v3 + 2932) != 0 )
        FT_Stream_ReleaseFrame(*(_DWORD *)v3, (int *)(v3 + 2932));
      *(_DWORD *)(v3 + 2936) = 0;
      *(_BYTE *)(v3 + 2924) = 0;
      *(_DWORD *)(v3 + 2928) = 0;
      ft_mem_free(v9, *(_DWORD *)(v3 + 2960));
      *(_DWORD *)(v3 + 2960) = 0;
      ft_mem_free(v9, *(_DWORD *)(v3 + 1304));
      *(_DWORD *)(v3 + 1304) = 0;
      ft_mem_free(v9, *(_DWORD *)(v3 + 1308));
      *(_DWORD *)(v3 + 1308) = 0;
      ft_mem_free(v9, *(_DWORD *)(v3 + 1316));
      *(_DWORD *)(v3 + 1316) = 0;
      ft_mem_free(v9, *(_DWORD *)(v3 + 1320));
      *(_DWORD *)(v3 + 1320) = 0;
      result = ft_mem_free(v10, *(_DWORD *)(v1 + 696));
      *(_DWORD *)(v1 + 696) = 0;
    }
  }
  return result;
}


//======================================================================
// sub_225A80
// address: 0x00225A80   size: 0x8A (138 bytes)
//======================================================================
int __fastcall sub_225A80(int a1, int a2, int a3)
{
  int v4; // r5
  __int16 *v6; // r4
  __int16 v7; // r3
  int v8; // r0
  int v9; // r3
  int v11; // [sp+0h] [bp-Ch]

  v4 = 0;
  if ( *(_BYTE *)(a1 + 64) == 0 )
  {
    *(_BYTE *)(a1 + 64) = 1;
    v6 = *(__int16 **)(a1 + 20);
    if ( *(_BYTE *)(a1 + 65) != 0 )
    {
      v8 = *(_DWORD *)(a1 + 12);
      v11 = *(__int16 *)(v8 + 20);
      if ( (unsigned int)(v11 + *(__int16 *)(v8 + 56) + 1) > *(_DWORD *)(v8 + 8) )
      {
        v4 = FT_GlyphLoader_CheckPoints(v8, 0, 1);
        if ( v4 != 0 )
          return v4;
      }
      v9 = *v6;
      if ( v9 > 0 )
        *(_WORD *)(2 * (v9 + 0x7FFFFFFF) + *((_DWORD *)v6 + 3)) = v6[1] - 1;
      v7 = *v6 + 1;
    }
    else
    {
      v7 = *v6 + 1;
    }
    *v6 = v7;
    v4 = sub_2256C8((int *)(a1 + 12), 1);
    if ( v4 == 0 )
      sub_224898(a1, a2, a3, 1);
  }
  return v4;
}


//======================================================================
// sub_225B10
// address: 0x00225B10   size: 0x2F0 (752 bytes)
//======================================================================
int __fastcall sub_225B10(int a1, unsigned __int8 *a2, int a3)
{
  int v3; // r3
  unsigned __int8 *v4; // r6
  int v5; // r0
  int v6; // r5
  unsigned __int8 *v7; // r2
  unsigned int v8; // r0
  int v10; // r0
  char v11; // r3
  int *v12; // r2
  int v14; // [sp+68h] [bp-34h]
  unsigned __int8 *v15; // [sp+70h] [bp-2Ch]
  unsigned int v16; // [sp+7Ch] [bp-20h]
  int v17; // [sp+84h] [bp-18h]
  unsigned __int8 *v18; // [sp+88h] [bp-14h] BYREF
  _DWORD v19[2]; // [sp+8Ch] [bp-10h] BYREF
  _DWORD v20[2]; // [sp+94h] [bp-8h] BYREF

  v19[0] = a1;
  v17 = *(_DWORD *)(*(_DWORD *)(a1 + 76) + 1368);
  *(_DWORD *)(a1 + 756) = 0;
  *(_BYTE *)(a1 + 752) = 1;
  v18 = a2;
  v3 = (unsigned __int16)((unsigned int)v19
                        ^ (unsigned int)v20
                        ^ (unsigned int)&v18
                        ^ ((int)((unsigned int)v19 ^ (unsigned int)v20 ^ (unsigned int)&v18) >> 20)
                        ^ ((int)((unsigned int)v19 ^ (unsigned int)v20 ^ (unsigned int)&v18) >> 10));
  if ( ((unsigned __int16)((unsigned int)v19 ^ (unsigned int)v20 ^ (unsigned int)&v18)
      ^ (unsigned __int16)(((int)((unsigned int)v19 ^ (unsigned int)v20 ^ (unsigned int)&v18) >> 20)
                         ^ ((int)((unsigned int)v19 ^ (unsigned int)v20 ^ (unsigned int)&v18) >> 10))) == 0 )
    v3 = 29572;
  v20[0] = v3;
  *(_DWORD *)(a1 + 276) = a1 + 80;
  v14 = a1 + 80;
  v4 = v18;
  *(_DWORD *)(a1 + 676) = a1 + 280;
  v5 = 0;
  v6 = *(_DWORD *)(a1 + 68);
  *(_BYTE *)(a1 + 64) = 0;
  v7 = &v4[a3];
  *(_DWORD *)(a1 + 280) = v4;
  *(_DWORD *)(a1 + 284) = v7;
  *(_DWORD *)(a1 + 288) = v4;
  v16 = (unsigned int)v7;
  if ( v6 != 0 )
    v5 = (*(int (__fastcall **)(_DWORD))(v6 + 4))(*(_DWORD *)v6);
  while ( (unsigned int)v4 < v16 )
  {
    v8 = *v4;
    v15 = v4 + 1;
    if ( v8 <= 0x1F )
    {
      if ( v8 != 28 )
      {
        v5 = v8 - 1;
        switch ( v5 )
        {
          case 0:
LABEL_29:
            JUMPOUT(0x225E60);
          case 2:
LABEL_30:
            JUMPOUT(0x225E64);
          case 3:
          case 4:
          case 5:
          case 6:
          case 7:
          case 8:
          case 9:
          case 10:
          case 12:
          case 13:
          case 15:
          case 17:
          case 18:
          case 19:
          case 20:
          case 21:
          case 22:
          case 23:
          case 24:
          case 25:
          case 26:
          case 28:
          case 29:
          case 30:
LABEL_32:
            JUMPOUT(0x225E66);
          case 11:
            if ( (unsigned int)v15 < v16 )
            {
              v5 = v4[1];
              v15 = v4 + 2;
              switch ( v4[1] )
              {
                case 0u:
                case 3u:
                case 4u:
                case 5u:
                case 6u:
                case 7u:
                case 8u:
                case 9u:
                case 0xAu:
                case 0xBu:
                case 0xCu:
                case 0xDu:
                case 0xEu:
                case 0xFu:
                case 0x10u:
                case 0x11u:
                case 0x12u:
                case 0x14u:
                case 0x15u:
                case 0x16u:
                case 0x17u:
                case 0x18u:
                case 0x1Au:
                case 0x1Bu:
                case 0x1Cu:
                case 0x1Du:
                case 0x1Eu:
                case 0x21u:
                case 0x22u:
                case 0x23u:
                case 0x24u:
                case 0x25u:
                  goto LABEL_32;
                case 1u:
                  goto LABEL_30;
                case 2u:
                  goto LABEL_29;
                default:
                  goto LABEL_13;
              }
            }
            return sub_225E22();
          default:
            goto LABEL_13;
        }
      }
      if ( v16 <= (unsigned int)(v4 + 2) )
        return sub_225E22();
      v10 = (__int16)_byteswap_ushort(*(_WORD *)(v4 + 1));
      v15 = v4 + 3;
      goto LABEL_10;
    }
    if ( v8 <= 0xF6 )
    {
      v10 = v8 - 139;
LABEL_10:
      v11 = 16;
      goto LABEL_11;
    }
    if ( v8 <= 0xFA )
    {
      if ( (unsigned int)v15 >= v16 )
        return sub_225E22();
      v15 = v4 + 2;
      v10 = ((v8 - 247) << 8) + v4[1] + 108;
      goto LABEL_10;
    }
    if ( v8 != 255 )
    {
      if ( (unsigned int)v15 >= v16 )
        return sub_225E22();
      v15 = v4 + 2;
      v10 = ((251 - v8) << 8) - v4[1] - 108;
      goto LABEL_10;
    }
    if ( v16 <= (unsigned int)(v4 + 4) )
      return sub_225E22();
    v15 = v4 + 5;
    v10 = _byteswap_ulong(*(_DWORD *)(v4 + 1));
    v11 = 16 * (v17 != 2);
LABEL_11:
    v12 = *(int **)(v19[0] + 276);
    if ( (int)v12 - v14 > 191 )
      JUMPOUT(0x225E5A);
    v5 = v10 << v11;
    *(_DWORD *)(v19[0] + 276) = v12 + 1;
    *v12 = v5;
LABEL_13:
    v4 = v15;
  }
  return sub_225E38(v5);
}


//======================================================================
// sub_225E22
// address: 0x00225E22   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_225E22(
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
        int a29,
        int a30)
{
  int v30; // r0

  sub_226AF0(3);
  v30 = sub_225A80(a30, a27, a29);
  if ( v30 == 0 )
    JUMPOUT(0x22608C);
  return sub_225E38(v30);
}


//======================================================================
// sub_225E38
// address: 0x00225E38   size: 0xB46 (2886 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   00225E38  MOVS    R0, #0
//   00225E3A  BL      sub_226AF0
//   00225E3E  CMP     R5, #0; jumptable 00225EF2 cases 5,6
//   00225E40  BGE     loc_225E46
//   00225E42  BL      sub_226AEE
//   00225E46  BEQ     loc_225E4A; jumptable 00225EF2 cases 25,35
//   00225E48  B       loc_2260DE
//   00225E4A  LDR     R3, [SP,#arg_8C]; jumptable 00225EF2 cases 25,35
//   00225E4C  LDR     R5, [SP,#arg_68]
//   00225E4E  ADDS    R3, #0xFC
//   00225E50  STR     R4, [R3,#0x18]
//   00225E52  SUBS    R4, R4, R5
//   00225E54  CMP     R4, #0xBF
//   00225E56  BGT     loc_225E5A
//   00225E58  B       def_225C78; jumptable 00225C78 default case, cases 2,15,17,28
//   00225E5A  MOVS    R0, #0x82
//   00225E5C  BL      sub_226AF0
//   00225E60  MOVS    R6, #0x13; jumptable 00225C78 case 1
//   00225E62  B       loc_225E66
//   00225E64  MOVS    R6, #0x14; jumptable 00225C78 case 3
//   00225E66  LDR     R2, =(dword_434EFC - 0x225E6C)
//   00225E68  ADD     R2, PC; dword_434EFC
//   00225E6A  ADDS    R2, #(unk_434F24 - 0x434EFC)
//   00225E6C  LDRB    R5, [R2,R6]
//   00225E6E  LSRS    R2, R5, #7
//   00225E70  BEQ     loc_225ED6
//   00225E72  CMP     R3, #0
//   00225E74  BLE     loc_225ECE
//   00225E76  MOVS    R0, #0x2F0
//   00225E7A  LDRB    R2, [R7,R0]
//   00225E7C  CMP     R2, #0
//   00225E7E  BEQ     loc_225ECE
//   00225E80  SUBS    R2, R6, #1
//   00225E82  CMP     R2, #0x17
//   00225E84  BHI     loc_225ECE
//   00225E86  MOVS    R1, #1
//   00225E88  LDR     R0, =0xFC0001
//   00225E8A  MOVS    R5, R1
//   00225E8C  LSLS    R5, R2
//   00225E8E  TST     R5, R0
//   00225E90  BNE     loc_225E9E
//   00225E92  LSLS    R0, R5, #0xE
//   00225E94  BMI     loc_225EA4
//   00225E96  MOVS    R1, #6
//   00225E98  TST     R5, R1
//   00225E9A  BEQ     loc_225ECE
//   00225E9C  MOVS    R1, #2
//   00225E9E  ANDS    R1, R3
//   00225EA0  BNE     loc_225EAE
//   00225EA2  B       loc_225ECE
//   00225EA4  MOVS    R2, #4
//   00225EA6  MOVS    R1, R3
//   00225EA8  BICS    R1, R2
//   00225EAA  CMP     R1, #1
//   00225EAC  BNE     loc_225ECE
//   00225EAE  LDR     R2, [SP,#arg_64]
//   00225EB0  MOVS    R1, #0x2EC
//   00225EB4  LDR     R2, [R2,#0x50]
//   00225EB6  LDR     R1, [R7,R1]
//   00225EB8  STR     R2, [SP,#arg_48]
//   00225EBA  ASRS    R2, R2, #0x10
//   00225EBC  ADDS    R1, R1, R2
//   00225EBE  MOVS    R2, #0x2E8
//   00225EC2  STR     R1, [R7,R2]
//   00225EC4  LDR     R2, =0x2F1
//   00225EC6  LDRB    R2, [R7,R2]
//   00225EC8  CMP     R2, #0
//   00225ECA  BNE     sub_225E38
//   00225ECC  SUBS    R3, #1
//   00225ECE  MOVS    R0, #0xBC
//   00225ED0  MOVS    R5, #0
//   00225ED2  LSLS    R0, R0, #2
//   00225ED4  STRB    R5, [R7,R0]
//   00225ED6  MOVS    R2, #0xF
//   00225ED8  ANDS    R5, R2
//   00225EDA  CMP     R3, R5
//   00225EDC  BGE     loc_225EE2
//   00225EDE  BL      sub_226AEE
//   00225EE2  LSLS    R2, R5, #2
//   00225EE4  SUBS    R0, R6, #1; switch 58 cases
//   00225EE6  SUBS    R4, R4, R2
//   00225EE8  SUBS    R5, R3, R5
//   00225EEA  CMP     R0, #0x39 ; '9'
//   00225EEC  BLS     loc_225EF2
//   00225EEE  BL      loc_226AEA; jumptable 00225EF2 default case
//   00225EF2  BL      __gnu_thumb1_case_shi; switch jump
//   00225EF6  DCW 0x94; jump table for switch statement
//   00225EF8  DCW 0xBA
//   00225EFA  DCW 0xAA
//   00225EFC  DCW 0xFF99
//   00225EFE  DCW 0xFFA4
//   00225F00  DCW 0xFFA4
//   00225F02  DCW 0x131
//   00225F04  DCW 0x1C3
//   00225F06  DCW 0x20F
//   00225F08  DCW 0x2CF
//   00225F0A  DCW 0x27B
//   00225F0C  DCW 0x20F
//   00225F0E  DCW 0x177
//   00225F10  DCW 0x3FE
//   00225F12  DCW 0x36E
//   00225F14  DCW 0x32D
//   00225F16  DCW 0x3B0
//   00225F18  DCW 0x43D
//   00225F1A  DCW 0x3A
//   00225F1C  DCW 0x3A
//   00225F1E  DCW 0x3A
//   00225F20  DCW 0x3A
//   00225F22  DCW 0xFF87
//   00225F24  DCW 0xFF87
//   00225F26  DCW 0xFFAA
//   00225F28  DCW 0x484
//   00225F2A  DCW 0x48A
//   00225F2C  DCW 0x48E
//   00225F2E  DCW 0x492
//   00225F30  DCW 0x497
//   00225F32  DCW 0x49A
//   00225F34  DCW 0x4AD
//   00225F36  DCW 0x4B4
//   00225F38  DCW 0x5FA
//   00225F3A  DCW 0xFFAA
//   00225F3C  DCW 0x4C7
//   00225F3E  DCW 0x4CC
//   00225F40  DCW 0x4D9
//   00225F42  DCW 0x518
//   00225F44  DCW 0x51D
//   00225F46  DCW 0x529
//   00225F48  DCW 0x5FA
//   00225F4A  DCW 0x5FA
//   00225F4C  DCW 0x569
//   00225F4E  DCW 0x56E
//   00225F50  DCW 0x5FA
//   00225F52  DCW 0x578
//   00225F54  DCW 0x57F
//   00225F56  DCW 0x588
//   00225F58  DCW 0x5A7
//   00225F5A  DCW 0x5E1
//   00225F5C  DCW 0x532
//   00225F5E  DCW 0x5F7
//   00225F60  DCW 0x55C
//   00225F62  DCW 0x585
//   00225F64  DCW 0x42A
//   00225F66  DCW 0x546
//   00225F68  DCW 0x553
//   00225F6A  LDR     R7, [SP,#arg_78]; jumptable 00225EF2 cases 19-22
//   00225F6C  CMP     R7, #0
//   00225F6E  BEQ     loc_225F96
//   00225F70  LDR     R1, [SP,#arg_78]
//   00225F72  LDR     R7, [R7,#0xC]
//   00225F74  LDR     R0, [R1]
//   00225F76  CMP     R6, #0x13
//   00225F78  BEQ     loc_225F82
//   00225F7A  SUBS    R6, #0x15
//   00225F7C  NEGS    R1, R6
//   00225F7E  ADCS    R1, R6
//   00225F80  B       loc_225F84
//   00225F82  MOVS    R1, #1
//   00225F84  MOVS    R3, #1
//   00225F86  MOVS    R6, R5
//   00225F88  LSRS    R2, R5, #0x1F
//   00225F8A  BICS    R6, R3
//   00225F8C  ADDS    R2, R2, R5
//   00225F8E  LSLS    R3, R6, #2
//   00225F90  ASRS    R2, R2, #1
//   00225F92  SUBS    R3, R4, R3
//   00225F94  BLX     R7
//   00225F96  LDR     R3, [SP,#arg_8C]
//   00225F98  MOVS    R7, #0x2F4
//   00225F9C  LDR     R7, [R3,R7]
//   00225F9E  LSRS    R4, R5, #0x1F
//   00225FA0  ADDS    R5, R4, R5
//   00225FA2  ASRS    R5, R5, #1
//   00225FA4  MOVS    R0, #0xBD
//   00225FA6  ADDS    R5, R7, R5
//   00225FA8  LSLS    R0, R0, #2
//   00225FAA  STR     R5, [R3,R0]
//   00225FAC  BL      loc_226AE4; jumptable 00225EF2 case 53
//   00225FB0  LDR     R7, [SP,#arg_78]
//   00225FB2  CMP     R7, #0
//   00225FB4  BEQ     loc_225FCC
//   00225FB6  MOVS    R3, #1
//   00225FB8  MOVS    R1, R5
//   00225FBA  BICS    R1, R3
//   00225FBC  LDR     R0, [R7]
//   00225FBE  LSLS    R3, R1, #2
//   00225FC0  SUBS    R3, R4, R3
//   00225FC2  ASRS    R2, R5, #1
//   00225FC4  LDR     R4, [R7,#0xC]
//   00225FC6  MOVS    R1, #0
//   00225FC8  STR     R0, [SP,#arg_40]
//   00225FCA  BLX     R4
//   00225FCC  LDR     R3, [SP,#arg_8C]
//   00225FCE  MOVS    R7, #0x2F4
//   00225FD2  LDR     R7, [R3,R7]
//   00225FD4  ASRS    R5, R5, #1
//   00225FD6  MOVS    R0, #0xBD
//   00225FD8  ADDS    R5, R7, R5
//   00225FDA  LSLS    R0, R0, #2
//   00225FDC  STR     R5, [R3,R0]
//   00225FDE  B       loc_225E0A

//======================================================================
// sub_22697E
// address: 0x0022697E   size: 0x16C (364 bytes)
//======================================================================
void sub_22697E()
{
  JUMPOUT(0x225E4A);
}


//======================================================================
// sub_226AEE
// address: 0x00226AEE   size: 0x2 (2 bytes)
//======================================================================
int sub_226AEE()
{
  return sub_226AF0(129);
}


//======================================================================
// sub_226AF0
// address: 0x00226AF0   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_226AF0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_226AFC
// address: 0x00226AFC   size: 0x1AC (428 bytes)
//======================================================================
int __fastcall sub_226AFC(int a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  int v7; // r0
  int v8; // r6
  int v9; // r7
  int v10; // r0
  int v11; // r7
  int *v12; // r5
  int v13; // r3
  int v14; // r0
  int v15; // r5
  int v16; // r0
  int v17; // r0
  int v20; // [sp+4h] [bp-38h]
  signed int v21; // [sp+8h] [bp-34h]
  int v22; // [sp+Ch] [bp-30h]
  int v23; // [sp+10h] [bp-2Ch]
  int v24; // [sp+10h] [bp-2Ch]
  int v25; // [sp+14h] [bp-28h]
  int v26; // [sp+14h] [bp-28h]
  unsigned int v27; // [sp+18h] [bp-24h]
  int v29; // [sp+1Ch] [bp-20h]
  int v30; // [sp+20h] [bp-1Ch]
  int v31; // [sp+24h] [bp-18h]
  int v32; // [sp+28h] [bp-14h]
  unsigned __int8 *v34; // [sp+30h] [bp-Ch] BYREF
  int v35[2]; // [sp+34h] [bp-8h] BYREF

  v7 = *(_DWORD *)(a1 + 4);
  v22 = v7;
  v8 = 160;
  if ( *(_BYTE *)(a1 + 924) == 0 )
  {
    v9 = *(_DWORD *)(v7 + 696);
    v23 = *(_DWORD *)(a1 + 32);
    v25 = *(_DWORD *)(a1 + 36);
    v21 = sub_2248C8(v9, a5);
    v10 = sub_2248C8(v9, a6);
    v27 = v10;
    if ( v21 >= 0 && v10 >= 0 )
    {
      v24 = a3 + v23;
      v26 = a4 + v25;
      if ( *(_BYTE *)(a1 + 66) != 0 )
      {
        v11 = *(_DWORD *)(a1 + 8);
        v12 = **(int ***)(v11 + 156);
        v8 = FT_GlyphLoader_CheckSubGlyphs(v12, 2);
        if ( v8 != 0 )
          return v8;
        v13 = v12[22];
        *(_DWORD *)(v13 + 8) = 0;
        *(_DWORD *)(v13 + 12) = 0;
        *(_DWORD *)v13 = v21;
        *(_WORD *)(v13 + 4) = 514;
        *(_DWORD *)(v13 + 40) = v24 >> 16;
        *(_DWORD *)(v13 + 32) = v27;
        *(_WORD *)(v13 + 36) = 2;
        *(_DWORD *)(v13 + 44) = v26 >> 16;
        *(_DWORD *)(v11 + 128) = 2;
        *(_DWORD *)(v11 + 132) = v12[13];
        *(_DWORD *)(v11 + 72) = 1668246896;
        v12[21] = 2;
      }
      FT_GlyphLoader_Prepare(*(_DWORD *)(a1 + 12));
      if ( sub_224B5A(*(_DWORD *)(v22 + 696) + 1176, v21, &v34, v35) != 0
        || (*(_BYTE *)(a1 + 924) = 1,
            v16 = sub_225B10(a1, v34, v35[0]),
            *(_BYTE *)(a1 + 924) = 0,
            v8 = v16,
            sub_2250AC((int *)(*(_DWORD *)(v22 + 696) + 1176), (int *)&v34),
            v8 == 0) )
      {
        v31 = *(_DWORD *)(a1 + 36);
        v30 = *(_DWORD *)(a1 + 40);
        v29 = *(_DWORD *)(a1 + 44);
        v32 = *(_DWORD *)(a1 + 32);
        v14 = *(_DWORD *)(a1 + 744);
        *(_DWORD *)(a1 + 24) = v24 - a2;
        *(_DWORD *)(a1 + 28) = v26;
        *(_DWORD *)(a1 + 32) = 0;
        *(_DWORD *)(a1 + 36) = 0;
        v20 = v14;
        v15 = sub_224B5A(*(_DWORD *)(v22 + 696) + 1176, v27, &v34, v35);
        if ( v15 != 0
          || (*(_BYTE *)(a1 + 924) = 1,
              v17 = sub_225B10(a1, v34, v35[0]),
              *(_BYTE *)(a1 + 924) = 0,
              v15 = v17,
              sub_2250AC((int *)(*(_DWORD *)(v22 + 696) + 1176), (int *)&v34),
              v8 = v15,
              v15 == 0) )
        {
          *(_DWORD *)(a1 + 32) = v32;
          *(_DWORD *)(a1 + 44) = v29;
          *(_DWORD *)(a1 + 36) = v31;
          *(_DWORD *)(a1 + 40) = v30;
          v8 = v15;
          *(_DWORD *)(a1 + 744) = v20;
          *(_DWORD *)(a1 + 24) = 0;
          *(_DWORD *)(a1 + 28) = 0;
        }
      }
    }
  }
  return v8;
}


//======================================================================
// sub_226CB0
// address: 0x00226CB0   size: 0x638 (1592 bytes)
//======================================================================
int __fastcall sub_226CB0(int a1, _DWORD *a2, unsigned int a3, int a4)
{
  _DWORD *v5; // r5
  int v6; // r3
  int v8; // r1
  int v9; // r2
  int v10; // r2
  int v11; // r3
  int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  unsigned int v15; // r3
  _DWORD *v16; // r2
  int v17; // r4
  int v18; // r5
  int v19; // r6
  __int64 v20; // r0
  __int64 v21; // r0
  int v22; // r5
  int v23; // r6
  int *v24; // r3
  int v25; // r0
  int v26; // r2
  unsigned int v27; // r1
  int v28; // r4
  int v29; // r5
  _DWORD *v30; // r5
  unsigned int v31; // r0
  unsigned int v32; // r2
  int v33; // r3
  int v34; // r2
  int v35; // r6
  _DWORD *v36; // r3
  _DWORD *v37; // r1
  int v38; // r5
  int v39; // r6
  int v40; // r5
  int v41; // r1
  int v42; // r2
  int v43; // r5
  int v44; // r6
  int v45; // r3
  bool v46; // r3
  int v47; // r3
  int v48; // r2
  int v49; // r3
  int v50; // r0
  unsigned __int8 *v51; // r0
  int v52; // r2
  int v53; // r6
  int *v54; // r4
  int i; // r5
  int v56; // r3
  int v57; // r1
  int v58; // r2
  int v59; // [sp+2Ch] [bp-3F8h]
  int v60; // [sp+2Ch] [bp-3F8h]
  int v61; // [sp+30h] [bp-3F4h]
  _DWORD *v62; // [sp+30h] [bp-3F4h]
  unsigned int v63; // [sp+34h] [bp-3F0h]
  _DWORD *v64; // [sp+38h] [bp-3ECh]
  _BOOL4 v65; // [sp+38h] [bp-3ECh]
  int v66; // [sp+3Ch] [bp-3E8h]
  int v69; // [sp+48h] [bp-3DCh]
  int v70; // [sp+4Ch] [bp-3D8h]
  unsigned __int8 *v71; // [sp+58h] [bp-3CCh] BYREF
  int v72; // [sp+5Ch] [bp-3C8h]
  int v73; // [sp+60h] [bp-3C4h] BYREF
  int v74; // [sp+64h] [bp-3C0h]
  int v75; // [sp+68h] [bp-3BCh]
  int v76; // [sp+6Ch] [bp-3B8h]
  int v77[4]; // [sp+70h] [bp-3B4h] BYREF
  _DWORD v78[233]; // [sp+80h] [bp-3A4h] BYREF

  v5 = *(_DWORD **)(*(_DWORD *)(a1 + 4) + 696);
  v63 = a3;
  v59 = *(_DWORD *)(a1 + 4);
  v64 = v5;
  if ( v5[364] == 0xFFFF || (v6 = v5[291]) == 0 )
  {
    if ( a3 >= v5[3] )
      return 6;
  }
  else if ( a3 != 0 )
  {
    if ( a3 > v5[292] )
      return 6;
    v63 = *(unsigned __int16 *)(2 * a3 + v6);
    if ( *(_WORD *)(2 * a3 + v6) == 0 )
      return 6;
  }
  if ( (a4 & 0x400) != 0 )
    a4 |= 3u;
  *(_DWORD *)(a1 + 164) = 0x10000;
  *(_DWORD *)(a1 + 168) = 0x10000;
  if ( a2 != nullptr )
  {
    *(_DWORD *)(a1 + 164) = a2[4];
    *(_DWORD *)(a1 + 168) = a2[5];
    v8 = a2[11];
    v9 = *(_DWORD *)(*a2 + 532);
    if ( v8 != -1
      && *(_DWORD *)(v9 + 140) != 0
      && (a4 & 8) == 0
      && (*(int (__fastcall **)(int, int, unsigned int, int, _DWORD, int, _DWORD *))(v9 + 104))(
           v59,
           v8,
           v63,
           a4,
           *(_DWORD *)(*a2 + 104),
           a1 + 76,
           v78) == 0 )
    {
      *(_WORD *)(a1 + 110) = 0;
      *(_WORD *)(a1 + 108) = 0;
      *(_DWORD *)(a1 + 24) = BYTE1(v78[0]) << 6;
      *(_DWORD *)(a1 + 28) = LOBYTE(v78[0]) << 6;
      v10 = SBYTE2(v78[0]);
      *(_DWORD *)(a1 + 32) = SBYTE2(v78[0]) << 6;
      v11 = SHIBYTE(v78[0]);
      *(_DWORD *)(a1 + 36) = SHIBYTE(v78[0]) << 6;
      *(_DWORD *)(a1 + 40) = LOBYTE(v78[1]) << 6;
      v12 = SBYTE1(v78[1]);
      *(_DWORD *)(a1 + 44) = SBYTE1(v78[1]) << 6;
      v13 = SBYTE2(v78[1]);
      *(_DWORD *)(a1 + 52) = HIBYTE(v78[1]) << 6;
      *(_DWORD *)(a1 + 48) = v13 << 6;
      *(_DWORD *)(a1 + 72) = 1651078259;
      if ( (a4 & 0x10) != 0 )
      {
        *(_DWORD *)(a1 + 100) = v12;
        *(_DWORD *)(a1 + 104) = v13;
      }
      else
      {
        *(_DWORD *)(a1 + 100) = v10;
        *(_DWORD *)(a1 + 104) = v11;
      }
      return 0;
    }
  }
  if ( (a4 & 0x4000) != 0 )
    return 6;
  if ( v5[474] != 0 )
  {
    v14 = sub_225336((int)(v5 + 731), v63);
    v15 = v5[474];
    if ( v14 >= v15 )
      v14 = (unsigned __int8)(v15 - 1);
    v16 = (_DWORD *)v5[v14 + 475];
    v61 = v5[348];
    v17 = v16[17];
    v18 = v16[13];
    v19 = v16[14];
    v73 = v16[12];
    v74 = v18;
    v75 = v19;
    v76 = v16[15];
    v70 = 0;
    v69 = v16[18];
    v66 = v16[19];
    if ( v61 != v17 )
    {
      HIDWORD(v20) = v61;
      LODWORD(v20) = *(_DWORD *)(a1 + 164);
      *(_DWORD *)(a1 + 164) = FT_MulDiv(v20, v17);
      HIDWORD(v21) = v61;
      LODWORD(v21) = *(_DWORD *)(a1 + 168);
      *(_DWORD *)(a1 + 168) = FT_MulDiv(v21, v17);
      v70 = 1;
    }
  }
  else
  {
    v22 = v5[344];
    v23 = v64[345];
    v73 = v64[343];
    v74 = v22;
    v75 = v23;
    v76 = v64[346];
    v70 = 0;
    v69 = v64[349];
    v66 = v64[350];
  }
  *(_WORD *)(a1 + 110) = 0;
  *(_WORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 72) = 1869968492;
  v62 = *(_DWORD **)(v59 + 696);
  j_memset(v78, 0, 0x3A0u);
  BYTE1(v78[16]) = 1;
  v78[1] = v59;
  v78[2] = a1;
  v24 = *(int **)(a1 + 156);
  v78[0] = *(_DWORD *)(v59 + 100);
  v25 = *v24;
  v78[4] = *v24 + 20;
  v78[3] = v25;
  v78[5] = v78[4] + 36;
  FT_GlyphLoader_Rewind(v25);
  v78[18] = 0;
  v78[17] = 0;
  if ( (a4 & 3) == 0 && a2 != nullptr )
  {
    v78[18] = *(_DWORD *)a2[10];
    v78[17] = *(_DWORD *)(*(_DWORD *)(a1 + 156) + 36);
  }
  v26 = 0;
  memset(&v78[6], 0, 24);
  v78[19] = v62;
  v27 = v62[23];
  v78[223] = v27;
  v78[227] = v62[327];
  if ( v62[342] != 1 )
  {
    v26 = 107;
    if ( v27 > 0x4D7 )
    {
      if ( v27 > 0x846B )
        v26 = 0x8000;
      else
        v26 = 1131;
    }
  }
  v78[230] = (unsigned int)(a4 << 12) >> 28;
  v78[225] = v26;
  if ( (a4 & 0x100) != 0 )
    BYTE1(v78[188]) = 1;
  BYTE2(v78[16]) = 0;
  v28 = sub_224B5A(*(_DWORD *)(v59 + 696) + 1176, v63, &v71, v77);
  if ( v28 != 0 )
    return v28;
  v29 = *(_DWORD *)(v78[1] + 696);
  if ( *(_DWORD *)(v29 + 1896) != 0 )
  {
    v28 = 3;
    v31 = sub_225336(v29 + 2924, v63);
    if ( v31 >= *(_DWORD *)(v29 + 1896) )
      return v28;
    v30 = *(_DWORD **)(v29 + 4 * (v31 + 474) + 4);
    if ( v78[17] != 0 && a2 != nullptr )
      v78[18] = *(_DWORD *)(a2[10] + 4 * v31 + 4);
  }
  else
  {
    v30 = (_DWORD *)(v29 + 1324);
  }
  v32 = v30[136];
  v78[222] = v32;
  v78[226] = v30[142];
  if ( *(_DWORD *)(v78[19] + 1368) == 1 )
  {
    v33 = 0;
  }
  else
  {
    v33 = 107;
    if ( v32 > 0x4D7 )
    {
      if ( v32 > 0x846B )
        v33 = 0x8000;
      else
        v33 = 1131;
    }
  }
  v78[224] = v33;
  v78[186] = v30[132];
  v78[187] = v30[133];
  v28 = sub_225B10((int)v78, v71, v77[0]);
  sub_2250AC((int *)(*(_DWORD *)(v59 + 696) + 1176), (int *)&v71);
  if ( v28 == 0 )
  {
    v34 = v64[300];
    if ( v34 != 0 )
    {
      v35 = v77[0];
      *(_DWORD *)(a1 + 136) = v64[301] + *(_DWORD *)(4 * v63 + v34) - 1;
      *(_DWORD *)(a1 + 140) = v35;
    }
    if ( v78[2] != 0 )
    {
      v36 = (_DWORD *)(v78[2] + 108);
      v38 = *(_DWORD *)(v78[4] + 4);
      v39 = *(_DWORD *)(v78[4] + 8);
      v37 = (_DWORD *)(v78[4] + 12);
      *(_DWORD *)(v78[2] + 108) = *(_DWORD *)v78[4];
      v36[1] = v38;
      v36[2] = v39;
      v36 += 3;
      v40 = v37[1];
      *v36 = *v37;
      v36[1] = v40;
    }
    if ( (a4 & 0x400) != 0 )
    {
      v41 = *(_DWORD *)(a1 + 156);
      v42 = v78[186];
      *(_DWORD *)(a1 + 32) = v78[8];
      *(_DWORD *)(a1 + 40) = v42;
      v43 = v74;
      v44 = v75;
      *(_DWORD *)(v41 + 12) = v73;
      *(_DWORD *)(v41 + 16) = v43;
      *(_DWORD *)(v41 + 20) = v44;
      *(_DWORD *)(v41 + 24) = v76;
      *(_DWORD *)(v41 + 28) = v69;
      *(_DWORD *)(v41 + 32) = v66;
      *(_BYTE *)(v41 + 8) = 1;
    }
    else
    {
      v45 = v78[186];
      *(_DWORD *)(a1 + 40) = v78[186];
      *(_DWORD *)(a1 + 56) = v45;
      *(_BYTE *)(*(_DWORD *)(a1 + 156) + 8) = 0;
      v46 = false;
      if ( *(_BYTE *)(v59 + 296) != 0 && *(_WORD *)(v59 + 334) != 0 )
        v46 = *(_DWORD *)(v59 + 336) != 0;
      v65 = v46;
      if ( v46 )
      {
        LOWORD(v71) = 0;
        LOWORD(v77[0]) = 0;
        (*(void (__fastcall **)(int, int, unsigned int, unsigned __int8 **, int *))(*(_DWORD *)(v59 + 532) + 156))(
          v59,
          1,
          v63,
          &v71,
          v77);
        *(_DWORD *)(a1 + 48) = (__int16)v71;
        v47 = LOWORD(v77[0]);
      }
      else
      {
        if ( *(unsigned __int16 *)(v59 + 368) == 0xFFFF )
        {
          v48 = *(__int16 *)(v59 + 220);
          v49 = *(__int16 *)(v59 + 222);
        }
        else
        {
          v48 = *(__int16 *)(v59 + 438);
          v49 = *(__int16 *)(v59 + 440);
        }
        v47 = v48 - v49;
      }
      *(_DWORD *)(a1 + 52) = v47;
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 52);
      *(_DWORD *)(a1 + 72) = 1869968492;
      *(_DWORD *)(a1 + 124) = 0;
      if ( a2 != nullptr && *((unsigned __int16 *)a2 + 7) <= 0x17u )
        *(_DWORD *)(a1 + 124) = 256;
      v50 = v73;
      *(_DWORD *)(a1 + 124) |= 4u;
      if ( v50 != 0x10000 || v76 != 0x10000 || v74 != 0 || v75 != 0 )
        FT_Outline_Transform((int *)(a1 + 108), &v73);
      if ( v69 != 0 || v66 != 0 )
        FT_Outline_Translate(a1 + 108, v69, v66);
      v71 = *(unsigned __int8 **)(a1 + 40);
      v72 = 0;
      FT_Vector_Transform((int *)&v71, &v73);
      v51 = v71;
      v52 = *(_DWORD *)(a1 + 52);
      v71 = nullptr;
      *(_DWORD *)(a1 + 40) = &v51[v69];
      v72 = v52;
      FT_Vector_Transform((int *)&v71, &v73);
      *(_DWORD *)(a1 + 52) = v72 + v66;
      if ( (a4 & 1) == 0 || v70 != 0 )
      {
        v53 = *(_DWORD *)(a1 + 164);
        v54 = *(int **)(a1 + 112);
        v60 = *(_DWORD *)(a1 + 168);
        if ( (a4 & 3) != 0 || v78[17] == 0 )
        {
          for ( i = *(__int16 *)(a1 + 110); i > 0; --i )
          {
            *v54 = FT_MulFix(*v54, v53);
            v54[1] = FT_MulFix(v54[1], v60);
            v54 += 2;
          }
        }
        *(_DWORD *)(a1 + 40) = FT_MulFix(*(_DWORD *)(a1 + 40), v53);
        *(_DWORD *)(a1 + 52) = FT_MulFix(*(_DWORD *)(a1 + 52), v60);
      }
      FT_Outline_Get_CBox(a1 + 108, v77);
      v56 = v77[0];
      v57 = v77[1];
      *(_DWORD *)(a1 + 24) = v77[2] - v77[0];
      v58 = v77[3];
      *(_DWORD *)(a1 + 32) = v56;
      *(_DWORD *)(a1 + 28) = v58 - v57;
      *(_DWORD *)(a1 + 36) = v58;
      if ( v65 )
      {
        *(_DWORD *)(a1 + 44) = v56 - *(_DWORD *)(a1 + 40) / 2;
      }
      else if ( (a4 & 0x10) != 0 )
      {
        ft_synthesize_vertical_metrics(a1 + 24, *(_DWORD *)(a1 + 52));
      }
    }
    return 0;
  }
  return v28;
}


//======================================================================
// sub_2272F4
// address: 0x002272F4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_2272F4(int a1, _DWORD *a2, unsigned int a3, int a4)
{
  int v4; // r4

  if ( a1 == 0 )
    return 37;
  if ( a2 == nullptr )
    a4 |= 3u;
  if ( (a4 & 1) != 0 )
  {
    a2 = nullptr;
    return sub_226CB0(a1, a2, a3, a4);
  }
  if ( a2 == nullptr )
    return sub_226CB0(a1, a2, a3, a4);
  v4 = 35;
  if ( *a2 == *(_DWORD *)(a1 + 4) )
    return sub_226CB0(a1, a2, a3, a4);
  return v4;
}


//======================================================================
// sub_227326
// address: 0x00227326   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_227326(int a1, unsigned int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // r5
  unsigned int i; // r4
  int result; // r0
  int v10; // r3
  int v11; // [sp+0h] [bp-Ch]
  int v12; // [sp+4h] [bp-8h]

  v6 = *(_DWORD *)(a1 + 84);
  v11 = a4 | 0x100;
  v12 = a3 + a2;
  for ( i = a2; i != v12; ++i )
  {
    result = sub_2272F4(v6, *(_DWORD **)(a1 + 88), i, v11);
    if ( result != 0 )
      return result;
    if ( (v11 & 0x10) != 0 )
      v10 = *(_DWORD *)(v6 + 60);
    else
      v10 = *(_DWORD *)(v6 + 56);
    *a5++ = v10;
  }
  return 0;
}


//======================================================================
// sub_227368
// address: 0x00227368   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_227368(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int Module_Interface; // r4
  int v10; // [sp+30h] [bp-84h]

  v10 = *(_DWORD *)(*(_DWORD *)(a2 + 96) + 4);
  Module_Interface = FT_Get_Module_Interface(v10, "sfnt");
  if ( Module_Interface == 0 )
    sub_227CAE();
  ft_module_get_service(*(_DWORD **)(a2 + 96));
  FT_Get_Module_Interface(v10, "pshinter");
  if ( FT_Stream_Seek(a1, 0) != 0 )
    sub_22821E();
  if ( (*(int (__fastcall **)(_DWORD *, int, int, int, int))(Module_Interface + 4))(a1, a2, a3, a4, a5) != 0 )
    JUMPOUT(0x227460);
  if ( *(_DWORD *)(a2 + 148) == 1330926671 )
    JUMPOUT(0x2273E2);
  return sub_2273DC();
}


//======================================================================
// sub_2273DC
// address: 0x002273DC   size: 0x8D2 (2258 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   002273DC  STR     R3, [SP,#arg_64]
//   002273DE  BL      sub_22821E
//   002273E2  LDR     R5, [SP,#arg_44]
//   002273E4  CMP     R5, #0
//   002273E6  BGE     loc_2273EC
//   002273E8  BL      sub_228244
//   002273EC  BEQ     loc_2273F2
//   002273EE  MOVS    R3, #6
//   002273F0  B       sub_2273DC
//   002273F2  MOVS    R0, #0x1FC
//   002273F6  LDR     R0, [R6,R0]
//   002273F8  LDR     R1, =0x68656164
//   002273FA  LDR     R2, [SP,#arg_2C]
//   002273FC  STR     R0, [SP,#arg_C]
//   002273FE  LDR     R5, [SP,#arg_C]
//   00227400  MOVS    R0, R6
//   00227402  LDR     R3, [SP,#arg_44]
//   00227404  BLX     R5
//   00227406  MOVS    R5, #0xFE
//   00227408  STR     R0, [SP,#arg_64]
//   0022740A  LSLS    R5, R5, #1
//   0022740C  CMP     R0, #0
//   0022740E  BNE     loc_22742E
//   00227410  LDR     R0, [SP,#arg_C8]
//   00227412  MOVS    R1, R6
//   00227414  LDR     R2, [SP,#arg_44]
//   00227416  STR     R0, [SP,#arg_0]
//   00227418  LDR     R4, [R4,#8]
//   0022741A  LDR     R0, [SP,#arg_2C]
//   0022741C  MOVS    R3, R7
//   0022741E  BLX     R4
//   00227420  STR     R0, [SP,#arg_64]
//   00227422  CMP     R0, #0
//   00227424  BEQ     loc_22742A
//   00227426  BL      sub_22821E
//   0022742A  LDR     R4, [SP,#arg_44]
//   0022742C  B       loc_227442
//   0022742E  LDR     R3, [R4,#0x28]
//   00227430  MOVS    R0, R6
//   00227432  LDR     R1, [SP,#arg_2C]
//   00227434  BLX     R3
//   00227436  STR     R0, [SP,#arg_64]
//   00227438  CMP     R0, #0
//   0022743A  BEQ     loc_227440
//   0022743C  BL      sub_22821E
//   00227440  MOVS    R4, #1
//   00227442  STR     R4, [SP,#arg_48]
//   00227444  MOVS    R0, R6
//   00227446  LDR     R4, [R6,R5]
//   00227448  LDR     R1, =0x43464620
//   0022744A  LDR     R2, [SP,#arg_2C]
//   0022744C  MOVS    R3, #0
//   0022744E  BLX     R4
//   00227450  STR     R0, [SP,#arg_64]
//   00227452  CMP     R0, #0
//   00227454  BEQ     loc_22745A
//   00227456  BL      sub_22821E
//   0022745A  MOVS    R5, #1
//   0022745C  STR     R5, [SP,#arg_54]
//   0022745E  B       loc_227478
//   00227460  LDR     R0, [SP,#arg_2C]
//   00227462  LDR     R1, [SP,#arg_34]
//   00227464  BL      FT_Stream_Seek
//   00227468  STR     R0, [SP,#arg_64]
//   0022746A  CMP     R0, #0
//   0022746C  BEQ     loc_227472
//   0022746E  BL      sub_22821E
//   00227472  MOVS    R4, #1
//   00227474  STR     R0, [SP,#arg_54]
//   00227476  STR     R4, [SP,#arg_48]
//   00227478  LDR     R5, [R6,#0x64]
//   0022747A  LDR     R1, =0xB9C
//   0022747C  ADD     R2, SP, #arg_64
//   0022747E  MOVS    R0, R5
//   00227480  STR     R5, [SP,#arg_50]
//   00227482  BL      ft_mem_alloc
//   00227486  LDR     R4, [SP,#arg_64]
//   00227488  MOVS    R7, R0
//   0022748A  CMP     R4, #0
//   0022748C  BEQ     loc_227492
//   0022748E  BL      sub_22821E
//   00227492  LDR     R5, [SP,#arg_2C]
//   00227494  MOVS    R3, #0x2B8
//   00227498  STR     R0, [R6,R3]
//   0022749A  LDR     R5, [R5,#0x1C]
//   0022749C  MOVS    R1, R4; int
//   0022749E  LDR     R2, =0xB9C; size_t
//   002274A0  STR     R5, [SP,#arg_40]
//   002274A2  ADD     R5, SP, #arg_70
//   002274A4  BL      j_memset
//   002274A8  MOVS    R1, R4; int
//   002274AA  MOVS    R2, #0x20 ; ' '; size_t
//   002274AC  MOVS    R0, R5; void *
//   002274AE  BL      j_memset
//   002274B2  LDR     R4, [SP,#arg_2C]
//   002274B4  LDR     R0, [SP,#arg_2C]
//   002274B6  STR     R4, [R7]
//   002274B8  LDR     R4, [SP,#arg_40]
//   002274BA  STR     R4, [R7,#4]
//   002274BC  BL      FT_Stream_Pos
//   002274C0  LDR     R1, =(dword_434EFC - 0x2274CA)
//   002274C2  STR     R0, [SP,#arg_34]
//   002274C4  MOVS    R2, R7
//   002274C6  ADD     R1, PC; dword_434EFC
//   002274C8  LDR     R0, [SP,#arg_2C]
//   002274CA  ADDS    R1, #(unk_434F60 - 0x434EFC)
//   002274CC  BL      FT_Stream_ReadFields
//   002274D0  STR     R0, [SP,#arg_68]
//   002274D2  CMP     R0, #0
//   002274D4  BEQ     loc_2274D8
//   002274D6  B       loc_227C7A
//   002274D8  LDRB    R4, [R7,#0x10]
//   002274DA  CMP     R4, #1
//   002274DC  BNE     loc_2274EA
//   002274DE  LDRB    R1, [R7,#0x12]
//   002274E0  CMP     R1, #3
//   002274E2  BLS     loc_2274EA
//   002274E4  LDRB    R3, [R7,#0x13]
//   002274E6  CMP     R3, #4
//   002274E8  BLS     loc_2274EE
//   002274EA  MOVS    R3, #2
//   002274EC  B       loc_227758
//   002274EE  SUBS    R1, #4
//   002274F0  LDR     R0, [SP,#arg_2C]
//   002274F2  BL      FT_Stream_Skip
//   002274F6  MOVS    R2, R0
//   002274F8  STR     R0, [SP,#arg_68]
//   002274FA  BEQ     loc_2274FE
//   002274FC  B       loc_227C7A
//   002274FE  MOVS    R0, R7
//   00227500  ADDS    R0, #0x14
//   00227502  LDR     R1, [SP,#arg_2C]
//   00227504  BL      sub_2251D8
//   00227508  MOVS    R2, R0
//   0022750A  STR     R0, [SP,#arg_68]
//   0022750C  BEQ     loc_227510
//   0022750E  B       loc_227C7A
//   00227510  MOVS    R0, #0x4B8
//   00227514  ADDS    R0, R7, R0
//   00227516  LDR     R1, [SP,#arg_2C]
//   00227518  STR     R0, [SP,#arg_38]
//   0022751A  BL      sub_2251D8
//   0022751E  STR     R0, [SP,#arg_68]
//   00227520  CMP     R0, #0
//   00227522  BEQ     loc_227526
//   00227524  B       loc_227C7A
//   00227526  MOVS    R0, R5
//   00227528  LDR     R1, [SP,#arg_2C]
//   0022752A  MOVS    R2, R4
//   0022752C  BL      sub_2251D8
//   00227530  STR     R0, [SP,#arg_68]
//   00227532  CMP     R0, #0
//   00227534  BEQ     loc_227538
//   00227536  B       loc_227C7A
//   00227538  MOVS    R5, R7
//   0022753A  ADDS    R5, #0x54 ; 'T'
//   0022753C  MOVS    R0, R5
//   0022753E  LDR     R1, [SP,#arg_2C]
//   00227540  MOVS    R2, R4
//   00227542  STR     R5, [SP,#arg_3C]
//   00227544  BL      sub_2251D8
//   00227548  STR     R0, [SP,#arg_68]
//   0022754A  CMP     R0, #0
//   0022754C  BEQ     loc_227550
//   0022754E  B       loc_227C7A
//   00227550  LDR     R2, =0x524
//   00227552  MOVS    R3, #0x528
//   00227556  ADD     R4, SP, #arg_70
//   00227558  ADDS    R1, R7, R2
//   0022755A  MOVS    R0, R4
//   0022755C  ADDS    R2, R7, R3
//   0022755E  BL      sub_13A234
//   00227562  STR     R0, [SP,#arg_68]
//   00227564  CMP     R0, #0
//   00227566  BEQ     loc_22756A
//   00227568  B       loc_227C7A
//   0022756A  LDR     R2, [R4,#8]
//   0022756C  MOVS    R3, #0x520
//   00227570  STR     R2, [R7,R3]
//   00227572  LDR     R3, [R7,#0x1C]
//   00227574  LDR     R4, [SP,#arg_44]
//   00227576  STR     R3, [R7,#8]
//   00227578  CMP     R4, R3
//   0022757A  BLT     loc_227580
//   0022757C  MOVS    R3, #6
//   0022757E  STR     R3, [SP,#arg_68]
//   00227580  LDR     R5, [SP,#arg_44]
//   00227582  CMP     R5, #0
//   00227584  BGE     loc_227588
//   00227586  B       loc_227C7A
//   00227588  LDR     R5, [SP,#arg_34]
//   0022758A  LDR     R0, =0x52C
//   0022758C  LDR     R1, [SP,#arg_38]
//   0022758E  STR     R5, [SP,#arg_0]
//   00227590  LDR     R5, [SP,#arg_30]
//   00227592  ADDS    R4, R7, R0
//   00227594  MOVS    R0, R4
//   00227596  STR     R5, [SP,#arg_4]
//   00227598  LDR     R2, [SP,#arg_44]
//   0022759A  LDR     R3, [SP,#arg_2C]

//======================================================================
// sub_227CAE
// address: 0x00227CAE   size: 0x570 (1392 bytes)
//======================================================================
int __fastcall sub_227CAE(
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
        unsigned __int8 *a17,
        int i,
        int a19,
        int a20,
        int a21,
        unsigned int a22,
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
        int a34,
        int a35,
        int a36,
        int a37,
        int a38,
        int a39,
        int a40,
        int *a41,
        int a42,
        int a43)
{
  int v43; // r6
  int v44; // r7
  int v45; // r3
  int v46; // r2
  int v47; // r4
  int v48; // r3
  int *v49; // r4
  unsigned int v50; // r3
  unsigned int v51; // r5
  __int64 v52; // r0
  __int64 v53; // r0
  int v54; // r3
  int v55; // r5
  int v56; // r2
  int v57; // r5
  int v58; // r2
  int v59; // r3
  int v60; // r5
  int v61; // r3
  int v62; // r0
  _WORD *v63; // r2
  _BYTE *v64; // r0
  int v65; // r0
  unsigned __int8 *v66; // r4
  char *v67; // r5
  int v68; // r3
  int v69; // r2
  int v70; // r0
  unsigned __int8 *v71; // r3
  unsigned __int8 v72; // r0
  unsigned __int8 *v73; // r2
  unsigned int v74; // r1
  int v75; // r0
  int v76; // r2
  int v77; // r3
  const char *v78; // r0
  const char *v79; // r4
  const char *v80; // r5
  signed int v81; // r0
  int j; // r12
  char *v83; // r0
  int v84; // r3
  int v85; // r3
  int v86; // r4
  const char *v87; // r0
  const char *v88; // r5
  const char *v89; // r5
  int v90; // r2
  int v91; // r0
  unsigned int v92; // r4
  int v93; // r1
  unsigned int m; // r3
  int v96; // r3
  int v97; // r3
  int k; // r2
  int v99; // [sp+2Ch] [bp+2Ch]
  int v100; // [sp+2Ch] [bp+2Ch]
  signed int v101; // [sp+2Ch] [bp+2Ch]

  sub_2273DC(a1, a2, a3, 11);
  if ( *(_BYTE *)(v44 + 1388) == 0 )
  {
    if ( a23 != 0 )
      v45 = 1000;
    else
      v45 = *(unsigned __int16 *)(v43 + 68);
    *(_DWORD *)(v44 + 1392) = v45;
  }
  v46 = *(_DWORD *)(v44 + 1384);
  v47 = (v46 + (v46 >> 31)) ^ (v46 >> 31);
  if ( v47 != 0x10000 )
  {
    a14 = *(_DWORD *)(v44 + 1392);
    *(_DWORD *)(v44 + 1392) = FT_DivFix(a14, (v46 + (v46 >> 31)) ^ (v46 >> 31));
    a13 = *(_DWORD *)(v44 + 1372);
    *(_DWORD *)(v44 + 1372) = FT_DivFix(a13, v47);
    *(_DWORD *)(v44 + 1380) = FT_DivFix(*(_DWORD *)(v44 + 1380), v47);
    *(_DWORD *)(v44 + 1376) = FT_DivFix(*(_DWORD *)(v44 + 1376), v47);
    *(_DWORD *)(v44 + 1384) = FT_DivFix(*(_DWORD *)(v44 + 1384), v47);
    a12 = *(_DWORD *)(v44 + 1396);
    *(_DWORD *)(v44 + 1396) = FT_DivFix(a12, v47);
    *(_DWORD *)(v44 + 1400) = FT_DivFix(*(_DWORD *)(v44 + 1400), v47);
  }
  *(int *)(v44 + 1396) >>= 16;
  *(int *)(v44 + 1400) >>= 16;
  v99 = *(_DWORD *)(v44 + 1896);
  while ( v99 != 0 )
  {
    v48 = v44 + 4 * --v99 + 1900;
    v49 = *(int **)v48;
    i = v44 + 1324;
    if ( *(_BYTE *)(*(_DWORD *)v48 + 64) != 0 )
    {
      if ( *(_BYTE *)(v44 + 1388) != 0 )
      {
        v50 = *(_DWORD *)(v44 + 1392);
        if ( v50 <= 1 || (v51 = v49[17]) <= 1 )
        {
          v51 = 1;
        }
        else if ( v51 > v50 )
        {
          v51 = *(_DWORD *)(v44 + 1392);
        }
        a17 = (unsigned __int8 *)(v44 + 1372);
        FT_Matrix_Multiply_Scaled((__int64 *)(v44 + 1372), v49 + 12, v51);
        LODWORD(v52) = v49 + 18;
        HIDWORD(v52) = v44 + 1372;
        FT_Vector_Transform_Scaled(v52, v51);
        HIDWORD(v53) = *(_DWORD *)(v44 + 1392);
        LODWORD(v53) = v49[17];
        v49[17] = FT_MulDiv(v53, v51);
      }
    }
    else
    {
      a17 = (unsigned __int8 *)(v44 + 1372);
      v54 = *(_DWORD *)(v44 + 1376);
      v55 = *(_DWORD *)(v44 + 1380);
      v49[12] = *(_DWORD *)(v44 + 1372);
      v49[13] = v54;
      v49[14] = v55;
      v49[15] = *(_DWORD *)(v44 + 1384);
      v49[18] = *(_DWORD *)(v44 + 1396);
      v49[19] = *(_DWORD *)(v44 + 1400);
      v49[17] = *(_DWORD *)(v44 + 1392);
    }
    v56 = v49[15];
    v57 = (v56 + (v56 >> 31)) ^ (v56 >> 31);
    if ( v57 != 0x10000 )
    {
      v49[17] = FT_DivFix(v49[17], (v56 + (v56 >> 31)) ^ (v56 >> 31));
      v49[12] = FT_DivFix(v49[12], v57);
      v49[14] = FT_DivFix(v49[14], v57);
      v49[13] = FT_DivFix(v49[13], v57);
      v49[15] = FT_DivFix(v49[15], v57);
      v49[18] = FT_DivFix(v49[18], v57);
      v49[19] = FT_DivFix(v49[19], v57);
    }
    v58 = v49[19];
    v49[18] >>= 16;
    v49[19] = v58 >> 16;
  }
  if ( a23 == 0 )
    goto LABEL_89;
  *(_DWORD *)v43 = *(_DWORD *)(v44 + 8);
  if ( *(_DWORD *)(v44 + 1456) == 0xFFFF )
    v59 = *(_DWORD *)(v44 + 1184);
  else
    v59 = *(_DWORD *)(v44 + 1168) + 1;
  *(_DWORD *)(v43 + 16) = v59;
  *(_DWORD *)(v43 + 52) = *(int *)(v44 + 1408) >> 16;
  v60 = *(int *)(v44 + 1412) >> 16;
  *(_DWORD *)(v43 + 56) = v60;
  a17 = (unsigned __int8 *)v60;
  *(_DWORD *)(v43 + 60) = (*(_DWORD *)(v44 + 1416) + 0xFFFF) >> 16;
  i = (*(_DWORD *)(v44 + 1420) + 0xFFFF) >> 16;
  *(_DWORD *)(v43 + 64) = i;
  v61 = *(_DWORD *)(v44 + 1392);
  *(_WORD *)(v43 + 68) = v61;
  *(_WORD *)(v43 + 70) = i;
  *(_WORD *)(v43 + 72) = v60;
  v62 = 12 * (unsigned __int16)v61 / 10;
  v63 = (_WORD *)(v43 + 74);
  if ( (__int16)v62 < (__int16)i - (__int16)v60 )
    *v63 = i - v60;
  else
    *v63 = v62;
  *(_WORD *)(v43 + 80) = HIWORD(*(_DWORD *)(v44 + 1356));
  *(_WORD *)(v43 + 82) = HIWORD(*(_DWORD *)(v44 + 1360));
  v64 = sub_2252E6(v44, a22);
  *(_DWORD *)(v43 + 20) = v64;
  if ( v64 == nullptr )
  {
    v83 = (char *)sub_225740((_DWORD *)v44, *(_DWORD *)(v44 + 1496));
    if ( v83 != nullptr )
      *(_DWORD *)(v43 + 20) = ft_mem_strdup(a25, v83, &a41);
    goto LABEL_73;
  }
  v65 = sub_225740((_DWORD *)v44, *(_DWORD *)(v44 + 1336));
  v66 = *(unsigned __int8 **)(v43 + 20);
  v67 = (char *)v65;
  for ( i = j_strlen((const char *)v66) + 1; i > 6; i -= 7 )
  {
    if ( v66[6] != 43 )
      break;
    v100 = 1;
    v68 = 0;
    do
    {
      v69 = -((unsigned __int8)(v66[v68++] - 65) <= 0x19u);
      v70 = v100 & v69;
      v100 &= v69;
    }
    while ( v68 != 6 );
    if ( v70 == 0 )
      break;
    v71 = v66 + 7;
    a17 = &v66[i];
    while ( v71 != a17 )
    {
      v72 = *v71;
      v73 = v71 - 7;
      ++v71;
      *v73 = v72;
    }
  }
  v74 = *(_DWORD *)(v44 + 1340);
  if ( v74 == 0 || (v75 = sub_225740((_DWORD *)v44, v74)) == 0 )
  {
    if ( v67 == nullptr || v66 == nullptr )
      goto LABEL_73;
    while ( 1 )
    {
LABEL_51:
      v77 = (unsigned __int8)*v67;
      if ( *v67 == 0 )
        goto LABEL_73;
      v76 = *v66;
      if ( v77 == v76 )
        break;
      if ( v77 == 32 || v77 == 45 )
      {
LABEL_50:
        ++v67;
      }
      else
      {
        if ( v76 != 32 && v76 != 45 )
        {
          if ( *v66 == 0 )
          {
            v78 = (const char *)ft_mem_strdup(a25, v67, &a41);
            v79 = *(const char **)(v43 + 20);
            v80 = v78;
            v101 = j_strlen(v79);
            v81 = j_strlen(v80);
            if ( v101 > v81 )
            {
              for ( j = 1; j <= v81; ++j )
              {
                if ( v79[v101 - j] != v80[v81 - j] )
                  goto LABEL_70;
              }
              for ( k = v101 - v81 - 1; k > 0; --k )
              {
                v84 = (unsigned __int8)v79[k];
                if ( v84 != 45 && v84 != 32 && v84 != 95 && v84 != 43 )
                {
                  v79[k + 1] = 0;
                  break;
                }
              }
            }
LABEL_70:
            if ( v80 != nullptr )
            {
              *(_DWORD *)(v43 + 24) = v80;
              goto LABEL_74;
            }
          }
          goto LABEL_73;
        }
        ++v66;
      }
    }
    ++v66;
    goto LABEL_50;
  }
  v66 = (unsigned __int8 *)v75;
  if ( v67 != nullptr )
    goto LABEL_51;
LABEL_73:
  *(_DWORD *)(v43 + 24) = ft_mem_strdup(a25, "Regular", &a41);
LABEL_74:
  if ( a26 != 0 )
    v85 = 2073;
  else
    v85 = 2065;
  if ( *(_BYTE *)(v44 + 1348) != 0 )
    v85 |= 4u;
  *(_DWORD *)(v43 + 8) = v85;
  v99 = *(_DWORD *)(v44 + 1352) != 0;
  v86 = v99;
  v87 = (const char *)sub_225740((_DWORD *)v44, *(_DWORD *)(v44 + 1344));
  v88 = v87;
  if ( v87 != nullptr && (j_strcmp(v87, "Bold") == 0 || j_strcmp(v88, "Black") == 0) )
    v86 = v99 | 2;
  if ( (v86 & 2) == 0 )
  {
    v89 = *(const char **)(v43 + 24);
    if ( v89 != nullptr && (j_strncmp(*(const char **)(v43 + 24), "Bold", 4u) == 0 || j_strncmp(v89, "Black", 5u) == 0) )
      v86 |= 2u;
  }
  *(_DWORD *)(v43 + 12) = v86;
LABEL_89:
  v90 = *(_DWORD *)(v44 + 1456);
  if ( v90 == 0xFFFF )
  {
    v90 = *(_DWORD *)(v43 + 8) | 0x200;
    *(_DWORD *)(v43 + 8) = v90;
  }
  v91 = 0xFFFF;
  if ( *(_DWORD *)(v44 + 1456) != 0xFFFF && a23 != 0 )
    *(_DWORD *)(v43 + 8) |= 0x1000u;
  v92 = *(_DWORD *)(v43 + 36);
  v93 = 65539;
  for ( m = 0; m != v92; ++m )
  {
    v91 = *(_DWORD *)(v43 + 40);
    v90 = *(_DWORD *)(4 * m + v91);
    if ( *(_DWORD *)(v90 + 8) != 65539 )
    {
      v90 = *(unsigned __int16 *)(v90 + 8);
      if ( v90 != 0 )
        continue;
    }
    v92 = m;
    goto LABEL_109;
  }
  if ( a23 == 0 || (v90 = *(_DWORD *)(v44 + 1456), v91 = 0xFFFF, v90 == 0xFFFF) )
  {
    if ( ++m <= 0xF )
    {
      a43 = 65539;
      a42 = 1970170211;
      a41 = (int *)v43;
      v91 = FT_CMap_New(&cff_cmap_unicode_class_rec, 0, &a41, nullptr);
      if ( v91 != 0 && v91 != 163 )
      {
LABEL_117:
        a30 = v91;
        return sub_22821E(
                 v91,
                 v93,
                 v90,
                 m,
                 a5,
                 a6,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11,
                 a12,
                 a13,
                 a14,
                 a15,
                 v99,
                 a17,
                 i,
                 a19,
                 a20,
                 a21,
                 a22,
                 a23,
                 a24,
                 a25,
                 a26,
                 a27,
                 a28,
                 a29,
                 a30,
                 a31,
                 a32,
                 a33,
                 a34,
                 a35,
                 a36,
                 a37,
                 a38,
                 a39);
      }
      v93 = *(_DWORD *)(v43 + 92);
      m = 0;
      a30 = 0;
      if ( v93 == 0 )
      {
        v90 = *(_DWORD *)(v43 + 36);
        if ( v92 != v90 )
        {
          m = *(_DWORD *)(v43 + 40);
          v90 = *(_DWORD *)(4 * v92 + m);
          *(_DWORD *)(v43 + 92) = v90;
        }
      }
LABEL_109:
      if ( v92 <= 0xF )
      {
        m = *(_DWORD *)(v44 + 124);
        if ( m != 0 )
        {
          a41 = (int *)v43;
          LOWORD(a43) = 7;
          v96 = *(_DWORD *)(v44 + 120);
          if ( v96 != 0 )
          {
            if ( v96 == 1 )
            {
              HIWORD(a43) = 1;
              v97 = 1094992453;
            }
            else
            {
              HIWORD(a43) = 2;
              v97 = 1094992451;
            }
          }
          else
          {
            HIWORD(a43) = 0;
            v97 = 1094995778;
          }
          a42 = v97;
          v91 = FT_CMap_New(&cff_cmap_encoding_class_rec, 0, &a41, nullptr);
          goto LABEL_117;
        }
      }
    }
  }
  return sub_22821E(
           v91,
           v93,
           v90,
           m,
           a5,
           a6,
           a7,
           a8,
           a9,
           a10,
           a11,
           a12,
           a13,
           a14,
           a15,
           v99,
           a17,
           i,
           a19,
           a20,
           a21,
           a22,
           a23,
           a24,
           a25,
           a26,
           a27,
           a28,
           a29,
           a30,
           a31,
           a32,
           a33,
           a34,
           a35,
           a36,
           a37,
           a38,
           a39);
}


//======================================================================
// sub_22821E
// address: 0x0022821E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_22821E(
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
        int a29,
        int a30)
{
  return sub_228244(a30);
}


//======================================================================
// sub_228244
// address: 0x00228244   size: 0x4 (4 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_228244(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_22828C
// address: 0x0022828C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_22828C(unsigned int *a1, unsigned int *a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r1
  int result; // r0
  unsigned int v5; // r2
  unsigned int v6; // r3

  v2 = *a1;
  v3 = *a2;
  result = 1;
  v5 = (2 * v2) >> 1;
  v6 = (2 * v3) >> 1;
  if ( v5 == v6 )
  {
    if ( v2 <= v3 )
      return -(v2 < v3);
  }
  else if ( v5 <= v6 )
  {
    return -(v5 < v6);
  }
  return result;
}


//======================================================================
// sub_2282B4
// address: 0x002282B4   size: 0x4E (78 bytes)
//======================================================================
char *__fastcall sub_2282B4(int a1, unsigned int a2)
{
  int v2; // r4
  char *v3; // r3
  char *result; // r0
  char *v5; // r4
  char *v6; // r2
  unsigned int v7; // r5

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *(char **)(a1 + 20);
  result = nullptr;
  v5 = &v3[8 * v2 - 8];
  while ( v3 <= v5 )
  {
    v6 = &v3[8 * ((v5 - v3) >> 4)];
    if ( *(_DWORD *)v6 == a2 )
      return *((char **)v6 + 1);
    v7 = (unsigned int)(2 * *(_DWORD *)v6) >> 1;
    if ( v7 == a2 )
    {
      if ( v3 == v5 )
        return *((char **)v6 + 1);
      result = &v3[8 * ((v5 - v3) >> 4)];
      goto LABEL_10;
    }
    if ( v3 == v5 )
      break;
    if ( v7 >= a2 )
LABEL_10:
      v5 = v6 - 8;
    else
      v3 = v6 + 8;
  }
  if ( result == nullptr )
    return result;
  v6 = result;
  return *((char **)v6 + 1);
}


//======================================================================
// sub_228308
// address: 0x00228308   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_228308(int a1, unsigned int *a2)
{
  unsigned int v3; // r3
  unsigned int v4; // r2
  unsigned int v5; // r4
  unsigned int v6; // r5
  _DWORD *v7; // r7
  int result; // r0
  unsigned int v9; // r0
  _DWORD *v10; // r3
  int v11; // [sp+0h] [bp-Ch]
  unsigned int v12; // [sp+4h] [bp-8h]

  v3 = 0;
  v4 = *a2 + 1;
  v12 = *(_DWORD *)(a1 + 16);
  v5 = v12;
  v11 = 0;
  while ( v3 < v5 )
  {
    v6 = ((v5 - v3) >> 1) + v3;
    v7 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 8 * v6);
    if ( *v7 == v4 )
    {
      result = v7[1];
      goto LABEL_13;
    }
    v9 = (unsigned int)(2 * *v7) >> 1;
    if ( v9 == v4 )
    {
      v11 = v7[1];
    }
    else if ( v9 < v4 )
    {
      v3 = v6 + 1;
      v6 = v5;
    }
    v5 = v6;
  }
  result = v11;
  if ( v11 == 0 )
  {
    v4 = 0;
    if ( v3 < v12 )
    {
      v10 = (_DWORD *)(*(_DWORD *)(a1 + 20) + 8 * v3);
      result = v10[1];
      v4 = (unsigned int)(2 * *v10) >> 1;
    }
  }
LABEL_13:
  *a2 = v4;
  return result;
}


//======================================================================
// sub_228370
// address: 0x00228370   size: 0x20 (32 bytes)
//======================================================================
char *__fastcall sub_228370(unsigned int a1)
{
  return &aNull_3[word_4363AC[a1 <= 0x101 ? a1 : 0]];
}


//======================================================================
// sub_228398
// address: 0x00228398   size: 0x20 (32 bytes)
//======================================================================
char *__fastcall sub_228398(unsigned int a1)
{
  if ( a1 > 0x186 )
    return nullptr;
  else
    return &aNull_3[word_4365B0[a1]];
}


//======================================================================
// sub_2283C0
// address: 0x002283C0   size: 0xC (12 bytes)
//======================================================================
const char *__fastcall sub_2283C0(int a1, char *a2)
{
  return ft_service_list_lookup((const char *)&off_452A68, a2);
}


//======================================================================
// sub_2283D0
// address: 0x002283D0   size: 0xBC (188 bytes)
//======================================================================
int __fastcall sub_2283D0(unsigned __int8 *a1, unsigned int a2)
{
  int v3; // r2
  int v4; // r4
  int v5; // r5
  _BYTE *v6; // r3
  unsigned __int8 *i; // r2
  int v8; // r5
  char v9; // r1
  int result; // r0
  _BYTE *v11; // r3
  unsigned __int8 *v12; // r1
  int v13; // [sp+4h] [bp-10h]
  int v14; // [sp+8h] [bp-Ch]

  v13 = *a1;
  v3 = 52;
  v4 = 0;
  while ( 1 )
  {
    if ( v4 >= v3 )
      return 0;
    v5 = (v4 + v3) >> 1;
    v6 = (char *)&unk_4368BE + ((byte_4368C0[2 * v5] << 8) | byte_4368C0[2 * v5 + 1]);
    v14 = *v6 & 0x7F;
    if ( v14 == v13 )
      break;
    if ( v14 < v13 )
      v4 = v5 + 1;
    else
      v3 = (v4 + v3) >> 1;
  }
  for ( i = a1 + 1; (unsigned int)i < a2; ++i )
  {
    v8 = *i;
    v9 = v6[1];
    if ( (unsigned __int8)*v6 <= 0x7Fu )
    {
      result = v9 & 0x7F;
      if ( (v6[1] & 0x80) != 0 )
        v11 = v6 + 3;
      else
        v11 = v6 + 1;
      v12 = v11 + 1;
      while ( result != 0 )
      {
        v6 = (char *)&unk_4368BE + ((*v12 << 8) | v12[1]);
        if ( v8 == (*v6 & 0x7F) )
          goto LABEL_11;
        --result;
        v12 += 2;
      }
      return result;
    }
    if ( v8 != (v9 & 0x7F) )
      return 0;
    ++v6;
LABEL_11:
    ;
  }
  if ( (unsigned __int8)*v6 > 0x7Fu )
    return 0;
  result = 0;
  if ( (unsigned __int8)v6[1] > 0x7Fu )
    return ((unsigned __int8)v6[2] << 8) | (unsigned __int8)v6[3];
  return result;
}


//======================================================================
// sub_228494
// address: 0x00228494   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall sub_228494(unsigned __int8 *a1)
{
  unsigned __int8 *v2; // r2
  unsigned __int8 *v3; // r5
  int result; // r0
  unsigned int v5; // r1
  int v6; // r2
  unsigned __int8 *v7; // r2
  int v8; // r1
  unsigned int v9; // r4
  unsigned __int8 *i; // r1
  int v11; // r2

  if ( *a1 != 117 )
  {
LABEL_16:
    for ( i = a1; ; ++i )
    {
      result = *i;
      if ( *i == 0 )
      {
        if ( a1 < i )
          return sub_2283D0(a1, (unsigned int)i);
        return result;
      }
      if ( result == 46 && i > a1 )
        break;
    }
    if ( i == nullptr )
      return 0;
    result = 0;
    if ( a1 < i )
      result = sub_2283D0(a1, (unsigned int)i);
    return result | 0x80000000;
  }
  if ( a1[1] == 110 && a1[2] == 105 )
  {
    v2 = a1 + 3;
    v3 = a1 + 7;
    result = 0;
    do
    {
      v5 = *v2 - 48;
      if ( v5 > 9 )
      {
        if ( (unsigned int)*v2 - 65 > 5 )
          goto LABEL_11;
        v5 = *v2 - 55;
      }
      ++v2;
      result = v5 + 16 * result;
    }
    while ( v2 != v3 );
    v6 = *v2;
    if ( v6 == 0 )
      return result;
    if ( v6 == 46 )
      return result | 0x80000000;
  }
LABEL_11:
  v7 = a1 + 1;
  v8 = 6;
  result = 0;
  while ( 1 )
  {
    v9 = *v7 - 48;
    if ( v9 > 9 )
      break;
LABEL_17:
    --v8;
    result = v9 + 16 * result;
    ++v7;
    if ( v8 == 0 )
      goto LABEL_18;
  }
  if ( (unsigned int)*v7 - 65 <= 5 )
  {
    v9 = *v7 - 55;
    goto LABEL_17;
  }
  if ( v8 > 2 )
    goto LABEL_16;
LABEL_18:
  v11 = *v7;
  if ( v11 != 0 )
  {
    if ( v11 == 46 )
      return result | 0x80000000;
    goto LABEL_16;
  }
  return result;
}


//======================================================================
// sub_22854C
// address: 0x0022854C   size: 0x14C (332 bytes)
//======================================================================
int __fastcall sub_22854C(
        int a1,
        int a2,
        unsigned int a3,
        int (__fastcall *a4)(int, int),
        void (__fastcall *a5)(int, char *),
        int a6)
{
  int v7; // r0
  int v8; // r3
  int *v9; // r4
  int v10; // r7
  int v11; // r6
  int v12; // r0
  int v13; // r3
  int i; // r3
  int v15; // r1
  unsigned int v16; // r4
  int v17; // r1
  char *v19; // [sp+Ch] [bp-78h]
  int v23[22]; // [sp+2Ch] [bp-58h] BYREF

  j_memset(&v23[1], 0, 0x28u);
  *(_DWORD *)(a2 + 16) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  v7 = ft_mem_realloc(a1, 8, 0, a3 + 10, 0, v23);
  v8 = v23[0];
  v9 = (int *)v7;
  *(_DWORD *)(a2 + 20) = v7;
  v10 = v8;
  if ( v8 == 0 )
  {
    while ( v10 != a3 )
    {
      v19 = (char *)a4(a6, v10);
      if ( v19 != nullptr )
      {
        v11 = 0;
        while ( j_strcmp(&aDelta[dword_4443D0[v11]], v19) != 0 )
        {
          if ( ++v11 == 10 )
            goto LABEL_9;
        }
        if ( v23[v11 + 1] == 0 )
        {
          v23[v11 + 1] = 1;
          v23[v11 + 11] = v10;
        }
LABEL_9:
        v12 = sub_228494((unsigned __int8 *)v19);
        if ( 2 * v12 != 0 )
        {
          v13 = 0;
          while ( v12 != dword_4443F8[v13] )
          {
            if ( ++v13 == 10 )
              goto LABEL_14;
          }
          v23[v13 + 1] = 2;
LABEL_14:
          *v9 = v12;
          v9[1] = v10;
          v9 += 2;
        }
        if ( a5 != nullptr )
          a5(a6, v19);
      }
      ++v10;
    }
    for ( i = 0; i != 10; ++i )
    {
      if ( v23[i + 1] == 1 )
      {
        *v9 = dword_4443F8[i];
        v9[1] = v23[i + 11];
        v9 += 2;
      }
    }
    v15 = *(_DWORD *)(a2 + 20);
    v16 = ((int)v9 - v15) >> 3;
    if ( v16 != 0 )
    {
      if ( v16 < a3 >> 1 )
      {
        *(_DWORD *)(a2 + 20) = ft_mem_realloc(a1, 8, a3, v16, *(_DWORD *)(a2 + 20), v23);
        v23[0] = 0;
      }
      j_qsort(*(void **)(a2 + 20), v16, 8u, (int (*)(const void *, const void *))sub_22828C);
    }
    else
    {
      ft_mem_free(a1, v15);
      v17 = v23[0];
      *(_DWORD *)(a2 + 20) = 0;
      if ( v17 == 0 )
        v23[0] = 163;
    }
    *(_DWORD *)(a2 + 16) = v16;
  }
  return v23[0];
}


//======================================================================
// sub_2286AC
// address: 0x002286AC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_2286AC(int result, int a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(result + 12);
  if ( v2 != 0 )
    *(_DWORD *)(*(_DWORD *)(result + 20) + 16 * (v2 + 0xFFFFFFF) + 12) = a2;
  return result;
}


//======================================================================
// sub_2286C8
// address: 0x002286C8   size: 0x5C (92 bytes)
//======================================================================
unsigned int *__fastcall sub_2286C8(unsigned int *result, unsigned int a2)
{
  _DWORD *v2; // r1
  int **v3; // r3
  unsigned int v4; // r2
  int *v5; // r4
  int v6; // r6
  unsigned int v7; // r3
  unsigned int v8; // r2

  if ( a2 < *result )
  {
    v2 = (_DWORD *)(result[2] + 28 * a2);
    if ( (v2[4] & 4) == 0 )
    {
      v2[4] |= 4u;
      v3 = (int **)result[4];
      v4 = result[1];
      v2[5] = 0;
      while ( v4 != 0 )
      {
        v5 = *v3;
        v6 = **v3;
        if ( v2[1] + *v2 >= v6 && v6 + v5[1] >= *v2 )
        {
          v2[5] = v5;
          break;
        }
        --v4;
        ++v3;
      }
      v7 = result[1];
      if ( v7 < *result )
      {
        v8 = result[4];
        result[1] = v7 + 1;
        *(_DWORD *)(4 * v7 + v8) = v2;
      }
    }
  }
  return result;
}


//======================================================================
// sub_228724
// address: 0x00228724   size: 0xB0 (176 bytes)
//======================================================================
int *__fastcall sub_228724(int *result, int *a2)
{
  unsigned __int8 *v2; // r4
  int v3; // r3
  int v4; // r2
  int v5; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r2
  int v9; // r6
  int v10; // r7
  int v11; // r1
  int v12; // r2
  _DWORD **v13; // r1
  _DWORD *v14; // r5
  int v15; // r12
  _DWORD *v16; // r7
  int v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch]
  int v19; // [sp+Ch] [bp-8h]
  _DWORD **v20; // [sp+Ch] [bp-8h]

  v2 = (unsigned __int8 *)a2[2];
  v3 = *result;
  v4 = result[2];
  v19 = *a2;
  while ( v3 != 0 )
  {
    v5 = *(_DWORD *)(v4 + 16);
    *(_DWORD *)(v4 + 24) = -1;
    --v3;
    *(_DWORD *)(v4 + 16) = v5 & 0xFFFFFFFB;
    v4 += 28;
  }
  v6 = 0;
  v18 = 0;
  v7 = 0;
  while ( v6 != v19 )
  {
    if ( v7 == 0 )
    {
      v8 = *v2++;
      v18 = v8;
      v7 = 128;
    }
    if ( (v7 & v18) != 0 )
    {
      v17 = result[2] + 28 * v6;
      v9 = *(_DWORD *)(v17 + 16);
      if ( (v9 & 4) == 0 )
      {
        *(_DWORD *)(v17 + 16) = v9 | 4;
        if ( v3 < (unsigned int)*result )
        {
          v10 = 4 * v3++;
          *(_DWORD *)(v10 + result[3]) = v17;
        }
      }
    }
    v7 >>= 1;
    ++v6;
  }
  v11 = result[3];
  result[1] = v3;
  v12 = 1;
  v13 = (_DWORD **)(v11 + 4);
  while ( v12 < v3 )
  {
    v14 = *v13;
    v15 = v12 - 1;
    v20 = v13;
    while ( 1 )
    {
      result = (int *)v15;
      if ( v15 < 0 )
        break;
      result = (int *)(v20 - 1);
      v16 = *--v20;
      if ( *v16 < *v14 )
        break;
      *result = (int)v14;
      result[1] = (int)v16;
      --v15;
    }
    ++v12;
    ++v13;
  }
  return result;
}


//======================================================================
// sub_2287D4
// address: 0x002287D4   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_2287D4(int a1, int a2)
{
  int v2; // r2
  int v3; // r3
  int result; // r0

  v2 = (a1 + (a1 >> 31)) ^ (a1 >> 31);
  v3 = (a2 + (a2 >> 31)) ^ (a2 >> 31);
  if ( 12 * v3 >= v2 )
  {
    result = 4;
    if ( 12 * v2 < v3 )
      return (~a2 >> 31) | 1;
  }
  else if ( a1 < 0 )
  {
    return -2;
  }
  else
  {
    return 2;
  }
  return result;
}


//======================================================================
// sub_22880C
// address: 0x0022880C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_22880C(int *a1, int a2)
{
  int *v2; // r2
  _DWORD *v3; // r3
  int result; // r0
  int v5; // r5

  v2 = *(int **)(a1[5] + 4);
  v3 = (_DWORD *)a1[2];
  for ( result = *a1; result != 0; --result )
  {
    v3[4] = 0;
    v3[8] = 0;
    if ( a2 != 0 )
    {
      v3[9] = v2[1];
      v5 = *v2;
    }
    else
    {
      v3[9] = *v2;
      v5 = v2[1];
    }
    v3[10] = v5;
    v3 += 12;
    v2 += 2;
  }
  return result;
}


//======================================================================
// sub_22883E
// address: 0x0022883E   size: 0x158 (344 bytes)
//======================================================================
int __fastcall sub_22883E(int result, int a2, int a3, int a4, int a5)
{
  int v5; // r5
  int *v6; // r1
  int v7; // r2
  int v8; // r6
  int v9; // r4
  int i; // r4
  _DWORD *v11; // r7
  int v12; // r7
  int v13; // r6
  int j; // r6
  _DWORD *v15; // r7
  int v16; // r6
  _DWORD *v17; // r7
  int v18; // r2
  int *v19; // r6
  int v20; // [sp+4h] [bp-10h]
  int m; // [sp+8h] [bp-Ch]
  int k; // [sp+8h] [bp-Ch]

  v5 = *(_DWORD *)(result + 4);
  v6 = (int *)(a2 + 16);
  v20 = *(_DWORD *)(result + 12);
  while ( a3 != 0 )
  {
    v7 = *v6;
    result = v6[5];
    if ( (*v6 & 0x10) != 0 )
      goto LABEL_50;
    v8 = *((char *)v6 + 4);
    if ( v8 == a5 )
    {
LABEL_24:
      if ( v8 != 0 )
      {
LABEL_10:
        for ( i = 0; i != v5; ++i )
        {
          v11 = *(_DWORD **)(v20 + 4 * i);
          if ( result - *v11 < a4 && *v11 - result < a4 )
          {
            result = 528;
            goto LABEL_23;
          }
        }
        goto LABEL_50;
      }
LABEL_25:
      if ( (v7 & 0x40) != 0 )
      {
        v12 = 128;
        if ( a5 == 2 )
        {
          v12 = 256;
          v13 = 128;
        }
        else
        {
          v13 = 256;
        }
        if ( (v13 & v7) != 0 )
        {
          for ( j = 0; j != v5; ++j )
          {
            v15 = *(_DWORD **)(v20 + 4 * j);
            if ( result - *v15 < a4 && *v15 - result < a4 )
            {
              v6[4] = (int)v15;
              v16 = 528;
              goto LABEL_43;
            }
          }
        }
        else if ( (v7 & v12) != 0 )
        {
          for ( k = 0; k != v5; ++k )
          {
            v17 = *(_DWORD **)(v20 + 4 * k);
            if ( result - *v17 - v17[1] < a4 && v17[1] - (result - *v17) < a4 )
            {
              v6[4] = (int)v17;
              v16 = 1040;
LABEL_43:
              *v6 = v7 | v16;
              break;
            }
          }
        }
        v18 = v6[4];
        if ( v18 == 0 )
        {
          while ( v18 != v5 )
          {
            v19 = *(int **)(v20 + 4 * v18);
            if ( result >= *v19 && result <= *v19 + v19[1] )
            {
              v6[4] = (int)v19;
              goto LABEL_50;
            }
            ++v18;
          }
        }
      }
      goto LABEL_50;
    }
    v9 = -a5;
    if ( v8 != -a5 )
    {
      v8 = *((char *)v6 + 5);
      if ( v8 == a5 )
        goto LABEL_24;
      if ( v8 != v9 )
        goto LABEL_25;
    }
    if ( v8 == 0 )
      goto LABEL_25;
    if ( v8 == a5 )
      goto LABEL_10;
    if ( v8 == v9 )
    {
      for ( m = 0; m != v5; ++m )
      {
        v11 = *(_DWORD **)(v20 + 4 * m);
        if ( result - *v11 - v11[1] < a4 && v11[1] - (result - *v11) < a4 )
        {
          result = 1040;
LABEL_23:
          *v6 = v7 | result;
          v6[4] = (int)v11;
          break;
        }
      }
    }
LABEL_50:
    v6 += 12;
    --a3;
  }
  return result;
}


//======================================================================
// sub_228996
// address: 0x00228996   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_228996(int a1)
{
  return a1 + 100;
}


//======================================================================
// sub_22899A
// address: 0x0022899A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_22899A(int a1)
{
  return a1 + 112;
}


//======================================================================
// sub_22899E
// address: 0x0022899E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_22899E(int a1)
{
  return a1 + 140;
}


//======================================================================
// sub_2289A2
// address: 0x002289A2   size: 0x5A (90 bytes)
//======================================================================
unsigned int __fastcall sub_2289A2(unsigned int result, int a2)
{
  _DWORD *v2; // r4
  int v3; // r7
  _DWORD *v4; // r5
  int v5; // r6
  unsigned int v6; // r0
  int *v7; // r4
  int i; // r7
  unsigned int v9; // r3

  v2 = (_DWORD *)(result + 204 * a2);
  v3 = v2[1];
  v4 = v2 + 1;
  v5 = v2[50];
  if ( v3 != 0 )
  {
    v6 = FT_MulFix(v2[2], v2[50]);
    v2[3] = v6;
    result = (v6 + 32) & 0xFFFFFFC0;
    v2[4] = result;
    v7 = v2 + 5;
    for ( i = v3 - 1; i != 0; --i )
    {
      result = FT_MulFix(*v7, v5);
      v9 = v4[2];
      if ( (int)((result - v9 + ((int)(result - v9) >> 31)) ^ ((int)(result - v9) >> 31)) > 127 )
        v9 = result;
      v7[1] = v9;
      v7[2] = (v9 + 32) & 0xFFFFFFC0;
      v7 += 3;
    }
  }
  return result;
}


//======================================================================
// sub_2289FC
// address: 0x002289FC   size: 0x1A6 (422 bytes)
//======================================================================
int __fastcall sub_2289FC(unsigned int a1, int a2, int a3, int a4, int a5)
{
  _DWORD *v6; // r0
  _DWORD *v8; // r2
  _DWORD *v9; // r3
  int i; // r5
  int v11; // r6
  int *v12; // r3
  int *v13; // r5
  unsigned int v14; // r0
  int v15; // r3
  int *v16; // r3
  int v17; // r5
  _DWORD *v18; // r5
  _DWORD *v19; // r6
  int m; // [sp+0h] [bp-14h]
  int j; // [sp+4h] [bp-10h]
  int *v23; // [sp+8h] [bp-Ch]
  int k; // [sp+Ch] [bp-8h]

  v6 = (_DWORD *)(a1 + 200);
  v8 = (_DWORD *)(a1 + 204);
  if ( a2 != *v6 || a4 != *v8 )
  {
    *v6 = a2;
    *v8 = a4;
    sub_2289A2(a1, 0);
  }
  v9 = (_DWORD *)(a1 + 408);
  if ( a3 != *(_DWORD *)(a1 + 404) || a5 != *v9 )
  {
    *(_DWORD *)(a1 + 404) = a3;
    *v9 = a5;
    sub_2289A2(a1, 1);
    *(_BYTE *)(a1 + 2492) = a3 <= 34359737 && 125 * a3 < 8 * *(_DWORD *)(a1 + 2476);
    for ( i = *(_DWORD *)(a1 + 2480); i > 0 && (int)FT_MulFix(i, a3) > 32; --i )
      ;
    v11 = 0;
    *(_DWORD *)(a1 + 2484) = i;
    do
    {
      if ( v11 == 1 )
      {
        v12 = (int *)(a1 + 928);
      }
      else if ( v11 != 0 )
      {
        v12 = (int *)(a1 + 1444);
        if ( v11 != 2 )
          v12 = (int *)(a1 + 1960);
      }
      else
      {
        v12 = (int *)(a1 + 412);
      }
      v13 = v12 + 1;
      for ( j = *v12; j != 0; --j )
      {
        v13[7] = FT_MulFix(v13[2], a3) + a5;
        v13[6] = FT_MulFix(v13[3], a3) + a5;
        v13[4] = FT_MulFix(*v13, a3) + a5;
        v14 = FT_MulFix(v13[1], a3);
        v15 = v13[4];
        v13[5] = v14;
        v13[4] = (v15 + 32) & 0xFFFFFFC0;
        v13 += 8;
      }
      ++v11;
    }
    while ( v11 != 4 );
    do
    {
      if ( j != 0 )
      {
        v16 = (int *)(a1 + 928);
        v17 = 1960;
      }
      else
      {
        v16 = (int *)(a1 + 412);
        v17 = 1444;
      }
      v23 = (int *)(a1 + v17);
      v18 = v16 + 1;
      for ( k = *v16; k != 0; --k )
      {
        v19 = v23 + 1;
        for ( m = *v23; m != 0; --m )
        {
          if ( (int)FT_MulFix((*v18 - *v19 + ((*v18 - *v19) >> 31)) ^ ((*v18 - *v19) >> 31), a3) <= 63 )
          {
            v18[7] = v19[7];
            v18[6] = v19[6];
            v18[4] = v19[4];
            v18[5] = v19[5];
            break;
          }
          v19 += 8;
        }
        v18 += 8;
      }
      ++j;
    }
    while ( j != 2 );
  }
  return 0;
}


//======================================================================
// sub_228BB8
// address: 0x00228BB8   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_228BB8(_DWORD *a1)
{
  _DWORD *v1; // r6
  _DWORD *v2; // r4
  int v3; // r5

  v1 = a1 + 3;
  v2 = a1;
  v3 = a1[2];
  j_memset(a1 + 3, 0, 0x58u);
  v2[25] = sub_2292C0;
  v2[3] = v3;
  v2[26] = sub_2289FC;
  v2[27] = sub_228F0C;
  j_memset(v2 + 28, 0, 0x1Cu);
  v2[29] = sub_22A37E;
  v2[30] = sub_22A394;
  v2[31] = sub_22A3CE;
  v2[32] = sub_229594;
  v2[33] = sub_22A3FE;
  v2[34] = ps_hints_apply;
  v2[28] = v1;
  v2 += 35;
  j_memset(v2, 0, 0x1Cu);
  v2[6] = ps_hints_apply;
  *v2 = v1;
  v2[1] = sub_22A368;
  v2[2] = sub_22A394;
  v2[3] = sub_22951E;
  v2[4] = sub_22A53E;
  v2[5] = sub_22A4F0;
  return 0;
}


//======================================================================
// sub_228C84
// address: 0x00228C84   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_228C84(unsigned int *a1, int a2, _DWORD *a3)
{
  unsigned int v3; // r5
  unsigned int v5; // r2
  int result; // r0
  _DWORD *v8; // r6
  int v9; // [sp+0h] [bp-1Ch]
  unsigned int v10; // [sp+Ch] [bp-10h]
  int v11; // [sp+14h] [bp-8h] BYREF

  v3 = *a1;
  v5 = a1[1];
  v10 = *a1 + 1;
  if ( v10 > v5 )
  {
    v8 = nullptr;
    v9 = a1[2];
    v11 = 0;
    a1[2] = ft_mem_realloc(a2, 16, v5, (v3 + 8) & 0xFFFFFFF8, v9, &v11);
    result = v11;
    if ( v11 != 0 )
      goto LABEL_5;
    a1[1] = (v3 + 8) & 0xFFFFFFF8;
  }
  result = 0;
  v8 = (_DWORD *)(a1[2] + 16 * v3);
  *v8 = 0;
  v8[3] = 0;
  *a1 = v10;
LABEL_5:
  *a3 = v8;
  return result;
}


//======================================================================
// sub_228CDE
// address: 0x00228CDE   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_228CDE(int a1, int a2, int a3)
{
  unsigned int v5; // r2
  unsigned int v6; // r5
  int v7; // r0
  int v8; // r3
  int v10; // [sp+Ch] [bp-8h] BYREF

  v5 = (unsigned int)(*(_DWORD *)(a1 + 4) + 7) >> 3;
  v10 = 0;
  if ( (unsigned int)(a2 + 7) >> 3 > v5 )
  {
    v6 = (((unsigned int)(a2 + 7) >> 3) + 7) & 0x3FFFFFF8;
    v7 = ft_mem_realloc(a3, 1, v5, v6, *(_DWORD *)(a1 + 8), &v10);
    v8 = v10;
    *(_DWORD *)(a1 + 8) = v7;
    if ( v8 == 0 )
      *(_DWORD *)(a1 + 4) = 8 * v6;
  }
  return v10;
}


//======================================================================
// sub_228D20
// address: 0x00228D20   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_228D20(int *a1, int a2, int a3)
{
  int v5; // r6
  int result; // r0

  if ( a2 >= 0 )
  {
    if ( a2 >= (unsigned int)*a1 )
    {
      v5 = a2 + 1;
      result = sub_228CDE((int)a1, a2 + 1, a3);
      if ( result != 0 )
        return result;
      *a1 = v5;
    }
    *(_BYTE *)(a1[2] + (a2 >> 3)) |= 128 >> (a2 & 7);
  }
  return 0;
}


//======================================================================
// sub_228D58
// address: 0x00228D58   size: 0xF6 (246 bytes)
//======================================================================
int *__fastcall sub_228D58(unsigned int *a1, int a2, int a3, int a4, unsigned int *a5)
{
  int v6; // r5
  int v7; // r1
  unsigned int v8; // r7
  unsigned int v9; // r6
  _DWORD *i; // r3
  unsigned int v11; // r2
  int *result; // r0
  _DWORD *v13; // r3
  unsigned int v14; // r7
  unsigned int v15; // r3
  unsigned int v16; // [sp+8h] [bp-1Ch]
  int v17; // [sp+Ch] [bp-18h]
  int v18; // [sp+10h] [bp-14h]
  int *v20[2]; // [sp+1Ch] [bp-8h] BYREF

  v17 = a2;
  v6 = a3;
  v18 = 0;
  if ( a3 < 0 )
  {
    if ( a3 == -21 )
    {
      v17 = a2 - 21;
      v18 = 3;
    }
    else
    {
      v18 = 1;
    }
    v6 = 0;
  }
  if ( a5 != nullptr )
    *a5 = -1;
  v7 = a1[2];
  v8 = *a1;
  v9 = 0;
  for ( i = (_DWORD *)v7; ; i += 3 )
  {
    if ( v9 == v8 )
      goto LABEL_14;
    if ( *i == v17 && i[1] == v6 )
      break;
    ++v9;
  }
  if ( v9 < v8 )
  {
LABEL_20:
    v15 = a1[3];
    if ( v15 != 0 )
    {
      result = nullptr;
      v20[0] = (int *)(a1[5] + 16 * (v15 + 0xFFFFFFF));
    }
    else
    {
      result = (int *)sub_228C84(a1 + 3, a4, v20);
    }
    if ( result == nullptr )
    {
      result = (int *)sub_228D20(v20[0], v9, a4);
      if ( result == nullptr && a5 != nullptr )
        *a5 = v9;
    }
    return result;
  }
LABEL_14:
  v16 = v8 + 1;
  v11 = a1[1];
  if ( v8 + 1 >= v11 )
  {
    v20[0] = nullptr;
    if ( v16 > v11 )
    {
      v14 = (v8 + 8) & 0xFFFFFFF8;
      a1[2] = ft_mem_realloc(a4, 12, v11, v14, v7, (int *)v20);
      if ( v20[0] == nullptr )
        a1[1] = v14;
    }
    result = v20[0];
    if ( v20[0] != nullptr )
      return result;
  }
  v13 = (_DWORD *)(a1[2] + 12 * v16 - 12);
  *a1 = v16;
  v13[1] = v6;
  v13[2] = v18;
  *v13 = v17;
  goto LABEL_20;
}


//======================================================================
// sub_228E54
// address: 0x00228E54   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_228E54(_DWORD *a1, int a2)
{
  int result; // r0

  ft_mem_free(a2, a1[6]);
  a1[6] = 0;
  a1[5] = 0;
  a1[7] = 0;
  ft_mem_free(a2, a1[3]);
  a1[3] = 0;
  result = ft_mem_free(a2, a1[2]);
  a1[2] = 0;
  a1[1] = 0;
  *a1 = 0;
  a1[4] = 0;
  return result;
}


//======================================================================
// sub_228E86
// address: 0x00228E86   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_228E86(_DWORD *a1, int a2)
{
  int v2; // r6
  _DWORD *v3; // r4
  int result; // r0

  v2 = a1[1];
  v3 = (_DWORD *)a1[2];
  while ( v2 != 0 )
  {
    ft_mem_free(a2, v3[2]);
    v3[2] = 0;
    *v3 = 0;
    v3[1] = 0;
    v3[3] = 0;
    --v2;
    v3 += 4;
  }
  result = ft_mem_free(a2, a1[2]);
  a1[2] = 0;
  *a1 = 0;
  a1[1] = 0;
  return result;
}


//======================================================================
// sub_228EBA
// address: 0x00228EBA   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_228EBA(_DWORD *a1, int a2)
{
  int result; // r0

  sub_228E86(a1 + 6, a2);
  sub_228E86(a1 + 3, a2);
  result = ft_mem_free(a2, a1[2]);
  a1[2] = 0;
  *a1 = 0;
  a1[1] = 0;
  return result;
}


//======================================================================
// sub_228EE2
// address: 0x00228EE2   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_228EE2(_DWORD *a1)
{
  int v1; // r6
  int result; // r0

  a1[28] = 0;
  a1[35] = 0;
  v1 = a1[3];
  sub_228EBA(a1 + 7, v1);
  result = sub_228EBA(a1 + 16, v1);
  a1[4] = 0;
  a1[3] = 0;
  return result;
}


//======================================================================
// sub_228F0C
// address: 0x00228F0C   size: 0x2E (46 bytes)
//======================================================================
int *__fastcall sub_228F0C(int *result)
{
  int *v1; // r1
  int v2; // r0

  v1 = result;
  if ( result != nullptr )
  {
    v2 = *result;
    v1[1] = 0;
    v1[52] = 0;
    v1[103] = 0;
    v1[232] = 0;
    v1[361] = 0;
    v1[490] = 0;
    return (int *)ft_mem_free(v2, (int)v1);
  }
  return result;
}


//======================================================================
// sub_228F40
// address: 0x00228F40   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_228F40(unsigned int *a1, int a2)
{
  unsigned int v3; // r2
  int result; // r0

  v3 = *a1;
  result = 0;
  if ( a2 < v3 )
    return (128 >> (a2 & 7)) & *(unsigned __int8 *)(a1[2] + (a2 >> 3));
  return result;
}


//======================================================================
// sub_228F60
// address: 0x00228F60   size: 0x152 (338 bytes)
//======================================================================
int __fastcall sub_228F60(int *a1, int a2)
{
  int v3; // r6
  _BYTE **v4; // r2
  unsigned int v5; // r3
  _BYTE *v6; // r4
  _BYTE *v7; // r0
  int v8; // r5
  unsigned int *v9; // r4
  int *v10; // r6
  int v11; // r5
  int v12; // r6
  size_t v13; // r6
  unsigned int *v14; // r4
  int v15; // r2
  unsigned int v16; // r1
  int i; // r3
  int result; // r0
  int v20; // [sp+0h] [bp-24h]
  int v21; // [sp+8h] [bp-1Ch]
  unsigned int v22; // [sp+8h] [bp-1Ch]
  unsigned int v23; // [sp+Ch] [bp-18h]
  unsigned int v24; // [sp+Ch] [bp-18h]
  int v25; // [sp+14h] [bp-10h]
  int v26; // [sp+18h] [bp-Ch]

  v3 = *a1 - 1;
  v25 = 16 * (*a1 + 0xFFFFFFF);
  while ( v3 > 0 )
  {
    v26 = v3 - 1;
    v20 = a1[2];
    v4 = (_BYTE **)(v20 + v25 - 8);
    v21 = v3 - 1;
    while ( 2 )
    {
      v5 = (unsigned int)*(v4 - 2);
      v6 = *v4;
      if ( v5 > *(_DWORD *)(v20 + v25) )
        v5 = *(_DWORD *)(v20 + v25);
      v7 = *(_BYTE **)(v20 + v25 + 8);
      while ( v5 > 7 )
      {
        if ( (*v7 & *v6) != 0 )
          goto LABEL_10;
        ++v7;
        ++v6;
        v5 -= 8;
      }
      if ( v5 != 0 && ((unsigned __int8)(*v6 & *v7) & ~(255 >> v5)) != 0 )
      {
LABEL_10:
        v8 = v21;
        if ( v21 <= v3 )
        {
          v21 = v3;
          v3 = v8;
        }
        if ( v3 < v21 && v21 < *a1 )
        {
          v9 = (unsigned int *)(v20 + 16 * v21);
          v10 = (int *)(v20 + 16 * v3);
          v11 = *v10;
          v23 = *v9;
          if ( *v9 != 0 )
          {
            if ( v23 > v11 )
            {
              result = sub_228CDE((int)v10, v23, a2);
              if ( result != 0 )
                return result;
              do
              {
                if ( v11 < (unsigned int)*v10 )
                  *(_BYTE *)(v10[2] + (v11 >> 3)) &= ~(128 >> (v11 & 7));
                ++v11;
              }
              while ( v11 != v23 );
            }
            v15 = v10[2];
            v16 = v9[2];
            for ( i = 0; i != (v23 + 7) >> 3; ++i )
              *(_BYTE *)(v15 + i) |= *(_BYTE *)(v16 + i);
          }
          *v9 = 0;
          v9[3] = 0;
          v12 = *a1 - 1 - v21;
          if ( v12 > 0 )
          {
            v13 = 4 * v12;
            v24 = v9[2];
            v22 = v9[1];
            j_memmove(v9, v9 + 4, v13 * 4);
            v14 = &v9[v13];
            *v14 = 0;
            v14[1] = v22;
            v14[2] = v24;
            v14[3] = 0;
          }
          --*a1;
        }
        break;
      }
      v4 -= 4;
      if ( v21-- != 0 )
        continue;
      break;
    }
    v3 = v26;
    v25 -= 16;
  }
  return 0;
}


//======================================================================
// sub_2290B8
// address: 0x002290B8   size: 0xD8 (216 bytes)
//======================================================================
unsigned int __fastcall sub_2290B8(int a1, unsigned int a2, __int16 *a3, int *a4, int *a5)
{
  int i; // r3
  unsigned int result; // r0
  int v8; // r1
  int v9; // r6
  int v10; // r6
  _DWORD *v11; // r0
  int v12; // r5
  int v13; // r3
  int v14; // r3
  int v15; // r7
  int v16; // r3
  int v17; // r7
  int v18; // r7
  _DWORD *j; // [sp+4h] [bp-20h]
  int v21; // [sp+8h] [bp-1Ch]
  int v22; // [sp+Ch] [bp-18h]
  int v23; // [sp+10h] [bp-14h]
  int v25; // [sp+18h] [bp-Ch]

  v22 = *a4;
  v23 = *a5;
  for ( i = 1; ; i = 0 )
  {
    result = a2;
    if ( a2 <= 1 )
      break;
    v8 = a3[1];
    v9 = *a3;
    if ( (i | a1) != 0 )
    {
      v21 = a3[1];
      v10 = v9 - v8;
      v11 = a5 + 1;
      v12 = v23;
      v25 = 0;
    }
    else
    {
      v21 = *a3;
      v11 = a4 + 1;
      v10 = v8 - v9;
      v12 = v22;
      v25 = 1;
    }
    while ( 1 )
    {
      if ( v12 == 0 || v21 < *v11 )
      {
        for ( j = &v11[8 * v12]; ; j[15] = v18 )
        {
          j -= 8;
          if ( v12 == 0 )
            break;
          --v12;
          v14 = j[1];
          v15 = j[2];
          j[8] = *j;
          j[9] = v14;
          j[10] = v15;
          v16 = j[4];
          v17 = j[5];
          j[11] = j[3];
          j[12] = v16;
          j[13] = v17;
          v18 = j[7];
          j[14] = j[6];
        }
        *v11 = v21;
        v11[1] = v10;
        if ( v25 != 0 )
          ++v22;
        else
          ++v23;
        goto LABEL_22;
      }
      if ( v21 == *v11 )
        break;
      --v12;
      v11 += 8;
    }
    v13 = v11[1];
    if ( v10 >= 0 )
    {
      if ( v10 <= v13 )
        goto LABEL_22;
    }
    else if ( v10 >= v13 )
    {
      goto LABEL_22;
    }
    v11[1] = v10;
LABEL_22:
    a3 += 2;
    a2 -= 2;
  }
  *a4 = v22;
  *a5 = v23;
  return result;
}


//======================================================================
// sub_229190
// address: 0x00229190   size: 0x128 (296 bytes)
//======================================================================
int __fastcall sub_229190(int *a1, unsigned int a2, __int16 *a3, unsigned int a4, __int16 *a5, int a6, int a7)
{
  int *v8; // r5
  int *v9; // r4
  int v10; // r2
  int *v11; // r3
  int v12; // r1
  int v13; // r0
  int v14; // r6
  int v15; // r6
  int v16; // r1
  int *v17; // r3
  int v18; // r0
  int v19; // r6
  int result; // r0
  int *v21; // r3
  int v22; // r6
  int v23; // r12
  int v24; // r0
  int v25; // r0
  int *v26; // r1
  int v27; // [sp+Ch] [bp-18h]
  int v28; // [sp+10h] [bp-14h]
  int v29; // [sp+14h] [bp-10h]

  if ( a7 != 0 )
  {
    v8 = a1 + 258;
    v9 = a1 + 387;
  }
  else
  {
    v8 = a1;
    v9 = a1 + 129;
  }
  *v8 = 0;
  *v9 = 0;
  sub_2290B8(0, a2, a3, v8, v9);
  sub_2290B8(1, a4, a5, v8, v9);
  v10 = *v8;
  v29 = *v9;
  if ( *v8 > 0 )
  {
    v11 = v8 + 1;
    v12 = *v8;
    do
    {
      v13 = *v11;
      if ( v12 != 1 )
      {
        v14 = v11[8] - v13;
        if ( v11[1] > v14 )
          v11[1] = v14;
      }
      v15 = v11[1];
      v11[3] = v13;
      --v12;
      v11[2] = v15 + v13;
      v11 += 8;
    }
    while ( v12 != 0 );
  }
  if ( v29 > 0 )
  {
    v16 = v29;
    v17 = v9 + 1;
    do
    {
      v18 = *v17;
      if ( v16 != 1 )
      {
        v22 = v18 - v17[8];
        if ( v17[1] < v22 )
          v17[1] = v22;
      }
      v19 = v17[1];
      v17[2] = v18;
      --v16;
      v17[3] = v19 + v18;
      v17 += 8;
    }
    while ( v16 != 0 );
  }
  result = 2;
  v21 = v8 + 1;
  v27 = 2;
  while ( 1 )
  {
    if ( v10 != 0 )
    {
      v25 = v21[2];
      v21[3] -= a6;
      v28 = v10 - 1;
      v26 = v21 + 2;
      while ( v28 != 0 )
      {
        v23 = v26[9];
        if ( v23 - v25 >= 2 * a6 )
        {
          *v26 = v25 + a6;
          v26[9] = v23 - a6;
        }
        else
        {
          v24 = v25 + (v23 - v25) / 2;
          v26[9] = v24;
          *v26 = v24;
        }
        v25 = v26[8];
        v26 += 8;
        --v28;
      }
      result = v25 + a6;
      v21[8 * v10 + 2 - 8] = result;
    }
    v21 = v9 + 1;
    if ( --v27 == 0 )
      break;
    v10 = v29;
  }
  return result;
}


//======================================================================
// sub_2292C0
// address: 0x002292C0   size: 0x110 (272 bytes)
//======================================================================
int __fastcall sub_2292C0(int a1, int a2, _DWORD *a3)
{
  _DWORD *v5; // r0
  int v6; // r3
  _DWORD *v7; // r5
  int v8; // r6
  int v9; // r7
  int i; // r3
  int v11; // r7
  int v12; // r2
  int result; // r0
  int v14; // [sp+14h] [bp-18h]
  int v15; // [sp+18h] [bp-14h]
  int v17; // [sp+24h] [bp-8h] BYREF

  v5 = ft_mem_alloc(a1, 2496, &v17);
  v6 = v17;
  v7 = v5;
  if ( v17 == 0 )
  {
    *v5 = a1;
    v5[53] = *(unsigned __int16 *)(a2 + 120);
    v15 = *(unsigned __int8 *)(a2 + 124);
    while ( v15 != v6 )
    {
      v8 = 3 * v6;
      v9 = *(__int16 *)(a2 + 128 + 2 * v6++);
      v5[v8 + 56] = v9;
    }
    v5[52] = *(unsigned __int8 *)(a2 + 124) + 1;
    v5[2] = *(unsigned __int16 *)(a2 + 122);
    v14 = *(unsigned __int8 *)(a2 + 125);
    for ( i = 0; v14 != i; ++i )
    {
      v11 = 3 * i;
      v12 = *(__int16 *)(a2 + 154 + 2 * i);
      v5[v11 + 5] = v12;
    }
    v5[1] = *(unsigned __int8 *)(a2 + 125) + 1;
    sub_229190(
      v5 + 103,
      *(unsigned __int8 *)(a2 + 8),
      (__int16 *)(a2 + 12),
      *(unsigned __int8 *)(a2 + 9),
      (__int16 *)(a2 + 40),
      *(_DWORD *)(a2 + 116),
      0);
    sub_229190(
      v7 + 103,
      *(unsigned __int8 *)(a2 + 10),
      (__int16 *)(a2 + 60),
      *(unsigned __int8 *)(a2 + 11),
      (__int16 *)(a2 + 88),
      *(_DWORD *)(a2 + 116),
      1);
    v7[619] = *(_DWORD *)(a2 + 108);
    v7[620] = *(_DWORD *)(a2 + 112);
    v7[622] = *(_DWORD *)(a2 + 116);
    v7[50] = 0;
    v7[51] = 0;
    v7[101] = 0;
    v7[102] = 0;
  }
  result = v17;
  *a3 = v7;
  return result;
}


//======================================================================
// sub_2293D8
// address: 0x002293D8   size: 0x104 (260 bytes)
//======================================================================
int __fastcall sub_2293D8(unsigned int *a1, int *a2, int *a3, int a4)
{
  int v4; // r5
  int v8; // r0
  int v9; // r2
  int v11; // r0
  int v12; // r2
  int v13; // r0
  int v14; // r3
  unsigned int v15; // r1
  _DWORD *v16; // r2
  _DWORD *v17; // r3
  int v18; // r1
  unsigned int v19; // r5
  unsigned int v20; // r4
  int v21; // r1
  int *v22; // r7
  unsigned int v23; // r4
  int v24; // r5
  int v25; // r3
  int i; // [sp+8h] [bp-1Ch]
  unsigned __int8 *v28; // [sp+Ch] [bp-18h]
  int v29; // [sp+10h] [bp-14h]
  int v30; // [sp+10h] [bp-14h]
  int v31; // [sp+14h] [bp-10h]
  int v32[2]; // [sp+1Ch] [bp-8h] BYREF

  v4 = *a2;
  v29 = 2 * *a2;
  v8 = ft_mem_realloc(a4, 4, 0, v29, 0, v32);
  v9 = v32[0];
  a1[3] = v8;
  if ( v9 == 0 )
  {
    v11 = ft_mem_realloc(a4, 28, 0, v4, 0, v32);
    v12 = v32[0];
    a1[2] = v11;
    if ( v12 == 0 )
    {
      v13 = ft_mem_realloc(a4, 16, 0, v29 + 1, 0, v32);
      v14 = v32[0];
      a1[6] = v13;
      if ( v14 == 0 )
      {
        v15 = a1[3];
        *a1 = v4;
        a1[4] = v15 + 4 * v4;
        a1[1] = 0;
        a1[5] = 0;
        a1[7] = 0;
        v16 = (_DWORD *)a1[2];
        v17 = (_DWORD *)a2[2];
        while ( v4 != 0 )
        {
          --v4;
          *v16 = *v17;
          v16[1] = v17[1];
          v18 = v17[2];
          v17 += 3;
          v16[4] = v18;
          v16 += 7;
        }
        if ( a3 != nullptr )
        {
          v21 = *a3;
          v22 = (int *)a3[2];
          a1[8] = (unsigned int)a3;
          for ( i = v21; i != 0; --i )
          {
            v23 = 0;
            v28 = (unsigned __int8 *)v22[2];
            v31 = *v22;
            v30 = 0;
            v24 = 0;
            while ( v23 != v31 )
            {
              if ( v24 == 0 )
              {
                v24 = 128;
                v25 = *v28++;
                v30 = v25;
              }
              if ( (v30 & v24) != 0 )
                sub_2286C8(a1, v23);
              v24 >>= 1;
              ++v23;
            }
            v22 += 4;
          }
        }
        v19 = *a1;
        v20 = 0;
        if ( a1[1] != *a1 )
        {
          while ( v20 != v19 )
            sub_2286C8(a1, v20++);
        }
      }
    }
  }
  return v32[0];
}


//======================================================================
// sub_2294DC
// address: 0x002294DC   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall sub_2294DC(__int64 a1, int a2, int *a3)
{
  int *v3; // r4
  unsigned int *v6; // r7
  int *v7; // r0
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v3 = (int *)a1;
  if ( HIDWORD(a1) > 1 )
    HIDWORD(a1) = 1;
  if ( (unsigned int)(*(_DWORD *)(a1 + 12) - 1) <= 1 )
  {
    v6 = (unsigned int *)(a1 + 36 * HIDWORD(a1) + 16);
    while ( a2 != 0 )
    {
      v7 = sub_228D58(v6, *a3, a3[1], *v3, nullptr);
      if ( v7 != nullptr )
      {
        v3[1] = (int)v7;
        return v9;
      }
      --a2;
      a3 += 2;
    }
  }
  return v9;
}


//======================================================================
// sub_22951E
// address: 0x0022951E   size: 0x76 (118 bytes)
//======================================================================
int __fastcall sub_22951E(unsigned int a1, unsigned int a2, int a3, int a4)
{
  int result; // r0
  int v7; // r7
  int v8; // r5
  int v9; // r3
  int *v10; // r3
  int v11; // r2
  int v12; // [sp+4h] [bp-98h]
  int v13; // [sp+8h] [bp-94h]
  int v14; // [sp+Ch] [bp-90h]
  int v17; // [sp+18h] [bp-84h] BYREF
  char v18; // [sp+1Ch] [bp-80h] BYREF

  result = 0;
  v14 = 0;
  while ( a3 > 0 )
  {
    v7 = a3;
    if ( a3 > 16 )
      v7 = 16;
    v12 = 2 * v7;
    v8 = 0;
    do
    {
      v9 = *(_DWORD *)(a4 + 4 * v8);
      v13 = 4 * v8++;
      v14 += v9;
      *(int *)((char *)&v17 + v13) = (int)FT_RoundFix(v14) >> 16;
    }
    while ( v8 < v12 );
    v10 = (int *)&v18;
    v11 = 0;
    do
    {
      result = *v10;
      v11 += 2;
      *v10 -= *(v10 - 1);
      v10 += 2;
    }
    while ( v11 < v12 );
    if ( *(_DWORD *)(a1 + 4) == 0 )
      result = sub_2294DC(__SPAIR64__(a2, a1), v7, &v17);
    a3 -= v7;
  }
  return result;
}


//======================================================================
// sub_229594
// address: 0x00229594   size: 0xDE (222 bytes)
//======================================================================
int *__fastcall sub_229594(int *result, unsigned int a2, int *a3)
{
  int *v4; // r4
  int v5; // r2
  unsigned int *v6; // r7
  unsigned int *v7; // r5
  signed int v8; // r0
  unsigned int v9; // r6
  signed int v10; // [sp+8h] [bp-24h]
  int v11; // [sp+8h] [bp-24h]
  int v12; // [sp+Ch] [bp-20h]
  int v13; // [sp+10h] [bp-1Ch]
  int v14; // [sp+14h] [bp-18h]
  unsigned int *v15; // [sp+18h] [bp-14h] BYREF
  _DWORD v16[3]; // [sp+1Ch] [bp-10h] BYREF
  char v17; // [sp+28h] [bp-4h] BYREF

  v4 = result;
  if ( result[1] == 0 )
  {
    v12 = *result;
    if ( a2 > 1 )
      a2 = 1;
    v5 = result[3];
    result = (_DWORD *)&byte_6;
    if ( v5 == 1 )
    {
      v6 = (unsigned int *)&v4[9 * a2 + 4];
      v7 = v16;
      while ( 1 )
      {
        v10 = FT_RoundFix(*a3);
        v8 = FT_RoundFix(a3[1]);
        result = sub_228D58(v6, v10 >> 16, v8 >> 16, v12, v7);
        if ( result != nullptr )
          break;
        ++v7;
        a3 += 2;
        if ( v7 == (unsigned int *)&v17 )
        {
          v9 = v6[6];
          v11 = v16[0];
          v14 = v16[2];
          v13 = v16[1];
          v15 = (unsigned int *)v6[8];
          while ( v9 != 0 )
          {
            if ( sub_228F40(v15, v11) != 0 || sub_228F40(v15, v13) != 0 || sub_228F40(v15, v14) != 0 )
              goto LABEL_15;
            --v9;
            v15 += 4;
          }
          result = (int *)sub_228C84(v6 + 6, v12, &v15);
          if ( result != nullptr )
            break;
LABEL_15:
          result = (int *)sub_228D20((int *)v15, v11, v12);
          if ( result == nullptr )
          {
            result = (int *)sub_228D20((int *)v15, v13, v12);
            if ( result == nullptr )
            {
              result = (int *)sub_228D20((int *)v15, v14, v12);
              if ( result == nullptr )
                return result;
            }
          }
          break;
        }
      }
    }
    v4[1] = (int)result;
  }
  return result;
}


//======================================================================
// sub_229674
// address: 0x00229674   size: 0x2F8 (760 bytes)
//======================================================================
signed int __fastcall sub_229674(signed int result, int a2, int a3, _BYTE *a4)
{
  int v4; // r3
  signed int *v5; // r4
  int v6; // r5
  unsigned int v7; // r6
  signed int v8; // r5
  int v9; // r3
  int v10; // r2
  _DWORD *i; // r3
  int v12; // r1
  int v13; // r7
  signed int v14; // r3
  _DWORD *v15; // r2
  int v16; // r1
  _DWORD *v17; // r7
  int v18; // r6
  unsigned int v19; // r2
  unsigned int v20; // r2
  signed int v21; // r1
  int v22; // r0
  int v23; // r3
  unsigned int v24; // r1
  int v25; // r3
  int v26; // r2
  signed int v27; // r3
  int v28; // r2
  unsigned int v29; // r3
  signed int *v30; // [sp+4h] [bp-30h]
  int v31; // [sp+8h] [bp-2Ch]
  int v32; // [sp+8h] [bp-2Ch]
  int v34; // [sp+10h] [bp-24h]
  signed int v37; // [sp+1Ch] [bp-18h]
  _DWORD *v38; // [sp+20h] [bp-14h]
  _BOOL4 v39; // [sp+24h] [bp-10h]
  int v40; // [sp+28h] [bp-Ch]
  int v41; // [sp+2Ch] [bp-8h]

  v4 = a2 + 204 * a3;
  v41 = v4 + 4;
  v5 = (signed int *)result;
  v40 = *(_DWORD *)(v4 + 200);
  if ( (*(_DWORD *)(result + 16) & 8) == 0 )
  {
    v6 = *(_DWORD *)(v4 + 204);
    v7 = FT_MulFix(*(_DWORD *)result, *(_DWORD *)(v4 + 200)) + v6;
    v8 = FT_MulFix(v5[1], v40);
    if ( a3 != 0 )
    {
      v39 = false;
      if ( a3 == 1 )
      {
        if ( a4[121] == 0 )
        {
LABEL_7:
          result = v5[4];
          v5[2] = v7;
          v5[3] = v8;
          v9 = result | 8;
LABEL_79:
          v5[4] = v9;
          return result;
        }
        v39 = a4[123] != 0;
      }
    }
    else
    {
      if ( a4[120] == 0 )
        goto LABEL_7;
      v39 = a4[122] != 0;
    }
    v5[3] = v8;
    if ( a3 == 1 )
    {
      v37 = *v5;
      v31 = *v5 + v5[1];
      v38 = (_DWORD *)(a2 + 2488);
      v10 = *(_DWORD *)(a2 + 412);
      for ( i = (_DWORD *)(a2 + 416); ; i += 8 )
      {
        if ( v10 == 0 )
        {
          v34 = 0;
          v32 = 0;
          goto LABEL_23;
        }
        v12 = v31 - i[3];
        if ( v12 < -*v38 )
        {
          v13 = 0;
          v34 = 0;
          goto LABEL_21;
        }
        if ( v31 <= *v38 + i[2] )
          break;
        --v10;
      }
      if ( *(_BYTE *)(a2 + 2492) != 0 || v12 <= *(_DWORD *)(a2 + 2484) )
      {
        v13 = 1;
        v34 = i[4];
LABEL_21:
        v32 = v13;
        goto LABEL_23;
      }
      v34 = 0;
      v32 = 0;
LABEL_23:
      v14 = *(_DWORD *)(a2 + 928);
      result = 932;
      v15 = (_DWORD *)(a2 + 32 * (v14 - 1) + 932);
      v30 = (signed int *)(a2 + 2488);
      while ( v14 != 0 )
      {
        v16 = v15[2] - v37;
        result = *v30;
        if ( v16 < -*v30 )
        {
          v14 = 0;
          break;
        }
        result = v15[3] - result;
        if ( v37 >= result )
        {
          result = *(unsigned __int8 *)(a2 + 2492);
          if ( *(_BYTE *)(a2 + 2492) != 0 || (result = *(_DWORD *)(a2 + 2484), v14 = 0, v16 < result) )
          {
            v32 |= 2u;
            v14 = v15[4];
          }
          break;
        }
        --v14;
        v15 -= 8;
      }
      switch ( v32 )
      {
        case 2:
          v5[2] = v14;
          goto LABEL_66;
        case 3:
          v5[2] = v14;
          v5[3] = v34 - v14;
          goto LABEL_66;
        case 1:
          v5[2] = v34 - v8;
          goto LABEL_66;
        default:
          break;
      }
    }
    else
    {
      v32 = 0;
      v34 = 0;
    }
    v17 = (_DWORD *)v5[5];
    if ( v17 != nullptr )
    {
      if ( (v17[4] & 8) == 0 )
        sub_229674(v5[5], a2, a3, a4);
      v18 = ((int)v17[3] >> 1) + v17[2];
      v7 = v18 + FT_MulFix((v5[1] >> 1) + *v5 - (((int)v17[1] >> 1) + *v17), v40) - (v8 >> 1);
    }
    v5[2] = v7;
    v5[3] = v8;
    if ( a4[124] != 0 )
    {
      if ( v8 <= 64 )
      {
        if ( v8 <= 31 )
        {
          v19 = v7 + 32;
          if ( v8 <= 0 )
          {
            v7 = v19 & 0xFFFFFFC0;
          }
          else
          {
            v20 = v19 & 0xFFFFFFC0;
            v21 = (((v7 + v8 + 32) & 0xFFFFFFC0) - (v7 + v8) + ((int)(((v7 + v8 + 32) & 0xFFFFFFC0) - (v7 + v8)) >> 31))
                ^ ((int)(((v7 + v8 + 32) & 0xFFFFFFC0) - (v7 + v8)) >> 31);
            v22 = (v20 - v7 + ((int)(v20 - v7) >> 31)) ^ ((int)(v20 - v7) >> 31);
            v7 = (v7 + v8 + 32) & 0xFFFFFFC0;
            if ( v22 <= v21 )
              v7 = v20;
          }
        }
        else
        {
          v7 = (v7 + (v8 >> 1)) & 0xFFFFFFC0;
          v8 = 64;
        }
        goto LABEL_63;
      }
      v23 = *(_DWORD *)(v41 + 8);
      if ( ((v8 - v23 + ((v8 - v23) >> 31)) ^ ((v8 - v23) >> 31)) <= 39 )
      {
        if ( v23 <= 47 )
        {
          v8 = 48;
          goto LABEL_57;
        }
        v8 = *(_DWORD *)(v41 + 8);
      }
      if ( v8 <= 191 )
      {
LABEL_57:
        if ( (v8 & 0x3Fu) > 9 )
        {
          v24 = v8 & 0xFFFFFFC0;
          if ( (v8 & 0x3Fu) > 0x1F )
          {
            if ( (v8 & 0x3Fu) <= 0x35 )
              v8 = v24 + 54;
          }
          else
          {
            v8 = v24 + 10;
          }
        }
        goto LABEL_63;
      }
      v8 = (v8 + 32) & 0xFFFFFFC0;
    }
LABEL_63:
    v25 = ((v7 + v8 + 32) & 0xFFFFFFC0) - v7 - v8;
    result = (((v7 + 32) & 0xFFFFFFC0) - v7 + ((int)(((v7 + 32) & 0xFFFFFFC0) - v7) >> 31))
           ^ ((int)(((v7 + 32) & 0xFFFFFFC0) - v7) >> 31);
    if ( result <= ((v25 + (v25 >> 31)) ^ (v25 >> 31)) )
      v25 = ((v7 + 32) & 0xFFFFFFC0) - v7;
    v5[2] = v7 + v25;
    v5[3] = v8;
LABEL_66:
    if ( v39 )
    {
      v26 = v5[3];
      result = v5[2];
      v27 = 64;
      if ( v26 > 63 )
        v27 = (v26 + 32) & 0xFFFFFFC0;
      if ( v32 == 2 )
      {
LABEL_73:
        v5[3] = v27;
        goto LABEL_78;
      }
      if ( v32 != 3 )
      {
        if ( v32 != 1 )
        {
          v5[3] = v27;
          v28 = v27 >> 1;
          if ( (v27 & 0x40) != 0 )
          {
            result = (result + v28) & 0xFFFFFFC0;
            v29 = result + 32;
          }
          else
          {
            v29 = (result + v28 + 32) & 0xFFFFFFC0;
          }
          v5[2] = v29 - v28;
          goto LABEL_78;
        }
        v5[2] = v34 - v27;
        goto LABEL_73;
      }
    }
LABEL_78:
    v9 = v5[4] | 8;
    goto LABEL_79;
  }
  return result;
}


//======================================================================
// sub_22A362
// address: 0x0022A362   size: 0x6 (6 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_22A362(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_22A368
// address: 0x0022A368   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_22A368(_DWORD *result)
{
  result[1] = 0;
  result[3] = 2;
  result[4] = 0;
  result[7] = 0;
  result[10] = 0;
  result[13] = 0;
  result[16] = 0;
  result[19] = 0;
  return result;
}


//======================================================================
// sub_22A37E
// address: 0x0022A37E   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_22A37E(_DWORD *result)
{
  result[1] = 0;
  result[3] = 1;
  result[4] = 0;
  result[7] = 0;
  result[10] = 0;
  result[13] = 0;
  result[16] = 0;
  result[19] = 0;
  return result;
}


//======================================================================
// sub_22A394
// address: 0x0022A394   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_22A394(int *a1, int a2)
{
  int result; // r0
  int v5; // r5

  result = a1[1];
  if ( result == 0 )
  {
    v5 = *a1;
    sub_2286AC((int)(a1 + 4), a2);
    result = sub_228F60(a1 + 10, v5);
    if ( result == 0 )
    {
      sub_2286AC((int)(a1 + 13), a2);
      return sub_228F60(a1 + 19, v5);
    }
  }
  return result;
}


//======================================================================
// sub_22A3CE
// address: 0x0022A3CE   size: 0x30 (48 bytes)
//======================================================================
__int64 __fastcall sub_22A3CE(__int64 a1, int *a2)
{
  unsigned int v2; // r5
  unsigned int v4; // r7
  signed int v5; // r0
  int v6; // r3
  __int64 v8; // [sp+0h] [bp-Ch] BYREF
  int *v9; // [sp+8h] [bp-4h]

  v8 = a1;
  v9 = a2;
  v2 = a1;
  v4 = HIDWORD(a1);
  LODWORD(v8) = (int)FT_RoundFix(*a2) >> 16;
  v5 = FT_RoundFix(a2[1]);
  v6 = *(_DWORD *)(v2 + 4);
  HIDWORD(v8) = v5 >> 16;
  if ( v6 == 0 )
    sub_2294DC(__SPAIR64__(v4, v2), 1, (int *)&v8);
  return v8;
}


//======================================================================
// sub_22A3FE
// address: 0x0022A3FE   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall sub_22A3FE(_DWORD *a1, int a2, int a3)
{
  int v5; // r3
  int v6; // r6
  int v7; // r0
  _DWORD v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[1] = a3;
  if ( a1[1] == 0 )
  {
    v5 = a1[3];
    v6 = *a1;
    v7 = 6;
    if ( v5 != 1
      || (sub_2286AC((int)(a1 + 4), a2), (v7 = sub_228C84(a1 + 7, v6, v10)) != 0)
      || (sub_2286AC((int)(a1 + 13), a2), (v7 = sub_228C84(a1 + 16, v6, v10)) != 0) )
    {
      a1[1] = v7;
    }
  }
  return a1;
}


//======================================================================
// sub_22A44C
// address: 0x0022A44C   size: 0x9E (158 bytes)
//======================================================================
int __fastcall sub_22A44C(int a1, int a2, unsigned int a3, int a4, int a5, int a6)
{
  unsigned int *v7; // r7
  int result; // r0
  int v10; // r3
  int *v11; // r5
  _BYTE *v12; // r6
  int v13; // r3
  int v14; // r2
  char *v15; // r1
  char v16; // r5
  char v17; // r5
  int v20[2]; // [sp+Ch] [bp-8h] BYREF

  v7 = (unsigned int *)(a1 + 12);
  sub_2286AC(a1, a5);
  result = sub_228C84(v7, a6, v20);
  if ( result == 0 )
  {
    v10 = *(_DWORD *)(a1 + 12);
    if ( v10 != 0 )
      v20[0] = *(_DWORD *)(a1 + 20) + 16 * (v10 + 0xFFFFFFF);
    else
      result = sub_228C84(v7, a6, v20);
    v11 = (int *)v20[0];
    if ( result == 0 )
    {
      result = sub_228CDE(v20[0], a4, a6);
      if ( result == 0 )
      {
        v12 = (_BYTE *)(a2 + (a3 >> 3));
        v13 = 128;
        v14 = 128 >> (a3 & 7);
        v15 = (char *)v11[2];
        *v11 = a4;
        while ( a4 != 0 )
        {
          v16 = *v15;
          if ( ((unsigned __int8)v14 & *v12) != 0 )
            v17 = v16 | v13;
          else
            v17 = v16 & ~(_BYTE)v13;
          *v15 = v17;
          v14 >>= 1;
          if ( v14 == 0 )
          {
            ++v12;
            v14 = 128;
          }
          v13 >>= 1;
          if ( v13 == 0 )
          {
            ++v15;
            v13 = 128;
          }
          --a4;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_22A4F0
// address: 0x0022A4F0   size: 0x4E (78 bytes)
//======================================================================
int *__fastcall sub_22A4F0(int *result, int a2, int a3)
{
  int *v4; // r4
  unsigned int v5; // r5
  int v6; // r6
  int v7; // [sp+Ch] [bp-8h]

  v4 = result;
  if ( result[1] == 0 )
  {
    v5 = result[4];
    v6 = result[13];
    v7 = *result;
    if ( a2 == v6 + v5 )
    {
      result = (int *)sub_22A44C((int)(result + 4), a3, 0, v5, 0, v7);
      if ( result != nullptr || (result = (int *)sub_22A44C((int)(v4 + 13), a3, v5, v6, 0, v7)) != nullptr )
        v4[1] = (int)result;
    }
  }
  return result;
}


//======================================================================
// sub_22A53E
// address: 0x0022A53E   size: 0x4E (78 bytes)
//======================================================================
int *__fastcall sub_22A53E(int *result, int a2, int a3, int a4)
{
  int *v5; // r4
  unsigned int v7; // r5
  int v8; // r3
  int *v9; // r2
  int v10; // [sp+Ch] [bp-8h]

  v5 = result;
  if ( result[1] == 0 )
  {
    v7 = result[13];
    v10 = *result;
    v8 = result[4];
    if ( a3 == v7 + v8 )
    {
      result = (int *)sub_22A44C((int)(result + 4), a4, v7, v8, a2, v10);
      v9 = result;
      if ( result != nullptr
        || (result = (int *)sub_22A44C((int)(v5 + 13), a4, 0, v7, a2, v10), v9 = result, result != nullptr) )
      {
        v5[1] = (int)v9;
      }
    }
  }
  return result;
}


//======================================================================
// sub_22A58C
// address: 0x0022A58C   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_22A58C(_DWORD *a1)
{
  int v1; // r3

  v1 = a1[5];
  if ( v1 == a1[10] )
    return a1[18];
  else
    return *(_DWORD *)(**(_DWORD **)(v1 + 4) + 12);
}


//======================================================================
// sub_22A5A4
// address: 0x0022A5A4   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_22A5A4(_DWORD *a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int result; // r0
  int v5; // r4

  if ( a1[2] != 6 )
    return 0;
  v3 = *a1;
  result = *(unsigned __int8 *)(*a1 + 6);
  if ( result != 0 )
  {
    if ( a2 > 0 && a2 <= *(unsigned __int8 *)(v3 + 7) )
    {
      *a3 = v3 + 16 * a2 + 8;
      return (int)&unk_3FB8EA;
    }
    return 0;
  }
  v5 = *(_DWORD *)(v3 + 16);
  if ( a2 > 0 && a2 <= *(_DWORD *)(v5 + 36) )
  {
    *a3 = *(_DWORD *)(*(_DWORD *)(v3 + 4 * (a2 + 3) + 4) + 8);
    return *(_DWORD *)(4 * (a2 + 0x3FFFFFFF) + *(_DWORD *)(v5 + 28)) + 16;
  }
  return result;
}


//======================================================================
// sub_22A600
// address: 0x0022A600   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_22A600(int a1, _DWORD *a2)
{
  return sub_22F73C(a1, *a2, a2[1]);
}


//======================================================================
// sub_22A60C
// address: 0x0022A60C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_22A60C(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r0
  int *v6; // r3
  int v7; // r3
  int v8; // r5
  int v9; // r1

  v4 = sub_22A58C(a1);
  v5 = sub_22FB48(a1, 0, v4);
  *(_DWORD *)(v5 + 16) = *a2;
  v6 = (int *)a1[2];
  *v6 = v5;
  v6[2] = 6;
  v7 = a1[2];
  a1[2] = v7 + 16;
  v8 = a2[1];
  *(_DWORD *)(v7 + 24) = 2;
  *(_DWORD *)(v7 + 16) = v8;
  v9 = a1[2];
  a1[2] = v9 + 16;
  return sub_22F73C(a1, v9 - 16, 0);
}


//======================================================================
// sub_22A650
// address: 0x0022A650   size: 0x78 (120 bytes)
//======================================================================
char *__fastcall sub_22A650(_DWORD *a1, int a2)
{
  unsigned int v2; // r3
  char *result; // r0
  int v4; // r3
  int v5; // r3

  if ( a2 <= 0 )
  {
    if ( a2 < -9999 )
    {
      switch ( a2 )
      {
        case -10001:
          v4 = a1[5];
          result = (char *)(a1 + 22);
          *(_DWORD *)result = *(_DWORD *)(**(_DWORD **)(v4 + 4) + 12);
          *((_DWORD *)result + 2) = 5;
          break;
        case -10000:
          return (char *)(a1[4] + 96);
        case -10002:
          return (char *)(a1 + 18);
        default:
          v5 = **(_DWORD **)(a1[5] + 4);
          if ( -10002 - a2 > *(unsigned __int8 *)(v5 + 7) )
            return "";
          else
            return (char *)(v5 + 16 * (-10003 - a2) + 24);
      }
    }
    else
    {
      return (char *)(a1[2] + 16 * a2);
    }
  }
  else
  {
    v2 = a1[2];
    result = (char *)(a1[3] + 16 * (a2 + 0xFFFFFFF));
    if ( (unsigned int)result >= v2 )
      return "";
  }
  return result;
}


//======================================================================
// sub_22A6E8
// address: 0x0022A6E8   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_22A6E8(int result, _DWORD *a2)
{
  _DWORD *v2; // r3
  int v3; // r5

  v2 = *(_DWORD **)(result + 8);
  v3 = a2[1];
  *v2 = *a2;
  v2[1] = v3;
  v2[2] = a2[2];
  *(_DWORD *)(result + 8) += 16;
  return result;
}


//======================================================================
// sub_22B316
// address: 0x0022B316   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_22B316(int a1, int *a2, _DWORD *a3)
{
  int result; // r0

  result = a2[1];
  if ( result != 0 )
  {
    *a3 = result;
    result = *a2;
    a2[1] = 0;
  }
  return result;
}


//======================================================================
// sub_22B328
// address: 0x0022B328   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_22B328(int *a1)
{
  int v1; // r3
  int v3; // r5
  int result; // r0
  int v5; // r3

  v1 = *a1;
  v3 = (int)(a1 + 3);
  result = 0;
  if ( v1 != v3 )
  {
    lua_pushlstring(a1[2], v3, v1 - v3);
    v5 = a1[1];
    *a1 = v3;
    a1[1] = v5 + 1;
    return 1;
  }
  return result;
}


//======================================================================
// sub_22B350
// address: 0x0022B350   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_22B350(_DWORD *a1, const char *a2, int a3)
{
  int *v6; // r0
  char *v7; // r7
  int v8; // r0

  v6 = (int *)j___errno();
  v7 = j_strerror(*v6);
  v8 = lua_tolstring(a1, a3, nullptr);
  lua_pushfstring((int)a1, (int)"cannot %s %s: %s", a2, (const char *)(v8 + 1), v7);
  lua_remove(a1, a3);
  return 6;
}


//======================================================================
// sub_22B390
// address: 0x0022B390   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_22B390(_DWORD *a1)
{
  const char *v1; // r0

  v1 = (const char *)lua_tolstring(a1, -1, nullptr);
  j_fprintf((FILE *)((char *)&_sF + 168), "PANIC: unprotected error in call to Lua API (%s)\n", v1);
  return 0;
}


//======================================================================
// sub_22B3BC
// address: 0x0022B3BC   size: 0x18 (24 bytes)
//======================================================================
void *__fastcall sub_22B3BC(int a1, void *p, int a3, size_t byte_count)
{
  if ( byte_count != 0 )
    return j_realloc(p, byte_count);
  j_free(p);
  return nullptr;
}


//======================================================================
// sub_22B3D4
// address: 0x0022B3D4   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_22B3D4(int a1)
{
  _DWORD *v1; // r6
  int v3; // r4
  unsigned int v4; // r7
  unsigned int v5; // r0
  int v6; // r3
  int result; // r0

  v1 = *(_DWORD **)(a1 + 8);
  v3 = 1;
  v4 = lua_objlen(v1, -1);
  do
  {
    v5 = lua_objlen(v1, ~v3);
    v6 = *(_DWORD *)(a1 + 4);
    if ( v6 - v3 <= 8 && v4 <= v5 )
      break;
    ++v3;
    v4 += v5;
  }
  while ( v3 < v6 );
  result = lua_concat((int)v1, v3);
  *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 4) - v3 + 1;
  return result;
}


//======================================================================
// sub_22B418
// address: 0x0022B418   size: 0x3E (62 bytes)
//======================================================================
const char *__fastcall sub_22B418(int a1, _DWORD *a2, size_t *a3)
{
  int v5; // r3
  _DWORD *v6; // r4
  size_t v7; // r0

  if ( *a2 != 0 )
  {
    *a2 = 0;
    *a3 = 1;
    return "\n";
  }
  else
  {
    v5 = a2[1];
    if ( (*(_WORD *)(v5 + 12) & 0x20) != 0 )
      return nullptr;
    v6 = a2 + 2;
    v7 = j_fread(a2 + 2, 1u, 0x400u, (FILE *)v5);
    *a3 = v7;
    if ( v7 == 0 )
      return nullptr;
    else
      return (const char *)v6;
  }
}


//======================================================================
// sub_22B5D4
// address: 0x0022B5D4   size: 0x18 (24 bytes)
//======================================================================
void __fastcall __noreturn sub_22B5D4(_DWORD *a1, int a2, int a3)
{
  const char *v5; // r0

  v5 = lua_typename((int)a1, a3);
  luaL_typerror(a1, a2, v5);
}


//======================================================================
// sub_22BE80
// address: 0x0022BE80   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_22BE80(int a1)
{
  int v2; // r0

  v2 = lua_gettop(a1);
  return lua_yield(a1, v2);
}


//======================================================================
// sub_22BE92
// address: 0x0022BE92   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_22BE92(int a1)
{
  if ( lua_pushthread(a1) )
    lua_pushnil(a1);
  return 1;
}


//======================================================================
// sub_22BEA8
// address: 0x0022BEA8   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_22BEA8(_DWORD *a1)
{
  int v2; // r5

  v2 = lua_newthread((int)a1);
  if ( lua_type(a1, 1) != 6 || lua_iscfunction(a1, 1) )
    luaL_argerror((int)a1, 1, "Lua function expected");
  lua_pushvalue(a1, 1);
  lua_xmove((int)a1, v2, 1);
  return 1;
}


//======================================================================
// sub_22BEF4
// address: 0x0022BEF4   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_22BEF4(_DWORD *a1)
{
  sub_22BEA8(a1);
  lua_pushcclosure(a1, (int)sub_22C844, 1);
  return 1;
}


//======================================================================
// sub_22BF10
// address: 0x0022BF10   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_22BF10(_DWORD *a1)
{
  luaL_checktype(a1, 1, 5);
  lua_pushvalue(a1, -10003);
  lua_pushvalue(a1, 1);
  lua_pushnil((int)a1);
  return 3;
}


//======================================================================
// sub_22BF3C
// address: 0x0022BF3C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_22BF3C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r3

  luaL_checktype(a1, 1, 5);
  lua_settop((int)a1, 2);
  v2 = lua_next(a1, 1);
  v3 = 2;
  if ( v2 == 0 )
  {
    lua_pushnil((int)a1);
    return 1;
  }
  return v3;
}


//======================================================================
// sub_22BF6C
// address: 0x0022BF6C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_22BF6C(_DWORD *a1)
{
  luaL_checktype(a1, 1, 5);
  lua_pushvalue(a1, -10003);
  lua_pushvalue(a1, 1);
  lua_pushinteger((int)a1, 0);
  return 3;
}


//======================================================================
// sub_22BF98
// address: 0x0022BF98   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_22BF98(_DWORD *a1, int a2, int a3, int a4)
{
  char *v5; // r5

  v5 = luaL_checkinteger(a1, 2, a3, a4) + 1;
  luaL_checktype(a1, 1, 5);
  lua_pushinteger((int)a1, (int)v5);
  lua_rawgeti(a1, 1, (int)v5);
  return 2 * (lua_type(a1, -1) != 0);
}


//======================================================================
// sub_22BFD4
// address: 0x0022BFD4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_22BFD4(_DWORD *a1)
{
  luaL_checktype(a1, 1, 5);
  luaL_checkany(a1, 2);
  luaL_checkany(a1, 3);
  lua_settop((int)a1, 3);
  lua_rawset(a1, 1);
  return 1;
}


//======================================================================
// sub_22C004
// address: 0x0022C004   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_22C004(_DWORD *a1)
{
  luaL_checktype(a1, 1, 5);
  luaL_checkany(a1, 2);
  lua_settop((int)a1, 2);
  lua_rawget(a1, 1);
  return 1;
}


//======================================================================
// sub_22C02C
// address: 0x0022C02C   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_22C02C(_DWORD *a1)
{
  int v2; // r0
  __int64 v3; // r0

  luaL_checkany(a1, 1);
  v2 = lua_gettop((int)a1);
  HIDWORD(v3) = lua_pcall(a1, v2 - 1, -1, 0) == 0;
  LODWORD(v3) = a1;
  lua_pushboolean(v3);
  lua_insert(a1, 1);
  return lua_gettop((int)a1);
}


//======================================================================
// sub_22C064
// address: 0x0022C064   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_22C064(_DWORD *a1)
{
  __int64 v2; // r0

  luaL_checkany(a1, 2);
  lua_settop((int)a1, 2);
  lua_insert(a1, 1);
  HIDWORD(v2) = lua_pcall(a1, 0, -1, 1) == 0;
  LODWORD(v2) = a1;
  lua_pushboolean(v2);
  lua_replace(a1, 1);
  return lua_gettop((int)a1);
}


//======================================================================
// sub_22C0A6
// address: 0x0022C0A6   size: 0x44 (68 bytes)
//======================================================================
void __fastcall __noreturn sub_22C0A6(_DWORD *a1)
{
  char *v2; // r5

  v2 = luaL_optinteger(a1, 2, 1);
  lua_settop((int)a1, 1);
  if ( lua_isstring(a1, 1) && (int)v2 > 0 )
  {
    luaL_where((int)a1, (int)v2);
    lua_pushvalue(a1, 1);
    lua_concat((int)a1, 2);
  }
  lua_error((int)a1);
}


//======================================================================
// sub_22C0EC
// address: 0x0022C0EC   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_22C0EC(_DWORD *a1)
{
  char *v2; // r5
  int v3; // r2
  int v4; // r3
  char *v5; // r0
  char *v6; // r6
  int result; // r0
  int v8; // r7
  int v9; // r2

  luaL_checktype(a1, 1, 5);
  v2 = luaL_optinteger(a1, 2, 1);
  if ( lua_type(a1, 3) > 0 )
    v5 = luaL_checkinteger(a1, 3, v3, v4);
  else
    v5 = (char *)lua_objlen(a1, 1);
  v6 = v5;
  result = 0;
  if ( (int)v2 <= (int)v6 )
  {
    v8 = v6 - v2 + 1;
    if ( v8 <= 0 || lua_checkstack(a1, v6 - v2 + 1) == 0 )
      luaL_error((int)a1, (int)"too many results to unpack");
    do
    {
      v9 = (int)v2++;
      lua_rawgeti(a1, 1, v9);
    }
    while ( (int)(v2 - 1) < (int)v6 );
    return v8;
  }
  return result;
}


//======================================================================
// sub_22C164
// address: 0x0022C164   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_22C164(_DWORD *a1)
{
  int v2; // r0
  char *v3; // r0

  luaL_checkany(a1, 1);
  v2 = lua_type(a1, 1);
  v3 = (char *)lua_typename((int)a1, v2);
  lua_pushstring((int)a1, v3);
  return 1;
}


//======================================================================
// sub_22C18C
// address: 0x0022C18C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_22C18C(_DWORD *a1)
{
  int v2; // r6
  int v3; // r2
  int v4; // r3
  char *v6; // r0
  int v7; // r5

  v2 = lua_gettop((int)a1);
  if ( lua_type(a1, 1) == 4 && (v4 = *(unsigned __int8 *)lua_tolstring(a1, 1, nullptr)) == 35 )
  {
    lua_pushinteger((int)a1, v2 - 1);
    return 1;
  }
  else
  {
    v6 = luaL_checkinteger(a1, 1, v3, v4);
    v7 = (int)&v6[v2];
    if ( (int)v6 >= 0 )
    {
      v7 = (int)v6;
      if ( (int)v6 > v2 )
        v7 = v2;
    }
    if ( v7 <= 0 )
      luaL_argerror((int)a1, 1, "index out of range");
    return v2 - v7;
  }
}


//======================================================================
// sub_22C1EC
// address: 0x0022C1EC   size: 0x94 (148 bytes)
//======================================================================
int __fastcall sub_22C1EC(_DWORD *a1, char *a2)
{
  char *v3; // r5
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3
  double v8; // r0
  const char *v9; // r0
  char *v10; // r6
  unsigned int v11; // r0
  char *v13; // [sp+4h] [bp-4h] BYREF

  v13 = a2;
  v3 = luaL_optinteger(a1, 2, 10);
  if ( v3 != &byte_9[1] )
  {
    v9 = (const char *)luaL_checklstring(a1, 1, nullptr);
    v10 = (char *)v9;
    if ( (unsigned int)(v3 - 2) > 0x22 )
      luaL_argerror((int)a1, 2, "base out of range");
    v11 = j_strtoul(v9, &v13, (int)v3);
    if ( v10 != v13 )
    {
      while ( (*(_BYTE *)(ctype_ + (unsigned __int8)*v13 + 1) & 8) != 0 )
        ++v13;
      if ( *v13 == 0 )
      {
        v8 = (double)v11;
        goto LABEL_11;
      }
    }
LABEL_12:
    lua_pushnil((int)a1);
    return 1;
  }
  luaL_checkany(a1, 1);
  if ( !lua_isnumber(a1, 1, v4, v5) )
    goto LABEL_12;
  v8 = COERCE_DOUBLE(lua_tonumber(a1, 1, v6, v7));
LABEL_11:
  lua_pushnumber((int)a1, SHIDWORD(v8), SLODWORD(v8), SHIDWORD(v8));
  return 1;
}


//======================================================================
// sub_22C288
// address: 0x0022C288   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_22C288(_DWORD *a1)
{
  int v2; // r5

  v2 = lua_type(a1, 2);
  luaL_checktype(a1, 1, 5);
  if ( v2 != 0 && v2 != 5 )
    luaL_argerror((int)a1, 2, "nil or table expected");
  if ( luaL_getmetafield(a1, 1, "__metatable") != 0 )
    luaL_error((int)a1, (int)"cannot change a protected metatable");
  lua_settop((int)a1, 2);
  lua_setmetatable(a1, 1);
  return 1;
}


//======================================================================
// sub_22C2EC
// address: 0x0022C2EC   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_22C2EC(_DWORD *a1, int a2)
{
  int v4; // r2
  int v5; // r3
  int result; // r0
  char *v7; // r0
  char *v8; // r6
  _BYTE v9[100]; // [sp+0h] [bp-6Ch] BYREF

  if ( lua_type(a1, 1) == 6 )
    return lua_pushvalue(a1, 1);
  if ( a2 != 0 )
    v7 = luaL_optinteger(a1, 1, 1);
  else
    v7 = luaL_checkinteger(a1, 1, v4, v5);
  v8 = v7;
  if ( (int)v7 < 0 )
    luaL_argerror((int)a1, 1, "level must be non-negative");
  if ( lua_getstack(a1, v7, v9) == 0 )
    luaL_argerror((int)a1, 1, "invalid level");
  lua_getinfo(a1, "f", v9);
  result = lua_type(a1, -1);
  if ( result == 0 )
    luaL_error((int)a1, (int)"no function environment for tail call at level %d", v8);
  return result;
}


//======================================================================
// sub_22C3A0
// address: 0x0022C3A0   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_22C3A0(_DWORD *a1)
{
  int v2; // r2
  int v3; // r3
  int v4; // r2
  int v5; // r3

  luaL_checktype(a1, 2, 5);
  sub_22C2EC(a1, 0);
  lua_pushvalue(a1, 2);
  if ( lua_isnumber(a1, 1, v2, v3) && COERCE_DOUBLE(lua_tonumber(a1, 1, v4, v5)) == 0.0 )
  {
    lua_pushthread((int)a1);
    lua_insert(a1, -2);
    lua_setfenv(a1, -2);
    return 0;
  }
  else
  {
    if ( lua_iscfunction(a1, -2) || lua_setfenv(a1, -2) == 0 )
      luaL_error((int)a1, (int)"'setfenv' cannot change environment of given object");
    return 1;
  }
}


//======================================================================
// sub_22C438
// address: 0x0022C438   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_22C438(_DWORD *a1)
{
  int v2; // r0

  luaL_checkany(a1, 1);
  luaL_checkany(a1, 2);
  v2 = lua_rawequal(a1, 1, 2);
  lua_pushboolean(__SPAIR64__(v2, (unsigned int)a1));
  return 1;
}


//======================================================================
// sub_22C460
// address: 0x0022C460   size: 0x94 (148 bytes)
//======================================================================
int __fastcall sub_22C460(_DWORD *a1)
{
  int v2; // r3
  int i; // r6
  const char *v4; // r7
  int v6; // [sp+4h] [bp-8h]

  v6 = lua_gettop((int)a1);
  lua_getfield(a1, -10002, "tostring", v2);
  for ( i = 1; i <= v6; ++i )
  {
    lua_pushvalue(a1, -1);
    lua_pushvalue(a1, i);
    lua_call((int)a1, 1, 1);
    v4 = (const char *)lua_tolstring(a1, -1, nullptr);
    if ( v4 == nullptr )
      luaL_error((int)a1, (int)"'tostring' must return a string to 'print'");
    if ( i > 1 )
      j_fputc(9, (FILE *)((char *)&_sF + 84));
    j_fputs(v4, (FILE *)((char *)&_sF + 84));
    lua_settop((int)a1, -2);
  }
  j_fputc(10, (FILE *)((char *)&_sF + 84));
  return 0;
}


//======================================================================
// sub_22C508
// address: 0x0022C508   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_22C508(_DWORD *a1, int a2, _DWORD *a3)
{
  int result; // r0

  luaL_checkstack(a1, 2, "too many nested functions");
  lua_pushvalue(a1, 1);
  lua_call((int)a1, 0, 1);
  result = lua_type(a1, -1);
  if ( result != 0 )
  {
    if ( !lua_isstring(a1, -1) )
      luaL_error((int)a1, (int)"reader function must return a string");
    lua_replace(a1, 3);
    return lua_tolstring(a1, 3, a3);
  }
  else
  {
    *a3 = 0;
  }
  return result;
}


//======================================================================
// sub_22C574
// address: 0x0022C574   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_22C574(_DWORD *a1)
{
  const char *v2; // r6
  int v3; // r5

  v2 = (const char *)luaL_optlstring(a1, 1, nullptr, nullptr);
  v3 = lua_gettop((int)a1);
  if ( luaL_loadfile(a1, v2) != 0 )
    lua_error((int)a1);
  lua_call((int)a1, 0, -1);
  return lua_gettop((int)a1) - v3;
}


//======================================================================
// sub_22C5B4
// address: 0x0022C5B4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_22C5B4(_DWORD *a1)
{
  sub_22C2EC(a1, 1);
  if ( lua_iscfunction(a1, -1) )
    lua_pushvalue(a1, -10002);
  else
    lua_getfenv(a1, -1);
  return 1;
}


//======================================================================
// sub_22C5E8
// address: 0x0022C5E8   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_22C5E8(int a1)
{
  int v2; // r0

  v2 = lua_gc(a1, 3, 0);
  lua_pushinteger(a1, v2);
  return 1;
}


//======================================================================
// sub_22C600
// address: 0x0022C600   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_22C600(_DWORD *a1)
{
  int v2; // r4
  char *v3; // r0
  int v4; // r5
  int v5; // r0
  double v6; // r0

  v2 = luaL_checkoption(a1, 1, "collect", (int)off_452AEC);
  v3 = luaL_optinteger(a1, 2, 0);
  v4 = dword_4448B0[v2];
  v5 = lua_gc((int)a1, v4, (int)v3);
  if ( v4 == 3 )
  {
    v6 = (double)v5 + (double)lua_gc((int)a1, 4, 0) * 0.0009765625;
LABEL_6:
    lua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
    return 1;
  }
  if ( v4 != 5 )
  {
    v6 = (double)v5;
    goto LABEL_6;
  }
  lua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
  return 1;
}


//======================================================================
// sub_22C6A0
// address: 0x0022C6A0   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_22C6A0(int a1, int a2)
{
  int v3; // r0
  int v4; // r1
  int v5; // r0
  int v6; // r0
  int v8; // [sp+0h] [bp-6Ch] BYREF

  if ( a1 == a2 )
    return 0;
  v3 = lua_status(a2);
  v4 = v3;
  if ( v3 != 0 )
  {
    if ( v3 != 1 )
      return 3;
  }
  else
  {
    v5 = lua_getstack(a2, 0, &v8);
    v4 = 2;
    if ( v5 <= 0 )
    {
      v6 = lua_gettop(a2);
      v4 = 1;
      if ( v6 == 0 )
        return 3;
    }
  }
  return v4;
}


//======================================================================
// sub_22C700
// address: 0x0022C700   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_22C700(_DWORD *a1, _DWORD *a2, int a3)
{
  int v6; // r6
  int v7; // r6

  v6 = sub_22C6A0((int)a1, (int)a2);
  if ( lua_checkstack(a2, a3) == 0 )
    luaL_error((int)a1, (int)"too many arguments to resume");
  if ( v6 != 1 )
  {
    lua_pushfstring((int)a1, (int)"cannot resume %s coroutine", off_452AEC[v6 + 8]);
    return -1;
  }
  lua_xmove((int)a1, (int)a2, a3);
  lua_setlevel((int)a1, (int)a2);
  if ( (unsigned int)lua_resume((int)a2) > 1 )
  {
    lua_xmove((int)a2, (int)a1, 1);
    return -1;
  }
  v7 = lua_gettop((int)a2);
  if ( lua_checkstack(a1, v7 + 1) == 0 )
    luaL_error((int)a1, (int)"too many results to resume");
  lua_xmove((int)a2, (int)a1, v7);
  return v7;
}


//======================================================================
// sub_22C7A8
// address: 0x0022C7A8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_22C7A8(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r5
  __int64 v5; // r0

  v2 = (_DWORD *)lua_tothread(a1, 1);
  if ( v2 == nullptr )
    luaL_argerror((int)a1, 1, "coroutine expected");
  v3 = lua_gettop((int)a1);
  v4 = sub_22C700(a1, v2, v3 - 1);
  LODWORD(v5) = a1;
  if ( v4 >= 0 )
  {
    HIDWORD(v5) = 1;
    lua_pushboolean(v5);
    lua_insert(a1, ~v4);
    return v4 + 1;
  }
  else
  {
    lua_pushboolean((unsigned int)a1);
    lua_insert(a1, -2);
    return 2;
  }
}


//======================================================================
// sub_22C804
// address: 0x0022C804   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_22C804(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  v2 = lua_tothread(a1, 1);
  if ( v2 == 0 )
    luaL_argerror((int)a1, 1, "coroutine expected");
  v3 = sub_22C6A0((int)a1, v2);
  lua_pushstring((int)a1, off_452AEC[v3 + 8]);
  return 1;
}


//======================================================================
// sub_22C844
// address: 0x0022C844   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_22C844(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int result; // r0

  v2 = (_DWORD *)lua_tothread(a1, -10003);
  v3 = lua_gettop((int)a1);
  result = sub_22C700(a1, v2, v3);
  if ( result < 0 )
  {
    if ( lua_isstring(a1, -1) )
    {
      luaL_where((int)a1, 1);
      lua_insert(a1, -2);
      lua_concat((int)a1, 2);
    }
    lua_error((int)a1);
  }
  return result;
}


//======================================================================
// sub_22C89C
// address: 0x0022C89C   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_22C89C(_DWORD *a1)
{
  const char *v2; // r5
  int v3; // r0
  int v4; // r3

  v2 = (const char *)luaL_optlstring(a1, 2, "=(load)", nullptr);
  luaL_checktype(a1, 1, 6);
  lua_settop((int)a1, 3);
  v3 = lua_load((int)a1, (int)sub_22C508, 0, v2);
  v4 = 1;
  if ( v3 != 0 )
  {
    lua_pushnil((int)a1);
    lua_insert(a1, -2);
    return 2;
  }
  return v4;
}


//======================================================================
// sub_22C8F4
// address: 0x0022C8F4   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_22C8F4(int a1)
{
  __int64 v1; // r4

  LODWORD(v1) = a1;
  lua_settop(a1, 1);
  lua_newuserdata((_DWORD *)v1, 0);
  if ( lua_toboolean((_DWORD *)v1, 1) )
  {
    HIDWORD(v1) = lua_type((_DWORD *)v1, 1);
    if ( HIDWORD(v1) == 1 )
    {
      lua_createtable(v1, 0, 0);
      lua_pushvalue((_DWORD *)v1, -1);
      lua_pushboolean(v1);
      lua_rawset((_DWORD *)v1, -10003);
    }
    else
    {
      if ( lua_getmetatable((_DWORD *)v1, 1) == 0
        || (lua_rawget((_DWORD *)v1, -10003),
            HIDWORD(v1) = lua_toboolean((_DWORD *)v1, -1),
            lua_settop(v1, -2),
            HIDWORD(v1) == 0) )
      {
        luaL_argerror(v1, 1, "boolean or proxy expected");
      }
      lua_getmetatable((_DWORD *)v1, 1);
    }
    lua_setmetatable((_DWORD *)v1, 2);
  }
  return 1;
}


//======================================================================
// sub_22C99C
// address: 0x0022C99C   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_22C99C(_DWORD *a1)
{
  char *v2; // r1
  int v3; // r0
  const char *v4; // r5
  const void *v5; // r0

  luaL_checkany(a1, 1);
  if ( luaL_callmeta(a1, 1u, "__tostring") == 0 )
  {
    switch ( lua_type(a1, 1) )
    {
      case 0:
        lua_pushlstring((int)a1, (int)"nil", 3u);
        break;
      case 1:
        if ( lua_toboolean(a1, 1) )
          v2 = "true";
        else
          v2 = "false";
        goto LABEL_8;
      case 3:
        v2 = (char *)lua_tolstring(a1, 1, nullptr);
LABEL_8:
        lua_pushstring((int)a1, v2);
        break;
      case 4:
        lua_pushvalue(a1, 1);
        break;
      default:
        v3 = lua_type(a1, 1);
        v4 = lua_typename((int)a1, v3);
        v5 = (const void *)lua_topointer(a1, 1);
        lua_pushfstring((int)a1, (int)"%s: %p", v4, v5);
        break;
    }
  }
  return 1;
}


//======================================================================
// sub_22CA50
// address: 0x0022CA50   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_22CA50(_DWORD *a1)
{
  luaL_checkany(a1, 1);
  if ( lua_getmetatable(a1, 1) != 0 )
    luaL_getmetafield(a1, 1, "__metatable");
  else
    lua_pushnil((int)a1);
  return 1;
}


//======================================================================
// sub_22CA84
// address: 0x0022CA84   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_22CA84(_DWORD *a1)
{
  const char *v2; // r0

  luaL_checkany(a1, 1);
  if ( !lua_toboolean(a1, 1) )
  {
    v2 = (const char *)luaL_optlstring(a1, 2, "assertion failed!", nullptr);
    luaL_error((int)a1, (int)"%s", v2);
  }
  return lua_gettop((int)a1);
}


//======================================================================
// sub_22CAC4
// address: 0x0022CAC4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_22CAC4(_DWORD *a1)
{
  const char *v2; // r0
  int v3; // r0
  int v4; // r3

  v2 = (const char *)luaL_optlstring(a1, 1, nullptr, nullptr);
  v3 = luaL_loadfile(a1, v2);
  v4 = 1;
  if ( v3 != 0 )
  {
    lua_pushnil((int)a1);
    lua_insert(a1, -2);
    return 2;
  }
  return v4;
}


//======================================================================
// sub_22CAF6
// address: 0x0022CAF6   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_22CAF6(_DWORD *a1, int a2, int a3)
{
  const char *v4; // r5
  const char *v5; // r0
  int v6; // r0
  int v7; // r3
  int v9[2]; // [sp+4h] [bp-8h] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v4 = (const char *)luaL_checklstring(a1, 1, v9);
  v5 = (const char *)luaL_optlstring(a1, 2, v4, nullptr);
  v6 = luaL_loadbuffer((int)a1, (int)v4, v9[0], v5);
  v7 = 1;
  if ( v6 != 0 )
  {
    lua_pushnil((int)a1);
    lua_insert(a1, -2);
    return 2;
  }
  return v7;
}


//======================================================================
// sub_22CC68
// address: 0x0022CC68   size: 0x1C (28 bytes)
//======================================================================
bool __fastcall sub_22CC68(int *a1)
{
  int v2; // r2
  _BOOL4 result; // r0

  v2 = *a1;
  result = false;
  if ( v2 == 5 && a1[4] == -1 )
    return a1[5] == -1;
  return result;
}


//======================================================================
// sub_22CC84
// address: 0x0022CC84   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall sub_22CC84(_DWORD *result, int a2, int a3)
{
  int v3; // r5
  int *v4; // r4

  v3 = a3 + ~a2;
  if ( ((v3 + (v3 >> 31)) ^ (v3 >> 31)) > 0x1FFFF )
    sub_231658(result[3], "control structure too long");
  v4 = (int *)(*(_DWORD *)(*result + 12) + 4 * a2);
  *v4 = ((v3 + 0x1FFFF) << 14) | *v4 & 0x3FFF;
  return result;
}


//======================================================================
// sub_22CCC4
// address: 0x0022CCC4   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_22CCC4(_DWORD *a1, int a2, _DWORD *a3)
{
  int v5; // r0
  int v6; // r4
  int result; // r0
  int i; // r3
  int v9; // r2
  _DWORD *v10; // r3
  int v11; // r1
  int v12; // [sp+8h] [bp-Ch]
  int v13; // [sp+Ch] [bp-8h]

  v13 = a1[4];
  v5 = sub_236E04(v13, a1[1], a2);
  v6 = *a1;
  v12 = *(_DWORD *)(*a1 + 40);
  if ( *(_DWORD *)(v5 + 8) == 3 )
    return (int)*(double *)v5;
  *(double *)v5 = (double)(int)a1[10];
  *(_DWORD *)(v5 + 8) = 3;
  if ( a1[10] >= *(_DWORD *)(v6 + 40) )
    *(_DWORD *)(v6 + 8) = sub_2323AC(v13, *(_DWORD *)(v6 + 8), v6 + 40, 16, 0x3FFFF, "constant table overflow");
  for ( i = 16 * v12; ; i += 16 )
  {
    v9 = *(_DWORD *)(v6 + 8);
    if ( v12 >= *(_DWORD *)(v6 + 40) )
      break;
    *(_DWORD *)(v9 + i + 8) = 0;
    ++v12;
  }
  v10 = (_DWORD *)(v9 + 16 * a1[10]);
  v11 = a3[1];
  *v10 = *a3;
  v10[1] = v11;
  v10[2] = a3[2];
  if ( (int)a3[2] > 3 && *(unsigned __int8 *)(*a3 + 5) << 30 != 0 && (*(_BYTE *)(v6 + 5) & 4) != 0 )
    sub_230762(v13);
  result = a1[10];
  a1[10] = result + 1;
  return result;
}


//======================================================================
// sub_22CD84
// address: 0x0022CD84   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_22CD84(int a1, int a2)
{
  int result; // r0

  result = (*(_DWORD *)(4 * a2 + *(_DWORD *)(a1 + 12)) >> 14) - 0x1FFFF;
  if ( result != -1 )
    result += a2 + 1;
  return result;
}


//======================================================================
// sub_22CDA0
// address: 0x0022CDA0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_22CDA0(int a1, int a2)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 12) + 4 * a2;
  if ( a2 > 0 && byte_444A00[*(_DWORD *)(result - 4) & 0x3F] > 0x7Fu )
    result -= 4;
  return result;
}


//======================================================================
// sub_22CDC8
// address: 0x0022CDC8   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_22CDC8(int *a1, int a2)
{
  int v4; // r5

  while ( 1 )
  {
    if ( a2 == -1 )
      return 0;
    v4 = *a1;
    if ( (*(_DWORD *)sub_22CDA0(*a1, a2) & 0x3F) != 0x1B )
      break;
    a2 = sub_22CD84(v4, a2);
  }
  return 1;
}


//======================================================================
// sub_22CDFC
// address: 0x0022CDFC   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_22CDFC(int *a1, int a2, int a3)
{
  unsigned int *v4; // r0
  unsigned int v5; // r3
  int v6; // r2
  unsigned int v7; // r2

  v4 = (unsigned int *)sub_22CDA0(*a1, a2);
  v5 = *v4;
  v6 = 0;
  if ( (*v4 & 0x3F) == 0x1B )
  {
    v7 = v5 >> 23;
    if ( a3 == 255 || a3 == v7 )
      *v4 = v5 & 0x7FC000 | 0x1A | (v7 << 6);
    else
      *v4 = v5 & 0xFFFFC03F | (a3 << 6) & 0x3FC0;
    return 1;
  }
  return v6;
}


//======================================================================
// sub_22CE4C
// address: 0x0022CE4C   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_22CE4C(int result, int a2)
{
  int *v2; // r5

  v2 = (int *)result;
  while ( a2 != -1 )
  {
    sub_22CDFC(v2, a2, 255);
    result = sub_22CD84(*v2, a2);
    a2 = result;
  }
  return result;
}


//======================================================================
// sub_22CE6E
// address: 0x0022CE6E   size: 0x3E (62 bytes)
//======================================================================
unsigned __int64 __fastcall sub_22CE6E(int *a1, int a2, int a3, unsigned int a4, int a5)
{
  int v8; // r7
  int *v9; // r0
  int v10; // r1
  int v11; // r2
  unsigned __int64 v13; // [sp+0h] [bp-Ch]

  v13 = __PAIR64__(a4, (unsigned int)a1);
  while ( a2 != -1 )
  {
    v8 = sub_22CD84(*a1, a2);
    if ( sub_22CDFC(a1, a2, SHIDWORD(v13)) != 0 )
    {
      v9 = a1;
      v10 = a2;
      v11 = a3;
    }
    else
    {
      v11 = a5;
      v9 = a1;
      v10 = a2;
    }
    sub_22CC84(v9, v10, v11);
    a2 = v8;
  }
  return v13;
}


//======================================================================
// sub_22CEAC
// address: 0x0022CEAC   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_22CEAC(int *a1, int a2, int a3)
{
  _DWORD *v5; // r5
  int result; // r0

  v5 = (_DWORD *)*a1;
  sub_22CE6E(a1, a1[8], a1[6], 0xFFu, a1[6]);
  a1[8] = -1;
  if ( a1[6] >= v5[11] )
    v5[3] = sub_2323AC(a1[4], v5[3], v5 + 11, 4, 2147483645, "code size overflow");
  *(_DWORD *)(4 * a1[6] + v5[3]) = a2;
  if ( a1[6] >= v5[12] )
    v5[5] = sub_2323AC(a1[4], v5[5], v5 + 12, 4, 2147483645, "code size overflow");
  *(_DWORD *)(4 * a1[6] + v5[5]) = a3;
  result = a1[6];
  a1[6] = result + 1;
  return result;
}


//======================================================================
// sub_22CF30
// address: 0x0022CF30   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_22CF30(int result, int a2)
{
  if ( (a2 & 0x100) == 0 && a2 >= *(unsigned __int8 *)(result + 50) )
    --*(_DWORD *)(result + 36);
  return result;
}


//======================================================================
// sub_22CF48
// address: 0x0022CF48   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_22CF48(int result, _DWORD *a2)
{
  if ( *a2 == 12 )
    return sub_22CF30(result, a2[2]);
  return result;
}


//======================================================================
// sub_22CF58
// address: 0x0022CF58   size: 0x20 (32 bytes)
//======================================================================
unsigned int *__fastcall sub_22CF58(int *a1, int a2)
{
  unsigned int *result; // r0

  result = (unsigned int *)sub_22CDA0(*a1, a2);
  *result = (((unsigned __int8)(*result >> 6) == 0) << 6) | *result & 0xFFFFC03F;
  return result;
}


//======================================================================
// sub_22CF7C
// address: 0x0022CF7C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_22CF7C(int a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 28) = v1;
  return v1;
}


//======================================================================
// sub_22CF84
// address: 0x0022CF84   size: 0x32 (50 bytes)
//======================================================================
int *__fastcall sub_22CF84(int *result, int *a2, int a3)
{
  int *v3; // r6
  int v5; // r4
  int v6; // r7
  int v7; // r0

  v3 = result;
  if ( a3 != -1 )
  {
    v5 = *a2;
    if ( *a2 == -1 )
    {
      *a2 = a3;
    }
    else
    {
      v6 = *result;
      while ( 1 )
      {
        v7 = sub_22CD84(v6, v5);
        if ( v7 == -1 )
          break;
        v5 = v7;
      }
      return sub_22CC84(v3, v5, a3);
    }
  }
  return result;
}


//======================================================================
// sub_22CFB6
// address: 0x0022CFB6   size: 0x12 (18 bytes)
//======================================================================
int *__fastcall sub_22CFB6(int *a1, int a2)
{
  a1[7] = a1[6];
  return sub_22CF84(a1, a1 + 8, a2);
}


//======================================================================
// sub_22CFC8
// address: 0x0022CFC8   size: 0x18 (24 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> sub_22CFC8(int *a1, int a2, int a3)
{
  if ( a3 == a1[6] )
    sub_22CFB6(a1, a2);
  else
    sub_22CE6E(a1, a2, a3, 0xFFu, a3);
}


//======================================================================
// sub_22CFE0
// address: 0x0022CFE0   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall sub_22CFE0(_DWORD *result, int a2)
{
  int v2; // r5

  v2 = a2 + result[9];
  if ( v2 > *(unsigned __int8 *)(*result + 75) )
  {
    if ( v2 > 249 )
      sub_231658(result[3], "function or expression too complex");
    *(_BYTE *)(*result + 75) = v2;
  }
  return result;
}


//======================================================================
// sub_22D00C
// address: 0x0022D00C   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_22D00C(_DWORD *a1, int a2)
{
  _DWORD *result; // r0

  result = sub_22CFE0(a1, a2);
  a1[9] += a2;
  return result;
}


//======================================================================
// sub_22D01E
// address: 0x0022D01E   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_22D01E(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  v5[1] = a2;
  v5[3] = a4;
  v5[0] = a2;
  v5[2] = 4;
  return sub_22CCC4(a1, (int)v5, v5);
}


//======================================================================
// sub_22D032
// address: 0x0022D032   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_22D032(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD v5[4]; // [sp+0h] [bp-10h] BYREF

  v5[3] = a4;
  v5[0] = a3;
  v5[1] = a4;
  v5[2] = 3;
  return sub_22CCC4(a1, (int)v5, v5);
}


//======================================================================
// sub_22D048
// address: 0x0022D048   size: 0x68 (104 bytes)
//======================================================================
_DWORD *__fastcall sub_22D048(_DWORD *result, _DWORD *a2, int a3)
{
  unsigned int *v3; // r3
  int *v4; // r3
  unsigned int *v5; // r3

  if ( *a2 == 13 )
  {
    v3 = (unsigned int *)(*(_DWORD *)(*result + 12) + 4 * a2[2]);
    result = (_DWORD *)*v3;
    *v3 = ((a3 + 1) << 14) & 0x7FC000 | *v3 & 0xFF803FFF;
  }
  else if ( *a2 == 14 )
  {
    v4 = (int *)(*(_DWORD *)(*result + 12) + 4 * a2[2]);
    *v4 = ((a3 + 1) << 23) | *v4 & 0x7FFFFF;
    v5 = (unsigned int *)(*(_DWORD *)(*result + 12) + 4 * a2[2]);
    *v5 = (result[9] << 6) & 0x3FC0 | *v5 & 0xFFFFC03F;
    return sub_22D00C(result, 1);
  }
  return result;
}


//======================================================================
// sub_22D0BC
// address: 0x0022D0BC   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_22D0BC(int result, _DWORD *a2)
{
  int v2; // r3
  int *v3; // r3

  if ( *a2 == 13 )
  {
    *a2 = 12;
    v2 = *(_DWORD *)result;
    result = a2[2];
    a2[2] = (unsigned __int8)(*(_DWORD *)(4 * result + *(_DWORD *)(v2 + 12)) >> 6);
  }
  else if ( *a2 == 14 )
  {
    v3 = (int *)(*(_DWORD *)(*(_DWORD *)result + 12) + 4 * a2[2]);
    result = *v3 & 0x7FFFFF;
    *v3 = result | 0x1000000;
    *a2 = 11;
  }
  return result;
}


//======================================================================
// sub_22D100
// address: 0x0022D100   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_22D100(int *a1, int a2)
{
  int v2; // r3
  int v3; // r2

  v2 = *a1;
  v3 = a1[6];
  *(_DWORD *)(4 * (v3 + 0x3FFFFFFF) + *(_DWORD *)(v2 + 20)) = a2;
  return 0x3FFFFFFF;
}


//======================================================================
// sub_22D114
// address: 0x0022D114   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_22D114(int *a1, int a2, int a3, int a4, int a5)
{
  return sub_22CEAC(a1, a2 | (a5 << 14) | (a4 << 23) | (a3 << 6), *(_DWORD *)(a1[3] + 8));
}


//======================================================================
// sub_22D130
// address: 0x0022D130   size: 0x6A (106 bytes)
//======================================================================
__int64 __fastcall sub_22D130(__int64 a1, int a2)
{
  int v2; // r3
  int *v3; // r5
  unsigned int v4; // r3
  int v5; // r2
  __int64 v7; // [sp+0h] [bp-8h]

  v7 = a1;
  v2 = *(_DWORD *)(a1 + 24);
  if ( v2 <= *(_DWORD *)(a1 + 28) )
    goto LABEL_10;
  if ( v2 == 0 )
  {
    if ( SHIDWORD(a1) >= *(unsigned __int8 *)(a1 + 50) )
      return v7;
    goto LABEL_10;
  }
  v3 = (int *)(*(_DWORD *)(*(_DWORD *)a1 + 12) + 4 * (v2 + 0x3FFFFFFF));
  v4 = *v3;
  if ( (*v3 & 0x3F) != 3 || (unsigned __int8)(v4 >> 6) > SHIDWORD(a1) || SHIDWORD(a1) > (int)((v4 >> 23) + 1) )
  {
LABEL_10:
    sub_22D114((int *)a1, 3, SHIDWORD(a1), HIDWORD(a1) + a2 - 1, 0);
    return v7;
  }
  v5 = HIDWORD(a1) + a2 - 1;
  if ( v5 > (int)(v4 >> 23) )
    *v3 = (v5 << 23) | v4 & 0x7FFFFF;
  return v7;
}


//======================================================================
// sub_22D1A0
// address: 0x0022D1A0   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_22D1A0(int *a1, int a2, int a3)
{
  int v4; // [sp+0h] [bp-8h]

  sub_22D114(a1, 30, a2, a3 + 1, 0);
  return v4;
}


//======================================================================
// sub_22D1B4
// address: 0x0022D1B4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_22D1B4(int *a1, int a2, int a3, int a4)
{
  return sub_22CEAC(a1, a2 | (a4 << 14) | (a3 << 6), *(_DWORD *)(a1[3] + 8));
}


//======================================================================
// sub_22D1C8
// address: 0x0022D1C8   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_22D1C8(int *a1, int a2, int a3)
{
  int v3; // r5
  int v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  v3 = a1[8];
  a1[8] = -1;
  v6[0] = sub_22D1B4(a1, 22, 0, 131070);
  sub_22CF84(a1, v6, v3);
  return v6[0];
}


//======================================================================
// sub_22D1F4
// address: 0x0022D1F4   size: 0x68 (104 bytes)
//======================================================================
__int64 __fastcall sub_22D1F4(__int64 a1)
{
  int v2; // r3
  int v3; // r0
  __int64 v5; // [sp+0h] [bp-Ch]

  v5 = a1;
  switch ( *(_DWORD *)HIDWORD(a1) )
  {
    case 6:
      v2 = 12;
      goto LABEL_7;
    case 7:
      v3 = sub_22D114((int *)a1, 4, 0, *(_DWORD *)(HIDWORD(a1) + 8), 0);
      goto LABEL_6;
    case 8:
      v3 = sub_22D1B4((int *)a1, 5, 0, *(_DWORD *)(HIDWORD(a1) + 8));
      goto LABEL_6;
    case 9:
      sub_22CF30(a1, *(_DWORD *)(HIDWORD(a1) + 12));
      sub_22CF30(a1, *(_DWORD *)(HIDWORD(a1) + 8));
      v3 = sub_22D114((int *)a1, 6, 0, *(_DWORD *)(HIDWORD(a1) + 8), *(_DWORD *)(HIDWORD(a1) + 12));
LABEL_6:
      *(_DWORD *)(HIDWORD(a1) + 8) = v3;
      v2 = 11;
LABEL_7:
      *(_DWORD *)HIDWORD(a1) = v2;
      break;
    case 0xD:
    case 0xE:
      sub_22D0BC(a1, (_DWORD *)HIDWORD(a1));
      break;
    default:
      return v5;
  }
  return v5;
}


//======================================================================
// sub_22D25C
// address: 0x0022D25C   size: 0x9A (154 bytes)
//======================================================================
__int64 __fastcall sub_22D25C(__int64 a1, int a2)
{
  _DWORD *v2; // r4
  int *v3; // r6
  int v5; // r1
  int *v6; // r0
  int v7; // r2
  int v8; // r3
  unsigned int *v9; // r3
  int v10; // r3
  __int64 v12; // [sp+0h] [bp-8h]

  v12 = a1;
  v2 = (_DWORD *)HIDWORD(a1);
  v3 = (int *)a1;
  v5 = (unsigned __int64)sub_22D1F4(a1) >> 32;
  switch ( *v2 )
  {
    case 1:
      sub_22D130(__SPAIR64__(a2, (unsigned int)v3), 1);
      goto LABEL_10;
    case 2:
    case 3:
      sub_22D114(v3, 2, a2, *v2 == 2, 0);
      goto LABEL_10;
    case 4:
      v6 = v3;
      v7 = a2;
      v8 = v2[2];
      goto LABEL_6;
    case 5:
      v8 = sub_22D032(v3, v5, v2[2], v2[3]);
      v7 = a2;
      v6 = v3;
LABEL_6:
      sub_22D1B4(v6, 1, v7, v8);
      goto LABEL_10;
    case 0xB:
      v9 = (unsigned int *)(*(_DWORD *)(*v3 + 12) + 4 * v2[2]);
      *v9 = (a2 << 6) & 0x3FC0 | *v9 & 0xFFFFC03F;
      goto LABEL_10;
    case 0xC:
      v10 = v2[2];
      if ( a2 != v10 )
        sub_22D114(v3, 0, a2, v10, 0);
LABEL_10:
      v2[2] = a2;
      *v2 = 12;
      break;
    default:
      return v12;
  }
  return v12;
}


//======================================================================
// sub_22D2FC
// address: 0x0022D2FC   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall sub_22D2FC(__int64 a1, unsigned int a2)
{
  int result; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r1
  int v8; // r2
  int v9; // r6
  int v10; // [sp+Ch] [bp-10h]
  int v11; // [sp+10h] [bp-Ch]
  int v12; // [sp+14h] [bp-8h]

  result = sub_22D25C(a1, a2);
  if ( *(_DWORD *)HIDWORD(a1) == 10 )
    result = (int)sub_22CF84((int *)a1, (int *)(HIDWORD(a1) + 16), *(_DWORD *)(HIDWORD(a1) + 8));
  v5 = *(_DWORD *)(HIDWORD(a1) + 16);
  v6 = *(_DWORD *)(HIDWORD(a1) + 20);
  if ( v5 != v6 )
  {
    if ( sub_22CDC8((int *)a1, v5) != 0 || sub_22CDC8((int *)a1, v6) != 0 )
    {
      if ( *(_DWORD *)HIDWORD(a1) == 10 )
        v12 = -1;
      else
        v12 = sub_22D1C8((int *)a1, v7, v8);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 24);
      v10 = sub_22D114((int *)a1, 2, a2, 0, 1);
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 24);
      v11 = sub_22D114((int *)a1, 2, a2, 1, 0);
      sub_22CFB6((int *)a1, v12);
    }
    else
    {
      v11 = -1;
      v10 = -1;
    }
    v9 = *(_DWORD *)(a1 + 24);
    *(_DWORD *)(a1 + 28) = v9;
    sub_22CE6E((int *)a1, *(_DWORD *)(HIDWORD(a1) + 20), v9, a2, v10);
    result = sub_22CE6E((int *)a1, *(_DWORD *)(HIDWORD(a1) + 16), v9, a2, v11);
  }
  *(_DWORD *)(HIDWORD(a1) + 16) = -1;
  *(_DWORD *)(HIDWORD(a1) + 20) = -1;
  *(_DWORD *)(HIDWORD(a1) + 8) = a2;
  *(_DWORD *)HIDWORD(a1) = 12;
  return result;
}


//======================================================================
// sub_22D3C4
// address: 0x0022D3C4   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_22D3C4(__int64 a1)
{
  sub_22D1F4(a1);
  sub_22CF48(a1, (_DWORD *)HIDWORD(a1));
  sub_22D00C((_DWORD *)a1, 1);
  return sub_22D2FC(a1, *(_DWORD *)(a1 + 36) - 1);
}


//======================================================================
// sub_22D3EC
// address: 0x0022D3EC   size: 0x3C (60 bytes)
//======================================================================
signed int __fastcall sub_22D3EC(__int64 a1)
{
  _DWORD *v1; // r4
  unsigned int v2; // r5
  signed int v3; // r2
  signed int result; // r0

  v1 = (_DWORD *)HIDWORD(a1);
  v2 = a1;
  sub_22D1F4(a1);
  if ( *v1 != 12 )
    goto LABEL_5;
  v3 = v1[2];
  result = v3;
  if ( v1[4] == v1[5] )
    return result;
  if ( v3 >= *(unsigned __int8 *)(v2 + 50) )
    sub_22D2FC(__SPAIR64__((unsigned int)v1, v2), v3);
  else
LABEL_5:
    sub_22D3C4(__SPAIR64__((unsigned int)v1, v2));
  return v1[2];
}


//======================================================================
// sub_22D428
// address: 0x0022D428   size: 0x16 (22 bytes)
//======================================================================
signed int __fastcall sub_22D428(__int64 a1)
{
  if ( *(_DWORD *)(HIDWORD(a1) + 16) == *(_DWORD *)(HIDWORD(a1) + 20) )
    return sub_22D1F4(a1);
  else
    return sub_22D3EC(a1);
}


//======================================================================
// sub_22D43E
// address: 0x0022D43E   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_22D43E(__int64 a1)
{
  int *v1; // r4
  _DWORD *v2; // r5
  int v3; // r1
  int v4; // r3
  _DWORD *v5; // r1
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r3
  _DWORD v10[4]; // [sp+0h] [bp-24h] BYREF
  _DWORD v11[5]; // [sp+10h] [bp-14h] BYREF

  v1 = (int *)HIDWORD(a1);
  v2 = (_DWORD *)a1;
  sub_22D428(a1);
  v4 = *v1;
  switch ( *v1 )
  {
    case 1:
    case 2:
    case 3:
    case 5:
      if ( (int)v2[10] > 255 )
        return sub_22D3EC(__SPAIR64__((unsigned int)v1, (unsigned int)v2));
      if ( v4 == 1 )
      {
        v11[2] = 0;
        v5 = v10;
        v6 = v2;
        v10[0] = v2[1];
        v10[2] = 5;
      }
      else
      {
        if ( v4 == 5 )
        {
          v7 = sub_22D032(v2, v3, v1[2], v1[3]);
LABEL_9:
          *v1 = 4;
          v1[2] = v7;
          v8 = 256;
          return v7 | v8;
        }
        v11[0] = v4 == 2;
        v11[2] = 1;
        v6 = v2;
        v5 = v11;
      }
      v7 = sub_22CCC4(v6, (int)v5, v11);
      goto LABEL_9;
    case 4:
      v8 = v1[2];
      if ( v8 > 255 )
        return sub_22D3EC(__SPAIR64__((unsigned int)v1, (unsigned int)v2));
      v7 = 256;
      return v7 | v8;
    default:
      return sub_22D3EC(__SPAIR64__((unsigned int)v1, (unsigned int)v2));
  }
}


//======================================================================
// sub_22D4C6
// address: 0x0022D4C6   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_22D4C6(__int64 a1, int a2)
{
  _DWORD *v2; // r4
  int result; // r0

  v2 = (_DWORD *)HIDWORD(a1);
  HIDWORD(a1) = a2;
  result = sub_22D43E(a1);
  v2[3] = result;
  *v2 = 9;
  return result;
}


//======================================================================
// sub_22D4D8
// address: 0x0022D4D8   size: 0x156 (342 bytes)
//======================================================================
int __fastcall sub_22D4D8(int *a1, int a2, unsigned int a3, unsigned int a4)
{
  double v6; // r4
  double v7; // r0
  double v8; // r0
  double v9; // r2
  int v10; // r4
  double v11; // r4
  int result; // r0
  int v13; // r5
  int v14; // r0
  _DWORD *v15; // r1
  double x; // [sp+8h] [bp-14h]

  if ( sub_22CC68((int *)a3) && sub_22CC68((int *)a4) )
  {
    x = *(double *)(a3 + 8);
    v6 = *(double *)(a4 + 8);
    switch ( a2 )
    {
      case 12:
        v7 = x + v6;
        goto LABEL_14;
      case 13:
        v8 = *(double *)(a3 + 8);
        v9 = *(double *)(a4 + 8);
        goto LABEL_12;
      case 14:
        v7 = x * v6;
        goto LABEL_14;
      case 15:
        if ( v6 == 0.0 )
          goto LABEL_8;
        v7 = x / v6;
        goto LABEL_14;
      case 16:
        if ( v6 == 0.0 )
          goto LABEL_8;
        v9 = j_floor(x / v6) * v6;
        v8 = x;
LABEL_12:
        v7 = v8 - v9;
        goto LABEL_14;
      case 17:
        v7 = j_pow(x, v6);
LABEL_14:
        v11 = v7;
        break;
      case 18:
        *(_QWORD *)&v11 = *(_QWORD *)&x + 0x8000000000000000LL;
        break;
      case 20:
        goto LABEL_20;
      default:
        v11 = 0.0;
        break;
    }
    *(double *)(a3 + 8) = v11;
    return 1;
  }
  else
  {
    if ( a2 == 18 || a2 == 20 )
LABEL_20:
      v10 = 0;
    else
LABEL_8:
      v10 = sub_22D43E(__SPAIR64__(a4, (unsigned int)a1));
    v13 = sub_22D43E(__SPAIR64__(a3, (unsigned int)a1));
    if ( v13 <= v10 )
    {
      sub_22CF48((int)a1, (_DWORD *)a4);
      v14 = (int)a1;
      v15 = (_DWORD *)a3;
    }
    else
    {
      sub_22CF48((int)a1, (_DWORD *)a3);
      v14 = (int)a1;
      v15 = (_DWORD *)a4;
    }
    sub_22CF48(v14, v15);
    result = sub_22D114(a1, a2, 0, v13, v10);
    *(_DWORD *)(a3 + 8) = result;
    *(_DWORD *)a3 = 11;
  }
  return result;
}


//======================================================================
// sub_22D638
// address: 0x0022D638   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_22D638(__int64 a1, int a2, _DWORD *a3, _DWORD *a4)
{
  int *v4; // r4
  int v7; // r7
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int result; // r0
  int v12; // [sp+8h] [bp-Ch]
  int v13; // [sp+Ch] [bp-8h]

  v13 = HIDWORD(a1);
  HIDWORD(a1) = a3;
  v4 = (int *)a1;
  v12 = sub_22D43E(a1);
  v7 = sub_22D43E(__SPAIR64__((unsigned int)a4, (unsigned int)v4));
  sub_22CF48((int)v4, a4);
  sub_22CF48((int)v4, a3);
  if ( a2 == 0 && v13 != 23 )
  {
    v8 = v12;
    a2 = 1;
    v12 = v7;
    v7 = v8;
  }
  sub_22D114(v4, v13, a2, v12, v7);
  result = sub_22D1C8(v4, v9, v10);
  a3[2] = result;
  *a3 = 10;
  return result;
}


//======================================================================
// sub_22D696
// address: 0x0022D696   size: 0x112 (274 bytes)
//======================================================================
int __fastcall sub_22D696(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r5
  int *v6; // r1
  int *v7; // r0
  int v8; // r2
  int *v9; // r3
  int v10; // r2
  int v12; // [sp+0h] [bp-Ch]
  _DWORD *v13; // [sp+0h] [bp-Ch]

  v12 = a1;
  v3 = a1;
  switch ( HIDWORD(a1) )
  {
    case 0:
      HIDWORD(a1) = 12;
      goto LABEL_15;
    case 1:
      HIDWORD(a1) = 13;
      goto LABEL_15;
    case 2:
      HIDWORD(a1) = 14;
      goto LABEL_15;
    case 3:
      HIDWORD(a1) = 15;
      goto LABEL_15;
    case 4:
      HIDWORD(a1) = 16;
      goto LABEL_15;
    case 5:
      HIDWORD(a1) = 17;
      goto LABEL_15;
    case 6:
      sub_22D428(__SPAIR64__((unsigned int)a3, a1));
      if ( *a3 == 11 && (*(_DWORD *)(4 * a3[2] + *(_DWORD *)(*(_DWORD *)v3 + 12)) & 0x3F) == 0x15 )
      {
        sub_22CF48(v3, a2);
        v9 = (int *)(*(_DWORD *)(*(_DWORD *)v3 + 12) + 4 * a3[2]);
        *v9 = *v9 & 0x7FFFFF | (a2[2] << 23);
        *a2 = 11;
        a2[2] = a3[2];
      }
      else
      {
        sub_22D3C4(__SPAIR64__((unsigned int)a3, v3));
        a1 = (unsigned int)v3 | 0x1500000000LL;
LABEL_15:
        sub_22D4D8((int *)a1, SHIDWORD(a1), (unsigned int)a2, (unsigned int)a3);
      }
      return v12;
    case 7:
      v13 = a3;
      HIDWORD(a1) = 23;
      goto LABEL_23;
    case 8:
      v13 = a3;
      HIDWORD(a1) = 23;
      goto LABEL_20;
    case 9:
      v13 = a3;
      HIDWORD(a1) = 24;
      goto LABEL_20;
    case 0xA:
      v13 = a3;
      HIDWORD(a1) = 25;
LABEL_20:
      v10 = 1;
      goto LABEL_24;
    case 0xB:
      v13 = a3;
      HIDWORD(a1) = 24;
      goto LABEL_23;
    case 0xC:
      v13 = a3;
      HIDWORD(a1) = 25;
LABEL_23:
      v10 = 0;
LABEL_24:
      sub_22D638(a1, v10, a2, v13);
      return v12;
    case 0xD:
      sub_22D1F4(__SPAIR64__((unsigned int)a3, a1));
      v6 = a3 + 5;
      v7 = (int *)v3;
      v8 = a2[5];
      goto LABEL_4;
    case 0xE:
      sub_22D1F4(__SPAIR64__((unsigned int)a3, a1));
      v8 = a2[4];
      v6 = a3 + 4;
      v7 = (int *)v3;
LABEL_4:
      sub_22CF84(v7, v6, v8);
      j_memcpy(a2, a3, 0x18u);
      break;
    default:
      return v12;
  }
  return v12;
}


//======================================================================
// sub_22D7A8
// address: 0x0022D7A8   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_22D7A8(__int64 a1, _DWORD *a2)
{
  int v4; // r6
  int v5; // r0
  int result; // r0
  int v7; // [sp+Ch] [bp-8h]

  sub_22D3EC(a1);
  sub_22CF48(a1, (_DWORD *)HIDWORD(a1));
  v4 = *(_DWORD *)(a1 + 36);
  sub_22D00C((_DWORD *)a1, 2);
  v7 = *(_DWORD *)(HIDWORD(a1) + 8);
  v5 = sub_22D43E(__SPAIR64__((unsigned int)a2, a1));
  sub_22D114((int *)a1, 11, v4, v7, v5);
  result = sub_22CF48(a1, a2);
  *(_DWORD *)(HIDWORD(a1) + 8) = v4;
  *(_DWORD *)HIDWORD(a1) = 12;
  return result;
}


//======================================================================
// sub_22D7F4
// address: 0x0022D7F4   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_22D7F4(__int64 a1, int a2)
{
  unsigned int v4; // r2
  int v5; // r1
  int v6; // r2

  if ( *(_DWORD *)HIDWORD(a1) != 11 )
  {
    if ( *(_DWORD *)HIDWORD(a1) == 12 )
    {
LABEL_6:
      sub_22CF48(a1, (_DWORD *)HIDWORD(a1));
      sub_22D114((int *)a1, 27, 255, *(_DWORD *)(HIDWORD(a1) + 8), a2);
      return sub_22D1C8((int *)a1, v5, v6);
    }
LABEL_5:
    sub_22D00C((_DWORD *)a1, 1);
    sub_22D25C(a1, *(_DWORD *)(a1 + 36) - 1);
    goto LABEL_6;
  }
  v4 = *(_DWORD *)(4 * *(_DWORD *)(HIDWORD(a1) + 8) + *(_DWORD *)(*(_DWORD *)a1 + 12));
  if ( (v4 & 0x3F) != 0x13 )
    goto LABEL_5;
  --*(_DWORD *)(a1 + 24);
  sub_22D114((int *)a1, 26, v4 >> 23, 0, a2 == 0);
  return sub_22D1C8((int *)a1, v5, v6);
}


//======================================================================
// sub_22D85E
// address: 0x0022D85E   size: 0x58 (88 bytes)
//======================================================================
int *__fastcall sub_22D85E(__int64 a1)
{
  _DWORD *v1; // r4
  int *v2; // r5
  int v3; // r2
  int *result; // r0

  v1 = (_DWORD *)HIDWORD(a1);
  v2 = (int *)a1;
  sub_22D1F4(a1);
  switch ( *v1 )
  {
    case 2:
    case 4:
    case 5:
      v3 = -1;
      break;
    case 0xA:
      sub_22CF58(v2, v1[2]);
      v3 = v1[2];
      break;
    default:
      v3 = sub_22D7F4(__SPAIR64__((unsigned int)v1, (unsigned int)v2), 0);
      break;
  }
  sub_22CF84(v2, v1 + 5, v3);
  result = sub_22CFB6(v2, v1[4]);
  v1[4] = -1;
  return result;
}


//======================================================================
// sub_22D8B6
// address: 0x0022D8B6   size: 0x8E (142 bytes)
//======================================================================
int __fastcall sub_22D8B6(int *a1, int a2, int *a3)
{
  int result; // r0
  int v6; // r3
  int v7; // r2

  switch ( a2 )
  {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      result = sub_22CC68(a3);
      if ( result == 0 )
        return sub_22D43E(__SPAIR64__((unsigned int)a3, (unsigned int)a1));
      return result;
    case 6:
      return sub_22D3C4(__SPAIR64__((unsigned int)a3, (unsigned int)a1));
    case 13:
      return (int)sub_22D85E(__SPAIR64__((unsigned int)a3, (unsigned int)a1));
    case 14:
      sub_22D1F4(__SPAIR64__((unsigned int)a3, (unsigned int)a1));
      v6 = *a3;
      if ( *a3 == 3 )
        goto LABEL_8;
      if ( v6 == 10 )
      {
        v7 = a3[2];
      }
      else if ( v6 == 1 )
      {
LABEL_8:
        v7 = -1;
      }
      else
      {
        v7 = sub_22D7F4(__SPAIR64__((unsigned int)a3, (unsigned int)a1), 1);
      }
      sub_22CF84(a1, a3 + 4, v7);
      result = (int)sub_22CFB6(a1, a3[5]);
      a3[5] = -1;
      return result;
    default:
      return sub_22D43E(__SPAIR64__((unsigned int)a3, (unsigned int)a1));
  }
}


//======================================================================
// sub_22D948
// address: 0x0022D948   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall sub_22D948(__int64 a1, int *a2)
{
  int *v3; // r5
  int *v4; // r0
  int v5; // r1
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r3
  _DWORD v11[6]; // [sp+8h] [bp-18h] BYREF

  v11[5] = -1;
  v11[4] = -1;
  v11[0] = 5;
  v3 = (int *)a1;
  v11[2] = 0;
  v11[3] = 0;
  switch ( HIDWORD(a1) )
  {
    case 1:
      HIDWORD(a1) = a2;
      sub_22D1F4(a1);
      switch ( *a2 )
      {
        case 1:
        case 3:
          v6 = 2;
          goto LABEL_15;
        case 2:
        case 4:
        case 5:
          v6 = 3;
          goto LABEL_15;
        case 10:
          sub_22CF58(v3, a2[2]);
          break;
        case 11:
        case 12:
          if ( *a2 != 12 )
          {
            sub_22D00C(v3, 1);
            sub_22D25C(__SPAIR64__((unsigned int)a2, (unsigned int)v3), v3[9] - 1);
          }
          sub_22CF48((int)v3, a2);
          v7 = sub_22D114(v3, 19, 0, a2[2], 0);
          v6 = 11;
          a2[2] = v7;
LABEL_15:
          *a2 = v6;
          break;
        default:
          break;
      }
      v8 = a2[4];
      v9 = a2[5];
      a2[5] = v8;
      a2[4] = v9;
      sub_22CE4C((int)v3, v8);
      LODWORD(a1) = sub_22CE4C((int)v3, a2[4]);
      break;
    case 0:
      if ( !sub_22CC68(a2) )
        sub_22D3EC(__SPAIR64__((unsigned int)a2, (unsigned int)v3));
      v4 = v3;
      v5 = 18;
      goto LABEL_17;
    case 2:
      HIDWORD(a1) = a2;
      sub_22D3EC(a1);
      v4 = v3;
      v5 = 20;
LABEL_17:
      LODWORD(a1) = sub_22D4D8(v4, v5, (unsigned int)a2, (unsigned int)v11);
      break;
    default:
      break;
  }
  return a1;
}


//======================================================================
// sub_22DA28
// address: 0x0022DA28   size: 0x78 (120 bytes)
//======================================================================
__int64 __fastcall sub_22DA28(__int64 a1, _DWORD *a2)
{
  unsigned __int64 v2; // r4
  int v3; // r6
  signed int v4; // r2
  signed int v5; // r0
  int v6; // r0
  __int64 v8; // [sp+0h] [bp-8h]

  v8 = a1;
  v2 = __PAIR64__((unsigned int)a2, a1);
  v3 = HIDWORD(a1);
  switch ( *(_DWORD *)HIDWORD(a1) )
  {
    case 6:
      sub_22CF48(a1, a2);
      sub_22D2FC(v2, *(_DWORD *)(v3 + 8));
      return v8;
    case 7:
      v4 = sub_22D3EC(__SPAIR64__((unsigned int)a2, a1));
      sub_22D114((int *)v2, 8, v4, *(_DWORD *)(v3 + 8), 0);
      goto LABEL_6;
    case 8:
      v5 = sub_22D3EC(__SPAIR64__((unsigned int)a2, a1));
      sub_22D1B4((int *)v2, 7, v5, *(_DWORD *)(v3 + 8));
      goto LABEL_6;
    case 9:
      v6 = sub_22D43E(__SPAIR64__((unsigned int)a2, a1));
      sub_22D114((int *)v2, 9, *(_DWORD *)(v3 + 8), *(_DWORD *)(v3 + 12), v6);
      goto LABEL_6;
    default:
LABEL_6:
      sub_22CF48(v2, (_DWORD *)HIDWORD(v2));
      return v8;
  }
}


//======================================================================
// sub_22DAA0
// address: 0x0022DAA0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_22DAA0(int *a1, int a2, int a3, int a4)
{
  int v6; // r0
  int v7; // r5
  int v8; // r7
  int v10; // [sp+0h] [bp-Ch]

  v6 = (a3 - 1) / 50;
  v7 = a4 != -1 ? a4 : 0;
  v8 = v6 + 1;
  if ( v6 + 1 > 511 )
  {
    sub_22D114(a1, 34, a2, v7, 0);
    sub_22CEAC(a1, v8, *(_DWORD *)(a1[3] + 8));
  }
  else
  {
    sub_22D114(a1, 34, a2, v7, v6 + 1);
  }
  a1[9] = a2 + 1;
  return v10;
}


//======================================================================
// sub_22DAF8
// address: 0x0022DAF8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_22DAF8(_DWORD *a1, int a2, int a3, int a4)
{
  char *v6; // r6
  char *v8; // r0

  v6 = luaL_checkinteger(a1, 2, a3, a4);
  luaL_checktype(a1, 1, 6);
  if ( lua_iscfunction(a1, 1) )
    return 0;
  v8 = (char *)(a2 != 0 ? lua_getupvalue(a1, 1, (int)v6) : lua_setupvalue(a1, 1, (int)v6));
  if ( v8 == nullptr )
    return 0;
  lua_pushstring((int)a1, v8);
  lua_insert(a1, ~a2);
  return a2 + 1;
}


//======================================================================
// sub_22DB4A
// address: 0x0022DB4A   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_22DB4A(_DWORD *a1)
{
  int v2; // r2
  int v3; // r3

  luaL_checkany(a1, 3);
  return sub_22DAF8(a1, 0, v2, v3);
}


//======================================================================
// sub_22DB5E
// address: 0x0022DB5E   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_22DB5E(_DWORD *a1, int a2, int a3, int a4)
{
  return sub_22DAF8(a1, 1, a3, a4);
}


//======================================================================
// sub_22DB68
// address: 0x0022DB68   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_22DB68(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0

  v2 = lua_type(a1, 2);
  if ( v2 != 0 && v2 != 5 )
    luaL_argerror((int)a1, 2, "nil or table expected");
  lua_settop((int)a1, 2);
  v3 = lua_setmetatable(a1, 1);
  lua_pushboolean(__SPAIR64__(v3, (unsigned int)a1));
  return 1;
}


//======================================================================
// sub_22DBA8
// address: 0x0022DBA8   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_22DBA8(_DWORD *a1)
{
  lua_pushvalue(a1, -10000);
  return 1;
}


//======================================================================
// sub_22DBB8
// address: 0x0022DBB8   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_22DBB8(_DWORD *a1)
{
  luaL_checktype(a1, 2, 5);
  lua_settop((int)a1, 2);
  if ( lua_setfenv(a1, 1) == 0 )
    luaL_error((int)a1, (int)"'setfenv' cannot change environment of given object");
  return 1;
}


//======================================================================
// sub_22DBEC
// address: 0x0022DBEC   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_22DBEC(_DWORD *a1)
{
  luaL_checkany(a1, 1);
  if ( lua_getmetatable(a1, 1) == 0 )
    lua_pushnil((int)a1);
  return 1;
}


//======================================================================
// sub_22DC0C
// address: 0x0022DC0C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_22DC0C(_DWORD *a1, const char *a2, int a3)
{
  int v5; // r3

  lua_pushinteger((int)a1, a3);
  return lua_setfield(a1, -2, a2, v5);
}


//======================================================================
// sub_22DC26
// address: 0x0022DC26   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_22DC26(_DWORD *a1, const char *a2, char *a3)
{
  int v5; // r3

  lua_pushstring((int)a1, a3);
  return lua_setfield(a1, -2, a2, v5);
}


//======================================================================
// sub_22DC40
// address: 0x0022DC40   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_22DC40(_DWORD *a1, int a2, const char *a3)
{
  int v5; // r3

  if ( a1 == (_DWORD *)a2 )
  {
    lua_pushvalue(a1, -2);
    lua_remove(a1, -3);
  }
  else
  {
    lua_xmove(a2, (int)a1, 1);
  }
  return lua_setfield(a1, -2, a3, v5);
}


//======================================================================
// sub_22DC76
// address: 0x0022DC76   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_22DC76(_DWORD *a1)
{
  luaL_checkany(a1, 1);
  lua_getfenv(a1, 1);
  return 1;
}


//======================================================================
// sub_22DC8C
// address: 0x0022DC8C   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_22DC8C(_DWORD *a1)
{
  size_t v3; // r0
  const char *v4; // r0
  char v5[252]; // [sp+8h] [bp-104h] BYREF

  while ( 1 )
  {
    j_fputs("lua_debug> ", (FILE *)((char *)&_sF + 168));
    if ( j_fgets(v5, 250, &_sF) == nullptr || j_strcmp(v5, "cont\n") == 0 )
      break;
    v3 = j_strlen(v5);
    if ( luaL_loadbuffer((int)a1, (int)v5, v3, "=(debug command)") != 0 || lua_pcall(a1, 0, 0, 0) != 0 )
    {
      v4 = (const char *)lua_tolstring(a1, -1, nullptr);
      j_fputs(v4, (FILE *)((char *)&_sF + 168));
      j_fputc(10, (FILE *)((char *)&_sF + 168));
    }
    lua_settop((int)a1, 0);
  }
  return 0;
}


//======================================================================
// sub_22DD44
// address: 0x0022DD44   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_22DD44(_DWORD *a1, _DWORD *a2)
{
  if ( lua_type(a1, 1) == 8 )
  {
    *a2 = 1;
    return lua_tothread(a1, 1);
  }
  else
  {
    *a2 = 0;
    return (int)a1;
  }
}


//======================================================================
// sub_22DD68
// address: 0x0022DD68   size: 0x198 (408 bytes)
//======================================================================
int __fastcall sub_22DD68(_DWORD *a1)
{
  int v2; // r6
  int v3; // r2
  int v4; // r3
  int v5; // r2
  int v6; // r3
  char *v7; // r5
  int v8; // r0
  int v9; // r0
  size_t v10; // r2
  const char *v11; // r1
  int v12; // r7
  int v13; // r3
  int v14; // r0
  int v15; // r0
  int v17; // [sp+14h] [bp-70h] BYREF
  const char *v18[9]; // [sp+18h] [bp-6Ch] BYREF
  char v19[64]; // [sp+3Ch] [bp-48h] BYREF

  v2 = sub_22DD44(a1, &v17);
  if ( lua_isnumber(a1, v17 + 2, v3, v4) )
  {
    v7 = lua_tointeger(a1, v17 + 2, v5, v6);
    lua_settop((int)a1, -2);
  }
  else
  {
    v7 = (char *)(a1 == (_DWORD *)v2);
  }
  v8 = lua_gettop((int)a1);
  if ( v8 == v17 )
  {
    v9 = (int)a1;
    v10 = 0;
    v11 = (const char *)&unk_3FB8EA;
  }
  else
  {
    if ( !lua_isstring(a1, v17 + 1) )
      return 1;
    v9 = (int)a1;
    v10 = 1;
    v11 = "\n";
  }
  lua_pushlstring(v9, (int)v11, v10);
  lua_pushlstring((int)a1, (int)"stack traceback:", 0x10u);
  v12 = 1;
  while ( lua_getstack(v2, v7, v18) != 0 )
  {
    if ( (int)(v7 + 1) > 12 && v12 != 0 )
    {
      v12 = 0;
      if ( lua_getstack(v2, v7 + 11, v18) != 0 )
      {
        lua_pushlstring((int)a1, (int)"\n\t...", 5u);
        ++v7;
        while ( lua_getstack(v2, v7 + 10, v18) != 0 )
          ++v7;
        v12 = 0;
      }
    }
    else
    {
      lua_pushlstring((int)a1, (int)"\n\t", 2u);
      lua_getinfo(v2, "Snl", v18);
      lua_pushfstring((int)a1, (int)"%s:", v19);
      if ( (int)v18[5] > 0 )
        lua_pushfstring((int)a1, (int)"%d:", v18[5]);
      if ( *v18[2] != 0 )
      {
        lua_pushfstring((int)a1, (int)" in function '%s'", v18[1]);
      }
      else
      {
        v13 = (unsigned __int8)*v18[3];
        if ( v13 == 109 )
        {
          lua_pushfstring((int)a1, (int)" in main chunk");
        }
        else if ( v13 == 67 || v13 == 116 )
        {
          lua_pushlstring((int)a1, (int)" ?", 2u);
        }
        else
        {
          lua_pushfstring((int)a1, (int)" in function <%s:%d>", v19, v18[7]);
        }
      }
      v14 = lua_gettop((int)a1);
      lua_concat((int)a1, v14 - v17);
      ++v7;
    }
  }
  v15 = lua_gettop((int)a1);
  lua_concat((int)a1, v15 - v17);
  return 1;
}


//======================================================================
// sub_22DF34
// address: 0x0022DF34   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_22DF34(_DWORD *a1)
{
  int v2; // r6
  int v3; // r2
  int v4; // r3
  char *v5; // r0
  int v6; // r2
  int v7; // r3
  char *v8; // r0
  char *v9; // r0
  int v11; // [sp+4h] [bp-4h] BYREF
  _BYTE v12[100]; // [sp+8h] [bp+0h] BYREF

  v2 = sub_22DD44(a1, &v11);
  v5 = luaL_checkinteger(a1, v11 + 1, v3, v4);
  if ( lua_getstack(v2, v5, v12) == 0 )
    luaL_argerror((int)a1, v11 + 1, "level out of range");
  luaL_checkany(a1, v11 + 3);
  lua_settop((int)a1, v11 + 3);
  lua_xmove((int)a1, v2, 1);
  v8 = luaL_checkinteger(a1, v11 + 2, v6, v7);
  v9 = (char *)lua_setlocal(v2, v12, v8);
  lua_pushstring((int)a1, v9);
  return 1;
}


//======================================================================
// sub_22DFC8
// address: 0x0022DFC8   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_22DFC8(_DWORD *a1)
{
  int v2; // r6
  int v3; // r2
  int v4; // r3
  char *v5; // r0
  int v6; // r2
  int v7; // r3
  char *v8; // r0
  char *v9; // r7
  int v11; // [sp+4h] [bp-4h] BYREF
  _BYTE v12[100]; // [sp+8h] [bp+0h] BYREF

  v2 = sub_22DD44(a1, &v11);
  v5 = luaL_checkinteger(a1, v11 + 1, v3, v4);
  if ( lua_getstack(v2, v5, v12) == 0 )
    luaL_argerror((int)a1, v11 + 1, "level out of range");
  v8 = luaL_checkinteger(a1, v11 + 2, v6, v7);
  v9 = (char *)lua_getlocal(v2, v12, v8);
  if ( v9 != nullptr )
  {
    lua_xmove(v2, (int)a1, 1);
    lua_pushstring((int)a1, v9);
    lua_pushvalue(a1, -2);
    return 2;
  }
  else
  {
    lua_pushnil((int)a1);
    return 1;
  }
}


//======================================================================
// sub_22E060
// address: 0x0022E060   size: 0x1AE (430 bytes)
//======================================================================
int __fastcall sub_22E060(_DWORD *a1)
{
  int v2; // r7
  const char *v3; // r5
  int v4; // r2
  int v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r1
  char *v9; // r0
  int v10; // r0
  int v11; // r1
  const char *v12; // r2
  _BOOL4 v14; // [sp+0h] [bp-7Ch]
  int v15; // [sp+Ch] [bp-70h] BYREF
  _BYTE v16[4]; // [sp+10h] [bp-6Ch] BYREF
  char *v17; // [sp+14h] [bp-68h]
  char *v18; // [sp+18h] [bp-64h]
  char *v19; // [sp+1Ch] [bp-60h]
  char *v20; // [sp+20h] [bp-5Ch]
  int v21; // [sp+24h] [bp-58h]
  int v22; // [sp+28h] [bp-54h]
  int v23; // [sp+2Ch] [bp-50h]
  int v24; // [sp+30h] [bp-4Ch]
  char v25[64]; // [sp+34h] [bp-48h] BYREF

  v2 = sub_22DD44(a1, &v15);
  v3 = (const char *)luaL_optlstring(a1, v15 + 2, "flnSu", nullptr);
  v14 = lua_isnumber(a1, v15 + 1, v4, v5);
  v8 = v15 + 1;
  if ( v14 )
  {
    v9 = lua_tointeger(a1, v8, v6, v7);
    if ( lua_getstack(v2, v9, v16) == 0 )
    {
      lua_pushnil((int)a1);
      return 1;
    }
  }
  else
  {
    if ( lua_type(a1, v8) != 6 )
    {
      v10 = (int)a1;
      v11 = v15 + 1;
      v12 = "function or level expected";
      goto LABEL_9;
    }
    lua_pushfstring((int)a1, (int)">%s", v3);
    v3 = (const char *)lua_tolstring(a1, -1, nullptr);
    lua_pushvalue(a1, v15 + 1);
    lua_xmove((int)a1, v2, 1);
  }
  if ( lua_getinfo(v2, v3, v16) == 0 )
  {
    v10 = (int)a1;
    v11 = v15 + 2;
    v12 = "invalid option";
LABEL_9:
    luaL_argerror(v10, v11, v12);
  }
  lua_createtable((int)a1, 0, 2);
  if ( j_strchr(v3, 83) != nullptr )
  {
    sub_22DC26(a1, "source", v20);
    sub_22DC26(a1, "short_src", v25);
    sub_22DC0C(a1, "linedefined", v23);
    sub_22DC0C(a1, "lastlinedefined", v24);
    sub_22DC26(a1, "what", v19);
  }
  if ( j_strchr(v3, 108) != nullptr )
    sub_22DC0C(a1, "currentline", v21);
  if ( j_strchr(v3, 117) != nullptr )
    sub_22DC0C(a1, "nups", v22);
  if ( j_strchr(v3, 110) != nullptr )
  {
    sub_22DC26(a1, "name", v17);
    sub_22DC26(a1, "namewhat", v18);
  }
  if ( j_strchr(v3, 76) != nullptr )
    sub_22DC40(a1, v2, "activelines");
  if ( j_strchr(v3, 102) != nullptr )
    sub_22DC40(a1, v2, "func");
  return 1;
}


//======================================================================
// sub_22E250
// address: 0x0022E250   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_22E250(_DWORD *a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r1

  lua_pushlightuserdata((int)a1, (int)&unk_4448CC);
  lua_rawget(a1, -10000);
  lua_pushlightuserdata((int)a1, (int)a1);
  lua_rawget(a1, -2);
  result = lua_type(a1, -1);
  if ( result == 6 )
  {
    lua_pushstring((int)a1, off_452C1C[*a2]);
    v5 = a2[5];
    if ( v5 < 0 )
      lua_pushnil((int)a1);
    else
      lua_pushinteger((int)a1, v5);
    return lua_call((int)a1, 2, 0);
  }
  return result;
}


//======================================================================
// sub_22E2C0
// address: 0x0022E2C0   size: 0x54 (84 bytes)
//======================================================================
char *__fastcall sub_22E2C0(_DWORD *a1)
{
  char *result; // r0

  lua_pushlightuserdata((int)a1, (int)&unk_4448CC);
  lua_rawget(a1, -10000);
  result = (char *)lua_type(a1, -1);
  if ( result != &byte_5 )
  {
    lua_settop((int)a1, -2);
    lua_createtable((int)a1, 0, 1);
    lua_pushlightuserdata((int)a1, (int)&unk_4448CC);
    lua_pushvalue(a1, -2);
    return (char *)lua_rawset(a1, -10000);
  }
  return result;
}


//======================================================================
// sub_22E31C
// address: 0x0022E31C   size: 0xCC (204 bytes)
//======================================================================
int __fastcall sub_22E31C(_DWORD *a1)
{
  int (__fastcall *v2)(_DWORD *, _DWORD *); // r6
  char *v3; // r7
  int v4; // r5
  const char *v5; // r6
  int v7; // [sp+4h] [bp-10h]
  int v8; // [sp+Ch] [bp-8h] BYREF

  v7 = sub_22DD44(a1, &v8);
  if ( lua_type(a1, v8 + 1) > 0 )
  {
    v5 = (const char *)luaL_checklstring(a1, v8 + 2, nullptr);
    luaL_checktype(a1, v8 + 1, 6);
    v3 = luaL_optinteger(a1, v8 + 3, 0);
    v4 = j_strchr(v5, 99) != nullptr;
    if ( j_strchr(v5, 114) != nullptr )
      v4 |= 2u;
    if ( j_strchr(v5, 108) != nullptr )
      v4 |= 4u;
    if ( (int)v3 > 0 )
      v4 |= 8u;
    v2 = sub_22E250;
  }
  else
  {
    v2 = nullptr;
    lua_settop((int)a1, v8 + 1);
    v3 = nullptr;
    v4 = 0;
  }
  sub_22E2C0(a1);
  lua_pushlightuserdata((int)a1, v7);
  lua_pushvalue(a1, v8 + 1);
  lua_rawset(a1, -3);
  lua_settop((int)a1, -2);
  lua_sethook(v7, v2, v4, v3);
  return 0;
}


//======================================================================
// sub_22E3EC
// address: 0x0022E3EC   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_22E3EC(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  char v6; // r6
  int (__fastcall *v7)(_DWORD *, _DWORD *); // r0
  int v8; // r3
  int v9; // r0
  int v11; // [sp+4h] [bp-Ch] BYREF
  char v12[8]; // [sp+8h] [bp-8h] BYREF

  v11 = a2;
  *(_DWORD *)v12 = a3;
  *(_DWORD *)&v12[4] = a4;
  v5 = sub_22DD44(a1, &v11);
  v6 = lua_gethookmask(v5);
  v7 = (int (__fastcall *)(_DWORD *, _DWORD *))lua_gethook(v5);
  if ( v7 == nullptr || v7 == sub_22E250 )
  {
    sub_22E2C0(a1);
    lua_pushlightuserdata((int)a1, v5);
    lua_rawget(a1, -2);
    lua_remove(a1, -2);
  }
  else
  {
    lua_pushlstring((int)a1, (int)"external hook", 0xDu);
  }
  v8 = 0;
  if ( (v6 & 1) != 0 )
  {
    v12[0] = 99;
    v8 = 1;
  }
  if ( (v6 & 2) != 0 )
    v12[v8++] = 114;
  if ( (v6 & 4) != 0 )
    v12[v8++] = 108;
  v12[v8] = 0;
  lua_pushstring((int)a1, v12);
  v9 = lua_gethookcount(v5);
  lua_pushinteger((int)a1, v9);
  return 3;
}


//======================================================================
// sub_22E4A8
// address: 0x0022E4A8   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_22E4A8(int a1, int a2)
{
  _DWORD *v2; // r3

  v2 = *(_DWORD **)(a2 + 4);
  if ( v2[2] != 6 || *(_BYTE *)(*v2 + 6) != 0 )
    return -1;
  if ( a2 == *(_DWORD *)(a1 + 20) )
    *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 24);
  return ((*(_DWORD *)(a2 + 12) - *(_DWORD *)(*(_DWORD *)(*v2 + 16) + 12)) >> 2) - 1;
}


//======================================================================
// sub_22E4DA
// address: 0x0022E4DA   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_22E4DA(int a1, int a2)
{
  int v3; // r0
  int v4; // r3

  v3 = sub_22E4A8(a1, a2);
  if ( v3 < 0 )
    return -1;
  v4 = *(_DWORD *)(*(_DWORD *)(**(_DWORD **)(a2 + 4) + 16) + 20);
  if ( v4 != 0 )
    return *(_DWORD *)(4 * v3 + v4);
  else
    return 0;
}


//======================================================================
// sub_22E504
// address: 0x0022E504   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_22E504(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r3

  if ( a3 == 2 )
    return a2 < *(unsigned __int8 *)(a1 + 75);
  if ( a3 == 3 )
  {
    if ( (a2 & 0x100) != 0 )
    {
      a2 &= ~0x100u;
      v4 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      v4 = *(unsigned __int8 *)(a1 + 75);
    }
    return (unsigned __int8)((v4 < 0) + (a2 >= (unsigned int)v4) + (a2 >> 31)) ^ 1;
  }
  else
  {
    result = 1;
    if ( a3 == 0 )
      return a2 == 0;
  }
  return result;
}


//======================================================================
// sub_22E550
// address: 0x0022E550   size: 0x56 (86 bytes)
//======================================================================
const char *__fastcall sub_22E550(int a1, _DWORD *a2, int a3)
{
  int *v3; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r7
  int v10; // r0
  const char *result; // r0

  v3 = (int *)a2[1];
  if ( v3[2] != 6
    || *(_BYTE *)((v8 = *v3) + 6) != 0
    || (v9 = *(_DWORD *)(v8 + 16)) == 0
    || (v10 = sub_22E4A8(a1, (int)a2), (result = (const char *)sub_22FD82(v9, a3, v10)) == nullptr) )
  {
    if ( a2 == *(_DWORD **)(a1 + 20) )
      v7 = *(_DWORD *)(a1 + 8);
    else
      v7 = a2[7];
    if ( (v7 - *a2) >> 4 >= a3 && a3 > 0 )
      return "(*temporary)";
    else
      return nullptr;
  }
  return result;
}


//======================================================================
// sub_22E698
// address: 0x0022E698   size: 0x24 (36 bytes)
//======================================================================
bool __fastcall sub_22E698(unsigned int a1)
{
  unsigned int v1; // r2
  int v2; // r3

  v1 = (a1 & 0x3F) - 28;
  v2 = 0;
  if ( v1 <= 6 && ((1 << v1) & 0x47) != 0 )
    return a1 >> 23 == 0;
  return v2;
}


//======================================================================
// sub_22E6BC
// address: 0x0022E6BC   size: 0x38C (908 bytes)
//======================================================================
int __fastcall sub_22E6BC(int a1, int a2, int a3)
{
  int result; // r0
  char v5; // r3
  int v6; // r2
  int v7; // r7
  unsigned int v8; // r5
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r5
  int v13; // r4
  int v14; // r3
  bool v15; // cf
  int v16; // r5
  int v17; // r4
  int v18; // r1
  int v19; // r3
  int v20; // [sp+4h] [bp-40h]
  int v21; // [sp+8h] [bp-3Ch]
  int v22; // [sp+Ch] [bp-38h]
  int v23; // [sp+10h] [bp-34h]
  int v24; // [sp+14h] [bp-30h]
  unsigned int v26; // [sp+1Ch] [bp-28h]
  int v27; // [sp+20h] [bp-24h]
  int v28; // [sp+24h] [bp-20h]
  unsigned int v29; // [sp+28h] [bp-1Ch]
  unsigned int *v30; // [sp+30h] [bp-14h]
  int v31; // [sp+34h] [bp-10h]
  int v33; // [sp+3Ch] [bp-8h]

  v23 = *(_DWORD *)(a1 + 44);
  v22 = *(unsigned __int8 *)(a1 + 75);
  result = 0;
  if ( (unsigned int)v22 <= 0xFA )
  {
    v5 = *(_BYTE *)(a1 + 74);
    if ( *(unsigned __int8 *)(a1 + 73) + (v5 & 1) <= v22 && (v5 & 5) != 4 )
    {
      v31 = *(unsigned __int8 *)(a1 + 72);
      if ( *(_DWORD *)(a1 + 36) <= v31 )
      {
        v6 = *(_DWORD *)(a1 + 48);
        if ( v6 == v23 || v6 == 0 )
        {
          if ( v23 <= 0 )
            return 0;
          v24 = *(_DWORD *)(a1 + 12);
          result = 0;
          if ( (*(_DWORD *)(4 * (v23 + 0x3FFFFFFF) + v24) & 0x3F) == 0x1E )
          {
            v27 = v23 - 1;
            v7 = 0;
            v33 = v5 & 6;
            while ( 1 )
            {
              if ( v7 >= a2 )
                return *(_DWORD *)(4 * v27 + v24);
              v28 = 4 * v7;
              v30 = (unsigned int *)(v24 + 4 * v7);
              v8 = *v30;
              v29 = *v30 & 0x3F;
              v21 = (unsigned __int8)(*v30 >> 6);
              if ( v29 > 0x25 || (unsigned __int8)(*v30 >> 6) >= v22 )
                return 0;
              v26 = byte_444A00[v29];
              v9 = v26 & 3;
              if ( v9 == 1 )
              {
                v13 = v8 >> 14;
                v12 = 0;
                if ( ((v26 >> 4) & 3) == 3 && v13 >= *(_DWORD *)(a1 + 40) )
                  return v12;
              }
              else if ( (v26 & 3) != 0 )
              {
                if ( v9 == 2 )
                {
                  v13 = (v8 >> 14) - 0x1FFFF;
                  v12 = 0;
                  if ( ((v26 >> 4) & 3) == 2 )
                  {
                    v10 = v7 + 1 + v13;
                    if ( v10 < 0 || v10 >= v23 )
                      return v12;
                    if ( v10 != 0 )
                    {
                      v11 = 0;
                      v20 = v24 + 4 * v10;
                      do
                      {
                        if ( (*(_DWORD *)(v20 - 4 * v11 - 4) & 0x3F) != 0x22 )
                          break;
                        if ( *(_DWORD *)(v20 - 4 * v11 - 4) << 9 >> 23 != 0 )
                          break;
                        ++v11;
                      }
                      while ( v11 < v10 );
                      v12 = v11 & 1;
                      if ( (v11 & 1) != 0 )
                        return 0;
                    }
                    else
                    {
                      v12 = 0;
                    }
                  }
                }
                else
                {
                  v12 = 0;
                  v13 = 0;
                }
              }
              else
              {
                v13 = v8 >> 23;
                v12 = v8 << 9 >> 23;
                result = sub_22E504(a1, v13, (v26 >> 4) & 3);
                if ( result == 0 )
                  return result;
                result = sub_22E504(a1, v12, (v26 >> 2) & 3);
                if ( result == 0 )
                  return result;
              }
              if ( (v26 & 0x40) != 0 && v21 == a3 )
                v27 = v7;
              if ( (v26 & 0x80) != 0 && (v7 + 2 >= v23 || (*(_DWORD *)(v24 + v28 + 4) & 0x3F) != 0x16) )
                return 0;
              switch ( v29 )
              {
                case 2u:
                  if ( v12 != 1 )
                    goto LABEL_97;
                  if ( v7 + 2 >= v23 )
                    return 0;
                  if ( (*(_DWORD *)(v24 + v28 + 4) & 0x3F) == 0x22 )
                  {
                    v12 = *(_DWORD *)(v24 + v28 + 4) << 9 >> 23;
                    if ( v12 == 0 )
                      return v12;
                  }
                  goto LABEL_97;
                case 3u:
                  if ( v21 > a3 || a3 > v13 )
                    goto LABEL_97;
                  goto LABEL_96;
                case 4u:
                case 8u:
                  v12 = v31;
                  goto LABEL_56;
                case 5u:
                case 7u:
                  if ( *(_DWORD *)(*(_DWORD *)(a1 + 8) + 16 * v13 + 8) != 4 )
                    return 0;
                  goto LABEL_97;
                case 0xBu:
                  if ( v21 + 1 >= v22 )
                    return 0;
                  if ( a3 == v21 + 1 )
                    goto LABEL_96;
                  goto LABEL_97;
                case 0x15u:
LABEL_56:
                  if ( v13 >= v12 )
                    return 0;
                  goto LABEL_97;
                case 0x16u:
                  goto LABEL_63;
                case 0x1Cu:
                case 0x1Du:
                  if ( v13 != 0 && v21 + v13 > v22 )
                    return 0;
                  v15 = v12 != 0;
                  v16 = v12 - 1;
                  if ( v15 )
                  {
                    if ( v16 != 0 && v21 + v16 > v22 )
                      return 0;
                  }
                  else
                  {
                    result = sub_22E698(*(_DWORD *)(v24 + v28 + 4));
                    if ( result == 0 )
                      return result;
                  }
                  if ( a3 >= v21 )
LABEL_96:
                    v27 = v7;
                  goto LABEL_97;
                case 0x1Eu:
                  v17 = v13 - 1;
                  if ( v17 <= 0 )
                    goto LABEL_97;
                  goto LABEL_94;
                case 0x1Fu:
                case 0x20u:
                  if ( v21 + 3 >= v22 )
                    return 0;
LABEL_63:
                  if ( a3 != 255 )
                  {
                    v14 = v7 + 1 + v13;
                    if ( v7 < v14 && v14 <= a2 )
                      v7 += v13;
                  }
                  goto LABEL_97;
                case 0x21u:
                  if ( v12 == 0 )
                    return v12;
                  if ( v21 + 2 + v12 >= v22 )
                    return 0;
                  if ( v21 + 1 >= a3 )
                    goto LABEL_97;
                  goto LABEL_96;
                case 0x22u:
                  if ( v13 > 0 && v21 + v13 >= v22 )
                    return 0;
                  if ( v12 == 0 && ++v7 >= v23 - 1 )
                    return v12;
                  goto LABEL_97;
                case 0x24u:
                  if ( v13 >= *(_DWORD *)(a1 + 52) )
                    return 0;
                  v18 = *(unsigned __int8 *)(*(_DWORD *)(4 * v13 + *(_DWORD *)(a1 + 16)) + 72);
                  if ( v7 + v18 >= v23 )
                    return 0;
                  v19 = 1;
                  while ( 2 )
                  {
                    if ( v19 <= v18 )
                    {
                      if ( (v30[v19] & 0x3B) == 0 )
                      {
                        ++v19;
                        continue;
                      }
                      return 0;
                    }
                    break;
                  }
                  if ( a3 != 255 )
                    v7 += v18;
LABEL_97:
                  ++v7;
                  break;
                case 0x25u:
                  if ( v33 != 2 )
                    return 0;
                  v15 = v13 != 0;
                  v17 = v13 - 1;
                  if ( !v15 )
                  {
                    result = sub_22E698(*(_DWORD *)(v24 + v28 + 4));
                    if ( result == 0 )
                      return result;
                  }
LABEL_94:
                  if ( v21 + v17 > v22 )
                    return 0;
                  goto LABEL_97;
                default:
                  goto LABEL_97;
              }
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_22EA48
// address: 0x0022EA48   size: 0x104 (260 bytes)
//======================================================================
const char *__fastcall sub_22EA48(int a1, int a2, int a3, const char **a4)
{
  int *v6; // r3
  const char *v7; // r4
  int v8; // r3
  int v9; // r5
  unsigned int v10; // r3
  unsigned int v11; // r3
  _DWORD *v12; // r3
  const char *v13; // r3
  int v14; // r2
  unsigned int v15; // r3
  const char *v16; // r3
  unsigned int v17; // r3
  _DWORD *v18; // r3
  const char *v19; // r3
  int v21; // [sp+4h] [bp-10h]

  while ( 2 )
  {
    v6 = *(int **)(a2 + 4);
    if ( v6[2] != 6 )
      return nullptr;
    v8 = *v6;
    if ( *(_BYTE *)(v8 + 6) != 0 )
      return nullptr;
    v9 = *(_DWORD *)(v8 + 16);
    v21 = sub_22E4A8(a1, a2);
    v7 = (const char *)sub_22FD82(v9, a3 + 1, v21);
    *a4 = v7;
    if ( v7 != nullptr )
      return "local";
    v10 = sub_22E6BC(v9, v21, a3);
    switch ( v10 & 0x3F )
    {
      case 0u:
        a3 = v10 >> 23;
        if ( v10 >> 23 >= (unsigned __int8)(v10 >> 6) )
          return nullptr;
        continue;
      case 4u:
        v14 = *(_DWORD *)(v9 + 28);
        v15 = v10 >> 23;
        if ( v14 != 0 )
          v16 = (const char *)(*(_DWORD *)(4 * v15 + v14) + 16);
        else
          v16 = "?";
        *a4 = v16;
        v7 = "upvalue";
        break;
      case 5u:
        *a4 = (const char *)(*(_DWORD *)(16 * (v10 >> 14) + *(_DWORD *)(v9 + 8)) + 16);
        v7 = "global";
        break;
      case 6u:
        v11 = v10 >> 14;
        if ( (v11 & 0x100) != 0 )
        {
          v12 = (_DWORD *)(*(_DWORD *)(v9 + 8) + 16 * (unsigned __int8)v11);
          if ( v12[2] == 4 )
            v13 = (const char *)(*v12 + 16);
          else
            v13 = "?";
        }
        else
        {
          v13 = "?";
        }
        *a4 = v13;
        v7 = "field";
        break;
      case 0xBu:
        v17 = v10 >> 14;
        if ( (v17 & 0x100) != 0 )
        {
          v18 = (_DWORD *)(*(_DWORD *)(v9 + 8) + 16 * (unsigned __int8)v17);
          if ( v18[2] == 4 )
            v19 = (const char *)(*v18 + 16);
          else
            v19 = "?";
        }
        else
        {
          v19 = "?";
        }
        *a4 = v19;
        v7 = "method";
        break;
      default:
        return v7;
    }
    break;
  }
  return v7;
}


//======================================================================
// sub_22EDCC
// address: 0x0022EDCC   size: 0x10 (16 bytes)
//======================================================================
bool __fastcall sub_22EDCC(int a1)
{
  return sub_22E6BC(a1, *(_DWORD *)(a1 + 44), 255) != 0;
}


//======================================================================
// sub_22EDDC
// address: 0x0022EDDC   size: 0x6C (108 bytes)
//======================================================================
void __fastcall __noreturn sub_22EDDC(_DWORD *a1)
{
  int v1; // r5
  _DWORD *v3; // r5
  _DWORD *v4; // r3
  int v5; // r1
  int v6; // r2
  _DWORD *v7; // r3
  int v8; // r1

  v1 = a1[29];
  if ( v1 != 0 )
  {
    v3 = (_DWORD *)(a1[8] + v1);
    if ( v3[2] != 6 )
      sub_22F13C(a1, 5);
    v4 = (_DWORD *)a1[2];
    v5 = *(v4 - 3);
    *v4 = *(v4 - 4);
    v4[1] = v5;
    v4[2] = *(v4 - 2);
    v6 = v3[1];
    v7 = (_DWORD *)(a1[2] - 16);
    *v7 = *v3;
    v7[1] = v6;
    v7[2] = v3[2];
    if ( a1[7] - a1[2] <= 16 )
      sub_22F1D4(a1);
    v8 = a1[2];
    a1[2] = v8 + 16;
    sub_22F73C(a1, v8 - 16, 1);
  }
  sub_22F13C(a1, 2);
}


//======================================================================
// sub_22EE48
// address: 0x0022EE48   size: 0x8A (138 bytes)
//======================================================================
void __noreturn sub_22EE48(_DWORD *a1, int a2, ...)
{
  int v3; // r0
  int v4; // r6
  int *v5; // r3
  int v6; // r3
  int v7; // r5
  int v8; // r0
  int *v9; // r3
  int v10; // r3
  int v11; // [sp+8h] [bp-50h]
  const char *v12; // [sp+Ch] [bp-4Ch]
  char v13[60]; // [sp+18h] [bp-40h] BYREF
  va_list varg_r2; // [sp+70h] [bp+18h] BYREF

  va_start(varg_r2, a2);
  v3 = sub_232F10(a1, a2, (int *)varg_r2);
  v4 = a1[5];
  v12 = (const char *)v3;
  v5 = *(int **)(v4 + 4);
  if ( v5[2] == 6 )
  {
    v6 = *v5;
    v7 = *(unsigned __int8 *)(v6 + 6);
    if ( *(_BYTE *)(v6 + 6) == 0 )
    {
      v8 = sub_22E4DA((int)a1, v4);
      v9 = *(int **)(v4 + 4);
      v11 = v8;
      if ( v9[2] == 6 )
      {
        v10 = *v9;
        if ( *(_BYTE *)(v10 + 6) == 0 )
          v7 = *(_DWORD *)(v10 + 16);
      }
      sub_2330B4((int)v13, (char *)(*(_DWORD *)(v7 + 32) + 16));
      sub_23309C(a1, "%s:%d: %s", v13, v11, v12);
    }
  }
  sub_22EDDC(a1);
}


//======================================================================
// sub_22EEDC
// address: 0x0022EEDC   size: 0x5E (94 bytes)
//======================================================================
void __fastcall __noreturn sub_22EEDC(_DWORD *a1, int a2, const char *a3)
{
  const char *v5; // r5
  unsigned int *v6; // r3
  unsigned int i; // r0
  const char *v8; // r3
  const char *v9; // [sp+Ch] [bp-4h] BYREF

  v9 = nullptr;
  v5 = off_453158[*(_DWORD *)(a2 + 8)];
  v6 = (unsigned int *)a1[5];
  for ( i = *v6; ; i += 16 )
  {
    if ( i >= v6[2] )
      goto LABEL_5;
    if ( a2 == i )
      break;
  }
  v8 = sub_22EA48((int)a1, (int)v6, (a2 - a1[3]) >> 4, &v9);
  if ( v8 != nullptr )
    sub_22EE48(a1, (int)"attempt to %s %s '%s' (a %s value)", a3, v8, v9, v5);
LABEL_5:
  sub_22EE48(a1, (int)"attempt to %s a %s value", a3, v5);
}


//======================================================================
// sub_22EF48
// address: 0x0022EF48   size: 0x16 (22 bytes)
//======================================================================
void __fastcall __noreturn sub_22EF48(_DWORD *a1, int a2, int a3)
{
  if ( (unsigned int)(*(_DWORD *)(a2 + 8) - 3) <= 1 )
    a2 = a3;
  sub_22EEDC(a1, a2, "concatenate");
}


//======================================================================
// sub_22EF64
// address: 0x0022EF64   size: 0x24 (36 bytes)
//======================================================================
void __fastcall __noreturn sub_22EF64(_DWORD *a1, int a2, int a3, int a4)
{
  int v6; // r4
  _DWORD v7[4]; // [sp+0h] [bp-10h] BYREF

  v7[0] = a1;
  v7[1] = a2;
  v7[2] = a3;
  v7[3] = a4;
  v6 = a3;
  if ( ((int (__fastcall *)(int, _DWORD *, int, int))sub_237C5C)(a2, v7, a3, a4) == 0 )
    v6 = a2;
  sub_22EEDC(a1, v6, "perform arithmetic on");
}


//======================================================================
// sub_22EF8C
// address: 0x0022EF8C   size: 0x32 (50 bytes)
//======================================================================
void __fastcall __noreturn sub_22EF8C(_DWORD *a1, int a2, int a3)
{
  char *v4; // r2
  char *v5; // r3

  v4 = off_453158[*(_DWORD *)(a2 + 8)];
  v5 = off_453158[*(_DWORD *)(a3 + 8)];
  if ( v4[2] == v5[2] )
    sub_22EE48(a1, (int)"attempt to compare two %s values", v4);
  sub_22EE48(a1, (int)"attempt to compare %s with %s", v4, v5);
}


//======================================================================
// sub_22EFCC
// address: 0x0022EFCC   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_22EFCC(int a1, int a2, int *a3)
{
  int result; // r0
  int v6; // r0
  size_t v7; // r2
  const char *v8; // r1
  int v9; // r3
  int *v10; // r3
  int v11; // r2

  result = a2 - 2;
  switch ( a2 )
  {
    case 2:
    case 3:
      v10 = (int *)(*(_DWORD *)(a1 + 8) - 16);
      v11 = *(_DWORD *)(*(_DWORD *)(a1 + 8) - 12);
      *a3 = *v10;
      a3[1] = v11;
      v9 = v10[2];
      goto LABEL_6;
    case 4:
      v6 = a1;
      v7 = 17;
      v8 = "not enough memory";
      goto LABEL_4;
    case 5:
      v6 = a1;
      v7 = 23;
      v8 = "error in error handling";
LABEL_4:
      result = sub_235280(v6, (int)v8, v7);
      v9 = 4;
      *a3 = result;
LABEL_6:
      a3[2] = v9;
      break;
    default:
      break;
  }
  *(_DWORD *)(a1 + 8) = a3 + 4;
  return result;
}


//======================================================================
// sub_22F01C
// address: 0x0022F01C   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_22F01C(int a1, void (__fastcall *a2)(int, int), int a3)
{
  int v3; // r2
  int result; // r0
  int v8; // [sp+10h] [bp-10Ch] BYREF
  jmp_buf env; // [sp+14h] [bp-108h] BYREF
  int v10; // [sp+114h] [bp-8h]

  v10 = 0;
  v3 = *(_DWORD *)(a1 + 112);
  *(_DWORD *)(a1 + 112) = &v8;
  v8 = v3;
  if ( j_setjmp(env) == 0 )
    a2(a1, a3);
  result = v10;
  *(_DWORD *)(a1 + 112) = v8;
  return result;
}


//======================================================================
// sub_22F050
// address: 0x0022F050   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_22F050(_DWORD *a1, int a2)
{
  int v4; // r5
  int v5; // r7
  int v6; // r0
  int v7; // r1
  int v8; // r6
  int result; // r0
  _DWORD *v10; // r3
  _DWORD *i; // r3
  int v12; // r2

  v4 = a1[8];
  v5 = a2 + 6;
  if ( (unsigned int)(a2 + 7) > 0xFFFFFFF )
    sub_232368();
  v6 = sub_23237C(a1, v4, 16 * a1[11], 16 * v5);
  v7 = a1[2];
  v8 = v6 + 16 * a2;
  a1[8] = v6;
  result = v6 + v7 - v4;
  v10 = (_DWORD *)a1[26];
  a1[11] = v5;
  a1[7] = v8;
  a1[2] = result;
  while ( v10 != nullptr )
  {
    result = v10[2];
    v10[2] = a1[8] + result - v4;
    v10 = (_DWORD *)*v10;
  }
  for ( i = (_DWORD *)a1[10]; ; i += 6 )
  {
    v12 = a1[8];
    if ( (unsigned int)i > a1[5] )
      break;
    i[2] = v12 + i[2] - v4;
    *i = a1[8] + *i - v4;
    result = a1[8];
    i[1] = result + i[1] - v4;
  }
  a1[3] = v12 + a1[3] - v4;
  return result;
}


//======================================================================
// sub_22F0D4
// address: 0x0022F0D4   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_22F0D4(_DWORD *a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r2
  int v7; // r6
  int result; // r0

  v4 = a1[10];
  if ( (unsigned int)(a2 + 1) > 0xAAAAAAA )
    sub_232368();
  v5 = sub_23237C(a1, a1[10], 24 * a1[12], 24 * a2);
  a1[12] = a2;
  v6 = a1[5];
  a1[10] = v5;
  v7 = v5 + v6 - v4;
  result = v5 + 24 * a2 - 24;
  a1[5] = v7;
  a1[9] = result;
  return result;
}


//======================================================================
// sub_22F118
// address: 0x0022F118   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_22F118(_DWORD *result)
{
  if ( (int)result[12] > 20000 && result[5] - result[10] <= 479975 )
    return (_DWORD *)sub_22F0D4(result, 20000);
  return result;
}


//======================================================================
// sub_22F13C
// address: 0x0022F13C   size: 0x60 (96 bytes)
//======================================================================
void __fastcall __noreturn sub_22F13C(int a1, int a2)
{
  int v2; // r5
  _DWORD *v5; // r3
  int v6; // r3

  v2 = *(_DWORD *)(a1 + 112);
  if ( v2 != 0 )
  {
    *(_DWORD *)(v2 + 260) = a2;
    j_longjmp((struct __jmp_buf_tag *)(*(_DWORD *)(a1 + 112) + 4), 1);
  }
  *(_BYTE *)(a1 + 6) = a2;
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 88) != 0 )
  {
    v5 = *(_DWORD **)(a1 + 40);
    *(_DWORD *)(a1 + 20) = v5;
    *(_DWORD *)(a1 + 12) = *v5;
    sub_22FC5C();
    sub_22EFCC(a1, a2, *(int **)(a1 + 12));
    *(_WORD *)(a1 + 52) = *(_WORD *)(a1 + 54);
    *(_BYTE *)(a1 + 57) = 1;
    sub_22F118((_DWORD *)a1);
    v6 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 116) = 0;
    *(_DWORD *)(a1 + 112) = 0;
    (*(void (__fastcall **)(int))(v6 + 88))(a1);
  }
  j_exit(1);
}


//======================================================================
// sub_22F19C
// address: 0x0022F19C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_22F19C(_DWORD *a1)
{
  int v1; // r1
  int result; // r0

  v1 = a1[12];
  if ( v1 > 20000 )
    sub_22F13C((int)a1, 5);
  sub_22F0D4(a1, 2 * v1);
  if ( (int)a1[12] > 20000 )
    sub_22EE48(a1, (int)"stack overflow");
  result = a1[5] + 24;
  a1[5] = result;
  return result;
}


//======================================================================
// sub_22F1D4
// address: 0x0022F1D4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_22F1D4(_DWORD *a1, int a2)
{
  int v2; // r3
  int v3; // r1

  v2 = a1[11];
  if ( a2 > v2 )
    v3 = v2 + a2;
  else
    v3 = 2 * v2;
  return sub_22F050(a1, v3);
}


//======================================================================
// sub_22F1E8
// address: 0x0022F1E8   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_22F1E8(_DWORD *a1, char *a2)
{
  int **v2; // r3
  int *v5; // r5
  size_t v6; // r0
  int v7; // r0

  v2 = (int **)a1[5];
  v5 = *v2;
  a1[2] = *v2;
  v6 = j_strlen(a2);
  v7 = sub_235280((int)a1, (int)a2, v6);
  v5[2] = 4;
  *v5 = v7;
  if ( a1[7] - a1[2] <= 16 )
    sub_22F1D4(a1, 1);
  a1[2] += 16;
  return 2;
}


//======================================================================
// sub_22F228
// address: 0x0022F228   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_22F228(_DWORD *a1, int *a2)
{
  int v4; // r6
  int v5; // r0
  unsigned __int8 *v6; // r7
  int v7; // r5
  int result; // r0
  int v9; // r6
  int i; // r5
  int *v11; // r3

  v4 = sub_238DE2(*a2);
  if ( *(_DWORD *)(a1[4] + 68) >= *(_DWORD *)(a1[4] + 64) )
    sub_2306A8(a1);
  if ( v4 == 27 )
    v5 = ((int (__fastcall *)(int, int, int, char *))sub_237A24)((int)a1, *a2, (int)(a2 + 1), (char *)a2[4]);
  else
    v5 = sub_234E98((int)a1, *a2, (int)(a2 + 1), (char *)a2[4]);
  v6 = (unsigned __int8 *)(v5 + 72);
  v7 = v5;
  result = sub_22FB74(a1, *(unsigned __int8 *)(v5 + 72), a1[18]);
  *(_DWORD *)(result + 16) = v7;
  v9 = result;
  for ( i = 0; i < *v6; ++i )
  {
    result = sub_22FBAC(a1);
    *(_DWORD *)(v9 + 4 * i + 20) = result;
  }
  v11 = (int *)a1[2];
  *v11 = v9;
  v11[2] = 6;
  if ( a1[7] - a1[2] <= 16 )
    result = sub_22F1D4(a1, 1);
  a1[2] += 16;
  return result;
}


//======================================================================
// sub_22F2B4
// address: 0x0022F2B4   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_22F2B4(int result, int a2, int a3)
{
  void (__fastcall *v3)(_DWORD *, _DWORD *); // r6
  _DWORD *v4; // r4
  _BYTE *v5; // r5
  int v6; // r0
  int v7; // r3
  int v8; // r12
  int v9; // r2
  int v10; // [sp+8h] [bp-74h]
  int v11; // [sp+Ch] [bp-70h]
  _DWORD v12[25]; // [sp+10h] [bp-6Ch] BYREF

  v3 = *(void (__fastcall **)(_DWORD *, _DWORD *))(result + 68);
  v4 = (_DWORD *)result;
  if ( v3 != nullptr )
  {
    v5 = (_BYTE *)(result + 57);
    if ( *(_BYTE *)(result + 57) != 0 )
    {
      v6 = *(_DWORD *)(result + 8);
      v7 = v4[8];
      v12[0] = a2;
      v11 = v6 - v7;
      v8 = v4[5];
      v10 = *(_DWORD *)(v8 + 8) - v4[8];
      v12[5] = a3;
      v9 = 0;
      if ( a2 != 4 )
        v9 = -1431655765 * ((v8 - v4[10]) >> 3);
      v12[24] = v9;
      if ( v4[7] - v6 <= 320 )
        sub_22F1D4(v4, 20);
      *(_DWORD *)(v4[5] + 8) = v4[2] + 320;
      *v5 = 0;
      v3(v4, v12);
      *v5 = 1;
      *(_DWORD *)(v4[5] + 8) = v4[8] + v10;
      v4[2] = v4[8] + v11;
      return v11;
    }
  }
  return result;
}


//======================================================================
// sub_22F35C
// address: 0x0022F35C   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall sub_22F35C(int a1, char *a2)
{
  _BYTE *v2; // r5
  char *v4; // r6
  int v5; // r2
  int v6; // r3
  int v7; // r0
  _DWORD *v8; // r2
  _DWORD *v9; // r3
  int v10; // r0
  int v11; // r2
  _DWORD *v12; // r5
  int i; // r1
  int v14; // r6
  int v15; // r6

  v2 = (_BYTE *)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 56) & 2) != 0 )
  {
    v4 = &a2[-*(_DWORD *)(a1 + 32)];
    sub_22F2B4(a1, 1, -1);
    if ( *(_BYTE *)(**(_DWORD **)(*(_DWORD *)(a1 + 20) + 4) + 6) == 0 )
    {
      while ( (*v2 & 2) != 0 )
      {
        v5 = *(_DWORD *)(a1 + 20);
        v6 = *(_DWORD *)(v5 + 20);
        *(_DWORD *)(v5 + 20) = v6 - 1;
        if ( v6 == 0 )
          break;
        sub_22F2B4(a1, 4, -1);
      }
    }
    a2 = &v4[*(_DWORD *)(a1 + 32)];
  }
  v7 = *(_DWORD *)(a1 + 20);
  v8 = (_DWORD *)(v7 - 24);
  *(_DWORD *)(a1 + 20) = v7 - 24;
  v9 = *(_DWORD **)(v7 + 4);
  v10 = *(_DWORD *)(v7 + 16);
  *(_DWORD *)(a1 + 12) = *v8;
  *(_DWORD *)(a1 + 24) = v8[3];
  v11 = v10;
  while ( 1 )
  {
    v12 = v9;
    if ( v11 == 0 || (unsigned int)a2 >= *(_DWORD *)(a1 + 8) )
      break;
    v14 = *((_DWORD *)a2 + 1);
    *v9 = *(_DWORD *)a2;
    v9[1] = v14;
    v15 = *((_DWORD *)a2 + 2);
    --v11;
    a2 += 16;
    v9[2] = v15;
    v9 += 4;
  }
  for ( i = v11; i > 0; --i )
  {
    v12 += 4;
    *(v12 - 2) = 0;
  }
  *(_DWORD *)(a1 + 8) = &v9[4 * (v11 & (~v11 >> 31))];
  return v10 + 1;
}


//======================================================================
// sub_22F404
// address: 0x0022F404   size: 0x2D6 (726 bytes)
//======================================================================
int __fastcall sub_22F404(int a1, char *a2, int a3)
{
  char *v4; // r5
  _DWORD *v5; // r6
  char *v6; // r2
  char *v7; // r3
  char *v8; // r1
  char *v9; // r7
  int v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r1
  int v14; // r1
  int v15; // r7
  int v16; // r3
  int v17; // r2
  int v18; // r5
  int v19; // r1
  char *v20; // r7
  unsigned int v21; // r1
  unsigned __int8 *v22; // r2
  char *v23; // r6
  unsigned int v24; // r3
  int v25; // r2
  int v26; // r6
  int v27; // r1
  int v28; // r7
  _DWORD *v29; // r7
  _DWORD *v30; // r0
  int v31; // r2
  int v32; // r0
  int v33; // r7
  int v34; // r2
  char *v35; // r3
  _DWORD *v36; // r12
  int v37; // r1
  int *v38; // r3
  int v39; // r0
  char **v40; // r0
  unsigned int i; // r3
  unsigned int v42; // r2
  int v43; // r5
  int v44; // r0
  int *v45; // r0
  int v46; // r2
  int v47; // r3
  int v48; // r0
  char *v50; // [sp+4h] [bp-20h]
  int v51; // [sp+4h] [bp-20h]
  char *v52; // [sp+8h] [bp-1Ch]
  int v53; // [sp+8h] [bp-1Ch]
  int v54; // [sp+Ch] [bp-18h]
  char *v55; // [sp+10h] [bp-14h]
  int v56; // [sp+14h] [bp-10h]

  v4 = a2;
  if ( *((_DWORD *)a2 + 2) != 6 )
  {
    v5 = (_DWORD *)sub_2375F0(a1);
    v52 = &v4[-*(_DWORD *)(a1 + 32)];
    if ( v5[2] != 6 )
      sub_22EEDC((_DWORD *)a1, (int)v4, "call");
    v6 = *(char **)(a1 + 8);
    v7 = v6;
    v50 = v6 - 16;
    while ( v7 > v4 )
    {
      v8 = (char *)(v7 - v6);
      v7 -= 16;
      v9 = &v8[(_DWORD)v50];
      v10 = *(_DWORD *)&v8[(_DWORD)v50];
      v11 = *(_DWORD *)&v8[(_DWORD)v50 + 4];
      *((_DWORD *)v7 + 4) = v10;
      *((_DWORD *)v7 + 5) = v11;
      *((_DWORD *)v7 + 6) = *((_DWORD *)v9 + 2);
    }
    if ( *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 8) <= 16 )
      sub_22F1D4((_DWORD *)a1, 1);
    v12 = *(_DWORD *)(a1 + 32);
    *(_DWORD *)(a1 + 8) += 16;
    v4 = &v52[v12];
    v13 = v5[1];
    *(_DWORD *)v4 = *v5;
    *((_DWORD *)v4 + 1) = v13;
    *((_DWORD *)v4 + 2) = v5[2];
  }
  v14 = *(_DWORD *)v4;
  v15 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(*(_DWORD *)(a1 + 20) + 12) = *(_DWORD *)(a1 + 24);
  v55 = &v4[-v15];
  v16 = *(_DWORD *)(a1 + 8);
  v17 = *(_DWORD *)(a1 + 28);
  if ( *(_BYTE *)(v14 + 6) != 0 )
  {
    if ( v17 - v16 <= 320 )
      sub_22F1D4((_DWORD *)a1, 20);
    v44 = *(_DWORD *)(a1 + 20);
    if ( v44 == *(_DWORD *)(a1 + 36) )
    {
      v45 = (int *)sub_22F19C((_DWORD *)a1);
    }
    else
    {
      v45 = (int *)(v44 + 24);
      *(_DWORD *)(a1 + 20) = v45;
    }
    v46 = *(_DWORD *)(a1 + 32);
    v45[1] = (int)&v55[v46];
    v47 = (int)&v55[v46 + 16];
    *v45 = v47;
    *(_DWORD *)(a1 + 12) = v47;
    v45[2] = *(_DWORD *)(a1 + 8) + 320;
    v45[4] = a3;
    if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
      sub_22F2B4(a1, 0, -1);
    v43 = 2;
    v48 = (*(int (__fastcall **)(int))(**(_DWORD **)(*(_DWORD *)(a1 + 20) + 4) + 16))(a1);
    if ( v48 >= 0 )
    {
      v43 = 1;
      sub_22F35C(a1, (char *)(*(_DWORD *)(a1 + 8) - 16 * v48));
    }
  }
  else
  {
    v18 = *(_DWORD *)(v14 + 16);
    v19 = *(unsigned __int8 *)(v18 + 75);
    if ( v17 - v16 <= 16 * v19 )
      sub_22F1D4((_DWORD *)a1, v19);
    v20 = &v55[*(_DWORD *)(a1 + 32)];
    v21 = *(_DWORD *)(a1 + 8);
    v22 = (unsigned __int8 *)(v18 + 73);
    if ( *(_BYTE *)(v18 + 74) != 0 )
    {
      v51 = ((int)(v21 - (_DWORD)v20) >> 4) - 1;
      v56 = *v22;
      while ( v51 < v56 )
      {
        v25 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 8) = v25 + 16;
        ++v51;
        *(_DWORD *)(v25 + 8) = 0;
      }
      v53 = 0;
      if ( (*(_BYTE *)(v18 + 74) & 4) != 0 )
      {
        v26 = v51 - v56;
        if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 68) >= *(_DWORD *)(*(_DWORD *)(a1 + 16) + 64) )
          sub_2306A8(a1);
        v27 = *(unsigned __int8 *)(v18 + 75);
        if ( *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 8) <= 16 * v27 )
          sub_22F1D4((_DWORD *)a1, v27);
        v53 = sub_236960(a1, v26, 1);
        v54 = 0;
        while ( v54 < v26 )
        {
          v28 = v54 + 0xFFFFFFF * v26;
          ++v54;
          v29 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 16 * v28);
          v30 = (_DWORD *)sub_236B18(a1, v53, v54);
          v31 = v29[1];
          *v30 = *v29;
          v30[1] = v31;
          v30[2] = v29[2];
        }
        v32 = sub_235280(a1, (int)"n", 1u);
        v33 = sub_236E64(a1, v53, v32);
        *(double *)v33 = (double)v26;
        *(_DWORD *)(v33 + 8) = 3;
      }
      v23 = *(char **)(a1 + 8);
      v34 = 0;
      v35 = &v23[-16 * v51];
      while ( v34 < v56 )
      {
        ++v34;
        v36 = *(_DWORD **)(a1 + 8);
        *(_DWORD *)(a1 + 8) = v36 + 4;
        v37 = *((_DWORD *)v35 + 1);
        *v36 = *(_DWORD *)v35;
        v36[1] = v37;
        v36[2] = *((_DWORD *)v35 + 2);
        *((_DWORD *)v35 + 2) = 0;
        v35 += 16;
      }
      if ( v53 != 0 )
      {
        v38 = *(int **)(a1 + 8);
        *(_DWORD *)(a1 + 8) = v38 + 4;
        *v38 = v53;
        v38[2] = 5;
      }
      v20 = &v55[*(_DWORD *)(a1 + 32)];
    }
    else
    {
      v23 = v20 + 16;
      v24 = (unsigned int)&v20[16 * *v22 + 16];
      if ( v21 > v24 )
        *(_DWORD *)(a1 + 8) = v24;
    }
    v39 = *(_DWORD *)(a1 + 20);
    if ( v39 == *(_DWORD *)(a1 + 36) )
    {
      v40 = (char **)sub_22F19C((_DWORD *)a1);
    }
    else
    {
      v40 = (char **)(v39 + 24);
      *(_DWORD *)(a1 + 20) = v40;
    }
    v40[1] = v20;
    *v40 = v23;
    *(_DWORD *)(a1 + 12) = v23;
    v40[2] = &v23[16 * *(unsigned __int8 *)(v18 + 75)];
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(v18 + 12);
    v40[5] = nullptr;
    v40[4] = (char *)a3;
    for ( i = *(_DWORD *)(a1 + 8); ; i += 16 )
    {
      v42 = (unsigned int)v40[2];
      if ( i >= v42 )
        break;
      *(_DWORD *)(i + 8) = 0;
    }
    *(_DWORD *)(a1 + 8) = v42;
    v43 = 0;
    if ( (*(_BYTE *)(a1 + 56) & 1) != 0 )
    {
      *(_DWORD *)(a1 + 24) += 4;
      sub_22F2B4(a1, 0, -1);
      *(_DWORD *)(a1 + 24) -= 4;
    }
  }
  return v43;
}


//======================================================================
// sub_22F6E4
// address: 0x0022F6E4   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_22F6E4(int a1, char *a2)
{
  int v3; // r3
  int result; // r0

  v3 = *(_DWORD *)(a1 + 20);
  if ( *(_BYTE *)(a1 + 6) != 0 )
  {
    *(_BYTE *)(a1 + 6) = 0;
    if ( *(_BYTE *)(**(_DWORD **)(v3 + 4) + 6) != 0 )
    {
      if ( sub_22F35C(a1, a2) != 0 )
        *(_DWORD *)(a1 + 8) = *(_DWORD *)(*(_DWORD *)(a1 + 20) + 8);
    }
    else
    {
      *(_DWORD *)(a1 + 12) = *(_DWORD *)v3;
    }
    return sub_2381A8(a1, -1431655765 * ((*(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 40)) >> 3));
  }
  result = sub_22F404(a1, a2 - 16, -1);
  if ( result == 0 )
    return sub_2381A8(a1, -1431655765 * ((*(_DWORD *)(a1 + 20) - *(_DWORD *)(a1 + 40)) >> 3));
  return result;
}


//======================================================================
// sub_22F73C
// address: 0x0022F73C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_22F73C(int a1, char *a2, int a3)
{
  unsigned int v4; // r3
  int result; // r0

  v4 = (unsigned __int16)(*(_WORD *)(a1 + 52) + 1);
  *(_WORD *)(a1 + 52) = v4;
  if ( v4 > 0xC7 )
  {
    if ( v4 == 200 )
      sub_22EE48((_DWORD *)a1, (int)"C stack overflow");
    if ( v4 > 0xE0 )
      sub_22F13C(a1, 5);
  }
  result = sub_22F404(a1, a2, a3);
  if ( result == 0 )
    result = sub_2381A8(a1, 1);
  --*(_WORD *)(a1 + 52);
  if ( *(_DWORD *)(*(_DWORD *)(a1 + 16) + 68) >= *(_DWORD *)(*(_DWORD *)(a1 + 16) + 64) )
    return sub_2306A8(a1);
  return result;
}


//======================================================================
// sub_22F844
// address: 0x0022F844   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_22F844(int a1, void (__fastcall *a2)(int, int), int a3, int a4, int a5)
{
  _BYTE *v6; // r6
  int v8; // r5
  int *v9; // r7
  _DWORD *v10; // r3
  __int16 v12; // [sp+4h] [bp-18h]
  int v13; // [sp+8h] [bp-14h]
  int v14; // [sp+Ch] [bp-10h]
  char v15; // [sp+10h] [bp-Ch]
  int v16; // [sp+14h] [bp-8h]

  v12 = *(_WORD *)(a1 + 52);
  v6 = (_BYTE *)(a1 + 57);
  v13 = *(_DWORD *)(a1 + 20);
  v14 = *(_DWORD *)(a1 + 40);
  v15 = *(_BYTE *)(a1 + 57);
  v16 = *(_DWORD *)(a1 + 116);
  *(_DWORD *)(a1 + 116) = a5;
  v8 = sub_22F01C(a1, a2, a3);
  if ( v8 != 0 )
  {
    v9 = (int *)(*(_DWORD *)(a1 + 32) + a4);
    sub_22FC5C(a1, v9);
    sub_22EFCC(a1, v8, v9);
    *(_WORD *)(a1 + 52) = v12;
    v10 = (_DWORD *)(*(_DWORD *)(a1 + 40) + v13 - v14);
    *(_DWORD *)(a1 + 20) = v10;
    *(_DWORD *)(a1 + 12) = *v10;
    *(_DWORD *)(a1 + 24) = v10[3];
    *v6 = v15;
    sub_22F118((_DWORD *)a1);
  }
  *(_DWORD *)(a1 + 116) = v16;
  return v8;
}


//======================================================================
// sub_22F8B4
// address: 0x0022F8B4   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_22F8B4(_DWORD *a1, int a2, int a3)
{
  int v3; // r3
  int v5; // r7
  int v7; // [sp+0h] [bp-24h]
  int v8; // [sp+Ch] [bp-18h] BYREF
  int v9; // [sp+10h] [bp-14h]
  int v10; // [sp+18h] [bp-Ch]
  int v11; // [sp+1Ch] [bp-8h]

  v8 = a2;
  v11 = a3;
  v3 = a1[2] - a1[8];
  v7 = a1[29];
  v9 = 0;
  v10 = 0;
  v5 = sub_22F844((int)a1, (void (__fastcall *)(int, int))sub_22F228, (int)&v8, v3, v7);
  sub_23237C(a1, v9, v10, 0);
  return v5;
}


//======================================================================
// sub_22F8F4
// address: 0x0022F8F4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_22F8F4(int result, int a2, int a3)
{
  if ( *(_DWORD *)(a3 + 16) == 0 )
  {
    result = (*(int (__fastcall **)(_DWORD, int, int, _DWORD))(a3 + 4))(*(_DWORD *)a3, result, a2, *(_DWORD *)(a3 + 8));
    *(_DWORD *)(a3 + 16) = result;
  }
  return result;
}


//======================================================================
// sub_22F912
// address: 0x0022F912   size: 0x14 (20 bytes)
//======================================================================
__int64 __fastcall sub_22F912(__int64 a1, int a2)
{
  __int64 v3; // [sp+0h] [bp-Ch] BYREF
  int v4; // [sp+8h] [bp-4h]

  v3 = a1;
  v4 = a2;
  HIBYTE(v3) = a1;
  sub_22F8F4((int)&v3 + 7, 1, SHIDWORD(a1));
  return v3;
}


//======================================================================
// sub_22F926
// address: 0x0022F926   size: 0x10 (16 bytes)
//======================================================================
__int64 __fastcall sub_22F926(int a1, int a2, int a3)
{
  __int64 v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+8h] [bp-4h]

  LODWORD(v4) = a1;
  v5 = a3;
  HIDWORD(v4) = a1;
  sub_22F8F4((int)&v4 + 4, 4, a2);
  return v4;
}


//======================================================================
// sub_22F936
// address: 0x0022F936   size: 0x36 (54 bytes)
//======================================================================
__int64 __fastcall sub_22F936(__int64 a1, int a2)
{
  char *v3; // r0
  int v4; // r1
  __int64 v6; // [sp+0h] [bp-Ch] BYREF
  int v7; // [sp+8h] [bp-4h]

  v6 = a1;
  v7 = a2;
  v3 = (char *)&v6 + 4;
  if ( (_DWORD)a1 != 0 && (_DWORD)a1 != -16 )
  {
    HIDWORD(v6) = *(_DWORD *)(a1 + 12) + 1;
    sub_22F8F4((int)&v6 + 4, 4, SHIDWORD(a1));
    v4 = HIDWORD(v6);
    v3 = (char *)(a1 + 16);
  }
  else
  {
    HIDWORD(v6) = 0;
    v4 = 4;
  }
  sub_22F8F4((int)v3, v4, SHIDWORD(a1));
  return v6;
}


//======================================================================
// sub_22F96C
// address: 0x0022F96C   size: 0x186 (390 bytes)
//======================================================================
__int64 __fastcall sub_22F96C(int a1, int a2, int a3)
{
  int v3; // r3
  __int64 v6; // r0
  int v7; // r2
  int v8; // r2
  __int64 v9; // r0
  int v10; // r2
  __int64 v11; // r0
  int v12; // r2
  __int64 v13; // r0
  int v14; // r2
  __int64 v15; // r0
  int v16; // r2
  int v17; // r6
  int v18; // r7
  int v19; // r2
  int v20; // r7
  __int64 v21; // r0
  _DWORD *v22; // r6
  int v23; // r2
  int v24; // r3
  __int64 v25; // r0
  int v26; // r2
  __int64 v27; // r0
  int v28; // r7
  int v29; // r6
  int v30; // r2
  int v31; // r6
  int v32; // r7
  int v33; // r2
  int v34; // r2
  int v35; // r6
  int v36; // r7
  __int64 v37; // r0
  int v38; // r2
  int v39; // r7
  __int64 result; // r0
  int i; // r6
  int v42; // r2
  __int64 v43; // r0
  int v44; // [sp+4h] [bp-10h]
  int v45; // [sp+4h] [bp-10h]
  _DWORD v46[3]; // [sp+8h] [bp-Ch] BYREF

  v3 = *(_DWORD *)(a1 + 32);
  if ( v3 == a2 )
    LODWORD(v6) = 0;
  else
    LODWORD(v6) = *(_DWORD *)(a3 + 12) == 0 ? v3 : 0;
  HIDWORD(v6) = a3;
  sub_22F936(v6, a3);
  sub_22F926(*(_DWORD *)(a1 + 60), a3, v7);
  sub_22F926(*(_DWORD *)(a1 + 64), a3, v8);
  LODWORD(v9) = *(unsigned __int8 *)(a1 + 72);
  HIDWORD(v9) = a3;
  sub_22F912(v9, v10);
  LODWORD(v11) = *(unsigned __int8 *)(a1 + 73);
  HIDWORD(v11) = a3;
  sub_22F912(v11, v12);
  LODWORD(v13) = *(unsigned __int8 *)(a1 + 74);
  HIDWORD(v13) = a3;
  sub_22F912(v13, v14);
  LODWORD(v15) = *(unsigned __int8 *)(a1 + 75);
  HIDWORD(v15) = a3;
  sub_22F912(v15, v16);
  v17 = *(_DWORD *)(a1 + 44);
  v18 = *(_DWORD *)(a1 + 12);
  sub_22F926(v17, a3, v19);
  sub_22F8F4(v18, 4 * v17, a3);
  v20 = 0;
  v44 = *(_DWORD *)(a1 + 40);
  sub_22F926(v44, a3, v44);
  while ( v20 < v44 )
  {
    HIDWORD(v21) = a3;
    v22 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 16 * v20);
    LODWORD(v21) = v22[2];
    sub_22F912(v21, v44);
    v24 = v22[2];
    switch ( v24 )
    {
      case 3:
        v26 = v22[1];
        v46[0] = *v22;
        v46[1] = v26;
        sub_22F8F4((int)v46, 8, a3);
        break;
      case 4:
        LODWORD(v27) = *v22;
        HIDWORD(v27) = a3;
        sub_22F936(v27, v23);
        break;
      case 1:
        LODWORD(v25) = *v22;
        HIDWORD(v25) = a3;
        sub_22F912(v25, v23);
        break;
      default:
        break;
    }
    ++v20;
  }
  v28 = *(_DWORD *)(a1 + 52);
  v29 = 0;
  sub_22F926(v28, a3, v44);
  while ( v29 < v28 )
    sub_22F96C(*(_DWORD *)(4 * v29++ + *(_DWORD *)(a1 + 16)), *(_DWORD *)(a1 + 32), a3);
  v30 = *(_DWORD *)(a3 + 12);
  v31 = 0;
  if ( v30 == 0 )
    v31 = *(_DWORD *)(a1 + 48);
  v32 = *(_DWORD *)(a1 + 20);
  sub_22F926(v31, a3, v30);
  sub_22F8F4(v32, 4 * v31, a3);
  v45 = 0;
  if ( *(_DWORD *)(a3 + 12) == 0 )
  {
    v33 = *(_DWORD *)(a1 + 56);
    v45 = v33;
  }
  sub_22F926(v45, a3, v33);
  v35 = 0;
  while ( v35 < v45 )
  {
    v36 = 12 * v35;
    HIDWORD(v37) = a3;
    ++v35;
    LODWORD(v37) = *(_DWORD *)(*(_DWORD *)(a1 + 24) + v36);
    sub_22F936(v37, v34);
    sub_22F926(*(_DWORD *)(*(_DWORD *)(a1 + 24) + v36 + 4), a3, v38);
    sub_22F926(*(_DWORD *)(*(_DWORD *)(a1 + 24) + v36 + 8), a3, *(_DWORD *)(a1 + 24));
  }
  v39 = 0;
  if ( *(_DWORD *)(a3 + 12) == 0 )
    v39 = *(_DWORD *)(a1 + 36);
  result = sub_22F926(v39, a3, v34);
  for ( i = 0; i < v39; ++i )
  {
    v42 = *(_DWORD *)(a1 + 28);
    HIDWORD(v43) = a3;
    LODWORD(v43) = *(_DWORD *)(4 * i + v42);
    result = sub_22F936(v43, v42);
  }
  return result;
}


//======================================================================
// sub_22FAF4
// address: 0x0022FAF4   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_22FAF4(int a1, int a2, int a3, int a4, int a5)
{
  _DWORD v7[4]; // [sp+Ch] [bp-14h] BYREF
  int v8; // [sp+1Ch] [bp-4h]
  _BYTE v9[12]; // [sp+20h] [bp+0h] BYREF

  v7[2] = a4;
  v7[0] = a1;
  v7[3] = a5;
  v7[1] = a3;
  v8 = 0;
  sub_2379F4(v9);
  sub_22F8F4((int)v9, 12, (int)v7);
  sub_22F96C(a2, 0, (int)v7);
  return v8;
}


//======================================================================
// sub_22FB48
// address: 0x0022FB48   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_22FB48(int a1, int a2, int a3)
{
  char v3; // r5
  int v6; // r4

  v3 = a2;
  v6 = sub_23237C(a1, 0, 0, 16 * a2 + 24);
  sub_23079A(a1, v6, 6);
  *(_DWORD *)(v6 + 12) = a3;
  *(_BYTE *)(v6 + 7) = v3;
  *(_BYTE *)(v6 + 6) = 1;
  return v6;
}


//======================================================================
// sub_22FB74
// address: 0x0022FB74   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_22FB74(int a1, int a2, int a3)
{
  int v3; // r5
  int v6; // r4

  v3 = a2;
  v6 = sub_23237C(a1, 0, 0, 4 * a2 + 20);
  sub_23079A(a1, v6, 6);
  *(_BYTE *)(v6 + 6) = 0;
  *(_DWORD *)(v6 + 12) = a3;
  *(_BYTE *)(v6 + 7) = v3;
  while ( v3-- != 0 )
    *(_DWORD *)(v6 + 4 * v3 + 20) = 0;
  return v6;
}


//======================================================================
// sub_22FBAC
// address: 0x0022FBAC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_22FBAC(int a1)
{
  int v2; // r4

  v2 = sub_23237C(a1, 0, 0, 32);
  sub_23079A(a1, v2, 10);
  *(_DWORD *)(v2 + 8) = v2 + 16;
  *(_DWORD *)(v2 + 24) = 0;
  return v2;
}


//======================================================================
// sub_22FBD4
// address: 0x0022FBD4   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_22FBD4(int a1, unsigned int a2)
{
  int v2; // r5
  int *i; // r4
  int *v5; // r3
  int result; // r0
  char v7; // r2
  int v8; // r3
  int *v9; // r5
  int v10; // r3
  int v11; // r2

  v2 = *(_DWORD *)(a1 + 16);
  for ( i = (int *)(a1 + 104); ; i = (int *)*i )
  {
    v5 = (int *)*i;
    if ( *i == 0 || (v11 = v5[2]) < a2 )
    {
      result = sub_23237C(a1, 0, 0, 32);
      *(_BYTE *)(result + 4) = 10;
      v7 = *(_BYTE *)(v2 + 20);
      *(_DWORD *)(result + 8) = a2;
      *(_BYTE *)(result + 5) = v7 & 3;
      *(_DWORD *)result = *i;
      v8 = v2 + 120;
      *i = result;
      v9 = (int *)(v2 + 140);
      *(_DWORD *)(result + 16) = v8;
      v10 = *v9;
      *(_DWORD *)(result + 20) = *v9;
      *(_DWORD *)(v10 + 16) = result;
      *v9 = result;
      return result;
    }
    if ( v11 == a2 )
      break;
  }
  result = *i;
  if ( ((*(unsigned __int8 *)(v2 + 20) ^ 3) & *((_BYTE *)v5 + 5) & 3) != 0 )
    *((_BYTE *)v5 + 5) ^= 3u;
  return result;
}


//======================================================================
// sub_22FC3A
// address: 0x0022FC3A   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_22FC3A(int a1, _DWORD *a2)
{
  if ( (_DWORD *)a2[2] != a2 + 4 )
  {
    *(_DWORD *)(a2[5] + 16) = a2[4];
    *(_DWORD *)(a2[4] + 20) = a2[5];
  }
  return sub_23237C(a1, a2, 32, 0);
}


//======================================================================
// sub_22FC5C
// address: 0x0022FC5C   size: 0x58 (88 bytes)
//======================================================================
__int64 __fastcall sub_22FC5C(int a1, unsigned int a2)
{
  int v4; // r1
  _DWORD *v5; // r3
  int v6; // r7
  __int64 v8; // [sp+0h] [bp-Ch]

  LODWORD(v8) = a1;
  HIDWORD(v8) = *(_DWORD *)(a1 + 16);
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 104);
    if ( v4 == 0 || *(_DWORD *)(v4 + 8) < a2 )
      break;
    *(_DWORD *)(a1 + 104) = *(_DWORD *)v4;
    if ( (*(unsigned __int8 *)(v4 + 5) & ~*(unsigned __int8 *)(HIDWORD(v8) + 20)) << 30 != 0 )
    {
      sub_22FC3A(a1, (_DWORD *)v4);
    }
    else
    {
      *(_DWORD *)(*(_DWORD *)(v4 + 20) + 16) = *(_DWORD *)(v4 + 16);
      *(_DWORD *)(*(_DWORD *)(v4 + 16) + 20) = *(_DWORD *)(v4 + 20);
      v5 = *(_DWORD **)(v4 + 8);
      v6 = v5[1];
      *(_DWORD *)(v4 + 16) = *v5;
      *(_DWORD *)(v4 + 20) = v6;
      *(_DWORD *)(v4 + 24) = v5[2];
      *(_DWORD *)(v4 + 8) = v4 + 16;
      sub_2307AE(a1);
    }
  }
  return v8;
}


//======================================================================
// sub_22FCB4
// address: 0x0022FCB4   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_22FCB4(int a1)
{
  int v2; // r4

  v2 = sub_23237C(a1, 0, 0, 76);
  sub_23079A(a1, v2, 9);
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 40) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)(v2 + 52) = 0;
  *(_DWORD *)(v2 + 12) = 0;
  *(_DWORD *)(v2 + 44) = 0;
  *(_DWORD *)(v2 + 48) = 0;
  *(_DWORD *)(v2 + 36) = 0;
  *(_BYTE *)(v2 + 72) = 0;
  *(_DWORD *)(v2 + 28) = 0;
  *(_BYTE *)(v2 + 73) = 0;
  *(_BYTE *)(v2 + 74) = 0;
  *(_BYTE *)(v2 + 75) = 0;
  *(_DWORD *)(v2 + 20) = 0;
  *(_DWORD *)(v2 + 56) = 0;
  *(_DWORD *)(v2 + 24) = 0;
  *(_DWORD *)(v2 + 60) = 0;
  *(_DWORD *)(v2 + 64) = 0;
  *(_DWORD *)(v2 + 32) = 0;
  return v2;
}


//======================================================================
// sub_22FCFE
// address: 0x0022FCFE   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_22FCFE(int a1, _DWORD *a2)
{
  sub_23237C(a1, a2[3], 4 * a2[11], 0);
  sub_23237C(a1, a2[4], 4 * a2[13], 0);
  sub_23237C(a1, a2[2], 16 * a2[10], 0);
  sub_23237C(a1, a2[5], 4 * a2[12], 0);
  sub_23237C(a1, a2[6], 12 * a2[14], 0);
  sub_23237C(a1, a2[7], 4 * a2[9], 0);
  return sub_23237C(a1, a2, 76, 0);
}


//======================================================================
// sub_22FD66
// address: 0x0022FD66   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_22FD66(int a1, int a2)
{
  int v2; // r2
  int v3; // r2

  v2 = *(unsigned __int8 *)(a2 + 7);
  if ( *(_BYTE *)(a2 + 6) != 0 )
    v3 = 16 * v2 + 24;
  else
    v3 = 4 * v2 + 20;
  return sub_23237C(a1, a2, v3, 0);
}


//======================================================================
// sub_22FD82
// address: 0x0022FD82   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_22FD82(int a1, int a2, int a3)
{
  int i; // r3
  _DWORD *v4; // r4

  for ( i = 0; i < *(_DWORD *)(a1 + 56); ++i )
  {
    v4 = (_DWORD *)(*(_DWORD *)(a1 + 24) + 12 * i);
    if ( v4[1] > a3 )
      break;
    if ( a3 < v4[2] && --a2 == 0 )
      return *v4 + 16;
  }
  return 0;
}


//======================================================================
// sub_22FDB6
// address: 0x0022FDB6   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_22FDB6(int a1, int a2)
{
  char v4; // r3
  int result; // r0
  int v6; // r1
  int *v7; // r3

  while ( 2 )
  {
    v4 = *(_BYTE *)(a2 + 5) & 0xFC;
    result = *(unsigned __int8 *)(a2 + 4) - 5;
    *(_BYTE *)(a2 + 5) = v4;
    switch ( result )
    {
      case 0:
        *(_DWORD *)(a2 + 24) = *(_DWORD *)(a1 + 36);
        goto LABEL_16;
      case 1:
        *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 36);
        goto LABEL_16;
      case 2:
        v6 = *(_DWORD *)(a2 + 8);
        *(_BYTE *)(a2 + 5) = v4 | 4;
        if ( v6 != 0 && *(unsigned __int8 *)(v6 + 5) << 30 != 0 )
          result = sub_22FDB6(a1);
        a2 = *(_DWORD *)(a2 + 12);
        if ( *(unsigned __int8 *)(a2 + 5) << 30 != 0 )
          continue;
        return result;
      case 3:
        *(_DWORD *)(a2 + 108) = *(_DWORD *)(a1 + 36);
        goto LABEL_16;
      case 4:
        *(_DWORD *)(a2 + 68) = *(_DWORD *)(a1 + 36);
LABEL_16:
        *(_DWORD *)(a1 + 36) = a2;
        break;
      case 5:
        v7 = *(int **)(a2 + 8);
        if ( v7[2] > 3 && *(unsigned __int8 *)(*v7 + 5) << 30 != 0 )
          result = sub_22FDB6(a1);
        if ( *(_DWORD *)(a2 + 8) == a2 + 16 )
          *(_BYTE *)(a2 + 5) |= 4u;
        break;
      default:
        return result;
    }
    return result;
  }
}


//======================================================================
// sub_22FE3C
// address: 0x0022FE3C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_22FE3C(int result)
{
  int v1; // r5
  int v2; // r4
  int v3; // r6
  int v4; // r1

  v1 = result;
  v2 = result;
  v3 = result + 36;
  do
  {
    v4 = *(_DWORD *)(v2 + 152);
    if ( v4 != 0 && *(unsigned __int8 *)(v4 + 5) << 30 != 0 )
      result = sub_22FDB6(v1, v4);
    v2 += 4;
  }
  while ( v2 != v3 );
  return result;
}


//======================================================================
// sub_22FE64
// address: 0x0022FE64   size: 0x9C (156 bytes)
//======================================================================
int __fastcall sub_22FE64(int a1)
{
  int v1; // r4
  _DWORD *v3; // r3
  _DWORD *v4; // r6
  int result; // r0
  char v6; // r3
  int v7; // r1
  _DWORD *v8; // r3
  int v9; // r2
  int v10; // r3
  char *v11; // r1
  char v12; // [sp+8h] [bp-Ch]
  int v13; // [sp+Ch] [bp-8h]

  v1 = *(_DWORD *)(a1 + 16);
  v3 = *(_DWORD **)(v1 + 48);
  v4 = (_DWORD *)*v3;
  if ( (_DWORD *)*v3 == v3 )
    *(_DWORD *)(v1 + 48) = 0;
  else
    *v3 = *v4;
  *v4 = **(_DWORD **)(v1 + 112);
  **(_DWORD **)(v1 + 112) = v4;
  result = v4[2];
  *((_BYTE *)v4 + 5) = *(_BYTE *)(v1 + 20) & 3 | *((_BYTE *)v4 + 5) & 0xF8;
  if ( result != 0 && (*(_BYTE *)(result + 6) & 4) == 0 )
  {
    result = sub_2375CC();
    if ( result != 0 )
    {
      v6 = *(_BYTE *)(a1 + 57);
      v7 = *(_DWORD *)(v1 + 64);
      *(_BYTE *)(a1 + 57) = 0;
      v12 = v6;
      v13 = v7;
      *(_DWORD *)(v1 + 64) = 2 * *(_DWORD *)(v1 + 68);
      v8 = *(_DWORD **)(a1 + 8);
      v9 = *(_DWORD *)(result + 4);
      *v8 = *(_DWORD *)result;
      v8[1] = v9;
      v8[2] = *(_DWORD *)(result + 8);
      v10 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(v10 + 24) = 7;
      *(_DWORD *)(v10 + 16) = v4;
      v11 = *(char **)(a1 + 8);
      *(_DWORD *)(a1 + 8) = v11 + 32;
      result = sub_22F73C(a1, v11, 0);
      *(_BYTE *)(a1 + 57) = v12;
      *(_DWORD *)(v1 + 64) = v13;
    }
  }
  return result;
}


//======================================================================
// sub_22FF00
// address: 0x0022FF00   size: 0xCA (202 bytes)
//======================================================================
int *__fastcall sub_22FF00(int a1, int *a2, int a3)
{
  int v3; // r7
  int v6; // r4
  int v7; // r2
  int v9; // [sp+0h] [bp-Ch]
  int v10; // [sp+4h] [bp-8h]

  v3 = *(_DWORD *)(a1 + 16);
  v10 = *(unsigned __int8 *)(v3 + 20) ^ 3;
  while ( 1 )
  {
    v6 = *a2;
    v9 = a3;
    if ( *a2 == 0 || a3 == 0 )
      return a2;
    if ( *(_BYTE *)(v6 + 4) == 8 )
      sub_22FF00(a1, v6 + 104, -3);
    if ( ((*(unsigned __int8 *)(v6 + 5) ^ 3) & v10) != 0 )
    {
      a2 = (int *)v6;
      *(_BYTE *)(v6 + 5) = *(_BYTE *)(v3 + 20) & 3 | *(_BYTE *)(v6 + 5) & 0xF8;
    }
    else
    {
      *a2 = *(_DWORD *)v6;
      if ( v6 == *(_DWORD *)(v3 + 28) )
        *(_DWORD *)(v3 + 28) = *(_DWORD *)v6;
      switch ( *(_BYTE *)(v6 + 4) )
      {
        case 4:
          --*(_DWORD *)(*(_DWORD *)(a1 + 16) + 4);
          v7 = *(_DWORD *)(v6 + 12) + 17;
          goto LABEL_18;
        case 5:
          sub_2369B0(a1, v6);
          break;
        case 6:
          sub_22FD66(a1, v6);
          break;
        case 7:
          v7 = *(_DWORD *)(v6 + 16) + 24;
LABEL_18:
          sub_23237C(a1, v6, v7, 0);
          break;
        case 8:
          sub_2350B8(a1, v6);
          break;
        case 9:
          sub_22FCFE(a1, (_DWORD *)v6);
          break;
        case 0xA:
          sub_22FC3A(a1, (_DWORD *)v6);
          break;
        default:
          break;
      }
    }
    a3 = v9 - 1;
  }
}


//======================================================================
// sub_22FFCA
// address: 0x0022FFCA   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_22FFCA(int *a1, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r0
  int v5; // r0

  v2 = a1[2];
  v3 = 0;
  if ( v2 > 3 )
  {
    v4 = *a1;
    if ( v2 == 4 )
    {
      *(_BYTE *)(v4 + 5) &= 0xFCu;
    }
    else
    {
      v5 = *(unsigned __int8 *)(v4 + 5);
      v3 = 1;
      if ( (v5 & 3) == 0 )
      {
        v3 = 0;
        if ( v2 == 7 && a2 == 0 )
          return (unsigned int)(v5 << 28) >> 31;
      }
    }
  }
  return v3;
}


//======================================================================
// sub_22FFFE
// address: 0x0022FFFE   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_22FFFE(int *a1)
{
  int v1; // r4
  int v3; // r1
  int v4; // r3
  int v5; // r1
  int v6; // r1
  int result; // r0

  v1 = *a1;
  v3 = *(_DWORD *)(*a1 + 112);
  *(_DWORD *)(v1 + 36) = 0;
  *(_DWORD *)(v1 + 40) = 0;
  *(_DWORD *)(v1 + 44) = 0;
  if ( *(unsigned __int8 *)(v3 + 5) << 30 != 0 )
    sub_22FDB6(v1, v3);
  v4 = *(_DWORD *)(v1 + 112);
  if ( *(int *)(v4 + 80) > 3 )
  {
    v5 = *(_DWORD *)(v4 + 72);
    if ( *(unsigned __int8 *)(v5 + 5) << 30 != 0 )
      sub_22FDB6(v1, v5);
  }
  if ( *(int *)(*a1 + 104) > 3 )
  {
    v6 = *(_DWORD *)(*a1 + 96);
    if ( *(unsigned __int8 *)(v6 + 5) << 30 != 0 )
      sub_22FDB6(v1, v6);
  }
  result = sub_22FE3C(v1);
  *(_BYTE *)(v1 + 21) = 1;
  return result;
}

