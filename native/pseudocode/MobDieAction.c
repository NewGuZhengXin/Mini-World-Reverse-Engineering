// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobDieAction

//======================================================================
// MobDieAction::getName(void)
// address: 0x002CCFE8   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobDieAction::getName(MobDieAction *this)
{
  return "MobDie";
}


//======================================================================
// MobDieAction::onStart(void)
// address: 0x002CD108   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall MobDieAction::onStart(_DWORD *this, int a2)
{
  *(_DWORD *)(a2 + 16) = 1069547520;
  *(_DWORD *)(a2 + 20) = -1082130432;
  *this = 0;
  *(this + 1) = 0;
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobDieAction::~MobDieAction()
// address: 0x002CD1D4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN12MobDieActionD1Ev'
void __fastcall MobDieAction::~MobDieAction(MobDieAction *this)
{
  *(_DWORD *)this = &off_45FD78;
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobDieAction::~MobDieAction()
// address: 0x002CD2BA   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobDieAction::~MobDieAction(MobDieAction *this)
{
  MobDieAction::~MobDieAction(this);
  operator delete(this);
}


//======================================================================
// MobDieAction::update(float)
// address: 0x002CD558   size: 0x72 (114 bytes)
//======================================================================
MobDieAction *__fastcall MobDieAction::update(MobDieAction *this, float a2, int a3)
{
  float v3; // r3
  _BOOL4 v6; // r6
  float v7; // r0

  v3 = *(float *)(LODWORD(a2) + 16);
  v6 = v3 > 0.0;
  if ( v3 > 0.0 )
  {
    *(float *)(LODWORD(a2) + 16) = v3 - *(float *)&a3;
    if ( (float)(v3 - *(float *)&a3) <= 0.0 )
    {
      ActorBody::playEffect(*(_DWORD *)(*(_DWORD *)(LODWORD(a2) + 4) + 64), 1, a3);
      ActorBody::show(*(unsigned int *)(*(_DWORD *)(LODWORD(a2) + 4) + 64));
      *(_DWORD *)(LODWORD(a2) + 20) = 0x40000000;
    }
    goto LABEL_6;
  }
  v7 = *(float *)(LODWORD(a2) + 20) - *(float *)&a3;
  *(float *)(LODWORD(a2) + 20) = v7;
  if ( v7 > 0.0 )
  {
LABEL_6:
    *(_DWORD *)this = 0;
    *((_DWORD *)this + 1) = 0;
    *((_DWORD *)this + 2) = 0;
    return this;
  }
  *(_DWORD *)this = 3;
  *((_DWORD *)this + 1) = v6;
  *((_DWORD *)this + 2) = v6;
  return this;
}

