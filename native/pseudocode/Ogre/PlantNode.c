// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PlantNode

//======================================================================
// Ogre::PlantNode::getRTTI(void)const
// address: 0x001791A4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::PlantNode::getRTTI(Ogre::PlantNode *this)
{
  return &Ogre::PlantNode::m_RTTI;
}


//======================================================================
// Ogre::PlantNode::update(unsigned int)
// address: 0x001791BC   size: 0x5C (92 bytes)
//======================================================================
float __fastcall Ogre::PlantNode::update(Ogre::PlantNode *this, unsigned int a2)
{
  float v2; // r7
  float v4; // r5
  float v5; // r0
  float result; // r0

  v2 = *((float *)this + 117);
  *((float *)this + 105) = v2 * 1.5;
  v4 = *((float *)this + 118);
  *((float *)this + 106) = v4 + v4;
  v5 = (float)a2 / 1000.0;
  *((float *)this + 117) = v2 + v5;
  result = v4 + v5;
  *((float *)this + 118) = result;
  return result;
}


//======================================================================
// Ogre::PlantNode::~PlantNode()
// address: 0x001792F4   size: 0xA2 (162 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9PlantNodeD1Ev'
void __fastcall Ogre::PlantNode::~PlantNode(Ogre::PlantNode *this)
{
  _DWORD **v1; // r5
  void *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0
  _DWORD *v6; // r0
  _DWORD *v7; // r0
  void *v8; // r0
  void *v9; // r0

  v1 = (_DWORD **)((char *)this + 252);
  *(_DWORD *)this = &off_457778;
  v3 = *((void **)this + 93);
  if ( v3 != nullptr )
    operator delete[](v3);
  if ( *v1 != nullptr )
  {
    Ogre::BaseObject::release(*v1);
    *v1 = nullptr;
  }
  v4 = *((_DWORD **)this + 100);
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    *((_DWORD *)this + 100) = 0;
  }
  v5 = *((_DWORD **)this + 97);
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    *((_DWORD *)this + 97) = 0;
  }
  v6 = *((_DWORD **)this + 98);
  if ( v6 != nullptr )
  {
    Ogre::BaseObject::release(v6);
    *((_DWORD *)this + 98) = 0;
  }
  v7 = *((_DWORD **)this + 101);
  if ( v7 != nullptr )
  {
    Ogre::BaseObject::release(v7);
    *((_DWORD *)this + 101) = 0;
  }
  Ogre::VertexFormat::~VertexFormat((void **)this + 94);
  v8 = *((void **)this + 90);
  if ( v8 != nullptr )
    operator delete(v8);
  v9 = *((void **)this + 86);
  if ( v9 != nullptr )
    operator delete(v9);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// Ogre::PlantNode::~PlantNode()
// address: 0x0017939C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::PlantNode::~PlantNode(Ogre::PlantNode *this)
{
  Ogre::PlantNode::~PlantNode(this);
  operator delete(this);
}


//======================================================================
// Ogre::PlantNode::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x0017943C   size: 0x1F2 (498 bytes)
//======================================================================
int __fastcall Ogre::PlantNode::render(int this, Ogre::DynamicBufferPool **a2, const Ogre::ShaderEnvData *a3)
{
  int v3; // r2
  int v4; // r4
  Ogre::RenderableObject *v5; // r5
  void *v6; // r1
  float *v7; // r7
  int v8; // r5
  _DWORD *v9; // r7
  _DWORD *v10; // r0
  _DWORD *v11; // r12
  int v12; // r3
  int v13; // r3
  int v14; // r2
  int v15; // r7
  int v16; // r0
  int i; // r3
  int v18; // r2
  __int16 v19; // r5
  Ogre::Material *v20; // r7
  int v21; // r2
  void *v22; // r1
  float *v23; // r7
  _DWORD *v24; // [sp+20h] [bp-2Ch]
  Ogre::DynamicIndexBuffer *v25; // [sp+28h] [bp-24h]
  Ogre::DynamicIndexBuffer *v26; // [sp+28h] [bp-24h]
  Ogre::DynamicVertexBuffer *v29; // [sp+34h] [bp-18h]
  int v30[4]; // [sp+3Ch] [bp-10h] BYREF

  v3 = *(_DWORD *)(this + 408);
  v4 = this;
  if ( v3 != 0 )
  {
    v5 = (Ogre::RenderableObject *)*(unsigned __int8 *)(this + 356);
    if ( *(_BYTE *)(this + 356) != 0 )
    {
      v29 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                           a2,
                                           (const Ogre::VertexFormat *)(this + 376),
                                           4 * v3);
      v8 = 0;
      v26 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(a2, 6 * *(_DWORD *)(v4 + 408));
      *((_DWORD *)v26 + 5) = 4 * *(_DWORD *)(v4 + 408);
      *((_DWORD *)v26 + 4) = 0;
      v9 = (_DWORD *)Ogre::DynamicVertexBuffer::lock(v29);
      v10 = (_DWORD *)Ogre::VertexData::lock(*(Ogre::VertexData **)(v4 + 388));
      v24 = v10 + 4;
      v11 = v9 + 4;
      while ( v8 < 4 * *(_DWORD *)(v4 + 408) )
      {
        *v9 = *v10;
        v9[1] = v10[1];
        v9[2] = v10[2];
        v12 = v10[3];
        v10 += 6;
        v9[3] = v12;
        v13 = 6 * v8;
        v14 = v24[6 * v8++];
        v11[v13] = v14;
        v9 += 6;
        v11[v13 + 1] = v24[v13 + 1];
      }
      Ogre::VertexData::unlock(*(_DWORD *)(v4 + 388));
      v15 = Ogre::DynamicIndexBuffer::lock(v26);
      v16 = Ogre::IndexData::lock(*(Ogre::IndexData **)(v4 + 392));
      for ( i = 0; i < 6 * *(_DWORD *)(v4 + 408); ++i )
      {
        v18 = 2 * i;
        v19 = *(_WORD *)(v16 + 2 * i);
        *(_WORD *)(v15 + v18) = v19;
      }
      Ogre::IndexData::unlock(*(_DWORD *)(v4 + 392));
      v20 = *(Ogre::Material **)(v4 + 404);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v30, (Ogre::FixedString *)"g_PosExcursion", v21);
      Ogre::Material::setParamValue(v20, (const Ogre::FixedString *)v30, (const void *)(v4 + 420));
      Ogre::FixedString::release(v30[0], v22);
      v23 = (float *)Ogre::SceneRenderer::newContext(
                       (int)a2,
                       *(_DWORD *)(v4 + 236),
                       a3,
                       *(Ogre::Material **)(v4 + 404),
                       *(_DWORD *)(v4 + 396),
                       v29,
                       v26,
                       4,
                       2 * *(_DWORD *)(v4 + 408),
                       0);
      Ogre::Matrix4::transformCoord(
        (const Ogre::ShaderEnvData *)((char *)a3 + 956),
        (Ogre::Vector3 *)v30,
        (const Ogre::Vector3 *)(v4 + 140));
      v23[5] = *(float *)&v30[2] + 500.0;
      return Ogre::ShaderContext::setInstanceEnvData(
               (Ogre::ShaderContext *)v23,
               (Ogre::SceneRenderer *)a2,
               nullptr,
               a3,
               nullptr);
    }
    else
    {
      v25 = *(Ogre::DynamicIndexBuffer **)(this + 404);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v30, (Ogre::FixedString *)"g_PosExcursion", v3);
      Ogre::Material::setParamValue(v25, (const Ogre::FixedString *)v30, (const void *)(v4 + 420));
      Ogre::FixedString::release(v30[0], v6);
      v7 = (float *)Ogre::SceneRenderer::newContext(
                      (int)a2,
                      *(_DWORD *)(v4 + 236),
                      a3,
                      *(Ogre::Material **)(v4 + 404),
                      *(_DWORD *)(v4 + 396),
                      *(Ogre::VertexBuffer **)(v4 + 388),
                      *(Ogre::IndexBuffer **)(v4 + 392),
                      4,
                      2 * *(_DWORD *)(v4 + 408),
                      (char)v5);
      Ogre::Matrix4::transformCoord(
        (const Ogre::ShaderEnvData *)((char *)a3 + 956),
        (Ogre::Vector3 *)v30,
        (const Ogre::Vector3 *)(v4 + 140));
      v7[5] = *(float *)&v30[2] + 500.0;
      return Ogre::ShaderContext::setInstanceEnvData((Ogre::ShaderContext *)v7, (Ogre::SceneRenderer *)a2, v5, a3, v5);
    }
  }
  return this;
}


//======================================================================
// Ogre::PlantNode::PlantNode(Ogre::PlantSource *)
// address: 0x0017963C   size: 0xFA (250 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre9PlantNodeC1EPNS_11PlantSourceE'
Ogre::PlantNode *__fastcall Ogre::PlantNode::PlantNode(Ogre::PlantNode *this, Ogre::PlantSource *a2)
{
  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_457778;
  *((_DWORD *)this + 63) = a2;
  Ogre::Matrix4::Matrix4((Ogre::PlantNode *)((char *)this + 256));
  *((_DWORD *)this + 86) = 0;
  *((_DWORD *)this + 87) = 0;
  *((_DWORD *)this + 88) = 0;
  *((_DWORD *)this + 90) = 0;
  *((_DWORD *)this + 91) = 0;
  *((_DWORD *)this + 92) = 0;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 94);
  *((_DWORD *)this + 97) = 0;
  *((_DWORD *)this + 98) = 0;
  *((_DWORD *)this + 100) = 0;
  *((_DWORD *)this + 101) = 0;
  if ( a2 != nullptr )
    (*(void (__fastcall **)(Ogre::PlantSource *))(*(_DWORD *)a2 + 4))(a2);
  *((_DWORD *)this + 93) = 0;
  Ogre::Matrix4::identity((Ogre::PlantNode *)((char *)this + 256));
  *((_DWORD *)this + 102) = 0;
  *((_DWORD *)this + 103) = 1126825984;
  *((_DWORD *)this + 104) = 1112014848;
  j_memset((char *)this + 420, 0, 0x30u);
  *((_DWORD *)this + 117) = 0;
  *((_DWORD *)this + 118) = 0;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 123) = 0;
  *((_DWORD *)this + 124) = 0;
  *((_DWORD *)this + 119) = 0;
  *((_DWORD *)this + 120) = 0;
  *((_DWORD *)this + 121) = 0;
  *((_BYTE *)this + 356) = 0;
  return this;
}


//======================================================================
// Ogre::PlantNode::newObject(void)
// address: 0x00179744   size: 0x16 (22 bytes)
//======================================================================
Ogre::PlantNode *__fastcall Ogre::PlantNode::newObject(Ogre::PlantNode *this)
{
  Ogre::PlantNode *v1; // r4

  v1 = (Ogre::PlantNode *)operator new(0x1F4u);
  Ogre::PlantNode::PlantNode(v1, nullptr);
  return v1;
}


//======================================================================
// Ogre::PlantNode::updateData(Ogre::Vector3 *,unsigned int *)
// address: 0x0017975C   size: 0x186 (390 bytes)
//======================================================================
__int64 __fastcall Ogre::PlantNode::updateData(Ogre::VertexData **this, Ogre::Vector3 *a2, unsigned int *a3)
{
  int v4; // r0
  float v5; // r6
  float v6; // r5
  float v7; // r7
  float v8; // r6
  float v9; // r5
  float v10; // r7
  _WORD *v11; // r0
  __int16 v12; // r3
  int j; // r2
  int v15; // [sp+8h] [bp-24h]
  float v16; // [sp+Ch] [bp-20h]
  int i; // [sp+10h] [bp-1Ch]
  float v19; // [sp+18h] [bp-14h]
  float v20; // [sp+1Ch] [bp-10h]

  v4 = Ogre::VertexData::lock(*(this + 97));
  *(this + 119) = (Ogre::VertexData *)2139095039;
  *(this + 120) = (Ogre::VertexData *)2139095039;
  *(this + 121) = (Ogre::VertexData *)2139095039;
  *(this + 122) = (Ogre::VertexData *)-8388609;
  *(this + 123) = (Ogre::VertexData *)-8388609;
  *(this + 124) = (Ogre::VertexData *)-8388609;
  v15 = v4;
  for ( i = 0; i < 4 * (int)*(this + 102); ++i )
  {
    v16 = *(float *)a2;
    v19 = *((float *)a2 + 1);
    v5 = *((float *)this + 122);
    v20 = *((float *)a2 + 2);
    if ( v5 <= *(float *)a2 )
      v5 = *(float *)a2;
    v6 = *((float *)this + 123);
    if ( v6 <= v19 )
      v6 = *((float *)a2 + 1);
    v7 = *((float *)this + 124);
    if ( v7 <= v20 )
      v7 = *((float *)a2 + 2);
    *((float *)this + 122) = v5;
    *((float *)this + 124) = v7;
    *((float *)this + 123) = v6;
    v8 = *((float *)this + 119);
    if ( v8 >= v16 )
      v8 = v16;
    v9 = *((float *)this + 120);
    if ( v9 >= v19 )
      v9 = v19;
    v10 = *((float *)this + 121);
    if ( v10 >= v20 )
      v10 = v20;
    *((float *)this + 119) = v8;
    *((float *)this + 121) = v10;
    *((float *)this + 120) = v9;
    *(float *)v15 = v16;
    *(float *)(v15 + 4) = v19;
    *(float *)(v15 + 8) = v20;
    *(_DWORD *)(v15 + 12) = a3[i / 4];
    v15 += 24;
    a2 = (Ogre::Vector3 *)((char *)a2 + 12);
  }
  Ogre::VertexData::unlock((int)*(this + 97));
  v11 = (_WORD *)Ogre::IndexData::lock(*(this + 98));
  v12 = 2;
  for ( j = 0; j < (int)*(this + 102); ++j )
  {
    *v11 = 4 * j;
    v11[1] = v12;
    v11[2] = v12 - 1;
    v11[3] = v12 - 1;
    v11[4] = v12;
    v11[5] = v12 + 1;
    v11 += 6;
    v12 += 4;
  }
  Ogre::IndexData::unlock((int)*(this + 98));
  return Ogre::BoxSphereBound::fromBox(
           (Ogre::BoxSphereBound *)(this + 35),
           (const Ogre::Vector3 *)(this + 119),
           (const Ogre::Vector3 *)(this + 122));
}


//======================================================================
// Ogre::PlantNode::addPos(Ogre::Vector3 *,Ogre::Vector3,float,int)
// address: 0x001798EC   size: 0x12E (302 bytes)
//======================================================================
float __fastcall Ogre::PlantNode::addPos(int a1, int a2, float *a3, float a4, int a5)
{
  int v7; // r5
  double v8; // r4
  float v9; // r0
  float v10; // r0
  float v11; // r0
  float v12; // r7
  float result; // r0
  int v14; // r2
  int v15; // r2
  int v16; // r2
  int v17; // r3
  float v19; // [sp+4h] [bp-28h]
  float v21; // [sp+10h] [bp-1Ch]
  float v22; // [sp+14h] [bp-18h]
  double v23; // [sp+18h] [bp-14h]
  double v24; // [sp+20h] [bp-Ch]

  v7 = j_lrand48();
  v21 = a3[1];
  v22 = (float)(v21 + (float)(a4 * *(float *)(a1 + 412))) + (float)((float)(v7 % 100 + 1) / 400.0);
  j_lrand48();
  v8 = (float)((float)((float)((float)j_lrand48() * 3.1416) * 4.6566e-10) - 1.5708);
  v23 = j_sin(v8);
  v24 = j_cos(v8);
  *((float *)&v8 + 1) = a4 * *(float *)(a1 + 416);
  v9 = v23;
  *(float *)&v8 = *((float *)&v8 + 1) * v9;
  v19 = *a3 + (float)(*((float *)&v8 + 1) * v9);
  v10 = v24;
  v11 = *((float *)&v8 + 1) * v10;
  v12 = a3[2];
  *((float *)&v8 + 1) = v12 + v11;
  *(float *)&v8 = *a3 - *(float *)&v8;
  result = v12 - v11;
  v14 = a2 + 48 * a5;
  *(_DWORD *)(v14 + 8) = HIDWORD(v8);
  *(float *)v14 = v19;
  *(float *)(v14 + 4) = v21;
  v15 = a2 + 48 * a5 + 12;
  *(_DWORD *)v15 = LODWORD(v8);
  *(float *)(v15 + 4) = v21;
  *(float *)(v15 + 8) = result;
  v16 = a2 + 48 * a5 + 24;
  *(_DWORD *)(v16 + 8) = HIDWORD(v8);
  *(float *)v16 = v19;
  *(float *)(v16 + 4) = v22;
  v17 = a2 + 48 * a5 + 36;
  *(_DWORD *)v17 = LODWORD(v8);
  *(float *)(v17 + 4) = v22;
  *(float *)(v17 + 8) = result;
  return result;
}


//======================================================================
// Ogre::PlantNode::createVBIB(void)
// address: 0x00179A28   size: 0xFE (254 bytes)
//======================================================================
int __fastcall Ogre::PlantNode::createVBIB(Ogre::PlantNode *this)
{
  int *v2; // r5
  int v3; // r4
  int v4; // r0
  _DWORD *v5; // r3
  int v6; // r12
  char *v7; // r2
  Ogre::IndexData *v8; // r4
  int v9; // r3
  Ogre::VertexData *v11; // [sp+10h] [bp-Ch]

  if ( *((_DWORD *)this + 102) != 0 )
  {
    v2 = (int *)((char *)this + 376);
    v3 = 0;
    Ogre::VertexFormat::addElement((int *)this + 94, 2u, 1u, 0, 0, -1);
    Ogre::VertexFormat::addElement(v2, 4u, 5u, 0, 0, -1);
    Ogre::VertexFormat::addElement(v2, 1u, 7u, 0, 0, -1);
    v11 = (Ogre::VertexData *)operator new(0x50u);
    Ogre::VertexData::VertexData(v11, (const Ogre::VertexFormat *)v2, 4 * *((_DWORD *)this + 102));
    *((_DWORD *)this + 97) = v11;
    *((_DWORD *)this + 99) = (*(int (__fastcall **)(int, int *))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                               + 36))(
                               Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                               v2);
    v4 = Ogre::VertexData::lock(*((Ogre::VertexData **)this + 97));
    v5 = (_DWORD *)(v4 + 16);
    v6 = v4 + 40;
    while ( v3 < *((_DWORD *)this + 102) )
    {
      *v5 = 1065353216;
      v5[1] = 1065353216;
      v7 = (char *)v5 - v4 - 16;
      *(_DWORD *)&v7[v6] = 0;
      *(_DWORD *)&v7[v6 + 4] = 1065353216;
      *(_DWORD *)&v7[v4 + 64] = 1065353216;
      *(_DWORD *)&v7[v4 + 68] = 0;
      *(_DWORD *)&v7[v4 + 88] = 0;
      v5[19] = 0;
      ++v3;
      v5 += 24;
    }
    Ogre::VertexData::unlock(*((_DWORD *)this + 97));
    v8 = (Ogre::IndexData *)operator new(0x28u);
    Ogre::IndexData::IndexData(v8, 6 * *((_DWORD *)this + 102));
    *((_DWORD *)this + 98) = v8;
    v9 = *((_DWORD *)this + 102);
    *((_DWORD *)v8 + 4) = 0;
    *((_DWORD *)v8 + 5) = 4 * v9;
  }
  return 1;
}


//======================================================================
// Ogre::PlantNode::updateGrassDisturb(Ogre::Vector3,unsigned int)
// address: 0x00179B2C   size: 0x3B6 (950 bytes)
//======================================================================
float __fastcall Ogre::PlantNode::updateGrassDisturb(int a1, float *a2, unsigned int a3)
{
  float v4; // r6
  float v5; // r0
  float v6; // r5
  float result; // r0
  float *v8; // r5
  float v9; // r5
  float v10; // r6
  int v11; // r5
  int v12; // r5
  float v13; // r3
  int v14; // r6
  int v15; // r5
  float v16; // r5
  int v17; // r6
  int v18; // r1
  float v19; // r5
  float v20; // r0
  int v21; // r6
  int v22; // r6
  float v23; // [sp+10h] [bp-44h]
  int v24; // [sp+10h] [bp-44h]
  float v25; // [sp+14h] [bp-40h]
  float v26; // [sp+14h] [bp-40h]
  int v27; // [sp+14h] [bp-40h]
  float *v29; // [sp+18h] [bp-3Ch]
  float v30; // [sp+1Ch] [bp-38h]
  int i; // [sp+1Ch] [bp-38h]
  int j; // [sp+1Ch] [bp-38h]
  unsigned int v33; // [sp+2Ch] [bp-28h]
  int v34; // [sp+30h] [bp-24h]
  float v35; // [sp+34h] [bp-20h]
  unsigned int v36; // [sp+38h] [bp-1Ch]
  float v38; // [sp+44h] [bp-10h] BYREF
  float v39; // [sp+48h] [bp-Ch]
  float v40; // [sp+4Ch] [bp-8h]

  v30 = *a2 - *(float *)(a1 + 320);
  v4 = a2[1] - *(float *)(a1 + 324);
  v5 = a2[2] - *(float *)(a1 + 328);
  *(float *)(a1 + 332) = v30;
  *(float *)(a1 + 336) = v4;
  *(float *)(a1 + 340) = v5;
  *(float *)(a1 + 320) = *a2;
  *(float *)(a1 + 324) = a2[1];
  *(float *)(a1 + 328) = a2[2];
  *(_BYTE *)(a1 + 356) = 0;
  v38 = v5 - (float)(v4 * 0.0);
  v39 = (float)(v30 * 0.0) - (float)(v5 * 0.0);
  v40 = (float)(v4 * 0.0) - v30;
  v6 = Ogre::Vector3::length((Ogre::Vector3 *)&v38);
  LODWORD(result) = v6 > 0.00001;
  if ( v6 <= 0.00001 )
  {
    v38 = 0.0;
    v39 = 0.0;
    v40 = 0.0;
  }
  else
  {
    v38 = v38 * (float)(1.0 / v6);
    v39 = v39 * (float)(1.0 / v6);
    result = v40 * (float)(1.0 / v6);
    v40 = result;
  }
  v33 = LODWORD(v38) + 0x80000000;
  v35 = v39;
  v36 = LODWORD(v40) + 0x80000000;
  v34 = -1431655765 * ((*(_DWORD *)(a1 + 364) - *(_DWORD *)(a1 + 360)) >> 2);
  for ( i = 0; i < v34; ++i )
  {
    v8 = (float *)(*(_DWORD *)(a1 + 360) + 12 * i);
    v23 = *a2 - *v8;
    v25 = a2[2] - v8[2];
    LODWORD(result) = (float)((float)(v23 * v23) + (float)(v25 * v25)) < 1500.0;
    if ( (float)((float)(v23 * v23) + (float)(v25 * v25)) < 1500.0 )
    {
      v9 = *(float *)(a1 + 340);
      v10 = (float)(*(float *)(a1 + 332) * *(float *)(a1 + 332)) + (float)(*(float *)(a1 + 336) * *(float *)(a1 + 336));
      LODWORD(result) = (float)(v10 + (float)(v9 * v9)) >= *(float *)&Ogre::PlantNode::ms_DisturbDistance;
      if ( (float)(v10 + (float)(v9 * v9)) >= *(float *)&Ogre::PlantNode::ms_DisturbDistance )
      {
        v11 = 24 * i;
        *(_BYTE *)(*(_DWORD *)(a1 + 344) + v11) = 1;
        *(_DWORD *)(*(_DWORD *)(a1 + 344) + v11 + 16) = 0;
        v26 = v25 * *(float *)(a1 + 332);
        LODWORD(result) = (float)(v26 - (float)(v23 * *(float *)(a1 + 340))) <= 0.0;
        v12 = *(_DWORD *)(a1 + 344) + 24 * i;
        if ( (float)(v26 - (float)(v23 * *(float *)(a1 + 340))) > 0.0 )
        {
          *(float *)(v12 + 4) = v38;
          *(float *)(v12 + 8) = v39;
          v13 = v40;
        }
        else
        {
          v13 = *(float *)&v36;
          *(_DWORD *)(v12 + 4) = v33;
          *(float *)(v12 + 8) = v35;
        }
        *(float *)(v12 + 12) = v13;
      }
    }
    v14 = 24 * i;
    v15 = *(_DWORD *)(a1 + 344) + 24 * i;
    if ( *(_BYTE *)v15 != 0 )
    {
      *(float *)(v15 + 16) = *(float *)(v15 + 16) + (float)a3;
      *(_BYTE *)(a1 + 356) = 1;
      v16 = *(float *)&Ogre::PlantNode::ms_DisturbTime;
      *(float *)(*(_DWORD *)(a1 + 344) + v14 + 20) = (float)(*(float *)&Ogre::PlantNode::ms_DisturbTime
                                                           - *(float *)(*(_DWORD *)(a1 + 344) + v14 + 16))
                                                   / *(float *)&Ogre::PlantNode::ms_DisturbTime;
      v17 = *(_DWORD *)(a1 + 344) + v14;
      LODWORD(result) = *(float *)(v17 + 16) > v16;
      if ( *(float *)(v17 + 16) > v16 )
      {
        *(_BYTE *)v17 = 0;
        *(_DWORD *)(v17 + 4) = 0;
        *(_DWORD *)(v17 + 8) = 0;
        *(_DWORD *)(v17 + 12) = 1065353216;
        *(_DWORD *)(v17 + 16) = 0;
        *(_DWORD *)(v17 + 20) = 0;
      }
    }
  }
  if ( *(_BYTE *)(a1 + 356) != 0 )
  {
    v29 = (float *)Ogre::VertexData::lock(*(Ogre::VertexData **)(a1 + 388));
    for ( j = 0; j < v34; ++j )
    {
      v24 = 24 * j;
      v18 = *(_DWORD *)(a1 + 344) + 24 * j;
      v27 = v18;
      if ( *(_BYTE *)v18 != 0 )
      {
        v19 = *(float *)(v18 + 20);
        v20 = (float)((float)((float)(v29[13] - v29[1]) * 0.5) * (float)(v19 * v19)) * j_sin((float)(v19 * 28.274));
        v21 = 48 * j + 24;
        v29[12] = *(float *)(*(_DWORD *)(a1 + 372) + v21) + (float)(v20 * *(float *)(v27 + 4));
        v29[14] = *(float *)(*(_DWORD *)(a1 + 372) + v21 + 8)
                + (float)(v20 * *(float *)(*(_DWORD *)(a1 + 344) + v24 + 12));
        v22 = 48 * j + 36;
        v29[18] = *(float *)(*(_DWORD *)(a1 + 372) + v22) + (float)(v20 * *(float *)(*(_DWORD *)(a1 + 344) + v24 + 4));
        v29[20] = *(float *)(*(_DWORD *)(a1 + 372) + v22 + 8)
                + (float)(v20 * *(float *)(*(_DWORD *)(a1 + 344) + v24 + 12));
      }
      v29 += 24;
    }
    return COERCE_FLOAT(Ogre::VertexData::unlock(*(_DWORD *)(a1 + 388)));
  }
  return result;
}


//======================================================================
// Ogre::PlantNode::init(Ogre::PlantVecInfo_T &,std::string)
// address: 0x0017A2C4   size: 0x150 (336 bytes)
//======================================================================
int __fastcall Ogre::PlantNode::init(int a1, int a2)
{
  int v4; // r3
  int v5; // r2
  unsigned int v6; // r2
  int v7; // r1
  int v8; // r12
  unsigned int v9; // r6
  Ogre::FixedString *v10; // r0
  Ogre::Material *v11; // r6
  int v12; // r2
  void *v13; // r1
  unsigned int v14; // r0
  int i; // r6
  int v16; // r3
  float v17; // r3
  int v18; // r1
  int v19; // r2
  Ogre::Material *v21; // [sp+14h] [bp-20h]
  Ogre::FixedString *v22; // [sp+18h] [bp-1Ch] BYREF
  int v23; // [sp+1Ch] [bp-18h]
  int v24; // [sp+20h] [bp-14h]
  int v25; // [sp+24h] [bp-10h]
  int v26; // [sp+28h] [bp-Ch]
  int v27; // [sp+2Ch] [bp-8h]

  v4 = -1431655765 * ((*(_DWORD *)(a2 + 4) - *(_DWORD *)a2) >> 2);
  *(_DWORD *)(a1 + 408) = v4;
  if ( v4 != 0 )
  {
    std::vector<Ogre::Vector3>::operator=(a1 + 360, a2);
    v5 = *(_DWORD *)(a1 + 364) - *(_DWORD *)(a1 + 360);
    LOBYTE(v22) = 0;
    v25 = 1065353216;
    v23 = 0;
    v24 = 0;
    v26 = 0;
    v27 = 0;
    v6 = -1431655765 * (v5 >> 2);
    v7 = *(_DWORD *)(a1 + 348);
    v8 = *(_DWORD *)(a1 + 344);
    v9 = -1431655765 * ((v7 - v8) >> 3);
    if ( v6 <= v9 )
    {
      if ( v6 < v9 )
      {
        v6 *= 24;
        *(_DWORD *)(a1 + 348) = v8 + v6;
      }
    }
    else
    {
      std::vector<Ogre::Disturb>::_M_fill_insert((int *)(a1 + 344), v7, v6 - v9, (int)&v22);
    }
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v22, (Ogre::FixedString *)"plant", v6);
    v21 = (Ogre::Material *)operator new(0x2Cu);
    Ogre::Material::Material(v21, (const Ogre::FixedString *)&v22);
    v10 = v22;
    *(_DWORD *)(a1 + 404) = v21;
    Ogre::FixedString::release((int)v10, v21);
    v11 = *(Ogre::Material **)(a1 + 404);
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v22, (Ogre::FixedString *)"g_DiffuseTex", v12);
    Ogre::Material::setParamTexture(v11, (const Ogre::FixedString *)&v22, *(Ogre::Texture **)(a2 + 36), 0);
    Ogre::FixedString::release((int)v22, v13);
    Ogre::PlantNode::createVBIB((Ogre::PlantNode *)a1);
    if ( (unsigned int)(4 * *(_DWORD *)(a1 + 408)) > 0xAA00000 )
      v14 = -1;
    else
      v14 = 48 * *(_DWORD *)(a1 + 408);
    *(_DWORD *)(a1 + 372) = operator new[](v14);
    for ( i = 0; i < *(_DWORD *)(a1 + 408); ++i )
    {
      v16 = *(_DWORD *)(a2 + 12);
      if ( v16 == *(_DWORD *)(a2 + 16) )
        v17 = 1.0;
      else
        v17 = *(float *)(4 * i + v16);
      v18 = *(_DWORD *)(a1 + 372);
      v19 = *(_DWORD *)a2 + 12 * i;
      v22 = *(Ogre::FixedString **)v19;
      v23 = *(_DWORD *)(v19 + 4);
      v24 = *(_DWORD *)(v19 + 8);
      Ogre::PlantNode::addPos(a1, v18, (float *)&v22, v17, i);
    }
    Ogre::PlantNode::updateData((Ogre::VertexData **)a1, *(Ogre::Vector3 **)(a1 + 372), *(unsigned int **)(a2 + 24));
  }
  return 1;
}

