// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderableObject

//======================================================================
// Ogre::RenderableObject::enableUVMask(bool,bool)
// address: 0x0014405C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::RenderableObject::enableUVMask(Ogre::RenderableObject *this, bool a2, bool a3)
{
  ;
}


//======================================================================
// Ogre::RenderableObject::setLiuGuangTexture(Ogre::TextureData *)
// address: 0x0014405E   size: 0x2 (2 bytes)
//======================================================================
void Ogre::RenderableObject::setLiuGuangTexture()
{
  ;
}


//======================================================================
// Ogre::RenderableObject::setLiuGuangTexture(char const*)
// address: 0x00144060   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::RenderableObject::setLiuGuangTexture(Ogre::RenderableObject *this, const char *a2)
{
  ;
}


//======================================================================
// Ogre::RenderableObject::setLayer(Ogre::RenderLayer)
// address: 0x00144062   size: 0x6 (6 bytes)
//======================================================================
_DWORD *__fastcall Ogre::RenderableObject::setLayer(int a1, int a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)(a1 + 236);
  *result = a2;
  return result;
}


//======================================================================
// Ogre::RenderableObject::addRenderUsageBits(Ogre::RenderUsage)
// address: 0x00144068   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall Ogre::RenderableObject::addRenderUsageBits(int a1, char a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)(a1 + 244);
  *result |= 1 << a2;
  return result;
}


//======================================================================
// Ogre::RenderableObject::clearRenderUsageBits(Ogre::RenderUsage)
// address: 0x00144078   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall Ogre::RenderableObject::clearRenderUsageBits(int a1, char a2)
{
  _DWORD *result; // r0

  result = (_DWORD *)(a1 + 244);
  *result &= ~(1 << a2);
  return result;
}


//======================================================================
// Ogre::RenderableObject::getRenderPassRequired(Ogre::RenderPassDesc &)
// address: 0x00144088   size: 0x2 (2 bytes)
//======================================================================
void Ogre::RenderableObject::getRenderPassRequired()
{
  ;
}


//======================================================================
// Ogre::RenderableObject::BuildDecalMesh(Ogre::BoxBound const&,Ogre::Vector3 *,unsigned short *,int,int,int &,int &)
// address: 0x0014C4C2   size: 0xC (12 bytes)
//======================================================================
void __fastcall Ogre::RenderableObject::BuildDecalMesh(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7,
        _DWORD *a8)
{
  *a7 = 0;
  *a8 = 0;
}


//======================================================================
// Ogre::RenderableObject::~RenderableObject()
// address: 0x0014C4F4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16RenderableObjectD1Ev'
void __fastcall Ogre::RenderableObject::~RenderableObject(Ogre::RenderableObject *this)
{
  *(_DWORD *)this = &off_456828;
  Ogre::MovableObject::~MovableObject(this);
}


//======================================================================
// Ogre::RenderableObject::~RenderableObject()
// address: 0x0014C510   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::RenderableObject::~RenderableObject(Ogre::RenderableObject *this)
{
  Ogre::RenderableObject::~RenderableObject(this);
  operator delete(this);
}


//======================================================================
// Ogre::RenderableObject::getRTTI(void)const
// address: 0x0015BE24   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::RenderableObject::getRTTI(Ogre::RenderableObject *this)
{
  return &Ogre::RenderableObject::m_RTTI;
}


//======================================================================
// Ogre::RenderableObject::setCanSel(bool)
// address: 0x0015BE30   size: 0x6 (6 bytes)
//======================================================================
_BYTE *__fastcall Ogre::RenderableObject::setCanSel(Ogre::RenderableObject *this, bool a2)
{
  _BYTE *result; // r0

  result = (char *)this + 248;
  *result = a2;
  return result;
}


//======================================================================
// Ogre::RenderableObject::getCanSel(void)
// address: 0x0015BE36   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::RenderableObject::getCanSel(Ogre::RenderableObject *this)
{
  return *((unsigned __int8 *)this + 248);
}


//======================================================================
// Ogre::RenderableObject::RenderableObject(void)
// address: 0x00188A08   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16RenderableObjectC1Ev'
Ogre::RenderableObject *__fastcall Ogre::RenderableObject::RenderableObject(Ogre::RenderableObject *this)
{
  Ogre::MovableObject::MovableObject(this);
  *(_DWORD *)this = &off_456828;
  *((_DWORD *)this + 59) = 2;
  *((_DWORD *)this + 60) = 0;
  *((_BYTE *)this + 248) = 0;
  *((_DWORD *)this + 53) = 0;
  *((_DWORD *)this + 61) = 3;
  *((_BYTE *)this + 232) = 0;
  *((_BYTE *)this + 233) = 0;
  return this;
}

