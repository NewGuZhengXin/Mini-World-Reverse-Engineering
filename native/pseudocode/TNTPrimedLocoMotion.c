// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: TNTPrimedLocoMotion

//======================================================================
// TNTPrimedLocoMotion::~TNTPrimedLocoMotion()
// address: 0x002CCBE4   size: 0x16 (22 bytes)
//======================================================================
// Alternative name is '_ZN19TNTPrimedLocoMotionD1Ev'
void __fastcall TNTPrimedLocoMotion::~TNTPrimedLocoMotion(TNTPrimedLocoMotion *this)
{
  *(_DWORD *)this = &off_45FB78;
  ActorLocoMotion::~ActorLocoMotion(this);
}


//======================================================================
// TNTPrimedLocoMotion::~TNTPrimedLocoMotion()
// address: 0x002CCC00   size: 0x12 (18 bytes)
//======================================================================
void __fastcall TNTPrimedLocoMotion::~TNTPrimedLocoMotion(TNTPrimedLocoMotion *this)
{
  TNTPrimedLocoMotion::~TNTPrimedLocoMotion(this);
  operator delete(this);
}


//======================================================================
// TNTPrimedLocoMotion::TNTPrimedLocoMotion(ClientActor *)
// address: 0x002CCD4C   size: 0x20 (32 bytes)
//======================================================================
// Alternative name is '_ZN19TNTPrimedLocoMotionC1EP11ClientActor'
void __fastcall TNTPrimedLocoMotion::TNTPrimedLocoMotion(TNTPrimedLocoMotion *this, ClientActor *a2)
{
  ActorLocoMotion::ActorLocoMotion(this, a2);
  *(_DWORD *)this = &off_45FB78;
  *((_DWORD *)this + 6) = 98;
  *((_DWORD *)this + 5) = 98;
  *((_DWORD *)this + 7) = 49;
}


//======================================================================
// TNTPrimedLocoMotion::tick(void)
// address: 0x002CCF28   size: 0x6E (110 bytes)
//======================================================================
float __fastcall TNTPrimedLocoMotion::tick(TNTPrimedLocoMotion *this)
{
  float v2; // r0
  float v3; // r7
  float v4; // r0
  float v5; // r5
  float result; // r0

  ActorLocoMotion::tick(this);
  *((float *)this + 19) = *((float *)this + 19) - 4.0;
  ActorLocoMotion::doMoveStep(this, (TNTPrimedLocoMotion *)((char *)this + 72));
  v2 = *((float *)this + 18) * 0.98;
  *((float *)this + 18) = v2;
  v3 = v2;
  v4 = *((float *)this + 19) * 0.98;
  *((float *)this + 19) = v4;
  v5 = v4;
  result = *((float *)this + 20) * 0.98;
  *((float *)this + 20) = result;
  if ( *((_BYTE *)this + 124) != 0 )
  {
    *((float *)this + 18) = v3 * 0.7;
    *((float *)this + 20) = result * 0.7;
    *((float *)this + 19) = v5 * -0.5;
    return v5 * -0.5;
  }
  return result;
}

