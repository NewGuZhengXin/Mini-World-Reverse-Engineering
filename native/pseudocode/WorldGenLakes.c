// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenLakes

//======================================================================
// WorldGenLakes::~WorldGenLakes()
// address: 0x002E5E34   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN13WorldGenLakesD1Ev'
void __fastcall WorldGenLakes::~WorldGenLakes(WorldGenLakes *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenLakes::~WorldGenLakes()
// address: 0x002E5E44   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenLakes::~WorldGenLakes(WorldGenLakes *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenLakes::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002E5E60   size: 0x5E0 (1504 bytes)
//======================================================================
int __fastcall WorldGenLakes::generate(WorldGenLakes *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v4; // r1
  int v5; // r2
  int v6; // r3
  float v7; // r6
  float v8; // r5
  float v9; // r4
  float v10; // r7
  int v11; // r4
  int i; // r5
  int j; // r6
  int k; // r6
  float v15; // r4
  unsigned __int8 *v16; // r5
  int m; // r7
  int v18; // r2
  int v19; // r3
  int n; // r6
  int ii; // r5
  int jj; // r4
  int v23; // r2
  int kk; // r5
  int mm; // r7
  int v26; // r2
  int v27; // r3
  int v28; // r2
  int v29; // r3
  int v30; // r3
  float v31; // r4
  _BYTE *v32; // r5
  int v33; // r7
  int i1; // r5
  int i2; // r4
  int v36; // r2
  int v37; // r2
  int v38; // r3
  int BlockID; // r0
  int v41; // [sp+14h] [bp-880h]
  int nn; // [sp+14h] [bp-880h]
  int v43; // [sp+14h] [bp-880h]
  float v44; // [sp+18h] [bp-87Ch]
  int *v45; // [sp+1Ch] [bp-878h]
  float v46; // [sp+20h] [bp-874h]
  World *v47; // [sp+24h] [bp-870h]
  ChunkRandGen *v48; // [sp+28h] [bp-86Ch]
  float v49; // [sp+2Ch] [bp-868h]
  float v50; // [sp+30h] [bp-864h]
  WorldGenLakes *v51; // [sp+34h] [bp-860h]
  _BYTE *v52; // [sp+38h] [bp-85Ch]
  float v53; // [sp+3Ch] [bp-858h]
  float v54; // [sp+40h] [bp-854h]
  float v55; // [sp+44h] [bp-850h]
  _BYTE *v56; // [sp+48h] [bp-84Ch]
  int v57; // [sp+4Ch] [bp-848h]
  int v58; // [sp+54h] [bp-840h] BYREF
  int v59; // [sp+58h] [bp-83Ch]
  int v60; // [sp+5Ch] [bp-838h]
  int v61[3]; // [sp+60h] [bp-834h] BYREF
  _DWORD v62[3]; // [sp+6Ch] [bp-828h] BYREF
  int v63[3]; // [sp+78h] [bp-81Ch] BYREF
  int v64[3]; // [sp+84h] [bp-810h] BYREF
  _BYTE v65[2052]; // [sp+90h] [bp-804h] BYREF

  v47 = a2;
  v48 = a3;
  v4 = *((_DWORD *)a4 + 1);
  v5 = *((_DWORD *)a4 + 2) - 8;
  v6 = *(_DWORD *)a4 - 8;
  v51 = this;
  v58 = v6;
  v59 = v4;
  v60 = v5;
  while ( v59 > 5 && World::getBlockID(v47, (const WCoord *)&v58, v5, v6) == 0 )
    v6 = --v59;
  v41 = 0;
  if ( v59 <= 4 )
    return v41;
  v59 -= 4;
  j_memset(v65, 0, 0x800u);
  ChunkRandGen::_dorand48((unsigned __int16 *)v48);
  v45 = (int *)((*((_WORD *)v48 + 1) & 3) + 4);
  do
  {
    v7 = (float)(ChunkRandGen::getFloat(v48) * 6.0) + 3.0;
    v8 = (float)(ChunkRandGen::getFloat(v48) * 4.0) + 2.0;
    v9 = (float)(ChunkRandGen::getFloat(v48) * 6.0) + 3.0;
    v44 = v7 * 0.5;
    v49 = (float)((float)(ChunkRandGen::getFloat(v48) * (float)((float)(16.0 - v7) - 2.0)) + 1.0) + (float)(v7 * 0.5);
    v10 = v8 * 0.5;
    v50 = (float)((float)(ChunkRandGen::getFloat(v48) * (float)((float)(8.0 - v8) - 4.0)) + 2.0) + (float)(v8 * 0.5);
    v46 = v9 * 0.5;
    v53 = (float)((float)(ChunkRandGen::getFloat(v48) * (float)((float)(16.0 - v9) - 2.0)) + 1.0) + (float)(v9 * 0.5);
    v11 = 1;
    v52 = v65;
    do
    {
      v54 = (float)((float)((float)v11 - v49) / v44) * (float)((float)((float)v11 - v49) / v44);
      v57 = 16 * v11;
      for ( i = 1; i != 15; ++i )
      {
        v55 = (float)((float)((float)i - v53) / v46) * (float)((float)((float)i - v53) / v46);
        v56 = &v65[8 * i + 8 * v57];
        for ( j = 1; j != 7; ++j )
        {
          if ( (float)((float)(v54
                             + (float)((float)((float)((float)j - v50) / v10) * (float)((float)((float)j - v50) / v10)))
                     + v55) < 1.0 )
            v56[j] = 1;
        }
      }
      ++v11;
    }
    while ( v11 != 15 );
    ++v41;
  }
  while ( v41 < (int)v45 );
  for ( k = 0; k != 16; ++k )
  {
    LODWORD(v15) = k << 7;
    v44 = 0.0;
    while ( 2 )
    {
      LODWORD(v53) = LODWORD(v15) + 128;
      LODWORD(v49) = LODWORD(v15) - 128;
      LODWORD(v46) = LODWORD(v15) + 8;
      LODWORD(v50) = LODWORD(v15) - 8;
      v16 = &v65[LODWORD(v15)];
      for ( m = 0; m != 8; ++m )
      {
        v41 = *v16;
        if ( *v16 != 0 )
          goto LABEL_34;
        if ( k != 15 )
        {
          if ( v16[LODWORD(v53) - LODWORD(v15)] != 0 )
            goto LABEL_32;
          if ( k == 0 )
            goto LABEL_27;
        }
        if ( v16[LODWORD(v49) - LODWORD(v15)] == 0 )
        {
LABEL_27:
          if ( LODWORD(v44) != 15 )
          {
            if ( v16[LODWORD(v46) - LODWORD(v15)] != 0 )
              goto LABEL_32;
            if ( v44 == 0.0 )
              goto LABEL_28;
          }
          if ( v16[LODWORD(v50) - LODWORD(v15)] == 0 )
          {
LABEL_28:
            if ( m == 7 )
              goto LABEL_31;
            if ( v16[1] == 0 )
            {
              if ( m == 0 )
                goto LABEL_34;
LABEL_31:
              if ( *(v16 - 1) == 0 )
                goto LABEL_34;
            }
          }
        }
LABEL_32:
        v45 = v64;
        *(float *)&v63[2] = v44;
        v63[1] = m;
        v63[0] = k;
        operator+(v64, &v58, v63);
        v19 = *(_DWORD *)World::getBlockMaterial(v47, (const WCoord *)v64, v18);
        if ( m <= 3 )
        {
          if ( (*(int (**)(void))(v19 + 44))() == 0 )
          {
            v45 = v64;
            v63[0] = k;
            v63[1] = m;
            *(float *)&v63[2] = v44;
            operator+(v64, &v58, v63);
            BlockID = World::getBlockID(v47, (const WCoord *)v64, v37, v38);
            if ( BlockID != *((_DWORD *)v51 + 2) )
              return v41;
          }
        }
        else if ( (*(int (**)(void))(v19 + 48))() != 0 )
        {
          return v41;
        }
LABEL_34:
        ++v16;
      }
      if ( ++LODWORD(v44) != 16 )
      {
        v15 = v46;
        continue;
      }
      break;
    }
  }
  for ( n = 0; n != 16; ++n )
  {
    LODWORD(v44) = 16 * n;
    for ( ii = 0; ii != 16; ++ii )
    {
      for ( jj = 0; jj != 8; ++jj )
      {
        if ( v65[8 * ii + 8 * LODWORD(v44) + jj] != 0 )
        {
          v63[1] = jj;
          v63[2] = ii;
          v63[0] = n;
          operator+(v64, &v58, v63);
          v23 = 0;
          if ( jj <= 3 )
            v23 = *((_DWORD *)v51 + 2);
          World::setBlockAll(v47, (const WCoord *)v64, v23, 0, 2);
        }
      }
    }
  }
  for ( kk = 0; kk != 16; ++kk )
  {
    LODWORD(v49) = 16 * kk;
    for ( mm = 0; mm != 16; ++mm )
    {
      LODWORD(v50) = &v65[8 * mm + 8 * LODWORD(v49)];
      for ( nn = 4; nn != 8; ++nn )
      {
        if ( *(_BYTE *)(LODWORD(v50) + nn) != 0 )
        {
          LODWORD(v46) = nn - 1;
          v61[0] = kk;
          v61[1] = nn - 1;
          v61[2] = mm;
          operator+(v62, &v58, v61);
          if ( World::getBlockID(v47, (const WCoord *)v62, v26, v27) == 101 )
          {
            v63[1] = nn;
            v63[0] = kk;
            v63[2] = mm;
            operator+(v64, &v58, v63);
            if ( World::getBlockSunIllum(v47, (const WCoord *)v64) > 0 )
            {
              *(float *)&v63[1] = v46;
              v44 = COERCE_FLOAT(v64);
              v63[0] = kk;
              v63[2] = mm;
              operator+(v64, &v58, v63);
              World::getBlockID(v47, (const WCoord *)v64, v28, v29);
              v30 = *(_DWORD *)(*(_DWORD *)(World::getBiomeGen(v47, kk + v58, mm + v60) + 4) + 56);
              v63[0] = kk;
              v45 = (int *)v30;
              *(float *)&v63[1] = v46;
              v63[2] = mm;
              if ( v30 == 233 )
              {
                operator+(v64, &v58, v63);
                World::setBlockAll(v47, (const WCoord *)v64, (int)v45, 0, 2);
              }
              else
              {
                operator+(v64, &v58, v63);
                World::setBlockAll(v47, (const WCoord *)v64, 100, 0, 2);
              }
            }
          }
        }
      }
    }
  }
  if ( (unsigned int)(*((_DWORD *)v51 + 2) - 5) > 1 )
    goto LABEL_83;
  v43 = 0;
  while ( 2 )
  {
    v44 = 0.0;
    LODWORD(v31) = v43 << 7;
    while ( 2 )
    {
      LODWORD(v53) = LODWORD(v31) + 128;
      LODWORD(v49) = LODWORD(v31) - 128;
      LODWORD(v46) = LODWORD(v31) + 8;
      LODWORD(v50) = LODWORD(v31) - 8;
      v32 = &v65[LODWORD(v31)];
      v33 = 0;
      while ( 2 )
      {
        if ( *v32 != 0 )
          goto LABEL_79;
        if ( v43 != 15 )
        {
          if ( v32[LODWORD(v53) - LODWORD(v31)] != 0 )
            goto LABEL_77;
          if ( v43 == 0 )
            goto LABEL_69;
        }
        if ( v32[LODWORD(v49) - LODWORD(v31)] != 0 )
        {
LABEL_77:
          if ( v33 <= 3 || (ChunkRandGen::_dorand48((unsigned __int16 *)v48), (*((_WORD *)v48 + 1) & 1) != 0) )
          {
            *(float *)&v63[2] = v44;
            v45 = v64;
            v63[0] = v43;
            v63[1] = v33;
            operator+(v64, &v58, v63);
            if ( World::isBlockSolid(v47, (const WCoord *)v64, v36) != 0 )
            {
              *(float *)&v63[2] = v44;
              v45 = v64;
              v63[0] = v43;
              v63[1] = v33;
              operator+(v64, &v58, v63);
              World::setBlockAll(v47, (const WCoord *)v64, *((_DWORD *)v51 + 3), 0, 2);
            }
          }
          goto LABEL_79;
        }
LABEL_69:
        if ( LODWORD(v44) != 15 )
        {
          if ( v32[LODWORD(v46) - LODWORD(v31)] != 0 )
            goto LABEL_77;
          if ( v44 == 0.0 )
            goto LABEL_73;
        }
        if ( v32[LODWORD(v50) - LODWORD(v31)] != 0 )
          goto LABEL_77;
LABEL_73:
        if ( v33 == 7 )
          goto LABEL_76;
        if ( v32[1] != 0 )
          goto LABEL_77;
        if ( v33 != 0 )
        {
LABEL_76:
          if ( *(v32 - 1) != 0 )
            goto LABEL_77;
        }
LABEL_79:
        ++v33;
        ++v32;
        if ( v33 != 8 )
          continue;
        break;
      }
      if ( ++LODWORD(v44) != 16 )
      {
        v31 = v46;
        continue;
      }
      break;
    }
    if ( ++v43 != 16 )
      continue;
    break;
  }
LABEL_83:
  if ( (unsigned int)(*((_DWORD *)v51 + 2) - 3) <= 1 )
  {
    for ( i1 = 0; i1 != 16; ++i1 )
    {
      for ( i2 = 0; i2 != 16; ++i2 )
      {
        v64[1] = 4;
        v64[2] = i2;
        v64[0] = i1;
        operator+(v63, &v58, v64);
        if ( World::canBlockFreeze(v47, (const WCoord *)v63, 0) != 0 )
          World::setBlockAll(v47, (const WCoord *)v63, 123, 0, 2);
      }
    }
  }
  return 1;
}

