// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenMinable

//======================================================================
// WorldGenMinable::~WorldGenMinable()
// address: 0x002FF400   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15WorldGenMinableD1Ev'
void __fastcall WorldGenMinable::~WorldGenMinable(WorldGenMinable *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenMinable::~WorldGenMinable()
// address: 0x002FF410   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenMinable::~WorldGenMinable(WorldGenMinable *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenMinable::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002FF42C   size: 0x372 (882 bytes)
//======================================================================
int __fastcall WorldGenMinable::generate(WorldGenMinable *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  float Float; // r4
  double v7; // r0
  float v8; // r4
  float v9; // r0
  float v10; // r0
  int v11; // r5
  float v12; // r6
  float v13; // r5
  float v14; // r0
  float v15; // r6
  int v16; // r4
  int v17; // r5
  int k; // r5
  float v20; // [sp+8h] [bp-6Ch]
  int j; // [sp+8h] [bp-6Ch]
  int v22; // [sp+Ch] [bp-68h]
  int v23; // [sp+Ch] [bp-68h]
  float v25; // [sp+14h] [bp-60h]
  int i; // [sp+14h] [bp-60h]
  double xa; // [sp+18h] [bp-5Ch]
  float x; // [sp+18h] [bp-5Ch]
  float v29; // [sp+20h] [bp-54h]
  float v30; // [sp+24h] [bp-50h]
  int v31; // [sp+28h] [bp-4Ch]
  float v32; // [sp+2Ch] [bp-48h]
  float v33; // [sp+30h] [bp-44h]
  float v34; // [sp+34h] [bp-40h]
  float v35; // [sp+38h] [bp-3Ch]
  float v37; // [sp+44h] [bp-30h]
  float v38; // [sp+48h] [bp-2Ch]
  float v39; // [sp+4Ch] [bp-28h]
  int v40; // [sp+50h] [bp-24h]
  int v41; // [sp+54h] [bp-20h]
  int v42; // [sp+58h] [bp-1Ch]
  _DWORD v43[4]; // [sp+64h] [bp-10h] BYREF

  Float = ChunkRandGen::getFloat(a3);
  v22 = *((_DWORD *)a4 + 1);
  v20 = (float)(*(_DWORD *)a4 + 8);
  xa = (float)((float)(Float * 180.0) * 0.017453);
  v7 = j_sin(xa);
  v25 = (float)*((int *)this + 3);
  *(float *)&v7 = v7;
  *(float *)&v7 = (float)(*(float *)&v7 * v25) * 0.125;
  v32 = v20 + *(float *)&v7;
  v37 = v20 - *(float *)&v7;
  v8 = (float)(*((_DWORD *)a4 + 2) + 8);
  v9 = j_cos(xa);
  v10 = (float)(v9 * v25) * 0.125;
  v33 = v8 + v10;
  v38 = v8 - v10;
  ChunkRandGen::_dorand48((unsigned __int16 *)a3);
  v34 = (float)(int)(v22 + ((*((unsigned __int16 *)a3 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a3 + 1)) % 3 - 2);
  ChunkRandGen::_dorand48((unsigned __int16 *)a3);
  v39 = (float)(int)(v22 + ((*((unsigned __int16 *)a3 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a3 + 1)) % 3 - 2);
  for ( i = 0; ; ++i )
  {
    v11 = *((_DWORD *)this + 3);
    if ( i > v11 )
      break;
    x = v32 + (float)((float)((float)(v37 - v32) * (float)i) / (float)v11);
    v29 = v34 + (float)((float)((float)(v39 - v34) * (float)i) / (float)v11);
    v30 = v33 + (float)((float)((float)(v38 - v33) * (float)i) / (float)v11);
    v12 = ChunkRandGen::getFloat(a3);
    v13 = (float)*((int *)this + 3);
    v14 = j_sin((float)((float)((float)((float)i * 180.0) / v13) * 0.017453));
    v15 = (float)((float)((float)(v14 + 1.0) * (float)((float)(v12 * v13) * 0.0625)) + 1.0) * 0.5;
    v23 = (int)j_floor((float)(x - v15));
    v16 = (int)j_floor((float)(v29 - v15));
    v40 = (int)j_floor((float)(v30 - v15));
    v41 = (int)j_floor((float)(x + v15));
    v17 = (int)j_floor((float)(v29 + v15));
    v42 = (int)j_floor((float)(v30 + v15));
    v31 = v17;
    if ( v17 > 255 )
      v31 = 255;
    while ( v23 <= v41 )
    {
      v35 = (float)((float)((float)((float)v23 + 0.5) - x) / v15)
          * (float)((float)((float)((float)v23 + 0.5) - x) / v15);
      if ( v35 < 1.0 )
      {
        for ( j = v16 & (~v16 >> 31); j <= v31; ++j )
        {
          if ( (float)(v35
                     + (float)((float)((float)((float)((float)j + 0.5) - v29) / v15)
                             * (float)((float)((float)((float)j + 0.5) - v29) / v15))) < 1.0 )
          {
            for ( k = v40; k <= v42; ++k )
            {
              if ( (float)((float)(v35
                                 + (float)((float)((float)((float)((float)j + 0.5) - v29) / v15)
                                         * (float)((float)((float)((float)j + 0.5) - v29) / v15)))
                         + (float)((float)((float)((float)((float)k + 0.5) - v30) / v15)
                                 * (float)((float)((float)((float)k + 0.5) - v30) / v15))) < 1.0 )
              {
                v43[0] = v23;
                v43[1] = j;
                v43[2] = k;
                if ( World::getBlockID(a2, (const WCoord *)v43, v23, j) == *((_DWORD *)this + 4) )
                {
                  v43[2] = k;
                  v43[1] = j;
                  v43[0] = v23;
                  World::setBlockAll(a2, (const WCoord *)v43, *((_DWORD *)this + 2), 0, 2);
                }
              }
            }
          }
        }
      }
      ++v23;
    }
  }
  return 1;
}

