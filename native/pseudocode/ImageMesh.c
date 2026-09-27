// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ImageMesh

//======================================================================
// ImageMesh::update(unsigned int)
// address: 0x002A07B8   size: 0x10 (16 bytes)
//======================================================================
char *__fastcall ImageMesh::update(ImageMesh *this, unsigned int a2)
{
  char *result; // r0
  int v3; // r3

  result = (char *)this + 252;
  v3 = *((_DWORD *)result + 12);
  if ( v3 >= 0 )
    *((_DWORD *)result + 12) = a2 + v3;
  return result;
}


//======================================================================
// ImageMesh::~ImageMesh()
// address: 0x002A07F8   size: 0x46 (70 bytes)
//======================================================================
// Alternative name is '_ZN9ImageMeshD1Ev'
void __fastcall ImageMesh::~ImageMesh(ImageMesh *this)
{
  _DWORD *v1; // r4
  _DWORD *v3; // r0
  _DWORD *v4; // r0
  _DWORD *v5; // r0

  v1 = (_DWORD *)((char *)this + 252);
  *(_DWORD *)this = &off_45CA40;
  v3 = *((_DWORD **)this + 72);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    v1[9] = 0;
  }
  v4 = (_DWORD *)v1[10];
  if ( v4 != nullptr )
  {
    Ogre::BaseObject::release(v4);
    v1[10] = 0;
  }
  v5 = (_DWORD *)v1[11];
  if ( v5 != nullptr )
  {
    Ogre::BaseObject::release(v5);
    v1[11] = 0;
  }
  BaseItemMesh::~BaseItemMesh(this);
}


//======================================================================
// ImageMesh::~ImageMesh()
// address: 0x002A0844   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ImageMesh::~ImageMesh(ImageMesh *this)
{
  ImageMesh::~ImageMesh(this);
  operator delete(this);
}


//======================================================================
// ImageMesh::updateWorldCache(void)
// address: 0x002A0858   size: 0xD0 (208 bytes)
//======================================================================
float __fastcall ImageMesh::updateWorldCache(ImageMesh *this)
{
  float *v1; // r4
  float *WorldMatrix; // r0
  float v3; // r7
  float v4; // r6
  float v5; // r5
  float *v6; // r5
  float result; // r0
  float v8; // [sp+8h] [bp-Ch]
  float v9; // [sp+Ch] [bp-8h]

  v1 = (float *)this;
  Ogre::MovableObject::updateWorldCache(this);
  WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)v1);
  v3 = WorldMatrix[12];
  v4 = WorldMatrix[13];
  v5 = WorldMatrix[14];
  v8 = v5 - 25.0;
  v9 = v5 + 25.0;
  v6 = v1 + 35;
  v1[35] = (float)((float)(v3 - 25.0) + (float)(v3 + 25.0)) * 0.5;
  v1[36] = (float)((float)(v4 - 25.0) + (float)(v4 + 25.0)) * 0.5;
  v1[37] = (float)(v8 + v9) * 0.5;
  v1 += 38;
  *v1 = (float)((float)(v3 + 25.0) - (float)(v3 - 25.0)) * 0.5;
  v1[1] = (float)((float)(v4 + 25.0) - (float)(v4 - 25.0)) * 0.5;
  v1[2] = (float)(v9 - v8) * 0.5;
  result = Ogre::Vector3::length((Ogre::Vector3 *)v1);
  v6[6] = result;
  return result;
}


//======================================================================
// ImageMesh::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002A092C   size: 0x1DA (474 bytes)
//======================================================================
int __fastcall ImageMesh::render(Ogre::VertexData **this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  char *WorldMatrix; // r0
  Ogre::Material *v4; // r6
  int v5; // r2
  void *v6; // r1
  float v7; // r1
  float v8; // r0
  float v9; // r1
  void *v10; // r1
  int v11; // r2
  int v12; // r0
  Ogre::Material *v13; // r7
  void *v14; // r1
  Ogre::Material *v15; // r5
  int v16; // r4
  float *v17; // r5
  float *v18; // r6
  float v19; // r7
  float v20; // r0
  int v21; // r2
  int VertexDecl; // [sp+0h] [bp-114h]
  Ogre::MovableObject *v25; // [sp+1Ch] [bp-F8h]
  Ogre::Material *v26; // [sp+24h] [bp-F0h]
  Ogre::ShaderContext *v27; // [sp+24h] [bp-F0h]
  Ogre::FixedString *v30; // [sp+30h] [bp-E4h] BYREF
  float v31[3]; // [sp+34h] [bp-E0h] BYREF
  float v32[4]; // [sp+40h] [bp-D4h] BYREF
  _BYTE v33[64]; // [sp+50h] [bp-C4h] BYREF
  _BYTE v34[64]; // [sp+90h] [bp-84h] BYREF
  _DWORD v35[17]; // [sp+D0h] [bp-44h] BYREF

  v31[0] = -1.0;
  v31[2] = -1.0;
  v31[1] = 1.0;
  Ogre::Normalize(v31);
  WorldMatrix = Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)this);
  Ogre::Matrix4::Matrix4((int)v33, (const Ogre::Matrix4 *)WorldMatrix);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v34);
  Ogre::Matrix4::inverse((Ogre::Matrix4 *)v33, (Ogre::Matrix4 *)v34);
  Ogre::Matrix4::transformNormal((Ogre::Matrix4 *)v34, (Ogre::Vector3 *)v31, (const Ogre::Vector3 *)v31);
  Ogre::Normalize(v31);
  v4 = *(this + 74);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v35, (Ogre::FixedString *)"LightDir", v5);
  Ogre::Material::setParamValue(v4, (const Ogre::FixedString *)v35, v31);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v35, v6);
  v32[0] = *((float *)this + 68) * *((float *)this + 64);
  v7 = *((float *)this + 66);
  v32[1] = *((float *)this + 69) * *((float *)this + 65);
  v8 = *((float *)this + 70) * v7;
  v9 = *((float *)this + 67);
  v32[2] = v8;
  v32[3] = *((float *)this + 71) * v9;
  v26 = *(this + 74);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v35, (Ogre::FixedString *)"GrassColor", (int)this);
  Ogre::Material::setParamValue(v26, (const Ogre::FixedString *)v35, v32);
  Ogre::FixedString::~FixedString((Ogre::FixedString **)v35, v10);
  v12 = (int)*(this + 75);
  if ( v12 >= 0 )
  {
    v13 = *(this + 74);
    *(float *)v35 = (float)(v12 % 3000) / 3000.0;
    v35[1] = 0;
    Ogre::FixedString::FixedString((Ogre::FixedString *)&v30, (Ogre::FixedString *)"g_UVTranslate", v11);
    Ogre::Material::setParamValue(v13, (const Ogre::FixedString *)&v30, v35);
    Ogre::FixedString::~FixedString(&v30, v14);
  }
  v15 = *(this + 74);
  VertexDecl = Ogre::VertexData::getVertexDecl(*(this + 72));
  v16 = 0;
  v27 = Ogre::SceneRenderer::newContext(
          (int)a2,
          2,
          a3,
          v15,
          VertexDecl,
          *(this + 72),
          *(this + 73),
          4,
          ((*((_DWORD *)*(this + 73) + 7) - *((_DWORD *)*(this + 73) + 6)) >> 1) / 3u,
          0);
  v17 = (float *)Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)this);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v35);
  do
  {
    v18 = (float *)((char *)a3 + 1084);
    v25 = nullptr;
    do
    {
      v19 = (float)((float)(*v17 * *v18) + (float)(v17[1] * v18[4])) + (float)(v17[2] * v18[8]);
      v20 = v17[3] * v18[12];
      v21 = (int)v25;
      ++v18;
      *(float *)((char *)&v35[v16] + (_DWORD)v25) = v19 + v20;
      v25 = (Ogre::MovableObject *)((char *)v25 + 4);
    }
    while ( v21 != 12 );
    v16 += 4;
    v17 += 4;
  }
  while ( v16 != 16 );
  return Ogre::ShaderContext::addValueParam((int)v27, 2, v35, 7, 1);
}


//======================================================================
// ImageMesh::setOverlay(int)
// address: 0x002A0B34   size: 0x92 (146 bytes)
//======================================================================
__int64 __fastcall ImageMesh::setOverlay(__int64 this, int a2)
{
  int v2; // r5
  Ogre::Material *v3; // r6
  void *v4; // r1
  Ogre::Material *v5; // r6
  int v6; // r2
  void *v7; // r1
  Ogre::Material *v8; // r6
  int v9; // r2
  void *v10; // r1
  int v11; // r3
  void *v12; // r1
  __int64 v14; // [sp+0h] [bp-8h] BYREF

  v14 = this;
  v2 = this + 252;
  v3 = *(Ogre::Material **)(this + 296);
  if ( this < 0 )
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v14 + 4), (Ogre::FixedString *)"USE_TEXTURE", a2);
    v12 = (void *)(Ogre::Material::setParamMacro(v3, (const Ogre::FixedString *)((char *)&v14 + 4), 0) >> 32);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v14 + 1, v12);
    v11 = -1;
  }
  else
  {
    Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v14 + 4), (Ogre::FixedString *)"USE_TEXTURE", a2);
    v4 = (void *)(Ogre::Material::setParamMacro(v3, (const Ogre::FixedString *)((char *)&v14 + 4), 2u) >> 32);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v14 + 1, v4);
    v5 = *(Ogre::Material **)(v2 + 44);
    Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v14 + 4), (Ogre::FixedString *)"g_DiffuseTex", v6);
    Ogre::Material::setParamTexture(
      v5,
      (const Ogre::FixedString *)((char *)&v14 + 4),
      *(Ogre::Texture **)(Ogre::Singleton<BlockMaterialMgr>::ms_Singleton + 192),
      0);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v14 + 1, v7);
    v8 = *(Ogre::Material **)(v2 + 44);
    Ogre::FixedString::FixedString((Ogre::FixedString *)((char *)&v14 + 4), (Ogre::FixedString *)"g_OverlayColor", v9);
    Ogre::Material::setParamValue(v8, (const Ogre::FixedString *)((char *)&v14 + 4), &dword_513330);
    Ogre::FixedString::~FixedString((Ogre::FixedString **)&v14 + 1, v10);
    v11 = 0;
  }
  *(_DWORD *)(v2 + 48) = v11;
  return v14;
}


//======================================================================
// ImageMesh::ImageMesh(char const*,Ogre::ColorQuad)
// address: 0x002A0BF0   size: 0xEC (236 bytes)
//======================================================================
// Alternative name is '_ZN9ImageMeshC1EPKcN4Ogre9ColorQuadE'
int __fastcall ImageMesh::ImageMesh(int a1, Ogre::FixedString *a2, unsigned int a3)
{
  void *v4; // r1
  int v5; // r2
  int v6; // r0
  int v7; // r0
  Ogre::Material *v8; // r6
  void *v9; // r1
  BlockMaterialMgr *v11; // [sp+Ch] [bp-18h]
  Ogre::FixedString *v14; // [sp+18h] [bp-Ch] BYREF
  Ogre::FixedString *v15[2]; // [sp+1Ch] [bp-8h] BYREF

  Ogre::MovableObject::MovableObject((Ogre::MovableObject *)a1);
  *(_DWORD *)(a1 + 236) = 2;
  *(_DWORD *)(a1 + 240) = 0;
  *(_BYTE *)(a1 + 248) = 0;
  *(_DWORD *)(a1 + 212) = 0;
  *(_DWORD *)(a1 + 244) = 3;
  *(_BYTE *)(a1 + 232) = 0;
  *(_BYTE *)(a1 + 233) = 0;
  *(_DWORD *)(a1 + 252) = 0;
  *(_DWORD *)(a1 + 256) = 1065353216;
  *(_DWORD *)(a1 + 260) = 1065353216;
  *(_DWORD *)(a1 + 264) = 1065353216;
  *(_DWORD *)(a1 + 268) = 1065353216;
  *(_DWORD *)(a1 + 272) = 1065353216;
  *(_DWORD *)(a1 + 276) = 1065353216;
  *(_DWORD *)(a1 + 280) = 1065353216;
  *(_DWORD *)(a1 + 284) = 1065353216;
  *(_DWORD *)a1 = &off_45CA40;
  *(_DWORD *)(a1 + 300) = -1;
  v11 = (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton;
  Ogre::FixedString::FixedString((Ogre::FixedString *)&v14, a2, a1 + 288);
  BlockMaterialMgr::getImageMeshData(
    v11,
    (Ogre::VertexData **)(a1 + 288),
    (Ogre::IndexData **)(a1 + 292),
    (const Ogre::FixedString *)&v14);
  Ogre::FixedString::~FixedString(&v14, v4);
  v6 = *(_DWORD *)(a1 + 288);
  if ( v6 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v6 + 4))(v6);
  v7 = *(_DWORD *)(a1 + 292);
  if ( v7 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v7 + 4))(v7);
  Ogre::FixedString::FixedString((Ogre::FixedString *)v15, (Ogre::FixedString *)"blockitem", v5);
  v8 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v8, (const Ogre::FixedString *)v15);
  *(_DWORD *)(a1 + 296) = v8;
  Ogre::FixedString::~FixedString(v15, v9);
  Ogre::ColourValue::setColorQuad((Ogre::ColourValue *)(a1 + 256), a3);
  return a1;
}

