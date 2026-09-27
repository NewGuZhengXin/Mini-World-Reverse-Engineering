// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::RenderWindow

//======================================================================
// Ogre::RenderWindow::getRTTI(void)const
// address: 0x0025F374   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::RenderWindow::getRTTI(Ogre::RenderWindow *this)
{
  return &Ogre::RenderWindow::m_RTTI;
}


//======================================================================
// Ogre::RenderWindow::~RenderWindow()
// address: 0x0025F380   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12RenderWindowD1Ev'
void __fastcall Ogre::RenderWindow::~RenderWindow(Ogre::RenderWindow *this)
{
  *(_DWORD *)this = &off_4559C0;
}


//======================================================================
// Ogre::RenderWindow::~RenderWindow()
// address: 0x0025F3C0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::RenderWindow::~RenderWindow(Ogre::RenderWindow *this)
{
  *(_DWORD *)this = &off_4559C0;
  operator delete(this);
}

