// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TerrainTileSource

//======================================================================
// Ogre::TerrainTileSource::getRTTI(void)const
// address: 0x00156360   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::TerrainTileSource::getRTTI(Ogre::TerrainTileSource *this)
{
  return &Ogre::TerrainTileSource::m_RTTI;
}


//======================================================================
// Ogre::TerrainTileSource::getLengthX(void)
// address: 0x00156382   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::TerrainTileSource::getLengthX(Ogre::TerrainTileSource *this)
{
  return 0;
}


//======================================================================
// Ogre::TerrainTileSource::getLengthZ(void)
// address: 0x00156386   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::TerrainTileSource::getLengthZ(Ogre::TerrainTileSource *this)
{
  return 0;
}


//======================================================================
// Ogre::TerrainTileSource::getGridPos(int,int)
// address: 0x0015638A   size: 0x88 (136 bytes)
//======================================================================
_DWORD *__fastcall Ogre::TerrainTileSource::getGridPos(_DWORD *this, int a2, int a3, int a4)
{
  int v5; // r4
  int v6; // r7
  int v7; // r1
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // [sp+4h] [bp-10h]
  int v11; // [sp+8h] [bp-Ch]

  v5 = *(unsigned __int8 *)(a2 + 20) - 1;
  v10 = a3 / v5;
  v6 = a4 / v5;
  v11 = a3 % v5;
  v7 = a4 % v5;
  v8 = *(unsigned __int8 *)(a2 + 18);
  if ( a3 / v5 == v8 && v11 == 0 )
  {
    v11 = v5;
    --v10;
  }
  if ( v6 == *(unsigned __int8 *)(a2 + 19) && v7 == 0 )
  {
    --v6;
    v7 = v5;
  }
  v9 = (_DWORD *)(*(_DWORD *)(*(_DWORD *)(4 * (v8 * v6 + v10) + *(_DWORD *)(a2 + 100)) + 124) + 36 * (v11 + 33 * v7));
  *this = *v9;
  *(this + 1) = v9[1];
  *(this + 2) = v9[2];
  return this;
}


//======================================================================
// Ogre::TerrainTileSource::getHeight(int,int,int *)
// address: 0x00156412   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::TerrainTileSource::getHeight(Ogre::TerrainTileSource *this, int a2, int a3, int *a4)
{
  return 0;
}


//======================================================================
// Ogre::TerrainTileSource::getHeight(float,float,float *,Ogre::Vector3 *,float *)
// address: 0x00157074   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall Ogre::TerrainTileSource::getHeight(
        Ogre::TerrainTileSource *this,
        float a2,
        float a3,
        float *a4,
        Ogre::Vector3 *a5,
        float *a6)
{
  int v6; // r5
  float v7; // r6
  int v9; // r7
  int v10; // r0
  int v11; // r6
  int v12; // r0
  unsigned int v13; // r6
  float v15; // [sp+10h] [bp-1Ch]
  float v16; // [sp+20h] [bp-Ch]
  int v17; // [sp+24h] [bp-8h]

  v6 = *((_DWORD *)this + 25);
  v7 = *(float *)(*(_DWORD *)v6 + 64);
  v15 = *(float *)(*(_DWORD *)v6 + 72);
  v16 = *(float *)(*(_DWORD *)v6 + 44);
  v9 = 0;
  if ( a2 >= v7 && a3 >= v15 )
  {
    v10 = (int)(float)((float)(a2 - v7) / v16);
    v11 = v10;
    v17 = *((unsigned __int8 *)this + 18);
    if ( v10 < v17 )
    {
      v12 = (int)(float)((float)(a3 - v15) / v16);
      if ( v12 < *((unsigned __int8 *)this + 19) )
      {
        v13 = v12 * v17 + v11;
        if ( v13 >= (*((_DWORD *)this + 26) - v6) >> 2 )
        {
          if ( a4 != nullptr )
            *a4 = 0.0;
        }
        else
        {
          return Ogre::TerrainBlockSource::getHeight(
                   *(Ogre::TerrainBlockSource **)(4 * v13 + v6),
                   a2,
                   a3,
                   a4,
                   nullptr,
                   a5,
                   a6);
        }
      }
    }
  }
  return v9;
}


//======================================================================
// Ogre::TerrainTileSource::getStartPos(Ogre::Vector3 *)
// address: 0x0015711A   size: 0x3A (58 bytes)
//======================================================================
int __fastcall Ogre::TerrainTileSource::getStartPos(Ogre::TerrainTileSource *this, Ogre::Vector3 *a2)
{
  int v3; // r2
  float v4; // r1
  float *v5; // r3
  float v6; // r2

  if ( a2 == nullptr )
    return 0;
  v3 = *((_DWORD *)this + 25);
  if ( v3 == *((_DWORD *)this + 26) )
    return 0;
  v4 = *(float *)(*(_DWORD *)v3 + 64);
  *(float *)a2 = v4;
  v5 = (float *)((char *)a2 + 4);
  v6 = *(float *)(**((_DWORD **)this + 25) + 72);
  v5[1] = v6;
  return Ogre::TerrainBlockSource::getHeight(
           **((Ogre::TerrainBlockSource ***)this + 25),
           v4,
           v6,
           v5,
           nullptr,
           nullptr,
           nullptr);
}


//======================================================================
// Ogre::TerrainTileSource::TerrainTileSource(void)
// address: 0x00157174   size: 0x7A (122 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17TerrainTileSourceC1Ev'
Ogre::TerrainTileSource *__fastcall Ogre::TerrainTileSource::TerrainTileSource(Ogre::TerrainTileSource *this)
{
  _DWORD *v2; // r3

  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
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
  *((_DWORD *)this + 30) = 0;
  *(_DWORD *)this = &off_456648;
  *((_DWORD *)this + 31) = (char *)this + 124;
  *((_DWORD *)this + 32) = (char *)this + 124;
  v2 = (_DWORD *)((char *)this + 132);
  do
  {
    *v2 = v2;
    v2[1] = v2;
    v2 += 2;
  }
  while ( v2 != (_DWORD *)((char *)this + 932) );
  do
  {
    *v2 = v2;
    v2[1] = v2;
    v2 += 2;
  }
  while ( v2 != (_DWORD *)((char *)this + 1732) );
  *((_DWORD *)this + 433) = 0;
  j_memset((char *)this + 16, 0, 0x24u);
  return this;
}


//======================================================================
// Ogre::TerrainTileSource::newObject(void)
// address: 0x001571F8   size: 0x14 (20 bytes)
//======================================================================
Ogre::TerrainTileSource *__fastcall Ogre::TerrainTileSource::newObject(Ogre::TerrainTileSource *this)
{
  Ogre::TerrainTileSource *v1; // r4

  v1 = (Ogre::TerrainTileSource *)operator new(0x6C8u);
  Ogre::TerrainTileSource::TerrainTileSource(v1);
  return v1;
}


//======================================================================
// Ogre::TerrainTileSource::renderBeachMeshes(void)
// address: 0x0015720C   size: 0x140 (320 bytes)
//======================================================================
int __fastcall Ogre::TerrainTileSource::renderBeachMeshes(int this)
{
  _DWORD *v1; // r5
  float *v2; // r4
  int v3; // r1
  int v4; // r3
  float v5; // r0
  _DWORD *v6; // r5
  float *v7; // r7
  int v8; // r1
  int v9; // r3
  float v10; // r0
  float v11; // [sp+4h] [bp-68h]
  _DWORD *v12; // [sp+8h] [bp-64h]
  unsigned int i; // [sp+10h] [bp-5Ch]
  Ogre::SceneDebugger *v14; // [sp+14h] [bp-58h]
  int v15; // [sp+18h] [bp-54h]
  float v16; // [sp+1Ch] [bp-50h]
  int v17; // [sp+20h] [bp-4Ch] BYREF
  int v18; // [sp+24h] [bp-48h]
  int v19; // [sp+28h] [bp-44h]
  int v20; // [sp+2Ch] [bp-40h] BYREF
  int v21; // [sp+30h] [bp-3Ch]
  int v22; // [sp+34h] [bp-38h]
  float v23[3]; // [sp+38h] [bp-34h] BYREF
  float v24[3]; // [sp+44h] [bp-28h] BYREF
  _DWORD v25[3]; // [sp+50h] [bp-1Ch] BYREF
  _DWORD v26[4]; // [sp+5Ch] [bp-10h] BYREF

  v15 = this;
  v14 = (Ogre::SceneDebugger *)Ogre::Singleton<Ogre::SceneDebugger>::ms_Singleton;
  v12 = (_DWORD *)(this + 132);
  for ( i = 0; i < *(_DWORD *)(v15 + 1732); ++i )
  {
    v1 = (_DWORD *)*v12;
    v2 = (float *)v12[200];
    v3 = *(_DWORD *)(*v12 + 16);
    v4 = *(_DWORD *)(*v12 + 12);
    v17 = *(_DWORD *)(*v12 + 8);
    v19 = v3;
    v18 = v4;
    Ogre::WorldPos::WorldPos(v25, (const Ogre::Vector3 *)&v17);
    v11 = v2[3] * 400.0;
    v5 = v2[2] * 400.0;
    v23[2] = v2[4] * 400.0;
    v23[0] = v5;
    v23[1] = v11;
    Ogre::operator+(v24, (float *)&v17, v23);
    Ogre::WorldPos::WorldPos(v26, (const Ogre::Vector3 *)v24);
    this = Ogre::SceneDebugger::renderLine(v14, (const Ogre::WorldPos *)v25, (const Ogre::WorldPos *)v26, 0xFF800000);
    v6 = (_DWORD *)*v1;
    v7 = *(float **)v2;
    while ( v6 != v12 )
    {
      v8 = v6[2];
      v9 = v6[4];
      v21 = v6[3];
      v20 = v8;
      v22 = v9;
      Ogre::WorldPos::WorldPos(v25, (const Ogre::Vector3 *)&v17);
      Ogre::WorldPos::WorldPos(v26, (const Ogre::Vector3 *)&v20);
      Ogre::SceneDebugger::renderLine(v14, (const Ogre::WorldPos *)v25, (const Ogre::WorldPos *)v26, 0xFF800000);
      Ogre::WorldPos::WorldPos(v25, (const Ogre::Vector3 *)&v20);
      v16 = v7[3] * 400.0;
      v10 = v7[2] * 400.0;
      v23[2] = v7[4] * 400.0;
      v23[1] = v16;
      v23[0] = v10;
      Ogre::operator+(v24, (float *)&v20, v23);
      Ogre::WorldPos::WorldPos(v26, (const Ogre::Vector3 *)v24);
      this = Ogre::SceneDebugger::renderLine(v14, (const Ogre::WorldPos *)v25, (const Ogre::WorldPos *)v26, 0xFF800000);
      v18 = v21;
      v17 = v20;
      v19 = v22;
      v6 = (_DWORD *)*v6;
      v7 = *(float **)v7;
    }
    v12 += 2;
  }
  return this;
}


//======================================================================
// Ogre::TerrainTileSource::loadModel(int)
// address: 0x001573F8   size: 0x70 (112 bytes)
//======================================================================
int __fastcall Ogre::TerrainTileSource::loadModel(Ogre::TerrainTileSource *this, unsigned __int16 a2)
{
  char *v2; // r5
  Ogre::ResourceManager *v3; // r6
  int v4; // r5
  void *v5; // r1
  Ogre::FixedString *v7; // [sp+0h] [bp-108h] BYREF
  char s[256]; // [sp+4h] [bp-104h] BYREF

  v2 = *(char **)(4 * a2 + *((_DWORD *)this + 16));
  if ( j_strchr(v2, 46) == nullptr )
  {
    j_snprintf(s, 0x100u, "%s.omod", v2);
    v2 = s;
  }
  v3 = (Ogre::ResourceManager *)Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton;
  v7 = (Ogre::FixedString *)Ogre::FixedString::insert(
                              (Ogre::FixedString *)v2,
                              (const char *)0xFFFFFFFF,
                              (int)&Ogre::Singleton<Ogre::ResourceManager>::ms_Singleton);
  v4 = Ogre::ResourceManager::blockLoad(v3, (const Ogre::FixedString *)&v7, 0);
  Ogre::FixedString::release(v7, v5);
  return v4;
}


//======================================================================
// Ogre::TerrainTileSource::loadModelPath(int,Ogre::TerrainModelType,Ogre::FixedString &)
// address: 0x00157474   size: 0x54 (84 bytes)
//======================================================================
int __fastcall Ogre::TerrainTileSource::loadModelPath(int a1, unsigned __int16 a2, int a3, int a4)
{
  char *v5; // r5
  char s[256]; // [sp+4h] [bp-108h] BYREF

  v5 = *(char **)(4 * a2 + *(_DWORD *)(a1 + 64));
  if ( j_strchr(v5, 46) == nullptr )
  {
    j_snprintf(s, 0x100u, "%s.omod", v5);
    v5 = s;
  }
  Ogre::FixedString::operator=(a4, v5);
  return 0;
}


//======================================================================
// Ogre::TerrainTileSource::buildPhysicsScene2(Ogre::PhysicsScene2 *)
// address: 0x001574D0   size: 0xCE (206 bytes)
//======================================================================
Ogre::BaseObject *__fastcall Ogre::TerrainTileSource::buildPhysicsScene2(
        Ogre::BaseObject *this,
        Ogre::PhysicsScene2 *a2)
{
  unsigned int i; // r1
  int v3; // r3
  int v4; // r6
  Ogre::BaseObject *v5; // r5
  int *v6; // r4
  int v7; // r3
  int v8; // r3
  Ogre::BSPData *v9; // r6
  unsigned int v10; // [sp+4h] [bp-20h]
  Ogre::TerrainTileSource *v11; // [sp+8h] [bp-1Ch]
  _DWORD v13[4]; // [sp+14h] [bp-10h] BYREF

  v11 = this;
  for ( i = 0; ; i = v10 + 1 )
  {
    v10 = i;
    v3 = *((_DWORD *)v11 + 19);
    if ( i >= (*((_DWORD *)v11 + 20) - v3) >> 2 )
      break;
    v4 = *(_DWORD *)(4 * i + v3);
    this = (Ogre::BaseObject *)Ogre::TerrainTileSource::loadModel(v11, *(_DWORD *)(v4 + 80));
    v5 = this;
    if ( this != nullptr )
    {
      this = (Ogre::BaseObject *)Ogre::BaseObject::isKindOf(this, (const Ogre::RuntimeClass *)&Ogre::ModelData::m_RTTI);
      if ( this != nullptr )
      {
        if ( *((_DWORD *)v5 + 11) != 0 )
        {
          v6 = (int *)operator new(0x1C8u);
          Ogre::Model::Model((Ogre::Model *)v6, v5);
          Ogre::WorldPos::WorldPos(v13, (const Ogre::Vector3 *)(v4 + 44));
          v6[2] = v13[0];
          v6[3] = v13[1];
          v7 = *v6;
          v6[4] = v13[2];
          (*(void (__fastcall **)(int *))(v7 + 64))(v6);
          v8 = *(_DWORD *)(v4 + 68);
          v6[9] = v8;
          v6[10] = v8;
          v6[11] = v8;
          (*(void (__fastcall **)(int *))(*v6 + 64))(v6);
          Ogre::Quaternion::setEulerAngle(
            (Ogre::Quaternion *)(v6 + 5),
            *(float *)(v4 + 56),
            *(float *)(v4 + 60),
            *(float *)(v4 + 64));
          (*(void (__fastcall **)(int *))(*v6 + 64))(v6);
          v9 = *((Ogre::BSPData **)v5 + 11);
          if ( *((_BYTE *)v6 + 180) != 0 )
            (*(void (__fastcall **)(int *))(*v6 + 68))(v6);
          Ogre::PhysicsScene2::addStaticBSPData(a2, v9, (const Ogre::Matrix4 *)(v6 + 12));
          Ogre::BaseObject::release(v6);
        }
        this = (Ogre::BaseObject *)Ogre::BaseObject::release(v5);
      }
    }
  }
  return this;
}


//======================================================================
// Ogre::TerrainTileSource::~TerrainTileSource()
// address: 0x00157628   size: 0xAE (174 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17TerrainTileSourceD1Ev'
void __fastcall Ogre::TerrainTileSource::~TerrainTileSource(Ogre::TerrainTileSource *this)
{
  unsigned int v2; // r5
  int v3; // r3
  _DWORD **i; // r5
  void *v5; // r0
  void *v6; // r0
  void *v7; // r0
  void *v8; // r0
  void *v9; // r1

  v2 = 0;
  *(_DWORD *)this = &off_456648;
  Ogre::DeletePointerArray<Ogre::TileModel>((int *)this + 19);
  Ogre::DeletePointerArray<Ogre::TileModel>((int *)this + 22);
  while ( 1 )
  {
    v3 = *((_DWORD *)this + 25);
    if ( v2 >= (*((_DWORD *)this + 26) - v3) >> 2 )
      break;
    Ogre::BaseObject::release(*(_DWORD **)(4 * v2++ + v3));
  }
  *((_DWORD *)this + 26) = v3;
  for ( i = (_DWORD **)((char *)this + 1732);
        i != (_DWORD **)((char *)this + 932);
        std::_List_base<Ogre::Vector3>::_M_clear(i) )
  {
    i -= 2;
  }
  while ( i != (_DWORD **)((char *)this + 132) )
  {
    i -= 2;
    std::_List_base<Ogre::Vector3>::_M_clear(i);
  }
  std::_List_base<Ogre::Vector3>::_M_clear((_DWORD **)this + 31);
  v5 = *((void **)this + 28);
  if ( v5 != nullptr )
    operator delete(v5);
  v6 = *((void **)this + 25);
  if ( v6 != nullptr )
    operator delete(v6);
  v7 = *((void **)this + 22);
  if ( v7 != nullptr )
    operator delete(v7);
  v8 = *((void **)this + 19);
  if ( v8 != nullptr )
    operator delete(v8);
  std::vector<std::string>::~vector((void **)this + 16);
  std::vector<std::string>::~vector((void **)this + 13);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v9);
}


//======================================================================
// Ogre::TerrainTileSource::~TerrainTileSource()
// address: 0x001576E0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::TerrainTileSource::~TerrainTileSource(Ogre::TerrainTileSource *this)
{
  Ogre::TerrainTileSource::~TerrainTileSource(this);
  operator delete(this);
}


//======================================================================
// Ogre::TerrainTileSource::initVertexData(void)
// address: 0x00157B08   size: 0x22 (34 bytes)
//======================================================================
void __fastcall Ogre::TerrainTileSource::initVertexData(Ogre::TerrainTileSource *this)
{
  unsigned int i; // r4
  int v3; // r3

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 25);
    if ( i >= (*((_DWORD *)this + 26) - v3) >> 2 )
      break;
    Ogre::TerrainBlockSource::initVertexData(*(Ogre::TerrainBlockSource **)(4 * i + v3), COERCE_FLOAT(2));
  }
}


//======================================================================
// Ogre::TerrainTileSource::buildBeachMeshes(void)
// address: 0x00157B2C   size: 0x9B0 (2480 bytes)
//======================================================================
void __fastcall Ogre::TerrainTileSource::buildBeachMeshes(Ogre::TerrainTileSource *this)
{
  int v2; // r5
  char *v3; // r4
  float v4; // r1
  unsigned int v5; // r6
  unsigned int v6; // r0
  int v7; // r3
  int v8; // r4
  int v9; // r1
  int v10; // r4
  int v11; // r3
  unsigned int v12; // r6
  int v13; // r4
  int v14; // r3
  int v15; // r1
  int v16; // r4
  int v17; // r2
  int v18; // r4
  char *v19; // r3
  int v20; // r0
  float v21; // r2
  float v22; // r5
  void *v23; // r4
  int v24; // r1
  int v25; // r3
  float v26; // r3
  float v27; // r5
  int v28; // r3
  float v29; // r1
  int v30; // r1
  int *v31; // r4
  int v32; // r2
  int v33; // r3
  int v34; // r3
  float v35; // r6
  float v36; // r5
  float v37; // r4
  _DWORD *v38; // r4
  float *v39; // r5
  float *v40; // r4
  float *v41; // r2
  float *v42; // r1
  int v43; // r0
  float **v44; // r5
  float *v45; // r4
  char *v46; // r5
  int v47; // [sp+18h] [bp-134h]
  _BOOL4 v48; // [sp+40h] [bp-10Ch]
  float *v49; // [sp+40h] [bp-10Ch]
  unsigned int i; // [sp+44h] [bp-108h]
  unsigned int j; // [sp+44h] [bp-108h]
  int v52; // [sp+44h] [bp-108h]
  int *v53; // [sp+44h] [bp-108h]
  unsigned int m; // [sp+44h] [bp-108h]
  unsigned int v55; // [sp+48h] [bp-104h]
  int v56; // [sp+48h] [bp-104h]
  float *v57; // [sp+48h] [bp-104h]
  float v58; // [sp+4Ch] [bp-100h]
  float v59; // [sp+4Ch] [bp-100h]
  float *v60; // [sp+4Ch] [bp-100h]
  unsigned int v61; // [sp+50h] [bp-FCh]
  float v62; // [sp+50h] [bp-FCh]
  float v63; // [sp+50h] [bp-FCh]
  int v64; // [sp+50h] [bp-FCh]
  float *v65; // [sp+50h] [bp-FCh]
  int v66; // [sp+50h] [bp-FCh]
  unsigned int v67; // [sp+54h] [bp-F8h]
  unsigned int v68; // [sp+54h] [bp-F8h]
  float *v69; // [sp+54h] [bp-F8h]
  float v70; // [sp+5Ch] [bp-F0h]
  float v71; // [sp+5Ch] [bp-F0h]
  int *v72; // [sp+60h] [bp-ECh]
  int k; // [sp+60h] [bp-ECh]
  float v74; // [sp+70h] [bp-DCh] BYREF
  float v75; // [sp+74h] [bp-D8h]
  float v76; // [sp+78h] [bp-D4h]
  float v77; // [sp+7Ch] [bp-D0h] BYREF
  float v78; // [sp+80h] [bp-CCh]
  float v79; // [sp+84h] [bp-C8h]
  float v80[3]; // [sp+88h] [bp-C4h] BYREF
  int v81; // [sp+94h] [bp-B8h] BYREF
  int v82; // [sp+98h] [bp-B4h]
  int v83; // [sp+9Ch] [bp-B0h]
  float v84; // [sp+A0h] [bp-ACh] BYREF
  float v85; // [sp+A4h] [bp-A8h]
  float v86; // [sp+A8h] [bp-A4h]
  float v87; // [sp+ACh] [bp-A0h] BYREF
  float v88; // [sp+B0h] [bp-9Ch]
  float v89; // [sp+B4h] [bp-98h]
  float v90; // [sp+B8h] [bp-94h] BYREF
  float v91; // [sp+BCh] [bp-90h]
  float v92; // [sp+C0h] [bp-8Ch]
  float v93; // [sp+C4h] [bp-88h] BYREF
  float v94; // [sp+C8h] [bp-84h]
  float v95; // [sp+CCh] [bp-80h]
  float v96[3]; // [sp+D0h] [bp-7Ch] BYREF
  float v97; // [sp+DCh] [bp-70h] BYREF
  float v98; // [sp+E0h] [bp-6Ch]
  float v99; // [sp+E4h] [bp-68h]
  float v100[3]; // [sp+E8h] [bp-64h] BYREF
  float v101[3]; // [sp+F4h] [bp-58h] BYREF
  float v102[3]; // [sp+100h] [bp-4Ch] BYREF
  float v103[3]; // [sp+10Ch] [bp-40h] BYREF
  float v104[3]; // [sp+118h] [bp-34h] BYREF
  float v105; // [sp+124h] [bp-28h] BYREF
  float v106; // [sp+128h] [bp-24h]
  float v107; // [sp+12Ch] [bp-20h]
  float v108[3]; // [sp+130h] [bp-1Ch] BYREF
  float v109; // [sp+13Ch] [bp-10h] BYREF
  float v110; // [sp+140h] [bp-Ch]
  float v111; // [sp+144h] [bp-8h]

  *((_DWORD *)this + 433) = 0;
  v72 = (int *)((char *)this + 124);
  std::_List_base<Ogre::Vector3>::_M_clear((_DWORD **)this + 31);
  v2 = 100;
  *((_DWORD *)this + 31) = v72;
  *((_DWORD *)this + 32) = v72;
  v3 = (char *)this + 132;
  do
  {
    --v2;
    std::_List_base<Ogre::Vector3>::_M_clear((_DWORD **)v3);
    *(_DWORD *)v3 = v3;
    *((_DWORD *)v3 + 1) = v3;
    v3 += 8;
  }
  while ( v2 != 0 );
  v5 = 0;
  v6 = (unsigned int)Ogre::Sqrt(COERCE_OGRE_((float)*(int *)(**((_DWORD **)this + 25) + 40)), v4);
  v7 = *((unsigned __int8 *)this + 18);
  *((_BYTE *)this + 20) = v6;
  v67 = v7 * (v6 - 1);
  v55 = v6 - 1;
  v61 = *((unsigned __int8 *)this + 19) * (v6 - 1);
  Ogre::TerrainTileSource::initVertexData(this);
  do
  {
    for ( i = 0; i != v67; ++i )
    {
      v8 = v5 / v55;
      if ( v5 == v61 )
        v8 = *((unsigned __int8 *)this + 19) - 1;
      v9 = *((_DWORD *)this + 25);
      v10 = 4 * (v8 * *((unsigned __int8 *)this + 18) + i / v55);
      if ( *(_BYTE *)(*(_DWORD *)(v10 + v9) + 56) != 0 )
      {
        v70 = *(float *)(*(_DWORD *)(v10 + v9) + 424);
        (*(void (__fastcall **)(float *, Ogre::TerrainTileSource *, unsigned int, unsigned int))(*(_DWORD *)this + 48))(
          &v109,
          this,
          i,
          v5);
        v74 = v109;
        v76 = v111;
        v11 = *(_DWORD *)this;
        v75 = v110;
        (*(void (__fastcall **)(float *, Ogre::TerrainTileSource *, unsigned int, unsigned int))(v11 + 48))(
          &v109,
          this,
          i + 1,
          v5);
        v77 = v109;
        v78 = v110;
        v79 = v111;
        if ( (float)((float)(v75 - v70) * (float)(v110 - v70)) < 0.0 )
        {
          Ogre::Lerp(
            (Ogre *)&v109,
            (const Ogre::Vector3 *)&v74,
            (const Ogre::Vector3 *)&v77,
            (float)(v70 - v75) / (float)(v110 - v75));
          v80[0] = v109;
          v80[1] = v110;
          v80[2] = v111;
          if ( v5 != 0 && v5 != v61 )
            std::list<Ogre::Vector3>::push_back((int)v72, v80);
          else
            sub_15646E(*((_DWORD *)this + 31), v80);
        }
      }
    }
    ++v5;
  }
  while ( v5 <= v61 );
  v12 = 0;
  do
  {
    for ( j = 0; j != v61; ++j )
    {
      v13 = v12 / v55;
      v14 = *((unsigned __int8 *)this + 18);
      if ( v12 == v67 )
        v13 = v14 - 1;
      v15 = *((_DWORD *)this + 25);
      v16 = 4 * (v13 + v14 * (j / v55));
      if ( *(_BYTE *)(*(_DWORD *)(v16 + v15) + 56) != 0 )
      {
        v71 = *(float *)(*(_DWORD *)(v16 + v15) + 424);
        (*(void (__fastcall **)(float *, Ogre::TerrainTileSource *, unsigned int, unsigned int))(*(_DWORD *)this + 48))(
          &v109,
          this,
          v12,
          j);
        v74 = v109;
        v76 = v111;
        v17 = *(_DWORD *)this;
        v75 = v110;
        (*(void (__fastcall **)(float *, Ogre::TerrainTileSource *, unsigned int, unsigned int))(v17 + 48))(
          &v109,
          this,
          v12,
          j + 1);
        v77 = v109;
        v78 = v110;
        v79 = v111;
        if ( (float)((float)(v75 - v71) * (float)(v110 - v71)) < 0.0 )
        {
          Ogre::Lerp(
            (Ogre *)&v109,
            (const Ogre::Vector3 *)&v74,
            (const Ogre::Vector3 *)&v77,
            (float)(v71 - v75) / (float)(v110 - v75));
          v80[0] = v109;
          v80[1] = v110;
          v80[2] = v111;
          if ( v12 != 0 && v12 != v67 )
            std::list<Ogre::Vector3>::push_back((int)v72, v80);
          else
            sub_15646E(*((_DWORD *)this + 31), v80);
        }
      }
    }
    ++v12;
  }
  while ( v12 <= v67 );
  v96[0] = 0.0;
  v96[1] = 1.0;
  v96[2] = 0.0;
  while ( 1 )
  {
    v18 = *((_DWORD *)this + 31);
    if ( (int *)v18 == v72 )
      break;
    v19 = (char *)this + 8 * *((_DWORD *)this + 433) + 128;
    v20 = *((_DWORD *)v19 + 1);
    v52 = 0;
    v56 = 0;
    if ( (char *)v20 == v19 + 4 )
    {
      v21 = *(float *)(v18 + 16);
      v22 = *(float *)(v18 + 12);
      v84 = *(float *)(v18 + 8);
      v86 = v21;
      v87 = v84;
      v88 = v22;
      v89 = v21;
      v85 = v22;
      std::list<Ogre::Vector3>::push_back(v20, &v87);
      v23 = *((void **)this + 31);
      sub_392254(v23);
      operator delete(v23);
    }
    else
    {
      do
      {
        v24 = *(_DWORD *)(v18 + 16);
        v25 = *(_DWORD *)(v18 + 12);
        v81 = *(_DWORD *)(v18 + 8);
        v83 = v24;
        v82 = v25;
        Ogre::operator-(&v109, (float *)&v81, &v84);
        v62 = Ogre::Vector3::length((Ogre::Vector3 *)&v109);
        if ( v62 <= 220.0 )
        {
          if ( v62 >= 50.0 )
          {
            if ( (unsigned int)std::list<Ogre::Vector3>::size((_DWORD **)this + 2 * *((_DWORD *)this + 433) + 33) <= 1
              || (Ogre::operator-(v104, &v90, &v84),
                  Ogre::Normalize((Ogre *)&v105, (const Ogre::Vector3 *)v104),
                  Ogre::operator-(v108, (float *)&v81, &v84),
                  Ogre::Normalize((Ogre *)&v109, (const Ogre::Vector3 *)v108),
                  (float)((float)((float)(v105 * v109) + (float)(v106 * v110)) + (float)(v107 * v111)) <= 0.4) )
            {
              if ( v56 != 0 )
              {
                Ogre::operator-(&v109, (float *)(v52 + 8), &v84);
                if ( v62 < Ogre::Vector3::length((Ogre::Vector3 *)&v109) )
                  v52 = v18;
              }
              else
              {
                v52 = v18;
                v56 = 1;
              }
            }
          }
          else
          {
            v18 = sub_15645A((int *)v18);
          }
        }
        v18 = *(_DWORD *)v18;
      }
      while ( (int *)v18 != v72 );
      if ( v56 != 0 )
      {
        v90 = v84;
        v92 = v86;
        v26 = *(float *)(v52 + 8);
        v91 = v85;
        v63 = v26;
        v84 = v26;
        v27 = *(float *)(v52 + 16);
        v28 = *((_DWORD *)this + 433);
        v29 = *(float *)(v52 + 12);
        v86 = v27;
        v58 = v29;
        v85 = v29;
        if ( std::list<Ogre::Vector3>::size((_DWORD **)this + 2 * v28 + 33) == 1 )
        {
          v95 = v27;
          v93 = v63;
          v94 = v58;
          Ogre::operator-(v108, &v90, &v84);
          Ogre::CrossProduct(&v109, v96, v108);
          v98 = v110;
          v99 = v111;
          v97 = v109;
          Ogre::Normalize(&v97);
          v97 = v97 * 100.0;
          v98 = v98 * 100.0;
          v30 = *(_DWORD *)this;
          v99 = v99 * 100.0;
          if ( (*(int (__fastcall **)(Ogre::TerrainTileSource *, _DWORD, _DWORD, float *, _DWORD, _DWORD))(v30 + 40))(
                 this,
                 v97 + v84,
                 v99 + v86,
                 &v109,
                 0,
                 0) != 0 )
          {
            v48 = v109 < v85;
          }
          else
          {
            v48 = false;
            if ( (*(int (__fastcall **)(Ogre::TerrainTileSource *, _DWORD, _DWORD, float *, _DWORD, _DWORD))(*(_DWORD *)this + 40))(
                   this,
                   v84 - v97,
                   v86 - v99,
                   &v109,
                   0,
                   0) != 0 )
              v48 = v109 > v85;
          }
        }
        sub_15646E(*((_DWORD *)this + 2 * *((_DWORD *)this + 433) + 33), (_DWORD *)(v52 + 8));
        sub_15645A((int *)v52);
      }
      v31 = *((int **)this + 31);
      v53 = nullptr;
      v64 = 0;
      while ( v31 != v72 )
      {
        v32 = v31[3];
        v33 = v31[4];
        v81 = v31[2];
        v82 = v32;
        v83 = v33;
        Ogre::operator-(&v109, (float *)&v81, &v87);
        v59 = Ogre::Vector3::length((Ogre::Vector3 *)&v109);
        if ( v59 <= 220.0 )
        {
          if ( v59 >= 50.0 )
          {
            if ( (unsigned int)std::list<Ogre::Vector3>::size((_DWORD **)this + 2 * *((_DWORD *)this + 433) + 33) <= 1
              || (Ogre::operator-(v104, &v93, &v87),
                  Ogre::Normalize((Ogre *)&v105, (const Ogre::Vector3 *)v104),
                  Ogre::operator-(v108, (float *)&v81, &v87),
                  Ogre::Normalize((Ogre *)&v109, (const Ogre::Vector3 *)v108),
                  (float)((float)((float)(v105 * v109) + (float)(v106 * v110)) + (float)(v107 * v111)) <= 0.4) )
            {
              if ( v64 != 0 )
              {
                Ogre::operator-(&v109, (float *)v53 + 2, &v87);
                if ( v59 < Ogre::Vector3::length((Ogre::Vector3 *)&v109) )
                  v53 = v31;
              }
              else
              {
                v53 = v31;
                v64 = 1;
              }
            }
          }
          else
          {
            v31 = (int *)sub_15645A(v31);
          }
        }
        v31 = (int *)*v31;
      }
      if ( v64 != 0 )
      {
        v34 = *((_DWORD *)this + 433);
        v94 = v88;
        v93 = v87;
        v95 = v89;
        v35 = *((float *)v53 + 2);
        v36 = *((float *)v53 + 3);
        v37 = *((float *)v53 + 4);
        v87 = v35;
        v88 = v36;
        v89 = v37;
        if ( std::list<Ogre::Vector3>::size((_DWORD **)this + 2 * v34 + 33) == 1 )
        {
          v91 = v36;
          v92 = v37;
          v90 = v35;
          Ogre::operator-(&v105, &v90, &v84);
          Ogre::CrossProduct(v108, v96, &v105);
          Ogre::Normalize((Ogre *)&v109, (const Ogre::Vector3 *)v108);
          v97 = v109 * 100.0;
          v98 = v110 * 100.0;
          v99 = v111 * 100.0;
          if ( (*(int (__fastcall **)(Ogre::TerrainTileSource *, _DWORD, _DWORD, float *, _DWORD, _DWORD))(*(_DWORD *)this + 40))(
                 this,
                 (float)(v109 * 100.0) + v84,
                 (float)(v111 * 100.0) + v86,
                 &v109,
                 0,
                 0) != 0 )
          {
            v48 = v109 < v85;
          }
          else
          {
            v48 = false;
            if ( (*(int (__fastcall **)(Ogre::TerrainTileSource *, _DWORD, _DWORD, float *, _DWORD, _DWORD))(*(_DWORD *)this + 40))(
                   this,
                   v84 - v97,
                   v86 - v99,
                   &v109,
                   0,
                   0) != 0 )
              v48 = v109 > v85;
          }
        }
        std::list<Ogre::Vector3>::push_back((int)this + 8 * *((_DWORD *)this + 433) + 132, v53 + 2);
        sub_15645A(v53);
      }
      else if ( v56 == 0 )
      {
        v46 = (char *)this + 8 * *((_DWORD *)this + 433) + 128;
        if ( (unsigned int)std::list<Ogre::Vector3>::size((_DWORD **)v46 + 1) <= 2 )
        {
          std::_List_base<Ogre::Vector3>::_M_clear((_DWORD **)v46 + 1);
          *((_DWORD *)v46 + 1) = v46 + 4;
          *((_DWORD *)v46 + 2) = v46 + 4;
        }
        else
        {
          if ( v48 )
            sub_392230(v46 + 4);
          ++*((_DWORD *)this + 433);
        }
      }
    }
  }
  v47 = *((_DWORD *)this + 433);
  v38 = (_DWORD *)((char *)this + 8 * v47 + 132);
  if ( (_DWORD *)*v38 != v38 && (unsigned int)std::list<Ogre::Vector3>::size((_DWORD **)this + 2 * v47 + 33) > 2 )
  {
    if ( v48 )
      sub_392230(v38);
    ++*((_DWORD *)this + 433);
  }
  v39 = (float *)((char *)this + 132);
  v68 = 0;
LABEL_78:
  if ( v68 < *((_DWORD *)this + 433) )
  {
    v40 = *(float **)v39;
    v65 = *((float **)v39 + 1);
    while ( 1 )
    {
      if ( v40 == v39 )
      {
        v39 += 2;
        ++v68;
        goto LABEL_78;
      }
      v41 = v40 + 2;
      v57 = v40 + 2;
      if ( v40 == *(float **)v39 )
        break;
      if ( v40 == v65 )
      {
        v42 = v40 + 2;
        v41 = (float *)(*((_DWORD *)v40 + 1) + 8);
        goto LABEL_85;
      }
      v60 = *(float **)v40;
      Ogre::operator-(v100, v57, (float *)(*((_DWORD *)v40 + 1) + 8));
      Ogre::CrossProduct(v101, v100, v96);
      Ogre::Normalize((Ogre *)v102, (const Ogre::Vector3 *)v101);
      Ogre::operator-(v103, v60 + 2, v57);
      Ogre::CrossProduct(v104, v103, v96);
      Ogre::Normalize((Ogre *)&v105, (const Ogre::Vector3 *)v104);
      Ogre::operator+(v108, v102, &v105);
      Ogre::Normalize((Ogre *)&v109, (const Ogre::Vector3 *)v108);
      v43 = (int)(v39 + 200);
LABEL_87:
      std::list<Ogre::Vector3>::push_back(v43, &v109);
      v40 = *(float **)v40;
    }
    v42 = (float *)(*(_DWORD *)v40 + 8);
LABEL_85:
    Ogre::operator-(&v105, v42, v41);
    Ogre::CrossProduct(v108, &v105, v96);
    Ogre::Normalize((Ogre *)&v109, (const Ogre::Vector3 *)v108);
    v43 = (int)(v39 + 200);
    goto LABEL_87;
  }
  for ( k = 4; k != 0; --k )
  {
    v44 = (float **)((char *)this + 932);
    for ( m = 0; m < *((_DWORD *)this + 433); ++m )
    {
      v45 = *v44;
      v69 = v44[1];
      while ( v45 != (float *)v44 )
      {
        v49 = v45 + 2;
        if ( v45 == *v44 )
        {
          Ogre::operator+(v108, v45 + 2, (float *)(*(_DWORD *)v45 + 8));
          Ogre::Normalize((Ogre *)&v109, (const Ogre::Vector3 *)v108);
          v45[2] = v109;
          v45[3] = v110;
          v45[4] = v111;
        }
        else if ( v45 == v69 )
        {
          Ogre::operator+(v108, v49, (float *)(*((_DWORD *)v45 + 1) + 8));
          Ogre::Normalize((Ogre *)&v109, (const Ogre::Vector3 *)v108);
          v45[2] = v109;
          v45[3] = v110;
          v45[4] = v111;
        }
        else
        {
          v66 = *((_DWORD *)v45 + 1);
          Ogre::operator+(v108, v49, (float *)(*(_DWORD *)v45 + 8));
          Ogre::operator+(&v109, v108, (float *)(v66 + 8));
          v45[2] = v109;
          v45[3] = v110;
          v45[4] = v111;
          Ogre::Normalize(v49);
        }
        v45 = *(float **)v45;
      }
      v44 += 2;
    }
  }
}


//======================================================================
// Ogre::TerrainTileSource::_serialize(Ogre::Archive &,int)
// address: 0x001590FE   size: 0x56 (86 bytes)
//======================================================================
int __fastcall Ogre::TerrainTileSource::_serialize(Ogre::TerrainTileSource *this, Ogre::Archive *a2, int a3)
{
  int v6; // r2
  int v7; // r3

  Ogre::Archive::serialize(a2, (char *)this + 16, 0x24u);
  Ogre::Archive::operator<<(a2);
  Ogre::Archive::operator<<(a2);
  sub_158A14(a2, (int *)this + 19, a3);
  sub_158A14(a2, (int *)this + 22, a3);
  Ogre::Archive::operator<<<Ogre::TerrainBlockSource>((unsigned int)a2, (int *)this + 25);
  return Ogre::Archive::serializeRawArray<Ogre::TerrainLinkMeshData>((int)a2, (unsigned int)this + 112, v6, v7);
}

