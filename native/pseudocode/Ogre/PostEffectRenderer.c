// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::PostEffectRenderer

//======================================================================
// Ogre::PostEffectRenderer::doRender(void)
// address: 0x00172494   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::PostEffectRenderer::doRender(Ogre::PostEffectRenderer *this)
{
  ;
}


//======================================================================
// Ogre::PostEffectRenderer::~PostEffectRenderer()
// address: 0x00172498   size: 0x4C (76 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18PostEffectRendererD1Ev'
void __fastcall Ogre::PostEffectRenderer::~PostEffectRenderer(Ogre::PostEffectRenderer *this)
{
  int v2; // r3
  _DWORD *v3; // r0
  int v4; // r3

  *(_DWORD *)this = &off_4576C0;
  v2 = *((_DWORD *)this + 161);
  if ( v2 != 0 )
  {
    --*(_DWORD *)(v2 + 8);
    *((_DWORD *)this + 161) = 0;
  }
  v3 = *((_DWORD **)this + 162);
  if ( v3 != nullptr )
  {
    v4 = v3[1] - 1;
    v3[1] = v4;
    if ( v4 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v3 + 24))(v3);
    *((_DWORD *)this + 162) = 0;
  }
  Ogre::SceneRenderer::~SceneRenderer(this);
}


//======================================================================
// Ogre::PostEffectRenderer::~PostEffectRenderer()
// address: 0x001724E8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::PostEffectRenderer::~PostEffectRenderer(Ogre::PostEffectRenderer *this)
{
  Ogre::PostEffectRenderer::~PostEffectRenderer(this);
  operator delete(this);
}


//======================================================================
// Ogre::PostEffectRenderer::PostEffectRenderer(Ogre::FixedString const&)
// address: 0x001724FC   size: 0x68 (104 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18PostEffectRendererC1ERKNS_11FixedStringE'
Ogre::PostEffectRenderer *__fastcall Ogre::PostEffectRenderer::PostEffectRenderer(
        Ogre::PostEffectRenderer *this,
        const Ogre::FixedString *a2)
{
  Ogre::Material *v4; // r5
  int PixelBuffer; // r0
  int v7[7]; // [sp+Ch] [bp-1Ch] BYREF

  Ogre::SceneRenderer::SceneRenderer(this);
  *(_DWORD *)this = &off_4576C0;
  v4 = (Ogre::Material *)operator new(0x2Cu);
  Ogre::Material::Material(v4, a2);
  *((_DWORD *)this + 160) = v4;
  v7[1] = 1024;
  v7[0] = 0;
  PixelBuffer = Ogre::HardwarePixelBufferManager::createPixelBuffer(
                  (_DWORD *)Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton,
                  (Ogre::LockSection *)&byte_4,
                  v7);
  *((_DWORD *)this + 161) = PixelBuffer;
  *((_DWORD *)this + 162) = (*(int (__fastcall **)(_DWORD, int, _DWORD, int, _DWORD, _DWORD))(**(_DWORD **)(PixelBuffer + 12)
                                                                                            + 24))(
                              *(_DWORD *)(PixelBuffer + 12),
                              PixelBuffer,
                              0,
                              16,
                              0,
                              0);
  return this;
}

