// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AILookIdle

//======================================================================
// AILookIdle::continueExecuting(void)
// address: 0x00303C88   size: 0x8 (8 bytes)
//======================================================================
bool __fastcall AILookIdle::continueExecuting(AILookIdle *this)
{
  return *((_DWORD *)this + 4) >= 0;
}


//======================================================================
// AILookIdle::resetTask(void)
// address: 0x00303C90   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AILookIdle::resetTask(AILookIdle *this)
{
  ;
}


//======================================================================
// AILookIdle::~AILookIdle()
// address: 0x00303C94   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN10AILookIdleD1Ev'
void __fastcall AILookIdle::~AILookIdle(AILookIdle *this)
{
  *(_DWORD *)this = &off_4633B0;
  AIBase::~AIBase(this);
}


//======================================================================
// AILookIdle::~AILookIdle()
// address: 0x00303CB0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AILookIdle::~AILookIdle(AILookIdle *this)
{
  AILookIdle::~AILookIdle(this);
  operator delete(this);
}


//======================================================================
// AILookIdle::shouldExecute(void)
// address: 0x00303CC8   size: 0x18 (24 bytes)
//======================================================================
bool __fastcall AILookIdle::shouldExecute(AILookIdle *this)
{
  return GenRandomFloat() < 0.02;
}


//======================================================================
// AILookIdle::startExecuting(void)
// address: 0x00303CE8   size: 0x48 (72 bytes)
//======================================================================
double __fastcall AILookIdle::startExecuting(AILookIdle *this)
{
  double v2; // r4
  double result; // r0

  *((_DWORD *)this + 4) = GenRandomInt(20, 39);
  v2 = GenRandomFloat() * 6.2831852;
  *((double *)this + 3) = j_cos(v2) * 100.0;
  result = j_sin(v2) * 100.0;
  *((double *)this + 4) = result;
  return result;
}


//======================================================================
// AILookIdle::updateTask(void)
// address: 0x00303D40   size: 0x6E (110 bytes)
//======================================================================
int __fastcall AILookIdle::updateTask(AILookIdle *this)
{
  _DWORD *v1; // r5
  int *v2; // r3
  int v4; // r7
  int v5; // r6
  int v6; // r5
  int v7; // r0
  ClientActor *v8; // r4
  int v9; // r7
  int v10; // r0
  int v12; // [sp+Ch] [bp-8h]

  v1 = *((_DWORD **)this + 3);
  --*((_DWORD *)this + 4);
  v2 = (int *)v1[17];
  v4 = v2[10];
  v12 = v2[9];
  v5 = (int)((double)v2[8] + *((double *)this + 3));
  v6 = v12 + (*(int (__fastcall **)(_DWORD *))(*v1 + 124))(v1);
  v7 = (int)((double)v4 + *((double *)this + 4));
  v8 = *((ClientActor **)this + 3);
  v9 = v7;
  v10 = (*(int (__fastcall **)(ClientActor *))(*(_DWORD *)v8 + 120))(v8);
  return ClientActor::setLookPosition(v8, v5, v6, v9, 1092616192, COERCE_INT((float)v10));
}


//======================================================================
// AILookIdle::AILookIdle(ClientActor *)
// address: 0x00303DB8   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN10AILookIdleC2EP11ClientActor'
void __fastcall AILookIdle::AILookIdle(AILookIdle *this, ClientActor *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_4633B0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 2) = 3;
}

