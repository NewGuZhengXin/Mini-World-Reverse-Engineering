// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: PlayerAttrib

//======================================================================
// PlayerAttrib::revive(void)
// address: 0x0026978C   size: 0x1C (28 bytes)
//======================================================================
_DWORD *__fastcall PlayerAttrib::revive(PlayerAttrib *this)
{
  _DWORD *result; // r0

  result = LivingAttrib::revive(this);
  *((_DWORD *)this + 3) = 1101004800;
  *((_DWORD *)this + 2) = 1101004800;
  *((_DWORD *)this + 16) = 1101004800;
  *((_DWORD *)this + 17) = 1101004800;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  return result;
}


//======================================================================
// PlayerAttrib::getEquipItem(EQUIP_SLOT_TYPE)
// address: 0x002697AC   size: 0x16 (22 bytes)
//======================================================================
_DWORD *__fastcall PlayerAttrib::getEquipItem(int a1)
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
// PlayerAttrib::damageArmor(float)
// address: 0x002697C2   size: 0x22 (34 bytes)
//======================================================================
int __fastcall PlayerAttrib::damageArmor(PlayerAttrib *this, float a2)
{
  int i; // r4
  int v5; // r1
  int result; // r0

  for ( i = 0; i != 5; ++i )
  {
    v5 = i;
    result = (*(int (__fastcall **)(PlayerAttrib *, int, int))(*(_DWORD *)this + 48))(this, v5, (int)a2);
  }
  return result;
}


//======================================================================
// PlayerAttrib::dropEquipItems(void)
// address: 0x002698A8   size: 0x5E (94 bytes)
//======================================================================
int __fastcall PlayerAttrib::dropEquipItems(BackPack **this)
{
  int v1; // r4
  int Container; // r7
  int v4; // r3
  unsigned int i; // [sp+4h] [bp-18h]
  _DWORD v7[4]; // [sp+Ch] [bp-10h]

  v7[0] = 1000;
  v1 = 0;
  v7[1] = 0;
  v7[2] = 8000;
  do
  {
    Container = BackPack::getContainer(*(this + 20), v7[v1]);
    for ( i = 0; ; ++i )
    {
      v4 = *(_DWORD *)(Container + 12);
      if ( i >= -991146299 * ((*(_DWORD *)(Container + 16) - v4) >> 2) )
        break;
      ClientActor::dropItem(*(this + 1), (BackPackGrid *)(v4 + 52 * i));
    }
    ++v1;
  }
  while ( v1 != 3 );
  return BackPack::clearPack(*(this + 20));
}


//======================================================================
// PlayerAttrib::equip(EQUIP_SLOT_TYPE,int,int)
// address: 0x002699B0   size: 0x8A (138 bytes)
//======================================================================
int __fastcall PlayerAttrib::equip(_DWORD *a1, int a2, int a3, int a4)
{
  BackPackGrid *v8; // r0
  _DWORD *v9; // r3
  int v10; // r2
  _DWORD *v11; // r12

  v8 = (BackPackGrid *)(*(int (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
  v9 = *(_DWORD **)(Ogre::Singleton<DefManager>::ms_Singleton + 480);
  v10 = Ogre::Singleton<DefManager>::ms_Singleton + 476;
  while ( v9 != nullptr )
  {
    if ( v9[4] < a3 )
    {
      v11 = (_DWORD *)v9[3];
      v9 = (_DWORD *)v10;
    }
    else
    {
      v11 = (_DWORD *)v9[2];
    }
    v10 = (int)v9;
    v9 = v11;
  }
  if ( v10 == Ogre::Singleton<DefManager>::ms_Singleton + 476 || a3 < *(_DWORD *)(v10 + 16) || v10 == -20 )
  {
    SetBackPackGrid(v8, 0, 0, -1, nullptr, 1, 0);
  }
  else
  {
    if ( a4 < 0 )
      a4 = *(_DWORD *)(v10 + 80);
    SetBackPackGrid(v8, a3, 1, a4, nullptr, 1, 0);
  }
  return ClientPlayer::applyEquips(a1[1], a2);
}


//======================================================================
// PlayerAttrib::~PlayerAttrib()
// address: 0x00269AC0   size: 0x2A (42 bytes)
//======================================================================
// Alternative name is '_ZN12PlayerAttribD1Ev'
void __fastcall PlayerAttrib::~PlayerAttrib(PlayerAttrib *this)
{
  BackPack *v1; // r5

  v1 = *((BackPack **)this + 20);
  *(_DWORD *)this = &off_45BE00;
  if ( v1 != nullptr )
  {
    BackPack::~BackPack(v1);
    operator delete(v1);
  }
  LivingAttrib::~LivingAttrib(this);
}


//======================================================================
// PlayerAttrib::~PlayerAttrib()
// address: 0x00269AF0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall PlayerAttrib::~PlayerAttrib(PlayerAttrib *this)
{
  PlayerAttrib::~PlayerAttrib(this);
  operator delete(this);
}


//======================================================================
// PlayerAttrib::getMoveSpeed(void)
// address: 0x0026A144   size: 0x18 (24 bytes)
//======================================================================
float __fastcall PlayerAttrib::getMoveSpeed(PlayerAttrib *this)
{
  return (float)(COERCE_FLOAT(LivingAttrib::getModAttrib(this, 0)) + 1.0) * 10.0;
}


//======================================================================
// PlayerAttrib::attackedFrom(OneAttackData &)
// address: 0x0026A5B8   size: 0x20 (32 bytes)
//======================================================================
int __fastcall PlayerAttrib::attackedFrom(int a1, int a2)
{
  int isCreativeMode; // r3
  int result; // r0

  isCreativeMode = World::isCreativeMode(*(World **)(*(_DWORD *)(a1 + 4) + 52));
  result = 0;
  if ( isCreativeMode == 0 )
    return LivingAttrib::attackedFrom(a1, a2);
  return result;
}


//======================================================================
// PlayerAttrib::equipSlot2Index(EQUIP_SLOT_TYPE)
// address: 0x0026A738   size: 0x18 (24 bytes)
//======================================================================
int __fastcall PlayerAttrib::equipSlot2Index(int a1, int a2)
{
  int result; // r0

  result = a2 + 8000;
  if ( a2 == 5 )
    return *(_DWORD *)(a1 + 84) + 1000;
  return result;
}


//======================================================================
// PlayerAttrib::getEquipGrid(EQUIP_SLOT_TYPE)
// address: 0x0026A750   size: 0x12 (18 bytes)
//======================================================================
int __fastcall PlayerAttrib::getEquipGrid(int a1, int a2)
{
  BackPack *v2; // r4
  int v3; // r0

  v2 = *(BackPack **)(a1 + 80);
  v3 = PlayerAttrib::equipSlot2Index(a1, a2);
  return BackPack::index2Grid(v2, v3);
}


//======================================================================
// PlayerAttrib::damageEquipItem(EQUIP_SLOT_TYPE,int)
// address: 0x0026A764   size: 0x84 (132 bytes)
//======================================================================
int __fastcall PlayerAttrib::damageEquipItem(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  int *v7; // r2
  int v8; // r6
  int ToolDef; // r0
  int v10; // r7
  GameEventQue *v11; // r6
  int v12; // r0
  int v14; // [sp+0h] [bp-Ch]

  v14 = (int)a1;
  v6 = (*(int (__fastcall **)(_DWORD *))(*a1 + 56))(a1);
  v7 = *(int **)(v6 + 4);
  v8 = v6;
  if ( v7 != nullptr )
  {
    ToolDef = DefManager::getToolDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, *v7);
    if ( ToolDef != 0 && *(_DWORD *)(ToolDef + 60) != 0 )
    {
      v10 = *(_DWORD *)(v8 + 12) - a3;
      *(_DWORD *)(v8 + 12) = v10;
      if ( v10 <= 0 )
      {
        v14 = 1;
        (*(void (__fastcall **)(_DWORD, int, int, _DWORD))(*(_DWORD *)a1[1] + 208))(a1[1], 1, 5, **(_DWORD **)(v8 + 4));
        (*(void (__fastcall **)(_DWORD *, int, _DWORD, int))(*a1 + 40))(a1, a2, 0, -1);
      }
      if ( a1[1] == g_pPlayerCtrl )
      {
        v11 = (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton;
        v12 = PlayerAttrib::equipSlot2Index((int)a1, a2);
        GameEventQue::postBackpackChange(v11, v12);
      }
    }
  }
  return v14;
}


//======================================================================
// PlayerAttrib::onCurToolUsed(void)
// address: 0x0026A7F4   size: 0x50 (80 bytes)
//======================================================================
int __fastcall PlayerAttrib::onCurToolUsed(PlayerAttrib *this)
{
  int v1; // r4
  int result; // r0
  int v4; // r3
  int v5; // r6
  int v6; // r3

  v1 = *((_DWORD *)this + 21) + 1000;
  result = BackPack::index2Grid(*((BackPack **)this + 20), v1);
  v4 = *(_DWORD *)(result + 4);
  v5 = result;
  if ( v4 != 0 )
  {
    if ( *(int *)(v4 + 440) > 1 )
      return BackPack::removeItem(*((BackPack **)this + 20), v1, 1);
    v6 = *(_DWORD *)(result + 12);
    if ( v6 <= 0 )
      return BackPack::removeItem(*((BackPack **)this + 20), v1, 1);
    *(_DWORD *)(result + 12) = v6 - 1;
    result = GameEventQue::postBackpackChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, v1);
    if ( *(int *)(v5 + 12) <= 0 )
      return BackPack::removeItem(*((BackPack **)this + 20), v1, 1);
  }
  return result;
}


//======================================================================
// PlayerAttrib::getFoodLevel(void)
// address: 0x0026A848   size: 0xA (10 bytes)
//======================================================================
int __fastcall PlayerAttrib::getFoodLevel(PlayerAttrib *this)
{
  return (int)*((float *)this + 16);
}


//======================================================================
// PlayerAttrib::useStamina(STAMINA_METHOD,float)
// address: 0x0026A852   size: 0x2 (2 bytes)
//======================================================================
void PlayerAttrib::useStamina()
{
  ;
}


//======================================================================
// PlayerAttrib::getExp(void)
// address: 0x0026A854   size: 0x4 (4 bytes)
//======================================================================
int __fastcall PlayerAttrib::getExp(PlayerAttrib *this)
{
  return *((_DWORD *)this + 15);
}


//======================================================================
// PlayerAttrib::addExp(int)
// address: 0x0026A858   size: 0x24 (36 bytes)
//======================================================================
int __fastcall PlayerAttrib::addExp(int this, int a2)
{
  int v2; // r2

  v2 = *(_DWORD *)(this + 4);
  *(_DWORD *)(this + 60) += a2;
  if ( v2 == g_pPlayerCtrl )
    return GameEventQue::postPlayerAttrChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
  return this;
}


//======================================================================
// PlayerAttrib::foodTick(void)
// address: 0x0026A884   size: 0x60 (96 bytes)
//======================================================================
void __fastcall PlayerAttrib::foodTick(PlayerAttrib *this)
{
  float v1; // r5

  if ( *((_DWORD *)this + 19) == 79 )
  {
    v1 = *((float *)this + 16);
    *((_DWORD *)this + 19) = 0;
    if ( v1 < 18.0 )
    {
      if ( v1 == 0.0 )
        (*(void (__fastcall **)(PlayerAttrib *, int))(*(_DWORD *)this + 36))(this, -1082130432);
    }
    else if ( *((float *)this + 2) < *((float *)this + 3) )
    {
      (*(void (__fastcall **)(PlayerAttrib *, int))(*(_DWORD *)this + 36))(this, 1065353216);
      PlayerAttrib::useStamina();
    }
  }
  else
  {
    ++*((_DWORD *)this + 19);
  }
}


//======================================================================
// PlayerAttrib::PlayerAttrib(ClientActor *)
// address: 0x0026AA08   size: 0x56 (86 bytes)
//======================================================================
// Alternative name is '_ZN12PlayerAttribC1EP11ClientActor'
void __fastcall PlayerAttrib::PlayerAttrib(PlayerAttrib *this, ClientActor *a2)
{
  __int64 v3; // r0
  BackPack *v4; // r5

  LivingAttrib::LivingAttrib(this, (int)a2);
  LODWORD(v3) = (char *)this + 48;
  HIDWORD(v3) = 32;
  *(_DWORD *)this = &off_45BE00;
  std::vector<AttribModified>::resize(v3);
  j_memset(*((void **)this + 12), 0, 4 * ((*((_DWORD *)this + 13) - *((_DWORD *)this + 12)) >> 2));
  *((_DWORD *)this + 3) = 1101004800;
  *((_DWORD *)this + 2) = 1101004800;
  *((_DWORD *)this + 16) = 1101004800;
  *((_DWORD *)this + 17) = 1101004800;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  v4 = (BackPack *)operator new(0x44u);
  BackPack::BackPack(v4);
  *((_DWORD *)this + 20) = v4;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 15) = 0;
}


//======================================================================
// PlayerAttrib::eatFood(int,bool)
// address: 0x0026ACDC   size: 0x162 (354 bytes)
//======================================================================
int __fastcall PlayerAttrib::eatFood(int this, int a2, int a3)
{
  int v3; // r6
  int v4; // r5
  int v5; // r4
  _DWORD *v6; // r2
  int v7; // r0
  int v8; // r3
  __int64 v9; // r0
  int v10; // r3
  _DWORD *v11; // r6
  int i; // r7
  __int64 v13; // r0
  int v14; // r3
  float v15; // r0
  float v16; // r6
  ClientPlayer *v17; // r6
  BackPack *BackPack; // r5
  int v19; // r6
  _DWORD v21[4]; // [sp+14h] [bp-10h] BYREF

  v3 = *(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 552);
  v4 = this;
  v5 = Ogre::Singleton<DefManager>::ms_Singleton + 548;
  while ( v3 != 0 )
  {
    if ( *(_DWORD *)(v3 + 16) < a2 )
    {
      v6 = *(_DWORD **)(v3 + 12);
      v3 = v5;
    }
    else
    {
      v6 = *(_DWORD **)(v3 + 8);
    }
    v5 = v3;
    v3 = (int)v6;
  }
  if ( v5 != Ogre::Singleton<DefManager>::ms_Singleton + 548 && a2 >= *(_DWORD *)(v5 + 16) && v5 != -20 )
  {
    (*(void (__fastcall **)(int, float))(*(_DWORD *)this + 36))(this, (float)*(int *)(v5 + 36));
    if ( *(int *)(v5 + 88) <= 0 )
    {
      v11 = (_DWORD *)(v5 + 40);
      for ( i = 3; i != 0; --i )
      {
        if ( (int)*v11 > 0 )
        {
          LODWORD(v13) = v4;
          HIDWORD(v13) = *v11;
          LivingAttrib::addBuff(v13, v11[3]);
        }
        ++v11;
      }
    }
    else
    {
      v7 = 0;
      do
      {
        if ( *(int *)(v5 + 20 + 4 * v3 + 20) > 0 )
          v21[v7++] = v3;
        ++v3;
      }
      while ( v3 != 3 );
      if ( v7 != 0 )
      {
        v8 = v21[GenRandomInt(v7)];
        LODWORD(v9) = v4;
        v10 = v5 + 4 * v8;
        HIDWORD(v9) = *(_DWORD *)(v10 + 40);
        LivingAttrib::addBuff(v9, *(_DWORD *)(v10 + 52));
      }
    }
    v14 = *(_DWORD *)(v5 + 92);
    if ( v14 == 1 )
    {
      LivingAttrib::clearRandomBuff((LivingAttrib *)v4);
    }
    else if ( v14 == 2 )
    {
      LivingAttrib::clearRandomBadBuff(v4);
    }
    if ( (float)(*(float *)(v4 + 64) + *(float *)(v5 + 28)) > 20.0 )
      *(_DWORD *)(v4 + 64) = 1101004800;
    else
      *(float *)(v4 + 64) = *(float *)(v4 + 64) + *(float *)(v5 + 28);
    v15 = *(float *)(v4 + 68) + *(float *)(v5 + 32);
    v16 = *(float *)(v4 + 64);
    *(float *)(v4 + 68) = v15;
    this = v15 > v16;
    if ( this != 0 )
      *(float *)(v4 + 68) = v16;
    if ( a3 != 0 )
    {
      v17 = *(ClientPlayer **)(v4 + 4);
      BackPack = (BackPack *)ClientPlayer::getBackPack(v17);
      v19 = ClientPlayer::getCurShortcut(v17) + 1000;
      if ( *(int *)(v5 + 76) <= 0 )
      {
        return BackPack::removeItem(BackPack, v19, 1);
      }
      else if ( BackPack::getGridNum(BackPack, v19) == 1 )
      {
        return BackPack::replaceItem(BackPack, v19, *(_DWORD *)(v5 + 76), 1, -1);
      }
      else
      {
        return BackPack::addItem(BackPack, *(_DWORD *)(v5 + 76), 1, 1);
      }
    }
  }
  return this;
}


//======================================================================
// PlayerAttrib::tick(void)
// address: 0x0026AE9C   size: 0x18 (24 bytes)
//======================================================================
ActorBody *__fastcall PlayerAttrib::tick(PlayerAttrib *this)
{
  ActorBody *result; // r0

  result = (ActorBody *)(*((float *)this + 2) <= 0.0);
  if ( result == nullptr )
    return LivingAttrib::tick(this);
  return result;
}

