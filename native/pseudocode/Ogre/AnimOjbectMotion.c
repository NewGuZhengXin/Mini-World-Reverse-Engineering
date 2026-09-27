// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::AnimOjbectMotion

//======================================================================
// Ogre::AnimOjbectMotion::UpdateData(float,Ogre::Entity *)
// address: 0x0015FA6C   size: 0x2 (2 bytes)
//======================================================================
void Ogre::AnimOjbectMotion::UpdateData()
{
  ;
}


//======================================================================
// Ogre::AnimOjbectMotion::InitObject(Ogre::Entity *)
// address: 0x0015FC0C   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::AnimOjbectMotion::InitObject(int result)
{
  *(_DWORD *)(result + 4) = 0;
  return result;
}


//======================================================================
// Ogre::AnimOjbectMotion::DelayStopObject(Ogre::Entity *,float)
// address: 0x0015FC12   size: 0xA (10 bytes)
//======================================================================
int __fastcall Ogre::AnimOjbectMotion::DelayStopObject(int a1)
{
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 12))(a1);
}


//======================================================================
// Ogre::AnimOjbectMotion::StartObject(Ogre::Entity *)
// address: 0x0015FCB0   size: 0x20 (32 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::AnimOjbectMotion::StartObject(Ogre::AnimOjbectMotion *this, Ogre::Entity *a2)
{
  int v3; // r3
  Ogre::Model *result; // r0

  v3 = *((_DWORD *)this + 4);
  result = *((Ogre::Model **)a2 + 91);
  if ( result != nullptr )
    result = (Ogre::Model *)Ogre::Model::playAnim(result, *(_DWORD *)(v3 + 44), 1.0, 1.0);
  *((_DWORD *)this + 1) = 1;
  return result;
}


//======================================================================
// Ogre::AnimOjbectMotion::OnRestartObject(Ogre::Entity *,float)
// address: 0x0015FCD0   size: 0x34 (52 bytes)
//======================================================================
Ogre::Model *__fastcall Ogre::AnimOjbectMotion::OnRestartObject(
        Ogre::AnimOjbectMotion *this,
        Ogre::Entity *a2,
        float a3)
{
  int v5; // r5
  Ogre::Model *result; // r0

  v5 = *((_DWORD *)this + 4);
  result = (Ogre::Model *)(*(float *)((*(int (__fastcall **)(Ogre::AnimOjbectMotion *, Ogre::Entity *, _DWORD))(*(_DWORD *)this + 72))(
                                        this,
                                        a2,
                                        LODWORD(a3))
                                    + 8) < 0.016);
  if ( result != nullptr )
  {
    result = *((Ogre::Model **)a2 + 91);
    if ( result != nullptr )
      result = (Ogre::Model *)Ogre::Model::playAnim(result, *(_DWORD *)(v5 + 44), 1.0, 1.0);
    *((_DWORD *)this + 1) = 1;
  }
  return result;
}


//======================================================================
// Ogre::AnimOjbectMotion::EndObject(Ogre::Entity *)
// address: 0x0015FD08   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::AnimOjbectMotion::EndObject(Ogre::AnimOjbectMotion *this, Ogre::Entity *a2)
{
  int result; // r0

  result = Ogre::Entity::stopAnim(a2, *(_DWORD *)(*((_DWORD *)this + 4) + 44));
  *((_DWORD *)this + 1) = 2;
  return result;
}


//======================================================================
// Ogre::AnimOjbectMotion::StopObject(Ogre::Entity *)
// address: 0x0015FD1E   size: 0x16 (22 bytes)
//======================================================================
int __fastcall Ogre::AnimOjbectMotion::StopObject(Ogre::AnimOjbectMotion *this, Ogre::Entity *a2)
{
  int result; // r0

  result = Ogre::Entity::stopAnim(a2, *(_DWORD *)(*((_DWORD *)this + 4) + 44));
  *((_DWORD *)this + 1) = 2;
  return result;
}


//======================================================================
// Ogre::AnimOjbectMotion::~AnimOjbectMotion()
// address: 0x0015FFE8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre16AnimOjbectMotionD1Ev'
void __fastcall Ogre::AnimOjbectMotion::~AnimOjbectMotion(Ogre::AnimOjbectMotion *this)
{
  *(_DWORD *)this = &off_456BC0;
  Ogre::ObjectMotion::~ObjectMotion(this);
}


//======================================================================
// Ogre::AnimOjbectMotion::~AnimOjbectMotion()
// address: 0x00160004   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::AnimOjbectMotion::~AnimOjbectMotion(Ogre::AnimOjbectMotion *this)
{
  Ogre::AnimOjbectMotion::~AnimOjbectMotion(this);
  operator delete(this);
}

