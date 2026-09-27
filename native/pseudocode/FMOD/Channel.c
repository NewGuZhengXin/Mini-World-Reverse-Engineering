// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FMOD::Channel

//======================================================================
// FMOD::Channel::stop(void)
// address: 0x00137AF0   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::stop(FMOD::Channel *this)
{
  return __imp__ZN4FMOD7Channel4stopEv(this);
}


//======================================================================
// FMOD::Channel::isPlaying(bool *)
// address: 0x00137AFC   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::isPlaying(FMOD::Channel *this, bool *a2)
{
  return __imp__ZN4FMOD7Channel9isPlayingEPb(this, a2);
}


//======================================================================
// FMOD::Channel::setVolume(float)
// address: 0x00137B08   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setVolume(FMOD::Channel *this, float a2)
{
  return __imp__ZN4FMOD7Channel9setVolumeEf(this, a2);
}


//======================================================================
// FMOD::Channel::setPaused(bool)
// address: 0x00137B14   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setPaused(FMOD::Channel *this, bool a2)
{
  return __imp__ZN4FMOD7Channel9setPausedEb(this, a2);
}


//======================================================================
// FMOD::Channel::set3DAttributes(FMOD_VECTOR const*,FMOD_VECTOR const*)
// address: 0x00137B20   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int FMOD::Channel::set3DAttributes()
{
  return __imp__ZN4FMOD7Channel15set3DAttributesEPK11FMOD_VECTORS3_();
}


//======================================================================
// FMOD::Channel::set3DMinMaxDistance(float,float)
// address: 0x00137B2C   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::set3DMinMaxDistance(FMOD::Channel *this, float a2, float a3)
{
  return __imp__ZN4FMOD7Channel19set3DMinMaxDistanceEff(this, a2, a3);
}


//======================================================================
// FMOD::Channel::setChannelGroup(FMOD::ChannelGroup *)
// address: 0x00137BF8   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setChannelGroup(FMOD::Channel *this, FMOD::ChannelGroup *a2)
{
  return __imp__ZN4FMOD7Channel15setChannelGroupEPNS_12ChannelGroupE(this, a2);
}


//======================================================================
// FMOD::Channel::setLoopCount(int)
// address: 0x00137C04   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setLoopCount(FMOD::Channel *this, int a2)
{
  return __imp__ZN4FMOD7Channel12setLoopCountEi(this, a2);
}


//======================================================================
// FMOD::Channel::setFrequency(float)
// address: 0x00137C1C   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setFrequency(FMOD::Channel *this, float a2)
{
  return __imp__ZN4FMOD7Channel12setFrequencyEf(this, a2);
}


//======================================================================
// FMOD::Channel::stop(void)
// address: 0x003CA740   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::stop(FMOD::Channel *this)
{
  return _ZN4FMOD7Channel4stopEv(this);
}


//======================================================================
// FMOD::Channel::isPlaying(bool *)
// address: 0x003CA750   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::isPlaying(FMOD::Channel *this, bool *a2)
{
  return _ZN4FMOD7Channel9isPlayingEPb(this, a2);
}


//======================================================================
// FMOD::Channel::setVolume(float)
// address: 0x003CA760   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setVolume(FMOD::Channel *this, float a2)
{
  return _ZN4FMOD7Channel9setVolumeEf(this, a2);
}


//======================================================================
// FMOD::Channel::setPaused(bool)
// address: 0x003CA770   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setPaused(FMOD::Channel *this, bool a2)
{
  return _ZN4FMOD7Channel9setPausedEb(this, a2);
}


//======================================================================
// FMOD::Channel::set3DAttributes(FMOD_VECTOR const*,FMOD_VECTOR const*)
// address: 0x003CA780   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int FMOD::Channel::set3DAttributes()
{
  return _ZN4FMOD7Channel15set3DAttributesEPK11FMOD_VECTORS3_();
}


//======================================================================
// FMOD::Channel::set3DMinMaxDistance(float,float)
// address: 0x003CA790   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::set3DMinMaxDistance(FMOD::Channel *this, float a2, float a3)
{
  return _ZN4FMOD7Channel19set3DMinMaxDistanceEff(this, a2, a3);
}


//======================================================================
// FMOD::Channel::setChannelGroup(FMOD::ChannelGroup *)
// address: 0x003CA8A0   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setChannelGroup(FMOD::Channel *this, FMOD::ChannelGroup *a2)
{
  return _ZN4FMOD7Channel15setChannelGroupEPNS_12ChannelGroupE(this, a2);
}


//======================================================================
// FMOD::Channel::setLoopCount(int)
// address: 0x003CA8B0   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setLoopCount(FMOD::Channel *this, int a2)
{
  return _ZN4FMOD7Channel12setLoopCountEi(this, a2);
}


//======================================================================
// FMOD::Channel::setFrequency(float)
// address: 0x003CA8D0   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Channel::setFrequency(FMOD::Channel *this, float a2)
{
  return _ZN4FMOD7Channel12setFrequencyEf(this, a2);
}

