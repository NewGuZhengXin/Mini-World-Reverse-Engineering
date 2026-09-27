// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DynamicIndexBuffer

//======================================================================
// Ogre::DynamicIndexBuffer::getRTTI(void)const
// address: 0x00163B04   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::DynamicIndexBuffer::getRTTI(Ogre::DynamicIndexBuffer *this)
{
  return &Ogre::DynamicIndexBuffer::m_RTTI;
}


//======================================================================
// Ogre::DynamicIndexBuffer::getHBuf(void)
// address: 0x00163B4C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall Ogre::DynamicIndexBuffer::getHBuf(Ogre::DynamicIndexBuffer *this)
{
  int v2; // r5

  v2 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton + 20))(
         Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
         *((_DWORD *)this + 8));
  (*(void (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v2 + 4))(
    v2,
    **((_DWORD **)this + 6) + *((_DWORD *)this + 7),
    2 * *((_DWORD *)this + 8),
    0);
  return v2;
}


//======================================================================
// Ogre::DynamicIndexBuffer::~DynamicIndexBuffer()
// address: 0x00163D20   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18DynamicIndexBufferD1Ev'
void __fastcall Ogre::DynamicIndexBuffer::~DynamicIndexBuffer(Ogre::FixedString **this, void *a2)
{
  *this = (Ogre::FixedString *)&off_456E68;
  Ogre::IndexBuffer::~IndexBuffer(this, a2);
}


//======================================================================
// Ogre::DynamicIndexBuffer::~DynamicIndexBuffer()
// address: 0x00163D3C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DynamicIndexBuffer::~DynamicIndexBuffer(Ogre::FixedString **this, void *a2)
{
  Ogre::DynamicIndexBuffer::~DynamicIndexBuffer(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::DynamicIndexBuffer::newObject(void)
// address: 0x00163D50   size: 0x1E (30 bytes)
//======================================================================
_DWORD *__fastcall Ogre::DynamicIndexBuffer::newObject(Ogre::DynamicIndexBuffer *this)
{
  _DWORD *result; // r0

  result = (_DWORD *)operator new(0x24u);
  result[1] = 1;
  result[2] = 0;
  result[3] = 0;
  *result = &off_456E68;
  return result;
}


//======================================================================
// Ogre::DynamicIndexBuffer::lock(void)
// address: 0x001640A6   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::DynamicIndexBuffer::lock(Ogre::DynamicIndexBuffer *this)
{
  return **((_DWORD **)this + 6) + *((_DWORD *)this + 7);
}

