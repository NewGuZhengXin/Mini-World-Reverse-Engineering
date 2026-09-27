// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::GameTerrainScene

//======================================================================
// Ogre::GameTerrainScene::getRTTI(void)const
// address: 0x0019D3D4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::GameTerrainScene::getRTTI(Ogre::GameTerrainScene *this)
{
  return &Ogre::GameTerrainScene::m_RTTI;
}


//======================================================================
// Ogre::GameTerrainScene::onRender(Ogre::SceneRenderer *)
// address: 0x0019D3F4   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::onRender(Ogre::GameTerrainScene *this, Ogre::SceneRenderer *a2)
{
  ;
}


//======================================================================
// Ogre::GameTerrainScene::getTerrainTile(void)
// address: 0x0019D3F6   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::getTerrainTile(Ogre::GameTerrainScene *this)
{
  return **((_DWORD **)this + 32);
}


//======================================================================
// Ogre::GameTerrainScene::onCull(Ogre::Camera *,Ogre::RenderUsage)
// address: 0x0019D3FE   size: 0x2A (42 bytes)
//======================================================================
char *__fastcall Ogre::GameTerrainScene::onCull(int a1, Ogre::Camera *a2)
{
  int v3; // r6
  Ogre::CullResult **v4; // r5

  v3 = **(_DWORD **)(a1 + 128);
  v4 = (Ogre::CullResult **)((char *)a2 + 212);
  (*(void (__fastcall **)(Ogre::Camera *, _DWORD))(*(_DWORD *)a2 + 40))(a2, 0);
  Ogre::CullResult::startCull(*v4, a2);
  return Ogre::LooseOctree::cull(*(char **)(v3 + 32), *v4);
}


//======================================================================
// Ogre::GameTerrainScene::pickObject(Ogre::IntersectType,Ogre::WorldRay const&,float *,unsigned int)
// address: 0x0019D428   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::pickObject(int a1, int a2, Ogre::WorldRay *a3, _DWORD *a4, int a5)
{
  int result; // r0
  _DWORD *v7; // [sp+Ch] [bp-4h] BYREF

  v7 = a4;
  result = Ogre::LooseOctree::pickObject(*(_DWORD *)(**(_DWORD **)(a1 + 128) + 32), a2, a3, (float *)&v7, a5);
  if ( result != 0 && a4 != nullptr )
    *a4 = v7;
  return result;
}


//======================================================================
// Ogre::GameTerrainScene::~GameTerrainScene()
// address: 0x0019D850   size: 0xD8 (216 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16GameTerrainSceneD1Ev'
void __fastcall Ogre::GameTerrainScene::~GameTerrainScene(Ogre::GameTerrainScene *this)
{
  unsigned int v2; // r5
  int v3; // r3
  void *v4; // r6
  int i; // r5
  int v6; // r3
  _DWORD *v7; // r0
  void *v8; // r0
  void *v9; // r0
  int v10; // r6
  int j; // r5
  void *v12; // r0
  void *v13; // r0
  int v14; // r6
  int k; // r5
  void *v16; // r0
  void *v17; // r0

  v2 = 0;
  *(_DWORD *)this = &off_458B48;
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 32);
    if ( v2 >= (*((_DWORD *)this + 33) - v3) >> 2 )
      break;
    v4 = *(void **)(4 * v2 + v3);
    if ( v4 != nullptr )
    {
      Ogre::TerrainTile::~TerrainTile(*(Ogre::TerrainTile **)(4 * v2 + v3));
      operator delete(v4);
    }
    ++v2;
  }
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 27);
    if ( i >= -1431655765 * ((*((_DWORD *)this + 28) - v6) >> 2) )
      break;
    v7 = *(_DWORD **)(v6 + 12 * i + 8);
    if ( v7 != nullptr )
      Ogre::BaseObject::release(v7);
  }
  *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 96) = 0;
  Ogre::FixedString::~FixedString((Ogre::FixedString **)this + 36, (void *)0xAAAAAAAB);
  v8 = *((void **)this + 32);
  if ( v8 != nullptr )
    operator delete(v8);
  v9 = *((void **)this + 27);
  if ( v9 != nullptr )
    operator delete(v9);
  v10 = *((_DWORD *)this + 25);
  for ( j = *((_DWORD *)this + 24); j != v10; j += 32 )
  {
    v12 = *(void **)(j + 20);
    if ( v12 != nullptr )
      operator delete(v12);
    sub_3BDF80(j);
  }
  v13 = *((void **)this + 24);
  if ( v13 != nullptr )
    operator delete(v13);
  v14 = *((_DWORD *)this + 22);
  for ( k = *((_DWORD *)this + 21); k != v14; k += 24 )
  {
    v16 = *(void **)(k + 12);
    if ( v16 != nullptr )
      operator delete(v16);
  }
  v17 = *((void **)this + 21);
  if ( v17 != nullptr )
    operator delete(v17);
  Ogre::GameScene::~GameScene(this);
}


//======================================================================
// Ogre::GameTerrainScene::~GameTerrainScene()
// address: 0x0019D934   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::~GameTerrainScene(Ogre::GameTerrainScene *this)
{
  Ogre::GameTerrainScene::~GameTerrainScene(this);
  operator delete(this);
}


//======================================================================
// Ogre::GameTerrainScene::GameTerrainScene(void)
// address: 0x0019DB60   size: 0x4C (76 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16GameTerrainSceneC1Ev'
Ogre::GameTerrainScene *__fastcall Ogre::GameTerrainScene::GameTerrainScene(Ogre::GameTerrainScene *this)
{
  Ogre::GameScene::GameScene(this);
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 19) = -1;
  *(_DWORD *)this = &off_458B48;
  *((_DWORD *)this + 15) = 100;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 100;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 37) = 0;
  return this;
}


//======================================================================
// Ogre::GameTerrainScene::newObject(void)
// address: 0x0019DBB0   size: 0x12 (18 bytes)
//======================================================================
Ogre::GameTerrainScene *__fastcall Ogre::GameTerrainScene::newObject(Ogre::GameTerrainScene *this)
{
  Ogre::GameTerrainScene *v1; // r4

  v1 = (Ogre::GameTerrainScene *)operator new(0x98u);
  Ogre::GameTerrainScene::GameTerrainScene(v1);
  return v1;
}


//======================================================================
// Ogre::GameTerrainScene::processEdgeLight(void)
// address: 0x0019DBC4   size: 0x2AE (686 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::processEdgeLight(int this)
{
  unsigned int v1; // r4
  int v2; // r3
  signed int i; // r1
  Ogre::TerrainTile *v4; // r5
  int Block; // r6
  int v6; // r0
  unsigned int *v7; // r7
  Ogre::TerrainTile *v8; // r4
  int v9; // r5
  int v10; // r0
  float v11; // r1
  int v12; // r4
  int v13; // r0
  int n; // r3
  unsigned int *v15; // r7
  unsigned int *v16; // r6
  unsigned int v17; // r2
  signed int v18; // [sp+4h] [bp-40h]
  signed int k; // [sp+4h] [bp-40h]
  unsigned int v20; // [sp+8h] [bp-3Ch]
  signed int m; // [sp+8h] [bp-3Ch]
  unsigned int v22; // [sp+Ch] [bp-38h]
  int v23; // [sp+10h] [bp-34h]
  int v24; // [sp+10h] [bp-34h]
  int j; // [sp+14h] [bp-30h]
  int v26; // [sp+18h] [bp-2Ch]
  int v27; // [sp+18h] [bp-2Ch]
  Ogre::VertexData *v28; // [sp+1Ch] [bp-28h]
  Ogre::VertexData *v29; // [sp+1Ch] [bp-28h]
  Ogre::VertexData *v30; // [sp+20h] [bp-24h]
  Ogre::VertexData *v31; // [sp+20h] [bp-24h]
  int v32; // [sp+28h] [bp-1Ch]
  int v33; // [sp+2Ch] [bp-18h]
  signed int v34; // [sp+30h] [bp-14h]
  signed int v35; // [sp+34h] [bp-10h]
  int v36; // [sp+3Ch] [bp-8h]

  v2 = **(_DWORD **)(this + 128);
  v32 = this;
  v18 = 0;
  v34 = *(_DWORD *)(v2 + 24);
  v35 = *(_DWORD *)(v2 + 28);
  while ( v18 < v34 - 1 )
  {
    for ( i = 0; ; i = v20 + 1 )
    {
      v20 = i;
      if ( i >= v35 )
        break;
      v4 = **(Ogre::TerrainTile ***)(v32 + 128);
      Block = Ogre::TerrainTile::getBlock(v4, v18, i);
      v6 = Ogre::TerrainTile::getBlock(v4, v18 + 1, v20);
      v28 = *(Ogre::VertexData **)(*(_DWORD *)(Block + 12) + 268);
      v30 = *(Ogre::VertexData **)(*(_DWORD *)(v6 + 12) + 268);
      v26 = (int)Ogre::Sqrt(
                   COERCE_OGRE_((float)*(int *)(*(_DWORD *)(*(_DWORD *)(Block + 12) + 252) + 40)),
                   *(float *)&v28);
      v33 = Ogre::VertexData::lock(v28);
      v36 = Ogre::VertexData::lock(v30) - 40 * v26;
      v23 = 0;
      for ( j = 1; ; ++j )
      {
        v23 += 40 * v26;
        if ( j > v26 )
          break;
        v7 = (unsigned int *)(v33 + v23 - 8);
        v1 = v1 & 0xFF000000
           | ((unsigned __int8)(unsigned int)(float)((float)(int)((*v7 << 8 >> 24)
                                                                + (*(_DWORD *)(v36 + v23 + 32) << 8 >> 24))
                                                   * 0.5) << 16)
           | ((unsigned __int8)(unsigned int)(float)((float)(BYTE1(*v7) + BYTE1(*(_DWORD *)(v36 + v23 + 32))) * 0.5) << 8)
           | (unsigned __int8)(unsigned int)(float)((float)((unsigned __int8)*v7
                                                          + (unsigned __int8)*(_DWORD *)(v36 + v23 + 32))
                                                  * 0.5)
           | 0xFF000000;
        *v7 = v1;
        *(_DWORD *)(v36 + v23 + 32) = v1;
      }
      Ogre::VertexData::unlock((int)v28);
      this = Ogre::VertexData::unlock((int)v30);
    }
    ++v18;
  }
  for ( k = 0; k < v35 - 1; ++k )
  {
    for ( m = 0; m < v34; ++m )
    {
      v8 = **(Ogre::TerrainTile ***)(v32 + 128);
      v9 = Ogre::TerrainTile::getBlock(v8, m, k);
      v10 = Ogre::TerrainTile::getBlock(v8, m, k + 1);
      v29 = *(Ogre::VertexData **)(*(_DWORD *)(v9 + 12) + 268);
      v31 = *(Ogre::VertexData **)(*(_DWORD *)(v10 + 12) + 268);
      v27 = (int)Ogre::Sqrt(COERCE_OGRE_((float)*(int *)(*(_DWORD *)(*(_DWORD *)(v9 + 12) + 252) + 40)), v11);
      v12 = Ogre::VertexData::lock(v29);
      v13 = Ogre::VertexData::lock(v31);
      v24 = 0;
      for ( n = 1; ; ++n )
      {
        v24 += 40;
        if ( n > v27 )
          break;
        v15 = (unsigned int *)(v12 + 40 * (v27 - 1) * v27 + v24 - 8);
        v16 = (unsigned int *)(v13 + v24 - 8);
        v17 = v22 & 0xFF000000
            | ((unsigned __int8)(unsigned int)(float)((float)(int)((*v15 << 8 >> 24) + (*v16 << 8 >> 24)) * 0.5) << 16)
            | ((unsigned __int8)(unsigned int)(float)((float)(BYTE1(*v15) + BYTE1(*v16)) * 0.5) << 8)
            | (unsigned __int8)(unsigned int)(float)((float)((unsigned __int8)*v15 + (unsigned __int8)*v16) * 0.5)
            | 0xFF000000;
        *v15 = v17;
        v22 = v17;
        *v16 = v17;
      }
      Ogre::VertexData::unlock((int)v29);
      this = Ogre::VertexData::unlock((int)v31);
    }
  }
  return this;
}


//======================================================================
// Ogre::GameTerrainScene::buildPhysicsScene2(void)
// address: 0x0019DE7C   size: 0x2E (46 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::buildPhysicsScene2(Ogre::GameTerrainScene *this)
{
  int i; // r4
  int v3; // r3

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 32);
    if ( i >= (*((_DWORD *)this + 33) - v3) >> 2 )
      break;
    Ogre::TerrainTile::buildPhysicsScene2(*(Ogre::BaseObject ***)(4 * i + v3), *((Ogre::PhysicsScene2 **)this + 10));
  }
  Ogre::PhysicsScene2::calAABBTree(*((Ogre::PhysicsScene2 **)this + 10));
}


//======================================================================
// Ogre::GameTerrainScene::loadPhysicsScene2(void)
// address: 0x0019DEAA   size: 0x20 (32 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::loadPhysicsScene2(Ogre::GameTerrainScene *this)
{
  if ( Ogre::PhysicsScene2::loadData(*((Ogre::PhysicsScene2 **)this + 10), (char **)this + 36) == -1 )
  {
    Ogre::PhysicsScene2::reset(*((Ogre::PhysicsScene2 **)this + 10));
    Ogre::GameTerrainScene::buildPhysicsScene2(this);
  }
}


//======================================================================
// Ogre::GameTerrainScene::savePhysicsScene2(void)
// address: 0x0019DECA   size: 0x14 (20 bytes)
//======================================================================
char **__fastcall Ogre::GameTerrainScene::savePhysicsScene2(char **this)
{
  char **v1; // r1

  if ( *(this + 10) != nullptr )
  {
    v1 = this + 36;
    this = (char **)*(this + 10);
    Ogre::PhysicsScene2::saveData((Ogre::PhysicsScene2 *)this, v1);
  }
  return this;
}


//======================================================================
// Ogre::GameTerrainScene::caculateShadowCamera2(Ogre::Camera *,Ogre::Camera *)
// address: 0x0019DEE0   size: 0x28E (654 bytes)
//======================================================================
void *__fastcall Ogre::GameTerrainScene::caculateShadowCamera2(
        Ogre::GameTerrainScene *this,
        Ogre::Camera *a2,
        Ogre::Camera *a3)
{
  unsigned int i; // r6
  int v6; // r3
  int v7; // r5
  int v8; // r1
  float v9; // r2
  float v10; // r3
  char *v11; // r3
  int v12; // r2
  float v13; // r0
  int v14; // r6
  char *ViewMatrix; // r0
  char *ProjectMatrix; // r0
  int v17; // r5
  float v18; // r1
  float v19; // r2
  float v20; // r3
  int j; // r4
  int v23; // r2
  float v24; // r3
  float v25; // r0
  float v26; // r5
  _BYTE v27[4]; // [sp+0h] [bp-104h] BYREF
  float *v28; // [sp+4h] [bp-100h]
  int v29; // [sp+8h] [bp-FCh]
  _DWORD *v30; // [sp+Ch] [bp-F8h]
  float *v31; // [sp+10h] [bp-F4h]
  _DWORD *v32; // [sp+14h] [bp-F0h]
  float v33; // [sp+18h] [bp-ECh]
  float v34; // [sp+1Ch] [bp-E8h]
  float v35; // [sp+20h] [bp-E4h]
  float *v36; // [sp+24h] [bp-E0h]
  float v37; // [sp+28h] [bp-DCh] BYREF
  float v38; // [sp+2Ch] [bp-D8h]
  float v39; // [sp+30h] [bp-D4h]
  _DWORD v40[3]; // [sp+34h] [bp-D0h] BYREF
  _BYTE v41[64]; // [sp+40h] [bp-C4h] BYREF
  float v42[16]; // [sp+80h] [bp-84h] BYREF
  float v43[17]; // [sp+C0h] [bp-44h] BYREF

  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 2);
    if ( i >= (*((_DWORD *)this + 3) - v6) >> 2 )
    {
      v8 = 0;
LABEL_7:
      v31 = (float *)v8;
      goto LABEL_8;
    }
    v7 = *(_DWORD *)(4 * i + v6);
    v28 = (float *)&Ogre::Light::m_RTTI;
    if ( Ogre::BaseObject::isKindOf((Ogre::BaseObject *)v7, (const Ogre::RuntimeClass *)&Ogre::Light::m_RTTI) != nullptr
      && *(_BYTE *)(v7 + 216) != 0 )
    {
      break;
    }
  }
  if ( *(_DWORD *)(v7 + 212) != 2 )
  {
    v23 = Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton;
    *(_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 72) = 0;
    *(_DWORD *)(v23 + 80) = 0;
    *(_DWORD *)(v23 + 76) = -1082130432;
    if ( *(_BYTE *)(v7 + 180) != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 68))(v7);
    v24 = *(float *)(v7 + 96);
    v25 = *(float *)(v7 + 100);
    v26 = *(float *)(v7 + 104);
    v33 = v24;
    v35 = v25;
    v34 = v26;
    v8 = 1;
    goto LABEL_7;
  }
  v43[1] = 0.0;
  v43[0] = 0.0;
  v43[2] = 1.0;
  Ogre::Quaternion::rotate((float *)(v7 + 20), (float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 72), v43);
  v31 = nullptr;
LABEL_8:
  v28 = &v37;
  v40[0] = 0;
  v40[1] = 0;
  v9 = *(float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 76);
  v10 = *(float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 80);
  v37 = *(float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 72);
  v38 = v9;
  v39 = v10;
  v30 = v40;
  v40[2] = 1065353216;
  Ogre::Normalize(&v37);
  v32 = (_DWORD *)((char *)a3 + 240);
  if ( v31 != nullptr )
  {
    *((_DWORD *)a3 + 60) = 1123024896;
    v42[0] = v33 + 0.0;
    v42[1] = v35 + 500.0;
    v42[2] = v34 + 0.0;
    Ogre::WorldPos::WorldPos(v43, (const Ogre::Vector3 *)v42);
    Ogre::Camera::setLookDirect(
      a3,
      (const Ogre::WorldPos *)v43,
      (const Ogre::Vector3 *)&v37,
      (const Ogre::Vector3 *)v40);
    v11 = (char *)a3 + 252;
    *((_DWORD *)a3 + 63) = 1092616192;
    v12 = 1167867904;
  }
  else
  {
    if ( *(_BYTE *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 74) != 0 )
      v13 = *(float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 92) * 5000.0;
    else
      v13 = *(float *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 92) * 750.0;
    *v32 = 0;
    *((float *)a3 + 61) = v13;
    v29 = *((_DWORD *)this + 12) - (int)(float)((float)(v38 * 10000.0) * 10.0);
    v14 = *((_DWORD *)this + 13) - (int)(float)((float)(v39 * 10000.0) * 10.0);
    LODWORD(v43[0]) = *((_DWORD *)this + 11) - (int)(float)((float)(v37 * 10000.0) * 10.0);
    LODWORD(v43[2]) = v14;
    LODWORD(v43[1]) = v29;
    Ogre::Camera::setLookDirect(
      a3,
      (const Ogre::WorldPos *)v43,
      (const Ogre::Vector3 *)&v37,
      (const Ogre::Vector3 *)v40);
    v12 = 1184645120;
    v11 = (char *)a3 + 252;
    *((_DWORD *)a3 + 63) = 1167867904;
  }
  *((_DWORD *)v11 + 1) = v12;
  Ogre::Camera::setRatio(a3, 1.0);
  (*(void (__fastcall **)(Ogre::Camera *, _DWORD))(*(_DWORD *)a3 + 40))(a3, 0);
  ViewMatrix = Ogre::Camera::getViewMatrix(a3);
  Ogre::Matrix4::Matrix4((int)v41, (const Ogre::Matrix4 *)ViewMatrix);
  ProjectMatrix = Ogre::Camera::getProjectMatrix(a3);
  Ogre::Matrix4::Matrix4((int)v42, (const Ogre::Matrix4 *)ProjectMatrix);
  v30 = (_DWORD *)(Ogre::Singleton<Ogre::Shadowmap>::ms_Singleton + 4);
  v17 = 0;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v43);
  v28 = (float *)v41;
  v31 = v43;
  do
  {
    v18 = *(float *)&v41[v17 * 4 + 4];
    v32 = *(_DWORD **)&v27[v17 * 4 + 64];
    v19 = *(float *)&v41[v17 * 4 + 8];
    v20 = *(float *)&v41[v17 * 4 + 12];
    v33 = v18;
    v34 = v19;
    v35 = v20;
    for ( j = 0; j != 4; ++j )
    {
      v36 = &v43[v17];
      v43[v17 + j] = (float)((float)((float)(*(float *)&v32 * *(float *)&v27[j * 4 + 128]) + (float)(v33 * v42[j + 4]))
                           + (float)(v34 * v42[j + 8]))
                   + (float)(v35 * v42[j + 12]);
    }
    v17 += 4;
  }
  while ( v17 != 16 );
  return Ogre::Matrix4::operator=(v30, v43);
}


//======================================================================
// Ogre::GameTerrainScene::caculateShadowCamera(Ogre::Camera *,Ogre::Camera *)
// address: 0x0019E1A0   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::GameTerrainScene::caculateShadowCamera(
        Ogre::GameTerrainScene *this,
        Ogre::Camera *a2,
        Ogre::Camera *a3)
{
  return Ogre::GameTerrainScene::caculateShadowCamera2(this, a2, a3);
}


//======================================================================
// Ogre::GameTerrainScene::getPlantResName(Ogre::TerrainTileSource *,unsigned int)
// address: 0x0019E1A8   size: 0x66 (102 bytes)
//======================================================================
Ogre::GameTerrainScene *__fastcall Ogre::GameTerrainScene::getPlantResName(
        Ogre::GameTerrainScene *this,
        Ogre::TerrainTileSource *a2,
        unsigned int a3,
        unsigned int a4)
{
  unsigned int v5; // r7
  char *v6; // r0
  unsigned int v8; // [sp+4h] [bp-110h]
  char v9[256]; // [sp+Ch] [bp-108h] BYREF

  v8 = a4 % *(unsigned __int8 *)(a3 + 18);
  v5 = a4 / *(unsigned __int8 *)(a3 + 19);
  j_strncpy(v9, *(const char **)(a3 + 8), 0x100u);
  v6 = j_strrchr(v9, 46);
  j_sprintf(v6, "_%d_%d.plant", v8, v5);
  sub_3BF0BC((int)this, v9);
  return this;
}


//======================================================================
// Ogre::GameTerrainScene::updateGrassDisturb(Ogre::WorldPos,unsigned int)
// address: 0x0019E27E   size: 0x3C (60 bytes)
//======================================================================
unsigned int __fastcall Ogre::GameTerrainScene::updateGrassDisturb(
        unsigned int result,
        int a2,
        int a3,
        int a4,
        unsigned int a5)
{
  unsigned int v5; // r6
  unsigned int i; // r5
  int v7; // r3
  int v8; // r0

  v5 = result;
  for ( i = 0; ; ++i )
  {
    v7 = *(_DWORD *)(v5 + 128);
    if ( i >= (*(_DWORD *)(v5 + 132) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(4 * i + v7);
    result = Ogre::TerrainTile::updateGrassDisturb(v8, a2, a3, a4, a5);
  }
  return result;
}


//======================================================================
// Ogre::GameTerrainScene::buildDecalMesh(Ogre::BoxSphereBound const&,Ogre::Vector3 *,unsigned short *,int,int,int &,int &)
// address: 0x0019E2BA   size: 0x13E (318 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::buildDecalMesh(
        Ogre::GameTerrainScene *this,
        const Ogre::BoxSphereBound *a2,
        Ogre::Vector3 *a3,
        unsigned __int16 *a4,
        int a5,
        int a6,
        int *a7,
        int *a8)
{
  Ogre::TerrainTile *v8; // r3
  float v9; // r0
  int v10; // r6
  int i; // r5
  int Block; // r0
  int v13; // r3
  int v14; // r5
  float v15; // [sp+10h] [bp-5Ch]
  Ogre::TerrainTile *v17; // [sp+18h] [bp-54h]
  unsigned int v21; // [sp+28h] [bp-44h] BYREF
  unsigned int v22; // [sp+2Ch] [bp-40h] BYREF
  int v23; // [sp+30h] [bp-3Ch] BYREF
  int v24; // [sp+34h] [bp-38h] BYREF
  int v25; // [sp+38h] [bp-34h] BYREF
  int v26; // [sp+3Ch] [bp-30h] BYREF
  float v27[3]; // [sp+40h] [bp-2Ch] BYREF
  float v28[8]; // [sp+4Ch] [bp-20h] BYREF

  v8 = **((Ogre::TerrainTile ***)this + 32);
  *a8 = 0;
  v17 = v8;
  *a7 = 0;
  v25 = 0;
  v26 = 0;
  Ogre::TerrainTile::getBlockRange(v8, (int *)&v21, (int *)&v22, &v23, &v24, a2);
  LOBYTE(v28[6]) = 0;
  Ogre::operator-(v27, (float *)a2, (float *)a2 + 3);
  qmemcpy(v28, v27, 12);
  v15 = *((float *)a2 + 1) + *((float *)a2 + 4);
  v9 = *(float *)a2 + *((float *)a2 + 3);
  v28[5] = *((float *)a2 + 2) + *((float *)a2 + 5);
  v10 = v22;
  v28[3] = v9;
  v28[4] = v15;
  LOBYTE(v28[6]) = 1;
  while ( v10 <= v24 )
  {
    for ( i = v21; i <= v23; ++i )
    {
      Block = Ogre::TerrainTile::getBlock(v17, i, v10);
      (*(void (__fastcall **)(_DWORD, float *, char *, unsigned __int16 *, int, int, int *, int *, char *))(**(_DWORD **)(Block + 12) + 84))(
        *(_DWORD *)(Block + 12),
        v28,
        (char *)a3 + 12 * *a7,
        &a4[3 * *a8],
        a5 + *a7,
        a6 - *a8,
        &v25,
        &v26,
        (char *)a3 + 12 * *a7);
      *a7 += v25;
      v13 = *a8 + v26;
      *a8 = v13;
      if ( v13 >= a6 )
        return;
    }
    ++v10;
  }
  Ogre::PhysicsScene2::buildDecalMesh(
    *((ozcollide::AABBTreePoly ***)this + 10),
    a2,
    (Ogre::Vector3 *)((char *)a3 + 12 * *a7),
    &a4[3 * *a8],
    a5 + *(_WORD *)a7,
    a6 - *a8,
    &v25,
    &v26);
  v14 = v26;
  *a7 += v25;
  *a8 += v14;
}


//======================================================================
// Ogre::GameTerrainScene::buildDecalMesh(Ogre::BoxSphereBound const&,std::vector<Ogre::Vector3,std::allocator<Ogre::Vector3>> &,float,int,Ogre::Vector3*,Ogre::Vector2 *,unsigned short *,int,int,int &,int &)
// address: 0x0019E3F8   size: 0x354 (852 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::buildDecalMesh(
        int a1,
        int a2,
        int *a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        _DWORD *a11,
        int *a12)
{
  int result; // r0
  int v14; // r4
  int v15; // r2
  int v16; // r5
  float v17; // r0
  float v18; // r0
  float v19; // r3
  int v20; // r4
  __int16 v21; // r2
  int j; // r12
  int v23; // r3
  int i; // [sp+10h] [bp-84h]
  int v25; // [sp+14h] [bp-80h]
  float *v26; // [sp+18h] [bp-7Ch]
  int v27; // [sp+18h] [bp-7Ch]
  float *v28; // [sp+1Ch] [bp-78h]
  float *v29; // [sp+24h] [bp-70h]
  __int16 v30; // [sp+24h] [bp-70h]
  __int16 v32; // [sp+30h] [bp-64h]
  float v33; // [sp+34h] [bp-60h]
  float *v34; // [sp+38h] [bp-5Ch]
  float *v35; // [sp+3Ch] [bp-58h]
  int v37; // [sp+5Ch] [bp-38h] BYREF
  float v38; // [sp+60h] [bp-34h] BYREF
  float v39; // [sp+64h] [bp-30h]
  float v40; // [sp+68h] [bp-2Ch]
  float v41; // [sp+6Ch] [bp-28h] BYREF
  float v42; // [sp+70h] [bp-24h]
  float v43; // [sp+74h] [bp-20h]
  float v44[3]; // [sp+78h] [bp-1Ch] BYREF
  float v45[4]; // [sp+84h] [bp-10h] BYREF

  result = a3[1];
  if ( result - *a3 > 23 )
  {
    v14 = 0;
    *a11 = 0;
    *a12 = 0;
    v38 = 0.0;
    v39 = 0.0;
    v40 = 0.0;
    v33 = a4 / (float)a5;
    v34 = (float *)(a6 + 12 * a9);
    v35 = (float *)(a7 + 8 * a9);
    while ( 1 )
    {
      v25 = v14;
      v15 = -1431655765 * ((a3[1] - *a3) >> 2);
      if ( v14 >= v15 )
        break;
      v16 = v14 + 1;
      if ( v14 + 1 >= v15 )
        v16 = v14;
      Ogre::operator-(v45, (float *)(*a3 + 12 * v16), (float *)(*a3 + 12 * v16 - 12));
      v38 = v45[2] - (float)(v45[1] * 0.0);
      v39 = (float)(v45[0] * 0.0) - (float)(v45[2] * 0.0);
      v40 = (float)(v45[1] * 0.0) - v45[0];
      Ogre::Normalize(&v38);
      v29 = v35;
      v26 = v34;
      for ( i = 0; a5 >= i; ++i )
      {
        v37 = 0;
        v28 = (float *)(*a3 + 12 * v25);
        v44[0] = (float)(a4 * v38) * 0.5;
        v44[2] = (float)(a4 * v40) * 0.5;
        v44[1] = (float)(a4 * v39) * 0.5;
        Ogre::operator-(v45, v28, v44);
        v41 = v45[0] + (float)((float)((float)i * v38) * v33);
        v42 = (float)((float)((float)i * v39) * v33) + v45[1];
        v43 = (float)((float)((float)i * v40) * v33) + v45[2];
        Ogre::WorldPos::WorldPos(v45, (const Ogre::Vector3 *)&v41);
        if ( (*(int (__fastcall **)(int, _DWORD, _DWORD, int *, _DWORD, _DWORD))(*(_DWORD *)a1 + 76))(
               a1,
               LODWORD(v45[0]),
               LODWORD(v45[2]),
               &v37,
               0,
               0) != 0 )
        {
          v17 = (double)v37 / 10.0;
          v42 = v17 + 5.0;
        }
        v18 = v42;
        v19 = v43;
        *v26 = v41;
        v26[1] = v18;
        v26[2] = v19;
        v20 = -1431655765 * ((a3[1] - *a3) >> 2);
        *v29 = (float)(unsigned int)(v20 - 1 - v25) / (float)((float)(unsigned int)v20 - 1.0);
        v29[1] = (float)i / (float)a5;
        ++*a11;
        v26 += 3;
        v29 += 2;
      }
      v34 += 3 * a5 + 3;
      v35 += 2 * a5 + 2;
      v14 = v25 + 1;
    }
    v21 = a5 + 1;
    v27 = 0;
    v30 = a9 - a5;
    while ( 1 )
    {
      result = *a3;
      if ( v27 >= -1431655765 * ((a3[1] - *a3) >> 2) - 1 )
        break;
      for ( j = 0; j < a5; ++j )
      {
        *(_WORD *)(6 * *a12 + a8) = j + a9 + ~(_WORD)a5 + v21;
        *(_WORD *)(a8 + 6 * *a12 + 2) = j + v21 + v30;
        v32 = j + a9 + v21;
        *(_WORD *)(a8 + 6 * *a12 + 4) = v32;
        result = *a12 + 1;
        *a12 = result;
        if ( result >= a10 )
          return result;
        *(_WORD *)(6 * result + a8) = j + v21 + v30;
        *(_WORD *)(a8 + 6 * *a12 + 2) = j + v21 + a9 + 1;
        result = (unsigned __int16)(j + a9 + v21);
        *(_WORD *)(a8 + 6 * *a12 + 4) = v32;
        v23 = *a12 + 1;
        *a12 = v23;
        if ( v23 >= a10 )
          return result;
      }
      ++v27;
      v21 += a5 + 1;
    }
  }
  return result;
}


//======================================================================
// Ogre::GameTerrainScene::onObjectPosChange(Ogre::MovableObject *)
// address: 0x0019E760   size: 0x120 (288 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::onObjectPosChange(int this, Ogre::MovableObject *a2)
{
  Ogre::GameTerrainScene *v2; // r5
  char *WorldBounds; // r0
  int WidthGridNum; // r0
  Ogre::MovableObject *v6; // r1
  int OwnerTree; // r0
  char *v8; // [sp+24h] [bp-20h]
  int *RoadPoints; // [sp+30h] [bp-14h]
  int Width; // [sp+34h] [bp-10h]
  int v11; // [sp+38h] [bp-Ch] BYREF
  int v12[2]; // [sp+3Ch] [bp-8h] BYREF

  v2 = (Ogre::GameTerrainScene *)this;
  if ( *((_DWORD *)a2 + 49) != 0 )
  {
    if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::DecalNode::m_RTTI) != nullptr
      && Ogre::DecalNode::shouldRebuild(a2) != 0 )
    {
      v11 = 0;
      v12[0] = 0;
      WorldBounds = Ogre::MovableObject::getWorldBounds(a2);
      Ogre::GameTerrainScene::buildDecalMesh(
        v2,
        (const Ogre::BoxSphereBound *)WorldBounds,
        (Ogre::Vector3 *)&unk_4C6F90,
        word_4EE860,
        0,
        4500,
        &v11,
        v12);
      Ogre::DecalNode::buildMesh(a2, (Ogre::Vector3 *)&unk_4C6F90, word_4EE860, v11, v12[0]);
    }
    if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::DirDecal::m_RTTI) != nullptr
      && Ogre::DirDecal::shouldRebuild(a2) != 0 )
    {
      v11 = 0;
      v12[0] = 0;
      v8 = Ogre::MovableObject::getWorldBounds(a2);
      RoadPoints = (int *)Ogre::DirDecal::getRoadPoints(a2);
      Width = Ogre::DirDecal::getWidth(a2);
      WidthGridNum = Ogre::DirDecal::getWidthGridNum(a2);
      Ogre::GameTerrainScene::buildDecalMesh(
        (int)v2,
        (int)v8,
        RoadPoints,
        *(float *)&Width,
        WidthGridNum,
        (int)&unk_4C6F90,
        (int)&unk_4F51D8,
        (int)word_4EE860,
        0,
        4500,
        &v11,
        v12);
      Ogre::DirDecal::buildMesh(
        a2,
        (Ogre::Vector3 *)&unk_4C6F90,
        (Ogre::Vector2 *)&unk_4F51D8,
        word_4EE860,
        v11,
        v12[0]);
    }
    if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::SmallDecal::m_RTTI) != nullptr )
      Ogre::SmallDecal::BuildDecal(*(float *)&a2, v2);
    OwnerTree = Ogre::LooseOctree::getOwnerTree(a2, v6);
    return Ogre::LooseOctree::updateObject(OwnerTree, a2);
  }
  return this;
}


//======================================================================
// Ogre::GameTerrainScene::getGroundHeight(float,float,float *,Ogre::Vector3 *,float *)
// address: 0x0019E8A4   size: 0x1E (30 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::getGroundHeight(int a1)
{
  int result; // r0

  result = **(_DWORD **)(a1 + 128);
  if ( result != 0 )
    return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(result + 4) + 40))(*(_DWORD *)(result + 4));
  return result;
}


//======================================================================
// Ogre::GameTerrainScene::pickGround(int,int,int *,Ogre::Vector3 *,float *)
// address: 0x0019E8C8   size: 0x102 (258 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::pickGround(
        Ogre::GameTerrainScene *this,
        int a2,
        int a3,
        int *a4,
        Ogre::Vector3 *a5,
        float *a6)
{
  ozcollide::AABBTreePoly **v10; // r0
  int v11; // r7
  int GroundHeight; // [sp+14h] [bp-68h]
  float v14; // [sp+24h] [bp-58h]
  float v15; // [sp+28h] [bp-54h] BYREF
  _DWORD v16[3]; // [sp+2Ch] [bp-50h] BYREF
  _DWORD v17[3]; // [sp+38h] [bp-44h] BYREF
  _DWORD v18[3]; // [sp+44h] [bp-38h] BYREF
  float v19; // [sp+50h] [bp-2Ch] BYREF
  float v20; // [sp+54h] [bp-28h]
  float v21; // [sp+58h] [bp-24h]
  float v22; // [sp+5Ch] [bp-20h] BYREF
  float v23; // [sp+60h] [bp-1Ch]
  float v24; // [sp+64h] [bp-18h]
  float v25; // [sp+68h] [bp-14h]
  float v26; // [sp+6Ch] [bp-10h]
  float v27; // [sp+70h] [bp-Ch]
  int v28; // [sp+74h] [bp-8h]

  GroundHeight = Ogre::GameTerrainScene::getGroundHeight((int)this);
  v17[0] = a2;
  *a4 = (int)(float)(v14 * 10.0);
  v17[1] = 1000000;
  v17[2] = a3;
  Ogre::WorldPos::toVector3((Ogre::WorldPos *)&v19, v17);
  v22 = v19;
  v23 = v20;
  v24 = v21;
  v25 = 0.0;
  v27 = 0.0;
  v10 = *((ozcollide::AABBTreePoly ***)this + 10);
  v26 = -1.0;
  v28 = 2139095039;
  if ( Ogre::PhysicsScene2::pick(v10, (const Ogre::Ray *)&v22, &v15, (Ogre::Vector3 *)v16) != 0 )
  {
    v19 = v22 + (float)(v15 * v25);
    v20 = (float)(v15 * v26) + v23;
    v21 = (float)(v15 * v27) + v24;
    Ogre::WorldPos::WorldPos(v18, (const Ogre::Vector3 *)&v19);
    if ( *a4 < v18[1] )
    {
      *a4 = v18[1];
      if ( a5 != nullptr )
      {
        *(_DWORD *)a5 = v16[0];
        v11 = v16[2];
        *((_DWORD *)a5 + 1) = v16[1];
        *((_DWORD *)a5 + 2) = v11;
      }
    }
  }
  return GroundHeight;
}


//======================================================================
// Ogre::GameTerrainScene::isUnderTerrain(Ogre::Vector3 const&)
// address: 0x0019E9E8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::isUnderTerrain(
        Ogre::GameTerrainScene *this,
        const Ogre::Vector3 *a2,
        int a3,
        float a4)
{
  int result; // r0

  result = Ogre::GameTerrainScene::getGroundHeight((int)this);
  if ( result != 0 )
    return a4 >= *((float *)a2 + 1);
  return result;
}


//======================================================================
// Ogre::GameTerrainScene::testTriangle(Ogre::Ray const&,int,int,int,int,float &)
// address: 0x0019EA10   size: 0xE4 (228 bytes)
//======================================================================
bool __fastcall Ogre::GameTerrainScene::testTriangle(
        Ogre::GameTerrainScene *this,
        const Ogre::Ray *a2,
        int a3,
        int a4,
        int a5,
        int a6,
        float *a7)
{
  float v8; // r0
  int v9; // r6
  float v10; // r0
  char *v11; // r4
  float v16; // [sp+1Ch] [bp-38h] BYREF
  float v17; // [sp+20h] [bp-34h] BYREF
  char v18; // [sp+24h] [bp-30h] BYREF
  float v19; // [sp+28h] [bp-2Ch]
  float v20[3]; // [sp+2Ch] [bp-28h] BYREF
  float v21[2]; // [sp+38h] [bp-1Ch] BYREF
  float v22; // [sp+40h] [bp-14h]
  float v23[4]; // [sp+44h] [bp-10h] BYREF
  char vars0; // [sp+54h] [bp+0h] BYREF

  *a7 = 3.4028e38;
  while ( a4 <= a6 )
  {
    v8 = (float)a4++ * 400.0;
    v23[2] = v8;
    v19 = v8;
    v9 = a3;
    v22 = (float)a4 * 400.0;
    v20[2] = v22;
    while ( v9 <= a5 )
    {
      v10 = (float)v9++ * 400.0;
      v20[0] = v10;
      v17 = v10;
      v23[0] = (float)v9 * 400.0;
      v21[0] = v23[0];
      v11 = &v18;
      do
      {
        Ogre::GameTerrainScene::getGroundHeight((int)this);
        v11 += 12;
      }
      while ( v11 != &vars0 );
      if ( Ogre::Ray::intersectTriangle(
             a2,
             (const Ogre::Vector3 *)&v17,
             (const Ogre::Vector3 *)v20,
             (const Ogre::Vector3 *)v21,
             &v16) != 0
        && v16 < *a7 )
      {
        *a7 = v16;
      }
      if ( Ogre::Ray::intersectTriangle(
             a2,
             (const Ogre::Vector3 *)&v17,
             (const Ogre::Vector3 *)v21,
             (const Ogre::Vector3 *)v23,
             &v16) != 0
        && v16 < *a7 )
      {
        *a7 = v16;
      }
    }
  }
  return *a7 != 3.4028e38;
}


//======================================================================
// Ogre::GameTerrainScene::pickTerrain(Ogre::WorldRay const&,float *)
// address: 0x0019EAFC   size: 0x15C (348 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::pickTerrain(Ogre::GameTerrainScene *this, const Ogre::WorldRay *a2, float *a3)
{
  int v5; // r6
  float v6; // r5
  float v7; // r6
  int v10; // [sp+10h] [bp-44h]
  float v11; // [sp+14h] [bp-40h]
  float v12; // [sp+18h] [bp-3Ch]
  float v13; // [sp+20h] [bp-34h] BYREF
  float v14; // [sp+24h] [bp-30h]
  float v15; // [sp+28h] [bp-2Ch]
  float v16; // [sp+2Ch] [bp-28h] BYREF
  float v17; // [sp+30h] [bp-24h]
  float v18; // [sp+34h] [bp-20h]
  float v19; // [sp+38h] [bp-1Ch] BYREF
  float v20; // [sp+3Ch] [bp-18h]
  float v21; // [sp+40h] [bp-14h]
  float v22; // [sp+44h] [bp-10h] BYREF
  float v23; // [sp+48h] [bp-Ch]
  float v24; // [sp+4Ch] [bp-8h]

  Ogre::WorldPos::toVector3((Ogre::WorldPos *)&v13, a2);
  v10 = *((int *)a2 + 3);
  v11 = *((float *)a2 + 4);
  v12 = *((float *)a2 + 5);
  if ( Ogre::GameTerrainScene::isUnderTerrain(this, (const Ogre::Vector3 *)&v13, v10, v11) != 0 )
  {
    if ( a3 != nullptr )
      *a3 = 0.0;
  }
  else
  {
    v5 = 183;
    v6 = 0.0;
    v16 = v13;
    v17 = v14;
    v18 = v15;
    while ( 1 )
    {
      v6 = v6 + 280.0;
      v19 = v13 + (float)(v6 * *(float *)&v10);
      v20 = (float)(v6 * v11) + v14;
      v21 = (float)(v6 * v12) + v15;
      if ( Ogre::GameTerrainScene::isUnderTerrain(this, (const Ogre::Vector3 *)&v19, SLODWORD(v21), v20) != 0 )
        break;
      --v5;
      v16 = v19;
      v17 = v20;
      v18 = v21;
      if ( v5 == 0 )
        return 0;
    }
    while ( 1 )
    {
      Ogre::operator-(&v22, &v19, &v16);
      v7 = Ogre::Vector3::length((Ogre::Vector3 *)&v22);
      if ( v7 <= 32.0 )
        break;
      v22 = v16 + (float)(*(float *)&v10 * (float)(v7 * 0.5));
      v23 = (float)(v11 * (float)(v7 * 0.5)) + v17;
      v24 = (float)(v12 * (float)(v7 * 0.5)) + v18;
      if ( Ogre::GameTerrainScene::isUnderTerrain(this, (const Ogre::Vector3 *)&v22, SLODWORD(v23), v24) != 0 )
      {
        v19 = v22;
        v20 = v23;
        v21 = v24;
      }
      else
      {
        v16 = v22;
        v17 = v23;
        v18 = v24;
      }
    }
    if ( a3 != nullptr )
    {
      Ogre::operator-(&v22, &v16, &v13);
      *a3 = Ogre::Vector3::length((Ogre::Vector3 *)&v22);
    }
  }
  return 1;
}


//======================================================================
// Ogre::GameTerrainScene::pickGround(Ogre::WorldRay const&,float *)
// address: 0x0019EC5C   size: 0x64 (100 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::pickGround(ozcollide::AABBTreePoly ***this, const Ogre::WorldRay *a2, float *a3)
{
  int result; // r0
  int v6; // [sp+8h] [bp-3Ch]
  float v8; // [sp+14h] [bp-30h] BYREF
  float v9[3]; // [sp+18h] [bp-2Ch] BYREF
  _BYTE v10[24]; // [sp+24h] [bp-20h] BYREF
  int v11; // [sp+3Ch] [bp-8h]

  v6 = Ogre::GameTerrainScene::pickTerrain((Ogre::GameTerrainScene *)this, a2, &v8);
  v11 = 2139095039;
  memset(v9, 0, sizeof(v9));
  Ogre::WorldRay::getRelativeRay(a2, (Ogre::Ray *)v10, (const Ogre::WorldPos *)v9);
  result = Ogre::PhysicsScene2::pick(*(this + 10), (const Ogre::Ray *)v10, v9, nullptr);
  if ( result != 0 )
  {
    if ( v6 == 0 || v8 > v9[0] )
      v8 = v9[0];
  }
  else if ( v6 == 0 )
  {
    return result;
  }
  *a3 = v8;
  return 1;
}


//======================================================================
// Ogre::GameTerrainScene::switchUseStaticLight(bool)
// address: 0x0019EEFC   size: 0x152 (338 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::switchUseStaticLight(Ogre::GameTerrainScene *this, unsigned int a2)
{
  unsigned int v3; // r4
  int v4; // r4
  int v5; // r3
  int v6; // r3
  unsigned int *v7; // r1
  unsigned int v8; // r6
  unsigned int v9; // r5
  int Block; // r0
  float v11; // r1
  Ogre::VertexData *v12; // r5
  int v13; // r0
  signed int v14; // r3
  int i; // r4
  int v16; // r3
  unsigned int *v17; // r3
  int v18; // r0
  unsigned int j; // r2
  Ogre::TerrainTile *v20; // r0
  int v21; // r0
  int v22; // r5
  Ogre::VertexData *v23; // r6
  int v24; // r0
  unsigned int k; // r3
  _DWORD *v26; // [sp+0h] [bp-1Ch]
  signed int v27; // [sp+4h] [bp-18h]
  unsigned int v28; // [sp+4h] [bp-18h]
  unsigned int v29; // [sp+4h] [bp-18h]
  void *v30; // [sp+Ch] [bp-10h] BYREF

  v3 = a2;
  if ( a2 != 0 )
  {
    v4 = 0;
    v5 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 76);
    if ( v5 == 1 )
    {
      while ( 1 )
      {
        v6 = *((_DWORD *)this + 21);
        if ( v4 >= -1431655765 * ((*((_DWORD *)this + 22) - v6) >> 3) )
          break;
        v7 = (unsigned int *)(v6 + 24 * v4);
        v8 = *v7;
        v9 = v7[1];
        std::vector<unsigned int>::vector((unsigned int *)&v30, (int)(v7 + 3));
        Block = Ogre::TerrainTile::getBlock(**((Ogre::TerrainTile ***)this + 32), v8, v9);
        if ( Block != 0 )
        {
          v12 = *(Ogre::VertexData **)(*(_DWORD *)(Block + 12) + 268);
          Ogre::Sqrt(COERCE_OGRE_((float)*(int *)(*(_DWORD *)(*(_DWORD *)(Block + 12) + 252) + 40)), v11);
          v27 = *((_DWORD *)v12 + 13);
          v13 = Ogre::VertexData::lock(v12);
          v14 = 0;
          v26 = v30;
          while ( v14 < v27 )
          {
            *(_DWORD *)(v13 + 40 * v14 + 32) = v26[v14];
            ++v14;
          }
          Ogre::VertexData::unlock((int)v12);
        }
        if ( v30 != nullptr )
          operator delete(v30);
        ++v4;
      }
    }
    else if ( v5 == 2 )
    {
      for ( i = 0; ; ++i )
      {
        v16 = *((_DWORD *)this + 27);
        if ( i >= -1431655765 * ((*((_DWORD *)this + 28) - v16) >> 2) )
          break;
        v17 = (unsigned int *)(v16 + 12 * i);
        v28 = v17[2];
        v18 = Ogre::TerrainTile::getBlock(**((Ogre::TerrainTile ***)this + 32), *v17, v17[1]);
        if ( v18 != 0 )
          *(_DWORD *)(*(_DWORD *)(v18 + 12) + 340) = v28;
      }
    }
  }
  else
  {
    while ( v3 < *(_DWORD *)(**((_DWORD **)this + 32) + 24) )
    {
      for ( j = 0; ; j = v29 + 1 )
      {
        v29 = j;
        v20 = **((Ogre::TerrainTile ***)this + 32);
        if ( j >= *((_DWORD *)v20 + 7) )
          break;
        v21 = Ogre::TerrainTile::getBlock(v20, v3, j);
        v22 = v21;
        if ( v21 != 0 )
        {
          v23 = *(Ogre::VertexData **)(*(_DWORD *)(v21 + 12) + 268);
          v24 = Ogre::VertexData::lock(v23);
          for ( k = 0; k < *((_DWORD *)v23 + 13); ++k )
            *(_DWORD *)(v24 + 40 * k + 32) = *(_DWORD *)(36 * k
                                                       + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v22 + 12) + 252) + 124)
                                                       + 32);
        }
      }
      ++v3;
    }
  }
}


//======================================================================
// Ogre::GameTerrainScene::update(unsigned int)
// address: 0x0019F058   size: 0x78 (120 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::update(Ogre::GameTerrainScene *this, unsigned int a2)
{
  unsigned int v3; // r1
  unsigned int v5; // r5
  int v6; // r3
  int i; // r5
  int v8; // r3
  int v9; // r0
  int v10; // r1

  v3 = *((_DWORD *)this + 35);
  v5 = 0;
  *((_DWORD *)this + 35) = a2 + v3;
  Ogre::TLiquid::SetGlobalWaterTime(a2 + v3, v3);
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 32);
    if ( v5 >= (*((_DWORD *)this + 33) - v6) >> 2 )
      break;
    Ogre::TerrainTile::update(*(_DWORD **)(4 * v5++ + v6), a2);
  }
  for ( i = 0; ; ++i )
  {
    v8 = *((_DWORD *)this + 5);
    if ( i >= (*((_DWORD *)this + 6) - v8) >> 2 )
      break;
    v9 = *(_DWORD *)(4 * i + v8);
    (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v9 + 40))(v9, a2);
  }
  v10 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 76);
  if ( v10 != *((_DWORD *)this + 37) )
  {
    *((_DWORD *)this + 37) = v10;
    Ogre::GameTerrainScene::switchUseStaticLight(this, v10 != 0);
  }
}


//======================================================================
// Ogre::GameTerrainScene::onDetachObject(Ogre::MovableObject *)
// address: 0x0019F388   size: 0xFE (254 bytes)
//======================================================================
const Ogre::RuntimeClass *__fastcall Ogre::GameTerrainScene::onDetachObject(
        Ogre::GameTerrainScene *this,
        Ogre::MovableObject *a2)
{
  const Ogre::RuntimeClass *result; // r0
  Ogre::MovableObject *v5; // r1
  int v6; // r1
  int v7; // r3
  int v8; // r2
  Ogre::LooseOctree *OwnerTree; // r0
  Ogre::MovableObject **v10; // r3
  Ogre::MovableObject **v11; // r1
  int i; // r0
  Ogre::MovableObject **v13; // r2
  int v14; // r0
  Ogre::MovableObject **j; // r2

  if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI) == nullptr
    || *((_BYTE *)a2 + 209) == 0 )
  {
    result = Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::SoundNode::m_RTTI);
    if ( result != nullptr )
    {
      v6 = *((_DWORD *)this + 6);
      v7 = *((_DWORD *)this + 5);
      while ( 1 )
      {
        v8 = v7;
        if ( v7 == v6 )
          break;
        v7 += 4;
        result = *(const Ogre::RuntimeClass **)(v7 - 4);
        if ( result == a2 )
        {
          if ( v8 + 4 != v6 )
            std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<Ogre::SoundNode *>(
              (void *)(v8 + 4),
              v6,
              (void *)v8);
          *((_DWORD *)this + 6) -= 4;
          return (const Ogre::RuntimeClass *)Ogre::BaseObject::release(a2);
        }
      }
    }
    else if ( *((_DWORD *)a2 + 49) != 0 )
    {
      OwnerTree = (Ogre::LooseOctree *)Ogre::LooseOctree::getOwnerTree(a2, v5);
      return Ogre::LooseOctree::detachObject(OwnerTree, a2);
    }
    return result;
  }
  v10 = *((Ogre::MovableObject ***)this + 2);
  v11 = *((Ogre::MovableObject ***)this + 3);
  for ( i = ((char *)v11 - (char *)v10) >> 4; ; --i )
  {
    v13 = v10;
    if ( i <= 0 )
      break;
    if ( *v10 == a2 )
      goto LABEL_33;
    if ( v10[1] == a2 )
    {
      ++v10;
      goto LABEL_33;
    }
    if ( v10[2] == a2 )
    {
      v10 += 2;
      goto LABEL_33;
    }
    v10 += 4;
    if ( *(v10 - 1) == a2 )
    {
      v10 = v13 + 3;
      goto LABEL_33;
    }
  }
  v14 = v11 - v10;
  if ( v14 == 2 )
    goto LABEL_29;
  if ( v14 != 3 )
  {
    if ( v14 != 1 )
      goto LABEL_40;
    goto LABEL_31;
  }
  if ( *v10 != a2 )
  {
    v13 = v10 + 1;
LABEL_29:
    if ( *v13 == a2 )
    {
LABEL_32:
      v10 = v13;
      goto LABEL_33;
    }
    ++v13;
LABEL_31:
    if ( *v13 != a2 )
      goto LABEL_40;
    goto LABEL_32;
  }
LABEL_33:
  if ( v10 != v11 )
  {
    for ( j = v10 + 1; j != v11; ++j )
    {
      if ( *j != a2 )
        *v10++ = *j;
    }
    v11 = v10;
  }
LABEL_40:
  if ( v11 != *((Ogre::MovableObject ***)this + 3) )
    *((_DWORD *)this + 3) = v11;
  return (const Ogre::RuntimeClass *)Ogre::BaseObject::release(a2);
}


//======================================================================
// Ogre::GameTerrainScene::onAttachObject(Ogre::MovableObject *)
// address: 0x0019F53C   size: 0x19A (410 bytes)
//======================================================================
int __fastcall Ogre::GameTerrainScene::onAttachObject(Ogre::GameTerrainScene *this, Ogre::MovableObject *a2)
{
  __int64 v4; // r0
  int v5; // r3
  char *WorldBounds; // r0
  int WidthGridNum; // r0
  __int64 v8; // r0
  int v9; // r3
  char *v11; // [sp+24h] [bp-20h]
  int v12; // [sp+2Ch] [bp-18h]
  int *RoadPoints; // [sp+30h] [bp-14h]
  int Width; // [sp+34h] [bp-10h]
  int v15; // [sp+38h] [bp-Ch] BYREF
  int v16[2]; // [sp+3Ch] [bp-8h] BYREF

  v12 = **((_DWORD **)this + 32);
  if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::SoundNode::m_RTTI) != nullptr )
  {
    LODWORD(v4) = (*(int (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)a2 + 4))(a2);
    HIDWORD(v4) = *((_DWORD *)this + 6);
    v5 = *((_DWORD *)this + 7);
    v16[0] = (int)a2;
    if ( HIDWORD(v4) == v5 )
    {
      LODWORD(v4) = (char *)this + 20;
      LODWORD(v4) = std::vector<Ogre::SoundNode *>::_M_insert_aux(v4, v16);
    }
    else
    {
      if ( HIDWORD(v4) != 0 )
        *(_DWORD *)HIDWORD(v4) = a2;
      *((_DWORD *)this + 6) += 4;
    }
  }
  else if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::EffectObject::m_RTTI) != nullptr
         && *((_BYTE *)a2 + 209) != 0 )
  {
    LODWORD(v4) = (*(int (__fastcall **)(Ogre::MovableObject *))(*(_DWORD *)a2 + 4))(a2);
    HIDWORD(v8) = *((_DWORD *)this + 3);
    v9 = *((_DWORD *)this + 4);
    v16[0] = (int)a2;
    if ( HIDWORD(v8) == v9 )
    {
      LODWORD(v8) = (char *)this + 8;
      LODWORD(v4) = std::vector<Ogre::EffectObject *>::_M_insert_aux(v8, v16);
    }
    else
    {
      if ( HIDWORD(v8) != 0 )
        *(_DWORD *)HIDWORD(v8) = a2;
      *((_DWORD *)this + 3) += 4;
    }
  }
  else
  {
    if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::DecalNode::m_RTTI) != nullptr )
    {
      v15 = 0;
      v16[0] = 0;
      WorldBounds = Ogre::MovableObject::getWorldBounds(a2);
      Ogre::GameTerrainScene::buildDecalMesh(
        this,
        (const Ogre::BoxSphereBound *)WorldBounds,
        (Ogre::Vector3 *)&unk_4C6F90,
        word_4EE860,
        0,
        4500,
        &v15,
        v16);
      Ogre::DecalNode::buildMesh(a2, (Ogre::Vector3 *)&unk_4C6F90, word_4EE860, v15, v16[0]);
    }
    else if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::DirDecal::m_RTTI) != nullptr )
    {
      v15 = 0;
      v16[0] = 0;
      v11 = Ogre::MovableObject::getWorldBounds(a2);
      RoadPoints = (int *)Ogre::DirDecal::getRoadPoints(a2);
      Width = Ogre::DirDecal::getWidth(a2);
      WidthGridNum = Ogre::DirDecal::getWidthGridNum(a2);
      Ogre::GameTerrainScene::buildDecalMesh(
        (int)this,
        (int)v11,
        RoadPoints,
        *(float *)&Width,
        WidthGridNum,
        (int)&unk_4C6F90,
        (int)&unk_4F51D8,
        (int)word_4EE860,
        0,
        4500,
        &v15,
        v16);
      Ogre::DirDecal::buildMesh(
        a2,
        (Ogre::Vector3 *)&unk_4C6F90,
        (Ogre::Vector2 *)&unk_4F51D8,
        word_4EE860,
        v15,
        v16[0]);
    }
    else if ( Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::SmallDecal::m_RTTI) != nullptr )
    {
      Ogre::SmallDecal::BuildDecal(*(float *)&a2, this);
    }
    LODWORD(v4) = Ogre::LooseOctree::attachObject(*(Ogre::LooseOctree **)(v12 + 32), a2);
  }
  return v4;
}


//======================================================================
// Ogre::GameTerrainScene::updateFocusArea(Ogre::WorldPos,float)
// address: 0x001A0150   size: 0xBE (190 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::updateFocusArea(_DWORD *a1, int a2, int a3, int a4)
{
  Ogre::TerrainTile **v4; // r3
  Ogre::TerrainTile *v5; // r6
  signed int v6; // r5
  Ogre *i; // r4
  int Block; // r7
  Ogre::TerrainSceneNode *v9; // r0
  int v10; // r1
  _BOOL4 v11; // r1
  float v12; // [sp+4h] [bp-30h]
  int v13; // [sp+8h] [bp-2Ch]
  float v14; // [sp+Ch] [bp-28h]
  float v15; // [sp+10h] [bp-24h]
  _DWORD v16[4]; // [sp+14h] [bp-20h] BYREF
  float v17[4]; // [sp+24h] [bp-10h] BYREF

  v16[0] = a2;
  a1[11] = a2;
  a1[12] = a3;
  a1[13] = a4;
  v16[2] = a4;
  v4 = (Ogre::TerrainTile **)a1[32];
  v16[1] = a3;
  v5 = *v4;
  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v17, v16);
  *(float *)&v13 = v17[0] / 3200.0;
  Ogre::WorldPos::toVector3((Ogre::WorldPos *)v17, v16);
  v14 = v17[2] / 3200.0;
  v6 = 0;
  v15 = COERCE_FLOAT(Ogre::Root::getViewSize((Ogre::Root *)Ogre::Singleton<Ogre::Root>::ms_Singleton));
  while ( v6 < *((_DWORD *)v5 + 7) )
  {
    for ( i = nullptr; (int)i < *((_DWORD *)v5 + 6); i = (Ogre *)((char *)i + 1) )
    {
      Block = Ogre::TerrainTile::getBlock(v5, (unsigned int)i, v6);
      if ( Ogre::IsInViewRange(i, v6, *(float *)&v13, v14, v15 * 1.5, v12) )
      {
        v9 = (Ogre::TerrainSceneNode *)Block;
        v10 = 3;
      }
      else
      {
        v11 = Ogre::IsInViewRange(i, v6, *(float *)&v13, v14, v15 * 3.0, v12);
        v9 = (Ogre::TerrainSceneNode *)Block;
        v10 = v11;
      }
      Ogre::TerrainSceneNode::setLoadLod(v9, v10);
    }
    ++v6;
  }
}


//======================================================================
// Ogre::GameTerrainScene::addTerrainTile(unsigned int,unsigned int,Ogre::TerrainTileSource *)
// address: 0x001A0748   size: 0x50 (80 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::addTerrainTile(
        Ogre::GameTerrainScene *this,
        unsigned int a2,
        unsigned int a3,
        Ogre::TerrainTileSource *a4)
{
  int v6; // r6
  Ogre::TerrainTile *v7; // r4
  unsigned int i; // r6
  unsigned int j; // r5

  v6 = *((_DWORD *)this + 30) * a3 + a2;
  v7 = (Ogre::TerrainTile *)operator new(0x24u);
  Ogre::TerrainTile::TerrainTile(v7, this, a4);
  Ogre::TerrainTile::buildBlocks(v7);
  *(_DWORD *)(4 * v6 + *((_DWORD *)this + 32)) = v7;
  for ( i = 0; i < *((_DWORD *)v7 + 7); ++i )
  {
    for ( j = 0; j < *((_DWORD *)v7 + 6); ++j )
      Ogre::TerrainTile::loadOneBlock(v7, j, i);
  }
}


//======================================================================
// Ogre::GameTerrainScene::GameTerrainScene(Ogre::FixedString const&,unsigned int,unsigned int)
// address: 0x001A08E0   size: 0xBA (186 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16GameTerrainSceneC1ERKNS_11FixedStringEjj'
Ogre::GameTerrainScene *__fastcall Ogre::GameTerrainScene::GameTerrainScene(
        Ogre::GameTerrainScene *this,
        const Ogre::FixedString *a2,
        void *a3,
        unsigned int a4)
{
  int v5; // r0
  int v6; // r0
  unsigned int v7; // r3
  _DWORD *v8; // r1
  unsigned int v9; // r2
  void *v14; // [sp+14h] [bp-8h] BYREF

  Ogre::GameScene::GameScene(this);
  *(_DWORD *)this = &off_458B48;
  *((_BYTE *)this + 56) = 1;
  *((_DWORD *)this + 15) = 100;
  *((_DWORD *)this + 18) = 100;
  *((_DWORD *)this + 16) = -1;
  *((_DWORD *)this + 19) = -1;
  *((_DWORD *)this + 30) = a3;
  *((_DWORD *)this + 31) = a4;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 28) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  v5 = *(_DWORD *)a2;
  *((_DWORD *)this + 36) = *(_DWORD *)a2;
  Ogre::FixedString::addRef(v5, a3);
  v6 = *((_DWORD *)this + 32);
  v14 = nullptr;
  v7 = a4 * (_DWORD)a3;
  v8 = *((_DWORD **)this + 33);
  v9 = ((int)v8 - v6) >> 2;
  if ( a4 * (unsigned int)a3 <= v9 )
  {
    if ( v7 < v9 )
      *((_DWORD *)this + 33) = v6 + 4 * v7;
  }
  else
  {
    std::vector<Ogre::TerrainTile *>::_M_fill_insert((int)this + 128, v8, v7 - v9, &v14);
  }
  *((_DWORD *)this + 35) = 0;
  *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 96) = this;
  *((_DWORD *)this + 37) = 0;
  return this;
}


//======================================================================
// Ogre::GameTerrainScene::getEffectObjects(std::vector<Ogre::RenderableEffectInfo,std::allocator<Ogre::RenderableEffectInfo>> &,Ogre::RenderableObject *)
// address: 0x001A09A4   size: 0xCE (206 bytes)
//======================================================================
void __fastcall Ogre::GameTerrainScene::getEffectObjects(int a1, int a2, Ogre::MovableObject *a3)
{
  char *WorldBounds; // r0
  float v6; // r3
  float v7; // r3
  unsigned int v8; // r6
  float v9; // r3
  int v10; // r0
  int v11; // r3
  Ogre::BaseObject *v12; // r5
  __int64 v13; // r0
  int v14; // r2
  Ogre::BaseObject *v16; // [sp+8h] [bp-34h] BYREF
  float v17; // [sp+Ch] [bp-30h]
  void *v18; // [sp+10h] [bp-2Ch] BYREF
  int v19; // [sp+14h] [bp-28h]
  int v20; // [sp+18h] [bp-24h]
  float v21[6]; // [sp+1Ch] [bp-20h] BYREF
  int v22; // [sp+34h] [bp-8h]

  Ogre::GameScene::getEffectObjects(a1, a2, (int)a3);
  WorldBounds = Ogre::MovableObject::getWorldBounds(a3);
  v21[0] = *(float *)WorldBounds;
  v21[1] = *((float *)WorldBounds + 1);
  v6 = *((float *)WorldBounds + 2);
  v18 = nullptr;
  v19 = 0;
  v21[2] = v6;
  v7 = *((float *)WorldBounds + 3);
  v20 = 0;
  v8 = 0;
  v21[3] = v7;
  v21[4] = *((float *)WorldBounds + 4);
  v9 = *((float *)WorldBounds + 5);
  v10 = *((_DWORD *)WorldBounds + 6);
  v21[5] = v9;
  v11 = *(_DWORD *)(a1 + 128);
  v22 = v10;
  Ogre::LooseOctree::getEffectObjects(*(_DWORD *)(*(_DWORD *)v11 + 32), (unsigned int)&v18, v21);
  while ( v8 < (v19 - (int)v18) >> 2 )
  {
    v12 = *((Ogre::BaseObject **)v18 + v8);
    if ( Ogre::BaseObject::isKindOf(v12, (const Ogre::RuntimeClass *)&Ogre::Light::m_RTTI) == nullptr
      || *((_BYTE *)v12 + 220) == 0
      || *((_BYTE *)a3 + 232) == 0 )
    {
      v17 = COERCE_FLOAT((*(int (__fastcall **)(Ogre::BaseObject *, float *, int))(*(_DWORD *)v12 + 80))(v12, v21, v22));
      if ( v17 > 0.0 )
      {
        HIDWORD(v13) = *(_DWORD *)(a2 + 4);
        v14 = *(_DWORD *)(a2 + 8);
        v16 = v12;
        if ( HIDWORD(v13) == v14 )
        {
          LODWORD(v13) = a2;
          std::vector<Ogre::RenderableEffectInfo>::_M_insert_aux(v13, &v16);
        }
        else
        {
          if ( HIDWORD(v13) != 0 )
          {
            *(_DWORD *)HIDWORD(v13) = v12;
            *(float *)(HIDWORD(v13) + 4) = v17;
          }
          *(_DWORD *)(a2 + 4) += 8;
        }
      }
    }
    ++v8;
  }
  if ( v18 != nullptr )
    operator delete(v18);
}

