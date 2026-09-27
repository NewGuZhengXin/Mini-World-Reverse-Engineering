// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AILeapAtTarget

//======================================================================
// AILeapAtTarget::continueExecuting(void)
// address: 0x00303DF0   size: 0xE (14 bytes)
//======================================================================
int __fastcall AILeapAtTarget::continueExecuting(AILeapAtTarget *this)
{
  return *(unsigned __int8 *)(*(_DWORD *)(*((_DWORD *)this + 3) + 68) + 124) ^ 1;
}


//======================================================================
// AILeapAtTarget::~AILeapAtTarget()
// address: 0x00303E00   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14AILeapAtTargetD1Ev'
void __fastcall AILeapAtTarget::~AILeapAtTarget(AILeapAtTarget *this)
{
  *(_DWORD *)this = &off_4633E8;
  AIBase::~AIBase(this);
}


//======================================================================
// AILeapAtTarget::~AILeapAtTarget()
// address: 0x00303E1C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AILeapAtTarget::~AILeapAtTarget(AILeapAtTarget *this)
{
  AILeapAtTarget::~AILeapAtTarget(this);
  operator delete(this);
}


//======================================================================
// AILeapAtTarget::shouldExecute(void)
// address: 0x00303E2E   size: 0x7C (124 bytes)
//======================================================================
int __fastcall AILeapAtTarget::shouldExecute(ClientActor **this)
{
  ClientActor *v2; // r7
  int v3; // r4
  double DistanceSqToEntity; // r4
  _BYTE *v5; // r3
  _DWORD *v6; // r3
  ClientActor *v7; // r1
  ClientActor *v8; // r2
  ClientActor *v9; // r3

  v2 = (ClientActor *)ClientActor::getToAttackTarget(*(this + 3));
  if ( v2 == nullptr )
    return 0;
  DistanceSqToEntity = ClientActor::getDistanceSqToEntity(*(this + 3), v2);
  if ( DistanceSqToEntity < (double)((int)*(this + 8) * (int)*(this + 8)) )
    return 0;
  if ( DistanceSqToEntity > (double)((int)*(this + 9) * (int)*(this + 9)) )
    return 0;
  v5 = (_BYTE *)(*((_DWORD *)*(this + 3) + 17) + 124);
  v3 = (unsigned __int8)*v5;
  if ( *v5 == 0 || GenRandomInt(0, 3) != 0 )
    return 0;
  v6 = *((_DWORD **)v2 + 17);
  v7 = (ClientActor *)v6[8];
  v8 = (ClientActor *)v6[9];
  v9 = (ClientActor *)v6[10];
  *(this + 5) = v7;
  *(this + 6) = v8;
  *(this + 7) = v9;
  return v3;
}


//======================================================================
// AILeapAtTarget::startExecuting(void)
// address: 0x00303EAA   size: 0x12 (18 bytes)
//======================================================================
float __fastcall AILeapAtTarget::startExecuting(AILeapAtTarget *this)
{
  return ClientActor::leapTarget(
           *((ClientActor **)this + 3),
           (AILeapAtTarget *)((char *)this + 20),
           *((float *)this + 4));
}


//======================================================================
// AILeapAtTarget::AILeapAtTarget(ClientActor *,float,int,int)
// address: 0x00303EBC   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN14AILeapAtTargetC2EP11ClientActorfii'
void __fastcall AILeapAtTarget::AILeapAtTarget(AILeapAtTarget *this, ClientActor *a2, float a3, int a4, int a5)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 8) = a4;
  *((_DWORD *)this + 9) = a5;
  *(_DWORD *)this = &off_4633E8;
  *((_DWORD *)this + 3) = a2;
  *((float *)this + 4) = a3;
  *((_DWORD *)this + 2) = 5;
}

