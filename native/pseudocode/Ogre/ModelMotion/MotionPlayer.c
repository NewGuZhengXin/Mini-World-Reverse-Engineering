// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ModelMotion::MotionPlayer

//======================================================================
// Ogre::ModelMotion::MotionPlayer::~MotionPlayer()
// address: 0x0017D26C   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre11ModelMotion12MotionPlayerD1Ev'
void __fastcall Ogre::ModelMotion::MotionPlayer::~MotionPlayer(Ogre::ModelMotion::MotionPlayer *this)
{
  *(_DWORD *)this = &off_4578D0;
}


//======================================================================
// Ogre::ModelMotion::MotionPlayer::~MotionPlayer()
// address: 0x0017D2D0   size: 0x16 (22 bytes)
//======================================================================
void __fastcall Ogre::ModelMotion::MotionPlayer::~MotionPlayer(Ogre::ModelMotion::MotionPlayer *this)
{
  *(_DWORD *)this = &off_4578D0;
  operator delete(this);
}


//======================================================================
// Ogre::ModelMotion::MotionPlayer::onPlay(Ogre::ModelMotion*,Ogre::Entity *)
// address: 0x0017D794   size: 0xC (12 bytes)
//======================================================================
int __fastcall Ogre::ModelMotion::MotionPlayer::onPlay(
        Ogre::ModelMotion::MotionPlayer *this,
        Ogre::ModelMotion *a2,
        Ogre::Entity *a3)
{
  return Ogre::ModelMotion::PlayMotion((int)a2, a3);
}

