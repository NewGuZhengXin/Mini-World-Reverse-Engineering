// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SaplingMaterial

//======================================================================
// SaplingMaterial::getTickRandomly(void)
// address: 0x002BBF0C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall SaplingMaterial::getTickRandomly(SaplingMaterial *this)
{
  return 1;
}


//======================================================================
// SaplingMaterial::~SaplingMaterial()
// address: 0x002BBF10   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15SaplingMaterialD1Ev'
void __fastcall SaplingMaterial::~SaplingMaterial(SaplingMaterial *this)
{
  *(_DWORD *)this = &off_45E870;
  ColorHerbMaterial::~ColorHerbMaterial(this);
}


//======================================================================
// SaplingMaterial::~SaplingMaterial()
// address: 0x002BBF2C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SaplingMaterial::~SaplingMaterial(SaplingMaterial *this)
{
  SaplingMaterial::~SaplingMaterial(this);
  operator delete(this);
}


//======================================================================
// SaplingMaterial::isSameSaplingAround(World *,int,int,int)
// address: 0x002BBF3E   size: 0x44 (68 bytes)
//======================================================================
int __fastcall SaplingMaterial::isSameSaplingAround(SaplingMaterial *this, World *a2, int a3, int a4, int a5)
{
  int v7; // r5
  int i; // r4
  _DWORD v12[4]; // [sp+Ch] [bp-10h] BYREF

  v7 = 0;
  while ( 2 )
  {
    for ( i = 0; i != 2; ++i )
    {
      v12[0] = i + a3;
      v12[1] = a4;
      v12[2] = v7 + a5;
      if ( World::getBlockID(a2, (const WCoord *)v12) != *((_DWORD *)this + 8) )
        return 0;
    }
    if ( ++v7 != 2 )
      continue;
    break;
  }
  return 1;
}


//======================================================================
// SaplingMaterial::growTree(World *,WCoord const&)
// address: 0x002BBF84   size: 0x262 (610 bytes)
//======================================================================
int __fastcall SaplingMaterial::growTree(SaplingMaterial *this, World *a2, const WCoord *a3)
{
  unsigned int v5; // r1
  unsigned int v6; // r2
  WorldGenHugeTree *v7; // r0
  WorldGenHugeTree *v8; // r4
  int **v9; // r3
  WorldGenHugeTree *v10; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r3
  int i; // r6
  int v15; // r3
  unsigned int v16; // r2
  int v17; // r6
  int (__fastcall *v18)(WorldGenHugeTree *, World *, unsigned __int16 *); // r12
  int v19; // r2
  unsigned int v20; // r1
  int j; // r6
  int v22; // r3
  unsigned int v23; // r2
  int v25; // [sp+8h] [bp-2Ch]
  int v26; // [sp+8h] [bp-2Ch]
  unsigned int v27; // [sp+8h] [bp-2Ch]
  int v28; // [sp+Ch] [bp-28h]
  int v29; // [sp+10h] [bp-24h]
  unsigned int v30; // [sp+10h] [bp-24h]
  int Chunk; // [sp+14h] [bp-20h]
  unsigned __int16 *v33; // [sp+1Ch] [bp-18h]
  int v34; // [sp+24h] [bp-10h] BYREF
  unsigned int v35; // [sp+28h] [bp-Ch]
  int v36; // [sp+2Ch] [bp-8h]

  v25 = *((_DWORD *)this + 8) - 12;
  v5 = *(_DWORD *)a3 / 16 - ((unsigned int)(*(_DWORD *)a3 % 16) >> 31);
  v6 = *((_DWORD *)a3 + 2) / 16 - ((unsigned int)(*((_DWORD *)a3 + 2) % 16) >> 31);
  v34 = v5;
  v35 = v6;
  Chunk = World::getChunk(a2, v5, v6);
  v33 = (unsigned __int16 *)(Chunk + 262);
  switch ( v25 )
  {
    case 201:
      v7 = (WorldGenHugeTree *)operator new(8u);
      *((_BYTE *)v7 + 4) = 1;
      v8 = v7;
      v9 = `vtable for'WorldGenTaiga2;
LABEL_5:
      *(_DWORD *)v8 = *v9 + 2;
      break;
    case 202:
      v10 = (WorldGenHugeTree *)operator new(8u);
      *((_BYTE *)v10 + 4) = 1;
      v9 = `vtable for'WorldGenForest;
      v8 = v10;
      goto LABEL_5;
    case 203:
      v29 = 0;
      v26 = 0;
      while ( 2 )
      {
        v28 = 0;
        while ( SaplingMaterial::isSameSaplingAround(
                  this,
                  a2,
                  v26 + *(_DWORD *)a3,
                  *((_DWORD *)a3 + 1),
                  v28 + *((_DWORD *)a3 + 2)) == 0 )
        {
          if ( --v28 == -2 )
            goto LABEL_15;
        }
        ChunkRandGen::_dorand48(v33);
        v30 = ((*(unsigned __int16 *)(Chunk + 266) << 16) | (unsigned int)*(unsigned __int16 *)(Chunk + 264)) % 0x14
            + 10;
        v8 = (WorldGenHugeTree *)operator new(0x14u);
        WorldGenHugeTree::WorldGenHugeTree(v8, true, v30, 203, 221);
        if ( v8 != nullptr )
          goto LABEL_21;
        v29 = 1;
LABEL_15:
        if ( --v26 != -2 )
          continue;
        break;
      }
      ChunkRandGen::_dorand48(v33);
      v27 = ((*(unsigned __int16 *)(Chunk + 266) << 16) | (unsigned int)*(unsigned __int16 *)(Chunk + 264)) % 7 + 4;
      v11 = operator new(0x18u);
      *(_BYTE *)(v11 + 4) = 1;
      v8 = (WorldGenHugeTree *)v11;
      *(_DWORD *)(v11 + 8) = v27;
      *(_DWORD *)v11 = &off_461BF8;
      *(_BYTE *)(v11 + 12) = 0;
      v26 = 0;
      v28 = 0;
      *(_DWORD *)(v11 + 16) = 203;
      *(_DWORD *)(v11 + 20) = 221;
      if ( v29 != 0 )
      {
LABEL_21:
        for ( i = 0; i != 4; ++i )
        {
          v15 = v28 + (i >> 1) + *((_DWORD *)a3 + 2);
          v34 = *(_DWORD *)a3 + v26 + (i & 1);
          v16 = *((_DWORD *)a3 + 1);
          v36 = v15;
          v35 = v16;
          World::setBlockAll(a2, (const WCoord *)&v34, 0, 0, 4);
        }
        v17 = 1;
        goto LABEL_25;
      }
      break;
    default:
      if ( GenRandomInt(0xAu) != 0 )
      {
        v12 = operator new(0x18u);
        v13 = *((_DWORD *)this + 8);
        *(_BYTE *)(v12 + 4) = 1;
        v8 = (WorldGenHugeTree *)v12;
        *(_DWORD *)v12 = &off_461BF8;
        *(_DWORD *)(v12 + 8) = 4;
        *(_BYTE *)(v12 + 12) = 0;
        *(_DWORD *)(v12 + 20) = v13 + 6;
        *(_DWORD *)(v12 + 16) = v25;
      }
      else
      {
        v8 = (WorldGenHugeTree *)operator new(0x50u);
        WorldGenBigTree::WorldGenBigTree(v8, true);
      }
      break;
  }
  v17 = 0;
  World::setBlockAll(a2, a3, 0, 0, 4);
  v28 = 0;
  v26 = 0;
LABEL_25:
  v18 = *(int (__fastcall **)(WorldGenHugeTree *, World *, unsigned __int16 *))(*(_DWORD *)v8 + 8);
  v19 = v28 + *((_DWORD *)a3 + 2);
  v20 = *((_DWORD *)a3 + 1);
  v34 = *(_DWORD *)a3 + v26;
  v35 = v20;
  v36 = v19;
  if ( v18(v8, a2, v33) == 0 )
  {
    if ( v17 != 0 )
    {
      for ( j = 0; j != 4; ++j )
      {
        v22 = v28 + (j >> 1) + *((_DWORD *)a3 + 2);
        v34 = *(_DWORD *)a3 + v26 + (j & 1);
        v23 = *((_DWORD *)a3 + 1);
        v36 = v22;
        v35 = v23;
        World::setBlockAll(a2, (const WCoord *)&v34, *((_DWORD *)this + 8), 0, 4);
      }
    }
    else
    {
      World::setBlockAll(a2, a3, *((_DWORD *)this + 8), 0, 4);
    }
  }
  return (*(int (__fastcall **)(WorldGenHugeTree *))(*(_DWORD *)v8 + 4))(v8);
}


//======================================================================
// SaplingMaterial::markOrGrowMarked(World *,WCoord const&)
// address: 0x002BC204   size: 0x2E (46 bytes)
//======================================================================
int __fastcall SaplingMaterial::markOrGrowMarked(SaplingMaterial *this, World *a2, const WCoord *a3)
{
  if ( World::getBlockData(a2, a3) != 0 )
    return SaplingMaterial::growTree(this, a2, a3);
  else
    return World::setBlockData(a2, a3, 1, 4);
}


//======================================================================
// SaplingMaterial::onFertilized(World *,WCoord const&,int)
// address: 0x002BC234   size: 0x24 (36 bytes)
//======================================================================
int __fastcall SaplingMaterial::onFertilized(SaplingMaterial *this, World *a2, const WCoord *a3, int a4)
{
  if ( GenRandomFloat() < 0.45 )
    SaplingMaterial::markOrGrowMarked(this, a2, a3);
  return 1;
}


//======================================================================
// SaplingMaterial::blockTick(World *,WCoord const&)
// address: 0x002BC25C   size: 0x64 (100 bytes)
//======================================================================
HerbMaterial *__fastcall SaplingMaterial::blockTick(HerbMaterial *this, World *a2, const WCoord *a3)
{
  int v3; // r7
  SaplingMaterial *v4; // r6
  int v7; // r2
  int v8; // r3
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  v3 = *((unsigned __int8 *)a2 + 68);
  v4 = this;
  if ( *((_BYTE *)a2 + 68) == 0 )
  {
    HerbMaterial::blockTick(this, a2, a3);
    v7 = *((_DWORD *)a3 + 2) + dword_51666C;
    v8 = *(_DWORD *)a3 + dword_516664;
    v9[1] = *((_DWORD *)a3 + 1) + dword_516668;
    v9[2] = v7;
    v9[0] = v8;
    this = (HerbMaterial *)World::getBlockLightValue(a2, (const WCoord *)v9, true);
    if ( (int)this > 8 )
    {
      this = (HerbMaterial *)World::genRandomInt(a2, v3, 6);
      if ( this == nullptr )
        return (HerbMaterial *)SaplingMaterial::markOrGrowMarked(v4, a2, a3);
    }
  }
  return this;
}


//======================================================================
// SaplingMaterial::newObject(void)
// address: 0x002C1928   size: 0x1C (28 bytes)
//======================================================================
ColorHerbMaterial *__fastcall SaplingMaterial::newObject(SaplingMaterial *this)
{
  ColorHerbMaterial *v1; // r4

  v1 = (ColorHerbMaterial *)operator new(0x50u);
  ColorHerbMaterial::ColorHerbMaterial(v1);
  *(_DWORD *)v1 = &off_45E870;
  return v1;
}

