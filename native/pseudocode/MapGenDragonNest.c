// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MapGenDragonNest

//======================================================================
// MapGenDragonNest::~MapGenDragonNest()
// address: 0x002C83BC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN16MapGenDragonNestD1Ev'
void __fastcall MapGenDragonNest::~MapGenDragonNest(MapGenDragonNest *this)
{
  *(_DWORD *)this = &off_45EA48;
}


//======================================================================
// MapGenDragonNest::~MapGenDragonNest()
// address: 0x002C83CC   size: 0x16 (22 bytes)
//======================================================================
void __fastcall MapGenDragonNest::~MapGenDragonNest(MapGenDragonNest *this)
{
  *(_DWORD *)this = &off_45EA48;
  operator delete(this);
}


//======================================================================
// MapGenDragonNest::recursiveGenerate(World *,int,int,int,int,ChunkGenData &)
// address: 0x002C83E8   size: 0x17A (378 bytes)
//======================================================================
int __fastcall MapGenDragonNest::recursiveGenerate(int a1, int a2, int a3, int a4, int a5, int a6, _DWORD *a7)
{
  int v8; // r3
  int result; // r0
  int v10; // r7
  unsigned int v11; // r12
  signed int k; // r3
  signed int v13; // r6
  signed int v14; // r12
  int ii; // r3
  int m; // r3
  int v17; // r2
  int n; // r3
  int v19; // r2
  int v20; // r2
  int jj; // r3
  int v22; // r2
  int i; // [sp+4h] [bp-28h]
  int v24; // [sp+8h] [bp-24h]
  unsigned int v25; // [sp+Ch] [bp-20h]
  int j; // [sp+10h] [bp-1Ch]
  int v27; // [sp+14h] [bp-18h]

  v8 = *(_DWORD *)(a1 + 36);
  result = a5 - *(_DWORD *)(a1 + 32);
  v27 = result;
  if ( (unsigned int)(result + 4) <= 8 )
  {
    v24 = a6 - v8;
    if ( (unsigned int)(a6 - v8 + 4) <= 8 )
    {
      v10 = *(_DWORD *)(a1 + 24);
      for ( i = 0; i != 16; ++i )
      {
        for ( j = 0; j != 16; ++j )
        {
          ChunkRandGen::_dorand48((unsigned __int16 *)(a1 + 8));
          v25 = 0;
          if ( ((*(unsigned __int16 *)(a1 + 12) << 16) | (unsigned int)*(unsigned __int16 *)(a1 + 10)) % 0x14 == 0 )
          {
            ChunkRandGen::_dorand48((unsigned __int16 *)(a1 + 8));
            v25 = ((*(unsigned __int16 *)(a1 + 12) << 16) | (unsigned int)*(unsigned __int16 *)(a1 + 10)) % 3;
          }
          ChunkRandGen::_dorand48((unsigned __int16 *)(a1 + 8));
          v11 = ((*(unsigned __int16 *)(a1 + 12) << 16) | (unsigned int)*(unsigned __int16 *)(a1 + 10)) % 5 + 30;
          *(_WORD *)(2 * (i | ((v10 - 5) << 8) | (16 * j)) + *a7) = 1;
          for ( k = v10 - 5; k <= (int)(v10 + v25); ++k )
          {
            v13 = k << 8;
            *(_WORD *)(2 * (v13 | i | (16 * j)) + *a7) = 124;
          }
          v14 = v11 + v10;
          result = 0;
          while ( k <= v14 )
            *(_WORD *)(2 * ((k++ << 8) | (16 * j) | i) + *a7) = 0;
        }
      }
      if ( v27 == -4 )
      {
        result = v10 << 8;
        for ( m = 0; m != 16; ++m )
        {
          v17 = 2 * ((16 * m) | result);
          *(_WORD *)(v17 + *a7) = 5;
        }
      }
      else if ( v27 == 4 )
      {
        result = (v10 << 8) | 0xF;
        for ( n = 0; n != 16; ++n )
        {
          v19 = 2 * ((16 * n) | result);
          *(_WORD *)(v19 + *a7) = 5;
        }
      }
      if ( v24 == -4 )
      {
        result = v10 << 8;
        for ( ii = 0; ii != 16; ++ii )
        {
          v20 = 2 * (ii | result);
          *(_WORD *)(v20 + *a7) = 5;
        }
      }
      else if ( v24 == 4 )
      {
        result = (v10 << 8) | 0xF0;
        for ( jj = 0; jj != 16; ++jj )
        {
          v22 = 2 * (jj | result);
          *(_WORD *)(v22 + *a7) = 5;
        }
      }
    }
  }
  return result;
}

