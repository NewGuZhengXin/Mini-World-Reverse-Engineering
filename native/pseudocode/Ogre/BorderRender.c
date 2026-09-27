// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::BorderRender

//======================================================================
// Ogre::BorderRender::doRender(void)
// address: 0x00198764   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::BorderRender::doRender(Ogre::BorderRender *this)
{
  ;
}


//======================================================================
// Ogre::BorderRender::~BorderRender()
// address: 0x00198768   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12BorderRenderD1Ev'
void __fastcall Ogre::BorderRender::~BorderRender(Ogre::BorderRender *this)
{
  void *v2; // r0

  *(_DWORD *)this = &off_4587A8;
  v2 = *((void **)this + 160);
  if ( v2 != nullptr )
    operator delete(v2);
  Ogre::SceneRenderer::~SceneRenderer(this);
  Ogre::Singleton<Ogre::BorderRender>::ms_Singleton = 0;
}


//======================================================================
// Ogre::BorderRender::~BorderRender()
// address: 0x001987A0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::BorderRender::~BorderRender(Ogre::BorderRender *this)
{
  Ogre::BorderRender::~BorderRender(this);
  operator delete(this);
}


//======================================================================
// Ogre::BorderRender::BorderRender(void)
// address: 0x001987B4   size: 0x30 (48 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12BorderRenderC1Ev'
Ogre::BorderRender *__fastcall Ogre::BorderRender::BorderRender(Ogre::BorderRender *this)
{
  Ogre::Singleton<Ogre::BorderRender>::ms_Singleton = (int)this;
  Ogre::SceneRenderer::SceneRenderer(this);
  *(_DWORD *)this = &off_4587A8;
  *((_DWORD *)this + 160) = 0;
  *((_DWORD *)this + 161) = 0;
  *((_DWORD *)this + 162) = 0;
  return this;
}


//======================================================================
// Ogre::BorderRender::AddEntity(Ogre::Entity *)
// address: 0x001987EC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::BorderRender::AddEntity(Ogre::BorderRender *this, Ogre::Entity *a2)
{
  ;
}


//======================================================================
// Ogre::BorderRender::RemoveEntity(Ogre::Entity *)
// address: 0x001987EE   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::BorderRender::RemoveEntity(Ogre::BorderRender *this, Ogre::Entity *a2)
{
  ;
}


//======================================================================
// Ogre::BorderRender::Clear(void)
// address: 0x001987F0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::BorderRender::Clear(Ogre::BorderRender *this)
{
  ;
}

