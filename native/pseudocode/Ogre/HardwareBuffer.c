// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::HardwareBuffer

//======================================================================
// Ogre::HardwareBuffer::unlock(void)
// address: 0x001842CC   size: 0x26 (38 bytes)
//======================================================================
int __fastcall Ogre::HardwareBuffer::unlock(Ogre::HardwareBuffer *this)
{
  int TmpBuffer; // r0
  int result; // r0

  TmpBuffer = Ogre::HardwareBufferManager::getTmpBuffer(
                (Ogre::HardwareBufferManager *)Ogre::Singleton<Ogre::HardwareBufferManager>::ms_Singleton,
                0);
  result = (*(int (__fastcall **)(Ogre::HardwareBuffer *, int, _DWORD, _DWORD))(*(_DWORD *)this + 4))(
             this,
             TmpBuffer,
             *((_DWORD *)this + 4),
             0);
  *((_BYTE *)this + 12) = 0;
  return result;
}


//======================================================================
// Ogre::HardwareBuffer::~HardwareBuffer()
// address: 0x00260164   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre14HardwareBufferD1Ev'
void __fastcall Ogre::HardwareBuffer::~HardwareBuffer(Ogre::HardwareBuffer *this)
{
  *(_DWORD *)this = &off_45A308;
}


//======================================================================
// Ogre::HardwareBuffer::~HardwareBuffer()
// address: 0x002601B8   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::HardwareBuffer::~HardwareBuffer(Ogre::HardwareBuffer *this)
{
  *(_DWORD *)this = &off_45A308;
  operator delete(this);
}

