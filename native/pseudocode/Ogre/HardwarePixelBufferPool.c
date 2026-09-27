// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::HardwarePixelBufferPool

//======================================================================
// Ogre::HardwarePixelBufferPool::~HardwarePixelBufferPool()
// address: 0x00171E28   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre23HardwarePixelBufferPoolD1Ev'
void __fastcall Ogre::HardwarePixelBufferPool::~HardwarePixelBufferPool(Ogre::HardwarePixelBufferPool *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_457670;
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 64));
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 60));
  v2 = *((void **)this + 12);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 9);
  if ( v3 != nullptr )
    operator delete(v3);
}


//======================================================================
// Ogre::HardwarePixelBufferPool::~HardwarePixelBufferPool()
// address: 0x00171E60   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::HardwarePixelBufferPool::~HardwarePixelBufferPool(Ogre::HardwarePixelBufferPool *this)
{
  Ogre::HardwarePixelBufferPool::~HardwarePixelBufferPool(this);
  operator delete(this);
}


//======================================================================
// Ogre::HardwarePixelBufferPool::HardwarePixelBufferPool(Ogre::HardwareBufferUsage,Ogre::TextureDesc const&)
// address: 0x00171E74   size: 0x42 (66 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre23HardwarePixelBufferPoolC1ENS_19HardwareBufferUsageERKNS_11TextureDescE'
int __fastcall Ogre::HardwarePixelBufferPool::HardwarePixelBufferPool(int a1, int a2, int *a3)
{
  _DWORD *v4; // r3
  int v5; // r0
  int v6; // r1
  _DWORD *v7; // r2
  int v8; // r5
  int v9; // r1
  int v10; // r5

  *(_DWORD *)(a1 + 4) = a2;
  *(_DWORD *)a1 = &off_457670;
  v4 = (_DWORD *)(a1 + 8);
  v5 = *a3;
  v6 = a3[1];
  v8 = a3[2];
  v7 = a3 + 3;
  *v4 = v5;
  v4[1] = v6;
  v4[2] = v8;
  v4 += 3;
  v9 = v7[1];
  v10 = v7[2];
  *v4 = *v7;
  v4[1] = v9;
  v4[2] = v10;
  v4[3] = v7[3];
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 40) = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_DWORD *)(a1 + 52) = 0;
  *(_DWORD *)(a1 + 56) = 0;
  Ogre::LockSection::LockSection((pthread_mutex_t *)(a1 + 60));
  Ogre::LockSection::LockSection((pthread_mutex_t *)(a1 + 64));
  return a1;
}


//======================================================================
// Ogre::HardwarePixelBufferPool::allocBuffer(void)
// address: 0x00172086   size: 0x66 (102 bytes)
//======================================================================
int __fastcall Ogre::HardwarePixelBufferPool::allocBuffer(
        Ogre::HardwarePixelBufferPool *this,
        Ogre::LockSection *a2,
        Ogre::LockSection *a3)
{
  int v4; // r3
  int *v5; // r3
  int v6; // r2
  int v7; // r3
  __int64 v8; // r0
  int v10; // [sp+0h] [bp-Ch] BYREF
  Ogre::LockSection *v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  v10 = 0;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v11, (Ogre::HardwarePixelBufferPool *)((char *)this + 60));
  v4 = *((_DWORD *)this + 10);
  if ( *((_DWORD *)this + 9) != v4 )
  {
    v5 = (int *)(v4 - 4);
    v6 = *v5;
    *((_DWORD *)this + 10) = v5;
    v10 = v6;
  }
  Ogre::LockFunctor::~LockFunctor(v11);
  if ( v10 == 0 )
  {
    v10 = (*(int (__fastcall **)(Ogre::HardwarePixelBufferPool *))(*(_DWORD *)this + 8))(this);
    *(_DWORD *)(v10 + 12) = this;
  }
  v7 = v10;
  *(_BYTE *)(v10 + 4) = 1;
  ++*(_DWORD *)(v7 + 8);
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v11, (Ogre::HardwarePixelBufferPool *)((char *)this + 64));
  HIDWORD(v8) = &v10;
  LODWORD(v8) = (char *)this + 48;
  std::vector<Ogre::HardwarePixelBuffer *>::push_back(v8);
  Ogre::LockFunctor::~LockFunctor(v11);
  return v10;
}


//======================================================================
// Ogre::HardwarePixelBufferPool::garbageCollect(unsigned int)
// address: 0x001720EC   size: 0x100 (256 bytes)
//======================================================================
void __fastcall Ogre::HardwarePixelBufferPool::garbageCollect(Ogre::HardwarePixelBufferPool *this, unsigned int a2)
{
  char *v3; // r5
  __int64 v4; // r0
  int v5; // r5
  int v6; // r6
  int v7; // r3
  __int64 v8; // r0
  char *v9; // r5
  int v10; // r6
  Ogre::LockSection *v12; // [sp+8h] [bp-Ch] BYREF
  Ogre::LockSection *v13[2]; // [sp+Ch] [bp-8h] BYREF

  if ( (dword_4B9340 & 1) == 0 && _cxa_guard_acquire(&dword_4B9340) != 0 )
  {
    dword_4B9344 = 0;
    dword_4B9348 = 0;
    dword_4B934C = 0;
    _cxa_guard_release(&dword_4B9340);
    sub_390BFC(&dword_4B9344, (void (*)(void *))std::vector<Ogre::HardwarePixelBuffer *>::~vector);
  }
  dword_4B9348 = dword_4B9344;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v12, (Ogre::HardwarePixelBufferPool *)((char *)this + 64));
  v3 = *((char **)this + 12);
  while ( v3 != *((char **)this + 13) )
  {
    v13[0] = *(Ogre::LockSection **)v3;
    if ( *((_DWORD *)v13[0] + 2) != 0 )
    {
      v3 += 4;
    }
    else
    {
      v3 = std::vector<Ogre::HardwarePixelBuffer *>::erase((int)this + 48, v3);
      LODWORD(v4) = &dword_4B9344;
      HIDWORD(v4) = v13;
      *((_DWORD *)v13[0] + 4) = *(_DWORD *)(Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton + 28);
      std::vector<Ogre::HardwarePixelBuffer *>::push_back(v4);
    }
  }
  Ogre::LockFunctor::~LockFunctor(&v12);
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v13, (Ogre::HardwarePixelBufferPool *)((char *)this + 60));
  v5 = 0;
  v6 = (dword_4B9348 - dword_4B9344) >> 2;
  while ( v5 != v6 )
  {
    v7 = 4 * v5;
    LODWORD(v8) = (char *)this + 36;
    ++v5;
    HIDWORD(v8) = dword_4B9344 + v7;
    std::vector<Ogre::HardwarePixelBuffer *>::push_back(v8);
  }
  v9 = *((char **)this + 9);
  while ( v9 != *((char **)this + 10) )
  {
    v10 = *(_DWORD *)v9;
    if ( a2 <= *(_DWORD *)(*(_DWORD *)v9 + 16) + 30000 )
    {
      v9 += 4;
    }
    else
    {
      v9 = std::vector<Ogre::HardwarePixelBuffer *>::erase((int)this + 36, v9);
      (*(void (__fastcall **)(int))(*(_DWORD *)v10 + 16))(v10);
    }
  }
  Ogre::LockFunctor::~LockFunctor(v13);
}

