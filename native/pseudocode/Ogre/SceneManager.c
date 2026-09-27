// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::SceneManager

//======================================================================
// Ogre::SceneManager::SceneManager(void)
// address: 0x0014BE80   size: 0x8C (140 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12SceneManagerC1Ev'
Ogre::SceneManager *__fastcall Ogre::SceneManager::SceneManager(Ogre::SceneManager *this)
{
  int v1; // r3
  _DWORD *v3; // r2
  Ogre::RenderPool *v4; // r6
  Ogre::RenderPool *v5; // r6
  int v6; // r3

  Ogre::Singleton<Ogre::SceneManager>::ms_Singleton = (int)this;
  v1 = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 33) = 0;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_BYTE *)this + 148) = 0;
  *((_BYTE *)this + 228) = 0;
  *((_BYTE *)this + 229) = 0;
  do
  {
    v3 = (_DWORD *)((char *)this + v1 + 164);
    v1 += 4;
    *v3 = 0;
  }
  while ( v1 != 64 );
  v4 = (Ogre::RenderPool *)operator new(0x10u);
  Ogre::RenderPool::RenderPool(v4, 0x1000u, 0x100000u);
  *(_DWORD *)this = v4;
  v5 = (Ogre::RenderPool *)operator new(0x10u);
  Ogre::RenderPool::RenderPool(v5, 0x1000u, 0x100000u);
  *((_DWORD *)this + 7) = -1082130432;
  *((_DWORD *)this + 23) = -1082130432;
  v6 = *((_DWORD *)this + 29);
  *((_DWORD *)this + 1) = v5;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 30) = v6;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_BYTE *)this + 128) = 1;
  *((_BYTE *)this + 240) = 1;
  return this;
}


//======================================================================
// Ogre::SceneManager::~SceneManager()
// address: 0x0014BF14   size: 0xA6 (166 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12SceneManagerD1Ev'
void __fastcall Ogre::SceneManager::~SceneManager(Ogre::SceneManager *this)
{
  void *v2; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  void *v6; // r5
  void *v7; // r5
  void *v8; // r5
  void *v9; // r0

  if ( *((_BYTE *)this + 128) != 0 )
  {
    v2 = *((void **)this + 2);
    if ( v2 != nullptr )
    {
      Ogre::Shadowmap::~Shadowmap(*((Ogre::Shadowmap **)this + 2));
      operator delete(v2);
      *((_DWORD *)this + 2) = 0;
    }
    v3 = *((_DWORD *)this + 3);
    if ( v3 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
      *((_DWORD *)this + 3) = 0;
    }
    v4 = *((_DWORD *)this + 4);
    if ( v4 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
      *((_DWORD *)this + 4) = 0;
    }
    v5 = *((_DWORD *)this + 5);
    if ( v5 != 0 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
      *((_DWORD *)this + 5) = 0;
    }
    v6 = *((void **)this + 6);
    if ( v6 != nullptr )
    {
      Ogre::Shadowcubemap::~Shadowcubemap(*((Ogre::Shadowcubemap **)this + 6));
      operator delete(v6);
      *((_DWORD *)this + 6) = 0;
    }
  }
  v7 = *(void **)this;
  if ( *(_DWORD *)this != 0 )
  {
    Ogre::RenderPool::~RenderPool(*(Ogre::RenderPool **)this);
    operator delete(v7);
  }
  v8 = *((void **)this + 1);
  if ( v8 != nullptr )
  {
    Ogre::RenderPool::~RenderPool(*((Ogre::RenderPool **)this + 1));
    operator delete(v8);
  }
  v9 = *((void **)this + 29);
  if ( v9 != nullptr )
    operator delete(v9);
  Ogre::Singleton<Ogre::SceneManager>::ms_Singleton = 0;
}


//======================================================================
// Ogre::SceneManager::addSceneRenderer(int,Ogre::SceneRenderer *)
// address: 0x0014BFC0   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::addSceneRenderer(int a1, int a2, int a3)
{
  int result; // r0

  result = a1 + 4 * (a2 + 40);
  *(_DWORD *)(result + 4) = a3;
  return result;
}


//======================================================================
// Ogre::SceneManager::removeSceneRenderer(Ogre::SceneRenderer *)
// address: 0x0014BFCA   size: 0x1A (26 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::removeSceneRenderer(int result, int a2)
{
  int i; // r3
  _DWORD *v3; // r2

  for ( i = 0; i != 64; i += 4 )
  {
    v3 = (_DWORD *)(result + i + 164);
    if ( *v3 == a2 )
      *v3 = 0;
  }
  return result;
}


//======================================================================
// Ogre::SceneManager::getSceneRenderer(int)
// address: 0x0014BFE4   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::getSceneRenderer(Ogre::SceneManager *this, int a2)
{
  return *((_DWORD *)this + a2 + 41);
}


//======================================================================
// Ogre::SceneManager::onLostEffect(void)
// address: 0x0014BFEE   size: 0x68 (104 bytes)
//======================================================================
void __fastcall Ogre::SceneManager::onLostEffect(Ogre::SceneManager *this)
{
  void *v1; // r5
  int v3; // r0
  int v4; // r0
  int v5; // r0
  void *v6; // r5

  *((_BYTE *)this + 128) = 0;
  v1 = *((void **)this + 2);
  if ( v1 != nullptr )
  {
    Ogre::Shadowmap::~Shadowmap(*((Ogre::Shadowmap **)this + 2));
    operator delete(v1);
    *((_DWORD *)this + 2) = 0;
  }
  v3 = *((_DWORD *)this + 3);
  if ( v3 != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 4))(v3);
    *((_DWORD *)this + 3) = 0;
  }
  v4 = *((_DWORD *)this + 4);
  if ( v4 != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 4))(v4);
    *((_DWORD *)this + 4) = 0;
  }
  v5 = *((_DWORD *)this + 5);
  if ( v5 != 0 )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 4))(v5);
    *((_DWORD *)this + 5) = 0;
  }
  v6 = *((void **)this + 6);
  if ( v6 != nullptr )
  {
    Ogre::Shadowcubemap::~Shadowcubemap(*((Ogre::Shadowcubemap **)this + 6));
    operator delete(v6);
    *((_DWORD *)this + 6) = 0;
  }
}


//======================================================================
// Ogre::SceneManager::onLostDevice(void)
// address: 0x0014C056   size: 0x56 (86 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::onLostDevice(Ogre::SceneManager *this)
{
  Ogre::Shadowmap *v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int i; // r5
  int result; // r0

  if ( *((_BYTE *)this + 128) != 0 )
  {
    v2 = *((Ogre::Shadowmap **)this + 2);
    if ( v2 != nullptr )
      Ogre::Shadowmap::onLostDevice(v2);
    v3 = *((_DWORD *)this + 3);
    if ( v3 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v3);
    v4 = *((_DWORD *)this + 4);
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 8))(v4);
    v5 = *((_DWORD *)this + 5);
    if ( v5 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 8))(v5);
  }
  for ( i = 0; i != 64; i += 4 )
  {
    result = *(_DWORD *)((char *)this + i + 164);
    if ( result != 0 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 8))(result);
  }
  return result;
}


//======================================================================
// Ogre::SceneManager::onRestoreDevice(void)
// address: 0x0014C0AC   size: 0x56 (86 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::onRestoreDevice(Ogre::SceneManager *this)
{
  Ogre::Shadowmap *v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0
  int i; // r5
  int result; // r0

  if ( *((_BYTE *)this + 128) != 0 )
  {
    v2 = *((Ogre::Shadowmap **)this + 2);
    if ( v2 != nullptr )
      Ogre::Shadowmap::onRestoreDevice(v2);
    v3 = *((_DWORD *)this + 3);
    if ( v3 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
    v4 = *((_DWORD *)this + 4);
    if ( v4 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 12))(v4);
    v5 = *((_DWORD *)this + 5);
    if ( v5 != 0 )
      (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 12))(v5);
  }
  for ( i = 0; i != 64; i += 4 )
  {
    result = *(_DWORD *)((char *)this + i + 164);
    if ( result != 0 )
      result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
  }
  return result;
}


//======================================================================
// Ogre::SceneManager::doRender(void)
// address: 0x0014C102   size: 0x46 (70 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::doRender(int this)
{
  int v1; // r4
  _DWORD *v2; // r5
  int v3; // r6
  int *v4; // r3
  int v5; // r2

  v1 = this;
  if ( *(_BYTE *)(this + 240) != 0 )
  {
    v2 = (_DWORD *)(this + 140);
    v3 = this + 64;
    ++*(_DWORD *)(this + 140);
    this = Ogre::RenderPool::reset(*(Ogre::ShaderContextPool ***)this);
    do
    {
      v4 = (int *)(v1 + 164);
      v5 = *(_DWORD *)(v1 + 164);
      if ( v5 != 0 )
      {
        *(_DWORD *)(v5 + 8) = *v2;
        this = *v4;
        if ( *(_BYTE *)(*v4 + 16) != 0 )
          this = (*(int (__fastcall **)(int))(*(_DWORD *)this + 16))(this);
      }
      v1 += 4;
    }
    while ( v1 != v3 );
  }
  return this;
}


//======================================================================
// Ogre::SceneManager::doDraw(void)
// address: 0x0014C148   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::doDraw(int this)
{
  int v1; // r4
  _DWORD *v2; // r3
  int v3; // r2
  unsigned int v4; // r6
  int v5; // r0
  int v6; // r3
  _DWORD *v7; // r3
  unsigned int v8; // r3
  const char *v9; // r1

  v1 = this;
  if ( *(_BYTE *)(this + 240) != 0 )
  {
    v2 = (_DWORD *)(this + 144);
    v3 = *(_DWORD *)(this + 144);
    v4 = 0;
    v5 = Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
    *v2 = v3 + 1;
    if ( (*(int (__fastcall **)(int))(*(_DWORD *)v5 + 20))(v5) != 0 )
    {
      Ogre::ShaderContextPool::draw(*(Ogre::ShaderContextPool **)(*(_DWORD *)(v1 + 4) + 8));
      while ( 1 )
      {
        v6 = *(_DWORD *)(v1 + 116);
        if ( v4 >= (*(_DWORD *)(v1 + 120) - v6) >> 3 )
          break;
        v7 = (_DWORD *)(v6 + 8 * v4++);
        (**(void (__fastcall ***)(_DWORD, _DWORD))*v7)(*v7, v7[1]);
      }
      Ogre::HardwarePixelBufferManager::garbageCollect((Ogre::HardwarePixelBufferManager *)Ogre::Singleton<Ogre::HardwarePixelBufferManager>::ms_Singleton);
      (*(void (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 24))(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton);
      v4 = (*(int (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 28))(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton);
    }
    this = (*(int (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 84))(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton);
    if ( v4 == 3 )
    {
      Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSceneManager.cpp", "r", 8, v8);
      this = Ogre::LogMessage((Ogre *)"present error", v9);
      *(_BYTE *)(v1 + 148) = 1;
    }
    else if ( v4 == 1 )
    {
      *(_BYTE *)(v1 + 228) = 1;
    }
  }
  return this;
}


//======================================================================
// Ogre::SceneManager::doFrame(void)
// address: 0x0014C1FC   size: 0xDE (222 bytes)
//======================================================================
__int64 __fastcall Ogre::SceneManager::doFrame(__int64 this)
{
  int v1; // r4
  float v2; // r0
  int v3; // r7
  const char *v4; // r1
  int v5; // r0
  const char *v6; // r1
  Ogre::ShaderContextPool **v7; // r2
  __int64 v9; // [sp+0h] [bp-Ch]

  v9 = this;
  v1 = this;
  ++dword_47262C;
  v2 = COERCE_FLOAT(Ogre::Timer::getSystemTick((Ogre::Timer *)this));
  v3 = LODWORD(v2);
  if ( (unsigned int)(LODWORD(v2) - dword_472630) > 0x3E7 )
  {
    LODWORD(v9) = v1 + 8;
    *((float *)&v9 + 1) = (float)(unsigned int)dword_47262C;
    v2 = (float)(unsigned int)dword_47262C / (float)((float)(unsigned int)(LODWORD(v2) - dword_472630) / 1000.0);
    dword_472630 = v3;
    *(float *)(v1 + 132) = v2;
    dword_47262C = 0;
  }
  Ogre::MovableObject::prepareFrame((Ogre::MovableObject *)LODWORD(v2));
  if ( *(_BYTE *)(v1 + 228) == 0 )
    goto LABEL_10;
  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSceneManager.cpp",
    (const char *)&dword_E4,
    2,
    *(unsigned __int8 *)(v1 + 228));
  Ogre::LogMessage((Ogre *)"DeviceLost", v4);
  v5 = (*(int (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 44))(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton);
  if ( v5 != 3 )
  {
    if ( v5 == 1 )
      return v9;
    if ( v5 == 2 )
    {
      Ogre::RenderPool::reset(*(Ogre::ShaderContextPool ***)v1);
      Ogre::RenderPool::reset(*(Ogre::ShaderContextPool ***)(v1 + 4));
      Ogre::SceneManager::onLostDevice((Ogre::SceneManager *)v1);
      (*(void (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 48))(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton);
      Ogre::SceneManager::onRestoreDevice((Ogre::SceneManager *)v1);
    }
    *(_BYTE *)(v1 + 228) = 0;
    Ogre::LogSetCurParam(
      (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSceneManager.cpp",
      (_BYTE *)&dword_100 + 1,
      2,
      0);
    Ogre::LogMessage((Ogre *)"End DeviceLost", v6);
LABEL_10:
    Ogre::SceneManager::doRender(v1);
    v7 = *(Ogre::ShaderContextPool ***)v1;
    *(_DWORD *)v1 = *(_DWORD *)(v1 + 4);
    *(_DWORD *)(v1 + 4) = v7;
    Ogre::SceneManager::doDraw(v1);
    return v9;
  }
  *(_BYTE *)(v1 + 148) = 1;
  return v9;
}


//======================================================================
// Ogre::SceneManager::drawDirect(void)
// address: 0x0014C2FC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::drawDirect(Ogre::SceneManager *this, int a2, int a3, unsigned int a4)
{
  const char *v5; // r1
  int v6; // r2
  int v7; // r0
  unsigned int v8; // r3
  const char *v9; // r1

  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSceneManager.cpp",
    (const char *)&stru_148.st_size,
    2,
    a4);
  Ogre::LogMessage((Ogre *)"doDraw Direct", v5);
  v6 = *(_DWORD *)this;
  *(_DWORD *)this = *((_DWORD *)this + 1);
  v7 = Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton;
  *((_DWORD *)this + 1) = v6;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v7 + 20))(v7) != 0 )
  {
    Ogre::ShaderContextPool::draw(*(Ogre::ShaderContextPool **)(*((_DWORD *)this + 1) + 8));
    (*(void (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 24))(Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton);
  }
  Ogre::LogSetCurParam((Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSceneManager.cpp", (const char *)&stru_158, 2, v8);
  return Ogre::LogMessage((Ogre *)"doDraw Direct End", v9);
}


//======================================================================
// Ogre::SceneManager::_drawThreadFunc(void)
// address: 0x0014C36C   size: 0x1C (28 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::_drawThreadFunc(Ogre::SceneManager *this, int a2, int a3, unsigned int a4)
{
  const char *v4; // r1

  Ogre::LogSetCurParam(
    (Ogre *)"D:/work/oworldsrc/client/OgreMain/OgreSceneManager.cpp",
    (_BYTE *)&stru_168.st_size + 2,
    2,
    a4);
  Ogre::LogMessage((Ogre *)"draw thread quit", v4);
  return 0;
}


//======================================================================
// Ogre::SceneManager::setDisplayMode(int,int)
// address: 0x0014C390   size: 0x24 (36 bytes)
//======================================================================
_DWORD *__fastcall Ogre::SceneManager::setDisplayMode(Ogre::SceneManager *this, unsigned int a2, int a3)
{
  _BYTE *v3; // r4
  unsigned int *v4; // r3
  _DWORD *result; // r0

  v3 = (char *)this + 229;
  *((_BYTE *)this + 229) = 1;
  v4 = (unsigned int *)((char *)this + 232);
  result = (_DWORD *)((char *)this + 236);
  *v4 = a2;
  *result = a3;
  while ( *v3 != 0 )
    result = (_DWORD *)Ogre::ThreadSleep((Ogre *)&byte_9[1], a2);
  return result;
}


//======================================================================
// Ogre::SceneManager::clearToClientBit(void)
// address: 0x0014C3B4   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::SceneManager::clearToClientBit(int this)
{
  *(_DWORD *)(this + 120) = *(_DWORD *)(this + 116);
  return this;
}


//======================================================================
// Ogre::SceneManager::addToClientBit(Ogre::HardwarePixelBuffer *,unsigned long *)
// address: 0x0014C494   size: 0x2E (46 bytes)
//======================================================================
unsigned __int64 __fastcall Ogre::SceneManager::addToClientBit(
        Ogre::SceneManager *this,
        Ogre::HardwarePixelBuffer *a2,
        unsigned int *a3)
{
  _DWORD *v3; // r4
  _DWORD *v4; // r3
  __int64 v5; // r0
  unsigned __int64 v7; // [sp+0h] [bp-8h] BYREF

  v7 = __PAIR64__((unsigned int)a3, (unsigned int)this);
  v3 = *((_DWORD **)this + 31);
  v4 = *((_DWORD **)this + 30);
  LODWORD(v7) = a2;
  if ( v4 == v3 )
  {
    LODWORD(v5) = (char *)this + 116;
    HIDWORD(v5) = v4;
    std::vector<Ogre::ColorbitToClient>::_M_insert_aux(v5, &v7);
  }
  else
  {
    if ( v4 != nullptr )
    {
      *v4 = a2;
      v4[1] = HIDWORD(v7);
    }
    *((_DWORD *)this + 30) += 8;
  }
  return v7;
}

