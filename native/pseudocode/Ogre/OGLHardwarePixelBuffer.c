// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLHardwarePixelBuffer

//======================================================================
// Ogre::OGLHardwarePixelBuffer::dumpToDDS(char const*)
// address: 0x0025F552   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLHardwarePixelBuffer::dumpToDDS(Ogre::OGLHardwarePixelBuffer *this, const char *a2)
{
  ;
}


//======================================================================
// Ogre::OGLHardwarePixelBuffer::dumpToBuffer(char const*,unsigned int &)
// address: 0x0025F554   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLHardwarePixelBuffer::dumpToBuffer(
        Ogre::OGLHardwarePixelBuffer *this,
        const char *a2,
        unsigned int *a3)
{
  return 0;
}


//======================================================================
// Ogre::OGLHardwarePixelBuffer::getColorBit(unsigned long *)
// address: 0x0025F558   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLHardwarePixelBuffer::getColorBit(Ogre::OGLHardwarePixelBuffer *this, unsigned int *a2)
{
  ;
}


//======================================================================
// Ogre::OGLHardwarePixelBuffer::~OGLHardwarePixelBuffer()
// address: 0x0025F850   size: 0x26 (38 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre22OGLHardwarePixelBufferD1Ev'
void __fastcall Ogre::OGLHardwarePixelBuffer::~OGLHardwarePixelBuffer(Ogre::OGLPixelBufferPool **this)
{
  *this = (Ogre::OGLPixelBufferPool *)&off_45A200;
  Ogre::OGLPixelBufferPool::releasePixelBufferSysTexture(*(this + 3), (const GLuint *)this, 0);
  *this = (Ogre::OGLPixelBufferPool *)&off_45A190;
}


//======================================================================
// Ogre::OGLHardwarePixelBuffer::~OGLHardwarePixelBuffer()
// address: 0x0025F880   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLHardwarePixelBuffer::~OGLHardwarePixelBuffer(Ogre::OGLPixelBufferPool **this)
{
  Ogre::OGLHardwarePixelBuffer::~OGLHardwarePixelBuffer(this);
  operator delete(this);
}

