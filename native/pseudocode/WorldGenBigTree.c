// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: WorldGenBigTree

//======================================================================
// WorldGenBigTree::setScale(float,float,float)
// address: 0x002EC72C   size: 0x30 (48 bytes)
//======================================================================
bool __fastcall WorldGenBigTree::setScale(WorldGenBigTree *this, float a2, float a3, float a4)
{
  _BOOL4 result; // r0

  *((_DWORD *)this + 15) = (int)(float)(a2 * 12.0);
  result = a2 > 0.5;
  if ( a2 > 0.5 )
    *((_DWORD *)this + 16) = 5;
  *((float *)this + 10) = a3;
  *((float *)this + 11) = a4;
  return result;
}


//======================================================================
// WorldGenBigTree::~WorldGenBigTree()
// address: 0x002EC760   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN15WorldGenBigTreeD1Ev'
void __fastcall WorldGenBigTree::~WorldGenBigTree(WorldGenBigTree *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_462148;
  v2 = *((void **)this + 17);
  if ( v2 != nullptr )
    operator delete(v2);
  *(_DWORD *)this = &off_45B6E0;
}


//======================================================================
// WorldGenBigTree::~WorldGenBigTree()
// address: 0x002EC790   size: 0x12 (18 bytes)
//======================================================================
void __fastcall WorldGenBigTree::~WorldGenBigTree(WorldGenBigTree *this)
{
  WorldGenBigTree::~WorldGenBigTree(this);
  operator delete(this);
}


//======================================================================
// WorldGenBigTree::WorldGenBigTree(bool)
// address: 0x002EC7C8   size: 0x48 (72 bytes)
//======================================================================
// Alternative name is '_ZN15WorldGenBigTreeC2Eb'
void __fastcall WorldGenBigTree::WorldGenBigTree(WorldGenBigTree *this, bool a2)
{
  *((_BYTE *)this + 4) = a2;
  *(_DWORD *)this = &off_462148;
  *((_DWORD *)this + 9) = 1052971631;
  *((_DWORD *)this + 7) = 1058944319;
  *((_DWORD *)this + 8) = 1065353216;
  *((_DWORD *)this + 10) = 1065353216;
  *((_DWORD *)this + 11) = 1065353216;
  *((_DWORD *)this + 14) = 1;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 15) = 12;
  *((_DWORD *)this + 16) = 4;
  j_memset((char *)this + 8, 0, 0xCu);
}


//======================================================================
// WorldGenBigTree::genTreeLayer(int,int,int,float,int,int)
// address: 0x002EC81C   size: 0x11C (284 bytes)
//======================================================================
int __fastcall WorldGenBigTree::genTreeLayer(WorldGenBigTree *this, int a2, int a3, int a4, float a5, int a6, int a7)
{
  int result; // r0
  int v9; // r1
  int v10; // r1
  int i; // r7
  int v12; // r5
  float v13; // r6
  float v14; // r2
  float v15; // r6
  World *v16; // r0
  int v17; // r6
  int v18; // r5
  int BlockID; // r0
  int j; // [sp+14h] [bp-40h]
  float v21; // [sp+18h] [bp-3Ch]
  int v22; // [sp+1Ch] [bp-38h]
  int v23; // [sp+20h] [bp-34h]
  int v24; // [sp+24h] [bp-30h]
  _DWORD v25[3]; // [sp+2Ch] [bp-28h] BYREF
  int v26; // [sp+38h] [bp-1Ch] BYREF
  int v27; // [sp+3Ch] [bp-18h]
  int v28; // [sp+40h] [bp-14h]
  _DWORD v29[4]; // [sp+44h] [bp-10h] BYREF

  result = (int)(float)(a5 + 0.618);
  v21 = *(float *)&result;
  v25[0] = a2;
  v9 = dword_446DAC[a6];
  v25[1] = a3;
  v25[2] = a4;
  v23 = v9;
  v10 = dword_446DAC[a6 + 3];
  v26 = 0;
  v24 = v10;
  v27 = 0;
  v28 = 0;
  *(&v26 + a6) = v25[a6];
  for ( i = -result; i <= SLODWORD(v21); ++i )
  {
    *(&v26 + v23) = v25[v23] + i;
    for ( j = 1 - LODWORD(v21); ; ++j )
    {
      v12 = j - 1;
      if ( j - 1 > SLODWORD(v21) )
        break;
      v13 = Ogre::Pow(COERCE_OGRE_((float)((i + (i >> 31)) ^ (i >> 31)) + 0.5), 2.0, v21);
      v15 = v13 + Ogre::Pow(COERCE_OGRE_((float)((v12 + (v12 >> 31)) ^ (v12 >> 31)) + 0.5), 2.0, v14);
      result = v15 > (float)(a5 * a5);
      if ( v15 <= (float)(a5 * a5) )
      {
        v16 = *((World **)this + 13);
        *(&v26 + v24) = v25[v24] + v12;
        v17 = v26;
        v18 = v27;
        v22 = v28;
        v29[0] = v26;
        v29[1] = v27;
        v29[2] = v28;
        BlockID = World::getBlockID(v16, (const WCoord *)v29, 4 * v24, v28);
        if ( BlockID == 0 || (unsigned int)(result = BlockID - 218) <= 5 )
          result = WorldGenerator::setBlockAndMetadata(this, *((World **)this + 13), v17, v18, v22, a7, 0);
      }
    }
  }
  return result;
}


//======================================================================
// WorldGenBigTree::layerSize(int)
// address: 0x002EC940   size: 0xCC (204 bytes)
//======================================================================
float __fastcall WorldGenBigTree::layerSize(WorldGenBigTree *this, int a2, float a3)
{
  float v3; // r4
  float v4; // r5
  float v5; // r0
  Ogre *v6; // r0
  float v7; // r2
  float v8; // r4
  Ogre *v9; // r0
  double v10; // r0
  float v11; // r0

  if ( (float)a2 < (float)((float)*((int *)this + 5) * 0.3) )
    return -1.618;
  v3 = (float)*((int *)this + 5) * 0.5;
  v4 = v3 - (float)a2;
  if ( v4 != 0.0 )
  {
    if ( v4 >= 0.0 )
      v5 = v3 - (float)a2;
    else
      LODWORD(v5) = LODWORD(v4) + 0x80000000;
    if ( v5 >= v3 )
    {
      v3 = 0.0;
    }
    else
    {
      if ( v3 >= 0.0 )
        v6 = (Ogre *)LODWORD(v3);
      else
        v6 = (Ogre *)(LODWORD(v3) + 0x80000000);
      v8 = Ogre::Pow(v6, 2.0, a3);
      if ( v4 >= 0.0 )
        v9 = (Ogre *)LODWORD(v4);
      else
        v9 = (Ogre *)(LODWORD(v4) + 0x80000000);
      v10 = (float)(v8 - Ogre::Pow(v9, 2.0, v7));
      v11 = j_sqrt(v10);
      v3 = v11;
    }
  }
  return v3 * 0.5;
}


//======================================================================
// WorldGenBigTree::leafSize(int)
// address: 0x002ECA14   size: 0x26 (38 bytes)
//======================================================================
int __fastcall WorldGenBigTree::leafSize(WorldGenBigTree *this, int a2)
{
  int v2; // r3

  if ( a2 < 0 )
    return -1082130432;
  v2 = *((_DWORD *)this + 16);
  if ( a2 >= v2 )
    return -1082130432;
  if ( a2 != 0 && a2 != v2 - 1 )
    return 1077936128;
  return 0x40000000;
}


//======================================================================
// WorldGenBigTree::generateLeafNode(int,int,int)
// address: 0x002ECA44   size: 0x40 (64 bytes)
//======================================================================
int __fastcall WorldGenBigTree::generateLeafNode(int this, int a2, int a3, int a4)
{
  WorldGenBigTree *v5; // r5
  int i; // r4
  int v8; // r0
  int v9; // [sp+10h] [bp-Ch]

  v5 = (WorldGenBigTree *)this;
  v9 = a3 + *(_DWORD *)(this + 64);
  for ( i = a3; i < v9; ++i )
  {
    v8 = WorldGenBigTree::leafSize(v5, i - a3);
    this = WorldGenBigTree::genTreeLayer(v5, a2, i, a4, *(float *)&v8, 1, 218);
  }
  return this;
}


//======================================================================
// WorldGenBigTree::placeBlockLine(int *,int *,int)
// address: 0x002ECA84   size: 0x168 (360 bytes)
//======================================================================
int __fastcall WorldGenBigTree::placeBlockLine(World **this, int *a2, int *a3, int a4)
{
  int v4; // r3
  int v5; // r0
  int result; // r0
  int v7; // r7
  int v8; // r4
  int *v9; // r7
  int i; // r6
  int v11; // [sp+14h] [bp-50h]
  int v12; // [sp+20h] [bp-44h]
  int v13; // [sp+24h] [bp-40h]
  float v14; // [sp+28h] [bp-3Ch]
  int *v15; // [sp+2Ch] [bp-38h]
  int *v16; // [sp+30h] [bp-34h]
  int v17; // [sp+38h] [bp-2Ch]
  float v19; // [sp+40h] [bp-24h]
  int v21[3]; // [sp+48h] [bp-1Ch] BYREF
  int v22; // [sp+54h] [bp-10h] BYREF
  int v23; // [sp+58h] [bp-Ch]
  int v24; // [sp+5Ch] [bp-8h]

  v4 = 0;
  memset(v21, 0, sizeof(v21));
  v11 = 0;
  do
  {
    v5 = a3[v4] - a2[v4];
    v21[v4] = v5;
    result = (v5 + (v5 >> 31)) ^ (v5 >> 31);
    if ( result > ((v21[v11] + (v21[v11] >> 31)) ^ (v21[v11] >> 31)) )
      v11 = v4;
    ++v4;
  }
  while ( v4 != 3 );
  v7 = v11;
  v8 = v21[v11];
  if ( v8 != 0 )
  {
    v17 = dword_446DAC[v11 + 3];
    v13 = dword_446DAC[v7];
    v12 = (((v8 - 1) | v8) >> 31) | 1;
    v9 = &a2[v7];
    v19 = (float)v21[v13] / (float)v8;
    v14 = (float)v21[v17] / (float)v8;
    result = v12;
    v22 = 0;
    v23 = 0;
    v24 = 0;
    v15 = &a2[v13];
    v16 = &a2[v17];
    for ( i = 0; i != v8 + v12; i += v12 )
    {
      *(&v22 + v11) = (int)(float)((float)(i + *v9) + 0.5);
      *(&v22 + v13) = (int)(float)((float)((float)*v15 + (float)((float)i * v19)) + 0.5);
      *(&v22 + v17) = (int)(float)((float)((float)*v16 + (float)((float)i * v14)) + 0.5);
      result = WorldGenerator::setBlockAndMetadata((WorldGenerator *)this, *(this + 13), v22, v23, v24, a4, 0);
    }
  }
  return result;
}


//======================================================================
// WorldGenBigTree::generateLeaves(void)
// address: 0x002ECBF0   size: 0x2C (44 bytes)
//======================================================================
int __fastcall WorldGenBigTree::generateLeaves(int this)
{
  int v1; // r5
  signed int v2; // r4
  signed int v3; // r6

  v1 = this;
  v2 = 0;
  v3 = (unsigned int)((*(_DWORD *)(this + 72) - *(_DWORD *)(this + 68)) >> 2) >> 2;
  while ( v2 < v3 )
  {
    this = WorldGenBigTree::generateLeafNode(
             v1,
             *(_DWORD *)(*(_DWORD *)(v1 + 68) + 16 * v2),
             *(_DWORD *)(*(_DWORD *)(v1 + 68) + 16 * v2 + 4),
             *(_DWORD *)(*(_DWORD *)(v1 + 68) + 16 * v2 + 8));
    ++v2;
  }
  return this;
}


//======================================================================
// WorldGenBigTree::generateTrunk(void)
// address: 0x002ECC1C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall WorldGenBigTree::generateTrunk(WorldGenBigTree *this)
{
  int v1; // r1
  int v3; // r2
  int v4; // r0
  int v5; // r3
  int result; // r0
  int v7[2]; // [sp+0h] [bp-18h] BYREF
  int v8; // [sp+8h] [bp-10h]
  int v9[2]; // [sp+Ch] [bp-Ch] BYREF
  int v10; // [sp+14h] [bp-4h]

  v1 = *((_DWORD *)this + 3);
  v3 = *((_DWORD *)this + 2);
  v4 = v1 + *((_DWORD *)this + 6);
  v5 = *((_DWORD *)this + 4);
  v7[0] = v3;
  v7[1] = v1;
  v8 = v5;
  v9[0] = v3;
  v9[1] = v4;
  v10 = v5;
  result = WorldGenBigTree::placeBlockLine((World **)this, v7, v9, 200);
  if ( *((_DWORD *)this + 14) == 2 )
  {
    ++v7[0];
    ++v9[0];
    WorldGenBigTree::placeBlockLine((World **)this, v7, v9, 200);
    ++v8;
    ++v10;
    WorldGenBigTree::placeBlockLine((World **)this, v7, v9, 200);
    --v7[0];
    --v9[0];
    return WorldGenBigTree::placeBlockLine((World **)this, v7, v9, 200);
  }
  return result;
}


//======================================================================
// WorldGenBigTree::generateLeafNodeBases(void)
// address: 0x002ECC98   size: 0x76 (118 bytes)
//======================================================================
int __fastcall WorldGenBigTree::generateLeafNodeBases(int this)
{
  int v1; // r1
  int v2; // r2
  int v3; // r4
  signed int i; // r5
  int *v5; // r3
  int v6; // r0
  int v7; // r3
  float v8; // [sp+0h] [bp-24h]
  signed int v9; // [sp+4h] [bp-20h]
  int v10[3]; // [sp+8h] [bp-1Ch] BYREF
  int v11[4]; // [sp+14h] [bp-10h] BYREF

  v9 = (unsigned int)((*(_DWORD *)(this + 72) - *(_DWORD *)(this + 68)) >> 2) >> 2;
  v1 = *(_DWORD *)(this + 12);
  v2 = *(_DWORD *)(this + 16);
  v3 = this;
  v10[0] = *(_DWORD *)(this + 8);
  v10[1] = v1;
  v10[2] = v2;
  for ( i = 0; i < v9; ++i )
  {
    v5 = (int *)(*(_DWORD *)(v3 + 68) + 16 * i);
    v11[0] = *v5;
    v11[1] = v5[1];
    v11[2] = v5[2];
    v6 = v5[3];
    v7 = *(_DWORD *)(v3 + 12);
    v10[1] = v6;
    v8 = (float)(v6 - v7);
    this = v8 >= (float)((float)*(int *)(v3 + 20) * 0.2);
    if ( v8 >= (float)((float)*(int *)(v3 + 20) * 0.2) )
      this = WorldGenBigTree::placeBlockLine((World **)v3, v10, v11, 200);
  }
  return this;
}


//======================================================================
// WorldGenBigTree::checkBlockLine(int *,int *)
// address: 0x002ECD14   size: 0x150 (336 bytes)
//======================================================================
int __fastcall WorldGenBigTree::checkBlockLine(WorldGenBigTree *this, int *a2, int *a3)
{
  int v3; // r3
  int v4; // r0
  int v5; // r7
  int v6; // r5
  int *v7; // r7
  int i; // r5
  int BlockID; // r0
  World *v11; // [sp+4h] [bp-60h]
  int v12; // [sp+Ch] [bp-58h]
  int v13; // [sp+14h] [bp-50h]
  int v14; // [sp+18h] [bp-4Ch]
  int *v15; // [sp+1Ch] [bp-48h]
  int *v16; // [sp+20h] [bp-44h]
  int v17; // [sp+24h] [bp-40h]
  float v18; // [sp+28h] [bp-3Ch]
  float v19; // [sp+2Ch] [bp-38h]
  int v20; // [sp+30h] [bp-34h]
  _DWORD v22[3]; // [sp+3Ch] [bp-28h] BYREF
  int v23; // [sp+48h] [bp-1Ch] BYREF
  int v24; // [sp+4Ch] [bp-18h]
  int v25; // [sp+50h] [bp-14h]
  _DWORD v26[4]; // [sp+54h] [bp-10h] BYREF

  v3 = 0;
  memset(v22, 0, sizeof(v22));
  v12 = 0;
  do
  {
    v4 = a3[v3] - a2[v3];
    v22[v3] = v4;
    if ( ((v4 + (v4 >> 31)) ^ (v4 >> 31)) > ((v22[v12] + ((int)v22[v12] >> 31)) ^ ((int)v22[v12] >> 31)) )
      v12 = v3;
    ++v3;
  }
  while ( v3 != 3 );
  v5 = v12;
  v6 = v22[v12];
  if ( v6 != 0 )
  {
    v17 = dword_446DAC[v12 + 3];
    v14 = dword_446DAC[v5];
    v13 = (((v6 - 1) | v6) >> 31) | 1;
    v7 = &a2[v5];
    v18 = (float)(int)v22[v14] / (float)v6;
    v19 = (float)(int)v22[v17] / (float)v6;
    v23 = 0;
    v20 = v6 + v13;
    v24 = 0;
    v25 = 0;
    v15 = &a2[v14];
    v16 = &a2[v17];
    for ( i = 0; i != v20; i += v13 )
    {
      *(&v23 + v12) = *v7 + i;
      *(&v23 + v14) = (int)(float)((float)*v15 + (float)((float)i * v18));
      *(&v23 + v17) = (int)(float)((float)*v16 + (float)((float)i * v19));
      v11 = *((World **)this + 13);
      v26[0] = v23;
      v26[1] = v24;
      v26[2] = v25;
      BlockID = World::getBlockID(v11, (const WCoord *)v26, v24, v25);
      if ( BlockID != 0 && (unsigned int)(BlockID - 218) > 5 )
        return (i + (i >> 31)) ^ (i >> 31);
    }
  }
  return -1;
}


//======================================================================
// WorldGenBigTree::validTreeLocation(void)
// address: 0x002ECE68   size: 0x56 (86 bytes)
//======================================================================
int __fastcall WorldGenBigTree::validTreeLocation(WorldGenBigTree *this)
{
  int v2; // r2
  int v3; // r7
  int v4; // r0
  int v5; // r3
  World *v6; // r0
  int v8; // r0
  int v9[3]; // [sp+4h] [bp-28h] BYREF
  int v10[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v11[4]; // [sp+1Ch] [bp-10h] BYREF

  v2 = *((_DWORD *)this + 3);
  v3 = *((_DWORD *)this + 5);
  v4 = *((_DWORD *)this + 2);
  v5 = *((_DWORD *)this + 4);
  v10[1] = v2 + v3 - 1;
  v9[0] = v4;
  v9[1] = v2;
  v10[0] = v4;
  v11[0] = v4;
  v6 = *((World **)this + 13);
  v9[2] = v5;
  v10[2] = v5;
  v11[1] = v2 - 1;
  v11[2] = v5;
  if ( (unsigned int)(World::getBlockID(v6, (const WCoord *)v11, v2 - 1, v5) - 100) > 1 )
    return 0;
  v8 = WorldGenBigTree::checkBlockLine(this, v9, v10);
  if ( v8 != -1 )
  {
    if ( v8 <= 5 )
      return 0;
    *((_DWORD *)this + 5) = v8;
  }
  return 1;
}


//======================================================================
// WorldGenBigTree::generateLeafNodeList(void)
// address: 0x002ECEC0   size: 0x2A0 (672 bytes)
//======================================================================
void __fastcall WorldGenBigTree::generateLeafNodeList(WorldGenBigTree *this, int a2, float a3)
{
  int v3; // r4
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r4
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r4
  int v11; // r0
  int v12; // r3
  int v13; // r1
  float v14; // r2
  float v15; // r4
  float v16; // r4
  float v17; // r0
  float v18; // r0
  int v19; // r0
  int v20; // r1
  float v21; // r2
  float v22; // r0
  double v23; // r0
  float v24; // r0
  float v25; // r0
  int v26; // r3
  char *v27; // r3
  int v28; // r2
  unsigned int v29; // r1
  unsigned int v30; // r3
  size_t v31; // r4
  __int64 v32; // r0
  int v33; // [sp+8h] [bp-54h]
  int v34; // [sp+Ch] [bp-50h]
  double xa; // [sp+10h] [bp-4Ch]
  int x; // [sp+10h] [bp-4Ch]
  int v37; // [sp+18h] [bp-44h]
  int v38; // [sp+1Ch] [bp-40h]
  float v39; // [sp+20h] [bp-3Ch]
  int v40; // [sp+24h] [bp-38h]
  int i; // [sp+28h] [bp-34h]
  float v42; // [sp+2Ch] [bp-30h]
  int v43; // [sp+34h] [bp-28h] BYREF
  int v44; // [sp+38h] [bp-24h]
  int v45; // [sp+3Ch] [bp-20h]
  int v46[3]; // [sp+40h] [bp-1Ch] BYREF
  int v47; // [sp+4Ch] [bp-10h] BYREF
  int v48; // [sp+50h] [bp-Ch]
  float v49; // [sp+54h] [bp-8h]

  v3 = *((_DWORD *)this + 5);
  v5 = (int)(float)((float)v3 * *((float *)this + 7));
  if ( v5 >= v3 )
    *((_DWORD *)this + 6) = v3 - 1;
  else
    *((_DWORD *)this + 6) = v5;
  v38 = (int)(float)(Ogre::Pow(COERCE_OGRE_((float)((float)v3 * *((float *)this + 11)) / 13.0), 2.0, a3) + 1.382);
  if ( v38 <= 0 )
    v38 = 1;
  v6 = *((_DWORD *)this + 5) * v38;
  v7 = 4 * v6;
  if ( 4 * v6 != 0 )
  {
    if ( v7 > 0x3FFFFFFF )
      sub_3BCEB4(v6);
    v8 = (_DWORD *)operator new(16 * v6);
  }
  else
  {
    v8 = nullptr;
  }
  memset(v8, 0, 4 * v7);
  v9 = *((_DWORD *)this + 3);
  v10 = *((_DWORD *)this + 6);
  v11 = *((_DWORD *)this + 2);
  v12 = v9 + *((_DWORD *)this + 5) - *((_DWORD *)this + 16);
  v8[1] = v12;
  *v8 = v11;
  v13 = *((_DWORD *)this + 4);
  v40 = v9 + v10;
  v8[3] = v9 + v10;
  LODWORD(v14) = v12 - v9 - 1;
  v8[2] = v13;
  v39 = v14;
  v37 = v12 - 1;
  v33 = 1;
  while ( LODWORD(v39) + 1 >= 0 )
  {
    v42 = WorldGenBigTree::layerSize(this, LODWORD(v39) + 1, v14);
    if ( v42 >= 0.0 )
    {
      for ( i = 0; i < v38; ++i )
      {
        v15 = v42 * *((float *)this + 10);
        v16 = v15 * (float)(ChunkRandGen::getFloat(*((ChunkRandGen **)this + 12)) + 0.328);
        xa = (float)((float)(ChunkRandGen::getFloat(*((ChunkRandGen **)this + 12)) * 360.0) * 0.017453);
        v17 = j_sin(xa);
        v34 = (int)(float)((float)((float)(v16 * v17) + (float)*((int *)this + 2)) + 0.5);
        v18 = j_cos(xa);
        x = (int)(float)((float)((float)(v16 * v18) + (float)*((int *)this + 4)) + 0.5);
        v43 = v34;
        v45 = x;
        v19 = *((_DWORD *)this + 16);
        v44 = v37;
        v46[0] = v34;
        v46[1] = v37 + v19;
        v46[2] = x;
        if ( WorldGenBigTree::checkBlockLine(this, &v43, v46) == -1 )
        {
          v20 = *((_DWORD *)this + 3);
          v21 = *((float *)this + 4);
          v47 = *((_DWORD *)this + 2);
          v48 = v20;
          v49 = v21;
          v22 = Ogre::Pow(COERCE_OGRE_((float)((v47 - v43 + ((v47 - v43) >> 31)) ^ ((v47 - v43) >> 31))), 2.0, v21);
          v23 = (float)(v22
                      + Ogre::Pow(
                          COERCE_OGRE_((float)((*((_DWORD *)this + 4) - v45 + ((*((_DWORD *)this + 4) - v45) >> 31))
                                             ^ ((*((_DWORD *)this + 4) - v45) >> 31))),
                          2.0,
                          *((float *)this + 4)));
          v24 = j_sqrt(v23);
          v25 = (float)v44 - (float)(v24 * *((float *)this + 9));
          if ( v25 <= (float)v40 )
            v48 = (int)v25;
          else
            v48 = v40;
          if ( WorldGenBigTree::checkBlockLine(this, &v47, &v43) == -1 )
          {
            v8[4 * v33] = v34;
            v26 = 16 * v33 + 4;
            *(_DWORD *)((char *)v8 + v26) = v37;
            v27 = (char *)v8 + v26;
            *((_DWORD *)v27 + 1) = x;
            *((_DWORD *)v27 + 2) = v48;
            ++v33;
          }
        }
      }
    }
    --LODWORD(v39);
    --v37;
  }
  v28 = *((_DWORD *)this + 17);
  v29 = 4 * v33;
  v30 = (*((_DWORD *)this + 18) - v28) >> 2;
  v31 = 16 * v33;
  if ( 4 * v33 <= v30 )
  {
    if ( v29 < v30 )
      *((_DWORD *)this + 18) = v28 + v31;
  }
  else
  {
    HIDWORD(v32) = v29 - v30;
    LODWORD(v32) = (char *)this + 68;
    std::vector<int>::_M_default_append(v32);
  }
  j_memcpy(*((void **)this + 17), v8, v31);
  operator delete(v8);
}


//======================================================================
// WorldGenBigTree::generate(World *,ChunkRandGen &,WCoord const&)
// address: 0x002ED184   size: 0x5C (92 bytes)
//======================================================================
int __fastcall WorldGenBigTree::generate(WorldGenBigTree *this, World *a2, ChunkRandGen *a3, const WCoord *a4)
{
  unsigned int v6; // r6
  int v7; // r1
  float v8; // r2
  int valid; // r5

  *((_DWORD *)this + 13) = a2;
  *((_DWORD *)this + 12) = a3;
  *((_DWORD *)this + 2) = *(_DWORD *)a4;
  *((_DWORD *)this + 3) = *((_DWORD *)a4 + 1);
  *((_DWORD *)this + 4) = *((_DWORD *)a4 + 2);
  if ( *((_DWORD *)this + 5) == 0 )
  {
    v6 = *((_DWORD *)this + 15);
    ChunkRandGen::_dorand48((unsigned __int16 *)a3);
    *((_DWORD *)this + 5) = ((*((unsigned __int16 *)a3 + 2) << 16) | (unsigned int)*((unsigned __int16 *)a3 + 1)) % v6
                          + 5;
  }
  valid = WorldGenBigTree::validTreeLocation(this);
  if ( valid != 0 )
  {
    WorldGenBigTree::generateLeafNodeList(this, v7, v8);
    WorldGenBigTree::generateLeaves((int)this);
    WorldGenBigTree::generateTrunk(this);
    WorldGenBigTree::generateLeafNodeBases((int)this);
  }
  return valid;
}

