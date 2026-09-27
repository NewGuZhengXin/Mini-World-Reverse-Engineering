// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SmallDecal

//======================================================================
// Ogre::SmallDecal::getRTTI(void)const
// address: 0x0018164C   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::SmallDecal::getRTTI(Ogre::SmallDecal *this)
{
  return &Ogre::SmallDecal::m_RTTI;
}


//======================================================================
// Ogre::SmallDecal::update(unsigned int)
// address: 0x00181658   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::SmallDecal::update(Ogre::SmallDecal *this, unsigned int a2)
{
  return Ogre::MovableObject::update(this, a2);
}


//======================================================================
// Ogre::SmallDecal::attachToScene(Ogre::GameScene *,bool)
// address: 0x00181660   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::SmallDecal::attachToScene(Ogre::SmallDecal *this, Ogre::GameScene *a2, bool a3)
{
  return Ogre::MovableObject::attachToScene(this, a2, false);
}


//======================================================================
// Ogre::SmallDecal::detachFromScene(void)
// address: 0x0018166A   size: 0x8 (8 bytes)
//======================================================================
int __fastcall Ogre::SmallDecal::detachFromScene(Ogre::SmallDecal *this)
{
  return Ogre::MovableObject::detachFromScene(this);
}


//======================================================================
// Ogre::SmallDecal::~SmallDecal()
// address: 0x00181674   size: 0x82 (130 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10SmallDecalD1Ev'
void __fastcall Ogre::SmallDecal::~SmallDecal(Ogre::SmallDecal *this)
{
  Ogre::LoadWrap *v1; // r5
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  unsigned int v8; // r1

  v1 = (Ogre::SmallDecal *)((char *)this + 252);
  *(_DWORD *)this = &off_457BA0;
  *((_DWORD *)this + 63) = off_457C10;
  v3 = *((void **)this + 31577);
  if ( v3 != nullptr )
    operator delete[](v3);
  v4 = *((void **)this + 31578);
  if ( v4 != nullptr )
    operator delete[](v4);
  v5 = *((void **)this + 31579);
  if ( v5 != nullptr )
    operator delete[](v5);
  v6 = *((_DWORD **)this + 31572);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *((_DWORD *)this + 31572) = 0;
  }
  v7 = *((_DWORD **)this + 31570);
  if ( v7 != nullptr )
  {
    Ogre::BaseObject::release(v7);
    *((_DWORD *)this + 31570) = 0;
  }
  v8 = *((_DWORD *)this + 31573);
  if ( v8 != 0 )
    Ogre::LoadWrap::breakLoad(v1, v8);
  Ogre::VertexFormat::~VertexFormat((void **)this + 31574);
  Ogre::LoadWrap::~LoadWrap(v1);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::SmallDecal::~SmallDecal()
// address: 0x0018172C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SmallDecal::~SmallDecal(Ogre::SmallDecal *this)
{
  Ogre::SmallDecal::~SmallDecal(this);
  operator delete(this);
}


//======================================================================
// Ogre::SmallDecal::ResourceLoaded(Ogre::Resource *,unsigned int)
// address: 0x00181754   size: 0x46 (70 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::SmallDecal::ResourceLoaded(
        Ogre::SmallDecal *this,
        Ogre::Resource *a2,
        Ogre::FixedString *a3)
{
  Ogre::Material *v4; // r7
  int v5; // r2
  void *v6; // r1
  Ogre::FixedString *v7[2]; // [sp+4h] [bp-8h] BYREF

  v7[1] = a3;
  if ( a3 == *((Ogre::FixedString **)this + 31573) )
  {
    if ( a2 != nullptr )
    {
      *((_DWORD *)this + 31572) = a2;
      (*(void (__fastcall **)(Ogre::Resource *))(*(_DWORD *)a2 + 4))(a2);
      v4 = *((Ogre::Material **)this + 31570);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v7, (Ogre::FixedString *)"g_DiffuseTex", v5);
      Ogre::Material::setParamTexture(v4, (const Ogre::FixedString *)v7, *((Ogre::Texture **)this + 31572), 0);
      Ogre::FixedString::~FixedString(v7, v6);
    }
    *((_DWORD *)this + 31573) = 0;
  }
}


//======================================================================
// Ogre::SmallDecal::updateWorldCache(void)
// address: 0x001817C0   size: 0x2E (46 bytes)
//======================================================================
char *__fastcall Ogre::SmallDecal::updateWorldCache(Ogre::SmallDecal *this)
{
  char *result; // r0
  int v3; // r5
  int v4; // r1

  Ogre::MovableObject::updateWorldCache(this);
  result = Ogre::MovableObject::getWorldMatrix(this);
  v3 = *((_DWORD *)result + 12);
  v4 = *((_DWORD *)result + 13);
  *((_DWORD *)this + 37) = *((_DWORD *)result + 14);
  *((_DWORD *)this + 35) = v3;
  *((_DWORD *)this + 36) = v4;
  *((_DWORD *)this + 38) = 1148846080;
  *((_DWORD *)this + 39) = 1148846080;
  *((_DWORD *)this + 40) = 1148846080;
  *((_DWORD *)this + 41) = 1155039648;
  return result;
}


//======================================================================
// Ogre::SmallDecal::getWidth(void)
// address: 0x001817F8   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::SmallDecal::getWidth(Ogre::SmallDecal *this)
{
  return *((_DWORD *)this + 31567);
}


//======================================================================
// Ogre::SmallDecal::setTextureRes(std::string,bool)
// address: 0x00181804   size: 0x9A (154 bytes)
//======================================================================
void __fastcall Ogre::SmallDecal::setTextureRes(int a1, Ogre::FixedString **a2, int a3)
{
  unsigned int v4; // r1
  _DWORD *v6; // r0
  Ogre::FixedString *v7; // r1
  Ogre::ResourceManager *v8; // r7
  void *v9; // r1
  int v10; // r2
  Ogre::Material *v11; // r6
  void *v12; // r1
  int v13; // [sp+4h] [bp-10h]
  Ogre::FixedString *v14[2]; // [sp+Ch] [bp-8h] BYREF

  v4 = *(_DWORD *)(a1 + 126292);
  v13 = a3;
  if ( v4 != 0 )
  {
    Ogre::LoadWrap::breakLoad((Ogre::LoadWrap *)(a1 + 252), v4);
    a3 = 126292;
    *(_DWORD *)(a1 + 126292) = 0;
  }
  v6 = *(_DWORD **)(a1 + 126288);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *(_DWORD *)(a1 + 126288) = 0;
  }
  v7 = *a2;
  if ( v13 != 0 )
  {
    v8 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
    Ogre::FixedString::FixedString((Ogre::FixedString *)v14, v7, a3);
    *(_DWORD *)(a1 + 126288) = Ogre::ResourceManager::blockLoad(v8, v14, 0);
    Ogre::FixedString::~FixedString(v14, v9);
    if ( *(_DWORD *)(a1 + 126288) == 0 )
      return;
    v11 = *(Ogre::Material **)(a1 + 126280);
    Ogre::FixedString::FixedString((Ogre::FixedString *)v14, (Ogre::FixedString *)"g_DiffuseTex", v10);
    Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)v14, *(Ogre::Texture **)(a1 + 126288), 0);
  }
  else
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)v14, v7, a3);
    *(_DWORD *)(a1 + 126292) = Ogre::LoadWrap::backgroundLoad(
                                 (Ogre::LoadWrap *)(a1 + 252),
                                 (const Ogre::FixedString *)v14);
  }
  Ogre::FixedString::~FixedString(v14, v12);
}


//======================================================================
// Ogre::SmallDecal::getWidthGridNum(void)
// address: 0x001818B4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::SmallDecal::getWidthGridNum(Ogre::SmallDecal *this)
{
  return *((_DWORD *)this + 31568);
}


//======================================================================
// Ogre::SmallDecal::getNumVertexCount(void)
// address: 0x001818C0   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::SmallDecal::getNumVertexCount(Ogre::SmallDecal *this)
{
  return *((_DWORD *)this + 31580);
}


//======================================================================
// Ogre::SmallDecal::setBlendMode(int)
// address: 0x001818CC   size: 0x2A (42 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::SmallDecal::setBlendMode(
        Ogre::SmallDecal *this,
        int a2,
        Ogre::FixedString *a3)
{
  Ogre::Material *v3; // r7
  void *v5; // r1
  Ogre::FixedString *v6[2]; // [sp+4h] [bp-8h] BYREF

  v6[1] = a3;
  *((_DWORD *)this + 31571) = a2;
  v3 = *((Ogre::Material **)this + 31570);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v6, (Ogre::FixedString *)"BLEND_MODE", (int)a3);
  Ogre::Material::setParamMacro(v3, (const Ogre::FixedString *)v6, *((_DWORD *)this + 31571));
  Ogre::FixedString::~FixedString(v6, v5);
}


//======================================================================
// Ogre::SmallDecal::getBlendMode(void)
// address: 0x00181904   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::SmallDecal::getBlendMode(Ogre::SmallDecal *this)
{
  return *((_DWORD *)this + 31571);
}


//======================================================================
// Ogre::SmallDecal::show(bool)
// address: 0x00181910   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::SmallDecal::show(int this, bool a2)
{
  *(_BYTE *)(this + 126332) = a2;
  return this;
}


//======================================================================
// Ogre::SmallDecal::BuildDecal(Ogre::GameTerrainScene *)
// address: 0x0018191C   size: 0x180 (384 bytes)
//======================================================================
float __fastcall Ogre::SmallDecal::BuildDecal(float this, Ogre::GameTerrainScene *a2)
{
  float v2; // r4
  int j; // r3
  int v4; // r5
  int v5; // r5
  int i; // [sp+Ch] [bp-28h]
  int v7; // [sp+18h] [bp-1Ch]
  float v8; // [sp+24h] [bp-10h]
  float v9; // [sp+28h] [bp-Ch]
  float v10; // [sp+2Ch] [bp-8h]

  v2 = this;
  if ( *(_BYTE *)(LODWORD(this) + 126332) != 0 )
  {
    v8 = (float)*(int *)(LODWORD(this) + 8) / 10.0;
    v9 = (float)*(int *)(LODWORD(this) + 12) / 10.0;
    this = (float)*(int *)(LODWORD(this) + 16) / 10.0;
    v10 = (float)*(int *)(LODWORD(v2) + 16) / 10.0;
    for ( i = 0; *(_DWORD *)(LODWORD(v2) + 126272) >= i; ++i )
    {
      for ( j = 0; ; ++j )
      {
        v4 = *(_DWORD *)(LODWORD(v2) + 126272);
        if ( v4 < j )
          break;
        v7 = 12 * ((v4 + 1) * i + j);
        *(float *)(*(_DWORD *)(LODWORD(v2) + 126308) + v7) = (float)(v8
                                                                   + (float)((float)(*(float *)(LODWORD(v2) + 126268)
                                                                                   * (float)i)
                                                                           / (float)v4))
                                                           - (float)(*(float *)(LODWORD(v2) + 126268) * 0.5);
        *(float *)(*(_DWORD *)(LODWORD(v2) + 126308) + v7 + 8) = (float)(v10
                                                                       + (float)((float)(*(float *)(LODWORD(v2) + 126268)
                                                                                       * (float)j)
                                                                               / (float)*(int *)(LODWORD(v2) + 126272)))
                                                               - (float)(*(float *)(LODWORD(v2) + 126268) * 0.5);
        *(float *)(*(_DWORD *)(LODWORD(v2) + 126308) + v7 + 4) = (float)((float)(int)v9 + 10.0)
                                                               + (float)((float)Ogre::SmallDecal::ms_index * 0.4);
        v5 = 8 * ((v4 + 1) * i + j);
        *(float *)(*(_DWORD *)(LODWORD(v2) + 126312) + v5) = (float)i / (float)*(int *)(LODWORD(v2) + 126272);
        this = (float)j / (float)*(int *)(LODWORD(v2) + 126272);
        *(float *)(*(_DWORD *)(LODWORD(v2) + 126312) + v5 + 4) = this;
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::SmallDecal::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x00181C90   size: 0x18 (24 bytes)
//======================================================================
int __fastcall Ogre::SmallDecal::render(int this, Ogre::DynamicBufferPool **a2, const Ogre::ShaderEnvData *a3)
{
  if ( *(_BYTE *)(this + 126332) != 0 && *(_DWORD *)(this + 126324) != 0 )
    *(float *)&this = sub_181ABC(this, a2, a3);
  return this;
}


//======================================================================
// Ogre::SmallDecal::rebuildGrid(void)
// address: 0x00181CB0   size: 0x18C (396 bytes)
//======================================================================
float __fastcall Ogre::SmallDecal::rebuildGrid(Ogre::SmallDecal *this)
{
  char *WorldMatrix; // r5
  float result; // r0
  int v4; // r6
  int i; // r6
  int v6; // r2
  int v7; // r6
  int v8; // r1
  int v9; // r5
  int v10; // r1
  _WORD *v11; // r5
  _WORD *v12; // r3
  int j; // r2
  __int16 v14; // r7
  __int16 v15; // r5
  int v16; // [sp+Ch] [bp-28h]
  int v17; // [sp+10h] [bp-24h]
  float v18; // [sp+24h] [bp-10h]
  float v19; // [sp+28h] [bp-Ch]

  WorldMatrix = Ogre::MovableObject::getWorldMatrix(this);
  v18 = (float)(int)(float)(*((float *)WorldMatrix + 12) * 10.0) / 10.0;
  result = (float)(int)(float)(*((float *)WorldMatrix + 14) * 10.0) / 10.0;
  v4 = 0;
  v19 = result;
  while ( 1 )
  {
    v16 = v4;
    if ( *((_DWORD *)this + 31568) < v4 )
      break;
    for ( i = 0; ; i = v17 + 1 )
    {
      v17 = i;
      v6 = i;
      v7 = *((_DWORD *)this + 31568);
      if ( v7 < v6 )
        break;
      v8 = 12 * ((v7 + 1) * v16 + v17);
      *(float *)(*((_DWORD *)this + 31577) + v8) = (float)(v18
                                                         + (float)((float)(*((float *)this + 31567) * (float)v16)
                                                                 / (float)v7))
                                                 - (float)(*((float *)this + 31567) * 0.5);
      *(float *)(*((_DWORD *)this + 31577) + v8 + 8) = (float)(v19
                                                             + (float)((float)(*((float *)this + 31567) * (float)v17)
                                                                     / (float)*((int *)this + 31568)))
                                                     - (float)(*((float *)this + 31567) * 0.5);
      v9 = 8 * ((v7 + 1) * v16 + v17);
      *(float *)(*((_DWORD *)this + 31578) + v9) = (float)v16 / (float)*((int *)this + 31568);
      result = (float)v17 / (float)*((int *)this + 31568);
      *(float *)(*((_DWORD *)this + 31578) + v9 + 4) = result;
    }
    v4 = v16 + 1;
  }
  v10 = 0;
  v11 = *((_WORD **)this + 31579);
  while ( v10 < *((_DWORD *)this + 31568) )
  {
    v12 = v11;
    for ( j = 0; ; ++j )
    {
      v11 = v12;
      result = *((float *)this + 31568);
      if ( j >= SLODWORD(result) )
        break;
      v14 = j + (LOWORD(result) + 1) * v10;
      v12[1] = v14 + 1;
      v15 = v14 + 1 + LOWORD(result) + 1;
      *v12 = v14;
      v12[2] = v15;
      v12[3] = v14;
      v12[4] = v15;
      v12[5] = v14 + LOWORD(result) + 1;
      v12 += 6;
    }
    ++v10;
  }
  return result;
}


//======================================================================
// Ogre::SmallDecal::setWidth(float)
// address: 0x00181E54   size: 0xC (12 bytes)
//======================================================================
float __fastcall Ogre::SmallDecal::setWidth(Ogre::SmallDecal *this, float a2)
{
  *((float *)this + 31567) = a2;
  return Ogre::SmallDecal::rebuildGrid(this);
}


//======================================================================
// Ogre::SmallDecal::setWidthGridNum(int)
// address: 0x00181E64   size: 0x9E (158 bytes)
//======================================================================
float __fastcall Ogre::SmallDecal::setWidthGridNum(Ogre::SmallDecal *this, int a2)
{
  int v3; // r1
  void *v4; // r0
  void *v5; // r0
  void *v6; // r0
  unsigned int v7; // r3
  unsigned int v8; // r0
  unsigned int v9; // r0
  unsigned int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r0

  *((_DWORD *)this + 31568) = a2;
  *((_DWORD *)this + 31580) = (a2 + 1) * (a2 + 1);
  v3 = 2 * a2 * a2;
  *((_DWORD *)this + 31581) = v3;
  *((_DWORD *)this + 31582) = 3 * v3;
  v4 = *((void **)this + 31577);
  if ( v4 != nullptr )
  {
    operator delete[](v4);
    v5 = *((void **)this + 31578);
    if ( v5 != nullptr )
      operator delete[](v5);
    v6 = *((void **)this + 31579);
    if ( v6 != nullptr )
      operator delete[](v6);
  }
  v7 = *((_DWORD *)this + 31580);
  if ( v7 > 0xAA00000 )
    v8 = -1;
  else
    v8 = 12 * v7;
  *((_DWORD *)this + 31577) = operator new[](v8);
  v9 = *((_DWORD *)this + 31580);
  if ( v9 > 0xFE00000 )
    v10 = -1;
  else
    v10 = 8 * v9;
  *((_DWORD *)this + 31578) = operator new[](v10);
  v11 = *((_DWORD *)this + 31582);
  if ( v11 > 0x3F800000 )
    v12 = -1;
  else
    v12 = 2 * v11;
  *((_DWORD *)this + 31579) = operator new[](v12);
  return Ogre::SmallDecal::rebuildGrid(this);
}


//======================================================================
// Ogre::SmallDecal::SmallDecal(void)
// address: 0x00181F20   size: 0x10A (266 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre10SmallDecalC1Ev'
Ogre::SmallDecal *__fastcall Ogre::SmallDecal::SmallDecal(Ogre::SmallDecal *this)
{
  int v2; // r2
  Ogre::Material *v3; // r7
  void *v4; // r1
  Ogre::FixedString *v5; // r2
  int v6; // r2
  int v7; // r2
  Ogre::FixedString *v9[2]; // [sp+14h] [bp-8h] BYREF

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_457BA0;
  *((_DWORD *)this + 63) = off_457C10;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 31574);
  Ogre::VertexFormat::addElement((int *)this + 31574, 2u, 1u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 31574, 4u, 5u, 0, 0, -1);
  Ogre::VertexFormat::addElement((int *)this + 31574, 1u, 7u, 0, 0, -1);
  *((_DWORD *)this + 31569) = (*(int (__fastcall **)(int, char *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                                 + 36))(
                                Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                                (char *)this + 126296);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v9, (Ogre::FixedString *)"dirdecal", v2);
  v3 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v3, (const Ogre::FixedString *)v9);
  *((_DWORD *)this + 31570) = v3;
  Ogre::FixedString::~FixedString(v9, v4);
  *((_DWORD *)this + 31571) = 0;
  Ogre::SmallDecal::setBlendMode(this, 1, v5);
  *((_DWORD *)this + 31577) = 0;
  *((_DWORD *)this + 31578) = 0;
  *((_DWORD *)this + 31579) = 0;
  *((_DWORD *)this + 31572) = 0;
  *((_DWORD *)this + 31573) = 0;
  Ogre::SmallDecal::setWidthGridNum(this, 4);
  Ogre::SmallDecal::setWidth(this, 145.0);
  v6 = Ogre::SmallDecal::ms_index;
  *((_DWORD *)this + 31584) = Ogre::SmallDecal::ms_index;
  v7 = v6 + 1;
  if ( v7 > 10 )
    Ogre::SmallDecal::ms_index = 0;
  else
    Ogre::SmallDecal::ms_index = v7;
  *((_BYTE *)this + 126332) = 1;
  return this;
}


//======================================================================
// Ogre::SmallDecal::newObject(void)
// address: 0x00182070   size: 0x12 (18 bytes)
//======================================================================
Ogre::SmallDecal *__fastcall Ogre::SmallDecal::newObject(Ogre::SmallDecal *this)
{
  Ogre::SmallDecal *v1; // r4

  v1 = (Ogre::SmallDecal *)operator new(0x1ED84u);
  Ogre::SmallDecal::SmallDecal(v1);
  return v1;
}

