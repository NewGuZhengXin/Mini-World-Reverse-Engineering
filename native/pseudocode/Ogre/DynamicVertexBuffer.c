// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::DynamicVertexBuffer

//======================================================================
// Ogre::DynamicVertexBuffer::getRTTI(void)const
// address: 0x00163AF8   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::DynamicVertexBuffer::getRTTI(Ogre::DynamicVertexBuffer *this)
{
  return &Ogre::DynamicVertexBuffer::m_RTTI;
}


//======================================================================
// Ogre::DynamicVertexBuffer::getHBuf(void)
// address: 0x00163B10   size: 0x36 (54 bytes)
//======================================================================
int __fastcall Ogre::DynamicVertexBuffer::getHBuf(Ogre::DynamicVertexBuffer *this)
{
  int v2; // r6
  int v3; // r0
  int v4; // r4

  v2 = *((_DWORD *)this + 7) * *((_DWORD *)this + 8);
  v3 = (*(int (__fastcall **)(int, int))(*(_DWORD *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton + 16))(
         Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
         v2);
  v4 = v3;
  if ( v3 != 0 )
    (*(void (__fastcall **)(int, int, int, _DWORD))(*(_DWORD *)v3 + 4))(
      v3,
      **((_DWORD **)this + 9) + *((_DWORD *)this + 10),
      v2,
      0);
  return v4;
}


//======================================================================
// Ogre::DynamicVertexBuffer::DynamicVertexBuffer(void)
// address: 0x00163DFC   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19DynamicVertexBufferC1Ev'
Ogre::DynamicVertexBuffer *__fastcall Ogre::DynamicVertexBuffer::DynamicVertexBuffer(Ogre::DynamicVertexBuffer *this)
{
  *((_DWORD *)this + 1) = 1;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(_DWORD *)this = &off_456E40;
  Ogre::VertexFormat::VertexFormat((_DWORD *)this + 4);
  return this;
}


//======================================================================
// Ogre::DynamicVertexBuffer::newObject(void)
// address: 0x00163E24   size: 0x12 (18 bytes)
//======================================================================
Ogre::DynamicVertexBuffer *__fastcall Ogre::DynamicVertexBuffer::newObject(Ogre::DynamicVertexBuffer *this)
{
  Ogre::DynamicVertexBuffer *v1; // r4

  v1 = (Ogre::DynamicVertexBuffer *)operator new(0x2Cu);
  Ogre::DynamicVertexBuffer::DynamicVertexBuffer(v1);
  return v1;
}


//======================================================================
// Ogre::DynamicVertexBuffer::~DynamicVertexBuffer()
// address: 0x00163E44   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre19DynamicVertexBufferD1Ev'
void __fastcall Ogre::DynamicVertexBuffer::~DynamicVertexBuffer(void **this)
{
  void *v2; // r1

  *this = &off_456E40;
  Ogre::VertexFormat::~VertexFormat(this + 4);
  Ogre::VertexBuffer::~VertexBuffer((Ogre::FixedString **)this, v2);
}


//======================================================================
// Ogre::DynamicVertexBuffer::~DynamicVertexBuffer()
// address: 0x00163E68   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::DynamicVertexBuffer::~DynamicVertexBuffer(void **this)
{
  Ogre::DynamicVertexBuffer::~DynamicVertexBuffer(this);
  operator delete(this);
}


//======================================================================
// Ogre::DynamicVertexBuffer::lock(void)
// address: 0x00164088   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::DynamicVertexBuffer::lock(Ogre::DynamicVertexBuffer *this)
{
  return **((_DWORD **)this + 9) + *((_DWORD *)this + 10);
}


//======================================================================
// Ogre::DynamicVertexBuffer::shrinkTo(unsigned int)
// address: 0x00164092   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall Ogre::DynamicVertexBuffer::shrinkTo(_DWORD *this, unsigned int a2)
{
  int v2; // r3

  v2 = *(this + 7);
  *(this + 7) = a2;
  *(_DWORD *)(*(this + 9) + 12) -= (v2 - a2) * *(this + 8);
  return this;
}


//======================================================================
// Ogre::DynamicVertexBuffer::reset(Ogre::DynamicBufferPool *,unsigned int,Ogre::VertexFormat const&,unsigned int)
// address: 0x0016428E   size: 0x22 (34 bytes)
//======================================================================
int __fastcall Ogre::DynamicVertexBuffer::reset(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  Ogre::VertexFormat *v5; // r5
  int result; // r0

  v5 = (Ogre::VertexFormat *)(a1 + 4);
  a1[10] = a3;
  a1[9] = a2;
  Ogre::VertexFormat::operator=((int)(a1 + 4), a4);
  a1[7] = a5;
  result = Ogre::VertexFormat::getStride(v5);
  a1[8] = result;
  return result;
}

