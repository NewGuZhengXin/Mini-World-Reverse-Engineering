// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TerrainTile

//======================================================================
// Ogre::TerrainTile::getBlock(unsigned int,unsigned int)
// address: 0x0019D52E   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::TerrainTile::getBlock(Ogre::TerrainTile *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3
  int v4; // r1

  v3 = *((_DWORD *)this + 6);
  if ( a2 >= v3 || a3 >= *((_DWORD *)this + 7) )
    v4 = -1;
  else
    v4 = a3 * v3 + a2;
  return *(_DWORD *)(4 * v4 + *((_DWORD *)this + 2));
}


//======================================================================
// Ogre::TerrainTile::~TerrainTile()
// address: 0x0019D7FC   size: 0x54 (84 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11TerrainTileD1Ev'
void __fastcall Ogre::TerrainTile::~TerrainTile(Ogre::TerrainTile *this)
{
  _DWORD *v2; // r0
  unsigned int i; // r5
  int v4; // r3
  int v5; // r0
  Ogre::LooseOctreeNode **v6; // r5
  void *v7; // r0

  v2 = *((_DWORD **)this + 1);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 1) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 2);
    if ( i >= (*((_DWORD *)this + 3) - v4) >> 2 )
      break;
    v5 = *(_DWORD *)(4 * i + v4);
    if ( v5 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  }
  v6 = *((Ogre::LooseOctreeNode ***)this + 8);
  *((_DWORD *)this + 3) = v4;
  if ( v6 != nullptr )
  {
    Ogre::LooseOctree::~LooseOctree(v6);
    operator delete(v6);
  }
  v7 = *((void **)this + 2);
  if ( v7 != nullptr )
    operator delete(v7);
}


//======================================================================
// Ogre::TerrainTile::update(unsigned int)
// address: 0x0019D946   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall Ogre::TerrainTile::update(_DWORD *this, unsigned int a2)
{
  _DWORD *v2; // r5
  unsigned int i; // r4
  int v5; // r3

  v2 = this;
  for ( i = 0; ; ++i )
  {
    v5 = v2[2];
    if ( i >= (v2[3] - v5) >> 2 )
      break;
    this = Ogre::TerrainSceneNode::update(*(_DWORD **)(4 * i + v5), a2);
  }
  return this;
}


//======================================================================
// Ogre::TerrainTile::updateGrassDisturb(Ogre::WorldPos,unsigned int)
// address: 0x0019D96A   size: 0x122 (290 bytes)
//======================================================================
unsigned int __fastcall Ogre::TerrainTile::updateGrassDisturb(int a1, int a2, int a3, int a4, unsigned int a5)
{
  unsigned int result; // r0
  unsigned int v7; // r4
  int v8; // r7
  int v9; // r6
  int v10; // r1
  Ogre::TerrainBlock *v11; // r0
  int v12; // r2
  int v13; // [sp+Ch] [bp-38h]
  int v14; // [sp+10h] [bp-34h]
  int v15; // [sp+14h] [bp-30h]
  int v16; // [sp+18h] [bp-2Ch]
  unsigned int v17; // [sp+1Ch] [bp-28h]
  unsigned int v18; // [sp+20h] [bp-24h]
  int v19; // [sp+24h] [bp-20h] BYREF
  int v20; // [sp+28h] [bp-1Ch]
  int v21; // [sp+2Ch] [bp-18h]
  float v22[4]; // [sp+34h] [bp-10h] BYREF

  v19 = a2;
  v20 = a3;
  v21 = a4;
  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v22, &v19);
  v17 = (unsigned int)(float)(v22[0] / *(float *)(a1 + 20));
  result = (unsigned int)(float)(v22[2] / *(float *)(a1 + 20));
  v7 = 0;
  v18 = result;
  while ( 1 )
  {
    v15 = *(_DWORD *)(a1 + 8);
    if ( v7 >= (*(_DWORD *)(a1 + 12) - v15) >> 2 )
      return result;
    v8 = v7 % *(_DWORD *)(a1 + 24) - v17;
    v9 = v7 / *(_DWORD *)(a1 + 24) - v18;
    v14 = (v8 + (v8 >> 31)) ^ (v8 >> 31);
    v16 = (v9 + (v9 >> 31)) ^ (v9 >> 31);
    v13 = 4 * v7;
    if ( v14 > 1 || v16 > 1 )
    {
      Ogre::TerrainBlock::setTerrainQuality(*(Ogre::TerrainBlock **)(*(_DWORD *)(v15 + 4 * v7) + 12), 1);
      Ogre::TerrainBlock::setSubDevie(*(Ogre::TerrainBlock **)(*(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * v7) + 12), 1);
      if ( v8 == -2 )
      {
        if ( v16 <= 1 )
        {
LABEL_6:
          v10 = 5;
          v11 = *(Ogre::TerrainBlock **)(*(_DWORD *)(4 * v7 + *(_DWORD *)(a1 + 8)) + 12);
LABEL_20:
          Ogre::TerrainBlock::setSubDevie(v11, v10);
          goto LABEL_21;
        }
      }
      else if ( v8 == 2 && v16 <= 1 )
      {
        goto LABEL_12;
      }
    }
    else
    {
      Ogre::TerrainBlock::setTerrainQuality(*(Ogre::TerrainBlock **)(*(_DWORD *)(v15 + 4 * v7) + 12), 0);
      if ( v8 == -2 )
        goto LABEL_6;
      if ( v8 == 2 )
      {
LABEL_12:
        v10 = 4;
        v11 = *(Ogre::TerrainBlock **)(*(_DWORD *)(4 * v7 + *(_DWORD *)(a1 + 8)) + 12);
        goto LABEL_20;
      }
    }
    v12 = *(_DWORD *)(a1 + 8);
    if ( v9 == -2 )
    {
      if ( v14 > 1 )
        goto LABEL_21;
      v10 = 3;
      v11 = *(Ogre::TerrainBlock **)(*(_DWORD *)(v12 + 4 * v7) + 12);
      goto LABEL_20;
    }
    if ( v9 == 2 && v14 <= 1 )
    {
      v10 = 2;
      v11 = *(Ogre::TerrainBlock **)(*(_DWORD *)(v12 + 4 * v7) + 12);
      goto LABEL_20;
    }
LABEL_21:
    ++v7;
    result = Ogre::TerrainSceneNode::updateGrassDisturb(*(float **)(*(_DWORD *)(a1 + 8) + v13), v19, v20, v21, a5);
  }
}


//======================================================================
// Ogre::TerrainTile::getBlockRange(int &,int &,int &,int &,Ogre::BoxSphereBound const&)
// address: 0x0019DA8C   size: 0xCA (202 bytes)
//======================================================================
int __fastcall Ogre::TerrainTile::getBlockRange(
        Ogre::TerrainTile *this,
        int *a2,
        int *a3,
        int *a4,
        int *a5,
        const Ogre::BoxSphereBound *a6)
{
  float v8; // r0
  float v9; // r7
  float v10; // r4
  int v11; // r0
  int v12; // r3
  int result; // r0
  int v14; // r3
  float v16; // [sp+4h] [bp-20h]
  float v19[4]; // [sp+14h] [bp-10h] BYREF

  Ogre::operator-(v19, (float *)a6, (float *)a6 + 3);
  v16 = v19[0];
  Ogre::operator-(v19, (float *)a6, (float *)a6 + 3);
  v9 = v19[2];
  v8 = *(float *)a6 + *((float *)a6 + 3);
  v10 = *((float *)a6 + 2) + *((float *)a6 + 5);
  *a2 = (int)(float)(v16 / *((float *)this + 5)) & (~(int)(float)(v16 / *((float *)this + 5)) >> 31);
  *a3 = (int)(float)(v9 / *((float *)this + 5)) & (~(int)(float)(v9 / *((float *)this + 5)) >> 31);
  v11 = (int)(float)((float)((float)(v8 + *((float *)this + 5)) - 1.0) / *((float *)this + 5));
  *a4 = v11;
  v12 = *((_DWORD *)this + 6);
  if ( v11 >= v12 )
    *a4 = v12 - 1;
  result = (int)(float)((float)((float)(v10 + *((float *)this + 5)) - 1.0) / *((float *)this + 5));
  *a5 = result;
  v14 = *((_DWORD *)this + 7);
  if ( result >= v14 )
    *a5 = v14 - 1;
  return result;
}


//======================================================================
// Ogre::TerrainTile::buildPhysicsScene2(Ogre::PhysicsScene2 *)
// address: 0x0019DB56   size: 0xA (10 bytes)
//======================================================================
Ogre::BaseObject *__fastcall Ogre::TerrainTile::buildPhysicsScene2(Ogre::BaseObject **this, Ogre::PhysicsScene2 *a2)
{
  return Ogre::TerrainTileSource::buildPhysicsScene2(*(this + 1), a2);
}


//======================================================================
// Ogre::TerrainTile::loadOneBlock(unsigned int,unsigned int)
// address: 0x001A038C   size: 0x24 (36 bytes)
//======================================================================
void __fastcall Ogre::TerrainTile::loadOneBlock(Ogre::TerrainTile *this, unsigned int a2, unsigned int a3)
{
  unsigned int v3; // r3
  int v4; // r1

  v3 = *((_DWORD *)this + 6);
  if ( a2 >= v3 || a3 >= *((_DWORD *)this + 7) )
    v4 = -1;
  else
    v4 = a3 * v3 + a2;
  Ogre::TerrainSceneNode::loadTerrain(*(Ogre::TerrainSceneNode **)(4 * v4 + *((_DWORD *)this + 2)));
}


//======================================================================
// Ogre::TerrainTile::buildBlocks(void)
// address: 0x001A03D4   size: 0x166 (358 bytes)
//======================================================================
int __fastcall Ogre::TerrainTile::buildBlocks(Ogre::TerrainTile *this)
{
  unsigned int i; // r5
  _DWORD *v3; // r6
  int v4; // r3
  unsigned int j; // r5
  _DWORD *v6; // r3
  int v7; // r2
  int result; // r0
  float v9; // r7
  int v10; // r6
  int v11; // r0
  unsigned int v12; // r1
  unsigned int v13; // r3
  unsigned int v14; // r6
  unsigned int v15; // r2
  int v16; // r3
  __int64 v17; // r0
  int v18; // r5
  int *v19; // r6
  int v20; // r0
  int *v21; // r7
  __int64 v22; // r0
  int *v23; // r0
  unsigned int k; // r5
  int v25; // r2
  int v26; // r3
  int v27; // r3
  unsigned int v28; // r6
  int v29; // r0
  int v30; // r6
  __int64 v31; // r0
  int v32; // [sp+0h] [bp-14h]
  unsigned int v33; // [sp+0h] [bp-14h]
  _DWORD v34[2]; // [sp+Ch] [bp-8h] BYREF

  for ( i = 0; i < (*((_DWORD *)this + 3) - *((_DWORD *)this + 2)) >> 2; ++i )
  {
    v3 = (_DWORD *)operator new(0x50u);
    Ogre::TerrainSceneNode::TerrainSceneNode(v3, this, i);
    v4 = 4 * i;
    *(_DWORD *)(v4 + *((_DWORD *)this + 2)) = v3;
  }
  for ( j = 0; ; ++j )
  {
    v6 = *((_DWORD **)this + 1);
    v7 = v6[19];
    result = v6[20];
    if ( j >= (result - v7) >> 2 )
      break;
    v9 = *((float *)this + 5);
    v32 = *(_DWORD *)(4 * j + v7);
    v10 = (int)(float)(*(float *)(v32 + 44) / v9);
    v11 = (int)(float)(*(float *)(v32 + 52) / v9);
    v12 = *((_DWORD *)this + 6);
    if ( v10 < 0 )
    {
      v13 = 0;
    }
    else
    {
      v13 = v12 - 1;
      if ( (int)(v12 - 1) > v10 )
        v13 = (int)(float)(*(float *)(*(_DWORD *)(4 * j + v7) + 44) / *((float *)this + 5));
    }
    v14 = *((_DWORD *)this + 7);
    if ( v11 < 0 )
    {
      v15 = 0;
    }
    else
    {
      v15 = v14 - 1;
      if ( (int)(v14 - 1) > v11 )
        v15 = (int)(float)(*(float *)(v32 + 52) / v9);
    }
    if ( v13 >= v12 || v15 >= v14 )
      v16 = -1;
    else
      v16 = v15 * v12 + v13;
    LODWORD(v17) = *(_DWORD *)(4 * v16 + *((_DWORD *)this + 2));
    HIDWORD(v17) = v34;
    v34[0] = j;
    LODWORD(v17) = v17 + 16;
    std::vector<int>::push_back(v17);
  }
  v18 = v6[22];
  v19 = (int *)v6[23];
  if ( (int *)v18 != v19 )
  {
    v20 = j___clzsi2(((int)v19 - v18) >> 2);
    std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,int,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
      v18,
      v19,
      2 * (31 - v20),
      (int (__fastcall *)(int, int))sub_19D3E0);
    if ( (int)v19 - v18 <= 67 )
    {
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
                 __SPAIR64__((unsigned int)v19, v18),
                 (int (__fastcall *)(int, _DWORD))sub_19D3E0);
    }
    else
    {
      v21 = (int *)(v18 + 64);
      LODWORD(v22) = v18;
      HIDWORD(v22) = v18 + 64;
      result = std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
                 v22,
                 (int (__fastcall *)(int, _DWORD))sub_19D3E0);
      while ( v21 != v19 )
      {
        v23 = v21++;
        result = std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::TileModel **,std::vector<Ogre::TileModel *>>,bool (*)(Ogre::TileModel *,Ogre::TileModel *)>(
                   v23,
                   (int (__fastcall *)(int, _DWORD))sub_19D3E0);
      }
    }
  }
  for ( k = 0; ; ++k )
  {
    v25 = *((_DWORD *)this + 1);
    v26 = *(_DWORD *)(v25 + 88);
    if ( k >= (*(_DWORD *)(v25 + 92) - v26) >> 2 )
      break;
    v27 = *(_DWORD *)(4 * k + v26);
    v28 = (int)(float)(*(float *)(v27 + 44) / *((float *)this + 5));
    v33 = *((_DWORD *)this + 6);
    if ( v28 >= v33
      || (unsigned int)(v29 = (int)(float)(*(float *)(v27 + 52) / *((float *)this + 5))) >= *((_DWORD *)this + 7) )
    {
      v30 = -1;
    }
    else
    {
      v30 = v29 * v33 + v28;
    }
    HIDWORD(v31) = v34;
    LODWORD(v31) = *(_DWORD *)(4 * v30 + *((_DWORD *)this + 2));
    v34[0] = k;
    LODWORD(v31) = v31 + 28;
    result = std::vector<int>::push_back(v31);
  }
  return result;
}


//======================================================================
// Ogre::TerrainTile::TerrainTile(Ogre::GameTerrainScene *,Ogre::TerrainTileSource *)
// address: 0x001A068C   size: 0xB8 (184 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11TerrainTileC1EPNS_16GameTerrainSceneEPNS_17TerrainTileSourceE'
Ogre::TerrainTile *__fastcall Ogre::TerrainTile::TerrainTile(
        Ogre::TerrainTile *this,
        Ogre::GameTerrainScene *a2,
        Ogre::TerrainTileSource *a3)
{
  int v5; // r2
  int v6; // r1
  int v7; // r0
  int v8; // r3
  unsigned int v9; // r3
  _DWORD *v10; // r1
  unsigned int v11; // r2
  float v12; // r0
  float v13; // r6
  Ogre::LooseOctree *v14; // r7
  void *v16; // [sp+10h] [bp-14h] BYREF
  float v17[2]; // [sp+14h] [bp-10h] BYREF
  float v18; // [sp+1Ch] [bp-8h]

  *(_DWORD *)this = a2;
  *((_DWORD *)this + 1) = a3;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  if ( a3 != nullptr )
    (*(void (__fastcall **)(Ogre::TerrainTileSource *))(*(_DWORD *)a3 + 4))(a3);
  v5 = *((unsigned __int8 *)a3 + 18);
  v6 = *((_DWORD *)this + 1);
  v7 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 6) = v5;
  v8 = *((unsigned __int8 *)a3 + 19);
  *((_DWORD *)this + 7) = v8;
  v9 = v8 * v5;
  *((_DWORD *)this + 5) = *(_DWORD *)(v6 + 24);
  v10 = *((_DWORD **)this + 3);
  v16 = nullptr;
  v11 = ((int)v10 - v7) >> 2;
  if ( v9 <= v11 )
  {
    if ( v9 < v11 )
      *((_DWORD *)this + 3) = v7 + 4 * v9;
  }
  else
  {
    std::vector<Ogre::TerrainSceneNode *>::_M_fill_insert((int)this + 8, v10, v9 - v11, &v16);
  }
  (*(void (__fastcall **)(_DWORD, float *))(**((_DWORD **)this + 1) + 44))(*((_DWORD *)this + 1), v17);
  v12 = (float)((float)*((unsigned int *)this + 6) * *((float *)this + 5)) * 0.5;
  v13 = v12;
  v17[0] = v17[0] + v12;
  v18 = v18 + v12;
  v14 = (Ogre::LooseOctree *)operator new(0x38u);
  Ogre::LooseOctree::LooseOctree(v14, *(Ogre::GameScene **)this, 5u, (const Ogre::Vector3 *)v17, v13 * 1.2);
  *((_DWORD *)this + 8) = v14;
  return this;
}

