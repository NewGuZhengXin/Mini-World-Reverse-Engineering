// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ParticleEmitterFrameData

//======================================================================
// Ogre::ParticleEmitterFrameData::ParticleEmitterFrameData(void)
// address: 0x0017311C   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre24ParticleEmitterFrameDataC1Ev'
Ogre::ParticleEmitterFrameData *__fastcall Ogre::ParticleEmitterFrameData::ParticleEmitterFrameData(
        Ogre::ParticleEmitterFrameData *this)
{
  Ogre::Matrix4::Matrix4(this);
  Ogre::Matrix4::Matrix4((Ogre::ParticleEmitterFrameData *)((char *)this + 64));
  *((_DWORD *)this + 47) = 1065353216;
  *((_DWORD *)this + 48) = 1065353216;
  *((_DWORD *)this + 49) = 1065353216;
  *((_DWORD *)this + 50) = 1065353216;
  return this;
}

