// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TerrainSceneNode

//======================================================================
// Ogre::TerrainSceneNode::~TerrainSceneNode()
// address: 0x0019D450   size: 0xC2 (194 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16TerrainSceneNodeD1Ev'
void __fastcall Ogre::TerrainSceneNode::~TerrainSceneNode(Ogre::TerrainSceneNode *this)
{
  _DWORD *v2; // r0
  unsigned int i; // r5
  int v4; // r3
  unsigned int *v5; // r6
  _DWORD *v6; // r0
  unsigned int v7; // r1
  unsigned int j; // r5
  int v9; // r3
  _DWORD *v10; // r0
  _DWORD *v11; // r0
  void *v12; // r0
  void *v13; // r0
  void *v14; // r0
  void *v15; // r0

  *(_DWORD *)this = &off_458B30;
  v2 = *((_DWORD **)this + 3);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 3) = 0;
  }
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 10);
    if ( i >= -858993459 * ((*((_DWORD *)this + 11) - v4) >> 2) )
      break;
    v5 = (unsigned int *)(v4 + 20 * i);
    if ( *v5 != 0 )
      Ogre::LoadWrap::breakLoad(this, *v5);
    v6 = (_DWORD *)v5[2];
    if ( v6 != nullptr )
    {
      Ogre::BaseObject::release(v6);
      v5[2] = 0;
    }
  }
  v7 = *((_DWORD *)this + 17);
  if ( v7 != 0 )
    Ogre::LoadWrap::breakLoad(this, v7);
  for ( j = 0; ; ++j )
  {
    v9 = *((_DWORD *)this + 13);
    if ( j >= (*((_DWORD *)this + 14) - v9) >> 2 )
      break;
    v10 = *(_DWORD **)(v9 + 4 * j);
    if ( v10 != nullptr )
    {
      Ogre::BaseObject::release(v10);
      *(_DWORD *)(*((_DWORD *)this + 13) + 4 * j) = 0;
    }
  }
  v11 = *((_DWORD **)this + 18);
  if ( v11 != nullptr )
  {
    Ogre::BaseObject::release(v11);
    *((_DWORD *)this + 18) = 0;
  }
  v12 = *((void **)this + 13);
  if ( v12 != nullptr )
    operator delete(v12);
  v13 = *((void **)this + 10);
  if ( v13 != nullptr )
    operator delete(v13);
  v14 = *((void **)this + 7);
  if ( v14 != nullptr )
    operator delete(v14);
  v15 = *((void **)this + 4);
  if ( v15 != nullptr )
    operator delete(v15);
  Ogre::LoadWrap::~LoadWrap(this);
}


//======================================================================
// Ogre::TerrainSceneNode::~TerrainSceneNode()
// address: 0x0019D51C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::TerrainSceneNode::~TerrainSceneNode(Ogre::TerrainSceneNode *this)
{
  Ogre::TerrainSceneNode::~TerrainSceneNode(this);
  operator delete(this);
}


//======================================================================
// Ogre::TerrainSceneNode::TerrainSceneNode(Ogre::TerrainTile *,unsigned int)
// address: 0x0019D564   size: 0x3A (58 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16TerrainSceneNodeC1EPNS_11TerrainTileEj'
_DWORD *__fastcall Ogre::TerrainSceneNode::TerrainSceneNode(_DWORD *this, Ogre::TerrainTile *a2, unsigned int a3)
{
  *(this + 2) = a3;
  *(this + 1) = a2;
  *this = &off_458B30;
  *(this + 3) = 0;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  *(this + 8) = 0;
  *(this + 9) = 0;
  *(this + 10) = 0;
  *(this + 11) = 0;
  *(this + 12) = 0;
  *(this + 13) = 0;
  *(this + 14) = 0;
  *(this + 15) = 0;
  *(this + 17) = 0;
  *(this + 18) = 0;
  *(this + 16) = -1;
  *(this + 19) = 0;
  return this;
}


//======================================================================
// Ogre::TerrainSceneNode::update(unsigned int)
// address: 0x0019D5A4   size: 0x72 (114 bytes)
//======================================================================
_DWORD *__fastcall Ogre::TerrainSceneNode::update(_DWORD *this, unsigned int a2)
{
  _DWORD *v3; // r4
  int v4; // r0
  unsigned int i; // r5
  int v6; // r3
  int v7; // r0
  unsigned int j; // r5
  int v9; // r3

  v3 = this;
  if ( (int)*(this + 16) > 0 )
  {
    v4 = *(this + 3);
    if ( v4 != 0 )
      (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)v4 + 40))(v4, a2);
    this = (_DWORD *)v3[18];
    if ( this != nullptr )
      this = (_DWORD *)(*(int (__fastcall **)(_DWORD *, unsigned int))(*this + 40))(this, a2);
    for ( i = 0; ; ++i )
    {
      v6 = v3[13];
      if ( i >= (v3[14] - v6) >> 2 )
        break;
      v7 = *(_DWORD *)(4 * i + v6);
      this = (_DWORD *)(*(int (__fastcall **)(int, unsigned int))(*(_DWORD *)v7 + 40))(v7, a2);
    }
    for ( j = 0; ; ++j )
    {
      v9 = v3[10];
      if ( j >= -858993459 * ((v3[11] - v9) >> 2) )
        break;
      this = *(_DWORD **)(v9 + 20 * j + 8);
      if ( this != nullptr )
        this = (_DWORD *)(*(int (__fastcall **)(_DWORD *, unsigned int))(*this + 40))(this, a2);
    }
  }
  return this;
}


//======================================================================
// Ogre::TerrainSceneNode::updateGrassDisturb(Ogre::WorldPos,unsigned int)
// address: 0x0019D61C   size: 0xD4 (212 bytes)
//======================================================================
bool __fastcall Ogre::TerrainSceneNode::updateGrassDisturb(float *a1, int a2, int a3, int a4, unsigned int a5)
{
  float v6; // r5
  float v7; // r0
  int v8; // r7
  float *v9; // r7
  _BOOL4 result; // r0
  float v11; // [sp+4h] [bp-28h]
  float v12[4]; // [sp+1Ch] [bp-10h] BYREF

  v6 = (float)a2 / 10.0;
  v7 = (float)a4 / 10.0;
  v8 = *(_DWORD *)(*((_DWORD *)a1 + 3) + 252);
  if ( v6 > *(float *)(v8 + 484) )
  {
    v9 = (float *)(v8 + 484);
    if ( v6 < v9[3] && v7 > v9[2] && v7 < v9[5] )
      *((_DWORD *)a1 + 19) = Ogre::PlantNode::ms_DisturbTime;
  }
  if ( a1[19] > 0.0 )
  {
    v11 = a1[18];
    if ( v11 != 0.0 )
    {
      v12[0] = (float)a2 / 10.0;
      v12[1] = (float)a3 / 10.0;
      v12[2] = (float)a4 / 10.0;
      Ogre::PlantSetNode::updateGrassDisturb(v11, v12, a5);
    }
  }
  result = (float)(a1[19] - (float)a5) > 0.0;
  if ( (float)(a1[19] - (float)a5) <= 0.0 )
    a1[19] = 0.0;
  else
    a1[19] = a1[19] - (float)a5;
  return result;
}


//======================================================================
// Ogre::TerrainSceneNode::unloadGrass(void)
// address: 0x0019D74C   size: 0x2C (44 bytes)
//======================================================================
void __fastcall Ogre::TerrainSceneNode::unloadGrass(Ogre::TerrainSceneNode *this)
{
  int v2; // r0
  unsigned int v3; // r1

  v2 = *((_DWORD *)this + 18);
  if ( v2 != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 52))(v2);
    Ogre::BaseObject::release(*((_DWORD **)this + 18));
    *((_DWORD *)this + 18) = 0;
  }
  v3 = *((_DWORD *)this + 17);
  if ( v3 != 0 )
  {
    Ogre::LoadWrap::breakLoad(this, v3);
    *((_DWORD *)this + 17) = 0;
  }
}


//======================================================================
// Ogre::TerrainSceneNode::unloadModels(Ogre::TerrainModelType)
// address: 0x0019D778   size: 0x7E (126 bytes)
//======================================================================
Ogre::LoadWrap *__fastcall Ogre::TerrainSceneNode::unloadModels(Ogre::LoadWrap *this, int a2)
{
  Ogre::LoadWrap *v2; // r5
  unsigned int v3; // r6
  int v4; // r3
  unsigned int *v5; // r4
  unsigned int v6; // r0
  unsigned int *v7; // r0
  unsigned int v8; // r3
  unsigned int v9; // r7
  unsigned int v10; // r2
  unsigned int v11; // r3
  _DWORD *v12; // r1
  Ogre::PhysicsScene *v14; // [sp+Ch] [bp-8h]

  v2 = this;
  v3 = 0;
  v14 = *(Ogre::PhysicsScene **)(**((_DWORD **)this + 1) + 36);
  while ( 1 )
  {
    v4 = *((_DWORD *)v2 + 10);
    if ( v3 >= -858993459 * ((*((_DWORD *)v2 + 11) - v4) >> 2) )
      break;
    v5 = (unsigned int *)(v4 + 20 * v3);
    if ( *(unsigned __int8 *)(v5[1] + 84) == a2 )
    {
      v6 = v5[2];
      if ( v6 != 0 )
      {
        (*(void (__fastcall **)(unsigned int))(*(_DWORD *)v6 + 52))(v6);
        Ogre::BaseObject::release((_DWORD *)v5[2]);
      }
      if ( *v5 != 0 )
        Ogre::LoadWrap::breakLoad(v2, *v5);
      v8 = *(_DWORD *)(*((_DWORD *)v2 + 11) - 16);
      v9 = *(_DWORD *)(*((_DWORD *)v2 + 11) - 12);
      v7 = (unsigned int *)(*((_DWORD *)v2 + 11) - 8);
      *v5 = *(_DWORD *)(*((_DWORD *)v2 + 11) - 20);
      v5[1] = v8;
      v5[2] = v9;
      v10 = *v7;
      v11 = v7[1];
      this = (Ogre::LoadWrap *)(v7 + 2);
      v5[3] = v10;
      v5[4] = v11;
      v12 = (_DWORD *)v5[3];
      if ( v12 != nullptr )
        this = (Ogre::LoadWrap *)Ogre::PhysicsScene::removeBSPData(v14, v12);
      *((_DWORD *)v2 + 11) -= 20;
    }
    else
    {
      ++v3;
    }
  }
  return this;
}


//======================================================================
// Ogre::TerrainSceneNode::loadGrass(void)
// address: 0x0019E218   size: 0x66 (102 bytes)
//======================================================================
__int64 __fastcall Ogre::TerrainSceneNode::loadGrass(__int64 this, int a2)
{
  Ogre::TerrainTileSource **v2; // r3
  int v3; // r4
  Ogre::TerrainTileSource *v4; // r5
  unsigned int v5; // r6
  int v6; // r0
  int v7; // r2
  int v8; // r3
  unsigned int v9; // r1
  void *v10; // r1
  __int64 v12; // [sp+0h] [bp-Ch] BYREF
  int v13; // [sp+8h] [bp-4h]

  v12 = this;
  v13 = a2;
  v2 = *(Ogre::TerrainTileSource ***)(this + 4);
  v3 = this;
  v4 = *v2;
  v5 = (unsigned int)v2[1];
  if ( *((_BYTE *)*v2 + 56) != 0 )
  {
    v6 = *(_DWORD *)(this + 72);
    if ( v6 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 52))(v6);
      Ogre::BaseObject::release(*(_DWORD **)(v3 + 72));
      *(_DWORD *)(v3 + 72) = 0;
    }
    Ogre::GameTerrainScene::getPlantResName((Ogre::GameTerrainScene *)&v12, v4, v5, *(_DWORD *)(v3 + 8));
    v9 = *(_DWORD *)(v3 + 68);
    if ( v9 != 0 )
      Ogre::LoadWrap::breakLoad((Ogre::LoadWrap *)v3, v9);
    HIDWORD(v12) = Ogre::FixedString::insert((Ogre::FixedString *)v12, (const char *)0xFFFFFFFF, v7, v8);
    *(_DWORD *)(v3 + 68) = Ogre::LoadWrap::backgroundLoad(
                             (Ogre::LoadWrap *)v3,
                             (const Ogre::FixedString *)((char *)&v12 + 4));
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v12 + 1, v10);
    sub_3BDF80(&v12);
  }
  return v12;
}


//======================================================================
// Ogre::TerrainSceneNode::loadSingleModel(Ogre::Resource *,Ogre::TileModelData *,Ogre::TerrainSceneNode::BackLoadInfo &)
// address: 0x0019F0D4   size: 0x1B8 (440 bytes)
//======================================================================
int *__fastcall Ogre::TerrainSceneNode::loadSingleModel(int a1, Ogre::ModelData **a2, int a3, int a4)
{
  int *v6; // r4
  int v7; // r3
  int v8; // r3
  int v9; // r3
  int v10; // r3
  Ogre::BSPData *v11; // r5
  Ogre::PhysicsScene *v12; // r6
  int v13; // r3
  int v14; // r1
  _DWORD *v15; // r1
  int v16; // r5
  int IthSkin; // r0
  int v18; // r3
  Ogre::SubMeshInstance *v19; // r5
  Ogre::BaseObject *i; // [sp+8h] [bp-24h]
  int v23; // [sp+Ch] [bp-20h]
  int v25; // [sp+14h] [bp-18h]
  _BYTE v26[4]; // [sp+18h] [bp-14h] BYREF
  _DWORD v27[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( Ogre::BaseObject::isKindOf((Ogre::BaseObject *)a2, (const Ogre::RuntimeClass *)&Ogre::EntityData::m_RTTI) != nullptr )
  {
    v6 = (int *)operator new(0x210u);
    Ogre::Entity::Entity((Ogre::Entity *)v6);
    Ogre::Entity::load((Ogre::Entity *)v6, a2);
    Ogre::WorldPos::WorldPos(v27, (const Ogre::Vector3 *)(a3 + 44));
    v6[2] = v27[0];
    v6[3] = v27[1];
    v7 = *v6;
    v6[4] = v27[2];
    (*(void (__fastcall **)(int *))(v7 + 64))(v6);
    v8 = *(_DWORD *)(a3 + 68);
    v6[9] = v8;
    v6[10] = v8;
    v6[11] = v8;
    (*(void (__fastcall **)(int *))(*v6 + 64))(v6);
    Ogre::MovableObject::setRotation(
      (Ogre::MovableObject *)v6,
      *(float *)(a3 + 56),
      *(float *)(a3 + 60),
      *(float *)(a3 + 64));
    (*(void (__fastcall **)(int *, _DWORD, _DWORD))(*v6 + 48))(v6, **(_DWORD **)(a1 + 4), 0);
  }
  else
  {
    v6 = (int *)operator new(0x1C8u);
    Ogre::Model::Model((Ogre::Model *)v6, (Ogre::ModelData *)a2);
    Ogre::WorldPos::WorldPos(v27, (const Ogre::Vector3 *)(a3 + 44));
    v6[2] = v27[0];
    v6[3] = v27[1];
    v9 = *v6;
    v6[4] = v27[2];
    (*(void (__fastcall **)(int *))(v9 + 64))(v6);
    v10 = *(_DWORD *)(a3 + 68);
    v6[9] = v10;
    v6[10] = v10;
    v6[11] = v10;
    (*(void (__fastcall **)(int *))(*v6 + 64))(v6);
    Ogre::MovableObject::setRotation(
      (Ogre::MovableObject *)v6,
      *(float *)(a3 + 56),
      *(float *)(a3 + 60),
      *(float *)(a3 + 64));
    v11 = a2[11];
    if ( v11 != nullptr )
    {
      v12 = *(Ogre::PhysicsScene **)(**(_DWORD **)(a1 + 4) + 36);
      if ( *((_BYTE *)v6 + 180) != 0 )
        (*(void (__fastcall **)(int *))(*v6 + 68))(v6);
      *(_DWORD *)(a4 + 12) = Ogre::PhysicsScene::addBSPData(v12, v11, (const Ogre::Matrix4 *)(v6 + 12));
    }
    (*(void (__fastcall **)(int *, _DWORD, _DWORD))(*v6 + 48))(v6, **(_DWORD **)(a1 + 4), 0);
    for ( i = nullptr; ; i = (Ogre::BaseObject *)((char *)i + 1) )
    {
      v13 = **(_DWORD **)(a1 + 4);
      v14 = *(_DWORD *)(v13 + 96);
      if ( (unsigned int)i >= (*(_DWORD *)(v13 + 100) - v14) >> 5 )
        break;
      sub_3BEB1C(v26, v14 + 32 * (_DWORD)i);
      v15 = (_DWORD *)(*(_DWORD *)(**(_DWORD **)(a1 + 4) + 96) + 32 * (_DWORD)i);
      v16 = v15[3];
      v25 = v15[1];
      v23 = v15[2];
      std::vector<unsigned int>::vector(v27, (int)(v15 + 5));
      if ( v25 == *(_DWORD *)(a4 + 16) && v23 >= 0 )
      {
        IthSkin = Ogre::Model::getIthSkin((Ogre::Model *)v6, v23);
        if ( v16 >= 0 && IthSkin != 0 )
        {
          v18 = *(_DWORD *)(IthSkin + 8);
          if ( v16 < (unsigned int)((*(_DWORD *)(IthSkin + 12) - v18) >> 2) )
          {
            v19 = *(Ogre::SubMeshInstance **)(4 * v16 + v18);
            if ( v19 != nullptr )
            {
              std::vector<unsigned int>::operator=((int)v19 + 20, (int)v27);
              *((_BYTE *)v19 + 53) = 1;
              Ogre::SubMeshInstance::SwitchToStaticLight(v19, 1);
            }
          }
        }
      }
      if ( v27[0] != 0 )
        operator delete((void *)v27[0]);
      sub_3BDF80(v26);
    }
    (*(void (__fastcall **)(int *, int))(*v6 + 100))(v6, 1);
  }
  return v6;
}


//======================================================================
// Ogre::TerrainSceneNode::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x0019F290   size: 0xC8 (200 bytes)
//======================================================================
int __fastcall Ogre::TerrainSceneNode::ResourceLoaded(int this, Ogre::Resource *a2, unsigned int a3)
{
  int v4; // r6
  _DWORD *v5; // r3
  _DWORD *v6; // r1
  int i; // r3
  Ogre::PlantSetNode *v8; // r7
  _DWORD *v9; // r4
  int v10; // r7
  int v11; // r3

  v4 = this;
  if ( *(_DWORD *)(this + 68) == a3 )
  {
    *(_DWORD *)(this + 68) = 0;
    if ( a2 != nullptr )
    {
      this = (int)Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::PlantSource::m_RTTI);
      if ( this != 0 )
      {
        v8 = (Ogre::PlantSetNode *)operator new(0x10Cu);
        Ogre::PlantSetNode::PlantSetNode(v8, a2);
        *(_DWORD *)(v4 + 72) = v8;
        return (*(int (__fastcall **)(Ogre::PlantSetNode *, _DWORD, _DWORD))(*(_DWORD *)v8 + 48))(
                 v8,
                 **(_DWORD **)(v4 + 4),
                 0);
      }
    }
  }
  else
  {
    v5 = *(_DWORD **)(this + 40);
    this = -858993459 * ((*(_DWORD *)(this + 44) - (int)v5) >> 2);
    v6 = v5;
    for ( i = 0; i != this; ++i )
    {
      v9 = v6;
      v10 = *v6;
      v6 += 5;
      if ( v10 == a3 )
      {
        *v9 = 0;
        if ( a2 != nullptr
          && (Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::EntityData::m_RTTI) != nullptr
           || (this = (int)Ogre::BaseObject::isKindOf(a2, (const Ogre::RuntimeClass *)&Ogre::ModelData::m_RTTI)) != 0) )
        {
          this = (int)Ogre::TerrainSceneNode::loadSingleModel(v4, (Ogre::ModelData **)a2, v9[1], (int)v9);
          v11 = v9[1];
          v9[2] = this;
          if ( *(_BYTE *)(v11 + 85) != 0 )
            this = (*(int (__fastcall **)(int, int))(*(_DWORD *)this + 88))(this, 2);
          if ( *(_BYTE *)(v9[1] + 86) != 0 )
            return (*(int (__fastcall **)(_DWORD, int))(*(_DWORD *)v9[2] + 88))(v9[2], 7);
        }
        return this;
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::TerrainSceneNode::mergeAttachModels(std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>> &,Ogre::TerrainModelType,int)
// address: 0x0019FD88   size: 0xA4 (164 bytes)
//======================================================================
void __fastcall Ogre::TerrainSceneNode::mergeAttachModels(int a1, _DWORD *a2, int a3, int a4)
{
  Ogre::RenderableObject *v7; // r5
  Ogre::ResourceManager *v8; // r6
  int v9; // r3
  Ogre::Texture *v10; // r7
  void *v11; // r1
  int v12; // r2
  int v13; // r3
  void *v14; // r1
  __int64 v15; // r0
  int v16; // r3
  Ogre::FixedString *v18[2]; // [sp+Ch] [bp-8h] BYREF

  v7 = (Ogre::RenderableObject *)operator new(0x1C8u);
  Ogre::Model::Model(v7, a2);
  (*(void (__fastcall **)(Ogre::RenderableObject *, _DWORD, _DWORD))(*(_DWORD *)v7 + 48))(v7, **(_DWORD **)(a1 + 4), 0);
  if ( a3 == 6 )
  {
    v8 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    v9 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) + 52);
    v18[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                    *(Ogre::FixedString **)(4 * a4 + v9),
                                    (const char *)0xFFFFFFFF,
                                    4 * a4,
                                    v9);
    v10 = (Ogre::Texture *)Ogre::ResourceManager::blockLoad(v8, v18, 0);
    Ogre::FixedString::~FixedString(v18, v11);
    v18[0] = (Ogre::FixedString *)Ogre::FixedString::insert(
                                    (Ogre::FixedString *)"g_BaseTex",
                                    (const char *)0xFFFFFFFF,
                                    v12,
                                    v13);
    Ogre::Model::setTexture((int)v7, (const Ogre::FixedString *)v18, v10);
    Ogre::FixedString::~FixedString(v18, v14);
  }
  HIDWORD(v15) = *(_DWORD *)(a1 + 56);
  v16 = *(_DWORD *)(a1 + 60);
  v18[0] = v7;
  if ( HIDWORD(v15) == v16 )
  {
    LODWORD(v15) = a1 + 52;
    std::vector<Ogre::RenderableObject *>::_M_insert_aux(v15, v18);
  }
  else
  {
    if ( HIDWORD(v15) != 0 )
      *(_DWORD *)HIDWORD(v15) = v7;
    *(_DWORD *)(a1 + 56) += 4;
  }
}


//======================================================================
// Ogre::TerrainSceneNode::addModelInstances(std::vector<Ogre::ModelInstanceData,std::allocator<Ogre::ModelInstanceData>> &,Ogre::TerrainModelType,int)
// address: 0x0019FE34   size: 0xCA (202 bytes)
//======================================================================
void __fastcall Ogre::TerrainSceneNode::addModelInstances(int a1, int *a2, int a3, int a4)
{
  int v4; // r5
  unsigned int v5; // r6
  int v7; // r0
  int v8; // r7
  unsigned int v9; // r5
  unsigned int v10; // r6
  void *v14[3]; // [sp+14h] [bp-50h] BYREF
  _DWORD v15[17]; // [sp+20h] [bp-44h] BYREF

  v4 = *a2;
  v5 = a2[1];
  if ( *a2 != v5 )
  {
    v7 = j___clzsi2((int)(v5 - v4) >> 6);
    std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>,int>(
      v4,
      v5,
      2 * (31 - v7));
    if ( (int)(v5 - v4) <= 1087 )
    {
      std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>>(
        v4,
        v5);
    }
    else
    {
      v8 = v4 + 1024;
      std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>>(
        v4,
        v4 + 1024);
      while ( v8 != v5 )
      {
        std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::ModelInstanceData *,std::vector<Ogre::ModelInstanceData>>>(v8);
        v8 += 64;
      }
    }
    v9 = 0;
    memset(v14, 0, sizeof(v14));
    while ( v9 < (a2[1] - *a2) >> 6 )
    {
      v10 = v9 << 6;
      std::vector<Ogre::ModelInstanceData>::push_back((int *)v14, *a2 + (v9++ << 6));
      if ( v9 == (a2[1] - *a2) >> 6 || *((_DWORD *)v14[0] + 15) != *(_DWORD *)(*a2 + v10 + 124) )
      {
        Ogre::TerrainSceneNode::mergeAttachModels(a1, v14, a3, a4);
        j_memset(v15, 0, 0x40u);
        v15[8] = 1065353216;
        std::vector<Ogre::ModelInstanceData>::resize((int *)v14, 0, (int)v15);
      }
    }
    if ( v14[0] != nullptr )
      operator delete(v14[0]);
  }
}


//======================================================================
// Ogre::TerrainSceneNode::loadModels(Ogre::TerrainModelType)
// address: 0x001A0028   size: 0xA0 (160 bytes)
//======================================================================
void __fastcall Ogre::TerrainSceneNode::loadModels(Ogre::LoadWrap *a1, int a2)
{
  int v3; // r7
  unsigned int i; // r5
  int v5; // r3
  int *v6; // r6
  int *v7; // r0
  int v8; // r3
  int **v9; // r1
  int *v10; // r2
  int *v11; // r6
  int *v12; // r6
  Ogre::FixedString *v14; // [sp+10h] [bp-1Ch] BYREF
  int *v15; // [sp+14h] [bp-18h] BYREF
  int *v16; // [sp+18h] [bp-14h]
  int *v17; // [sp+1Ch] [bp-10h]
  int *v18; // [sp+20h] [bp-Ch]
  int *v19; // [sp+24h] [bp-8h]

  v3 = *(_DWORD *)(*((_DWORD *)a1 + 1) + 4);
  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)a1 + 4);
    if ( i >= (*((_DWORD *)a1 + 5) - v5) >> 2 )
      break;
    v6 = *(int **)(4 * *(_DWORD *)(v5 + 4 * i) + *(_DWORD *)(v3 + 76));
    if ( *((unsigned __int8 *)v6 + 84) == a2 )
    {
      v14 = nullptr;
      Ogre::TerrainTileSource::loadModelPath(v3, v6[20], a2, (int)&v14);
      v7 = Ogre::LoadWrap::backgroundLoad(a1, (const Ogre::FixedString *)&v14);
      v8 = *((_DWORD *)a1 + 4);
      v15 = v7;
      v16 = v6;
      v17 = nullptr;
      v18 = nullptr;
      v19 = *(int **)(v8 + 4 * i);
      v9 = *((int ***)a1 + 11);
      if ( v9 == *((int ***)a1 + 12) )
      {
        std::vector<Ogre::TerrainSceneNode::BackLoadInfo>::_M_insert_aux((int)a1 + 40, v9, (int *)&v15);
      }
      else
      {
        if ( v9 != nullptr )
        {
          v10 = v16;
          v11 = v17;
          *v9 = v15;
          v9[1] = v10;
          v9[2] = v11;
          v12 = v19;
          v9[3] = v18;
          v9[4] = v12;
        }
        *((_DWORD *)a1 + 11) += 20;
      }
      Ogre::FixedString::~FixedString(&v14, v9);
    }
  }
}


//======================================================================
// Ogre::TerrainSceneNode::setLoadLod(int)
// address: 0x001A00C8   size: 0x86 (134 bytes)
//======================================================================
void __fastcall Ogre::TerrainSceneNode::setLoadLod(Ogre::TerrainSceneNode *this, int a2)
{
  int v2; // r5
  Ogre::LoadWrap *v5; // r0
  int v6; // r1
  __int64 v7; // r0
  int v8; // r2
  int i; // r5
  Ogre::LoadWrap *v10; // r0
  int v11; // r1

  v2 = *((_DWORD *)this + 16);
  if ( v2 != a2 )
  {
    while ( ++v2 <= a2 )
    {
      v5 = this;
      v6 = 0;
      switch ( v2 )
      {
        case 1:
          goto LABEL_6;
        case 2:
          v5 = this;
          v6 = 1;
LABEL_6:
          Ogre::TerrainSceneNode::loadModels(v5, v6);
          break;
        case 3:
          Ogre::TerrainSceneNode::loadModels(this, 2);
          Ogre::TerrainSceneNode::loadModels(this, 3);
          LODWORD(v7) = this;
          Ogre::TerrainSceneNode::loadGrass(v7, v8);
          break;
        default:
          break;
      }
    }
    for ( i = a2 + 1; ; ++i )
    {
      if ( i > *((_DWORD *)this + 16) )
      {
        *((_DWORD *)this + 16) = a2;
        return;
      }
      if ( i == 1 )
        break;
      if ( i == 2 )
      {
        v10 = this;
        v11 = 1;
        goto LABEL_15;
      }
      if ( i == 3 )
      {
        Ogre::TerrainSceneNode::unloadModels(this, 2);
        Ogre::TerrainSceneNode::unloadModels(this, 3);
        Ogre::TerrainSceneNode::unloadGrass(this);
      }
LABEL_18:
      ;
    }
    v10 = this;
    v11 = 0;
LABEL_15:
    Ogre::TerrainSceneNode::unloadModels(v10, v11);
    goto LABEL_18;
  }
}


//======================================================================
// Ogre::TerrainSceneNode::loadTerrain(void)
// address: 0x001A021C   size: 0x170 (368 bytes)
//======================================================================
void __fastcall Ogre::TerrainSceneNode::loadTerrain(Ogre::TerrainSceneNode *this)
{
  Ogre::TerrainTileSource *v2; // r7
  Ogre::TerrainBlockSource *v3; // r6
  Ogre::TerrainBlock *v4; // r5
  unsigned int v5; // r3
  int v6; // r3
  int v7; // r6
  int v8; // r1
  int v9; // r3
  int v10; // r2
  int v11; // r1
  int v12; // r3
  unsigned int i; // r6
  void *v14; // r0
  unsigned int v15; // [sp+8h] [bp-9Ch]
  int Model; // [sp+Ch] [bp-98h]
  _DWORD **v17; // [sp+14h] [bp-90h] BYREF
  int v18; // [sp+18h] [bp-8Ch]
  int v19; // [sp+1Ch] [bp-88h]
  _DWORD v20[16]; // [sp+20h] [bp-84h] BYREF
  _DWORD v21[17]; // [sp+60h] [bp-44h] BYREF

  v2 = *(Ogre::TerrainTileSource **)(*((_DWORD *)this + 1) + 4);
  v3 = *(Ogre::TerrainBlockSource **)(4 * *((_DWORD *)this + 2) + *((_DWORD *)v2 + 25));
  v4 = (Ogre::TerrainBlock *)operator new(0x15Cu);
  Ogre::TerrainBlock::TerrainBlock(v4, v3);
  *((_DWORD *)this + 3) = v4;
  Ogre::TerrainBlock::createRenderData(v4, v2);
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)this + 3) + 48))(
    *((_DWORD *)this + 3),
    **((_DWORD **)this + 1),
    0);
  memset(&v20[5], 0, 12);
  v5 = 0;
  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  v20[8] = 1065353216;
  while ( 1 )
  {
    v15 = v5;
    v6 = *((_DWORD *)this + 4);
    if ( v15 >= (*((_DWORD *)this + 5) - v6) >> 2 )
      break;
    v7 = *(_DWORD *)(4 * *(_DWORD *)(4 * v15 + v6) + *((_DWORD *)v2 + 19));
    if ( *(_BYTE *)(v7 + 84) == 5 )
    {
      Model = Ogre::TerrainTileSource::loadModel(v2, *(_DWORD *)(v7 + 80));
      if ( Model != 0 )
      {
        j_memset(v20, 0, sizeof(v20));
        v8 = *((_DWORD *)v2 + 29);
        v20[15] = Model;
        v9 = *((_DWORD *)v2 + 28);
        if ( v9 != v8 )
          v20[12] = v9 + 8 * *(_DWORD *)(v7 + 88);
        v20[14] = 8;
        v10 = *(_DWORD *)(v7 + 44);
        v11 = *(_DWORD *)(v7 + 52);
        v20[3] = *(_DWORD *)(v7 + 48);
        v12 = *(_DWORD *)(v7 + 68);
        v20[2] = v10;
        v20[4] = v11;
        v20[9] = v12;
        v20[10] = v12;
        v20[11] = v12;
        Ogre::Quaternion::setEulerAngle(
          (Ogre::Quaternion *)&v20[5],
          *(float *)(v7 + 56),
          *(float *)(v7 + 60),
          *(float *)(v7 + 64));
        LOBYTE(v20[0]) = 1;
        v20[1] = 255;
        std::vector<Ogre::ModelInstanceData>::push_back((int *)&v17, (int)v20);
        if ( *(_DWORD *)(Model + 44) != 0 )
        {
          Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v21);
          Ogre::Matrix4::makeSRTMatrix(
            (Ogre::Matrix4 *)v21,
            (const Ogre::Vector3 *)&v20[9],
            (const Ogre::Quaternion *)&v20[5],
            (const Ogre::Vector3 *)&v20[2]);
          Ogre::PhysicsScene::addBSPData(
            *(Ogre::PhysicsScene **)(**((_DWORD **)this + 1) + 36),
            *(Ogre::BSPData **)(Model + 44),
            (const Ogre::Matrix4 *)v21);
        }
      }
    }
    v5 = v15 + 1;
  }
  Ogre::TerrainSceneNode::addModelInstances((int)this, (int *)&v17, 5, 0);
  for ( i = 0; i < (v18 - (int)v17) >> 6; ++i )
    Ogre::BaseObject::release(v17[16 * i + 15]);
  j_memset(v21, 0, 0x40u);
  v21[8] = 1065353216;
  std::vector<Ogre::ModelInstanceData>::resize((int *)&v17, 0, (int)v21);
  Ogre::TerrainSceneNode::loadModels(this, 10);
  v14 = v17;
  *((_DWORD *)this + 16) = 0;
  if ( v14 != nullptr )
    operator delete(v14);
}

