// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIMoveTowardsRestriction

//======================================================================
// AIMoveTowardsRestriction::resetTask(void)
// address: 0x00303B12   size: 0x2 (2 bytes)
//======================================================================
void __fastcall AIMoveTowardsRestriction::resetTask(AIMoveTowardsRestriction *this)
{
  ;
}


//======================================================================
// AIMoveTowardsRestriction::~AIMoveTowardsRestriction()
// address: 0x00303B14   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN24AIMoveTowardsRestrictionD1Ev'
void __fastcall AIMoveTowardsRestriction::~AIMoveTowardsRestriction(AIMoveTowardsRestriction *this)
{
  *(_DWORD *)this = &off_463340;
  AIBase::~AIBase(this);
}


//======================================================================
// AIMoveTowardsRestriction::~AIMoveTowardsRestriction()
// address: 0x00303B30   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIMoveTowardsRestriction::~AIMoveTowardsRestriction(AIMoveTowardsRestriction *this)
{
  AIMoveTowardsRestriction::~AIMoveTowardsRestriction(this);
  operator delete(this);
}


//======================================================================
// AIMoveTowardsRestriction::continueExecuting(void)
// address: 0x00303B42   size: 0x16 (22 bytes)
//======================================================================
int __fastcall AIMoveTowardsRestriction::continueExecuting(AIMoveTowardsRestriction *this)
{
  return (unsigned __int8)NavigationPath::noPath(*(NavigationPath **)(*((_DWORD *)this + 3) + 136)) ^ 1;
}


//======================================================================
// AIMoveTowardsRestriction::startExecuting(void)
// address: 0x00303B58   size: 0x1A (26 bytes)
//======================================================================
int __fastcall AIMoveTowardsRestriction::startExecuting(AIMoveTowardsRestriction *this)
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
// AIMoveTowardsRestriction::shouldExecute(void)
// address: 0x00303B72   size: 0x40 (64 bytes)
//======================================================================
const void *__fastcall AIMoveTowardsRestriction::shouldExecute(ClientActor **this)
{
  _BOOL4 v2; // r3
  const void *result; // r0
  ActorLocoMotion *v4; // r0
  _DWORD v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = ClientActor::isInHomeDist(
         *(this + 3),
         *(_DWORD *)(*((_DWORD *)*(this + 3) + 17) + 32),
         *(_DWORD *)(*((_DWORD *)*(this + 3) + 17) + 36),
         *(_DWORD *)(*((_DWORD *)*(this + 3) + 17) + 40));
  result = nullptr;
  if ( !v2 )
  {
    v4 = *((ActorLocoMotion **)*(this + 3) + 17);
    v5[0] = *((_DWORD *)v4 + 11);
    v5[1] = *((_DWORD *)v4 + 12);
    v5[2] = *((_DWORD *)v4 + 13);
    return ActorLocoMotion::findRandTargetBlockTowards(v4, (WCoord *)(this + 4), 16, 7, (const WCoord *)v5);
  }
  return result;
}


//======================================================================
// AIMoveTowardsRestriction::AIMoveTowardsRestriction(ClientActor *,float)
// address: 0x00303BB4   size: 0x18 (24 bytes)
//======================================================================
// Alternative name is '_ZN24AIMoveTowardsRestrictionC2EP11ClientActorf'
void __fastcall AIMoveTowardsRestriction::AIMoveTowardsRestriction(
        AIMoveTowardsRestriction *this,
        ClientActor *a2,
        float a3)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  *((float *)this + 7) = a3;
  *(_DWORD *)this = &off_463340;
  *((_DWORD *)this + 2) = 1;
}

