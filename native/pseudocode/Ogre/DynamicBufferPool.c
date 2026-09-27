// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DynamicBufferPool

//======================================================================
// Ogre::DynamicBufferPool::DynamicBufferPool(unsigned int)
// address: 0x00164B80   size: 0x56 (86 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17DynamicBufferPoolC2Ej'
Ogre::DynamicBufferPool *__fastcall Ogre::DynamicBufferPool::DynamicBufferPool(
        Ogre::DynamicBufferPool *this,
        size_t byte_count)
{
  char *v4; // r6

  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  if ( byte_count != 0 )
  {
    v4 = (char *)operator new(byte_count);
    std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<unsigned char>(nullptr, nullptr, v4);
    if ( *(_DWORD *)this != 0 )
      operator delete(*(void **)this);
    *(_DWORD *)this = v4;
    *((_DWORD *)this + 1) = v4;
    *((_DWORD *)this + 2) = &v4[byte_count];
  }
  *((_DWORD *)this + 3) = 0;
  return this;
}


//======================================================================
// Ogre::DynamicBufferPool::allocBuffer(unsigned int)
// address: 0x00164BD6   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::DynamicBufferPool::allocBuffer(Ogre::DynamicBufferPool *this, unsigned int a2, int a3)
{
  int v3; // r5
  unsigned int v6; // r0
  _BYTE *v7; // r1
  _BYTE *v8; // r2
  unsigned __int8 v10[5]; // [sp+7h] [bp-5h] BYREF

  v10[0] = HIBYTE(a2);
  *(_DWORD *)&v10[1] = a3;
  v3 = *((_DWORD *)this + 3);
  v6 = a2 + v3;
  v7 = *((_BYTE **)this + 1);
  v8 = &v7[-*(_DWORD *)this];
  if ( v6 > (unsigned int)v8 )
  {
    v10[0] = 0;
    std::vector<unsigned char>::_M_fill_insert((int)this, v7, v6 - (_DWORD)v8, v10);
  }
  *((_DWORD *)this + 3) += a2;
  return v3;
}


//======================================================================
// Ogre::DynamicBufferPool::allocIndexBuffer(unsigned int)
// address: 0x00164CAC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall Ogre::DynamicBufferPool::allocIndexBuffer(Ogre::DynamicBufferPool *this, unsigned int a2, int a3)
{
  int v3; // r2
  __int64 v6; // r0
  _DWORD *v7; // r3
  _DWORD *v8; // r7
  __int64 v9; // r0
  _DWORD v11[2]; // [sp+4h] [bp-8h] BYREF

  v11[0] = a2;
  v11[1] = a3;
  v3 = *((_DWORD *)this + 11);
  if ( v3 == *((_DWORD *)this + 12) )
  {
    v6 = __PAIR64__(v11, operator new(0x24u));
    *(_DWORD *)(v6 + 4) = 1;
    *(_DWORD *)(v6 + 8) = 0;
    *(_DWORD *)(v6 + 12) = 0;
    *(_DWORD *)v6 = &off_456E68;
    v11[0] = v6;
    LODWORD(v6) = (char *)this + 44;
    std::vector<Ogre::DynamicIndexBuffer *>::push_back(v6);
  }
  v7 = (_DWORD *)(*((_DWORD *)this + 12) - 4);
  v8 = (_DWORD *)*v7;
  *((_DWORD *)this + 12) = v7;
  v11[0] = v8;
  v8[7] = Ogre::DynamicBufferPool::allocBuffer(this, 2 * a2, v3);
  v8[8] = a2;
  v8[6] = this;
  HIDWORD(v9) = v11;
  LODWORD(v9) = (char *)this + 56;
  std::vector<Ogre::DynamicIndexBuffer *>::push_back(v9);
  return v11[0];
}


//======================================================================
// Ogre::DynamicBufferPool::allocVertexBuffer(Ogre::VertexFormat const&,unsigned int)
// address: 0x00164EBC   size: 0x68 (104 bytes)
//======================================================================
int __fastcall Ogre::DynamicBufferPool::allocVertexBuffer(
        Ogre::DynamicBufferPool *this,
        const Ogre::VertexFormat *a2,
        int a3)
{
  Ogre::DynamicVertexBuffer *v5; // r7
  __int64 v6; // r0
  _DWORD **v7; // r3
  _DWORD *v8; // r7
  int Stride; // r0
  int v10; // r0
  __int64 v11; // r0
  _DWORD v14[2]; // [sp+14h] [bp-8h] BYREF

  if ( *((_DWORD *)this + 5) == *((_DWORD *)this + 6) )
  {
    v5 = (Ogre::DynamicVertexBuffer *)operator new(0x2Cu);
    Ogre::DynamicVertexBuffer::DynamicVertexBuffer(v5);
    LODWORD(v6) = (char *)this + 20;
    HIDWORD(v6) = v14;
    v14[0] = v5;
    std::vector<Ogre::DynamicVertexBuffer *>::push_back(v6);
  }
  v7 = (_DWORD **)(*((_DWORD *)this + 6) - 4);
  v8 = *v7;
  *((_DWORD *)this + 6) = v7;
  v14[0] = v8;
  Stride = Ogre::VertexFormat::getStride(a2);
  v10 = Ogre::DynamicBufferPool::allocBuffer(this, a3 * Stride, a3);
  Ogre::DynamicVertexBuffer::reset(v8, (int)this, v10, (int)a2, a3);
  LODWORD(v11) = (char *)this + 32;
  HIDWORD(v11) = v14;
  std::vector<Ogre::DynamicVertexBuffer *>::push_back(v11);
  return v14[0];
}


//======================================================================
// Ogre::DynamicBufferPool::reset(void)
// address: 0x0016502C   size: 0x52 (82 bytes)
//======================================================================
_DWORD *__fastcall Ogre::DynamicBufferPool::reset(_DWORD *this)
{
  _DWORD *v1; // r4
  unsigned int i; // r5
  int v3; // r3
  unsigned int v4; // r2
  __int64 v5; // r0
  unsigned int j; // r5
  int v7; // r3
  unsigned int v8; // r2
  __int64 v9; // r0

  v1 = this;
  for ( i = 0; ; ++i )
  {
    v3 = v1[14];
    v4 = (v1[15] - v3) >> 2;
    if ( i >= v4 )
      break;
    HIDWORD(v5) = v3 + 4 * i;
    LODWORD(v5) = v1 + 11;
    this = (_DWORD *)std::vector<Ogre::DynamicIndexBuffer *>::push_back(v5);
  }
  if ( v4 != 0 )
    v1[15] = v3;
  for ( j = 0; ; ++j )
  {
    v7 = v1[8];
    v8 = (v1[9] - v7) >> 2;
    if ( j >= v8 )
      break;
    HIDWORD(v9) = v7 + 4 * j;
    LODWORD(v9) = v1 + 5;
    this = (_DWORD *)std::vector<Ogre::DynamicVertexBuffer *>::push_back(v9);
  }
  if ( v8 != 0 )
    v1[9] = v7;
  v1[3] = 0;
  return this;
}


//======================================================================
// Ogre::DynamicBufferPool::~DynamicBufferPool()
// address: 0x0016507E   size: 0x7E (126 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre17DynamicBufferPoolD2Ev'
void __fastcall Ogre::DynamicBufferPool::~DynamicBufferPool(Ogre::DynamicBufferPool *this)
{
  unsigned int i; // r5
  int v3; // r3
  _DWORD *v4; // r0
  int v5; // r3
  unsigned int j; // r5
  int v7; // r3
  _DWORD *v8; // r0
  int v9; // r3
  void *v10; // r0

  Ogre::DynamicBufferPool::reset(this);
  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD *)this + 5);
    if ( i >= (*((_DWORD *)this + 6) - v3) >> 2 )
      break;
    v4 = *(_DWORD **)(4 * i + v3);
    v5 = v4[1] - 1;
    v4[1] = v5;
    if ( v5 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v4 + 24))(v4);
  }
  for ( j = 0; ; ++j )
  {
    v7 = *((_DWORD *)this + 11);
    if ( j >= (*((_DWORD *)this + 12) - v7) >> 2 )
      break;
    v8 = *(_DWORD **)(4 * j + v7);
    v9 = v8[1] - 1;
    v8[1] = v9;
    if ( v9 <= 0 )
      (*(void (__fastcall **)(_DWORD *))(*v8 + 24))(v8);
  }
  v10 = *((void **)this + 14);
  *((_DWORD *)this + 1) = *(_DWORD *)this;
  sub_163CB4(v10);
  sub_163CB4(*((void **)this + 11));
  sub_163CA8(*((void **)this + 8));
  sub_163CA8(*((void **)this + 5));
  if ( *(_DWORD *)this != 0 )
    operator delete(*(void **)this);
}

