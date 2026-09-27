// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AISwimming

//======================================================================
// AISwimming::~AISwimming()
// address: 0x003042BC   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN10AISwimmingD1Ev'
void __fastcall AISwimming::~AISwimming(AISwimming *this)
{
  *(_DWORD *)this = &off_463420;
  AIBase::~AIBase(this);
}


//======================================================================
// AISwimming::~AISwimming()
// address: 0x003042D8   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AISwimming::~AISwimming(AISwimming *this)
{
  AISwimming::~AISwimming(this);
  operator delete(this);
}


//======================================================================
// AISwimming::updateTask(void)
// address: 0x003042F0   size: 0x20 (32 bytes)
//======================================================================
_DWORD *__fastcall AISwimming::updateTask(ClientActor **this)
{
  _DWORD *result; // r0

  result = (_DWORD *)(GenRandomFloat() < 0.8);
  if ( result != nullptr )
    return ClientActor::jumpOnce(*(this + 3));
  return result;
}


//======================================================================
// AISwimming::shouldExecute(void)
// address: 0x00304318   size: 0x1A (26 bytes)
//======================================================================
int __fastcall AISwimming::shouldExecute(ClientActor **this)
{
  int v2; // r3
  int result; // r0

  v2 = ClientActor::isInWater(*(this + 3));
  result = 1;
  if ( v2 == 0 )
    return ClientActor::handleLavaMovement((ActorLocoMotion **)*(this + 3));
  return result;
}


//======================================================================
// AISwimming::AISwimming(ClientActor *)
// address: 0x00304334   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN10AISwimmingC2EP11ClientActor'
void __fastcall AISwimming::AISwimming(AISwimming *this, ClientActor *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_463420;
  *((_DWORD *)this + 2) = 4;
  *((_BYTE *)a2 + 117) = 1;
}

