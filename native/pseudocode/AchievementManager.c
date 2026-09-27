// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: AchievementManager

//======================================================================
// AchievementManager::~AchievementManager()
// address: 0x002CB384   size: 0x1C (28 bytes)
//======================================================================
// Alternative name is '_ZN18AchievementManagerD1Ev'
void __fastcall AchievementManager::~AchievementManager(AchievementManager *this)
{
  void *v2; // r0

  v2 = *((void **)this + 3);
  if ( v2 != nullptr )
    operator delete(v2);
  if ( *(_DWORD *)this != 0 )
    operator delete(*(void **)this);
}


//======================================================================
// AchievementManager::initAchievementState(AchievementDef const*)
// address: 0x002CB3A0   size: 0x1E (30 bytes)
//======================================================================
int __fastcall AchievementManager::initAchievementState(int a1, int a2)
{
  int v2; // r3

  if ( a2 != 0 )
  {
    v2 = 0;
    while ( *(int *)(a2 + v2 + 4) <= 0 )
    {
      v2 += 4;
      if ( v2 == 16 )
        return 2;
    }
  }
  return 0;
}


//======================================================================
// AchievementManager::loadAchievementList(tagAchievementList *)
// address: 0x002CB3BE   size: 0x70 (112 bytes)
//======================================================================
int __fastcall AchievementManager::loadAchievementList(int result, _DWORD *a2)
{
  int *v2; // r3
  int v3; // r12
  unsigned int j; // r2
  int v5; // r6
  int v6; // r5
  int v7; // r6
  int i; // [sp+4h] [bp-18h]
  int v9; // [sp+Ch] [bp-10h]
  int v10; // [sp+10h] [bp-Ch]
  int v11; // [sp+14h] [bp-8h]

  if ( a2 != nullptr )
  {
    v2 = a2 + 2;
    for ( i = 0; i < *a2; ++i )
    {
      v11 = *v2;
      v10 = v2[1];
      v9 = *((unsigned __int8 *)v2 + 8);
      v3 = *((unsigned __int8 *)v2 + 9);
      for ( j = 0; ; ++j )
      {
        v5 = *(_DWORD *)(result + 12);
        if ( j >= (*(_DWORD *)(result + 16) - v5) >> 4 )
          break;
        v6 = 16 * j;
        v7 = v5 + 16 * j;
        if ( **(_DWORD **)v7 == v11 )
        {
          *(_DWORD *)(v7 + 4) = v9;
          *(_DWORD *)(*(_DWORD *)(result + 12) + v6 + 12) = v10;
          if ( v3 == 1 )
            *(_DWORD *)(*(_DWORD *)(result + 12) + v6 + 8) = 2;
        }
      }
      v2 += 4;
    }
  }
  return result;
}


//======================================================================
// AchievementManager::loadAchievementUinList(tagAchievementList)
// address: 0x002CB42E   size: 0x88 (136 bytes)
//======================================================================
int __fastcall AchievementManager::loadAchievementUinList(int result, int a2)
{
  int *p_varg_r3; // r3
  unsigned int i; // r2
  int v4; // r6
  int v5; // r4
  _DWORD *v6; // r6
  int v7; // [sp+0h] [bp-1Ch]
  int v8; // [sp+4h] [bp-18h]
  int v9; // [sp+Ch] [bp-10h]
  int v10; // [sp+10h] [bp-Ch]
  int v11; // [sp+14h] [bp-8h]
  int varg_r3; // [sp+3Ch] [bp+20h] BYREF

  v8 = 0;
  p_varg_r3 = &varg_r3;
  while ( v8 < a2 )
  {
    v11 = *p_varg_r3;
    v10 = p_varg_r3[1];
    v9 = *((unsigned __int8 *)p_varg_r3 + 8);
    v7 = *((unsigned __int8 *)p_varg_r3 + 9);
    for ( i = 0; ; ++i )
    {
      v4 = *(_DWORD *)(result + 12);
      if ( i >= (*(_DWORD *)(result + 16) - v4) >> 4 )
        break;
      v5 = 16 * i;
      v6 = (_DWORD *)(v4 + 16 * i);
      if ( *(_DWORD *)*v6 == v11 && *(_DWORD *)(*v6 + 584) == 2 )
      {
        v6[1] = v9;
        *(_DWORD *)(*(_DWORD *)(result + 12) + v5 + 12) = v10;
        if ( v7 == 1 )
          *(_DWORD *)(*(_DWORD *)(result + 12) + v5 + 8) = 1;
      }
    }
    p_varg_r3 += 4;
    ++v8;
  }
  return result;
}


//======================================================================
// AchievementManager::setAchievementArryNum(int,int,int)
// address: 0x002CB4B8   size: 0x176 (374 bytes)
//======================================================================
int __fastcall AchievementManager::setAchievementArryNum(AchievementManager *this, int a2, int a3, int a4)
{
  int v6; // r3
  int result; // r0
  int v8; // r6
  int v9; // r3
  int v10; // r3
  int v11; // r0
  int v12; // r3
  int v13; // r2
  int v14; // r1
  int OWID; // r0
  int v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // [sp+8h] [bp-2Ch]
  int v20; // [sp+8h] [bp-2Ch]
  unsigned int i; // [sp+Ch] [bp-28h]
  int v22; // [sp+10h] [bp-24h]
  _DWORD v25[5]; // [sp+20h] [bp-14h] BYREF

  for ( i = 0; ; ++i )
  {
    v6 = *((_DWORD *)this + 3);
    result = *((_DWORD *)this + 4);
    if ( i >= (result - v6) >> 4 )
      break;
    v8 = 16 * i;
    if ( *(_DWORD *)(v6 + 16 * i + 4) == 2
      && (g_pPlayerCtrl == 0
       || World::isCreativeMode(*(World **)(g_pPlayerCtrl + 52)) == 0
       || *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 16 * i) + 584) != 1) )
    {
      v9 = *(_DWORD *)(*((_DWORD *)this + 3) + 16 * i);
      if ( *(_DWORD *)(v9 + 588) == a2 )
      {
        v19 = *(_DWORD *)(v9 + 592);
        if ( a3 != 0 )
        {
          if ( DefManager::getItemDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a3) != 0
            && *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 3) + 16 * i) + 580) != 0
            && *(int *)(DefManager::getItemDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a3) + 452) > 0 )
          {
            a3 = *(_DWORD *)(DefManager::getItemDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a3) + 452);
            if ( a3 != *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 3) + 16 * i) + 592) )
              continue;
          }
          else if ( a3 != v19 )
          {
            continue;
          }
        }
        v10 = *((_DWORD *)this + 3) + v8;
        v11 = *(_DWORD *)(v10 + 12);
        *(_DWORD *)(v10 + 12) = v11 + a4;
        v20 = v11;
        j_memset(v25, 0, 0x10u);
        v12 = *((_DWORD *)this + 3) + v8;
        v13 = **(_DWORD **)v12;
        v25[1] = *(_DWORD *)(v12 + 12);
        v14 = *(_DWORD *)(v12 + 4);
        v25[0] = v13;
        LOBYTE(v25[2]) = v14;
        if ( *(_DWORD *)(v12 + 8) == 2 )
          BYTE1(v25[2]) = 1;
        v22 = g_CSMgr;
        OWID = ClientPlayer::getOWID((ClientPlayer *)g_pPlayerCtrl);
        CSMgr::updateOWAchievement(v22, OWID);
        v16 = *(_DWORD *)(*((_DWORD *)this + 3) + 16 * i);
        if ( *(_DWORD *)(v16 + 584) == 2 )
          CSMgr::updateUinAchievement(g_CSMgr, *(_DWORD *)(v16 + 624), v25);
        GameEventQue::postAchievementChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
        v17 = *((_DWORD *)this + 3) + v8;
        v18 = *(_DWORD *)(*(_DWORD *)v17 + 596);
        if ( v20 < v18 && *(_DWORD *)(v17 + 12) >= v18 )
          GameEventQue::postAchievementReward(
            (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
            *(_DWORD *)(*(_DWORD *)v17 + 576),
            **(_DWORD **)v17);
      }
    }
  }
  return result;
}


//======================================================================
// AchievementManager::getAchievementArryNum(int)
// address: 0x002CB640   size: 0x28 (40 bytes)
//======================================================================
_DWORD *__fastcall AchievementManager::getAchievementArryNum(AchievementManager *this, int a2)
{
  _DWORD **v2; // r2
  int v3; // r3
  int v4; // r5
  _DWORD **v5; // r0
  _DWORD *v6; // r4

  v2 = *((_DWORD ***)this + 3);
  v3 = 0;
  v4 = (*((_DWORD *)this + 4) - (int)v2) >> 4;
  while ( v3 != v4 )
  {
    v5 = v2;
    v6 = *v2;
    v2 += 4;
    if ( *v6 == a2 )
      return v5[3];
    ++v3;
  }
  return nullptr;
}


//======================================================================
// AchievementManager::getAchievementSize(void)
// address: 0x002CB668   size: 0xA (10 bytes)
//======================================================================
int __fastcall AchievementManager::getAchievementSize(AchievementManager *this)
{
  return (*((_DWORD *)this + 4) - *((_DWORD *)this + 3)) >> 4;
}


//======================================================================
// AchievementManager::getAchievementDef(int)
// address: 0x002CB672   size: 0x22 (34 bytes)
//======================================================================
_DWORD *__fastcall AchievementManager::getAchievementDef(AchievementManager *this, int a2)
{
  int v2; // r2
  int v3; // r3
  int v4; // r4
  _DWORD *result; // r0

  v2 = *((_DWORD *)this + 3);
  v3 = 0;
  v4 = (*((_DWORD *)this + 4) - v2) >> 4;
  while ( v3 != v4 )
  {
    result = *(_DWORD **)(v2 + 16 * v3);
    if ( *result == a2 )
      return result;
    ++v3;
  }
  return nullptr;
}


//======================================================================
// AchievementManager::setAchievementState(int,int)
// address: 0x002CB694   size: 0x9A (154 bytes)
//======================================================================
int __fastcall AchievementManager::setAchievementState(int this, int a2, int a3)
{
  int v3; // r6
  unsigned int i; // r5
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r2
  int v9; // r2
  int v10; // r3
  int OWID; // r0
  int v12; // r3
  int v13; // [sp+4h] [bp-20h]
  _DWORD v16[5]; // [sp+10h] [bp-14h] BYREF

  v3 = this;
  for ( i = 0; ; ++i )
  {
    v5 = *(_DWORD *)(v3 + 12);
    if ( i >= (*(_DWORD *)(v3 + 16) - v5) >> 4 )
      break;
    v6 = v5 + 16 * i;
    if ( **(_DWORD **)v6 == a2 )
    {
      *(_DWORD *)(v6 + 4) = a3;
      j_memset(v16, 0, 0x10u);
      v7 = *(_DWORD *)(v3 + 12) + 16 * i;
      v8 = **(_DWORD **)v7;
      LOBYTE(v16[2]) = a3;
      v16[0] = v8;
      v9 = *(_DWORD *)(v7 + 12);
      v10 = *(_DWORD *)(v7 + 8);
      v16[1] = v9;
      if ( v10 == 2 )
        BYTE1(v16[2]) = 1;
      v13 = g_CSMgr;
      OWID = ClientPlayer::getOWID((ClientPlayer *)g_pPlayerCtrl);
      this = CSMgr::updateOWAchievement(v13, OWID);
      v12 = *(_DWORD *)(*(_DWORD *)(v3 + 12) + 16 * i);
      if ( *(_DWORD *)(v12 + 584) == 2 )
        this = CSMgr::updateUinAchievement(g_CSMgr, *(_DWORD *)(v12 + 624), v16);
    }
  }
  return this;
}


//======================================================================
// AchievementManager::getAchievementState(int)
// address: 0x002CB738   size: 0x2A (42 bytes)
//======================================================================
int __fastcall AchievementManager::getAchievementState(AchievementManager *this, int a2)
{
  _DWORD **v2; // r2
  int v3; // r3
  int v4; // r5
  _DWORD **v5; // r0
  _DWORD *v6; // r4

  v2 = *((_DWORD ***)this + 3);
  v3 = 0;
  v4 = (*((_DWORD *)this + 4) - (int)v2) >> 4;
  while ( v3 != v4 )
  {
    v5 = v2;
    v6 = *v2;
    v2 += 4;
    if ( *v6 == a2 )
      return (int)v5[1];
    ++v3;
  }
  return -1;
}


//======================================================================
// AchievementManager::setAchievementRewardState(int,int)
// address: 0x002CB764   size: 0x9E (158 bytes)
//======================================================================
int __fastcall AchievementManager::setAchievementRewardState(int this, int a2, int a3)
{
  int v3; // r7
  int v4; // r4
  int **v5; // r4
  int v6; // r3
  int v7; // r4
  int OWID; // r0
  unsigned int i; // [sp+0h] [bp-24h]
  _DWORD v12[5]; // [sp+10h] [bp-14h] BYREF

  v3 = this;
  for ( i = 0; ; ++i )
  {
    v4 = *(_DWORD *)(v3 + 12);
    if ( i >= (*(_DWORD *)(v3 + 16) - v4) >> 4 )
      break;
    v5 = (int **)(v4 + 16 * i);
    if ( **v5 == a2 )
    {
      j_memset(v12, 0, 0x10u);
      v6 = **v5;
      v12[1] = v5[3];
      v12[0] = v6;
      LOBYTE(v12[2]) = (unsigned __int8)v5[1];
      if ( a3 == 2 && v5[2] != (int *)((char *)&dword_0 + 2) )
      {
        BYTE1(v12[2]) = 1;
        CSMgr::updateUinAchievement(g_CSMgr, (*v5)[156], v12);
      }
      v7 = g_CSMgr;
      OWID = ClientPlayer::getOWID((ClientPlayer *)g_pPlayerCtrl);
      this = CSMgr::updateOWAchievement(v7, OWID);
      *(_DWORD *)(*(_DWORD *)(v3 + 12) + 16 * i + 8) = a3;
    }
  }
  return this;
}


//======================================================================
// AchievementManager::getAchievementRewardState(int)
// address: 0x002CB80C   size: 0x2A (42 bytes)
//======================================================================
int __fastcall AchievementManager::getAchievementRewardState(AchievementManager *this, int a2)
{
  _DWORD **v2; // r2
  int v3; // r3
  int v4; // r5
  _DWORD **v5; // r0
  _DWORD *v6; // r4

  v2 = *((_DWORD ***)this + 3);
  v3 = 0;
  v4 = (*((_DWORD *)this + 4) - (int)v2) >> 4;
  while ( v3 != v4 )
  {
    v5 = v2;
    v6 = *v2;
    v2 += 4;
    if ( *v6 == a2 )
      return (int)v5[2];
    ++v3;
  }
  return -1;
}


//======================================================================
// AchievementManager::getTotalGameStatistics(int,int)
// address: 0x002CB838   size: 0x2E (46 bytes)
//======================================================================
int __fastcall AchievementManager::getTotalGameStatistics(AchievementManager *this, int a2, int a3)
{
  _DWORD *v3; // r3
  int v4; // r4
  int i; // r0

  v3 = *(_DWORD **)this;
  v4 = -1431655765 * ((*((_DWORD *)this + 1) - *(_DWORD *)this) >> 2);
  for ( i = 0; i != v4; ++i )
  {
    if ( *v3 == a2 && v3[1] == a3 )
      return v3[2];
    v3 += 3;
  }
  return 0;
}


//======================================================================
// AchievementManager::setCurTrackID(int)
// address: 0x002CB86C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall AchievementManager::setCurTrackID(int this, int a2)
{
  *(_DWORD *)(this + 24) = a2;
  return this;
}


//======================================================================
// AchievementManager::getCurTrackID(void)
// address: 0x002CB870   size: 0x4 (4 bytes)
//======================================================================
int __fastcall AchievementManager::getCurTrackID(AchievementManager *this)
{
  return *((_DWORD *)this + 6);
}


//======================================================================
// AchievementManager::initAchievementInfo(void)
// address: 0x002CB8F8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall AchievementManager::initAchievementInfo(AchievementManager *this)
{
  int i; // r6
  int result; // r0
  int inited; // r0
  int *v5; // r1
  int *v6; // r2
  int *v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // [sp+0h] [bp-14h] BYREF
  int v11; // [sp+4h] [bp-10h]
  int v12; // [sp+8h] [bp-Ch]
  int v13; // [sp+Ch] [bp-8h]

  for ( i = *(_DWORD *)(Ogre::Singleton<DefManager>::ms_Singleton + 628); ; i = sub_391DDC(i) )
  {
    result = 620;
    if ( i == Ogre::Singleton<DefManager>::ms_Singleton + 620 )
      break;
    v10 = i + 20;
    inited = AchievementManager::initAchievementState((int)this, i + 20);
    v5 = *((int **)this + 4);
    v6 = *((int **)this + 5);
    v11 = inited;
    v12 = 0;
    v13 = 0;
    if ( v5 == v6 )
    {
      std::vector<AchievementInfo>::_M_emplace_back_aux<AchievementInfo const&>((int)this + 12, &v10);
    }
    else
    {
      if ( v5 != nullptr )
      {
        v7 = v5;
        v8 = v11;
        v9 = v12;
        *v7 = v10;
        v7[1] = v8;
        v7[2] = v9;
        v7[3] = v13;
      }
      *((_DWORD *)this + 4) += 16;
    }
  }
  return result;
}


//======================================================================
// AchievementManager::AchievementManager(void)
// address: 0x002CB968   size: 0x24 (36 bytes)
//======================================================================
// Alternative name is '_ZN18AchievementManagerC1Ev'
void __fastcall AchievementManager::AchievementManager(AchievementManager *this)
{
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 1) = 0;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  g_AchievementMgr = (int)this;
  AchievementManager::initAchievementInfo(this);
}


//======================================================================
// AchievementManager::setTotalGameStatistics(int,int,int)
// address: 0x002CBA4C   size: 0x66 (102 bytes)
//======================================================================
void __fastcall AchievementManager::setTotalGameStatistics(AchievementManager *this, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  _DWORD *v6; // r4
  int i; // r1
  _DWORD *v8; // r3
  int v9; // [sp+4h] [bp-10h] BYREF
  int v10; // [sp+8h] [bp-Ch]
  int v11; // [sp+Ch] [bp-8h]

  v5 = *((_DWORD **)this + 1);
  v6 = *(_DWORD **)this;
  for ( i = 0; i != -1431655765 * (((int)v5 - *(_DWORD *)this) >> 2); ++i )
  {
    if ( *v6 == a2 && v6[1] == a4 )
    {
      v6[2] += a3;
      return;
    }
    v6 += 3;
  }
  v10 = a4;
  v8 = *((_DWORD **)this + 2);
  v9 = a2;
  v11 = a3;
  if ( v5 == v8 )
  {
    std::vector<GameStatistics>::_M_emplace_back_aux<GameStatistics const&>((int)this, &v9);
  }
  else
  {
    if ( v5 != nullptr )
    {
      *v5 = a2;
      v5[1] = v10;
      v5[2] = v11;
    }
    *((_DWORD *)this + 1) += 12;
  }
}

