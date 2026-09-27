// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LightingThread

//======================================================================
// LightingThread::~LightingThread()
// address: 0x002E3B04   size: 0x2E (46 bytes)
//======================================================================
// Alternative name is '_ZN14LightingThreadD1Ev'
void __fastcall LightingThread::~LightingThread(LightingThread *this)
{
  *(_DWORD *)this = &off_461698;
  Ogre::LockSection::~LockSection((pthread_mutex_t *)((char *)this + 108));
  std::deque<LightingArea *>::~deque((int)this + 68);
  std::deque<LightingArea *>::~deque((int)this + 28);
  Ogre::OSThread::~OSThread(this);
}


//======================================================================
// LightingThread::~LightingThread()
// address: 0x002E3B38   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LightingThread::~LightingThread(LightingThread *this)
{
  LightingThread::~LightingThread(this);
  operator delete(this);
}


//======================================================================
// LightingThread::popResult(void)
// address: 0x002E3B78   size: 0x32 (50 bytes)
//======================================================================
int __fastcall LightingThread::popResult(LightingThread *this, Ogre::LockSection *a2)
{
  int *v3; // r3
  int v4; // r6
  int v5; // r4
  Ogre::LockSection *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v7, (LightingThread *)((char *)this + 108));
  v3 = *((int **)this + 19);
  if ( *((int **)this + 23) == v3 )
  {
    v5 = 0;
  }
  else
  {
    v4 = *v3;
    std::deque<LightingArea *>::pop_front((int)this + 68);
    v5 = v4;
  }
  Ogre::LockFunctor::~LockFunctor(&v7);
  return v5;
}


//======================================================================
// LightingThread::popCmd(void)
// address: 0x002E3BAA   size: 0x32 (50 bytes)
//======================================================================
int __fastcall LightingThread::popCmd(LightingThread *this, Ogre::LockSection *a2)
{
  int *v3; // r3
  int v4; // r6
  int v5; // r4
  Ogre::LockSection *v7; // [sp+4h] [bp-4h] BYREF

  v7 = a2;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)&v7, (LightingThread *)((char *)this + 108));
  v3 = *((int **)this + 9);
  if ( *((int **)this + 13) == v3 )
  {
    v5 = 0;
  }
  else
  {
    v4 = *v3;
    std::deque<LightingArea *>::pop_front((int)this + 28);
    v5 = v4;
  }
  Ogre::LockFunctor::~LockFunctor(&v7);
  return v5;
}


//======================================================================
// LightingThread::LightingThread(void)
// address: 0x002E3C80   size: 0x60 (96 bytes)
//======================================================================
// Alternative name is '_ZN14LightingThreadC1Ev'
void __fastcall LightingThread::LightingThread(LightingThread *this)
{
  Ogre::OSThread::OSThread(this);
  *((_DWORD *)this + 7) = 0;
  *(_DWORD *)this = &off_461698;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  std::_Deque_base<LightingArea *>::_M_initialize_map((_DWORD *)this + 7, 0);
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_DWORD *)this + 23) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  std::_Deque_base<LightingArea *>::_M_initialize_map((_DWORD *)this + 17, 0);
  Ogre::LockSection::LockSection((pthread_mutex_t *)((char *)this + 108));
}


//======================================================================
// LightingThread::addCmd(LightingArea *)
// address: 0x002E3E24   size: 0x30 (48 bytes)
//======================================================================
int __fastcall LightingThread::addCmd(LightingThread *this, LightingArea *a2)
{
  __int64 v3; // r0
  LightingArea *v5; // [sp+4h] [bp-10h] BYREF
  Ogre::LockSection *v6[2]; // [sp+Ch] [bp-8h] BYREF

  v5 = a2;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v6, (LightingThread *)((char *)this + 108));
  LODWORD(v3) = (char *)this + 28;
  HIDWORD(v3) = &v5;
  std::deque<LightingArea *>::push_back(v3);
  Ogre::LockFunctor::~LockFunctor(v6);
  return Ogre::OSEvent::trigger((LightingThread *)((char *)this + 8));
}


//======================================================================
// LightingThread::addResult(LightingArea *)
// address: 0x002E3E5E   size: 0x28 (40 bytes)
//======================================================================
void __fastcall LightingThread::addResult(LightingThread *this, LightingArea *a2)
{
  __int64 v3; // r0
  LightingArea *v4; // [sp+4h] [bp-10h] BYREF
  Ogre::LockSection *v5[2]; // [sp+Ch] [bp-8h] BYREF

  v4 = a2;
  Ogre::LockFunctor::LockFunctor((Ogre::LockFunctor *)v5, (LightingThread *)((char *)this + 108));
  LODWORD(v3) = (char *)this + 68;
  HIDWORD(v3) = &v4;
  std::deque<LightingArea *>::push_back(v3);
  Ogre::LockFunctor::~LockFunctor(v5);
}


//======================================================================
// LightingThread::_run(void)
// address: 0x002E3E90   size: 0x28 (40 bytes)
//======================================================================
int __fastcall LightingThread::_run(LightingThread *this, Ogre::LockSection *a2)
{
  LightingArea *v3; // r0
  LightingArea *v4; // r4
  unsigned int v5; // r1
  int v6; // r2

  while ( 1 )
  {
    v3 = (LightingArea *)LightingThread::popCmd(this, a2);
    v4 = v3;
    if ( v3 == nullptr )
      break;
    LightingArea::calLighting(v3);
    Ogre::ThreadSleep(0, v5, v6);
    LightingThread::addResult(this, v4);
  }
  return 1;
}

