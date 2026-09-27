// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_3B0000

//======================================================================
// sub_3B06F8
// address: 0x003B06F8   size: 0xC4 (196 bytes)
//======================================================================
_DWORD *__fastcall sub_3B06F8(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        wchar_t a4,
        _DWORD *a5,
        int a6,
        char a7,
        int a8,
        _DWORD *a9,
        double *a10)
{
  const char *v11; // r9
  wchar_t v12; // r2
  char *v13; // r4
  _DWORD v15[2]; // [sp+18h] [bp-1Ch] BYREF
  _DWORD *v16; // [sp+20h] [bp-14h]
  wchar_t v17; // [sp+24h] [bp-10h]
  char *v18; // [sp+28h] [bp-Ch] BYREF
  int v19; // [sp+2Ch] [bp-8h] BYREF

  v17 = a4;
  v16 = a3;
  v18 = &byte_55FB88;
  if ( a7 != 0 )
    sub_3AFED4(v15, a2, v16, v17, a5, a6, a8, a9, (int)&v18);
  else
    sub_3AF6D4(v15, a2, v16, v17, a5, a6, a8, a9, (int)&v18);
  v16 = (_DWORD *)v15[0];
  v17 = v15[1];
  v11 = v18;
  v19 = sub_3A8844();
  std::__convert_to_v<long double>(v11, a10, a9);
  v12 = v17;
  *a1 = v16;
  a1[1] = v12;
  v13 = v18 - 12;
  if ( v18 - 12 != (char *)&dword_55FB7C && sub_3C82FC(v18 - 4, -1) <= 0 )
    sub_3BDF60(v13, &v19);
  return a1;
}


//======================================================================
// sub_3B07D0
// address: 0x003B07D0   size: 0xFA (250 bytes)
//======================================================================
_DWORD *__fastcall sub_3B07D0(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        wchar_t a4,
        _DWORD *a5,
        int a6,
        char a7,
        int a8,
        _DWORD *a9,
        int *a10)
{
  void *v12; // r10
  char *v13; // r0
  int *v14; // r7
  int v15; // r6
  char *v16; // r7
  int v17; // r3
  char *v18; // r9
  wchar_t v19; // r2
  _DWORD v21[2]; // [sp+18h] [bp-18h] BYREF
  _DWORD *v22; // [sp+20h] [bp-10h]
  wchar_t v23; // [sp+24h] [bp-Ch]
  _BYTE v24[4]; // [sp+28h] [bp-8h] BYREF
  char *v25; // [sp+2Ch] [bp-4h] BYREF

  v23 = a4;
  v22 = a3;
  v25 = &byte_55FB88;
  v12 = sub_3AB100(a8 + 108);
  if ( a7 != 0 )
    sub_3AFED4(v21, a2, v22, v23, a5, a6, a8, a9, (int)&v25);
  else
    sub_3AF6D4(v21, a2, v22, v23, a5, a6, a8, a9, (int)&v25);
  v22 = (_DWORD *)v21[0];
  v23 = v21[1];
  v13 = v25;
  v14 = (int *)(v25 - 12);
  v15 = *((_DWORD *)v25 - 3);
  if ( v15 != 0 )
  {
    sub_3B7E50(a10, *((_DWORD *)v25 - 3), 0);
    v16 = v25;
    v17 = *a10;
    v18 = &v25[v15];
    if ( *(int *)(*a10 - 4) >= 0 )
    {
      sub_3B74A0(a10);
      v17 = *a10;
    }
    (*(void (__fastcall **)(void *, char *, char *, int))(*(_DWORD *)v12 + 44))(v12, v16, v18, v17);
    v13 = v25;
    v14 = (int *)(v25 - 12);
  }
  v19 = v23;
  *a1 = v22;
  a1[1] = v19;
  if ( v14 != &dword_55FB7C && sub_3C82FC(v13 - 4, -1) <= 0 )
    sub_3BDF60(v14, v24);
  return a1;
}


//======================================================================
// sub_3B08DC
// address: 0x003B08DC   size: 0x6AC (1708 bytes)
//======================================================================
_DWORD *__fastcall sub_3B08DC(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  _DWORD *v9; // r7
  wchar_t v10; // r5
  int v11; // r6
  _BOOL4 v12; // r10
  int v13; // r3
  int v14; // r11
  _BOOL4 v15; // r1
  int v16; // r10
  char v17; // r8
  int v18; // r3
  int v19; // r2
  int v20; // r5
  int v21; // r3
  int *v22; // r2
  _DWORD *v23; // r0
  unsigned int v24; // r3
  int *v25; // r3
  _DWORD *v26; // r0
  int v27; // r3
  int v28; // r5
  int v29; // r2
  unsigned int v31; // r3
  int v32; // r0
  int v33; // r1
  int *v34; // r3
  int v35; // r5
  int v36; // r3
  _DWORD *v37; // r0
  unsigned int v38; // r3
  int *v39; // r3
  _DWORD *v40; // r0
  int v41; // r3
  int v42; // r0
  wchar_t *v43; // r0
  int *v44; // r3
  int v45; // r0
  int v46; // r0
  int v47; // r5
  int v48; // r1
  int v49; // r0
  wchar_t v50; // r8
  int v51; // r0
  int v52; // r2
  _DWORD *v53; // r8
  wchar_t v54; // r7
  _DWORD *v55; // r0
  unsigned int v56; // r2
  int *v57; // r2
  _DWORD *v58; // r0
  int v59; // r5
  int v60; // r3
  int v61; // r1
  int v62; // r0
  int v63; // r0
  int *v64; // r3
  int v65; // r0
  int v66; // r0
  int v67; // r0
  int v68; // r0
  int v69; // r0
  int v70; // r0
  int v71; // [sp+Ch] [bp-30h]
  int v72; // [sp+10h] [bp-2Ch]
  int v73; // [sp+14h] [bp-28h]
  wchar_t *s; // [sp+18h] [bp-24h]
  _DWORD *v76; // [sp+20h] [bp-1Ch] BYREF
  int v77; // [sp+24h] [bp-18h]
  _BYTE v78[4]; // [sp+2Ch] [bp-10h] BYREF
  _BYTE v79[4]; // [sp+30h] [bp-Ch] BYREF
  _DWORD v80[2]; // [sp+34h] [bp-8h] BYREF

  v76 = a3;
  v77 = a4;
  v9 = a9;
  v10 = 0;
  v11 = sub_3ADBF0((int)v78, (int *)(a7 + 108));
  v12 = sub_3AE580((int)&v76, (int)&a5);
  if ( v12 )
    goto LABEL_3;
  v49 = sub_3AE544((int)&v76);
  v50 = v49;
  if ( *(_DWORD *)(v11 + 192) != v49 && *(_DWORD *)(v11 + 188) != v49 )
  {
    v13 = *(unsigned __int8 *)(v11 + 16);
    goto LABEL_127;
  }
  v13 = *(unsigned __int8 *)(v11 + 16);
  if ( *(_BYTE *)(v11 + 16) != 0 && *(_DWORD *)(v11 + 40) == v49 )
  {
    v13 = 1;
    goto LABEL_127;
  }
  if ( *(_DWORD *)(v11 + 36) != v49 )
  {
    v61 = 43;
    if ( *(_DWORD *)(v11 + 192) != v49 )
      v61 = 45;
    sub_3BEA50(v9, v61);
    v62 = sub_3ADB20((int)&v76);
    v10 = v50;
    if ( !sub_3AE580(v62, (int)&a5) )
    {
      v63 = sub_3AE544((int)&v76);
      v13 = *(unsigned __int8 *)(v11 + 16);
      v50 = v63;
      goto LABEL_127;
    }
LABEL_3:
    v13 = *(unsigned __int8 *)(v11 + 16);
    v14 = 0;
    v12 = true;
    v71 = 0;
    goto LABEL_4;
  }
LABEL_127:
  v51 = v50;
  v52 = 0;
  v53 = v9;
  v71 = 0;
  while ( 1 )
  {
    if ( v13 != 0 && *(_DWORD *)(v11 + 40) == v51 )
    {
      v14 = v52;
      v9 = v53;
      v10 = v51;
      v80[0] = &byte_55FB88;
      goto LABEL_123;
    }
    if ( *(_DWORD *)(v11 + 36) == v51 )
      break;
    v54 = *(_DWORD *)(v11 + 204);
    if ( v54 != v51 )
      break;
    if ( v52 == 0 )
      sub_3BEA50(v53, 48);
    v55 = v76;
    ++v71;
    if ( v76 == nullptr )
      goto LABEL_157;
    v56 = v76[2];
    if ( v56 < v76[3] )
    {
      v76[2] = v56 + 4;
      v77 = -1;
LABEL_138:
      v57 = (int *)v55[2];
      if ( (unsigned int)v57 < v55[3] )
        v66 = *v57;
      else
        v66 = (*(int (__fastcall **)(_DWORD *))(*v55 + 36))(v55);
      if ( v66 != -1 )
      {
        v77 = v66;
        v58 = a5;
        v59 = 0;
        if ( a5 == nullptr )
          goto LABEL_159;
        goto LABEL_143;
      }
      v76 = nullptr;
LABEL_157:
      v59 = 1;
      goto LABEL_158;
    }
    (*(void (__fastcall **)(_DWORD *))(*v76 + 40))(v76);
    v55 = v76;
    v77 = -1;
    if ( v76 != nullptr )
      goto LABEL_138;
    v59 = 1;
LABEL_158:
    v58 = a5;
    if ( a5 == nullptr )
    {
LABEL_159:
      if ( v59 == 1 )
        goto LABEL_145;
      goto LABEL_160;
    }
LABEL_143:
    v60 = 0;
    if ( a6 == -1 )
    {
      v64 = (int *)v58[2];
      if ( (unsigned int)v64 >= v58[3] )
        v65 = (*(int (__fastcall **)(_DWORD *, int))(*v58 + 36))(v58, a6 + 1);
      else
        v65 = *v64;
      if ( v65 == -1 )
      {
        a5 = nullptr;
        v60 = 1;
      }
      else
      {
        a6 = v65;
        v60 = 0;
      }
    }
    if ( v60 == v59 )
    {
LABEL_145:
      v10 = v54;
      v13 = *(unsigned __int8 *)(v11 + 16);
      v9 = v53;
      v14 = 1;
      v12 = true;
      goto LABEL_4;
    }
LABEL_160:
    v51 = sub_3AE544((int)&v76);
    v13 = *(unsigned __int8 *)(v11 + 16);
    v52 = 1;
  }
  v14 = v52;
  v9 = v53;
  v10 = v51;
LABEL_4:
  v80[0] = &byte_55FB88;
  if ( v13 != 0 )
LABEL_123:
    sub_3BE700(v80, 32);
  v73 = *(unsigned __int8 *)(v11 + 292);
  if ( *(_BYTE *)(v11 + 292) == 0 )
  {
    v15 = v12;
    v16 = 0;
    v72 = 0;
    if ( v15 )
      goto LABEL_24;
    while ( 2 )
    {
      v17 = v10 - 48;
      if ( (unsigned int)(v10 - 48) <= 9 )
      {
LABEL_8:
        v18 = *v9;
        v19 = *(_DWORD *)(*v9 - 12);
        v20 = v19 + 1;
        if ( (unsigned int)(v19 + 1) > *(_DWORD *)(*v9 - 8) || *(int *)(v18 - 4) > 0 )
        {
          sub_3BE700(v9, v19 + 1);
          v18 = *v9;
          v19 = *(_DWORD *)(*v9 - 12);
        }
        *(_BYTE *)(v18 + v19) = v17 + 48;
        v21 = *v9;
        v22 = (int *)(*v9 - 12);
        v14 = 1;
        if ( v22 != &dword_55FB7C )
        {
          *(_DWORD *)(v21 - 4) = 0;
          *v22 = v20;
          *(_BYTE *)(v21 + v20) = 0;
        }
        break;
      }
LABEL_34:
      if ( *(_DWORD *)(v11 + 36) == v10 && (v72 ^ 1) << 24 != 0 && (v16 ^ 1) << 24 != 0 )
      {
        sub_3BEA50(v9, 46);
        v16 = 0;
        v72 = 1;
      }
      else
      {
        if ( *(_DWORD *)(v11 + 260) != v10 && *(_DWORD *)(v11 + 284) != v10 || (v16 ^ 1) << 24 == 0 || v14 == 0 )
          goto LABEL_24;
        sub_3BEA50(v9, 101);
        if ( v76 != nullptr )
        {
          v31 = v76[2];
          if ( v31 < v76[3] )
            v76[2] = v31 + 4;
          else
            (*(void (__fastcall **)(_DWORD *))(*v76 + 40))(v76);
          v77 = -1;
        }
        if ( sub_3AE580((int)&v76, (int)&a5) )
        {
          v16 = 1;
          goto LABEL_24;
        }
        v32 = sub_3AE544((int)&v76);
        v10 = v32;
        if ( *(_DWORD *)(v11 + 192) == v32 )
        {
          v33 = 43;
        }
        else
        {
          v33 = 45;
          if ( *(_DWORD *)(v11 + 188) != v32 )
          {
            v16 = 1;
            v14 = 1;
            continue;
          }
        }
        sub_3BEA50(v9, v33);
        v16 = 1;
        v14 = 1;
      }
      break;
    }
    v23 = v76;
    if ( v76 == nullptr )
      goto LABEL_30;
    v24 = v76[2];
    if ( v24 < v76[3] )
    {
      v76[2] = v24 + 4;
      v77 = -1;
      goto LABEL_16;
    }
    (*(void (__fastcall **)(_DWORD *))(*v76 + 40))(v76);
    v23 = v76;
    v77 = -1;
    if ( v76 != nullptr )
    {
LABEL_16:
      v25 = (int *)v23[2];
      if ( (unsigned int)v25 < v23[3] )
        v70 = *v25;
      else
        v70 = (*(int (__fastcall **)(_DWORD *))(*v23 + 36))(v23);
      if ( v70 == -1 )
      {
        v76 = nullptr;
        v35 = 1;
        goto LABEL_31;
      }
      v77 = v70;
      v26 = a5;
      v35 = 0;
      if ( a5 != nullptr )
        goto LABEL_22;
LABEL_32:
      if ( v35 == 1 )
        goto LABEL_24;
    }
    else
    {
LABEL_30:
      v35 = 1;
LABEL_31:
      v26 = a5;
      if ( a5 == nullptr )
        goto LABEL_32;
LABEL_22:
      v27 = 0;
      if ( a6 == -1 )
      {
        v34 = (int *)v26[2];
        if ( (unsigned int)v34 < v26[3] )
          v68 = *v34;
        else
          v68 = (*(int (__fastcall **)(_DWORD *, int))(*v26 + 36))(v26, a6 + 1);
        if ( v68 == -1 )
        {
          a5 = nullptr;
          v27 = 1;
        }
        else
        {
          a6 = v68;
          v27 = 0;
        }
      }
      if ( v27 == v35 )
        goto LABEL_24;
    }
    v10 = sub_3AE544((int)&v76);
    v17 = v10 - 48;
    if ( (unsigned int)(v10 - 48) <= 9 )
      goto LABEL_8;
    goto LABEL_34;
  }
  if ( v12 )
  {
    v16 = 0;
    v72 = 0;
    goto LABEL_24;
  }
  s = (wchar_t *)(v11 + 204);
  v72 = 0;
  v36 = *(unsigned __int8 *)(v11 + 16);
  v16 = 0;
LABEL_63:
  if ( v36 == 0 )
    goto LABEL_65;
  while ( 1 )
  {
    if ( v10 == *(_DWORD *)(v11 + 40) )
    {
      while ( (v16 ^ 1) << 24 != 0 && (v72 ^ 1) << 24 != 0 )
      {
        if ( v71 == 0 )
        {
          sub_3BDFA4(v9, 0, *(_DWORD *)(*v9 - 12), 0);
          v16 = 0;
          v72 = 0;
          goto LABEL_24;
        }
        sub_3BEA50(v80, (unsigned __int8)v71);
        v37 = v76;
        v16 = 0;
        v72 = 0;
        v71 = 0;
        if ( v76 != nullptr )
          goto LABEL_72;
LABEL_90:
        v47 = v73;
LABEL_91:
        v40 = a5;
        if ( a5 != nullptr )
          goto LABEL_81;
LABEL_92:
        v41 = v73;
LABEL_82:
        if ( v47 == v41 )
          goto LABEL_24;
        v42 = sub_3AE544((int)&v76);
        v10 = v42;
        if ( *(_BYTE *)(v11 + 16) == 0 || v42 != *(_DWORD *)(v11 + 40) )
          goto LABEL_65;
      }
      goto LABEL_24;
    }
LABEL_65:
    if ( v10 == *(_DWORD *)(v11 + 36) )
      break;
    v43 = j_wmemchr(s, v10, 0xAu);
    if ( v43 != nullptr )
    {
      sub_3BEA50(v9, (unsigned __int8)(v43 - s + 48));
      ++v71;
      v14 = 1;
LABEL_71:
      v37 = v76;
      if ( v76 == nullptr )
        goto LABEL_90;
LABEL_72:
      v38 = v37[2];
      if ( v38 < v37[3] )
      {
        v37[2] = v38 + 4;
        v77 = -1;
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *))(*v37 + 40))(v37);
        v37 = v76;
        v77 = -1;
        if ( v76 == nullptr )
        {
          v47 = v73;
          goto LABEL_91;
        }
      }
      v39 = (int *)v37[2];
      if ( (unsigned int)v39 < v37[3] )
        v67 = *v39;
      else
        v67 = (*(int (__fastcall **)(_DWORD *))(*v37 + 36))(v37);
      if ( v67 == -1 )
      {
        v76 = nullptr;
        v47 = v73;
        goto LABEL_91;
      }
      v77 = v67;
      v40 = a5;
      v47 = 0;
      if ( a5 == nullptr )
        goto LABEL_92;
LABEL_81:
      v41 = 0;
      if ( a6 == -1 )
      {
        v44 = (int *)v40[2];
        if ( (unsigned int)v44 < v40[3] )
          v69 = *v44;
        else
          v69 = (*(int (__fastcall **)(_DWORD *))(*v40 + 36))(v40);
        if ( v69 == -1 )
        {
          a5 = nullptr;
          v41 = v73;
        }
        else
        {
          a6 = v69;
          v41 = 0;
        }
      }
      goto LABEL_82;
    }
    if ( v10 != *(_DWORD *)(v11 + 260) && v10 != *(_DWORD *)(v11 + 284) || v16 != 0 || v14 == 0 )
      goto LABEL_24;
    if ( *(_DWORD *)(v80[0] - 12) != 0 && v72 == 0 )
      sub_3BEA50(v80, (unsigned __int8)v71);
    sub_3BEA50(v9, 101);
    v45 = sub_3ADB20((int)&v76);
    if ( sub_3AE580(v45, (int)&a5) )
    {
      v16 = 1;
      goto LABEL_24;
    }
    v46 = sub_3AE544((int)&v76);
    v10 = v46;
    if ( *(_DWORD *)(v11 + 192) != v46 && *(_DWORD *)(v11 + 188) != v46 )
    {
      v36 = *(unsigned __int8 *)(v11 + 16);
      v16 = 1;
      v14 = 1;
      goto LABEL_63;
    }
    v36 = *(unsigned __int8 *)(v11 + 16);
    if ( *(_BYTE *)(v11 + 16) == 0 || *(_DWORD *)(v11 + 40) != v46 )
    {
      if ( *(_DWORD *)(v11 + 36) != v46 )
      {
        v48 = 43;
        if ( *(_DWORD *)(v11 + 192) != v46 )
          v48 = 45;
        sub_3BEA50(v9, v48);
        v16 = 1;
        v14 = 1;
        goto LABEL_71;
      }
      v16 = 1;
      v14 = 1;
      goto LABEL_63;
    }
    v16 = 1;
    v14 = 1;
  }
  if ( (v16 ^ 1) << 24 != 0 && (v72 ^ 1) << 24 != 0 )
  {
    if ( *(_DWORD *)(v80[0] - 12) != 0 )
      sub_3BEA50(v80, (unsigned __int8)v71);
    sub_3BEA50(v9, 46);
    v16 = 0;
    v72 = 1;
    goto LABEL_71;
  }
LABEL_24:
  v28 = v80[0] - 12;
  if ( *(_DWORD *)(v80[0] - 12) != 0 )
  {
    if ( (v16 ^ 1) << 24 != 0 && (v72 ^ 1) << 24 != 0 )
    {
      sub_3BEA50(v80, (unsigned __int8)v71);
      v28 = v80[0] - 12;
    }
    if ( sub_3BFF94(*(_DWORD *)(v11 + 8), *(_DWORD *)(v11 + 12), v80) == 0 )
      *a8 = 4;
  }
  v29 = v77;
  *a1 = v76;
  a1[1] = v29;
  sub_3BDF68(v28, v79);
  return a1;
}


//======================================================================
// sub_3B0F9C
// address: 0x003B0F9C   size: 0x134 (308 bytes)
//======================================================================
_DWORD *__fastcall sub_3B0F9C(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        float *a9)
{
  const char *v11; // r8
  int v12; // r8
  _DWORD *v13; // r0
  int v14; // r3
  int v15; // r2
  char *v16; // r4
  int *v18; // r3
  int v19; // r0
  int *v20; // r3
  int v21; // r0
  _DWORD v22[2]; // [sp+18h] [bp-14h] BYREF
  _DWORD *v23; // [sp+20h] [bp-Ch]
  int v24; // [sp+24h] [bp-8h]
  char *v25; // [sp+28h] [bp-4h] BYREF
  int v26; // [sp+2Ch] [bp+0h] BYREF

  v24 = a4;
  v23 = a3;
  v25 = &byte_55FB88;
  sub_3BE700(&v25, 32);
  sub_3B08DC(v22, a2, v23, v24, a5, a6, a7, a8, &v25);
  v23 = (_DWORD *)v22[0];
  v24 = v22[1];
  v11 = v25;
  v26 = sub_3A8844();
  std::__convert_to_v<float>(v11, a9, a8);
  if ( v23 == nullptr )
  {
    v12 = 1;
    goto LABEL_3;
  }
  v12 = 0;
  if ( v24 != -1 )
    goto LABEL_3;
  v20 = (int *)v23[2];
  if ( (unsigned int)v20 >= v23[3] )
    v21 = (*(int (**)(void))(*v23 + 36))();
  else
    v21 = *v20;
  if ( v21 == -1 )
  {
    v23 = nullptr;
    v12 = 1;
LABEL_3:
    v13 = a5;
    if ( a5 != nullptr )
      goto LABEL_4;
LABEL_16:
    v14 = 1;
    goto LABEL_5;
  }
  v24 = v21;
  v13 = a5;
  v12 = 0;
  if ( a5 == nullptr )
    goto LABEL_16;
LABEL_4:
  v14 = 0;
  if ( a6 == -1 )
  {
    v18 = (int *)v13[2];
    if ( (unsigned int)v18 >= v13[3] )
      v19 = (*(int (__fastcall **)(_DWORD *))(*v13 + 36))(v13);
    else
      v19 = *v18;
    v14 = v19 == -1;
  }
LABEL_5:
  if ( v12 == v14 )
    *a8 |= 2u;
  v15 = v24;
  *a1 = v23;
  a1[1] = v15;
  v16 = v25 - 12;
  if ( v25 - 12 != (char *)&dword_55FB7C && sub_3C82FC(v25 - 4, -1) <= 0 )
    sub_3BDF60(v16, &v26);
  return a1;
}


//======================================================================
// sub_3B10E4
// address: 0x003B10E4   size: 0x134 (308 bytes)
//======================================================================
_DWORD *__fastcall sub_3B10E4(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int a9)
{
  const char *v11; // r8
  int v12; // r8
  _DWORD *v13; // r0
  int v14; // r3
  int v15; // r2
  char *v16; // r4
  int *v18; // r3
  int v19; // r0
  int *v20; // r3
  int v21; // r0
  _DWORD v22[2]; // [sp+18h] [bp-14h] BYREF
  _DWORD *v23; // [sp+20h] [bp-Ch]
  int v24; // [sp+24h] [bp-8h]
  char *v25; // [sp+28h] [bp-4h] BYREF
  int v26; // [sp+2Ch] [bp+0h] BYREF

  v24 = a4;
  v23 = a3;
  v25 = &byte_55FB88;
  sub_3BE700(&v25, 32);
  sub_3B08DC(v22, a2, v23, v24, a5, a6, a7, a8, &v25);
  v23 = (_DWORD *)v22[0];
  v24 = v22[1];
  v11 = v25;
  v26 = sub_3A8844();
  std::__convert_to_v<double>(v11, a9, a8);
  if ( v23 == nullptr )
  {
    v12 = 1;
    goto LABEL_3;
  }
  v12 = 0;
  if ( v24 != -1 )
    goto LABEL_3;
  v20 = (int *)v23[2];
  if ( (unsigned int)v20 >= v23[3] )
    v21 = (*(int (**)(void))(*v23 + 36))();
  else
    v21 = *v20;
  if ( v21 == -1 )
  {
    v23 = nullptr;
    v12 = 1;
LABEL_3:
    v13 = a5;
    if ( a5 != nullptr )
      goto LABEL_4;
LABEL_16:
    v14 = 1;
    goto LABEL_5;
  }
  v24 = v21;
  v13 = a5;
  v12 = 0;
  if ( a5 == nullptr )
    goto LABEL_16;
LABEL_4:
  v14 = 0;
  if ( a6 == -1 )
  {
    v18 = (int *)v13[2];
    if ( (unsigned int)v18 >= v13[3] )
      v19 = (*(int (__fastcall **)(_DWORD *))(*v13 + 36))(v13);
    else
      v19 = *v18;
    v14 = v19 == -1;
  }
LABEL_5:
  if ( v12 == v14 )
    *a8 |= 2u;
  v15 = v24;
  *a1 = v23;
  a1[1] = v15;
  v16 = v25 - 12;
  if ( v25 - 12 != (char *)&dword_55FB7C && sub_3C82FC(v25 - 4, -1) <= 0 )
    sub_3BDF60(v16, &v26);
  return a1;
}


//======================================================================
// sub_3B122C
// address: 0x003B122C   size: 0x134 (308 bytes)
//======================================================================
_DWORD *__fastcall sub_3B122C(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        double *a9)
{
  const char *v11; // r8
  int v12; // r8
  _DWORD *v13; // r0
  int v14; // r3
  int v15; // r2
  char *v16; // r4
  int *v18; // r3
  int v19; // r0
  int *v20; // r3
  int v21; // r0
  _DWORD v22[2]; // [sp+18h] [bp-14h] BYREF
  _DWORD *v23; // [sp+20h] [bp-Ch]
  int v24; // [sp+24h] [bp-8h]
  char *v25; // [sp+28h] [bp-4h] BYREF
  int v26; // [sp+2Ch] [bp+0h] BYREF

  v24 = a4;
  v23 = a3;
  v25 = &byte_55FB88;
  sub_3BE700(&v25, 32);
  sub_3B08DC(v22, a2, v23, v24, a5, a6, a7, a8, &v25);
  v23 = (_DWORD *)v22[0];
  v24 = v22[1];
  v11 = v25;
  v26 = sub_3A8844();
  std::__convert_to_v<long double>(v11, a9, a8);
  if ( v23 == nullptr )
  {
    v12 = 1;
    goto LABEL_3;
  }
  v12 = 0;
  if ( v24 != -1 )
    goto LABEL_3;
  v20 = (int *)v23[2];
  if ( (unsigned int)v20 >= v23[3] )
    v21 = (*(int (**)(void))(*v23 + 36))();
  else
    v21 = *v20;
  if ( v21 == -1 )
  {
    v23 = nullptr;
    v12 = 1;
LABEL_3:
    v13 = a5;
    if ( a5 != nullptr )
      goto LABEL_4;
LABEL_16:
    v14 = 1;
    goto LABEL_5;
  }
  v24 = v21;
  v13 = a5;
  v12 = 0;
  if ( a5 == nullptr )
    goto LABEL_16;
LABEL_4:
  v14 = 0;
  if ( a6 == -1 )
  {
    v18 = (int *)v13[2];
    if ( (unsigned int)v18 >= v13[3] )
      v19 = (*(int (__fastcall **)(_DWORD *))(*v13 + 36))(v13);
    else
      v19 = *v18;
    v14 = v19 == -1;
  }
LABEL_5:
  if ( v12 == v14 )
    *a8 |= 2u;
  v15 = v24;
  *a1 = v23;
  a1[1] = v15;
  v16 = v25 - 12;
  if ( v25 - 12 != (char *)&dword_55FB7C && sub_3C82FC(v25 - 4, -1) <= 0 )
    sub_3BDF60(v16, &v26);
  return a1;
}


//======================================================================
// sub_3B1374
// address: 0x003B1374   size: 0x53E (1342 bytes)
//======================================================================
_DWORD *__fastcall sub_3B1374(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r6
  int v12; // r8
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r11
  size_t v17; // r9
  unsigned int v18; // r6
  int v19; // r7
  unsigned int i; // r4
  unsigned int v21; // r6
  _DWORD *v22; // r0
  unsigned int v23; // r3
  int *v24; // r3
  _DWORD *v25; // r0
  int v26; // r3
  int v27; // r4
  _DWORD *v28; // r0
  int v29; // r3
  int v30; // r2
  int *v32; // r3
  int v33; // r4
  wchar_t *v34; // r0
  int v35; // r0
  unsigned int v36; // r6
  _DWORD *v37; // r0
  unsigned int v38; // r3
  int *v39; // r3
  _DWORD *v40; // r0
  int v41; // r4
  int v42; // r3
  int *v43; // r3
  int v44; // r2
  int v45; // r6
  int v46; // r8
  unsigned int v47; // r3
  int v48; // r0
  unsigned int v49; // r4
  int v50; // r0
  int v51; // r0
  int v52; // r0
  int v53; // r0
  _BOOL4 v54; // [sp+Ch] [bp-40h]
  unsigned int v55; // [sp+10h] [bp-3Ch]
  unsigned int v56; // [sp+14h] [bp-38h]
  int v57; // [sp+18h] [bp-34h]
  int v58; // [sp+1Ch] [bp-30h]
  int v59; // [sp+20h] [bp-2Ch]
  _BOOL4 v61; // [sp+28h] [bp-24h]
  _DWORD *v62; // [sp+30h] [bp-1Ch] BYREF
  int v63; // [sp+34h] [bp-18h]
  char v64[4]; // [sp+3Ch] [bp-10h] BYREF
  char v65[4]; // [sp+40h] [bp-Ch] BYREF
  _DWORD v66[2]; // [sp+44h] [bp-8h] BYREF

  v9 = a7;
  v63 = a4;
  v62 = a3;
  v10 = sub_3ADBF0((int)v64, (int *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = v10;
  if ( v11 == 64 )
  {
    v56 = 8;
  }
  else if ( v11 == 8 )
  {
    v56 = 16;
  }
  else
  {
    v56 = 10;
  }
  v54 = sub_3AE580((int)&v62, (int)&a5);
  if ( v54 )
  {
    v49 = 0;
    v61 = false;
    goto LABEL_13;
  }
  v13 = sub_3AE544((int)&v62);
  v49 = v13;
  v61 = *(_DWORD *)(v12 + 188) == v13;
  if ( *(_DWORD *)(v12 + 188) != v13 && *(_DWORD *)(v12 + 192) != v13 )
  {
    v14 = *(unsigned __int8 *)(v12 + 16);
    goto LABEL_114;
  }
  v14 = *(unsigned __int8 *)(v12 + 16);
  if ( *(_BYTE *)(v12 + 16) != 0 && *(_DWORD *)(v12 + 40) == v13 )
  {
    v14 = 1;
    goto LABEL_114;
  }
  if ( *(_DWORD *)(v12 + 36) == v13 )
  {
LABEL_114:
    v16 = 0;
    v44 = v11;
    v45 = v12;
    v46 = v44;
    v59 = 0;
    while ( 1 )
    {
      if ( v14 != 0 && *(_DWORD *)(v45 + 40) == v49 || *(_DWORD *)(v45 + 36) == v49 )
      {
LABEL_148:
        v12 = v45;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v45 + 204) == v49 )
      {
        if ( v56 == 10 || v59 == 0 )
        {
          if ( v46 != 0 )
          {
            if ( v56 == 8 )
              v16 = 0;
            else
              ++v16;
            v59 = 1;
          }
          else
          {
            v16 = 0;
            v59 = 1;
            v56 = 8;
          }
          goto LABEL_125;
        }
      }
      else if ( v59 == 0 )
      {
        goto LABEL_148;
      }
      if ( *(_DWORD *)(v45 + 196) != v49 && *(_DWORD *)(v45 + 200) != v49 )
      {
        v12 = v45;
        v59 = 1;
        goto LABEL_14;
      }
      if ( v46 != 0 )
      {
        if ( v56 != 16 )
        {
          v12 = v45;
          v59 = 1;
          goto LABEL_15;
        }
        v16 = 0;
        v59 = 0;
      }
      else
      {
        v16 = 0;
        v59 = 0;
        v56 = 16;
      }
LABEL_125:
      if ( v62 != nullptr )
      {
        v47 = v62[2];
        if ( v47 >= v62[3] )
          (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
        else
          v62[2] = v47 + 4;
        v63 = -1;
      }
      if ( sub_3AE580((int)&v62, (int)&a5) )
      {
        v54 = true;
        v12 = v45;
        v14 = *(unsigned __int8 *)(v45 + 16);
        if ( v56 != 16 )
          goto LABEL_15;
        goto LABEL_131;
      }
      v49 = sub_3AE544((int)&v62);
      if ( v59 == 0 )
      {
        v12 = v45;
        v14 = *(unsigned __int8 *)(v45 + 16);
        goto LABEL_14;
      }
      v14 = *(unsigned __int8 *)(v45 + 16);
    }
  }
  v15 = sub_3ADB20((int)&v62);
  if ( !sub_3AE580(v15, (int)&a5) )
  {
    v48 = sub_3AE544((int)&v62);
    v14 = *(unsigned __int8 *)(v12 + 16);
    v49 = v48;
    goto LABEL_114;
  }
LABEL_13:
  v14 = *(unsigned __int8 *)(v12 + 16);
  v54 = true;
  v16 = 0;
  v59 = 0;
LABEL_14:
  if ( v56 == 16 )
LABEL_131:
    v17 = 22;
  else
LABEL_15:
    v17 = v56;
  v66[0] = &byte_55FB88;
  if ( v14 != 0 )
    sub_3BE700(v66, 32);
  v58 = v61 + 0x7FFFFFFF;
  v57 = *(unsigned __int8 *)(v12 + 292);
  v55 = (v61 + 0x7FFFFFFF) / v56;
  if ( *(_BYTE *)(v12 + 292) == 0 )
  {
    v18 = 0;
    v19 = 0;
    if ( v54 )
      goto LABEL_55;
    if ( v17 <= 0xA )
      goto LABEL_21;
LABEL_64:
    if ( v49 - 48 <= 9 )
    {
      i = v49 - 48;
      goto LABEL_24;
    }
    if ( v49 - 97 > 5 )
    {
      if ( v49 - 65 <= 5 )
      {
        i = v49 - 55;
        if ( v55 >= v18 )
          goto LABEL_25;
LABEL_68:
        v19 = 1;
        goto LABEL_26;
      }
LABEL_55:
      v27 = 0;
      v28 = (_DWORD *)(v66[0] - 12);
      if ( *(_DWORD *)(v66[0] - 12) == 0 )
        goto LABEL_40;
      goto LABEL_56;
    }
    for ( i = v49 - 87; ; i = v49 - 48 )
    {
LABEL_24:
      if ( v55 < v18 )
        goto LABEL_68;
LABEL_25:
      v21 = v18 * v56;
      v19 |= v58 - i < v21;
      v18 = i + v21;
      ++v16;
LABEL_26:
      v22 = v62;
      if ( v62 == nullptr )
        break;
      v23 = v62[2];
      if ( v23 < v62[3] )
      {
        v62[2] = v23 + 4;
        v63 = -1;
      }
      else
      {
        (*(void (**)(void))(*v62 + 40))();
        v22 = v62;
        v63 = -1;
        if ( v62 == nullptr )
          break;
      }
      v24 = (int *)v22[2];
      if ( (unsigned int)v24 < v22[3] )
        v52 = *v24;
      else
        v52 = (*(int (__fastcall **)(_DWORD *))(*v22 + 36))(v22);
      if ( v52 != -1 )
      {
        v63 = v52;
        v25 = a5;
        v33 = 0;
        if ( a5 == nullptr )
          goto LABEL_62;
        goto LABEL_36;
      }
      v62 = nullptr;
      v33 = 1;
LABEL_61:
      v25 = a5;
      if ( a5 == nullptr )
      {
LABEL_62:
        if ( v33 == 1 )
          goto LABEL_38;
        goto LABEL_63;
      }
LABEL_36:
      v26 = 0;
      if ( a6 == -1 )
      {
        v32 = (int *)v25[2];
        if ( (unsigned int)v32 < v25[3] )
          v51 = *v32;
        else
          v51 = (*(int (__fastcall **)(_DWORD *))(*v25 + 36))(v25);
        if ( v51 == -1 )
        {
          a5 = nullptr;
          v26 = 1;
        }
        else
        {
          a6 = v51;
          v26 = 0;
        }
      }
      if ( v26 == v33 )
      {
LABEL_38:
        v27 = 0;
        v54 = true;
        goto LABEL_39;
      }
LABEL_63:
      v49 = sub_3AE544((int)&v62);
      if ( v17 > 0xA )
        goto LABEL_64;
LABEL_21:
      if ( v49 <= 0x2F || v17 + 48 <= v49 )
        goto LABEL_55;
    }
    v33 = 1;
    goto LABEL_61;
  }
  v18 = 0;
  v19 = 0;
  if ( v54 )
    goto LABEL_55;
  while ( *(_BYTE *)(v12 + 16) == 0 || v49 != *(_DWORD *)(v12 + 40) )
  {
    if ( v49 == *(_DWORD *)(v12 + 36) )
      goto LABEL_55;
    v34 = j_wmemchr((const wchar_t *)(v12 + 204), v49, v17);
    if ( v34 == nullptr )
      goto LABEL_55;
    v35 = ((int)v34 - v12 - 204) >> 2;
    if ( v35 > 15 )
      v35 -= 6;
    if ( v55 < v18 )
    {
      v19 = 1;
    }
    else
    {
      v36 = v18 * v56;
      v19 |= v58 - v35 < v36;
      v18 = v35 + v36;
      ++v16;
    }
LABEL_86:
    v37 = v62;
    if ( v62 == nullptr )
      goto LABEL_98;
    v38 = v62[2];
    if ( v38 >= v62[3] )
    {
      (*(void (**)(void))(*v62 + 40))();
      v37 = v62;
      v63 = -1;
      if ( v62 == nullptr )
      {
LABEL_98:
        v41 = v57;
        goto LABEL_99;
      }
    }
    else
    {
      v62[2] = v38 + 4;
      v63 = -1;
    }
    v39 = (int *)v37[2];
    if ( (unsigned int)v39 < v37[3] )
      v50 = *v39;
    else
      v50 = (*(int (__fastcall **)(_DWORD *))(*v37 + 36))(v37);
    if ( v50 != -1 )
    {
      v63 = v50;
      v40 = a5;
      v41 = 0;
      if ( a5 == nullptr )
        goto LABEL_100;
      goto LABEL_94;
    }
    v62 = nullptr;
    v41 = v57;
LABEL_99:
    v40 = a5;
    if ( a5 == nullptr )
    {
LABEL_100:
      v42 = v57;
      goto LABEL_95;
    }
LABEL_94:
    v42 = 0;
    if ( a6 == -1 )
    {
      v43 = (int *)v40[2];
      if ( (unsigned int)v43 < v40[3] )
        v53 = *v43;
      else
        v53 = (*(int (__fastcall **)(_DWORD *))(*v40 + 36))(v40);
      if ( v53 == -1 )
      {
        a5 = nullptr;
        v42 = v57;
      }
      else
      {
        a6 = v53;
        v42 = 0;
      }
    }
LABEL_95:
    if ( v41 == v42 )
    {
      v27 = 0;
      v54 = true;
      goto LABEL_39;
    }
    v49 = sub_3AE544((int)&v62);
  }
  if ( v16 != 0 )
  {
    sub_3BEA50(v66, (unsigned __int8)v16);
    v16 = 0;
    goto LABEL_86;
  }
  v27 = 1;
LABEL_39:
  v28 = (_DWORD *)(v66[0] - 12);
  if ( *(_DWORD *)(v66[0] - 12) != 0 )
  {
LABEL_56:
    sub_3BEA50(v66, (unsigned __int8)v16);
    if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), v66) == 0 )
      *a8 = 4;
    v28 = (_DWORD *)(v66[0] - 12);
  }
LABEL_40:
  if ( v16 == 0 && v59 == 0 && *v28 == 0 || v27 != 0 )
  {
    v29 = 0;
    goto LABEL_44;
  }
  if ( v19 != 0 )
  {
    if ( v61 )
    {
      *a9 = 0x80000000;
    }
    else
    {
      v29 = 0x7FFFFFFF;
LABEL_44:
      *a9 = v29;
    }
    *a8 = 4;
  }
  else
  {
    if ( v61 )
      v18 = -v18;
    *a9 = v18;
  }
  if ( v54 )
    *a8 |= 2u;
  v30 = v63;
  *a1 = v62;
  a1[1] = v30;
  sub_3BDF68(v28, v65);
  return a1;
}


//======================================================================
// sub_3B18C4
// address: 0x003B18C4   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3B18C4(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  sub_3B1374(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_3B18EC
// address: 0x003B18EC   size: 0x2A2 (674 bytes)
//======================================================================
_DWORD *__fastcall sub_3B18EC(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _BYTE *a9)
{
  int v9; // r0
  _DWORD *v10; // r5
  _DWORD *v11; // r10
  _BOOL4 v12; // r9
  _BOOL4 v13; // r8
  unsigned int v14; // r7
  _BOOL4 v15; // r11
  int v16; // r6
  int v17; // r3
  unsigned int v18; // r3
  int *v19; // r3
  int *v20; // r3
  int *v21; // r3
  int v22; // r7
  int v24; // r3
  _DWORD *v25; // r5
  _DWORD *v26; // r7
  int v27; // r0
  int v28; // r0
  int v29; // [sp+1Ch] [bp-28h]
  _BOOL4 v30; // [sp+20h] [bp-24h]
  _DWORD v32[2]; // [sp+28h] [bp-1Ch] BYREF
  _DWORD *v33; // [sp+30h] [bp-14h] BYREF
  int v34; // [sp+34h] [bp-10h]
  _DWORD v35[2]; // [sp+3Ch] [bp-8h] BYREF

  v34 = a4;
  v9 = *(_DWORD *)(a7 + 12);
  v33 = a3;
  if ( (v9 & 1) == 0 )
  {
    v35[0] = -1;
    sub_3B1374(v32, a2, v33, v34, a5, a6, a7, a8, v35);
    v33 = (_DWORD *)v32[0];
    v34 = v32[1];
    if ( v35[0] > 1u )
    {
      v10 = a8;
      *a9 = 1;
      *v10 = 4;
      if ( sub_3AE580((int)&v33, (int)&a5) )
        *v10 |= 2u;
    }
    else
    {
      *a9 = v35[0] & 1;
    }
    goto LABEL_52;
  }
  v11 = (_DWORD *)sub_3ADBF0((int)v35, (int *)(a7 + 108));
  v12 = v11[6] == 0;
  v13 = v11[8] == 0;
  v14 = 0;
  v15 = true;
  v30 = true;
  while ( 1 )
  {
    v16 = !v12 || !v13;
    if ( v12 && v13 )
    {
      v24 = 0;
      goto LABEL_53;
    }
    if ( v33 != nullptr )
    {
      v29 = 0;
      if ( v34 == -1 )
      {
        v19 = (int *)v33[2];
        if ( (unsigned int)v19 < v33[3] )
          v28 = *v19;
        else
          v28 = (*(int (__fastcall **)(_DWORD *))(*v33 + 36))(v33);
        if ( v28 == -1 )
        {
          v33 = nullptr;
          v29 = !v12 || !v13;
        }
        else
        {
          v34 = v28;
          v29 = 0;
        }
      }
    }
    else
    {
      v29 = !v12 || !v13;
    }
    if ( a5 == nullptr )
      goto LABEL_15;
    if ( a6 != -1 )
    {
      v16 = 0;
      goto LABEL_15;
    }
    v20 = (int *)a5[2];
    if ( (unsigned int)v20 < a5[3] )
      v27 = *v20;
    else
      v27 = (*(int (**)(void))(*a5 + 36))();
    if ( v27 == -1 )
    {
      a5 = nullptr;
LABEL_15:
      if ( v16 == v29 )
        goto LABEL_43;
      goto LABEL_16;
    }
    a6 = v27;
    if ( v29 == 0 )
    {
LABEL_43:
      v24 = 1;
      goto LABEL_53;
    }
LABEL_16:
    if ( v33 != nullptr )
    {
      v17 = v34;
      if ( v34 == -1 )
      {
        v21 = (int *)v33[2];
        if ( (unsigned int)v21 >= v33[3] )
          v17 = (*(int (__fastcall **)(_DWORD *))(*v33 + 36))(v33);
        else
          v17 = *v21;
        if ( v17 == -1 )
          v33 = nullptr;
        else
          v34 = v17;
      }
    }
    else
    {
      v17 = -1;
    }
    if ( !v13 )
      v30 = *(_DWORD *)(4 * v14 + v11[7]) == v17;
    if ( !v30 )
    {
      if ( v12 )
      {
        v24 = 0;
        goto LABEL_55;
      }
    }
    else if ( v12 )
    {
      goto LABEL_23;
    }
    v15 = *(_DWORD *)(4 * v14 + v11[5]) == v17;
LABEL_23:
    if ( !v15 << 24 != 0 )
    {
      if ( v13 )
        break;
      if ( !v30 )
      {
        v15 = false;
        v24 = 0;
        goto LABEL_55;
      }
    }
    ++v14;
    if ( v33 != nullptr )
    {
      v18 = v33[2];
      if ( v18 < v33[3] )
        v33[2] = v18 + 4;
      else
        (*(void (__fastcall **)(_DWORD *))(*v33 + 40))(v33);
      v34 = -1;
    }
    v13 = true;
    if ( v30 )
      v13 = v14 >= v11[8];
    v12 = true;
    if ( v15 )
      v12 = v14 >= v11[6];
  }
  v24 = 0;
  v15 = false;
LABEL_53:
  if ( v30 && v14 == v11[8] && v14 != 0 )
  {
    *a9 = 0;
    if ( v15 && v11[6] == v14 )
      *a8 = 4;
    else
      *a8 = 2 * v24;
    goto LABEL_52;
  }
LABEL_55:
  if ( v15 && v11[6] == v14 && v14 != 0 )
  {
    v26 = a8;
    *a9 = 1;
    *v26 = 2 * v24;
  }
  else
  {
    v25 = a8;
    *a9 = 0;
    *v25 = 4;
    if ( v24 != 0 )
      *v25 = 6;
  }
LABEL_52:
  v22 = v34;
  *a1 = v33;
  a1[1] = v22;
  return a1;
}


//======================================================================
// sub_3B1B90
// address: 0x003B1B90   size: 0x54A (1354 bytes)
//======================================================================
_DWORD *__fastcall sub_3B1B90(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int16 *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r6
  int v12; // r8
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r11
  size_t v17; // r9
  unsigned int v18; // r6
  int v19; // r7
  unsigned int i; // r4
  int v21; // r6
  _DWORD *v22; // r0
  unsigned int v23; // r3
  int *v24; // r3
  _DWORD *v25; // r0
  int v26; // r3
  int v27; // r4
  _DWORD *v28; // r0
  __int16 v29; // r3
  _DWORD *v30; // r1
  int v31; // r2
  int *v33; // r3
  int v34; // r4
  wchar_t *v35; // r0
  int v36; // r3
  int v37; // r6
  _DWORD *v38; // r0
  unsigned int v39; // r3
  int *v40; // r3
  _DWORD *v41; // r0
  int v42; // r4
  int v43; // r3
  int *v44; // r3
  int v45; // r2
  int v46; // r6
  int v47; // r8
  unsigned int v48; // r3
  int v49; // r0
  unsigned int v50; // r4
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // [sp+8h] [bp-3Ch]
  _BOOL4 v56; // [sp+Ch] [bp-38h]
  unsigned int v57; // [sp+10h] [bp-34h]
  int v58; // [sp+14h] [bp-30h]
  int v59; // [sp+18h] [bp-2Ch]
  _BOOL4 v61; // [sp+24h] [bp-20h]
  _DWORD *v62; // [sp+28h] [bp-1Ch] BYREF
  int v63; // [sp+2Ch] [bp-18h]
  char v64[4]; // [sp+34h] [bp-10h] BYREF
  char v65[4]; // [sp+38h] [bp-Ch] BYREF
  _DWORD v66[2]; // [sp+3Ch] [bp-8h] BYREF

  v9 = a7;
  v63 = a4;
  v62 = a3;
  v10 = sub_3ADBF0((int)v64, (int *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = v10;
  if ( v11 == 64 )
  {
    v58 = 8;
  }
  else if ( v11 == 8 )
  {
    v58 = 16;
  }
  else
  {
    v58 = 10;
  }
  v56 = sub_3AE580((int)&v62, (int)&a5);
  if ( v56 )
  {
    v50 = 0;
    v61 = false;
    goto LABEL_13;
  }
  v13 = sub_3AE544((int)&v62);
  v50 = v13;
  v61 = *(_DWORD *)(v12 + 188) == v13;
  if ( *(_DWORD *)(v12 + 188) != v13 && *(_DWORD *)(v12 + 192) != v13 )
  {
    v14 = *(unsigned __int8 *)(v12 + 16);
    goto LABEL_110;
  }
  v14 = *(unsigned __int8 *)(v12 + 16);
  if ( *(_BYTE *)(v12 + 16) != 0 && *(_DWORD *)(v12 + 40) == v13 )
  {
    v14 = 1;
    goto LABEL_110;
  }
  if ( *(_DWORD *)(v12 + 36) == v13 )
  {
LABEL_110:
    v16 = 0;
    v45 = v11;
    v46 = v12;
    v47 = v45;
    v59 = 0;
    while ( 1 )
    {
      if ( v14 != 0 && *(_DWORD *)(v46 + 40) == v50 || *(_DWORD *)(v46 + 36) == v50 )
      {
LABEL_144:
        v12 = v46;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v46 + 204) == v50 )
      {
        if ( v58 == 10 || v59 == 0 )
        {
          if ( v47 != 0 )
          {
            if ( v58 == 8 )
              v16 = 0;
            else
              ++v16;
            v59 = 1;
          }
          else
          {
            v16 = 0;
            v59 = 1;
            v58 = 8;
          }
          goto LABEL_121;
        }
      }
      else if ( v59 == 0 )
      {
        goto LABEL_144;
      }
      if ( *(_DWORD *)(v46 + 196) != v50 && *(_DWORD *)(v46 + 200) != v50 )
      {
        v12 = v46;
        v59 = 1;
        goto LABEL_14;
      }
      if ( v47 != 0 )
      {
        if ( v58 != 16 )
        {
          v12 = v46;
          v59 = 1;
          goto LABEL_15;
        }
        v16 = 0;
        v59 = 0;
      }
      else
      {
        v16 = 0;
        v59 = 0;
        v58 = 16;
      }
LABEL_121:
      if ( v62 != nullptr )
      {
        v48 = v62[2];
        if ( v48 >= v62[3] )
          (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
        else
          v62[2] = v48 + 4;
        v63 = -1;
      }
      if ( sub_3AE580((int)&v62, (int)&a5) )
      {
        v56 = true;
        v12 = v46;
        v14 = *(unsigned __int8 *)(v46 + 16);
        if ( v58 != 16 )
          goto LABEL_15;
        goto LABEL_127;
      }
      v50 = sub_3AE544((int)&v62);
      if ( v59 == 0 )
      {
        v12 = v46;
        v14 = *(unsigned __int8 *)(v46 + 16);
        goto LABEL_14;
      }
      v14 = *(unsigned __int8 *)(v46 + 16);
    }
  }
  v15 = sub_3ADB20((int)&v62);
  if ( !sub_3AE580(v15, (int)&a5) )
  {
    v49 = sub_3AE544((int)&v62);
    v14 = *(unsigned __int8 *)(v12 + 16);
    v50 = v49;
    goto LABEL_110;
  }
LABEL_13:
  v14 = *(unsigned __int8 *)(v12 + 16);
  v56 = true;
  v16 = 0;
  v59 = 0;
LABEL_14:
  if ( v58 == 16 )
LABEL_127:
    v17 = 22;
  else
LABEL_15:
    v17 = v58;
  v66[0] = &byte_55FB88;
  if ( v14 != 0 )
    sub_3BE700(v66, 32);
  v55 = *(unsigned __int8 *)(v12 + 292);
  v57 = (unsigned __int16)(0xFFFF / v58);
  if ( *(_BYTE *)(v12 + 292) == 0 )
  {
    v18 = 0;
    v19 = 0;
    if ( v56 )
      goto LABEL_51;
    if ( v17 <= 0xA )
      goto LABEL_21;
LABEL_60:
    if ( v50 - 48 <= 9 )
    {
      i = v50 - 48;
      goto LABEL_24;
    }
    if ( v50 - 97 > 5 )
    {
      if ( v50 - 65 <= 5 )
      {
        i = v50 - 55;
        if ( v57 >= v18 )
          goto LABEL_25;
LABEL_64:
        v19 = 1;
        goto LABEL_26;
      }
LABEL_51:
      v27 = 0;
      v28 = (_DWORD *)(v66[0] - 12);
      if ( *(_DWORD *)(v66[0] - 12) == 0 )
        goto LABEL_39;
      goto LABEL_52;
    }
    for ( i = v50 - 87; ; i = v50 - 48 )
    {
LABEL_24:
      if ( v57 < v18 )
        goto LABEL_64;
LABEL_25:
      v21 = (unsigned __int16)(v18 * v58);
      v19 = (unsigned __int8)(v19 | (v21 > (int)(0xFFFF - i)));
      v18 = (unsigned __int16)(v21 + i);
      ++v16;
LABEL_26:
      v22 = v62;
      if ( v62 == nullptr )
        break;
      v23 = v62[2];
      if ( v23 >= v62[3] )
      {
        (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
        v22 = v62;
        v63 = -1;
        if ( v62 == nullptr )
          break;
      }
      else
      {
        v62[2] = v23 + 4;
        v63 = -1;
      }
      v24 = (int *)v22[2];
      if ( (unsigned int)v24 < v22[3] )
        v53 = *v24;
      else
        v53 = (*(int (__fastcall **)(_DWORD *))(*v22 + 36))(v22);
      if ( v53 != -1 )
      {
        v63 = v53;
        v25 = a5;
        v34 = 0;
        if ( a5 == nullptr )
          goto LABEL_58;
        goto LABEL_35;
      }
      v62 = nullptr;
      v34 = 1;
LABEL_57:
      v25 = a5;
      if ( a5 == nullptr )
      {
LABEL_58:
        if ( v34 == 1 )
          goto LABEL_37;
        goto LABEL_59;
      }
LABEL_35:
      v26 = 0;
      if ( a6 == -1 )
      {
        v33 = (int *)v25[2];
        if ( (unsigned int)v33 < v25[3] )
          v52 = *v33;
        else
          v52 = (*(int (__fastcall **)(_DWORD *, int))(*v25 + 36))(v25, a6 + 1);
        if ( v52 == -1 )
        {
          a5 = nullptr;
          v26 = 1;
        }
        else
        {
          a6 = v52;
          v26 = 0;
        }
      }
      if ( v26 == v34 )
      {
LABEL_37:
        v27 = 0;
        v56 = true;
        goto LABEL_38;
      }
LABEL_59:
      v50 = sub_3AE544((int)&v62);
      if ( v17 > 0xA )
        goto LABEL_60;
LABEL_21:
      if ( v50 <= 0x2F || v17 + 48 <= v50 )
        goto LABEL_51;
    }
    v34 = 1;
    goto LABEL_57;
  }
  v18 = 0;
  v19 = 0;
  if ( v56 )
    goto LABEL_51;
  while ( *(_BYTE *)(v12 + 16) == 0 || v50 != *(_DWORD *)(v12 + 40) )
  {
    if ( v50 == *(_DWORD *)(v12 + 36) )
      goto LABEL_51;
    v35 = j_wmemchr((const wchar_t *)(v12 + 204), v50, v17);
    if ( v35 == nullptr )
      goto LABEL_51;
    v36 = ((int)v35 - v12 - 204) >> 2;
    if ( v36 > 15 )
      v36 -= 6;
    if ( v57 < v18 )
    {
      v19 = 1;
    }
    else
    {
      v37 = (unsigned __int16)(v18 * v58);
      v19 = (unsigned __int8)(v19 | (v37 > 0xFFFF - v36));
      v18 = (unsigned __int16)(v37 + v36);
      ++v16;
    }
LABEL_82:
    v38 = v62;
    if ( v62 == nullptr )
      goto LABEL_94;
    v39 = v62[2];
    if ( v39 >= v62[3] )
    {
      (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
      v38 = v62;
      v63 = -1;
      if ( v62 == nullptr )
      {
LABEL_94:
        v42 = v55;
        goto LABEL_95;
      }
    }
    else
    {
      v62[2] = v39 + 4;
      v63 = -1;
    }
    v40 = (int *)v38[2];
    if ( (unsigned int)v40 < v38[3] )
      v51 = *v40;
    else
      v51 = (*(int (__fastcall **)(_DWORD *))(*v38 + 36))(v38);
    if ( v51 != -1 )
    {
      v63 = v51;
      v41 = a5;
      v42 = 0;
      if ( a5 == nullptr )
        goto LABEL_96;
      goto LABEL_90;
    }
    v62 = nullptr;
    v42 = v55;
LABEL_95:
    v41 = a5;
    if ( a5 == nullptr )
    {
LABEL_96:
      v43 = v55;
      goto LABEL_91;
    }
LABEL_90:
    v43 = 0;
    if ( a6 == -1 )
    {
      v44 = (int *)v41[2];
      if ( (unsigned int)v44 < v41[3] )
        v54 = *v44;
      else
        v54 = (*(int (__fastcall **)(_DWORD *, int))(*v41 + 36))(v41, a6 + 1);
      if ( v54 == -1 )
      {
        a5 = nullptr;
        v43 = v55;
      }
      else
      {
        a6 = v54;
        v43 = 0;
      }
    }
LABEL_91:
    if ( v42 == v43 )
    {
      v27 = 0;
      v56 = true;
      goto LABEL_38;
    }
    v50 = sub_3AE544((int)&v62);
  }
  if ( v16 != 0 )
  {
    sub_3BEA50(v66, (unsigned __int8)v16);
    v16 = 0;
    goto LABEL_82;
  }
  v27 = 1;
LABEL_38:
  v28 = (_DWORD *)(v66[0] - 12);
  if ( *(_DWORD *)(v66[0] - 12) != 0 )
  {
LABEL_52:
    sub_3BEA50(v66, (unsigned __int8)v16);
    if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), v66) == 0 )
      *a8 = 4;
    v28 = (_DWORD *)(v66[0] - 12);
  }
LABEL_39:
  if ( v16 == 0 && v59 == 0 && *v28 == 0 || v27 != 0 )
  {
    v29 = 0;
    goto LABEL_43;
  }
  if ( v19 != 0 )
  {
    v29 = -1;
LABEL_43:
    v30 = a8;
    *a9 = v29;
    *v30 = 4;
  }
  else
  {
    if ( v61 )
      LOWORD(v18) = -(__int16)v18;
    *a9 = v18;
  }
  if ( v56 )
    *a8 |= 2u;
  v31 = v63;
  *a1 = v62;
  a1[1] = v31;
  sub_3BDF68(v28, v65);
  return a1;
}


//======================================================================
// sub_3B20E8
// address: 0x003B20E8   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3B20E8(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        __int16 *a9)
{
  sub_3B1B90(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_3B2110
// address: 0x003B2110   size: 0x514 (1300 bytes)
//======================================================================
_DWORD *__fastcall sub_3B2110(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r6
  int v12; // r8
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r11
  size_t v17; // r9
  unsigned int v18; // r6
  int v19; // r7
  unsigned int i; // r4
  unsigned int v21; // r6
  _DWORD *v22; // r0
  unsigned int v23; // r3
  int *v24; // r3
  _DWORD *v25; // r0
  int v26; // r3
  int v27; // r4
  _DWORD *v28; // r0
  int v29; // r3
  _DWORD *v30; // r1
  int v31; // r2
  int *v33; // r3
  int v34; // r4
  wchar_t *v35; // r0
  int v36; // r0
  unsigned int v37; // r6
  _DWORD *v38; // r0
  unsigned int v39; // r3
  int *v40; // r3
  _DWORD *v41; // r0
  int v42; // r4
  int v43; // r3
  int *v44; // r3
  int v45; // r2
  int v46; // r6
  int v47; // r8
  unsigned int v48; // r3
  int v49; // r0
  unsigned int v50; // r4
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  _BOOL4 v55; // [sp+8h] [bp-3Ch]
  unsigned int v56; // [sp+Ch] [bp-38h]
  unsigned int v57; // [sp+10h] [bp-34h]
  int v58; // [sp+14h] [bp-30h]
  int v59; // [sp+18h] [bp-2Ch]
  _BOOL4 v61; // [sp+24h] [bp-20h]
  _DWORD *v62; // [sp+28h] [bp-1Ch] BYREF
  int v63; // [sp+2Ch] [bp-18h]
  char v64[4]; // [sp+34h] [bp-10h] BYREF
  char v65[4]; // [sp+38h] [bp-Ch] BYREF
  _DWORD v66[2]; // [sp+3Ch] [bp-8h] BYREF

  v9 = a7;
  v63 = a4;
  v62 = a3;
  v10 = sub_3ADBF0((int)v64, (int *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = v10;
  if ( v11 == 64 )
  {
    v57 = 8;
  }
  else if ( v11 == 8 )
  {
    v57 = 16;
  }
  else
  {
    v57 = 10;
  }
  v55 = sub_3AE580((int)&v62, (int)&a5);
  if ( v55 )
  {
    v50 = 0;
    v61 = false;
    goto LABEL_13;
  }
  v13 = sub_3AE544((int)&v62);
  v50 = v13;
  v61 = *(_DWORD *)(v12 + 188) == v13;
  if ( *(_DWORD *)(v12 + 188) != v13 && *(_DWORD *)(v12 + 192) != v13 )
  {
    v14 = *(unsigned __int8 *)(v12 + 16);
    goto LABEL_110;
  }
  v14 = *(unsigned __int8 *)(v12 + 16);
  if ( *(_BYTE *)(v12 + 16) != 0 && *(_DWORD *)(v12 + 40) == v13 )
  {
    v14 = 1;
    goto LABEL_110;
  }
  if ( *(_DWORD *)(v12 + 36) == v13 )
  {
LABEL_110:
    v16 = 0;
    v45 = v11;
    v46 = v12;
    v47 = v45;
    v59 = 0;
    while ( 1 )
    {
      if ( v14 != 0 && *(_DWORD *)(v46 + 40) == v50 || *(_DWORD *)(v46 + 36) == v50 )
      {
LABEL_144:
        v12 = v46;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v46 + 204) == v50 )
      {
        if ( v57 == 10 || v59 == 0 )
        {
          if ( v47 != 0 )
          {
            if ( v57 == 8 )
              v16 = 0;
            else
              ++v16;
            v59 = 1;
          }
          else
          {
            v16 = 0;
            v59 = 1;
            v57 = 8;
          }
          goto LABEL_121;
        }
      }
      else if ( v59 == 0 )
      {
        goto LABEL_144;
      }
      if ( *(_DWORD *)(v46 + 196) != v50 && *(_DWORD *)(v46 + 200) != v50 )
      {
        v12 = v46;
        v59 = 1;
        goto LABEL_14;
      }
      if ( v47 != 0 )
      {
        if ( v57 != 16 )
        {
          v12 = v46;
          v59 = 1;
          goto LABEL_15;
        }
        v16 = 0;
        v59 = 0;
      }
      else
      {
        v16 = 0;
        v59 = 0;
        v57 = 16;
      }
LABEL_121:
      if ( v62 != nullptr )
      {
        v48 = v62[2];
        if ( v48 >= v62[3] )
          (*(void (__fastcall **)(_DWORD *))(*v62 + 40))(v62);
        else
          v62[2] = v48 + 4;
        v63 = -1;
      }
      if ( sub_3AE580((int)&v62, (int)&a5) )
      {
        v55 = true;
        v12 = v46;
        v14 = *(unsigned __int8 *)(v46 + 16);
        if ( v57 != 16 )
          goto LABEL_15;
        goto LABEL_127;
      }
      v50 = sub_3AE544((int)&v62);
      if ( v59 == 0 )
      {
        v12 = v46;
        v14 = *(unsigned __int8 *)(v46 + 16);
        goto LABEL_14;
      }
      v14 = *(unsigned __int8 *)(v46 + 16);
    }
  }
  v15 = sub_3ADB20((int)&v62);
  if ( !sub_3AE580(v15, (int)&a5) )
  {
    v49 = sub_3AE544((int)&v62);
    v14 = *(unsigned __int8 *)(v12 + 16);
    v50 = v49;
    goto LABEL_110;
  }
LABEL_13:
  v14 = *(unsigned __int8 *)(v12 + 16);
  v55 = true;
  v16 = 0;
  v59 = 0;
LABEL_14:
  if ( v57 == 16 )
LABEL_127:
    v17 = 22;
  else
LABEL_15:
    v17 = v57;
  v66[0] = &byte_55FB88;
  if ( v14 != 0 )
    sub_3BE700(v66, 32);
  v58 = *(unsigned __int8 *)(v12 + 292);
  v56 = 0xFFFFFFFF / v57;
  if ( *(_BYTE *)(v12 + 292) == 0 )
  {
    v18 = 0;
    v19 = 0;
    if ( v55 )
      goto LABEL_51;
    if ( v17 <= 0xA )
      goto LABEL_21;
LABEL_60:
    if ( v50 - 48 <= 9 )
    {
      i = v50 - 48;
      goto LABEL_24;
    }
    if ( v50 - 97 > 5 )
    {
      if ( v50 - 65 <= 5 )
      {
        i = v50 - 55;
        if ( v56 >= v18 )
          goto LABEL_25;
LABEL_64:
        v19 = 1;
        goto LABEL_26;
      }
LABEL_51:
      v27 = 0;
      v28 = (_DWORD *)(v66[0] - 12);
      if ( *(_DWORD *)(v66[0] - 12) == 0 )
        goto LABEL_39;
      goto LABEL_52;
    }
    for ( i = v50 - 87; ; i = v50 - 48 )
    {
LABEL_24:
      if ( v56 < v18 )
        goto LABEL_64;
LABEL_25:
      v21 = v18 * v57;
      v19 |= ~i < v21;
      v18 = i + v21;
      ++v16;
LABEL_26:
      v22 = v62;
      if ( v62 == nullptr )
        break;
      v23 = v62[2];
      if ( v23 >= v62[3] )
      {
        (*(void (**)(void))(*v62 + 40))();
        v22 = v62;
        v63 = -1;
        if ( v62 == nullptr )
          break;
      }
      else
      {
        v62[2] = v23 + 4;
        v63 = -1;
      }
      v24 = (int *)v22[2];
      if ( (unsigned int)v24 < v22[3] )
        v53 = *v24;
      else
        v53 = (*(int (__fastcall **)(_DWORD *))(*v22 + 36))(v22);
      if ( v53 != -1 )
      {
        v63 = v53;
        v25 = a5;
        v34 = 0;
        if ( a5 == nullptr )
          goto LABEL_58;
        goto LABEL_35;
      }
      v62 = nullptr;
      v34 = 1;
LABEL_57:
      v25 = a5;
      if ( a5 == nullptr )
      {
LABEL_58:
        if ( v34 == 1 )
          goto LABEL_37;
        goto LABEL_59;
      }
LABEL_35:
      v26 = 0;
      if ( a6 == -1 )
      {
        v33 = (int *)v25[2];
        if ( (unsigned int)v33 < v25[3] )
          v52 = *v33;
        else
          v52 = (*(int (__fastcall **)(_DWORD *))(*v25 + 36))(v25);
        if ( v52 == -1 )
        {
          a5 = nullptr;
          v26 = 1;
        }
        else
        {
          a6 = v52;
          v26 = 0;
        }
      }
      if ( v26 == v34 )
      {
LABEL_37:
        v27 = 0;
        v55 = true;
        goto LABEL_38;
      }
LABEL_59:
      v50 = sub_3AE544((int)&v62);
      if ( v17 > 0xA )
        goto LABEL_60;
LABEL_21:
      if ( v50 <= 0x2F || v17 + 48 <= v50 )
        goto LABEL_51;
    }
    v34 = 1;
    goto LABEL_57;
  }
  v18 = 0;
  v19 = 0;
  if ( v55 )
    goto LABEL_51;
  while ( *(_BYTE *)(v12 + 16) == 0 || v50 != *(_DWORD *)(v12 + 40) )
  {
    if ( v50 == *(_DWORD *)(v12 + 36) )
      goto LABEL_51;
    v35 = j_wmemchr((const wchar_t *)(v12 + 204), v50, v17);
    if ( v35 == nullptr )
      goto LABEL_51;
    v36 = ((int)v35 - v12 - 204) >> 2;
    if ( v36 > 15 )
      v36 -= 6;
    if ( v56 < v18 )
    {
      v19 = 1;
    }
    else
    {
      v37 = v18 * v57;
      v19 |= ~v36 < v37;
      v18 = v36 + v37;
      ++v16;
    }
LABEL_82:
    v38 = v62;
    if ( v62 == nullptr )
      goto LABEL_94;
    v39 = v62[2];
    if ( v39 >= v62[3] )
    {
      (*(void (**)(void))(*v62 + 40))();
      v38 = v62;
      v63 = -1;
      if ( v62 == nullptr )
      {
LABEL_94:
        v42 = v58;
        goto LABEL_95;
      }
    }
    else
    {
      v62[2] = v39 + 4;
      v63 = -1;
    }
    v40 = (int *)v38[2];
    if ( (unsigned int)v40 < v38[3] )
      v51 = *v40;
    else
      v51 = (*(int (__fastcall **)(_DWORD *))(*v38 + 36))(v38);
    if ( v51 != -1 )
    {
      v63 = v51;
      v41 = a5;
      v42 = 0;
      if ( a5 == nullptr )
        goto LABEL_96;
      goto LABEL_90;
    }
    v62 = nullptr;
    v42 = v58;
LABEL_95:
    v41 = a5;
    if ( a5 == nullptr )
    {
LABEL_96:
      v43 = v58;
      goto LABEL_91;
    }
LABEL_90:
    v43 = 0;
    if ( a6 == -1 )
    {
      v44 = (int *)v41[2];
      if ( (unsigned int)v44 < v41[3] )
        v54 = *v44;
      else
        v54 = (*(int (__fastcall **)(_DWORD *, int))(*v41 + 36))(v41, a6 + 1);
      if ( v54 == -1 )
      {
        a5 = nullptr;
        v43 = v58;
      }
      else
      {
        a6 = v54;
        v43 = 0;
      }
    }
LABEL_91:
    if ( v42 == v43 )
    {
      v27 = 0;
      v55 = true;
      goto LABEL_38;
    }
    v50 = sub_3AE544((int)&v62);
  }
  if ( v16 != 0 )
  {
    sub_3BEA50(v66, (unsigned __int8)v16);
    v16 = 0;
    goto LABEL_82;
  }
  v27 = 1;
LABEL_38:
  v28 = (_DWORD *)(v66[0] - 12);
  if ( *(_DWORD *)(v66[0] - 12) != 0 )
  {
LABEL_52:
    sub_3BEA50(v66, (unsigned __int8)v16);
    if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), v66) == 0 )
      *a8 = 4;
    v28 = (_DWORD *)(v66[0] - 12);
  }
LABEL_39:
  if ( v16 == 0 && v59 == 0 && *v28 == 0 || v27 != 0 )
  {
    v29 = 0;
    goto LABEL_43;
  }
  if ( v19 != 0 )
  {
    v29 = -1;
LABEL_43:
    v30 = a8;
    *a9 = v29;
    *v30 = 4;
  }
  else
  {
    if ( v61 )
      v18 = -v18;
    *a9 = v18;
  }
  if ( v55 )
    *a8 |= 2u;
  v31 = v63;
  *a1 = v62;
  a1[1] = v31;
  sub_3BDF68(v28, v65);
  return a1;
}


//======================================================================
// sub_3B2634
// address: 0x003B2634   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3B2634(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  sub_3B2110(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_3B265C
// address: 0x003B265C   size: 0x564 (1380 bytes)
//======================================================================
_DWORD *__fastcall sub_3B265C(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r6
  int v12; // r8
  int v13; // r0
  int v14; // r3
  int v15; // r0
  int v16; // r11
  size_t v17; // r9
  unsigned int v18; // r6
  int v19; // r7
  unsigned int i; // r4
  unsigned int v21; // r6
  _DWORD *v22; // r0
  unsigned int v23; // r3
  int *v24; // r3
  _DWORD *v25; // r0
  int v26; // r3
  int v27; // r4
  int v28; // r0
  int *v29; // r9
  int v30; // r3
  _DWORD *v31; // r2
  int v32; // r2
  int *v34; // r3
  int v35; // r4
  wchar_t *v36; // r0
  int v37; // r0
  unsigned int v38; // r6
  _DWORD *v39; // r0
  unsigned int v40; // r3
  int *v41; // r3
  _DWORD *v42; // r0
  int v43; // r4
  int v44; // r3
  int *v45; // r3
  int v46; // r2
  int v47; // r6
  int v48; // r8
  unsigned int v49; // r3
  int v50; // r0
  unsigned int v51; // r4
  int v52; // r0
  int v53; // r0
  int v54; // r0
  int v55; // r0
  _BOOL4 v56; // [sp+Ch] [bp-40h]
  unsigned int v57; // [sp+10h] [bp-3Ch]
  unsigned int v58; // [sp+14h] [bp-38h]
  int v59; // [sp+18h] [bp-34h]
  int v60; // [sp+1Ch] [bp-30h]
  _BOOL4 v62; // [sp+2Ch] [bp-20h]
  _DWORD *v63; // [sp+30h] [bp-1Ch] BYREF
  int v64; // [sp+34h] [bp-18h]
  char v65[4]; // [sp+3Ch] [bp-10h] BYREF
  char v66[4]; // [sp+40h] [bp-Ch] BYREF
  _DWORD v67[2]; // [sp+44h] [bp-8h] BYREF

  v9 = a7;
  v64 = a4;
  v63 = a3;
  v10 = sub_3ADBF0((int)v65, (int *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = v10;
  if ( v11 == 64 )
  {
    v58 = 8;
  }
  else if ( v11 == 8 )
  {
    v58 = 16;
  }
  else
  {
    v58 = 10;
  }
  v56 = sub_3AE580((int)&v63, (int)&a5);
  if ( v56 )
  {
    v51 = 0;
    v62 = false;
    goto LABEL_13;
  }
  v13 = sub_3AE544((int)&v63);
  v51 = v13;
  v62 = *(_DWORD *)(v12 + 188) == v13;
  if ( *(_DWORD *)(v12 + 188) != v13 && *(_DWORD *)(v12 + 192) != v13 )
  {
    v14 = *(unsigned __int8 *)(v12 + 16);
    goto LABEL_112;
  }
  v14 = *(unsigned __int8 *)(v12 + 16);
  if ( *(_BYTE *)(v12 + 16) != 0 && *(_DWORD *)(v12 + 40) == v13 )
  {
    v14 = 1;
    goto LABEL_112;
  }
  if ( *(_DWORD *)(v12 + 36) == v13 )
  {
LABEL_112:
    v16 = 0;
    v46 = v11;
    v47 = v12;
    v48 = v46;
    v60 = 0;
    while ( 1 )
    {
      if ( v14 != 0 && *(_DWORD *)(v47 + 40) == v51 || *(_DWORD *)(v47 + 36) == v51 )
      {
LABEL_146:
        v12 = v47;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v47 + 204) == v51 )
      {
        if ( v58 == 10 || v60 == 0 )
        {
          if ( v48 != 0 )
          {
            if ( v58 == 8 )
              v16 = 0;
            else
              ++v16;
            v60 = 1;
          }
          else
          {
            v16 = 0;
            v60 = 1;
            v58 = 8;
          }
          goto LABEL_123;
        }
      }
      else if ( v60 == 0 )
      {
        goto LABEL_146;
      }
      if ( *(_DWORD *)(v47 + 196) != v51 && *(_DWORD *)(v47 + 200) != v51 )
      {
        v12 = v47;
        v60 = 1;
        goto LABEL_14;
      }
      if ( v48 != 0 )
      {
        if ( v58 != 16 )
        {
          v12 = v47;
          v60 = 1;
          goto LABEL_15;
        }
        v16 = 0;
        v60 = 0;
      }
      else
      {
        v16 = 0;
        v60 = 0;
        v58 = 16;
      }
LABEL_123:
      if ( v63 != nullptr )
      {
        v49 = v63[2];
        if ( v49 >= v63[3] )
          (*(void (__fastcall **)(_DWORD *))(*v63 + 40))(v63);
        else
          v63[2] = v49 + 4;
        v64 = -1;
      }
      if ( sub_3AE580((int)&v63, (int)&a5) )
      {
        v56 = true;
        v12 = v47;
        v14 = *(unsigned __int8 *)(v47 + 16);
        if ( v58 != 16 )
          goto LABEL_15;
        goto LABEL_129;
      }
      v51 = sub_3AE544((int)&v63);
      if ( v60 == 0 )
      {
        v12 = v47;
        v14 = *(unsigned __int8 *)(v47 + 16);
        goto LABEL_14;
      }
      v14 = *(unsigned __int8 *)(v47 + 16);
    }
  }
  v15 = sub_3ADB20((int)&v63);
  if ( !sub_3AE580(v15, (int)&a5) )
  {
    v50 = sub_3AE544((int)&v63);
    v14 = *(unsigned __int8 *)(v12 + 16);
    v51 = v50;
    goto LABEL_112;
  }
LABEL_13:
  v14 = *(unsigned __int8 *)(v12 + 16);
  v56 = true;
  v16 = 0;
  v60 = 0;
LABEL_14:
  if ( v58 == 16 )
LABEL_129:
    v17 = 22;
  else
LABEL_15:
    v17 = v58;
  v67[0] = &byte_55FB88;
  if ( v14 != 0 )
    sub_3BE700(v67, 32);
  v59 = *(unsigned __int8 *)(v12 + 292);
  v57 = 0xFFFFFFFF / v58;
  if ( *(_BYTE *)(v12 + 292) == 0 )
  {
    v18 = 0;
    v19 = 0;
    if ( v56 )
      goto LABEL_53;
    if ( v17 <= 0xA )
      goto LABEL_21;
LABEL_62:
    if ( v51 - 48 <= 9 )
    {
      i = v51 - 48;
      goto LABEL_24;
    }
    if ( v51 - 97 > 5 )
    {
      if ( v51 - 65 <= 5 )
      {
        i = v51 - 55;
        if ( v57 >= v18 )
          goto LABEL_25;
LABEL_66:
        v19 = 1;
        goto LABEL_26;
      }
LABEL_53:
      v28 = v67[0];
      v27 = 0;
      v29 = (int *)(v67[0] - 12);
      if ( *(_DWORD *)(v67[0] - 12) == 0 )
        goto LABEL_40;
      goto LABEL_54;
    }
    for ( i = v51 - 87; ; i = v51 - 48 )
    {
LABEL_24:
      if ( v57 < v18 )
        goto LABEL_66;
LABEL_25:
      v21 = v18 * v58;
      v19 |= ~i < v21;
      v18 = i + v21;
      ++v16;
LABEL_26:
      v22 = v63;
      if ( v63 == nullptr )
        break;
      v23 = v63[2];
      if ( v23 < v63[3] )
      {
        v63[2] = v23 + 4;
        v64 = -1;
      }
      else
      {
        (*(void (**)(void))(*v63 + 40))();
        v22 = v63;
        v64 = -1;
        if ( v63 == nullptr )
          break;
      }
      v24 = (int *)v22[2];
      if ( (unsigned int)v24 < v22[3] )
        v54 = *v24;
      else
        v54 = (*(int (__fastcall **)(_DWORD *))(*v22 + 36))(v22);
      if ( v54 != -1 )
      {
        v64 = v54;
        v25 = a5;
        v35 = 0;
        if ( a5 == nullptr )
          goto LABEL_60;
        goto LABEL_36;
      }
      v63 = nullptr;
      v35 = 1;
LABEL_59:
      v25 = a5;
      if ( a5 == nullptr )
      {
LABEL_60:
        if ( v35 == 1 )
          goto LABEL_38;
        goto LABEL_61;
      }
LABEL_36:
      v26 = 0;
      if ( a6 == -1 )
      {
        v34 = (int *)v25[2];
        if ( (unsigned int)v34 < v25[3] )
          v53 = *v34;
        else
          v53 = (*(int (__fastcall **)(_DWORD *))(*v25 + 36))(v25);
        if ( v53 == -1 )
        {
          a5 = nullptr;
          v26 = 1;
        }
        else
        {
          a6 = v53;
          v26 = 0;
        }
      }
      if ( v35 == v26 )
      {
LABEL_38:
        v27 = 0;
        v56 = true;
        goto LABEL_39;
      }
LABEL_61:
      v51 = sub_3AE544((int)&v63);
      if ( v17 > 0xA )
        goto LABEL_62;
LABEL_21:
      if ( v51 <= 0x2F || v51 >= v17 + 48 )
        goto LABEL_53;
    }
    v35 = 1;
    goto LABEL_59;
  }
  v18 = 0;
  v19 = 0;
  if ( v56 )
    goto LABEL_53;
  while ( *(_BYTE *)(v12 + 16) == 0 || v51 != *(_DWORD *)(v12 + 40) )
  {
    if ( v51 == *(_DWORD *)(v12 + 36) )
      goto LABEL_53;
    v36 = j_wmemchr((const wchar_t *)(v12 + 204), v51, v17);
    if ( v36 == nullptr )
      goto LABEL_53;
    v37 = ((int)v36 - v12 - 204) >> 2;
    if ( v37 > 15 )
      v37 -= 6;
    if ( v57 < v18 )
    {
      v19 = 1;
    }
    else
    {
      v38 = v18 * v58;
      v19 |= ~v37 < v38;
      v18 = v37 + v38;
      ++v16;
    }
LABEL_84:
    v39 = v63;
    if ( v63 == nullptr )
      goto LABEL_96;
    v40 = v63[2];
    if ( v40 >= v63[3] )
    {
      (*(void (**)(void))(*v63 + 40))();
      v39 = v63;
      v64 = -1;
      if ( v63 == nullptr )
      {
LABEL_96:
        v43 = v59;
        goto LABEL_97;
      }
    }
    else
    {
      v63[2] = v40 + 4;
      v64 = -1;
    }
    v41 = (int *)v39[2];
    if ( (unsigned int)v41 < v39[3] )
      v55 = *v41;
    else
      v55 = (*(int (__fastcall **)(_DWORD *))(*v39 + 36))(v39);
    if ( v55 != -1 )
    {
      v64 = v55;
      v42 = a5;
      v43 = 0;
      if ( a5 == nullptr )
        goto LABEL_98;
      goto LABEL_92;
    }
    v63 = nullptr;
    v43 = v59;
LABEL_97:
    v42 = a5;
    if ( a5 == nullptr )
    {
LABEL_98:
      v44 = v59;
      goto LABEL_93;
    }
LABEL_92:
    v44 = 0;
    if ( a6 == -1 )
    {
      v45 = (int *)v42[2];
      if ( (unsigned int)v45 < v42[3] )
        v52 = *v45;
      else
        v52 = (*(int (__fastcall **)(_DWORD *, int))(*v42 + 36))(v42, a6 + 1);
      if ( v52 == -1 )
      {
        a5 = nullptr;
        v44 = v59;
      }
      else
      {
        a6 = v52;
        v44 = 0;
      }
    }
LABEL_93:
    if ( v43 == v44 )
    {
      v27 = 0;
      v56 = true;
      goto LABEL_39;
    }
    v51 = sub_3AE544((int)&v63);
  }
  if ( v16 != 0 )
  {
    sub_3BEA50(v67, (unsigned __int8)v16);
    v16 = 0;
    goto LABEL_84;
  }
  v27 = 1;
LABEL_39:
  v28 = v67[0];
  v29 = (int *)(v67[0] - 12);
  if ( *(_DWORD *)(v67[0] - 12) != 0 )
  {
LABEL_54:
    sub_3BEA50(v67, (unsigned __int8)v16);
    if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), v67) == 0 )
      *a8 = 4;
    v28 = v67[0];
    v29 = (int *)(v67[0] - 12);
  }
LABEL_40:
  if ( v16 == 0 && v60 == 0 && *v29 == 0 || v27 != 0 )
  {
    v30 = 0;
    goto LABEL_44;
  }
  if ( v19 != 0 )
  {
    v30 = -1;
LABEL_44:
    v31 = a8;
    *a9 = v30;
    *v31 = 4;
  }
  else
  {
    if ( v62 )
      v18 = -v18;
    *a9 = v18;
  }
  if ( v56 )
    *a8 |= 2u;
  v32 = v64;
  *a1 = v63;
  a1[1] = v32;
  if ( v29 != &dword_55FB7C && sub_3C82FC(v28 - 4, -1) <= 0 )
    sub_3BDF60(v29, v66);
  return a1;
}


//======================================================================
// sub_3B2BC0
// address: 0x003B2BC0   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3B2BC0(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  sub_3B265C(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_3B2BE8
// address: 0x003B2BE8   size: 0x68 (104 bytes)
//======================================================================
_DWORD *__fastcall sub_3B2BE8(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v10; // r0
  int v11; // r8
  int v12; // r7
  int v13; // r1
  _DWORD v15[2]; // [sp+18h] [bp+0h] BYREF
  _DWORD *v16; // [sp+20h] [bp+8h]
  int v17; // [sp+24h] [bp+Ch]
  int v18; // [sp+2Ch] [bp+14h] BYREF

  v10 = *(_DWORD *)(a7 + 12);
  v16 = a3;
  v17 = a4;
  *(_DWORD *)(a7 + 12) = v10 & 0xFFFFFFB5 | 8;
  v11 = v10;
  sub_3B265C(v15, a2, a3, a4, a5, a6, a7, a8, &v18);
  v16 = (_DWORD *)v15[0];
  v17 = v15[1];
  v12 = v18;
  *(_DWORD *)(a7 + 12) = v11;
  *a9 = v12;
  v13 = v17;
  *a1 = v16;
  a1[1] = v13;
  return a1;
}


//======================================================================
// sub_3B2C50
// address: 0x003B2C50   size: 0x63E (1598 bytes)
//======================================================================
_DWORD *__fastcall sub_3B2C50(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r4
  int v12; // r7
  int v13; // r0
  int v14; // r3
  int v15; // r0
  size_t v16; // r11
  int v17; // r9
  unsigned __int64 v18; // kr00_8
  int v19; // r8
  wchar_t *v20; // r0
  int v21; // r5
  unsigned __int64 v22; // r2
  _DWORD *v23; // r0
  unsigned int v24; // r3
  int *v25; // r3
  _DWORD *v26; // r0
  int v27; // r3
  int v28; // r4
  int v29; // r0
  int *v30; // r5
  _DWORD *v31; // r1
  int v32; // r2
  _DWORD *v34; // r1
  int *v35; // r3
  int v36; // r5
  signed int i; // r5
  int v38; // r4
  unsigned __int64 v39; // r2
  _DWORD *v40; // r0
  unsigned int v41; // r3
  int *v42; // r3
  _DWORD *v43; // r0
  int v44; // r4
  int v45; // r3
  int *v46; // r3
  int v47; // r10
  int v48; // r4
  unsigned int v49; // r2
  int v50; // r0
  _DWORD *v51; // r4
  unsigned int v52; // r5
  int v53; // r0
  int v54; // r0
  int v55; // r0
  int v56; // r0
  wchar_t *s; // [sp+0h] [bp-74h]
  unsigned __int64 v58; // [sp+10h] [bp-64h]
  int v59; // [sp+28h] [bp-4Ch]
  _BOOL4 v60; // [sp+2Ch] [bp-48h]
  int v61; // [sp+30h] [bp-44h]
  unsigned __int64 v62; // [sp+38h] [bp-3Ch]
  int v64; // [sp+4Ch] [bp-28h]
  _BOOL4 v65; // [sp+50h] [bp-24h]
  _DWORD *v66; // [sp+58h] [bp-1Ch] BYREF
  int v67; // [sp+5Ch] [bp-18h]
  _BYTE v68[4]; // [sp+64h] [bp-10h] BYREF
  _BYTE v69[4]; // [sp+68h] [bp-Ch] BYREF
  _DWORD v70[2]; // [sp+6Ch] [bp-8h] BYREF

  v9 = a7;
  v67 = a4;
  v66 = a3;
  v10 = sub_3ADBF0((int)v68, (int *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = v10;
  if ( v11 == 64 )
  {
    v61 = 8;
  }
  else if ( v11 == 8 )
  {
    v61 = 16;
  }
  else
  {
    v61 = 10;
  }
  v60 = sub_3AE580((int)&v66, (int)&a5);
  if ( !v60 )
  {
    v13 = sub_3AE544((int)&v66);
    v52 = v13;
    v65 = *(_DWORD *)(v12 + 188) == v13;
    if ( *(_DWORD *)(v12 + 188) == v13 || *(_DWORD *)(v12 + 192) == v13 )
    {
      v14 = *(unsigned __int8 *)(v12 + 16);
      if ( *(_BYTE *)(v12 + 16) != 0 && *(_DWORD *)(v12 + 40) == v13 )
      {
        v14 = 1;
      }
      else if ( *(_DWORD *)(v12 + 36) != v13 )
      {
        v15 = sub_3ADB20((int)&v66);
        if ( sub_3AE580(v15, (int)&a5) )
          goto LABEL_13;
        v50 = sub_3AE544((int)&v66);
        v14 = *(unsigned __int8 *)(v12 + 16);
        v52 = v50;
      }
    }
    else
    {
      v14 = *(unsigned __int8 *)(v12 + 16);
    }
    v59 = 0;
    v47 = v11;
    v48 = 0;
    while ( 1 )
    {
      if ( v14 != 0 && *(_DWORD *)(v12 + 40) == v52 || *(_DWORD *)(v12 + 36) == v52 )
      {
LABEL_153:
        v64 = v48;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v12 + 204) == v52 )
      {
        if ( v61 == 10 || v48 == 0 )
        {
          if ( v47 != 0 )
          {
            if ( v61 == 8 )
              v59 = 0;
            else
              ++v59;
            v48 = 1;
          }
          else
          {
            v59 = 0;
            v61 = 8;
            v48 = 1;
          }
          goto LABEL_129;
        }
      }
      else if ( v48 == 0 )
      {
        goto LABEL_153;
      }
      if ( *(_DWORD *)(v12 + 196) != v52 && *(_DWORD *)(v12 + 200) != v52 )
      {
        v64 = 1;
        goto LABEL_14;
      }
      if ( v47 != 0 )
      {
        if ( v61 != 16 )
        {
          v64 = 1;
          goto LABEL_15;
        }
        v48 = 0;
        v59 = 0;
      }
      else
      {
        v48 = 0;
        v59 = 0;
        v61 = 16;
      }
LABEL_129:
      if ( v66 != nullptr )
      {
        v49 = v66[2];
        if ( v49 < v66[3] )
          v66[2] = v49 + 4;
        else
          (*(void (__fastcall **)(_DWORD *))(*v66 + 40))(v66);
        v67 = -1;
      }
      if ( sub_3AE580((int)&v66, (int)&a5) )
      {
        v64 = v48;
        v60 = true;
        v14 = *(unsigned __int8 *)(v12 + 16);
        if ( v61 != 16 )
          goto LABEL_15;
        goto LABEL_136;
      }
      v52 = sub_3AE544((int)&v66);
      if ( v48 == 0 )
      {
        v64 = 0;
        v14 = *(unsigned __int8 *)(v12 + 16);
        goto LABEL_14;
      }
      v14 = *(unsigned __int8 *)(v12 + 16);
    }
  }
  v52 = 0;
  v65 = false;
LABEL_13:
  v14 = *(unsigned __int8 *)(v12 + 16);
  v60 = true;
  v59 = 0;
  v64 = 0;
LABEL_14:
  if ( v61 == 16 )
LABEL_136:
    v16 = 22;
  else
LABEL_15:
    v16 = v61;
  v70[0] = &byte_55FB88;
  if ( v14 != 0 )
    sub_3BE700(v70, 32);
  if ( v65 )
    v62 = 0x8000000000000000LL;
  else
    v62 = 0x7FFFFFFFFFFFFFFFLL;
  s = (wchar_t *)(v12 + 204);
  v17 = *(unsigned __int8 *)(v12 + 292);
  v18 = v62 / v61;
  if ( *(_BYTE *)(v12 + 292) != 0 )
  {
    if ( !v60 )
    {
      v58 = 0;
      v19 = 0;
      while ( 1 )
      {
        if ( *(_BYTE *)(v12 + 16) != 0 && v52 == *(_DWORD *)(v12 + 40) )
        {
          if ( v59 == 0 )
          {
            v28 = 1;
            goto LABEL_44;
          }
          sub_3BEA50(v70, (unsigned __int8)v59);
          v59 = 0;
        }
        else
        {
          if ( v52 == *(_DWORD *)(v12 + 36) )
            goto LABEL_74;
          v20 = j_wmemchr(s, v52, v16);
          if ( v20 == nullptr )
            goto LABEL_74;
          v21 = v20 - s;
          if ( v21 > 15 )
            v21 -= 6;
          if ( v58 > v18 )
          {
            v19 = 1;
          }
          else
          {
            v22 = v58 * v61;
            v19 = (unsigned __int8)((v22 > v62 - v21) | v19);
            v58 = v21 + v22;
            ++v59;
          }
        }
        v23 = v66;
        if ( v66 == nullptr )
          break;
        v24 = v66[2];
        if ( v24 >= v66[3] )
        {
          (*(void (__fastcall **)(_DWORD *))(*v66 + 40))(v66);
          v23 = v66;
          v67 = -1;
          if ( v66 == nullptr )
            break;
        }
        else
        {
          v66[2] = v24 + 4;
          v67 = -1;
        }
        v25 = (int *)v23[2];
        if ( (unsigned int)v25 < v23[3] )
          v56 = *v25;
        else
          v56 = (*(int (__fastcall **)(_DWORD *))(*v23 + 36))(v23);
        if ( v56 != -1 )
        {
          v67 = v56;
          v26 = a5;
          v36 = 0;
          if ( a5 == nullptr )
            goto LABEL_62;
          goto LABEL_41;
        }
        v66 = nullptr;
        v36 = v17;
LABEL_61:
        v26 = a5;
        if ( a5 == nullptr )
        {
LABEL_62:
          if ( v36 == v17 )
            goto LABEL_43;
          goto LABEL_63;
        }
LABEL_41:
        v27 = 0;
        if ( a6 == -1 )
        {
          v35 = (int *)v26[2];
          if ( (unsigned int)v35 < v26[3] )
            v54 = *v35;
          else
            v54 = (*(int (__fastcall **)(_DWORD *))(*v26 + 36))(v26);
          if ( v54 == -1 )
          {
            a5 = nullptr;
            v27 = v17;
          }
          else
          {
            a6 = v54;
            v27 = 0;
          }
        }
        if ( v36 == v27 )
          goto LABEL_43;
LABEL_63:
        v52 = sub_3AE544((int)&v66);
      }
      v36 = v17;
      goto LABEL_61;
    }
LABEL_154:
    v58 = 0;
    v19 = 0;
    v28 = 0;
LABEL_44:
    v29 = v70[0];
    v30 = (int *)(v70[0] - 12);
    if ( *(_DWORD *)(v70[0] - 12) == 0 )
      goto LABEL_45;
LABEL_75:
    sub_3BEA50(v70, (unsigned __int8)v59);
    if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), v70) == 0 )
      *a8 = 4;
    v29 = v70[0];
    v30 = (int *)(v70[0] - 12);
    goto LABEL_45;
  }
  if ( v60 )
    goto LABEL_154;
  v58 = 0;
  v19 = 0;
  if ( v16 <= 0xA )
    goto LABEL_80;
LABEL_98:
  if ( v52 - 48 <= 9 )
  {
    i = v52 - 48;
    goto LABEL_83;
  }
  if ( v52 - 97 <= 5 )
  {
    for ( i = v52 - 87; ; i = v52 - 48 )
    {
LABEL_83:
      v38 = HIDWORD(v58);
      if ( HIDWORD(v58) > HIDWORD(v18) )
        goto LABEL_102;
LABEL_84:
      if ( v38 == HIDWORD(v18) && (unsigned int)v58 > (unsigned int)v18 )
        goto LABEL_102;
      v39 = v58 * v61;
      v58 = i + v39;
      v40 = v66;
      v19 = (unsigned __int8)((v39 > v62 - i) | v19);
      ++v59;
      if ( v66 == nullptr )
        goto LABEL_103;
LABEL_87:
      v41 = v40[2];
      if ( v41 < v40[3] )
      {
        v40[2] = v41 + 4;
        v67 = -1;
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *))(*v40 + 40))(v40);
        v40 = v66;
        v67 = -1;
        if ( v66 == nullptr )
        {
          v44 = 1;
          goto LABEL_104;
        }
      }
      v42 = (int *)v40[2];
      if ( (unsigned int)v42 < v40[3] )
        v55 = *v42;
      else
        v55 = (*(int (__fastcall **)(_DWORD *))(*v40 + 36))(v40);
      if ( v55 == -1 )
      {
        v66 = nullptr;
        v44 = 1;
        goto LABEL_104;
      }
      v67 = v55;
      v43 = a5;
      v44 = 0;
      if ( a5 == nullptr )
        goto LABEL_105;
LABEL_95:
      v45 = 0;
      if ( a6 == -1 )
      {
        v46 = (int *)v43[2];
        if ( (unsigned int)v46 < v43[3] )
          v53 = *v46;
        else
          v53 = (*(int (__fastcall **)(_DWORD *))(*v43 + 36))(v43);
        if ( v53 == -1 )
        {
          a5 = nullptr;
          v45 = 1;
        }
        else
        {
          a6 = v53;
          v45 = 0;
        }
      }
LABEL_96:
      if ( v44 == v45 )
      {
LABEL_43:
        v28 = 0;
        v60 = true;
        goto LABEL_44;
      }
      v52 = sub_3AE544((int)&v66);
      if ( v16 > 0xA )
        goto LABEL_98;
LABEL_80:
      if ( v52 <= 0x2F || v52 >= v16 + 48 )
        goto LABEL_74;
    }
  }
  if ( v52 - 65 <= 5 )
  {
    v38 = HIDWORD(v58);
    i = v52 - 55;
    if ( HIDWORD(v58) <= HIDWORD(v18) )
      goto LABEL_84;
LABEL_102:
    v19 = 1;
    v40 = v66;
    if ( v66 != nullptr )
      goto LABEL_87;
LABEL_103:
    v44 = 1;
LABEL_104:
    v43 = a5;
    if ( a5 != nullptr )
      goto LABEL_95;
LABEL_105:
    v45 = 1;
    goto LABEL_96;
  }
LABEL_74:
  v29 = v70[0];
  v28 = 0;
  v30 = (int *)(v70[0] - 12);
  if ( *(_DWORD *)(v70[0] - 12) != 0 )
    goto LABEL_75;
LABEL_45:
  if ( v59 == 0 && v64 == 0 && *v30 == 0 || v28 != 0 )
  {
    v31 = a9;
    *a9 = 0;
    v31[1] = 0;
LABEL_49:
    *a8 = 4;
    goto LABEL_50;
  }
  if ( v19 != 0 )
  {
    if ( v65 )
    {
      v34 = a9;
      *a9 = 0;
      v34[1] = 0x80000000;
    }
    else
    {
      v51 = a9;
      *a9 = -1;
      v51[1] = 0x7FFFFFFF;
    }
    goto LABEL_49;
  }
  if ( v65 )
    v58 = -(__int64)v58;
  *(_QWORD *)a9 = v58;
LABEL_50:
  if ( v60 )
    *a8 |= 2u;
  v32 = v67;
  *a1 = v66;
  a1[1] = v32;
  if ( v30 != &dword_55FB7C && sub_3C82FC(v29 - 4, -1) <= 0 )
    sub_3BDF60(v30, v69);
  return a1;
}


//======================================================================
// sub_3B3298
// address: 0x003B3298   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3B3298(
        _DWORD *a1,
        int a2,
        _DWORD *a3,
        int a4,
        _DWORD *a5,
        int a6,
        int a7,
        _DWORD *a8,
        _DWORD *a9)
{
  sub_3B2C50(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_3B32C0
// address: 0x003B32C0   size: 0x5BA (1466 bytes)
//======================================================================
_DWORD *__fastcall sub_3B32C0(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int *a9)
{
  int v9; // r4
  int v10; // r0
  int v11; // r4
  int v12; // r9
  int v13; // r0
  int v14; // r3
  int v15; // r0
  unsigned int v16; // r10
  unsigned __int64 v17; // r4
  int i; // r6
  unsigned __int64 v19; // r0
  _DWORD *v20; // r0
  unsigned int v21; // r3
  int *v22; // r3
  _DWORD *v23; // r0
  int v24; // r3
  _DWORD *v25; // r0
  int v26; // r2
  int v27; // r3
  int *v28; // r1
  int v29; // r2
  int *v31; // r3
  int v32; // r6
  wchar_t *v33; // r0
  int v34; // r6
  unsigned __int64 v35; // r0
  _DWORD *v36; // r0
  unsigned int v37; // r3
  int *v38; // r3
  _DWORD *v39; // r0
  int v40; // r6
  int v41; // r3
  int *v42; // r3
  int v43; // r2
  int v44; // r4
  int v45; // r9
  unsigned int v46; // r2
  int v47; // r0
  unsigned int v48; // r6
  int v49; // r8
  int v50; // r6
  int v51; // r0
  int v52; // r0
  int v53; // r0
  int v54; // r0
  size_t n; // [sp+1Ch] [bp-2Ch]
  int v56; // [sp+20h] [bp-28h]
  _BOOL4 v57; // [sp+24h] [bp-24h]
  int v58; // [sp+28h] [bp-20h]
  int v59; // [sp+2Ch] [bp-1Ch]
  int v60; // [sp+34h] [bp-14h]
  unsigned int v62; // [sp+3Ch] [bp-Ch]
  _BOOL4 v63; // [sp+44h] [bp-4h]
  _DWORD *v64; // [sp+48h] [bp+0h] BYREF
  int v65; // [sp+4Ch] [bp+4h]
  char v66[4]; // [sp+54h] [bp+Ch] BYREF
  char v67[4]; // [sp+58h] [bp+10h] BYREF
  _DWORD v68[2]; // [sp+5Ch] [bp+14h] BYREF

  v9 = a7;
  v65 = a4;
  v64 = a3;
  v10 = sub_3ADBF0((int)v66, (int *)(a7 + 108));
  v11 = *(_DWORD *)(v9 + 12) & 0x4A;
  v12 = v10;
  if ( v11 == 64 )
  {
    v58 = 8;
  }
  else if ( v11 == 8 )
  {
    v58 = 16;
  }
  else
  {
    v58 = 10;
  }
  v57 = sub_3AE580((int)&v64, (int)&a5);
  if ( v57 )
  {
    v48 = 0;
    v63 = false;
    goto LABEL_13;
  }
  v13 = sub_3AE544((int)&v64);
  v48 = v13;
  v63 = *(_DWORD *)(v12 + 188) == v13;
  if ( *(_DWORD *)(v12 + 188) != v13 && *(_DWORD *)(v12 + 192) != v13 )
  {
    v14 = *(unsigned __int8 *)(v12 + 16);
    goto LABEL_113;
  }
  v14 = *(unsigned __int8 *)(v12 + 16);
  if ( *(_BYTE *)(v12 + 16) != 0 && *(_DWORD *)(v12 + 40) == v13 )
  {
    v14 = 1;
    goto LABEL_113;
  }
  if ( *(_DWORD *)(v12 + 36) == v13 )
  {
LABEL_113:
    v56 = 0;
    v60 = 0;
    v43 = v11;
    v44 = v12;
    v45 = v43;
    while ( 1 )
    {
      if ( v14 != 0 && *(_DWORD *)(v44 + 40) == v48 || *(_DWORD *)(v44 + 36) == v48 )
      {
LABEL_147:
        v12 = v44;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v44 + 204) == v48 )
      {
        if ( v58 == 10 || v60 == 0 )
        {
          if ( v45 != 0 )
          {
            if ( v58 == 8 )
              v56 = 0;
            else
              ++v56;
            v60 = 1;
          }
          else
          {
            v56 = 0;
            v60 = 1;
            v58 = 8;
          }
          goto LABEL_124;
        }
      }
      else if ( v60 == 0 )
      {
        goto LABEL_147;
      }
      if ( *(_DWORD *)(v44 + 196) != v48 && *(_DWORD *)(v44 + 200) != v48 )
      {
        v12 = v44;
        v60 = 1;
        goto LABEL_14;
      }
      if ( v45 != 0 )
      {
        if ( v58 != 16 )
        {
          v12 = v44;
          v60 = 1;
          goto LABEL_15;
        }
        v56 = 0;
        v60 = 0;
      }
      else
      {
        v56 = 0;
        v60 = 0;
        v58 = 16;
      }
LABEL_124:
      if ( v64 != nullptr )
      {
        v46 = v64[2];
        if ( v46 >= v64[3] )
          (*(void (__fastcall **)(_DWORD *))(*v64 + 40))(v64);
        else
          v64[2] = v46 + 4;
        v65 = -1;
      }
      if ( sub_3AE580((int)&v64, (int)&a5) )
      {
        v57 = true;
        v12 = v44;
        v14 = *(unsigned __int8 *)(v44 + 16);
        if ( v58 != 16 )
          goto LABEL_15;
        goto LABEL_130;
      }
      v48 = sub_3AE544((int)&v64);
      if ( v60 == 0 )
      {
        v12 = v44;
        v14 = *(unsigned __int8 *)(v44 + 16);
        goto LABEL_14;
      }
      v14 = *(unsigned __int8 *)(v44 + 16);
    }
  }
  v15 = sub_3ADB20((int)&v64);
  if ( !sub_3AE580(v15, (int)&a5) )
  {
    v47 = sub_3AE544((int)&v64);
    v14 = *(unsigned __int8 *)(v12 + 16);
    v48 = v47;
    goto LABEL_113;
  }
LABEL_13:
  v14 = *(unsigned __int8 *)(v12 + 16);
  v57 = true;
  v56 = 0;
  v60 = 0;
LABEL_14:
  if ( v58 == 16 )
LABEL_130:
    n = 22;
  else
LABEL_15:
    n = v58;
  v68[0] = &byte_55FB88;
  if ( v14 != 0 )
    sub_3BE700(v68, 32);
  v59 = *(unsigned __int8 *)(v12 + 292);
  v16 = (0xFFFFFFFFFFFFFFFFLL / v58) >> 32;
  v62 = 0xFFFFFFFFFFFFFFFFLL / v58;
  if ( *(_BYTE *)(v12 + 292) == 0 )
  {
    v17 = 0;
    if ( v57 )
    {
      v49 = 0;
      v50 = 0;
      goto LABEL_41;
    }
    v49 = 0;
    if ( n <= 0xA )
      goto LABEL_22;
LABEL_58:
    if ( v48 - 48 <= 9 )
    {
      i = v48 - 48;
      goto LABEL_25;
    }
    if ( v48 - 97 > 5 )
    {
      if ( v48 - 65 <= 5 )
      {
        i = v48 - 55;
        if ( HIDWORD(v17) <= v16 )
          goto LABEL_26;
LABEL_62:
        v49 = 1;
        goto LABEL_29;
      }
LABEL_72:
      v50 = 0;
      v25 = (_DWORD *)(v68[0] - 12);
      if ( *(_DWORD *)(v68[0] - 12) == 0 )
        goto LABEL_42;
      goto LABEL_73;
    }
    for ( i = v48 - 87; ; i = v48 - 48 )
    {
LABEL_25:
      if ( HIDWORD(v17) > v16 )
        goto LABEL_62;
LABEL_26:
      if ( HIDWORD(v17) == v16 && (unsigned int)v17 > v62 )
        goto LABEL_62;
      v19 = v17 * v58;
      v17 = i + v19;
      v49 = (unsigned __int8)((v19 > __PAIR64__(~(i >> 31), ~i)) | v49);
      ++v56;
LABEL_29:
      v20 = v64;
      if ( v64 == nullptr )
        break;
      v21 = v64[2];
      if ( v21 >= v64[3] )
      {
        (*(void (__fastcall **)(_DWORD *))(*v64 + 40))(v64);
        v20 = v64;
        v65 = -1;
        if ( v64 == nullptr )
          break;
      }
      else
      {
        v64[2] = v21 + 4;
        v65 = -1;
      }
      v22 = (int *)v20[2];
      if ( (unsigned int)v22 < v20[3] )
        v53 = *v22;
      else
        v53 = (*(int (__fastcall **)(_DWORD *))(*v20 + 36))(v20);
      if ( v53 != -1 )
      {
        v65 = v53;
        v23 = a5;
        v32 = 0;
        if ( a5 == nullptr )
          goto LABEL_56;
        goto LABEL_38;
      }
      v64 = nullptr;
      v32 = 1;
LABEL_55:
      v23 = a5;
      if ( a5 == nullptr )
      {
LABEL_56:
        if ( v32 == 1 )
          goto LABEL_40;
        goto LABEL_57;
      }
LABEL_38:
      v24 = 0;
      if ( a6 == -1 )
      {
        v31 = (int *)v23[2];
        if ( (unsigned int)v31 < v23[3] )
          v54 = *v31;
        else
          v54 = (*(int (__fastcall **)(_DWORD *, int))(*v23 + 36))(v23, a6 + 1);
        if ( v54 == -1 )
        {
          a5 = nullptr;
          v24 = 1;
        }
        else
        {
          a6 = v54;
          v24 = 0;
        }
      }
      if ( v24 == v32 )
      {
LABEL_40:
        v50 = 0;
        v57 = true;
        goto LABEL_41;
      }
LABEL_57:
      v48 = sub_3AE544((int)&v64);
      if ( n > 0xA )
        goto LABEL_58;
LABEL_22:
      if ( v48 <= 0x2F || n + 48 <= v48 )
        goto LABEL_72;
    }
    v32 = 1;
    goto LABEL_55;
  }
  v17 = 0;
  v49 = 0;
  if ( v57 )
    goto LABEL_72;
  while ( *(_BYTE *)(v12 + 16) == 0 || v48 != *(_DWORD *)(v12 + 40) )
  {
    if ( v48 == *(_DWORD *)(v12 + 36) )
      goto LABEL_72;
    v33 = j_wmemchr((const wchar_t *)(v12 + 204), v48, n);
    if ( v33 == nullptr )
      goto LABEL_72;
    v34 = ((int)v33 - v12 - 204) >> 2;
    if ( v34 > 15 )
      v34 -= 6;
    if ( v17 > __PAIR64__(v16, v62) )
    {
      v49 = 1;
    }
    else
    {
      v35 = v17 * v58;
      v17 = v34 + v35;
      v49 = (unsigned __int8)((v35 > __PAIR64__(~(v34 >> 31), ~v34)) | v49);
      ++v56;
    }
LABEL_85:
    v36 = v64;
    if ( v64 == nullptr )
      goto LABEL_97;
    v37 = v64[2];
    if ( v37 >= v64[3] )
    {
      (*(void (__fastcall **)(_DWORD *))(*v64 + 40))(v64);
      v36 = v64;
      v65 = -1;
      if ( v64 == nullptr )
      {
LABEL_97:
        v40 = v59;
        goto LABEL_98;
      }
    }
    else
    {
      v64[2] = v37 + 4;
      v65 = -1;
    }
    v38 = (int *)v36[2];
    if ( (unsigned int)v38 < v36[3] )
      v51 = *v38;
    else
      v51 = (*(int (__fastcall **)(_DWORD *))(*v36 + 36))(v36);
    if ( v51 != -1 )
    {
      v65 = v51;
      v39 = a5;
      v40 = 0;
      if ( a5 == nullptr )
        goto LABEL_99;
      goto LABEL_93;
    }
    v64 = nullptr;
    v40 = v59;
LABEL_98:
    v39 = a5;
    if ( a5 == nullptr )
    {
LABEL_99:
      v41 = v59;
      goto LABEL_94;
    }
LABEL_93:
    v41 = 0;
    if ( a6 == -1 )
    {
      v42 = (int *)v39[2];
      if ( (unsigned int)v42 < v39[3] )
        v52 = *v42;
      else
        v52 = (*(int (__fastcall **)(_DWORD *, int))(*v39 + 36))(v39, a6 + 1);
      if ( v52 == -1 )
      {
        a5 = nullptr;
        v41 = v59;
      }
      else
      {
        a6 = v52;
        v41 = 0;
      }
    }
LABEL_94:
    if ( v40 == v41 )
    {
      v50 = 0;
      v57 = true;
      goto LABEL_41;
    }
    v48 = sub_3AE544((int)&v64);
  }
  if ( v56 != 0 )
  {
    sub_3BEA50(v68, (unsigned __int8)v56);
    v56 = 0;
    goto LABEL_85;
  }
  v50 = 1;
LABEL_41:
  v25 = (_DWORD *)(v68[0] - 12);
  if ( *(_DWORD *)(v68[0] - 12) != 0 )
  {
LABEL_73:
    sub_3BEA50(v68, (unsigned __int8)v56);
    if ( sub_3BFF94(*(_DWORD *)(v12 + 8), *(_DWORD *)(v12 + 12), v68) == 0 )
      *a8 = 4;
    v25 = (_DWORD *)(v68[0] - 12);
  }
LABEL_42:
  if ( v56 == 0 && v60 == 0 && *v25 == 0 || v50 != 0 )
  {
    v26 = 0;
    v27 = 0;
    goto LABEL_46;
  }
  if ( v49 != 0 )
  {
    v26 = -1;
    v27 = -1;
LABEL_46:
    v28 = a9;
    *a9 = v26;
    v28[1] = v27;
    *a8 = 4;
  }
  else
  {
    if ( v63 )
      v17 = -(__int64)v17;
    *(_QWORD *)a9 = v17;
  }
  if ( v57 )
    *a8 |= 2u;
  v29 = v65;
  *a1 = v64;
  a1[1] = v29;
  sub_3BDF68(v25, v67);
  return a1;
}


//======================================================================
// sub_3B387C
// address: 0x003B387C   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3B387C(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int a6, int a7, _DWORD *a8, int *a9)
{
  sub_3B32C0(a1, a2, a3, a4, a5, a6, a7, a8, a9);
  return a1;
}


//======================================================================
// sub_3B38A4
// address: 0x003B38A4   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3B38A4(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_4658F4;
  v2 = a1 + 1;
  *v2 = &off_464320;
  sub_392FE4(v2);
  return a1;
}


//======================================================================
// sub_3B38CC
// address: 0x003B38CC   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B38CC(_DWORD *a1)
{
  return sub_3B38A4((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B38DC
// address: 0x003B38DC   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3B38DC(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_465924;
  v2 = a1 + 1;
  *v2 = &off_464330;
  sub_392FE4(v2);
  return a1;
}


//======================================================================
// sub_3B3904
// address: 0x003B3904   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B3904(_DWORD *a1)
{
  return sub_3B38DC((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B3914
// address: 0x003B3914   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3B3914(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_4658F4;
  v2 = a1 + 1;
  *v2 = &off_464320;
  sub_392FE4(v2);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3B3944
// address: 0x003B3944   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B3944(_DWORD *a1)
{
  return sub_3B3914((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B3954
// address: 0x003B3954   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_3B3954(_DWORD *a1)
{
  _DWORD *v2; // r0

  *a1 = &off_465924;
  v2 = a1 + 1;
  *v2 = &off_464330;
  sub_392FE4(v2);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3B3984
// address: 0x003B3984   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B3984(_DWORD *a1)
{
  return sub_3B3954((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B3994
// address: 0x003B3994   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall sub_3B3994(int *a1, int *a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r0

  v4 = *a2;
  *a1 = *a2;
  v5 = (int *)((char *)a1 + *(_DWORD *)(v4 - 12));
  *v5 = a2[1];
  sub_391734((int)v5, a3);
  return a1;
}


//======================================================================
// sub_3B39B0
// address: 0x003B39B0   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3B39B0(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 4;
  sub_392DEC((_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 121) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)a1 = &off_4658F4;
  *(_DWORD *)(a1 + 4) = &off_465908;
  sub_391734(v2, a2);
  return a1;
}


//======================================================================
// sub_3B3A10
// address: 0x003B3A10   size: 0xE (14 bytes)
//======================================================================
int *__fastcall sub_3B3A10(int *result, int *a2)
{
  int v2; // r3

  v2 = *a2;
  *result = *a2;
  *(int *)((char *)result + *(_DWORD *)(v2 - 12)) = a2[1];
  return result;
}


//======================================================================
// sub_3B3A20
// address: 0x003B3A20   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3B3A20(int a1, int (*a2)(void))
{
  return a2();
}


//======================================================================
// sub_3B3A28
// address: 0x003B3A28   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall sub_3B3A28(char *a1, void (__fastcall *a2)(char *))
{
  a2(&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)]);
  return a1;
}


//======================================================================
// sub_3B3A3C
// address: 0x003B3A3C   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall sub_3B3A3C(char *a1, void (__fastcall *a2)(char *))
{
  a2(&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)]);
  return a1;
}


//======================================================================
// sub_3B3A50
// address: 0x003B3A50   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3B3A50(_DWORD *a1, int a2, _DWORD *a3)
{
  int v5; // r0
  _DWORD *result; // r0

  v5 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 48))(v5);
  if ( a3 != result )
    return sub_3914B0(
             (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
             *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  return result;
}


//======================================================================
// sub_3B3A80
// address: 0x003B3A80   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3B3A80(_DWORD *a1)
{
  int v2; // r0

  v2 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
  if ( v2 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 24))(v2) == -1 )
    sub_3914B0((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  return a1;
}


//======================================================================
// sub_3B3BB8
// address: 0x003B3BB8   size: 0x72 (114 bytes)
//======================================================================
// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_3B3BB8(_DWORD *a1)
{
  char *v1; // r3
  int v4; // r5
  _DWORD v5[4]; // [sp+10h] [bp-24h] BYREF
  __int128 v6; // [sp+20h] [bp-14h]
  __int128 varg_r2; // [sp+48h] [bp+14h] OVERLAPPED

  v1 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  if ( (*((_DWORD *)v1 + 5) & 5) == 0 )
  {
    v4 = *((_DWORD *)v1 + 30);
    v6 = varg_r2;
    (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 20))(v5, v4, v6, DWORD1(v6));
    if ( v5[0] == -1 && v5[1] == -1 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  }
  return a1;
}


//======================================================================
// sub_3B3C84
// address: 0x003B3C84   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall sub_3B3C84(_DWORD *a1)
{
  char *v2; // r1
  _DWORD v4[5]; // [sp+8h] [bp-14h] BYREF

  v2 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  if ( (*((_DWORD *)v2 + 5) & 5) == 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(**((_DWORD **)v2 + 30) + 16))(v4);
    if ( v4[0] == -1 && v4[1] == -1 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  }
  return a1;
}


//======================================================================
// sub_3B3D2C
// address: 0x003B3D2C   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall sub_3B3D2C(int *a1, int *a2)
{
  int v2; // r3
  _DWORD *v4; // r0

  v2 = *a2;
  *a1 = *a2;
  v4 = (int *)((char *)a1 + *(_DWORD *)(v2 - 12));
  *v4 = a2[1];
  sub_391734((int)v4, 0);
  return a1;
}


//======================================================================
// sub_3B3D48
// address: 0x003B3D48   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_3B3D48(int a1)
{
  int v1; // r5

  v1 = a1 + 4;
  sub_392DEC((_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 116) = 0;
  *(_BYTE *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 121) = 0;
  *(_DWORD *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)a1 = &off_4658F4;
  *(_DWORD *)(a1 + 4) = &off_465908;
  sub_391734(v1, 0);
  return a1;
}


//======================================================================
// sub_3B3DA4
// address: 0x003B3DA4   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_3B3DA4(int a1, int *a2)
{
  int v2; // r2
  _DWORD *v4; // r3
  _DWORD *v5; // r0
  int v7; // r2

  v2 = *a2;
  *(_BYTE *)a1 = 0;
  v4 = (int *)((char *)a2 + *(_DWORD *)(v2 - 12));
  *(_DWORD *)(a1 + 4) = a2;
  v5 = (_DWORD *)v4[28];
  if ( v5 != nullptr )
  {
    v7 = v4[5];
    if ( v7 != 0 )
    {
LABEL_7:
      sub_3914B0(v4, v7 | 4);
      return a1;
    }
    sub_3B3A80(v5);
    v2 = *a2;
  }
  v4 = (int *)((char *)a2 + *(_DWORD *)(v2 - 12));
  v7 = v4[5];
  if ( v7 != 0 )
    goto LABEL_7;
  *(_BYTE *)a1 = 1;
  return a1;
}


//======================================================================
// sub_3B3DEC
// address: 0x003B3DEC   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_3B3DEC(int a1)
{
  int v2; // r5
  int v3; // r0
  _DWORD *v5; // r0

  v2 = *(_DWORD *)(a1 + 4) + *(_DWORD *)(**(_DWORD **)(a1 + 4) - 12);
  if ( (*(_DWORD *)(v2 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v3 = *(_DWORD *)(v2 + 120);
    if ( v3 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3) == -1 )
    {
      v5 = (_DWORD *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(**(_DWORD **)(a1 + 4) - 12));
      sub_3914B0(v5, v5[5] | 1);
    }
  }
  return a1;
}


//======================================================================
// sub_3B3E34
// address: 0x003B3E34   size: 0x92 (146 bytes)
//======================================================================
int *__fastcall sub_3B3E34(int *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r0
  char v9; // [sp+7h] [bp-9h] BYREF
  _DWORD v10[2]; // [sp+8h] [bp-8h] BYREF

  sub_3B3DA4((int)v10, a1);
  if ( LOBYTE(v10[0]) == 0 )
  {
    if ( a2 != nullptr )
      goto LABEL_5;
  }
  else if ( a2 != nullptr )
  {
    v4 = sub_3A5A4C(a2, *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120), &v9);
    v5 = 4;
    if ( v4 == 0 )
LABEL_4:
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), v5 | *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
LABEL_5:
    v6 = v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12);
    if ( (*(_DWORD *)(v6 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
    {
      v7 = *(_DWORD *)(v6 + 120);
      if ( v7 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 24))(v7) == -1 )
        sub_3914B0(
          (_DWORD *)(v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12)),
          *(_DWORD *)(v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12) + 20) | 1);
    }
    return a1;
  }
  v5 = 1;
  goto LABEL_4;
}


//======================================================================
// sub_3B3F28
// address: 0x003B3F28   size: 0x94 (148 bytes)
//======================================================================
int *__fastcall sub_3B3F28(int *a1, char a2)
{
  int v4; // r0
  _BYTE *v5; // r3
  int v6; // r6
  int v7; // r0
  _DWORD v9[2]; // [sp+0h] [bp-8h] BYREF

  sub_3B3DA4((int)v9, a1);
  if ( LOBYTE(v9[0]) != 0 )
  {
    v4 = *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    v5 = *(_BYTE **)(v4 + 20);
    if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 24) )
    {
      if ( sub_13B854(v4) == -1 )
        sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
    }
    else
    {
      *v5 = a2;
      ++*(_DWORD *)(v4 + 20);
    }
  }
  v6 = v9[1] + *(_DWORD *)(*(_DWORD *)v9[1] - 12);
  if ( (*(_DWORD *)(v6 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v7 = *(_DWORD *)(v6 + 120);
    if ( v7 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 24))(v7) == -1 )
      sub_3914B0(
        (_DWORD *)(v9[1] + *(_DWORD *)(*(_DWORD *)v9[1] - 12)),
        *(_DWORD *)(v9[1] + *(_DWORD *)(*(_DWORD *)v9[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B401C
// address: 0x003B401C   size: 0x88 (136 bytes)
//======================================================================
int *__fastcall sub_3B401C(int *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r6
  int v8; // r0
  _DWORD v10[3]; // [sp+0h] [bp-Ch] BYREF

  sub_3B3DA4((int)v10, a1);
  if ( LOBYTE(v10[0]) != 0 )
  {
    v6 = *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    if ( a3 != (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 48))(v6, a2, a3) )
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v7 = v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12);
  if ( (*(_DWORD *)(v7 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v8 = *(_DWORD *)(v7 + 120);
    if ( v8 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 24))(v8) == -1 )
      sub_3914B0(
        (_DWORD *)(v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12)),
        *(_DWORD *)(v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B4104
// address: 0x003B4104   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B4104(unsigned __int8 *a1)
{
  return *a1;
}


//======================================================================
// sub_3B4108
// address: 0x003B4108   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall sub_3B4108(int *a1)
{
  _BYTE *v2; // r4
  char v3; // r1
  int *v4; // r0

  v2 = *(_BYTE **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  if ( v2 == nullptr )
    sub_3BCEE4();
  if ( v2[28] != 0 )
  {
    v3 = v2[39];
  }
  else
  {
    sub_3A7D48(v2);
    v3 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v2 + 24))(v2, 10);
  }
  v4 = sub_3B3F28(a1, v3);
  return sub_3B3A80(v4);
}


//======================================================================
// sub_3B4148
// address: 0x003B4148   size: 0xA (10 bytes)
//======================================================================
int *__fastcall sub_3B4148(int *a1)
{
  return sub_3B3F28(a1, 0);
}


//======================================================================
// sub_3B4154
// address: 0x003B4154   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B4154(_DWORD *a1)
{
  return sub_3B3A80(a1);
}


//======================================================================
// sub_3B415C
// address: 0x003B415C   size: 0x50 (80 bytes)
//======================================================================
_DWORD *__fastcall sub_3B415C(_DWORD *a1, char a2)
{
  char *v2; // r4
  _BYTE *v5; // r6
  char v6; // r0

  v2 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  if ( v2[117] == 0 )
  {
    v5 = *((_BYTE **)v2 + 31);
    if ( v5 == nullptr )
      sub_3BCEE4();
    if ( v5[28] != 0 )
    {
      v6 = v5[61];
    }
    else
    {
      sub_3A7D48(*((_BYTE **)v2 + 31));
      v6 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v5 + 24))(v5, 32);
    }
    v2[116] = v6;
    v2[117] = 1;
  }
  v2[116] = a2;
  return a1;
}


//======================================================================
// sub_3B41AC
// address: 0x003B41AC   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B41AC(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) |= a2;
  return result;
}


//======================================================================
// sub_3B41BC
// address: 0x003B41BC   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B41BC(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) &= ~a2;
  return result;
}


//======================================================================
// sub_3B41CC
// address: 0x003B41CC   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3B41CC(_DWORD *result, int a2)
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
// sub_3B41FC
// address: 0x003B41FC   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_3B41FC(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 4) = a2;
  return result;
}


//======================================================================
// sub_3B4208
// address: 0x003B4208   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_3B4208(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 8) = a2;
  return result;
}


//======================================================================
// sub_3B4214
// address: 0x003B4214   size: 0x2C8 (712 bytes)
//======================================================================
int *__fastcall sub_3B4214(int *a1, int a2, int a3)
{
  int v5; // r0
  char *v6; // r5
  int v7; // r10
  _BOOL4 v8; // r11
  char *v9; // r3
  char *v10; // r5
  int v11; // r0
  int v13; // r6
  _BYTE *v14; // r3
  _BYTE *v15; // r8
  int v16; // r0
  char *v17; // r2
  _DWORD *v18; // r3
  int v19; // r0
  _DWORD *v20; // r3
  int v21; // r6
  int v22; // r1
  int v23; // r9
  char v24; // r9
  char *v25; // r3
  char v26; // r8
  char v27; // r0
  char v29[4]; // [sp+8h] [bp+0h] BYREF
  _DWORD *v30; // [sp+Ch] [bp+4h]

  v5 = sub_3B3DA4((int)v29, a1);
  if ( v29[0] != 0 )
  {
    v6 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v7 = *((_DWORD *)v6 + 2);
    if ( v7 > a3 )
    {
      v8 = (*((_DWORD *)v6 + 3) & 0xB0) == 32;
      v9 = (char *)a1 + *(_DWORD *)(*a1 - 12);
      if ( (*((_DWORD *)v6 + 3) & 0xB0) == 0x20 )
        goto LABEL_4;
      v21 = v7 - a3;
      if ( v6[117] != 0 )
      {
        v24 = v6[116];
        v9 = (char *)a1 + *(_DWORD *)(*a1 - 12);
      }
      else
      {
        v22 = *((_DWORD *)v6 + 31);
        v23 = v22;
        if ( v22 == 0 )
          sub_3BCEE4(v5);
        if ( *(_BYTE *)(v22 + 28) != 0 )
        {
          v5 = *(unsigned __int8 *)(v22 + 61);
        }
        else
        {
          sub_3A7D48(*((_BYTE **)v6 + 31));
          v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v23 + 24))(v23, 32);
        }
        v6[116] = v5;
        v6[117] = 1;
        v24 = v5;
        v6 = (char *)a1 + *(_DWORD *)(*a1 - 12);
        v9 = v6;
      }
      if ( v21 <= 0 )
        goto LABEL_4;
      while ( 1 )
      {
        v5 = *((_DWORD *)v6 + 30);
        v25 = *(char **)(v5 + 20);
        if ( (unsigned int)v25 >= *(_DWORD *)(v5 + 24) )
        {
          v5 = sub_13B854(v5) + 1;
          if ( v5 == 0 )
          {
            v5 = (int)sub_3914B0(
                        (int *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
                        *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
            v6 = (char *)a1 + *(_DWORD *)(*a1 - 12);
            v9 = v6;
            goto LABEL_4;
          }
        }
        else
        {
          *v25 = v24;
          ++*(_DWORD *)(v5 + 20);
        }
        --v21;
        v6 = (char *)a1 + *(_DWORD *)(*a1 - 12);
        if ( v21 == 0 )
        {
          v9 = (char *)a1 + *(_DWORD *)(*a1 - 12);
LABEL_4:
          if ( *((_DWORD *)v6 + 5) != 0 )
          {
            if ( !v8 )
              goto LABEL_7;
          }
          else
          {
            v5 = (*(int (__fastcall **)(_DWORD, int, int))(**((_DWORD **)v6 + 30) + 48))(*((_DWORD *)v6 + 30), a2, a3);
            v20 = (_DWORD *)(*a1 - 12);
            if ( a3 != v5 )
            {
              v5 = (int)sub_3914B0((int *)((char *)a1 + *v20), *(int *)((char *)a1 + *v20 + 20) | 1);
              v20 = (_DWORD *)(*a1 - 12);
            }
            v6 = (char *)a1 + *v20;
            v9 = v6;
            if ( !v8 )
              goto LABEL_7;
          }
          if ( *((_DWORD *)v6 + 5) != 0 )
            goto LABEL_7;
          v13 = v7 - a3;
          if ( v6[117] != 0 )
          {
            v26 = v6[116];
          }
          else
          {
            v14 = *((_BYTE **)v6 + 31);
            v15 = v14;
            if ( v14 == nullptr )
              sub_3BCEE4(v5);
            if ( v14[28] != 0 )
            {
              v27 = *(_BYTE *)(*((_DWORD *)v6 + 31) + 61);
            }
            else
            {
              sub_3A7D48(v14);
              v27 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v15 + 24))(v15, 32);
            }
            v6[116] = v27;
            v6[117] = 1;
            v26 = v27;
            v6 = (char *)a1 + *(_DWORD *)(*a1 - 12);
            v9 = v6;
          }
          if ( v13 <= 0 )
            goto LABEL_7;
          while ( 1 )
          {
            v16 = *((_DWORD *)v6 + 30);
            v17 = *(char **)(v16 + 20);
            if ( (unsigned int)v17 >= *(_DWORD *)(v16 + 24) )
            {
              if ( sub_13B854(v16) == -1 )
              {
                sub_3914B0(
                  (int *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
                  *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
LABEL_32:
                v9 = (char *)a1 + *(_DWORD *)(*a1 - 12);
                goto LABEL_7;
              }
            }
            else
            {
              *v17 = v26;
              ++*(_DWORD *)(v16 + 20);
            }
            --v13;
            v18 = (_DWORD *)(*a1 - 12);
            if ( v13 == 0 )
              goto LABEL_29;
            v6 = (char *)a1 + *v18;
          }
        }
      }
    }
    v19 = (*(int (__fastcall **)(_DWORD, int, int))(**((_DWORD **)v6 + 30) + 48))(*((_DWORD *)v6 + 30), a2, a3);
    v18 = (_DWORD *)(*a1 - 12);
    if ( a3 != v19 )
    {
      sub_3914B0((int *)((char *)a1 + *v18), *(int *)((char *)a1 + *v18 + 20) | 1);
      goto LABEL_32;
    }
LABEL_29:
    v9 = (char *)a1 + *v18;
LABEL_7:
    *((_DWORD *)v9 + 2) = 0;
  }
  v10 = (char *)v30 + *(_DWORD *)(*v30 - 12);
  if ( (*((_DWORD *)v10 + 3) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v11 = *((_DWORD *)v10 + 30);
    if ( v11 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 24))(v11) == -1 )
      sub_3914B0(
        (_DWORD *)((char *)v30 + *(_DWORD *)(*v30 - 12)),
        *(_DWORD *)((char *)v30 + *(_DWORD *)(*v30 - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B44E4
// address: 0x003B44E4   size: 0x16 (22 bytes)
//======================================================================
int *__fastcall sub_3B44E4(int *a1, char a2)
{
  _BYTE v3[5]; // [sp+7h] [bp-5h] BYREF

  v3[0] = a2;
  return sub_3B4214(a1, (int)v3, 1);
}


//======================================================================
// sub_3B44FC
// address: 0x003B44FC   size: 0x16 (22 bytes)
//======================================================================
int *__fastcall sub_3B44FC(int *a1, char a2)
{
  _BYTE v3[5]; // [sp+7h] [bp-5h] BYREF

  v3[0] = a2;
  return sub_3B4214(a1, (int)v3, 1);
}


//======================================================================
// sub_3B4514
// address: 0x003B4514   size: 0x16 (22 bytes)
//======================================================================
int *__fastcall sub_3B4514(int *a1, char a2)
{
  _BYTE v3[5]; // [sp+7h] [bp-5h] BYREF

  v3[0] = a2;
  return sub_3B4214(a1, (int)v3, 1);
}


//======================================================================
// sub_3B452C
// address: 0x003B452C   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_3B452C(int *a1, char *a2)
{
  size_t v4; // r0

  if ( a2 != nullptr )
  {
    v4 = j_strlen(a2);
    sub_3B4214(a1, (int)a2, v4);
  }
  else
  {
    sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B455C
// address: 0x003B455C   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_3B455C(int *a1, char *a2)
{
  size_t v4; // r0

  if ( a2 != nullptr )
  {
    v4 = j_strlen(a2);
    sub_3B4214(a1, (int)a2, v4);
  }
  else
  {
    sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B458C
// address: 0x003B458C   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_3B458C(int *a1, char *a2)
{
  size_t v4; // r0

  if ( a2 != nullptr )
  {
    v4 = j_strlen(a2);
    sub_3B4214(a1, (int)a2, v4);
  }
  else
  {
    sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B45BC
// address: 0x003B45BC   size: 0x166 (358 bytes)
//======================================================================
int *__fastcall sub_3B45BC(int *a1, int a2)
{
  int v4; // r0
  char *v5; // r5
  int *v6; // r8
  int v7; // r7
  _BYTE *v8; // r3
  _BYTE *v9; // r9
  int v10; // r0
  int v11; // r3
  int v12; // r5
  int v13; // r0
  _DWORD v15[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v16[8]; // [sp+18h] [bp-14h] BYREF
  int v17; // [sp+20h] [bp-Ch]
  int v18; // [sp+24h] [bp-8h]

  v4 = sub_3B3DA4((int)v15, a1);
  if ( LOBYTE(v15[0]) != 0 )
  {
    v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v6 = *((int **)v5 + 32);
    if ( v6 == nullptr )
      sub_3BCEE4(v4);
    v7 = *((_DWORD *)v5 + 30);
    if ( v5[117] != 0 )
    {
      v10 = (unsigned __int8)v5[116];
    }
    else
    {
      v8 = *((_BYTE **)v5 + 31);
      v9 = v8;
      if ( v8 == nullptr )
        sub_3BCEE4(v4);
      if ( v8[28] != 0 )
      {
        v10 = *(unsigned __int8 *)(*((_DWORD *)v5 + 31) + 61);
      }
      else
      {
        sub_3A7D48(v8);
        v10 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v9 + 24))(v9, 32);
      }
      v5[116] = v10;
      v5[117] = 1;
    }
    LOBYTE(v18) = v7 == 0;
    v11 = *v6;
    v17 = v7;
    (*(void (__fastcall **)(_BYTE *, int *, int, int, char *, int, int))(v11 + 12))(v16, v6, v7, v18, v5, v10, a2);
    if ( v16[4] != 0 )
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v12 = v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12);
  if ( (*(_DWORD *)(v12 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v13 = *(_DWORD *)(v12 + 120);
    if ( v13 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 24))(v13) == -1 )
      sub_3914B0(
        (_DWORD *)(v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12)),
        *(_DWORD *)(v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B4728
// address: 0x003B4728   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B4728(int *a1, int a2)
{
  return sub_3B45BC(a1, a2);
}


//======================================================================
// sub_3B4730
// address: 0x003B4730   size: 0x28 (40 bytes)
//======================================================================
int *__fastcall sub_3B4730(int *a1, __int16 a2)
{
  return sub_3B45BC(a1, a2);
}


//======================================================================
// sub_3B4758
// address: 0x003B4758   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B4758(int *a1, int a2)
{
  return sub_3B45BC(a1, a2);
}


//======================================================================
// sub_3B4760
// address: 0x003B4760   size: 0x166 (358 bytes)
//======================================================================
int *__fastcall sub_3B4760(int *a1, int a2)
{
  int v4; // r0
  char *v5; // r5
  int *v6; // r8
  int v7; // r7
  _BYTE *v8; // r3
  _BYTE *v9; // r9
  int v10; // r0
  int v11; // r3
  int v12; // r5
  int v13; // r0
  _DWORD v15[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v16[8]; // [sp+18h] [bp-14h] BYREF
  int v17; // [sp+20h] [bp-Ch]
  int v18; // [sp+24h] [bp-8h]

  v4 = sub_3B3DA4((int)v15, a1);
  if ( LOBYTE(v15[0]) != 0 )
  {
    v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v6 = *((int **)v5 + 32);
    if ( v6 == nullptr )
      sub_3BCEE4(v4);
    v7 = *((_DWORD *)v5 + 30);
    if ( v5[117] != 0 )
    {
      v10 = (unsigned __int8)v5[116];
    }
    else
    {
      v8 = *((_BYTE **)v5 + 31);
      v9 = v8;
      if ( v8 == nullptr )
        sub_3BCEE4(v4);
      if ( v8[28] != 0 )
      {
        v10 = *(unsigned __int8 *)(*((_DWORD *)v5 + 31) + 61);
      }
      else
      {
        sub_3A7D48(v8);
        v10 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v9 + 24))(v9, 32);
      }
      v5[116] = v10;
      v5[117] = 1;
    }
    LOBYTE(v18) = v7 == 0;
    v11 = *v6;
    v17 = v7;
    (*(void (__fastcall **)(_BYTE *, int *, int, int, char *, int, int))(v11 + 16))(v16, v6, v7, v18, v5, v10, a2);
    if ( v16[4] != 0 )
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v12 = v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12);
  if ( (*(_DWORD *)(v12 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v13 = *(_DWORD *)(v12 + 120);
    if ( v13 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 24))(v13) == -1 )
      sub_3914B0(
        (_DWORD *)(v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12)),
        *(_DWORD *)(v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B48CC
// address: 0x003B48CC   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B48CC(int *a1, int a2)
{
  return sub_3B4760(a1, a2);
}


//======================================================================
// sub_3B48D4
// address: 0x003B48D4   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B48D4(int *a1, int a2)
{
  return sub_3B4760(a1, a2);
}


//======================================================================
// sub_3B48DC
// address: 0x003B48DC   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B48DC(int *a1, int a2)
{
  return sub_3B4760(a1, a2);
}


//======================================================================
// sub_3B48E4
// address: 0x003B48E4   size: 0x12E (302 bytes)
//======================================================================
int *__fastcall sub_3B48E4(int *a1, int a2)
{
  int v4; // r0
  char *v5; // r5
  int *v6; // r8
  int v7; // r7
  _BYTE *v8; // r3
  _BYTE *v9; // r9
  int v10; // r0
  int v11; // r3
  int v12; // r5
  int v13; // r0
  _DWORD v15[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v16[8]; // [sp+18h] [bp-14h] BYREF
  int v17; // [sp+20h] [bp-Ch]
  int v18; // [sp+24h] [bp-8h]

  v4 = sub_3B3DA4((int)v15, a1);
  if ( LOBYTE(v15[0]) != 0 )
  {
    v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v6 = *((int **)v5 + 32);
    if ( v6 == nullptr )
      sub_3BCEE4(v4);
    v7 = *((_DWORD *)v5 + 30);
    if ( v5[117] != 0 )
    {
      v10 = (unsigned __int8)v5[116];
    }
    else
    {
      v8 = *((_BYTE **)v5 + 31);
      v9 = v8;
      if ( v8 == nullptr )
        sub_3BCEE4(v4);
      if ( v8[28] != 0 )
      {
        v10 = *(unsigned __int8 *)(*((_DWORD *)v5 + 31) + 61);
      }
      else
      {
        sub_3A7D48(v8);
        v10 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v9 + 24))(v9, 32);
      }
      v5[116] = v10;
      v5[117] = 1;
    }
    LOBYTE(v18) = v7 == 0;
    v11 = *v6;
    v17 = v7;
    (*(void (__fastcall **)(_BYTE *, int *, int, int, char *, int, int))(v11 + 8))(v16, v6, v7, v18, v5, v10, a2);
    if ( v16[4] != 0 )
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v12 = v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12);
  if ( (*(_DWORD *)(v12 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v13 = *(_DWORD *)(v12 + 120);
    if ( v13 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 24))(v13) == -1 )
      sub_3914B0(
        (_DWORD *)(v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12)),
        *(_DWORD *)(v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B4A50
// address: 0x003B4A50   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B4A50(int *a1, int a2)
{
  return sub_3B48E4(a1, a2);
}


//======================================================================
// sub_3B4A58
// address: 0x003B4A58   size: 0x140 (320 bytes)
//======================================================================
int *__fastcall sub_3B4A58(int *a1, int a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r7
  int v9; // r10
  int v10; // r9
  _BYTE *v11; // r3
  _BYTE *v12; // r11
  int v13; // r0
  int v14; // r4
  int v15; // r0
  _DWORD v17[2]; // [sp+18h] [bp-1Ch] BYREF
  _BYTE v18[8]; // [sp+20h] [bp-14h] BYREF
  int v19; // [sp+28h] [bp-Ch]
  int v20; // [sp+2Ch] [bp-8h]

  v7 = sub_3B3DA4((int)v17, a1);
  if ( LOBYTE(v17[0]) != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v9 = *((_DWORD *)v8 + 32);
    if ( v9 == 0 )
      sub_3BCEE4(v7);
    v10 = *((_DWORD *)v8 + 30);
    if ( v8[117] != 0 )
    {
      v13 = (unsigned __int8)v8[116];
    }
    else
    {
      v11 = *((_BYTE **)v8 + 31);
      v12 = v11;
      if ( v11 == nullptr )
        sub_3BCEE4(v7);
      if ( v11[28] != 0 )
      {
        v13 = *(unsigned __int8 *)(*((_DWORD *)v8 + 31) + 61);
      }
      else
      {
        sub_3A7D48(v11);
        v13 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v12 + 24))(v12, 32);
      }
      v8[116] = v13;
      v8[117] = 1;
    }
    v19 = v10;
    LOBYTE(v20) = v10 == 0;
    (*(void (__fastcall **)(_BYTE *, int, int, int, char *, int, int, int))(*(_DWORD *)v9 + 20))(
      v18,
      v9,
      v10,
      v20,
      v8,
      v13,
      a3,
      a4);
    if ( v18[4] != 0 )
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v14 = v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12);
  if ( (*(_DWORD *)(v14 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v15 = *(_DWORD *)(v14 + 120);
    if ( v15 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 24))(v15) == -1 )
      sub_3914B0(
        (_DWORD *)(v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12)),
        *(_DWORD *)(v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B4BD8
// address: 0x003B4BD8   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B4BD8(int *a1, int a2, int a3, int a4)
{
  return sub_3B4A58(a1, a2, a3, a4);
}


//======================================================================
// sub_3B4BE0
// address: 0x003B4BE0   size: 0x178 (376 bytes)
//======================================================================
int *__fastcall sub_3B4BE0(int *a1, int a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r7
  int v9; // r10
  int v10; // r9
  _BYTE *v11; // r3
  _BYTE *v12; // r11
  int v13; // r0
  int v14; // r4
  int v15; // r0
  _DWORD v17[2]; // [sp+18h] [bp-1Ch] BYREF
  _BYTE v18[8]; // [sp+20h] [bp-14h] BYREF
  int v19; // [sp+28h] [bp-Ch]
  int v20; // [sp+2Ch] [bp-8h]

  v7 = sub_3B3DA4((int)v17, a1);
  if ( LOBYTE(v17[0]) != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v9 = *((_DWORD *)v8 + 32);
    if ( v9 == 0 )
      sub_3BCEE4(v7);
    v10 = *((_DWORD *)v8 + 30);
    if ( v8[117] != 0 )
    {
      v13 = (unsigned __int8)v8[116];
    }
    else
    {
      v11 = *((_BYTE **)v8 + 31);
      v12 = v11;
      if ( v11 == nullptr )
        sub_3BCEE4(v7);
      if ( v11[28] != 0 )
      {
        v13 = *(unsigned __int8 *)(*((_DWORD *)v8 + 31) + 61);
      }
      else
      {
        sub_3A7D48(v11);
        v13 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v12 + 24))(v12, 32);
      }
      v8[116] = v13;
      v8[117] = 1;
    }
    v19 = v10;
    LOBYTE(v20) = v10 == 0;
    (*(void (__fastcall **)(_BYTE *, int, int, int, char *, int, int, int))(*(_DWORD *)v9 + 24))(
      v18,
      v9,
      v10,
      v20,
      v8,
      v13,
      a3,
      a4);
    if ( v18[4] != 0 )
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v14 = v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12);
  if ( (*(_DWORD *)(v14 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v15 = *(_DWORD *)(v14 + 120);
    if ( v15 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 24))(v15) == -1 )
      sub_3914B0(
        (_DWORD *)(v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12)),
        *(_DWORD *)(v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B4D60
// address: 0x003B4D60   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B4D60(int *a1, int a2, int a3, int a4)
{
  return sub_3B4BE0(a1, a2, a3, a4);
}


//======================================================================
// sub_3B4D68
// address: 0x003B4D68   size: 0x140 (320 bytes)
//======================================================================
int *__fastcall sub_3B4D68(int *a1, int a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r7
  int v9; // r10
  int v10; // r9
  _BYTE *v11; // r3
  _BYTE *v12; // r11
  int v13; // r0
  int v14; // r4
  int v15; // r0
  _DWORD v17[2]; // [sp+18h] [bp-1Ch] BYREF
  _BYTE v18[8]; // [sp+20h] [bp-14h] BYREF
  int v19; // [sp+28h] [bp-Ch]
  int v20; // [sp+2Ch] [bp-8h]

  v7 = sub_3B3DA4((int)v17, a1);
  if ( LOBYTE(v17[0]) != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v9 = *((_DWORD *)v8 + 32);
    if ( v9 == 0 )
      sub_3BCEE4(v7);
    v10 = *((_DWORD *)v8 + 30);
    if ( v8[117] != 0 )
    {
      v13 = (unsigned __int8)v8[116];
    }
    else
    {
      v11 = *((_BYTE **)v8 + 31);
      v12 = v11;
      if ( v11 == nullptr )
        sub_3BCEE4(v7);
      if ( v11[28] != 0 )
      {
        v13 = *(unsigned __int8 *)(*((_DWORD *)v8 + 31) + 61);
      }
      else
      {
        sub_3A7D48(v11);
        v13 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v12 + 24))(v12, 32);
      }
      v8[116] = v13;
      v8[117] = 1;
    }
    v19 = v10;
    LOBYTE(v20) = v10 == 0;
    (*(void (__fastcall **)(_BYTE *, int, int, int, char *, int, int, int))(*(_DWORD *)v9 + 28))(
      v18,
      v9,
      v10,
      v20,
      v8,
      v13,
      a3,
      a4);
    if ( v18[4] != 0 )
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v14 = v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12);
  if ( (*(_DWORD *)(v14 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v15 = *(_DWORD *)(v14 + 120);
    if ( v15 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 24))(v15) == -1 )
      sub_3914B0(
        (_DWORD *)(v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12)),
        *(_DWORD *)(v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B4EE8
// address: 0x003B4EE8   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B4EE8(int *a1, int a2, int a3, int a4)
{
  return sub_3B4D68(a1, a2, a3, a4);
}


//======================================================================
// sub_3B4EF0
// address: 0x003B4EF0   size: 0x16 (22 bytes)
//======================================================================
int *__fastcall sub_3B4EF0(int *a1, float a2)
{
  return sub_3B4D68(
           a1,
           HIDWORD(COERCE_UNSIGNED_INT64(a2)),
           COERCE_UNSIGNED_INT64(a2),
           HIDWORD(COERCE_UNSIGNED_INT64(a2)));
}


//======================================================================
// sub_3B4F08
// address: 0x003B4F08   size: 0x140 (320 bytes)
//======================================================================
int *__fastcall sub_3B4F08(int *a1, int a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r7
  int v9; // r10
  int v10; // r9
  _BYTE *v11; // r3
  _BYTE *v12; // r11
  int v13; // r0
  int v14; // r4
  int v15; // r0
  _DWORD v17[2]; // [sp+18h] [bp-1Ch] BYREF
  _BYTE v18[8]; // [sp+20h] [bp-14h] BYREF
  int v19; // [sp+28h] [bp-Ch]
  int v20; // [sp+2Ch] [bp-8h]

  v7 = sub_3B3DA4((int)v17, a1);
  if ( LOBYTE(v17[0]) != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v9 = *((_DWORD *)v8 + 32);
    if ( v9 == 0 )
      sub_3BCEE4(v7);
    v10 = *((_DWORD *)v8 + 30);
    if ( v8[117] != 0 )
    {
      v13 = (unsigned __int8)v8[116];
    }
    else
    {
      v11 = *((_BYTE **)v8 + 31);
      v12 = v11;
      if ( v11 == nullptr )
        sub_3BCEE4(v7);
      if ( v11[28] != 0 )
      {
        v13 = *(unsigned __int8 *)(*((_DWORD *)v8 + 31) + 61);
      }
      else
      {
        sub_3A7D48(v11);
        v13 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v12 + 24))(v12, 32);
      }
      v8[116] = v13;
      v8[117] = 1;
    }
    v19 = v10;
    LOBYTE(v20) = v10 == 0;
    (*(void (__fastcall **)(_BYTE *, int, int, int, char *, int, int, int))(*(_DWORD *)v9 + 32))(
      v18,
      v9,
      v10,
      v20,
      v8,
      v13,
      a3,
      a4);
    if ( v18[4] != 0 )
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v14 = v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12);
  if ( (*(_DWORD *)(v14 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v15 = *(_DWORD *)(v14 + 120);
    if ( v15 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 24))(v15) == -1 )
      sub_3914B0(
        (_DWORD *)(v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12)),
        *(_DWORD *)(v17[1] + *(_DWORD *)(*(_DWORD *)v17[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B5088
// address: 0x003B5088   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B5088(int *a1, int a2, int a3, int a4)
{
  return sub_3B4F08(a1, a2, a3, a4);
}


//======================================================================
// sub_3B5090
// address: 0x003B5090   size: 0x12E (302 bytes)
//======================================================================
int *__fastcall sub_3B5090(int *a1, int a2)
{
  int v4; // r0
  char *v5; // r5
  int *v6; // r8
  int v7; // r7
  _BYTE *v8; // r3
  _BYTE *v9; // r9
  int v10; // r0
  int v11; // r3
  int v12; // r5
  int v13; // r0
  _DWORD v15[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v16[8]; // [sp+18h] [bp-14h] BYREF
  int v17; // [sp+20h] [bp-Ch]
  int v18; // [sp+24h] [bp-8h]

  v4 = sub_3B3DA4((int)v15, a1);
  if ( LOBYTE(v15[0]) != 0 )
  {
    v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v6 = *((int **)v5 + 32);
    if ( v6 == nullptr )
      sub_3BCEE4(v4);
    v7 = *((_DWORD *)v5 + 30);
    if ( v5[117] != 0 )
    {
      v10 = (unsigned __int8)v5[116];
    }
    else
    {
      v8 = *((_BYTE **)v5 + 31);
      v9 = v8;
      if ( v8 == nullptr )
        sub_3BCEE4(v4);
      if ( v8[28] != 0 )
      {
        v10 = *(unsigned __int8 *)(*((_DWORD *)v5 + 31) + 61);
      }
      else
      {
        sub_3A7D48(v8);
        v10 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v9 + 24))(v9, 32);
      }
      v5[116] = v10;
      v5[117] = 1;
    }
    LOBYTE(v18) = v7 == 0;
    v11 = *v6;
    v17 = v7;
    (*(void (__fastcall **)(_BYTE *, int *, int, int, char *, int, int))(v11 + 36))(v16, v6, v7, v18, v5, v10, a2);
    if ( v16[4] != 0 )
      sub_3914B0((int *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(int *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v12 = v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12);
  if ( (*(_DWORD *)(v12 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v13 = *(_DWORD *)(v12 + 120);
    if ( v13 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 24))(v13) == -1 )
      sub_3914B0(
        (_DWORD *)(v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12)),
        *(_DWORD *)(v15[1] + *(_DWORD *)(*(_DWORD *)v15[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B51FC
// address: 0x003B51FC   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B51FC(int *a1, int a2)
{
  return sub_3B5090(a1, a2);
}


//======================================================================
// sub_3B5204
// address: 0x003B5204   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall sub_3B5204(int *a1, int *a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r0

  v4 = *a2;
  *a1 = *a2;
  v5 = (int *)((char *)a1 + *(_DWORD *)(v4 - 12));
  *v5 = a2[1];
  sub_391B70((int)v5, a3);
  return a1;
}


//======================================================================
// sub_3B5220
// address: 0x003B5220   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3B5220(int a1, int a2)
{
  int v2; // r5

  v2 = a1 + 4;
  sub_392DEC((_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)a1 = &off_465924;
  *(_DWORD *)(a1 + 4) = &off_465938;
  sub_391B70(v2, a2);
  return a1;
}


//======================================================================
// sub_3B5280
// address: 0x003B5280   size: 0xE (14 bytes)
//======================================================================
int *__fastcall sub_3B5280(int *result, int *a2)
{
  int v2; // r3

  v2 = *a2;
  *result = *a2;
  *(int *)((char *)result + *(_DWORD *)(v2 - 12)) = a2[1];
  return result;
}


//======================================================================
// sub_3B5290
// address: 0x003B5290   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3B5290(int a1, int (*a2)(void))
{
  return a2();
}


//======================================================================
// sub_3B5298
// address: 0x003B5298   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall sub_3B5298(char *a1, void (__fastcall *a2)(char *))
{
  a2(&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)]);
  return a1;
}


//======================================================================
// sub_3B52AC
// address: 0x003B52AC   size: 0x12 (18 bytes)
//======================================================================
char *__fastcall sub_3B52AC(char *a1, void (__fastcall *a2)(char *))
{
  a2(&a1[*(_DWORD *)(*(_DWORD *)a1 - 12)]);
  return a1;
}


//======================================================================
// sub_3B52C0
// address: 0x003B52C0   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3B52C0(_DWORD *a1, int a2, _DWORD *a3)
{
  int v5; // r0
  _DWORD *result; // r0

  v5 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)v5 + 48))(v5);
  if ( a3 != result )
    return sub_39194C(
             (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
             *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  return result;
}


//======================================================================
// sub_3B52F0
// address: 0x003B52F0   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3B52F0(_DWORD *a1)
{
  int v2; // r0

  v2 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
  if ( v2 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 24))(v2) == -1 )
    sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  return a1;
}


//======================================================================
// sub_3B5428
// address: 0x003B5428   size: 0x72 (114 bytes)
//======================================================================
// local variable allocation has failed, the output may be wrong!
_DWORD *__fastcall sub_3B5428(_DWORD *a1)
{
  char *v1; // r3
  int v4; // r5
  _DWORD v5[4]; // [sp+10h] [bp-24h] BYREF
  __int128 v6; // [sp+20h] [bp-14h]
  __int128 varg_r2; // [sp+48h] [bp+14h] OVERLAPPED

  v1 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  if ( (*((_DWORD *)v1 + 5) & 5) == 0 )
  {
    v4 = *((_DWORD *)v1 + 31);
    v6 = varg_r2;
    (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD))(*(_DWORD *)v4 + 20))(v5, v4, v6, DWORD1(v6));
    if ( v5[0] == -1 && v5[1] == -1 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  }
  return a1;
}


//======================================================================
// sub_3B54F4
// address: 0x003B54F4   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall sub_3B54F4(_DWORD *a1)
{
  char *v2; // r1
  _DWORD v4[5]; // [sp+8h] [bp-14h] BYREF

  v2 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  if ( (*((_DWORD *)v2 + 5) & 5) == 0 )
  {
    (*(void (__fastcall **)(_DWORD *))(**((_DWORD **)v2 + 31) + 16))(v4);
    if ( v4[0] == -1 && v4[1] == -1 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  }
  return a1;
}


//======================================================================
// sub_3B559C
// address: 0x003B559C   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall sub_3B559C(int *a1, int *a2)
{
  int v2; // r3
  _DWORD *v4; // r0

  v2 = *a2;
  *a1 = *a2;
  v4 = (int *)((char *)a1 + *(_DWORD *)(v2 - 12));
  *v4 = a2[1];
  sub_391B70((int)v4, 0);
  return a1;
}


//======================================================================
// sub_3B55B8
// address: 0x003B55B8   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_3B55B8(int a1)
{
  int v1; // r5

  v1 = a1 + 4;
  sub_392DEC((_DWORD *)(a1 + 4));
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_BYTE *)(a1 + 124) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)a1 = &off_465924;
  *(_DWORD *)(a1 + 4) = &off_465938;
  sub_391B70(v1, 0);
  return a1;
}


//======================================================================
// sub_3B5614
// address: 0x003B5614   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_3B5614(int a1, _DWORD *a2)
{
  _DWORD *v4; // r3
  _DWORD *v5; // r0
  int v6; // r2

  *(_BYTE *)a1 = 0;
  v4 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
  v5 = (_DWORD *)v4[28];
  *(_DWORD *)(a1 + 4) = a2;
  if ( v5 != nullptr )
  {
    v6 = v4[5];
    if ( v6 != 0 )
    {
LABEL_7:
      sub_39194C(v4, v6 | 4);
      return a1;
    }
    sub_3B52F0(v5);
    v4 = (_DWORD *)((char *)a2 + *(_DWORD *)(*a2 - 12));
  }
  v6 = v4[5];
  if ( v6 != 0 )
    goto LABEL_7;
  *(_BYTE *)a1 = 1;
  return a1;
}


//======================================================================
// sub_3B565C
// address: 0x003B565C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_3B565C(int a1)
{
  int v2; // r5
  int v3; // r0
  _DWORD *v5; // r0

  v2 = *(_DWORD *)(a1 + 4) + *(_DWORD *)(**(_DWORD **)(a1 + 4) - 12);
  if ( (*(_DWORD *)(v2 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v3 = *(_DWORD *)(v2 + 124);
    if ( v3 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3) == -1 )
    {
      v5 = (_DWORD *)(*(_DWORD *)(a1 + 4) + *(_DWORD *)(**(_DWORD **)(a1 + 4) - 12));
      sub_39194C(v5, v5[5] | 1);
    }
  }
  return a1;
}


//======================================================================
// sub_3B56A4
// address: 0x003B56A4   size: 0x92 (146 bytes)
//======================================================================
_DWORD *__fastcall sub_3B56A4(_DWORD *a1, _DWORD *a2)
{
  int v4; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r0
  char v9; // [sp+7h] [bp-9h] BYREF
  _DWORD v10[2]; // [sp+8h] [bp-8h] BYREF

  sub_3B5614((int)v10, a1);
  if ( LOBYTE(v10[0]) == 0 )
  {
    if ( a2 != nullptr )
      goto LABEL_5;
  }
  else if ( a2 != nullptr )
  {
    v4 = sub_3A5B10(a2, *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124), &v9);
    v5 = 4;
    if ( v4 == 0 )
LABEL_4:
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        v5 | *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20));
LABEL_5:
    v6 = v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12);
    if ( (*(_DWORD *)(v6 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
    {
      v7 = *(_DWORD *)(v6 + 124);
      if ( v7 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 24))(v7) == -1 )
        sub_39194C(
          (_DWORD *)(v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12)),
          *(_DWORD *)(v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12) + 20) | 1);
    }
    return a1;
  }
  v5 = 1;
  goto LABEL_4;
}


//======================================================================
// sub_3B5798
// address: 0x003B5798   size: 0x94 (148 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5798(_DWORD *a1, int a2)
{
  int v4; // r0
  int *v5; // r2
  int v6; // r6
  int v7; // r0
  _DWORD v9[2]; // [sp+0h] [bp-8h] BYREF

  sub_3B5614((int)v9, a1);
  if ( LOBYTE(v9[0]) != 0 )
  {
    v4 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v5 = *(int **)(v4 + 20);
    if ( (unsigned int)v5 >= *(_DWORD *)(v4 + 24) )
    {
      a2 = sub_13B860(v4);
    }
    else
    {
      *v5 = a2;
      *(_DWORD *)(v4 + 20) = v5 + 1;
    }
    if ( a2 == -1 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v6 = v9[1] + *(_DWORD *)(*(_DWORD *)v9[1] - 12);
  if ( (*(_DWORD *)(v6 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v7 = *(_DWORD *)(v6 + 124);
    if ( v7 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 24))(v7) == -1 )
      sub_39194C(
        (_DWORD *)(v9[1] + *(_DWORD *)(*(_DWORD *)v9[1] - 12)),
        *(_DWORD *)(v9[1] + *(_DWORD *)(*(_DWORD *)v9[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B588C
// address: 0x003B588C   size: 0x88 (136 bytes)
//======================================================================
_DWORD *__fastcall sub_3B588C(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r6
  int v8; // r0
  _DWORD v10[3]; // [sp+0h] [bp-Ch] BYREF

  sub_3B5614((int)v10, a1);
  if ( LOBYTE(v10[0]) != 0 )
  {
    v6 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    if ( a3 != (*(int (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 48))(v6, a2, a3) )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v7 = v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12);
  if ( (*(_DWORD *)(v7 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v8 = *(_DWORD *)(v7 + 124);
    if ( v8 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 24))(v8) == -1 )
      sub_39194C(
        (_DWORD *)(v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12)),
        *(_DWORD *)(v10[1] + *(_DWORD *)(*(_DWORD *)v10[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B5974
// address: 0x003B5974   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B5974(unsigned __int8 *a1)
{
  return *a1;
}


//======================================================================
// sub_3B5978
// address: 0x003B5978   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5978(_DWORD *a1)
{
  int v2; // r0
  int v3; // r0
  _DWORD *v4; // r0

  v2 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 128);
  if ( v2 == 0 )
    sub_3BCEE4(0);
  v3 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v2 + 40))(v2, 10);
  v4 = sub_3B5798(a1, v3);
  return sub_3B52F0(v4);
}


//======================================================================
// sub_3B59A8
// address: 0x003B59A8   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3B59A8(_DWORD *a1)
{
  return sub_3B5798(a1, 0);
}


//======================================================================
// sub_3B59B4
// address: 0x003B59B4   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B59B4(_DWORD *a1)
{
  return sub_3B52F0(a1);
}


//======================================================================
// sub_3B59BC
// address: 0x003B59BC   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_3B59BC(_DWORD *a1, int a2)
{
  char *v3; // r4
  int v6; // r0

  v3 = (char *)a1 + *(_DWORD *)(*a1 - 12);
  if ( v3[120] == 0 )
  {
    v6 = *((_DWORD *)v3 + 32);
    if ( v6 == 0 )
      sub_3BCEE4(0);
    *((_DWORD *)v3 + 29) = (*(int (__fastcall **)(int, int))(*(_DWORD *)v6 + 40))(v6, 32);
    v3[120] = 1;
  }
  *((_DWORD *)v3 + 29) = a2;
  return a1;
}


//======================================================================
// sub_3B59F4
// address: 0x003B59F4   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B59F4(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) |= a2;
  return result;
}


//======================================================================
// sub_3B5A04
// address: 0x003B5A04   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5A04(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 12) &= ~a2;
  return result;
}


//======================================================================
// sub_3B5A14
// address: 0x003B5A14   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5A14(_DWORD *result, int a2)
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
// sub_3B5A44
// address: 0x003B5A44   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5A44(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 4) = a2;
  return result;
}


//======================================================================
// sub_3B5A50
// address: 0x003B5A50   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5A50(_DWORD *result, int a2)
{
  *(_DWORD *)((char *)result + *(_DWORD *)(*result - 12) + 8) = a2;
  return result;
}


//======================================================================
// sub_3B5A5C
// address: 0x003B5A5C   size: 0x27E (638 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5A5C(_DWORD *a1, int a2, int a3)
{
  char *v5; // r5
  int v6; // r10
  _BOOL4 v7; // r11
  char *v8; // r3
  char *v9; // r5
  int v10; // r0
  int v12; // r6
  int v13; // r8
  _DWORD *v14; // r3
  int v15; // r0
  int *v16; // r2
  int v17; // r0
  int v18; // r0
  _DWORD *v19; // r3
  int v20; // r6
  int v21; // r8
  int v22; // r0
  int *v23; // r3
  int v24; // r0
  int v25; // r0
  int v26; // r0
  int v27; // r0
  int v28; // r0
  int v29; // r0
  char v31[4]; // [sp+8h] [bp+0h] BYREF
  _DWORD *v32; // [sp+Ch] [bp+4h]

  sub_3B5614((int)v31, a1);
  if ( v31[0] != 0 )
  {
    v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v6 = *((_DWORD *)v5 + 2);
    if ( v6 <= a3 )
    {
      v17 = (*(int (__fastcall **)(_DWORD, int, int))(**((_DWORD **)v5 + 31) + 48))(*((_DWORD *)v5 + 31), a2, a3);
      v14 = (_DWORD *)(*a1 - 12);
      if ( a3 == v17 )
      {
LABEL_28:
        v8 = (char *)a1 + *v14;
        goto LABEL_6;
      }
      sub_39194C((_DWORD *)((char *)a1 + *v14), *(_DWORD *)((char *)a1 + *v14 + 20) | 1);
    }
    else
    {
      v7 = (*((_DWORD *)v5 + 3) & 0xB0) == 32;
      v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
      if ( (*((_DWORD *)v5 + 3) & 0xB0) != 0x20 )
      {
        v20 = v6 - a3;
        if ( v5[120] != 0 )
        {
          v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
          v21 = *((_DWORD *)v5 + 29);
        }
        else
        {
          v25 = *((_DWORD *)v5 + 32);
          if ( v25 == 0 )
            sub_3BCEE4(0);
          v26 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v25 + 40))(v25, 32);
          *((_DWORD *)v5 + 29) = v26;
          v5[120] = 1;
          v21 = v26;
          v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
          v8 = v5;
        }
        if ( v20 > 0 )
        {
          do
          {
            v22 = *((_DWORD *)v5 + 31);
            v23 = *(int **)(v22 + 20);
            if ( (unsigned int)v23 >= *(_DWORD *)(v22 + 24) )
            {
              v24 = sub_13B860(v22);
            }
            else
            {
              *v23 = v21;
              *(_DWORD *)(v22 + 20) = v23 + 1;
              v24 = v21;
            }
            if ( v24 == -1 )
            {
              sub_39194C(
                (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
                *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
              v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
              v8 = v5;
              goto LABEL_4;
            }
            --v20;
            v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
          }
          while ( v20 != 0 );
          v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
        }
      }
LABEL_4:
      if ( *((_DWORD *)v5 + 5) != 0 )
      {
        if ( !v7 )
        {
LABEL_6:
          *((_DWORD *)v8 + 2) = 0;
          goto LABEL_7;
        }
      }
      else
      {
        v18 = (*(int (__fastcall **)(_DWORD, int, int))(**((_DWORD **)v5 + 31) + 48))(*((_DWORD *)v5 + 31), a2, a3);
        v19 = (_DWORD *)(*a1 - 12);
        if ( a3 != v18 )
        {
          sub_39194C((_DWORD *)((char *)a1 + *v19), *(_DWORD *)((char *)a1 + *v19 + 20) | 1);
          v19 = (_DWORD *)(*a1 - 12);
        }
        v5 = (char *)a1 + *v19;
        v8 = v5;
        if ( !v7 )
          goto LABEL_6;
      }
      if ( *((_DWORD *)v5 + 5) != 0 )
        goto LABEL_6;
      v12 = v6 - a3;
      if ( v5[120] != 0 )
      {
        v13 = *((_DWORD *)v5 + 29);
      }
      else
      {
        v27 = *((_DWORD *)v5 + 32);
        if ( v27 == 0 )
          sub_3BCEE4(0);
        v28 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v27 + 40))(v27, 32);
        *((_DWORD *)v5 + 29) = v28;
        v5[120] = 1;
        v13 = v28;
        v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
        v8 = v5;
      }
      if ( v12 <= 0 )
        goto LABEL_6;
      while ( 1 )
      {
        v15 = *((_DWORD *)v5 + 31);
        v16 = *(int **)(v15 + 20);
        if ( (unsigned int)v16 < *(_DWORD *)(v15 + 24) )
        {
          *v16 = v13;
          *(_DWORD *)(v15 + 20) = v16 + 1;
          v29 = v13;
        }
        else
        {
          v29 = sub_13B860(v15);
        }
        if ( v29 == -1 )
          break;
        --v12;
        v14 = (_DWORD *)(*a1 - 12);
        if ( v12 == 0 )
          goto LABEL_28;
        v5 = (char *)a1 + *v14;
      }
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
    }
    v14 = (_DWORD *)(*a1 - 12);
    goto LABEL_28;
  }
LABEL_7:
  v9 = (char *)v32 + *(_DWORD *)(*v32 - 12);
  if ( (*((_DWORD *)v9 + 3) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v10 = *((_DWORD *)v9 + 31);
    if ( v10 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 24))(v10) == -1 )
      sub_39194C(
        (_DWORD *)((char *)v32 + *(_DWORD *)(*v32 - 12)),
        *(_DWORD *)((char *)v32 + *(_DWORD *)(*v32 - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B5CE4
// address: 0x003B5CE4   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5CE4(_DWORD *a1, int a2)
{
  int v3; // [sp+4h] [bp-8h] BYREF

  v3 = a2;
  return sub_3B5A5C(a1, (int)&v3, 1);
}


//======================================================================
// sub_3B5CF8
// address: 0x003B5CF8   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5CF8(_DWORD *a1)
{
  int v2; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  v2 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 128);
  if ( v2 == 0 )
    sub_3BCEE4(0);
  v4 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 40))(v2);
  return sub_3B5A5C(a1, (int)&v4, 1);
}


//======================================================================
// sub_3B5D28
// address: 0x003B5D28   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5D28(_DWORD *a1, wchar_t *s)
{
  size_t v4; // r0

  if ( s != nullptr )
  {
    v4 = j_wcslen(s);
    sub_3B5A5C(a1, (int)s, v4);
  }
  else
  {
    sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B5D58
// address: 0x003B5D58   size: 0xB2 (178 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5D58(_DWORD *a1, char *a2)
{
  size_t v4; // r0
  int v5; // r10
  size_t v6; // r0
  _DWORD *v7; // r9
  int v8; // r1
  int v9; // r0
  char *v10; // r4
  char *v11; // r8
  _DWORD *v12; // r5
  _DWORD *v13; // r7

  if ( a2 != nullptr )
  {
    v4 = j_strlen(a2);
    v5 = v4;
    if ( v4 <= 0x1FC00000 )
      v6 = 4 * v4;
    else
      v6 = -1;
    v7 = operator new[](v6);
    if ( v5 != 0 )
    {
      v8 = (unsigned __int8)*a2;
      v9 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 128);
      if ( v9 == 0 )
LABEL_14:
        sub_3BCEE4(v9);
      v10 = a2 + 1;
      v11 = &a2[v5];
      v12 = v7 + 1;
      v13 = v7;
      while ( 1 )
      {
        *v13 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v9 + 40))(v9, v8);
        if ( v10 == v11 )
          break;
        v13 = v12;
        v8 = (unsigned __int8)*v10;
        v9 = *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 128);
        ++v12;
        ++v10;
        if ( v9 == 0 )
          goto LABEL_14;
      }
    }
    sub_3B5A5C(a1, (int)v7, v5);
    if ( v7 != nullptr )
      operator delete[](v7);
  }
  else
  {
    sub_39194C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)), *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B5E78
// address: 0x003B5E78   size: 0x10E (270 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5E78(_DWORD *a1, int a2)
{
  int v4; // r0
  char *v5; // r5
  int *v6; // r8
  int v7; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r0
  int v13; // r0
  _DWORD v14[2]; // [sp+10h] [bp-18h] BYREF
  _BYTE v15[8]; // [sp+18h] [bp-10h] BYREF
  int v16; // [sp+20h] [bp-8h]
  int v17; // [sp+24h] [bp-4h]

  v4 = sub_3B5614((int)v14, a1);
  if ( LOBYTE(v14[0]) != 0 )
  {
    v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v6 = *((int **)v5 + 33);
    if ( v6 == nullptr )
      sub_3BCEE4(v4);
    v7 = *((_DWORD *)v5 + 31);
    if ( v5[120] != 0 )
    {
      v8 = *((_DWORD *)v5 + 29);
    }
    else
    {
      v13 = *((_DWORD *)v5 + 32);
      if ( v13 == 0 )
        sub_3BCEE4(0);
      v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 40))(v13, 32);
      *((_DWORD *)v5 + 29) = v8;
      v5[120] = 1;
    }
    LOBYTE(v17) = v7 == 0;
    v9 = *v6;
    v16 = v7;
    (*(void (__fastcall **)(_BYTE *, int *, int, int, char *, int, int))(v9 + 12))(v15, v6, v7, v17, v5, v8, a2);
    if ( v15[4] != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v10 = v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12);
  if ( (*(_DWORD *)(v10 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v11 = *(_DWORD *)(v10 + 124);
    if ( v11 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 24))(v11) == -1 )
      sub_39194C(
        (_DWORD *)(v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12)),
        *(_DWORD *)(v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B5FC4
// address: 0x003B5FC4   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5FC4(_DWORD *a1, int a2)
{
  return sub_3B5E78(a1, a2);
}


//======================================================================
// sub_3B5FCC
// address: 0x003B5FCC   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5FCC(_DWORD *a1, __int16 a2)
{
  return sub_3B5E78(a1, a2);
}


//======================================================================
// sub_3B5FF4
// address: 0x003B5FF4   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5FF4(_DWORD *a1, int a2)
{
  return sub_3B5E78(a1, a2);
}


//======================================================================
// sub_3B5FFC
// address: 0x003B5FFC   size: 0x10E (270 bytes)
//======================================================================
_DWORD *__fastcall sub_3B5FFC(_DWORD *a1, int a2)
{
  int v4; // r0
  char *v5; // r5
  int *v6; // r8
  int v7; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r0
  int v13; // r0
  _DWORD v14[2]; // [sp+10h] [bp-18h] BYREF
  _BYTE v15[8]; // [sp+18h] [bp-10h] BYREF
  int v16; // [sp+20h] [bp-8h]
  int v17; // [sp+24h] [bp-4h]

  v4 = sub_3B5614((int)v14, a1);
  if ( LOBYTE(v14[0]) != 0 )
  {
    v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v6 = *((int **)v5 + 33);
    if ( v6 == nullptr )
      sub_3BCEE4(v4);
    v7 = *((_DWORD *)v5 + 31);
    if ( v5[120] != 0 )
    {
      v8 = *((_DWORD *)v5 + 29);
    }
    else
    {
      v13 = *((_DWORD *)v5 + 32);
      if ( v13 == 0 )
        sub_3BCEE4(0);
      v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 40))(v13, 32);
      *((_DWORD *)v5 + 29) = v8;
      v5[120] = 1;
    }
    LOBYTE(v17) = v7 == 0;
    v9 = *v6;
    v16 = v7;
    (*(void (__fastcall **)(_BYTE *, int *, int, int, char *, int, int))(v9 + 16))(v15, v6, v7, v17, v5, v8, a2);
    if ( v15[4] != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v10 = v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12);
  if ( (*(_DWORD *)(v10 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v11 = *(_DWORD *)(v10 + 124);
    if ( v11 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 24))(v11) == -1 )
      sub_39194C(
        (_DWORD *)(v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12)),
        *(_DWORD *)(v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B6148
// address: 0x003B6148   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6148(_DWORD *a1, int a2)
{
  return sub_3B5FFC(a1, a2);
}


//======================================================================
// sub_3B6150
// address: 0x003B6150   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6150(_DWORD *a1, int a2)
{
  return sub_3B5FFC(a1, a2);
}


//======================================================================
// sub_3B6158
// address: 0x003B6158   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6158(_DWORD *a1, int a2)
{
  return sub_3B5FFC(a1, a2);
}


//======================================================================
// sub_3B6160
// address: 0x003B6160   size: 0x10E (270 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6160(_DWORD *a1, int a2)
{
  int v4; // r0
  char *v5; // r5
  int *v6; // r8
  int v7; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r0
  int v13; // r0
  _DWORD v14[2]; // [sp+10h] [bp-18h] BYREF
  _BYTE v15[8]; // [sp+18h] [bp-10h] BYREF
  int v16; // [sp+20h] [bp-8h]
  int v17; // [sp+24h] [bp-4h]

  v4 = sub_3B5614((int)v14, a1);
  if ( LOBYTE(v14[0]) != 0 )
  {
    v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v6 = *((int **)v5 + 33);
    if ( v6 == nullptr )
      sub_3BCEE4(v4);
    v7 = *((_DWORD *)v5 + 31);
    if ( v5[120] != 0 )
    {
      v8 = *((_DWORD *)v5 + 29);
    }
    else
    {
      v13 = *((_DWORD *)v5 + 32);
      if ( v13 == 0 )
        sub_3BCEE4(0);
      v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 40))(v13, 32);
      *((_DWORD *)v5 + 29) = v8;
      v5[120] = 1;
    }
    LOBYTE(v17) = v7 == 0;
    v9 = *v6;
    v16 = v7;
    (*(void (__fastcall **)(_BYTE *, int *, int, int, char *, int, int))(v9 + 8))(v15, v6, v7, v17, v5, v8, a2);
    if ( v15[4] != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v10 = v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12);
  if ( (*(_DWORD *)(v10 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v11 = *(_DWORD *)(v10 + 124);
    if ( v11 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 24))(v11) == -1 )
      sub_39194C(
        (_DWORD *)(v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12)),
        *(_DWORD *)(v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B62AC
// address: 0x003B62AC   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B62AC(_DWORD *a1, int a2)
{
  return sub_3B6160(a1, a2);
}


//======================================================================
// sub_3B62B4
// address: 0x003B62B4   size: 0x122 (290 bytes)
//======================================================================
_DWORD *__fastcall sub_3B62B4(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r7
  int v9; // r10
  int v10; // r9
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int v15; // r0
  _DWORD v16[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v17[8]; // [sp+18h] [bp-14h] BYREF
  int v18; // [sp+20h] [bp-Ch]
  int v19; // [sp+24h] [bp-8h]

  v7 = sub_3B5614((int)v16, a1);
  if ( LOBYTE(v16[0]) != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v9 = *((_DWORD *)v8 + 33);
    if ( v9 == 0 )
      sub_3BCEE4(v7);
    v10 = *((_DWORD *)v8 + 31);
    if ( v8[120] != 0 )
    {
      v11 = *((_DWORD *)v8 + 29);
    }
    else
    {
      v15 = *((_DWORD *)v8 + 32);
      if ( v15 == 0 )
        sub_3BCEE4(0);
      v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 40))(v15, 32);
      *((_DWORD *)v8 + 29) = v11;
      v8[120] = 1;
    }
    v18 = v10;
    LOBYTE(v19) = v10 == 0;
    (*(void (__fastcall **)(_BYTE *, int, int, int, char *, int, int, int))(*(_DWORD *)v9 + 20))(
      v17,
      v9,
      v10,
      v19,
      v8,
      v11,
      a3,
      a4);
    if ( v17[4] != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v12 = v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12);
  if ( (*(_DWORD *)(v12 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v13 = *(_DWORD *)(v12 + 124);
    if ( v13 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 24))(v13) == -1 )
      sub_39194C(
        (_DWORD *)(v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12)),
        *(_DWORD *)(v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B6414
// address: 0x003B6414   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6414(_DWORD *a1, int a2, int a3, int a4)
{
  return sub_3B62B4(a1, a2, a3, a4);
}


//======================================================================
// sub_3B641C
// address: 0x003B641C   size: 0x122 (290 bytes)
//======================================================================
_DWORD *__fastcall sub_3B641C(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r7
  int v9; // r10
  int v10; // r9
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int v15; // r0
  _DWORD v16[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v17[8]; // [sp+18h] [bp-14h] BYREF
  int v18; // [sp+20h] [bp-Ch]
  int v19; // [sp+24h] [bp-8h]

  v7 = sub_3B5614((int)v16, a1);
  if ( LOBYTE(v16[0]) != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v9 = *((_DWORD *)v8 + 33);
    if ( v9 == 0 )
      sub_3BCEE4(v7);
    v10 = *((_DWORD *)v8 + 31);
    if ( v8[120] != 0 )
    {
      v11 = *((_DWORD *)v8 + 29);
    }
    else
    {
      v15 = *((_DWORD *)v8 + 32);
      if ( v15 == 0 )
        sub_3BCEE4(0);
      v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 40))(v15, 32);
      *((_DWORD *)v8 + 29) = v11;
      v8[120] = 1;
    }
    v18 = v10;
    LOBYTE(v19) = v10 == 0;
    (*(void (__fastcall **)(_BYTE *, int, int, int, char *, int, int, int))(*(_DWORD *)v9 + 24))(
      v17,
      v9,
      v10,
      v19,
      v8,
      v11,
      a3,
      a4);
    if ( v17[4] != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v12 = v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12);
  if ( (*(_DWORD *)(v12 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v13 = *(_DWORD *)(v12 + 124);
    if ( v13 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 24))(v13) == -1 )
      sub_39194C(
        (_DWORD *)(v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12)),
        *(_DWORD *)(v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B657C
// address: 0x003B657C   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B657C(_DWORD *a1, int a2, int a3, int a4)
{
  return sub_3B641C(a1, a2, a3, a4);
}


//======================================================================
// sub_3B6584
// address: 0x003B6584   size: 0x122 (290 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6584(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r7
  int v9; // r10
  int v10; // r9
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int v15; // r0
  _DWORD v16[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v17[8]; // [sp+18h] [bp-14h] BYREF
  int v18; // [sp+20h] [bp-Ch]
  int v19; // [sp+24h] [bp-8h]

  v7 = sub_3B5614((int)v16, a1);
  if ( LOBYTE(v16[0]) != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v9 = *((_DWORD *)v8 + 33);
    if ( v9 == 0 )
      sub_3BCEE4(v7);
    v10 = *((_DWORD *)v8 + 31);
    if ( v8[120] != 0 )
    {
      v11 = *((_DWORD *)v8 + 29);
    }
    else
    {
      v15 = *((_DWORD *)v8 + 32);
      if ( v15 == 0 )
        sub_3BCEE4(0);
      v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 40))(v15, 32);
      *((_DWORD *)v8 + 29) = v11;
      v8[120] = 1;
    }
    v18 = v10;
    LOBYTE(v19) = v10 == 0;
    (*(void (__fastcall **)(_BYTE *, int, int, int, char *, int, int, int))(*(_DWORD *)v9 + 28))(
      v17,
      v9,
      v10,
      v19,
      v8,
      v11,
      a3,
      a4);
    if ( v17[4] != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v12 = v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12);
  if ( (*(_DWORD *)(v12 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v13 = *(_DWORD *)(v12 + 124);
    if ( v13 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 24))(v13) == -1 )
      sub_39194C(
        (_DWORD *)(v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12)),
        *(_DWORD *)(v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B66E4
// address: 0x003B66E4   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B66E4(_DWORD *a1, int a2, int a3, int a4)
{
  return sub_3B6584(a1, a2, a3, a4);
}


//======================================================================
// sub_3B66EC
// address: 0x003B66EC   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_3B66EC(_DWORD *a1, float a2)
{
  return sub_3B6584(
           a1,
           HIDWORD(COERCE_UNSIGNED_INT64(a2)),
           COERCE_UNSIGNED_INT64(a2),
           HIDWORD(COERCE_UNSIGNED_INT64(a2)));
}


//======================================================================
// sub_3B6704
// address: 0x003B6704   size: 0x122 (290 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6704(_DWORD *a1, int a2, int a3, int a4)
{
  int v7; // r0
  char *v8; // r7
  int v9; // r10
  int v10; // r9
  int v11; // r0
  int v12; // r4
  int v13; // r0
  int v15; // r0
  _DWORD v16[2]; // [sp+10h] [bp-1Ch] BYREF
  _BYTE v17[8]; // [sp+18h] [bp-14h] BYREF
  int v18; // [sp+20h] [bp-Ch]
  int v19; // [sp+24h] [bp-8h]

  v7 = sub_3B5614((int)v16, a1);
  if ( LOBYTE(v16[0]) != 0 )
  {
    v8 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v9 = *((_DWORD *)v8 + 33);
    if ( v9 == 0 )
      sub_3BCEE4(v7);
    v10 = *((_DWORD *)v8 + 31);
    if ( v8[120] != 0 )
    {
      v11 = *((_DWORD *)v8 + 29);
    }
    else
    {
      v15 = *((_DWORD *)v8 + 32);
      if ( v15 == 0 )
        sub_3BCEE4(0);
      v11 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v15 + 40))(v15, 32);
      *((_DWORD *)v8 + 29) = v11;
      v8[120] = 1;
    }
    v18 = v10;
    LOBYTE(v19) = v10 == 0;
    (*(void (__fastcall **)(_BYTE *, int, int, int, char *, int, int, int))(*(_DWORD *)v9 + 32))(
      v17,
      v9,
      v10,
      v19,
      v8,
      v11,
      a3,
      a4);
    if ( v17[4] != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v12 = v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12);
  if ( (*(_DWORD *)(v12 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v13 = *(_DWORD *)(v12 + 124);
    if ( v13 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v13 + 24))(v13) == -1 )
      sub_39194C(
        (_DWORD *)(v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12)),
        *(_DWORD *)(v16[1] + *(_DWORD *)(*(_DWORD *)v16[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B6864
// address: 0x003B6864   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6864(_DWORD *a1, int a2, int a3, int a4)
{
  return sub_3B6704(a1, a2, a3, a4);
}


//======================================================================
// sub_3B686C
// address: 0x003B686C   size: 0x10E (270 bytes)
//======================================================================
_DWORD *__fastcall sub_3B686C(_DWORD *a1, int a2)
{
  int v4; // r0
  char *v5; // r5
  int *v6; // r8
  int v7; // r7
  int v8; // r0
  int v9; // r3
  int v10; // r5
  int v11; // r0
  int v13; // r0
  _DWORD v14[2]; // [sp+10h] [bp-18h] BYREF
  _BYTE v15[8]; // [sp+18h] [bp-10h] BYREF
  int v16; // [sp+20h] [bp-8h]
  int v17; // [sp+24h] [bp-4h]

  v4 = sub_3B5614((int)v14, a1);
  if ( LOBYTE(v14[0]) != 0 )
  {
    v5 = (char *)a1 + *(_DWORD *)(*a1 - 12);
    v6 = *((int **)v5 + 33);
    if ( v6 == nullptr )
      sub_3BCEE4(v4);
    v7 = *((_DWORD *)v5 + 31);
    if ( v5[120] != 0 )
    {
      v8 = *((_DWORD *)v5 + 29);
    }
    else
    {
      v13 = *((_DWORD *)v5 + 32);
      if ( v13 == 0 )
        sub_3BCEE4(0);
      v8 = (*(int (__fastcall **)(int, int))(*(_DWORD *)v13 + 40))(v13, 32);
      *((_DWORD *)v5 + 29) = v8;
      v5[120] = 1;
    }
    LOBYTE(v17) = v7 == 0;
    v9 = *v6;
    v16 = v7;
    (*(void (__fastcall **)(_BYTE *, int *, int, int, char *, int, int))(v9 + 36))(v15, v6, v7, v17, v5, v8, a2);
    if ( v15[4] != 0 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 1);
  }
  v10 = v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12);
  if ( (*(_DWORD *)(v10 + 12) & 0x2000) != 0 && !std::uncaught_exception() )
  {
    v11 = *(_DWORD *)(v10 + 124);
    if ( v11 != 0 && (*(int (__fastcall **)(int))(*(_DWORD *)v11 + 24))(v11) == -1 )
      sub_39194C(
        (_DWORD *)(v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12)),
        *(_DWORD *)(v14[1] + *(_DWORD *)(*(_DWORD *)v14[1] - 12) + 20) | 1);
  }
  return a1;
}


//======================================================================
// sub_3B69B8
// address: 0x003B69B8   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B69B8(_DWORD *a1, int a2)
{
  return sub_3B686C(a1, a2);
}


//======================================================================
// sub_3B69C0
// address: 0x003B69C0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B69C0(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3B69C4
// address: 0x003B69C4   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3B69C4(_DWORD *a1)
{
  return *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3B69CC
// address: 0x003B69CC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B69CC(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3B69D0
// address: 0x003B69D0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3B69D0(_DWORD *a1, int a2)
{
  *a1 = a2;
  return a2;
}


//======================================================================
// sub_3B69D8
// address: 0x003B69D8   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3B69D8(_DWORD *a1)
{
  return *a1 - 12;
}


//======================================================================
// sub_3B69E0
// address: 0x003B69E0   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B69E0(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3B69E4
// address: 0x003B69E4   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3B69E4(_DWORD *a1)
{
  return *a1 + 4 * *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3B69F4
// address: 0x003B69F4   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall sub_3B69F4(_DWORD *a1, unsigned int a2, int a3)
{
  if ( a2 > *(_DWORD *)(*a1 - 12) )
    sub_3BD0B4(a3);
  return a2;
}


//======================================================================
// sub_3B6A0C
// address: 0x003B6A0C   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3B6A0C(int *a1, int a2, unsigned int a3, int a4)
{
  int v4; // r4
  int result; // r0

  v4 = *a1;
  result = 268435454;
  if ( a2 - *(_DWORD *)(v4 - 12) + 268435454 < a3 )
    sub_3BD058(a4);
  return result;
}


//======================================================================
// sub_3B6A2C
// address: 0x003B6A2C   size: 0x12 (18 bytes)
//======================================================================
unsigned int __fastcall sub_3B6A2C(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int result; // r0

  result = *(_DWORD *)(*a1 - 12) - a2;
  if ( result > a3 )
    return a3;
  return result;
}


//======================================================================
// sub_3B6A40
// address: 0x003B6A40   size: 0x1C (28 bytes)
//======================================================================
bool __fastcall sub_3B6A40(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r3
  _BOOL4 result; // r0

  v2 = *a1;
  result = true;
  if ( a2 >= v2 )
    return v2 + 4 * *(_DWORD *)(v2 - 12) < a2;
  return result;
}


//======================================================================
// sub_3B6A5C
// address: 0x003B6A5C   size: 0x12 (18 bytes)
//======================================================================
wchar_t *__fastcall sub_3B6A5C(wchar_t *result, const wchar_t *a2, size_t a3)
{
  if ( a3 != 1 )
    return j_wmemcpy(result, a2, a3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3B6A70
// address: 0x003B6A70   size: 0x12 (18 bytes)
//======================================================================
wchar_t *__fastcall sub_3B6A70(wchar_t *result, const wchar_t *a2, size_t a3)
{
  if ( a3 != 1 )
    return j_wmemmove(result, a2, a3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3B6A84
// address: 0x003B6A84   size: 0x16 (22 bytes)
//======================================================================
wchar_t *__fastcall sub_3B6A84(wchar_t *result, size_t a2, wchar_t c)
{
  if ( a2 != 1 )
    return j_wmemset(result, c, a2);
  *result = c;
  return result;
}


//======================================================================
// sub_3B6A9C
// address: 0x003B6A9C   size: 0x16 (22 bytes)
//======================================================================
wchar_t *__fastcall sub_3B6A9C(wchar_t *result, const wchar_t *a2, int a3)
{
  size_t v3; // r2

  v3 = (a3 - (int)a2) >> 2;
  if ( v3 != 1 )
    return j_wmemcpy(result, a2, v3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3B6AB4
// address: 0x003B6AB4   size: 0x16 (22 bytes)
//======================================================================
wchar_t *__fastcall sub_3B6AB4(wchar_t *result, const wchar_t *a2, int a3)
{
  size_t v3; // r2

  v3 = (a3 - (int)a2) >> 2;
  if ( v3 != 1 )
    return j_wmemcpy(result, a2, v3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3B6ACC
// address: 0x003B6ACC   size: 0x16 (22 bytes)
//======================================================================
wchar_t *__fastcall sub_3B6ACC(wchar_t *result, const wchar_t *a2, int a3)
{
  size_t v3; // r2

  v3 = (a3 - (int)a2) >> 2;
  if ( v3 != 1 )
    return j_wmemcpy(result, a2, v3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3B6AE4
// address: 0x003B6AE4   size: 0x16 (22 bytes)
//======================================================================
wchar_t *__fastcall sub_3B6AE4(wchar_t *result, const wchar_t *a2, int a3)
{
  size_t v3; // r2

  v3 = (a3 - (int)a2) >> 2;
  if ( v3 != 1 )
    return j_wmemcpy(result, a2, v3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3B6AFC
// address: 0x003B6AFC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B6AFC(int a1, int a2)
{
  return a1 - a2;
}


//======================================================================
// sub_3B6B00
// address: 0x003B6B00   size: 0x6 (6 bytes)
//======================================================================
int *sub_3B6B00()
{
  return &dword_55FB64;
}


//======================================================================
// sub_3B6B0C
// address: 0x003B6B0C   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6B0C(_DWORD *result)
{
  *result = &unk_55FB70;
  return result;
}


//======================================================================
// sub_3B6B1C
// address: 0x003B6B1C   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6B1C(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  *a2 = &unk_55FB70;
  return result;
}


//======================================================================
// sub_3B6B30
// address: 0x003B6B30   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B6B30(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3B6B34
// address: 0x003B6B34   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3B6B34(_DWORD *a1)
{
  return *a1 + 4 * *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3B6B44
// address: 0x003B6B44   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6B44(_DWORD *result, _DWORD *a2)
{
  *result = *a2 + 4 * *(_DWORD *)(*a2 - 12);
  return result;
}


//======================================================================
// sub_3B6B54
// address: 0x003B6B54   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6B54(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  return result;
}


//======================================================================
// sub_3B6B5C
// address: 0x003B6B5C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B6B5C(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3B6B60
// address: 0x003B6B60   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3B6B60(_DWORD *a1)
{
  return *a1 + 4 * *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3B6B70
// address: 0x003B6B70   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6B70(_DWORD *result, _DWORD *a2)
{
  *result = *a2 + 4 * *(_DWORD *)(*a2 - 12);
  return result;
}


//======================================================================
// sub_3B6B80
// address: 0x003B6B80   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall sub_3B6B80(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  return result;
}


//======================================================================
// sub_3B6B88
// address: 0x003B6B88   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3B6B88(_DWORD *a1)
{
  return *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3B6B90
// address: 0x003B6B90   size: 0x4 (4 bytes)
//======================================================================
int sub_3B6B90()
{
  return 268435454;
}


//======================================================================
// sub_3B6B98
// address: 0x003B6B98   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3B6B98(_DWORD *a1)
{
  return *(_DWORD *)(*a1 - 8);
}


//======================================================================
// sub_3B6BA0
// address: 0x003B6BA0   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_3B6BA0(_DWORD *a1)
{
  return *(_DWORD *)(*a1 - 12) == 0;
}


//======================================================================
// sub_3B6BAC
// address: 0x003B6BAC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3B6BAC(_DWORD *a1, int a2)
{
  return *a1 + 4 * a2;
}


//======================================================================
// sub_3B6BB4
// address: 0x003B6BB4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3B6BB4(_DWORD *a1, unsigned int a2)
{
  if ( a2 >= *(_DWORD *)(*a1 - 12) )
    sub_3BD0B4("basic_string::at");
  return *a1 + 4 * a2;
}


//======================================================================
// sub_3B6BD4
// address: 0x003B6BD4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B6BD4(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3B6BD8
// address: 0x003B6BD8   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3B6BD8(_DWORD *a1)
{
  return *a1 + 4 * (*(_DWORD *)(*a1 - 12) - 1);
}


//======================================================================
// sub_3B6BE8
// address: 0x003B6BE8   size: 0x40 (64 bytes)
//======================================================================
size_t __fastcall sub_3B6BE8(_DWORD *a1, wchar_t *s1, size_t a3, unsigned int a4)
{
  unsigned int v4; // r4
  size_t v5; // r4
  const wchar_t *v6; // r5

  v4 = *(_DWORD *)(*a1 - 12);
  if ( a4 > v4 )
    sub_3BD0B4("basic_string::copy");
  v5 = v4 - a4;
  if ( v5 > a3 )
    v5 = a3;
  if ( v5 != 0 )
  {
    v6 = (const wchar_t *)(*a1 + 4 * a4);
    if ( v5 == 1 )
      *s1 = *v6;
    else
      j_wmemcpy(s1, v6, v5);
  }
  return v5;
}


//======================================================================
// sub_3B6C2C
// address: 0x003B6C2C   size: 0x2A (42 bytes)
//======================================================================
int *__fastcall sub_3B6C2C(int *result, int *a2)
{
  int v2; // r3
  int v3; // r2

  v2 = *result;
  if ( *(int *)(*result - 4) < 0 )
    *(_DWORD *)(*result - 4) = 0;
  v3 = *a2;
  if ( *(int *)(*a2 - 4) < 0 )
    *(_DWORD *)(*a2 - 4) = 0;
  *result = v3;
  *a2 = v2;
  return result;
}


//======================================================================
// sub_3B6C58
// address: 0x003B6C58   size: 0xC (12 bytes)
//======================================================================
int *__fastcall sub_3B6C58(int *a1, int *a2)
{
  sub_3B6C2C(a1, a2);
  return a1;
}


//======================================================================
// sub_3B6C64
// address: 0x003B6C64   size: 0xC (12 bytes)
//======================================================================
int *__fastcall sub_3B6C64(int *a1, int *a2)
{
  sub_3B6C2C(a1, a2);
  return a1;
}


//======================================================================
// sub_3B6C70
// address: 0x003B6C70   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B6C70(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3B6C78
// address: 0x003B6C78   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_3B6C78(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  unsigned int v5; // r1
  int result; // r0
  unsigned int v7; // r8
  unsigned int v8; // r4
  const wchar_t *v9; // r5
  size_t v10; // r10
  unsigned int v11; // r6

  v5 = *(_DWORD *)(*a1 - 12);
  if ( a4 != 0 )
  {
    if ( a4 <= v5 )
    {
      v7 = v5 - a4;
      if ( v5 - a4 >= a3 )
      {
        v8 = a3 + 1;
        v9 = (const wchar_t *)(*a1 + 4 * (a3 + 1));
        v10 = a4 - 1;
        do
        {
          v11 = v8;
          if ( *(v9 - 1) == *(_DWORD *)a2 )
          {
            if ( j_wmemcmp(v9, (const wchar_t *)(a2 + 4), v10) == 0 )
              return v8 - 1;
            v11 = v8;
          }
          ++v8;
          ++v9;
        }
        while ( v7 >= v11 );
      }
    }
    return -1;
  }
  result = a3;
  if ( a3 > v5 )
    return -1;
  return result;
}


//======================================================================
// sub_3B6CF4
// address: 0x003B6CF4   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3B6CF4(_DWORD *a1, int *a2, unsigned int a3)
{
  return sub_3B6C78(a1, *a2, a3, *(_DWORD *)(*a2 - 12));
}


//======================================================================
// sub_3B6D04
// address: 0x003B6D04   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3B6D04(_DWORD *a1, wchar_t *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_wcslen(s);
  return sub_3B6C78(a1, (int)s, a3, v6);
}


//======================================================================
// sub_3B6D20
// address: 0x003B6D20   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_3B6D20(int *a1, wchar_t a2, unsigned int a3)
{
  int v3; // r4
  unsigned int v4; // r3
  wchar_t *v6; // r0

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 - 12);
  if ( a3 < v4 && (v6 = j_wmemchr((const wchar_t *)(v3 + 4 * a3), a2, v4 - a3)) != nullptr )
    return ((int)v6 - v3) >> 2;
  else
    return -1;
}


//======================================================================
// sub_3B6D48
// address: 0x003B6D48   size: 0x44 (68 bytes)
//======================================================================
unsigned int __fastcall sub_3B6D48(_DWORD *a1, wchar_t *s2, unsigned int a3, size_t n)
{
  _DWORD *v6; // r1
  unsigned int v8; // r4
  const wchar_t *i; // r5

  v6 = (_DWORD *)(*a1 - 12);
  if ( n > *v6 )
    return -1;
  v8 = *v6 - n;
  if ( v8 > a3 )
    v8 = a3;
  for ( i = (const wchar_t *)(*a1 + 4 * v8); j_wmemcmp(i, s2, n) != 0; --i )
  {
    if ( v8 == 0 )
      return -1;
    --v8;
  }
  return v8;
}


//======================================================================
// sub_3B6D8C
// address: 0x003B6D8C   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3B6D8C(_DWORD *a1, wchar_t **a2, unsigned int a3)
{
  return sub_3B6D48(a1, *a2, a3, *(*a2 - 3));
}


//======================================================================
// sub_3B6D9C
// address: 0x003B6D9C   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3B6D9C(_DWORD *a1, wchar_t *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_wcslen(s);
  return sub_3B6D48(a1, s, a3, v6);
}


//======================================================================
// sub_3B6DB8
// address: 0x003B6DB8   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_3B6DB8(int *a1, int a2, unsigned int a3)
{
  int v3; // r3
  int v4; // r4
  int result; // r0
  unsigned int v6; // r4
  int *v7; // r3
  int v8; // r2

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 - 12);
  if ( v4 == 0 )
    return -1;
  v6 = v4 - 1;
  result = a3;
  if ( a3 > v6 )
    result = v6;
  v7 = (int *)(v3 + 4 * result);
  while ( result != -1 )
  {
    v8 = *v7--;
    if ( v8 == a2 )
      break;
    --result;
  }
  return result;
}


//======================================================================
// sub_3B6DF0
// address: 0x003B6DF0   size: 0x56 (86 bytes)
//======================================================================
unsigned int __fastcall sub_3B6DF0(int *a1, wchar_t *s, unsigned int a3, size_t n)
{
  unsigned int v6; // r4
  int v8; // r5
  int i; // r6

  v6 = a3;
  if ( n == 0 )
    return -1;
  v8 = *a1;
  if ( a3 >= *(_DWORD *)(*a1 - 12) )
    return -1;
  for ( i = 4 * a3; j_wmemchr(s, *(_DWORD *)(v8 + i), n) == nullptr; i += 4 )
  {
    v8 = *a1;
    if ( ++v6 >= *(_DWORD *)(*a1 - 12) )
      return -1;
  }
  return v6;
}


//======================================================================
// sub_3B6E48
// address: 0x003B6E48   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3B6E48(int *a1, wchar_t **a2, unsigned int a3)
{
  return sub_3B6DF0(a1, *a2, a3, *(*a2 - 3));
}


//======================================================================
// sub_3B6E58
// address: 0x003B6E58   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3B6E58(int *a1, wchar_t *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_wcslen(s);
  return sub_3B6DF0(a1, s, a3, v6);
}


//======================================================================
// sub_3B6E74
// address: 0x003B6E74   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3B6E74(int *a1, wchar_t a2, unsigned int a3)
{
  return sub_3B6D20(a1, a2, a3);
}


//======================================================================
// sub_3B6E7C
// address: 0x003B6E7C   size: 0x58 (88 bytes)
//======================================================================
unsigned int __fastcall sub_3B6E7C(int *a1, wchar_t *s, unsigned int a3, size_t n)
{
  int v4; // r6
  int v8; // r3
  unsigned int v10; // r3
  unsigned int v11; // r5
  int v12; // r4

  v4 = *a1;
  v8 = *(_DWORD *)(*a1 - 12);
  if ( n == 0 || v8 == 0 )
    return -1;
  v10 = v8 - 1;
  v11 = a3;
  if ( a3 > v10 )
    v11 = v10;
  v12 = 4 * v11;
  while ( j_wmemchr(s, *(_DWORD *)(v4 + v12), n) == nullptr )
  {
    v12 -= 4;
    if ( v11 == 0 )
      return -1;
    v4 = *a1;
    --v11;
  }
  return v11;
}


//======================================================================
// sub_3B6ED4
// address: 0x003B6ED4   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3B6ED4(int *a1, wchar_t **a2, unsigned int a3)
{
  return sub_3B6E7C(a1, *a2, a3, *(*a2 - 3));
}


//======================================================================
// sub_3B6EE4
// address: 0x003B6EE4   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3B6EE4(int *a1, wchar_t *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_wcslen(s);
  return sub_3B6E7C(a1, s, a3, v6);
}


//======================================================================
// sub_3B6F00
// address: 0x003B6F00   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3B6F00(int *a1, int a2, unsigned int a3)
{
  return sub_3B6DB8(a1, a2, a3);
}


//======================================================================
// sub_3B6F08
// address: 0x003B6F08   size: 0x4E (78 bytes)
//======================================================================
unsigned int __fastcall sub_3B6F08(int *a1, wchar_t *s, unsigned int a3, size_t n)
{
  int v4; // r5
  unsigned int v8; // r4
  int v9; // r6

  v4 = *a1;
  v8 = a3;
  v9 = 4 * a3;
  if ( a3 >= *(_DWORD *)(*a1 - 12) )
    return -1;
  while ( j_wmemchr(s, *(_DWORD *)(v4 + v9), n) != nullptr )
  {
    v4 = *a1;
    ++v8;
    v9 += 4;
    if ( v8 >= *(_DWORD *)(*a1 - 12) )
      return -1;
  }
  return v8;
}


//======================================================================
// sub_3B6F58
// address: 0x003B6F58   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3B6F58(int *a1, wchar_t **a2, unsigned int a3)
{
  return sub_3B6F08(a1, *a2, a3, *(*a2 - 3));
}


//======================================================================
// sub_3B6F68
// address: 0x003B6F68   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3B6F68(int *a1, wchar_t *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_wcslen(s);
  return sub_3B6F08(a1, s, a3, v6);
}


//======================================================================
// sub_3B6F84
// address: 0x003B6F84   size: 0x36 (54 bytes)
//======================================================================
int __fastcall sub_3B6F84(int *a1, int a2, unsigned int a3)
{
  int v3; // r5
  unsigned int v4; // r0
  int v5; // r4
  int v6; // r3

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 - 12);
  if ( a3 >= v4 )
    return -1;
  v5 = *(_DWORD *)(v3 + 4 * a3);
  if ( v5 == a2 )
  {
    v6 = v3 + 4 * a3 + 4;
    while ( ++a3 < v4 )
    {
      v6 += 4;
      if ( *(_DWORD *)(v6 - 4) != v5 )
        return a3;
    }
    return -1;
  }
  return a3;
}


//======================================================================
// sub_3B6FBC
// address: 0x003B6FBC   size: 0x52 (82 bytes)
//======================================================================
unsigned int __fastcall sub_3B6FBC(int *a1, wchar_t *s, unsigned int a3, size_t n)
{
  int v4; // r6
  int v6; // r3
  unsigned int v10; // r3
  unsigned int v11; // r5
  int v12; // r4

  v4 = *a1;
  v6 = *(_DWORD *)(*a1 - 12);
  if ( v6 == 0 )
    return -1;
  v10 = v6 - 1;
  v11 = a3;
  if ( a3 > v10 )
    v11 = v10;
  v12 = 4 * v11;
  while ( j_wmemchr(s, *(_DWORD *)(v4 + v12), n) != nullptr )
  {
    v12 -= 4;
    if ( v11 == 0 )
      return -1;
    v4 = *a1;
    --v11;
  }
  return v11;
}


//======================================================================
// sub_3B7010
// address: 0x003B7010   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3B7010(int *a1, wchar_t **a2, unsigned int a3)
{
  return sub_3B6FBC(a1, *a2, a3, *(*a2 - 3));
}


//======================================================================
// sub_3B7020
// address: 0x003B7020   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3B7020(int *a1, wchar_t *s, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_wcslen(s);
  return sub_3B6FBC(a1, s, a3, v6);
}


//======================================================================
// sub_3B703C
// address: 0x003B703C   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_3B703C(int *a1, int a2, unsigned int a3)
{
  int v3; // r3
  int v4; // r0
  unsigned int v6; // r0
  _DWORD *i; // r3

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 - 12);
  if ( v4 == 0 )
    return -1;
  v6 = v4 - 1;
  if ( a3 > v6 )
    a3 = v6;
  for ( i = (_DWORD *)(v3 + 4 * a3); *i == a2; --i )
  {
    if ( a3 == 0 )
      return -1;
    --a3;
  }
  return a3;
}


//======================================================================
// sub_3B7074
// address: 0x003B7074   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3B7074(const wchar_t **a1, const wchar_t **a2)
{
  const wchar_t *v2; // r0
  const wchar_t *v3; // r1
  size_t v4; // r5
  size_t v5; // r4
  size_t v6; // r2
  int result; // r0

  v2 = *a1;
  v3 = *a2;
  v4 = *(v2 - 3);
  v5 = *(v3 - 3);
  v6 = v5;
  if ( v5 > v4 )
    v6 = *(v2 - 3);
  result = j_wmemcmp(v2, v3, v6);
  if ( result == 0 )
    return v4 - v5;
  return result;
}


//======================================================================
// sub_3B709C
// address: 0x003B709C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_3B709C(int *a1, unsigned int a2, size_t a3, const wchar_t **a4)
{
  int v4; // r0
  unsigned int v5; // r4
  size_t v6; // r4
  const wchar_t *v7; // r3
  size_t v8; // r5
  const wchar_t *v9; // r0
  size_t v10; // r2
  int result; // r0

  v4 = *a1;
  v5 = *(_DWORD *)(v4 - 12);
  if ( a2 > v5 )
    sub_3BD0B4("basic_string::compare");
  v6 = v5 - a2;
  if ( v6 > a3 )
    v6 = a3;
  v7 = *a4;
  v8 = *(v7 - 3);
  v9 = (const wchar_t *)(v4 + 4 * a2);
  v10 = v6;
  if ( v6 > v8 )
    v10 = *(v7 - 3);
  result = j_wmemcmp(v9, v7, v10);
  if ( result == 0 )
    return v6 - v8;
  return result;
}


//======================================================================
// sub_3B70E4
// address: 0x003B70E4   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_3B70E4(int *a1, unsigned int a2, size_t a3, int *a4, unsigned int a5, size_t a6)
{
  int v6; // r0
  unsigned int v7; // r4
  int v8; // r3
  unsigned int v9; // r5
  size_t v10; // r4
  size_t v11; // r2
  size_t v12; // r5
  const wchar_t *v13; // r0
  size_t v14; // r2
  const wchar_t *v15; // r1
  int result; // r0

  v6 = *a1;
  v7 = *(_DWORD *)(v6 - 12);
  if ( a2 > v7 || (v8 = *a4, v9 = *(_DWORD *)(v8 - 12), a5 > v9) )
    sub_3BD0B4("basic_string::compare");
  v10 = v7 - a2;
  if ( v10 > a3 )
  {
    v10 = a3;
    v11 = a6;
    v12 = v9 - a5;
    if ( v12 <= a6 )
    {
LABEL_5:
      v13 = (const wchar_t *)(v6 + 4 * a2);
      v14 = v10;
      v15 = (const wchar_t *)(v8 + 4 * a5);
      if ( v10 <= v12 )
        goto LABEL_6;
      goto LABEL_9;
    }
  }
  else
  {
    v11 = a6;
    v12 = v9 - a5;
    if ( v12 <= a6 )
      goto LABEL_5;
  }
  v12 = v11;
  v13 = (const wchar_t *)(v6 + 4 * a2);
  v14 = v10;
  v15 = (const wchar_t *)(v8 + 4 * a5);
  if ( v10 > v12 )
LABEL_9:
    v14 = v12;
LABEL_6:
  result = j_wmemcmp(v13, v15, v14);
  if ( result == 0 )
    return v10 - v12;
  return result;
}


//======================================================================
// sub_3B7158
// address: 0x003B7158   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3B7158(const wchar_t **a1, wchar_t *s)
{
  size_t v4; // r5
  size_t v5; // r4
  size_t v6; // r2
  int result; // r0

  v4 = *(*a1 - 3);
  v5 = j_wcslen(s);
  v6 = v5;
  if ( v5 > v4 )
    v6 = v4;
  result = j_wmemcmp(*a1, s, v6);
  if ( result == 0 )
    return v4 - v5;
  return result;
}


//======================================================================
// sub_3B7184
// address: 0x003B7184   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_3B7184(_DWORD *a1, unsigned int a2, unsigned int a3, wchar_t *s)
{
  unsigned int *v5; // r3
  unsigned int v8; // r4
  size_t v9; // r6
  size_t v10; // r2
  int result; // r0

  v5 = (unsigned int *)(*a1 - 12);
  if ( a2 > *v5 )
    sub_3BD0B4("basic_string::compare");
  v8 = *v5 - a2;
  if ( v8 > a3 )
    v8 = a3;
  v9 = j_wcslen(s);
  v10 = v9;
  if ( v9 > v8 )
    v10 = v8;
  result = j_wmemcmp((const wchar_t *)(*a1 + 4 * a2), s, v10);
  if ( result == 0 )
    return v8 - v9;
  return result;
}


//======================================================================
// sub_3B71DC
// address: 0x003B71DC   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_3B71DC(int *a1, unsigned int a2, size_t a3, wchar_t *s2, unsigned int a5)
{
  int v5; // r0
  unsigned int v6; // r4
  unsigned int v7; // r4
  const wchar_t *v8; // r0
  int result; // r0

  v5 = *a1;
  v6 = *(_DWORD *)(v5 - 12);
  if ( a2 > v6 )
    sub_3BD0B4("basic_string::compare");
  v7 = v6 - a2;
  if ( v7 <= a3 )
  {
    v8 = (const wchar_t *)(v5 + 4 * a2);
    a3 = v7;
    if ( v7 <= a5 )
      goto LABEL_4;
    goto LABEL_7;
  }
  v7 = a3;
  v8 = (const wchar_t *)(v5 + 4 * a2);
  if ( a3 > a5 )
LABEL_7:
    a3 = a5;
LABEL_4:
  result = j_wmemcmp(v8, s2, a3);
  if ( result == 0 )
    return v7 - a5;
  return result;
}


//======================================================================
// sub_3B7228
// address: 0x003B7228   size: 0x4 (4 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7228(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


//======================================================================
// sub_3B722C
// address: 0x003B722C   size: 0x6 (6 bytes)
//======================================================================
int *sub_3B722C()
{
  return &dword_55FB64;
}


//======================================================================
// sub_3B7238
// address: 0x003B7238   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3B7238(int a1)
{
  return *(_DWORD *)(a1 + 8) >> 31;
}


//======================================================================
// sub_3B724C
// address: 0x003B724C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3B724C(int result)
{
  *(_DWORD *)(result + 8) = -1;
  return result;
}


//======================================================================
// sub_3B7254
// address: 0x003B7254   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3B7254(int result)
{
  *(_DWORD *)(result + 8) = 0;
  return result;
}


//======================================================================
// sub_3B725C
// address: 0x003B725C   size: 0x12 (18 bytes)
//======================================================================
int *__fastcall sub_3B725C(int *result, int a2)
{
  if ( result != &dword_55FB64 )
    return sub_13B86C(result, a2);
  return result;
}


//======================================================================
// sub_3B7274
// address: 0x003B7274   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3B7274(int a1)
{
  return a1 + 12;
}


//======================================================================
// sub_3B7278
// address: 0x003B7278   size: 0x54 (84 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7278(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r4
  size_t v3; // r0
  _DWORD *result; // r0

  v2 = a1;
  if ( a1 > 0xFFFFFFE )
    sub_3BD058("basic_string::_S_create");
  if ( a1 <= a2 )
    goto LABEL_9;
  if ( a1 < 2 * a2 )
    v2 = 2 * a2;
  v3 = 4 * (v2 + 4);
  if ( v3 + 16 > 0x1000 && a2 < v2 )
  {
    v2 += (4096 - (((_WORD)v3 + 16) & 0xFFFu)) >> 2;
    if ( v2 > 0xFFFFFFE )
      v2 = 268435454;
LABEL_9:
    v3 = 4 * (v2 + 4);
  }
  result = operator new(v3);
  result[1] = v2;
  result[2] = 0;
  return result;
}


//======================================================================
// sub_3B72D4
// address: 0x003B72D4   size: 0x44 (68 bytes)
//======================================================================
_DWORD *__fastcall sub_3B72D4(unsigned int a1, wchar_t a2)
{
  _DWORD *v4; // r5
  int *v6; // r0
  int *v7; // r6

  if ( a1 == 0 )
    return &unk_55FB70;
  v6 = sub_3B7278(a1, 0);
  v7 = v6;
  v4 = v6 + 3;
  if ( a1 == 1 )
    v6[3] = a2;
  else
    j_wmemset(v6 + 3, a2, a1);
  if ( v7 != &dword_55FB64 )
    sub_13B86C(v7, a1);
  return v4;
}


//======================================================================
// sub_3B7320
// address: 0x003B7320   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7320(_DWORD *a1)
{
  *a1 = sub_3B72D4(0, 0);
  return a1;
}


//======================================================================
// sub_3B7334
// address: 0x003B7334   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7334(_DWORD *a1, unsigned int a2, wchar_t a3)
{
  *a1 = sub_3B72D4(a2, a3);
  return a1;
}


//======================================================================
// sub_3B7348
// address: 0x003B7348   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7348(unsigned int a1, wchar_t a2)
{
  return sub_3B72D4(a1, a2);
}


//======================================================================
// sub_3B7350
// address: 0x003B7350   size: 0x8 (8 bytes)
//======================================================================
void __fastcall sub_3B7350(void *a1)
{
  operator delete(a1);
}


//======================================================================
// sub_3B7358
// address: 0x003B7358   size: 0x12 (18 bytes)
//======================================================================
int *__fastcall sub_3B7358(int *result, int a2)
{
  if ( result != &dword_55FB64 )
    return (int *)sub_13B87C((int)result, a2);
  return result;
}


//======================================================================
// sub_3B7370
// address: 0x003B7370   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7370(_DWORD *a1)
{
  int *v2; // r0
  _BYTE v4[4]; // [sp+4h] [bp-4h] BYREF

  v2 = (int *)(*a1 - 12);
  if ( v2 != &dword_55FB64 )
    sub_13B87C((int)v2, (int)v4);
  return a1;
}


//======================================================================
// sub_3B7394
// address: 0x003B7394   size: 0x104 (260 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7394(wchar_t *result, size_t a2, int a3, int a4)
{
  wchar_t v5; // r2
  wchar_t *v7; // r4
  unsigned int v9; // r8
  size_t v10; // r3
  unsigned int v11; // r1
  const wchar_t **v12; // r7
  size_t v13; // r10
  _DWORD *v14; // r0
  const wchar_t *v15; // r11
  const wchar_t *v16; // r3
  wchar_t *v17; // r0
  const wchar_t *v18; // r1
  const wchar_t *v19; // r1
  _BYTE v20[8]; // [sp+4h] [bp-8h] BYREF

  v5 = *result;
  v7 = (wchar_t *)(*result - 12);
  v9 = *v7 + a4 - a3;
  v10 = *v7 - a2;
  v11 = *(_DWORD *)(*result - 8);
  v12 = (const wchar_t **)result;
  v13 = v10 - a3;
  if ( v9 <= v11 && *(int *)(*result - 4) <= 0 )
  {
    if ( a3 != a4 && v13 != 0 )
    {
      result = (wchar_t *)(v5 + 4 * (a4 + a2));
      v19 = (const wchar_t *)(v5 + 4 * (a3 + a2));
      if ( v13 == 1 )
      {
        *result = *v19;
      }
      else
      {
        result = j_wmemmove(result, v19, v13);
        v7 = (wchar_t *)(*v12 - 3);
      }
    }
  }
  else
  {
    v14 = sub_3B7278(v9, v11);
    if ( a2 != 0 )
    {
      v15 = v14 + 3;
      v16 = *v12;
      if ( a2 == 1 )
      {
        v14[3] = *v16;
      }
      else
      {
        j_wmemcpy(v14 + 3, *v12, a2);
        v16 = *v12;
      }
    }
    else
    {
      v16 = *v12;
      v15 = v14 + 3;
    }
    if ( v13 != 0 )
    {
      v17 = (wchar_t *)&v15[a4 + a2];
      v18 = &v16[a3 + a2];
      if ( v13 == 1 )
      {
        *v17 = *v18;
      }
      else
      {
        j_wmemcpy(v17, v18, v13);
        v16 = *v12;
      }
    }
    result = (wchar_t *)(v16 - 3);
    if ( v16 - 3 != &dword_55FB64 )
      result = (wchar_t *)sub_13B87C((int)result, (int)v20);
    v7 = (wchar_t *)(v15 - 3);
    *v12 = v15;
  }
  if ( v7 != &dword_55FB64 )
    return sub_13B86C(v7, v9);
  return result;
}


//======================================================================
// sub_3B74A0
// address: 0x003B74A0   size: 0x2C (44 bytes)
//======================================================================
wchar_t *__fastcall sub_3B74A0(wchar_t *result)
{
  int *v1; // r3
  wchar_t *v2; // r4

  v1 = (int *)(*result - 12);
  v2 = result;
  if ( v1 != &dword_55FB64 )
  {
    if ( *(int *)(*result - 4) > 0 )
    {
      result = sub_3B7394(result, 0, 0, 0);
      v1 = (int *)(*v2 - 12);
    }
    v1[2] = -1;
  }
  return result;
}


//======================================================================
// sub_3B74D0
// address: 0x003B74D0   size: 0x12 (18 bytes)
//======================================================================
wchar_t *__fastcall sub_3B74D0(wchar_t *result)
{
  if ( *(int *)(*result - 4) >= 0 )
    return sub_3B74A0(result);
  return result;
}


//======================================================================
// sub_3B74E4
// address: 0x003B74E4   size: 0x1A (26 bytes)
//======================================================================
wchar_t __fastcall sub_3B74E4(wchar_t *a1)
{
  wchar_t result; // r0

  result = *a1;
  if ( *(int *)(result - 4) >= 0 )
  {
    sub_3B74A0(a1);
    return *a1;
  }
  return result;
}


//======================================================================
// sub_3B7500
// address: 0x003B7500   size: 0x20 (32 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7500(wchar_t *a1, wchar_t *a2)
{
  wchar_t v2; // r3

  v2 = *a2;
  if ( *(int *)(*a2 - 4) >= 0 )
  {
    sub_3B74A0(a2);
    v2 = *a2;
  }
  *a1 = v2;
  return a1;
}


//======================================================================
// sub_3B7520
// address: 0x003B7520   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_3B7520(wchar_t *a1)
{
  wchar_t v1; // r3
  _DWORD *v2; // r2

  v1 = *a1;
  v2 = (_DWORD *)(*a1 - 12);
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3B74A0(a1);
    v1 = *a1;
    v2 = (_DWORD *)(*a1 - 12);
  }
  return v1 + 4 * *v2;
}


//======================================================================
// sub_3B7544
// address: 0x003B7544   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3B7544(wchar_t *a1, int a2)
{
  wchar_t v2; // r3

  v2 = *a1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3B74A0(a1);
    v2 = *a1;
  }
  return v2 + 4 * a2;
}


//======================================================================
// sub_3B7564
// address: 0x003B7564   size: 0x1A (26 bytes)
//======================================================================
wchar_t __fastcall sub_3B7564(wchar_t *a1)
{
  wchar_t result; // r0

  result = *a1;
  if ( *(int *)(result - 4) >= 0 )
  {
    sub_3B74A0(a1);
    return *a1;
  }
  return result;
}


//======================================================================
// sub_3B7580
// address: 0x003B7580   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3B7580(wchar_t *a1)
{
  wchar_t v1; // r3
  int v3; // r5

  v1 = *a1;
  v3 = *(_DWORD *)(*a1 - 12) - 1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3B74A0(a1);
    v1 = *a1;
  }
  return v1 + 4 * v3;
}


//======================================================================
// sub_3B75A0
// address: 0x003B75A0   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3B75A0(wchar_t *a1, unsigned int a2)
{
  wchar_t v2; // r3

  v2 = *a1;
  if ( a2 >= *(_DWORD *)(*a1 - 12) )
    sub_3BD0B4("basic_string::at");
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3B74A0(a1);
    v2 = *a1;
  }
  return v2 + 4 * a2;
}


//======================================================================
// sub_3B75D0
// address: 0x003B75D0   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall sub_3B75D0(_DWORD *a1, wchar_t *a2)
{
  wchar_t v2; // r3
  _DWORD *v4; // r2

  v2 = *a2;
  v4 = (_DWORD *)(*a2 - 12);
  if ( *(int *)(*a2 - 4) >= 0 )
  {
    sub_3B74A0(a2);
    v2 = *a2;
    v4 = (_DWORD *)(*a2 - 12);
  }
  *a1 = v2 + 4 * *v4;
  return a1;
}


//======================================================================
// sub_3B75FC
// address: 0x003B75FC   size: 0x12 (18 bytes)
//======================================================================
wchar_t *__fastcall sub_3B75FC(wchar_t *a1)
{
  return sub_3B7394(a1, 0, *(_DWORD *)(*a1 - 12), 0);
}


//======================================================================
// sub_3B7610
// address: 0x003B7610   size: 0x2E (46 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7610(wchar_t *a1, size_t a2, unsigned int a3)
{
  wchar_t v4; // r3
  size_t v6; // r3
  int v7; // r2

  v4 = *a1;
  v6 = *(_DWORD *)(v4 - 12);
  if ( a2 > v6 )
    sub_3BD0B4("basic_string::erase");
  v7 = v6 - a2;
  if ( v6 - a2 > a3 )
    v7 = a3;
  sub_3B7394(a1, a2, v7, 0);
  return a1;
}


//======================================================================
// sub_3B7644
// address: 0x003B7644   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3B7644(wchar_t *a1, int a2)
{
  size_t v3; // r5
  int result; // r0

  v3 = (a2 - *a1) >> 2;
  sub_3B7394(a1, v3, 1, 0);
  result = *a1 + 4 * v3;
  *(_DWORD *)(*a1 - 4) = -1;
  return result;
}


//======================================================================
// sub_3B766C
// address: 0x003B766C   size: 0x32 (50 bytes)
//======================================================================
size_t __fastcall sub_3B766C(wchar_t *a1, size_t a2, int a3)
{
  int v3; // r2
  size_t result; // r0
  size_t v6; // r5
  wchar_t v7; // r3

  v3 = (int)(a3 - a2) >> 2;
  result = a2;
  if ( v3 != 0 )
  {
    v6 = (int)(a2 - *a1) >> 2;
    sub_3B7394(a1, v6, v3, 0);
    v7 = *a1;
    *(_DWORD *)(*a1 - 4) = -1;
    return v7 + 4 * v6;
  }
  return result;
}


//======================================================================
// sub_3B76A0
// address: 0x003B76A0   size: 0x46 (70 bytes)
//======================================================================
wchar_t *__fastcall sub_3B76A0(wchar_t *a1, size_t a2, int a3, unsigned int a4, wchar_t c)
{
  wchar_t *v8; // r0

  if ( a4 > a3 - *(_DWORD *)(*a1 - 12) + 268435454 )
    sub_3BD058("basic_string::_M_replace_aux");
  sub_3B7394(a1, a2, a3, a4);
  if ( a4 != 0 )
  {
    v8 = (wchar_t *)(*a1 + 4 * a2);
    if ( a4 == 1 )
      *v8 = c;
    else
      j_wmemset(v8, c, a4);
  }
  return a1;
}


//======================================================================
// sub_3B76F0
// address: 0x003B76F0   size: 0x1A (26 bytes)
//======================================================================
wchar_t *__fastcall sub_3B76F0(wchar_t *a1, unsigned int a2, wchar_t c)
{
  return sub_3B76A0(a1, 0, *(_DWORD *)(*a1 - 12), a2, c);
}


//======================================================================
// sub_3B770C
// address: 0x003B770C   size: 0x1C (28 bytes)
//======================================================================
wchar_t *__fastcall sub_3B770C(wchar_t *a1, wchar_t c)
{
  sub_3B76A0(a1, 0, *(_DWORD *)(*a1 - 12), 1u, c);
  return a1;
}


//======================================================================
// sub_3B7728
// address: 0x003B7728   size: 0x26 (38 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7728(wchar_t *a1, size_t a2, unsigned int a3, wchar_t c)
{
  if ( a2 > *(_DWORD *)(*a1 - 12) )
    sub_3BD0B4("basic_string::insert");
  return sub_3B76A0(a1, a2, 0, a3, c);
}


//======================================================================
// sub_3B7754
// address: 0x003B7754   size: 0x2C (44 bytes)
//======================================================================
size_t __fastcall sub_3B7754(wchar_t *a1, int a2, wchar_t c)
{
  size_t v3; // r5
  size_t result; // r0

  v3 = (a2 - *a1) >> 2;
  sub_3B76A0(a1, v3, 0, 1u, c);
  result = *a1 + 4 * v3;
  *(_DWORD *)(*a1 - 4) = -1;
  return result;
}


//======================================================================
// sub_3B7780
// address: 0x003B7780   size: 0x2E (46 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7780(wchar_t *a1, size_t a2, unsigned int a3, unsigned int a4, wchar_t c)
{
  unsigned int v6; // r4
  int v7; // r2

  v6 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v6 )
    sub_3BD0B4("basic_string::replace");
  v7 = v6 - a2;
  if ( v6 - a2 > a3 )
    v7 = a3;
  return sub_3B76A0(a1, a2, v7, a4, c);
}


//======================================================================
// sub_3B77B4
// address: 0x003B77B4   size: 0x1C (28 bytes)
//======================================================================
wchar_t *__fastcall sub_3B77B4(wchar_t *a1, int a2, int a3, unsigned int a4, wchar_t c)
{
  return sub_3B76A0(a1, (a2 - *a1) >> 2, (a3 - a2) >> 2, a4, c);
}


//======================================================================
// sub_3B77D0
// address: 0x003B77D0   size: 0x1A (26 bytes)
//======================================================================
wchar_t *__fastcall sub_3B77D0(wchar_t *a1, int a2, unsigned int a3, wchar_t c)
{
  return sub_3B76A0(a1, (a2 - *a1) >> 2, 0, a3, c);
}


//======================================================================
// sub_3B77EC
// address: 0x003B77EC   size: 0x30 (48 bytes)
//======================================================================
wchar_t *__fastcall sub_3B77EC(wchar_t *a1, size_t a2, int a3, const wchar_t *a4, size_t a5)
{
  wchar_t *v8; // r0

  sub_3B7394(a1, a2, a3, a5);
  if ( a5 != 0 )
  {
    v8 = (wchar_t *)(*a1 + 4 * a2);
    if ( a5 == 1 )
      *v8 = *a4;
    else
      j_wmemcpy(v8, a4, a5);
  }
  return a1;
}


//======================================================================
// sub_3B781C
// address: 0x003B781C   size: 0x90 (144 bytes)
//======================================================================
wchar_t *__fastcall sub_3B781C(wchar_t **a1, wchar_t *s2, size_t n)
{
  wchar_t *v3; // r4
  wchar_t *v4; // r5
  int *v5; // r0
  int v7; // r2
  unsigned int v9; // r2

  v3 = *a1;
  v4 = (wchar_t *)a1;
  v5 = *a1 - 3;
  v7 = *v5;
  if ( n > 0xFFFFFFE )
    sub_3BD058("basic_string::assign");
  if ( s2 < v3 || s2 > &v3[v7] || v5[2] > 0 )
    return sub_3B77EC(v4, 0, v7, s2, n);
  v9 = s2 - v3;
  if ( n > v9 )
  {
    if ( v9 == 0 )
      goto LABEL_10;
    if ( n != 1 )
    {
      j_wmemmove(v3, s2, n);
      v5 = (int *)(*v4 - 12);
      goto LABEL_10;
    }
  }
  else if ( n != 1 )
  {
    j_wmemcpy(v3, s2, n);
    v5 = (int *)(*v4 - 12);
    goto LABEL_10;
  }
  *v3 = *s2;
LABEL_10:
  if ( v5 != &dword_55FB64 )
    sub_13B86C(v5, n);
  return v4;
}


//======================================================================
// sub_3B78B8
// address: 0x003B78B8   size: 0x10 (16 bytes)
//======================================================================
wchar_t **__fastcall sub_3B78B8(wchar_t **a1, wchar_t *a2, size_t a3)
{
  sub_3B781C(a1, a2, a3);
  return a1;
}


//======================================================================
// sub_3B78C8
// address: 0x003B78C8   size: 0x2A (42 bytes)
//======================================================================
wchar_t *__fastcall sub_3B78C8(wchar_t **a1, int *a2, unsigned int a3, size_t a4)
{
  int v4; // r1
  unsigned int v5; // r4
  wchar_t *v6; // r1
  size_t v7; // r2

  v4 = *a2;
  v5 = *(_DWORD *)(v4 - 12);
  if ( a3 > v5 )
    sub_3BD0B4("basic_string::assign");
  v6 = (wchar_t *)(v4 + 4 * a3);
  v7 = v5 - a3;
  if ( v7 > a4 )
    v7 = a4;
  return sub_3B781C(a1, v6, v7);
}


//======================================================================
// sub_3B78F8
// address: 0x003B78F8   size: 0x18 (24 bytes)
//======================================================================
wchar_t *__fastcall sub_3B78F8(wchar_t **a1, wchar_t *s)
{
  size_t v4; // r0

  v4 = j_wcslen(s);
  return sub_3B781C(a1, s, v4);
}


//======================================================================
// sub_3B7910
// address: 0x003B7910   size: 0xC (12 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7910(wchar_t **a1, wchar_t *a2, size_t a3)
{
  return sub_3B781C(a1, a2, a3);
}


//======================================================================
// sub_3B791C
// address: 0x003B791C   size: 0x18 (24 bytes)
//======================================================================
wchar_t *__fastcall sub_3B791C(wchar_t **a1, wchar_t *s)
{
  size_t v4; // r0

  v4 = j_wcslen(s);
  return sub_3B781C(a1, s, v4);
}


//======================================================================
// sub_3B7934
// address: 0x003B7934   size: 0xEA (234 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7934(wchar_t *a1, size_t a2, const wchar_t *a3, unsigned int a4)
{
  unsigned int v4; // r7
  size_t v7; // r3
  const wchar_t *v11; // r1
  wchar_t *v12; // r6
  const wchar_t *v13; // r3
  int v14; // r7
  const wchar_t *v15; // r1
  wchar_t *v16; // r0

  v4 = *a1;
  v7 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v7 )
    sub_3BD0B4("basic_string::insert");
  if ( a4 > 268435454 - v7 )
    sub_3BD058("basic_string::insert");
  if ( (unsigned int)a3 < v4 || (unsigned int)a3 > v4 + 4 * v7 || *(int *)(*a1 - 4) > 0 )
    return sub_3B77EC(a1, a2, 0, a3, a4);
  sub_3B7394(a1, a2, 0, a4);
  v11 = (const wchar_t *)(*a1 + 4 * ((int)((int)a3 - v4) >> 2));
  v12 = (wchar_t *)(*a1 + 4 * a2);
  v13 = &v11[a4];
  if ( v12 < v13 )
  {
    if ( v11 < v12 )
    {
      v14 = v12 - v11;
      if ( v14 == 1 )
        *v12 = *v11;
      else
        j_wmemcpy((wchar_t *)(*a1 + 4 * a2), v11, v12 - v11);
      v15 = &v12[a4];
      v16 = &v12[v14];
      if ( a4 - v14 == 1 )
        *v16 = *v15;
      else
        j_wmemcpy(v16, v15, a4 - v14);
      return a1;
    }
    else
    {
      if ( a4 == 1 )
        *v12 = *v13;
      else
        j_wmemcpy((wchar_t *)(*a1 + 4 * a2), &v11[a4], a4);
      return a1;
    }
  }
  else
  {
    if ( a4 == 1 )
      *v12 = *v11;
    else
      j_wmemcpy((wchar_t *)(*a1 + 4 * a2), v11, a4);
    return a1;
  }
}


//======================================================================
// sub_3B7A2C
// address: 0x003B7A2C   size: 0x12 (18 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7A2C(wchar_t *a1, int a2, const wchar_t *a3, unsigned int a4)
{
  return sub_3B7934(a1, (a2 - *a1) >> 2, a3, a4);
}


//======================================================================
// sub_3B7A40
// address: 0x003B7A40   size: 0x2C (44 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7A40(wchar_t *a1, size_t a2, int *a3, unsigned int a4, unsigned int a5)
{
  int v5; // r2
  unsigned int v6; // r4
  int v7; // r5
  unsigned int v8; // r3
  const wchar_t *v9; // r2

  v5 = *a3;
  v6 = *(_DWORD *)(v5 - 12);
  if ( a4 > v6 )
    sub_3BD0B4("basic_string::insert");
  v7 = 4 * a4;
  v8 = v6 - a4;
  v9 = (const wchar_t *)(v5 + v7);
  if ( v8 > a5 )
    v8 = a5;
  return sub_3B7934(a1, a2, v9, v8);
}


//======================================================================
// sub_3B7A70
// address: 0x003B7A70   size: 0x1C (28 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7A70(wchar_t *a1, size_t a2, wchar_t *s)
{
  size_t v6; // r0

  v6 = j_wcslen(s);
  return sub_3B7934(a1, a2, s, v6);
}


//======================================================================
// sub_3B7A8C
// address: 0x003B7A8C   size: 0x10 (16 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7A8C(wchar_t *a1, size_t a2, const wchar_t **a3)
{
  return sub_3B7934(a1, a2, *a3, *(*a3 - 3));
}


//======================================================================
// sub_3B7A9C
// address: 0x003B7A9C   size: 0x20 (32 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7A9C(wchar_t *a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(*a1 - 12);
  if ( v1 == 0 )
    sub_3BD0B4("basic_string::erase");
  return sub_3B7394(a1, v1 - 1, 1, 0);
}


//======================================================================
// sub_3B7AC0
// address: 0x003B7AC0   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall sub_3B7AC0(int *a1)
{
  if ( a1 != &dword_55FB64 )
    sub_3C82FC(a1 + 2, 1);
  return a1 + 3;
}


//======================================================================
// sub_3B7AE0
// address: 0x003B7AE0   size: 0x56 (86 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7AE0(int a1, int a2, int a3)
{
  int *v4; // r0
  size_t v5; // r2
  int *v6; // r5
  _DWORD *v7; // r4
  int v8; // r1
  _DWORD *v10; // r6

  v4 = sub_3B7278(a3 + *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  v5 = *(_DWORD *)a1;
  v6 = v4;
  if ( *(_DWORD *)a1 != 0 )
  {
    v10 = v4 + 3;
    if ( v5 == 1 )
    {
      v4[3] = *(_DWORD *)(a1 + 12);
      v8 = *(_DWORD *)a1;
      v7 = v4 + 3;
    }
    else
    {
      j_wmemcpy(v4 + 3, (const wchar_t *)(a1 + 12), v5);
      v8 = *(_DWORD *)a1;
      v7 = v10;
    }
  }
  else
  {
    v7 = v4 + 3;
    v8 = 0;
  }
  if ( v6 != &dword_55FB64 )
    sub_13B86C(v6, v8);
  return v7;
}


//======================================================================
// sub_3B7B3C
// address: 0x003B7B3C   size: 0x4C (76 bytes)
//======================================================================
int *__fastcall sub_3B7B3C(int *result, unsigned int a2)
{
  unsigned int *v2; // r3
  int *v3; // r4
  unsigned int v4; // r0
  _DWORD *v5; // r6
  _BYTE v6[4]; // [sp+4h] [bp-4h] BYREF

  v2 = (unsigned int *)(*result - 12);
  v3 = result;
  if ( a2 != *(_DWORD *)(*result - 8) || *(int *)(*result - 4) > 0 )
  {
    v4 = a2;
    if ( a2 < *v2 )
      v4 = *v2;
    v5 = sub_3B7AE0((int)v2, (int)v6, v4 - *v2);
    result = (int *)(*v3 - 12);
    if ( result != &dword_55FB64 )
      result = (int *)sub_13B87C((int)result, (int)v6);
    *v3 = (int)v5;
  }
  return result;
}


//======================================================================
// sub_3B7B8C
// address: 0x003B7B8C   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3B7B8C(int *result)
{
  if ( *(_DWORD *)(*result - 8) > *(_DWORD *)(*result - 12) )
    return sub_3B7B3C(result, 0);
  return result;
}


//======================================================================
// sub_3B7BB0
// address: 0x003B7BB0   size: 0x76 (118 bytes)
//======================================================================
int *__fastcall sub_3B7BB0(int *a1, const wchar_t **a2)
{
  const wchar_t *v3; // r1
  size_t v5; // r5
  int v6; // r2
  int *v7; // r3
  int v8; // r0
  unsigned int v9; // r8
  wchar_t *v10; // r0

  v3 = *a2;
  v5 = *(v3 - 3);
  if ( v5 != 0 )
  {
    v6 = *a1;
    v7 = (int *)(*a1 - 12);
    v8 = *v7;
    v9 = *v7 + v5;
    if ( v9 > v7[1] || v7[2] > 0 )
    {
      sub_3B7B3C(a1, *v7 + v5);
      v6 = *a1;
      v3 = *a2;
      v7 = (int *)(*a1 - 12);
      v8 = *v7;
    }
    v10 = (wchar_t *)(v6 + 4 * v8);
    if ( v5 == 1 )
    {
      *v10 = *v3;
    }
    else
    {
      j_wmemcpy(v10, v3, v5);
      v7 = (int *)(*a1 - 12);
    }
    if ( v7 != &dword_55FB64 )
      sub_13B86C(v7, v9);
  }
  return a1;
}


//======================================================================
// sub_3B7C2C
// address: 0x003B7C2C   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3B7C2C(int *a1, const wchar_t **a2)
{
  return sub_3B7BB0(a1, a2);
}


//======================================================================
// sub_3B7C34
// address: 0x003B7C34   size: 0x98 (152 bytes)
//======================================================================
int *__fastcall sub_3B7C34(int *a1, int *a2, unsigned int a3, size_t a4)
{
  int v4; // r7
  unsigned int *v6; // r2
  size_t v9; // r4
  int v10; // r2
  int *v11; // r3
  int v12; // r0
  unsigned int v13; // r9
  wchar_t *v14; // r0
  const wchar_t *v15; // r1

  v4 = *a2;
  v6 = (unsigned int *)(*a2 - 12);
  if ( a3 > *v6 )
    sub_3BD0B4("basic_string::append");
  v9 = *v6 - a3;
  if ( v9 > a4 )
    v9 = a4;
  if ( v9 != 0 )
  {
    v10 = *a1;
    v11 = (int *)(*a1 - 12);
    v12 = *v11;
    v13 = v9 + *v11;
    if ( v13 > *(_DWORD *)(*a1 - 8) || *(int *)(*a1 - 4) > 0 )
    {
      sub_3B7B3C(a1, v9 + *v11);
      v10 = *a1;
      v11 = (int *)(*a1 - 12);
      v12 = *v11;
      v4 = *a2;
    }
    v14 = (wchar_t *)(v10 + 4 * v12);
    v15 = (const wchar_t *)(v4 + 4 * a3);
    if ( v9 == 1 )
    {
      *v14 = *v15;
    }
    else
    {
      j_wmemcpy(v14, v15, v9);
      v11 = (int *)(*a1 - 12);
    }
    if ( v11 != &dword_55FB64 )
      sub_13B86C(v11, v13);
  }
  return a1;
}


//======================================================================
// sub_3B7CD4
// address: 0x003B7CD4   size: 0x9E (158 bytes)
//======================================================================
int *__fastcall sub_3B7CD4(int *a1, unsigned int a2, size_t a3)
{
  const wchar_t *v4; // r6
  unsigned int v6; // r3
  int *v7; // r2
  int v8; // r0
  unsigned int v9; // r7
  wchar_t *v10; // r0
  int v12; // r6

  v4 = (const wchar_t *)a2;
  if ( a3 == 0 )
    return a1;
  v6 = *a1;
  v7 = (int *)(*a1 - 12);
  v8 = *v7;
  if ( a3 > 268435454 - *v7 )
    sub_3BD058("basic_string::append");
  v9 = a3 + v8;
  if ( a3 + v8 > v7[1] )
  {
    if ( a2 < v6 )
      goto LABEL_5;
LABEL_15:
    if ( a2 <= v6 + 4 * v8 )
    {
      v12 = a2 - v6;
      sub_3B7B3C(a1, v9);
      v6 = *a1;
      v7 = (int *)(*a1 - 12);
      v4 = (const wchar_t *)(*a1 + 4 * (v12 >> 2));
      v8 = *v7;
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( v7[2] > 0 )
  {
    if ( a2 >= v6 )
      goto LABEL_15;
LABEL_5:
    sub_3B7B3C(a1, v9);
    v6 = *a1;
    v7 = (int *)(*a1 - 12);
    v8 = *v7;
  }
LABEL_6:
  v10 = (wchar_t *)(v6 + 4 * v8);
  if ( a3 == 1 )
  {
    *v10 = *v4;
  }
  else
  {
    j_wmemcpy(v10, v4, a3);
    v7 = (int *)(*a1 - 12);
  }
  if ( v7 != &dword_55FB64 )
    sub_13B86C(v7, v9);
  return a1;
}


//======================================================================
// sub_3B7D80
// address: 0x003B7D80   size: 0xC (12 bytes)
//======================================================================
int *__fastcall sub_3B7D80(int *a1, unsigned int a2, size_t a3)
{
  return sub_3B7CD4(a1, a2, a3);
}


//======================================================================
// sub_3B7D8C
// address: 0x003B7D8C   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3B7D8C(int *a1, wchar_t *s)
{
  size_t v4; // r0

  v4 = j_wcslen(s);
  return sub_3B7CD4(a1, (unsigned int)s, v4);
}


//======================================================================
// sub_3B7DA4
// address: 0x003B7DA4   size: 0xC (12 bytes)
//======================================================================
int *__fastcall sub_3B7DA4(int *a1, unsigned int a2, size_t a3)
{
  return sub_3B7CD4(a1, a2, a3);
}


//======================================================================
// sub_3B7DB0
// address: 0x003B7DB0   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3B7DB0(int *a1, wchar_t *s)
{
  size_t v4; // r0

  v4 = j_wcslen(s);
  return sub_3B7CD4(a1, (unsigned int)s, v4);
}


//======================================================================
// sub_3B7DC8
// address: 0x003B7DC8   size: 0x7C (124 bytes)
//======================================================================
int *__fastcall sub_3B7DC8(int *a1, size_t a2, wchar_t a3)
{
  int v6; // r0
  int *v7; // r3
  int v8; // r6
  int v9; // r7
  wchar_t *v10; // r0

  if ( a2 != 0 )
  {
    v6 = *a1;
    v7 = (int *)(v6 - 12);
    v8 = *(_DWORD *)(v6 - 12);
    if ( a2 > 268435454 - v8 )
      sub_3BD058("basic_string::append");
    v9 = a2 + v8;
    if ( a2 + v8 > *(_DWORD *)(v6 - 8) || *(int *)(v6 - 4) > 0 )
    {
      sub_3B7B3C(a1, a2 + v8);
      v6 = *a1;
      v7 = (int *)(*a1 - 12);
      v8 = *v7;
    }
    v10 = (wchar_t *)(v6 + 4 * v8);
    if ( a2 == 1 )
    {
      *v10 = a3;
    }
    else
    {
      j_wmemset(v10, a3, a2);
      v7 = (int *)(*a1 - 12);
    }
    if ( v7 != &dword_55FB64 )
      sub_13B86C(v7, v9);
  }
  return a1;
}


//======================================================================
// sub_3B7E50
// address: 0x003B7E50   size: 0x30 (48 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7E50(wchar_t *result, size_t a2, wchar_t a3)
{
  unsigned int v3; // r3

  v3 = *(_DWORD *)(*result - 12);
  if ( a2 > 0xFFFFFFE )
    sub_3BD058("basic_string::resize");
  if ( a2 > v3 )
    return sub_3B7DC8(result, a2 - v3, a3);
  if ( a2 < v3 )
    return sub_3B7394(result, a2, v3 - a2, 0);
  return result;
}


//======================================================================
// sub_3B7E88
// address: 0x003B7E88   size: 0xA (10 bytes)
//======================================================================
wchar_t *__fastcall sub_3B7E88(wchar_t *a1, size_t a2)
{
  return sub_3B7E50(a1, a2, 0);
}


//======================================================================
// sub_3B7E94
// address: 0x003B7E94   size: 0x42 (66 bytes)
//======================================================================
int *__fastcall sub_3B7E94(int *a1, int a2)
{
  int v2; // r2
  int *result; // r0
  int v5; // r4
  int v6; // r6

  v2 = *a1;
  result = (int *)(v2 - 12);
  v5 = *(_DWORD *)(v2 - 12);
  v6 = v5 + 1;
  if ( (unsigned int)(v5 + 1) > *(_DWORD *)(v2 - 8) || *(int *)(v2 - 4) > 0 )
  {
    sub_3B7B3C(a1, v5 + 1);
    v2 = *a1;
    result = (int *)(*a1 - 12);
    v5 = *result;
  }
  *(_DWORD *)(4 * v5 + v2) = a2;
  if ( result != &dword_55FB64 )
    return sub_13B86C(result, v6);
  return result;
}


//======================================================================
// sub_3B7EDC
// address: 0x003B7EDC   size: 0x46 (70 bytes)
//======================================================================
int *__fastcall sub_3B7EDC(int *a1, int a2)
{
  int v2; // r2
  int *v3; // r3
  int v5; // r0
  unsigned int v7; // r5

  v2 = *a1;
  v3 = (int *)(*a1 - 12);
  v5 = *v3;
  v7 = *v3 + 1;
  if ( v7 > v3[1] || v3[2] > 0 )
  {
    sub_3B7B3C(a1, *v3 + 1);
    v2 = *a1;
    v3 = (int *)(*a1 - 12);
    v5 = *v3;
  }
  *(_DWORD *)(4 * v5 + v2) = a2;
  if ( v3 != &dword_55FB64 )
    sub_13B86C(v3, v7);
  return a1;
}


//======================================================================
// sub_3B7F28
// address: 0x003B7F28   size: 0x2A (42 bytes)
//======================================================================
int *__fastcall sub_3B7F28(int *a1, int a2)
{
  if ( a1[2] < 0 )
    return sub_3B7AE0((int)a1, a2, 0);
  if ( a1 != &dword_55FB64 )
    sub_3C82FC(a1 + 2, 1);
  return a1 + 3;
}


//======================================================================
// sub_3B7F58
// address: 0x003B7F58   size: 0x38 (56 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7F58(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  int *v4; // r0
  _DWORD *v5; // r0
  _BYTE v7[8]; // [sp+4h] [bp-8h] BYREF

  v2 = (_DWORD *)*a2;
  v4 = (int *)(*a2 - 12);
  if ( *(int *)(*a2 - 4) < 0 )
  {
    v5 = sub_3B7AE0((int)v4, (int)v7, 0);
  }
  else
  {
    if ( v4 != &dword_55FB64 )
      sub_3C82FC(v2 - 1, 1);
    v5 = v2;
  }
  *a1 = v5;
  return a1;
}


//======================================================================
// sub_3B7F94
// address: 0x003B7F94   size: 0x5A (90 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7F94(_DWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // r5
  int *v4; // r3
  int *v5; // r0
  _DWORD *v7; // r0
  _BYTE v8[8]; // [sp+4h] [bp-8h] BYREF

  v2 = (_DWORD *)*a2;
  v4 = (int *)(*a1 - 12);
  v5 = (int *)(*a2 - 12);
  if ( v4 != v5 )
  {
    if ( *(int *)(*a2 - 4) < 0 )
    {
      v7 = sub_3B7AE0((int)v5, (int)v8, 0);
      v4 = (int *)(*a1 - 12);
      v2 = v7;
    }
    else if ( v5 != &dword_55FB64 )
    {
      sub_3C82FC(v2 - 1, 1);
      v4 = (int *)(*a1 - 12);
    }
    if ( v4 != &dword_55FB64 )
      sub_13B87C((int)v4, (int)v8);
    *a1 = v2;
  }
  return a1;
}


//======================================================================
// sub_3B7FF8
// address: 0x003B7FF8   size: 0x8 (8 bytes)
//======================================================================
_DWORD *__fastcall sub_3B7FF8(_DWORD *a1, _DWORD *a2)
{
  return sub_3B7F94(a1, a2);
}


//======================================================================
// sub_3B8000
// address: 0x003B8000   size: 0x40 (64 bytes)
//======================================================================
int *__fastcall sub_3B8000(int *a1, wchar_t *s, const wchar_t **a3)
{
  size_t v6; // r0
  size_t v7; // r6

  v6 = j_wcslen(s);
  *a1 = (int)&unk_55FB70;
  v7 = v6;
  sub_3B7B3C(a1, v6 + *(*a3 - 3));
  sub_3B7CD4(a1, (unsigned int)s, v7);
  sub_3B7BB0(a1, a3);
  return a1;
}


//======================================================================
// sub_3B8060
// address: 0x003B8060   size: 0x36 (54 bytes)
//======================================================================
int *__fastcall sub_3B8060(int *a1, wchar_t a2, const wchar_t **a3)
{
  *a1 = (int)&unk_55FB70;
  sub_3B7B3C(a1, *(*a3 - 3) + 1);
  sub_3B7DC8(a1, 1u, a2);
  sub_3B7BB0(a1, a3);
  return a1;
}


//======================================================================
// sub_3B80B4
// address: 0x003B80B4   size: 0x4C (76 bytes)
//======================================================================
_DWORD *__fastcall sub_3B80B4(const wchar_t *a1, const wchar_t *a2)
{
  int v3; // r6
  int *v4; // r0
  int *v5; // r7
  _DWORD *v6; // r4

  if ( a1 == a2 )
    return &unk_55FB70;
  v3 = a2 - a1;
  v4 = sub_3B7278(v3, 0);
  v5 = v4;
  v6 = v4 + 3;
  if ( v3 == 1 )
    v4[3] = *a1;
  else
    j_wmemcpy(v4 + 3, a1, v3);
  if ( v5 != &dword_55FB64 )
    sub_13B86C(v5, v3);
  return v6;
}


//======================================================================
// sub_3B8108
// address: 0x003B8108   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall sub_3B8108(_DWORD *a1, const wchar_t *a2, const wchar_t *a3)
{
  *a1 = sub_3B80B4(a2, a3);
  return a1;
}


//======================================================================
// sub_3B8120
// address: 0x003B8120   size: 0x6C (108 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8120(const wchar_t *a1, const wchar_t *a2)
{
  int v3; // r7
  int *v4; // r0
  int *v5; // r6
  wchar_t *v6; // r5

  if ( a1 == a2 )
    return (wchar_t *)&unk_55FB70;
  if ( a1 != nullptr )
  {
    v3 = a2 - a1;
    v4 = sub_3B7278(v3, 0);
    v5 = v4;
    v6 = v4 + 3;
    if ( v3 == 1 )
    {
      v4[3] = *a1;
      goto LABEL_5;
    }
  }
  else
  {
    if ( a2 != nullptr )
      sub_3BCF44("basic_string::_S_construct null not valid");
    v3 = 0;
    v5 = sub_3B7278(0, 0);
    v6 = v5 + 3;
  }
  j_wmemcpy(v6, a1, v3);
LABEL_5:
  if ( v5 != &dword_55FB64 )
    sub_13B86C(v5, v3);
  return v6;
}


//======================================================================
// sub_3B8198
// address: 0x003B8198   size: 0x3E (62 bytes)
//======================================================================
wchar_t **__fastcall sub_3B8198(wchar_t **a1, int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r1
  unsigned int v6; // r4
  unsigned int v7; // r4

  v4 = *a2;
  v6 = *(_DWORD *)(v4 - 12);
  if ( a3 > v6 )
    sub_3BD0B4("basic_string::basic_string");
  v7 = v6 - a3;
  if ( v7 > a4 )
    v7 = a4;
  *a1 = sub_3B8120((const wchar_t *)(v4 + 4 * a3), (const wchar_t *)(v4 + 4 * (v7 + a3)));
  return a1;
}


//======================================================================
// sub_3B81DC
// address: 0x003B81DC   size: 0x20 (32 bytes)
//======================================================================
wchar_t **__fastcall sub_3B81DC(wchar_t **a1, int *a2, unsigned int a3, unsigned int a4)
{
  if ( a3 > *(_DWORD *)(*a2 - 12) )
    sub_3BD0B4("basic_string::substr");
  sub_3B8198(a1, a2, a3, a4);
  return a1;
}


//======================================================================
// sub_3B8200
// address: 0x003B8200   size: 0x3A (58 bytes)
//======================================================================
wchar_t **__fastcall sub_3B8200(wchar_t **a1, int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r1
  unsigned int v6; // r4
  unsigned int v7; // r4

  v4 = *a2;
  v6 = *(_DWORD *)(v4 - 12);
  if ( a3 > v6 )
    sub_3BD0B4("basic_string::basic_string");
  v7 = v6 - a3;
  if ( v7 > a4 )
    v7 = a4;
  *a1 = sub_3B8120((const wchar_t *)(v4 + 4 * a3), (const wchar_t *)(v4 + 4 * (v7 + a3)));
  return a1;
}


//======================================================================
// sub_3B8240
// address: 0x003B8240   size: 0x16 (22 bytes)
//======================================================================
wchar_t **__fastcall sub_3B8240(wchar_t **a1, const wchar_t *a2, const wchar_t *a3)
{
  *a1 = sub_3B8120(a2, a3);
  return a1;
}


//======================================================================
// sub_3B8258
// address: 0x003B8258   size: 0x6C (108 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8258(const wchar_t *a1, const wchar_t *a2)
{
  int v3; // r7
  int *v4; // r0
  int *v5; // r6
  wchar_t *v6; // r5

  if ( a1 == a2 )
    return (wchar_t *)&unk_55FB70;
  if ( a1 != nullptr )
  {
    v3 = a2 - a1;
    v4 = sub_3B7278(v3, 0);
    v5 = v4;
    v6 = v4 + 3;
    if ( v3 == 1 )
    {
      v4[3] = *a1;
      goto LABEL_5;
    }
  }
  else
  {
    if ( a2 != nullptr )
      sub_3BCF44("basic_string::_S_construct null not valid");
    v3 = 0;
    v5 = sub_3B7278(0, 0);
    v6 = v5 + 3;
  }
  j_wmemcpy(v6, a1, v3);
LABEL_5:
  if ( v5 != &dword_55FB64 )
    sub_13B86C(v5, v3);
  return v6;
}


//======================================================================
// sub_3B82D0
// address: 0x003B82D0   size: 0x18 (24 bytes)
//======================================================================
wchar_t **__fastcall sub_3B82D0(wchar_t **a1, const wchar_t *a2, int a3)
{
  *a1 = sub_3B8258(a2, &a2[a3]);
  return a1;
}


//======================================================================
// sub_3B82E8
// address: 0x003B82E8   size: 0xFE (254 bytes)
//======================================================================
wchar_t *__fastcall sub_3B82E8(wchar_t *a1, size_t a2, unsigned int a3, const wchar_t *a4, unsigned int a5)
{
  wchar_t *v6; // r7
  unsigned int v7; // r0
  size_t v8; // r1
  int v9; // r4
  int v11; // r9
  wchar_t *v12; // r0
  const wchar_t *v13; // r1
  _BYTE v14[4]; // [sp+8h] [bp-Ch] BYREF
  wchar_t *v15; // [sp+Ch] [bp-8h] BYREF

  v6 = a1;
  v7 = *a1;
  v8 = *(_DWORD *)(v7 - 12);
  if ( a2 > v8 )
    sub_3BD0B4("basic_string::replace");
  v9 = v8 - a2;
  if ( v8 - a2 > a3 )
    v9 = a3;
  if ( a5 > v9 - v8 + 268435454 )
    sub_3BD058("basic_string::replace");
  if ( (unsigned int)a4 < v7 || (unsigned int)a4 > v7 + 4 * v8 || *(int *)(v7 - 4) > 0 )
    return sub_3B77EC(v6, a2, v9, a4, a5);
  if ( (unsigned int)&a4[a5] <= v7 + 4 * a2 )
  {
    v11 = (int)((int)a4 - v7) >> 2;
    goto LABEL_12;
  }
  if ( (unsigned int)a4 >= v7 + 4 * (v9 + a2) )
  {
    v11 = ((int)((int)a4 - v7) >> 2) + a5 - v9;
LABEL_12:
    sub_3B7394(v6, a2, v9, a5);
    v12 = (wchar_t *)(*v6 + 4 * a2);
    v13 = (const wchar_t *)(*v6 + 4 * v11);
    if ( a5 == 1 )
      *v12 = *v13;
    else
      j_wmemcpy(v12, v13, a5);
    return v6;
  }
  sub_3B82D0(&v15, a4, a5);
  v6 = sub_3B77EC(v6, a2, v9, v15, a5);
  if ( v15 - 3 != &dword_55FB64 )
    sub_13B87C((int)(v15 - 3), (int)v14);
  return v6;
}


//======================================================================
// sub_3B8410
// address: 0x003B8410   size: 0x16 (22 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8410(wchar_t *a1, size_t a2, unsigned int a3, const wchar_t **a4)
{
  return sub_3B82E8(a1, a2, a3, *a4, *(*a4 - 3));
}


//======================================================================
// sub_3B8428
// address: 0x003B8428   size: 0x34 (52 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8428(wchar_t *a1, size_t a2, unsigned int a3, int *a4, unsigned int a5, unsigned int a6)
{
  int v6; // r3
  unsigned int v7; // r5
  unsigned int v8; // r4
  const wchar_t *v9; // r3

  v6 = *a4;
  v7 = *(_DWORD *)(v6 - 12);
  if ( a5 > v7 )
    sub_3BD0B4("basic_string::replace");
  v8 = v7 - a5;
  v9 = (const wchar_t *)(v6 + 4 * a5);
  if ( v7 - a5 > a6 )
    v8 = a6;
  return sub_3B82E8(a1, a2, a3, v9, v8);
}


//======================================================================
// sub_3B8460
// address: 0x003B8460   size: 0x24 (36 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8460(wchar_t *a1, size_t a2, unsigned int a3, wchar_t *s)
{
  size_t v8; // r0

  v8 = j_wcslen(s);
  return sub_3B82E8(a1, a2, a3, s, v8);
}


//======================================================================
// sub_3B8484
// address: 0x003B8484   size: 0x1C (28 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8484(wchar_t *a1, int a2, int a3, const wchar_t *a4, unsigned int a5)
{
  return sub_3B82E8(a1, (a2 - *a1) >> 2, (a3 - a2) >> 2, a4, a5);
}


//======================================================================
// sub_3B84A0
// address: 0x003B84A0   size: 0x22 (34 bytes)
//======================================================================
wchar_t *__fastcall sub_3B84A0(wchar_t *a1, int a2, int a3, const wchar_t **a4)
{
  return sub_3B82E8(a1, (a2 - *a1) >> 2, (a3 - a2) >> 2, *a4, *(*a4 - 3));
}


//======================================================================
// sub_3B84C4
// address: 0x003B84C4   size: 0x2A (42 bytes)
//======================================================================
wchar_t *__fastcall sub_3B84C4(wchar_t *a1, int a2, int a3, wchar_t *s)
{
  size_t v8; // r0

  v8 = j_wcslen(s);
  return sub_3B82E8(a1, (a2 - *a1) >> 2, (a3 - a2) >> 2, s, v8);
}


//======================================================================
// sub_3B84F0
// address: 0x003B84F0   size: 0x20 (32 bytes)
//======================================================================
wchar_t *__fastcall sub_3B84F0(wchar_t *a1, int a2, int a3, const wchar_t *a4, int a5)
{
  return sub_3B82E8(a1, (a2 - *a1) >> 2, (a3 - a2) >> 2, a4, (a5 - (int)a4) >> 2);
}


//======================================================================
// sub_3B8510
// address: 0x003B8510   size: 0x20 (32 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8510(wchar_t *a1, int a2, int a3, const wchar_t *a4, int a5)
{
  return sub_3B82E8(a1, (a2 - *a1) >> 2, (a3 - a2) >> 2, a4, (a5 - (int)a4) >> 2);
}


//======================================================================
// sub_3B8530
// address: 0x003B8530   size: 0x20 (32 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8530(wchar_t *a1, int a2, int a3, const wchar_t *a4, int a5)
{
  return sub_3B82E8(a1, (a2 - *a1) >> 2, (a3 - a2) >> 2, a4, (a5 - (int)a4) >> 2);
}


//======================================================================
// sub_3B8550
// address: 0x003B8550   size: 0x20 (32 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8550(wchar_t *a1, int a2, int a3, const wchar_t *a4, int a5)
{
  return sub_3B82E8(a1, (a2 - *a1) >> 2, (a3 - a2) >> 2, a4, (a5 - (int)a4) >> 2);
}


//======================================================================
// sub_3B8570
// address: 0x003B8570   size: 0x2A (42 bytes)
//======================================================================
wchar_t *__fastcall sub_3B8570(wchar_t *a1, int a2, int a3, const wchar_t *a4, int a5)
{
  return sub_3B82E8(a1, (a2 - *a1) >> 2, (a3 - a2) >> 2, a4, (4 * a5) >> 2);
}


//======================================================================
// sub_3B859C
// address: 0x003B859C   size: 0x2C (44 bytes)
//======================================================================
wchar_t **__fastcall sub_3B859C(wchar_t **a1, wchar_t *s)
{
  const wchar_t *v4; // r1

  if ( s != nullptr )
    v4 = &s[j_wcslen(s)];
  else
    v4 = (const wchar_t *)-4;
  *a1 = sub_3B8258(s, v4);
  return a1;
}


//======================================================================
// sub_3B85C8
// address: 0x003B85C8   size: 0x1C (28 bytes)
//======================================================================
wchar_t **__fastcall sub_3B85C8(wchar_t **a1, const wchar_t *a2, int a3)
{
  *a1 = sub_3B8258(a2, &a2[a3]);
  return a1;
}


//======================================================================
// sub_3B85E4
// address: 0x003B85E4   size: 0x16 (22 bytes)
//======================================================================
wchar_t **__fastcall sub_3B85E4(wchar_t **a1, const wchar_t *a2, const wchar_t *a3)
{
  *a1 = sub_3B8258(a2, a3);
  return a1;
}


//======================================================================
// sub_3B85FC
// address: 0x003B85FC   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_3B85FC(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2;
}


//======================================================================
// sub_3B8608
// address: 0x003B8608   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_3B8608(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2;
}


//======================================================================
// sub_3B8614
// address: 0x003B8614   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3B8614(_DWORD *a1, int a2, int a3)
{
  if ( !sub_3A69D8(a1 + 9) )
  {
    if ( a2 != 0 || a3 != 0 )
    {
      if ( a2 != 0 && a3 > 0 )
      {
        a1[15] = a2;
        a1[16] = a3;
      }
    }
    else
    {
      a1[16] = 1;
    }
  }
  return a1;
}


//======================================================================
// sub_3B8644
// address: 0x003B8644   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3B8644(_DWORD *a1, int a2, int a3)
{
  if ( !sub_3A69D8(a1 + 9) )
  {
    if ( a2 != 0 || a3 != 0 )
    {
      if ( a2 != 0 && a3 > 0 )
      {
        a1[15] = a2;
        a1[16] = a3;
      }
    }
    else
    {
      a1[16] = 1;
    }
  }
  return a1;
}


//======================================================================
// sub_3B8674
// address: 0x003B8674   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_3B8674(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r4
  int v5; // r6

  if ( (a1[11] & 8) == 0 )
    return -1;
  v2 = (int)(a1 + 9);
  if ( !sub_3A69D8(a1 + 9) )
    return -1;
  v3 = a1[21];
  v4 = a1[3] - a1[2];
  if ( v3 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 20))(v3) >= 0 )
  {
    v5 = sub_3A6B3C(v2);
    v4 += v5 / (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[21] + 32))(a1[21]);
  }
  return v4;
}


//======================================================================
// sub_3B86CC
// address: 0x003B86CC   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_3B86CC(_DWORD *a1)
{
  int v2; // r6
  int v3; // r0
  int v4; // r4
  int v5; // r6

  if ( (a1[11] & 8) == 0 )
    return -1;
  v2 = (int)(a1 + 9);
  if ( !sub_3A69D8(a1 + 9) )
    return -1;
  v3 = a1[22];
  v4 = (a1[3] - a1[2]) >> 2;
  if ( v3 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 20))(v3) >= 0 )
  {
    v5 = sub_3A6B3C(v2);
    v4 += v5 / (*(int (__fastcall **)(_DWORD))(*(_DWORD *)a1[22] + 32))(a1[22]);
  }
  return v4;
}


//======================================================================
// sub_3B8724
// address: 0x003B8724   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_3B8724(_DWORD *a1)
{
  int v1; // r3

  v1 = 0;
  if ( a1[4] < a1[5] )
    return -((*(int (__fastcall **)(_DWORD *, int))(*a1 + 52))(a1, -1) == -1);
  return v1;
}


//======================================================================
// sub_3B8748
// address: 0x003B8748   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_3B8748(_DWORD *a1)
{
  int v1; // r3

  v1 = 0;
  if ( a1[4] < a1[5] )
    return -((*(int (__fastcall **)(_DWORD *, int))(*a1 + 52))(a1, -1) == -1);
  return v1;
}


//======================================================================
// sub_3B876C
// address: 0x003B876C   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_3B876C(int a1, int a2)
{
  int v4; // r6
  unsigned int v5; // r3
  unsigned __int8 *v6; // r3
  int v7; // r0
  _BYTE *v8; // r3
  int v10; // r3
  _DWORD v11[5]; // [sp+8h] [bp-14h] BYREF

  if ( (*(_DWORD *)(a1 + 44) & 8) == 0 )
    return -1;
  if ( *(_BYTE *)(a1 + 70) != 0 )
  {
    if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1) == -1 )
      return -1;
    v10 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v10;
    *(_DWORD *)(a1 + 8) = v10;
    *(_DWORD *)(a1 + 12) = v10;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 70) = 0;
    v4 = *(unsigned __int8 *)(a1 + 80);
  }
  else
  {
    v4 = *(unsigned __int8 *)(a1 + 80);
    v5 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) < v5 )
    {
      v6 = (unsigned __int8 *)(v5 - 1);
      *(_DWORD *)(a1 + 8) = v6;
      v7 = *v6;
      goto LABEL_5;
    }
  }
  (*(void (__fastcall **)(_DWORD *, int, int, int, int, int))(*(_DWORD *)a1 + 16))(v11, a1, -1, -1, 1, 24);
  if ( v11[0] == -1 && v11[1] == -1 )
    return -1;
  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  if ( v7 == -1 )
    return -1;
LABEL_5:
  if ( a2 == -1 )
    return 0;
  if ( a2 != v7 )
  {
    if ( v4 == 0 )
    {
      if ( *(_BYTE *)(a1 + 80) != 0 )
      {
        v8 = *(_BYTE **)(a1 + 8);
      }
      else
      {
        *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 12) = a1 + 72;
        *(_DWORD *)(a1 + 4) = a1 + 71;
        *(_DWORD *)(a1 + 8) = a1 + 71;
        *(_BYTE *)(a1 + 80) = 1;
        v8 = (_BYTE *)(a1 + 71);
      }
      *(_BYTE *)(a1 + 69) = 1;
      *v8 = a2;
      return a2;
    }
    return -1;
  }
  return a2;
}


//======================================================================
// sub_3B8838
// address: 0x003B8838   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_3B8838(int a1, int a2)
{
  int v4; // r6
  unsigned int v5; // r3
  int *v6; // r3
  int v7; // r0
  _DWORD *v8; // r3
  int v9; // r3
  _DWORD v11[5]; // [sp+8h] [bp-14h] BYREF

  if ( (*(_DWORD *)(a1 + 44) & 8) == 0 )
    return -1;
  if ( *(_BYTE *)(a1 + 70) != 0 )
  {
    if ( (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1) == -1 )
      return -1;
    v9 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v9;
    *(_DWORD *)(a1 + 8) = v9;
    *(_DWORD *)(a1 + 12) = v9;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 70) = 0;
    v4 = *(unsigned __int8 *)(a1 + 84);
  }
  else
  {
    v4 = *(unsigned __int8 *)(a1 + 84);
    v5 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(a1 + 4) < v5 )
    {
      v6 = (int *)(v5 - 4);
      *(_DWORD *)(a1 + 8) = v6;
      v7 = *v6;
      goto LABEL_5;
    }
  }
  (*(void (__fastcall **)(_DWORD *, int, int, int, int, int))(*(_DWORD *)a1 + 16))(v11, a1, -1, -1, 1, 24);
  if ( v11[0] == -1 && v11[1] == -1 )
    return -1;
  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  if ( v7 == -1 )
    return -1;
LABEL_5:
  if ( a2 == -1 )
    return 0;
  if ( a2 != v7 )
  {
    if ( v4 == 0 )
    {
      if ( *(_BYTE *)(a1 + 84) != 0 )
      {
        v8 = *(_DWORD **)(a1 + 8);
      }
      else
      {
        *(_DWORD *)(a1 + 76) = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 80) = *(_DWORD *)(a1 + 12);
        *(_DWORD *)(a1 + 12) = a1 + 76;
        *(_DWORD *)(a1 + 4) = a1 + 72;
        *(_DWORD *)(a1 + 8) = a1 + 72;
        *(_BYTE *)(a1 + 84) = 1;
        v8 = (_DWORD *)(a1 + 72);
      }
      *(_BYTE *)(a1 + 69) = 1;
      *v8 = a2;
      return a2;
    }
    return -1;
  }
  return a2;
}


//======================================================================
// sub_3B8904
// address: 0x003B8904   size: 0xB2 (178 bytes)
//======================================================================
int __fastcall sub_3B8904(int a1, unsigned __int8 *a2, int a3)
{
  int v4; // r7
  int v5; // r0
  int v8; // r7
  int v9; // r3
  unsigned int v10; // r2
  char *v11; // r1
  signed int v12; // r7
  int v13; // r3
  int result; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r1

  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(_DWORD *)(a1 + 84);
  if ( v5 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5) == 0 || (v4 & 0x10) == 0 || *(_BYTE *)(a1 + 69) != 0 )
    return sub_392380((_DWORD *)a1, a2, a3);
  v8 = *(_DWORD *)(a1 + 20);
  v9 = *(_DWORD *)(a1 + 24) - v8;
  if ( *(_BYTE *)(a1 + 70) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 64);
    if ( v10 > 1 )
      v9 = v10 - 1;
  }
  if ( v9 > 1023 )
    v9 = 1024;
  if ( v9 > a3 )
    return sub_392380((_DWORD *)a1, a2, a3);
  v11 = *(char **)(a1 + 16);
  v12 = v8 - (_DWORD)v11;
  v13 = sub_3A6A74(a1 + 36, v11, v12, (int)a2, a3);
  if ( v13 == v12 + a3 )
  {
    v15 = *(_DWORD *)(a1 + 44);
    v16 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v16;
    *(_DWORD *)(a1 + 8) = v16;
    *(_DWORD *)(a1 + 12) = v16;
    if ( (v15 & 0x10) != 0 && (unsigned int)(v17 = *(_DWORD *)(a1 + 64)) > 1 )
    {
      *(_DWORD *)(a1 + 20) = v16;
      *(_DWORD *)(a1 + 16) = v16;
      *(_DWORD *)(a1 + 24) = v16 + v17 - 1;
    }
    else
    {
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
    }
    *(_BYTE *)(a1 + 70) = 1;
  }
  result = 0;
  if ( v12 < v13 )
    return v13 - v12;
  return result;
}


//======================================================================
// sub_3B89BC
// address: 0x003B89BC   size: 0xBA (186 bytes)
//======================================================================
int __fastcall sub_3B89BC(int a1, wchar_t *a2, int a3)
{
  int v4; // r7
  int v5; // r0
  int v8; // r7
  int v9; // r3
  unsigned int v10; // r2
  char *v11; // r1
  signed int v12; // r7
  int v13; // r3
  int result; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r1

  v4 = *(_DWORD *)(a1 + 44);
  v5 = *(_DWORD *)(a1 + 88);
  if ( v5 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5) == 0 || (v4 & 0x10) == 0 || *(_BYTE *)(a1 + 69) != 0 )
    return sub_3924C8((_DWORD *)a1, a2, a3);
  v8 = *(_DWORD *)(a1 + 20);
  v9 = (*(_DWORD *)(a1 + 24) - v8) >> 2;
  if ( *(_BYTE *)(a1 + 70) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 64);
    if ( v10 > 1 )
      v9 = v10 - 1;
  }
  if ( v9 > 1023 )
    v9 = 1024;
  if ( v9 > a3 )
    return sub_3924C8((_DWORD *)a1, a2, a3);
  v11 = *(char **)(a1 + 16);
  v12 = (v8 - (int)v11) >> 2;
  v13 = sub_3A6A74(a1 + 36, v11, v12, (int)a2, a3);
  if ( v13 == v12 + a3 )
  {
    v15 = *(_DWORD *)(a1 + 44);
    v16 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v16;
    *(_DWORD *)(a1 + 8) = v16;
    *(_DWORD *)(a1 + 12) = v16;
    if ( (v15 & 0x10) != 0 && (unsigned int)(v17 = *(_DWORD *)(a1 + 64)) > 1 )
    {
      *(_DWORD *)(a1 + 20) = v16;
      *(_DWORD *)(a1 + 16) = v16;
      *(_DWORD *)(a1 + 24) = v16 + 4 * (v17 + 0x3FFFFFFF);
    }
    else
    {
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
    }
    *(_BYTE *)(a1 + 70) = 1;
  }
  result = 0;
  if ( v12 < v13 )
    return v13 - v12;
  return result;
}


//======================================================================
// sub_3B8A80
// address: 0x003B8A80   size: 0x2AA (682 bytes)
//======================================================================
int __fastcall sub_3B8A80(int a1)
{
  unsigned __int8 *v2; // r3
  unsigned int v3; // r2
  int result; // r0
  int v5; // r3
  unsigned int v6; // r3
  size_t v7; // r8
  int v8; // r0
  ssize_t v9; // r0
  signed int v10; // r5
  unsigned int v11; // r1
  int v12; // r0
  const void *v13; // r1
  signed int v14; // r7
  signed int v15; // r5
  char *v16; // r0
  char *v17; // r3
  int v18; // r0
  int v19; // r6
  _BYTE *v20; // r1
  ssize_t v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r7
  unsigned __int8 *v25; // r3
  unsigned __int8 *v26; // r0
  char *v27; // r9
  void *v28; // r0
  int v29; // r0
  int v30; // r3
  signed int v31; // r6
  int v32; // r3
  _BYTE *v33; // [sp+14h] [bp-8h]

  if ( (*(_DWORD *)(a1 + 44) & 8) == 0 )
    return -1;
  if ( *(_BYTE *)(a1 + 70) != 0 )
  {
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1);
    if ( result == -1 )
      return result;
    v2 = *(unsigned __int8 **)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v2;
    *(_DWORD *)(a1 + 8) = v2;
    *(_DWORD *)(a1 + 12) = v2;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 70) = 0;
  }
  else
  {
    v2 = *(unsigned __int8 **)(a1 + 8);
  }
  if ( *(_BYTE *)(a1 + 80) != 0 )
  {
    v2 = (unsigned __int8 *)(*(_DWORD *)(a1 + 72) + (*(_DWORD *)(a1 + 4) != (_DWORD)v2));
    v11 = *(_DWORD *)(a1 + 76);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 72) = v2;
    *(_DWORD *)(a1 + 8) = v2;
    *(_DWORD *)(a1 + 12) = v11;
    *(_BYTE *)(a1 + 80) = 0;
    v3 = v11;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 12);
  }
  if ( v3 > (unsigned int)v2 )
    return *v2;
  v6 = *(_DWORD *)(a1 + 64);
  if ( v6 <= 1 )
    v7 = 1;
  else
    v7 = v6 - 1;
  v8 = *(_DWORD *)(a1 + 84);
  if ( v8 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 24))(v8) != 0 )
  {
    v9 = sub_3A6A38(a1 + 36, *(void **)(a1 + 4), v7);
    v10 = v9;
    if ( v9 == 0 )
    {
      v5 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 4) = v5;
      *(_DWORD *)(a1 + 8) = v5;
      *(_DWORD *)(a1 + 12) = v5;
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      *(_BYTE *)(a1 + 69) = 0;
      return -1;
    }
    if ( v9 <= 0 )
      goto LABEL_56;
    goto LABEL_18;
  }
  v12 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 84) + 20))(*(_DWORD *)(a1 + 84));
  if ( v12 > 0 )
  {
    v31 = v7 * v12;
    v30 = v7 * v12;
  }
  else
  {
    v29 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 84) + 32))(*(_DWORD *)(a1 + 84));
    v30 = v7;
    v31 = v7 - 1 + v29;
  }
  v13 = *(const void **)(a1 + 96);
  v14 = 0;
  v15 = *(_DWORD *)(a1 + 100) - (_DWORD)v13;
  if ( v30 > v15 )
    v14 = v30 - v15;
  if ( *(_BYTE *)(a1 + 69) != 0 && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a1 + 4) )
  {
    if ( v15 == 0 )
    {
      if ( v31 <= *(_DWORD *)(a1 + 92) )
      {
        v16 = *(char **)(a1 + 88);
        v15 = 0;
        goto LABEL_36;
      }
      v27 = (char *)operator new[](v31);
      goto LABEL_62;
    }
    if ( v31 <= *(_DWORD *)(a1 + 92) )
    {
      v14 = 0;
      goto LABEL_60;
    }
    v14 = 0;
    v27 = (char *)operator new[](v31);
LABEL_67:
    j_memcpy(v27, *(const void **)(a1 + 96), v15);
    goto LABEL_63;
  }
  if ( v31 > *(_DWORD *)(a1 + 92) )
  {
    v27 = (char *)operator new[](v31);
    if ( v15 == 0 )
    {
LABEL_62:
      v15 = 0;
LABEL_63:
      v28 = *(void **)(a1 + 88);
      if ( v28 != nullptr )
        operator delete[](v28);
      *(_DWORD *)(a1 + 88) = v27;
      *(_DWORD *)(a1 + 92) = v31;
      v16 = v27;
      goto LABEL_36;
    }
    goto LABEL_67;
  }
  if ( v15 != 0 )
LABEL_60:
    j_memmove(*(void **)(a1 + 88), v13, v15);
  v16 = *(char **)(a1 + 88);
LABEL_36:
  v17 = &v16[v15];
  *(_DWORD *)(a1 + 96) = v16;
  v18 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 100) = v17;
  *(_DWORD *)(a1 + 56) = v18;
  v19 = 0;
  v10 = 0;
  if ( v14 > 0 )
    goto LABEL_46;
  v24 = 0;
  while ( 1 )
  {
    v20 = *(_BYTE **)(a1 + 4);
    v33 = v20;
    if ( *(_DWORD *)(a1 + 96) < (unsigned int)v17 )
    {
      v22 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 84) + 16))(*(_DWORD *)(a1 + 84), a1 + 52);
      v20 = *(_BYTE **)(a1 + 4);
      v19 = v22;
      if ( v22 == 3 )
      {
LABEL_50:
        v23 = *(_DWORD *)(a1 + 88);
        v10 = v7;
        if ( v7 > *(_DWORD *)(a1 + 100) - v23 )
          v10 = *(_DWORD *)(a1 + 100) - v23;
        j_memcpy(v20, *(const void **)(a1 + 88), v10);
        *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 88) + v10;
        goto LABEL_43;
      }
    }
    else if ( v19 == 3 )
    {
      goto LABEL_50;
    }
    v10 = v33 - v20;
    if ( v19 == 2 )
      break;
LABEL_43:
    if ( v10 != 0 || v24 != 0 )
      break;
    v17 = *(char **)(a1 + 100);
    v14 = 1;
LABEL_46:
    if ( (int)&v17[v14 - *(_DWORD *)(a1 + 88)] > *(_DWORD *)(a1 + 92) )
      sub_3BD280("basic_filebuf::underflow codecvt::max_length() is not valid");
    v21 = sub_3A6A38(a1 + 36, v17, v14);
    if ( v21 != 0 )
    {
      v24 = 0;
      if ( v21 == -1 )
        break;
    }
    else
    {
      v24 = 1;
    }
    v17 = (char *)(*(_DWORD *)(a1 + 100) + v21);
    *(_DWORD *)(a1 + 100) = v17;
  }
  if ( v10 > 0 )
  {
LABEL_18:
    v25 = *(unsigned __int8 **)(a1 + 60);
    if ( (*(_DWORD *)(a1 + 44) & 8) != 0 )
    {
      *(_DWORD *)(a1 + 4) = v25;
      v26 = v25;
      *(_DWORD *)(a1 + 8) = v25;
      *(_DWORD *)(a1 + 12) = &v25[v10];
    }
    else
    {
      *(_DWORD *)(a1 + 4) = v25;
      *(_DWORD *)(a1 + 8) = v25;
      *(_DWORD *)(a1 + 12) = v25;
      v26 = v25;
    }
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 69) = 1;
    return *v26;
  }
  if ( v24 == 0 )
  {
    if ( v19 == 2 )
      sub_3BD280("basic_filebuf::underflow invalid byte sequence in file");
LABEL_56:
    sub_3BD280("basic_filebuf::underflow error reading the file");
  }
  v32 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 4) = v32;
  *(_DWORD *)(a1 + 8) = v32;
  *(_DWORD *)(a1 + 12) = v32;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 69) = 0;
  if ( v19 == 1 )
    sub_3BD280("basic_filebuf::underflow incomplete character in file");
  return -1;
}


//======================================================================
// sub_3B8D3C
// address: 0x003B8D3C   size: 0x162 (354 bytes)
//======================================================================
int __fastcall sub_3B8D3C(_DWORD *a1, char *a2, int a3)
{
  char *v6; // r2
  char *v7; // r1
  int v8; // r6
  int v9; // r3
  int v10; // r2
  int v11; // r3
  int v12; // r8
  unsigned int v13; // r3
  int v14; // r3
  int v15; // r0
  const void *v16; // r1
  size_t v17; // r3
  size_t v18; // r8
  ssize_t v19; // r0
  int v20; // r3
  int v21; // r3
  int v23; // r2
  int v24; // r3
  int v25; // r2

  if ( *((_BYTE *)a1 + 80) != 0 )
  {
    v6 = (char *)a1[2];
    v7 = (char *)a1[1];
    if ( a3 > 0 && v6 == v7 )
    {
      *a2 = *v6;
      --a3;
      v6 = (char *)(a1[2] + 1);
      a1[2] = v6;
      ++a2;
      v8 = 1;
      if ( *((_BYTE *)a1 + 80) == 0 )
        goto LABEL_6;
      v7 = (char *)a1[1];
    }
    else
    {
      v8 = 0;
    }
    v9 = a1[18] + (v6 != v7);
    a1[18] = v9;
    v10 = a1[15];
    a1[2] = v9;
    v11 = a1[19];
    a1[1] = v10;
    a1[3] = v11;
    *((_BYTE *)a1 + 80) = 0;
  }
  else
  {
    v8 = 0;
    if ( *((_BYTE *)a1 + 70) != 0 )
    {
      if ( (*(int (__fastcall **)(_DWORD *, int))(*a1 + 52))(a1, -1) == -1 )
        return v8;
      v21 = a1[15];
      a1[1] = v21;
      a1[2] = v21;
      a1[3] = v21;
      a1[5] = 0;
      a1[4] = 0;
      a1[6] = 0;
      *((_BYTE *)a1 + 70) = 0;
    }
  }
LABEL_6:
  v12 = a1[11];
  v13 = a1[16];
  if ( v13 <= 1 )
    v14 = 1;
  else
    v14 = v13 - 1;
  if ( a3 <= v14 )
    goto LABEL_25;
  v15 = a1[21];
  if ( v15 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v15 + 24))(v15) != 0 && (v12 & 8) != 0 )
  {
    v16 = (const void *)a1[2];
    v17 = a1[3] - (_DWORD)v16;
    v18 = v17;
    if ( v17 != 0 )
    {
      j_memcpy(a2, v16, v17);
      a2 += v18;
      v8 += v18;
      a3 -= v18;
      a1[2] += v18;
    }
    while ( 1 )
    {
      v19 = sub_3A6A38((int)(a1 + 9), a2, a3);
      if ( v19 == -1 )
        sub_3BD280("basic_filebuf::xsgetn error reading the file");
      if ( v19 == 0 )
        break;
      a3 -= v19;
      v8 += v19;
      if ( a3 == 0 )
        goto LABEL_30;
      a2 += v19;
    }
    if ( a3 != 0 )
    {
      v20 = a1[15];
      a1[1] = v20;
      a1[2] = v20;
      a1[3] = v20;
      a1[5] = 0;
      a1[4] = 0;
      a1[6] = 0;
      *((_BYTE *)a1 + 69) = 0;
      return v8;
    }
LABEL_30:
    v23 = a1[11];
    v24 = a1[15];
    a1[1] = v24;
    a1[2] = v24;
    a1[3] = v24;
    if ( (v23 & 0x10) != 0 && (unsigned int)(v25 = a1[16]) > 1 )
    {
      a1[5] = v24;
      a1[4] = v24;
      a1[6] = v24 + v25 - 1;
    }
    else
    {
      a1[5] = 0;
      a1[4] = 0;
      a1[6] = 0;
    }
    *((_BYTE *)a1 + 69) = 1;
  }
  else
  {
LABEL_25:
    v8 += sub_392318(a1, a2, a3);
  }
  return v8;
}


//======================================================================
// sub_3B8EA4
// address: 0x003B8EA4   size: 0x2C0 (704 bytes)
//======================================================================
int __fastcall sub_3B8EA4(int a1)
{
  unsigned int v2; // r3
  unsigned int v3; // r2
  int result; // r0
  int v5; // r3
  unsigned int v6; // r7
  size_t v7; // r10
  int v8; // r0
  ssize_t v9; // r0
  int v10; // r7
  unsigned int v11; // r1
  int v12; // r0
  const void *v13; // r1
  signed int v14; // r6
  signed int v15; // r5
  char *v16; // r0
  char *v17; // r3
  int v18; // r0
  int v19; // r5
  wchar_t *v20; // r1
  ssize_t v21; // r0
  int v22; // r0
  int v23; // r3
  size_t v24; // r2
  int v25; // r6
  int *v26; // r3
  int *v27; // r0
  char *v28; // r9
  void *v29; // r0
  signed int v30; // r8
  int v31; // r3
  int v32; // r3
  wchar_t *v33; // [sp+14h] [bp-4h]

  if ( (*(_DWORD *)(a1 + 44) & 8) == 0 )
    return -1;
  if ( *(_BYTE *)(a1 + 70) != 0 )
  {
    result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1);
    if ( result == -1 )
      return result;
    v2 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v2;
    *(_DWORD *)(a1 + 8) = v2;
    *(_DWORD *)(a1 + 12) = v2;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    *(_BYTE *)(a1 + 70) = 0;
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 8);
  }
  if ( *(_BYTE *)(a1 + 84) != 0 )
  {
    v2 = *(_DWORD *)(a1 + 76) + 4 * (*(_DWORD *)(a1 + 4) != v2);
    v11 = *(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 76) = v2;
    *(_DWORD *)(a1 + 8) = v2;
    *(_DWORD *)(a1 + 12) = v11;
    *(_BYTE *)(a1 + 84) = 0;
    v3 = v11;
  }
  else
  {
    v3 = *(_DWORD *)(a1 + 12);
  }
  if ( v3 > v2 )
    return *(_DWORD *)v2;
  v6 = *(_DWORD *)(a1 + 64);
  if ( v6 <= 1 )
    v7 = 1;
  else
    v7 = v6 - 1;
  v8 = *(_DWORD *)(a1 + 88);
  if ( v8 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 24))(v8) != 0 )
  {
    v9 = sub_3A6A38(a1 + 36, *(void **)(a1 + 4), v7);
    v10 = v9;
    if ( v9 == 0 )
    {
      v5 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 4) = v5;
      *(_DWORD *)(a1 + 8) = v5;
      *(_DWORD *)(a1 + 12) = v5;
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
      *(_BYTE *)(a1 + 69) = 0;
      return -1;
    }
    if ( v9 <= 0 )
      goto LABEL_56;
    goto LABEL_18;
  }
  v12 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 88) + 20))(*(_DWORD *)(a1 + 88));
  if ( v12 > 0 )
  {
    v30 = v7 * v12;
    v31 = v7 * v12;
  }
  else
  {
    v30 = v7 - 1 + (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 88) + 32))(*(_DWORD *)(a1 + 88));
    v31 = v7;
  }
  v13 = *(const void **)(a1 + 100);
  v14 = 0;
  v15 = *(_DWORD *)(a1 + 104) - (_DWORD)v13;
  if ( v31 > v15 )
    v14 = v31 - v15;
  if ( *(_BYTE *)(a1 + 69) != 0 && *(_DWORD *)(a1 + 12) == *(_DWORD *)(a1 + 4) )
  {
    if ( v15 == 0 )
    {
      if ( v30 <= *(_DWORD *)(a1 + 96) )
      {
        v16 = *(char **)(a1 + 92);
        v15 = 0;
        goto LABEL_36;
      }
      v28 = (char *)operator new[](v30);
      goto LABEL_62;
    }
    if ( v30 <= *(_DWORD *)(a1 + 96) )
    {
      v14 = 0;
      goto LABEL_60;
    }
    v14 = 0;
    v28 = (char *)operator new[](v30);
LABEL_67:
    j_memcpy(v28, *(const void **)(a1 + 100), v15);
    goto LABEL_63;
  }
  if ( v30 > *(_DWORD *)(a1 + 96) )
  {
    v28 = (char *)operator new[](v30);
    if ( v15 == 0 )
    {
LABEL_62:
      v15 = 0;
LABEL_63:
      v29 = *(void **)(a1 + 92);
      if ( v29 != nullptr )
        operator delete[](v29);
      *(_DWORD *)(a1 + 92) = v28;
      *(_DWORD *)(a1 + 96) = v30;
      v16 = v28;
      goto LABEL_36;
    }
    goto LABEL_67;
  }
  if ( v15 != 0 )
LABEL_60:
    j_memmove(*(void **)(a1 + 92), v13, *(_DWORD *)(a1 + 104) - (_DWORD)v13);
  v16 = *(char **)(a1 + 92);
LABEL_36:
  v17 = &v16[v15];
  *(_DWORD *)(a1 + 100) = v16;
  v18 = *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 104) = v17;
  *(_DWORD *)(a1 + 56) = v18;
  v19 = 0;
  v10 = 0;
  if ( v14 > 0 )
    goto LABEL_46;
  v25 = 0;
  while ( 1 )
  {
    v20 = *(wchar_t **)(a1 + 4);
    v33 = v20;
    if ( *(_DWORD *)(a1 + 100) < (unsigned int)v17 )
    {
      v22 = (*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 88) + 16))(*(_DWORD *)(a1 + 88), a1 + 52);
      v20 = *(wchar_t **)(a1 + 4);
      v19 = v22;
      if ( v22 == 3 )
      {
LABEL_50:
        v23 = *(_DWORD *)(a1 + 92);
        v24 = v7;
        if ( v7 > *(_DWORD *)(a1 + 104) - v23 )
          v24 = *(_DWORD *)(a1 + 104) - v23;
        v10 = v24;
        j_wmemcpy(v20, *(const wchar_t **)(a1 + 92), v24);
        *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 92) + v10;
        goto LABEL_43;
      }
    }
    else if ( v19 == 3 )
    {
      goto LABEL_50;
    }
    v10 = v33 - v20;
    if ( v19 == 2 )
      break;
LABEL_43:
    if ( v10 != 0 || v25 != 0 )
      break;
    v17 = *(char **)(a1 + 104);
    v14 = 1;
LABEL_46:
    if ( (int)&v17[v14 - *(_DWORD *)(a1 + 92)] > *(_DWORD *)(a1 + 96) )
      sub_3BD280("basic_filebuf::underflow codecvt::max_length() is not valid");
    v21 = sub_3A6A38(a1 + 36, v17, v14);
    if ( v21 != 0 )
    {
      v25 = 0;
      if ( v21 == -1 )
        break;
    }
    else
    {
      v25 = 1;
    }
    v17 = (char *)(*(_DWORD *)(a1 + 104) + v21);
    *(_DWORD *)(a1 + 104) = v17;
  }
  if ( v10 > 0 )
  {
LABEL_18:
    v26 = *(int **)(a1 + 60);
    if ( (*(_DWORD *)(a1 + 44) & 8) != 0 )
    {
      v27 = *(int **)(a1 + 60);
      *(_DWORD *)(a1 + 4) = v26;
      *(_DWORD *)(a1 + 8) = v26;
      *(_DWORD *)(a1 + 12) = &v26[v10];
    }
    else
    {
      *(_DWORD *)(a1 + 4) = v26;
      *(_DWORD *)(a1 + 8) = v26;
      *(_DWORD *)(a1 + 12) = v26;
      v27 = v26;
    }
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
    result = *v27;
    *(_BYTE *)(a1 + 69) = 1;
    return result;
  }
  if ( v25 == 0 )
  {
    if ( v19 == 2 )
      sub_3BD280("basic_filebuf::underflow invalid byte sequence in file");
LABEL_56:
    sub_3BD280("basic_filebuf::underflow error reading the file");
  }
  v32 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 4) = v32;
  *(_DWORD *)(a1 + 8) = v32;
  *(_DWORD *)(a1 + 12) = v32;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_BYTE *)(a1 + 69) = 0;
  if ( v19 == 1 )
    sub_3BD280("basic_filebuf::underflow incomplete character in file");
  return -1;
}


//======================================================================
// sub_3B9174
// address: 0x003B9174   size: 0x166 (358 bytes)
//======================================================================
int __fastcall sub_3B9174(_DWORD *a1, wchar_t *s1, int a3)
{
  wchar_t *v3; // r5
  wchar_t *v6; // r3
  wchar_t *v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r3
  int v11; // r8
  unsigned int v12; // r3
  int v13; // r3
  int v14; // r0
  const wchar_t *v15; // r1
  int v16; // r2
  int v17; // r8
  ssize_t v18; // r0
  int v19; // r3
  int v20; // r3
  int v22; // r6
  int v23; // r1
  int v24; // r3
  int v25; // r2

  v3 = s1;
  if ( *((_BYTE *)a1 + 84) != 0 )
  {
    v6 = (wchar_t *)a1[2];
    v7 = (wchar_t *)a1[1];
    if ( a3 > 0 && v6 == v7 )
    {
      *s1 = *v6;
      --a3;
      v7 = v6;
      a1[2] = ++v6;
      v3 = s1 + 1;
      v22 = 1;
    }
    else
    {
      v22 = 0;
    }
    v8 = a1[19] + 4 * (v7 != v6);
    v9 = a1[15];
    a1[19] = v8;
    a1[2] = v8;
    v10 = a1[20];
    a1[1] = v9;
    a1[3] = v10;
    *((_BYTE *)a1 + 84) = 0;
  }
  else
  {
    v22 = 0;
    if ( *((_BYTE *)a1 + 70) != 0 )
    {
      if ( (*(int (__fastcall **)(_DWORD *, int))(*a1 + 52))(a1, -1) == -1 )
        return v22;
      v20 = a1[15];
      a1[1] = v20;
      a1[2] = v20;
      a1[3] = v20;
      a1[5] = 0;
      a1[4] = 0;
      a1[6] = 0;
      *((_BYTE *)a1 + 70) = 0;
    }
  }
  v11 = a1[11];
  v12 = a1[16];
  if ( v12 <= 1 )
    v13 = 1;
  else
    v13 = v12 - 1;
  if ( a3 <= v13 )
    goto LABEL_26;
  v14 = a1[22];
  if ( v14 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v14 + 24))(v14) != 0 && (v11 & 8) != 0 )
  {
    v15 = (const wchar_t *)a1[2];
    v16 = a1[3];
    v17 = (v16 - (int)v15) >> 2;
    if ( v17 != 0 )
    {
      j_wmemcpy(v3, v15, (v16 - (int)v15) >> 2);
      v3 += v17;
      v22 += v17;
      a3 -= v17;
      a1[2] += 4 * v17;
    }
    while ( 1 )
    {
      v18 = sub_3A6A38((int)(a1 + 9), v3, a3);
      if ( v18 == -1 )
        sub_3BD280("basic_filebuf::xsgetn error reading the file");
      if ( v18 == 0 )
        break;
      a3 -= v18;
      v22 += v18;
      if ( a3 == 0 )
        goto LABEL_29;
      v3 += v18;
    }
    if ( a3 != 0 )
    {
      v19 = a1[15];
      a1[1] = v19;
      a1[2] = v19;
      a1[3] = v19;
      a1[5] = 0;
      a1[4] = 0;
      a1[6] = 0;
      *((_BYTE *)a1 + 69) = 0;
      return v22;
    }
LABEL_29:
    v23 = a1[11];
    v24 = a1[15];
    a1[1] = v24;
    a1[2] = v24;
    a1[3] = v24;
    if ( (v23 & 0x10) != 0 && (unsigned int)(v25 = a1[16]) > 1 )
    {
      a1[5] = v24;
      a1[4] = v24;
      a1[6] = v24 + 4 * (v25 + 0x3FFFFFFF);
    }
    else
    {
      a1[5] = 0;
      a1[4] = 0;
      a1[6] = 0;
    }
    *((_BYTE *)a1 + 69) = 1;
  }
  else
  {
LABEL_26:
    v22 += sub_39245C(a1, v3, a3);
  }
  return v22;
}


//======================================================================
// sub_3B92E4
// address: 0x003B92E4   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3B92E4(int result)
{
  if ( *(_BYTE *)(result + 80) == 0 )
  {
    *(_DWORD *)(result + 72) = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 76) = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 4) = result + 71;
    *(_DWORD *)(result + 8) = result + 71;
    *(_DWORD *)(result + 12) = result + 72;
    *(_BYTE *)(result + 80) = 1;
  }
  return result;
}


//======================================================================
// sub_3B9308
// address: 0x003B9308   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_3B9308(int result)
{
  int v1; // r4
  int v2; // r2
  int v3; // r1

  if ( *(_BYTE *)(result + 80) != 0 )
  {
    v1 = *(_DWORD *)(result + 60);
    v2 = *(_DWORD *)(result + 72) + (*(_DWORD *)(result + 8) != *(_DWORD *)(result + 4));
    *(_DWORD *)(result + 72) = v2;
    *(_DWORD *)(result + 8) = v2;
    v3 = *(_DWORD *)(result + 76);
    *(_DWORD *)(result + 4) = v1;
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 80) = 0;
  }
  return result;
}


//======================================================================
// sub_3B9334
// address: 0x003B9334   size: 0x94 (148 bytes)
//======================================================================
int __fastcall sub_3B9334(int a1)
{
  int v1; // r7

  v1 = a1 + 28;
  *(_DWORD *)a1 = &off_464358;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  sub_3A6688((_DWORD *)(a1 + 28));
  *(_DWORD *)a1 = &off_465978;
  *(_DWORD *)(a1 + 32) = 0;
  sub_3A691C(a1 + 36);
  *(_DWORD *)(a1 + 64) = 1024;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 69) = 0;
  *(_BYTE *)(a1 + 70) = 0;
  *(_BYTE *)(a1 + 71) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  if ( sub_396078(v1) )
    *(_DWORD *)(a1 + 84) = sub_395178(v1);
  return a1;
}


//======================================================================
// sub_3B93E4
// address: 0x003B93E4   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3B93E4(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 36));
}


//======================================================================
// sub_3B93F0
// address: 0x003B93F0   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall sub_3B93F0(_DWORD *result)
{
  _DWORD *v1; // r4

  v1 = result;
  if ( *((_BYTE *)result + 68) == 0 && result[15] == 0 )
  {
    result = operator new[](result[16]);
    v1[15] = result;
    *((_BYTE *)v1 + 68) = 1;
  }
  return result;
}


//======================================================================
// sub_3B9414
// address: 0x003B9414   size: 0x34 (52 bytes)
//======================================================================
void __fastcall sub_3B9414(int a1)
{
  void *v2; // r0
  void *v3; // r0

  if ( *(_BYTE *)(a1 + 68) != 0 )
  {
    v2 = *(void **)(a1 + 60);
    if ( v2 != nullptr )
      operator delete[](v2);
    *(_DWORD *)(a1 + 60) = 0;
    *(_BYTE *)(a1 + 68) = 0;
  }
  v3 = *(void **)(a1 + 88);
  if ( v3 != nullptr )
    operator delete[](v3);
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
}


//======================================================================
// sub_3B9448
// address: 0x003B9448   size: 0x34 (52 bytes)
//======================================================================
int *__fastcall sub_3B9448(int *a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r2
  int v5; // r2

  v2 = *a1;
  *(_DWORD *)(v2 + 44) = 0;
  *(_BYTE *)(v2 + 80) = 0;
  sub_3B9414(v2);
  v3 = *a1;
  *(_BYTE *)(v3 + 69) = 0;
  *(_BYTE *)(v3 + 70) = 0;
  v4 = *(_DWORD *)(v3 + 60);
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v4;
  *(_DWORD *)(v3 + 12) = v4;
  v5 = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 52) = v5;
  *(_DWORD *)(v3 + 56) = v5;
  return a1;
}


//======================================================================
// sub_3B947C
// address: 0x003B947C   size: 0x102 (258 bytes)
//======================================================================
bool __fastcall sub_3B947C(int a1, char *a2, size_t a3)
{
  int v4; // r0
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  char v10; // r9
  int v11; // r0
  char v13[4]; // [sp+10h] [bp+0h] BYREF
  int *v14; // [sp+14h] [bp+4h]
  int v15; // [sp+18h] [bp+8h] BYREF
  _DWORD v16[2]; // [sp+1Ch] [bp+Ch] BYREF

  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 24))(v4) != 0 )
    goto LABEL_6;
  v7 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 84) + 32))(*(_DWORD *)(a1 + 84));
  v8 = **(_DWORD **)(a1 + 84);
  v14 = &v15;
  v9 = (*(int (__fastcall **)(_DWORD, int, char *, char *, _DWORD *, char *, char *, int *))(v8 + 8))(
         *(_DWORD *)(a1 + 84),
         a1 + 52,
         a2,
         &a2[a3],
         v16,
         v13,
         &v13[v7 * a3],
         &v15);
  v10 = v9;
  if ( v9 > 1 )
  {
    if ( v9 == 3 )
    {
LABEL_6:
      v11 = sub_3A6A64(a1 + 36, a2, a3);
      return v11 == a3;
    }
LABEL_12:
    sub_3BD280("basic_filebuf::_M_convert_to_external conversion error");
  }
  a3 = v15 - (_DWORD)v13;
  v11 = sub_3A6A64(a1 + 36, v13, v15 - (_DWORD)v13);
  if ( a3 == v11 && (v10 & 1) != 0 )
  {
    if ( (*(int (__fastcall **)(_DWORD, int, _DWORD, _DWORD, _DWORD *, char *, char *, int *))(**(_DWORD **)(a1 + 84) + 8))(
           *(_DWORD *)(a1 + 84),
           a1 + 52,
           v16[0],
           *(_DWORD *)(a1 + 20),
           v16,
           v13,
           &v13[a3],
           &v15) != 2 )
    {
      a3 = v15 - (_DWORD)v13;
      v11 = sub_3A6A64(a1 + 36, v13, v15 - (_DWORD)v13);
      return v11 == a3;
    }
    goto LABEL_12;
  }
  return v11 == a3;
}


//======================================================================
// sub_3B9584
// address: 0x003B9584   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_3B9584(int a1, int a2)
{
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 84) + 24))(*(_DWORD *)(a1 + 84)) != 0 )
    return *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 12);
  else
    return *(_DWORD *)(a1 + 88)
         + (*(int (__fastcall **)(_DWORD, int, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 84) + 28))(
             *(_DWORD *)(a1 + 84),
             a2,
             *(_DWORD *)(a1 + 88),
             *(_DWORD *)(a1 + 96),
             *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4))
         - *(_DWORD *)(a1 + 100);
}


//======================================================================
// sub_3B95C4
// address: 0x003B95C4   size: 0xC0 (192 bytes)
//======================================================================
bool __fastcall sub_3B95C4(int a1)
{
  _BOOL4 v1; // r4
  int v3; // r0
  int v4; // r9
  unsigned int v5; // r0
  unsigned int v6; // r4
  int v8; // [sp+Ch] [bp-84h] BYREF
  char v9[128]; // [sp+10h] [bp-80h] BYREF
  char vars0; // [sp+90h] [bp+0h] BYREF

  v1 = true;
  if ( *(_DWORD *)(a1 + 16) < *(_DWORD *)(a1 + 20) )
    v1 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1) != -1;
  if ( *(_BYTE *)(a1 + 70) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 84);
    if ( v3 == 0 )
      sub_3BCEE4(0);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3) == 0 && v1 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = (*(int (__fastcall **)(_DWORD, int, char *, char *, int *))(**(_DWORD **)(a1 + 84) + 12))(
               *(_DWORD *)(a1 + 84),
               a1 + 52,
               v9,
               &vars0,
               &v8);
        v6 = v5;
        if ( v5 == 2 )
          break;
        if ( v5 <= 1 )
        {
          v4 = v8 - (_DWORD)v9;
          if ( v8 - (int)v9 <= 0 )
            return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1) != -1;
          if ( v4 != sub_3A6A64(a1 + 36, v9, v8 - (_DWORD)v9) )
            break;
        }
        if ( v4 <= 0 || v6 != 1 )
          return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1) != -1;
      }
      return false;
    }
  }
  return v1;
}


//======================================================================
// sub_3B9684
// address: 0x003B9684   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_3B9684(int a1)
{
  int v1; // r6
  _BOOL4 v3; // r7
  int v4; // r2
  int v5; // r2

  v1 = a1 + 36;
  if ( !sub_3A69D8((_DWORD *)(a1 + 36)) )
    return 0;
  v3 = !sub_3B95C4(a1);
  *(_DWORD *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 80) = 0;
  sub_3B9414(a1);
  *(_BYTE *)(a1 + 69) = 0;
  *(_BYTE *)(a1 + 70) = 0;
  v4 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 4) = v4;
  *(_DWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 12) = v4;
  v5 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 52) = v5;
  *(_DWORD *)(a1 + 56) = v5;
  if ( sub_3A69EC(v1) == 0 )
    return 0;
  if ( !v3 )
    return a1;
  else
    return 0;
}


//======================================================================
// sub_3B971C
// address: 0x003B971C   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3B971C(_DWORD *a1)
{
  *a1 = &off_465978;
  sub_3B9684((int)a1);
  sub_3A6A2C((int)(a1 + 9));
  *a1 = &off_464358;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_3B9754
// address: 0x003B9754   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_3B9754(int a1, const char *a2, int a3)
{
  _DWORD *v3; // r6
  int v7; // r3
  int v8; // r3
  _DWORD v10[4]; // [sp+8h] [bp-10h] BYREF

  v3 = (_DWORD *)(a1 + 36);
  if ( sub_3A69D8((_DWORD *)(a1 + 36)) )
    return 0;
  sub_3A69A8((int)v3, a2, a3);
  if ( !sub_3A69D8(v3) )
    return 0;
  sub_3B93F0((_DWORD *)a1);
  *(_DWORD *)(a1 + 44) = a3;
  *(_BYTE *)(a1 + 69) = 0;
  *(_BYTE *)(a1 + 70) = 0;
  v7 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = v7;
  v8 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 52) = v8;
  *(_DWORD *)(a1 + 56) = v8;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  if ( (a3 & 2) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int, int))(*(_DWORD *)a1 + 16))(v10, a1, 0, 0, 2, a3);
    if ( v10[0] == -1 && v10[1] == -1 )
    {
      sub_3B9684(a1);
      return 0;
    }
  }
  return a1;
}


//======================================================================
// sub_3B97E4
// address: 0x003B97E4   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3B97E4(int a1, const char **a2, int a3)
{
  return sub_3B9754(a1, *a2, a3);
}


//======================================================================
// sub_3B97F0
// address: 0x003B97F0   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_3B97F0(_DWORD *a1)
{
  *a1 = &off_465978;
  sub_3B9684((int)a1);
  sub_3A6A2C((int)(a1 + 9));
  *a1 = &off_464358;
  sub_3A8980(a1 + 7);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3B982C
// address: 0x003B982C   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall sub_3B982C(_DWORD *a1)
{
  a1[27] = &off_465A68;
  *a1 = &off_465A54;
  a1[1] = &off_465978;
  sub_3B9684((int)(a1 + 1));
  sub_3A6A2C((int)(a1 + 10));
  a1[1] = &off_464358;
  sub_3A8980(a1 + 8);
  *a1 = &off_465A1C;
  a1[27] = &off_464320;
  sub_392FE4(a1 + 27);
  return a1;
}


//======================================================================
// sub_3B9898
// address: 0x003B9898   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9898(_DWORD *a1)
{
  return sub_3B982C((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B98A8
// address: 0x003B98A8   size: 0x5C (92 bytes)
//======================================================================
_DWORD *__fastcall sub_3B98A8(_DWORD *a1)
{
  a1[28] = &off_465A08;
  *a1 = &off_4659F4;
  a1[2] = &off_465978;
  sub_3B9684((int)(a1 + 2));
  sub_3A6A2C((int)(a1 + 11));
  a1[2] = &off_464358;
  sub_3A8980(a1 + 9);
  *a1 = &off_4659BC;
  a1[1] = 0;
  a1[28] = &off_464320;
  sub_392FE4(a1 + 28);
  return a1;
}


//======================================================================
// sub_3B9918
// address: 0x003B9918   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9918(_DWORD *a1)
{
  return sub_3B98A8((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B9928
// address: 0x003B9928   size: 0x62 (98 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9928(_DWORD *a1)
{
  a1[28] = &off_465A08;
  *a1 = &off_4659F4;
  a1[2] = &off_465978;
  sub_3B9684((int)(a1 + 2));
  sub_3A6A2C((int)(a1 + 11));
  a1[2] = &off_464358;
  sub_3A8980(a1 + 9);
  *a1 = &off_4659BC;
  a1[1] = 0;
  a1[28] = &off_464320;
  sub_392FE4(a1 + 28);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3B99A0
// address: 0x003B99A0   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B99A0(_DWORD *a1)
{
  return sub_3B9928((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B99B0
// address: 0x003B99B0   size: 0x5E (94 bytes)
//======================================================================
_DWORD *__fastcall sub_3B99B0(_DWORD *a1)
{
  a1[27] = &off_465A68;
  *a1 = &off_465A54;
  a1[1] = &off_465978;
  sub_3B9684((int)(a1 + 1));
  sub_3A6A2C((int)(a1 + 10));
  a1[1] = &off_464358;
  sub_3A8980(a1 + 8);
  *a1 = &off_465A1C;
  a1[27] = &off_464320;
  sub_392FE4(a1 + 27);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3B9A24
// address: 0x003B9A24   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9A24(_DWORD *a1)
{
  return sub_3B99B0((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B9A34
// address: 0x003B9A34   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9A34(_DWORD *a1)
{
  *a1 = &off_465B34;
  a1[2] = &off_465B48;
  a1[29] = &off_465B5C;
  a1[3] = &off_465978;
  sub_3B9684((int)(a1 + 3));
  sub_3A6A2C((int)(a1 + 12));
  a1[3] = &off_464358;
  sub_3A8980(a1 + 10);
  a1[2] = &off_465A7C;
  *a1 = &off_465AA4;
  a1[1] = 0;
  a1[29] = &off_464320;
  sub_392FE4(a1 + 29);
  return a1;
}


//======================================================================
// sub_3B9ACC
// address: 0x003B9ACC   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9ACC(_DWORD *a1)
{
  return sub_3B9A34((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B9ADC
// address: 0x003B9ADC   size: 0x70 (112 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9ADC(_DWORD *a1)
{
  *a1 = &off_465B34;
  a1[2] = &off_465B48;
  a1[29] = &off_465B5C;
  a1[3] = &off_465978;
  sub_3B9684((int)(a1 + 3));
  sub_3A6A2C((int)(a1 + 12));
  a1[3] = &off_464358;
  sub_3A8980(a1 + 10);
  a1[2] = &off_465A7C;
  *a1 = &off_465AA4;
  a1[1] = 0;
  a1[29] = &off_464320;
  sub_392FE4(a1 + 29);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3B9B78
// address: 0x003B9B78   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9B78(_DWORD *a1)
{
  return sub_3B9ADC((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3B9B88
// address: 0x003B9B88   size: 0x6E (110 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9B88(_DWORD *a1, int a2, __int64 a3, int whence, int a5)
{
  __int64 v9; // r0
  int v10; // r2
  int v11; // r2

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( sub_3B95C4(a2) )
  {
    v9 = sub_3A6AF0(a2 + 36, a3, whence);
    if ( v9 != -1 )
    {
      *(_BYTE *)(a2 + 69) = 0;
      *(_BYTE *)(a2 + 70) = 0;
      v10 = *(_DWORD *)(a2 + 88);
      *(_DWORD *)(a2 + 100) = v10;
      *(_DWORD *)(a2 + 96) = v10;
      *(_DWORD *)(a2 + 20) = 0;
      v11 = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      *(_DWORD *)(a2 + 4) = v11;
      *(_DWORD *)(a2 + 8) = v11;
      *(_DWORD *)(a2 + 12) = v11;
      *(_DWORD *)(a2 + 52) = a5;
      *(_QWORD *)a1 = v9;
      a1[2] = a5;
    }
  }
  return a1;
}


//======================================================================
// sub_3B9BF8
// address: 0x003B9BF8   size: 0x12C (300 bytes)
//======================================================================
int __fastcall sub_3B9BF8(int a1, int a2)
{
  char *v4; // r1
  char *v5; // r2
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  int v11; // r2
  int v12; // r0
  int v13; // r2
  int v14; // r1
  int v15; // r2
  int v16; // r3
  int v17; // r2
  _DWORD v18[5]; // [sp+8h] [bp-14h] BYREF

  if ( (*(_DWORD *)(a1 + 44) & 0x10) == 0 )
    return -1;
  if ( *(_BYTE *)(a1 + 69) != 0 )
  {
    if ( *(_BYTE *)(a1 + 80) != 0 )
    {
      v12 = *(_DWORD *)(a1 + 60);
      v13 = *(_DWORD *)(a1 + 72) + (*(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 4));
      *(_DWORD *)(a1 + 72) = v13;
      *(_DWORD *)(a1 + 8) = v13;
      v14 = *(_DWORD *)(a1 + 76);
      *(_DWORD *)(a1 + 4) = v12;
      *(_DWORD *)(a1 + 12) = v14;
      *(_BYTE *)(a1 + 80) = 0;
    }
    v8 = sub_3B9584(a1, a1 + 56);
    sub_3B9B88(v18, a1, v8, 1, *(_DWORD *)(a1 + 56));
    if ( v18[0] == -1 && v18[1] == -1 )
      return -1;
  }
  v4 = *(char **)(a1 + 16);
  v5 = *(char **)(a1 + 20);
  if ( v4 < v5 )
  {
    if ( a2 != -1 )
    {
      *v5 = a2;
      v4 = *(char **)(a1 + 16);
      v5 = (char *)(*(_DWORD *)(a1 + 20) + 1);
      *(_DWORD *)(a1 + 20) = v5;
    }
    if ( !sub_3B947C(a1, v4, v5 - v4) )
      return -1;
    v15 = *(_DWORD *)(a1 + 44);
    v16 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v16;
    *(_DWORD *)(a1 + 8) = v16;
    *(_DWORD *)(a1 + 12) = v16;
    if ( (v15 & 0x10) != 0 && (unsigned int)(v17 = *(_DWORD *)(a1 + 64)) > 1 )
    {
      *(_DWORD *)(a1 + 20) = v16;
      *(_DWORD *)(a1 + 16) = v16;
      *(_DWORD *)(a1 + 24) = v16 + v17 - 1;
    }
    else
    {
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
    }
    return a2 != -1 ? a2 : 0;
  }
  v9 = *(_DWORD *)(a1 + 64);
  if ( v9 > 1 )
  {
    v10 = *(_DWORD *)(a1 + 44) & 0x10;
    v11 = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 4) = v11;
    *(_DWORD *)(a1 + 8) = v11;
    *(_DWORD *)(a1 + 12) = v11;
    if ( v10 != 0 )
    {
      *(_DWORD *)(a1 + 20) = v11;
      *(_DWORD *)(a1 + 16) = v11;
      *(_DWORD *)(a1 + 24) = v11 + v9 - 1;
    }
    else
    {
      *(_DWORD *)(a1 + 20) = 0;
      *(_DWORD *)(a1 + 16) = 0;
      *(_DWORD *)(a1 + 24) = 0;
    }
    *(_BYTE *)(a1 + 70) = 1;
    if ( a2 != -1 )
      *(_BYTE *)(*(_DWORD *)(a1 + 20))++ = a2;
    return a2 != -1 ? a2 : 0;
  }
  LOBYTE(v18[0]) = a2;
  if ( a2 == -1 || sub_3B947C(a1, (char *)v18, 1u) )
  {
    *(_BYTE *)(a1 + 70) = 1;
    return a2 != -1 ? a2 : 0;
  }
  return -1;
}


//======================================================================
// sub_3B9D24
// address: 0x003B9D24   size: 0x16E (366 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9D24(_DWORD *a1, int a2, unsigned int a3, unsigned int a4, int whence)
{
  int v6; // r0
  int v10; // r0
  int v11; // r9
  int v12; // r2
  int v13; // r1
  int v14; // r2
  __int64 v15; // r4
  __int64 v16; // r0
  __int64 v17; // r4
  int v18; // r0
  unsigned int v20; // r9
  int v21; // r4
  int v22; // [sp+Ch] [bp-18h] BYREF
  _DWORD v23[5]; // [sp+10h] [bp-14h] BYREF

  v6 = *(_DWORD *)(a2 + 84);
  if ( v6 != 0 )
  {
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6);
    v21 = v10;
    if ( v10 < 0 )
    {
      LOBYTE(v20) = 1;
      v21 = 0;
    }
    else
    {
      v20 = ((v10 - 1) | (unsigned int)v10) >> 31;
    }
  }
  else
  {
    LOBYTE(v20) = 1;
    v21 = 0;
  }
  *(_QWORD *)a1 = -1;
  a1[2] = 0;
  if ( sub_3A69D8((_DWORD *)(a2 + 36)) && (((a4 | a3) != 0) & (unsigned __int8)v20) == 0 )
  {
    if ( (a4 | a3) == 0
      && whence == 1
      && (*(_BYTE *)(a2 + 70) == 0
       || (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 84) + 24))(*(_DWORD *)(a2 + 84)) != 0) )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      if ( *(_BYTE *)(a2 + 80) != 0 )
      {
        v12 = *(_DWORD *)(a2 + 72) + (*(_DWORD *)(a2 + 8) != *(_DWORD *)(a2 + 4));
        *(_DWORD *)(a2 + 72) = v12;
        v13 = *(_DWORD *)(a2 + 60);
        *(_DWORD *)(a2 + 8) = v12;
        v14 = *(_DWORD *)(a2 + 76);
        *(_DWORD *)(a2 + 4) = v13;
        *(_DWORD *)(a2 + 12) = v14;
        *(_BYTE *)(a2 + 80) = 0;
      }
    }
    v22 = *(_DWORD *)(a2 + 48);
    v15 = v21 * __PAIR64__(a4, a3);
    if ( *(_BYTE *)(a2 + 69) != 0 && whence == 1 )
    {
      v22 = *(_DWORD *)(a2 + 56);
      v15 += sub_3B9584(a2, (int)&v22);
    }
    if ( v11 != 0 )
    {
      if ( *(_BYTE *)(a2 + 70) != 0 )
        v15 = *(_DWORD *)(a2 + 20) - *(_DWORD *)(a2 + 16);
      v16 = sub_3A6AF0(a2 + 36, 0, 1);
      if ( v16 != -1 )
      {
        v17 = v15 + v16;
        v18 = v22;
        *(_QWORD *)a1 = v17;
        a1[2] = v18;
      }
    }
    else
    {
      sub_3B9B88(v23, a2, v15, whence, v22);
      j_memcpy(a1, v23, 0xCu);
    }
  }
  return a1;
}


//======================================================================
// sub_3B9E94
// address: 0x003B9E94   size: 0x7A (122 bytes)
//======================================================================
_DWORD *__fastcall sub_3B9E94(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v8; // r2
  int v9; // r1
  int v10; // r2
  _DWORD v11[4]; // [sp+8h] [bp-10h] BYREF
  __int64 varg_r2; // [sp+28h] [bp+10h]

  *(_QWORD *)a1 = -1;
  a1[2] = 0;
  if ( sub_3A69D8((_DWORD *)(a2 + 36)) )
  {
    if ( *(_BYTE *)(a2 + 80) != 0 )
    {
      v8 = *(_DWORD *)(a2 + 72) + (*(_DWORD *)(a2 + 8) != *(_DWORD *)(a2 + 4));
      *(_DWORD *)(a2 + 72) = v8;
      v9 = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a2 + 8) = v8;
      v10 = *(_DWORD *)(a2 + 76);
      *(_DWORD *)(a2 + 4) = v9;
      *(_DWORD *)(a2 + 12) = v10;
      *(_BYTE *)(a2 + 80) = 0;
    }
    sub_3B9B88(v11, a2, varg_r2, 0, a5);
    j_memcpy(a1, v11, 0xCu);
  }
  return a1;
}


//======================================================================
// sub_3B9F10
// address: 0x003B9F10   size: 0x11C (284 bytes)
//======================================================================
int __fastcall sub_3B9F10(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r3
  int v8; // r6
  const void *v9; // r1
  size_t v10; // r6
  size_t v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r3
  void *v15; // r5
  _DWORD v16[5]; // [sp+8h] [bp-14h] BYREF

  if ( sub_396078(a2) )
    v15 = sub_395178(a2);
  else
    v15 = nullptr;
  result = sub_3A69D8((_DWORD *)(a1 + 36));
  if ( result == 0 || *(_BYTE *)(a1 + 69) == 0 && *(_BYTE *)(a1 + 70) == 0 )
    goto LABEL_5;
  v5 = *(_DWORD *)(a1 + 84);
  if ( v5 == 0 )
    goto LABEL_24;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) + 1;
  if ( result != 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 69);
    if ( *(_BYTE *)(a1 + 69) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 84);
      if ( v5 != 0 )
      {
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
        if ( result != 0 )
        {
          if ( v15 != nullptr )
          {
            result = (*(int (__fastcall **)(void *))(*(_DWORD *)v15 + 24))(v15);
            if ( result == 0 )
            {
              result = (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 16))(
                         v16,
                         a1,
                         0,
                         0,
                         1,
                         *(_DWORD *)(a1 + 44));
              if ( (v16[1] & v16[0]) == -1 )
                goto LABEL_15;
            }
          }
        }
        else
        {
          v8 = *(_DWORD *)(a1 + 88);
          result = (*(int (__fastcall **)(_DWORD, int, int, _DWORD, int))(**(_DWORD **)(a1 + 84) + 28))(
                     *(_DWORD *)(a1 + 84),
                     a1 + 56,
                     v8,
                     *(_DWORD *)(a1 + 96),
                     *(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4));
          v9 = (const void *)(v8 + result);
          v10 = *(_DWORD *)(a1 + 100) - (v8 + result);
          *(_DWORD *)(a1 + 96) = v9;
          v11 = 0;
          if ( v10 != 0 )
          {
            result = (int)j_memmove(*(void **)(a1 + 88), v9, v10);
            v11 = v10;
          }
          v12 = *(_DWORD *)(a1 + 88);
          *(_DWORD *)(a1 + 96) = v12;
          *(_DWORD *)(a1 + 100) = v12 + v11;
          v13 = *(_DWORD *)(a1 + 60);
          *(_DWORD *)(a1 + 4) = v13;
          *(_DWORD *)(a1 + 8) = v13;
          *(_DWORD *)(a1 + 12) = v13;
          *(_DWORD *)(a1 + 20) = 0;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = 0;
          v14 = *(_DWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 52) = v14;
          *(_DWORD *)(a1 + 56) = v14;
        }
LABEL_5:
        *(_DWORD *)(a1 + 84) = v15;
        return result;
      }
LABEL_24:
      sub_3BCEE4(v5);
    }
    if ( *(_BYTE *)(a1 + 70) == 0 )
      goto LABEL_5;
    result = sub_3B95C4(a1);
    if ( result != 0 )
    {
      v7 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 4) = v7;
      *(_DWORD *)(a1 + 8) = v7;
      *(_DWORD *)(a1 + 12) = v7;
      *(_DWORD *)(a1 + 20) = v6;
      *(_DWORD *)(a1 + 16) = v6;
      *(_DWORD *)(a1 + 24) = v6;
      goto LABEL_5;
    }
  }
LABEL_15:
  *(_DWORD *)(a1 + 84) = 0;
  return result;
}


//======================================================================
// sub_3BA02C
// address: 0x003BA02C   size: 0x48 (72 bytes)
//======================================================================
_DWORD *__fastcall sub_3BA02C(_DWORD *result, int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int v4; // r3
  int v5; // r2

  v2 = result[11];
  v3 = (unsigned int)(v2 << 27) >> 31;
  if ( (v2 & 8) != 0 && a2 > 0 )
  {
    v4 = result[15];
    result[1] = v4;
    result[2] = v4;
    result[3] = v4 + a2;
  }
  else
  {
    v4 = result[15];
    result[1] = v4;
    result[2] = v4;
    result[3] = v4;
  }
  if ( v3 == 0 || a2 != 0 || (unsigned int)(v5 = result[16]) <= 1 )
  {
    result[5] = 0;
    result[4] = 0;
    result[6] = 0;
  }
  else
  {
    result[5] = v4;
    result[4] = v4;
    result[6] = v4 + v5 - 1;
  }
  return result;
}


//======================================================================
// sub_3BA074
// address: 0x003BA074   size: 0x48 (72 bytes)
//======================================================================
int *__fastcall sub_3BA074(int *a1, int *a2)
{
  _DWORD *v2; // r3
  int v5; // r3

  v2 = (_DWORD *)a2[1];
  *a1 = (int)v2;
  v2 -= 3;
  *(int *)((char *)a1 + *v2) = a2[2];
  a1[1] = 0;
  sub_391734((int)a1 + *v2, 0);
  v5 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v5 - 12)) = a2[3];
  sub_3B9334((int)(a1 + 2));
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  return a1;
}


//======================================================================
// sub_3BA0D8
// address: 0x003BA0D8   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_3BA0D8(int a1)
{
  int v1; // r5

  v1 = a1 + 112;
  sub_392DEC((_DWORD *)(a1 + 112));
  *(_DWORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 229) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_4659BC;
  *(_DWORD *)(a1 + 112) = &off_4659D0;
  sub_391734(v1, 0);
  *(_DWORD *)a1 = &off_4659F4;
  *(_DWORD *)(a1 + 112) = &off_465A08;
  sub_3B9334(a1 + 8);
  sub_391734(v1, a1 + 8);
  return a1;
}


//======================================================================
// sub_3BA17C
// address: 0x003BA17C   size: 0x84 (132 bytes)
//======================================================================
int *__fastcall sub_3BA17C(int *a1, int *a2, const char *a3, int a4)
{
  _DWORD *v5; // r0
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r3

  v5 = (_DWORD *)a2[1];
  *a1 = (int)v5;
  v5 -= 3;
  *(int *)((char *)a1 + *v5) = a2[2];
  a1[1] = 0;
  sub_391734((int)a1 + *v5, 0);
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[3];
  sub_3B9334((int)(a1 + 2));
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  v10 = sub_3B9754((int)(a1 + 2), a3, a4 | 8);
  v11 = (_DWORD *)(*a1 - 12);
  if ( v10 != 0 )
    sub_3914B0((int *)((char *)a1 + *v11), 0);
  else
    sub_3914B0((int *)((char *)a1 + *v11), *(int *)((char *)a1 + *v11 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BA21C
// address: 0x003BA21C   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_3BA21C(int a1, const char *a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 112;
  sub_392DEC((_DWORD *)(a1 + 112));
  *(_DWORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 229) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 112) = &off_4659D0;
  *(_DWORD *)a1 = &off_4659BC;
  *(_DWORD *)(a1 + 4) = 0;
  sub_391734(v3, 0);
  *(_DWORD *)a1 = &off_4659F4;
  *(_DWORD *)(a1 + 112) = &off_465A08;
  sub_3B9334(a1 + 8);
  sub_391734(v3, a1 + 8);
  v7 = sub_3B9754(a1 + 8, a2, a3 | 8);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_3914B0((_DWORD *)(a1 + *v8), 0);
  else
    sub_3914B0((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BA2FC
// address: 0x003BA2FC   size: 0x84 (132 bytes)
//======================================================================
int *__fastcall sub_3BA2FC(int *a1, int *a2, const char **a3, int a4)
{
  _DWORD *v5; // r1
  int v9; // r1
  int v10; // r0
  _DWORD *v11; // r3

  v5 = (_DWORD *)a2[1];
  *a1 = (int)v5;
  v5 -= 3;
  *(int *)((char *)a1 + *v5) = a2[2];
  a1[1] = 0;
  sub_391734((int)a1 + *v5, 0);
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[3];
  sub_3B9334((int)(a1 + 2));
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  v10 = sub_3B9754((int)(a1 + 2), *a3, a4 | 8);
  v11 = (_DWORD *)(*a1 - 12);
  if ( v10 != 0 )
    sub_3914B0((int *)((char *)a1 + *v11), 0);
  else
    sub_3914B0((int *)((char *)a1 + *v11), *(int *)((char *)a1 + *v11 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BA39C
// address: 0x003BA39C   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_3BA39C(int a1, const char **a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 112;
  sub_392DEC((_DWORD *)(a1 + 112));
  *(_DWORD *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 229) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 112) = &off_4659D0;
  *(_DWORD *)a1 = &off_4659BC;
  *(_DWORD *)(a1 + 4) = 0;
  sub_391734(v3, 0);
  *(_DWORD *)a1 = &off_4659F4;
  *(_DWORD *)(a1 + 112) = &off_465A08;
  sub_3B9334(a1 + 8);
  sub_391734(v3, a1 + 8);
  v7 = sub_3B9754(a1 + 8, *a2, a3 | 8);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_3914B0((_DWORD *)(a1 + *v8), 0);
  else
    sub_3914B0((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BA47C
// address: 0x003BA47C   size: 0x4E (78 bytes)
//======================================================================
int *__fastcall sub_3BA47C(int *a1, int *a2)
{
  int v2; // r3
  int v5; // r3

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[3];
  a1[2] = (int)&off_465978;
  sub_3B9684((int)(a1 + 2));
  sub_3A6A2C((int)(a1 + 11));
  a1[2] = (int)&off_464358;
  sub_3A8980(a1 + 9);
  v5 = a2[1];
  *a1 = v5;
  *(int *)((char *)a1 + *(_DWORD *)(v5 - 12)) = a2[2];
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_3BA4D4
// address: 0x003BA4D4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BA4D4(int a1)
{
  return a1 + 8;
}


//======================================================================
// sub_3BA4D8
// address: 0x003BA4D8   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BA4D8(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 44));
}


//======================================================================
// sub_3BA4E4
// address: 0x003BA4E4   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BA4E4(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 44));
}


//======================================================================
// sub_3BA4F0
// address: 0x003BA4F0   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3BA4F0(_DWORD *a1, const char *a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3B9754((int)(a1 + 2), a2, a3 | 8);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BA524
// address: 0x003BA524   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_3BA524(_DWORD *a1, const char **a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3B9754((int)(a1 + 2), *a2, a3 | 8);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BA558
// address: 0x003BA558   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BA558(_DWORD *a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_3B9684((int)(a1 + 2));
  if ( result == nullptr )
    return sub_3914B0(
             (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
             *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  return result;
}


//======================================================================
// sub_3BA57C
// address: 0x003BA57C   size: 0x40 (64 bytes)
//======================================================================
int *__fastcall sub_3BA57C(int *a1, int *a2)
{
  int v2; // r3
  _DWORD *v4; // r0
  int v6; // r3

  v2 = a2[1];
  *a1 = v2;
  v4 = (int *)((char *)a1 + *(_DWORD *)(v2 - 12));
  *v4 = a2[2];
  sub_391734((int)v4, 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v6 - 12)) = a2[3];
  sub_3B9334((int)(a1 + 1));
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  return a1;
}


//======================================================================
// sub_3BA5D4
// address: 0x003BA5D4   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_3BA5D4(int a1)
{
  int v1; // r5

  v1 = a1 + 108;
  sub_392DEC((_DWORD *)(a1 + 108));
  *(_DWORD *)(a1 + 220) = 0;
  *(_BYTE *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 225) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)a1 = &off_465A1C;
  *(_DWORD *)(a1 + 108) = &off_465A30;
  sub_391734(v1, 0);
  *(_DWORD *)a1 = &off_465A54;
  *(_DWORD *)(a1 + 108) = &off_465A68;
  sub_3B9334(a1 + 4);
  sub_391734(v1, a1 + 4);
  return a1;
}


//======================================================================
// sub_3BA670
// address: 0x003BA670   size: 0x7C (124 bytes)
//======================================================================
int *__fastcall sub_3BA670(int *a1, int *a2, const char *a3, int a4)
{
  int v5; // r0
  _DWORD *v6; // r0
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r3

  v5 = a2[1];
  *a1 = v5;
  v6 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12));
  *v6 = a2[2];
  sub_391734((int)v6, 0);
  v10 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v10 - 12)) = a2[3];
  sub_3B9334((int)(a1 + 1));
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  v11 = sub_3B9754((int)(a1 + 1), a3, a4 | 0x10);
  v12 = (_DWORD *)(*a1 - 12);
  if ( v11 != 0 )
    sub_3914B0((int *)((char *)a1 + *v12), 0);
  else
    sub_3914B0((int *)((char *)a1 + *v12), *(int *)((char *)a1 + *v12 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BA704
// address: 0x003BA704   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_3BA704(int a1, const char *a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 108;
  sub_392DEC((_DWORD *)(a1 + 108));
  *(_DWORD *)(a1 + 220) = 0;
  *(_BYTE *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 225) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)a1 = &off_465A1C;
  *(_DWORD *)(a1 + 108) = &off_465A30;
  sub_391734(v3, 0);
  *(_DWORD *)a1 = &off_465A54;
  *(_DWORD *)(a1 + 108) = &off_465A68;
  sub_3B9334(a1 + 4);
  sub_391734(v3, a1 + 4);
  v7 = sub_3B9754(a1 + 4, a2, a3 | 0x10);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_3914B0((_DWORD *)(a1 + *v8), 0);
  else
    sub_3914B0((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BA7DC
// address: 0x003BA7DC   size: 0x7C (124 bytes)
//======================================================================
int *__fastcall sub_3BA7DC(int *a1, int *a2, const char **a3, int a4)
{
  int v5; // r1
  _DWORD *v8; // r0
  int v10; // r1
  int v11; // r0
  _DWORD *v12; // r3

  v5 = a2[1];
  *a1 = v5;
  v8 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12));
  *v8 = a2[2];
  sub_391734((int)v8, 0);
  v10 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v10 - 12)) = a2[3];
  sub_3B9334((int)(a1 + 1));
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  v11 = sub_3B9754((int)(a1 + 1), *a3, a4 | 0x10);
  v12 = (_DWORD *)(*a1 - 12);
  if ( v11 != 0 )
    sub_3914B0((int *)((char *)a1 + *v12), 0);
  else
    sub_3914B0((int *)((char *)a1 + *v12), *(int *)((char *)a1 + *v12 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BA870
// address: 0x003BA870   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_3BA870(int a1, const char **a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 108;
  sub_392DEC((_DWORD *)(a1 + 108));
  *(_DWORD *)(a1 + 220) = 0;
  *(_BYTE *)(a1 + 224) = 0;
  *(_BYTE *)(a1 + 225) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)a1 = &off_465A1C;
  *(_DWORD *)(a1 + 108) = &off_465A30;
  sub_391734(v3, 0);
  *(_DWORD *)a1 = &off_465A54;
  *(_DWORD *)(a1 + 108) = &off_465A68;
  sub_3B9334(a1 + 4);
  sub_391734(v3, a1 + 4);
  v7 = sub_3B9754(a1 + 4, *a2, a3 | 0x10);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_3914B0((_DWORD *)(a1 + *v8), 0);
  else
    sub_3914B0((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BA948
// address: 0x003BA948   size: 0x4A (74 bytes)
//======================================================================
int *__fastcall sub_3BA948(int *a1, int *a2)
{
  int v2; // r3
  int v5; // r3

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[3];
  a1[1] = (int)&off_465978;
  sub_3B9684((int)(a1 + 1));
  sub_3A6A2C((int)(a1 + 10));
  a1[1] = (int)&off_464358;
  sub_3A8980(a1 + 8);
  v5 = a2[1];
  *a1 = v5;
  *(int *)((char *)a1 + *(_DWORD *)(v5 - 12)) = a2[2];
  return a1;
}


//======================================================================
// sub_3BA99C
// address: 0x003BA99C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BA99C(int a1)
{
  return a1 + 4;
}


//======================================================================
// sub_3BA9A0
// address: 0x003BA9A0   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BA9A0(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 40));
}


//======================================================================
// sub_3BA9AC
// address: 0x003BA9AC   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BA9AC(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 40));
}


//======================================================================
// sub_3BA9B8
// address: 0x003BA9B8   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3BA9B8(_DWORD *a1, const char *a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3B9754((int)(a1 + 1), a2, a3 | 0x10);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BA9EC
// address: 0x003BA9EC   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_3BA9EC(_DWORD *a1, const char **a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3B9754((int)(a1 + 1), *a2, a3 | 0x10);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BAA20
// address: 0x003BAA20   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BAA20(_DWORD *a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_3B9684((int)(a1 + 1));
  if ( result == nullptr )
    return sub_3914B0(
             (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
             *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  return result;
}


//======================================================================
// sub_3BAA44
// address: 0x003BAA44   size: 0x74 (116 bytes)
//======================================================================
int *__fastcall sub_3BAA44(int *a1, int *a2)
{
  _DWORD *v2; // r3
  int v5; // r3
  _DWORD *v6; // r0
  int v7; // r3
  int v8; // r3

  v2 = (_DWORD *)a2[2];
  *a1 = (int)v2;
  v2 -= 3;
  *(int *)((char *)a1 + *v2) = a2[3];
  a1[1] = 0;
  sub_391734((int)a1 + *v2, 0);
  v5 = a2[4];
  a1[2] = v5;
  v6 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12) + 8);
  *v6 = a2[5];
  sub_391734((int)v6, 0);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[6];
  a1[2] = a2[7];
  v8 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v8 - 12)) = a2[8];
  a1[2] = a2[9];
  sub_3B9334((int)(a1 + 3));
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  return a1;
}


//======================================================================
// sub_3BAAE0
// address: 0x003BAAE0   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_3BAAE0(int a1)
{
  int v1; // r5

  v1 = a1 + 116;
  sub_392DEC((_DWORD *)(a1 + 116));
  *(_DWORD *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 233) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_465AA4;
  *(_DWORD *)(a1 + 116) = &off_465AB8;
  sub_391734(v1, 0);
  *(_DWORD *)(a1 + 8) = &off_465A7C;
  *(_DWORD *)(a1 + 116) = &off_465A90;
  sub_391734(v1, 0);
  *(_DWORD *)a1 = &off_465B34;
  *(_DWORD *)(a1 + 116) = &off_465B5C;
  *(_DWORD *)(a1 + 8) = &off_465B48;
  sub_3B9334(a1 + 12);
  sub_391734(v1, a1 + 12);
  return a1;
}


//======================================================================
// sub_3BABB4
// address: 0x003BABB4   size: 0xAC (172 bytes)
//======================================================================
int *__fastcall sub_3BABB4(int *a1, int *a2, const char *a3, int a4)
{
  _DWORD *v5; // r3
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  _DWORD *v14; // r3

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
  sub_3B9334((int)(a1 + 3));
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  v13 = sub_3B9754((int)(a1 + 3), a3, a4);
  v14 = (_DWORD *)(*a1 - 12);
  if ( v13 != 0 )
    sub_3914B0((int *)((char *)a1 + *v14), 0);
  else
    sub_3914B0((int *)((char *)a1 + *v14), *(int *)((char *)a1 + *v14 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BAC88
// address: 0x003BAC88   size: 0xBC (188 bytes)
//======================================================================
int __fastcall sub_3BAC88(int a1, const char *a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 116;
  sub_392DEC((_DWORD *)(a1 + 116));
  *(_DWORD *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 233) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_465AA4;
  *(_DWORD *)(a1 + 116) = &off_465AB8;
  sub_391734(v3, 0);
  *(_DWORD *)(a1 + 8) = &off_465A7C;
  *(_DWORD *)(a1 + 116) = &off_465A90;
  sub_391734(v3, 0);
  *(_DWORD *)a1 = &off_465B34;
  *(_DWORD *)(a1 + 116) = &off_465B5C;
  *(_DWORD *)(a1 + 8) = &off_465B48;
  sub_3B9334(a1 + 12);
  sub_391734(v3, a1 + 12);
  v7 = sub_3B9754(a1 + 12, a2, a3);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_3914B0((_DWORD *)(a1 + *v8), 0);
  else
    sub_3914B0((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BAD94
// address: 0x003BAD94   size: 0xAE (174 bytes)
//======================================================================
int *__fastcall sub_3BAD94(int *a1, int *a2, const char **a3, int a4)
{
  _DWORD *v5; // r3
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r1
  int v13; // r0
  _DWORD *v14; // r3

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
  sub_3B9334((int)(a1 + 3));
  sub_391734((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  v13 = sub_3B9754((int)(a1 + 3), *a3, a4);
  v14 = (_DWORD *)(*a1 - 12);
  if ( v13 != 0 )
    sub_3914B0((int *)((char *)a1 + *v14), 0);
  else
    sub_3914B0((int *)((char *)a1 + *v14), *(int *)((char *)a1 + *v14 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BAE6C
// address: 0x003BAE6C   size: 0xBE (190 bytes)
//======================================================================
int __fastcall sub_3BAE6C(int a1, const char **a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 116;
  sub_392DEC((_DWORD *)(a1 + 116));
  *(_DWORD *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 233) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_465AA4;
  *(_DWORD *)(a1 + 116) = &off_465AB8;
  sub_391734(v3, 0);
  *(_DWORD *)(a1 + 8) = &off_465A7C;
  *(_DWORD *)(a1 + 116) = &off_465A90;
  sub_391734(v3, 0);
  *(_DWORD *)a1 = &off_465B34;
  *(_DWORD *)(a1 + 116) = &off_465B5C;
  *(_DWORD *)(a1 + 8) = &off_465B48;
  sub_3B9334(a1 + 12);
  sub_391734(v3, a1 + 12);
  v7 = sub_3B9754(a1 + 12, *a2, a3);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_3914B0((_DWORD *)(a1 + *v8), 0);
  else
    sub_3914B0((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BAF7C
// address: 0x003BAF7C   size: 0x70 (112 bytes)
//======================================================================
int *__fastcall sub_3BAF7C(int *a1, int *a2)
{
  int v2; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[3] = (int)&off_465978;
  sub_3B9684((int)(a1 + 3));
  sub_3A6A2C((int)(a1 + 12));
  a1[3] = (int)&off_464358;
  sub_3A8980(a1 + 10);
  v5 = a2[1];
  *a1 = v5;
  *(int *)((char *)a1 + *(_DWORD *)(v5 - 12)) = a2[6];
  a1[2] = a2[7];
  v6 = a2[4];
  a1[2] = v6;
  *(int *)((char *)a1 + *(_DWORD *)(v6 - 12) + 8) = a2[5];
  v7 = a2[2];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[3];
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_3BAFF4
// address: 0x003BAFF4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BAFF4(int a1)
{
  return a1 + 12;
}


//======================================================================
// sub_3BAFF8
// address: 0x003BAFF8   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BAFF8(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 48));
}


//======================================================================
// sub_3BB004
// address: 0x003BB004   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BB004(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 48));
}


//======================================================================
// sub_3BB010
// address: 0x003BB010   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB010(_DWORD *a1, const char *a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3B9754((int)(a1 + 3), a2, a3);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BB040
// address: 0x003BB040   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB040(_DWORD *a1, const char **a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3B9754((int)(a1 + 3), *a2, a3);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_3914B0((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BB070
// address: 0x003BB070   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB070(_DWORD *a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_3B9684((int)(a1 + 3));
  if ( result == nullptr )
    return sub_3914B0(
             (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
             *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  return result;
}


//======================================================================
// sub_3BB094
// address: 0x003BB094   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3BB094(int result)
{
  if ( *(_BYTE *)(result + 84) == 0 )
  {
    *(_DWORD *)(result + 76) = *(_DWORD *)(result + 8);
    *(_DWORD *)(result + 80) = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 4) = result + 72;
    *(_DWORD *)(result + 8) = result + 72;
    *(_DWORD *)(result + 12) = result + 76;
    *(_BYTE *)(result + 84) = 1;
  }
  return result;
}


//======================================================================
// sub_3BB0B8
// address: 0x003BB0B8   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3BB0B8(int result)
{
  int v1; // r2
  int v2; // r4
  int v3; // r1

  if ( *(_BYTE *)(result + 84) != 0 )
  {
    v1 = *(_DWORD *)(result + 76) + 4 * (*(_DWORD *)(result + 8) != *(_DWORD *)(result + 4));
    *(_DWORD *)(result + 76) = v1;
    v2 = *(_DWORD *)(result + 60);
    *(_DWORD *)(result + 8) = v1;
    v3 = *(_DWORD *)(result + 80);
    *(_DWORD *)(result + 4) = v2;
    *(_DWORD *)(result + 12) = v3;
    *(_BYTE *)(result + 84) = 0;
  }
  return result;
}


//======================================================================
// sub_3BB0E4
// address: 0x003BB0E4   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_3BB0E4(int a1)
{
  int v1; // r7

  v1 = a1 + 28;
  *(_DWORD *)a1 = &off_464398;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  sub_3A6688((_DWORD *)(a1 + 28));
  *(_DWORD *)a1 = &off_465B70;
  *(_DWORD *)(a1 + 32) = 0;
  sub_3A691C(a1 + 36);
  *(_DWORD *)(a1 + 64) = 1024;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  *(_DWORD *)(a1 + 60) = 0;
  *(_BYTE *)(a1 + 68) = 0;
  *(_BYTE *)(a1 + 69) = 0;
  *(_BYTE *)(a1 + 70) = 0;
  *(_DWORD *)(a1 + 72) = 0;
  *(_DWORD *)(a1 + 76) = 0;
  *(_DWORD *)(a1 + 80) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  if ( sub_3AC41C(v1) )
    *(_DWORD *)(a1 + 88) = sub_3AB524(v1);
  return a1;
}


//======================================================================
// sub_3BB194
// address: 0x003BB194   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BB194(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 36));
}


//======================================================================
// sub_3BB1A0
// address: 0x003BB1A0   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB1A0(_DWORD *result)
{
  _DWORD *v1; // r4
  unsigned int v2; // r0
  size_t v3; // r0

  v1 = result;
  if ( *((_BYTE *)result + 68) == 0 && result[15] == 0 )
  {
    v2 = result[16];
    if ( v2 > 0x1FC00000 )
      v3 = -1;
    else
      v3 = 4 * v2;
    result = operator new[](v3);
    v1[15] = result;
    *((_BYTE *)v1 + 68) = 1;
  }
  return result;
}


//======================================================================
// sub_3BB1D4
// address: 0x003BB1D4   size: 0x34 (52 bytes)
//======================================================================
void __fastcall sub_3BB1D4(int a1)
{
  void *v2; // r0
  void *v3; // r0

  if ( *(_BYTE *)(a1 + 68) != 0 )
  {
    v2 = *(void **)(a1 + 60);
    if ( v2 != nullptr )
      operator delete[](v2);
    *(_DWORD *)(a1 + 60) = 0;
    *(_BYTE *)(a1 + 68) = 0;
  }
  v3 = *(void **)(a1 + 92);
  if ( v3 != nullptr )
    operator delete[](v3);
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  *(_DWORD *)(a1 + 100) = 0;
  *(_DWORD *)(a1 + 104) = 0;
}


//======================================================================
// sub_3BB208
// address: 0x003BB208   size: 0x34 (52 bytes)
//======================================================================
int *__fastcall sub_3BB208(int *a1)
{
  int v2; // r0
  int v3; // r3
  int v4; // r2
  int v5; // r2

  v2 = *a1;
  *(_DWORD *)(v2 + 44) = 0;
  *(_BYTE *)(v2 + 84) = 0;
  sub_3BB1D4(v2);
  v3 = *a1;
  *(_BYTE *)(v3 + 69) = 0;
  *(_BYTE *)(v3 + 70) = 0;
  v4 = *(_DWORD *)(v3 + 60);
  *(_DWORD *)(v3 + 4) = v4;
  *(_DWORD *)(v3 + 8) = v4;
  *(_DWORD *)(v3 + 12) = v4;
  v5 = *(_DWORD *)(v3 + 48);
  *(_DWORD *)(v3 + 20) = 0;
  *(_DWORD *)(v3 + 16) = 0;
  *(_DWORD *)(v3 + 24) = 0;
  *(_DWORD *)(v3 + 52) = v5;
  *(_DWORD *)(v3 + 56) = v5;
  return a1;
}


//======================================================================
// sub_3BB23C
// address: 0x003BB23C   size: 0x10A (266 bytes)
//======================================================================
bool __fastcall sub_3BB23C(int a1, char *a2, size_t a3)
{
  int v4; // r0
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  char v10; // r9
  int v11; // r0
  char v13[4]; // [sp+10h] [bp+0h] BYREF
  int *v14; // [sp+14h] [bp+4h]
  int v15; // [sp+18h] [bp+8h] BYREF
  _DWORD v16[2]; // [sp+1Ch] [bp+Ch] BYREF

  v4 = *(_DWORD *)(a1 + 88);
  if ( v4 == 0 )
    sub_3BCEE4(0);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v4 + 24))(v4) != 0 )
    goto LABEL_6;
  v7 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 88) + 32))(*(_DWORD *)(a1 + 88));
  v8 = **(_DWORD **)(a1 + 88);
  v14 = &v15;
  v9 = (*(int (__fastcall **)(_DWORD, int, char *, char *, _DWORD *, char *, char *, int *))(v8 + 8))(
         *(_DWORD *)(a1 + 88),
         a1 + 52,
         a2,
         &a2[4 * a3],
         v16,
         v13,
         &v13[v7 * a3],
         &v15);
  v10 = v9;
  if ( v9 > 1 )
  {
    if ( v9 == 3 )
    {
LABEL_6:
      v11 = sub_3A6A64(a1 + 36, a2, a3);
      return v11 == a3;
    }
LABEL_12:
    sub_3BD280("basic_filebuf::_M_convert_to_external conversion error");
  }
  a3 = v15 - (_DWORD)v13;
  v11 = sub_3A6A64(a1 + 36, v13, v15 - (_DWORD)v13);
  if ( a3 == v11 && (v10 & 1) != 0 )
  {
    if ( (*(int (__fastcall **)(_DWORD, int, _DWORD, int, _DWORD *, char *, char *, int *))(**(_DWORD **)(a1 + 88) + 8))(
           *(_DWORD *)(a1 + 88),
           a1 + 52,
           v16[0],
           v16[0] + 4 * ((*(_DWORD *)(a1 + 20) - v16[0]) >> 2),
           v16,
           v13,
           &v13[a3],
           &v15) != 2 )
    {
      a3 = v15 - (_DWORD)v13;
      v11 = sub_3A6A64(a1 + 36, v13, v15 - (_DWORD)v13);
      return v11 == a3;
    }
    goto LABEL_12;
  }
  return v11 == a3;
}


//======================================================================
// sub_3BB34C
// address: 0x003BB34C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_3BB34C(int a1, int a2)
{
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 88) + 24))(*(_DWORD *)(a1 + 88)) != 0 )
    return (*(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 12)) >> 2;
  else
    return *(_DWORD *)(a1 + 92)
         + (*(int (__fastcall **)(_DWORD, int, _DWORD, _DWORD, int))(**(_DWORD **)(a1 + 88) + 28))(
             *(_DWORD *)(a1 + 88),
             a2,
             *(_DWORD *)(a1 + 92),
             *(_DWORD *)(a1 + 100),
             (*(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4)) >> 2)
         - *(_DWORD *)(a1 + 104);
}


//======================================================================
// sub_3BB390
// address: 0x003BB390   size: 0xC0 (192 bytes)
//======================================================================
bool __fastcall sub_3BB390(int a1)
{
  _BOOL4 v1; // r4
  int v3; // r0
  int v4; // r9
  unsigned int v5; // r0
  unsigned int v6; // r4
  int v8; // [sp+Ch] [bp-84h] BYREF
  char v9[128]; // [sp+10h] [bp-80h] BYREF
  char vars0; // [sp+90h] [bp+0h] BYREF

  v1 = true;
  if ( *(_DWORD *)(a1 + 16) < *(_DWORD *)(a1 + 20) )
    v1 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1) != -1;
  if ( *(_BYTE *)(a1 + 70) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 88);
    if ( v3 == 0 )
      sub_3BCEE4(0);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 24))(v3) == 0 && v1 )
    {
      v4 = 0;
      while ( 1 )
      {
        v5 = (*(int (__fastcall **)(_DWORD, int, char *, char *, int *))(**(_DWORD **)(a1 + 88) + 12))(
               *(_DWORD *)(a1 + 88),
               a1 + 52,
               v9,
               &vars0,
               &v8);
        v6 = v5;
        if ( v5 == 2 )
          break;
        if ( v5 <= 1 )
        {
          v4 = v8 - (_DWORD)v9;
          if ( v8 - (int)v9 <= 0 )
            return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1) != -1;
          if ( v4 != sub_3A6A64(a1 + 36, v9, v8 - (_DWORD)v9) )
            break;
        }
        if ( v4 <= 0 || v6 != 1 )
          return (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 52))(a1, -1) != -1;
      }
      return false;
    }
  }
  return v1;
}


//======================================================================
// sub_3BB450
// address: 0x003BB450   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_3BB450(int a1)
{
  int v1; // r6
  _BOOL4 v3; // r7
  int v4; // r2
  int v5; // r2

  v1 = a1 + 36;
  if ( !sub_3A69D8((_DWORD *)(a1 + 36)) )
    return 0;
  v3 = !sub_3BB390(a1);
  *(_DWORD *)(a1 + 44) = 0;
  *(_BYTE *)(a1 + 84) = 0;
  sub_3BB1D4(a1);
  *(_BYTE *)(a1 + 69) = 0;
  *(_BYTE *)(a1 + 70) = 0;
  v4 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 4) = v4;
  *(_DWORD *)(a1 + 8) = v4;
  *(_DWORD *)(a1 + 12) = v4;
  v5 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 52) = v5;
  *(_DWORD *)(a1 + 56) = v5;
  if ( sub_3A69EC(v1) == 0 )
    return 0;
  if ( !v3 )
    return a1;
  else
    return 0;
}


//======================================================================
// sub_3BB4E8
// address: 0x003BB4E8   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB4E8(_DWORD *a1)
{
  *a1 = &off_465B70;
  sub_3BB450((int)a1);
  sub_3A6A2C((int)(a1 + 9));
  *a1 = &off_464398;
  sub_3A8980(a1 + 7);
  return a1;
}


//======================================================================
// sub_3BB520
// address: 0x003BB520   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_3BB520(int a1, const char *a2, int a3)
{
  _DWORD *v3; // r6
  int v7; // r3
  int v8; // r3
  _DWORD v10[4]; // [sp+8h] [bp-10h] BYREF

  v3 = (_DWORD *)(a1 + 36);
  if ( sub_3A69D8((_DWORD *)(a1 + 36)) )
    return 0;
  sub_3A69A8((int)v3, a2, a3);
  if ( !sub_3A69D8(v3) )
    return 0;
  sub_3BB1A0((_DWORD *)a1);
  *(_DWORD *)(a1 + 44) = a3;
  *(_BYTE *)(a1 + 69) = 0;
  *(_BYTE *)(a1 + 70) = 0;
  v7 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 4) = v7;
  *(_DWORD *)(a1 + 8) = v7;
  *(_DWORD *)(a1 + 12) = v7;
  v8 = *(_DWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 52) = v8;
  *(_DWORD *)(a1 + 56) = v8;
  *(_DWORD *)(a1 + 20) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  if ( (a3 & 2) != 0 )
  {
    (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int, int))(*(_DWORD *)a1 + 16))(v10, a1, 0, 0, 2, a3);
    if ( v10[0] == -1 && v10[1] == -1 )
    {
      sub_3BB450(a1);
      return 0;
    }
  }
  return a1;
}


//======================================================================
// sub_3BB5B0
// address: 0x003BB5B0   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_3BB5B0(int a1, const char **a2, int a3)
{
  return sub_3BB520(a1, *a2, a3);
}


//======================================================================
// sub_3BB5BC
// address: 0x003BB5BC   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB5BC(_DWORD *a1)
{
  *a1 = &off_465B70;
  sub_3BB450((int)a1);
  sub_3A6A2C((int)(a1 + 9));
  *a1 = &off_464398;
  sub_3A8980(a1 + 7);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BB5F8
// address: 0x003BB5F8   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB5F8(_DWORD *a1)
{
  a1[28] = &off_465C60;
  *a1 = &off_465C4C;
  a1[1] = &off_465B70;
  sub_3BB450((int)(a1 + 1));
  sub_3A6A2C((int)(a1 + 10));
  a1[1] = &off_464398;
  sub_3A8980(a1 + 8);
  *a1 = &off_465C14;
  a1[28] = &off_464330;
  sub_392FE4(a1 + 28);
  return a1;
}


//======================================================================
// sub_3BB664
// address: 0x003BB664   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB664(_DWORD *a1)
{
  return sub_3BB5F8((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3BB674
// address: 0x003BB674   size: 0x5C (92 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB674(_DWORD *a1)
{
  a1[29] = &off_465C00;
  *a1 = &off_465BEC;
  a1[2] = &off_465B70;
  sub_3BB450((int)(a1 + 2));
  sub_3A6A2C((int)(a1 + 11));
  a1[2] = &off_464398;
  sub_3A8980(a1 + 9);
  *a1 = &off_465BB4;
  a1[1] = 0;
  a1[29] = &off_464330;
  sub_392FE4(a1 + 29);
  return a1;
}


//======================================================================
// sub_3BB6E4
// address: 0x003BB6E4   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB6E4(_DWORD *a1)
{
  return sub_3BB674((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3BB6F4
// address: 0x003BB6F4   size: 0x5E (94 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB6F4(_DWORD *a1)
{
  a1[28] = &off_465C60;
  *a1 = &off_465C4C;
  a1[1] = &off_465B70;
  sub_3BB450((int)(a1 + 1));
  sub_3A6A2C((int)(a1 + 10));
  a1[1] = &off_464398;
  sub_3A8980(a1 + 8);
  *a1 = &off_465C14;
  a1[28] = &off_464330;
  sub_392FE4(a1 + 28);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BB768
// address: 0x003BB768   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB768(_DWORD *a1)
{
  return sub_3BB6F4((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3BB778
// address: 0x003BB778   size: 0x62 (98 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB778(_DWORD *a1)
{
  a1[29] = &off_465C00;
  *a1 = &off_465BEC;
  a1[2] = &off_465B70;
  sub_3BB450((int)(a1 + 2));
  sub_3A6A2C((int)(a1 + 11));
  a1[2] = &off_464398;
  sub_3A8980(a1 + 9);
  *a1 = &off_465BB4;
  a1[1] = 0;
  a1[29] = &off_464330;
  sub_392FE4(a1 + 29);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BB7F0
// address: 0x003BB7F0   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB7F0(_DWORD *a1)
{
  return sub_3BB778((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3BB800
// address: 0x003BB800   size: 0x6A (106 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB800(_DWORD *a1)
{
  *a1 = &off_465D2C;
  a1[2] = &off_465D40;
  a1[30] = &off_465D54;
  a1[3] = &off_465B70;
  sub_3BB450((int)(a1 + 3));
  sub_3A6A2C((int)(a1 + 12));
  a1[3] = &off_464398;
  sub_3A8980(a1 + 10);
  a1[2] = &off_465C74;
  *a1 = &off_465C9C;
  a1[1] = 0;
  a1[30] = &off_464330;
  sub_392FE4(a1 + 30);
  return a1;
}


//======================================================================
// sub_3BB898
// address: 0x003BB898   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB898(_DWORD *a1)
{
  return sub_3BB800((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3BB8A8
// address: 0x003BB8A8   size: 0x70 (112 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB8A8(_DWORD *a1)
{
  *a1 = &off_465D2C;
  a1[2] = &off_465D40;
  a1[30] = &off_465D54;
  a1[3] = &off_465B70;
  sub_3BB450((int)(a1 + 3));
  sub_3A6A2C((int)(a1 + 12));
  a1[3] = &off_464398;
  sub_3A8980(a1 + 10);
  a1[2] = &off_465C74;
  *a1 = &off_465C9C;
  a1[1] = 0;
  a1[30] = &off_464330;
  sub_392FE4(a1 + 30);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BB944
// address: 0x003BB944   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB944(_DWORD *a1)
{
  return sub_3BB8A8((_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)));
}


//======================================================================
// sub_3BB954
// address: 0x003BB954   size: 0x6E (110 bytes)
//======================================================================
_DWORD *__fastcall sub_3BB954(_DWORD *a1, int a2, __int64 a3, int whence, int a5)
{
  __int64 v9; // r0
  int v10; // r2
  int v11; // r2

  *a1 = -1;
  a1[1] = -1;
  a1[2] = 0;
  if ( sub_3BB390(a2) )
  {
    v9 = sub_3A6AF0(a2 + 36, a3, whence);
    if ( v9 != -1 )
    {
      *(_BYTE *)(a2 + 69) = 0;
      *(_BYTE *)(a2 + 70) = 0;
      v10 = *(_DWORD *)(a2 + 92);
      *(_DWORD *)(a2 + 104) = v10;
      *(_DWORD *)(a2 + 100) = v10;
      *(_DWORD *)(a2 + 20) = 0;
      v11 = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a2 + 16) = 0;
      *(_DWORD *)(a2 + 24) = 0;
      *(_DWORD *)(a2 + 4) = v11;
      *(_DWORD *)(a2 + 8) = v11;
      *(_DWORD *)(a2 + 12) = v11;
      *(_DWORD *)(a2 + 52) = a5;
      *(_QWORD *)a1 = v9;
      a1[2] = a5;
    }
  }
  return a1;
}


//======================================================================
// sub_3BB9C4
// address: 0x003BB9C4   size: 0x132 (306 bytes)
//======================================================================
int __fastcall sub_3BB9C4(int a1, int a2)
{
  int v4; // r0
  char *v5; // r1
  char *v6; // r2
  unsigned int v7; // r2
  int v8; // r1
  int v9; // r3
  _DWORD *v10; // r3
  int v12; // r2
  int v13; // r3
  int v14; // r2
  int v15; // r2
  int v16; // r0
  int v17; // r1
  _DWORD v18[4]; // [sp+8h] [bp-10h] BYREF

  if ( (*(_DWORD *)(a1 + 44) & 0x10) == 0 )
    return -1;
  if ( *(_BYTE *)(a1 + 69) != 0 )
  {
    if ( *(_BYTE *)(a1 + 84) != 0 )
    {
      v15 = *(_DWORD *)(a1 + 76) + 4 * (*(_DWORD *)(a1 + 8) != *(_DWORD *)(a1 + 4));
      *(_DWORD *)(a1 + 76) = v15;
      v16 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 8) = v15;
      v17 = *(_DWORD *)(a1 + 80);
      *(_DWORD *)(a1 + 4) = v16;
      *(_DWORD *)(a1 + 12) = v17;
      *(_BYTE *)(a1 + 84) = 0;
    }
    v4 = sub_3BB34C(a1, a1 + 56);
    sub_3BB954(v18, a1, v4, 1, *(_DWORD *)(a1 + 56));
    if ( v18[0] == -1 && v18[1] == -1 )
      return -1;
  }
  v5 = *(char **)(a1 + 16);
  v6 = *(char **)(a1 + 20);
  if ( v5 >= v6 )
  {
    v7 = *(_DWORD *)(a1 + 64);
    if ( v7 <= 1 )
    {
      v18[0] = a2;
      if ( a2 != -1 )
      {
        if ( sub_3BB23C(a1, (char *)v18, 1u) )
        {
          *(_BYTE *)(a1 + 70) = 1;
          return a2;
        }
        return -1;
      }
      *(_BYTE *)(a1 + 70) = 1;
    }
    else
    {
      v8 = *(_DWORD *)(a1 + 44) & 0x10;
      v9 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 4) = v9;
      *(_DWORD *)(a1 + 8) = v9;
      *(_DWORD *)(a1 + 12) = v9;
      if ( v8 != 0 )
      {
        *(_DWORD *)(a1 + 20) = v9;
        *(_DWORD *)(a1 + 16) = v9;
        *(_DWORD *)(a1 + 24) = v9 + 4 * (v7 + 0x3FFFFFFF);
      }
      else
      {
        *(_DWORD *)(a1 + 20) = 0;
        *(_DWORD *)(a1 + 16) = 0;
        *(_DWORD *)(a1 + 24) = 0;
      }
      *(_BYTE *)(a1 + 70) = 1;
      if ( a2 != -1 )
      {
        v10 = *(_DWORD **)(a1 + 20);
        *v10 = a2;
        *(_DWORD *)(a1 + 20) = v10 + 1;
        return a2;
      }
    }
    return 0;
  }
  if ( a2 != -1 )
  {
    *(_DWORD *)v6 = a2;
    v6 += 4;
    *(_DWORD *)(a1 + 20) = v6;
  }
  if ( !sub_3BB23C(a1, v5, (v6 - v5) >> 2) )
    return -1;
  v12 = *(_DWORD *)(a1 + 44);
  v13 = *(_DWORD *)(a1 + 60);
  *(_DWORD *)(a1 + 4) = v13;
  *(_DWORD *)(a1 + 8) = v13;
  *(_DWORD *)(a1 + 12) = v13;
  if ( (v12 & 0x10) != 0 && (unsigned int)(v14 = *(_DWORD *)(a1 + 64)) > 1 )
  {
    *(_DWORD *)(a1 + 20) = v13;
    *(_DWORD *)(a1 + 16) = v13;
    *(_DWORD *)(a1 + 24) = v13 + 4 * (v14 + 0x3FFFFFFF);
  }
  else
  {
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
    *(_DWORD *)(a1 + 24) = 0;
  }
  return a2 != -1 ? a2 : 0;
}


//======================================================================
// sub_3BBAFC
// address: 0x003BBAFC   size: 0x170 (368 bytes)
//======================================================================
_DWORD *__fastcall sub_3BBAFC(_DWORD *a1, int a2, unsigned int a3, unsigned int a4, int whence)
{
  int v6; // r0
  int v10; // r0
  int v11; // r9
  int v12; // r2
  int v13; // r1
  int v14; // r2
  __int64 v15; // r4
  __int64 v16; // r0
  __int64 v17; // r4
  int v18; // r0
  unsigned int v20; // r9
  int v21; // r4
  int v22; // [sp+Ch] [bp-18h] BYREF
  _DWORD v23[5]; // [sp+10h] [bp-14h] BYREF

  v6 = *(_DWORD *)(a2 + 88);
  if ( v6 != 0 )
  {
    v10 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 20))(v6);
    v21 = v10;
    if ( v10 < 0 )
    {
      LOBYTE(v20) = 1;
      v21 = 0;
    }
    else
    {
      v20 = ((v10 - 1) | (unsigned int)v10) >> 31;
    }
  }
  else
  {
    LOBYTE(v20) = 1;
    v21 = 0;
  }
  *(_QWORD *)a1 = -1;
  a1[2] = 0;
  if ( sub_3A69D8((_DWORD *)(a2 + 36)) && (((a4 | a3) != 0) & (unsigned __int8)v20) == 0 )
  {
    if ( (a4 | a3) == 0
      && whence == 1
      && (*(_BYTE *)(a2 + 70) == 0
       || (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a2 + 88) + 24))(*(_DWORD *)(a2 + 88)) != 0) )
    {
      v11 = 1;
    }
    else
    {
      v11 = 0;
      if ( *(_BYTE *)(a2 + 84) != 0 )
      {
        v12 = *(_DWORD *)(a2 + 76) + 4 * (*(_DWORD *)(a2 + 8) != *(_DWORD *)(a2 + 4));
        *(_DWORD *)(a2 + 76) = v12;
        v13 = *(_DWORD *)(a2 + 60);
        *(_DWORD *)(a2 + 8) = v12;
        v14 = *(_DWORD *)(a2 + 80);
        *(_DWORD *)(a2 + 4) = v13;
        *(_DWORD *)(a2 + 12) = v14;
        *(_BYTE *)(a2 + 84) = 0;
      }
    }
    v22 = *(_DWORD *)(a2 + 48);
    v15 = v21 * __PAIR64__(a4, a3);
    if ( *(_BYTE *)(a2 + 69) != 0 && whence == 1 )
    {
      v22 = *(_DWORD *)(a2 + 56);
      v15 += sub_3BB34C(a2, (int)&v22);
    }
    if ( v11 != 0 )
    {
      if ( *(_BYTE *)(a2 + 70) != 0 )
        v15 = (*(_DWORD *)(a2 + 20) - *(_DWORD *)(a2 + 16)) >> 2;
      v16 = sub_3A6AF0(a2 + 36, 0, 1);
      if ( v16 != -1 )
      {
        v17 = v15 + v16;
        v18 = v22;
        *(_QWORD *)a1 = v17;
        a1[2] = v18;
      }
    }
    else
    {
      sub_3BB954(v23, a2, v15, whence, v22);
      j_memcpy(a1, v23, 0xCu);
    }
  }
  return a1;
}


//======================================================================
// sub_3BBC6C
// address: 0x003BBC6C   size: 0x7C (124 bytes)
//======================================================================
_DWORD *__fastcall sub_3BBC6C(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int v8; // r2
  int v9; // r1
  int v10; // r2
  _DWORD v11[4]; // [sp+8h] [bp-10h] BYREF
  __int64 varg_r2; // [sp+28h] [bp+10h]

  *(_QWORD *)a1 = -1;
  a1[2] = 0;
  if ( sub_3A69D8((_DWORD *)(a2 + 36)) )
  {
    if ( *(_BYTE *)(a2 + 84) != 0 )
    {
      v8 = *(_DWORD *)(a2 + 76) + 4 * (*(_DWORD *)(a2 + 8) != *(_DWORD *)(a2 + 4));
      *(_DWORD *)(a2 + 76) = v8;
      v9 = *(_DWORD *)(a2 + 60);
      *(_DWORD *)(a2 + 8) = v8;
      v10 = *(_DWORD *)(a2 + 80);
      *(_DWORD *)(a2 + 4) = v9;
      *(_DWORD *)(a2 + 12) = v10;
      *(_BYTE *)(a2 + 84) = 0;
    }
    sub_3BB954(v11, a2, varg_r2, 0, a5);
    j_memcpy(a1, v11, 0xCu);
  }
  return a1;
}


//======================================================================
// sub_3BBCE8
// address: 0x003BBCE8   size: 0x11E (286 bytes)
//======================================================================
int __fastcall sub_3BBCE8(int a1, int a2)
{
  int result; // r0
  int v5; // r0
  int v6; // r6
  int v7; // r3
  int v8; // r6
  const void *v9; // r1
  size_t v10; // r6
  size_t v11; // r2
  int v12; // r3
  int v13; // r3
  int v14; // r3
  void *v15; // r5
  _DWORD v16[5]; // [sp+8h] [bp-14h] BYREF

  if ( sub_3AC41C(a2) )
    v15 = sub_3AB524(a2);
  else
    v15 = nullptr;
  result = sub_3A69D8((_DWORD *)(a1 + 36));
  if ( result == 0 || *(_BYTE *)(a1 + 69) == 0 && *(_BYTE *)(a1 + 70) == 0 )
    goto LABEL_5;
  v5 = *(_DWORD *)(a1 + 88);
  if ( v5 == 0 )
    goto LABEL_24;
  result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) + 1;
  if ( result != 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 69);
    if ( *(_BYTE *)(a1 + 69) != 0 )
    {
      v5 = *(_DWORD *)(a1 + 88);
      if ( v5 != 0 )
      {
        result = (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 24))(v5);
        if ( result != 0 )
        {
          if ( v15 != nullptr )
          {
            result = (*(int (__fastcall **)(void *))(*(_DWORD *)v15 + 24))(v15);
            if ( result == 0 )
            {
              result = (*(int (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, int, _DWORD))(*(_DWORD *)a1 + 16))(
                         v16,
                         a1,
                         0,
                         0,
                         1,
                         *(_DWORD *)(a1 + 44));
              if ( (v16[1] & v16[0]) == -1 )
                goto LABEL_15;
            }
          }
        }
        else
        {
          v8 = *(_DWORD *)(a1 + 92);
          result = (*(int (__fastcall **)(_DWORD, int, int, _DWORD, int))(**(_DWORD **)(a1 + 88) + 28))(
                     *(_DWORD *)(a1 + 88),
                     a1 + 56,
                     v8,
                     *(_DWORD *)(a1 + 100),
                     (*(_DWORD *)(a1 + 8) - *(_DWORD *)(a1 + 4)) >> 2);
          v9 = (const void *)(v8 + result);
          v10 = *(_DWORD *)(a1 + 104) - (v8 + result);
          *(_DWORD *)(a1 + 100) = v9;
          v11 = 0;
          if ( v10 != 0 )
          {
            result = (int)j_memmove(*(void **)(a1 + 92), v9, v10);
            v11 = v10;
          }
          v12 = *(_DWORD *)(a1 + 92);
          *(_DWORD *)(a1 + 100) = v12;
          *(_DWORD *)(a1 + 104) = v12 + v11;
          v13 = *(_DWORD *)(a1 + 60);
          *(_DWORD *)(a1 + 4) = v13;
          *(_DWORD *)(a1 + 8) = v13;
          *(_DWORD *)(a1 + 12) = v13;
          *(_DWORD *)(a1 + 20) = 0;
          *(_DWORD *)(a1 + 16) = 0;
          *(_DWORD *)(a1 + 24) = 0;
          v14 = *(_DWORD *)(a1 + 48);
          *(_DWORD *)(a1 + 52) = v14;
          *(_DWORD *)(a1 + 56) = v14;
        }
LABEL_5:
        *(_DWORD *)(a1 + 88) = v15;
        return result;
      }
LABEL_24:
      sub_3BCEE4(v5);
    }
    if ( *(_BYTE *)(a1 + 70) == 0 )
      goto LABEL_5;
    result = sub_3BB390(a1);
    if ( result != 0 )
    {
      v7 = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(a1 + 4) = v7;
      *(_DWORD *)(a1 + 8) = v7;
      *(_DWORD *)(a1 + 12) = v7;
      *(_DWORD *)(a1 + 20) = v6;
      *(_DWORD *)(a1 + 16) = v6;
      *(_DWORD *)(a1 + 24) = v6;
      goto LABEL_5;
    }
  }
LABEL_15:
  *(_DWORD *)(a1 + 88) = 0;
  return result;
}


//======================================================================
// sub_3BBE08
// address: 0x003BBE08   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall sub_3BBE08(_DWORD *result, int a2)
{
  int v2; // r3
  unsigned int v3; // r2
  int v4; // r3
  int v5; // r2

  v2 = result[11];
  v3 = (unsigned int)(v2 << 27) >> 31;
  if ( (v2 & 8) != 0 && a2 > 0 )
  {
    v4 = result[15];
    result[1] = v4;
    result[2] = v4;
    result[3] = v4 + 4 * a2;
  }
  else
  {
    v4 = result[15];
    result[1] = v4;
    result[2] = v4;
    result[3] = v4;
  }
  if ( v3 == 0 || a2 != 0 || (unsigned int)(v5 = result[16]) <= 1 )
  {
    result[5] = 0;
    result[4] = 0;
    result[6] = 0;
  }
  else
  {
    result[5] = v4;
    result[4] = v4;
    result[6] = v4 + 4 * (v5 + 0x3FFFFFFF);
  }
  return result;
}


//======================================================================
// sub_3BBE5C
// address: 0x003BBE5C   size: 0x48 (72 bytes)
//======================================================================
int *__fastcall sub_3BBE5C(int *a1, int *a2)
{
  _DWORD *v2; // r3
  int v5; // r3

  v2 = (_DWORD *)a2[1];
  *a1 = (int)v2;
  v2 -= 3;
  *(int *)((char *)a1 + *v2) = a2[2];
  a1[1] = 0;
  sub_391B70((int)a1 + *v2, 0);
  v5 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v5 - 12)) = a2[3];
  sub_3BB0E4((int)(a1 + 2));
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  return a1;
}


//======================================================================
// sub_3BBEC0
// address: 0x003BBEC0   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_3BBEC0(int a1)
{
  int v1; // r5

  v1 = a1 + 116;
  sub_392DEC((_DWORD *)(a1 + 116));
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_465BB4;
  *(_DWORD *)(a1 + 116) = &off_465BC8;
  sub_391B70(v1, 0);
  *(_DWORD *)a1 = &off_465BEC;
  *(_DWORD *)(a1 + 116) = &off_465C00;
  sub_3BB0E4(a1 + 8);
  sub_391B70(v1, a1 + 8);
  return a1;
}


//======================================================================
// sub_3BBF64
// address: 0x003BBF64   size: 0x84 (132 bytes)
//======================================================================
int *__fastcall sub_3BBF64(int *a1, int *a2, const char *a3, int a4)
{
  _DWORD *v5; // r0
  int v9; // r0
  int v10; // r0
  _DWORD *v11; // r3

  v5 = (_DWORD *)a2[1];
  *a1 = (int)v5;
  v5 -= 3;
  *(int *)((char *)a1 + *v5) = a2[2];
  a1[1] = 0;
  sub_391B70((int)a1 + *v5, 0);
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[3];
  sub_3BB0E4((int)(a1 + 2));
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  v10 = sub_3BB520((int)(a1 + 2), a3, a4 | 8);
  v11 = (_DWORD *)(*a1 - 12);
  if ( v10 != 0 )
    sub_39194C((int *)((char *)a1 + *v11), 0);
  else
    sub_39194C((int *)((char *)a1 + *v11), *(int *)((char *)a1 + *v11 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BC004
// address: 0x003BC004   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_3BC004(int a1, const char *a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 116;
  sub_392DEC((_DWORD *)(a1 + 116));
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 116) = &off_465BC8;
  *(_DWORD *)a1 = &off_465BB4;
  *(_DWORD *)(a1 + 4) = 0;
  sub_391B70(v3, 0);
  *(_DWORD *)a1 = &off_465BEC;
  *(_DWORD *)(a1 + 116) = &off_465C00;
  sub_3BB0E4(a1 + 8);
  sub_391B70(v3, a1 + 8);
  v7 = sub_3BB520(a1 + 8, a2, a3 | 8);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_39194C((_DWORD *)(a1 + *v8), 0);
  else
    sub_39194C((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BC0E4
// address: 0x003BC0E4   size: 0x84 (132 bytes)
//======================================================================
int *__fastcall sub_3BC0E4(int *a1, int *a2, const char **a3, int a4)
{
  _DWORD *v5; // r1
  int v9; // r1
  int v10; // r0
  _DWORD *v11; // r3

  v5 = (_DWORD *)a2[1];
  *a1 = (int)v5;
  v5 -= 3;
  *(int *)((char *)a1 + *v5) = a2[2];
  a1[1] = 0;
  sub_391B70((int)a1 + *v5, 0);
  v9 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v9 - 12)) = a2[3];
  sub_3BB0E4((int)(a1 + 2));
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 2));
  v10 = sub_3BB520((int)(a1 + 2), *a3, a4 | 8);
  v11 = (_DWORD *)(*a1 - 12);
  if ( v10 != 0 )
    sub_39194C((int *)((char *)a1 + *v11), 0);
  else
    sub_39194C((int *)((char *)a1 + *v11), *(int *)((char *)a1 + *v11 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BC184
// address: 0x003BC184   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_3BC184(int a1, const char **a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 116;
  sub_392DEC((_DWORD *)(a1 + 116));
  *(_DWORD *)(a1 + 228) = 0;
  *(_DWORD *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 116) = &off_465BC8;
  *(_DWORD *)a1 = &off_465BB4;
  *(_DWORD *)(a1 + 4) = 0;
  sub_391B70(v3, 0);
  *(_DWORD *)a1 = &off_465BEC;
  *(_DWORD *)(a1 + 116) = &off_465C00;
  sub_3BB0E4(a1 + 8);
  sub_391B70(v3, a1 + 8);
  v7 = sub_3BB520(a1 + 8, *a2, a3 | 8);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_39194C((_DWORD *)(a1 + *v8), 0);
  else
    sub_39194C((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BC264
// address: 0x003BC264   size: 0x4E (78 bytes)
//======================================================================
int *__fastcall sub_3BC264(int *a1, int *a2)
{
  int v2; // r3
  int v5; // r3

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[3];
  a1[2] = (int)&off_465B70;
  sub_3BB450((int)(a1 + 2));
  sub_3A6A2C((int)(a1 + 11));
  a1[2] = (int)&off_464398;
  sub_3A8980(a1 + 9);
  v5 = a2[1];
  *a1 = v5;
  *(int *)((char *)a1 + *(_DWORD *)(v5 - 12)) = a2[2];
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_3BC2BC
// address: 0x003BC2BC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BC2BC(int a1)
{
  return a1 + 8;
}


//======================================================================
// sub_3BC2C0
// address: 0x003BC2C0   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BC2C0(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 44));
}


//======================================================================
// sub_3BC2CC
// address: 0x003BC2CC   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BC2CC(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 44));
}


//======================================================================
// sub_3BC2D8
// address: 0x003BC2D8   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3BC2D8(_DWORD *a1, const char *a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3BB520((int)(a1 + 2), a2, a3 | 8);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_39194C((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_39194C((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BC30C
// address: 0x003BC30C   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_3BC30C(_DWORD *a1, const char **a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3BB520((int)(a1 + 2), *a2, a3 | 8);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_39194C((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_39194C((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BC340
// address: 0x003BC340   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BC340(_DWORD *a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_3BB450((int)(a1 + 2));
  if ( result == nullptr )
    return sub_39194C(
             (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
             *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  return result;
}


//======================================================================
// sub_3BC364
// address: 0x003BC364   size: 0x40 (64 bytes)
//======================================================================
int *__fastcall sub_3BC364(int *a1, int *a2)
{
  int v2; // r3
  _DWORD *v4; // r0
  int v6; // r3

  v2 = a2[1];
  *a1 = v2;
  v4 = (int *)((char *)a1 + *(_DWORD *)(v2 - 12));
  *v4 = a2[2];
  sub_391B70((int)v4, 0);
  v6 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v6 - 12)) = a2[3];
  sub_3BB0E4((int)(a1 + 1));
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  return a1;
}


//======================================================================
// sub_3BC3BC
// address: 0x003BC3BC   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_3BC3BC(int a1)
{
  int v1; // r5

  v1 = a1 + 112;
  sub_392DEC((_DWORD *)(a1 + 112));
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)a1 = &off_465C14;
  *(_DWORD *)(a1 + 112) = &off_465C28;
  sub_391B70(v1, 0);
  *(_DWORD *)a1 = &off_465C4C;
  *(_DWORD *)(a1 + 112) = &off_465C60;
  sub_3BB0E4(a1 + 4);
  sub_391B70(v1, a1 + 4);
  return a1;
}


//======================================================================
// sub_3BC458
// address: 0x003BC458   size: 0x7C (124 bytes)
//======================================================================
int *__fastcall sub_3BC458(int *a1, int *a2, const char *a3, int a4)
{
  int v5; // r0
  _DWORD *v6; // r0
  int v10; // r0
  int v11; // r0
  _DWORD *v12; // r3

  v5 = a2[1];
  *a1 = v5;
  v6 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12));
  *v6 = a2[2];
  sub_391B70((int)v6, 0);
  v10 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v10 - 12)) = a2[3];
  sub_3BB0E4((int)(a1 + 1));
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  v11 = sub_3BB520((int)(a1 + 1), a3, a4 | 0x10);
  v12 = (_DWORD *)(*a1 - 12);
  if ( v11 != 0 )
    sub_39194C((int *)((char *)a1 + *v12), 0);
  else
    sub_39194C((int *)((char *)a1 + *v12), *(int *)((char *)a1 + *v12 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BC4EC
// address: 0x003BC4EC   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_3BC4EC(int a1, const char *a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 112;
  sub_392DEC((_DWORD *)(a1 + 112));
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)a1 = &off_465C14;
  *(_DWORD *)(a1 + 112) = &off_465C28;
  sub_391B70(v3, 0);
  *(_DWORD *)a1 = &off_465C4C;
  *(_DWORD *)(a1 + 112) = &off_465C60;
  sub_3BB0E4(a1 + 4);
  sub_391B70(v3, a1 + 4);
  v7 = sub_3BB520(a1 + 4, a2, a3 | 0x10);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_39194C((_DWORD *)(a1 + *v8), 0);
  else
    sub_39194C((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BC5C4
// address: 0x003BC5C4   size: 0x7C (124 bytes)
//======================================================================
int *__fastcall sub_3BC5C4(int *a1, int *a2, const char **a3, int a4)
{
  int v5; // r1
  _DWORD *v8; // r0
  int v10; // r1
  int v11; // r0
  _DWORD *v12; // r3

  v5 = a2[1];
  *a1 = v5;
  v8 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12));
  *v8 = a2[2];
  sub_391B70((int)v8, 0);
  v10 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v10 - 12)) = a2[3];
  sub_3BB0E4((int)(a1 + 1));
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 1));
  v11 = sub_3BB520((int)(a1 + 1), *a3, a4 | 0x10);
  v12 = (_DWORD *)(*a1 - 12);
  if ( v11 != 0 )
    sub_39194C((int *)((char *)a1 + *v12), 0);
  else
    sub_39194C((int *)((char *)a1 + *v12), *(int *)((char *)a1 + *v12 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BC658
// address: 0x003BC658   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_3BC658(int a1, const char **a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 112;
  sub_392DEC((_DWORD *)(a1 + 112));
  *(_DWORD *)(a1 + 224) = 0;
  *(_DWORD *)(a1 + 228) = 0;
  *(_BYTE *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)a1 = &off_465C14;
  *(_DWORD *)(a1 + 112) = &off_465C28;
  sub_391B70(v3, 0);
  *(_DWORD *)a1 = &off_465C4C;
  *(_DWORD *)(a1 + 112) = &off_465C60;
  sub_3BB0E4(a1 + 4);
  sub_391B70(v3, a1 + 4);
  v7 = sub_3BB520(a1 + 4, *a2, a3 | 0x10);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_39194C((_DWORD *)(a1 + *v8), 0);
  else
    sub_39194C((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BC730
// address: 0x003BC730   size: 0x4A (74 bytes)
//======================================================================
int *__fastcall sub_3BC730(int *a1, int *a2)
{
  int v2; // r3
  int v5; // r3

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[3];
  a1[1] = (int)&off_465B70;
  sub_3BB450((int)(a1 + 1));
  sub_3A6A2C((int)(a1 + 10));
  a1[1] = (int)&off_464398;
  sub_3A8980(a1 + 8);
  v5 = a2[1];
  *a1 = v5;
  *(int *)((char *)a1 + *(_DWORD *)(v5 - 12)) = a2[2];
  return a1;
}


//======================================================================
// sub_3BC784
// address: 0x003BC784   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BC784(int a1)
{
  return a1 + 4;
}


//======================================================================
// sub_3BC788
// address: 0x003BC788   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BC788(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 40));
}


//======================================================================
// sub_3BC794
// address: 0x003BC794   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BC794(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 40));
}


//======================================================================
// sub_3BC7A0
// address: 0x003BC7A0   size: 0x32 (50 bytes)
//======================================================================
_DWORD *__fastcall sub_3BC7A0(_DWORD *a1, const char *a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3BB520((int)(a1 + 1), a2, a3 | 0x10);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_39194C((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_39194C((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BC7D4
// address: 0x003BC7D4   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_3BC7D4(_DWORD *a1, const char **a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3BB520((int)(a1 + 1), *a2, a3 | 0x10);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_39194C((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_39194C((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BC808
// address: 0x003BC808   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BC808(_DWORD *a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_3BB450((int)(a1 + 1));
  if ( result == nullptr )
    return sub_39194C(
             (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
             *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  return result;
}


//======================================================================
// sub_3BC82C
// address: 0x003BC82C   size: 0x74 (116 bytes)
//======================================================================
int *__fastcall sub_3BC82C(int *a1, int *a2)
{
  _DWORD *v2; // r3
  int v5; // r3
  _DWORD *v6; // r0
  int v7; // r3
  int v8; // r3

  v2 = (_DWORD *)a2[2];
  *a1 = (int)v2;
  v2 -= 3;
  *(int *)((char *)a1 + *v2) = a2[3];
  a1[1] = 0;
  sub_391B70((int)a1 + *v2, 0);
  v5 = a2[4];
  a1[2] = v5;
  v6 = (int *)((char *)a1 + *(_DWORD *)(v5 - 12) + 8);
  *v6 = a2[5];
  sub_391B70((int)v6, 0);
  v7 = a2[1];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[6];
  a1[2] = a2[7];
  v8 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v8 - 12)) = a2[8];
  a1[2] = a2[9];
  sub_3BB0E4((int)(a1 + 3));
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  return a1;
}


//======================================================================
// sub_3BC8C8
// address: 0x003BC8C8   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_3BC8C8(int a1)
{
  int v1; // r5

  v1 = a1 + 120;
  sub_392DEC((_DWORD *)(a1 + 120));
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_BYTE *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_465C9C;
  *(_DWORD *)(a1 + 120) = &off_465CB0;
  sub_391B70(v1, 0);
  *(_DWORD *)(a1 + 8) = &off_465C74;
  *(_DWORD *)(a1 + 120) = &off_465C88;
  sub_391B70(v1, 0);
  *(_DWORD *)a1 = &off_465D2C;
  *(_DWORD *)(a1 + 120) = &off_465D54;
  *(_DWORD *)(a1 + 8) = &off_465D40;
  sub_3BB0E4(a1 + 12);
  sub_391B70(v1, a1 + 12);
  return a1;
}


//======================================================================
// sub_3BC9A0
// address: 0x003BC9A0   size: 0xAC (172 bytes)
//======================================================================
int *__fastcall sub_3BC9A0(int *a1, int *a2, const char *a3, int a4)
{
  _DWORD *v5; // r3
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r0
  _DWORD *v14; // r3

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
  sub_3BB0E4((int)(a1 + 3));
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  v13 = sub_3BB520((int)(a1 + 3), a3, a4);
  v14 = (_DWORD *)(*a1 - 12);
  if ( v13 != 0 )
    sub_39194C((int *)((char *)a1 + *v14), 0);
  else
    sub_39194C((int *)((char *)a1 + *v14), *(int *)((char *)a1 + *v14 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BCA74
// address: 0x003BCA74   size: 0xBE (190 bytes)
//======================================================================
int __fastcall sub_3BCA74(int a1, const char *a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 120;
  sub_392DEC((_DWORD *)(a1 + 120));
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_BYTE *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_465C9C;
  *(_DWORD *)(a1 + 120) = &off_465CB0;
  sub_391B70(v3, 0);
  *(_DWORD *)(a1 + 8) = &off_465C74;
  *(_DWORD *)(a1 + 120) = &off_465C88;
  sub_391B70(v3, 0);
  *(_DWORD *)a1 = &off_465D2C;
  *(_DWORD *)(a1 + 120) = &off_465D54;
  *(_DWORD *)(a1 + 8) = &off_465D40;
  sub_3BB0E4(a1 + 12);
  sub_391B70(v3, a1 + 12);
  v7 = sub_3BB520(a1 + 12, a2, a3);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_39194C((_DWORD *)(a1 + *v8), 0);
  else
    sub_39194C((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BCB84
// address: 0x003BCB84   size: 0xAE (174 bytes)
//======================================================================
int *__fastcall sub_3BCB84(int *a1, int *a2, const char **a3, int a4)
{
  _DWORD *v5; // r3
  int v9; // r3
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r1
  int v13; // r0
  _DWORD *v14; // r3

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
  sub_3BB0E4((int)(a1 + 3));
  sub_391B70((int)a1 + *(_DWORD *)(*a1 - 12), (int)(a1 + 3));
  v13 = sub_3BB520((int)(a1 + 3), *a3, a4);
  v14 = (_DWORD *)(*a1 - 12);
  if ( v13 != 0 )
    sub_39194C((int *)((char *)a1 + *v14), 0);
  else
    sub_39194C((int *)((char *)a1 + *v14), *(int *)((char *)a1 + *v14 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BCC5C
// address: 0x003BCC5C   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall sub_3BCC5C(int a1, const char **a2, int a3)
{
  int v3; // r5
  int v7; // r0
  _DWORD *v8; // r3

  v3 = a1 + 120;
  sub_392DEC((_DWORD *)(a1 + 120));
  *(_DWORD *)(a1 + 232) = 0;
  *(_DWORD *)(a1 + 236) = 0;
  *(_BYTE *)(a1 + 240) = 0;
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = &off_465C9C;
  *(_DWORD *)(a1 + 120) = &off_465CB0;
  sub_391B70(v3, 0);
  *(_DWORD *)(a1 + 8) = &off_465C74;
  *(_DWORD *)(a1 + 120) = &off_465C88;
  sub_391B70(v3, 0);
  *(_DWORD *)a1 = &off_465D2C;
  *(_DWORD *)(a1 + 120) = &off_465D54;
  *(_DWORD *)(a1 + 8) = &off_465D40;
  sub_3BB0E4(a1 + 12);
  sub_391B70(v3, a1 + 12);
  v7 = sub_3BB520(a1 + 12, *a2, a3);
  v8 = (_DWORD *)(*(_DWORD *)a1 - 12);
  if ( v7 != 0 )
    sub_39194C((_DWORD *)(a1 + *v8), 0);
  else
    sub_39194C((_DWORD *)(a1 + *v8), *(_DWORD *)(a1 + *v8 + 20) | 4);
  return a1;
}


//======================================================================
// sub_3BCD6C
// address: 0x003BCD6C   size: 0x70 (112 bytes)
//======================================================================
int *__fastcall sub_3BCD6C(int *a1, int *a2)
{
  int v2; // r3
  int v5; // r3
  int v6; // r3
  int v7; // r3

  v2 = *a2;
  *a1 = *a2;
  *(int *)((char *)a1 + *(_DWORD *)(v2 - 12)) = a2[8];
  a1[2] = a2[9];
  a1[3] = (int)&off_465B70;
  sub_3BB450((int)(a1 + 3));
  sub_3A6A2C((int)(a1 + 12));
  a1[3] = (int)&off_464398;
  sub_3A8980(a1 + 10);
  v5 = a2[1];
  *a1 = v5;
  *(int *)((char *)a1 + *(_DWORD *)(v5 - 12)) = a2[6];
  a1[2] = a2[7];
  v6 = a2[4];
  a1[2] = v6;
  *(int *)((char *)a1 + *(_DWORD *)(v6 - 12) + 8) = a2[5];
  v7 = a2[2];
  *a1 = v7;
  *(int *)((char *)a1 + *(_DWORD *)(v7 - 12)) = a2[3];
  a1[1] = 0;
  return a1;
}


//======================================================================
// sub_3BCDE4
// address: 0x003BCDE4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BCDE4(int a1)
{
  return a1 + 12;
}


//======================================================================
// sub_3BCDE8
// address: 0x003BCDE8   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BCDE8(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 48));
}


//======================================================================
// sub_3BCDF4
// address: 0x003BCDF4   size: 0xA (10 bytes)
//======================================================================
bool __fastcall sub_3BCDF4(int a1)
{
  return sub_3A69D8((_DWORD *)(a1 + 48));
}


//======================================================================
// sub_3BCE00
// address: 0x003BCE00   size: 0x2E (46 bytes)
//======================================================================
_DWORD *__fastcall sub_3BCE00(_DWORD *a1, const char *a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3BB520((int)(a1 + 3), a2, a3);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_39194C((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_39194C((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BCE30
// address: 0x003BCE30   size: 0x30 (48 bytes)
//======================================================================
_DWORD *__fastcall sub_3BCE30(_DWORD *a1, const char **a2, int a3)
{
  int v4; // r0
  _DWORD *v5; // r3

  v4 = sub_3BB520((int)(a1 + 3), *a2, a3);
  v5 = (_DWORD *)(*a1 - 12);
  if ( v4 != 0 )
    return sub_39194C((_DWORD *)((char *)a1 + *v5), 0);
  else
    return sub_39194C((_DWORD *)((char *)a1 + *v5), *(_DWORD *)((char *)a1 + *v5 + 20) | 4);
}


//======================================================================
// sub_3BCE60
// address: 0x003BCE60   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BCE60(_DWORD *a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)sub_3BB450((int)(a1 + 3));
  if ( result == nullptr )
    return sub_39194C(
             (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
             *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 4);
  return result;
}


//======================================================================
// sub_3BCE84
// address: 0x003BCE84   size: 0x22 (34 bytes)
//======================================================================
void __noreturn sub_3BCE84()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = &off_464280;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_exception,
    (void (*)(void *))std::bad_exception::~bad_exception);
}


//======================================================================
// sub_3BCEB4
// address: 0x003BCEB4   size: 0x22 (34 bytes)
//======================================================================
void __noreturn sub_3BCEB4()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = &off_464308;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_alloc, (void (*)(void *))std::bad_alloc::~bad_alloc);
}


//======================================================================
// sub_3BCEE4
// address: 0x003BCEE4   size: 0x22 (34 bytes)
//======================================================================
void __noreturn sub_3BCEE4()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = &off_465EA8;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_cast, (void (*)(void *))std::bad_cast::~bad_cast);
}


//======================================================================
// sub_3BCF14
// address: 0x003BCF14   size: 0x22 (34 bytes)
//======================================================================
void __noreturn sub_3BCF14()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = &off_465E78;
  _cxa_throw(
    exception,
    (struct type_info *)&`typeinfo for'std::bad_typeid,
    (void (*)(void *))std::bad_typeid::~bad_typeid);
}


//======================================================================
// sub_3BCF44
// address: 0x003BCF44   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BCF44(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3BF794(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::logic_error, (void (*)(void *))sub_3BF54C);
}


//======================================================================
// sub_3BCFA0
// address: 0x003BCFA0   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BCFA0(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3BF7B8(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::domain_error, (void (*)(void *))sub_3BF5AC);
}


//======================================================================
// sub_3BCFFC
// address: 0x003BCFFC   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BCFFC(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3BF7D0(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::invalid_argument, (void (*)(void *))sub_3BF5E4);
}


//======================================================================
// sub_3BD058
// address: 0x003BD058   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD058(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3BF7E8(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::length_error, (void (*)(void *))sub_3BF61C);
}


//======================================================================
// sub_3BD0B4
// address: 0x003BD0B4   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD0B4(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3BF800(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::out_of_range, (void (*)(void *))sub_3BF654);
}


//======================================================================
// sub_3BD110
// address: 0x003BD110   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD110(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3BF818(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::runtime_error, (void (*)(void *))sub_3BF68C);
}


//======================================================================
// sub_3BD16C
// address: 0x003BD16C   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD16C(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3BF83C(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::range_error, (void (*)(void *))sub_3BF6EC);
}


//======================================================================
// sub_3BD1C8
// address: 0x003BD1C8   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD1C8(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3BF854(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::overflow_error, (void (*)(void *))sub_3BF724);
}


//======================================================================
// sub_3BD224
// address: 0x003BD224   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD224(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3BF86C(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::underflow_error, (void (*)(void *))sub_3BF75C);
}


//======================================================================
// sub_3BD280
// address: 0x003BD280   size: 0x3E (62 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD280(char *a1)
{
  void *exception; // r4
  _BYTE v3[4]; // [sp+8h] [bp-8h] BYREF
  int v4; // [sp+Ch] [bp-4h] BYREF

  exception = _cxa_allocate_exception(8u);
  sub_3BF0BC((int)&v4, a1);
  sub_3C04C8(exception, &v4);
  sub_3BDF68(v4 - 12, v3);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::ios_base::failure, (void (*)(void *))sub_3C0468);
}


//======================================================================
// sub_3BD2D0
// address: 0x003BD2D0   size: 0x54 (84 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD2D0(int a1)
{
  _DWORD *exception; // r4
  int v3; // r5
  int v4; // [sp+0h] [bp-Ch] BYREF
  _DWORD v5[2]; // [sp+4h] [bp-8h] BYREF

  exception = _cxa_allocate_exception(0x10u);
  v3 = sub_3C070C();
  (*(void (__fastcall **)(_DWORD *, int, int))(*(_DWORD *)v3 + 12))(v5, v3, a1);
  sub_3BF818(exception, v5);
  sub_3BDF68(v5[0] - 12, &v4);
  *exception = &off_4660A0;
  exception[2] = a1;
  exception[3] = v3;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::system_error, (void (*)(void *))sub_3C0680);
}


//======================================================================
// sub_3BD348
// address: 0x003BD348   size: 0x54 (84 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD348(int a1)
{
  _DWORD *exception; // r4
  int v3; // r6
  _BYTE v4[4]; // [sp+4h] [bp-10h] BYREF
  _DWORD v5[2]; // [sp+Ch] [bp-8h] BYREF

  exception = _cxa_allocate_exception(0x10u);
  v3 = sub_3BD5C0();
  sub_3BF0BC((int)v5, "std::future_error");
  sub_3BF794(exception, v5);
  sub_3BDF68(v5[0] - 12, v4);
  *exception = &off_465DF0;
  exception[2] = a1;
  exception[3] = v3;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::future_error, (void (*)(void *))sub_3BD4B4);
}


//======================================================================
// sub_3BD3C4
// address: 0x003BD3C4   size: 0x22 (34 bytes)
//======================================================================
void __noreturn sub_3BD3C4()
{
  _DWORD *exception; // r0

  exception = _cxa_allocate_exception(4u);
  *exception = &off_465DD8;
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::bad_function_call, (void (*)(void *))sub_3BD438);
}


//======================================================================
// sub_3BD3F4
// address: 0x003BD3F4   size: 0x24 (36 bytes)
//======================================================================
void __fastcall __noreturn sub_3BD3F4(int a1)
{
  void *exception; // r4

  exception = _cxa_allocate_exception(0xCu);
  sub_3C0530(exception, a1);
  _cxa_throw(exception, (struct type_info *)&`typeinfo for'std::regex_error, (void (*)(void *))sub_3C04F8);
}


//======================================================================
// sub_3BD42C
// address: 0x003BD42C   size: 0x6 (6 bytes)
//======================================================================
const char *sub_3BD42C()
{
  return "bad_function_call";
}


//======================================================================
// sub_3BD438
// address: 0x003BD438   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3BD438(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465DD8;
  std::exception::~exception(a1);
  return a1;
}


//======================================================================
// sub_3BD450
// address: 0x003BD450   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3BD450(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465DD8;
  std::exception::~exception(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BD470
// address: 0x003BD470   size: 0x6 (6 bytes)
//======================================================================
const char *sub_3BD470()
{
  return "future";
}


//======================================================================
// sub_3BD47C
// address: 0x003BD47C   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BD47C(_DWORD *a1)
{
  *a1 = &off_465E18;
  sub_3C05B8();
  return a1;
}


//======================================================================
// sub_3BD494
// address: 0x003BD494   size: 0x1A (26 bytes)
//======================================================================
_DWORD *__fastcall sub_3BD494(_DWORD *a1)
{
  *a1 = &off_465E18;
  sub_3C05B8();
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BD4B4
// address: 0x003BD4B4   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3BD4B4(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465DF0;
  sub_3BF54C(a1);
  return a1;
}


//======================================================================
// sub_3BD4CC
// address: 0x003BD4CC   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3BD4CC(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465DF0;
  sub_3BF54C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BD4EC
// address: 0x003BD4EC   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_3BD4EC(int a1)
{
  int v1; // r4
  int v2; // r5
  int v4; // [sp+0h] [bp-Ch] BYREF
  int v5; // [sp+4h] [bp-8h] BYREF

  (*(void (__fastcall **)(int *))(**(_DWORD **)(a1 + 12) + 12))(&v5);
  v1 = v5;
  v2 = v5 - 12;
  if ( (int *)(v5 - 12) != &dword_55FB7C && sub_3C82FC(v5 - 4, -1) <= 0 )
    sub_3BDF60(v2, &v4);
  return v1;
}


//======================================================================
// sub_3BD530
// address: 0x003BD530   size: 0x68 (104 bytes)
//======================================================================
_DWORD *__fastcall sub_3BD530(_DWORD *a1, int a2, int a3)
{
  *a1 = &byte_55FB88;
  switch ( a3 )
  {
    case 1:
      sub_3BE408((int)a1, "Future already retrieved", 0x18u);
      break;
    case 2:
      sub_3BE408((int)a1, "Promise already satisfied", 0x19u);
      break;
    case 3:
      sub_3BE408((int)a1, "No associated state", 0x13u);
      break;
    case 4:
      sub_3BE408((int)a1, "Broken promise", 0xEu);
      break;
    default:
      sub_3BE408((int)a1, "Unknown error", 0xDu);
      break;
  }
  return a1;
}


//======================================================================
// sub_3BD5C0
// address: 0x003BD5C0   size: 0x48 (72 bytes)
//======================================================================
int *sub_3BD5C0()
{
  if ( (dword_55FB78 & 1) == 0 && _cxa_guard_acquire(&dword_55FB78) != 0 )
  {
    dword_55FB74 = 0;
    sub_3C06F0(&dword_55FB74);
    dword_55FB74 = (int)&off_465E18;
    _cxa_guard_release(&dword_55FB78);
    sub_390BFC(&dword_55FB74, (void (*)(void *))sub_3BD47C, &unk_468000);
  }
  return &dword_55FB74;
}


//======================================================================
// sub_3BD620
// address: 0x003BD620   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BD620(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3BD624
// address: 0x003BD624   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3BD624(_DWORD *a1)
{
  return *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3BD62C
// address: 0x003BD62C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BD62C(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3BD630
// address: 0x003BD630   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3BD630(_DWORD *a1, int a2)
{
  *a1 = a2;
  return a2;
}


//======================================================================
// sub_3BD638
// address: 0x003BD638   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3BD638(_DWORD *a1)
{
  return *a1 - 12;
}


//======================================================================
// sub_3BD640
// address: 0x003BD640   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BD640(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3BD644
// address: 0x003BD644   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_3BD644(_DWORD *a1)
{
  return *a1 + *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3BD650
// address: 0x003BD650   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall sub_3BD650(_DWORD *a1, unsigned int a2, char *a3)
{
  if ( a2 > *(_DWORD *)(*a1 - 12) )
    sub_3BD0B4(a3);
  return a2;
}


//======================================================================
// sub_3BD668
// address: 0x003BD668   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3BD668(int *a1, int a2, unsigned int a3, char *a4)
{
  int v4; // r4
  int result; // r0

  v4 = *a1;
  result = 1073741820;
  if ( a2 - *(_DWORD *)(v4 - 12) + 1073741820 < a3 )
    sub_3BD058(a4);
  return result;
}


//======================================================================
// sub_3BD688
// address: 0x003BD688   size: 0x12 (18 bytes)
//======================================================================
unsigned int __fastcall sub_3BD688(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned int result; // r0

  result = *(_DWORD *)(*a1 - 12) - a2;
  if ( result > a3 )
    return a3;
  return result;
}


//======================================================================
// sub_3BD69C
// address: 0x003BD69C   size: 0x1A (26 bytes)
//======================================================================
bool __fastcall sub_3BD69C(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r3
  _BOOL4 result; // r0

  v2 = *a1;
  result = true;
  if ( a2 >= v2 )
    return v2 + *(_DWORD *)(v2 - 12) < a2;
  return result;
}


//======================================================================
// sub_3BD6B8
// address: 0x003BD6B8   size: 0x12 (18 bytes)
//======================================================================
_BYTE *__fastcall sub_3BD6B8(_BYTE *result, _BYTE *a2, size_t a3)
{
  if ( a3 != 1 )
    return j_memcpy(result, a2, a3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3BD6CC
// address: 0x003BD6CC   size: 0x12 (18 bytes)
//======================================================================
_BYTE *__fastcall sub_3BD6CC(_BYTE *result, _BYTE *a2, size_t a3)
{
  if ( a3 != 1 )
    return j_memmove(result, a2, a3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3BD6E0
// address: 0x003BD6E0   size: 0x16 (22 bytes)
//======================================================================
_BYTE *__fastcall sub_3BD6E0(_BYTE *result, size_t a2, char a3)
{
  if ( a2 != 1 )
    return j_memset(result, a3, a2);
  *result = a3;
  return result;
}


//======================================================================
// sub_3BD6F8
// address: 0x003BD6F8   size: 0x14 (20 bytes)
//======================================================================
_BYTE *__fastcall sub_3BD6F8(_BYTE *result, _BYTE *a2, int a3)
{
  size_t v3; // r2

  v3 = a3 - (_DWORD)a2;
  if ( v3 != 1 )
    return j_memcpy(result, a2, v3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3BD70C
// address: 0x003BD70C   size: 0x14 (20 bytes)
//======================================================================
_BYTE *__fastcall sub_3BD70C(_BYTE *result, _BYTE *a2, int a3)
{
  size_t v3; // r2

  v3 = a3 - (_DWORD)a2;
  if ( v3 != 1 )
    return j_memcpy(result, a2, v3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3BD720
// address: 0x003BD720   size: 0x14 (20 bytes)
//======================================================================
_BYTE *__fastcall sub_3BD720(_BYTE *result, _BYTE *a2, int a3)
{
  size_t v3; // r2

  v3 = a3 - (_DWORD)a2;
  if ( v3 != 1 )
    return j_memcpy(result, a2, v3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3BD734
// address: 0x003BD734   size: 0x14 (20 bytes)
//======================================================================
_BYTE *__fastcall sub_3BD734(_BYTE *result, _BYTE *a2, int a3)
{
  size_t v3; // r2

  v3 = a3 - (_DWORD)a2;
  if ( v3 != 1 )
    return j_memcpy(result, a2, v3);
  *result = *a2;
  return result;
}


//======================================================================
// sub_3BD748
// address: 0x003BD748   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BD748(int a1, int a2)
{
  return a1 - a2;
}


//======================================================================
// sub_3BD74C
// address: 0x003BD74C   size: 0x6 (6 bytes)
//======================================================================
int *sub_3BD74C()
{
  return &dword_55FB7C;
}


//======================================================================
// sub_3BD758
// address: 0x003BD758   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3BD758(_DWORD *result)
{
  *result = &byte_55FB88;
  return result;
}


//======================================================================
// sub_3BD768
// address: 0x003BD768   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall sub_3BD768(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  *a2 = &byte_55FB88;
  return result;
}


//======================================================================
// sub_3BD77C
// address: 0x003BD77C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BD77C(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3BD780
// address: 0x003BD780   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_3BD780(_DWORD *a1)
{
  return *a1 + *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3BD78C
// address: 0x003BD78C   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall sub_3BD78C(_DWORD *result, _DWORD *a2)
{
  *result = *a2 + *(_DWORD *)(*a2 - 12);
  return result;
}


//======================================================================
// sub_3BD79C
// address: 0x003BD79C   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall sub_3BD79C(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  return result;
}


//======================================================================
// sub_3BD7A4
// address: 0x003BD7A4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BD7A4(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3BD7A8
// address: 0x003BD7A8   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_3BD7A8(_DWORD *a1)
{
  return *a1 + *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3BD7B4
// address: 0x003BD7B4   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall sub_3BD7B4(_DWORD *result, _DWORD *a2)
{
  *result = *a2 + *(_DWORD *)(*a2 - 12);
  return result;
}


//======================================================================
// sub_3BD7C4
// address: 0x003BD7C4   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall sub_3BD7C4(_DWORD *result, _DWORD *a2)
{
  *result = *a2;
  return result;
}


//======================================================================
// sub_3BD7CC
// address: 0x003BD7CC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3BD7CC(_DWORD *a1)
{
  return *(_DWORD *)(*a1 - 12);
}


//======================================================================
// sub_3BD7D4
// address: 0x003BD7D4   size: 0x4 (4 bytes)
//======================================================================
int sub_3BD7D4()
{
  return 1073741820;
}


//======================================================================
// sub_3BD7DC
// address: 0x003BD7DC   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3BD7DC(_DWORD *a1)
{
  return *(_DWORD *)(*a1 - 8);
}


//======================================================================
// sub_3BD7E4
// address: 0x003BD7E4   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_3BD7E4(_DWORD *a1)
{
  return *(_DWORD *)(*a1 - 12) == 0;
}


//======================================================================
// sub_3BD7F0
// address: 0x003BD7F0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3BD7F0(_DWORD *a1, int a2)
{
  return *a1 + a2;
}


//======================================================================
// sub_3BD7F8
// address: 0x003BD7F8   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3BD7F8(int *a1, unsigned int a2)
{
  int v2; // r0

  v2 = *a1;
  if ( a2 >= *(_DWORD *)(v2 - 12) )
    sub_3BD0B4("basic_string::at");
  return v2 + a2;
}


//======================================================================
// sub_3BD818
// address: 0x003BD818   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BD818(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3BD81C
// address: 0x003BD81C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_3BD81C(_DWORD *a1)
{
  return *a1 + *(_DWORD *)(*a1 - 12) - 1;
}


//======================================================================
// sub_3BD82C
// address: 0x003BD82C   size: 0x3E (62 bytes)
//======================================================================
size_t __fastcall sub_3BD82C(_DWORD *a1, _BYTE *a2, size_t a3, unsigned int a4)
{
  unsigned int v4; // r4
  size_t v5; // r4
  _BYTE *v6; // r3

  v4 = *(_DWORD *)(*a1 - 12);
  if ( a4 > v4 )
    sub_3BD0B4("basic_string::copy");
  v5 = v4 - a4;
  if ( v5 > a3 )
    v5 = a3;
  if ( v5 != 0 )
  {
    v6 = (_BYTE *)(*a1 + a4);
    if ( v5 == 1 )
      *a2 = *v6;
    else
      j_memcpy(a2, v6, v5);
  }
  return v5;
}


//======================================================================
// sub_3BD870
// address: 0x003BD870   size: 0x2A (42 bytes)
//======================================================================
int *__fastcall sub_3BD870(int *result, int *a2)
{
  int v2; // r3
  int v3; // r2

  v2 = *result;
  if ( *(int *)(*result - 4) < 0 )
    *(_DWORD *)(*result - 4) = 0;
  v3 = *a2;
  if ( *(int *)(*a2 - 4) < 0 )
    *(_DWORD *)(*a2 - 4) = 0;
  *result = v3;
  *a2 = v2;
  return result;
}


//======================================================================
// sub_3BD89C
// address: 0x003BD89C   size: 0xC (12 bytes)
//======================================================================
int *__fastcall sub_3BD89C(int *a1, int *a2)
{
  sub_3BD870(a1, a2);
  return a1;
}


//======================================================================
// sub_3BD8A8
// address: 0x003BD8A8   size: 0xC (12 bytes)
//======================================================================
int *__fastcall sub_3BD8A8(int *a1, int *a2)
{
  sub_3BD870(a1, a2);
  return a1;
}


//======================================================================
// sub_3BD8B4
// address: 0x003BD8B4   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BD8B4(int a1)
{
  return *(_DWORD *)a1;
}


//======================================================================
// sub_3BD8BC
// address: 0x003BD8BC   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_3BD8BC(int *a1, unsigned __int8 *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r6
  unsigned int v5; // r4
  unsigned int v6; // r7
  int result; // r0
  unsigned int v8; // r7
  int v9; // r8
  unsigned int v10; // r5
  const void *v11; // r10
  size_t v12; // r9
  unsigned int v13; // r0

  v4 = *a1;
  v5 = a3;
  v6 = *(_DWORD *)(*a1 - 12);
  if ( a4 != 0 )
  {
    if ( a4 <= v6 )
    {
      v8 = v6 - a4;
      if ( a3 <= v8 )
      {
        v9 = *a2;
        v10 = a3 + 1;
        v11 = a2 + 1;
        v12 = a4 - 1;
        do
        {
          v13 = v10;
          if ( *(unsigned __int8 *)(v4 + v5) == v9 )
          {
            if ( j_memcmp((const void *)(v4 + v10), v11, v12) == 0 )
              return v5;
            v13 = v10;
          }
          ++v10;
          ++v5;
        }
        while ( v8 >= v13 );
      }
    }
    return -1;
  }
  result = a3;
  if ( a3 > v6 )
    return -1;
  return result;
}


//======================================================================
// sub_3BD92C
// address: 0x003BD92C   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_3BD92C(int *a1, unsigned __int8 **a2, unsigned int a3)
{
  return sub_3BD8BC(a1, *a2, a3, *((_DWORD *)*a2 - 3));
}


//======================================================================
// sub_3BD93C
// address: 0x003BD93C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3BD93C(int *a1, char *a2, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_strlen(a2);
  return sub_3BD8BC(a1, (unsigned __int8 *)a2, a3, v6);
}


//======================================================================
// sub_3BD958
// address: 0x003BD958   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_3BD958(int *a1, int a2, unsigned int a3)
{
  int v3; // r4
  unsigned int v4; // r3
  void *v6; // r0

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 - 12);
  if ( a3 < v4 && (v6 = j_memchr((const void *)(v3 + a3), a2, v4 - a3)) != nullptr )
    return (int)v6 - v3;
  else
    return -1;
}


//======================================================================
// sub_3BD97C
// address: 0x003BD97C   size: 0x48 (72 bytes)
//======================================================================
unsigned int __fastcall sub_3BD97C(int *a1, void *a2, unsigned int a3, size_t a4)
{
  int v4; // r6
  _DWORD *v6; // r3
  unsigned int v9; // r4

  v4 = *a1;
  v6 = (_DWORD *)(*a1 - 12);
  if ( a4 > *v6 )
    return -1;
  v9 = *v6 - a4;
  if ( v9 <= a3 )
    goto LABEL_7;
  v9 = a3;
  if ( j_memcmp((const void *)(v4 + a3), a2, a4) != 0 )
  {
    while ( v9 != 0 )
    {
      --v9;
LABEL_7:
      if ( j_memcmp((const void *)(v4 + v9), a2, a4) == 0 )
        return v9;
    }
    return -1;
  }
  return v9;
}


//======================================================================
// sub_3BD9C4
// address: 0x003BD9C4   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3BD9C4(int *a1, void **a2, unsigned int a3)
{
  return sub_3BD97C(a1, *a2, a3, *((_DWORD *)*a2 - 3));
}


//======================================================================
// sub_3BD9D4
// address: 0x003BD9D4   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3BD9D4(int *a1, char *a2, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_strlen(a2);
  return sub_3BD97C(a1, a2, a3, v6);
}


//======================================================================
// sub_3BD9F0
// address: 0x003BD9F0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_3BD9F0(int *a1, int a2, unsigned int a3)
{
  int v3; // r4
  int v4; // r3
  int result; // r0
  unsigned int v6; // r3

  v3 = *a1;
  v4 = *(_DWORD *)(*a1 - 12);
  if ( v4 == 0 )
    return -1;
  v6 = v4 - 1;
  result = a3;
  if ( a3 <= v6 )
    goto LABEL_8;
  result = v6;
  while ( result != -1 )
  {
    if ( *(unsigned __int8 *)(v3 + result) == a2 )
      break;
    --result;
LABEL_8:
    ;
  }
  return result;
}


//======================================================================
// sub_3BDA24
// address: 0x003BDA24   size: 0x42 (66 bytes)
//======================================================================
unsigned int __fastcall sub_3BDA24(int *a1, void *a2, unsigned int a3, size_t a4)
{
  unsigned int v5; // r4
  int v7; // r7
  unsigned int v8; // r5

  v5 = a3;
  if ( a4 == 0 )
    return -1;
  v7 = *a1;
  v8 = *(_DWORD *)(*a1 - 12);
  if ( v8 <= a3 )
    return -1;
  while ( j_memchr(a2, *(unsigned __int8 *)(v7 + v5), a4) == nullptr )
  {
    if ( v8 <= ++v5 )
      return -1;
  }
  return v5;
}


//======================================================================
// sub_3BDA68
// address: 0x003BDA68   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3BDA68(int *a1, void **a2, unsigned int a3)
{
  return sub_3BDA24(a1, *a2, a3, *((_DWORD *)*a2 - 3));
}


//======================================================================
// sub_3BDA78
// address: 0x003BDA78   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3BDA78(int *a1, char *a2, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_strlen(a2);
  return sub_3BDA24(a1, a2, a3, v6);
}


//======================================================================
// sub_3BDA94
// address: 0x003BDA94   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3BDA94(int *a1, int a2, unsigned int a3)
{
  return sub_3BD958(a1, a2, a3);
}


//======================================================================
// sub_3BDA9C
// address: 0x003BDA9C   size: 0x56 (86 bytes)
//======================================================================
unsigned int __fastcall sub_3BDA9C(int *a1, void *a2, unsigned int a3, size_t a4)
{
  int v4; // r6
  int v7; // r3
  unsigned int v9; // r3
  unsigned int v10; // r4

  v4 = *a1;
  v7 = *(_DWORD *)(*a1 - 12);
  if ( a4 == 0 || v7 == 0 )
    return -1;
  v9 = v7 - 1;
  v10 = a3;
  if ( a3 <= v9 )
    goto LABEL_8;
  v10 = v9;
  if ( j_memchr(a2, *(unsigned __int8 *)(v4 + v9), a4) == nullptr )
  {
    while ( v10 != 0 )
    {
      --v10;
LABEL_8:
      if ( j_memchr(a2, *(unsigned __int8 *)(v4 + v10), a4) != nullptr )
        return v10;
    }
    return -1;
  }
  return v10;
}


//======================================================================
// sub_3BDAF4
// address: 0x003BDAF4   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3BDAF4(int *a1, void **a2, unsigned int a3)
{
  return sub_3BDA9C(a1, *a2, a3, *((_DWORD *)*a2 - 3));
}


//======================================================================
// sub_3BDB04
// address: 0x003BDB04   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3BDB04(int *a1, char *a2, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_strlen(a2);
  return sub_3BDA9C(a1, a2, a3, v6);
}


//======================================================================
// sub_3BDB20
// address: 0x003BDB20   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3BDB20(int *a1, int a2, unsigned int a3)
{
  return sub_3BD9F0(a1, a2, a3);
}


//======================================================================
// sub_3BDB28
// address: 0x003BDB28   size: 0x3C (60 bytes)
//======================================================================
unsigned int __fastcall sub_3BDB28(int *a1, void *a2, unsigned int a3, size_t a4)
{
  int v4; // r5
  unsigned int v6; // r6
  unsigned int v8; // r4

  v4 = *a1;
  v6 = *(_DWORD *)(*a1 - 12);
  v8 = a3;
  if ( a3 >= v6 )
    return -1;
  while ( j_memchr(a2, *(unsigned __int8 *)(v4 + v8), a4) != nullptr )
  {
    if ( ++v8 >= v6 )
      return -1;
  }
  return v8;
}


//======================================================================
// sub_3BDB64
// address: 0x003BDB64   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3BDB64(int *a1, void **a2, unsigned int a3)
{
  return sub_3BDB28(a1, *a2, a3, *((_DWORD *)*a2 - 3));
}


//======================================================================
// sub_3BDB74
// address: 0x003BDB74   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3BDB74(int *a1, char *a2, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_strlen(a2);
  return sub_3BDB28(a1, a2, a3, v6);
}


//======================================================================
// sub_3BDB90
// address: 0x003BDB90   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3BDB90(int *a1, int a2, unsigned int a3)
{
  int v3; // r0
  unsigned int v4; // r4
  int v5; // r5

  v3 = *a1;
  v4 = *(_DWORD *)(v3 - 12);
  if ( a3 >= v4 )
    return -1;
  v5 = *(unsigned __int8 *)(v3 + a3);
  if ( v5 == a2 )
  {
    while ( ++a3 < v4 )
    {
      if ( *(unsigned __int8 *)(v3 + a3) != v5 )
        return a3;
    }
    return -1;
  }
  return a3;
}


//======================================================================
// sub_3BDBBC
// address: 0x003BDBBC   size: 0x52 (82 bytes)
//======================================================================
unsigned int __fastcall sub_3BDBBC(int *a1, void *a2, unsigned int a3, size_t a4)
{
  int v4; // r6
  int v6; // r3
  unsigned int v9; // r3
  unsigned int v10; // r4

  v4 = *a1;
  v6 = *(_DWORD *)(*a1 - 12);
  if ( v6 == 0 )
    return -1;
  v9 = v6 - 1;
  v10 = a3;
  if ( a3 <= v9 )
    goto LABEL_7;
  v10 = v9;
  if ( j_memchr(a2, *(unsigned __int8 *)(v4 + v9), a4) != nullptr )
  {
    while ( v10 != 0 )
    {
      --v10;
LABEL_7:
      if ( j_memchr(a2, *(unsigned __int8 *)(v4 + v10), a4) == nullptr )
        return v10;
    }
    return -1;
  }
  return v10;
}


//======================================================================
// sub_3BDC10
// address: 0x003BDC10   size: 0x10 (16 bytes)
//======================================================================
unsigned int __fastcall sub_3BDC10(int *a1, void **a2, unsigned int a3)
{
  return sub_3BDBBC(a1, *a2, a3, *((_DWORD *)*a2 - 3));
}


//======================================================================
// sub_3BDC20
// address: 0x003BDC20   size: 0x1C (28 bytes)
//======================================================================
unsigned int __fastcall sub_3BDC20(int *a1, char *a2, unsigned int a3)
{
  size_t v6; // r0

  v6 = j_strlen(a2);
  return sub_3BDBBC(a1, a2, a3, v6);
}


//======================================================================
// sub_3BDC3C
// address: 0x003BDC3C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_3BDC3C(int *a1, int a2, unsigned int a3)
{
  int v3; // r0
  int v4; // r3
  unsigned int v6; // r3

  v3 = *a1;
  v4 = *(_DWORD *)(v3 - 12);
  if ( v4 == 0 )
    return -1;
  v6 = v4 - 1;
  if ( a3 > v6 )
    goto LABEL_6;
  if ( *(unsigned __int8 *)(v3 + a3) == a2 )
  {
    while ( 1 )
    {
      v6 = a3 - 1;
      if ( a3 == 0 )
        break;
LABEL_6:
      a3 = v6;
      if ( *(unsigned __int8 *)(v3 + v6) != a2 )
        return a3;
    }
    return -1;
  }
  return a3;
}


//======================================================================
// sub_3BDC70
// address: 0x003BDC70   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_3BDC70(const void **a1, const void **a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r1
  size_t v4; // r5
  size_t v5; // r4
  size_t v6; // r2
  int result; // r0

  v2 = *a1;
  v3 = *a2;
  v4 = *(v2 - 3);
  v5 = *(v3 - 3);
  v6 = v5;
  if ( v5 > v4 )
    v6 = *(v2 - 3);
  result = j_memcmp(v2, v3, v6);
  if ( result == 0 )
    return v4 - v5;
  return result;
}


//======================================================================
// sub_3BDC98
// address: 0x003BDC98   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_3BDC98(int *a1, unsigned int a2, size_t a3, const void **a4)
{
  int v4; // r0
  unsigned int v5; // r4
  size_t v6; // r4
  _DWORD *v7; // r3
  const void *v8; // r0
  size_t v9; // r5
  int result; // r0

  v4 = *a1;
  v5 = *(_DWORD *)(v4 - 12);
  if ( a2 > v5 )
    sub_3BD0B4("basic_string::compare");
  v6 = v5 - a2;
  if ( v6 <= a3 )
  {
    v7 = *a4;
    v8 = (const void *)(v4 + a2);
    v9 = *(v7 - 3);
    a3 = v6;
    if ( v6 <= v9 )
      goto LABEL_4;
    goto LABEL_7;
  }
  v7 = *a4;
  v6 = a3;
  v9 = *(v7 - 3);
  v8 = (const void *)(v4 + a2);
  if ( a3 > v9 )
LABEL_7:
    a3 = v9;
LABEL_4:
  result = j_memcmp(v8, v7, a3);
  if ( result == 0 )
    return v6 - v9;
  return result;
}


//======================================================================
// sub_3BDCF0
// address: 0x003BDCF0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_3BDCF0(int *a1, unsigned int a2, size_t a3, int *a4, unsigned int a5, size_t a6)
{
  int v6; // r0
  unsigned int v7; // r4
  int v8; // r3
  unsigned int v9; // r5
  size_t v10; // r4
  size_t v11; // r2
  size_t v12; // r5
  const void *v13; // r0
  size_t v14; // r2
  const void *v15; // r1
  int result; // r0

  v6 = *a1;
  v7 = *(_DWORD *)(v6 - 12);
  if ( a2 > v7 || (v8 = *a4, v9 = *(_DWORD *)(v8 - 12), a5 > v9) )
    sub_3BD0B4("basic_string::compare");
  v10 = v7 - a2;
  if ( v10 > a3 )
  {
    v10 = a3;
    v11 = a6;
    v12 = v9 - a5;
    if ( v12 <= a6 )
    {
LABEL_5:
      v13 = (const void *)(v6 + a2);
      v14 = v10;
      v15 = (const void *)(v8 + a5);
      if ( v10 <= v12 )
        goto LABEL_6;
      goto LABEL_9;
    }
  }
  else
  {
    v11 = a6;
    v12 = v9 - a5;
    if ( v12 <= a6 )
      goto LABEL_5;
  }
  v12 = v11;
  v13 = (const void *)(v6 + a2);
  v14 = v10;
  v15 = (const void *)(v8 + a5);
  if ( v10 > v12 )
LABEL_9:
    v14 = v12;
LABEL_6:
  result = j_memcmp(v13, v15, v14);
  if ( result == 0 )
    return v10 - v12;
  return result;
}


//======================================================================
// sub_3BDD5C
// address: 0x003BDD5C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_3BDD5C(const void **a1, char *a2)
{
  const void *v2; // r7
  size_t v4; // r5
  size_t v5; // r4
  size_t v6; // r2
  int result; // r0

  v2 = *a1;
  v4 = *((_DWORD *)*a1 - 3);
  v5 = j_strlen(a2);
  v6 = v5;
  if ( v5 > v4 )
    v6 = v4;
  result = j_memcmp(v2, a2, v6);
  if ( result == 0 )
    return v4 - v5;
  return result;
}


//======================================================================
// sub_3BDD88
// address: 0x003BDD88   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_3BDD88(int *a1, unsigned int a2, unsigned int a3, char *a4)
{
  int v4; // r7
  unsigned int *v6; // r3
  unsigned int v8; // r4
  size_t v9; // r6
  size_t v10; // r2
  const void *v11; // r0
  int result; // r0

  v4 = *a1;
  v6 = (unsigned int *)(*a1 - 12);
  if ( a2 > *v6 )
    sub_3BD0B4("basic_string::compare");
  v8 = *v6 - a2;
  if ( v8 <= a3 )
  {
    v9 = j_strlen(a4);
    v10 = v9;
    v11 = (const void *)(v4 + a2);
    if ( v9 <= v8 )
      goto LABEL_4;
    goto LABEL_7;
  }
  v8 = a3;
  v9 = j_strlen(a4);
  v10 = v9;
  v11 = (const void *)(v4 + a2);
  if ( v9 > v8 )
LABEL_7:
    v10 = v8;
LABEL_4:
  result = j_memcmp(v11, a4, v10);
  if ( result == 0 )
    return v8 - v9;
  return result;
}


//======================================================================
// sub_3BDDEC
// address: 0x003BDDEC   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_3BDDEC(int *a1, unsigned int a2, size_t a3, void *a4, unsigned int a5)
{
  int v5; // r0
  unsigned int v6; // r4
  unsigned int v7; // r4
  const void *v8; // r0
  int result; // r0

  v5 = *a1;
  v6 = *(_DWORD *)(v5 - 12);
  if ( a2 > v6 )
    sub_3BD0B4("basic_string::compare");
  v7 = v6 - a2;
  if ( v7 <= a3 )
  {
    v8 = (const void *)(v5 + a2);
    a3 = v7;
    if ( v7 <= a5 )
      goto LABEL_4;
    goto LABEL_7;
  }
  v7 = a3;
  v8 = (const void *)(v5 + a2);
  if ( a3 > a5 )
LABEL_7:
    a3 = a5;
LABEL_4:
  result = j_memcmp(v8, a4, a3);
  if ( result == 0 )
    return v7 - a5;
  return result;
}


//======================================================================
// sub_3BDE34
// address: 0x003BDE34   size: 0x4 (4 bytes)
//======================================================================
_DWORD *__fastcall sub_3BDE34(_DWORD *result, int a2)
{
  *result = a2;
  return result;
}


//======================================================================
// sub_3BDE38
// address: 0x003BDE38   size: 0x6 (6 bytes)
//======================================================================
int *sub_3BDE38()
{
  return &dword_55FB7C;
}


//======================================================================
// sub_3BDE44
// address: 0x003BDE44   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3BDE44(int a1)
{
  return *(_DWORD *)(a1 + 8) >> 31;
}


//======================================================================
// sub_3BDE58
// address: 0x003BDE58   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_3BDE58(int result)
{
  *(_DWORD *)(result + 8) = -1;
  return result;
}


//======================================================================
// sub_3BDE60
// address: 0x003BDE60   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_3BDE60(int result)
{
  *(_DWORD *)(result + 8) = 0;
  return result;
}


//======================================================================
// sub_3BDE68
// address: 0x003BDE68   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3BDE68(int *result, int a2)
{
  if ( result != &dword_55FB7C )
  {
    *result = a2;
    result[2] = 0;
    *((_BYTE *)result + a2 + 12) = 0;
  }
  return result;
}


//======================================================================
// sub_3BDE84
// address: 0x003BDE84   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BDE84(int a1)
{
  return a1 + 12;
}


//======================================================================
// sub_3BDE88
// address: 0x003BDE88   size: 0x54 (84 bytes)
//======================================================================
_DWORD *__fastcall sub_3BDE88(unsigned int a1, unsigned int a2)
{
  unsigned int v2; // r4
  size_t v3; // r0
  _DWORD *result; // r0

  v2 = a1;
  if ( a1 > 0x3FFFFFFC )
    sub_3BD058("basic_string::_S_create");
  v3 = a1 + 13;
  if ( v2 > a2 )
  {
    if ( v2 < 2 * a2 )
      v2 = 2 * a2;
    if ( v2 + 29 > 0x1000 && a2 < v2 )
    {
      v2 = v2 + 4096 - (((_WORD)v2 + 29) & 0xFFF);
      if ( v2 > 0x3FFFFFFC )
        v2 = 1073741820;
    }
    v3 = v2 + 13;
  }
  result = operator new(v3);
  result[1] = v2;
  result[2] = 0;
  return result;
}


//======================================================================
// sub_3BDEE4
// address: 0x003BDEE4   size: 0x44 (68 bytes)
//======================================================================
char *__fastcall sub_3BDEE4(unsigned int a1, int a2)
{
  _DWORD *v4; // r5
  int *v6; // r0
  int *v7; // r6

  if ( a1 == 0 )
    return &byte_55FB88;
  v6 = sub_3BDE88(a1, 0);
  v7 = v6;
  v4 = v6 + 3;
  if ( a1 == 1 )
    *((_BYTE *)v6 + 12) = a2;
  else
    j_memset(v6 + 3, a2, a1);
  if ( v7 != &dword_55FB7C )
  {
    v7[2] = 0;
    *v7 = a1;
    *((_BYTE *)v4 + a1) = 0;
  }
  return (char *)v4;
}


//======================================================================
// sub_3BDF30
// address: 0x003BDF30   size: 0x14 (20 bytes)
//======================================================================
char **__fastcall sub_3BDF30(char **a1)
{
  *a1 = sub_3BDEE4(0, 0);
  return a1;
}


//======================================================================
// sub_3BDF44
// address: 0x003BDF44   size: 0x14 (20 bytes)
//======================================================================
char **__fastcall sub_3BDF44(char **a1, unsigned int a2, int a3)
{
  *a1 = sub_3BDEE4(a2, a3);
  return a1;
}


//======================================================================
// sub_3BDF58
// address: 0x003BDF58   size: 0x8 (8 bytes)
//======================================================================
char *__fastcall sub_3BDF58(unsigned int a1, int a2)
{
  return sub_3BDEE4(a1, a2);
}


//======================================================================
// sub_3BDF60
// address: 0x003BDF60   size: 0x8 (8 bytes)
//======================================================================
void __fastcall sub_3BDF60(void *a1)
{
  operator delete(a1);
}


//======================================================================
// sub_3BDF68
// address: 0x003BDF68   size: 0x12 (18 bytes)
//======================================================================
int *__fastcall sub_3BDF68(int *result, int a2)
{
  if ( result != &dword_55FB7C )
    return (int *)sub_13B89C((int)result, a2);
  return result;
}


//======================================================================
// sub_3BDF80
// address: 0x003BDF80   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall sub_3BDF80(_DWORD *a1)
{
  int *v2; // r0
  _BYTE v4[4]; // [sp+4h] [bp-4h] BYREF

  v2 = (int *)(*a1 - 12);
  if ( v2 != &dword_55FB7C )
    sub_13B89C((int)v2, (int)v4);
  return a1;
}


//======================================================================
// sub_3BDFA4
// address: 0x003BDFA4   size: 0xFE (254 bytes)
//======================================================================
int *__fastcall sub_3BDFA4(int *result, size_t a2, int a3, int a4)
{
  _BYTE *v4; // r6
  int *v6; // r4
  unsigned int v8; // r3
  size_t v10; // r2
  unsigned int v11; // r1
  int *v12; // r8
  unsigned int v13; // r9
  size_t v14; // r11
  _DWORD *v15; // r0
  _BYTE *v16; // r1
  _BYTE *v17; // r0
  _BYTE *v18; // r1
  _BYTE *v19; // r1
  char v20[8]; // [sp+4h] [bp-8h] BYREF

  v4 = (_BYTE *)*result;
  v6 = (int *)(*result - 12);
  v8 = a4 - a3 + *v6;
  v10 = *v6 - a2;
  v11 = *(_DWORD *)(*result - 8);
  v12 = result;
  v13 = v8;
  v14 = v10 - a3;
  if ( v8 <= v11 && *(int *)(*result - 4) <= 0 )
  {
    if ( a3 != a4 && v14 != 0 )
    {
      result = (int *)&v4[a4 + a2];
      v19 = &v4[a3 + a2];
      if ( v14 == 1 )
        *(_BYTE *)result = *v19;
      else
        result = (int *)j_memmove(result, v19, v14);
      v4 = (_BYTE *)*v12;
      v6 = (int *)(*v12 - 12);
    }
  }
  else
  {
    v15 = sub_3BDE88(v8, v11);
    v4 = v15 + 3;
    if ( a2 != 0 )
    {
      v16 = (_BYTE *)*v12;
      if ( a2 == 1 )
        *((_BYTE *)v15 + 12) = *v16;
      else
        j_memcpy(v15 + 3, v16, a2);
    }
    if ( v14 != 0 )
    {
      v17 = &v4[a4 + a2];
      v18 = (_BYTE *)(*v12 + a3 + a2);
      if ( v14 == 1 )
        *v17 = *v18;
      else
        j_memcpy(v17, v18, v14);
    }
    result = (int *)(*v12 - 12);
    if ( result != &dword_55FB7C )
      result = (int *)sub_13B89C((int)result, (int)v20);
    v6 = (int *)(v4 - 12);
    *v12 = (int)v4;
  }
  if ( v6 != &dword_55FB7C )
  {
    v6[2] = 0;
    *v6 = v13;
    v4[v13] = 0;
  }
  return result;
}


//======================================================================
// sub_3BE0AC
// address: 0x003BE0AC   size: 0x2C (44 bytes)
//======================================================================
int *__fastcall sub_3BE0AC(int *result)
{
  int *v1; // r3
  int *v2; // r4

  v1 = (int *)(*result - 12);
  v2 = result;
  if ( v1 != &dword_55FB7C )
  {
    if ( *(int *)(*result - 4) > 0 )
    {
      result = sub_3BDFA4(result, 0, 0, 0);
      v1 = (int *)(*v2 - 12);
    }
    v1[2] = -1;
  }
  return result;
}


//======================================================================
// sub_3BE0DC
// address: 0x003BE0DC   size: 0x12 (18 bytes)
//======================================================================
int *__fastcall sub_3BE0DC(int *result)
{
  if ( *(int *)(*result - 4) >= 0 )
    return sub_3BE0AC(result);
  return result;
}


//======================================================================
// sub_3BE0F0
// address: 0x003BE0F0   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3BE0F0(int *a1)
{
  int result; // r0

  result = *a1;
  if ( *(int *)(result - 4) >= 0 )
  {
    sub_3BE0AC(a1);
    return *a1;
  }
  return result;
}


//======================================================================
// sub_3BE10C
// address: 0x003BE10C   size: 0x20 (32 bytes)
//======================================================================
int *__fastcall sub_3BE10C(int *a1, int *a2)
{
  int v2; // r3

  v2 = *a2;
  if ( *(int *)(*a2 - 4) >= 0 )
  {
    sub_3BE0AC(a2);
    v2 = *a2;
  }
  *a1 = v2;
  return a1;
}


//======================================================================
// sub_3BE12C
// address: 0x003BE12C   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_3BE12C(int *a1)
{
  int v1; // r3
  _DWORD *v2; // r2

  v1 = *a1;
  v2 = (_DWORD *)(*a1 - 12);
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3BE0AC(a1);
    v1 = *a1;
    v2 = (_DWORD *)(*a1 - 12);
  }
  return v1 + *v2;
}


//======================================================================
// sub_3BE14C
// address: 0x003BE14C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_3BE14C(int *a1, int a2)
{
  int v2; // r3

  v2 = *a1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3BE0AC(a1);
    v2 = *a1;
  }
  return v2 + a2;
}


//======================================================================
// sub_3BE168
// address: 0x003BE168   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_3BE168(int *a1)
{
  int result; // r0

  result = *a1;
  if ( *(int *)(result - 4) >= 0 )
  {
    sub_3BE0AC(a1);
    return *a1;
  }
  return result;
}


//======================================================================
// sub_3BE184
// address: 0x003BE184   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_3BE184(int *a1)
{
  int v1; // r3
  int v3; // r5

  v1 = *a1;
  v3 = *(_DWORD *)(*a1 - 12) - 1;
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3BE0AC(a1);
    v1 = *a1;
  }
  return v1 + v3;
}


//======================================================================
// sub_3BE1A4
// address: 0x003BE1A4   size: 0x2A (42 bytes)
//======================================================================
unsigned int __fastcall sub_3BE1A4(int *a1, unsigned int a2)
{
  int v2; // r3

  v2 = *a1;
  if ( a2 >= *(_DWORD *)(*a1 - 12) )
    sub_3BD0B4("basic_string::at");
  if ( *(int *)(*a1 - 4) >= 0 )
  {
    sub_3BE0AC(a1);
    v2 = *a1;
  }
  return v2 + a2;
}


//======================================================================
// sub_3BE1D4
// address: 0x003BE1D4   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall sub_3BE1D4(_DWORD *a1, int *a2)
{
  int v2; // r3
  _DWORD *v4; // r2

  v2 = *a2;
  v4 = (_DWORD *)(*a2 - 12);
  if ( *(int *)(*a2 - 4) >= 0 )
  {
    sub_3BE0AC(a2);
    v2 = *a2;
    v4 = (_DWORD *)(*a2 - 12);
  }
  *a1 = v2 + *v4;
  return a1;
}


//======================================================================
// sub_3BE1FC
// address: 0x003BE1FC   size: 0x12 (18 bytes)
//======================================================================
int *__fastcall sub_3BE1FC(int *a1)
{
  return sub_3BDFA4(a1, 0, *(_DWORD *)(*a1 - 12), 0);
}


//======================================================================
// sub_3BE210
// address: 0x003BE210   size: 0x2E (46 bytes)
//======================================================================
int *__fastcall sub_3BE210(int *a1, size_t a2, unsigned int a3)
{
  int v4; // r3
  size_t v6; // r3
  int v7; // r2

  v4 = *a1;
  v6 = *(_DWORD *)(v4 - 12);
  if ( a2 > v6 )
    sub_3BD0B4("basic_string::erase");
  v7 = v6 - a2;
  if ( v6 - a2 > a3 )
    v7 = a3;
  sub_3BDFA4(a1, a2, v7, 0);
  return a1;
}


//======================================================================
// sub_3BE244
// address: 0x003BE244   size: 0x22 (34 bytes)
//======================================================================
size_t __fastcall sub_3BE244(int *a1, int a2)
{
  size_t v3; // r5
  size_t result; // r0

  v3 = a2 - *a1;
  sub_3BDFA4(a1, v3, 1, 0);
  result = *a1 + v3;
  *(_DWORD *)(*a1 - 4) = -1;
  return result;
}


//======================================================================
// sub_3BE268
// address: 0x003BE268   size: 0x2C (44 bytes)
//======================================================================
size_t __fastcall sub_3BE268(int *a1, size_t a2, int a3)
{
  int v3; // r2
  size_t result; // r0
  size_t v6; // r5
  int v7; // r1

  v3 = a3 - a2;
  result = a2;
  if ( v3 != 0 )
  {
    v6 = a2 - *a1;
    sub_3BDFA4(a1, v6, v3, 0);
    v7 = *a1;
    *(_DWORD *)(*a1 - 4) = -1;
    return v7 + v6;
  }
  return result;
}


//======================================================================
// sub_3BE294
// address: 0x003BE294   size: 0x48 (72 bytes)
//======================================================================
int *__fastcall sub_3BE294(int *a1, size_t a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  unsigned __int8 *v8; // r0

  if ( a4 > a3 - *(_DWORD *)(*a1 - 12) + 1073741820 )
    sub_3BD058("basic_string::_M_replace_aux");
  sub_3BDFA4(a1, a2, a3, a4);
  if ( a4 != 0 )
  {
    v8 = (unsigned __int8 *)(*a1 + a2);
    if ( a4 == 1 )
      *v8 = a5;
    else
      j_memset(v8, a5, a4);
  }
  return a1;
}


//======================================================================
// sub_3BE2E4
// address: 0x003BE2E4   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_3BE2E4(int *a1, unsigned int a2, unsigned __int8 a3)
{
  return sub_3BE294(a1, 0, *(_DWORD *)(*a1 - 12), a2, a3);
}


//======================================================================
// sub_3BE300
// address: 0x003BE300   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall sub_3BE300(int *a1, unsigned __int8 a2)
{
  sub_3BE294(a1, 0, *(_DWORD *)(*a1 - 12), 1u, a2);
  return a1;
}


//======================================================================
// sub_3BE31C
// address: 0x003BE31C   size: 0x26 (38 bytes)
//======================================================================
int *__fastcall sub_3BE31C(int *a1, size_t a2, unsigned int a3, unsigned __int8 a4)
{
  if ( a2 > *(_DWORD *)(*a1 - 12) )
    sub_3BD0B4("basic_string::insert");
  return sub_3BE294(a1, a2, 0, a3, a4);
}


//======================================================================
// sub_3BE348
// address: 0x003BE348   size: 0x28 (40 bytes)
//======================================================================
size_t __fastcall sub_3BE348(int *a1, int a2, unsigned __int8 a3)
{
  size_t v3; // r5
  size_t result; // r0

  v3 = a2 - *a1;
  sub_3BE294(a1, v3, 0, 1u, a3);
  result = *a1 + v3;
  *(_DWORD *)(*a1 - 4) = -1;
  return result;
}


//======================================================================
// sub_3BE370
// address: 0x003BE370   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_3BE370(int *a1, size_t a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  size_t v6; // r4
  int v7; // r2

  v6 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v6 )
    sub_3BD0B4("basic_string::replace");
  v7 = v6 - a2;
  if ( v6 - a2 > a3 )
    v7 = a3;
  return sub_3BE294(a1, a2, v7, a4, a5);
}


//======================================================================
// sub_3BE3A4
// address: 0x003BE3A4   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_3BE3A4(int *a1, int a2, int a3, unsigned int a4, unsigned __int8 a5)
{
  return sub_3BE294(a1, a2 - *a1, a3 - a2, a4, a5);
}


//======================================================================
// sub_3BE3C0
// address: 0x003BE3C0   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3BE3C0(int *a1, int a2, unsigned int a3, unsigned __int8 a4)
{
  return sub_3BE294(a1, a2 - *a1, 0, a3, a4);
}


//======================================================================
// sub_3BE3D8
// address: 0x003BE3D8   size: 0x2E (46 bytes)
//======================================================================
int *__fastcall sub_3BE3D8(int *a1, size_t a2, int a3, _BYTE *a4, size_t a5)
{
  _BYTE *v8; // r0

  sub_3BDFA4(a1, a2, a3, a5);
  if ( a5 != 0 )
  {
    v8 = (_BYTE *)(*a1 + a2);
    if ( a5 == 1 )
      *v8 = *a4;
    else
      j_memcpy(v8, a4, a5);
  }
  return a1;
}


//======================================================================
// sub_3BE408
// address: 0x003BE408   size: 0x92 (146 bytes)
//======================================================================
int *__fastcall sub_3BE408(int *a1, int *a2, size_t a3)
{
  int *v3; // r4
  int *v6; // r1
  int v8; // r2
  int *result; // r0

  v3 = (int *)*a1;
  v6 = (int *)(*a1 - 12);
  v8 = *v6;
  if ( a3 > 0x3FFFFFFC )
    sub_3BD058("basic_string::assign");
  if ( a2 < v3 || a2 > (int *)((char *)v3 + v8) || *(v3 - 1) > 0 )
    return sub_3BE3D8(a1, 0, v8, a2, a3);
  if ( a3 > (char *)a2 - (char *)v3 )
  {
    if ( a2 == v3 )
      goto LABEL_10;
    if ( a3 != 1 )
    {
      j_memmove(v3, a2, a3);
      v3 = (int *)*a1;
      v6 = (int *)(*a1 - 12);
      goto LABEL_10;
    }
  }
  else if ( a3 != 1 )
  {
    j_memcpy(v3, a2, a3);
    v3 = (int *)*a1;
    v6 = (int *)(*a1 - 12);
    goto LABEL_10;
  }
  *(_BYTE *)v3 = *(_BYTE *)a2;
  v3 = (int *)*a1;
  v6 = (int *)(*a1 - 12);
LABEL_10:
  result = a1;
  if ( v6 != &dword_55FB7C )
  {
    v6[2] = 0;
    *v6 = a3;
    *((_BYTE *)v3 + a3) = 0;
  }
  return result;
}


//======================================================================
// sub_3BE4A8
// address: 0x003BE4A8   size: 0x10 (16 bytes)
//======================================================================
int *__fastcall sub_3BE4A8(int *a1, int *a2, size_t a3)
{
  sub_3BE408(a1, a2, a3);
  return a1;
}


//======================================================================
// sub_3BE4B8
// address: 0x003BE4B8   size: 0x28 (40 bytes)
//======================================================================
int *__fastcall sub_3BE4B8(int *a1, int *a2, unsigned int a3, size_t a4)
{
  int v4; // r1
  unsigned int v5; // r4
  int *v6; // r1
  size_t v7; // r2

  v4 = *a2;
  v5 = *(_DWORD *)(v4 - 12);
  if ( a3 > v5 )
    sub_3BD0B4("basic_string::assign");
  v6 = (int *)(v4 + a3);
  v7 = v5 - a3;
  if ( v7 > a4 )
    v7 = a4;
  return sub_3BE408(a1, v6, v7);
}


//======================================================================
// sub_3BE4E4
// address: 0x003BE4E4   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3BE4E4(int *a1, char *a2)
{
  size_t v4; // r0

  v4 = j_strlen(a2);
  return sub_3BE408(a1, (int *)a2, v4);
}


//======================================================================
// sub_3BE4FC
// address: 0x003BE4FC   size: 0xC (12 bytes)
//======================================================================
int *__fastcall sub_3BE4FC(int *a1, int *a2, size_t a3)
{
  return sub_3BE408(a1, a2, a3);
}


//======================================================================
// sub_3BE508
// address: 0x003BE508   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3BE508(int *a1, char *a2)
{
  size_t v4; // r0

  v4 = j_strlen(a2);
  return sub_3BE408(a1, (int *)a2, v4);
}


//======================================================================
// sub_3BE520
// address: 0x003BE520   size: 0xD0 (208 bytes)
//======================================================================
int *__fastcall sub_3BE520(int *a1, size_t a2, _BYTE *a3, unsigned int a4)
{
  unsigned int v5; // r3
  size_t v8; // r2
  _BYTE *v11; // r6
  _BYTE *v12; // r1
  _BYTE *v13; // r7
  int v14; // r6
  _BYTE *v15; // r0
  _BYTE *v16; // r1

  v5 = *a1;
  v8 = *(_DWORD *)(*a1 - 12);
  if ( a2 > v8 )
    sub_3BD0B4("basic_string::insert");
  if ( a4 > 1073741820 - v8 )
    sub_3BD058("basic_string::insert");
  if ( (unsigned int)a3 < v5 || (unsigned int)a3 > v5 + v8 || *(int *)(*a1 - 4) > 0 )
    return sub_3BE3D8(a1, a2, 0, a3, a4);
  v11 = &a3[-v5];
  sub_3BDFA4(a1, a2, 0, a4);
  v12 = &v11[*a1];
  v13 = (_BYTE *)(*a1 + a2);
  if ( v13 < &v12[a4] )
  {
    if ( v12 < v13 )
    {
      v14 = v13 - v12;
      if ( v13 - v12 == 1 )
        *v13 = *v12;
      else
        j_memcpy(v13, v12, v13 - v12);
      v15 = &v13[v14];
      v16 = &v13[a4];
      if ( a4 - v14 == 1 )
        *v15 = *v16;
      else
        j_memcpy(v15, v16, a4 - v14);
      return a1;
    }
    else
    {
      if ( a4 == 1 )
        *v13 = v12[1];
      else
        j_memcpy(v13, &v12[a4], a4);
      return a1;
    }
  }
  else
  {
    if ( a4 == 1 )
      *v13 = *v12;
    else
      j_memcpy(v13, v12, a4);
    return a1;
  }
}


//======================================================================
// sub_3BE5FC
// address: 0x003BE5FC   size: 0x10 (16 bytes)
//======================================================================
int *__fastcall sub_3BE5FC(int *a1, int a2, _BYTE *a3, unsigned int a4)
{
  return sub_3BE520(a1, a2 - *a1, a3, a4);
}


//======================================================================
// sub_3BE60C
// address: 0x003BE60C   size: 0x2A (42 bytes)
//======================================================================
int *__fastcall sub_3BE60C(int *a1, size_t a2, int *a3, unsigned int a4, unsigned int a5)
{
  int v5; // r2
  unsigned int v6; // r4
  _BYTE *v7; // r2
  unsigned int v8; // r3

  v5 = *a3;
  v6 = *(_DWORD *)(v5 - 12);
  if ( a4 > v6 )
    sub_3BD0B4("basic_string::insert");
  v7 = (_BYTE *)(v5 + a4);
  v8 = v6 - a4;
  if ( v8 > a5 )
    v8 = a5;
  return sub_3BE520(a1, a2, v7, v8);
}


//======================================================================
// sub_3BE63C
// address: 0x003BE63C   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall sub_3BE63C(int *a1, size_t a2, char *a3)
{
  size_t v6; // r0

  v6 = j_strlen(a3);
  return sub_3BE520(a1, a2, a3, v6);
}


//======================================================================
// sub_3BE658
// address: 0x003BE658   size: 0x10 (16 bytes)
//======================================================================
int *__fastcall sub_3BE658(int *a1, size_t a2, _BYTE **a3)
{
  return sub_3BE520(a1, a2, *a3, *((_DWORD *)*a3 - 3));
}


//======================================================================
// sub_3BE668
// address: 0x003BE668   size: 0x20 (32 bytes)
//======================================================================
int *__fastcall sub_3BE668(int *a1)
{
  int v1; // r3

  v1 = *(_DWORD *)(*a1 - 12);
  if ( v1 == 0 )
    sub_3BD0B4("basic_string::erase");
  return sub_3BDFA4(a1, v1 - 1, 1, 0);
}


//======================================================================
// sub_3BE68C
// address: 0x003BE68C   size: 0x1C (28 bytes)
//======================================================================
int *__fastcall sub_3BE68C(int *a1)
{
  if ( a1 != &dword_55FB7C )
    sub_3C82FC(a1 + 2, 1);
  return a1 + 3;
}


//======================================================================
// sub_3BE6AC
// address: 0x003BE6AC   size: 0x50 (80 bytes)
//======================================================================
int *__fastcall sub_3BE6AC(int a1, int a2, int a3)
{
  int *v4; // r0
  size_t v5; // r2
  int *v6; // r5
  int *result; // r0

  v4 = sub_3BDE88(a3 + *(_DWORD *)a1, *(_DWORD *)(a1 + 4));
  v5 = *(_DWORD *)a1;
  v6 = v4;
  result = v4 + 3;
  if ( *(_DWORD *)a1 != 0 )
  {
    if ( v5 == 1 )
    {
      *((_BYTE *)v6 + 12) = *(_BYTE *)(a1 + 12);
      result = v6 + 3;
      v5 = *(_DWORD *)a1;
    }
    else
    {
      j_memcpy(v6 + 3, (const void *)(a1 + 12), v5);
      v5 = *(_DWORD *)a1;
      result = v6 + 3;
    }
  }
  if ( v6 != &dword_55FB7C )
  {
    v6[2] = 0;
    *v6 = v5;
    *((_BYTE *)result + v5) = 0;
  }
  return result;
}


//======================================================================
// sub_3BE700
// address: 0x003BE700   size: 0x4C (76 bytes)
//======================================================================
int *__fastcall sub_3BE700(int *result, unsigned int a2)
{
  unsigned int *v2; // r3
  _DWORD *v3; // r4
  unsigned int v4; // r0
  int *v5; // r6
  _BYTE v6[4]; // [sp+4h] [bp-4h] BYREF

  v2 = (unsigned int *)(*result - 12);
  v3 = result;
  if ( a2 != *(_DWORD *)(*result - 8) || *(int *)(*result - 4) > 0 )
  {
    v4 = a2;
    if ( a2 < *v2 )
      v4 = *v2;
    v5 = sub_3BE6AC((int)v2, (int)v6, v4 - *v2);
    result = (int *)(*v3 - 12);
    if ( result != &dword_55FB7C )
      result = (int *)sub_13B89C((int)result, (int)v6);
    *v3 = v5;
  }
  return result;
}


//======================================================================
// sub_3BE750
// address: 0x003BE750   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3BE750(int *result)
{
  if ( *(_DWORD *)(*result - 8) > *(_DWORD *)(*result - 12) )
    return sub_3BE700(result, 0);
  return result;
}


//======================================================================
// sub_3BE774
// address: 0x003BE774   size: 0x78 (120 bytes)
//======================================================================
int *__fastcall sub_3BE774(int *a1, _BYTE **a2)
{
  _BYTE *v2; // r3
  size_t v3; // r5
  int v6; // r2
  int *v7; // r7
  int v8; // r0
  unsigned int v9; // r8
  _BYTE *v10; // r0
  int v11; // r2
  int *v12; // r3

  v2 = *a2;
  v3 = *((_DWORD *)*a2 - 3);
  if ( v3 != 0 )
  {
    v6 = *a1;
    v7 = (int *)(*a1 - 12);
    v8 = *v7;
    v9 = *v7 + v3;
    if ( v9 > v7[1] || v7[2] > 0 )
    {
      sub_3BE700(a1, *v7 + v3);
      v6 = *a1;
      v8 = *(_DWORD *)(*a1 - 12);
      v2 = *a2;
    }
    v10 = (_BYTE *)(v6 + v8);
    if ( v3 == 1 )
      *v10 = *v2;
    else
      j_memcpy(v10, v2, v3);
    v11 = *a1;
    v12 = (int *)(*a1 - 12);
    if ( v12 != &dword_55FB7C )
    {
      *(_DWORD *)(*a1 - 4) = 0;
      *v12 = v9;
      *(_BYTE *)(v11 + v9) = 0;
    }
  }
  return a1;
}


//======================================================================
// sub_3BE7F0
// address: 0x003BE7F0   size: 0x8 (8 bytes)
//======================================================================
int *__fastcall sub_3BE7F0(int *a1, _BYTE **a2)
{
  return sub_3BE774(a1, a2);
}


//======================================================================
// sub_3BE7F8
// address: 0x003BE7F8   size: 0x98 (152 bytes)
//======================================================================
int *__fastcall sub_3BE7F8(int *a1, int *a2, unsigned int a3, size_t a4)
{
  int v5; // r2
  unsigned int *v7; // r1
  size_t v9; // r5
  int v10; // r3
  int v11; // r12
  int v12; // r8
  _BYTE *v13; // r0
  _BYTE *v14; // r1
  int v15; // r2
  int *v16; // r3

  v5 = *a2;
  v7 = (unsigned int *)(*a2 - 12);
  if ( a3 > *v7 )
    sub_3BD0B4("basic_string::append");
  v9 = *v7 - a3;
  if ( v9 > a4 )
    v9 = a4;
  if ( v9 != 0 )
  {
    v10 = *a1;
    v11 = *(_DWORD *)(*a1 - 12);
    v12 = v9 + v11;
    if ( v9 + v11 > *(_DWORD *)(*a1 - 8) || *(int *)(*a1 - 4) > 0 )
    {
      sub_3BE700(a1, v9 + v11);
      v10 = *a1;
      v11 = *(_DWORD *)(*a1 - 12);
      v5 = *a2;
    }
    v13 = (_BYTE *)(v10 + v11);
    v14 = (_BYTE *)(v5 + a3);
    if ( v9 == 1 )
      *v13 = *v14;
    else
      j_memcpy(v13, v14, v9);
    v15 = *a1;
    v16 = (int *)(*a1 - 12);
    if ( v16 != &dword_55FB7C )
    {
      *(_DWORD *)(*a1 - 4) = 0;
      *v16 = v12;
      *(_BYTE *)(v15 + v12) = 0;
    }
  }
  return a1;
}


//======================================================================
// sub_3BE898
// address: 0x003BE898   size: 0x96 (150 bytes)
//======================================================================
int *__fastcall sub_3BE898(int *a1, unsigned int a2, size_t a3)
{
  _BYTE *v4; // r6
  unsigned int v6; // r3
  int *v7; // r2
  int v8; // r0
  unsigned int v9; // r7
  _BYTE *v10; // r0
  int v11; // r2
  int *v12; // r3
  unsigned int v14; // r6

  v4 = (_BYTE *)a2;
  if ( a3 == 0 )
    return a1;
  v6 = *a1;
  v7 = (int *)(*a1 - 12);
  v8 = *v7;
  if ( a3 > 1073741820 - *v7 )
    sub_3BD058("basic_string::append");
  v9 = a3 + v8;
  if ( a3 + v8 > v7[1] )
  {
    if ( a2 < v6 )
      goto LABEL_5;
LABEL_15:
    if ( a2 <= v6 + v8 )
    {
      v14 = a2 - v6;
      sub_3BE700(a1, v9);
      v6 = *a1;
      v4 = (_BYTE *)(*a1 + v14);
      v8 = *(_DWORD *)(*a1 - 12);
      goto LABEL_6;
    }
    goto LABEL_5;
  }
  if ( v7[2] > 0 )
  {
    if ( a2 >= v6 )
      goto LABEL_15;
LABEL_5:
    sub_3BE700(a1, v9);
    v6 = *a1;
    v8 = *(_DWORD *)(*a1 - 12);
  }
LABEL_6:
  v10 = (_BYTE *)(v6 + v8);
  if ( a3 == 1 )
    *v10 = *v4;
  else
    j_memcpy(v10, v4, a3);
  v11 = *a1;
  v12 = (int *)(*a1 - 12);
  if ( v12 != &dword_55FB7C )
  {
    *(_DWORD *)(*a1 - 4) = 0;
    *v12 = v9;
    *(_BYTE *)(v11 + v9) = 0;
  }
  return a1;
}


//======================================================================
// sub_3BE93C
// address: 0x003BE93C   size: 0xC (12 bytes)
//======================================================================
int *__fastcall sub_3BE93C(int *a1, unsigned int a2, size_t a3)
{
  return sub_3BE898(a1, a2, a3);
}


//======================================================================
// sub_3BE948
// address: 0x003BE948   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3BE948(int *a1, char *a2)
{
  size_t v4; // r0

  v4 = j_strlen(a2);
  return sub_3BE898(a1, (unsigned int)a2, v4);
}


//======================================================================
// sub_3BE960
// address: 0x003BE960   size: 0xC (12 bytes)
//======================================================================
int *__fastcall sub_3BE960(int *a1, unsigned int a2, size_t a3)
{
  return sub_3BE898(a1, a2, a3);
}


//======================================================================
// sub_3BE96C
// address: 0x003BE96C   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3BE96C(int *a1, char *a2)
{
  size_t v4; // r0

  v4 = j_strlen(a2);
  return sub_3BE898(a1, (unsigned int)a2, v4);
}


//======================================================================
// sub_3BE984
// address: 0x003BE984   size: 0x7A (122 bytes)
//======================================================================
int *__fastcall sub_3BE984(int *a1, size_t a2, int a3)
{
  int v6; // r0
  int v7; // r3
  int v8; // r7
  _BYTE *v9; // r0
  int v10; // r2
  int *v11; // r3

  if ( a2 != 0 )
  {
    v6 = *a1;
    v7 = *(_DWORD *)(v6 - 12);
    if ( a2 > 1073741820 - v7 )
      sub_3BD058("basic_string::append");
    v8 = a2 + v7;
    if ( a2 + v7 > *(_DWORD *)(v6 - 8) || *(int *)(v6 - 4) > 0 )
    {
      sub_3BE700(a1, a2 + v7);
      v6 = *a1;
      v7 = *(_DWORD *)(*a1 - 12);
    }
    v9 = (_BYTE *)(v6 + v7);
    if ( a2 == 1 )
      *v9 = a3;
    else
      j_memset(v9, a3, a2);
    v10 = *a1;
    v11 = (int *)(*a1 - 12);
    if ( v11 != &dword_55FB7C )
    {
      *(_DWORD *)(*a1 - 4) = 0;
      *v11 = v8;
      *(_BYTE *)(v10 + v8) = 0;
    }
  }
  return a1;
}


//======================================================================
// sub_3BEA0C
// address: 0x003BEA0C   size: 0x30 (48 bytes)
//======================================================================
int *__fastcall sub_3BEA0C(int *result, size_t a2, int a3)
{
  unsigned int v3; // r3

  v3 = *(_DWORD *)(*result - 12);
  if ( a2 > 0x3FFFFFFC )
    sub_3BD058("basic_string::resize");
  if ( a2 > v3 )
    return sub_3BE984(result, a2 - v3, a3);
  if ( a2 < v3 )
    return sub_3BDFA4(result, a2, v3 - a2, 0);
  return result;
}


//======================================================================
// sub_3BEA44
// address: 0x003BEA44   size: 0xA (10 bytes)
//======================================================================
int *__fastcall sub_3BEA44(int *a1, size_t a2)
{
  return sub_3BEA0C(a1, a2, 0);
}


//======================================================================
// sub_3BEA50
// address: 0x003BEA50   size: 0x48 (72 bytes)
//======================================================================
int *__fastcall sub_3BEA50(int *a1, char a2)
{
  int v2; // r3
  int *result; // r0
  int v5; // r2
  unsigned int v7; // r5
  int v8; // r2
  int *v9; // r3

  v2 = *a1;
  result = (int *)(*a1 - 12);
  v5 = *result;
  v7 = *result + 1;
  if ( v7 > result[1] || result[2] > 0 )
  {
    result = sub_3BE700(a1, v7);
    v2 = *a1;
    v5 = *(_DWORD *)(*a1 - 12);
  }
  *(_BYTE *)(v2 + v5) = a2;
  v8 = *a1;
  v9 = (int *)(*a1 - 12);
  if ( v9 != &dword_55FB7C )
  {
    *(_DWORD *)(*a1 - 4) = 0;
    *v9 = v7;
    *(_BYTE *)(v8 + v7) = 0;
  }
  return result;
}


//======================================================================
// sub_3BEA9C
// address: 0x003BEA9C   size: 0x4A (74 bytes)
//======================================================================
int *__fastcall sub_3BEA9C(int *a1, char a2)
{
  int v2; // r3
  int *v4; // r0
  int v5; // r2
  unsigned int v7; // r5
  int v8; // r2
  int *v9; // r3

  v2 = *a1;
  v4 = (int *)(*a1 - 12);
  v5 = *v4;
  v7 = *v4 + 1;
  if ( v7 > v4[1] || v4[2] > 0 )
  {
    sub_3BE700(a1, v7);
    v2 = *a1;
    v5 = *(_DWORD *)(*a1 - 12);
  }
  *(_BYTE *)(v2 + v5) = a2;
  v8 = *a1;
  v9 = (int *)(*a1 - 12);
  if ( v9 != &dword_55FB7C )
  {
    *(_DWORD *)(*a1 - 4) = 0;
    *v9 = v7;
    *(_BYTE *)(v8 + v7) = 0;
  }
  return a1;
}


//======================================================================
// sub_3BEAEC
// address: 0x003BEAEC   size: 0x2A (42 bytes)
//======================================================================
int *__fastcall sub_3BEAEC(int *a1, int a2)
{
  if ( a1[2] < 0 )
    return sub_3BE6AC((int)a1, a2, 0);
  if ( a1 != &dword_55FB7C )
    sub_3C82FC(a1 + 2, 1);
  return a1 + 3;
}


//======================================================================
// sub_3BEB1C
// address: 0x003BEB1C   size: 0x38 (56 bytes)
//======================================================================
int **__fastcall sub_3BEB1C(int **a1, int **a2)
{
  int *v2; // r5
  int *v4; // r0
  int *v5; // r0
  _BYTE v7[8]; // [sp+4h] [bp-8h] BYREF

  v2 = *a2;
  v4 = *a2 - 3;
  if ( *(*a2 - 1) < 0 )
  {
    v5 = sub_3BE6AC((int)v4, (int)v7, 0);
  }
  else
  {
    if ( v4 != &dword_55FB7C )
      sub_3C82FC(v2 - 1, 1);
    v5 = v2;
  }
  *a1 = v5;
  return a1;
}


//======================================================================
// sub_3BEB58
// address: 0x003BEB58   size: 0x5A (90 bytes)
//======================================================================
int **__fastcall sub_3BEB58(int **a1, int **a2)
{
  int *v2; // r5
  int *v4; // r3
  int *v5; // r0
  int *v7; // r0
  _BYTE v8[8]; // [sp+4h] [bp-8h] BYREF

  v2 = *a2;
  v4 = *a1 - 3;
  v5 = *a2 - 3;
  if ( v4 != v5 )
  {
    if ( *(*a2 - 1) < 0 )
    {
      v7 = sub_3BE6AC((int)v5, (int)v8, 0);
      v4 = *a1 - 3;
      v2 = v7;
    }
    else if ( v5 != &dword_55FB7C )
    {
      sub_3C82FC(v2 - 1, 1);
      v4 = *a1 - 3;
    }
    if ( v4 != &dword_55FB7C )
      sub_13B89C((int)v4, (int)v8);
    *a1 = v2;
  }
  return a1;
}


//======================================================================
// sub_3BEBBC
// address: 0x003BEBBC   size: 0x8 (8 bytes)
//======================================================================
int **__fastcall sub_3BEBBC(int **a1, int **a2)
{
  return sub_3BEB58(a1, a2);
}


//======================================================================
// sub_3BEBC4
// address: 0x003BEBC4   size: 0x36 (54 bytes)
//======================================================================
int *__fastcall sub_3BEBC4(int *a1, int a2, _BYTE **a3)
{
  *a1 = (int)&byte_55FB88;
  sub_3BE700(a1, *((_DWORD *)*a3 - 3) + 1);
  sub_3BE984(a1, 1u, a2);
  sub_3BE774(a1, a3);
  return a1;
}


//======================================================================
// sub_3BEC18
// address: 0x003BEC18   size: 0x4A (74 bytes)
//======================================================================
char *__fastcall sub_3BEC18(_BYTE *a1, _BYTE *a2)
{
  size_t v3; // r6
  int *v4; // r0
  int *v5; // r7
  _DWORD *v6; // r5

  if ( a1 == a2 )
    return &byte_55FB88;
  v3 = a2 - a1;
  v4 = sub_3BDE88(a2 - a1, 0);
  v5 = v4;
  v6 = v4 + 3;
  if ( v3 == 1 )
    *((_BYTE *)v4 + 12) = *a1;
  else
    j_memcpy(v4 + 3, a1, v3);
  if ( v5 != &dword_55FB7C )
  {
    v5[2] = 0;
    *v5 = v3;
    *((_BYTE *)v6 + v3) = 0;
  }
  return (char *)v6;
}


//======================================================================
// sub_3BEC6C
// address: 0x003BEC6C   size: 0x16 (22 bytes)
//======================================================================
char **__fastcall sub_3BEC6C(char **a1, _BYTE *a2, _BYTE *a3)
{
  *a1 = sub_3BEC18(a2, a3);
  return a1;
}


//======================================================================
// sub_3BEC84
// address: 0x003BEC84   size: 0x6A (106 bytes)
//======================================================================
char *__fastcall sub_3BEC84(_BYTE *a1, _BYTE *a2)
{
  size_t v3; // r7
  int *v4; // r0
  int *v5; // r6
  void *v6; // r5

  if ( a1 == a2 )
    return &byte_55FB88;
  if ( a1 != nullptr )
  {
    v3 = a2 - a1;
    v4 = sub_3BDE88(a2 - a1, 0);
    v5 = v4;
    v6 = v4 + 3;
    if ( v3 == 1 )
    {
      *((_BYTE *)v4 + 12) = *a1;
      goto LABEL_5;
    }
  }
  else
  {
    if ( a2 != nullptr )
      sub_3BCF44("basic_string::_S_construct null not valid");
    v3 = 0;
    v5 = sub_3BDE88(0, 0);
    v6 = v5 + 3;
  }
  j_memcpy(v6, a1, v3);
LABEL_5:
  if ( v5 != &dword_55FB7C )
  {
    v5[2] = 0;
    *v5 = v3;
    *((_BYTE *)v6 + v3) = 0;
  }
  return (char *)v6;
}


//======================================================================
// sub_3BECFC
// address: 0x003BECFC   size: 0x3A (58 bytes)
//======================================================================
char **__fastcall sub_3BECFC(char **a1, int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r1
  unsigned int v6; // r4
  unsigned int v7; // r4

  v4 = *a2;
  v6 = *(_DWORD *)(v4 - 12);
  if ( a3 > v6 )
    sub_3BD0B4("basic_string::basic_string");
  v7 = v6 - a3;
  if ( v7 > a4 )
    v7 = a4;
  *a1 = sub_3BEC84((_BYTE *)(v4 + a3), (_BYTE *)(v4 + v7 + a3));
  return a1;
}


//======================================================================
// sub_3BED3C
// address: 0x003BED3C   size: 0x20 (32 bytes)
//======================================================================
char **__fastcall sub_3BED3C(char **a1, int *a2, unsigned int a3, unsigned int a4)
{
  if ( a3 > *(_DWORD *)(*a2 - 12) )
    sub_3BD0B4("basic_string::substr");
  sub_3BECFC(a1, a2, a3, a4);
  return a1;
}


//======================================================================
// sub_3BED60
// address: 0x003BED60   size: 0x36 (54 bytes)
//======================================================================
char **__fastcall sub_3BED60(char **a1, int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // r1
  unsigned int v6; // r4
  unsigned int v7; // r4

  v4 = *a2;
  v6 = *(_DWORD *)(v4 - 12);
  if ( a3 > v6 )
    sub_3BD0B4("basic_string::basic_string");
  v7 = v6 - a3;
  if ( v7 > a4 )
    v7 = a4;
  *a1 = sub_3BEC84((_BYTE *)(v4 + a3), (_BYTE *)(v4 + v7 + a3));
  return a1;
}


//======================================================================
// sub_3BED9C
// address: 0x003BED9C   size: 0x16 (22 bytes)
//======================================================================
char **__fastcall sub_3BED9C(char **a1, _BYTE *a2, _BYTE *a3)
{
  *a1 = sub_3BEC84(a2, a3);
  return a1;
}


//======================================================================
// sub_3BEDB4
// address: 0x003BEDB4   size: 0x6A (106 bytes)
//======================================================================
char *__fastcall sub_3BEDB4(_BYTE *a1, _BYTE *a2)
{
  size_t v3; // r7
  int *v4; // r0
  int *v5; // r6
  void *v6; // r5

  if ( a1 == a2 )
    return &byte_55FB88;
  if ( a1 != nullptr )
  {
    v3 = a2 - a1;
    v4 = sub_3BDE88(a2 - a1, 0);
    v5 = v4;
    v6 = v4 + 3;
    if ( v3 == 1 )
    {
      *((_BYTE *)v4 + 12) = *a1;
      goto LABEL_5;
    }
  }
  else
  {
    if ( a2 != nullptr )
      sub_3BCF44("basic_string::_S_construct null not valid");
    v3 = 0;
    v5 = sub_3BDE88(0, 0);
    v6 = v5 + 3;
  }
  j_memcpy(v6, a1, v3);
LABEL_5:
  if ( v5 != &dword_55FB7C )
  {
    v5[2] = 0;
    *v5 = v3;
    *((_BYTE *)v6 + v3) = 0;
  }
  return (char *)v6;
}


//======================================================================
// sub_3BEE2C
// address: 0x003BEE2C   size: 0x16 (22 bytes)
//======================================================================
char **__fastcall sub_3BEE2C(char **a1, _BYTE *a2, int a3)
{
  *a1 = sub_3BEDB4(a2, &a2[a3]);
  return a1;
}


//======================================================================
// sub_3BEE44
// address: 0x003BEE44   size: 0xFC (252 bytes)
//======================================================================
int *__fastcall sub_3BEE44(int *a1, size_t a2, unsigned int a3, _BYTE *a4, unsigned int a5)
{
  int *v6; // r7
  unsigned int v7; // r0
  size_t v8; // r1
  int v9; // r5
  _BYTE *v11; // r8
  _BYTE *v12; // r0
  _BYTE *v13; // r1
  _BYTE v14[4]; // [sp+8h] [bp-8h] BYREF
  char *v15; // [sp+Ch] [bp-4h] BYREF

  v6 = a1;
  v7 = *a1;
  v8 = *(_DWORD *)(v7 - 12);
  if ( a2 > v8 )
    sub_3BD0B4("basic_string::replace");
  v9 = v8 - a2;
  if ( v8 - a2 > a3 )
    v9 = a3;
  if ( a5 > v9 - v8 + 1073741820 )
    sub_3BD058("basic_string::replace");
  if ( (unsigned int)a4 < v7 || (unsigned int)a4 > v7 + v8 || *(int *)(v7 - 4) > 0 )
    return sub_3BE3D8(v6, a2, v9, a4, a5);
  if ( (unsigned int)&a4[a5] <= v7 + a2 )
  {
    v11 = &a4[-v7];
    goto LABEL_12;
  }
  if ( (unsigned int)a4 >= v7 + v9 + a2 )
  {
    v11 = &a4[a5 - v7 - v9];
LABEL_12:
    sub_3BDFA4(v6, a2, v9, a5);
    v12 = (_BYTE *)(*v6 + a2);
    v13 = &v11[*v6];
    if ( a5 == 1 )
      *v12 = *v13;
    else
      j_memcpy(v12, v13, a5);
    return v6;
  }
  sub_3BEE2C(&v15, a4, a5);
  v6 = sub_3BE3D8(v6, a2, v9, v15, a5);
  if ( v15 - 12 != (char *)&dword_55FB7C )
    sub_13B89C((int)(v15 - 12), (int)v14);
  return v6;
}


//======================================================================
// sub_3BEF54
// address: 0x003BEF54   size: 0x16 (22 bytes)
//======================================================================
int *__fastcall sub_3BEF54(int *a1, size_t a2, unsigned int a3, _BYTE **a4)
{
  return sub_3BEE44(a1, a2, a3, *a4, *((_DWORD *)*a4 - 3));
}


//======================================================================
// sub_3BEF6C
// address: 0x003BEF6C   size: 0x32 (50 bytes)
//======================================================================
int *__fastcall sub_3BEF6C(int *a1, size_t a2, unsigned int a3, int *a4, unsigned int a5, unsigned int a6)
{
  int v6; // r3
  unsigned int v7; // r5
  _BYTE *v8; // r3
  unsigned int v9; // r4

  v6 = *a4;
  v7 = *(_DWORD *)(v6 - 12);
  if ( a5 > v7 )
    sub_3BD0B4("basic_string::replace");
  v8 = (_BYTE *)(v6 + a5);
  v9 = v7 - a5;
  if ( v7 - a5 > a6 )
    v9 = a6;
  return sub_3BEE44(a1, a2, a3, v8, v9);
}


//======================================================================
// sub_3BEFA4
// address: 0x003BEFA4   size: 0x24 (36 bytes)
//======================================================================
int *__fastcall sub_3BEFA4(int *a1, size_t a2, unsigned int a3, char *a4)
{
  size_t v8; // r0

  v8 = j_strlen(a4);
  return sub_3BEE44(a1, a2, a3, a4, v8);
}


//======================================================================
// sub_3BEFC8
// address: 0x003BEFC8   size: 0x18 (24 bytes)
//======================================================================
int *__fastcall sub_3BEFC8(int *a1, int a2, int a3, _BYTE *a4, unsigned int a5)
{
  return sub_3BEE44(a1, a2 - *a1, a3 - a2, a4, a5);
}


//======================================================================
// sub_3BEFE0
// address: 0x003BEFE0   size: 0x1E (30 bytes)
//======================================================================
int *__fastcall sub_3BEFE0(int *a1, int a2, int a3, _BYTE **a4)
{
  return sub_3BEE44(a1, a2 - *a1, a3 - a2, *a4, *((_DWORD *)*a4 - 3));
}


//======================================================================
// sub_3BF000
// address: 0x003BF000   size: 0x26 (38 bytes)
//======================================================================
int *__fastcall sub_3BF000(int *a1, int a2, int a3, char *a4)
{
  size_t v8; // r0

  v8 = j_strlen(a4);
  return sub_3BEE44(a1, a2 - *a1, a3 - a2, a4, v8);
}


//======================================================================
// sub_3BF028
// address: 0x003BF028   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_3BF028(int *a1, int a2, int a3, _BYTE *a4, int a5)
{
  return sub_3BEE44(a1, a2 - *a1, a3 - a2, a4, a5 - (_DWORD)a4);
}


//======================================================================
// sub_3BF044
// address: 0x003BF044   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_3BF044(int *a1, int a2, int a3, _BYTE *a4, int a5)
{
  return sub_3BEE44(a1, a2 - *a1, a3 - a2, a4, a5 - (_DWORD)a4);
}


//======================================================================
// sub_3BF060
// address: 0x003BF060   size: 0x22 (34 bytes)
//======================================================================
int *__fastcall sub_3BF060(int *a1, int a2, int a3, _BYTE *a4, unsigned int a5)
{
  return sub_3BEE44(a1, a2 - *a1, a3 - a2, a4, a5);
}


//======================================================================
// sub_3BF084
// address: 0x003BF084   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_3BF084(int *a1, int a2, int a3, _BYTE *a4, int a5)
{
  return sub_3BEE44(a1, a2 - *a1, a3 - a2, a4, a5 - (_DWORD)a4);
}


//======================================================================
// sub_3BF0A0
// address: 0x003BF0A0   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_3BF0A0(int *a1, int a2, int a3, _BYTE *a4, int a5)
{
  return sub_3BEE44(a1, a2 - *a1, a3 - a2, a4, a5 - (_DWORD)a4);
}


//======================================================================
// sub_3BF0BC
// address: 0x003BF0BC   size: 0x2A (42 bytes)
//======================================================================
char **__fastcall sub_3BF0BC(char **a1, char *a2)
{
  int v4; // r1

  if ( a2 != nullptr )
    v4 = (int)&a2[j_strlen(a2)];
  else
    v4 = -1;
  *a1 = sub_3BEDB4(a2, (_BYTE *)v4);
  return a1;
}


//======================================================================
// sub_3BF0E8
// address: 0x003BF0E8   size: 0x1A (26 bytes)
//======================================================================
char **__fastcall sub_3BF0E8(char **a1, _BYTE *a2, int a3)
{
  *a1 = sub_3BEDB4(a2, &a2[a3]);
  return a1;
}


//======================================================================
// sub_3BF104
// address: 0x003BF104   size: 0x16 (22 bytes)
//======================================================================
char **__fastcall sub_3BF104(char **a1, _BYTE *a2, _BYTE *a3)
{
  *a1 = sub_3BEDB4(a2, a3);
  return a1;
}


//======================================================================
// sub_3BF11C
// address: 0x003BF11C   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_3BF11C(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2;
}


//======================================================================
// sub_3BF128
// address: 0x003BF128   size: 0xC (12 bytes)
//======================================================================
bool __fastcall sub_3BF128(_DWORD *a1, _DWORD *a2)
{
  return *a1 == *a2;
}


//======================================================================
// sub_3BF134
// address: 0x003BF134   size: 0x100 (256 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF134(_DWORD *a1, int a2)
{
  _DWORD *v4; // r5
  unsigned __int8 *v5; // r3
  int v6; // r0
  signed int v7; // r3
  int i; // r7
  unsigned int v9; // r0
  unsigned int v10; // r1
  int v11; // r2
  unsigned __int8 *v12; // r1
  unsigned __int8 *v14; // r1
  _BYTE v15[8]; // [sp+4h] [bp-8h] BYREF

  if ( a2 == 1 )
    return sub_39E264(a1);
  a1[1] = 0;
  sub_39DA00(v15, a1, 1);
  if ( a2 > 0 && v15[0] != 0 )
  {
    v4 = *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120);
    v5 = (unsigned __int8 *)v4[2];
    if ( (unsigned int)v5 >= v4[3] )
      v6 = (*(int (__fastcall **)(_DWORD))(*v4 + 36))(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 120));
    else
      v6 = *v5;
    v7 = a1[1];
    for ( i = 0; ; i = 1 )
    {
      while ( a2 > v7 )
      {
        while ( 1 )
        {
          if ( v6 == -1 )
            goto LABEL_15;
          v9 = v4[3];
          v10 = v4[2];
          v11 = a2 - v7;
          if ( a2 - v7 > (int)(v9 - v10) )
            v11 = v9 - v10;
          if ( v11 <= 1 )
            break;
          v12 = (unsigned __int8 *)(v10 + v11);
          v7 += v11;
          v4[2] = v12;
          a1[1] = v7;
          if ( v9 <= (unsigned int)v12 )
            goto LABEL_28;
          v6 = *v12;
          if ( a2 <= v7 )
            goto LABEL_14;
        }
        a1[1] = v7 + 1;
        if ( v9 <= v10 )
        {
          v6 = (*(int (__fastcall **)(_DWORD *))(*v4 + 40))(v4);
          if ( v6 == -1 )
            goto LABEL_26;
          v14 = (unsigned __int8 *)v4[2];
          v9 = v4[3];
        }
        else
        {
          v14 = (unsigned __int8 *)(v10 + 1);
          v4[2] = v14;
        }
        if ( (unsigned int)v14 < v9 )
        {
          v6 = *v14;
LABEL_26:
          v7 = a1[1];
          continue;
        }
LABEL_28:
        v6 = (*(int (__fastcall **)(_DWORD *))(*v4 + 36))(v4);
        v7 = a1[1];
      }
LABEL_14:
      if ( a2 != 0x7FFFFFFF || v6 == -1 )
        break;
      a1[1] = 0x80000000;
      v7 = 0x80000000;
    }
LABEL_15:
    if ( i != 0 )
      a1[1] = 0x7FFFFFFF;
    if ( v6 == -1 )
      sub_3914B0(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
  }
  return a1;
}


//======================================================================
// sub_3BF294
// address: 0x003BF294   size: 0x110 (272 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF294(_DWORD *a1, int a2)
{
  _DWORD *v4; // r5
  int *v5; // r3
  int v6; // r0
  signed int v7; // r3
  int i; // r10
  unsigned int v9; // r0
  int *v10; // r1
  int v11; // r2
  int *v12; // r1
  int *v14; // r3
  _BYTE v15[4]; // [sp+4h] [bp-4h] BYREF

  if ( a2 == 1 )
    return sub_3A00EC(a1);
  a1[1] = 0;
  sub_39F8BC(v15, a1, 1);
  if ( a2 > 0 && v15[0] != 0 )
  {
    v4 = *(_DWORD **)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124);
    v5 = (int *)v4[2];
    if ( (unsigned int)v5 >= v4[3] )
      v6 = (*(int (__fastcall **)(_DWORD))(*v4 + 36))(*(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 124));
    else
      v6 = *v5;
    v7 = a1[1];
    for ( i = 0; ; i = 1 )
    {
      while ( a2 > v7 )
      {
        while ( 1 )
        {
          if ( v6 == -1 )
            goto LABEL_15;
          v9 = v4[3];
          v10 = (int *)v4[2];
          v11 = a2 - v7;
          if ( a2 - v7 > (int)(v9 - (_DWORD)v10) >> 2 )
            v11 = (int)(v9 - (_DWORD)v10) >> 2;
          if ( v11 <= 1 )
            break;
          v12 = &v10[v11];
          v7 += v11;
          v4[2] = v12;
          a1[1] = v7;
          if ( v9 <= (unsigned int)v12 )
            goto LABEL_29;
          v6 = *v12;
          if ( a2 <= v7 )
            goto LABEL_14;
        }
        a1[1] = v7 + 1;
        if ( v9 <= (unsigned int)v10 )
        {
          v6 = (*(int (__fastcall **)(_DWORD *))(*v4 + 40))(v4);
        }
        else
        {
          v6 = *v10;
          v4[2] = v10 + 1;
        }
        if ( v6 == -1 )
          goto LABEL_27;
        v14 = (int *)v4[2];
        if ( (unsigned int)v14 < v4[3] )
        {
          v6 = *v14;
LABEL_27:
          v7 = a1[1];
          continue;
        }
LABEL_29:
        v6 = (*(int (__fastcall **)(_DWORD *))(*v4 + 36))(v4);
        v7 = a1[1];
      }
LABEL_14:
      if ( a2 != 0x7FFFFFFF || v6 == -1 )
        break;
      a1[1] = 0x80000000;
      v7 = 0x80000000;
    }
LABEL_15:
    if ( i != 0 )
      a1[1] = 0x7FFFFFFF;
    if ( v6 == -1 )
      sub_39194C(
        (_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12)),
        *(_DWORD *)((char *)a1 + *(_DWORD *)(*a1 - 12) + 20) | 2);
  }
  return a1;
}


//======================================================================
// sub_3BF404
// address: 0x003BF404   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF404(_DWORD *result)
{
  *result = &off_465E50;
  return result;
}


//======================================================================
// sub_3BF414
// address: 0x003BF414   size: 0x4 (4 bytes)
//======================================================================
int sub_3BF414()
{
  return 0;
}


//======================================================================
// sub_3BF418
// address: 0x003BF418   size: 0x4 (4 bytes)
//======================================================================
int sub_3BF418()
{
  return 0;
}


//======================================================================
// sub_3BF41C
// address: 0x003BF41C   size: 0x4 (4 bytes)
//======================================================================
int sub_3BF41C()
{
  return 0;
}


//======================================================================
// sub_3BF420
// address: 0x003BF420   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF420(_DWORD *a1)
{
  *a1 = &off_465E50;
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF438
// address: 0x003BF438   size: 0x2C (44 bytes)
//======================================================================
bool __fastcall sub_3BF438(int a1, int a2)
{
  const char *v2; // r0

  if ( a2 == a1 )
    return true;
  v2 = *(const char **)(a1 + 4);
  return *v2 != 42 && j_strcmp(v2, (const char *)(*(_DWORD *)(a2 + 4) + (**(_BYTE **)(a2 + 4) == 42))) == 0;
}


//======================================================================
// sub_3BF464
// address: 0x003BF464   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall sub_3BF464(int a1, int a2)
{
  return sub_3BF438(a1, a2);
}


//======================================================================
// sub_3BF544
// address: 0x003BF544   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BF544(int a1)
{
  return *(_DWORD *)(a1 + 4);
}


//======================================================================
// sub_3BF548
// address: 0x003BF548   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_3BF548(int a1)
{
  return *(_DWORD *)(a1 + 4);
}


//======================================================================
// sub_3BF54C
// address: 0x003BF54C   size: 0x42 (66 bytes)
//======================================================================
std::exception *__fastcall sub_3BF54C(std::exception *this)
{
  int v2; // r0
  void *v3; // r5

  *(_DWORD *)this = &off_465FA0;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3);
  std::exception::~exception(this);
  return this;
}


//======================================================================
// sub_3BF598
// address: 0x003BF598   size: 0x12 (18 bytes)
//======================================================================
std::exception *__fastcall sub_3BF598(std::exception *a1)
{
  sub_3BF54C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF5AC
// address: 0x003BF5AC   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3BF5AC(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465F18;
  sub_3BF54C(a1);
  return a1;
}


//======================================================================
// sub_3BF5C4
// address: 0x003BF5C4   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3BF5C4(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465F18;
  sub_3BF54C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF5E4
// address: 0x003BF5E4   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3BF5E4(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465F48;
  sub_3BF54C(a1);
  return a1;
}


//======================================================================
// sub_3BF5FC
// address: 0x003BF5FC   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3BF5FC(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465F48;
  sub_3BF54C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF61C
// address: 0x003BF61C   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3BF61C(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465FD0;
  sub_3BF54C(a1);
  return a1;
}


//======================================================================
// sub_3BF634
// address: 0x003BF634   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3BF634(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465FD0;
  sub_3BF54C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF654
// address: 0x003BF654   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3BF654(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465FB8;
  sub_3BF54C(a1);
  return a1;
}


//======================================================================
// sub_3BF66C
// address: 0x003BF66C   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3BF66C(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465FB8;
  sub_3BF54C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF68C
// address: 0x003BF68C   size: 0x42 (66 bytes)
//======================================================================
std::exception *__fastcall sub_3BF68C(std::exception *this)
{
  int v2; // r0
  void *v3; // r5

  *(_DWORD *)this = &off_465ED0;
  v2 = *((_DWORD *)this + 1);
  v3 = (void *)(v2 - 12);
  if ( (int *)(v2 - 12) != &dword_55FB7C && sub_3C82FC(v2 - 4, -1) <= 0 )
    sub_3BDF60(v3);
  std::exception::~exception(this);
  return this;
}


//======================================================================
// sub_3BF6D8
// address: 0x003BF6D8   size: 0x12 (18 bytes)
//======================================================================
std::exception *__fastcall sub_3BF6D8(std::exception *a1)
{
  sub_3BF68C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF6EC
// address: 0x003BF6EC   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3BF6EC(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465FE8;
  sub_3BF68C(a1);
  return a1;
}


//======================================================================
// sub_3BF704
// address: 0x003BF704   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3BF704(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465FE8;
  sub_3BF68C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF724
// address: 0x003BF724   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3BF724(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465EE8;
  sub_3BF68C(a1);
  return a1;
}


//======================================================================
// sub_3BF73C
// address: 0x003BF73C   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3BF73C(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465EE8;
  sub_3BF68C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF75C
// address: 0x003BF75C   size: 0x14 (20 bytes)
//======================================================================
std::exception *__fastcall sub_3BF75C(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465F00;
  sub_3BF68C(a1);
  return a1;
}


//======================================================================
// sub_3BF774
// address: 0x003BF774   size: 0x1A (26 bytes)
//======================================================================
std::exception *__fastcall sub_3BF774(std::exception *a1)
{
  *(_DWORD *)a1 = &off_465F00;
  sub_3BF68C(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF794
// address: 0x003BF794   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_3BF794(int a1, int **a2)
{
  *(_DWORD *)a1 = &off_465FA0;
  sub_3BEB1C((int **)(a1 + 4), a2);
  return a1;
}


//======================================================================
// sub_3BF7B8
// address: 0x003BF7B8   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF7B8(_DWORD *a1, int **a2)
{
  sub_3BF794((int)a1, a2);
  *a1 = &off_465F18;
  return a1;
}


//======================================================================
// sub_3BF7D0
// address: 0x003BF7D0   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF7D0(_DWORD *a1, int **a2)
{
  sub_3BF794((int)a1, a2);
  *a1 = &off_465F48;
  return a1;
}


//======================================================================
// sub_3BF7E8
// address: 0x003BF7E8   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF7E8(_DWORD *a1, int **a2)
{
  sub_3BF794((int)a1, a2);
  *a1 = &off_465FD0;
  return a1;
}


//======================================================================
// sub_3BF800
// address: 0x003BF800   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF800(_DWORD *a1, int **a2)
{
  sub_3BF794((int)a1, a2);
  *a1 = &off_465FB8;
  return a1;
}


//======================================================================
// sub_3BF818
// address: 0x003BF818   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_3BF818(int a1, int **a2)
{
  *(_DWORD *)a1 = &off_465ED0;
  sub_3BEB1C((int **)(a1 + 4), a2);
  return a1;
}


//======================================================================
// sub_3BF83C
// address: 0x003BF83C   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF83C(_DWORD *a1, int **a2)
{
  sub_3BF818((int)a1, a2);
  *a1 = &off_465FE8;
  return a1;
}


//======================================================================
// sub_3BF854
// address: 0x003BF854   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF854(_DWORD *a1, int **a2)
{
  sub_3BF818((int)a1, a2);
  *a1 = &off_465EE8;
  return a1;
}


//======================================================================
// sub_3BF86C
// address: 0x003BF86C   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF86C(_DWORD *a1, int **a2)
{
  sub_3BF818((int)a1, a2);
  *a1 = &off_465F00;
  return a1;
}


//======================================================================
// sub_3BF884
// address: 0x003BF884   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF884(_DWORD *a1)
{
  int v2; // r0

  *a1 = &off_464500;
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3BF8B8
// address: 0x003BF8B8   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF8B8(_DWORD *a1)
{
  sub_3BF884(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF8CC
// address: 0x003BF8CC   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF8CC(_DWORD *a1)
{
  int v2; // r0

  *a1 = &off_4653F8;
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3BF900
// address: 0x003BF900   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3BF900(_DWORD *a1)
{
  sub_3BF8CC(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BF914
// address: 0x003BF914   size: 0xA2 (162 bytes)
//======================================================================
char *__fastcall sub_3BF914(int a1)
{
  _DWORD *v1; // r5
  char *v3; // r0
  int i; // r3
  char v5; // r1
  int v6; // r2
  char *result; // r0
  int j; // r3
  char v9; // r1
  int v10; // r2
  _DWORD *v11; // r3
  _DWORD *v12; // r0

  v1 = *(_DWORD **)(a1 + 8);
  if ( v1 == nullptr )
  {
    v12 = operator new(0x68u);
    *v12 = &off_464830;
    v12[1] = 0;
    v12[2] = 0;
    v12[3] = 0;
    *((_BYTE *)v12 + 16) = 0;
    v12[5] = 0;
    v12[6] = 0;
    v12[7] = 0;
    v12[8] = 0;
    *((_BYTE *)v12 + 36) = 0;
    *((_BYTE *)v12 + 37) = 0;
    *((_BYTE *)v12 + 100) = 0;
    *(_DWORD *)(a1 + 8) = v12;
    v1 = v12;
  }
  v1[2] = &unk_44DC7A;
  v1[3] = 0;
  *((_BYTE *)v1 + 16) = 0;
  *((_BYTE *)v1 + 36) = 46;
  *(_BYTE *)(*(_DWORD *)(a1 + 8) + 37) = 44;
  v3 = off_472454[0];
  for ( i = 0; i != 36; ++i )
  {
    v5 = v3[i];
    v6 = *(_DWORD *)(a1 + 8) + i + 32;
    *(_BYTE *)(v6 + 6) = v5;
  }
  result = off_472450[0];
  for ( j = 0; j != 26; ++j )
  {
    v9 = result[j];
    v10 = *(_DWORD *)(a1 + 8) + j + 72;
    *(_BYTE *)(v10 + 2) = v9;
  }
  v11 = *(_DWORD **)(a1 + 8);
  v11[5] = "true";
  v11[6] = 4;
  v11[7] = "false";
  v11[8] = 5;
  return result;
}


//======================================================================
// sub_3BF9D0
// address: 0x003BF9D0   size: 0x96 (150 bytes)
//======================================================================
char *__fastcall sub_3BF9D0(int a1)
{
  _DWORD *v1; // r4
  _DWORD *v3; // r2
  char *v4; // r0
  int i; // r3
  int v6; // r1
  _DWORD *v7; // r2
  char *result; // r0
  int j; // r3
  int v10; // r1
  _DWORD *v11; // r0

  v1 = *(_DWORD **)(a1 + 8);
  if ( v1 == nullptr )
  {
    v11 = operator new(0x128u);
    *v11 = &off_465728;
    v11[1] = 0;
    v11[2] = 0;
    v11[3] = 0;
    *((_BYTE *)v11 + 16) = 0;
    v11[5] = 0;
    v11[6] = 0;
    v11[7] = 0;
    v11[8] = 0;
    v11[9] = 0;
    v11[10] = 0;
    *((_BYTE *)v11 + 292) = 0;
    *(_DWORD *)(a1 + 8) = v11;
    v1 = v11;
  }
  v1[2] = &unk_44DC7A;
  v1[3] = 0;
  *((_BYTE *)v1 + 16) = 0;
  v1[9] = 46;
  v1[10] = 44;
  v3 = v1 + 11;
  v4 = off_472454[0];
  for ( i = 0; i != 36; ++i )
  {
    v6 = (unsigned __int8)v4[i];
    *v3++ = v6;
  }
  v7 = v1 + 47;
  result = off_472450[0];
  for ( j = 0; j != 26; ++j )
  {
    v10 = (unsigned __int8)result[j];
    *v7++ = v10;
  }
  v1[5] = "t";
  v1[6] = 4;
  v1[7] = "f";
  v1[8] = 5;
  return result;
}


//======================================================================
// sub_3BFA80
// address: 0x003BFA80   size: 0xE (14 bytes)
//======================================================================
int **__fastcall sub_3BFA80(int **a1, int a2, int a3, int a4, int a5, int **a6)
{
  sub_3BEB1C(a1, a6);
  return a1;
}


//======================================================================
// sub_3BFA90
// address: 0x003BFA90   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFA90(_DWORD *a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  sub_3B7F58(a1, a6);
  return a1;
}


//======================================================================
// sub_3BFAA0
// address: 0x003BFAA0   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFAA0(_DWORD *a1)
{
  int v2; // r0

  *a1 = &off_4645E0;
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3BFAD4
// address: 0x003BFAD4   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFAD4(_DWORD *a1)
{
  sub_3BFAA0(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BFAE8
// address: 0x003BFAE8   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFAE8(_DWORD *a1)
{
  int v2; // r0

  *a1 = &off_464618;
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3BFB1C
// address: 0x003BFB1C   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFB1C(_DWORD *a1)
{
  sub_3BFAE8(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BFB30
// address: 0x003BFB30   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFB30(_DWORD *a1)
{
  int v2; // r0

  *a1 = &off_4654D8;
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3BFB64
// address: 0x003BFB64   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFB64(_DWORD *a1)
{
  sub_3BFB30(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BFB78
// address: 0x003BFB78   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFB78(_DWORD *a1)
{
  int v2; // r0

  *a1 = &off_465510;
  v2 = a1[2];
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  sub_3A84B4(a1);
  return a1;
}


//======================================================================
// sub_3BFBAC
// address: 0x003BFBAC   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFBAC(_DWORD *a1)
{
  sub_3BFB78(a1);
  operator delete(a1);
  return a1;
}


//======================================================================
// sub_3BFBC0
// address: 0x003BFBC0   size: 0x2C (44 bytes)
//======================================================================
int sub_3BFBC0()
{
  return unk_44FEC8 | (unk_44FEC9 << 8) | (unk_44FECA << 16) | (unk_44FECB << 24);
}


//======================================================================
// sub_3BFBF0
// address: 0x003BFBF0   size: 0xBA (186 bytes)
//======================================================================
char *__fastcall sub_3BFBF0(int a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  char *result; // r0
  int i; // r3
  char v6; // r1
  char *v7; // r2
  _DWORD *v8; // r0

  v1 = *(_DWORD **)(a1 + 8);
  if ( v1 == nullptr )
  {
    v8 = operator new(0x44u);
    *v8 = &off_464820;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    *((_BYTE *)v8 + 16) = 0;
    *((_BYTE *)v8 + 17) = 0;
    *((_BYTE *)v8 + 18) = 0;
    v8[5] = 0;
    v8[6] = 0;
    v8[7] = 0;
    v8[8] = 0;
    v8[9] = 0;
    v8[10] = 0;
    v8[11] = 0;
    *((_BYTE *)v8 + 48) = 0;
    *((_BYTE *)v8 + 49) = 0;
    *((_BYTE *)v8 + 50) = 0;
    *((_BYTE *)v8 + 51) = 0;
    *((_BYTE *)v8 + 52) = 0;
    *((_BYTE *)v8 + 53) = 0;
    *((_BYTE *)v8 + 54) = 0;
    *((_BYTE *)v8 + 55) = 0;
    *((_BYTE *)v8 + 67) = 0;
    *(_DWORD *)(a1 + 8) = v8;
    v1 = v8;
  }
  *((_BYTE *)v1 + 17) = 46;
  *(_BYTE *)(*(_DWORD *)(a1 + 8) + 18) = 44;
  v3 = *(_DWORD **)(a1 + 8);
  v3[3] = 0;
  v3[6] = 0;
  v3[8] = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[2] = &unk_44DC7A;
  v3[5] = &unk_44DC7A;
  v3[7] = &unk_44DC7A;
  v3[9] = &unk_44DC7A;
  v3[12] = unk_44FEC8;
  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 52) = unk_44FEC8;
  result = off_472458[0];
  for ( i = 0; i != 11; ++i )
  {
    v6 = result[i];
    v7 = (char *)(*(_DWORD *)(a1 + 8) + i + 56);
    *v7 = v6;
  }
  return result;
}


//======================================================================
// sub_3BFCBC
// address: 0x003BFCBC   size: 0xBA (186 bytes)
//======================================================================
char *__fastcall sub_3BFCBC(int a1)
{
  _DWORD *v1; // r5
  _DWORD *v3; // r0
  char *result; // r0
  int i; // r3
  char v6; // r1
  char *v7; // r2
  _DWORD *v8; // r0

  v1 = *(_DWORD **)(a1 + 8);
  if ( v1 == nullptr )
  {
    v8 = operator new(0x44u);
    *v8 = &off_464810;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    *((_BYTE *)v8 + 16) = 0;
    *((_BYTE *)v8 + 17) = 0;
    *((_BYTE *)v8 + 18) = 0;
    v8[5] = 0;
    v8[6] = 0;
    v8[7] = 0;
    v8[8] = 0;
    v8[9] = 0;
    v8[10] = 0;
    v8[11] = 0;
    *((_BYTE *)v8 + 48) = 0;
    *((_BYTE *)v8 + 49) = 0;
    *((_BYTE *)v8 + 50) = 0;
    *((_BYTE *)v8 + 51) = 0;
    *((_BYTE *)v8 + 52) = 0;
    *((_BYTE *)v8 + 53) = 0;
    *((_BYTE *)v8 + 54) = 0;
    *((_BYTE *)v8 + 55) = 0;
    *((_BYTE *)v8 + 67) = 0;
    *(_DWORD *)(a1 + 8) = v8;
    v1 = v8;
  }
  *((_BYTE *)v1 + 17) = 46;
  *(_BYTE *)(*(_DWORD *)(a1 + 8) + 18) = 44;
  v3 = *(_DWORD **)(a1 + 8);
  v3[3] = 0;
  v3[6] = 0;
  v3[8] = 0;
  v3[10] = 0;
  v3[11] = 0;
  v3[2] = &unk_44DC7A;
  v3[5] = &unk_44DC7A;
  v3[7] = &unk_44DC7A;
  v3[9] = &unk_44DC7A;
  v3[12] = unk_44FEC8;
  *(_DWORD *)(*(_DWORD *)(a1 + 8) + 52) = unk_44FEC8;
  result = off_472458[0];
  for ( i = 0; i != 11; ++i )
  {
    v6 = result[i];
    v7 = (char *)(*(_DWORD *)(a1 + 8) + i + 56);
    *v7 = v6;
  }
  return result;
}


//======================================================================
// sub_3BFD88
// address: 0x003BFD88   size: 0xBA (186 bytes)
//======================================================================
void *__fastcall sub_3BFD88(int a1)
{
  _DWORD *v1; // r4
  void *result; // r0
  _DWORD *v4; // r2
  char *v5; // r4
  int i; // r3
  int v7; // r1
  _DWORD *v8; // r0

  v1 = *(_DWORD **)(a1 + 8);
  if ( v1 == nullptr )
  {
    v8 = operator new(0x70u);
    *v8 = &off_465718;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    *((_BYTE *)v8 + 16) = 0;
    v8[5] = 0;
    v8[6] = 0;
    v8[7] = 0;
    v8[8] = 0;
    v8[9] = 0;
    v8[10] = 0;
    v8[11] = 0;
    v8[12] = 0;
    v8[13] = 0;
    *((_BYTE *)v8 + 56) = 0;
    *((_BYTE *)v8 + 57) = 0;
    *((_BYTE *)v8 + 58) = 0;
    *((_BYTE *)v8 + 59) = 0;
    *((_BYTE *)v8 + 60) = 0;
    *((_BYTE *)v8 + 61) = 0;
    *((_BYTE *)v8 + 62) = 0;
    *((_BYTE *)v8 + 63) = 0;
    *((_BYTE *)v8 + 108) = 0;
    *(_DWORD *)(a1 + 8) = v8;
    v1 = v8;
  }
  v1[5] = 46;
  v1[6] = 44;
  v1[2] = &unk_44DC7A;
  v1[3] = 0;
  v1[8] = 0;
  v1[10] = 0;
  v1[12] = 0;
  v1[13] = 0;
  v1[7] = &dword_44D56C;
  v1[9] = &dword_44D56C;
  v1[11] = &dword_44D56C;
  v1[14] = unk_44FEC8;
  result = j_memcpy((void *)(*(_DWORD *)(a1 + 8) + 60), &unk_44FEC8, 4u);
  v4 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 64);
  v5 = off_472458[0];
  for ( i = 0; i != 11; ++i )
  {
    v7 = (unsigned __int8)v5[i];
    *v4++ = v7;
  }
  return result;
}


//======================================================================
// sub_3BFE58
// address: 0x003BFE58   size: 0xBA (186 bytes)
//======================================================================
void *__fastcall sub_3BFE58(int a1)
{
  _DWORD *v1; // r4
  void *result; // r0
  _DWORD *v4; // r2
  char *v5; // r4
  int i; // r3
  int v7; // r1
  _DWORD *v8; // r0

  v1 = *(_DWORD **)(a1 + 8);
  if ( v1 == nullptr )
  {
    v8 = operator new(0x70u);
    *v8 = &off_465708;
    v8[1] = 0;
    v8[2] = 0;
    v8[3] = 0;
    *((_BYTE *)v8 + 16) = 0;
    v8[5] = 0;
    v8[6] = 0;
    v8[7] = 0;
    v8[8] = 0;
    v8[9] = 0;
    v8[10] = 0;
    v8[11] = 0;
    v8[12] = 0;
    v8[13] = 0;
    *((_BYTE *)v8 + 56) = 0;
    *((_BYTE *)v8 + 57) = 0;
    *((_BYTE *)v8 + 58) = 0;
    *((_BYTE *)v8 + 59) = 0;
    *((_BYTE *)v8 + 60) = 0;
    *((_BYTE *)v8 + 61) = 0;
    *((_BYTE *)v8 + 62) = 0;
    *((_BYTE *)v8 + 63) = 0;
    *((_BYTE *)v8 + 108) = 0;
    *(_DWORD *)(a1 + 8) = v8;
    v1 = v8;
  }
  v1[5] = 46;
  v1[6] = 44;
  v1[2] = &unk_44DC7A;
  v1[3] = 0;
  v1[8] = 0;
  v1[10] = 0;
  v1[12] = 0;
  v1[13] = 0;
  v1[7] = &dword_44D56C;
  v1[9] = &dword_44D56C;
  v1[11] = &dword_44D56C;
  v1[14] = unk_44FEC8;
  result = j_memcpy((void *)(*(_DWORD *)(a1 + 8) + 60), &unk_44FEC8, 4u);
  v4 = (_DWORD *)(*(_DWORD *)(a1 + 8) + 64);
  v5 = off_472458[0];
  for ( i = 0; i != 11; ++i )
  {
    v7 = (unsigned __int8)v5[i];
    *v4++ = v7;
  }
  return result;
}


//======================================================================
// sub_3BFF28
// address: 0x003BFF28   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_3BFF28(int a1, _BYTE *a2, int a3)
{
  int result; // r0
  _BYTE *v4; // r3
  char *v5; // r1
  _BYTE *v6; // r2
  char v7; // r3

  result = *(_DWORD *)(a1 + 12);
  *a2 = 37;
  if ( (result & 0x800) != 0 )
  {
    v4 = a2 + 2;
    a2[1] = 43;
  }
  else
  {
    v4 = a2 + 1;
  }
  if ( (result & 0x400) != 0 )
    *v4++ = 35;
  *v4 = 46;
  v4[1] = 42;
  v5 = v4 + 2;
  if ( a3 != 0 )
  {
    v5 = v4 + 3;
    v4[2] = a3;
  }
  if ( (result & 0x104) == 4 )
  {
    v6 = v5 + 1;
    *v5 = 102;
  }
  else
  {
    if ( (result & 0x104) == 0x100 )
    {
      v6 = v5 + 1;
      v7 = 101;
      if ( (result & 0x4000) != 0 )
        v7 = 69;
    }
    else
    {
      v6 = v5 + 1;
      v7 = 103;
      if ( (result & 0x4000) != 0 )
        v7 = 71;
    }
    *v5 = v7;
  }
  *v6 = 0;
  return result;
}


//======================================================================
// sub_3BFF94
// address: 0x003BFF94   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_3BFF94(int a1, int a2, unsigned __int8 **a3)
{
  unsigned __int8 *v3; // r5
  unsigned int v4; // r1
  unsigned int v5; // r3
  unsigned int v6; // r4
  int v7; // r6
  _BOOL4 v8; // r2
  unsigned int v9; // r1
  int v10; // r2

  v3 = *a3;
  v4 = a2 - 1;
  v5 = *((_DWORD *)*a3 - 3) - 1;
  if ( v4 > v5 )
    v4 = *((_DWORD *)*a3 - 3) - 1;
  if ( v4 != 0 )
  {
    v6 = 0;
    do
    {
      v7 = v3[v5--];
      v8 = v7 == *(unsigned __int8 *)(a1 + v6++);
    }
    while ( v8 && v6 < v4 );
  }
  else
  {
    v8 = true;
  }
  v9 = *(unsigned __int8 *)(a1 + v4);
  if ( v5 != 0 && v8 )
  {
    do
    {
      v10 = v3[v5--];
      v8 = v10 == v9;
    }
    while ( v8 && v5 != 0 );
  }
  if ( (int)(v9 << 24) > 0 )
    return v8 && v9 >= *v3;
  return v8;
}


//======================================================================
// sub_3BFFFC
// address: 0x003BFFFC   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_3BFFFC(_DWORD *a1)
{
  *a1 = &off_466018;
  sub_3A7C48((int)a1);
  return a1;
}

