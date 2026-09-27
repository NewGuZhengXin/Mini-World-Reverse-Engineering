// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobIdleAction

//======================================================================
// MobIdleAction::getName(void)
// address: 0x002CCFB8   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobIdleAction::getName(MobIdleAction *this)
{
  return "MobIdle";
}


//======================================================================
// MobIdleAction::onStart(void)
// address: 0x002CD088   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall MobIdleAction::onStart(_DWORD *this, _BYTE *a2)
{
  *this = 2;
  a2[13] = 0;
  a2[14] = 0;
  a2[15] = 0;
  *(this + 1) = "MobIdleStand";
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobIdleAction::~MobIdleAction()
// address: 0x002CD228   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13MobIdleActionD1Ev'
void __fastcall MobIdleAction::~MobIdleAction(MobIdleAction *this)
{
  *(_DWORD *)this = &off_45FCB8;
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobIdleAction::~MobIdleAction()
// address: 0x002CD2F0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobIdleAction::~MobIdleAction(MobIdleAction *this)
{
  MobIdleAction::~MobIdleAction(this);
  operator delete(this);
}


//======================================================================
// MobIdleAction::update(float)
// address: 0x002CD494   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall MobIdleAction::update(_DWORD *this, float a2)
{
  int v2; // r2
  int v3; // r3

  v2 = *(unsigned __int8 *)(LODWORD(a2) + 14);
  if ( *(_BYTE *)(LODWORD(a2) + 14) != 0 )
  {
    *this = 1;
    v3 = 0;
    *(_BYTE *)(LODWORD(a2) + 14) = 0;
    *(this + 1) = "MobPursue";
  }
  else
  {
    v3 = *(unsigned __int8 *)(LODWORD(a2) + 15);
    if ( *(_BYTE *)(LODWORD(a2) + 15) != 0 )
    {
      *this = 2;
      *(_BYTE *)(LODWORD(a2) + 15) = v2;
      *(this + 2) = v2;
      *(this + 1) = "MobIdleMove";
      return this;
    }
    *this = v3;
    *(this + 1) = v3;
  }
  *(this + 2) = v3;
  return this;
}


//======================================================================
// MobIdleAction::onEvent(ActorEvent const&)
// address: 0x002CD5CA   size: 0x44 (68 bytes)
//======================================================================
int __fastcall MobIdleAction::onEvent(int a1, _DWORD *a2)
{
  int result; // r0

  result = ActorAction::onEvent();
  if ( result == 0 )
  {
    if ( *a2 == 2 )
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 4) + 192) + 104) <= 1u )
      {
LABEL_4:
        *(_BYTE *)(a1 + 14) = 1;
        return 1;
      }
      *(_BYTE *)(a1 + 15) = 1;
      return 1;
    }
    else if ( *a2 == 16 )
    {
      result = 1;
      if ( *(_BYTE *)(*(_DWORD *)(a1 + 4) + 188) != 0 && *(_BYTE *)(a1 + 13) == 0 )
        goto LABEL_4;
    }
  }
  return result;
}


//======================================================================
// MobIdleAction::onResume(void)
// address: 0x002CD6C4   size: 0x50 (80 bytes)
//======================================================================
MobIdleAction *__fastcall MobIdleAction::onResume(MobIdleAction *this, int a2)
{
  int v2; // r5

  v2 = *(unsigned __int8 *)(a2 + 13);
  if ( *(_BYTE *)(a2 + 13) != 0 || (float)((float)((float)((float)j_lrand48() * 4.6566e-10) * 100.0) + 0.0) >= 20.0 )
  {
    *(_DWORD *)this = 2;
    *((_DWORD *)this + 1) = "MobIdleStand";
    *((_DWORD *)this + 2) = 0;
  }
  else
  {
    *(_DWORD *)this = 2;
    *((_DWORD *)this + 2) = v2;
    *((_DWORD *)this + 1) = "MobIdleMove";
  }
  return this;
}


//======================================================================
// MobIdleAction::MobIdleAction(ClientActor *)
// address: 0x002CD8A0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13MobIdleActionC2EP11ClientActor'
void __fastcall MobIdleAction::MobIdleAction(MobIdleAction *this, ClientActor *a2)
{
  ActorAction::ActorAction(this, a2);
  *(_DWORD *)this = &off_45FCB8;
}

