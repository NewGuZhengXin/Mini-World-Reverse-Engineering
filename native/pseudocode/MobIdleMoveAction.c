// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobIdleMoveAction

//======================================================================
// MobIdleMoveAction::getName(void)
// address: 0x002CCFDC   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobIdleMoveAction::getName(MobIdleMoveAction *this)
{
  return "MobIdleMove";
}


//======================================================================
// MobIdleMoveAction::onResume(void)
// address: 0x002CD0E0   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall MobIdleMoveAction::onResume(_DWORD *this)
{
  *this = 1;
  *(this + 1) = "MobIdleStand";
  *(this + 2) = 0;
  return this;
}


//======================================================================
// MobIdleMoveAction::onEvent(ActorEvent const&)
// address: 0x002CD0F4   size: 0x14 (20 bytes)
//======================================================================
int __fastcall MobIdleMoveAction::onEvent(int a1, _DWORD *a2)
{
  int result; // r0

  result = 0;
  if ( *a2 == 2 )
  {
    *(_BYTE *)(a1 + 13) = 1;
    return 1;
  }
  return result;
}


//======================================================================
// MobIdleMoveAction::~MobIdleMoveAction()
// address: 0x002CD1F0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN17MobIdleMoveActionD1Ev'
void __fastcall MobIdleMoveAction::~MobIdleMoveAction(MobIdleMoveAction *this)
{
  *(_DWORD *)this = &off_45FD48;
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobIdleMoveAction::~MobIdleMoveAction()
// address: 0x002CD2CC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobIdleMoveAction::~MobIdleMoveAction(MobIdleMoveAction *this)
{
  MobIdleMoveAction::~MobIdleMoveAction(this);
  operator delete(this);
}


//======================================================================
// MobIdleMoveAction::update(float)
// address: 0x002CD4D4   size: 0x22 (34 bytes)
//======================================================================
MobIdleMoveAction *__fastcall MobIdleMoveAction::update(MobIdleMoveAction *this, float a2)
{
  if ( *(_BYTE *)(LODWORD(a2) + 13) != 0 )
  {
    *(_DWORD *)this = 1;
    *((_DWORD *)this + 1) = "MobIdleStand";
    *((_DWORD *)this + 2) = 0;
  }
  else
  {
    ActorAction::update(this, a2);
  }
  return this;
}


//======================================================================
// MobIdleMoveAction::onStart(void)
// address: 0x002CD724   size: 0xF0 (240 bytes)
//======================================================================
MobIdleMoveAction *__fastcall MobIdleMoveAction::onStart(MobIdleMoveAction *this, int a2)
{
  _DWORD *v3; // r7
  int v5; // r1
  int v6; // r3
  int v7; // r1
  _DWORD *v8; // r3
  int v10; // [sp+4h] [bp-18h]
  int v11; // [sp+Ch] [bp-10h] BYREF
  int v12; // [sp+10h] [bp-Ch]
  int v13; // [sp+14h] [bp-8h]

  v3 = *(_DWORD **)(*(_DWORD *)(a2 + 4) + 68);
  v10 = 10;
  while ( 1 )
  {
    v11 = (int)(float)((float)((float)((float)((float)j_lrand48() * 4.6566e-10) * 9.0) + 1.0) * 100.0);
    v13 = (int)(float)((float)((float)((float)((float)j_lrand48() * 4.6566e-10) * 9.0) + 1.0) * 100.0);
    v12 = 0;
    if ( (j_lrand48() & 1) == 0 )
      v11 = -v11;
    if ( (j_lrand48() & 1) == 0 )
      v13 = -v13;
    v5 = v3[9];
    v11 += v3[8];
    v6 = v12 + v5;
    v7 = v3[10];
    v12 = v6;
    v13 += v7;
    World::getHeight(*(World **)(*(_DWORD *)(a2 + 4) + 52), (WCoord *)&v11);
    if ( v12 > 0 )
      break;
    if ( --v10 == 0 )
    {
      if ( v12 == 0 )
      {
        *(_DWORD *)this = 1;
        *((_DWORD *)this + 2) = 0;
        *((_DWORD *)this + 1) = "MobIdleStand";
        return this;
      }
      break;
    }
  }
  v8 = *(_DWORD **)(*(_DWORD *)(a2 + 4) + 72);
  v8[1] = v11;
  v8[2] = v12;
  v8[3] = v13;
  *(_DWORD *)this = 2;
  *(_BYTE *)(a2 + 13) = 0;
  *((_DWORD *)this + 1) = "MobPathMove";
  *((_DWORD *)this + 2) = 0;
  return this;
}

