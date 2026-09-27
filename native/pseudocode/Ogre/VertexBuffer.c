// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::VertexBuffer

//======================================================================
// Ogre::VertexBuffer::getRTTI(void)const
// address: 0x00163AC8   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::VertexBuffer::getRTTI(Ogre::VertexBuffer *this)
{
  return &Ogre::VertexBuffer::m_RTTI;
}


//======================================================================
// Ogre::VertexBuffer::~VertexBuffer()
// address: 0x00163CC0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12VertexBufferD1Ev'
void __fastcall Ogre::VertexBuffer::~VertexBuffer(Ogre::FixedString **this, void *a2)
{
  *this = (Ogre::FixedString *)&off_456D70;
  Ogre::Resource::~Resource(this, a2);
}


//======================================================================
// Ogre::VertexBuffer::~VertexBuffer()
// address: 0x00163CDC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::VertexBuffer::~VertexBuffer(Ogre::FixedString **this, void *a2)
{
  Ogre::VertexBuffer::~VertexBuffer(this, a2);
  operator delete(this);
}

