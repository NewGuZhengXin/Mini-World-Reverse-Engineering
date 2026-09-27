// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OGLRenderWindow

//======================================================================
// Ogre::OGLRenderWindow::getHWnd(void)
// address: 0x0025F390   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderWindow::getHWnd(Ogre::OGLRenderWindow *this)
{
  return *((_DWORD *)this + 5);
}


//======================================================================
// Ogre::OGLRenderWindow::getSize(unsigned int &,unsigned int &)
// address: 0x0025F394   size: 0xA (10 bytes)
//======================================================================
unsigned int __fastcall Ogre::OGLRenderWindow::getSize(Ogre::OGLRenderWindow *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int result; // r0

  *a2 = *((_DWORD *)this + 7);
  result = *((_DWORD *)this + 8);
  *a3 = result;
  return result;
}


//======================================================================
// Ogre::OGLRenderWindow::onSizeOrMove(void)
// address: 0x0025F39E   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderWindow::onSizeOrMove(Ogre::OGLRenderWindow *this)
{
  ;
}


//======================================================================
// Ogre::OGLRenderWindow::setSyncRefresh(bool)
// address: 0x0025F3A0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderWindow::setSyncRefresh(Ogre::OGLRenderWindow *this, bool a2)
{
  ;
}


//======================================================================
// Ogre::OGLRenderWindow::setMultiSampleLevel(int)
// address: 0x0025F3A2   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderWindow::setMultiSampleLevel(Ogre::OGLRenderWindow *this, int a2)
{
  ;
}


//======================================================================
// Ogre::OGLRenderWindow::forceReset(void)
// address: 0x0025F3A4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderWindow::forceReset(int this)
{
  *(_BYTE *)(this + 11) = 1;
  return this;
}


//======================================================================
// Ogre::OGLRenderWindow::beginScene(void)
// address: 0x0025F3AA   size: 0x10 (16 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderWindow::beginScene(Ogre::OGLRenderWindow *this)
{
  *(_DWORD *)(*((_DWORD *)this + 4) + 84) = *((_DWORD *)this + 7);
  *(_DWORD *)(*((_DWORD *)this + 4) + 88) = *((_DWORD *)this + 8);
  return 1;
}


//======================================================================
// Ogre::OGLRenderWindow::endScene(void)
// address: 0x0025F3BA   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderWindow::endScene(Ogre::OGLRenderWindow *this)
{
  ;
}


//======================================================================
// Ogre::OGLRenderWindow::present(void)
// address: 0x0025F3BC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderWindow::present(Ogre::OGLRenderWindow *this)
{
  return 0;
}


//======================================================================
// Ogre::OGLRenderWindow::deleteThis(void)
// address: 0x0025F3DC   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderWindow::deleteThis(Ogre::OGLRenderSystem **this)
{
  Ogre::OGLRenderSystem::removeOGLRenderWindow(*(this + 4), (Ogre::OGLRenderWindow *)this);
  return (*((int (__fastcall **)(Ogre::OGLRenderSystem **))*this + 5))(this);
}


//======================================================================
// Ogre::OGLRenderWindow::OGLRenderWindow(Ogre::OGLRenderSystem *,Ogre::RenderSystem::InitDesc const&,bool)
// address: 0x0025F3F4   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15OGLRenderWindowC1EPNS_15OGLRenderSystemERKNS_12RenderSystem8InitDescEb'
int __fastcall Ogre::OGLRenderWindow::OGLRenderWindow(int result, int a2, _DWORD *a3, char a4)
{
  *(_DWORD *)(result + 4) = 1;
  *(_BYTE *)(result + 10) = 1;
  *(_DWORD *)(result + 20) = 0;
  *(_BYTE *)(result + 8) = 0;
  *(_BYTE *)(result + 9) = 0;
  *(_DWORD *)result = &off_45A0C8;
  *(_BYTE *)(result + 11) = 0;
  *(_BYTE *)(result + 12) = a4;
  *(_DWORD *)(result + 16) = a2;
  *(_DWORD *)(result + 24) = 0;
  *(_DWORD *)(result + 20) = a3[10];
  *(_DWORD *)(result + 28) = a3[3];
  *(_DWORD *)(result + 32) = a3[4];
  return result;
}


//======================================================================
// Ogre::OGLRenderWindow::onInitialise(void)
// address: 0x0025F428   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderWindow::onInitialise(Ogre::OGLRenderWindow *this)
{
  return 1;
}


//======================================================================
// Ogre::OGLRenderWindow::onShutdown(void)
// address: 0x0025F42C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderWindow::onShutdown(Ogre::OGLRenderWindow *this)
{
  ;
}


//======================================================================
// Ogre::OGLRenderWindow::~OGLRenderWindow()
// address: 0x0025F430   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre15OGLRenderWindowD1Ev'
void __fastcall Ogre::OGLRenderWindow::~OGLRenderWindow(Ogre::OGLRenderWindow *this)
{
  *(_DWORD *)this = &off_45A0C8;
  Ogre::OGLRenderWindow::onShutdown(this);
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::OGLRenderWindow::~OGLRenderWindow()
// address: 0x0025F458   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderWindow::~OGLRenderWindow(Ogre::OGLRenderWindow *this)
{
  Ogre::OGLRenderWindow::~OGLRenderWindow(this);
  operator delete(this);
}


//======================================================================
// Ogre::OGLRenderWindow::createDeviceObj(void)
// address: 0x0025F46A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderWindow::createDeviceObj(Ogre::OGLRenderWindow *this)
{
  return 1;
}


//======================================================================
// Ogre::OGLRenderWindow::onResetDevice(int,int)
// address: 0x0025F46E   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::OGLRenderWindow::onResetDevice(Ogre::OGLRenderWindow *this, int a2, int a3)
{
  int v3; // r2

  *((_DWORD *)this + 8) = a3;
  v3 = *((_DWORD *)this + 4);
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = a2;
  *(_DWORD *)(v3 + 236) = 0;
  return Ogre::OGLRenderWindow::createDeviceObj(this);
}


//======================================================================
// Ogre::OGLRenderWindow::destroyDeviceObj(void)
// address: 0x0025F484   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderWindow::destroyDeviceObj(Ogre::OGLRenderWindow *this)
{
  ;
}


//======================================================================
// Ogre::OGLRenderWindow::onLostDevice(void)
// address: 0x0025F486   size: 0x8 (8 bytes)
//======================================================================
void __fastcall Ogre::OGLRenderWindow::onLostDevice(Ogre::OGLRenderWindow *this)
{
  Ogre::OGLRenderWindow::destroyDeviceObj(this);
}

