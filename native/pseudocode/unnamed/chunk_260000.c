// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_260000

//======================================================================
// sub_26179C
// address: 0x0026179C   size: 0x36 (54 bytes)
//======================================================================
void __fastcall sub_26179C(int a1)
{
  GLenum v1; // r0
  GLenum v2; // r1

  if ( a1 == 4 )
  {
    j_glEnable(0xBE2u);
    v1 = 1;
    v2 = 1;
  }
  else
  {
    if ( a1 == 5 )
    {
      j_glEnable(0xBE2u);
      v1 = 0;
    }
    else
    {
      if ( a1 != 6 )
        return;
      j_glEnable(0xBE2u);
      v1 = 774;
    }
    v2 = 768;
  }
  j_glBlendFunc(v1, v2);
}


//======================================================================
// sub_2617DC
// address: 0x002617DC   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_2617DC(Ogre::FixedString *a1, Ogre::FixedString *a2, _QWORD *a3, _QWORD *a4)
{
  return Ogre::MaterialManager::getCompiledVSPS(Ogre::Singleton<Ogre::MaterialManager>::ms_Singleton, a1, a2, a3, a4);
}


//======================================================================
// sub_2643A8
// address: 0x002643A8   size: 0x42 (66 bytes)
//======================================================================
int __fastcall sub_2643A8(int *a1, _DWORD *a2, int a3, int a4)
{
  int result; // r0
  int v6; // r2

  result = a3 - 1;
  switch ( a3 )
  {
    case 1:
      *a1 = 0;
      goto LABEL_9;
    case 2:
      *a1 = 1;
      a4 *= 2;
      goto LABEL_9;
    case 3:
      *a1 = 3;
      ++a4;
      goto LABEL_9;
    case 4:
      *a1 = 4;
      a4 *= 3;
      goto LABEL_9;
    case 5:
      v6 = 5;
      goto LABEL_8;
    case 6:
      v6 = 6;
LABEL_8:
      *a1 = v6;
      a4 += 2;
LABEL_9:
      *a2 = a4;
      break;
    default:
      return result;
  }
  return result;
}


//======================================================================
// sub_26603C
// address: 0x0026603C   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_26603C(World *a1, const WCoord *a2, int a3)
{
  int BlockID; // r1
  int result; // r0
  int v8; // r0
  int v9; // r3
  int Material; // r0

  BlockID = World::getBlockID(a1, a2);
  if ( BlockID == RedStoneDustMaterial::BLOCK_ID )
    return 1;
  result = 0;
  if ( BlockID != 0 )
  {
    if ( BlockID == RepeaterMaterial::ACTIVE_ID || BlockID == RepeaterMaterial::IDLE_ID )
    {
      v8 = World::getBlockData(a1, a2) & 3;
      if ( a3 != v8 )
      {
        v9 = v8 + 1;
        if ( (v8 & 1) != 0 )
          v9 = v8 - 1;
        return a3 == v9;
      }
    }
    else
    {
      Material = BlockMaterialMgr::getMaterial(
                   (BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton,
                   BlockID);
      result = (*(int (__fastcall **)(int))(*(_DWORD *)Material + 68))(Material);
      if ( result == 0 )
        return result;
      if ( a3 == -1 )
        return 0;
    }
    return 1;
  }
  return result;
}


//======================================================================
// sub_2660E4
// address: 0x002660E4   size: 0x3C (60 bytes)
//======================================================================
bool __fastcall sub_2660E4(World *a1, const WCoord *a2, int a3)
{
  int v6; // r4

  v6 = sub_26603C(a1, a2, a3);
  if ( v6 == 0 && World::getBlockID(a1, a2) == RepeaterMaterial::ACTIVE_ID )
    return (World::getBlockData(a1, a2) & 3) == a3;
  return v6;
}


//======================================================================
// sub_266204
// address: 0x00266204   size: 0xCC (204 bytes)
//======================================================================
int __fastcall sub_266204(int a1, int *a2, int a3)
{
  World *v4; // r6
  int isBlockNormalCube; // r0
  int v6; // r3
  int v7; // r0
  int v9[3]; // [sp+4h] [bp+0h] BYREF
  _DWORD v10[3]; // [sp+10h] [bp+Ch] BYREF
  _DWORD v11[4]; // [sp+1Ch] [bp+18h] BYREF

  v4 = *(World **)(*(_DWORD *)(a1 + 4) + 1432);
  operator+(v9, a2, (int *)(a1 + 8));
  operator+(v10, v9, &g_DirectionCoord[3 * a3]);
  if ( sub_26603C(v4, (const WCoord *)v10, a3) != 0 )
    return 1;
  if ( World::isBlockNormalCube(v4, (const WCoord *)v10) == 0 )
  {
    v11[1] = v10[1] - 1;
    v11[0] = v10[0];
    v11[2] = v10[2];
    if ( sub_26603C(v4, (const WCoord *)v11, -1) != 0 )
      return 1;
  }
  v11[1] = v9[1] + 1;
  v11[2] = v9[2];
  v11[0] = v9[0];
  isBlockNormalCube = World::isBlockNormalCube(v4, (const WCoord *)v11);
  v6 = 0;
  if ( isBlockNormalCube == 0 )
  {
    if ( World::isBlockNormalCube(v4, (const WCoord *)v10) == 0 )
      return 0;
    v11[0] = v10[0];
    v11[2] = v10[2];
    v11[1] = v10[1] + 1;
    v7 = sub_26603C(v4, (const WCoord *)v11, -1);
    v6 = 2;
    if ( v7 == 0 )
      return 0;
  }
  return v6;
}


//======================================================================
// sub_26BFB0
// address: 0x0026BFB0   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_26BFB0(_DWORD *a1)
{
  void *v1; // r0

  v1 = (void *)tolua_tousertype(a1, 1, 0);
  operator delete(v1);
  return 0;
}


//======================================================================
// sub_26BFC2
// address: 0x0026BFC2   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_26BFC2(_DWORD *a1)
{
  void *v1; // r0

  v1 = (void *)tolua_tousertype(a1, 1, 0);
  operator delete(v1);
  return 0;
}


//======================================================================
// sub_26BFD4
// address: 0x0026BFD4   size: 0x12 (18 bytes)
//======================================================================
int __fastcall sub_26BFD4(_DWORD *a1)
{
  void *v1; // r0

  v1 = (void *)tolua_tousertype(a1, 1, 0);
  operator delete(v1);
  return 0;
}


//======================================================================
// sub_26BFE6
// address: 0x0026BFE6   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_26BFE6(_DWORD *a1)
{
  int v1; // r0
  void *v2; // r4

  v1 = tolua_tousertype(a1, 1, 0);
  v2 = (void *)v1;
  if ( v1 != 0 )
  {
    sub_3BDF80(v1 + 8);
    operator delete(v2);
  }
  return 0;
}


//======================================================================
// sub_26C004
// address: 0x0026C004   size: 0x5E (94 bytes)
//======================================================================
int __fastcall sub_26C004(_DWORD *a1)
{
  int v2; // r5
  _WORD *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'HandMineDrops'", nullptr);
  if ( tolua_isusertype(a1, 2, "DropItemDef", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (_WORD *)tolua_tousertype(a1, 2, 0);
  *(_WORD *)(v2 + 92) = *v3;
  *(_WORD *)(v2 + 94) = v3[1];
  return 0;
}


//======================================================================
// sub_26C070
// address: 0x0026C070   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_26C070(_DWORD *a1)
{
  int v2; // r5
  const void *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'createdata'", nullptr);
  if ( tolua_isusertype(a1, 2, "WorldCreateData", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (const void *)tolua_tousertype(a1, 2, 0);
  j_memcpy((void *)(v2 + 104), v3, 0x50u);
  return 0;
}


//======================================================================
// sub_26C0D8
// address: 0x0026C0D8   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_26C0D8(_DWORD *a1)
{
  int v2; // r5
  const void *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'body'", nullptr);
  if ( tolua_isusertype(a1, 2, "GameEventBody", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (const void *)tolua_tousertype(a1, 2, 0);
  j_memcpy((void *)(v2 + 4), v3, 0x124u);
  return 0;
}


//======================================================================
// sub_26C140
// address: 0x0026C140   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C140(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'attentionresult'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEAttentionOWWatchResult", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_DWORD *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C1A0
// address: 0x0026C1A0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C1A0(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'owresult'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEOWWatchResult", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_DWORD *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C200
// address: 0x0026C200   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_26C200(_DWORD *a1)
{
  void *v2; // r5
  const void *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (void *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'dialogue'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEGameDialogue", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (const void *)tolua_tousertype(a1, 2, 0);
  j_memcpy(v2, v3, 0x80u);
  return 0;
}


//======================================================================
// sub_26C268
// address: 0x0026C268   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C268(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'mission'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEMissionComplete", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_DWORD *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C2C8
// address: 0x0026C2C8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_26C2C8(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'bossstate'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEUpdateBossState", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (_DWORD *)tolua_tousertype(a1, 2, 0);
  *v2 = *v3;
  v2[1] = v3[1];
  return 0;
}


//======================================================================
// sub_26C32C
// address: 0x0026C32C   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C32C(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'enterworld'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEEnterLeaveWorld", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_DWORD *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C38C
// address: 0x0026C38C   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_26C38C(_DWORD *a1)
{
  void *v2; // r5
  const void *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (void *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'infotips'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEInfoTips", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (const void *)tolua_tousertype(a1, 2, 0);
  j_memcpy(v2, v3, 0x80u);
  return 0;
}


//======================================================================
// sub_26C3F4
// address: 0x0026C3F4   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C3F4(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'downloadWorld'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEDownloadWorld", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_DWORD *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C454
// address: 0x0026C454   size: 0x60 (96 bytes)
//======================================================================
int __fastcall sub_26C454(_DWORD *a1)
{
  _DWORD *v2; // r4
  _DWORD *v3; // r0
  int v4; // r5
  int v5; // r6
  _DWORD *v6; // r3
  int v7; // r2
  int v8; // r4
  int v9; // r6
  int v11[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'minimap'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEMinimapData", 0, v11) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v11);
  v3 = (_DWORD *)tolua_tousertype(a1, 2, 0);
  v4 = v3[1];
  v5 = v3[2];
  *v2 = *v3;
  v2[1] = v4;
  v2[2] = v5;
  v6 = v2 + 3;
  v7 = v3[4];
  v8 = v3[5];
  *v6 = v3[3];
  v6[1] = v7;
  v6[2] = v8;
  v6 += 3;
  v9 = v3[7];
  *v6 = v3[6];
  v6[1] = v9;
  return 0;
}


//======================================================================
// sub_26C4C0
// address: 0x0026C4C0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C4C0(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'netAnomaly'", nullptr);
  if ( tolua_isusertype(a1, 2, "GENetAnomaly", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_DWORD *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C520
// address: 0x0026C520   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C520(_DWORD *a1)
{
  _BYTE *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_BYTE *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uiHide'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEUIHide", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_BYTE *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C580
// address: 0x0026C580   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_26C580(_DWORD *a1)
{
  void *v2; // r5
  const void *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (void *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'addBuddy'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEAddBuddy", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (const void *)tolua_tousertype(a1, 2, 0);
  j_memcpy(v2, v3, 0x40u);
  return 0;
}


//======================================================================
// sub_26C5E8
// address: 0x0026C5E8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_26C5E8(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'achievementReward'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEAchievementReward", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (_DWORD *)tolua_tousertype(a1, 2, 0);
  *v2 = *v3;
  v2[1] = v3[1];
  return 0;
}


//======================================================================
// sub_26C64C
// address: 0x0026C64C   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_26C64C(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'loadprogress'", nullptr);
  if ( tolua_isusertype(a1, 2, "GELoadProgress", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (_DWORD *)tolua_tousertype(a1, 2, 0);
  *v2 = *v3;
  v2[1] = v3[1];
  return 0;
}


//======================================================================
// sub_26C6B0
// address: 0x0026C6B0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C6B0(_DWORD *a1)
{
  _BYTE *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_BYTE *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'entergame'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEEnterGame", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_BYTE *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C710
// address: 0x0026C710   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C710(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'buddychat'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEBuddyChat", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_DWORD *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C770
// address: 0x0026C770   size: 0x5C (92 bytes)
//======================================================================
int __fastcall sub_26C770(_DWORD *a1)
{
  void *v2; // r5
  const void *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (void *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'chat'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEChatData", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (const void *)tolua_tousertype(a1, 2, 0);
  j_memcpy(v2, v3, 0x124u);
  return 0;
}


//======================================================================
// sub_26C7D8
// address: 0x0026C7D8   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_26C7D8(_DWORD *a1)
{
  void *v2; // r5
  const void *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (void *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'addbuddy'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEAddBuddyNotify", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (const void *)tolua_tousertype(a1, 2, 0);
  j_memcpy(v2, v3, 0x48u);
  return 0;
}


//======================================================================
// sub_26C840
// address: 0x0026C840   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_26C840(_DWORD *a1)
{
  _DWORD *v2; // r5
  _DWORD *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldlist'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEWorldListChange", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (_DWORD *)tolua_tousertype(a1, 2, 0);
  *v2 = *v3;
  v2[1] = v3[1];
  return 0;
}


//======================================================================
// sub_26C8A4
// address: 0x0026C8A4   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C8A4(_DWORD *a1)
{
  _BYTE *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_BYTE *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'oxygen'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEShowOxygen", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_BYTE *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C904
// address: 0x0026C904   size: 0x4E (78 bytes)
//======================================================================
int __fastcall sub_26C904(_DWORD *a1)
{
  int v3[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_tousertype(a1, 1, 0) == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'attrchange'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEPlayerAttrChange", 0, v3) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v3);
  tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C960
// address: 0x0026C960   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C960(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'shortcut'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEShortcutSelected", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_DWORD *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26C9C0
// address: 0x0026C9C0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_26C9C0(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v4[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'backpack'", nullptr);
  if ( tolua_isusertype(a1, 2, "GEBackpackChange", 0, v4) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v4);
  *v2 = *(_DWORD *)tolua_tousertype(a1, 2, 0);
  return 0;
}


//======================================================================
// sub_26CA20
// address: 0x0026CA20   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CA20(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'arryNum'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26CA54
// address: 0x0026CA54   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CA54(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'rewardState'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26CA88
// address: 0x0026CA88   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CA88(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'achievementState'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26CABC
// address: 0x0026CABC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CABC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'num'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26CAF0
// address: 0x0026CAF0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CAF0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'id'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26CB24
// address: 0x0026CB24   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CB24(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'goal'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26CB58
// address: 0x0026CB58   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26CB58(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Point'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 624))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 624)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 624))));
  return 1;
}


//======================================================================
// sub_26CB90
// address: 0x0026CB90   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26CB90(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GoalNum'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 596))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 596)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 596))));
  return 1;
}


//======================================================================
// sub_26CBC8
// address: 0x0026CBC8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26CBC8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GoalId'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 592))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 592)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 592))));
  return 1;
}


//======================================================================
// sub_26CC00
// address: 0x0026CC00   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26CC00(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Goal'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 588))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 588)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 588))));
  return 1;
}


//======================================================================
// sub_26CC38
// address: 0x0026CC38   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26CC38(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 584))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 584)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 584))));
  return 1;
}


//======================================================================
// sub_26CC70
// address: 0x0026CC70   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26CC70(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Group'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 576))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 576)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 576))));
  return 1;
}


//======================================================================
// sub_26CCA8
// address: 0x0026CCA8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CCA8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GridY'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))));
  return 1;
}


//======================================================================
// sub_26CCDC
// address: 0x0026CCDC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CCDC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GridX'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))));
  return 1;
}


//======================================================================
// sub_26CD10
// address: 0x0026CD10   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CD10(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'IconID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))));
  return 1;
}


//======================================================================
// sub_26CD44
// address: 0x0026CD44   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CD44(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26CD78
// address: 0x0026CD78   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CD78(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ExpOdds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 48))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 48)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 48))));
  return 1;
}


//======================================================================
// sub_26CDAC
// address: 0x0026CDAC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CDAC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Exp'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44))));
  return 1;
}


//======================================================================
// sub_26CDE0
// address: 0x0026CDE0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CDE0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Result'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40))));
  return 1;
}


//======================================================================
// sub_26CE14
// address: 0x0026CE14   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CE14(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Heat'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))));
  return 1;
}


//======================================================================
// sub_26CE48
// address: 0x0026CE48   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CE48(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26CE7C
// address: 0x0026CE7C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CE7C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Cost'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))));
  return 1;
}


//======================================================================
// sub_26CEB0
// address: 0x0026CEB0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CEB0(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'StuffType'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26CEE4
// address: 0x0026CEE4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26CEE4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Weight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 320))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 320)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 320))));
  return 1;
}


//======================================================================
// sub_26CF1C
// address: 0x0026CF1C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CF1C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ConflictID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60))));
  return 1;
}


//======================================================================
// sub_26CF50
// address: 0x0026CF50   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CF50(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TargetType'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))));
  return 1;
}


//======================================================================
// sub_26CF84
// address: 0x0026CF84   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CF84(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackType'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))));
  return 1;
}


//======================================================================
// sub_26CFB8
// address: 0x0026CFB8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CFB8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnchantLevel'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40))));
  return 1;
}


//======================================================================
// sub_26CFEC
// address: 0x0026CFEC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26CFEC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnchantType'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))));
  return 1;
}


//======================================================================
// sub_26D020
// address: 0x0026D020   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D020(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26D054
// address: 0x0026D054   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D054(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'NumAttr'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 344))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 344)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 344))));
  return 1;
}


//======================================================================
// sub_26D08C
// address: 0x0026D08C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D08C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SoundType'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 340))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 340)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 340))));
  return 1;
}


//======================================================================
// sub_26D0C4
// address: 0x0026D0C4   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D0C4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 336))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 336)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 336))));
  return 1;
}


//======================================================================
// sub_26D0FC
// address: 0x0026D0FC   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D0FC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UpdatePeriod'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 332))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 332)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 332))));
  return 1;
}


//======================================================================
// sub_26D134
// address: 0x0026D134   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D134(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EffectTicks'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 328))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 328)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 328))));
  return 1;
}


//======================================================================
// sub_26D16C
// address: 0x0026D16C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D16C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Level'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 324))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 324)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 324))));
  return 1;
}


//======================================================================
// sub_26D1A4
// address: 0x0026D1A4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D1A4(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26D1D8
// address: 0x0026D1D8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D1D8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ClearBuff'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72))));
  return 1;
}


//======================================================================
// sub_26D20C
// address: 0x0026D20C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D20C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'RandomBuff'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))));
  return 1;
}


//======================================================================
// sub_26D240
// address: 0x0026D240   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D240(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EffectRadius'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64))));
  return 1;
}


//======================================================================
// sub_26D274
// address: 0x0026D274   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D274(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseMethod'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60))));
  return 1;
}


//======================================================================
// sub_26D2A8
// address: 0x0026D2A8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D2A8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Container'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))));
  return 1;
}


//======================================================================
// sub_26D2DC
// address: 0x0026D2DC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D2DC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'HealAmount'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))));
  return 1;
}


//======================================================================
// sub_26D310
// address: 0x0026D310   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D310(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AddFoodSat'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 12))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26D344
// address: 0x0026D344   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D344(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AddFood'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 8))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26D378
// address: 0x0026D378   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D378(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseTime'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26D3AC
// address: 0x0026D3AC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26D3AC(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26D3E0
// address: 0x0026D3E0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D3E0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'FeedOdds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 284))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 284)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 284))));
  return 1;
}


//======================================================================
// sub_26D418
// address: 0x0026D418   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D418(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'FeedItem'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 280))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 280)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 280))));
  return 1;
}


//======================================================================
// sub_26D450
// address: 0x0026D450   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D450(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DropExpOdds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 276))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 276)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 276))));
  return 1;
}


//======================================================================
// sub_26D488
// address: 0x0026D488   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D488(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DropExp'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 272))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 272)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 272))));
  return 1;
}


//======================================================================
// sub_26D4C0
// address: 0x0026D4C0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D4C0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BurnDropItemOdds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 268))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 268)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 268))));
  return 1;
}


//======================================================================
// sub_26D4F8
// address: 0x0026D4F8   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D4F8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BurnDropItem'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 264))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 264)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 264))));
  return 1;
}


//======================================================================
// sub_26D530
// address: 0x0026D530   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D530(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EquipOdds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 220))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 220)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 220))));
  return 1;
}


//======================================================================
// sub_26D568
// address: 0x0026D568   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D568(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EquipGroup'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 216))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 216)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 216))));
  return 1;
}


//======================================================================
// sub_26D5A0
// address: 0x0026D5A0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D5A0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PickItemOdds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 212))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 212)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 212))));
  return 1;
}


//======================================================================
// sub_26D5D8
// address: 0x0026D5D8   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D5D8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PackNum'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 208))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 208)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 208))));
  return 1;
}


//======================================================================
// sub_26D610
// address: 0x0026D610   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D610(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SpawnMaxHeight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 204))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 204)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 204))));
  return 1;
}


//======================================================================
// sub_26D648
// address: 0x0026D648   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D648(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SpawnMinHeight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 200))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 200)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 200))));
  return 1;
}


//======================================================================
// sub_26D680
// address: 0x0026D680   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D680(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SpawnSunLight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 196))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 196)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 196))));
  return 1;
}


//======================================================================
// sub_26D6B8
// address: 0x0026D6B8   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D6B8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SpawnMaxLight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 192))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 192)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 192))));
  return 1;
}


//======================================================================
// sub_26D6F0
// address: 0x0026D6F0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D6F0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Speed'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 188))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 188)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 188))));
  return 1;
}


//======================================================================
// sub_26D728
// address: 0x0026D728   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D728(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Thickness'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 184))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 184)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 184))));
  return 1;
}


//======================================================================
// sub_26D760
// address: 0x0026D760   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D760(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackDistance'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 180))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 180)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 180))));
  return 1;
}


//======================================================================
// sub_26D798
// address: 0x0026D798   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D798(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ViewDistance'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 176))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 176)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 176))));
  return 1;
}


//======================================================================
// sub_26D7D0
// address: 0x0026D7D0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D7D0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Width'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 172))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 172)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 172))));
  return 1;
}


//======================================================================
// sub_26D808
// address: 0x0026D808   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26D808(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Height'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 168))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 168)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 168))));
  return 1;
}


//======================================================================
// sub_26D840
// address: 0x0026D840   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26D840(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackWither'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 164))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 164)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 164))));
  return 1;
}


//======================================================================
// sub_26D878
// address: 0x0026D878   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26D878(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackPoison'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 162))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 162)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 162))));
  return 1;
}


//======================================================================
// sub_26D8B0
// address: 0x0026D8B0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26D8B0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackFire'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 160))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 160)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 160))));
  return 1;
}


//======================================================================
// sub_26D8E8
// address: 0x0026D8E8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26D8E8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Attack'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 158))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 158)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 158))));
  return 1;
}


//======================================================================
// sub_26D920
// address: 0x0026D920   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26D920(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackType'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 156))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 156)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 156))));
  return 1;
}


//======================================================================
// sub_26D958
// address: 0x0026D958   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26D958(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ArmorExplode'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 154))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 154)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 154))));
  return 1;
}


//======================================================================
// sub_26D990
// address: 0x0026D990   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26D990(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ArmorRange'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 152))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 152)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 152))));
  return 1;
}


//======================================================================
// sub_26D9C8
// address: 0x0026D9C8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26D9C8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ArmorPunch'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 150))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 150)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 150))));
  return 1;
}


//======================================================================
// sub_26DA00
// address: 0x0026DA00   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26DA00(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Life'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 148))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 148)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 148))));
  return 1;
}


//======================================================================
// sub_26DA38
// address: 0x0026DA38   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DA38(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TickPeriod'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 112))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 112)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 112))));
  return 1;
}


//======================================================================
// sub_26DA6C
// address: 0x0026DA6C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DA6C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChildAge'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 108))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 108)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 108))));
  return 1;
}


//======================================================================
// sub_26DAA0
// address: 0x0026DAA0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DAA0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 104))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 104)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 104))));
  return 1;
}


//======================================================================
// sub_26DAD4
// address: 0x0026DAD4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DAD4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ModelScale'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 100))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 100)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 100))));
  return 1;
}


//======================================================================
// sub_26DB08
// address: 0x0026DB08   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DB08(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26DB3C
// address: 0x0026DB3C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DB3C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GridY'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32))));
  return 1;
}


//======================================================================
// sub_26DB70
// address: 0x0026DB70   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DB70(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GridX'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))));
  return 1;
}


//======================================================================
// sub_26DBA4
// address: 0x0026DBA4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DBA4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MoneyID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))));
  return 1;
}


//======================================================================
// sub_26DBD8
// address: 0x0026DBD8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DBD8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MoneyCount'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))));
  return 1;
}


//======================================================================
// sub_26DC0C
// address: 0x0026DC0C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DC0C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseExp'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))));
  return 1;
}


//======================================================================
// sub_26DC40
// address: 0x0026DC40   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DC40(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ResultCount'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26DC74
// address: 0x0026DC74   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DC74(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ResultID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26DCA8
// address: 0x0026DCA8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DCA8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26DCDC
// address: 0x0026DCDC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DCDC(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26DD10
// address: 0x0026DD10   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DD10(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'RepairExp'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72))));
  return 1;
}


//======================================================================
// sub_26DD44
// address: 0x0026DD44   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DD44(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AtkDuration'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))));
  return 1;
}


//======================================================================
// sub_26DD78
// address: 0x0026DD78   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DD78(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CollectDuration'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64))));
  return 1;
}


//======================================================================
// sub_26DDAC
// address: 0x0026DDAC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DDAC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Duration'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60))));
  return 1;
}


//======================================================================
// sub_26DDE0
// address: 0x0026DDE0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26DDE0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Attack'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 50))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 50)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 50))));
  return 1;
}


//======================================================================
// sub_26DE18
// address: 0x0026DE18   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26DE18(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackType'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 48))),
    COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 48)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(__int16 *)(v2 + 48))));
  return 1;
}


//======================================================================
// sub_26DE50
// address: 0x0026DE50   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DE50(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Efficiency'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44))));
  return 1;
}


//======================================================================
// sub_26DE84
// address: 0x0026DE84   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DE84(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Level'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40))));
  return 1;
}


//======================================================================
// sub_26DEB8
// address: 0x0026DEB8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DEB8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))));
  return 1;
}


//======================================================================
// sub_26DEEC
// address: 0x0026DEEC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26DEEC(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26DF20
// address: 0x0026DF20   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26DF20(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnchantAfterID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 464))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 464)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 464))));
  return 1;
}


//======================================================================
// sub_26DF58
// address: 0x0026DF58   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26DF58(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'StuffType'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 460))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 460)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 460))));
  return 1;
}


//======================================================================
// sub_26DF90
// address: 0x0026DF90   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26DF90(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnchantTag'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 456))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 456)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 456))));
  return 1;
}


//======================================================================
// sub_26DFC8
// address: 0x0026DFC8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26DFC8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ItemGroup'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 452))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 452)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 452))));
  return 1;
}


//======================================================================
// sub_26E000
// address: 0x0026E000   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26E000(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Range'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 448))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 448)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 448))));
  return 1;
}


//======================================================================
// sub_26E038
// address: 0x0026E038   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26E038(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Usable'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 444))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 444)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 444))));
  return 1;
}


//======================================================================
// sub_26E070
// address: 0x0026E070   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26E070(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'StackMax'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 440))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 440)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 440))));
  return 1;
}


//======================================================================
// sub_26E0A8
// address: 0x0026E0A8   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26E0A8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WieldPeriod'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 436))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 436)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 436))));
  return 1;
}


//======================================================================
// sub_26E0E0
// address: 0x0026E0E0   size: 0x34 (52 bytes)
//======================================================================
int __fastcall sub_26E0E0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WieldScale'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 432))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 432)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 432))));
  return 1;
}


//======================================================================
// sub_26E118
// address: 0x0026E118   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E118(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SortId'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26E14C
// address: 0x0026E14C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E14C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CreateType'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26E180
// address: 0x0026E180   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E180(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26E1B4
// address: 0x0026E1B4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E1B4(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26E1E8
// address: 0x0026E1E8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E1E8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MiniColor'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 112))),
    COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 112)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 112))));
  return 1;
}


//======================================================================
// sub_26E21C
// address: 0x0026E21C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E21C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MineTool'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 108))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 108)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 108))));
  return 1;
}


//======================================================================
// sub_26E250
// address: 0x0026E250   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E250(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DropExpOdds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 104))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 104)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 104))));
  return 1;
}


//======================================================================
// sub_26E284
// address: 0x0026E284   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E284(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DropExp'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 100))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 100)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 100))));
  return 1;
}


//======================================================================
// sub_26E2B8
// address: 0x0026E2B8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E2B8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PreciseDrop'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 96))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 96)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 96))));
  return 1;
}


//======================================================================
// sub_26E2EC
// address: 0x0026E2EC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E2EC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TickPeriod'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 80))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 80)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 80))));
  return 1;
}


//======================================================================
// sub_26E320
// address: 0x0026E320   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E320(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Height'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 76))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 76)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 76))));
  return 1;
}


//======================================================================
// sub_26E354
// address: 0x0026E354   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E354(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseNeighborLight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72))));
  return 1;
}


//======================================================================
// sub_26E388
// address: 0x0026E388   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E388(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'LightSrc'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))));
  return 1;
}


//======================================================================
// sub_26E3BC
// address: 0x0026E3BC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E3BC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'LightAtten'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64))));
  return 1;
}


//======================================================================
// sub_26E3F0
// address: 0x0026E3F0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E3F0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CoverNeighbor'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 60))));
  return 1;
}


//======================================================================
// sub_26E424
// address: 0x0026E424   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E424(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PowerState'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))));
  return 1;
}


//======================================================================
// sub_26E458
// address: 0x0026E458   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E458(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CatchFire'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))));
  return 1;
}


//======================================================================
// sub_26E48C
// address: 0x0026E48C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E48C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BurnSpeed'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 48))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 48)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 48))));
  return 1;
}


//======================================================================
// sub_26E4C0
// address: 0x0026E4C0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E4C0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Reborn'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44))));
  return 1;
}


//======================================================================
// sub_26E4F4
// address: 0x0026E4F4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E4F4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Slipperiness'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 40))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 40)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 40))));
  return 1;
}


//======================================================================
// sub_26E528
// address: 0x0026E528   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E528(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Hardness'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 36))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 36)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 36))));
  return 1;
}


//======================================================================
// sub_26E55C
// address: 0x0026E55C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E55C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AntiExplode'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32))));
  return 1;
}


//======================================================================
// sub_26E590
// address: 0x0026E590   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E590(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Replaceable'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))));
  return 1;
}


//======================================================================
// sub_26E5C4
// address: 0x0026E5C4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E5C4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GravityEffect'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))));
  return 1;
}


//======================================================================
// sub_26E5F8
// address: 0x0026E5F8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E5F8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PushFlag'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))));
  return 1;
}


//======================================================================
// sub_26E62C
// address: 0x0026E62C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E62C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BlockFlow'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))));
  return 1;
}


//======================================================================
// sub_26E660
// address: 0x0026E660   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E660(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MoveCollide'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26E694
// address: 0x0026E694   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E694(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ClickCollide'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26E6C8
// address: 0x0026E6C8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E6C8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PlaceDir'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26E6FC
// address: 0x0026E6FC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E6FC(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26E730
// address: 0x0026E730   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E730(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'odds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int16 *)(v2 + 2))),
    COERCE_UNSIGNED_INT64((double)*(unsigned __int16 *)(v2 + 2)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int16 *)(v2 + 2))));
  return 1;
}


//======================================================================
// sub_26E764
// address: 0x0026E764   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E764(_DWORD *a1)
{
  unsigned __int16 *v2; // r5

  v2 = (unsigned __int16 *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'item'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26E798
// address: 0x0026E798   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E798(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ReplaceBlock'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))));
  return 1;
}


//======================================================================
// sub_26E7CC
// address: 0x0026E7CC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E7CC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MaxVeinBlocks'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32))));
  return 1;
}


//======================================================================
// sub_26E800
// address: 0x0026E800   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E800(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TryGenCount'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))));
  return 1;
}


//======================================================================
// sub_26E834
// address: 0x0026E834   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E834(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Odds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))));
  return 1;
}


//======================================================================
// sub_26E868
// address: 0x0026E868   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E868(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GenMethod'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))));
  return 1;
}


//======================================================================
// sub_26E89C
// address: 0x0026E89C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E89C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MaxFalloff'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))));
  return 1;
}


//======================================================================
// sub_26E8D0
// address: 0x0026E8D0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E8D0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MinFalloff'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26E904
// address: 0x0026E904   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E904(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MaxHeight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26E938
// address: 0x0026E938   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E938(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MinHeight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26E96C
// address: 0x0026E96C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26E96C(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26E9A0
// address: 0x0026E9A0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26E9A0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BigMushroom'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 348))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 348)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 348))));
  return 1;
}


//======================================================================
// sub_26E9D8
// address: 0x0026E9D8   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26E9D8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Mushroom'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 344))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 344)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 344))));
  return 1;
}


//======================================================================
// sub_26EA10
// address: 0x0026EA10   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EA10(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Cactus'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 340))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 340)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 340))));
  return 1;
}


//======================================================================
// sub_26EA48
// address: 0x0026EA48   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EA48(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Reeds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 336))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 336)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 336))));
  return 1;
}


//======================================================================
// sub_26EA80
// address: 0x0026EA80   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EA80(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DeadBush'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 332))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 332)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 332))));
  return 1;
}


//======================================================================
// sub_26EAB8
// address: 0x0026EAB8   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EAB8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Watermelon'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 328))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 328)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 328))));
  return 1;
}


//======================================================================
// sub_26EAF0
// address: 0x0026EAF0   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EAF0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Pumpkin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 324))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 324)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 324))));
  return 1;
}


//======================================================================
// sub_26EB28
// address: 0x0026EB28   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EB28(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'Trees'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26EB5C
// address: 0x0026EB5C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EB5C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkBigMushroom'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 160))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 160)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 160))));
  return 1;
}


//======================================================================
// sub_26EB94
// address: 0x0026EB94   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EB94(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkMushroom'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 156))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 156)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 156))));
  return 1;
}


//======================================================================
// sub_26EBCC
// address: 0x0026EBCC   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EBCC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkCactus'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 152))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 152)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 152))));
  return 1;
}


//======================================================================
// sub_26EC04
// address: 0x0026EC04   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EC04(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkReeds'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 148))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 148)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 148))));
  return 1;
}


//======================================================================
// sub_26EC3C
// address: 0x0026EC3C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EC3C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkDeadBush'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 144))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 144)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 144))));
  return 1;
}


//======================================================================
// sub_26EC74
// address: 0x0026EC74   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26EC74(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkWatermelon'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 140))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 140)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 140))));
  return 1;
}


//======================================================================
// sub_26ECAC
// address: 0x0026ECAC   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26ECAC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkPumpkin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 136))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 136)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 136))));
  return 1;
}


//======================================================================
// sub_26ECE4
// address: 0x0026ECE4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26ECE4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkTrees'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))));
  return 1;
}


//======================================================================
// sub_26ED18
// address: 0x0026ED18   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26ED18(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WaterColor'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 60))),
    COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 60)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 60))));
  return 1;
}


//======================================================================
// sub_26ED4C
// address: 0x0026ED4C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26ED4C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TopBlock'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))));
  return 1;
}


//======================================================================
// sub_26ED80
// address: 0x0026ED80   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26ED80(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'FillBlock'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))));
  return 1;
}


//======================================================================
// sub_26EDB4
// address: 0x0026EDB4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EDB4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Humid'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 48))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 48)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 48))));
  return 1;
}


//======================================================================
// sub_26EDE8
// address: 0x0026EDE8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EDE8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Heat'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 44))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 44)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 44))));
  return 1;
}


//======================================================================
// sub_26EE1C
// address: 0x0026EE1C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EE1C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MaxHeight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 40))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 40)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 40))));
  return 1;
}


//======================================================================
// sub_26EE50
// address: 0x0026EE50   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EE50(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MinHeight'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 36))),
    COERCE_UNSIGNED_INT64(*(float *)(v2 + 36)),
    HIDWORD(COERCE_UNSIGNED_INT64(*(float *)(v2 + 36))));
  return 1;
}


//======================================================================
// sub_26EE84
// address: 0x0026EE84   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EE84(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26EEB8
// address: 0x0026EEB8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EEB8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_worldnum'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))));
  return 1;
}


//======================================================================
// sub_26EEEC
// address: 0x0026EEEC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EEEC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_achievementscore'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))));
  return 1;
}


//======================================================================
// sub_26EF20
// address: 0x0026EF20   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EF20(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_credit'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))));
  return 1;
}


//======================================================================
// sub_26EF54
// address: 0x0026EF54   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EF54(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_flower'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))));
  return 1;
}


//======================================================================
// sub_26EF88
// address: 0x0026EF88   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EF88(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_diamond'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))));
  return 1;
}


//======================================================================
// sub_26EFBC
// address: 0x0026EFBC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EFBC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_viplevel'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26EFF0
// address: 0x0026EFF0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26EFF0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_model'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F024
// address: 0x0026F024   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F024(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_uin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F058
// address: 0x0026F058   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F058(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'model'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F08C
// address: 0x0026F08C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F08C(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F0C0
// address: 0x0026F0C0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F0C0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owid'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F0F4
// address: 0x0026F0F4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F0F4(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F128
// address: 0x0026F128   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F128(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'num'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F15C
// address: 0x0026F15C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F15C(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F190
// address: 0x0026F190   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F190(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'time'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F1C4
// address: 0x0026F1C4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F1C4(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F1F8
// address: 0x0026F1F8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F1F8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'shareVersion'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))));
  return 1;
}


//======================================================================
// sub_26F22C
// address: 0x0026F22C   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26F22C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'lastLoginmodel'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 32))),
    COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 32)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 32))));
  return 1;
}


//======================================================================
// sub_26F264
// address: 0x0026F264   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F264(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'open'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))));
  return 1;
}


//======================================================================
// sub_26F298
// address: 0x0026F298   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F298(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owtype'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int16 *)(v2 + 20))),
    COERCE_UNSIGNED_INT64((double)*(unsigned __int16 *)(v2 + 20)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int16 *)(v2 + 20))));
  return 1;
}


//======================================================================
// sub_26F2CC
// address: 0x0026F2CC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F2CC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'credit'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))));
  return 1;
}


//======================================================================
// sub_26F300
// address: 0x0026F300   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F300(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'lastlogin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26F334
// address: 0x0026F334   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F334(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'owid'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F368
// address: 0x0026F368   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F368(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'finishnum'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F39C
// address: 0x0026F39C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F39C(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'num'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F3D0
// address: 0x0026F3D0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F3D0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'state'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F404
// address: 0x0026F404   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F404(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'id'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F438
// address: 0x0026F438   size: 0x32 (50 bytes)
//======================================================================
int __fastcall sub_26F438(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'realModel'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 100))),
    COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 100)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 100))));
  return 1;
}


//======================================================================
// sub_26F470
// address: 0x0026F470   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F470(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'fileSize'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 92))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 92)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 92))));
  return 1;
}


//======================================================================
// sub_26F4A4
// address: 0x0026F4A4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F4A4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'downloadNum'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 84))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 84)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 84))));
  return 1;
}


//======================================================================
// sub_26F4D8
// address: 0x0026F4D8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F4D8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'flag'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 80))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 80)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 80))));
  return 1;
}


//======================================================================
// sub_26F50C
// address: 0x0026F50C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F50C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'active'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 76))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 76)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 76))));
  return 1;
}


//======================================================================
// sub_26F540
// address: 0x0026F540   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F540(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'shareVersion'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 72))));
  return 1;
}


//======================================================================
// sub_26F574
// address: 0x0026F574   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F574(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'openpushprocess'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 68))));
  return 1;
}


//======================================================================
// sub_26F5A8
// address: 0x0026F5A8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F5A8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'openpushtype'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 64))));
  return 1;
}


//======================================================================
// sub_26F5DC
// address: 0x0026F5DC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F5DC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'maxplayers'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 56))));
  return 1;
}


//======================================================================
// sub_26F610
// address: 0x0026F610   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F610(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'curplayers'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 52))));
  return 1;
}


//======================================================================
// sub_26F644
// address: 0x0026F644   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F644(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'otherpermits'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 48))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 48)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 48))));
  return 1;
}


//======================================================================
// sub_26F678
// address: 0x0026F678   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F678(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'normalpermits'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 44))));
  return 1;
}


//======================================================================
// sub_26F6AC
// address: 0x0026F6AC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F6AC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'closepermits'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 40))));
  return 1;
}


//======================================================================
// sub_26F6E0
// address: 0x0026F6E0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F6E0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'open'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 36))));
  return 1;
}


//======================================================================
// sub_26F714
// address: 0x0026F714   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F714(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'credit'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 32))));
  return 1;
}


//======================================================================
// sub_26F748
// address: 0x0026F748   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F748(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'createtime'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 28))),
    COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 28)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 28))));
  return 1;
}


//======================================================================
// sub_26F77C
// address: 0x0026F77C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F77C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'logintime'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 24))),
    COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 24)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 24))));
  return 1;
}


//======================================================================
// sub_26F7B0
// address: 0x0026F7B0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F7B0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'realowneruin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))));
  return 1;
}


//======================================================================
// sub_26F7E4
// address: 0x0026F7E4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F7E4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owneruin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26F818
// address: 0x0026F818   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F818(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldtype'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F84C
// address: 0x0026F84C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F84C(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldid'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F880
// address: 0x0026F880   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F880(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'rolemodel'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned __int8 *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26F8B4
// address: 0x0026F8B4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F8B4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'randseed2'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 8))),
    COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26F8E8
// address: 0x0026F8E8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F8E8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'randseed1'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(unsigned int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F91C
// address: 0x0026F91C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F91C(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'terrtype'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26F950
// address: 0x0026F950   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F950(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_LiveTicks'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F984
// address: 0x0026F984   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F984(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ticks'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26F9B8
// address: 0x0026F9B8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F9B8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'bufflv'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26F9EC
// address: 0x0026F9EC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26F9EC(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'buffid'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FA20
// address: 0x0026FA20   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FA20(_DWORD *a1)
{
  unsigned int *v2; // r5

  v2 = (unsigned int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'getype'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FA54
// address: 0x0026FA54   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FA54(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'result'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FA88
// address: 0x0026FA88   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FA88(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'result'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FABC
// address: 0x0026FABC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FABC(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'id'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FAF0
// address: 0x0026FAF0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FAF0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'hp'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26FB24
// address: 0x0026FB24   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FB24(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'id'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FB58
// address: 0x0026FB58   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FB58(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'mapid'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FB8C
// address: 0x0026FB8C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FB8C(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldid'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FBC0
// address: 0x0026FBC0   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FBC0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'bossy'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 28))));
  return 1;
}


//======================================================================
// sub_26FBF4
// address: 0x0026FBF4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FBF4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'bossx'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 24))));
  return 1;
}


//======================================================================
// sub_26FC28
// address: 0x0026FC28   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FC28(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'deady'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 20))));
  return 1;
}


//======================================================================
// sub_26FC5C
// address: 0x0026FC5C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FC5C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'deadx'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 16))));
  return 1;
}


//======================================================================
// sub_26FC90
// address: 0x0026FC90   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FC90(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'spawny'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 12))));
  return 1;
}


//======================================================================
// sub_26FCC4
// address: 0x0026FCC4   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FCC4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'spawnx'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 8))));
  return 1;
}


//======================================================================
// sub_26FCF8
// address: 0x0026FCF8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FCF8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'posy'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26FD2C
// address: 0x0026FD2C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FD2C(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'posx'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FD60
// address: 0x0026FD60   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FD60(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'type'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FD94
// address: 0x0026FD94   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FD94(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'achievementid'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26FDC8
// address: 0x0026FDC8   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FDC8(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'type'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FDFC
// address: 0x0026FDFC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FDFC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'progress'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26FE30
// address: 0x0026FE30   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FE30(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'content'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FE64
// address: 0x0026FE64   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FE64(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FE98
// address: 0x0026FE98   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FE98(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'chattype'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FECC
// address: 0x0026FECC   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FECC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'result'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26FF00
// address: 0x0026FF00   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FF00(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FF34
// address: 0x0026FF34   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FF34(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'openchangetype'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))),
    COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4)),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*(int *)(v2 + 4))));
  return 1;
}


//======================================================================
// sub_26FF68
// address: 0x0026FF68   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FF68(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'selectgrid'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FF9C
// address: 0x0026FF9C   size: 0x30 (48 bytes)
//======================================================================
int __fastcall sub_26FF9C(_DWORD *a1)
{
  int *v2; // r5

  v2 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'grid_index'", nullptr);
  tolua_pushnumber(
    (int)a1,
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)),
    COERCE_UNSIGNED_INT64((double)*v2),
    HIDWORD(COERCE_UNSIGNED_INT64((double)*v2)));
  return 1;
}


//======================================================================
// sub_26FFD0
// address: 0x0026FFD0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_26FFD0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'arryNum'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 12) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}

