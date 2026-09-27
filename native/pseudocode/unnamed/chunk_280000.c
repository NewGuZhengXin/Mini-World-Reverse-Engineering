// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_280000

//======================================================================
// sub_280070
// address: 0x00280070   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_280070(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'buddyWatch'", nullptr);
    v4 = ClientBuddyMgr::buddyWatch(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'buddyWatch'.", v6);
    return 0;
  }
}


//======================================================================
// sub_280118
// address: 0x00280118   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_280118(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'buddyAttention'", nullptr);
    v4 = ClientBuddyMgr::buddyAttention(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'buddyAttention'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2801C0
// address: 0x002801C0   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_2801C0(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r7
  int v3; // r4
  int NormalBuddy; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNormalBuddy'", nullptr);
    NormalBuddy = ClientBuddyMgr::getNormalBuddy(v2, v3);
    tolua_pushusertype(a1, NormalBuddy, "BuddyInfo", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNormalBuddy'.", v7);
    return 0;
  }
}


//======================================================================
// sub_280268
// address: 0x00280268   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_280268(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r7
  int v3; // r4
  int CloseBuddy; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCloseBuddy'", nullptr);
    CloseBuddy = ClientBuddyMgr::getCloseBuddy(v2, v3);
    tolua_pushusertype(a1, CloseBuddy, "BuddyInfo", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCloseBuddy'.", v7);
    return 0;
  }
}


//======================================================================
// sub_280310
// address: 0x00280310   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_280310(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r7
  int v3; // r4
  int Buddy; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'findBuddy'", nullptr);
    Buddy = ClientBuddyMgr::findBuddy(v2, v3);
    tolua_pushusertype(a1, Buddy, "BuddyInfo", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'findBuddy'.", v7);
    return 0;
  }
}


//======================================================================
// sub_2803B8
// address: 0x002803B8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_2803B8(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestBuddyChg'", nullptr);
    ClientBuddyMgr::requestBuddyChg(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestBuddyChg'.", v6);
  }
  return 0;
}


//======================================================================
// sub_280478
// address: 0x00280478   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_280478(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r7
  int v3; // r4
  const char *v4; // r5
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isstring(a1, 3, 0, v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (const char *)tolua_tostring(a1, 3, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'sendPrivateChat'", nullptr);
    ClientBuddyMgr::sendPrivateChat(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'sendPrivateChat'.", v6);
  }
  return 0;
}


//======================================================================
// sub_280530
// address: 0x00280530   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_280530(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestDelBuddy'", nullptr);
    ClientBuddyMgr::requestDelBuddy(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestDelBuddy'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2805D0
// address: 0x002805D0   size: 0xC2 (194 bytes)
//======================================================================
int __fastcall sub_2805D0(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r5
  const char *v3; // r6
  bool v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isstring(a1, 3, 0, v7)
    && tolua_isboolean(a1, 4, 0, v7) != 0
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (const char *)tolua_tostring(a1, 3, 0);
    v4 = tolua_toboolean(a1, 4, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'answerAddBuddy'", nullptr);
    ClientBuddyMgr::answerAddBuddy(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'answerAddBuddy'.", v7);
  }
  return 0;
}


//======================================================================
// sub_2806B0
// address: 0x002806B0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_2806B0(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r5
  const char *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestAddBuddy'", nullptr);
    ClientBuddyMgr::requestAddBuddy(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestAddBuddy'.", v5);
  }
  return 0;
}


//======================================================================
// sub_280738
// address: 0x00280738   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_280738(_DWORD *a1)
{
  char *v3; // [sp+8h] [bp-10h] BYREF
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    if ( tolua_tousertype(a1, 1, 0) == 0 )
      tolua_error(a1, "invalid 'self' in function 'getNickName'", nullptr);
    BuddyInfo::getNickName((BuddyInfo *)&v3);
    tolua_pushstring((int)a1, v3);
    sub_3BDF80(&v3);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNickName'.", v4);
    return 0;
  }
}


//======================================================================
// sub_2807C0
// address: 0x002807C0   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_2807C0(_DWORD *a1)
{
  BuddyInfo *v2; // r7
  int v3; // r4
  unsigned int BuddyOWorld; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuddyOWorld'", nullptr);
    BuddyOWorld = BuddyInfo::getBuddyOWorld(v2, v3);
    tolua_pushboolean(__SPAIR64__(BuddyOWorld, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyOWorld'.", v6);
    return 0;
  }
}


//======================================================================
// sub_280868
// address: 0x00280868   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_280868(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0
    && tolua_isusertype(a1, 2, "WATCHOWRES", 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tousertype(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setBuddyWorldInfo'", nullptr);
    BuddyInfo::setBuddyWorldInfo(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setBuddyWorldInfo'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2808F8
// address: 0x002808F8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_2808F8(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0
    && tolua_isusertype(a1, 2, "ACCOUNTWATCH", 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tousertype(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setBuddyInfo'", nullptr);
    BuddyInfo::setBuddyInfo(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setBuddyInfo'.", v5);
  }
  return 0;
}


//======================================================================
// sub_280988
// address: 0x00280988   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_280988(_DWORD *a1)
{
  BuddyInfo *v2; // r7
  int v3; // r4
  int ChatInfo; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getChatInfo'", nullptr);
    ChatInfo = BuddyInfo::getChatInfo(v2, v3);
    tolua_pushusertype(a1, ChatInfo, "BuddyChatInfo", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getChatInfo'.", v7);
    return 0;
  }
}


//======================================================================
// sub_280A30
// address: 0x00280A30   size: 0x9E (158 bytes)
//======================================================================
int __fastcall sub_280A30(_DWORD *a1)
{
  BuddyInfo *v2; // r5
  bool v3; // r6
  const char *v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v6) != 0
    && tolua_isboolean(a1, 2, 0, v6) != 0
    && tolua_isstring(a1, 3, 0, v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    v4 = (const char *)tolua_tostring(a1, 3, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addChatInfo'", nullptr);
    BuddyInfo::addChatInfo(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addChatInfo'.", v6);
  }
  return 0;
}


//======================================================================
// sub_280ADC
// address: 0x00280ADC   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_280ADC(_DWORD *a1)
{
  BuddyInfo *v1; // r0
  BuddyInfo *v2; // r4

  v1 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
  v2 = v1;
  if ( v1 != nullptr )
  {
    BuddyInfo::~BuddyInfo(v1);
    operator delete(v2);
  }
  return 0;
}


//======================================================================
// sub_280AF8
// address: 0x00280AF8   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_280AF8(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  int v4; // r3
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertable(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)operator new(0x5Cu);
    BuddyInfo::BuddyInfo(v3);
    tolua_pushusertype_and_takeownership(a1, (int)v3, "BuddyInfo", v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'new'.", v5);
    return 0;
  }
}


//======================================================================
// sub_280B68
// address: 0x00280B68   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_280B68(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  int v4; // r3
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertable(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)operator new(0x5Cu);
    BuddyInfo::BuddyInfo(v3);
    tolua_pushusertype(a1, (int)v3, "BuddyInfo", v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'new'.", v5);
    return 0;
  }
}


//======================================================================
// sub_280BD8
// address: 0x00280BD8   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_280BD8(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int isAttentionWorld; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isAttentionWorld'", nullptr);
    isAttentionWorld = ClientAccountMgr::isAttentionWorld(v2, v3);
    tolua_pushboolean(__SPAIR64__(isAttentionWorld, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isAttentionWorld'.", v6);
    return 0;
  }
}


//======================================================================
// sub_280C80
// address: 0x00280C80   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_280C80(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'removeAttentionIds'", nullptr);
    ClientAccountMgr::removeAttentionIds(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'removeAttentionIds'.", v5);
  }
  return 0;
}


//======================================================================
// sub_280D20
// address: 0x00280D20   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_280D20(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAttentionIds'", nullptr);
    v4 = ClientAccountMgr::addAttentionIds(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAttentionIds'.", v6);
    return 0;
  }
}


//======================================================================
// sub_280DC8
// address: 0x00280DC8   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall sub_280DC8(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestWatchOWList'", nullptr);
    v5 = ClientAccountMgr::requestWatchOWList(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestWatchOWList'.", v7);
    return 0;
  }
}


//======================================================================
// sub_280E90
// address: 0x00280E90   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_280E90(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isInMyWorld'", nullptr);
    v5 = ClientAccountMgr::isInMyWorld(v2, v7, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isInMyWorld'.", v8);
    return 0;
  }
}


//======================================================================
// sub_280F80
// address: 0x00280F80   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_280F80(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'delLoadWorldData'", nullptr);
    ClientAccountMgr::delLoadWorldData(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'delLoadWorldData'.", v5);
  }
  return 0;
}


//======================================================================
// sub_281020
// address: 0x00281020   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_281020(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 0, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addLoadWorldData'", nullptr);
    ClientAccountMgr::addLoadWorldData(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addLoadWorldData'.", v7);
  }
  return 0;
}


//======================================================================
// sub_281108
// address: 0x00281108   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_281108(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v3; // r6
  double v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'checkLoadWorld'", nullptr);
    v4 = (double)(int)ClientAccountMgr::checkLoadWorld(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v4), SHIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'checkLoadWorld'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2811B8
// address: 0x002811B8   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_2811B8(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int World; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestLoadWorld'", nullptr);
    World = ClientAccountMgr::requestLoadWorld(v2, v3);
    tolua_pushboolean(__SPAIR64__(World, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestLoadWorld'.", v6);
    return 0;
  }
}


//======================================================================
// sub_281260
// address: 0x00281260   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_281260(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  char *v4; // r5
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isstring(a1, 3, 0, v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (char *)tolua_tostring(a1, 3, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'sendBuddyOffLineChat'", nullptr);
    ClientAccountMgr::sendBuddyOffLineChat(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'sendBuddyOffLineChat'.", v6);
  }
  return 0;
}


//======================================================================
// sub_281318
// address: 0x00281318   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_281318(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestBuddyAttentionDel'", nullptr);
    v4 = ClientAccountMgr::requestBuddyAttentionDel(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestBuddyAttentionDel'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2813C0
// address: 0x002813C0   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_2813C0(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestBuddyAttention'", nullptr);
    v4 = ClientAccountMgr::requestBuddyAttention(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestBuddyAttention'.", v6);
    return 0;
  }
}


//======================================================================
// sub_281468
// address: 0x00281468   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_281468(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestBuddyWatch'", nullptr);
    v4 = ClientAccountMgr::requestBuddyWatch(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestBuddyWatch'.", v6);
    return 0;
  }
}


//======================================================================
// sub_281510
// address: 0x00281510   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_281510(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v3; // r6
  double BuddyModel; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuddyModel'", nullptr);
    BuddyModel = (double)(unsigned int)ClientAccountMgr::getBuddyModel(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(BuddyModel), SLODWORD(BuddyModel), SHIDWORD(BuddyModel));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyModel'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2815C0
// address: 0x002815C0   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_2815C0(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v3; // r6
  double BuddyCredit; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuddyCredit'", nullptr);
    BuddyCredit = (double)(int)ClientAccountMgr::getBuddyCredit(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(BuddyCredit), SLODWORD(BuddyCredit), SHIDWORD(BuddyCredit));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyCredit'.", v6);
    return 0;
  }
}


//======================================================================
// sub_281670
// address: 0x00281670   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_281670(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  char *BuddyName; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuddyName'", nullptr);
    BuddyName = (char *)ClientAccountMgr::getBuddyName(v2, v3);
    tolua_pushstring((int)a1, BuddyName);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyName'.", v6);
    return 0;
  }
}


//======================================================================
// sub_281718
// address: 0x00281718   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_281718(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int isBuddy; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isBuddy'", nullptr);
    isBuddy = ClientAccountMgr::isBuddy(v2, v3);
    tolua_pushboolean(__SPAIR64__(isBuddy, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isBuddy'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2817C0
// address: 0x002817C0   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_2817C0(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v3; // r6
  double BuddyUin; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuddyUin'", nullptr);
    BuddyUin = (double)(int)ClientAccountMgr::getBuddyUin(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(BuddyUin), SLODWORD(BuddyUin), SHIDWORD(BuddyUin));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyUin'.", v6);
    return 0;
  }
}


//======================================================================
// sub_281870
// address: 0x00281870   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall sub_281870(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 1, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0x3FF0000000000000LL));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestDownWorld'", nullptr);
    v5 = ClientAccountMgr::requestDownWorld(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestDownWorld'.", v7);
    return 0;
  }
}


//======================================================================
// sub_281940
// address: 0x00281940   size: 0xAA (170 bytes)
//======================================================================
int __fastcall sub_281940(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  const char *v4; // r5
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isstring(a1, 3, 0, v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (const char *)tolua_tostring(a1, 3, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestMemoOWorld'", nullptr);
    v5 = ClientAccountMgr::requestMemoOWorld(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestMemoOWorld'.", v7);
    return 0;
  }
}


//======================================================================
// sub_281A08
// address: 0x00281A08   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_281A08(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  double v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestAddCreditWorld'", nullptr);
    v5 = (double)(int)ClientAccountMgr::requestAddCreditWorld(v2, v3, v4);
    tolua_pushnumber((int)a1, SHIDWORD(v5), SLODWORD(v5), SHIDWORD(v5));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestAddCreditWorld'.", v7);
    return 0;
  }
}


//======================================================================
// sub_281AD8
// address: 0x00281AD8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_281AD8(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestAbortOpenWorld'", nullptr);
    ClientAccountMgr::requestAbortOpenWorld(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestAbortOpenWorld'.", v5);
  }
  return 0;
}


//======================================================================
// sub_281B78
// address: 0x00281B78   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_281B78(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestContinueOpenWorld'", nullptr);
    ClientAccountMgr::requestContinueOpenWorld(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestContinueOpenWorld'.", v5);
  }
  return 0;
}


//======================================================================
// sub_281C18
// address: 0x00281C18   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_281C18(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestPauseOpenWorld'", nullptr);
    ClientAccountMgr::requestPauseOpenWorld(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestPauseOpenWorld'.", v5);
  }
  return 0;
}


//======================================================================
// sub_281CB8
// address: 0x00281CB8   size: 0xAE (174 bytes)
//======================================================================
int __fastcall sub_281CB8(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  bool v4; // r5
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isboolean(a1, 3, 1, v7) != 0
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = tolua_toboolean(a1, 3, true);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestOpenOWorld'", nullptr);
    v5 = ClientAccountMgr::requestOpenOWorld(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestOpenOWorld'.", v7);
    return 0;
  }
}


//======================================================================
// sub_281D80
// address: 0x00281D80   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_281D80(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestEnterWorld'", nullptr);
    v4 = ClientAccountMgr::requestEnterWorld(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestEnterWorld'.", v6);
    return 0;
  }
}


//======================================================================
// sub_281E28
// address: 0x00281E28   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_281E28(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestDeleteWorld'", nullptr);
    v4 = ClientAccountMgr::requestDeleteWorld(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestDeleteWorld'.", v6);
    return 0;
  }
}


//======================================================================
// sub_281ED0
// address: 0x00281ED0   size: 0x110 (272 bytes)
//======================================================================
int __fastcall sub_281ED0(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  const char *v4; // r6
  int v5; // r7
  unsigned int World; // r0
  int v7; // [sp+Ch] [bp-20h]
  char *v8; // [sp+10h] [bp-1Ch]
  int v9; // [sp+14h] [bp-18h]
  int v10[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v10) != 0
    && tolua_isnumber(a1, 2, 0, (int)v10)
    && tolua_isstring(a1, 3, 0, v10)
    && tolua_isnumber(a1, 4, 0, (int)v10)
    && tolua_isstring(a1, 5, 0, v10)
    && tolua_isnumber(a1, 6, 0, (int)v10)
    && tolua_isnoobj((int)a1, 7, v10) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (char *)tolua_tostring(a1, 3, 0);
    v9 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (const char *)tolua_tostring(a1, 5, 0);
    v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestCreateWorld'", nullptr);
    World = ClientAccountMgr::requestCreateWorld(v3, v7, v8, v9, v4, v5);
    tolua_pushboolean(__SPAIR64__(World, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestCreateWorld'.", v10);
    return 0;
  }
}


//======================================================================
// sub_281FF8
// address: 0x00281FF8   size: 0xAA (170 bytes)
//======================================================================
int __fastcall sub_281FF8(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  const char *v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v7) != 0
    && tolua_isstring(a1, 2, 0, v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestModifyRole'", nullptr);
    v5 = ClientAccountMgr::requestModifyRole(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestModifyRole'.", v7);
    return 0;
  }
}


//======================================================================
// sub_2820C0
// address: 0x002820C0   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_2820C0(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  const char *v3; // r6
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestCheckNickname'", nullptr);
    v4 = ClientAccountMgr::requestCheckNickname(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestCheckNickname'.", v6);
    return 0;
  }
}


//======================================================================
// sub_282158
// address: 0x00282158   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_282158(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  int WorldDesc; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'findWorldDesc'", nullptr);
    WorldDesc = ClientAccountMgr::findWorldDesc(v2, v3);
    tolua_pushusertype(a1, WorldDesc, "WorldDesc", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'findWorldDesc'.", v7);
    return 0;
  }
}


//======================================================================
// sub_282200
// address: 0x00282200   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_282200(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'uniAchievementFinish'", nullptr);
    v4 = ClientAccountMgr::uniAchievementFinish(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'uniAchievementFinish'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2822A8
// address: 0x002822A8   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_2822A8(_DWORD *a1)
{
  ClientAccountMgr *v2; // r7
  int v3; // r4
  int RoleIcon; // r4
  _DWORD *v5; // r0
  int v6; // r3
  int v8[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v8) != 0
    && tolua_isnumber(a1, 2, 1, (int)v8)
    && tolua_isnoobj((int)a1, 3, v8) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0x3FF0000000000000LL));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getRoleIcon'", nullptr);
    RoleIcon = ClientAccountMgr::getRoleIcon(v2, v3);
    v5 = (_DWORD *)operator new(4u);
    *v5 = RoleIcon;
    tolua_pushusertype_and_takeownership(a1, (int)v5, "Ogre::HUIRES", v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getRoleIcon'.", v8);
    return 0;
  }
}


//======================================================================
// sub_282360
// address: 0x00282360   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_282360(_DWORD *a1)
{
  WorldList *v2; // r7
  int v3; // r4
  int WorldDesc; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "WorldList", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (WorldList *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'findWorldDesc'", nullptr);
    WorldDesc = WorldList::findWorldDesc(v2, v3);
    tolua_pushusertype(a1, WorldDesc, "WorldDesc", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'findWorldDesc'.", v7);
    return 0;
  }
}


//======================================================================
// sub_282408
// address: 0x00282408   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_282408(_DWORD *a1)
{
  WorldList *v2; // r7
  int v3; // r4
  int WorldDesc; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "WorldList", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (WorldList *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getWorldDesc'", nullptr);
    WorldDesc = WorldList::getWorldDesc(v2, v3);
    tolua_pushusertype(a1, WorldDesc, "WorldDesc", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getWorldDesc'.", v7);
    return 0;
  }
}


//======================================================================
// sub_2824B0
// address: 0x002824B0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_2824B0(_DWORD *a1)
{
  ClientManager *v2; // r5
  char *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clientLog'", nullptr);
    ClientManager::clientLog(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clientLog'.", v5);
  }
  return 0;
}


//======================================================================
// sub_282538
// address: 0x00282538   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_282538(_DWORD *a1)
{
  ClientManager *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'changeNetState'", nullptr);
    ClientManager::changeNetState(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'changeNetState'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2825D8
// address: 0x002825D8   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_2825D8(_DWORD *a1)
{
  ClientManager *v2; // r5
  const char *v3; // r6
  float v4; // r0
  float v5; // r7
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v7) != 0
    && tolua_isstring(a1, 2, 0, v7)
    && tolua_isnumber(a1, 3, 1, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'playSound2D'", nullptr);
    ClientManager::playSound2D(v2, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playSound2D'.", v7);
  }
  return 0;
}


//======================================================================
// sub_282690
// address: 0x00282690   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_282690(_DWORD *a1)
{
  ClientManager *v2; // r5
  const char *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'playMusic'", nullptr);
    ClientManager::playMusic(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playMusic'.", v5);
  }
  return 0;
}


//======================================================================
// sub_282718
// address: 0x00282718   size: 0x224 (548 bytes)
//======================================================================
int __fastcall sub_282718(_DWORD *a1)
{
  ClientManager *v2; // r5
  int v3; // r6
  int ItemIcon; // r5
  _DWORD *v5; // r0
  int v6; // r3
  int v8; // [sp+18h] [bp-28h] BYREF
  int v9; // [sp+1Ch] [bp-24h] BYREF
  int v10; // [sp+20h] [bp-20h] BYREF
  int v11; // [sp+24h] [bp-1Ch] BYREF
  int v12; // [sp+28h] [bp-18h] BYREF
  int v13; // [sp+2Ch] [bp-14h] BYREF
  int v14; // [sp+30h] [bp-10h] BYREF
  int v15[3]; // [sp+34h] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v15) != 0
    && tolua_isnumber(a1, 2, 0, (int)v15)
    && tolua_isnumber(a1, 3, 0, (int)v15)
    && tolua_isnumber(a1, 4, 0, (int)v15)
    && tolua_isnumber(a1, 5, 0, (int)v15)
    && tolua_isnumber(a1, 6, 0, (int)v15)
    && tolua_isnumber(a1, 7, 0, (int)v15)
    && tolua_isnumber(a1, 8, 0, (int)v15)
    && tolua_isnumber(a1, 9, 0, (int)v15)
    && tolua_isnoobj((int)a1, 10, v15) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v9 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v10 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v11 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    v12 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 7, 0));
    v13 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 8, 0));
    v14 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 9, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getItemIcon'", nullptr);
    ItemIcon = ClientManager::getItemIcon(v2, v3, &v8, &v9, &v10, &v11, &v12, &v13, &v14);
    v5 = (_DWORD *)operator new(4u);
    *v5 = ItemIcon;
    tolua_pushusertype_and_takeownership(a1, (int)v5, "Ogre::HUIRES", v6);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v8)),
      COERCE_UNSIGNED_INT64((double)v8),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v8)));
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v9)),
      COERCE_UNSIGNED_INT64((double)v9),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v9)));
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v10)),
      COERCE_UNSIGNED_INT64((double)v10),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v10)));
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v11)),
      COERCE_UNSIGNED_INT64((double)v11),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v11)));
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v12)),
      COERCE_UNSIGNED_INT64((double)v12),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v12)));
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v13)),
      COERCE_UNSIGNED_INT64((double)v13),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v13)));
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v14)),
      COERCE_UNSIGNED_INT64((double)v14),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v14)));
    return 8;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getItemIcon'.", v15);
    return 0;
  }
}


//======================================================================
// sub_282958
// address: 0x00282958   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_282958(_DWORD *a1)
{
  ClientManager *v2; // r5
  const char *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'gotoGame'", nullptr);
    ClientManager::gotoGame(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'gotoGame'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2829E0
// address: 0x002829E0   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_2829E0(_DWORD *a1)
{
  ClientManager *v2; // r5
  const char *v3; // r6
  char *GameVar; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGameVar'", nullptr);
    GameVar = (char *)ClientManager::getGameVar(v2, v3);
    tolua_pushstring((int)a1, GameVar);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGameVar'.", v6);
    return 0;
  }
}


//======================================================================
// sub_282A74
// address: 0x00282A74   size: 0x9A (154 bytes)
//======================================================================
int __fastcall sub_282A74(_DWORD *a1)
{
  ClientManager *v2; // r5
  const char *v3; // r6
  const char *v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6)
    && tolua_isstring(a1, 3, 0, v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = (const char *)tolua_tostring(a1, 3, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setGameVar'", nullptr);
    ClientManager::setGameVar(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setGameVar'.", v6);
  }
  return 0;
}


//======================================================================
// sub_282B1C
// address: 0x00282B1C   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_282B1C(_DWORD *a1)
{
  ClientManager *v2; // r5
  const char *v3; // r6
  double GameData; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGameData'", nullptr);
    GameData = (double)(int)ClientManager::getGameData(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(GameData), SLODWORD(GameData), SHIDWORD(GameData));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGameData'.", v6);
    return 0;
  }
}


//======================================================================
// sub_282BB8
// address: 0x00282BB8   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_282BB8(_DWORD *a1)
{
  ClientManager *v2; // r5
  const char *v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setGameData'", nullptr);
    ClientManager::setGameData(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setGameData'.", v6);
  }
  return 0;
}


//======================================================================
// sub_282C70
// address: 0x00282C70   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_282C70(_DWORD *a1)
{
  SurviveGame *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SurviveGame", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (SurviveGame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'enableMinimap'", nullptr);
    SurviveGame::enableMinimap(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'enableMinimap'.", v5);
  }
  return 0;
}


//======================================================================
// sub_282CFC
// address: 0x00282CFC   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_282CFC(_DWORD *a1)
{
  SurviveGame *v2; // r5
  const char *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SurviveGame", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (SurviveGame *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'sendChat'", nullptr);
    SurviveGame::sendChat(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'sendChat'.", v5);
  }
  return 0;
}


//======================================================================
// sub_282D88
// address: 0x00282D88   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_282D88(_DWORD *a1)
{
  SurviveGame *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SurviveGame", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (SurviveGame *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCurToolID'", nullptr);
    SurviveGame::setCurToolID(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCurToolID'.", v5);
  }
  return 0;
}


//======================================================================
// sub_282E28
// address: 0x00282E28   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_282E28(_DWORD *a1)
{
  SurviveGame *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "SurviveGame", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (SurviveGame *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setOperateUI'", nullptr);
    SurviveGame::setOperateUI(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setOperateUI'.", v5);
  }
  return 0;
}


//======================================================================
// sub_282EB8
// address: 0x00282EB8   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall sub_282EB8(_DWORD *a1)
{
  MainMenuStage *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7; // [sp+8h] [bp-1Ch]
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestSetWorldPermits'", nullptr);
    v5 = MainMenuStage::requestSetWorldPermits(v2, v7, v8, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestSetWorldPermits'.", v9);
    return 0;
  }
}


//======================================================================
// sub_282FC8
// address: 0x00282FC8   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_282FC8(_DWORD *a1)
{
  MainMenuStage *v2; // r7
  int v3; // r4
  unsigned int refreshed; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestRefreshOpenWorlds'", nullptr);
    refreshed = MainMenuStage::requestRefreshOpenWorlds(v2, v3);
    tolua_pushboolean(__SPAIR64__(refreshed, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestRefreshOpenWorlds'.", v6);
    return 0;
  }
}


//======================================================================
// sub_283070
// address: 0x00283070   size: 0xAE (174 bytes)
//======================================================================
int __fastcall sub_283070(_DWORD *a1)
{
  MainMenuStage *v2; // r7
  int v3; // r4
  bool v4; // r5
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isboolean(a1, 3, 0, v7) != 0
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = tolua_toboolean(a1, 3, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestOpenWorld'", nullptr);
    v5 = MainMenuStage::requestOpenWorld(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestOpenWorld'.", v7);
    return 0;
  }
}


//======================================================================
// sub_283138
// address: 0x00283138   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_283138(_DWORD *a1)
{
  MainMenuStage *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestDeleteWorld'", nullptr);
    v4 = MainMenuStage::requestDeleteWorld(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestDeleteWorld'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2831E0
// address: 0x002831E0   size: 0x112 (274 bytes)
//======================================================================
int __fastcall sub_2831E0(_DWORD *a1)
{
  MainMenuStage *v3; // r5
  const char *v4; // r7
  char v5; // r6
  unsigned int World; // r0
  int v7; // [sp+Ch] [bp-20h]
  char *v8; // [sp+10h] [bp-1Ch]
  int v9; // [sp+14h] [bp-18h]
  int v10[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v10) != 0
    && tolua_isnumber(a1, 2, 0, (int)v10)
    && tolua_isstring(a1, 3, 0, v10)
    && tolua_isnumber(a1, 4, 0, (int)v10)
    && tolua_isstring(a1, 5, 0, v10)
    && tolua_isnumber(a1, 6, 0, (int)v10)
    && tolua_isnoobj((int)a1, 7, v10) != 0 )
  {
    v3 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (char *)tolua_tostring(a1, 3, 0);
    v9 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (const char *)tolua_tostring(a1, 5, 0);
    v5 = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'offlineCreateWorld'", nullptr);
    World = MainMenuStage::offlineCreateWorld(v3, v7, v8, v9, v4, v5);
    tolua_pushboolean(__SPAIR64__(World, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'offlineCreateWorld'.", v10);
    return 0;
  }
}


//======================================================================
// sub_283310
// address: 0x00283310   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_283310(_DWORD *a1)
{
  MainMenuStage *v2; // r5
  int v3; // r6
  const char *v4; // r7
  unsigned int World; // r0
  int v7; // [sp+8h] [bp-1Ch]
  char *v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isstring(a1, 3, 0, v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isstring(a1, 5, 0, v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (char *)tolua_tostring(a1, 3, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (const char *)tolua_tostring(a1, 5, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestCreateWorld'", nullptr);
    World = MainMenuStage::requestCreateWorld(v2, v7, v8, v3, v4);
    tolua_pushboolean(__SPAIR64__(World, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestCreateWorld'.", v9);
    return 0;
  }
}


//======================================================================
// sub_283418
// address: 0x00283418   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_283418(_DWORD *a1)
{
  MainMenuStage *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestEnterWorld'", nullptr);
    v4 = MainMenuStage::requestEnterWorld(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestEnterWorld'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2834C0
// address: 0x002834C0   size: 0xAA (170 bytes)
//======================================================================
int __fastcall sub_2834C0(_DWORD *a1)
{
  MainMenuStage *v2; // r5
  const char *v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v7) != 0
    && tolua_isstring(a1, 2, 0, v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestModifyRole'", nullptr);
    v5 = MainMenuStage::requestModifyRole(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestModifyRole'.", v7);
    return 0;
  }
}


//======================================================================
// sub_283588
// address: 0x00283588   size: 0x86 (134 bytes)
//======================================================================
int __fastcall sub_283588(_DWORD *a1)
{
  MainMenuStage *v2; // r5
  const char *v3; // r6
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v6) != 0
    && tolua_isstring(a1, 2, 0, v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestCheckNickname'", nullptr);
    v4 = MainMenuStage::requestCheckNickname(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestCheckNickname'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28361C
// address: 0x0028361C   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_28361C(_DWORD *a1)
{
  MainMenuStage *v2; // r5
  const char *v3; // r6
  const char *v4; // r7
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v7) != 0
    && tolua_isstring(a1, 2, 0, v7)
    && tolua_isstring(a1, 3, 0, v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = (const char *)tolua_tostring(a1, 3, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestLogin'", nullptr);
    v5 = MainMenuStage::requestLogin(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestLogin'.", v7);
    return 0;
  }
}


//======================================================================
// sub_2836CC
// address: 0x002836CC   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_2836CC(_DWORD *a1)
{
  MainMenuStage *v2; // r5
  const char *v3; // r6
  const char *v4; // r7
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v7) != 0
    && tolua_isstring(a1, 2, 0, v7)
    && tolua_isstring(a1, 3, 0, v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    v4 = (const char *)tolua_tostring(a1, 3, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestRegister'", nullptr);
    v5 = MainMenuStage::requestRegister(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestRegister'.", v7);
    return 0;
  }
}


//======================================================================
// sub_28377C
// address: 0x0028377C   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall sub_28377C(_DWORD *a1)
{
  PlayerControl *v2; // r5
  bool v3; // r6
  bool v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v6) != 0
    && tolua_isboolean(a1, 2, 0, v6) != 0
    && tolua_isboolean(a1, 3, 1, v6) != 0
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    v4 = tolua_toboolean(a1, 3, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setUIHide'", nullptr);
    PlayerControl::setUIHide(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setUIHide'.", v6);
  }
  return 0;
}


//======================================================================
// sub_28382C
// address: 0x0028382C   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_28382C(_DWORD *a1)
{
  PlayerControl *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setJumping'", nullptr);
    PlayerControl::setJumping(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setJumping'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2838B8
// address: 0x002838B8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2838B8(_DWORD *a1)
{
  PlayerControl *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'cancelMoveUp'", nullptr);
    PlayerControl::cancelMoveUp(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'cancelMoveUp'.", v5);
  }
  return 0;
}


//======================================================================
// sub_283958
// address: 0x00283958   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_283958(_DWORD *a1)
{
  PlayerControl *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setMoveUp'", nullptr);
    PlayerControl::setMoveUp(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setMoveUp'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2839F8
// address: 0x002839F8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_2839F8(_DWORD *a1)
{
  PlayerControl *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setFlyMode'", nullptr);
    PlayerControl::setFlyMode(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setFlyMode'.", v5);
  }
  return 0;
}


//======================================================================
// sub_283A84
// address: 0x00283A84   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_283A84(_DWORD *a1)
{
  PlayerControl *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setUseItem'", nullptr);
    PlayerControl::setUseItem(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setUseItem'.", v5);
  }
  return 0;
}


//======================================================================
// sub_283B10
// address: 0x00283B10   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_283B10(_DWORD *a1)
{
  PlayerControl *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addCurToolDuration'", nullptr);
    PlayerControl::addCurToolDuration(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addCurToolDuration'.", v5);
  }
  return 0;
}


//======================================================================
// sub_283BB0
// address: 0x00283BB0   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_283BB0(_DWORD *a1)
{
  PlayerControl *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 1, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0x3FF0000000000000LL));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'gainItems'", nullptr);
    PlayerControl::gainItems(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'gainItems'.", v7);
  }
  return 0;
}


//======================================================================
// sub_283CA0
// address: 0x00283CA0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_283CA0(_DWORD *a1)
{
  PlayerControl *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'throwItem'", nullptr);
    PlayerControl::throwItem(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'throwItem'.", v6);
  }
  return 0;
}


//======================================================================
// sub_283D60
// address: 0x00283D60   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_283D60(_DWORD *a1)
{
  PlayerControl *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCurShortcut'", nullptr);
    PlayerControl::setCurShortcut(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCurShortcut'.", v5);
  }
  return 0;
}


//======================================================================
// sub_283E00
// address: 0x00283E00   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_283E00(_DWORD *a1)
{
  PlayerControl *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setViewMode'", nullptr);
    PlayerControl::setViewMode(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setViewMode'.", v5);
  }
  return 0;
}


//======================================================================
// sub_283EA0
// address: 0x00283EA0   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_283EA0(_DWORD *a1)
{
  ActorMinecart *v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertable(a1, 1, "ActorMinecart", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (ActorMinecart *)(int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = ActorMinecart::createByType(v2, v3);
    tolua_pushusertype(a1, v4, "ActorMinecart", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'createByType'.", v7);
    return 0;
  }
}


//======================================================================
// sub_283F20
// address: 0x00283F20   size: 0x6E (110 bytes)
//======================================================================
int __fastcall sub_283F20(_DWORD *a1)
{
  ActorMinecart *v2; // r0
  int v3; // r1
  int v4; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertable(a1, 1, "ActorMinecart", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (ActorMinecart *)(int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = ActorMinecart::create(v2, v3);
    tolua_pushusertype(a1, v4, "ActorMinecart", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'create'.", v7);
    return 0;
  }
}


//======================================================================
// sub_283FA0
// address: 0x00283FA0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_283FA0(_DWORD *a1)
{
  double v2; // r4
  double v3; // r0
  int v5[4]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isnumber(a1, 1, 0, (int)v5) && tolua_isnumber(a1, 2, 0, (int)v5) && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = COERCE_DOUBLE(tolua_tonumber(a1, 1, 0));
    v3 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    MobAddBreedingItem((int)v2, (int)v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'MobAddBreedingItem'.", v5);
  }
  return 0;
}


//======================================================================
// sub_284038
// address: 0x00284038   size: 0x96 (150 bytes)
//======================================================================
int __fastcall sub_284038(_DWORD *a1)
{
  double v2; // r4
  double v3; // r0
  int v4; // r2
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertable(a1, 1, "ClientMob", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    ClientMob::setBreedingItem((ClientMob *)(int)v2, (int)v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setBreedingItem'.", v6);
  }
  return 0;
}


//======================================================================
// sub_2840E0
// address: 0x002840E0   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_2840E0(_DWORD *a1)
{
  ClientMob *v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r0
  int v6; // r3
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnoobj((int)a1, 5, v9) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'selectNearMob'", nullptr);
    v5 = ClientMob::selectNearMob(v2, v8, v3, v4);
    tolua_pushusertype(a1, v5, "ClientMob", v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'selectNearMob'.", v9);
    return 0;
  }
}


//======================================================================
// sub_2841D0
// address: 0x002841D0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2841D0(_DWORD *a1)
{
  ClientMob *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'mobTamed'", nullptr);
    ClientMob::mobTamed(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'mobTamed'.", v5);
  }
  return 0;
}


//======================================================================
// sub_284270
// address: 0x00284270   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_284270(_DWORD *a1)
{
  ClientMob *v2; // r7
  int v3; // r4
  unsigned int isBreedItem; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isBreedItem'", nullptr);
    isBreedItem = ClientMob::isBreedItem(v2, v3);
    tolua_pushboolean(__SPAIR64__(isBreedItem, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isBreedItem'.", v6);
    return 0;
  }
}


//======================================================================
// sub_284318
// address: 0x00284318   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_284318(_DWORD *a1)
{
  ClientMob *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'playTameEffect'", nullptr);
    ClientMob::playTameEffect(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playTameEffect'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2843A8
// address: 0x002843A8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2843A8(_DWORD *a1)
{
  ClientMob *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCollarColor'", nullptr);
    ClientMob::setCollarColor(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCollarColor'.", v5);
  }
  return 0;
}


//======================================================================
// sub_284448
// address: 0x00284448   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_284448(_DWORD *a1)
{
  ClientMob *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setEquipIDByIdx'", nullptr);
    ClientMob::setEquipIDByIdx(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setEquipIDByIdx'.", v6);
  }
  return 0;
}


//======================================================================
// sub_284508
// address: 0x00284508   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_284508(_DWORD *a1)
{
  ClientMob *v2; // r5
  int v3; // r6
  double EquipIDByIdx; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getEquipIDByIdx'", nullptr);
    EquipIDByIdx = (double)(int)ClientMob::getEquipIDByIdx(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(EquipIDByIdx), SLODWORD(EquipIDByIdx), SHIDWORD(EquipIDByIdx));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getEquipIDByIdx'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2845B8
// address: 0x002845B8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_2845B8(_DWORD *a1)
{
  ClientMob *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setPersistance'", nullptr);
    ClientMob::setPersistance(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setPersistance'.", v5);
  }
  return 0;
}


//======================================================================
// sub_284644
// address: 0x00284644   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_284644(_DWORD *a1)
{
  ClientMob *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setInfuse'", nullptr);
    ClientMob::setInfuse(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setInfuse'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2846D0
// address: 0x002846D0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2846D0(_DWORD *a1)
{
  ClientMob *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setColor'", nullptr);
    ClientMob::setColor(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setColor'.", v5);
  }
  return 0;
}


//======================================================================
// sub_284770
// address: 0x00284770   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_284770(_DWORD *a1)
{
  ClientMob *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setSheared'", nullptr);
    ClientMob::setSheared(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setSheared'.", v5);
  }
  return 0;
}


//======================================================================
// sub_284800
// address: 0x00284800   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_284800(_DWORD *a1)
{
  ClientMob *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setSpecialFlag'", nullptr);
    ClientMob::setSpecialFlag(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setSpecialFlag'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2848A0
// address: 0x002848A0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2848A0(_DWORD *a1)
{
  ClientPlayer *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientPlayer", 0, v5) != 0
    && tolua_isnumber(a1, 2, 1, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientPlayer *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'detachUIModelView'", nullptr);
    ClientPlayer::detachUIModelView(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'detachUIModelView'.", v5);
  }
  return 0;
}


//======================================================================
// sub_284940
// address: 0x00284940   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_284940(_DWORD *a1)
{
  ClientPlayer *v2; // r5
  ModelView *v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientPlayer", 0, v6) != 0
    && tolua_isusertype(a1, 2, "ModelView", 0, v6) != 0
    && tolua_isnumber(a1, 3, 1, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientPlayer *)tolua_tousertype(a1, 1, 0);
    v3 = (ModelView *)tolua_tousertype(a1, 2, 0);
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'attachUIModelView'", nullptr);
    ClientPlayer::attachUIModelView(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'attachUIModelView'.", v6);
  }
  return 0;
}


//======================================================================
// sub_284A00
// address: 0x00284A00   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_284A00(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskEatGrass'", nullptr);
    ClientActor::addAiTaskEatGrass(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskEatGrass'.", v5);
  }
  return 0;
}


//======================================================================
// sub_284AA0
// address: 0x00284AA0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_284AA0(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskCreeperSwell'", nullptr);
    ClientActor::addAiTaskCreeperSwell(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskCreeperSwell'.", v5);
  }
  return 0;
}


//======================================================================
// sub_284B40
// address: 0x00284B40   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_284B40(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  float v4; // r0
  float v5; // r7
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskFollowParent'", nullptr);
    ClientActor::addAiTaskFollowParent(v2, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskFollowParent'.", v7);
  }
  return 0;
}


//======================================================================
// sub_284C00
// address: 0x00284C00   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_284C00(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  float v4; // r0
  float v5; // r7
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiMate'", nullptr);
    ClientActor::addAiMate(v2, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiMate'.", v7);
  }
  return 0;
}


//======================================================================
// sub_284CC0
// address: 0x00284CC0   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_284CC0(_DWORD *a1)
{
  ClientActor *v2; // r5
  float v3; // r0
  int v4; // r6
  int v5; // r7
  int v7; // [sp+8h] [bp-1Ch]
  float v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v8 = v3;
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiLeapAtTarget'", nullptr);
    ClientActor::addAiLeapAtTarget(v2, v7, v8, v4, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiLeapAtTarget'.", v9);
  }
  return 0;
}


//======================================================================
// sub_284DC8
// address: 0x00284DC8   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_284DC8(_DWORD *a1)
{
  ClientActor *v2; // r5
  float v3; // r0
  int v4; // r6
  bool v5; // r7
  int v7; // [sp+8h] [bp-1Ch]
  float v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isboolean(a1, 5, 0, v9) != 0
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v8 = v3;
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v5 = tolua_toboolean(a1, 5, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskTempt'", nullptr);
    ClientActor::addAiTaskTempt(v2, v7, v8, v4, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskTempt'.", v9);
  }
  return 0;
}


//======================================================================
// sub_284ED0
// address: 0x00284ED0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_284ED0(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  float v4; // r0
  float v5; // r7
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskPanic'", nullptr);
    ClientActor::addAiTaskPanic(v2, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskPanic'.", v7);
  }
  return 0;
}


//======================================================================
// sub_284F90
// address: 0x00284F90   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_284F90(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  float v4; // r0
  float v5; // r7
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskMoveTowardsRestriction'", nullptr);
    ClientActor::addAiTaskMoveTowardsRestriction(v2, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskMoveTowardsRestriction'.", v7);
  }
  return 0;
}


//======================================================================
// sub_285050
// address: 0x00285050   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_285050(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskBreakDoor'", nullptr);
    ClientActor::addAiTaskBreakDoor(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskBreakDoor'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2850F0
// address: 0x002850F0   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_2850F0(_DWORD *a1)
{
  ClientActor *v2; // r5
  bool v3; // r6
  float v4; // r0
  float v5; // r7
  int v7; // [sp+8h] [bp-1Ch]
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isboolean(a1, 4, 0, v9) != 0
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = tolua_toboolean(a1, 4, false);
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskTargetNearest'", nullptr);
    ClientActor::addAiTaskTargetNearest(v2, v7, v8, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskTargetNearest'.", v9);
  }
  return 0;
}


//======================================================================
// sub_2851F8
// address: 0x002851F8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_2851F8(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  float v4; // r0
  float v5; // r7
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskFleeSun'", nullptr);
    ClientActor::addAiTaskFleeSun(v2, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskFleeSun'.", v7);
  }
  return 0;
}


//======================================================================
// sub_2852B8
// address: 0x002852B8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2852B8(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskRestrictSun'", nullptr);
    ClientActor::addAiTaskRestrictSun(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskRestrictSun'.", v5);
  }
  return 0;
}


//======================================================================
// sub_285358
// address: 0x00285358   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_285358(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 0, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskTargetNonTamed'", nullptr);
    ClientActor::addAiTaskTargetNonTamed(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskTargetNonTamed'.", v7);
  }
  return 0;
}


//======================================================================
// sub_285440
// address: 0x00285440   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_285440(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  bool v4; // r5
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isboolean(a1, 3, 0, v6) != 0
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = tolua_toboolean(a1, 3, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskTargetHurtee'", nullptr);
    ClientActor::addAiTaskTargetHurtee(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskTargetHurtee'.", v6);
  }
  return 0;
}


//======================================================================
// sub_285500
// address: 0x00285500   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_285500(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskTargetOnwnerHurter'", nullptr);
    ClientActor::addAiTaskTargetOnwnerHurter(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskTargetOnwnerHurter'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2855A0
// address: 0x002855A0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2855A0(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskTargetOnwnerHurtee'", nullptr);
    ClientActor::addAiTaskTargetOnwnerHurtee(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskTargetOnwnerHurtee'.", v5);
  }
  return 0;
}


//======================================================================
// sub_285640
// address: 0x00285640   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_285640(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskLookIdle'", nullptr);
    ClientActor::addAiTaskLookIdle(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskLookIdle'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2856E0
// address: 0x002856E0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_2856E0(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskWatchClosest'", nullptr);
    ClientActor::addAiTaskWatchClosest(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskWatchClosest'.", v6);
  }
  return 0;
}


//======================================================================
// sub_2857A0
// address: 0x002857A0   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_2857A0(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 0, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskBeg'", nullptr);
    ClientActor::addAiTaskBeg(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskBeg'.", v7);
  }
  return 0;
}


//======================================================================
// sub_285888
// address: 0x00285888   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_285888(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  float v4; // r0
  float v5; // r7
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskWander'", nullptr);
    ClientActor::addAiTaskWander(v2, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskWander'.", v7);
  }
  return 0;
}


//======================================================================
// sub_285948
// address: 0x00285948   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_285948(_DWORD *a1)
{
  ClientActor *v2; // r5
  float v3; // r0
  int v4; // r6
  int v5; // r7
  int v7; // [sp+8h] [bp-1Ch]
  float v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v8 = v3;
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskFollowOwner'", nullptr);
    ClientActor::addAiTaskFollowOwner(v2, v7, v8, v4, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskFollowOwner'.", v9);
  }
  return 0;
}


//======================================================================
// sub_285A50
// address: 0x00285A50   size: 0x112 (274 bytes)
//======================================================================
int __fastcall sub_285A50(_DWORD *a1)
{
  ClientActor *v2; // r5
  float v3; // r0
  int v4; // r6
  int v5; // r7
  int v7; // [sp+Ch] [bp-20h]
  float v8; // [sp+10h] [bp-1Ch]
  int v9; // [sp+14h] [bp-18h]
  int v10[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v10) != 0
    && tolua_isnumber(a1, 2, 0, (int)v10)
    && tolua_isnumber(a1, 3, 0, (int)v10)
    && tolua_isnumber(a1, 4, 0, (int)v10)
    && tolua_isnumber(a1, 5, 0, (int)v10)
    && tolua_isnumber(a1, 6, 0, (int)v10)
    && tolua_isnoobj((int)a1, 7, v10) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v8 = v3;
    v9 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskArrowAttack'", nullptr);
    ClientActor::addAiTaskArrowAttack(v2, v7, v8, v9, v4, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskArrowAttack'.", v10);
  }
  return 0;
}


//======================================================================
// sub_285B80
// address: 0x00285B80   size: 0xEC (236 bytes)
//======================================================================
int __fastcall sub_285B80(_DWORD *a1)
{
  ClientActor *v2; // r5
  bool v3; // r6
  float v4; // r0
  float v5; // r7
  int v7; // [sp+8h] [bp-1Ch]
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isboolean(a1, 4, 0, v9) != 0
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = tolua_toboolean(a1, 4, false);
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskAtk'", nullptr);
    ClientActor::addAiTaskAtk(v2, v7, v8, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskAtk'.", v9);
  }
  return 0;
}


//======================================================================
// sub_285C88
// address: 0x00285C88   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_285C88(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskSit'", nullptr);
    ClientActor::addAiTaskSit(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskSit'.", v5);
  }
  return 0;
}


//======================================================================
// sub_285D28
// address: 0x00285D28   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_285D28(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addAiTaskSwimming'", nullptr);
    ClientActor::addAiTaskSwimming(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addAiTaskSwimming'.", v5);
  }
  return 0;
}


//======================================================================
// sub_285DC8
// address: 0x00285DC8   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_285DC8(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isInHomeDist'", nullptr);
    v5 = ClientActor::isInHomeDist(v2, v7, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isInHomeDist'.", v8);
    return 0;
  }
}


//======================================================================
// sub_285EB8
// address: 0x00285EB8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_285EB8(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'dropItem'", nullptr);
    ClientActor::dropItem(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'dropItem'.", v6);
  }
  return 0;
}


//======================================================================
// sub_285F78
// address: 0x00285F78   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_285F78(_DWORD *a1)
{
  ClientActor *v2; // r5
  BackPackGrid *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) == 0
    || tolua_isusertype(a1, 2, "BackPackGrid", 0, v5) == 0
    || tolua_isnoobj((int)a1, 3, v5) == 0 )
  {
    return sub_285EB8(a1);
  }
  v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
  v3 = (BackPackGrid *)tolua_tousertype(a1, 2, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in function 'dropItem'", nullptr);
  ClientActor::dropItem(v2, v3);
  return 0;
}


//======================================================================
// sub_286000
// address: 0x00286000   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_286000(_DWORD *a1)
{
  ClientActor *v2; // r5
  const char *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'playParticles'", nullptr);
    ClientActor::playParticles(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playParticles'.", v5);
  }
  return 0;
}


//======================================================================
// sub_286088
// address: 0x00286088   size: 0xC4 (196 bytes)
//======================================================================
int __fastcall sub_286088(_DWORD *a1)
{
  ClientActor *v2; // r5
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r7
  char *v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v9) != 0
    && tolua_isstring(a1, 2, 0, v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnoobj((int)a1, 5, v9) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v8 = (char *)tolua_tostring(a1, 2, 0);
    v3 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = v3;
    v5 = COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v6 = v5;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'playSound'", nullptr);
    ClientActor::playSound(v2, v8, v4, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playSound'.", v9);
  }
  return 0;
}


//======================================================================
// sub_286168
// address: 0x00286168   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_286168(_DWORD *a1)
{
  ClientActor *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setFire'", nullptr);
    ClientActor::setFire(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setFire'.", v5);
  }
  return 0;
}


//======================================================================
// sub_286208
// address: 0x00286208   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_286208(_DWORD *a1)
{
  ActorBody *v2; // r5
  ModelView *v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ActorBody", 0, v6) != 0
    && tolua_isusertype(a1, 2, "ModelView", 0, v6) != 0
    && tolua_isnumber(a1, 3, 1, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ActorBody *)tolua_tousertype(a1, 1, 0);
    v3 = (ModelView *)tolua_tousertype(a1, 2, 0);
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'detachUIModelView'", nullptr);
    ActorBody::detachUIModelView(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'detachUIModelView'.", v6);
  }
  return 0;
}


//======================================================================
// sub_2862C8
// address: 0x002862C8   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_2862C8(_DWORD *a1)
{
  ActorBody *v2; // r5
  ModelView *v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ActorBody", 0, v6) != 0
    && tolua_isusertype(a1, 2, "ModelView", 0, v6) != 0
    && tolua_isnumber(a1, 3, 1, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (ActorBody *)tolua_tousertype(a1, 1, 0);
    v3 = (ModelView *)tolua_tousertype(a1, 2, 0);
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'attachUIModelView'", nullptr);
    ActorBody::attachUIModelView(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'attachUIModelView'.", v6);
  }
  return 0;
}


//======================================================================
// sub_286388
// address: 0x00286388   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_286388(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerAttrib", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'addExp'", nullptr);
    PlayerAttrib::addExp(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addExp'.", v5);
  }
  return 0;
}


//======================================================================
// sub_286428
// address: 0x00286428   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_286428(_DWORD *a1)
{
  int v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerAttrib", 0, v4) != 0
    && tolua_isusertype(a1, 2, "STAMINA_METHOD", 0, v4) != 0
    && tolua_isnumber(a1, 3, 1, (int)v4)
    && tolua_isnoobj((int)a1, 4, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    tolua_tousertype(a1, 2, 0);
    tolua_tonumber(a1, 3, 0x3FF0000000000000LL);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'useStamina'", nullptr);
    PlayerAttrib::useStamina();
  }
  else
  {
    tolua_error(a1, "#ferror in function 'useStamina'.", v4);
  }
  return 0;
}


//======================================================================
// sub_2864E8
// address: 0x002864E8   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_2864E8(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  _BOOL4 v4; // r5
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerAttrib", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isboolean(a1, 3, 1, v6) != 0
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = tolua_toboolean(a1, 3, true);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'eatFood'", nullptr);
    PlayerAttrib::eatFood(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'eatFood'.", v6);
  }
  return 0;
}


//======================================================================
// sub_2865A8
// address: 0x002865A8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_2865A8(_DWORD *a1)
{
  LivingAttrib *v2; // r5
  float v3; // r6
  float v4; // r0
  float v5; // r7
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    LODWORD(v3) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'attackedByBuff'", nullptr);
    LivingAttrib::attackedByBuff(v2, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'attackedByBuff'.", v7);
  }
  return 0;
}


//======================================================================
// sub_286668
// address: 0x00286668   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall sub_286668(_DWORD *a1)
{
  LivingAttrib *v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'removeEnchant'", nullptr);
    v5 = LivingAttrib::removeEnchant(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'removeEnchant'.", v7);
    return 0;
  }
}


//======================================================================
// sub_286730
// address: 0x00286730   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_286730(_DWORD *a1)
{
  LivingAttrib *v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addEnchant'", nullptr);
    v5 = LivingAttrib::addEnchant(v2, v7, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addEnchant'.", v8);
    return 0;
  }
}


//======================================================================
// sub_286820
// address: 0x00286820   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_286820(_DWORD *a1)
{
  LivingAttrib *v2; // r5
  int v3; // r6
  double v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getModAttrib'", nullptr);
    v4 = COERCE_FLOAT(LivingAttrib::getModAttrib(v2, v3));
    tolua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v4), SHIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getModAttrib'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2868D0
// address: 0x002868D0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_2868D0(_DWORD *a1)
{
  LivingAttrib *v2; // r5
  int v3; // r6
  float v4; // r0
  float v5; // r7
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v5 = v4;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addModAttrib'", nullptr);
    LivingAttrib::addModAttrib(v2, v3, v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addModAttrib'.", v7);
  }
  return 0;
}


//======================================================================
// sub_286990
// address: 0x00286990   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_286990(_DWORD *a1)
{
  int v2; // r7
  int v3; // r5
  _DWORD *v4; // r0
  int v5; // r2
  int v6; // r5
  int v8[3]; // [sp+Ch] [bp-20h] BYREF
  _DWORD v9[5]; // [sp+18h] [bp-14h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnoobj((int)a1, 3, v8) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getBuffInfo'", nullptr);
    LivingAttrib::getBuffInfo(v9, v2, v3);
    v4 = (_DWORD *)operator new(0x10u);
    v5 = v9[1];
    v6 = v9[2];
    *v4 = v9[0];
    v4[1] = v5;
    v4[2] = v6;
    v4[3] = v9[3];
    tolua_pushusertype_and_takeownership(a1, (int)v4, "ActorBuff", (int)(v4 + 3));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuffInfo'.", v8);
    return 0;
  }
}


//======================================================================
// sub_286A50
// address: 0x00286A50   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_286A50(_DWORD *a1)
{
  LivingAttrib *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'removeBuff'", nullptr);
    LivingAttrib::removeBuff(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'removeBuff'.", v5);
  }
  return 0;
}


//======================================================================
// sub_286AF0
// address: 0x00286AF0   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_286AF0(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'addBuff'", nullptr);
    LivingAttrib::addBuff(__SPAIR64__(v3, v2), v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addBuff'.", v6);
  }
  return 0;
}


//======================================================================
// sub_286BB0
// address: 0x00286BB0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_286BB0(_DWORD *a1)
{
  LivingAttrib *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addOxygen'", nullptr);
    LivingAttrib::addOxygen(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addOxygen'.", v5);
  }
  return 0;
}


//======================================================================
// sub_286C50
// address: 0x00286C50   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_286C50(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ActorAttrib", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setFireSeconds'", nullptr);
    ActorAttrib::setFireSeconds(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setFireSeconds'.", v5);
  }
  return 0;
}


//======================================================================
// sub_286CF0
// address: 0x00286CF0   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_286CF0(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 0, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'enchant'", nullptr);
    BackPack::enchant(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'enchant'.", v7);
  }
  return 0;
}


//======================================================================
// sub_286DD8
// address: 0x00286DD8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_286DD8(_DWORD *a1)
{
  BackPack *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearEnchant'", nullptr);
    BackPack::clearEnchant(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearEnchant'.", v5);
  }
  return 0;
}


//======================================================================
// sub_286E78
// address: 0x00286E78   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_286E78(_DWORD *a1)
{
  BackPack *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'doRepair'", nullptr);
    BackPack::doRepair(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'doRepair'.", v5);
  }
  return 0;
}


//======================================================================
// sub_286F18
// address: 0x00286F18   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_286F18(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'doCrafting2Mobile'", nullptr);
    BackPack::doCrafting2Mobile(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'doCrafting2Mobile'.", v6);
  }
  return 0;
}


//======================================================================
// sub_286FD8
// address: 0x00286FD8   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_286FD8(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 0, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'updateCraftContainer'", nullptr);
    BackPack::updateCraftContainer(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'updateCraftContainer'.", v7);
  }
  return 0;
}


//======================================================================
// sub_2870C0
// address: 0x002870C0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2870C0(_DWORD *a1)
{
  BackPack *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'updateProductContainer'", nullptr);
    BackPack::updateProductContainer(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'updateProductContainer'.", v5);
  }
  return 0;
}


//======================================================================
// sub_287160
// address: 0x00287160   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_287160(_DWORD *a1)
{
  BackPack *v2; // r5
  BaseContainer *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v5) != 0
    && tolua_isusertype(a1, 2, "BaseContainer", 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (BaseContainer *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'detachContainer'", nullptr);
    BackPack::detachContainer(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'detachContainer'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2871F0
// address: 0x002871F0   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_2871F0(_DWORD *a1)
{
  BackPack *v2; // r5
  BaseContainer *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v5) != 0
    && tolua_isusertype(a1, 2, "BaseContainer", 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (BaseContainer *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'attachContainer'", nullptr);
    BackPack::attachContainer(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'attachContainer'.", v5);
  }
  return 0;
}


//======================================================================
// sub_287280
// address: 0x00287280   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_287280(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addItemDuration'", nullptr);
    BackPack::addItemDuration(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addItemDuration'.", v6);
  }
  return 0;
}


//======================================================================
// sub_287340
// address: 0x00287340   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_287340(_DWORD *a1)
{
  BackPack *v2; // r7
  int v3; // r4
  char *GridItemName; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridItemName'", nullptr);
    GridItemName = (char *)BackPack::getGridItemName(v2, v3);
    tolua_pushstring((int)a1, GridItemName);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridItemName'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2873E8
// address: 0x002873E8   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_2873E8(_DWORD *a1)
{
  BackPack *v2; // r7
  int v3; // r4
  unsigned int canPutItem; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'canPutItem'", nullptr);
    canPutItem = BackPack::canPutItem(v2, v3);
    tolua_pushboolean(__SPAIR64__(canPutItem, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'canPutItem'.", v6);
    return 0;
  }
}


//======================================================================
// sub_287490
// address: 0x00287490   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_287490(_DWORD *a1)
{
  BackPack *v2; // r7
  int v3; // r4
  int GridUserdata; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridUserdata'", nullptr);
    GridUserdata = BackPack::getGridUserdata(v2, v3);
    tolua_pushuserdata((int)a1, GridUserdata);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridUserdata'.", v6);
    return 0;
  }
}


//======================================================================
// sub_287538
// address: 0x00287538   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_287538(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  double GridEnough; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridEnough'", nullptr);
    GridEnough = (double)(int)BackPack::getGridEnough(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(GridEnough), SLODWORD(GridEnough), SHIDWORD(GridEnough));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridEnough'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2875E8
// address: 0x002875E8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_2875E8(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  double GridToolType; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridToolType'", nullptr);
    GridToolType = (double)(int)BackPack::getGridToolType(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(GridToolType), SLODWORD(GridToolType), SHIDWORD(GridToolType));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridToolType'.", v6);
    return 0;
  }
}


//======================================================================
// sub_287698
// address: 0x00287698   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_287698(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  double GridEnchantId; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridEnchantId'", nullptr);
    GridEnchantId = (double)(int)BackPack::getGridEnchantId(v2, v3, v4);
    tolua_pushnumber((int)a1, SHIDWORD(GridEnchantId), SLODWORD(GridEnchantId), SHIDWORD(GridEnchantId));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridEnchantId'.", v7);
    return 0;
  }
}


//======================================================================
// sub_287768
// address: 0x00287768   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_287768(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  double GridEnchantNum; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridEnchantNum'", nullptr);
    GridEnchantNum = (double)(int)BackPack::getGridEnchantNum(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(GridEnchantNum), SLODWORD(GridEnchantNum), SHIDWORD(GridEnchantNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridEnchantNum'.", v6);
    return 0;
  }
}


//======================================================================
// sub_287818
// address: 0x00287818   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_287818(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  double GridMaxDuration; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridMaxDuration'", nullptr);
    GridMaxDuration = (double)(int)BackPack::getGridMaxDuration(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(GridMaxDuration), SLODWORD(GridMaxDuration), SHIDWORD(GridMaxDuration));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridMaxDuration'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2878C8
// address: 0x002878C8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_2878C8(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  double GridDuration; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridDuration'", nullptr);
    GridDuration = (double)(int)BackPack::getGridDuration(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(GridDuration), SLODWORD(GridDuration), SHIDWORD(GridDuration));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridDuration'.", v6);
    return 0;
  }
}


//======================================================================
// sub_287978
// address: 0x00287978   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_287978(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  double GridNum; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridNum'", nullptr);
    GridNum = (double)(int)BackPack::getGridNum(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(GridNum), SLODWORD(GridNum), SHIDWORD(GridNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridNum'.", v6);
    return 0;
  }
}


//======================================================================
// sub_287A28
// address: 0x00287A28   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_287A28(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  double GridItem; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGridItem'", nullptr);
    GridItem = (double)(int)BackPack::getGridItem(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(GridItem), SLODWORD(GridItem), SHIDWORD(GridItem));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGridItem'.", v6);
    return 0;
  }
}


//======================================================================
// sub_287AD8
// address: 0x00287AD8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_287AD8(_DWORD *a1)
{
  BackPack *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'sortPack'", nullptr);
    BackPack::sortPack(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'sortPack'.", v5);
  }
  return 0;
}


//======================================================================
// sub_287B78
// address: 0x00287B78   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_287B78(_DWORD *a1)
{
  BackPack *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'mergePack'", nullptr);
    BackPack::mergePack(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'mergePack'.", v5);
  }
  return 0;
}


//======================================================================
// sub_287C18
// address: 0x00287C18   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_287C18(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  double ItemInNormalPack; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'findItemInNormalPack'", nullptr);
    ItemInNormalPack = (double)(int)BackPack::findItemInNormalPack(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(ItemInNormalPack), SLODWORD(ItemInNormalPack), SHIDWORD(ItemInNormalPack));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'findItemInNormalPack'.", v6);
    return 0;
  }
}


//======================================================================
// sub_287CC8
// address: 0x00287CC8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_287CC8(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'swapItem'", nullptr);
    BackPack::swapItem(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'swapItem'.", v6);
  }
  return 0;
}


//======================================================================
// sub_287D88
// address: 0x00287D88   size: 0xB0 (176 bytes)
//======================================================================
int __fastcall sub_287D88(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'shiftMoveItem'", nullptr);
    v5 = BackPack::shiftMoveItem(v2, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'shiftMoveItem'.", v7);
    return 0;
  }
}


//======================================================================
// sub_287E50
// address: 0x00287E50   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_287E50(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'moveItem'", nullptr);
    v5 = BackPack::moveItem(v2, v7, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'moveItem'.", v8);
    return 0;
  }
}


//======================================================================
// sub_287F40
// address: 0x00287F40   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_287F40(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+8h] [bp-1Ch]
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnumber(a1, 5, 0, (int)v8)
    && tolua_isnoobj((int)a1, 6, v8) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'replaceItem'", nullptr);
    BackPack::replaceItem(v2, v6, v7, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'replaceItem'.", v8);
  }
  return 0;
}


//======================================================================
// sub_288048
// address: 0x00288048   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_288048(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'removeItem'", nullptr);
    BackPack::removeItem(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'removeItem'.", v6);
  }
  return 0;
}


//======================================================================
// sub_288108
// address: 0x00288108   size: 0xFE (254 bytes)
//======================================================================
int __fastcall sub_288108(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  double v5; // r0
  int v7; // [sp+8h] [bp-1Ch]
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnumber(a1, 5, 1, (int)v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0xBFF0000000000000LL));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addStorageItem'", nullptr);
    v5 = (double)(int)BackPack::addStorageItem(v2, v7, v8, v3, v4);
    tolua_pushnumber((int)a1, SHIDWORD(v5), SLODWORD(v5), SHIDWORD(v5));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addStorageItem'.", v9);
    return 0;
  }
}


//======================================================================
// sub_288228
// address: 0x00288228   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_288228(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 1, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0x3FF0000000000000LL));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setItem'", nullptr);
    BackPack::setItem(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setItem'.", v7);
  }
  return 0;
}


//======================================================================
// sub_288318
// address: 0x00288318   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_288318(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setEnchantItem'", nullptr);
    BackPack::setEnchantItem(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setEnchantItem'.", v6);
  }
  return 0;
}


//======================================================================
// sub_2883D8
// address: 0x002883D8   size: 0x122 (290 bytes)
//======================================================================
int __fastcall sub_2883D8(_DWORD *a1)
{
  BackPack *v3; // r5
  int v4; // r6
  int v5; // r7
  double v6; // r0
  int v7; // [sp+Ch] [bp-20h]
  int v8; // [sp+10h] [bp-1Ch]
  int v9; // [sp+14h] [bp-18h]
  int v10[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v10) != 0
    && tolua_isnumber(a1, 2, 0, (int)v10)
    && tolua_isnumber(a1, 3, 0, (int)v10)
    && tolua_isnumber(a1, 4, 0, (int)v10)
    && tolua_isnumber(a1, 5, 0, (int)v10)
    && tolua_isnumber(a1, 6, 0, (int)v10)
    && tolua_isnoobj((int)a1, 7, v10) != 0 )
  {
    v3 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v9 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addItem'", nullptr);
    v6 = (double)(int)BackPack::addItem(v3, v7, v8, v9, v4, v5);
    tolua_pushnumber((int)a1, SHIDWORD(v6), SLODWORD(v6), SHIDWORD(v6));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addItem'.", v10);
    return 0;
  }
}


//======================================================================
// sub_288518
// address: 0x00288518   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall sub_288518(_DWORD *a1)
{
  BackPack *v2; // r5
  int v3; // r6
  int v4; // r7
  double v5; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v8) == 0
    || !tolua_isnumber(a1, 2, 0, (int)v8)
    || !tolua_isnumber(a1, 3, 0, (int)v8)
    || !tolua_isnumber(a1, 4, 1, (int)v8)
    || tolua_isnoobj((int)a1, 5, v8) == 0 )
  {
    return sub_2883D8(a1);
  }
  v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
  v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0x3FF0000000000000LL));
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in function 'addItem'", nullptr);
  v5 = (double)(int)BackPack::addItem(v2, v7, v3, v4);
  tolua_pushnumber((int)a1, SHIDWORD(v5), SLODWORD(v5), SHIDWORD(v5));
  return 1;
}


//======================================================================
// sub_288608
// address: 0x00288608   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_288608(_DWORD *a1)
{
  BackPack *v2; // r7
  int v3; // r4
  int Container; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getContainer'", nullptr);
    Container = BackPack::getContainer(v2, v3);
    tolua_pushusertype(a1, Container, "BaseContainer", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getContainer'.", v7);
    return 0;
  }
}


//======================================================================
// sub_2886B0
// address: 0x002886B0   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_2886B0(_DWORD *a1)
{
  WorldContainerMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  int StorageBox; // r0
  int v6; // r3
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldContainerMgr", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnoobj((int)a1, 5, v9) != 0 )
  {
    v2 = (WorldContainerMgr *)tolua_tousertype(a1, 1, 0);
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getStorageBox'", nullptr);
    StorageBox = WorldContainerMgr::getStorageBox(v2, v8, v3, v4);
    tolua_pushusertype(a1, StorageBox, "WorldStorageBox", v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getStorageBox'.", v9);
    return 0;
  }
}


//======================================================================
// sub_2887A0
// address: 0x002887A0   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_2887A0(_DWORD *a1)
{
  WorldContainerMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldContainerMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 0, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (WorldContainerMgr *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'removeStorageBox'", nullptr);
    WorldContainerMgr::removeStorageBox(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'removeStorageBox'.", v7);
  }
  return 0;
}


//======================================================================
// sub_288888
// address: 0x00288888   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_288888(_DWORD *a1)
{
  WorldContainerMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r0
  int v6; // r3
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldContainerMgr", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnoobj((int)a1, 5, v9) != 0 )
  {
    v2 = (WorldContainerMgr *)tolua_tousertype(a1, 1, 0);
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addStorageBox'", nullptr);
    v5 = WorldContainerMgr::addStorageBox(v2, v8, v3, v4);
    tolua_pushusertype(a1, v5, "WorldStorageBox", v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addStorageBox'.", v9);
    return 0;
  }
}


//======================================================================
// sub_288978
// address: 0x00288978   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_288978(_DWORD *a1)
{
  WorldContainerMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  int Furnace; // r0
  int v6; // r3
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldContainerMgr", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnoobj((int)a1, 5, v9) != 0 )
  {
    v2 = (WorldContainerMgr *)tolua_tousertype(a1, 1, 0);
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFurnace'", nullptr);
    Furnace = WorldContainerMgr::getFurnace(v2, v8, v3, v4);
    tolua_pushusertype(a1, Furnace, "WorldFurnace", v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFurnace'.", v9);
    return 0;
  }
}


//======================================================================
// sub_288A68
// address: 0x00288A68   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_288A68(_DWORD *a1)
{
  WorldContainerMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldContainerMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 0, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (WorldContainerMgr *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'removeFurnace'", nullptr);
    WorldContainerMgr::removeFurnace(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'removeFurnace'.", v7);
  }
  return 0;
}


//======================================================================
// sub_288B50
// address: 0x00288B50   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_288B50(_DWORD *a1)
{
  WorldContainerMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  int v5; // r0
  int v6; // r3
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldContainerMgr", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnoobj((int)a1, 5, v9) != 0 )
  {
    v2 = (WorldContainerMgr *)tolua_tousertype(a1, 1, 0);
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addFurnace'", nullptr);
    v5 = WorldContainerMgr::addFurnace(v2, v8, v3, v4);
    tolua_pushusertype(a1, v5, "WorldFurnace", v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addFurnace'.", v9);
    return 0;
  }
}


//======================================================================
// sub_288C40
// address: 0x00288C40   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_288C40(_DWORD *a1)
{
  WorldStorageBox *v2; // r7
  int v3; // r4
  unsigned int v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "WorldStorageBox", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (WorldStorageBox *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'checkEmptyGrid'", nullptr);
    v4 = WorldStorageBox::checkEmptyGrid(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'checkEmptyGrid'.", v6);
    return 0;
  }
}


//======================================================================
// sub_288CE8
// address: 0x00288CE8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_288CE8(_DWORD *a1)
{
  WorldStorageBox *v2; // r5
  WorldStorageBox *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "WorldStorageBox", 0, v5) != 0
    && tolua_isusertype(a1, 2, "WorldStorageBox", 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (WorldStorageBox *)tolua_tousertype(a1, 1, 0);
    v3 = (WorldStorageBox *)tolua_tousertype(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'append'", nullptr);
    WorldStorageBox::append(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'append'.", v5);
  }
  return 0;
}


//======================================================================
// sub_288D78
// address: 0x00288D78   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_288D78(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postAttentionOWWatchResult'", nullptr);
    GameEventQue::postAttentionOWWatchResult(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postAttentionOWWatchResult'.", v5);
  }
  return 0;
}


//======================================================================
// sub_288E18
// address: 0x00288E18   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_288E18(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postOWWatchResult'", nullptr);
    GameEventQue::postOWWatchResult(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postOWWatchResult'.", v5);
  }
  return 0;
}


//======================================================================
// sub_288EB8
// address: 0x00288EB8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_288EB8(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postMissionComplete'", nullptr);
    GameEventQue::postMissionComplete(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postMissionComplete'.", v5);
  }
  return 0;
}


//======================================================================
// sub_288F58
// address: 0x00288F58   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_288F58(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postGameDialogue'", nullptr);
    GameEventQue::postGameDialogue(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postGameDialogue'.", v5);
  }
  return 0;
}


//======================================================================
// sub_288FF8
// address: 0x00288FF8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_288FF8(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postBossState'", nullptr);
    GameEventQue::postBossState(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postBossState'.", v6);
  }
  return 0;
}


//======================================================================
// sub_2890B8
// address: 0x002890B8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_2890B8(_DWORD *a1)
{
  GameEventQue *v2; // r5
  const char *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postInfoTips'", nullptr);
    GameEventQue::postInfoTips(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postInfoTips'.", v5);
  }
  return 0;
}


//======================================================================
// sub_289140
// address: 0x00289140   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_289140(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) == 0
    || !tolua_isnumber(a1, 2, 0, (int)v5)
    || tolua_isnoobj((int)a1, 3, v5) == 0 )
  {
    return sub_2890B8(a1);
  }
  v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
  v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in function 'postInfoTips'", nullptr);
  GameEventQue::postInfoTips(v2, v3);
  return 0;
}


//======================================================================
// sub_2891D0
// address: 0x002891D0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2891D0(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postWorldDownComplete'", nullptr);
    GameEventQue::postWorldDownComplete(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postWorldDownComplete'.", v5);
  }
  return 0;
}


//======================================================================
// sub_289270
// address: 0x00289270   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_289270(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postNetAnomaly'", nullptr);
    GameEventQue::postNetAnomaly(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postNetAnomaly'.", v5);
  }
  return 0;
}


//======================================================================
// sub_289310
// address: 0x00289310   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_289310(_DWORD *a1)
{
  GameEventQue *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postHideUI'", nullptr);
    GameEventQue::postHideUI(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postHideUI'.", v5);
  }
  return 0;
}


//======================================================================
// sub_28939C
// address: 0x0028939C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_28939C(_DWORD *a1)
{
  GameEventQue *v2; // r5
  const char *v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isstring(a1, 2, 0, v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (const char *)tolua_tostring(a1, 2, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postAddBuddySuccess'", nullptr);
    GameEventQue::postAddBuddySuccess(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postAddBuddySuccess'.", v5);
  }
  return 0;
}


//======================================================================
// sub_289428
// address: 0x00289428   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_289428(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postAchievementReward'", nullptr);
    GameEventQue::postAchievementReward(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postAchievementReward'.", v6);
  }
  return 0;
}


//======================================================================
// sub_2894E8
// address: 0x002894E8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_2894E8(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postLoadProgress'", nullptr);
    GameEventQue::postLoadProgress(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postLoadProgress'.", v6);
  }
  return 0;
}


//======================================================================
// sub_2895A8
// address: 0x002895A8   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_2895A8(_DWORD *a1)
{
  GameEventQue *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postEnterGame'", nullptr);
    GameEventQue::postEnterGame(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postEnterGame'.", v5);
  }
  return 0;
}


//======================================================================
// sub_289638
// address: 0x00289638   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_289638(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postBuddyChat'", nullptr);
    GameEventQue::postBuddyChat(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postBuddyChat'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2896D8
// address: 0x002896D8   size: 0xBE (190 bytes)
//======================================================================
int __fastcall sub_2896D8(_DWORD *a1)
{
  GameEventQue *v2; // r5
  const char *v3; // r6
  const char *v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isstring(a1, 3, 0, v7)
    && tolua_isstring(a1, 4, 0, v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (const char *)tolua_tostring(a1, 3, 0);
    v4 = (const char *)tolua_tostring(a1, 4, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postChatEvent'", nullptr);
    GameEventQue::postChatEvent(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postChatEvent'.", v7);
  }
  return 0;
}


//======================================================================
// sub_2897B0
// address: 0x002897B0   size: 0xA4 (164 bytes)
//======================================================================
int __fastcall sub_2897B0(_DWORD *a1)
{
  GameEventQue *v2; // r5
  bool v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v6) != 0
    && tolua_isboolean(a1, 2, 0, v6) != 0
    && tolua_isnumber(a1, 3, 1, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postWorldListChange'", nullptr);
    GameEventQue::postWorldListChange(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postWorldListChange'.", v6);
  }
  return 0;
}


//======================================================================
// sub_289870
// address: 0x00289870   size: 0x80 (128 bytes)
//======================================================================
int __fastcall sub_289870(_DWORD *a1)
{
  GameEventQue *v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postEnterWater'", nullptr);
    GameEventQue::postEnterWater(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postEnterWater'.", v5);
  }
  return 0;
}


//======================================================================
// sub_289900
// address: 0x00289900   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_289900(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postShortcutSelected'", nullptr);
    GameEventQue::postShortcutSelected(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postShortcutSelected'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2899A0
// address: 0x002899A0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_2899A0(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postStorageboxUpdatePoint'", nullptr);
    GameEventQue::postStorageboxUpdatePoint(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postStorageboxUpdatePoint'.", v5);
  }
  return 0;
}


//======================================================================
// sub_289A40
// address: 0x00289A40   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_289A40(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postBackpackChange'", nullptr);
    GameEventQue::postBackpackChange(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postBackpackChange'.", v5);
  }
  return 0;
}


//======================================================================
// sub_289AE0
// address: 0x00289AE0   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_289AE0(_DWORD *a1)
{
  GameEventQue *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postSimpleEvent'", nullptr);
    GameEventQue::postSimpleEvent(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postSimpleEvent'.", v5);
  }
  return 0;
}


//======================================================================
// sub_289B80
// address: 0x00289B80   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_289B80(_DWORD *a1)
{
  int v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'revive'", nullptr);
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 200))(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'revive'.", v4);
  }
  return 0;
}


//======================================================================
// sub_289BEC
// address: 0x00289BEC   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_289BEC(_DWORD *a1)
{
  int v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'playSaySound'", nullptr);
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 200))(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playSaySound'.", v4);
  }
  return 0;
}


//======================================================================
// sub_289C58
// address: 0x00289C58   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_289C58(_DWORD *a1)
{
  int v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'playStepSound'", nullptr);
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 180))(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playStepSound'.", v4);
  }
  return 0;
}


//======================================================================
// sub_289CC4
// address: 0x00289CC4   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_289CC4(_DWORD *a1)
{
  int v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'playDeathSound'", nullptr);
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 176))(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playDeathSound'.", v4);
  }
  return 0;
}


//======================================================================
// sub_289D30
// address: 0x00289D30   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_289D30(_DWORD *a1)
{
  int v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'playHurtSound'", nullptr);
    (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 172))(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'playHurtSound'.", v4);
  }
  return 0;
}


//======================================================================
// sub_289D9C
// address: 0x00289D9C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_289D9C(_DWORD *a1)
{
  AchievementManager *v3; // r5
  double CurTrackID; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCurTrackID'", nullptr);
    CurTrackID = (double)(int)AchievementManager::getCurTrackID(v3);
    tolua_pushnumber((int)a1, SHIDWORD(CurTrackID), SLODWORD(CurTrackID), SHIDWORD(CurTrackID));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCurTrackID'.", v5);
    return 0;
  }
}


//======================================================================
// sub_289E14
// address: 0x00289E14   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_289E14(_DWORD *a1)
{
  AchievementManager *v3; // r5
  double AchievementSize; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementSize'", nullptr);
    AchievementSize = (double)(int)AchievementManager::getAchievementSize(v3);
    tolua_pushnumber((int)a1, SHIDWORD(AchievementSize), SLODWORD(AchievementSize), SHIDWORD(AchievementSize));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementSize'.", v5);
    return 0;
  }
}


//======================================================================
// sub_289E8C
// address: 0x00289E8C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_289E8C(_DWORD *a1)
{
  ClientActorMgr *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActorMgr", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientActorMgr *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearMobs'", nullptr);
    ClientActorMgr::clearMobs(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearMobs'.", v4);
  }
  return 0;
}


//======================================================================
// sub_289EF4
// address: 0x00289EF4   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_289EF4(_DWORD *a1)
{
  int v3; // r5
  char *v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientGame", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getName'", nullptr);
    v4 = (char *)(*(int (__fastcall **)(int))(*(_DWORD *)v3 + 12))(v3);
    tolua_pushstring((int)a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getName'.", v5);
    return 0;
  }
}


//======================================================================
// sub_289F68
// address: 0x00289F68   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_289F68(_DWORD *a1)
{
  DefManager *v3; // r5
  double AchievementDefNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (DefManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementDefNum'", nullptr);
    AchievementDefNum = (double)(int)DefManager::getAchievementDefNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(AchievementDefNum), SLODWORD(AchievementDefNum), SHIDWORD(AchievementDefNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementDefNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_289FE0
// address: 0x00289FE0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_289FE0(_DWORD *a1)
{
  DefManager *v3; // r5
  double CurAccordEnchantsNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (DefManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCurAccordEnchantsNum'", nullptr);
    CurAccordEnchantsNum = (double)(int)DefManager::getCurAccordEnchantsNum(v3);
    tolua_pushnumber(
      (int)a1,
      SHIDWORD(CurAccordEnchantsNum),
      SLODWORD(CurAccordEnchantsNum),
      SHIDWORD(CurAccordEnchantsNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCurAccordEnchantsNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A058
// address: 0x0028A058   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A058(_DWORD *a1)
{
  DefManager *v3; // r5
  double ItemNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (DefManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getItemNum'", nullptr);
    ItemNum = (double)(int)DefManager::getItemNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(ItemNum), SLODWORD(ItemNum), SHIDWORD(ItemNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getItemNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A0D0
// address: 0x0028A0D0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A0D0(_DWORD *a1)
{
  BlockOperateMgr *v3; // r5
  double v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BlockOperateMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BlockOperateMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getDigProgress'", nullptr);
    v4 = COERCE_FLOAT(BlockOperateMgr::getDigProgress(v3));
    tolua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v4), SHIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getDigProgress'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A148
// address: 0x0028A148   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A148(_DWORD *a1)
{
  BlockOperateMgr *v3; // r5
  double v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BlockOperateMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BlockOperateMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCollideInFaceZ'", nullptr);
    v4 = COERCE_FLOAT(BlockOperateMgr::getCollideInFaceZ(v3));
    tolua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v4), SHIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCollideInFaceZ'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A1C0
// address: 0x0028A1C0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A1C0(_DWORD *a1)
{
  BlockOperateMgr *v3; // r5
  double v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BlockOperateMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BlockOperateMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCollideInFaceY'", nullptr);
    v4 = COERCE_FLOAT(BlockOperateMgr::getCollideInFaceY(v3));
    tolua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v4), SHIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCollideInFaceY'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A238
// address: 0x0028A238   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A238(_DWORD *a1)
{
  BlockOperateMgr *v3; // r5
  double v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BlockOperateMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BlockOperateMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCollideInFaceX'", nullptr);
    v4 = COERCE_FLOAT(BlockOperateMgr::getCollideInFaceX(v3));
    tolua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v4), SHIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCollideInFaceX'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A2B0
// address: 0x0028A2B0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28A2B0(_DWORD *a1)
{
  World *v3; // r5
  unsigned int isCreativeMode; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (World *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isCreativeMode'", nullptr);
    isCreativeMode = World::isCreativeMode(v3);
    tolua_pushboolean(__SPAIR64__(isCreativeMode, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isCreativeMode'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A324
// address: 0x0028A324   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A324(_DWORD *a1)
{
  ClientBuddyMgr *v3; // r5
  double CreditNumToday; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCreditNumToday'", nullptr);
    CreditNumToday = (double)(int)ClientBuddyMgr::getCreditNumToday(v3);
    tolua_pushnumber((int)a1, SHIDWORD(CreditNumToday), SLODWORD(CreditNumToday), SHIDWORD(CreditNumToday));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCreditNumToday'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A39C
// address: 0x0028A39C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A39C(_DWORD *a1)
{
  ClientBuddyMgr *v3; // r5
  double Num; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuddyFindNum'", nullptr);
    Num = (double)(int)ClientBuddyMgr::getBuddyFindNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Num), SLODWORD(Num), SHIDWORD(Num));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyFindNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A414
// address: 0x0028A414   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28A414(_DWORD *a1)
{
  ClientBuddyMgr *v3; // r5
  unsigned int v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'BuddyFind'", nullptr);
    v4 = ClientBuddyMgr::BuddyFind(v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'BuddyFind'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A488
// address: 0x0028A488   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A488(_DWORD *a1)
{
  ClientBuddyMgr *v3; // r5
  double ChatMsgNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getChatMsgNum'", nullptr);
    ChatMsgNum = (double)(int)ClientBuddyMgr::getChatMsgNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(ChatMsgNum), SLODWORD(ChatMsgNum), SHIDWORD(ChatMsgNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getChatMsgNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A500
// address: 0x0028A500   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28A500(_DWORD *a1)
{
  ClientBuddyMgr *v3; // r5
  int WatchBuddyInfo; // r0
  int v5; // r3
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v6) != 0 && tolua_isnoobj((int)a1, 2, v6) != 0 )
  {
    v3 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getWatchBuddyInfo'", nullptr);
    WatchBuddyInfo = ClientBuddyMgr::getWatchBuddyInfo(v3);
    tolua_pushusertype(a1, WatchBuddyInfo, "BuddyInfo", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getWatchBuddyInfo'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28A57C
// address: 0x0028A57C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28A57C(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuddyOffLineChat'", nullptr);
    ClientBuddyMgr::getBuddyOffLineChat(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyOffLineChat'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28A5E4
// address: 0x0028A5E4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A5E4(_DWORD *a1)
{
  ClientBuddyMgr *v3; // r5
  double NumNormalBuddy; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNumNormalBuddy'", nullptr);
    NumNormalBuddy = (double)(int)ClientBuddyMgr::getNumNormalBuddy(v3);
    tolua_pushnumber((int)a1, SHIDWORD(NumNormalBuddy), SLODWORD(NumNormalBuddy), SHIDWORD(NumNormalBuddy));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNumNormalBuddy'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A65C
// address: 0x0028A65C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A65C(_DWORD *a1)
{
  ClientBuddyMgr *v3; // r5
  double NumCloseBuddy; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNumCloseBuddy'", nullptr);
    NumCloseBuddy = (double)(int)ClientBuddyMgr::getNumCloseBuddy(v3);
    tolua_pushnumber((int)a1, SHIDWORD(NumCloseBuddy), SLODWORD(NumCloseBuddy), SHIDWORD(NumCloseBuddy));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNumCloseBuddy'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A6D4
// address: 0x0028A6D4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A6D4(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  double WorldNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getWorldNum'", nullptr);
    WorldNum = (double)(int)BuddyInfo::getWorldNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(WorldNum), SLODWORD(WorldNum), SHIDWORD(WorldNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getWorldNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A74C
// address: 0x0028A74C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A74C(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  double AchievementScore; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementScore'", nullptr);
    AchievementScore = (double)(int)BuddyInfo::getAchievementScore(v3);
    tolua_pushnumber((int)a1, SHIDWORD(AchievementScore), SLODWORD(AchievementScore), SHIDWORD(AchievementScore));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementScore'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A7C4
// address: 0x0028A7C4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28A7C4(_DWORD *a1)
{
  BuddyInfo *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'addCredit'", nullptr);
    BuddyInfo::addCredit(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addCredit'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28A82C
// address: 0x0028A82C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A82C(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  double Credit; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCredit'", nullptr);
    Credit = (double)(int)BuddyInfo::getCredit(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Credit), SLODWORD(Credit), SHIDWORD(Credit));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCredit'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A8A4
// address: 0x0028A8A4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A8A4(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  double Flower; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFlower'", nullptr);
    Flower = (double)(int)BuddyInfo::getFlower(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Flower), SLODWORD(Flower), SHIDWORD(Flower));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFlower'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A91C
// address: 0x0028A91C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A91C(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  double Diamond; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getDiamond'", nullptr);
    Diamond = (double)(int)BuddyInfo::getDiamond(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Diamond), SLODWORD(Diamond), SHIDWORD(Diamond));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getDiamond'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28A994
// address: 0x0028A994   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28A994(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  double VipLevel; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getVipLevel'", nullptr);
    VipLevel = (double)(int)BuddyInfo::getVipLevel(v3);
    tolua_pushnumber((int)a1, SHIDWORD(VipLevel), SLODWORD(VipLevel), SHIDWORD(VipLevel));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getVipLevel'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28AA0C
// address: 0x0028AA0C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28AA0C(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  double Model; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getModel'", nullptr);
    Model = (double)(unsigned int)BuddyInfo::getModel(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Model), SLODWORD(Model), SHIDWORD(Model));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getModel'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28AA84
// address: 0x0028AA84   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28AA84(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  double Uin; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getUin'", nullptr);
    Uin = (double)(int)BuddyInfo::getUin(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Uin), SLODWORD(Uin), SHIDWORD(Uin));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getUin'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28AAFC
// address: 0x0028AAFC   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28AAFC(_DWORD *a1)
{
  BuddyInfo *v3; // r5
  double NumChatInfo; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNumChatInfo'", nullptr);
    NumChatInfo = (double)(int)BuddyInfo::getNumChatInfo(v3);
    tolua_pushnumber((int)a1, SHIDWORD(NumChatInfo), SLODWORD(NumChatInfo), SHIDWORD(NumChatInfo));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNumChatInfo'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28AB74
// address: 0x0028AB74   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28AB74(_DWORD *a1)
{
  int *v1; // r5
  _DWORD *v3; // r0
  char *v4; // r1
  BuddyInfo *v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  v1 = v7;
  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v7) != 0 && tolua_isnoobj((int)a1, 2, v7) != 0 )
  {
    v5 = (BuddyInfo *)tolua_tousertype(a1, 1, 0);
    v1 = (int *)v5;
    if ( v5 != nullptr )
    {
      BuddyInfo::~BuddyInfo(v5);
      operator delete(v1);
      return 0;
    }
    v3 = a1;
    v4 = "invalid 'self' in function 'delete'";
  }
  else
  {
    v3 = a1;
    v4 = "#ferror in function 'delete'.";
  }
  tolua_error(v3, v4, v1);
  return 0;
}


//======================================================================
// sub_28ABDC
// address: 0x0028ABDC   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28ABDC(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double AttentionOwNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAttentionOwNum'", nullptr);
    AttentionOwNum = (double)(int)ClientAccountMgr::getAttentionOwNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(AttentionOwNum), SLODWORD(AttentionOwNum), SHIDWORD(AttentionOwNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAttentionOwNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28AC54
// address: 0x0028AC54   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28AC54(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  unsigned int v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestWatchAttention'", nullptr);
    v4 = ClientAccountMgr::requestWatchAttention(v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestWatchAttention'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28ACC8
// address: 0x0028ACC8   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28ACC8(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearExceptOW'", nullptr);
    ClientAccountMgr::clearExceptOW(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearExceptOW'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28AD30
// address: 0x0028AD30   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28AD30(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double WarchOwNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getWarchOwNum'", nullptr);
    WarchOwNum = (double)(int)ClientAccountMgr::getWarchOwNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(WarchOwNum), SLODWORD(WarchOwNum), SHIDWORD(WarchOwNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getWarchOwNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28ADA8
// address: 0x0028ADA8   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28ADA8(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearWarchOW'", nullptr);
    ClientAccountMgr::clearWarchOW(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearWarchOW'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28AE10
// address: 0x0028AE10   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28AE10(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double LoadProgress; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getLoadProgress'", nullptr);
    LoadProgress = (double)(int)ClientAccountMgr::getLoadProgress(v3);
    tolua_pushnumber((int)a1, SHIDWORD(LoadProgress), SLODWORD(LoadProgress), SHIDWORD(LoadProgress));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getLoadProgress'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28AE88
// address: 0x0028AE88   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28AE88(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'abortLoadWorld'", nullptr);
    ClientAccountMgr::abortLoadWorld(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'abortLoadWorld'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28AEF0
// address: 0x0028AEF0   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28AEF0(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuddyOffLineChat'", nullptr);
    ClientAccountMgr::getBuddyOffLineChat(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyOffLineChat'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28AF58
// address: 0x0028AF58   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28AF58(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double BuddyNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuddyNum'", nullptr);
    BuddyNum = (double)(int)ClientAccountMgr::getBuddyNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(BuddyNum), SLODWORD(BuddyNum), SHIDWORD(BuddyNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28AFD0
// address: 0x0028AFD0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28AFD0(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  unsigned int v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestBuddyFind'", nullptr);
    v4 = ClientAccountMgr::requestBuddyFind(v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestBuddyFind'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B044
// address: 0x0028B044   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28B044(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  unsigned int v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestEnterGame'", nullptr);
    v4 = ClientAccountMgr::requestEnterGame(v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestEnterGame'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B0B8
// address: 0x0028B0B8   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28B0B8(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  unsigned int isLogin; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isLogin'", nullptr);
    isLogin = ClientAccountMgr::isLogin(v3);
    tolua_pushboolean(__SPAIR64__(isLogin, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isLogin'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B12C
// address: 0x0028B12C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B12C(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double Credit; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCredit'", nullptr);
    Credit = (double)(int)ClientAccountMgr::getCredit(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Credit), SLODWORD(Credit), SHIDWORD(Credit));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCredit'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B1A4
// address: 0x0028B1A4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B1A4(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double Flower; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFlower'", nullptr);
    Flower = (double)(int)ClientAccountMgr::getFlower(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Flower), SLODWORD(Flower), SHIDWORD(Flower));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFlower'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B21C
// address: 0x0028B21C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B21C(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double Diamond; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getDiamond'", nullptr);
    Diamond = (double)(int)ClientAccountMgr::getDiamond(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Diamond), SLODWORD(Diamond), SHIDWORD(Diamond));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getDiamond'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B294
// address: 0x0028B294   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B294(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double AchievementFinishNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementFinishNum'", nullptr);
    AchievementFinishNum = (double)(int)ClientAccountMgr::getAchievementFinishNum(v3);
    tolua_pushnumber(
      (int)a1,
      SHIDWORD(AchievementFinishNum),
      SLODWORD(AchievementFinishNum),
      SHIDWORD(AchievementFinishNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementFinishNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B30C
// address: 0x0028B30C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B30C(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double AchievementPoints; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementPoints'", nullptr);
    AchievementPoints = (double)(int)ClientAccountMgr::getAchievementPoints(v3);
    tolua_pushnumber((int)a1, SHIDWORD(AchievementPoints), SLODWORD(AchievementPoints), SHIDWORD(AchievementPoints));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementPoints'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B384
// address: 0x0028B384   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B384(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double RoleModel; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getRoleModel'", nullptr);
    RoleModel = (double)(unsigned int)ClientAccountMgr::getRoleModel(v3);
    tolua_pushnumber((int)a1, SHIDWORD(RoleModel), SLODWORD(RoleModel), SHIDWORD(RoleModel));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getRoleModel'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B3FC
// address: 0x0028B3FC   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28B3FC(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  char *NickName; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNickName'", nullptr);
    NickName = (char *)ClientAccountMgr::getNickName(v3);
    tolua_pushstring((int)a1, NickName);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNickName'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B470
// address: 0x0028B470   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B470(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  double Uin; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getUin'", nullptr);
    Uin = (double)(int)ClientAccountMgr::getUin(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Uin), SLODWORD(Uin), SHIDWORD(Uin));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getUin'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B4E8
// address: 0x0028B4E8   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28B4E8(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  int OpenWorldList; // r0
  int v5; // r3
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0 && tolua_isnoobj((int)a1, 2, v6) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getOpenWorldList'", nullptr);
    OpenWorldList = ClientAccountMgr::getOpenWorldList(v3);
    tolua_pushusertype(a1, OpenWorldList, "WorldList", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getOpenWorldList'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28B564
// address: 0x0028B564   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28B564(_DWORD *a1)
{
  ClientAccountMgr *v3; // r5
  int MyWorldList; // r0
  int v5; // r3
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0 && tolua_isnoobj((int)a1, 2, v6) != 0 )
  {
    v3 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getMyWorldList'", nullptr);
    MyWorldList = ClientAccountMgr::getMyWorldList(v3);
    tolua_pushusertype(a1, MyWorldList, "WorldList", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getMyWorldList'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28B5E0
// address: 0x0028B5E0   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28B5E0(_DWORD *a1)
{
  ClientAccountMgr *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientAccountMgr *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'updateWorld'", nullptr);
    ClientAccountMgr::updateWorld(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'updateWorld'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28B648
// address: 0x0028B648   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B648(_DWORD *a1)
{
  WorldList *v3; // r5
  double DownWorldNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldList", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (WorldList *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getDownWorldNum'", nullptr);
    DownWorldNum = (double)(int)WorldList::getDownWorldNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(DownWorldNum), SLODWORD(DownWorldNum), SHIDWORD(DownWorldNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getDownWorldNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B6C0
// address: 0x0028B6C0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B6C0(_DWORD *a1)
{
  WorldList *v3; // r5
  double WorldNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldList", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (WorldList *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getMyCreateWorldNum'", nullptr);
    WorldNum = (double)(int)WorldList::getMyCreateWorldNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(WorldNum), SLODWORD(WorldNum), SHIDWORD(WorldNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getMyCreateWorldNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B738
// address: 0x0028B738   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B738(_DWORD *a1)
{
  WorldList *v3; // r5
  double NumOpenWorld; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldList", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (WorldList *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNumOpenWorld'", nullptr);
    NumOpenWorld = (double)(int)WorldList::getNumOpenWorld(v3);
    tolua_pushnumber((int)a1, SHIDWORD(NumOpenWorld), SLODWORD(NumOpenWorld), SHIDWORD(NumOpenWorld));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNumOpenWorld'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B7B0
// address: 0x0028B7B0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B7B0(_DWORD *a1)
{
  WorldList *v3; // r5
  double NumWorld; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldList", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (WorldList *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNumWorld'", nullptr);
    NumWorld = (double)(int)WorldList::getNumWorld(v3);
    tolua_pushnumber((int)a1, SHIDWORD(NumWorld), SLODWORD(NumWorld), SHIDWORD(NumWorld));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNumWorld'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B828
// address: 0x0028B828   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28B828(_DWORD *a1)
{
  ClientManager *v3; // r5
  char *v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clientVersion'", nullptr);
    v4 = (char *)ClientManager::clientVersion(v3);
    tolua_pushstring((int)a1, v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clientVersion'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B89C
// address: 0x0028B89C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28B89C(_DWORD *a1)
{
  ClientManager *v3; // r5
  unsigned int isSharingOWorld; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isSharingOWorld'", nullptr);
    isSharingOWorld = ClientManager::isSharingOWorld(v3);
    tolua_pushboolean(__SPAIR64__(isSharingOWorld, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isSharingOWorld'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B910
// address: 0x0028B910   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28B910(_DWORD *a1)
{
  ClientManager *v3; // r5
  double NetworkState; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNetworkState'", nullptr);
    NetworkState = (double)(int)ClientManager::getNetworkState(v3);
    tolua_pushnumber((int)a1, SHIDWORD(NetworkState), SLODWORD(NetworkState), SHIDWORD(NetworkState));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNetworkState'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28B988
// address: 0x0028B988   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28B988(_DWORD *a1)
{
  ClientManager *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'stopMusic'", nullptr);
    ClientManager::stopMusic(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'stopMusic'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28B9F0
// address: 0x0028B9F0   size: 0x74 (116 bytes)
//======================================================================
int __fastcall sub_28B9F0(_DWORD *a1)
{
  ClientManager *v3; // r5
  int NullItemIcon; // r5
  _DWORD *v5; // r0
  int v6; // r3
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v7) != 0 && tolua_isnoobj((int)a1, 2, v7) != 0 )
  {
    v3 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNullItemIcon'", nullptr);
    NullItemIcon = ClientManager::getNullItemIcon(v3);
    v5 = (_DWORD *)operator new(4u);
    *v5 = NullItemIcon;
    tolua_pushusertype_and_takeownership(a1, (int)v5, "Ogre::HUIRES", v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNullItemIcon'.", v7);
    return 0;
  }
}


//======================================================================
// sub_28BA74
// address: 0x0028BA74   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28BA74(_DWORD *a1)
{
  ClientManager *v3; // r5
  unsigned int isMobile; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isMobile'", nullptr);
    isMobile = ClientManager::isMobile(v3);
    tolua_pushboolean(__SPAIR64__(isMobile, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isMobile'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28BAE8
// address: 0x0028BAE8   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28BAE8(_DWORD *a1)
{
  ClientManager *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientManager", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientManager *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'appalyGameSetData'", nullptr);
    ClientManager::appalyGameSetData(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'appalyGameSetData'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28BB50
// address: 0x0028BB50   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28BB50(_DWORD *a1)
{
  SurviveGame *v3; // r5
  double GameTimeMinute; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SurviveGame", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (SurviveGame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGameTimeMinute'", nullptr);
    GameTimeMinute = (double)(int)SurviveGame::getGameTimeMinute(v3);
    tolua_pushnumber((int)a1, SHIDWORD(GameTimeMinute), SLODWORD(GameTimeMinute), SHIDWORD(GameTimeMinute));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGameTimeMinute'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28BBC8
// address: 0x0028BBC8   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28BBC8(_DWORD *a1)
{
  SurviveGame *v3; // r5
  double GameTimeHour; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SurviveGame", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (SurviveGame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getGameTimeHour'", nullptr);
    GameTimeHour = (double)(int)SurviveGame::getGameTimeHour(v3);
    tolua_pushnumber((int)a1, SHIDWORD(GameTimeHour), SLODWORD(GameTimeHour), SHIDWORD(GameTimeHour));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGameTimeHour'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28BC40
// address: 0x0028BC40   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28BC40(_DWORD *a1)
{
  SurviveGame *v3; // r5
  int MainPlayer; // r0
  int v5; // r3
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SurviveGame", 0, v6) != 0 && tolua_isnoobj((int)a1, 2, v6) != 0 )
  {
    v3 = (SurviveGame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getMainPlayer'", nullptr);
    MainPlayer = SurviveGame::getMainPlayer(v3);
    tolua_pushusertype(a1, MainPlayer, "PlayerControl", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getMainPlayer'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28BCBC
// address: 0x0028BCBC   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28BCBC(_DWORD *a1)
{
  SurviveGame *v3; // r5
  unsigned int isOperateUI; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "SurviveGame", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (SurviveGame *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isOperateUI'", nullptr);
    isOperateUI = SurviveGame::isOperateUI(v3);
    tolua_pushboolean(__SPAIR64__(isOperateUI, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isOperateUI'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28BD30
// address: 0x0028BD30   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28BD30(_DWORD *a1)
{
  MainMenuStage *v3; // r5
  unsigned int v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "MainMenuStage", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (MainMenuStage *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'requestLoginOnline'", nullptr);
    v4 = MainMenuStage::requestLoginOnline(v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'requestLoginOnline'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28BDA4
// address: 0x0028BDA4   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28BDA4(_DWORD *a1)
{
  PlayerControl *v3; // r5
  double BlockZ; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockZ'", nullptr);
    BlockZ = (double)(int)PlayerControl::getBlockZ(v3);
    tolua_pushnumber((int)a1, SHIDWORD(BlockZ), SLODWORD(BlockZ), SHIDWORD(BlockZ));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockZ'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28BE1C
// address: 0x0028BE1C   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28BE1C(_DWORD *a1)
{
  PlayerControl *v3; // r5
  double BlockY; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockY'", nullptr);
    BlockY = (double)(int)PlayerControl::getBlockY(v3);
    tolua_pushnumber((int)a1, SHIDWORD(BlockY), SLODWORD(BlockY), SHIDWORD(BlockY));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockY'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28BE94
// address: 0x0028BE94   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28BE94(_DWORD *a1)
{
  PlayerControl *v3; // r5
  double BlockX; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockX'", nullptr);
    BlockX = (double)(int)PlayerControl::getBlockX(v3);
    tolua_pushnumber((int)a1, SHIDWORD(BlockX), SLODWORD(BlockX), SHIDWORD(BlockX));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockX'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28BF0C
// address: 0x0028BF0C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28BF0C(_DWORD *a1)
{
  PlayerControl *v3; // r5
  unsigned int FlyMode; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (PlayerControl *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFlyMode'", nullptr);
    FlyMode = PlayerControl::getFlyMode(v3);
    tolua_pushboolean(__SPAIR64__(FlyMode, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFlyMode'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28BF80
// address: 0x0028BF80   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28BF80(_DWORD *a1)
{
  ClientMob *v3; // r5
  int NearbyMate; // r0
  int v5; // r3
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v6) != 0 && tolua_isnoobj((int)a1, 2, v6) != 0 )
  {
    v3 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNearbyMate'", nullptr);
    NearbyMate = ClientMob::getNearbyMate(v3);
    tolua_pushusertype(a1, NearbyMate, "ClientMob", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNearbyMate'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28BFFC
// address: 0x0028BFFC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28BFFC(_DWORD *a1)
{
  ClientMob *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'mobAdult'", nullptr);
    ClientMob::mobAdult(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'mobAdult'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28C064
// address: 0x0028C064   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28C064(_DWORD *a1)
{
  ClientMob *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'enchantEquipment'", nullptr);
    ClientMob::enchantEquipment(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'enchantEquipment'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28C0CC
// address: 0x0028C0CC   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28C0CC(_DWORD *a1)
{
  ClientMob *v3; // r5
  unsigned int Persistance; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getPersistance'", nullptr);
    Persistance = ClientMob::getPersistance(v3);
    tolua_pushboolean(__SPAIR64__(Persistance, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getPersistance'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C140
// address: 0x0028C140   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28C140(_DWORD *a1)
{
  ClientMob *v3; // r5
  unsigned int Infuse; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getInfuse'", nullptr);
    Infuse = ClientMob::getInfuse(v3);
    tolua_pushboolean(__SPAIR64__(Infuse, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getInfuse'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C1B4
// address: 0x0028C1B4   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28C1B4(_DWORD *a1)
{
  ClientMob *v3; // r5
  unsigned int Sheared; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getSheared'", nullptr);
    Sheared = ClientMob::getSheared(v3);
    tolua_pushboolean(__SPAIR64__(Sheared, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getSheared'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C228
// address: 0x0028C228   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28C228(_DWORD *a1)
{
  ClientMob *v3; // r5
  double SpecialFlag; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientMob *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getSpecialFlag'", nullptr);
    SpecialFlag = (double)(int)ClientMob::getSpecialFlag(v3);
    tolua_pushnumber((int)a1, SHIDWORD(SpecialFlag), SLODWORD(SpecialFlag), SHIDWORD(SpecialFlag));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getSpecialFlag'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C2A0
// address: 0x0028C2A0   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28C2A0(_DWORD *a1)
{
  ClientPlayer *v3; // r5
  unsigned int isFlying; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientPlayer", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientPlayer *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isFlying'", nullptr);
    isFlying = ClientPlayer::isFlying(v3);
    tolua_pushboolean(__SPAIR64__(isFlying, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isFlying'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C314
// address: 0x0028C314   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28C314(_DWORD *a1)
{
  ClientPlayer *v3; // r5
  double CurToolID; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientPlayer", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientPlayer *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCurToolID'", nullptr);
    CurToolID = (double)(int)ClientPlayer::getCurToolID(v3);
    tolua_pushnumber((int)a1, SHIDWORD(CurToolID), SLODWORD(CurToolID), SHIDWORD(CurToolID));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCurToolID'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C38C
// address: 0x0028C38C   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28C38C(_DWORD *a1)
{
  ClientPlayer *v3; // r5
  char *Nickname; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientPlayer", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientPlayer *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getNickname'", nullptr);
    Nickname = (char *)ClientPlayer::getNickname(v3);
    tolua_pushstring((int)a1, Nickname);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getNickname'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C400
// address: 0x0028C400   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28C400(_DWORD *a1)
{
  ClientPlayer *v3; // r5
  double Uin; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientPlayer", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientPlayer *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getUin'", nullptr);
    Uin = (double)(int)ClientPlayer::getUin(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Uin), SLODWORD(Uin), SHIDWORD(Uin));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getUin'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C478
// address: 0x0028C478   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28C478(_DWORD *a1)
{
  ClientPlayer *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientPlayer", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientPlayer *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'shortcutItemUsed'", nullptr);
    ClientPlayer::shortcutItemUsed(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'shortcutItemUsed'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28C4E0
// address: 0x0028C4E0   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28C4E0(_DWORD *a1)
{
  ClientPlayer *v3; // r5
  double CurShortcut; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientPlayer", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientPlayer *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCurShortcut'", nullptr);
    CurShortcut = (double)(int)ClientPlayer::getCurShortcut(v3);
    tolua_pushnumber((int)a1, SHIDWORD(CurShortcut), SLODWORD(CurShortcut), SHIDWORD(CurShortcut));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCurShortcut'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C558
// address: 0x0028C558   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28C558(_DWORD *a1)
{
  ClientPlayer *v3; // r5
  int BackPack; // r0
  int v5; // r3
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientPlayer", 0, v6) != 0 && tolua_isnoobj((int)a1, 2, v6) != 0 )
  {
    v3 = (ClientPlayer *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBackPack'", nullptr);
    BackPack = ClientPlayer::getBackPack(v3);
    tolua_pushusertype(a1, BackPack, "BackPack", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBackPack'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28C5D4
// address: 0x0028C5D4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28C5D4(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'kill'", nullptr);
    ClientActor::kill(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'kill'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28C63C
// address: 0x0028C63C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28C63C(_DWORD *a1)
{
  ClientActor *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'jumpOnce'", nullptr);
    ClientActor::jumpOnce(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'jumpOnce'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28C6A4
// address: 0x0028C6A4   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28C6A4(_DWORD *a1)
{
  ClientActor *v3; // r5
  unsigned int isBurning; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (ClientActor *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isBurning'", nullptr);
    isBurning = ClientActor::isBurning(v3);
    tolua_pushboolean(__SPAIR64__(isBurning, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isBurning'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C718
// address: 0x0028C718   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28C718(_DWORD *a1)
{
  PlayerAttrib *v3; // r5
  double Exp; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerAttrib", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (PlayerAttrib *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getExp'", nullptr);
    Exp = (double)PlayerAttrib::getExp(v3);
    tolua_pushnumber((int)a1, SHIDWORD(Exp), SLODWORD(Exp), SHIDWORD(Exp));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getExp'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C790
// address: 0x0028C790   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28C790(_DWORD *a1)
{
  PlayerAttrib *v3; // r5
  double FoodLevel; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerAttrib", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (PlayerAttrib *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFoodLevel'", nullptr);
    FoodLevel = (double)PlayerAttrib::getFoodLevel(v3);
    tolua_pushnumber((int)a1, SHIDWORD(FoodLevel), SLODWORD(FoodLevel), SHIDWORD(FoodLevel));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFoodLevel'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C808
// address: 0x0028C808   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28C808(_DWORD *a1)
{
  LivingAttrib *v3; // r5
  double BuffNum; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuffNum'", nullptr);
    BuffNum = (double)LivingAttrib::getBuffNum(v3);
    tolua_pushnumber((int)a1, SHIDWORD(BuffNum), SLODWORD(BuffNum), SHIDWORD(BuffNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuffNum'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28C880
// address: 0x0028C880   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28C880(_DWORD *a1)
{
  int v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'clearRandomBadBuff'", nullptr);
    LivingAttrib::clearRandomBadBuff(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearRandomBadBuff'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28C8E8
// address: 0x0028C8E8   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28C8E8(_DWORD *a1)
{
  LivingAttrib *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearRandomBuff'", nullptr);
    LivingAttrib::clearRandomBuff(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearRandomBuff'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28C950
// address: 0x0028C950   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28C950(_DWORD *a1)
{
  LivingAttrib *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (LivingAttrib *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearBuff'", nullptr);
    LivingAttrib::clearBuff(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearBuff'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28C9B8
// address: 0x0028C9B8   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28C9B8(_DWORD *a1)
{
  BackPack *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'sortStorageBox'", nullptr);
    BackPack::sortStorageBox(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'sortStorageBox'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CA20
// address: 0x0028CA20   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28CA20(_DWORD *a1)
{
  BackPack *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BackPack", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (BackPack *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'clearPack'", nullptr);
    BackPack::clearPack(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearPack'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CA88
// address: 0x0028CA88   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28CA88(_DWORD *a1)
{
  WorldFurnace *v3; // r5
  double v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldFurnace", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (WorldFurnace *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getMeltTicksPercent'", nullptr);
    v4 = COERCE_FLOAT(WorldFurnace::getMeltTicksPercent(v3));
    tolua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v4), SHIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getMeltTicksPercent'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28CB00
// address: 0x0028CB00   size: 0x6C (108 bytes)
//======================================================================
int __fastcall sub_28CB00(_DWORD *a1)
{
  WorldFurnace *v3; // r5
  double v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldFurnace", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = (WorldFurnace *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getHeatPercent'", nullptr);
    v4 = COERCE_FLOAT(WorldFurnace::getHeatPercent(v3));
    tolua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v4), SHIDWORD(v4));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getHeatPercent'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28CB78
// address: 0x0028CB78   size: 0x46 (70 bytes)
//======================================================================
int __fastcall sub_28CB78(_DWORD *a1)
{
  const char *v2; // r0
  int v4[4]; // [sp+4h] [bp-10h] BYREF

  if ( tolua_isstring(a1, 1, 0, v4) && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (const char *)tolua_tostring(a1, 1, 0);
    DebugString(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'DebugString'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CBC4
// address: 0x0028CBC4   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28CBC4(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postNetChange'", nullptr);
    GameEventQue::postNetChange(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postNetChange'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CC2C
// address: 0x0028CC2C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28CC2C(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postWorldOpenPush'", nullptr);
    GameEventQue::postWorldOpenPush(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postWorldOpenPush'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CC94
// address: 0x0028CC94   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28CC94(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postBuddyFind'", nullptr);
    GameEventQue::postBuddyFind(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postBuddyFind'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CCFC
// address: 0x0028CCFC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28CCFC(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postUpdateBuddyMsg'", nullptr);
    GameEventQue::postUpdateBuddyMsg(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postUpdateBuddyMsg'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CD64
// address: 0x0028CD64   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28CD64(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postWatchBuddySuccess'", nullptr);
    GameEventQue::postWatchBuddySuccess(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postWatchBuddySuccess'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CDCC
// address: 0x0028CDCC   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28CDCC(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postAchievementChange'", nullptr);
    GameEventQue::postAchievementChange(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postAchievementChange'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CE34
// address: 0x0028CE34   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28CE34(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postFurnaceProgress'", nullptr);
    GameEventQue::postFurnaceProgress(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postFurnaceProgress'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CE9C
// address: 0x0028CE9C   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_28CE9C(_DWORD *a1)
{
  GameEventQue *v2; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v2 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'postPlayerAttrChange'", nullptr);
    GameEventQue::postPlayerAttrChange(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'postPlayerAttrChange'.", v4);
  }
  return 0;
}


//======================================================================
// sub_28CF04
// address: 0x0028CF04   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28CF04(_DWORD *a1)
{
  GameEventQue *v3; // r5
  int CurEvent; // r0
  int v5; // r3
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "GameEventQue", 0, v6) != 0 && tolua_isnoobj((int)a1, 2, v6) != 0 )
  {
    v3 = (GameEventQue *)tolua_tousertype(a1, 1, 0);
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCurEvent'", nullptr);
    CurEvent = GameEventQue::getCurEvent(v3);
    tolua_pushusertype(a1, CurEvent, "GameEvent", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCurEvent'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28CF80
// address: 0x0028CF80   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28CF80(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "WorldStorageBox", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAppend'", nullptr);
    tolua_pushusertype(a1, *(_DWORD *)(v3 + 1608), "WorldStorageBox", 1608);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAppend'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28CFF8
// address: 0x0028CFF8   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28CFF8(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ActorAttrib", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getHP'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 8))),
      COERCE_UNSIGNED_INT64(*(float *)(v3 + 8)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 8))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getHP'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28D06C
// address: 0x0028D06C   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28D06C(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ActorAttrib", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getMaxHP'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 12))),
      COERCE_UNSIGNED_INT64(*(float *)(v3 + 12)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 12))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getMaxHP'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28D0E0
// address: 0x0028D0E0   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28D0E0(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ActorAttrib", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getFire'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 16))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 16)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 16))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFire'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28D154
// address: 0x0028D154   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_28D154(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ActorAttrib", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'immuneToFire'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 20);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'immuneToFire'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D1C0
// address: 0x0028D1C0   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28D1C0(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "LivingAttrib", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getOxygen'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 32))),
      COERCE_UNSIGNED_INT64(*(float *)(v3 + 32)),
      HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v3 + 32))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getOxygen'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28D234
// address: 0x0028D234   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28D234(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getTamedOwnerID'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 124))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 124)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 124))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTamedOwnerID'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28D2A8
// address: 0x0028D2A8   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28D2A8(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getTamed'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(_DWORD *)(v3 + 124) != 0;
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTamed'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D318
// address: 0x0028D318   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28D318(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAngry'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 148);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAngry'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D388
// address: 0x0028D388   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28D388(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAge'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 4))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 4)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 4))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAge'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28D3FC
// address: 0x0028D3FC   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28D3FC(_DWORD *a1)
{
  int v3; // r3
  int v4; // r5
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v4 = tolua_tousertype(a1, 1, 0);
    if ( v4 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getBody'", nullptr);
    tolua_pushusertype(a1, *(_DWORD *)(v4 + 64), "ActorBody", v3);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBody'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D470
// address: 0x0028D470   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28D470(_DWORD *a1)
{
  int v3; // r3
  int v4; // r5
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v4 = tolua_tousertype(a1, 1, 0);
    if ( v4 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getVision'", nullptr);
    tolua_pushusertype(a1, *(_DWORD *)(v4 + 72), "ActorVision", v3);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getVision'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D4E4
// address: 0x0028D4E4   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28D4E4(_DWORD *a1)
{
  int v3; // r3
  int v4; // r5
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v4 = tolua_tousertype(a1, 1, 0);
    if ( v4 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getLocoMotion'", nullptr);
    tolua_pushusertype(a1, *(_DWORD *)(v4 + 68), "ActorLocoMotion", v3);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getLocoMotion'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D558
// address: 0x0028D558   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28D558(_DWORD *a1)
{
  int v3; // r3
  int v4; // r5
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v4 = tolua_tousertype(a1, 1, 0);
    if ( v4 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAttrib'", nullptr);
    tolua_pushusertype(a1, *(_DWORD *)(v4 + 76), "ActorAttrib", v3);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAttrib'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D5CC
// address: 0x0028D5CC   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28D5CC(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAvoidWater'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 116);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAvoidWater'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D63C
// address: 0x0028D63C   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28D63C(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAvoidSun'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 123);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAvoidSun'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D6AC
// address: 0x0028D6AC   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28D6AC(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getCanPassOpenWoodenDoors'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 118);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCanPassOpenWoodenDoors'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D71C
// address: 0x0028D71C   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28D71C(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getCanPassClosedWoodenDoors'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 119);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCanPassClosedWoodenDoors'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D78C
// address: 0x0028D78C   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28D78C(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getCanSwimming'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 117);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCanSwimming'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D7FC
// address: 0x0028D7FC   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28D7FC(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getCanFly'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 120);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCanFly'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D86C
// address: 0x0028D86C   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28D86C(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getSitting'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 121);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getSitting'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D8DC
// address: 0x0028D8DC   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28D8DC(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAISitting'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 122);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAISitting'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28D94C
// address: 0x0028D94C   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28D94C(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getHomeDist'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 112))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 112)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 112))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getHomeDist'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28D9C0
// address: 0x0028D9C0   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28D9C0(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getTamedID'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 128))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 128)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 128))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTamedID'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28DA38
// address: 0x0028DA38   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28DA38(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getTraceDist'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 108))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 108)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 108))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTraceDist'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28DAAC
// address: 0x0028DAAC   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28DAAC(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getColor'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 208))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 208)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 208))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getColor'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28DB24
// address: 0x0028DB24   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28DB24(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getTimeSinceIgnited'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 216))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 216)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 216))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTimeSinceIgnited'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28DB9C
// address: 0x0028DB9C   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28DB9C(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getCollarColor'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 204))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 204)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 204))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCollarColor'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28DC14
// address: 0x0028DC14   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28DC14(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAttackActive'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(unsigned __int8 *)(v3 + 188);
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAttackActive'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28DC84
// address: 0x0028DC84   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28DC84(_DWORD *a1)
{
  int v3; // r3
  int v4; // r5
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v4 = tolua_tousertype(a1, 1, 0);
    if ( v4 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getDef'", nullptr);
    tolua_pushusertype(a1, *(_DWORD *)(v4 + 192), "MonsterDef", v3);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getDef'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28DCFC
// address: 0x0028DCFC   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28DCFC(_DWORD *a1)
{
  int v3; // r5
  __int64 v4; // r0
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'isAdult'", nullptr);
    LODWORD(v4) = a1;
    HIDWORD(v4) = *(_DWORD *)(v3 + 196) >= 0;
    tolua_pushboolean(v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isAdult'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28DD70
// address: 0x0028DD70   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28DD70(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getGrowingAge'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 196))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 196)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 196))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getGrowingAge'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28DDE8
// address: 0x0028DDE8   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28DDE8(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getChildAdultID'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 200))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 200)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 200))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getChildAdultID'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28DE60
// address: 0x0028DE60   size: 0x6A (106 bytes)
//======================================================================
int __fastcall sub_28DE60(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getViewMode'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 268))),
      COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 268)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v3 + 268))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getViewMode'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28DED8
// address: 0x0028DED8   size: 0x66 (102 bytes)
//======================================================================
int __fastcall sub_28DED8(_DWORD *a1)
{
  int v3; // r3
  int v4; // r5
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "PlayerControl", 0, v5) != 0 && tolua_isnoobj((int)a1, 2, v5) != 0 )
  {
    v4 = tolua_tousertype(a1, 1, 0);
    if ( v4 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getBlockOperate'", nullptr);
    tolua_pushusertype(a1, *(_DWORD *)(v4 + 264), "BlockOperateMgr", v3);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockOperate'.", v5);
    return 0;
  }
}


//======================================================================
// sub_28DF50
// address: 0x0028DF50   size: 0x68 (104 bytes)
//======================================================================
int __fastcall sub_28DF50(_DWORD *a1)
{
  int v3; // r5
  int v4[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v4) != 0 && tolua_isnoobj((int)a1, 2, v4) != 0 )
  {
    v3 = tolua_tousertype(a1, 1, 0);
    if ( v3 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getCurMapID'", nullptr);
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int16 *)(v3 + 60))),
      COERCE_UNSIGNED_INT64((double)*(unsigned __int16 *)(v3 + 60)),
      HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int16 *)(v3 + 60))));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCurMapID'.", v4);
    return 0;
  }
}


//======================================================================
// sub_28DFC4
// address: 0x0028DFC4   size: 0x14 (20 bytes)
//======================================================================
void *__fastcall sub_28DFC4(_DWORD *a1)
{
  void *result; // r0

  result = (void *)tolua_tostring(a1, 2, 0);
  if ( result == nullptr )
    return &unk_3FB8EA;
  return result;
}


//======================================================================
// sub_28DFDC
// address: 0x0028DFDC   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28DFDC(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldname'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 8, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E054
// address: 0x0028E054   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28E054(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ownernick'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 20, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E0CC
// address: 0x0028E0CC   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28E0CC(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'memo'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 60, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E144
// address: 0x0028E144   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28E144(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ownerCltVer'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 88, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E1BC
// address: 0x0028E1BC   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28E1BC(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'realNickName'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 96, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E234
// address: 0x0028E234   size: 0xAA (170 bytes)
//======================================================================
int __fastcall sub_28E234(_DWORD *a1)
{
  int v2; // r7
  char *v3; // r0
  _BYTE v5[4]; // [sp+Ch] [bp-18h] BYREF
  _BYTE v6[4]; // [sp+10h] [bp-14h] BYREF
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v7) != 0
    && tolua_isstring(a1, 2, 0, v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (char *)sub_28DFC4(a1);
    sub_3BF0BC((int)v5, v3);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'addBuddyChatMsg'", nullptr);
    sub_3BEB1C(v6, v5);
    ClientAccountMgr::addBuddyChatMsg(v2, v6);
    sub_3BDF80(v6);
    sub_3BDF80(v5);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addBuddyChatMsg'.", v7);
  }
  return 0;
}


//======================================================================
// sub_28E2EC
// address: 0x0028E2EC   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28E2EC(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'content'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 4, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E360
// address: 0x0028E360   size: 0x62 (98 bytes)
//======================================================================
int __fastcall sub_28E360(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owname'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 4, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E3D4
// address: 0x0028E3D4   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28E3D4(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owernickname'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 8, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E44C
// address: 0x0028E44C   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28E44C(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'memo'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 28, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E4C4
// address: 0x0028E4C4   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28E4C4(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'msg'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 8, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E53C
// address: 0x0028E53C   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_28E53C(_DWORD *a1)
{
  int v2; // r5
  char *v3; // r0
  _BYTE v5[4]; // [sp+8h] [bp-10h] BYREF
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nickname'", nullptr);
  if ( !tolua_isstring(a1, 2, 0, v6) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v6);
  v3 = (char *)sub_28DFC4(a1);
  sub_3BF0BC((int)v5, v3);
  sub_3BD870(v2 + 8, v5);
  sub_3BDF80(v5);
  return 0;
}


//======================================================================
// sub_28E5B8
// address: 0x0028E5B8   size: 0xC6 (198 bytes)
//======================================================================
int __fastcall sub_28E5B8(_DWORD *a1)
{
  int v2; // r7
  _QWORD *v3; // r4
  int v4; // r3
  int v6[3]; // [sp+8h] [bp-1Ch] BYREF
  __int64 v7; // [sp+14h] [bp-10h] BYREF
  _BYTE v8[8]; // [sp+1Ch] [bp-8h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    tolua_tonumber(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getChatMsg'", nullptr);
    ClientBuddyMgr::getChatMsg((ClientBuddyMgr *)&v7, v2);
    v3 = (_QWORD *)operator new(0xCu);
    *v3 = v7;
    sub_3BEB1C(v3 + 1, v8);
    tolua_pushusertype_and_takeownership(a1, (int)v3, "BuddyChatMsg", v4);
    sub_3BDF80(v8);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getChatMsg'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28E6B4
// address: 0x0028E6B4   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_28E6B4(_DWORD *a1)
{
  BuddyWorldDesc *v1; // r0
  BuddyWorldDesc *v2; // r4

  v1 = (BuddyWorldDesc *)tolua_tousertype(a1, 1, 0);
  v2 = v1;
  if ( v1 != nullptr )
  {
    BuddyWorldDesc::~BuddyWorldDesc(v1);
    operator delete(v2);
  }
  return 0;
}


//======================================================================
// sub_28E6FE
// address: 0x0028E6FE   size: 0x1C (28 bytes)
//======================================================================
int __fastcall sub_28E6FE(_DWORD *a1)
{
  WorldDesc *v1; // r0
  WorldDesc *v2; // r4

  v1 = (WorldDesc *)tolua_tousertype(a1, 1, 0);
  v2 = v1;
  if ( v1 != nullptr )
  {
    WorldDesc::~WorldDesc(v1);
    operator delete(v2);
  }
  return 0;
}


//======================================================================
// sub_28E7F8
// address: 0x0028E7F8   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall sub_28E7F8(_DWORD *a1)
{
  int v2; // r6
  WorldDesc *v3; // r6
  int v4; // r3
  int v6[3]; // [sp+10h] [bp-CCh] BYREF
  _BYTE v7[184]; // [sp+1Ch] [bp-C0h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    tolua_tonumber(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAttentionWorldDesc'", nullptr);
    ClientAccountMgr::getAttentionWorldDesc((ClientAccountMgr *)v7, v2);
    v3 = (WorldDesc *)operator new(0xB8u);
    WorldDesc::WorldDesc(v3, (const WorldDesc *)v7);
    tolua_pushusertype_and_takeownership(a1, (int)v3, "WorldDesc", v4);
    WorldDesc::~WorldDesc((WorldDesc *)v7);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAttentionWorldDesc'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28E8F0
// address: 0x0028E8F0   size: 0xD2 (210 bytes)
//======================================================================
int __fastcall sub_28E8F0(_DWORD *a1)
{
  int v2; // r6
  WorldDesc *v3; // r6
  int v4; // r3
  int v6[3]; // [sp+10h] [bp-CCh] BYREF
  _BYTE v7[184]; // [sp+1Ch] [bp-C0h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientAccountMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    tolua_tonumber(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getWarchOwDesc'", nullptr);
    ClientAccountMgr::getWarchOwDesc((ClientAccountMgr *)v7, v2);
    v3 = (WorldDesc *)operator new(0xB8u);
    WorldDesc::WorldDesc(v3, (const WorldDesc *)v7);
    tolua_pushusertype_and_takeownership(a1, (int)v3, "WorldDesc", v4);
    WorldDesc::~WorldDesc((WorldDesc *)v7);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getWarchOwDesc'.", v6);
    return 0;
  }
}


//======================================================================
// sub_28EA48
// address: 0x0028EA48   size: 0xBA (186 bytes)
//======================================================================
int __fastcall sub_28EA48(_DWORD *a1)
{
  int v2; // r7
  BuddyWorldDesc *v3; // r5
  int v4; // r3
  int v6[3]; // [sp+Ch] [bp-38h] BYREF
  _BYTE v7[44]; // [sp+18h] [bp-2Ch] BYREF

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    tolua_tonumber(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getWorldDesc'", nullptr);
    BuddyInfo::getWorldDesc((BuddyInfo *)v7, v2);
    v3 = (BuddyWorldDesc *)operator new(0x28u);
    BuddyWorldDesc::BuddyWorldDesc(v3, (const BuddyWorldDesc *)v7);
    tolua_pushusertype_and_takeownership(a1, (int)v3, "BuddyWorldDesc", v4);
    BuddyWorldDesc::~BuddyWorldDesc((BuddyWorldDesc *)v7);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getWorldDesc'.", v6);
    return 0;
  }
}

