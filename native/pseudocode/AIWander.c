// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIWander

//======================================================================
// AIWander::resetTask(void)
// address: 0x0030269C   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIWander::resetTask(AIWander *this)
{
  ;
}


//======================================================================
// AIWander::~AIWander()
// address: 0x003026A0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN8AIWanderD1Ev'
void __fastcall AIWander::~AIWander(AIWander *this)
{
  *(_DWORD *)this = &off_463038;
  AIBase::~AIBase(this);
}


//======================================================================
// AIWander::~AIWander()
// address: 0x003026BC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIWander::~AIWander(AIWander *this)
{
  AIWander::~AIWander(this);
  operator delete(this);
}


//======================================================================
// AIWander::continueExecuting(void)
// address: 0x003026CE   size: 0x16 (22 bytes)
//======================================================================
int __fastcall AIWander::continueExecuting(AIWander *this)
{
  return (unsigned __int8)NavigationPath::noPath(*(NavigationPath **)(*((_DWORD *)this + 3) + 136)) ^ 1;
}


//======================================================================
// AIWander::startExecuting(void)
// address: 0x003026E4   size: 0x1A (26 bytes)
//======================================================================
int __fastcall AIWander::startExecuting(AIWander *this)
{
  int v2; // [sp+0h] [bp-8h]

  NavigationPath::tryMoveToXYZ(
    *(ClientActor ***)(*((_DWORD *)this + 3) + 136),
    *((_DWORD *)this + 4),
    *((_DWORD *)this + 5),
    *((_DWORD *)this + 6),
    *((float *)this + 7));
  return v2;
}


//======================================================================
// AIWander::shouldExecute(void)
// address: 0x003026FE   size: 0x2A (42 bytes)
//======================================================================
const void *__fastcall AIWander::shouldExecute(AIWander *this)
{
  int v2; // r0
  int v3; // r3

  v2 = GenRandomInt(0, 119);
  v3 = 0;
  if ( v2 == 0 )
    return ActorLocoMotion::findRandTargetBlock(
             *(ActorLocoMotion **)(*((_DWORD *)this + 3) + 68),
             (AIWander *)((char *)this + 16),
             10,
             7,
             nullptr);
  return (const void *)v3;
}


//======================================================================
// AIWander::AIWander(ClientActor *,float)
// address: 0x00302728   size: 0x18 (24 bytes)
//======================================================================
// Alternative name is '_ZN8AIWanderC2EP11ClientActorf'
void __fastcall AIWander::AIWander(AIWander *this, ClientActor *a2, float a3)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  *((float *)this + 7) = a3;
  *(_DWORD *)this = &off_463038;
  *((_DWORD *)this + 2) = 1;
}

