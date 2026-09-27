// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl

//======================================================================
// anl::map3D(int,anl::TArray3D<double> &,anl::CImplicitModuleBase &,anl::SMappingRanges &)
// address: 0x0031B818   size: 0x1A (26 bytes)
//======================================================================
int anl::map3D()
{
  return sub_31B832();
}


//======================================================================
// anl::mapRGBA3D(int,anl::TArray3D<TVec4D<float>> &,anl::CRGBAModuleBase &,anl::SMappingRanges &)
// address: 0x0031C338   size: 0x1C (28 bytes)
//======================================================================
int anl::mapRGBA3D()
{
  return sub_31C354();
}


//======================================================================
// anl::saveDoubleArray(char *,anl::TArray2D<double> *)
// address: 0x0031CE90   size: 0x14E (334 bytes)
//======================================================================
void *__fastcall anl::saveDoubleArray(char *a1, _DWORD *a2)
{
  int v3; // r7
  int v4; // r0
  int v5; // r0
  int i; // r5
  int v7; // r2
  double v8; // r6
  int v11; // [sp+0h] [bp-124h]
  int v12; // [sp+4h] [bp-120h]
  _BYTE v13[2]; // [sp+10h] [bp-114h] BYREF
  char v14; // [sp+12h] [bp-112h]
  _WORD v15[4]; // [sp+14h] [bp-110h] BYREF
  _BYTE v16[40]; // [sp+1Ch] [bp-108h] BYREF
  _BYTE v17[204]; // [sp+44h] [bp-E0h] BYREF
  _BYTE v18[12]; // [sp+110h] [bp-14h] BYREF

  if ( a2 != nullptr )
  {
    v3 = a2[2];
    v12 = a2[1];
    LOBYTE(v15[0]) = v12;
    HIBYTE(v15[0]) = v12 / 256;
    HIBYTE(v15[1]) = (unsigned __int16)(((unsigned int)(v3 >> 31) >> 24) + v3) >> 8;
    v15[2] = 24;
    LOBYTE(v15[1]) = v3;
    j_memset(v18, 0, sizeof(v18));
    v18[2] = 2;
    sub_3BA704(v16, a1, 4);
    if ( sub_3A69D8(v17) == 0 )
    {
      v4 = sub_3B452C((int)&dword_55EA18, "Could not open file ");
      v5 = sub_3B452C(v4, a1);
      sub_3B4108(v5);
      goto LABEL_4;
    }
    sub_3B401C(v16, v18, 12);
    sub_3B401C(v16, v15, 6);
    v11 = v3 - 1;
LABEL_6:
    if ( v11 >= 0 )
    {
      for ( i = 0; ; ++i )
      {
        if ( i >= v12 )
        {
          --v11;
          goto LABEL_6;
        }
        v7 = a2[1];
        if ( i >= v7 || v11 >= a2[2] || *a2 == 0 )
          goto LABEL_16;
        v8 = *(double *)(*a2 + 8 * (v7 * v11 + i));
        if ( v8 >= 1.0 )
        {
          v8 = 1.0;
          goto LABEL_17;
        }
        if ( v8 <= 0.0 )
LABEL_16:
          v8 = 0.0;
LABEL_17:
        v14 = (unsigned int)(v8 * 255.0);
        v13[1] = v14;
        v13[0] = v14;
        sub_3B401C(v16, v13, 3);
      }
    }
    sub_3BAA20(v16);
LABEL_4:
    sub_3B982C(v16);
  }
  return &_stack_chk_guard;
}


//======================================================================
// anl::saveRGBAArray(char *,anl::TArray2D<TVec4D<float>> *)
// address: 0x0031D008   size: 0x16E (366 bytes)
//======================================================================
void *__fastcall anl::saveRGBAArray(char *a1, _DWORD *a2)
{
  int v3; // r0
  int v4; // r0
  int v5; // r7
  int v6; // r0
  int v7; // r0
  int v8; // r3
  float *v9; // r3
  float v10; // r0
  float v11; // r4
  int i; // [sp+4h] [bp-128h]
  float v15; // [sp+8h] [bp-124h]
  float v16; // [sp+Ch] [bp-120h]
  int v17; // [sp+10h] [bp-11Ch]
  _BYTE v18[4]; // [sp+18h] [bp-114h] BYREF
  _WORD v19[4]; // [sp+1Ch] [bp-110h] BYREF
  _BYTE v20[40]; // [sp+24h] [bp-108h] BYREF
  _BYTE v21[204]; // [sp+4Ch] [bp-E0h] BYREF
  _BYTE v22[12]; // [sp+118h] [bp-14h] BYREF

  if ( a2 != nullptr )
  {
    v4 = a2[1];
    v5 = a2[2];
    HIBYTE(v19[0]) = v4 / 256;
    v17 = v4;
    LOBYTE(v19[0]) = v4;
    HIBYTE(v19[1]) = (unsigned __int16)(((unsigned int)(v5 >> 31) >> 24) + v5) >> 8;
    v19[2] = 32;
    LOBYTE(v19[1]) = v5;
    j_memset(v22, 0, sizeof(v22));
    v22[2] = 2;
    sub_3BA704(v20, a1, 4);
    if ( sub_3A69D8(v21) != 0 )
    {
      sub_3B401C(v20, v22, 12);
      sub_3B401C(v20, v19, 6);
      while ( --v5 >= 0 )
      {
        for ( i = 0; i < v17; ++i )
        {
          v8 = a2[1];
          if ( i < v8 && v5 < a2[2] && *a2 != 0 )
          {
            v9 = (float *)(*a2 + 16 * (v8 * v5 + i));
            v10 = *v9;
            v16 = v9[1];
            v15 = v9[2];
            v11 = v9[3];
          }
          else
          {
            v11 = 0.0;
            v15 = 0.0;
            v16 = 0.0;
            v10 = 0.0;
          }
          v18[2] = (unsigned int)(float)(v10 * 255.0);
          v18[1] = (unsigned int)(float)(v16 * 255.0);
          v18[0] = (unsigned int)(float)(v15 * 255.0);
          v18[3] = (unsigned int)(float)(v11 * 255.0);
          sub_3B401C(v20, v18, 4);
        }
      }
      sub_3BAA20(v20);
    }
    else
    {
      v6 = sub_3B452C((int)&dword_55EA18, "Could not open file ");
      v7 = sub_3B452C(v6, a1);
      sub_3B4108(v7);
    }
    sub_3B982C(v20);
  }
  else
  {
    v3 = sub_3B452C((int)&dword_55EA18, "Error");
    sub_3B4108(v3);
  }
  return &_stack_chk_guard;
}


//======================================================================
// anl::map2D(int,anl::TArray2D<double> &,anl::CImplicitModuleBase &,anl::SMappingRanges &,double)
// address: 0x0031D1B8   size: 0x16 (22 bytes)
//======================================================================
int anl::map2D()
{
  return sub_31D1CE();
}


//======================================================================
// anl::map2DNoZ(int,anl::TArray2D<double> &,anl::CImplicitModuleBase &,anl::SMappingRanges &)
// address: 0x0031DCE0   size: 0x428 (1064 bytes)
//======================================================================
_DWORD *__fastcall anl::map2DNoZ(_DWORD *result, _DWORD *a2, int a3, int a4)
{
  int i; // r4
  unsigned int j; // r4
  int v7; // r3
  double v8; // r4
  double v9; // r0
  int v10; // r0
  int v11; // r1
  double v12; // r2
  double v13; // r4
  double v14; // r0
  double v15; // r2
  double v16; // r4
  double v17; // kr20_8
  double v18; // r2
  double v19; // r4
  double v20; // r4
  double v21; // [sp+8h] [bp-74h]
  double v22; // [sp+18h] [bp-64h]
  double v23; // [sp+18h] [bp-64h]
  double v24; // [sp+18h] [bp-64h]
  double v25; // [sp+20h] [bp-5Ch]
  double v26; // [sp+20h] [bp-5Ch]
  double v27; // [sp+20h] [bp-5Ch]
  double v28; // [sp+28h] [bp-54h]
  double v29; // [sp+28h] [bp-54h]
  double v30; // [sp+28h] [bp-54h]
  double v31; // [sp+30h] [bp-4Ch]
  double v32; // [sp+30h] [bp-4Ch]
  double v33; // [sp+30h] [bp-4Ch]
  double v35; // [sp+40h] [bp-3Ch]
  double v36; // [sp+40h] [bp-3Ch]
  double v37; // [sp+40h] [bp-3Ch]
  int v38; // [sp+48h] [bp-34h]
  int v39; // [sp+4Ch] [bp-30h]
  double v40; // [sp+50h] [bp-2Ch]
  double v41; // [sp+50h] [bp-2Ch]
  double v42; // [sp+58h] [bp-24h]
  double v43; // [sp+58h] [bp-24h]
  unsigned int v45; // [sp+64h] [bp-18h]
  unsigned int v46; // [sp+68h] [bp-14h]
  _DWORD *v47; // [sp+6Ch] [bp-10h]
  double v48; // [sp+70h] [bp-Ch]

  v47 = result;
  v45 = a2[1];
  v46 = a2[2];
  for ( i = 0; ; i = v38 + 1 )
  {
    v38 = i;
    if ( i == v45 )
      break;
    for ( j = 0; ; j = v39 + 1 )
    {
      v39 = j;
      if ( j == v46 )
        break;
      v28 = (double)(unsigned int)v38 / (double)v45;
      v35 = (double)j / (double)v46;
      switch ( (unsigned int)v47 )
      {
        case 0u:
          v8 = *(double *)a4 + v28 * (*(double *)(a4 + 24) - *(double *)a4);
          v9 = *(double *)(a4 + 8) + v35 * (*(double *)(a4 + 32) - *(double *)(a4 + 8));
          v10 = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 12))(
                  a3,
                  *(_DWORD *)(*(_DWORD *)a3 + 12),
                  LODWORD(v8),
                  HIDWORD(v8),
                  LODWORD(v9),
                  HIDWORD(v9));
          break;
        case 1u:
          HIDWORD(v12) = *(_DWORD *)(a4 + 52);
          LODWORD(v22) = *(_DWORD *)(a4 + 48);
          __SET_PAIR__(HIDWORD(v22), LODWORD(v12), *(_QWORD *)(a4 + 48));
          v25 = *(double *)(a4 + 72) - v12;
          v31 = *(double *)(a4 + 8);
          v13 = v28 * (*(double *)(a4 + 24) - *(double *)a4) / v25 * 6.283184;
          v29 = j_cos(v13);
          v14 = j_sin(v13);
          v21 = v31 + v35 * (*(double *)(a4 + 32) - v31);
          v10 = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 16))(
                  a3,
                  *(_DWORD *)(*(_DWORD *)a3 + 16),
                  COERCE_UNSIGNED_INT64(v22 + v29 * v25 / 6.283184),
                  HIDWORD(COERCE_UNSIGNED_INT64(v22 + v29 * v25 / 6.283184)),
                  COERCE_UNSIGNED_INT64(v22 + v14 * v25 / 6.283184),
                  HIDWORD(COERCE_UNSIGNED_INT64(v22 + v14 * v25 / 6.283184)),
                  LODWORD(v21),
                  HIDWORD(v21));
          break;
        case 2u:
          v32 = *(double *)a4;
          HIDWORD(v15) = *(_DWORD *)(a4 + 60);
          LODWORD(v23) = *(_DWORD *)(a4 + 56);
          __SET_PAIR__(HIDWORD(v23), LODWORD(v15), *(_QWORD *)(a4 + 56));
          v26 = *(double *)(a4 + 80) - v15;
          v16 = v35 * (*(double *)(a4 + 32) - *(double *)(a4 + 8)) / v26 * 6.283184;
          v36 = j_cos(v16);
          v40 = j_sin(v16);
          v17 = v32 + v28 * (*(double *)(a4 + 24) - v32);
          v10 = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 16))(
                  a3,
                  *(_DWORD *)(*(_DWORD *)a3 + 16),
                  LODWORD(v17),
                  HIDWORD(v17),
                  COERCE_UNSIGNED_INT64(v23 + v36 * v26 / 6.283184),
                  HIDWORD(COERCE_UNSIGNED_INT64(v23 + v36 * v26 / 6.283184)),
                  COERCE_UNSIGNED_INT64(v23 + v40 * v26 / 6.283184),
                  HIDWORD(COERCE_UNSIGNED_INT64(v23 + v40 * v26 / 6.283184)));
          break;
        case 4u:
          HIDWORD(v18) = *(_DWORD *)(a4 + 52);
          LODWORD(v24) = *(_DWORD *)(a4 + 48);
          __SET_PAIR__(HIDWORD(v24), LODWORD(v18), *(_QWORD *)(a4 + 48));
          v33 = *(double *)(a4 + 72) - v18;
          v27 = *(double *)(a4 + 56);
          v41 = *(double *)(a4 + 80) - v27;
          v42 = v35 * (*(double *)(a4 + 32) - *(double *)(a4 + 8));
          v19 = v28 * (*(double *)(a4 + 24) - *(double *)a4) / v33 * 6.283184;
          v30 = j_cos(v19);
          v37 = j_sin(v19);
          v20 = v42 / v41 * 6.283184;
          v43 = j_cos(v20);
          v48 = j_sin(v20);
          v10 = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 20))(
                  a3,
                  *(_DWORD *)(*(_DWORD *)a3 + 20),
                  COERCE_UNSIGNED_INT64(v24 + v30 * v33 / 6.283184),
                  HIDWORD(COERCE_UNSIGNED_INT64(v24 + v30 * v33 / 6.283184)),
                  COERCE_UNSIGNED_INT64(v24 + v37 * v33 / 6.283184),
                  HIDWORD(COERCE_UNSIGNED_INT64(v24 + v37 * v33 / 6.283184)),
                  COERCE_UNSIGNED_INT64(v27 + v43 * v41 / 6.283184),
                  HIDWORD(COERCE_UNSIGNED_INT64(v27 + v43 * v41 / 6.283184)),
                  COERCE_UNSIGNED_INT64(v27 + v48 * v41 / 6.283184),
                  HIDWORD(COERCE_UNSIGNED_INT64(v27 + v48 * v41 / 6.283184)));
          break;
        default:
          v10 = 0;
          v11 = 0;
          break;
      }
      result = anl::TArray2D<double>::set(a2, v38, v39, v7, v10, v11);
    }
  }
  return result;
}


//======================================================================
// anl::mapRGBA2D(int,anl::TArray2D<TVec4D<float>> &,anl::CRGBAModuleBase &,anl::SMappingRanges &,double)
// address: 0x0031E140   size: 0x18 (24 bytes)
//======================================================================
int anl::mapRGBA2D()
{
  return sub_31E158();
}


//======================================================================
// anl::mapRGBA2DNoZ(int,anl::TArray2D<TVec4D<float>> &,anl::CRGBAModuleBase &,anl::SMappingRanges &)
// address: 0x0031EC80   size: 0x442 (1090 bytes)
//======================================================================
_DWORD *__fastcall anl::mapRGBA2DNoZ(_DWORD *result, _DWORD *a2, int a3, int a4)
{
  int i; // r4
  unsigned int j; // r4
  double v7; // r4
  double v8; // r0
  double v9; // r2
  double v10; // r4
  double v11; // r0
  double v12; // r2
  double v13; // r4
  double v14; // kr20_8
  double v15; // r2
  double v16; // r4
  double v17; // r4
  int v18; // r3
  int v19; // r0
  int v20; // r1
  int v21; // r2
  double v22; // [sp+8h] [bp-84h]
  double v23; // [sp+18h] [bp-74h]
  double v24; // [sp+18h] [bp-74h]
  double v25; // [sp+18h] [bp-74h]
  double v26; // [sp+20h] [bp-6Ch]
  double v27; // [sp+20h] [bp-6Ch]
  double v28; // [sp+20h] [bp-6Ch]
  double v29; // [sp+28h] [bp-64h]
  double v30; // [sp+28h] [bp-64h]
  double v31; // [sp+28h] [bp-64h]
  double v32; // [sp+30h] [bp-5Ch]
  double v33; // [sp+30h] [bp-5Ch]
  double v34; // [sp+30h] [bp-5Ch]
  double v36; // [sp+40h] [bp-4Ch]
  double v37; // [sp+40h] [bp-4Ch]
  double v38; // [sp+40h] [bp-4Ch]
  int v39; // [sp+48h] [bp-44h]
  int v40; // [sp+4Ch] [bp-40h]
  double v41; // [sp+50h] [bp-3Ch]
  double v42; // [sp+50h] [bp-3Ch]
  double v43; // [sp+58h] [bp-34h]
  double v44; // [sp+58h] [bp-34h]
  unsigned int v46; // [sp+64h] [bp-28h]
  unsigned int v47; // [sp+68h] [bp-24h]
  _DWORD *v48; // [sp+6Ch] [bp-20h]
  double v49; // [sp+70h] [bp-1Ch]
  int v50; // [sp+78h] [bp-14h] BYREF
  int v51; // [sp+7Ch] [bp-10h]
  int v52; // [sp+80h] [bp-Ch]
  int v53; // [sp+84h] [bp-8h]

  v48 = result;
  v46 = a2[1];
  v47 = a2[2];
  for ( i = 0; ; i = v39 + 1 )
  {
    v39 = i;
    if ( i == v46 )
      break;
    for ( j = 0; ; j = v40 + 1 )
    {
      v40 = j;
      if ( j == v47 )
        break;
      v26 = (double)(unsigned int)v39 / (double)v46;
      v36 = (double)j / (double)v47;
      switch ( (unsigned int)v48 )
      {
        case 0u:
          v7 = *(double *)a4 + v26 * (*(double *)(a4 + 24) - *(double *)a4);
          v8 = *(double *)(a4 + 8) + v36 * (*(double *)(a4 + 32) - *(double *)(a4 + 8));
          (*(void (__fastcall **)(int *, int, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 8))(
            &v50,
            a3,
            LODWORD(v7),
            HIDWORD(v7),
            LODWORD(v8),
            HIDWORD(v8));
          goto LABEL_12;
        case 1u:
          HIDWORD(v9) = *(_DWORD *)(a4 + 52);
          LODWORD(v23) = *(_DWORD *)(a4 + 48);
          __SET_PAIR__(HIDWORD(v23), LODWORD(v9), *(_QWORD *)(a4 + 48));
          v29 = *(double *)(a4 + 72) - v9;
          v32 = *(double *)(a4 + 8);
          v10 = v26 * (*(double *)(a4 + 24) - *(double *)a4) / v29 * 6.283184;
          v27 = j_cos(v10);
          v11 = j_sin(v10);
          v22 = v32 + v36 * (*(double *)(a4 + 32) - v32);
          (*(void (__fastcall **)(int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 12))(
            &v50,
            a3,
            COERCE_UNSIGNED_INT64(v23 + v27 * v29 / 6.283184),
            HIDWORD(COERCE_UNSIGNED_INT64(v23 + v27 * v29 / 6.283184)),
            COERCE_UNSIGNED_INT64(v23 + v11 * v29 / 6.283184),
            HIDWORD(COERCE_UNSIGNED_INT64(v23 + v11 * v29 / 6.283184)),
            LODWORD(v22),
            HIDWORD(v22));
          goto LABEL_12;
        case 2u:
          v33 = *(double *)a4;
          HIDWORD(v12) = *(_DWORD *)(a4 + 60);
          LODWORD(v24) = *(_DWORD *)(a4 + 56);
          __SET_PAIR__(HIDWORD(v24), LODWORD(v12), *(_QWORD *)(a4 + 56));
          v30 = *(double *)(a4 + 80) - v12;
          v13 = v36 * (*(double *)(a4 + 32) - *(double *)(a4 + 8)) / v30 * 6.283184;
          v37 = j_cos(v13);
          v41 = j_sin(v13);
          v14 = v33 + v26 * (*(double *)(a4 + 24) - v33);
          (*(void (__fastcall **)(int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 12))(
            &v50,
            a3,
            LODWORD(v14),
            HIDWORD(v14),
            COERCE_UNSIGNED_INT64(v24 + v37 * v30 / 6.283184),
            HIDWORD(COERCE_UNSIGNED_INT64(v24 + v37 * v30 / 6.283184)),
            COERCE_UNSIGNED_INT64(v24 + v41 * v30 / 6.283184),
            HIDWORD(COERCE_UNSIGNED_INT64(v24 + v41 * v30 / 6.283184)));
          goto LABEL_12;
        case 4u:
          HIDWORD(v15) = *(_DWORD *)(a4 + 52);
          LODWORD(v25) = *(_DWORD *)(a4 + 48);
          __SET_PAIR__(HIDWORD(v25), LODWORD(v15), *(_QWORD *)(a4 + 48));
          v34 = *(double *)(a4 + 72) - v15;
          v31 = *(double *)(a4 + 56);
          v42 = *(double *)(a4 + 80) - v31;
          v43 = v36 * (*(double *)(a4 + 32) - *(double *)(a4 + 8));
          v16 = v26 * (*(double *)(a4 + 24) - *(double *)a4) / v34 * 6.283184;
          v28 = j_cos(v16);
          v38 = j_sin(v16);
          v17 = v43 / v42 * 6.283184;
          v44 = j_cos(v17);
          v49 = j_sin(v17);
          (*(void (__fastcall **)(int *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a3 + 16))(
            &v50,
            a3,
            COERCE_UNSIGNED_INT64(v25 + v28 * v34 / 6.283184),
            HIDWORD(COERCE_UNSIGNED_INT64(v25 + v28 * v34 / 6.283184)),
            COERCE_UNSIGNED_INT64(v25 + v38 * v34 / 6.283184),
            HIDWORD(COERCE_UNSIGNED_INT64(v25 + v38 * v34 / 6.283184)),
            COERCE_UNSIGNED_INT64(v31 + v44 * v42 / 6.283184),
            HIDWORD(COERCE_UNSIGNED_INT64(v31 + v44 * v42 / 6.283184)),
            COERCE_UNSIGNED_INT64(v31 + v49 * v42 / 6.283184),
            HIDWORD(COERCE_UNSIGNED_INT64(v31 + v49 * v42 / 6.283184)));
LABEL_12:
          v18 = v50;
          v19 = v51;
          v20 = v52;
          v21 = v53;
          break;
        default:
          v21 = 0;
          v20 = 0;
          v19 = 0;
          v18 = 0;
          break;
      }
      v50 = v18;
      v51 = v19;
      v52 = v20;
      v53 = v21;
      result = anl::TArray2D<TVec4D<float>>::set(a2, v39, v40, &v50);
    }
  }
  return result;
}


//======================================================================
// anl::min3(float,float,float)
// address: 0x00321584   size: 0x28 (40 bytes)
//======================================================================
int __fastcall anl::min3(anl *this, float a2, float a3, float a4)
{
  float v4; // r4

  v4 = *(float *)&this;
  if ( a2 < *(float *)&this )
    v4 = a2;
  if ( a3 < v4 )
    v4 = a3;
  return LODWORD(v4);
}


//======================================================================
// anl::max3(float,float,float)
// address: 0x003215AC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall anl::max3(anl *this, float a2, float a3, float a4)
{
  float v4; // r4

  v4 = *(float *)&this;
  if ( a2 > *(float *)&this )
    v4 = a2;
  if ( a3 > v4 )
    v4 = a3;
  return LODWORD(v4);
}


//======================================================================
// anl::RGBAtoHSV(TVec4D<float> &,TVec4D<float> &)
// address: 0x003215D4   size: 0xE6 (230 bytes)
//======================================================================
float __fastcall anl::RGBAtoHSV(int a1, float *a2, int a3, float a4)
{
  float v6; // r3
  float v7; // r6
  float result; // r0
  float v9; // r0
  float v10; // r0
  int v11; // r4
  float v12; // r0
  float v13; // r1
  float v14; // [sp+4h] [bp-10h]
  float v15; // [sp+4h] [bp-10h]
  float v16; // [sp+8h] [bp-Ch]
  float v17; // [sp+Ch] [bp-8h]

  v14 = COERCE_FLOAT(anl::min3(*(anl **)a1, *(float *)(a1 + 4), *(float *)(a1 + 8), a4));
  v7 = COERCE_FLOAT(anl::max3(*(anl **)a1, *(float *)(a1 + 4), *(float *)(a1 + 8), v6));
  LODWORD(result) = v7 == 0.0;
  if ( v7 == 0.0 )
  {
    v11 = *(_DWORD *)(a1 + 12);
    *a2 = 0.0;
    a2[1] = 0.0;
    *((_DWORD *)a2 + 3) = v11;
    a2[2] = 0.0;
  }
  else
  {
    v9 = v7 - v14;
    v17 = 1.0 - (float)(v14 / v7);
    v15 = *(float *)a1;
    if ( *(float *)a1 == v7 )
    {
      v10 = (float)((int)(float)((float)((float)(*(float *)(a1 + 4) - *(float *)(a1 + 8)) / v9) * 60.0) % 360);
    }
    else
    {
      v16 = *(float *)(a1 + 4);
      if ( v16 == v7 )
      {
        v12 = (float)((float)(*(float *)(a1 + 8) - v15) / v9) * 60.0;
        v13 = 120.0;
      }
      else
      {
        v12 = (float)((float)(v15 - v16) / v9) * 60.0;
        v13 = 240.0;
      }
      v10 = v12 + v13;
    }
    result = v10 / 360.0;
    *a2 = result;
    a2[2] = v7;
    a2[1] = v17;
    a2[3] = *(float *)(a1 + 12);
  }
  return result;
}


//======================================================================
// anl::HSVtoRGBA(TVec4D<float> &,TVec4D<float> &)
// address: 0x003216CC   size: 0x116 (278 bytes)
//======================================================================
bool __fastcall anl::HSVtoRGBA(int a1, int a2)
{
  float v4; // r6
  float v5; // r4
  _BOOL4 result; // r0
  int v7; // r5
  int v8; // r3
  float v9; // r5
  float v10; // r6
  float v11; // r5
  float v12; // r3
  float v13; // r3
  float v14; // [sp+4h] [bp-18h]
  float v15; // [sp+8h] [bp-14h]
  float v16; // [sp+8h] [bp-14h]
  float v17; // [sp+Ch] [bp-10h]
  float v18; // [sp+10h] [bp-Ch]
  int v19; // [sp+14h] [bp-8h]

  v4 = *(float *)a1;
  v5 = *(float *)(a1 + 8);
  v15 = *(float *)(a1 + 4);
  result = v15 == 0.0;
  v7 = *(_DWORD *)(a1 + 12);
  v19 = v7;
  if ( v15 == 0.0 )
  {
    *(float *)a2 = v5;
    *(float *)(a2 + 4) = v5;
    *(float *)(a2 + 8) = v5;
    v8 = v7;
  }
  else
  {
    v9 = (float)(v4 * 360.0) / 60.0;
    v14 = j_floorf(v9);
    v18 = v9 - v14;
    v10 = v5 * (float)(1.0 - v15);
    v17 = v5 * (float)(1.0 - (float)(v15 * (float)(1.0 - (float)(v9 - v14))));
    result = v14 == 0.0;
    v11 = v17;
    if ( v14 != 0.0 )
    {
      v11 = v5 * (float)(1.0 - (float)(v15 * v18));
      v16 = v11;
      result = v14 == 1.0;
      if ( v14 == 1.0 )
      {
        v12 = v5;
        v5 = v11;
        v11 = v12;
      }
      else
      {
        result = v14 == 2.0;
        if ( v14 == 2.0 )
        {
          v11 = v5;
          v5 = v10;
          v10 = v17;
        }
        else
        {
          result = v14 == 3.0;
          if ( v14 == 3.0 )
          {
            v13 = v5;
            v5 = v10;
            v10 = v13;
          }
          else
          {
            result = v14 == 4.0;
            v11 = v10;
            if ( v14 == 4.0 )
            {
              v10 = v5;
              v5 = v17;
            }
            else
            {
              v10 = v16;
            }
          }
        }
      }
    }
    v8 = v19;
    *(float *)a2 = v5;
    *(float *)(a2 + 4) = v11;
    *(float *)(a2 + 8) = v10;
  }
  *(_DWORD *)(a2 + 12) = v8;
  return result;
}


//======================================================================
// anl::noInterp(double)
// address: 0x00321948   size: 0x6 (6 bytes)
//======================================================================
__int64 __fastcall anl::noInterp(anl *this, double a2)
{
  return 0;
}


//======================================================================
// anl::linearInterp(double)
// address: 0x00321958   size: 0x2 (2 bytes)
//======================================================================
void __fastcall anl::linearInterp(anl *this, double a2)
{
  ;
}


//======================================================================
// anl::hermiteInterp(double)
// address: 0x00321960   size: 0x38 (56 bytes)
//======================================================================
double __fastcall anl::hermiteInterp(double this, double a2)
{
  return this * this * (3.0 - (this + this));
}


//======================================================================
// anl::quinticInterp(double)
// address: 0x003219A0   size: 0x50 (80 bytes)
//======================================================================
double __fastcall anl::quinticInterp(double this, double a2)
{
  return this * this * this * (this * (this * 6.0 - 15.0) + 10.0);
}


//======================================================================
// anl::value_noise2D(double,double,unsigned int,double (*)(double))
// address: 0x00322AA0   size: 0x80 (128 bytes)
//======================================================================
double __fastcall anl::value_noise2D(double this, double a2, double a3, unsigned int a4, double (*a5)(double))
{
  int v6; // r5
  int v7; // r4
  double v8; // r0
  double v11; // [sp+30h] [bp-Ch]

  v6 = fast_floor(this);
  v7 = fast_floor(a2);
  v11 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a3))(
            COERCE_UNSIGNED_INT64(this - (double)v6),
            HIDWORD(COERCE_UNSIGNED_INT64(this - (double)v6))));
  v8 = ((double (__fastcall *)(_DWORD, _DWORD))HIDWORD(a3))(
         COERCE_UNSIGNED_INT64(a2 - (double)v7),
         HIDWORD(COERCE_UNSIGNED_INT64(a2 - (double)v7)));
  return interp_XY_2(this, a2, v11, v8, v6, v6 + 1, v7, v7 + 1, LODWORD(a3), value_noise_2);
}


//======================================================================
// anl::value_noise3D(double,double,double,unsigned int,double (*)(double))
// address: 0x00322B24   size: 0xBC (188 bytes)
//======================================================================
double __fastcall anl::value_noise3D(
        double this,
        double a2,
        double a3,
        double a4,
        unsigned int a5,
        double (*a6)(double))
{
  int v7; // r5
  int v8; // r4
  double v9; // r0
  int v11; // [sp+44h] [bp-20h]
  double v13; // [sp+50h] [bp-14h]
  double v14; // [sp+58h] [bp-Ch]

  v11 = fast_floor(this);
  v7 = fast_floor(a2);
  v8 = fast_floor(a3);
  v13 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a4))(
            COERCE_UNSIGNED_INT64(this - (double)v11),
            HIDWORD(COERCE_UNSIGNED_INT64(this - (double)v11))));
  v14 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a4))(
            COERCE_UNSIGNED_INT64(a2 - (double)v7),
            HIDWORD(COERCE_UNSIGNED_INT64(a2 - (double)v7))));
  v9 = ((double (__fastcall *)(_DWORD, _DWORD))HIDWORD(a4))(
         COERCE_UNSIGNED_INT64(a3 - (double)v8),
         HIDWORD(COERCE_UNSIGNED_INT64(a3 - (double)v8)));
  return interp_XYZ_3(this, a2, a3, v13, v14, v9, v11, v11 + 1, v7, v7 + 1, v8, v8 + 1, LODWORD(a4), value_noise_3);
}


//======================================================================
// anl::value_noise4D(double,double,double,double,unsigned int,double (*)(double))
// address: 0x00322BE4   size: 0xF4 (244 bytes)
//======================================================================
double __fastcall anl::value_noise4D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        unsigned int a6,
        double (*a7)(double))
{
  int v7; // r4
  int v8; // r7
  int v9; // r6
  int v10; // r5
  double v11; // r0
  double v15; // [sp+68h] [bp-1Ch]
  double v16; // [sp+70h] [bp-14h]
  double v17; // [sp+78h] [bp-Ch]

  v7 = fast_floor(this);
  v8 = fast_floor(a2);
  v9 = fast_floor(a3);
  v10 = fast_floor(a4);
  v15 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a5))(
            COERCE_UNSIGNED_INT64(this - (double)v7),
            HIDWORD(COERCE_UNSIGNED_INT64(this - (double)v7))));
  v16 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a5))(
            COERCE_UNSIGNED_INT64(a2 - (double)v8),
            HIDWORD(COERCE_UNSIGNED_INT64(a2 - (double)v8))));
  v17 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a5))(
            COERCE_UNSIGNED_INT64(a3 - (double)v9),
            HIDWORD(COERCE_UNSIGNED_INT64(a3 - (double)v9))));
  v11 = ((double (__fastcall *)(_DWORD, _DWORD))HIDWORD(a5))(
          COERCE_UNSIGNED_INT64(a4 - (double)v10),
          HIDWORD(COERCE_UNSIGNED_INT64(a4 - (double)v10)));
  return interp_XYZW_4(
           this,
           a2,
           a3,
           a4,
           v15,
           v16,
           v17,
           v11,
           v7,
           v7 + 1,
           v8,
           v8 + 1,
           v9,
           v9 + 1,
           v10,
           v10 + 1,
           LODWORD(a5),
           value_noise_4);
}


//======================================================================
// anl::value_noise6D(double,double,double,double,double,double,unsigned int,double (*)(double))
// address: 0x00322CDC   size: 0x16E (366 bytes)
//======================================================================
double __fastcall anl::value_noise6D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        unsigned int a8,
        double (*a9)(double))
{
  int v9; // r7
  int v10; // r6
  int v11; // r5
  int v12; // r4
  double v13; // r0
  int v15; // [sp+88h] [bp-44h]
  int v16; // [sp+8Ch] [bp-40h]
  double v19; // [sp+A0h] [bp-2Ch]
  double v20; // [sp+A8h] [bp-24h]
  double v21; // [sp+B0h] [bp-1Ch]
  double v22; // [sp+B8h] [bp-14h]
  double v23; // [sp+C0h] [bp-Ch]

  v15 = fast_floor(this);
  v16 = fast_floor(a2);
  v9 = fast_floor(a3);
  v10 = fast_floor(a4);
  v11 = fast_floor(a5);
  v12 = fast_floor(a6);
  v19 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(this - (double)v15),
            HIDWORD(COERCE_UNSIGNED_INT64(this - (double)v15))));
  v20 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(a2 - (double)v16),
            HIDWORD(COERCE_UNSIGNED_INT64(a2 - (double)v16))));
  v21 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(a3 - (double)v9),
            HIDWORD(COERCE_UNSIGNED_INT64(a3 - (double)v9))));
  v22 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(a4 - (double)v10),
            HIDWORD(COERCE_UNSIGNED_INT64(a4 - (double)v10))));
  v23 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(a5 - (double)v11),
            HIDWORD(COERCE_UNSIGNED_INT64(a5 - (double)v11))));
  v13 = ((double (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
          COERCE_UNSIGNED_INT64(a6 - (double)v12),
          HIDWORD(COERCE_UNSIGNED_INT64(a6 - (double)v12)));
  return interp_XYZWUV_6(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           v19,
           v20,
           v21,
           v22,
           v23,
           v13,
           v15,
           v15 + 1,
           v16,
           v16 + 1,
           v9,
           v9 + 1,
           v10,
           v10 + 1,
           v11,
           v11 + 1,
           v12,
           v12 + 1,
           LODWORD(a7),
           value_noise_6);
}


//======================================================================
// anl::gradient_noise2D(double,double,unsigned int,double (*)(double))
// address: 0x00322E50   size: 0x80 (128 bytes)
//======================================================================
double __fastcall anl::gradient_noise2D(double this, double a2, double a3, unsigned int a4, double (*a5)(double))
{
  int v6; // r5
  int v7; // r4
  double v8; // r0
  double v11; // [sp+30h] [bp-Ch]

  v6 = fast_floor(this);
  v7 = fast_floor(a2);
  v11 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a3))(
            COERCE_UNSIGNED_INT64(this - (double)v6),
            HIDWORD(COERCE_UNSIGNED_INT64(this - (double)v6))));
  v8 = ((double (__fastcall *)(_DWORD, _DWORD))HIDWORD(a3))(
         COERCE_UNSIGNED_INT64(a2 - (double)v7),
         HIDWORD(COERCE_UNSIGNED_INT64(a2 - (double)v7)));
  return interp_XY_2(this, a2, v11, v8, v6, v6 + 1, v7, v7 + 1, LODWORD(a3), grad_noise_2);
}


//======================================================================
// anl::gradient_noise3D(double,double,double,unsigned int,double (*)(double))
// address: 0x00322ED4   size: 0xBC (188 bytes)
//======================================================================
double __fastcall anl::gradient_noise3D(
        double this,
        double a2,
        double a3,
        double a4,
        unsigned int a5,
        double (*a6)(double))
{
  int v7; // r5
  int v8; // r4
  double v9; // r0
  int v11; // [sp+44h] [bp-20h]
  double v13; // [sp+50h] [bp-14h]
  double v14; // [sp+58h] [bp-Ch]

  v11 = fast_floor(this);
  v7 = fast_floor(a2);
  v8 = fast_floor(a3);
  v13 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a4))(
            COERCE_UNSIGNED_INT64(this - (double)v11),
            HIDWORD(COERCE_UNSIGNED_INT64(this - (double)v11))));
  v14 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a4))(
            COERCE_UNSIGNED_INT64(a2 - (double)v7),
            HIDWORD(COERCE_UNSIGNED_INT64(a2 - (double)v7))));
  v9 = ((double (__fastcall *)(_DWORD, _DWORD))HIDWORD(a4))(
         COERCE_UNSIGNED_INT64(a3 - (double)v8),
         HIDWORD(COERCE_UNSIGNED_INT64(a3 - (double)v8)));
  return interp_XYZ_3(this, a2, a3, v13, v14, v9, v11, v11 + 1, v7, v7 + 1, v8, v8 + 1, LODWORD(a4), grad_noise_3);
}


//======================================================================
// anl::gradient_noise4D(double,double,double,double,unsigned int,double (*)(double))
// address: 0x00322F94   size: 0xF4 (244 bytes)
//======================================================================
double __fastcall anl::gradient_noise4D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        unsigned int a6,
        double (*a7)(double))
{
  int v7; // r4
  int v8; // r7
  int v9; // r6
  int v10; // r5
  double v11; // r0
  double v15; // [sp+68h] [bp-1Ch]
  double v16; // [sp+70h] [bp-14h]
  double v17; // [sp+78h] [bp-Ch]

  v7 = fast_floor(this);
  v8 = fast_floor(a2);
  v9 = fast_floor(a3);
  v10 = fast_floor(a4);
  v15 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a5))(
            COERCE_UNSIGNED_INT64(this - (double)v7),
            HIDWORD(COERCE_UNSIGNED_INT64(this - (double)v7))));
  v16 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a5))(
            COERCE_UNSIGNED_INT64(a2 - (double)v8),
            HIDWORD(COERCE_UNSIGNED_INT64(a2 - (double)v8))));
  v17 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a5))(
            COERCE_UNSIGNED_INT64(a3 - (double)v9),
            HIDWORD(COERCE_UNSIGNED_INT64(a3 - (double)v9))));
  v11 = ((double (__fastcall *)(_DWORD, _DWORD))HIDWORD(a5))(
          COERCE_UNSIGNED_INT64(a4 - (double)v10),
          HIDWORD(COERCE_UNSIGNED_INT64(a4 - (double)v10)));
  return interp_XYZW_4(
           this,
           a2,
           a3,
           a4,
           v15,
           v16,
           v17,
           v11,
           v7,
           v7 + 1,
           v8,
           v8 + 1,
           v9,
           v9 + 1,
           v10,
           v10 + 1,
           LODWORD(a5),
           grad_noise_4);
}


//======================================================================
// anl::gradient_noise6D(double,double,double,double,double,double,unsigned int,double (*)(double))
// address: 0x0032308C   size: 0x16E (366 bytes)
//======================================================================
double __fastcall anl::gradient_noise6D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        unsigned int a8,
        double (*a9)(double))
{
  int v9; // r7
  int v10; // r6
  int v11; // r5
  int v12; // r4
  double v13; // r0
  int v15; // [sp+88h] [bp-44h]
  int v16; // [sp+8Ch] [bp-40h]
  double v19; // [sp+A0h] [bp-2Ch]
  double v20; // [sp+A8h] [bp-24h]
  double v21; // [sp+B0h] [bp-1Ch]
  double v22; // [sp+B8h] [bp-14h]
  double v23; // [sp+C0h] [bp-Ch]

  v15 = fast_floor(this);
  v16 = fast_floor(a2);
  v9 = fast_floor(a3);
  v10 = fast_floor(a4);
  v11 = fast_floor(a5);
  v12 = fast_floor(a6);
  v19 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(this - (double)v15),
            HIDWORD(COERCE_UNSIGNED_INT64(this - (double)v15))));
  v20 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(a2 - (double)v16),
            HIDWORD(COERCE_UNSIGNED_INT64(a2 - (double)v16))));
  v21 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(a3 - (double)v9),
            HIDWORD(COERCE_UNSIGNED_INT64(a3 - (double)v9))));
  v22 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(a4 - (double)v10),
            HIDWORD(COERCE_UNSIGNED_INT64(a4 - (double)v10))));
  v23 = COERCE_DOUBLE(
          ((__int64 (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
            COERCE_UNSIGNED_INT64(a5 - (double)v11),
            HIDWORD(COERCE_UNSIGNED_INT64(a5 - (double)v11))));
  v13 = ((double (__fastcall *)(_DWORD, _DWORD))HIDWORD(a7))(
          COERCE_UNSIGNED_INT64(a6 - (double)v12),
          HIDWORD(COERCE_UNSIGNED_INT64(a6 - (double)v12)));
  return interp_XYZWUV_6(
           this,
           a2,
           a3,
           a4,
           a5,
           a6,
           v19,
           v20,
           v21,
           v22,
           v23,
           v13,
           v15,
           v15 + 1,
           v16,
           v16 + 1,
           v9,
           v9 + 1,
           v10,
           v10 + 1,
           v11,
           v11 + 1,
           v12,
           v12 + 1,
           LODWORD(a7),
           grad_noise_6);
}


//======================================================================
// anl::gradval_noise2D(double,double,unsigned int,double (*)(double))
// address: 0x00323200   size: 0x42 (66 bytes)
//======================================================================
double __fastcall anl::gradval_noise2D(double this, double a2, double a3, unsigned int a4, double (*a5)(double))
{
  double v7; // r0
  double v8; // r0
  unsigned int v10; // [sp+8h] [bp-Ch]
  double v11; // [sp+8h] [bp-Ch]
  double (*v12)(double); // [sp+Ch] [bp-8h]

  v7 = anl::value_noise2D(this, a2, a3, v10, v12);
  v8 = anl::gradient_noise2D(this, a2, a3, LODWORD(v7), (double (*)(double))HIDWORD(v7));
  return v11 + v8;
}


//======================================================================
// anl::gradval_noise3D(double,double,double,unsigned int,double (*)(double))
// address: 0x00323242   size: 0x54 (84 bytes)
//======================================================================
double __fastcall anl::gradval_noise3D(
        double this,
        double a2,
        double a3,
        double a4,
        unsigned int a5,
        double (*a6)(double))
{
  double v8; // r0
  double v9; // r0
  unsigned int v11; // [sp+10h] [bp-Ch]
  double v12; // [sp+10h] [bp-Ch]
  double (*v13)(double); // [sp+14h] [bp-8h]

  v8 = anl::value_noise3D(this, a2, a3, a4, v11, v13);
  v9 = anl::gradient_noise3D(this, a2, a3, a4, LODWORD(v8), (double (*)(double))HIDWORD(v8));
  return v12 + v9;
}


//======================================================================
// anl::gradval_noise4D(double,double,double,double,unsigned int,double (*)(double))
// address: 0x00323296   size: 0x64 (100 bytes)
//======================================================================
double __fastcall anl::gradval_noise4D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        unsigned int a6,
        double (*a7)(double))
{
  double v9; // r0
  double v10; // r0
  unsigned int v12; // [sp+18h] [bp-Ch]
  double v13; // [sp+18h] [bp-Ch]
  double (*v14)(double); // [sp+1Ch] [bp-8h]

  v9 = anl::value_noise4D(this, a2, a3, a4, a5, v12, v14);
  v10 = anl::gradient_noise4D(this, a2, a3, a4, a5, LODWORD(v9), (double (*)(double))HIDWORD(v9));
  return v13 + v10;
}


//======================================================================
// anl::gradval_noise6D(double,double,double,double,double,double,unsigned int,double (*)(double))
// address: 0x003232FA   size: 0x84 (132 bytes)
//======================================================================
double __fastcall anl::gradval_noise6D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        unsigned int a8,
        double (*a9)(double))
{
  double v11; // r0
  double v12; // r0
  unsigned int v14; // [sp+28h] [bp-Ch]
  double v15; // [sp+28h] [bp-Ch]
  double (*v16)(double); // [sp+2Ch] [bp-8h]

  v11 = anl::value_noise6D(this, a2, a3, a4, a5, a6, a7, v14, v16);
  v12 = anl::gradient_noise6D(this, a2, a3, a4, a5, a6, a7, LODWORD(v11), (double (*)(double))HIDWORD(v11));
  return v15 + v12;
}


//======================================================================
// anl::white_noise2D(double,double,unsigned int,double (*)(double))
// address: 0x00323380   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall anl::white_noise2D(double this, double a2, double a3, unsigned int a4, double (*a5)(double))
{
  return whitenoise_lut[(unsigned __int8)compute_hash_double_2(this, a2, LODWORD(a3))];
}


//======================================================================
// anl::white_noise3D(double,double,double,unsigned int,double (*)(double))
// address: 0x003233A4   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall anl::white_noise3D(
        double this,
        double a2,
        double a3,
        double a4,
        unsigned int a5,
        double (*a6)(double))
{
  return whitenoise_lut[(unsigned __int8)compute_hash_double_3(this, a2, a3, LODWORD(a4))];
}


//======================================================================
// anl::white_noise4D(double,double,double,double,unsigned int,double (*)(double))
// address: 0x003233D4   size: 0x32 (50 bytes)
//======================================================================
__int64 __fastcall anl::white_noise4D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        unsigned int a6,
        double (*a7)(double))
{
  return whitenoise_lut[(unsigned __int8)compute_hash_double_4(this, a2, a3, a4, LODWORD(a5))];
}


//======================================================================
// anl::white_noise6D(double,double,double,double,double,double,unsigned int,double (*)(double))
// address: 0x0032340C   size: 0x42 (66 bytes)
//======================================================================
__int64 __fastcall anl::white_noise6D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        unsigned int a8,
        double (*a9)(double))
{
  return whitenoise_lut[(unsigned __int8)compute_hash_double_6(this, a2, a3, a4, a5, a6, LODWORD(a7))];
}


//======================================================================
// anl::cellular_function2D(double,double,unsigned int,double *,double *)
// address: 0x003234F8   size: 0x156 (342 bytes)
//======================================================================
double *__fastcall anl::cellular_function2D(double this, double a2, double a3, double *a4, double *a5, double *a6)
{
  int v8; // r0
  int v9; // r3
  _DWORD *v10; // r0
  double *result; // r0
  int v12; // r0
  double v13; // r0
  int i; // [sp+10h] [bp-34h]
  int j; // [sp+14h] [bp-30h]
  double v16; // [sp+18h] [bp-2Ch]
  double v17; // [sp+20h] [bp-24h]
  double v18; // [sp+28h] [bp-1Ch]
  int v19; // [sp+30h] [bp-14h]
  int v20; // [sp+34h] [bp-10h]

  v19 = fast_floor(this);
  v8 = fast_floor(a2);
  v9 = 0;
  v20 = v8;
  do
  {
    v10 = (_DWORD *)(HIDWORD(a3) + v9 * 8);
    *v10 = 0;
    v10[1] = 1090021872;
    result = &a4[v9++];
    *(_DWORD *)result = 0;
    *((_DWORD *)result + 1) = 0;
  }
  while ( v9 != 4 );
  for ( i = v20 - 3; i <= v20 + 3; ++i )
  {
    for ( j = v19 - 3; j <= v19 + 3; ++j )
    {
      v16 = (double)j + value_noise_2(this, a2, j, i, LODWORD(a3));
      v18 = (double)i + value_noise_2(this, a2, j, i, LODWORD(a3) + 1);
      v17 = (v16 - this) * (v16 - this) + (v18 - a2) * (v18 - a2);
      LODWORD(v16) = fast_floor(v16);
      v12 = fast_floor(v18);
      v13 = value_noise_2(this, a2, SLODWORD(v16), v12, LODWORD(a3) + 3);
      result = (double *)add_dist((double *)HIDWORD(a3), a4, v17, v13);
    }
  }
  return result;
}


//======================================================================
// anl::cellular_function3D(double,double,double,unsigned int,double *,double *)
// address: 0x00323660   size: 0x20C (524 bytes)
//======================================================================
double *__fastcall anl::cellular_function3D(
        double this,
        double a2,
        double a3,
        double a4,
        double *a5,
        double *a6,
        double *a7)
{
  int v9; // r0
  int v10; // r3
  _DWORD *v11; // r0
  double *result; // r0
  int i; // r2
  int j; // r3
  int k; // r1
  int v16; // r0
  double v17; // r0
  double v18; // [sp+18h] [bp-4Ch]
  int v19; // [sp+20h] [bp-44h]
  int v20; // [sp+24h] [bp-40h]
  double v21; // [sp+28h] [bp-3Ch]
  double v22; // [sp+30h] [bp-34h]
  double v23; // [sp+38h] [bp-2Ch]
  int v24; // [sp+40h] [bp-24h]
  int v25; // [sp+44h] [bp-20h]
  int v26; // [sp+48h] [bp-1Ch]
  int v27; // [sp+4Ch] [bp-18h]

  v25 = fast_floor(this);
  v26 = fast_floor(a2);
  v9 = fast_floor(a3);
  v10 = 0;
  v27 = v9;
  do
  {
    v11 = (_DWORD *)(HIDWORD(a4) + v10 * 8);
    *v11 = 0;
    v11[1] = 1090021872;
    result = &a5[v10++];
    *(_DWORD *)result = 0;
    *((_DWORD *)result + 1) = 0;
  }
  while ( v10 != 4 );
  for ( i = v27 - 2; ; i = v19 + 1 )
  {
    v19 = i;
    if ( i > v27 + 2 )
      break;
    for ( j = v26 - 2; ; j = v20 + 1 )
    {
      v20 = j;
      if ( j > v26 + 2 )
        break;
      for ( k = v25 - 2; ; k = v24 + 1 )
      {
        v24 = k;
        if ( k > v25 + 2 )
          break;
        v21 = (double)k + value_noise_3(this, a2, a3, k, v20, v19, LODWORD(a4));
        v22 = (double)v20 + value_noise_3(this, a2, a3, v24, v20, v19, LODWORD(a4) + 1);
        v23 = (double)v19 + value_noise_3(this, a2, a3, v24, v20, v19, LODWORD(a4) + 2);
        v18 = (v21 - this) * (v21 - this) + (v22 - a2) * (v22 - a2) + (v23 - a3) * (v23 - a3);
        LODWORD(v21) = fast_floor(v21);
        LODWORD(v22) = fast_floor(v22);
        v16 = fast_floor(v23);
        v17 = value_noise_3(this, a2, a3, SLODWORD(v21), SLODWORD(v22), v16, LODWORD(a4) + 3);
        result = (double *)add_dist((double *)HIDWORD(a4), a5, v18, v17);
      }
    }
  }
  return result;
}


//======================================================================
// anl::cellular_function4D(double,double,double,double,unsigned int,double *,double *)
// address: 0x00323880   size: 0x2E4 (740 bytes)
//======================================================================
double *__fastcall anl::cellular_function4D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        double *a6,
        double *a7,
        double *a8)
{
  int v10; // r0
  int v11; // r3
  _DWORD *v12; // r0
  double *result; // r0
  int i; // r2
  int v15; // r0
  double v16; // r0
  double v17; // [sp+28h] [bp-6Ch]
  int v18; // [sp+30h] [bp-64h]
  int j; // [sp+34h] [bp-60h]
  int k; // [sp+38h] [bp-5Ch]
  int m; // [sp+3Ch] [bp-58h]
  double v22; // [sp+48h] [bp-4Ch]
  double v23; // [sp+50h] [bp-44h]
  double v24; // [sp+58h] [bp-3Ch]
  double v25; // [sp+60h] [bp-34h]
  int v26; // [sp+68h] [bp-2Ch]
  int v27; // [sp+6Ch] [bp-28h]
  int v28; // [sp+70h] [bp-24h]
  int v29; // [sp+74h] [bp-20h]

  v26 = fast_floor(this);
  v27 = fast_floor(a2);
  v28 = fast_floor(a3);
  v10 = fast_floor(a4);
  v11 = 0;
  v29 = v10;
  do
  {
    v12 = (_DWORD *)(HIDWORD(a5) + v11 * 8);
    *v12 = 0;
    v12[1] = 1090021872;
    result = &a6[v11++];
    *(_DWORD *)result = 0;
    *((_DWORD *)result + 1) = 0;
  }
  while ( v11 != 4 );
  for ( i = v29 - 2; ; i = v18 + 1 )
  {
    v18 = i;
    if ( i > v29 + 2 )
      break;
    for ( j = v28 - 2; j <= v28 + 2; ++j )
    {
      for ( k = v27 - 2; k <= v27 + 2; ++k )
      {
        for ( m = v26 - 2; m <= v26 + 2; ++m )
        {
          v22 = (double)m + value_noise_4(this, a2, a3, a4, m, k, j, v18, LODWORD(a5));
          v23 = (double)k + value_noise_4(this, a2, a3, a4, m, k, j, v18, LODWORD(a5) + 1);
          v24 = (double)j + value_noise_4(this, a2, a3, a4, m, k, j, v18, LODWORD(a5) + 2);
          v25 = (double)v18 + value_noise_4(this, a2, a3, a4, m, k, j, v18, LODWORD(a5) + 3);
          v17 = (v22 - this) * (v22 - this)
              + (v23 - a2) * (v23 - a2)
              + (v24 - a3) * (v24 - a3)
              + (v25 - a4) * (v25 - a4);
          LODWORD(v22) = fast_floor(v22);
          LODWORD(v23) = fast_floor(v23);
          LODWORD(v24) = fast_floor(v24);
          v15 = fast_floor(v25);
          v16 = value_noise_4(this, a2, a3, a4, SLODWORD(v22), SLODWORD(v23), SLODWORD(v24), v15, LODWORD(a5) + 3);
          result = (double *)add_dist((double *)HIDWORD(a5), a6, v17, v16);
        }
      }
    }
  }
  return result;
}


//======================================================================
// anl::cellular_function6D(double,double,double,double,double,double,unsigned int,double *,double *)
// address: 0x00323B78   size: 0x4DA (1242 bytes)
//======================================================================
int __fastcall anl::cellular_function6D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        double *a8,
        double *a9,
        double *a10)
{
  int v11; // r4
  int result; // r0
  _DWORD *v13; // r5
  double *v14; // r5
  int i; // r4
  int k; // r4
  int n; // r4
  int v18; // r5
  int v19; // r4
  int v20; // r0
  double v21; // r0
  int v22; // [sp+40h] [bp-94h]
  int j; // [sp+44h] [bp-90h]
  int v24; // [sp+48h] [bp-8Ch]
  int m; // [sp+4Ch] [bp-88h]
  int v26; // [sp+50h] [bp-84h]
  int ii; // [sp+54h] [bp-80h]
  double v29; // [sp+60h] [bp-74h]
  double v30; // [sp+68h] [bp-6Ch]
  double v31; // [sp+70h] [bp-64h]
  double v32; // [sp+78h] [bp-5Ch]
  int v33; // [sp+80h] [bp-54h]
  int v34; // [sp+84h] [bp-50h]
  int v35; // [sp+88h] [bp-4Ch]
  int v36; // [sp+8Ch] [bp-48h]
  int v37; // [sp+90h] [bp-44h]
  int v38; // [sp+94h] [bp-40h]
  double v39; // [sp+98h] [bp-3Ch]
  double v40; // [sp+A0h] [bp-34h]
  double v41; // [sp+A8h] [bp-2Ch]

  v33 = fast_floor(this);
  v34 = fast_floor(a2);
  v35 = fast_floor(a3);
  v36 = fast_floor(a4);
  v37 = fast_floor(a5);
  v11 = 0;
  v38 = fast_floor(a6);
  result = 0;
  do
  {
    v13 = (_DWORD *)(HIDWORD(a7) + v11 * 8);
    *v13 = 0;
    v13[1] = 1090021872;
    v14 = &a8[v11++];
    *(_DWORD *)v14 = 0;
    *((_DWORD *)v14 + 1) = 0;
  }
  while ( v11 != 4 );
  for ( i = v38 - 1; ; i = v22 + 1 )
  {
    v22 = i;
    if ( i > v38 + 1 )
      break;
    for ( j = v37 - 1; j <= v37 + 1; ++j )
    {
      for ( k = v36 - 2; ; k = v24 + 1 )
      {
        v24 = k;
        if ( k > v36 + 2 )
          break;
        for ( m = v35 - 2; m <= v35 + 2; ++m )
        {
          for ( n = v34 - 2; ; n = v26 + 1 )
          {
            v26 = n;
            if ( n > v34 + 2 )
              break;
            for ( ii = v33 - 2; ii <= v33 + 2; ++ii )
            {
              v29 = (double)ii + value_noise_6(this, a2, a3, a4, a5, a6, ii, v26, m, v24, j, v22, LODWORD(a7));
              v30 = (double)v26 + value_noise_6(this, a2, a3, a4, a5, a6, ii, v26, m, v24, j, v22, LODWORD(a7) + 1);
              v31 = (double)m + value_noise_6(this, a2, a3, a4, a5, a6, ii, v26, m, v24, j, v22, LODWORD(a7) + 2);
              v39 = (double)v24 + value_noise_6(this, a2, a3, a4, a5, a6, ii, v26, m, v24, j, v22, LODWORD(a7) + 3);
              v40 = (double)j + value_noise_6(this, a2, a3, a4, a5, a6, ii, v26, m, v24, j, v22, LODWORD(a7) + 4);
              v41 = (double)v22 + value_noise_6(this, a2, a3, a4, a5, a6, ii, v26, m, v24, j, v22, LODWORD(a7) + 5);
              v32 = (v29 - this) * (v29 - this)
                  + (v30 - a2) * (v30 - a2)
                  + (v31 - a3) * (v31 - a3)
                  + (v39 - a4) * (v39 - a4)
                  + (v40 - a5) * (v40 - a5)
                  + (v41 - a6) * (v41 - a6);
              LODWORD(v29) = fast_floor(v29);
              LODWORD(v30) = fast_floor(v30);
              LODWORD(v31) = fast_floor(v31);
              v18 = fast_floor(v39);
              v19 = fast_floor(v40);
              v20 = fast_floor(v41);
              v21 = value_noise_6(
                      this,
                      a2,
                      a3,
                      a4,
                      a5,
                      a6,
                      SLODWORD(v29),
                      SLODWORD(v30),
                      SLODWORD(v31),
                      v18,
                      v19,
                      v20,
                      LODWORD(a7) + 6);
              result = add_dist((double *)HIDWORD(a7), a8, v32, v21);
            }
          }
        }
      }
    }
  }
  return result;
}


//======================================================================
// anl::simplex_noise2D(double,double,unsigned int,double (*)(double))
// address: 0x00324058   size: 0x3A0 (928 bytes)
//======================================================================
double __fastcall anl::simplex_noise2D(double this, double a2, double a3, unsigned int a4, double (*a5)(double))
{
  double v6; // r4
  double v7; // r4
  int v8; // r4
  int v9; // r5
  int v10; // r7
  double v11; // r4
  double v12; // r4
  double v13; // r6
  double v14; // r4
  double v15; // r4
  double v18; // [sp+0h] [bp-4Ch]
  double v19; // [sp+8h] [bp-44h]
  double v20; // [sp+8h] [bp-44h]
  int v21; // [sp+10h] [bp-3Ch]
  int v22; // [sp+14h] [bp-38h]
  int v23; // [sp+14h] [bp-38h]
  double v24; // [sp+18h] [bp-34h]
  double v25; // [sp+20h] [bp-2Ch]
  double v26; // [sp+28h] [bp-24h]
  double v27; // [sp+30h] [bp-1Ch]
  int v28; // [sp+3Ch] [bp-10h]

  v6 = (this + a2) * 0.366025404;
  v21 = fast_floor(this + v6);
  v22 = fast_floor(a2 + v6);
  v7 = (double)(v21 + v22) * 0.211324865;
  v19 = this - ((double)v21 - v7);
  v18 = a2 - ((double)v22 - v7);
  if ( v19 <= v18 )
  {
    v8 = 1;
    v9 = 0;
  }
  else
  {
    v8 = 0;
    v9 = 1;
  }
  v24 = v19 - (double)v9 + 0.211324865;
  v25 = v18 - (double)v8 + 0.211324865;
  v26 = v19 - 1.0 + 0.422649731;
  v27 = v18 - 1.0 + 0.422649731;
  v10 = hash_coords_2(v21, v22, LODWORD(a3));
  v28 = hash_coords_2(v21 + v9, v22 + v8, LODWORD(a3));
  v23 = hash_coords_2(v21 + 1, v22 + 1, LODWORD(a3));
  v11 = 0.5 - v19 * v19 - v18 * v18;
  if ( v11 < 0.0 )
    v20 = 0.0;
  else
    v20 = v11 * v11 * (v11 * v11) * (v19 * gradient2D_lut[2 * v10] + v18 * gradient2D_lut[2 * v10 + 1]);
  v12 = 0.5 - v24 * v24 - v25 * v25;
  if ( v12 < 0.0 )
    v13 = 0.0;
  else
    v13 = v12 * v12 * (v12 * v12) * (v24 * gradient2D_lut[2 * v28] + v25 * gradient2D_lut[2 * v28 + 1]);
  v14 = 0.5 - v26 * v26 - v27 * v27;
  if ( v14 < 0.0 )
    v15 = 0.0;
  else
    v15 = v14 * v14 * (v14 * v14) * (v26 * gradient2D_lut[2 * v23] + v27 * gradient2D_lut[2 * v23 + 1]);
  return (v20 + v13 + v15) * 70.0 * 1.42188695 + 0.001054489;
}


//======================================================================
// anl::simplex_noise3D(double,double,double,unsigned int,double (*)(double))
// address: 0x00324418   size: 0x6B6 (1718 bytes)
//======================================================================
double __fastcall anl::simplex_noise3D(
        double this,
        double a2,
        double a3,
        double a4,
        unsigned int a5,
        double (*a6)(double))
{
  double v7; // r4
  double v8; // r0
  int v9; // r4
  int v10; // r5
  int v11; // r6
  int v12; // r7
  double v13; // r4
  double v14; // r4
  double v15; // r4
  double v16; // r6
  double v17; // r4
  double v18; // r4
  double v21; // [sp+0h] [bp-8Ch]
  double v22; // [sp+0h] [bp-8Ch]
  int v23; // [sp+Ch] [bp-80h]
  double v24; // [sp+10h] [bp-7Ch]
  double v25; // [sp+10h] [bp-7Ch]
  double v26; // [sp+18h] [bp-74h]
  int v27; // [sp+20h] [bp-6Ch]
  int v28; // [sp+20h] [bp-6Ch]
  int v29; // [sp+24h] [bp-68h]
  int v30; // [sp+28h] [bp-64h]
  double v31; // [sp+30h] [bp-5Ch]
  double v32; // [sp+38h] [bp-54h]
  double v33; // [sp+40h] [bp-4Ch]
  double v34; // [sp+48h] [bp-44h]
  double v35; // [sp+50h] [bp-3Ch]
  double v36; // [sp+58h] [bp-34h]
  double v37; // [sp+60h] [bp-2Ch]
  double v38; // [sp+68h] [bp-24h]
  double v39; // [sp+70h] [bp-1Ch]
  int v40; // [sp+78h] [bp-14h]
  int v41; // [sp+7Ch] [bp-10h]
  int v42; // [sp+80h] [bp-Ch]
  int v43; // [sp+84h] [bp-8h]

  v7 = (this + a2 + a3) * 0.333333333;
  v29 = fast_floor(this + v7);
  v30 = fast_floor(a2 + v7);
  v40 = fast_floor(a3 + v7);
  v8 = (double)(v29 + v30 + v40) * 0.166666667;
  v24 = this - ((double)v29 - v8);
  v26 = a2 - ((double)v30 - v8);
  v21 = a3 - ((double)v40 - v8);
  if ( v24 < v26 )
  {
    if ( v26 < v21 )
    {
      v9 = 1;
      v11 = 0;
      v10 = 1;
      v27 = 1;
      v23 = 0;
    }
    else
    {
      if ( v24 >= v21 )
      {
        v9 = 0;
        v10 = 1;
        v11 = 1;
        v27 = 0;
        goto LABEL_14;
      }
      v9 = 1;
      v11 = 0;
      v10 = 1;
      v27 = 0;
      v23 = 1;
    }
    v12 = 0;
    goto LABEL_15;
  }
  if ( v26 >= v21 )
  {
    v9 = 0;
    v10 = 1;
    v11 = 1;
    v27 = 0;
    v23 = 0;
LABEL_10:
    v12 = v10;
    goto LABEL_15;
  }
  v9 = 1;
  v10 = 0;
  v11 = 1;
  if ( v24 < v21 )
  {
    v27 = 1;
    v23 = 0;
    goto LABEL_10;
  }
  v27 = 0;
LABEL_14:
  v23 = v10;
  v12 = v9;
LABEL_15:
  v31 = v24 - (double)v12 + 0.166666667;
  v32 = v26 - (double)v23 + 0.166666667;
  v33 = v21 - (double)v27 + 0.166666667;
  v34 = v24 - (double)v11 + 0.333333333;
  v35 = v26 - (double)v10 + 0.333333333;
  v36 = v21 - (double)v9 + 0.333333333;
  v37 = v24 - 1.0 + 0.5;
  v38 = v26 - 1.0 + 0.5;
  v39 = v21 - 1.0 + 0.5;
  v41 = hash_coords_3(v29, v30, v40, LODWORD(a4));
  v42 = hash_coords_3(v29 + v12, v30 + v23, v40 + v27, LODWORD(a4));
  v43 = hash_coords_3(v29 + v11, v30 + v10, v40 + v9, LODWORD(a4));
  v28 = hash_coords_3(v29 + 1, v30 + 1, v40 + 1, LODWORD(a4));
  v13 = 0.6 - v24 * v24 - v26 * v26 - v21 * v21;
  if ( v13 < 0.0 )
    v22 = 0.0;
  else
    v22 = v13
        * v13
        * (v13
         * v13)
        * (v24 * gradient3D_lut[3 * v41] + v26 * gradient3D_lut[3 * v41 + 1] + v21 * gradient3D_lut[3 * v41 + 2]);
  v14 = 0.6 - v31 * v31 - v32 * v32 - v33 * v33;
  if ( v14 < 0.0 )
    v25 = 0.0;
  else
    v25 = v14
        * v14
        * (v14
         * v14)
        * (v31 * gradient3D_lut[3 * v42] + v32 * gradient3D_lut[3 * v42 + 1] + v33 * gradient3D_lut[3 * v42 + 2]);
  v15 = 0.6 - v34 * v34 - v35 * v35 - v36 * v36;
  if ( v15 < 0.0 )
    v16 = 0.0;
  else
    v16 = v15
        * v15
        * (v15
         * v15)
        * (v34 * gradient3D_lut[3 * v43] + v35 * gradient3D_lut[3 * v43 + 1] + v36 * gradient3D_lut[3 * v43 + 2]);
  v17 = 0.6 - v37 * v37 - v38 * v38 - v39 * v39;
  if ( v17 < 0.0 )
    v18 = 0.0;
  else
    v18 = v17
        * v17
        * (v17
         * v17)
        * (v37 * gradient3D_lut[3 * v28] + v38 * gradient3D_lut[3 * v28 + 1] + v39 * gradient3D_lut[3 * v28 + 2]);
  return (v22 + v25 + v16 + v18) * 32.0 * 1.25086885 + 0.0003194984;
}


//======================================================================
// anl::simplex_noise4D(double,double,double,double,unsigned int,double (*)(double))
// address: 0x00324AF8   size: 0xA8C (2700 bytes)
//======================================================================
double __fastcall anl::simplex_noise4D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        unsigned int a6,
        double (*a7)(double))
{
  double v7; // r6
  double v8; // r4
  double v9; // r0
  int v10; // r2
  int v11; // r3
  int v12; // r7
  double v13; // r4
  double v14; // r4
  double v15; // r4
  double v16; // r4
  double v17; // r6
  double v18; // r4
  double v19; // r4
  signed int v21; // [sp+Ch] [bp-E0h]
  double v23; // [sp+10h] [bp-DCh]
  double v24; // [sp+10h] [bp-DCh]
  double v25; // [sp+18h] [bp-D4h]
  double v26; // [sp+18h] [bp-D4h]
  double v27; // [sp+20h] [bp-CCh]
  double v28; // [sp+28h] [bp-C4h]
  double v29; // [sp+28h] [bp-C4h]
  int v30; // [sp+30h] [bp-BCh]
  int v31; // [sp+34h] [bp-B8h]
  int v32; // [sp+38h] [bp-B4h]
  int v33; // [sp+40h] [bp-ACh]
  int v34; // [sp+40h] [bp-ACh]
  _BOOL4 v35; // [sp+44h] [bp-A8h]
  _BOOL4 v36; // [sp+48h] [bp-A4h]
  int v37; // [sp+48h] [bp-A4h]
  _BOOL4 v38; // [sp+4Ch] [bp-A0h]
  int v39; // [sp+4Ch] [bp-A0h]
  double v40; // [sp+50h] [bp-9Ch]
  double v41; // [sp+58h] [bp-94h]
  double v42; // [sp+60h] [bp-8Ch]
  double v43; // [sp+68h] [bp-84h]
  double v44; // [sp+70h] [bp-7Ch]
  double v45; // [sp+78h] [bp-74h]
  double v46; // [sp+80h] [bp-6Ch]
  double v47; // [sp+88h] [bp-64h]
  double v48; // [sp+90h] [bp-5Ch]
  double v49; // [sp+98h] [bp-54h]
  double v50; // [sp+A0h] [bp-4Ch]
  double v51; // [sp+A8h] [bp-44h]
  double v52; // [sp+B0h] [bp-3Ch]
  double v53; // [sp+B8h] [bp-34h]
  double v54; // [sp+C0h] [bp-2Ch]
  double v55; // [sp+C8h] [bp-24h]
  _BOOL4 v56; // [sp+D0h] [bp-1Ch]
  _BOOL4 v57; // [sp+D4h] [bp-18h]
  signed int v58; // [sp+D8h] [bp-14h]
  signed int v59; // [sp+DCh] [bp-10h]
  signed int v60; // [sp+E0h] [bp-Ch]
  int v61; // [sp+E4h] [bp-8h]

  v7 = this;
  v8 = (this + a2 + a3 + a4) * 0.309016994;
  v30 = fast_floor(this + v8);
  v31 = fast_floor(a2 + v8);
  v33 = fast_floor(a3 + v8);
  v32 = fast_floor(a4 + v8);
  v9 = (double)(v30 + v31 + v33 + v32) * 0.138196601;
  v28 = v7 - ((double)v30 - v9);
  v23 = a2 - ((double)v31 - v9);
  v25 = a3 - ((double)v33 - v9);
  v27 = a4 - ((double)v32 - v9);
  LODWORD(v8) = (v25 > v27) + 32 * (v28 > v23) + 16 * (v28 > v25) + 8 * (v23 > v25) + 4 * (v28 > v27) + 2 * (v23 > v27);
  HIDWORD(v7) = dword_449988[4 * LODWORD(v8)];
  v35 = SHIDWORD(v7) > 2;
  HIDWORD(v9) = dword_449988[4 * LODWORD(v8) + 1];
  v36 = SHIDWORD(v9) > 2;
  LODWORD(v8) *= 16;
  v10 = *(_DWORD *)((char *)&dword_449988[2] + LODWORD(v8));
  v38 = v10 > 2;
  v11 = *(_DWORD *)((char *)&dword_449988[3] + LODWORD(v8));
  LODWORD(v7) = v11 > 2;
  v56 = SHIDWORD(v7) > 1;
  v57 = SHIDWORD(v9) > 1;
  HIDWORD(v8) = v10 > 1;
  LODWORD(v8) = v11 > 1;
  v59 = (unsigned int)((SHIDWORD(v9) >> 31) - HIDWORD(v9)) >> 31;
  v60 = (unsigned int)((v10 >> 31) - v10) >> 31;
  v58 = (unsigned int)((SHIDWORD(v7) >> 31) - HIDWORD(v7)) >> 31;
  v21 = (unsigned int)((v11 >> 31) - v11) >> 31;
  v40 = v28 - (double)v35 + 0.138196601;
  v41 = v23 - (double)v36 + 0.138196601;
  v42 = v25 - (double)v38 + 0.138196601;
  v43 = v27 - (double)SLODWORD(v7) + 0.138196601;
  v44 = v28 - (double)v56 + 0.276393202;
  v45 = v23 - (double)v57 + 0.276393202;
  v46 = v25 - (double)SHIDWORD(v8) + 0.276393202;
  v47 = v27 - (double)SLODWORD(v8) + 0.276393202;
  v48 = v28 - (double)v58 + 0.414589803;
  v49 = v23 - (double)v59 + 0.414589803;
  v50 = v25 - (double)v60 + 0.414589803;
  v51 = v27 - (double)v21 + 0.414589803;
  v52 = v28 - 1.0 + 0.552786405;
  v53 = v23 - 1.0 + 0.552786405;
  v54 = v25 - 1.0 + 0.552786405;
  v55 = v27 - 1.0 + 0.552786405;
  v61 = hash_coords_4(v30, v31, v33, v32, LODWORD(a5));
  v12 = hash_coords_4(v30 + v35, v31 + v36, v33 + v38, v32 + LODWORD(v7), LODWORD(a5));
  v37 = hash_coords_4(v30 + v56, v31 + v57, v33 + HIDWORD(v8), v32 + LODWORD(v8), LODWORD(a5));
  v39 = hash_coords_4(v30 + v58, v31 + v59, v33 + v60, v32 + v21, LODWORD(a5));
  v34 = hash_coords_4(v30 + 1, v31 + 1, v33 + 1, v32 + 1, LODWORD(a5));
  v13 = 0.6 - v28 * v28 - v23 * v23 - v25 * v25 - v27 * v27;
  if ( v13 < 0.0 )
    v29 = 0.0;
  else
    v29 = v13
        * v13
        * (v13
         * v13)
        * (v28 * gradient4D_lut[4 * v61]
         + v23 * gradient4D_lut[4 * v61 + 1]
         + v25 * gradient4D_lut[4 * v61 + 2]
         + v27 * gradient4D_lut[4 * v61 + 3]);
  v14 = 0.6 - v40 * v40 - v41 * v41 - v42 * v42 - v43 * v43;
  if ( v14 < 0.0 )
    v24 = 0.0;
  else
    v24 = v14
        * v14
        * (v14
         * v14)
        * (v40 * gradient4D_lut[4 * v12]
         + v41 * gradient4D_lut[4 * v12 + 1]
         + v42 * gradient4D_lut[4 * v12 + 2]
         + v43 * gradient4D_lut[4 * v12 + 3]);
  v15 = 0.6 - v44 * v44 - v45 * v45 - v46 * v46 - v47 * v47;
  if ( v15 < 0.0 )
    v26 = 0.0;
  else
    v26 = v15
        * v15
        * (v15
         * v15)
        * (v44 * gradient4D_lut[4 * v37]
         + v45 * gradient4D_lut[4 * v37 + 1]
         + v46 * gradient4D_lut[4 * v37 + 2]
         + v47 * gradient4D_lut[4 * v37 + 3]);
  v16 = 0.6 - v48 * v48 - v49 * v49 - v50 * v50 - v51 * v51;
  if ( v16 < 0.0 )
    v17 = 0.0;
  else
    v17 = v16
        * v16
        * (v16
         * v16)
        * (v48 * gradient4D_lut[4 * v39]
         + v49 * gradient4D_lut[4 * v39 + 1]
         + v50 * gradient4D_lut[4 * v39 + 2]
         + v51 * gradient4D_lut[4 * v39 + 3]);
  v18 = 0.6 - v52 * v52 - v53 * v53 - v54 * v54 - v55 * v55;
  if ( v18 < 0.0 )
    v19 = 0.0;
  else
    v19 = v18
        * v18
        * (v18
         * v18)
        * (v52 * gradient4D_lut[4 * v34]
         + v53 * gradient4D_lut[4 * v34 + 1]
         + v54 * gradient4D_lut[4 * v34 + 2]
         + v55 * gradient4D_lut[4 * v34 + 3]);
  return (v29 + v24 + v26 + v17 + v19) * 27.0;
}


//======================================================================
// anl::new_simplex_noise4D(double,double,double,double,unsigned int,double (*)(double))
// address: 0x00325AC0   size: 0x460 (1120 bytes)
//======================================================================
double __fastcall anl::new_simplex_noise4D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        unsigned int a6,
        double (*a7)(double))
{
  double v7; // r0
  int i; // r4
  double v9; // r2
  double v10; // kr00_8
  int v11; // r7
  int v12; // r6
  double v13; // r4
  double v14; // r0
  int v15; // r2
  int k; // r4
  double *v17; // r7
  int v18; // r0
  int v19; // r3
  double *v20; // r5
  int v21; // r4
  double v22; // r6
  double v23; // r0
  double v24; // r4
  double v25; // r0
  int v27; // [sp+8h] [bp-D4h]
  int v28; // [sp+8h] [bp-D4h]
  double v29; // [sp+10h] [bp-CCh]
  double v31; // [sp+18h] [bp-C4h]
  double *v33; // [sp+20h] [bp-BCh]
  int j; // [sp+28h] [bp-B4h]
  _DWORD v35[2]; // [sp+34h] [bp-A8h] BYREF
  int v36; // [sp+3Ch] [bp-A0h]
  int v37; // [sp+40h] [bp-9Ch]
  int v38; // [sp+44h] [bp-98h] BYREF
  int v39; // [sp+48h] [bp-94h]
  int v40; // [sp+4Ch] [bp-90h]
  int v41; // [sp+50h] [bp-8Ch]
  int v42; // [sp+54h] [bp-88h] BYREF
  int v43; // [sp+58h] [bp-84h]
  int v44; // [sp+5Ch] [bp-80h]
  int v45; // [sp+60h] [bp-7Ch]
  _DWORD v46[5]; // [sp+64h] [bp-78h] BYREF
  _QWORD v47[4]; // [sp+78h] [bp-64h]
  double v48[8]; // [sp+98h] [bp-44h] BYREF

  if ( (dword_558CA0 & 1) == 0 && _cxa_guard_acquire(&dword_558CA0) != 0 )
  {
    qword_558CA8 = 0x3FEC9F25C5BFEDD9LL;
    _cxa_guard_release(&dword_558CA0);
  }
  if ( (dword_558CB0 & 1) == 0 && _cxa_guard_acquire(&dword_558CB0) != 0 )
  {
    qword_558CB8 = j_sqrt(
                     *(double *)&qword_558CA8 * *(double *)&qword_558CA8
                   - *(double *)&qword_558CA8 * 0.5 * (*(double *)&qword_558CA8 * 0.5));
    _cxa_guard_release(&dword_558CB0);
  }
  if ( (dword_558CC0 & 1) == 0 && _cxa_guard_acquire(&dword_558CC0) != 0 )
  {
    qword_558CC8 = j_sqrt(
                     *(double *)&qword_558CB8 * *(double *)&qword_558CB8
                   + *(double *)&qword_558CB8 * 0.5 * (*(double *)&qword_558CB8 * 0.5));
    _cxa_guard_release(&dword_558CC0);
  }
  if ( (dword_558CD0 & 1) == 0 && _cxa_guard_acquire(&dword_558CD0) != 0 )
  {
    *(double *)&qword_558CD8 = *(double *)&qword_558CC8 * *(double *)&qword_558CC8;
    _cxa_guard_release(&dword_558CD0);
  }
  *(double *)&qword_471158 = *(double *)&qword_471158 * 15.1383343;
  *(double *)v47 = this;
  *(double *)&v47[1] = a2;
  v7 = 0.0;
  *(double *)&v47[2] = a3;
  *(double *)&v47[3] = a4;
  for ( i = 0; i != 4; ++i )
  {
    v9 = *(double *)&v47[i];
    v7 = v7 + v9;
  }
  v10 = v7 * 0.309016994;
  v11 = fast_floor(this + v7 * 0.309016994);
  v35[0] = v11;
  v27 = fast_floor(a2 + v10);
  v35[1] = v27;
  v36 = fast_floor(a3 + v10);
  v37 = fast_floor(a4 + v10);
  v40 = v36;
  v38 = v11;
  v41 = v37;
  v12 = 0;
  v39 = v27;
  v13 = 0.0;
  do
  {
    v14 = v13 + (double)(int)v35[v12++];
    v13 = v14;
  }
  while ( v12 != 4 );
  v48[0] = this - (double)v11 + v14 * 0.138196601;
  v48[1] = a2 - (double)v27 + v14 * 0.138196601;
  v48[2] = a3 - (double)v36 + v14 * 0.138196601;
  v48[3] = a4 - (double)v37 + v14 * 0.138196601;
  v42 = 0;
  v43 = 1;
  v44 = 2;
  v45 = 3;
  sortBy_4(v48, &v42);
  v46[1] = v42;
  v46[2] = v43;
  v29 = 0.0;
  v31 = 0.0;
  v46[3] = v44;
  v46[4] = v45;
  v46[0] = -1;
  for ( j = 0; j != 5; ++j )
  {
    v15 = v46[j];
    if ( v15 != -1 )
      ++*(&v38 + v15);
    for ( k = 0; k != 4; ++k )
    {
      v17 = &v48[k + 4];
      v18 = *(int *)((char *)&v38 + k * 4);
      v19 = v35[k];
      v20 = &v48[k];
      *v17 = *v20 - (double)(v18 - v19) + v29;
    }
    v21 = 0;
    v22 = *(double *)&qword_558CD8;
    do
    {
      v23 = v22 - v48[v21 + 4] * v48[v21 + 4];
      ++v21;
      v22 = v23;
    }
    while ( v21 != 4 );
    if ( v23 > 0.0 )
    {
      v28 = 0;
      v24 = 0.0;
      v33 = &gradient4D_lut[4 * hash_coords_4(v38, v39, v40, v41, LODWORD(a5))];
      do
      {
        v25 = v24 + v33[v28] * v48[v28 + 4];
        v24 = v25;
        ++v28;
      }
      while ( v28 != 4 );
      v31 = v31 + v25 * v22 * v22 * v22 * v22;
    }
    v29 = v29 + 0.138196601;
  }
  return v31 * *(double *)&qword_471158;
}


//======================================================================
// anl::simplex_noise6D(double,double,double,double,double,double,unsigned int,double (*)(double))
// address: 0x00325FA8   size: 0x50A (1290 bytes)
//======================================================================
double __fastcall anl::simplex_noise6D(
        double this,
        double a2,
        double a3,
        double a4,
        double a5,
        double a6,
        double a7,
        unsigned int a8,
        double (*a9)(double))
{
  int v9; // r4
  double v10; // r0
  double v11; // r2
  double v12; // r4
  int v13; // r7
  double v14; // r4
  double v15; // r0
  int v16; // r2
  int j; // r4
  double *v18; // r7
  int v19; // r0
  int v20; // r3
  double *v21; // r5
  int v22; // r4
  double v23; // r6
  double v24; // r0
  double v25; // r4
  double v26; // r0
  int v28; // [sp+10h] [bp-12Ch]
  double v29; // [sp+10h] [bp-12Ch]
  __guard *v30; // [sp+18h] [bp-124h]
  __guard *v31; // [sp+18h] [bp-124h]
  int i; // [sp+1Ch] [bp-120h]
  double v33; // [sp+20h] [bp-11Ch]
  char *v34; // [sp+28h] [bp-114h]
  _DWORD v37[2]; // [sp+44h] [bp-F8h] BYREF
  int v38; // [sp+4Ch] [bp-F0h]
  int v39; // [sp+50h] [bp-ECh]
  int v40; // [sp+54h] [bp-E8h]
  int v41; // [sp+58h] [bp-E4h]
  int v42; // [sp+5Ch] [bp-E0h] BYREF
  int v43; // [sp+60h] [bp-DCh]
  int v44; // [sp+64h] [bp-D8h]
  int v45; // [sp+68h] [bp-D4h]
  int v46; // [sp+6Ch] [bp-D0h]
  int v47; // [sp+70h] [bp-CCh]
  int v48; // [sp+74h] [bp-C8h] BYREF
  int v49; // [sp+78h] [bp-C4h]
  int v50; // [sp+7Ch] [bp-C0h]
  int v51; // [sp+80h] [bp-BCh]
  int v52; // [sp+84h] [bp-B8h]
  int v53; // [sp+88h] [bp-B4h]
  _DWORD v54[7]; // [sp+8Ch] [bp-B0h] BYREF
  _QWORD v55[6]; // [sp+A8h] [bp-94h]
  double v56[12]; // [sp+D8h] [bp-64h] BYREF

  if ( (dword_558CE0 & 1) == 0 && _cxa_guard_acquire(&dword_558CE0) != 0 )
  {
    qword_558CE8 = 0x3FBA8A49663AB012LL;
    _cxa_guard_release(&dword_558CE0);
  }
  if ( (dword_558CF0 & 1) == 0 && _cxa_guard_acquire(&dword_558CF0) != 0 )
  {
    qword_558CF8 = 0x3FEDA05179501503LL;
    _cxa_guard_release(&dword_558CF0);
  }
  if ( (dword_558D00 & 1) == 0 && _cxa_guard_acquire(&dword_558D00) != 0 )
  {
    qword_558D08 = j_sqrt(
                     *(double *)&qword_558CF8 * *(double *)&qword_558CF8
                   - *(double *)&qword_558CF8 * 0.5 * (*(double *)&qword_558CF8 * 0.5));
    _cxa_guard_release(&dword_558D00);
  }
  if ( (dword_558D10 & 1) == 0 && _cxa_guard_acquire(&dword_558D10) != 0 )
  {
    qword_558D18 = j_sqrt(
                     *(double *)&qword_558D08 * *(double *)&qword_558D08
                   + *(double *)&qword_558D08 * 0.5 * (*(double *)&qword_558D08 * 0.5));
    _cxa_guard_release(&dword_558D10);
  }
  if ( (dword_558D20 & 1) == 0 && _cxa_guard_acquire(&dword_558D20) != 0 )
  {
    *(double *)&qword_558D28 = *(double *)&qword_558D18 * *(double *)&qword_558D18;
    _cxa_guard_release(&dword_558D20);
  }
  *(double *)v55 = this;
  *(double *)&v55[1] = a2;
  *(double *)&v55[2] = a3;
  *(double *)&v55[3] = a4;
  *(double *)&v55[4] = a5;
  v9 = 0;
  *(double *)&v55[5] = a6;
  v10 = 0.0;
  do
  {
    v11 = *(double *)&v55[v9++];
    v10 = v10 + v11;
  }
  while ( v9 != 6 );
  v12 = v10 * 0.274291885;
  v30 = (__guard *)fast_floor(this + v10 * 0.274291885);
  v37[0] = v30;
  v28 = fast_floor(a2 + v12);
  v37[1] = v28;
  v38 = fast_floor(a3 + v12);
  v39 = fast_floor(a4 + v12);
  v40 = fast_floor(a5 + v12);
  v42 = (int)v30;
  v43 = v28;
  v41 = fast_floor(a6 + v12);
  v44 = v38;
  v47 = v41;
  v13 = 0;
  v45 = v39;
  v46 = v40;
  v14 = 0.0;
  do
  {
    v15 = v14 + (double)(int)v37[v13++];
    v14 = v15;
  }
  while ( v13 != 6 );
  v56[0] = this - (double)(int)v30 + v15 * *(double *)&qword_558CE8;
  v56[1] = a2 - (double)v28 + v15 * *(double *)&qword_558CE8;
  v56[2] = a3 - (double)v38 + v15 * *(double *)&qword_558CE8;
  v56[3] = a4 - (double)v39 + v15 * *(double *)&qword_558CE8;
  v56[4] = a5 - (double)v40 + v15 * *(double *)&qword_558CE8;
  v56[5] = a6 - (double)v41 + v15 * *(double *)&qword_558CE8;
  v48 = 0;
  v49 = 1;
  v50 = 2;
  v51 = 3;
  v52 = 4;
  v53 = 5;
  sortBy_6(v56, &v48);
  v54[0] = -1;
  v54[3] = v50;
  v54[6] = v53;
  v29 = 0.0;
  v33 = 0.0;
  v54[1] = v48;
  v54[2] = v49;
  v54[4] = v51;
  v54[5] = v52;
  for ( i = 0; i != 7; ++i )
  {
    v16 = v54[i];
    if ( v16 != -1 )
      ++*(&v42 + v16);
    for ( j = 0; j != 6; ++j )
    {
      v18 = &v56[j + 6];
      v19 = *(int *)((char *)&v42 + j * 4);
      v20 = v37[j];
      v21 = &v56[j];
      *v18 = *v21 - (double)(v19 - v20) + v29;
    }
    v22 = 0;
    v23 = *(double *)&qword_558D28;
    do
    {
      v24 = v23 - v56[v22 + 6] * v56[v22 + 6];
      ++v22;
      v23 = v24;
    }
    while ( v22 != 6 );
    if ( v24 > 0.0 )
    {
      v34 = (char *)&gradient6D_lut + 48 * hash_coords_6(v42, v43, v44, v45, v46, v47, LODWORD(a7));
      v31 = nullptr;
      v25 = 0.0;
      do
      {
        v26 = v25 + *(double *)((char *)v31 + (_DWORD)v34) * *(double *)((char *)&v56[6] + (_DWORD)v31);
        v25 = v26;
        v31 += 2;
      }
      while ( v31 != (__guard *)&word_30 );
      v33 = v33 + v26 * v23 * v23 * v23 * v23;
    }
    v29 = v29 + *(double *)&qword_558CE8;
  }
  return v33 * 5.97377674;
}


//======================================================================
// anl::sawtooth(double,double)
// address: 0x003280E8   size: 0x3C (60 bytes)
//======================================================================
double __fastcall anl::sawtooth(double this, double a2, double a3)
{
  double v3; // r4
  double v4; // r0

  v3 = this / a2;
  v4 = j_floor(this / a2 + 0.5);
  return (v3 - v4 + v3 - v4) * 0.5 + 0.5;
}


//======================================================================
// anl::normalizeVec3(double *)
// address: 0x00328A44   size: 0x8E (142 bytes)
//======================================================================
__int64 __fastcall anl::normalizeVec3(anl *this, double *a2)
{
  double v3; // r4
  double v5; // [sp+0h] [bp-10h]

  v5 = *((double *)this + 2);
  v3 = j_sqrt(*(double *)this * *(double *)this + *((double *)this + 1) * *((double *)this + 1) + v5 * v5);
  *(double *)this = *(double *)this / v3;
  *((double *)this + 1) = *((double *)this + 1) / v3;
  *((double *)this + 2) = *((double *)this + 2) / v3;
  return *(_QWORD *)&v5;
}


//======================================================================
// anl::calcBumpMap(anl::TArray2D<double> *,anl::TArray2D<double> *,double *,double,bool)
// address: 0x00328B08   size: 0x29C (668 bytes)
//======================================================================
void __fastcall anl::calcBumpMap(_DWORD *a1, int a2, double *a3, int a4, double a5, char a6)
{
  int v7; // r5
  int k; // r7
  double v9; // r0
  double v10; // r0
  __int64 v11; // r0
  int v12; // r2
  double v13; // r4
  _DWORD *v14; // r0
  int v15; // r1
  double v16; // r0
  __int64 v17; // r0
  double v18; // r4
  int v19; // r2
  unsigned int v20; // r0
  int v21; // r0
  int i; // r0
  int j; // r1
  _DWORD *v24; // r4
  int v25; // [sp+Ch] [bp-50h]
  int v26; // [sp+10h] [bp-4Ch]
  int v28; // [sp+18h] [bp-44h]
  int v29; // [sp+1Ch] [bp-40h]
  int v31; // [sp+24h] [bp-38h]
  int v32; // [sp+34h] [bp-28h]
  int v33; // [sp+38h] [bp-24h]
  double v34; // [sp+40h] [bp-1Ch] BYREF
  double v35; // [sp+48h] [bp-14h]
  double v36; // [sp+50h] [bp-Ch]

  if ( a1 != nullptr && a2 != 0 )
  {
    v28 = a1[1];
    v29 = a1[2];
    if ( v28 != *(_DWORD *)(a2 + 4) || a1[2] != *(_DWORD *)(a2 + 8) )
    {
      if ( *(_DWORD *)a2 != 0 )
        operator delete[](*(void **)a2);
      *(_DWORD *)a2 = 0;
      *(_DWORD *)(a2 + 4) = 0;
      *(_DWORD *)(a2 + 8) = 0;
      if ( v28 != 0 && v29 != 0 )
      {
        v20 = (unsigned int)(v29 * v28) > 0xFE00000 ? -1 : 8 * v29 * v28;
        v21 = operator new[](v20);
        *(_DWORD *)a2 = v21;
        *(_DWORD *)(a2 + 4) = v28;
        *(_DWORD *)(a2 + 8) = v29;
        if ( v21 != 0 )
        {
          for ( i = 0; i < *(_DWORD *)(a2 + 4); ++i )
          {
            for ( j = 0; j < *(_DWORD *)(a2 + 8); ++j )
            {
              v24 = (_DWORD *)(*(_DWORD *)a2 + 8 * (*(_DWORD *)(a2 + 4) * j + i));
              *v24 = 0;
              v24[1] = 0;
            }
          }
        }
      }
    }
    v25 = 0;
LABEL_6:
    if ( v25 < v28 )
    {
      v32 = v25 - 1;
      if ( v25 == 0 )
        v32 = v28 - 1;
      v7 = v25 + 1;
      if ( v25 == v28 - 1 )
        v7 = 0;
      v33 = v7;
      for ( k = 0; ; ++k )
      {
        if ( k >= v29 )
        {
          ++v25;
          goto LABEL_6;
        }
        HIDWORD(v9) = 0;
        v34 = 0.0;
        v35 = 1.0;
        v36 = 0.0;
        if ( a6 != 0 )
          break;
        if ( v25 != 0 && k != 0 && v25 != v28 - 1 && k != v29 - 1 )
        {
          v10 = COERCE_DOUBLE(anl::TArray2D<double>::get(a1, v25 - 1, k));
          v34 = (v10 - COERCE_DOUBLE(anl::TArray2D<double>::get(a1, v25 + 1, k))) / a5;
          v11 = anl::TArray2D<double>::get(a1, v25, k - 1);
          v12 = k + 1;
          v13 = *(double *)&v11;
          v14 = a1;
          v15 = v25;
LABEL_26:
          v9 = (v13 - COERCE_DOUBLE(anl::TArray2D<double>::get(v14, v15, v12))) / a5;
          v36 = v9;
        }
        anl::normalizeVec3((anl *)&v34, (double *)HIDWORD(v9));
        v18 = *a3 * v34 + a3[1] * v35 + a3[2] * v36;
        if ( v18 < 0.0 )
        {
          v18 = 0.0;
        }
        else if ( v18 > 1.0 )
        {
          v18 = 1.0;
        }
        v19 = *(_DWORD *)(a2 + 4);
        if ( v25 < v19 && k < *(_DWORD *)(a2 + 8) && v25 >= 0 && k >= 0 && *(_DWORD *)a2 != 0 )
          *(double *)(*(_DWORD *)a2 + 8 * (v19 * k + v25)) = v18;
      }
      v26 = k - 1;
      if ( k == 0 )
        v26 = v29 - 1;
      if ( k == v29 - 1 )
        v31 = 0;
      else
        v31 = k + 1;
      v16 = COERCE_DOUBLE(anl::TArray2D<double>::get(a1, v32, k));
      v34 = (v16 - COERCE_DOUBLE(anl::TArray2D<double>::get(a1, v33, k))) / a5;
      v17 = anl::TArray2D<double>::get(a1, v25, v26);
      v12 = v31;
      v13 = *(double *)&v17;
      v14 = a1;
      v15 = v25;
      goto LABEL_26;
    }
  }
}


//======================================================================
// anl::calcNormalMap(anl::TArray2D<double> *,anl::TArray2D<TVec4D<float>> *,double,bool,bool)
// address: 0x00328E78   size: 0x214 (532 bytes)
//======================================================================
_DWORD *__fastcall anl::calcNormalMap(_DWORD *result, _DWORD *a2, double a3, char a4, char a5)
{
  int v5; // r6
  int v6; // r4
  int i; // r7
  double v8; // r0
  double v9; // r0
  __int64 v10; // r0
  int v11; // r2
  double v12; // r4
  _DWORD *v13; // r0
  int v14; // r1
  int v15; // r4
  double v16; // r0
  __int64 v17; // r0
  float v18; // r0
  float v19; // r5
  float v20; // r0
  float v21; // r4
  float v22; // r0
  int v23; // r2
  int v24; // [sp+Ch] [bp-68h]
  _DWORD *v25; // [sp+10h] [bp-64h]
  int v26; // [sp+14h] [bp-60h]
  signed int v27; // [sp+18h] [bp-5Ch]
  int v30; // [sp+38h] [bp-3Ch]
  int v31; // [sp+3Ch] [bp-38h]
  float v32[4]; // [sp+48h] [bp-2Ch] BYREF
  double v33; // [sp+58h] [bp-1Ch] BYREF
  double v34; // [sp+60h] [bp-14h]
  double v35; // [sp+68h] [bp-Ch]

  v25 = result;
  if ( result != nullptr && a2 != nullptr )
  {
    v26 = result[1];
    v27 = result[2];
    if ( v26 != a2[1] || v27 != a2[2] )
      result = (_DWORD *)anl::TArray2D<TVec4D<float>>::resize((unsigned int)a2, v26, v27);
    v5 = 0;
LABEL_6:
    if ( v5 < v26 )
    {
      v30 = v5 - 1;
      if ( v5 == 0 )
        v30 = v26 - 1;
      v6 = v5 + 1;
      if ( v5 == v26 - 1 )
        v6 = 0;
      v31 = v6;
      for ( i = 0; ; ++i )
      {
        if ( i >= v27 )
        {
          ++v5;
          goto LABEL_6;
        }
        HIDWORD(v8) = 0;
        v33 = 0.0;
        v34 = 1.0;
        v35 = 0.0;
        if ( a5 != 0 )
        {
          v24 = i - 1;
          if ( i == 0 )
            v24 = v27 - 1;
          if ( i == v27 - 1 )
            v15 = 0;
          else
            v15 = i + 1;
          v16 = COERCE_DOUBLE(anl::TArray2D<double>::get(v25, v30, i));
          v33 = (v16 - COERCE_DOUBLE(anl::TArray2D<double>::get(v25, v31, i))) / a3;
          *(double *)&v17 = COERCE_DOUBLE(anl::TArray2D<double>::get(v25, v5, v24));
          v11 = v15;
          v12 = *(double *)&v17;
          v13 = v25;
          v14 = v5;
        }
        else
        {
          if ( v5 == 0 || i == 0 || v5 == v26 - 1 || i == v27 - 1 )
            goto LABEL_27;
          v9 = COERCE_DOUBLE(anl::TArray2D<double>::get(v25, v5 - 1, i));
          v33 = (v9 - COERCE_DOUBLE(anl::TArray2D<double>::get(v25, v5 + 1, i))) / a3;
          *(double *)&v10 = COERCE_DOUBLE(anl::TArray2D<double>::get(v25, v5, i - 1));
          v11 = i + 1;
          v12 = *(double *)&v10;
          v13 = v25;
          v14 = v5;
        }
        v8 = (v12 - COERCE_DOUBLE(anl::TArray2D<double>::get(v13, v14, v11))) / a3;
        v35 = v8;
LABEL_27:
        anl::normalizeVec3((anl *)&v33, (double *)HIDWORD(v8));
        if ( a4 != 0 )
        {
          v33 = v33 * 0.5 + 0.5;
          v34 = v34 * 0.5 + 0.5;
          v35 = v35 * 0.5 + 0.5;
        }
        v18 = v34;
        v19 = v18;
        v20 = v35;
        v21 = v20;
        v22 = v33;
        v32[0] = v22;
        v32[3] = 1.0;
        v23 = i;
        v32[1] = v19;
        v32[2] = v21;
        result = anl::TArray2D<TVec4D<float>>::set(a2, v5, v23, v32);
      }
    }
  }
  return result;
}


//======================================================================
// anl::multRGBAByDouble(anl::TArray2D<TVec4D<float>> *,anl::TArray2D<double> *)
// address: 0x003290A8   size: 0xD2 (210 bytes)
//======================================================================
_DWORD *__fastcall anl::multRGBAByDouble(_DWORD *result, _DWORD *a2)
{
  _DWORD *v2; // r5
  int i; // r2
  int j; // r7
  __int64 v6; // r0
  int v7; // r3
  int v8; // r3
  float v9; // r0
  int v10; // r4
  float v11; // r0
  float v12; // r0
  float v13; // r0
  int v14; // r2
  int v15; // [sp+0h] [bp-34h]
  float v16; // [sp+4h] [bp-30h]
  float v17; // [sp+8h] [bp-2Ch]
  double v18; // [sp+10h] [bp-24h]
  int v19; // [sp+18h] [bp-1Ch]
  int v20; // [sp+1Ch] [bp-18h]
  _DWORD v21[5]; // [sp+20h] [bp-14h] BYREF

  v2 = result;
  if ( result != nullptr && a2 != nullptr )
  {
    v19 = result[1];
    v20 = result[2];
    if ( v19 == a2[1] && result[2] == a2[2] )
    {
      for ( i = 0; ; i = v15 + 1 )
      {
        v15 = i;
        if ( i >= v19 )
          break;
        for ( j = 0; j < v20; ++j )
        {
          v6 = anl::TArray2D<double>::get(a2, v15, j);
          v7 = v2[1];
          v18 = *(double *)&v6;
          if ( v15 < v7 && j < v2[2] && *v2 != 0 )
          {
            v8 = *v2 + 16 * (v7 * j + v15);
            v9 = *(float *)v8;
            v17 = *(float *)(v8 + 4);
            v16 = *(float *)(v8 + 8);
            v10 = *(_DWORD *)(v8 + 12);
          }
          else
          {
            v10 = 0;
            v16 = 0.0;
            v17 = 0.0;
            v9 = 0.0;
          }
          v11 = v9 * v18;
          *(float *)v21 = v11;
          v12 = v17 * v18;
          *(float *)&v21[1] = v12;
          v14 = j;
          v13 = v16 * v18;
          *(float *)&v21[2] = v13;
          v21[3] = v10;
          result = anl::TArray2D<TVec4D<float>>::set(v2, v15, v14, v21);
        }
      }
    }
  }
  return result;
}


//======================================================================
// anl::drawSpanImplicit(anl::SSpan,int,anl::TArray2D<double> *,anl::CImplicitModuleBase *)
// address: 0x0032ED04   size: 0xF2 (242 bytes)
//======================================================================
float __fastcall anl::drawSpanImplicit(int a1, int a2, _DWORD *a3, int a4)
{
  int v5; // r7
  float v7; // r6
  float result; // r0
  float v9; // r6
  double v10; // r0
  int v11; // r0
  int v12; // r1
  int v13; // r12
  int *v14; // r2
  double v15; // [sp+0h] [bp-34h]
  double v16; // [sp+10h] [bp-24h]
  float v19; // [sp+28h] [bp-Ch]

  v5 = *(_DWORD *)a1;
  v7 = (float)(*(_DWORD *)(a1 + 4) - *(_DWORD *)a1);
  LODWORD(result) = v7 == 0.0;
  if ( v7 != 0.0 )
  {
    result = 1.0 / v7;
    v9 = 0.0;
    v19 = result;
    while ( v5 < *(_DWORD *)(a1 + 4) )
    {
      v16 = (float)(*(float *)(a1 + 8) + (float)((float)(*(float *)(a1 + 20) - *(float *)(a1 + 8)) * v9));
      v15 = (float)(*(float *)(a1 + 12) + (float)((float)(*(float *)(a1 + 24) - *(float *)(a1 + 12)) * v9));
      v10 = (float)(*(float *)(a1 + 16) + (float)((float)(*(float *)(a1 + 28) - *(float *)(a1 + 16)) * v9));
      v11 = (*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a4 + 16))(
              a4,
              *(_DWORD *)(*(_DWORD *)a4 + 16),
              LODWORD(v16),
              HIDWORD(v16),
              LODWORD(v15),
              HIDWORD(v15),
              LODWORD(v10),
              HIDWORD(v10));
      v13 = a3[1];
      if ( v5 < v13 && a2 < a3[2] && v5 >= 0 && a2 >= 0 && *a3 != 0 )
      {
        v14 = (int *)(*a3 + 8 * (v13 * a2 + v5));
        *v14 = v11;
        v14[1] = v12;
      }
      result = v9 + v19;
      ++v5;
      v9 = v9 + v19;
    }
  }
  return result;
}


//======================================================================
// anl::drawSpanRGBA(anl::SSpan,int,anl::TArray2D<TVec4D<float>> *,anl::CRGBAModuleBase *)
// address: 0x0032EDF6   size: 0xF6 (246 bytes)
//======================================================================
float __fastcall anl::drawSpanRGBA(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r7
  float v7; // r6
  float result; // r0
  double v9; // r0
  int v10; // r3
  _DWORD *v11; // r1
  int v12; // r3
  int v13; // r6
  double v14; // [sp+0h] [bp-4Ch]
  float v15; // [sp+10h] [bp-3Ch]
  double v16; // [sp+18h] [bp-34h]
  float v19; // [sp+30h] [bp-1Ch]
  _DWORD v20[5]; // [sp+38h] [bp-14h] BYREF

  v4 = *(_DWORD *)a1;
  v7 = (float)(*(_DWORD *)(a1 + 4) - *(_DWORD *)a1);
  LODWORD(result) = v7 == 0.0;
  if ( v7 != 0.0 )
  {
    result = 1.0 / v7;
    v19 = 1.0 / v7;
    v15 = 0.0;
    while ( v4 < *(_DWORD *)(a1 + 4) )
    {
      v16 = (float)(*(float *)(a1 + 8) + (float)((float)(*(float *)(a1 + 20) - *(float *)(a1 + 8)) * v15));
      v14 = (float)(*(float *)(a1 + 12) + (float)((float)(*(float *)(a1 + 24) - *(float *)(a1 + 12)) * v15));
      v9 = (float)(*(float *)(a1 + 16) + (float)((float)(*(float *)(a1 + 28) - *(float *)(a1 + 16)) * v15));
      (*(void (__fastcall **)(_DWORD *, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)a4 + 12))(
        v20,
        a4,
        LODWORD(v16),
        HIDWORD(v16),
        LODWORD(v14),
        HIDWORD(v14),
        LODWORD(v9),
        HIDWORD(v9));
      v10 = a3[1];
      if ( v4 < v10 && a2 < a3[2] && v4 >= 0 && a2 >= 0 && *a3 != 0 )
      {
        v11 = (_DWORD *)(*a3 + 16 * (v10 * a2 + v4));
        v12 = v20[1];
        v13 = v20[2];
        *v11 = v20[0];
        v11[1] = v12;
        v11[2] = v13;
        v11[3] = v20[3];
      }
      result = v15 + v19;
      ++v4;
      v15 = v15 + v19;
    }
  }
  return result;
}


//======================================================================
// anl::drawSpansBetweenEdgesImplicit(anl::SEdge,anl::SEdge,anl::TArray2D<double> *,anl::CImplicitModuleBase *)
// address: 0x0032EEEC   size: 0x1B6 (438 bytes)
//======================================================================
float __fastcall anl::drawSpansBetweenEdgesImplicit(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r6
  float v7; // r5
  float result; // r0
  float v9; // r6
  float v10; // r5
  float v11; // r0
  float v12; // [sp+0h] [bp-6Ch]
  float v13; // [sp+0h] [bp-6Ch]
  float v14; // [sp+4h] [bp-68h]
  int v15; // [sp+8h] [bp-64h]
  int v16; // [sp+Ch] [bp-60h]
  int v17; // [sp+10h] [bp-5Ch]
  float v18; // [sp+14h] [bp-58h]
  float v19; // [sp+18h] [bp-54h]
  float v20; // [sp+1Ch] [bp-50h]
  float v21; // [sp+20h] [bp-4Ch]
  float v22; // [sp+24h] [bp-48h]
  float v23; // [sp+28h] [bp-44h]
  float v24; // [sp+2Ch] [bp-40h]
  float v25; // [sp+30h] [bp-3Ch]
  _DWORD v28[9]; // [sp+48h] [bp-24h] BYREF

  v4 = *(_DWORD *)(a1 + 4);
  v7 = (float)(*(_DWORD *)(a1 + 12) - v4);
  LODWORD(result) = v7 == 0.0;
  if ( v7 != 0.0 )
  {
    v12 = (float)(*(_DWORD *)(a2 + 12) - v4);
    LODWORD(result) = v12 == 0.0;
    if ( v12 != 0.0 )
    {
      v22 = (float)(*(_DWORD *)(a1 + 8) - *(_DWORD *)a1);
      v23 = (float)(*(_DWORD *)(a2 + 8) - *(_DWORD *)a2);
      v15 = *(_DWORD *)(a2 + 4);
      v14 = (float)(v15 - v4) / v7;
      v24 = 1.0 / v7;
      result = 1.0 / v12;
      v25 = 1.0 / v12;
      v13 = 0.0;
      while ( v15 < *(_DWORD *)(a2 + 12) )
      {
        v17 = (int)(float)(v22 * v14) + *(_DWORD *)a1;
        v19 = *(float *)(a1 + 16) + (float)((float)(*(float *)(a1 + 28) - *(float *)(a1 + 16)) * v14);
        v20 = *(float *)(a1 + 20) + (float)((float)(*(float *)(a1 + 32) - *(float *)(a1 + 20)) * v14);
        v21 = *(float *)(a1 + 24) + (float)((float)(*(float *)(a1 + 36) - *(float *)(a1 + 24)) * v14);
        v16 = (int)(float)(v23 * v13) + *(_DWORD *)a2;
        v18 = *(float *)(a2 + 24);
        v9 = *(float *)(a2 + 16) + (float)((float)(*(float *)(a2 + 28) - *(float *)(a2 + 16)) * v13);
        v10 = *(float *)(a2 + 20) + (float)((float)(*(float *)(a2 + 32) - *(float *)(a2 + 20)) * v13);
        v11 = v18 + (float)((float)(*(float *)(a2 + 36) - v18) * v13);
        if ( v17 >= v16 )
        {
          v21 = v18 + (float)((float)(*(float *)(a2 + 36) - v18) * v13);
          v20 = *(float *)(a2 + 20) + (float)((float)(*(float *)(a2 + 32) - *(float *)(a2 + 20)) * v13);
          v19 = *(float *)(a2 + 16) + (float)((float)(*(float *)(a2 + 28) - *(float *)(a2 + 16)) * v13);
          v11 = *(float *)(a1 + 24) + (float)((float)(*(float *)(a1 + 36) - *(float *)(a1 + 24)) * v14);
          v10 = *(float *)(a1 + 20) + (float)((float)(*(float *)(a1 + 32) - *(float *)(a1 + 20)) * v14);
          v9 = *(float *)(a1 + 16) + (float)((float)(*(float *)(a1 + 28) - *(float *)(a1 + 16)) * v14);
          v17 = (int)(float)(v23 * v13) + *(_DWORD *)a2;
          v16 = (int)(float)(v22 * v14) + *(_DWORD *)a1;
        }
        *(float *)&v28[7] = v11;
        v28[1] = v16;
        v28[0] = v17;
        *(float *)&v28[2] = v19;
        *(float *)&v28[3] = v20;
        *(float *)&v28[5] = v9;
        *(float *)&v28[4] = v21;
        *(float *)&v28[6] = v10;
        anl::drawSpanImplicit((int)v28, v15, a3, a4);
        v14 = v14 + v24;
        result = v13 + v25;
        v13 = v13 + v25;
        ++v15;
      }
    }
  }
  return result;
}


//======================================================================
// anl::drawSpansBetweenEdgesRGBA(anl::SEdge,anl::SEdge,anl::TArray2D<TVec4D<float>> *,anl::CRGBAModuleBase *)
// address: 0x0032F0A2   size: 0x1B6 (438 bytes)
//======================================================================
float __fastcall anl::drawSpansBetweenEdgesRGBA(int a1, int a2, _DWORD *a3, int a4)
{
  int v4; // r6
  float v7; // r5
  float result; // r0
  float v9; // r6
  float v10; // r5
  float v11; // r0
  float v12; // [sp+0h] [bp-6Ch]
  float v13; // [sp+0h] [bp-6Ch]
  float v14; // [sp+4h] [bp-68h]
  int v15; // [sp+8h] [bp-64h]
  int v16; // [sp+Ch] [bp-60h]
  int v17; // [sp+10h] [bp-5Ch]
  float v18; // [sp+14h] [bp-58h]
  float v19; // [sp+18h] [bp-54h]
  float v20; // [sp+1Ch] [bp-50h]
  float v21; // [sp+20h] [bp-4Ch]
  float v22; // [sp+24h] [bp-48h]
  float v23; // [sp+28h] [bp-44h]
  float v24; // [sp+2Ch] [bp-40h]
  float v25; // [sp+30h] [bp-3Ch]
  _DWORD v28[9]; // [sp+48h] [bp-24h] BYREF

  v4 = *(_DWORD *)(a1 + 4);
  v7 = (float)(*(_DWORD *)(a1 + 12) - v4);
  LODWORD(result) = v7 == 0.0;
  if ( v7 != 0.0 )
  {
    v12 = (float)(*(_DWORD *)(a2 + 12) - v4);
    LODWORD(result) = v12 == 0.0;
    if ( v12 != 0.0 )
    {
      v22 = (float)(*(_DWORD *)(a1 + 8) - *(_DWORD *)a1);
      v23 = (float)(*(_DWORD *)(a2 + 8) - *(_DWORD *)a2);
      v15 = *(_DWORD *)(a2 + 4);
      v14 = (float)(v15 - v4) / v7;
      v24 = 1.0 / v7;
      result = 1.0 / v12;
      v25 = 1.0 / v12;
      v13 = 0.0;
      while ( v15 < *(_DWORD *)(a2 + 12) )
      {
        v17 = (int)(float)(v22 * v14) + *(_DWORD *)a1;
        v19 = *(float *)(a1 + 16) + (float)((float)(*(float *)(a1 + 28) - *(float *)(a1 + 16)) * v14);
        v20 = *(float *)(a1 + 20) + (float)((float)(*(float *)(a1 + 32) - *(float *)(a1 + 20)) * v14);
        v21 = *(float *)(a1 + 24) + (float)((float)(*(float *)(a1 + 36) - *(float *)(a1 + 24)) * v14);
        v16 = (int)(float)(v23 * v13) + *(_DWORD *)a2;
        v18 = *(float *)(a2 + 24);
        v9 = *(float *)(a2 + 16) + (float)((float)(*(float *)(a2 + 28) - *(float *)(a2 + 16)) * v13);
        v10 = *(float *)(a2 + 20) + (float)((float)(*(float *)(a2 + 32) - *(float *)(a2 + 20)) * v13);
        v11 = v18 + (float)((float)(*(float *)(a2 + 36) - v18) * v13);
        if ( v17 >= v16 )
        {
          v21 = v18 + (float)((float)(*(float *)(a2 + 36) - v18) * v13);
          v20 = *(float *)(a2 + 20) + (float)((float)(*(float *)(a2 + 32) - *(float *)(a2 + 20)) * v13);
          v19 = *(float *)(a2 + 16) + (float)((float)(*(float *)(a2 + 28) - *(float *)(a2 + 16)) * v13);
          v11 = *(float *)(a1 + 24) + (float)((float)(*(float *)(a1 + 36) - *(float *)(a1 + 24)) * v14);
          v10 = *(float *)(a1 + 20) + (float)((float)(*(float *)(a1 + 32) - *(float *)(a1 + 20)) * v14);
          v9 = *(float *)(a1 + 16) + (float)((float)(*(float *)(a1 + 28) - *(float *)(a1 + 16)) * v14);
          v17 = (int)(float)(v23 * v13) + *(_DWORD *)a2;
          v16 = (int)(float)(v22 * v14) + *(_DWORD *)a1;
        }
        *(float *)&v28[7] = v11;
        v28[1] = v16;
        v28[0] = v17;
        *(float *)&v28[2] = v19;
        *(float *)&v28[3] = v20;
        *(float *)&v28[5] = v9;
        *(float *)&v28[4] = v21;
        *(float *)&v28[6] = v10;
        anl::drawSpanRGBA((int)v28, v15, a3, a4);
        v14 = v14 + v24;
        result = v13 + v25;
        v13 = v13 + v25;
        ++v15;
      }
    }
  }
  return result;
}


//======================================================================
// anl::rasterizeImplicitTriangle(int,int,TVec3D<float>,int,int,TVec3D<float>,int,int,TVec3D<float>,anl::TArray2D<double> *,anl::CImplicitModuleBase *)
// address: 0x0032F282   size: 0x14E (334 bytes)
//======================================================================
float __fastcall anl::rasterizeImplicitTriangle(
        int a1,
        int a2,
        int *a3,
        int a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        int *a9,
        _DWORD *a10,
        int a11)
{
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r7
  int v19; // r3
  int v20; // r2
  int v21; // r3
  int v22; // r2
  int v23; // r2
  int v24; // r6
  int v25; // r4
  float v26; // r5
  float v27; // r6
  int v29; // [sp+24h] [bp-E0h]
  int v33; // [sp+38h] [bp-CCh] BYREF
  int v34; // [sp+3Ch] [bp-C8h]
  int v35; // [sp+40h] [bp-C4h]
  int v36; // [sp+60h] [bp-A4h] BYREF
  int v37; // [sp+64h] [bp-A0h]
  int v38; // [sp+68h] [bp-9Ch]
  _DWORD v39[10]; // [sp+88h] [bp-7Ch] BYREF
  _DWORD v40[10]; // [sp+B0h] [bp-54h] BYREF
  _DWORD v41[11]; // [sp+D8h] [bp-2Ch] BYREF

  v12 = a3[1];
  v33 = *a3;
  v13 = a3[2];
  v34 = v12;
  v14 = *a6;
  v35 = v13;
  v15 = a6[1];
  v36 = v14;
  v16 = a6[2];
  v37 = v15;
  v38 = v16;
  anl::SEdge::SEdge(v39, a1, a2, &v33, a4, a5, &v36);
  v17 = a6[1];
  v18 = a6[2];
  v33 = *a6;
  v34 = v17;
  v19 = *a9;
  v35 = v18;
  v20 = a9[1];
  v36 = v19;
  v37 = v20;
  v38 = a9[2];
  anl::SEdge::SEdge(v40, a4, a5, &v33, a7, a8, &v36);
  v21 = a9[1];
  v33 = *a9;
  v34 = v21;
  v22 = a9[2];
  v36 = *a3;
  v35 = v22;
  v23 = a3[1];
  v24 = a3[2];
  v37 = v23;
  v38 = v24;
  v25 = 0;
  anl::SEdge::SEdge(v41, a7, a8, &v33, a1, a2, &v36);
  v26 = 0.0;
  v29 = 0;
  while ( 1 )
  {
    v27 = (float)(v39[10 * v25 + 3] - v39[10 * v25 + 1]);
    if ( v27 > v26 )
      v29 = v25;
    else
      v27 = v26;
    if ( ++v25 == 3 )
      break;
    v26 = v27;
  }
  anl::SEdge::SEdge(&v33, &v39[10 * v29]);
  anl::SEdge::SEdge(&v36, &v39[10 * ((v29 + 1) % 3)]);
  anl::drawSpansBetweenEdgesImplicit((int)&v33, (int)&v36, a10, a11);
  anl::SEdge::SEdge(&v33, &v39[10 * v29]);
  anl::SEdge::SEdge(&v36, &v39[10 * ((v29 + 2) % 3)]);
  return anl::drawSpansBetweenEdgesImplicit((int)&v33, (int)&v36, a10, a11);
}


//======================================================================
// anl::rasterizeRGBATriangle(int,int,TVec3D<float>,int,int,TVec3D<float>,int,int,TVec3D<float>,anl::TArray2D<TVec4D<float>> *,anl::CRGBAModuleBase *)
// address: 0x0032F3D0   size: 0x14E (334 bytes)
//======================================================================
float __fastcall anl::rasterizeRGBATriangle(
        int a1,
        int a2,
        int *a3,
        int a4,
        int a5,
        int *a6,
        int a7,
        int a8,
        int *a9,
        _DWORD *a10,
        int a11)
{
  int v12; // r3
  int v13; // r2
  int v14; // r3
  int v15; // r2
  int v16; // r3
  int v17; // r2
  int v18; // r7
  int v19; // r3
  int v20; // r2
  int v21; // r3
  int v22; // r2
  int v23; // r2
  int v24; // r6
  int v25; // r4
  float v26; // r5
  float v27; // r6
  int v29; // [sp+24h] [bp-E0h]
  int v33; // [sp+38h] [bp-CCh] BYREF
  int v34; // [sp+3Ch] [bp-C8h]
  int v35; // [sp+40h] [bp-C4h]
  int v36; // [sp+60h] [bp-A4h] BYREF
  int v37; // [sp+64h] [bp-A0h]
  int v38; // [sp+68h] [bp-9Ch]
  _DWORD v39[10]; // [sp+88h] [bp-7Ch] BYREF
  _DWORD v40[10]; // [sp+B0h] [bp-54h] BYREF
  _DWORD v41[11]; // [sp+D8h] [bp-2Ch] BYREF

  v12 = a3[1];
  v33 = *a3;
  v13 = a3[2];
  v34 = v12;
  v14 = *a6;
  v35 = v13;
  v15 = a6[1];
  v36 = v14;
  v16 = a6[2];
  v37 = v15;
  v38 = v16;
  anl::SEdge::SEdge(v39, a1, a2, &v33, a4, a5, &v36);
  v17 = a6[1];
  v18 = a6[2];
  v33 = *a6;
  v34 = v17;
  v19 = *a9;
  v35 = v18;
  v20 = a9[1];
  v36 = v19;
  v37 = v20;
  v38 = a9[2];
  anl::SEdge::SEdge(v40, a4, a5, &v33, a7, a8, &v36);
  v21 = a9[1];
  v33 = *a9;
  v34 = v21;
  v22 = a9[2];
  v36 = *a3;
  v35 = v22;
  v23 = a3[1];
  v24 = a3[2];
  v37 = v23;
  v38 = v24;
  v25 = 0;
  anl::SEdge::SEdge(v41, a7, a8, &v33, a1, a2, &v36);
  v26 = 0.0;
  v29 = 0;
  while ( 1 )
  {
    v27 = (float)(v39[10 * v25 + 3] - v39[10 * v25 + 1]);
    if ( v27 > v26 )
      v29 = v25;
    else
      v27 = v26;
    if ( ++v25 == 3 )
      break;
    v26 = v27;
  }
  anl::SEdge::SEdge(&v33, &v39[10 * v29]);
  anl::SEdge::SEdge(&v36, &v39[10 * ((v29 + 1) % 3)]);
  anl::drawSpansBetweenEdgesRGBA((int)&v33, (int)&v36, a10, a11);
  anl::SEdge::SEdge(&v33, &v39[10 * v29]);
  anl::SEdge::SEdge(&v36, &v39[10 * ((v29 + 2) % 3)]);
  return anl::drawSpansBetweenEdgesRGBA((int)&v33, (int)&v36, a10, a11);
}

