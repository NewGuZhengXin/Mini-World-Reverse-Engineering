// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::_Rb_tree_iterator

//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,OreDef>> std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,OreDef>>)
// address: 0x002AA7E8   size: 0x106 (262 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi6OreDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x3Cu);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x28u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,OreDef>,std::_Select1st<std::pair<int const,OreDef>>,std::less<int>,std::allocator<std::pair<int const,OreDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,TreeDef>> std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,TreeDef>>)
// address: 0x002AA9AE   size: 0x10A (266 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi7TreeDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x1CCu);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x1B8u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,TreeDef>,std::_Select1st<std::pair<int const,TreeDef>>,std::less<int>,std::allocator<std::pair<int const,TreeDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,ToolDef>> std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,ToolDef>>)
// address: 0x002AAB72   size: 0x106 (262 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi7ToolDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x90u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x7Cu);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,ToolDef>,std::_Select1st<std::pair<int const,ToolDef>>,std::less<int>,std::allocator<std::pair<int const,ToolDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,CraftingDef>> std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,CraftingDef>>)
// address: 0x002AAD2E   size: 0x106 (262 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi11CraftingDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x84u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x70u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,CraftingDef>,std::_Select1st<std::pair<int const,CraftingDef>>,std::less<int>,std::allocator<std::pair<int const,CraftingDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,MonsterDef>> std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,MonsterDef>>)
// address: 0x002AAEEA   size: 0x10A (266 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi10MonsterDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x208u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x1F4u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,MonsterDef>,std::_Select1st<std::pair<int const,MonsterDef>>,std::less<int>,std::allocator<std::pair<int const,MonsterDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,FoodDef>> std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,FoodDef>>)
// address: 0x002AB0AE   size: 0x106 (262 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi7FoodDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x60u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x4Cu);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,FoodDef>,std::_Select1st<std::pair<int const,FoodDef>>,std::less<int>,std::allocator<std::pair<int const,FoodDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,BuffDef>> std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,BuffDef>>)
// address: 0x002AB26A   size: 0x10A (266 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi7BuffDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x1F8u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x1E4u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,BuffDef>,std::_Select1st<std::pair<int const,BuffDef>>,std::less<int>,std::allocator<std::pair<int const,BuffDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,FurnaceDef>> std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,FurnaceDef>>)
// address: 0x002AB42E   size: 0x106 (262 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi10FurnaceDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x48u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x34u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,FurnaceDef>,std::_Select1st<std::pair<int const,FurnaceDef>>,std::less<int>,std::allocator<std::pair<int const,FurnaceDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,AchievementDef>> std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,AchievementDef>>)
// address: 0x002AB5EA   size: 0x10A (266 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi14AchievementDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x388u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x374u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,AchievementDef>,std::_Select1st<std::pair<int const,AchievementDef>>,std::less<int>,std::allocator<std::pair<int const,AchievementDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,EnchantDef>> std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,EnchantDef>>)
// address: 0x002AB7AE   size: 0x10A (266 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi10EnchantDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x188u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x174u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,EnchantDef>,std::_Select1st<std::pair<int const,EnchantDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,EnchantMentDef>> std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,EnchantMentDef>>)
// address: 0x002AB972   size: 0x106 (262 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi14EnchantMentDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x78u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x64u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,EnchantMentDef>,std::_Select1st<std::pair<int const,EnchantMentDef>>,std::less<int>,std::allocator<std::pair<int const,EnchantMentDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,StringDef>> std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,StringDef>>)
// address: 0x002ABB2E   size: 0x102 (258 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi9StringDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x20u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    v8[5] = 0;
    v8[6] = 0;
    v8[7] = 0;
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,StringDef>,std::_Select1st<std::pair<int const,StringDef>>,std::less<int>,std::allocator<std::pair<int const,StringDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,ChestDef>> std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,ChestDef>>)
// address: 0x002ABCE6   size: 0x106 (262 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKi8ChestDefESt10_Select1stIS3_ESt4lessIiESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x9Cu);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x88u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,ChestDef>,std::_Select1st<std::pair<int const,ChestDef>>,std::less<int>,std::allocator<std::pair<int const,ChestDef>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<long long const,ClientWorld::BlockCrackEffect>> std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<long long const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<long long const,ClientWorld::BlockCrackEffect>>)
// address: 0x002B215A   size: 0x14E (334 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIxSt4pairIKxN11ClientWorld16BlockCrackEffectEESt10_Select1stIS4_ESt4lessIxESaIS4_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESF_IJEEEEESt17_Rb_tree_iteratorIS4_ESt23_Rb_tree_const_iteratorIS4_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<long long const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r4
  int v9; // r2
  int v10; // r7
  int v11; // r2
  __int64 v12; // r2
  int v13; // r0
  int v14; // r0
  _BOOL4 v15; // r0
  unsigned int v17; // [sp+0h] [bp-1Ch]
  unsigned int v18; // [sp+4h] [bp-18h]
  _QWORD *v19; // [sp+8h] [bp-14h]
  _DWORD *v20; // [sp+Ch] [bp-10h]
  int v21; // [sp+10h] [bp-Ch] BYREF
  int v22; // [sp+14h] [bp-8h]

  v7 = (_DWORD *)operator new(0x20u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v9 = (*a4)[1];
    v8[4] = **a4;
    v8[5] = v9;
    v8[6] = 0;
  }
  v19 = v8 + 4;
  v10 = a2;
  v20 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v11 = a1[4];
      if ( *((_QWORD *)v8 + 2) > *(_QWORD *)(v11 + 16) )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_get_insert_unique_pos(
      &v21,
      (int)a1,
      v19);
    v10 = v21;
    v11 = v22;
    goto LABEL_22;
  }
  v17 = v8[5];
  v12 = *(_QWORD *)(a2 + 16);
  v18 = v8[4];
  if ( v12 <= __SPAIR64__(v17, v18) )
  {
    if ( __SPAIR64__(v17, v18) <= v12 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v14 = 0;
    }
    else
    {
      v14 = sub_391DDC(a2);
      if ( *(_QWORD *)(v14 + 16) <= __SPAIR64__(v17, v18) )
      {
        std::_Rb_tree<long long,std::pair<long long const,ClientWorld::BlockCrackEffect>,std::_Select1st<std::pair<long long const,ClientWorld::BlockCrackEffect>>,std::less<long long>,std::allocator<std::pair<long long const,ClientWorld::BlockCrackEffect>>>::_M_get_insert_unique_pos(
          &v21,
          (int)a1,
          v19);
        v14 = v21;
        v10 = v22;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        v10 = v14;
      }
      else
      {
        v14 = 0;
      }
    }
    v11 = v10;
    v10 = v14;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v11 = a2;
      goto LABEL_22;
    }
    v13 = sub_391E44(a2);
    v11 = v13;
    if ( *(_QWORD *)(v13 + 16) >= __SPAIR64__(v17, v18) )
      goto LABEL_29;
    if ( *(_DWORD *)(v13 + 12) != 0 )
      v11 = a2;
    else
      v10 = 0;
  }
LABEL_22:
  if ( v11 != 0 )
  {
    v15 = true;
    if ( v10 != 0 )
    {
LABEL_27:
      sub_391E64(v15, v8, v11, v20);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v15 = (_DWORD *)v11 == v20 || *(_QWORD *)(v11 + 16) > *((_QWORD *)v8 + 2);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)v10;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<std::string const,int>> std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::string const,int>>)
// address: 0x002B640C   size: 0x142 (322 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeISsSt4pairIKSsiESt10_Select1stIS2_ESt4lessISsESaIS2_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOSsEESD_IJEEEEESt17_Rb_tree_iteratorIS2_ESt23_Rb_tree_const_iteratorIS2_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r2
  int v9; // r7
  unsigned int v10; // r0
  int v12; // [sp+4h] [bp-18h]
  _DWORD *v13; // [sp+8h] [bp-14h]
  _DWORD *v14; // [sp+Ch] [bp-10h]
  int v15; // [sp+10h] [bp-Ch] BYREF
  int v16; // [sp+14h] [bp-8h]

  v7 = (_DWORD *)operator new(0x18u);
  v13 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8 = *a4;
    v13[4] = **a4;
    *v8 = &byte_55FB88;
    v13[5] = 0;
  }
  v14 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      a2 = a1[4];
      if ( std::operator<<char>() != 0 )
      {
        if ( a2 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_unique_pos(
      &v15,
      (int)a1);
    v9 = v15;
    a2 = v16;
    goto LABEL_22;
  }
  if ( std::operator<<char>() != 0 )
  {
    if ( a1[3] != a2 )
    {
      v12 = sub_391E44(a2);
      if ( std::operator<<char>() == 0 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_unique_pos(
          &v15,
          (int)a1);
        a2 = v15;
        v12 = v16;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v12 + 12) == 0 )
      {
        a2 = 0;
LABEL_14:
        v9 = a2;
        a2 = v12;
        goto LABEL_22;
      }
    }
    v12 = a2;
    goto LABEL_14;
  }
  if ( std::operator<<char>() == 0 )
    goto LABEL_29;
  if ( a1[4] != a2 )
  {
    v9 = sub_391DDC(a2);
    if ( std::operator<<char>() != 0 )
    {
      if ( *(_DWORD *)(a2 + 12) != 0 )
        a2 = v9;
      else
        v9 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v9 = 0;
LABEL_22:
  if ( a2 != 0 )
  {
    v10 = 1;
    if ( v9 != 0 )
    {
LABEL_27:
      sub_391E64(v10, v13, a2, v14);
      ++a1[5];
      return v13;
    }
LABEL_24:
    if ( (_DWORD *)a2 == v14 )
      v10 = 1;
    else
      v10 = std::operator<<char>();
    goto LABEL_27;
  }
  a2 = v9;
LABEL_29:
  sub_3BDF80(v13 + 4);
  operator delete(v13);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<tinyobj::vertex_index const,unsigned int>> std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<tinyobj::vertex_index const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<tinyobj::vertex_index const,unsigned int>>)
// address: 0x002B676A   size: 0x136 (310 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIN7tinyobj12vertex_indexESt4pairIKS1_jESt10_Select1stIS4_ESt4lessIS1_ESaIS4_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESF_IJEEEEESt17_Rb_tree_iteratorIS4_ESt23_Rb_tree_const_iteratorIS4_EDpOT_'
int *__fastcall std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<tinyobj::vertex_index const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        int **a4)
{
  int *v7; // r0
  int *v8; // r5
  int *v9; // r3
  int v10; // r7
  _BOOL4 v11; // r0
  int *v13; // [sp+4h] [bp-18h]
  int v14; // [sp+8h] [bp-14h]
  _DWORD *v15; // [sp+Ch] [bp-10h]
  int v16; // [sp+10h] [bp-Ch] BYREF
  int v17; // [sp+14h] [bp-8h]

  v7 = (int *)operator new(0x20u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v9 = *a4;
    v8[4] = **a4;
    v8[5] = v9[1];
    v8[6] = v9[2];
    v8[7] = 0;
  }
  v13 = v8 + 4;
  v15 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      a2 = a1[4];
      if ( sub_2B5D08((int *)(a2 + 16), v13) )
      {
        if ( a2 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_get_insert_unique_pos(
      &v16,
      (int)a1,
      v13);
    v10 = v16;
    a2 = v17;
    goto LABEL_22;
  }
  if ( sub_2B5D08(v13, (int *)(a2 + 16)) )
  {
    if ( a1[3] != a2 )
    {
      v14 = sub_391E44(a2);
      if ( !sub_2B5D08((int *)(v14 + 16), v13) )
      {
        std::_Rb_tree<tinyobj::vertex_index,std::pair<tinyobj::vertex_index const,unsigned int>,std::_Select1st<std::pair<tinyobj::vertex_index const,unsigned int>>,std::less<tinyobj::vertex_index>,std::allocator<std::pair<tinyobj::vertex_index const,unsigned int>>>::_M_get_insert_unique_pos(
          &v16,
          (int)a1,
          v13);
        a2 = v16;
        v14 = v17;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v14 + 12) == 0 )
      {
        a2 = 0;
LABEL_14:
        v10 = a2;
        a2 = v14;
        goto LABEL_22;
      }
    }
    v14 = a2;
    goto LABEL_14;
  }
  if ( !sub_2B5D08((int *)(a2 + 16), v13) )
    goto LABEL_29;
  if ( a1[4] != a2 )
  {
    v10 = sub_391DDC(a2);
    if ( sub_2B5D08(v13, (int *)(v10 + 16)) )
    {
      if ( *(_DWORD *)(a2 + 12) != 0 )
        a2 = v10;
      else
        v10 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v10 = 0;
LABEL_22:
  if ( a2 != 0 )
  {
    v11 = true;
    if ( v10 != 0 )
    {
LABEL_27:
      sub_391E64(v11, v8, a2, v15);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v11 = (_DWORD *)a2 == v15 || sub_2B5D08(v13, (int *)(a2 + 16));
    goto LABEL_27;
  }
  a2 = v10;
LABEL_29:
  operator delete(v8);
  return (int *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<ChunkIndex const,StructureStart *>> std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<ChunkIndex&&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<ChunkIndex const,StructureStart *>>)
// address: 0x002BD63E   size: 0x132 (306 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeI10ChunkIndexSt4pairIKS0_P14StructureStartESt10_Select1stIS5_ESt4lessIS0_ESaIS5_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESG_IJEEEEESt17_Rb_tree_iteratorIS5_ESt23_Rb_tree_const_iteratorIS5_EDpOT_'
int *__fastcall std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<ChunkIndex&&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        int **a4)
{
  int *v7; // r0
  int *v8; // r6
  int *v9; // r3
  int v10; // r7
  _BOOL4 v11; // r0
  int *v13; // [sp+4h] [bp-18h]
  int v14; // [sp+8h] [bp-14h]
  _DWORD *v15; // [sp+Ch] [bp-10h]
  int v16; // [sp+10h] [bp-Ch] BYREF
  int v17; // [sp+14h] [bp-8h]

  v7 = (int *)operator new(0x1Cu);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v9 = *a4;
    v8[4] = **a4;
    v8[5] = v9[1];
    v8[6] = 0;
  }
  v13 = v8 + 4;
  v15 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      a2 = a1[4];
      if ( sub_2BD1F0((int *)(a2 + 16), v13) )
      {
        if ( a2 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_get_insert_unique_pos(
      &v16,
      (int)a1,
      v13);
    v10 = v16;
    a2 = v17;
    goto LABEL_22;
  }
  if ( sub_2BD1F0(v13, (int *)(a2 + 16)) )
  {
    if ( a1[3] != a2 )
    {
      v14 = sub_391E44(a2);
      if ( !sub_2BD1F0((int *)(v14 + 16), v13) )
      {
        std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,StructureStart *>,std::_Select1st<std::pair<ChunkIndex const,StructureStart *>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,StructureStart *>>>::_M_get_insert_unique_pos(
          &v16,
          (int)a1,
          v13);
        a2 = v16;
        v14 = v17;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v14 + 12) == 0 )
      {
        a2 = 0;
LABEL_14:
        v10 = a2;
        a2 = v14;
        goto LABEL_22;
      }
    }
    v14 = a2;
    goto LABEL_14;
  }
  if ( !sub_2BD1F0((int *)(a2 + 16), v13) )
    goto LABEL_29;
  if ( a1[4] != a2 )
  {
    v10 = sub_391DDC(a2);
    if ( sub_2BD1F0(v13, (int *)(v10 + 16)) )
    {
      if ( *(_DWORD *)(a2 + 12) != 0 )
        a2 = v10;
      else
        v10 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v10 = 0;
LABEL_22:
  if ( a2 != 0 )
  {
    v11 = true;
    if ( v10 != 0 )
    {
LABEL_27:
      sub_391E64(v11, v8, a2, v15);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v11 = (_DWORD *)a2 == v15 || sub_2BD1F0(v13, (int *)(a2 + 16));
    goto LABEL_27;
  }
  a2 = v10;
LABEL_29:
  operator delete(v8);
  return (int *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<std::string const,BlockMaterial * (*)(void)>> std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::string const,BlockMaterial * (*)(void)>>)
// address: 0x002C2BB4   size: 0x142 (322 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeISsSt4pairIKSsPFP13BlockMaterialvEESt10_Select1stIS6_ESt4lessISsESaIS6_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOSsEESH_IJEEEEESt17_Rb_tree_iteratorIS6_ESt23_Rb_tree_const_iteratorIS6_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r2
  int v9; // r7
  unsigned int v10; // r0
  int v12; // [sp+4h] [bp-18h]
  _DWORD *v13; // [sp+8h] [bp-14h]
  _DWORD *v14; // [sp+Ch] [bp-10h]
  int v15; // [sp+10h] [bp-Ch] BYREF
  int v16; // [sp+14h] [bp-8h]

  v7 = (_DWORD *)operator new(0x18u);
  v13 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8 = *a4;
    v13[4] = **a4;
    *v8 = &byte_55FB88;
    v13[5] = 0;
  }
  v14 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      a2 = a1[4];
      if ( std::operator<<char>() != 0 )
      {
        if ( a2 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_get_insert_unique_pos(
      &v15,
      (int)a1);
    v9 = v15;
    a2 = v16;
    goto LABEL_22;
  }
  if ( std::operator<<char>() != 0 )
  {
    if ( a1[3] != a2 )
    {
      v12 = sub_391E44(a2);
      if ( std::operator<<char>() == 0 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,BlockMaterial * (*)(void)>,std::_Select1st<std::pair<std::string const,BlockMaterial * (*)(void)>>,std::less<std::string>,std::allocator<std::pair<std::string const,BlockMaterial * (*)(void)>>>::_M_get_insert_unique_pos(
          &v15,
          (int)a1);
        a2 = v15;
        v12 = v16;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v12 + 12) == 0 )
      {
        a2 = 0;
LABEL_14:
        v9 = a2;
        a2 = v12;
        goto LABEL_22;
      }
    }
    v12 = a2;
    goto LABEL_14;
  }
  if ( std::operator<<char>() == 0 )
    goto LABEL_29;
  if ( a1[4] != a2 )
  {
    v9 = sub_391DDC(a2);
    if ( std::operator<<char>() != 0 )
    {
      if ( *(_DWORD *)(a2 + 12) != 0 )
        a2 = v9;
      else
        v9 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v9 = 0;
LABEL_22:
  if ( a2 != 0 )
  {
    v10 = 1;
    if ( v9 != 0 )
    {
LABEL_27:
      sub_391E64(v10, v13, a2, v14);
      ++a1[5];
      return v13;
    }
LABEL_24:
    if ( (_DWORD *)a2 == v14 )
      v10 = 1;
    else
      v10 = std::operator<<char>();
    goto LABEL_27;
  }
  a2 = v9;
LABEL_29:
  sub_3BDF80(v13 + 4);
  operator delete(v13);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>> std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Ogre::FixedString const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>)
// address: 0x002C35C6   size: 0x120 (288 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIN4Ogre11FixedStringESt4pairIKS1_P17BlockGeomTemplateESt10_Select1stIS6_ESt4lessIS1_ESaIS6_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESH_IJEEEEESt17_Rb_tree_iteratorIS6_ESt23_Rb_tree_const_iteratorIS6_EDpOT_'
Ogre::FixedString **__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Ogre::FixedString const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        int **a4)
{
  Ogre::FixedString **v7; // r0
  Ogre::FixedString **v8; // r5
  int v9; // r0
  void *v10; // r1
  Ogre::FixedString *v11; // r1
  int v12; // r2
  unsigned int v13; // r3
  int v14; // r0
  int v15; // r0
  _BOOL4 v16; // r0
  unsigned int v18; // [sp+0h] [bp-14h]
  _DWORD *v19; // [sp+4h] [bp-10h]
  int v20; // [sp+8h] [bp-Ch] BYREF
  int v21; // [sp+Ch] [bp-8h]

  v7 = (Ogre::FixedString **)operator new(0x18u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v9 = **a4;
    v8[4] = (Ogre::FixedString *)v9;
    Ogre::FixedString::addRef(v9, v10);
    v8[5] = nullptr;
  }
  v11 = (Ogre::FixedString *)(a1 + 1);
  v19 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      v12 = a1[4];
      if ( *(_DWORD *)(v12 + 16) < (unsigned int)v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_get_insert_unique_pos(
      &v20,
      (int)a1,
      v8 + 4);
    a2 = v20;
    v12 = v21;
    goto LABEL_22;
  }
  v13 = *(_DWORD *)(a2 + 16);
  v18 = (unsigned int)v8[4];
  if ( v18 >= v13 )
  {
    v11 = v8[4];
    if ( v13 >= v18 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v15 = 0;
    }
    else
    {
      v15 = sub_391DDC(a2);
      v11 = *(Ogre::FixedString **)(v15 + 16);
      if ( v18 >= (unsigned int)v11 )
      {
        std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockGeomTemplate *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockGeomTemplate *>>>::_M_get_insert_unique_pos(
          &v20,
          (int)a1,
          v8 + 4);
        v15 = v20;
        a2 = v21;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v15;
      }
      else
      {
        v15 = 0;
      }
    }
    v12 = a2;
    a2 = v15;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v12 = a2;
      goto LABEL_22;
    }
    v14 = sub_391E44(a2);
    v11 = *(Ogre::FixedString **)(v14 + 16);
    v12 = v14;
    if ( (unsigned int)v11 >= v18 )
      goto LABEL_29;
    if ( *(_DWORD *)(v14 + 12) != 0 )
      v12 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v12 != 0 )
  {
    v16 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v16, v8, v12, v19);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v16 = (_DWORD *)v12 == v19 || (unsigned int)v8[4] < *(_DWORD *)(v12 + 16);
    goto LABEL_27;
  }
LABEL_28:
  Ogre::FixedString::~FixedString(v8 + 4, v11);
  operator delete(v8);
  return (Ogre::FixedString **)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<Ogre::FixedString const,BlockTexElement *>> std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Ogre::FixedString const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<Ogre::FixedString const,BlockTexElement *>>)
// address: 0x002C3862   size: 0x120 (288 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIN4Ogre11FixedStringESt4pairIKS1_P15BlockTexElementESt10_Select1stIS6_ESt4lessIS1_ESaIS6_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESH_IJEEEEESt17_Rb_tree_iteratorIS6_ESt23_Rb_tree_const_iteratorIS6_EDpOT_'
Ogre::FixedString **__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Ogre::FixedString const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        int **a4)
{
  Ogre::FixedString **v7; // r0
  Ogre::FixedString **v8; // r5
  int v9; // r0
  void *v10; // r1
  Ogre::FixedString *v11; // r1
  int v12; // r2
  unsigned int v13; // r3
  int v14; // r0
  int v15; // r0
  _BOOL4 v16; // r0
  unsigned int v18; // [sp+0h] [bp-14h]
  _DWORD *v19; // [sp+4h] [bp-10h]
  int v20; // [sp+8h] [bp-Ch] BYREF
  int v21; // [sp+Ch] [bp-8h]

  v7 = (Ogre::FixedString **)operator new(0x18u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v9 = **a4;
    v8[4] = (Ogre::FixedString *)v9;
    Ogre::FixedString::addRef(v9, v10);
    v8[5] = nullptr;
  }
  v11 = (Ogre::FixedString *)(a1 + 1);
  v19 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      v12 = a1[4];
      if ( *(_DWORD *)(v12 + 16) < (unsigned int)v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_get_insert_unique_pos(
      &v20,
      (int)a1,
      v8 + 4);
    a2 = v20;
    v12 = v21;
    goto LABEL_22;
  }
  v13 = *(_DWORD *)(a2 + 16);
  v18 = (unsigned int)v8[4];
  if ( v18 >= v13 )
  {
    v11 = v8[4];
    if ( v13 >= v18 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v15 = 0;
    }
    else
    {
      v15 = sub_391DDC(a2);
      v11 = *(Ogre::FixedString **)(v15 + 16);
      if ( v18 >= (unsigned int)v11 )
      {
        std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockTexElement *>,std::_Select1st<std::pair<Ogre::FixedString const,BlockTexElement *>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockTexElement *>>>::_M_get_insert_unique_pos(
          &v20,
          (int)a1,
          v8 + 4);
        v15 = v20;
        a2 = v21;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v15;
      }
      else
      {
        v15 = 0;
      }
    }
    v12 = a2;
    a2 = v15;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v12 = a2;
      goto LABEL_22;
    }
    v14 = sub_391E44(a2);
    v11 = *(Ogre::FixedString **)(v14 + 16);
    v12 = v14;
    if ( (unsigned int)v11 >= v18 )
      goto LABEL_29;
    if ( *(_DWORD *)(v14 + 12) != 0 )
      v12 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v12 != 0 )
  {
    v16 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v16, v8, v12, v19);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v16 = (_DWORD *)v12 == v19 || (unsigned int)v8[4] < *(_DWORD *)(v12 + 16);
    goto LABEL_27;
  }
LABEL_28:
  Ogre::FixedString::~FixedString(v8 + 4, v11);
  operator delete(v8);
  return (Ogre::FixedString **)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>> std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Ogre::FixedString const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>)
// address: 0x002C3B7A   size: 0x122 (290 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIN4Ogre11FixedStringESt4pairIKS1_N16BlockMaterialMgr11ImgMeshInfoEESt10_Select1stIS6_ESt4lessIS1_ESaIS6_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS3_EESH_IJEEEEESt17_Rb_tree_iteratorIS6_ESt23_Rb_tree_const_iteratorIS6_EDpOT_'
Ogre::FixedString **__fastcall std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<Ogre::FixedString const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        int **a4)
{
  Ogre::FixedString **v7; // r0
  Ogre::FixedString **v8; // r5
  int v9; // r0
  void *v10; // r1
  Ogre::FixedString *v11; // r1
  int v12; // r2
  unsigned int v13; // r3
  int v14; // r0
  int v15; // r0
  _BOOL4 v16; // r0
  unsigned int v18; // [sp+0h] [bp-14h]
  _DWORD *v19; // [sp+4h] [bp-10h]
  int v20; // [sp+8h] [bp-Ch] BYREF
  int v21; // [sp+Ch] [bp-8h]

  v7 = (Ogre::FixedString **)operator new(0x1Cu);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v9 = **a4;
    v8[4] = (Ogre::FixedString *)v9;
    Ogre::FixedString::addRef(v9, v10);
    v8[5] = nullptr;
    v8[6] = nullptr;
  }
  v11 = (Ogre::FixedString *)(a1 + 1);
  v19 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      v12 = a1[4];
      if ( *(_DWORD *)(v12 + 16) < (unsigned int)v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_get_insert_unique_pos(
      &v20,
      (int)a1,
      v8 + 4);
    a2 = v20;
    v12 = v21;
    goto LABEL_22;
  }
  v13 = *(_DWORD *)(a2 + 16);
  v18 = (unsigned int)v8[4];
  if ( v18 >= v13 )
  {
    v11 = v8[4];
    if ( v13 >= v18 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v15 = 0;
    }
    else
    {
      v15 = sub_391DDC(a2);
      v11 = *(Ogre::FixedString **)(v15 + 16);
      if ( v18 >= (unsigned int)v11 )
      {
        std::_Rb_tree<Ogre::FixedString,std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>,std::_Select1st<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>,std::less<Ogre::FixedString>,std::allocator<std::pair<Ogre::FixedString const,BlockMaterialMgr::ImgMeshInfo>>>::_M_get_insert_unique_pos(
          &v20,
          (int)a1,
          v8 + 4);
        v15 = v20;
        a2 = v21;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v15;
      }
      else
      {
        v15 = 0;
      }
    }
    v12 = a2;
    a2 = v15;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v12 = a2;
      goto LABEL_22;
    }
    v14 = sub_391E44(a2);
    v11 = *(Ogre::FixedString **)(v14 + 16);
    v12 = v14;
    if ( (unsigned int)v11 >= v18 )
      goto LABEL_29;
    if ( *(_DWORD *)(v14 + 12) != 0 )
      v12 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v12 != 0 )
  {
    v16 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v16, v8, v12, v19);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v16 = (_DWORD *)v12 == v19 || (unsigned int)v8[4] < *(_DWORD *)(v12 + 16);
    goto LABEL_27;
  }
LABEL_28:
  Ogre::FixedString::~FixedString(v8 + 4, v11);
  operator delete(v8);
  return (Ogre::FixedString **)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<ChunkIndex const,bool>> std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<ChunkIndex&&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<ChunkIndex const,bool>>)
// address: 0x002C7896   size: 0x132 (306 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeI10ChunkIndexSt4pairIKS0_bESt10_Select1stIS3_ESt4lessIS0_ESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOS0_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
int __fastcall std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<ChunkIndex&&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r6
  _DWORD *v9; // r3
  int v10; // r7
  _BOOL4 v11; // r0
  int *v13; // [sp+4h] [bp-18h]
  int v14; // [sp+8h] [bp-14h]
  _DWORD *v15; // [sp+Ch] [bp-10h]
  int v16; // [sp+10h] [bp-Ch] BYREF
  int v17; // [sp+14h] [bp-8h]

  v7 = (_DWORD *)operator new(0x1Cu);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v9 = *a4;
    v8[4] = **a4;
    v8[5] = v9[1];
    *((_BYTE *)v8 + 24) = 0;
  }
  v13 = v8 + 4;
  v15 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      a2 = a1[4];
      if ( sub_2C6EA0((int *)(a2 + 16), v13) )
      {
        if ( a2 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_get_insert_unique_pos(
      &v16,
      (int)a1,
      v13);
    v10 = v16;
    a2 = v17;
    goto LABEL_22;
  }
  if ( sub_2C6EA0(v13, (int *)(a2 + 16)) )
  {
    if ( a1[3] != a2 )
    {
      v14 = sub_391E44(a2);
      if ( !sub_2C6EA0((int *)(v14 + 16), v13) )
      {
        std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,bool>,std::_Select1st<std::pair<ChunkIndex const,bool>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,bool>>>::_M_get_insert_unique_pos(
          &v16,
          (int)a1,
          v13);
        a2 = v16;
        v14 = v17;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v14 + 12) == 0 )
      {
        a2 = 0;
LABEL_14:
        v10 = a2;
        a2 = v14;
        goto LABEL_22;
      }
    }
    v14 = a2;
    goto LABEL_14;
  }
  if ( !sub_2C6EA0((int *)(a2 + 16), v13) )
    goto LABEL_29;
  if ( a1[4] != a2 )
  {
    v10 = sub_391DDC(a2);
    if ( sub_2C6EA0(v13, (int *)(v10 + 16)) )
    {
      if ( *(_DWORD *)(a2 + 12) != 0 )
        a2 = v10;
      else
        v10 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v10 = 0;
LABEL_22:
  if ( a2 != 0 )
  {
    v11 = true;
    if ( v10 != 0 )
    {
LABEL_27:
      sub_391E64(v11, v8, a2, v15);
      ++a1[5];
      return (int)v8;
    }
LABEL_24:
    v11 = (_DWORD *)a2 == v15 || sub_2C6EA0(v13, (int *)(a2 + 16));
    goto LABEL_27;
  }
  a2 = v10;
LABEL_29:
  operator delete(v8);
  return a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<std::string const,ActorAction *>> std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::string const,ActorAction *>>)
// address: 0x002D3B28   size: 0x150 (336 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeISsSt4pairIKSsP11ActorActionESt10_Select1stIS4_ESt4lessISsESaIS4_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESF_IJEEEEESt17_Rb_tree_iteratorIS4_ESt23_Rb_tree_const_iteratorIS4_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string const&>,std::tuple<>>(
        _DWORD *a1,
        _DWORD *a2,
        int a3,
        _DWORD *a4)
{
  _DWORD *v7; // r0
  char *v8; // r5
  int v9; // r4
  int v10; // r7
  unsigned int v11; // r0
  int v13; // [sp+4h] [bp-18h]
  _DWORD *v14; // [sp+8h] [bp-14h]
  _DWORD *v15; // [sp+Ch] [bp-10h]
  int v16; // [sp+10h] [bp-Ch] BYREF
  int v17; // [sp+14h] [bp-8h]

  v7 = (_DWORD *)operator new(0x18u);
  v14 = v7;
  v8 = (char *)(v7 + 4);
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    sub_3BEB1C(v8, *a4);
    v14[5] = 0;
  }
  v9 = (int)a2;
  v15 = a1 + 1;
  if ( a1 + 1 == a2 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( std::operator<<char>() != 0 )
      {
        if ( v9 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_get_insert_unique_pos(
      &v16,
      (int)a1);
    v10 = v16;
    v9 = v17;
    goto LABEL_22;
  }
  if ( std::operator<<char>() != 0 )
  {
    if ( (_DWORD *)a1[3] != a2 )
    {
      v13 = sub_391E44(a2);
      if ( std::operator<<char>() == 0 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,ActorAction *>,std::_Select1st<std::pair<std::string const,ActorAction *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ActorAction *>>>::_M_get_insert_unique_pos(
          &v16,
          (int)a1);
        v9 = v16;
        v13 = v17;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v13 + 12) == 0 )
      {
        v9 = 0;
LABEL_14:
        v10 = v9;
        v9 = v13;
        goto LABEL_22;
      }
    }
    v13 = (int)a2;
    goto LABEL_14;
  }
  if ( std::operator<<char>() == 0 )
    goto LABEL_29;
  if ( (_DWORD *)a1[4] != a2 )
  {
    v10 = sub_391DDC(a2);
    if ( std::operator<<char>() != 0 )
    {
      if ( *(_DWORD *)(v9 + 12) != 0 )
        v9 = v10;
      else
        v10 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v10 = 0;
LABEL_22:
  if ( v9 != 0 )
  {
    v11 = 1;
    if ( v10 != 0 )
    {
LABEL_27:
      sub_391E64(v11, v14, v9, v15);
      ++a1[5];
      return v14;
    }
LABEL_24:
    if ( (_DWORD *)v9 == v15 )
      v11 = 1;
    else
      v11 = std::operator<<char>();
    goto LABEL_27;
  }
  v9 = v10;
LABEL_29:
  sub_3BDF80(v8);
  operator delete(v14);
  return (_DWORD *)v9;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<std::string const,ParticleTemplate *>> std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::string const,ParticleTemplate *>>)
// address: 0x002E9488   size: 0x142 (322 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeISsSt4pairIKSsP16ParticleTemplateESt10_Select1stIS4_ESt4lessISsESaIS4_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOSsEESF_IJEEEEESt17_Rb_tree_iteratorIS4_ESt23_Rb_tree_const_iteratorIS4_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r2
  int v9; // r7
  unsigned int v10; // r0
  int v12; // [sp+4h] [bp-18h]
  _DWORD *v13; // [sp+8h] [bp-14h]
  _DWORD *v14; // [sp+Ch] [bp-10h]
  int v15; // [sp+10h] [bp-Ch] BYREF
  int v16; // [sp+14h] [bp-8h]

  v7 = (_DWORD *)operator new(0x18u);
  v13 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8 = *a4;
    v13[4] = **a4;
    *v8 = &byte_55FB88;
    v13[5] = 0;
  }
  v14 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      a2 = a1[4];
      if ( std::operator<<char>() != 0 )
      {
        if ( a2 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_get_insert_unique_pos(
      &v15,
      (int)a1);
    v9 = v15;
    a2 = v16;
    goto LABEL_22;
  }
  if ( std::operator<<char>() != 0 )
  {
    if ( a1[3] != a2 )
    {
      v12 = sub_391E44(a2);
      if ( std::operator<<char>() == 0 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,ParticleTemplate *>,std::_Select1st<std::pair<std::string const,ParticleTemplate *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ParticleTemplate *>>>::_M_get_insert_unique_pos(
          &v15,
          (int)a1);
        a2 = v15;
        v12 = v16;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v12 + 12) == 0 )
      {
        a2 = 0;
LABEL_14:
        v9 = a2;
        a2 = v12;
        goto LABEL_22;
      }
    }
    v12 = a2;
    goto LABEL_14;
  }
  if ( std::operator<<char>() == 0 )
    goto LABEL_29;
  if ( a1[4] != a2 )
  {
    v9 = sub_391DDC(a2);
    if ( std::operator<<char>() != 0 )
    {
      if ( *(_DWORD *)(a2 + 12) != 0 )
        a2 = v9;
      else
        v9 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v9 = 0;
LABEL_22:
  if ( a2 != 0 )
  {
    v10 = 1;
    if ( v9 != 0 )
    {
LABEL_27:
      sub_391E64(v10, v13, a2, v14);
      ++a1[5];
      return v13;
    }
LABEL_24:
    if ( (_DWORD *)a2 == v14 )
      v10 = 1;
    else
      v10 = std::operator<<char>();
    goto LABEL_27;
  }
  a2 = v9;
LABEL_29:
  sub_3BDF80(v13 + 4);
  operator delete(v13);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<ChunkIndex const,int>> std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<ChunkIndex const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<ChunkIndex const,int>>)
// address: 0x002EF354   size: 0x132 (306 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeI10ChunkIndexSt4pairIKS0_iESt10_Select1stIS3_ESt4lessIS0_ESaIS3_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS2_EESE_IJEEEEESt17_Rb_tree_iteratorIS3_ESt23_Rb_tree_const_iteratorIS3_EDpOT_'
int *__fastcall std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<ChunkIndex const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        int **a4)
{
  int *v7; // r0
  int *v8; // r6
  int *v9; // r3
  int v10; // r7
  _BOOL4 v11; // r0
  int *v13; // [sp+4h] [bp-18h]
  int v14; // [sp+8h] [bp-14h]
  _DWORD *v15; // [sp+Ch] [bp-10h]
  int v16; // [sp+10h] [bp-Ch] BYREF
  int v17; // [sp+14h] [bp-8h]

  v7 = (int *)operator new(0x1Cu);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v9 = *a4;
    v8[4] = **a4;
    v8[5] = v9[1];
    v8[6] = 0;
  }
  v13 = v8 + 4;
  v15 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      a2 = a1[4];
      if ( sub_2EECB0((int *)(a2 + 16), v13) )
      {
        if ( a2 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_get_insert_unique_pos(
      &v16,
      (int)a1,
      v13);
    v10 = v16;
    a2 = v17;
    goto LABEL_22;
  }
  if ( sub_2EECB0(v13, (int *)(a2 + 16)) )
  {
    if ( a1[3] != a2 )
    {
      v14 = sub_391E44(a2);
      if ( !sub_2EECB0((int *)(v14 + 16), v13) )
      {
        std::_Rb_tree<ChunkIndex,std::pair<ChunkIndex const,int>,std::_Select1st<std::pair<ChunkIndex const,int>>,std::less<ChunkIndex>,std::allocator<std::pair<ChunkIndex const,int>>>::_M_get_insert_unique_pos(
          &v16,
          (int)a1,
          v13);
        a2 = v16;
        v14 = v17;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v14 + 12) == 0 )
      {
        a2 = 0;
LABEL_14:
        v10 = a2;
        a2 = v14;
        goto LABEL_22;
      }
    }
    v14 = a2;
    goto LABEL_14;
  }
  if ( !sub_2EECB0((int *)(a2 + 16), v13) )
    goto LABEL_29;
  if ( a1[4] != a2 )
  {
    v10 = sub_391DDC(a2);
    if ( sub_2EECB0(v13, (int *)(v10 + 16)) )
    {
      if ( *(_DWORD *)(a2 + 12) != 0 )
        a2 = v10;
      else
        v10 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v10 = 0;
LABEL_22:
  if ( a2 != 0 )
  {
    v11 = true;
    if ( v10 != 0 )
    {
LABEL_27:
      sub_391E64(v11, v8, a2, v15);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v11 = (_DWORD *)a2 == v15 || sub_2EECB0(v13, (int *)(a2 + 16));
    goto LABEL_27;
  }
  a2 = v10;
LABEL_29:
  operator delete(v8);
  return (int *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,World *>> std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,World *>>)
// address: 0x002F1470   size: 0xFE (254 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKiP5WorldESt10_Select1stIS4_ESt4lessIiESaIS4_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESF_IJEEEEESt17_Rb_tree_iteratorIS4_ESt23_Rb_tree_const_iteratorIS4_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x18u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    v8[5] = 0;
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,World *>,std::_Select1st<std::pair<int const,World *>>,std::less<int>,std::allocator<std::pair<int const,World *>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<std::string const,std::string>> std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::string const,std::string>>)
// address: 0x002F6254   size: 0x144 (324 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeISsSt4pairIKSsSsESt10_Select1stIS2_ESt4lessISsESaIS2_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOSsEESD_IJEEEEESt17_Rb_tree_iteratorIS2_ESt23_Rb_tree_const_iteratorIS2_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r6
  _DWORD *v9; // r2
  int v10; // r7
  unsigned int v11; // r0
  int v13; // [sp+4h] [bp-18h]
  _DWORD *v14; // [sp+Ch] [bp-10h]
  int v15; // [sp+10h] [bp-Ch] BYREF
  int v16; // [sp+14h] [bp-8h]

  v7 = (_DWORD *)operator new(0x18u);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v9 = *a4;
    v8[4] = **a4;
    *v9 = &byte_55FB88;
    v8[5] = &byte_55FB88;
  }
  v14 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      a2 = a1[4];
      if ( std::operator<<char>() != 0 )
      {
        if ( a2 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos(
      &v15,
      (int)a1);
    v10 = v15;
    a2 = v16;
    goto LABEL_22;
  }
  if ( std::operator<<char>() != 0 )
  {
    if ( a1[3] != a2 )
    {
      v13 = sub_391E44(a2);
      if ( std::operator<<char>() == 0 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_get_insert_unique_pos(
          &v15,
          (int)a1);
        a2 = v15;
        v13 = v16;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v13 + 12) == 0 )
      {
        a2 = 0;
LABEL_14:
        v10 = a2;
        a2 = v13;
        goto LABEL_22;
      }
    }
    v13 = a2;
    goto LABEL_14;
  }
  if ( std::operator<<char>() == 0 )
    goto LABEL_29;
  if ( a1[4] != a2 )
  {
    v10 = sub_391DDC(a2);
    if ( std::operator<<char>() != 0 )
    {
      if ( *(_DWORD *)(a2 + 12) != 0 )
        a2 = v10;
      else
        v10 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v10 = 0;
LABEL_22:
  if ( a2 != 0 )
  {
    v11 = 1;
    if ( v10 != 0 )
    {
LABEL_27:
      sub_391E64(v11, v8, a2, v14);
      ++a1[5];
      return v8;
    }
LABEL_24:
    if ( (_DWORD *)a2 == v14 )
      v11 = 1;
    else
      v11 = std::operator<<char>();
    goto LABEL_27;
  }
  a2 = v10;
LABEL_29:
  sub_3BDF80(v8 + 5);
  sub_3BDF80(v8 + 4);
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<int const,ClientManager::IconDesc>> std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<int const,ClientManager::IconDesc>>)
// address: 0x002F64A2   size: 0x106 (262 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeIiSt4pairIKiN13ClientManager8IconDescEESt10_Select1stIS4_ESt4lessIiESaIS4_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJRS1_EESF_IJEEEEESt17_Rb_tree_iteratorIS4_ESt23_Rb_tree_const_iteratorIS4_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<int const&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r5
  int v9; // r2
  int v10; // r7
  int v11; // r3
  int v12; // r0
  int v13; // r0
  _BOOL4 v14; // r0
  _DWORD *v16; // [sp+0h] [bp-14h]
  _DWORD *v17; // [sp+4h] [bp-10h]
  int v18; // [sp+8h] [bp-Ch] BYREF
  int v19; // [sp+Ch] [bp-8h]

  v7 = (_DWORD *)operator new(0x2Cu);
  v8 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8[4] = **a4;
    j_memset(v8 + 5, 0, 0x18u);
  }
  v16 = v8 + 4;
  v17 = a1 + 1;
  if ( (_DWORD *)a2 == a1 + 1 )
  {
    if ( a1[5] != 0 )
    {
      v9 = a1[4];
      if ( *(_DWORD *)(v9 + 16) < v8[4] )
        goto LABEL_24;
    }
LABEL_29:
    std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_get_insert_unique_pos(
      &v18,
      (int)a1,
      v16);
    a2 = v18;
    v9 = v19;
    goto LABEL_22;
  }
  v10 = v8[4];
  v11 = *(_DWORD *)(a2 + 16);
  if ( v10 >= v11 )
  {
    if ( v11 >= v10 )
      goto LABEL_28;
    if ( a1[4] == a2 )
    {
      v13 = 0;
    }
    else
    {
      v13 = sub_391DDC(a2);
      if ( v10 >= *(_DWORD *)(v13 + 16) )
      {
        std::_Rb_tree<int,std::pair<int const,ClientManager::IconDesc>,std::_Select1st<std::pair<int const,ClientManager::IconDesc>>,std::less<int>,std::allocator<std::pair<int const,ClientManager::IconDesc>>>::_M_get_insert_unique_pos(
          &v18,
          (int)a1,
          v16);
        v13 = v18;
        a2 = v19;
      }
      else if ( *(_DWORD *)(a2 + 12) != 0 )
      {
        a2 = v13;
      }
      else
      {
        v13 = 0;
      }
    }
    v9 = a2;
    a2 = v13;
  }
  else
  {
    if ( a1[3] == a2 )
    {
      v9 = a2;
      goto LABEL_22;
    }
    v12 = sub_391E44(a2);
    v9 = v12;
    if ( *(_DWORD *)(v12 + 16) >= v10 )
      goto LABEL_29;
    if ( *(_DWORD *)(v12 + 12) != 0 )
      v9 = a2;
    else
      a2 = 0;
  }
LABEL_22:
  if ( v9 != 0 )
  {
    v14 = true;
    if ( a2 != 0 )
    {
LABEL_27:
      sub_391E64(v14, v8, v9, v17);
      ++a1[5];
      return v8;
    }
LABEL_24:
    v14 = (_DWORD *)v9 == v17 || v8[4] < *(_DWORD *)(v9 + 16);
    goto LABEL_27;
  }
LABEL_28:
  operator delete(v8);
  return (_DWORD *)a2;
}


//======================================================================
// std::_Rb_tree_iterator<std::pair<std::string const,ClientGame *>> std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(std::_Rb_tree_const_iterator<std::pair<std::string const,ClientGame *>>)
// address: 0x002F673C   size: 0x142 (322 bytes)
//======================================================================
// Alternative name is '_ZNSt8_Rb_treeISsSt4pairIKSsP10ClientGameESt10_Select1stIS4_ESt4lessISsESaIS4_EE22_M_emplace_hint_uniqueIJRKSt21piecewise_construct_tSt5tupleIJOSsEESF_IJEEEEESt17_Rb_tree_iteratorIS4_ESt23_Rb_tree_const_iteratorIS4_EDpOT_'
_DWORD *__fastcall std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_emplace_hint_unique<std::piecewise_construct_t const&,std::tuple<std::string &&>,std::tuple<>>(
        _DWORD *a1,
        int a2,
        int a3,
        _DWORD **a4)
{
  _DWORD *v7; // r0
  _DWORD *v8; // r2
  int v9; // r7
  unsigned int v10; // r0
  int v12; // [sp+4h] [bp-18h]
  _DWORD *v13; // [sp+8h] [bp-14h]
  _DWORD *v14; // [sp+Ch] [bp-10h]
  int v15; // [sp+10h] [bp-Ch] BYREF
  int v16; // [sp+14h] [bp-8h]

  v7 = (_DWORD *)operator new(0x18u);
  v13 = v7;
  if ( v7 != nullptr )
  {
    j_memset(v7, 0, 0x10u);
    v8 = *a4;
    v13[4] = **a4;
    *v8 = &byte_55FB88;
    v13[5] = 0;
  }
  v14 = a1 + 1;
  if ( a1 + 1 == (_DWORD *)a2 )
  {
    if ( a1[5] != 0 )
    {
      a2 = a1[4];
      if ( std::operator<<char>() != 0 )
      {
        if ( a2 != 0 )
          goto LABEL_24;
        goto LABEL_29;
      }
    }
LABEL_30:
    std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_get_insert_unique_pos(
      &v15,
      (int)a1);
    v9 = v15;
    a2 = v16;
    goto LABEL_22;
  }
  if ( std::operator<<char>() != 0 )
  {
    if ( a1[3] != a2 )
    {
      v12 = sub_391E44(a2);
      if ( std::operator<<char>() == 0 )
      {
        std::_Rb_tree<std::string,std::pair<std::string const,ClientGame *>,std::_Select1st<std::pair<std::string const,ClientGame *>>,std::less<std::string>,std::allocator<std::pair<std::string const,ClientGame *>>>::_M_get_insert_unique_pos(
          &v15,
          (int)a1);
        a2 = v15;
        v12 = v16;
        goto LABEL_14;
      }
      if ( *(_DWORD *)(v12 + 12) == 0 )
      {
        a2 = 0;
LABEL_14:
        v9 = a2;
        a2 = v12;
        goto LABEL_22;
      }
    }
    v12 = a2;
    goto LABEL_14;
  }
  if ( std::operator<<char>() == 0 )
    goto LABEL_29;
  if ( a1[4] != a2 )
  {
    v9 = sub_391DDC(a2);
    if ( std::operator<<char>() != 0 )
    {
      if ( *(_DWORD *)(a2 + 12) != 0 )
        a2 = v9;
      else
        v9 = 0;
      goto LABEL_22;
    }
    goto LABEL_30;
  }
  v9 = 0;
LABEL_22:
  if ( a2 != 0 )
  {
    v10 = 1;
    if ( v9 != 0 )
    {
LABEL_27:
      sub_391E64(v10, v13, a2, v14);
      ++a1[5];
      return v13;
    }
LABEL_24:
    if ( (_DWORD *)a2 == v14 )
      v10 = 1;
    else
      v10 = std::operator<<char>();
    goto LABEL_27;
  }
  a2 = v9;
LABEL_29:
  sub_3BDF80(v13 + 4);
  operator delete(v13);
  return (_DWORD *)a2;
}

