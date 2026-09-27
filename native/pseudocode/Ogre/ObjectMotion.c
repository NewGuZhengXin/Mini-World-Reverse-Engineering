// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: Ogre::ObjectMotion

//======================================================================
// Ogre::ObjectMotion::InitObject(Ogre::Entity *)
// address: 0x0015FA38   size: 0x6 (6 bytes)
//======================================================================
int __fastcall Ogre::ObjectMotion::InitObject(int result)
{
  *(_DWORD *)(result + 4) = 0;
  return result;
}


//======================================================================
// Ogre::ObjectMotion::DelayStopObject(Ogre::Entity *,float)
// address: 0x0015FA3E   size: 0x2 (2 bytes)
//======================================================================
void Ogre::ObjectMotion::DelayStopObject()
{
  ;
}


//======================================================================
// Ogre::ObjectMotion::OnPause(bool,float,Ogre::Entity *)
// address: 0x0015FA40   size: 0x2 (2 bytes)
//======================================================================
void Ogre::ObjectMotion::OnPause()
{
  ;
}


//======================================================================
// Ogre::ObjectMotion::GetParent(void)
// address: 0x0015FA42   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::ObjectMotion::GetParent(Ogre::ObjectMotion *this)
{
  return 0;
}


//======================================================================
// Ogre::ObjectMotion::SetParent(Ogre::ObjectMotion*)
// address: 0x0015FA46   size: 0x2 (2 bytes)
//======================================================================
void __fastcall Ogre::ObjectMotion::SetParent(Ogre::ObjectMotion *this, Ogre::ObjectMotion *a2)
{
  ;
}


//======================================================================
// Ogre::ObjectMotion::OnRestartObject(Ogre::Entity *,float)
// address: 0x0015FA48   size: 0x2 (2 bytes)
//======================================================================
void Ogre::ObjectMotion::OnRestartObject()
{
  ;
}


//======================================================================
// Ogre::ObjectMotion::SetLodLevel(Ogre::LOD_LEVEL)
// address: 0x0015FA4A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::ObjectMotion::SetLodLevel(int result, int a2)
{
  *(_DWORD *)(result + 56) = a2;
  return result;
}


//======================================================================
// Ogre::ObjectMotion::SetLodLevel(int)
// address: 0x0015FA4E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::ObjectMotion::SetLodLevel(int this, int a2)
{
  *(_DWORD *)(this + 56) = a2;
  return this;
}


//======================================================================
// Ogre::ObjectMotion::OnChildStart(Ogre::ObjectMotion*,Ogre::Entity *)
// address: 0x0015FA52   size: 0x2 (2 bytes)
//======================================================================
void Ogre::ObjectMotion::OnChildStart()
{
  ;
}


//======================================================================
// Ogre::ObjectMotion::OnChildEnd(Ogre::ObjectMotion*,Ogre::Entity *)
// address: 0x0015FA54   size: 0x2 (2 bytes)
//======================================================================
void Ogre::ObjectMotion::OnChildEnd()
{
  ;
}


//======================================================================
// Ogre::ObjectMotion::OnChildStop(Ogre::ObjectMotion*,Ogre::Entity *)
// address: 0x0015FA56   size: 0x2 (2 bytes)
//======================================================================
void Ogre::ObjectMotion::OnChildStop()
{
  ;
}


//======================================================================
// Ogre::ObjectMotion::OnChildUpdate(Ogre::ObjectMotion*,float,Ogre::Entity *)
// address: 0x0015FA58   size: 0x2 (2 bytes)
//======================================================================
void Ogre::ObjectMotion::OnChildUpdate()
{
  ;
}


//======================================================================
// Ogre::ObjectMotion::GetLifeCtrl(void)
// address: 0x0015FA5A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::ObjectMotion::GetLifeCtrl(Ogre::ObjectMotion *this)
{
  return *((_DWORD *)this + 2);
}


//======================================================================
// Ogre::ObjectMotion::GetState(void)
// address: 0x0015FA5E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall Ogre::ObjectMotion::GetState(Ogre::ObjectMotion *this)
{
  return *((_DWORD *)this + 1);
}


//======================================================================
// Ogre::ObjectMotion::~ObjectMotion()
// address: 0x0015FF30   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12ObjectMotionD1Ev'
void __fastcall Ogre::ObjectMotion::~ObjectMotion(Ogre::ObjectMotion *this)
{
  int v2; // r0
  _DWORD *v3; // r0

  *(_DWORD *)this = &off_456AB0;
  v2 = *((_DWORD *)this + 2);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  v3 = *((_DWORD **)this + 4);
  if ( v3 != nullptr )
  {
    Ogre::BaseObject::release(v3);
    *((_DWORD *)this + 4) = 0;
  }
}


//======================================================================
// Ogre::ObjectMotion::~ObjectMotion()
// address: 0x0015FF60   size: 0x12 (18 bytes)
//======================================================================
void __fastcall Ogre::ObjectMotion::~ObjectMotion(Ogre::ObjectMotion *this)
{
  Ogre::ObjectMotion::~ObjectMotion(this);
  operator delete(this);
}


//======================================================================
// Ogre::ObjectMotion::ObjectMotion(void)
// address: 0x0016039C   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN4Ogre12ObjectMotionC1Ev'
int __fastcall Ogre::ObjectMotion::ObjectMotion(int this)
{
  *(_DWORD *)this = &off_456AB0;
  *(_DWORD *)(this + 4) = -1;
  *(_DWORD *)(this + 8) = 0;
  *(_DWORD *)(this + 12) = 0;
  *(_DWORD *)(this + 16) = 0;
  *(_DWORD *)(this + 56) = 0;
  *(_BYTE *)(this + 20) = 0;
  *(_BYTE *)(this + 36) = 0;
  *(_DWORD *)(this + 52) = 1065353216;
  return this;
}

