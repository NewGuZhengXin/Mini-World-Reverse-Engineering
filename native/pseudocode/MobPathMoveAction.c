// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobPathMoveAction

//======================================================================
// MobPathMoveAction::getName(void)
// address: 0x002CCFD0   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobPathMoveAction::getName(MobPathMoveAction *this)
{
  return "MobPathMove";
}


//======================================================================
// MobPathMoveAction::~MobPathMoveAction()
// address: 0x002CD0A4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17MobPathMoveActionD1Ev'
void __fastcall MobPathMoveAction::~MobPathMoveAction(MobPathMoveAction *this)
{
  *(_DWORD *)this = &off_45FD18;
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobPathMoveAction::onStart(void)
// address: 0x002CD0C0   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall MobPathMoveAction::onStart(_DWORD *this)
{
  *this = 3;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobPathMoveAction::update(float)
// address: 0x002CD0CC   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall MobPathMoveAction::update(_DWORD *this, float a2)
{
  *this = 3;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobPathMoveAction::onEvent(ActorEvent const&)
// address: 0x002CD0D8   size: 0x4 (4 bytes)
//======================================================================
int MobPathMoveAction::onEvent()
{
  return 0;
}


//======================================================================
// MobPathMoveAction::onEnd(void)
// address: 0x002CD0DC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall MobPathMoveAction::onEnd(MobPathMoveAction *this)
{
  ;
}


//======================================================================
// MobPathMoveAction::~MobPathMoveAction()
// address: 0x002CD272   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobPathMoveAction::~MobPathMoveAction(MobPathMoveAction *this)
{
  MobPathMoveAction::~MobPathMoveAction(this);
  operator delete(this);
}


//======================================================================
// MobPathMoveAction::MobPathMoveAction(ClientActor *)
// address: 0x002CD8BC   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN17MobPathMoveActionC2EP11ClientActor'
void __fastcall MobPathMoveAction::MobPathMoveAction(MobPathMoveAction *this, ClientActor *a2)
{
  ActorAction::ActorAction(this, a2);
  *(_DWORD *)this = &off_45FD18;
  *((_DWORD *)this + 5) = -1;
}


//======================================================================
// MobPathMoveAction::beginPathSegment(void)
// address: 0x002CD8DC   size: 0x2 (2 bytes)
//======================================================================
void __fastcall MobPathMoveAction::beginPathSegment(MobPathMoveAction *this)
{
  ;
}

