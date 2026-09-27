// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLPixelBufferPool

//======================================================================
// Ogre::OGLPixelBufferPool::lock(Ogre::HardwarePixelBuffer *,unsigned int,Ogre::HardwareBufferLockOpt,Ogre::LockResult &)
// address: 0x0025F548   size: 0x4 (4 bytes)
//======================================================================
int Ogre::OGLPixelBufferPool::lock()
{
  return 0;
}


//======================================================================
// Ogre::OGLPixelBufferPool::unlock(Ogre::HardwarePixelBuffer *,unsigned int)
// address: 0x0025F54C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLPixelBufferPool::unlock(
        Ogre::OGLPixelBufferPool *this,
        Ogre::HardwarePixelBuffer *a2,
        unsigned int a3)
{
  ;
}


//======================================================================
// Ogre::OGLPixelBufferPool::createDepthStencil(Ogre::HardwarePixelBuffer *,unsigned int)
// address: 0x0025F54E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLPixelBufferPool::createDepthStencil(
        Ogre::OGLPixelBufferPool *this,
        Ogre::HardwarePixelBuffer *a2,
        unsigned int a3)
{
  return 0;
}


//======================================================================
// Ogre::OGLPixelBufferPool::loadSurfaceData(Ogre::HardwarePixelBuffer *,unsigned int,Ogre::SurfaceData *)
// address: 0x0025F598   size: 0xDC (220 bytes)
//======================================================================
void __fastcall Ogre::OGLPixelBufferPool::loadSurfaceData(
        Ogre::OGLPixelBufferPool *this,
        Ogre::HardwarePixelBuffer *a2,
        unsigned int a3,
        Ogre::SurfaceData *a4)
{
  GLuint v6; // r1
  GLint v8; // r6
  int v9; // r7
  int v10; // r7

  v6 = *((_DWORD *)a2 + 5);
  if ( v6 != 0 )
  {
    v8 = (unsigned __int16)a3;
    if ( (unsigned __int16)a3 + 1 == *((_DWORD *)this + 27) )
      *((_BYTE *)a2 + 24) = 1;
    v9 = *((_DWORD *)this + 18);
    if ( v9 != 0 )
    {
      if ( v9 == 2 )
      {
        j_glBindTexture(0x8513u, v6);
        j_glTexImage2D(
          dword_445008[HIWORD(a3)],
          v8,
          *((_DWORD *)this + 19),
          *((_DWORD *)a4 + 3),
          *((_DWORD *)a4 + 4),
          0,
          *((_DWORD *)this + 20),
          *((_DWORD *)this + 21),
          *((const GLvoid **)a4 + 9));
      }
    }
    else if ( *((_BYTE *)this + 104) != 0 )
    {
      j_glBindTexture(0xDE1u, v6);
      j_glCompressedTexImage2D(
        0xDE1u,
        v8,
        *((_DWORD *)this + 19),
        *((_DWORD *)this + 22),
        *((_DWORD *)this + 23),
        0,
        *((_DWORD *)a4 + 8),
        *((const GLvoid **)a4 + 9));
    }
    else
    {
      v10 = *((unsigned __int8 *)a2 + 5);
      j_glBindTexture(0xDE1u, v6);
      if ( v10 != 0 )
        j_glTexImage2D(
          0xDE1u,
          v8,
          *((_DWORD *)this + 19),
          *((_DWORD *)a4 + 3),
          *((_DWORD *)a4 + 4),
          0,
          *((_DWORD *)this + 20),
          *((_DWORD *)this + 21),
          *((const GLvoid **)a4 + 9));
      else
        j_glTexSubImage2D(
          0xDE1u,
          v8,
          0,
          0,
          *((_DWORD *)a4 + 3),
          *((_DWORD *)a4 + 4),
          *((_DWORD *)this + 20),
          *((_DWORD *)this + 21),
          *((const GLvoid **)a4 + 9));
    }
  }
}


//======================================================================
// Ogre::OGLPixelBufferPool::~OGLPixelBufferPool()
// address: 0x0025F6D0   size: 0x6E (110 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLPixelBufferPoolD1Ev'
void __fastcall Ogre::OGLPixelBufferPool::~OGLPixelBufferPool(Ogre::OGLPixelBufferPool *this, Ogre::LockSection *a2)
{
  int *i; // r6
  int v4; // r0
  int *j; // r6
  int v6; // r0
  void *v7; // r0
  void *v8; // r0
  Ogre::LockSection *v9; // [sp+4h] [bp-4h] BYREF

  v9 = a2;
  *(_DWORD *)this = &off_45A1D8;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v9, (Ogre::OGLPixelBufferPool *)((char *)this + 60));
  for ( i = *((int **)this + 9); i != *((int **)this + 10); ++i )
  {
    v4 = *i;
    Ogre::HardwarePixelBuffer::deleteThis(v4);
  }
  Ogre::LockFunctor::~LockFunctor(&v9);
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v9, (Ogre::OGLPixelBufferPool *)((char *)this + 64));
  for ( j = *((int **)this + 12); j != *((int **)this + 13); ++j )
  {
    v6 = *j;
    Ogre::HardwarePixelBuffer::deleteThis(v6);
  }
  Ogre::LockFunctor::~LockFunctor(&v9);
  v7 = *((void **)this + 31);
  if ( v7 != nullptr )
    operator delete(v7);
  v8 = *((void **)this + 28);
  if ( v8 != nullptr )
    operator delete(v8);
  Ogre::HardwarePixelBufferPool::~HardwarePixelBufferPool(this);
}


//======================================================================
// Ogre::OGLPixelBufferPool::~OGLPixelBufferPool()
// address: 0x0025F744   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLPixelBufferPool::~OGLPixelBufferPool(Ogre::OGLPixelBufferPool *this, Ogre::LockSection *a2)
{
  Ogre::OGLPixelBufferPool::~OGLPixelBufferPool(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::OGLPixelBufferPool::createPixelBufferSysTexture(Ogre::OGLHardwarePixelBuffer *)
// address: 0x0025F758   size: 0x82 (130 bytes)
//======================================================================
void __fastcall Ogre::OGLPixelBufferPool::createPixelBufferSysTexture(Ogre::OGLPixelBufferPool *this, GLuint *a2)
{
  j_glGenTextures(1, a2 + 5);
  if ( *((_DWORD *)this + 1) == 4 )
  {
    j_glBindTexture(0xDE1u, a2[5]);
    j_glTexImage2D(
      0xDE1u,
      0,
      *((_DWORD *)this + 19),
      *((_DWORD *)this + 22),
      *((_DWORD *)this + 23),
      0,
      *((_DWORD *)this + 20),
      *((_DWORD *)this + 21),
      nullptr);
    j_glTexParameteri(0xDE1u, 0x2802u, 33071);
    j_glTexParameteri(0xDE1u, 0x2803u, 33071);
    j_glTexParameteri(0xDE1u, 0x2800u, 9728);
    j_glTexParameteri(0xDE1u, 0x2801u, 9728);
    j_glBindTexture(0xDE1u, 0);
  }
  *((_BYTE *)a2 + 4) = 1;
  ++*(_DWORD *)(*((_DWORD *)this + 17) + 8);
}


//======================================================================
// Ogre::OGLPixelBufferPool::newPixelBuffer(void)
// address: 0x0025F7F0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::OGLPixelBufferPool::newPixelBuffer(Ogre::OGLPixelBufferPool *this)
{
  int v2; // r0
  int v3; // r4

  v2 = operator new(0x1Cu);
  *(_BYTE *)(v2 + 4) = 1;
  *(_BYTE *)(v2 + 5) = 1;
  v3 = v2;
  *(_DWORD *)(v2 + 8) = 0;
  *(_DWORD *)(v2 + 16) = 0;
  *(_DWORD *)v2 = &off_45A200;
  *(_DWORD *)(v2 + 20) = 0;
  *(_BYTE *)(v2 + 24) = 0;
  Ogre::OGLPixelBufferPool::createPixelBufferSysTexture(this, (GLuint *)v2);
  return v3;
}


//======================================================================
// Ogre::OGLPixelBufferPool::releasePixelBufferSysTexture(Ogre::OGLHardwarePixelBuffer *,bool)
// address: 0x0025F828   size: 0x26 (38 bytes)
//======================================================================
void __fastcall Ogre::OGLPixelBufferPool::releasePixelBufferSysTexture(
        Ogre::OGLPixelBufferPool *this,
        const GLuint *a2,
        int a3)
{
  if ( a2[5] != 0 )
  {
    if ( a3 != 0 )
      j_glDeleteTextures(1, a2 + 5);
    *((_DWORD *)a2 + 5) = 0;
  }
  --*(_DWORD *)(*((_DWORD *)this + 17) + 8);
}


//======================================================================
// Ogre::OGLPixelBufferPool::onLostDevice(void)
// address: 0x0025F892   size: 0x50 (80 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::OGLPixelBufferPool::onLostDevice(Ogre::OGLPixelBufferPool *this)
{
  const GLuint **i; // r6
  const GLuint *v3; // r1
  const GLuint **j; // r6
  const GLuint *v5; // r1
  Ogre::LockSection *v6; // [sp+4h] [bp-4h] BYREF

  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v6, (Ogre::OGLPixelBufferPool *)((char *)this + 60));
  for ( i = *((const GLuint ***)this + 9); i != *((const GLuint ***)this + 10); ++i )
  {
    v3 = *i;
    Ogre::OGLPixelBufferPool::releasePixelBufferSysTexture(this, v3, 0);
  }
  Ogre::LockFunctor::~LockFunctor(&v6);
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v6, (Ogre::OGLPixelBufferPool *)((char *)this + 64));
  for ( j = *((const GLuint ***)this + 12); j != *((const GLuint ***)this + 13); ++j )
  {
    v5 = *j;
    Ogre::OGLPixelBufferPool::releasePixelBufferSysTexture(this, v5, 0);
  }
  Ogre::LockFunctor::~LockFunctor(&v6);
}


//======================================================================
// Ogre::OGLPixelBufferPool::onResetDevice(void)
// address: 0x0025F8E2   size: 0x6A (106 bytes)
//======================================================================
int __fastcall Ogre::OGLPixelBufferPool::onResetDevice(
        Ogre::OGLPixelBufferPool *this,
        Ogre::LockSection *a2,
        Ogre::LockSection *a3)
{
  GLuint **v4; // r6
  GLuint **v5; // r7
  GLuint *v6; // r1
  GLuint **v7; // r6
  GLuint **v8; // r7
  GLuint *v9; // r1
  Ogre::LockSection *v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v11, (Ogre::OGLPixelBufferPool *)((char *)this + 60));
  v4 = *((GLuint ***)this + 9);
  while ( 1 )
  {
    v5 = v4;
    if ( v4 == *((GLuint ***)this + 10) )
      break;
    v6 = *v4++;
    Ogre::OGLPixelBufferPool::createPixelBufferSysTexture(this, v6);
    if ( (*v5)[5] == 0 )
    {
LABEL_8:
      Ogre::LockFunctor::~LockFunctor(v11);
      return 0;
    }
  }
  Ogre::LockFunctor::~LockFunctor(v11);
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v11, (Ogre::OGLPixelBufferPool *)((char *)this + 64));
  v7 = *((GLuint ***)this + 12);
  while ( 1 )
  {
    v8 = v7;
    if ( v7 == *((GLuint ***)this + 13) )
      break;
    v9 = *v7++;
    Ogre::OGLPixelBufferPool::createPixelBufferSysTexture(this, v9);
    if ( (*v8)[5] == 0 )
      goto LABEL_8;
  }
  Ogre::LockFunctor::~LockFunctor(v11);
  return 1;
}


//======================================================================
// Ogre::OGLPixelBufferPool::getSupportedParam(Ogre::HardwareBufferUsage,Ogre::TextureDesc const&)
// address: 0x0025F94C   size: 0x58 (88 bytes)
//======================================================================
int __fastcall Ogre::OGLPixelBufferPool::getSupportedParam(int a1, int a2, _DWORD *a3)
{
  __int64 v5; // r2
  int v6; // r5

  *(_DWORD *)(a1 + 72) = *a3;
  *(_BYTE *)(a1 + 104) = Ogre::OGLRenderSystem::fromPixelFormat(*(_DWORD *)(a1 + 68), a3[5], a1 + 76, a1 + 80);
  HIDWORD(v5) = a3[1];
  *(_DWORD *)(a1 + 88) = HIDWORD(v5);
  LODWORD(v5) = a3[2];
  *(_DWORD *)(a1 + 92) = v5;
  *(_DWORD *)(a1 + 96) = a3[3];
  v6 = a3[4];
  *(_DWORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 100) = v6;
  while ( v5 != 0 )
  {
    ++*(_DWORD *)(a1 + 108);
    SHIDWORD(v5) /= 2;
    LODWORD(v5) = (int)v5 / 2;
  }
  return 1;
}


//======================================================================
// Ogre::OGLPixelBufferPool::OGLPixelBufferPool(Ogre::OGLRenderSystem *,Ogre::HardwareBufferUsage,Ogre::TextureDesc const&)
// address: 0x0025F9A4   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18OGLPixelBufferPoolC1EPNS_15OGLRenderSystemENS_19HardwareBufferUsageERKNS_11TextureDescE'
_DWORD *__fastcall Ogre::OGLPixelBufferPool::OGLPixelBufferPool(_DWORD *a1, int a2, int a3, int *a4)
{
  Ogre::HardwarePixelBufferPool::HardwarePixelBufferPool((int)a1, a3, a4);
  a1[17] = a2;
  a1[28] = 0;
  a1[29] = 0;
  *a1 = &off_45A1D8;
  a1[30] = 0;
  a1[31] = 0;
  a1[32] = 0;
  a1[33] = 0;
  Ogre::OGLPixelBufferPool::getSupportedParam((int)a1, a3, a4);
  return a1;
}


//======================================================================
// Ogre::OGLPixelBufferPool::getSurfaceSize(unsigned int,unsigned int &,unsigned int &)
// address: 0x0025FA06   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::OGLPixelBufferPool::getSurfaceSize(int this, char a2, unsigned int *a3, unsigned int *a4)
{
  int v4; // r4
  int v5; // r1
  unsigned int v6; // r2

  v4 = 1;
  if ( *(int *)(this + 88) >> a2 != 0 )
    v4 = *(int *)(this + 88) >> a2;
  *a3 = v4;
  v5 = *(int *)(this + 92) >> a2;
  v6 = 1;
  if ( v5 != 0 )
    v6 = v5;
  *a4 = v6;
  return this;
}


//======================================================================
// Ogre::OGLPixelBufferPool::releaseRenderTarget(Ogre::OGLTextureRenderTarget *)
// address: 0x0025FB1C   size: 0x98 (152 bytes)
//======================================================================
int __fastcall Ogre::OGLPixelBufferPool::releaseRenderTarget(int a1, int a2)
{
  int result; // r0
  char *v3; // r3
  char *v4; // r4
  int i; // r5
  char *v6; // r2
  int v7; // r5
  char *j; // r2

  result = a1 + 4;
  v3 = *(char **)(result + 120);
  v4 = *(char **)(result + 124);
  for ( i = (v4 - v3) >> 4; ; --i )
  {
    v6 = v3;
    if ( i <= 0 )
      break;
    if ( *(_DWORD *)v3 == a2 )
      goto LABEL_21;
    if ( *((_DWORD *)v3 + 1) == a2 )
    {
      v3 += 4;
      goto LABEL_21;
    }
    if ( *((_DWORD *)v3 + 2) == a2 )
    {
      v3 += 8;
      goto LABEL_21;
    }
    v3 += 16;
    if ( *((_DWORD *)v3 - 1) == a2 )
    {
      v3 = v6 + 12;
      goto LABEL_21;
    }
  }
  v7 = (v4 - v3) >> 2;
  if ( v7 != 2 )
  {
    if ( v7 != 3 )
    {
      if ( v7 != 1 )
        goto LABEL_28;
LABEL_19:
      if ( *(_DWORD *)v6 != a2 )
        goto LABEL_28;
      goto LABEL_20;
    }
    if ( *(_DWORD *)v3 == a2 )
      goto LABEL_21;
    v6 = v3 + 4;
  }
  if ( *(_DWORD *)v6 != a2 )
  {
    v6 += 4;
    goto LABEL_19;
  }
LABEL_20:
  v3 = v6;
LABEL_21:
  if ( v3 != v4 )
  {
    for ( j = v3 + 4; j != v4; j += 4 )
    {
      if ( *(_DWORD *)j != a2 )
      {
        *(_DWORD *)v3 = *(_DWORD *)j;
        v3 += 4;
      }
    }
    v4 = v3;
  }
LABEL_28:
  if ( v4 != *(char **)(result + 124) )
    *(_DWORD *)(result + 124) = v4;
  if ( a2 != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 20))(a2);
  return result;
}


//======================================================================
// Ogre::OGLPixelBufferPool::createRenderTarget(Ogre::HardwarePixelBuffer *,unsigned int,int,int,bool)
// address: 0x0025FC60   size: 0x66 (102 bytes)
//======================================================================
int __fastcall Ogre::OGLPixelBufferPool::createRenderTarget(
        Ogre::OGLPixelBufferPool *this,
        Ogre::HardwarePixelBuffer *a2,
        unsigned int a3,
        int a4,
        int a5,
        char a6)
{
  int result; // r0
  int v10; // r5
  __int64 v11; // r0
  int v12; // r2
  int v14; // [sp+1Ch] [bp-8h] BYREF

  result = *((_DWORD *)a2 + 5);
  if ( result != 0 )
  {
    v10 = operator new(0x38u);
    Ogre::OGLTextureRenderTarget::OGLTextureRenderTarget(v10, *((_DWORD *)this + 17), (int)a2, a3, a4, 0, a6);
    *(_DWORD *)(v10 + 16) = this;
    HIDWORD(v11) = *((_DWORD *)this + 32);
    v12 = *((_DWORD *)this + 33);
    v14 = v10;
    if ( HIDWORD(v11) == v12 )
    {
      LODWORD(v11) = (char *)this + 124;
      std::vector<Ogre::OGLTextureRenderTarget *>::_M_insert_aux(v11, &v14);
    }
    else
    {
      if ( HIDWORD(v11) != 0 )
        *(_DWORD *)HIDWORD(v11) = v10;
      *((_DWORD *)this + 32) += 4;
    }
    return v14;
  }
  return result;
}

