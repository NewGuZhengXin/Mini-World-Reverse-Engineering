// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: BuddyInfo

//======================================================================
// BuddyInfo::getNumChatInfo(void)
// address: 0x002D1FB8   size: 0xA (10 bytes)
//======================================================================
int __fastcall BuddyInfo::getNumChatInfo(BuddyInfo *this)
{
  return (*((_DWORD *)this + 21) - *((_DWORD *)this + 20)) >> 2;
}


//======================================================================
// BuddyInfo::getChatInfo(int)
// address: 0x002D1FC2   size: 0x8 (8 bytes)
//======================================================================
int __fastcall BuddyInfo::getChatInfo(BuddyInfo *this, int a2)
{
  return *(_DWORD *)(4 * a2 + *((_DWORD *)this + 20));
}


//======================================================================
// BuddyInfo::getBuddyOWorld(int)
// address: 0x002D1FCC   size: 0x3E (62 bytes)
//======================================================================
int __fastcall BuddyInfo::getBuddyOWorld(BuddyInfo *this, int a2)
{
  int v2; // r3
  int v3; // r0
  int i; // r2

  v2 = *((_DWORD *)this + 17);
  v3 = 438261969 * ((*((_DWORD *)this + 18) - v2) >> 4);
  for ( i = 0; i != v3; ++i )
  {
    v2 += 784;
    if ( *(_DWORD *)(v2 - 784) == a2 )
      return CSMgr::getBuddyOWorld(g_CSMgr);
  }
  return 0;
}


//======================================================================
// BuddyInfo::getUin(void)
// address: 0x002D2018   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BuddyInfo::getUin(BuddyInfo *this)
{
  return *(_DWORD *)this;
}


//======================================================================
// BuddyInfo::getModel(void)
// address: 0x002D201C   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BuddyInfo::getModel(BuddyInfo *this)
{
  return *((unsigned __int8 *)this + 4);
}


//======================================================================
// BuddyInfo::getNickName(void)
// address: 0x002D2020   size: 0xE (14 bytes)
//======================================================================
BuddyInfo *__fastcall BuddyInfo::getNickName(BuddyInfo *this, int a2)
{
  sub_3BEB1C(this, a2 + 8);
  return this;
}


//======================================================================
// BuddyInfo::getVipLevel(void)
// address: 0x002D202E   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BuddyInfo::getVipLevel(BuddyInfo *this)
{
  return *((_DWORD *)this + 3);
}


//======================================================================
// BuddyInfo::getDiamond(void)
// address: 0x002D2032   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BuddyInfo::getDiamond(BuddyInfo *this)
{
  return *((_DWORD *)this + 4);
}


//======================================================================
// BuddyInfo::getFlower(void)
// address: 0x002D2036   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BuddyInfo::getFlower(BuddyInfo *this)
{
  return *((_DWORD *)this + 5);
}


//======================================================================
// BuddyInfo::getCredit(void)
// address: 0x002D203A   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BuddyInfo::getCredit(BuddyInfo *this)
{
  return *((_DWORD *)this + 6);
}


//======================================================================
// BuddyInfo::addCredit(void)
// address: 0x002D203E   size: 0x8 (8 bytes)
//======================================================================
int __fastcall BuddyInfo::addCredit(int this)
{
  ++*(_DWORD *)(this + 24);
  return this;
}


//======================================================================
// BuddyInfo::getAchievementScore(void)
// address: 0x002D2046   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BuddyInfo::getAchievementScore(BuddyInfo *this)
{
  return *((_DWORD *)this + 7);
}


//======================================================================
// BuddyInfo::getAchievementInfo(void)
// address: 0x002D204C   size: 0x5C (92 bytes)
//======================================================================
BuddyInfo *__fastcall BuddyInfo::getAchievementInfo(BuddyInfo *this, _DWORD *a2)
{
  unsigned int v4; // r5
  int v5; // r7
  const void *v6; // r1
  int v7; // r3
  int v8; // r6

  *(_DWORD *)this = a2[8];
  *((_DWORD *)this + 1) = a2[9];
  v4 = (a2[11] - a2[10]) >> 3;
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 0;
  v5 = 8 * v4;
  if ( v4 != 0 )
  {
    if ( v4 > 0x1FFFFFFF )
      sub_3BCEB4(this);
    v4 = operator new(8 * v4);
  }
  *((_DWORD *)this + 2) = v4;
  *((_DWORD *)this + 3) = v4;
  *((_DWORD *)this + 4) = v4 + v5;
  v6 = (const void *)a2[10];
  v7 = (a2[11] - (int)v6) >> 3;
  v8 = 8 * v7;
  if ( v7 != 0 )
    j_memmove((void *)v4, v6, 8 * v7);
  *((_DWORD *)this + 3) = v4 + v8;
  return this;
}


//======================================================================
// BuddyInfo::getWorldNum(void)
// address: 0x002D20AC   size: 0x4 (4 bytes)
//======================================================================
int __fastcall BuddyInfo::getWorldNum(BuddyInfo *this)
{
  return *((_DWORD *)this + 13);
}


//======================================================================
// BuddyInfo::getWorldDesc(int)
// address: 0x002D20B0   size: 0x14 (20 bytes)
//======================================================================
BuddyInfo *__fastcall BuddyInfo::getWorldDesc(BuddyInfo *this, int a2, int a3)
{
  BuddyWorldDesc::BuddyWorldDesc(this, (const BuddyWorldDesc *)(*(_DWORD *)(a2 + 56) + 40 * a3));
  return this;
}


//======================================================================
// BuddyInfo::addChatInfo(bool,char const*)
// address: 0x002D23E8   size: 0x4A (74 bytes)
//======================================================================
__int64 __fastcall BuddyInfo::addChatInfo(BuddyInfo *this, bool a2, char *a3)
{
  int v6; // r0
  _DWORD *v7; // r3
  __int64 v9; // [sp+0h] [bp-8h] BYREF

  LODWORD(v9) = this;
  v6 = operator new(8u);
  HIDWORD(v9) = v6;
  *(_BYTE *)v6 = a2;
  *(_DWORD *)(v6 + 4) = &byte_55FB88;
  sub_3BE508(HIDWORD(v9) + 4, a3);
  v7 = *((_DWORD **)this + 21);
  if ( v7 == *((_DWORD **)this + 22) )
  {
    std::vector<BuddyChatInfo *>::_M_emplace_back_aux<BuddyChatInfo * const&>((int)this + 80, (_DWORD *)&v9 + 1);
  }
  else
  {
    if ( v7 != nullptr )
      *v7 = HIDWORD(v9);
    *((_DWORD *)this + 21) += 4;
  }
  return v9;
}


//======================================================================
// BuddyInfo::setBuddyInfo(tagAccountWatch *)
// address: 0x002D24E8   size: 0x92 (146 bytes)
//======================================================================
void __fastcall __spoils<R2,R3,R12,LR> BuddyInfo::setBuddyInfo(int a1, int a2)
{
  int v3; // r5
  int v4; // r3
  int v5; // r6
  int v6; // r2
  int v7; // r3
  int v8; // r3
  _DWORD *v9; // r3
  int v10; // [sp+0h] [bp-8h] BYREF
  int v11; // [sp+4h] [bp-4h]

  v3 = a2;
  *(_DWORD *)a1 = *(_DWORD *)a2;
  v4 = *(unsigned __int8 *)(a2 + 8);
  if ( (unsigned int)(v4 - 1) > 9 )
    LOBYTE(v4) = 1;
  *(_BYTE *)(a1 + 4) = v4;
  sub_3BE508(a1 + 8, (char *)(a2 + 9));
  v5 = 0;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(v3 + 4160);
  *(_DWORD *)(a1 + 20) = *(_DWORD *)(v3 + 4164);
  *(_DWORD *)(a1 + 24) = *(_DWORD *)(v3 + 4168);
  *(_DWORD *)(a1 + 28) = *(_DWORD *)(v3 + 48);
  v6 = *(_DWORD *)(v3 + 56);
  v7 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 36) = 0;
  *(_DWORD *)(a1 + 32) = v6;
  *(_DWORD *)(a1 + 44) = v7;
  while ( v5 < *(_DWORD *)(a1 + 32) )
  {
    v8 = *(unsigned __int8 *)(v3 + 72);
    v10 = *(_DWORD *)(v3 + 64);
    v11 = v8;
    if ( v8 == 3 )
      ++*(_DWORD *)(a1 + 36);
    v9 = *(_DWORD **)(a1 + 44);
    if ( v9 == *(_DWORD **)(a1 + 48) )
    {
      std::vector<BuddyAchievement>::_M_emplace_back_aux<BuddyAchievement const&>(a1 + 40, &v10);
    }
    else
    {
      if ( v9 != nullptr )
      {
        *v9 = v10;
        v9[1] = v11;
      }
      *(_DWORD *)(a1 + 44) += 8;
    }
    ++v5;
    v3 += 16;
  }
}


//======================================================================
// BuddyInfo::~BuddyInfo()
// address: 0x002D2974   size: 0x5A (90 bytes)
//======================================================================
// Alternative name is '_ZN9BuddyInfoD2Ev'
void __fastcall BuddyInfo::~BuddyInfo(BuddyInfo *this)
{
  unsigned int i; // r5
  _DWORD *v3; // r0
  char *v4; // r6
  void *v5; // r0
  void *v6; // r0

  for ( i = 0; ; ++i )
  {
    v3 = *((_DWORD **)this + 20);
    if ( i >= (*((_DWORD *)this + 21) - (int)v3) >> 2 )
      break;
    v4 = (char *)v3[i];
    if ( v4 != nullptr )
    {
      sub_3BDF80(v4 + 4);
      operator delete(v4);
    }
  }
  if ( v3 != nullptr )
    operator delete(v3);
  v5 = *((void **)this + 17);
  if ( v5 != nullptr )
    operator delete(v5);
  std::vector<BuddyWorldDesc>::~vector((BuddyWorldDesc **)this + 14);
  v6 = *((void **)this + 10);
  if ( v6 != nullptr )
    operator delete(v6);
  sub_3BDF80((char *)this + 8);
}


//======================================================================
// BuddyInfo::BuddyInfo(void)
// address: 0x002D2A2C   size: 0x3E (62 bytes)
//======================================================================
// Alternative name is '_ZN9BuddyInfoC2Ev'
void __fastcall BuddyInfo::BuddyInfo(BuddyInfo *this)
{
  *((_DWORD *)this + 2) = &byte_55FB88;
  *((_DWORD *)this + 10) = 0;
  *((_DWORD *)this + 11) = 0;
  *((_DWORD *)this + 12) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = 0;
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 0;
  *((_DWORD *)this + 22) = 0;
  *((_BYTE *)this + 4) = 1;
  sub_3BE508((int)this + 8, (char *)&unk_3FB8EA);
}


//======================================================================
// BuddyInfo::setBuddyWorldInfo(tagWatchOWRes *)
// address: 0x002D2CFC   size: 0x104 (260 bytes)
//======================================================================
int __fastcall BuddyInfo::setBuddyWorldInfo(int a1, int a2)
{
  BuddyWorldDesc *v3; // r6
  int v5; // r1
  int v6; // r7
  char *v7; // r5
  int v8; // r2
  int v9; // r0
  __int16 v10; // r3
  int v11; // r1
  BuddyWorldDesc *v12; // r0
  void *v13; // r0
  __int64 v14; // r0
  int *v16; // [sp+4h] [bp-30h]
  int v17; // [sp+8h] [bp-2Ch] BYREF
  char *v18; // [sp+Ch] [bp-28h] BYREF
  _DWORD v19[5]; // [sp+10h] [bp-24h] BYREF
  char *v20; // [sp+24h] [bp-10h] BYREF
  unsigned __int8 v21; // [sp+28h] [bp-Ch]
  int v22; // [sp+2Ch] [bp-8h]

  v3 = *(BuddyWorldDesc **)(a1 + 56);
  v16 = (int *)(a1 + 56);
  std::_Destroy_aux<false>::__destroy<BuddyWorldDesc *>(v3, *(BuddyWorldDesc **)(a1 + 60));
  *(_DWORD *)(a1 + 60) = v3;
  v5 = *(_DWORD *)(a2 + 8);
  v6 = 0;
  v7 = (char *)(a2 + 16);
  *(_DWORD *)(a1 + 52) = v5;
  while ( v6 < *(_DWORD *)(a1 + 52) )
  {
    v8 = *(_DWORD *)v7;
    v18 = &byte_55FB88;
    v19[0] = &byte_55FB88;
    v20 = &byte_55FB88;
    v17 = v8;
    sub_3BE508((int)&v18, v7 + 4);
    sub_3BE508((int)v19, v7 + 40);
    v9 = *((_DWORD *)v7 + 30);
    v19[1] = *((_DWORD *)v7 + 28);
    v10 = *((_WORD *)v7 + 84);
    v19[2] = v9;
    LOWORD(v19[3]) = v10;
    v19[4] = (unsigned __int8)v7[170];
    sub_3BE508((int)&v20, v7 + 448);
    v11 = *((_DWORD *)v7 + 178);
    v21 = v7[704];
    v22 = v11;
    if ( (unsigned int)v21 - 1 > 9 )
      v21 = 1;
    v12 = *(BuddyWorldDesc **)(a1 + 60);
    if ( v12 == *(BuddyWorldDesc **)(a1 + 64) )
    {
      std::vector<BuddyWorldDesc>::_M_emplace_back_aux<BuddyWorldDesc const&>(v16, (BuddyWorldDesc *)&v17);
    }
    else
    {
      if ( v12 != nullptr )
        BuddyWorldDesc::BuddyWorldDesc(v12, (const BuddyWorldDesc *)&v17);
      *(_DWORD *)(a1 + 60) += 40;
    }
    v13 = *(void **)(a1 + 72);
    if ( v13 == *(void **)(a1 + 76) )
    {
      LODWORD(v14) = a1 + 68;
      HIDWORD(v14) = v7;
      std::vector<tagOWorld>::_M_emplace_back_aux<tagOWorld const&>(v14);
    }
    else
    {
      if ( v13 != nullptr )
        j_memcpy(v13, v7, 0x310u);
      *(_DWORD *)(a1 + 72) += 784;
    }
    BuddyWorldDesc::~BuddyWorldDesc((BuddyWorldDesc *)&v17);
    ++v6;
    v7 += 784;
  }
  return GameEventQue::postWatchBuddySuccess((GameEventQue *)Ogre::Singleton<GameEventQue>::ms_Singleton);
}

