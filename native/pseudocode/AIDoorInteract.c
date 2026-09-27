// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AIDoorInteract

//======================================================================
// AIDoorInteract::startExecuting(void)
// address: 0x00302230   size: 0x20 (32 bytes)
//======================================================================
int __fastcall AIDoorInteract::startExecuting(int this)
{
  int v1; // r3
  int v2; // r2

  *(_BYTE *)(this + 32) = 0;
  v1 = *(_DWORD *)(*(_DWORD *)(this + 12) + 68);
  v2 = *(_DWORD *)(v1 + 40);
  *(_DWORD *)(this + 36) = *(_DWORD *)(this + 20) + 50 - *(_DWORD *)(v1 + 32);
  *(_DWORD *)(this + 40) = *(_DWORD *)(this + 28) + 50 - v2;
  return this;
}


//======================================================================
// AIDoorInteract::updateTask(void)
// address: 0x00302250   size: 0x2A (42 bytes)
//======================================================================
_DWORD *__fastcall AIDoorInteract::updateTask(_DWORD *this)
{
  if ( (*(this + 5) + 50 - *(_DWORD *)(*(_DWORD *)(*(this + 3) + 68) + 32)) * *(this + 9)
     + (*(this + 7) + 50 - *(_DWORD *)(*(_DWORD *)(*(this + 3) + 68) + 40)) * *(this + 10) < 0 )
  {
    this = (_DWORD *)((char *)this + 1);
    *((_BYTE *)this + 31) = 1;
  }
  return this;
}


//======================================================================
// AIDoorInteract::~AIDoorInteract()
// address: 0x0030227C   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN14AIDoorInteractD1Ev'
void __fastcall AIDoorInteract::~AIDoorInteract(AIDoorInteract *this)
{
  *(_DWORD *)this = &off_462F90;
  AIBase::~AIBase(this);
}


//======================================================================
// AIDoorInteract::~AIDoorInteract()
// address: 0x00302298   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AIDoorInteract::~AIDoorInteract(AIDoorInteract *this)
{
  AIDoorInteract::~AIDoorInteract(this);
  operator delete(this);
}


//======================================================================
// AIDoorInteract::AIDoorInteract(ClientActor *)
// address: 0x003022AC   size: 0x1E (30 bytes)
//======================================================================
// Alternative name is '_ZN14AIDoorInteractC1EP11ClientActor'
void __fastcall AIDoorInteract::AIDoorInteract(AIDoorInteract *this, ClientActor *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_462F90;
  *((_DWORD *)this + 4) = 0;
  *((_BYTE *)this + 32) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 10) = 0;
}


//======================================================================
// AIDoorInteract::findUsableDoor(WCoord &)
// address: 0x003022D0   size: 0x48 (72 bytes)
//======================================================================
__int16 *__fastcall AIDoorInteract::findUsableDoor(AIDoorInteract *this, WCoord *a2)
{
  World *v3; // r5
  unsigned int v4; // r7
  unsigned int v5; // r6
  int v6; // r2
  int v7; // r3
  __int16 *result; // r0
  _DWORD v9[4]; // [sp+4h] [bp-10h] BYREF

  v3 = *(World **)(*((_DWORD *)this + 3) + 52);
  v4 = CoordDivBlock(*(_DWORD *)a2);
  v5 = CoordDivBlock(*((_DWORD *)a2 + 1));
  v9[2] = CoordDivBlock(*((_DWORD *)a2 + 2));
  v9[0] = v4;
  v9[1] = v5;
  result = World::getBlock(v3, (const WCoord *)v9, v6, v7);
  if ( result != nullptr )
    return (*result & 0xFFF) == 812 ? result : nullptr;
  return result;
}


//======================================================================
// AIDoorInteract::continueExecuting(void)
// address: 0x0030231C   size: 0x1C (28 bytes)
//======================================================================
__int16 *__fastcall AIDoorInteract::continueExecuting(AIDoorInteract *this)
{
  __int16 *result; // r0

  result = AIDoorInteract::findUsableDoor(this, (AIDoorInteract *)((char *)this + 20));
  *((_DWORD *)this + 4) = result;
  if ( result != nullptr )
    return (__int16 *)(*((unsigned __int8 *)this + 32) ^ 1);
  return result;
}


//======================================================================
// AIDoorInteract::shouldExecute(void)
// address: 0x00302338   size: 0xA6 (166 bytes)
//======================================================================
bool __fastcall AIDoorInteract::shouldExecute(AIDoorInteract *this)
{
  int v1; // r3
  int v3; // r6
  int Path; // r0
  _DWORD *v5; // r5
  int v6; // r7
  _BYTE *v7; // r3
  int v8; // r3
  _DWORD *v9; // r2
  int v10; // r12
  int v11; // r3
  __int16 *UsableDoor; // r0
  _DWORD *v13; // r3
  int v14; // r0
  int v15; // r2
  int v16; // r3
  __int16 *v17; // r0

  v1 = *((_DWORD *)this + 3);
  if ( *(_BYTE *)(*(_DWORD *)(v1 + 68) + 136) == 0 )
    return false;
  Path = NavigationPath::getPath(*(NavigationPath **)(v1 + 136));
  v5 = (_DWORD *)Path;
  if ( Path == 0 )
    return false;
  if ( *(_DWORD *)(Path + 12) >= *(_DWORD *)(Path + 16) )
    return false;
  v6 = 0;
  v7 = (_BYTE *)(*((_DWORD *)this + 3) + 119);
  v3 = (unsigned __int8)*v7;
  if ( *v7 == 0 )
    return false;
  while ( 1 )
  {
    v8 = v5[3] + 2;
    if ( v8 > v5[4] )
      v8 = v5[4];
    if ( v6 >= v8 )
      break;
    v9 = (_DWORD *)(*v5 + 12 * v6);
    v10 = 100 * v9[1];
    v11 = 100 * *v9;
    *((_DWORD *)this + 7) = 100 * v9[2];
    *((_DWORD *)this + 5) = v11;
    *((_DWORD *)this + 6) = v10;
    UsableDoor = AIDoorInteract::findUsableDoor(this, (AIDoorInteract *)((char *)this + 20));
    *((_DWORD *)this + 4) = UsableDoor;
    if ( UsableDoor != nullptr )
      return v3;
    ++v6;
  }
  v13 = *(_DWORD **)(*((_DWORD *)this + 3) + 68);
  v14 = v13[8];
  v15 = v13[9];
  v16 = v13[10];
  *((_DWORD *)this + 5) = v14;
  *((_DWORD *)this + 6) = v15;
  *((_DWORD *)this + 7) = v16;
  v17 = AIDoorInteract::findUsableDoor(this, (AIDoorInteract *)((char *)this + 20));
  *((_DWORD *)this + 4) = v17;
  return v17 != nullptr;
}

