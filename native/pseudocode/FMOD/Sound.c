// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: FMOD::Sound

//======================================================================
// FMOD::Sound::release(void)
// address: 0x00137B74   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Sound::release(FMOD::Sound *this)
{
  return __imp__ZN4FMOD5Sound7releaseEv(this);
}


//======================================================================
// FMOD::Sound::getDefaults(float *,float *,float *,int *)
// address: 0x00137C10   size: 0xC (12 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Sound::getDefaults(FMOD::Sound *this, float *a2, float *a3, float *a4, int *a5)
{
  return __imp__ZN4FMOD5Sound11getDefaultsEPfS1_S1_Pi(this, a2, a3, a4, a5);
}


//======================================================================
// FMOD::Sound::release(void)
// address: 0x003CA7F0   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Sound::release(FMOD::Sound *this)
{
  return _ZN4FMOD5Sound7releaseEv(this);
}


//======================================================================
// FMOD::Sound::getDefaults(float *,float *,float *,int *)
// address: 0x003CA8C0   size: 0x10 (16 bytes)
//======================================================================
// attributes: thunk
int __fastcall FMOD::Sound::getDefaults(FMOD::Sound *this, float *a2, float *a3, float *a4, int *a5)
{
  return _ZN4FMOD5Sound11getDefaultsEPfS1_S1_Pi(this, a2, a3, a4, a5);
}

