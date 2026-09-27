// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ClientSection

//======================================================================
// ClientSection::~ClientSection()
// address: 0x002CBAB8   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN13ClientSectionD1Ev'
void __fastcall ClientSection::~ClientSection(ClientSection *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_45F9B8;
  v2 = *((_DWORD **)this + 14);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 14) = 0;
  }
  v3 = *((_DWORD **)this + 15);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 15) = 0;
  }
  Section::~Section(this);
}


//======================================================================
// ClientSection::~ClientSection()
// address: 0x002CBAF0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ClientSection::~ClientSection(ClientSection *this)
{
  ClientSection::~ClientSection(this);
  operator delete(this);
}


//======================================================================
// ClientSection::ClientSection(Chunk *,int)
// address: 0x002CBB04   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN13ClientSectionC2EP5Chunki'
_DWORD *__fastcall ClientSection::ClientSection(_DWORD *a1, int a2, int a3)
{
  Section::Section((int)a1, a2, a3);
  *a1 = &off_45F9B8;
  a1[14] = 0;
  a1[15] = 0;
  return a1;
}


//======================================================================
// ClientSection::getFaceVertexLight(int,WCoord const&,DirectionType,float *)
// address: 0x002CBB24   size: 0x1A8 (424 bytes)
//======================================================================
float __fastcall ClientSection::getFaceVertexLight(int a1, int a2, int *a3, int a4, float *a5)
{
  int v5; // r4
  int v7; // r2
  int BlockMaterial; // r0
  int v9; // r0
  int v10; // r1
  int v11; // r6
  int v12; // r5
  int v13; // r1
  int j; // r4
  int v16; // r7
  int v17; // r2
  float result; // r0
  int i; // [sp+Ch] [bp-88h]
  World *v21; // [sp+14h] [bp-80h]
  int v24[4]; // [sp+20h] [bp-74h] BYREF
  _DWORD v25[4]; // [sp+30h] [bp-64h] BYREF
  _DWORD v26[4]; // [sp+40h] [bp-54h] BYREF
  _DWORD v27[4]; // [sp+50h] [bp-44h] BYREF
  int v28; // [sp+60h] [bp-34h] BYREF
  int v29; // [sp+64h] [bp-30h]
  int v30; // [sp+68h] [bp-2Ch]
  int v31; // [sp+6Ch] [bp-28h]
  _DWORD v32[4]; // [sp+70h] [bp-24h] BYREF
  _DWORD v33[5]; // [sp+80h] [bp-14h] BYREF

  v5 = 0;
  v21 = *(World **)(*(_DWORD *)(a1 + 4) + 1432);
  for ( i = 0; i != 4; ++i )
  {
    Section::getVertexNeighborBlock(v33, a1, a3, a4, i);
    BlockMaterial = World::getBlockMaterial(v21, (const WCoord *)v33, v7);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)BlockMaterial + 60))(BlockMaterial) != 0 )
    {
      v25[v5] = 1;
      *(int *)((char *)&v28 + v5 * 4) = a2;
    }
    else
    {
      v25[v5] = 0;
      *(int *)((char *)&v28 + v5 * 4) = World::getBlockLightValue2(v21, (const WCoord *)v33, 0, (int)v25);
    }
    Section::getVertexCornerBlock(v24, a1, a3, a4, i);
    v33[0] = v24[0];
    v33[1] = v24[1];
    v33[2] = v24[2];
    v9 = World::getBlockMaterial(v21, (const WCoord *)v33, v24[1]);
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v9 + 60))(v9) != 0 )
    {
      v26[v5] = 1;
      v32[v5] = a2;
    }
    else
    {
      v26[v5] = 0;
      v32[v5] = World::getBlockLightValue2(v21, (const WCoord *)v33, 0, (int)v26);
    }
    ++v5;
  }
  if ( v25[0] <= 0 || (v10 = 0, v25[1] <= 0) )
    v10 = 3 - (v25[0] + v25[1] + v26[0]);
  v27[0] = v10;
  if ( v25[1] <= 0 || (v11 = 0, v25[2] <= 0) )
    v11 = 3 - (v25[1] + v25[2] + v26[1]);
  v27[1] = v11;
  if ( v25[2] <= 0 || (v12 = 0, v25[3] <= 0) )
    v12 = 3 - (v25[2] + v25[3] + v26[2]);
  v27[2] = v12;
  if ( v25[3] <= 0 || (v13 = 0, v25[0] <= 0) )
    v13 = 3 - (v25[3] + v25[0] + v26[3]);
  v27[3] = v13;
  v33[0] = ((a2 + v28 + v29 + v32[0]) >> 2) & 0xFF00FF;
  v33[1] = ((a2 + v29 + v30 + v32[1]) >> 2) & 0xFF00FF;
  v33[2] = ((a2 + v30 + v31 + v32[2]) >> 2) & 0xFF00FF;
  v33[3] = ((a2 + v31 + v28 + v32[3]) >> 2) & 0xFF00FF;
  for ( j = 0; j != 4; ++j )
  {
    v16 = v33[j];
    v17 = v27[j] + 1;
    *a5 = (float)(((v16 >> 4) & 0xF) * v17) / 60.0;
    result = (float)(v17 * ((v16 >> 20) & 0xF)) / 60.0;
    a5[1] = result;
    a5 += 2;
  }
  return result;
}


//======================================================================
// ClientSection::getFaceVertexLight(WCoord const&,DirectionType,float *)
// address: 0x002CBCD4   size: 0x66 (102 bytes)
//======================================================================
float __fastcall ClientSection::getFaceVertexLight(_DWORD *a1, int *a2, int a3, float *a4)
{
  World *v7; // r0
  int *v9; // r3
  int v10; // r12
  int BlockLightValue2; // r0
  int v13; // [sp+Ch] [bp-18h]
  _DWORD v14[4]; // [sp+14h] [bp-10h] BYREF

  v7 = *(World **)(a1[1] + 1432);
  v9 = &g_DirectionCoord[3 * a3];
  v10 = a2[1] + a1[3] + v9[1];
  v13 = a2[2] + a1[4] + v9[2];
  v14[0] = *a2 + a1[2] + *v9;
  v14[2] = v13;
  v14[1] = v10;
  BlockLightValue2 = World::getBlockLightValue2(v7, (const WCoord *)v14, 1, v10);
  return ClientSection::getFaceVertexLight((int)a1, BlockLightValue2, a2, a3, a4);
}


//======================================================================
// ClientSection::getBlockVertexLight(WCoord const&,float *)
// address: 0x002CBD40   size: 0x3A (58 bytes)
//======================================================================
float __fastcall ClientSection::getBlockVertexLight(ClientSection *this, const WCoord *a2, float *a3)
{
  int v3; // r4
  int v4; // r5
  int v5; // r6
  int v6; // r7
  World *v7; // r0
  _DWORD v9[4]; // [sp+Ch] [bp-10h] BYREF

  v3 = *((_DWORD *)this + 1);
  v4 = *((_DWORD *)a2 + 1) + *((_DWORD *)this + 3);
  v5 = *((_DWORD *)a2 + 2);
  v6 = *((_DWORD *)this + 4);
  v9[0] = *(_DWORD *)a2 + *((_DWORD *)this + 2);
  v7 = *(World **)(v3 + 1432);
  v9[2] = v5 + v6;
  v9[1] = v4;
  return World::getBlockLightValue2(v7, a3, a3 + 1, (const WCoord *)v9, true);
}


//======================================================================
// ClientSection::getNeighborCover(WCoord const&,DirectionType)
// address: 0x002CBD7C   size: 0x70 (112 bytes)
//======================================================================
int __fastcall ClientSection::getNeighborCover(_DWORD *a1, _DWORD *a2, int a3)
{
  int *v4; // r3
  int v5; // r6
  int v6; // r2
  int v7; // r3
  int v8; // r2
  World *v9; // r6
  BlockMaterialMgr *v10; // r7
  int BlockID; // r0
  int Material; // r0
  int v13; // r3
  _DWORD v15[4]; // [sp+4h] [bp-10h] BYREF

  v4 = &g_DirectionCoord[3 * a3];
  v5 = a2[1] + a1[3] + v4[1];
  v6 = a2[2] + a1[4] + v4[2];
  v7 = *a2 + a1[2] + *v4;
  v15[2] = v6;
  v8 = a1[1];
  v15[0] = v7;
  v15[1] = v5;
  v9 = *(World **)(v8 + 1432);
  v10 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  BlockID = World::getBlockID(v9, (const WCoord *)v15, v8, (int)&Ogre::Singleton<BlockMaterialMgr>::ms_Singleton);
  Material = BlockMaterialMgr::getMaterial(v10, BlockID);
  v13 = a3 + 1;
  if ( (a3 & 1) != 0 )
    v13 = a3 - 1;
  return (*(int (__fastcall **)(int, World *, _DWORD *, int))(*(_DWORD *)Material + 184))(Material, v9, v15, v13);
}


//======================================================================
// ClientSection::calVertexLights(Block *,WCoord const&,DirectionType,int,float *,bool)
// address: 0x002CBDF4   size: 0xE (14 bytes)
//======================================================================
float __fastcall ClientSection::calVertexLights(_DWORD *a1, int a2, int *a3, int a4, int a5, float *a6)
{
  return ClientSection::getFaceVertexLight(a1, a3, a4, a6);
}


//======================================================================
// ClientSection::createOneBlockMesh(int,int,int)
// address: 0x002CBE04   size: 0x54 (84 bytes)
//======================================================================
int __fastcall ClientSection::createOneBlockMesh(int this, int a2, int a3, int a4)
{
  int v5; // r2
  __int16 *v6; // r3
  int (*v7)(void); // r3

  v5 = *(_DWORD *)(this + 20);
  if ( v5 != 0 )
    v6 = (__int16 *)(v5 + 2 * ((a3 << 8) | a2 | (16 * a4)));
  else
    v6 = &Section::m_EmptyBlock;
  if ( *v6 != 0 )
  {
    v7 = *(int (**)(void))(*(_DWORD *)BlockMaterialMgr::getMaterial(
                                        (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                        *v6 & 0xFFF)
                         + 20);
    return v7();
  }
  return this;
}


//======================================================================
// ClientSection::createRawMesh(void)
// address: 0x002CBE60   size: 0xA2 (162 bytes)
//======================================================================
_DWORD *__fastcall ClientSection::createRawMesh(ClientSection *this)
{
  _DWORD *result; // r0
  SectionMesh *v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r3
  int i; // r5
  int j; // r7
  int v10; // r1
  int v11[4]; // [sp+4h] [bp-10h] BYREF

  *((_BYTE *)this + 40) = 0;
  result = *((_DWORD **)this + 14);
  if ( result != nullptr )
  {
    result = Ogre::BaseObject::release(result);
    *((_DWORD *)this + 14) = 0;
  }
  if ( *((_WORD *)this + 17) != 0 )
  {
    v3 = (SectionMesh *)operator new(0x114u);
    SectionMesh::SectionMesh(v3, true);
    v4 = 1000 * *((_DWORD *)this + 3);
    v5 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 14) = v3;
    v6 = 0;
    v7 = 1000 * *((_DWORD *)this + 2);
    v11[1] = v4;
    v11[0] = v7;
    v11[2] = 1000 * v5;
    Ogre::MovableObject::setPosition((int *)v3, v11);
    do
    {
      for ( i = 0; i != 16; ++i )
      {
        for ( j = 0; j != 16; ++j )
        {
          v10 = j;
          ClientSection::createOneBlockMesh((int)this, v10, i, v6);
        }
      }
      ++v6;
    }
    while ( v6 != 16 );
    result = (_DWORD *)SectionMesh::isEmpty(*((SectionMesh **)this + 14));
    if ( result != nullptr )
    {
      result = *((_DWORD **)this + 14);
      if ( result != nullptr )
        result = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*result + 20))(result);
      *((_DWORD *)this + 14) = 0;
    }
  }
  return result;
}


//======================================================================
// ClientSection::createMesh(void)
// address: 0x002CBF02   size: 0xBE (190 bytes)
//======================================================================
SectionMesh *__fastcall ClientSection::createMesh(ClientSection *this)
{
  SectionMesh *result; // r0
  SectionMesh *v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r6
  int v7; // r3
  int i; // r5
  int j; // r7
  int v10; // r1
  int isEmpty; // r3
  int v12[4]; // [sp+4h] [bp-10h] BYREF

  *((_BYTE *)this + 40) = 0;
  result = *((SectionMesh **)this + 14);
  if ( result != nullptr )
  {
    result = (SectionMesh *)Ogre::BaseObject::release(result);
    *((_DWORD *)this + 14) = 0;
  }
  if ( *((_WORD *)this + 17) != 0 )
  {
    v3 = (SectionMesh *)operator new(0x114u);
    SectionMesh::SectionMesh(v3, false);
    v4 = 1000 * *((_DWORD *)this + 3);
    v5 = *((_DWORD *)this + 4);
    *((_DWORD *)this + 14) = v3;
    v6 = 0;
    v7 = 1000 * *((_DWORD *)this + 2);
    v12[1] = v4;
    v12[0] = v7;
    v12[2] = 1000 * v5;
    Ogre::MovableObject::setPosition((int *)v3, v12);
    do
    {
      for ( i = 0; i != 16; ++i )
      {
        for ( j = 0; j != 16; ++j )
        {
          v10 = j;
          ClientSection::createOneBlockMesh((int)this, v10, i, v6);
        }
      }
      ++v6;
    }
    while ( v6 != 16 );
    isEmpty = SectionMesh::isEmpty(*((SectionMesh **)this + 14));
    result = *((SectionMesh **)this + 14);
    if ( isEmpty != 0 )
    {
      if ( result != nullptr )
        result = (SectionMesh *)(*(int (__fastcall **)(SectionMesh *))(*(_DWORD *)result + 20))(result);
      *((_DWORD *)this + 14) = 0;
    }
    else
    {
      SectionMesh::onCreate(result);
      (*(void (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 14) + 88))(*((_DWORD *)this + 14), 3);
      return (SectionMesh *)(*(int (__fastcall **)(_DWORD, int))(**((_DWORD **)this + 14) + 88))(
                              *((_DWORD *)this + 14),
                              2);
    }
  }
  return result;
}


//======================================================================
// ClientSection::createOneBlockMinimapMesh(unsigned int *,int,int,int,SectionSubMesh *,BlockGeomTemplate *)
// address: 0x002CBFC0   size: 0xDA (218 bytes)
//======================================================================
int __fastcall ClientSection::createOneBlockMinimapMesh(
        int this,
        unsigned int *a2,
        int a3,
        int a4,
        int a5,
        SectionSubMesh *a6,
        BlockGeomTemplate *a7)
{
  unsigned int v8; // r3
  int *v9; // r4
  unsigned int i; // r5
  unsigned int v11; // r2
  unsigned int v12; // r3
  float *v13; // r6
  unsigned int v16; // [sp+18h] [bp-5Ch]
  _DWORD *v17; // [sp+1Ch] [bp-58h]
  int v18; // [sp+24h] [bp-50h] BYREF
  _DWORD v19[3]; // [sp+28h] [bp-4Ch] BYREF
  int v20[3]; // [sp+34h] [bp-40h] BYREF
  _DWORD v21[4]; // [sp+40h] [bp-34h] BYREF
  float v22[9]; // [sp+50h] [bp-24h] BYREF

  v8 = a2[100 * a4 + 111 + 10 * a5 + a3];
  v17 = (_DWORD *)this;
  if ( (v8 & 0xFFFFFF) != 0 )
  {
    v19[0] = 2 * a3;
    v20[0] = 2 * a3;
    v9 = g_DirectionCoord;
    v19[1] = 2 * a4;
    this = 2 * a4 + 1;
    v18 = v8 & 0xFFFFFF;
    v19[2] = 2 * a5;
    v20[1] = this;
    v20[2] = 2 * a5;
    v16 = HIBYTE(v8);
    for ( i = 0; i != 6; ++i )
    {
      if ( i != 4 )
      {
        v11 = a3 + *v9;
        v12 = a5 + v9[2];
        this = 100 * (a4 + v9[1] + 1);
        if ( a2[10 * v12 + 11 + this + v11] << 8 == 0 )
        {
          if ( v16 != 0 )
          {
            v13 = (float *)&unk_468BB8;
          }
          else if ( v11 > 7 || v12 > 7 )
          {
            v13 = (float *)&unk_468BD8;
          }
          else
          {
            v13 = v22;
            ClientSection::getFaceVertexLight(v17, v20, i, v22);
          }
          BlockGeomTemplate::getFaceVerts((int)a7, v21, i);
          this = SectionSubMesh::addGeomFaceLight(a6, v21, v19, v13, &v18);
        }
      }
      v9 += 3;
    }
  }
  return this;
}


//======================================================================
// ClientSection::createMinimapMesh(void)
// address: 0x002CC0AC   size: 0x22E (558 bytes)
//======================================================================
SectionMesh *__fastcall ClientSection::createMinimapMesh(ClientSection *this)
{
  _DWORD *v2; // r0
  SectionMesh *v3; // r6
  int v4; // r0
  int v5; // r2
  int v6; // r0
  int v7; // r2
  int v8; // r3
  Ogre::Material *v9; // r6
  void *v10; // r1
  int v11; // r2
  void *v12; // r1
  BlockMaterialMgr *v13; // r6
  int v14; // r2
  void *v15; // r1
  int v16; // r0
  int j; // r7
  int v18; // r1
  unsigned int v19; // r3
  int v20; // r6
  BiomeGenBase *BiomeGen; // r0
  int GrassColor; // r0
  int m; // r6
  int n; // r5
  int ii; // r7
  int v26; // r2
  int isEmpty; // r3
  SectionMesh *result; // r0
  int k; // [sp+14h] [bp-FE0h]
  int i; // [sp+18h] [bp-FDCh]
  unsigned int *v31; // [sp+1Ch] [bp-FD8h]
  int BlockDef; // [sp+20h] [bp-FD4h]
  int v33; // [sp+24h] [bp-FD0h]
  SectionSubMesh *SubMesh; // [sp+2Ch] [bp-FC8h]
  BlockGeomTemplate *GeomTemplate; // [sp+30h] [bp-FC4h]
  _DWORD v36[3]; // [sp+44h] [bp-FB0h] BYREF
  unsigned int v37[1001]; // [sp+50h] [bp-FA4h] BYREF

  v2 = *((_DWORD **)this + 15);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 15) = 0;
  }
  v3 = (SectionMesh *)operator new(0x114u);
  SectionMesh::SectionMesh(v3, false);
  v4 = *((_DWORD *)this + 4);
  v37[1] = 1000 * *((_DWORD *)this + 3);
  v5 = 1000 * v4;
  v6 = *((_DWORD *)this + 2);
  *((_DWORD *)this + 15) = v3;
  v37[0] = 1000 * v6;
  v37[2] = v5;
  Ogre::MovableObject::setPosition((int *)v3, (int *)v37);
  v37[0] = (unsigned int)Ogre::FixedString::insert((Ogre::FixedString *)"blockitem", (const char *)0xFFFFFFFF, v7, v8);
  v9 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v9, (const Ogre::FixedString *)v37);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v37, v10);
  v36[0] = 1065353216;
  v36[1] = 1065353216;
  v36[2] = 1065353216;
  v37[0] = (unsigned int)Ogre::FixedString::insert(
                           (Ogre::FixedString *)"GrassColor",
                           (const char *)0xFFFFFFFF,
                           v11,
                           1065353216);
  Ogre::Material::setParamValue(v9, (const Ogre::FixedString *)v37, v36);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v37, v12);
  SubMesh = (SectionSubMesh *)SectionMesh::getSubMesh(*((SectionMesh **)this + 15), v9);
  Ogre::BaseObject::release(v9);
  v13 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  v37[0] = (unsigned int)Ogre::FixedString::insert(
                           (Ogre::FixedString *)"cube2",
                           (const char *)0xFFFFFFFF,
                           v14,
                           (int)&Ogre::Singleton<BlockMaterialMgr>::ms_Singleton);
  GeomTemplate = (BlockGeomTemplate *)BlockMaterialMgr::getGeomTemplate(v13, (const Ogre::FixedString *)v37);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v37, v15);
  v16 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 1) + 1432) + 124);
  v33 = (*(int (__fastcall **)(int))(*(_DWORD *)v16 + 32))(v16);
  j_memset(v37, 0, 0xFA0u);
  for ( i = 0; i != 16; i += 2 )
  {
    for ( j = 0; j != 16; j += 2 )
    {
      v31 = &v37[100 * (i >> 1) + 111 + 10 * (j >> 1)];
      for ( k = 0; k != 16; k += 2 )
      {
        v18 = *((_DWORD *)this + 5);
        if ( v18 != 0 )
          v18 = *(_WORD *)(2 * (k | ((i + 1) << 8) | (16 * j)) + v18) & 0xFFF;
        BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v18);
        v19 = *(_DWORD *)(BlockDef + 112)
            & -((v33 >> 31)
              + (v33 >= (unsigned int)(i + 1 + *((_DWORD *)this + 3)))
              + ((unsigned int)(i + 1 + *((_DWORD *)this + 3)) >> 31));
        v20 = BYTE2(v19);
        if ( (unsigned int)BYTE2(v19) - 1 <= 1 )
        {
          BiomeGen = (BiomeGenBase *)Chunk::getBiomeGen(*((Chunk **)this + 1), k, j);
          if ( v20 == 1 )
            GrassColor = BiomeGenBase::getGrassColor(BiomeGen);
          else
            GrassColor = BiomeGenBase::getLeafColor(BiomeGen);
          v19 = (BYTE2(GrassColor) << 16)
              | (BYTE1(GrassColor) << 8)
              | (unsigned __int8)GrassColor
              | (HIBYTE(GrassColor) << 24);
        }
        *v31 = v19;
        if ( *(int *)(BlockDef + 68) > 0 )
          *v31 = v19 | 0x1000000;
        ++v31;
      }
    }
  }
  for ( m = 0; m != 8; ++m )
  {
    for ( n = 0; n != 8; ++n )
    {
      for ( ii = 0; ii != 8; ++ii )
      {
        v26 = ii;
        ClientSection::createOneBlockMinimapMesh((int)this, v37, v26, m, n, SubMesh, GeomTemplate);
      }
    }
  }
  isEmpty = SectionMesh::isEmpty(*((SectionMesh **)this + 15));
  result = *((SectionMesh **)this + 15);
  if ( isEmpty != 0 )
  {
    if ( result != nullptr )
      result = (SectionMesh *)(*(int (__fastcall **)(SectionMesh *))(*(_DWORD *)result + 20))(result);
    *((_DWORD *)this + 15) = 0;
  }
  else
  {
    result = (SectionMesh *)SectionMesh::onCreate(result);
  }
  *((_BYTE *)this + 41) = 0;
  return result;
}

