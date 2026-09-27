// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobPassiveAction

//======================================================================
// MobPassiveAction::getName(void)
// address: 0x002CCFAC   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobPassiveAction::getName(MobPassiveAction *this)
{
  return "MobPassive";
}


//======================================================================
// MobPassiveAction::onStart(void)
// address: 0x002CD074   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall MobPassiveAction::onStart(_DWORD *this, int a2)
{
  *(_DWORD *)(a2 + 20) = -1;
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobPassiveAction::onEvent(ActorEvent const&)
// address: 0x002CD084   size: 0x4 (4 bytes)
//======================================================================
int MobPassiveAction::onEvent()
{
  return 0;
}


//======================================================================
// MobPassiveAction::~MobPassiveAction()
// address: 0x002CD314   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN16MobPassiveActionD1Ev'
void __fastcall MobPassiveAction::~MobPassiveAction(MobPassiveAction *this)
{
  NavigationPath *v1; // r5

  v1 = *((NavigationPath **)this + 4);
  *(_DWORD *)this = &off_45FC88;
  if ( v1 != nullptr )
  {
    NavigationPath::~NavigationPath(v1);
    operator delete(v1);
  }
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobPassiveAction::~MobPassiveAction()
// address: 0x002CD344   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobPassiveAction::~MobPassiveAction(MobPassiveAction *this)
{
  MobPassiveAction::~MobPassiveAction(this);
  operator delete(this);
}


//======================================================================
// MobPassiveAction::update(float)
// address: 0x002CD46C   size: 0x28 (40 bytes)
//======================================================================
MobPassiveAction *__fastcall MobPassiveAction::update(MobPassiveAction *this, float a2)
{
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(LODWORD(a2) + 4) + 156))(*(_DWORD *)(LODWORD(a2) + 4)) != 0 )
    *(_DWORD *)this = 3;
  else
    *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return this;
}


//======================================================================
// MobPassiveAction::MobPassiveAction(ClientActor *)
// address: 0x002CD858   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN16MobPassiveActionC2EP11ClientActor'
void __fastcall MobPassiveAction::MobPassiveAction(MobPassiveAction *this, ClientActor *a2)
{
  NavigationPath *v4; // r5

  ActorAction::ActorAction(this, a2);
  *(_DWORD *)this = &off_45FC88;
  *((_DWORD *)this + 4) = 0;
  v4 = (NavigationPath *)operator new(0x28u);
  NavigationPath::NavigationPath(v4, a2);
  *((_DWORD *)this + 4) = v4;
}


//======================================================================
// MobPassiveAction::beginPathSegment(void)
// address: 0x002CD89C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall MobPassiveAction::beginPathSegment(MobPassiveAction *this)
{
  ;
}

