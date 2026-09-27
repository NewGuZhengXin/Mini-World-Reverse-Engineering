// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIBreakDoor

//======================================================================
// AIBreakDoor::resetTask(void)
// address: 0x00302E40   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall AIBreakDoor::resetTask(AIBreakDoor *this)
{
  __int64 v2; // [sp+0h] [bp-8h]

  LODWORD(v2) = (char *)this + 20;
  HIDWORD(v2) = -1;
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(*((_DWORD *)this + 3) + 52) + 16))(
    *(_DWORD *)(*((_DWORD *)this + 3) + 52),
    *(_DWORD *)(*((_DWORD *)this + 3) + 52),
    *(_DWORD *)(*((_DWORD *)this + 3) + 40),
    *(_DWORD *)(*((_DWORD *)this + 3) + 44));
  return v2;
}


//======================================================================
// AIBreakDoor::~AIBreakDoor()
// address: 0x00302E60   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN11AIBreakDoorD1Ev'
void __fastcall AIBreakDoor::~AIBreakDoor(AIBreakDoor *this)
{
  *(_DWORD *)this = &off_463150;
  AIDoorInteract::~AIDoorInteract(this);
}


//======================================================================
// AIBreakDoor::~AIBreakDoor()
// address: 0x00302E7C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIBreakDoor::~AIBreakDoor(AIBreakDoor *this)
{
  AIBreakDoor::~AIBreakDoor(this);
  operator delete(this);
}


//======================================================================
// AIBreakDoor::startExecuting(void)
// address: 0x00302E8E   size: 0xE (14 bytes)
//======================================================================
int __fastcall AIBreakDoor::startExecuting(AIBreakDoor *this)
{
  int result; // r0

  result = AIDoorInteract::startExecuting((int)this);
  *((_DWORD *)this + 11) = 0;
  return result;
}


//======================================================================
// AIBreakDoor::continueExecuting(void)
// address: 0x00302EA0   size: 0x6A (106 bytes)
//======================================================================
__int16 *__fastcall AIBreakDoor::continueExecuting(AIBreakDoor *this)
{
  double DistanceSq; // r4
  __int16 *result; // r0
  __int16 *v4; // r3

  DistanceSq = ClientActor::getDistanceSq(
                 (ClientActor *)*((_DWORD *)this + 3),
                 (double)*((int *)this + 5),
                 (double)*((int *)this + 6),
                 (double)*((int *)this + 7));
  result = AIDoorInteract::findUsableDoor(this, (AIBreakDoor *)((char *)this + 20));
  v4 = result;
  *((_DWORD *)this + 4) = result;
  if ( result != nullptr )
  {
    result = nullptr;
    if ( *((int *)this + 11) <= 240 && (unsigned __int16)*v4 >> 15 == 0 )
      return (__int16 *)(DistanceSq < 40000.0);
  }
  return result;
}


//======================================================================
// AIBreakDoor::shouldExecute(void)
// address: 0x00302F18   size: 0x2C (44 bytes)
//======================================================================
int __fastcall AIBreakDoor::shouldExecute(AIBreakDoor *this)
{
  int isCreativeMode; // r5
  int result; // r0

  isCreativeMode = World::isCreativeMode(*(World **)(*((_DWORD *)this + 3) + 52));
  result = 0;
  if ( isCreativeMode == 0 )
  {
    if ( AIDoorInteract::shouldExecute(this) )
      return (**((unsigned __int16 **)this + 4) >> 15) ^ 1;
    return isCreativeMode;
  }
  return result;
}


//======================================================================
// AIBreakDoor::updateTask(void)
// address: 0x00302F44   size: 0x7A (122 bytes)
//======================================================================
int __fastcall AIBreakDoor::updateTask(AIBreakDoor *this)
{
  int v2; // r0
  int result; // r0
  int v4; // r1
  int v5; // r3
  World *v6; // r5
  unsigned int v7; // r7
  unsigned int v8; // r6
  _DWORD v9[4]; // [sp+Ch] [bp-10h] BYREF

  AIDoorInteract::updateTask(this);
  GenRandomInt(0, 19);
  v2 = *((_DWORD *)this + 11) + 1;
  *((_DWORD *)this + 11) = v2;
  result = v2 / 240;
  v4 = 10 * result;
  if ( 10 * result != *((_DWORD *)this + 12) )
  {
    v5 = *((_DWORD *)this + 3);
    *((_DWORD *)this + 12) = v4;
    result = (*(int (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, char *, int))(**(_DWORD **)(v5 + 52) + 16))(
               *(_DWORD *)(v5 + 52),
               *(_DWORD *)(**(_DWORD **)(v5 + 52) + 16),
               *(_DWORD *)(v5 + 40),
               *(_DWORD *)(v5 + 44),
               (char *)this + 20,
               v4);
  }
  if ( *((_DWORD *)this + 11) == 240 )
  {
    v6 = *(World **)(*((_DWORD *)this + 3) + 52);
    v7 = CoordDivBlock(*((_DWORD *)this + 5));
    v8 = CoordDivBlock(*((_DWORD *)this + 6));
    v9[2] = CoordDivBlock(*((_DWORD *)this + 7));
    v9[1] = v8;
    v9[0] = v7;
    return World::setBlockAll(v6, (const WCoord *)v9, 0, 0, 3);
  }
  return result;
}


//======================================================================
// AIBreakDoor::AIBreakDoor(ClientActor *)
// address: 0x00302FC0   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN11AIBreakDoorC2EP11ClientActor'
void __fastcall AIBreakDoor::AIBreakDoor(AIBreakDoor *this, ClientActor *a2)
{
  AIDoorInteract::AIDoorInteract(this, a2);
  *(_DWORD *)this = &off_463150;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = -1;
}

