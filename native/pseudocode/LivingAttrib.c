// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: LivingAttrib

//======================================================================
// LivingAttrib::damageArmor(float)
// address: 0x002696A0   size: 0x2 (2 bytes)
//======================================================================
void __fastcall LivingAttrib::damageArmor(LivingAttrib *this, float a2)
{
  ;
}


//======================================================================
// LivingAttrib::getBasicAttackPoint(ATTACK_TYPE)
// address: 0x002696A2   size: 0x4 (4 bytes)
//======================================================================
int LivingAttrib::getBasicAttackPoint()
{
  return 0;
}


//======================================================================
// LivingAttrib::getBasicArmorPoint(ATTACK_TYPE)
// address: 0x002696A6   size: 0x4 (4 bytes)
//======================================================================
int LivingAttrib::getBasicArmorPoint()
{
  return 0;
}


//======================================================================
// LivingAttrib::revive(void)
// address: 0x0026970C   size: 0xE (14 bytes)
//======================================================================
_DWORD *__fastcall LivingAttrib::revive(LivingAttrib *this)
{
  _DWORD *result; // r0

  result = ActorAttrib::revive(this);
  *((_DWORD *)this + 8) = 1092616192;
  return result;
}


//======================================================================
// LivingAttrib::getSpeedInAir(void)
// address: 0x00269720   size: 0x6 (6 bytes)
//======================================================================
int __fastcall LivingAttrib::getSpeedInAir(LivingAttrib *this)
{
  return 0x40000000;
}


//======================================================================
// LivingAttrib::getFlySpeed(void)
// address: 0x00269728   size: 0x4 (4 bytes)
//======================================================================
int __fastcall LivingAttrib::getFlySpeed(LivingAttrib *this)
{
  return 1084227584;
}


//======================================================================
// LivingAttrib::~LivingAttrib()
// address: 0x00269A40   size: 0x2C (44 bytes)
//======================================================================
// Alternative name is '_ZN12LivingAttribD1Ev'
void __fastcall LivingAttrib::~LivingAttrib(LivingAttrib *this)
{
  void *v2; // r0
  void *v3; // r0

  *(_DWORD *)this = &off_45BD60;
  v2 = *((void **)this + 12);
  if ( v2 != nullptr )
    operator delete(v2);
  v3 = *((void **)this + 9);
  if ( v3 != nullptr )
    operator delete(v3);
  ActorAttrib::~ActorAttrib(this);
}


//======================================================================
// LivingAttrib::~LivingAttrib()
// address: 0x00269A70   size: 0x12 (18 bytes)
//======================================================================
void __fastcall LivingAttrib::~LivingAttrib(LivingAttrib *this)
{
  LivingAttrib::~LivingAttrib(this);
  operator delete(this);
}


//======================================================================
// LivingAttrib::LivingAttrib(ClientActor *)
// address: 0x00269B70   size: 0x28 (40 bytes)
//======================================================================
// Alternative name is '_ZN12LivingAttribC1EP11ClientActor'
_DWORD *__fastcall LivingAttrib::LivingAttrib(_DWORD *a1, int a2)
{
  ActorAttrib::ActorAttrib((int)a1, a2);
  *a1 = &off_45BD60;
  a1[9] = 0;
  a1[10] = 0;
  a1[11] = 0;
  a1[12] = 0;
  a1[13] = 0;
  a1[14] = 0;
  a1[8] = 1092616192;
  return a1;
}


//======================================================================
// LivingAttrib::getBuffNum(void)
// address: 0x00269BA0   size: 0xA (10 bytes)
//======================================================================
int __fastcall LivingAttrib::getBuffNum(LivingAttrib *this)
{
  return (*((_DWORD *)this + 10) - *((_DWORD *)this + 9)) >> 4;
}


//======================================================================
// LivingAttrib::getBuffInfo(int)
// address: 0x00269BAA   size: 0x14 (20 bytes)
//======================================================================
_DWORD *__fastcall LivingAttrib::getBuffInfo(_DWORD *this, int a2, int a3)
{
  _DWORD *v3; // r2
  int v4; // r4
  int v5; // r5

  v3 = (_DWORD *)(*(_DWORD *)(a2 + 36) + 16 * a3);
  v4 = v3[1];
  v5 = v3[2];
  *this = *v3;
  *(this + 1) = v4;
  *(this + 2) = v5;
  *(this + 3) = v3[3];
  return this;
}


//======================================================================
// LivingAttrib::addOxygen(int)
// address: 0x00269BC0   size: 0x36 (54 bytes)
//======================================================================
bool __fastcall LivingAttrib::addOxygen(LivingAttrib *this, int a2)
{
  float v3; // r6
  _BOOL4 result; // r0

  v3 = (float)a2 + *((float *)this + 8);
  if ( v3 < 0.0 )
    *((_DWORD *)this + 8) = 0;
  else
    *((float *)this + 8) = v3;
  result = *((float *)this + 8) > 10.0;
  if ( *((float *)this + 8) > 10.0 )
    *((_DWORD *)this + 8) = 1092616192;
  return result;
}


//======================================================================
// LivingAttrib::callBuffScript(ActorBuff *,int)
// address: 0x00269BFC   size: 0x72 (114 bytes)
//======================================================================
int __fastcall LivingAttrib::callBuffScript(int a1, int a2, unsigned int a3)
{
  Ogre::ScriptVM *v5; // r0
  int v7; // [sp+0h] [bp-11Ch]
  char s[256]; // [sp+14h] [bp-108h] BYREF

  j_sprintf(s, "%s%s", (const char *)(*(_DWORD *)(a2 + 12) + 292), off_453684[a3]);
  v5 = *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24);
  v7 = *(_DWORD *)(a2 + 12);
  if ( a3 > 1 )
    return Ogre::ScriptVM::callFunction(v5, s, "u[LivingAttrib]u[BuffDef]i", a1, v7, *(_DWORD *)(a2 + 8));
  else
    return Ogre::ScriptVM::callFunction(v5, s, "u[LivingAttrib]u[BuffDef]", a1, v7);
}


//======================================================================
// LivingAttrib::applyEquips(ActorBody *,EQUIP_SLOT_TYPE)
// address: 0x00269C88   size: 0x3E (62 bytes)
//======================================================================
int __fastcall LivingAttrib::applyEquips(int a1, int a2, int a3)
{
  int i; // r4
  int v7; // r0
  int v8; // r1
  int result; // r0
  int v10; // r0

  if ( a3 == 6 )
  {
    for ( i = 0; i != 6; ++i )
    {
      v7 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 44))(a1, i);
      v8 = i;
      result = ActorBody::setEquipItem(a2, v8, v7);
    }
  }
  else
  {
    v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 44))(a1, a3);
    return ActorBody::setEquipItem(a2, a3, v10);
  }
  return result;
}


//======================================================================
// LivingAttrib::getAttackPoint(ATTACK_TYPE)
// address: 0x00269D54   size: 0x62 (98 bytes)
//======================================================================
int __fastcall LivingAttrib::getAttackPoint(int a1, int a2)
{
  float v4; // r4
  int v5; // r0
  int *v6; // r2
  int ToolDef; // r0

  v4 = 0.0;
  if ( a2 <= 5 )
  {
    v4 = COERCE_FLOAT((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1));
    if ( a2 <= 2 )
    {
      v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 56))(a1, 5);
      if ( v5 != 0 )
      {
        v6 = *(int **)(v5 + 4);
        if ( v6 != nullptr && *(int *)(v5 + 12) > 0 )
        {
          ToolDef = DefManager::getToolDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, *v6);
          if ( ToolDef != 0 && *(__int16 *)(ToolDef + 48) == a2 )
            v4 = v4 + (float)*(__int16 *)(ToolDef + 50);
        }
      }
    }
  }
  return LODWORD(v4);
}


//======================================================================
// LivingAttrib::antiInjuryEnchant(ATTACK_TYPE)
// address: 0x00269DBC   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall LivingAttrib::antiInjuryEnchant(int a1, int a2)
{
  int result; // r0
  int v4; // r7
  int v5; // r4
  int EnchantDef; // r0
  int v7; // r6
  float v8; // r6
  int v9; // r0
  int i; // [sp+8h] [bp-Ch]
  float v11; // [sp+Ch] [bp-8h]

  result = 0;
  if ( a2 == 0 )
  {
    v4 = 0;
    v11 = 0.0;
    do
    {
      v5 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 56))(a1, v4);
      if ( v5 != 0 )
      {
        for ( i = 0; i < *(_DWORD *)(v5 + 28); ++i )
        {
          EnchantDef = DefManager::getEnchantDef(
                         (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                         *(_DWORD *)(v5 + 4 * i + 32));
          v7 = EnchantDef;
          if ( EnchantDef != 0
            && *(_DWORD *)(EnchantDef + 36) == 10
            && (float)(int)GenRandomInt(100) < *(float *)(EnchantDef + 44) )
          {
            v8 = *(float *)(v7 + 48);
            if ( v8 > (float)*(int *)(v5 + 12) )
              v8 = (float)*(int *)(v5 + 12);
            v11 = v11 + v8;
            v9 = (int)(float)((float)*(int *)(v5 + 12) - v8);
            *(_DWORD *)(v5 + 12) = v9;
            if ( v9 <= 0 )
              (*(void (__fastcall **)(int, int, _DWORD, int))(*(_DWORD *)a1 + 40))(a1, v4, 0, -1);
          }
        }
      }
      ++v4;
    }
    while ( v4 != 5 );
    return LODWORD(v11);
  }
  return result;
}


//======================================================================
// LivingAttrib::getEquipEnchantValue(EQUIP_SLOT_TYPE,ENCHANT_TYPE,ATTACK_TYPE,ATTACK_TARGET_TYPE)
// address: 0x00269E78   size: 0x5A (90 bytes)
//======================================================================
int __fastcall LivingAttrib::getEquipEnchantValue(int a1, int a2, int a3, int a4, int a5)
{
  int v7; // r5
  int i; // r4
  _DWORD *EnchantDef; // r0
  int v11; // r3
  int v12; // r3

  v7 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 56))(a1);
  if ( v7 != 0 )
  {
    for ( i = 0; i < *(_DWORD *)(v7 + 28); ++i )
    {
      EnchantDef = (_DWORD *)DefManager::getEnchantDef(
                               (DefManager *)Ogre::Singleton<DefManager>::ms_Singleton,
                               *(_DWORD *)(v7 + 4 * i + 32));
      if ( EnchantDef != nullptr && EnchantDef[9] == a3 )
      {
        v11 = EnchantDef[13];
        if ( v11 == -1 || v11 == a4 )
        {
          v12 = EnchantDef[14];
          if ( v12 == -1 || v12 == a5 )
            return EnchantDef[11];
        }
      }
    }
  }
  return 0;
}


//======================================================================
// LivingAttrib::getEnchantAttackPoint(ATTACK_TYPE,ATTACK_TARGET_TYPE)
// address: 0x00269ED8   size: 0x10 (16 bytes)
//======================================================================
int __fastcall LivingAttrib::getEnchantAttackPoint(int a1, int a2, int a3)
{
  return LivingAttrib::getEquipEnchantValue(a1, 5, 1, a2, a3);
}


//======================================================================
// LivingAttrib::getEnchantAttackPercent(ATTACK_TYPE)
// address: 0x00269EE8   size: 0x12 (18 bytes)
//======================================================================
int __fastcall LivingAttrib::getEnchantAttackPercent(int a1)
{
  return LivingAttrib::getEquipEnchantValue(a1, 5, 14, -1, -1);
}


//======================================================================
// LivingAttrib::getEnchantArmorPoint(ATTACK_TYPE)
// address: 0x00269EFA   size: 0x2E (46 bytes)
//======================================================================
float __fastcall LivingAttrib::getEnchantArmorPoint(int a1, int a2)
{
  int v4; // r4
  float v5; // r5
  float result; // r0

  v4 = 0;
  v5 = 0.0;
  do
  {
    result = v5 + COERCE_FLOAT(LivingAttrib::getEquipEnchantValue(a1, v4++, 9, a2, -1));
    v5 = result;
  }
  while ( v4 != 5 );
  return result;
}


//======================================================================
// LivingAttrib::addModAttrib(int,float)
// address: 0x00269F28   size: 0x14 (20 bytes)
//======================================================================
float __fastcall LivingAttrib::addModAttrib(LivingAttrib *this, int a2, float a3)
{
  float *v3; // r4
  float result; // r0

  v3 = (float *)(*((_DWORD *)this + 12) + 4 * a2);
  result = *v3 + a3;
  *v3 = result;
  return result;
}


//======================================================================
// LivingAttrib::setBuffAttrs(ActorBuff *,int)
// address: 0x00269F3C   size: 0x3E (62 bytes)
//======================================================================
float __fastcall LivingAttrib::setBuffAttrs(float this, int a2, int a3)
{
  LivingAttrib *v3; // r6
  int i; // r4
  float v7; // r2

  v3 = (LivingAttrib *)LODWORD(this);
  if ( a3 != 2 )
  {
    for ( i = 0; ; ++i )
    {
      if ( i >= *(_DWORD *)(*(_DWORD *)(a2 + 12) + 344) )
        return this;
      v7 = *(float *)(*(_DWORD *)(a2 + 12) + 4 * i + 368);
      if ( a3 != 0 )
      {
        if ( a3 != 1 )
          continue;
        LODWORD(v7) += 0x80000000;
      }
      this = LivingAttrib::addModAttrib(v3, *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4 * i + 348), v7);
    }
  }
  return this;
}


//======================================================================
// LivingAttrib::execBuff(ActorBuff *,int)
// address: 0x00269F7C   size: 0xA4 (164 bytes)
//======================================================================
ActorBody *__fastcall LivingAttrib::execBuff(int a1, int a2, unsigned int a3)
{
  ActorBody *result; // r0
  int v7; // r1
  int v8; // r6
  const char *v9; // r1
  ClientActor *v10; // r0
  float v11; // r3
  ClientActor *v12; // r4

  if ( *(_BYTE *)(*(_DWORD *)(a2 + 12) + 292) != 0 )
    LivingAttrib::callBuffScript(a1, a2, a3);
  else
    LivingAttrib::setBuffAttrs(*(float *)&a1, a2, a3);
  result = *(ActorBody **)(*(_DWORD *)(a1 + 4) + 64);
  if ( result != nullptr )
  {
    v7 = *(_DWORD *)(a2 + 12);
    if ( *(_BYTE *)(v7 + 420) != 0 )
    {
      if ( a3 != 0 )
      {
        if ( a3 == 1 )
          result = (ActorBody *)ActorBody::stopMotion(result, (const char *)(v7 + 420));
      }
      else
      {
        result = (ActorBody *)ActorBody::playMotion(result, (const char *)(v7 + 420), 0);
      }
    }
  }
  v8 = *(_DWORD *)(a2 + 12);
  if ( *(_BYTE *)(v8 + 452) != 0 )
  {
    if ( a3 == 0 )
    {
      v9 = (const char *)(v8 + 452);
      v10 = *(ClientActor **)(a1 + 4);
      v11 = 1.0;
      return (ActorBody *)ClientActor::playSound(v10, v9, 1.0, v11);
    }
    if ( a3 == 2 && *(_DWORD *)(v8 + 340) == 1 )
    {
      v12 = *(ClientActor **)(a1 + 4);
      v11 = (float)(COERCE_FLOAT(GenRandomFloat()) * 0.2) + 0.8;
      v9 = (const char *)(v8 + 452);
      v10 = v12;
      return (ActorBody *)ClientActor::playSound(v10, v9, 1.0, v11);
    }
  }
  return result;
}


//======================================================================
// LivingAttrib::getModAttrib(int)
// address: 0x0026A028   size: 0x8 (8 bytes)
//======================================================================
int __fastcall LivingAttrib::getModAttrib(LivingAttrib *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 12));
}


//======================================================================
// LivingAttrib::getArmorPoint(ATTACK_TYPE)
// address: 0x0026A030   size: 0xCC (204 bytes)
//======================================================================
int __fastcall LivingAttrib::getArmorPoint(LivingAttrib *a1, int a2)
{
  float v5; // r4
  float v6; // r4
  int v7; // r0
  int v8; // r7
  int *v9; // r2
  float v10; // r0
  int i; // [sp+4h] [bp-10h]
  int ToolDef; // [sp+8h] [bp-Ch]

  if ( a2 > 2 )
    return 0;
  v5 = COERCE_FLOAT((*(int (__fastcall **)(LivingAttrib *))(*(_DWORD *)a1 + 68))(a1));
  v6 = v5 + COERCE_FLOAT(LivingAttrib::getModAttrib(a1, a2 + 19));
  for ( i = 0; i != 5; ++i )
  {
    v7 = (*(int (__fastcall **)(LivingAttrib *, int))(*(_DWORD *)a1 + 56))(a1, i);
    v8 = v7;
    if ( v7 != 0 )
    {
      v9 = *(int **)(v7 + 4);
      if ( v9 != nullptr && *(int *)(v7 + 12) > 0 )
      {
        ToolDef = DefManager::getToolDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, *v9);
        v10 = v6
            + j_floor((float)((float)(*(_DWORD *)(v8 + 12) * *(__int16 *)(ToolDef + 2 * (a2 + 24) + 4))
                            / (float)*(int *)(ToolDef + 60)));
        v6 = v10;
      }
    }
  }
  if ( v6 < 0.0 )
    return 0;
  if ( v6 > 20.0 )
    return 1101004800;
  return LODWORD(v6);
}


//======================================================================
// LivingAttrib::addEnchant(int,int,int)
// address: 0x0026A160   size: 0x90 (144 bytes)
//======================================================================
int __fastcall LivingAttrib::addEnchant(LivingAttrib *this, int a2, int a3, int a4)
{
  int v4; // r0
  BackPackGrid *v5; // r4
  int v7; // r6
  int DurationEnchant; // r0
  int v9; // r7
  int i; // r5
  int v11; // [sp+4h] [bp-10h]

  v4 = (*(int (__fastcall **)(LivingAttrib *, int))(*(_DWORD *)this + 56))(this, a2);
  v5 = (BackPackGrid *)v4;
  if ( v4 == 0 )
    return 0;
  if ( *(_DWORD *)(v4 + 28) == 5 )
    return 0;
  v7 = 100 * a3 + a4;
  if ( DefManager::getEnchantDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, v7) == 0 )
    return 0;
  DurationEnchant = BackPackGrid::getDurationEnchant(v5);
  v9 = *((_DWORD *)v5 + 7);
  for ( i = 0; ; ++i )
  {
    if ( i >= v9 )
    {
      *((_DWORD *)v5 + 7) = v9 + 1;
      *((_DWORD *)v5 + v9 + 8) = v7;
      goto LABEL_12;
    }
    v11 = *((_DWORD *)v5 + i + 8);
    if ( v11 / 100 == a3 )
      break;
  }
  if ( v11 % 100 >= a4 )
    return 0;
  *((_DWORD *)v5 + i + 8) = v7;
LABEL_12:
  BackPackGrid::onEnchantChange(v5, DurationEnchant);
  return 1;
}


//======================================================================
// LivingAttrib::removeEnchant(int,int)
// address: 0x0026A1F4   size: 0x72 (114 bytes)
//======================================================================
int __fastcall LivingAttrib::removeEnchant(LivingAttrib *this, int a2, int a3)
{
  BackPackGrid *v3; // r0
  BackPackGrid *v4; // r4
  int DurationEnchant; // r0
  int v7; // r6
  int v8; // r7
  int i; // r5
  int v10; // r6

  v3 = (BackPackGrid *)(*(int (__fastcall **)(LivingAttrib *))(*(_DWORD *)this + 56))(this);
  v4 = v3;
  if ( *((_DWORD *)v3 + 1) != 0 )
  {
    DurationEnchant = BackPackGrid::getDurationEnchant(v3);
    v7 = *((_DWORD *)v4 + 7);
    v8 = DurationEnchant;
    for ( i = 0; i < v7; ++i )
    {
      if ( *((_DWORD *)v4 + i + 8) / 100 == a3 )
      {
        v10 = v7 - 1;
        *((_DWORD *)v4 + 7) = v10;
        if ( i < v10 )
          j_memmove((char *)v4 + 4 * i + 32, (char *)v4 + 4 * i + 36, 4 * (v10 - i));
        *((_DWORD *)v4 + *((_DWORD *)v4 + 7) + 8) = 0;
        BackPackGrid::onEnchantChange(v4, v8);
        return 1;
      }
    }
  }
  return 0;
}


//======================================================================
// LivingAttrib::attackedByBuff(int,float)
// address: 0x0026A266   size: 0x28 (40 bytes)
//======================================================================
int __fastcall LivingAttrib::attackedByBuff(LivingAttrib *this, float a2, float a3)
{
  int v6; // r3
  float v8[8]; // [sp+4h] [bp-20h] BYREF

  j_memset(v8, 0, 0x1Cu);
  v6 = *(_DWORD *)this;
  v8[0] = a2;
  v8[1] = a3;
  return (*(int (__fastcall **)(LivingAttrib *, float *))(v6 + 16))(this, v8);
}


//======================================================================
// LivingAttrib::getKnockback(ATTACK_TYPE,ATTACK_TARGET_TYPE)
// address: 0x0026A28E   size: 0x30 (48 bytes)
//======================================================================
float __fastcall LivingAttrib::getKnockback(LivingAttrib *a1, int a2, int a3)
{
  float v6; // r5

  v6 = COERCE_FLOAT(LivingAttrib::getModAttrib(a1, 24)) + 1.0;
  return v6 + COERCE_FLOAT(LivingAttrib::getEquipEnchantValue((int)a1, 5, 2, a2, a3));
}


//======================================================================
// LivingAttrib::getKnockUp(ATTACK_TYPE,ATTACK_TARGET_TYPE)
// address: 0x0026A2BE   size: 0x16 (22 bytes)
//======================================================================
float __fastcall LivingAttrib::getKnockUp(int a1, int a2, int a3)
{
  return COERCE_FLOAT(LivingAttrib::getEquipEnchantValue(a1, 5, 3, a2, a3)) + 0.0;
}


//======================================================================
// LivingAttrib::getKnockbackResistance(void)
// address: 0x0026A2D4   size: 0x30 (48 bytes)
//======================================================================
float __fastcall LivingAttrib::getKnockbackResistance(LivingAttrib *this)
{
  int v2; // r4
  float v3; // r5
  float result; // r0

  v2 = 0;
  v3 = COERCE_FLOAT(LivingAttrib::getModAttrib(this, 25));
  do
  {
    result = v3 + COERCE_FLOAT(LivingAttrib::getEquipEnchantValue((int)this, v2++, 12, -1, -1));
    v3 = result;
  }
  while ( v2 != 5 );
  return result;
}


//======================================================================
// LivingAttrib::attackedFrom(OneAttackData &)
// address: 0x0026A304   size: 0x28C (652 bytes)
//======================================================================
int __fastcall LivingAttrib::attackedFrom(int a1, int a2)
{
  int isMobile; // r3
  void (__fastcall *v5)(int, _DWORD, int); // r5
  int v6; // r0
  float v7; // r0
  float v8; // r7
  float v9; // r7
  int v10; // r3
  int v11; // r0
  float EnchantArmorPoint; // r6
  float v13; // r7
  float v14; // r0
  float v15; // r6
  float v16; // r7
  float v17; // r7
  int v18; // r1
  float v19; // r0
  float v20; // r0
  float v21; // r1
  float v22; // r6
  _DWORD *v23; // r0
  const char *v24; // r7
  int v26; // [sp+2Ch] [bp-118h]
  float v27; // [sp+30h] [bp-114h]
  char v28[256]; // [sp+3Ch] [bp-108h] BYREF

  if ( *(float *)(a1 + 8) <= 0.0 )
    return 0;
  if ( *(_DWORD *)a2 == 6 )
  {
    if ( (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 44))(a1, 0) > 0 )
    {
      v5 = *(void (__fastcall **)(int, _DWORD, int))(*(_DWORD *)a1 + 48);
      v6 = GenRandomInt(0, 1);
      v5(a1, 0, v6);
    }
    else
    {
      ClientActor::setFire(*(ClientActor **)(a1 + 4), 8);
    }
    return 1;
  }
  v7 = *(float *)(a2 + 20) - LivingAttrib::getKnockbackResistance((LivingAttrib *)a1);
  *(float *)(a2 + 20) = v7;
  if ( v7 < 0.0
    || (v8 = COERCE_FLOAT(GenRandomFloat())) < COERCE_FLOAT(LivingAttrib::getModAttrib((LivingAttrib *)a1, 26)) )
  {
    *(_DWORD *)(a2 + 20) = 0;
  }
  v9 = *(float *)(a2 + 4);
  if ( *(int *)(a1 + 24) <= 10 )
  {
    *(_DWORD *)(a1 + 24) = 20;
    v10 = *(_DWORD *)(a1 + 4);
    *(float *)(a1 + 28) = v9;
    v11 = *(_DWORD *)(v10 + 64);
    if ( v11 != 0 )
      ActorBody::playEffect(v11, 0);
  }
  else
  {
    if ( v9 <= *(float *)(a1 + 28) )
      return 0;
    *(float *)(a1 + 28) = v9;
    *(_DWORD *)(a2 + 20) = 0;
  }
  EnchantArmorPoint = LivingAttrib::getEnchantArmorPoint(a1, *(_DWORD *)a2);
  v13 = COERCE_FLOAT(GenRandomFloat());
  v14 = EnchantArmorPoint * 0.04;
  v15 = (float)(EnchantArmorPoint * 0.04) * (float)((float)(v13 * 0.5) + 0.5);
  if ( (float)(v14 * (float)((float)(v13 * 0.5) + 0.5)) < 0.0 )
  {
    v15 = 0.0;
  }
  else if ( v15 > 1.0 )
  {
    v15 = 1.0;
  }
  v16 = *(float *)(a2 + 12);
  v17 = v16 + COERCE_FLOAT(LivingAttrib::getModAttrib((LivingAttrib *)a1, *(_DWORD *)a2 + 12));
  if ( v17 < -1.0 )
    v17 = -1.0;
  v18 = *(_DWORD *)a2;
  if ( *(int *)a2 <= 2 )
  {
    v19 = COERCE_FLOAT(LivingAttrib::getArmorPoint((LivingAttrib *)a1, v18)) * 0.05;
    if ( *(_BYTE *)(a2 + 16) != 0 )
      v26 = 1069547520;
    else
      v26 = 1065353216;
    if ( *(_BYTE *)(a2 + 17) != 0 )
      v27 = 1.0;
    else
      v27 = 0.0;
    v20 = (float)((float)((float)((float)(1.0 - v19) * *(float *)(a2 + 4)) + v27) + *(float *)(a2 + 8))
        * (float)(v17 + 1.0);
    v21 = *(float *)&v26;
    goto LABEL_31;
  }
  if ( v18 <= 5 )
  {
    v20 = v17 + 1.0;
    v21 = *(float *)(a2 + 4);
LABEL_31:
    v22 = (float)(v20 * v21) * (float)(1.0 - v15);
    goto LABEL_33;
  }
  v22 = *(float *)(a2 + 4);
LABEL_33:
  (*(void (__fastcall **)(int, unsigned int))(*(_DWORD *)a1 + 36))(a1, LODWORD(v22) + 0x80000000);
  if ( *(_BYTE *)(a2 + 18) != 0 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 60))(a1, 1065353216);
  isMobile = ClientManager::isMobile((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton);
  if ( isMobile == 0 )
  {
    v23 = _dynamic_cast(
            (const void *)a1,
            (const struct __class_type_info *)&`typeinfo for'LivingAttrib,
            (const struct __class_type_info *)&`typeinfo for'MobAttrib,
            0);
    if ( v23 != nullptr )
      v24 = (const char *)(v23[15] + 4);
    else
      v24 = "I";
    j_sprintf(
      v28,
      "%s hurt: HP=%.2f/%.2f, atktype=%s, atkpoints=%.2f, knock=%.2f",
      v24,
      v22,
      *(float *)(a1 + 8),
      off_453684[*(_DWORD *)a2 + 3],
      *(float *)(a2 + 4),
      *(float *)(a2 + 20));
    SurviveGame::sendChat(*(SurviveGame **)(Ogre::Singleton<ClientManager>::ms_Singleton + 76), v28);
    return 1;
  }
  return isMobile;
}


//======================================================================
// LivingAttrib::getFireAspect(void)
// address: 0x0026A5D8   size: 0x16 (22 bytes)
//======================================================================
int __fastcall LivingAttrib::getFireAspect(LivingAttrib *this)
{
  return (int)COERCE_FLOAT(LivingAttrib::getEquipEnchantValue((int)this, 5, 5, -1, -1));
}


//======================================================================
// LivingAttrib::addBuff(int,int)
// address: 0x0026AB60   size: 0x9A (154 bytes)
//======================================================================
__int64 __fastcall LivingAttrib::addBuff(__int64 this, int a2)
{
  unsigned int v4; // r3
  _DWORD *v5; // r3
  int v6; // r1
  int v7; // r2
  _DWORD *v8; // r4
  int v9; // r0
  __int64 v10; // r0
  __int64 v12; // [sp+0h] [bp-Ch]

  v12 = this;
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(this + 4) + 144))(*(_DWORD *)(this + 4)) != 0 )
  {
    HIDWORD(v12) = DefManager::getBuffDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, SHIDWORD(this), a2);
    if ( HIDWORD(v12) != 0 )
    {
      v5 = *(_DWORD **)(this + 36);
      v6 = 0;
      v7 = (*(_DWORD *)(this + 40) - (int)v5) >> 4;
      while ( 1 )
      {
        if ( v6 == v7 )
        {
          HIDWORD(v10) = v6 + 1;
          LODWORD(v10) = this + 36;
          std::vector<ActorBuff>::resize(v10);
          v8 = (_DWORD *)(*(_DWORD *)(this + 40) - 16);
          goto LABEL_11;
        }
        v8 = v5;
        v9 = *v5;
        v5 += 4;
        if ( v9 == HIDWORD(this) )
          break;
        ++v6;
      }
      if ( v8[1] > a2 )
        return v12;
      LivingAttrib::execBuff(this, (int)v8, 1u);
LABEL_11:
      *v8 = HIDWORD(this);
      v8[1] = a2;
      v8[3] = HIDWORD(v12);
      v8[2] = 0;
      LivingAttrib::execBuff(this, (int)v8, 0);
    }
    else
    {
      Ogre::LogSetCurParam((int)"D:/work/oworldsrc/client/iworld/ActorAttrib.cpp", (const char *)&dword_CC, 8, v4);
      Ogre::LogMessage((Ogre *)"addBuff failed: buffid=%d, bufflv=%d", (const char *)HIDWORD(this), a2);
    }
  }
  return v12;
}


//======================================================================
// LivingAttrib::removeBuff(int)
// address: 0x0026AC08   size: 0x60 (96 bytes)
//======================================================================
__int64 __fastcall LivingAttrib::removeBuff(LivingAttrib *this, int a2)
{
  int v3; // r3
  int v5; // r2
  unsigned int v6; // r6
  int v7; // r5
  int v8; // r1
  int v9; // r2
  int v10; // r3
  _DWORD *v11; // r2
  _DWORD *v12; // r3
  int v13; // r1
  int v14; // r5
  __int64 v15; // r0
  __int64 v17; // [sp+0h] [bp-Ch]

  LODWORD(v17) = this;
  v3 = *((_DWORD *)this + 9);
  v5 = v3;
  HIDWORD(v17) = (*((_DWORD *)this + 10) - v3) >> 4;
  v6 = 0;
  while ( v6 != HIDWORD(v17) )
  {
    v7 = v5 - v3;
    v8 = v5;
    v5 += 16;
    ++v6;
    if ( *(_DWORD *)(v5 - 16) == a2 )
    {
      LivingAttrib::execBuff((int)this, v8, 1u);
      v9 = *((_DWORD *)this + 10);
      v10 = *((_DWORD *)this + 9);
      if ( v6 < (v9 - v10) >> 4 )
      {
        v11 = (_DWORD *)(v9 - 16);
        v12 = (_DWORD *)(v10 + v7);
        v13 = v11[1];
        v14 = v11[2];
        *v12 = *v11;
        v12[1] = v13;
        v12[2] = v14;
        v12[3] = v11[3];
      }
      LODWORD(v15) = (char *)this + 36;
      HIDWORD(v15) = ((*((_DWORD *)this + 10) - *((_DWORD *)this + 9)) >> 4) - 1;
      std::vector<ActorBuff>::resize(v15);
      return v17;
    }
  }
  return v17;
}


//======================================================================
// LivingAttrib::clearRandomBuff(void)
// address: 0x0026AC68   size: 0x20 (32 bytes)
//======================================================================
int __fastcall LivingAttrib::clearRandomBuff(LivingAttrib *this)
{
  int result; // r0
  int v3; // r0

  result = (*((_DWORD *)this + 10) - *((_DWORD *)this + 9)) >> 4;
  if ( result != 0 )
  {
    v3 = GenRandomInt(result);
    return LivingAttrib::removeBuff(this, *(_DWORD *)(16 * v3 + *((_DWORD *)this + 9)));
  }
  return result;
}


//======================================================================
// LivingAttrib::clearRandomBadBuff(void)
// address: 0x0026AC88   size: 0x50 (80 bytes)
//======================================================================
int __fastcall LivingAttrib::clearRandomBadBuff(int this)
{
  unsigned int v1; // r4
  LivingAttrib *v2; // r5
  int i; // r6
  int v4; // r3
  int *v5; // r2
  int v6; // r0

  v1 = 0;
  v2 = (LivingAttrib *)this;
  for ( i = 0; ; i += *(_DWORD *)(this + 84) == 1 )
  {
    v4 = *((_DWORD *)v2 + 9);
    if ( v1 >= (*((_DWORD *)v2 + 10) - v4) >> 4 )
      break;
    v5 = (int *)(v4 + 16 * v1++);
    this = DefManager::getBuffDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, *v5, v5[1]) + 252;
  }
  if ( i != 0 )
  {
    v6 = GenRandomInt(i);
    return LivingAttrib::removeBuff(v2, *(_DWORD *)(16 * v6 + *((_DWORD *)v2 + 9)));
  }
  return this;
}


//======================================================================
// LivingAttrib::tick(void)
// address: 0x0026AE48   size: 0x54 (84 bytes)
//======================================================================
ActorBody *__fastcall LivingAttrib::tick(LivingAttrib *this)
{
  ActorBody *result; // r0
  unsigned int i; // r5
  int v4; // r3
  int *v5; // r3
  int v6; // r2
  int v7; // r2
  int v8; // r1
  int v9; // r1
  int v10; // t0

  result = (ActorBody *)ActorAttrib::tick(this);
  for ( i = 0; ; ++i )
  {
    v4 = *((_DWORD *)this + 9);
    if ( i >= (*((_DWORD *)this + 10) - v4) >> 4 )
      break;
    v5 = (int *)(v4 + 16 * i);
    v6 = v5[3];
    result = (ActorBody *)(v5[2] + 1);
    v5[2] = (int)result;
    v7 = v6 + 252;
    if ( result == *(ActorBody **)(v7 + 76) )
      return (ActorBody *)LivingAttrib::removeBuff(this, *v5);
    v8 = *(_DWORD *)(v7 + 80);
    if ( v8 > 0 )
    {
      v10 = (int)result / v8;
      v9 = (int)result % v8;
      result = (ActorBody *)v10;
      if ( v9 == 0 )
        result = LivingAttrib::execBuff((int)this, *((_DWORD *)this + 9) + 16 * i, 2u);
    }
  }
  return result;
}


//======================================================================
// LivingAttrib::clearBuff(void)
// address: 0x0026AEB4   size: 0xC (12 bytes)
//======================================================================
int __fastcall LivingAttrib::clearBuff(LivingAttrib *this)
{
  return std::vector<ActorBuff>::resize((unsigned int)this + 36);
}


//======================================================================
// LivingAttrib::onDie(void)
// address: 0x0026AEC0   size: 0x2E (46 bytes)
//======================================================================
int __fastcall LivingAttrib::onDie(LivingAttrib *this)
{
  int result; // r0

  ActorAttrib::onDie(this);
  LivingAttrib::clearBuff(this);
  *((_DWORD *)this + 8) = 0;
  result = World::isCreativeMode(*(World **)(g_pPlayerCtrl + 52));
  if ( result == 0 )
    return (*(int (__fastcall **)(LivingAttrib *))(*(_DWORD *)this + 52))(this);
  return result;
}

