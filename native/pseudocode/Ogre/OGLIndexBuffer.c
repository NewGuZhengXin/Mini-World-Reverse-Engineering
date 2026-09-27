// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLIndexBuffer

//======================================================================
// Ogre::OGLIndexBuffer::~OGLIndexBuffer()
// address: 0x00260174   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14OGLIndexBufferD1Ev'
void __fastcall Ogre::OGLIndexBuffer::~OGLIndexBuffer(Ogre::OGLIndexBuffer *this)
{
  *(_DWORD *)this = &off_45A308;
}


//======================================================================
// Ogre::OGLIndexBuffer::onLostDevice(void)
// address: 0x00260184   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLIndexBuffer::onLostDevice(Ogre::OGLIndexBuffer *this)
{
  ;
}


//======================================================================
// Ogre::OGLIndexBuffer::~OGLIndexBuffer()
// address: 0x002601D4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLIndexBuffer::~OGLIndexBuffer(Ogre::OGLIndexBuffer *this)
{
  Ogre::OGLIndexBuffer::~OGLIndexBuffer(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLIndexBuffer::release(void)
// address: 0x00260226   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall Ogre::OGLIndexBuffer::release(Ogre::OGLIndexBuffer *this)
{
  return Ogre::HardwareBufferPool::freeBuffer(*((_DWORD *)this + 9), this);
}


//======================================================================
// Ogre::OGLIndexBuffer::onResetDevice(void)
// address: 0x002602E4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::OGLIndexBuffer::onResetDevice(Ogre::OGLIndexBuffer *this)
{
  if ( *((_BYTE *)this + 28) != 0 )
  {
    j_glGenBuffers();
    *((_BYTE *)this + 12) = 1;
  }
  return 1;
}


//======================================================================
// Ogre::OGLIndexBuffer::updateData(void const*,unsigned int,unsigned int)
// address: 0x0026031C   size: 0x3C (60 bytes)
//======================================================================
int __fastcall Ogre::OGLIndexBuffer::updateData(int this, const void *a2, unsigned int a3, unsigned int a4)
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
// Ogre::OGLIndexBuffer::OGLIndexBuffer(Ogre::OGLBufferPool *,unsigned int,bool)
// address: 0x002603F0   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14OGLIndexBufferC1EPNS_13OGLBufferPoolEjb'
Ogre::OGLIndexBuffer *__fastcall Ogre::OGLIndexBuffer::OGLIndexBuffer(
        Ogre::OGLIndexBuffer *this,
        Ogre::OGLBufferPool *a2,
        unsigned int a3,
        int a4)
{
  *((_DWORD *)this + 4) = a3;
  *((_DWORD *)this + 5) = a3;
  *((_BYTE *)this + 12) = 1;
  *((_DWORD *)this + 6) = 0;
  *(_DWORD *)this = &off_45A358;
  *((_BYTE *)this + 28) = a4;
  *((_DWORD *)this + 9) = a2;
  *((_DWORD *)this + 10) = 0;
  if ( a4 != 0 )
    j_glGenBuffers();
  else
    *((_DWORD *)this + 8) = 0;
  return this;
}

