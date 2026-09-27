// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::OSThread

//======================================================================
// Ogre::OSThread::OSThread(void)
// address: 0x0018159C   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8OSThreadC1Ev'
Ogre::OSThread *__fastcall Ogre::OSThread::OSThread(Ogre::OSThread *this)
{
  *((_DWORD *)this + 1) = 0;
  *(_DWORD *)this = &off_457B68;
  Ogre::OSEvent::OSEvent((Ogre::OSThread *)((char *)this + 8), false, false);
  *((_DWORD *)this + 5) = 0;
  return this;
}


//======================================================================
// Ogre::OSThread::start(void)
// address: 0x001815C4   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::OSThread::start(Ogre::OSThread *this)
{
  _BYTE v3[28]; // [sp+0h] [bp-1Ch] BYREF

  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 2;
  j_pthread_attr_init((pthread_attr_t *)v3);
  return j_pthread_create((pthread_t *)this + 1, (const pthread_attr_t *)v3, (void *(*)(void *))sub_181564, this);
}


//======================================================================
// Ogre::OSThread::shutdown(void)
// address: 0x001815F0   size: 0x22 (34 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> Ogre::OSThread::shutdown(Ogre::OSThread *this)
{
  void *thread_return; // [sp+4h] [bp-4h] BYREF

  if ( *((_DWORD *)this + 1) != 0 )
  {
    *((_DWORD *)this + 5) = 1;
    Ogre::OSEvent::trigger((Ogre::OSThread *)((char *)this + 8));
    j_pthread_join(*((_DWORD *)this + 1), &thread_return);
    *((_DWORD *)this + 1) = 0;
  }
}


//======================================================================
// Ogre::OSThread::~OSThread()
// address: 0x00181614   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre8OSThreadD1Ev'
void __fastcall Ogre::OSThread::~OSThread(Ogre::OSThread *this)
{
  *(_DWORD *)this = &off_457B68;
  Ogre::OSThread::shutdown(this);
  Ogre::OSEvent::~OSEvent((Ogre::OSThread *)((char *)this + 8));
}


//======================================================================
// Ogre::OSThread::~OSThread()
// address: 0x00181638   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::OSThread::~OSThread(Ogre::OSThread *this)
{
  Ogre::OSThread::~OSThread(this);
  operator delete(this);
}

