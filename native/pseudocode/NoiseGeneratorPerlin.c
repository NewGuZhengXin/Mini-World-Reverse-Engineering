// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: NoiseGeneratorPerlin

//======================================================================
// NoiseGeneratorPerlin::NoiseGeneratorPerlin(ChunkRandGen &)
// address: 0x002C0770   size: 0x98 (152 bytes)
//======================================================================
// Alternative name is '_ZN20NoiseGeneratorPerlinC2ER12ChunkRandGen'
void __fastcall NoiseGeneratorPerlin::NoiseGeneratorPerlin(NoiseGeneratorPerlin *this, ChunkRandGen *a2)
{
  int i; // r3
  int *v5; // r5
  int v6; // r7
  char *v7; // r1
  _DWORD *v8; // r3
  int v9; // r2
  int v10; // [sp+4h] [bp-8h]

  *(double *)this = ChunkRandGen::getDouble(a2) * 256.0;
  *((double *)this + 1) = ChunkRandGen::getDouble(a2) * 256.0;
  *((double *)this + 2) = ChunkRandGen::getDouble(a2) * 256.0;
  for ( i = 0; i != 256; ++i )
    *((_DWORD *)this + i + 6) = i;
  v5 = (int *)((char *)this + 24);
  v6 = 0;
  do
  {
    ChunkRandGen::_dorand48((unsigned __int16 *)a2);
    v10 = *v5;
    v7 = (char *)this
       + 4 * (((*((unsigned __int16 *)a2 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a2 + 1)) % (256 - v6))
       + 4 * v6;
    ++v6;
    *v5 = *((_DWORD *)v7 + 6);
    *((_DWORD *)v7 + 6) = v10;
    v8 = v5 + 256;
    v9 = *v5++;
    *v8 = v9;
  }
  while ( v6 != 256 );
}


//======================================================================
// NoiseGeneratorPerlin::populateNoiseArray(std::vector<double,std::allocator<double>> &,double,double,double,int,int,int,double,double,double,double)
// address: 0x002C0810   size: 0x906 (2310 bytes)
//======================================================================
int __fastcall NoiseGeneratorPerlin::populateNoiseArray(
        double *a1,
        _DWORD *a2,
        double a3,
        double a4,
        double a5,
        int a6,
        int a7,
        int a8,
        double a9,
        double a10,
        double a11,
        double a12)
{
  double v12; // r4
  double v13; // kr00_8
  int i; // r4
  double v15; // r6
  double v16; // kr08_8
  int v17; // r5
  int v18; // r7
  double v19; // r0
  double v20; // r2
  unsigned int v21; // r5
  unsigned int v22; // r6
  double v23; // r6
  double v25; // r4
  int j; // r4
  double v27; // r4
  int k; // r4
  double v29; // r4
  double v30; // r6
  int v31; // r3
  int v32; // r3
  double v33; // r0
  double v34; // r0
  double v35; // r0
  double v36; // r0
  double v37; // [sp+18h] [bp-B4h]
  double v38; // [sp+20h] [bp-ACh]
  double v39; // [sp+28h] [bp-A4h]
  int v40; // [sp+28h] [bp-A4h]
  int v42; // [sp+34h] [bp-98h]
  int v43; // [sp+34h] [bp-98h]
  int v44; // [sp+38h] [bp-94h]
  int v45; // [sp+38h] [bp-94h]
  int v46; // [sp+3Ch] [bp-90h]
  double v47; // [sp+40h] [bp-8Ch]
  int v48; // [sp+40h] [bp-8Ch]
  double v49; // [sp+40h] [bp-8Ch]
  double v50; // [sp+48h] [bp-84h]
  double v51; // [sp+48h] [bp-84h]
  double v52; // [sp+50h] [bp-7Ch]
  int v53; // [sp+50h] [bp-7Ch]
  int v54; // [sp+58h] [bp-74h]
  int v55; // [sp+58h] [bp-74h]
  int v56; // [sp+5Ch] [bp-70h]
  int v57; // [sp+5Ch] [bp-70h]
  int v58; // [sp+60h] [bp-6Ch]
  double v59; // [sp+60h] [bp-6Ch]
  double v60; // [sp+70h] [bp-5Ch]
  int v61; // [sp+78h] [bp-54h]
  int v62; // [sp+7Ch] [bp-50h]
  double v63; // [sp+80h] [bp-4Ch]
  double v64; // [sp+88h] [bp-44h]
  double v65; // [sp+90h] [bp-3Ch]
  int v66; // [sp+98h] [bp-34h]
  int v67; // [sp+9Ch] [bp-30h]
  int v68; // [sp+A0h] [bp-2Ch]

  if ( a7 == 1 )
  {
    v44 = 0;
    v54 = 0;
    while ( 1 )
    {
      if ( v44 >= a6 )
        sub_2C1116();
      v12 = a3 + (double)v44 * a9 + *a1;
      v42 = (unsigned __int8)((int)v12 - (v12 < (double)(int)v12));
      v13 = v12 - (double)((int)v12 - (v12 < (double)(int)v12));
      v52 = v13 * v13 * v13 * (v13 * (v13 * 6.0 - 15.0) + 10.0);
      for ( i = 0; i < a8; ++i )
      {
        v15 = a5 + (double)i * a11 + a1[2];
        v16 = v15 - (double)((int)v15 - (v15 < (double)(int)v15));
        v17 = (unsigned __int8)((int)v15 - (v15 < (double)(int)v15));
        v56 = v17 + *((_DWORD *)a1 + *((_DWORD *)a1 + v42 + 6) + 6);
        v58 = v17 + *((_DWORD *)a1 + *((_DWORD *)a1 + v42 + 7) + 6);
        v18 = *((_DWORD *)a1 + v56 + 6);
        v19 = (double)(int)(1 - ((unsigned int)(v18 << 28) >> 31)) * v13;
        v20 = v19;
        if ( (v18 & 0xFu) <= 3 )
        {
          v21 = 0;
          v22 = 0;
        }
        else if ( (v18 & 0xD) == 0xC )
        {
          v22 = HIDWORD(v13);
          v21 = LODWORD(v13);
        }
        else
        {
          v22 = HIDWORD(v16);
          v21 = LODWORD(v16);
        }
        if ( (v18 & 1) != 0 )
          HIDWORD(v20) = HIDWORD(v19) + 0x80000000;
        if ( (v18 & 2) != 0 )
          v22 += 0x80000000;
        v47 = v20
            + COERCE_DOUBLE(__PAIR64__(v22, v21))
            + v52
            * (sub_2C070C(
                 *((_DWORD *)a1 + v58 + 6),
                 (int)a1,
                 COERCE_UNSIGNED_INT64(v13 - 1.0),
                 HIDWORD(COERCE_UNSIGNED_INT64(v13 - 1.0)),
                 0,
                 0,
                 SLODWORD(v16),
                 HIDWORD(v16))
             - (v20
              + COERCE_DOUBLE(__PAIR64__(v22, v21))));
        v23 = sub_2C070C(
                *((_DWORD *)a1 + v56 + 7),
                (int)a1,
                LODWORD(v13),
                HIDWORD(v13),
                0,
                0,
                COERCE_UNSIGNED_INT64(v16 - 1.0),
                HIDWORD(COERCE_UNSIGNED_INT64(v16 - 1.0)));
        *(double *)(*a2 + 8 * (i + v54)) = *(double *)(*a2 + 8 * (i + v54))
                                         + (v47
                                          + v16
                                          * v16
                                          * v16
                                          * (v16 * (v16 * 6.0 - 15.0) + 10.0)
                                          * (v23
                                           + v52
                                           * (sub_2C070C(
                                                *((_DWORD *)a1 + v58 + 7),
                                                (int)a1,
                                                COERCE_UNSIGNED_INT64(v13 - 1.0),
                                                HIDWORD(COERCE_UNSIGNED_INT64(v13 - 1.0)),
                                                0,
                                                0,
                                                COERCE_UNSIGNED_INT64(v16 - 1.0),
                                                HIDWORD(COERCE_UNSIGNED_INT64(v16 - 1.0)))
                                            - v23)
                                           - v47))
                                         * (1.0
                                          / a12);
      }
      v54 += a8 & (~a8 >> 31);
      ++v44;
    }
  }
  v39 = 0.0;
  v63 = 0.0;
  v50 = 0.0;
  v64 = 0.0;
  v55 = 0;
  v62 = 0;
  v48 = -1;
  while ( v55 < a6 )
  {
    v25 = a3 + (double)v55 * a9 + *a1;
    v57 = (unsigned __int8)((int)v25 - (v25 < (double)(int)v25));
    v37 = v25 - (double)((int)v25 - (v25 < (double)(int)v25));
    v59 = v37 * v37 * v37 * (v37 * (v37 * 6.0 - 15.0) + 10.0);
    v61 = v62;
    for ( j = 0; ; j = v53 + 1 )
    {
      v53 = j;
      if ( j >= a8 )
        break;
      v27 = a5 + (double)j * a11 + a1[2];
      v46 = (unsigned __int8)((int)v27 - (v27 < (double)(int)v27));
      v38 = v27 - (double)((int)v27 - (v27 < (double)(int)v27));
      for ( k = 0; ; k = v45 + 1 )
      {
        v45 = k;
        if ( k >= a7 )
          break;
        v29 = a4 + (double)k * a10 + a1[1];
        v43 = (unsigned __int8)((int)v29 - (v29 < (double)(int)v29));
        v30 = v29 - (double)((int)v29 - (v29 < (double)(int)v29));
        if ( v45 == 0 || v43 != v48 )
        {
          v31 = v43 + *((_DWORD *)a1 + v57 + 6);
          v40 = v46 + *((_DWORD *)a1 + v31 + 6);
          v66 = v46 + *((_DWORD *)a1 + v31 + 7);
          v32 = v43 + *((_DWORD *)a1 + v57 + 7);
          v67 = v46 + *((_DWORD *)a1 + v32 + 6);
          v68 = v46 + *((_DWORD *)a1 + v32 + 7);
          v33 = sub_2C070C(
                  *((_DWORD *)a1 + v40 + 6),
                  SLODWORD(v38),
                  LODWORD(v37),
                  HIDWORD(v37),
                  LODWORD(v30),
                  HIDWORD(v30),
                  SLODWORD(v38),
                  HIDWORD(v38));
          v49 = v37 - 1.0;
          v63 = v33
              + v59
              * (sub_2C070C(
                   *((_DWORD *)a1 + v67 + 6),
                   SLODWORD(v38),
                   COERCE_UNSIGNED_INT64(v37 - 1.0),
                   HIDWORD(COERCE_UNSIGNED_INT64(v37 - 1.0)),
                   LODWORD(v30),
                   HIDWORD(v30),
                   SLODWORD(v38),
                   HIDWORD(v38))
               - v33);
          v51 = v30 - 1.0;
          v34 = sub_2C070C(
                  *((_DWORD *)a1 + v66 + 6),
                  COERCE_UNSIGNED_INT64(v30 - 1.0),
                  LODWORD(v37),
                  HIDWORD(v37),
                  COERCE_UNSIGNED_INT64(v30 - 1.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(v30 - 1.0)),
                  SLODWORD(v38),
                  HIDWORD(v38));
          v64 = v34
              + v59
              * (sub_2C070C(
                   *((_DWORD *)a1 + v68 + 6),
                   SLODWORD(v38),
                   LODWORD(v49),
                   HIDWORD(v49),
                   LODWORD(v51),
                   HIDWORD(v51),
                   SLODWORD(v38),
                   HIDWORD(v38))
               - v34);
          v60 = v38 - 1.0;
          v35 = sub_2C070C(
                  *((_DWORD *)a1 + v40 + 7),
                  COERCE_UNSIGNED_INT64(v38 - 1.0),
                  LODWORD(v37),
                  HIDWORD(v37),
                  LODWORD(v30),
                  HIDWORD(v30),
                  COERCE_UNSIGNED_INT64(v38 - 1.0),
                  HIDWORD(COERCE_UNSIGNED_INT64(v38 - 1.0)));
          v39 = v35
              + v59
              * (sub_2C070C(
                   *((_DWORD *)a1 + v67 + 7),
                   SLODWORD(v60),
                   LODWORD(v49),
                   HIDWORD(v49),
                   LODWORD(v30),
                   HIDWORD(v30),
                   SLODWORD(v60),
                   HIDWORD(v60))
               - v35);
          v36 = sub_2C070C(
                  *((_DWORD *)a1 + v66 + 7),
                  SLODWORD(v51),
                  LODWORD(v37),
                  HIDWORD(v37),
                  LODWORD(v51),
                  HIDWORD(v51),
                  SLODWORD(v60),
                  HIDWORD(v60));
          v50 = v36
              + v59
              * (sub_2C070C(
                   *((_DWORD *)a1 + v68 + 7),
                   SLODWORD(v60),
                   LODWORD(v49),
                   HIDWORD(v49),
                   LODWORD(v51),
                   HIDWORD(v51),
                   SLODWORD(v60),
                   HIDWORD(v60))
               - v36);
          v48 = (unsigned __int8)((int)v29 - (v29 < (double)(int)v29));
        }
        v65 = v30 * v30 * v30 * (v30 * (v30 * 6.0 - 15.0) + 10.0);
        *(double *)(*a2 + 8 * (v45 + v61)) = *(double *)(*a2 + 8 * (v45 + v61))
                                           + (v63
                                            + v65 * (v64 - v63)
                                            + v38
                                            * v38
                                            * v38
                                            * (v38 * (v38 * 6.0 - 15.0) + 10.0)
                                            * (v39 + v65 * (v50 - v39) - (v63 + v65 * (v64 - v63))))
                                           * (1.0
                                            / a12);
      }
      v61 += a7 & (~a7 >> 31);
    }
    v62 += ((~a8 >> 31) & a8) * (a7 & (~a7 >> 31));
    ++v55;
  }
  return sub_2C1116();
}

