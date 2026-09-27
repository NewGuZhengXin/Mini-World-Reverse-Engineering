// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIPanic

//======================================================================
// AIPanic::resetTask(void)
// address: 0x00303BD0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIPanic::resetTask(AIPanic *this)
{
  ;
}


//======================================================================
// AIPanic::~AIPanic()
// address: 0x00303BD4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN7AIPanicD1Ev'
void __fastcall AIPanic::~AIPanic(AIPanic *this)
{
  *(_DWORD *)this = &off_463378;
  AIBase::~AIBase(this);
}


//======================================================================
// AIPanic::~AIPanic()
// address: 0x00303BF0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIPanic::~AIPanic(AIPanic *this)
{
  AIPanic::~AIPanic(this);
  operator delete(this);
}


//======================================================================
// AIPanic::continueExecuting(void)
// address: 0x00303C02   size: 0x16 (22 bytes)
//======================================================================
int __fastcall AIPanic::continueExecuting(AIPanic *this)
{
  return (unsigned __int8)NavigationPath::noPath(*(NavigationPath **)(*((_DWORD *)this + 3) + 136)) ^ 1;
}


//======================================================================
// AIPanic::startExecuting(void)
// address: 0x00303C18   size: 0x1A (26 bytes)
//======================================================================
int __fastcall AIPanic::startExecuting(AIPanic *this)
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
// AIPanic::shouldExecute(void)
// address: 0x00303C32   size: 0x3A (58 bytes)
//======================================================================
const void *__fastcall AIPanic::shouldExecute(AIPanic *this)
{
  const void *result; // r0

  if ( ClientActor::getBeHurtTarget(*((ClientActor **)this + 3)) != 0
    && *(_DWORD *)(*((_DWORD *)this + 3) + 4) - *(_DWORD *)(*((_DWORD *)this + 3) + 104) <= 100 )
  {
    return ActorLocoMotion::findRandTargetBlock(
             *(ActorLocoMotion **)(*((_DWORD *)this + 3) + 68),
             (AIPanic *)((char *)this + 16),
             5,
             4,
             nullptr);
  }
  result = (const void *)ClientActor::isBurning(*((ClientActor **)this + 3));
  if ( result != nullptr )
    return ActorLocoMotion::findRandTargetBlock(
             *(ActorLocoMotion **)(*((_DWORD *)this + 3) + 68),
             (AIPanic *)((char *)this + 16),
             5,
             4,
             nullptr);
  return result;
}


//======================================================================
// AIPanic::AIPanic(ClientActor *,float)
// address: 0x00303C6C   size: 0x18 (24 bytes)
//======================================================================
// Alternative name is '_ZN7AIPanicC2EP11ClientActorf'
void __fastcall AIPanic::AIPanic(AIPanic *this, ClientActor *a2, float a3)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  *((float *)this + 7) = a3;
  *(_DWORD *)this = &off_463378;
  *((_DWORD *)this + 2) = 1;
}

