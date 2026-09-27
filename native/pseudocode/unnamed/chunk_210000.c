// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_210000

//======================================================================
// sub_21077E
// address: 0x0021077E   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_21077E(int a1, int a2)
{
  int v2; // r5
  int *v4; // r4
  unsigned int v5; // r6

  v2 = *(_DWORD *)(a1 + 40);
  if ( v2 != 0 )
  {
    v4 = *(int **)(a1 + 40);
    v5 = v2 + 4 * *(_DWORD *)(a1 + 36);
    while ( (unsigned int)v4 < v5 )
    {
      if ( *(_DWORD *)(*v4 + 8) == 327680 && FT_Get_CMap_Format(*v4, a2, 327680) == 14 && (int)v4 - v2 <= 63 )
        return *v4;
      ++v4;
    }
  }
  return 0;
}


//======================================================================
// sub_2115E8
// address: 0x002115E8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_2115E8(_DWORD *a1, unsigned int *a2, unsigned int **a3)
{
  int v5; // r2
  unsigned int *ULong; // r3
  int result; // r0
  int v8; // r2
  int UShort; // r0
  int v10; // r2
  int v11; // r6
  int v12; // r7
  unsigned int *v13; // r0
  int v14; // r2
  unsigned int *v15; // r0
  unsigned int *v16; // [sp+0h] [bp-14h]
  _DWORD v18[2]; // [sp+Ch] [bp-8h] BYREF

  ULong = FT_Stream_ReadULong(a1, v18, (int)a3);
  result = v18[0];
  if ( v18[0] == 0 )
  {
    if ( ULong != a2 )
      return 2;
    FT_Stream_ReadULong(a1, v18, v5);
    result = v18[0];
    if ( v18[0] == 0 )
    {
      result = FT_Stream_Skip(a1, 16);
      v18[0] = result;
      if ( result == 0 )
      {
        UShort = FT_Stream_ReadUShort(a1, v18, v8);
        v11 = v18[0];
        v12 = UShort;
        result = v18[0];
        if ( v18[0] == 0 )
        {
          if ( v12 != 0 )
          {
            while ( v11 < v12 )
            {
              v13 = FT_Stream_ReadULong(a1, v18, v10);
              if ( v18[0] != 0 )
                return v18[0];
              if ( v13 == (unsigned int *)((char *)&dword_0 + 2) )
              {
                v15 = FT_Stream_ReadULong(a1, v18, v14);
                v10 = v18[0];
                v16 = v15;
                if ( v18[0] == 0 )
                {
                  FT_Stream_ReadULong(a1, v18, 0);
                  result = v18[0];
                  if ( v18[0] == 0 )
                  {
                    *a3 = v16;
                    return result;
                  }
                }
              }
              else
              {
                result = FT_Stream_Skip(a1, 8);
                v18[0] = result;
                if ( result != 0 )
                  return result;
              }
              ++v11;
            }
          }
          return 2;
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_211690
// address: 0x00211690   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_211690(int a1, _DWORD *a2, int a3, _DWORD *a4, unsigned int **a5)
{
  int result; // r0

  *a4 = 0;
  result = 81;
  if ( a2 != nullptr )
    return sub_2115E8(a2, (unsigned int *)"uiredERNS_14RenderPassDescE", a5);
  return result;
}


//======================================================================
// sub_2116AC
// address: 0x002116AC   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_2116AC(int a1, _DWORD *a2, int a3, _DWORD *a4, unsigned int **a5)
{
  int result; // r0

  *a4 = 0;
  result = 81;
  if ( a2 != nullptr )
    return sub_2115E8(a2, (unsigned int *)"NS_14RenderPassDescE", a5);
  return result;
}


//======================================================================
// sub_211AA4
// address: 0x00211AA4   size: 0x72 (114 bytes)
//======================================================================
char *__fastcall sub_211AA4(int a1, char *a2, const char *a3)
{
  const char *v4; // r5
  size_t v5; // r6
  size_t v6; // r0
  char *v7; // r4
  char *v8; // r0
  char *v9; // r6
  int v10; // r7
  int v13; // [sp+Ch] [bp-8h] BYREF

  v4 = a2;
  v13 = 0;
  v5 = j_strlen(a2);
  v6 = j_strlen(a3);
  v7 = (char *)ft_mem_alloc(a1, v5 + v6 + 1, &v13);
  if ( v13 != 0 )
    return nullptr;
  v8 = j_strrchr(v4, 47);
  v9 = v8;
  if ( v8 != nullptr )
  {
    v10 = v8 - v4;
    j_strncpy(v7, v4, v8 - v4 + 1);
    v4 = v9 + 1;
    v7[v10 + 1] = 0;
  }
  else
  {
    *v7 = 0;
  }
  j_strcat(v7, a3);
  j_strcat(v7, v4);
  return v7;
}


//======================================================================
// sub_211B18
// address: 0x00211B18   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_211B18(int *a1, int a2, char *a3, char **a4, _DWORD *a5)
{
  char *v6; // r0

  v6 = sub_211AA4(*a1, a3, ".resource/");
  if ( v6 == nullptr )
    return 64;
  *a4 = v6;
  *a5 = 0;
  return 0;
}


//======================================================================
// sub_211B40
// address: 0x00211B40   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_211B40(int *a1, int a2, char *a3, char **a4, _DWORD *a5)
{
  char *v6; // r0

  v6 = sub_211AA4(*a1, a3, "resource.frk/");
  if ( v6 == nullptr )
    return 64;
  *a4 = v6;
  *a5 = 0;
  return 0;
}


//======================================================================
// sub_211B68
// address: 0x00211B68   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_211B68(int *a1, int a2, char *a3, char **a4, _DWORD *a5)
{
  int v7; // r5
  int v8; // r0
  int v9; // r4
  char *v10; // r0
  char *v11; // r6
  int v14; // [sp+Ch] [bp-8h] BYREF

  v7 = j_strlen(a3);
  v8 = *a1;
  v9 = 10;
  if ( v7 <= 2147483641 )
  {
    v10 = (char *)ft_mem_alloc(v8, v7 + 6, &v14);
    v9 = v14;
    v11 = v10;
    if ( v14 == 0 )
    {
      j_memcpy(v10, a3, v7);
      strcpy(&v11[v7], "/rsrc");
      *a4 = v11;
      *a5 = 0;
    }
  }
  return v9;
}


//======================================================================
// sub_211BC0
// address: 0x00211BC0   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_211BC0(int *a1, int a2, char *a3, char **a4, _DWORD *a5)
{
  int v7; // r5
  int v8; // r0
  int v9; // r4
  char *v10; // r0
  char *v11; // r6
  int v14; // [sp+Ch] [bp-8h] BYREF

  v7 = j_strlen(a3);
  v8 = *a1;
  v9 = 10;
  if ( v7 <= 2147483629 )
  {
    v10 = (char *)ft_mem_alloc(v8, v7 + 18, &v14);
    v9 = v14;
    v11 = v10;
    if ( v14 == 0 )
    {
      j_memcpy(v10, a3, v7);
      strcpy(&v11[v7], "/..namedfork/rsrc");
      *a4 = v11;
      *a5 = 0;
    }
  }
  return v9;
}


//======================================================================
// sub_211D98
// address: 0x00211D98   size: 0x3C (60 bytes)
//======================================================================
int __fastcall sub_211D98(int *a1, int a2, unsigned int **a3)
{
  int v4; // r4
  _DWORD *v6; // [sp+4h] [bp-28h] BYREF
  _DWORD v7[9]; // [sp+8h] [bp-24h] BYREF

  v7[0] = 4;
  v7[3] = a2;
  v4 = FT_Stream_New(a1, (int)v7, (int *)&v6);
  if ( v4 == 0 )
  {
    if ( v6 != nullptr )
      v4 = sub_2115E8(v6, (unsigned int *)"NS_14RenderPassDescE", a3);
    else
      v4 = 81;
    FT_Stream_Free((int)v6, 0);
  }
  return v4;
}


//======================================================================
// sub_211E54
// address: 0x00211E54   size: 0x46 (70 bytes)
//======================================================================
_DWORD *__fastcall sub_211E54(int a1)
{
  int v2; // r5
  int v3; // r6
  void (*v4)(void); // r3
  _DWORD *v5; // r0
  int ***v6; // r4
  _DWORD *result; // r0

  v2 = *(_DWORD *)(*(_DWORD *)(a1 + 4) + 96);
  v3 = *(_DWORD *)(v2 + 8);
  v4 = *(void (**)(void))(*(_DWORD *)(v2 + 12) + 68);
  if ( v4 != nullptr )
    v4();
  v5 = (_DWORD *)a1;
  v6 = (int ***)(a1 + 156);
  result = ft_glyphslot_free_bitmap(v5);
  if ( *v6 != nullptr )
  {
    if ( (**(_DWORD **)v2 & 0x200) == 0 )
    {
      FT_GlyphLoader_Done(**v6);
      **v6 = nullptr;
    }
    result = (_DWORD *)ft_mem_free(v3, (int)*v6);
    *v6 = nullptr;
  }
  return result;
}


//======================================================================
// sub_211F92
// address: 0x00211F92   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_211F92(_DWORD *a1)
{
  int v2; // r5
  void (*v3)(void); // r3

  v2 = *(_DWORD *)(*a1 + 100);
  v3 = *(void (**)(void))(a1[3] + 8);
  if ( v3 != nullptr )
    v3();
  return ft_mem_free(v2, (int)a1);
}


//======================================================================
// sub_211FAE
// address: 0x00211FAE   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_211FAE(int result, int a2)
{
  int v2; // r4
  int i; // r5
  int v5; // r1
  int v6; // r6

  v2 = result;
  if ( result != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v5 = *(_DWORD *)(v2 + 40);
      if ( i >= *(_DWORD *)(v2 + 36) )
        break;
      v6 = 4 * i;
      sub_211F92(*(_DWORD **)(v5 + 4 * i));
      *(_DWORD *)(*(_DWORD *)(v2 + 40) + v6) = 0;
    }
    result = ft_mem_free(a2, v5);
    *(_DWORD *)(v2 + 40) = 0;
    *(_DWORD *)(v2 + 36) = 0;
  }
  return result;
}


//======================================================================
// sub_211FE2
// address: 0x00211FE2   size: 0xAC (172 bytes)
//======================================================================
int __fastcall sub_211FE2(int a1, int a2, int a3, int a4, int a5, _DWORD *a6)
{
  int *v6; // r6
  int v7; // r5
  _DWORD *v9; // r4
  void *v10; // r0
  int (__fastcall *v11)(int, _DWORD *, int, int, int); // r7
  int v12; // r0
  void (__fastcall *v13)(_DWORD *); // r3
  int v16; // [sp+14h] [bp-18h]
  int v19[2]; // [sp+24h] [bp-8h] BYREF

  v6 = *(int **)(a1 + 12);
  v7 = *(_DWORD *)(a1 + 8);
  v9 = ft_mem_alloc(v7, v6[9], v19);
  v16 = 0;
  if ( v19[0] == 0 )
  {
    v10 = ft_mem_alloc(v7, 60, v19);
    v16 = (int)v10;
    if ( v19[0] == 0 )
    {
      v9[32] = v10;
      v9[24] = a1;
      v9[25] = v7;
      v9[26] = a2;
      v11 = (int (__fastcall *)(int, _DWORD *, int, int, int))v6[12];
      if ( v11 != nullptr )
        v19[0] = v11(a2, v9, a3, a4, a5);
      if ( v19[0] == 0 )
      {
        v12 = sub_20F5F0(v9);
        if ( v12 == 0 || v12 == 38 )
          *a6 = v9;
        else
          v19[0] = v12;
      }
    }
  }
  if ( v19[0] != 0 )
  {
    sub_211FAE((int)v9, v7);
    v13 = (void (__fastcall *)(_DWORD *))v6[13];
    if ( v13 != nullptr )
      v13(v9);
    ft_mem_free(v7, v16);
    ft_mem_free(v7, (int)v9);
    *a6 = 0;
  }
  return v19[0];
}


//======================================================================
// sub_21208E
// address: 0x0021208E   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_21208E(int *a1)
{
  int result; // r0

  result = ft_mem_free(a1[7], *a1);
  *a1 = 0;
  a1[1] = 0;
  a1[6] = 0;
  return result;
}


//======================================================================
// sub_2120A4
// address: 0x002120A4   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_2120A4(int a1, int a2, int a3)
{
  void (__fastcall *v3)(int); // r3
  void (__fastcall *v7)(int); // r3

  v3 = *(void (__fastcall **)(int))(a2 + 8);
  if ( v3 != nullptr )
    v3(a2);
  v7 = *(void (__fastcall **)(int))(*(_DWORD *)(a3 + 12) + 60);
  if ( v7 != nullptr )
    v7(a2);
  ft_mem_free(a1, *(_DWORD *)(a2 + 40));
  *(_DWORD *)(a2 + 40) = 0;
  return ft_mem_free(a1, a2);
}


//======================================================================
// sub_212198
// address: 0x00212198   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_212198(int *a1, int a2, char *a3, char **a4, unsigned int **a5)
{
  int v5; // r6
  char *v8; // r4
  int result; // r0
  int v10; // r5

  v5 = *a1;
  v8 = sub_211AA4(*a1, a3, ".AppleDouble/");
  result = 64;
  if ( v8 != nullptr )
  {
    v10 = sub_211D98(a1, (int)v8, a5);
    if ( v10 != 0 )
      ft_mem_free(v5, (int)v8);
    else
      *a4 = v8;
    return v10;
  }
  return result;
}


//======================================================================
// sub_2121D8
// address: 0x002121D8   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_2121D8(int *a1, int a2, char *a3, char **a4, unsigned int **a5)
{
  int v5; // r6
  char *v8; // r4
  int result; // r0
  int v10; // r5

  v5 = *a1;
  v8 = sub_211AA4(*a1, a3, "%");
  result = 64;
  if ( v8 != nullptr )
  {
    v10 = sub_211D98(a1, (int)v8, a5);
    if ( v10 != 0 )
      ft_mem_free(v5, (int)v8);
    else
      *a4 = v8;
    return v10;
  }
  return result;
}


//======================================================================
// sub_212218
// address: 0x00212218   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_212218(int *a1, int a2, char *a3, char **a4, unsigned int **a5)
{
  int v5; // r6
  char *v8; // r4
  int result; // r0
  int v10; // r5

  v5 = *a1;
  v8 = sub_211AA4(*a1, a3, "._");
  result = 64;
  if ( v8 != nullptr )
  {
    v10 = sub_211D98(a1, (int)v8, a5);
    if ( v10 != 0 )
      ft_mem_free(v5, (int)v8);
    else
      *a4 = v8;
    return v10;
  }
  return result;
}


//======================================================================
// sub_213324
// address: 0x00213324   size: 0x7E (126 bytes)
//======================================================================
__int64 __fastcall sub_213324(int a1, int a2, unsigned int a3)
{
  void (__fastcall *v4)(_DWORD); // r3
  int v7; // r1
  void (__fastcall *v8)(int, int); // r3
  void (__fastcall *v9)(int); // r3
  int v10; // r1
  __int64 v12; // [sp+0h] [bp-Ch]

  LODWORD(v12) = a1;
  v4 = *(void (__fastcall **)(_DWORD))(a2 + 120);
  HIDWORD(v12) = *(_DWORD *)(a3 + 12);
  if ( v4 != nullptr )
    v4(*(_DWORD *)(a2 + 116));
  while ( *(_DWORD *)(a2 + 84) != 0 )
    FT_Done_GlyphSlot(*(_DWORD **)(a2 + 84));
  v7 = FT_List_Finalize((int *)(a2 + 108), (void (__fastcall *)(int, _DWORD, _DWORD))sub_2120A4, a1, a3) >> 32;
  v8 = *(void (__fastcall **)(int, int))(a2 + 48);
  *(_DWORD *)(a2 + 88) = 0;
  if ( v8 != nullptr )
    v8(a2, v7);
  sub_211FAE(a2, a1);
  v9 = *(void (__fastcall **)(int))(HIDWORD(v12) + 52);
  if ( v9 != nullptr )
    v9(a2);
  FT_Stream_Free(*(_DWORD *)(a2 + 104), *(_DWORD *)(a2 + 8) << 21 >> 31);
  *(_DWORD *)(a2 + 104) = 0;
  v10 = *(_DWORD *)(a2 + 128);
  if ( v10 != 0 )
  {
    ft_mem_free(a1, v10);
    *(_DWORD *)(a2 + 128) = 0;
  }
  ft_mem_free(a1, a2);
  return v12;
}


//======================================================================
// sub_213858
// address: 0x00213858   size: 0x9C (156 bytes)
//======================================================================
int __fastcall sub_213858(int *a1, int a2, int a3, int a4, char *a5, _DWORD *a6)
{
  _DWORD *v9; // r0
  int v10; // r4
  int v11; // r5
  int v12; // r7
  int v14; // [sp+4h] [bp-30h]
  int v16[9]; // [sp+10h] [bp-24h] BYREF

  v14 = *a1;
  if ( a2 == 0 )
  {
    v11 = 6;
LABEL_8:
    ft_mem_free(v14, a2);
    return v11;
  }
  v9 = ft_mem_alloc(*a1, 40, v16);
  v10 = (int)v9;
  if ( v16[0] != 0 )
  {
    v10 = 0;
  }
  else
  {
    FT_Stream_OpenMemory(v9, a2, a3);
    *(_DWORD *)(v10 + 24) = sub_21208E;
  }
  v11 = v16[0];
  if ( v16[0] != 0 )
    goto LABEL_8;
  v16[0] = 2;
  v16[4] = v10;
  if ( a5 != nullptr )
  {
    v16[0] = 10;
    v16[5] = FT_Get_Module((int)a1, a5);
  }
  v12 = FT_Open_Face(a1, v16, a4, a6);
  if ( v12 != 0 )
  {
    FT_Stream_Close(v10);
    ft_mem_free(v14, v10);
    return v12;
  }
  else
  {
    *(_DWORD *)(*a6 + 8) &= ~0x400u;
  }
  return v11;
}


//======================================================================
// sub_2138FC
// address: 0x002138FC   size: 0x18E (398 bytes)
//======================================================================
int __fastcall sub_2138FC(int *a1, _DWORD *a2, int a3, _DWORD *a4)
{
  int v5; // r2
  unsigned int *ULong; // r0
  int v7; // r2
  int v8; // r4
  int v9; // r0
  unsigned int *v10; // r5
  unsigned int *v11; // r7
  int v12; // r2
  int v13; // r2
  void *v14; // r7
  char *v15; // r2
  int result; // r0
  int v18; // [sp+Ch] [bp-30h]
  int v19; // [sp+10h] [bp-2Ch]
  unsigned int v20; // [sp+18h] [bp-24h]
  unsigned int *v21; // [sp+1Ch] [bp-20h]
  int v23; // [sp+24h] [bp-18h]
  int UShort; // [sp+2Ch] [bp-10h]
  int v26[2]; // [sp+34h] [bp-8h] BYREF

  v23 = *a1;
  v20 = FT_Stream_Pos((int)a2);
  ULong = FT_Stream_ReadULong(a2, v26, v5);
  v8 = v26[0];
  if ( v26[0] != 0 )
  {
    v9 = v26[0];
    goto LABEL_23;
  }
  if ( ULong == (unsigned int *)1954115633 )
  {
    UShort = FT_Stream_ReadUShort(a2, v26, v7);
    v9 = v26[0];
    if ( v26[0] != 0 )
    {
LABEL_25:
      v10 = nullptr;
      v11 = nullptr;
      goto LABEL_27;
    }
    v9 = FT_Stream_Skip(a2, 6);
    v26[0] = v9;
    if ( v9 == 0 )
    {
      v8 = 0;
      v10 = nullptr;
      v11 = nullptr;
      v19 = 0;
      v18 = -1;
      while ( 1 )
      {
        if ( v19 >= UShort )
        {
          v9 = 142;
          goto LABEL_27;
        }
        v21 = FT_Stream_ReadULong(a2, v26, UShort);
        if ( v26[0] != 0
          || (v26[0] = FT_Stream_Skip(a2, 4), v26[0] != 0)
          || (v11 = FT_Stream_ReadULong(a2, v26, v12), v26[0] != 0)
          || (v10 = FT_Stream_ReadULong(a2, v26, v13), v9 = v26[0], v26[0] != 0) )
        {
          v9 = v26[0];
          goto LABEL_27;
        }
        if ( v21 == (unsigned int *)1128875040 )
        {
          v11 = (unsigned int *)((char *)v11 + 22);
          ++v18;
          v10 = (unsigned int *)((char *)v10 - 22);
          v8 = 1;
          if ( a3 < 0 )
            goto LABEL_27;
        }
        else if ( v21 == (unsigned int *)1415139377 )
        {
          v11 += 6;
          ++v18;
          v10 -= 6;
          v8 = v26[0];
          if ( a3 < 0 )
            goto LABEL_27;
        }
        else if ( a3 < 0 )
        {
          goto LABEL_20;
        }
        if ( v18 == a3 )
        {
          v9 = 0;
          goto LABEL_27;
        }
LABEL_20:
        ++v19;
      }
    }
LABEL_23:
    v8 = 0;
    goto LABEL_25;
  }
  v10 = (unsigned int *)v26[0];
  v11 = (unsigned int *)v26[0];
  v9 = 2;
LABEL_27:
  v26[0] = v9;
  if ( v9 == 0 && FT_Stream_Seek(a2, (unsigned int)v11 + v20) == 0 )
  {
    v14 = ft_mem_alloc(v23, (int)v10, v26);
    if ( v26[0] == 0 )
    {
      v26[0] = FT_Stream_Read(a2, v14, (unsigned int)v10);
      if ( v26[0] == 0 )
      {
        if ( v8 != 0 )
          v15 = "cid";
        else
          v15 = "type1";
        v26[0] = sub_213858(a1, (int)v14, (int)v10, (((a3 - 1) | a3) >> 31) & a3, v15, a4);
      }
    }
  }
  if ( v26[0] != 2 )
    return v26[0];
  result = FT_Stream_Seek(a2, v20);
  if ( result == 0 )
    return v26[0];
  return result;
}


//======================================================================
// sub_213AA0
// address: 0x00213AA0   size: 0x2F4 (756 bytes)
//======================================================================
int __fastcall sub_213AA0(int *a1, _DWORD *a2, unsigned int a3, int a4, int **a5)
{
  int HeaderInfo; // r4
  int v8; // r1
  int i; // r4
  int v10; // r2
  unsigned int *v11; // r0
  _BYTE *v12; // r0
  int v13; // r5
  int v14; // r4
  int v15; // r6
  int v16; // r2
  int v17; // r2
  int UShort; // r0
  unsigned int v19; // r2
  int v20; // r1
  _BYTE *v21; // r3
  int v22; // r2
  int *v23; // r3
  int DataOffsets; // r0
  int v25; // r4
  int v26; // r2
  unsigned int *ULong; // r0
  int v28; // r5
  void *v29; // r0
  const void *v30; // r6
  char *v31; // r3
  signed int v33; // [sp+14h] [bp-48h]
  unsigned int v34; // [sp+14h] [bp-48h]
  int v35; // [sp+18h] [bp-44h]
  int v36; // [sp+18h] [bp-44h]
  int v37; // [sp+1Ch] [bp-40h]
  int j; // [sp+24h] [bp-38h]
  int v40; // [sp+28h] [bp-34h]
  int v41; // [sp+2Ch] [bp-30h]
  int v42; // [sp+30h] [bp-2Ch]
  int v43; // [sp+34h] [bp-28h]
  int v44; // [sp+38h] [bp-24h]
  unsigned int *v45; // [sp+3Ch] [bp-20h]
  unsigned int v46; // [sp+44h] [bp-18h] BYREF
  int v47; // [sp+48h] [bp-14h] BYREF
  int v48; // [sp+4Ch] [bp-10h] BYREF
  int v49; // [sp+50h] [bp-Ch] BYREF
  int v50[2]; // [sp+54h] [bp-8h] BYREF

  v41 = *a1;
  HeaderInfo = FT_Raccess_Get_HeaderInfo((int)a1, a2, a3, &v46, (unsigned int *)&v47);
  if ( HeaderInfo != 0 )
    return HeaderInfo;
  if ( FT_Raccess_Get_DataOffsets(a1, a2, v46, v47, (unsigned int *)0x504F5354, &v48, &v49) != 0 )
  {
    DataOffsets = FT_Raccess_Get_DataOffsets(a1, a2, v46, v47, (unsigned int *)0x73666E74, &v48, &v49);
    HeaderInfo = DataOffsets;
    if ( DataOffsets != 0 )
      return HeaderInfo;
    v36 = *a1;
    v25 = a4 % v49 != -1 ? a4 % v49 : 0;
    if ( v25 >= v49 )
      goto LABEL_41;
    v34 = *(_DWORD *)(4 * v25 + v48);
    v50[0] = FT_Stream_Seek(a2, v34);
    if ( v50[0] == 0 )
    {
      ULong = FT_Stream_ReadULong(a2, v50, v26);
      v28 = (int)ULong;
      if ( v50[0] == 0 )
      {
        if ( ULong == (unsigned int *)-1 )
        {
LABEL_41:
          HeaderInfo = 1;
          goto LABEL_56;
        }
        v50[0] = sub_2138FC(a1, a2, v25, a5);
        if ( v50[0] != 0 && FT_Stream_Seek(a2, v34 + 4) == 0 )
        {
          v29 = ft_mem_alloc(v36, v28, v50);
          HeaderInfo = v50[0];
          v30 = v29;
          if ( v50[0] != 0 )
            goto LABEL_56;
          v50[0] = FT_Stream_Read(a2, v29, v28);
          if ( v50[0] == 0 )
          {
            if ( v28 <= 4 )
            {
              v31 = "truetype";
            }
            else if ( j_memcmp(v30, "OTTO", 4u) == 0 )
            {
              v31 = "cff";
            }
            else
            {
              v31 = "truetype";
            }
            v50[0] = sub_213858(a1, (int)v30, v28, 0, v31, a5);
          }
        }
      }
    }
    HeaderInfo = v50[0];
LABEL_56:
    ft_mem_free(v41, v48);
    if ( HeaderInfo == 0 )
    {
      v22 = v49;
      v23 = *a5;
      goto LABEL_58;
    }
    return HeaderInfo;
  }
  v8 = *a1;
  HeaderInfo = 1;
  v42 = v48;
  v43 = v49;
  v50[0] = 1;
  v44 = v8;
  if ( (unsigned int)(a4 + 1) <= 1 )
  {
    v33 = 0;
    for ( i = 0; i < v43; ++i )
    {
      v50[0] = FT_Stream_Seek(a2, *(_DWORD *)(v42 + 4 * i));
      if ( v50[0] != 0 )
        goto LABEL_36;
      v11 = FT_Stream_ReadULong(a2, v50, v10);
      if ( v50[0] != 0 )
        goto LABEL_36;
      v33 += (signed int)v11 + 6;
    }
    v12 = ft_mem_alloc(v44, v33 + 2, v50);
    v13 = v50[0];
    v14 = (int)v12;
    if ( v50[0] == 0 )
    {
      *v12 = 0x80;
      v12[1] = 1;
      v12[2] = 0;
      v12[3] = 0;
      v12[4] = 0;
      v12[5] = 0;
      v35 = 2;
      v15 = 6;
      v40 = 1;
      for ( j = 0; j < v43; ++j )
      {
        v50[0] = FT_Stream_Seek(a2, *(_DWORD *)(v42 + 4 * j));
        if ( v50[0] != 0 )
          goto LABEL_35;
        v45 = FT_Stream_ReadULong(a2, v50, v16);
        if ( v50[0] != 0 )
          goto LABEL_36;
        UShort = FT_Stream_ReadUShort(a2, v50, v17);
        v19 = v50[0];
        if ( v50[0] != 0 )
          goto LABEL_36;
        v37 = UShort >> 8;
        if ( UShort >> 8 != 0 )
        {
          if ( (int)v45 > 2 )
            v19 = (unsigned int)v45 - 2;
          if ( v37 == v40 )
          {
            v13 += v19;
            v20 = v15;
          }
          else
          {
            if ( v33 <= v35 )
              goto LABEL_35;
            *(_DWORD *)(v14 + v35) = v13;
            if ( v37 == 5 )
              break;
            if ( v33 - 3 <= v15 )
              goto LABEL_35;
            *(_BYTE *)(v14 + v15) = 0x80;
            v35 = v15 + 2;
            v21 = (_BYTE *)(v14 + v15);
            v21[1] = BYTE1(UShort);
            v13 = v19;
            *(_BYTE *)(v14 + v15 + 2) = 0;
            v21[3] = 0;
            v21[4] = 0;
            v20 = v15 + 6;
            v21[5] = 0;
          }
          v50[0] = 1;
          if ( v20 > v33 )
            goto LABEL_35;
          v15 = v20 + v19;
          if ( (int)(v20 + v19) > v33 )
            goto LABEL_35;
          v50[0] = FT_Stream_Read(a2, (void *)(v14 + v20), v19);
          if ( v50[0] != 0 )
            goto LABEL_35;
        }
        else
        {
          v37 = v40;
        }
        v40 = v37;
      }
      if ( v15 <= v33 )
      {
        *(_BYTE *)(v14 + v15) = 0x80;
        *(_BYTE *)(v14 + v15 + 1) = 3;
        if ( v33 > v35 )
        {
          *(_DWORD *)(v14 + v35) = v13;
          HeaderInfo = sub_213858(a1, v14, v15 + 2, 0, "type1", a5);
          goto LABEL_37;
        }
      }
LABEL_35:
      ft_mem_free(v44, v14);
    }
LABEL_36:
    HeaderInfo = v50[0];
  }
LABEL_37:
  ft_mem_free(v41, v48);
  if ( HeaderInfo == 0 )
  {
    v22 = 1;
    v23 = *a5;
LABEL_58:
    *v23 = v22;
  }
  return HeaderInfo;
}


//======================================================================
// sub_214196
// address: 0x00214196   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_214196(int a1)
{
  int result; // r0

  result = j_fclose(*(FILE **)(a1 + 12));
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  return result;
}


//======================================================================
// sub_2141AA
// address: 0x002141AA   size: 0x30 (48 bytes)
//======================================================================
size_t __fastcall sub_2141AA(int a1, unsigned int a2, void *ptr, size_t a4)
{
  unsigned int v7; // r3
  size_t result; // r0
  FILE *v9; // r4

  if ( a4 != 0 || (v7 = *(_DWORD *)(a1 + 4), result = 1, a2 <= v7) )
  {
    v9 = *(FILE **)(a1 + 12);
    if ( *(_DWORD *)(a1 + 8) != a2 )
      j_fseek(*(FILE **)(a1 + 12), a2, 0);
    return j_fread(ptr, 1u, a4, v9);
  }
  return result;
}


//======================================================================
// sub_2141DA
// address: 0x002141DA   size: 0xA (10 bytes)
//======================================================================
void *__fastcall sub_2141DA(int a1, size_t byte_count)
{
  return j_malloc(byte_count);
}


//======================================================================
// sub_2141E4
// address: 0x002141E4   size: 0xA (10 bytes)
//======================================================================
void __fastcall sub_2141E4(int a1, void *p)
{
  j_free(p);
}


//======================================================================
// sub_2141EE
// address: 0x002141EE   size: 0xC (12 bytes)
//======================================================================
void *__fastcall sub_2141EE(int a1, int a2, size_t byte_count, void *p)
{
  return j_realloc(p, byte_count);
}


//======================================================================
// sub_214358
// address: 0x00214358   size: 0x4E (78 bytes)
//======================================================================
int *__fastcall sub_214358(int *result)
{
  int v1; // r2
  int v2; // r3
  int v3; // r1
  int v4; // r2
  int v5; // r3
  int v6; // r3
  int v7; // r2
  int v8; // r3
  int v9; // r1
  int v10; // r2
  int v11; // r3

  v1 = result[4];
  v2 = result[2];
  result[8] = v1;
  v3 = *result;
  v4 = (v1 + v2) / 2;
  result[6] = v4;
  v5 = (v2 + v3) / 2;
  result[2] = v5;
  v6 = (v4 + v5) / 2;
  v7 = result[5];
  result[4] = v6;
  v8 = result[3];
  result[9] = v7;
  v9 = result[1];
  v10 = (v7 + v8) / 2;
  result[7] = v10;
  v11 = (v8 + v9) / 2;
  result[3] = v11;
  result[5] = (v10 + v11) / 2;
  return result;
}


//======================================================================
// sub_2143A6
// address: 0x002143A6   size: 0x74 (116 bytes)
//======================================================================
int *__fastcall sub_2143A6(int *result)
{
  int v1; // r3
  int v2; // r2
  int v3; // r5
  int v4; // r4
  int v5; // r1
  int v6; // r2
  int v7; // r4
  int v8; // r1
  int v9; // r1
  int v10; // r3
  int v11; // r5
  int v12; // r4
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int v16; // r2
  int v17; // r4
  int v18; // r1
  int v19; // r1
  int v20; // r3

  v1 = result[4];
  v2 = result[6];
  v3 = result[2];
  v4 = *result;
  result[12] = v2;
  v5 = v3 + v4;
  v6 = (v2 + v1 + 1) >> 1;
  v7 = (v3 + v1 + 1) >> 1;
  v8 = (v5 + 1) >> 1;
  result[2] = v8;
  v9 = (v8 + v7 + 1) >> 1;
  v10 = (v6 + v7 + 1) >> 1;
  result[8] = v10;
  v11 = result[3];
  v12 = result[1];
  result[10] = v6;
  result[6] = (v9 + v10 + 1) >> 1;
  v13 = result[7];
  v14 = result[5];
  result[4] = v9;
  result[13] = v13;
  v15 = v11 + v12;
  v16 = (v13 + v14 + 1) >> 1;
  v17 = (v11 + v14 + 1) >> 1;
  v18 = (v15 + 1) >> 1;
  result[3] = v18;
  v19 = (v18 + v17 + 1) >> 1;
  v20 = (v16 + v17 + 1) >> 1;
  result[9] = v20;
  result[11] = v16;
  result[5] = v19;
  result[7] = (v19 + v20 + 1) >> 1;
  return result;
}


//======================================================================
// sub_21441A
// address: 0x0021441A   size: 0x36 (54 bytes)
//======================================================================
_WORD *__fastcall sub_21441A(int a1, __int16 *a2)
{
  int v2; // r3
  int v3; // r1
  _WORD *v4; // r2
  _WORD *result; // r0

  v2 = *(_DWORD *)(a1 + 112);
  *(_WORD *)(a1 + 156) = -(__int16)v2;
  v3 = -*a2 * v2;
  *(_DWORD *)(a1 + 148) = v3;
  if ( v2 > 0 )
    *(_DWORD *)(a1 + 148) = v3 + v2 * (*(_DWORD *)(a1 + 104) - 1);
  v4 = (_WORD *)(a1 + 158);
  result = (_WORD *)(a1 + 160);
  *v4 = 0;
  *result = 0;
  return result;
}


//======================================================================
// sub_214450
// address: 0x00214450   size: 0xAC (172 bytes)
//======================================================================
int __fastcall sub_214450(int result, int a2, int a3, int a4)
{
  int v4; // r5
  int v5; // r4
  int v6; // r1
  int v7; // r3
  int v8; // r2
  int v9; // r4
  int v10; // r5
  int v11; // r2
  int v12; // r1
  _BYTE *v13; // r3
  int v14; // r4
  int v15; // r0
  _BYTE *v16; // r2
  _BYTE *v17; // r4

  v4 = *(_DWORD *)(result + 4);
  v5 = ((a3 + v4 - 1) & -v4) >> *(_DWORD *)result;
  v6 = v5;
  if ( a4 - a3 - v4 > *(_DWORD *)(result + 20) )
    v6 = (a4 & -v4) >> *(_DWORD *)result;
  if ( v6 >= 0 )
  {
    v7 = *(unsigned __int16 *)(result + 56);
    if ( v5 < v7 )
    {
      v8 = (~v5 >> 31) & v5;
      if ( v6 >= v7 )
        v6 = v7 - 1;
      v9 = v8 >> 3;
      v10 = v6 >> 3;
      v11 = (unsigned __int8)(255 >> (v8 & 7));
      v12 = (unsigned __int8)~(127 >> (v6 & 7));
      if ( *(__int16 *)(result + 158) > v9 )
        *(_WORD *)(result + 158) = v9;
      if ( *(__int16 *)(result + 160) < v10 )
        *(_WORD *)(result + 160) = v10;
      v13 = (_BYTE *)(*(_DWORD *)(result + 60) + v9 + *(_DWORD *)(result + 148));
      v14 = v10 - v9;
      v15 = (unsigned __int8)*v13;
      if ( v14 <= 0 )
      {
        result = v15 | v12 & v11;
        *v13 = result;
      }
      else
      {
        *v13 = v11 | v15;
        result = v14 - 1;
        v16 = v13;
        v17 = &v13[v14];
        while ( ++v16 != v17 )
          *v16 = -1;
        v13[result + 1] |= v12;
      }
    }
  }
  return result;
}


//======================================================================
// sub_2144FC
// address: 0x002144FC   size: 0x144 (324 bytes)
//======================================================================
int __fastcall sub_2144FC(int *a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  int result; // r0
  int v8; // r1
  int v9; // r5
  int v10; // r3
  int v11; // r2
  int v12; // r1
  int v13; // r3
  int v14; // r0
  __int16 v15; // r2
  char v16; // r3
  int v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch]

  result = a1[1];
  v17 = -result;
  v8 = (a3 + result - 1) & -result;
  v9 = -result & a4;
  if ( v8 <= v9 )
  {
    v10 = (a3 + result - 1) & -result;
LABEL_28:
    v13 = v10 >> *a1;
    if ( v13 >= 0 && v13 < *((unsigned __int16 *)a1 + 28) )
    {
      v14 = v13 >> 3;
      v15 = v13 >> 3;
      v16 = v13 & 7;
      if ( *((__int16 *)a1 + 79) > v15 )
        *((_WORD *)a1 + 79) = v15;
      if ( *((__int16 *)a1 + 80) < v15 )
        *((_WORD *)a1 + 80) = v15;
      result = v14 + a1[37];
      *(_BYTE *)(a1[15] + result) |= 128 >> v16;
    }
  }
  else
  {
    result += v9;
    v18 = a5[3];
    if ( v8 == result )
    {
      result = a5[3] & 7;
      switch ( v18 & 7 )
      {
        case 0:
          goto LABEL_15;
        case 1:
        case 5:
          result = a6;
          if ( a5[7] == a6 && (int)a5[4] <= 0 )
          {
            if ( (v18 & 0x10) == 0 )
              return result;
            result = a4 - a3;
            if ( a4 - a3 < a1[2] )
              return result;
          }
          result = *(_DWORD *)(a6 + 28);
          if ( (_DWORD *)result == a5 )
          {
            result = a5[5];
            if ( result == a2 )
            {
              if ( (v18 & 0x20) == 0 )
                return result;
              result = a4 - a3;
              if ( a4 - a3 < a1[2] )
                return result;
            }
          }
          if ( (a5[3] & 7) == 1 )
          {
LABEL_15:
            v10 = v9;
          }
          else
          {
            result = a1[2];
            v10 = ((a3 + a4 - 1) / 2 + result) & v17;
          }
LABEL_16:
          v11 = *a1;
          if ( v10 < 0 )
          {
            v10 = v8;
LABEL_21:
            v8 = v9;
            goto LABEL_23;
          }
          result = *((unsigned __int16 *)a1 + 28);
          if ( v10 >> v11 < result )
          {
            if ( v10 != v8 )
              goto LABEL_23;
            goto LABEL_21;
          }
          v10 = v9;
LABEL_23:
          v12 = v8 >> v11;
          if ( v12 >= 0 && v12 < *((unsigned __int16 *)a1 + 28) )
          {
            result = 128 >> (v12 & 7);
            if ( ((unsigned __int8)result & *(_BYTE *)(a1[15] + a1[37] + (v12 >> 3))) != 0 )
              return result;
          }
          goto LABEL_28;
        case 4:
          v10 = ((a3 + a4 - 1) / 2 + a1[2]) & v17;
          goto LABEL_16;
        default:
          return result;
      }
    }
  }
  return result;
}


//======================================================================
// sub_214640
// address: 0x00214640   size: 0x12 (18 bytes)
//======================================================================
__int16 *__fastcall sub_214640(int a1)
{
  _DWORD *v1; // r3
  __int16 *result; // r0

  v1 = (_DWORD *)(a1 + 148);
  result = (__int16 *)(a1 + 156);
  *v1 += *result;
  return result;
}


//======================================================================
// sub_214654
// address: 0x00214654   size: 0x4C (76 bytes)
//======================================================================
_DWORD *__fastcall sub_214654(_DWORD *result, int a2, int a3, int a4)
{
  int v4; // r4
  int v5; // r5
  int v6; // r4
  int v7; // r4
  int v8; // r5
  int v9; // r2
  _BYTE *v10; // r3

  v4 = result[1];
  if ( a4 - a3 < v4 )
  {
    v5 = -v4;
    v6 = (a3 + v4 - 1) & -v4;
    if ( v6 == (a4 & v5) )
    {
      v7 = v6 >> *result;
      if ( v7 >= 0 )
      {
        v8 = result[26];
        if ( v7 < v8 )
        {
          v9 = result[28];
          v10 = (_BYTE *)(result[15] + (a2 >> 3) - v7 * v9);
          if ( v9 > 0 )
            v10 += v9 * (v8 - 1);
          *v10 |= 128 >> (a2 & 7);
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_2146A0
// address: 0x002146A0   size: 0x128 (296 bytes)
//======================================================================
int __fastcall sub_2146A0(int *a1, int a2, int a3, int a4, _DWORD *a5, int a6)
{
  int v6; // r3
  int v8; // r5
  int v9; // r6
  int result; // r0
  int v11; // r3
  int v12; // r2
  int v13; // r5
  int v14; // r0
  unsigned __int8 *v15; // r2
  int v16; // r5
  int v17; // r2
  _BYTE *v18; // r3
  int v20; // [sp+8h] [bp-Ch]

  v6 = a1[1];
  v8 = (a3 + v6 - 1) & -v6;
  v9 = -v6 & a4;
  if ( v8 <= v9 )
  {
    v11 = (a3 + v6 - 1) & -v6;
LABEL_29:
    result = v11 >> *a1;
    if ( result >= 0 )
    {
      v16 = a1[26];
      if ( result < v16 )
      {
        v17 = a1[28];
        result *= v17;
        v18 = (_BYTE *)(a1[15] + (a2 >> 3) - result);
        if ( v17 > 0 )
          v18 += v17 * (v16 - 1);
        *v18 |= 128 >> (a2 & 7);
      }
    }
  }
  else
  {
    v20 = a5[3];
    result = v9 + v6;
    if ( v8 == v9 + v6 )
    {
      result = a5[3] & 7;
      switch ( v20 & 7 )
      {
        case 0:
          goto LABEL_14;
        case 1:
        case 5:
          result = a6;
          if ( a5[7] == a6 && (int)a5[4] <= 0 )
          {
            if ( (v20 & 0x10) == 0 )
              return result;
            result = a4 - a3;
            if ( a4 - a3 < a1[2] )
              return result;
          }
          if ( *(_DWORD **)(a6 + 28) == a5 )
          {
            result = a5[5];
            if ( result == a2 )
            {
              if ( (v20 & 0x20) == 0 )
                return result;
              result = a4 - a3;
              if ( a4 - a3 < a1[2] )
                return result;
            }
          }
          if ( (a5[3] & 7) == 1 )
LABEL_14:
            v11 = -v6 & a4;
          else
LABEL_13:
            v11 = ((a3 + a4 - 1) / 2 + a1[2]) & -v6;
          v12 = *a1;
          if ( v11 < 0 )
          {
            v11 = v8;
LABEL_20:
            v8 = v9;
            goto LABEL_22;
          }
          if ( v11 >> v12 < a1[26] )
          {
            if ( v11 != v8 )
              goto LABEL_22;
            goto LABEL_20;
          }
          v11 = v9;
LABEL_22:
          v13 = v8 >> v12;
          v14 = a1[28];
          v15 = (unsigned __int8 *)(a1[15] + (a2 >> 3) - v14 * v13);
          if ( v14 > 0 )
            v15 += v14 * (a1[26] - 1);
          if ( v13 >= 0 && v13 < a1[26] )
          {
            result = a2 & 7;
            if ( ((128 >> (a2 & 7)) & *v15) != 0 )
              return result;
          }
          goto LABEL_29;
        case 4:
          goto LABEL_13;
        default:
          return result;
      }
    }
  }
  return result;
}


//======================================================================
// sub_2147CC
// address: 0x002147CC   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_2147CC(_DWORD *a1)
{
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)(a1[3] + 56) + 8))(
    a1[13],
    *(_DWORD *)(a1[1] + 164),
    *(_DWORD *)(a1[1] + 168));
  return 0;
}


//======================================================================
// sub_2147E8
// address: 0x002147E8   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_2147E8(int a1)
{
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 56) + 12))(*(_DWORD *)(a1 + 52));
}


//======================================================================
// sub_2147F6
// address: 0x002147F6   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_2147F6(int a1)
{
  return ft_mem_free(*(_DWORD *)(a1 + 8), a1);
}


//======================================================================
// sub_214802
// address: 0x00214802   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_214802(int a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r3
  int v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = (int)a2;
  v8[1] = a3;
  *a2 = 0;
  v5 = ft_mem_alloc(a1, 24, v8);
  v6 = v8[0];
  if ( v8[0] == 0 )
  {
    v5[2] = a1;
    *a2 = v5;
  }
  return v6;
}


//======================================================================
// sub_214822
// address: 0x00214822   size: 0x26 (38 bytes)
//======================================================================
void *__fastcall sub_214822(int a1, int a2, _DWORD *a3)
{
  void *result; // r0

  result = j_memset(a3, 0, 0x10u);
  if ( *(_DWORD *)(a2 + 72) == *(_DWORD *)(a1 + 16) )
    return (void *)FT_Outline_Get_CBox(a2 + 108, a3);
  return result;
}


//======================================================================
// sub_214848
// address: 0x00214848   size: 0x166 (358 bytes)
//======================================================================
int __fastcall sub_214848(int a1, int a2, int a3, int *a4)
{
  _DWORD *v6; // r2
  unsigned int v7; // r2
  unsigned int v8; // r1
  _BYTE *v9; // r2
  unsigned int v10; // r3
  int v11; // r0
  int v12; // r2
  int v13; // r3
  int v14; // r0
  unsigned int v16; // [sp+Ch] [bp-60h]
  int v17; // [sp+10h] [bp-5Ch]
  unsigned int v18; // [sp+14h] [bp-58h]
  char v19; // [sp+18h] [bp-54h]
  int v20; // [sp+1Ch] [bp-50h]
  int v21; // [sp+24h] [bp-48h] BYREF
  unsigned int v22; // [sp+28h] [bp-44h] BYREF
  unsigned int v23; // [sp+2Ch] [bp-40h]
  unsigned int v24; // [sp+30h] [bp-3Ch]
  int v25; // [sp+34h] [bp-38h]
  int v26; // [sp+38h] [bp-34h]
  int v27; // [sp+3Ch] [bp-30h]
  _BOOL4 v28; // [sp+40h] [bp-2Ch]

  v19 = a3;
  if ( *(_DWORD *)(a2 + 72) != *(_DWORD *)(a1 + 16) )
    return 6;
  if ( a3 == 2 )
    v6 = &ft_raster5_renderer_class_ptr;
  else
    v6 = &ft_raster1_renderer_class_ptr;
  if ( *(_DWORD *)(a1 + 12) == *v6 )
    return 19;
  v17 = a2 + 108;
  if ( a4 != nullptr )
    FT_Outline_Translate(a2 + 108, *a4, a4[1]);
  FT_Outline_Get_CBox(v17, &v22);
  v7 = (v23 + 32) & 0xFFFFFFC0;
  v8 = (v25 + 32) & 0xFFFFFFC0;
  v22 = (v22 + 32) & 0xFFFFFFC0;
  v23 = v7;
  v24 = (v24 + 32) & 0xFFFFFFC0;
  v25 = v8;
  v16 = (int)(v24 - v22) >> 6;
  if ( v16 > 0xFFFF )
    return 6;
  v18 = (int)(v8 - v7) >> 6;
  if ( v18 > 0xFFFF )
    return 6;
  v20 = *(_DWORD *)(a1 + 8);
  if ( (*(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) & 1) != 0 )
  {
    ft_mem_free(*(_DWORD *)(a1 + 8), *(_DWORD *)(a2 + 88));
    *(_DWORD *)(a2 + 88) = 0;
    *(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) &= ~1u;
  }
  v9 = (_BYTE *)(a2 + 94);
  if ( (v19 & 2) != 0 )
  {
    *v9 = 1;
    v10 = 2 * ((v16 + 15) >> 4);
  }
  else
  {
    *v9 = 2;
    v10 = (v16 + 3) & 0xFFFFFFFC;
    *(_WORD *)(a2 + 92) = 256;
  }
  *(_DWORD *)(a2 + 76) = v18;
  *(_DWORD *)(a2 + 80) = v16;
  *(_DWORD *)(a2 + 84) = v10;
  v11 = ft_mem_realloc(v20, v18, 0, v10, 0, &v21);
  v12 = v21;
  *(_DWORD *)(a2 + 88) = v11;
  if ( v12 == 0 )
  {
    *(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) |= 1u;
    FT_Outline_Translate(v17, -v22, -v23);
    v26 = a2 + 76;
    v13 = *(unsigned __int8 *)(a2 + 94);
    v27 = a2 + 108;
    v28 = v13 == 2;
    v21 = (*(int (__fastcall **)(_DWORD))(a1 + 56))(*(_DWORD *)(a1 + 52));
    FT_Outline_Translate(v17, v22, v23);
    if ( v21 == 0 )
    {
      v14 = v22;
      *(_DWORD *)(a2 + 72) = 1651078259;
      *(_DWORD *)(a2 + 100) = v14 >> 6;
      *(_DWORD *)(a2 + 104) = v25 >> 6;
    }
  }
  return v21;
}


//======================================================================
// sub_2149C0
// address: 0x002149C0   size: 0x1D2 (466 bytes)
//======================================================================
int __fastcall sub_2149C0(int *a1, int **a2)
{
  int *v3; // r12
  int v4; // r4
  int v5; // r0
  int v6; // r4
  int v7; // r4
  int v8; // r5
  int v9; // r7
  int v10; // r5
  int v11; // r2
  int v12; // r7
  int v13; // r2
  int v14; // r7
  int v15; // r3
  int v16; // r3
  int v17; // r2
  int v18; // r1
  int v19; // r2
  char *v20; // r2
  char v21; // r1
  char v22; // r1
  int v23; // r3
  int result; // r0
  int *v25; // [sp+Ch] [bp-8h]

  v25 = *a2;
  v3 = a2[1];
  if ( a1 == nullptr )
    return 96;
  result = 96;
  if ( *a1 != 0 && a1[1] != 0 )
  {
    if ( v3 != nullptr )
    {
      result = 0;
      if ( *((_WORD *)v3 + 1) == 0 )
        return result;
      v4 = *(__int16 *)v3;
      if ( v4 <= 0 )
        return result;
      v5 = v3[3];
      if ( v5 != 0 && v3[1] != 0 )
      {
        v6 = *(__int16 *)(2 * (v4 + 0x7FFFFFFF) + v5);
        result = 20;
        if ( *((__int16 *)v3 + 1) != v6 + 1 )
          return result;
        v7 = a1[3];
        if ( ((unsigned int)a2[2] & 2) != 0 )
          return 19;
        if ( v25 != nullptr )
        {
          result = v25[1];
          if ( result == 0 )
            return result;
          result = *v25;
          if ( *v25 == 0 )
            return result;
          if ( v25[3] != 0 )
          {
            v8 = v3[1];
            v9 = v3[2];
            *(_DWORD *)(v7 + 128) = *v3;
            *(_DWORD *)(v7 + 132) = v8;
            *(_DWORD *)(v7 + 136) = v9;
            v10 = v3[4];
            *(_DWORD *)(v7 + 140) = v3[3];
            *(_DWORD *)(v7 + 144) = v10;
            v11 = v25[1];
            v12 = v25[2];
            *(_DWORD *)(v7 + 104) = *v25;
            *(_DWORD *)(v7 + 108) = v11;
            *(_DWORD *)(v7 + 112) = v12;
            v13 = v25[4];
            v14 = v25[5];
            *(_DWORD *)(v7 + 116) = v25[3];
            *(_DWORD *)(v7 + 120) = v13;
            *(_DWORD *)(v7 + 124) = v14;
            v15 = *a1;
            *(_DWORD *)(v7 + 28) = *a1;
            *(_DWORD *)(v7 + 32) = v15 + 4 * ((unsigned int)a1[1] >> 2);
            if ( ((unsigned int)a2[2] & 1) != 0 )
              return 19;
            v16 = *(_DWORD *)(v7 + 144);
            if ( (v16 & 0x100) != 0 )
            {
              *(_DWORD *)(v7 + 16) = 256;
              *(_DWORD *)v7 = 12;
              v17 = 30;
            }
            else
            {
              *(_DWORD *)v7 = 6;
              *(_DWORD *)(v7 + 16) = 32;
              v17 = 2;
            }
            v18 = *(_DWORD *)v7;
            *(_DWORD *)(v7 + 20) = v17;
            *(_DWORD *)(v7 + 4) = 1 << v18;
            v19 = (1 << v18) / 2;
            v18 -= 6;
            *(_DWORD *)(v7 + 8) = v19;
            *(_DWORD *)(v7 + 12) = v18;
            *(_DWORD *)(v7 + 24) = v18;
            v20 = (char *)(v7 + 180);
            v21 = 2;
            if ( (v16 & 8) == 0 )
            {
              v22 = v16 & 0x10;
              if ( (v16 & 0x10) != 0 )
                v22 = 4;
              *v20 = v22;
              if ( (v16 & 0x20) != 0 )
                goto LABEL_27;
              v21 = *v20 + 1;
            }
            *v20 = v21;
LABEL_27:
            *(_BYTE *)(v7 + 181) = (v16 & 0x200) == 0;
            *(_DWORD *)(v7 + 164) = sub_21441A;
            *(_DWORD *)(v7 + 168) = sub_214450;
            *(_DWORD *)(v7 + 172) = sub_2144FC;
            *(_DWORD *)(v7 + 176) = sub_214640;
            *(_DWORD *)(v7 + 1024) = 0;
            *(_WORD *)(v7 + 960) = 0;
            *(_WORD *)(v7 + 962) = *(_DWORD *)(v7 + 104) - 1;
            v23 = *(_DWORD *)(v7 + 116);
            *(_WORD *)(v7 + 56) = *(_DWORD *)(v7 + 108);
            *(_DWORD *)(v7 + 60) = v23;
            result = sub_139034(v7, 0);
            if ( result == 0 && *(_BYTE *)(v7 + 181) != 0 && *(_BYTE *)(v7 + 180) != 2 )
            {
              *(_DWORD *)(v7 + 164) = nullsub_9;
              *(_DWORD *)(v7 + 168) = sub_214654;
              *(_DWORD *)(v7 + 172) = sub_2146A0;
              *(_DWORD *)(v7 + 176) = nullsub_10;
              *(_DWORD *)(v7 + 1024) = 0;
              *(_WORD *)(v7 + 960) = 0;
              *(_WORD *)(v7 + 962) = *(_DWORD *)(v7 + 108) - 1;
              return sub_139034(v7, 1);
            }
            return result;
          }
        }
      }
    }
    return 20;
  }
  return result;
}


//======================================================================
// sub_214BBC
// address: 0x00214BBC   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall sub_214BBC(_DWORD *result, int a2, int a3)
{
  if ( result != nullptr )
  {
    if ( a2 != 0 && a3 > 3075 )
    {
      *result = a2 + 1032;
      result[1] = a3 - 1032;
      result[3] = a2;
    }
    else
    {
      *result = 0;
      result[1] = 0;
      result[3] = 0;
    }
  }
  return result;
}


//======================================================================
// sub_214BEC
// address: 0x00214BEC   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_214BEC(int a1, int a2, int *a3, int *a4)
{
  int v6; // r3
  int result; // r0

  v6 = *(_DWORD *)(a1 + 16);
  result = 6;
  if ( *(_DWORD *)(a2 + 72) == v6 )
  {
    if ( a3 != nullptr )
      FT_Outline_Transform((int *)(a2 + 108), a3);
    if ( a4 != nullptr )
      FT_Outline_Translate(a2 + 108, *a4, a4[1]);
    return 0;
  }
  return result;
}


//======================================================================
// sub_214C20
// address: 0x00214C20   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall sub_214C20(int a1, int a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r2

  v2 = *(_DWORD **)(a1 + 156);
  v3 = &v2[4 * *(unsigned __int16 *)(a1 + 152)];
  while ( 1 )
  {
    if ( v2 >= v3 )
      return nullptr;
    if ( *v2 == a2 && v2[3] != 0 )
      break;
    v2 += 4;
  }
  return v2;
}


//======================================================================
// sub_214C4C
// address: 0x00214C4C   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_214C4C(int a1, int a2, unsigned int a3, _WORD *a4, _WORD *a5)
{
  int v5; // r4
  unsigned int v6; // r1
  int v7; // r6
  __int16 *v8; // r2
  __int16 v9; // r3

  v5 = a1 + 216;
  if ( a2 != 0 )
    v5 = a1 + 300;
  v6 = *(unsigned __int16 *)(v5 + 34);
  if ( *(_WORD *)(v5 + 34) != 0 && (v7 = *(_DWORD *)(v5 + 36)) != 0 && a3 < *(unsigned __int16 *)(a1 + 264) )
  {
    if ( a3 >= v6 )
    {
      *a4 = *(_WORD *)(2 * (a3 - v6) + *(_DWORD *)(v5 + 40));
      v9 = *(_WORD *)(4 * (v6 + 0x3FFFFFFF) + *(_DWORD *)(v5 + 36));
    }
    else
    {
      v8 = (__int16 *)(v7 + 4 * a3);
      *a4 = v8[1];
      v9 = *v8;
    }
    *a5 = v9;
  }
  else
  {
    *a5 = 0;
    *a4 = 0;
  }
  return 0;
}


//======================================================================
// sub_214CA8
// address: 0x00214CA8   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_214CA8(int a1, int a2)
{
  *(_DWORD *)(a1 + 16) = a2;
  return 0;
}


//======================================================================
// sub_214CAE
// address: 0x00214CAE   size: 0x10 (16 bytes)
//======================================================================
int __fastcall sub_214CAE(int a1, unsigned int a2)
{
  int v2; // r3
  int result; // r0

  v2 = *(_DWORD *)(a1 + 16);
  result = 0;
  if ( a2 <= 0xFF )
    return *(unsigned __int8 *)(v2 + a2 + 6);
  return result;
}


//======================================================================
// sub_214CBE
// address: 0x00214CBE   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_214CBE(int a1, int *a2)
{
  int v2; // r3
  int v3; // r2
  int result; // r0

  v2 = *a2;
  v3 = *(_DWORD *)(a1 + 16);
  while ( (unsigned int)++v2 <= 0xFF )
  {
    result = *(unsigned __int8 *)(v3 + v2 + 6);
    if ( *(_BYTE *)(v3 + v2 + 6) != 0 )
      goto LABEL_6;
  }
  v2 = 0;
  result = 0;
LABEL_6:
  *a2 = v2;
  return result;
}


//======================================================================
// sub_214CDC
// address: 0x00214CDC   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_214CDC(int a1, int *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  a2[1] = 0;
  *a2 = *(unsigned __int8 *)(v2 + 5) | (*(unsigned __int8 *)(v2 + 4) << 8);
  return 0;
}


//======================================================================
// sub_214CF0
// address: 0x00214CF0   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_214CF0(int a1, unsigned int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r0
  unsigned __int8 *v5; // r1

  if ( a2 > 0xFFFF )
    return 0;
  v2 = a1 + 6;
  v3 = a1 + 518;
  if ( a2 >> 8 != 0 )
  {
    v5 = (unsigned __int8 *)(v2 + 2 * (a2 >> 8));
    v4 = v3 + ((*v5 << 8) | v5[1] & 0xF8);
    v3 = -(((*v5 << 8) | v5[1] & 0xF8) != 0);
  }
  else
  {
    v4 = -(((*(unsigned __int8 *)(v2 + 2 * a2) << 8) | *(unsigned __int8 *)(v2 + 2 * a2 + 1)) == 0);
  }
  return v4 & v3;
}


//======================================================================
// sub_214D44
// address: 0x00214D44   size: 0x5E (94 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_214D44(int a1, unsigned int a2)
{
  unsigned __int8 v2; // r4
  unsigned __int8 *result; // r0
  unsigned __int8 *v4; // r3
  __int16 v5; // r6
  __int16 v6; // r5
  int v7; // r2
  int v8; // r7
  unsigned int v9; // r4
  unsigned int v10; // r1
  int v11; // r2
  int v12; // r3

  v2 = a2;
  result = (unsigned __int8 *)sub_214CF0(*(_DWORD *)(a1 + 16), a2);
  v4 = result;
  if ( result != nullptr )
  {
    v5 = result[4];
    v6 = result[5];
    v7 = result[6];
    v8 = result[7];
    v9 = v2 - ((*result << 8) | result[1]);
    v10 = (result[2] << 8) | result[3];
    result = nullptr;
    if ( v9 < v10 )
    {
      v11 = (v7 << 8) | v8;
      if ( v11 != 0 )
      {
        v12 = (v4[2 * v9 + 6 + v11] << 8) | v4[2 * v9 + 7 + v11];
        if ( v12 != 0 )
          return (unsigned __int8 *)(unsigned __int16)(v12 + ((v5 << 8) | v6));
      }
    }
  }
  return result;
}


//======================================================================
// sub_214DA4
// address: 0x00214DA4   size: 0xAE (174 bytes)
//======================================================================
int __fastcall sub_214DA4(int a1, unsigned int *a2)
{
  unsigned int i; // r4
  unsigned __int8 *v4; // r0
  int v5; // r7
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r7
  unsigned int v9; // r2
  unsigned __int16 v10; // r12
  int result; // r0
  unsigned int v12; // [sp+0h] [bp-14h]
  int v13; // [sp+4h] [bp-10h]

  v13 = *(_DWORD *)(a1 + 16);
  for ( i = *a2 + 1; i <= 0xFFFF; i = (i & 0xFFFFFF00) + 256 )
  {
    v4 = (unsigned __int8 *)sub_214CF0(v13, i);
    if ( v4 != nullptr )
    {
      v5 = (v4[6] << 8) | v4[7];
      if ( v5 != 0 )
      {
        v6 = (*v4 << 8) | v4[1];
        v7 = 0;
        if ( (unsigned __int8)i >= v6 )
        {
          v7 = (unsigned __int8)i - v6;
          v6 = (unsigned __int8)i;
        }
        v8 = (int)&v4[2 * v7 + 6 + v5];
        i = v6 + (i & 0xFFFFFF00);
        v12 = v4[3] | (v4[2] << 8);
        v9 = v7 - i;
        v10 = _byteswap_ushort(*((_WORD *)v4 + 2));
        while ( v9 + i < v12 )
        {
          v8 += 2;
          if ( ((*(unsigned __int8 *)(v8 - 2) << 8) | *(unsigned __int8 *)(v8 - 1)) != 0 )
          {
            result = (unsigned __int16)(v10 + _byteswap_ushort(*(_WORD *)(v8 - 2)));
            if ( v10 + _byteswap_ushort(*(_WORD *)(v8 - 2)) != 0 )
              goto LABEL_14;
          }
          ++i;
        }
      }
    }
  }
  i = 0;
  result = 0;
LABEL_14:
  *a2 = i;
  return result;
}


//======================================================================
// sub_214E58
// address: 0x00214E58   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_214E58(int a1, int *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  a2[1] = 2;
  *a2 = *(unsigned __int8 *)(v2 + 5) | (*(unsigned __int8 *)(v2 + 4) << 8);
  return 0;
}


//======================================================================
// sub_214E6C
// address: 0x00214E6C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_214E6C(_DWORD *a1, int a2)
{
  a1[4] = a2;
  a1[8] = ((*(unsigned __int8 *)(a2 + 6) << 8) | (unsigned int)*(unsigned __int8 *)(a2 + 7)) >> 1;
  a1[6] = -1;
  a1[7] = 0;
  return 0;
}


//======================================================================
// sub_214E88
// address: 0x00214E88   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_214E88(_DWORD *a1, unsigned int a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r5
  int v5; // r3
  int v6; // r5
  int v7; // r7
  int v8; // r6
  int v9; // r2
  int v10; // r3
  unsigned int v12; // [sp+4h] [bp-20h]
  int v13; // [sp+8h] [bp-1Ch]
  int v14; // [sp+Ch] [bp-18h]
  int v15; // [sp+10h] [bp-14h]
  int v16; // [sp+14h] [bp-10h]
  int v17; // [sp+18h] [bp-Ch]

  v2 = a1[4];
  v3 = 2 * (a1[8] + 1);
  v12 = a1[8];
  v4 = 2 * (a2 + v3 - 2);
  v13 = v2 + 2 * a2;
  v17 = v2 + v3 + v4 + 14;
  v16 = v2 + v4 + v3;
  v14 = v2 + 2 * a2 + v3;
  v15 = v2 + v3 + v3 - 2 + 2 * a2;
  v5 = 0;
  while ( a2 < v12 )
  {
    v6 = (*(unsigned __int8 *)(v13 + v5 + 14) << 8) | *(unsigned __int8 *)(v13 + v5 + 15);
    a1[11] = v6;
    v7 = (*(unsigned __int8 *)(v14 + v5 + 14) << 8) | *(unsigned __int8 *)(v14 + v5 + 15);
    a1[10] = v7;
    a1[12] = (*(char *)(v15 + v5 + 14) << 8) | *(unsigned __int8 *)(v15 + v5 + 15);
    v8 = v17 + v5;
    v9 = *(unsigned __int8 *)(v16 + v5 + 15) | (*(unsigned __int8 *)(v16 + v5 + 14) << 8);
    if ( a2 >= v12 - 1 && v7 == 0xFFFF && v6 == 0xFFFF )
    {
      if ( v9 == 0 )
        goto LABEL_15;
      if ( v8 + v9 + 2 > (unsigned int)(*(_DWORD *)(*a1 + 500) + *(_DWORD *)(*a1 + 504)) )
      {
        a1[12] = 1;
LABEL_15:
        v10 = 0;
LABEL_12:
        a1[13] = v10;
        a1[9] = a2;
        return 0;
      }
    }
    v5 += 2;
    if ( v9 != 0xFFFF )
    {
      v10 = 0;
      if ( v9 != 0 )
        v10 = v8 + v9;
      goto LABEL_12;
    }
    ++a2;
  }
  return -1;
}


//======================================================================
// sub_214F74
// address: 0x00214F74   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_214F74(int result)
{
  unsigned int v1; // r5
  _DWORD *v2; // r4
  unsigned int v3; // r3
  unsigned int v4; // r5
  unsigned int v5; // r1
  int v6; // r2
  int v7; // r3
  int v8; // r2
  int v9; // r3

  v1 = *(_DWORD *)(result + 24);
  v2 = (_DWORD *)result;
  if ( v1 > 0xFFFE )
  {
LABEL_18:
    v2[6] = -1;
    v9 = 0;
LABEL_19:
    v2[7] = v9;
    return result;
  }
  v3 = *(_DWORD *)(result + 40);
  v4 = v1 + 1;
  while ( 1 )
  {
    if ( v4 < v3 )
      v4 = v3;
    v5 = v2[11];
    v6 = v2[13];
    result = v2[12];
    if ( v4 <= v5 )
      break;
LABEL_16:
    result = sub_214E88(v2, v2[9] + 1);
    if ( result < 0 )
      goto LABEL_18;
    v3 = v2[10];
  }
  if ( v6 == 0 )
  {
    while ( 1 )
    {
      v9 = (unsigned __int16)(v4 + result);
      if ( (_WORD)v4 + (_WORD)result != 0 )
        break;
      if ( ++v4 > v5 )
        goto LABEL_16;
    }
    v2[6] = v4;
    goto LABEL_19;
  }
  v7 = v6 + 2 * (v4 - v2[10]);
  while ( 1 )
  {
    v7 += 2;
    if ( ((*(unsigned __int8 *)(v7 - 2) << 8) | *(unsigned __int8 *)(v7 - 1)) != 0 )
    {
      v8 = (unsigned __int16)(_byteswap_ushort(*(_WORD *)(v7 - 2)) + result);
      if ( v8 != 0 )
        break;
    }
    if ( ++v4 > v5 )
      goto LABEL_16;
  }
  v2[6] = v4;
  v2[7] = v8;
  return result;
}


//======================================================================
// sub_214FFC
// address: 0x00214FFC   size: 0x146 (326 bytes)
//======================================================================
int __fastcall sub_214FFC(_DWORD *a1, unsigned int *a2, int a3)
{
  int result; // r0
  unsigned int v6; // r3
  unsigned __int8 *v7; // r2
  unsigned __int8 *i; // r1
  unsigned int v9; // r5
  __int16 v10; // r4
  int v11; // r1
  unsigned __int8 *v13; // [sp+Ch] [bp-30h]
  unsigned int v14; // [sp+10h] [bp-2Ch]
  unsigned __int8 *v15; // [sp+14h] [bp-28h]
  unsigned int v16; // [sp+18h] [bp-24h]
  unsigned int v17; // [sp+1Ch] [bp-20h]
  unsigned __int8 *v18; // [sp+20h] [bp-1Ch]
  unsigned int v19; // [sp+2Ch] [bp-10h]

  v13 = (unsigned __int8 *)a1[4];
  result = 0;
  v14 = (v13[6] << 8) | v13[7] & 0xFE;
  v17 = v14 >> 1;
  if ( v14 >> 1 == 0 )
    return result;
  v6 = *a2 + (a3 != 0);
LABEL_3:
  if ( v6 > 0xFFFF )
    return 0;
  v16 = 0;
  v15 = &v13[v14 + 16];
  v7 = &v15[2 * v14];
  for ( i = v13 + 14; ; i = v18 )
  {
    v18 = i + 2;
    v15 += 2;
    v9 = (*(v15 - 2) << 8) | *(v15 - 1);
    if ( v6 < v9 )
      goto LABEL_20;
    v19 = (*i << 8) | i[1];
    if ( v6 > v19 )
      goto LABEL_20;
    v18 = v7;
    v10 = ((char)v7[-v14] << 8) | v7[-v14 + 1];
    v11 = (*v7 << 8) | v7[1];
    if ( v16 >= v17 - 1 && v9 == 0xFFFF && v19 == 0xFFFF )
    {
      if ( v11 == 0 )
        goto LABEL_17;
      if ( (unsigned int)&v7[v11 + 2] > *(_DWORD *)(*a1 + 500) + *(_DWORD *)(*a1 + 504) )
        break;
    }
    if ( v11 != 0xFFFF )
    {
      if ( v11 == 0 )
        goto LABEL_17;
      result = v7[2 * (v6 - v9) + 1 + v11] | (v7[2 * (v6 - v9) + v11] << 8);
      if ( result != 0 )
      {
        LOWORD(result) = _byteswap_ushort(*(_WORD *)&v7[2 * (v6 - v9) + v11]) + v10;
        goto LABEL_18;
      }
      if ( a3 != 0 )
      {
LABEL_23:
        ++v6;
        goto LABEL_3;
      }
      return result;
    }
LABEL_20:
    v7 += 2;
    if ( ++v16 == v17 )
    {
      if ( a3 != 0 )
        goto LABEL_23;
      return 0;
    }
  }
  v10 = 1;
LABEL_17:
  LOWORD(result) = v10 + v6;
LABEL_18:
  result = (unsigned __int16)result;
  if ( a3 == 0 )
    return result;
  if ( (_WORD)result == 0 )
    goto LABEL_23;
  *a2 = v6;
  return result;
}


//======================================================================
// sub_215148
// address: 0x00215148   size: 0x32E (814 bytes)
//======================================================================
int __fastcall sub_215148(_DWORD *a1, unsigned int *a2, int a3)
{
  int result; // r0
  unsigned int v5; // r2
  unsigned int v6; // r1
  unsigned int v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r12
  unsigned __int8 *v10; // r2
  unsigned __int8 *v11; // r2
  unsigned __int8 *v12; // r2
  int v13; // r3
  int v14; // r4
  int v15; // r6
  char *v16; // r0
  unsigned int v17; // r4
  char *v18; // r5
  unsigned __int8 *v19; // r0
  int v20; // r3
  int v21; // r2
  unsigned __int8 *v22; // r0
  unsigned __int8 *v23; // r0
  unsigned __int8 *v24; // [sp+4h] [bp-50h]
  char *v25; // [sp+8h] [bp-4Ch]
  unsigned int v26; // [sp+10h] [bp-44h]
  int v27; // [sp+14h] [bp-40h]
  int v28; // [sp+14h] [bp-40h]
  __int16 v29; // [sp+18h] [bp-3Ch]
  unsigned int v30; // [sp+1Ch] [bp-38h]
  unsigned int v31; // [sp+20h] [bp-34h]
  int i; // [sp+24h] [bp-30h]
  char *v33; // [sp+28h] [bp-2Ch]
  unsigned int v34; // [sp+28h] [bp-2Ch]
  unsigned int v35; // [sp+2Ch] [bp-28h]
  int v36; // [sp+30h] [bp-24h]
  __int16 v37; // [sp+34h] [bp-20h]
  unsigned int v38; // [sp+38h] [bp-1Ch]
  unsigned int v39; // [sp+3Ch] [bp-18h]
  unsigned int v40; // [sp+40h] [bp-14h]
  unsigned int v43; // [sp+4Ch] [bp-8h]

  v36 = a1[4];
  v26 = (*(unsigned __int8 *)(v36 + 6) << 8) | *(_BYTE *)(v36 + 7) & 0xFE;
  if ( v26 == 0 )
    return 0;
  v5 = 0xFFFF;
  v40 = v26 >> 1;
  v30 = *a2 + (a3 != 0);
  v6 = v26 >> 1;
  v7 = v26 >> 1;
  v8 = 0;
  v38 = v26 + 2;
  while ( 1 )
  {
    if ( v8 >= v7 )
      goto LABEL_49;
    v9 = (v8 + v7) >> 1;
    v10 = (unsigned __int8 *)(v36 + 2 * (v9 + 7));
    v31 = v10[1] | (*v10 << 8);
    v11 = &v10[v38];
    v39 = v11[1] | (*v11 << 8);
    if ( v30 < v39 )
    {
      v7 = (v8 + v7) >> 1;
      goto LABEL_47;
    }
    if ( v30 <= v31 )
      break;
    v8 = v9 + 1;
LABEL_47:
    v6 = v9;
    v5 = v31;
  }
  v12 = &v11[v26];
  v33 = (char *)&v12[v26];
  v37 = v12[1] | (unsigned __int16)((char)*v12 << 8);
  v27 = (unsigned __int8)v33[1] | ((unsigned __int8)*v33 << 8);
  if ( v9 < v40 - 1 )
  {
    v29 = v12[1] | (unsigned __int16)((char)*v12 << 8);
LABEL_19:
    v13 = (unsigned __int8)v33[1] | ((unsigned __int8)*v33 << 8);
    goto LABEL_21;
  }
  if ( v39 != 0xFFFF )
  {
    v29 = v12[1] | (unsigned __int16)((char)*v12 << 8);
    goto LABEL_19;
  }
  if ( v31 != 0xFFFF )
  {
    v29 = v12[1] | (unsigned __int16)((char)*v12 << 8);
    goto LABEL_19;
  }
  if ( v27 == 0 )
  {
    v29 = v12[1] | (unsigned __int16)((char)*v12 << 8);
    goto LABEL_19;
  }
  if ( (unsigned int)&v33[v27 + 2] > *(_DWORD *)(*a1 + 500) + *(_DWORD *)(*a1 + 504) )
  {
    v29 = 1;
    v13 = 0;
  }
  else
  {
    v13 = (unsigned __int8)v33[1] | ((unsigned __int8)*v33 << 8);
    v29 = v12[1] | (unsigned __int16)((char)*v12 << 8);
  }
LABEL_21:
  v14 = a1[5] & 2;
  if ( v14 != 0 )
  {
    v15 = 2 * (v9 + 6);
    v25 = (char *)(v36 + 2 * v26 + v38 + v15);
    v16 = (char *)&v12[v26];
    v5 = v31;
    v6 = (v13 == 0xFFFF) + v9;
    v24 = (unsigned __int8 *)(v36 + v15);
    v17 = v9;
    i = v39;
    while ( v17 != 0 )
    {
      v35 = v24[1] | (*v24 << 8);
      if ( v30 > v35 )
        break;
      --v17;
      i = v24[v38 + 1] | (v24[v38] << 8);
      v16 = v25;
      v29 = (unsigned __int8)v25[-v26 + 1] | (unsigned __int16)((char)v24[v38 + v26] << 8);
      v13 = ((unsigned __int8)*v25 << 8) | (unsigned __int8)v25[1];
      if ( v13 != 0xFFFF )
        v6 = v17;
      v25 -= 2;
      v24 -= 2;
      v5 = v35;
    }
    if ( v6 == v9 + 1 )
    {
      if ( v17 == v9 )
      {
        v33 = v16;
        v27 = v13;
        v37 = v29;
        v31 = v5;
        v39 = i;
      }
      v29 = v37;
      v18 = (char *)(v36 + 2 * (v6 + 7) + v38);
      v16 = v33;
      v13 = v27;
      v43 = v6;
      v5 = v31;
      v6 = v9;
      for ( i = v39; v43 < v40; i = v34 )
      {
        v16 = v18;
        v28 = (unsigned __int8)v18[-v38 + 1] | ((unsigned __int8)v18[-v38] << 8);
        v34 = ((unsigned __int8)*v18 << 8) | (unsigned __int8)v18[1];
        if ( v30 < v34 )
          break;
        v29 = (unsigned __int8)v18[v26 + 1] | (unsigned __int16)(v18[v26] << 8);
        v16 = &v18[2 * v26];
        v13 = ((unsigned __int8)*v16 << 8) | (unsigned __int8)v16[1];
        if ( v13 != 0xFFFF )
          v6 = v43;
        v18 += 2;
        ++v43;
        v5 = v28;
      }
      v17 = v43 - 1;
      if ( v6 == v9 )
      {
        v6 = v43 - 1;
LABEL_49:
        v14 = 0;
        goto LABEL_50;
      }
    }
    if ( v6 != v17 )
    {
      v19 = (unsigned __int8 *)(v36 + 2 * (v6 + 7));
      v20 = v19[1];
      v21 = *v19 << 8;
      v22 = &v19[v38];
      v5 = v21 | v20;
      i = v22[1] | (*v22 << 8);
      v23 = &v22[v26];
      v29 = v23[1] | (unsigned __int16)((char)*v23 << 8);
      v16 = (char *)&v23[v26];
      v13 = ((unsigned __int8)*v16 << 8) | (unsigned __int8)v16[1];
    }
  }
  else
  {
    if ( v13 == 0xFFFF )
    {
      if ( a3 == 0 )
        return 0;
      v6 = v9;
      goto LABEL_56;
    }
    v16 = (char *)&v12[v26];
    v5 = v31;
    v6 = v9;
    i = v39;
  }
  if ( v13 != 0 )
  {
    v14 = ((unsigned __int8)v16[2 * (v30 - i) + v13] << 8) | (unsigned __int8)v16[2 * (v30 - i) + 1 + v13];
    if ( v14 == 0 )
      goto LABEL_50;
    LOWORD(v14) = _byteswap_ushort(*(_WORD *)&v16[2 * (v30 - i) + v13]) + v29;
  }
  else
  {
    LOWORD(v14) = v29 + v30;
  }
  v14 = (unsigned __int16)v14;
LABEL_50:
  result = v14;
  if ( a3 == 0 )
    return result;
  if ( v30 > v5 && ++v6 == v40 )
    return 0;
LABEL_56:
  if ( sub_214E88(a1, v6) != 0 )
  {
    result = 0;
    if ( v14 == 0 )
      return result;
    *a2 = v30;
  }
  else
  {
    a1[6] = v30;
    if ( v14 != 0 )
    {
      a1[7] = v14;
    }
    else
    {
      sub_214F74((int)a1);
      v14 = a1[7];
      if ( v14 == 0 )
        return 0;
    }
    *a2 = a1[6];
  }
  return v14;
}


//======================================================================
// sub_215480
// address: 0x00215480   size: 0x26 (38 bytes)
//======================================================================
int __fastcall sub_215480(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  int v3; // r2
  unsigned int v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[1] = a3;
  v6[0] = a2;
  v3 = 0;
  if ( a2 <= 0xFFFF )
  {
    if ( (a1[5] & 1) != 0 )
      return sub_214FFC(a1, v6, 0);
    else
      return sub_215148(a1, v6, 0);
  }
  return v3;
}


//======================================================================
// sub_2154AC
// address: 0x002154AC   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_2154AC(_DWORD *a1, unsigned int *a2)
{
  int v4; // r5

  v4 = 0;
  if ( *a2 <= 0xFFFE )
  {
    if ( (a1[5] & 1) != 0 )
      return sub_214FFC(a1, a2, 1);
    if ( *a2 != a1[6] )
      return sub_215148(a1, a2, 1);
    sub_214F74((int)a1);
    if ( a1[7] != 0 )
    {
      v4 = a1[7];
      *a2 = a1[6];
    }
  }
  return v4;
}


//======================================================================
// sub_2154F4
// address: 0x002154F4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_2154F4(int a1, int *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  a2[1] = 4;
  *a2 = *(unsigned __int8 *)(v2 + 5) | (*(unsigned __int8 *)(v2 + 4) << 8);
  return 0;
}


//======================================================================
// sub_215508
// address: 0x00215508   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_215508(int a1, int a2)
{
  unsigned __int8 *v2; // r3
  unsigned int v3; // r1
  int result; // r0

  v2 = *(unsigned __int8 **)(a1 + 16);
  v3 = a2 - ((v2[6] << 8) | v2[7]);
  result = 0;
  if ( v3 < ((v2[8] << 8) | (unsigned int)v2[9]) )
    return (v2[2 * v3 + 10] << 8) | v2[2 * v3 + 11];
  return result;
}


//======================================================================
// sub_215534
// address: 0x00215534   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_215534(int a1, unsigned int *a2)
{
  unsigned __int8 *v2; // r2
  unsigned int v3; // r0
  int v4; // r6
  int v5; // r5
  unsigned int v6; // r4
  int v7; // r3
  unsigned int v8; // r3
  int v9; // r2
  unsigned int v10; // r6
  unsigned int v11; // r5
  int result; // r0

  v2 = *(unsigned __int8 **)(a1 + 16);
  v3 = *a2 + 1;
  v4 = v2[8];
  v5 = v2[9];
  if ( v3 <= 0xFFFF )
  {
    v6 = (v2[6] << 8) | v2[7];
    v7 = v6;
    if ( v6 < v3 )
      v7 = *a2 + 1;
    v8 = v7 - v6;
    v9 = (int)&v2[2 * v8 + 10];
    v10 = (v4 << 8) | v5;
    while ( 1 )
    {
      v11 = v6 + v8;
      if ( v8 >= v10 )
        break;
      v9 += 2;
      result = (*(unsigned __int8 *)(v9 - 2) << 8) | *(unsigned __int8 *)(v9 - 1);
      if ( result != 0 )
        goto LABEL_9;
      ++v8;
    }
  }
  result = 0;
  v11 = 0;
LABEL_9:
  *a2 = v11;
  return result;
}


//======================================================================
// sub_215588
// address: 0x00215588   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_215588(int a1, int *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  a2[1] = 6;
  *a2 = *(unsigned __int8 *)(v2 + 5) | (*(unsigned __int8 *)(v2 + 4) << 8);
  return 0;
}


//======================================================================
// sub_21559C
// address: 0x0021559C   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_21559C(int a1, unsigned int a2)
{
  int v2; // r3
  int result; // r0
  int v4; // r3
  int v5; // r7
  int v6; // r6
  unsigned int v7; // r2
  unsigned int v8; // r12
  int v9; // r4
  int v10; // r5

  v2 = *(_DWORD *)(a1 + 16);
  result = _byteswap_ulong(*(_DWORD *)(v2 + 8204));
  v4 = v2 + 8208;
  while ( result != 0 )
  {
    v5 = *(unsigned __int8 *)(v4 + 8);
    v6 = *(unsigned __int8 *)(v4 + 9);
    v7 = _byteswap_ulong(*(_DWORD *)v4);
    v8 = _byteswap_ulong(*(_DWORD *)(v4 + 4));
    v9 = *(unsigned __int8 *)(v4 + 10);
    v10 = *(unsigned __int8 *)(v4 + 11);
    if ( a2 < v7 )
      return 0;
    v4 += 12;
    if ( a2 <= v8 )
      return a2 - v7 + ((v5 << 24) | (v6 << 16) | v10 | (v9 << 8));
    --result;
  }
  return result;
}


//======================================================================
// sub_215630
// address: 0x00215630   size: 0x9C (156 bytes)
//======================================================================
unsigned int __fastcall sub_215630(int a1, unsigned int *a2)
{
  int v2; // r3
  unsigned int v3; // r2
  unsigned int v4; // r4
  unsigned int *v5; // r3
  unsigned int v6; // r0
  unsigned int result; // r0

  v2 = *(_DWORD *)(a1 + 16);
  v3 = *a2 + 1;
  v4 = _byteswap_ulong(*(_DWORD *)(v2 + 8204));
  v5 = (unsigned int *)(v2 + 8208);
  while ( v4 != 0 )
  {
    v6 = _byteswap_ulong(*v5);
    if ( v3 < v6 )
      v3 = v6;
    if ( v3 <= _byteswap_ulong(v5[1]) )
    {
      result = v3 - v6 + _byteswap_ulong(v5[2]);
      if ( result != 0 )
        goto LABEL_9;
    }
    --v4;
    v5 += 3;
  }
  v3 = 0;
  result = 0;
LABEL_9:
  *a2 = v3;
  return result;
}


//======================================================================
// sub_2156E0
// address: 0x002156E0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_2156E0(int a1, _DWORD *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  a2[1] = 8;
  *a2 = _byteswap_ulong(*(_DWORD *)(v2 + 8));
  return 0;
}


//======================================================================
// sub_215702
// address: 0x00215702   size: 0x44 (68 bytes)
//======================================================================
int __fastcall sub_215702(int a1, int a2)
{
  int v2; // r3
  unsigned int v3; // r1
  int result; // r0

  v2 = *(_DWORD *)(a1 + 16);
  v3 = a2 - _byteswap_ulong(*(_DWORD *)(v2 + 12));
  result = 0;
  if ( v3 < _byteswap_ulong(*(_DWORD *)(v2 + 16)) )
    return (*(unsigned __int8 *)(v2 + 20 + 2 * v3) << 8) | *(unsigned __int8 *)(v2 + 20 + 2 * v3 + 1);
  return result;
}


//======================================================================
// sub_215746
// address: 0x00215746   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_215746(int a1, int *a2)
{
  int v2; // r3
  int v3; // r6
  unsigned int v4; // r2
  unsigned int v5; // r5
  int v6; // r3
  int v7; // r4
  int result; // r0

  v2 = *(_DWORD *)(a1 + 16);
  v3 = v2 + 20;
  v4 = _byteswap_ulong(*(_DWORD *)(v2 + 12));
  v5 = _byteswap_ulong(*(_DWORD *)(v2 + 16));
  v6 = v4;
  if ( v4 < *a2 + 1 )
    v6 = *a2 + 1;
  v7 = v3 + 2 * (v6 - v4);
  while ( v6 - v4 < v5 )
  {
    v7 += 2;
    result = (*(unsigned __int8 *)(v7 - 2) << 8) | *(unsigned __int8 *)(v7 - 1);
    if ( result != 0 )
      goto LABEL_8;
    ++v6;
  }
  result = 0;
LABEL_8:
  *a2 = v6;
  return result;
}


//======================================================================
// sub_2157A8
// address: 0x002157A8   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_2157A8(int a1, _DWORD *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  a2[1] = 10;
  *a2 = _byteswap_ulong(*(_DWORD *)(v2 + 8));
  return 0;
}


//======================================================================
// sub_2157CA
// address: 0x002157CA   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_2157CA(int a1, int a2)
{
  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 40) = _byteswap_ulong(*(_DWORD *)(a2 + 12));
  *(_BYTE *)(a1 + 24) = 0;
  return 0;
}


//======================================================================
// sub_2157EA
// address: 0x002157EA   size: 0x8E (142 bytes)
//======================================================================
__int64 __fastcall sub_2157EA(__int64 a1)
{
  int v1; // r2
  unsigned int v2; // r2
  int v3; // r4
  unsigned int *v4; // r3
  unsigned int v5; // r5
  unsigned int v6; // r7
  unsigned int v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v1 = *(_DWORD *)(a1 + 28);
  if ( v1 != -1 )
  {
    HIDWORD(a1) = *(_DWORD *)(a1 + 36);
    v2 = v1 + 1;
    HIDWORD(v9) = *(_DWORD *)(a1 + 40);
    v3 = 12 * HIDWORD(a1) + 16;
    while ( HIDWORD(a1) < HIDWORD(v9) )
    {
      v4 = (unsigned int *)(*(_DWORD *)(a1 + 16) + v3);
      v5 = _byteswap_ulong(*v4);
      LODWORD(v9) = _byteswap_ulong(v4[1]);
      v6 = _byteswap_ulong(v4[2]);
      if ( v2 < v5 )
        v2 = v5;
      v7 = v6 - v5;
      while ( v2 <= (unsigned int)v9 )
      {
        if ( v7 + v2 != 0 )
        {
          *(_DWORD *)(a1 + 28) = v2;
          *(_DWORD *)(a1 + 32) = v7 + v2;
          *(_DWORD *)(a1 + 36) = HIDWORD(a1);
          return v9;
        }
        ++v2;
      }
      ++HIDWORD(a1);
      v3 += 12;
    }
  }
  *(_BYTE *)(a1 + 24) = 0;
  return v9;
}


//======================================================================
// sub_215878
// address: 0x00215878   size: 0xF6 (246 bytes)
//======================================================================
int __fastcall sub_215878(int a1, _DWORD *a2, int a3)
{
  int v3; // r6
  __int64 v5; // r0
  unsigned int v6; // r5
  unsigned int *v7; // r3
  unsigned int v8; // r7
  unsigned int v10; // [sp+4h] [bp-20h]
  unsigned int v11; // [sp+10h] [bp-14h]
  unsigned int v12; // [sp+14h] [bp-10h]
  unsigned int v13; // [sp+18h] [bp-Ch]

  v3 = *(_DWORD *)(a1 + 16);
  v12 = _byteswap_ulong(*(_DWORD *)(v3 + 12));
  if ( v12 == 0 )
    goto LABEL_2;
  v6 = *a2 + (a3 != 0);
  v13 = v12;
  v11 = 0;
  do
  {
    HIDWORD(v5) = (v13 + v11) >> 1;
    v7 = (unsigned int *)(v3 + 12 * HIDWORD(v5) + 16);
    v10 = _byteswap_ulong(*v7);
    v8 = _byteswap_ulong(v7[1]);
    if ( v6 < v10 )
    {
      v13 = (v13 + v11) >> 1;
    }
    else
    {
      if ( v6 <= v8 )
      {
        LODWORD(v5) = v6 - v10 + _byteswap_ulong(v7[2]);
        if ( a3 == 0 )
          return v5;
LABEL_15:
        *(_BYTE *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 28) = v6;
        *(_DWORD *)(a1 + 36) = HIDWORD(v5);
        if ( (_DWORD)v5 != 0 )
        {
          *(_DWORD *)(a1 + 32) = v5;
        }
        else
        {
          LODWORD(v5) = a1;
          sub_2157EA(v5);
          if ( *(_BYTE *)(a1 + 24) == 0 )
            goto LABEL_2;
          LODWORD(v5) = *(_DWORD *)(a1 + 32);
          if ( (_DWORD)v5 == 0 )
            goto LABEL_2;
        }
        *a2 = *(_DWORD *)(a1 + 28);
        return v5;
      }
      v11 = HIDWORD(v5) + 1;
    }
  }
  while ( v11 < v13 );
  if ( a3 != 0 )
  {
    if ( v6 <= v8 || (++HIDWORD(v5), HIDWORD(v5) != v12) )
    {
      LODWORD(v5) = 0;
      goto LABEL_15;
    }
  }
LABEL_2:
  LODWORD(v5) = 0;
  return v5;
}


//======================================================================
// sub_21596E
// address: 0x0021596E   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_21596E(int a1, int a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  v4[0] = a2;
  return sub_215878(a1, v4, 0);
}


//======================================================================
// sub_21597C
// address: 0x0021597C   size: 0x40 (64 bytes)
//======================================================================
int __fastcall sub_21597C(__int64 a1)
{
  int v1; // r3
  int result; // r0

  v1 = *(_DWORD *)(a1 + 28);
  if ( v1 == -1 )
    return 0;
  if ( *(_BYTE *)(a1 + 24) == 0 || v1 != *(_DWORD *)HIDWORD(a1) )
    return sub_215878(a1, (_DWORD *)HIDWORD(a1), 1);
  sub_2157EA(a1);
  if ( *(_BYTE *)(a1 + 24) == 0 )
    return 0;
  result = 0;
  if ( *(_DWORD *)(a1 + 32) != 0 )
  {
    result = *(_DWORD *)(a1 + 32);
    *(_DWORD *)HIDWORD(a1) = *(_DWORD *)(a1 + 28);
  }
  return result;
}


//======================================================================
// sub_2159BC
// address: 0x002159BC   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_2159BC(int a1, _DWORD *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  a2[1] = 12;
  *a2 = _byteswap_ulong(*(_DWORD *)(v2 + 8));
  return 0;
}


//======================================================================
// sub_2159DE
// address: 0x002159DE   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_2159DE(int a1, int a2)
{
  *(_DWORD *)(a1 + 16) = a2;
  *(_DWORD *)(a1 + 40) = _byteswap_ulong(*(_DWORD *)(a2 + 12));
  *(_BYTE *)(a1 + 24) = 0;
  return 0;
}


//======================================================================
// sub_2159FE
// address: 0x002159FE   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_2159FE(int result)
{
  int v1; // r1
  unsigned int v2; // r2
  unsigned int v3; // r1
  int v4; // r4
  unsigned int *v5; // r3
  unsigned int v6; // r7
  unsigned int v7; // r5

  v1 = *(_DWORD *)(result + 28);
  if ( v1 != -1 )
  {
    v2 = *(_DWORD *)(result + 36);
    v3 = v1 + 1;
    v4 = 12 * v2 + 16;
    while ( v2 < *(_DWORD *)(result + 40) )
    {
      v5 = (unsigned int *)(*(_DWORD *)(result + 16) + v4);
      v6 = _byteswap_ulong(*v5);
      if ( v3 < v6 )
        v3 = v6;
      if ( v3 <= _byteswap_ulong(v5[1]) )
      {
        v7 = _byteswap_ulong(v5[2]);
        if ( v7 != 0 )
        {
          *(_DWORD *)(result + 28) = v3;
          *(_DWORD *)(result + 32) = v7;
          *(_DWORD *)(result + 36) = v2;
          return result;
        }
      }
      ++v2;
      v4 += 12;
    }
  }
  *(_BYTE *)(result + 24) = 0;
  return result;
}


//======================================================================
// sub_215A8E
// address: 0x00215A8E   size: 0xF0 (240 bytes)
//======================================================================
unsigned int __fastcall sub_215A8E(int a1, _DWORD *a2, int a3)
{
  int v4; // r0
  unsigned int result; // r0
  unsigned int v6; // r5
  unsigned int v7; // r1
  unsigned int *v8; // r3
  unsigned int v9; // [sp+4h] [bp-20h]
  unsigned int v10; // [sp+10h] [bp-14h]
  unsigned int v11; // [sp+14h] [bp-10h]
  unsigned int v12; // [sp+18h] [bp-Ch]

  v4 = *(_DWORD *)(a1 + 16);
  v11 = _byteswap_ulong(*(_DWORD *)(v4 + 12));
  if ( v11 == 0 )
    return 0;
  v6 = *a2 + (a3 != 0);
  v12 = v11;
  v10 = 0;
  do
  {
    v7 = (v12 + v10) >> 1;
    v8 = (unsigned int *)(v4 + 12 * v7 + 16);
    v9 = _byteswap_ulong(v8[1]);
    if ( v6 < _byteswap_ulong(*v8) )
    {
      v12 = (v12 + v10) >> 1;
    }
    else
    {
      if ( v6 <= v9 )
      {
        result = _byteswap_ulong(v8[2]);
        if ( a3 == 0 )
          return result;
LABEL_15:
        *(_BYTE *)(a1 + 24) = 1;
        *(_DWORD *)(a1 + 28) = v6;
        *(_DWORD *)(a1 + 36) = v7;
        if ( result != 0 )
        {
          *(_DWORD *)(a1 + 32) = result;
        }
        else
        {
          sub_2159FE(a1);
          if ( *(_BYTE *)(a1 + 24) == 0 )
            return 0;
          result = *(_DWORD *)(a1 + 32);
          if ( result == 0 )
            return 0;
        }
        *a2 = *(_DWORD *)(a1 + 28);
        return result;
      }
      v10 = v7 + 1;
    }
  }
  while ( v10 < v12 );
  if ( a3 != 0 )
  {
    if ( v6 <= v9 || (++v7, v7 != v11) )
    {
      result = 0;
      goto LABEL_15;
    }
  }
  return 0;
}


//======================================================================
// sub_215B7E
// address: 0x00215B7E   size: 0xE (14 bytes)
//======================================================================
unsigned int __fastcall sub_215B7E(int a1, int a2, int a3)
{
  _DWORD v4[2]; // [sp+4h] [bp-8h] BYREF

  v4[1] = a3;
  v4[0] = a2;
  return sub_215A8E(a1, v4, 0);
}


//======================================================================
// sub_215B8C
// address: 0x00215B8C   size: 0x40 (64 bytes)
//======================================================================
unsigned int __fastcall sub_215B8C(int a1, _DWORD *a2)
{
  int v2; // r3
  unsigned int result; // r0

  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 == -1 )
    return 0;
  if ( *(_BYTE *)(a1 + 24) == 0 || v2 != *a2 )
    return sub_215A8E(a1, a2, 1);
  sub_2159FE(a1);
  if ( *(_BYTE *)(a1 + 24) == 0 )
    return 0;
  result = 0;
  if ( *(_DWORD *)(a1 + 32) != 0 )
  {
    result = *(_DWORD *)(a1 + 32);
    *a2 = *(_DWORD *)(a1 + 28);
  }
  return result;
}


//======================================================================
// sub_215BCC
// address: 0x00215BCC   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_215BCC(int a1, _DWORD *a2)
{
  int v2; // r3

  v2 = *(_DWORD *)(a1 + 16);
  a2[1] = 13;
  *a2 = _byteswap_ulong(*(_DWORD *)(v2 + 8));
  return 0;
}


//======================================================================
// sub_215BEE
// address: 0x00215BEE   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_215BEE(_DWORD *a1, int a2)
{
  a1[4] = a2;
  a1[6] = _byteswap_ulong(*(_DWORD *)(a2 + 6));
  a1[7] = 0;
  a1[8] = 0;
  return 0;
}


//======================================================================
// sub_215C10
// address: 0x00215C10   size: 0x4 (4 bytes)
//======================================================================
int sub_215C10()
{
  return 0;
}


//======================================================================
// sub_215C14
// address: 0x00215C14   size: 0x6 (6 bytes)
//======================================================================
int __fastcall sub_215C14(int a1, _DWORD *a2)
{
  *a2 = 0;
  return 0;
}


//======================================================================
// sub_215C1A
// address: 0x00215C1A   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_215C1A(int a1, _DWORD *a2)
{
  a2[1] = 14;
  *a2 = -1;
  return 0;
}


//======================================================================
// sub_215C28
// address: 0x00215C28   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_215C28(unsigned __int8 *a1, unsigned int a2)
{
  unsigned int v2; // r4
  int v3; // r2
  int v4; // r3
  unsigned __int8 *v5; // r0
  unsigned int v6; // r2
  unsigned int v7; // r5
  unsigned __int8 *v8; // r3
  int v9; // r6
  int v10; // r7
  int v11; // r3
  unsigned int v12; // r6

  v2 = 0;
  v3 = (*a1 << 24) | (a1[1] << 16) | a1[3];
  v4 = a1[2];
  v5 = a1 + 4;
  v6 = v3 | (v4 << 8);
  while ( 1 )
  {
    while ( 1 )
    {
      if ( v2 >= v6 )
        return 0;
      v7 = (v6 + v2) >> 1;
      v8 = &v5[4 * v7];
      v9 = (v8[1] << 8) | (*v8 << 16);
      v10 = v8[2];
      v11 = v8[3];
      v12 = v9 | v10;
      if ( a2 >= v12 )
        break;
      v6 = (v6 + v2) >> 1;
    }
    if ( a2 <= v11 + v12 )
      break;
    v2 = v7 + 1;
  }
  return 1;
}


//======================================================================
// sub_215C78
// address: 0x00215C78   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_215C78(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r2
  unsigned int v4; // r5
  unsigned __int8 *v5; // r3
  unsigned int v6; // r6

  v2 = 0;
  v3 = _byteswap_ulong(*a1);
  while ( v2 < v3 )
  {
    v4 = (v3 + v2) >> 1;
    v5 = (unsigned __int8 *)a1 + 5 * v4 + 4;
    v6 = v5[2] | (*v5 << 16) | (v5[1] << 8);
    if ( a2 >= v6 )
    {
      if ( a2 <= v6 )
        return (v5[3] << 8) | v5[4];
      v2 = v4 + 1;
    }
    else
    {
      v3 = (v3 + v2) >> 1;
    }
  }
  return 0;
}


//======================================================================
// sub_215CD6
// address: 0x00215CD6   size: 0x58 (88 bytes)
//======================================================================
unsigned __int8 *__fastcall sub_215CD6(unsigned int *a1, unsigned int a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r2
  unsigned int v4; // r5
  unsigned __int8 *v5; // r3
  unsigned int v6; // r6

  v2 = 0;
  v3 = _byteswap_ulong(*a1);
  while ( v2 < v3 )
  {
    v4 = (v3 + v2) >> 1;
    v5 = (unsigned __int8 *)a1 + 11 * v4 + 4;
    v6 = v5[2] | (*v5 << 16) | (v5[1] << 8);
    if ( a2 >= v6 )
    {
      if ( a2 <= v6 )
        return v5 + 3;
      v2 = v4 + 1;
    }
    else
    {
      v3 = (v3 + v2) >> 1;
    }
  }
  return nullptr;
}


//======================================================================
// sub_215D2E
// address: 0x00215D2E   size: 0x68 (104 bytes)
//======================================================================
unsigned int *__fastcall sub_215D2E(int a1, int a2, unsigned int a3, unsigned int a4)
{
  int v4; // r5
  unsigned int *result; // r0
  unsigned int v8; // r3
  unsigned int v9; // r7

  v4 = *(_DWORD *)(a1 + 16);
  result = (unsigned int *)sub_215CD6((unsigned int *)(v4 + 6), a4);
  if ( result != nullptr )
  {
    v8 = _byteswap_ulong(*result);
    v9 = _byteswap_ulong(result[1]);
    if ( v8 != 0 && sub_215C28((unsigned __int8 *)(v4 + v8), a3) != 0 )
    {
      return (unsigned int *)(*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)(a2 + 12) + 12))(a2, a3);
    }
    else
    {
      result = nullptr;
      if ( v9 != 0 )
        return (unsigned int *)sub_215C78((unsigned int *)(v4 + v9), a3);
    }
  }
  return result;
}


//======================================================================
// sub_215D96
// address: 0x00215D96   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_215D96(int a1, unsigned int a2, unsigned int a3)
{
  int v3; // r4
  unsigned int *v5; // r0
  unsigned int v6; // r3
  unsigned int v7; // r6
  int v8; // r0
  int v9; // r3
  int v10; // r3

  v3 = *(_DWORD *)(a1 + 16);
  v5 = (unsigned int *)sub_215CD6((unsigned int *)(v3 + 6), a3);
  if ( v5 == nullptr )
    goto LABEL_6;
  v6 = _byteswap_ulong(*v5);
  v7 = _byteswap_ulong(v5[1]);
  if ( v6 == 0 || (v8 = sub_215C28((unsigned __int8 *)(v3 + v6), a2), v9 = 1, v8 == 0) )
  {
    if ( v7 != 0 )
    {
      v10 = sub_215C78((unsigned int *)(v3 + v7), a2) == 0;
      return -v10;
    }
LABEL_6:
    v10 = 1;
    return -v10;
  }
  return v9;
}


//======================================================================
// sub_215DFC
// address: 0x00215DFC   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_215DFC(unsigned int *a1)
{
  unsigned int v1; // r3
  unsigned __int8 *v2; // r2
  int result; // r0
  int v4; // r1

  v1 = _byteswap_ulong(*a1);
  v2 = (unsigned __int8 *)a1 + 7;
  result = 0;
  while ( v1 != 0 )
  {
    v4 = *v2;
    --v1;
    v2 += 4;
    result += v4 + 1;
  }
  return result;
}


//======================================================================
// sub_215E28
// address: 0x00215E28   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_215E28(int a1)
{
  return (*(int (**)(void))(*(_DWORD *)(a1 + 12) + 48))();
}


//======================================================================
// sub_215E32
// address: 0x00215E32   size: 0x13A (314 bytes)
//======================================================================
int __fastcall sub_215E32(_DWORD *a1, int a2, int a3)
{
  int v4; // r3
  unsigned __int8 *v5; // r3
  int v6; // r7
  int v7; // r6
  unsigned __int8 *v8; // r4
  int v9; // r3
  unsigned int v10; // r0
  unsigned int v11; // r6
  unsigned int v12; // r12
  unsigned int v13; // r6
  unsigned int v14; // r2
  unsigned __int8 *v15; // r3
  unsigned int v16; // r1
  int v17; // r2
  int v18; // r3
  int v19; // r2
  int v20; // r3
  unsigned int v22; // [sp+8h] [bp-1Ch]
  int v23; // [sp+Ch] [bp-18h]
  int v24; // [sp+10h] [bp-14h]
  int v25; // [sp+14h] [bp-10h]
  unsigned int v26; // [sp+18h] [bp-Ch]
  unsigned int v27; // [sp+1Ch] [bp-8h]

  v4 = a1[194];
  v26 = v4 + a1[195];
  v24 = 1;
  v5 = (unsigned __int8 *)(v4 + 4);
  v25 = a1[196];
  v27 = (a2 << 16) | a3;
  v23 = 0;
  while ( v25 != 0 && v26 >= (unsigned int)(v5 + 6) )
  {
    v6 = v5[4];
    v7 = v5[5];
    v22 = (unsigned int)&v5[(v5[2] << 8) | v5[3]];
    if ( v22 > v26 )
      v22 = v26;
    if ( (a1[197] & v24) != 0 )
    {
      v8 = v5 + 14;
      if ( (unsigned int)(v5 + 14) <= v22 )
      {
        v9 = v5[7] | (v5[6] << 8);
        v10 = (int)(v22 - (_DWORD)v8) < 6 * v9 ? (int)(v22 - (_DWORD)v8) / 6 : v9;
        v11 = (v7 | (v6 << 8)) << 16;
        v12 = HIWORD(v11);
        v13 = HIBYTE(v11);
        if ( v13 == 0 )
        {
          if ( (a1[198] & v24) != 0 )
          {
            while ( v13 < v10 )
            {
              v14 = (v10 + v13) >> 1;
              v15 = &v8[6 * v14];
              v16 = _byteswap_ulong(*(_DWORD *)v15);
              if ( v16 == v27 )
              {
                v17 = (char)v15[4];
                v18 = v15[5];
                v19 = v17 << 8;
                goto LABEL_23;
              }
              if ( v16 < v27 )
                v13 = v14 + 1;
              else
                v10 = (v10 + v13) >> 1;
            }
          }
          else
          {
            while ( v10 != 0 )
            {
              if ( _byteswap_ulong(*(_DWORD *)v8) == v27 )
              {
                v19 = v8[5];
                v18 = (char)v8[4] << 8;
LABEL_23:
                v20 = v18 | v19;
                if ( (v12 & 8) != 0 )
                  v23 = v20;
                else
                  v23 += v20;
                break;
              }
              v8 += 6;
              --v10;
            }
          }
        }
      }
    }
    v5 = (unsigned __int8 *)v22;
    --v25;
    v24 *= 2;
  }
  return v23;
}


//======================================================================
// sub_215F6C
// address: 0x00215F6C   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_215F6C(int a1, int a2)
{
  int v3; // r3
  int v4; // r3
  int result; // r0

  switch ( a2 )
  {
    case 0:
      result = a1 + 160;
      break;
    case 1:
      result = a1 + 260;
      break;
    case 2:
      if ( *(unsigned __int16 *)(a1 + 368) != 0xFFFF )
      {
        v3 = 184;
        goto LABEL_10;
      }
      result = 0;
      break;
    case 3:
      result = a1 + 216;
      break;
    case 4:
      result = 0;
      v3 = 150;
      if ( *(_BYTE *)(a1 + 296) != 0 )
        goto LABEL_10;
      break;
    case 5:
      v3 = 234;
LABEL_10:
      v4 = 2 * v3;
      goto LABEL_11;
    case 6:
      v4 = 556;
      result = 0;
      if ( *(_DWORD *)(a1 + 556) != 0 )
LABEL_11:
        result = a1 + v4;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}


//======================================================================
// sub_215FD4
// address: 0x00215FD4   size: 0x4 (4 bytes)
//======================================================================
int sub_215FD4()
{
  return 7;
}


//======================================================================
// sub_215FD8
// address: 0x00215FD8   size: 0x4 (4 bytes)
//======================================================================
int sub_215FD8()
{
  return 7;
}


//======================================================================
// sub_215FDC
// address: 0x00215FDC   size: 0x4 (4 bytes)
//======================================================================
int sub_215FDC()
{
  return 7;
}


//======================================================================
// sub_215FE2
// address: 0x00215FE2   size: 0x4 (4 bytes)
//======================================================================
int sub_215FE2()
{
  return 7;
}


//======================================================================
// sub_215FE8
// address: 0x00215FE8   size: 0x4 (4 bytes)
//======================================================================
int sub_215FE8()
{
  return 7;
}


//======================================================================
// sub_215FEC
// address: 0x00215FEC   size: 0x4 (4 bytes)
//======================================================================
int sub_215FEC()
{
  return 0;
}


//======================================================================
// sub_215FF0
// address: 0x00215FF0   size: 0x88 (136 bytes)
//======================================================================
int __fastcall sub_215FF0(unsigned int a1, int *a2, unsigned __int16 **a3, int *a4)
{
  unsigned __int16 *v5; // r4
  int v6; // r1
  unsigned __int16 *v7; // r0
  unsigned int v8; // r1
  int v9; // r6
  int v10; // r1
  int v11; // r1

  if ( a1 >= *((unsigned __int16 *)a2 + 20) && a1 <= *((unsigned __int16 *)a2 + 21) )
  {
    v5 = (unsigned __int16 *)a2[1];
    v6 = *a2;
    if ( v5 != nullptr )
    {
      v7 = &v5[20 * v6];
      while ( v5 < v7 )
      {
        v8 = *v5;
        if ( a1 >= v8 && a1 <= v5[1] )
        {
          v9 = v5[2];
          v10 = (unsigned __int16)(a1 - v8);
          if ( (unsigned int)(v9 - 1) <= 4 )
          {
            switch ( v5[2] )
            {
              case 1u:
              case 3u:
                goto LABEL_15;
              case 2u:
                goto LABEL_17;
              case 4u:
              case 5u:
                v10 = 0;
                break;
              default:
                goto LABEL_19;
            }
            while ( v10 != *((_DWORD *)v5 + 6) )
            {
              if ( *(unsigned __int16 *)(2 * v10 + *((_DWORD *)v5 + 8)) == a1 )
              {
                if ( v9 == 4 )
LABEL_15:
                  v11 = *(_DWORD *)(4 * v10 + *((_DWORD *)v5 + 7));
                else
LABEL_17:
                  v11 = v10 * *((_DWORD *)v5 + 3) + *((_DWORD *)v5 + 2);
                *a4 = v11;
                *a3 = v5;
                return 0;
              }
              ++v10;
            }
          }
          break;
        }
        v5 += 20;
      }
    }
  }
LABEL_19:
  *a3 = nullptr;
  *a4 = 0;
  return 6;
}


//======================================================================
// sub_216078
// address: 0x00216078   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_216078(int a1, unsigned int a2, unsigned int a3, unsigned __int16 **a4, int **a5, int *a6)
{
  int v7; // r3
  int *v8; // r7
  int result; // r0

  v7 = *(_DWORD *)(a1 + 616);
  if ( v7 == 0
    || *(_DWORD *)(a1 + 612) <= a3
    || (v8 = (int *)(v7 + 48 * a3), (result = sub_215FF0(a2, v8, a4, a6)) != 0) )
  {
    *a4 = nullptr;
    *a5 = nullptr;
    *a6 = 0;
    return 6;
  }
  else
  {
    *a5 = v8;
  }
  return result;
}


//======================================================================
// sub_2160BC
// address: 0x002160BC   size: 0x13E (318 bytes)
//======================================================================
int __fastcall sub_2160BC(unsigned __int8 *a1, _DWORD *a2)
{
  unsigned int v2; // r3
  unsigned __int8 *v3; // r6
  unsigned __int8 *v4; // r5
  unsigned int v5; // r7
  unsigned int v6; // r7
  int v7; // r3
  int v8; // r6
  int v9; // r2
  int v10; // r7
  int v11; // r5
  unsigned int v12; // r3
  int v13; // r5
  unsigned __int8 *v14; // r5
  unsigned int v15; // r6
  unsigned __int8 *i; // r5
  unsigned __int8 *v18; // [sp+4h] [bp-20h]
  unsigned int v19; // [sp+8h] [bp-1Ch]
  int v20; // [sp+Ch] [bp-18h]
  unsigned int v21; // [sp+10h] [bp-14h]
  unsigned __int8 *v22; // [sp+14h] [bp-10h]
  __int16 v23; // [sp+18h] [bp-Ch]
  __int16 v24; // [sp+1Ch] [bp-8h]

  v2 = (a1[2] << 8) | a1[3];
  v21 = (unsigned int)&a1[v2];
  if ( (unsigned int)&a1[v2] > a2[1] || v2 <= 0x205 )
    ft_validator_error((int)a2, 8);
  v3 = a1 + 6;
  v19 = 0;
  v4 = a1 + 518;
  do
  {
    v3 += 2;
    v5 = (*(v3 - 2) << 8) | *(v3 - 1);
    if ( a2[2] > 1u && v5 << 29 != 0 )
      ft_validator_error((int)a2, 8);
    v6 = v5 >> 3;
    if ( v19 < v6 )
      v19 = v6;
  }
  while ( v3 != v4 );
  v22 = &v4[8 * v19 + 8];
  if ( (unsigned int)v22 > a2[1] )
    ft_validator_error((int)a2, 8);
  v20 = 0;
  while ( 1 )
  {
    v7 = *v4;
    v8 = (v4[2] << 8) | v4[3];
    v9 = v4[1];
    v10 = v4[6];
    v23 = v4[4];
    v24 = v4[5];
    v18 = v4 + 8;
    v11 = v4[7];
    if ( v8 != 0 )
    {
      if ( a2[2] > 1u )
      {
        v12 = (v7 << 8) | v9;
        if ( v12 > 0xFF || v8 + v12 > 0x100 )
          ft_validator_error((int)a2, 8);
      }
      v13 = v11 | (v10 << 8);
      if ( v13 != 0 )
      {
        v14 = &v18[v13 - 2];
        if ( v14 < v22 || v21 < (unsigned int)&v14[2 * v8] )
          ft_validator_error((int)a2, 9);
        if ( a2[2] != 0 )
        {
          v15 = (unsigned int)&v18[2 * v8];
          for ( i = v18; ; i += 2 )
          {
            v18 = i;
            if ( (unsigned int)i >= v15 )
              break;
            if ( ((*i << 8) | i[1]) != 0
              && (unsigned int)(unsigned __int16)(_byteswap_ushort(*(_WORD *)i) + ((v23 << 8) | v24)) >= a2[68] )
            {
              ft_validator_error((int)a2, 16);
            }
          }
        }
      }
    }
    if ( ++v20 > v19 )
      break;
    v4 = v18;
  }
  return 0;
}


//======================================================================
// sub_216204
// address: 0x00216204   size: 0x29E (670 bytes)
//======================================================================
int __fastcall sub_216204(unsigned __int8 *a1, _DWORD *a2)
{
  unsigned int v2; // r4
  unsigned int v3; // r5
  int v4; // r3
  unsigned int v5; // r5
  int v6; // r3
  int v7; // r6
  unsigned int v8; // r6
  int v9; // r4
  unsigned __int8 *v10; // r4
  unsigned int v11; // r5
  unsigned int v13; // [sp+8h] [bp-3Ch]
  unsigned int v14; // [sp+Ch] [bp-38h]
  int v15; // [sp+10h] [bp-34h]
  unsigned __int8 *v16; // [sp+14h] [bp-30h]
  unsigned int v17; // [sp+18h] [bp-2Ch]
  int v18; // [sp+1Ch] [bp-28h]
  unsigned __int8 *v19; // [sp+20h] [bp-24h]
  unsigned __int8 *v20; // [sp+24h] [bp-20h]
  int v21; // [sp+28h] [bp-1Ch]
  unsigned __int16 v22; // [sp+2Ch] [bp-18h]
  unsigned int v23; // [sp+30h] [bp-14h]
  unsigned int v24; // [sp+34h] [bp-10h]

  v17 = a1[3] | (a1[2] << 8);
  if ( v17 <= 0xF )
    ft_validator_error((int)a2, 8);
  if ( a2[1] < (unsigned int)&a1[v17] )
  {
    if ( a2[2] != 0 )
      ft_validator_error((int)a2, 8);
    v17 = a2[1] - (_DWORD)a1;
  }
  v2 = (a1[6] << 8) | a1[7];
  if ( a2[2] > 1u && (a1[7] & 1) != 0 )
    ft_validator_error((int)a2, 8);
  v14 = v2 >> 1;
  if ( v17 < 8 * ((v2 >> 1) + 2) )
    ft_validator_error((int)a2, 8);
  if ( a2[2] > 1u )
  {
    if ( (a1[13] & 1 | a1[9] & 1) != 0 )
      ft_validator_error((int)a2, 8);
    v3 = ((a1[8] << 8) | (unsigned int)a1[9]) >> 1;
    if ( v3 > v14 || 2 * v3 < v14 || (((a1[12] << 8) | (unsigned int)a1[13]) >> 1) + v3 != v14 || v3 != 1 << a1[11] )
      ft_validator_error((int)a2, 8);
  }
  v20 = a1 + 14;
  v4 = 2 * (v14 + 8);
  v19 = &a1[v4];
  v24 = (unsigned int)&a1[v4 - 48 + v4 + v4 + v4];
  v21 = (int)&a1[v4 - 16 + v4];
  v16 = (unsigned __int8 *)(v21 + v4 - 16);
  if ( a2[2] > 1u && (__int16)_byteswap_ushort(*(_WORD *)&v20[v4 - 18]) != -1 )
    ft_validator_error((int)a2, 8);
  v5 = 0;
  v23 = 0;
  v15 = 0;
  v18 = 0;
  while ( v15 != v14 )
  {
    v6 = v19[1];
    v7 = *v19 << 8;
    v19 += 2;
    v8 = v7 | v6;
    v20 += 2;
    v21 += 2;
    v13 = *(v20 - 1) | (*(v20 - 2) << 8);
    v9 = (*v16 << 8) | v16[1];
    if ( v8 > v13 )
      ft_validator_error((int)a2, 8);
    if ( v8 <= v5 && v15 != 0 )
    {
      if ( a2[2] != 0 )
        ft_validator_error((int)a2, 8);
      if ( v23 <= v8 && v5 <= v13 )
        v18 |= 2u;
      else
        v18 |= 1u;
    }
    if ( v9 != 0 )
    {
      if ( v9 == 0xFFFF )
      {
        if ( a2[2] > 1u || v15 != v14 - 1 || v8 != 0xFFFF || v13 != 0xFFFF )
          ft_validator_error((int)a2, 8);
      }
      else
      {
        v10 = &v16[v9];
        if ( a2[2] != 0 )
        {
          if ( (unsigned int)v10 < v24 || &v10[2 * (v13 + 1 - v8)] > &a1[v17] )
            goto LABEL_41;
        }
        else if ( (v15 != v14 - 1 || v8 != 0xFFFF || v13 != 0xFFFF)
               && ((unsigned int)v10 < v24 || a2[1] < (unsigned int)&v10[2 * (v13 + 1 - v8)]) )
        {
LABEL_41:
          ft_validator_error((int)a2, 8);
        }
        if ( a2[2] != 0 )
        {
          v11 = v8;
          v22 = _byteswap_ushort(*(_WORD *)(v21 - 2));
          while ( v11 < v13 )
          {
            v10 += 2;
            if ( ((*(v10 - 2) << 8) | *(v10 - 1)) != 0
              && (unsigned int)(unsigned __int16)(v22 + _byteswap_ushort(*((_WORD *)v10 - 1))) >= a2[68] )
            {
              ft_validator_error((int)a2, 16);
            }
            ++v11;
          }
        }
      }
    }
    v5 = *(v20 - 1) | (*(v20 - 2) << 8);
    ++v15;
    v16 += 2;
    v23 = v8;
  }
  return v18;
}


//======================================================================
// sub_2164A8
// address: 0x002164A8   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_2164A8(unsigned __int8 *a1, _DWORD *a2)
{
  unsigned int v2; // r3
  int v3; // r6
  unsigned __int8 *v4; // r5

  if ( a2[1] < (unsigned int)(a1 + 10) )
    ft_validator_error((int)a2, 8);
  v2 = (a1[2] << 8) | a1[3];
  v3 = (a1[8] << 8) | a1[9];
  if ( a2[1] < (unsigned int)&a1[v2] || v2 < 2 * (v3 + 5) )
    ft_validator_error((int)a2, 8);
  v4 = a1 + 10;
  if ( a2[2] != 0 )
  {
    while ( v3 != 0 )
    {
      v4 += 2;
      if ( ((*(v4 - 2) << 8) | (unsigned int)*(v4 - 1)) >= a2[68] )
        ft_validator_error((int)a2, 16);
      --v3;
    }
  }
  return 0;
}


//======================================================================
// sub_21651C
// address: 0x0021651C   size: 0x1AA (426 bytes)
//======================================================================
int __fastcall sub_21651C(unsigned int *a1, _DWORD *a2)
{
  unsigned int *v2; // r5
  unsigned int v3; // r3
  unsigned int v4; // r7
  unsigned int v5; // r6
  unsigned int v7; // [sp+0h] [bp-24h]
  int i; // [sp+4h] [bp-20h]
  unsigned int v9; // [sp+8h] [bp-1Ch]
  unsigned int *v10; // [sp+Ch] [bp-18h]
  unsigned int v11; // [sp+10h] [bp-14h]

  v2 = a1 + 2052;
  if ( a2[1] < (unsigned int)(a1 + 2052) )
    ft_validator_error((int)a2, 8);
  v3 = _byteswap_ulong(a1[1]);
  if ( v3 > a2[1] - (int)a1 || v3 <= 0x200F )
    ft_validator_error((int)a2, 8);
  v10 = a1 + 3;
  v11 = _byteswap_ulong(a1[2051]);
  if ( a2[1] < (unsigned int)&v2[3 * v11] )
    ft_validator_error((int)a2, 8);
  v4 = 0;
  for ( i = 0; i != v11; ++i )
  {
    v5 = _byteswap_ulong(*v2);
    v7 = _byteswap_ulong(v2[1]);
    if ( v5 > v7 )
      ft_validator_error((int)a2, 8);
    if ( i != 0 && v5 <= v4 )
      ft_validator_error((int)a2, 8);
    if ( a2[2] != 0 )
    {
      if ( _byteswap_ulong(v2[2]) + v7 - v5 >= a2[68] )
        ft_validator_error((int)a2, 16);
      v9 = v7 + 1;
      if ( HIWORD(v5) != 0 )
      {
        while ( v5 != v9 )
        {
          if ( ((128 >> (v5 << 13 >> 29)) & *((unsigned __int8 *)v10 + (v5 >> 19))) == 0 )
            ft_validator_error((int)a2, 8);
          if ( ((128 >> (v5 & 7)) & *((unsigned __int8 *)v10 + ((unsigned __int16)v5 >> 3))) == 0 )
            ft_validator_error((int)a2, 8);
          ++v5;
        }
      }
      else
      {
        if ( HIWORD(v7) != 0 )
          ft_validator_error((int)a2, 8);
        while ( v5 != v9 )
        {
          if ( ((128 >> (v5 & 7)) & *((unsigned __int8 *)v10 + ((unsigned __int16)v5 >> 3))) != 0 )
            ft_validator_error((int)a2, 8);
          ++v5;
        }
      }
    }
    v2 += 3;
    v4 = v7;
  }
  return 0;
}


//======================================================================
// sub_2166DC
// address: 0x002166DC   size: 0x8E (142 bytes)
//======================================================================
int __fastcall sub_2166DC(int a1, _DWORD *a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r6
  int v4; // r4

  if ( a2[1] < (unsigned int)(a1 + 20) )
    ft_validator_error((int)a2, 8);
  v2 = _byteswap_ulong(*(_DWORD *)(a1 + 4));
  v3 = _byteswap_ulong(*(_DWORD *)(a1 + 16));
  if ( v2 > a2[1] - a1 || v2 < 2 * (v3 + 10) )
    ft_validator_error((int)a2, 8);
  v4 = a1 + 20;
  if ( a2[2] != 0 )
  {
    while ( v3 != 0 )
    {
      v4 += 2;
      if ( ((*(unsigned __int8 *)(v4 - 2) << 8) | (unsigned int)*(unsigned __int8 *)(v4 - 1)) >= a2[68] )
        ft_validator_error((int)a2, 16);
      --v3;
    }
  }
  return 0;
}


//======================================================================
// sub_21676A
// address: 0x0021676A   size: 0x108 (264 bytes)
//======================================================================
int __fastcall sub_21676A(unsigned int *a1, _DWORD *a2)
{
  unsigned int *v2; // r4
  unsigned int v4; // r3
  unsigned int v5; // r1
  unsigned int v6; // r7
  int i; // r6
  unsigned int v9; // [sp+4h] [bp-20h]
  unsigned int v10; // [sp+8h] [bp-1Ch]

  v2 = a1 + 4;
  if ( a2[1] < (unsigned int)(a1 + 4) )
    ft_validator_error((int)a2, 8);
  v4 = _byteswap_ulong(a1[1]);
  v5 = _byteswap_ulong(a1[3]);
  if ( v4 > a2[1] - (int)a1 || v4 < 12 * v5 + 16 )
    ft_validator_error((int)a2, 8);
  v6 = 0;
  for ( i = 0; i != v5; ++i )
  {
    v9 = _byteswap_ulong(*v2);
    v10 = _byteswap_ulong(v2[1]);
    if ( v9 > v10 )
      ft_validator_error((int)a2, 8);
    if ( i != 0 && v9 <= v6 )
      ft_validator_error((int)a2, 8);
    if ( a2[2] != 0 && _byteswap_ulong(v2[2]) + v10 - v9 >= a2[68] )
      ft_validator_error((int)a2, 16);
    v2 += 3;
    v6 = v10;
  }
  return 0;
}


//======================================================================
// sub_216872
// address: 0x00216872   size: 0x100 (256 bytes)
//======================================================================
int __fastcall sub_216872(unsigned int *a1, _DWORD *a2)
{
  unsigned int *v2; // r4
  unsigned int v4; // r3
  unsigned int v5; // r1
  unsigned int v6; // r7
  int i; // r6
  unsigned int v9; // [sp+8h] [bp-1Ch]
  unsigned int v10; // [sp+Ch] [bp-18h]

  v2 = a1 + 4;
  if ( a2[1] < (unsigned int)(a1 + 4) )
    ft_validator_error((int)a2, 8);
  v4 = _byteswap_ulong(a1[1]);
  v5 = _byteswap_ulong(a1[3]);
  if ( v4 > a2[1] - (int)a1 || v4 < 12 * v5 + 16 )
    ft_validator_error((int)a2, 8);
  v6 = 0;
  for ( i = 0; i != v5; ++i )
  {
    v9 = _byteswap_ulong(*v2);
    v10 = _byteswap_ulong(v2[1]);
    if ( v9 > v10 )
      ft_validator_error((int)a2, 8);
    if ( i != 0 && v9 <= v6 )
      ft_validator_error((int)a2, 8);
    if ( a2[2] != 0 && _byteswap_ulong(v2[2]) >= a2[68] )
      ft_validator_error((int)a2, 16);
    v2 += 3;
    v6 = v10;
  }
  return 0;
}


//======================================================================
// sub_216974
// address: 0x00216974   size: 0x1F0 (496 bytes)
//======================================================================
int __fastcall sub_216974(int a1, _DWORD *a2)
{
  unsigned int v3; // r2
  unsigned int v4; // r5
  unsigned __int8 *v5; // r7
  unsigned int v6; // r6
  unsigned int v7; // r5
  unsigned int v8; // r2
  int v9; // r3
  int v10; // r1
  int v11; // r2
  unsigned __int8 *v12; // r5
  unsigned int v13; // r6
  unsigned __int8 *v14; // r5
  unsigned int v15; // r6
  unsigned int v16; // r6
  int i; // [sp+8h] [bp-24h]
  unsigned int v19; // [sp+8h] [bp-24h]
  unsigned int v20; // [sp+Ch] [bp-20h]
  unsigned int v21; // [sp+10h] [bp-1Ch]
  unsigned int v22; // [sp+14h] [bp-18h]
  int v23; // [sp+18h] [bp-14h]
  unsigned __int8 *v24; // [sp+18h] [bp-14h]
  unsigned int v25; // [sp+1Ch] [bp-10h]
  int v26; // [sp+24h] [bp-8h]

  v3 = _byteswap_ulong(*(_DWORD *)(a1 + 2));
  v22 = v3;
  v4 = _byteswap_ulong(*(_DWORD *)(a1 + 6));
  if ( v3 > a2[1] - a1 || v3 < 11 * v4 + 10 )
    ft_validator_error((int)a2, 8);
  v5 = (unsigned __int8 *)(a1 + 10);
  v26 = a1 + 10 + 11 * v4;
  v25 = 1;
  while ( v5 != (unsigned __int8 *)v26 )
  {
    v6 = (*v5 << 16) | (v5[1] << 8) | v5[2];
    v7 = _byteswap_ulong(*(_DWORD *)(v5 + 3));
    v8 = _byteswap_ulong(*(_DWORD *)(v5 + 7));
    v21 = v8;
    if ( v7 >= v22 || v8 >= v22 )
      ft_validator_error((int)a2, 8);
    if ( v6 < v25 )
      ft_validator_error((int)a2, 8);
    v25 = v6 + 1;
    if ( v7 != 0 )
    {
      v9 = a1 + v7;
      v10 = *(unsigned __int8 *)(a1 + v7);
      v11 = *(unsigned __int8 *)(a1 + v7 + 1);
      v12 = (unsigned __int8 *)(a1 + v7 + 4);
      v23 = (v11 << 16) | (v10 << 24) | *(unsigned __int8 *)(v9 + 3) | (*(unsigned __int8 *)(v9 + 2) << 8);
      if ( a2[1] < (unsigned int)&v12[4 * v23] )
        ft_validator_error((int)a2, 8);
      v20 = 0;
      for ( i = 0; i != v23; ++i )
      {
        v13 = ((*v12 << 16) | (v12[1] << 8) | v12[2]) + v12[3];
        if ( v13 > 0x10FFFF )
          ft_validator_error((int)a2, 8);
        if ( ((*v12 << 16) | (v12[1] << 8) | (unsigned int)v12[2]) < v20 )
          ft_validator_error((int)a2, 8);
        v20 = v13 + 1;
        v12 += 4;
      }
    }
    if ( v21 != 0 )
    {
      v14 = (unsigned __int8 *)(a1 + v21 + 4);
      v15 = _byteswap_ulong(*(_DWORD *)(a1 + v21));
      if ( 4 * v15 > a2[1] - (int)v14 )
        ft_validator_error((int)a2, 8);
      v24 = &v14[5 * v15];
      v19 = 0;
      while ( v14 != v24 )
      {
        v16 = (*v14 << 16) | (v14[1] << 8) | v14[2];
        if ( v16 > 0x10FFFF )
          ft_validator_error((int)a2, 8);
        if ( v16 < v19 )
          ft_validator_error((int)a2, 8);
        v19 = v16 + 1;
        if ( a2[2] != 0 && ((v14[3] << 8) | (unsigned int)v14[4]) >= a2[68] )
          ft_validator_error((int)a2, 16);
        v14 += 5;
      }
    }
    v5 += 11;
  }
  return 0;
}


//======================================================================
// sub_216B68
// address: 0x00216B68   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_216B68(_DWORD *a1, unsigned int a2, int a3)
{
  unsigned int v3; // r3
  int v6; // r1
  int result; // r0
  int v8; // [sp+Ch] [bp-8h] BYREF

  v3 = a1[7];
  v8 = 0;
  if ( a2 > v3 )
  {
    v6 = a1[8];
    a1[9] = a3;
    a1[8] = ft_mem_realloc(a3, 4, v3, a2, v6, &v8);
    result = v8;
    if ( v8 != 0 )
      return result;
    a1[7] = a2;
  }
  return v8;
}


//======================================================================
// sub_216BA0
// address: 0x00216BA0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_216BA0(_DWORD *a1, unsigned int *a2, int a3)
{
  int v6; // r0
  unsigned __int8 *v7; // r6
  unsigned int v8; // r4
  _DWORD *v9; // r2
  int v10; // r3
  _DWORD *v11; // r0
  int v12; // r1
  int v13; // r7

  v6 = sub_215DFC(a2);
  v7 = (unsigned __int8 *)(a2 + 1);
  v8 = _byteswap_ulong(*a2);
  if ( sub_216B68(a1, v6 + 1, a3) != 0 )
    return 0;
  v9 = (_DWORD *)a1[8];
  while ( v8 != 0 )
  {
    v10 = (v7[1] << 8) | (*v7 << 16) | v7[2];
    v11 = v9;
    v12 = v7[3] + 1;
    v13 = v12 + v10;
    do
      *v11++ = v10++;
    while ( v13 != v10 );
    v9 += v12;
    --v8;
    v7 += 4;
  }
  *v9 = 0;
  return a1[8];
}


//======================================================================
// sub_216C0C
// address: 0x00216C0C   size: 0x4E (78 bytes)
//======================================================================
int *__fastcall sub_216C0C(_DWORD *a1, unsigned int *a2, int a3)
{
  unsigned __int8 *v3; // r4
  unsigned int v5; // r5
  int *result; // r0
  int v7; // r5
  int *i; // r3
  int v9; // r1
  int v10; // r6

  v3 = (unsigned __int8 *)(a2 + 1);
  v5 = _byteswap_ulong(*a2);
  if ( sub_216B68(a1, v5 + 1, a3) != 0 )
    return nullptr;
  result = (int *)a1[8];
  v7 = v5;
  for ( i = result; i != &result[v7]; ++i )
  {
    v9 = (v3[1] << 8) | (*v3 << 16);
    v10 = v3[2];
    v3 += 5;
    *i = v9 | v10;
  }
  result[v7] = 0;
  return result;
}


//======================================================================
// sub_216C5A
// address: 0x00216C5A   size: 0x234 (564 bytes)
//======================================================================
int *__fastcall sub_216C5A(_DWORD *a1, int a2, unsigned int a3)
{
  int v3; // r5
  unsigned int *v6; // r0
  unsigned int v8; // r4
  unsigned int v9; // r1
  unsigned int *v10; // r1
  _DWORD *v11; // r0
  unsigned __int8 *v12; // r4
  int v13; // r5
  int v14; // r0
  int v15; // r2
  unsigned int v16; // r7
  unsigned __int8 *v17; // r6
  unsigned __int8 *v18; // r5
  unsigned int v19; // r12
  int v20; // r3
  unsigned int v21; // r0
  int v22; // r1
  int v23; // r0
  int v24; // r0
  unsigned int i; // r1
  unsigned __int8 *v26; // r1
  int v27; // r6
  unsigned int j; // r0
  int v29; // r3
  int v30; // r6
  int v31; // r1
  int v32; // r7
  int v33; // [sp+0h] [bp-2Ch]
  int v34; // [sp+4h] [bp-28h]
  unsigned int v35; // [sp+8h] [bp-24h]
  int v36; // [sp+10h] [bp-1Ch]
  unsigned int v37; // [sp+10h] [bp-1Ch]
  int v38; // [sp+10h] [bp-1Ch]
  unsigned int v39; // [sp+10h] [bp-1Ch]
  int v40; // [sp+14h] [bp-18h]
  unsigned int v41; // [sp+14h] [bp-18h]
  unsigned int v42; // [sp+14h] [bp-18h]
  unsigned int v43; // [sp+18h] [bp-14h]
  int v44; // [sp+1Ch] [bp-10h]
  unsigned int v45; // [sp+1Ch] [bp-10h]
  int v46; // [sp+20h] [bp-Ch]
  int v47; // [sp+20h] [bp-Ch]

  v3 = a1[4];
  v6 = (unsigned int *)sub_215CD6((unsigned int *)(v3 + 6), a3);
  if ( v6 != nullptr )
  {
    v8 = _byteswap_ulong(*v6);
    v9 = _byteswap_ulong(v6[1]);
    if ( (v9 | v8) != 0 )
    {
      if ( v8 == 0 )
      {
        v10 = (unsigned int *)(v3 + v9);
        v11 = a1;
        return sub_216C0C(v11, v10, a2);
      }
      v12 = (unsigned __int8 *)(v3 + v8);
      if ( v9 == 0 )
        return (int *)sub_216BA0(a1, (unsigned int *)v12, a2);
      v13 = v3 + v9;
      v43 = _byteswap_ulong(*(_DWORD *)v13);
      v14 = sub_215DFC((unsigned int *)v12);
      v36 = *v12;
      v40 = v12[1];
      v44 = v12[2];
      v46 = v12[3];
      if ( v43 == 0 )
        return (int *)sub_216BA0(a1, (unsigned int *)v12, a2);
      if ( v14 == 0 )
      {
        v11 = a1;
        v10 = (unsigned int *)v13;
        return sub_216C0C(v11, v10, a2);
      }
      if ( sub_216B68(a1, v43 + 1 + v14, a2) == 0 )
      {
        v45 = (v36 << 24) | (v40 << 16) | v46 | (v44 << 8);
        v15 = a1[8];
        v37 = (v12[4] << 16) | (v12[5] << 8) | v12[6];
        v16 = 1;
        v17 = v12 + 8;
        v41 = v12[7];
        v35 = (*(unsigned __int8 *)(v13 + 4) << 16)
            | (*(unsigned __int8 *)(v13 + 5) << 8)
            | *(unsigned __int8 *)(v13 + 6);
        v18 = (unsigned __int8 *)(v13 + 9);
        v19 = 1;
        v20 = 0;
        while ( 1 )
        {
          while ( v35 > v41 + v37 )
          {
            v47 = v15 + 4 * v20;
            v33 = v20;
            v34 = 0;
            while ( 1 )
            {
              ++v20;
              *(_DWORD *)(v47 + 4 * v34) = v34 + v37;
              if ( ++v34 > v41 )
                break;
              v33 = v20;
            }
            if ( ++v19 > v45 )
            {
              if ( v16 <= v43 )
              {
                v39 = v43 - v16;
                *(_DWORD *)(4 * v20 + v15) = v35;
                v29 = 0;
                while ( v29 != v39 )
                {
                  v30 = v15 + 4 * v33 + 4 * v29++;
                  v31 = (*v18 << 16) | (v18[1] << 8);
                  v32 = v18[2];
                  v18 += 5;
                  *(_DWORD *)(v30 + 8) = v32 | v31;
                }
                v20 = v33 + 2 + v29;
              }
              goto LABEL_25;
            }
            v21 = v17[3];
            v37 = (*v17 << 16) | (v17[1] << 8) | v17[2];
            v17 += 4;
            v41 = v21;
          }
          if ( v35 < v37 )
            *(_DWORD *)(4 * v20++ + v15) = v35;
          if ( ++v16 > v43 )
            break;
          v22 = (v18[1] << 8) | (*v18 << 16);
          v23 = v18[2];
          v18 += 5;
          v35 = v22 | v23;
        }
        if ( v19 <= v45 )
        {
          v24 = v15 + 4 * v20;
          for ( i = 0; i <= v41; ++i )
          {
            ++v20;
            *(_DWORD *)(v24 + 4 * i) = i + v37;
          }
          v26 = v17;
          while ( v19 != v45 )
          {
            v42 = v26[3];
            v38 = (*v26 << 16) | (v26[1] << 8) | v26[2];
            v27 = v15 + 4 * v20;
            for ( j = 0; j <= v42; ++j )
            {
              ++v20;
              *(_DWORD *)(v27 + 4 * j) = j + v38;
            }
            ++v19;
            v26 += 4;
          }
        }
LABEL_25:
        *(_DWORD *)(4 * v20 + v15) = 0;
        return (int *)v15;
      }
    }
  }
  return nullptr;
}


//======================================================================
// sub_216E8E
// address: 0x00216E8E   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_216E8E(_DWORD *a1, int a2, unsigned int a3)
{
  unsigned __int8 *v4; // r4
  int *v5; // r6
  unsigned int v6; // r0
  unsigned int v7; // r7
  int v9; // [sp+4h] [bp-18h]
  int v10; // [sp+8h] [bp-14h]
  int v12; // [sp+10h] [bp-Ch]
  int v13; // [sp+14h] [bp-8h]

  v9 = a1[6];
  v4 = (unsigned __int8 *)(a1[4] + 10);
  if ( sub_216B68(a1, v9 + 1, a2) != 0 )
    return 0;
  v5 = (int *)a1[8];
  while ( v9 != 0 )
  {
    v12 = v4[1];
    v10 = *v4;
    v13 = v4[2];
    v6 = _byteswap_ulong(*(_DWORD *)(v4 + 3));
    v7 = _byteswap_ulong(*(_DWORD *)(v4 + 7));
    if ( v6 != 0 && sub_215C28((unsigned __int8 *)(a1[4] + v6), a3) != 0
      || v7 != 0 && sub_215C78((unsigned int *)(a1[4] + v7), a3) != 0 )
    {
      *v5++ = (v12 << 8) | (v10 << 16) | v13;
    }
    v4 += 11;
    --v9;
  }
  *v5 = 0;
  return a1[8];
}


//======================================================================
// sub_216F32
// address: 0x00216F32   size: 0x40 (64 bytes)
//======================================================================
int *__fastcall sub_216F32(_DWORD *a1, int a2)
{
  int v2; // r6
  unsigned __int8 *v4; // r4
  int *result; // r0
  int v6; // r6
  int *i; // r3
  int v8; // r1
  int v9; // r5

  v2 = a1[6];
  v4 = (unsigned __int8 *)(a1[4] + 10);
  if ( sub_216B68(a1, v2 + 1, a2) != 0 )
    return nullptr;
  result = (int *)a1[8];
  v6 = v2;
  for ( i = result; i != &result[v6]; ++i )
  {
    v8 = (v4[1] << 8) | (*v4 << 16);
    v9 = v4[2];
    v4 += 11;
    *i = v8 | v9;
  }
  result[v6] = 0;
  return result;
}


//======================================================================
// sub_216F72
// address: 0x00216F72   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_216F72(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r5
  int v5; // r6
  int result; // r0
  unsigned int v7; // r3
  unsigned __int8 v8; // r2
  unsigned int v9; // [sp+Ch] [bp-4h] BYREF

  v9 = a4;
  v4 = *(unsigned __int16 *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 16);
  result = ft_mem_realloc(a2, 1, 0, v4 + 1, 0, (int *)&v9);
  v7 = v9;
  if ( v9 != 0 )
    return 0;
  while ( v7 < v4 )
  {
    v8 = *(_BYTE *)(v5 + v7);
    if ( (unsigned int)v8 - 32 > 0x5F )
      v8 = 63;
    *(_BYTE *)(result + v7++) = v8;
  }
  *(_BYTE *)(result + v4) = 0;
  return result;
}


//======================================================================
// sub_216FB4
// address: 0x00216FB4   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_216FB4(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r5
  int v5; // r4
  int result; // r0
  unsigned __int8 *i; // r3
  unsigned __int8 v8; // r2
  int v9; // [sp+Ch] [bp-4h] BYREF

  v9 = a4;
  v4 = *(unsigned __int16 *)(a1 + 8) >> 1;
  v5 = *(_DWORD *)(a1 + 16);
  result = ft_mem_realloc(a2, 1, 0, v4 + 1, 0, &v9);
  if ( v9 != 0 )
    return 0;
  for ( i = (unsigned __int8 *)result; (unsigned int)&i[-result] < v4; ++i )
  {
    v5 += 2;
    v8 = *(_BYTE *)(v5 - 1);
    if ( ((*(unsigned __int8 *)(v5 - 2) << 8) | (unsigned int)v8) - 32 > 0x5F )
      v8 = 63;
    *i = v8;
  }
  *(_BYTE *)(result + v4) = 0;
  return result;
}


//======================================================================
// sub_217008
// address: 0x00217008   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_217008(_DWORD *a1)
{
  int result; // r0
  int v3; // r1

  result = a1[9];
  a1[7] = 0;
  if ( result != 0 )
  {
    v3 = a1[8];
    if ( v3 != 0 )
    {
      result = ft_mem_free(result, v3);
      a1[8] = 0;
    }
  }
  return result;
}


//======================================================================
// sub_217024
// address: 0x00217024   size: 0x8E (142 bytes)
//======================================================================
int __fastcall sub_217024(_DWORD *a1)
{
  _DWORD *v1; // r4
  int v3; // r7
  int result; // r0
  unsigned int v5; // r5
  _DWORD *v6; // [sp+8h] [bp-Ch]
  unsigned int v7; // [sp+Ch] [bp-8h]

  v1 = (_DWORD *)a1[154];
  v3 = a1[25];
  result = a1[153];
  v6 = &v1[12 * result];
  if ( v1 != nullptr )
  {
    while ( v1 < v6 )
    {
      v5 = v1[1];
      v7 = v5 + 40 * *v1;
      if ( v5 != 0 )
      {
        while ( v5 < v7 )
        {
          ft_mem_free(v3, *(_DWORD *)(v5 + 28));
          *(_DWORD *)(v5 + 28) = 0;
          ft_mem_free(v3, *(_DWORD *)(v5 + 32));
          *(_DWORD *)(v5 + 32) = 0;
          v5 += 40;
        }
      }
      ft_mem_free(v3, v1[1]);
      v1[1] = 0;
      *v1 = 0;
      v1 += 12;
    }
    ft_mem_free(v3, a1[154]);
    result = 616;
    a1[154] = 0;
  }
  a1[153] = 0;
  return result;
}


//======================================================================
// sub_2170B2
// address: 0x002170B2   size: 0x92 (146 bytes)
//======================================================================
__int64 __fastcall sub_2170B2(__int64 a1)
{
  int v1; // r4
  int v2; // r7
  int v3; // r3
  int v4; // r5
  unsigned int v5; // r6
  int v6; // r1
  int v7; // r5
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v1 = a1;
  v2 = *(_DWORD *)(a1 + 100);
  if ( *(_BYTE *)(a1 + 628) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 468);
    if ( v3 == 0x20000 )
    {
      v4 = a1 + 632;
      ft_mem_free(*(_DWORD *)(a1 + 100), *(_DWORD *)(a1 + 636));
      v5 = 0;
      *(_DWORD *)(v4 + 4) = 0;
      *(_WORD *)(v1 + 632) = 0;
      while ( 1 )
      {
        v6 = *(_DWORD *)(v4 + 8);
        if ( *(unsigned __int16 *)(v4 + 2) <= v5 )
          break;
        HIDWORD(v9) = 4 * v5;
        ft_mem_free(v2, *(_DWORD *)(v6 + 4 * v5));
        *(_DWORD *)(*(_DWORD *)(v4 + 8) + 4 * v5) = 0;
        v5 = (unsigned __int16)(v5 + 1);
      }
      ft_mem_free(v2, v6);
      *(_DWORD *)(v4 + 8) = 0;
      *(_WORD *)(v4 + 2) = 0;
    }
    else if ( v3 == 163840 )
    {
      v7 = a1 + 632;
      ft_mem_free(*(_DWORD *)(a1 + 100), *(_DWORD *)(a1 + 636));
      *(_DWORD *)(v7 + 4) = 0;
      *(_WORD *)(v1 + 632) = 0;
    }
  }
  *(_BYTE *)(v1 + 628) = 0;
  return v9;
}


//======================================================================
// sub_217144
// address: 0x00217144   size: 0x46 (70 bytes)
//======================================================================
__int64 __fastcall sub_217144(_DWORD *a1)
{
  _DWORD *v2; // r4
  int v3; // r5
  int v4; // r6
  __int64 v6; // [sp+0h] [bp-Ch]

  LODWORD(v6) = a1;
  HIDWORD(v6) = *(_DWORD *)(a1[24] + 8);
  v2 = a1 + 87;
  v3 = a1[90];
  v4 = a1[88];
  if ( v3 != 0 )
  {
    while ( v4 != 0 )
    {
      ft_mem_free(SHIDWORD(v6), *(_DWORD *)(v3 + 16));
      *(_DWORD *)(v3 + 16) = 0;
      *(_WORD *)(v3 + 8) = 0;
      --v4;
      v3 += 20;
    }
    ft_mem_free(SHIDWORD(v6), v2[3]);
    v2[3] = 0;
  }
  v2[1] = 0;
  *((_WORD *)a1 + 174) = 0;
  v2[2] = 0;
  return v6;
}


//======================================================================
// sub_21718C
// address: 0x0021718C   size: 0xC (12 bytes)
//======================================================================
const char *__fastcall sub_21718C(int a1, char *a2)
{
  return ft_service_list_lookup((const char *)&off_452014, a2);
}


//======================================================================
// sub_21719C
// address: 0x0021719C   size: 0x148 (328 bytes)
//======================================================================
int __fastcall sub_21719C(int a1, int *a2)
{
  int Frame; // r6
  unsigned int v5; // r2
  unsigned __int8 *v6; // r3
  unsigned __int8 *v7; // r4
  unsigned int v8; // r7
  unsigned __int8 *v9; // r7
  int v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r2
  int v14; // r1
  unsigned int *v15; // r4
  unsigned int v16; // r2
  unsigned int v17; // r1
  int i; // [sp+Ch] [bp-20h]
  int v20; // [sp+10h] [bp-1Ch]
  unsigned int v21; // [sp+14h] [bp-18h]
  int v22; // [sp+18h] [bp-14h]
  unsigned int v23; // [sp+1Ch] [bp-10h]
  unsigned int v24; // [sp+24h] [bp-8h] BYREF

  Frame = (*(int (__fastcall **)(int, int, int *, unsigned int *))(a1 + 508))(a1, 1801810542, a2, &v24);
  if ( Frame == 0 )
  {
    Frame = 142;
    if ( v24 > 3 )
    {
      Frame = FT_Stream_ExtractFrame(a2, v24, (_DWORD *)(a1 + 776));
      if ( Frame == 0 )
      {
        v5 = v24;
        *(_DWORD *)(a1 + 780) = v24;
        v6 = *(unsigned __int8 **)(a1 + 776);
        v21 = (unsigned int)&v6[v5];
        v7 = v6 + 4;
        v23 = v6[3] | (v6[2] << 8);
        if ( v23 > 0x20 )
          v23 = 32;
        v20 = 0;
        v22 = 0;
        for ( i = 0; i != v23; ++i )
        {
          if ( v21 < (unsigned int)(v7 + 6) )
            break;
          v8 = (v7[2] << 8) | v7[3];
          if ( v8 <= 6 )
            break;
          v9 = &v7[v8];
          if ( (unsigned int)v9 > v21 )
            v9 = (unsigned __int8 *)v21;
          if ( ((v7[4] << 8) | v7[5] & 0xF7) == 1 && (unsigned int)(v7 + 14) <= v21 )
          {
            v10 = v9 - (v7 + 14);
            v11 = v10 < 6 * ((v7[6] << 8) | v7[7]) ? v10 / 6 : (v7[6] << 8) | v7[7];
            v22 |= 1 << i;
            if ( v11 != 0 )
            {
              v12 = v11 - 1;
              v13 = (v7[15] << 16) | (v7[14] << 24) | v7[17];
              v14 = v7[16];
              v15 = (unsigned int *)(v7 + 20);
              v16 = v13 | (v14 << 8);
              while ( v12 != 0 )
              {
                v17 = _byteswap_ulong(*v15);
                if ( v17 <= v16 )
                  goto LABEL_24;
                v15 = (unsigned int *)((char *)v15 + 6);
                --v12;
                v16 = v17;
              }
              v20 |= 1 << i;
            }
          }
LABEL_24:
          v7 = v9;
        }
        *(_DWORD *)(a1 + 784) = i;
        *(_DWORD *)(a1 + 788) = v22;
        *(_DWORD *)(a1 + 792) = v20;
      }
    }
  }
  return Frame;
}


//======================================================================
// sub_2172E8
// address: 0x002172E8   size: 0x140 (320 bytes)
//======================================================================
__int64 __fastcall sub_2172E8(__int64 a1)
{
  int v1; // r4
  int v2; // r2
  int v3; // r5
  void (*v4)(void); // r3
  void (__fastcall *v5)(int); // r3
  int v6; // r1
  int v7; // r1
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = a1;
  v1 = a1;
  if ( (_DWORD)a1 != 0 )
  {
    v2 = *(_DWORD *)(a1 + 532);
    v3 = *(_DWORD *)(a1 + 100);
    HIDWORD(v9) = v2;
    if ( v2 != 0 )
    {
      v4 = *(void (**)(void))(v2 + 116);
      if ( v4 != nullptr )
        v4();
      v5 = *(void (__fastcall **)(int))(HIDWORD(v9) + 144);
      if ( v5 != nullptr )
        v5(v1);
    }
    if ( *(_BYTE *)(v1 + 816) != 0 )
    {
      if ( *(_DWORD *)(v1 + 796) != 0 )
        FT_Stream_ReleaseFrame(*(_DWORD *)(v1 + 104), (int *)(v1 + 796));
      *(_DWORD *)(v1 + 800) = 0;
      *(_DWORD *)(v1 + 804) = 0;
      *(_DWORD *)(v1 + 808) = 0;
    }
    FT_Stream_ReleaseFrame(*(_DWORD *)(v1 + 104), (int *)(v1 + 776));
    *(_DWORD *)(v1 + 780) = 0;
    *(_DWORD *)(v1 + 784) = 0;
    *(_DWORD *)(v1 + 788) = 0;
    *(_DWORD *)(v1 + 792) = 0;
    ft_mem_free(v3, *(_DWORD *)(v1 + 144));
    *(_DWORD *)(v1 + 144) = 0;
    *(_DWORD *)(v1 + 140) = 0;
    ft_mem_free(v3, *(_DWORD *)(v1 + 156));
    *(_DWORD *)(v1 + 156) = 0;
    *(_WORD *)(v1 + 152) = 0;
    FT_Stream_ReleaseFrame(*(_DWORD *)(v1 + 104), (int *)(v1 + 500));
    *(_DWORD *)(v1 + 504) = 0;
    ft_mem_free(v3, *(_DWORD *)(v1 + 252));
    *(_DWORD *)(v1 + 252) = 0;
    ft_mem_free(v3, *(_DWORD *)(v1 + 256));
    *(_DWORD *)(v1 + 256) = 0;
    if ( *(_BYTE *)(v1 + 296) != 0 )
    {
      ft_mem_free(v3, *(_DWORD *)(v1 + 336));
      *(_DWORD *)(v1 + 336) = 0;
      ft_mem_free(v3, *(_DWORD *)(v1 + 340));
      *(_DWORD *)(v1 + 340) = 0;
      *(_BYTE *)(v1 + 296) = 0;
    }
    ft_mem_free(v3, *(_DWORD *)(v1 + 552));
    *(_DWORD *)(v1 + 552) = 0;
    *(_WORD *)(v1 + 550) = 0;
    if ( HIDWORD(v9) != 0 )
      (*(void (__fastcall **)(int))(HIDWORD(v9) + 60))(v1);
    ft_mem_free(v3, *(_DWORD *)(v1 + 20));
    v6 = *(_DWORD *)(v1 + 24);
    *(_DWORD *)(v1 + 20) = 0;
    ft_mem_free(v3, v6);
    v7 = *(_DWORD *)(v1 + 32);
    *(_DWORD *)(v1 + 24) = 0;
    ft_mem_free(v3, v7);
    *(_DWORD *)(v1 + 32) = 0;
    *(_DWORD *)(v1 + 28) = 0;
    ft_mem_free(v3, *(_DWORD *)(v1 + 704));
    *(_DWORD *)(v1 + 704) = 0;
    *(_DWORD *)(v1 + 532) = 0;
  }
  return v9;
}


//======================================================================
// sub_21742C
// address: 0x0021742C   size: 0x24 (36 bytes)
//======================================================================
int __fastcall sub_21742C(int a1, int a2, _DWORD *a3, _DWORD *a4)
{
  _DWORD *v6; // r0

  v6 = sub_214C20(a1, a2);
  if ( v6 == nullptr )
    return 142;
  if ( a4 != nullptr )
    *a4 = v6[3];
  return FT_Stream_Seek(a3, v6[2]);
}


//======================================================================
// sub_217450
// address: 0x00217450   size: 0x22C (556 bytes)
//======================================================================
int __fastcall sub_217450(int a1, const char *a2, int *a3)
{
  int v3; // r5
  int *v4; // r4
  unsigned __int8 *v6; // r3
  unsigned int v7; // r1
  unsigned int v8; // r12
  unsigned int v9; // r1
  unsigned int v10; // r6
  unsigned __int8 *v11; // r0
  unsigned __int8 *v12; // r3
  unsigned __int8 *v13; // r2
  int v14; // r1
  int result; // r0
  int v16; // r5
  int v17; // r4
  unsigned __int8 *v18; // r3
  int v19; // r4
  int v20; // r2
  int v21; // r6
  size_t v22; // r6
  unsigned int v23; // r1
  int v24; // r5
  unsigned int v25; // r5
  int v26; // r3
  int *v28; // [sp+4h] [bp-30h]
  int v29; // [sp+4h] [bp-30h]
  int v30; // [sp+8h] [bp-2Ch]
  char v31; // [sp+8h] [bp-2Ch]
  int v32; // [sp+Ch] [bp-28h]
  size_t v33; // [sp+10h] [bp-24h]
  int v35; // [sp+1Ch] [bp-18h]
  int v36; // [sp+20h] [bp-14h]
  int v37; // [sp+24h] [bp-10h]
  unsigned int v38; // [sp+2Ch] [bp-8h] BYREF

  v3 = *(_DWORD *)(a1 + 88);
  v4 = (int *)(a1 + 796);
  *a3 = 0;
  v30 = v3;
  if ( *(_BYTE *)(a1 + 816) == 0 )
  {
    v28 = *(int **)(a1 + 104);
    j_memset((void *)(a1 + 796), 0, 0x18u);
    if ( sub_21742C(a1, 1111770656, v28, &v38) == 0 && v38 > 7 && FT_Stream_ExtractFrame(v28, v38, v4) == 0 )
    {
      v6 = *(unsigned __int8 **)(a1 + 796);
      v7 = v38;
      v4[1] = (int)&v6[v38];
      v8 = v7;
      if ( ((*v6 << 8) | v6[1]) == 1 )
      {
        v9 = _byteswap_ulong(*((_DWORD *)v6 + 1));
        if ( v9 > 7 )
        {
          v10 = (v6[2] << 8) | v6[3];
          if ( (v9 - 8) >> 2 >= v10 && v9 + 1 <= v8 )
          {
            v11 = &v6[v9];
            v12 = v6 + 8;
            v4[4] = v10;
            v4[2] = (int)v11;
            v4[3] = v8 - v9;
            v13 = &v12[4 * v10];
            while ( v10 != 0 )
            {
              --v10;
              v14 = 10 * ((v12[2] << 8) | v12[3]);
              v12 += 4;
              v13 += v14;
            }
            if ( v13 <= v11 )
            {
              *(_BYTE *)(a1 + 816) = 1;
              goto LABEL_16;
            }
          }
        }
      }
      FT_Stream_ReleaseFrame((int)v28, v4);
      j_memset(v4, 0, 0x18u);
    }
    return 8;
  }
LABEL_16:
  v16 = *(_DWORD *)(a1 + 812);
  v17 = *(_DWORD *)(a1 + 796);
  if ( v30 != 0 && a2 != nullptr )
  {
    v33 = j_strlen(a2);
    result = 6;
    if ( v33 == 0 )
      return result;
    v18 = (unsigned __int8 *)(v17 + 8);
    v19 = v17 + 8 + 4 * v16;
    while ( v16 != 0 )
    {
      v29 = v18[3] | (v18[2] << 8);
      v20 = v18[1];
      v21 = *v18 << 8;
      v18 += 4;
      if ( *(unsigned __int16 *)(v30 + 14) == (v20 | v21) )
      {
        while ( v29 != 0 )
        {
          v31 = *(_BYTE *)(v19 + 5);
          if ( (v31 & 0x10) != 0 )
          {
            v35 = *(unsigned __int8 *)(v19 + 7);
            v22 = *(_DWORD *)(a1 + 808);
            v23 = _byteswap_ulong(*(_DWORD *)v19);
            v24 = *(unsigned __int8 *)(v19 + 6);
            v36 = *(unsigned __int8 *)(v19 + 8);
            v37 = *(unsigned __int8 *)(v19 + 9);
            if ( v23 < v22 && v33 < v22 - v23 )
            {
              v32 = *(_DWORD *)(a1 + 804);
              if ( j_strncmp(a2, (const char *)(v32 + v23), v22 - v23) == 0 )
              {
                v25 = (v24 << 24) | (v35 << 16) | v37 | (v36 << 8);
                switch ( v31 & 0xF )
                {
                  case 0:
                  case 1:
                    if ( v25 >= v22 || j_memchr((const void *)(v32 + v25), 0, v22) == nullptr )
                      goto LABEL_24;
                    *a3 = 1;
                    v25 += *(_DWORD *)(a1 + 804);
                    goto LABEL_37;
                  case 2:
                    v26 = 2;
                    goto LABEL_36;
                  case 3:
                    v26 = 3;
LABEL_36:
                    *a3 = v26;
LABEL_37:
                    a3[1] = v25;
                    result = 0;
                    break;
                  default:
                    goto LABEL_24;
                }
                return result;
              }
            }
          }
LABEL_24:
          v19 += 10;
          --v29;
        }
        return 6;
      }
      --v16;
      v19 += 10 * v29;
    }
  }
  return 6;
}


//======================================================================
// sub_217680
// address: 0x00217680   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_217680(int a1, _DWORD *a2, int *a3)
{
  int result; // r0
  int v6; // [sp+0h] [bp-1Ch]
  int v8[2]; // [sp+8h] [bp-14h] BYREF
  int v9[3]; // [sp+10h] [bp-Ch] BYREF

  result = sub_217450(a1, "CHARSET_REGISTRY", v9);
  if ( result == 0 )
  {
    result = sub_217450(a1, "CHARSET_ENCODING", v8);
    if ( result == 0 )
    {
      if ( v9[0] == 1 && v8[0] == 1 )
      {
        v6 = v9[1];
        *a2 = v8[1];
        *a3 = v6;
      }
      else
      {
        return 6;
      }
    }
  }
  return result;
}


//======================================================================
// sub_2176D4
// address: 0x002176D4   size: 0x17A (378 bytes)
//======================================================================
int __fastcall sub_2176D4(int a1, int *a2, int a3)
{
  int v4; // r7
  int (*v5)(void); // r5
  unsigned int v6; // r5
  int *v7; // r6
  int v8; // r0
  int v9; // r2
  _WORD *v10; // r2
  unsigned int v11; // r0
  int i; // r3
  int v13; // r1
  __int16 v14; // r1
  __int16 v15; // r6
  signed int v16; // r2
  signed int v17; // r7
  _WORD *v18; // r3
  _WORD *v19; // r7
  __int16 v20; // r2
  unsigned int v21; // r1
  int v23; // [sp+8h] [bp-24h]
  int v24; // [sp+8h] [bp-24h]
  int *v26; // [sp+10h] [bp-1Ch]
  unsigned int v28; // [sp+1Ch] [bp-10h]
  int v29; // [sp+20h] [bp-Ch] BYREF
  unsigned int v30; // [sp+24h] [bp-8h]

  v4 = a2[7];
  v5 = *(int (**)(void))(a1 + 508);
  if ( a3 != 0 )
  {
    v29 = v5();
    if ( v29 != 0 )
      return v29;
    v6 = v30 >> 2;
    if ( *(unsigned __int16 *)(a1 + 334) <= v30 >> 2 )
      v6 = *(unsigned __int16 *)(a1 + 334);
    *(_WORD *)(a1 + 334) = 0;
    v7 = (int *)(a1 + 336);
    v26 = (int *)(a1 + 340);
  }
  else
  {
    v29 = v5();
    if ( v29 != 0 )
      return v29;
    v6 = v30 >> 2;
    if ( *(unsigned __int16 *)(a1 + 250) <= v30 >> 2 )
      v6 = *(unsigned __int16 *)(a1 + 250);
    *(_WORD *)(a1 + 250) = 0;
    v7 = (int *)(a1 + 252);
    v26 = (int *)(a1 + 256);
  }
  v23 = *(unsigned __int16 *)(a1 + 264);
  v28 = v30;
  v8 = ft_mem_realloc(v4, 4, 0, v6, 0, &v29);
  v9 = v29;
  *v7 = v8;
  if ( v9 == 0 )
  {
    v24 = (v23 - v6) & ((int)~(v23 - v6) >> 31);
    *v26 = ft_mem_realloc(v4, 2, 0, v24, 0, &v29);
    if ( v29 == 0 )
    {
      v29 = FT_Stream_EnterFrame(a2, v30);
      if ( v29 == 0 )
      {
        v10 = (_WORD *)*v7;
        v11 = *v7 + 4 * v6;
        for ( i = a2[8]; ; i += 4 )
        {
          v13 = i;
          if ( (unsigned int)v10 >= v11 )
            break;
          *v10 = _byteswap_ushort(*(_WORD *)i);
          v14 = *(char *)(i + 2);
          v15 = *(unsigned __int8 *)(i + 3);
          v10[1] = (v14 << 8) | v15;
          v10 += 2;
        }
        v16 = (v28 - 4 * v6) >> 1;
        v17 = v16;
        v18 = (_WORD *)*v26;
        if ( v16 > v24 )
          v17 = v24;
        v19 = &v18[v17];
        while ( v18 < v19 )
        {
          v13 += 2;
          *v18++ = (*(char *)(v13 - 2) << 8) | *(unsigned __int8 *)(v13 - 1);
        }
        if ( v24 > v16 && v16 != 0 )
        {
          v20 = *(_WORD *)(2 * (v16 + 0x7FFFFFFF) + *v26);
          v21 = *v26 + 2 * v24;
          while ( (unsigned int)v18 < v21 )
            *v18++ = v20;
        }
        FT_Stream_ExitFrame(a2);
        if ( a3 != 0 )
          *(_WORD *)(a1 + 334) = v6;
        else
          *(_WORD *)(a1 + 250) = v6;
      }
    }
  }
  return v29;
}


//======================================================================
// sub_21785C
// address: 0x0021785C   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall sub_21785C(int a1, int *a2)
{
  unsigned int v4; // r7
  int v5; // r6
  _WORD *v6; // r5
  unsigned int i; // r6
  int v9; // [sp+Ch] [bp-10h]
  int v10; // [sp+14h] [bp-8h] BYREF

  v9 = a2[7];
  v10 = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1734439792, a2, 0);
  if ( v10 == 0 )
  {
    v10 = FT_Stream_EnterFrame(a2, 4u);
    if ( v10 == 0 )
    {
      *(_WORD *)(a1 + 548) = FT_Stream_GetUShort((int)a2);
      *(_WORD *)(a1 + 550) = FT_Stream_GetUShort((int)a2);
      FT_Stream_ExitFrame(a2);
      if ( *(unsigned __int16 *)(a1 + 548) <= 1u )
      {
        v4 = *(unsigned __int16 *)(a1 + 550);
        v5 = ft_mem_realloc(v9, 4, 0, v4, 0, &v10);
        if ( v10 == 0 )
        {
          v10 = FT_Stream_EnterFrame(a2, 4 * v4);
          if ( v10 == 0 )
          {
            *(_DWORD *)(a1 + 552) = v5;
            v6 = (_WORD *)v5;
            for ( i = 0; i < v4; ++i )
            {
              *v6 = FT_Stream_GetUShort((int)a2);
              v6[1] = FT_Stream_GetUShort((int)a2);
              v6 += 2;
            }
            FT_Stream_ExitFrame(a2);
          }
        }
      }
      else
      {
        *(_WORD *)(a1 + 550) = 0;
        return 8;
      }
    }
  }
  return v10;
}


//======================================================================
// sub_217918
// address: 0x00217918   size: 0x178 (376 bytes)
//======================================================================
int __fastcall sub_217918(int a1, int a2, int *a3)
{
  _WORD *v3; // r3
  int v4; // r2
  int v5; // r4
  int v6; // r7
  int v7; // r1
  unsigned int v8; // r6
  unsigned int v9; // r3
  int v10; // r4
  int (__fastcall *v11)(int, int, int, int); // r6
  int v12; // r2
  _DWORD *v13; // r5
  int v14; // r0
  _WORD *v16; // [sp+Ch] [bp-28h]
  int v17; // [sp+10h] [bp-24h]
  int v18; // [sp+14h] [bp-20h]
  _BOOL4 v19; // [sp+18h] [bp-1Ch]
  unsigned int v20; // [sp+1Ch] [bp-18h]
  int v23; // [sp+2Ch] [bp-8h] BYREF

  v16 = *(_WORD **)(a1 + 360);
  v20 = *(unsigned __int16 *)(a1 + 344);
  v3 = v16;
  v4 = -1;
  v5 = 0;
  v18 = *(_DWORD *)(a1 + 100);
  v23 = 0;
  v19 = false;
  v6 = -1;
  v17 = -1;
  v7 = -1;
  while ( (unsigned __int16)v5 < v20 )
  {
    if ( (unsigned __int16)v3[3] == a2 && v3[4] != 0 )
    {
      switch ( *v3 )
      {
        case 0:
        case 2:
          v4 = v5;
          break;
        case 1:
          if ( v3[2] != 0 )
          {
            if ( v3[1] == 0 )
              v7 = v5;
          }
          else
          {
            v17 = v5;
          }
          break;
        case 3:
          if ( v6 == -1 || (v3[2] & 0x3FF) == 9 )
          {
            v8 = (unsigned __int16)v3[1];
            if ( v8 <= 0xA && ((1 << v8) & 0x403) != 0 )
            {
              v19 = (v3[2] & 0x3FF) == 9;
              v6 = v5;
            }
          }
          break;
        default:
          break;
      }
    }
    v3 += 10;
    ++v5;
  }
  v9 = 20;
  v10 = (int)&v16[10 * v20];
  if ( v17 == -1 )
  {
    if ( v6 != -1 )
    {
LABEL_19:
      v9 = v7 + 1;
      if ( v7 == -1 || v19 )
      {
        v10 = (int)&v16[10 * v6];
        v9 = *(unsigned __int16 *)(v10 + 2);
        if ( v9 > 1 && v9 != 10 )
          goto LABEL_38;
        v11 = sub_216FB4;
        goto LABEL_31;
      }
      goto LABEL_25;
    }
    if ( v7 == -1 )
    {
      if ( v4 == -1 )
      {
        v11 = nullptr;
      }
      else
      {
        v10 = (int)&v16[10 * v4];
        v11 = sub_216FB4;
      }
      goto LABEL_29;
    }
  }
  else
  {
    v7 = v17;
    if ( v6 != -1 )
      goto LABEL_19;
  }
LABEL_25:
  v11 = sub_216F72;
  v10 = (int)&v16[10 * v7];
LABEL_29:
  if ( v10 == 0 )
  {
    v14 = 0;
    goto LABEL_39;
  }
  if ( v11 == nullptr )
  {
LABEL_38:
    v14 = 0;
    goto LABEL_39;
  }
LABEL_31:
  v12 = *(_DWORD *)(v10 + 16);
  if ( v12 == 0
    && ((v13 = *(_DWORD **)(a1 + 364),
         *(_DWORD *)(v10 + 16) = ft_mem_realloc(v18, 1, 0, *(unsigned __int16 *)(v10 + 8), 0, &v23),
         v23 != 0)
     || (v23 = FT_Stream_Seek(v13, *(_DWORD *)(v10 + 12))) != 0
     || (v23 = FT_Stream_Read(v13, *(void **)(v10 + 16), *(unsigned __int16 *)(v10 + 8))) != 0) )
  {
    ft_mem_free(v18, *(_DWORD *)(v10 + 16));
    v14 = 0;
    *(_DWORD *)(v10 + 16) = 0;
    *(_WORD *)(v10 + 8) = 0;
  }
  else
  {
    v14 = v11(v10, v18, v12, v9);
  }
LABEL_39:
  *a3 = v14;
  return v23;
}


//======================================================================
// sub_217AA0
// address: 0x00217AA0   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_217AA0(int a1, int a2, unsigned int a3, void *a4, int *a5)
{
  _DWORD *v8; // r0
  unsigned int v9; // r3
  int result; // r0

  if ( a2 != 0 )
  {
    v8 = sub_214C20(a1, a2);
    if ( v8 == nullptr )
      return 142;
    a3 += v8[2];
    v9 = v8[3];
  }
  else
  {
    v9 = *(_DWORD *)(*(_DWORD *)(a1 + 104) + 4);
  }
  if ( a5 != nullptr )
  {
    result = *a5;
    if ( *a5 == 0 )
    {
      *a5 = v9;
      return result;
    }
    v9 = *a5;
  }
  return FT_Stream_ReadAt(*(_DWORD **)(a1 + 104), a3, a4, v9);
}


//======================================================================
// sub_217AE2
// address: 0x00217AE2   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_217AE2(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  return FT_Match_Size(a1, a2, 0, a3);
}


//======================================================================
// sub_217AF0
// address: 0x00217AF0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_217AF0(_DWORD *a1, int a2, int a3, _DWORD *a4)
{
  _DWORD v5[6]; // [sp+4h] [bp-18h] BYREF

  v5[2] = a3;
  v5[0] = 0;
  *a4 = 0x7FFFFFFF;
  v5[1] = a2;
  v5[3] = 0;
  v5[4] = 0;
  return sub_217AE2(a1, v5, a4);
}


//======================================================================
// sub_217B18
// address: 0x00217B18   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_217B18(int *a1, int a2, char *a3)
{
  int v4; // r3
  int result; // r0
  char v6; // r3
  unsigned __int8 v7; // r3
  int v8; // r3
  int *v9; // [sp+0h] [bp-Ch] BYREF
  int v10; // [sp+4h] [bp-8h]
  char *v11; // [sp+8h] [bp-4h]

  v9 = a1;
  v10 = a2;
  v11 = a3;
  if ( (unsigned __int16)(*(_WORD *)(a2 + 6) - 1) > 8u )
    goto LABEL_7;
  v4 = 1 << (*(_BYTE *)(a2 + 6) - 1);
  if ( (v4 & 0x160) != 0 )
    return FT_Stream_ReadFields(a1, byte_433E5C, (int)a3);
  if ( (v4 & 0x83) != 0 )
  {
    result = FT_Stream_ReadFields(a1, byte_433E40, (int)&v9);
    if ( result == 0 )
    {
      v6 = (char)v9;
      a3[5] = 0;
      a3[6] = 0;
      *a3 = v6;
      v7 = BYTE1(v9);
      a3[7] = 0;
      *(_WORD *)(a3 + 1) = __PAIR16__(BYTE2(v9), v7);
      a3[3] = HIBYTE(v9);
      a3[4] = v10;
    }
  }
  else
  {
LABEL_7:
    v8 = *(unsigned __int16 *)(a2 + 4);
    if ( v8 == 2 || (result = 3, v8 == 5) )
    {
      *(_QWORD *)a3 = *(_QWORD *)(a2 + 16);
      return 0;
    }
  }
  return result;
}


//======================================================================
// sub_217B98
// address: 0x00217B98   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_217B98(int a1, int *a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1346587732, a2, 0);
  if ( result == 0 )
    return FT_Stream_ReadFields(a2, byte_433E84, a1 + 556);
  return result;
}


//======================================================================
// sub_217BCC
// address: 0x00217BCC   size: 0x106 (262 bytes)
//======================================================================
int __fastcall sub_217BCC(int a1, int *a2)
{
  int v3; // r1
  int v4; // r6
  int v6; // r7
  int v7; // r0
  int v8; // r3
  int v9; // r6
  unsigned int v10; // r3
  int v12; // [sp+Ch] [bp-20h]
  unsigned int v13; // [sp+14h] [bp-18h]
  int v14; // [sp+18h] [bp-14h]
  unsigned int v15; // [sp+1Ch] [bp-10h]
  int Fields; // [sp+20h] [bp-Ch] BYREF
  int v17; // [sp+24h] [bp-8h] BYREF

  v3 = a2[7];
  v4 = a1 + 348;
  *(_DWORD *)(a1 + 364) = a2;
  v14 = v3;
  Fields = (*(int (__fastcall **)(int, int, int *, int *))(a1 + 508))(a1, 1851878757, a2, &v17);
  if ( Fields == 0 )
  {
    v12 = FT_Stream_Pos((int)a2);
    Fields = FT_Stream_ReadFields(a2, byte_433EC4, v4);
    if ( Fields == 0 )
    {
      v6 = *(_DWORD *)(v4 + 4);
      v15 = 12 * v6 + 6 + v12;
      v13 = v12 + v17;
      if ( v15 <= v12 + v17 )
      {
        *(_DWORD *)(v4 + 4) = 0;
        v7 = ft_mem_realloc(v14, 20, 0, v6, 0, &Fields);
        v8 = Fields;
        *(_DWORD *)(v4 + 12) = v7;
        if ( v8 == 0 )
        {
          Fields = FT_Stream_EnterFrame(a2, 12 * v6);
          if ( Fields == 0 )
          {
            v9 = *(_DWORD *)(v4 + 12);
            while ( v6 != 0 )
            {
              Fields = FT_Stream_ReadFields(a2, byte_433ED8, v9);
              if ( Fields == 0 && *(_WORD *)(v9 + 8) != 0 )
              {
                v10 = *(_DWORD *)(a1 + 356) + *(_DWORD *)(v9 + 12) + v12;
                if ( v10 >= v15 && v10 + *(unsigned __int16 *)(v9 + 8) <= v13 )
                {
                  *(_DWORD *)(v9 + 12) = v10;
                  v9 += 20;
                }
                else
                {
                  *(_DWORD *)(v9 + 12) = 0;
                  *(_WORD *)(v9 + 8) = 0;
                }
              }
              --v6;
            }
            *(_DWORD *)(a1 + 352) = -858993459 * ((v9 - *(_DWORD *)(a1 + 360)) >> 2);
            FT_Stream_ExitFrame(a2);
            *(_WORD *)(a1 + 344) = *(_DWORD *)(a1 + 352);
          }
        }
      }
      else
      {
        return 145;
      }
    }
  }
  return Fields;
}


//======================================================================
// sub_217CE4
// address: 0x00217CE4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_217CE4(int a1, int *a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1886352244, a2, 0);
  if ( result == 0 )
    return FT_Stream_ReadFields(a2, byte_433EF4, a1 + 468);
  return result;
}


//======================================================================
// sub_217D18
// address: 0x00217D18   size: 0xC0 (192 bytes)
//======================================================================
int __fastcall sub_217D18(int a1, int *a2)
{
  int Fields; // r4
  int v4; // r0
  __int128 v7; // [sp+14h] [bp-2Ch] BYREF
  unsigned __int8 v8[28]; // [sp+24h] [bp-1Ch] BYREF
  unsigned __int8 v9[180]; // [sp+40h] [bp+0h] BYREF

  j_memcpy(v9, &unk_433F20, 0xB0u);
  v7 = unk_433FD0;
  j_memcpy(v8, &unk_433FE0, sizeof(v8));
  Fields = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1330851634, a2, 0);
  if ( Fields == 0 )
  {
    Fields = FT_Stream_ReadFields(a2, v9, a1 + 368);
    if ( Fields == 0 )
    {
      *(_DWORD *)(a1 + 448) = 0;
      *(_DWORD *)(a1 + 452) = 0;
      *(_WORD *)(a1 + 456) = 0;
      *(_WORD *)(a1 + 458) = 0;
      *(_WORD *)(a1 + 460) = 0;
      *(_WORD *)(a1 + 462) = 0;
      *(_WORD *)(a1 + 464) = 0;
      if ( *(_WORD *)(a1 + 368) != 0 )
      {
        v4 = FT_Stream_ReadFields(a2, (unsigned __int8 *)&v7, a1 + 368);
        if ( v4 != 0 )
          return v4;
        if ( *(unsigned __int16 *)(a1 + 368) > 1u )
          return FT_Stream_ReadFields(a2, v8, a1 + 368);
      }
    }
  }
  return Fields;
}


//======================================================================
// sub_217DE4
// address: 0x00217DE4   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall sub_217DE4(int a1, int *a2)
{
  int Fields; // r5
  int v5; // r0
  __int128 v7; // [sp+Ch] [bp-50h] BYREF
  unsigned __int8 v8[64]; // [sp+1Ch] [bp-40h] BYREF

  v7 = unk_433FFC;
  j_memcpy(v8, &unk_43400C, 0x3Cu);
  Fields = (*(int (__fastcall **)(int, int, int *, _DWORD, __int128 *, unsigned __int8 *))(a1 + 508))(
             a1,
             1835104368,
             a2,
             0,
             &v7,
             v8);
  if ( Fields == 0 )
  {
    Fields = FT_Stream_ReadFields(a2, (unsigned __int8 *)&v7, a1 + 260);
    if ( Fields == 0 )
    {
      *(_WORD *)(a1 + 266) = 0;
      *(_WORD *)(a1 + 268) = 0;
      *(_WORD *)(a1 + 270) = 0;
      *(_WORD *)(a1 + 272) = 0;
      *(_WORD *)(a1 + 274) = 0;
      *(_WORD *)(a1 + 276) = 0;
      *(_WORD *)(a1 + 278) = 0;
      *(_WORD *)(a1 + 280) = 0;
      *(_WORD *)(a1 + 282) = 0;
      *(_WORD *)(a1 + 284) = 0;
      *(_WORD *)(a1 + 286) = 0;
      *(_WORD *)(a1 + 288) = 0;
      *(_WORD *)(a1 + 290) = 0;
      if ( *(int *)(a1 + 260) > 0xFFFF )
      {
        v5 = FT_Stream_ReadFields(a2, v8, a1 + 260);
        if ( v5 != 0 )
        {
          return v5;
        }
        else
        {
          if ( *(unsigned __int16 *)(a1 + 280) <= 0x3Fu )
            *(_WORD *)(a1 + 280) = 64;
          if ( *(unsigned __int16 *)(a1 + 276) > 0xFFFBu )
            *(_WORD *)(a1 + 276) = -5;
          if ( *(unsigned __int16 *)(a1 + 290) > 0x64u )
          {
            *(_WORD *)(a1 + 290) = 100;
            return 0;
          }
        }
      }
    }
  }
  return Fields;
}


//======================================================================
// sub_217EA8
// address: 0x00217EA8   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_217EA8(int a1, int *a2, int a3)
{
  int result; // r0
  int v7; // r4
  unsigned __int8 v8[80]; // [sp+4h] [bp-50h] BYREF

  j_memcpy(v8, &unk_434048, 0x4Cu);
  if ( a3 != 0 )
  {
    result = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1986553185, a2, 0);
    if ( result != 0 )
      return result;
    v7 = a1 + 300;
  }
  else
  {
    result = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1751672161, a2, 0);
    if ( result != 0 )
      return result;
    v7 = a1 + 216;
  }
  result = FT_Stream_ReadFields(a2, v8, v7);
  if ( result == 0 )
  {
    *(_DWORD *)(v7 + 36) = 0;
    *(_DWORD *)(v7 + 40) = 0;
  }
  return result;
}


//======================================================================
// sub_217F18
// address: 0x00217F18   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall sub_217F18(_DWORD *a1, int *a2, int a3)
{
  int ULong; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r2
  int v9; // r0
  int v10; // r2
  _WORD *v11; // r7
  int v12; // r7
  unsigned int v14; // [sp+Ch] [bp-10h]
  int i; // [sp+Ch] [bp-10h]
  int v16; // [sp+10h] [bp-Ch]
  _DWORD *v17; // [sp+10h] [bp-Ch]
  int v19[2]; // [sp+1Ch] [bp+0h] BYREF

  v16 = a2[7];
  ULong = (int)FT_Stream_ReadULong(a2, v19, v16);
  v6 = ULong;
  if ( v19[0] == 0 )
  {
    v14 = 2 * ULong;
    a1[6] = ULong;
    if ( a3 != 0 )
    {
      v7 = ft_mem_realloc(v16, 4, 0, ULong, 0, v19);
      v8 = v19[0];
      a1[7] = v7;
      if ( v8 != 0 )
        return v19[0];
      v14 = 4 * v6;
    }
    v9 = ft_mem_realloc(v16, 2, 0, v6, 0, v19);
    v10 = v19[0];
    a1[8] = v9;
    if ( v10 == 0 )
    {
      v19[0] = FT_Stream_EnterFrame(a2, v14);
      if ( v19[0] == 0 )
      {
        for ( i = 0; i != v6; ++i )
        {
          v11 = (_WORD *)(a1[8] + 2 * i);
          *v11 = FT_Stream_GetUShort((int)a2);
          if ( a3 != 0 )
          {
            v12 = a1[2];
            v17 = (_DWORD *)(a1[7] + 4 * i);
            *v17 = FT_Stream_GetUShort((int)a2) + v12;
          }
        }
        FT_Stream_ExitFrame(a2);
      }
    }
  }
  return v19[0];
}


//======================================================================
// sub_217FD0
// address: 0x00217FD0   size: 0x1B6 (438 bytes)
//======================================================================
int __fastcall sub_217FD0(int a1, int *a2)
{
  int v3; // r2
  int v4; // r5
  unsigned int i; // r6
  int v6; // r2
  unsigned int *v7; // r0
  int v8; // r3
  int v9; // r3
  unsigned int *v10; // r0
  int v11; // r0
  int v12; // r2
  int *v13; // r6
  int j; // r7
  int ULong; // r0
  int v16; // r3
  int v18; // [sp+8h] [bp-44h]
  int v19; // [sp+Ch] [bp-40h]
  int v21; // [sp+14h] [bp-38h]
  int v22; // [sp+18h] [bp-34h]
  int v23; // [sp+1Ch] [bp-30h]
  int Fields; // [sp+20h] [bp-2Ch] BYREF
  int v25; // [sp+24h] [bp-28h] BYREF
  unsigned int *v26; // [sp+28h] [bp-24h] BYREF
  unsigned __int16 v27; // [sp+2Ch] [bp-20h]
  int v28; // [sp+34h] [bp-18h]
  _DWORD v29[5]; // [sp+38h] [bp-14h] BYREF

  v23 = a2[7];
  v28 = FT_Stream_Pos((int)a2);
  v26 = FT_Stream_ReadULong(a2, &Fields, v3);
  if ( Fields == 0 )
  {
    Fields = FT_Stream_ReadFields(a2, byte_434094, (int)&v26);
    if ( Fields == 0 )
    {
      v21 = v28 + 12;
      v25 = FT_Stream_Seek(a2, v28 + 12);
      if ( v25 == 0 )
      {
        v4 = 0;
        v22 = 0;
        v19 = 0;
        v18 = 0;
        for ( i = 0; v27 > i; i = (unsigned __int16)(i + 1) )
        {
          v25 = FT_Stream_ReadFields(a2, byte_4340AC, (int)v29);
          if ( v25 != 0 )
            break;
          if ( v29[3] + v29[2] <= (unsigned int)a2[1] )
          {
            v18 = (unsigned __int16)(v18 + 1);
            switch ( v29[0] )
            {
              case 0x68656164:
              case 0x62686564:
                if ( v29[3] <= 0x35u )
                  goto LABEL_26;
                v25 = FT_Stream_Seek(a2, v29[2] + 12);
                if ( v25 != 0 )
                  goto LABEL_28;
                v7 = FT_Stream_ReadULong(a2, &v25, v6);
                if ( v25 != 0 )
                  goto LABEL_28;
                if ( v7 != (unsigned int *)1594834165 )
                  goto LABEL_26;
                v25 = FT_Stream_Seek(a2, 16 * (i + 1) + v21);
                if ( v25 != 0 )
                  goto LABEL_28;
                v19 = 1;
                break;
              case 0x53494E47:
                v22 = 1;
                break;
              case 0x4D455441:
                v4 = 1;
                break;
              default:
                break;
            }
          }
        }
        v27 = v18;
        v8 = 2;
        if ( v18 != 0 )
        {
          if ( v19 != 0 || v22 != 0 && v4 != 0 )
          {
            v8 = 0;
            goto LABEL_27;
          }
LABEL_26:
          v8 = 142;
        }
LABEL_27:
        v25 = v8;
      }
LABEL_28:
      Fields = v25;
      if ( v25 == 0 )
      {
        v9 = v27;
        v10 = v26;
        *(_WORD *)(a1 + 152) = v27;
        *(_DWORD *)(a1 + 148) = v10;
        v11 = ft_mem_realloc(v23, 16, 0, v9, 0, &Fields);
        v12 = Fields;
        *(_DWORD *)(a1 + 156) = v11;
        if ( v12 == 0 )
        {
          Fields = FT_Stream_Seek(a2, v28 + 12);
          if ( Fields == 0 )
          {
            Fields = FT_Stream_EnterFrame(a2, 16 * *(unsigned __int16 *)(a1 + 152));
            if ( Fields == 0 )
            {
              v13 = *(int **)(a1 + 156);
              for ( j = 0; j < v27; ++j )
              {
                *v13 = FT_Stream_GetULong((int)a2);
                v13[1] = FT_Stream_GetULong((int)a2);
                v13[2] = FT_Stream_GetULong((int)a2);
                ULong = FT_Stream_GetULong((int)a2);
                v16 = v13[2];
                v13[3] = ULong;
                if ( ULong + v16 <= (unsigned int)a2[1] )
                  v13 += 4;
              }
              FT_Stream_ExitFrame(a2);
            }
          }
        }
      }
    }
  }
  return Fields;
}


//======================================================================
// sub_2181A4
// address: 0x002181A4   size: 0x380 (896 bytes)
//======================================================================
int __fastcall sub_2181A4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int *a8, char *a9, int a10)
{
  int result; // r0
  unsigned int v12; // r6
  int v13; // r3
  int v14; // r1
  int v15; // r1
  int v16; // r2
  int v17; // r5
  int v18; // r3
  int v19; // r1
  unsigned int v20; // r1
  int v21; // r7
  int v22; // r3
  unsigned __int8 *v23; // r0
  int v24; // r5
  int v25; // r7
  _BYTE *v26; // r12
  unsigned int v27; // r3
  unsigned int v28; // r2
  unsigned int v29; // r3
  int v30; // r5
  char *v31; // r1
  int v32; // r1
  _BYTE *v33; // r4
  int v34; // r0
  int v35; // r5
  int v36; // r7
  int v37; // r6
  unsigned __int16 *i; // r6
  char v39; // [sp+1Ch] [bp-48h]
  int v40; // [sp+20h] [bp-44h]
  int v41; // [sp+20h] [bp-44h]
  int v42; // [sp+24h] [bp-40h]
  int v43; // [sp+24h] [bp-40h]
  int v45; // [sp+28h] [bp-3Ch]
  int v46; // [sp+30h] [bp-34h]
  int v47; // [sp+34h] [bp-30h]
  int v49; // [sp+38h] [bp-2Ch]
  unsigned int v50; // [sp+3Ch] [bp-28h]
  int v51; // [sp+40h] [bp-24h]
  int v52; // [sp+4Ch] [bp-18h] BYREF
  int v53; // [sp+50h] [bp-14h] BYREF
  int v54; // [sp+54h] [bp-10h] BYREF
  _BYTE v55[12]; // [sp+58h] [bp-Ch] BYREF

  v47 = a8[7];
  v52 = FT_Stream_Seek(a8, a3 + a4);
  if ( v52 != 0 )
    return v52;
  v52 = sub_217B18(a8, a2, a9);
  if ( v52 != 0 )
    return v52;
  if ( a10 == 0 )
  {
    v13 = (unsigned __int8)a9[1];
    *(_DWORD *)(a5 + 80) = v13;
    v14 = (unsigned __int8)*a9;
    *(_DWORD *)(a5 + 76) = v14;
    switch ( *(_BYTE *)(a1 + 46) )
    {
      case 1:
        *(_BYTE *)(a5 + 94) = 1;
        v13 = (v13 + 7) >> 3;
        goto LABEL_11;
      case 2:
        *(_BYTE *)(a5 + 94) = 3;
        v13 = (v13 + 3) >> 2;
        goto LABEL_11;
      case 4:
        *(_BYTE *)(a5 + 94) = 4;
        v13 = (v13 + 1) >> 1;
        goto LABEL_11;
      case 8:
        *(_BYTE *)(a5 + 94) = 2;
LABEL_11:
        *(_DWORD *)(a5 + 84) = v13;
        v15 = v14 * *(_DWORD *)(a5 + 84);
        if ( v15 != 0 )
        {
          v52 = ft_glyphslot_alloc_bitmap((_DWORD *)a5, v15);
          if ( v52 == 0 )
            break;
        }
        return v52;
      default:
        return 3;
    }
  }
  result = 3;
  v12 = (unsigned __int16)(*(_WORD *)(a2 + 6) - 1);
  if ( v12 <= 8 )
  {
    v16 = 1 << (*(_BYTE *)(a2 + 6) - 1);
    if ( (v16 & 0x73) == 0 )
    {
      if ( (v16 & 0x100) != 0 )
      {
LABEL_62:
        v35 = FT_Stream_ReadUShort(a8, &v52, v16);
        if ( v52 == 0 )
        {
          v43 = ft_mem_realloc(v47, 4, 0, v35, 0, &v52);
          if ( v52 == 0 )
          {
            v52 = FT_Stream_EnterFrame(a8, 4 * v35);
            if ( v52 == 0 )
            {
              v36 = v43;
              v37 = v35;
              while ( v37 != 0 )
              {
                *(_WORD *)v36 = FT_Stream_GetUShort((int)a8);
                *(_BYTE *)(v36 + 2) = FT_Stream_GetChar((int)a8);
                *(_BYTE *)(v36 + 3) = FT_Stream_GetChar((int)a8);
                v37 = (unsigned __int16)(v37 - 1);
                v36 += 4;
              }
              FT_Stream_ExitFrame(a8);
              for ( i = (unsigned __int16 *)v43; v35 != 0; i += 2 )
              {
                v52 = sub_215FF0(*i, (int *)a1, (unsigned __int16 **)&v53, &v54);
                if ( v52 != 0 )
                  break;
                v52 = sub_2181A4(
                        a1,
                        v53,
                        a3,
                        v54,
                        a5,
                        a6 + *((char *)i + 2),
                        a7 + *((char *)i + 3),
                        (int)a8,
                        v55,
                        a10 + 1);
                if ( v52 != 0 )
                  break;
                v35 = (unsigned __int16)(v35 - 1);
              }
            }
            ft_mem_free(v47, v43);
          }
        }
        return v52;
      }
      if ( (v16 & 0x80) == 0 )
        return result;
      v34 = FT_Stream_Skip(a8, 1);
      if ( v34 == 0 )
      {
        v52 = 0;
        goto LABEL_62;
      }
      return 83;
    }
    v17 = *(unsigned __int8 *)(a1 + 46);
    if ( a6 < 0 )
      return 6;
    v18 = (unsigned __int8)a9[1];
    result = 6;
    if ( a6 + v18 <= *(_DWORD *)(a5 + 80) && a7 >= 0 )
    {
      v19 = (unsigned __int8)*a9;
      if ( a7 + v19 <= *(_DWORD *)(a5 + 76) )
      {
        result = 3;
        if ( v12 <= 6 )
        {
          v45 = v18 * v17;
          if ( (v16 & 0x52) != 0 )
          {
            v21 = 0;
            v20 = (v19 * v45 + 7) >> 3;
          }
          else
          {
            if ( (v16 & 0x21) == 0 )
              return result;
            switch ( v17 )
            {
              case 2:
                v18 = (v18 + 3) >> 2;
                break;
              case 4:
                v18 = (v18 + 1) >> 1;
                break;
              case 1:
                v18 = (v18 + 7) >> 3;
                break;
              default:
                break;
            }
            v20 = v19 * v18;
            v21 = 1;
          }
          v49 = v21;
          result = FT_Stream_EnterFrame(a8, v20);
          if ( result == 0 )
          {
            v22 = *(_DWORD *)(a5 + 88);
            v23 = (unsigned __int8 *)a8[8];
            v24 = v17 * a6;
            v25 = *(_DWORD *)(a5 + 84);
            v42 = (unsigned __int8)*a9;
            if ( v25 < 0 )
              v22 -= (*(_DWORD *)(a5 + 76) - 1) * v25;
            v26 = (_BYTE *)(v22 + (v24 >> 3) + v25 * a7);
            v27 = (unsigned int)(v45 - 8) >> 3;
            v50 = v27 + 1;
            v28 = 0;
            v51 = v45 - 8 - 8 * v27;
            v29 = 0;
            v46 = v24 & 7;
            while ( v42 != 0 )
            {
              v30 = (unsigned __int8)(8 - v46);
              if ( v45 <= 7 )
              {
                v32 = v45;
                v33 = v26;
              }
              else
              {
                v40 = v45 - 8;
                v31 = v26;
                do
                {
                  if ( v28 <= 7 )
                  {
                    v29 = (unsigned __int16)((*v23 << (8 - v28)) | v29);
                    v28 += 8;
                    ++v23;
                  }
                  v39 = *v31;
                  if ( v46 != 0 )
                  {
                    *v31 = v39 | ((int)(v29 >> 8) >> v46);
                    v31[1] |= BYTE1(v29) << v30;
                  }
                  else
                  {
                    *v31 = BYTE1(v29) | v39;
                  }
                  ++v31;
                  v29 = (unsigned __int16)((_WORD)v29 << 8);
                  v28 -= 8;
                  v40 -= 8;
                }
                while ( v40 >= 0 );
                v32 = v51;
                v33 = &v26[v50];
              }
              if ( v32 > 0 )
              {
                if ( (int)v28 < v32 )
                {
                  v29 = (unsigned __int16)((*v23 << (8 - v28)) | v29);
                  v28 += 8;
                  ++v23;
                }
                v41 = (v29 >> 8) & ~(255 >> v32);
                *v33 |= v41 >> v46;
                if ( v32 > v30 )
                  v33[1] |= (_BYTE)v41 << v30;
                v29 = (unsigned __int16)(v29 << v32);
                v28 -= v32;
              }
              if ( v49 != 0 )
              {
                v28 = 0;
                v29 = 0;
              }
              v26 += v25;
              --v42;
            }
            FT_Stream_ExitFrame(a8);
            return 0;
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_218524
// address: 0x00218524   size: 0x228 (552 bytes)
//======================================================================
int __fastcall sub_218524(int a1, unsigned int a2, unsigned int a3, char a4, int *a5, int *a6, char *a7)
{
  int v8; // r0
  int v9; // r2
  int v10; // r6
  _BYTE *v11; // r3
  int v12; // r7
  _BYTE *v13; // r2
  _BYTE *v14; // r2
  int i; // r3
  _BYTE *v16; // r1
  unsigned __int8 *v17; // r3
  unsigned __int8 *v18; // r2
  unsigned __int8 *v19; // r12
  unsigned __int8 *v20; // r2
  int v21; // r7
  unsigned __int8 v22; // r1
  unsigned __int8 v23; // r0
  _BYTE *v24; // r3
  int v25; // r2
  _BYTE *v26; // r0
  int v28; // [sp+1Ch] [bp-28h]
  int v29; // [sp+20h] [bp-24h]
  int v30; // [sp+28h] [bp-1Ch]
  int v32; // [sp+2Ch] [bp-18h]
  int v33; // [sp+34h] [bp-10h] BYREF
  int v34; // [sp+38h] [bp-Ch] BYREF
  int v35; // [sp+3Ch] [bp-8h] BYREF

  v30 = sub_216078(a1, a3, a2, (unsigned __int16 **)&v35, (int **)&v34, &v33);
  if ( v30 == 0
    && ((*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1161970772, a5, 0) == 0
     || (v30 = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1650745716, a5, 0)) == 0) )
  {
    v8 = FT_Stream_Pos((int)a5);
    v30 = sub_2181A4(v34, v35, v8, v33, *(_DWORD *)(a1 + 84), 0, 0, a5, a7, 0);
    if ( v30 == 0 )
    {
      if ( (*(_BYTE *)(v34 + 47) & 1) != 0 )
      {
        v9 = *(char *)(v34 + 16) - *(char *)(v34 + 17);
        a7[5] = -((int)(unsigned __int8)a7[1] >> 1);
        a7[6] = (v9 - (unsigned __int8)*a7) / 2;
        a7[7] = 12 * v9 / 10;
      }
      if ( (a4 & 0x40) != 0 )
      {
        v10 = *a6;
        v29 = a6[2];
        v11 = (_BYTE *)a6[3];
        v12 = 0;
LABEL_11:
        if ( v12 < v10 )
        {
          v13 = &v11[v29];
          while ( 1 )
          {
            if ( v11 >= v13 )
            {
              ++v12;
              v11 = v13;
              goto LABEL_11;
            }
            if ( *v11 != 0 )
              break;
            ++v11;
          }
          if ( v12 != 0 )
          {
            v10 -= v12;
            j_memmove((void *)a6[3], (const void *)(a6[3] + v29 * v12), v29 * v10);
            *a7 -= v12;
            a7[3] -= v12;
            a7[6] -= v12;
            *a6 -= v12;
          }
          v14 = (_BYTE *)(a6[3] + (v10 - 1) * v29);
          for ( i = 0; i < v10; ++i )
          {
            v16 = &v14[v29];
            while ( v14 < v16 )
            {
              if ( *v14 != 0 )
                goto LABEL_23;
              ++v14;
            }
            v14 = &v16[-2 * v29];
          }
LABEL_23:
          if ( i != 0 )
          {
            v10 -= i;
            *a7 -= i;
            *a6 -= i;
          }
          v32 = v29 * v10;
          do
          {
            v17 = (unsigned __int8 *)a6[3];
            v18 = v17;
            v19 = &v17[v32];
            while ( v18 < v19 )
            {
              if ( *v18 > 0x7Fu )
                goto LABEL_45;
              v18 += v29;
            }
            while ( 1 )
            {
              v28 = a6[1];
              if ( v17 >= v19 )
                break;
              v20 = v17;
              v21 = 8;
              v22 = 2 * *v17;
              while ( v21 < v28 )
              {
                v23 = v20[1];
                v21 += 8;
                *v20 = v22 | (v23 >> 7);
                v22 = 2 * v23;
                ++v20;
              }
              *v20 = v22;
              v17 += v29;
            }
            --a6[1];
            ++a7[2];
            ++a7[5];
            --a7[1];
          }
          while ( a6[1] > 0 );
          do
          {
LABEL_45:
            v25 = a6[1] - 1;
            v24 = (_BYTE *)(a6[3] + (v25 >> 3));
            v26 = &v24[v32];
            while ( v24 < v26 )
            {
              if ( (*v24 & (unsigned __int8)(128 >> (v25 & 7))) != 0 )
                return v30;
              v24 += v29;
            }
            a6[1] = v25;
            --a7[1];
          }
          while ( a6[1] > 0 );
        }
        else
        {
          a6[1] = 0;
          *a6 = 0;
          a6[2] = 0;
          *((_BYTE *)a6 + 18) = 1;
        }
      }
    }
  }
  return v30;
}


//======================================================================
// sub_218754
// address: 0x00218754   size: 0x18A (394 bytes)
//======================================================================
int __fastcall sub_218754(int a1)
{
  int v1; // r3
  unsigned int v2; // r3
  int **j; // r3
  int result; // r0
  unsigned __int8 *v6; // [sp+8h] [bp-14Ch]
  unsigned int v7; // [sp+Ch] [bp-148h]
  int i; // [sp+10h] [bp-144h]
  unsigned __int8 *v9; // [sp+14h] [bp-140h]
  unsigned __int8 *v10; // [sp+14h] [bp-140h]
  int v11; // [sp+18h] [bp-13Ch]
  int v12; // [sp+1Ch] [bp-138h]
  int *v13; // [sp+24h] [bp-130h]
  int v14; // [sp+28h] [bp-12Ch]
  int v15; // [sp+2Ch] [bp-128h] BYREF
  int *v16[2]; // [sp+30h] [bp-124h] BYREF
  unsigned __int16 v17; // [sp+38h] [bp-11Ch]
  unsigned __int16 v18; // [sp+3Ah] [bp-11Ah]
  _DWORD v19[4]; // [sp+3Ch] [bp-118h] BYREF
  jmp_buf env; // [sp+4Ch] [bp-108h] BYREF
  int v21; // [sp+14Ch] [bp-8h]

  v6 = *(unsigned __int8 **)(a1 + 500);
  v1 = *(_DWORD *)(a1 + 504);
  if ( v6 == nullptr )
    return 8;
  v7 = (unsigned int)&v6[v1];
  result = 8;
  if ( &v6[v1] >= v6 + 4 && ((*v6 << 8) | v6[1]) == 0 )
  {
    v9 = v6 + 4;
    for ( i = (v6[2] << 8) | v6[3]; ; --i )
    {
      result = i;
      if ( i == 0 )
        break;
      if ( v7 < (unsigned int)(v9 + 8) )
        return 0;
      v10 = v9 + 2;
      v17 = _byteswap_ushort(*((_WORD *)v10 - 1));
      v10 += 2;
      v18 = _byteswap_ushort(*((_WORD *)v10 - 1));
      v9 = v10 + 4;
      v16[0] = (int *)a1;
      v16[1] = nullptr;
      v2 = _byteswap_ulong(*((_DWORD *)v9 - 1));
      if ( v2 != 0 && v2 <= *(_DWORD *)(a1 + 504) - 2 )
      {
        v11 = (int)&v6[v2];
        v12 = (v6[v2] << 8) | v6[v2 + 1];
        for ( j = (int **)&off_459B64; *j != nullptr; ++j )
        {
          v13 = *j;
          if ( (*j)[10] == v12 )
          {
            v14 = 0;
            ft_validator_init(v19, v11, v7, 0);
            v21 = *(unsigned __int16 *)(a1 + 264);
            if ( j_setjmp(env) == 0 )
              v14 = ((int (__fastcall *)(int, _DWORD *))v13[11])(v11, v19);
            if ( v19[3] == 0 && FT_CMap_New(v13, v11, v16, &v15) == 0 )
              *(_DWORD *)(v15 + 20) = v14;
            break;
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// sub_2188E4
// address: 0x002188E4   size: 0x5B0 (1456 bytes)
//======================================================================
int __fastcall sub_2188E4(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r5
  int v7; // r2
  int v9; // r1
  _DWORD *v10; // r0
  _BOOL4 v11; // r3
  int (__fastcall *v12)(int, int); // r3
  int v13; // r7
  int v14; // r0
  int v15; // r0
  int v16; // r3
  int (__fastcall *v17)(int, int); // r3
  int v18; // r0
  int v19; // r0
  int v20; // r0
  int v21; // r3
  int v22; // r0
  int v23; // r0
  int *v24; // r2
  int v25; // r3
  int v26; // r0
  int v27; // r6
  __int16 v28; // r2
  int v29; // r3
  int v30; // r2
  int i; // r2
  int v32; // r1
  _DWORD *v33; // r3
  int v34; // r0
  int v35; // r3
  int v36; // r0
  int v37; // r3
  int v38; // r6
  int v39; // r3
  int v40; // r7
  int v41; // r1
  int v42; // r3
  int v43; // r5
  _WORD *v44; // r2
  int v45; // r0
  __int16 *v46; // r3
  __int16 v47; // r0
  __int16 v48; // r1
  __int16 v49; // r0
  __int16 v50; // r1
  __int16 v51; // r3
  __int16 v52; // r2
  int v54; // [sp+8h] [bp-3Ch]
  int v55; // [sp+8h] [bp-3Ch]
  _BOOL4 v56; // [sp+Ch] [bp-38h]
  int v57; // [sp+Ch] [bp-38h]
  int v58; // [sp+10h] [bp-34h]
  int v59; // [sp+14h] [bp-30h]
  int v60; // [sp+14h] [bp-30h]
  int v61; // [sp+18h] [bp-2Ch]
  __int16 v62; // [sp+18h] [bp-2Ch]
  int v63; // [sp+20h] [bp-24h] BYREF
  _DWORD v64[8]; // [sp+24h] [bp-20h] BYREF

  v6 = *(_DWORD *)(a2 + 532);
  v7 = 0;
  v61 = 0;
  v54 = 0;
  while ( v7 < a4 )
  {
    v9 = *(_DWORD *)(a5 + 8 * v7);
    if ( v9 == 1768386662 )
    {
      v54 = 1;
    }
    else if ( v9 == 1768386675 )
    {
      v61 = 1;
    }
    ++v7;
  }
  v10 = sub_214C20(a2, 1735162214);
  v11 = true;
  if ( v10 == nullptr )
    v11 = sub_214C20(a2, 1128678944) != nullptr;
  v56 = v11;
  if ( v11 || (v12 = *(int (__fastcall **)(int, int))(v6 + 84)) == nullptr || (v13 = 1, (v63 = v12(a2, a1)) != 0) )
  {
    v13 = 0;
    v63 = (*(int (__fastcall **)(int, int))(v6 + 32))(a2, a1);
    if ( v63 != 0 )
      return v63;
  }
  if ( *(_WORD *)(a2 + 178) == 0 )
    return 8;
  (*(void (__fastcall **)(int, int))(v6 + 44))(a2, a1);
  v63 = (*(int (__fastcall **)(int, int))(v6 + 40))(a2, a1);
  v63 = (*(int (__fastcall **)(int, int))(v6 + 56))(a2, a1);
  v59 = (*(int (__fastcall **)(int, int))(v6 + 52))(a2, a1);
  v63 = v59;
  if ( v13 == 0 )
  {
    v14 = (*(int (__fastcall **)(int, int, _DWORD))(v6 + 36))(a2, a1, 0);
    v63 = v14;
    if ( v14 != 0 )
    {
      if ( v14 != 142 )
        goto LABEL_26;
      if ( *(_DWORD *)(a2 + 148) == 1953658213 )
      {
        v63 = 0;
        v56 = false;
        goto LABEL_26;
      }
      v16 = 143;
    }
    else
    {
      v15 = (*(int (__fastcall **)(int, int, _DWORD))(v6 + 136))(a2, a1, 0);
      if ( v15 != 142 )
      {
        v63 = v15;
        goto LABEL_26;
      }
      v16 = 147;
    }
    v63 = v16;
LABEL_26:
    if ( v63 != 0 )
      return v63;
    v63 = (*(int (__fastcall **)(int, int, int))(v6 + 36))(a2, a1, 1);
    if ( v63 == 0 )
    {
      v63 = (*(int (__fastcall **)(int, int, int))(v6 + 136))(a2, a1, 1);
      if ( v63 == 0 )
        *(_BYTE *)(a2 + 296) = 1;
    }
    if ( v63 != 0 && v63 != 142 )
      return v63;
    v63 = (*(int (__fastcall **)(int, int))(v6 + 48))(a2, a1);
    if ( v63 != 0 )
      *(_WORD *)(a2 + 368) = -1;
  }
  v17 = *(int (__fastcall **)(int, int))(v6 + 140);
  if ( v17 != nullptr )
  {
    v18 = v17(a2, a1);
    v63 = v18;
    if ( v18 != 0 )
    {
      if ( v18 != 142 )
        return v63;
      v63 = 0;
    }
  }
  v19 = (*(int (__fastcall **)(int, int))(v6 + 80))(a2, a1);
  v63 = v19;
  if ( v19 != 0 )
  {
    if ( v19 != 142 )
      return v63;
    *(_DWORD *)(a2 + 556) = 0;
  }
  v63 = (*(int (__fastcall **)(int, int))(v6 + 76))(a2, a1);
  v20 = (*(int (__fastcall **)(int, int))(v6 + 72))(a2, a1);
  v21 = *(unsigned __int16 *)(a2 + 264);
  v63 = v20;
  *(_DWORD *)(a2 + 16) = v21;
  *(_DWORD *)(a2 + 20) = 0;
  *(_DWORD *)(a2 + 24) = 0;
  if ( *(unsigned __int16 *)(a2 + 368) == 0xFFFF || (*(_WORD *)(a2 + 432) & 0x100) == 0 )
  {
    v63 = sub_217918(a2, 21, (int *)(a2 + 20));
    if ( v63 != 0 )
      return v63;
    if ( *(_DWORD *)(a2 + 20) == 0 && v54 == 0 )
    {
      v63 = sub_217918(a2, 16, (int *)(a2 + 20));
      if ( v63 != 0 )
        return v63;
    }
    if ( *(_DWORD *)(a2 + 20) == 0 )
    {
      v26 = sub_217918(a2, 1, (int *)(a2 + 20));
      v63 = v26;
      if ( v26 != 0 )
        return v63;
    }
    v63 = sub_217918(a2, 22, (int *)(a2 + 24));
    if ( v63 != 0 )
      return v63;
    if ( *(_DWORD *)(a2 + 24) == 0 && v61 == 0 )
    {
      v63 = sub_217918(a2, 17, (int *)(a2 + 24));
      if ( v63 != 0 )
        return v63;
    }
    if ( *(_DWORD *)(a2 + 24) == 0 )
    {
      v23 = a2;
      v24 = (int *)(a2 + 24);
LABEL_53:
      v63 = sub_217918(v23, 2, v24);
      if ( v63 != 0 )
        return v63;
    }
  }
  else
  {
    if ( v54 == 0 )
    {
      v63 = sub_217918(a2, 16, (int *)(a2 + 20));
      if ( v63 != 0 )
        return v63;
    }
    if ( *(_DWORD *)(a2 + 20) == 0 )
    {
      v22 = sub_217918(a2, 1, (int *)(a2 + 20));
      v63 = v22;
      if ( v22 != 0 )
        return v63;
    }
    if ( v61 == 0 )
    {
      v63 = sub_217918(a2, 17, (int *)(a2 + 24));
      if ( v63 != 0 )
        return v63;
    }
    if ( *(_DWORD *)(a2 + 24) == 0 )
    {
      v23 = a2;
      v24 = (int *)(a2 + 24);
      goto LABEL_53;
    }
  }
  v25 = *(_DWORD *)(a2 + 8);
  if ( v56 )
    v25 |= 1u;
  v27 = v25 | 0x18;
  if ( v59 == 0 && *(_DWORD *)(a2 + 468) != 196608 )
    v27 = v25 | 0x218;
  if ( *(_DWORD *)(a2 + 480) != 0 )
    v27 |= 4u;
  if ( *(_BYTE *)(a2 + 296) != 0 )
    v27 |= 0x20u;
  if ( *(_DWORD *)(a2 + 788) != 0 )
    v27 |= 0x40u;
  if ( sub_214C20(a2, 1735162214) != nullptr
    && sub_214C20(a2, 1719034226) != nullptr
    && sub_214C20(a2, 1735811442) != nullptr )
  {
    v27 |= 0x100u;
  }
  *(_DWORD *)(a2 + 8) = v27;
  if ( !v56 || *(unsigned __int16 *)(a2 + 368) == 0xFFFF )
  {
    v30 = 1;
    v29 = 2 * (*(_WORD *)(a2 + 204) & 1);
    if ( (*(_WORD *)(a2 + 204) & 2) != 0 )
      goto LABEL_89;
  }
  else
  {
    v28 = *(_WORD *)(a2 + 432);
    v29 = (v28 & 0x201) != 0;
    if ( (v28 & 0x20) != 0 )
    {
      v30 = 2;
LABEL_89:
      v29 |= v30;
    }
  }
  *(_DWORD *)(a2 + 12) = v29;
  sub_218754(a2);
  for ( i = 0; i < *(_DWORD *)(a2 + 36); ++i )
  {
    v32 = *(_DWORD *)(4 * i + *(_DWORD *)(a2 + 40));
    v33 = &unk_4340C4;
    do
    {
      if ( *v33 == *(unsigned __int16 *)(v32 + 8) )
      {
        v34 = v33[1];
        if ( v34 == *(unsigned __int16 *)(v32 + 10) || v34 == -1 )
        {
          v35 = v33[2];
          goto LABEL_99;
        }
      }
      v33 += 3;
    }
    while ( v33 < dword_434148 );
    v35 = 0;
LABEL_99:
    *(_DWORD *)(v32 + 4) = v35;
  }
  v60 = *(_DWORD *)(a2 + 612);
  if ( v60 != 0 )
  {
    v57 = *(unsigned __int16 *)(a2 + 178);
    v62 = *(_WORD *)(a2 + 370);
    if ( *(_WORD *)(a2 + 178) == 0 || *(unsigned __int16 *)(a2 + 368) == 0xFFFF )
    {
      v62 = 0;
      v57 = 1;
    }
    v36 = ft_mem_realloc(*(_DWORD *)(*(_DWORD *)(a2 + 104) + 28), 16, 0, v60, 0, &v63);
    v37 = v63;
    *(_DWORD *)(a2 + 32) = v36;
    if ( v37 == 0 )
    {
      v55 = 0;
      while ( 1 )
      {
        v38 = *(_DWORD *)(a2 + 32) + 16 * v55;
        v63 = (*(int (__fastcall **)(int, int, _DWORD *))(v6 + 152))(a2, v55, v64);
        if ( v63 != 0 )
          break;
        *(_WORD *)v38 = v64[5] >> 6;
        v58 = LOWORD(v64[0]);
        *(_WORD *)(v38 + 2) = (int)(v62 * LOWORD(v64[0]) + ((unsigned int)v57 >> 1)) / v57;
        *(_DWORD *)(v38 + 8) = v58 << 6;
        v39 = HIWORD(v64[0]) << 6;
        v40 = v55 + 1;
        *(_DWORD *)(v38 + 12) = v39;
        *(_DWORD *)(v38 + 4) = v39;
        v55 = v40;
        if ( v40 == v60 )
        {
          v41 = *(_DWORD *)(a2 + 8);
          *(_DWORD *)(a2 + 28) = v40;
          *(_DWORD *)(a2 + 8) = v41 | 2;
          goto LABEL_109;
        }
      }
    }
  }
  else
  {
LABEL_109:
    v42 = *(_DWORD *)(a2 + 8);
    if ( v42 << 30 == 0 )
      *(_DWORD *)(a2 + 8) = v42 | 1;
    if ( (*(_DWORD *)(a2 + 8) & 1) != 0 )
    {
      *(_DWORD *)(a2 + 52) = *(__int16 *)(a2 + 196);
      *(_DWORD *)(a2 + 56) = *(__int16 *)(a2 + 198);
      *(_DWORD *)(a2 + 60) = *(__int16 *)(a2 + 200);
      *(_DWORD *)(a2 + 64) = *(__int16 *)(a2 + 202);
      *(_WORD *)(a2 + 68) = *(_WORD *)(a2 + 178);
      v43 = *(unsigned __int16 *)(a2 + 220);
      v44 = (_WORD *)(a2 + 72);
      *(_WORD *)(a2 + 70) = v43;
      v45 = *(unsigned __int16 *)(a2 + 222);
      *(_WORD *)(a2 + 72) = v45;
      v46 = (__int16 *)(a2 + 74);
      *(_WORD *)(a2 + 74) = v43 + *(_WORD *)(a2 + 224) - v45;
      if ( v43 == 0 && v45 == 0 && *(unsigned __int16 *)(a2 + 368) != 0xFFFF )
      {
        v47 = *(_WORD *)(a2 + 438);
        if ( v47 != 0 || *(_WORD *)(a2 + 440) != 0 )
        {
          *(_WORD *)(a2 + 70) = v47;
          v48 = *(_WORD *)(a2 + 440);
          *v44 = v48;
          *v46 = v47 + *(_WORD *)(a2 + 442) - v48;
        }
        else
        {
          v49 = *(_WORD *)(a2 + 444);
          *(_WORD *)(a2 + 70) = v49;
          v50 = *(_WORD *)(a2 + 446);
          *v44 = -v50;
          *v46 = v50 + v49;
        }
      }
      *(_WORD *)(a2 + 76) = *(_WORD *)(a2 + 226);
      if ( *(_BYTE *)(a2 + 296) != 0 )
        v51 = *(_WORD *)(a2 + 310);
      else
        v51 = *v46;
      *(_WORD *)(a2 + 78) = v51;
      v52 = *(_WORD *)(a2 + 478);
      *(_WORD *)(a2 + 80) = *(_WORD *)(a2 + 476) - v52 / 2;
      *(_WORD *)(a2 + 82) = v52;
    }
  }
  return v63;
}


//======================================================================
// sub_218EB0
// address: 0x00218EB0   size: 0x19E (414 bytes)
//======================================================================
int __fastcall sub_218EB0(int *a1, _DWORD *a2, int a3)
{
  _DWORD *Module_Interface; // r0
  int v6; // r2
  unsigned int *ULong; // r0
  int Fields; // r0
  unsigned int v9; // r3
  int v10; // r0
  int v11; // r5
  _DWORD *v12; // r0
  int v13; // r5
  int v14; // r6
  int v15; // r1
  int v17; // [sp+10h] [bp-1Ch]
  int *v18; // [sp+10h] [bp-1Ch]
  _DWORD *v19; // [sp+14h] [bp-18h]
  int v20; // [sp+18h] [bp-14h]
  int v22[2]; // [sp+24h] [bp-8h] BYREF

  v19 = (_DWORD *)a2[133];
  if ( v19 == nullptr )
  {
    Module_Interface = (_DWORD *)FT_Get_Module_Interface(*(_DWORD *)(a2[24] + 4), "sfnt");
    v19 = Module_Interface;
    if ( Module_Interface == nullptr )
      return 11;
    a2[133] = Module_Interface;
    a2[127] = *Module_Interface;
  }
  a2[134] = ft_module_get_service((_DWORD *)a2[24]);
  v17 = a1[7];
  a2[33] = 0;
  a2[34] = 0;
  a2[35] = 0;
  v20 = FT_Stream_Pos((int)a1);
  ULong = FT_Stream_ReadULong(a1, v22, v6);
  v15 = v22[0];
  if ( v22[0] != 0 )
    goto LABEL_25;
  if ( ULong != &stru_FFF8.st_size
    && ULong != (unsigned int *)1953784678
    && ULong != (unsigned int *)1330926671
    && ULong != (unsigned int *)1953658213
    && ULong != (unsigned int *)1954115633 )
  {
    v15 = 2;
    if ( ULong != &stru_1FFF8.st_size )
      return v15;
  }
  a2[33] = 1953784678;
  if ( ULong == (unsigned int *)1953784678 )
  {
    Fields = FT_Stream_ReadFields(a1, (unsigned __int8 *)dword_434148, (int)(a2 + 33));
    v22[0] = Fields;
    if ( Fields != 0 )
    {
      v15 = Fields;
      goto LABEL_25;
    }
    v9 = a2[35];
    v15 = 8;
    if ( v9 == 0 )
      return v15;
    v15 = 10;
    if ( v9 > (unsigned int)a1[1] >> 5 )
      return v15;
    v10 = ft_mem_realloc(v17, 4, 0, v9, 0, v22);
    v15 = v22[0];
    a2[36] = v10;
    if ( v15 != 0 )
      goto LABEL_25;
    v22[0] = FT_Stream_EnterFrame(a1, 4 * a2[35]);
    v15 = v22[0];
    v11 = v22[0];
    if ( v22[0] != 0 )
      goto LABEL_25;
    while ( v11 < a2[35] )
    {
      v18 = (int *)(a2[36] + 4 * v11++);
      *v18 = FT_Stream_GetULong((int)a1);
    }
    FT_Stream_ExitFrame(a1);
    goto LABEL_23;
  }
  a2[34] = 0x10000;
  a2[35] = 1;
  v12 = ft_mem_alloc(v17, 4, v22);
  v15 = v22[0];
  a2[36] = v12;
  if ( v15 == 0 )
  {
    *v12 = v20;
LABEL_23:
    v15 = v22[0];
  }
LABEL_25:
  if ( v15 == 0 )
  {
    v13 = (~a3 >> 31) & a3;
    v15 = 6;
    if ( v13 < a2[35] )
    {
      v15 = FT_Stream_Seek(a1, *(_DWORD *)(4 * v13 + a2[36]));
      if ( v15 == 0 )
      {
        v15 = ((int (__fastcall *)(_DWORD *, int *))v19[33])(a2, a1);
        if ( v15 == 0 )
        {
          v14 = a2[35];
          a2[1] = v13;
          *a2 = v14;
        }
      }
    }
  }
  return v15;
}


//======================================================================
// sub_21906C
// address: 0x0021906C   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_21906C(int a1, unsigned int a2, _DWORD *a3, _DWORD *a4, _DWORD *a5)
{
  unsigned __int16 *v5; // r4
  unsigned int v6; // r6
  int v7; // r4
  _DWORD *v8; // r0
  int v9; // r1

  if ( a4 == nullptr || a5 == nullptr )
    return 6;
  v5 = (unsigned __int16 *)(a1 + 152);
  if ( a3 == nullptr )
  {
    *a5 = *v5;
    return 0;
  }
  v6 = *v5;
  v7 = 142;
  if ( a2 < v6 )
  {
    v8 = (_DWORD *)(a1 + 156);
    v9 = 16 * a2;
    *a3 = *(_DWORD *)(*v8 + v9);
    *a4 = *(_DWORD *)(*v8 + v9 + 8);
    *a5 = *(_DWORD *)(*v8 + v9 + 12);
    return 0;
  }
  return v7;
}


//======================================================================
// sub_2190B2
// address: 0x002190B2   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_2190B2(int a1, unsigned int a2, int a3)
{
  unsigned int v4; // r4
  int result; // r0
  int v6; // r1
  int v7; // r0
  int v8; // r3
  int v9; // r3
  int v10; // r5
  int v11; // r4

  v4 = *(_DWORD *)(a1 + 612);
  result = 6;
  if ( a2 < v4 )
  {
    v6 = *(_DWORD *)(a1 + 616) + 48 * a2;
    *(_WORD *)a3 = *(unsigned __int8 *)(v6 + 44);
    *(_WORD *)(a3 + 2) = *(unsigned __int8 *)(v6 + 45);
    v7 = *(char *)(v6 + 16) << 6;
    *(_DWORD *)(a3 + 12) = v7;
    v8 = *(char *)(v6 + 17) << 6;
    *(_DWORD *)(a3 + 16) = v8;
    v9 = v7 - v8;
    v10 = *(char *)(v6 + 22) + *(unsigned __int8 *)(v6 + 18);
    v11 = *(char *)(v6 + 23);
    *(_DWORD *)(a3 + 20) = v9;
    *(_DWORD *)(a3 + 24) = (v10 + v11) << 6;
    return 0;
  }
  return result;
}


//======================================================================
// sub_219108
// address: 0x00219108   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_219108(unsigned __int8 *a1, _DWORD *a2)
{
  unsigned int v2; // r3
  unsigned __int8 *v3; // r6

  v2 = (a1[2] << 8) | a1[3];
  if ( a2[1] < (unsigned int)&a1[v2] || v2 <= 0x105 )
    ft_validator_error((int)a2, 8);
  if ( a2[2] != 0 )
  {
    v3 = a1 + 6;
    do
    {
      if ( (unsigned int)*v3 >= a2[68] )
        ft_validator_error((int)a2, 16);
      ++v3;
    }
    while ( v3 != a1 + 262 );
  }
  return 0;
}


//======================================================================
// sub_219158
// address: 0x00219158   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_219158(int a1, int *a2)
{
  int result; // r0

  result = (*(int (__fastcall **)(int, int, int *, int))(a1 + 508))(a1, 1668112752, a2, a1 + 504);
  if ( result == 0 )
  {
    result = FT_Stream_ExtractFrame(a2, *(_DWORD *)(a1 + 504), (_DWORD *)(a1 + 500));
    if ( result != 0 )
      *(_DWORD *)(a1 + 504) = 0;
  }
  return result;
}


//======================================================================
// sub_219194
// address: 0x00219194   size: 0x2BE (702 bytes)
//======================================================================
int __fastcall sub_219194(int a1)
{
  int *v1; // r4
  int v2; // r7
  int v3; // r6
  int v4; // r5
  int v5; // r2
  int UShort; // r0
  int v7; // r5
  __int16 v8; // r0
  int v9; // r3
  int v10; // r3
  int v11; // r0
  unsigned int v12; // r5
  int v13; // r2
  signed int Char; // r6
  int *v15; // r5
  int i; // r4
  void *v17; // r1
  int v18; // r3
  _BYTE *v19; // r0
  int v20; // r0
  int v21; // r1
  int v22; // r0
  signed int v23; // r5
  char *v24; // r6
  int v25; // r0
  signed int v26; // r3
  int v27; // r2
  int v29; // [sp+8h] [bp-2Ch]
  int v30; // [sp+8h] [bp-2Ch]
  int v32; // [sp+10h] [bp-24h]
  int v33; // [sp+14h] [bp-20h]
  int v34; // [sp+18h] [bp-1Ch]
  int v35; // [sp+18h] [bp-1Ch]
  int v36; // [sp+1Ch] [bp-18h]
  int v37; // [sp+20h] [bp-14h]
  int *v38; // [sp+24h] [bp-10h]
  int v39; // [sp+28h] [bp-Ch] BYREF
  int v40[2]; // [sp+2Ch] [bp-8h] BYREF

  v1 = *(int **)(a1 + 104);
  v2 = (*(int (__fastcall **)(int, int, int *, int *))(a1 + 508))(a1, 1886352244, v1, &v39);
  if ( v2 == 0 )
  {
    v3 = FT_Stream_Pos((int)v1);
    v34 = v39;
    v4 = *(_DWORD *)(a1 + 468);
    v2 = FT_Stream_Skip(v1, 32);
    if ( v2 == 0 )
    {
      if ( v4 == 0x20000 )
      {
        v32 = v1[7];
        UShort = FT_Stream_ReadUShort(v1, v40, v32);
        v33 = UShort;
        if ( v40[0] == 0 )
        {
          if ( UShort <= *(unsigned __int16 *)(a1 + 264) )
          {
            v37 = ft_mem_realloc(v32, 2, 0, UShort, 0, v40);
            if ( v40[0] != 0 || (v7 = 0, v40[0] = FT_Stream_EnterFrame(v1, 2 * v33), v40[0] != 0) )
            {
              ft_mem_free(v32, 0);
            }
            else
            {
              while ( v7 < v33 )
              {
                v8 = FT_Stream_GetUShort((int)v1);
                v9 = 2 * v7++;
                *(_WORD *)(v37 + v9) = v8;
              }
              FT_Stream_ExitFrame(v1);
              v10 = 0;
              v29 = 0;
              while ( v10 < v33 )
              {
                if ( *(unsigned __int16 *)(v37 + 2 * v10) > 0x101u && *(unsigned __int16 *)(v37 + 2 * v10) - 257 > v29 )
                  v29 = (unsigned __int16)(*(_WORD *)(v37 + 2 * v10) - 257);
                ++v10;
              }
              v11 = ft_mem_realloc(v32, 4, 0, v29, 0, v40);
              v12 = v40[0];
              v36 = v11;
              if ( v40[0] == 0 )
              {
                v38 = (int *)v11;
                v35 = v3 + v34;
                while ( 1 )
                {
                  if ( v12 == v29 )
                    goto LABEL_35;
                  if ( FT_Stream_Pos((int)v1) >= v35 )
                  {
                    if ( v12 < v29 )
                    {
                      while ( v12 != v29 )
                      {
                        v19 = (_BYTE *)ft_mem_realloc(v32, 1, 0, 1, 0, v40);
                        *(_DWORD *)(v36 + 4 * v12) = v19;
                        if ( v40[0] != 0 )
                          goto LABEL_24;
                        *v19 = 0;
                        v12 = (unsigned __int16)(v12 + 1);
                      }
                    }
LABEL_35:
                    *(_WORD *)(a1 + 632) = v33;
                    *(_WORD *)(a1 + 634) = v29;
                    *(_DWORD *)(a1 + 636) = v37;
                    *(_DWORD *)(a1 + 640) = v36;
                    goto LABEL_57;
                  }
                  Char = (unsigned __int8)FT_Stream_ReadChar(v1, v40, v13);
                  if ( v40[0] != 0 )
                    break;
                  if ( Char > v35 || FT_Stream_Pos((int)v1) > v35 - Char )
                  {
                    Char = 0;
                    if ( v35 - FT_Stream_Pos((int)v1) >= 0 )
                      Char = v35 - FT_Stream_Pos((int)v1);
                  }
                  v17 = (void *)ft_mem_realloc(v32, 1, 0, Char + 1, 0, v40);
                  *v38 = (int)v17;
                  if ( v40[0] != 0 )
                    break;
                  v40[0] = FT_Stream_Read(v1, v17, Char);
                  if ( v40[0] != 0 )
                    break;
                  v18 = *v38;
                  v12 = (unsigned __int16)(v12 + 1);
                  ++v38;
                  *(_BYTE *)(v18 + Char) = 0;
                }
LABEL_24:
                v15 = (int *)v36;
                for ( i = 0; i != v29; i = (unsigned __int16)(i + 1) )
                {
                  ft_mem_free(v32, *v15);
                  *v15++ = 0;
                }
              }
              ft_mem_free(v32, v36);
            }
            v20 = v32;
            v21 = v37;
LABEL_54:
            ft_mem_free(v20, v21);
            goto LABEL_55;
          }
LABEL_44:
          v40[0] = 3;
        }
      }
      else
      {
        if ( v4 != 163840 )
        {
          v2 = 3;
          goto LABEL_57;
        }
        v30 = v1[7];
        v22 = FT_Stream_ReadUShort(v1, v40, v5);
        v23 = v22;
        if ( v40[0] == 0 )
        {
          if ( v22 <= *(unsigned __int16 *)(a1 + 264) && v22 <= 258 )
          {
            v24 = (char *)ft_mem_realloc(v30, 1, 0, v22, 0, v40);
            if ( v40[0] == 0 )
            {
              v25 = FT_Stream_Read(v1, v24, v23);
              v26 = 0;
              v40[0] = v25;
              if ( v25 == 0 )
              {
                while ( v26 < v23 )
                {
                  v27 = v26 + v24[v26];
                  if ( v27 < 0 || v27 > v23 )
                  {
                    v40[0] = 3;
                    goto LABEL_53;
                  }
                  ++v26;
                }
                *(_WORD *)(a1 + 632) = v23;
                *(_DWORD *)(a1 + 636) = v24;
                goto LABEL_57;
              }
            }
LABEL_53:
            v20 = v30;
            v21 = (int)v24;
            goto LABEL_54;
          }
          goto LABEL_44;
        }
      }
LABEL_55:
      v2 = v40[0];
LABEL_57:
      *(_BYTE *)(a1 + 628) = 1;
    }
  }
  return v2;
}


//======================================================================
// sub_219458
// address: 0x00219458   size: 0xD6 (214 bytes)
//======================================================================
int __fastcall sub_219458(int a1, unsigned int a2, int *a3)
{
  unsigned int v6; // r3
  int result; // r0
  int v8; // r7
  int v9; // r3
  int v10; // r0
  int v11; // r4
  unsigned int v12; // r0

  if ( a1 == 0 )
    return 35;
  v6 = *(unsigned __int16 *)(a1 + 264);
  result = 16;
  if ( a2 < v6 )
  {
    v8 = *(_DWORD *)(a1 + 536);
    result = 7;
    if ( v8 != 0 )
    {
      *a3 = (*(int (__fastcall **)(_DWORD))(v8 + 16))(0);
      v9 = *(_DWORD *)(a1 + 468);
      if ( v9 == 0x10000 )
      {
        if ( a2 > 0x101 )
          return 0;
        v10 = (*(int (__fastcall **)(unsigned int))(v8 + 16))(a2);
LABEL_22:
        *a3 = v10;
        return 0;
      }
      if ( v9 == 0x20000 )
      {
        if ( *(_BYTE *)(a1 + 628) == 0 && sub_219194(a1) != 0 || a2 >= *(unsigned __int16 *)(a1 + 632) )
          return 0;
        v11 = a1 + 632;
        v12 = *(unsigned __int16 *)(2 * a2 + *(_DWORD *)(v11 + 4));
        if ( v12 > 0x101 )
        {
          v10 = *(_DWORD *)(4 * (v12 + 1073741566) + *(_DWORD *)(v11 + 8));
          goto LABEL_22;
        }
      }
      else
      {
        if ( v9 != 163840 || *(_BYTE *)(a1 + 628) == 0 && sub_219194(a1) != 0 || a2 >= *(unsigned __int16 *)(a1 + 632) )
          return 0;
        v12 = *(char *)(*(_DWORD *)(a1 + 636) + a2) + a2;
      }
      v10 = (*(int (__fastcall **)(unsigned int))(v8 + 16))(v12);
      goto LABEL_22;
    }
  }
  return result;
}


//======================================================================
// sub_219534
// address: 0x00219534   size: 0x38 (56 bytes)
//======================================================================
unsigned int __fastcall sub_219534(int a1, char *a2, char *a3)
{
  int v3; // r5
  unsigned int v4; // r4
  char *v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v3 = *(_DWORD *)(a1 + 16);
  v4 = 0;
  if ( v3 >= 0 )
  {
    while ( v4 != v3 )
    {
      if ( sub_219458(a1, v4, (int *)v8) == 0 && j_strcmp(a2, v8[0]) == 0 )
        return v4;
      ++v4;
    }
  }
  return 0;
}


//======================================================================
// sub_21956C
// address: 0x0021956C   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_21956C(int a1, _BYTE *a2, _BYTE *a3, int a4)
{
  int v6; // r4
  _BYTE *v8; // [sp+4h] [bp-4h] BYREF

  v8 = a2;
  v6 = sub_219458(a1, (unsigned int)a2, (int *)&v8);
  if ( v6 == 0 )
    ft_mem_strcpyn(a3, v8, a4);
  return v6;
}


//======================================================================
// sub_21958C
// address: 0x0021958C   size: 0x184 (388 bytes)
//======================================================================
_BYTE *__fastcall sub_21958C(int a1)
{
  _BYTE *result; // r0
  int v2; // r2
  int v3; // r1
  int i; // r4
  int v5; // r3
  int v6; // r7
  int v7; // r5
  unsigned int v8; // r0
  _BYTE *v9; // r4
  int *v10; // r6
  int v11; // r1
  _BYTE *v12; // r1
  unsigned int v13; // r2
  _BYTE *v14; // r3
  int v15; // r6
  int v16; // r5
  unsigned int v17; // r2
  _DWORD *v18; // r7
  int v19; // r1
  unsigned int v20; // [sp+0h] [bp-14h]
  unsigned int v21; // [sp+0h] [bp-14h]
  int v23[2]; // [sp+Ch] [bp-8h] BYREF

  result = *(_BYTE **)(a1 + 704);
  if ( result == nullptr )
  {
    v2 = -1;
    v3 = -1;
    for ( i = 0; i < *(unsigned __int16 *)(a1 + 344); ++i )
    {
      v5 = *(_DWORD *)(a1 + 360) + 20 * i;
      if ( *(_WORD *)(v5 + 6) == 6 && *(_WORD *)(v5 + 8) != 0 )
      {
        if ( *(_DWORD *)v5 == 65539 )
        {
          if ( *(_WORD *)(v5 + 4) == 1033 )
            v3 = i;
        }
        else if ( *(_DWORD *)v5 == 1 && *(_WORD *)(v5 + 4) == 0 )
        {
          v2 = i;
        }
      }
    }
    if ( v3 == -1 )
    {
      v9 = nullptr;
      if ( v2 != -1 )
      {
        v15 = *(_DWORD *)(a1 + 100);
        v16 = *(_DWORD *)(a1 + 360) + 20 * v2;
        v17 = *(unsigned __int16 *)(v16 + 8);
        v23[0] = 0;
        v21 = v17;
        v9 = ft_mem_alloc(v15, v17 + 1, v23);
        if ( v23[0] == 0 )
        {
          v18 = *(_DWORD **)(a1 + 364);
          v23[0] = FT_Stream_Seek(v18, *(_DWORD *)(v16 + 12));
          if ( v23[0] != 0 || (v23[0] = FT_Stream_Read(v18, v9, v21), v23[0] != 0) )
          {
            v19 = *(_DWORD *)(v16 + 16);
            *(_DWORD *)(v16 + 12) = 0;
            *(_WORD *)(v16 + 8) = 0;
            ft_mem_free(v15, v19);
            *(_DWORD *)(v16 + 16) = 0;
            ft_mem_free(v15, (int)v9);
            v9 = nullptr;
          }
          else
          {
            v9[v21] = 0;
          }
        }
      }
    }
    else
    {
      v6 = *(_DWORD *)(a1 + 100);
      v7 = *(_DWORD *)(a1 + 360) + 20 * v3;
      v8 = *(unsigned __int16 *)(v7 + 8);
      v23[0] = 0;
      v20 = v8;
      v9 = ft_mem_alloc(v6, v8 + 1, v23);
      if ( v23[0] == 0 )
      {
        v10 = *(int **)(a1 + 364);
        v23[0] = FT_Stream_Seek(v10, *(_DWORD *)(v7 + 12));
        if ( v23[0] != 0 || (v23[0] = FT_Stream_EnterFrame(v10, *(unsigned __int16 *)(v7 + 8)), v23[0] != 0) )
        {
          v11 = (int)v9;
          v9 = nullptr;
          ft_mem_free(v6, v11);
          *(_WORD *)(v7 + 8) = 0;
          *(_DWORD *)(v7 + 12) = 0;
          ft_mem_free(v6, *(_DWORD *)(v7 + 16));
          *(_DWORD *)(v7 + 16) = 0;
        }
        else
        {
          v12 = (_BYTE *)v10[8];
          v13 = v20 >> 1;
          v14 = v9;
          while ( v13 != 0 )
          {
            if ( *v12 == 0 && (unsigned int)(unsigned __int8)v12[1] - 32 <= 0x5F )
              *v14++ = v12[1];
            --v13;
            v12 += 2;
          }
          *v14 = 0;
          FT_Stream_ExitFrame(v10);
        }
      }
    }
    *(_DWORD *)(a1 + 704) = v9;
    return v9;
  }
  return result;
}


//======================================================================
// sub_219718
// address: 0x00219718   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_219718(int a1, int *a2, int a3)
{
  int result; // r0

  result = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, a3, a2, 0);
  if ( result == 0 )
    return FT_Stream_ReadFields(a2, byte_434158, a1 + 160);
  return result;
}


//======================================================================
// sub_219748
// address: 0x00219748   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_219748(int a1, int *a2)
{
  return sub_219718(a1, a2, 1651008868);
}


//======================================================================
// sub_219758
// address: 0x00219758   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_219758(int a1, int *a2)
{
  return sub_219718(a1, a2, 1751474532);
}


//======================================================================
// sub_219768
// address: 0x00219768   size: 0x30 (48 bytes)
//======================================================================
bool __fastcall sub_219768(int a1, int *a2, int a3)
{
  unsigned int *ULong; // r0
  int v6; // r3
  _DWORD v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = a2;
  v8[1] = a3;
  ULong = FT_Stream_ReadULong(a2, v8, a3);
  v6 = v8[0];
  *(_DWORD *)(a1 + 12) = ULong;
  if ( v6 == 0 )
    return FT_Stream_ReadFields(a2, byte_433E5C, a1 + 16) != 0;
  return v6;
}


//======================================================================
// sub_21979C
// address: 0x0021979C   size: 0x2F6 (758 bytes)
//======================================================================
int __fastcall sub_21979C(int a1, int *a2)
{
  int v2; // r7
  int ULong; // r7
  int v6; // r0
  int v7; // r2
  int v8; // r5
  unsigned int i; // r7
  int *j; // r7
  unsigned __int16 *v11; // r4
  int v12; // r5
  int v13; // r0
  int v14; // r4
  int v15; // r2
  int v16; // r1
  int v17; // r3
  unsigned int v18; // r0
  unsigned int v19; // r2
  int v20; // r5
  int k; // r5
  int UShort; // r0
  int v23; // r0
  _DWORD *v24; // r0
  int *v25; // r1
  _BOOL4 v26; // r2
  int v28; // [sp+10h] [bp-2Ch]
  int v29; // [sp+10h] [bp-2Ch]
  unsigned int v30; // [sp+14h] [bp-28h]
  _BOOL4 v31; // [sp+18h] [bp-24h]
  unsigned int v32; // [sp+1Ch] [bp-20h]
  _DWORD *v33; // [sp+1Ch] [bp-20h]
  int v34; // [sp+20h] [bp-1Ch]
  int v35; // [sp+20h] [bp-1Ch]
  unsigned int v36; // [sp+24h] [bp-18h]
  int v37; // [sp+28h] [bp-14h]
  int v38; // [sp+2Ch] [bp-10h]
  int Fields; // [sp+30h] [bp-Ch] BYREF
  int v40; // [sp+34h] [bp-8h] BYREF

  v2 = a2[7];
  *(_DWORD *)(a1 + 612) = 0;
  v37 = v2;
  Fields = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1161972803, a2, 0);
  if ( Fields != 0 )
    Fields = (*(int (__fastcall **)(int, int, int *, _DWORD))(a1 + 508))(a1, 1651273571, a2, 0);
  if ( Fields == 0 )
  {
    v38 = FT_Stream_Pos((int)a2);
    Fields = FT_Stream_EnterFrame(a2, 8u);
    if ( Fields == 0 )
    {
      ULong = FT_Stream_GetULong((int)a2);
      v30 = FT_Stream_GetULong((int)a2);
      FT_Stream_ExitFrame(a2);
      if ( ULong == 0x20000 && v30 <= 0xFFFF )
      {
        v6 = ft_mem_realloc(v37, 48, 0, v30, 0, &Fields);
        v7 = Fields;
        v8 = v6;
        *(_DWORD *)(a1 + 616) = v6;
        if ( v7 == 0 )
        {
          *(_DWORD *)(a1 + 612) = v30;
          Fields = FT_Stream_EnterFrame(a2, 48 * v30);
          if ( Fields == 0 )
          {
            for ( i = v30; i != 0; --i )
            {
              Fields = FT_Stream_ReadFields(a2, byte_4341AC, v8);
              if ( Fields != 0 )
                break;
              Fields = FT_Stream_ReadFields(a2, byte_4341C0, v8 + 16);
              if ( Fields != 0 )
                break;
              Fields = FT_Stream_ReadFields(a2, byte_4341C0, v8 + 28);
              if ( Fields != 0 )
                break;
              Fields = FT_Stream_ReadFields(a2, byte_4341F4, v8);
              if ( Fields != 0 )
                break;
              v8 += 48;
            }
            FT_Stream_ExitFrame(a2);
            for ( j = *(int **)(a1 + 616); v30 != 0; j += 12 )
            {
              v12 = *j;
              Fields = FT_Stream_Seek(a2, v38 + j[2]);
              if ( Fields != 0 )
                break;
              Fields = FT_Stream_EnterFrame(a2, 8 * *j);
              if ( Fields != 0 )
                break;
              v13 = ft_mem_realloc(v37, 40, 0, *j, 0, &Fields);
              j[1] = v13;
              v14 = v13;
              if ( Fields != 0 )
                break;
              while ( v12 != 0 )
              {
                *(_WORD *)v14 = FT_Stream_GetUShort((int)a2);
                *(_WORD *)(v14 + 2) = FT_Stream_GetUShort((int)a2);
                --v12;
                v29 = v38 + j[2];
                *(_DWORD *)(v14 + 36) = v29 + FT_Stream_GetULong((int)a2);
                v14 += 40;
              }
              FT_Stream_ExitFrame(a2);
              v11 = (unsigned __int16 *)j[1];
              v28 = *j;
              while ( v28 != 0 )
              {
                Fields = FT_Stream_Seek(a2, *((_DWORD *)v11 + 9));
                if ( Fields != 0 )
                  return Fields;
                Fields = FT_Stream_EnterFrame(a2, 8u);
                if ( Fields != 0 )
                  return Fields;
                v11[2] = FT_Stream_GetUShort((int)a2);
                v11[3] = FT_Stream_GetUShort((int)a2);
                *((_DWORD *)v11 + 2) = FT_Stream_GetULong((int)a2);
                FT_Stream_ExitFrame(a2);
                v16 = a2[7];
                v17 = v11[2] - 1;
                switch ( v11[2] )
                {
                  case 1u:
                  case 3u:
                    v18 = v11[1];
                    v19 = *v11;
                    if ( v18 < v19 )
                      goto LABEL_48;
                    v31 = v11[2] == 1;
                    v32 = v18 - v19;
                    *((_DWORD *)v11 + 6) = v18 - v19 + 1;
                    v34 = v18 - v19 + 2;
                    v20 = 2;
                    if ( v17 == 0 )
                      v20 = 4;
                    *((_DWORD *)v11 + 7) = ft_mem_realloc(v16, 4, 0, v34, 0, &v40);
                    if ( v40 == 0 )
                    {
                      v40 = FT_Stream_EnterFrame(a2, v34 * v20);
                      if ( v40 == 0 )
                      {
                        v36 = v32 + 3;
                        for ( k = 1; k != v36; ++k )
                        {
                          v33 = (_DWORD *)(*((_DWORD *)v11 + 7) + 4 * (k + 0x3FFFFFFF));
                          v35 = *((_DWORD *)v11 + 2);
                          if ( v31 )
                            UShort = FT_Stream_GetULong((int)a2);
                          else
                            UShort = FT_Stream_GetUShort((int)a2);
                          *v33 = UShort + v35;
                        }
                        FT_Stream_ExitFrame(a2);
                      }
                    }
                    goto LABEL_49;
                  case 2u:
                    v23 = sub_219768((int)v11, a2, v15);
                    goto LABEL_47;
                  case 4u:
                    v24 = v11;
                    v25 = a2;
                    v26 = true;
                    goto LABEL_46;
                  case 5u:
                    v26 = sub_219768((int)v11, a2, v15);
                    v40 = v26;
                    if ( !v26 )
                    {
                      v24 = v11;
                      v25 = a2;
LABEL_46:
                      v23 = sub_217F18(v24, v25, v26);
LABEL_47:
                      v40 = v23;
                    }
LABEL_49:
                    Fields = v40;
                    if ( v40 != 0 )
                      return Fields;
                    v11 += 20;
                    --v28;
                    break;
                  default:
LABEL_48:
                    v40 = 3;
                    goto LABEL_49;
                }
              }
              --v30;
            }
          }
        }
      }
      else
      {
        return 3;
      }
    }
  }
  return Fields;
}


//======================================================================
// sub_219AAC
// address: 0x00219AAC   size: 0xEA (234 bytes)
//======================================================================
int __fastcall sub_219AAC(_DWORD *a1, int a2, int a3, int a4, __int16 a5)
{
  int v6; // r5
  int result; // r0
  int v8; // r1
  _DWORD *v9; // r3
  void (*v10)(void); // r12
  int v11; // [sp+4h] [bp-10h]
  int v12; // [sp+8h] [bp-Ch]
  int v13; // [sp+Ch] [bp-8h]

  v6 = ((a4 >> 9) + (a4 >> 31)) ^ (a4 >> 31);
  if ( (a1[249] & 2) == 0 )
  {
    if ( v6 <= 255 )
      goto LABEL_8;
    goto LABEL_7;
  }
  v6 &= 0x1FFu;
  if ( (unsigned int)v6 > 0x100 )
  {
    v6 = 512 - v6;
    goto LABEL_8;
  }
  if ( v6 == 256 )
LABEL_7:
    v6 = 255;
LABEL_8:
  result = a1[2];
  v12 = a2 + result;
  if ( a2 + result > 32766 )
    v12 = 0x7FFF;
  if ( v6 != 0 )
  {
    v13 = a3 + a1[4];
    v8 = a1[308];
    v9 = (_DWORD *)((char *)a1 + 6 * v8 + 1040);
    if ( v8 > 0
      && a1[311] == v13
      && (v11 = *((unsigned __int16 *)v9 - 2), *((__int16 *)v9 - 3) + v11 == v12)
      && (result = *((unsigned __int8 *)v9 - 2)) == v6 )
    {
      *((_WORD *)v9 - 2) = v11 + a5;
    }
    else
    {
      result = a1[311];
      if ( result != v13 || v8 > 31 )
      {
        v10 = (void (*)(void))a1[309];
        if ( v10 != nullptr && v8 > 0 )
          v10();
        a1[308] = 0;
        a1[311] = v13;
        result = 1040;
        v9 = a1 + 260;
      }
      *((_BYTE *)v9 + 4) = v6;
      *(_WORD *)v9 = v12;
      *((_WORD *)v9 + 1) = a5;
      ++a1[308];
    }
  }
  return result;
}


//======================================================================
// sub_219BA8
// address: 0x00219BA8   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_219BA8(_DWORD *a1)
{
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(*(_DWORD *)(a1[3] + 56) + 8))(
    a1[13],
    *(_DWORD *)(a1[1] + 164),
    *(_DWORD *)(a1[1] + 168));
  return 0;
}


//======================================================================
// sub_219BC4
// address: 0x00219BC4   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_219BC4(int a1)
{
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)(*(_DWORD *)(a1 + 12) + 56) + 12))(*(_DWORD *)(a1 + 52));
}


//======================================================================
// sub_219BD2
// address: 0x00219BD2   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_219BD2(int a1)
{
  return ft_mem_free(*(_DWORD *)(a1 + 12), a1);
}


//======================================================================
// sub_219BDE
// address: 0x00219BDE   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_219BDE(int a1, int a2, __int16 *a3, _DWORD *a4)
{
  int v6; // r2
  int result; // r0
  int v8; // r5
  int v9; // r1
  size_t v10; // r2
  _BYTE *v11; // r3

  v6 = a4[252];
  result = a1 * v6;
  v8 = a4[253] - result;
  if ( v6 >= 0 )
    v8 += v6 * (a4[250] - 1);
  while ( a2 > 0 )
  {
    v9 = *((unsigned __int8 *)a3 + 4);
    if ( *((_BYTE *)a3 + 4) != 0 )
    {
      v10 = (unsigned __int16)a3[1];
      result = v10 - 1;
      v11 = (_BYTE *)(v8 + *a3);
      switch ( a3[1] )
      {
        case 0:
          break;
        case 1:
          goto LABEL_16;
        case 2:
          goto LABEL_15;
        case 3:
          goto LABEL_14;
        case 4:
          goto LABEL_13;
        case 5:
          goto LABEL_12;
        case 6:
          goto LABEL_11;
        case 7:
          *v11++ = v9;
LABEL_11:
          *v11++ = v9;
LABEL_12:
          *v11++ = v9;
LABEL_13:
          *v11++ = v9;
LABEL_14:
          *v11++ = v9;
LABEL_15:
          *v11++ = v9;
LABEL_16:
          *v11 = v9;
          break;
        default:
          result = (int)j_memset((void *)(v8 + *a3), v9, v10);
          break;
      }
    }
    --a2;
    a3 += 3;
  }
  return result;
}


//======================================================================
// sub_219C58
// address: 0x00219C58   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_219C58(int a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r3
  int v8[2]; // [sp+4h] [bp-8h] BYREF

  v8[0] = (int)a2;
  v8[1] = a3;
  *a2 = 0;
  v5 = ft_mem_alloc(a1, 20, v8);
  v6 = v8[0];
  if ( v8[0] == 0 )
  {
    v5[3] = a1;
    *a2 = v5;
  }
  return v6;
}


//======================================================================
// sub_219C78
// address: 0x00219C78   size: 0x26 (38 bytes)
//======================================================================
void *__fastcall sub_219C78(int a1, int a2, _DWORD *a3)
{
  void *result; // r0

  result = j_memset(a3, 0, 0x10u);
  if ( *(_DWORD *)(a2 + 72) == *(_DWORD *)(a1 + 16) )
    return (void *)FT_Outline_Get_CBox(a2 + 108, a3);
  return result;
}


//======================================================================
// sub_219CA0
// address: 0x00219CA0   size: 0x236 (566 bytes)
//======================================================================
int __fastcall sub_219CA0(int a1, int a2, int a3, int *a4, int a5)
{
  int result; // r0
  signed int v8; // r3
  signed int v9; // r0
  signed int v10; // r7
  size_t v11; // r7
  int v12; // r6
  int v13; // r0
  void *v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r1
  int v18; // r2
  char v19; // r5
  char *v20; // r5
  char *v21; // r6
  int v22; // [sp+Ch] [bp-78h]
  int v23; // [sp+10h] [bp-74h]
  int v24; // [sp+14h] [bp-70h]
  int v25; // [sp+18h] [bp-6Ch]
  int v27; // [sp+1Ch] [bp-68h]
  int v29; // [sp+24h] [bp-60h]
  int v30; // [sp+28h] [bp-5Ch]
  _BOOL4 v31; // [sp+2Ch] [bp-58h]
  int i; // [sp+2Ch] [bp-58h]
  _BOOL4 v33; // [sp+30h] [bp-54h]
  int v34; // [sp+34h] [bp-50h]
  int v35; // [sp+3Ch] [bp-48h] BYREF
  int v36; // [sp+40h] [bp-44h] BYREF
  int v37; // [sp+44h] [bp-40h]
  signed int v38; // [sp+48h] [bp-3Ch]
  signed int v39; // [sp+4Ch] [bp-38h]
  int v40; // [sp+50h] [bp-34h]
  int v41; // [sp+54h] [bp-30h]
  int v42; // [sp+58h] [bp-2Ch]

  if ( *(_DWORD *)(a2 + 72) != *(_DWORD *)(a1 + 16) )
    return 6;
  result = 19;
  if ( a3 != a5 )
    return result;
  v25 = a2 + 108;
  if ( a4 != nullptr )
    FT_Outline_Translate(a2 + 108, *a4, a4[1]);
  FT_Outline_Get_CBox(v25, &v36);
  v8 = v37 & 0xFFFFFFC0;
  v9 = (v38 + 63) & 0xFFFFFFC0;
  v10 = (v39 + 63) & 0xFFFFFFC0;
  v36 &= 0xFFFFFFC0;
  v37 &= 0xFFFFFFC0;
  v38 = v9;
  v39 = v10;
  if ( v36 < 0 && v9 > v36 + 0x7FFFFFFF )
    return 98;
  v29 = (v9 - v36) >> 6;
  if ( v8 < 0 && v10 > v8 + 0x7FFFFFFF )
    return 98;
  v22 = (v10 - v8) >> 6;
  v24 = *(_DWORD *)(a1 + 8);
  if ( (*(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) & 1) != 0 )
  {
    ft_mem_free(v24, *(_DWORD *)(a2 + 88));
    *(_DWORD *)(a2 + 88) = 0;
    *(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) &= ~1u;
  }
  v31 = a3 == 3;
  if ( a3 == 3 )
  {
    v23 = 3 * v29;
    v11 = (3 * v29 + 3) & 0xFFFFFFFC;
  }
  else
  {
    v11 = v29;
    v23 = v29;
  }
  v33 = a3 == 4;
  v12 = v22;
  if ( a3 == 4 )
    v12 = 3 * v22;
  v13 = v37;
  v34 = v39;
  v27 = v36;
  v30 = v37;
  if ( v23 > 0x7FFF || v12 > 0x7FFF )
    return 98;
  *(_BYTE *)(a2 + 94) = 2;
  *(_WORD *)(a2 + 92) = 256;
  *(_DWORD *)(a2 + 80) = v23;
  *(_DWORD *)(a2 + 76) = v12;
  *(_DWORD *)(a2 + 84) = v11;
  FT_Outline_Translate(v25, -v27, -v13);
  v14 = ft_mem_alloc(v24, v11 * v12, &v35);
  v15 = v35;
  *(_DWORD *)(a2 + 88) = v14;
  if ( v15 == 0 )
  {
    *(_DWORD *)(*(_DWORD *)(a2 + 156) + 4) |= 1u;
    v41 = v25;
    v42 = 1;
    v40 = a2 + 76;
    v35 = (*(int (__fastcall **)(_DWORD))(a1 + 56))(*(_DWORD *)(a1 + 52));
    if ( v31 )
    {
      v16 = *(_DWORD *)(a2 + 88);
      for ( i = v22; i != 0; --i )
      {
        v17 = v16 + v23;
        v18 = v29;
        while ( v18 != 0 )
        {
          --v18;
          v19 = *(_BYTE *)(v16 + v18);
          *(_BYTE *)(v17 - 3) = v19;
          *(_BYTE *)(v17 - 2) = v19;
          *(_BYTE *)(v17 - 1) = v19;
          v17 -= 3;
        }
        v16 += v11;
      }
    }
    if ( v33 )
    {
      v20 = *(char **)(a2 + 88);
      v21 = &v20[(v12 - v22) * v11];
      while ( v22 != 0 )
      {
        j_memcpy(v20, v21, v11);
        j_memcpy(&v20[v11], v21, v11);
        j_memcpy(&v20[2 * v11], v21, v11);
        v21 += v11;
        v20 += 3 * v11;
        --v22;
      }
    }
    FT_Outline_Translate(v25, v27, v30);
    if ( v35 == 0 )
    {
      *(_DWORD *)(a2 + 72) = 1651078259;
      *(_DWORD *)(a2 + 100) = v27 >> 6;
      *(_DWORD *)(a2 + 104) = v34 >> 6;
    }
  }
  if ( a4 != nullptr )
    FT_Outline_Translate(v25, -*a4, -a4[1]);
  return v35;
}


//======================================================================
// sub_219EE4
// address: 0x00219EE4   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_219EE4(int a1, int a2, int a3, int *a4)
{
  return sub_219CA0(a1, a2, a3 != 1 ? a3 : 0, a4, 0);
}


//======================================================================
// sub_219EFA
// address: 0x00219EFA   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_219EFA(int a1, int a2, int a3, int *a4)
{
  int result; // r0

  result = sub_219CA0(a1, a2, a3, a4, 3);
  if ( result == 0 )
    *(_BYTE *)(a2 + 94) = 5;
  return result;
}


//======================================================================
// sub_219F14
// address: 0x00219F14   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_219F14(int a1, int a2, int a3, int *a4)
{
  int result; // r0

  result = sub_219CA0(a1, a2, a3, a4, 4);
  if ( result == 0 )
    *(_BYTE *)(a2 + 94) = 6;
  return result;
}


//======================================================================
// sub_219F30
// address: 0x00219F30   size: 0x34 (52 bytes)
//======================================================================
_DWORD *__fastcall sub_219F30(_DWORD *result, int a2, int a3)
{
  unsigned int v3; // r1

  if ( result != nullptr )
  {
    if ( a2 != 0 && a3 > 3575 )
    {
      result[4] = a2;
      *result = a2 + 1536;
      v3 = (a3 - 1536) & 0xFFFFFFF0;
      result[1] = v3;
      result[2] = v3 >> 7;
    }
    else
    {
      *result = 0;
      result[1] = 0;
      result[4] = 0;
    }
  }
  return result;
}


//======================================================================
// sub_219F68
// address: 0x00219F68   size: 0x78 (120 bytes)
//======================================================================
int *__fastcall sub_219F68(int *result)
{
  int v1; // r2
  _DWORD **i; // r1
  _DWORD *v3; // r3
  int v4; // r3

  if ( result[10] == 0 && *((_QWORD *)result + 4) != 0 )
  {
    v1 = result[6];
    if ( v1 > *result )
      v1 = *result;
    for ( i = (_DWORD **)(result[380] + 4 * result[1]); ; i = (_DWORD **)(v3 + 3) )
    {
      v3 = *i;
      if ( *i == nullptr || *v3 > v1 )
        break;
      if ( *v3 == v1 )
        goto LABEL_13;
    }
    v4 = result[13];
    if ( v4 >= result[12] )
      j_longjmp((struct __jmp_buf_tag *)(result + 314), 1);
    result[13] = v4 + 1;
    v3 = (_DWORD *)(result[11] + 16 * v4);
    *v3 = v1;
    v3[2] = 0;
    v3[1] = 0;
    v3[3] = *i;
    *i = v3;
LABEL_13:
    v3[2] += result[8];
    v3[1] += result[9];
  }
  return result;
}


//======================================================================
// sub_219FE0
// address: 0x00219FE0   size: 0x54 (84 bytes)
//======================================================================
int *__fastcall sub_219FE0(int *result, int a2, int a3)
{
  int *v3; // r4
  unsigned int v4; // r6
  int v5; // r5
  unsigned int v6; // r2
  int v7; // r3

  v3 = result;
  v4 = a3 - result[4];
  if ( a2 > result[3] )
    a2 = result[3];
  v5 = a2 - result[2];
  if ( v5 < 0 )
    v5 = -1;
  if ( v5 != *result || v4 != result[1] )
  {
    if ( result[10] == 0 )
      result = sub_219F68(result);
    v3[8] = 0;
    v3[9] = 0;
  }
  v6 = v3[7];
  *v3 = v5;
  v3[1] = v4;
  v7 = 1;
  if ( v4 < v6 )
    v7 = ((unsigned int)v3[6] >> 31) + (v5 >= (unsigned int)v3[6]) + (v5 >> 31);
  v3[10] = v7;
  return result;
}


//======================================================================
// sub_21A034
// address: 0x0021A034   size: 0x168 (360 bytes)
//======================================================================
int __fastcall sub_21A034(int *a1, int a2, int a3, int a4, int a5, int a6)
{
  int result; // r0
  int v8; // r7
  int v9; // r6
  int v10; // r7
  int v11; // r7
  int v12; // r1
  int v13; // r1
  int v14; // r5
  int i; // r7
  int v16; // r3
  int v17; // r0
  int v18; // r2
  int v19; // [sp+0h] [bp-2Ch]
  int v20; // [sp+0h] [bp-2Ch]
  int v21; // [sp+4h] [bp-28h]
  int v22; // [sp+4h] [bp-28h]
  int v24; // [sp+8h] [bp-24h]
  int v25; // [sp+Ch] [bp-20h]
  int v26; // [sp+Ch] [bp-20h]
  int v27; // [sp+10h] [bp-1Ch]
  int v28; // [sp+14h] [bp-18h]
  int v29; // [sp+1Ch] [bp-10h]
  int v31; // [sp+24h] [bp-8h]

  v25 = a3 >> 8;
  v28 = a5 >> 8;
  if ( a4 == a6 )
    return (int)sub_219FE0(a1, v28, a2);
  v8 = a6 - a4;
  v21 = a1[8];
  v31 = a1[9];
  result = a5 >> 8;
  if ( v25 == v28 )
  {
    a1[8] = v21 + ((unsigned __int8)a3 + (unsigned __int8)a5) * v8;
    a1[9] = v31 + v8;
  }
  else
  {
    v9 = a5 - a3;
    if ( a5 - a3 < 0 )
    {
      v10 = v8 * (unsigned __int8)a3;
      v9 = a3 - a5;
      v27 = -1;
      v29 = 0;
    }
    else
    {
      v10 = v8 * (256 - (unsigned __int8)a3);
      v27 = 1;
      v29 = 256;
    }
    v19 = v10 / v9;
    v11 = v10 % v9;
    if ( v11 < 0 )
    {
      v11 += v9;
      --v19;
    }
    a1[9] = v31 + v19;
    a1[8] = v21 + ((unsigned __int8)a3 + v29) * v19;
    v22 = v25 + v27;
    sub_219FE0(a1, v25 + v27, a2);
    v12 = a4 + v19;
    v24 = a4 + v19;
    if ( v25 + v27 != v28 )
    {
      v26 = ((a6 - v12 + v19) << 8) / v9;
      v13 = ((a6 - v12 + v19) << 8) % v9;
      v14 = v13;
      if ( v13 < 0 )
      {
        v14 = v13 + v9;
        --v26;
      }
      v20 = v11 - v9;
      for ( i = v22 + v27; ; i += v27 )
      {
        v20 += v14;
        if ( v20 < 0 )
        {
          v16 = v26;
        }
        else
        {
          v20 -= v9;
          v16 = v26 + 1;
        }
        v17 = a1[9];
        a1[8] += v16 << 8;
        a1[9] = v17 + v16;
        v24 += v16;
        sub_219FE0(a1, i, a2);
        if ( i == v28 )
          break;
      }
    }
    v18 = a1[9];
    a1[8] += ((unsigned __int8)a5 + 256 - v29) * (a6 - v24);
    a1[9] = v18 + a6 - v24;
    return v29;
  }
  return result;
}


//======================================================================
// sub_21A19C
// address: 0x0021A19C   size: 0x216 (534 bytes)
//======================================================================
int __fastcall sub_21A19C(int *a1, int a2, int a3)
{
  int v4; // r2
  int v6; // r5
  int v7; // r3
  int v8; // r1
  int result; // r0
  int v10; // r6
  int v11; // r1
  int v12; // r5
  int v13; // r7
  int v14; // r2
  int v15; // r3
  int v16; // r6
  int v17; // r7
  int v18; // r6
  int v19; // r6
  int v20; // r7
  int v21; // r6
  int v22; // r5
  int v23; // r1
  int v24; // r7
  int v25; // r2
  int v26; // r3
  int v27; // [sp+Ch] [bp-30h]
  int v28; // [sp+Ch] [bp-30h]
  int v29; // [sp+10h] [bp-2Ch]
  int v30; // [sp+10h] [bp-2Ch]
  int v31; // [sp+10h] [bp-2Ch]
  int v32; // [sp+14h] [bp-28h]
  int v33; // [sp+14h] [bp-28h]
  int v34; // [sp+18h] [bp-24h]
  int v35; // [sp+1Ch] [bp-20h]
  int v36; // [sp+1Ch] [bp-20h]
  int v37; // [sp+20h] [bp-1Ch]
  int v40; // [sp+2Ch] [bp-10h]
  int v41; // [sp+30h] [bp-Ch]
  int v42; // [sp+34h] [bp-8h]

  v4 = a1[18];
  v34 = a3 >> 8;
  v42 = a3 >> 8 << 8;
  v6 = v4 >> 8;
  v29 = a1[16];
  v7 = a1[17];
  if ( v4 >> 8 > a3 >> 8 )
  {
    result = a3 >> 8;
    v8 = v4 >> 8;
  }
  else
  {
    v8 = a3 >> 8;
    result = v4 >> 8;
  }
  if ( result < a1[5] )
  {
    result = a1[4];
    if ( v8 >= result )
    {
      v32 = v7 - v4;
      v41 = a3 - v42;
      if ( v6 == v34 )
      {
        result = sub_21A034(a1, v4 >> 8, v29, v32, a2, v41);
      }
      else
      {
        v37 = a2 - v29;
        v27 = a3 - v7;
        if ( a2 == v29 )
        {
          v35 = v29 >> 8;
          v30 = 2 * (unsigned __int8)v29;
          if ( v27 < 0 )
          {
            v10 = v37;
            v28 = -1;
          }
          else
          {
            v28 = 1;
            v10 = 256;
          }
          v11 = a1[9];
          a1[8] += (v10 - v32) * v30;
          a1[9] = v11 + v10 - v32;
          v12 = v6 + v28;
          sub_219FE0(a1, v35, v12);
          v13 = 2 * v10 - 256;
          while ( 1 )
          {
            v14 = a1[8];
            v15 = a1[9];
            if ( v12 == v34 )
              break;
            a1[9] = v15 + v13;
            a1[8] = v14 + v13 * v30;
            v12 += v28;
            sub_219FE0(a1, v35, v12);
          }
          result = v30;
          v16 = v41 - 256 + v10;
          a1[8] = v14 + v16 * v30;
          a1[9] = v15 + v16;
        }
        else
        {
          if ( v27 < 0 )
          {
            v17 = v37 * v32;
            v40 = -1;
            v27 = v7 - a3;
            v18 = 0;
          }
          else
          {
            v17 = (256 - v32) * v37;
            v40 = 1;
            v18 = 256;
          }
          v36 = v18;
          v19 = v17 / v27;
          v20 = v17 % v27;
          if ( v20 < 0 )
          {
            --v19;
            v20 += v27;
          }
          v21 = v29 + v19;
          sub_21A034(a1, v4 >> 8, v29, v32, v21, v36);
          v22 = v6 + v40;
          sub_219FE0(a1, v21 >> 8, v22);
          if ( v22 != v34 )
          {
            v33 = (v37 << 8) / v27;
            v23 = (v37 << 8) % v27;
            v31 = v23;
            if ( v23 < 0 )
            {
              --v33;
              v31 = v23 + v27;
            }
            v24 = v20 - v27;
            do
            {
              v25 = v21;
              v24 += v31;
              if ( v24 < 0 )
              {
                v26 = v33;
              }
              else
              {
                v24 -= v27;
                v26 = v33 + 1;
              }
              v21 += v26;
              sub_21A034(a1, v22, v25, 256 - v36, v21, v36);
              v22 += v40;
              sub_219FE0(a1, v21 >> 8, v22);
            }
            while ( v22 != v34 );
          }
          result = sub_21A034(a1, v22, v21, 256 - v36, a2, v41);
        }
      }
    }
  }
  a1[16] = a2;
  a1[17] = a3;
  a1[18] = v42;
  return result;
}


//======================================================================
// sub_21A3B4
// address: 0x0021A3B4   size: 0x294 (660 bytes)
//======================================================================
int __fastcall sub_21A3B4(_DWORD *a1, _DWORD *a2, _DWORD *a3, int *a4)
{
  int v5; // r2
  int v6; // r3
  int v7; // r0
  int v8; // r1
  int v9; // r0
  int v10; // r5
  int v11; // r5
  int v12; // r2
  int *v13; // r5
  int v14; // r0
  int v15; // kr04_4
  int v16; // r2
  int v17; // r3
  int v18; // kr10_4
  int v19; // r3
  int v20; // r1
  int *v21; // r7
  int v22; // r1
  int v23; // kr24_4
  int v24; // r3
  int *i; // r12
  int v26; // r0
  int v27; // r2
  int v28; // r6
  int v29; // r3
  int v30; // r6
  int v31; // r6
  int v32; // r6
  int v33; // r1
  int v35; // [sp+8h] [bp-4Ch]
  int v36; // [sp+Ch] [bp-48h]
  int *v37; // [sp+10h] [bp-44h]
  char *v38; // [sp+14h] [bp-40h]
  int v39; // [sp+18h] [bp-3Ch]
  int v40; // [sp+1Ch] [bp-38h]
  int v41; // [sp+1Ch] [bp-38h]
  int *v42; // [sp+20h] [bp-34h]
  int v43; // [sp+24h] [bp-30h]
  int v44; // [sp+24h] [bp-30h]
  int *v45; // [sp+28h] [bp-2Ch]
  int v46; // [sp+2Ch] [bp-28h]
  int v47; // [sp+30h] [bp-24h]
  _DWORD *v48; // [sp+34h] [bp-20h]
  int v49; // [sp+40h] [bp-14h]
  int v50; // [sp+44h] [bp-10h]

  a4[19] = 4 * *a3;
  v5 = 4 * a3[1];
  a4[20] = v5;
  v45 = a4 + 19;
  a4[21] = 4 * *a2;
  v6 = 4 * a2[1];
  a4[22] = v6;
  a4[23] = 4 * *a1;
  v7 = a1[1];
  a4[25] = a4[16];
  v8 = a4[17];
  v9 = 4 * v7;
  a4[24] = v9;
  a4[26] = v8;
  if ( v6 >= v5 )
  {
    if ( v6 > v5 )
      goto LABEL_5;
    v6 = v5;
  }
  v10 = v6;
  v6 = v5;
  v5 = v10;
LABEL_5:
  v11 = v9;
  if ( v9 > v8 )
    v11 = v8;
  if ( v11 > v5 )
    v11 = v5;
  v12 = v11 >> 8;
  v13 = v45;
  if ( v12 >= a4[5] )
    goto LABEL_27;
  if ( v9 < v8 )
    v9 = v8;
  if ( v9 < v6 )
    v9 = v6;
  v13 = v45;
  if ( v9 >> 8 < a4[4] )
    goto LABEL_27;
  while ( 1 )
  {
    v37 = v13;
    v42 = v13 + 6;
    v48 = v13 + 12;
    v21 = v13 + 2;
    for ( i = v13 + 4; ; i += 6 )
    {
      v26 = *v42 - *v13;
      v39 = *v42;
      v46 = *v13;
      v27 = v42[1] - v13[1];
      v41 = v42[1];
      v47 = v13[1];
      v28 = (v26 + (v26 >> 31)) ^ (v26 >> 31);
      v29 = (v27 + (v27 >> 31)) ^ (v27 >> 31);
      if ( v28 > v29 )
      {
        v32 = 236 * v28;
        v33 = 97;
      }
      else
      {
        v32 = 97 * v28;
        v33 = 236;
      }
      v30 = (v32 + v29 * v33) >> 8;
      if ( v30 <= 0x7FFF )
      {
        v31 = 42 * v30;
        v50 = v21[1];
        v49 = *v21 - v46;
        if ( ((v49 * v27 - (v50 - v47) * v26 + ((v49 * v27 - (v50 - v47) * v26) >> 31))
            ^ ((v49 * v27 - (v50 - v47) * v26) >> 31)) <= v31 )
        {
          v35 = i[1];
          v36 = *i - v46;
          if ( ((v36 * v27 - (v35 - v47) * v26 + ((v36 * v27 - (v35 - v47) * v26) >> 31))
              ^ ((v36 * v27 - (v35 - v47) * v26) >> 31)) <= v31
            && (v50 - v47) * v27 + v49 * v26 >= 0
            && (v35 - v47) * v27 + v36 * v26 >= 0
            && (v41 - v50) * v27 + (v39 - *v21) * v26 >= 0
            && (v41 - v35) * v27 + (v39 - *i) * v26 >= 0 )
          {
            break;
          }
        }
      }
      *v48 = v39;
      v14 = *i;
      v15 = v46 + *v21;
      v43 = *v21;
      v16 = (v39 + *i) / 2;
      *v21 = v15 / 2;
      v38 = (char *)((char *)v13 - (char *)v37);
      *(int *)((char *)v37 + (_DWORD)v38 + 40) = v16;
      v13 += 6;
      v17 = (v43 + v14) / 2;
      v18 = v15 / 2 + v17;
      v19 = (v16 + v17) / 2;
      *i = v18 / 2;
      *(int *)((char *)v37 + (_DWORD)v38 + 32) = v19;
      *v42 = (v18 / 2 + v19) / 2;
      v48[1] = v41;
      v20 = i[1];
      v44 = v21[1];
      v40 = (v41 + v20) / 2;
      v21[1] = (v47 + v44) / 2;
      v21 += 6;
      *(int *)((char *)v37 + (_DWORD)v38 + 44) = v40;
      v22 = (v44 + v20) / 2;
      v23 = (v47 + v44) / 2 + v22;
      i[1] = v23 / 2;
      v24 = (v40 + v22) / 2;
      *(int *)((char *)v37 + (_DWORD)v38 + 36) = v24;
      v42[1] = (v23 / 2 + v24) / 2;
      v42 += 6;
      v48 += 6;
    }
LABEL_27:
    sub_21A19C(a4, *v13, v13[1]);
    if ( v13 == v45 )
      break;
    v13 -= 6;
  }
  return 0;
}


//======================================================================
// sub_21A64C
// address: 0x0021A64C   size: 0x118 (280 bytes)
//======================================================================
int __fastcall sub_21A64C(int *a1, _DWORD *a2, int *a3)
{
  int v5; // r7
  int v6; // r2
  int v7; // r1
  int *v8; // r4
  int v9; // r2
  int v10; // r6
  int v11; // r3
  int v12; // r0
  int v13; // r6
  int v14; // r3
  int v15; // r7
  int v16; // r0
  int v17; // r6
  int v18; // r0
  int v19; // r3
  int v20; // r6
  int v21; // r3
  int v22; // r0
  int v23; // r1
  int v24; // r2
  int v25; // r0
  int v26; // r7
  int v27; // r1
  int v28; // r2
  int v29; // r2
  int v30; // r1
  int v31; // r2
  int v32; // r7
  int v33; // r1
  int v34; // r2
  int v36; // [sp+4h] [bp-10h]
  int *v37; // [sp+Ch] [bp-8h]

  v37 = a3 + 213;
  v5 = 4 * *a2;
  a3[19] = v5;
  v6 = a2[1];
  v7 = a3[17];
  v8 = a3 + 19;
  v9 = 4 * v6;
  a3[20] = v9;
  v10 = *a1;
  a3[21] = 4 * *a1;
  v11 = a1[1];
  v12 = a3[16];
  v13 = 8 * v10;
  v14 = 4 * v11;
  v15 = v12 + v5;
  a3[23] = v12;
  a3[22] = v14;
  a3[24] = v7;
  v16 = v15 - v13;
  if ( v15 - v13 < 0 )
    v16 = v13 - v15;
  v36 = v7 + v9 - 2 * v14;
  if ( v36 < 0 )
    v36 = 2 * v14 - (v7 + v9);
  v17 = v36;
  if ( v36 < v16 )
    v17 = v16;
  if ( v17 <= 63 )
    goto LABEL_23;
  if ( v14 >= v9 )
  {
    if ( v14 > v9 )
      goto LABEL_12;
    v14 = v9;
  }
  v18 = v14;
  v14 = v9;
  v9 = v18;
LABEL_12:
  if ( v9 > v7 )
    v9 = v7;
  if ( v9 >> 8 >= a3[5] )
    goto LABEL_23;
  if ( v14 < v7 )
    v14 = v7;
  if ( v14 >> 8 < a3[4] )
  {
LABEL_23:
    v20 = 0;
    goto LABEL_24;
  }
  v19 = 0;
  do
  {
    v17 >>= 2;
    ++v19;
  }
  while ( v17 > 64 );
  a3[213] = v19;
  v20 = 0;
  do
  {
    v21 = v20;
    v22 = v37[v20];
    if ( v22 <= 0 )
    {
LABEL_24:
      sub_21A19C(a3, *v8, v8[1]);
      --v20;
      v8 -= 4;
    }
    else
    {
      v23 = v8[4];
      v24 = v8[2];
      v25 = v22 - 1;
      v8[8] = v23;
      v26 = *v8;
      v27 = (v23 + v24) / 2;
      v8[6] = v27;
      v28 = (v24 + v26) / 2;
      v8[2] = v28;
      v29 = (v27 + v28) / 2;
      v30 = v8[5];
      v8[4] = v29;
      v31 = v8[3];
      v8[9] = v30;
      ++v20;
      v32 = v8[1];
      v33 = (v30 + v31) / 2;
      v8[7] = v33;
      v34 = (v31 + v32) / 2;
      v8[3] = v34;
      v8[5] = (v33 + v34) / 2;
      v37[v21] = v25;
      v8 += 4;
      v37[v21 + 1] = v25;
    }
  }
  while ( v20 != -1 );
  return 0;
}


//======================================================================
// sub_21A764
// address: 0x0021A764   size: 0x16 (22 bytes)
//======================================================================
int __fastcall sub_21A764(_DWORD *a1, int *a2)
{
  sub_21A19C(a2, 4 * *a1, 4 * a1[1]);
  return 0;
}


//======================================================================
// sub_21A77A
// address: 0x0021A77A   size: 0x4C (76 bytes)
//======================================================================
int __fastcall sub_21A77A(int *a1, int *a2)
{
  int v4; // r7
  int v5; // r6
  int v6; // r2
  int v7; // r1
  int v8; // r3
  int v9; // r0

  sub_219F68(a2);
  v4 = 4 * *a1;
  v5 = 4 * a1[1];
  v6 = (char)(a1[1] >> 6);
  v7 = (char)(*a1 >> 6);
  if ( v7 > a2[3] )
    v7 = a2[3];
  v8 = a2[2];
  if ( v7 < v8 )
    v7 = v8 - 1;
  v9 = a2[4];
  *a2 = v7 - v8;
  a2[1] = v6 - v9;
  a2[8] = 0;
  a2[9] = 0;
  a2[10] = 0;
  a2[18] = v6 << 8;
  sub_219FE0(a2, v7, v6);
  a2[16] = v4;
  a2[17] = v5;
  return 0;
}


//======================================================================
// sub_21A7C6
// address: 0x0021A7C6   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_21A7C6(int a1, int a2, int *a3, int *a4)
{
  int v6; // r3
  int result; // r0

  v6 = *(_DWORD *)(a1 + 16);
  result = 6;
  if ( *(_DWORD *)(a2 + 72) == v6 )
  {
    if ( a3 != nullptr )
      FT_Outline_Transform((int *)(a2 + 108), a3);
    if ( a4 != nullptr )
      FT_Outline_Translate(a2 + 108, *a4, a4[1]);
    return 0;
  }
  return result;
}


//======================================================================
// sub_21A7FC
// address: 0x0021A7FC   size: 0x3A (58 bytes)
//======================================================================
int __fastcall sub_21A7FC(int a1)
{
  int v3; // [sp+Ch] [bp-4h]

  if ( j_setjmp((struct __jmp_buf_tag *)(a1 + 1256)) != 0 )
    return 64;
  v3 = FT_Outline_Decompose((_DWORD *)(a1 + 980), (int)&off_452300, a1);
  sub_219F68((int *)a1);
  return v3;
}


//======================================================================
// sub_21A83C
// address: 0x0021A83C   size: 0x2EE (750 bytes)
//======================================================================
int __fastcall sub_21A83C(int a1)
{
  int *v2; // r3
  int v3; // r2
  int *v4; // r5
  int v5; // r2
  int v6; // r2
  int v7; // r6
  int v8; // r7
  int v9; // r0
  int v10; // r1
  int v11; // r2
  int v12; // r6
  int v13; // r0
  int v14; // r12
  int v15; // r2
  int v16; // r5
  int v17; // r1
  int v18; // r7
  int v19; // r3
  int v20; // r5
  int v21; // r6
  int v22; // r2
  int v23; // r3
  int v24; // r3
  int v25; // r1
  int v26; // r0
  unsigned int v27; // r3
  unsigned int v28; // r1
  int v29; // r3
  int v30; // r2
  int v31; // r1
  int v32; // r3
  int j; // r3
  int v34; // r1
  int v35; // r2
  int v36; // r0
  int k; // r6
  int v38; // r1
  int *v39; // r5
  int v40; // r7
  int v41; // r1
  int v42; // r1
  void (__fastcall *v43)(_DWORD, int, int, _DWORD); // r5
  int v44; // r1
  _DWORD *v45; // r3
  int v47; // r3
  _DWORD *i; // [sp+28h] [bp-15Ch]
  int v49; // [sp+2Ch] [bp-158h]
  int v50; // [sp+30h] [bp-154h]
  int v51; // [sp+34h] [bp-150h]
  int v52; // [sp+38h] [bp-14Ch]
  int v53; // [sp+3Ch] [bp-148h]
  _DWORD v54[81]; // [sp+40h] [bp-144h] BYREF

  v2 = *(int **)(a1 + 984);
  v3 = *(__int16 *)(a1 + 982);
  v4 = &v2[2 * v3];
  if ( v3 > 0 )
  {
    v5 = *v2;
    *(_DWORD *)(a1 + 12) = *v2;
    *(_DWORD *)(a1 + 8) = v5;
    v6 = v2[1];
    *(_DWORD *)(a1 + 20) = v6;
    *(_DWORD *)(a1 + 16) = v6;
    while ( 1 )
    {
      v2 += 2;
      v7 = *(_DWORD *)(a1 + 12);
      v8 = *(_DWORD *)(a1 + 16);
      v9 = *(_DWORD *)(a1 + 20);
      if ( v2 >= v4 )
        break;
      v10 = *v2;
      v11 = v2[1];
      if ( *v2 < *(_DWORD *)(a1 + 8) )
        *(_DWORD *)(a1 + 8) = v10;
      if ( v10 > v7 )
        *(_DWORD *)(a1 + 12) = v10;
      if ( v11 < v8 )
        *(_DWORD *)(a1 + 16) = v11;
      if ( v11 > v9 )
        *(_DWORD *)(a1 + 20) = v11;
    }
    *(int *)(a1 + 8) >>= 6;
    *(_DWORD *)(a1 + 16) = v8 >> 6;
    *(_DWORD *)(a1 + 12) = (v7 + 63) >> 6;
    *(_DWORD *)(a1 + 20) = (v9 + 63) >> 6;
  }
  else
  {
    *(_DWORD *)(a1 + 12) = 0;
    *(_DWORD *)(a1 + 8) = 0;
    *(_DWORD *)(a1 + 20) = 0;
    *(_DWORD *)(a1 + 16) = 0;
  }
  v12 = *(_DWORD *)(a1 + 12);
  v13 = *(_DWORD *)(a1 + 1024);
  if ( v12 > v13 )
  {
    v14 = *(_DWORD *)(a1 + 8);
    v15 = *(_DWORD *)(a1 + 1032);
    if ( v14 < v15 )
    {
      v16 = *(_DWORD *)(a1 + 20);
      v17 = *(_DWORD *)(a1 + 1028);
      if ( v16 > v17 )
      {
        v18 = *(_DWORD *)(a1 + 16);
        v19 = *(_DWORD *)(a1 + 1036);
        if ( v18 < v19 )
        {
          if ( v14 < v13 )
            *(_DWORD *)(a1 + 8) = v13;
          if ( v18 < v17 )
            *(_DWORD *)(a1 + 16) = v17;
          if ( v12 > v15 )
            *(_DWORD *)(a1 + 12) = v15;
          if ( v16 > v19 )
            *(_DWORD *)(a1 + 20) = v19;
          v20 = *(_DWORD *)(a1 + 20);
          v21 = *(_DWORD *)(a1 + 16);
          *(_DWORD *)(a1 + 24) = *(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8);
          *(_DWORD *)(a1 + 28) = v20 - v21;
          v50 = (v20 - v21) / *(_DWORD *)(a1 + 1248);
          if ( v50 == 0 )
            v50 = 1;
          if ( v50 > 38 )
            v50 = 39;
          v51 = v21;
          *(_DWORD *)(a1 + 1252) = 0;
          v53 = v20;
          v49 = 0;
LABEL_31:
          if ( v49 < v50 )
          {
            v52 = v51 + *(_DWORD *)(a1 + 1248);
            if ( v49 == v50 - 1 || v52 > v53 )
              v52 = v53;
            v54[0] = v51;
            v54[1] = v52;
            for ( i = v54; ; i = v45 )
            {
              if ( i < v54 )
              {
                ++v49;
                v51 = v52;
                goto LABEL_31;
              }
              v22 = *(_DWORD *)(a1 + 1512);
              v23 = i[1] - *i;
              *(_DWORD *)(a1 + 1520) = v22;
              *(_DWORD *)(a1 + 1524) = v23;
              v24 = 4 * v23;
              if ( (v24 & 0xF) != 0 )
                v24 = v24 + 16 - (v24 & 0xF);
              v25 = *(_DWORD *)(a1 + 1512);
              v26 = *(_DWORD *)(a1 + 1516);
              v27 = v22 + v24;
              *(_DWORD *)(a1 + 44) = v27;
              v28 = v25 + (v26 & 0xFFFFFFF0);
              if ( v27 < v28 )
              {
                v32 = (int)(v28 - v27) >> 4;
                *(_DWORD *)(a1 + 48) = v32;
                if ( v32 > 1 )
                {
                  for ( j = 0; j < *(_DWORD *)(a1 + 1524); ++j )
                  {
                    v34 = 4 * j;
                    *(_DWORD *)(v34 + *(_DWORD *)(a1 + 1520)) = 0;
                  }
                  *(_DWORD *)(a1 + 52) = 0;
                  *(_DWORD *)(a1 + 40) = 1;
                  *(_DWORD *)(a1 + 16) = *i;
                  v35 = i[1];
                  *(_DWORD *)(a1 + 20) = v35;
                  *(_DWORD *)(a1 + 28) = v35 - *i;
                  v36 = sub_21A7FC(a1);
                  if ( v36 == 0 )
                  {
                    if ( *(_DWORD *)(a1 + 52) != 0 )
                    {
                      *(_DWORD *)(a1 + 1232) = 0;
                      for ( k = 0; k < *(_DWORD *)(a1 + 1524); ++k )
                      {
                        v38 = 0;
                        v39 = *(int **)(4 * k + *(_DWORD *)(a1 + 1520));
                        v40 = 0;
                        while ( v39 != nullptr )
                        {
                          if ( *v39 > v38 && v40 != 0 )
                            sub_219AAC((_DWORD *)a1, v38, k, v40 << 9, *v39 - v38);
                          v41 = v39[2];
                          v40 += v39[1];
                          if ( v40 << 9 != v41 && *v39 >= 0 )
                            sub_219AAC((_DWORD *)a1, *v39, k, (v40 << 9) - v41, 1);
                          v42 = *v39;
                          v39 = (int *)v39[3];
                          v38 = v42 + 1;
                        }
                        if ( v40 != 0 )
                          sub_219AAC((_DWORD *)a1, v38, k, v40 << 9, *(_DWORD *)(a1 + 24) - v38);
                      }
                      v43 = *(void (__fastcall **)(_DWORD, int, int, _DWORD))(a1 + 1236);
                      if ( v43 != nullptr )
                      {
                        v44 = *(_DWORD *)(a1 + 1232);
                        if ( v44 > 0 )
                          v43(*(_DWORD *)(a1 + 1244), v44, a1 + 1040, *(_DWORD *)(a1 + 1240));
                      }
                    }
                    v45 = i - 2;
                    continue;
                  }
                  if ( v36 != 64 )
                    return 1;
                }
              }
              v29 = *i;
              v30 = i[1];
              v31 = *i + ((v30 - *i) >> 1);
              if ( v31 == *i )
                return 1;
              if ( v29 - v30 >= *(_DWORD *)(a1 + 1248) )
                ++*(_DWORD *)(a1 + 1252);
              i[2] = v29;
              i[3] = v31;
              *i = v31;
              i[1] = v30;
              v45 = i + 2;
            }
          }
          if ( *(int *)(a1 + 1252) > 8 )
          {
            v47 = *(_DWORD *)(a1 + 1248);
            if ( v47 > 16 )
              *(_DWORD *)(a1 + 1248) = v47 >> 1;
          }
        }
      }
    }
  }
  return 0;
}


//======================================================================
// sub_21AB40
// address: 0x0021AB40   size: 0x16C (364 bytes)
//======================================================================
int __fastcall sub_21AB40(int *a1, int **a2)
{
  int *v3; // r12
  int result; // r0
  int v5; // r7
  int v6; // r2
  int *v7; // r5
  _DWORD *v8; // r3
  int *v9; // r2
  int *v10; // r7
  int v11; // r2
  int v12; // r7
  int v13; // r5
  int v14; // r7
  int v15; // r5
  int v16; // r6
  int v17; // r7
  int v18; // r6
  int v19; // r7
  int *v20; // [sp+10h] [bp-Ch]

  v20 = *a2;
  v3 = a2[1];
  if ( a1 != nullptr )
  {
    result = 6;
    if ( *a1 == 0 || a1[1] == 0 )
      return result;
    if ( v3 == nullptr )
      return 20;
    result = 0;
    if ( *((_WORD *)v3 + 1) == 0 )
      return result;
    v5 = *(__int16 *)v3;
    if ( v5 <= 0 )
      return result;
    v6 = v3[3];
    if ( v6 == 0 || v3[1] == 0 )
      return 20;
    result = 20;
    if ( *((__int16 *)v3 + 1) != *(__int16 *)(2 * (v5 + 0x7FFFFFFF) + v6) + 1 )
      return result;
    v7 = a2[2];
    v8 = (_DWORD *)a1[4];
    if ( ((unsigned __int8)v7 & 2) != 0 )
      goto LABEL_15;
    if ( v20 != nullptr )
    {
      result = v20[1];
      if ( result == 0 )
        return result;
      result = *v20;
      if ( *v20 == 0 )
        return result;
      if ( v20[3] != 0 )
      {
LABEL_15:
        result = 19;
        if ( ((unsigned __int8)v7 & 1) != 0 )
        {
          if ( ((unsigned __int8)v7 & 2) != 0 )
          {
            if ( ((unsigned __int8)v7 & 4) != 0 )
            {
              v9 = a2[9];
              v10 = a2[10];
              v8[256] = a2[8];
              v8[257] = v9;
              v8[258] = v10;
              v8[259] = a2[11];
            }
            else
            {
              v8[256] = -32768;
              v8[257] = -32768;
              v8[258] = 0x7FFF;
              v8[259] = 0x7FFF;
            }
          }
          else
          {
            v8[256] = 0;
            v8[257] = 0;
            v8[258] = v20[1];
            v8[259] = *v20;
          }
          v11 = *a1;
          v12 = a1[1];
          v8[378] = *a1;
          v8[379] = v12;
          v8[380] = v11;
          v8[10] = 1;
          v8[11] = 0;
          v8[12] = 0;
          v8[13] = 0;
          v8[8] = 0;
          v8[9] = 0;
          v13 = v3[1];
          v14 = v3[2];
          v8[245] = *v3;
          v8[246] = v13;
          v8[247] = v14;
          v15 = v3[4];
          v8[248] = v3[3];
          v8[249] = v15;
          v8[312] = a1[2];
          v8[308] = 0;
          if ( ((unsigned int)a2[2] & 2) != 0 )
          {
            v8[309] = a2[3];
            v8[310] = a2[7];
          }
          else
          {
            v16 = v20[1];
            v17 = v20[2];
            v8[250] = *v20;
            v8[251] = v16;
            v8[252] = v17;
            v18 = v20[4];
            v19 = v20[5];
            v8[253] = v20[3];
            v8[254] = v18;
            v8[255] = v19;
            v8[309] = sub_219BDE;
            v8[310] = v8;
          }
          return sub_21A83C((int)v8);
        }
        return result;
      }
    }
  }
  return 6;
}


//======================================================================
// sub_21ACCC
// address: 0x0021ACCC   size: 0x2A (42 bytes)
//======================================================================
unsigned int __fastcall sub_21ACCC(unsigned int result, int a2)
{
  unsigned int i; // r2
  int *v3; // r3
  unsigned int j; // r4
  int v5; // r5

  for ( i = 1; i < result; ++i )
  {
    v3 = (int *)(a2 + 4 * i);
    for ( j = i; j != 0; --j )
    {
      v5 = *v3--;
      if ( v5 > *v3 )
        break;
      v3[1] = *v3;
      *v3 = v5;
    }
  }
  return result;
}


//======================================================================
// sub_21ACF6
// address: 0x0021ACF6   size: 0x42 (66 bytes)
//======================================================================
unsigned int __fastcall sub_21ACF6(unsigned int result, int a2)
{
  unsigned int i; // r2
  unsigned int v3; // r4
  int *v4; // r3
  int v5; // r5
  int v6; // r7
  int v7; // r12
  int v8; // r7
  int v9; // r6

  for ( i = 1; i < result; ++i )
  {
    v3 = i;
    v4 = (int *)(a2 + 12 * i);
    while ( v3 != 0 )
    {
      v5 = *v4;
      v4 -= 3;
      if ( v5 > *v4 )
        break;
      v6 = v4[4];
      v4[3] = *v4;
      v7 = v6;
      v8 = v4[5];
      v4[4] = v4[1];
      v9 = v4[2];
      *v4 = v5;
      v4[5] = v9;
      v4[1] = v7;
      v4[2] = v8;
      --v3;
    }
  }
  return result;
}


//======================================================================
// sub_21AD38
// address: 0x0021AD38   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_21AD38(int a1, int a2)
{
  int v2; // r3
  int result; // r0
  int v4; // r0

  v2 = -a1;
  if ( a2 < a1 )
  {
    if ( a2 >= v2 )
    {
      v2 = a1;
      result = 1;
      goto LABEL_9;
    }
    v2 = a2;
    a2 = a1;
    v4 = 2;
  }
  else
  {
    if ( a2 >= v2 )
    {
      v2 = a2;
      a2 = a1;
      result = 2;
      goto LABEL_9;
    }
    v4 = 1;
  }
  result = -v4;
LABEL_9:
  if ( ((v2 + (v2 >> 31)) ^ (v2 >> 31)) <= ((14 * a2 + ((14 * a2) >> 31)) ^ ((14 * a2) >> 31)) )
    return 4;
  return result;
}


//======================================================================
// sub_21AD7A
// address: 0x0021AD7A   size: 0x40 (64 bytes)
//======================================================================
_DWORD *__fastcall sub_21AD7A(int a1, int a2)
{
  unsigned int v2; // r3
  int v3; // r6
  _DWORD *result; // r0
  _BYTE *v5; // r2
  unsigned int v6; // r6

  v2 = *(_DWORD *)(a1 + 28);
  v3 = 40 * *(_DWORD *)(a1 + 24);
  result = *(_DWORD **)(a2 + 4);
  v5 = *(_BYTE **)(a2 + 8);
  v6 = v2 + v3;
  while ( v2 < v6 )
  {
    *result = *(_DWORD *)(v2 + 16);
    result[1] = *(_DWORD *)(v2 + 20);
    if ( (*(_WORD *)v2 & 1) != 0 )
    {
      *v5 = 0;
    }
    else if ( (*(_WORD *)v2 & 2) != 0 )
    {
      *v5 = 2;
    }
    else
    {
      *v5 = 1;
    }
    v2 += 40;
    result += 2;
    ++v5;
  }
  return result;
}


//======================================================================
// sub_21ADBA
// address: 0x0021ADBA   size: 0xA (10 bytes)
//======================================================================
int __fastcall sub_21ADBA(int a1, int a2)
{
  *(_DWORD *)(a1 + 108) = a2;
  *(_DWORD *)(a1 + 100) = *(_DWORD *)(a2 + 28);
  return 0;
}


//======================================================================
// sub_21ADC4
// address: 0x0021ADC4   size: 0x4 (4 bytes)
//======================================================================
int sub_21ADC4()
{
  return 0;
}


//======================================================================
// sub_21ADC8
// address: 0x0021ADC8   size: 0xF2 (242 bytes)
//======================================================================
int __fastcall sub_21ADC8(int result, int a2)
{
  int v2; // r1
  unsigned int v3; // r6
  int v4; // r3
  unsigned int v5; // r4
  unsigned int i; // r5
  __int16 v7; // r3
  __int16 v8; // r7
  int v9; // r2
  int v10; // r1
  int v11; // r1
  int v12; // r7
  int v13; // r3
  int v14; // [sp+8h] [bp-14h]
  unsigned int v15; // [sp+Ch] [bp-10h]
  int v16; // [sp+10h] [bp-Ch]
  int v17; // [sp+14h] [bp-8h]

  v2 = result + 28 * a2 + 40;
  v16 = v2 + 4;
  v3 = *(_DWORD *)(v2 + 12);
  v15 = v3 + 48 * *(_DWORD *)(v2 + 4);
  v4 = *(_DWORD *)(*(_DWORD *)(result + 108) + 36);
  v14 = v4 / 256;
  if ( v4 / 256 == 0 )
    v14 = 1;
  v5 = *(_DWORD *)(v2 + 12);
  v17 = 6000 * v4 / 2048;
  while ( v5 < v15 )
  {
    if ( *(char *)(v5 + 1) == *(_DWORD *)(v16 + 24) && *(_DWORD *)(v5 + 40) != *(_DWORD *)(v5 + 44) )
    {
      for ( i = v3; i < v15; i += 48 )
      {
        v7 = *(_WORD *)(v5 + 2);
        v8 = *(_WORD *)(i + 2);
        if ( *(char *)(v5 + 1) + *(char *)(i + 1) == 0 && v8 > v7 )
        {
          result = *(__int16 *)(v5 + 6);
          v9 = *(__int16 *)(i + 6);
          if ( v9 > result )
            v9 = *(__int16 *)(v5 + 6);
          v10 = *(__int16 *)(i + 4);
          if ( v10 < *(__int16 *)(v5 + 4) )
            v10 = *(__int16 *)(v5 + 4);
          v11 = v9 - v10;
          if ( v11 >= v14 )
          {
            result = v17 / v11;
            v12 = v8 - v7 + v17 / v11;
            if ( v12 < *(_DWORD *)(v5 + 32) )
            {
              *(_DWORD *)(v5 + 32) = v12;
              *(_DWORD *)(v5 + 20) = i;
            }
            if ( v12 < *(_DWORD *)(i + 32) )
            {
              *(_DWORD *)(i + 32) = v12;
              *(_DWORD *)(i + 20) = v5;
            }
          }
        }
      }
    }
    v5 += 48;
  }
  while ( v3 < v15 )
  {
    v13 = *(_DWORD *)(v3 + 20);
    if ( v13 != 0 && *(_DWORD *)(v13 + 20) != v3 )
    {
      *(_DWORD *)(v3 + 20) = 0;
      *(_DWORD *)(v3 + 24) = *(_DWORD *)(v13 + 20);
    }
    v3 += 48;
  }
  return result;
}


//======================================================================
// sub_21AEC0
// address: 0x0021AEC0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_21AEC0(_DWORD *a1, _DWORD *a2)
{
  int v2; // r5
  int v3; // r4
  int v4; // r2
  int v5; // r3
  int v6; // r2

  v2 = a2[1];
  a1[27] = a2;
  v3 = a2[7];
  a1[25] = v3;
  a1[1] = a2[10];
  a1[2] = a2[11];
  a1[3] = a2[109];
  a1[4] = a2[110];
  v4 = a2[6];
  if ( (unsigned int)(v4 - 2) > 1 )
  {
    v5 = 0;
    if ( v4 != 4 )
      goto LABEL_6;
  }
  else
  {
    v5 = 1;
    if ( v4 != 2 )
    {
LABEL_8:
      v6 = 4;
      goto LABEL_10;
    }
  }
  v5 |= 2u;
LABEL_6:
  if ( v4 == 1 )
  {
LABEL_11:
    v3 |= 1u;
    goto LABEL_12;
  }
  if ( v4 != 2 )
    goto LABEL_8;
  v6 = 12;
LABEL_10:
  v5 |= v6;
  if ( (*(_DWORD *)(v2 + 12) & 1) != 0 )
    goto LABEL_11;
LABEL_12:
  a1[25] = v3;
  a1[26] = v5;
  return 0;
}


//======================================================================
// sub_21AF26
// address: 0x0021AF26   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_21AF26(_DWORD *a1, _DWORD *a2)
{
  int v2; // r4
  int v3; // r2
  int v4; // r3
  int v5; // r2

  a1[27] = a2;
  v2 = a2[7];
  a1[25] = v2;
  a1[1] = a2[10];
  a1[2] = a2[11];
  a1[3] = a2[95];
  a1[4] = a2[96];
  v3 = a2[6];
  if ( (unsigned int)(v3 - 2) > 1 )
  {
    v4 = 0;
    if ( v3 != 4 )
      goto LABEL_6;
  }
  else
  {
    v4 = 1;
    if ( v3 != 2 )
      goto LABEL_8;
  }
  v4 |= 2u;
LABEL_6:
  if ( v3 != 1 )
  {
    if ( v3 == 2 )
    {
      v5 = 12;
      goto LABEL_10;
    }
LABEL_8:
    v5 = 4;
LABEL_10:
    v4 |= v5;
  }
  a1[25] = v2 | 4;
  a1[26] = v4;
  return 0;
}


//======================================================================
// sub_21AF82
// address: 0x0021AF82   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_21AF82(_DWORD *a1, _DWORD *a2)
{
  return sub_21AF26(a1, a2);
}


//======================================================================
// sub_21AF8A
// address: 0x0021AF8A   size: 0xD4 (212 bytes)
//======================================================================
signed int __fastcall sub_21AF8A(int a1, int a2, int a3)
{
  int v3; // r6
  __int16 *v4; // r5
  signed int result; // r0
  _DWORD *v6; // r7
  _DWORD *v7; // r4
  int v8; // r0
  signed int v9; // r0
  _DWORD *v10; // [sp+4h] [bp-20h]
  unsigned int i; // [sp+8h] [bp-1Ch]
  int *v12; // [sp+Ch] [bp-18h]
  int v13; // [sp+10h] [bp-14h]
  signed int v14; // [sp+14h] [bp-10h]
  int v15; // [sp+18h] [bp-Ch]
  __int16 *v16; // [sp+1Ch] [bp-8h]

  v3 = a1 + 28 * a3 + 44;
  v4 = *(__int16 **)(a1 + 28 * a3 + 64);
  v16 = &v4[24 * *(_DWORD *)(a1 + 28 * a3 + 56)];
  v12 = (int *)(a2 + 340 * a3 + 40);
  v15 = *v12;
  result = FT_MulFix(*(_DWORD *)(a2 + 36) / 0x28u, *v12);
  v13 = result;
  if ( result > 32 )
    v13 = 32;
  while ( v4 < v16 )
  {
    v7 = v12 + 55;
    v14 = v13;
    v10 = nullptr;
    for ( i = 0; ; ++i )
    {
      result = i;
      if ( i >= v12[54] )
        break;
      v6 = v7;
      if ( (v7[6] & 1) != 0
        && ((v7[6] & 6) != 0) != *(_DWORD *)(v3 + 24)
                               - *((char *)v4 + 13)
                               + (*((char *)v4 + 13) == *(_DWORD *)(v3 + 24))
                               + *((char *)v4 + 13)
                               - *(_DWORD *)(v3 + 24) )
      {
        v8 = *v4;
        if ( ((v8 - *v7 + ((v8 - *v7) >> 31)) ^ ((v8 - *v7) >> 31)) > ((v8 - v7[3] + ((v8 - v7[3]) >> 31))
                                                                     ^ ((v8 - v7[3]) >> 31)) )
          v6 = v7 + 3;
        v9 = FT_MulFix((v8 - *v6 + ((v8 - *v6) >> 31)) ^ ((v8 - *v6) >> 31), v15);
        if ( v9 < v14 )
        {
          v14 = v9;
          v10 = v6;
        }
      }
      v7 += 7;
    }
    if ( v10 != nullptr )
      *((_DWORD *)v4 + 5) = v10;
    v4 += 24;
  }
  return result;
}


//======================================================================
// sub_21B05E
// address: 0x0021B05E   size: 0x262 (610 bytes)
//======================================================================
int __fastcall sub_21B05E(int *a1, __int16 *a2)
{
  int v2; // r5
  int v4; // r5
  int v5; // r5
  int v6; // r6
  unsigned int v7; // r2
  unsigned int v8; // r5
  unsigned int v10; // r5
  int v11; // r0
  int v12; // r2
  int v14; // r5
  unsigned int v15; // r2
  unsigned int v16; // r5
  int v17; // r0
  int v18; // r1
  int v19; // r1
  int *v20; // r6
  unsigned int v21; // r5
  unsigned int v22; // r0
  unsigned int v23; // r0
  __int16 v24; // r3
  unsigned __int16 *v25; // r1
  _DWORD *v26; // r3
  __int16 *v27; // r1
  _DWORD *v28; // r0
  __int16 v29; // r2
  __int16 v30; // r2
  int v31; // r4
  int v32; // r7
  int v33; // r6
  int v34; // r5
  int v35; // r3
  char v36; // r5
  int v37; // r7
  int v38; // r6
  int v39; // r2
  unsigned __int16 *v40; // [sp+8h] [bp-34h]
  unsigned __int16 *v41; // [sp+Ch] [bp-30h]
  int v42; // [sp+Ch] [bp-30h]
  unsigned __int16 *v43; // [sp+10h] [bp-2Ch]
  char v44; // [sp+10h] [bp-2Ch]
  int v45; // [sp+14h] [bp-28h]
  unsigned __int16 *v46; // [sp+14h] [bp-28h]
  _BYTE *v47; // [sp+18h] [bp-24h]
  int v48; // [sp+1Ch] [bp-20h]
  int v49; // [sp+20h] [bp-1Ch]
  int v50; // [sp+24h] [bp-18h]
  int v51; // [sp+28h] [bp-14h]
  unsigned int v52; // [sp+2Ch] [bp-10h]
  int v53[2]; // [sp+34h] [bp-8h] BYREF

  v48 = a1[1];
  v2 = a1[3];
  a1[6] = 0;
  v49 = v2;
  v4 = a1[2];
  a1[9] = 0;
  a1[11] = 0;
  v50 = v4;
  v5 = a1[4];
  a1[14] = 0;
  a1[18] = 0;
  a1[21] = 0;
  v51 = v5;
  v6 = *a1;
  v7 = a1[8];
  v8 = *a2;
  v53[0] = 0;
  if ( v8 > v7 )
  {
    v10 = (v8 + 3) & 0xFFFFFFFC;
    v11 = ft_mem_realloc(v6, 4, v7, v10, a1[10], v53);
    v12 = v53[0];
    a1[10] = v11;
    if ( v12 != 0 )
      return v53[0];
    a1[8] = v10;
  }
  v14 = a2[1];
  v15 = a1[5];
  if ( v14 + 2 > v15 )
  {
    v16 = (v14 + 11) & 0xFFFFFFF8;
    v17 = ft_mem_realloc(v6, 40, v15, v16, a1[7], v53);
    v18 = v53[0];
    a1[7] = v17;
    if ( v18 != 0 )
      return v53[0];
    a1[5] = v16;
  }
  a1[6] = a2[1];
  a1[9] = *a2;
  a1[17] = 2;
  a1[24] = -1;
  if ( FT_Outline_Get_Orientation(a2) == 1 )
  {
    a1[17] = -2;
    a1[24] = 1;
  }
  v19 = a1[6];
  a1[1] = v48;
  a1[28] = 0;
  a1[29] = 0;
  a1[3] = v49;
  a1[2] = v50;
  a1[4] = v51;
  v40 = (unsigned __int16 *)a1[7];
  if ( v19 != 0 )
  {
    v52 = a1[7] + 40 * v19;
    v20 = *((int **)a2 + 1);
    v47 = *((_BYTE **)a2 + 2);
    v21 = a1[7];
    v45 = 0;
    v41 = &v40[20 * **((__int16 **)a2 + 3)];
    v43 = v41;
    while ( v21 < v52 )
    {
      *(_WORD *)(v21 + 12) = *v20;
      *(_WORD *)(v21 + 14) = v20[1];
      v22 = FT_MulFix(*v20, v48) + v50;
      *(_DWORD *)(v21 + 16) = v22;
      *(_DWORD *)(v21 + 4) = v22;
      v23 = FT_MulFix(v20[1], v49) + v51;
      *(_DWORD *)(v21 + 20) = v23;
      *(_DWORD *)(v21 + 8) = v23;
      if ( (*v47 & 3) != 0 )
      {
        v24 = *v47 & 3;
        if ( (*v47 & 3) != 2 )
          v24 = 0;
      }
      else
      {
        v24 = 1;
      }
      v25 = v43;
      *(_WORD *)v21 = v24;
      *(_DWORD *)(v21 + 36) = v43;
      v43 = (unsigned __int16 *)v21;
      *((_DWORD *)v25 + 8) = v21;
      if ( (unsigned __int16 *)v21 == v41 )
      {
        if ( ++v45 >= *a2 )
        {
          v43 = (unsigned __int16 *)v21;
          v41 = (unsigned __int16 *)v21;
        }
        else
        {
          v41 = &v40[20 * *(__int16 *)(2 * v45 + *((_DWORD *)a2 + 3))];
          v43 = v41;
        }
      }
      v21 += 40;
      v20 += 2;
      ++v47;
    }
    v26 = (_DWORD *)a1[10];
    v27 = *((__int16 **)a2 + 3);
    v28 = &v26[a1[9]];
    v29 = 0;
    while ( v26 < v28 )
    {
      *v26++ = &v40[20 * v29];
      v30 = *v27++;
      v29 = v30 + 1;
    }
    v31 = 0;
    v42 = 0;
    v46 = v40;
    v44 = 4;
    while ( 1 )
    {
      if ( (unsigned int)v40 >= v52 )
        return v53[0];
      v32 = (__int16)v40[6];
      v33 = (__int16)v40[7];
      if ( v40 == v46 )
      {
        v34 = *((_DWORD *)v40 + 9);
        v42 = v32 - *(__int16 *)(v34 + 12);
        v31 = v33 - *(__int16 *)(v34 + 14);
        v46 = (unsigned __int16 *)(v34 + 40);
        v44 = sub_21AD38(v42, v31);
      }
      v35 = *((_DWORD *)v40 + 8);
      v36 = v44;
      *((_BYTE *)v40 + 2) = v44;
      v37 = *(__int16 *)(v35 + 12) - v32;
      v38 = *(__int16 *)(v35 + 14) - v33;
      v44 = sub_21AD38(v37, v38);
      v39 = *v40;
      *((_BYTE *)v40 + 3) = v44;
      if ( v39 << 30 != 0 )
        break;
      if ( v44 == v36 )
      {
        if ( v44 != 4 || ft_corner_is_flat(v42, v31, v37, v38) )
          break;
      }
      else if ( v36 == -v44 )
      {
        break;
      }
LABEL_36:
      v31 = v38;
      v42 = v37;
      v40 += 20;
    }
    *v40 |= 0x100u;
    goto LABEL_36;
  }
  return v53[0];
}


//======================================================================
// sub_21B2C0
// address: 0x0021B2C0   size: 0x26C (620 bytes)
//======================================================================
int __fastcall sub_21B2C0(int *a1, int a2)
{
  int *v3; // r5
  int *v5; // r5
  unsigned int v6; // r3
  unsigned int v7; // r2
  int v8; // r3
  int v9; // r12
  int v10; // r2
  unsigned __int16 *v11; // r2
  unsigned __int16 *v12; // r4
  int v13; // r1
  int v14; // r2
  int v15; // r7
  int v16; // r0
  int v17; // r2
  unsigned __int16 *v18; // r1
  int v19; // r0
  int v20; // r2
  int v21; // r0
  int result; // r0
  int v23; // r2
  int v24; // r6
  int v25; // r2
  int v26; // r6
  int v27; // r2
  int v28; // r6
  int v29; // r2
  int v30; // r6
  int v31; // r3
  unsigned int v32; // r5
  int i; // r3
  int v34; // r4
  int v35; // r0
  int v36; // r1
  int v37; // r2
  int v38; // r4
  int v39; // r1
  int v40; // r2
  int v41; // r1
  int v42; // r1
  int v43; // r7
  int v44; // r0
  int v45; // r2
  int v46; // r3
  int v47; // r6
  unsigned __int16 *v48; // [sp+8h] [bp-30h]
  int v49; // [sp+10h] [bp-28h]
  unsigned int v50; // [sp+14h] [bp-24h]
  int v51; // [sp+18h] [bp-20h]
  int *v52; // [sp+1Ch] [bp-1Ch]
  char v53; // [sp+20h] [bp-18h]
  int v54; // [sp+24h] [bp-14h]
  int v55; // [sp+28h] [bp-10h]
  unsigned int v56; // [sp+2Ch] [bp-Ch]
  int v57[14]; // [sp+34h] [bp-4h] BYREF

  v55 = *a1;
  v3 = &a1[7 * a2 + 10];
  v52 = v3;
  v50 = a1[10];
  v56 = v50 + 4 * a1[9];
  j_memset(&v57[1], 0, 0x30u);
  v5 = v3 + 1;
  v57[9] = 32000;
  v49 = (v5[6] + (v5[6] >> 31)) ^ (v5[6] >> 31);
  v52[1] = 0;
  v6 = a1[7];
  v7 = v6 + 40 * a1[6];
  if ( a2 != 0 )
  {
    while ( v6 < v7 )
    {
      *(_DWORD *)(v6 + 24) = *(__int16 *)(v6 + 14);
      *(_DWORD *)(v6 + 28) = *(__int16 *)(v6 + 12);
      v6 += 40;
    }
  }
  else
  {
    while ( v6 < v7 )
    {
      *(_DWORD *)(v6 + 24) = *(__int16 *)(v6 + 12);
      *(_DWORD *)(v6 + 28) = *(__int16 *)(v6 + 14);
      v6 += 40;
    }
  }
  v8 = 0;
  v9 = v49;
  while ( v50 < v56 )
  {
    v10 = *(_DWORD *)(*(_DWORD *)v50 + 36);
    v48 = *(unsigned __int16 **)v50;
    if ( *(_DWORD *)v50 != v10 )
    {
      if ( ((*(char *)(v10 + 3) + (*(char *)(v10 + 3) >> 31)) ^ (*(char *)(v10 + 3) >> 31)) == v49
        && ((*(char *)(*(_DWORD *)v50 + 3) + (*(char *)(*(_DWORD *)v50 + 3) >> 31))
          ^ (*(char *)(*(_DWORD *)v50 + 3) >> 31)) == v49 )
      {
        v11 = *(unsigned __int16 **)v50;
        while ( 1 )
        {
          v11 = *((unsigned __int16 **)v11 + 9);
          if ( ((*((char *)v11 + 3) + (*((char *)v11 + 3) >> 31)) ^ (*((char *)v11 + 3) >> 31)) != v49 )
            break;
          if ( v11 == v48 )
            goto LABEL_17;
        }
        v48 = *((unsigned __int16 **)v11 + 8);
      }
LABEL_17:
      v12 = v48;
      v13 = -32000;
      v51 = 0;
      v14 = 32000;
      v15 = 0;
      while ( 2 )
      {
        if ( v15 == 0 )
          goto LABEL_32;
        v16 = *((_DWORD *)v12 + 6);
        if ( v14 > v16 )
          v14 = *((_DWORD *)v12 + 6);
        if ( v13 < v16 )
          v13 = *((_DWORD *)v12 + 6);
        if ( *((char *)v12 + 3) != v9 || v12 == v48 )
        {
          v17 = v14 + v13;
          v18 = *(unsigned __int16 **)(v8 + 40);
          *(_DWORD *)(v8 + 44) = v12;
          *(_WORD *)(v8 + 2) = v17 >> 1;
          if ( (*v18 | *v12) << 30 != 0 )
            *(_BYTE *)v8 |= 1u;
          v14 = *((_DWORD *)v12 + 7);
          v13 = *((_DWORD *)v18 + 7);
          if ( v13 < v14 )
          {
LABEL_30:
            v19 = v13;
            v13 = *((_DWORD *)v12 + 7);
            v14 = v19;
          }
          else if ( v13 <= v14 )
          {
            v13 = *((_DWORD *)v12 + 7);
            goto LABEL_30;
          }
          *(_WORD *)(v8 + 4) = v14;
          *(_WORD *)(v8 + 6) = v13;
          *(_WORD *)(v8 + 8) = v13 - v14;
          v8 = 0;
LABEL_32:
          if ( v12 == v48 )
          {
            if ( v51 != 0 )
              break;
            v51 = 1;
          }
          v54 = *((char *)v12 + 3);
          v53 = *((_BYTE *)v12 + 3);
          v15 = 0;
          if ( ((v54 + (v54 >> 31)) ^ (v54 >> 31)) == v49 )
          {
            v20 = v5[1];
            v21 = *v5;
            v57[0] = 0;
            if ( v21 < v20 )
              goto LABEL_61;
            if ( v20 > 44739241 )
            {
              v57[0] = 64;
              v8 = 0;
              goto LABEL_39;
            }
            v42 = v20 + (v20 >> 2) + 4;
            v43 = 44739242;
            if ( v42 >= v20 )
            {
              v43 = v20 + (v20 >> 2) + 4;
              if ( v42 > 44739242 )
                v43 = 44739242;
            }
            v44 = ft_mem_realloc(v55, 48, v20, v43, v5[2], v57);
            v45 = v57[0];
            v8 = 0;
            v5[2] = v44;
            if ( v45 == 0 )
            {
              v5[1] = v43;
LABEL_61:
              v46 = *v5;
              v47 = v5[2];
              ++*v5;
              v8 = v47 + 48 * v46;
            }
LABEL_39:
            result = v57[0];
            if ( v57[0] != 0 )
              return result;
            v23 = v57[2];
            v24 = v57[3];
            *(_DWORD *)v8 = v57[1];
            *(_DWORD *)(v8 + 4) = v23;
            *(_DWORD *)(v8 + 8) = v24;
            v25 = v57[5];
            v26 = v57[6];
            *(_DWORD *)(v8 + 12) = v57[4];
            *(_DWORD *)(v8 + 16) = v25;
            *(_DWORD *)(v8 + 20) = v26;
            v27 = v57[8];
            v28 = v57[9];
            *(_DWORD *)(v8 + 24) = v57[7];
            *(_DWORD *)(v8 + 28) = v27;
            *(_DWORD *)(v8 + 32) = v28;
            v29 = v57[11];
            v30 = v57[12];
            *(_DWORD *)(v8 + 36) = v57[10];
            *(_DWORD *)(v8 + 40) = v29;
            *(_DWORD *)(v8 + 44) = v30;
            *(_BYTE *)(v8 + 1) = v53;
            v14 = *((_DWORD *)v12 + 6);
            v9 = v54;
            *(_DWORD *)(v8 + 40) = v12;
            *(_DWORD *)(v8 + 44) = v12;
            v13 = v14;
            v15 = 1;
          }
        }
        v12 = *((unsigned __int16 **)v12 + 8);
        continue;
      }
    }
    v50 += 4;
  }
  v31 = v5[2];
  v32 = v31 + 48 * v52[1];
  for ( i = v31 + 8; v32 > i - 8; i += 48 )
  {
    v34 = *(_DWORD *)(i + 32);
    v35 = *(_DWORD *)(i + 36);
    v36 = *(_DWORD *)(v34 + 28);
    v37 = *(_DWORD *)(v35 + 28);
    if ( v34 == v35 )
      continue;
    v38 = *(_DWORD *)(*(_DWORD *)(v34 + 36) + 28);
    if ( v36 >= v37 )
    {
      if ( v38 > v36 )
        *(_WORD *)i += (v38 - v36) >> 1;
      v41 = *(_DWORD *)(*(_DWORD *)(v35 + 32) + 28);
      if ( v41 < v37 )
      {
        v40 = v37 - v41;
        goto LABEL_53;
      }
    }
    else
    {
      if ( v38 < v36 )
        *(_WORD *)i += (v36 - v38) >> 1;
      v39 = *(_DWORD *)(*(_DWORD *)(v35 + 32) + 28);
      if ( v39 > v37 )
      {
        v40 = v39 - v37;
LABEL_53:
        *(_WORD *)i += v40 >> 1;
        continue;
      }
    }
  }
  return 0;
}


//======================================================================
// sub_21B538
// address: 0x0021B538   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall sub_21B538(_DWORD *a1, int a2, int a3, int a4, int **a5)
{
  int v6; // r2
  int v7; // r0
  int *v8; // r4
  int v10; // r4
  int v11; // r6
  int v12; // r0
  int v13; // r2
  int v14; // r3
  int v15; // r1
  int *v16; // r2
  int v17; // r6
  int *v18; // r3
  int v19; // r0
  int v20; // r4
  int v21; // r6
  int v22; // r1
  int v23; // r4
  int v24; // r6
  int v25; // r1
  int v26; // r4
  int result; // r0
  int *v28; // [sp+8h] [bp-1Ch]
  unsigned int v29; // [sp+10h] [bp-14h]
  int v31; // [sp+1Ch] [bp-8h] BYREF

  v6 = a1[4];
  v7 = a1[3];
  v8 = nullptr;
  v31 = 0;
  if ( v7 < v6 )
  {
LABEL_9:
    v8 = (int *)(a1[5] + 48 * a1[3]);
    v29 = a1[5];
    while ( (unsigned int)v8 > v29 )
    {
      v14 = *((__int16 *)v8 - 24);
      if ( v14 < a2 || v14 == a2 && a3 == a1[6] )
        break;
      v28 = v8 - 12;
      v15 = *(v8 - 11);
      v17 = *(v8 - 10);
      v16 = v8 - 9;
      *v8 = *(v8 - 12);
      v8[1] = v15;
      v8[2] = v17;
      v18 = v8 + 3;
      v19 = *(v8 - 9);
      v20 = *(v8 - 8);
      v21 = v16[2];
      v16 += 3;
      *v18 = v19;
      v18[1] = v20;
      v18[2] = v21;
      v18 += 3;
      v22 = *v16;
      v23 = v16[1];
      v24 = v16[2];
      v16 += 3;
      *v18 = v22;
      v18[1] = v23;
      v18[2] = v24;
      v18 += 3;
      v25 = v16[1];
      v26 = v16[2];
      *v18 = *v16;
      v18[1] = v25;
      v18[2] = v26;
      v8 = v28;
    }
    ++a1[3];
    j_memset(v8, 0, 0x30u);
    *(_WORD *)v8 = a2;
    *((_BYTE *)v8 + 13) = a3;
    goto LABEL_16;
  }
  if ( v6 > 44739241 )
  {
    v31 = 64;
    goto LABEL_16;
  }
  v10 = v6 + (v6 >> 2) + 4;
  v11 = 44739242;
  if ( v10 >= v6 )
  {
    v11 = v6 + (v6 >> 2) + 4;
    if ( v10 > 44739242 )
      v11 = 44739242;
  }
  v12 = ft_mem_realloc(a4, 48, v6, v11, a1[5], &v31);
  v13 = v31;
  v8 = nullptr;
  a1[5] = v12;
  if ( v13 == 0 )
  {
    a1[4] = v11;
    goto LABEL_9;
  }
LABEL_16:
  result = v31;
  *a5 = v8;
  return result;
}


//======================================================================
// sub_21B608
// address: 0x0021B608   size: 0xE4 (228 bytes)
//======================================================================
signed int __fastcall sub_21B608(signed int result, _DWORD *a2, int a3)
{
  int *v3; // r6
  int v4; // r5
  int v5; // r1
  unsigned int *v6; // r4
  unsigned int v7; // r0
  unsigned int v8; // r0
  unsigned int v9; // r2
  unsigned int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r3
  unsigned int v13; // r1
  int v14; // [sp+4h] [bp-10h]
  unsigned int i; // [sp+8h] [bp-Ch]
  int v16; // [sp+Ch] [bp-8h]

  v3 = (int *)(result + 340 * a3 + 40);
  if ( a3 != 0 )
  {
    v4 = a2[2];
    v5 = a2[4];
  }
  else
  {
    v4 = a2[1];
    v5 = a2[3];
  }
  v16 = v5;
  if ( v3[83] != v4 || v3[84] != v5 )
  {
    v3[83] = v4;
    v3[84] = v5;
    *v3 = v4;
    v3[1] = v5;
    v6 = (unsigned int *)(v3 + 57);
    for ( i = 0; i < v3[54]; ++i )
    {
      v7 = FT_MulFix(*(v6 - 2), v4) + v16;
      *(v6 - 1) = v7;
      *v6 = v7;
      v8 = FT_MulFix(v6[1], v4);
      v9 = v6[1];
      v10 = v8 + v16;
      v6[4] &= ~1u;
      v6[2] = v10;
      v6[3] = v10;
      result = FT_MulFix(*(v6 - 2) - v9, v4) + 48;
      if ( (unsigned int)result <= 0x60 )
      {
        v11 = (*(v6 - 1) + 32) & 0xFFFFFFC0;
        *v6 = v11;
        v14 = FT_DivFix(v11, v4) - v6[1];
        result = FT_MulFix((v14 + (v14 >> 31)) ^ (v14 >> 31), v4);
        v12 = 0;
        if ( result > 31 )
          v12 = (result + 32) & 0xFFFFFFC0;
        if ( v14 < 0 )
          v12 = -v12;
        v13 = v6[4];
        v6[3] = *v6 - v12;
        v6[4] = v13 | 1;
      }
      v6 += 7;
    }
  }
  return result;
}


//======================================================================
// sub_21B6EC
// address: 0x0021B6EC   size: 0x2C (44 bytes)
//======================================================================
signed int __fastcall sub_21B6EC(signed int a1, _DWORD *a2)
{
  _DWORD *v2; // r3
  _DWORD *v3; // r2
  int v6; // r0
  int v7; // r1
  int v8; // r6
  int v9; // r1
  int v10; // r6

  v2 = (_DWORD *)(a1 + 4);
  v3 = a2;
  v6 = *a2;
  v7 = a2[1];
  v8 = v3[2];
  v3 += 3;
  *v2 = v6;
  v2[1] = v7;
  v2[2] = v8;
  v2 += 3;
  v9 = v3[1];
  v10 = v3[2];
  *v2 = *v3;
  v2[1] = v9;
  v2[2] = v10;
  v2[3] = v3[3];
  sub_21B608(a1, a2, 0);
  return sub_21B608(a1, a2, 1);
}


//======================================================================
// sub_21B718
// address: 0x0021B718   size: 0x8 (8 bytes)
//======================================================================
signed int __fastcall sub_21B718(signed int a1, _DWORD *a2)
{
  return sub_21B6EC(a1, a2);
}


//======================================================================
// sub_21B720
// address: 0x0021B720   size: 0x194 (404 bytes)
//======================================================================
signed int __fastcall sub_21B720(_DWORD *a1, _DWORD *a2, int a3)
{
  int v4; // r6
  int v5; // r5
  int *v6; // r7
  signed int result; // r0
  int i; // r3
  unsigned int v9; // r2
  __int64 v10; // r0
  int *v11; // r4
  unsigned int j; // r5
  unsigned int v13; // r0
  unsigned int *v14; // r4
  unsigned int v15; // r0
  unsigned int v16; // r0
  unsigned int v17; // r2
  int v18; // r3
  unsigned int v19; // r2
  _DWORD *v20; // [sp+4h] [bp-18h]
  int v21; // [sp+10h] [bp-Ch]
  unsigned int k; // [sp+14h] [bp-8h]

  if ( a3 != 0 )
  {
    v4 = a2[2];
    v5 = a2[4];
  }
  else
  {
    v4 = a2[1];
    v5 = a2[3];
  }
  v21 = v5;
  v6 = &a1[99 * a3 + 10];
  if ( v6[97] != v4 || (result = v6[98]) != v5 )
  {
    v6[97] = v4;
    v6[98] = v5;
    v20 = a1 + 109;
    for ( i = 0; i != a1[163]; ++i )
    {
      if ( (v20[7 * i + 61] & 4) != 0 )
      {
        v9 = FT_MulFix(v20[7 * i + 58], a2[2]);
        HIDWORD(v10) = (v9 + 40) & 0xFFFFFFC0;
        if ( v9 != HIDWORD(v10) && a3 == 1 )
        {
          LODWORD(v10) = v4;
          v4 = FT_MulDiv(v10, v9);
        }
        break;
      }
    }
    *v6 = v4;
    v6[1] = v5;
    if ( a3 != 0 )
    {
      a1[3] = v4;
      a1[5] = v5;
    }
    else
    {
      a1[2] = v4;
      a1[4] = v5;
    }
    v11 = v6;
    for ( j = 0; ; ++j )
    {
      v11 += 3;
      if ( j >= v6[2] )
        break;
      v13 = FT_MulFix(*v11, v4);
      v11[1] = v13;
      v11[2] = v13;
    }
    result = FT_MulFix(v6[52], v4);
    *((_BYTE *)v6 + 212) = ((unsigned int)result <= 0x27) + (result < 0);
    if ( a3 == 1 )
    {
      v14 = (unsigned int *)(v6 + 57);
      for ( k = 0; k < v6[54]; ++k )
      {
        v15 = FT_MulFix(*(v14 - 2), v4) + v21;
        *(v14 - 1) = v15;
        *v14 = v15;
        v16 = FT_MulFix(v14[1], v4) + v21;
        v17 = v14[4] & 0xFFFFFFFE;
        v14[2] = v16;
        v14[3] = v16;
        v14[4] = v17;
        result = FT_MulFix(*(v14 - 2) - v14[1], v4);
        if ( (unsigned int)(result + 48) <= 0x60 )
        {
          v18 = 0;
          if ( ((result + (result >> 31)) ^ (result >> 31)) > 31 )
          {
            v18 = 64;
            if ( v21 <= 47 )
              v18 = 32;
          }
          if ( result < 0 )
            v18 = -v18;
          result = v14[4];
          v19 = (*(v14 - 1) + 32) & 0xFFFFFFC0;
          v14[3] = v19 - v18;
          *v14 = v19;
          v14[4] = result | 1;
        }
        v14 += 7;
      }
    }
  }
  return result;
}


//======================================================================
// sub_21B8B4
// address: 0x0021B8B4   size: 0x20 (32 bytes)
//======================================================================
signed int __fastcall sub_21B8B4(_DWORD *a1, _DWORD *a2)
{
  a1[6] = a2[5];
  a1[1] = *a2;
  sub_21B720(a1, a2, 0);
  return sub_21B720(a1, a2, 1);
}


//======================================================================
// sub_21B8D4
// address: 0x0021B8D4   size: 0x5C (92 bytes)
//======================================================================
__int64 __fastcall sub_21B8D4(__int64 a1)
{
  _DWORD *v1; // r4
  int v2; // r6
  _DWORD *v3; // r5
  int v4; // r1
  __int64 v6; // [sp+0h] [bp-Ch]

  v6 = a1;
  v1 = (_DWORD *)a1;
  if ( (_DWORD)a1 != 0 )
  {
    v2 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 != 0 )
    {
      v3 = (_DWORD *)a1;
      HIDWORD(v6) = 0;
      do
      {
        v4 = v3[13];
        v3[11] = 0;
        v3[12] = 0;
        ft_mem_free(v2, v4);
        v3[13] = 0;
        v3[14] = 0;
        v3[15] = 0;
        ft_mem_free(v2, v3[16]);
        v3[16] = 0;
        v3 += 7;
        ++HIDWORD(v6);
      }
      while ( HIDWORD(v6) != 2 );
      ft_mem_free(v2, v1[10]);
      v1[10] = 0;
      v1[8] = 0;
      v1[9] = 0;
      ft_mem_free(v2, v1[7]);
      v1[7] = 0;
      v1[6] = 0;
      v1[5] = 0;
      *v1 = 0;
    }
  }
  return v6;
}


//======================================================================
// sub_21B930
// address: 0x0021B930   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_21B930(int result)
{
  _DWORD *v1; // r4
  int v2; // r5
  int v3; // r7
  _DWORD *v4; // r6
  void (*v5)(void); // r3

  v1 = (_DWORD *)result;
  if ( result != 0 )
  {
    v2 = 0;
    v3 = *(_DWORD *)(*(_DWORD *)result + 100);
    do
    {
      v4 = &v1[v2];
      if ( v1[v2 + 3] != 0 )
      {
        v5 = (void (*)(void))(*(_DWORD **)((char *)&off_459C40 + v2 * 4))[5];
        if ( v5 != nullptr )
          v5();
        ft_mem_free(v3, v4[3]);
        v4[3] = 0;
      }
      ++v2;
    }
    while ( v2 != 4 );
    v1[1] = 0;
    v1[2] = 0;
    *v1 = 0;
    return ft_mem_free(v3, (int)v1);
  }
  return result;
}


//======================================================================
// sub_21B97C
// address: 0x0021B97C   size: 0x5D0 (1488 bytes)
//======================================================================
int __fastcall sub_21B97C(int a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  int v6; // r0
  int v7; // r4
  int v8; // r3
  int v9; // r3
  int v10; // r6
  int v11; // r3
  unsigned int v12; // r6
  int v13; // r1
  int v14; // r3
  int v15; // r1
  int v16; // r0
  void (__fastcall *v17)(int, int, int); // r3
  int v18; // r2
  int v19; // r3
  int v20; // r2
  int v21; // r7
  int v22; // r12
  int v23; // r0
  signed int v24; // r1
  signed int v25; // r3
  int v26; // r1
  unsigned int *v27; // r3
  int v28; // r2
  unsigned int v29; // r0
  int v30; // r7
  __int16 v31; // r7
  int v32; // r0
  int v33; // r6
  int v34; // r6
  int v35; // r6
  int v36; // r0
  int *v37; // r7
  unsigned int v38; // r2
  unsigned int v39; // r0
  int v40; // r3
  _DWORD *v41; // r0
  _DWORD *v42; // r3
  unsigned int v43; // r7
  unsigned int v44; // r0
  unsigned int v45; // r12
  int v46; // r2
  unsigned int v47; // r7
  int v48; // r7
  int v49; // r7
  int v50; // r1
  int v51; // r2
  unsigned int v52; // r0
  int v53; // r3
  int v54; // r1
  unsigned int v55; // r1
  unsigned int v56; // r2
  int v57; // r0
  unsigned int v58; // r6
  int v59; // r7
  int v60; // r0
  int v61; // r3
  unsigned int v62; // r0
  int v64; // [sp+5Ch] [bp-70h]
  unsigned int v65; // [sp+5Ch] [bp-70h]
  int Glyph; // [sp+60h] [bp-6Ch]
  int v67; // [sp+64h] [bp-68h]
  int v68; // [sp+68h] [bp-64h]
  int *v69; // [sp+6Ch] [bp-60h]
  unsigned int v70; // [sp+6Ch] [bp-60h]
  int v71; // [sp+70h] [bp-5Ch]
  int v72; // [sp+74h] [bp-58h]
  signed int v73; // [sp+78h] [bp-54h]
  int v74; // [sp+78h] [bp-54h]
  int v75; // [sp+7Ch] [bp-50h]
  unsigned int v76; // [sp+80h] [bp-4Ch]
  int v80; // [sp+94h] [bp-38h]
  int v81; // [sp+98h] [bp-34h]
  int v82; // [sp+9Ch] [bp-30h]
  int v83; // [sp+A0h] [bp-2Ch]
  int v84; // [sp+A4h] [bp-28h]
  unsigned int v85; // [sp+ACh] [bp-20h] BYREF
  unsigned int v86; // [sp+B0h] [bp-1Ch]
  unsigned int v87; // [sp+B4h] [bp-18h] BYREF
  int v88; // [sp+B8h] [bp-14h]
  unsigned int v89; // [sp+BCh] [bp-10h]
  unsigned int v90; // [sp+C0h] [bp-Ch]
  int v91; // [sp+C4h] [bp-8h]

  v6 = *(_DWORD *)a1;
  v7 = *(_DWORD *)(v6 + 84);
  v72 = *(_DWORD *)(a1 + 132);
  v67 = *(_DWORD *)(a1 + 8);
  v71 = *(_DWORD *)(v7 + 156);
  Glyph = FT_Load_Glyph(v6, a3, a4);
  if ( Glyph != 0 )
    return Glyph;
  v8 = *(unsigned __int8 *)(v71 + 8);
  *(_BYTE *)(a1 + 136) = v8;
  if ( v8 != 0 )
  {
    v9 = *(_DWORD *)(v71 + 16);
    v10 = *(_DWORD *)(v71 + 20);
    *(_DWORD *)(a1 + 140) = *(_DWORD *)(v71 + 12);
    *(_DWORD *)(a1 + 144) = v9;
    *(_DWORD *)(a1 + 148) = v10;
    *(_DWORD *)(a1 + 152) = *(_DWORD *)(v71 + 24);
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(v71 + 28);
    *(_DWORD *)(a1 + 160) = *(_DWORD *)(v71 + 32);
    v11 = *(_DWORD *)(a1 + 144);
    v12 = *(_DWORD *)(a1 + 148);
    v87 = *(_DWORD *)(a1 + 140);
    v88 = v11;
    v89 = v12;
    v90 = *(_DWORD *)(a1 + 152);
    FT_Matrix_Invert((int *)&v87);
    FT_Vector_Transform((int *)(a1 + 156), (int *)&v87);
  }
  v13 = *(_DWORD *)(v7 + 40);
  v14 = *(_DWORD *)(v7 + 72);
  *(_DWORD *)(v7 + 60) = *(_DWORD *)(v7 + 52);
  *(_DWORD *)(v7 + 56) = v13;
  if ( v14 == 1668246896 )
  {
    v31 = *(_WORD *)(v67 + 22);
    v74 = *(_DWORD *)(v7 + 128);
    v32 = FT_GlyphLoader_CheckSubGlyphs((int *)v67, v74);
    v33 = v32;
    if ( v32 != 0 )
      return v33;
    v75 = v31;
    j_memcpy(*(void **)(v67 + 88), *(const void **)(v7 + 132), 32 * v74);
    v68 = 0;
    *(_DWORD *)(v67 + 84) = v74;
    v80 = *(_DWORD *)(v67 + 48);
    while ( v68 != v74 )
    {
      v34 = 32 * (v68 + v80);
      v84 = *(_DWORD *)(a1 + 164);
      v83 = *(_DWORD *)(a1 + 168);
      v65 = *(__int16 *)(v67 + 22);
      v82 = *(_DWORD *)(a1 + 172);
      v81 = *(_DWORD *)(a1 + 176);
      v16 = sub_21B97C(a1, a2, *(_DWORD *)(*(_DWORD *)(v67 + 52) + v34), a4, a5 + 1);
      if ( v16 != 0 )
        return v16;
      v35 = *(_DWORD *)(v67 + 52) + v34;
      if ( (*(_WORD *)(v35 + 4) & 0x200) == 0 )
      {
        *(_DWORD *)(a1 + 164) = v84;
        *(_DWORD *)(a1 + 168) = v83;
        *(_DWORD *)(a1 + 172) = v82;
        *(_DWORD *)(a1 + 176) = v81;
      }
      v76 = *(__int16 *)(v67 + 22) - v65;
      if ( (*(_WORD *)(v35 + 4) & 0xC8) != 0 )
      {
        v37 = (int *)(*(_DWORD *)(v67 + 24) + 8 * v65);
        v69 = &v37[2 * v76];
        while ( v37 < v69 )
        {
          FT_Vector_Transform(v37, (int *)(v35 + 16));
          v37 += 2;
        }
      }
      v36 = *(_DWORD *)(v35 + 8);
      if ( (*(_WORD *)(v35 + 4) & 2) != 0 )
      {
        v43 = FT_MulFix(v36, *(_DWORD *)(a1 + 16)) + *(_DWORD *)(a1 + 20);
        v44 = FT_MulFix(*(_DWORD *)(v35 + 12), *(_DWORD *)(a1 + 24));
        v45 = (v43 + 32) & 0xFFFFFFC0;
        v70 = (v44 + *(_DWORD *)(a1 + 28) + 32) & 0xFFFFFFC0;
      }
      else
      {
        v38 = *(_DWORD *)(v35 + 12);
        v39 = v75 + v36;
        if ( v39 >= v65 )
          return 21;
        if ( v38 >= v76 )
          return 21;
        v40 = *(_DWORD *)(v67 + 24);
        v41 = (_DWORD *)(v40 + 8 * v39);
        v42 = (_DWORD *)(v40 + 8 * (v65 + v75 + v38));
        v45 = *v41 - *v42;
        v70 = v41[1] - v42[1];
      }
      v46 = *(_DWORD *)(v67 + 24);
      v47 = *(_DWORD *)(v67 + 28);
      v87 = *(_DWORD *)(v67 + 20);
      v88 = v46;
      v89 = v47;
      v48 = *(_DWORD *)(v67 + 36);
      v90 = *(_DWORD *)(v67 + 32);
      v91 = v48;
      v88 = v46 + 8 * v65;
      HIWORD(v87) = v76;
      FT_Outline_Translate((int)&v87, v45, v70);
      ++v68;
    }
    goto LABEL_56;
  }
  if ( v14 != 1869968492 )
  {
    Glyph = 7;
    goto LABEL_56;
  }
  if ( *(_BYTE *)(a1 + 136) != 0 )
    FT_Outline_Translate(v7 + 108, *(_DWORD *)(a1 + 156), *(_DWORD *)(a1 + 160));
  v15 = *(__int16 *)(v7 + 110);
  if ( v15 != -4 && (unsigned int)(v15 + 4 + *(__int16 *)(v67 + 22) + *(__int16 *)(v67 + 58)) > *(_DWORD *)(v67 + 4)
    || *(_WORD *)(v7 + 108) != 0
    && (unsigned int)(*(__int16 *)(v67 + 20) + *(__int16 *)(v67 + 56) + *(__int16 *)(v7 + 108)) > *(_DWORD *)(v67 + 8) )
  {
    v16 = FT_GlyphLoader_CheckPoints(v67, v15 + 4, *(__int16 *)(v7 + 108));
    if ( v16 != 0 )
      return v16;
  }
  j_memcpy(*(void **)(v67 + 60), *(const void **)(v7 + 112), 8 * *(__int16 *)(v7 + 110));
  j_memcpy(*(void **)(v67 + 68), *(const void **)(v7 + 120), 2 * *(__int16 *)(v7 + 108));
  j_memcpy(*(void **)(v67 + 64), *(const void **)(v7 + 116), *(__int16 *)(v7 + 110));
  *(_WORD *)(v67 + 58) = *(_WORD *)(v7 + 110);
  *(_WORD *)(v67 + 56) = *(_WORD *)(v7 + 108);
  *(_DWORD *)(a1 + 164) = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 168) = *(_DWORD *)(a1 + 28);
  *(_DWORD *)(a1 + 172) = FT_MulFix(*(_DWORD *)(v7 + 40), *(_DWORD *)(a1 + 16)) + *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 176) = *(_DWORD *)(a1 + 28);
  if ( *(_WORD *)(v7 + 110) == 0 )
    goto LABEL_56;
  v17 = *(void (__fastcall **)(int, int, int))(*(_DWORD *)v72 + 28);
  if ( v17 != nullptr )
    v17(a1 + 12, v67 + 56, v72);
  if ( *(_DWORD *)(a2 + 20) == 1 )
  {
    v26 = *(_DWORD *)(a1 + 164);
    v27 = (unsigned int *)(a1 + 172);
    v29 = (v26 + *(_DWORD *)(a1 + 124) + 32) & 0xFFFFFFC0;
    v28 = *(_DWORD *)(a1 + 172);
    *(_DWORD *)(a1 + 164) = v29;
    v30 = v28 + *(_DWORD *)(a1 + 128);
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 68);
    v19 = *(_DWORD *)(a1 + 76);
    if ( v18 > 1 && (*(_DWORD *)(a1 + 112) & 4) == 0 )
    {
      v20 = v19 + 48 * v18 - 48;
      v21 = *(_DWORD *)(v19 + 4);
      v73 = *(_DWORD *)(v19 + 8);
      v22 = v73 - v21;
      v64 = *(_DWORD *)(a1 + 172) - *(_DWORD *)(v20 + 4);
      v23 = v64 + *(_DWORD *)(v20 + 8);
      if ( v21 <= 23 )
        v22 -= 8;
      if ( v64 <= 23 )
        v23 += 8;
      v24 = (v22 + 32) & 0xFFFFFFC0;
      v25 = (v23 + 32) & 0xFFFFFFC0;
      *(_DWORD *)(a1 + 164) = v24;
      *(_DWORD *)(a1 + 172) = v25;
      if ( v24 >= v73 && v21 > 0 )
        *(_DWORD *)(a1 + 164) = v24 - 64;
      if ( v25 <= *(_DWORD *)(v20 + 8) && v64 > 0 )
        *(_DWORD *)(a1 + 172) = v25 + 64;
      *(_DWORD *)(v7 + 144) = *(_DWORD *)(a1 + 164) - v22;
      *(_DWORD *)(v7 + 148) = *(_DWORD *)(a1 + 172) - v23;
      goto LABEL_37;
    }
    v26 = *(_DWORD *)(a1 + 164);
    v27 = (unsigned int *)(a1 + 172);
    v28 = *(_DWORD *)(a1 + 172);
    v29 = (v26 + 32) & 0xFFFFFFC0;
    *(_DWORD *)(a1 + 164) = v29;
    v30 = v28;
  }
  *v27 = (v30 + 32) & 0xFFFFFFC0;
  *(_DWORD *)(v7 + 144) = v29 - v26;
  *(_DWORD *)(v7 + 148) = *v27 - v28;
LABEL_37:
  FT_GlyphLoader_Add(v67);
LABEL_56:
  if ( a5 == 0 )
  {
    v49 = *(_DWORD *)(v7 + 48);
    v50 = *(_DWORD *)(v7 + 36);
    v85 = *(_DWORD *)(v7 + 44) - *(_DWORD *)(v7 + 32);
    v51 = *(_DWORD *)(v72 + 8);
    v86 = v49 - v50;
    v85 = FT_MulFix(v85, v51);
    v52 = FT_MulFix(v86, *(_DWORD *)(v72 + 12));
    v53 = *(unsigned __int8 *)(a1 + 136);
    v86 = v52;
    if ( v53 != 0 )
    {
      FT_Outline_Transform((int *)(v67 + 20), (int *)(a1 + 140));
      FT_Vector_Transform((int *)&v85, (int *)(a1 + 140));
    }
    v54 = *(_DWORD *)(a1 + 164);
    if ( v54 != 0 )
      FT_Outline_Translate(v67 + 20, -v54, 0);
    FT_Outline_Get_CBox(v67 + 20, &v87);
    v55 = v87 & 0xFFFFFFC0;
    v89 = (v89 + 63) & 0xFFFFFFC0;
    v88 &= 0xFFFFFFC0;
    v57 = v88;
    v90 = (v90 + 63) & 0xFFFFFFC0;
    v56 = v90;
    v87 = v55;
    v58 = v85;
    *(_DWORD *)(v7 + 24) = v89 - v55;
    v59 = v86;
    *(_DWORD *)(v7 + 32) = v55;
    *(_DWORD *)(v7 + 36) = v56;
    *(_DWORD *)(v7 + 28) = v56 - v57;
    *(_DWORD *)(v7 + 44) = (v55 + v58) & 0xFFFFFFC0;
    *(_DWORD *)(v7 + 48) = (v56 + v59) & 0xFFFFFFC0;
    v60 = *(_DWORD *)(v7 + 40);
    if ( *(_DWORD *)(a2 + 20) != 1
      && ((*(_DWORD *)(*(_DWORD *)(v7 + 4) + 8) & 4) != 0
       || (v61 = *(_DWORD *)(a1 + 4), a3 < *(_DWORD *)(v61 + 4))
       && *(unsigned __int8 *)(*(_DWORD *)(v61 + 8) + a3) >> 7 != 0
       && *(_BYTE *)(v72 + 32) != 0) )
    {
      *(_DWORD *)(v7 + 40) = FT_MulFix(v60, *(_DWORD *)(v72 + 8));
      *(_DWORD *)(v7 + 144) = 0;
      *(_DWORD *)(v7 + 148) = 0;
    }
    else if ( v60 != 0 )
    {
      *(_DWORD *)(v7 + 40) = *(_DWORD *)(a1 + 172) - *(_DWORD *)(a1 + 164);
    }
    v62 = FT_MulFix(*(_DWORD *)(v7 + 52), *(_DWORD *)(v72 + 12));
    *(_DWORD *)(v7 + 40) = (*(_DWORD *)(v7 + 40) + 32) & 0xFFFFFFC0;
    *(_DWORD *)(v7 + 52) = (v62 + 32) & 0xFFFFFFC0;
    FT_GlyphLoader_Rewind(*(_DWORD *)v71);
    Glyph = FT_GlyphLoader_CopyPoints(*(_DWORD *)v71, v67);
    if ( Glyph == 0 )
    {
      *(_WORD *)(v7 + 108) = *(_WORD *)(*(_DWORD *)v71 + 20);
      *(_WORD *)(v7 + 110) = *(_WORD *)(*(_DWORD *)v71 + 22);
      *(_DWORD *)(v7 + 112) = *(_DWORD *)(*(_DWORD *)v71 + 24);
      *(_DWORD *)(v7 + 116) = *(_DWORD *)(*(_DWORD *)v71 + 28);
      *(_DWORD *)(v7 + 120) = *(_DWORD *)(*(_DWORD *)v71 + 32);
      *(_DWORD *)(v7 + 72) = 1869968492;
    }
  }
  return Glyph;
}


//======================================================================
// sub_21BF50
// address: 0x0021BF50   size: 0x1A (26 bytes)
//======================================================================
int *__fastcall sub_21BF50(__int64 a1)
{
  int v1; // r4
  int *result; // r0

  v1 = a1;
  LODWORD(a1) = a1 + 24;
  sub_21B8D4(a1);
  *(_DWORD *)(v1 + 12) = 0;
  *(_DWORD *)(v1 + 16) = 0;
  result = FT_GlyphLoader_Done(*(int **)(v1 + 20));
  *(_DWORD *)(v1 + 20) = 0;
  return result;
}


//======================================================================
// sub_21BF6A
// address: 0x0021BF6A   size: 0x242 (578 bytes)
//======================================================================
int __fastcall sub_21BF6A(int *a1, int a2)
{
  int *v3; // r6
  unsigned int v4; // r4
  int v5; // r0
  unsigned int v6; // r3
  int v7; // r7
  int v8; // r1
  int v9; // r5
  signed int v10; // r0
  int v11; // r3
  int i; // r2
  __int16 *v13; // r3
  int v14; // r1
  int v15; // r0
  _DWORD *v16; // r3
  _DWORD *v17; // r7
  unsigned int v18; // r0
  _DWORD *v19; // r3
  __int16 *v20; // r3
  __int16 *j; // r2
  int v22; // r1
  __int16 *v23; // r2
  int v24; // r0
  int v25; // r12
  int v26; // r6
  __int16 *v27; // r5
  int v28; // r4
  __int16 *v29; // r1
  int v32; // [sp+10h] [bp-24h]
  int v33; // [sp+10h] [bp-24h]
  unsigned int v34; // [sp+14h] [bp-20h]
  int v35; // [sp+18h] [bp-1Ch]
  int v36; // [sp+1Ch] [bp-18h]
  __int16 *v37; // [sp+1Ch] [bp-18h]
  int v38; // [sp+20h] [bp-14h]
  int v39; // [sp+20h] [bp-14h]
  void *v40; // [sp+2Ch] [bp-8h] BYREF

  v35 = sub_21B2C0(a1, a2);
  if ( v35 == 0 )
  {
    sub_21ADC8((int)a1, a2);
    v36 = *a1;
    v3 = &a1[7 * a2 + 11];
    v4 = a1[7 * a2 + 13];
    v5 = a1[27];
    v6 = v4 + 48 * *v3;
    v3[3] = 0;
    v7 = v5 + 396 * a2 + 40;
    v34 = v6;
    v8 = a1[3];
    if ( a2 != 0 )
    {
      v9 = a1[3];
      v32 = 0;
    }
    else
    {
      v9 = a1[1];
      v32 = FT_DivFix(64, v8);
    }
    v10 = FT_MulFix(*(_DWORD *)(v7 + 204), v9);
    if ( v10 > 16 )
      v10 = 16;
    v38 = FT_DivFix(v10, v9);
    while ( v4 < v34 )
    {
      v11 = *(__int16 *)(v4 + 8);
      if ( v11 >= v32 && (*(_DWORD *)(v4 + 24) == 0 || 2 * v11 >= 3 * v32) )
      {
        for ( i = 0; ; ++i )
        {
          v14 = *(__int16 *)(v4 + 2);
          if ( i >= v3[3] )
            break;
          v13 = (__int16 *)(v3[5] + 48 * i);
          if ( ((v14 - *v13 + ((v14 - *v13) >> 31)) ^ ((v14 - *v13) >> 31)) < v38
            && *((char *)v13 + 13) == *(char *)(v4 + 1) )
          {
            *(_DWORD *)(v4 + 16) = *((_DWORD *)v13 + 10);
            *(_DWORD *)(*((_DWORD *)v13 + 11) + 16) = v4;
            *((_DWORD *)v13 + 11) = v4;
            goto LABEL_23;
          }
        }
        v15 = sub_21B538(v3, v14, *(char *)(v4 + 1), v36, (int **)&v40);
        if ( v15 != 0 )
          return v15;
        j_memset(v40, 0, 0x30u);
        v16 = v40;
        *((_DWORD *)v40 + 10) = v4;
        v16[11] = v4;
        *((_BYTE *)v16 + 13) = *(_BYTE *)(v4 + 1);
        *(_WORD *)v16 = *(_WORD *)(v4 + 2);
        v17 = v40;
        v18 = FT_MulFix(*(__int16 *)(v4 + 2), v9);
        v19 = v40;
        v17[1] = v18;
        v19[2] = v19[1];
        *(_DWORD *)(v4 + 16) = v4;
      }
LABEL_23:
      v4 += 48;
    }
    v20 = (__int16 *)v3[5];
    v37 = &v20[24 * v3[3]];
    for ( j = v20; j < v37; j += 24 )
    {
      v22 = *((_DWORD *)j + 10);
      if ( v22 != 0 )
      {
        do
        {
          *(_DWORD *)(v22 + 12) = j;
          v22 = *(_DWORD *)(v22 + 16);
        }
        while ( v22 != *((_DWORD *)j + 10) );
      }
    }
    v23 = v20 + 12;
    while ( v20 < v37 )
    {
      v24 = *((_DWORD *)v20 + 10);
      v25 = 0;
      v33 = 0;
      do
      {
        if ( (*(_BYTE *)v24 & 1) != 0 )
          ++v33;
        else
          ++v25;
        v26 = *(_DWORD *)(v24 + 24);
        if ( v26 != 0 )
        {
          v27 = *(__int16 **)(v26 + 12);
          if ( v27 != nullptr )
            LOBYTE(v27) = v27 != v20;
        }
        else
        {
          LOBYTE(v27) = 0;
        }
        v28 = *(_DWORD *)(v24 + 20);
        if ( v28 != 0 && *(_DWORD *)(v28 + 12) != 0 || (_BYTE)v27 != 0 )
        {
          v29 = *(__int16 **)v23;
          if ( (_BYTE)v27 != 0 )
          {
            v29 = *((__int16 **)v23 + 1);
            v28 = *(_DWORD *)(v24 + 24);
          }
          if ( v29 == nullptr
            || (v39 = *v20 - *v29,
                ((*(__int16 *)(v24 + 2) - *(__int16 *)(v28 + 2) + ((*(__int16 *)(v24 + 2) - *(__int16 *)(v28 + 2)) >> 31))
               ^ ((*(__int16 *)(v24 + 2) - *(__int16 *)(v28 + 2)) >> 31)) < ((v39 + (v39 >> 31)) ^ (v39 >> 31))) )
          {
            v29 = *(__int16 **)(v28 + 12);
          }
          if ( (_BYTE)v27 != 0 )
          {
            *((_DWORD *)v23 + 1) = v29;
            *((_BYTE *)v29 + 12) |= 2u;
          }
          else
          {
            *(_DWORD *)v23 = v29;
          }
        }
        v24 = *(_DWORD *)(v24 + 16);
      }
      while ( v24 != *((_DWORD *)v20 + 10) );
      *((_BYTE *)v20 + 12) = v33 != 0 && v33 >= v25;
      if ( *((_DWORD *)v23 + 1) != 0 && *(_DWORD *)v23 != 0 )
        *((_DWORD *)v23 + 1) = 0;
      v20 += 24;
      v23 += 24;
    }
  }
  return v35;
}


//======================================================================
// sub_21C1AC
// address: 0x0021C1AC   size: 0x5A6 (1446 bytes)
//======================================================================
int __fastcall sub_21C1AC(int *a1, __int16 *a2, _DWORD *a3)
{
  int v4; // r0
  __int16 *v5; // r4
  signed int v6; // r6
  _DWORD *v7; // r5
  signed int v8; // r0
  int v9; // r0
  signed int v10; // r0
  int v11; // r3
  unsigned int v12; // r4
  int v13; // r3
  int v14; // r5
  int v15; // r2
  unsigned int v16; // r4
  char v17; // r3
  int v18; // r7
  int v19; // r5
  char v20; // r6
  int v21; // r5
  int v22; // r0
  int v23; // r1
  int v24; // r3
  int v25; // r5
  unsigned int v26; // r2
  unsigned int v27; // r1
  unsigned int v28; // r1
  int v29; // r5
  int v30; // r0
  int v31; // r7
  int v32; // r3
  unsigned int v33; // r5
  int v34; // r2
  int v35; // r1
  unsigned int v36; // r2
  int v37; // r0
  int v38; // r1
  unsigned int v39; // r7
  int v40; // r3
  int v41; // r2
  unsigned int v42; // r1
  unsigned int v43; // r0
  unsigned int v44; // r3
  int v45; // r4
  int v46; // r0
  int v47; // r1
  int v48; // r0
  int v49; // r3
  _DWORD *v50; // r3
  _DWORD *v51; // r1
  unsigned int v52; // r4
  _BYTE *v53; // r5
  int v54; // r3
  int v55; // r2
  int v56; // r1
  unsigned int v57; // r1
  unsigned int j; // r3
  int v59; // r7
  int v60; // r2
  int v61; // r6
  _DWORD *v62; // r3
  __int64 v63; // r0
  int v64; // r0
  int v65; // r2
  int v66; // r2
  int v67; // r0
  int v68; // r2
  int v69; // r5
  __int16 v70; // r6
  int v71; // r0
  int v72; // r2
  int v73; // r5
  int i; // [sp+30h] [bp-34h]
  int v76; // [sp+30h] [bp-34h]
  _DWORD *v77; // [sp+34h] [bp-30h]
  unsigned int v78; // [sp+34h] [bp-30h]
  int v80; // [sp+3Ch] [bp-28h]
  int v81; // [sp+3Ch] [bp-28h]
  _BOOL4 v82; // [sp+40h] [bp-24h]
  unsigned int v83; // [sp+40h] [bp-24h]
  int *v84; // [sp+44h] [bp-20h]
  __int16 *v85; // [sp+48h] [bp-1Ch]
  unsigned int v86; // [sp+48h] [bp-1Ch]
  int v87; // [sp+4Ch] [bp-18h]
  int v88; // [sp+50h] [bp-14h]
  int v89; // [sp+54h] [bp-10h]
  int v91; // [sp+5Ch] [bp-8h]

  v87 = sub_21B05E(a1, a2);
  if ( v87 == 0 )
  {
    if ( (a1[25] & 1) == 0 )
    {
      v4 = sub_21BF6A(a1, 0);
      if ( v4 != 0 )
        return v4;
    }
    if ( (a1[25] & 2) == 0 )
    {
      v4 = sub_21BF6A(a1, 1);
      if ( v4 != 0 )
        return v4;
      v5 = (__int16 *)a1[23];
      v85 = &v5[24 * a1[21]];
      v80 = a3[109];
      while ( v5 < v85 )
      {
        v6 = FT_MulFix(a3[9] / 0x28u, v80);
        if ( v6 > 32 )
          v6 = 32;
        v7 = a3 + 164;
        v77 = nullptr;
        for ( i = 0; i != 6; ++i )
        {
          if ( (v7[6] & 1) != 0 )
          {
            v82 = (v7[6] & 2) != 0;
            if ( (*((char *)v5 + 13) == a1[24]) != v82 )
            {
              v8 = FT_MulFix((*v5 - *v7 + ((*v5 - *v7) >> 31)) ^ ((*v5 - *v7) >> 31), v80);
              if ( v8 < v6 )
              {
                v6 = v8;
                v77 = v7;
              }
              if ( (v5[6] & 1) != 0 && v8 != 0 )
              {
                v9 = *v5;
                if ( v9 < *v7 != v82 )
                {
                  v10 = FT_MulFix((v9 - v7[3] + ((v9 - v7[3]) >> 31)) ^ ((v9 - v7[3]) >> 31), v80);
                  if ( v10 < v6 )
                  {
                    v77 = v7 + 3;
                    v6 = v10;
                  }
                }
              }
            }
          }
          v7 += 7;
        }
        if ( v77 != nullptr )
          *((_DWORD *)v5 + 5) = v77;
        v5 += 24;
      }
    }
    v81 = 0;
    v84 = a1;
LABEL_27:
    v11 = a1[25];
    if ( v81 != 0 )
    {
      if ( (v11 & 2) != 0 )
        goto LABEL_138;
    }
    else if ( (v11 & 1) != 0 )
    {
      goto LABEL_138;
    }
    v83 = 0;
    v78 = v84[16];
    v86 = v78 + 48 * v84[14];
    v12 = v78;
    if ( v81 == 1 )
    {
      while ( v12 < v86 )
      {
        if ( (*(_BYTE *)(v12 + 12) & 4) == 0 )
        {
          v13 = *(_DWORD *)(v12 + 20);
          v14 = *(_DWORD *)(v12 + 24);
          v15 = v12;
          if ( v13 == 0 )
          {
            if ( v14 == 0 )
              goto LABEL_43;
            v13 = *(_DWORD *)(v14 + 20);
            if ( v13 == 0 )
              goto LABEL_43;
            v15 = *(_DWORD *)(v12 + 24);
            v14 = v12;
          }
          *(_DWORD *)(v15 + 8) = *(_DWORD *)(v13 + 8);
          *(_BYTE *)(v15 + 12) |= 4u;
          if ( v14 != 0 && *(_DWORD *)(v14 + 20) == 0 )
          {
            sub_13985E((int)a1, 1, v15, v14);
            *(_BYTE *)(v14 + 12) |= 4u;
          }
          if ( v83 == 0 )
            v83 = v12;
        }
LABEL_43:
        v12 += 48;
      }
    }
    v16 = v78;
    v88 = 0;
    while ( 1 )
    {
      if ( v16 >= v86 )
      {
        if ( v81 == 0 )
        {
          v41 = -1431655765 * ((int)(v86 - v78) >> 4);
          if ( v41 == 6 )
          {
            v42 = v78;
            v43 = v78 + 96;
            v44 = v78 + 192;
            goto LABEL_82;
          }
          if ( v41 == 12 )
          {
            v42 = v78 + 48;
            v43 = v78 + 240;
            v44 = v78 + 432;
LABEL_82:
            v45 = *(_DWORD *)(v43 + 4) - *(_DWORD *)(v42 + 4) - (*(_DWORD *)(v44 + 4) - *(_DWORD *)(v43 + 4));
            if ( ((v45 + (v45 >> 31)) ^ (v45 >> 31)) <= 7 )
            {
              v46 = *(_DWORD *)(v42 + 8) - 2 * *(_DWORD *)(v43 + 8);
              v47 = v46 + *(_DWORD *)(v44 + 8);
              *(_DWORD *)(v44 + 8) = -v46;
              v48 = *(_DWORD *)(v44 + 24);
              if ( v48 != 0 )
                *(_DWORD *)(v48 + 8) -= v47;
              if ( v41 == 12 )
              {
                *(_DWORD *)(v78 + 392) -= v47;
                *(_DWORD *)(v78 + 536) -= v47;
              }
              *(_BYTE *)(v44 + 12) |= 4u;
              v49 = *(_DWORD *)(v44 + 24);
              if ( v49 != 0 )
                *(_BYTE *)(v49 + 12) |= 4u;
            }
          }
        }
        if ( v88 != 0 || v83 == 0 )
        {
          v52 = v78;
          v53 = (_BYTE *)(v78 + 60);
          while ( v52 < v86 )
          {
            if ( (*(_BYTE *)(v52 + 12) & 4) == 0 )
            {
              v54 = *(_DWORD *)(v52 + 28);
              if ( v54 != 0
                && (v55 = *(_DWORD *)(v54 + 4),
                    v56 = *(_DWORD *)(v52 + 4),
                    ((v55 - v56 + ((v55 - v56) >> 31)) ^ ((v55 - v56) >> 31)) <= 79) )
              {
                *((_DWORD *)v53 - 13) = *(_DWORD *)(v54 + 8) + v56 - v55;
              }
              else
              {
                v57 = v52 - 48;
                if ( v83 != 0 )
                {
                  while ( v57 >= v78 && (*(_BYTE *)(v57 + 12) & 4) == 0 )
                    v57 -= 48;
                  for ( j = v52 + 48; j < v86 && (*(_BYTE *)(j + 12) & 4) == 0; j += 48 )
                    ;
                  if ( v57 < v78 || v57 >= v52 || j >= v86 || j <= v52 )
                  {
                    *((_DWORD *)v53 - 13) = *(_DWORD *)(v83 + 8)
                                          + ((*(_DWORD *)(v52 + 4) - *(_DWORD *)(v83 + 4) + 16) & 0xFFFFFFE0);
                  }
                  else
                  {
                    v59 = *(_DWORD *)(j + 4);
                    v60 = *(_DWORD *)(v57 + 4);
                    v61 = *(_DWORD *)(v57 + 8);
                    if ( v59 == v60 )
                    {
                      v62 = v53 - 52;
                    }
                    else
                    {
                      LODWORD(v63) = *(_DWORD *)(v52 + 4) - v60;
                      HIDWORD(v63) = *(_DWORD *)(j + 8) - v61;
                      v64 = FT_MulDiv(v63, v59 - v60);
                      v62 = v53 - 52;
                      v61 += v64;
                    }
                    *v62 = v61;
                  }
                }
                else
                {
                  *((_DWORD *)v53 - 13) = (*(_DWORD *)(v52 + 4) + 32) & 0xFFFFFFC0;
                  v83 = v52;
                }
              }
              *(_BYTE *)(v52 + 12) |= 4u;
              if ( v52 > v78 )
              {
                v65 = *((_DWORD *)v53 - 25);
                if ( *((_DWORD *)v53 - 13) < v65 )
                  *((_DWORD *)v53 - 13) = v65;
              }
              if ( v86 > v52 + 48 && (*v53 & 4) != 0 )
              {
                v66 = *((_DWORD *)v53 - 1);
                if ( *((_DWORD *)v53 - 13) > v66 )
                  *((_DWORD *)v53 - 13) = v66;
              }
            }
            v52 += 48;
            v53 += 48;
          }
        }
        v50 = (_DWORD *)v84[13];
        v51 = &v50[12 * v84[11]];
        if ( v81 != 0 )
        {
          while ( v50 < v51 )
          {
            v71 = v50[3];
            if ( v71 != 0 )
            {
              v72 = v50[10];
              v73 = v50[11];
              while ( 1 )
              {
                *(_DWORD *)(v72 + 20) = *(_DWORD *)(v71 + 8);
                *(_WORD *)v72 |= 0x80u;
                if ( v72 == v73 )
                  break;
                v72 = *(_DWORD *)(v72 + 32);
              }
            }
            v50 += 12;
          }
        }
        else
        {
          while ( v50 < v51 )
          {
            v67 = v50[3];
            if ( v67 != 0 )
            {
              v68 = v50[10];
              v69 = v50[11];
              while ( 1 )
              {
                v70 = *(_WORD *)v68 | 0x40;
                *(_DWORD *)(v68 + 16) = *(_DWORD *)(v67 + 8);
                *(_WORD *)v68 = v70;
                if ( v68 == v69 )
                  break;
                v68 = *(_DWORD *)(v68 + 32);
              }
            }
            v50 += 12;
          }
        }
        sub_13987C((int)a1, v81);
        sub_139AA0(a1, v81);
LABEL_138:
        ++v81;
        v84 += 7;
        if ( v81 == 2 )
        {
          sub_21AD7A((int)a1, (int)a2);
          return v87;
        }
        goto LABEL_27;
      }
      v17 = *(_BYTE *)(v16 + 12);
      if ( (v17 & 4) == 0 )
      {
        v76 = *(_DWORD *)(v16 + 24);
        if ( v76 == 0 )
        {
          ++v88;
          goto LABEL_76;
        }
        if ( *(_DWORD *)(v76 + 20) != 0 )
        {
          sub_13985E((int)a1, v81, v76, v16);
          *(_BYTE *)(v16 + 12) |= 4u;
          goto LABEL_76;
        }
        v18 = *(_DWORD *)(v16 + 4);
        v19 = *(_DWORD *)(v76 + 4);
        v20 = *(_BYTE *)(v76 + 12);
        if ( v83 == 0 )
        {
          v21 = v19 - v18;
          v22 = sub_1396F0((int)a1, v81, v21, v17, v20);
          if ( v22 <= 64 )
          {
            v23 = 32;
            v24 = 32;
LABEL_56:
            v25 = v18 + (v21 >> 1);
            v26 = (v25 + 32) & 0xFFFFFFC0;
            v27 = v26 + v23;
            if ( (int)((v25 + v24 - v26 + ((int)(v25 + v24 - v26) >> 31)) ^ ((int)(v25 + v24 - v26) >> 31)) < (int)((v25 - v27 + ((int)(v25 - v27) >> 31)) ^ ((int)(v25 - v27) >> 31)) )
              v27 = v26 - v24;
            v28 = v27 - v22 / 2;
            *(_DWORD *)(v16 + 8) = v28;
            *(_DWORD *)(v76 + 8) = v28 + v22;
          }
          else
          {
            if ( v22 <= 95 )
            {
              v23 = 26;
              v24 = 38;
              goto LABEL_56;
            }
            *(_DWORD *)(v16 + 8) = (v18 + 32) & 0xFFFFFFC0;
          }
          *(_BYTE *)(v16 + 12) |= 4u;
          sub_13985E((int)a1, v81, v16, v76);
          v83 = v16;
          goto LABEL_76;
        }
        v29 = v19 - v18;
        v89 = *(_DWORD *)(v83 + 8);
        v91 = *(_DWORD *)(v83 + 4);
        v30 = sub_1396F0((int)a1, v81, v29, v17, v20);
        if ( (v20 & 4) != 0 )
        {
          *(_DWORD *)(v16 + 8) = *(_DWORD *)(v76 + 8) - v30;
        }
        else
        {
          v31 = v89 + v18 - v91;
          v32 = v31 + (v29 >> 1);
          if ( v30 > 95 )
          {
            v38 = v31;
            v39 = ((v31 + v29 + 32) & 0xFFFFFFC0) - v30;
            if ( (int)((((v38 + 32) & 0xFFFFFFC0)
                      + (v30 >> 1)
                      - v32
                      + ((int)(((v38 + 32) & 0xFFFFFFC0) + (v30 >> 1) - v32) >> 31))
                     ^ ((int)(((v38 + 32) & 0xFFFFFFC0) + (v30 >> 1) - v32) >> 31)) < (int)((v39
                                                                                           + (v30 >> 1)
                                                                                           - v32
                                                                                           + ((int)(v39
                                                                                                  + (v30 >> 1)
                                                                                                  - v32) >> 31))
                                                                                          ^ ((int)(v39 + (v30 >> 1) - v32) >> 31)) )
              v39 = (v38 + 32) & 0xFFFFFFC0;
            *(_DWORD *)(v16 + 8) = v39;
            *(_DWORD *)(v76 + 8) = v39 + v30;
          }
          else
          {
            v33 = (v32 + 32) & 0xFFFFFFC0;
            if ( v30 > 64 )
            {
              v34 = 26;
              v35 = 38;
            }
            else
            {
              v34 = 32;
              v35 = 32;
            }
            v36 = v33 + v34;
            if ( (int)((v32 + v35 - v33 + ((int)(v32 + v35 - v33) >> 31)) ^ ((int)(v32 + v35 - v33) >> 31)) < (int)((v32 - v36 + ((int)(v32 - v36) >> 31)) ^ ((int)(v32 - v36) >> 31)) )
              v36 = v33 - v35;
            v37 = v30 / 2;
            *(_DWORD *)(v16 + 8) = v36 - v37;
            *(_DWORD *)(v76 + 8) = v36 + v37;
          }
        }
        *(_BYTE *)(v16 + 12) |= 4u;
        *(_BYTE *)(v76 + 12) |= 4u;
        if ( v16 > v78 )
        {
          v40 = *(_DWORD *)(v16 - 40);
          if ( *(_DWORD *)(v16 + 8) < v40 )
            *(_DWORD *)(v16 + 8) = v40;
        }
      }
LABEL_76:
      v16 += 48;
    }
  }
  return v87;
}


//======================================================================
// sub_21C758
// address: 0x0021C758   size: 0x4D2 (1234 bytes)
//======================================================================
int __fastcall sub_21C758(int *a1, int a2)
{
  unsigned int v3; // r4
  int v4; // r5
  unsigned int v5; // r12
  __int16 *v6; // r3
  __int16 *v7; // r0
  __int16 v8; // r5
  int i; // r5
  int v10; // r6
  _DWORD *v11; // r6
  int v12; // r4
  int v13; // r1
  _DWORD *j; // r3
  _DWORD *k; // r2
  int v16; // r4
  int v17; // r1
  int v18; // r1
  int v19; // r5
  int v20; // r0
  _DWORD *m; // r3
  int v22; // r0
  int v23; // r1
  int v24; // r2
  _DWORD *v25; // r5
  _DWORD *v26; // r4
  int v27; // r5
  int v28; // r2
  _DWORD *ii; // r5
  _DWORD *v30; // r3
  _DWORD *v31; // r0
  int v32; // r2
  unsigned int v33; // r4
  int v34; // r5
  int v35; // r7
  int *v36; // r5
  __int16 *v37; // r3
  int v38; // r7
  int v39; // r0
  _DWORD *v40; // r3
  _DWORD *v41; // r5
  unsigned int v42; // r0
  int v43; // r5
  int v44; // r12
  int v45; // r2
  int v46; // r0
  int v47; // r0
  int v48; // r1
  int v49; // r2
  int v50; // r6
  __int16 *v51; // r3
  __int16 *jj; // r2
  int v53; // r1
  __int16 *v54; // r2
  int v55; // r0
  int v56; // r12
  int v57; // r5
  bool v58; // r1
  int v59; // r4
  _BOOL4 v60; // r7
  __int16 *v61; // r1
  int v62; // r5
  int v64; // [sp+Ch] [bp-40h]
  _DWORD *n; // [sp+Ch] [bp-40h]
  int v66; // [sp+Ch] [bp-40h]
  int v67; // [sp+10h] [bp-3Ch]
  int v68; // [sp+10h] [bp-3Ch]
  int v69; // [sp+18h] [bp-34h]
  _DWORD *v70; // [sp+18h] [bp-34h]
  int v71; // [sp+18h] [bp-34h]
  _DWORD *v72; // [sp+1Ch] [bp-30h]
  int v73; // [sp+1Ch] [bp-30h]
  int v75; // [sp+20h] [bp-2Ch]
  int v76; // [sp+20h] [bp-2Ch]
  _DWORD *v77; // [sp+24h] [bp-28h]
  int v78; // [sp+24h] [bp-28h]
  __int16 *v79; // [sp+24h] [bp-28h]
  int *v80; // [sp+28h] [bp-24h]
  int v81; // [sp+28h] [bp-24h]
  int v82; // [sp+2Ch] [bp-20h]
  int v83; // [sp+2Ch] [bp-20h]
  int v84; // [sp+30h] [bp-1Ch]
  int v85; // [sp+30h] [bp-1Ch]
  int v86; // [sp+30h] [bp-1Ch]
  int v87; // [sp+34h] [bp-18h]
  int v88; // [sp+34h] [bp-18h]
  int v89; // [sp+38h] [bp-14h]
  _DWORD *v90; // [sp+3Ch] [bp-10h]
  unsigned int v91; // [sp+3Ch] [bp-10h]
  void *v92; // [sp+44h] [bp-8h] BYREF

  v80 = &a1[7 * a2 + 10];
  v72 = v80 + 1;
  v3 = v80[3];
  v4 = v80[1];
  v89 = sub_21B2C0(a1, a2);
  if ( v89 == 0 )
  {
    v5 = 48 * v4 + v3;
    while ( v3 < v5 )
    {
      v6 = *(__int16 **)(v3 + 40);
      v7 = *(__int16 **)(v3 + 44);
      v8 = *v6;
      *(_BYTE *)v3 &= ~1u;
      for ( i = v8 & 3; v6 != v7; i = v10 )
      {
        v6 = *((__int16 **)v6 + 8);
        v10 = *v6 & 3;
        if ( (i | v10) == 0 )
          break;
        if ( v6 == v7 )
          *(_BYTE *)v3 |= 1u;
      }
      v3 += 48;
    }
    v11 = (_DWORD *)v80[3];
    v12 = *(_DWORD *)(a1[27] + 36);
    v69 = v80[7];
    if ( a2 != 0 )
      v13 = a1[3];
    else
      v13 = a1[1];
    v77 = &v11[12 * v80[1]];
    v87 = FT_DivFix(192, v13);
    v84 = v12 / 256;
    for ( j = v11; j < v77; j += 12 )
    {
      if ( j[10] != j[11] && *((char *)j + 1) == v69 )
      {
        for ( k = v11; k < v77; k += 12 )
        {
          if ( k != j && *((char *)j + 1) + *((char *)k + 1) == 0 )
          {
            v67 = *((__int16 *)k + 1) - *((__int16 *)j + 1);
            if ( v67 >= 0 )
            {
              v16 = *((__int16 *)k + 3);
              if ( v16 > *((__int16 *)j + 3) )
                v16 = *((__int16 *)j + 3);
              v17 = *((__int16 *)k + 2);
              if ( v17 < *((__int16 *)j + 2) )
                v17 = *((__int16 *)j + 2);
              v18 = v16 - v17;
              if ( v18 >= v84 )
              {
                v19 = j[8];
                v64 = 8 * v67;
                if ( 8 * v67 < 9 * v19 && (v64 < 7 * v19 || j[9] < v18) )
                {
                  j[9] = v18;
                  j[5] = k;
                  j[8] = v67;
                }
                v20 = k[8];
                if ( v64 < 9 * v20 && (v64 < 7 * v20 || k[9] < v18) )
                {
                  k[9] = v18;
                  k[5] = j;
                  k[8] = v67;
                }
              }
            }
          }
        }
      }
    }
    for ( m = v11; m < v77; m += 12 )
    {
      v22 = m[5];
      if ( v22 != 0 )
      {
        v23 = *(_DWORD *)(v22 + 20);
        if ( (_DWORD *)v23 == m && *(__int16 *)(v22 + 2) > *((__int16 *)m + 1) && m[8] < v87 )
        {
          for ( n = v11; n < v77; n += 12 )
          {
            v24 = *((__int16 *)n + 1);
            v85 = *(__int16 *)(v23 + 2);
            if ( v24 <= v85 && (_DWORD *)v23 != n )
            {
              v25 = (_DWORD *)n[5];
              v90 = v25;
              if ( v25 != nullptr )
              {
                v26 = (_DWORD *)v25[5];
                if ( v26 == n )
                {
                  v68 = *((__int16 *)v25 + 1);
                  v82 = *(__int16 *)(v22 + 2);
                  if ( v68 >= v82 && (v85 != v24 || v82 != v68) )
                  {
                    v27 = v26[8];
                    v28 = *(_DWORD *)(v23 + 32);
                    if ( v27 > v28 && 4 * v28 > v27 )
                    {
                      if ( *(_DWORD *)(v23 + 36) < 3 * v26[9] )
                      {
                        *(_DWORD *)(v22 + 20) = 0;
                        *(_DWORD *)(v23 + 20) = 0;
                        break;
                      }
                      for ( ii = v11; ii < v77; ii += 12 )
                      {
                        v70 = (_DWORD *)ii[5];
                        if ( v70 == v26 )
                        {
                          ii[5] = 0;
                          ii[6] = v22;
                        }
                        else if ( v70 == v90 )
                        {
                          ii[5] = 0;
                          ii[6] = v23;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    while ( v11 < v77 )
    {
      v30 = (_DWORD *)v11[5];
      if ( v30 != nullptr )
      {
        v31 = (_DWORD *)v30[5];
        ++v30[7];
        if ( v31 != v11 )
        {
          v11[5] = 0;
          v32 = v30[8];
          if ( v32 >= v87 && v11[8] >= 4 * v32 )
            --v30[7];
          else
            v11[6] = v30[5];
        }
      }
      v11 += 12;
    }
    v83 = *a1;
    v33 = v80[3];
    v34 = a1[27] + 340 * a2 + 40;
    v91 = v33 + 48 * v80[1];
    v80[4] = 0;
    if ( a2 != 0 )
      v35 = a1[3];
    else
      v35 = a1[1];
    v78 = v35;
    v36 = (int *)(v34 + 204);
    if ( (int)FT_MulFix(*v36, v35) <= 16 )
      v75 = *v36;
    else
      v75 = FT_DivFix(16, v35);
    while ( 1 )
    {
      v86 = v72[3];
      if ( v33 >= v91 )
        break;
      v38 = 0;
      v43 = 0;
      v44 = 0xFFFF;
      while ( v38 < v86 )
      {
        v37 = (__int16 *)(v72[5] + 48 * v38);
        if ( *((char *)v37 + 13) == *(char *)(v33 + 1) )
        {
          v45 = *(__int16 *)(v33 + 2) - *v37;
          v46 = (v45 + (v45 >> 31)) ^ (v45 >> 31);
          v66 = v46;
          if ( v46 < v75 && v46 < v44 )
          {
            v88 = *(_DWORD *)(v33 + 20);
            if ( v88 != 0 )
            {
              v47 = *((_DWORD *)v37 + 10);
              v48 = 0;
              while ( 1 )
              {
                v49 = *(_DWORD *)(v47 + 20);
                if ( v49 != 0 )
                {
                  v81 = *(__int16 *)(v88 + 2);
                  v50 = *(__int16 *)(v49 + 2);
                  v48 = v50 - v81;
                  if ( v81 > v50 )
                    v48 = v81 - v50;
                  if ( v48 >= v75 )
                    break;
                }
                v47 = *(_DWORD *)(v47 + 16);
                if ( v47 == *((_DWORD *)v37 + 10) )
                {
                  if ( v48 >= v75 )
                    break;
                  v44 = v66;
                  goto LABEL_101;
                }
              }
            }
            else
            {
              v44 = (v45 + (v45 >> 31)) ^ (v45 >> 31);
LABEL_101:
              v43 = v72[5] + 48 * v38;
            }
          }
        }
        ++v38;
      }
      if ( v43 != 0 )
      {
        *(_DWORD *)(v33 + 16) = *(_DWORD *)(v43 + 40);
        *(_DWORD *)(*(_DWORD *)(v43 + 44) + 16) = v33;
        *(_DWORD *)(v43 + 44) = v33;
      }
      else
      {
        v39 = sub_21B538(v72, *(__int16 *)(v33 + 2), *(char *)(v33 + 1), v83, (int **)&v92);
        if ( v39 != 0 )
          return v39;
        j_memset(v92, 0, 0x30u);
        v40 = v92;
        *((_DWORD *)v92 + 10) = v33;
        v40[11] = v33;
        *(_WORD *)v40 = *(_WORD *)(v33 + 2);
        v41 = v92;
        v42 = FT_MulFix(*(__int16 *)(v33 + 2), v78);
        v41[2] = v42;
        v41[1] = v42;
        *(_DWORD *)(v33 + 16) = v33;
        *((_BYTE *)v92 + 13) = *(_BYTE *)(v33 + 1);
      }
      v33 += 48;
    }
    v51 = (__int16 *)v72[5];
    v79 = &v51[24 * v86];
    for ( jj = v51; jj < v79; jj += 24 )
    {
      v53 = *((_DWORD *)jj + 10);
      if ( v53 != 0 )
      {
        do
        {
          *(_DWORD *)(v53 + 12) = jj;
          v53 = *(_DWORD *)(v53 + 16);
        }
        while ( v53 != *((_DWORD *)jj + 10) );
      }
    }
    v54 = v51 + 12;
    while ( v51 < v79 )
    {
      v55 = *((_DWORD *)v51 + 10);
      v73 = 0;
      v56 = 0;
      do
      {
        if ( (*(_BYTE *)v55 & 1) != 0 )
          ++v56;
        else
          ++v73;
        v57 = *(_DWORD *)(v55 + 24);
        v58 = v57 != 0 && *(_DWORD *)(v57 + 12) != (_DWORD)v51;
        v59 = *(_DWORD *)(v55 + 20);
        v60 = v58;
        if ( v59 != 0 || v58 )
        {
          v61 = *(__int16 **)v54;
          if ( v60 )
          {
            v61 = *((__int16 **)v54 + 1);
            v59 = *(_DWORD *)(v55 + 24);
          }
          if ( v61 == nullptr )
            goto LABEL_126;
          v71 = *(__int16 *)(v55 + 2);
          v62 = *(__int16 *)(v59 + 2);
          v76 = v62 - v71;
          if ( v71 > v62 )
            v76 = v71 - v62;
          if ( v76 < ((*v51 - *v61 + ((*v51 - *v61) >> 31)) ^ ((*v51 - *v61) >> 31)) )
LABEL_126:
            v61 = *(__int16 **)(v59 + 12);
          if ( v60 )
          {
            *((_DWORD *)v54 + 1) = v61;
            *((_BYTE *)v61 + 12) |= 2u;
          }
          else
          {
            *(_DWORD *)v54 = v61;
          }
        }
        v55 = *(_DWORD *)(v55 + 16);
      }
      while ( v55 != *((_DWORD *)v51 + 10) );
      *((_BYTE *)v51 + 12) = v56 != 0 && v56 >= v73;
      if ( *((_DWORD *)v54 + 1) != 0 && *(_DWORD *)v54 != 0 )
        *((_DWORD *)v54 + 1) = 0;
      v51 += 24;
      v54 += 24;
    }
  }
  return v89;
}


//======================================================================
// sub_21CC30
// address: 0x0021CC30   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_21CC30(_BYTE *a1, _DWORD *a2)
{
  int v2; // r6
  int v4; // r5
  int i; // r4
  unsigned int Char_Index; // r1
  int result; // r0
  int v9; // [sp+Ch] [bp-8h] BYREF

  v2 = 0;
  v4 = 0;
  for ( i = 48; i != 58; ++i )
  {
    Char_Index = FT_Get_Char_Index((int)a2);
    if ( Char_Index != 0 )
    {
      result = FT_Get_Advance(a2, Char_Index, 2051, &v9);
      if ( result == 0 )
      {
        if ( v4 != 0 )
        {
          if ( v9 != v2 )
            goto LABEL_11;
        }
        else
        {
          v2 = v9;
        }
        v4 = 1;
      }
    }
  }
  result = 1;
LABEL_11:
  *a1 = result;
  return result;
}


//======================================================================
// sub_21CC7C
// address: 0x0021CC7C   size: 0x166 (358 bytes)
//======================================================================
__int64 __fastcall sub_21CC7C(_DWORD *a1, int a2)
{
  int v4; // r4
  int Char_Index; // r1
  _DWORD *v6; // r4
  int v7; // r3
  int i; // r4
  unsigned int v9; // r6
  int *v10; // r5
  unsigned int v11; // r3
  unsigned int v12; // r12
  unsigned int v13; // r2
  __int16 v14; // r2
  int v15; // r5
  int v16; // r2
  int v17; // r5
  _DWORD *v18; // r3
  int v20; // [sp+4h] [bp-3C8h]
  int v21; // [sp+8h] [bp-3C4h]
  int v22[30]; // [sp+10h] [bp-3BCh] BYREF
  _DWORD v23[209]; // [sp+88h] [bp-344h] BYREF

  v4 = *(_DWORD *)(a2 + 100);
  j_memset(v22, 0, sizeof(v22));
  a1[12] = 0;
  a1[111] = 0;
  v22[0] = v4;
  Char_Index = FT_Get_Char_Index(a2);
  if ( Char_Index != 0 && FT_Load_Glyph(a2, Char_Index, 1u) == 0 )
  {
    v21 = *(_DWORD *)(a2 + 84);
    if ( *(__int16 *)(v21 + 110) > 0 )
    {
      j_memset(v23, 0, 0x340u);
      v7 = a1[9];
      v23[1] = a2;
      v23[9] = v7;
      v23[2] = 0x10000;
      v23[3] = 0x10000;
      v22[27] = (int)v23;
      v22[25] = 0;
      if ( sub_21B05E(v22, (__int16 *)(v21 + 108)) == 0 )
      {
        v20 = (int)(a1 + 13);
        for ( i = 0; i != 2; ++i )
        {
          v9 = sub_21B2C0(v22, i);
          if ( v9 != 0 )
            break;
          sub_21ADC8((int)v22, i);
          v10 = &v22[7 * i];
          v11 = v10[13];
          v12 = 48 * v10[11] + v11;
          while ( v11 < v12 )
          {
            v13 = *(_DWORD *)(v11 + 20);
            if ( v13 != 0 && *(_DWORD *)(v13 + 20) == v11 && v13 > v11 )
            {
              v14 = *(_WORD *)(v13 + 2);
              if ( v9 <= 0xF )
              {
                v15 = *(__int16 *)(v11 + 2) - v14;
                v16 = 12 * v9++;
                *(_DWORD *)(v20 + v16) = (v15 + (v15 >> 31)) ^ (v15 >> 31);
              }
            }
            v11 += 48;
          }
          sub_21ACF6(v9, v20);
          *(_DWORD *)(v20 - 4) = v9;
          v20 += 396;
        }
      }
    }
  }
  v6 = a1;
  do
  {
    if ( v6[12] != 0 )
      v17 = v6[13];
    else
      v17 = 50 * a1[9] / 2048;
    v18 = v6 + 62;
    v6[61] = v17 / 5;
    v6[62] = v17;
    v6 += 99;
    *((_BYTE *)v18 + 4) = 0;
  }
  while ( v6 != a1 + 198 );
  return sub_21B8D4((unsigned int)v22);
}


//======================================================================
// sub_21CDE8
// address: 0x0021CDE8   size: 0x300 (768 bytes)
//======================================================================
int __fastcall sub_21CDE8(int a1, int a2, int a3)
{
  int v3; // r5
  int v5; // r0
  int v6; // r1
  int Char_Index; // r1
  int Glyph; // r0
  int v9; // r3
  int v10; // r2
  int v11; // r5
  int v12; // r1
  int v13; // r1
  int v14; // r12
  int v15; // r12
  int v16; // r0
  int v17; // r1
  int v18; // r5
  char v19; // r6
  int v20; // r1
  int v21; // r1
  int v22; // r2
  int v23; // r3
  int v24; // r1
  int v25; // r0
  int v26; // r1
  _BOOL4 v27; // r6
  int v28; // r1
  int v29; // r7
  int v30; // r6
  int j; // r5
  unsigned int v32; // r1
  int Advance; // r0
  int v35; // [sp+0h] [bp-A4h]
  int v36; // [sp+0h] [bp-A4h]
  int v37; // [sp+4h] [bp-A0h]
  signed int v38; // [sp+Ch] [bp-98h]
  int i; // [sp+10h] [bp-94h]
  signed int v40; // [sp+14h] [bp-90h]
  int v41; // [sp+18h] [bp-8Ch]
  int v43; // [sp+20h] [bp-84h]
  char *v44; // [sp+24h] [bp-80h]
  char *v45; // [sp+28h] [bp-7Ch]
  int v46; // [sp+2Ch] [bp-78h]
  int v47; // [sp+30h] [bp-74h]
  int v48; // [sp+34h] [bp-70h]
  _DWORD v49[12]; // [sp+40h] [bp-64h] BYREF
  int v50[13]; // [sp+70h] [bp-34h] BYREF

  v48 = *(_DWORD *)(a2 + 92);
  v3 = 0;
  *(_DWORD *)(a1 + 36) = *(unsigned __int16 *)(a2 + 68);
  v5 = 0;
  while ( 1 )
  {
    v6 = *(_DWORD *)&aCinunmraboda1t[v3];
    if ( v6 == 0 )
      break;
    v5 = FT_Select_Charmap((_DWORD *)a2, v6);
    v3 += 4;
    if ( v5 == 0 )
      goto LABEL_4;
  }
  if ( v5 != 0 )
    goto LABEL_82;
LABEL_4:
  sub_21CC7C((_DWORD *)a1, a2);
  v41 = *(_DWORD *)(a2 + 84);
  v45 = (char *)&unk_43421C;
  for ( i = 0; i != 6; ++i )
  {
    v38 = 0;
    v44 = v45 - 12;
    v40 = 0;
    while ( v44 != v45 && *v44 != 0 )
    {
      Char_Index = FT_Get_Char_Index(a2);
      if ( Char_Index != 0 )
      {
        Glyph = FT_Load_Glyph(a2, Char_Index, 1u);
        if ( Glyph == 0 && *(__int16 *)(v41 + 110) > 0 )
        {
          v43 = *(_DWORD *)(v41 + 112);
          v37 = 0;
          v47 = 0;
          v46 = 0;
          v9 = -1;
          v10 = 0;
          while ( v37 < *(__int16 *)(v41 + 108) )
          {
            v11 = *(__int16 *)(2 * v37 + *(_DWORD *)(v41 + 120));
            v12 = v9;
            if ( v11 > Glyph )
            {
              v13 = 8 * Glyph;
              if ( i != 0 && (unsigned int)(i - 2) > 1 )
              {
                v35 = Glyph;
                v14 = v43 + v13;
                v12 = v9;
                while ( v35 <= v11 )
                {
                  if ( v12 < 0 || *(_DWORD *)(v14 + 4) < v10 )
                  {
                    v10 = *(_DWORD *)(v14 + 4);
                    v12 = v35;
                  }
                  v14 += 8;
                  ++v35;
                }
              }
              else
              {
                v36 = Glyph;
                v15 = v43 + v13;
                v12 = v9;
                while ( v36 <= v11 )
                {
                  if ( v12 < 0 || *(_DWORD *)(v15 + 4) > v10 )
                  {
                    v10 = *(_DWORD *)(v15 + 4);
                    v12 = v36;
                  }
                  v15 += 8;
                  ++v36;
                }
              }
              if ( v12 != v9 )
              {
                v47 = *(__int16 *)(2 * v37 + *(_DWORD *)(v41 + 120));
                v46 = Glyph;
              }
            }
            Glyph = v11 + 1;
            v9 = v12;
            ++v37;
          }
          v16 = v9;
          if ( v9 < 0 )
            goto LABEL_53;
          v17 = v9;
          do
          {
            if ( v17 <= v46 )
              v17 = v47;
            else
              --v17;
          }
          while ( (unsigned int)(*(_DWORD *)(v43 + 8 * v17 + 4) - v10 + 5) <= 0xA && v17 != v9 );
          do
          {
            if ( v9 >= v47 )
              v9 = v46;
            else
              ++v9;
          }
          while ( (unsigned int)(*(_DWORD *)(v43 + 8 * v9 + 4) - v10 + 5) <= 0xA && v9 != v16 );
          v18 = *(_DWORD *)(v41 + 116);
          v19 = *(_BYTE *)(v18 + v17);
          v20 = 1;
          if ( (v19 & 3) == 1 )
            v20 = (*(_BYTE *)(v18 + v9) & 3) - 1 - ((*(_BYTE *)(v18 + v9) & 3) - 2 + ((*(_BYTE *)(v18 + v9) & 3) == 1));
          if ( v20 != 0 )
            v50[v38++] = v10;
          else
LABEL_53:
            v49[v40++] = v10;
        }
      }
      ++v44;
    }
    if ( (v38 | v40) == 0 )
      goto LABEL_70;
    sub_21ACCC(v38, (int)v50);
    sub_21ACCC(v40, (int)v49);
    v21 = *(_DWORD *)(a1 + 652);
    v22 = a1 + 28 * v21 + 652;
    v23 = a1 + 28 * v21 + 656;
    *(_DWORD *)(a1 + 652) = v21 + 1;
    if ( v40 == 0 )
    {
      v24 = v50[v38 >> 1];
LABEL_58:
      *(_DWORD *)(v23 + 12) = v24;
      *(_DWORD *)(v22 + 4) = v24;
      goto LABEL_60;
    }
    v24 = v49[v40 >> 1];
    if ( v38 == 0 )
      goto LABEL_58;
    *(_DWORD *)(v22 + 4) = v24;
    *(_DWORD *)(v23 + 12) = v50[v38 >> 1];
LABEL_60:
    v25 = *(_DWORD *)(v23 + 12);
    v26 = *(_DWORD *)(v22 + 4);
    if ( v25 != v26 )
    {
      v27 = i == 0 || (unsigned int)(i - 2) <= 1;
      if ( v27 != v25 > v26 )
      {
        v28 = (v25 + v26) / 2;
        *(_DWORD *)(v23 + 12) = v28;
        *(_DWORD *)(v22 + 4) = v28;
      }
    }
    *(_DWORD *)(v23 + 24) = 0;
    if ( i == 0 || (unsigned int)(i - 2) <= 1 )
    {
      *(_DWORD *)(v23 + 24) = 2;
      if ( i == 3 )
        *(_DWORD *)(v23 + 24) = 6;
    }
LABEL_70:
    v45 += 13;
  }
  v29 = 0;
  v30 = 0;
  for ( j = 48; j != 58; ++j )
  {
    v32 = FT_Get_Char_Index(a2);
    if ( v32 != 0 )
    {
      Advance = FT_Get_Advance((_DWORD *)a2, v32, 2051, v50);
      if ( Advance == 0 )
      {
        if ( v30 != 0 )
        {
          if ( v50[0] != v29 )
            goto LABEL_81;
        }
        else
        {
          v29 = v50[0];
        }
        v30 = 1;
      }
    }
  }
  LOBYTE(Advance) = 1;
LABEL_81:
  *(_BYTE *)(a1 + 32) = Advance;
LABEL_82:
  FT_Set_Charmap((_DWORD *)a2, v48, a3);
  return 0;
}


//======================================================================
// sub_21D0F4
// address: 0x0021D0F4   size: 0x24E (590 bytes)
//======================================================================
int __fastcall sub_21D0F4(_DWORD *a1, int a2, int a3, unsigned int a4, int a5)
{
  _DWORD *v5; // r4
  int v6; // r6
  int result; // r0
  int v8; // r0
  int v9; // r6
  int v10; // r1
  _DWORD *v11; // r0
  _DWORD *v12; // r5
  size_t v13; // r2
  unsigned int *v14; // r6
  int v15; // r3
  int j; // r6
  unsigned int v17; // r0
  _DWORD *k; // r3
  unsigned int Char_Index; // r0
  unsigned int Next_Char; // r7
  _BYTE *v21; // r0
  _DWORD *v22; // r4
  _DWORD *v23; // r6
  _DWORD *v24; // r7
  _DWORD *v25; // r0
  int v26; // r5
  int (*v27)(void); // r3
  void (__fastcall *v28)(int); // r3
  void (__fastcall *v29)(_DWORD *, _DWORD *); // r3
  int v30; // r1
  int v31; // r6
  int v32; // r1
  int v33; // r6
  int (__fastcall *v34)(_DWORD *, _DWORD *); // r3
  _BYTE *v35; // [sp+14h] [bp-40h]
  void *v36; // [sp+14h] [bp-40h]
  int i; // [sp+18h] [bp-3Ch]
  int v40; // [sp+24h] [bp-30h]
  int v41; // [sp+2Ch] [bp-28h] BYREF
  unsigned int v42; // [sp+30h] [bp-24h] BYREF
  _DWORD v43[8]; // [sp+34h] [bp-20h] BYREF

  v5 = *(_DWORD **)(a2 + 4);
  v6 = v5[22];
  result = 6;
  if ( v6 == 0 )
    return result;
  j_memset(v43, 0, 0x1Cu);
  v8 = *(_DWORD *)(v6 + 16);
  v9 = *(_DWORD *)(v6 + 20);
  v43[0] = v5;
  v43[1] = v8;
  v43[2] = v9;
  v43[5] = (unsigned int)(a5 << 12) >> 28;
  a1[3] = v5;
  v10 = a1[5];
  a1[4] = v5[29];
  FT_GlyphLoader_Rewind(v10);
  if ( a1[4] != 0 )
  {
LABEL_34:
    v22 = nullptr;
    v42 = 0;
    v23 = (_DWORD *)a1[4];
    if ( a4 < v23[1] )
    {
      v24 = *(&off_459C40 + (*(_BYTE *)(v23[2] + a4) & 0x7F));
      v22 = (_DWORD *)v23[*v24 + 3];
      if ( v22 == nullptr )
      {
        v36 = *(void **)(*v23 + 100);
        v25 = ft_mem_alloc((int)v36, v24[2], (int *)&v42);
        v26 = (int)v25;
        if ( v42 == 0 )
        {
          *v25 = v24;
          v27 = (int (*)(void))v24[3];
          if ( v27 != nullptr )
          {
            v42 = v27();
            if ( v42 != 0 )
            {
              v28 = (void (__fastcall *)(int))v24[5];
              if ( v28 != nullptr )
                v28(v26);
              ft_mem_free((int)v36, v26);
              goto LABEL_45;
            }
          }
          v23[*v24 + 3] = v26;
        }
        v22 = (_DWORD *)v26;
      }
    }
    else
    {
      v42 = 6;
    }
LABEL_45:
    result = v42;
    if ( v42 == 0 )
    {
      a1[36] = v22;
      v29 = *(void (__fastcall **)(_DWORD *, _DWORD *))(*v22 + 16);
      if ( v29 != nullptr )
      {
        v29(v22, v43);
      }
      else
      {
        v30 = v43[1];
        v31 = v43[2];
        v22[1] = v43[0];
        v22[2] = v30;
        v22[3] = v31;
        v32 = v43[4];
        v33 = v43[5];
        v22[4] = v43[3];
        v22[5] = v32;
        v22[6] = v33;
        v22[7] = v43[6];
      }
      v34 = *(int (__fastcall **)(_DWORD *, _DWORD *))(*v22 + 24);
      if ( v34 == nullptr )
        return sub_21B97C((int)(a1 + 3), (int)v43, a4, a5 & 0xFFFFF7FA | 0x801, 0);
      result = v34(a1 + 6, v22);
      if ( result == 0 )
        return sub_21B97C((int)(a1 + 3), (int)v43, a4, a5 & 0xFFFFF7FA | 0x801, 0);
    }
    return result;
  }
  v11 = ft_mem_alloc(v5[25], v5[4] + 28, &v41);
  v12 = v11;
  if ( v41 == 0 )
  {
    *v11 = v5;
    v13 = v5[4];
    v11[1] = v13;
    v11[2] = v11 + 7;
    v35 = v11 + 7;
    v40 = v5[23];
    j_memset(v11 + 7, 127, v13);
    if ( FT_Select_Charmap(v5, 1970170211) == 0 )
    {
      for ( i = 0; ; ++i )
      {
        v15 = (int)*(&off_459C40 + i);
        if ( v15 == 0 )
          break;
        v14 = *(unsigned int **)(v15 + 4);
        if ( v14 != nullptr )
        {
          while ( 1 )
          {
            Next_Char = *v14;
            if ( *v14 == 0 )
              break;
            Char_Index = FT_Get_Char_Index((int)v5);
            v42 = Char_Index;
            if ( Char_Index != 0 && Char_Index < v12[1] )
            {
              v21 = &v35[Char_Index];
              if ( *v21 == 127 )
                *v21 = i;
            }
            while ( 1 )
            {
              Next_Char = FT_Get_Next_Char((int)v5, Next_Char, &v42);
              if ( v42 == 0 || Next_Char > v14[1] )
                break;
              if ( v42 < v12[1] && v35[v42] == 127 )
                v35[v42] = i;
            }
            v14 += 2;
          }
        }
      }
      for ( j = 48; j != 58; ++j )
      {
        v17 = FT_Get_Char_Index((int)v5);
        if ( v17 != 0 && v17 < v12[1] )
          v35[v17] |= 0x80u;
      }
    }
    for ( k = v12; (char *)k - (char *)v12 < v12[1]; k = (_DWORD *)((char *)k + 1) )
    {
      if ( (k[7] & 0x7F) == 0x7F )
        *((_BYTE *)k + 28) = k[7] & 0x80 | 2;
    }
    FT_Set_Charmap(v5, v40, (char *)k - (char *)v12);
    v41 = 0;
  }
  result = v41;
  a1[4] = v12;
  if ( result == 0 )
  {
    v5[29] = v12;
    v5[30] = sub_21B930;
    goto LABEL_34;
  }
  return result;
}


//======================================================================
// sub_21D358
// address: 0x0021D358   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_21D358(int a1)
{
  int v2; // r5
  int v3; // r2

  v2 = **(_DWORD **)(a1 + 4);
  j_memset((void *)(a1 + 12), 0, 0xB4u);
  j_memset((void *)(a1 + 24), 0, 0x78u);
  *(_DWORD *)(a1 + 24) = v2;
  return FT_GlyphLoader_New(v2, (_DWORD *)(a1 + 20), v3);
}


//======================================================================
// sub_21D384
// address: 0x0021D384   size: 0x166 (358 bytes)
//======================================================================
__int64 __fastcall sub_21D384(_DWORD *a1, int a2)
{
  int v4; // r4
  int Char_Index; // r1
  _DWORD *v6; // r4
  int v7; // r3
  int i; // r4
  unsigned int v9; // r6
  int *v10; // r5
  unsigned int v11; // r3
  unsigned int v12; // r12
  unsigned int v13; // r2
  __int16 v14; // r2
  int v15; // r5
  int v16; // r2
  int v17; // r5
  _DWORD *v18; // r3
  int v20; // [sp+4h] [bp-358h]
  int v21; // [sp+8h] [bp-354h]
  int v22[30]; // [sp+10h] [bp-34Ch] BYREF
  _DWORD v23[181]; // [sp+88h] [bp-2D4h] BYREF

  v4 = *(_DWORD *)(a2 + 100);
  j_memset(v22, 0, sizeof(v22));
  a1[12] = 0;
  a1[97] = 0;
  v22[0] = v4;
  Char_Index = FT_Get_Char_Index(a2);
  if ( Char_Index != 0 && FT_Load_Glyph(a2, Char_Index, 1u) == 0 )
  {
    v21 = *(_DWORD *)(a2 + 84);
    if ( *(__int16 *)(v21 + 110) > 0 )
    {
      j_memset(v23, 0, 0x2D0u);
      v7 = a1[9];
      v23[1] = a2;
      v23[9] = v7;
      v23[2] = 0x10000;
      v23[3] = 0x10000;
      v22[27] = (int)v23;
      v22[25] = 0;
      if ( sub_21B05E(v22, (__int16 *)(v21 + 108)) == 0 )
      {
        v20 = (int)(a1 + 13);
        for ( i = 0; i != 2; ++i )
        {
          v9 = sub_21B2C0(v22, i);
          if ( v9 != 0 )
            break;
          sub_21ADC8((int)v22, i);
          v10 = &v22[7 * i];
          v11 = v10[13];
          v12 = 48 * v10[11] + v11;
          while ( v11 < v12 )
          {
            v13 = *(_DWORD *)(v11 + 20);
            if ( v13 != 0 && *(_DWORD *)(v13 + 20) == v11 && v13 > v11 )
            {
              v14 = *(_WORD *)(v13 + 2);
              if ( v9 <= 0xF )
              {
                v15 = *(__int16 *)(v11 + 2) - v14;
                v16 = 12 * v9++;
                *(_DWORD *)(v20 + v16) = (v15 + (v15 >> 31)) ^ (v15 >> 31);
              }
            }
            v11 += 48;
          }
          sub_21ACF6(v9, v20);
          *(_DWORD *)(v20 - 4) = v9;
          v20 += 340;
        }
      }
    }
  }
  v6 = a1;
  do
  {
    if ( v6[12] != 0 )
      v17 = v6[13];
    else
      v17 = 50 * a1[9] / 2048;
    v18 = v6 + 62;
    v6[61] = v17 / 5;
    v6[62] = v17;
    v6 += 85;
    *((_BYTE *)v18 + 4) = 0;
  }
  while ( v6 != a1 + 170 );
  return sub_21B8D4((unsigned int)v22);
}


//======================================================================
// sub_21D4F4
// address: 0x0021D4F4   size: 0x3E (62 bytes)
//======================================================================
int __fastcall sub_21D4F4(int a1, int a2)
{
  int v2; // r6
  int v5; // r2

  v2 = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 36) = *(unsigned __int16 *)(a2 + 68);
  if ( FT_Select_Charmap((_DWORD *)a2, 1970170211) != 0 )
  {
    *(_DWORD *)(a2 + 92) = 0;
  }
  else
  {
    sub_21D384((_DWORD *)a1, a2);
    sub_21CC30((_BYTE *)(a1 + 32), (_DWORD *)a2);
  }
  FT_Set_Charmap((_DWORD *)a2, v2, v5);
  return 0;
}


//======================================================================
// sub_21D538
// address: 0x0021D538   size: 0x28A (650 bytes)
//======================================================================
int __fastcall sub_21D538(int a1, int a2)
{
  int v2; // r6
  int v4; // r2
  unsigned int v5; // r4
  char *v6; // r3
  signed int v7; // r6
  int Char_Index; // r1
  int v9; // r3
  int v10; // r1
  int v11; // r2
  int *v12; // r12
  int j; // r7
  int *v14; // r12
  char *v15; // r12
  int i; // r7
  int v17; // r3
  int v18; // r1
  _DWORD *v19; // r2
  int v20; // r6
  int v21; // r1
  int v22; // r0
  int v23; // r1
  int v24; // r1
  signed int v26; // [sp+4h] [bp-138h]
  int v27; // [sp+8h] [bp-134h]
  char *v28; // [sp+10h] [bp-12Ch]
  _BOOL4 v29; // [sp+10h] [bp-12Ch]
  int v31; // [sp+18h] [bp-124h]
  int v32; // [sp+1Ch] [bp-120h]
  int v33; // [sp+20h] [bp-11Ch]
  int v34; // [sp+24h] [bp-118h]
  char *v35; // [sp+28h] [bp-114h]
  int v36; // [sp+2Ch] [bp-110h]
  _DWORD v37[32]; // [sp+38h] [bp-104h] BYREF
  _DWORD v38[33]; // [sp+B8h] [bp-84h] BYREF

  v2 = *(_DWORD *)(a2 + 92);
  *(_DWORD *)(a1 + 36) = *(unsigned __int16 *)(a2 + 68);
  v36 = v2;
  v5 = FT_Select_Charmap((_DWORD *)a2, 1970170211);
  if ( v5 != 0 )
  {
    *(_DWORD *)(a2 + 92) = 0;
    goto LABEL_73;
  }
  sub_21D384((_DWORD *)a1, a2);
  v31 = *(_DWORD *)(a2 + 84);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = (char *)&unk_434274 + 256 * v5;
      v7 = 0;
      v26 = 0;
      v34 = 0;
      while ( 1 )
      {
        v28 = v6;
        v35 = v6 + 128;
        while ( v28 != v35 && *(_DWORD *)v28 != 0 )
        {
          Char_Index = FT_Get_Char_Index(a2);
          if ( Char_Index != 0 && FT_Load_Glyph(a2, Char_Index, 1u) == 0 && *(__int16 *)(v31 + 110) > 0 )
          {
            v33 = 0;
            v32 = *(_DWORD *)(v31 + 112);
            v9 = 0;
            v10 = -1;
            v11 = 0;
            while ( v33 < *(__int16 *)(v31 + 108) )
            {
              v27 = *(__int16 *)(2 * v33 + *(_DWORD *)(v31 + 120));
              if ( v27 > v9 )
              {
                v12 = (int *)(8 * v9);
                switch ( v5 )
                {
                  case 2u:
                    v14 = (int *)((char *)v12 + v32);
                    while ( v9 <= v27 )
                    {
                      if ( v10 < 0 || *v14 < v11 )
                      {
                        v11 = *v14;
                        v10 = v9;
                      }
                      ++v9;
                      v14 += 2;
                    }
                    break;
                  case 3u:
                    for ( i = *(_DWORD *)(v31 + 112); ; i = 8 )
                    {
                      v12 = (int *)((char *)v12 + i);
                      if ( v9 > v27 )
                        break;
                      if ( v10 < 0 || *v12 > v11 )
                      {
                        v11 = *v12;
                        v10 = v9;
                      }
                      ++v9;
                    }
                    break;
                  case 1u:
                    for ( j = *(_DWORD *)(v31 + 112); ; j = 8 )
                    {
                      v12 = (int *)((char *)v12 + j);
                      if ( v9 > v27 )
                        break;
                      if ( v10 < 0 || v12[1] < v11 )
                      {
                        v11 = v12[1];
                        v10 = v9;
                      }
                      ++v9;
                    }
                    break;
                  default:
                    v15 = (char *)v12 + v32;
                    while ( v9 <= v27 )
                    {
                      if ( v10 < 0 || *((_DWORD *)v15 + 1) > v11 )
                      {
                        v11 = *((_DWORD *)v15 + 1);
                        v10 = v9;
                      }
                      ++v9;
                      v15 += 8;
                    }
                    break;
                }
              }
              v9 = v27 + 1;
              ++v33;
            }
            if ( v34 != 0 )
              v38[v26++] = v11;
            else
              v37[v7++] = v11;
          }
          v28 += 4;
        }
        if ( ++v34 == 2 )
          break;
        v6 = v35;
      }
      if ( (v26 | v7) == 0 )
        goto LABEL_71;
      sub_21ACCC(v26, (int)v38);
      sub_21ACCC(v7, (int)v37);
      v17 = a1 + 40;
      if ( v5 <= 1 )
        v17 = a1 + 380;
      v18 = *(_DWORD *)(v17 + 216);
      v19 = (_DWORD *)(v17 + 28 * v18 + 216);
      *(_DWORD *)(v17 + 216) = v18 + 1;
      if ( v26 != 0 )
      {
        v21 = v26 >> 1;
        if ( v7 != 0 )
          v19[1] = v37[v7 >> 1];
        else
          v19[1] = v38[v21];
        v19[4] = v38[v21];
      }
      else
      {
        v20 = v7 >> 1;
        v19[1] = v37[v20];
        v19[4] = v37[v20];
      }
      v22 = v19[4];
      v23 = v19[1];
      if ( v22 != v23 )
      {
        v29 = v5 == 0 || v5 == 3;
        if ( v29 != v22 < v23 )
        {
          v24 = (v22 + v23) / 2;
          v19[1] = v24;
          v19[4] = v24;
        }
      }
      v19[7] = 0;
      if ( v5 != 0 )
        break;
      v19[7] = 2;
      v5 = 1;
    }
    if ( v5 == 3 )
      break;
LABEL_71:
    if ( ++v5 == 4 )
      goto LABEL_72;
  }
  v19[7] = 4;
LABEL_72:
  sub_21CC30((_BYTE *)(a1 + 32), (_DWORD *)a2);
LABEL_73:
  FT_Set_Charmap((_DWORD *)a2, v36, v4);
  return 0;
}


//======================================================================
// sub_21D7CC
// address: 0x0021D7CC   size: 0x3F0 (1008 bytes)
//======================================================================
int __fastcall sub_21D7CC(int *a1, __int16 *a2, int a3)
{
  int v5; // r0
  int v6; // r3
  _DWORD *v7; // r6
  int v8; // r2
  _DWORD *v9; // r5
  _DWORD *v10; // r3
  int v11; // r7
  char v12; // r2
  int v13; // r0
  char v14; // r3
  unsigned int v15; // r5
  int v16; // r7
  unsigned int v17; // r6
  int v18; // r5
  _DWORD *v19; // r2
  _DWORD *v20; // r1
  _DWORD *v21; // r3
  int v22; // r0
  int v23; // r6
  _DWORD *v24; // r0
  int v25; // r1
  int v26; // r2
  int v27; // r3
  _DWORD *i; // r3
  char v29; // r0
  __int16 *j; // r5
  _DWORD *v31; // r3
  unsigned int v32; // r2
  int v33; // r2
  __int16 *v34; // r3
  __int16 *v35; // r1
  int v36; // r3
  int v37; // r2
  _DWORD *v38; // r2
  __int16 *k; // r1
  int v40; // r6
  __int16 v41; // r5
  __int16 v42; // r5
  int v43; // r5
  __int16 *m; // r1
  __int16 v45; // r6
  __int16 v46; // r6
  int v47; // r7
  int v48; // r2
  int v49; // r7
  int v50; // r6
  __int64 v51; // r0
  unsigned int v53; // [sp+14h] [bp-30h]
  _DWORD *v54; // [sp+18h] [bp-2Ch]
  _DWORD *v55; // [sp+18h] [bp-2Ch]
  int v56; // [sp+1Ch] [bp-28h]
  int v57; // [sp+1Ch] [bp-28h]
  unsigned int v58; // [sp+20h] [bp-24h]
  int v59; // [sp+24h] [bp-20h]
  char v60; // [sp+28h] [bp-1Ch]
  int v61; // [sp+2Ch] [bp-18h]
  int *v62; // [sp+30h] [bp-14h]
  int v63; // [sp+34h] [bp-10h]
  int v64; // [sp+38h] [bp-Ch]

  v61 = sub_21B05E(a1, a2);
  if ( v61 == 0 )
  {
    if ( (a1[25] & 1) == 0 )
    {
      v5 = sub_21C758(a1, 0);
      if ( v5 != 0 )
        return v5;
      sub_21AF8A((int)a1, a3, 0);
    }
    if ( (a1[25] & 2) != 0 )
    {
LABEL_8:
      v62 = a1;
      v59 = 0;
      while ( 1 )
      {
        v6 = a1[25];
        if ( v59 != 0 )
        {
          if ( (v6 & 2) != 0 )
            goto LABEL_104;
        }
        else if ( (v6 & 1) != 0 )
        {
          goto LABEL_104;
        }
        v54 = (_DWORD *)v62[16];
        v58 = (unsigned int)&v54[12 * v62[14]];
        v7 = v54;
        v53 = 0;
        while ( (unsigned int)v7 < v58 )
        {
          if ( (v7[3] & 4) != 0 )
            goto LABEL_25;
          v8 = v7[5];
          v9 = (_DWORD *)v7[6];
          v10 = v7;
          if ( v8 == 0 )
          {
            if ( v9 == nullptr )
              goto LABEL_25;
            v8 = v9[5];
            if ( v8 == 0 )
              goto LABEL_25;
            v10 = (_DWORD *)v7[6];
            v9 = v7;
          }
          v11 = *(_DWORD *)(v8 + 8);
          v12 = *((_BYTE *)v10 + 12);
          v10[2] = v11;
          *((_BYTE *)v10 + 12) = v12 | 4;
          if ( v9 != nullptr && v9[5] == 0 )
          {
            v13 = sub_139BD4((int)a1, v59, v9[1] - v10[1]);
            v14 = *((_BYTE *)v9 + 12);
            v9[2] = v11 + v13;
            *((_BYTE *)v9 + 12) = v14 | 4;
          }
          if ( v53 == 0 )
            v53 = (unsigned int)v7;
LABEL_25:
          v7 += 12;
        }
        v15 = (unsigned int)v54;
        v16 = 0;
        v63 = 0;
        v56 = 0;
        v64 = 0;
        while ( v15 < v58 )
        {
          v60 = *(_BYTE *)(v15 + 12);
          if ( (v60 & 4) == 0 )
          {
            v17 = *(_DWORD *)(v15 + 24);
            if ( v17 != 0 && (v63 == 0 || v16 + 63 < *(_DWORD *)(v15 + 8) && v16 + 63 < *(_DWORD *)(v17 + 8)) )
            {
              if ( *(_DWORD *)(v17 + 20) != 0 )
              {
                *(_DWORD *)(v15 + 8) = *(_DWORD *)(v17 + 8)
                                     + sub_139BD4((int)a1, v59, *(_DWORD *)(v15 + 4) - *(_DWORD *)(v17 + 4));
                *(_BYTE *)(v15 + 12) = v60 | 4;
              }
              else
              {
                if ( v17 >= v15 )
                {
                  if ( v59 == 1 || v53 != 0 )
                    sub_139D04((int)a1, v15, v17, v64, v59);
                  else
                    v64 = sub_139D04((int)a1, v15, v17, 0, 0);
                  v53 = v15;
                  *(_BYTE *)(v15 + 12) |= 4u;
                  v16 = *(_DWORD *)(v17 + 8);
                  *(_BYTE *)(v17 + 12) |= 4u;
                }
                else
                {
                  v16 = sub_139BD4((int)a1, v59, *(_DWORD *)(v15 + 4) - *(_DWORD *)(v17 + 4)) + *(_DWORD *)(v17 + 8);
                  *(_DWORD *)(v15 + 8) = v16;
                  *(_BYTE *)(v15 + 12) = v60 | 4;
                }
                v63 = 1;
              }
            }
            else
            {
              ++v56;
            }
          }
          v15 += 48;
        }
        if ( v59 == 0 )
        {
          v18 = -1431655765 * ((int)(v58 - (_DWORD)v54) >> 4);
          if ( v18 == 6 )
          {
            v19 = v54;
            v20 = v54 + 24;
            v21 = v54 + 48;
LABEL_50:
            v22 = v20[1] - v19[1] - (v21[1] - v20[1]);
            v23 = (v22 + (v22 >> 31)) ^ (v22 >> 31);
            if ( (_DWORD *)v19[6] == v19 + 12 && (_DWORD *)v20[6] == v20 + 12 )
            {
              v24 = (_DWORD *)v21[6];
              if ( v24 == v21 + 12 && v23 <= 7 )
              {
                v25 = v19[2] - 2 * v20[2];
                v26 = v25 + v21[2];
                v21[2] = -v25;
                if ( v24 != nullptr )
                  v24[2] -= v26;
                if ( v18 == 12 )
                {
                  v54[98] -= v26;
                  v54[134] -= v26;
                }
                *((_BYTE *)v21 + 12) |= 4u;
                v27 = v21[6];
                if ( v27 != 0 )
                  *(_BYTE *)(v27 + 12) |= 4u;
              }
            }
          }
          else if ( v18 == 12 )
          {
            v19 = v54 + 12;
            v20 = v54 + 60;
            v21 = v54 + 108;
            goto LABEL_50;
          }
        }
        if ( v56 != 0 )
        {
          for ( i = v54; (unsigned int)i < v58; i += 12 )
          {
            v29 = *((_BYTE *)i + 12);
            if ( (v29 & 4) == 0 )
            {
              v33 = i[7];
              if ( v33 != 0 )
              {
                i[2] = *(_DWORD *)(v33 + 8) + i[1] - *(_DWORD *)(v33 + 4);
                *((_BYTE *)i + 12) = v29 | 4;
                --v56;
              }
            }
          }
          if ( v56 != 0 )
          {
            for ( j = (__int16 *)v54; (unsigned int)j < v58; j += 24 )
            {
              if ( (j[6] & 4) == 0 )
              {
                v34 = j;
                do
                  v34 -= 24;
                while ( v34 >= (__int16 *)v54 && (v34[6] & 4) == 0 );
                v35 = j;
                while ( 1 )
                {
                  v35 += 24;
                  if ( (unsigned int)v35 >= v58 )
                    break;
                  if ( (v35[6] & 4) != 0 )
                  {
                    if ( v34 < (__int16 *)v54 )
                    {
                      v36 = *((_DWORD *)j + 1) - *((_DWORD *)v35 + 1);
                      v37 = *((_DWORD *)v35 + 2);
LABEL_81:
                      *((_DWORD *)j + 2) = v36 + v37;
                      goto LABEL_82;
                    }
                    v48 = *v34;
                    v49 = *v35;
                    v50 = *((_DWORD *)v34 + 2);
                    if ( v49 != v48 )
                    {
                      LODWORD(v51) = *j - v48;
                      HIDWORD(v51) = *((_DWORD *)v35 + 2) - v50;
                      v50 += FT_MulDiv(v51, v49 - v48);
                    }
                    *((_DWORD *)j + 2) = v50;
                    goto LABEL_82;
                  }
                }
                if ( v34 >= (__int16 *)v54 )
                {
                  v47 = *((_DWORD *)v34 + 1);
                  v36 = *((_DWORD *)v34 + 2);
                  v37 = *((_DWORD *)j + 1) - v47;
                  goto LABEL_81;
                }
              }
LABEL_82:
              ;
            }
          }
        }
        v31 = (_DWORD *)v62[16];
        v55 = &v31[12 * v62[14]];
        v32 = a1[26];
        if ( v59 != 0 )
          v32 >>= 1;
        v57 = v32 & 1;
        while ( v31 < v55 )
        {
          v38 = (_DWORD *)v31[10];
          if ( v57 != 0 )
          {
            do
            {
              for ( k = (__int16 *)v38[10]; ; k = *((__int16 **)k + 8) )
              {
                v40 = v31[2];
                v41 = *k;
                if ( v59 != 0 )
                {
                  *((_DWORD *)k + 5) = v40;
                  v42 = v41 | 0x80;
                }
                else
                {
                  *((_DWORD *)k + 4) = v40;
                  v42 = v41 | 0x40;
                }
                *k = v42;
                if ( k == (__int16 *)v38[11] )
                  break;
              }
              v38 = (_DWORD *)v38[4];
            }
            while ( v38 != (_DWORD *)v31[10] );
          }
          else
          {
            v43 = v31[2] - v31[1];
            do
            {
              for ( m = (__int16 *)v38[10]; ; m = *((__int16 **)m + 8) )
              {
                v45 = *m;
                if ( v59 != 0 )
                {
                  *((_DWORD *)m + 5) += v43;
                  v46 = v45 | 0x80;
                }
                else
                {
                  v46 = v45 | 0x40;
                  *((_DWORD *)m + 4) += v43;
                }
                *m = v46;
                if ( m == (__int16 *)v38[11] )
                  break;
              }
              v38 = (_DWORD *)v38[4];
            }
            while ( v38 != (_DWORD *)v31[10] );
          }
          v31 += 12;
        }
        sub_13987C((int)a1, v59);
        sub_139AA0(a1, v59);
LABEL_104:
        ++v59;
        v62 += 7;
        if ( v59 == 2 )
        {
          sub_21AD7A((int)a1, (int)a2);
          return v61;
        }
      }
    }
    v5 = sub_21C758(a1, 1);
    if ( v5 == 0 )
    {
      sub_21AF8A((int)a1, a3, 1);
      goto LABEL_8;
    }
    return v5;
  }
  return v61;
}


//======================================================================
// sub_21DBC0
// address: 0x0021DBC0   size: 0x8 (8 bytes)
//======================================================================
int __fastcall sub_21DBC0(int *a1, __int16 *a2, int a3)
{
  return sub_21D7CC(a1, a2, a3);
}


//======================================================================
// sub_21DBD6
// address: 0x0021DBD6   size: 0x20 (32 bytes)
//======================================================================
int __fastcall sub_21DBD6(int a1, int a2, int a3, _DWORD *a4)
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
// sub_21DBF6
// address: 0x0021DBF6   size: 0xB0 (176 bytes)
//======================================================================
unsigned int __fastcall sub_21DBF6(int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // r4
  int v4; // r5
  unsigned int *v5; // r1
  unsigned int v6; // r5
  unsigned int v7; // r3
  unsigned int v8; // r4
  int v9; // r5
  unsigned __int8 *v10; // r1
  unsigned int v11; // r5
  int v12; // r4
  unsigned int v13; // r1

  v3 = *(_DWORD *)(a1 + 736);
  if ( a2 >= v3 )
  {
    v8 = 0;
    v7 = 0;
  }
  else if ( *(_WORD *)(a1 + 210) != 0 )
  {
    v4 = *(_DWORD *)(a1 + 740);
    v5 = (unsigned int *)(v4 + 4 * a2);
    v6 = v4 + 4 * v3;
    v7 = _byteswap_ulong(*v5);
    v8 = v7;
    if ( (unsigned int)(v5 + 2) <= v6 )
      v8 = _byteswap_ulong(v5[1]);
  }
  else
  {
    v9 = *(_DWORD *)(a1 + 740);
    v10 = (unsigned __int8 *)(v9 + 2 * a2);
    v11 = v9 + 2 * v3;
    v12 = (*v10 << 8) | v10[1];
    if ( (unsigned int)(v10 + 4) <= v11 )
      v12 = (v10[2] << 8) | v10[3];
    v7 = 2 * ((*v10 << 8) | v10[1]);
    v8 = 2 * v12;
  }
  v13 = *(_DWORD *)(a1 + 708);
  if ( v7 <= v13 )
  {
    if ( v8 > v13 )
    {
      v8 = *(_DWORD *)(a1 + 708);
    }
    else if ( v8 < v7 )
    {
      *a3 = v13 - v7;
      return v7;
    }
    *a3 = v8 - v7;
  }
  else
  {
    v7 = 0;
    *a3 = 0;
  }
  return v7;
}


//======================================================================
// sub_21DCA6
// address: 0x0021DCA6   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_21DCA6(int a1)
{
  _DWORD *v1; // r1
  char *v2; // r3
  unsigned int v4; // r5
  int result; // r0

  v1 = (_DWORD *)(a1 + 200);
  v2 = *(char **)(a1 + 200);
  v4 = *(_DWORD *)(a1 + 204);
  result = 20;
  if ( v4 >= (unsigned int)(v2 + 10) )
  {
    *(_WORD *)(a1 + 32) = (*v2 << 8) | (unsigned __int8)v2[1];
    *(_DWORD *)(a1 + 36) = (v2[2] << 8) | (unsigned __int8)v2[3];
    *(_DWORD *)(a1 + 40) = (v2[4] << 8) | (unsigned __int8)v2[5];
    *(_DWORD *)(a1 + 44) = (v2[6] << 8) | (unsigned __int8)v2[7];
    *(_DWORD *)(a1 + 48) = (unsigned __int8)v2[9] | (v2[8] << 8);
    *v1 = v2 + 10;
    return 0;
  }
  return result;
}


//======================================================================
// sub_21DD00
// address: 0x0021DD00   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_21DD00(int a1)
{
  *(_BYTE *)(a1 + 300) = 0;
  *(_BYTE *)(a1 + 301) = 0;
  *(_BYTE *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 112) = -1;
  return 0;
}


//======================================================================
// sub_21DD1E
// address: 0x0021DD1E   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_21DD1E(int a1, int a2)
{
  unsigned int v3; // r0
  int v4; // r4
  unsigned __int64 v5; // kr00_8
  __int64 v6; // r2
  int result; // r0

  v3 = (a1 + (a1 >> 31)) ^ (a1 >> 31);
  v4 = (a2 + (a2 >> 31)) ^ (a2 >> 31);
  v5 = (unsigned __int64)(v4 * HIWORD(v3)) << 16;
  LODWORD(v6) = v5 + 0x2000 + v4 * (unsigned __int16)v3;
  HIDWORD(v6) = HIDWORD(v5) + ((unsigned int)v6 < (int)v5 + 0x2000);
  result = v6 >> 14;
  if ( (a1 ^ a2) < 0 )
    return -result;
  return result;
}


//======================================================================
// sub_21DD60
// address: 0x0021DD60   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_21DD60(int a1, int a2, int a3, int a4)
{
  unsigned int v4; // r3
  unsigned __int64 v5; // r4

  __SET_PAIR__(v4, v4, __PAIR64__(((a2 >> 16) * a4) >> 16, ((a2 >> 16) * a4) << 16) + (unsigned __int16)a2 * a4);
  v5 = __PAIR64__((a3 * (a1 >> 16)) >> 16, (a3 * (a1 >> 16)) << 16) + (unsigned __int16)a1 * a3 + __PAIR64__(v4, v4);
  return ((HIDWORD(v5)
         + ((__PAIR64__(SHIDWORD(v5) >> 31, SHIDWORD(v5) >> 31) + (unsigned int)v5) >> 32)
         + ((SHIDWORD(v5) >> 31) + (int)v5 + 0x2000 < (unsigned int)((SHIDWORD(v5) >> 31) + v5))) << 18)
       | ((unsigned int)((SHIDWORD(v5) >> 31) + v5 + 0x2000) >> 14);
}


//======================================================================
// sub_21DDCA
// address: 0x0021DDCA   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_21DDCA(int a1, int a2)
{
  return *(_DWORD *)(4 * a2 + *(_DWORD *)(a1 + 384));
}


//======================================================================
// sub_21DDD6
// address: 0x0021DDD6   size: 0xC (12 bytes)
//======================================================================
int __fastcall sub_21DDD6(int result, int a2, int a3)
{
  *(_DWORD *)(4 * a2 + *(_DWORD *)(result + 384)) = a3;
  return result;
}


//======================================================================
// sub_21DDE2
// address: 0x0021DDE2   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_21DDE2(int result, int a2, int a3)
{
  *(_DWORD *)(*(_DWORD *)(result + 384) + 4 * a2) += a3;
  return result;
}


//======================================================================
// sub_21DDF4
// address: 0x0021DDF4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_21DDF4(int a1)
{
  int v1; // r0
  int v2; // r2
  int v3; // r3

  v1 = a1 + 252;
  v2 = *(_DWORD *)(v1 + 104);
  v3 = *(_DWORD *)(v1 + 108) + 2;
  *(_DWORD *)(v1 + 108) = v3;
  return (__int16)(*(unsigned __int8 *)(v2 + v3 - 1) + (*(unsigned __int8 *)(v2 + v3 - 2) << 8));
}


//======================================================================
// sub_21DE12
// address: 0x0021DE12   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall sub_21DE12(int a1, int a2, int a3, int a4)
{
  _DWORD *result; // r0

  result = (_DWORD *)(*(_DWORD *)(a2 + 16) + 8 * a3);
  *result += a4;
  *(_BYTE *)(*(_DWORD *)(a2 + 24) + a3) |= 8u;
  return result;
}


//======================================================================
// sub_21DE2E
// address: 0x0021DE2E   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_21DE2E(int a1, int a2, int a3, int a4)
{
  int result; // r0

  result = *(_DWORD *)(a2 + 16) + 8 * a3;
  *(_DWORD *)(result + 4) += a4;
  *(_BYTE *)(*(_DWORD *)(a2 + 24) + a3) |= 0x10u;
  return result;
}


//======================================================================
// sub_21DE4A
// address: 0x0021DE4A   size: 0xE (14 bytes)
//======================================================================
void __fastcall sub_21DE4A(int a1, int a2, int a3, int a4)
{
  *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8 * a3) += a4;
}


//======================================================================
// sub_21DE58
// address: 0x0021DE58   size: 0xE (14 bytes)
//======================================================================
void __fastcall sub_21DE58(int a1, int a2, int a3, int a4)
{
  *(_DWORD *)(*(_DWORD *)(a2 + 12) + 8 * a3 + 4) += a4;
}


//======================================================================
// sub_21DE66
// address: 0x0021DE66   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_21DE66(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r3

  if ( a2 < 0 )
  {
    result = a2 - a3;
    v4 = (a2 - a3 - 1) | (a2 - a3);
    return result & (v4 >> 31);
  }
  result = a2 + a3;
  v4 = ~(a2 + a3);
  if ( a2 != 0 )
    return result & (v4 >> 31);
  return result;
}


//======================================================================
// sub_21DE82
// address: 0x0021DE82   size: 0xAE (174 bytes)
//======================================================================
_DWORD *__fastcall sub_21DE82(_DWORD *result, int a2, char a3)
{
  int v3; // r4
  int v4; // r4
  int v5; // r4
  int v6; // r2
  int v7; // r2

  v3 = a3 & 0xC0;
  if ( v3 == 64 )
    goto LABEL_9;
  if ( (a3 & 0xC0u) <= 0x40 )
  {
    if ( (a3 & 0xC0) != 0 )
      goto LABEL_10;
    a2 /= 2;
    goto LABEL_9;
  }
  if ( v3 == 128 )
  {
    a2 *= 2;
    goto LABEL_9;
  }
  if ( v3 == 192 )
LABEL_9:
    result[119] = a2;
LABEL_10:
  v4 = a3 & 0x30;
  if ( v4 == 16 )
  {
    v5 = result[119];
    goto LABEL_19;
  }
  if ( (a3 & 0x30u) > 0x10 )
  {
    if ( v4 == 32 )
    {
      v4 = result[119] / 2;
      goto LABEL_20;
    }
    if ( v4 != 48 )
      goto LABEL_21;
    v5 = 3 * result[119];
LABEL_19:
    v4 = v5 / 4;
    goto LABEL_20;
  }
  if ( (a3 & 0x30) == 0 )
LABEL_20:
    result[120] = v4;
LABEL_21:
  v6 = a3 & 0xF;
  if ( v6 != 0 )
    v7 = (v6 - 4) * result[119] / 8;
  else
    v7 = result[119] - 1;
  result[121] = v7;
  result[119] /= 256;
  result[120] /= 256;
  result[121] /= 256;
  return result;
}


//======================================================================
// sub_21DF30
// address: 0x0021DF30   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_21DF30(int a1, int a2, int a3)
{
  return sub_21DD60(a2, a3, *(__int16 *)(a1 + 294), *(__int16 *)(a1 + 296));
}


//======================================================================
// sub_21DF48
// address: 0x0021DF48   size: 0x18 (24 bytes)
//======================================================================
int __fastcall sub_21DF48(int a1, int a2, int a3)
{
  return sub_21DD60(a2, a3, *(__int16 *)(a1 + 290), *(__int16 *)(a1 + 292));
}


//======================================================================
// sub_21DF60
// address: 0x0021DF60   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_21DF60(int a1, int a2)
{
  return a2;
}


//======================================================================
// sub_21DF64
// address: 0x0021DF64   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_21DF64(int a1, int a2, int a3)
{
  return a3;
}


//======================================================================
// sub_21DF68
// address: 0x0021DF68   size: 0x1B4 (436 bytes)
//======================================================================
int __fastcall sub_21DF68(int result)
{
  _BOOL4 v1; // r6
  void *v2; // r3
  int v3; // r6
  void *v4; // r6
  void *v5; // r5
  int v6; // r7
  void (__fastcall *v7)(int, int, int, int); // r3
  int v8; // [sp+4h] [bp-10h]
  int v9; // [sp+8h] [bp-Ch]

  if ( *(_BYTE *)(*(_DWORD *)result + 692) != 0 )
  {
    v1 = false;
    if ( *(_WORD *)(result + 294) == 0x4000 )
      v1 = *(__int16 *)(result + 298) == 0x4000;
    *(_BYTE *)(result + 302) = v1;
    *(_WORD *)(result + 294) = 0;
    *(_WORD *)(result + 296) = 0;
    *(_WORD *)(result + 298) = 0;
    *(_WORD *)(result + 300) = 0;
    if ( v1 )
    {
      *(_DWORD *)(result + 572) = sub_21DF60;
      *(_DWORD *)(result + 584) = sub_21DE12;
      *(_DWORD *)(result + 588) = sub_21DE4A;
    }
    else
    {
      *(_DWORD *)(result + 572) = sub_21DF64;
      *(_DWORD *)(result + 584) = sub_21DE2E;
      *(_DWORD *)(result + 588) = sub_21DE58;
    }
    if ( *(_WORD *)(result + 290) == 0x4000 )
    {
      v2 = sub_21DF60;
    }
    else if ( *(_WORD *)(result + 292) == 0x4000 )
    {
      v2 = sub_21DF64;
    }
    else
    {
      v2 = sub_21DF48;
    }
    *(_DWORD *)(result + 576) = v2;
    *(_DWORD *)(result + 256) = 0;
    return result;
  }
  v9 = *(__int16 *)(result + 298);
  if ( v9 == 0x4000 )
  {
    v3 = *(__int16 *)(result + 294) << 16;
LABEL_17:
    *(_DWORD *)(result + 564) = v3;
    goto LABEL_19;
  }
  v8 = *(__int16 *)(result + 300);
  if ( v8 == 0x4000 )
  {
    v3 = *(__int16 *)(result + 296) << 16;
    goto LABEL_17;
  }
  *(_DWORD *)(result + 564) = 4 * (v9 * *(__int16 *)(result + 294) + *(__int16 *)(result + 296) * v8);
LABEL_19:
  if ( *(_WORD *)(result + 294) == 0x4000 )
  {
    v4 = sub_21DF60;
  }
  else if ( *(_WORD *)(result + 296) == 0x4000 )
  {
    v4 = sub_21DF64;
  }
  else
  {
    v4 = sub_21DF30;
  }
  *(_DWORD *)(result + 572) = v4;
  if ( *(_WORD *)(result + 290) == 0x4000 )
  {
    v5 = sub_21DF60;
  }
  else if ( *(_WORD *)(result + 292) == 0x4000 )
  {
    v5 = sub_21DF64;
  }
  else
  {
    v5 = sub_21DF48;
  }
  *(_DWORD *)(result + 576) = v5;
  *(_DWORD *)(result + 584) = sub_21E8E4;
  *(_DWORD *)(result + 588) = sub_21E884;
  v6 = *(_DWORD *)(result + 564);
  if ( v6 == 0x40000000 )
  {
    if ( v9 == 0x4000 )
    {
      *(_DWORD *)(result + 584) = sub_21DE12;
      v7 = sub_21DE4A;
LABEL_34:
      *(_DWORD *)(result + 588) = v7;
      goto LABEL_35;
    }
    if ( *(_WORD *)(result + 300) == 0x4000 )
    {
      *(_DWORD *)(result + 584) = sub_21DE2E;
      v7 = sub_21DE58;
      goto LABEL_34;
    }
  }
LABEL_35:
  if ( (unsigned int)(v6 + 0x3FFFFFF) <= 0x7FFFFFE )
    *(_DWORD *)(result + 564) = 0x40000000;
  *(_DWORD *)(result + 256) = 0;
  return result;
}


//======================================================================
// sub_21E17C
// address: 0x0021E17C   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_21E17C(int a1)
{
  int v1; // r2
  int v2; // r1
  int v4; // r5
  int v5; // r4
  int v6; // r4

  v1 = *(_DWORD *)(a1 + 360) + *(_DWORD *)(a1 + 372);
  v2 = *(_DWORD *)(a1 + 364);
  *(_DWORD *)(a1 + 360) = v1;
  if ( v1 >= v2 )
    goto LABEL_2;
  v4 = *(_DWORD *)(a1 + 356);
  v5 = *(unsigned __int8 *)(v4 + v1);
  *(_BYTE *)(a1 + 368) = v5;
  v6 = byte_43488C[v5];
  *(_DWORD *)(a1 + 372) = v6;
  if ( v6 < 0 )
  {
    if ( v1 + 1 >= v2 )
    {
LABEL_2:
      *(_DWORD *)(a1 + 12) = 131;
      return 1;
    }
    *(_DWORD *)(a1 + 372) = 2 - v6 * *(unsigned __int8 *)(v4 + v1 + 1);
  }
  if ( v1 + *(_DWORD *)(a1 + 372) > v2 )
    goto LABEL_2;
  return 0;
}


//======================================================================
// sub_21E1D0
// address: 0x0021E1D0   size: 0x92 (146 bytes)
//======================================================================
unsigned int __fastcall sub_21E1D0(int a1, _DWORD *a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int result; // r0
  int v6; // r3
  int v7; // r3

  v2 = *(_DWORD *)(a1 + 408);
  v3 = *(_DWORD *)(a1 + 416);
  result = v3 + 20 * v2;
  while ( v3 < result && *(_DWORD *)(v3 + 12) != *a2 )
    v3 += 20;
  if ( v3 == result )
  {
    result = *(_DWORD *)(a1 + 412);
    if ( v2 >= result )
      goto LABEL_10;
    *(_DWORD *)(a1 + 408) = v2 + 1;
  }
  if ( *a2 > 0xFFu )
  {
LABEL_10:
    v6 = 141;
LABEL_18:
    *(_DWORD *)(a1 + 12) = v6;
    return result;
  }
  *(_DWORD *)(v3 + 12) = *a2;
  *(_DWORD *)(v3 + 4) = *(_DWORD *)(a1 + 360) + 1;
  *(_DWORD *)v3 = *(_DWORD *)(a1 + 352);
  *(_BYTE *)(v3 + 16) = 1;
  if ( *a2 > *(_DWORD *)(a1 + 424) )
    *(_DWORD *)(a1 + 424) = (unsigned __int8)*a2;
  while ( 1 )
  {
    result = sub_21E17C(a1);
    if ( result != 0 )
      return result;
    v7 = *(unsigned __int8 *)(a1 + 368);
    if ( v7 == 45 )
      return result;
    if ( v7 == 137 || v7 == 44 )
    {
      v6 = 137;
      goto LABEL_18;
    }
  }
}


//======================================================================
// sub_21E264
// address: 0x0021E264   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_21E264(int result, unsigned __int16 *a2)
{
  unsigned int v2; // r6
  int v3; // r4
  int v5; // r0
  int v6; // r3
  int v7; // r2

  v2 = *a2;
  v3 = result;
  if ( *(unsigned __int16 *)(result + 116) > v2 )
  {
    v5 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(result + 572))(
           result,
           *(_DWORD *)(*(_DWORD *)(result + 124) + 8 * v2),
           *(_DWORD *)(*(_DWORD *)(result + 124) + 8 * v2 + 4));
    result = (*(int (__fastcall **)(int, int, unsigned int, int))(v3 + 584))(v3, v3 + 108, v2, *((_DWORD *)a2 + 1) - v5);
    if ( *(_WORD *)(v3 + 348) == 0 )
    {
      v6 = *(_DWORD *)(v3 + 124);
      v7 = *(_DWORD *)(v3 + 120);
      *(_DWORD *)(v7 + 8 * v2) = *(_DWORD *)(v6 + 8 * v2);
      *(_DWORD *)(v7 + 8 * v2 + 4) = *(_DWORD *)(v6 + 8 * v2 + 4);
    }
  }
  else if ( *(_BYTE *)(result + 561) != 0 )
  {
    *(_DWORD *)(result + 12) = 134;
  }
  return result;
}


//======================================================================
// sub_21E2C8
// address: 0x0021E2C8   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_21E2C8(int result, int a2, int a3, int a4, char a5)
{
  int v5; // r6
  char v6; // r2
  char *v7; // r1
  char v8; // r3
  int v9; // r2

  if ( *(_BYTE *)(*(_DWORD *)result + 692) != 0 )
  {
    v5 = *(_DWORD *)(result + 124);
    if ( *(_BYTE *)(result + 302) != 0 )
    {
      *(_DWORD *)(v5 + 8 * a2) += a3;
      if ( a5 == 0 )
        return result;
      result += 8;
      v6 = 8;
      v7 = (char *)(*(_DWORD *)(result + 124) + a2);
      v8 = *v7;
LABEL_13:
      *v7 = v8 | v6;
      return result;
    }
    v9 = v5 + 8 * a2;
LABEL_11:
    *(_DWORD *)(v9 + 4) += a4;
    if ( a5 == 0 )
      return result;
    result += 8;
    v6 = 16;
    v7 = (char *)(*(_DWORD *)(result + 124) + a2);
    v8 = *v7;
    goto LABEL_13;
  }
  if ( *(_WORD *)(result + 298) != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(result + 124) + 8 * a2) += a3;
    if ( a5 != 0 )
      *(_BYTE *)(*(_DWORD *)(result + 132) + a2) |= 8u;
  }
  if ( *(_WORD *)(result + 300) != 0 )
  {
    v9 = *(_DWORD *)(result + 124) + 8 * a2;
    goto LABEL_11;
  }
  return result;
}


//======================================================================
// sub_21E358
// address: 0x0021E358   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_21E358(int result, int *a2)
{
  int v2; // r5
  int v3; // r4
  int v4; // r6
  int v5; // r7
  int v6; // r0
  int v7; // r1
  int v8; // r6
  int v9; // r2
  int v10; // r3
  unsigned int v11; // r1
  int v12; // [sp+Ch] [bp-8h]

  v2 = result + 252;
  v3 = result;
  if ( *(_DWORD *)(result + 304) < *(_DWORD *)(result + 16) )
  {
    v4 = *a2;
    if ( *(_BYTE *)(*(_DWORD *)result + 692) != 0 )
    {
      v5 = *(unsigned __int8 *)(result + 302);
      v6 = *a2;
      v7 = 0x4000;
      if ( v5 != 0 )
      {
        result = sub_21DD1E(v6, 0x4000);
        v8 = 0;
        v5 = result;
        goto LABEL_12;
      }
    }
    else
    {
      v12 = result + 254;
      v5 = sub_21DD1E(v4, *(__int16 *)(result + 298));
      v6 = v4;
      v7 = *(__int16 *)(v12 + 46);
    }
    result = sub_21DD1E(v6, v7);
    v8 = result;
LABEL_12:
    while ( *(int *)(v2 + 52) > 0 )
    {
      v9 = *(_DWORD *)(v3 + 24);
      v10 = *(_DWORD *)(v3 + 28) - 1;
      *(_DWORD *)(v3 + 28) = v10;
      v11 = *(unsigned __int16 *)(v9 + 4 * v10);
      if ( *(unsigned __int16 *)(v3 + 116) <= v11 )
      {
        if ( *(_BYTE *)(v3 + 561) != 0 )
        {
          *(_DWORD *)(v3 + 12) = 134;
          return result;
        }
      }
      else
      {
        result = sub_21E2C8(v3, v11, v5, v8, 1);
      }
      --*(_DWORD *)(v2 + 52);
    }
  }
  else if ( *(_BYTE *)(result + 561) != 0 )
  {
    *(_DWORD *)(result + 12) = 134;
  }
  *(_DWORD *)(v2 + 52) = 1;
  *(_DWORD *)(v3 + 32) = *(_DWORD *)(v3 + 28);
  return result;
}


//======================================================================
// sub_21E414
// address: 0x0021E414   size: 0xCA (202 bytes)
//======================================================================
__int64 __fastcall sub_21E414(int a1, _DWORD *a2)
{
  unsigned int v4; // r5
  unsigned int v5; // r3
  int v6; // r2
  int v7; // r3
  int v8; // r1
  int v9; // r3
  int v10; // r2
  _DWORD *v11; // r3
  int v12; // r0
  __int16 v13; // r3
  __int64 v15; // [sp+0h] [bp-Ch]

  LODWORD(v15) = a1;
  HIDWORD(v15) = *a2 << 16;
  v4 = (unsigned __int16)*a2;
  if ( *(unsigned __int16 *)(a1 + 80) > v4
    && (v5 = *(unsigned __int16 *)(a1 + 284), *(unsigned __int16 *)(a1 + 44) > v5) )
  {
    if ( *(_WORD *)(a1 + 346) == 0 )
    {
      v6 = *(_DWORD *)(a1 + 48);
      v7 = 8 * v5;
      v8 = *(_DWORD *)(a1 + 84);
      *(_DWORD *)(v8 + 8 * v4) = *(_DWORD *)(v7 + v6);
      *(_DWORD *)(v8 + 8 * v4 + 4) = *(_DWORD *)(v6 + v7 + 4);
      (*(void (__fastcall **)(int, int, unsigned int, _DWORD))(a1 + 588))(a1, a1 + 72, v4, a2[1]);
      v9 = *(_DWORD *)(a1 + 84);
      v10 = *(_DWORD *)(a1 + 88);
      *(_DWORD *)(v10 + 8 * v4) = *(_DWORD *)(v9 + 8 * v4);
      *(_DWORD *)(v10 + 8 * v4 + 4) = *(_DWORD *)(v9 + 8 * v4 + 4);
    }
    v11 = (_DWORD *)(*(_DWORD *)(a1 + 52) + 8 * *(unsigned __int16 *)(a1 + 284));
    v12 = (*(int (__fastcall **)(int, int, int))(a1 + 572))(
            a1,
            *(_DWORD *)(*(_DWORD *)(a1 + 88) + (HIDWORD(v15) >> 13)) - *v11,
            *(_DWORD *)(*(_DWORD *)(a1 + 88) + (HIDWORD(v15) >> 13) + 4) - v11[1]);
    (*(void (__fastcall **)(int, int, unsigned int, int))(a1 + 584))(a1, a1 + 72, v4, a2[1] - v12);
    v13 = *(_WORD *)(a1 + 284);
    *(_WORD *)(a1 + 288) = v4;
    *(_WORD *)(a1 + 286) = v13;
    if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
      *(_WORD *)(a1 + 284) = v4;
  }
  else if ( *(_BYTE *)(a1 + 561) != 0 )
  {
    *(_DWORD *)(a1 + 12) = 134;
  }
  return v15;
}


//======================================================================
// sub_21E4E4
// address: 0x0021E4E4   size: 0xE2 (226 bytes)
//======================================================================
int __fastcall sub_21E4E4(int result, _DWORD *a2)
{
  unsigned int v2; // r3
  unsigned int v3; // r7
  int v4; // r4
  int v5; // r0
  int v6; // r5
  int v7; // r3
  int v8; // r2
  int v9; // r0
  int v10; // r6
  int v11; // r4
  unsigned int v12; // [sp+4h] [bp-10h]
  int *v13; // [sp+Ch] [bp-8h]
  int v14; // [sp+Ch] [bp-8h]

  v2 = a2[1];
  v12 = *a2 << 16;
  v3 = (unsigned __int16)*a2;
  v4 = result;
  if ( *(unsigned __int16 *)(result + 44) > v3 && v2 < *(_DWORD *)(result + 380) )
  {
    v5 = (*(int (__fastcall **)(int, unsigned int))(result + 592))(result, v2);
    v6 = v5;
    if ( *(_WORD *)(v4 + 344) == 0 )
    {
      v13 = (int *)(*(_DWORD *)(v4 + 48) + 8 * v3);
      *v13 = sub_21DD1E(v5, *(__int16 *)(v4 + 298));
      v14 = *(_DWORD *)(v4 + 48) + 8 * v3;
      *(_DWORD *)(v14 + 4) = sub_21DD1E(v6, *(__int16 *)(v4 + 300));
      v7 = *(_DWORD *)(v4 + 48);
      v8 = *(_DWORD *)(v4 + 52);
      *(_DWORD *)(v8 + 8 * v3) = *(_DWORD *)(v7 + 8 * v3);
      *(_DWORD *)(v8 + 8 * v3 + 4) = *(_DWORD *)(v7 + 8 * v3 + 4);
    }
    v9 = (*(int (__fastcall **)(int, _DWORD, _DWORD))(v4 + 572))(
           v4,
           *(_DWORD *)(*(_DWORD *)(v4 + 52) + (v12 >> 13)),
           *(_DWORD *)(*(_DWORD *)(v4 + 52) + (v12 >> 13) + 4));
    v10 = v9;
    if ( (*(_BYTE *)(v4 + 368) & 1) != 0 )
    {
      if ( ((v6 - v9 + ((v6 - v9) >> 31)) ^ ((v6 - v9) >> 31)) > *(_DWORD *)(v4 + 320) )
        v6 = v9;
      v6 = (*(int (__fastcall **)(int, int, _DWORD))(v4 + 568))(v4, v6, *(_DWORD *)(v4 + 264));
    }
    result = (*(int (__fastcall **)(int, int, unsigned int, int))(v4 + 584))(v4, v4 + 36, v3, v6 - v10);
  }
  else if ( *(_BYTE *)(result + 561) != 0 )
  {
    *(_DWORD *)(result + 12) = 134;
  }
  v11 = v4 + 254;
  *(_WORD *)(v11 + 30) = v3;
  *(_WORD *)(v11 + 32) = v3;
  return result;
}


//======================================================================
// sub_21E5CC
// address: 0x0021E5CC   size: 0x106 (262 bytes)
//======================================================================
unsigned int __fastcall sub_21E5CC(int a1, unsigned int *a2)
{
  unsigned int v4; // r3
  unsigned int v5; // r0
  unsigned int v6; // r1
  unsigned int v7; // r1
  unsigned int v8; // r3
  unsigned int result; // r0
  _DWORD *v10; // r3
  _DWORD *v11; // r6
  int v12; // r1
  unsigned int v13; // r2
  int (__fastcall *v14)(int, int, unsigned int); // r3
  int *v15; // r2
  int *v16; // r3
  int v17; // r6
  int v18; // r7
  int v19; // r0
  int *v20; // r6
  int v21; // r1
  int v22; // r3
  int v23; // r0
  int v24; // r0
  unsigned int v25; // r7
  int *v26; // [sp+8h] [bp-Ch]

  v4 = *(unsigned __int16 *)(a1 + 44);
  v5 = *a2;
  v6 = a2[1];
  if ( v4 > (unsigned __int16)v5 )
  {
    v7 = v6 << 16;
    v8 = HIWORD(v7);
    if ( *(unsigned __int16 *)(a1 + 80) > HIWORD(v7) )
    {
      if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
      {
        v10 = (_DWORD *)(*(_DWORD *)(a1 + 88) + 8 * v8);
        v11 = (_DWORD *)(*(_DWORD *)(a1 + 52) + 8 * (unsigned __int16)v5);
        v12 = *v11 - *v10;
        v13 = v11[1] - v10[1];
        v14 = *(int (__fastcall **)(int, int, unsigned int))(a1 + 572);
      }
      else
      {
        if ( *(_WORD *)(a1 + 344) != 0 && *(_WORD *)(a1 + 346) != 0 )
        {
          v26 = (int *)(*(_DWORD *)(a1 + 92) + 8 * v8);
          v20 = (int *)(*(_DWORD *)(a1 + 56) + 8 * (unsigned __int16)v5);
          v21 = *(_DWORD *)(a1 + 220);
          v22 = *v26;
          v23 = *v20;
          if ( v21 == *(_DWORD *)(a1 + 224) )
          {
            v24 = (*(int (__fastcall **)(int, int, int))(a1 + 576))(a1, v23 - v22, v20[1] - v26[1]);
            result = FT_MulFix(v24, *(_DWORD *)(a1 + 220));
            goto LABEL_15;
          }
          v25 = FT_MulFix(v23 - v22, v21);
          v13 = FT_MulFix(v20[1] - v26[1], *(_DWORD *)(a1 + 224));
          v14 = *(int (__fastcall **)(int, int, unsigned int))(a1 + 576);
          v12 = v25;
          v19 = a1;
LABEL_14:
          result = v14(v19, v12, v13);
          goto LABEL_15;
        }
        v15 = (int *)(*(_DWORD *)(a1 + 48) + ((8 * v5) & 0x7FFFF));
        v16 = (int *)(*(_DWORD *)(a1 + 84) + (v7 >> 13));
        v17 = *v15;
        v18 = *v16;
        v13 = v15[1] - v16[1];
        v14 = *(int (__fastcall **)(int, int, unsigned int))(a1 + 576);
        v12 = v17 - v18;
      }
      v19 = a1;
      goto LABEL_14;
    }
  }
  result = 0;
  if ( *(_BYTE *)(a1 + 561) != 0 )
    *(_DWORD *)(a1 + 12) = 134;
LABEL_15:
  *a2 = result;
  return result;
}


//======================================================================
// sub_21E6D8
// address: 0x0021E6D8   size: 0xE8 (232 bytes)
//======================================================================
int __fastcall sub_21E6D8(int a1)
{
  _BYTE *v1; // r6
  _WORD *v3; // r5
  int v4; // r1
  int v5; // r7
  int v6; // r3
  int v7; // r1
  int v8; // r7
  int v9; // r2
  int result; // r0
  int v11; // r0
  unsigned int v12; // r2
  unsigned int v13; // r3
  _WORD *v14; // r1
  __int64 v15; // r0
  int v16; // r0

  v1 = (_BYTE *)(a1 + 108);
  *(_BYTE *)(a1 + 108) = 0;
  v3 = *(_WORD **)a1;
  v4 = *(_DWORD *)(a1 + 16);
  v5 = *(_DWORD *)(a1 + 20);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 + 12);
  *(_DWORD *)(a1 + 48) = v4;
  *(_DWORD *)(a1 + 52) = v5;
  v6 = a1 + 56;
  v7 = *(_DWORD *)(a1 + 28);
  v8 = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(a1 + 56) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a1 + 60) = v7;
  *(_DWORD *)(a1 + 64) = v8;
  v9 = *(_DWORD *)(a1 + 36);
  result = 151;
  *(_DWORD *)(v6 + 12) = v9;
  if ( *(_WORD *)(a1 + 44) != 0 && *(_WORD *)(a1 + 46) != 0 )
  {
    if ( (v3[88] & 8) != 0 )
    {
      *(_DWORD *)(a1 + 48) = FT_DivFix(*(unsigned __int16 *)(a1 + 44) << 6, (unsigned __int16)v3[34]);
      v11 = FT_DivFix(*(unsigned __int16 *)(a1 + 46) << 6, (unsigned __int16)v3[34]);
      *(_DWORD *)(a1 + 52) = v11;
      *(_DWORD *)(a1 + 56) = (FT_MulFix((__int16)v3[35], v11) + 32) & 0xFFFFFFC0;
      *(_DWORD *)(a1 + 60) = (FT_MulFix((__int16)v3[36], *(_DWORD *)(a1 + 52)) + 32) & 0xFFFFFFC0;
      *(_DWORD *)(a1 + 64) = (FT_MulFix((__int16)v3[37], *(_DWORD *)(a1 + 52)) + 32) & 0xFFFFFFC0;
      *(_DWORD *)(a1 + 68) = (FT_MulFix((__int16)v3[38], *(_DWORD *)(a1 + 48)) + 32) & 0xFFFFFFC0;
    }
    v12 = *(unsigned __int16 *)(a1 + 44);
    v13 = *(unsigned __int16 *)(a1 + 46);
    v14 = (_WORD *)(a1 + 80);
    if ( v12 < v13 )
    {
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 52);
      *v14 = v13;
      v16 = FT_MulDiv(v12 | 0x1000000000000LL, v13);
      *(_DWORD *)(a1 + 76) = 0x10000;
      *(_DWORD *)(a1 + 72) = v16;
    }
    else
    {
      LODWORD(v15) = *(unsigned __int16 *)(a1 + 46);
      *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 48);
      *v14 = v12;
      *(_DWORD *)(a1 + 72) = 0x10000;
      HIDWORD(v15) = 0x10000;
      *(_DWORD *)(a1 + 76) = FT_MulDiv(v15, v12);
    }
    *(_BYTE *)(a1 + 301) = 0;
    *v1 = 1;
    return 0;
  }
  return result;
}


//======================================================================
// sub_21E7C0
// address: 0x0021E7C0   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_21E7C0(unsigned int *a1, int a2)
{
  unsigned int v3; // r0
  int result; // r0

  v3 = *a1;
  a1[28] = a2;
  if ( (*(_DWORD *)(v3 + 8) & 1) != 0 )
  {
    FT_Select_Metrics(v3, a2);
    sub_21E6D8((int)a1);
    return 0;
  }
  else
  {
    result = (*(int (**)(void))(*(_DWORD *)(v3 + 532) + 152))();
    if ( result != 0 )
      a1[28] = -1;
  }
  return result;
}


//======================================================================
// sub_21E7F8
// address: 0x0021E7F8   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_21E7F8(unsigned int *a1, __int16 a2, int a3, int a4, int a5)
{
  int v6; // r4
  unsigned int i; // r5
  int v8; // r3
  int v9; // r0
  __int64 v10; // r0
  int v11; // r12
  int v12; // r2
  __int64 v13; // r0
  int v14; // r2

  v6 = 0x10000;
  for ( i = 0; i < *a1; ++i )
  {
    v8 = *(_DWORD *)(a3 + 4 * i);
    if ( v8 != 0 )
    {
      v9 = *(_DWORD *)(a1[1] + 4 * i);
      if ( v9 == 0 )
        return 0;
      if ( v9 >= 0 )
      {
        if ( v8 < 0 )
          return 0;
      }
      else if ( v8 > 0 )
      {
        return 0;
      }
      if ( (a2 & 0x4000) != 0 )
      {
        v11 = *(_DWORD *)(a4 + 4 * i);
        if ( v9 <= v11 )
          return 0;
        v12 = *(_DWORD *)(a5 + 4 * i);
        if ( v9 >= v12 )
          return 0;
        if ( v9 >= v8 )
        {
          LODWORD(v13) = v12 - v9;
          v14 = v12 - v8;
        }
        else
        {
          LODWORD(v13) = v9 - v11;
          v14 = v8 - v11;
        }
        HIDWORD(v13) = 0x10000;
        HIDWORD(v10) = FT_MulDiv(v13, v14);
      }
      else
      {
        HIDWORD(v10) = (v9 + (v9 >> 31)) ^ (v9 >> 31);
      }
      LODWORD(v10) = v6;
      v6 = FT_MulDiv(v10, 0x10000);
    }
  }
  return v6;
}


//======================================================================
// sub_21E884
// address: 0x0021E884   size: 0x60 (96 bytes)
//======================================================================
unsigned __int64 __fastcall sub_21E884(unsigned int a1, int a2, unsigned int a3, int a4)
{
  __int64 v7; // r0
  _DWORD *v8; // r7
  int v9; // r2
  __int64 v10; // r0
  int v11; // r6
  int v12; // r7
  unsigned __int64 v14; // [sp+0h] [bp-Ch]

  v14 = __PAIR64__(a3, a1);
  if ( *(_WORD *)(a1 + 298) != 0 )
  {
    HIDWORD(v7) = *(__int16 *)(a1 + 298) << 16;
    v8 = (_DWORD *)(*(_DWORD *)(a2 + 12) + 8 * a3);
    LODWORD(v14) = *v8;
    v9 = *(_DWORD *)(a1 + 564);
    LODWORD(v7) = a4;
    *v8 = v14 + FT_MulDiv(v7, v9);
  }
  if ( *(_WORD *)(a1 + 300) != 0 )
  {
    HIDWORD(v10) = *(__int16 *)(a1 + 300) << 16;
    v11 = *(_DWORD *)(a2 + 12) + 8 * HIDWORD(v14);
    LODWORD(v10) = a4;
    v12 = *(_DWORD *)(v11 + 4);
    *(_DWORD *)(v11 + 4) = v12 + FT_MulDiv(v10, *(_DWORD *)(a1 + 564));
  }
  return v14;
}


//======================================================================
// sub_21E8E4
// address: 0x0021E8E4   size: 0x78 (120 bytes)
//======================================================================
unsigned __int64 __fastcall sub_21E8E4(unsigned int a1, int a2, int a3, unsigned int a4)
{
  __int64 v7; // r0
  _DWORD *v8; // r7
  int v9; // r2
  __int64 v10; // r0
  int v11; // r7
  unsigned __int64 v13; // [sp+0h] [bp-Ch]

  v13 = __PAIR64__(a4, a1);
  if ( *(_WORD *)(a1 + 298) != 0 )
  {
    HIDWORD(v7) = *(__int16 *)(a1 + 298) << 16;
    v8 = (_DWORD *)(*(_DWORD *)(a2 + 16) + 8 * a3);
    LODWORD(v13) = *v8;
    v9 = *(_DWORD *)(a1 + 564);
    LODWORD(v7) = a4;
    *v8 = v13 + FT_MulDiv(v7, v9);
    *(_BYTE *)(*(_DWORD *)(a2 + 24) + a3) |= 8u;
  }
  if ( *(_WORD *)(a1 + 300) != 0 )
  {
    HIDWORD(v10) = *(__int16 *)(a1 + 300) << 16;
    v11 = *(_DWORD *)(a2 + 16) + 8 * a3;
    LODWORD(v13) = *(_DWORD *)(v11 + 4);
    LODWORD(v10) = HIDWORD(v13);
    *(_DWORD *)(v11 + 4) = v13 + FT_MulDiv(v10, *(_DWORD *)(a1 + 564));
    *(_BYTE *)(*(_DWORD *)(a2 + 24) + a3) |= 0x10u;
  }
  return v13;
}


//======================================================================
// sub_21E95C
// address: 0x0021E95C   size: 0x126 (294 bytes)
//======================================================================
int __fastcall sub_21E95C(int a1, int *a2, int *a3, _DWORD *a4, _WORD *a5)
{
  unsigned int v9; // r3
  unsigned int v10; // r2
  int result; // r0
  int v12; // r5
  int v13; // r3
  __int64 v14; // r0
  __int64 v15; // r0
  int v16; // [sp+0h] [bp-3Ch]
  int v17; // [sp+Ch] [bp-30h]
  int v18; // [sp+14h] [bp-28h]
  int v19; // [sp+18h] [bp-24h]
  int v20; // [sp+1Ch] [bp-20h]
  int v21; // [sp+28h] [bp-14h]
  int v22; // [sp+2Ch] [bp-10h]
  int v23; // [sp+30h] [bp-Ch]
  int v24; // [sp+34h] [bp-8h]

  if ( (*(_BYTE *)(a1 + 368) & 1) != 0 )
  {
    v18 = *(_DWORD *)(a1 + 36);
    v19 = *(_DWORD *)(a1 + 40);
    v20 = *(_DWORD *)(a1 + 44);
    v21 = *(_DWORD *)(a1 + 56);
    v22 = *(_DWORD *)(a1 + 60);
    v23 = *(_DWORD *)(a1 + 64);
    v24 = *(_DWORD *)(a1 + 68);
    v9 = *(unsigned __int16 *)(a1 + 44);
    v17 = *(_DWORD *)(a1 + 48);
    v16 = *(_DWORD *)(a1 + 52);
    v10 = *(unsigned __int16 *)(a1 + 286);
  }
  else
  {
    v18 = *(_DWORD *)(a1 + 72);
    v19 = *(_DWORD *)(a1 + 76);
    v20 = *(_DWORD *)(a1 + 80);
    v21 = *(_DWORD *)(a1 + 92);
    v22 = *(_DWORD *)(a1 + 96);
    v23 = *(_DWORD *)(a1 + 100);
    v24 = *(_DWORD *)(a1 + 104);
    v9 = *(unsigned __int16 *)(a1 + 80);
    v10 = *(unsigned __int16 *)(a1 + 288);
    v17 = *(_DWORD *)(a1 + 84);
    v16 = *(_DWORD *)(a1 + 88);
  }
  if ( v10 < v9 )
  {
    LOWORD(v20) = v9;
    *a4 = v18;
    a4[1] = v19;
    a4[2] = v20;
    a4[3] = v17;
    a4[4] = v16;
    a4[5] = v21;
    a4[6] = v22;
    a4[7] = v23;
    a4[8] = v24;
    *a5 = v10;
    v12 = (*(int (__fastcall **)(int, int, int))(a1 + 572))(
            a1,
            *(_DWORD *)(v16 + 8 * v10) - *(_DWORD *)(v17 + 8 * v10),
            *(_DWORD *)(v16 + 8 * v10 + 4) - *(_DWORD *)(v17 + 8 * v10 + 4));
    if ( *(_BYTE *)(*(_DWORD *)a1 + 692) != 0 )
    {
      v13 = *(unsigned __int8 *)(a1 + 302);
      result = 0;
      if ( *(_BYTE *)(a1 + 302) != 0 )
      {
        *a2 = v12;
        *a3 = 0;
      }
      else
      {
        *a2 = v13;
        *a3 = v12;
        return v13;
      }
    }
    else
    {
      LODWORD(v14) = v12;
      HIDWORD(v14) = *(__int16 *)(a1 + 298) << 16;
      *a2 = FT_MulDiv(v14, *(_DWORD *)(a1 + 564));
      LODWORD(v15) = v12;
      HIDWORD(v15) = *(__int16 *)(a1 + 300) << 16;
      *a3 = FT_MulDiv(v15, *(_DWORD *)(a1 + 564));
      return 0;
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 561) != 0 )
      *(_DWORD *)(a1 + 12) = 134;
    *a5 = 0;
    return 1;
  }
  return result;
}


//======================================================================
// sub_21EA88
// address: 0x0021EA88   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_21EA88(unsigned int *a1, _DWORD *a2)
{
  unsigned int v3; // r0
  int v5; // r5
  int result; // r0
  unsigned int *v7; // r3
  unsigned int *v8; // r2
  unsigned int v9; // r1
  unsigned int v10; // r4
  unsigned int v11; // r5
  unsigned int v12; // r4
  unsigned int v13; // r5

  v3 = *a1;
  v5 = *(_DWORD *)(v3 + 8) & 2;
  if ( v5 != 0 )
  {
    v5 = (*(int (**)(void))(*(_DWORD *)(v3 + 532) + 148))();
    if ( v5 == 0 )
      return sub_21E7C0(a1, (int)a2);
    a1[28] = -1;
  }
  FT_Request_Metrics(*a1, a2);
  result = v5;
  if ( (*(_DWORD *)(*a1 + 8) & 1) != 0 )
  {
    result = sub_21E6D8((int)a1);
    v7 = a1 + 3;
    v8 = a1 + 11;
    v9 = a1[11];
    v10 = a1[12];
    v11 = v8[2];
    v8 += 3;
    *v7 = v9;
    v7[1] = v10;
    v7[2] = v11;
    v7 += 3;
    v12 = v8[1];
    v13 = v8[2];
    *v7 = *v8;
    v7[1] = v12;
    v7[2] = v13;
    v7[3] = v8[3];
  }
  return result;
}


//======================================================================
// sub_21EAEC
// address: 0x0021EAEC   size: 0x38 (56 bytes)
//======================================================================
int __fastcall sub_21EAEC(int a1, unsigned int *a2, int a3, int *a4, unsigned int a5)
{
  int v7; // r5
  int v8; // r0
  int v10; // [sp+Ch] [bp-8h] BYREF

  v7 = 0;
  if ( *a2 < a5 )
  {
    v8 = ft_mem_realloc(a1, 1, *a2 * a3, a5 * a3, *a4, &v10);
    v7 = v10;
    *a4 = v8;
    if ( v7 == 0 )
      *a2 = a5;
  }
  return v7;
}


//======================================================================
// sub_21EB24
// address: 0x0021EB24   size: 0x1C0 (448 bytes)
//======================================================================
int __fastcall sub_21EB24(int a1, int a2, int a3)
{
  int v6; // r1
  int v7; // r7
  int v8; // r1
  int v9; // r7
  int v10; // r1
  int v11; // r7
  int v12; // r1
  int v13; // r7
  int v14; // r1
  int v15; // r7
  int i; // r3
  _DWORD *v17; // r2
  int v18; // r1
  int *v19; // r5
  int v20; // r0
  int v21; // r1
  int v22; // r7
  int v23; // r0
  int v24; // r2
  int v25; // r7
  int v26; // r2
  int v27; // r7
  int v28; // r1
  int v29; // r7
  int v30; // r1
  int v31; // r7
  int v32; // r1
  int v33; // r7
  int v34; // r1
  int v35; // r2
  int v36; // r1
  int v37; // r7
  int v38; // r2
  int v39; // r7
  int v40; // r6
  int result; // r0
  int v42; // r6
  int v43; // r7
  int v44; // r6
  int v45; // r7
  int v46; // r6
  int v47; // r7
  int v48; // r6
  int v49; // r7
  int v50; // r6
  int v51; // r7
  int v52; // r6
  int v53; // r7
  int v54; // r5
  int v55; // r7
  int v56; // r6
  int v57; // r7
  int v58; // r6
  int v59; // r7
  unsigned int v60; // [sp+0h] [bp-14h]
  unsigned int v61[2]; // [sp+Ch] [bp-8h] BYREF

  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  if ( a3 != 0 )
  {
    *(_DWORD *)(a1 + 396) = *(_DWORD *)(a3 + 116);
    *(_DWORD *)(a1 + 400) = *(_DWORD *)(a3 + 120);
    *(_DWORD *)(a1 + 408) = *(_DWORD *)(a3 + 128);
    *(_DWORD *)(a1 + 412) = *(_DWORD *)(a3 + 132);
    *(_DWORD *)(a1 + 404) = *(_DWORD *)(a3 + 124);
    *(_DWORD *)(a1 + 416) = *(_DWORD *)(a3 + 136);
    v6 = *(_DWORD *)(a3 + 76);
    v7 = *(_DWORD *)(a3 + 80);
    *(_DWORD *)(a1 + 244) = *(_DWORD *)(a3 + 72);
    *(_DWORD *)(a1 + 248) = v6;
    *(_DWORD *)(a1 + 252) = v7;
    v8 = *(_DWORD *)(a3 + 88);
    v9 = *(_DWORD *)(a3 + 92);
    *(_DWORD *)(a1 + 256) = *(_DWORD *)(a3 + 84);
    *(_DWORD *)(a1 + 260) = v8;
    *(_DWORD *)(a1 + 264) = v9;
    v10 = *(_DWORD *)(a3 + 100);
    v11 = *(_DWORD *)(a3 + 104);
    *(_DWORD *)(a1 + 268) = *(_DWORD *)(a3 + 96);
    *(_DWORD *)(a1 + 272) = v10;
    *(_DWORD *)(a1 + 276) = v11;
    *(_DWORD *)(a1 + 280) = *(_DWORD *)(a3 + 108);
    v12 = *(_DWORD *)(a3 + 48);
    v13 = *(_DWORD *)(a3 + 52);
    *(_DWORD *)(a1 + 216) = *(_DWORD *)(a3 + 44);
    *(_DWORD *)(a1 + 220) = v12;
    *(_DWORD *)(a1 + 224) = v13;
    v14 = *(_DWORD *)(a3 + 60);
    v15 = *(_DWORD *)(a3 + 64);
    *(_DWORD *)(a1 + 228) = *(_DWORD *)(a3 + 56);
    *(_DWORD *)(a1 + 232) = v14;
    *(_DWORD *)(a1 + 236) = v15;
    *(_DWORD *)(a1 + 240) = *(_DWORD *)(a3 + 68);
    *(_DWORD *)(a1 + 420) = *(_DWORD *)(a3 + 140);
    *(_DWORD *)(a1 + 424) = *(_DWORD *)(a3 + 144);
    for ( i = 0; i != 24; i += 8 )
    {
      v17 = (_DWORD *)(a1 + i + 444);
      *v17 = *(_DWORD *)(a3 + i + 148);
      v18 = *(_DWORD *)(a3 + i + 152);
      v17[1] = v18;
    }
    j_memcpy((void *)(a1 + 284), (const void *)(a3 + 172), 0x44u);
    *(_DWORD *)(a1 + 380) = *(_DWORD *)(a3 + 240);
    *(_DWORD *)(a1 + 384) = *(_DWORD *)(a3 + 244);
    *(_WORD *)(a1 + 468) = *(_WORD *)(a3 + 248);
    *(_DWORD *)(a1 + 472) = *(_DWORD *)(a3 + 252);
    v19 = (int *)(a3 + 256);
    v20 = *v19;
    v21 = v19[1];
    v22 = v19[2];
    v19 += 3;
    *(_DWORD *)(a1 + 180) = v20;
    *(_DWORD *)(a1 + 184) = v21;
    *(_DWORD *)(a1 + 188) = v22;
    v23 = *v19;
    v24 = v19[1];
    v25 = v19[2];
    v19 += 3;
    *(_DWORD *)(a1 + 192) = v23;
    *(_DWORD *)(a1 + 196) = v24;
    *(_DWORD *)(a1 + 200) = v25;
    v26 = v19[1];
    v27 = v19[2];
    *(_DWORD *)(a1 + 204) = *v19;
    *(_DWORD *)(a1 + 208) = v26;
    *(_DWORD *)(a1 + 212) = v27;
    j_memset((void *)(a1 + 36), 0, 0x24u);
    v28 = *(_DWORD *)(a1 + 40);
    v29 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 76) = v28;
    *(_DWORD *)(a1 + 80) = v29;
    v30 = *(_DWORD *)(a1 + 52);
    v31 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 88) = v30;
    *(_DWORD *)(a1 + 92) = v31;
    v32 = *(_DWORD *)(a1 + 64);
    v33 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 100) = v32;
    *(_DWORD *)(a1 + 104) = v33;
    v34 = *(_DWORD *)(a1 + 40);
    v35 = *(_DWORD *)(a1 + 44);
    *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 36);
    *(_DWORD *)(a1 + 112) = v34;
    *(_DWORD *)(a1 + 116) = v35;
    v36 = *(_DWORD *)(a1 + 52);
    v37 = *(_DWORD *)(a1 + 56);
    *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 124) = v36;
    *(_DWORD *)(a1 + 128) = v37;
    v38 = *(_DWORD *)(a1 + 64);
    v39 = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 132) = *(_DWORD *)(a1 + 60);
    *(_DWORD *)(a1 + 136) = v38;
    *(_DWORD *)(a1 + 140) = v39;
  }
  v40 = a2 + 260;
  v60 = *(unsigned __int16 *)(v40 + 24) + 32;
  v61[0] = *(_DWORD *)(a1 + 20);
  result = sub_21EAEC(*(_DWORD *)(a1 + 8), v61, 4, (int *)(a1 + 24), v60);
  *(_DWORD *)(a1 + 20) = v61[0];
  if ( result == 0 )
  {
    v61[0] = *(_DWORD *)(a1 + 388);
    result = sub_21EAEC(*(_DWORD *)(a1 + 8), v61, 1, (int *)(a1 + 392), *(unsigned __int16 *)(v40 + 26));
    *(_DWORD *)(a1 + 388) = LOWORD(v61[0]);
    if ( result == 0 )
    {
      *(_WORD *)(a1 + 152) = 0;
      *(_WORD *)(a1 + 154) = 0;
      v42 = *(_DWORD *)(a1 + 148);
      v43 = *(_DWORD *)(a1 + 152);
      *(_DWORD *)(a1 + 72) = *(_DWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 76) = v42;
      *(_DWORD *)(a1 + 80) = v43;
      v44 = *(_DWORD *)(a1 + 160);
      v45 = *(_DWORD *)(a1 + 164);
      *(_DWORD *)(a1 + 84) = *(_DWORD *)(a1 + 156);
      *(_DWORD *)(a1 + 88) = v44;
      *(_DWORD *)(a1 + 92) = v45;
      v46 = *(_DWORD *)(a1 + 172);
      v47 = *(_DWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 168);
      *(_DWORD *)(a1 + 100) = v46;
      *(_DWORD *)(a1 + 104) = v47;
      v48 = *(_DWORD *)(a1 + 148);
      v49 = *(_DWORD *)(a1 + 152);
      *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 112) = v48;
      *(_DWORD *)(a1 + 116) = v49;
      v50 = *(_DWORD *)(a1 + 160);
      v51 = *(_DWORD *)(a1 + 164);
      *(_DWORD *)(a1 + 120) = *(_DWORD *)(a1 + 156);
      *(_DWORD *)(a1 + 124) = v50;
      *(_DWORD *)(a1 + 128) = v51;
      v52 = *(_DWORD *)(a1 + 172);
      v53 = *(_DWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 132) = *(_DWORD *)(a1 + 168);
      *(_DWORD *)(a1 + 136) = v52;
      *(_DWORD *)(a1 + 140) = v53;
      v54 = *(_DWORD *)(a1 + 148);
      v55 = *(_DWORD *)(a1 + 152);
      *(_DWORD *)(a1 + 36) = *(_DWORD *)(a1 + 144);
      *(_DWORD *)(a1 + 40) = v54;
      *(_DWORD *)(a1 + 44) = v55;
      v56 = *(_DWORD *)(a1 + 160);
      v57 = *(_DWORD *)(a1 + 164);
      *(_DWORD *)(a1 + 48) = *(_DWORD *)(a1 + 156);
      *(_DWORD *)(a1 + 52) = v56;
      *(_DWORD *)(a1 + 56) = v57;
      v58 = *(_DWORD *)(a1 + 172);
      v59 = *(_DWORD *)(a1 + 176);
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 168);
      *(_DWORD *)(a1 + 64) = v58;
      *(_DWORD *)(a1 + 68) = v59;
      *(_BYTE *)(a1 + 488) = 0;
    }
  }
  return result;
}


//======================================================================
// sub_21ECE4
// address: 0x0021ECE4   size: 0x4A (74 bytes)
//======================================================================
int *__fastcall sub_21ECE4(int *result)
{
  int v1; // r6
  int *v2; // r4
  int v3; // r1
  int v4; // r1
  int v5; // r1

  v1 = *result;
  v2 = result;
  if ( *result != 0 )
  {
    ft_mem_free(*result, result[7]);
    v3 = v2[6];
    v2[7] = 0;
    ft_mem_free(v1, v3);
    v4 = v2[4];
    v2[6] = 0;
    ft_mem_free(v1, v4);
    v5 = v2[3];
    v2[4] = 0;
    ft_mem_free(v1, v5);
    v2[3] = 0;
    result = (int *)ft_mem_free(v1, v2[5]);
    v2[5] = 0;
    *((_WORD *)v2 + 4) = 0;
    *((_WORD *)v2 + 2) = 0;
    *((_WORD *)v2 + 5) = 0;
    *((_WORD *)v2 + 3) = 0;
    *v2 = 0;
  }
  return result;
}


//======================================================================
// sub_21ED2E
// address: 0x0021ED2E   size: 0x8C (140 bytes)
//======================================================================
__int64 __fastcall sub_21ED2E(int a1)
{
  int *v2; // r7
  __int64 v4; // [sp+0h] [bp-Ch]

  v2 = (int *)(a1 + 252);
  HIDWORD(v4) = *(_DWORD *)(*(_DWORD *)a1 + 100);
  if ( *(_BYTE *)(a1 + 292) != 0 )
  {
    *(_DWORD *)(a1 + 296) = 0;
    *(_BYTE *)(a1 + 292) = 0;
  }
  ft_mem_free(SHIDWORD(v4), *(_DWORD *)(a1 + 244));
  *(_DWORD *)(a1 + 244) = 0;
  *(_DWORD *)(a1 + 240) = 0;
  ft_mem_free(SHIDWORD(v4), *v2);
  *v2 = 0;
  *(_WORD *)(a1 + 248) = 0;
  sub_21ECE4((int *)(a1 + 256));
  ft_mem_free(SHIDWORD(v4), *(_DWORD *)(a1 + 124));
  *(_DWORD *)(a1 + 124) = 0;
  LODWORD(v4) = a1 + 8;
  ft_mem_free(SHIDWORD(v4), *(_DWORD *)(a1 + 136));
  *(_DWORD *)(a1 + 136) = 0;
  *(_DWORD *)(a1 + 116) = 0;
  *(_DWORD *)(a1 + 120) = 0;
  *(_DWORD *)(a1 + 128) = 0;
  *(_DWORD *)(a1 + 132) = 0;
  *(_DWORD *)(a1 + 140) = 0;
  *(_DWORD *)(a1 + 144) = 0;
  *(_BYTE *)(a1 + 300) = 0;
  *(_BYTE *)(a1 + 301) = 0;
  return v4;
}


//======================================================================
// sub_21EDBA
// address: 0x0021EDBA   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_21EDBA(int result)
{
  int v1; // r4

  v1 = result;
  if ( *(_BYTE *)(result + 300) != 0 )
    result = sub_21ED2E(result);
  *(_BYTE *)(v1 + 108) = 0;
  return result;
}


//======================================================================
// sub_21EDD4
// address: 0x0021EDD4   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_21EDD4(int a1)
{
  int v1; // r6

  v1 = *(_DWORD *)(a1 + 8);
  *(_WORD *)(a1 + 440) = 0;
  *(_WORD *)(a1 + 442) = 0;
  ft_mem_free(v1, *(_DWORD *)(a1 + 24));
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  ft_mem_free(v1, *(_DWORD *)(a1 + 436));
  *(_DWORD *)(a1 + 436) = 0;
  *(_DWORD *)(a1 + 432) = 0;
  *(_DWORD *)(a1 + 428) = 0;
  ft_mem_free(v1, *(_DWORD *)(a1 + 392));
  *(_DWORD *)(a1 + 392) = 0;
  *(_DWORD *)(a1 + 388) = 0;
  *(_DWORD *)(a1 + 4) = 0;
  *(_DWORD *)a1 = 0;
  ft_mem_free(v1, a1);
  return 0;
}


//======================================================================
// sub_21EE32
// address: 0x0021EE32   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_21EE32(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 28);
  if ( result != 0 )
  {
    result = sub_21EDD4(result);
    *(_DWORD *)(a1 + 28) = 0;
  }
  return result;
}


//======================================================================
// sub_21EE46
// address: 0x0021EE46   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_21EE46(_DWORD *a1, int a2, unsigned int a3, unsigned int a4)
{
  int *v4; // r4
  int result; // r0

  v4 = (int *)a1[6];
  result = FT_Stream_Seek(v4, a3);
  if ( result == 0 )
  {
    result = FT_Stream_EnterFrame(v4, a4);
    if ( result == 0 )
    {
      a1[50] = v4[8];
      a1[51] = v4[9];
    }
  }
  return result;
}


//======================================================================
// sub_21EE76
// address: 0x0021EE76   size: 0xA (10 bytes)
//======================================================================
int *__fastcall sub_21EE76(int a1)
{
  return FT_Stream_ExitFrame(*(int **)(a1 + 24));
}


//======================================================================
// sub_21EE80
// address: 0x0021EE80   size: 0x354 (852 bytes)
//======================================================================
int __fastcall sub_21EE80(int a1, unsigned int a2, int *a3, unsigned int a4)
{
  int *v4; // r4
  int *v5; // r7
  int v7; // r3
  int v8; // r1
  int result; // r0
  int v10; // r0
  int v11; // r2
  int v12; // r5
  unsigned int v13; // r1
  int v14; // r6
  __int16 UShort; // r5
  int v16; // r6
  __int16 v17; // r0
  unsigned int v18; // r6
  __int16 v19; // r5
  unsigned int i; // r6
  unsigned int j; // r6
  int v22; // r5
  unsigned int v23; // r1
  int v24; // r0
  unsigned int v25; // r1
  unsigned int v26; // r6
  int *v27; // r5
  int v28; // r6
  unsigned int v29; // r0
  unsigned int v30; // r5
  int *v31; // r5
  int v32; // r5
  int v33; // [sp+8h] [bp-64h]
  int v34; // [sp+Ch] [bp-60h]
  int v35; // [sp+10h] [bp-5Ch]
  int v36; // [sp+10h] [bp-5Ch]
  int v37; // [sp+14h] [bp-58h]
  int v38; // [sp+18h] [bp-54h]
  int v39; // [sp+1Ch] [bp-50h]
  int v40; // [sp+1Ch] [bp-50h]
  unsigned __int16 *v41; // [sp+20h] [bp-4Ch]
  int v42; // [sp+20h] [bp-4Ch]
  int v43; // [sp+24h] [bp-48h]
  _DWORD *v45; // [sp+2Ch] [bp-40h]
  int v46; // [sp+30h] [bp-3Ch]
  unsigned int v47; // [sp+34h] [bp-38h]
  int v48; // [sp+38h] [bp-34h]
  int v49; // [sp+3Ch] [bp-30h]
  int v50; // [sp+40h] [bp-2Ch]
  int v51; // [sp+40h] [bp-2Ch]
  int v52; // [sp+44h] [bp-28h]
  int v54; // [sp+4Ch] [bp-20h]
  int v55; // [sp+50h] [bp-1Ch]
  unsigned int v56; // [sp+54h] [bp-18h]
  int v57; // [sp+5Ch] [bp-10h] BYREF
  unsigned int v58; // [sp+60h] [bp-Ch] BYREF
  unsigned int v59; // [sp+64h] [bp-8h] BYREF

  v4 = *(int **)(a1 + 104);
  v5 = *(int **)(a1 + 716);
  v7 = *(unsigned __int8 *)(a1 + 712);
  v8 = v4[7];
  v37 = v8;
  v59 = 0;
  result = 6;
  if ( v7 != 0 && v5 != nullptr )
  {
    v10 = ft_mem_realloc(v8, 8, 0, a4, 0, &v57);
    v43 = v10;
    if ( v57 != 0 )
      return v57;
    *a3 = v10;
    result = 0;
    if ( a2 < v5[8] )
    {
      v11 = v5[9];
      v12 = 4 * a2;
      v13 = *(_DWORD *)(v11 + v12);
      if ( v13 != *(_DWORD *)(v11 + v12 + 4) )
      {
        v57 = FT_Stream_Seek(v4, v13);
        if ( v57 == 0 )
        {
          v57 = FT_Stream_EnterFrame(v4, *(_DWORD *)(v5[9] + v12 + 4) - *(_DWORD *)(v5[9] + v12));
          if ( v57 == 0 )
          {
            v14 = v4[8];
            v35 = *v4;
            v45 = (_DWORD *)ft_mem_realloc(v37, 4, 0, *v5, 0, &v57);
            if ( v57 == 0 )
            {
              v48 = ft_mem_realloc(v37, 4, 0, *v5, 0, &v57);
              if ( v57 == 0 )
              {
                v49 = ft_mem_realloc(v37, 4, 0, *v5, 0, &v57);
                if ( v57 == 0 )
                {
                  UShort = FT_Stream_GetUShort((int)v4);
                  v52 = 0;
                  v34 = FT_Stream_GetUShort((int)v4) + v14 - v35;
                  if ( UShort < 0 )
                  {
                    v16 = v4[8] - *v4;
                    v4[8] = *v4 + v34;
                    v52 = sub_139E2A((int)v4, &v59);
                    v34 = v4[8] - *v4;
                    v4[8] = *v4 + v16;
                  }
                  v36 = 0;
                  v47 = 0;
                  v56 = UShort & 0xFFF;
                  while ( v47 < v56 )
                  {
                    v54 = FT_Stream_GetUShort((int)v4);
                    v17 = FT_Stream_GetUShort((int)v4);
                    v18 = 0;
                    v19 = v17;
                    if ( v17 < 0 )
                    {
                      while ( v18 < *v5 )
                        v45[v18++] = 4 * (__int16)FT_Stream_GetUShort((int)v4);
                    }
                    else
                    {
                      if ( (v17 & 0xFFFu) >= v5[6] )
                      {
                        v57 = 8;
                        break;
                      }
                      j_memcpy(v45, (const void *)(v5[7] + (v17 & 0xFFF) * 4 * *v5), 4 * *v5);
                    }
                    if ( (v19 & 0x4000) != 0 )
                    {
                      for ( i = 0; i < *v5; ++i )
                        *(_DWORD *)(v48 + 4 * i) = 4 * (__int16)FT_Stream_GetUShort((int)v4);
                      for ( j = 0; j < *v5; ++j )
                        *(_DWORD *)(v49 + 4 * j) = 4 * (__int16)FT_Stream_GetUShort((int)v4);
                    }
                    v33 = sub_21E7F8((unsigned int *)v5, v19, (int)v45, v48, v49);
                    if ( v33 != 0 )
                    {
                      v55 = v4[8] - *v4;
                      if ( (v19 & 0x2000) != 0 )
                      {
                        v4[8] = *v4 + v34;
                        v36 = sub_139E2A((int)v4, &v58);
                        v22 = v36;
                      }
                      else
                      {
                        v22 = v52;
                        v58 = v59;
                      }
                      v23 = v58;
                      if ( v58 == 0 )
                        v23 = a4;
                      v24 = sub_139F32((int)v4, v23);
                      v25 = v58;
                      v38 = v24;
                      if ( v58 == 0 )
                        v25 = a4;
                      v46 = sub_139F32((int)v4, v25);
                      if ( v22 != 0 && v46 != 0 && v38 != 0 )
                      {
                        if ( v22 == -1 )
                        {
                          v27 = (int *)v43;
                          v28 = 0;
                          while ( v28 != a4 )
                          {
                            v39 = *v27;
                            v42 = 2 * v28;
                            v29 = FT_MulFix(*(__int16 *)(v38 + 2 * v28++), v33);
                            *v27 = v39 + v29;
                            v40 = v27[1];
                            v27[1] = v40 + FT_MulFix(*(__int16 *)(v46 + v42), v33);
                            v27 += 2;
                          }
                        }
                        else
                        {
                          v26 = 0;
                          v41 = (unsigned __int16 *)v36;
                          while ( v26 < v58 )
                          {
                            v30 = *v41;
                            if ( v30 < a4 )
                            {
                              v31 = (int *)(v43 + 8 * v30);
                              v50 = *v31;
                              *v31 = v50 + FT_MulFix(*(__int16 *)(v38 + 2 * v26), v33);
                              v32 = v43 + 8 * *v41;
                              v51 = *(_DWORD *)(v32 + 4);
                              *(_DWORD *)(v32 + 4) = v51 + FT_MulFix(*(__int16 *)(v46 + 2 * v26), v33);
                            }
                            ++v26;
                            ++v41;
                          }
                        }
                      }
                      if ( v36 != -1 )
                      {
                        ft_mem_free(v37, v36);
                        v36 = 0;
                      }
                      ft_mem_free(v37, v38);
                      ft_mem_free(v37, v46);
                      v34 += v54;
                      v4[8] = *v4 + v55;
                    }
                    else
                    {
                      v34 += v54;
                    }
                    ++v47;
                  }
                  ft_mem_free(v37, (int)v45);
                  ft_mem_free(v37, v48);
                  ft_mem_free(v37, v49);
                }
              }
            }
            FT_Stream_ExitFrame(v4);
          }
        }
        if ( v57 != 0 )
        {
          ft_mem_free(v37, v43);
          *a3 = 0;
        }
        return v57;
      }
    }
  }
  return result;
}


//======================================================================
// sub_21F1D4
// address: 0x0021F1D4   size: 0x294 (660 bytes)
//======================================================================
int __fastcall sub_21F1D4(int *a1)
{
  char *v1; // r7
  int v3; // r4
  _WORD *v4; // r1
  int result; // r0
  int v6; // r0
  __int16 v7; // r3
  _WORD *v8; // r2
  unsigned __int8 *v9; // r7
  _WORD *v10; // r12
  __int16 v11; // r1
  char *v12; // r6
  size_t v13; // r7
  unsigned __int8 *v14; // r6
  char *v15; // r7
  unsigned int v16; // r1
  char *v17; // r0
  char *v18; // r3
  char v19; // r2
  int v20; // r3
  _DWORD *v21; // r2
  _BYTE *v22; // r0
  unsigned __int8 *v23; // r1
  int v24; // r3
  char v25; // r6
  unsigned int v26; // r2
  char *v27; // r0
  char v28; // r6
  unsigned __int8 *v29; // r1
  int v30; // r3
  int v31; // [sp+0h] [bp-1Ch]
  int v32; // [sp+4h] [bp-18h]
  unsigned int v33; // [sp+4h] [bp-18h]
  unsigned int v34; // [sp+8h] [bp-14h]
  _DWORD *v35; // [sp+Ch] [bp-10h]
  int v36; // [sp+Ch] [bp-10h]
  int v37; // [sp+10h] [bp-Ch]
  __int16 v38; // [sp+14h] [bp-8h]

  v1 = (char *)a1[50];
  v34 = a1[51];
  v3 = a1[3];
  v38 = *((_WORD *)a1 + 16);
  v32 = *a1;
  if ( v38 == 0
    || (unsigned int)(*(__int16 *)(v3 + 20) + *(__int16 *)(v3 + 56) + v38) <= *(_DWORD *)(v3 + 8)
    || (result = FT_GlyphLoader_CheckPoints(v3, 0, v38)) == 0 )
  {
    v4 = *(_WORD **)(v3 + 68);
    if ( v38 > 4094 )
      return 20;
    v6 = v38 + 1;
    if ( v34 < (unsigned int)&v1[v6 * 2] )
      return 20;
    v7 = (*v1 << 8) | (unsigned __int8)v1[1];
    if ( v38 > 0 )
      *v4 = v7;
    if ( v7 < 0 )
      return 20;
    v8 = v4 + 1;
    v9 = (unsigned __int8 *)(v1 + 2);
    v10 = &v4[v6 - 1];
    while ( v8 < v10 )
    {
      v9 += 2;
      v11 = ((char)*(v9 - 2) << 8) | *(v9 - 1);
      *v8 = v11;
      if ( v11 <= v7 )
        return 20;
      ++v8;
      v7 = v11;
    }
    if ( v38 <= 0 )
    {
      v37 = 0;
    }
    else
    {
      v37 = (__int16)*(v8 - 1) + 1;
      if ( v37 < 0 )
        return 20;
    }
    if ( (unsigned int)(*(__int16 *)(v3 + 22) + *(__int16 *)(v3 + 58) + 4 + v37) <= *(_DWORD *)(v3 + 4)
      || (result = FT_GlyphLoader_CheckPoints(v3, v37 + 4, 0)) == 0 )
    {
      v12 = (char *)(v9 + 2);
      *(_DWORD *)(a1[2] + 140) = 0;
      *(_DWORD *)(a1[2] + 136) = 0;
      if ( (unsigned int)(v9 + 2) > v34 )
        return 20;
      result = 22;
      v13 = v9[1] | (*v9 << 8);
      if ( *(unsigned __int16 *)(v32 + 286) >= v13 && (int)(v34 - (_DWORD)v12) >= (int)v13 )
      {
        if ( (a1[4] & 2) == 0 )
        {
          *(_DWORD *)(a1[2] + 140) = v13;
          *(_DWORD *)(a1[2] + 136) = *(_DWORD *)(a1[40] + 392);
          j_memcpy(*(void **)(a1[40] + 392), v12, v13);
        }
        v14 = (unsigned __int8 *)&v12[v13];
        v15 = *(char **)(v3 + 64);
        v16 = (unsigned int)&v15[v37];
        while ( 2 )
        {
          v17 = v15;
          do
          {
            v18 = (char *)v14;
            if ( (unsigned int)v17 >= v16 )
            {
              v21 = *(_DWORD **)(v3 + 60);
              v22 = *(_BYTE **)(v3 + 64);
              if ( (unsigned int)v14 > v34 )
                return 20;
              v31 = 0;
              v35 = &v21[2 * v37];
              while ( v21 < v35 )
              {
                if ( (*v22 & 2) != 0 )
                {
                  v23 = (unsigned __int8 *)(v18 + 1);
                  if ( (unsigned int)(v18 + 1) > v34 )
                    return 20;
                  v24 = (unsigned __int8)*v18;
                  if ( (*v22 & 0x10) == 0 )
                    v24 = -v24;
                }
                else if ( (*v22 & 0x10) != 0 )
                {
                  v23 = (unsigned __int8 *)v18;
                  v24 = *v22 & 2;
                }
                else
                {
                  v23 = (unsigned __int8 *)(v18 + 2);
                  if ( (unsigned int)(v18 + 2) > v34 )
                    return 20;
                  v24 = (unsigned __int8)v18[1] | (*v18 << 8);
                }
                v25 = *v22 & 0xED;
                *v21 = v31 + v24;
                v31 += v24;
                *v22 = v25;
                v21 += 2;
                ++v22;
                v18 = (char *)v23;
              }
              v26 = *(_DWORD *)(v3 + 60);
              v27 = *(char **)(v3 + 64);
              v33 = v26 + 8 * v37;
              v36 = 0;
              while ( v26 < v33 )
              {
                v28 = *v27;
                if ( (*v27 & 4) != 0 )
                {
                  v29 = (unsigned __int8 *)(v18 + 1);
                  if ( (unsigned int)(v18 + 1) > v34 )
                    return 20;
                  v30 = (unsigned __int8)*v18;
                  if ( (*v27 & 0x20) == 0 )
                    v30 = -v30;
                }
                else if ( (*v27 & 0x20) != 0 )
                {
                  v29 = (unsigned __int8 *)v18;
                  v30 = v28 & 4;
                }
                else
                {
                  v29 = (unsigned __int8 *)(v18 + 2);
                  if ( (unsigned int)(v18 + 2) > v34 )
                    return 20;
                  v30 = (unsigned __int8)v18[1] | (*v18 << 8);
                }
                *(_DWORD *)(v26 + 4) = v36 + v30;
                v36 += v30;
                *v27 = v28 & 1;
                v26 += 8;
                ++v27;
                v18 = (char *)v29;
              }
              *(_WORD *)(v3 + 58) = v37;
              *(_WORD *)(v3 + 56) = v38;
              a1[50] = (int)v18;
              return 0;
            }
            ++v14;
            if ( (unsigned int)(v18 + 1) > v34 )
              return 20;
            v19 = *v18;
            *v17++ = *v18;
          }
          while ( (v19 & 8) == 0 );
          v14 = (unsigned __int8 *)(v18 + 2);
          if ( (unsigned int)(v18 + 2) <= v34 )
          {
            v20 = (unsigned __int8)v18[1];
            v15 = &v17[v20];
            if ( (unsigned int)&v17[v20] <= v16 )
            {
              while ( v20 != 0 )
              {
                *v17 = v19;
                v20 = (unsigned __int8)(v20 - 1);
                ++v17;
              }
              continue;
            }
          }
          break;
        }
        return 20;
      }
    }
  }
  return result;
}


//======================================================================
// sub_21F46C
// address: 0x0021F46C   size: 0xE (14 bytes)
//======================================================================
int __fastcall sub_21F46C(int a1, int a2, int a3)
{
  return FT_GlyphLoader_CreateExtra(**(_DWORD **)(a1 + 156), a2, a3, *(_DWORD *)(a1 + 156));
}


//======================================================================
// sub_21F47A
// address: 0x0021F47A   size: 0x11E (286 bytes)
//======================================================================
int *__fastcall sub_21F47A(int *result)
{
  int *v1; // r4
  int v2; // r5
  void (__fastcall *v3)(int); // r3
  int v4; // r6
  unsigned int v5; // r5
  unsigned int *v6; // r7
  unsigned int v7; // r3
  int v8; // r1
  int v9; // r1
  int v10; // [sp+8h] [bp-Ch]
  int v11; // [sp+8h] [bp-Ch]
  int v12; // [sp+Ch] [bp-8h]

  v1 = result;
  if ( result != nullptr )
  {
    v2 = result[133];
    v3 = (void (__fastcall *)(int))result[175];
    v4 = result[25];
    v10 = result[26];
    if ( v3 != nullptr )
      v3(result[174]);
    if ( v2 != 0 )
      (*(void (__fastcall **)(int *))(v2 + 12))(v1);
    FT_Stream_ReleaseFrame(v1[26], v1 + 185);
    v5 = 0;
    v1[184] = 0;
    v12 = v1[26];
    ft_mem_free(*(_DWORD *)(v12 + 28), v1[190]);
    v1[190] = 0;
    FT_Stream_ReleaseFrame(v12, v1 + 186);
    ft_mem_free(v4, v1[168]);
    v1[168] = 0;
    v1[167] = 0;
    FT_Stream_ReleaseFrame(v10, v1 + 164);
    result = (int *)FT_Stream_ReleaseFrame(v10, v1 + 166);
    v1[163] = 0;
    v1[165] = 0;
    v6 = (unsigned int *)v1[179];
    if ( v6 != nullptr )
    {
      ft_mem_free(v4, v6[1]);
      v6[1] = 0;
      ft_mem_free(v4, v6[2]);
      v7 = v6[5];
      v6[2] = 0;
      if ( v7 != 0 )
      {
        while ( 1 )
        {
          v8 = v6[5];
          if ( v5 >= *v6 )
            break;
          v11 = 8 * v5;
          ft_mem_free(v4, *(_DWORD *)(v8 + 8 * v5++ + 4));
          *(_DWORD *)(v6[5] + v11 + 4) = 0;
        }
        ft_mem_free(v4, v8);
        v6[5] = 0;
      }
      ft_mem_free(v4, v6[7]);
      v9 = v6[9];
      v6[7] = 0;
      ft_mem_free(v4, v9);
      v6[9] = 0;
      result = (int *)ft_mem_free(v4, (int)v6);
    }
    v1[179] = 0;
  }
  return result;
}


//======================================================================
// sub_21F598
// address: 0x0021F598   size: 0x2BA (698 bytes)
//======================================================================
int __fastcall sub_21F598(int a1, int *a2)
{
  int *v3; // r7
  __int16 UShort; // r6
  unsigned int v5; // r0
  __int16 v6; // r6
  unsigned int v7; // r5
  unsigned int i; // r5
  unsigned int j; // r5
  unsigned int k; // r5
  int v11; // r0
  unsigned int v12; // r1
  int v13; // r5
  unsigned int v14; // r5
  int v15; // r3
  __int16 *v16; // r6
  __int16 *v17; // r6
  int v19; // [sp+10h] [bp-4Ch]
  unsigned int m; // [sp+10h] [bp-4Ch]
  __int16 v21; // [sp+10h] [bp-4Ch]
  int v22; // [sp+14h] [bp-48h]
  int v23; // [sp+18h] [bp-44h]
  int v24; // [sp+1Ch] [bp-40h]
  int v25; // [sp+20h] [bp-3Ch]
  int v27; // [sp+28h] [bp-34h]
  int v28; // [sp+2Ch] [bp-30h]
  int v29; // [sp+2Ch] [bp-30h]
  unsigned int v30; // [sp+30h] [bp-2Ch]
  __int16 v31; // [sp+34h] [bp-28h]
  int v32; // [sp+38h] [bp-24h]
  int v33; // [sp+3Ch] [bp-20h]
  int v34; // [sp+40h] [bp-1Ch]
  unsigned int v35; // [sp+44h] [bp-18h]
  int v36; // [sp+4Ch] [bp-10h] BYREF
  unsigned int v37; // [sp+50h] [bp-Ch] BYREF
  unsigned int v38; // [sp+54h] [bp-8h] BYREF

  v3 = *(int **)(a1 + 716);
  v25 = a2[7];
  if ( v3 != nullptr
    && *(_DWORD *)(a1 + 672) != 0
    && (*(int (__fastcall **)(int, int, int *, unsigned int *))(a1 + 508))(a1, 1668702578, a2, &v37) == 0 )
  {
    v36 = FT_Stream_EnterFrame(a2, v37);
    if ( v36 == 0 )
    {
      v28 = *a2;
      v19 = a2[8];
      if ( FT_Stream_GetULong((int)a2) != 0x10000 )
      {
        v36 = 0;
        v22 = 0;
        v24 = 0;
        v27 = 0;
LABEL_49:
        FT_Stream_ExitFrame(a2);
        ft_mem_free(v25, v27);
        goto LABEL_50;
      }
      v27 = ft_mem_realloc(v25, 4, 0, *v3, 0, &v36);
      if ( v36 != 0 )
      {
        v22 = 0;
        v24 = 0;
        goto LABEL_49;
      }
      v24 = ft_mem_realloc(v25, 4, 0, *v3, 0, &v36);
      v22 = 0;
      if ( v36 != 0 )
        goto LABEL_49;
      v22 = ft_mem_realloc(v25, 4, 0, *v3, 0, &v36);
      if ( v36 != 0 )
        goto LABEL_49;
      UShort = FT_Stream_GetUShort((int)a2);
      v23 = FT_Stream_GetUShort((int)a2) + v19 - v28;
      v30 = 0;
      v35 = UShort & 0xFFF;
      while ( 1 )
      {
        if ( v30 >= v35 )
          goto LABEL_49;
        v33 = FT_Stream_GetUShort((int)a2);
        v5 = FT_Stream_GetUShort((int)a2);
        v6 = v5;
        v7 = (unsigned __int16)((unsigned __int16)(v5 >> 15) << 15);
        if ( (unsigned __int16)(v5 >> 15) << 15 != 0 )
          break;
        if ( (v5 & 0x4000) != 0 )
        {
          while ( v7 < 2 * *v3 )
          {
            FT_Stream_GetUShort((int)a2);
            ++v7;
          }
        }
        v23 += v33;
LABEL_48:
        ++v30;
      }
      for ( i = 0; i < *v3; ++i )
        *(_DWORD *)(v27 + 4 * i) = 4 * (__int16)FT_Stream_GetUShort((int)a2);
      if ( (v6 & 0x4000) != 0 )
      {
        for ( j = 0; j < *v3; ++j )
          *(_DWORD *)(v24 + 4 * j) = 4 * (__int16)FT_Stream_GetUShort((int)a2);
        for ( k = 0; k < *v3; ++k )
          *(_DWORD *)(v22 + 4 * k) = 4 * (__int16)FT_Stream_GetUShort((int)a2);
      }
      v32 = sub_21E7F8((unsigned int *)v3, v6, v27, v24, v22);
      if ( v32 == 0 || (v6 & 0x2000) == 0 )
      {
        v23 += v33;
        goto LABEL_48;
      }
      v34 = a2[8] - *a2;
      a2[8] = *a2 + v23;
      v11 = sub_139E2A((int)a2, &v38);
      v12 = v38;
      v13 = v11;
      if ( v38 == 0 )
        v12 = *(_DWORD *)(a1 + 668);
      v29 = sub_139F32((int)a2, v12);
      if ( v13 != 0 )
      {
        if ( v29 != 0 )
        {
          if ( v13 == -1 )
          {
            v14 = 0;
            while ( v14 < *(_DWORD *)(a1 + 668) )
            {
              v15 = 2 * v14++;
              v16 = (__int16 *)(*(_DWORD *)(a1 + 672) + v15);
              v21 = *v16;
              *v16 = v21 + FT_MulFix(*(__int16 *)(v29 + v15), v32);
            }
            goto LABEL_47;
          }
          for ( m = 0; m < v38; ++m )
          {
            v17 = (__int16 *)(*(_DWORD *)(a1 + 672) + 2 * *(unsigned __int16 *)(v13 + 2 * m));
            v31 = *v17;
            *v17 = v31 + FT_MulFix(*(__int16 *)(v29 + 2 * m), v32);
          }
        }
        else if ( v13 == -1 )
        {
          goto LABEL_47;
        }
      }
      ft_mem_free(v25, v13);
LABEL_47:
      ft_mem_free(v25, v29);
      v23 += v33;
      a2[8] = *a2 + v34;
      goto LABEL_48;
    }
  }
  v36 = 0;
  v22 = 0;
  v24 = 0;
  ft_mem_free(v25, 0);
LABEL_50:
  ft_mem_free(v25, v24);
  ft_mem_free(v25, v22);
  return v36;
}


//======================================================================
// sub_21F858
// address: 0x0021F858   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_21F858(int a1, int *a2)
{
  int v4; // r3
  int v5; // r0
  int v6; // r3
  _WORD *v7; // r7
  _WORD *v8; // r6
  int v10; // [sp+Ch] [bp-10h]
  int v11; // [sp+10h] [bp-Ch] BYREF
  unsigned int v12; // [sp+14h] [bp-8h] BYREF

  v10 = a2[7];
  v11 = (*(int (__fastcall **)(int, int, int *, unsigned int *))(a1 + 508))(a1, 1668707360, a2, &v12);
  if ( v11 != 0 )
  {
    *(_DWORD *)(a1 + 668) = 0;
    v11 = 0;
    *(_DWORD *)(a1 + 672) = 0;
  }
  else
  {
    v4 = v12 >> 1;
    *(_DWORD *)(a1 + 668) = v12 >> 1;
    v5 = ft_mem_realloc(v10, 2, 0, v4, 0, &v11);
    v6 = v11;
    *(_DWORD *)(a1 + 672) = v5;
    if ( v6 == 0 )
    {
      v11 = FT_Stream_EnterFrame(a2, 2 * *(_DWORD *)(a1 + 668));
      if ( v11 == 0 )
      {
        v7 = *(_WORD **)(a1 + 672);
        v8 = &v7[*(_DWORD *)(a1 + 668)];
        while ( v7 < v8 )
          *v7++ = FT_Stream_GetUShort((int)a2);
        FT_Stream_ExitFrame(a2);
        if ( *(_BYTE *)(a1 + 712) != 0 )
          return sub_21F598(a1, a2);
      }
    }
  }
  return v11;
}


//======================================================================
// sub_21F8F4
// address: 0x0021F8F4   size: 0x618 (1560 bytes)
//======================================================================
int __fastcall sub_21F8F4(int *a1, int a2, int a3, int a4, int a5)
{
  int Module_Interface; // r7
  int v8; // r3
  const char *v9; // r6
  unsigned int v10; // r5
  int v11; // r3
  int v12; // r3
  int v13; // r7
  _DWORD *v14; // r3
  int (__fastcall *v15)(int, _DWORD, _DWORD, _DWORD); // r12
  unsigned int v16; // r6
  int v17; // r6
  unsigned int v18; // r3
  unsigned __int8 *v19; // r5
  unsigned int v20; // r7
  unsigned int v21; // r6
  unsigned int v22; // r3
  unsigned int v23; // r2
  char v24; // r3
  unsigned int v25; // r2
  unsigned int v26; // r1
  int v27; // r6
  unsigned int v28; // r5
  int v29; // r7
  int v30; // r0
  int v31; // r3
  unsigned int v32; // r7
  int v33; // r1
  unsigned int v34; // r1
  unsigned int v35; // r1
  int v36; // r5
  int v37; // r7
  unsigned int k; // r6
  _BOOL4 v39; // r2
  int j; // r3
  int v41; // r5
  int Frame; // [sp+20h] [bp-84h]
  int v44; // [sp+24h] [bp-80h]
  unsigned int v45; // [sp+24h] [bp-80h]
  int *v47; // [sp+2Ch] [bp-78h]
  _DWORD *v48; // [sp+30h] [bp-74h]
  int v49; // [sp+30h] [bp-74h]
  unsigned int i; // [sp+34h] [bp-70h]
  char v51; // [sp+34h] [bp-70h]
  int v52; // [sp+38h] [bp-6Ch]
  unsigned int v53; // [sp+38h] [bp-6Ch]
  int v54; // [sp+3Ch] [bp-68h]
  int v56; // [sp+48h] [bp-5Ch]
  int v57; // [sp+4Ch] [bp-58h]
  int v58; // [sp+50h] [bp-54h]
  int v59; // [sp+5Ch] [bp-48h] BYREF
  unsigned int v60[13]; // [sp+60h] [bp-44h] BYREF
  char v61[8]; // [sp+94h] [bp-10h] BYREF

  v56 = *(_DWORD *)(*(_DWORD *)(a2 + 96) + 4);
  Module_Interface = FT_Get_Module_Interface(v56, "sfnt");
  if ( Module_Interface == 0 )
    return 11;
  v41 = FT_Stream_Seek(a1, 0);
  if ( v41 == 0 )
  {
    v41 = (*(int (__fastcall **)(int *, int, int, int, int))(Module_Interface + 4))(a1, a2, a3, a4, a5);
    if ( v41 == 0 )
    {
      v8 = *(_DWORD *)(a2 + 148);
      if ( v8 == 0x10000 || v8 == 0x20000 || (v41 = 2, v8 == 1953658213) )
      {
        *(_DWORD *)(a2 + 8) |= 0x800u;
        if ( a3 < 0 )
          return 0;
        Frame = (*(int (__fastcall **)(int *, int, int, int, int))(Module_Interface + 8))(a1, a2, a3, a4, a5);
        v41 = Frame;
        if ( Frame != 0 )
          return v41;
        v9 = *(const char **)(a2 + 20);
        if ( v9 != nullptr )
        {
          while ( j_strstr(v9, &aDfkaishoSb[v41]) == nullptr )
          {
            v41 += 17;
            if ( v41 == 136 )
              goto LABEL_14;
          }
        }
        else
        {
LABEL_14:
          v10 = 0;
          j_memset(v60, 0, sizeof(v60));
          v58 = 0;
          v54 = 0;
          v57 = 0;
          while ( 1 )
          {
            if ( *(unsigned __int16 *)(a2 + 152) <= v10 )
            {
              v18 = 0;
              while ( 1 )
              {
                if ( v57 == 0 && *(_DWORD *)((char *)&unk_434A14 + 6 * v18 + 4) == 0 )
                  ++v60[v18 / 4];
                if ( v54 == 0 && *(_DWORD *)((char *)&unk_434A14 + 6 * v18 + 12) == 0 )
                  ++v60[v18 / 4];
                if ( v58 == 0 && *(_DWORD *)((char *)&unk_434A0C + 6 * v18 + 28) == 0 )
                  ++v60[v18 / 4];
                if ( v60[v18 / 4] == 3 )
                  goto LABEL_123;
                v18 += 4;
                if ( v18 == 52 )
                  goto LABEL_52;
              }
            }
            v11 = *(_DWORD *)(*(_DWORD *)(a2 + 156) + 16 * v10);
            v52 = 16 * v10;
            if ( v11 == 1718642541 )
              break;
            if ( v11 == 1886545264 )
            {
              v12 = 2;
              v58 = 1;
              goto LABEL_23;
            }
            if ( v11 == 1668707360 )
            {
              v12 = 0;
              v57 = 1;
              goto LABEL_23;
            }
LABEL_40:
            v10 = (unsigned __int16)(v10 + 1);
          }
          v54 = 1;
          v12 = 1;
LABEL_23:
          v13 = 0;
          v48 = (_DWORD *)((char *)&unk_434A0C + 8 * v12 + 12);
          v44 = 0;
          while ( 1 )
          {
            v14 = (_DWORD *)(*(_DWORD *)(a2 + 156) + v52);
            if ( v14[3] == *v48 )
            {
              if ( v44 == 0 )
              {
                v15 = *(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD))(a2 + 508);
                if ( v15 != nullptr && v15(a2, *v14, *(_DWORD *)(a2 + 104), 0) == 0 )
                {
                  v16 = *(_DWORD *)(*(_DWORD *)(a2 + 156) + v52 + 12);
                  v47 = *(int **)(a2 + 104);
                  if ( FT_Stream_EnterFrame(v47, v16) == 0 )
                  {
                    for ( i = v16; i > 3; i -= 4 )
                      v44 += FT_Stream_GetULong((int)v47);
                    v17 = v16 & 3;
                    v51 = -(char)v17;
                    while ( v17 != 0 )
                      v44 += (unsigned __int8)FT_Stream_GetChar((int)v47) << (8 * (v51 + 3 + v17--));
                    FT_Stream_ExitFrame(v47);
                  }
                }
              }
              if ( *(v48 - 1) == v44 )
                ++v60[v13];
              if ( v60[v13] == 3 )
                break;
            }
            ++v13;
            v48 += 6;
            if ( v13 == 13 )
              goto LABEL_40;
          }
        }
LABEL_123:
        *(_DWORD *)(a2 + 8) |= 0x2000u;
LABEL_52:
        v49 = a1[7];
        v59 = (*(int (__fastcall **)(int, int, int *, unsigned int *))(a2 + 508))(a2, 1751412088, a1, v60);
        if ( v59 != 0 || v60[0] <= 7 )
        {
LABEL_69:
          if ( (*(_DWORD *)(a2 + 8) & 1) == 0 )
          {
LABEL_113:
            v39 = *(_DWORD *)(v56 + 176) != 0;
            for ( j = 0; j < a4 && *(_BYTE *)(a2 + 692) == 0; ++j )
            {
              if ( *(_DWORD *)(a5 + 8 * j) == 1970172001 )
                v39 = true;
            }
            if ( !v39 )
              *(_BYTE *)(*(_DWORD *)(a2 + 128) + 52) = 1;
            *(_DWORD *)(a2 + 512) = sub_21EE46;
            *(_DWORD *)(a2 + 520) = sub_21DCA6;
            *(_DWORD *)(a2 + 524) = sub_21F1D4;
            *(_DWORD *)(a2 + 528) = sub_21FF44;
            *(_DWORD *)(a2 + 516) = sub_21EE76;
            return Frame;
          }
          Frame = (*(int (__fastcall **)(int, int, int *, int))(a2 + 508))(a2, 1735162214, a1, a2 + 708);
          if ( Frame == 142 )
          {
            *(_DWORD *)(a2 + 708) = 0;
          }
          else if ( Frame != 0 )
          {
            goto LABEL_99;
          }
          Frame = 144;
          if ( (*(int (__fastcall **)(int, int, int *, unsigned int *))(a2 + 508))(a2, 1819239265, a1, v60) == 0 )
          {
            if ( *(_WORD *)(a2 + 210) != 0 )
            {
              Frame = 8;
              if ( v60[0] > 0x3FFFF )
                goto LABEL_99;
              *(_DWORD *)(a2 + 736) = v60[0] >> 2;
              v24 = 2;
            }
            else
            {
              Frame = 8;
              if ( v60[0] > 0x1FFFF )
                goto LABEL_99;
              *(_DWORD *)(a2 + 736) = v60[0] >> 1;
              v24 = 1;
            }
            v25 = *(_DWORD *)(a2 + 16);
            v26 = *(_DWORD *)(a2 + 736);
            if ( v26 != v25 + 1 && v26 <= v25 )
            {
              v27 = (v25 + 1) << v24;
              v28 = *(_DWORD *)(a2 + 156);
              v29 = *(unsigned __int16 *)(a2 + 152);
              v30 = FT_Stream_Pos((int)a1);
              v31 = 0x7FFFFFFF;
              v32 = v28 + 16 * v29;
              while ( v28 < v32 )
              {
                v33 = *(_DWORD *)(v28 + 8);
                if ( v33 - v30 > 0 && v31 > v33 - v30 )
                  v31 = v33 - v30;
                v28 += 16;
              }
              if ( v28 == v32 )
                v31 = a1[1] - v30;
              if ( v27 <= v31 )
              {
                *(_DWORD *)(a2 + 736) = *(_DWORD *)(a2 + 16) + 1;
                v60[0] = v27;
              }
            }
            Frame = FT_Stream_ExtractFrame(a1, v60[0], (_DWORD *)(a2 + 740));
            if ( Frame == 0 )
            {
              Frame = sub_21F858(a2, a1);
              if ( Frame == 0 )
              {
                if ( (*(int (__fastcall **)(int, int, int *, unsigned int *))(a2 + 508))(a2, 1718642541, a1, v60) != 0 )
                {
                  *(_DWORD *)(a2 + 656) = 0;
                  *(_DWORD *)(a2 + 652) = 0;
                }
                else
                {
                  v34 = v60[0];
                  *(_DWORD *)(a2 + 652) = v60[0];
                  Frame = FT_Stream_ExtractFrame(a1, v34, (_DWORD *)(a2 + 656));
                  if ( Frame != 0 )
                    goto LABEL_99;
                }
                if ( (*(int (__fastcall **)(int, int, int *, unsigned int *))(a2 + 508))(a2, 1886545264, a1, v60) != 0 )
                {
                  *(_DWORD *)(a2 + 664) = 0;
                  *(_DWORD *)(a2 + 660) = 0;
                }
                else
                {
                  v35 = v60[0];
                  *(_DWORD *)(a2 + 660) = v60[0];
                  Frame = FT_Stream_ExtractFrame(a1, v35, (_DWORD *)(a2 + 664));
                }
              }
            }
          }
LABEL_99:
          if ( *(_DWORD *)(a2 + 28) != 0 && *(_DWORD *)(a2 + 740) != 0 )
          {
            v36 = 0;
            v37 = 0;
            for ( k = 0; k < *(_DWORD *)(a2 + 736); ++k )
            {
              sub_21DBF6(a2, k, v60);
              if ( v60[0] != 0 )
              {
                if ( v36 == 1 )
                  goto LABEL_113;
                v37 = k;
                v36 = 1;
              }
            }
            if ( v36 == 1
              && (v37 == 0
               || FT_Get_Glyph_Name(a2, v37, v61, 8) == 0 && v61[0] == 46 && j_strncmp(v61, ".notdef", 8u) == 0) )
            {
              *(_DWORD *)(a2 + 8) &= ~1u;
            }
          }
          goto LABEL_113;
        }
        v59 = FT_Stream_ExtractFrame(a1, v60[0], (_DWORD *)(a2 + 744));
        if ( v59 == 0 )
        {
          v19 = *(unsigned __int8 **)(a2 + 744);
          v53 = v60[0];
          v20 = (*v19 << 8) | v19[1];
          v21 = _byteswap_ulong(*((_DWORD *)v19 + 1));
          if ( v21 > 0xFFFEFFFF )
            v21 = (unsigned __int16)v21;
          if ( v20 != 0 || (v45 = (v19[2] << 8) | v19[3]) > 0xFF || v21 > 0x10001 )
          {
            v59 = 3;
LABEL_67:
            FT_Stream_ReleaseFrame((int)a1, (int *)(a2 + 744));
            *(_DWORD *)(a2 + 748) = 0;
            goto LABEL_68;
          }
          *(_DWORD *)(a2 + 760) = ft_mem_realloc(v49, 1, 0, v45, 0, &v59);
          if ( v59 != 0 )
            goto LABEL_67;
          v22 = (unsigned int)(v19 + 8);
          while ( v20 < v45 )
          {
            v22 += v21;
            if ( v22 > (unsigned int)&v19[v53] )
              break;
            *(_BYTE *)(*(_DWORD *)(a2 + 760) + v20++) = *(_BYTE *)(v22 - v21);
          }
          v23 = v60[0];
          *(_DWORD *)(a2 + 752) = v20;
          *(_DWORD *)(a2 + 748) = v23;
          *(_DWORD *)(a2 + 756) = v21;
        }
LABEL_68:
        v41 = v59;
        if ( v59 != 0 )
          return v41;
        goto LABEL_69;
      }
    }
  }
  return v41;
}


//======================================================================
// sub_21FF44
// address: 0x0021FF44   size: 0x166 (358 bytes)
//======================================================================
int __fastcall sub_21FF44(_DWORD *a1)
{
  char *v1; // r4
  int v3; // r6
  int v4; // r3
  char v5; // r2
  int v6; // r0
  int v7; // r1
  int v8; // r0
  int v9; // r0
  int v10; // r6
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int v14; // r0
  int v15; // r7
  int v16; // r7
  int v18; // [sp+4h] [bp-20h]
  int v19; // [sp+8h] [bp-1Ch]
  int v20; // [sp+10h] [bp-14h]
  int *v21; // [sp+14h] [bp-10h]
  unsigned int v22; // [sp+18h] [bp-Ch]
  int v23; // [sp+1Ch] [bp-8h]

  v1 = (char *)a1[50];
  v21 = (int *)a1[3];
  v22 = a1[51];
  v3 = 0;
  while ( 1 )
  {
    v23 = v3 + 1;
    v20 = FT_GlyphLoader_CheckSubGlyphs(v21, v3 + 1);
    if ( v20 != 0 )
      return v20;
    if ( v22 < (unsigned int)(v1 + 4) )
      return 21;
    v4 = v21[22] + 32 * v3;
    *(_DWORD *)(v4 + 12) = 0;
    *(_DWORD *)(v4 + 8) = 0;
    v5 = v1[1];
    *(_WORD *)(v4 + 4) = _byteswap_ushort(*(_WORD *)v1);
    *(_DWORD *)v4 = ((unsigned __int8)v1[2] << 8) | (unsigned __int8)v1[3];
    v6 = 4;
    if ( (v5 & 1) == 0 )
      v6 = 2;
    v7 = v5 & 8;
    if ( (v5 & 8) != 0 )
    {
      v6 += 2;
    }
    else if ( (v5 & 0x40) != 0 )
    {
      v6 += 4;
    }
    else if ( v5 < 0 )
    {
      v6 += 8;
    }
    if ( v22 < (unsigned int)&v1[v6 + 4] )
      return 21;
    v8 = v1[4];
    if ( (v5 & 1) != 0 )
    {
      *(_DWORD *)(v4 + 8) = (v8 << 8) | (unsigned __int8)v1[5];
      v9 = v1[6];
      v10 = (unsigned __int8)v1[7];
      v1 += 8;
      *(_DWORD *)(v4 + 12) = (v9 << 8) | v10;
    }
    else
    {
      *(_DWORD *)(v4 + 8) = v8;
      v11 = v1[5];
      v1 += 6;
      *(_DWORD *)(v4 + 12) = v11;
    }
    if ( (v5 & 8) != 0 )
    {
      v12 = *v1;
      v13 = (unsigned __int8)v1[1];
      v1 += 2;
      v14 = 4 * ((v12 << 8) | v13);
      v15 = v14;
      v7 = 0;
    }
    else
    {
      if ( (v5 & 0x40) == 0 )
      {
        if ( v5 < 0 )
        {
          v14 = 4 * ((*v1 << 8) | (unsigned __int8)v1[1]);
          v7 = 4 * ((v1[2] << 8) | (unsigned __int8)v1[3]);
          v18 = 4 * ((v1[4] << 8) | (unsigned __int8)v1[5]);
          v19 = v1[6] << 8;
          v16 = (unsigned __int8)v1[7];
          v1 += 8;
          v15 = 4 * (v19 | v16);
        }
        else
        {
          v15 = 0x10000;
          v18 = v5 & 8;
          v14 = 0x10000;
        }
        goto LABEL_25;
      }
      v14 = 4 * ((*v1 << 8) | (unsigned __int8)v1[1]);
      v15 = 4 * ((v1[2] << 8) | (unsigned __int8)v1[3]);
      v1 += 4;
    }
    v18 = 0;
LABEL_25:
    *(_DWORD *)(v4 + 16) = v14;
    *(_DWORD *)(v4 + 24) = v7;
    *(_DWORD *)(v4 + 28) = v15;
    *(_DWORD *)(v4 + 20) = v18;
    v3 = v23;
    if ( (v5 & 0x20) == 0 )
    {
      v21[21] = v23;
      a1[42] = &v1[FT_Stream_Pos(a1[6]) - v22];
      a1[50] = v1;
      return v20;
    }
  }
}

