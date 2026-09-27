// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MapGenCaves

//======================================================================
// MapGenCaves::~MapGenCaves()
// address: 0x002D9D2C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN11MapGenCavesD1Ev'
void __fastcall MapGenCaves::~MapGenCaves(MapGenCaves *this)
{
  *(_DWORD *)this = &off_45EA48;
}


//======================================================================
// MapGenCaves::~MapGenCaves()
// address: 0x002D9D3C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall MapGenCaves::~MapGenCaves(MapGenCaves *this)
{
  *(_DWORD *)this = &off_45EA48;
  operator delete(this);
}


//======================================================================
// MapGenCaves::generateCaveNode(long long,int,int,ChunkGenData &,double,double,double,float,float,float,int,int,double)
// address: 0x002D9D78   size: 0x80A (2058 bytes)
//======================================================================
int __fastcall MapGenCaves::generateCaveNode(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        _DWORD *a5,
        double a6,
        double a7,
        double a8,
        int a9,
        Ogre *a10,
        Ogre *a11,
        int a12,
        int a13,
        double a14)
{
  int v17; // r5
  unsigned int v18; // r0
  double v19; // r0
  float v20; // r1
  float v21; // r0
  float v22; // r1
  float v23; // r4
  float v24; // r5
  float v25; // r0
  float v26; // r1
  float Float; // r5
  float v28; // r5
  float v29; // r0
  float v30; // r5
  float v31; // r5
  __int64 v32; // r0
  int v33; // r1
  __int64 v34; // r0
  int v35; // r1
  double v36; // r6
  double v37; // r4
  double v38; // r6
  double v39; // r4
  int v40; // r5
  int v41; // r4
  int v42; // r2
  unsigned int v43; // r3
  double v44; // r4
  double v45; // r4
  _WORD *v46; // r3
  int v47; // r2
  _WORD *v48; // r4
  int v50; // [sp+Ch] [bp-F8h]
  int v51; // [sp+Ch] [bp-F8h]
  int v52; // [sp+28h] [bp-DCh]
  int v53; // [sp+28h] [bp-DCh]
  int v54; // [sp+3Ch] [bp-C8h]
  int v55; // [sp+3Ch] [bp-C8h]
  __int64 v56; // [sp+60h] [bp-A4h]
  __int64 v57; // [sp+60h] [bp-A4h]
  int v58; // [sp+60h] [bp-A4h]
  int v59; // [sp+68h] [bp-9Ch]
  float v60; // [sp+70h] [bp-94h]
  int v61; // [sp+70h] [bp-94h]
  int i; // [sp+74h] [bp-90h]
  int v63; // [sp+78h] [bp-8Ch]
  int v64; // [sp+7Ch] [bp-88h]
  int v65; // [sp+80h] [bp-84h]
  int v66; // [sp+84h] [bp-80h]
  float v67; // [sp+88h] [bp-7Ch]
  float v69; // [sp+90h] [bp-74h]
  int v70; // [sp+94h] [bp-70h]
  double v71; // [sp+98h] [bp-6Ch]
  double v72; // [sp+A0h] [bp-64h]
  int v73; // [sp+B0h] [bp-54h]
  int v74; // [sp+B8h] [bp-4Ch]
  int v75; // [sp+B8h] [bp-4Ch]
  int v76; // [sp+BCh] [bp-48h]
  int v77; // [sp+C0h] [bp-44h]
  double v78; // [sp+C8h] [bp-3Ch]
  double v79; // [sp+D8h] [bp-2Ch]
  unsigned int v80; // [sp+E8h] [bp-1Ch]
  int v81; // [sp+ECh] [bp-18h]
  _BYTE v82[12]; // [sp+F8h] [bp-Ch] BYREF

  v76 = 16 * a3;
  v71 = (double)(16 * a3 + 8);
  v77 = 16 * a4;
  v72 = (double)(16 * a4 + 8);
  ChunkRandGen::ChunkRandGen((ChunkRandGen *)v82, a2);
  if ( a13 <= 0 )
  {
    v17 = 16 * (*(_DWORD *)(a1 + 4) - 1);
    a13 = v17 - ChunkRandGen::get((ChunkRandGen *)v82) % (unsigned int)(v17 >> 2);
  }
  v70 = 0;
  if ( a12 == -1 )
  {
    v70 = 1;
    a12 = a13 / 2;
  }
  v80 = ChunkRandGen::get((ChunkRandGen *)v82) % (unsigned int)(a13 / 2) + a13 / 4;
  v18 = ChunkRandGen::get((ChunkRandGen *)v82);
  HIDWORD(v19) = v18 % 6;
  LODWORD(v19) = v18 / 6;
  v81 = HIDWORD(v19);
  v67 = 0.0;
  v69 = 0.0;
  while ( 1 )
  {
    if ( a12 >= a13 )
      return LODWORD(v19);
    v60 = Ogre::Sin(COERCE_OGRE_((float)((float)a12 * 180.0) / (float)a13), v20);
    v21 = j_cos((float)(*(float *)&a11 * 0.017453));
    v23 = v21;
    v24 = Ogre::Sin(a11, v22);
    v25 = j_cos((float)(*(float *)&a10 * 0.017453));
    a6 = a6 + (float)(v25 * v23);
    a7 = a7 + v24;
    a8 = a8 + (float)(Ogre::Sin(a10, *((float *)&a7 + 1)) * v23);
    v26 = v81 != 0 ? 0.7 : 0.92;
    *(float *)&a11 = (float)(*(float *)&a11 * v26) + (float)(v67 * 0.1);
    *(float *)&a10 = *(float *)&a10 + (float)(v69 * 0.1);
    Float = ChunkRandGen::getFloat((ChunkRandGen *)v82);
    v28 = Float - ChunkRandGen::getFloat((ChunkRandGen *)v82);
    v29 = ChunkRandGen::getFloat((ChunkRandGen *)v82);
    v67 = (float)(v67 * 0.9) + (float)((float)(v28 * v29) + (float)(v28 * v29));
    v30 = ChunkRandGen::getFloat((ChunkRandGen *)v82);
    v31 = v30 - ChunkRandGen::getFloat((ChunkRandGen *)v82);
    v69 = (float)(v69 * 0.75) + (float)((float)(v31 * ChunkRandGen::getFloat((ChunkRandGen *)v82)) * 4.0);
    if ( v70 == 0 )
      break;
LABEL_16:
    v36 = (float)((float)(*(float *)&a9 + 2.0) + 16.0);
    v37 = (a6 - v71) * (a6 - v71) + (a8 - v72) * (a8 - v72) - (double)(a13 - a12) * (double)(a13 - a12);
    LODWORD(v19) = v37 > v36 * v36;
    if ( v37 > v36 * v36 )
      return LODWORD(v19);
    v38 = (float)(v60 * *(float *)&a9) + 1.5;
    v39 = v38 + v38;
    LODWORD(v19) = a6 >= v71 - 16.0 - (v38 + v38);
    if ( a6 >= v71 - 16.0 - (v38 + v38) )
    {
      LODWORD(v19) = a8 >= v72 - 16.0 - v39;
      if ( a8 >= v72 - 16.0 - v39 )
      {
        LODWORD(v19) = a6 <= v71 + 16.0 + v39;
        if ( a6 <= v71 + 16.0 + v39 )
        {
          LODWORD(v19) = a8 <= v72 + 16.0 + v39;
          if ( a8 <= v72 + 16.0 + v39 )
          {
            v40 = MyFloor(a6 - v38) - 16 * a3 - 1;
            v58 = MyFloor(a6 + v38) - 16 * a3 + 1;
            v65 = MyFloor(a7 - v38 * a14) - 1;
            v61 = MyFloor(a7 + v38 * a14) + 1;
            v59 = v40 & (~v40 >> 31);
            v41 = MyFloor(a8 - v38) - 16 * a4 - 1;
            LODWORD(v19) = MyFloor(a8 + v38) - 16 * a4 + 1;
            if ( v58 > 16 )
              v58 = 16;
            if ( v65 <= 0 )
              v65 = 1;
            if ( v61 > 120 )
              v61 = 120;
            v73 = v41 & (~v41 >> 31);
            v66 = LODWORD(v19);
            if ( SLODWORD(v19) > 16 )
              v66 = 16;
            HIDWORD(v19) = v40 & (~v40 >> 31);
            v74 = v65 - 1;
            while ( SHIDWORD(v19) < v58 )
            {
              v42 = v41 & (~v41 >> 31);
              while ( v42 < v66 )
              {
                v43 = v61 + 1;
                do
                {
                  LODWORD(v19) = 0;
                  if ( (int)v43 < v74 )
                    break;
                  if ( v43 <= 0x7F )
                  {
                    LODWORD(v19) = (unsigned int)*(unsigned __int16 *)(2 * ((v43 << 8) | (16 * v42) | HIDWORD(v19)) + *a5)
                                 - 3 <= 1;
                    if ( v43 != v74 && HIDWORD(v19) != v59 && HIDWORD(v19) != v58 - 1 && v42 != v73 && v42 != v66 - 1 )
                      v43 = v65;
                  }
                  --v43;
                }
                while ( LODWORD(v19) == 0 );
                ++v42;
                if ( LODWORD(v19) != 0 )
                  goto LABEL_47;
              }
              LODWORD(v19) = 0;
LABEL_47:
              ++HIDWORD(v19);
              if ( LODWORD(v19) != 0 )
                goto LABEL_18;
            }
            while ( v59 < v58 )
            {
              v19 = ((double)(v59 + v76) + 0.5 - a6) / v38;
              v78 = v19;
              for ( i = v73; i < v66; ++i )
              {
                v19 = ((double)(i + v77) + 0.5 - a8) / v38;
                v44 = v19;
                v79 = v19 * v19;
                LODWORD(v19) = v78 * v78 + v19 * v19 < 1.0;
                if ( v78 * v78 + v44 * v44 < 1.0 )
                {
                  v63 = v61 - 1;
                  v64 = 2 * ((16 * i) | v59 | (v61 << 8));
                  v75 = 0;
                  while ( v63 >= v65 )
                  {
                    v45 = ((double)v63 + 0.5 - a7) / (v38 * a14);
                    if ( v45 > -0.7 && v78 * v78 + v45 * v45 + v79 < 1.0 )
                    {
                      v46 = (_WORD *)(*a5 + v64);
                      v47 = (unsigned __int16)*v46;
                      if ( v47 == 100 )
                      {
                        v75 = 1;
                      }
                      else if ( v47 != 104 && v47 != 101 )
                      {
                        goto LABEL_68;
                      }
                      if ( v63 > 9 )
                      {
                        *v46 = 0;
                        if ( v75 != 0 )
                        {
                          v48 = (_WORD *)(*a5 + v64 - 512);
                          if ( *v48 == 101 )
                            *v48 = *(_DWORD *)(World::getBiome(*(World **)(a1 + 16), v59 + v76, i + v77) + 56);
                        }
                      }
                      else
                      {
                        *v46 = 6;
                      }
                    }
LABEL_68:
                    LODWORD(v19) = -512;
                    --v63;
                    v64 -= 512;
                  }
                }
              }
              ++v59;
            }
            if ( v70 != 0 )
              return LODWORD(v19);
          }
        }
      }
    }
LABEL_18:
    ++a12;
  }
  if ( a12 != v80 || *(float *)&a9 <= 1.0 || a13 <= 0 )
  {
    LODWORD(v19) = ChunkRandGen::get((ChunkRandGen *)v82);
    if ( LODWORD(v19) << 30 == 0 )
      goto LABEL_18;
    goto LABEL_16;
  }
  LODWORD(v32) = ChunkRandGen::get64((ChunkRandGen *)v82);
  v56 = v32;
  *(float *)&v52 = (float)(ChunkRandGen::getFloat((ChunkRandGen *)v82) * 0.5) + 0.5;
  MapGenCaves::generateCaveNode(
    a1,
    v33,
    v56,
    SHIDWORD(v56),
    a3,
    a4,
    (int)a5,
    v50,
    SLODWORD(a6),
    SHIDWORD(a6),
    SLODWORD(a7),
    SHIDWORD(a7),
    SLODWORD(a8),
    SHIDWORD(a8),
    v52,
    COERCE_OGRE_(*(float *)&a10 - 90.0),
    COERCE_OGRE_(*(float *)&a11 / 3.0),
    a12,
    a13,
    v54,
    0,
    1072693248);
  LODWORD(v34) = ChunkRandGen::get64((ChunkRandGen *)v82);
  v57 = v34;
  *(float *)&v53 = (float)(ChunkRandGen::getFloat((ChunkRandGen *)v82) * 0.5) + 0.5;
  LODWORD(v19) = MapGenCaves::generateCaveNode(
                   a1,
                   v35,
                   v57,
                   SHIDWORD(v57),
                   a3,
                   a4,
                   (int)a5,
                   v51,
                   SLODWORD(a6),
                   SHIDWORD(a6),
                   SLODWORD(a7),
                   SHIDWORD(a7),
                   SLODWORD(a8),
                   SHIDWORD(a8),
                   v53,
                   COERCE_OGRE_(*(float *)&a10 + 90.0),
                   COERCE_OGRE_(*(float *)&a11 / 3.0),
                   a12,
                   a13,
                   v55,
                   0,
                   1072693248);
  return LODWORD(v19);
}


//======================================================================
// MapGenCaves::generateLargeCaveNode(long long,int,int,ChunkGenData &,double,double,double)
// address: 0x002DA588   size: 0x68 (104 bytes)
//======================================================================
int __fastcall MapGenCaves::generateLargeCaveNode(
        int a1,
        __int64 a2,
        int a3,
        int a4,
        _DWORD *a5,
        double a6,
        double a7,
        double a8)
{
  int v11; // r0

  *(float *)&v11 = (float)(ChunkRandGen::getFloat((ChunkRandGen *)(a1 + 8)) * 6.0) + 1.0;
  return MapGenCaves::generateCaveNode(a1, a2, a3, a4, a5, a6, a7, a8, v11, nullptr, nullptr, -1, -1, 0.5);
}


//======================================================================
// MapGenCaves::recursiveGenerate(World *,int,int,int,int,ChunkGenData &)
// address: 0x002DA600   size: 0x1FE (510 bytes)
//======================================================================
signed int __fastcall MapGenCaves::recursiveGenerate(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  ChunkRandGen *v7; // r4
  unsigned int v8; // r7
  unsigned int v9; // r6
  unsigned int v10; // r5
  signed int result; // r0
  unsigned int v12; // r7
  __int64 v13; // r0
  int v14; // r6
  float Float; // r0
  float v16; // r5
  int v17; // r5
  float v18; // r7
  __int64 v19; // r0
  signed int i; // [sp+48h] [bp-3Ch]
  int v23; // [sp+4Ch] [bp-38h]
  signed int v25; // [sp+54h] [bp-30h]
  double v26; // [sp+58h] [bp-2Ch]
  double v27; // [sp+60h] [bp-24h]
  double v28; // [sp+68h] [bp-1Ch]
  int v29; // [sp+70h] [bp-14h]
  int v30; // [sp+74h] [bp-10h]
  Ogre *v31; // [sp+78h] [bp-Ch]
  Ogre *v32; // [sp+7Ch] [bp-8h]

  v7 = (ChunkRandGen *)(a1 + 8);
  v8 = ChunkRandGen::get((ChunkRandGen *)(a1 + 8));
  v9 = ChunkRandGen::get(v7);
  v10 = ChunkRandGen::get(v7);
  v25 = 0;
  if ( ChunkRandGen::get(v7) % 0xFu == 0 )
    v25 = v10 % (v9 % (v8 % 0x28 + 1) + 1);
  v29 = 16 * a3;
  v30 = 16 * a4;
  for ( i = 0; ; ++i )
  {
    result = v25;
    if ( i >= v25 )
      break;
    v26 = (double)(v29 + (ChunkRandGen::get(v7) & 0xF));
    v12 = ChunkRandGen::get(v7);
    v27 = (double)(int)(ChunkRandGen::get(v7) % (v12 % 0x78 + 8));
    v28 = (double)(v30 + (ChunkRandGen::get(v7) & 0xF));
    v23 = 1;
    if ( (ChunkRandGen::get(v7) & 3) == 0 )
    {
      LODWORD(v13) = ChunkRandGen::get64(v7);
      MapGenCaves::generateLargeCaveNode(a1, v13, a5, a6, a7, v26, v27, v28);
      v23 = (ChunkRandGen::get(v7) & 3) + 1;
    }
    v14 = 0;
    do
    {
      *(float *)&v31 = ChunkRandGen::getFloat(v7) * 360.0;
      Float = ChunkRandGen::getFloat(v7);
      *(float *)&v32 = (float)((float)(Float - 0.5) + (float)(Float - 0.5)) * 0.125;
      v16 = ChunkRandGen::getFloat(v7);
      *(float *)&v17 = (float)(v16 + v16) + ChunkRandGen::getFloat(v7);
      if ( ChunkRandGen::get(v7) % 0xAu == 0 )
      {
        v18 = ChunkRandGen::getFloat(v7);
        *(float *)&v17 = *(float *)&v17 * (float)((float)((float)(v18 * ChunkRandGen::getFloat(v7)) * 3.0) + 1.0);
      }
      LODWORD(v19) = ChunkRandGen::get64(v7);
      ++v14;
      MapGenCaves::generateCaveNode(a1, v19, a5, a6, a7, v26, v27, v28, v17, v31, v32, 0, 0, 1.0);
    }
    while ( v14 < v23 );
  }
  return result;
}

