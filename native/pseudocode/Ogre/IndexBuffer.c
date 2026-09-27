// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::IndexBuffer

//======================================================================
// Ogre::IndexBuffer::getRTTI(void)const
// address: 0x00163AD4   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::IndexBuffer::getRTTI(Ogre::IndexBuffer *this)
{
  return &Ogre::IndexBuffer::m_RTTI;
}


//======================================================================
// Ogre::IndexBuffer::~IndexBuffer()
// address: 0x00163CF0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11IndexBufferD1Ev'
void __fastcall Ogre::IndexBuffer::~IndexBuffer(Ogre::FixedString **this, void *a2)
{
  *this = (Ogre::FixedString *)&off_456D98;
  Ogre::Resource::~Resource(this, a2);
}


//======================================================================
// Ogre::IndexBuffer::~IndexBuffer()
// address: 0x00163D0C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::IndexBuffer::~IndexBuffer(Ogre::FixedString **this, void *a2)
{
  Ogre::IndexBuffer::~IndexBuffer(this, a2);
  operator delete(this);
}

