// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ParticleTemplate

//======================================================================
// ParticleTemplate::ParticleTemplate(void)
// address: 0x002E92CC   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN16ParticleTemplateC1Ev'
void __fastcall ParticleTemplate::ParticleTemplate(ParticleTemplate *this)
{
  ParticleDesc::ParticleDesc(this);
  *((_DWORD *)this + 46) = 0;
  j_memset(this, 0, 0xB8u);
}


//======================================================================
// ParticleTemplate::~ParticleTemplate()
// address: 0x002E92E8   size: 0x1A (26 bytes)
//======================================================================
// Alternative name is '_ZN16ParticleTemplateD1Ev'
void __fastcall ParticleTemplate::~ParticleTemplate(ParticleTemplate *this)
{
  _DWORD *v1; // r5
  _DWORD *v2; // r0

  v1 = (_DWORD *)((char *)this + 184);
  v2 = *((_DWORD **)this + 46);
  if ( v2 != nullptr )
  {
    Ogre::BaseObject::release(v2);
    *v1 = 0;
  }
}

