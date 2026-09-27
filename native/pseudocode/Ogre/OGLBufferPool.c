// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLBufferPool

//======================================================================
// Ogre::OGLBufferPool::~OGLBufferPool()
// address: 0x002601F8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre13OGLBufferPoolD1Ev'
void __fastcall Ogre::OGLBufferPool::~OGLBufferPool(Ogre::OGLBufferPool *this)
{
  *(_DWORD *)this = &off_45A398;
  Ogre::HardwareBufferPool::~HardwareBufferPool(this);
}


//======================================================================
// Ogre::OGLBufferPool::~OGLBufferPool()
// address: 0x00260214   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLBufferPool::~OGLBufferPool(Ogre::OGLBufferPool *this)
{
  Ogre::OGLBufferPool::~OGLBufferPool(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLBufferPool::newBuffer(unsigned int)
// address: 0x0026045C   size: 0x36 (54 bytes)
//======================================================================
Ogre::OGLVertexBuffer *__fastcall Ogre::OGLBufferPool::newBuffer(Ogre::OGLBufferPool *this, unsigned int a2)
{
  Ogre::OGLVertexBuffer *v4; // r5

  if ( *((_BYTE *)this + 32) != 0 )
  {
    v4 = (Ogre::OGLVertexBuffer *)operator new(0x2Cu);
    Ogre::OGLVertexBuffer::OGLVertexBuffer(v4, this, a2, 1);
  }
  else
  {
    v4 = (Ogre::OGLVertexBuffer *)operator new(0x2Cu);
    Ogre::OGLIndexBuffer::OGLIndexBuffer(v4, this, a2, 1);
  }
  return v4;
}

