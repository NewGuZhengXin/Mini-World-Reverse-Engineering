// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLTextureRenderTarget

//======================================================================
// Ogre::OGLTextureRenderTarget::getSize(unsigned int &,unsigned int &)
// address: 0x0025FEA0   size: 0xA (10 bytes)
//======================================================================
unsigned int __fastcall Ogre::OGLTextureRenderTarget::getSize(
        Ogre::OGLTextureRenderTarget *this,
        unsigned int *a2,
        unsigned int *a3)
{
  unsigned int result; // r0

  *a2 = *((_DWORD *)this + 10);
  result = *((_DWORD *)this + 11);
  *a3 = result;
  return result;
}


//======================================================================
// Ogre::OGLTextureRenderTarget::getColorTexture(void)
// address: 0x0025FEAA   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLTextureRenderTarget::getColorTexture(Ogre::OGLTextureRenderTarget *this)
{
  return *((_DWORD *)this + 6);
}


//======================================================================
// Ogre::OGLTextureRenderTarget::isSuccessCreateRenderTarget(void)
// address: 0x0025FEAE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLTextureRenderTarget::isSuccessCreateRenderTarget(Ogre::OGLTextureRenderTarget *this)
{
  return 1;
}


//======================================================================
// Ogre::OGLTextureRenderTarget::isSuccessCreateDSBuffer(void)
// address: 0x0025FEB2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLTextureRenderTarget::isSuccessCreateDSBuffer(Ogre::OGLTextureRenderTarget *this)
{
  return 1;
}


//======================================================================
// Ogre::OGLTextureRenderTarget::getTargetData(void)
// address: 0x0025FEB6   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLTextureRenderTarget::getTargetData(Ogre::OGLTextureRenderTarget *this)
{
  return *((_DWORD *)this + 13);
}


//======================================================================
// Ogre::OGLTextureRenderTarget::setStretchRect(int,int,int,int,int,int,int,int)
// address: 0x0025FEBA   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLTextureRenderTarget::setStretchRect(
        Ogre::OGLTextureRenderTarget *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  ;
}


//======================================================================
// Ogre::OGLTextureRenderTarget::~OGLTextureRenderTarget()
// address: 0x0025FED8   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre22OGLTextureRenderTargetD1Ev'
void __fastcall Ogre::OGLTextureRenderTarget::~OGLTextureRenderTarget(Ogre::OGLTextureRenderTarget *this)
{
  void *v2; // r0
  int v3; // r3

  *(_DWORD *)this = &off_45A2A0;
  v2 = *((void **)this + 13);
  if ( v2 != nullptr )
    operator delete[](v2);
  v3 = *((_DWORD *)this + 6);
  if ( v3 != 0 )
  {
    --*(_DWORD *)(v3 + 8);
    *((_DWORD *)this + 6) = 0;
  }
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::OGLTextureRenderTarget::~OGLTextureRenderTarget()
// address: 0x0025FF18   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLTextureRenderTarget::~OGLTextureRenderTarget(Ogre::OGLTextureRenderTarget *this)
{
  Ogre::OGLTextureRenderTarget::~OGLTextureRenderTarget(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLTextureRenderTarget::deleteThis(void)
// address: 0x0025FF2A   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::OGLTextureRenderTarget::deleteThis(Ogre::OGLTextureRenderTarget *this)
{
  return Ogre::OGLPixelBufferPool::releaseRenderTarget(*((_DWORD *)this + 4), (int)this);
}


//======================================================================
// Ogre::OGLTextureRenderTarget::requireOrReleaseRenderTarget(bool)
// address: 0x0025FF38   size: 0x40 (64 bytes)
//======================================================================
unsigned int __fastcall Ogre::OGLTextureRenderTarget::requireOrReleaseRenderTarget(
        Ogre::OGLTextureRenderTarget *this,
        int a2)
{
  Ogre::OGLHardwarePixelBufferManager *v3; // r5
  unsigned int v4; // r0
  unsigned int v5; // r1
  unsigned int result; // r0

  v3 = (Ogre::OGLHardwarePixelBufferManager *)Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton;
  if ( a2 != 0 )
  {
    v4 = Ogre::OGLHardwarePixelBufferManager::requireFrameBuffer(
           (Ogre::OGLHardwarePixelBufferManager *)Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton,
           *((_DWORD *)this + 10),
           *((_DWORD *)this + 11));
    v5 = *((_DWORD *)this + 10);
    *((_DWORD *)this + 7) = v4;
    result = Ogre::OGLHardwarePixelBufferManager::requireZBuffer(v3, v5, *((_DWORD *)this + 11));
    *((_DWORD *)this + 8) = result;
  }
  else
  {
    Ogre::OGLHardwarePixelBufferManager::releaseFrameBuffer(
      Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton,
      *((_DWORD *)this + 7));
    result = Ogre::OGLHardwarePixelBufferManager::releaseZBuffer((int)v3, *((_DWORD *)this + 8));
    *((_DWORD *)this + 7) = 0;
    *((_DWORD *)this + 8) = 0;
  }
  return result;
}


//======================================================================
// Ogre::OGLTextureRenderTarget::OGLTextureRenderTarget(Ogre::OGLRenderSystem *,Ogre::OGLHardwarePixelBuffer *,unsigned int,int,Ogre::OGLTextureRenderTarget::RenderTargetType,bool)
// address: 0x0025FF7C   size: 0x90 (144 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre22OGLTextureRenderTargetC2EPNS_15OGLRenderSystemEPNS_22OGLHardwarePixelBufferEjiNS0_16RenderTargetTypeEb'
int __fastcall Ogre::OGLTextureRenderTarget::OGLTextureRenderTarget(
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        int a5,
        int a6,
        char a7)
{
  int v8; // r0
  unsigned int v9; // r0
  unsigned int v10; // r0

  *(_DWORD *)(a1 + 20) = a2;
  *(_BYTE *)(a1 + 8) = a7;
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)a1 = &off_45A2A0;
  *(_DWORD *)(a1 + 36) = a4;
  *(_DWORD *)(a1 + 4) = 1;
  *(_WORD *)(a1 + 48) = (a5 >> 31) - a5 < 0;
  *(_DWORD *)(a1 + 52) = 0;
  ++*(_DWORD *)(a3 + 8);
  *(_DWORD *)(a1 + 12) = a6;
  v8 = *(_DWORD *)(a3 + 12);
  *(_DWORD *)(a1 + 16) = v8;
  Ogre::OGLPixelBufferPool::getSurfaceSize(v8, a4, (unsigned int *)(a1 + 40), (unsigned int *)(a1 + 44));
  if ( a6 == 0 )
  {
    Ogre::OGLTextureRenderTarget::requireOrReleaseRenderTarget((Ogre::OGLTextureRenderTarget *)a1, 1);
    Ogre::OGLTextureRenderTarget::requireOrReleaseRenderTarget((Ogre::OGLTextureRenderTarget *)a1, 0);
  }
  if ( *(_BYTE *)(a1 + 8) != 0 )
  {
    v9 = *(_DWORD *)(a1 + 40) * *(_DWORD *)(a1 + 44);
    if ( v9 > 0x1FC00000 )
      v10 = -1;
    else
      v10 = 4 * v9;
    *(_DWORD *)(a1 + 52) = operator new[](v10);
  }
  return a1;
}


//======================================================================
// Ogre::OGLTextureRenderTarget::beginScene(void)
// address: 0x00260010   size: 0x6A (106 bytes)
//======================================================================
int __fastcall Ogre::OGLTextureRenderTarget::beginScene(Ogre::OGLTextureRenderTarget *this)
{
  const char *v2; // r1

  if ( *((_DWORD *)this + 3) != 0
    || (Ogre::OGLTextureRenderTarget::requireOrReleaseRenderTarget(this, 1),
        j_glBindFramebuffer(),
        j_glFramebufferTexture2D(),
        j_glFramebufferRenderbuffer(),
        j_glCheckFramebufferStatus() == 36053) )
  {
    *(_DWORD *)(*((_DWORD *)this + 5) + 84) = *((_DWORD *)this + 10);
    *(_DWORD *)(*((_DWORD *)this + 5) + 88) = *((_DWORD *)this + 11);
    return 1;
  }
  else
  {
    Ogre::LogSetCurParam(
      (int)"D:/work/oworldsrc/client/RenderSystem_OGL/OgreOGLRenderTarget.cpp",
      (const char *)off_5C + 3,
      8,
      0x8CD5u);
    Ogre::LogMessage((Ogre *)"CheckFramebufferStatus failed", v2);
    return 0;
  }
}


//======================================================================
// Ogre::OGLTextureRenderTarget::endScene(void)
// address: 0x00260098   size: 0xBA (186 bytes)
//======================================================================
unsigned int __fastcall Ogre::OGLTextureRenderTarget::endScene(unsigned int this)
{
  unsigned int v1; // r4
  unsigned int v2; // r0
  unsigned int v3; // r0
  unsigned int v4; // r5
  void *v5; // r6
  size_t v6; // r2
  int v7; // r0

  v1 = this;
  if ( *(_DWORD *)(this + 12) == 0 )
  {
    if ( *(_BYTE *)(this + 8) != 0 )
    {
      j_glFinish();
      j_glReadPixels(0, 0, *(_DWORD *)(v1 + 40), *(_DWORD *)(v1 + 44), 0x1908u, 0x1401u, *(GLvoid **)(v1 + 52));
      v2 = *(_DWORD *)(v1 + 40);
      if ( v2 > 0x1FC00000 )
        v3 = -1;
      else
        v3 = 4 * v2;
      v4 = 0;
      v5 = (void *)operator new[](v3);
      while ( v4 < *(_DWORD *)(v1 + 44) >> 1 )
      {
        j_memcpy(v5, (const void *)(*(_DWORD *)(v1 + 52) + 4 * *(_DWORD *)(v1 + 40) * v4), 4 * *(_DWORD *)(v1 + 40));
        j_memcpy(
          (void *)(*(_DWORD *)(v1 + 52) + 4 * *(_DWORD *)(v1 + 40) * v4),
          (const void *)(*(_DWORD *)(v1 + 52) + (*(_DWORD *)(v1 + 44) + 0x3FFFFFFF - v4) * 4 * *(_DWORD *)(v1 + 40)),
          4 * *(_DWORD *)(v1 + 40));
        v6 = 4 * *(_DWORD *)(v1 + 40);
        v7 = (*(_DWORD *)(v1 + 44) + 0x3FFFFFFF - v4++) * v6;
        j_memcpy((void *)(*(_DWORD *)(v1 + 52) + v7), v5, v6);
      }
      if ( v5 != nullptr )
        operator delete[](v5);
    }
    j_glBindFramebuffer();
    return Ogre::OGLTextureRenderTarget::requireOrReleaseRenderTarget((Ogre::OGLTextureRenderTarget *)v1, 0);
  }
  return this;
}

