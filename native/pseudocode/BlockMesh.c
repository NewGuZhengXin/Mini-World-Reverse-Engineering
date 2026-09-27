// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BlockMesh

//======================================================================
// BlockMesh::~BlockMesh()
// address: 0x002C6578   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN9BlockMeshD1Ev'
void __fastcall BlockMesh::~BlockMesh(BlockMesh *this)
{
  char *v1; // r5
  _DWORD *v3; // r0
  int v4; // r2

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_45F808;
  v3 = *((_DWORD **)this + 72);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *((_DWORD *)v1 + 9) = 0;
  }
  BaseItemMesh::~BaseItemMesh(this);
}


//======================================================================
// BlockMesh::~BlockMesh()
// address: 0x002C65B4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall BlockMesh::~BlockMesh(BlockMesh *this)
{
  BlockMesh::~BlockMesh(this);
  operator delete(this);
}


//======================================================================
// BlockMesh::updateWorldCache(void)
// address: 0x002C65C8   size: 0x114 (276 bytes)
//======================================================================
int __fastcall BlockMesh::updateWorldCache(BlockMesh *this)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  int v4; // r6
  float v5; // r1
  float v6; // r2
  float v7; // r3
  float *v8; // r7
  float v9; // r1
  float v10; // r0
  float v11; // r1
  float v12; // r0
  float v13; // r1
  float v14; // r0
  float v15; // r1
  float v16; // r0
  int v17; // r1
  char *v18; // r6
  Ogre::Vector3 *v19; // r5
  unsigned int v20; // r1
  unsigned int v21; // r2
  int v22; // r3
  int result; // r0
  int v24; // r1
  int v25; // r4
  _BYTE v26[4]; // [sp+0h] [bp-28h] BYREF
  int v27; // [sp+4h] [bp-24h]
  float v28; // [sp+8h] [bp-20h]
  void *v29; // [sp+Ch] [bp-1Ch]
  _DWORD *v30; // [sp+10h] [bp-18h]
  float v31; // [sp+14h] [bp-14h]
  float v32; // [sp+18h] [bp-10h]
  float v33; // [sp+1Ch] [bp-Ch]
  float v34; // [sp+20h] [bp-8h]
  char *v35; // [sp+24h] [bp-4h]
  _DWORD v36[4]; // [sp+28h] [bp+0h] BYREF
  unsigned int v37; // [sp+68h] [bp+40h] BYREF
  unsigned int v38; // [sp+6Ch] [bp+44h]
  unsigned int v39; // [sp+70h] [bp+48h]
  int v40; // [sp+74h] [bp+4Ch]
  int v41; // [sp+78h] [bp+50h]
  int v42; // [sp+7Ch] [bp+54h]
  int v43; // [sp+80h] [bp+58h]

  Ogre::MovableObject::updateWorldCache(this);
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)v36);
  v2 = *((_DWORD *)this + 74) + 0x80000000;
  v3 = *((_DWORD *)this + 75) + 0x80000000;
  v37 = *((_DWORD *)this + 73) + 0x80000000;
  v38 = v2;
  v39 = v3;
  Ogre::Matrix4::makeTranslateMatrix((Ogre::Matrix4 *)v36, (int *)&v37);
  v29 = (char *)this + 48;
  v4 = 0;
  Ogre::Matrix4::Matrix4((Ogre::Matrix4 *)&v37);
  v30 = v36;
  do
  {
    v5 = *(float *)&v36[v4 + 1];
    v31 = *(float *)&v26[v4 * 4 + 40];
    v6 = *(float *)&v36[v4 + 2];
    v7 = *(float *)&v36[v4 + 3];
    v32 = v5;
    v34 = v7;
    v33 = v6;
    v8 = (float *)((char *)this + 48);
    v27 = 0;
    do
    {
      v9 = *v8;
      v35 = (char *)&v37 + v4 * 4;
      v10 = v31 * v9;
      v11 = v8[4];
      v28 = v10;
      v12 = v32 * v11;
      v13 = v8[8];
      v28 = v28 + v12;
      v14 = v33 * v13;
      v15 = v8[12];
      v28 = v28 + v14;
      v16 = v34 * v15;
      v17 = v27;
      ++v8;
      *(float *)&v35[v27] = v28 + v16;
      v27 = v17 + 4;
    }
    while ( v17 != 12 );
    v4 += 4;
  }
  while ( v4 != 16 );
  Ogre::Matrix4::operator=(v29, &v37);
  v18 = (char *)this + 140;
  v19 = (BlockMesh *)((char *)this + 152);
  *(_DWORD *)v18 = 1112014848;
  *((_DWORD *)v18 + 1) = 1112014848;
  *((_DWORD *)v18 + 2) = 1112014848;
  *(_DWORD *)v19 = 1112014848;
  *((_DWORD *)v19 + 1) = 1112014848;
  *((_DWORD *)v19 + 2) = 1112014848;
  *((float *)v18 + 6) = Ogre::Vector3::length(v19);
  Ogre::BoxSphereBound::transformBy((Ogre::BoxSphereBound *)&v37, (const Ogre::Matrix4 *)v18, (int)v29);
  v20 = v38;
  v21 = v39;
  *(_DWORD *)v18 = v37;
  *((_DWORD *)v18 + 1) = v20;
  v22 = v40;
  result = v41;
  v24 = v42;
  v25 = v43;
  *((_DWORD *)v18 + 2) = v21;
  *(_DWORD *)v19 = v22;
  *((_DWORD *)v19 + 1) = result;
  *((_DWORD *)v19 + 2) = v24;
  *((_DWORD *)v18 + 6) = v25;
  return result;
}


//======================================================================
// BlockMesh::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002C66E0   size: 0x176 (374 bytes)
//======================================================================
void __fastcall BlockMesh::render(BlockMesh *this, Ogre::SceneRenderer *a2, const Ogre::ShaderEnvData *a3)
{
  unsigned int i; // r7
  _DWORD *v5; // r2
  int v6; // r4
  float v7; // r1
  float v8; // r7
  void *v9; // r1
  int v10; // r2
  Ogre::Texture *ParamTexture; // r7
  void *v12; // r1
  int v13; // r2
  void *v14; // r1
  Ogre::ShaderContext *v15; // r5
  int v16; // r1
  int v17; // r2
  void *v18; // r1
  unsigned int v20; // [sp+Ch] [bp-28h]
  Ogre::Material *v21; // [sp+10h] [bp-24h]
  Ogre::FixedString *v23; // [sp+1Ch] [bp-18h] BYREF
  float v24; // [sp+20h] [bp-14h] BYREF
  float v25; // [sp+24h] [bp-10h]
  float v26; // [sp+28h] [bp-Ch]
  int v27; // [sp+2Ch] [bp-8h] BYREF

  if ( *((_DWORD *)this + 72) != 0 )
  {
    for ( i = 0; ; i = v20 + 1 )
    {
      v20 = i;
      v5 = (_DWORD *)(*((_DWORD *)this + 72) + 252);
      if ( i >= (*(_DWORD *)(*((_DWORD *)this + 72) + 256) - *v5) >> 2 )
        break;
      v6 = *(_DWORD *)(4 * i + *v5);
      v21 = *(Ogre::Material **)(v6 + 32);
      v7 = *((float *)this + 69);
      v8 = *((float *)this + 70);
      v24 = *((float *)this + 68);
      v25 = v7;
      v26 = v8;
      v27 = *((_DWORD *)this + 71);
      if ( *(_BYTE *)(v6 + 36) != 0 )
      {
        v25 = v25 * 0.78;
        v24 = v24 * 0.47;
        v26 = v26 * 0.47;
      }
      Ogre::FixedString::FixedString((Ogre::FixedString *)&v23, (Ogre::FixedString *)"GrassColor", (int)&v27);
      Ogre::Material::setParamValue(v21, (const Ogre::FixedString *)&v23, &v24);
      Ogre::FixedString::~FixedString(&v23, v9);
      ParamTexture = *((Ogre::Texture **)this + 80);
      if ( ParamTexture != nullptr )
      {
        Ogre::FixedString::FixedString((Ogre::FixedString *)&v23, (Ogre::FixedString *)"g_DiffuseTex", v10);
        ParamTexture = (Ogre::Texture *)Ogre::Material::GetParamTexture((int)v21, &v23);
        Ogre::FixedString::~FixedString(&v23, v12);
        Ogre::FixedString::FixedString((Ogre::FixedString *)&v23, (Ogre::FixedString *)"g_DiffuseTex", v13);
        Ogre::Material::setParamTexture(v21, (const Ogre::FixedString *)&v23, *((Ogre::Texture **)this + 80), 0);
        Ogre::FixedString::~FixedString(&v23, v14);
      }
      v15 = (Ogre::ShaderContext *)Ogre::SceneRenderer::newContext((int)a2);
      *((_DWORD *)v15 + 13) = *(_DWORD *)a3;
      v16 = *((_DWORD *)a3 + 1);
      *((_DWORD *)v15 + 5) = 0;
      *((_DWORD *)v15 + 14) = v16;
      Ogre::ShaderContext::setVB(v15, *(_DWORD *)(v6 + 24));
      Ogre::ShaderContext::setIB((int)v15, *(_DWORD **)(v6 + 28));
      *((_DWORD *)v15 + 7) = Ogre::VertexData::getVertexDecl(*(Ogre::VertexData **)(v6 + 24));
      Ogre::ShaderContext::setMaterial(v15, *(Ogre::Material **)(v6 + 32));
      *((_DWORD *)v15 + 8) = 4;
      *((_DWORD *)v15 + 10) = ((*(_DWORD *)(*(_DWORD *)(v6 + 28) + 28) - *(_DWORD *)(*(_DWORD *)(v6 + 28) + 24)) >> 1)
                            / 3u;
      Ogre::ShaderContext::setInstanceEnvData(v15, a2, this, a3, nullptr);
      if ( ParamTexture != nullptr )
      {
        Ogre::FixedString::FixedString((Ogre::FixedString *)&v23, (Ogre::FixedString *)"g_DiffuseTex", v17);
        Ogre::Material::setParamTexture(v21, (const Ogre::FixedString *)&v23, ParamTexture, 0);
        Ogre::FixedString::~FixedString(&v23, v18);
      }
    }
  }
}


//======================================================================
// BlockMesh::checkMaterial(void)
// address: 0x002C6870   size: 0x5A (90 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> BlockMesh::checkMaterial(BlockMesh *this, int a2, Ogre::FixedString *a3)
{
  int v3; // r2
  int *v5; // r2
  int v6; // r3
  int v7; // r2
  int v8; // r7
  int ParamByName; // r7
  void *v10; // r1
  Ogre::FixedString *v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[1] = a3;
  *((_BYTE *)this + 316) = 0;
  v3 = *((_DWORD *)this + 72);
  if ( v3 != 0 )
  {
    v5 = (int *)(v3 + 252);
    v6 = *v5;
    v7 = (v5[1] - *v5) >> 2;
    if ( v7 != 0 )
    {
      v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v6 + 32) + 24);
      Ogre::FixedString::FixedString((Ogre::FixedString *)v11, (Ogre::FixedString *)"LightDir", v7);
      ParamByName = Ogre::MaterialTemplate::findParamByName(v8, v11);
      Ogre::FixedString::~FixedString(v11, v10);
      if ( ParamByName >= 0 )
        *((_BYTE *)this + 316) = 1;
    }
  }
}


//======================================================================
// BlockMesh::BlockMesh(SectionMesh *)
// address: 0x002C68D0   size: 0x9C (156 bytes)
//======================================================================
// Alternative name is '_ZN9BlockMeshC2EP11SectionMesh'
void __fastcall BlockMesh::BlockMesh(BlockMesh *this, SectionMesh *a2)
{
  Ogre::FixedString *v4; // r2
  char *v5; // r1

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  v4 = nullptr;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_DWORD *)this + 53) = 0;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  v5 = (char *)this + 252;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 1065353216;
  *((_DWORD *)this + 65) = 1065353216;
  *((_DWORD *)this + 66) = 1065353216;
  *((_DWORD *)this + 67) = 1065353216;
  *((_DWORD *)this + 68) = 1065353216;
  *((_DWORD *)this + 69) = 1065353216;
  *((_DWORD *)this + 70) = 1065353216;
  *((_DWORD *)this + 71) = 1065353216;
  *(_DWORD *)this = &off_45F808;
  *((_DWORD *)this + 72) = a2;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = -1082130432;
  *((_DWORD *)this + 80) = 0;
  if ( a2 != nullptr )
    (*(void (__fastcall **)(SectionMesh *))(*(_DWORD *)a2 + 4))(a2);
  BlockMesh::checkMaterial(this, (int)v5, v4);
}


//======================================================================
// BlockMesh::BlockMesh(int)
// address: 0x002C6980   size: 0xAE (174 bytes)
//======================================================================
// Alternative name is '_ZN9BlockMeshC1Ei'
void __fastcall BlockMesh::BlockMesh(BlockMesh *this, int a2)
{
  BlockMaterial *Material; // r0
  int BlockProtoMesh; // r0
  int v6; // r1
  Ogre::FixedString *v7; // r2

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 1065353216;
  *((_DWORD *)this + 65) = 1065353216;
  *((_DWORD *)this + 66) = 1065353216;
  *((_DWORD *)this + 67) = 1065353216;
  *((_DWORD *)this + 68) = 1065353216;
  *((_DWORD *)this + 69) = 1065353216;
  *((_DWORD *)this + 70) = 1065353216;
  *((_DWORD *)this + 71) = 1065353216;
  *(_DWORD *)this = &off_45F808;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 74) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  *((_DWORD *)this + 77) = 0;
  *((_DWORD *)this + 78) = -1082130432;
  Material = (BlockMaterial *)BlockMaterialMgr::getMaterial(
                                (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                                a2);
  BlockProtoMesh = BlockMaterial::getBlockProtoMesh(Material);
  *((_DWORD *)this + 72) = BlockProtoMesh;
  if ( BlockProtoMesh != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)BlockProtoMesh + 4))(BlockProtoMesh);
  BlockMesh::checkMaterial(this, v6, v7);
}


//======================================================================
// BlockMesh::setLightDir(Ogre::Vector3 const&)
// address: 0x002C6A44   size: 0x70 (112 bytes)
//======================================================================
float __fastcall BlockMesh::setLightDir(BlockMesh *this, const Ogre::Vector3 *a2)
{
  int v3; // r4
  unsigned int v4; // r2
  int v5; // r3
  char *v6; // r4
  float v7; // r7
  float result; // r0

  v3 = *((_DWORD *)a2 + 2);
  v4 = *((_DWORD *)a2 + 1) + 0x80000000;
  *((_DWORD *)this + 76) = *(_DWORD *)a2 + 0x80000000;
  v5 = v3 + 0x80000000;
  v6 = (char *)this + 304;
  *((_DWORD *)this + 77) = v4;
  *((_DWORD *)this + 78) = v5;
  v7 = Ogre::Vector3::length((BlockMesh *)((char *)this + 304));
  LODWORD(result) = v7 > 0.00001;
  if ( v7 <= 0.00001 )
  {
    *((_DWORD *)this + 76) = 0;
    *((_DWORD *)v6 + 1) = 0;
    *((_DWORD *)v6 + 2) = 0;
  }
  else
  {
    *((float *)this + 76) = *((float *)this + 76) * (float)(1.0 / v7);
    *((float *)v6 + 1) = *((float *)v6 + 1) * (float)(1.0 / v7);
    result = *((float *)v6 + 2) * (float)(1.0 / v7);
    *((float *)v6 + 2) = result;
  }
  return result;
}


//======================================================================
// BlockMesh::setCenter(Ogre::Vector3 const&)
// address: 0x002C6AB8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall BlockMesh::setCenter(int a1, _DWORD *a2)
{
  int result; // r0

  *(_DWORD *)(a1 + 292) = *a2;
  result = a1 + 292;
  *(_DWORD *)(result + 4) = a2[1];
  *(_DWORD *)(result + 8) = a2[2];
  return result;
}


//======================================================================
// BlockMesh::setReplaceTex(Ogre::Texture *)
// address: 0x002C6ACE   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall BlockMesh::setReplaceTex(BlockMesh *this, Ogre::Texture *a2)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 17) = a2;
  return result;
}

