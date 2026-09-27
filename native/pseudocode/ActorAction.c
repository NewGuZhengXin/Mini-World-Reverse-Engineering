// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorAction

//======================================================================
// ActorAction::~ActorAction()
// address: 0x002CD018   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN11ActorActionD1Ev'
void __fastcall ActorAction::~ActorAction(ActorAction *this)
{
  *(_DWORD *)this = &off_45FC28;
}


//======================================================================
// ActorAction::onStart(void)
// address: 0x002CD028   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall ActorAction::onStart(_DWORD *this, int a2)
{
  *(_BYTE *)(a2 + 12) = 0;
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// ActorAction::onEnd(void)
// address: 0x002CD034   size: 0x2 (2 bytes)
//======================================================================
void __fastcall ActorAction::onEnd(ActorAction *this)
{
  ;
}


//======================================================================
// ActorAction::onSuspend(void)
// address: 0x002CD036   size: 0x6 (6 bytes)
//======================================================================
int __fastcall ActorAction::onSuspend(int this)
{
  *(_BYTE *)(this + 12) = 1;
  return this;
}


//======================================================================
// ActorAction::onResume(void)
// address: 0x002CD03C   size: 0xC (12 bytes)
//======================================================================
_DWORD *__fastcall ActorAction::onResume(_DWORD *this, int a2)
{
  *(_BYTE *)(a2 + 12) = 0;
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// ActorAction::update(float)
// address: 0x002CD048   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall ActorAction::update(_DWORD *this, float a2)
{
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// ActorAction::onEvent(ActorEvent const&)
// address: 0x002CD052   size: 0x4 (4 bytes)
//======================================================================
int ActorAction::onEvent()
{
  return 0;
}


//======================================================================
// ActorAction::~ActorAction()
// address: 0x002CD260   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorAction::~ActorAction(ActorAction *this)
{
  ActorAction::~ActorAction(this);
  operator delete(this);
}


//======================================================================
// ActorAction::ActorAction(ClientActor *)
// address: 0x002CD824   size: 0x12 (18 bytes)
//======================================================================
// Alternative name is '_ZN11ActorActionC1EP11ClientActor'
void __fastcall ActorAction::ActorAction(ActorAction *this, ClientActor *a2)
{
  *((_DWORD *)this + 1) = a2;
  *(_DWORD *)this = &off_45FC28;
  *((_BYTE *)this + 12) = 0;
}

