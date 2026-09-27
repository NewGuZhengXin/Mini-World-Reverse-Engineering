// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLHardwareBufferManager

//======================================================================
// Ogre::OGLHardwareBufferManager::createDynamicVB(unsigned int,unsigned int)
// address: 0x0026019A   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwareBufferManager::createDynamicVB(
        Ogre::OGLHardwareBufferManager *this,
        unsigned int a2,
        unsigned int a3)
{
  *(_DWORD *)(*((_DWORD *)this + 9) + 16) = a2;
  *(_DWORD *)(*((_DWORD *)this + 9) + 24) = a3;
  return *((_DWORD *)this + 9);
}


//======================================================================
// Ogre::OGLHardwareBufferManager::createDynamicIB(unsigned int)
// address: 0x002601A6   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwareBufferManager::createDynamicIB(Ogre::OGLHardwareBufferManager *this, unsigned int a2)
{
  *(_DWORD *)(*((_DWORD *)this + 10) + 16) = 2 * a2;
  *(_DWORD *)(*((_DWORD *)this + 10) + 24) = 2;
  return *((_DWORD *)this + 10);
}


//======================================================================
// Ogre::OGLHardwareBufferManager::~OGLHardwareBufferManager()
// address: 0x00260240   size: 0x58 (88 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24OGLHardwareBufferManagerD1Ev'
void __fastcall Ogre::OGLHardwareBufferManager::~OGLHardwareBufferManager(Ogre::OGLHardwareBufferManager *this)
{
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  *(_DWORD *)this = &off_45A3B0;
  (***((void (__fastcall ****)(_DWORD))this + 9))(*((_DWORD *)this + 9));
  (***((void (__fastcall ****)(_DWORD))this + 10))(*((_DWORD *)this + 10));
  v2 = *((_DWORD *)this + 5);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD *)this + 6);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
  v4 = *((_DWORD *)this + 7);
  if ( v4 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
  v5 = *((_DWORD *)this + 8);
  if ( v5 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
  Ogre::HardwareBufferManager::~HardwareBufferManager(this);
}


//======================================================================
// Ogre::OGLHardwareBufferManager::~OGLHardwareBufferManager()
// address: 0x0026029C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLHardwareBufferManager::~OGLHardwareBufferManager(Ogre::OGLHardwareBufferManager *this)
{
  Ogre::OGLHardwareBufferManager::~OGLHardwareBufferManager(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLHardwareBufferManager::onLostDevice(void)
// address: 0x002602AE   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwareBufferManager::onLostDevice(Ogre::HardwareBufferPool **this)
{
  Ogre::HardwareBufferPool::onLostDevice(*(this + 5));
  Ogre::HardwareBufferPool::onLostDevice(*(this + 6));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)*(this + 9) + 8))(*(this + 9));
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)*(this + 10) + 8))(*(this + 10));
}


//======================================================================
// Ogre::OGLHardwareBufferManager::createStaticIB(unsigned int)
// address: 0x002602D0   size: 0x14 (20 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwareBufferManager::createStaticIB(Ogre::HardwareBufferPool **this, unsigned int a2)
{
  int result; // r0

  result = Ogre::HardwareBufferPool::allocBuffer(*(this + 6), 2 * a2);
  if ( result != 0 )
    *(_DWORD *)(result + 24) = 2;
  return result;
}


//======================================================================
// Ogre::OGLHardwareBufferManager::onResetDevice(void)
// address: 0x002603AC   size: 0x32 (50 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwareBufferManager::onResetDevice(Ogre::OGLHardwareBufferManager *this)
{
  if ( Ogre::HardwareBufferPool::onResetDevice(*((Ogre::HardwareBufferPool **)this + 5)) != 0
    && Ogre::HardwareBufferPool::onResetDevice(*((Ogre::HardwareBufferPool **)this + 6)) != 0
    && (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 9) + 12))(*((_DWORD *)this + 9)) != 0 )
  {
    return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 10) + 12))(*((_DWORD *)this + 10));
  }
  else
  {
    return 0;
  }
}


//======================================================================
// Ogre::OGLHardwareBufferManager::createStaticVB(unsigned int,unsigned int)
// address: 0x002603DE   size: 0x12 (18 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwareBufferManager::createStaticVB(
        Ogre::HardwareBufferPool **this,
        unsigned int a2,
        unsigned int a3)
{
  int result; // r0

  result = Ogre::HardwareBufferPool::allocBuffer(*(this + 5), a2);
  if ( result != 0 )
    *(_DWORD *)(result + 24) = a3;
  return result;
}


//======================================================================
// Ogre::OGLHardwareBufferManager::OGLHardwareBufferManager(Ogre::OGLRenderSystem *)
// address: 0x00260494   size: 0xAC (172 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24OGLHardwareBufferManagerC1EPNS_15OGLRenderSystemE'
Ogre::OGLHardwareBufferManager *__fastcall Ogre::OGLHardwareBufferManager::OGLHardwareBufferManager(
        Ogre::OGLHardwareBufferManager *this,
        Ogre::OGLRenderSystem *a2)
{
  int v4; // r6
  int v5; // r6
  int v6; // r6
  int v7; // r6
  Ogre::OGLVertexBuffer *v8; // r6
  Ogre::OGLIndexBuffer *v9; // r6

  Ogre::HardwareBufferManager::HardwareBufferManager(this);
  *((_DWORD *)this + 4) = a2;
  *(_DWORD *)this = &off_45A3B0;
  v4 = operator new(0x28u);
  Ogre::HardwareBufferPool::HardwareBufferPool((Ogre::HardwareBufferPool *)v4);
  *(_DWORD *)v4 = &off_45A398;
  *(_BYTE *)(v4 + 32) = 1;
  *(_DWORD *)(v4 + 36) = 0;
  *((_DWORD *)this + 5) = v4;
  v5 = operator new(0x28u);
  Ogre::HardwareBufferPool::HardwareBufferPool((Ogre::HardwareBufferPool *)v5);
  *(_DWORD *)v5 = &off_45A398;
  *(_BYTE *)(v5 + 32) = 0;
  *(_DWORD *)(v5 + 36) = 0;
  *((_DWORD *)this + 6) = v5;
  v6 = operator new(0x28u);
  Ogre::HardwareBufferPool::HardwareBufferPool((Ogre::HardwareBufferPool *)v6);
  *(_DWORD *)v6 = &off_45A398;
  *(_BYTE *)(v6 + 32) = 1;
  *(_DWORD *)(v6 + 36) = 2;
  *((_DWORD *)this + 7) = v6;
  v7 = operator new(0x28u);
  Ogre::HardwareBufferPool::HardwareBufferPool((Ogre::HardwareBufferPool *)v7);
  *(_DWORD *)v7 = &off_45A398;
  *(_BYTE *)(v7 + 32) = 0;
  *(_DWORD *)(v7 + 36) = 2;
  *((_DWORD *)this + 8) = v7;
  v8 = (Ogre::OGLVertexBuffer *)operator new(0x2Cu);
  Ogre::OGLVertexBuffer::OGLVertexBuffer(v8, *((Ogre::OGLBufferPool **)this + 7), 0, 0);
  *((_DWORD *)this + 9) = v8;
  v9 = (Ogre::OGLIndexBuffer *)operator new(0x2Cu);
  Ogre::OGLIndexBuffer::OGLIndexBuffer(v9, *((Ogre::OGLBufferPool **)this + 8), 0, 0);
  *((_DWORD *)this + 10) = v9;
  return this;
}

