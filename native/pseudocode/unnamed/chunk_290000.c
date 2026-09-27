// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: unnamed::chunk_290000

//======================================================================
// sub_296632
// address: 0x00296632   size: 0x1E (30 bytes)
//======================================================================
int __fastcall sub_296632(_DWORD *a1)
{
  int v1; // r0
  void *v2; // r4

  v1 = tolua_tousertype(a1, 1, 0);
  v2 = (void *)v1;
  if ( v1 != 0 )
  {
    std::_Vector_base<BuddyAchievement>::~_Vector_base((void **)(v1 + 8));
    operator delete(v2);
  }
  return 0;
}


//======================================================================
// sub_296708
// address: 0x00296708   size: 0x64 (100 bytes)
//======================================================================
int __fastcall sub_296708(_DWORD *a1)
{
  int v2; // r4
  _DWORD *v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_achievementinfo'", nullptr);
  if ( tolua_isusertype(a1, 2, "BuddyAchievementInfo", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (_DWORD *)tolua_tousertype(a1, 2, 0);
  *(_DWORD *)(v2 + 32) = *v3;
  *(_DWORD *)(v2 + 36) = v3[1];
  std::vector<BuddyAchievement>::operator=(v2 + 40, (int)(v3 + 2));
  return 0;
}


//======================================================================
// sub_296778
// address: 0x00296778   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_296778(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'achievement'", nullptr);
  if ( tolua_isusertype(a1, 2, "std::vector<BuddyAchievement>", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = tolua_tousertype(a1, 2, 0);
  std::vector<BuddyAchievement>::operator=(v2 + 8, v3);
  return 0;
}


//======================================================================
// sub_2967E0
// address: 0x002967E0   size: 0xD4 (212 bytes)
//======================================================================
int __fastcall sub_2967E0(_DWORD *a1)
{
  _DWORD *v3; // r0
  _DWORD *v4; // r4
  unsigned int v5; // r2
  int v6; // r7
  int v7; // r1
  int v8; // r3
  int v9[3]; // [sp+8h] [bp-24h] BYREF
  __int64 v10; // [sp+14h] [bp-18h] BYREF
  void *v11; // [sp+1Ch] [bp-10h] BYREF
  int v12; // [sp+20h] [bp-Ch]

  if ( tolua_isusertype(a1, 1, "BuddyInfo", 0, v9) != 0 && tolua_isnoobj((int)a1, 2, v9) != 0 )
  {
    if ( tolua_tousertype(a1, 1, 0) == 0 )
      tolua_error(a1, "invalid 'self' in function 'getAchievementInfo'", nullptr);
    BuddyInfo::getAchievementInfo((BuddyInfo *)&v10);
    v3 = (_DWORD *)operator new(0x14u);
    v4 = v3;
    *(_QWORD *)v3 = v10;
    v5 = (v12 - (int)v11) >> 3;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    v6 = 8 * v5;
    if ( v5 != 0 )
    {
      if ( v5 > 0x1FFFFFFF )
        sub_3BCEB4(v3);
      v5 = operator new(8 * v5);
    }
    v4[2] = v5;
    v4[3] = v5;
    v7 = v12;
    v4[4] = v5 + v6;
    v4[3] = std::__copy_move<false,true,std::random_access_iterator_tag>::__copy_m<BuddyAchievement>(
              v11,
              v7,
              (void *)v5);
    tolua_pushusertype_and_takeownership(a1, (int)v4, "BuddyAchievementInfo", v8);
    std::_Vector_base<BuddyAchievement>::~_Vector_base(&v11);
    return 1;
  }
  else
  {
    tolua_error(a1, "#ferror in function 'getAchievementInfo'.", v9);
    return 0;
  }
}


//======================================================================
// sub_296AB4
// address: 0x00296AB4   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_296AB4(_DWORD *a1)
{
  int v2; // r5
  const BuddyWorldDesc **v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_worlddesc'", nullptr);
  if ( tolua_isusertype(a1, 2, "std::vector<BuddyWorldDesc>", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = (const BuddyWorldDesc **)tolua_tousertype(a1, 2, 0);
  std::vector<BuddyWorldDesc>::operator=(v2 + 56, v3);
  return 0;
}


//======================================================================
// sub_296C0C
// address: 0x00296C0C   size: 0x5A (90 bytes)
//======================================================================
int __fastcall sub_296C0C(_DWORD *a1)
{
  int v2; // r5
  int v3; // r0
  int v5[3]; // [sp+Ch] [bp-Ch] BYREF

  v2 = tolua_tousertype(a1, 1, 0);
  if ( v2 == 0 )
    tolua_error(a1, "invalid 'self' in accessing variable 'm_oworld'", nullptr);
  if ( tolua_isusertype(a1, 2, "std::vector<OWORLD>", 0, v5) == 0 )
    tolua_error(a1, "#vinvalid type in variable assignment.", v5);
  v3 = tolua_tousertype(a1, 2, 0);
  std::vector<tagOWorld>::operator=(v2 + 68, v3);
  return 0;
}


//======================================================================
// sub_297660
// address: 0x00297660   size: 0xA (10 bytes)
//======================================================================
double __fastcall sub_297660(const char *a1)
{
  return j_strtod(a1, nullptr);
}


//======================================================================
// sub_298964
// address: 0x00298964   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_298964(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_298970
// address: 0x00298970   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_298970(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_29DEA0
// address: 0x0029DEA0   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_29DEA0(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_29DEAC
// address: 0x0029DEAC   size: 0xC (12 bytes)
//======================================================================
void __fastcall sub_29DEAC(void *a1)
{
  if ( a1 != nullptr )
    operator delete(a1);
}


//======================================================================
// sub_29FE48
// address: 0x0029FE48   size: 0x78 (120 bytes)
//======================================================================
int __fastcall sub_29FE48(int a1, World *this, WCoord *a3, int a4)
{
  int BlockDef; // r6
  int v8; // r3
  int Material; // r0

  if ( a1 == 112 )
    return 0;
  if ( (unsigned int)(a1 - 718) <= 1 )
  {
    if ( (World::getBlockData(this, a3) & 8) == 0 )
      goto LABEL_7;
    return 0;
  }
  BlockDef = DefManager::getBlockDef((DefManager *)Ogre::Singleton<DefManager>::ms_Singleton, a1);
  if ( *(float *)(BlockDef + 36) == -1.0 )
    return 0;
  BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a1);
  v8 = *(_DWORD *)(BlockDef + 20);
  if ( v8 == 2 )
    return 0;
  if ( v8 != 1 )
  {
LABEL_7:
    Material = BlockMaterialMgr::getMaterial((BlockMaterialMgr *)Ogre::Singleton<BlockMaterialMgr>::ms_Singleton, a1);
    return (*(unsigned __int8 (__fastcall **)(int))(*(_DWORD *)Material + 84))(Material) ^ 1;
  }
  return a4;
}

