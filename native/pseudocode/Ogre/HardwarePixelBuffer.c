// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::HardwarePixelBuffer

//======================================================================
// Ogre::HardwarePixelBuffer::createRenderTarget(unsigned int,int,int,bool)
// address: 0x0018FD12   size: 0x20 (32 bytes)
//======================================================================
int __fastcall Ogre::HardwarePixelBuffer::createRenderTarget(
        Ogre::HardwarePixelBuffer *this,
        unsigned int a2,
        int a3,
        int a4,
        bool a5)
{
  return (*(int (__fastcall **)(_DWORD, Ogre::HardwarePixelBuffer *, unsigned int, int))(**((_DWORD **)this + 3) + 24))(
           *((_DWORD *)this + 3),
           this,
           a2,
           a3);
}


//======================================================================
// Ogre::HardwarePixelBuffer::~HardwarePixelBuffer()
// address: 0x0025F538   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19HardwarePixelBufferD1Ev'
void __fastcall Ogre::HardwarePixelBuffer::~HardwarePixelBuffer(Ogre::HardwarePixelBuffer *this)
{
  *(_DWORD *)this = &off_45A190;
}


//======================================================================
// Ogre::HardwarePixelBuffer::~HardwarePixelBuffer()
// address: 0x0025F57C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::HardwarePixelBuffer::~HardwarePixelBuffer(Ogre::HardwarePixelBuffer *this)
{
  *(_DWORD *)this = &off_45A190;
  operator delete(this);
}


//======================================================================
// Ogre::HardwarePixelBuffer::deleteThis(void)
// address: 0x0025F6C2   size: 0xE (14 bytes)
//======================================================================
int __fastcall Ogre::HardwarePixelBuffer::deleteThis(int this)
{
  if ( this != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)this + 16))(this);
  return this;
}

