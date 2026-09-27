// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLVertexBuffer

//======================================================================
// Ogre::OGLVertexBuffer::~OGLVertexBuffer()
// address: 0x00260188   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15OGLVertexBufferD1Ev'
void __fastcall Ogre::OGLVertexBuffer::~OGLVertexBuffer(Ogre::OGLVertexBuffer *this)
{
  *(_DWORD *)this = &off_45A308;
}


//======================================================================
// Ogre::OGLVertexBuffer::onLostDevice(void)
// address: 0x00260198   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLVertexBuffer::onLostDevice(Ogre::OGLVertexBuffer *this)
{
  ;
}


//======================================================================
// Ogre::OGLVertexBuffer::~OGLVertexBuffer()
// address: 0x002601E6   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLVertexBuffer::~OGLVertexBuffer(Ogre::OGLVertexBuffer *this)
{
  Ogre::OGLVertexBuffer::~OGLVertexBuffer(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLVertexBuffer::release(void)
// address: 0x00260232   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall Ogre::OGLVertexBuffer::release(Ogre::OGLVertexBuffer *this)
{
  return Ogre::HardwareBufferPool::freeBuffer(*((_DWORD *)this + 9), this);
}


//======================================================================
// Ogre::OGLVertexBuffer::onResetDevice(void)
// address: 0x00260300   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::OGLVertexBuffer::onResetDevice(Ogre::OGLVertexBuffer *this)
{
  if ( *((_BYTE *)this + 28) != 0 )
  {
    j_glGenBuffers();
    *((_BYTE *)this + 12) = 1;
  }
  return 1;
}


//======================================================================
// Ogre::OGLVertexBuffer::updateData(void const*,unsigned int,unsigned int)
// address: 0x00260364   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::OGLVertexBuffer::updateData(int this, const void *a2, unsigned int a3, unsigned int a4)
{
  if ( *(_BYTE *)(this + 28) != 0 )
  {
    j_glBindBuffer();
    j_glBufferData();
    return j_glBindBuffer();
  }
  else
  {
    *(_DWORD *)(this + 40) = a2;
  }
  return this;
}


//======================================================================
// Ogre::OGLVertexBuffer::OGLVertexBuffer(Ogre::OGLBufferPool *,unsigned int,bool)
// address: 0x00260428   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15OGLVertexBufferC1EPNS_13OGLBufferPoolEjb'
Ogre::OGLVertexBuffer *__fastcall Ogre::OGLVertexBuffer::OGLVertexBuffer(
        Ogre::OGLVertexBuffer *this,
        Ogre::OGLBufferPool *a2,
        unsigned int a3,
        int a4)
{
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a3;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 12) = 1;
  *((_BYTE *)this + 28) = a4;
  *((_DWORD *)this + 9) = a2;
  *(_DWORD *)this = &off_45A378;
  if ( a4 != 0 )
    j_glGenBuffers();
  return this;
}

