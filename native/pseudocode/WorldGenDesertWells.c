// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenDesertWells

//======================================================================
// WorldGenDesertWells::~WorldGenDesertWells()
// address: 0x002BB238   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN19WorldGenDesertWellsD1Ev'
void __fastcall WorldGenDesertWells::~WorldGenDesertWells(WorldGenDesertWells *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenDesertWells::~WorldGenDesertWells()
// address: 0x002BB248   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenDesertWells::~WorldGenDesertWells(WorldGenDesertWells *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenDesertWells::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002BB264   size: 0x306 (774 bytes)
//======================================================================
int __fastcall WorldGenDesertWells::generate(WorldGenDesertWells *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v4; // r2
  int v5; // r1
  int v6; // r3
  int v8; // r4
  int v9; // r5
  int j; // r5
  int k; // r7
  int m; // r6
  int n; // r6
  int ii; // r5
  int jj; // r5
  int kk; // r7
  World *v17; // r0
  int v18; // r2
  int v19; // r3
  int i; // [sp+Ch] [bp-50h]
  int v22; // [sp+1Ch] [bp-40h] BYREF
  int v23; // [sp+20h] [bp-3Ch]
  int v24; // [sp+24h] [bp-38h]
  int v25[3]; // [sp+28h] [bp-34h] BYREF
  _DWORD v26[3]; // [sp+34h] [bp-28h] BYREF
  int v27; // [sp+40h] [bp-1Ch] BYREF
  int v28; // [sp+44h] [bp-18h]
  int v29; // [sp+48h] [bp-14h]
  int v30; // [sp+4Ch] [bp-10h] BYREF
  int v31; // [sp+50h] [bp-Ch]
  int v32; // [sp+54h] [bp-8h]

  v4 = *(_DWORD *)a4;
  v5 = *((_DWORD *)a4 + 1);
  v6 = *((_DWORD *)a4 + 2);
  v22 = v4;
  v23 = v5;
  v24 = v6;
  while ( World::getBlockID(a2, (const WCoord *)&v22) == 0 && v23 > 2 )
    --v23;
  if ( World::getBlockID(a2, (const WCoord *)&v22) == 106 )
  {
    v8 = -2;
LABEL_8:
    v9 = -2;
    while ( 1 )
    {
      v25[0] = v8;
      v25[1] = -1;
      v25[2] = v9;
      operator+(v26, &v22, v25);
      if ( World::getBlockID(a2, (const WCoord *)v26) == 0 )
      {
        v27 = v8;
        v28 = -2;
        v29 = v9;
        operator+(&v30, &v22, &v27);
        if ( World::getBlockID(a2, (const WCoord *)&v30) == 0 )
          break;
      }
      if ( ++v9 == 3 )
      {
        if ( ++v8 != 3 )
          goto LABEL_8;
        for ( i = -1; i != 1; ++i )
        {
          for ( j = -2; j != 3; ++j )
          {
            for ( k = -2; k != 3; ++k )
            {
              v28 = i;
              v29 = k;
              v27 = j;
              operator+(&v30, &v22, &v27);
              World::setBlockAll(a2, (const WCoord *)&v30, 108, 0, 2);
            }
          }
        }
        World::setBlockAll(a2, (const WCoord *)&v22, 3, 0, 2);
        for ( m = 0; m != 12; m += 3 )
        {
          operator+(&v30, &v22, &g_DirectionCoord[m]);
          World::setBlockAll(a2, (const WCoord *)&v30, 3, 0, 2);
        }
        for ( n = -2; n != 3; ++n )
        {
          for ( ii = -2; ii != 3; ++ii )
          {
            if ( n == -2 || n == 2 || ii == -2 || ii == 2 )
            {
              v28 = 1;
              v27 = n;
              v29 = ii;
              operator+(&v30, &v22, &v27);
              World::setBlockAll(a2, (const WCoord *)&v30, 108, 0, 2);
            }
          }
        }
        v30 = v22 + 2;
        v32 = v24;
        v31 = v23 + 1;
        World::setBlockAll(a2, (const WCoord *)&v30, 507, 0, 2);
        v31 = v23 + 1;
        v30 = v22 - 2;
        v32 = v24;
        World::setBlockAll(a2, (const WCoord *)&v30, 507, 0, 2);
        v31 = v23 + 1;
        v32 = v24 + 2;
        v30 = v22;
        World::setBlockAll(a2, (const WCoord *)&v30, 507, 0, 2);
        v31 = v23 + 1;
        v32 = v24 - 2;
        v30 = v22;
        World::setBlockAll(a2, (const WCoord *)&v30, 507, 0, 2);
        for ( jj = -1; jj != 2; ++jj )
        {
          for ( kk = -1; kk != 2; ++kk )
          {
            v28 = 4;
            if ( (kk | jj) != 0 )
            {
              v29 = kk;
              v27 = jj;
              operator+(&v30, &v22, &v27);
              v17 = a2;
              v18 = 507;
              v19 = 0;
            }
            else
            {
              v29 = 0;
              v27 = 0;
              operator+(&v30, &v22, &v27);
              v17 = a2;
              v18 = 108;
              v19 = kk | jj;
            }
            World::setBlockAll(v17, (const WCoord *)&v30, v18, v19, 2);
          }
        }
        do
        {
          v27 = -1;
          v28 = i;
          v29 = -1;
          operator+(&v30, &v22, &v27);
          World::setBlockAll(a2, (const WCoord *)&v30, 108, 0, 2);
          v27 = -1;
          v28 = i;
          v29 = 1;
          operator+(&v30, &v22, &v27);
          World::setBlockAll(a2, (const WCoord *)&v30, 108, 0, 2);
          v28 = i;
          v29 = -1;
          v27 = 1;
          operator+(&v30, &v22, &v27);
          World::setBlockAll(a2, (const WCoord *)&v30, 108, 0, 2);
          v28 = i;
          v27 = 1;
          v29 = 1;
          operator+(&v30, &v22, &v27);
          World::setBlockAll(a2, (const WCoord *)&v30, 108, 0, 2);
          ++i;
        }
        while ( i != 4 );
        return 1;
      }
    }
  }
  return 0;
}

