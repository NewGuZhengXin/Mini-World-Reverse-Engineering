// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: GameEventQue

//======================================================================
// GameEventQue::GameEventQue(void)
// address: 0x002FC4AC   size: 0x6C (108 bytes)
//======================================================================
// Alternative name is '_ZN12GameEventQueC2Ev'
void __fastcall GameEventQue::GameEventQue(GameEventQue *this)
{
  int v2; // r0
  int v3; // r5
  int *v4; // r5
  int v5; // r2
  int v6; // r3
  int v7; // r3

  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  Ogre::Singleton<GameEventQue>::ms_Singleton = (int)this;
  *((_DWORD *)this + 4) = 0;
  *(_DWORD *)this = 0;
  *((_DWORD *)this + 5) = 0;
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 9) = 0;
  *((_DWORD *)this + 1) = 8;
  v2 = operator new(0x20u);
  v3 = *((_DWORD *)this + 1);
  *(_DWORD *)this = v2;
  v4 = (int *)(v2 + 4 * ((unsigned int)(v3 - 1) >> 1));
  *v4 = operator new(0x200u);
  *((_DWORD *)this + 5) = v4;
  v5 = *v4;
  v6 = *v4 + 512;
  *((_DWORD *)this + 9) = v4;
  *((_DWORD *)this + 3) = v5;
  *((_DWORD *)this + 4) = v6;
  v7 = *v4;
  *((_DWORD *)this + 2) = v5;
  *((_DWORD *)this + 7) = v7;
  *((_DWORD *)this + 6) = v7;
  *((_DWORD *)this + 8) = v7 + 512;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 13) = 0;
}


//======================================================================
// GameEventQue::~GameEventQue()
// address: 0x002FC550   size: 0x74 (116 bytes)
//======================================================================
// Alternative name is '_ZN12GameEventQueD2Ev'
void __fastcall GameEventQue::~GameEventQue(GameEventQue *this)
{
  void **v1; // r5
  void **v2; // r7
  int v3; // r6
  void *v5; // r0
  unsigned int i; // r5
  void **v7; // r0
  void **v8; // r5
  unsigned int v9; // r6
  void *v10; // r0

  v1 = *((void ***)this + 2);
  v2 = *((void ***)this + 4);
  v3 = *((_DWORD *)this + 5);
  while ( v1 != *((void ***)this + 6) )
  {
    v5 = *v1++;
    operator delete(v5);
    if ( v2 == v1 )
    {
      v1 = *(void ***)(v3 + 4);
      v2 = v1 + 128;
      v3 += 4;
    }
  }
  for ( i = 0; ; ++i )
  {
    v7 = *((void ***)this + 10);
    if ( i >= (*((_DWORD *)this + 11) - (int)v7) >> 2 )
      break;
    operator delete(v7[i]);
  }
  if ( v7 != nullptr )
    operator delete(v7);
  v8 = *((void ***)this + 5);
  if ( *(_DWORD *)this != 0 )
  {
    v9 = *((_DWORD *)this + 9) + 4;
    while ( (unsigned int)v8 < v9 )
    {
      v10 = *v8++;
      operator delete(v10);
    }
    operator delete(*(void **)this);
  }
  Ogre::Singleton<GameEventQue>::ms_Singleton = 0;
}


//======================================================================
// GameEventQue::popEvent(void)
// address: 0x002FC5C8   size: 0x40 (64 bytes)
//======================================================================
int __fastcall GameEventQue::popEvent(GameEventQue *this)
{
  _DWORD *v1; // r3
  int result; // r0
  void *v4; // r0
  _DWORD *v5; // r3
  _DWORD *v6; // r2
  int v7; // r2

  v1 = *((_DWORD **)this + 2);
  if ( *((_DWORD **)this + 6) == v1 )
  {
    *((_DWORD *)this + 13) = 0;
    return 0;
  }
  else
  {
    v4 = *((void **)this + 3);
    *((_DWORD *)this + 13) = *v1;
    if ( v1 == (_DWORD *)(*((_DWORD *)this + 4) - 4) )
    {
      operator delete(v4);
      v6 = (_DWORD *)(*((_DWORD *)this + 5) + 4);
      *((_DWORD *)this + 5) = v6;
      v5 = (_DWORD *)*v6;
      v7 = *v6 + 512;
      *((_DWORD *)this + 3) = v5;
      *((_DWORD *)this + 4) = v7;
    }
    else
    {
      v5 = v1 + 1;
    }
    result = *((_DWORD *)this + 13);
    *((_DWORD *)this + 2) = v5;
  }
  return result;
}


//======================================================================
// GameEventQue::getCurEvent(void)
// address: 0x002FC608   size: 0x4 (4 bytes)
//======================================================================
int __fastcall GameEventQue::getCurEvent(GameEventQue *this)
{
  return *((_DWORD *)this + 13);
}


//======================================================================
// GameEventQue::getEventName(GameEvent *)
// address: 0x002FC60C   size: 0xC (12 bytes)
//======================================================================
int __fastcall GameEventQue::getEventName(int a1, _DWORD *a2)
{
  return (int)*(&off_453804 + *a2);
}


//======================================================================
// GameEventQue::allocEvent(void)
// address: 0x002FC6BC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall GameEventQue::allocEvent(GameEventQue *this, int a2)
{
  int *v3; // r3
  int result; // r0
  int v5; // [sp+4h] [bp-4h] BYREF

  v5 = a2;
  if ( *((_DWORD *)this + 10) == *((_DWORD *)this + 11) )
  {
    v5 = operator new(0x128u);
    std::vector<GameEvent *>::push_back((int)this + 40, &v5);
  }
  v3 = (int *)(*((_DWORD *)this + 11) - 4);
  result = *v3;
  *((_DWORD *)this + 11) = v3;
  return result;
}


//======================================================================
// GameEventQue::freeEvent(GameEvent *)
// address: 0x002FC6E6   size: 0xE (14 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> GameEventQue::freeEvent(int a1, int a2, int a3)
{
  _DWORD v3[2]; // [sp+4h] [bp-8h] BYREF

  v3[1] = a3;
  std::vector<GameEvent *>::push_back(a1 + 40, v3);
}


//======================================================================
// GameEventQue::pushEvent(GameEvent *)
// address: 0x002FC714   size: 0xFC (252 bytes)
//======================================================================
__int64 __fastcall GameEventQue::pushEvent(__int64 a1)
{
  _DWORD *v1; // r3
  int v2; // r4
  int v3; // r3
  unsigned int v4; // r3
  int *v5; // r7
  int v6; // r5
  int *v7; // r5
  int v8; // r1
  int v9; // r1
  int v10; // r2
  unsigned int v11; // r6
  int v12; // r0
  int v13; // r7
  int v14; // r3
  int *v15; // r5
  int v16; // r3
  int v17; // r5
  _DWORD *v18; // r3
  int *v19; // r2
  int v20; // r2
  __int64 v22; // [sp+0h] [bp-Ch]

  v22 = a1;
  v1 = *(_DWORD **)(a1 + 24);
  v2 = a1;
  if ( v1 == (_DWORD *)(*(_DWORD *)(a1 + 32) - 4) )
  {
    HIDWORD(a1) = *(_DWORD *)(a1 + 36);
    v4 = *(_DWORD *)(a1 + 4);
    if ( v4 - ((HIDWORD(a1) - *(_DWORD *)a1) >> 2) <= 1 )
    {
      v5 = *(int **)(a1 + 20);
      LODWORD(v22) = ((HIDWORD(a1) - (int)v5) >> 2) + 1;
      v6 = ((HIDWORD(a1) - (int)v5) >> 2) + 2;
      if ( v4 <= 2 * v6 )
      {
        v10 = 1;
        if ( v4 != 0 )
          v10 = *(_DWORD *)(a1 + 4);
        v11 = v4 + 2 + v10;
        if ( v11 > 0x3FFFFFFF )
          sub_3BCEB4(2 * v6);
        v12 = operator new(4 * v11);
        v7 = (int *)(v12 + 4 * ((v11 - v6) >> 1));
        v13 = v12;
        std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<GameEvent **>(
          *(void **)(v2 + 20),
          *(_DWORD *)(v2 + 36) + 4,
          v7);
        operator delete(*(void **)v2);
        *(_DWORD *)v2 = v13;
        *(_DWORD *)(v2 + 4) = v11;
      }
      else
      {
        v7 = (int *)(*(_DWORD *)a1 + 4 * ((v4 - v6) >> 1));
        v8 = HIDWORD(a1) + 4;
        if ( v7 >= v5 )
        {
          v9 = v8 - (_DWORD)v5;
          if ( v9 >> 2 != 0 )
            j_memmove(&v7[v22 - (v9 >> 2)], v5, 4 * (v9 >> 2));
        }
        else
        {
          std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<GameEvent **>(v5, v8, v7);
        }
      }
      *(_DWORD *)(v2 + 20) = v7;
      v14 = *v7;
      *(_DWORD *)(v2 + 12) = *v7;
      *(_DWORD *)(v2 + 16) = v14 + 512;
      v15 = &v7[v22 - 1];
      *(_DWORD *)(v2 + 36) = v15;
      v16 = *v15;
      *(_DWORD *)(v2 + 28) = *v15;
      *(_DWORD *)(v2 + 32) = v16 + 512;
    }
    v17 = *(_DWORD *)(v2 + 36);
    *(_DWORD *)(v17 + 4) = operator new(0x200u);
    v18 = *(_DWORD **)(v2 + 24);
    if ( v18 != nullptr )
      *v18 = HIDWORD(v22);
    v19 = (int *)(*(_DWORD *)(v2 + 36) + 4);
    *(_DWORD *)(v2 + 36) = v19;
    v3 = *v19;
    v20 = *v19 + 512;
    *(_DWORD *)(v2 + 28) = v3;
    *(_DWORD *)(v2 + 32) = v20;
  }
  else
  {
    if ( v1 != nullptr )
      *v1 = HIDWORD(a1);
    v3 = *(_DWORD *)(a1 + 24) + 4;
  }
  *(_DWORD *)(v2 + 24) = v3;
  return v22;
}


//======================================================================
// GameEventQue::postSimpleEvent(int)
// address: 0x002FC814   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postSimpleEvent(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v4 = a2;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postBackpackChange(int)
// address: 0x002FC82A   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postBackpackChange(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v4[1] = a2;
  *v4 = 1;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postStorageboxUpdatePoint(int)
// address: 0x002FC844   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postStorageboxUpdatePoint(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v4[1] = a2;
  *v4 = 22;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postShortcutSelected(int)
// address: 0x002FC85E   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postShortcutSelected(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v4[1] = a2;
  *v4 = 2;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postPlayerAttrChange(void)
// address: 0x002FC878   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postPlayerAttrChange(GameEventQue *this, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v3 = 3;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v3, (unsigned int)this));
}


//======================================================================
// GameEventQue::postFurnaceProgress(void)
// address: 0x002FC88E   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postFurnaceProgress(GameEventQue *this, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v3 = 5;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v3, (unsigned int)this));
}


//======================================================================
// GameEventQue::postEnterWater(bool)
// address: 0x002FC8A4   size: 0x20 (32 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postEnterWater(GameEventQue *this, bool a2)
{
  int v3; // r0

  v3 = GameEventQue::allocEvent((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton, a2);
  *(_DWORD *)v3 = 4;
  *(_BYTE *)(v3 + 4) = a2;
  return GameEventQue::pushEvent(__SPAIR64__(v3, Ogre::Singleton<GameEventQue>::ms_Singleton));
}


//======================================================================
// GameEventQue::postWorldListChange(bool,int)
// address: 0x002FC8C8   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postWorldListChange(GameEventQue *this, bool a2, int a3)
{
  int v6; // r0

  v6 = GameEventQue::allocEvent(this, a2);
  *(_BYTE *)(v6 + 4) = a2;
  *(_DWORD *)(v6 + 8) = a3;
  *(_DWORD *)v6 = 8;
  return GameEventQue::pushEvent(__SPAIR64__(v6, (unsigned int)this));
}


//======================================================================
// GameEventQue::postChatEvent(int,char const*,char const*)
// address: 0x002FC8E6   size: 0x46 (70 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postChatEvent(GameEventQue *this, int a2, const char *a3, const char *a4)
{
  int v7; // r0
  int v8; // r4

  v7 = GameEventQue::allocEvent(this, a2);
  *(_DWORD *)v7 = 13;
  v8 = v7;
  *(_DWORD *)(v7 + 4) = 0;
  if ( a3 != nullptr )
    j_strcpy((char *)(v7 + 8), a3);
  else
    *(_BYTE *)(v7 + 8) = 0;
  j_strncpy((char *)(v8 + 40), a4, 0x100u);
  *(_BYTE *)(v8 + 295) = 0;
  return GameEventQue::pushEvent(__SPAIR64__(v8, (unsigned int)this));
}


//======================================================================
// GameEventQue::postBuddyChat(int)
// address: 0x002FC92C   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postBuddyChat(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v4[1] = a2;
  *v4 = 14;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postEnterGame(bool)
// address: 0x002FC946   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postEnterGame(GameEventQue *this, bool a2)
{
  int v4; // r0

  v4 = GameEventQue::allocEvent(this, a2);
  *(_BYTE *)(v4 + 4) = a2;
  *(_DWORD *)v4 = 15;
  return GameEventQue::pushEvent(__SPAIR64__(v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postLoadProgress(int,int)
// address: 0x002FC960   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postLoadProgress(GameEventQue *this, int a2, int a3)
{
  _DWORD *v6; // r0

  v6 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v6[1] = a2;
  v6[2] = a3;
  *v6 = 16;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v6, (unsigned int)this));
}


//======================================================================
// GameEventQue::postAchievementChange(void)
// address: 0x002FC97E   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postAchievementChange(GameEventQue *this, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v3 = 18;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v3, (unsigned int)this));
}


//======================================================================
// GameEventQue::postAchievementReward(int,int)
// address: 0x002FC994   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postAchievementReward(GameEventQue *this, int a2, int a3)
{
  _DWORD *v6; // r0

  v6 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v6[1] = a2;
  v6[2] = a3;
  *v6 = 19;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v6, (unsigned int)this));
}


//======================================================================
// GameEventQue::postAddBuddySuccess(char const*)
// address: 0x002FC9B2   size: 0x2A (42 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postAddBuddySuccess(GameEventQue *this, const char *a2)
{
  int v4; // r4

  v4 = GameEventQue::allocEvent(this, (int)a2);
  *(_DWORD *)v4 = 20;
  j_strncpy((char *)(v4 + 4), a2, 0x40u);
  *(_BYTE *)(v4 + 67) = 0;
  return GameEventQue::pushEvent(__SPAIR64__(v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postWatchBuddySuccess(void)
// address: 0x002FC9DC   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postWatchBuddySuccess(GameEventQue *this, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v3 = 21;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v3, (unsigned int)this));
}


//======================================================================
// GameEventQue::postUpdateBuddyMsg(void)
// address: 0x002FC9F2   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postUpdateBuddyMsg(GameEventQue *this, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v3 = 23;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v3, (unsigned int)this));
}


//======================================================================
// GameEventQue::postHideUI(bool)
// address: 0x002FCA08   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postHideUI(GameEventQue *this, bool a2)
{
  int v4; // r0

  v4 = GameEventQue::allocEvent(this, a2);
  *(_BYTE *)(v4 + 4) = a2;
  *(_DWORD *)v4 = 24;
  return GameEventQue::pushEvent(__SPAIR64__(v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postBuddyFind(void)
// address: 0x002FCA22   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postBuddyFind(GameEventQue *this, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v3 = 25;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v3, (unsigned int)this));
}


//======================================================================
// GameEventQue::postNetAnomaly(int)
// address: 0x002FCA38   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postNetAnomaly(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v4[1] = a2;
  *v4 = 26;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postWorldOpenPush(void)
// address: 0x002FCA52   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postWorldOpenPush(GameEventQue *this, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v3 = 28;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v3, (unsigned int)this));
}


//======================================================================
// GameEventQue::postNetChange(void)
// address: 0x002FCA68   size: 0x16 (22 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postNetChange(GameEventQue *this, int a2)
{
  _DWORD *v3; // r0

  v3 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v3 = 29;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v3, (unsigned int)this));
}


//======================================================================
// GameEventQue::postWorldDownComplete(int)
// address: 0x002FCA7E   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postWorldDownComplete(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v4[1] = a2;
  *v4 = 32;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postInfoTips(char const*)
// address: 0x002FCA98   size: 0x22 (34 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postInfoTips(GameEventQue *this, const char *a2)
{
  int v4; // r4

  v4 = GameEventQue::allocEvent(this, (int)a2);
  *(_DWORD *)v4 = 33;
  MyStringCpy((char *)(v4 + 4), 0x80u, a2);
  return GameEventQue::pushEvent(__SPAIR64__(v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postInfoTips(int)
// address: 0x002FCABC   size: 0x34 (52 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postInfoTips(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0
  char *v5; // r4
  _DWORD *v6; // r5
  const char *StringDef; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v4 = 33;
  v5 = (char *)(v4 + 1);
  v6 = v4;
  StringDef = (const char *)DefManager::getStringDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a2);
  MyStringCpy(v5, 0x80u, StringDef);
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v6, (unsigned int)this));
}


//======================================================================
// GameEventQue::postBossState(int,int)
// address: 0x002FCAF4   size: 0x1E (30 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postBossState(GameEventQue *this, int a2, int a3)
{
  _DWORD *v6; // r0

  v6 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v6[1] = a2;
  v6[2] = a3;
  *v6 = 36;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v6, (unsigned int)this));
}


//======================================================================
// GameEventQue::postGameDialogue(int)
// address: 0x002FCB14   size: 0x34 (52 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postGameDialogue(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0
  char *v5; // r4
  _DWORD *v6; // r5
  const char *StringDef; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  *v4 = 38;
  v5 = (char *)(v4 + 1);
  v6 = v4;
  StringDef = (const char *)DefManager::getStringDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a2);
  MyStringCpy(v5, 0x80u, StringDef);
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v6, (unsigned int)this));
}


//======================================================================
// GameEventQue::postMissionComplete(int)
// address: 0x002FCB4C   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postMissionComplete(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v4[1] = a2;
  *v4 = 37;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postOWWatchResult(int)
// address: 0x002FCB66   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postOWWatchResult(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v4[1] = a2;
  *v4 = 39;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}


//======================================================================
// GameEventQue::postAttentionOWWatchResult(int)
// address: 0x002FCB80   size: 0x1A (26 bytes)
//======================================================================
__int64 __fastcall GameEventQue::postAttentionOWWatchResult(GameEventQue *this, int a2)
{
  _DWORD *v4; // r0

  v4 = (_DWORD *)GameEventQue::allocEvent(this, a2);
  v4[1] = a2;
  *v4 = 40;
  return GameEventQue::pushEvent(__SPAIR64__((unsigned int)v4, (unsigned int)this));
}

