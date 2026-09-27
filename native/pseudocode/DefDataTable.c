// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: DefDataTable

//======================================================================
// DefDataTable<MonsterDef>::GetRecord(int)
// address: 0x0029E4C4   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall DefDataTable<MonsterDef>::GetRecord(int a1, int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  _DWORD *v4; // r2
  _DWORD *v5; // r4
  _DWORD *result; // r0

  v2 = (_DWORD *)(a1 + 4);
  v3 = (_DWORD *)v2[1];
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = v4;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return nullptr;
  result = nullptr;
  if ( a2 >= v4[4] )
    return v4 + 5;
  return result;
}


//======================================================================
// DefDataTable<OreDef>::AddRecord(int,OreDef&)
// address: 0x002AA8F0   size: 0x60 (96 bytes)
//======================================================================
int __fastcall DefDataTable<OreDef>::AddRecord(_DWORD *a1, int a2, int *a3)
{
  _DWORD *v3; // r3
  _DWORD *v6; // r1
  _DWORD *v7; // r6
  int *v8; // r1
  int *v9; // r2
  int v10; // r5
  int v11; // r6
  int v12; // r3
  int v13; // r4
  int v14; // r5
  int result; // r0
  int v16; // r3
  int v17; // r6
  int v18; // [sp+Ch] [bp-Ch] BYREF
  int *v19; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v18 = a2;
  v6 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v7 = (_DWORD *)v3[3];
      v3 = v6;
    }
    else
    {
      v7 = (_DWORD *)v3[2];
    }
    v6 = v3;
    v3 = v7;
  }
  if ( v6 == a1 + 1 || a2 < v6[4] )
  {
    v19 = &v18;
    v6 = std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v6,
           (int)&unk_4461E0,
           &v19);
  }
  v8 = v6 + 5;
  v10 = a3[1];
  v11 = a3[2];
  v9 = a3 + 3;
  *v8 = *a3;
  v8[1] = v10;
  v8[2] = v11;
  v8 += 3;
  v12 = a3[3];
  v13 = a3[4];
  v14 = v9[2];
  v9 += 3;
  *v8 = v12;
  v8[1] = v13;
  v8[2] = v14;
  v8 += 3;
  result = *v9;
  v16 = v9[1];
  v17 = v9[2];
  *v8 = *v9;
  v8[1] = v16;
  v8[2] = v17;
  v8[3] = v9[3];
  return result;
}


//======================================================================
// DefDataTable<TreeDef>::AddRecord(int,TreeDef&)
// address: 0x002AAAB8   size: 0x5A (90 bytes)
//======================================================================
void *__fastcall DefDataTable<TreeDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x1B8u);
}


//======================================================================
// DefDataTable<ToolDef>::AddRecord(int,ToolDef&)
// address: 0x002AAC78   size: 0x58 (88 bytes)
//======================================================================
void *__fastcall DefDataTable<ToolDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x7Cu);
}


//======================================================================
// DefDataTable<CraftingDef>::AddRecord(int,CraftingDef&)
// address: 0x002AAE34   size: 0x58 (88 bytes)
//======================================================================
void *__fastcall DefDataTable<CraftingDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x70u);
}


//======================================================================
// DefDataTable<MonsterDef>::AddRecord(int,MonsterDef&)
// address: 0x002AAFF4   size: 0x5A (90 bytes)
//======================================================================
void *__fastcall DefDataTable<MonsterDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x1F4u);
}


//======================================================================
// DefDataTable<FoodDef>::AddRecord(int,FoodDef&)
// address: 0x002AB1B4   size: 0x58 (88 bytes)
//======================================================================
void *__fastcall DefDataTable<FoodDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x4Cu);
}


//======================================================================
// DefDataTable<BuffDef>::AddRecord(int,BuffDef&)
// address: 0x002AB374   size: 0x5A (90 bytes)
//======================================================================
void *__fastcall DefDataTable<BuffDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x1E4u);
}


//======================================================================
// DefDataTable<FurnaceDef>::AddRecord(int,FurnaceDef&)
// address: 0x002AB534   size: 0x58 (88 bytes)
//======================================================================
void *__fastcall DefDataTable<FurnaceDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x34u);
}


//======================================================================
// DefDataTable<AchievementDef>::AddRecord(int,AchievementDef&)
// address: 0x002AB6F4   size: 0x5A (90 bytes)
//======================================================================
void *__fastcall DefDataTable<AchievementDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x374u);
}


//======================================================================
// DefDataTable<EnchantDef>::AddRecord(int,EnchantDef&)
// address: 0x002AB8B8   size: 0x5A (90 bytes)
//======================================================================
void *__fastcall DefDataTable<EnchantDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x174u);
}


//======================================================================
// DefDataTable<EnchantMentDef>::AddRecord(int,EnchantMentDef&)
// address: 0x002ABA78   size: 0x58 (88 bytes)
//======================================================================
void *__fastcall DefDataTable<EnchantMentDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x64u);
}


//======================================================================
// DefDataTable<StringDef>::AddRecord(int,StringDef&)
// address: 0x002ABC30   size: 0x58 (88 bytes)
//======================================================================
_DWORD *__fastcall DefDataTable<StringDef>::AddRecord(_DWORD *result, int a2, _DWORD *a3)
{
  _DWORD *v3; // r3
  _DWORD *v6; // r1
  _DWORD *v7; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)result[2];
  v8 = a2;
  v6 = result + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v7 = (_DWORD *)v3[3];
      v3 = v6;
    }
    else
    {
      v7 = (_DWORD *)v3[2];
    }
    v6 = v3;
    v3 = v7;
  }
  if ( v6 == result + 1 || a2 < v6[4] )
  {
    v9 = &v8;
    result = std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
               result,
               (int)v6,
               (int)&unk_4461E0,
               &v9);
    v6 = result;
  }
  v6[5] = *a3;
  v6[6] = a3[1];
  v6[7] = a3[2];
  return result;
}


//======================================================================
// DefDataTable<ChestDef>::AddRecord(int,ChestDef&)
// address: 0x002ABDEC   size: 0x58 (88 bytes)
//======================================================================
void *__fastcall DefDataTable<ChestDef>::AddRecord(_DWORD *a1, int a2, void *a3)
{
  _DWORD *v3; // r4
  _DWORD *v5; // r3
  _DWORD *v6; // r6
  int v8; // [sp+Ch] [bp-Ch] BYREF
  int *v9; // [sp+14h] [bp-4h] BYREF

  v3 = (_DWORD *)a1[2];
  v8 = a2;
  v5 = a1 + 1;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v6 = (_DWORD *)v3[3];
      v3 = v5;
    }
    else
    {
      v6 = (_DWORD *)v3[2];
    }
    v5 = v3;
    v3 = v6;
  }
  if ( v5 == a1 + 1 || a2 < v5[4] )
  {
    v9 = &v8;
    v5 = std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
           a1,
           (int)v5,
           (int)&unk_4461E0,
           &v9);
  }
  return j_memcpy(v5 + 5, a3, 0x88u);
}


//======================================================================
// DefDataTable<FurnaceDef>::GetRecord(int)
// address: 0x002F9954   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall DefDataTable<FurnaceDef>::GetRecord(int a1, int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  _DWORD *v4; // r2
  _DWORD *v5; // r4
  _DWORD *result; // r0

  v2 = (_DWORD *)(a1 + 4);
  v3 = (_DWORD *)v2[1];
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = v4;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return nullptr;
  result = nullptr;
  if ( a2 >= v4[4] )
    return v4 + 5;
  return result;
}


//======================================================================
// DefDataTable<ToolDef>::GetRecord(int)
// address: 0x002FAD2A   size: 0x36 (54 bytes)
//======================================================================
_DWORD *__fastcall DefDataTable<ToolDef>::GetRecord(int a1, int a2)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r3
  _DWORD *v4; // r2
  _DWORD *v5; // r4
  _DWORD *result; // r0

  v2 = (_DWORD *)(a1 + 4);
  v3 = (_DWORD *)v2[1];
  v4 = v2;
  while ( v3 != nullptr )
  {
    if ( v3[4] < a2 )
    {
      v5 = (_DWORD *)v3[3];
      v3 = v4;
    }
    else
    {
      v5 = (_DWORD *)v3[2];
    }
    v4 = v3;
    v3 = v5;
  }
  if ( v4 == v2 )
    return nullptr;
  result = nullptr;
  if ( a2 >= v4[4] )
    return v4 + 5;
  return result;
}

