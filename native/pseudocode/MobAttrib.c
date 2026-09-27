// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: MobAttrib

//======================================================================
// MobAttrib::getEquipItem(EQUIP_SLOT_TYPE)
// address: 0x00269730   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall MobAttrib::getEquipItem(int a1)
{
  _DWORD *result; // r0

  result = (_DWORD *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
  if ( result != nullptr )
  {
    result = (_DWORD *)result[1];
    if ( result != nullptr )
      return (_DWORD *)*result;
  }
  return result;
}


//======================================================================
// MobAttrib::getEquipGrid(EQUIP_SLOT_TYPE)
// address: 0x00269746   size: 0x10 (16 bytes)
//======================================================================
int __fastcall MobAttrib::getEquipGrid(int a1)
{
  int result; // r0

  result = *(_DWORD *)(a1 + 64);
  if ( result != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 8))(result);
  return result;
}


//======================================================================
// MobAttrib::getBasicAttackPoint(ATTACK_TYPE)
// address: 0x00269756   size: 0x36 (54 bytes)
//======================================================================
float __fastcall MobAttrib::getBasicAttackPoint(int a1, int a2)
{
  __int16 *v2; // r3
  __int16 *v3; // r3
  float result; // r0

  v2 = *(__int16 **)(a1 + 60);
  if ( a2 == v2[78] )
  {
    v3 = v2 + 79;
  }
  else if ( a2 == 3 )
  {
    v3 = v2 + 80;
  }
  else if ( a2 == 4 )
  {
    v3 = v2 + 81;
  }
  else
  {
    result = 0.0;
    if ( a2 != 5 )
      return result;
    v3 = v2 + 82;
  }
  return (float)*v3;
}


//======================================================================
// MobAttrib::dropEquipItems(void)
// address: 0x00269868   size: 0x3E (62 bytes)
//======================================================================
int __fastcall MobAttrib::dropEquipItems(ClientActor **this)
{
  int v1; // r5
  int result; // r0
  int v4; // r1

  v1 = 0;
  if ( *(this + 16) != nullptr )
  {
    do
    {
      v4 = (*((int (__fastcall **)(ClientActor **, int))*this + 11))(this, v1);
      if ( v4 > 0 )
        ClientActor::dropItem(*(this + 1), v4, 1);
      ++v1;
    }
    while ( v1 != 6 );
  }
  result = (int)*(this + 16);
  if ( result != 0 )
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
  *(this + 16) = nullptr;
  return result;
}


//======================================================================
// MobAttrib::damageEquipItem(EQUIP_SLOT_TYPE,int)
// address: 0x0026994E   size: 0x34 (52 bytes)
//======================================================================
int __fastcall MobAttrib::damageEquipItem(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r3

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
  if ( result != 0 && *(_DWORD *)(result + 4) != 0 )
  {
    v7 = *(_DWORD *)(result + 12);
    *(_DWORD *)(result + 12) = v7 - a3;
    if ( v7 - a3 <= 0 )
      return (*(int (__fastcall **)(int, int, _DWORD, int))(*(_DWORD *)a1 + 40))(a1, a2, 0, -1);
  }
  return result;
}


//======================================================================
// MobAttrib::getBasicArmorPoint(ATTACK_TYPE)
// address: 0x00269982   size: 0x2C (44 bytes)
//======================================================================
float __fastcall MobAttrib::getBasicArmorPoint(int a1, int a2)
{
  __int16 *v2; // r3

  switch ( a2 )
  {
    case 0:
      v2 = (__int16 *)(*(_DWORD *)(a1 + 60) + 150);
      return (float)*v2;
    case 1:
      v2 = (__int16 *)(*(_DWORD *)(a1 + 60) + 152);
      return (float)*v2;
    case 2:
      v2 = (__int16 *)(*(_DWORD *)(a1 + 60) + 154);
      return (float)*v2;
    default:
      break;
  }
  return 0.0;
}


//======================================================================
// MobAttrib::~MobAttrib()
// address: 0x00269A84   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN9MobAttribD1Ev'
void __fastcall MobAttrib::~MobAttrib(MobAttrib *this)
{
  int v2; // r0

  *(_DWORD *)this = &off_45BDB0;
  v2 = *((_DWORD *)this + 16);
  if ( v2 != 0 )
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 4))(v2);
  LivingAttrib::~LivingAttrib(this);
}


//======================================================================
// MobAttrib::~MobAttrib()
// address: 0x00269AAC   size: 0x12 (18 bytes)
//======================================================================
void __fastcall MobAttrib::~MobAttrib(MobAttrib *this)
{
  MobAttrib::~MobAttrib(this);
  operator delete(this);
}


//======================================================================
// MobAttrib::equip(EQUIP_SLOT_TYPE,int,int)
// address: 0x00269CC8   size: 0x7E (126 bytes)
//======================================================================
int __fastcall MobAttrib::equip(int a1, int a2, int a3, int a4)
{
  PackContainer *v6; // r5
  BackPackGrid *v7; // r5
  int ToolDef; // r0

  if ( *(_DWORD *)(a1 + 64) == 0 )
  {
    v6 = (PackContainer *)operator new(0x18u);
    PackContainer::PackContainer(v6, 6, 0);
    *(_DWORD *)(a1 + 64) = v6;
  }
  v7 = (BackPackGrid *)(*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 64) + 8))(*(_DWORD *)(a1 + 64), a2);
  ToolDef = DefManager::getToolDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a3);
  if ( ToolDef != 0 )
  {
    if ( a4 < 0 )
      a4 = *(_DWORD *)(ToolDef + 60);
    SetBackPackGrid(v7, a3, 1, a4, nullptr, 1, 0);
  }
  else
  {
    SetBackPackGrid(v7, 0, 0, -1, nullptr, 1, 0);
  }
  return LivingAttrib::applyEquips(a1, *(_DWORD *)(*(_DWORD *)(a1 + 4) + 64), a2);
}


//======================================================================
// MobAttrib::getMoveSpeed(void)
// address: 0x0026A104   size: 0x36 (54 bytes)
//======================================================================
float __fastcall MobAttrib::getMoveSpeed(MobAttrib *this)
{
  float v1; // r5

  v1 = (float)((float)*(int *)(*((_DWORD *)this + 15) + 188) * 10.0) / 440.0;
  return v1 * (float)(COERCE_FLOAT(LivingAttrib::getModAttrib(this, 0)) + 1.0);
}


//======================================================================
// MobAttrib::init(MonsterDef const*)
// address: 0x0026A5EE   size: 0x16 (22 bytes)
//======================================================================
float __fastcall MobAttrib::init(int a1, int a2)
{
  float result; // r0

  *(_DWORD *)(a1 + 60) = a2;
  result = (float)*(__int16 *)(a2 + 148);
  *(float *)(a1 + 8) = result;
  *(float *)(a1 + 12) = result;
  return result;
}


//======================================================================
// MobAttrib::equip(EQUIP_SLOT_TYPE,BackPackGrid *)
// address: 0x0026A604   size: 0x32 (50 bytes)
//======================================================================
void *__fastcall MobAttrib::equip(int a1, int a2, int a3)
{
  int v6; // r0

  (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 40))(
    a1,
    a2,
    **(_DWORD **)(a3 + 4),
    *(_DWORD *)(a3 + 12));
  v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 56))(a1, a2);
  *(_DWORD *)(v6 + 28) = *(_DWORD *)(a3 + 28);
  return j_memcpy((void *)(v6 + 32), (const void *)(a3 + 32), 4 * *(_DWORD *)(a3 + 28));
}


//======================================================================
// MobAttrib::dropItem(bool)
// address: 0x0026A638   size: 0xEC (236 bytes)
//======================================================================
int __fastcall MobAttrib::dropItem(int this, int a2)
{
  int v2; // r4
  int v3; // r6
  int v4; // r5
  int j; // r5
  ClientActor *v6; // r7
  _DWORD *v7; // r0
  int v8; // r3
  const WCoord *v9; // [sp+0h] [bp-24h]
  int i; // [sp+4h] [bp-20h]
  _BYTE v11[12]; // [sp+8h] [bp-1Ch] BYREF
  _BYTE v12[16]; // [sp+14h] [bp-10h] BYREF

  v2 = this;
  if ( a2 != 0 )
  {
    this = GenRandomInt(1, 10000);
    if ( this <= *(_DWORD *)(*(_DWORD *)(v2 + 60) + 268) )
      this = ClientActor::dropItem(*(ClientActor **)(v2 + 4), *(_DWORD *)(*(_DWORD *)(v2 + 60) + 264), 1);
  }
  for ( i = 0; i != 3; ++i )
  {
    v3 = *(_DWORD *)(*(_DWORD *)(v2 + 60) + 4 * i + 240);
    if ( v3 != 0 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(v2 + 60) + 4 * i + 252);
      this = ClientMob::m_DropItemProbAdd * v4 / 100;
      for ( j = v4 + this; j > 0; j -= 10000 )
      {
        this = GenRandomInt(10000);
        if ( this < j )
        {
          v6 = *(ClientActor **)(v2 + 4);
          if ( v3 == 600 )
          {
            v7 = v6 != nullptr
               ? _dynamic_cast(
                   *(const void **)(v2 + 4),
                   (const struct __class_type_info *)&`typeinfo for'ClientActor,
                   (const struct __class_type_info *)&`typeinfo for'ClientMob,
                   0)
               : nullptr;
            v8 = v7[52];
            if ( v8 > 0 )
              v3 = v8 + 600;
          }
          this = ClientActor::dropItem(v6, v3, 1);
        }
      }
    }
  }
  if ( *(int *)(*(_DWORD *)(v2 + 60) + 272) > 0 )
  {
    this = GenRandomInt(10000);
    if ( this < *(_DWORD *)(*(_DWORD *)(v2 + 60) + 276) )
    {
      ActorLocoMotion::getCollideBox(*(ActorLocoMotion **)(*(_DWORD *)(v2 + 4) + 68), (CollideAABB *)v11);
      return ActorExpOrb::SpawnExpOrb(
               *(ActorExpOrb **)(*(_DWORD *)(v2 + 4) + 52),
               *(World **)(*(_DWORD *)(v2 + 60) + 272),
               (int)v11,
               (const WCoord *)v12,
               v9);
    }
  }
  return this;
}


//======================================================================
// MobAttrib::MobAttrib(ClientActor *)
// address: 0x0026A9C4   size: 0x34 (52 bytes)
//======================================================================
// Alternative name is '_ZN9MobAttribC1EP11ClientActor'
void __fastcall MobAttrib::MobAttrib(MobAttrib *this, ClientActor *a2)
{
  __int64 v3; // r0

  LivingAttrib::LivingAttrib(this, (int)a2);
  LODWORD(v3) = (char *)this + 48;
  HIDWORD(v3) = 27;
  *(_DWORD *)this = &off_45BDB0;
  std::vector<AttribModified>::resize(v3);
  j_memset(*((void **)this + 12), 0, 4 * ((*((_DWORD *)this + 13) - *((_DWORD *)this + 12)) >> 2));
  *((_DWORD *)this + 16) = 0;
}


//======================================================================
// MobAttrib::onDie(void)
// address: 0x0026AEF4   size: 0x1A (26 bytes)
//======================================================================
int __fastcall MobAttrib::onDie(ClientActor **this)
{
  int isBurning; // r0

  isBurning = ClientActor::isBurning(*(this + 1));
  MobAttrib::dropItem((int)this, isBurning);
  return LivingAttrib::onDie((LivingAttrib *)this);
}

