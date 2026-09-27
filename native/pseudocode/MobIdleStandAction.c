// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobIdleStandAction

//======================================================================
// MobIdleStandAction::getName(void)
// address: 0x002CCFC4   size: 0x6 (6 bytes)
//======================================================================
const char *__fastcall MobIdleStandAction::getName(MobIdleStandAction *this)
{
  return "MobIdleStand";
}


//======================================================================
// MobIdleStandAction::~MobIdleStandAction()
// address: 0x002CD20C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN18MobIdleStandActionD1Ev'
void __fastcall MobIdleStandAction::~MobIdleStandAction(MobIdleStandAction *this)
{
  *(_DWORD *)this = &off_45FCE8;
  ActorAction::~ActorAction(this);
}


//======================================================================
// MobIdleStandAction::~MobIdleStandAction()
// address: 0x002CD2DE   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobIdleStandAction::~MobIdleStandAction(MobIdleStandAction *this)
{
  MobIdleStandAction::~MobIdleStandAction(this);
  operator delete(this);
}


//======================================================================
// MobIdleStandAction::update(float)
// address: 0x002CD358   size: 0x110 (272 bytes)
//======================================================================
MobIdleStandAction *__fastcall MobIdleStandAction::update(MobIdleStandAction *this, float a2, float a3)
{
  int v5; // r3
  int v6; // r0
  int v7; // r6
  int v8; // r0
  _DWORD *v9; // r7
  _DWORD *v10; // r6
  float v11; // r6
  float v13; // [sp+4h] [bp-28h]
  float v14; // [sp+8h] [bp-24h]

  v5 = *(unsigned __int8 *)(LODWORD(a2) + 20);
  *(float *)(LODWORD(a2) + 16) = *(float *)(LODWORD(a2) + 16) - a3;
  if ( v5 != 0 )
  {
    v6 = ClientActor::getToAttackTarget(*(ClientActor **)(LODWORD(a2) + 4));
    v7 = v6;
    if ( v6 != 0 )
    {
      v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 124))(v6);
      v9 = *(_DWORD **)(v7 + 68);
      v10 = *(_DWORD **)(*(_DWORD *)(LODWORD(a2) + 4) + 68);
      v13 = (float)(v9[8] - v10[8]);
      v14 = (float)(v8 / 2 + v9[9] - v10[9]);
      v11 = (float)(v9[10] - v10[10]);
      j_sqrt((float)((float)((float)(v13 * v13) + (float)(v14 * v14)) + (float)(v11 * v11)));
      ClientActor::sendEvent(*(_DWORD *)(LODWORD(a2) + 4));
    }
  }
  if ( *(float *)(LODWORD(a2) + 16) > 0.0 )
    *(_DWORD *)this = 0;
  else
    *(_DWORD *)this = 3;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return this;
}


//======================================================================
// MobIdleStandAction::onStart(void)
// address: 0x002CD67C   size: 0x40 (64 bytes)
//======================================================================
MobIdleStandAction *__fastcall MobIdleStandAction::onStart(MobIdleStandAction *this, int a2)
{
  float v4; // r0

  v4 = (float)((float)((float)j_lrand48() * 4.6566e-10) * 7.0) + 3.0;
  *(_BYTE *)(a2 + 20) = 0;
  *(float *)(a2 + 16) = v4;
  j_lrand48();
  *(_BYTE *)(a2 + 20) = 1;
  *(_DWORD *)(a2 + 16) = 0x40000000;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  return this;
}

