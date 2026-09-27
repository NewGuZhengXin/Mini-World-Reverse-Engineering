// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FMOD::System

//======================================================================
// FMOD::System::set3DListenerAttributes(int,FMOD_VECTOR const*,FMOD_VECTOR const*,FMOD_VECTOR const*,FMOD_VECTOR const*)
// address: 0x00137B38   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::set3DListenerAttributes()
{
  return __imp__ZN4FMOD6System23set3DListenerAttributesEiPK11FMOD_VECTORS3_S3_S3_();
}


//======================================================================
// FMOD::System::update(void)
// address: 0x00137B50   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::update(FMOD::System *this)
{
  return __imp__ZN4FMOD6System6updateEv(this);
}


//======================================================================
// FMOD::System::createSound(char const*,unsigned int,FMOD_CREATESOUNDEXINFO *,FMOD::Sound **)
// address: 0x00137B5C   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::createSound()
{
  return __imp__ZN4FMOD6System11createSoundEPKcjP22FMOD_CREATESOUNDEXINFOPPNS_5SoundE();
}


//======================================================================
// FMOD::System::getVersion(unsigned int *)
// address: 0x00137B8C   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::getVersion(FMOD::System *this, unsigned int *a2)
{
  return __imp__ZN4FMOD6System10getVersionEPj(this, a2);
}


//======================================================================
// FMOD::System::getDriverCaps(int,unsigned int *,int *,FMOD_SPEAKERMODE *)
// address: 0x00137B98   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::getDriverCaps()
{
  return __imp__ZN4FMOD6System13getDriverCapsEiPjPiP16FMOD_SPEAKERMODE();
}


//======================================================================
// FMOD::System::setSpeakerMode(FMOD_SPEAKERMODE)
// address: 0x00137BA4   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::setSpeakerMode()
{
  return __imp__ZN4FMOD6System14setSpeakerModeE16FMOD_SPEAKERMODE();
}


//======================================================================
// FMOD::System::setDSPBufferSize(unsigned int,int)
// address: 0x00137BB0   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::setDSPBufferSize(FMOD::System *this, unsigned int a2, int a3)
{
  return __imp__ZN4FMOD6System16setDSPBufferSizeEji(this, a2, a3);
}


//======================================================================
// FMOD::System::init(int,unsigned int,void *)
// address: 0x00137BBC   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::init(FMOD::System *this, int a2, unsigned int a3, void *a4)
{
  return __imp__ZN4FMOD6System4initEijPv(this, a2, a3, a4);
}


//======================================================================
// FMOD::System::set3DSettings(float,float,float)
// address: 0x00137BC8   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::set3DSettings(FMOD::System *this, float a2, float a3, float a4)
{
  return __imp__ZN4FMOD6System13set3DSettingsEfff(this, a2, a3, a4);
}


//======================================================================
// FMOD::System::createChannelGroup(char const*,FMOD::ChannelGroup **)
// address: 0x00137BD4   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::createChannelGroup(FMOD::System *this, const char *a2, FMOD::ChannelGroup **a3)
{
  return __imp__ZN4FMOD6System18createChannelGroupEPKcPPNS_12ChannelGroupE(this, a2, a3);
}


//======================================================================
// FMOD::System::release(void)
// address: 0x00137BE0   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::release(FMOD::System *this)
{
  return __imp__ZN4FMOD6System7releaseEv(this);
}


//======================================================================
// FMOD::System::playSound(FMOD_CHANNELINDEX,FMOD::Sound *,bool,FMOD::Channel **)
// address: 0x00137BEC   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::playSound()
{
  return __imp__ZN4FMOD6System9playSoundE17FMOD_CHANNELINDEXPNS_5SoundEbPPNS_7ChannelE();
}


//======================================================================
// FMOD::System::set3DListenerAttributes(int,FMOD_VECTOR const*,FMOD_VECTOR const*,FMOD_VECTOR const*,FMOD_VECTOR const*)
// address: 0x003CA7A0   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::set3DListenerAttributes()
{
  return _ZN4FMOD6System23set3DListenerAttributesEiPK11FMOD_VECTORS3_S3_S3_();
}


//======================================================================
// FMOD::System::update(void)
// address: 0x003CA7C0   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::update(FMOD::System *this)
{
  return _ZN4FMOD6System6updateEv(this);
}


//======================================================================
// FMOD::System::createSound(char const*,unsigned int,FMOD_CREATESOUNDEXINFO *,FMOD::Sound **)
// address: 0x003CA7D0   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::createSound()
{
  return _ZN4FMOD6System11createSoundEPKcjP22FMOD_CREATESOUNDEXINFOPPNS_5SoundE();
}


//======================================================================
// FMOD::System::getVersion(unsigned int *)
// address: 0x003CA810   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::getVersion(FMOD::System *this, unsigned int *a2)
{
  return _ZN4FMOD6System10getVersionEPj(this, a2);
}


//======================================================================
// FMOD::System::getDriverCaps(int,unsigned int *,int *,FMOD_SPEAKERMODE *)
// address: 0x003CA820   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::getDriverCaps()
{
  return _ZN4FMOD6System13getDriverCapsEiPjPiP16FMOD_SPEAKERMODE();
}


//======================================================================
// FMOD::System::setSpeakerMode(FMOD_SPEAKERMODE)
// address: 0x003CA830   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::setSpeakerMode()
{
  return _ZN4FMOD6System14setSpeakerModeE16FMOD_SPEAKERMODE();
}


//======================================================================
// FMOD::System::setDSPBufferSize(unsigned int,int)
// address: 0x003CA840   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::setDSPBufferSize(FMOD::System *this, unsigned int a2, int a3)
{
  return _ZN4FMOD6System16setDSPBufferSizeEji(this, a2, a3);
}


//======================================================================
// FMOD::System::init(int,unsigned int,void *)
// address: 0x003CA850   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::init(FMOD::System *this, int a2, unsigned int a3, void *a4)
{
  return _ZN4FMOD6System4initEijPv(this, a2, a3, a4);
}


//======================================================================
// FMOD::System::set3DSettings(float,float,float)
// address: 0x003CA860   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::set3DSettings(FMOD::System *this, float a2, float a3, float a4)
{
  return _ZN4FMOD6System13set3DSettingsEfff(this, a2, a3, a4);
}


//======================================================================
// FMOD::System::createChannelGroup(char const*,FMOD::ChannelGroup **)
// address: 0x003CA870   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::createChannelGroup(FMOD::System *this, const char *a2, FMOD::ChannelGroup **a3)
{
  return _ZN4FMOD6System18createChannelGroupEPKcPPNS_12ChannelGroupE(this, a2, a3);
}


//======================================================================
// FMOD::System::release(void)
// address: 0x003CA880   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::System::release(FMOD::System *this)
{
  return _ZN4FMOD6System7releaseEv(this);
}


//======================================================================
// FMOD::System::playSound(FMOD_CHANNELINDEX,FMOD::Sound *,bool,FMOD::Channel **)
// address: 0x003CA890   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int FMOD::System::playSound()
{
  return _ZN4FMOD6System9playSoundE17FMOD_CHANNELINDEXPNS_5SoundEbPPNS_7ChannelE();
}

