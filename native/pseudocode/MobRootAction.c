// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobRootAction

//======================================================================
// MobRootAction::getName(void)
// address: 0x002CCFA0   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobRootAction::getName(MobRootAction *this)
{
  return "MobRoot";
}


//======================================================================
// MobRootAction::onStart(void)
// address: 0x002CD058   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall MobRootAction::onStart(_DWORD *this)
{
  *this = 2;
  *(this + 1) = "MobIdle";
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobRootAction::onEvent(ActorEvent const&)
// address: 0x002CD06C   size: 0x8 (8 bytes)
//======================================================================
int MobRootAction::onEvent()
{
  return ActorAction::onEvent();
}


//======================================================================
// MobRootAction::~MobRootAction()
// address: 0x002CD244   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13MobRootActionD1Ev'
void __fastcall MobRootAction::~MobRootAction(MobRootAction *this)
{
  *(_DWORD *)this = &off_45FC58;
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobRootAction::~MobRootAction()
// address: 0x002CD302   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobRootAction::~MobRootAction(MobRootAction *this)
{
  MobRootAction::~MobRootAction(this);
  operator delete(this);
}


//======================================================================
// MobRootAction::update(float)
// address: 0x002CD610   size: 0x60 (96 bytes)
//======================================================================
MobRootAction *__fastcall MobRootAction::update(MobRootAction *this, float a2)
{
  if ( ClientActor::isDead(*(ClientActor **)(LODWORD(a2) + 4)) != 0 )
  {
    *(_DWORD *)this = 1;
    *((_DWORD *)this + 1) = "MobDie";
    *((_DWORD *)this + 2) = 0;
  }
  else if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(LODWORD(a2) + 4) + 156))(*(_DWORD *)(LODWORD(a2) + 4)) != 0 )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(LODWORD(a2) + 8) + 28) - *(_DWORD *)(*(_DWORD *)(LODWORD(a2) + 8) + 24)) >> 2 == 1 )
    {
      *(_DWORD *)this = 2;
      *((_DWORD *)this + 1) = "MobIdle";
    }
    else
    {
      *(_DWORD *)this = 0;
      *((_DWORD *)this + 1) = 0;
    }
    *((_DWORD *)this + 2) = 0;
  }
  else
  {
    *(_DWORD *)this = 1;
    *((_DWORD *)this + 2) = 0;
    *((_DWORD *)this + 1) = "MobPassive";
  }
  return this;
}


//======================================================================
// MobRootAction::MobRootAction(ClientActor *)
// address: 0x002CD83C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13MobRootActionC2EP11ClientActor'
void __fastcall MobRootAction::MobRootAction(MobRootAction *this, ClientActor *a2)
{
  ActorAction::ActorAction(this, a2);
  *(_DWORD *)this = &off_45FC58;
}

