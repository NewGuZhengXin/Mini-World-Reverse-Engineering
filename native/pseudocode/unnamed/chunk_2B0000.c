// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_2B0000

//======================================================================
// sub_2B0104
// address: 0x002B0104   size: 0xD4 (212 bytes)
//======================================================================
float __fastcall sub_2B0104(int a1, int a2)
{
  float v2; // r6
  float v3; // r5
  float v5; // [sp+14h] [bp-10h] BYREF
  float v6; // [sp+18h] [bp-Ch]
  float v7; // [sp+1Ch] [bp-8h]

  v5 = (float)(16 * a1 + 8 - dword_5133B4);
  v6 = (float)-dword_5133B8;
  v7 = (float)(16 * a2 + 8 - dword_5133BC);
  v2 = Ogre::Vector3::length((Ogre::Vector3 *)&v5);
  v3 = Ogre::Vector3::length((Ogre::Vector3 *)&v5);
  if ( v3 <= 0.00001 )
  {
    v5 = 0.0;
    v6 = 0.0;
    v7 = 0.0;
  }
  else
  {
    v5 = v5 * (float)(1.0 / v3);
    v6 = v6 * (float)(1.0 / v3);
    v7 = v7 * (float)(1.0 / v3);
  }
  return v2
       + (float)((float)(1.0
                       - (float)((float)((float)(*(float *)&dword_5133C0 * v5) + (float)(*(float *)&dword_5133C4 * v6))
                               + (float)(*(float *)&dword_5133C8 * v7)))
               * v2);
}


//======================================================================
// sub_2B1308
// address: 0x002B1308   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_2B1308(int a1, int a2)
{
  return *(_DWORD *)(a1 + 16) + a2 * (**(_DWORD **)a1 + 20);
}


//======================================================================
// sub_2B131A
// address: 0x002B131A   size: 0x26 (38 bytes)
//======================================================================
__int64 __fastcall sub_2B131A(__int64 a1)
{
  _BYTE *v1; // r0

  if ( a1 != 0xFFFFFFFF00000000LL )
  {
    v1 = (_BYTE *)sub_2B1308(a1, SHIDWORD(a1));
    *v1 |= 4u;
  }
  return a1;
}


//======================================================================
// sub_2B1340
// address: 0x002B1340   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_2B1340(_DWORD *a1, int a2, int a3, int a4)
{
  int v8; // r7
  int v9; // r0
  int (__fastcall *v10)(int, int, _DWORD); // [sp+4h] [bp-Ch]

  v10 = *(int (__fastcall **)(int, int, _DWORD))(*a1 + 8);
  if ( v10 == nullptr || a3 == 0 && a4 == -1 )
    return 0;
  v8 = sub_2B1308((int)a1, a2);
  v9 = sub_2B1308(a3, a4);
  return v10(v8 + 20, v9 + 20, a1[1]);
}


//======================================================================
// sub_2B1396
// address: 0x002B1396   size: 0x48 (72 bytes)
//======================================================================
int __fastcall sub_2B1396(int result, int a2, int a3)
{
  int v3; // r4
  int v4; // r7
  int v5; // r5
  int v6; // r6
  int v7; // r3
  int v8; // r3
  int v9; // r1
  int v10; // [sp+4h] [bp-18h]

  v3 = result;
  if ( a2 != a3 )
  {
    v4 = *(_DWORD *)(result + 32);
    v10 = 4 * a2;
    v5 = 4 * a3;
    v6 = sub_2B1308(result, *(_DWORD *)(v4 + 4 * a2));
    result = sub_2B1308(v3, *(_DWORD *)(v4 + v5));
    v7 = *(_DWORD *)(v6 + 12);
    *(_DWORD *)(v6 + 12) = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v7;
    v8 = *(_DWORD *)(v3 + 32);
    v9 = *(_DWORD *)(v8 + v10);
    *(_DWORD *)(v8 + v10) = *(_DWORD *)(v8 + v5);
    *(_DWORD *)(*(_DWORD *)(v3 + 32) + v5) = v9;
  }
  return result;
}


//======================================================================
// sub_2B13E0
// address: 0x002B13E0   size: 0x116 (278 bytes)
//======================================================================
size_t ***__fastcall sub_2B13E0(size_t ***a1, size_t **a2, const void *a3)
{
  size_t *v5; // r3
  size_t *v6; // r6
  unsigned int v7; // r7
  int v8; // r0
  int v9; // r0
  size_t *v10; // r3
  size_t *v11; // r2
  int v12; // r3
  size_t *v13; // r0
  size_t *v14; // r2
  int v15; // r6
  int v16; // r0
  int v17; // r7
  int v18; // r7
  size_t *v19; // r3
  unsigned int v21; // [sp+4h] [bp-30h]
  unsigned int v22; // [sp+8h] [bp-2Ch]
  int (__fastcall *v24)(int, const void *, size_t *); // [sp+14h] [bp-20h]

  if ( a3 != nullptr )
  {
    v5 = a2[3];
    if ( v5 != nullptr )
    {
      v21 = (unsigned int)v5 - 1;
      v22 = 0;
      while ( 1 )
      {
        v6 = *a2;
        v7 = (v22 + v21) >> 1;
        v24 = (int (__fastcall *)(int, const void *, size_t *))(*a2)[4];
        v8 = sub_2B1308((int)a2, a2[5][v7]);
        if ( v24 != nullptr )
          v9 = v24(v8 + 20, a3, a2[1]);
        else
          v9 = j_memcmp((const void *)(v8 + 20), a3, *v6);
        if ( v9 >= 0 )
        {
          if ( v9 == 0 )
          {
            v19 = a2[5];
            *a1 = a2;
            a1[1] = (size_t **)v19[v7];
            return a1;
          }
          if ( v7 == 0 )
            goto LABEL_16;
          v21 = v7 - 1;
        }
        else
        {
          v22 = v7 + 1;
        }
        if ( v22 > v21 )
          goto LABEL_16;
      }
    }
    v22 = 0;
LABEL_16:
    v10 = a2[3];
    if ( v10 == a2[2] )
    {
      v11 = *a2;
      v12 = 2 * (_DWORD)v10 + 1;
      a2[2] = (size_t *)v12;
      v13 = (size_t *)j_realloc(a2[4], (*v11 + 20) * v12);
      v14 = a2[2];
      a2[4] = v13;
      a2[5] = (size_t *)j_realloc(a2[5], 4 * (_DWORD)v14);
    }
    v15 = (int)a2[3];
    a2[3] = (size_t *)(v15 + 1);
    v16 = v22 + 1;
    v17 = v16 * 4 - 4;
    j_memmove(&a2[5][v16], &a2[5][v16 - 1], 4 * (_DWORD)((char *)a2[2] - v22 + 0x3FFFFFFF));
    *(size_t *)((char *)a2[5] + v17) = v15;
    v18 = sub_2B1308((int)a2, v15);
    j_memset((void *)v18, 0, 0x14u);
    j_memcpy((void *)(v18 + 20), a3, **a2);
    *a1 = a2;
    a1[1] = (size_t **)v15;
  }
  else
  {
    *a1 = nullptr;
    a1[1] = (size_t **)-1;
  }
  return a1;
}


//======================================================================
// sub_2B14FC
// address: 0x002B14FC   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_2B14FC(int a1, int a2, int a3, int a4)
{
  int v4; // r0
  float v5; // r5
  int v6; // r0
  float v7; // r4

  v4 = sub_2B1308(a1, a2);
  v5 = *(float *)(v4 + 4) + *(float *)(v4 + 8);
  v6 = sub_2B1308(a3, a4);
  v7 = *(float *)(v6 + 4) + *(float *)(v6 + 8);
  if ( v5 < v7 )
    return -1;
  else
    return v5 > v7;
}


//======================================================================
// sub_2B155C
// address: 0x002B155C   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_2B155C(int a1, int a2)
{
  int result; // r0
  int v4; // r2
  int v5; // r6
  unsigned int v6; // r7
  unsigned int v7; // r5
  unsigned int v8; // [sp+4h] [bp-30h]

  result = sub_2B1308(a1, a2);
  if ( (*(_BYTE *)result & 2) != 0 )
  {
    *(_BYTE *)result &= ~2u;
    v4 = *(_DWORD *)(a1 + 28) - 1;
    *(_DWORD *)(a1 + 28) = v4;
    v5 = *(_DWORD *)(result + 12);
    result = sub_2B1396(a1, v5, v4);
    while ( 1 )
    {
      v6 = 2 * v5 + 1;
      v8 = *(_DWORD *)(a1 + 28);
      v7 = 2 * v5 + 2;
      if ( v6 >= v8
        || (result = sub_2B14FC(
                       a1,
                       *(_DWORD *)(4 * v6 + *(_DWORD *)(a1 + 32)),
                       a1,
                       *(_DWORD *)(4 * v5 + *(_DWORD *)(a1 + 32)))) >= 0 )
      {
        v6 = v5;
      }
      if ( v7 >= v8
        || (result = sub_2B14FC(
                       a1,
                       *(_DWORD *)(4 * v7 + *(_DWORD *)(a1 + 32)),
                       a1,
                       *(_DWORD *)(4 * v6 + *(_DWORD *)(a1 + 32)))) >= 0 )
      {
        v7 = v6;
      }
      if ( v7 == v5 )
        break;
      result = sub_2B1396(a1, v7, v5);
      v5 = v7;
    }
  }
  return result;
}


//======================================================================
// sub_2B15F4
// address: 0x002B15F4   size: 0xB8 (184 bytes)
//======================================================================
int __fastcall sub_2B15F4(int a1, int a2, int a3, int a4, int a5)
{
  int v6; // r5
  char v7; // r3
  int v8; // r1
  int v9; // r1
  int v10; // r3
  int result; // r0
  char v12; // r2
  int i; // r5
  int v14; // r6
  int varg_r3; // [sp+3Ch] [bp+34h]

  v6 = sub_2B1308(a1, a2);
  v7 = *(_BYTE *)v6;
  if ( varg_r3 != 0 || a5 != -1 )
  {
    *(_BYTE *)v6 = v7 | 8;
    *(_DWORD *)(v6 + 16) = a5;
  }
  else
  {
    *(_BYTE *)v6 = v7 & 0xF7;
  }
  v8 = *(_DWORD *)(a1 + 28);
  if ( v8 == *(_DWORD *)(a1 + 24) )
  {
    v9 = 2 * v8 + 1;
    *(_DWORD *)(a1 + 24) = v9;
    *(_DWORD *)(a1 + 32) = j_realloc(*(void **)(a1 + 32), 4 * v9);
  }
  v10 = *(_DWORD *)(a1 + 28);
  result = *(_DWORD *)(a1 + 32);
  *(_DWORD *)(4 * v10 + result) = a2;
  ++*(_DWORD *)(a1 + 28);
  v12 = *(_BYTE *)v6;
  *(_DWORD *)(v6 + 12) = v10;
  *(_BYTE *)v6 = v12 | 2;
  *(_DWORD *)(v6 + 8) = a3;
  for ( i = v10; i != 0; i = v14 )
  {
    v14 = (unsigned int)j_floorf((float)((unsigned int)(i - 1) >> 1));
    result = sub_2B14FC(a1, *(_DWORD *)(4 * v14 + *(_DWORD *)(a1 + 32)), a1, *(_DWORD *)(4 * i + *(_DWORD *)(a1 + 32)));
    if ( result < 0 )
      break;
    result = sub_2B1396(a1, v14, i);
  }
  return result;
}


//======================================================================
// sub_2B1DB8
// address: 0x002B1DB8   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall sub_2B1DB8(_DWORD *a1, int *a2)
{
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::_Deque_iterator(
    a1,
    a2);
  std::_Deque_iterator<ClientWorld::ParticleEffect,ClientWorld::ParticleEffect&,ClientWorld::ParticleEffect*>::operator++(a2);
  return a1;
}


//======================================================================
// sub_2B5D08
// address: 0x002B5D08   size: 0x2C (44 bytes)
//======================================================================
bool __fastcall sub_2B5D08(int *a1, int *a2)
{
  int v2; // r3
  int v3; // r2

  v2 = *a2;
  v3 = *a1;
  if ( *a1 == *a2 && (v3 = a1[2], v2 = a2[2], v3 == v2) && (v3 = a1[1], v2 = a2[1], v3 == v2) )
    return false;
  else
    return v3 < v2;
}


//======================================================================
// sub_2B5D34
// address: 0x002B5D34   size: 0x12 (18 bytes)
//======================================================================
bool __fastcall sub_2B5D34(int a1)
{
  return a1 == 32 || a1 == 9;
}


//======================================================================
// sub_2B5D48
// address: 0x002B5D48   size: 0x2C (44 bytes)
//======================================================================
_DWORD *__fastcall sub_2B5D48(_DWORD *result)
{
  *result = &byte_55FB88;
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
  return result;
}


//======================================================================
// sub_2B5DD0
// address: 0x002B5DD0   size: 0x38 (56 bytes)
//======================================================================
float __fastcall sub_2B5DD0(const char **a1)
{
  const char *v1; // r4
  const char *v3; // r0
  double v4; // r0
  const char *v5; // r7
  double v6; // r4

  v1 = *a1;
  v3 = &v1[j_strspn(*a1, " \t")];
  *a1 = v3;
  v4 = j_strtod(v3, nullptr);
  v5 = *a1;
  v6 = v4;
  *a1 = &v5[j_strcspn(*a1, " \t\r")];
  return v6;
}


//======================================================================
// sub_2B5E10
// address: 0x002B5E10   size: 0x24 (36 bytes)
//======================================================================
float __fastcall sub_2B5E10(float *a1, float *a2, float *a3, const char **a4)
{
  float result; // r0

  *a1 = sub_2B5DD0(a4);
  *a2 = sub_2B5DD0(a4);
  result = sub_2B5DD0(a4);
  *a3 = result;
  return result;
}


//======================================================================
// sub_2B5E34
// address: 0x002B5E34   size: 0x14 (20 bytes)
//======================================================================
int __fastcall sub_2B5E34(unsigned int a1)
{
  if ( a1 > 0x3FFFFFFF )
    sub_3BCEB4(a1);
  return operator new(4 * a1);
}


//======================================================================
// sub_2B5FB8
// address: 0x002B5FB8   size: 0x36 (54 bytes)
//======================================================================
void **__fastcall sub_2B5FB8(int a1, _DWORD *a2, int a3, int a4)
{
  void *v4; // r2
  int v5; // r2
  int v6; // r2
  int v7; // r3
  int v8; // r3
  void *v10; // [sp+4h] [bp-Ch] BYREF
  int v11; // [sp+8h] [bp-8h]
  int v12; // [sp+Ch] [bp-4h]

  v10 = a2;
  v11 = a3;
  v12 = a4;
  v4 = *(void **)a1;
  *(_DWORD *)a1 = 0;
  v10 = v4;
  v5 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = 0;
  v11 = v5;
  v6 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = 0;
  v12 = v6;
  *(_DWORD *)a1 = *a2;
  *a2 = 0;
  v7 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(a1 + 4) = a2[1];
  a2[1] = v7;
  v8 = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = a2[2];
  a2[2] = v8;
  return std::_Vector_base<float>::~_Vector_base(&v10);
}


//======================================================================
// sub_2B68A0
// address: 0x002B68A0   size: 0x166 (358 bytes)
//======================================================================
unsigned int __fastcall sub_2B68A0(_DWORD *a1, _DWORD *a2, int a3, int a4, _DWORD *a5, _DWORD *a6, _DWORD *a7, int *a8)
{
  int *v8; // r5
  int *v10; // r3
  __int64 v12; // r0
  __int64 v13; // r0
  __int64 v14; // r0
  int v15; // r1
  __int64 v16; // r0
  __int64 v17; // r0
  __int64 v18; // r0
  int v19; // r1
  __int64 v20; // r0
  __int64 v21; // r0
  int *v22; // r5
  unsigned int v23; // r7
  int *i; // r6
  int *v25; // r3
  int *v26; // [sp+14h] [bp-20h]
  int *v27; // [sp+18h] [bp-1Ch]
  int *v31; // [sp+2Ch] [bp-8h] BYREF

  v8 = (int *)a1[2];
  v27 = a1 + 1;
  v26 = a1 + 1;
  while ( v8 != nullptr )
  {
    if ( sub_2B5D08(v8 + 4, a8) )
    {
      v10 = (int *)v8[3];
      v8 = v26;
    }
    else
    {
      v10 = (int *)v8[2];
    }
    v26 = v8;
    v8 = v10;
  }
  if ( v26 != v27 && !sub_2B5D08(a8, v26 + 4) )
    return v26[7];
  HIDWORD(v12) = *a5 + 12 * *a8;
  LODWORD(v12) = a2;
  std::vector<float>::push_back(v12);
  LODWORD(v13) = a2;
  HIDWORD(v13) = *a5 + 4 * (3 * *a8 + 1);
  std::vector<float>::push_back(v13);
  LODWORD(v14) = a2;
  HIDWORD(v14) = *a5 + 4 * (3 * *a8 + 2);
  std::vector<float>::push_back(v14);
  v15 = a8[2];
  if ( v15 >= 0 )
  {
    LODWORD(v16) = a3;
    HIDWORD(v16) = *a6 + 12 * v15;
    std::vector<float>::push_back(v16);
    LODWORD(v17) = a3;
    HIDWORD(v17) = *a6 + 4 * (3 * a8[2] + 1);
    std::vector<float>::push_back(v17);
    LODWORD(v18) = a3;
    HIDWORD(v18) = *a6 + 4 * (3 * a8[2] + 2);
    std::vector<float>::push_back(v18);
  }
  v19 = a8[1];
  if ( v19 >= 0 )
  {
    LODWORD(v20) = a4;
    HIDWORD(v20) = *a7 + 8 * v19;
    std::vector<float>::push_back(v20);
    LODWORD(v21) = a4;
    HIDWORD(v21) = *a7 + 8 * a8[1] + 4;
    std::vector<float>::push_back(v21);
  }
  v22 = v27;
  v23 = ((a2[1] - *a2) >> 2) / 3u - 1;
  for ( i = (int *)a1[2]; i != nullptr; i = v25 )
  {
    if ( sub_2B5D08(i + 4, a8) )
    {
      v25 = (int *)i[3];
      i = v22;
    }
    else
    {
      v25 = (int *)i[2];
    }
    v22 = i;
  }
  if ( v22 == v27 || sub_2B5D08(a8, v22 + 4) )
  {
    v31 = a8;
    v22 = std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<tinyobj::vertex_index const&>,std::tuple<>>(
            a1,
            (int)v22,
            (int)&unk_44633B,
            &v31);
  }
  v22[7] = v23;
  return v23;
}


//======================================================================
// sub_2B6CD8
// address: 0x002B6CD8   size: 0x314 (788 bytes)
//======================================================================
int __fastcall sub_2B6CD8(_DWORD *a1, int a2, _DWORD *a3, int a4, _DWORD *a5, int *a6, int a7)
{
  unsigned int v9; // r2
  _DWORD *v10; // r1
  float *v11; // r5
  float *v12; // r4
  float v13; // r2
  float v14; // r5
  float v15; // r4
  float v16; // r0
  __int64 v17; // r0
  signed int v18; // r0
  int v19; // r3
  int v20; // r5
  int *v21; // r3
  int *v22; // r3
  unsigned int v23; // r1
  int v24; // r2
  _DWORD *v25; // r3
  float *v27; // [sp+20h] [bp-64h]
  float v28; // [sp+20h] [bp-64h]
  int v29; // [sp+24h] [bp-60h]
  unsigned int v30; // [sp+24h] [bp-60h]
  unsigned int v31; // [sp+28h] [bp-5Ch]
  unsigned int i; // [sp+28h] [bp-5Ch]
  float v33; // [sp+2Ch] [bp-58h]
  float v34; // [sp+2Ch] [bp-58h]
  float v35; // [sp+30h] [bp-54h]
  float v37; // [sp+38h] [bp-4Ch]
  unsigned int v38; // [sp+38h] [bp-4Ch]
  float v39; // [sp+3Ch] [bp-48h]
  unsigned int v40; // [sp+44h] [bp-40h] BYREF
  unsigned int v41; // [sp+48h] [bp-3Ch] BYREF
  unsigned int v42; // [sp+4Ch] [bp-38h] BYREF
  void *v43[3]; // [sp+50h] [bp-34h] BYREF
  int v44[3]; // [sp+5Ch] [bp-28h] BYREF
  float v45; // [sp+68h] [bp-1Ch] BYREF
  int v46; // [sp+6Ch] [bp-18h]
  int v47; // [sp+70h] [bp-14h]
  float v48; // [sp+74h] [bp-10h] BYREF
  float v49; // [sp+78h] [bp-Ch]
  float v50; // [sp+7Ch] [bp-8h]

  if ( *a6 == a6[1] )
    return 0;
  memset(v43, 0, sizeof(v43));
  v9 = (unsigned __int8)g_ObjLoader_KeepNormal;
  if ( g_ObjLoader_KeepNormal != 0 )
  {
    std::vector<float>::operator=((int)v43, a4);
  }
  else
  {
    while ( 1 )
    {
      v31 = v9;
      v19 = *a6;
      if ( v9 >= -1431655765 * ((a6[1] - *a6) >> 2) )
        break;
      v10 = *(_DWORD **)(v19 + 12 * v9);
      v29 = v19 + 12 * v9;
      v11 = (float *)(*a3 + 12 * *v10);
      v12 = (float *)(*a3 + 12 * v10[3]);
      v27 = (float *)(*a3 + 12 * v10[6]);
      v33 = *v11;
      v13 = v11[1];
      v37 = *v12 - *v11;
      v14 = v11[2];
      v39 = v12[1] - v13;
      v15 = v12[2] - v14;
      v34 = *v27 - v33;
      v35 = v27[1] - v13;
      v28 = v27[2] - v14;
      v48 = (float)(v39 * v28) - (float)(v15 * v35);
      v49 = (float)(v15 * v34) - (float)(v37 * v28);
      v50 = (float)(v37 * v35) - (float)(v39 * v34);
      v16 = j_sqrt((float)((float)((float)(v48 * v48) + (float)(v49 * v49)) + (float)(v50 * v50)));
      if ( v16 > 0.0 )
      {
        v48 = v48 / v16;
        v49 = v49 / v16;
        v50 = v50 / v16;
      }
      LODWORD(v17) = v43;
      HIDWORD(v17) = &v48;
      v18 = tinyobj::pushNormal(v17);
      v9 = v31 + 1;
      *(_DWORD *)(*(_DWORD *)v29 + 8) = v18;
      *(_DWORD *)(*(_DWORD *)v29 + 20) = v18;
      *(_DWORD *)(*(_DWORD *)v29 + 32) = v18;
    }
  }
  for ( i = 0; i < -1431655765 * ((a6[1] - *a6) >> 2); ++i )
  {
    v20 = *a6 + 12 * i;
    v21 = *(int **)v20;
    v44[0] = **(_DWORD **)v20;
    v44[1] = v21[1];
    v44[2] = v21[2];
    v46 = -1;
    v47 = -1;
    v45 = NAN;
    v22 = *(int **)v20;
    v48 = *(float *)(*(_DWORD *)v20 + 12);
    v49 = *((float *)v22 + 4);
    v50 = *((float *)v22 + 5);
    v23 = 2;
    v38 = -1431655765 * ((*(_DWORD *)(v20 + 4) - *(_DWORD *)v20) >> 2);
    while ( 1 )
    {
      v30 = v23;
      if ( v23 >= v38 )
        break;
      v46 = LODWORD(v49);
      v45 = v48;
      v47 = LODWORD(v50);
      v24 = *(_DWORD *)v20 + 12 * v23;
      v48 = *(float *)v24;
      v49 = *(float *)(v24 + 4);
      v50 = *(float *)(v24 + 8);
      v40 = sub_2B68A0((_DWORD *)a2, a1 + 1, (int)(a1 + 4), (int)(a1 + 7), a3, v43, a5, v44);
      v41 = sub_2B68A0((_DWORD *)a2, a1 + 1, (int)(a1 + 4), (int)(a1 + 7), a3, v43, a5, (int *)&v45);
      v42 = sub_2B68A0((_DWORD *)a2, a1 + 1, (int)(a1 + 4), (int)(a1 + 7), a3, v43, a5, (int *)&v48);
      std::vector<unsigned int>::push_back((int)(a1 + 10), &v40);
      std::vector<unsigned int>::push_back((int)(a1 + 10), &v41);
      std::vector<unsigned int>::push_back((int)(a1 + 10), &v42);
      v25 = (_DWORD *)a1[14];
      if ( v25 == (_DWORD *)a1[15] )
      {
        std::vector<int>::_M_emplace_back_aux<int const&>((int)(a1 + 13), &a7);
      }
      else
      {
        if ( v25 != nullptr )
          *v25 = a7;
        a1[14] += 4;
      }
      v23 = v30 + 1;
    }
  }
  sub_3BEBBC(a1);
  std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_erase(
    a2,
    *(_DWORD **)(a2 + 8));
  *(_DWORD *)(a2 + 12) = a2 + 4;
  *(_DWORD *)(a2 + 8) = 0;
  *(_DWORD *)(a2 + 16) = a2 + 4;
  *(_DWORD *)(a2 + 20) = 0;
  std::_Vector_base<float>::~_Vector_base(v43);
  return 1;
}


//======================================================================
// sub_2B9232
// address: 0x002B9232   size: 0x6 (6 bytes)
//======================================================================
bool __fastcall sub_2B9232(int a1)
{
  return a1 == 0;
}


//======================================================================
// sub_2B9242
// address: 0x002B9242   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_2B9242(int a1, int a2, int a3, unsigned __int8 *a4)
{
  return *a4;
}


//======================================================================
// sub_2B924C
// address: 0x002B924C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_2B924C(int a1, int a2, int a3, int a4)
{
  return *(_DWORD *)(a3 + a4);
}


//======================================================================
// sub_2B927C
// address: 0x002B927C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_2B927C(int a1, int a2, int a3, int a4)
{
  return *(_DWORD *)(a3 + a4);
}


//======================================================================
// sub_2B9288
// address: 0x002B9288   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_2B9288(int a1, int a2, int a3, int a4)
{
  return *(_DWORD *)(a3 + a4);
}


//======================================================================
// sub_2B9294
// address: 0x002B9294   size: 0x4 (4 bytes)
//======================================================================
int __fastcall sub_2B9294(int a1, int a2, int a3, int a4)
{
  return *(_DWORD *)(a3 + a4);
}


//======================================================================
// sub_2BB5AC
// address: 0x002BB5AC   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_2BB5AC(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_2BB5B8
// address: 0x002BB5B8   size: 0x26 (38 bytes)
//======================================================================
_DWORD *__fastcall sub_2BB5B8(char *a1, char *a2, _DWORD *a3)
{
  char *v3; // r3
  _DWORD *v4; // r4

  v3 = a1;
  v4 = a3;
  while ( v3 != a2 )
  {
    if ( v4 != nullptr )
    {
      *v4 = *(_DWORD *)v3;
      v4[1] = *((_DWORD *)v3 + 1);
    }
    v3 += 8;
    v4 += 2;
  }
  return &a3[2 * ((unsigned int)(v3 - a1) >> 3)];
}


//======================================================================
// sub_2BD1F0
// address: 0x002BD1F0   size: 0x22 (34 bytes)
//======================================================================
bool __fastcall sub_2BD1F0(int *a1, int *a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r4
  int v5; // r1
  _BOOL4 result; // r0

  v2 = *a2;
  v3 = *a1;
  v4 = a1[1];
  v5 = a2[1];
  result = true;
  if ( v3 >= v2 )
  {
    result = false;
    if ( v3 <= v2 )
      return v4 < v5;
  }
  return result;
}

