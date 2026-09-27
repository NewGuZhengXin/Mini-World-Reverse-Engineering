// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: UseBowOperate

//======================================================================
// UseBowOperate::~UseBowOperate()
// address: 0x002D70E0   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN13UseBowOperateD1Ev'
void __fastcall UseBowOperate::~UseBowOperate(UseBowOperate *this)
{
  *(_DWORD *)this = &off_462258;
}


//======================================================================
// UseBowOperate::~UseBowOperate()
// address: 0x002D713A   size: 0x12 (18 bytes)
//======================================================================
void __fastcall UseBowOperate::~UseBowOperate(UseBowOperate *this)
{
  UseBowOperate::~UseBowOperate(this);
  operator delete(this);
}


//======================================================================
// UseBowOperate::begin(OperateTarget *,OperateTool *)
// address: 0x002D72CC   size: 0x58 (88 bytes)
//======================================================================
int __fastcall UseBowOperate::begin(int a1)
{
  int v2; // r3
  int v3; // r7
  BackPack *BackPack; // r0

  BlockOperate::begin();
  *(_DWORD *)(a1 + 16) = 0;
  *(_BYTE *)(a1 + 24) = 0;
  v2 = g_pPlayerCtrl;
  *(_DWORD *)(a1 + 20) = -1;
  v3 = *(_DWORD *)(v2 + 76);
  if ( World::isCreativeMode(*(World **)(a1 + 4)) == 0
    && COERCE_FLOAT(LivingAttrib::getEquipEnchantValue(v3, 5, 15, -1, -1)) == 0.0 )
  {
    BackPack = (BackPack *)ClientPlayer::getBackPack((ClientPlayer *)g_pPlayerCtrl);
    if ( (int)BackPack::findItemInNormalPack(BackPack, 2051) < 0 )
      *(_BYTE *)(a1 + 24) = 1;
  }
  return 5;
}


//======================================================================
// UseBowOperate::UseBowOperate(void)
// address: 0x002D7B54   size: 0xC (12 bytes)
//======================================================================
// Alternative name is '_ZN13UseBowOperateC1Ev'
void __fastcall UseBowOperate::UseBowOperate(UseBowOperate *this)
{
  *(_DWORD *)this = &off_460C38;
}


//======================================================================
// UseBowOperate::setBowStage(int)
// address: 0x002D7B64   size: 0x8A (138 bytes)
//======================================================================
int __fastcall UseBowOperate::setBowStage(int this, int a2)
{
  int v3; // r5
  CameraModel *v4; // r7
  char s[64]; // [sp+14h] [bp-48h] BYREF

  v3 = this;
  if ( a2 != *(_DWORD *)(this + 20) )
  {
    v4 = *(CameraModel **)(g_pPlayerCtrl + 324);
    if ( a2 < 0 )
    {
      CameraModel::setCurTool(
        *(CameraModel **)(g_pPlayerCtrl + 324),
        **(ClientItem ***)(this + 12),
        nullptr,
        0,
        nullptr);
      this = CameraModel::playHandAnim(v4, 101100);
      *(_BYTE *)(*(_DWORD *)(g_pPlayerCtrl + 260) + 97) = 0;
    }
    else
    {
      j_sprintf(s, "bow_pulling_%d", a2);
      CameraModel::setCurTool(v4, **(ClientItem ***)(v3 + 12), s, 0, nullptr);
      this = CameraModel::playHandAnim(v4, 101111);
    }
    *(_DWORD *)(v3 + 20) = a2;
  }
  return this;
}


//======================================================================
// UseBowOperate::update(int,IntersectResult &)
// address: 0x002D7C04   size: 0x46 (70 bytes)
//======================================================================
int __fastcall UseBowOperate::update(UseBowOperate *this)
{
  int v2; // r1
  int v3; // r3
  int v4; // r3
  int v5; // r2

  v2 = 2;
  v3 = *((_DWORD *)this + 4) + 1;
  *((_DWORD *)this + 4) = v3;
  if ( v3 <= 17 )
  {
    v2 = v3 > 13;
    if ( v3 == 10 )
    {
      v4 = g_pPlayerCtrl + 252;
      v5 = *(_DWORD *)(g_pPlayerCtrl + 260);
      *(_DWORD *)(v5 + 104) = 1056964608;
      *(_DWORD *)(v5 + 108) = 1048576000;
      *(_BYTE *)(*(_DWORD *)(v4 + 8) + 97) = 1;
    }
  }
  UseBowOperate::setBowStage((int)this, v2);
  return *((unsigned __int8 *)this + 24);
}


//======================================================================
// UseBowOperate::end(void)
// address: 0x002D7C50   size: 0x11A (282 bytes)
//======================================================================
int __fastcall UseBowOperate::end(UseBowOperate *this)
{
  float v2; // r5
  float v3; // r0
  int result; // r0
  float v5; // r3
  int v6; // r6
  BackPack *BackPack; // r0
  int v8; // r7
  BackPack *v9; // r0

  UseBowOperate::setBowStage((int)this, -1);
  if ( *((_BYTE *)this + 24) != 0 )
    GameEventQue::postInfoTips((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 7);
  v2 = (float)((float)((float)((float)*((int *)this + 4) / 20.0) * (float)((float)*((int *)this + 4) / 20.0))
             + (float)((float)((float)*((int *)this + 4) / 20.0) + (float)((float)*((int *)this + 4) / 20.0)))
     / 3.0;
  v3 = GenRandomFloat();
  ClientActor::playSound(
    (ClientActor *)g_pPlayerCtrl,
    "random.bow",
    1.0,
    (float)(1.0 / (float)((float)(v3 * 0.4) + 1.2)) + (float)(v2 * 0.5));
  result = v2 >= 0.1;
  if ( v2 >= 0.1 )
  {
    if ( v2 > 1.0 )
      v2 = 1.0;
    if ( World::isCreativeMode(*((World **)this + 1)) != 0
      || (v6 = -1,
          COERCE_FLOAT(LivingAttrib::getEquipEnchantValue(*(_DWORD *)(g_pPlayerCtrl + 76), 5, 15, -1, -1)) != 0.0) )
    {
      v6 = -2;
    }
    else
    {
      BackPack = (BackPack *)ClientPlayer::getBackPack((ClientPlayer *)g_pPlayerCtrl);
      result = BackPack::findItemInNormalPack(BackPack, 2051);
      v8 = result;
      if ( result < 0 )
        return result;
      v9 = (BackPack *)ClientPlayer::getBackPack((ClientPlayer *)g_pPlayerCtrl);
      BackPack::removeItem(v9, v8, 1);
    }
    ClientActorArrow::shootArrow(
      *(ClientActorMgr ***)(g_pPlayerCtrl + 52),
      (World *)g_pPlayerCtrl,
      (ClientActor *)LODWORD(v2),
      v5);
    return PlayerControl::addCurToolDuration((PlayerControl *)g_pPlayerCtrl, v6);
  }
  return result;
}

