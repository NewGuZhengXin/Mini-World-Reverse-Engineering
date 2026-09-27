// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::HardwareBufferPool

//======================================================================
// Ogre::HardwareBufferPool::HardwareBufferPool(void)
// address: 0x0015C5FC   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18HardwareBufferPoolC1Ev'
Ogre::HardwareBufferPool *__fastcall Ogre::HardwareBufferPool::HardwareBufferPool(Ogre::HardwareBufferPool *this)
{
  *(_DWORD *)this = &off_456910;
  *((_DWORD *)this + 2) = (char *)this + 4;
  *((_DWORD *)this + 1) = (char *)this + 4;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 5) = (char *)this + 16;
  *((_DWORD *)this + 4) = (char *)this + 16;
  *((_DWORD *)this + 6) = 0;
  Ogre::LockSection::LockSection((pthread_mutex_t *)((char *)this + 28));
  return this;
}


//======================================================================
// Ogre::HardwareBufferPool::onLostDevice(void)
// address: 0x0015C644   size: 0x4E (78 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HardwareBufferPool::onLostDevice(Ogre::HardwareBufferPool *this)
{
  char *v1; // r6
  char *i; // r4
  char *v4; // r4
  _DWORD *v5; // r5
  _DWORD *result; // r0
  _DWORD *j; // r4
  _DWORD *v8; // r4

  v1 = (char *)this + 4;
  for ( i = (char *)Ogre::ChainList<Ogre::HardwareBuffer>::BeginIterate((_DWORD *)this + 1); i != nullptr; i = v4 - 4 )
  {
    (*(void (__fastcall **)(char *))(*(_DWORD *)i + 8))(i);
    v4 = *((char **)i + 1);
    if ( v4 == v1 || v4 == nullptr )
      break;
  }
  v5 = (_DWORD *)((char *)this + 16);
  result = Ogre::ChainList<Ogre::HardwareBuffer>::BeginIterate(v5);
  for ( j = result; j != nullptr; j = v8 - 1 )
  {
    result = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*j + 8))(j);
    v8 = (_DWORD *)j[1];
    if ( v8 == v5 || v8 == nullptr )
      break;
  }
  return result;
}


//======================================================================
// Ogre::HardwareBufferPool::onResetDevice(void)
// address: 0x0015C692   size: 0x5C (92 bytes)
//======================================================================
int __fastcall Ogre::HardwareBufferPool::onResetDevice(Ogre::HardwareBufferPool *this)
{
  char *v1; // r6
  char *i; // r4
  char *v5; // r4
  _DWORD *v6; // r5
  _DWORD *j; // r4
  _DWORD *v8; // r4

  v1 = (char *)this + 4;
  for ( i = (char *)Ogre::ChainList<Ogre::HardwareBuffer>::BeginIterate((_DWORD *)this + 1); i != nullptr; i = v5 - 4 )
  {
    if ( (*(int (__fastcall **)(char *))(*(_DWORD *)i + 12))(i) == 0 )
      return 0;
    v5 = *((char **)i + 1);
    if ( v5 == v1 || v5 == nullptr )
      break;
  }
  v6 = (_DWORD *)((char *)this + 16);
  for ( j = Ogre::ChainList<Ogre::HardwareBuffer>::BeginIterate(v6); j != nullptr; j = v8 - 1 )
  {
    if ( (*(int (__fastcall **)(_DWORD *))(*j + 12))(j) == 0 )
      return 0;
    v8 = (_DWORD *)j[1];
    if ( v8 == v6 || v8 == nullptr )
      break;
  }
  return 1;
}


//======================================================================
// Ogre::HardwareBufferPool::~HardwareBufferPool()
// address: 0x0015C714   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18HardwareBufferPoolD1Ev'
void __fastcall Ogre::HardwareBufferPool::~HardwareBufferPool(Ogre::HardwareBufferPool *this)
{
  char *v2; // r5
  int *i; // r4
  int v4; // r7

  *(_DWORD *)this = &off_456910;
  v2 = (char *)this + 4;
  for ( i = Ogre::ChainList<Ogre::HardwareBuffer>::BeginIterate((_DWORD *)this + 1); i != nullptr; i = (int *)v4 )
  {
    v4 = Ogre::ChainList<Ogre::HardwareBuffer>::Remove((int)v2, i + 1);
    (*(void (__fastcall **)(int *))(*i + 20))(i);
  }
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 28));
}


//======================================================================
// Ogre::HardwareBufferPool::~HardwareBufferPool()
// address: 0x0015C758   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::HardwareBufferPool::~HardwareBufferPool(Ogre::HardwareBufferPool *this)
{
  Ogre::HardwareBufferPool::~HardwareBufferPool(this);
  operator delete(this);
}


//======================================================================
// Ogre::HardwareBufferPool::freeBuffer(Ogre::HardwareBuffer *)
// address: 0x0015C76A   size: 0x96 (150 bytes)
//======================================================================
_DWORD *__fastcall Ogre::HardwareBufferPool::freeBuffer(int a1, _DWORD *a2)
{
  pthread_mutex_t *v2; // r6
  int *v5; // r1
  int v6; // r7
  _DWORD *result; // r0
  _DWORD *v8; // r3
  int v9; // r3
  _DWORD *v10; // r2

  v2 = (pthread_mutex_t *)(a1 + 28);
  if ( a1 != -28 )
    Ogre::LockSection::Lock((pthread_mutex_t *)(a1 + 28));
  if ( a2 != nullptr )
    v5 = a2 + 1;
  else
    v5 = nullptr;
  v6 = a1 + 4;
  Ogre::ChainList<Ogre::HardwareBuffer>::Remove(a1 + 16, v5);
  result = Ogre::ChainList<Ogre::HardwareBuffer>::BeginIterate((_DWORD *)(a1 + 4));
  v8 = nullptr;
  while ( result != nullptr && result[5] <= a2[5] )
  {
    v9 = result[1];
    if ( v9 == v6 )
    {
      v10 = nullptr;
    }
    else if ( v9 != 0 )
    {
      v10 = (_DWORD *)(v9 - 4);
    }
    else
    {
      v10 = nullptr;
    }
    v8 = result;
    result = v10;
  }
  if ( v8 != nullptr )
  {
    if ( a2 != nullptr )
      ++a2;
    a2[1] = v8 + 1;
    *a2 = v8[1];
    *(_DWORD *)(v8[1] + 4) = a2;
    v8[1] = a2;
  }
  else
  {
    if ( a2 != nullptr )
      ++a2;
    a2[1] = v6;
    *a2 = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = a2;
    *(_DWORD *)(a1 + 4) = a2;
  }
  ++*(_DWORD *)(a1 + 12);
  if ( v2 != nullptr )
    return (_DWORD *)Ogre::LockSection::Unlock(v2);
  return result;
}


//======================================================================
// Ogre::HardwareBufferPool::allocBuffer(unsigned int)
// address: 0x0015C800   size: 0x8A (138 bytes)
//======================================================================
int __fastcall Ogre::HardwareBufferPool::allocBuffer(Ogre::HardwareBufferPool *this, unsigned int a2)
{
  pthread_mutex_t *v2; // r6
  _DWORD *v5; // r0
  unsigned int v6; // r2
  int i; // r4
  unsigned int v8; // r3
  char *v9; // r4
  _DWORD *v10; // r3
  char *v12; // [sp+4h] [bp-8h]

  v2 = (pthread_mutex_t *)((char *)this + 28);
  if ( this != (Ogre::HardwareBufferPool *)-28 )
    Ogre::LockSection::Lock((pthread_mutex_t *)((char *)this + 28));
  v12 = (char *)this + 4;
  v5 = Ogre::ChainList<Ogre::HardwareBuffer>::BeginIterate((_DWORD *)this + 1);
  v6 = 2 * a2;
  for ( i = (int)v5; i != 0; i = (int)(v9 - 4) )
  {
    v8 = *(_DWORD *)(i + 20);
    if ( v8 >= v6 )
      break;
    if ( v8 >= a2 )
    {
      Ogre::ChainList<Ogre::HardwareBuffer>::Remove((int)v12, (int *)(i + 4));
      *(_DWORD *)(i + 16) = a2;
      *(_BYTE *)(i + 12) = 1;
LABEL_11:
      v10 = (_DWORD *)(i + 4);
      goto LABEL_12;
    }
    v9 = *(char **)(i + 4);
    if ( v9 == v12 || v9 == nullptr )
      break;
  }
  i = (*(int (__fastcall **)(Ogre::HardwareBufferPool *, unsigned int, unsigned int))(*(_DWORD *)this + 8))(
        this,
        a2,
        v6);
  if ( i != 0 )
    goto LABEL_11;
  v10 = nullptr;
LABEL_12:
  *v10 = (char *)this + 16;
  v10[1] = *((_DWORD *)this + 5);
  **((_DWORD **)this + 5) = v10;
  *((_DWORD *)this + 5) = v10;
  ++*((_DWORD *)this + 6);
  if ( v2 != nullptr )
    Ogre::LockSection::Unlock(v2);
  return i;
}

