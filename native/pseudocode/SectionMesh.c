// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: SectionMesh

//======================================================================
// SectionMesh::~SectionMesh()
// address: 0x002CD944   size: 0x4A (74 bytes)
//======================================================================
// Alternative name is '_ZN11SectionMeshD1Ev'
void __fastcall SectionMesh::~SectionMesh(SectionMesh *this)
{
  unsigned int v2; // r5
  _DWORD *v3; // r0
  void *v4; // r6

  v2 = 0;
  *(_DWORD *)this = &off_45FE48;
  while ( 1 )
  {
    v3 = *((_DWORD **)this + 63);
    if ( v2 >= (*((_DWORD *)this + 64) - (int)v3) >> 2 )
      break;
    v4 = (void *)v3[v2];
    if ( v4 != nullptr )
    {
      SectionSubMesh::~SectionSubMesh((SectionSubMesh *)v3[v2]);
      operator delete(v4);
    }
    ++v2;
  }
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::RenderableObject::~RenderableObject(this);
}


//======================================================================
// SectionMesh::~SectionMesh()
// address: 0x002CD994   size: 0x12 (18 bytes)
//======================================================================
void __fastcall SectionMesh::~SectionMesh(SectionMesh *this)
{
  SectionMesh::~SectionMesh(this);
  operator delete(this);
}


//======================================================================
// SectionMesh::SectionMesh(bool)
// address: 0x002CDAA4   size: 0x104 (260 bytes)
//======================================================================
// Alternative name is '_ZN11SectionMeshC2Eb'
void __fastcall SectionMesh::SectionMesh(SectionMesh *this, bool a2)
{
  int *v4; // r7

  Ogre::MovableObject::MovableObject(this);
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  *(_DWORD *)this = &off_45FE48;
  *((_BYTE *)this + 249) = a2;
  *((_DWORD *)this + 63) = 0;
  *((_DWORD *)this + 64) = 0;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 68) = 0;
  if ( SectionMesh::m_VertFmt == 0 )
  {
    v4 = (int *)operator new(0xCu);
    Ogre::VertexFormat::VertexFormat(v4);
    SectionMesh::m_VertFmt = (int)v4;
    Ogre::VertexFormat::addElement(v4, 8u, 1u, 0, 0, -1);
    Ogre::VertexFormat::addElement((int *)SectionMesh::m_VertFmt, 9u, 4u, 0, 0, -1);
    Ogre::VertexFormat::addElement((int *)SectionMesh::m_VertFmt, 9u, 5u, 0, 0, -1);
    Ogre::VertexFormat::addElement((int *)SectionMesh::m_VertFmt, 9u, 7u, 0, 0, -1);
    SectionMesh::m_VertDecl = (*(int (__fastcall **)(int, int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton
                                                              + 36))(
                                Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton,
                                SectionMesh::m_VertFmt);
  }
}


//======================================================================
// SectionMesh::onCreate(void)
// address: 0x002CDBBC   size: 0x24 (36 bytes)
//======================================================================
int __fastcall SectionMesh::onCreate(__int64 this)
{
  int v1; // r5
  unsigned int i; // r4
  int v3; // r3

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(v1 + 252);
    if ( i >= (*(_DWORD *)(v1 + 256) - v3) >> 2 )
      break;
    LODWORD(this) = *(_DWORD *)(4 * i + v3);
    this = SectionSubMesh::onCreate(this, 4 * i);
  }
  return this;
}


//======================================================================
// SectionMesh::isEmpty(void)
// address: 0x002CDBE0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall SectionMesh::isEmpty(SectionMesh *this)
{
  int *v1; // r0
  int v2; // r2
  int v3; // r3
  int v4; // r0

  v1 = (int *)((char *)this + 252);
  v2 = *v1;
  v3 = 0;
  v4 = (v1[1] - *v1) >> 2;
  while ( 1 )
  {
    if ( v3 == v4 )
      return 1;
    if ( **(_DWORD **)(v2 + 4 * v3) != *(_DWORD *)(*(_DWORD *)(v2 + 4 * v3) + 4) )
      break;
    ++v3;
  }
  return 0;
}


//======================================================================
// SectionMesh::renderStatic(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002CDC0A   size: 0xDA (218 bytes)
//======================================================================
Ogre::Matrix4 *__fastcall SectionMesh::renderStatic(
        SectionMesh *this,
        Ogre::SceneRenderer *a2,
        const Ogre::ShaderEnvData *a3)
{
  float *WorldMatrix; // r0
  Ogre::Matrix4 *result; // r0
  int v7; // r3
  int v8; // r5
  Ogre::ShaderContext *v9; // r4
  unsigned int i; // [sp+Ch] [bp-50h]
  _BYTE v12[56]; // [sp+18h] [bp-44h] BYREF
  int v13; // [sp+50h] [bp-Ch]

  WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(this);
  result = Ogre::operator*((Ogre::Matrix4 *)v12, WorldMatrix, (float *)a3 + 239);
  for ( i = 0; ; ++i )
  {
    v7 = *((_DWORD *)this + 63);
    if ( i >= (*((_DWORD *)this + 64) - v7) >> 2 )
      break;
    v8 = *(_DWORD *)(4 * i + v7);
    if ( *(_DWORD *)v8 != *(_DWORD *)(v8 + 4)
      && *(_DWORD *)(v8 + 24) != 0
      && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v8 + 32) + 24) + 52) & (1 << *((_DWORD *)a3 + 2))) != 0 )
    {
      v9 = (Ogre::ShaderContext *)Ogre::SceneRenderer::newContext((int)a2);
      *((_DWORD *)v9 + 13) = *(_DWORD *)a3;
      *((_DWORD *)v9 + 14) = *((_DWORD *)a3 + 1);
      *((_DWORD *)v9 + 5) = v13;
      Ogre::ShaderContext::setVB(v9, *(_DWORD *)(v8 + 24));
      Ogre::ShaderContext::setIB((int)v9, *(_DWORD **)(v8 + 28));
      *((_DWORD *)v9 + 7) = Ogre::VertexData::getVertexDecl(*(Ogre::VertexData **)(v8 + 24));
      Ogre::ShaderContext::setMaterial(v9, *(Ogre::Material **)(v8 + 32));
      *((_DWORD *)v9 + 8) = 4;
      *((_DWORD *)v9 + 10) = ((*(_DWORD *)(*(_DWORD *)(v8 + 28) + 28) - *(_DWORD *)(*(_DWORD *)(v8 + 28) + 24)) >> 1)
                           / 3u;
      *((_DWORD *)v9 + 26) = *((_DWORD *)this + 66);
      *((_DWORD *)v9 + 27) = *((_DWORD *)this + 67);
      *((_DWORD *)v9 + 28) = *((_DWORD *)this + 68);
      result = (Ogre::Matrix4 *)Ogre::ShaderContext::setInstanceEnvData(v9, a2, this, a3, nullptr);
    }
  }
  return result;
}


//======================================================================
// SectionMesh::renderDynamic(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002CDCE4   size: 0x15C (348 bytes)
//======================================================================
Ogre::Matrix4 *__fastcall SectionMesh::renderDynamic(
        SectionMesh *this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::ShaderEnvData *a3)
{
  float *WorldMatrix; // r0
  Ogre::Matrix4 *result; // r0
  int v6; // r3
  int v7; // r4
  Ogre::ShaderContext *v8; // r0
  Ogre::ShaderContext *v9; // r5
  int Stride; // r0
  int v11; // r3
  Ogre::DynamicIndexBuffer *v12; // [sp+Ch] [bp-68h]
  void *v13; // [sp+10h] [bp-64h]
  Ogre::DynamicVertexBuffer *v15; // [sp+18h] [bp-5Ch]
  unsigned int i; // [sp+1Ch] [bp-58h]
  void *v18; // [sp+24h] [bp-50h]
  int v19; // [sp+28h] [bp-4Ch]
  void *v20; // [sp+2Ch] [bp-48h]
  char v21[56]; // [sp+30h] [bp-44h] BYREF
  int v22; // [sp+68h] [bp-Ch]

  WorldMatrix = (float *)Ogre::MovableObject::getWorldMatrix(this);
  result = Ogre::operator*((Ogre::Matrix4 *)v21, WorldMatrix, (float *)a3 + 239);
  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 63);
    if ( i >= (*((_DWORD *)this + 64) - v6) >> 2 )
      break;
    v7 = *(_DWORD *)(4 * i + v6);
    if ( *(_DWORD *)v7 != *(_DWORD *)(v7 + 4)
      && (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v7 + 32) + 24) + 52) & (1 << *((_DWORD *)a3 + 2))) != 0 )
    {
      v8 = (Ogre::ShaderContext *)Ogre::SceneRenderer::newContext((int)a2);
      *((_DWORD *)v8 + 13) = *(_DWORD *)a3;
      v9 = v8;
      *((_DWORD *)v8 + 14) = *((_DWORD *)a3 + 1);
      *((_DWORD *)v8 + 5) = v22;
      v15 = (Ogre::DynamicVertexBuffer *)Ogre::SceneRenderer::newDynamicVB(
                                           a2,
                                           (const Ogre::VertexFormat *)SectionMesh::m_VertFmt,
                                           -858993459 * ((*(_DWORD *)(v7 + 4) - *(_DWORD *)v7) >> 2));
      v12 = (Ogre::DynamicIndexBuffer *)Ogre::SceneRenderer::newDynamicIB(
                                          a2,
                                          (*(_DWORD *)(v7 + 16) - *(_DWORD *)(v7 + 12)) >> 1);
      v18 = (void *)Ogre::DynamicVertexBuffer::lock(v15);
      v20 = (void *)Ogre::DynamicIndexBuffer::lock(v12);
      v13 = *(void **)v7;
      v19 = -858993459 * ((*(_DWORD *)(v7 + 4) - *(_DWORD *)v7) >> 2);
      Stride = Ogre::VertexFormat::getStride((Ogre::VertexFormat *)SectionMesh::m_VertFmt);
      j_memcpy(v18, v13, v19 * Stride);
      j_memcpy(v20, *(const void **)(v7 + 12), 2 * ((*(_DWORD *)(v7 + 16) - *(_DWORD *)(v7 + 12)) >> 1));
      v11 = -858993459 * ((*(_DWORD *)(v7 + 4) - *(_DWORD *)v7) >> 2);
      *((_DWORD *)v12 + 4) = 0;
      *((_DWORD *)v12 + 5) = v11;
      Ogre::ShaderContext::setVB(v9, (int)v15);
      Ogre::ShaderContext::setIB((int)v9, v12);
      *((_DWORD *)v9 + 7) = SectionMesh::m_VertDecl;
      Ogre::ShaderContext::setMaterial(v9, *(Ogre::Material **)(v7 + 32));
      *((_DWORD *)v9 + 8) = 4;
      *((_DWORD *)v9 + 10) = ((*(_DWORD *)(v7 + 16) - *(_DWORD *)(v7 + 12)) >> 1) / 3u;
      *((_DWORD *)v9 + 26) = *((_DWORD *)this + 66);
      *((_DWORD *)v9 + 27) = *((_DWORD *)this + 67);
      *((_DWORD *)v9 + 28) = *((_DWORD *)this + 68);
      result = (Ogre::Matrix4 *)Ogre::ShaderContext::setInstanceEnvData(
                                  v9,
                                  (Ogre::SceneRenderer *)a2,
                                  this,
                                  a3,
                                  nullptr);
    }
  }
  return result;
}


//======================================================================
// SectionMesh::render(Ogre::SceneRenderer *,Ogre::ShaderEnvData const&)
// address: 0x002CDE4C   size: 0x18 (24 bytes)
//======================================================================
Ogre::Matrix4 *__fastcall SectionMesh::render(
        SectionMesh *this,
        Ogre::DynamicBufferPool **a2,
        const Ogre::ShaderEnvData *a3)
{
  if ( *((_BYTE *)this + 249) != 0 )
    return SectionMesh::renderDynamic(this, a2, a3);
  else
    return SectionMesh::renderStatic(this, (Ogre::SceneRenderer *)a2, a3);
}


//======================================================================
// SectionMesh::getSubMesh(Ogre::Material *)
// address: 0x002CDEE4   size: 0x6C (108 bytes)
//======================================================================
Ogre::Material *__fastcall SectionMesh::getSubMesh(SectionMesh *this, Ogre::Material *a2)
{
  char *v2; // r4
  int v3; // r2
  int v5; // r1
  int i; // r3
  Ogre::Material *result; // r0
  SectionSubMesh *v8; // r6
  int v9; // r3
  SectionSubMesh **v10; // r3
  Ogre::Material *v11; // [sp+4h] [bp-4h] BYREF

  v11 = a2;
  v2 = (char *)this + 252;
  v3 = *((_DWORD *)this + 63);
  v5 = (*((_DWORD *)this + 64) - v3) >> 2;
  for ( i = 0; i != v5; ++i )
  {
    result = *(Ogre::Material **)(v3 + 4 * i);
    if ( *((Ogre::Material **)result + 8) == a2 )
      return result;
  }
  v8 = (SectionSubMesh *)operator new(0x28u);
  SectionSubMesh::SectionSubMesh(v8);
  v9 = *(_DWORD *)a2;
  v11 = v8;
  (*(void (__fastcall **)(Ogre::Material *))(v9 + 4))(a2);
  *((_DWORD *)v8 + 8) = a2;
  v10 = *((SectionSubMesh ***)v2 + 1);
  if ( v10 == *((SectionSubMesh ***)v2 + 2) )
  {
    std::vector<SectionSubMesh *>::_M_emplace_back_aux<SectionSubMesh * const&>((int)v2, &v11);
  }
  else
  {
    if ( v10 != nullptr )
      *v10 = v8;
    *((_DWORD *)v2 + 1) += 4;
  }
  return v11;
}


//======================================================================
// SectionMesh::reset(bool)
// address: 0x002CDFB2   size: 0x28 (40 bytes)
//======================================================================
void __fastcall SectionMesh::reset(SectionMesh *this, int a2)
{
  unsigned int i; // r4
  int v5; // r3

  for ( i = 0; ; ++i )
  {
    v5 = *((_DWORD *)this + 63);
    if ( i >= (*((_DWORD *)this + 64) - v5) >> 2 )
      break;
    SectionSubMesh::reset(*(SectionSubMesh **)(4 * i + v5), a2);
  }
}

