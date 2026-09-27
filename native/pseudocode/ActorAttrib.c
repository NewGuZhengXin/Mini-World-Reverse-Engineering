// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: ActorAttrib

//======================================================================
// ActorAttrib::getMoveSpeed(void)
// address: 0x00269694   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorAttrib::getMoveSpeed(ActorAttrib *this)
{
  return 0;
}


//======================================================================
// ActorAttrib::getSpeedInAir(void)
// address: 0x00269698   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorAttrib::getSpeedInAir(ActorAttrib *this)
{
  return 0;
}


//======================================================================
// ActorAttrib::getFlySpeed(void)
// address: 0x0026969C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall ActorAttrib::getFlySpeed(ActorAttrib *this)
{
  return 0;
}


//======================================================================
// ActorAttrib::~ActorAttrib()
// address: 0x002696AC   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN11ActorAttribD1Ev'
void __fastcall ActorAttrib::~ActorAttrib(ActorAttrib *this)
{
  *(_DWORD *)this = &off_45BD30;
}


//======================================================================
// ActorAttrib::revive(void)
// address: 0x002696BC   size: 0xA (10 bytes)
//======================================================================
_DWORD *__fastcall ActorAttrib::revive(_DWORD *this)
{
  *(this + 2) = *(this + 3);
  *(this + 4) = 0;
  return this;
}


//======================================================================
// ActorAttrib::onDie(void)
// address: 0x002696C8   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall ActorAttrib::onDie(_DWORD *this)
{
  *(this + 2) = -1082130432;
  *(this + 4) = 0;
  *(this + 6) = 0;
  *(this + 7) = 0;
  return this;
}


//======================================================================
// ActorAttrib::attackedFrom(OneAttackData &)
// address: 0x002696DC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall ActorAttrib::attackedFrom(int a1, int a2)
{
  float v2; // r5

  v2 = *(float *)(a2 + 4);
  if ( v2 == 0.0 )
    v2 = 1.0;
  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)a1 + 36))(a1, LODWORD(v2) + 0x80000000);
  *(_DWORD *)(a2 + 24) = 0;
  *(_DWORD *)(a2 + 20) = 0;
  return 1;
}


//======================================================================
// ActorAttrib::~ActorAttrib()
// address: 0x002697E4   size: 0x12 (18 bytes)
//======================================================================
void __fastcall ActorAttrib::~ActorAttrib(ActorAttrib *this)
{
  ActorAttrib::~ActorAttrib(this);
  operator delete(this);
}


//======================================================================
// ActorAttrib::tick(void)
// address: 0x002697F6   size: 0x72 (114 bytes)
//======================================================================
int __fastcall ActorAttrib::tick(ActorAttrib *this)
{
  int result; // r0
  int v3; // r3
  int v4; // r1
  int v5; // r3
  int v6; // r3

  result = *((float *)this + 2) <= 0.0;
  v3 = result;
  if ( result != 0 )
    return result;
  result = *((_DWORD *)this + 4);
  if ( result > 0 )
  {
    if ( *((_BYTE *)this + 20) != 0 )
    {
      result -= 4;
      if ( result >= 0 )
      {
        *((_DWORD *)this + 4) = result;
LABEL_10:
        if ( *((_DWORD *)this + 4) == 0 )
        {
          result = *(_DWORD *)(*((_DWORD *)this + 1) + 64);
          if ( result != 0 )
            result = ActorBody::stopEffect(result, 2);
        }
        goto LABEL_13;
      }
    }
    else
    {
      v4 = result % 20;
      result /= 20;
      if ( v4 == 0 )
        result = ClientActor::attackedFromType(*((_DWORD *)this + 1), 3, 1065353216, 0);
      v3 = *((_DWORD *)this + 4) - 1;
    }
    *((_DWORD *)this + 4) = v3;
    goto LABEL_10;
  }
LABEL_13:
  v5 = *((_DWORD *)this + 6);
  if ( v5 > 0 )
  {
    v6 = v5 - 1;
    *((_DWORD *)this + 6) = v6;
    if ( v6 == 10 )
    {
      result = *(_DWORD *)(*((_DWORD *)this + 1) + 64);
      if ( result != 0 )
        return ActorBody::stopEffect(result, 0);
    }
  }
  return result;
}


//======================================================================
// ActorAttrib::addHP(float)
// address: 0x0026990C   size: 0x42 (66 bytes)
//======================================================================
int __fastcall ActorAttrib::addHP(ActorAttrib *this, float a2)
{
  float v3; // r0
  float v4; // r5
  int result; // r0

  v3 = a2 + *((float *)this + 2);
  v4 = *((float *)this + 3);
  *((float *)this + 2) = v3;
  if ( v3 > v4 )
    *((float *)this + 2) = v4;
  if ( *((float *)this + 2) < 0.0 )
    *((_DWORD *)this + 2) = 0;
  result = *((float *)this + 2) == 0.0;
  if ( *((float *)this + 2) == 0.0 )
    return (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 1) + 104))(*((_DWORD *)this + 1));
  return result;
}


//======================================================================
// ActorAttrib::ActorAttrib(ClientActor *)
// address: 0x00269B04   size: 0x22 (34 bytes)
//======================================================================
// Alternative name is '_ZN11ActorAttribC1EP11ClientActor'
int __fastcall ActorAttrib::ActorAttrib(int result, int a2)
{
  *(_DWORD *)(result + 4) = a2;
  *(_DWORD *)(result + 28) = 0;
  *(_DWORD *)result = &off_45BD30;
  *(_DWORD *)(result + 12) = 1065353216;
  *(_DWORD *)(result + 8) = 1065353216;
  *(_DWORD *)(result + 16) = 0;
  *(_BYTE *)(result + 20) = 0;
  *(_DWORD *)(result + 24) = 0;
  return result;
}


//======================================================================
// ActorAttrib::setFireSeconds(int)
// address: 0x00269B2C   size: 0x44 (68 bytes)
//======================================================================
int __fastcall ActorAttrib::setFireSeconds(int this, int a2)
{
  int v2; // r4
  int v4; // r3
  int v5; // r5

  v2 = this;
  v4 = *(_DWORD *)(this + 16);
  if ( a2 > 0 )
  {
    if ( v4 == 0 )
    {
      this = *(_DWORD *)(*(_DWORD *)(this + 4) + 64);
      if ( this != 0 )
        this = ActorBody::playEffect(this, 2);
    }
    v5 = 20 * a2;
    if ( *(_DWORD *)(v2 + 16) < v5 )
      *(_DWORD *)(v2 + 16) = v5;
  }
  else
  {
    if ( v4 > 0 )
    {
      this = *(_DWORD *)(*(_DWORD *)(this + 4) + 64);
      if ( this != 0 )
        this = ActorBody::stopEffect(this, 2);
    }
    *(_DWORD *)(v2 + 16) = 0;
  }
  return this;
}

