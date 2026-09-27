// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: OrbLocoMotion

//======================================================================
// OrbLocoMotion::~OrbLocoMotion()
// address: 0x002E9EF0   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN13OrbLocoMotionD1Ev'
void __fastcall OrbLocoMotion::~OrbLocoMotion(OrbLocoMotion *this)
{
  *(_DWORD *)this = &off_461D60;
  ActorLocoMotion::~ActorLocoMotion(this);
}


//======================================================================
// OrbLocoMotion::~OrbLocoMotion()
// address: 0x002E9F0C   size: 0x12 (18 bytes)
//======================================================================
void __fastcall OrbLocoMotion::~OrbLocoMotion(OrbLocoMotion *this)
{
  OrbLocoMotion::~OrbLocoMotion(this);
  operator delete(this);
}


//======================================================================
// OrbLocoMotion::OrbLocoMotion(ActorExpOrb *)
// address: 0x002EA090   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN13OrbLocoMotionC1EP11ActorExpOrb'
void __fastcall OrbLocoMotion::OrbLocoMotion(OrbLocoMotion *this, ActorExpOrb *a2)
{
  ActorLocoMotion::ActorLocoMotion(this, a2);
  *(_DWORD *)this = &off_461D60;
  *((_DWORD *)this + 6) = 25;
  *((_DWORD *)this + 5) = 25;
  *((_DWORD *)this + 7) = 12;
}


//======================================================================
// OrbLocoMotion::tick(void)
// address: 0x002EA2DC   size: 0x72 (114 bytes)
//======================================================================
float __fastcall OrbLocoMotion::tick(OrbLocoMotion *this)
{
  float result; // r0
  int v3; // r5

  result = ActorLocoMotion::tick(*(float *)&this);
  if ( *(int *)(*((_DWORD *)this + 28) + 24) < 0 )
  {
    *((float *)this + 19) = *((float *)this + 19) - 4.0;
    *((_BYTE *)this + 138) = ActorLocoMotion::pushOutOfBlocks((World **)this, (OrbLocoMotion *)((char *)this + 32));
    v3 = *((_DWORD *)this + 19);
    ActorLocoMotion::doMoveStep(this, (OrbLocoMotion *)((char *)this + 72));
    *((float *)this + 18) = *((float *)this + 18) * 0.8;
    *((float *)this + 19) = *((float *)this + 19) * 0.8;
    result = *((float *)this + 20) * 0.8;
    *((float *)this + 20) = result;
    if ( *((_BYTE *)this + 124) != 0 )
    {
      result = COERCE_FLOAT(v3 + 0x80000000) * 0.5;
      *((float *)this + 19) = result;
    }
  }
  return result;
}

