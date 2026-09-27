// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: PlayerControl

//======================================================================
// PlayerControl::~PlayerControl()
// address: 0x002D4258   size: 0x6E (110 bytes)
//======================================================================
// Alternative name is '_ZN13PlayerControlD1Ev'
void __fastcall PlayerControl::~PlayerControl(PlayerControl *this)
{
  char *v1; // r5
  void *v2; // r6
  void *v4; // r6
  void *v5; // r6
  GameCamera *v6; // r5

  v1 = (char *)this + 252;
  *(_DWORD *)this = &off_460820;
  v2 = *((void **)this + 82);
  if ( v2 != nullptr )
  {
    TouchControl::~TouchControl(*((TouchControl **)this + 82));
    operator delete(v2);
  }
  v4 = *((void **)v1 + 18);
  if ( v4 != nullptr )
  {
    CameraModel::~CameraModel(*((CameraModel **)v1 + 18));
    operator delete(v4);
  }
  v5 = *((void **)v1 + 3);
  if ( v5 != nullptr )
  {
    BlockOperateMgr::~BlockOperateMgr(*((BlockOperateMgr **)v1 + 3));
    operator delete(v5);
  }
  v6 = *((GameCamera **)v1 + 2);
  if ( v6 != nullptr )
  {
    GameCamera::~GameCamera(v6);
    operator delete(v6);
  }
  g_pPlayerCtrl = 0;
  ClientPlayer::~ClientPlayer(this);
}


//======================================================================
// PlayerControl::~PlayerControl()
// address: 0x002D42D0   size: 0x12 (18 bytes)
//======================================================================
void __fastcall PlayerControl::~PlayerControl(PlayerControl *this)
{
  PlayerControl::~PlayerControl(this);
  operator delete(this);
}


//======================================================================
// PlayerControl::onSetCurShortcut(int)
// address: 0x002D42E4   size: 0x58 (88 bytes)
//======================================================================
int *__fastcall PlayerControl::onSetCurShortcut(PlayerControl *this, int a2)
{
  _DWORD *v2; // r4
  BlockOperateMgr **v4; // r6
  ClientItem *v5; // r7
  int v6; // r4
  int *v8; // [sp+0h] [bp-Ch]

  v2 = *((_DWORD **)this + 19);
  v4 = (BlockOperateMgr **)((char *)this + 252);
  if ( v2[21] != a2 )
  {
    BlockOperateMgr::endOperate(*((BlockOperateMgr **)this + 66));
    v2[21] = a2;
  }
  v5 = (ClientItem *)(*(int (__fastcall **)(_DWORD *, int))(*v2 + 44))(v2, 5);
  v6 = (*(int (__fastcall **)(_DWORD *, int))(*v2 + 56))(v2, 5);
  BlockOperateMgr::setOperateTool(v4[3], (int)v5);
  CameraModel::setCurTool(v4[18], v5, nullptr, *(_DWORD *)(v6 + 28), (const int *)(v6 + 32));
  GameEventQue::postShortcutSelected((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, a2);
  return v8;
}


//======================================================================
// PlayerControl::addAchievement(int,ACHIEVEMENT_TYPE,int,int)
// address: 0x002D4340   size: 0x38 (56 bytes)
//======================================================================
void __fastcall PlayerControl::addAchievement(int a1, char a2, int a3, int a4, int a5)
{
  if ( (a2 & 1) != 0 )
    AchievementManager::setAchievementArryNum((AchievementManager *)g_AchievementMgr, a3, a4, a5);
  if ( (a2 & 2) != 0 )
    AchievementManager::setTotalGameStatistics((AchievementManager *)g_AchievementMgr, a3, a5, a4);
}


//======================================================================
// PlayerControl::PlayerControl(void)
// address: 0x002D440C   size: 0x94 (148 bytes)
//======================================================================
// Alternative name is '_ZN13PlayerControlC1Ev'
void __fastcall PlayerControl::PlayerControl(PlayerControl *this)
{
  GameCamera *v2; // r6
  BlockOperateMgr *v3; // r6
  int v4; // r3
  Ogre::UIRenderer *v5; // r7
  TouchControl *v6; // r6

  ClientPlayer::ClientPlayer(this);
  *(_DWORD *)this = &off_460820;
  *((_DWORD *)this + 65) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_DWORD *)this + 81) = 0;
  v2 = (GameCamera *)operator new(0x70u);
  GameCamera::GameCamera(v2);
  *((_DWORD *)this + 65) = v2;
  v3 = (BlockOperateMgr *)operator new(0x64u);
  BlockOperateMgr::BlockOperateMgr(v3);
  v4 = *((_DWORD *)this + 65);
  *((_DWORD *)this + 66) = v3;
  BlockOperateMgr::setCurCamera(v3, *(Ogre::Camera **)(v4 + 4));
  BlockOperateMgr::setOperateTool(*((BlockOperateMgr **)this + 66), 0);
  *((_DWORD *)this + 80) = -1;
  g_pPlayerCtrl = (int)this;
  *((_DWORD *)this + 68) = 0;
  *((_DWORD *)this + 69) = 0;
  *((_DWORD *)this + 70) = 0;
  *((_DWORD *)this + 67) = 0;
  *((_DWORD *)this + 73) = 0;
  *((_DWORD *)this + 71) = 0;
  *((_DWORD *)this + 72) = 0;
  *((_BYTE *)this + 296) = 0;
  *((_DWORD *)this + 75) = 0;
  *((_DWORD *)this + 76) = 0;
  v5 = *(Ogre::UIRenderer **)(Ogre::Singleton<ClientManager>::ms_Singleton + 12);
  v6 = (TouchControl *)operator new(0x7Cu);
  TouchControl::TouchControl(v6, v5);
  *((_DWORD *)this + 82) = v6;
}


//======================================================================
// PlayerControl::setCurShortcut(int)
// address: 0x002D44C4   size: 0x46 (70 bytes)
//======================================================================
int __fastcall PlayerControl::setCurShortcut(PlayerControl *this, unsigned int a2)
{
  unsigned int v4; // r4

  if ( (a2 & 0x80000000) != 0 )
  {
    v4 = 9;
  }
  else if ( ClientManager::isMobile((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton) != 0 )
  {
    v4 = a2 & -((a2 >> 31) + (a2 <= 5));
  }
  else
  {
    v4 = a2 & -((a2 >> 31) + (a2 <= 9));
  }
  return (*(int (__fastcall **)(PlayerControl *, unsigned int))(*(_DWORD *)this + 204))(this, v4);
}


//======================================================================
// PlayerControl::setFlyMode(bool)
// address: 0x002D4510   size: 0x26 (38 bytes)
//======================================================================
int __fastcall PlayerControl::setFlyMode(int this, int a2)
{
  int v2; // r4

  v2 = *(_DWORD *)(this + 68);
  if ( *(unsigned __int8 *)(v2 + 184) != a2 )
  {
    *(_BYTE *)(v2 + 184) = a2;
    if ( a2 != 0 )
    {
      this = *(float *)(v2 + 76) <= 10.0;
      if ( *(float *)(v2 + 76) <= 10.0 )
        *(_DWORD *)(v2 + 76) = 1092616192;
    }
  }
  return this;
}


//======================================================================
// PlayerControl::getFlyMode(void)
// address: 0x002D453C   size: 0x8 (8 bytes)
//======================================================================
int __fastcall PlayerControl::getFlyMode(PlayerControl *this)
{
  return *(unsigned __int8 *)(*((_DWORD *)this + 17) + 184);
}


//======================================================================
// PlayerControl::setMoveUp(int)
// address: 0x002D4544   size: 0x6 (6 bytes)
//======================================================================
char *__fastcall PlayerControl::setMoveUp(PlayerControl *this, int a2)
{
  char *result; // r0

  result = (char *)this + 252;
  *((_DWORD *)result + 10) = a2;
  return result;
}


//======================================================================
// PlayerControl::cancelMoveUp(int)
// address: 0x002D454A   size: 0x10 (16 bytes)
//======================================================================
char *__fastcall PlayerControl::cancelMoveUp(PlayerControl *this, int a2)
{
  char *result; // r0

  result = (char *)this + 252;
  if ( *((_DWORD *)result + 10) == a2 )
    *((_DWORD *)result + 10) = 0;
  return result;
}


//======================================================================
// PlayerControl::setJumping(bool)
// address: 0x002D455C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall PlayerControl::setJumping(int this, int a2)
{
  _DWORD *v2; // r4

  v2 = (_DWORD *)this;
  *(_BYTE *)(*(_DWORD *)(this + 68) + 156) = a2;
  if ( a2 != 0 )
  {
    this = ClientManager::isMobile((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton);
    if ( this != 0 && v2[20] != 0 )
      return (*(int (__fastcall **)(_DWORD *, _DWORD))(*v2 + 148))(v2, 0);
  }
  return this;
}


//======================================================================
// PlayerControl::setUIHide(bool,bool)
// address: 0x002D4594   size: 0x3C (60 bytes)
//======================================================================
int __fastcall PlayerControl::setUIHide(CameraModel **this, bool a2, bool a3)
{
  *(_BYTE *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49) = a2;
  CameraModel::show(*(this + 81), !a2);
  return (*(int (**)(void))(*(_DWORD *)Ogre::Singleton<Ogre::RenderSystem>::ms_Singleton + 72))();
}


//======================================================================
// PlayerControl::setUseItem(bool)
// address: 0x002D45D8   size: 0x18 (24 bytes)
//======================================================================
int __fastcall PlayerControl::setUseItem(PlayerControl *this, int a2)
{
  BlockOperateMgr *v2; // r0

  v2 = *((BlockOperateMgr **)this + 66);
  if ( a2 != 0 )
    return BlockOperateMgr::beginOperate(v2, 2);
  else
    return BlockOperateMgr::endOperate(v2);
}


//======================================================================
// PlayerControl::setViewMode(int)
// address: 0x002D45F0   size: 0x3C (60 bytes)
//======================================================================
int __fastcall PlayerControl::setViewMode(PlayerControl *this, int a2)
{
  char *v2; // r4
  _DWORD *v4; // r0
  __int64 v5; // r0
  CameraModel *v6; // r0
  bool v7; // r1

  v2 = (char *)this + 252;
  *((_DWORD *)this + 67) = a2;
  v4 = *((_DWORD **)this + 65);
  if ( (unsigned int)(a2 - 1) > 1 )
  {
    GameCamera::setMode(v4, 0);
    ActorBody::show(*((unsigned int *)this + 16));
    v6 = *((CameraModel **)v2 + 18);
    v7 = true;
  }
  else
  {
    GameCamera::setMode(v4, a2);
    LODWORD(v5) = *((_DWORD *)this + 16);
    HIDWORD(v5) = 1;
    ActorBody::show(v5);
    v6 = *((CameraModel **)v2 + 18);
    v7 = false;
  }
  return CameraModel::show(v6, v7);
}


//======================================================================
// PlayerControl::changePlayerModel(int)
// address: 0x002D462C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall PlayerControl::changePlayerModel(PlayerControl *this, const char *a2)
{
  void *v4; // r5
  ActorBody *v5; // r5
  void *v6; // r5
  CameraModel *v7; // r5

  ActorBody::onLeaveWorld(*((_DWORD *)this + 16));
  v4 = *((void **)this + 16);
  if ( v4 != nullptr )
  {
    ActorBody::~ActorBody(*((ActorBody **)this + 16));
    operator delete(v4);
  }
  v5 = (ActorBody *)operator new(0x6Cu);
  ActorBody::ActorBody(v5, this);
  *((_DWORD *)this + 16) = v5;
  ActorBody::initPlayer((Ogre::Model **)v5, a2);
  ActorBody::onEnterWorld(*((_DWORD *)this + 16), *((void **)this + 13));
  CameraModel::onLeaveWorld(*((CameraModel **)this + 81));
  v6 = *((void **)this + 81);
  if ( v6 != nullptr )
  {
    CameraModel::~CameraModel(*((CameraModel **)this + 81));
    operator delete(v6);
  }
  v7 = (CameraModel *)operator new(0x10u);
  CameraModel::CameraModel(v7, (int)a2);
  *((_DWORD *)this + 81) = v7;
  CameraModel::onEnterWorld(v7, *((World **)this + 13));
  return PlayerControl::setViewMode(this, *((_DWORD *)this + 67));
}


//======================================================================
// PlayerControl::addCurToolDuration(int)
// address: 0x002D46B4   size: 0x22 (34 bytes)
//======================================================================
int __fastcall PlayerControl::addCurToolDuration(PlayerControl *this, int a2)
{
  BackPack *BackPack; // r6
  int CurShortcut; // r0

  BackPack = (BackPack *)ClientPlayer::getBackPack(this);
  CurShortcut = ClientPlayer::getCurShortcut(this);
  return BackPack::addItemDuration(BackPack, CurShortcut + 1000, a2);
}


//======================================================================
// PlayerControl::syncMove(void)
// address: 0x002D46D6   size: 0x2 (2 bytes)
//======================================================================
void __fastcall PlayerControl::syncMove(PlayerControl *this)
{
  ;
}


//======================================================================
// PlayerControl::syncRotate(void)
// address: 0x002D46D8   size: 0x2 (2 bytes)
//======================================================================
void __fastcall PlayerControl::syncRotate(PlayerControl *this)
{
  ;
}


//======================================================================
// PlayerControl::onInputEvent(Ogre::InputEvent const&)
// address: 0x002D46DC   size: 0x38C (908 bytes)
//======================================================================
int __fastcall PlayerControl::onInputEvent(PlayerControl *this, const InputEvent *a2)
{
  XtInputCallbackProc ie_proc; // r3
  float v5; // r0
  float v6; // r6
  unsigned int v7; // r1
  int v8; // r0
  int v9; // r1
  int *v10; // r3
  int v11; // r3
  int v12; // r3
  int v13; // r3
  int v14; // r3
  char v15; // r2
  char *v16; // r3
  int *ie_closure; // r1
  unsigned int v18; // r1
  char v19; // r1
  const char *v20; // r2
  int v22; // [sp+0h] [bp-14h]
  int v23; // [sp+4h] [bp-10h]
  int v24; // [sp+8h] [bp-Ch]

  v23 = (*(int (__fastcall **)(_DWORD))(**((_DWORD **)this + 17) + 48))(*((_DWORD *)this + 17));
  v22 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 88);
  v24 = *(_DWORD *)(Ogre::Singleton<Ogre::Root>::ms_Singleton + 92);
  if ( (unsigned int)a2->ie_proc - 3 <= 1 )
    return 0;
  if ( TouchControl::onInputEvent(*((TouchControl **)this + 82), this, a2) != 0 )
    goto LABEL_90;
  ie_proc = a2->ie_proc;
  if ( a2->ie_proc == (XtInputCallbackProc)byte_9 )
  {
    GameCamera::rotate(
      *((GameCamera **)this + 65),
      (float)(SLOWORD(a2->ie_closure) - v22 / 2) / (float)v22,
      (float)(SHIWORD(a2->ie_closure) - v24 / 2) / (float)v24);
    PlayerControl::syncRotate(this);
    goto LABEL_90;
  }
  if ( ie_proc == (XtInputCallbackProc)&byte_9[1] )
  {
    v5 = *(float *)&s_WheelDist + *(float *)&a2->ie_closure;
    s_WheelDist = LODWORD(v5);
    v6 = v5;
    if ( v5 < 0.0 )
      LODWORD(v5) += 0x80000000;
    if ( v5 > 0.5 )
    {
      if ( v6 <= 0.0 )
        v7 = ClientPlayer::getCurShortcut(this) + 1;
      else
        v7 = ClientPlayer::getCurShortcut(this) - 1;
      PlayerControl::setCurShortcut(this, v7);
      s_WheelDist = 0;
    }
    goto LABEL_90;
  }
  if ( ie_proc == (XtInputCallbackProc)((char *)&dword_0 + 3) )
  {
    v8 = *((_DWORD *)this + 66);
    v9 = 1;
LABEL_18:
    BlockOperateMgr::beginOperate(v8, v9);
    goto LABEL_90;
  }
  if ( ie_proc != (XtInputCallbackProc)&byte_4 )
  {
    if ( ie_proc == (XtInputCallbackProc)&byte_6 )
    {
      v8 = *((_DWORD *)this + 66);
      v9 = 2;
      goto LABEL_18;
    }
    if ( ie_proc != (XtInputCallbackProc)&byte_7 )
    {
      if ( ie_proc != (XtInputCallbackProc)((char *)&dword_0 + 1) )
      {
        if ( ie_proc != (XtInputCallbackProc)((char *)&dword_0 + 2) )
          goto LABEL_90;
        ie_closure = (int *)a2->ie_closure;
        if ( (unsigned int)(ie_closure - 12) <= 9 )
        {
          if ( ie_closure == (int *)&word_30 )
            v18 = 9;
          else
            v18 = (unsigned int)ie_closure - 49;
          PlayerControl::setCurShortcut(this, v18);
          goto LABEL_90;
        }
        if ( ie_closure == (int *)((char *)&dword_70 + 3) )
        {
          v19 = *(_BYTE *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49) ^ 1;
          *(_BYTE *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49) = v19;
          PlayerControl::setUIHide((CameraModel **)this, v19, false);
          GameEventQue::postHideUI(
            (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
            *(_BYTE *)(Ogre::Singleton<ClientManager>::ms_Singleton + 49));
          goto LABEL_90;
        }
        if ( ie_closure == &dword_74 )
        {
          PlayerControl::setViewMode(this, (*((_DWORD *)this + 67) + 1) % 3);
          goto LABEL_90;
        }
        if ( ie_closure == (int *)((char *)&dword_74 + 1) )
        {
          v20 = (const char *)(dword_468C24 + 1);
          if ( dword_468C24 + 1 > 10 )
            v20 = (_BYTE *)(&dword_0 + 1);
          dword_468C24 = (int)v20;
          PlayerControl::changePlayerModel(this, v20);
          goto LABEL_90;
        }
        if ( ie_closure == (int *)((char *)&dword_74 + 2) )
        {
          (*(void (__fastcall **)(int))(*(_DWORD *)Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton + 16))(Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton);
          Ogre::UIRenderer::saveResTable((Ogre::UIRenderer *)Ogre::Singleton<Ogre::UIRenderer>::ms_Singleton);
          goto LABEL_90;
        }
        if ( ie_closure == (int *)((char *)&dword_74 + 3) )
        {
          *(_BYTE *)(Ogre::Singleton<DebugDataMgr>::ms_Singleton + 20) ^= 1u;
          goto LABEL_90;
        }
        if ( ie_closure == (int *)((char *)&dword_54 + 3) )
        {
          if ( *((float *)this + 71) > 0.0 )
            *((_DWORD *)this + 71) = 0;
          v16 = (char *)(*((_DWORD *)this + 17) + 128);
        }
        else
        {
          if ( ie_closure == (int *)((char *)&dword_50 + 3) )
          {
            if ( *((float *)this + 71) < 0.0 )
              *((_DWORD *)this + 71) = 0;
            goto LABEL_90;
          }
          if ( ie_closure == (int *)((char *)&dword_40 + 1) )
          {
            if ( *((float *)this + 72) < 0.0 )
              *((_DWORD *)this + 72) = 0;
            goto LABEL_90;
          }
          if ( ie_closure == &dword_44 )
          {
            if ( *((float *)this + 72) > 0.0 )
              *((_DWORD *)this + 72) = 0;
            goto LABEL_90;
          }
          if ( ie_closure == &dword_20 )
          {
            if ( *((int *)this + 73) > 0 )
              *((_DWORD *)this + 73) = 0;
            PlayerControl::setJumping((int)this, 0);
            goto LABEL_90;
          }
          if ( ie_closure == (int *)&word_10 )
          {
            if ( *((int *)this + 73) < 0 )
              *((_DWORD *)this + 73) = 0;
            goto LABEL_90;
          }
          if ( ie_closure != (int *)((char *)&dword_58 + 2) )
            goto LABEL_90;
          v16 = (char *)(*((_DWORD *)this + 65) + 97);
        }
        v15 = 0;
        goto LABEL_89;
      }
      v10 = (int *)a2->ie_closure;
      if ( v10 == (int *)((char *)&dword_54 + 3) )
      {
        if ( (unsigned int)(*((_DWORD *)this + 1) - *((_DWORD *)this + 69)) <= 9 )
          *(_BYTE *)(*((_DWORD *)this + 17) + 128) = 1;
        *((_DWORD *)this + 71) = 1065353216;
        *((_DWORD *)this + 69) = *((_DWORD *)this + 1);
        goto LABEL_43;
      }
      if ( v10 == (int *)((char *)&dword_50 + 3) )
      {
        *((_DWORD *)this + 71) = -1082130432;
LABEL_43:
        PlayerControl::syncMove(this);
        goto LABEL_90;
      }
      if ( v10 == (int *)((char *)&dword_40 + 1) )
      {
        v11 = -1082130432;
LABEL_32:
        *((_DWORD *)this + 72) = v11;
        goto LABEL_43;
      }
      if ( v10 == &dword_44 )
      {
        v11 = 1065353216;
        goto LABEL_32;
      }
      if ( v10 == &dword_20 )
      {
        v12 = *((_DWORD *)this + 1);
        if ( (unsigned int)(v12 - *((_DWORD *)this + 68)) <= 9 )
        {
          v23 = (unsigned __int8)v23 ^ 1;
          *((_DWORD *)this + 73) = 0;
        }
        *((_DWORD *)this + 68) = v12;
        if ( v23 == 0 )
        {
          PlayerControl::setJumping((int)this, 1);
          goto LABEL_43;
        }
        v13 = 1;
LABEL_42:
        *((_DWORD *)this + 73) = v13;
        goto LABEL_43;
      }
      if ( v10 == (int *)&word_10 )
      {
        if ( v23 == 0 )
        {
          if ( *((_DWORD *)this + 20) != 0 )
            (*(void (__fastcall **)(PlayerControl *, _DWORD))(*(_DWORD *)this + 148))(this, 0);
          goto LABEL_90;
        }
        v13 = -1;
        goto LABEL_42;
      }
      if ( v10 == (int *)((char *)&dword_58 + 2) )
      {
        v14 = *((_DWORD *)this + 65);
        *(_DWORD *)(v14 + 104) = 1065353216;
        *(_DWORD *)(v14 + 108) = 1056964608;
        v15 = 1;
        v16 = (char *)(*((_DWORD *)this + 65) + 97);
LABEL_89:
        *v16 = v15;
      }
LABEL_90:
      if ( v23 != PlayerControl::getFlyMode(this) )
      {
        PlayerControl::setFlyMode((int)this, v23);
        GameEventQue::postSimpleEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 27);
      }
      return 0;
    }
  }
  BlockOperateMgr::endOperate(*((BlockOperateMgr **)this + 66));
  goto LABEL_90;
}


//======================================================================
// PlayerControl::getClientStatus(ClientStatus &)
// address: 0x002D4A6C   size: 0x36 (54 bytes)
//======================================================================
__int64 __fastcall PlayerControl::getClientStatus(int a1, unsigned int *a2)
{
  int *v2; // r5
  unsigned int v5; // r7
  unsigned int v6; // r0
  _DWORD *v7; // r3
  __int64 v9; // [sp+0h] [bp-Ch]

  LODWORD(v9) = a1;
  v2 = *(int **)(a1 + 68);
  v5 = CoordDivBlock(v2[8]);
  HIDWORD(v9) = CoordDivBlock(v2[9]);
  v6 = CoordDivBlock(v2[10]);
  *a2 = v5;
  a2[2] = v6;
  a2[1] = HIDWORD(v9);
  v7 = *(_DWORD **)(a1 + 68);
  a2[3] = v7[24];
  a2[4] = v7[25];
  a2[5] = v7[26];
  return v9;
}


//======================================================================
// PlayerControl::getPosition(void)
// address: 0x002D4AA2   size: 0x10 (16 bytes)
//======================================================================
_DWORD *__fastcall PlayerControl::getPosition(_DWORD *this, int a2)
{
  _DWORD *v2; // r3
  int v3; // r2
  int v4; // r3

  v2 = *(_DWORD **)(a2 + 68);
  *this = v2[8];
  v3 = v2[9];
  v4 = v2[10];
  *(this + 1) = v3;
  *(this + 2) = v4;
  return this;
}


//======================================================================
// PlayerControl::getBlockX(void)
// address: 0x002D4AB2   size: 0x14 (20 bytes)
//======================================================================
unsigned int __fastcall PlayerControl::getBlockX(PlayerControl *this, int a2, int a3, int a4)
{
  int v5[3]; // [sp+4h] [bp-Ch] BYREF

  v5[0] = a2;
  v5[1] = a3;
  v5[2] = a4;
  PlayerControl::getPosition(v5, (int)this);
  return CoordDivBlock(v5[0]);
}


//======================================================================
// PlayerControl::getBlockY(void)
// address: 0x002D4AC6   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall PlayerControl::getBlockY(PlayerControl *this, int a2, int a3, int a4)
{
  int v5; // [sp+4h] [bp-Ch] BYREF
  int v6; // [sp+8h] [bp-8h]
  int v7; // [sp+Ch] [bp-4h]

  v5 = a2;
  v6 = a3;
  v7 = a4;
  PlayerControl::getPosition(&v5, (int)this);
  return CoordDivBlock(v6);
}


//======================================================================
// PlayerControl::getBlockZ(void)
// address: 0x002D4ADC   size: 0x16 (22 bytes)
//======================================================================
unsigned int __fastcall PlayerControl::getBlockZ(PlayerControl *this, int a2, int a3, int a4)
{
  _DWORD v5[2]; // [sp+4h] [bp-Ch] BYREF
  int v6; // [sp+Ch] [bp-4h]

  v5[0] = a2;
  v5[1] = a3;
  v6 = a4;
  PlayerControl::getPosition(v5, (int)this);
  return CoordDivBlock(v6);
}


//======================================================================
// PlayerControl::throwItem(int,int)
// address: 0x002D4AF4   size: 0x17A (378 bytes)
//======================================================================
float __fastcall PlayerControl::throwItem(World **this, int a2, int a3)
{
  BackPack *BackPack; // r0
  BackPack *v7; // r0
  float result; // r0
  float v9; // r6
  BackPack *v10; // r0
  int GridNum; // r0
  BackPack *v12; // r0
  BackPack *v13; // r0
  int v14; // r7
  float v15; // r6
  float *v16; // r6
  float v17; // r4
  float v18; // r5
  float v19; // r0
  float v20; // r7
  double v21; // r4
  float v22; // r0
  float v23; // r0
  int v24; // [sp+10h] [bp-2Ch]
  int GridDuration; // [sp+14h] [bp-28h]
  int GridItem; // [sp+18h] [bp-24h]
  ClientActorMgr *ActorMgr; // [sp+1Ch] [bp-20h]
  float v28[3]; // [sp+20h] [bp-1Ch] BYREF
  float v29; // [sp+2Ch] [bp-10h] BYREF
  int v30; // [sp+30h] [bp-Ch]
  float v31; // [sp+34h] [bp-8h]

  BackPack = (BackPack *)ClientPlayer::getBackPack((ClientPlayer *)this);
  GridItem = BackPack::getGridItem(BackPack, a2);
  v7 = (BackPack *)ClientPlayer::getBackPack((ClientPlayer *)this);
  result = COERCE_FLOAT(BackPack::index2Grid(v7, a2));
  v9 = result;
  if ( GridItem != 0 )
  {
    v10 = (BackPack *)ClientPlayer::getBackPack((ClientPlayer *)this);
    GridNum = BackPack::getGridNum(v10, a2);
    v24 = GridNum;
    if ( a3 >= 0 && a3 <= GridNum )
      v24 = a3;
    v12 = (BackPack *)ClientPlayer::getBackPack((ClientPlayer *)this);
    GridDuration = BackPack::getGridDuration(v12, a2);
    v13 = (BackPack *)ClientPlayer::getBackPack((ClientPlayer *)this);
    BackPack::removeItem(v13, a2, v24);
    v14 = (*((int (__fastcall **)(World **))*this + 31))(this);
    ActorMgr = (ClientActorMgr *)ClientActor::getActorMgr((ClientActor *)this);
    PlayerControl::getPosition(v28, (int)this);
    v29 = v28[0];
    v31 = v28[2];
    v30 = v14 - 30 + LODWORD(v28[1]);
    result = COERCE_FLOAT(
               ClientActorMgr::spawnItem(
                 ActorMgr,
                 (const WCoord *)&v29,
                 GridItem,
                 v24,
                 GridDuration,
                 true,
                 *(_DWORD *)(LODWORD(v9) + 28),
                 (int *)(LODWORD(v9) + 32)));
    v15 = result;
    if ( result != 0.0 )
    {
      *(_DWORD *)(LODWORD(result) + 240) = 40;
      if ( World::isCreativeMode(*(this + 13)) != 0 )
        *(_DWORD *)(LODWORD(v15) + 4) = 4800;
      v16 = *(float **)(LODWORD(v15) + 68);
      ActorLocoMotion::getLookDir((ActorLocoMotion *)&v29);
      v17 = *(float *)&v30;
      v18 = v31;
      v16[18] = v29 * 30.0;
      v16[20] = v18 * 30.0;
      v16[19] = (float)(v17 * 30.0) + 10.0;
      v19 = GenRandomFloat();
      v20 = v19 + v19;
      v21 = (float)((float)(GenRandomFloat() * 360.0) * 0.017453);
      v22 = j_cos(v21);
      v16[18] = v16[18] + (float)(v20 * v22);
      v23 = j_sin(v21);
      v16[20] = v16[20] + (float)(v20 * v23);
      LODWORD(v21) = GenRandomFloat();
      result = v16[19] + (float)((float)(*(float *)&v21 - GenRandomFloat()) * 10.0);
      v16[19] = result;
    }
  }
  return result;
}


//======================================================================
// PlayerControl::gainItems(int,int,int)
// address: 0x002D4C80   size: 0x124 (292 bytes)
//======================================================================
float __fastcall PlayerControl::gainItems(PlayerControl *this, int a2, int a3, int a4)
{
  BackPack *BackPack; // r0
  float result; // r0
  int v9; // r7
  int v10; // r3
  float *v11; // r5
  __int64 v12; // r0
  float v13; // r0
  float v14; // r4
  double v15; // r6
  float v16; // r0
  float v17; // r0
  float v18; // r4
  float v19; // [sp+14h] [bp-28h]
  ClientActorMgr *ActorMgr; // [sp+1Ch] [bp-20h]
  float v22[3]; // [sp+20h] [bp-1Ch] BYREF
  float v23; // [sp+2Ch] [bp-10h] BYREF
  float v24; // [sp+30h] [bp-Ch]
  float v25; // [sp+34h] [bp-8h]

  BackPack = (BackPack *)ClientPlayer::getBackPack(this);
  result = COERCE_FLOAT(BackPack::addItem(BackPack, a2, a3, a4));
  v19 = result;
  if ( SLODWORD(result) < a3 )
  {
    v9 = (*(int (__fastcall **)(PlayerControl *))(*(_DWORD *)this + 124))(this);
    ActorMgr = (ClientActorMgr *)ClientActor::getActorMgr(this);
    PlayerControl::getPosition(v22, (int)this);
    v25 = v22[2];
    v23 = v22[0];
    LODWORD(v24) = v9 - 30 + LODWORD(v22[1]);
    result = COERCE_FLOAT(ClientActorMgr::spawnItem(ActorMgr, (const WCoord *)&v23, a2, a3 - LODWORD(v19), -1, true, 0, nullptr));
    if ( result != 0.0 )
    {
      v10 = *((_DWORD *)this + 17);
      v11 = *(float **)(LODWORD(result) + 68);
      LODWORD(v12) = &v23;
      HIDWORD(v12) = *(_DWORD *)(v10 + 4);
      PitchYaw2Direction(v12, *(float *)(v10 + 8));
      v11[18] = v23 * 30.0;
      v11[20] = v25 * 30.0;
      v11[19] = (float)(v24 * 30.0) + 10.0;
      v13 = GenRandomFloat();
      v14 = v13 + v13;
      v15 = (float)((float)(GenRandomFloat() * 360.0) * 0.017453);
      v16 = j_cos(v15);
      v11[18] = v11[18] + (float)(v14 * v16);
      v17 = j_sin(v15);
      v11[20] = v11[20] + (float)(v14 * v17);
      v18 = GenRandomFloat();
      result = v11[19] + (float)((float)(v18 - GenRandomFloat()) * 10.0);
      v11[19] = result;
    }
  }
  return result;
}


//======================================================================
// PlayerControl::init(int,char const*,int)
// address: 0x002D4DB4   size: 0x4A (74 bytes)
//======================================================================
int __fastcall PlayerControl::init(PlayerControl *this, int a2, const char *a3, int a4)
{
  int v6; // r6
  CameraModel *v7; // r5

  v6 = ClientPlayer::init(this, a2, a3, a4);
  if ( v6 != 0 )
  {
    ActorBody::show(*((unsigned int *)this + 16));
    v7 = (CameraModel *)operator new(0x10u);
    CameraModel::CameraModel(v7, a4);
    *((_DWORD *)this + 81) = v7;
    GameEventQue::postShortcutSelected(
      (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
      *(_DWORD *)(*((_DWORD *)this + 19) + 84));
  }
  return v6;
}


//======================================================================
// PlayerControl::enterWorld(World *)
// address: 0x002D4E04   size: 0xBC (188 bytes)
//======================================================================
unsigned __int64 __fastcall PlayerControl::enterWorld(PlayerControl *this, World *a2)
{
  BlockOperateMgr **v3; // r6
  _DWORD *v4; // r0
  int v5; // r2
  int v6; // r3
  Ogre::ScriptVM *v7; // r5
  int v9; // r5
  unsigned __int64 v10; // [sp+0h] [bp-Ch]

  v10 = __PAIR64__(&Ogre::Singleton<ClientManager>::ms_Singleton, (unsigned int)this);
  v3 = (BlockOperateMgr **)((char *)this + 252);
  ClientPlayer::enterWorld(this, a2);
  BlockOperateMgr::setCurWorld(v3[3], a2);
  CameraModel::onEnterWorld(v3[18], a2);
  ClientManager::setRenderContent(
    (ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton,
    *((Ogre::Camera **)v3[2] + 1),
    *((Ogre::GameScene **)a2 + 60));
  v4 = (_DWORD *)GameEventQue::allocEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
  *v4 = 34;
  v4[1] = *((unsigned __int16 *)a2 + 30);
  GameEventQue::pushEvent(Ogre::Singleton<GameEventQue>::ms_Singleton, v4);
  v5 = *((_DWORD *)a2 + 33);
  v6 = *(_DWORD *)(v5 + 28);
  if ( (*(_DWORD *)(v5 + 32) - v6) >> 2 != 0 )
  {
    v9 = 0;
    LODWORD(v10) = *(_DWORD *)(*(_DWORD *)v6 + 212);
    do
    {
      if ( (((int)v10 >> v9) & 1) != 0 )
        GameEventQue::postMissionComplete((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 1 << v9);
      ++v9;
    }
    while ( v9 != 16 );
  }
  v7 = *(Ogre::ScriptVM **)(Ogre::Singleton<ClientManager>::ms_Singleton + 24);
  Ogre::ScriptVM::setUserTypePointer(v7, "WorldContainerMgr", "WorldContainerMgr", *((void **)a2 + 32));
  Ogre::ScriptVM::setUserTypePointer(v7, "CurWorld", "ClientWorld", a2);
  Ogre::ScriptVM::setUserTypePointer(v7, "ClientActorManager", "ClientActorMgr", *((void **)a2 + 33));
  return v10;
}


//======================================================================
// PlayerControl::leaveWorld(bool)
// address: 0x002D4EDC   size: 0x3E (62 bytes)
//======================================================================
int __fastcall PlayerControl::leaveWorld(PlayerControl *this, bool a2)
{
  _DWORD *v4; // r0
  ClientPlayer *v5; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
  *v4 = 35;
  v4[1] = *(unsigned __int16 *)(*((_DWORD *)this + 13) + 60);
  GameEventQue::pushEvent(Ogre::Singleton<GameEventQue>::ms_Singleton, v4);
  v5 = this;
  this = (PlayerControl *)((char *)this + 252);
  ClientPlayer::leaveWorld(v5, a2);
  BlockOperateMgr::setCurWorld(*((BlockOperateMgr **)this + 3), nullptr);
  return CameraModel::onLeaveWorld(*((CameraModel **)this + 18));
}


//======================================================================
// PlayerControl::revive(void)
// address: 0x002D4F20   size: 0x22 (34 bytes)
//======================================================================
int __fastcall PlayerControl::revive(PlayerControl *this)
{
  ClientPlayer::revive(this);
  PlayerControl::setViewMode(this, *((_DWORD *)this + 67));
  return GameEventQue::postPlayerAttrChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
}


//======================================================================
// PlayerControl::tick(void)
// address: 0x002D4F48   size: 0x156 (342 bytes)
//======================================================================
int __fastcall PlayerControl::tick(ActorLocoMotion **this)
{
  int result; // r0
  int v3; // r3
  int v4; // r7
  float v5; // r0
  float *v6; // r3
  ActorLocoMotion *v7; // r0
  float v8; // r2
  float v9; // r3
  int v10; // r3
  unsigned int v11; // r3
  char *v12; // r5
  int isInsideWaterBlock; // r0
  int v14; // r2
  int v15; // r4
  int v16; // [sp+8h] [bp-34h]
  float v17; // [sp+14h] [bp-28h] BYREF
  float v18; // [sp+18h] [bp-24h]
  float v19; // [sp+1Ch] [bp-20h]
  _DWORD v20[3]; // [sp+20h] [bp-1Ch] BYREF
  _DWORD v21[4]; // [sp+2Ch] [bp-10h] BYREF

  if ( ((unsigned int)*(this + 15) & 0x100) != 0 )
    return ClientPlayer::tick((ClientPlayer *)this);
  if ( ClientManager::isMobile((ClientManager *)Ogre::Singleton<ClientManager>::ms_Singleton) != 0 )
    TouchControl::update(*(this + 82), (PlayerControl *)this);
  *((_DWORD *)*(this + 17) + 37) = *(this + 71);
  *((_DWORD *)*(this + 17) + 38) = *(this + 72);
  if ( ClientPlayer::isFlying((ClientPlayer *)this) != 0 )
  {
    v3 = (int)*(this + 73);
    v4 = (int)*(this + 17);
    if ( v3 > 0 )
    {
      v5 = *(float *)(v4 + 76) + 15.0;
LABEL_10:
      *(float *)(v4 + 76) = v5;
      goto LABEL_11;
    }
    if ( v3 != 0 )
    {
      v5 = *(float *)(v4 + 76) - 15.0;
      goto LABEL_10;
    }
  }
LABEL_11:
  v6 = (float *)*(this + 65);
  v7 = *(this + 17);
  v17 = v6[2];
  v8 = v6[3];
  v9 = v6[4];
  v18 = v8;
  v19 = v9;
  ActorLocoMotion::setMoveDir(v7, (const Ogre::Vector3 *)&v17);
  v16 = (int)*(this + 16);
  ClientActor::getEyePosition((ClientActor *)v21);
  v20[1] = (int)(float)(v18 * 100.0) + v21[1];
  v20[0] = v21[0] + (int)(float)(v17 * 100.0);
  v20[2] = (int)(float)(v19 * 100.0) + v21[2];
  ActorBody::setLookAt(v16, v20, 1106247680, 1106247680);
  ClientPlayer::tick((ClientPlayer *)this);
  v10 = (int)*(this + 80);
  if ( v10 >= 0 )
  {
    v11 = v10 + 1;
    if ( v11 > 0x1770 )
      v11 = -1;
    *(this + 80) = (ActorLocoMotion *)v11;
  }
  v12 = (char *)(this + 63);
  BlockOperateMgr::tick(*(this + 66));
  if ( ClientActor::isDead((ClientActor *)this) == 0 )
  {
    isInsideWaterBlock = ActorLocoMotion::isInsideWaterBlock(*(this + 17));
    v14 = *((unsigned __int8 *)this + 296);
    if ( isInsideWaterBlock != v14 )
    {
      *((_BYTE *)this + 296) = v14 ^ 1;
      GameEventQue::postEnterWater(
        (GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton,
        (unsigned __int8)v14 != 1);
    }
  }
  v15 = (int)*(this + 19);
  if ( *((float *)v12 + 12) != *(float *)(v15 + 8)
    || (result = *((float *)v12 + 13) == *(float *)(v15 + 32), *((float *)v12 + 13) != *(float *)(v15 + 32)) )
  {
    *((_DWORD *)v12 + 12) = *(_DWORD *)(v15 + 8);
    *((_DWORD *)v12 + 13) = *(_DWORD *)(v15 + 32);
    return GameEventQue::postPlayerAttrChange((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
  }
  return result;
}


//======================================================================
// PlayerControl::update(float)
// address: 0x002D50BC   size: 0x18E (398 bytes)
//======================================================================
int __fastcall PlayerControl::update(PlayerControl *this, float a2)
{
  int v4; // r3
  float *v5; // r4
  int result; // r0
  int v7; // r3
  float v8; // r5
  float v9; // r0
  int v10; // r3
  PlayerControl *v11; // r0
  char *v12; // r4
  int v13; // r0
  Ogre::Vector3 *v14; // r3
  float v15; // [sp+4h] [bp-48h]
  float v16; // [sp+4h] [bp-48h]
  Ogre::Vector3 *v17; // [sp+4h] [bp-48h]
  Ogre::Vector3 *v18; // [sp+4h] [bp-48h]
  float v19; // [sp+8h] [bp-44h]
  _BYTE v20[12]; // [sp+14h] [bp-38h] BYREF
  _BYTE v21[12]; // [sp+20h] [bp-2Ch] BYREF
  float v22[3]; // [sp+2Ch] [bp-20h] BYREF
  float v23[5]; // [sp+38h] [bp-14h] BYREF

  ClientPlayer::update(this, a2);
  if ( (*((_DWORD *)this + 15) & 0x100) != 0 )
  {
    TickPosition::getPos(
      (TickPosition *)v20,
      (const WCoord *)(*((_DWORD *)this + 17) + 56),
      (int *)(*((_DWORD *)this + 17) + 32));
    ActorLocoMotion::getLookDir((ActorLocoMotion *)v21);
    v22[0] = 0.0;
    v22[2] = 0.0;
    v4 = *((_DWORD *)this + 65);
    v22[1] = 1.0;
    v5 = *(float **)(v4 + 4);
    Ogre::WorldPos::WorldPos(v23, (const Ogre::Vector3 *)v20);
    v5[2] = v23[0];
    v5[3] = v23[1];
    v5[4] = v23[2];
    (*(void (__fastcall **)(float *))(*(_DWORD *)v5 + 64))(v5);
    Ogre::WorldPos::WorldPos(v23, (const Ogre::Vector3 *)v20);
    Ogre::Camera::setLookDirect(
      (Ogre::Camera *)v5,
      (const Ogre::WorldPos *)v23,
      (const Ogre::Vector3 *)v21,
      (const Ogre::Vector3 *)v22);
    return (*(int (__fastcall **)(float *, unsigned int))(*(_DWORD *)v5 + 40))(v5, (unsigned int)(float)(a2 * 1000.0));
  }
  else
  {
    v7 = *((_DWORD *)this + 65);
    v8 = *(float *)(v7 + 8);
    v15 = *(float *)(v7 + 16);
    v9 = j_sqrt((float)((float)((float)(v8 * v8) + 0.0) + (float)(v15 * v15)));
    if ( v9 <= 0.00001 )
    {
      v16 = 0.0;
      v19 = 0.0;
    }
    else
    {
      v19 = v8 * (float)(1.0 / v9);
      v16 = v15 * (float)(1.0 / v9);
    }
    TickPosition::getPos(
      (TickPosition *)v23,
      (const WCoord *)(*((_DWORD *)this + 17) + 56),
      (int *)(*((_DWORD *)this + 17) + 32));
    v10 = *(_DWORD *)this;
    v11 = this;
    v12 = (char *)this + 252;
    v13 = (*(int (__fastcall **)(PlayerControl *))(v10 + 124))(v11);
    v22[0] = v23[0] + (float)(v19 * -20.0);
    v22[1] = (float)((float)v13 - 10.0) + v23[1];
    v14 = *((Ogre::Vector3 **)v12 + 2);
    v22[2] = (float)(v16 * -20.0) + v23[2];
    v17 = v14;
    Ogre::WorldPos::WorldPos(v23, (const Ogre::Vector3 *)v22);
    GameCamera::setPosition(v17, v23);
    result = GameCamera::update(*((GameCamera **)v12 + 2), a2);
    v18 = *((Ogre::Vector3 **)v12 + 18);
    if ( *((_BYTE *)v18 + 12) != 0 )
    {
      GameCamera::getRotation((GameCamera *)v23, *((_DWORD *)v12 + 2));
      return CameraModel::update(v18, a2, (const Ogre::Vector3 *)v22, (const Ogre::Quaternion *)v23);
    }
  }
  return result;
}


//======================================================================
// PlayerControl::onDie(void)
// address: 0x002D525C   size: 0x62 (98 bytes)
//======================================================================
int __fastcall PlayerControl::onDie(PlayerControl *this)
{
  BlockOperateMgr **v2; // r6
  _DWORD v4[5]; // [sp+8h] [bp-14h] BYREF

  v2 = (BlockOperateMgr **)((char *)this + 252);
  ClientPlayer::onDie(this);
  BlockOperateMgr::endOperate(v2[3]);
  v2[5] = nullptr;
  v2[6] = nullptr;
  PlayerControl::getPosition(v4, (int)this);
  *((_DWORD *)this + 77) = v4[0];
  *((_DWORD *)this + 78) = v4[1];
  *((_DWORD *)this + 79) = v4[2];
  v2[17] = nullptr;
  (*(void (__fastcall **)(PlayerControl *, int, int, _DWORD, int))(*(_DWORD *)this + 208))(this, 3, 21, 0, 1);
  return GameEventQue::postSimpleEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, 10);
}


//======================================================================
// PlayerControl::onEvent(ActorEvent const&)
// address: 0x002D52C4   size: 0x8A (138 bytes)
//======================================================================
ParticleNode *__fastcall PlayerControl::onEvent(int a1, int a2)
{
  int v4; // r7
  ParticleNode *result; // r0
  _BYTE *v6; // r0
  int v7; // r1
  World *v8; // r6
  _DWORD v9[3]; // [sp+8h] [bp-1Ch] BYREF
  int v10[4]; // [sp+14h] [bp-10h] BYREF

  v4 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 68) + 48))(*(_DWORD *)(a1 + 68));
  ClientPlayer::onEvent(a1, a2);
  result = (ParticleNode *)CameraModel::onEvent(*(_DWORD *)(a1 + 324), a2);
  if ( *(_DWORD *)a2 == 7 )
  {
    if ( v4 != 0 || *(float *)(a2 + 8) == 0.0 && *(float *)(a2 + 12) == 0.0 )
    {
      v6 = *(_BYTE **)(a1 + 260);
      v7 = 0;
    }
    else
    {
      v6 = *(_BYTE **)(a1 + 260);
      v7 = 1;
    }
    return (ParticleNode *)GameCamera::setBobbing(v6, v7);
  }
  else if ( *(_DWORD *)a2 == 14 )
  {
    v8 = *(World **)(a1 + 52);
    PlayerControl::getPosition(v9, a1);
    v10[0] = v9[0];
    v10[2] = v9[2];
    v10[1] = v9[1] - 5;
    return ClientWorld::addParticleEffect(v8, 2, v10, 5, 0x14u);
  }
  return result;
}

