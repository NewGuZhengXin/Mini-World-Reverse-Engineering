// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobAttackAction

//======================================================================
// MobAttackAction::getName(void)
// address: 0x002CD000   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobAttackAction::getName(MobAttackAction *this)
{
  return "MobAttack";
}


//======================================================================
// MobAttackAction::~MobAttackAction()
// address: 0x002CD19C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN15MobAttackActionD1Ev'
void __fastcall MobAttackAction::~MobAttackAction(MobAttackAction *this)
{
  *(_DWORD *)this = &off_45FDD8;
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobAttackAction::~MobAttackAction()
// address: 0x002CD296   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobAttackAction::~MobAttackAction(MobAttackAction *this)
{
  MobAttackAction::~MobAttackAction(this);
  operator delete(this);
}


//======================================================================
// MobAttackAction::onStart(void)
// address: 0x002CD4FC   size: 0x2A (42 bytes)
//======================================================================
MobAttackAction *__fastcall MobAttackAction::onStart(MobAttackAction *this, int a2)
{
  if ( ClientActor::getToAttackTarget(*(ClientActor **)(a2 + 4)) != 0 )
  {
    *(_DWORD *)(a2 + 16) = 0;
    *(_DWORD *)this = 0;
  }
  else
  {
    *(_DWORD *)this = 3;
  }
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return this;
}


//======================================================================
// MobAttackAction::update(float)
// address: 0x002CD526   size: 0x32 (50 bytes)
//======================================================================
MobAttackAction *__fastcall MobAttackAction::update(MobAttackAction *this, float a2, float a3)
{
  float v4; // r0

  v4 = a3 + *(float *)(LODWORD(a2) + 16);
  *(float *)(LODWORD(a2) + 16) = v4;
  if ( v4 < 2.0 )
    *(_DWORD *)this = 0;
  else
    *(_DWORD *)this = 3;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return this;
}

