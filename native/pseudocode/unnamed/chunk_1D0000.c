// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_1D0000

//======================================================================
// sub_1D58B4
// address: 0x001D58B4   size: 0x114 (276 bytes)
//======================================================================
bool __fastcall sub_1D58B4(float a1, float a2, float a3, float a4, float a5, float a6, float *a7, float *a8)
{
  _BOOL4 result; // r0
  float v10; // r5
  float v11; // r0
  float v12; // r1
  float v13; // r0
  float v14; // r0
  float v15; // r1

  if ( a6 < a3 )
  {
    if ( a2 > 0.0 )
    {
      v10 = 1.0 / a2;
      if ( (float)((float)(a3 - a6) * (float)(1.0 / a2)) > *a7 )
        *a7 = (float)(a3 - a6) * v10;
      if ( *a7 <= a1 )
      {
        v11 = a4;
        v12 = a5;
LABEL_14:
        v13 = (float)(v11 - v12) * v10;
        goto LABEL_20;
      }
    }
    return true;
  }
  if ( a4 < a5 )
  {
    if ( a2 < 0.0 )
    {
      v10 = 1.0 / a2;
      if ( (float)((float)(a4 - a5) * (float)(1.0 / a2)) > *a7 )
        *a7 = (float)(a4 - a5) * (float)(1.0 / a2);
      if ( *a7 <= a1 )
      {
        v12 = a6;
        v11 = a3;
        goto LABEL_14;
      }
    }
    return true;
  }
  if ( a2 <= 0.0 )
  {
    result = a2 < 0.0;
    if ( a2 >= 0.0 )
      return result;
    v15 = a6;
    v14 = a3;
  }
  else
  {
    v14 = a4;
    v15 = a5;
  }
  v13 = (float)(v14 - v15) / a2;
LABEL_20:
  if ( v13 < *a8 )
    *a8 = v13;
  return *a7 > *a8;
}


//======================================================================
// sub_1D5A3A
// address: 0x001D5A3A   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall sub_1D5A3A(ozcollide::Vec3f *a1, const ozcollide::Vec3f **a2, float *a3, float *a4)
{
  float v7; // r0
  float v8; // r5
  float v9; // r5
  __int64 v11; // [sp+0h] [bp-Ch]

  HIDWORD(v11) = a1;
  v7 = ozcollide::Vec3f::dot(a1, *a2);
  *a3 = v7;
  *a4 = v7;
  *(float *)&v11 = v7;
  v8 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)HIDWORD(v11), a2[1]);
  if ( v8 >= *a3 )
  {
    if ( v8 > *(float *)&v11 )
      *a4 = v8;
  }
  else
  {
    *a3 = v8;
  }
  v9 = ozcollide::Vec3f::dot((ozcollide::Vec3f *)HIDWORD(v11), a2[2]);
  if ( v9 >= *a3 )
  {
    if ( v9 > *a4 )
      *a4 = v9;
  }
  else
  {
    *a3 = v9;
  }
  return v11;
}


//======================================================================
// sub_1D5A9E
// address: 0x001D5A9E   size: 0x64 (100 bytes)
//======================================================================
__int64 __fastcall sub_1D5A9E(ozcollide::Vec3f *a1, float *a2, __int64 a3)
{
  float v5; // r6
  float v6; // r0

  v5 = ozcollide::Vec3f::dot(a1, (const ozcollide::Vec3f *)a2);
  v6 = (float)((float)(COERCE_FLOAT((unsigned int)(2 * *(_DWORD *)a1) >> 1) * a2[3])
             + (float)(COERCE_FLOAT((unsigned int)(2 * *((_DWORD *)a1 + 1)) >> 1) * a2[4]))
     + (float)(COERCE_FLOAT((unsigned int)(2 * *((_DWORD *)a1 + 2)) >> 1) * a2[5]);
  *(float *)a3 = v5 - v6;
  *(float *)HIDWORD(a3) = v5 + v6;
  return a3;
}


//======================================================================
// sub_1DC07C
// address: 0x001DC07C   size: 0x2E (46 bytes)
//======================================================================
bool __fastcall sub_1DC07C(appplay::JNIHelper *a1)
{
  int JavaVM; // r0
  int v3; // r4
  int v4; // r0

  JavaVM = appplay::JNIHelper::GetJavaVM(a1);
  v3 = 0;
  if ( (*(int (__fastcall **)(int, appplay::JNIHelper *, int))(*(_DWORD *)JavaVM + 24))(JavaVM, a1, 65540) == 0 )
  {
    v4 = appplay::JNIHelper::GetJavaVM(nullptr);
    return (*(int (__fastcall **)(int, appplay::JNIHelper *, _DWORD))(*(_DWORD *)v4 + 16))(v4, a1, 0) >= 0;
  }
  return v3;
}


//======================================================================
// sub_1DC0B0
// address: 0x001DC0B0   size: 0x22 (34 bytes)
//======================================================================
int __fastcall sub_1DC0B0(int a1, int a2)
{
  int result; // r0
  int v4; // [sp+4h] [bp-4h] BYREF

  v4 = a2;
  if ( a2 != 0 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 24))(v4, a1);
  result = sub_1DC07C((appplay::JNIHelper *)&v4);
  if ( result != 0 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)v4 + 24))(v4, a1);
  return result;
}


//======================================================================
// sub_1DC4A8
// address: 0x001DC4A8   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_1DC4A8(unsigned int a1, unsigned int a2, int a3)
{
  int v3; // r4
  unsigned int v4; // r1
  unsigned int v5; // r3
  int v6; // r2

  v3 = (unsigned __int16)a1 + (unsigned __int16)a2;
  v4 = HIWORD(a1) + HIWORD(a2) - a3 % 65521 + (unsigned int)(unsigned __int16)a1 * (a3 % 65521) % 0xFFF1;
  v5 = v4 + 65521;
  v6 = 65520;
  if ( v3 != 0 )
  {
    v6 = v3 - 1;
    if ( (unsigned int)(v3 - 1) > 0xFFF0 )
      v6 = v3 - 65522;
  }
  if ( v5 > 0x1FFE1 )
    v5 = v4 - 65521;
  if ( v5 > 0xFFF0 )
    v5 -= 65521;
  return (v5 << 16) | v6;
}


//======================================================================
// sub_1DC7BC
// address: 0x001DC7BC   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_1DC7BC(_DWORD *a1, unsigned int a2)
{
  int result; // r0

  result = 0;
  while ( a2 != 0 )
  {
    if ( (a2 & 1) != 0 )
      result ^= *a1;
    a2 >>= 1;
    ++a1;
  }
  return result;
}


//======================================================================
// sub_1DC7D8
// address: 0x001DC7D8   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_1DC7D8(int a1, _DWORD *a2)
{
  int i; // r4
  int result; // r0

  for ( i = 0; i != 32; ++i )
  {
    result = sub_1DC7BC(a2, a2[i]);
    *(_DWORD *)(a1 + i * 4) = result;
  }
  return result;
}


//======================================================================
// sub_1DC7F4
// address: 0x001DC7F4   size: 0x70 (112 bytes)
//======================================================================
int __fastcall sub_1DC7F4(int result, int a2, int a3)
{
  unsigned int v3; // r4
  int v4; // r6
  int v5; // r2
  int i; // r3
  int v7; // r1
  int v8; // r6
  _DWORD v10[32]; // [sp+8h] [bp-104h] BYREF
  _DWORD v11[33]; // [sp+88h] [bp-84h] BYREF

  v3 = result;
  v4 = a3;
  if ( a3 > 0 )
  {
    v5 = 1;
    v11[0] = -306674912;
    for ( i = 1; i != 32; ++i )
    {
      v7 = i;
      v11[v7] = v5;
      v5 *= 2;
    }
    sub_1DC7D8((int)v10, v11);
    sub_1DC7D8((int)v11, v10);
    do
    {
      sub_1DC7D8((int)v10, v11);
      if ( (v4 & 1) != 0 )
        v3 = sub_1DC7BC(v10, v3);
      v8 = v4 >> 1;
      if ( v8 == 0 )
        break;
      sub_1DC7D8((int)v11, v10);
      if ( (v8 & 1) != 0 )
        v3 = sub_1DC7BC(v11, v3);
      v4 = v8 >> 1;
    }
    while ( v4 != 0 );
    return a2 ^ v3;
  }
  return result;
}


//======================================================================
// sub_1DCB68
// address: 0x001DCB68   size: 0x1A (26 bytes)
//======================================================================
int __fastcall sub_1DCB68(int result, __int16 a2)
{
  int v2; // r3
  int v3; // r4
  int v4; // r3
  int v5; // r2

  v2 = *(_DWORD *)(result + 20);
  v3 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 20) = v2 + 1;
  *(_BYTE *)(v3 + v2) = HIBYTE(a2);
  v4 = *(_DWORD *)(result + 20);
  v5 = *(_DWORD *)(result + 8);
  *(_DWORD *)(result + 20) = v4 + 1;
  *(_BYTE *)(v5 + v4) = a2;
  return result;
}


//======================================================================
// sub_1DCB82
// address: 0x001DCB82   size: 0x16C (364 bytes)
//======================================================================
int __fastcall sub_1DCB82(_DWORD *a1, unsigned int a2)
{
  int v2; // r6
  unsigned int v3; // r5
  unsigned int v4; // r2
  int v5; // r4
  unsigned __int8 *v6; // r3
  int v7; // r7
  int v8; // r12
  unsigned __int8 *v9; // r2
  int v10; // r6
  int v11; // r5
  unsigned __int8 *v12; // r3
  unsigned __int8 *v13; // r2
  int v14; // r2
  int result; // r0
  unsigned int v16; // [sp+4h] [bp-28h]
  unsigned int v17; // [sp+8h] [bp-24h]
  int v18; // [sp+Ch] [bp-20h]
  int v19; // [sp+10h] [bp-1Ch]
  unsigned int v20; // [sp+14h] [bp-18h]
  unsigned int v21; // [sp+18h] [bp-14h]
  unsigned int v22; // [sp+1Ch] [bp-10h]
  int v23; // [sp+20h] [bp-Ch]
  int v24; // [sp+24h] [bp-8h]

  v19 = a1[36];
  v2 = a1[11];
  v16 = a1[31];
  v3 = a1[27];
  v4 = a1[30];
  v18 = a1[14];
  v5 = v4;
  v6 = (unsigned __int8 *)(v18 + v3);
  v22 = 0;
  if ( v3 > v2 - 262 )
    v22 = v3 + 262 - v2;
  v23 = a1[16];
  v20 = v18 + v3 + 258;
  v24 = a1[13];
  v7 = v6[v4 - 1];
  v8 = v6[v4];
  if ( v4 >= a1[35] )
    v16 >>= 2;
  v17 = a1[29];
  if ( v19 > v17 )
    v19 = a1[29];
  while ( 1 )
  {
    v9 = (unsigned __int8 *)(v18 + a2);
    v10 = *(unsigned __int8 *)(v18 + a2 + v5);
    if ( v10 != v8 )
    {
      v10 = v8;
LABEL_32:
      v11 = v7;
      goto LABEL_33;
    }
    v11 = v9[v5 - 1];
    if ( v11 != v7 )
      goto LABEL_32;
    if ( *v9 == *v6 && v9[1] == v6[1] )
    {
      v12 = v6 + 2;
      v13 = v9 + 2;
      while ( 1 )
      {
        if ( v12[1] != v13[1] )
        {
          ++v12;
          goto LABEL_28;
        }
        if ( v12[2] != v13[2] )
        {
          v12 += 2;
          goto LABEL_28;
        }
        if ( v12[3] != v13[3] )
        {
          v12 += 3;
          goto LABEL_28;
        }
        if ( v12[4] != v13[4] )
        {
          v12 += 4;
          goto LABEL_28;
        }
        if ( v12[5] != v13[5] )
        {
          v12 += 5;
          goto LABEL_28;
        }
        if ( v12[6] != v13[6] )
        {
          v12 += 6;
          goto LABEL_28;
        }
        if ( v12[7] != v13[7] )
          break;
        v12 += 8;
        if ( *v12 == v13[8] )
        {
          v13 += 8;
          if ( (unsigned int)v12 < v20 )
            continue;
        }
        goto LABEL_28;
      }
      v12 += 7;
LABEL_28:
      v14 = (int)&v12[-v20 + 258];
      v21 = v20 - 258;
      v6 = (unsigned __int8 *)(v20 - 258);
      if ( v14 > v5 )
        break;
    }
LABEL_33:
    a2 = *(unsigned __int16 *)(2 * (a2 & v24) + v23);
    if ( a2 <= v22 )
      goto LABEL_37;
    if ( --v16 == 0 )
      goto LABEL_37;
    v8 = v10;
    v7 = v11;
  }
  a1[28] = a2;
  if ( v14 < v19 )
  {
    v11 = *(unsigned __int8 *)(v21 + v14 - 1);
    v10 = *(unsigned __int8 *)(v21 + v14);
    v5 = v14;
    goto LABEL_33;
  }
  v5 = v14;
LABEL_37:
  result = v5;
  if ( v5 > v17 )
    return v17;
  return result;
}


//======================================================================
// sub_1DCCF0
// address: 0x001DCCF0   size: 0x1C2 (450 bytes)
//======================================================================
__int64 __fastcall sub_1DCCF0(_DWORD *a1)
{
  size_t v1; // r5
  unsigned int v3; // r3
  size_t v4; // r6
  int v5; // r7
  int v6; // r0
  int v7; // r3
  _WORD *v8; // r2
  unsigned int v9; // r0
  __int16 v10; // r1
  size_t v11; // r1
  _WORD *v12; // r3
  unsigned int v13; // r0
  __int16 v14; // r2
  int v15; // r7
  unsigned int v16; // r3
  unsigned int v17; // r0
  unsigned int v18; // r7
  int v19; // r3
  unsigned int v20; // r0
  int v21; // r1
  size_t v22; // r6
  int v23; // r3
  int v24; // r2
  int v25; // r6
  int v26; // r3
  int v27; // r0
  int v28; // r7
  int v29; // r7
  int v30; // r0
  int v31; // r0
  unsigned int v32; // r5
  size_t v33; // r7
  size_t v34; // r5
  size_t v35; // r5
  size_t v36; // r7
  __int64 v38; // [sp+0h] [bp-Ch]

  LODWORD(v38) = a1;
  v1 = a1[11];
  HIDWORD(v38) = 2 * v1;
  do
  {
    v3 = a1[27];
    v4 = a1[15] - a1[29] - v3;
    if ( v3 >= v1 + a1[11] - 262 )
    {
      j_memcpy((void *)a1[14], (const void *)(a1[14] + v1), v1);
      v5 = a1[27];
      v6 = a1[23];
      a1[28] -= v1;
      a1[27] = v5 - v1;
      a1[23] = v6 - v1;
      v7 = a1[19];
      v8 = (_WORD *)(a1[17] + 2 * v7);
      do
      {
        v9 = (unsigned __int16)*--v8;
        v10 = 0;
        if ( v9 >= v1 )
          v10 = v9 - v1;
        --v7;
        *v8 = v10;
      }
      while ( v7 != 0 );
      v11 = v1;
      v12 = (_WORD *)(a1[16] + HIDWORD(v38));
      do
      {
        v13 = (unsigned __int16)*--v12;
        v14 = 0;
        if ( v13 >= v1 )
          v14 = v13 - v1;
        --v11;
        *v12 = v14;
      }
      while ( v11 != 0 );
      v4 += v1;
    }
    v15 = *a1;
    v16 = *(_DWORD *)(*a1 + 4);
    if ( v16 == 0 )
      break;
    if ( v16 <= v4 )
    {
      v4 = *(_DWORD *)(*a1 + 4);
LABEL_19:
      LODWORD(v38) = a1[14] + a1[29] + a1[27];
      *(_DWORD *)(v15 + 4) = v16 - v4;
      j_memcpy((void *)v38, *(const void **)v15, v4);
      v19 = *(_DWORD *)(*(_DWORD *)(v15 + 28) + 24);
      if ( v19 == 1 )
      {
        v20 = adler32(*(_DWORD *)(v15 + 48), (unsigned __int8 *)v38, v4);
        goto LABEL_23;
      }
      if ( v19 == 2 )
      {
        v20 = crc32(*(_DWORD *)(v15 + 48), (_BYTE *)v38, v4);
LABEL_23:
        *(_DWORD *)(v15 + 48) = v20;
      }
      v21 = *(_DWORD *)(v15 + 8);
      *(_DWORD *)v15 += v4;
      *(_DWORD *)(v15 + 8) = v21 + v4;
      goto LABEL_25;
    }
    if ( v4 != 0 )
      goto LABEL_19;
LABEL_25:
    v22 = v4 + a1[29];
    a1[29] = v22;
    v23 = a1[1453];
    if ( v22 + v23 > 2 )
    {
      v24 = a1[14];
      v25 = a1[22];
      v26 = a1[27] - v23;
      v27 = *(unsigned __int8 *)(v24 + v26);
      v28 = a1[21];
      a1[18] = v27;
      a1[18] = ((v27 << v25) ^ *(unsigned __int8 *)(v24 + v26 + 1)) & v28;
      do
      {
        if ( a1[1453] == 0 )
          break;
        v29 = a1[17];
        v30 = ((a1[18] << a1[22]) ^ *(unsigned __int8 *)(a1[14] + v26 + 2)) & a1[21];
        a1[18] = v30;
        *(_WORD *)(2 * (a1[13] & v26) + a1[16]) = *(_WORD *)(2 * v30 + v29);
        *(_WORD *)(2 * a1[18] + a1[17]) = v26++;
        v31 = a1[1453] - 1;
        a1[1453] = v31;
      }
      while ( (unsigned int)(v31 + a1[29]) > 2 );
    }
  }
  while ( a1[29] <= 0x105u && *(_DWORD *)(*a1 + 4) != 0 );
  v17 = a1[1456];
  v18 = a1[15];
  if ( v17 >= v18 )
    return v38;
  v32 = a1[29] + a1[27];
  if ( v17 < v32 )
  {
    v33 = v18 - v32;
    if ( v33 > 0x102 )
      v33 = 258;
    j_memset((void *)(a1[14] + v32), 0, v33);
    v34 = v33 + v32;
    goto LABEL_42;
  }
  if ( v17 < v32 + 258 )
  {
    v35 = v32 - v17 + 258;
    v36 = v18 - v17;
    if ( v35 > v36 )
      v35 = v36;
    j_memset((void *)(a1[14] + v17), 0, v35);
    v34 = v35 + a1[1456];
LABEL_42:
    a1[1456] = v34;
  }
  return v38;
}


//======================================================================
// sub_1DCEB8
// address: 0x001DCEB8   size: 0x4A (74 bytes)
//======================================================================
void *__fastcall sub_1DCEB8(int a1)
{
  int v1; // r4
  void *result; // r0
  size_t v4; // r5
  int v5; // r2
  size_t v6; // r5

  v1 = *(_DWORD *)(a1 + 28);
  result = (void *)tr_flush_bits(v1);
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 > *(_DWORD *)(v1 + 20) )
    v4 = *(_DWORD *)(v1 + 20);
  if ( v4 != 0 )
  {
    result = j_memcpy(*(void **)(a1 + 12), *(const void **)(v1 + 16), v4);
    *(_DWORD *)(a1 + 12) += v4;
    *(_DWORD *)(v1 + 16) += v4;
    v5 = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 20) += v4;
    *(_DWORD *)(a1 + 16) = v5 - v4;
    v6 = *(_DWORD *)(v1 + 20) - v4;
    *(_DWORD *)(v1 + 20) = v6;
    if ( v6 == 0 )
      *(_DWORD *)(v1 + 16) = *(_DWORD *)(v1 + 8);
  }
  return result;
}


//======================================================================
// sub_1DCF04
// address: 0x001DCF04   size: 0x304 (772 bytes)
//======================================================================
int __fastcall sub_1DCF04(int *a1, int a2)
{
  unsigned int v4; // r1
  unsigned int v5; // r3
  int result; // r0
  int v7; // r3
  int v8; // r6
  int v9; // r7
  int v10; // r2
  unsigned int v11; // r3
  int v12; // r0
  unsigned int v13; // r0
  unsigned int v14; // r0
  int v15; // r3
  int v16; // r3
  int v17; // r0
  int v18; // r7
  int v19; // r2
  unsigned int v20; // r7
  unsigned int v21; // r6
  int *v22; // r3
  int v23; // r2
  int v24; // r7
  int v25; // r3
  int v26; // r0
  int v27; // r2
  int v28; // r3
  int v29; // r6
  int v30; // r2
  int v31; // r1
  int v32; // r1
  int v33; // r2
  int v34; // r2
  int v35; // r3
  int v36; // r2
  int v37; // r1
  int v38; // r6
  int v39; // r0
  int v40; // r2
  int v41; // r0
  int v42; // r3
  int v43; // r1
  int v44; // r6
  int v45; // r0
  unsigned int v46; // r3
  int v47; // r2
  int v48; // r2
  int v49; // r1
  int v50; // r0
  int v51; // r2
  int v52; // r1
  int v53; // r0
  unsigned int v54; // [sp+4h] [bp-8h]

  while ( 1 )
  {
    if ( (unsigned int)a1[29] <= 0x105 )
    {
      sub_1DCCF0(a1);
      v5 = a1[29];
      if ( v5 <= 0x105 )
      {
        if ( a2 == 0 )
          return 0;
        if ( v5 == 0 )
          break;
      }
    }
    if ( (unsigned int)a1[29] > 2 )
    {
      v7 = a1[27];
      v8 = a1[17];
      v9 = a1[13];
      v10 = ((a1[18] << a1[22]) ^ *(unsigned __int8 *)(a1[14] + v7 + 2)) & a1[21];
      a1[18] = v10;
      v4 = *(unsigned __int16 *)(2 * v10 + v8);
      *(_WORD *)(2 * (v7 & v9) + a1[16]) = v4;
      *(_WORD *)(2 * a1[18] + a1[17]) = a1[27];
    }
    else
    {
      v4 = 0;
    }
    v11 = a1[24];
    v12 = a1[28];
    a1[30] = v11;
    a1[25] = v12;
    a1[24] = 2;
    if ( v4 != 0 && v11 < a1[32] && a1[27] - v4 <= a1[11] - 262 )
    {
      v13 = sub_1DCB82(a1, v4);
      a1[24] = v13;
      if ( v13 <= 5 && (a1[34] == 1 || v13 == 3 && (unsigned int)(a1[27] - a1[28]) > 0x1000) )
        a1[24] = 2;
    }
    v14 = a1[30];
    v15 = a1[27];
    if ( v14 <= 2 || a1[24] > v14 )
    {
      if ( a1[26] != 0 )
      {
        v36 = *(unsigned __int8 *)(a1[14] + v15 - 1);
        v37 = 0;
        *(_WORD *)(2 * a1[1448] + a1[1449]) = 0;
        v38 = a1[1446];
        v39 = a1[1448];
        a1[1448] = v39 + 1;
        *(_BYTE *)(v38 + v39) = v36;
        ++LOWORD(a1[v36 + 37]);
        if ( a1[1448] == a1[1447] - 1 )
        {
          v40 = a1[23];
          if ( v40 >= 0 )
            v37 = a1[14] + v40;
          tr_flush_block(a1, v37, a1[27] - v40, 0);
          v41 = *a1;
          a1[23] = a1[27];
          sub_1DCEB8(v41);
        }
        ++a1[27];
        --a1[29];
        goto LABEL_37;
      }
      a1[27] = v15 + 1;
      v42 = a1[29];
      a1[26] = 1;
      a1[29] = v42 - 1;
    }
    else
    {
      v54 = v15 + a1[29] - 3;
      v16 = (unsigned __int16)(v15 - *((_WORD *)a1 + 50));
      *(_WORD *)(2 * a1[1448] + a1[1449]) = v16 - 1;
      v17 = (unsigned __int8)(v14 - 3);
      v18 = a1[1446];
      v19 = a1[1448];
      a1[1448] = v19 + 1;
      *(_BYTE *)(v18 + v19) = v17;
      v20 = (v16 - 2) << 16;
      v21 = (unsigned __int16)(v16 - 2);
      v22 = &a1[length_code[v17] + 294];
      ++*(_WORD *)v22;
      if ( v21 > 0xFF )
        v23 = (unsigned __int8)dist_code[(v20 >> 23) + 256];
      else
        v23 = (unsigned __int8)dist_code[v21];
      ++LOWORD(a1[v23 + 610]);
      v24 = a1[1448];
      v25 = a1[30];
      v26 = a1[1447] - 1;
      a1[29] = a1[29] + 1 - v25;
      a1[30] = v25 - 2;
      do
      {
        v27 = a1[27];
        v28 = v27 + 1;
        a1[27] = v27 + 1;
        if ( v27 + 1 <= v54 )
        {
          v29 = a1[17];
          v30 = ((a1[18] << a1[22]) ^ *(unsigned __int8 *)(a1[14] + v27 + 3)) & a1[21];
          v31 = a1[13];
          a1[18] = v30;
          *(_WORD *)(2 * (v28 & v31) + a1[16]) = *(_WORD *)(2 * v30 + v29);
          *(_WORD *)(2 * a1[18] + a1[17]) = a1[27];
        }
        v32 = a1[30] - 1;
        a1[30] = v32;
      }
      while ( v32 != 0 );
      v33 = a1[27];
      a1[26] = 0;
      v34 = v33 + 1;
      a1[24] = 2;
      a1[27] = v34;
      if ( v24 == v26 )
      {
        v35 = a1[23];
        if ( v35 >= 0 )
          v32 = a1[14] + v35;
        tr_flush_block(a1, v32, v34 - v35, 0);
        a1[23] = a1[27];
        sub_1DCEB8(*a1);
LABEL_37:
        if ( *(_DWORD *)(*a1 + 16) == 0 )
          return 0;
      }
    }
  }
  if ( a1[26] != 0 )
  {
    v43 = *(unsigned __int8 *)(a1[14] + a1[27] - 1);
    *(_WORD *)(2 * a1[1448] + a1[1449]) = 0;
    v44 = a1[1446];
    v45 = a1[1448];
    a1[1448] = v45 + 1;
    *(_BYTE *)(v44 + v45) = v43;
    ++LOWORD(a1[v43 + 37]);
    a1[26] = 0;
  }
  v46 = a1[27];
  v47 = v46;
  if ( v46 > 2 )
    v47 = 2;
  a1[1453] = v47;
  if ( a2 == 4 )
  {
    v48 = a1[23];
    if ( v48 < 0 )
      v49 = 0;
    else
      v49 = a1[14] + v48;
    tr_flush_block(a1, v49, v46 - v48, 1);
    v50 = *a1;
    a1[23] = a1[27];
    sub_1DCEB8(v50);
    return (*(_DWORD *)(*a1 + 16) != 0) + 2;
  }
  else
  {
    result = 1;
    if ( a1[1448] != 0 )
    {
      v51 = a1[23];
      if ( v51 < 0 )
        v52 = 0;
      else
        v52 = a1[14] + v51;
      tr_flush_block(a1, v52, v46 - v51, 0);
      v53 = *a1;
      a1[23] = a1[27];
      sub_1DCEB8(v53);
      return *(_DWORD *)(*a1 + 16) != 0;
    }
  }
  return result;
}


//======================================================================
// sub_1DD224
// address: 0x001DD224   size: 0x26A (618 bytes)
//======================================================================
int __fastcall sub_1DD224(int a1, int a2)
{
  unsigned int v4; // r3
  int result; // r0
  int v6; // r3
  int v7; // r6
  int v8; // r7
  int v9; // r2
  unsigned int v10; // r1
  unsigned int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r1
  int v15; // r0
  unsigned int v16; // r12
  int v17; // r1
  int v18; // r1
  unsigned int v19; // r3
  unsigned int v20; // r2
  int v21; // r2
  int v22; // r7
  int v23; // r6
  int v24; // r3
  int v25; // r2
  int v26; // r0
  int v27; // r6
  int v28; // r2
  int v29; // r3
  int v30; // r7
  int v31; // r2
  int v32; // r3
  int v33; // r0
  int v34; // r3
  int v35; // r2
  int v36; // r2
  int v37; // r1
  int v38; // r0
  int v39; // r2
  int v40; // r1
  int v41; // r0
  unsigned int v42; // r3
  int v43; // r2
  int v44; // r2
  int v45; // r1
  int v46; // r2
  int v47; // r1
  int v48; // r0
  int v49; // [sp+4h] [bp-8h]

  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 116) <= 0x105u )
    {
      sub_1DCCF0((_DWORD *)a1);
      v4 = *(_DWORD *)(a1 + 116);
      if ( v4 <= 0x105 )
      {
        if ( a2 == 0 )
          return 0;
        if ( v4 == 0 )
          break;
      }
    }
    if ( *(_DWORD *)(a1 + 116) > 2u )
    {
      v6 = *(_DWORD *)(a1 + 108);
      v7 = *(_DWORD *)(a1 + 68);
      v8 = *(_DWORD *)(a1 + 52);
      v9 = ((*(_DWORD *)(a1 + 72) << *(_DWORD *)(a1 + 88))
          ^ *(unsigned __int8 *)(*(_DWORD *)(a1 + 56) + v6 + 2))
         & *(_DWORD *)(a1 + 84);
      *(_DWORD *)(a1 + 72) = v9;
      v10 = *(unsigned __int16 *)(2 * v9 + v7);
      *(_WORD *)(2 * (v6 & v8) + *(_DWORD *)(a1 + 64)) = v10;
      *(_WORD *)(2 * *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 68)) = *(_DWORD *)(a1 + 108);
      if ( v10 != 0 && *(_DWORD *)(a1 + 108) - v10 <= *(_DWORD *)(a1 + 44) - 262 )
        *(_DWORD *)(a1 + 96) = sub_1DCB82((_DWORD *)a1, v10);
    }
    v11 = *(_DWORD *)(a1 + 96);
    v12 = *(_DWORD *)(a1 + 108);
    if ( v11 <= 2 )
    {
      v36 = *(unsigned __int8 *)(*(_DWORD *)(a1 + 56) + v12);
      *(_WORD *)(2 * *(_DWORD *)(a1 + 5792) + *(_DWORD *)(a1 + 5796)) = 0;
      v37 = *(_DWORD *)(a1 + 5792);
      v38 = *(_DWORD *)(a1 + 5784);
      *(_DWORD *)(a1 + 5792) = v37 + 1;
      *(_BYTE *)(v38 + v37) = v36;
      ++*(_WORD *)(a1 + 4 * v36 + 148);
      v18 = *(_DWORD *)(a1 + 5788)
          - *(_DWORD *)(a1 + 5792)
          + (*(_DWORD *)(a1 + 5792) == *(_DWORD *)(a1 + 5788) - 1)
          + *(_DWORD *)(a1 + 5792)
          - *(_DWORD *)(a1 + 5788);
      --*(_DWORD *)(a1 + 116);
    }
    else
    {
      v13 = (unsigned __int16)(v12 - *(_WORD *)(a1 + 112));
      *(_WORD *)(2 * *(_DWORD *)(a1 + 5792) + *(_DWORD *)(a1 + 5796)) = v13;
      v14 = *(_DWORD *)(a1 + 5792);
      v15 = (unsigned __int8)(v11 - 3);
      v49 = *(_DWORD *)(a1 + 5784);
      *(_DWORD *)(a1 + 5792) = v14 + 1;
      *(_BYTE *)(v49 + v14) = v15;
      v16 = (unsigned __int16)(v13 - 1);
      ++*(_WORD *)(a1 + 4 * (length_code[v15] + 257) + 148);
      if ( v16 > 0xFF )
        v17 = (unsigned __int8)dist_code[((unsigned int)((v13 - 1) << 16) >> 23) + 256];
      else
        v17 = (unsigned __int8)dist_code[v16];
      ++*(_WORD *)(a1 + 4 * v17 + 2440);
      v18 = *(_DWORD *)(a1 + 5792) == *(_DWORD *)(a1 + 5788) - 1;
      v19 = *(_DWORD *)(a1 + 96);
      v20 = *(_DWORD *)(a1 + 116) - v19;
      *(_DWORD *)(a1 + 116) = v20;
      if ( v19 > *(_DWORD *)(a1 + 128) || v20 <= 2 )
      {
        v30 = *(_DWORD *)(a1 + 108);
        *(_DWORD *)(a1 + 96) = 0;
        v31 = *(_DWORD *)(a1 + 56);
        v32 = v19 + v30;
        *(_DWORD *)(a1 + 108) = v32;
        v33 = *(unsigned __int8 *)(v31 + v32);
        v34 = v31 + v32;
        v35 = *(_DWORD *)(a1 + 88);
        *(_DWORD *)(a1 + 72) = v33;
        *(_DWORD *)(a1 + 72) = ((v33 << v35) ^ *(unsigned __int8 *)(v34 + 1)) & *(_DWORD *)(a1 + 84);
        goto LABEL_24;
      }
      *(_DWORD *)(a1 + 96) = v19 - 1;
      do
      {
        v21 = *(_DWORD *)(a1 + 108);
        v22 = *(_DWORD *)(a1 + 56);
        v23 = *(_DWORD *)(a1 + 88);
        v24 = v21 + 1;
        *(_DWORD *)(a1 + 108) = v21 + 1;
        v25 = (*(_DWORD *)(a1 + 72) << v23) ^ *(unsigned __int8 *)(v22 + v21 + 3);
        v26 = *(_DWORD *)(a1 + 68);
        v27 = *(_DWORD *)(a1 + 52);
        v28 = v25 & *(_DWORD *)(a1 + 84);
        *(_DWORD *)(a1 + 72) = v28;
        *(_WORD *)(2 * (v24 & v27) + *(_DWORD *)(a1 + 64)) = *(_WORD *)(2 * v28 + v26);
        *(_WORD *)(2 * *(_DWORD *)(a1 + 72) + *(_DWORD *)(a1 + 68)) = *(_DWORD *)(a1 + 108);
        v29 = *(_DWORD *)(a1 + 96) - 1;
        *(_DWORD *)(a1 + 96) = v29;
      }
      while ( v29 != 0 );
    }
    ++*(_DWORD *)(a1 + 108);
LABEL_24:
    if ( v18 != 0 )
    {
      v39 = *(_DWORD *)(a1 + 92);
      v40 = v39 < 0 ? 0 : *(_DWORD *)(a1 + 56) + v39;
      tr_flush_block(a1, v40, *(_DWORD *)(a1 + 108) - v39, 0);
      v41 = *(_DWORD *)a1;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_1DCEB8(v41);
      if ( *(_DWORD *)(*(_DWORD *)a1 + 16) == 0 )
        return 0;
    }
  }
  v42 = *(_DWORD *)(a1 + 108);
  v43 = v42;
  if ( v42 > 2 )
    v43 = 2;
  *(_DWORD *)(a1 + 5812) = v43;
  if ( a2 == 4 )
  {
    v44 = *(_DWORD *)(a1 + 92);
    if ( v44 < 0 )
      v45 = 0;
    else
      v45 = *(_DWORD *)(a1 + 56) + v44;
    tr_flush_block(a1, v45, v42 - v44, 1);
    *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
    sub_1DCEB8(*(_DWORD *)a1);
    return (*(_DWORD *)(*(_DWORD *)a1 + 16) != 0) + 2;
  }
  else
  {
    result = 1;
    if ( *(_DWORD *)(a1 + 5792) != 0 )
    {
      v46 = *(_DWORD *)(a1 + 92);
      if ( v46 < 0 )
        v47 = 0;
      else
        v47 = *(_DWORD *)(a1 + 56) + v46;
      tr_flush_block(a1, v47, v42 - v46, 0);
      v48 = *(_DWORD *)a1;
      *(_DWORD *)(a1 + 92) = *(_DWORD *)(a1 + 108);
      sub_1DCEB8(v48);
      return *(_DWORD *)(*(_DWORD *)a1 + 16) != 0;
    }
  }
  return result;
}


//======================================================================
// sub_1DD4AC
// address: 0x001DD4AC   size: 0x116 (278 bytes)
//======================================================================
int __fastcall sub_1DD4AC(int *a1, int a2)
{
  unsigned int v3; // r7
  int result; // r0
  unsigned int v6; // r1
  int v7; // r3
  unsigned int v8; // r2
  int v9; // r1
  unsigned int v10; // r2
  int v11; // r1
  int v12; // r0
  int v13; // r1
  int v14; // r2
  int v15; // r3
  int v16; // r1
  int v17; // r0
  int v18; // r1
  int v19; // r0

  v3 = a1[3] - 5;
  if ( v3 > 0xFFFE )
    v3 = 0xFFFF;
  while ( 1 )
  {
    if ( (unsigned int)a1[29] <= 1 )
    {
      sub_1DCCF0(a1);
      if ( a1[29] == 0 )
        break;
    }
    v6 = a1[29] + a1[27];
    a1[29] = 0;
    v7 = a1[23];
    a1[27] = v6;
    v8 = v3 + v7;
    if ( v6 != 0 && v6 < v8
      || ((a1[29] = v6 - v8, a1[27] = v8, v7 < 0) ? (v11 = 0) : (v11 = a1[14] + v7),
          tr_flush_block(a1, v11, v3, 0),
          v12 = *a1,
          a1[23] = a1[27],
          sub_1DCEB8(v12),
          *(_DWORD *)(*a1 + 16) != 0) )
    {
      v9 = a1[23];
      v10 = a1[27] - v9;
      if ( v10 < a1[11] - 262 )
        continue;
      v13 = v9 < 0 ? 0 : a1[14] + v9;
      tr_flush_block(a1, v13, v10, 0);
      a1[23] = a1[27];
      sub_1DCEB8(*a1);
      if ( *(_DWORD *)(*a1 + 16) != 0 )
        continue;
    }
    return 0;
  }
  if ( a2 == 0 )
    return 0;
  a1[1453] = 0;
  v14 = a1[27];
  v15 = a1[23];
  if ( a2 == 4 )
  {
    if ( v15 < 0 )
      v16 = 0;
    else
      v16 = a1[14] + v15;
    tr_flush_block(a1, v16, v14 - v15, 1);
    v17 = *a1;
    a1[23] = a1[27];
    sub_1DCEB8(v17);
    return (*(_DWORD *)(*a1 + 16) != 0) + 2;
  }
  else
  {
    result = 1;
    if ( v14 > v15 )
    {
      if ( v15 < 0 )
        v18 = 0;
      else
        v18 = a1[14] + v15;
      tr_flush_block(a1, v18, v14 - v15, 0);
      v19 = *a1;
      a1[23] = a1[27];
      sub_1DCEB8(v19);
      return *(_DWORD *)(*a1 + 16) != 0;
    }
  }
  return result;
}


//======================================================================
// sub_1DE26A
// address: 0x001DE26A   size: 0xC (12 bytes)
//======================================================================
// positive sp value has been detected, the output may be wrong!
void __fastcall sub_1DE26A(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  __asm { POP     {R4-R7,PC} }
}


//======================================================================
// sub_1DE834
// address: 0x001DE834   size: 0x192 (402 bytes)
//======================================================================
_DWORD *__fastcall sub_1DE834(const char *a1, int a2, _BYTE *a3)
{
  _DWORD *v4; // r0
  _DWORD *v5; // r4
  unsigned int v6; // r5
  int v7; // r6
  size_t v8; // r0
  char *v9; // r0
  int v10; // r3
  int v11; // r2
  int v12; // r1
  int v13; // r1
  int v14; // r0
  __off_t v16; // r0
  int v17; // r3
  int v19; // [sp+4h] [bp-10h]
  int v20; // [sp+8h] [bp-Ch]

  if ( a1 == nullptr )
    return nullptr;
  v4 = j_malloc(0x8Cu);
  v5 = v4;
  if ( v4 == nullptr )
    return nullptr;
  v4[7] = 0x2000;
  v4[6] = 0;
  v4[20] = 0;
  v4[3] = 0;
  v4[16] = 0;
  v4[10] = 0;
  v4[15] = -1;
  v19 = 0;
  v20 = 0;
  while ( 1 )
  {
    v6 = (unsigned __int8)*a3;
    if ( *a3 == 0 )
      break;
    if ( (unsigned __int8)(v6 - 48) <= 9u )
    {
      v4[15] = v6 - 48;
      goto LABEL_31;
    }
    if ( v6 == 101 )
    {
      v20 = 1;
    }
    else if ( v6 > 0x65 )
    {
      if ( v6 == 114 )
      {
        v4[3] = 7247;
      }
      else if ( v6 > 0x72 )
      {
        if ( v6 == 119 )
        {
          v4[3] = 31153;
        }
        else if ( v6 == 120 )
        {
          v19 = 1;
        }
      }
      else if ( v6 == 102 )
      {
        v4[16] = 1;
      }
      else if ( v6 == 104 )
      {
        v4[16] = 2;
      }
    }
    else
    {
      if ( v6 == 82 )
      {
        v4[16] = 3;
        goto LABEL_31;
      }
      if ( v6 > 0x52 )
      {
        if ( v6 == 84 )
          goto LABEL_29;
        if ( v6 == 97 )
          v4[3] = 1;
      }
      else
      {
        if ( v6 == 43 )
          goto LABEL_52;
        if ( v6 == 70 )
        {
          v4[16] = 4;
LABEL_29:
          v4[10] = 1;
        }
      }
    }
LABEL_31:
    ++a3;
  }
  v7 = v4[3];
  if ( v7 == 0 )
    goto LABEL_52;
  if ( v7 == 7247 )
  {
    if ( v4[10] != 0 )
      goto LABEL_52;
    v4[10] = 1;
  }
  v8 = j_strlen(a1);
  v9 = (char *)j_malloc(v8 + 1);
  v5[5] = v9;
  if ( v9 == nullptr )
  {
LABEL_52:
    j_free(v5);
    return nullptr;
  }
  j_strcpy(v9, a1);
  if ( v20 != 0 )
    v10 = 655360;
  else
    v10 = 0x20000;
  if ( v7 == 7247 )
  {
    v13 = 0;
  }
  else
  {
    v11 = 65;
    if ( v19 != 0 )
      v11 = 193;
    if ( v7 == 31153 )
      v12 = 512;
    else
      v12 = 1024;
    v13 = v12 | v11;
  }
  v14 = a2;
  if ( a2 < 0 )
    v14 = j_open(a1, v13 | v10, 438);
  v5[4] = v14;
  if ( v14 == -1 )
  {
    j_free((void *)v5[5]);
    goto LABEL_52;
  }
  if ( v5[3] == 1 )
    v5[3] = 31153;
  if ( v5[3] == 7247 )
  {
    v16 = j_lseek(v14, 0, 1);
    if ( v16 == -1 )
      v5[12] = 0;
    else
      v5[12] = v16;
  }
  v17 = v5[3];
  *v5 = 0;
  if ( v17 == 7247 )
  {
    v5[13] = 0;
    v5[14] = 0;
    v5[11] = 0;
  }
  v5[18] = 0;
  gz_error((int)v5, 0, nullptr);
  v5[2] = 0;
  v5[22] = 0;
  return v5;
}


//======================================================================
// sub_1DEB8C
// address: 0x001DEB8C   size: 0x52 (82 bytes)
//======================================================================
ssize_t __fastcall sub_1DEB8C(int a1, int a2, unsigned int a3, unsigned int *a4)
{
  ssize_t result; // r0
  unsigned int v9; // r0
  int *v10; // r0
  char *v11; // r0

  *a4 = 0;
  while ( 1 )
  {
    result = j_read(*(_DWORD *)(a1 + 16), (void *)(a2 + *a4), a3 - *a4);
    if ( result <= 0 )
      break;
    v9 = result + *a4;
    *a4 = v9;
    if ( v9 >= a3 )
      return 0;
  }
  if ( result != 0 )
  {
    v10 = (int *)j___errno();
    v11 = j_strerror(*v10);
    gz_error(a1, -1, v11);
    return -1;
  }
  else
  {
    *(_DWORD *)(a1 + 52) = 1;
  }
  return result;
}


//======================================================================
// sub_1DEBDE
// address: 0x001DEBDE   size: 0x44 (68 bytes)
//======================================================================
ssize_t __fastcall sub_1DEBDE(_DWORD *a1, unsigned int a2, unsigned int a3)
{
  int v3; // r2
  ssize_t result; // r0
  int v6; // r2
  int v7; // r1
  int v8; // r5
  int i; // r3
  unsigned int v10[2]; // [sp+4h] [bp-8h] BYREF

  v10[0] = a2;
  v10[1] = a3;
  v3 = a1[22];
  if ( v3 != 0 )
  {
    v7 = a1[8];
    v8 = a1[21];
    for ( i = 0; i != v3; ++i )
      *(_BYTE *)(v7 + i) = *(_BYTE *)(v8 + i);
  }
  result = sub_1DEB8C((int)a1, a1[8] + a1[22], a1[6] - a1[22], v10);
  if ( result != -1 )
  {
    v6 = a1[8];
    a1[22] += v10[0];
    a1[21] = v6;
    return 0;
  }
  return result;
}


//======================================================================
// sub_1DEC24
// address: 0x001DEC24   size: 0x10E (270 bytes)
//======================================================================
int __fastcall sub_1DEC24(int a1, unsigned int a2, unsigned int a3)
{
  size_t v4; // r6
  void *v5; // r0
  void *v6; // r7
  void *v7; // r0
  void *v8; // r0
  int v9; // r0
  int result; // r0
  size_t v11; // r2
  int v12; // r3
  int v13; // r3
  void *v14; // r0
  int v15; // [sp+4h] [bp-8h]

  v15 = a1 + 84;
  if ( *(_DWORD *)(a1 + 24) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 28);
    v5 = j_malloc(v4);
    *(_DWORD *)(a1 + 32) = v5;
    v6 = v5;
    v7 = j_malloc(2 * v4);
    *(_DWORD *)(a1 + 36) = v7;
    if ( v6 == nullptr )
    {
      if ( v7 != nullptr )
        j_free(v7);
      goto LABEL_7;
    }
    if ( v7 == nullptr )
    {
LABEL_7:
      v8 = *(void **)(a1 + 32);
      if ( v8 != nullptr )
        j_free(v8);
      v9 = a1;
      goto LABEL_12;
    }
    *(_DWORD *)(a1 + 24) = v4;
    *(_DWORD *)(a1 + 116) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    *(_DWORD *)(a1 + 88) = 0;
    *(_DWORD *)(a1 + 84) = 0;
    if ( inflateInit2_(v15, 31, "1.2.7", 56) != 0 )
    {
      j_free(*(void **)(a1 + 36));
      j_free(*(void **)(a1 + 32));
      *(_DWORD *)(a1 + 24) = 0;
      v9 = a1;
LABEL_12:
      gz_error(v9, -4, "out of memory");
      return -1;
    }
  }
  if ( *(_DWORD *)(a1 + 88) > 1u )
    goto LABEL_15;
  v12 = *(_DWORD *)(a1 + 76);
  if ( v12 != 0 && v12 != -5 || *(_DWORD *)(a1 + 52) == 0 && sub_1DEBDE((_DWORD *)a1, a2, a3) == -1 )
    return -1;
  result = 0;
  if ( *(_DWORD *)(a1 + 88) != 0 )
  {
LABEL_15:
    v11 = *(_DWORD *)(a1 + 88);
    if ( v11 > 1 && *(_BYTE *)(v13 = *(_DWORD *)(a1 + 84)) == 31 && *(unsigned __int8 *)(v13 + 1) == 139 )
    {
      inflateReset(v15);
      *(_DWORD *)(a1 + 44) = 2;
      *(_DWORD *)(a1 + 40) = 0;
      return 0;
    }
    else
    {
      result = *(_DWORD *)(a1 + 40);
      if ( result != 0 )
      {
        v14 = *(void **)(a1 + 36);
        *(_DWORD *)(a1 + 4) = v14;
        if ( v11 != 0 )
        {
          j_memcpy(v14, *(const void **)(a1 + 84), v11);
          *(_DWORD *)a1 = *(_DWORD *)(a1 + 88);
          *(_DWORD *)(a1 + 88) = 0;
        }
        *(_DWORD *)(a1 + 44) = 1;
        *(_DWORD *)(a1 + 40) = 1;
        return 0;
      }
      else
      {
        *(_DWORD *)(a1 + 88) = 0;
        *(_DWORD *)(a1 + 52) = 1;
        *(_DWORD *)a1 = 0;
      }
    }
  }
  return result;
}


//======================================================================
// sub_1DED40
// address: 0x001DED40   size: 0xAE (174 bytes)
//======================================================================
int __fastcall sub_1DED40(_DWORD *a1, unsigned int a2)
{
  int v2; // r6
  _DWORD *v4; // r7
  int v5; // r5
  int v6; // r3
  int v7; // r0
  int v8; // r0
  int v9; // r1
  const char *v10; // r2
  int result; // r0
  int v12; // r3
  int v13; // r2

  v2 = a1[25];
  v4 = a1 + 21;
  v5 = 0;
  while ( 1 )
  {
    if ( a1[22] == 0 )
    {
      v6 = a1[19];
      if ( v6 != 0 && v6 != -5 )
        return -1;
      if ( a1[13] == 0 && sub_1DEBDE(a1, a2, 0) == -1 )
        return -1;
    }
    if ( a1[22] == 0 )
      break;
    v7 = inflate(v4, 0);
    v5 = v7;
    switch ( v7 )
    {
      case -2:
      case 2:
        v8 = (int)a1;
        v9 = -2;
        v10 = "internal error: inflate stream corrupt";
LABEL_13:
        gz_error(v8, v9, v10);
        return -1;
      case -4:
        v8 = (int)a1;
        v9 = v5;
        v10 = "out of memory";
        goto LABEL_13;
      case -3:
        v10 = (const char *)a1[27];
        if ( v10 == nullptr )
          v10 = "compressed data error";
        v8 = (int)a1;
        v9 = -3;
        goto LABEL_13;
      default:
        break;
    }
    if ( a1[25] == 0 || v7 == 1 )
      goto LABEL_23;
  }
  gz_error((int)a1, -5, "unexpected end of file");
LABEL_23:
  result = 0;
  v12 = v2 - a1[25];
  v13 = a1[24];
  *a1 = v12;
  a1[1] = v13 - v12;
  if ( v5 == 1 )
    a1[11] = 0;
  return result;
}


//======================================================================
// sub_1DEE00
// address: 0x001DEE00   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_1DEE00(unsigned int *a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r3

  while ( 1 )
  {
    v4 = a1[11];
    if ( v4 == 1 )
      break;
    if ( v4 == 2 )
    {
      a1[25] = 2 * a1[6];
      a1[24] = a1[9];
      if ( sub_1DED40(a1, a2) == -1 )
        return -1;
    }
    else if ( v4 == 0 )
    {
      if ( sub_1DEC24((int)a1, a2, a3) == -1 )
        return -1;
      if ( a1[11] == 0 )
        return 0;
    }
    a3 = *a1;
    if ( *a1 == 0 )
    {
      if ( a1[13] == 0 )
        continue;
      a3 = a1[22];
      if ( a3 != 0 )
        continue;
    }
    return 0;
  }
  if ( sub_1DEB8C((int)a1, a1[9], 2 * a1[6], a1) == -1 )
    return -1;
  a1[1] = a1[9];
  return 0;
}


//======================================================================
// sub_1DEE6E
// address: 0x001DEE6E   size: 0x4A (74 bytes)
//======================================================================
int __fastcall sub_1DEE6E(unsigned int *a1, unsigned int a2)
{
  signed int v3; // r5
  int v4; // r2
  unsigned int v5; // r3
  unsigned int v6; // r1
  unsigned int v7; // r2
  unsigned int v8; // r2
  int result; // r0

  v3 = a2;
  while ( v3 != 0 )
  {
    v4 = *a1;
    if ( *a1 != 0 )
    {
      if ( (*a1 & 0x80000000) != 0 || (v5 = *a1, v4 > v3) )
        v5 = v3;
      v6 = a1[1];
      *a1 = v4 - v5;
      v7 = v6 + v5;
      a2 = a1[2];
      a1[1] = v7;
      v3 -= v5;
      a1[2] = a2 + v5;
    }
    else
    {
      v8 = a1[13];
      if ( v8 != 0 )
      {
        result = a1[22];
        if ( result == 0 )
          return result;
      }
      result = sub_1DEE00(a1, a2, v8);
      if ( result == -1 )
        return result;
    }
  }
  return 0;
}


//======================================================================
// sub_1DF224
// address: 0x001DF224   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_1DF224(int a1)
{
  size_t v1; // r7
  void *v3; // r6
  int v4; // r0
  void *v5; // r0
  int result; // r0
  int v7; // r3
  int v8; // r3
  int v9; // [sp+4h] [bp-10h]

  v1 = *(_DWORD *)(a1 + 28);
  v3 = j_malloc(v1);
  *(_DWORD *)(a1 + 32) = v3;
  if ( v3 == nullptr )
  {
    v4 = a1;
LABEL_8:
    gz_error(v4, -4, "out of memory");
    return -1;
  }
  if ( *(_DWORD *)(a1 + 40) == 0 )
  {
    v5 = j_malloc(v1);
    *(_DWORD *)(a1 + 36) = v5;
    if ( v5 == nullptr )
    {
      j_free(v3);
      v4 = a1;
      goto LABEL_8;
    }
    v9 = *(_DWORD *)(a1 + 64);
    *(_DWORD *)(a1 + 116) = 0;
    *(_DWORD *)(a1 + 120) = 0;
    *(_DWORD *)(a1 + 124) = 0;
    if ( deflateInit2_((_DWORD *)(a1 + 84), *(_DWORD *)(a1 + 60), 8, 31, 8, v9, "1.2.7", 56) != 0 )
    {
      j_free(*(void **)(a1 + 36));
      j_free(*(void **)(a1 + 32));
      v4 = a1;
      goto LABEL_8;
    }
  }
  v7 = *(_DWORD *)(a1 + 28);
  result = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 24) = v7;
  if ( result != 0 )
    return 0;
  *(_DWORD *)(a1 + 100) = v7;
  v8 = *(_DWORD *)(a1 + 36);
  *(_DWORD *)(a1 + 96) = v8;
  *(_DWORD *)(a1 + 4) = v8;
  return result;
}


//======================================================================
// sub_1DF2DC
// address: 0x001DF2DC   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall sub_1DF2DC(int a1, unsigned int a2)
{
  int v4; // r5
  ssize_t v5; // r0
  int v6; // r1
  _BYTE *v7; // r1
  _BYTE *v8; // r3
  int v9; // r7
  ssize_t v10; // r0
  int *v11; // r0
  char *v12; // r2
  int v13; // r0
  int v14; // r7
  int v15; // r0
  _DWORD *v17; // [sp+4h] [bp-8h]

  if ( *(_DWORD *)(a1 + 24) != 0 || (v4 = sub_1DF224(a1)) != -1 )
  {
    v4 = *(_DWORD *)(a1 + 40);
    if ( v4 != 0 )
    {
      v5 = j_write(*(_DWORD *)(a1 + 16), *(const void **)(a1 + 84), *(_DWORD *)(a1 + 88));
      if ( v5 >= 0 && v5 == *(_DWORD *)(a1 + 88) )
      {
        v4 = 0;
        *(_DWORD *)(a1 + 88) = 0;
      }
      else
      {
LABEL_17:
        v11 = (int *)j___errno();
        v12 = j_strerror(*v11);
        v6 = -1;
        v13 = a1;
LABEL_23:
        gz_error(v13, v6, v12);
        return -1;
      }
    }
    else
    {
      v17 = (_DWORD *)(a1 + 84);
      v6 = 0;
      do
      {
        if ( *(_DWORD *)(a1 + 100) == 0 || a2 != 0 && (a2 != 4 || v6 == 1) )
        {
          v7 = *(_BYTE **)(a1 + 4);
          v8 = *(_BYTE **)(a1 + 96);
          v9 = v8 - v7;
          if ( v8 != v7 )
          {
            v10 = j_write(*(_DWORD *)(a1 + 16), v7, v8 - v7);
            if ( v10 < 0 || v10 != v9 )
              goto LABEL_17;
          }
          if ( *(_DWORD *)(a1 + 100) == 0 )
          {
            *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 24);
            *(_DWORD *)(a1 + 96) = *(_DWORD *)(a1 + 36);
          }
          *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 96);
        }
        v14 = *(_DWORD *)(a1 + 100);
        deflate((int)v17, a2);
        v6 = v15;
        if ( v15 == -2 )
        {
          v13 = a1;
          v12 = "internal error: deflate stream corrupt";
          goto LABEL_23;
        }
      }
      while ( v14 != *(_DWORD *)(a1 + 100) );
      if ( a2 == 4 )
        deflateReset(v17);
    }
  }
  return v4;
}


//======================================================================
// sub_1DF3A8
// address: 0x001DF3A8   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_1DF3A8(int a1, signed int a2)
{
  int v4; // r3
  signed int v6; // r5
  int v7; // r3
  int v8; // r2

  if ( *(_DWORD *)(a1 + 88) != 0 && sub_1DF2DC(a1, 0) == -1 )
    return -1;
  v4 = 1;
  while ( a2 != 0 )
  {
    v6 = *(_DWORD *)(a1 + 24);
    if ( v6 < 0 || v6 > a2 )
      v6 = a2;
    if ( v4 != 0 )
      j_memset(*(void **)(a1 + 32), 0, v6);
    v7 = *(_DWORD *)(a1 + 32);
    v8 = *(_DWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 88) = v6;
    *(_DWORD *)(a1 + 84) = v7;
    *(_DWORD *)(a1 + 8) = v8 + v6;
    if ( sub_1DF2DC(a1, 0) == -1 )
      return -1;
    a2 -= v6;
    v4 = 0;
  }
  return 0;
}


//======================================================================
// sub_1DF84C
// address: 0x001DF84C   size: 0x802 (2050 bytes)
//======================================================================
// [Hex-Rays could not decompile this function - linear disassembly follows]
//   001DF84C  LDR     R0, [R4]
//   001DF84E  SUBS    R0, #0xB; switch 19 cases
//   001DF850  CMP     R0, #0x12
//   001DF852  BLS     loc_1DF858
//   001DF854  BL      loc_1E0038; jumptable 001DF858 default case
//   001DF858  BL      __gnu_thumb1_case_uhi; switch jump
//   001DF85C  DCW 0x13; jump table for switch statement
//   001DF85E  DCW 0x3EE
//   001DF860  DCW 0x56
//   001DF862  DCW 0x3EE
//   001DF864  DCW 0x3EE
//   001DF866  DCW 0xBF
//   001DF868  DCW 0x3EE
//   001DF86A  DCW 0x3EE
//   001DF86C  DCW 0x3EE
//   001DF86E  DCW 0x248
//   001DF870  DCW 0x3EE
//   001DF872  DCW 0x3EE
//   001DF874  DCW 0x3EE
//   001DF876  DCW 0x3EE
//   001DF878  DCW 0x3EE
//   001DF87A  DCW 0x3EE
//   001DF87C  DCW 0x3EE
//   001DF87E  DCW 0x3E1
//   001DF880  DCW 0x3F0
//   001DF882  LDR     R2, [R4,#4]; jumptable 001DF858 case 11
//   001DF884  CMP     R2, #0
//   001DF886  BEQ     loc_1DF8AA
//   001DF888  MOVS    R3, #7
//   001DF88A  MOVS    R2, R6
//   001DF88C  ANDS    R2, R3
//   001DF88E  BICS    R6, R3
//   001DF890  LSRS    R7, R2
//   001DF892  MOVS    R3, #0x1C
//   001DF894  B       loc_1DFFAC
//   001DF896  CMP     R5, #0
//   001DF898  BEQ     loc_1DF8B0
//   001DF89A  LDR     R3, [SP,#arg_44]
//   001DF89C  SUBS    R5, #1
//   001DF89E  ADDS    R2, R3, #1
//   001DF8A0  STR     R2, [SP,#arg_44]; void *
//   001DF8A2  LDRB    R3, [R3]
//   001DF8A4  LSLS    R3, R6
//   001DF8A6  ADDS    R7, R7, R3
//   001DF8A8  ADDS    R6, #8
//   001DF8AA  CMP     R6, #2
//   001DF8AC  BLS     loc_1DF896
//   001DF8AE  B       loc_1DF8BE
//   001DF8B0  LDR     R0, [SP,#arg_24]
//   001DF8B2  ADD     R1, SP, #arg_44
//   001DF8B4  LDR     R3, [SP,#arg_20]
//   001DF8B6  BLX     R3
//   001DF8B8  SUBS    R5, R0, #0
//   001DF8BA  BNE     loc_1DF89A
//   001DF8BC  B       loc_1DFF60
//   001DF8BE  MOVS    R3, #1
//   001DF8C0  ANDS    R3, R7
//   001DF8C2  STR     R3, [R4,#4]
//   001DF8C4  LSRS    R2, R7, #1; int
//   001DF8C6  MOVS    R3, #3
//   001DF8C8  ANDS    R3, R2
//   001DF8CA  CMP     R3, #2
//   001DF8CC  BEQ     loc_1DF8F2
//   001DF8CE  CMP     R3, #3
//   001DF8D0  BEQ     loc_1DF8F6
//   001DF8D2  CMP     R3, #1
//   001DF8D4  BEQ     loc_1DF8DA
//   001DF8D6  MOVS    R3, #0xD
//   001DF8D8  B       loc_1DF900
//   001DF8DA  LDR     R3, =(asc_43176C - 0x1DF8E0); "`\a"
//   001DF8DC  ADD     R3, PC; "`\a"
//   001DF8DE  STR     R3, [R4,#0x4C]
//   001DF8E0  MOVS    R3, #9
//   001DF8E2  STR     R3, [R4,#0x54]
//   001DF8E4  LDR     R3, =(unk_431F6C - 0x1DF8EA)
//   001DF8E6  ADD     R3, PC; unk_431F6C
//   001DF8E8  STR     R3, [R4,#0x50]
//   001DF8EA  MOVS    R3, #5
//   001DF8EC  STR     R3, [R4,#0x58]
//   001DF8EE  MOVS    R3, #0x14
//   001DF8F0  B       loc_1DF900
//   001DF8F2  MOVS    R3, #0x10
//   001DF8F4  B       loc_1DF900
//   001DF8F6  LDR     R3, =(aInvalidBlockTy - 0x1DF8FE); "invalid block type"
//   001DF8F8  LDR     R0, [SP,#arg_18]; int
//   001DF8FA  ADD     R3, PC; "invalid block type"
//   001DF8FC  STR     R3, [R0,#0x18]
//   001DF8FE  MOVS    R3, #0x1D; int
//   001DF900  STR     R3, [R4]
//   001DF902  LSRS    R7, R2, #2
//   001DF904  SUBS    R6, #3
//   001DF906  B       sub_1DF84C
//   001DF908  MOVS    R3, #7; jumptable 001DF858 case 13
//   001DF90A  MOVS    R2, R6
//   001DF90C  ANDS    R2, R3
//   001DF90E  LSRS    R7, R2
//   001DF910  BICS    R6, R3
//   001DF912  CMP     R6, #0x1F
//   001DF914  BHI     loc_1DF93A
//   001DF916  CMP     R5, #0
//   001DF918  BNE     loc_1DF928
//   001DF91A  LDR     R0, [SP,#arg_24]
//   001DF91C  ADD     R1, SP, #arg_44
//   001DF91E  LDR     R2, [SP,#arg_20]
//   001DF920  BLX     R2
//   001DF922  SUBS    R5, R0, #0
//   001DF924  BNE     loc_1DF928
//   001DF926  B       loc_1DFF60
//   001DF928  LDR     R3, [SP,#arg_44]
//   001DF92A  SUBS    R5, #1
//   001DF92C  ADDS    R2, R3, #1
//   001DF92E  STR     R2, [SP,#arg_44]
//   001DF930  LDRB    R3, [R3]
//   001DF932  LSLS    R3, R6
//   001DF934  ADDS    R7, R7, R3
//   001DF936  ADDS    R6, #8
//   001DF938  B       loc_1DF912
//   001DF93A  LDR     R1, =0xFFFF
//   001DF93C  LSLS    R3, R7, #0x10
//   001DF93E  LSRS    R2, R7, #0x10
//   001DF940  LSRS    R3, R3, #0x10
//   001DF942  EORS    R2, R1
//   001DF944  CMP     R3, R2
//   001DF946  BEQ     loc_1DF94E
//   001DF948  LDR     R3, =(aInvalidStoredB - 0x1DF94E); "invalid stored block lengths"
//   001DF94A  ADD     R3, PC; "invalid stored block lengths"
//   001DF94C  B       loc_1DFCE2
//   001DF94E  STR     R3, [R4,#0x40]
//   001DF950  LDR     R6, [R4,#0x40]
//   001DF952  CMP     R6, #0
//   001DF954  BEQ     loc_1DF9C0
//   001DF956  CMP     R5, #0
//   001DF958  BNE     loc_1DF968
//   001DF95A  LDR     R0, [SP,#arg_24]
//   001DF95C  ADD     R1, SP, #arg_44
//   001DF95E  LDR     R2, [SP,#arg_20]
//   001DF960  BLX     R2
//   001DF962  SUBS    R5, R0, #0
//   001DF964  BNE     loc_1DF968
//   001DF966  B       loc_1DFF60
//   001DF968  LDR     R3, [SP,#arg_14]
//   001DF96A  CMP     R3, #0
//   001DF96C  BNE     loc_1DF988
//   001DF96E  LDR     R1, [R4,#0x28]
//   001DF970  LDR     R0, [R4,#0x34]
//   001DF972  LDR     R3, [SP,#arg_34]
//   001DF974  STR     R1, [SP,#arg_14]
//   001DF976  STR     R0, [SP,#arg_1C]
//   001DF978  STR     R1, [R4,#0x2C]
//   001DF97A  LDR     R0, [SP,#arg_60]
//   001DF97C  LDR     R1, [SP,#arg_1C]
//   001DF97E  LDR     R2, [SP,#arg_14]
//   001DF980  BLX     R3
//   001DF982  CMP     R0, #0
//   001DF984  BEQ     loc_1DF988
//   001DF986  B       loc_1E0040
//   001DF988  SUBS    R3, R5, #0
//   001DF98A  CMP     R3, R6
//   001DF98C  BLS     loc_1DF990
//   001DF98E  MOVS    R3, R6
//   001DF990  LDR     R0, [SP,#arg_14]
//   001DF992  SUBS    R6, R3, #0
//   001DF994  CMP     R6, R0
//   001DF996  BLS     loc_1DF99A
//   001DF998  MOVS    R6, R0
//   001DF99A  MOVS    R2, R6; size_t
//   001DF99C  LDR     R1, [SP,#arg_44]; void *
//   001DF99E  LDR     R0, [SP,#arg_1C]; void *
//   001DF9A0  BL      j_memcpy
//   001DF9A4  LDR     R1, [SP,#arg_44]
//   001DF9A6  LDR     R2, [SP,#arg_14]
//   001DF9A8  LDR     R0, [R4,#0x40]
//   001DF9AA  ADDS    R3, R1, R6
//   001DF9AC  STR     R3, [SP,#arg_44]
//   001DF9AE  LDR     R3, [SP,#arg_1C]
//   001DF9B0  SUBS    R2, R2, R6
//   001DF9B2  SUBS    R5, R5, R6
//   001DF9B4  ADDS    R3, R3, R6
//   001DF9B6  SUBS    R6, R0, R6
//   001DF9B8  STR     R2, [SP,#arg_14]
//   001DF9BA  STR     R3, [SP,#arg_1C]
//   001DF9BC  STR     R6, [R4,#0x40]
//   001DF9BE  B       loc_1DF950
//   001DF9C0  MOVS    R3, #0xB
//   001DF9C2  STR     R3, [R4]
//   001DF9C4  B       loc_1DF84A
//   001DF9C6  CMP     R5, #0
//   001DF9C8  BEQ     loc_1DF9E0
//   001DF9CA  LDR     R3, [SP,#arg_44]
//   001DF9CC  SUBS    R5, #1
//   001DF9CE  ADDS    R2, R3, #1
//   001DF9D0  STR     R2, [SP,#arg_44]; void *
//   001DF9D2  LDRB    R3, [R3]
//   001DF9D4  LSLS    R3, R6
//   001DF9D6  ADDS    R7, R7, R3
//   001DF9D8  ADDS    R6, #8
//   001DF9DA  CMP     R6, #0xD; jumptable 001DF858 case 16
//   001DF9DC  BLS     loc_1DF9C6
//   001DF9DE  B       loc_1DF9EE
//   001DF9E0  LDR     R0, [SP,#arg_24]
