// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenVolcano

//======================================================================
// WorldGenVolcano::~WorldGenVolcano()
// address: 0x002BDE64   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN15WorldGenVolcanoD1Ev'
void __fastcall WorldGenVolcano::~WorldGenVolcano(WorldGenVolcano *this)
{
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenVolcano::~WorldGenVolcano()
// address: 0x002BDE74   size: 0x16 (22 bytes)
//======================================================================
void __fastcall WorldGenVolcano::~WorldGenVolcano(WorldGenVolcano *this)
{
  *(_DWORD *)this = &off_45B6E0;
  operator delete(this);
}


//======================================================================
// WorldGenVolcano::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002BDE90   size: 0x1CA (458 bytes)
//======================================================================
int __fastcall WorldGenVolcano::generate(WorldGenVolcano *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  int v4; // r0
  int v6; // r1
  int v7; // r3
  int BlockID; // r0
  int v10; // r6
  int v11; // r7
  int i; // r5
  int j; // r4
  int v14; // r4
  int v15; // r6
  int k; // r7
  int m; // r3
  int *v18; // r5
  int v19; // r12
  int v20; // r3
  _DWORD *v21; // r3
  int n; // r4
  int v23; // [sp+Ch] [bp-C48h]
  int v24; // [sp+10h] [bp-C44h]
  int v25; // [sp+14h] [bp-C40h]
  int v26; // [sp+18h] [bp-C3Ch]
  int v27; // [sp+20h] [bp-C34h]
  int v28; // [sp+20h] [bp-C34h]
  int v30; // [sp+2Ch] [bp-C28h]
  int v31; // [sp+30h] [bp-C24h]
  int v32; // [sp+34h] [bp-C20h]
  int v33; // [sp+38h] [bp-C1Ch] BYREF
  int v34; // [sp+3Ch] [bp-C18h]
  int v35; // [sp+40h] [bp-C14h]
  _DWORD v36[3]; // [sp+44h] [bp-C10h] BYREF
  _DWORD v37[769]; // [sp+50h] [bp-C04h] BYREF

  v4 = *(_DWORD *)a4;
  v6 = *((_DWORD *)a4 + 1);
  v7 = *((_DWORD *)a4 + 2);
  v33 = v4;
  v34 = v6;
  v35 = v7;
  while ( 1 )
  {
    BlockID = World::getBlockID(a2, (const WCoord *)&v33);
    if ( BlockID != 0 )
      break;
    if ( --v34 <= 4 )
      return 0;
  }
  if ( BlockID != 124 && BlockID != 1 )
    return 0;
  v10 = 0;
  ++v34;
  ChunkRandGen::_dorand48((unsigned __int16 *)a3);
  v27 = *((_WORD *)a3 + 1) & 3;
  v31 = v27 + 4;
  do
  {
    v32 = v27 + 3;
    v30 = v27 + 3;
    v11 = 4 * (v27 + 3 - v10) / (v27 + 3) + 1;
    for ( i = -v11; i <= v11; ++i )
    {
      for ( j = -v11; j <= v11; ++j )
      {
        if ( i * i + j * j <= v11 * v11 )
        {
          v37[0] = v33 + i;
          v37[2] = j + v35;
          v37[1] = v10 + v34;
          World::setBlockAll(a2, (const WCoord *)v37, 124, 0, 2);
        }
      }
    }
    ++v10;
  }
  while ( v10 < v31 );
  v14 = 0;
  v15 = 0;
  do
  {
    v28 = 4 * (v32 - v14) / v30;
    for ( k = -v28; k <= v28; ++k )
    {
      for ( m = -(4 * (v32 - v14) / v30); ; m = v23 + 1 )
      {
        v23 = m;
        if ( m > v28 )
          break;
        v24 = k + v33;
        v25 = v14 + v34;
        v26 = m + v35;
        v18 = g_DirectionCoord;
        if ( v14 < v30 )
        {
          v36[0] = v24 + dword_516664;
          v36[1] = v25 + dword_516668;
          v36[2] = v26 + dword_51666C;
          if ( World::getBlockID(a2, (const WCoord *)v36) != 124 )
            continue;
        }
        while ( 1 )
        {
          v19 = v25 + v18[1];
          v20 = v26 + v18[2];
          v36[0] = v24 + *v18;
          v36[1] = v19;
          v36[2] = v20;
          if ( World::getBlockID(a2, (const WCoord *)v36) != 124 )
            break;
          v18 += 3;
          if ( v18 == &dword_516664 )
          {
            if ( v15 <= 255 )
            {
              v21 = &v37[3 * v15];
              *v21 = v24;
              v21[1] = v25;
              v21[2] = v26;
              ++v15;
            }
            break;
          }
        }
      }
    }
    ++v14;
  }
  while ( v14 < v31 );
  for ( n = 0; n < v15; ++n )
    World::setBlockAll(a2, (const WCoord *)&v37[3 * n], 5, 0, 2);
  return 1;
}

