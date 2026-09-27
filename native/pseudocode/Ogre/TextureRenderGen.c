// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::TextureRenderGen

//======================================================================
// Ogre::TextureRenderGen::doRender(void)
// address: 0x0015F4A0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::TextureRenderGen::doRender(Ogre::TextureRenderGen *this)
{
  ;
}


//======================================================================
// Ogre::TextureRenderGen::onRestoreDevice(void)
// address: 0x0015F4A2   size: 0x64 (100 bytes)
//======================================================================
int __fastcall Ogre::TextureRenderGen::onRestoreDevice(Ogre::TextureRenderGen *this)
{
  int v2; // r6
  int v3; // r0
  int result; // r0
  int v5; // [sp+8h] [bp-24h] BYREF
  int v6; // [sp+Ch] [bp-20h] BYREF
  int v7; // [sp+10h] [bp-1Ch]
  int v8; // [sp+14h] [bp-18h]
  int v9; // [sp+1Ch] [bp-10h]
  int v10; // [sp+20h] [bp-Ch]

  v7 = *((_DWORD *)this + 160);
  v8 = *((_DWORD *)this + 161);
  v10 = 28;
  v5 = 4;
  v9 = 1;
  v6 = 0;
  v2 = operator new(0x30u);
  Ogre::RT_TEXTURE::RT_TEXTURE(v2, &v6, &v5);
  *((_DWORD *)this + 163) = v2;
  v3 = (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 32))(v2);
  result = (*(int (__fastcall **)(_DWORD, int, _DWORD, int, _DWORD, int, int, int, int, int))(**(_DWORD **)(v3 + 12) + 24))(
             *(_DWORD *)(v3 + 12),
             v3,
             0,
             16,
             0,
             1,
             v5,
             v6,
             v7,
             v8);
  *((_DWORD *)this + 164) = result;
  return result;
}


//======================================================================
// Ogre::TextureRenderGen::onLostDevice(void)
// address: 0x0015F506   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall Ogre::TextureRenderGen::onLostDevice(Ogre::TextureRenderGen *this)
{
  _DWORD *v2; // r0
  _DWORD *result; // r0

  v2 = *((_DWORD **)this + 163);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 163) = 0;
  }
  result = *((_DWORD **)this + 164);
  if ( result != nullptr )
  {
    result = Ogre::BaseObject::release(result);
    *((_DWORD *)this + 164) = 0;
  }
  return result;
}


//======================================================================
// Ogre::TextureRenderGen::~TextureRenderGen()
// address: 0x0015F530   size: 0x40 (64 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16TextureRenderGenD1Ev'
void __fastcall Ogre::TextureRenderGen::~TextureRenderGen(Ogre::TextureRenderGen *this)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_456A10;
  Ogre::TextureRenderGen::onLostDevice(this);
  v2 = *((_DWORD **)this + 146);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *((_DWORD *)this + 146) = 0;
  }
  v3 = *((_DWORD **)this + 154);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 154) = 0;
  }
  Ogre::SceneRenderer::~SceneRenderer(this);
}


//======================================================================
// Ogre::TextureRenderGen::~TextureRenderGen()
// address: 0x0015F574   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::TextureRenderGen::~TextureRenderGen(Ogre::TextureRenderGen *this)
{
  Ogre::TextureRenderGen::~TextureRenderGen(this);
  operator delete(this);
}


//======================================================================
// Ogre::TextureRenderGen::TextureRenderGen(int,int)
// address: 0x0015F588   size: 0x9A (154 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16TextureRenderGenC1Eii'
Ogre::TextureRenderGen *__fastcall Ogre::TextureRenderGen::TextureRenderGen(
        Ogre::Camera **this,
        Ogre::Camera *a2,
        Ogre::Camera *a3)
{
  Ogre::Camera *v6; // r5
  Ogre::Camera *v7; // r0
  Ogre::SimpleGameScene *v8; // r5
  _DWORD v10[3]; // [sp+4h] [bp-28h] BYREF
  _DWORD v11[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v12[4]; // [sp+1Ch] [bp-10h] BYREF

  Ogre::SceneRenderer::SceneRenderer((Ogre::SceneRenderer *)this);
  *this = (Ogre::Camera *)&off_456A10;
  *(this + 160) = a2;
  *(this + 161) = a3;
  *(this + 163) = nullptr;
  *(this + 164) = nullptr;
  v6 = (Ogre::Camera *)operator new(0x268u);
  Ogre::Camera::Camera(v6);
  *(this + 146) = v6;
  *((_DWORD *)v6 + 60) = 0;
  *((_DWORD *)v6 + 61) = 1127153664;
  v7 = *(this + 146);
  v10[1] = 2500;
  v10[0] = 2500;
  v12[0] = 0;
  v10[2] = -1500;
  v11[1] = 500;
  v11[2] = 500;
  v11[0] = 500;
  v12[1] = 1065353216;
  v12[2] = 0;
  Ogre::Camera::setLookAt(v7, (const Ogre::WorldPos *)v10, (const Ogre::WorldPos *)v11, (const Ogre::Vector3 *)v12);
  v8 = (Ogre::SimpleGameScene *)operator new(0x5Cu);
  Ogre::SimpleGameScene::SimpleGameScene(v8);
  *(this + 154) = v8;
  Ogre::TextureRenderGen::onRestoreDevice((Ogre::TextureRenderGen *)this);
  return (Ogre::TextureRenderGen *)this;
}


//======================================================================
// Ogre::TextureRenderGen::gen(int,int,Ogre::RenderableObject **,int)
// address: 0x0015F634   size: 0x276 (630 bytes)
//======================================================================
int __fastcall Ogre::TextureRenderGen::gen(
        Ogre::TextureRenderGen *this,
        int a2,
        int a3,
        Ogre::RenderableObject **a4,
        int a5)
{
  int v5; // r3
  int v6; // r2
  Ogre::SceneManager *v8; // r7
  int v9; // r1
  Ogre::RenderableObject *v10; // r5
  const void *v11; // r5
  void *v12; // r0
  int i; // [sp+40h] [bp-55Ch]
  float v16; // [sp+44h] [bp-558h]
  int v17; // [sp+48h] [bp-554h]
  int v18; // [sp+4Ch] [bp-550h]
  float v20; // [sp+54h] [bp-548h]
  _BYTE v22[12]; // [sp+60h] [bp-53Ch] BYREF
  _DWORD v23[7]; // [sp+6Ch] [bp-530h] BYREF
  _BYTE v24[1300]; // [sp+88h] [bp-514h] BYREF

  v5 = *((_DWORD *)this + 161);
  v6 = *((_DWORD *)this + 160);
  v23[0] = 0;
  v23[2] = v5;
  v23[5] = 12;
  v23[1] = v6;
  v23[4] = 1;
  v17 = operator new(0x48u);
  Ogre::TextureData::TextureData(v17, v23, 1);
  if ( *((_DWORD *)this + 164) != 0 )
  {
    v8 = (Ogre::SceneManager *)Ogre::Singleton<Ogre::SceneManager>::ms_Singleton;
    Ogre::RenderPool::reset(*(Ogre::ShaderContextPool ***)Ogre::Singleton<Ogre::SceneManager>::ms_Singleton);
    *((_DWORD *)this + 143) = *(_DWORD *)(*(_DWORD *)v8 + 8);
    *((_DWORD *)this + 144) = *(_DWORD *)(*(_DWORD *)v8 + 12);
    Ogre::ShaderEnvData::ShaderEnvData((Ogre::ShaderEnvData *)v24);
    Ogre::Camera::setViewport(
      *((Ogre::Camera **)this + 146),
      0.0,
      0.0,
      (float)*((int *)this + 160),
      (float)*((int *)this + 161),
      0.0,
      1.0);
    (*(void (__fastcall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 154) + 60))(
      *((_DWORD *)this + 154),
      *((_DWORD *)this + 146),
      1);
    Ogre::SceneRenderer::RenderResult(
      (int)this,
      (int)v24,
      *(_DWORD *)(*((_DWORD *)this + 146) + 212),
      *((_DWORD *)this + 164),
      6,
      0,
      1065353216,
      0,
      0,
      nullptr,
      1,
      -1);
    v18 = *((_DWORD *)this + 160) / a2;
    v16 = (float)a2 / (float)(a2 * v18);
    v20 = (float)a3 / (float)(*((_DWORD *)this + 161) / a3 * a3);
    for ( i = 0; i < a5; ++i )
    {
      v10 = a4[i];
      (*(void (__fastcall **)(Ogre::RenderableObject *))(*(_DWORD *)v10 + 48))(v10);
      Ogre::Camera::setViewport(
        *((Ogre::Camera **)this + 146),
        (float)(i % v18) * v16,
        (float)(i / v18) * v20,
        v16,
        v20,
        0.0,
        1.0);
      (*(void (__fastcall **)(_DWORD, _DWORD, int))(**((_DWORD **)this + 154) + 60))(
        *((_DWORD *)this + 154),
        *((_DWORD *)this + 146),
        1);
      Ogre::SceneRenderer::RenderResult(
        (int)this,
        (int)v24,
        *(_DWORD *)(*((_DWORD *)this + 146) + 212),
        *((_DWORD *)this + 164),
        0,
        0,
        1065353216,
        0,
        0,
        nullptr,
        1,
        -1);
      (*(void (__fastcall **)(Ogre::RenderableObject *))(*(_DWORD *)v10 + 52))(v10);
      v9 = i + 1;
    }
    Ogre::SceneManager::drawDirect(v8, v9, i, a5);
    v11 = (const void *)(*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 164) + 56))(*((_DWORD *)this + 164));
    v12 = (void *)(*(int (__fastcall **)(int, _DWORD, _DWORD, _DWORD, _BYTE *))(*(_DWORD *)v17 + 36))(v17, 0, 0, 0, v22);
    j_memcpy(v12, v11, 4 * *((_DWORD *)this + 161) * *((_DWORD *)this + 160));
    (*(void (__fastcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v17 + 40))(v17, 0, 0);
  }
  return v17;
}

