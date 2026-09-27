// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_270000

//======================================================================
// sub_270038
// address: 0x00270038   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270038(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'rewardState'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 8) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2700A0
// address: 0x002700A0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2700A0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'achievementState'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270108
// address: 0x00270108   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270108(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'num'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 8) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270170
// address: 0x00270170   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270170(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'id'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2701D8
// address: 0x002701D8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2701D8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'goal'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270240
// address: 0x00270240   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_270240(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Point'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 624) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2702A8
// address: 0x002702A8   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_2702A8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GoalNum'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 596) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270310
// address: 0x00270310   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_270310(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GoalId'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 592) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270378
// address: 0x00270378   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_270378(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Goal'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 588) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2703E0
// address: 0x002703E0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_2703E0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 584) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270448
// address: 0x00270448   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_270448(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Group'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 576) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2704B0
// address: 0x002704B0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2704B0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GridY'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 28) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270518
// address: 0x00270518   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270518(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GridX'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 24) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270580
// address: 0x00270580   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270580(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'IconID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 20) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2705E8
// address: 0x002705E8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2705E8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270650
// address: 0x00270650   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270650(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ExpOdds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 48) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2706B8
// address: 0x002706B8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2706B8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Exp'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 44) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270720
// address: 0x00270720   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270720(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Result'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 40) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270788
// address: 0x00270788   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270788(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Heat'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 36) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2707F0
// address: 0x002707F0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2707F0(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270858
// address: 0x00270858   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270858(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Cost'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 36) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2708C0
// address: 0x002708C0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2708C0(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'StuffType'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270928
// address: 0x00270928   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_270928(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Weight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 320) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270990
// address: 0x00270990   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270990(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ConflictID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 60) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2709F8
// address: 0x002709F8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2709F8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TargetType'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 56) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270A60
// address: 0x00270A60   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270A60(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackType'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 52) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270AC8
// address: 0x00270AC8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270AC8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnchantLevel'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 40) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270B30
// address: 0x00270B30   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270B30(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnchantType'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 36) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270B98
// address: 0x00270B98   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270B98(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270C00
// address: 0x00270C00   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_270C00(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'NumAttr'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 344) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270C68
// address: 0x00270C68   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_270C68(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SoundType'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 340) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270CD0
// address: 0x00270CD0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_270CD0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 336) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270D38
// address: 0x00270D38   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_270D38(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UpdatePeriod'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 332) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270DA0
// address: 0x00270DA0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_270DA0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EffectTicks'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 328) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270E08
// address: 0x00270E08   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_270E08(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Level'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 324) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270E70
// address: 0x00270E70   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270E70(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270ED8
// address: 0x00270ED8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270ED8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ClearBuff'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 72) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270F40
// address: 0x00270F40   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270F40(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'RandomBuff'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 68) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_270FA8
// address: 0x00270FA8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_270FA8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EffectRadius'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 64) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271010
// address: 0x00271010   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_271010(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseMethod'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 60) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271078
// address: 0x00271078   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_271078(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Container'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 56) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2710E0
// address: 0x002710E0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2710E0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'HealAmount'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 16) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271148
// address: 0x00271148   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_271148(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AddFoodSat'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 12) = v6;
  return 0;
}


//======================================================================
// sub_2711B0
// address: 0x002711B0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2711B0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AddFood'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 8) = v6;
  return 0;
}


//======================================================================
// sub_271218
// address: 0x00271218   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_271218(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseTime'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271280
// address: 0x00271280   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_271280(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2712E8
// address: 0x002712E8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2712E8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'FeedOdds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 284) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271350
// address: 0x00271350   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271350(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'FeedItem'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 280) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2713B8
// address: 0x002713B8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2713B8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DropExpOdds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 276) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271420
// address: 0x00271420   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271420(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DropExp'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 272) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271488
// address: 0x00271488   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271488(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BurnDropItemOdds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 268) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2714F0
// address: 0x002714F0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2714F0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BurnDropItem'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 264) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271558
// address: 0x00271558   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271558(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EquipOdds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 220) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2715C0
// address: 0x002715C0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2715C0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EquipGroup'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 216) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271628
// address: 0x00271628   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271628(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PickItemOdds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 212) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271690
// address: 0x00271690   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271690(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PackNum'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 208) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2716F8
// address: 0x002716F8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2716F8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SpawnMaxHeight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 204) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271760
// address: 0x00271760   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271760(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SpawnMinHeight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 200) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2717C8
// address: 0x002717C8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2717C8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SpawnSunLight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 196) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271830
// address: 0x00271830   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271830(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SpawnMaxLight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 192) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271898
// address: 0x00271898   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271898(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Speed'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 188) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271900
// address: 0x00271900   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271900(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Thickness'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 184) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271968
// address: 0x00271968   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271968(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackDistance'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 180) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2719D0
// address: 0x002719D0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2719D0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ViewDistance'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 176) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271A38
// address: 0x00271A38   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271A38(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Width'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 172) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271AA0
// address: 0x00271AA0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271AA0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Height'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 168) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271B08
// address: 0x00271B08   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271B08(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackWither'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 164) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271B70
// address: 0x00271B70   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271B70(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackPoison'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 162) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271BD8
// address: 0x00271BD8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271BD8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackFire'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 160) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271C40
// address: 0x00271C40   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271C40(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Attack'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 158) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271CA8
// address: 0x00271CA8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271CA8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackType'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 156) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271D10
// address: 0x00271D10   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271D10(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ArmorExplode'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 154) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271D78
// address: 0x00271D78   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271D78(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ArmorRange'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 152) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271DE0
// address: 0x00271DE0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271DE0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ArmorPunch'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 150) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271E48
// address: 0x00271E48   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_271E48(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Life'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 148) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271EB0
// address: 0x00271EB0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_271EB0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TickPeriod'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 112) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271F18
// address: 0x00271F18   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_271F18(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChildAge'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 108) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271F80
// address: 0x00271F80   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_271F80(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 104) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_271FE8
// address: 0x00271FE8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_271FE8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ModelScale'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 100) = v6;
  return 0;
}


//======================================================================
// sub_272050
// address: 0x00272050   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272050(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2720B8
// address: 0x002720B8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2720B8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GridY'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 32) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272120
// address: 0x00272120   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272120(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GridX'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 28) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272188
// address: 0x00272188   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272188(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MoneyID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 24) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2721F0
// address: 0x002721F0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2721F0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MoneyCount'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 20) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272258
// address: 0x00272258   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272258(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseExp'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 16) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2722C0
// address: 0x002722C0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2722C0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ResultCount'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 12) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272328
// address: 0x00272328   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272328(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ResultID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 8) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272390
// address: 0x00272390   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272390(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2723F8
// address: 0x002723F8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2723F8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272460
// address: 0x00272460   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272460(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'RepairExp'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 72) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2724C8
// address: 0x002724C8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2724C8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AtkDuration'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 68) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272530
// address: 0x00272530   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272530(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CollectDuration'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 64) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272598
// address: 0x00272598   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272598(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Duration'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 60) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272600
// address: 0x00272600   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272600(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Attack'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 50) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272668
// address: 0x00272668   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272668(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttackType'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 48) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2726D0
// address: 0x002726D0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2726D0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Efficiency'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 44) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272738
// address: 0x00272738   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272738(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Level'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 40) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2727A0
// address: 0x002727A0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2727A0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 36) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272808
// address: 0x00272808   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272808(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272870
// address: 0x00272870   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_272870(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnchantAfterID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 464) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2728D8
// address: 0x002728D8   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_2728D8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'StuffType'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 460) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272940
// address: 0x00272940   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_272940(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnchantTag'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 456) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2729A8
// address: 0x002729A8   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_2729A8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ItemGroup'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 452) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272A10
// address: 0x00272A10   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_272A10(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Range'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 448) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272A78
// address: 0x00272A78   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_272A78(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Usable'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 444) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272AE0
// address: 0x00272AE0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_272AE0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'StackMax'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 440) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272B48
// address: 0x00272B48   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_272B48(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WieldPeriod'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 436) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272BB0
// address: 0x00272BB0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_272BB0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WieldScale'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 432) = v6;
  return 0;
}


//======================================================================
// sub_272C18
// address: 0x00272C18   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272C18(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SortId'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 12) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272C80
// address: 0x00272C80   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272C80(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CreateType'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 8) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272CE8
// address: 0x00272CE8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272CE8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272D50
// address: 0x00272D50   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272D50(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272DB8
// address: 0x00272DB8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272DB8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MiniColor'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 112) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272E20
// address: 0x00272E20   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272E20(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MineTool'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 108) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272E88
// address: 0x00272E88   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272E88(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DropExpOdds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 104) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272EF0
// address: 0x00272EF0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272EF0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DropExp'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 100) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272F58
// address: 0x00272F58   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272F58(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PreciseDrop'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 96) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_272FC0
// address: 0x00272FC0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_272FC0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TickPeriod'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 80) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273028
// address: 0x00273028   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273028(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Height'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 76) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273090
// address: 0x00273090   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273090(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseNeighborLight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 72) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2730F8
// address: 0x002730F8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2730F8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'LightSrc'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 68) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273160
// address: 0x00273160   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273160(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'LightAtten'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 64) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2731C8
// address: 0x002731C8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2731C8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CoverNeighbor'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 60) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273230
// address: 0x00273230   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273230(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PowerState'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 56) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273298
// address: 0x00273298   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273298(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CatchFire'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 52) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273300
// address: 0x00273300   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273300(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BurnSpeed'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 48) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273368
// address: 0x00273368   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273368(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Reborn'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 44) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2733D0
// address: 0x002733D0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2733D0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Slipperiness'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 40) = v6;
  return 0;
}


//======================================================================
// sub_273438
// address: 0x00273438   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273438(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Hardness'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 36) = v6;
  return 0;
}


//======================================================================
// sub_2734A0
// address: 0x002734A0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2734A0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AntiExplode'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 32) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273508
// address: 0x00273508   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273508(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Replaceable'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 28) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273570
// address: 0x00273570   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273570(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GravityEffect'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 24) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2735D8
// address: 0x002735D8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2735D8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PushFlag'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 20) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273640
// address: 0x00273640   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273640(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BlockFlow'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 16) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2736A8
// address: 0x002736A8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2736A8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MoveCollide'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 12) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273710
// address: 0x00273710   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273710(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ClickCollide'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 8) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273778
// address: 0x00273778   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273778(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PlaceDir'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2737E0
// address: 0x002737E0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2737E0(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273848
// address: 0x00273848   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273848(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'odds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 2) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2738B0
// address: 0x002738B0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2738B0(_DWORD *a1, int a2, int a3, int a4)
{
  _WORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_WORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'item'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273918
// address: 0x00273918   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273918(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ReplaceBlock'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 36) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273980
// address: 0x00273980   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273980(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MaxVeinBlocks'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 32) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2739E8
// address: 0x002739E8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2739E8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TryGenCount'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 28) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273A50
// address: 0x00273A50   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273A50(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Odds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 24) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273AB8
// address: 0x00273AB8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273AB8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'GenMethod'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 20) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273B20
// address: 0x00273B20   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273B20(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MaxFalloff'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 16) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273B88
// address: 0x00273B88   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273B88(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MinFalloff'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 12) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273BF0
// address: 0x00273BF0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273BF0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MaxHeight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 8) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273C58
// address: 0x00273C58   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273C58(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MinHeight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273CC0
// address: 0x00273CC0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_273CC0(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273D28
// address: 0x00273D28   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_273D28(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'BigMushroom'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 348) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273D90
// address: 0x00273D90   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_273D90(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Mushroom'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 344) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273DF8
// address: 0x00273DF8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_273DF8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Cactus'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 340) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273E60
// address: 0x00273E60   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_273E60(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Reeds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 336) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273EC8
// address: 0x00273EC8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_273EC8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DeadBush'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 332) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273F30
// address: 0x00273F30   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_273F30(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Watermelon'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 328) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_273F98
// address: 0x00273F98   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_273F98(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Pumpkin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 324) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274000
// address: 0x00274000   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274000(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'Trees'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274068
// address: 0x00274068   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_274068(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkBigMushroom'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 160) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2740D0
// address: 0x002740D0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2740D0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkMushroom'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 156) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274138
// address: 0x00274138   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_274138(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkCactus'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 152) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2741A0
// address: 0x002741A0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2741A0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkReeds'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 148) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274208
// address: 0x00274208   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_274208(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkDeadBush'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 144) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274270
// address: 0x00274270   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_274270(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkWatermelon'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 140) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2742D8
// address: 0x002742D8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2742D8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkPumpkin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 136) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274340
// address: 0x00274340   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274340(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ChunkTrees'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 68) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2743A8
// address: 0x002743A8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2743A8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WaterColor'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 60) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274410
// address: 0x00274410   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274410(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TopBlock'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 56) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274478
// address: 0x00274478   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274478(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'FillBlock'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 52) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2744E0
// address: 0x002744E0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2744E0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Humid'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 48) = v6;
  return 0;
}


//======================================================================
// sub_274548
// address: 0x00274548   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274548(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Heat'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 44) = v6;
  return 0;
}


//======================================================================
// sub_2745B0
// address: 0x002745B0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2745B0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MaxHeight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 40) = v6;
  return 0;
}


//======================================================================
// sub_274618
// address: 0x00274618   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274618(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  float v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'MinHeight'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  *(float *)(v5 + 36) = v6;
  return 0;
}


//======================================================================
// sub_274680
// address: 0x00274680   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274680(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'ID'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2746E8
// address: 0x002746E8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2746E8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_worldnum'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 52) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274750
// address: 0x00274750   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274750(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_achievementscore'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 28) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2747B8
// address: 0x002747B8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2747B8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_credit'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 24) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274820
// address: 0x00274820   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274820(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_flower'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 20) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274888
// address: 0x00274888   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274888(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_diamond'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 16) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2748F0
// address: 0x002748F0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2748F0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_viplevel'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 12) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274958
// address: 0x00274958   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274958(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_model'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 4) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2749C0
// address: 0x002749C0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2749C0(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_uin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274A28
// address: 0x00274A28   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274A28(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'model'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274A90
// address: 0x00274A90   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274A90(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274AF8
// address: 0x00274AF8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274AF8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owid'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274B60
// address: 0x00274B60   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274B60(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274BC8
// address: 0x00274BC8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274BC8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'num'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274C30
// address: 0x00274C30   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274C30(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274C98
// address: 0x00274C98   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274C98(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'time'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274D00
// address: 0x00274D00   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274D00(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274D68
// address: 0x00274D68   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274D68(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'shareVersion'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 36) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274DD0
// address: 0x00274DD0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_274DD0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'lastLoginmodel'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 32) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274E38
// address: 0x00274E38   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274E38(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'open'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 24) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274EA0
// address: 0x00274EA0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274EA0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owtype'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_WORD *)(v5 + 20) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274F08
// address: 0x00274F08   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274F08(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'credit'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 16) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274F70
// address: 0x00274F70   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274F70(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'lastlogin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 12) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_274FD8
// address: 0x00274FD8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_274FD8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'owid'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275040
// address: 0x00275040   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275040(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'finishnum'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2750A8
// address: 0x002750A8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2750A8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'num'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275110
// address: 0x00275110   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275110(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'state'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275178
// address: 0x00275178   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275178(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'id'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2751E0
// address: 0x002751E0   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_2751E0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r6
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'realModel'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 100) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275248
// address: 0x00275248   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275248(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'fileSize'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 92) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2752B0
// address: 0x002752B0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2752B0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'downloadNum'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 84) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275318
// address: 0x00275318   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275318(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'flag'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 80) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275380
// address: 0x00275380   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275380(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'active'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 76) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2753E8
// address: 0x002753E8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2753E8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'shareVersion'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 72) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275450
// address: 0x00275450   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275450(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'openpushprocess'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 68) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2754B8
// address: 0x002754B8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2754B8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'openpushtype'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 64) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275520
// address: 0x00275520   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275520(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'maxplayers'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 56) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275588
// address: 0x00275588   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275588(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'curplayers'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 52) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2755F0
// address: 0x002755F0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2755F0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'otherpermits'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 48) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275658
// address: 0x00275658   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275658(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'normalpermits'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 44) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2756C0
// address: 0x002756C0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2756C0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'closepermits'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 40) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275728
// address: 0x00275728   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275728(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'open'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 36) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275790
// address: 0x00275790   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275790(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'credit'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 32) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2757F8
// address: 0x002757F8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2757F8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'createtime'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 28) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275860
// address: 0x00275860   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275860(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'logintime'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 24) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2758C8
// address: 0x002758C8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2758C8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'realowneruin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 16) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275930
// address: 0x00275930   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275930(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owneruin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 12) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275998
// address: 0x00275998   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275998(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldtype'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275A00
// address: 0x00275A00   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275A00(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldid'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275A68
// address: 0x00275A68   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275A68(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'rolemodel'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 12) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275AD0
// address: 0x00275AD0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275AD0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'randseed2'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 8) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275B38
// address: 0x00275B38   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275B38(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'randseed1'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275BA0
// address: 0x00275BA0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275BA0(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'terrtype'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275C08
// address: 0x00275C08   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275C08(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_LiveTicks'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275C70
// address: 0x00275C70   size: 0x84 (132 bytes)
//======================================================================
int __fastcall sub_275C70(_DWORD *a1)
{
  int v2; // r7
  float v3; // r0
  float v4; // r4
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ActorAttrib", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = v3;
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'addHP'", nullptr);
    (*(void (__fastcall **)(int, float))(*(_DWORD *)v2 + 36))(v2, COERCE_FLOAT(LODWORD(v4)));
  }
  else
  {
    tolua_error(a1, "#ferror in function 'addHP'.", v6);
  }
  return 0;
}


//======================================================================
// sub_275D10
// address: 0x00275D10   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275D10(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ticks'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 8) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275D78
// address: 0x00275D78   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275D78(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'bufflv'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275DE0
// address: 0x00275DE0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275DE0(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'buffid'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275E48
// address: 0x00275E48   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275E48(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'getype'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275EB0
// address: 0x00275EB0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275EB0(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'result'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275F18
// address: 0x00275F18   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275F18(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'result'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275F80
// address: 0x00275F80   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275F80(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'id'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_275FE8
// address: 0x00275FE8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_275FE8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'hp'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276050
// address: 0x00276050   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276050(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'id'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2760B8
// address: 0x002760B8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2760B8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'mapid'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276120
// address: 0x00276120   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276120(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldid'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276188
// address: 0x00276188   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276188(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'bossy'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 28) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2761F0
// address: 0x002761F0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2761F0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'bossx'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 24) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276258
// address: 0x00276258   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276258(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'deady'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 20) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2762C0
// address: 0x002762C0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2762C0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'deadx'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 16) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276328
// address: 0x00276328   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276328(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'spawny'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 12) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276390
// address: 0x00276390   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276390(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'spawnx'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 8) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2763F8
// address: 0x002763F8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2763F8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'posy'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276460
// address: 0x00276460   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276460(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'posx'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2764C8
// address: 0x002764C8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2764C8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'type'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276530
// address: 0x00276530   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276530(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'achievementid'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276598
// address: 0x00276598   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276598(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'type'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276600
// address: 0x00276600   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276600(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'progress'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276668
// address: 0x00276668   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276668(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'content'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2766D0
// address: 0x002766D0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2766D0(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276738
// address: 0x00276738   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276738(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'chattype'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2767A0
// address: 0x002767A0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2767A0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'result'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276808
// address: 0x00276808   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276808(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'uin'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276870
// address: 0x00276870   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276870(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'openchangetype'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_DWORD *)(v5 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2768D8
// address: 0x002768D8   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2768D8(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'selectgrid'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_276940
// address: 0x00276940   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_276940(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (_DWORD *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'grid_index'", nullptr);
  if ( !tolua_isnumber(a1, 2, 0, (int)v7) )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  return 0;
}


//======================================================================
// sub_2769A8
// address: 0x002769A8   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_2769A8(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setPathHide'", nullptr);
    *(_DWORD *)(v2 + 156) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setPathHide'.", v5);
  }
  return 0;
}


//======================================================================
// sub_276A40
// address: 0x00276A40   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_276A40(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setHomeDist'", nullptr);
    *(_DWORD *)(v2 + 112) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setHomeDist'.", v5);
  }
  return 0;
}


//======================================================================
// sub_276AD8
// address: 0x00276AD8   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_276AD8(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setTamedID'", nullptr);
    *(_DWORD *)(v2 + 128) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setTamedID'.", v5);
  }
  return 0;
}


//======================================================================
// sub_276B70
// address: 0x00276B70   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_276B70(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setTraceDist'", nullptr);
    *(_DWORD *)(v2 + 108) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setTraceDist'.", v5);
  }
  return 0;
}


//======================================================================
// sub_276C08
// address: 0x00276C08   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_276C08(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setTimeSinceIgnited'", nullptr);
    *(_DWORD *)(v2 + 216) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setTimeSinceIgnited'.", v5);
  }
  return 0;
}


//======================================================================
// sub_276CA0
// address: 0x00276CA0   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_276CA0(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setGrowingAge'", nullptr);
    *(_DWORD *)(v2 + 196) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setGrowingAge'.", v5);
  }
  return 0;
}


//======================================================================
// sub_276D38
// address: 0x00276D38   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_276D38(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setChildAdultID'", nullptr);
    *(_DWORD *)(v2 + 200) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setChildAdultID'.", v5);
  }
  return 0;
}


//======================================================================
// sub_276DD0
// address: 0x00276DD0   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_276DD0(_DWORD *a1)
{
  int v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setLanguage'", nullptr);
    *(_DWORD *)(v2 + 327228) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setLanguage'.", v5);
  }
  return 0;
}


//======================================================================
// sub_276E68
// address: 0x00276E68   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_276E68(_DWORD *a1)
{
  AchievementManager *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCurTrackID'", nullptr);
    AchievementManager::setCurTrackID(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCurTrackID'.", v5);
  }
  return 0;
}


//======================================================================
// sub_276F08
// address: 0x00276F08   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_276F08(_DWORD *a1)
{
  AchievementManager *v2; // r5
  int v3; // r6
  int v4; // r7
  double TotalGameStatistics; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 1, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getTotalGameStatistics'", nullptr);
    TotalGameStatistics = (double)(int)AchievementManager::getTotalGameStatistics(v2, v3, v4);
    tolua_pushnumber(
      (int)a1,
      SHIDWORD(TotalGameStatistics),
      SLODWORD(TotalGameStatistics),
      SHIDWORD(TotalGameStatistics));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getTotalGameStatistics'.", v7);
    return 0;
  }
}


//======================================================================
// sub_276FD8
// address: 0x00276FD8   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_276FD8(_DWORD *a1)
{
  AchievementManager *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 1, (int)v7)
    && tolua_isnumber(a1, 4, 1, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0x3FF0000000000000LL));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setTotalGameStatistics'", nullptr);
    AchievementManager::setTotalGameStatistics(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setTotalGameStatistics'.", v7);
  }
  return 0;
}


//======================================================================
// sub_2770C8
// address: 0x002770C8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_2770C8(_DWORD *a1)
{
  AchievementManager *v2; // r5
  int v3; // r6
  double AchievementRewardState; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementRewardState'", nullptr);
    AchievementRewardState = (double)(int)AchievementManager::getAchievementRewardState(v2, v3);
    tolua_pushnumber(
      (int)a1,
      SHIDWORD(AchievementRewardState),
      SLODWORD(AchievementRewardState),
      SHIDWORD(AchievementRewardState));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementRewardState'.", v6);
    return 0;
  }
}


//======================================================================
// sub_277178
// address: 0x00277178   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_277178(_DWORD *a1)
{
  AchievementManager *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setAchievementRewardState'", nullptr);
    AchievementManager::setAchievementRewardState(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setAchievementRewardState'.", v6);
  }
  return 0;
}


//======================================================================
// sub_277238
// address: 0x00277238   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_277238(_DWORD *a1)
{
  AchievementManager *v2; // r5
  int v3; // r6
  double AchievementState; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementState'", nullptr);
    AchievementState = (double)(int)AchievementManager::getAchievementState(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(AchievementState), SLODWORD(AchievementState), SHIDWORD(AchievementState));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementState'.", v6);
    return 0;
  }
}


//======================================================================
// sub_2772E8
// address: 0x002772E8   size: 0xA6 (166 bytes)
//======================================================================
int __fastcall sub_2772E8(_DWORD *a1)
{
  AchievementManager *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnumber(a1, 3, 0, (int)v6)
    && tolua_isnoobj((int)a1, 4, v6) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setAchievementState'", nullptr);
    AchievementManager::setAchievementState(v2, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setAchievementState'.", v6);
  }
  return 0;
}


//======================================================================
// sub_2773A8
// address: 0x002773A8   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_2773A8(_DWORD *a1)
{
  AchievementManager *v2; // r7
  int v3; // r4
  int AchievementDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementDef'", nullptr);
    AchievementDef = AchievementManager::getAchievementDef(v2, v3);
    tolua_pushusertype(a1, AchievementDef, "const AchievementDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_277450
// address: 0x00277450   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277450(_DWORD *a1)
{
  int v2; // r3
  int *v3; // r5

  v3 = (int *)tolua_tousertype(a1, 1, 0);
  if ( v3 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'achievementDef'", nullptr);
  tolua_pushusertype(a1, *v3, "const AchievementDef", v2);
  return 1;
}


//======================================================================
// sub_277484
// address: 0x00277484   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_277484(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'HandMineDrops'", nullptr);
  tolua_pushusertype(a1, v3 + 92, "DropItemDef", v2);
  return 1;
}


//======================================================================
// sub_2774BC
// address: 0x002774BC   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_2774BC(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_oworld'", nullptr);
  tolua_pushusertype(a1, v3 + 68, "std::vector<OWORLD>", v2);
  return 1;
}


//======================================================================
// sub_2774F4
// address: 0x002774F4   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_2774F4(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_worlddesc'", nullptr);
  tolua_pushusertype(a1, v3 + 56, "std::vector<BuddyWorldDesc>", v2);
  return 1;
}


//======================================================================
// sub_27752C
// address: 0x0027752C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_27752C(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_achievementinfo'", nullptr);
  tolua_pushusertype(a1, v3 + 32, "BuddyAchievementInfo", v2);
  return 1;
}


//======================================================================
// sub_277564
// address: 0x00277564   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_277564(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'achievement'", nullptr);
  tolua_pushusertype(a1, v3 + 8, "std::vector<BuddyAchievement>", v2);
  return 1;
}


//======================================================================
// sub_27759C
// address: 0x0027759C   size: 0x2E (46 bytes)
//======================================================================
int __fastcall sub_27759C(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'createdata'", nullptr);
  tolua_pushusertype(a1, v3 + 104, "WorldCreateData", v2);
  return 1;
}


//======================================================================
// sub_2775D4
// address: 0x002775D4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2775D4(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'def'", nullptr);
  tolua_pushusertype(a1, *(_DWORD *)(v3 + 12), "const BuffDef", v2);
  return 1;
}


//======================================================================
// sub_277608
// address: 0x00277608   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277608(_DWORD *a1)
{
  int v2; // r3
  int v3; // r5

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'body'", nullptr);
  tolua_pushusertype(a1, v3 + 4, "GameEventBody", v2);
  return 1;
}


//======================================================================
// sub_27763C
// address: 0x0027763C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_27763C(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'attentionresult'", nullptr);
  tolua_pushusertype(a1, v3, "GEAttentionOWWatchResult", v2);
  return 1;
}


//======================================================================
// sub_277670
// address: 0x00277670   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277670(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owresult'", nullptr);
  tolua_pushusertype(a1, v3, "GEOWWatchResult", v2);
  return 1;
}


//======================================================================
// sub_2776A4
// address: 0x002776A4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2776A4(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'dialogue'", nullptr);
  tolua_pushusertype(a1, v3, "GEGameDialogue", v2);
  return 1;
}


//======================================================================
// sub_2776D8
// address: 0x002776D8   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2776D8(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'mission'", nullptr);
  tolua_pushusertype(a1, v3, "GEMissionComplete", v2);
  return 1;
}


//======================================================================
// sub_27770C
// address: 0x0027770C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_27770C(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'bossstate'", nullptr);
  tolua_pushusertype(a1, v3, "GEUpdateBossState", v2);
  return 1;
}


//======================================================================
// sub_277740
// address: 0x00277740   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277740(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'enterworld'", nullptr);
  tolua_pushusertype(a1, v3, "GEEnterLeaveWorld", v2);
  return 1;
}


//======================================================================
// sub_277774
// address: 0x00277774   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277774(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'infotips'", nullptr);
  tolua_pushusertype(a1, v3, "GEInfoTips", v2);
  return 1;
}


//======================================================================
// sub_2777A8
// address: 0x002777A8   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2777A8(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'downloadWorld'", nullptr);
  tolua_pushusertype(a1, v3, "GEDownloadWorld", v2);
  return 1;
}


//======================================================================
// sub_2777DC
// address: 0x002777DC   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2777DC(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'minimap'", nullptr);
  tolua_pushusertype(a1, v3, "GEMinimapData", v2);
  return 1;
}


//======================================================================
// sub_277810
// address: 0x00277810   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277810(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'netAnomaly'", nullptr);
  tolua_pushusertype(a1, v3, "GENetAnomaly", v2);
  return 1;
}


//======================================================================
// sub_277844
// address: 0x00277844   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277844(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'uiHide'", nullptr);
  tolua_pushusertype(a1, v3, "GEUIHide", v2);
  return 1;
}


//======================================================================
// sub_277878
// address: 0x00277878   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277878(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'addBuddy'", nullptr);
  tolua_pushusertype(a1, v3, "GEAddBuddy", v2);
  return 1;
}


//======================================================================
// sub_2778AC
// address: 0x002778AC   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2778AC(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'achievementReward'", nullptr);
  tolua_pushusertype(a1, v3, "GEAchievementReward", v2);
  return 1;
}


//======================================================================
// sub_2778E0
// address: 0x002778E0   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2778E0(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'loadprogress'", nullptr);
  tolua_pushusertype(a1, v3, "GELoadProgress", v2);
  return 1;
}


//======================================================================
// sub_277914
// address: 0x00277914   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277914(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'entergame'", nullptr);
  tolua_pushusertype(a1, v3, "GEEnterGame", v2);
  return 1;
}


//======================================================================
// sub_277948
// address: 0x00277948   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277948(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'buddychat'", nullptr);
  tolua_pushusertype(a1, v3, "GEBuddyChat", v2);
  return 1;
}


//======================================================================
// sub_27797C
// address: 0x0027797C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_27797C(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'chat'", nullptr);
  tolua_pushusertype(a1, v3, "GEChatData", v2);
  return 1;
}


//======================================================================
// sub_2779B0
// address: 0x002779B0   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2779B0(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'addbuddy'", nullptr);
  tolua_pushusertype(a1, v3, "GEAddBuddyNotify", v2);
  return 1;
}


//======================================================================
// sub_2779E4
// address: 0x002779E4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_2779E4(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldlist'", nullptr);
  tolua_pushusertype(a1, v3, "GEWorldListChange", v2);
  return 1;
}


//======================================================================
// sub_277A18
// address: 0x00277A18   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277A18(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'oxygen'", nullptr);
  tolua_pushusertype(a1, v3, "GEShowOxygen", v2);
  return 1;
}


//======================================================================
// sub_277A4C
// address: 0x00277A4C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277A4C(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'attrchange'", nullptr);
  tolua_pushusertype(a1, v3, "GEPlayerAttrChange", v2);
  return 1;
}


//======================================================================
// sub_277A80
// address: 0x00277A80   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277A80(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'shortcut'", nullptr);
  tolua_pushusertype(a1, v3, "GEShortcutSelected", v2);
  return 1;
}


//======================================================================
// sub_277AB4
// address: 0x00277AB4   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_277AB4(_DWORD *a1)
{
  int v2; // r3
  int v3; // r4

  v3 = tolua_tousertype(a1, 1, 0);
  if ( v3 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'backpack'", nullptr);
  tolua_pushusertype(a1, v3, "GEBackpackChange", v2);
  return 1;
}


//======================================================================
// sub_277AE8
// address: 0x00277AE8   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_277AE8(_DWORD *a1)
{
  AchievementManager *v2; // r5
  int v3; // r6
  double AchievementArryNum; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementArryNum'", nullptr);
    AchievementArryNum = (double)(int)AchievementManager::getAchievementArryNum(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(AchievementArryNum), SLODWORD(AchievementArryNum), SHIDWORD(AchievementArryNum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementArryNum'.", v6);
    return 0;
  }
}


//======================================================================
// sub_277B98
// address: 0x00277B98   size: 0xCA (202 bytes)
//======================================================================
int __fastcall sub_277B98(_DWORD *a1)
{
  AchievementManager *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-18h]
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 1, (int)v7)
    && tolua_isnumber(a1, 4, 1, (int)v7)
    && tolua_isnoobj((int)a1, 5, v7) != 0 )
  {
    v2 = (AchievementManager *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0x3FF0000000000000LL));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setAchievementArryNum'", nullptr);
    AchievementManager::setAchievementArryNum(v2, v6, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setAchievementArryNum'.", v7);
  }
  return 0;
}


//======================================================================
// sub_277C88
// address: 0x00277C88   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_277C88(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6
  double inited; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "AchievementManager", 0, v6) != 0
    && tolua_isusertype(a1, 2, "const AchievementDef", 0, v6) != 0
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_tousertype(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'initAchievementState'", nullptr);
    inited = (double)AchievementManager::initAchievementState(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(inited), SLODWORD(inited), SHIDWORD(inited));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'initAchievementState'.", v6);
    return 0;
  }
}


//======================================================================
// sub_277D28
// address: 0x00277D28   size: 0x136 (310 bytes)
//======================================================================
int __fastcall sub_277D28(_DWORD *a1)
{
  ClientActorMgr *v2; // r5
  float v3; // r0
  float v4; // r6
  float v5; // r0
  float v6; // r7
  ClientActor *v8; // [sp+10h] [bp-24h]
  int v9; // [sp+14h] [bp-20h]
  int v10; // [sp+18h] [bp-1Ch]
  int v11; // [sp+1Ch] [bp-18h]
  int v12[4]; // [sp+24h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActorMgr", 0, v12) != 0
    && tolua_isusertype(a1, 2, "ClientActor", 0, v12) != 0
    && tolua_isnumber(a1, 3, 0, (int)v12)
    && tolua_isnumber(a1, 4, 0, (int)v12)
    && tolua_isnumber(a1, 5, 0, (int)v12)
    && tolua_isnumber(a1, 6, 0, (int)v12)
    && tolua_isnumber(a1, 7, 0, (int)v12)
    && tolua_isnoobj((int)a1, 8, v12) != 0 )
  {
    v2 = (ClientActorMgr *)tolua_tousertype(a1, 1, 0);
    v8 = (ClientActor *)tolua_tousertype(a1, 2, 0);
    v9 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v10 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v11 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v3 = COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    v4 = v3;
    v5 = COERCE_DOUBLE(tolua_tonumber(a1, 7, 0));
    v6 = v5;
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'spawnActor'", nullptr);
    ClientActorMgr::spawnActor(v2, v8, v9, v10, v11, v4, v6);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'spawnActor'.", v12);
  }
  return 0;
}


//======================================================================
// sub_277E78
// address: 0x00277E78   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_277E78(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'IsGroup'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 580) = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_277ED4
// address: 0x00277ED4   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_277ED4(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CanTalk'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 292) = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_277F30
// address: 0x00277F30   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_277F30(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CanRide'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 291) = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_277F8C
// address: 0x00277F8C   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_277F8C(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CanBreed'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 290) = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_277FE8
// address: 0x00277FE8   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_277FE8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CanTame'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 289) = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_278044
// address: 0x00278044   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_278044(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ActiveAtk'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 288) = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_2780A0
// address: 0x002780A0   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2780A0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'IsGroup'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 36) = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_2780FC
// address: 0x002780FC   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_2780FC(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnableSnow'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 65) = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_278158
// address: 0x00278158   size: 0x52 (82 bytes)
//======================================================================
int __fastcall sub_278158(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnableRain'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *(_BYTE *)(v5 + 64) = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_2781B4
// address: 0x002781B4   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_2781B4(_DWORD *a1, int a2, int a3, int a4)
{
  bool *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (bool *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'frombuddy'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_27820C
// address: 0x0027820C   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_27820C(_DWORD *a1, int a2, int a3, int a4)
{
  bool *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (bool *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'isHide'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_278264
// address: 0x00278264   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_278264(_DWORD *a1, int a2, int a3, int a4)
{
  bool *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (bool *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'firsttime'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_2782BC
// address: 0x002782BC   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_2782BC(_DWORD *a1, int a2, int a3, int a4)
{
  bool *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (bool *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'myworld'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_278314
// address: 0x00278314   size: 0x50 (80 bytes)
//======================================================================
int __fastcall sub_278314(_DWORD *a1, int a2, int a3, int a4)
{
  bool *v5; // r5
  int v7[3]; // [sp+4h] [bp-Ch] BYREF

  v7[0] = a2;
  v7[1] = a3;
  v7[2] = a4;
  v5 = (bool *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'show'", nullptr);
  if ( tolua_isboolean(a1, 2, 0, v7) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v7);
  *v5 = tolua_toboolean(a1, 2, false);
  return 0;
}


//======================================================================
// sub_27836C
// address: 0x0027836C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27836C(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setSunHurt'", nullptr);
    *(_BYTE *)(v2 + 149) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setSunHurt'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2783F4
// address: 0x002783F4   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_2783F4(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setAvoidWater'", nullptr);
    *(_BYTE *)(v2 + 116) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setAvoidWater'.", v5);
  }
  return 0;
}


//======================================================================
// sub_27847C
// address: 0x0027847C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27847C(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setAvoidSun'", nullptr);
    *(_BYTE *)(v2 + 123) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setAvoidSun'.", v5);
  }
  return 0;
}


//======================================================================
// sub_278504
// address: 0x00278504   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_278504(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setCanPassOpenWoodenDoors'", nullptr);
    *(_BYTE *)(v2 + 118) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCanPassOpenWoodenDoors'.", v5);
  }
  return 0;
}


//======================================================================
// sub_27858C
// address: 0x0027858C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27858C(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setCanPassClosedWoodenDoors'", nullptr);
    *(_BYTE *)(v2 + 119) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCanPassClosedWoodenDoors'.", v5);
  }
  return 0;
}


//======================================================================
// sub_278614
// address: 0x00278614   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_278614(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setCanSwimming'", nullptr);
    *(_BYTE *)(v2 + 117) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCanSwimming'.", v5);
  }
  return 0;
}


//======================================================================
// sub_27869C
// address: 0x0027869C   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27869C(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setCanFly'", nullptr);
    *(_BYTE *)(v2 + 120) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCanFly'.", v5);
  }
  return 0;
}


//======================================================================
// sub_278724
// address: 0x00278724   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_278724(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setSitting'", nullptr);
    *(_BYTE *)(v2 + 121) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setSitting'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2787AC
// address: 0x002787AC   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_2787AC(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActor", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setAISitting'", nullptr);
    *(_BYTE *)(v2 + 122) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setAISitting'.", v5);
  }
  return 0;
}


//======================================================================
// sub_278834
// address: 0x00278834   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_278834(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setCanPickUpLoot'", nullptr);
    *(_BYTE *)(v2 + 212) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCanPickUpLoot'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2788BC
// address: 0x002788BC   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_2788BC(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientMob", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setAttackActive'", nullptr);
    *(_BYTE *)(v2 + 188) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setAttackActive'.", v5);
  }
  return 0;
}


//======================================================================
// sub_278944
// address: 0x00278944   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_278944(_DWORD *a1)
{
  int v2; // r5
  bool v3; // r6
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientActorMgr", 0, v5) != 0
    && tolua_isboolean(a1, 2, 0, v5) != 0
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v3 = tolua_toboolean(a1, 2, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'setMobGen'", nullptr);
    *(_BYTE *)(v2 + 40) = v3;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setMobGen'.", v5);
  }
  return 0;
}


//======================================================================
// sub_2789D0
// address: 0x002789D0   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_2789D0(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  char *StringDef; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getStringDef'", nullptr);
    StringDef = (char *)DefManager::getStringDef(v2, v3);
    tolua_pushstring((int)a1, StringDef);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getStringDef'.", v6);
    return 0;
  }
}


//======================================================================
// sub_278A78
// address: 0x00278A78   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278A78(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Script'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 628));
  return 1;
}


//======================================================================
// sub_278AA8
// address: 0x00278AA8   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278AA8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TrackDesc'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 320));
  return 1;
}


//======================================================================
// sub_278AD8
// address: 0x00278AD8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_278AD8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Desc'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 64));
  return 1;
}


//======================================================================
// sub_278B08
// address: 0x00278B08   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_278B08(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 32));
  return 1;
}


//======================================================================
// sub_278B38
// address: 0x00278B38   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_278B38(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 4));
  return 1;
}


//======================================================================
// sub_278B64
// address: 0x00278B64   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_278B64(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CurrencyType'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 4));
  return 1;
}


//======================================================================
// sub_278B90
// address: 0x00278B90   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_278B90(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttrDesc'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 64));
  return 1;
}


//======================================================================
// sub_278BC0
// address: 0x00278BC0   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_278BC0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 4));
  return 1;
}


//======================================================================
// sub_278BEC
// address: 0x00278BEC   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278BEC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SoundName'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 452));
  return 1;
}


//======================================================================
// sub_278C1C
// address: 0x00278C1C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278C1C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EffectName'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 420));
  return 1;
}


//======================================================================
// sub_278C4C
// address: 0x00278C4C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278C4C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'IconName'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 388));
  return 1;
}


//======================================================================
// sub_278C7C
// address: 0x00278C7C   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278C7C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ScriptName'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 292));
  return 1;
}


//======================================================================
// sub_278CAC
// address: 0x00278CAC   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_278CAC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Desc'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 36));
  return 1;
}


//======================================================================
// sub_278CDC
// address: 0x00278CDC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_278CDC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 4));
  return 1;
}


//======================================================================
// sub_278D08
// address: 0x00278D08   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278D08(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Effect'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 466));
  return 1;
}


//======================================================================
// sub_278D38
// address: 0x00278D38   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278D38(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'StepSound'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 434));
  return 1;
}


//======================================================================
// sub_278D68
// address: 0x00278D68   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278D68(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SaySound'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 402));
  return 1;
}


//======================================================================
// sub_278D98
// address: 0x00278D98   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278D98(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DeathSound'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 370));
  return 1;
}


//======================================================================
// sub_278DC8
// address: 0x00278DC8   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278DC8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'HurtSound'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 338));
  return 1;
}


//======================================================================
// sub_278DF8
// address: 0x00278DF8   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_278DF8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TickScript'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 116));
  return 1;
}


//======================================================================
// sub_278E28
// address: 0x00278E28   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_278E28(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Model2'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 68));
  return 1;
}


//======================================================================
// sub_278E58
// address: 0x00278E58   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_278E58(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Model'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 36));
  return 1;
}


//======================================================================
// sub_278E88
// address: 0x00278E88   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_278E88(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 4));
  return 1;
}


//======================================================================
// sub_278EB4
// address: 0x00278EB4   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_278EB4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 4));
  return 1;
}


//======================================================================
// sub_278EE0
// address: 0x00278EE0   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278EE0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseScript'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 400));
  return 1;
}


//======================================================================
// sub_278F10
// address: 0x00278F10   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278F10(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WieldImage'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 368));
  return 1;
}


//======================================================================
// sub_278F40
// address: 0x00278F40   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278F40(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PlaceSound'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 336));
  return 1;
}


//======================================================================
// sub_278F70
// address: 0x00278F70   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_278F70(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Icon'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 304));
  return 1;
}


//======================================================================
// sub_278FA0
// address: 0x00278FA0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_278FA0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Desc'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 48));
  return 1;
}


//======================================================================
// sub_278FD0
// address: 0x00278FD0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_278FD0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 16));
  return 1;
}


//======================================================================
// sub_279000
// address: 0x00279000   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_279000(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PlaceSound'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 340));
  return 1;
}


//======================================================================
// sub_279030
// address: 0x00279030   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_279030(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DigSound'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 308));
  return 1;
}


//======================================================================
// sub_279060
// address: 0x00279060   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_279060(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WalkSound'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 276));
  return 1;
}


//======================================================================
// sub_279090
// address: 0x00279090   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_279090(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Texture2'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 244));
  return 1;
}


//======================================================================
// sub_2790C0
// address: 0x002790C0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_2790C0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Texture1'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 212));
  return 1;
}


//======================================================================
// sub_2790F0
// address: 0x002790F0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_2790F0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'OpUseScript'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 180));
  return 1;
}


//======================================================================
// sub_279120
// address: 0x00279120   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_279120(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 148));
  return 1;
}


//======================================================================
// sub_279150
// address: 0x00279150   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_279150(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 116));
  return 1;
}


//======================================================================
// sub_279180
// address: 0x00279180   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_279180(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 4));
  return 1;
}


//======================================================================
// sub_2791AC
// address: 0x002791AC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_2791AC(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_nickname'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 8));
  return 1;
}


//======================================================================
// sub_2791D8
// address: 0x002791D8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_2791D8(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'msg'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 8));
  return 1;
}


//======================================================================
// sub_279204
// address: 0x00279204   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_279204(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'memo'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 28));
  return 1;
}


//======================================================================
// sub_279230
// address: 0x00279230   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_279230(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owernickname'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 8));
  return 1;
}


//======================================================================
// sub_27925C
// address: 0x0027925C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_27925C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'owname'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 4));
  return 1;
}


//======================================================================
// sub_279288
// address: 0x00279288   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_279288(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'content'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 4));
  return 1;
}


//======================================================================
// sub_2792B4
// address: 0x002792B4   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_2792B4(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'realNickName'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 96));
  return 1;
}


//======================================================================
// sub_2792E0
// address: 0x002792E0   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_2792E0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ownerCltVer'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 88));
  return 1;
}


//======================================================================
// sub_27930C
// address: 0x0027930C   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_27930C(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'memo'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 60));
  return 1;
}


//======================================================================
// sub_279338
// address: 0x00279338   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_279338(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ownernick'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 20));
  return 1;
}


//======================================================================
// sub_279364
// address: 0x00279364   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_279364(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'worldname'", nullptr);
  tolua_pushstring((int)a1, *(char **)(v2 + 8));
  return 1;
}


//======================================================================
// sub_279390
// address: 0x00279390   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_279390(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'seedstr'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 13));
  return 1;
}


//======================================================================
// sub_2793C0
// address: 0x002793C0   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_2793C0(_DWORD *a1)
{
  char *v2; // r4

  v2 = (char *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'info'", nullptr);
  tolua_pushstring((int)a1, v2);
  return 1;
}


//======================================================================
// sub_2793EC
// address: 0x002793EC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_2793EC(_DWORD *a1)
{
  char *v2; // r4

  v2 = (char *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'info'", nullptr);
  tolua_pushstring((int)a1, v2);
  return 1;
}


//======================================================================
// sub_279418
// address: 0x00279418   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_279418(_DWORD *a1)
{
  char *v2; // r4

  v2 = (char *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'nickName'", nullptr);
  tolua_pushstring((int)a1, v2);
  return 1;
}


//======================================================================
// sub_279444
// address: 0x00279444   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_279444(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'content'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 36));
  return 1;
}


//======================================================================
// sub_279474
// address: 0x00279474   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_279474(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'speaker'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 4));
  return 1;
}


//======================================================================
// sub_2794A0
// address: 0x002794A0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_2794A0(_DWORD *a1)
{
  int v2; // r5

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'nickname'", nullptr);
  tolua_pushstring((int)a1, (char *)(v2 + 8));
  return 1;
}


//======================================================================
// sub_2794D0
// address: 0x002794D0   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_2794D0(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int MonsterDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getMonsterDef'", nullptr);
    MonsterDef = DefManager::getMonsterDef(v2, v3);
    tolua_pushusertype(a1, MonsterDef, "const MonsterDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getMonsterDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279578
// address: 0x00279578   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_279578(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int ToolDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getToolDef'", nullptr);
    ToolDef = DefManager::getToolDef(v2, v3);
    tolua_pushusertype(a1, ToolDef, "const ToolDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getToolDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279620
// address: 0x00279620   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_279620(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int Crafting; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'findCrafting'", nullptr);
    Crafting = DefManager::findCrafting(v2, v3);
    tolua_pushusertype(a1, Crafting, "const CraftingDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'findCrafting'.", v7);
    return 0;
  }
}


//======================================================================
// sub_2796C8
// address: 0x002796C8   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_2796C8(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int FurnaceDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFurnaceDef'", nullptr);
    FurnaceDef = DefManager::getFurnaceDef(v2, v3);
    tolua_pushusertype(a1, FurnaceDef, "const FurnaceDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFurnaceDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279770
// address: 0x00279770   size: 0xB4 (180 bytes)
//======================================================================
int __fastcall sub_279770(_DWORD *a1)
{
  DefManager *v2; // r5
  int v3; // r6
  int v4; // r7
  int BuffDef; // r0
  int v6; // r3
  int v8[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnoobj((int)a1, 4, v8) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBuffDef'", nullptr);
    BuffDef = DefManager::getBuffDef(v2, v3, v4);
    tolua_pushusertype(a1, BuffDef, "const BuffDef", v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuffDef'.", v8);
    return 0;
  }
}


//======================================================================
// sub_279840
// address: 0x00279840   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_279840(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int EnchantMentDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getEnchantMentDef'", nullptr);
    EnchantMentDef = DefManager::getEnchantMentDef(v2, v3);
    tolua_pushusertype(a1, EnchantMentDef, "const EnchantMentDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getEnchantMentDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_2798E8
// address: 0x002798E8   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_2798E8(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int CurAccordEnchantDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCurAccordEnchantDef'", nullptr);
    CurAccordEnchantDef = DefManager::getCurAccordEnchantDef(v2, v3);
    tolua_pushusertype(a1, CurAccordEnchantDef, "const EnchantDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCurAccordEnchantDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279990
// address: 0x00279990   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_279990(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setCurAccordEnchants'", nullptr);
    DefManager::setCurAccordEnchants(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setCurAccordEnchants'.", v5);
  }
  return 0;
}


//======================================================================
// sub_279A30
// address: 0x00279A30   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_279A30(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int EnchantDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getEnchantDef'", nullptr);
    EnchantDef = DefManager::getEnchantDef(v2, v3);
    tolua_pushusertype(a1, EnchantDef, "const EnchantDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getEnchantDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279AD8
// address: 0x00279AD8   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_279AD8(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int AchievementDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getAchievementDef'", nullptr);
    AchievementDef = DefManager::getAchievementDef(v2, v3);
    tolua_pushusertype(a1, AchievementDef, "const AchievementDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279B80
// address: 0x00279B80   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_279B80(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int FoodDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFoodDef'", nullptr);
    FoodDef = DefManager::getFoodDef(v2, v3);
    tolua_pushusertype(a1, FoodDef, "const FoodDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFoodDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279C28
// address: 0x00279C28   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_279C28(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int BlockDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockDef'", nullptr);
    BlockDef = DefManager::getBlockDef(v2, v3);
    tolua_pushusertype(a1, BlockDef, "const BlockDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279CD0
// address: 0x00279CD0   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_279CD0(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int BiomeDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBiomeDef'", nullptr);
    BiomeDef = DefManager::getBiomeDef(v2, v3);
    tolua_pushusertype(a1, BiomeDef, "const BiomeDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBiomeDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279D78
// address: 0x00279D78   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_279D78(_DWORD *a1)
{
  DefManager *v2; // r7
  int v3; // r4
  int ItemDef; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (DefManager *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getItemDef'", nullptr);
    ItemDef = DefManager::getItemDef(v2, v3);
    tolua_pushusertype(a1, ItemDef, "const ItemDef", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getItemDef'.", v7);
    return 0;
  }
}


//======================================================================
// sub_279E20
// address: 0x00279E20   size: 0xA0 (160 bytes)
//======================================================================
int __fastcall sub_279E20(_DWORD *a1)
{
  int v2; // r7
  char *v4; // [sp+8h] [bp-14h] BYREF
  int v5[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "DefManager", 0, v5) != 0
    && tolua_isnumber(a1, 2, 0, (int)v5)
    && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    tolua_tonumber(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getRandomName'", nullptr);
    DefManager::getRandomName((DefManager *)&v4, v2);
    tolua_pushstring((int)a1, v4);
    sub_3BDF80(&v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getRandomName'.", v5);
    return 0;
  }
}


//======================================================================
// sub_279ED8
// address: 0x00279ED8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_279ED8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Script'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 628), v6, 0xFFu);
  return 0;
}


//======================================================================
// sub_279F38
// address: 0x00279F38   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_279F38(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TrackDesc'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 320), v6, 0xFFu);
  return 0;
}


//======================================================================
// sub_279F98
// address: 0x00279F98   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_279F98(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Desc'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 64), v6, 0xFFu);
  return 0;
}


//======================================================================
// sub_279FF8
// address: 0x00279FF8   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_279FF8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 32), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A058
// address: 0x0027A058   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27A058(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 4), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A0B4
// address: 0x0027A0B4   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27A0B4(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CurrencyType'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 4), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A110
// address: 0x0027A110   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27A110(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'AttrDesc'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 64), v6, 0xFFu);
  return 0;
}


//======================================================================
// sub_27A170
// address: 0x0027A170   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27A170(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 4), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A1CC
// address: 0x0027A1CC   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A1CC(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SoundName'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 452), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A22C
// address: 0x0027A22C   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A22C(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EffectName'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 420), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A28C
// address: 0x0027A28C   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A28C(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'IconName'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 388), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A2EC
// address: 0x0027A2EC   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A2EC(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ScriptName'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 292), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A34C
// address: 0x0027A34C   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27A34C(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Desc'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 36), v6, 0xFFu);
  return 0;
}


//======================================================================
// sub_27A3AC
// address: 0x0027A3AC   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27A3AC(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 4), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A408
// address: 0x0027A408   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A408(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Effect'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 466), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A468
// address: 0x0027A468   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A468(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'StepSound'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 434), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A4C8
// address: 0x0027A4C8   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A4C8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'SaySound'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 402), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A528
// address: 0x0027A528   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A528(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DeathSound'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 370), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A588
// address: 0x0027A588   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A588(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'HurtSound'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 338), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A5E8
// address: 0x0027A5E8   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27A5E8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'TickScript'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 116), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A648
// address: 0x0027A648   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27A648(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Model2'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 68), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A6A8
// address: 0x0027A6A8   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27A6A8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Model'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 36), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A708
// address: 0x0027A708   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27A708(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 4), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A764
// address: 0x0027A764   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27A764(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 4), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A7C0
// address: 0x0027A7C0   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A7C0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'UseScript'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 400), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A820
// address: 0x0027A820   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A820(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WieldImage'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 368), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A880
// address: 0x0027A880   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A880(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PlaceSound'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 336), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A8E0
// address: 0x0027A8E0   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27A8E0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Icon'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 304), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27A940
// address: 0x0027A940   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27A940(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Desc'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 48), v6, 0xFFu);
  return 0;
}


//======================================================================
// sub_27A9A0
// address: 0x0027A9A0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27A9A0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 16), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27AA00
// address: 0x0027AA00   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27AA00(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'PlaceSound'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 340), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27AA60
// address: 0x0027AA60   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27AA60(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'DigSound'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 308), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27AAC0
// address: 0x0027AAC0   size: 0x58 (88 bytes)
//======================================================================
int __fastcall sub_27AAC0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'WalkSound'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 276), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27AB20
// address: 0x0027AB20   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27AB20(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Texture2'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 244), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27AB80
// address: 0x0027AB80   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27AB80(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Texture1'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 212), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27ABE0
// address: 0x0027ABE0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27ABE0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'OpUseScript'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 180), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27AC40
// address: 0x0027AC40   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27AC40(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Type'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 148), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27ACA0
// address: 0x0027ACA0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27ACA0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 116), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27AD00
// address: 0x0027AD00   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27AD00(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'Name'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 4), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27AD5C
// address: 0x0027AD5C   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27AD5C(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'seedstr'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 13), v6, 0x40u);
  return 0;
}


//======================================================================
// sub_27ADBC
// address: 0x0027ADBC   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27ADBC(_DWORD *a1, int a2, int a3, int a4)
{
  char *v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = (char *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'info'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy(v5, v6, 0x7Fu);
  return 0;
}


//======================================================================
// sub_27AE18
// address: 0x0027AE18   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27AE18(_DWORD *a1, int a2, int a3, int a4)
{
  char *v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = (char *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'info'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy(v5, v6, 0x7Fu);
  return 0;
}


//======================================================================
// sub_27AE74
// address: 0x0027AE74   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27AE74(_DWORD *a1, int a2, int a3, int a4)
{
  char *v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = (char *)tolua_tousertype(a1, 1, 0);
  if ( v5 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'nickName'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy(v5, v6, 0x3Fu);
  return 0;
}


//======================================================================
// sub_27AED0
// address: 0x0027AED0   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27AED0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'content'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 36), v6, 0xFFu);
  return 0;
}


//======================================================================
// sub_27AF30
// address: 0x0027AF30   size: 0x54 (84 bytes)
//======================================================================
int __fastcall sub_27AF30(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'speaker'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 4), v6, 0x1Fu);
  return 0;
}


//======================================================================
// sub_27AF8C
// address: 0x0027AF8C   size: 0x56 (86 bytes)
//======================================================================
int __fastcall sub_27AF8C(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  const char *v6; // r0
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  v5 = tolua_tousertype(a1, 1, 0);
  if ( v5 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'nickname'", nullptr);
  if ( tolua_istable(a1, 2, 0, v8) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v8);
  v6 = (const char *)tolua_tostring(a1, 2, 0);
  j_strncpy((char *)(v5 + 8), v6, 0x3Fu);
  return 0;
}


//======================================================================
// sub_27AFF0
// address: 0x0027AFF0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27AFF0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 154) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27B088
// address: 0x0027B088   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27B088(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 154) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27B120
// address: 0x0027B120   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27B120(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 152) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27B1B8
// address: 0x0027B1B8   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27B1B8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 152) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27B250
// address: 0x0027B250   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27B250(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 150) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27B2E8
// address: 0x0027B2E8   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27B2E8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 150) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27B380
// address: 0x0027B380   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27B380(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * v6 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27B418
// address: 0x0027B418   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27B418(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * v6 + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27B4B0
// address: 0x0027B4B0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27B4B0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 20) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27B548
// address: 0x0027B548   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27B548(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 20) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27B5E0
// address: 0x0027B5E0   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27B5E0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 14) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27B678
// address: 0x0027B678   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27B678(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 14) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27B710
// address: 0x0027B710   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27B710(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 10) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27B7A8
// address: 0x0027B7A8   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27B7A8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 10) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27B840
// address: 0x0027B840   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27B840(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 0xB )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 80) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27B8D8
// address: 0x0027B8D8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27B8D8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 0xB )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 80) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27B970
// address: 0x0027B970   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27B970(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  float v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  *(float *)(v5 + 4 * (v6 + 10) + 4) = v7;
  return 0;
}


//======================================================================
// sub_27BA08
// address: 0x0027BA08   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27BA08(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = *(float *)(v5 + 4 * (v6 + 10) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27BAA0
// address: 0x0027BAA0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27BAA0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  float v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  *(float *)(4 * (v6 + 92) + v5) = v7;
  return 0;
}


//======================================================================
// sub_27BB38
// address: 0x0027BB38   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27BB38(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = *(float *)(4 * (v6 + 92) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27BBD0
// address: 0x0027BBD0   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27BBD0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  int v7; // r3
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = *(_DWORD *)tolua_tousertype(a1, 3, 0);
  *(_DWORD *)(v5 + 4 * (v6 + 86) + 4) = v7;
  return 0;
}


//======================================================================
// sub_27BC68
// address: 0x0027BC68   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_27BC68(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v6; // r3
  unsigned int v7; // r6
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v7 > 4 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  tolua_pushusertype(a1, v5 + 4 * (v7 + 86) + 4, "MODATTRIB_TYPE", v6);
  return 1;
}


//======================================================================
// sub_27BCF8
// address: 0x0027BCF8   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27BCF8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 10) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27BD90
// address: 0x0027BD90   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27BD90(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 10) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27BE28
// address: 0x0027BE28   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27BE28(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 8) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27BEC0
// address: 0x0027BEC0   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27BEC0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 8) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27BF58
// address: 0x0027BF58   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27BF58(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 4) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27BFF0
// address: 0x0027BFF0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27BFF0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 4) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27C088
// address: 0x0027C088   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27C088(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 0x15 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_WORD *)(v5 + 2 * (v6 + 144) + 6) = (unsigned int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27C120
// address: 0x0027C120   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27C120(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 0x15 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(unsigned __int16 *)(v5 + 2 * (v6 + 144) + 6);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27C1B8
// address: 0x0027C1B8   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27C1B8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 62) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27C250
// address: 0x0027C250   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27C250(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 62) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27C2E8
// address: 0x0027C2E8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27C2E8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 60) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27C380
// address: 0x0027C380   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27C380(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 60) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27C418
// address: 0x0027C418   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27C418(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 58) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27C4B0
// address: 0x0027C4B0   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27C4B0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 58) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27C548
// address: 0x0027C548   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27C548(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 56) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27C5E0
// address: 0x0027C5E0   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27C5E0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 56) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27C678
// address: 0x0027C678   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27C678(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 8 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 18) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27C710
// address: 0x0027C710   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27C710(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 8 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 18) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27C7A8
// address: 0x0027C7A8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27C7A8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 8 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 10) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27C840
// address: 0x0027C840   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27C840(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 8 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 10) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27C8D8
// address: 0x0027C8D8   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27C8D8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 5 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 24) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27C970
// address: 0x0027C970   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27C970(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 5 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 24) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27CA08
// address: 0x0027CA08   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27CA08(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 5 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 18) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27CAA0
// address: 0x0027CAA0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27CAA0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 5 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 18) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27CB38
// address: 0x0027CB38   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27CB38(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_WORD *)(v5 + 2 * (v6 + 24) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27CBD0
// address: 0x0027CBD0   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27CBD0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(__int16 *)(v5 + 2 * (v6 + 24) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27CC68
// address: 0x0027CC68   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27CC68(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  _WORD *v7; // r0
  unsigned int v8; // r5
  __int16 v9; // r3
  int v11[3]; // [sp+4h] [bp-Ch] BYREF

  v11[0] = a2;
  v11[1] = a3;
  v11[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v11) )
    tolua_error(a1, "#vinvalid type in array indexing.", v11);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (_WORD *)tolua_tousertype(a1, 3, 0);
  v8 = v5 + 4 * (v6 + 20);
  *(_WORD *)(v8 + 4) = *v7;
  v9 = v7[1];
  *(_WORD *)(v8 + 6) = v9;
  return 0;
}


//======================================================================
// sub_27CD00
// address: 0x0027CD00   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_27CD00(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  int v6; // r3
  unsigned int v7; // r6
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v7 > 1 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  tolua_pushusertype(a1, v5 + 4 * (v7 + 20) + 4, "DropItemDef", v6);
  return 1;
}


//======================================================================
// sub_27CD90
// address: 0x0027CD90   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27CD90(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 92) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27CE28
// address: 0x0027CE28   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27CE28(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 92) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27CEC0
// address: 0x0027CEC0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27CEC0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 88) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27CF58
// address: 0x0027CF58   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27CF58(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 88) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27CFF0
// address: 0x0027CFF0   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27CFF0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 0x1F )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 48) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27D088
// address: 0x0027D088   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27D088(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 0x1F )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 48) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27D120
// address: 0x0027D120   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27D120(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 0x1F )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 16) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27D1B8
// address: 0x0027D1B8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27D1B8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 0x1F )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 16) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27D250
// address: 0x0027D250   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27D250(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 7 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 8) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27D2E8
// address: 0x0027D2E8   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27D2E8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 7 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 8) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27D380
// address: 0x0027D380   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27D380(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 7 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * v6 + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27D418
// address: 0x0027D418   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27D418(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 7 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * v6 + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27D4B0
// address: 0x0027D4B0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27D4B0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 44) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27D548
// address: 0x0027D548   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27D548(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 44) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27D5E0
// address: 0x0027D5E0   size: 0x7E (126 bytes)
//======================================================================
int __fastcall sub_27D5E0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(v5 + 4 * (v6 + 40) + 4) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27D678
// address: 0x0027D678   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27D678(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 2 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(v5 + 4 * (v6 + 40) + 4);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27D710
// address: 0x0027D710   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27D710(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 30) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27D7A8
// address: 0x0027D7A8   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27D7A8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 30) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27D840
// address: 0x0027D840   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27D840(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 26) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27D8D8
// address: 0x0027D8D8   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27D8D8(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 26) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27D970
// address: 0x0027D970   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27D970(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 22) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27DA08
// address: 0x0027DA08   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27DA08(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 22) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27DAA0
// address: 0x0027DAA0   size: 0x7C (124 bytes)
//======================================================================
int __fastcall sub_27DAA0(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r4
  int v8[3]; // [sp+4h] [bp-Ch] BYREF

  v8[0] = a2;
  v8[1] = a3;
  v8[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v8) )
    tolua_error(a1, "#vinvalid type in array indexing.", v8);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  *(_DWORD *)(4 * (v6 + 18) + v5) = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  return 0;
}


//======================================================================
// sub_27DB38
// address: 0x0027DB38   size: 0x7A (122 bytes)
//======================================================================
int __fastcall sub_27DB38(_DWORD *a1, int a2, int a3, int a4)
{
  int v5; // r5
  unsigned int v6; // r6
  double v7; // r0
  int v9[3]; // [sp+4h] [bp-Ch] BYREF

  v9[0] = a2;
  v9[1] = a3;
  v9[2] = a4;
  lua_pushstring((int)a1, ".self");
  lua_rawget(a1, 1);
  v5 = lua_touserdata(a1, -1);
  if ( !tolua_isnumber(a1, 2, 0, (int)v9) )
    tolua_error(a1, "#vinvalid type in array indexing.", v9);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v6 > 3 )
    tolua_error(a1, "array indexing out of range.", nullptr);
  v7 = (double)*(int *)(4 * (v6 + 18) + v5);
  tolua_pushnumber((int)a1, SHIDWORD(v7), SLODWORD(v7), SHIDWORD(v7));
  return 1;
}


//======================================================================
// sub_27DBD0
// address: 0x0027DBD0   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_27DBD0(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // r0

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'IsGroup'", nullptr);
  HIDWORD(v3) = *(unsigned __int8 *)(v2 + 580);
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DC00
// address: 0x0027DC00   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_27DC00(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // r0

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CanTalk'", nullptr);
  HIDWORD(v3) = *(unsigned __int8 *)(v2 + 292);
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DC30
// address: 0x0027DC30   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_27DC30(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // r0

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CanRide'", nullptr);
  HIDWORD(v3) = *(unsigned __int8 *)(v2 + 291);
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DC60
// address: 0x0027DC60   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_27DC60(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // r0

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CanBreed'", nullptr);
  HIDWORD(v3) = *(unsigned __int8 *)(v2 + 290);
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DC90
// address: 0x0027DC90   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_27DC90(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // r0

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'CanTame'", nullptr);
  HIDWORD(v3) = *(unsigned __int8 *)(v2 + 289);
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DCC0
// address: 0x0027DCC0   size: 0x2C (44 bytes)
//======================================================================
int __fastcall sub_27DCC0(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // r0

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'ActiveAtk'", nullptr);
  HIDWORD(v3) = *(unsigned __int8 *)(v2 + 288);
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DCF0
// address: 0x0027DCF0   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_27DCF0(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // r0

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'IsGroup'", nullptr);
  HIDWORD(v3) = *(unsigned __int8 *)(v2 + 36);
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DD20
// address: 0x0027DD20   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_27DD20(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // r0

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnableSnow'", nullptr);
  HIDWORD(v3) = *(unsigned __int8 *)(v2 + 65);
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DD50
// address: 0x0027DD50   size: 0x2A (42 bytes)
//======================================================================
int __fastcall sub_27DD50(_DWORD *a1)
{
  int v2; // r5
  __int64 v3; // r0

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'EnableRain'", nullptr);
  HIDWORD(v3) = *(unsigned __int8 *)(v2 + 64);
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DD80
// address: 0x0027DD80   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_27DD80(_DWORD *a1)
{
  unsigned __int8 *v2; // r5
  __int64 v3; // r0

  v2 = (unsigned __int8 *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'frombuddy'", nullptr);
  HIDWORD(v3) = *v2;
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DDAC
// address: 0x0027DDAC   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_27DDAC(_DWORD *a1)
{
  unsigned __int8 *v2; // r5
  __int64 v3; // r0

  v2 = (unsigned __int8 *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'isHide'", nullptr);
  HIDWORD(v3) = *v2;
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DDD8
// address: 0x0027DDD8   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_27DDD8(_DWORD *a1)
{
  unsigned __int8 *v2; // r5
  __int64 v3; // r0

  v2 = (unsigned __int8 *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'firsttime'", nullptr);
  HIDWORD(v3) = *v2;
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DE04
// address: 0x0027DE04   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_27DE04(_DWORD *a1)
{
  unsigned __int8 *v2; // r5
  __int64 v3; // r0

  v2 = (unsigned __int8 *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'myworld'", nullptr);
  HIDWORD(v3) = *v2;
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DE30
// address: 0x0027DE30   size: 0x28 (40 bytes)
//======================================================================
int __fastcall sub_27DE30(_DWORD *a1)
{
  unsigned __int8 *v2; // r5
  __int64 v3; // r0

  v2 = (unsigned __int8 *)tolua_tousertype(a1, 1, 0);
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in accessing variable 'show'", nullptr);
  HIDWORD(v3) = *v2;
  LODWORD(v3) = a1;
  tolua_pushboolean(v3);
  return 1;
}


//======================================================================
// sub_27DE60
// address: 0x0027DE60   size: 0x98 (152 bytes)
//======================================================================
int __fastcall sub_27DE60(_DWORD *a1)
{
  double v2; // r0
  __int64 v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isnumber(a1, 1, 0, (int)v5) && tolua_isnumber(a1, 2, 0, (int)v5) && tolua_isnoobj((int)a1, 3, v5) != 0 )
  {
    v2 = COERCE_DOUBLE(tolua_tonumber(a1, 1, 0));
    HIDWORD(v3) = (int)v2 / 1000 == (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0)) / 1000;
    LODWORD(v3) = a1;
    tolua_pushboolean(v3);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'IsGridIndexType'.", v5);
    return 0;
  }
}


//======================================================================
// sub_27DF08
// address: 0x0027DF08   size: 0xDA (218 bytes)
//======================================================================
int __fastcall sub_27DF08(_DWORD *a1)
{
  BlockOperateMgr *v2; // r5
  int v3; // r6
  int v4; // r7
  double CurPlaceDir; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BlockOperateMgr", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (BlockOperateMgr *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getCurPlaceDir'", nullptr);
    CurPlaceDir = (double)(int)BlockOperateMgr::getCurPlaceDir(v2, v7, v3, v4);
    tolua_pushnumber((int)a1, SHIDWORD(CurPlaceDir), SLODWORD(CurPlaceDir), SHIDWORD(CurPlaceDir));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getCurPlaceDir'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27E000
// address: 0x0027E000   size: 0x104 (260 bytes)
//======================================================================
int __fastcall sub_27E000(_DWORD *a1)
{
  BlockOperateMgr *v2; // r5
  unsigned int v3; // r0
  int v5; // [sp+8h] [bp-1Ch] BYREF
  int v6; // [sp+Ch] [bp-18h] BYREF
  int v7; // [sp+10h] [bp-14h] BYREF
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "BlockOperateMgr", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (BlockOperateMgr *)tolua_tousertype(a1, 1, 0);
    v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'pickLiquid'", nullptr);
    v3 = BlockOperateMgr::pickLiquid(v2, &v5, &v6, &v7);
    tolua_pushboolean(__SPAIR64__(v3, (unsigned int)a1));
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v5)),
      COERCE_UNSIGNED_INT64((double)v5),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v5)));
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v6)),
      COERCE_UNSIGNED_INT64((double)v6),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v6)));
    tolua_pushnumber(
      (int)a1,
      HIDWORD(COERCE_UNSIGNED_INT64((double)v7)),
      COERCE_UNSIGNED_INT64((double)v7),
      HIDWORD(COERCE_UNSIGNED_INT64((double)v7)));
    return 4;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'pickLiquid'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27E120
// address: 0x0027E120   size: 0x112 (274 bytes)
//======================================================================
int __fastcall sub_27E120(_DWORD *a1)
{
  ClientWorld *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-20h]
  int v7; // [sp+10h] [bp-1Ch]
  int v8; // [sp+14h] [bp-18h]
  int v9[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientWorld", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnumber(a1, 6, 0, (int)v9)
    && tolua_isnoobj((int)a1, 7, v9) != 0 )
  {
    v2 = (ClientWorld *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'spawnItem'", nullptr);
    ClientWorld::spawnItem(v2, v6, v7, v8, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'spawnItem'.", v9);
  }
  return 0;
}


//======================================================================
// sub_27E250
// address: 0x0027E250   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall sub_27E250(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int Portal; // r0
  int v7; // [sp+8h] [bp-1Ch]
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'tryCreatePortal'", nullptr);
    Portal = World::tryCreatePortal(v2, v7, v8, v3, v4);
    tolua_pushboolean(__SPAIR64__(Portal, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'tryCreatePortal'.", v9);
    return 0;
  }
}


//======================================================================
// sub_27E360
// address: 0x0027E360   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall sub_27E360(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int v5; // r0
  int v7; // [sp+8h] [bp-1Ch]
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'fertilizeBlock'", nullptr);
    v5 = World::fertilizeBlock(v2, v7, v8, v3, v4);
    tolua_pushboolean(__SPAIR64__(v5, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'fertilizeBlock'.", v9);
    return 0;
  }
}


//======================================================================
// sub_27E470
// address: 0x0027E470   size: 0xD8 (216 bytes)
//======================================================================
int __fastcall sub_27E470(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int TopHeight; // r0
  __int64 v6; // r0
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnoobj((int)a1, 5, v9) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'canBlockSeeTheSky'", nullptr);
    TopHeight = World::getTopHeight(v2, v8, v4);
    HIDWORD(v6) = (TopHeight >> 31) + (v3 >= TopHeight) + (v3 >> 31);
    LODWORD(v6) = a1;
    tolua_pushboolean(v6);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'canBlockSeeTheSky'.", v9);
    return 0;
  }
}


//======================================================================
// sub_27E560
// address: 0x0027E560   size: 0xF8 (248 bytes)
//======================================================================
int __fastcall sub_27E560(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int canPlaceBlockAt; // r0
  int v7; // [sp+8h] [bp-1Ch]
  int v8; // [sp+Ch] [bp-18h]
  int v9[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnoobj((int)a1, 6, v9) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'canPlaceBlockAt'", nullptr);
    canPlaceBlockAt = World::canPlaceBlockAt(v2, v7, v8, v3, v4);
    tolua_pushboolean(__SPAIR64__(canPlaceBlockAt, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'canPlaceBlockAt'.", v9);
    return 0;
  }
}


//======================================================================
// sub_27E670
// address: 0x0027E670   size: 0xEE (238 bytes)
//======================================================================
int __fastcall sub_27E670(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+8h] [bp-1Ch]
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnumber(a1, 5, 0, (int)v8)
    && tolua_isnoobj((int)a1, 6, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'placeTree'", nullptr);
    World::placeTree(v2, v6, v7, v3, v4);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'placeTree'.", v8);
  }
  return 0;
}


//======================================================================
// sub_27E778
// address: 0x0027E778   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_27E778(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int isBlockOpaqueCube; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isBlockOpaqueCube'", nullptr);
    isBlockOpaqueCube = World::isBlockOpaqueCube(v2, v7, v3, v4);
    tolua_pushboolean(__SPAIR64__(isBlockOpaqueCube, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isBlockOpaqueCube'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27E868
// address: 0x0027E868   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_27E868(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int isBlockNormalCube; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isBlockNormalCube'", nullptr);
    isBlockNormalCube = World::isBlockNormalCube(v2, v7, v3, v4);
    tolua_pushboolean(__SPAIR64__(isBlockNormalCube, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isBlockNormalCube'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27E958
// address: 0x0027E958   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_27E958(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int isBlockLiquid; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isBlockLiquid'", nullptr);
    isBlockLiquid = World::isBlockLiquid(v2, v7, v3, v4);
    tolua_pushboolean(__SPAIR64__(isBlockLiquid, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isBlockLiquid'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27EA48
// address: 0x0027EA48   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_27EA48(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  unsigned int isBlockSolid; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'isBlockSolid'", nullptr);
    isBlockSolid = World::isBlockSolid(v2, v7, v3, v4);
    tolua_pushboolean(__SPAIR64__(isBlockSolid, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'isBlockSolid'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27EB38
// address: 0x0027EB38   size: 0x16E (366 bytes)
//======================================================================
int __fastcall sub_27EB38(_DWORD *a1)
{
  World *v3; // r5
  int v4; // r6
  int v5; // r7
  double BlockNumInRange; // r0
  int v7; // [sp+14h] [bp-28h]
  int v8; // [sp+18h] [bp-24h]
  int v9; // [sp+1Ch] [bp-20h]
  int v10; // [sp+20h] [bp-1Ch]
  int v11; // [sp+24h] [bp-18h]
  int v12[4]; // [sp+2Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v12) != 0
    && tolua_isnumber(a1, 2, 0, (int)v12)
    && tolua_isnumber(a1, 3, 0, (int)v12)
    && tolua_isnumber(a1, 4, 0, (int)v12)
    && tolua_isnumber(a1, 5, 0, (int)v12)
    && tolua_isnumber(a1, 6, 0, (int)v12)
    && tolua_isnumber(a1, 7, 0, (int)v12)
    && tolua_isnumber(a1, 8, 0, (int)v12)
    && tolua_isnoobj((int)a1, 9, v12) != 0 )
  {
    v3 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v9 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v10 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v11 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 7, 0));
    v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 8, 0));
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockNumInRange'", nullptr);
    BlockNumInRange = (double)(int)World::getBlockNumInRange(v3, v7, v8, v9, v10, v11, v4, v5);
    tolua_pushnumber((int)a1, SHIDWORD(BlockNumInRange), SLODWORD(BlockNumInRange), SHIDWORD(BlockNumInRange));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockNumInRange'.", v12);
    return 0;
  }
}


//======================================================================
// sub_27ECC0
// address: 0x0027ECC0   size: 0x168 (360 bytes)
//======================================================================
int __fastcall sub_27ECC0(_DWORD *a1)
{
  World *v3; // r5
  int v4; // r6
  int v5; // r7
  unsigned int hasBlockInRange; // r0
  int v7; // [sp+14h] [bp-28h]
  int v8; // [sp+18h] [bp-24h]
  int v9; // [sp+1Ch] [bp-20h]
  int v10; // [sp+20h] [bp-1Ch]
  int v11; // [sp+24h] [bp-18h]
  int v12[4]; // [sp+2Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v12) != 0
    && tolua_isnumber(a1, 2, 0, (int)v12)
    && tolua_isnumber(a1, 3, 0, (int)v12)
    && tolua_isnumber(a1, 4, 0, (int)v12)
    && tolua_isnumber(a1, 5, 0, (int)v12)
    && tolua_isnumber(a1, 6, 0, (int)v12)
    && tolua_isnumber(a1, 7, 0, (int)v12)
    && tolua_isnumber(a1, 8, 0, (int)v12)
    && tolua_isnoobj((int)a1, 9, v12) != 0 )
  {
    v3 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v9 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v10 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v11 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 7, 0));
    v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 8, 0));
    if ( v3 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'hasBlockInRange'", nullptr);
    hasBlockInRange = World::hasBlockInRange(v3, v7, v8, v9, v10, v11, v4, v5);
    tolua_pushboolean(__SPAIR64__(hasBlockInRange, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'hasBlockInRange'.", v12);
    return 0;
  }
}


//======================================================================
// sub_27EE40
// address: 0x0027EE40   size: 0xDA (218 bytes)
//======================================================================
int __fastcall sub_27EE40(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  double BlockTorchIllum; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockTorchIllum'", nullptr);
    BlockTorchIllum = (double)(int)World::getBlockTorchIllum(v2, v7, v3, v4);
    tolua_pushnumber((int)a1, SHIDWORD(BlockTorchIllum), SLODWORD(BlockTorchIllum), SHIDWORD(BlockTorchIllum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockTorchIllum'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27EF38
// address: 0x0027EF38   size: 0xDA (218 bytes)
//======================================================================
int __fastcall sub_27EF38(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  double BlockSunIllum; // r0
  int v7; // [sp+Ch] [bp-18h]
  int v8[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockSunIllum'", nullptr);
    BlockSunIllum = (double)(int)World::getBlockSunIllum(v2, v7, v3, v4);
    tolua_pushnumber((int)a1, SHIDWORD(BlockSunIllum), SLODWORD(BlockSunIllum), SHIDWORD(BlockSunIllum));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockSunIllum'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27F030
// address: 0x0027F030   size: 0xE0 (224 bytes)
//======================================================================
int __fastcall sub_27F030(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  double BlockLightValue; // r0
  int v7; // [sp+Ch] [bp-20h]
  int v8[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v9[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockLightValue'", nullptr);
    v9[0] = v7;
    v9[1] = v3;
    v9[2] = v4;
    BlockLightValue = (double)(int)World::getBlockLightValue(v2, (const WCoord *)v9, true);
    tolua_pushnumber((int)a1, SHIDWORD(BlockLightValue), SLODWORD(BlockLightValue), SHIDWORD(BlockLightValue));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockLightValue'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27F128
// address: 0x0027F128   size: 0xDE (222 bytes)
//======================================================================
int __fastcall sub_27F128(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  double FullBlockLightValue; // r0
  int v7; // [sp+Ch] [bp-20h]
  int v8[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v9[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getFullBlockLightValue'", nullptr);
    v9[0] = v7;
    v9[1] = v3;
    v9[2] = v4;
    FullBlockLightValue = (double)(int)World::getFullBlockLightValue(v2, (const WCoord *)v9);
    tolua_pushnumber(
      (int)a1,
      SHIDWORD(FullBlockLightValue),
      SLODWORD(FullBlockLightValue),
      SHIDWORD(FullBlockLightValue));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getFullBlockLightValue'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27F220
// address: 0x0027F220   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_27F220(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  double Heat; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getHeat'", nullptr);
    Heat = (double)(int)World::getHeat(v2, v3, v4);
    tolua_pushnumber((int)a1, SHIDWORD(Heat), SLODWORD(Heat), SHIDWORD(Heat));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getHeat'.", v7);
    return 0;
  }
}


//======================================================================
// sub_27F2F0
// address: 0x0027F2F0   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_27F2F0(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  double Humidity; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getHumidity'", nullptr);
    Humidity = (double)(int)World::getHumidity(v2, v3, v4);
    tolua_pushnumber((int)a1, SHIDWORD(Humidity), SLODWORD(Humidity), SHIDWORD(Humidity));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getHumidity'.", v7);
    return 0;
  }
}


//======================================================================
// sub_27F3C0
// address: 0x0027F3C0   size: 0xF6 (246 bytes)
//======================================================================
int __fastcall sub_27F3C0(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+8h] [bp-24h]
  int v7; // [sp+Ch] [bp-20h]
  int v8[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v9[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnumber(a1, 5, 0, (int)v8)
    && tolua_isnoobj((int)a1, 6, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setBlockData'", nullptr);
    v9[0] = v6;
    v9[2] = v3;
    v9[1] = v7;
    World::setBlockData(v2, (const WCoord *)v9, v4, 3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setBlockData'.", v8);
  }
  return 0;
}


//======================================================================
// sub_27F4D0
// address: 0x0027F4D0   size: 0xDE (222 bytes)
//======================================================================
int __fastcall sub_27F4D0(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  double BlockData; // r0
  int v7; // [sp+Ch] [bp-20h]
  int v8[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v9[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockData'", nullptr);
    v9[0] = v7;
    v9[1] = v3;
    v9[2] = v4;
    BlockData = (double)(int)World::getBlockData(v2, (const WCoord *)v9);
    tolua_pushnumber((int)a1, SHIDWORD(BlockData), SLODWORD(BlockData), SHIDWORD(BlockData));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockData'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27F5C8
// address: 0x0027F5C8   size: 0xF2 (242 bytes)
//======================================================================
int __fastcall sub_27F5C8(_DWORD *a1)
{
  int v2; // r5
  int v3; // r6
  int v5; // [sp+8h] [bp-24h]
  int v6; // [sp+Ch] [bp-20h]
  int v7[7]; // [sp+10h] [bp-1Ch] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnumber(a1, 4, 0, (int)v7)
    && tolua_isboolean(a1, 5, 0, v7) != 0
    && tolua_isnoobj((int)a1, 6, v7) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    tolua_toboolean(a1, 5, false);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'destroyBlock'", nullptr);
    v7[3] = v5;
    v7[4] = v6;
    v7[5] = v3;
    World::destroyBlock(v2);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'destroyBlock'.", v7);
  }
  return 0;
}


//======================================================================
// sub_27F6D8
// address: 0x0027F6D8   size: 0x11E (286 bytes)
//======================================================================
int __fastcall sub_27F6D8(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  int v6; // [sp+Ch] [bp-28h]
  int v7; // [sp+10h] [bp-24h]
  int v8; // [sp+14h] [bp-20h]
  int v9[3]; // [sp+18h] [bp-1Ch] BYREF
  _DWORD v10[4]; // [sp+24h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v9) != 0
    && tolua_isnumber(a1, 2, 0, (int)v9)
    && tolua_isnumber(a1, 3, 0, (int)v9)
    && tolua_isnumber(a1, 4, 0, (int)v9)
    && tolua_isnumber(a1, 5, 0, (int)v9)
    && tolua_isnumber(a1, 6, 0, (int)v9)
    && tolua_isnoobj((int)a1, 7, v9) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'setBlockAll'", nullptr);
    v10[0] = v6;
    v10[1] = v7;
    v10[2] = v8;
    World::setBlockAll(v2, (const WCoord *)v10, v3, v4, 3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'setBlockAll'.", v9);
  }
  return 0;
}


//======================================================================
// sub_27F810
// address: 0x0027F810   size: 0x138 (312 bytes)
//======================================================================
int __fastcall sub_27F810(_DWORD *a1)
{
  World *v3; // r5
  int v4; // r6
  int v5; // r7
  int v6; // [sp+8h] [bp-2Ch]
  int v7; // [sp+Ch] [bp-28h]
  int v8; // [sp+10h] [bp-24h]
  int v9; // [sp+14h] [bp-20h]
  int v10[3]; // [sp+18h] [bp-1Ch] BYREF
  _DWORD v11[4]; // [sp+24h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v10) == 0
    || !tolua_isnumber(a1, 2, 0, (int)v10)
    || !tolua_isnumber(a1, 3, 0, (int)v10)
    || !tolua_isnumber(a1, 4, 0, (int)v10)
    || !tolua_isnumber(a1, 5, 0, (int)v10)
    || !tolua_isnumber(a1, 6, 0, (int)v10)
    || !tolua_isnumber(a1, 7, 0, (int)v10)
    || tolua_isnoobj((int)a1, 8, v10) == 0 )
  {
    return sub_27F6D8(a1);
  }
  v3 = (World *)tolua_tousertype(a1, 1, 0);
  v6 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
  v8 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
  v9 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 5, 0));
  v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 6, 0));
  v5 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 7, 0));
  if ( v3 == nullptr )
    tolua_error(a1, "invalid 'self' in function 'setBlockAll'", nullptr);
  v11[0] = v6;
  v11[1] = v7;
  v11[2] = v8;
  World::setBlockAll(v3, (const WCoord *)v11, v9, v4, v5);
  return 0;
}


//======================================================================
// sub_27F958
// address: 0x0027F958   size: 0xDE (222 bytes)
//======================================================================
int __fastcall sub_27F958(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  double BlockID; // r0
  int v7; // [sp+Ch] [bp-20h]
  int v8[3]; // [sp+10h] [bp-1Ch] BYREF
  _DWORD v9[4]; // [sp+1Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v8) != 0
    && tolua_isnumber(a1, 2, 0, (int)v8)
    && tolua_isnumber(a1, 3, 0, (int)v8)
    && tolua_isnumber(a1, 4, 0, (int)v8)
    && tolua_isnoobj((int)a1, 5, v8) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v7 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 4, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getBlockID'", nullptr);
    v9[0] = v7;
    v9[1] = v3;
    v9[2] = v4;
    BlockID = (double)(int)World::getBlockID(v2, (const WCoord *)v9);
    tolua_pushnumber((int)a1, SHIDWORD(BlockID), SLODWORD(BlockID), SHIDWORD(BlockID));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBlockID'.", v8);
    return 0;
  }
}


//======================================================================
// sub_27FA50
// address: 0x0027FA50   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall sub_27FA50(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  int v4; // r7
  double v5; // r0
  int v7[4]; // [sp+Ch] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnumber(a1, 3, 0, (int)v7)
    && tolua_isnoobj((int)a1, 4, v7) != 0 )
  {
    v2 = (World *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    v4 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 3, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'genRandomInt'", nullptr);
    v5 = (double)(int)World::genRandomInt(v2, v3, v4);
    tolua_pushnumber((int)a1, SHIDWORD(v5), SLODWORD(v5), SHIDWORD(v5));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'genRandomInt'.", v7);
    return 0;
  }
}


//======================================================================
// sub_27FB20
// address: 0x0027FB20   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_27FB20(_DWORD *a1)
{
  World *v2; // r5
  int v3; // r6
  double v4; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "World", 0, v6) == 0
    || !tolua_isnumber(a1, 2, 0, (int)v6)
    || tolua_isnoobj((int)a1, 3, v6) == 0 )
  {
    return sub_27FA50(a1);
  }
  v2 = (World *)tolua_tousertype(a1, 1, 0);
  v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
  if ( v2 == nullptr )
    tolua_error(a1, "invalid 'self' in function 'genRandomInt'", nullptr);
  v4 = (double)(int)World::genRandomInt(v2, 0, v3 - 1);
  tolua_pushnumber((int)a1, SHIDWORD(v4), SLODWORD(v4), SHIDWORD(v4));
  return 1;
}


//======================================================================
// sub_27FBC0
// address: 0x0027FBC0   size: 0x90 (144 bytes)
//======================================================================
int __fastcall sub_27FBC0(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r7
  int v3; // r4
  int SelectRole; // r0
  int v5; // r3
  int v7[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getSelectRole'", nullptr);
    SelectRole = ClientBuddyMgr::getSelectRole(v2, v3);
    tolua_pushusertype(a1, SelectRole, "ActorBody", v5);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getSelectRole'.", v7);
    return 0;
  }
}


//======================================================================
// sub_27FC68
// address: 0x0027FC68   size: 0xA2 (162 bytes)
//======================================================================
int __fastcall sub_27FC68(_DWORD *a1)
{
  int v2; // r7
  _QWORD *v3; // r0
  __int64 v4; // kr00_8
  __int64 v6; // [sp+Ch] [bp-18h] BYREF
  int v7[4]; // [sp+14h] [bp-10h] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v7) != 0
    && tolua_isnumber(a1, 2, 0, (int)v7)
    && tolua_isnoobj((int)a1, 3, v7) != 0 )
  {
    v2 = tolua_tousertype(a1, 1, 0);
    tolua_tonumber(a1, 2, 0);
    if ( v2 == 0 )
      tolua_error(a1, "invalid 'self' in function 'getBuddyFindInfo'", nullptr);
    ClientBuddyMgr::getBuddyFindInfo((ClientBuddyMgr *)&v6, v2);
    v3 = (_QWORD *)operator new(8u);
    v4 = v6;
    *v3 = v6;
    tolua_pushusertype_and_takeownership(a1, (int)v3, "NearbyPlayerInfo", v4);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getBuddyFindInfo'.", v7);
    return 0;
  }
}


//======================================================================
// sub_27FD28
// address: 0x0027FD28   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_27FD28(_DWORD *a1)
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
      tolua_error(a1, "invalid 'self' in function 'clearCurChatBuddyNoReadNum'", nullptr);
    ClientBuddyMgr::clearCurChatBuddyNoReadNum(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearCurChatBuddyNoReadNum'.", v5);
  }
  return 0;
}


//======================================================================
// sub_27FDC8
// address: 0x0027FDC8   size: 0x82 (130 bytes)
//======================================================================
int __fastcall sub_27FDC8(_DWORD *a1)
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
      tolua_error(a1, "invalid 'self' in function 'clearNoReadMsgForUin'", nullptr);
    ClientBuddyMgr::clearNoReadMsgForUin(v2, v3);
  }
  else
  {
    tolua_error(a1, "#ferror in function 'clearNoReadMsgForUin'.", v5);
  }
  return 0;
}


//======================================================================
// sub_27FE68
// address: 0x0027FE68   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_27FE68(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r5
  int v3; // r6
  double MsgNumForUin; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getChatNoReadMsgNumForUin'", nullptr);
    MsgNumForUin = (double)(int)ClientBuddyMgr::getChatNoReadMsgNumForUin(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(MsgNumForUin), SLODWORD(MsgNumForUin), SHIDWORD(MsgNumForUin));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getChatNoReadMsgNumForUin'.", v6);
    return 0;
  }
}


//======================================================================
// sub_27FF18
// address: 0x0027FF18   size: 0x92 (146 bytes)
//======================================================================
int __fastcall sub_27FF18(_DWORD *a1)
{
  ClientBuddyMgr *v2; // r5
  int v3; // r6
  double ChatMsgNumForUin; // r0
  int v6[3]; // [sp+Ch] [bp-Ch] BYREF

  if ( tolua_isusertype(a1, 1, "ClientBuddyMgr", 0, v6) != 0
    && tolua_isnumber(a1, 2, 0, (int)v6)
    && tolua_isnoobj((int)a1, 3, v6) != 0 )
  {
    v2 = (ClientBuddyMgr *)tolua_tousertype(a1, 1, 0);
    v3 = (int)COERCE_DOUBLE(tolua_tonumber(a1, 2, 0));
    if ( v2 == nullptr )
      tolua_error(a1, "invalid 'self' in function 'getChatMsgNumForUin'", nullptr);
    ChatMsgNumForUin = (double)(int)ClientBuddyMgr::getChatMsgNumForUin(v2, v3);
    tolua_pushnumber((int)a1, SHIDWORD(ChatMsgNumForUin), SLODWORD(ChatMsgNumForUin), SHIDWORD(ChatMsgNumForUin));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getChatMsgNumForUin'.", v6);
    return 0;
  }
}


//======================================================================
// sub_27FFC8
// address: 0x0027FFC8   size: 0x8C (140 bytes)
//======================================================================
int __fastcall sub_27FFC8(_DWORD *a1)
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
      tolua_error(a1, "invalid 'self' in function 'buddyAttentionDel'", nullptr);
    v4 = ClientBuddyMgr::buddyAttentionDel(v2, v3);
    tolua_pushboolean(__SPAIR64__(v4, (unsigned int)a1));
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'buddyAttentionDel'.", v6);
    return 0;
  }
}

