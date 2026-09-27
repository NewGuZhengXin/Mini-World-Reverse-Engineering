// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobFollowAction

//======================================================================
// MobFollowAction::getName(void)
// address: 0x002CD00C   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobFollowAction::getName(MobFollowAction *this)
{
  return "MobFollow";
}


//======================================================================
// MobFollowAction::onStart(void)
// address: 0x002CD152   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall MobFollowAction::onStart(_DWORD *this, int a2)
{
  *(_DWORD *)(a2 + 16) = 0;
  *(_BYTE *)(a2 + 20) = 0;
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobFollowAction::update(float)
// address: 0x002CD162   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall MobFollowAction::update(_DWORD *this, float a2)
{
  *this = 3;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobFollowAction::onResume(void)
// address: 0x002CD16E   size: 0x10 (16 bytes)
//======================================================================
MobFollowAction *__fastcall MobFollowAction::onResume(MobFollowAction *this, int a2)
{
  *(_BYTE *)(a2 + 20) = 0;
  ActorAction::onResume(this, a2);
  return this;
}


//======================================================================
// MobFollowAction::~MobFollowAction()
// address: 0x002CD180   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15MobFollowActionD1Ev'
void __fastcall MobFollowAction::~MobFollowAction(MobFollowAction *this)
{
  *(_DWORD *)this = &off_45FE08;
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobFollowAction::~MobFollowAction()
// address: 0x002CD284   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobFollowAction::~MobFollowAction(MobFollowAction *this)
{
  MobFollowAction::~MobFollowAction(this);
  operator delete(this);
}

