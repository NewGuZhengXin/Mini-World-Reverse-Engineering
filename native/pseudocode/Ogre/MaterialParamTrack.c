// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::MaterialParamTrack

//======================================================================
// Ogre::MaterialParamTrack::getRTTI(void)const
// address: 0x00198894   size: 0x8 (8 bytes)
//======================================================================
void *__fastcall Ogre::MaterialParamTrack::getRTTI(Ogre::MaterialParamTrack *this)
{
  return &Ogre::MaterialParamTrack::m_RTTI;
}


//======================================================================
// Ogre::MaterialParamTrack::~MaterialParamTrack()
// address: 0x001988B4   size: 0x36 (54 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18MaterialParamTrackD1Ev'
void __fastcall Ogre::MaterialParamTrack::~MaterialParamTrack(Ogre::MaterialParamTrack *this, void *a2)
{
  int v3; // r0
  void *v4; // r1
  void *v5; // r1
  void *v6; // r1

  *(_DWORD *)this = &off_458868;
  v3 = *((_DWORD *)this + 8);
  if ( v3 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 20))(v3);
  Ogre::FixedString::release(*((_DWORD *)this + 6), a2);
  Ogre::FixedString::release(*((_DWORD *)this + 5), v4);
  Ogre::FixedString::release(*((_DWORD *)this + 4), v5);
  Ogre::Resource::~Resource((Ogre::FixedString **)this, v6);
}


//======================================================================
// Ogre::MaterialParamTrack::~MaterialParamTrack()
// address: 0x001988F0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::MaterialParamTrack::~MaterialParamTrack(Ogre::MaterialParamTrack *this, void *a2)
{
  Ogre::MaterialParamTrack::~MaterialParamTrack(this, a2);
  operator delete(this);
}


//======================================================================
// Ogre::MaterialParamTrack::_serialize(Ogre::Archive &,int)
// address: 0x00198904   size: 0xAC (172 bytes)
//======================================================================
__int64 __fastcall Ogre::MaterialParamTrack::_serialize(const char **this, Ogre::Archive *a2, int a3)
{
  int v5; // r4
  char *v6; // r0
  __int64 v8; // [sp+0h] [bp-Ch]

  HIDWORD(v8) = a3;
  LODWORD(v8) = &GLOBAL_OFFSET_TABLE_;
  Ogre::Archive::operator<<((int)a2, this + 4);
  Ogre::Archive::operator<<((int)a2, this + 5);
  Ogre::Archive::operator<<((int)a2, this + 6);
  Ogre::Archive::serialize(a2, this + 7, 4u);
  if ( *((_DWORD *)a2 + 2) == 1 )
  {
    v5 = (int)*(this + 7);
    if ( v5 == 0 )
    {
      v6 = (char *)operator new(0x30u);
      *((_DWORD *)v6 + 1) = 1;
      *((_DWORD *)v6 + 2) = 0;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 4) = 0;
      *((_DWORD *)v6 + 5) = 1;
      *((_DWORD *)v6 + 6) = 0;
      LODWORD(v8) = &`vtable for'Ogre::KeyFrameArray<float>;
      *(_DWORD *)v6 = &off_455A48;
      *((_DWORD *)v6 + 7) = 0;
      *((_DWORD *)v6 + 8) = 0;
      *((_DWORD *)v6 + 9) = 0;
      *((_DWORD *)v6 + 10) = 0;
      *((_DWORD *)v6 + 11) = 0;
LABEL_6:
      *(this + 8) = v6;
      goto LABEL_7;
    }
    if ( v5 == 2 )
    {
      v6 = (char *)operator new(0x30u);
      *((_DWORD *)v6 + 1) = 1;
      *((_DWORD *)v6 + 2) = 0;
      *((_DWORD *)v6 + 3) = 0;
      *((_DWORD *)v6 + 4) = 0;
      *((_DWORD *)v6 + 5) = 1;
      *((_DWORD *)v6 + 6) = 0;
      LODWORD(v8) = &`vtable for'Ogre::KeyFrameArray<Ogre::Vector3>;
      *(_DWORD *)v6 = &off_455C50;
      *((_DWORD *)v6 + 7) = 0;
      *((_DWORD *)v6 + 8) = 0;
      *((_DWORD *)v6 + 9) = 0;
      *((_DWORD *)v6 + 10) = 0;
      *((_DWORD *)v6 + 11) = 0;
      goto LABEL_6;
    }
  }
LABEL_7:
  (*(void (__fastcall **)(_DWORD, Ogre::Archive *, _DWORD))(*(_DWORD *)*(this + 8) + 12))(*(this + 8), a2, HIDWORD(v8));
  return v8;
}


//======================================================================
// Ogre::MaterialParamTrack::MaterialParamTrack(void)
// address: 0x001989BC   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre18MaterialParamTrackC1Ev'
_DWORD *__fastcall Ogre::MaterialParamTrack::MaterialParamTrack(_DWORD *this)
{
  *(this + 1) = 1;
  *(this + 2) = 0;
  *(this + 3) = 0;
  *this = &off_458868;
  *(this + 4) = 0;
  *(this + 5) = 0;
  *(this + 6) = 0;
  *(this + 8) = 0;
  return this;
}


//======================================================================
// Ogre::MaterialParamTrack::newObject(void)
// address: 0x001989E0   size: 0x12 (18 bytes)
//======================================================================
_DWORD *__fastcall Ogre::MaterialParamTrack::newObject(Ogre::MaterialParamTrack *this)
{
  _DWORD *v1; // r4

  v1 = (_DWORD *)operator new(0x24u);
  Ogre::MaterialParamTrack::MaterialParamTrack(v1);
  return v1;
}

