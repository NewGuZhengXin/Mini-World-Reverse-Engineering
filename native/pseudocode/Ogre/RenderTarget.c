// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderTarget

//======================================================================
// Ogre::RenderTarget::getRTTI(void)const
// address: 0x00188890   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::RenderTarget::getRTTI(Ogre::RenderTarget *this)
{
  return &Ogre::RenderTarget::m_RTTI;
}


//======================================================================
// Ogre::RenderTarget::~RenderTarget()
// address: 0x0018889C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12RenderTargetD1Ev'
void __fastcall Ogre::RenderTarget::~RenderTarget(Ogre::RenderTarget *this)
{
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::RenderTarget::setStretchRect(int,int,int,int,int,int,int,int)
// address: 0x001888AC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::RenderTarget::setStretchRect(
        Ogre::RenderTarget *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  ;
}


//======================================================================
// Ogre::RenderTarget::isSuccessCreateRenderTarget(void)
// address: 0x001888AE   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::RenderTarget::isSuccessCreateRenderTarget(Ogre::RenderTarget *this)
{
  return 1;
}


//======================================================================
// Ogre::RenderTarget::isSuccessCreateDSBuffer(void)
// address: 0x001888B2   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::RenderTarget::isSuccessCreateDSBuffer(Ogre::RenderTarget *this)
{
  return 1;
}


//======================================================================
// Ogre::RenderTarget::~RenderTarget()
// address: 0x001888B8   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::RenderTarget::~RenderTarget(Ogre::RenderTarget *this)
{
  *(_DWORD *)this = &off_4559C0;
  operator delete(this);
}

