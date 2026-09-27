// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: anl::TCurve

//======================================================================
// anl::TCurve<double>::findControlPoint(double)
// address: 0x00316596   size: 0x32 (50 bytes)
//======================================================================
int __fastcall anl::TCurve<double>::findControlPoint(int *a1, double a2)
{
  int v3; // r6
  int v4; // r7

  v3 = *a1;
  while ( 1 )
  {
    v4 = v3;
    if ( v3 == a1[1] )
      break;
    v3 += 16;
    if ( a2 <= *(double *)(v3 - 16) )
      return v4;
  }
  return v3;
}


//======================================================================
// anl::TCurve<double>::noInterp(double)
// address: 0x003165C8   size: 0x6E (110 bytes)
//======================================================================
__int64 __fastcall anl::TCurve<double>::noInterp(int *a1, double a2)
{
  double *v4; // r7
  int ControlPoint; // r0
  int v7; // r3
  int v8; // r0
  unsigned int v9; // [sp+0h] [bp-Ch]
  double *v10; // [sp+4h] [bp-8h]

  v10 = (double *)*a1;
  v9 = (a1[1] - *a1) >> 4;
  if ( v9 <= 1 )
    return 0;
  v4 = (double *)*a1;
  if ( a2 <= *v10 )
    return *((_QWORD *)v4 + 1);
  v4 = &v10[2 * v9 - 2];
  if ( a2 >= *v4 )
    return *((_QWORD *)v4 + 1);
  ControlPoint = anl::TCurve<double>::findControlPoint(a1, a2);
  v7 = a1[1];
  if ( ControlPoint == v7 )
    return 0;
  v8 = ControlPoint - 16;
  if ( v7 == v8 )
    return 0;
  else
    return *(_QWORD *)(v8 + 8);
}


//======================================================================
// anl::TCurve<double>::cubicInterp(double)
// address: 0x00316640   size: 0x108 (264 bytes)
//======================================================================
double __fastcall anl::TCurve<double>::cubicInterp(int *a1, double a2)
{
  double *v5; // r7
  double *ControlPoint; // r0
  double *v8; // r3
  double v9; // r0
  double *v10; // [sp+0h] [bp-1Ch]
  double *v11; // [sp+0h] [bp-1Ch]
  unsigned int v12; // [sp+4h] [bp-18h]
  double *v13; // [sp+4h] [bp-18h]

  v10 = (double *)*a1;
  v12 = (a1[1] - *a1) >> 4;
  if ( v12 <= 1 )
    return 0.0;
  v5 = (double *)*a1;
  if ( a2 <= *v10 )
    return v5[1];
  v5 = &v10[2 * v12 - 2];
  if ( a2 >= *v5 )
    return v5[1];
  ControlPoint = (double *)anl::TCurve<double>::findControlPoint(a1, a2);
  v8 = (double *)a1[1];
  v11 = ControlPoint;
  if ( ControlPoint == v8 )
    return 0.0;
  v13 = ControlPoint - 2;
  if ( v8 == ControlPoint - 2 )
    return 0.0;
  v9 = (a2 - *(ControlPoint - 2)) / (*ControlPoint - *(ControlPoint - 2));
  return v13[1] + (v11[1] - v13[1]) * (v9 * v9 * (3.0 - (v9 + v9)));
}


//======================================================================
// anl::TCurve<double>::quinticInterp(double)
// address: 0x00316758   size: 0x122 (290 bytes)
//======================================================================
double __fastcall anl::TCurve<double>::quinticInterp(int *a1, double a2)
{
  double *v5; // r7
  double *ControlPoint; // r0
  double *v8; // r3
  double v9; // r0
  double *v10; // [sp+0h] [bp-1Ch]
  double *v11; // [sp+0h] [bp-1Ch]
  unsigned int v12; // [sp+4h] [bp-18h]
  double *v13; // [sp+4h] [bp-18h]

  v10 = (double *)*a1;
  v12 = (a1[1] - *a1) >> 4;
  if ( v12 <= 1 )
    return 0.0;
  v5 = (double *)*a1;
  if ( a2 <= *v10 )
    return v5[1];
  v5 = &v10[2 * v12 - 2];
  if ( a2 >= *v5 )
    return v5[1];
  ControlPoint = (double *)anl::TCurve<double>::findControlPoint(a1, a2);
  v8 = (double *)a1[1];
  v11 = ControlPoint;
  if ( ControlPoint == v8 )
    return 0.0;
  v13 = ControlPoint - 2;
  if ( v8 == ControlPoint - 2 )
    return 0.0;
  v9 = (a2 - *(ControlPoint - 2)) / (*ControlPoint - *(ControlPoint - 2));
  return v13[1] + (v11[1] - v13[1]) * (v9 * v9 * v9 * (v9 * (v9 * 6.0 - 15.0) + 10.0));
}


//======================================================================
// anl::TCurve<double>::linearInterp(double)
// address: 0x003168A0   size: 0xC0 (192 bytes)
//======================================================================
double __fastcall anl::TCurve<double>::linearInterp(int *a1, double a2)
{
  double *v3; // r5
  unsigned int v5; // r6
  double *ControlPoint; // r0
  double *v8; // r2

  v3 = (double *)*a1;
  v5 = (a1[1] - *a1) >> 4;
  if ( v5 <= 1 )
    return 0.0;
  if ( a2 <= *v3 )
    return v3[1];
  v3 += 2 * v5 - 2;
  if ( a2 >= *v3 )
    return v3[1];
  ControlPoint = (double *)anl::TCurve<double>::findControlPoint(a1, a2);
  v8 = (double *)a1[1];
  if ( ControlPoint == v8 || v8 == ControlPoint - 2 )
    return 0.0;
  else
    return *(ControlPoint - 1)
         + (ControlPoint[1] - *(ControlPoint - 1))
         * ((a2 - *(ControlPoint - 2))
          / (*ControlPoint - *(ControlPoint - 2)));
}


//======================================================================
// anl::TCurve<TVec4D<float>>::findControlPoint(double)
// address: 0x00316D20   size: 0x32 (50 bytes)
//======================================================================
int __fastcall anl::TCurve<TVec4D<float>>::findControlPoint(int *a1, double a2)
{
  int v3; // r6
  int v4; // r7

  v3 = *a1;
  while ( 1 )
  {
    v4 = v3;
    if ( v3 == a1[1] )
      break;
    v3 += 24;
    if ( a2 <= *(double *)(v3 - 24) )
      return v4;
  }
  return v3;
}


//======================================================================
// anl::TCurve<TVec4D<float>>::noInterp(double)
// address: 0x00316D54   size: 0x7A (122 bytes)
//======================================================================
_DWORD *__fastcall anl::TCurve<TVec4D<float>>::noInterp(_DWORD *a1, int *a2, double a3)
{
  double *v3; // r6
  unsigned int v6; // r7
  _DWORD *v7; // r1
  int ControlPoint; // r0
  int v9; // r3

  v3 = (double *)*a2;
  v6 = -1431655765 * ((a2[1] - *a2) >> 3);
  if ( v6 > 1 )
  {
    if ( a3 <= *v3 || (v3 += 3 * v6 - 3, a3 >= *v3) )
    {
      v7 = v3 + 1;
LABEL_9:
      TVec4D<float>::TVec4D(a1, v7);
      return a1;
    }
    ControlPoint = anl::TCurve<TVec4D<float>>::findControlPoint(a2, a3);
    v9 = a2[1];
    if ( ControlPoint != v9 && v9 != ControlPoint - 24 )
    {
      v7 = (_DWORD *)(ControlPoint - 16);
      goto LABEL_9;
    }
  }
  *a1 = 0;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  return a1;
}


//======================================================================
// anl::TCurve<TVec4D<float>>::cubicInterp(double)
// address: 0x00316DD8   size: 0x190 (400 bytes)
//======================================================================
float *__fastcall anl::TCurve<TVec4D<float>>::cubicInterp(float *a1, int *a2, double a3)
{
  int v3; // r5
  unsigned int v6; // r6
  double *ControlPoint; // r0
  double *v8; // r2
  double *v9; // r6
  double *v10; // r3
  double v11; // r4
  double v12; // r0
  float v13; // r0
  float v14; // r6
  float v15; // r0
  float v16; // r0
  float v17; // r0
  double v20; // [sp+0h] [bp-34h]
  float v21; // [sp+10h] [bp-24h] BYREF
  float v22; // [sp+14h] [bp-20h]
  float v23; // [sp+18h] [bp-1Ch]
  float v24; // [sp+1Ch] [bp-18h]
  float v25[5]; // [sp+20h] [bp-14h] BYREF

  v3 = *a2;
  v6 = -1431655765 * ((a2[1] - *a2) >> 3);
  if ( v6 <= 1 )
  {
LABEL_6:
    *a1 = 0.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
    a1[3] = 0.0;
    return a1;
  }
  if ( a3 > *(double *)v3 )
  {
    v3 += 24 * (v6 - 1);
    if ( a3 < *(double *)v3 )
    {
      ControlPoint = (double *)anl::TCurve<TVec4D<float>>::findControlPoint(a2, a3);
      v8 = (double *)a2[1];
      v9 = ControlPoint;
      if ( ControlPoint != v8 )
      {
        v10 = ControlPoint - 3;
        if ( v8 != ControlPoint - 3 )
        {
          LODWORD(v11) = *(_DWORD *)v10;
          HIDWORD(v11) = *((_DWORD *)ControlPoint - 5);
          v12 = (a3 - *v10) / (*ControlPoint - v11);
          v20 = v12 * v12 * (3.0 - (v12 + v12));
          TVec4D<float>::TVec4D(&v21, (_DWORD *)v9 - 4);
          TVec4D<float>::TVec4D(v25, (_DWORD *)v9 + 2);
          v13 = (float)(v25[1] - v22) * v20;
          v14 = v22 + v13;
          v15 = (float)(v25[2] - v23) * v20;
          *((float *)&v11 + 1) = v23 + v15;
          v16 = (float)(v25[3] - v24) * v20;
          *(float *)&v11 = v24 + v16;
          v17 = (float)(v25[0] - v21) * v20;
          *a1 = v21 + v17;
          a1[1] = v14;
          a1[2] = *((float *)&v11 + 1);
          a1[3] = *(float *)&v11;
          return a1;
        }
      }
      goto LABEL_6;
    }
  }
  TVec4D<float>::TVec4D(a1, (_DWORD *)(v3 + 8));
  return a1;
}


//======================================================================
// anl::TCurve<TVec4D<float>>::quinticInterp(double)
// address: 0x00316F78   size: 0x1A8 (424 bytes)
//======================================================================
float *__fastcall anl::TCurve<TVec4D<float>>::quinticInterp(float *a1, int *a2, double a3)
{
  int v3; // r5
  unsigned int v6; // r6
  double *ControlPoint; // r0
  double *v8; // r2
  double *v9; // r6
  double *v10; // r3
  double v11; // r4
  double v12; // r0
  float v13; // r0
  float v14; // r6
  float v15; // r0
  float v16; // r0
  float v17; // r0
  double v20; // [sp+0h] [bp-34h]
  float v21; // [sp+10h] [bp-24h] BYREF
  float v22; // [sp+14h] [bp-20h]
  float v23; // [sp+18h] [bp-1Ch]
  float v24; // [sp+1Ch] [bp-18h]
  float v25[5]; // [sp+20h] [bp-14h] BYREF

  v3 = *a2;
  v6 = -1431655765 * ((a2[1] - *a2) >> 3);
  if ( v6 <= 1 )
  {
LABEL_6:
    *a1 = 0.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
    a1[3] = 0.0;
    return a1;
  }
  if ( a3 > *(double *)v3 )
  {
    v3 += 24 * (v6 - 1);
    if ( a3 < *(double *)v3 )
    {
      ControlPoint = (double *)anl::TCurve<TVec4D<float>>::findControlPoint(a2, a3);
      v8 = (double *)a2[1];
      v9 = ControlPoint;
      if ( ControlPoint != v8 )
      {
        v10 = ControlPoint - 3;
        if ( v8 != ControlPoint - 3 )
        {
          LODWORD(v11) = *(_DWORD *)v10;
          HIDWORD(v11) = *((_DWORD *)ControlPoint - 5);
          v12 = (a3 - *v10) / (*ControlPoint - v11);
          v20 = v12 * v12 * v12 * (v12 * (v12 * 6.0 - 15.0) + 10.0);
          TVec4D<float>::TVec4D(&v21, (_DWORD *)v9 - 4);
          TVec4D<float>::TVec4D(v25, (_DWORD *)v9 + 2);
          v13 = (float)(v25[1] - v22) * v20;
          v14 = v22 + v13;
          v15 = (float)(v25[2] - v23) * v20;
          *((float *)&v11 + 1) = v23 + v15;
          v16 = (float)(v25[3] - v24) * v20;
          *(float *)&v11 = v24 + v16;
          v17 = (float)(v25[0] - v21) * v20;
          *a1 = v21 + v17;
          a1[1] = v14;
          a1[2] = *((float *)&v11 + 1);
          a1[3] = *(float *)&v11;
          return a1;
        }
      }
      goto LABEL_6;
    }
  }
  TVec4D<float>::TVec4D(a1, (_DWORD *)(v3 + 8));
  return a1;
}


//======================================================================
// anl::TCurve<TVec4D<float>>::linearInterp(double)
// address: 0x00317140   size: 0x15C (348 bytes)
//======================================================================
float *__fastcall anl::TCurve<TVec4D<float>>::linearInterp(float *a1, int *a2, double a3)
{
  int v3; // r5
  unsigned int v6; // r6
  double *ControlPoint; // r0
  double *v8; // r2
  double *v9; // r6
  double *v10; // r3
  double v11; // r4
  float v12; // r0
  float v13; // r6
  float v14; // r0
  float v15; // r0
  float v16; // r0
  double v19; // [sp+0h] [bp-34h]
  float v20; // [sp+10h] [bp-24h] BYREF
  float v21; // [sp+14h] [bp-20h]
  float v22; // [sp+18h] [bp-1Ch]
  float v23; // [sp+1Ch] [bp-18h]
  float v24[5]; // [sp+20h] [bp-14h] BYREF

  v3 = *a2;
  v6 = -1431655765 * ((a2[1] - *a2) >> 3);
  if ( v6 <= 1 )
  {
LABEL_6:
    *a1 = 0.0;
    a1[1] = 0.0;
    a1[2] = 0.0;
    a1[3] = 0.0;
    return a1;
  }
  if ( a3 > *(double *)v3 )
  {
    v3 += 24 * (v6 - 1);
    if ( a3 < *(double *)v3 )
    {
      ControlPoint = (double *)anl::TCurve<TVec4D<float>>::findControlPoint(a2, a3);
      v8 = (double *)a2[1];
      v9 = ControlPoint;
      if ( ControlPoint != v8 )
      {
        v10 = ControlPoint - 3;
        if ( v8 != ControlPoint - 3 )
        {
          LODWORD(v11) = *(_DWORD *)v10;
          HIDWORD(v11) = *((_DWORD *)ControlPoint - 5);
          v19 = (a3 - *v10) / (*ControlPoint - v11);
          TVec4D<float>::TVec4D(&v20, (_DWORD *)ControlPoint - 4);
          TVec4D<float>::TVec4D(v24, (_DWORD *)v9 + 2);
          v12 = (float)(v24[1] - v21) * v19;
          v13 = v21 + v12;
          v14 = (float)(v24[2] - v22) * v19;
          *((float *)&v11 + 1) = v22 + v14;
          v15 = (float)(v24[3] - v23) * v19;
          *(float *)&v11 = v23 + v15;
          v16 = (float)(v24[0] - v20) * v19;
          *a1 = v20 + v16;
          a1[1] = v13;
          a1[2] = *((float *)&v11 + 1);
          a1[3] = *(float *)&v11;
          return a1;
        }
      }
      goto LABEL_6;
    }
  }
  TVec4D<float>::TVec4D(a1, (_DWORD *)(v3 + 8));
  return a1;
}

