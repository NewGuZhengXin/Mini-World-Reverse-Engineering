// Hex-Rays pseudocode generated from libAppPlayJNI.so (IDA Pro 9.4)
// scope: std::pair

//======================================================================
// std::pair<std::_Rb_tree_iterator<std::pair<std::string const,int>>,bool> std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_unique<std::pair<std::string,int>>(std::pair<std::string,int> &&)
// address: 0x002B6554   size: 0x84 (132 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_insert_unique<std::pair<std::string,int>>(
        int a1,
        int a2,
        _DWORD *a3)
{
  _DWORD *v6; // r0
  _DWORD *v7; // r4
  int v8; // r3
  int v10; // [sp+4h] [bp-18h]
  unsigned int v11; // [sp+8h] [bp-14h]
  int v12; // [sp+Ch] [bp-10h]
  int v13; // [sp+10h] [bp-Ch] BYREF
  int v14; // [sp+14h] [bp-8h]

  std::_Rb_tree<std::string,std::pair<std::string const,int>,std::_Select1st<std::pair<std::string const,int>>,std::less<std::string>,std::allocator<std::pair<std::string const,int>>>::_M_get_insert_unique_pos(
    &v13,
    a2);
  v10 = v14;
  if ( v14 != 0 )
  {
    v12 = a2 + 4;
    v11 = 1;
    if ( v13 == 0 && v14 != v12 )
      v11 = std::operator<<char>();
    v6 = (_DWORD *)operator new(0x18u);
    v7 = v6;
    if ( v6 != nullptr )
    {
      j_memset(v6, 0, 0x10u);
      v7[4] = *a3;
      *a3 = &byte_55FB88;
      v7[5] = a3[1];
    }
    sub_391E64(v11, v7, v10, v12);
    v8 = *(_DWORD *)(a2 + 20);
    *(_DWORD *)a1 = v7;
    *(_DWORD *)(a2 + 20) = v8 + 1;
    *(_BYTE *)(a1 + 4) = 1;
  }
  else
  {
    *(_DWORD *)a1 = v13;
    *(_BYTE *)(a1 + 4) = 0;
  }
  return a1;
}


//======================================================================
// std::pair<std::_Rb_tree_iterator<std::pair<std::string const,std::string>>,bool> std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique<std::pair<std::string,std::string>>(std::pair<std::string,std::string> &&)
// address: 0x002B65DC   size: 0xBC (188 bytes)
//======================================================================
int __fastcall std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique<std::pair<std::string,std::string>>(
        int a1,
        _DWORD *a2,
        _DWORD *a3)
{
  _DWORD *v3; // r5
  unsigned int v7; // r0
  _DWORD *v8; // r3
  int v9; // r5
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  int v12; // r2
  int v13; // r3
  _DWORD *v15; // [sp+4h] [bp-10h]
  unsigned int v16; // [sp+8h] [bp-Ch]
  _DWORD *v17; // [sp+Ch] [bp-8h]

  v3 = (_DWORD *)a2[2];
  v17 = a2 + 1;
  v15 = a2 + 1;
  v7 = 1;
  while ( v3 != nullptr )
  {
    v7 = std::operator<<char>();
    if ( v7 != 0 )
      v8 = (_DWORD *)v3[2];
    else
      v8 = (_DWORD *)v3[3];
    v15 = v3;
    v3 = v8;
  }
  if ( v7 != 0 )
  {
    if ( v15 == (_DWORD *)a2[3] )
      goto LABEL_13;
    v9 = sub_391E44(v15);
  }
  else
  {
    v9 = (int)v15;
  }
  if ( std::operator<<char>() == 0 )
  {
    *(_DWORD *)a1 = v9;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
LABEL_13:
  if ( v15 == v17 )
    v16 = 1;
  else
    v16 = std::operator<<char>();
  v10 = (_DWORD *)operator new(0x18u);
  v11 = v10;
  if ( v10 != nullptr )
  {
    j_memset(v10, 0, 0x10u);
    v11[4] = *a3;
    v12 = a3[1];
    *a3 = &byte_55FB88;
    v11[5] = v12;
    a3[1] = &byte_55FB88;
  }
  sub_391E64(v16, v11, v15, v17);
  v13 = a2[5];
  *(_DWORD *)a1 = v11;
  a2[5] = v13 + 1;
  *(_BYTE *)(a1 + 4) = 1;
  return a1;
}


//======================================================================
// std::pair<std::_Rb_tree_iterator<ScheduleBlock const*>,bool> std::_Rb_tree<ScheduleBlock const*,ScheduleBlock const*,std::_Identity<ScheduleBlock const*>,ScheduleBlockCompare,std::allocator<ScheduleBlock const*>>::_M_insert_unique<ScheduleBlock const*>(ScheduleBlock const* &&)
// address: 0x002EDF30   size: 0xA8 (168 bytes)
//======================================================================
int __fastcall std::_Rb_tree<ScheduleBlock const*,ScheduleBlock const*,std::_Identity<ScheduleBlock const*>,ScheduleBlockCompare,std::allocator<ScheduleBlock const*>>::_M_insert_unique<ScheduleBlock const*>(
        int a1,
        _DWORD *a2,
        _DWORD **a3)
{
  int v3; // r5
  _DWORD *v6; // r4
  _BOOL4 v7; // r0
  int v8; // r3
  int v9; // r5
  _DWORD *v10; // r0
  _DWORD *v11; // r5
  _BOOL4 v13; // [sp+4h] [bp-10h]
  _DWORD *v15; // [sp+Ch] [bp-8h]

  v3 = a2[2];
  v15 = a2 + 1;
  v6 = a2 + 1;
  v7 = true;
  while ( v3 != 0 )
  {
    v7 = ScheduleBlock::lessThan(*a3, *(_DWORD **)(v3 + 16));
    if ( v7 )
      v8 = *(_DWORD *)(v3 + 8);
    else
      v8 = *(_DWORD *)(v3 + 12);
    v6 = (_DWORD *)v3;
    v3 = v8;
  }
  if ( v7 )
  {
    if ( v6 == (_DWORD *)a2[3] )
      goto LABEL_13;
    v9 = sub_391E44(v6);
  }
  else
  {
    v9 = (int)v6;
  }
  if ( !ScheduleBlock::lessThan(*(_DWORD **)(v9 + 16), *a3) )
  {
    *(_DWORD *)a1 = v9;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
LABEL_13:
  v13 = v6 == v15 || ScheduleBlock::lessThan(*a3, (_DWORD *)v6[4]);
  v10 = (_DWORD *)operator new(0x14u);
  v11 = v10;
  if ( v10 != nullptr )
  {
    j_memset(v10, 0, 0x10u);
    v11[4] = *a3;
  }
  sub_391E64(v13, v11, v6, v15);
  ++a2[5];
  *(_DWORD *)a1 = v11;
  *(_BYTE *)(a1 + 4) = 1;
  return a1;
}


//======================================================================
// std::pair<std::_Rb_tree_iterator<tagChunkFlagEntry>,bool> std::_Rb_tree<tagChunkFlagEntry,tagChunkFlagEntry,std::_Identity<tagChunkFlagEntry>,std::less<tagChunkFlagEntry>,std::allocator<tagChunkFlagEntry>>::_M_insert_unique<tagChunkFlagEntry const&>(tagChunkFlagEntry const&)
// address: 0x00308FDE   size: 0xB6 (182 bytes)
//======================================================================
int __fastcall std::_Rb_tree<tagChunkFlagEntry,tagChunkFlagEntry,std::_Identity<tagChunkFlagEntry>,std::less<tagChunkFlagEntry>,std::allocator<tagChunkFlagEntry>>::_M_insert_unique<tagChunkFlagEntry const&>(
        int a1,
        _DWORD *a2,
        int a3)
{
  int v3; // r5
  unsigned __int16 *v5; // r4
  _BOOL4 v7; // r0
  int v8; // r3
  int v9; // r5
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r3
  _DWORD *v14; // [sp+0h] [bp-14h]
  _BOOL4 v16; // [sp+8h] [bp-Ch]
  unsigned __int16 *v17; // [sp+Ch] [bp-8h]

  v3 = a2[2];
  v17 = (unsigned __int16 *)(a2 + 1);
  v5 = (unsigned __int16 *)(a2 + 1);
  v7 = true;
  while ( v3 != 0 )
  {
    v7 = tagChunkFlagEntry::operator<((unsigned __int16 *)a3, (unsigned __int16 *)(v3 + 16));
    if ( v7 )
      v8 = *(_DWORD *)(v3 + 8);
    else
      v8 = *(_DWORD *)(v3 + 12);
    v5 = (unsigned __int16 *)v3;
    v3 = v8;
  }
  if ( v7 )
  {
    if ( v5 == (unsigned __int16 *)a2[3] )
      goto LABEL_13;
    v9 = sub_391E44(v5);
  }
  else
  {
    v9 = (int)v5;
  }
  if ( !tagChunkFlagEntry::operator<((unsigned __int16 *)(v9 + 16), (unsigned __int16 *)a3) )
  {
    *(_DWORD *)a1 = v9;
    *(_BYTE *)(a1 + 4) = 0;
    return a1;
  }
LABEL_13:
  v16 = v5 == v17 || tagChunkFlagEntry::operator<((unsigned __int16 *)a3, v5 + 8);
  v10 = (_DWORD *)operator new(0x20u);
  v14 = v10;
  if ( v10 != nullptr )
  {
    j_memset(v10, 0, 0x10u);
    v11 = *(_DWORD *)(a3 + 4);
    v12 = *(_DWORD *)(a3 + 8);
    v14[4] = *(_DWORD *)a3;
    v14[5] = v11;
    v14[6] = v12;
    v14[7] = *(_DWORD *)(a3 + 12);
  }
  sub_391E64(v16, v14, v5, v17);
  ++a2[5];
  *(_DWORD *)a1 = v14;
  *(_BYTE *)(a1 + 4) = 1;
  return a1;
}

