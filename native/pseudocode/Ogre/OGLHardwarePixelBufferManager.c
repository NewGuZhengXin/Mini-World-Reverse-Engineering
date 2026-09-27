// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLHardwarePixelBufferManager

//======================================================================
// Ogre::OGLHardwarePixelBufferManager::~OGLHardwarePixelBufferManager()
// address: 0x0025F680   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre29OGLHardwarePixelBufferManagerD1Ev'
void __fastcall Ogre::OGLHardwarePixelBufferManager::~OGLHardwarePixelBufferManager(
        Ogre::OGLHardwarePixelBufferManager *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_45A220;
  v2 = *((void **)this + 11);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 8);
  if ( v3 != nullptr )
    operator delete(v3);
  Ogre::HardwarePixelBufferManager::~HardwarePixelBufferManager(this);
}


//======================================================================
// Ogre::OGLHardwarePixelBufferManager::~OGLHardwarePixelBufferManager()
// address: 0x0025F6B0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLHardwarePixelBufferManager::~OGLHardwarePixelBufferManager(
        Ogre::OGLHardwarePixelBufferManager *this)
{
  Ogre::OGLHardwarePixelBufferManager::~OGLHardwarePixelBufferManager(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLHardwarePixelBufferManager::newPixelBufferPool(Ogre::HardwareBufferUsage,Ogre::TextureDesc const&)
// address: 0x0025F9E8   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall Ogre::OGLHardwarePixelBufferManager::newPixelBufferPool(int a1, int a2, int *a3)
{
  _DWORD *v6; // r4

  v6 = (_DWORD *)operator new(0x88u);
  Ogre::OGLPixelBufferPool::OGLPixelBufferPool(v6, *(_DWORD *)(a1 + 56), a2, a3);
  return v6;
}


//======================================================================
// Ogre::OGLHardwarePixelBufferManager::OGLHardwarePixelBufferManager(Ogre::OGLRenderSystem *)
// address: 0x0025FA2C   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre29OGLHardwarePixelBufferManagerC1EPNS_15OGLRenderSystemE'
Ogre::OGLHardwarePixelBufferManager *__fastcall Ogre::OGLHardwarePixelBufferManager::OGLHardwarePixelBufferManager(
        Ogre::OGLHardwarePixelBufferManager *this,
        Ogre::OGLRenderSystem *a2)
{
  Ogre::HardwarePixelBufferManager::HardwarePixelBufferManager(this);
  *((_DWORD *)this + 14) = a2;
  *(_DWORD *)this = &off_45A220;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  return this;
}


//======================================================================
// Ogre::OGLHardwarePixelBufferManager::releaseFrameBuffer(unsigned int)
// address: 0x0025FA58   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwarePixelBufferManager::releaseFrameBuffer(int this, unsigned int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r2

  v2 = *(_DWORD *)(this + 36);
  v3 = *(_DWORD *)(this + 32);
  while ( 1 )
  {
    v4 = v3;
    if ( v3 == v2 )
      break;
    v3 += 16;
    this = *(_DWORD *)(v3 - 16);
    if ( this == a2 )
    {
      --*(_DWORD *)(v4 + 12);
      return this;
    }
  }
  return this;
}


//======================================================================
// Ogre::OGLHardwarePixelBufferManager::releaseZBuffer(unsigned int)
// address: 0x0025FA78   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwarePixelBufferManager::releaseZBuffer(int this, unsigned int a2)
{
  int v2; // r4
  int v3; // r3
  int v4; // r2

  v2 = *(_DWORD *)(this + 48);
  v3 = *(_DWORD *)(this + 44);
  while ( 1 )
  {
    v4 = v3;
    if ( v3 == v2 )
      break;
    v3 += 16;
    this = *(_DWORD *)(v3 - 16);
    if ( this == a2 )
    {
      --*(_DWORD *)(v4 + 12);
      return this;
    }
  }
  return this;
}


//======================================================================
// Ogre::OGLHardwarePixelBufferManager::onLostDevice(void)
// address: 0x0025FA98   size: 0x42 (66 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwarePixelBufferManager::onLostDevice(int this)
{
  int v1; // r5
  _DWORD *v2; // r4
  int v3; // r6
  unsigned int v4; // r5
  int v5; // r3

  v1 = *(_DWORD *)(this + 16);
  v2 = (_DWORD *)this;
  v3 = this + 8;
  while ( v1 != v3 )
  {
    Ogre::OGLPixelBufferPool::onLostDevice(*(Ogre::OGLPixelBufferPool **)(v1 + 20));
    this = sub_391DDC(v1);
    v1 = this;
  }
  v4 = 0;
  v2[9] = v2[8];
  while ( 1 )
  {
    v5 = v2[11];
    if ( v4 >= (v2[12] - v5) >> 4 )
      break;
    this = j_glDeleteRenderbuffers();
    ++v4;
  }
  v2[12] = v5;
  return this;
}


//======================================================================
// Ogre::OGLHardwarePixelBufferManager::onResetDevice(void)
// address: 0x0025FADA   size: 0x24 (36 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwarePixelBufferManager::onResetDevice(
        Ogre::OGLHardwarePixelBufferManager *this,
        Ogre::LockSection *a2,
        Ogre::LockSection *a3)
{
  int v3; // r4
  char *v4; // r5
  int result; // r0

  v3 = *((_DWORD *)this + 4);
  v4 = (char *)this + 8;
  while ( (char *)v3 != v4 )
  {
    result = Ogre::OGLPixelBufferPool::onResetDevice(*(Ogre::OGLPixelBufferPool **)(v3 + 20), a2, a3);
    if ( result == 0 )
      return result;
    v3 = sub_391DDC(v3);
  }
  return 1;
}


//======================================================================
// Ogre::OGLHardwarePixelBufferManager::requireFrameBuffer(unsigned int,unsigned int)
// address: 0x0025FDEA   size: 0x3A (58 bytes)
//======================================================================
unsigned int __fastcall Ogre::OGLHardwarePixelBufferManager::requireFrameBuffer(
        Ogre::OGLHardwarePixelBufferManager *this,
        unsigned int a2,
        int a3)
{
  char *v3; // r6
  _DWORD *v7; // r0

  v3 = (char *)this + 32;
  v7 = sub_25F55A((_DWORD *)this + 8, a2, a3);
  if ( v7 == *((_DWORD **)this + 9) )
  {
    j_glGenFramebuffers();
    sub_25FDB4((int)v3, a2, a2, a3);
    return a2;
  }
  else
  {
    ++v7[3];
    return *v7;
  }
}


//======================================================================
// Ogre::OGLHardwarePixelBufferManager::requireZBuffer(unsigned int,unsigned int)
// address: 0x0025FE24   size: 0x56 (86 bytes)
//======================================================================
unsigned int __fastcall Ogre::OGLHardwarePixelBufferManager::requireZBuffer(
        Ogre::OGLHardwarePixelBufferManager *this,
        unsigned int a2,
        int a3)
{
  char *v3; // r6
  _DWORD *v7; // r0

  v3 = (char *)this + 44;
  v7 = sub_25F55A((_DWORD *)this + 11, a2, a3);
  if ( v7 == *((_DWORD **)this + 12) )
  {
    j_glGenRenderbuffers();
    j_glBindRenderbuffer();
    j_glRenderbufferStorage();
    j_glBindRenderbuffer();
    sub_25FDB4((int)v3, a2, a2, a3);
    return a2;
  }
  else
  {
    ++v7[3];
    return *v7;
  }
}

