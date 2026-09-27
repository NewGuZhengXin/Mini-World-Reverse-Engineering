// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobPursueAction

//======================================================================
// MobPursueAction::getName(void)
// address: 0x002CCFF4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobPursueAction::getName(MobPursueAction *this)
{
  return "MobPursue";
}


//======================================================================
// MobPursueAction::onStart(void)
// address: 0x002CD120   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall MobPursueAction::onStart(_DWORD *this, _DWORD *a2)
{
  a2[4] = 0;
  a2[6] = 0;
  a2[5] = -1;
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobPursueAction::onResume(void)
// address: 0x002CD136   size: 0x10 (16 bytes)
//======================================================================
MobPursueAction *__fastcall MobPursueAction::onResume(MobPursueAction *this, int a2)
{
  *(_DWORD *)(a2 + 20) = 0;
  ActorAction::onResume(this, a2);
  return this;
}


//======================================================================
// MobPursueAction::update(float)
// address: 0x002CD146   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall MobPursueAction::update(_DWORD *this, float a2)
{
  *this = 3;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobPursueAction::~MobPursueAction()
// address: 0x002CD1B8   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15MobPursueActionD1Ev'
void __fastcall MobPursueAction::~MobPursueAction(MobPursueAction *this)
{
  *(_DWORD *)this = &off_45FDA8;
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobPursueAction::~MobPursueAction()
// address: 0x002CD2A8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobPursueAction::~MobPursueAction(MobPursueAction *this)
{
  MobPursueAction::~MobPursueAction(this);
  operator delete(this);
}

