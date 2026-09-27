// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AISit

//======================================================================
// AISit::resetTask(void)
// address: 0x00301F1E   size: 0xA (10 bytes)
//======================================================================
int __fastcall AISit::resetTask(int this)
{
  *(_BYTE *)(*(_DWORD *)(this + 12) + 121) = 0;
  return this;
}


//======================================================================
// AISit::~AISit()
// address: 0x00301F28   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN5AISitD1Ev'
void __fastcall AISit::~AISit(AISit *this)
{
  *(_DWORD *)this = &off_462F20;
  AIBase::~AIBase(this);
}


//======================================================================
// AISit::~AISit()
// address: 0x00301F44   size: 0x12 (18 bytes)
//======================================================================
void __fastcall AISit::~AISit(AISit *this)
{
  AISit::~AISit(this);
  operator delete(this);
}


//======================================================================
// AISit::startExecuting(void)
// address: 0x00301F56   size: 0x18 (24 bytes)
//======================================================================
int __fastcall AISit::startExecuting(AISit *this)
{
  int result; // r0

  result = NavigationPath::clearPathEntity(*(_DWORD *)(*((_DWORD *)this + 3) + 136));
  *(_BYTE *)(*((_DWORD *)this + 3) + 121) = 1;
  return result;
}


//======================================================================
// AISit::shouldExecute(void)
// address: 0x00301F70   size: 0x58 (88 bytes)
//======================================================================
int __fastcall AISit::shouldExecute(AISit *this)
{
  ClientActor *v2; // r0
  int v3; // r5
  _BYTE *v4; // r5
  int v5; // r7
  ClientActor *TamedOwner; // r5

  v2 = *((ClientActor **)this + 3);
  v3 = *((_DWORD *)v2 + 17);
  if ( *((_DWORD *)v2 + 31) == 0 )
    return 0;
  if ( ClientActor::isInWater(v2) != 0 )
    return 0;
  v4 = (_BYTE *)(v3 + 124);
  v5 = (unsigned __int8)*v4;
  if ( *v4 == 0 )
    return 0;
  TamedOwner = ClientActor::getTamedOwner(*((ClientActor **)this + 3));
  if ( TamedOwner != nullptr )
  {
    if ( ClientActor::getDistanceSqToEntity((ClientActor *)*((_DWORD *)this + 3), TamedOwner) < 1440000.0
      && ClientActor::getBeHurtTarget(TamedOwner) != 0 )
    {
      return 0;
    }
    else
    {
      return *(unsigned __int8 *)(*((_DWORD *)this + 3) + 122);
    }
  }
  return v5;
}


//======================================================================
// AISit::AISit(ClientActor *)
// address: 0x00301FD0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN5AISitC2EP11ClientActor'
void __fastcall AISit::AISit(AISit *this, ClientActor *a2)
{
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 3) = a2;
  *(_DWORD *)this = &off_462F20;
  *((_DWORD *)this + 2) = 5;
}

