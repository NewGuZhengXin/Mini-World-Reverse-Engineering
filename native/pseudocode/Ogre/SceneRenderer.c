// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SceneRenderer

//======================================================================
// Ogre::SceneRenderer::onLostDevice(void)
// address: 0x0015A61C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::SceneRenderer::onLostDevice(Ogre::SceneRenderer *this)
{
  ;
}


//======================================================================
// Ogre::SceneRenderer::onRestoreDevice(void)
// address: 0x0015A61E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::SceneRenderer::onRestoreDevice(Ogre::SceneRenderer *this)
{
  ;
}


//======================================================================
// Ogre::SceneRenderer::~SceneRenderer()
// address: 0x0015A624   size: 0x64 (100 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13SceneRendererD1Ev'
void __fastcall Ogre::SceneRenderer::~SceneRenderer(Ogre::SceneRenderer *this)
{
  void *v2; // r5
  void *v3; // r5

  *(_DWORD *)this = &off_4567D8;
  Ogre::BaseObject::release(*((_DWORD **)this + 151));
  Ogre::BaseObject::release(*((_DWORD **)this + 152));
  Ogre::BaseObject::release(*((_DWORD **)this + 147));
  v2 = *((void **)this + 149);
  if ( v2 != nullptr )
  {
    Ogre::CullResult::~CullResult(*((Ogre::CullResult **)this + 149));
    operator delete(v2);
  }
  v3 = *((void **)this + 150);
  if ( v3 != nullptr )
  {
    Ogre::CullResult::~CullResult(*((Ogre::CullResult **)this + 150));
    operator delete(v3);
  }
  Ogre::CullFrustum::~CullFrustum((Ogre::SceneRenderer *)((char *)this + 28));
}


//======================================================================
// Ogre::SceneRenderer::~SceneRenderer()
// address: 0x0015A68C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::SceneRenderer::~SceneRenderer(Ogre::SceneRenderer *this)
{
  Ogre::SceneRenderer::~SceneRenderer(this);
  operator delete(this);
}


//======================================================================
// Ogre::SceneRenderer::SceneRenderer(void)
// address: 0x0015A790   size: 0xC2 (194 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13SceneRendererC1Ev'
Ogre::SceneRenderer *__fastcall Ogre::SceneRenderer::SceneRenderer(Ogre::SceneRenderer *this)
{
  Ogre::Camera *v2; // r7
  Ogre::Camera *v3; // r7
  Ogre::Camera *v4; // r6
  Ogre::CullResult *v5; // r6
  Ogre::CullResult *v6; // r5

  *(_DWORD *)this = &off_4567D8;
  *((_BYTE *)this + 16) = 1;
  Ogre::CullFrustum::CullFrustum((Ogre::SceneRenderer *)((char *)this + 28));
  *((_DWORD *)this + 143) = 0;
  *((_DWORD *)this + 144) = 0;
  *((_DWORD *)this + 146) = 0;
  *((_DWORD *)this + 153) = 0;
  *((_DWORD *)this + 154) = 0;
  *((_DWORD *)this + 155) = 6;
  *((_DWORD *)this + 156) = -16777216;
  *((_DWORD *)this + 157) = 1065353216;
  *((_DWORD *)this + 158) = 0;
  v2 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v2);
  *((_DWORD *)this + 151) = v2;
  v3 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v3);
  *((_DWORD *)this + 152) = v3;
  v4 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v4);
  *((_DWORD *)this + 147) = v4;
  *((_DWORD *)this + 148) = 0;
  v5 = (Ogre::CullResult *)operator new(0x234u);
  Ogre::CullResult::CullResult(v5);
  *((_DWORD *)this + 149) = v5;
  v6 = (Ogre::CullResult *)operator new(0x234u);
  Ogre::CullResult::CullResult(v6);
  *((_DWORD *)this + 150) = v6;
  return this;
}


//======================================================================
// Ogre::SceneRenderer::newContext(Ogre::RenderLayer)
// address: 0x0015A858   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::SceneRenderer::newContext(int a1)
{
  return Ogre::ShaderContextPool::newContext(*(_DWORD *)(a1 + 572));
}


//======================================================================
// Ogre::SceneRenderer::newContext(Ogre::RenderLayer,Ogre::ShaderEnvData const&,Ogre::Material *,unsigned int,Ogre::VertexBuffer *,Ogre::IndexBuffer *,Ogre::PrimitiveType,unsigned int,bool)
// address: 0x0015A866   size: 0x4A (74 bytes)
//======================================================================
Ogre::ShaderContext *__fastcall Ogre::SceneRenderer::newContext(
        int a1,
        int a2,
        _DWORD *a3,
        Ogre::Material *a4,
        int a5,
        Ogre::VertexBuffer *a6,
        Ogre::IndexBuffer *a7,
        int a8,
        int a9,
        char a10)
{
  Ogre::ShaderContext *v12; // r4

  v12 = (Ogre::ShaderContext *)Ogre::SceneRenderer::newContext(a1);
  Ogre::ShaderContext::setIB(v12, a7);
  Ogre::ShaderContext::setVB(v12, a6);
  Ogre::ShaderContext::setMaterial(v12, a4);
  *((_DWORD *)v12 + 7) = a5;
  *((_DWORD *)v12 + 10) = a9;
  *((_DWORD *)v12 + 8) = a8;
  *((_DWORD *)v12 + 13) = *a3;
  *((_DWORD *)v12 + 14) = a3[1];
  if ( a10 != 0 )
    *((_DWORD *)v12 + 6) |= 1u;
  return v12;
}


//======================================================================
// Ogre::SceneRenderer::newDynamicIB(unsigned int)
// address: 0x0015A8B0   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::SceneRenderer::newDynamicIB(Ogre::DynamicBufferPool **this, unsigned int a2)
{
  return Ogre::DynamicBufferPool::allocIndexBuffer(*(this + 144), a2);
}


//======================================================================
// Ogre::SceneRenderer::newDynamicVB(Ogre::VertexFormat const&,unsigned int)
// address: 0x0015A8BE   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::SceneRenderer::newDynamicVB(
        Ogre::DynamicBufferPool **this,
        const Ogre::VertexFormat *a2,
        unsigned int a3)
{
  return Ogre::DynamicBufferPool::allocVertexBuffer(*(this + 144), a2, a3);
}


//======================================================================
// Ogre::SceneRenderer::AddActorToBackScene(Ogre::CullResult const*)
// address: 0x0015A94C   size: 0x3E (62 bytes)
//======================================================================
int __fastcall Ogre::SceneRenderer::AddActorToBackScene(int a1, int a2)
{
  int v3; // r4
  int v4; // r6
  int result; // r0

  v3 = 0;
  v4 = (*(_DWORD *)(a2 + 556) - *(_DWORD *)(a2 + 552)) >> 4;
  while ( v3 != v4 )
  {
    if ( *(_BYTE *)(*(_DWORD *)(*(_DWORD *)(a2 + 552) + 16 * v3 + 4) + 233) != 0 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton + 32))(Ogre::Singleton<Ogre::BackGameScene>::ms_Singleton);
    ++v3;
  }
  return result;
}


//======================================================================
// Ogre::SceneRenderer::RenderResult(Ogre::ShaderEnvData &,Ogre::CullResult const*,Ogre::RenderTarget *,unsigned int,unsigned int,float,unsigned int,unsigned int,Ogre::Plane *,Ogre::RenderUsage,unsigned int,int)
// address: 0x0015B24C   size: 0x29A (666 bytes)
//======================================================================
void __fastcall Ogre::SceneRenderer::RenderResult(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        void *a10,
        int a11,
        int a12)
{
  int v14; // r1
  _DWORD *v15; // r2
  int v16; // r6
  int v17; // r1
  int v18; // r6
  int v19; // r2
  _DWORD *v20; // r3
  int v21; // r0
  _DWORD *v22; // r1
  int ViewMatrix; // r0
  int ProjectMatrix; // r0
  _BYTE *v25; // r6
  int v26; // r0
  int v27; // r1
  int v28; // r4
  char *v29; // r6
  int v30; // r0
  __int64 v31; // r0
  float *j; // r6
  int k; // r6
  int v34; // r6
  char *WorldMatrix; // r2
  int *v36; // [sp+Ch] [bp-100h]
  int v37; // [sp+Ch] [bp-100h]
  int v38; // [sp+10h] [bp-FCh]
  unsigned int v39; // [sp+10h] [bp-FCh]
  int i; // [sp+14h] [bp-F8h]
  void (__fastcall *v42)(int, int, char *); // [sp+20h] [bp-ECh]
  int v43; // [sp+24h] [bp-E8h]
  void *v44; // [sp+2Ch] [bp-E0h] BYREF
  _BYTE *v45; // [sp+30h] [bp-DCh]
  int v46; // [sp+34h] [bp-D8h]
  _DWORD v47[12]; // [sp+6Ch] [bp-A0h] BYREF
  _BYTE v48[96]; // [sp+9Ch] [bp-70h] BYREF
  int v49; // [sp+FCh] [bp-10h]
  int v50; // [sp+100h] [bp-Ch]
  int v51; // [sp+104h] [bp-8h]

  *(_DWORD *)(a1 + 12) = a11;
  v47[10] = 1065353216;
  v47[8] = 1065353216;
  v47[7] = 1065353216;
  v47[0] = a4;
  v47[1] = a5;
  v49 = 1;
  v50 = 0;
  v51 = 0;
  v47[9] = 0;
  v47[6] = 0;
  v47[5] = 0;
  v47[2] = a6;
  v47[3] = a7;
  v47[4] = a8;
  v47[11] = a9;
  if ( a9 != 0 )
    j_memcpy(v48, a10, 16 * a9);
  v14 = *(_DWORD *)(*(_DWORD *)a3 + 220);
  v16 = *(_DWORD *)(*(_DWORD *)a3 + 224);
  v15 = (_DWORD *)(*(_DWORD *)a3 + 228);
  v47[5] = *(_DWORD *)(*(_DWORD *)a3 + 216);
  v47[6] = v14;
  v47[7] = v16;
  v17 = v15[1];
  v18 = v15[2];
  v47[8] = *v15;
  v47[9] = v17;
  v47[10] = v18;
  v49 = a11;
  Ogre::ShaderContextPool::startQueue(*(Ogre::ShaderContextPool **)(a1 + 572), (const Ogre::ContextQueDesc *)v47);
  v19 = 0;
  v20 = (_DWORD *)Ogre::Singleton<Ogre::SceneManager>::ms_Singleton;
  do
  {
    v21 = v20[v19 + 7];
    v22 = (_DWORD *)(a2 + v19 * 4 + 1176);
    ++v19;
    *v22 = v21;
  }
  while ( v19 != 16 );
  *(_DWORD *)(a2 + 1240) = v20[23];
  *(_DWORD *)(a2 + 1244) = v20[24];
  *(_DWORD *)(a2 + 1248) = v20[25];
  *(_DWORD *)(a2 + 1252) = v20[26];
  *(_DWORD *)(a2 + 1256) = v20[27];
  *(_DWORD *)(a2 + 1260) = v20[28];
  ViewMatrix = Ogre::Camera::getViewMatrix(*(Ogre::Camera **)a3);
  Ogre::Matrix4::operator=(a2 + 956, ViewMatrix);
  ProjectMatrix = Ogre::Camera::getProjectMatrix(*(Ogre::Camera **)a3);
  Ogre::Matrix4::operator=(a2 + 1020, ProjectMatrix);
  Ogre::operator*((Ogre::Matrix4 *)&v44, (float *)(a2 + 956), (float *)(a2 + 1020));
  Ogre::Matrix4::operator=(a2 + 1084, &v44);
  Ogre::WorldPos::toVector3((Ogre::WorldPos *)&v44, (_DWORD *)(*(_DWORD *)a3 + 8));
  v25 = v45;
  v26 = v46;
  *(_DWORD *)(a2 + 1148) = v44;
  *(_DWORD *)(a2 + 1152) = v25;
  *(_DWORD *)(a2 + 1156) = v26;
  *(_DWORD *)(a2 + 8) = a11;
  v27 = *(_DWORD *)(a3 + 556) - *(_DWORD *)(a3 + 552);
  v44 = nullptr;
  v43 = v27 >> 4;
  v45 = nullptr;
  v46 = 0;
  for ( i = 0; i != v43; ++i )
  {
    v28 = *(_DWORD *)(*(_DWORD *)(a3 + 552) + 16 * i + 4);
    Ogre::MovableObject::getTransparent((Ogre::MovableObject **)v28);
    if ( v28 != 0 && (*(_DWORD *)(v28 + 244) & (1 << a11)) != 0 && (a12 & (1 << *(_DWORD *)(v28 + 240))) != 0 )
    {
      j_memset((void *)a2, 0, 8u);
      *(_DWORD *)(a2 + 156) = 0;
      *(_DWORD *)(a2 + 160) = 0;
      *(_DWORD *)(a2 + 164) = 0;
      *(_DWORD *)(a2 + 168) = 0;
      if ( ((1 << a11) & 0x28) == 0 )
      {
        if ( (v45 - (_BYTE *)v44) >> 3 != 0 )
          v45 = v44;
        (*(void (__fastcall **)(_DWORD, void **, int))(**(_DWORD **)(a1 + 616) + 56))(*(_DWORD *)(a1 + 616), &v44, v28);
        v29 = (char *)v44;
        v36 = (int *)v45;
        if ( v44 != v45 )
        {
          v38 = v45 - (_BYTE *)v44;
          v30 = j___clzsi2((v45 - (_BYTE *)v44) >> 3);
          std::__introsort_loop<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>,int>(
            (int)v29,
            v36,
            2 * (31 - v30));
          if ( v38 <= 135 )
          {
            std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>>(__SPAIR64__((unsigned int)v36, (unsigned int)v29));
          }
          else
          {
            LODWORD(v31) = v29;
            HIDWORD(v31) = v29 + 128;
            std::__insertion_sort<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>>(v31);
            for ( j = (float *)(v29 + 128); j != (float *)v36; j += 2 )
              std::__unguarded_linear_insert<__gnu_cxx::__normal_iterator<Ogre::RenderableEffectInfo *,std::vector<Ogre::RenderableEffectInfo>>>(j);
          }
        }
        v39 = (v45 - (_BYTE *)v44) >> 3;
        if ( v39 > 7 )
          v39 = 7;
        for ( k = 0; ; k = v37 + 1 )
        {
          v37 = k;
          if ( k == v39 )
            break;
          if ( (_UNKNOWN *)(**(int (__fastcall ***)(int))v28)(v28) == &Ogre::PlantSetNode::m_RTTI )
          {
            (*(void (__fastcall **)(_DWORD, int, void *))(**((_DWORD **)v44 + 2 * k) + 76))(
              *((_DWORD *)v44 + 2 * k),
              a2,
              &Ogre::Matrix4::Iden);
          }
          else
          {
            v34 = *((_DWORD *)v44 + 2 * k);
            v42 = *(void (__fastcall **)(int, int, char *))(*(_DWORD *)v34 + 76);
            WorldMatrix = Ogre::MovableObject::getWorldMatrix((Ogre::MovableObject *)v28);
            v42(v34, a2, WorldMatrix);
          }
        }
      }
      (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v28 + 72))(v28, a1, a2);
    }
  }
  Ogre::ShaderContextPool::endQueue(*(Ogre::ShaderContextPool **)(a1 + 572));
  if ( v44 != nullptr )
    operator delete(v44);
}

