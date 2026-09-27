// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ModelMotion::Player

//======================================================================
// Ogre::ModelMotion::Player::~Player()
// address: 0x0017D23C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11ModelMotion6PlayerD1Ev'
void __fastcall Ogre::ModelMotion::Player::~Player(Ogre::ModelMotion::Player *this)
{
  *(_DWORD *)this = &off_4578D0;
}


//======================================================================
// Ogre::ModelMotion::Player::~Player()
// address: 0x0017D27C   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::ModelMotion::Player::~Player(Ogre::ModelMotion::Player *this)
{
  *(_DWORD *)this = &off_4578D0;
  operator delete(this);
}


//======================================================================
// Ogre::ModelMotion::Player::setModel(Ogre::Entity *)
// address: 0x0017D6F8   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::Player::setModel(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  return result;
}


//======================================================================
// Ogre::ModelMotion::Player::play(Ogre::ModelMotion*)
// address: 0x0017D7A0   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::Player::play(_DWORD *a1, int a2)
{
  return (*(int (__fastcall **)(_DWORD *, int, _DWORD))(*a1 + 8))(a1, a2, a1[1]);
}

